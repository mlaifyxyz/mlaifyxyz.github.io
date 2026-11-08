---
title: "F1: Derived UDP recovery credential (V3.6.3.1)"
description: "insufficiently remediated in supplied MCA50E image"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.6.3.1/f1/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

The serial-derived recovery value is accepted independently of configured accounts. The new image changes the derivation but retains the privileged branch.

**Status in this image:** insufficiently remediated in supplied MCA50E image.

**Evidence limit:** Old and new firmware expose identifier inputs in search responses; a live acceptance test was not performed on V3.6.3.1.

## Classification and severity

- **Proposed CWE:** [CWE-798](https://cwe.mitre.org/data/definitions/798.html), [CWE-288](https://cwe.mitre.org/data/definitions/288.html)
- **CVSS v4.0 score:** **7.2 High**, provisional scenario
- **CVSS v4.0 vector:** `CVSS:4.0/AV:A/AC:L/AT:N/PR:N/UI:N/VC:L/VI:H/VA:H/SC:N/SI:N/SA:N`
- **Scoring basis:** Conditional upper-bound scenario: a reachable UDP control path accepts the calculated value and permits configuration changes; no live login was performed.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [F1: recovery value and UDP login — F1-search_reply-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F1/F1-search_reply-new-01-L300-L316.png) — `V3.6.3.1/F1/F1-search_reply-new.c` lines 300–316; source SHA-256 `1063c047d9caa3953409c5c6fd406a411bebd505e27061f1112ba7379864ae0e`.
- [F1: recovery value and UDP login — F1-search_thread_init-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F1/F1-search_thread_init-new-01-L66-L82.png) — `V3.6.3.1/F1/F1-search_thread_init-new.c` lines 66–82; source SHA-256 `a467c3220af3a31fc8941966e8cfba43b20bd4fe4be436c09d56951453ab44b0`.
- [F1: recovery value and UDP login — F1-search_thread_init-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F1/F1-search_thread_init-new-02-L79-L95.png) — `V3.6.3.1/F1/F1-search_thread_init-new.c` lines 79–95; source SHA-256 `a467c3220af3a31fc8941966e8cfba43b20bd4fe4be436c09d56951453ab44b0`.
- [F1: recovery value and UDP login — F1-udp_login-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F1/F1-udp_login-new-01-L83-L99.png) — `V3.6.3.1/F1/F1-udp_login-new.c` lines 83–99; source SHA-256 `4577f04d3c2f6ca07cff0dedba000f3c6e9279171c59c87015dcfae4b1dbdedc`.
- [F1: recovery value and UDP login — F1-udp_login-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F1/F1-udp_login-new-02-L96-L112.png) — `V3.6.3.1/F1/F1-udp_login-new.c` lines 96–112; source SHA-256 `4577f04d3c2f6ca07cff0dedba000f3c6e9279171c59c87015dcfae4b1dbdedc`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](/anpviz-security-vuln-2026/evidence/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [F1-search_reply-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F1/F1-search_reply-new.c)
- [F1-search_thread_init-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F1/F1-search_thread_init-new.c)
- [F1-udp_login-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F1/F1-udp_login-new.c)
