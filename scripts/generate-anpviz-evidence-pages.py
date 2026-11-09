#!/usr/bin/env python3
"""Render the checked-in evidence dossiers as Hugo pages."""
import json
from collections import defaultdict
from pathlib import Path

SITE = Path(__file__).resolve().parents[1]
EVIDENCE = SITE / 'static/anpviz-security-vuln-2026/evidence'
CONTENT = SITE / 'content/anpviz-security-vuln-2026'
BASE_URL = '/anpviz-security-vuln-2026/'
REPO_URL = 'https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026'

index = json.loads((EVIDENCE / 'CVE-4.0/index.json').read_text())
screenshots = json.loads((EVIDENCE / 'screenshots/selection-manifest.json').read_text())
sources = defaultdict(set)
for item in screenshots:
    sources[(item['version'], item['finding'])].add(item['source_relative'])

for item in index:
    version, finding = item['version'], item['finding']
    dossier = EVIDENCE / 'CVE-4.0' / version / finding / 'README.md'
    body = dossier.read_text().split('\n', 1)[1].lstrip()
    body = body.replace('../../../screenshots/', BASE_URL + 'evidence/screenshots/')
    body = body.replace('../../../EVIDENCE-INDEX.md', BASE_URL + 'evidence/EVIDENCE-INDEX.md')
    body = body.replace('../../../../case-results/anpviz-remediation-3631c/out/20261106-110110-out/out/remediation-check.md', BASE_URL)
    body = body.replace('../../../../report/anpviz-disclosure-report.md', '/writing/anpviz-camera-security/')
    source_links = sorted(sources[(version, finding)])
    if source_links:
        body += '\n## Source exports\n\n'
        body += '\n'.join(f'- [{Path(path).name}]({BASE_URL}evidence/{path})' for path in source_links) + '\n'
    title = f"{finding}: {item['title']} ({version})"
    front = ('---\n' + f'title: {json.dumps(title)}\n'
             + f'description: {json.dumps(item["status"])}\n'
             + 'date: 2026-11-08T12:00:00Z\n'
             + f'url: {BASE_URL}{version.lower()}/{finding.lower()}/\n'
             + 'draft: false\ncomments: false\n---\n\n')
    target = CONTENT / version / finding / 'index.md'
    target.parent.mkdir(parents=True, exist_ok=True)
    target.write_text(front + f'[← All findings]({BASE_URL}) · [Repository]({REPO_URL})\n\n' + body)

by_finding = defaultdict(dict)
for item in index:
    by_finding[item['finding']][item['version']] = item
rows = ['| Finding | Old V3.5.2.1 | Supplied V3.6.3.1 | CWE | CVSS v4.0 old / new |',
        '|---|---|---|---|---|']
for finding in [f'F{i}' for i in range(1, 25)] + [f'N{i}' for i in range(1, 10)] + ['OTHER']:
    old = by_finding[finding]['V3.5.2.1']
    new = by_finding[finding]['V3.6.3.1']
    old_url = BASE_URL + 'v3.5.2.1/' + finding.lower() + '/'
    new_url = BASE_URL + 'v3.6.3.1/' + finding.lower() + '/'
    score = lambda x: f'{x["cvss4_score"]:.1f}' if x['cvss4_score'] is not None else 'unscored'
    rows.append(f'| {finding} — {old["title"]} | [old]({old_url}) | [new]({new_url}) | {", ".join(old["cwe"]) or "—"} | {score(old)} / {score(new)} |')

supporting = sorted(p for p in (EVIDENCE / 'supporting-evidence').rglob('*') if p.is_file())
support_links = '\n'.join(f'- [{p.relative_to(EVIDENCE / "supporting-evidence")}]({BASE_URL}evidence/{p.relative_to(EVIDENCE).as_posix()})'
                          for p in supporting)
landing = '''---
title: "Anpviz camera security evidence, 2026"
description: "Versioned decompiler evidence, screenshots, CWE mappings and provisional CVSS v4.0 assessments for an IPC-D240W-S disclosure."
lead: "An evidence index for the V3.5.2.1 camera capture and Anpviz's wrong-board V3.6.3.1 remediation image."
kicker: "Coordinated disclosure"
date: 2026-11-08T12:00:00Z
draft: false
---

This is the companion to my [initial security report](/writing/anpviz-camera-security/) and [remediation review](/writing/anpviz-remediation-review/). The [complete evidence repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026) contains the C-like Ghidra exports, 146 labeled source captures, 68 versioned finding dossiers, manifests and supporting excerpts. The same files are available below as [raw site assets](/anpviz-security-vuln-2026/evidence/README.md). This page is served at both **matthewd.xyz** and **matthewd.org**.

## Scope and disclosure

The old V3.5.2.1 image came from a read-only capture of my own IPC-D240W-S (MCA40E). Anpviz's supplied V3.6.3.1 image is for **MCA50E**; Anpviz acknowledged that error and told me not to flash it. I did not run the new image. Its findings are static and need confirmation on a correct MCA40E build. I reported the work privately beginning 17 October 2026 and coordinated with CERT/CC (VRF #26-10-FZTVG) and CISA (case #116607). The [repository README](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/README.md) gives the full CVD timeline and evidence limits.

The F and N labels are research IDs, **not assigned CVE identifiers**. CWE mappings are proposed. Eight conditional scenarios have provisional CVSS v4.0 scores; unscored rows lack a defensible numeric assessment or are inapplicable. Anpviz's model-scope review and response are ongoing. No vendor firmware binary, calculated credential, device identifier, or operational exploit packet is hosted here.

## Finding dossiers

Each page explains the old or new code, assessment limits, proposed CWE and CVSS status, and links its relevant source captures. The raw C exports are linked from the dossier pages.

''' + '\n'.join(rows) + '''

## Browse the raw evidence

- [Evidence index](/anpviz-security-vuln-2026/evidence/EVIDENCE-INDEX.md)
- [CVE candidate and CVSS v4.0 README](/anpviz-security-vuln-2026/evidence/CVE-4.0/README.md)
- [Screenshot manifest](/anpviz-security-vuln-2026/evidence/screenshots/selection-manifest.json)
- [Export hash manifest](/anpviz-security-vuln-2026/evidence/MANIFEST.tsv)
- [Repository on GitHub](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

### Supporting files

''' + support_links + '\n'
(CONTENT / '_index.md').write_text(landing)
print(f'Generated {len(index)} finding pages and landing index')
