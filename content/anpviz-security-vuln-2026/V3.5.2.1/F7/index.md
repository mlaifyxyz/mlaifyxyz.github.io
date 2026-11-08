---
title: "F7: Inconsistent password length limits (V3.5.2.1)"
description: "original finding or lead"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.5.2.1/f7/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

The browser limit and server-side accepted/stored lengths disagree; the new image changes a UI check but retains inconsistent layers.

**Status in this image:** original finding or lead.

**Evidence limit:** The precise cause of the old live password-prefix observation is not fully established.

## Classification and severity

- **Proposed CWE:** [CWE-20](https://cwe.mitre.org/data/definitions/20.html)
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** The precise cause of the old live password-prefix observation is not fully established.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [F7: account password length — F7-MsgUserEditUser-old](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F7/F7-MsgUserEditUser-old-01-L20-L36.png) — `V3.5.2.1/F7/F7-MsgUserEditUser-old.c` lines 20–36; source SHA-256 `1dbcfbe66edf2bdcffef9df2b04bdeb9c1217a7d2906ee86ded83edad5493350`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](/anpviz-security-vuln-2026/evidence/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [F7-MsgUserEditUser-old.c](/anpviz-security-vuln-2026/evidence/V3.5.2.1/F7/F7-MsgUserEditUser-old.c)
