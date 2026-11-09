---
title: "N1: Potential unauthenticated upload routes (V3.6.3.1)"
description: "new static lead in supplied MCA50E image"
date: 2026-11-08T12:00:00Z
url: /anpviz-security-vuln-2026/v3.6.3.1/n1/
draft: false
comments: false
---

[← All findings](/anpviz-security-vuln-2026/) · [Repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

**Document type:** local CVE candidate assessment, **not** a published CVE Record. **CVE ID:** unassigned. **Product scope:** Anpviz IPC-D240W-S V3.5.2.1 captured from the owner's MCA40E camera; the V3.6.3.1 comparison image is an MCA50E image sent in error and was not flashed to this model.

## Finding

The new ONVIF and HTTP firmware/config/key upload routes appear to depend on OnvifAuth, which defaults off, and firmware upload reaches the unsigned updater.

**Status in this image:** new static lead in supplied MCA50E image.

**Evidence limit:** High-priority static lead. Request-handler decompilation is ambiguous; no live unauthenticated upload was tested.

## Classification and severity

- **Proposed CWE:** [CWE-306](https://cwe.mitre.org/data/definitions/306.html), [CWE-862](https://cwe.mitre.org/data/definitions/862.html)
- **CVSS v4.0 score:** **Not scored** — current evidence does not support a defensible numeric impact/attack vector, this version lacks the issue, or the specific defect was fixed.
- **CVSS v4.0 vector:** Not assigned.
- **Scoring basis:** High-priority static lead. Request-handler decompilation is ambiguous; no live unauthenticated upload was tested.
- **CVE candidacy:** Needs coordinator/CNA review for grouping, affected models and version status; do not equate this finding ID with a CVE ID.

## Source screenshots

The PNGs are rendered, line-numbered excerpts of existing Ghidra C-like decompilation, **not** photographs of the Ghidra GUI or recovered vendor source. The original export is authoritative; image selection can omit relevant lines elsewhere in the function.

- [N1: upload route authentication — NEW-http_FirmwareUpgrade_a-new.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N1/NEW-http_FirmwareUpgrade_a-new.annot-01-L53-L69.png) — `V3.6.3.1/N1/NEW-http_FirmwareUpgrade_a-new.annot.c` lines 53–69; source SHA-256 `b8d7e4c20358080d74737a95f2a9f58f51b25d1a30f43a1c5de0d03eb7f01034`.
- [N1: upload route authentication — NEW-http_FirmwareUpgrade_a-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N1/NEW-http_FirmwareUpgrade_a-new-01-L55-L71.png) — `V3.6.3.1/N1/NEW-http_FirmwareUpgrade_a-new.c` lines 55–71; source SHA-256 `e649c7c6846b4456383cdbe67ca4b36bfdf152da9a22958ec9bb1d63041676fb`.
- [N1: upload route authentication — NEW-http_FirmwareUpgrade_b-new.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N1/NEW-http_FirmwareUpgrade_b-new.annot-01-L21-L36.png) — `V3.6.3.1/N1/NEW-http_FirmwareUpgrade_b-new.annot.c` lines 21–36; source SHA-256 `e05705c8b3360db0e24446277856d1200e26a77b27920cf1f3eabc758bc96fcd`.
- [N1: upload route authentication — NEW-http_FirmwareUpgrade_b-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N1/NEW-http_FirmwareUpgrade_b-new-01-L11-L27.png) — `V3.6.3.1/N1/NEW-http_FirmwareUpgrade_b-new.c` lines 11–27; source SHA-256 `80160217ac05ca3d1c9ad3e6daebc9952606ba06a66974272fd1eac83c958a4d`.
- [N1: upload route authentication — NEW-onvif_StartFirmwareUpgrade-new.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N1/NEW-onvif_StartFirmwareUpgrade-new.annot-01-L15-L31.png) — `V3.6.3.1/N1/NEW-onvif_StartFirmwareUpgrade-new.annot.c` lines 15–31; source SHA-256 `b66131741848896aa2e2157b13842270699a2398cb37f0723660a55870d7932c`.
- [N1: upload route authentication — NEW-onvif_StartFirmwareUpgrade-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N1/NEW-onvif_StartFirmwareUpgrade-new-01-L15-L31.png) — `V3.6.3.1/N1/NEW-onvif_StartFirmwareUpgrade-new.c` lines 15–31; source SHA-256 `b66131741848896aa2e2157b13842270699a2398cb37f0723660a55870d7932c`.
- [N1: upload route authentication — NEW-onvif_StartSystemRestore-new.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N1/NEW-onvif_StartSystemRestore-new.annot-01-L6-L22.png) — `V3.6.3.1/N1/NEW-onvif_StartSystemRestore-new.annot.c` lines 6–22; source SHA-256 `c165fd4220c0954aa539a32532f3b37f4846bc62707eee9a091920ed88f2f972`.
- [N1: upload route authentication — NEW-onvif_StartSystemRestore-new](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N1/NEW-onvif_StartSystemRestore-new-01-L6-L22.png) — `V3.6.3.1/N1/NEW-onvif_StartSystemRestore-new.c` lines 6–22; source SHA-256 `c165fd4220c0954aa539a32532f3b37f4846bc62707eee9a091920ed88f2f972`.
- [N1: upload route authentication — ws_1facc.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N1/ws_1facc.annot-01-L5-L21.png) — `V3.6.3.1/N1/ws_1facc.annot.c` lines 5–21; source SHA-256 `1832abc6b1fb2e62c952f7e6e4606b5161f99a33e3f1f872869fc2ab248506e8`.
- [N1: upload route authentication — ws_26dbc.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N1/ws_26dbc.annot-01-L7-L22.png) — `V3.6.3.1/N1/ws_26dbc.annot.c` lines 7–22; source SHA-256 `892a1f3bb004ad654e4e677d489d49bd528e29130e6c2201e3e92210e29f2f49`.
- [N1: upload route authentication — ws_26ec4.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N1/ws_26ec4.annot-01-L35-L51.png) — `V3.6.3.1/N1/ws_26ec4.annot.c` lines 35–51; source SHA-256 `a121286e329ca8f0a1c9c74f8e375934f850075b77d3703f3bda90aaf605983f`.
- [N1: upload route authentication — ws_52c94_struct_init.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N1/ws_52c94_struct_init.annot-01-L12-L28.png) — `V3.6.3.1/N1/ws_52c94_struct_init.annot.c` lines 12–28; source SHA-256 `6530599c84bef4bda0bb7efc716c2e714b32f237a083478c3f1bbe4420bf380f`.
- [N1: upload route authentication — ws_52d0c_authflag_init.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N1/ws_52d0c_authflag_init.annot-01-L35-L51.png) — `V3.6.3.1/N1/ws_52d0c_authflag_init.annot.c` lines 35–51; source SHA-256 `b919829bd4aa8f2b7b78b91a52a5df2b9c13d9887312ba1990e98939ba739b64`.
- [N1: upload route authentication — ws_6bd78.annot](/anpviz-security-vuln-2026/evidence/screenshots/V3.6.3.1/N1/ws_6bd78.annot-01-L16-L32.png) — `V3.6.3.1/N1/ws_6bd78.annot.c` lines 16–32; source SHA-256 `61abba67ef9d51210e34aeff078647709e00e50fd8a2e9b8d1f8da9520021bbd`.

## Related published CVEs

- No verified related CVE linked to this specific finding; this is not an exhaustive database search.

## Case references

- [Evidence index](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/EVIDENCE-INDEX.md)
- [Initial public report](https://matthewd.xyz/writing/anpviz-camera-security/)
- [Remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/)
- CERT/CC VRF #26-10-FZTVG; CISA Case #116607.

## Source exports

- [NEW-http_FirmwareUpgrade_a-new.annot.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/N1/NEW-http_FirmwareUpgrade_a-new.annot.c)
- [NEW-http_FirmwareUpgrade_a-new.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/N1/NEW-http_FirmwareUpgrade_a-new.c)
- [NEW-http_FirmwareUpgrade_b-new.annot.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/N1/NEW-http_FirmwareUpgrade_b-new.annot.c)
- [NEW-http_FirmwareUpgrade_b-new.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/N1/NEW-http_FirmwareUpgrade_b-new.c)
- [NEW-onvif_StartFirmwareUpgrade-new.annot.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/N1/NEW-onvif_StartFirmwareUpgrade-new.annot.c)
- [NEW-onvif_StartFirmwareUpgrade-new.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/N1/NEW-onvif_StartFirmwareUpgrade-new.c)
- [NEW-onvif_StartSystemRestore-new.annot.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/N1/NEW-onvif_StartSystemRestore-new.annot.c)
- [NEW-onvif_StartSystemRestore-new.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/N1/NEW-onvif_StartSystemRestore-new.c)
- [ws_1facc.annot.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/N1/ws_1facc.annot.c)
- [ws_26dbc.annot.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/N1/ws_26dbc.annot.c)
- [ws_26ec4.annot.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/N1/ws_26ec4.annot.c)
- [ws_52c94_struct_init.annot.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/N1/ws_52c94_struct_init.annot.c)
- [ws_52d0c_authflag_init.annot.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/N1/ws_52d0c_authflag_init.annot.c)
- [ws_6bd78.annot.c](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026/blob/main/V3.6.3.1/N1/ws_6bd78.annot.c)
