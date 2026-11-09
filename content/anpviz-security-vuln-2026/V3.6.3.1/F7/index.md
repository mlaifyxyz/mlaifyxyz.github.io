---
title: "F7: Inconsistent password length limits (V3.6.3.1)"
description: "insufficiently remediated in supplied MCA50E image"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.6.3.1/f7/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

The browser limit and server-side accepted/stored lengths disagree; the new image changes a UI check but retains inconsistent layers.

**Status in this image:** insufficiently remediated in supplied MCA50E image.

**Evidence limit:** The precise cause of the old live password-prefix observation is not fully established.

## Classification and severity

- **Proposed CWE:** [CWE-20](https://cwe.mitre.org/data/definitions/20.html)
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** The precise cause of the old live password-prefix observation is not fully established.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [F7: account password length — F7-MsgUserEditUser-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F7/F7-MsgUserEditUser-new-01-L20-L36.png) — `V3.6.3.1/F7/F7-MsgUserEditUser-new.c` lines 20–36; source SHA-256 `930b4a5ebff5ac4bb0f5167edad997131319b2d0bc1fdcbcafb65c0d1b960404`.
- [F7: account password length — F7-web_setEditUser-new.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F7/F7-web_setEditUser-new.annot-01-L41-L57.png) — `V3.6.3.1/F7/F7-web_setEditUser-new.annot.c` lines 41–57; source SHA-256 `437b6bd887a2e5a5207d4543d1a390cf1577a790485d05f97a2712b1e83dd846`.
- [F7: account password length — F7-web_setEditUser-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F7/F7-web_setEditUser-new-01-L41-L57.png) — `V3.6.3.1/F7/F7-web_setEditUser-new.c` lines 41–57; source SHA-256 `189e5fd33b61d38928ac47aabc65dc61087a8a4cd97946ed5dc359a641fd4c65`.
- [F7: account password length — F7-web_soap_parse_account-new.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F7/F7-web_soap_parse_account-new.annot-01-L17-L33.png) — `V3.6.3.1/F7/F7-web_soap_parse_account-new.annot.c` lines 17–33; source SHA-256 `9a6c6355bd8cafd62eff7825f162f5e45a023d52d376e64500d78f740a7e4fd8`.
- [F7: account password length — F7-web_soap_parse_account-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F7/F7-web_soap_parse_account-new-01-L17-L33.png) — `V3.6.3.1/F7/F7-web_soap_parse_account-new.c` lines 17–33; source SHA-256 `40efb5127ab7676705a7021d4a78b91fa9201d70750540c6c95ac67fb52bc6ae`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [F7-MsgUserEditUser-new.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/F7/F7-MsgUserEditUser-new.c)
- [F7-web_setEditUser-new.annot.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/F7/F7-web_setEditUser-new.annot.c)
- [F7-web_setEditUser-new.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/F7/F7-web_setEditUser-new.c)
- [F7-web_soap_parse_account-new.annot.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/F7/F7-web_soap_parse_account-new.annot.c)
- [F7-web_soap_parse_account-new.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/F7/F7-web_soap_parse_account-new.c)
