---
title: "F23: Debug SetVersion root command injection (V3.6.3.1)"
description: "specific reviewed defect remediated statically"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.6.3.1/f23/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

The old debug command placed an argument in a root shell command and was used in a live root-shell test after debug enablement. The new handler validates and writes directly to a file.

**Status in this image:** specific reviewed defect remediated statically.

**Evidence limit:** Requires the debug service to be enabled with a valid administrator credential in the observed old chain.

## Classification and severity

- **Proposed CWE:** [CWE-78](https://cwe.mitre.org/data/definitions/78.html)
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** Old-image scenario includes the administrator credential required to enable debug; new debug-chain behavior was not tested.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [F23: SetVersion command — F23-SetVersion-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F23/F23-SetVersion-new-01-L1-L14.png) — `V3.6.3.1/F23/F23-SetVersion-new.c` lines 1–14; source SHA-256 `3cc5a83e4e1051d89f278ec45fbde9aa2da147a95d0e4ea31e9d2725f70a9fba`.
- [F23: SetVersion command — F23-SetVersion-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F23/F23-SetVersion-new-02-L30-L46.png) — `V3.6.3.1/F23/F23-SetVersion-new.c` lines 30–46; source SHA-256 `3cc5a83e4e1051d89f278ec45fbde9aa2da147a95d0e4ea31e9d2725f70a9fba`.
- [F23: SetVersion command — F23-SetVersion-validator-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/F23/F23-SetVersion-validator-new-01-L5-L21.png) — `V3.6.3.1/F23/F23-SetVersion-validator-new.c` lines 5–21; source SHA-256 `01a42b3431a176f425200e6d38f46346a688f60bbc54b85ddc3cd3d5e896cddc`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [F23-SetVersion-new.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/F23/F23-SetVersion-new.c)
- [F23-SetVersion-validator-new.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/F23/F23-SetVersion-validator-new.c)
