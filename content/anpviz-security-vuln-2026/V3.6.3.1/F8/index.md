---
title: "F8: Password change can leave account inaccessible (V3.6.3.1)"
description: "insufficiently remediated in supplied MCA50E image"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.6.3.1/f8/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

The UI changes cached state before the server confirms success; server handlers ignore a configuration save result.

**Status in this image:** insufficiently remediated in supplied MCA50E image.

**Evidence limit:** An account access problem was observed, but the complete causal chain and final stored state were not established.

## Classification and severity

- **Proposed CWE:** [CWE-20](https://cwe.mitre.org/data/definitions/20.html)
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** An account access problem was observed, but the complete causal chain and final stored state were not established.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [F8: account edit/save path — F8-mainctrl_user_edit_a-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F8/F8-mainctrl_user_edit_a-new-01-L62-L78.png) — `V3.6.3.1/F8/F8-mainctrl_user_edit_a-new.c` lines 62–78; source SHA-256 `42d434927500b029317781a15b1df7e2e848df19f945949c1f0467986004a256`.
- [F8: account edit/save path — F8-mainctrl_user_edit_b-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F8/F8-mainctrl_user_edit_b-new-01-L53-L69.png) — `V3.6.3.1/F8/F8-mainctrl_user_edit_b-new.c` lines 53–69; source SHA-256 `7197a761cc96f4975ae71edff97b1d987af6382926661b29649d2a33db3db67a`.
- [F8: account edit/save path — F8-mainctrl_user_edit_c-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F8/F8-mainctrl_user_edit_c-new-01-L31-L47.png) — `V3.6.3.1/F8/F8-mainctrl_user_edit_c-new.c` lines 31–47; source SHA-256 `0d34ad3c70dad428c4f8a9a61e3a8ee370c39e6ea591738d056cfa0824fdcb46`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [F8-mainctrl_user_edit_a-new.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/F8/F8-mainctrl_user_edit_a-new.c)
- [F8-mainctrl_user_edit_b-new.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/F8/F8-mainctrl_user_edit_b-new.c)
- [F8-mainctrl_user_edit_c-new.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/F8/F8-mainctrl_user_edit_c-new.c)
