---
title: "F3: SADP reset verifier zero state (V3.5.2.1)"
description: "original finding or lead"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.5.2.1/f3/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

The verifier may accept a reset under a zero-state condition; the comparison code is unchanged.

**Status in this image:** original finding or lead.

**Evidence limit:** Runtime zero-state and reset reachability are unconfirmed.

## Classification and severity

- **Proposed CWE:** [CWE-287](https://cwe.mitre.org/data/definitions/287.html)
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** Runtime zero-state and reset reachability are unconfirmed.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [F3: reset verifier — F3-verify_resetpassword-old](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F3/F3-verify_resetpassword-old-01-L5-L18.png) — `V3.5.2.1/F3/F3-verify_resetpassword-old.c` lines 5–18; source SHA-256 `c854f624ac40de6cbb9a2ab47d1df924058331f78a27619324e960a39ead3bc5`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [F3-verify_resetpassword-old.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.5.2.1/F3/F3-verify_resetpassword-old.c)
