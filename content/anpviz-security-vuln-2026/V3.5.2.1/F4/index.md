---
title: "F4: Serial-gated factory restore (V3.5.2.1)"
description: "original finding or lead"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.5.2.1/f4/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

The old restore path uses a serial gate. The new image requires operator authentication but accepts the F1 recovery value.

**Status in this image:** original finding or lead.

**Evidence limit:** The earlier live reset test produced no observed reset; scope depends on runtime flag state.

## Classification and severity

- **Proposed CWE:** [CWE-306](https://cwe.mitre.org/data/definitions/306.html)
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** The earlier live reset test produced no observed reset; scope depends on runtime flag state.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [F4: serial-gated restore — F4-RESTORECONFIG-old](/anpviz-security-vuln-2026/evidence/screenshots/V3.5.2.1/F4/F4-RESTORECONFIG-old-01-L28-L44.png) — `V3.5.2.1/F4/F4-RESTORECONFIG-old.c` lines 28–44; source SHA-256 `da9e05cd636f533b411abe5173a9bbd2b68c14cb5045534ea471352e68c8462f`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [F4-RESTORECONFIG-old.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.5.2.1/F4/F4-RESTORECONFIG-old.c)
