# Anpviz camera security research, October–November 2026

## Advisory: Anpviz / Anjoy (ANJOY888) IP cameras — vendor remediation status

This advisory is also available as a [standalone document](ADVISORY-2026-11-09.md) and a [readable blog post](https://matthewd.xyz/writing/anpviz-vendor-status-advisory/).

**Advisory date:** 2026-11-09 (UTC)
**Researcher:** Matthew Davis, M&L AI LLC (security@mlaify.io)
**Coordination:** CERT/CC VRF #26-10-FZTVG; CISA Case #116607
**Full technical report:** v1.13, findings F1–F24 (write-up: https://matthewd.xyz/writing/anpviz-camera-security/)
**Tested product:** Anpviz IPC-D240W-S (ONVIF model `A40E_IR_c0`), firmware V3.5.2.1 (build 2026-06-08)
**Likely affected:** other Anpviz U-Series and Anjoy/Anjvision ANJOY888-platform cameras, including rebrands. Anpviz states it maintains the ANJOY888 platform and is "identifying the full set of affected models/versions across the shared codebase."

### How to read this advisory

The **Vendor statement** column quotes or closely restates Anpviz's technical response of 6 November 2026 (Calvin Li, R&D Lead and Product Security Liaison). These statements are the vendor's own. **They have not been independently verified unless the Researcher column says so.**

The **Researcher check** column is a static comparison of a pre-release remediation build that Anpviz provided (V3.6.3.1, built for the MCA50E board, SHA-256 `83e4464e66d5f46bc0df1073350ca5be703cfae1a189262d3850b16124228cad`) against V3.5.2.1 and two earlier public releases. Nothing was installed or run. No fixed firmware for the IPC-D240W-S has been released publicly as of this date.

### Status by finding

| ID | Finding | Vendor statement (6 Nov 2026) | Researcher check |
|---|---|---|---|
| F1 | Deterministic UDP recovery (master) value checked before configured accounts | "Remediated": master-password branch "removed and replaced with a stronger, device-unique credential algorithm" | **Insufficient.** A master-password path still runs first; it is now derived from identifiers the camera discloses plus a constant in every image |
| F2 | Debug command service (TCP 9999) parser overflow | "Remediated": length bounds added | **Remediated** |
| F3 | SADP password-reset verifier zero-state | Not a defect; authentication "intentionally defaulted-off"; considering default-on with a manual-off option | **Not remediated** |
| F4 | Serial-gated factory reset over search UDP | As F3 | **Insufficient.** Serial gate unchanged; new operator check accepts the F1 value |
| F5 | Broadcast factory-reset SDK calls | As F3 | Undecidable statically (no receiver found) |
| F6 | Unauthenticated, unsigned boot-TFTP update | Signature verification "in design"; "expect this to be implemented within approximately one month"; separately "does not block" the release plan, "landing date will be per subsequent release notes" | **Not remediated.** CRC/MD5 only; updater can rewrite U-Boot after a CRC check |
| F7 | Full password fails while first 16 characters work | "Remediated": unified password length limits | **Insufficient.** Limit enforced only in one page's JavaScript |
| F8 | Failed password change leads to loss of access | "Remediated" with F7 | **Insufficient.** Client and server behaviour unchanged |
| F9 | URL-reserved characters break RTSP URL auth | "Remediated": URL-escaping, MD5-credential and Authorization options | **Not remediated** |
| F10 | Password interpolated into XML without escaping | "Remediated": escaping in XML and URL | **Insufficient.** User page fixed; other credential forms are not |
| F11 | New password sent over cleartext HTTP | "Remediated": "no longer stores or logs plaintext passwords" | **Insufficient.** No TLS in either build; the new web_server logs passwords in plaintext |
| F12 | ONVIF, HIK (8000) and DAHUA (37777) auth off by default | Not a defect; as F3 | **Not remediated.** Still off by default |
| F13 | Service credentials encrypted with a fixed, shipped DES key | "Retained as-is" | **Not remediated** |
| F14 | Tamper-proof control is MAC/IP based (spoofable) | "Expected design behavior" | **Not remediated** |
| F15 | Cloud FOTA/COTA channel without device-side signature check | "Retained as-is"; channel "already ha[s] strict authentication" | Undecidable statically; cloud update client absent from the pre-release build, unexplained |
| F16 | ONVIF media URIs embed Administrator name + MD5 password | "Remediated": URIs no longer embed credentials with auth enabled | **Insufficient.** Snapshot URI fixed; stream URI still embeds them under shipped defaults |
| F17 | Serial-gated UDP control plane (port 3001) | Not a defect; as F3 | **Insufficient.** As F4 |
| F18 | Command injection via MAC / u-boot args | "Remediated": MAC format validation, concatenation path removed | **Insufficient.** Validator checks length and colons only; other shell paths still concatenate input |
| F19 | Shared / derivable root password | "Remediated": "locked state, overwritten at runtime by a device-unique password" | **Insufficient.** Root password still derived at boot from disclosed identifiers plus an embedded constant |
| F20 | Unauthenticated-capable overflow in UDP serial parser | "Remediated": length limits | **Remediated** |
| F21 | Unauthenticated overflows in web_server ONVIF handlers | "Remediated": length and count limits | **Remediated** |
| F22 | Authenticated CGI enables debug service and Telnet | "Remediated": mandatory authentication and auto-timeout | **Insufficient.** Static, replayable token; enable path, telnet and FTP remain |
| F23 | Debug `SetVersion` argument reaches root shell | "Remediated": allowlist validation, written directly to file | **Remediated** |
| F24 | Stack overflow in hik_server URL/credential parser (port 8000) | Not assessed (vendor reports it had not received v1.13) | **Not remediated** |

**Totals.** Vendor: 14 remediated (F1, F2, F7–F11, F16, F18–F23); 5 left default-off pending a decision (F3, F4, F5, F12, F17); 3 retained or by design (F13, F14, F15); 1 in design (F6); F24 not yet assessed.
Researcher: 4 remediated (F2, F20, F21, F23); 11 insufficient; 7 not remediated; 2 undecidable statically.

The researcher also reported seven additional issues in the pre-release build to Anpviz and CERT/CC. Details are withheld until they are confirmed or fixed.

### Vendor's stated release plan (6 Nov 2026)

| Milestone | Vendor date |
|---|---|
| P0 remediation and internal verification | 2026-11-14 |
| P1 remediation and regression | 2026-11-28 |
| P2 remediation | 2026-12-31 |
| Unified regression and synchronized release / OTA | 2027-01-15 |
| F6 firmware signing | "approximately one month"; later "per subsequent release notes" |

These dates are the vendor's. The researcher will not track or verify them.

### Vendor architecture statement

Anpviz states that main service processes running as root are "standard for single-purpose ARM + embedded-Linux cameras" and that "the real risk metric is unauthenticated network command injection, which our fixes and default-on authentication address." Default-on authentication has not been adopted (see F3, F12).

### What owners should do now

- Do not expose these cameras to the internet. Put them on an isolated VLAN with no inbound access from untrusted networks.
- Block, at the network edge of that VLAN, UDP 3001 and the search/SADP ports, TCP 9999, TCP 23, TCP 8000 and TCP 37777, unless an NVR on the same isolated network needs them.
- Turn on ONVIF and HIK/DAHUA-compatibility authentication if your NVR supports it.
- Install firmware only from the vendor's official channel, for your exact model and board, and check the hash against the release notes. Treat any vendor "fixed" build as unverified until its fix list is published.

### Researcher's position

This advisory records the vendor's own statements next to one static check of one pre-release build. The researcher will not test further vendor builds or confirm future remediation claims. Fixes the vendor announces later should be read as vendor-reported.

### Timeline (UTC)

- 2026-10-17: Initial report to Anpviz
- 2026-10-19: Addendum to Anpviz; report filed with CISA (Case #116607) and CERT/CC (VRF #26-10-FZTVG)
- 2026-10-22: Vendor's 72-hour acknowledgement window passes with no reply
- 2026-10-28: Vendor acknowledges
- 2026-11-06: Vendor technical response and pre-release build received; findings published (~00:00 UTC); researcher's static check sent to the vendor and posted to CERT/CC
- 2026-11-09: This advisory

---

This repository is the evidence companion to the [IPC-D240W-S security report](https://matthewd.xyz/writing/anpviz-camera-security/), [remediation-image review](https://matthewd.xyz/writing/anpviz-remediation-review/), [disclosure-decision follow-up](https://matthewd.xyz/writing/anpviz-disclosure-decision/), and [final research follow-up](https://matthewd.xyz/writing/anpviz-vendor-response/). The browsable index is at [matthewd.xyz/anpviz-security-vuln-2026](https://matthewd.xyz/anpviz-security-vuln-2026/) and is also served at [matthewd.org/anpviz-security-vuln-2026](https://matthewd.org/anpviz-security-vuln-2026/).

**9 November update:** [Anpviz's stated remediation plan](VENDOR-RESPONSE-2026-11-09.md) is recorded separately from my static review. My independent investigation and testing are complete. Anpviz remains responsible for validating and releasing fixes for its products; I have not certified its development branch or tested a compatible MCA40E update.

I analyzed V3.5.2.1 from a read-only capture of my own Anpviz IPC-D240W-S (MCA40E). The V3.6.3.1 comparison image was supplied by Anpviz on 6 November 2026 as a remediation build but identifies as **MCA50E**, a different board profile. Anpviz acknowledged the model-mapping error on 7 November and instructed me not to flash that image. I did not run or install it. Findings about its behavior are static assessments of the supplied image, not a validation of a fix for my camera. Affected models and versions across the shared firmware platform remain to be established.

## Coordinated vulnerability disclosure

I sent the initial private report to Anpviz on 17 October 2026 and filed with CISA/CERT/CC on 19 October (CERT/CC VRF #26-10-FZTVG; CISA Case #116607). Anpviz acknowledged receipt on 28 October. On 4 November, support referred the case to R&D. I published the initial research summary on 5 November while seeking urgent coordination for earlier disclosure. On 6 November, R&D supplied an item-by-item assessment and the wrong-board V3.6.3.1 image. On 7 November, R&D apologized, said not to flash it, and promised a correct MCA40E image and further written responses through CERT/CC VINCE. The proposed 26 January 2027 disclosure date was **not** a coordinator-approved deadline. This timeline records the correspondence; it does not assert that Anpviz has intentionally exploited devices.

My review of the MCA50E image classified four of F1–F24 as remediated as stated (F2, F20, F21, F23), 11 as insufficiently remediated, seven as unchanged or not remediated, and two as undecidable statically. These are research classifications, not 24 demonstrated live exploits or assigned CVEs. A possible unauthenticated upload path (N1) and other new-image leads need a correct-model build and isolated testing. The vendor has been asked to address the detailed comparison. Later evidence or a correct image may change these conclusions.

## Repository contents

| Path | Contents |
|---|---|
| [EVIDENCE-INDEX.md](EVIDENCE-INDEX.md) | F1–F24, N and OTHER cross-reference, source-code inventory, and finding limits. |
| [`V3.5.2.1/`](V3.5.2.1/) | C-like Ghidra decompiler exports from the owner-captured stock image. |
| [`V3.6.3.1/`](V3.6.3.1/) | C-like Ghidra decompiler exports from the vendor-supplied MCA50E image. |
| [`V3.3.0.6/`](V3.3.0.6/) and [`V3.4.5.6/`](V3.4.5.6/) | Earlier reference exports for F1 only. |
| [screenshots/](screenshots/README.md) | 146 labeled, line-numbered PNG captures from 124 C exports, with a source-hash manifest. These are rendered excerpts, not Ghidra GUI screenshots. |
| [CVE-4.0/](CVE-4.0/README.md) | 68 old/new finding dossiers with proposed CWE classes, CVSS v4.0 vectors where defensible, links to screenshots, and evidence limits. “CVE-4.0” is a local folder name; CVSS is version 4.0, while CVE IDs are unassigned. |
| [supporting-evidence/](supporting-evidence/) | Non-C diff, JavaScript, configuration and inventory excerpts. |
| [MANIFEST.tsv](MANIFEST.tsv), [SUPPORTING-MANIFEST.tsv](SUPPORTING-MANIFEST.tsv) | Export paths and hashes. Paths to the private source archive are deliberately omitted. |
| [PRIOR-DISCLOSURES.md](PRIOR-DISCLOSURES.md) | Earlier public reports involving Anpviz, Anjvision or related reseller firmware, with scope and overlap cautions. |

The original firmware packages, device-specific identifiers, generated passwords, captured account credentials, and operational exploit packets are **not** included. Decompiled C is analysis output, not recovered vendor source code. The accompanying screenshots preserve line references but do not replace review of the full functions. Some findings have no dedicated C export; the dossier names those gaps rather than fabricating code evidence.

## Reading the evidence

Earlier research provides important context, but shared branding and firmware identifiers do not prove that every historical CVE affects the IPC-D240W-S or the supplied V3.6.3.1 image. See [prior disclosures](PRIOR-DISCLOSURES.md) for source links and the limits of comparison.

Start with the public articles linked above, then use [CVE-4.0/README.md](CVE-4.0/README.md) for the old/new finding matrix. Each dossier links available screenshots; its source export remains in the matching version folder. CVSS scores are provisional scenarios, with explicit assumptions. “Not scored” means the evidence does not yet support a defensible numeric vector, the code is absent, or a specific defect was fixed. None of the local F or N IDs is a CVE assignment.

The original F19 report emphasized a shared root hash. Later analysis found runtime root-password setters in both images; read the revised F19 dossier before citing that issue. The file named `F19-root_password_setter-new.c` handles a serial/configuration message; the actual runtime root setter is `F19-runtime_root_password-new.c`.

## Coordination and reuse

For technical corrections, affected-model information, or coordination, use CERT/CC VRF #26-10-FZTVG or [security@mlaify.io](mailto:security@mlaify.io). Do not send test traffic to devices you do not own or administer. Third-party firmware and decompilation excerpts are included as research evidence; this repository does not grant a license to Anpviz's firmware or other third-party material. Original analysis text and generated evidence presentation are © 2026 Matthew Davis / M&L AI LLC.
