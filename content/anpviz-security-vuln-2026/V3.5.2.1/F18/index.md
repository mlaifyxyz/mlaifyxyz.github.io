---
title: "F18: Shell command construction from device settings (V3.5.2.1)"
description: "original finding or lead"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.5.2.1/f18/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

The old MAC setter and other builders pass formatted values to a shell. The new setter adds weak validation and removes one shell write; other builders remain.

**Status in this image:** original finding or lead.

**Evidence limit:** A network-controlled value reaching each sink has not been demonstrated.

## Classification and severity

- **Proposed CWE:** [CWE-78](https://cwe.mitre.org/data/definitions/78.html)
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** A network-controlled value reaching each sink has not been demonstrated.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [F18: shell command construction — F18-dev_bind_location-old](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F18/F18-dev_bind_location-old-01-L60-L76.png) — `V3.5.2.1/F18/F18-dev_bind_location-old.c` lines 60–76; source SHA-256 `f496d48e6a8f4db81e48d6e8c535dd9422909b9f643f46dac8d9354a7554597b`.
- [F18: shell command construction — F18-is_mac_addr_valid-old](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F18/F18-is_mac_addr_valid-old-01-L4-L20.png) — `V3.5.2.1/F18/F18-is_mac_addr_valid-old.c` lines 4–20; source SHA-256 `8fce76751c54631bfc28e362e47d80c5bd3e90db76313276e51560cdbd57cc42`.
- [F18: shell command construction — F18-modifymac-old](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F18/F18-modifymac-old-01-L477-L493.png) — `V3.5.2.1/F18/F18-modifymac-old.c` lines 477–493; source SHA-256 `41d12dd1e9fe13897d4c999233bffb807e8de3fe97edcd03751ca31381304c41`.
- [F18: shell command construction — F18-serialmsg-old](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F18/F18-serialmsg-old-01-L13-L29.png) — `V3.5.2.1/F18/F18-serialmsg-old.c` lines 13–29; source SHA-256 `3909270be8baf77bab796a4b5f1630bfbc6e9191d6d2e71dee3cb1c63a38939d`.
- [F18: shell command construction — F18-set_mac-old](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F18/F18-set_mac-old-01-L6-L20.png) — `V3.5.2.1/F18/F18-set_mac-old.c` lines 6–20; source SHA-256 `5b17efd54c36ee328e4aa2cf7e74875c38b85807cf5f4ab75592f68197531b9c`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [F18-dev_bind_location-old.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.5.2.1/F18/F18-dev_bind_location-old.c)
- [F18-is_mac_addr_valid-old.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.5.2.1/F18/F18-is_mac_addr_valid-old.c)
- [F18-modifymac-old.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.5.2.1/F18/F18-modifymac-old.c)
- [F18-serialmsg-old.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.5.2.1/F18/F18-serialmsg-old.c)
- [F18-set_mac-old.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.5.2.1/F18/F18-set_mac-old.c)
