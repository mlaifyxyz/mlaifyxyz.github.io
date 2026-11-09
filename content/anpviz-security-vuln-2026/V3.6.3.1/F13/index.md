---
title: "F13: Reversible fixed-key service credentials (V3.6.3.1)"
description: "unchanged or not remediated in supplied MCA50E image"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.6.3.1/f13/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

The same shipped JavaScript key and default ciphertexts are present in both images for external-service credentials.

**Status in this image:** unchanged or not remediated in supplied MCA50E image.

**Evidence limit:** Impact requires access to a configuration or backup containing non-default service credentials. No dedicated C export.

## Classification and severity

- **Proposed CWE:** [CWE-257](https://cwe.mitre.org/data/definitions/257.html), [CWE-312](https://cwe.mitre.org/data/definitions/312.html)
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** Impact requires access to a configuration or backup containing non-default service credentials. No dedicated C export.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- No dedicated C export or code screenshot for this finding/version. See the case review and supporting evidence; no source was invented.

## Related published CVEs

- [CVE-2026-100294](https://www.cve.org/CVERecord?id=CVE-2026-100294) — Anjvision YSSD-RTMP-H5 hard-coded cloud credentials; different product and issue record. This is **not** an ID for the IPC-D240W-S case.

## Case references

- [Evidence index](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.
