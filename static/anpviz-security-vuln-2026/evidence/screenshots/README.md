# Source-code screenshot index

These PNGs are **rendered, line-numbered captures of existing Ghidra C-like exports**. They are not photographs of the Ghidra GUI and are not original vendor source code. Each image names its finding, source file, selected line range and a prefix of the source SHA-256. `selection-manifest.json` has the full hash, exact path, range and caption. The source files in `code_exports` remain unchanged.

The selection script chooses one or two short blocks per C export, with a relevant keyword where possible. A screenshot is an orientation aid, not complete function evidence. Always verify the linked source and surrounding control flow before making a vulnerability claim. `NO_CODE_EXPORT.md` marks a missing screenshot rather than fabricating source. N2 has no supporting UDP 22000 finding; N6 was never assigned. N4 reuses F1 code, and some F findings rely on web JavaScript, packet captures or configuration files that are outside the C export set.

## Contents

- `V3.5.2.1/<finding>/*.png`: owner-captured stock MCA40E image.
- `V3.6.3.1/<finding>/*.png`: vendor-supplied MCA50E image, **not flashed** to IPC-D240W-S.
- `selection-manifest.json`: every PNG's source, hash, line numbers and caption.
- `build_screenshots.py` and `render_screenshots.swift`: selectors and AppKit renderer.
- [Versioned CVE candidate dossiers](../CVE-4.0/README.md): finding interpretation, proposed CWE, provisional CVSS v4.0 and evidence limits.

## Coverage

| Finding | V3.5.2.1 | V3.6.3.1 |
|---|---:|---:|
| F1 | [4 PNG](./V3.5.2.1/F1/) | [5 PNG](./V3.6.3.1/F1/) |
| F2 | [1 PNG](./V3.5.2.1/F2/) | [1 PNG](./V3.6.3.1/F2/) |
| F3 | [1 PNG](./V3.5.2.1/F3/) | [1 PNG](./V3.6.3.1/F3/) |
| F4 | [1 PNG](./V3.5.2.1/F4/) | [1 PNG](./V3.6.3.1/F4/) |
| F5 | [no C export](./V3.5.2.1/F5/NO_CODE_EXPORT.md) | [no C export](./V3.6.3.1/F5/NO_CODE_EXPORT.md) |
| F6 | [3 PNG](./V3.5.2.1/F6/) | [3 PNG](./V3.6.3.1/F6/) |
| F7 | [1 PNG](./V3.5.2.1/F7/) | [5 PNG](./V3.6.3.1/F7/) |
| F8 | [3 PNG](./V3.5.2.1/F8/) | [3 PNG](./V3.6.3.1/F8/) |
| F9 | [no C export](./V3.5.2.1/F9/NO_CODE_EXPORT.md) | [no C export](./V3.6.3.1/F9/NO_CODE_EXPORT.md) |
| F10 | [no C export](./V3.5.2.1/F10/NO_CODE_EXPORT.md) | [no C export](./V3.6.3.1/F10/NO_CODE_EXPORT.md) |
| F11 | [no C export](./V3.5.2.1/F11/NO_CODE_EXPORT.md) | [no C export](./V3.6.3.1/F11/NO_CODE_EXPORT.md) |
| F12 | [4 PNG](./V3.5.2.1/F12/) | [4 PNG](./V3.6.3.1/F12/) |
| F13 | [no C export](./V3.5.2.1/F13/NO_CODE_EXPORT.md) | [no C export](./V3.6.3.1/F13/NO_CODE_EXPORT.md) |
| F14 | [1 PNG](./V3.5.2.1/F14/) | [1 PNG](./V3.6.3.1/F14/) |
| F15 | [no C export](./V3.5.2.1/F15/NO_CODE_EXPORT.md) | [no C export](./V3.6.3.1/F15/NO_CODE_EXPORT.md) |
| F16 | [10 PNG](./V3.5.2.1/F16/) | [15 PNG](./V3.6.3.1/F16/) |
| F17 | [3 PNG](./V3.5.2.1/F17/) | [3 PNG](./V3.6.3.1/F17/) |
| F18 | [5 PNG](./V3.5.2.1/F18/) | [5 PNG](./V3.6.3.1/F18/) |
| F19 | [2 PNG](./V3.5.2.1/F19/) | [9 PNG](./V3.6.3.1/F19/) |
| F20 | [2 PNG](./V3.5.2.1/F20/) | [2 PNG](./V3.6.3.1/F20/) |
| F21 | [3 PNG](./V3.5.2.1/F21/) | [3 PNG](./V3.6.3.1/F21/) |
| F22 | [4 PNG](./V3.5.2.1/F22/) | [7 PNG](./V3.6.3.1/F22/) |
| F23 | [2 PNG](./V3.5.2.1/F23/) | [3 PNG](./V3.6.3.1/F23/) |
| F24 | [2 PNG](./V3.5.2.1/F24/) | [2 PNG](./V3.6.3.1/F24/) |
| N1 | [no C export](./V3.5.2.1/N1/NO_CODE_EXPORT.md) | [14 PNG](./V3.6.3.1/N1/) |
| N2 | [no C export](./V3.5.2.1/N2/NO_CODE_EXPORT.md) | [no C export](./V3.6.3.1/N2/NO_CODE_EXPORT.md) |
| N3 | [no C export](./V3.5.2.1/N3/NO_CODE_EXPORT.md) | [no C export](./V3.6.3.1/N3/NO_CODE_EXPORT.md) |
| N4 | [no C export](./V3.5.2.1/N4/NO_CODE_EXPORT.md) | [no C export](./V3.6.3.1/N4/NO_CODE_EXPORT.md) |
| N5 | [no C export](./V3.5.2.1/N5/NO_CODE_EXPORT.md) | [no C export](./V3.6.3.1/N5/NO_CODE_EXPORT.md) |
| N6 | [no C export](./V3.5.2.1/N6/NO_CODE_EXPORT.md) | [no C export](./V3.6.3.1/N6/NO_CODE_EXPORT.md) |
| N7 | [no C export](./V3.5.2.1/N7/NO_CODE_EXPORT.md) | [no C export](./V3.6.3.1/N7/NO_CODE_EXPORT.md) |
| N8 | [no C export](./V3.5.2.1/N8/NO_CODE_EXPORT.md) | [no C export](./V3.6.3.1/N8/NO_CODE_EXPORT.md) |
| N9 | [no C export](./V3.5.2.1/N9/NO_CODE_EXPORT.md) | [5 PNG](./V3.6.3.1/N9/) |
| OTHER | [1 PNG](./V3.5.2.1/OTHER/) | [1 PNG](./V3.6.3.1/OTHER/) |
