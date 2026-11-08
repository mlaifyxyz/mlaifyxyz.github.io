#!/usr/bin/env python3
"""Select short, traceable source excerpts for rendered PNG captures."""
import hashlib
import json
import re
from pathlib import Path

BASE = Path(__file__).resolve().parents[1]
OUT = Path(__file__).resolve().parent
PATTERNS = {
    'F1': [r'Super password', r'our_md5_encode', r'www\.anjvision', r'get_chip_uuid', r'IPC_SERIALNUMBER'],
    'F2': [r'snprintf|strncat|strcat|strcpy|0xa\b', r'token|Token'],
    'F3': [r'verify_resetpassword|strncmp|return 1'],
    'F4': [r'RESTORECONFIG|security\.flag|SerialNumber|strcasecmp'],
    'F6': [r'crc|CRC|md5|MD5', r'uboot|Uboot|U-Boot'],
    'F7': [r'MsgUserEditUser|Password|strcpy|0x28|100'],
    'F8': [r'SetSystemConfig|strcpy|return|password'],
    'F12': [r'OnvifAuth|hik_auth|dh_auth|enable_onvif|memset'],
    'F14': [r'IsLimitIp|memcmp|strcmp|mac|MAC'],
    'F16': [r'password=%s|GetStreamUri|GetSnapshotUri|onvif_auth|rtsp_auth'],
    'F17': [r'SerialNumber|security\.flag|MODE_FACTORY|CLEAR_FACTORY|CLEAR_SOFT|strcasecmp'],
    'F18': [r'ubootargs2|is_mac_addr_valid|mysystem|serialmsg|dev_bind'],
    'F19': [r'flag\.set\.passwd|sn_password|passwd root|our_md5_encode|SYSTEM_ENCRYPTSN_MESSAGE|UUID'],
    'F20': [r'strcpy|snprintf|SerialNumber|SET_FACTORY_CFG'],
    'F21': [r'strcpy|strncpy|snprintf|SetScopes|RemoveScopes|0x32'],
    'F22': [r'AUTH\||telnetd|slogtcp|console\.cgi|authentication timeout'],
    'F23': [r'SetVersion|mysystem|write_buffer_to_file|is_valid|allow'],
    'F24': [r'strcpy\(local_ec0|strcpy\(local_eb0', r'char local_ec0|char local_eb0'],
    'N1': [r'OnvifAuth|FirmwareUpgrade|UploadConfig|PrivateKey|auth', r'StartSystemRestore'],
    'N9': [r'nonce|Nonce|Digest|realm|time\('],
    'OTHER': [r'ShmRead|ShmWrite|memcpy|bounds'],
}
TOPICS = {
    'F1': 'recovery value and UDP login', 'F2': 'debug parser bounds',
    'F3': 'reset verifier', 'F4': 'serial-gated restore',
    'F6': 'firmware update validation', 'F7': 'account password length',
    'F8': 'account edit/save path', 'F12': 'protocol authentication defaults',
    'F14': 'MAC/IP access restriction', 'F16': 'ONVIF media URI credentials',
    'F17': 'UDP control operation', 'F18': 'shell command construction',
    'F19': 'runtime root credential or related identifier',
    'F20': 'UDP serial copy', 'F21': 'ONVIF scope copy',
    'F22': 'debug enable, login or Telnet', 'F23': 'SetVersion command',
    'F24': 'Hikvision-compatible URL copy', 'N1': 'upload route authentication',
    'N9': 'HTTP Digest validation', 'OTHER': 'shared-memory bounds check',
}
PRIORITY = {
    'F6': [r'ssn --uboot', r'Check kernal CRC|Check rootfs CRC', r'md5sum %s'],
    'F16': [r'password=%s|MsgUserGetPassword|rtsp://', r'onvif_auth|rtsp_auth'],
    'F19': [r'passwd root', r'sn_password\(', r'sn_sha256_final', r'SERIALID=|SERIALID'],
    'F22': [r'AUTH\|', r'telnetd', r'console\.cgi'],
    'F23': [r'write_buffer_to_file|mysystem'],
}

def selected_lines(path, finding):
    lines = path.read_text(errors='replace').splitlines()
    found = []
    for pat in PRIORITY.get(finding, []) + PATTERNS.get(finding, [r'if \(']):
        for i, line in enumerate(lines):
            if i < 3:
                continue
            if re.search(pat, line, re.I) and all(abs(i - x) >= 8 for x in found):
                found.append(i)
                break
        if len(found) >= 3:
            break
    if not found:
        found = [next((i for i, line in enumerate(lines) if re.search(r'\b(if|return|strcpy|snprintf|sprintf)\b', line)), 0)]
    return lines, sorted(found)

items = []
for version in ('V3.5.2.1', 'V3.6.3.1'):
    for path in sorted((BASE / version).glob('*/*.c')):
        finding = path.parent.name
        lines, anchors = selected_lines(path, finding)
        for ordinal, anchor in enumerate(anchors, 1):
            start = max(0, anchor - 6)
            end = min(len(lines), anchor + 11)
            rel = path.relative_to(BASE)
            out = Path(version) / finding / f'{path.stem}-{ordinal:02d}-L{start+1}-L{end}.png'
            items.append({
                'version': version, 'finding': finding,
                'source': str(rel), 'source_relative': str(rel),
                'source_sha256': hashlib.sha256(path.read_bytes()).hexdigest(),
                'start_line': start + 1, 'end_line': end,
                'anchor_line': anchor + 1, 'image': str(Path('screenshots') / out),
                'caption': f'{finding}: {TOPICS.get(finding, "code path")} — {path.stem}',
                'lines': [f'{i+1:5d}  {lines[i]}' for i in range(start, end)],
            })

(OUT / 'selection-manifest.json').write_text(json.dumps(items, indent=2) + '\n')
by_group = {}
for item in items:
    by_group.setdefault((item['version'], item['finding']), []).append(item)
ids = [f'F{i}' for i in range(1, 25)] + [f'N{i}' for i in range(1, 10)] + ['OTHER']
rows = ['| Finding | V3.5.2.1 | V3.6.3.1 |', '|---|---:|---:|']
for finding in ids:
    cells = []
    for version in ('V3.5.2.1', 'V3.6.3.1'):
        group = by_group.get((version, finding), [])
        folder = OUT / version / finding
        folder.mkdir(parents=True, exist_ok=True)
        gap = folder / 'NO_CODE_EXPORT.md'
        if group:
            gap.unlink(missing_ok=True)
            cells.append(f'[{len(group)} PNG](./{version}/{finding}/)')
        else:
            gap.write_text(f'# {finding} — {version}: no C export screenshot\n\n'
                           'No dedicated C export exists in this version of `code_exports`, or the finding '
                           'is not applicable to this image. This is an evidence gap, not proof of safety. '
                           'See `../../../CVE-4.0/` and the case review for the applicable non-C evidence.\n')
            cells.append('[no C export](./' + version + '/' + finding + '/NO_CODE_EXPORT.md)')
    rows.append(f'| {finding} | {cells[0]} | {cells[1]} |')
readme = '''# Source-code screenshot index

These PNGs are **rendered, line-numbered captures of existing Ghidra C-like exports**. They are not photographs of the Ghidra GUI and are not original vendor source code. Each image names its finding, source file, selected line range and a prefix of the source SHA-256. `selection-manifest.json` has the full hash, exact path, range and caption. The source files in `code_exports` remain unchanged.

The selection script chooses one or two short blocks per C export, with a relevant keyword where possible. A screenshot is an orientation aid, not complete function evidence. Always verify the linked source and surrounding control flow before making a vulnerability claim. `NO_CODE_EXPORT.md` marks a missing screenshot rather than fabricating source. N2 has no supporting UDP 22000 finding; N6 was never assigned. N4 reuses F1 code, and some F findings rely on web JavaScript, packet captures or configuration files that are outside the C export set.

## Contents

- `V3.5.2.1/<finding>/*.png`: owner-captured stock MCA40E image.
- `V3.6.3.1/<finding>/*.png`: vendor-supplied MCA50E image, **not flashed** to IPC-D240W-S.
- `selection-manifest.json`: every PNG's source, hash, line numbers and caption.
- `build_screenshots.py` and `render_screenshots.swift`: selectors and AppKit renderer.
- [Versioned CVE candidate dossiers](../CVE-4.0/README.md): finding interpretation, proposed CWE, provisional CVSS v4.0 and evidence limits.

## Coverage

''' + '\n'.join(rows) + '\n'
(OUT / 'README.md').write_text(readme)
print(f'{len(items)} selected excerpts from {len(set(x["source"] for x in items))} C exports')
