---
title: "Anpviz camera security evidence, 2026"
description: "Versioned decompiler evidence, screenshots, CWE mappings and provisional CVSS v4.0 assessments for an IPC-D240W-S disclosure."
lead: "An evidence index for the V3.5.2.1 camera capture and Anpviz's wrong-board V3.6.3.1 remediation image."
kicker: "Coordinated disclosure"
date: 2026-11-08T12:00:00Z
draft: false
---

This is the companion to my [initial security report](/writing/anpviz-camera-security/) and [remediation review](/writing/anpviz-remediation-review/). The [complete evidence repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026) contains the C-like Ghidra exports, 146 labeled source captures, 68 versioned finding dossiers, manifests and supporting excerpts. The same files are available below as [raw site assets](/anpviz-security-vuln-2026/evidence/README.md). This page is served at both **matthewd.xyz** and **matthewd.org**.

## Scope and disclosure

The old V3.5.2.1 image came from a read-only capture of my own IPC-D240W-S (MCA40E). Anpviz's supplied V3.6.3.1 image is for **MCA50E**; Anpviz acknowledged that error and told me not to flash it. I did not run the new image. Its findings are static and need confirmation on a correct MCA40E build. I reported the work privately beginning 17 October 2026 and coordinated with CERT/CC (VRF #26-10-FZTVG) and CISA (case #116607). The [repository README](/anpviz-security-vuln-2026/evidence/README.md) gives the full CVD timeline and evidence limits.

The F and N labels are research IDs, **not assigned CVE identifiers**. CWE mappings are proposed. Eight conditional scenarios have provisional CVSS v4.0 scores; unscored rows lack a defensible numeric assessment or are inapplicable. Anpviz's model-scope review and response are ongoing. No vendor firmware binary, calculated credential, device identifier, or operational exploit packet is hosted here.

## Earlier public disclosures

These reports show that related camera products and firmware families had published authentication, credential, debug-access and update concerns before this investigation. They concern different models or firmware branches; their CVEs are **not automatically applicable** to my IPC-D240W-S or Anpviz's supplied MCA50E image. The [comparison and source notes](/anpviz-security-vuln-2026/evidence/PRIOR-DISCLOSURES.md) explain the limits.

- [Bishop Fox's 2018 SV3C L-Series advisory](https://www.bishopfox.com/news/2018/10/sv3c-l-series-hd-camera-multiple-vulnerabilities/) ([current advisory](https://bishopfox.com/blog/sv3c-l-series-hd-camera-advisory); [NVD CVE-2018-12666](https://nvd.nist.gov/vuln/detail/cve-2018-12666)) documented ten issues and said no fix had been released at publication.
- [Willgues's 2024 Anpviz report](https://willgu.es/pages/anpviz-ip-camera-vuln.html) documented CVE-2024-35341 through CVE-2024-35344 and an account of repeated requests for a patch timeline without a substantive vendor response.
- [andylee77's 2026 Anjvision disclosure repository](https://github.com/andylee77/anjvision-cve-2026) lists ten proposed issues in a different firmware family, including debug access and unsigned updates, and records contact with Anjvision and CERT/CC. Its README marks CVE IDs pending.

I published a [separate account of my disclosure decision](/writing/anpviz-disclosure-decision/) and the wrong-board firmware Anpviz sent for verification.

## Finding dossiers

Each page explains the old or new code, assessment limits, proposed CWE and CVSS status, and links its relevant source captures. The raw C exports are linked from the dossier pages.

| Finding | Old V3.5.2.1 | Supplied V3.6.3.1 | CWE | CVSS v4.0 old / new |
|---|---|---|---|---|
| F1 — Derived UDP recovery credential | [old](/anpviz-security-vuln-2026/v3.5.2.1/f1/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f1/) | CWE-798, CWE-288 | 7.2 / 7.2 |
| F2 — Debug command parser overflow | [old](/anpviz-security-vuln-2026/v3.5.2.1/f2/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f2/) | CWE-121 | unscored / unscored |
| F3 — SADP reset verifier zero state | [old](/anpviz-security-vuln-2026/v3.5.2.1/f3/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f3/) | CWE-287 | unscored / unscored |
| F4 — Serial-gated factory restore | [old](/anpviz-security-vuln-2026/v3.5.2.1/f4/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f4/) | CWE-306 | unscored / unscored |
| F5 — Broadcast reset SDK calls | [old](/anpviz-security-vuln-2026/v3.5.2.1/f5/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f5/) | CWE-306 | unscored / unscored |
| F6 — Unsigned firmware update path | [old](/anpviz-security-vuln-2026/v3.5.2.1/f6/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f6/) | CWE-306, CWE-347 | 6.0 / 6.0 |
| F7 — Inconsistent password length limits | [old](/anpviz-security-vuln-2026/v3.5.2.1/f7/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f7/) | CWE-20 | unscored / unscored |
| F8 — Password change can leave account inaccessible | [old](/anpviz-security-vuln-2026/v3.5.2.1/f8/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f8/) | CWE-20 | unscored / unscored |
| F9 — URL-reserved password characters | [old](/anpviz-security-vuln-2026/v3.5.2.1/f9/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f9/) | CWE-20 | unscored / unscored |
| F10 — Unescaped password in XML attributes | [old](/anpviz-security-vuln-2026/v3.5.2.1/f10/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f10/) | CWE-116 | unscored / unscored |
| F11 — Account password sent over HTTP | [old](/anpviz-security-vuln-2026/v3.5.2.1/f11/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f11/) | CWE-319 | 5.9 / 5.9 |
| F12 — Protocol authentication disabled by default | [old](/anpviz-security-vuln-2026/v3.5.2.1/f12/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f12/) | CWE-306, CWE-1188 | unscored / unscored |
| F13 — Reversible fixed-key service credentials | [old](/anpviz-security-vuln-2026/v3.5.2.1/f13/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f13/) | CWE-257, CWE-312 | unscored / unscored |
| F14 — Spoofable MAC/IP restriction | [old](/anpviz-security-vuln-2026/v3.5.2.1/f14/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f14/) | CWE-290 | unscored / unscored |
| F15 — Cloud update verification | [old](/anpviz-security-vuln-2026/v3.5.2.1/f15/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f15/) | CWE-347, CWE-494 | unscored / unscored |
| F16 — Credentials embedded in ONVIF media URI | [old](/anpviz-security-vuln-2026/v3.5.2.1/f16/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f16/) | CWE-522, CWE-200 | unscored / unscored |
| F17 — Serial-gated UDP control operations | [old](/anpviz-security-vuln-2026/v3.5.2.1/f17/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f17/) | CWE-306, CWE-284 | unscored / unscored |
| F18 — Shell command construction from device settings | [old](/anpviz-security-vuln-2026/v3.5.2.1/f18/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f18/) | CWE-78 | unscored / unscored |
| F19 — Runtime-derived root password | [old](/anpviz-security-vuln-2026/v3.5.2.1/f19/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f19/) | CWE-798, CWE-1393 | unscored / unscored |
| F20 — UDP serial parser stack copy | [old](/anpviz-security-vuln-2026/v3.5.2.1/f20/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f20/) | CWE-121, CWE-787 | unscored / unscored |
| F21 — ONVIF scope parser stack copies | [old](/anpviz-security-vuln-2026/v3.5.2.1/f21/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f21/) | CWE-121, CWE-787 | unscored / unscored |
| F22 — Production debug and Telnet capability | [old](/anpviz-security-vuln-2026/v3.5.2.1/f22/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f22/) | CWE-489 | 8.5 / unscored |
| F23 — Debug SetVersion root command injection | [old](/anpviz-security-vuln-2026/v3.5.2.1/f23/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f23/) | CWE-78 | 8.5 / unscored |
| F24 — Hikvision-compatible URL parser overflow | [old](/anpviz-security-vuln-2026/v3.5.2.1/f24/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/f24/) | CWE-121, CWE-787 | unscored / unscored |
| N1 — Potential unauthenticated upload routes | [old](/anpviz-security-vuln-2026/v3.5.2.1/n1/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/n1/) | CWE-306, CWE-862 | unscored / unscored |
| N2 — UDP 22000 lead excluded | [old](/anpviz-security-vuln-2026/v3.5.2.1/n2/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/n2/) | — | unscored / unscored |
| N3 — Config-file command channel | [old](/anpviz-security-vuln-2026/v3.5.2.1/n3/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/n3/) | CWE-78 | unscored / unscored |
| N4 — Case-insensitive account password comparison | [old](/anpviz-security-vuln-2026/v3.5.2.1/n4/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/n4/) | CWE-178 | unscored / unscored |
| N5 — Plain-HTTP delta fetch | [old](/anpviz-security-vuln-2026/v3.5.2.1/n5/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/n5/) | CWE-319, CWE-494 | unscored / unscored |
| N6 — No N6 finding assigned | [old](/anpviz-security-vuln-2026/v3.5.2.1/n6/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/n6/) | — | unscored / unscored |
| N7 — Plaintext password logging | [old](/anpviz-security-vuln-2026/v3.5.2.1/n7/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/n7/) | CWE-532 | unscored / unscored |
| N8 — Weakened default password rule | [old](/anpviz-security-vuln-2026/v3.5.2.1/n8/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/n8/) | CWE-521 | unscored / unscored |
| N9 — HTTP Digest replay checks | [old](/anpviz-security-vuln-2026/v3.5.2.1/n9/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/n9/) | CWE-294 | unscored / unscored |
| OTHER — Shared-memory bounds hardening | [old](/anpviz-security-vuln-2026/v3.5.2.1/other/) | [new](/anpviz-security-vuln-2026/v3.6.3.1/other/) | — | unscored / unscored |

## Browse the raw evidence

- [Evidence index](/anpviz-security-vuln-2026/evidence/EVIDENCE-INDEX.md)
- [CVE candidate and CVSS v4.0 README](/anpviz-security-vuln-2026/evidence/CVE-4.0/README.md)
- [Screenshot manifest](/anpviz-security-vuln-2026/evidence/screenshots/selection-manifest.json)
- [Export hash manifest](/anpviz-security-vuln-2026/evidence/MANIFEST.tsv)
- [Repository on GitHub](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026)

### Supporting files

- [CheckA-direct-board-calls.tsv](/anpviz-security-vuln-2026/evidence/supporting-evidence/CheckA-direct-board-calls.tsv)
- [CheckA-libtools-direct-callers-new.tsv](/anpviz-security-vuln-2026/evidence/supporting-evidence/CheckA-libtools-direct-callers-new.tsv)
- [CheckA-libtools-direct-callers-old.tsv](/anpviz-security-vuln-2026/evidence/supporting-evidence/CheckA-libtools-direct-callers-old.tsv)
- [F10-index.js-admin-reset-new.txt](/anpviz-security-vuln-2026/evidence/supporting-evidence/F10-index.js-admin-reset-new.txt)
- [F16-web_main_onvif_auth_global-new.disasm.txt](/anpviz-security-vuln-2026/evidence/supporting-evidence/F16-web_main_onvif_auth_global-new.disasm.txt)
- [F20-serial_extract-callers-new.txt](/anpviz-security-vuln-2026/evidence/supporting-evidence/F20-serial_extract-callers-new.txt)
- [F23-SetVersion-new.disasm.txt](/anpviz-security-vuln-2026/evidence/supporting-evidence/F23-SetVersion-new.disasm.txt)
- [F7-F8-F10-userManageConfig.js.diff](/anpviz-security-vuln-2026/evidence/supporting-evidence/F7-F8-F10-userManageConfig.js.diff)
- [S0-config.default-mca40e-old_vs_mca50e-new.diff](/anpviz-security-vuln-2026/evidence/supporting-evidence/S0-config.default-mca40e-old_vs_mca50e-new.diff)
- [endpoints-urls-new.tsv](/anpviz-security-vuln-2026/evidence/supporting-evidence/endpoints-urls-new.tsv)
- [endpoints-urls-old.tsv](/anpviz-security-vuln-2026/evidence/supporting-evidence/endpoints-urls-old.tsv)
- [hardening-old-vs-new.txt](/anpviz-security-vuln-2026/evidence/supporting-evidence/hardening-old-vs-new.txt)
- [inventory-diff.txt](/anpviz-security-vuln-2026/evidence/supporting-evidence/inventory-diff.txt)
- [web/userManageConfig-new.js](/anpviz-security-vuln-2026/evidence/supporting-evidence/web/userManageConfig-new.js)
- [web/userManageConfig-old.js](/anpviz-security-vuln-2026/evidence/supporting-evidence/web/userManageConfig-old.js)
