---
title: "F11: Account password sent over HTTP (V3.5.2.1)"
description: "original finding or lead"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.5.2.1/f11/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

A proposed password crosses an unencrypted HTTP request. The new image changes cookie storage but does not add HTTPS and logs plaintext in one path.

**Status in this image:** original finding or lead.

**Evidence limit:** The scored scenario is a local-network observer present during account setup; no token replay is claimed.

## Classification and severity

- **Proposed CWE:** [CWE-319](https://cwe.mitre.org/data/definitions/319.html)
- **CVSS v4.0 score:** **5.9 Medium**, provisional scenario
- **CVSS v4.0 vector:** `CVSS:4.0/AV:A/AC:L/AT:P/PR:N/UI:P/VC:H/VI:N/VA:N/SC:N/SI:N/SA:N`
- **Scoring basis:** Assumes a local-network observer during a user-initiated account request; account compromise is not added as an impact.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- No dedicated C export or code screenshot for this finding/version. See the case review and supporting evidence; no source was invented.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.
