---
title: "F22: Production debug and Telnet capability (V3.6.3.1)"
description: "insufficiently remediated in supplied MCA50E image"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.6.3.1/f22/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

A valid administrator action enabled a debug service and Telnet in the old image. The new listener adds hash-based login and timeouts but retains the enable and Telnet paths.

**Status in this image:** insufficiently remediated in supplied MCA50E image.

**Evidence limit:** Old root shell was observed through the related F23 sink after administrator enablement. New end-to-end behavior is untested.

## Classification and severity

- **Proposed CWE:** [CWE-489](https://cwe.mitre.org/data/definitions/489.html)
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** Old-image scenario includes the administrator credential required to enable debug; new debug-chain behavior was not tested.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [F22: debug enable, login or Telnet — F22-dbg_slogtcp-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F22/F22-dbg_slogtcp-new-01-L106-L122.png) — `V3.6.3.1/F22/F22-dbg_slogtcp-new.c` lines 106–122; source SHA-256 `13a4552631ad719b1d11bdaa1a952ad42d10f4f5b45099fc2b64b3f18b0d0549`.
- [F22: debug enable, login or Telnet — F22-dbg_slogtcp-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F22/F22-dbg_slogtcp-new-02-L246-L262.png) — `V3.6.3.1/F22/F22-dbg_slogtcp-new.c` lines 246–262; source SHA-256 `13a4552631ad719b1d11bdaa1a952ad42d10f4f5b45099fc2b64b3f18b0d0549`.
- [F22: debug enable, login or Telnet — F22-dbg_slogtcp2-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F22/F22-dbg_slogtcp2-new-01-L15-L31.png) — `V3.6.3.1/F22/F22-dbg_slogtcp2-new.c` lines 15–31; source SHA-256 `d35454d93c5dcea269885bf54f9b5c9d91052ebce17f9e75d8d232f0b774bfbb`.
- [F22: debug enable, login or Telnet — F22-dbg_telnet-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F22/F22-dbg_telnet-new-01-L9-L19.png) — `V3.6.3.1/F22/F22-dbg_telnet-new.c` lines 9–19; source SHA-256 `3f4b80169e8454ef5e72d954ee71d0acf56b203b59349cfe81e4405ff9ddfd9d`.
- [F22: debug enable, login or Telnet — F22-web_cgi_handle-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F22/F22-web_cgi_handle-new-01-L19-L35.png) — `V3.6.3.1/F22/F22-web_cgi_handle-new.c` lines 19–35; source SHA-256 `77d4d0e83b818d0d4d99191b02a5420cb8f39df1575a96b701e4d2a48c000d88`.
- [F22: debug enable, login or Telnet — F22-web_openslog-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F22/F22-web_openslog-new-01-L7-L23.png) — `V3.6.3.1/F22/F22-web_openslog-new.c` lines 7–23; source SHA-256 `40791072393f515d556fef8ea396b48e0813def9527489e9d14b64432af52ef2`.
- [F22: debug enable, login or Telnet — F22-web_slogtcp-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F22/F22-web_slogtcp-new-01-L16-L32.png) — `V3.6.3.1/F22/F22-web_slogtcp-new.c` lines 16–32; source SHA-256 `4faf07983dcc4151f84dd322adb38c3d7343b5300d30d481da05daf53f52e7d5`.

## Related published CVEs

- [CVE-2026-100295](https://www.cve.org/CVERecord?id=CVE-2026-100295) — Anjvision YSSD-RTMP-H5 debug interface; different product and issue record. This is **not** an ID for the IPC-D240W-S case.

## Case references

- [Evidence index](/anpviz-security-vuln-2026/evidence/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [F22-dbg_slogtcp-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F22/F22-dbg_slogtcp-new.c)
- [F22-dbg_slogtcp2-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F22/F22-dbg_slogtcp2-new.c)
- [F22-dbg_telnet-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F22/F22-dbg_telnet-new.c)
- [F22-web_cgi_handle-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F22/F22-web_cgi_handle-new.c)
- [F22-web_openslog-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F22/F22-web_openslog-new.c)
- [F22-web_slogtcp-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F22/F22-web_slogtcp-new.c)
