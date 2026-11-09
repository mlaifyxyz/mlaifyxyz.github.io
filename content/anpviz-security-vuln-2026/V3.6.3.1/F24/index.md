---
title: "F24: Hikvision-compatible URL parser overflow (V3.6.3.1)"
description: "unchanged or not remediated in supplied MCA50E image"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.6.3.1/f24/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

Both images copy a URL substring into a 128-byte stack buffer without a bound.

**Status in this image:** unchanged or not remediated in supplied MCA50E image.

**Evidence limit:** Complete pre-auth reachability, crash and code execution are unverified.

## Classification and severity

- **Proposed CWE:** [CWE-121](https://cwe.mitre.org/data/definitions/121.html), [CWE-787](https://cwe.mitre.org/data/definitions/787.html)
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** Complete pre-auth reachability, crash and code execution are unverified.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [F24: Hikvision-compatible URL copy — F24-hik_url_parser-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F24/F24-hik_url_parser-new-01-L80-L96.png) — `V3.6.3.1/F24/F24-hik_url_parser-new.c` lines 80–96; source SHA-256 `25fdba2ff43d2138923a4d723cf9457723d38ce0fa383754709cd27aaefeeed2`.
- [F24: Hikvision-compatible URL copy — F24-hik_url_parser-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F24/F24-hik_url_parser-new-02-L1109-L1125.png) — `V3.6.3.1/F24/F24-hik_url_parser-new.c` lines 1109–1125; source SHA-256 `25fdba2ff43d2138923a4d723cf9457723d38ce0fa383754709cd27aaefeeed2`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [F24-hik_url_parser-new.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/F24/F24-hik_url_parser-new.c)
