---
title: "F21: ONVIF scope parser stack copies (V3.6.3.1)"
description: "specific reviewed defect remediated statically"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.6.3.1/f21/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

The old SetScopes/RemoveScopes and event-manager paths have unbounded or insufficiently bounded copies. The new scope handlers add count and length bounds; event-manager parser is removed.

**Status in this image:** specific reviewed defect remediated statically.

**Evidence limit:** Live crash or code execution was not tested.

## Classification and severity

- **Proposed CWE:** [CWE-121](https://cwe.mitre.org/data/definitions/121.html), [CWE-787](https://cwe.mitre.org/data/definitions/787.html)
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** Live crash or code execution was not tested.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [F21: ONVIF scope copy — F21-RemoveScopes-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F21/F21-RemoveScopes-new-01-L41-L54.png) — `V3.6.3.1/F21/F21-RemoveScopes-new.c` lines 41–54; source SHA-256 `881f0012885e9dfc9d3bc07186c733fa87e3ac80a5df92b3ef71a02fc9a3f06f`.
- [F21: ONVIF scope copy — F21-SetScopes-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F21/F21-SetScopes-new-01-L48-L64.png) — `V3.6.3.1/F21/F21-SetScopes-new.c` lines 48–64; source SHA-256 `d99e41f1d4c931ea7488c6a4a866d9f176f108bfb4d1eaa4561ee348186ba6de`.
- [F21: ONVIF scope copy — F21-scope_encode_helper-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F21/F21-scope_encode_helper-new-01-L12-L28.png) — `V3.6.3.1/F21/F21-scope_encode_helper-new.c` lines 12–28; source SHA-256 `62f9d0fea711c86c43e5d5541df20b5920b157d544cff3fc4b695104689a5d53`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](/anpviz-security-vuln-2026/evidence/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [F21-RemoveScopes-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F21/F21-RemoveScopes-new.c)
- [F21-SetScopes-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F21/F21-SetScopes-new.c)
- [F21-scope_encode_helper-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F21/F21-scope_encode_helper-new.c)
