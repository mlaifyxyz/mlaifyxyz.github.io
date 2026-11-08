---
title: "F20: UDP serial parser stack copy (V3.5.2.1)"
description: "original finding or lead"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.5.2.1/f20/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

The old parser copies a serial value without a destination bound. The new parser uses a size-aware snprintf at reviewed callers.

**Status in this image:** original finding or lead.

**Evidence limit:** Live crash or code execution was not tested.

## Classification and severity

- **Proposed CWE:** [CWE-121](https://cwe.mitre.org/data/definitions/121.html), [CWE-787](https://cwe.mitre.org/data/definitions/787.html)
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** Live crash or code execution was not tested.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [F20: UDP serial copy — F20-SET_FACTORY_CFG-old](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F20/F20-SET_FACTORY_CFG-old-01-L20-L36.png) — `V3.5.2.1/F20/F20-SET_FACTORY_CFG-old.c` lines 20–36; source SHA-256 `068a41d3b20eac20e8edef8e5711b5feaa8af32d38c9c24b17deb2f44481c471`.
- [F20: UDP serial copy — F20-serial_extract-old](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F20/F20-serial_extract-old-01-L13-L29.png) — `V3.5.2.1/F20/F20-serial_extract-old.c` lines 13–29; source SHA-256 `82a21510409bafb5a6c81a2f27ff6b2aea8bb2089231a831209b75984b796f99`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](/anpviz-security-vuln-2026/evidence/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [F20-SET_FACTORY_CFG-old.c](/anpviz-security-vuln-2026/evidence/V3.5.2.1/F20/F20-SET_FACTORY_CFG-old.c)
- [F20-serial_extract-old.c](/anpviz-security-vuln-2026/evidence/V3.5.2.1/F20/F20-serial_extract-old.c)
