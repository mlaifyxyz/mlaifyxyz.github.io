---
title: "F6: Unsigned firmware update path (V3.6.3.1)"
description: "unchanged or not remediated in supplied MCA50E image"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.6.3.1/f6/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

The package path uses CRC/MD5 without a publisher signature. The new package also contains a U-Boot image that this path can write.

**Status in this image:** unchanged or not remediated in supplied MCA50E image.

**Evidence limit:** Old live testing confirmed package download and temporary interruption, not persistent installation or takeover; new image was not run.

## Classification and severity

- **Proposed CWE:** [CWE-306](https://cwe.mitre.org/data/definitions/306.html), [CWE-347](https://cwe.mitre.org/data/definitions/347.html)
- **CVSS v4.0 score:** **6.0 Medium**, provisional scenario
- **CVSS v4.0 vector:** `CVSS:4.0/AV:A/AC:L/AT:P/PR:N/UI:N/VC:N/VI:N/VA:H/SC:N/SI:N/SA:N`
- **Scoring basis:** Scored only for the observed old temporary availability loss and analogous conditional new path; no persistent firmware installation or takeover is assumed.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [F6: firmware update validation — CheckB-updater-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F6/CheckB-updater-new-01-L257-L273.png) — `V3.6.3.1/F6/CheckB-updater-new.c` lines 257–273; source SHA-256 `379df4b432f7d050bfd909370f1b716f02d75aae89eade76abf7084841032ec9`.
- [F6: firmware update validation — CheckB-updater-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F6/CheckB-updater-new-02-L541-L557.png) — `V3.6.3.1/F6/CheckB-updater-new.c` lines 541–557; source SHA-256 `379df4b432f7d050bfd909370f1b716f02d75aae89eade76abf7084841032ec9`.
- [F6: firmware update validation — CheckB-updater-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F6/CheckB-updater-new-03-L1022-L1038.png) — `V3.6.3.1/F6/CheckB-updater-new.c` lines 1022–1038; source SHA-256 `379df4b432f7d050bfd909370f1b716f02d75aae89eade76abf7084841032ec9`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [CheckB-updater-new.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/F6/CheckB-updater-new.c)
