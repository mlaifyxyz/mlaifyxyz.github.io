---
title: "OTHER: Shared-memory bounds hardening (V3.6.3.1)"
description: "context only"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.6.3.1/other/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

Old and new shared-memory read/write code is exported for comparison.

**Status in this image:** context only.

**Evidence limit:** This is contextual hardening evidence, not a standalone vulnerability or CVE candidate.

## Classification and severity

- **Proposed CWE:** None assigned; not a verified vulnerability.
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** This is contextual hardening evidence, not a standalone vulnerability or CVE candidate.
- **CVE candidacy:** No; excluded or contextual evidence.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [OTHER: shared-memory bounds check — OTHER-ShmRead_ShmWrite-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/OTHER/OTHER-ShmRead_ShmWrite-new-01-L13-L29.png) — `V3.6.3.1/OTHER/OTHER-ShmRead_ShmWrite-new.c` lines 13–29; source SHA-256 `634be15a3380438ab83d8901695e4c32580b649ec73fafd7611ea122238b65e1`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [OTHER-ShmRead_ShmWrite-new.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/OTHER/OTHER-ShmRead_ShmWrite-new.c)
