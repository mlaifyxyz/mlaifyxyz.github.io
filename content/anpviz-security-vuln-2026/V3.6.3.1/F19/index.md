---
title: "F19: Runtime-derived root password (V3.6.3.1)"
description: "insufficiently remediated in supplied MCA50E image"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.6.3.1/f19/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

Both images set root password at runtime. The old general path derives it from serial; the new one uses serial, flash UUID and an embedded constant, with fixed-password vendor exceptions.

**Status in this image:** insufficiently remediated in supplied MCA50E image.

**Evidence limit:** The initial shared-hash framing was corrected. No generated credential or live root login on V3.6.3.1 is claimed.

## Classification and severity

- **Proposed CWE:** [CWE-798](https://cwe.mitre.org/data/definitions/798.html), [CWE-1393](https://cwe.mitre.org/data/definitions/1393.html)
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** The initial shared-hash framing was corrected. No generated credential or live root login on V3.6.3.1 is claimed.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [F19: runtime root credential or related identifier — F19-XMLGET_DeviceInfo-new.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F19/F19-XMLGET_DeviceInfo-new.annot-01-L73-L89.png) — `V3.6.3.1/F19/F19-XMLGET_DeviceInfo-new.annot.c` lines 73–89; source SHA-256 `339df2ef7e2afb26781db72d983a7d6cc41c61b17f04d165180988f348a75ed4`.
- [F19: runtime root credential or related identifier — F19-p2pid_apply_broadcast-new.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F19/F19-p2pid_apply_broadcast-new.annot-01-L182-L198.png) — `V3.6.3.1/F19/F19-p2pid_apply_broadcast-new.annot.c` lines 182–198; source SHA-256 `816aa326bdbab10a86e4726e295eeb796670bfa5b75d14af95c72e08e43d293a`.
- [F19: runtime root credential or related identifier — F19-p2pid_setup-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F19/F19-p2pid_setup-new-01-L179-L195.png) — `V3.6.3.1/F19/F19-p2pid_setup-new.c` lines 179–195; source SHA-256 `88c1d3bdfaffb7a47457a6cef57e7ac94d3740781757b7007787eb17effa7d6e`.
- [F19: runtime root credential or related identifier — F19-root_password_setter-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F19/F19-root_password_setter-new-01-L62-L78.png) — `V3.6.3.1/F19/F19-root_password_setter-new.c` lines 62–78; source SHA-256 `8fc9c8535bad1a6a9eb6b00cbde71a9a3ce26f06a28d31e84ff02fe329c73923`.
- [F19: runtime root credential or related identifier — F19-runtime_root_password-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F19/F19-runtime_root_password-new-01-L13-L29.png) — `V3.6.3.1/F19/F19-runtime_root_password-new.c` lines 13–29; source SHA-256 `0d5eca0c3c07fc43dbaef57027a0401200c02dfbbc3fa15b3429eb4f4863a8dc`.
- [F19: runtime root credential or related identifier — F19-runtime_root_password-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F19/F19-runtime_root_password-new-02-L37-L53.png) — `V3.6.3.1/F19/F19-runtime_root_password-new.c` lines 37–53; source SHA-256 `0d5eca0c3c07fc43dbaef57027a0401200c02dfbbc3fa15b3429eb4f4863a8dc`.
- [F19: runtime root credential or related identifier — F19-runtime_root_password-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F19/F19-runtime_root_password-new-03-L48-L60.png) — `V3.6.3.1/F19/F19-runtime_root_password-new.c` lines 48–60; source SHA-256 `0d5eca0c3c07fc43dbaef57027a0401200c02dfbbc3fa15b3429eb4f4863a8dc`.
- [F19: runtime root credential or related identifier — NEW-libtools-sn_password-new.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F19/NEW-libtools-sn_password-new.annot-01-L81-L97.png) — `V3.6.3.1/F19/NEW-libtools-sn_password-new.annot.c` lines 81–97; source SHA-256 `d2d3e35b5627037390f26077294ca833d0bd9a6dc9eae9abd6e3bf41f71fbd3a`.
- [F19: runtime root credential or related identifier — NEW-libtools-sn_password-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F19/NEW-libtools-sn_password-new-01-L81-L97.png) — `V3.6.3.1/F19/NEW-libtools-sn_password-new.c` lines 81–97; source SHA-256 `958583236b8e0e9df9d919187409e52ed4cbbaf5e1577da3b3d61830bc0acb2f`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](/anpviz-security-vuln-2026/evidence/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [F19-XMLGET_DeviceInfo-new.annot.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F19/F19-XMLGET_DeviceInfo-new.annot.c)
- [F19-p2pid_apply_broadcast-new.annot.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F19/F19-p2pid_apply_broadcast-new.annot.c)
- [F19-p2pid_setup-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F19/F19-p2pid_setup-new.c)
- [F19-root_password_setter-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F19/F19-root_password_setter-new.c)
- [F19-runtime_root_password-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F19/F19-runtime_root_password-new.c)
- [NEW-libtools-sn_password-new.annot.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F19/NEW-libtools-sn_password-new.annot.c)
- [NEW-libtools-sn_password-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/F19/NEW-libtools-sn_password-new.c)
