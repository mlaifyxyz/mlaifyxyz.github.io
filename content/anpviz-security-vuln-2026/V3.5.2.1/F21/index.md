---
title: "F21: ONVIF scope parser stack copies (V3.5.2.1)"
description: "original finding or lead"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.5.2.1/f21/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

The old SetScopes/RemoveScopes and event-manager paths have unbounded or insufficiently bounded copies. The new scope handlers add count and length bounds; event-manager parser is removed.

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

- [F21: ONVIF scope copy — F21-RemoveScopes-old](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F21/F21-RemoveScopes-old-01-L84-L100.png) — `V3.5.2.1/F21/F21-RemoveScopes-old.c` lines 84–100; source SHA-256 `89b4eb88e680a9827cdc44c9fc0a5f62994e69c5d8960a9270434d81731221cd`.
- [F21: ONVIF scope copy — F21-SetScopes-old](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F21/F21-SetScopes-old-01-L29-L45.png) — `V3.5.2.1/F21/F21-SetScopes-old.c` lines 29–45; source SHA-256 `5ca9312b6dedc39deded8b381816544236bdfcb3b4c8cc60b72af581c459fffd`.
- [F21: ONVIF scope copy — F21-getEventMgrInfo-old](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F21/F21-getEventMgrInfo-old-01-L15-L31.png) — `V3.5.2.1/F21/F21-getEventMgrInfo-old.c` lines 15–31; source SHA-256 `0902fc8a9337b49907301929df6bbf57f019b98c79a2b1c8de2e65ae6b5f9b73`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](/anpviz-security-vuln-2026/evidence/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [F21-RemoveScopes-old.c](/anpviz-security-vuln-2026/evidence/V3.5.2.1/F21/F21-RemoveScopes-old.c)
- [F21-SetScopes-old.c](/anpviz-security-vuln-2026/evidence/V3.5.2.1/F21/F21-SetScopes-old.c)
- [F21-getEventMgrInfo-old.c](/anpviz-security-vuln-2026/evidence/V3.5.2.1/F21/F21-getEventMgrInfo-old.c)
