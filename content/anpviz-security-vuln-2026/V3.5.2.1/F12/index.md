---
title: "F12: Protocol authentication disabled by default (V3.5.2.1)"
description: "original finding or lead"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.5.2.1/f12/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

The shipped parser defaults leave ONVIF, HIK and DAHUA authentication off in both reviewed images.

**Status in this image:** original finding or lead.

**Evidence limit:** Exact reachable operations depend on deployment settings and protocol handlers; RTSP authentication is separate.

## Classification and severity

- **Proposed CWE:** [CWE-306](https://cwe.mitre.org/data/definitions/306.html), [CWE-1188](https://cwe.mitre.org/data/definitions/1188.html)
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** Exact reachable operations depend on deployment settings and protocol handlers; RTSP authentication is separate.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [F12: protocol authentication defaults — F12-cfg_parse_network-old.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F12/F12-cfg_parse_network-old.annot-01-L52-L68.png) — `V3.5.2.1/F12/F12-cfg_parse_network-old.annot.c` lines 52–68; source SHA-256 `8bfbceaa3319c5081d1b7cdeac773c5d7fb9e7f981dfb701e57ac9731109a0d9`.
- [F12: protocol authentication defaults — F12-cfg_parse_network-old](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F12/F12-cfg_parse_network-old-01-L31-L47.png) — `V3.5.2.1/F12/F12-cfg_parse_network-old.c` lines 31–47; source SHA-256 `e0c9479d775b96bd7893c8e6fdd1f65a5cc216b61c77c5b7b6f0944910e02470`.
- [F12: protocol authentication defaults — F12-cfg_write_network-old.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F12/F12-cfg_write_network-old.annot-01-L16-L32.png) — `V3.5.2.1/F12/F12-cfg_write_network-old.annot.c` lines 16–32; source SHA-256 `ebcfd78daac4046733613058716593f8d0978d6f930b4b80d64c2b46d86277bf`.
- [F12: protocol authentication defaults — F12-cfg_write_network-old](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F12/F12-cfg_write_network-old-01-L16-L32.png) — `V3.5.2.1/F12/F12-cfg_write_network-old.c` lines 16–32; source SHA-256 `26e9b508b96e437b411569a5f7d4eaced20c067b7fdbac5b232ea4096576ba6c`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [F12-cfg_parse_network-old.annot.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.5.2.1/F12/F12-cfg_parse_network-old.annot.c)
- [F12-cfg_parse_network-old.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.5.2.1/F12/F12-cfg_parse_network-old.c)
- [F12-cfg_write_network-old.annot.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.5.2.1/F12/F12-cfg_write_network-old.annot.c)
- [F12-cfg_write_network-old.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.5.2.1/F12/F12-cfg_write_network-old.c)
