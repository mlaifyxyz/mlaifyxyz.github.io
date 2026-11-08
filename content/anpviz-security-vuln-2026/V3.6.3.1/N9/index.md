---
title: "N9: HTTP Digest replay checks (V3.6.3.1)"
description: "new static lead in supplied MCA50E image"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.6.3.1/n9/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

The new web server appears not to check nonce issuance or expiry, permitting replay of a captured Digest header in the reviewed path.

**Status in this image:** new static lead in supplied MCA50E image.

**Evidence limit:** No live replay test or complete exposure assessment.

## Classification and severity

- **Proposed CWE:** [CWE-294](https://cwe.mitre.org/data/definitions/294.html)
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** No live replay test or complete exposure assessment.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [N9: HTTP Digest validation — N9-web_digest_auth-new.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N9/N9-web_digest_auth-new.annot-01-L23-L39.png) — `V3.6.3.1/N9/N9-web_digest_auth-new.annot.c` lines 23–39; source SHA-256 `54abbc01bb80484e87909c73895268eaed56372eab2f67433bad72b8fc5513c7`.
- [N9: HTTP Digest validation — NEW-libtools-Digest-new.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N9/NEW-libtools-Digest-new.annot-01-L10-L26.png) — `V3.6.3.1/N9/NEW-libtools-Digest-new.annot.c` lines 10–26; source SHA-256 `8b87e9f257043e9f668eccdda188256865091e226a356fe5c578bd3f628d6ffb`.
- [N9: HTTP Digest validation — NEW-libtools-Digest-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N9/NEW-libtools-Digest-new-01-L10-L26.png) — `V3.6.3.1/N9/NEW-libtools-Digest-new.c` lines 10–26; source SHA-256 `a452cb9f960d6dbf2cbe501ed8aad1a9b76330d7ba6b27daa8e2a5fb216dd727`.
- [N9: HTTP Digest validation — NEW-libtools-Digest_AuthVerify-new.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N9/NEW-libtools-Digest_AuthVerify-new.annot-01-L8-L24.png) — `V3.6.3.1/N9/NEW-libtools-Digest_AuthVerify-new.annot.c` lines 8–24; source SHA-256 `d47c5355fe790cb6069366bef233996a8747feb0c5efd4b0148803148bcc6d05`.
- [N9: HTTP Digest validation — NEW-libtools-Digest_AuthVerify-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N9/NEW-libtools-Digest_AuthVerify-new-01-L50-L66.png) — `V3.6.3.1/N9/NEW-libtools-Digest_AuthVerify-new.c` lines 50–66; source SHA-256 `765c258852a56c7b15007423a9e2c30715ef67a6cbb278c008c2376b3c2e1526`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](/anpviz-security-vuln-2026/evidence/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [N9-web_digest_auth-new.annot.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/N9/N9-web_digest_auth-new.annot.c)
- [NEW-libtools-Digest-new.annot.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/N9/NEW-libtools-Digest-new.annot.c)
- [NEW-libtools-Digest-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/N9/NEW-libtools-Digest-new.c)
- [NEW-libtools-Digest_AuthVerify-new.annot.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/N9/NEW-libtools-Digest_AuthVerify-new.annot.c)
- [NEW-libtools-Digest_AuthVerify-new.c](/anpviz-security-vuln-2026/evidence/V3.6.3.1/N9/NEW-libtools-Digest_AuthVerify-new.c)
