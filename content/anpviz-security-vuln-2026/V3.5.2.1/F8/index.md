---
title: "F8: Password change can leave account inaccessible (V3.5.2.1)"
description: "original finding or lead"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.5.2.1/f8/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

The UI changes cached state before the server confirms success; server handlers ignore a configuration save result.

**Status in this image:** original finding or lead.

**Evidence limit:** An account access problem was observed, but the complete causal chain and final stored state were not established.

## Classification and severity

- **Proposed CWE:** [CWE-20](https://cwe.mitre.org/data/definitions/20.html)
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** An account access problem was observed, but the complete causal chain and final stored state were not established.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [F8: account edit/save path — F8-mainctrl_user_edit_a-old](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F8/F8-mainctrl_user_edit_a-old-01-L61-L77.png) — `V3.5.2.1/F8/F8-mainctrl_user_edit_a-old.c` lines 61–77; source SHA-256 `d2671e8cd596d1c752461a0ca30e5c18666b26e8c8b828b65c495ccefb9b02b8`.
- [F8: account edit/save path — F8-mainctrl_user_edit_b-old](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F8/F8-mainctrl_user_edit_b-old-01-L51-L67.png) — `V3.5.2.1/F8/F8-mainctrl_user_edit_b-old.c` lines 51–67; source SHA-256 `3af02b50927914a5b02fe7e3017a11a475026f21c3cd5244f61a1961b9e852fe`.
- [F8: account edit/save path — F8-mainctrl_user_edit_c-old](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F8/F8-mainctrl_user_edit_c-old-01-L30-L46.png) — `V3.5.2.1/F8/F8-mainctrl_user_edit_c-old.c` lines 30–46; source SHA-256 `27671393bc01ab6a9ea62454387b0b65f50451d9cefc5440eeb75842ed9fe469`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [F8-mainctrl_user_edit_a-old.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.5.2.1/F8/F8-mainctrl_user_edit_a-old.c)
- [F8-mainctrl_user_edit_b-old.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.5.2.1/F8/F8-mainctrl_user_edit_b-old.c)
- [F8-mainctrl_user_edit_c-old.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.5.2.1/F8/F8-mainctrl_user_edit_c-old.c)
