---
title: "F18: Shell command construction from device settings (V3.6.3.1)"
description: "insufficiently remediated in supplied MCA50E image"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.6.3.1/f18/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

The old MAC setter and other builders pass formatted values to a shell. The new setter adds weak validation and removes one shell write; other builders remain.

**Status in this image:** insufficiently remediated in supplied MCA50E image.

**Evidence limit:** A network-controlled value reaching each sink has not been demonstrated.

## Classification and severity

- **Proposed CWE:** [CWE-78](https://cwe.mitre.org/data/definitions/78.html)
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** A network-controlled value reaching each sink has not been demonstrated.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [F18: shell command construction — F18-dev_bind_location-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F18/F18-dev_bind_location-new-01-L68-L84.png) — `V3.6.3.1/F18/F18-dev_bind_location-new.c` lines 68–84; source SHA-256 `7d7c843bb736913ed45e7b85f012c000678285e7f446e328105fa78dbd58e725`.
- [F18: shell command construction — F18-is_mac_addr_valid-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F18/F18-is_mac_addr_valid-new-01-L4-L20.png) — `V3.6.3.1/F18/F18-is_mac_addr_valid-new.c` lines 4–20; source SHA-256 `9dc80e8d3f28b351c3d2bdbec832ad2f5db979688e697b02e388729d281ee561`.
- [F18: shell command construction — F18-modifymac-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F18/F18-modifymac-new-01-L515-L531.png) — `V3.6.3.1/F18/F18-modifymac-new.c` lines 515–531; source SHA-256 `bab0fabbf34c0c2526bf6ec8e9f46992a06801c0aa202951cee187fa0b22bc39`.
- [F18: shell command construction — F18-serialmsg-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F18/F18-serialmsg-new-01-L13-L29.png) — `V3.6.3.1/F18/F18-serialmsg-new.c` lines 13–29; source SHA-256 `b634a9dd903bfbbbe7ca8e2b17354109fcb327533b26500134a980b929da3921`.
- [F18: shell command construction — F18-set_mac-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F18/F18-set_mac-new-01-L11-L27.png) — `V3.6.3.1/F18/F18-set_mac-new.c` lines 11–27; source SHA-256 `fc52d103d7a446b457fb8a2f1999f6ed8293ce16b22a730ccf68bbe7e3b30744`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](/anpviz-security-vuln-2026/evidence/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [F18-dev_bind_location-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F18/F18-dev_bind_location-new.c)
- [F18-is_mac_addr_valid-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F18/F18-is_mac_addr_valid-new.c)
- [F18-modifymac-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F18/F18-modifymac-new.c)
- [F18-serialmsg-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F18/F18-serialmsg-new.c)
- [F18-set_mac-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F18/F18-set_mac-new.c)
