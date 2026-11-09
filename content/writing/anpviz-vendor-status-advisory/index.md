---
title: "Anpviz / Anjoy camera advisory: vendor remediation status"
date: 2026-11-09T12:00:00Z
draft: false
description: "Finding-by-finding vendor statements and the limits of one static check of a pre-release, wrong-board build."
author: "Matt"
tags: ["Security", "Cameras", "Firmware", "Research"]
categories: ["Security"]
comments: false
---

**Advisory date:** 2026-11-09 (UTC)
**Researcher:** Matthew Davis, M&L AI LLC (security@mlaify.io)
**Coordination:** CERT/CC VRF #26-10-FZTVG; CISA Case #116607
**Full technical report:** v1.13, findings F1–F24 (write-up: https://matthewd.xyz/writing/anpviz-camera-security/)
**Tested product:** Anpviz IPC-D240W-S (ONVIF model `A40E_IR_c0`), firmware V3.5.2.1 (build 2026-06-08)
**Likely affected:** other Anpviz U-Series and Anjoy/Anjvision ANJOY888-platform cameras, including rebrands. Anpviz states it maintains the ANJOY888 platform and is "identifying the full set of affected models/versions across the shared codebase."

## How to read this advisory

The **Vendor statement** column quotes or closely restates Anpviz's technical response of 6 November 2026 (Calvin Li, R&D Lead and Product Security Liaison). These statements are the vendor's own. **They have not been independently verified unless the Researcher column says so.**

The **Researcher check** column is a static comparison of a pre-release remediation build that Anpviz provided (V3.6.3.1, built for the MCA50E board, SHA-256 `83e4464e66d5f46bc0df1073350ca5be703cfae1a189262d3850b16124228cad`) against V3.5.2.1 and two earlier public releases. Nothing was installed or run. No fixed firmware for the IPC-D240W-S has been released publicly as of this date.

## Status by finding

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

## Vendor's stated release plan (6 Nov 2026)

| Milestone | Vendor date |
|---|---|
| P0 remediation and internal verification | 2026-11-14 |
| P1 remediation and regression | 2026-11-28 |
| P2 remediation | 2026-12-31 |
| Unified regression and synchronized release / OTA | 2027-01-15 |
| F6 firmware signing | "approximately one month"; later "per subsequent release notes" |

These dates are the vendor's. The researcher will not track or verify them.

## Vendor architecture statement

Anpviz states that main service processes running as root are "standard for single-purpose ARM + embedded-Linux cameras" and that "the real risk metric is unauthenticated network command injection, which our fixes and default-on authentication address." Default-on authentication has not been adopted (see F3, F12).

## What owners should do now

- Do not expose these cameras to the internet. Put them on an isolated VLAN with no inbound access from untrusted networks.
- Block, at the network edge of that VLAN, UDP 3001 and the search/SADP ports, TCP 9999, TCP 23, TCP 8000 and TCP 37777, unless an NVR on the same isolated network needs them.
- Turn on ONVIF and HIK/DAHUA-compatibility authentication if your NVR supports it.
- Install firmware only from the vendor's official channel, for your exact model and board, and check the hash against the release notes. Treat any vendor "fixed" build as unverified until its fix list is published.

## Researcher's position

This advisory records the vendor's own statements next to one static check of one pre-release build. The researcher will not test further vendor builds or confirm future remediation claims. Fixes the vendor announces later should be read as vendor-reported.

## Timeline (UTC)

- 2026-10-17: Initial report to Anpviz
- 2026-10-19: Addendum to Anpviz; report filed with CISA (Case #116607) and CERT/CC (VRF #26-10-FZTVG)
- 2026-10-22: Vendor's 72-hour acknowledgement window passes with no reply
- 2026-10-28: Vendor acknowledges
- 2026-11-06: Vendor technical response and pre-release build received; findings published (~00:00 UTC); researcher's static check sent to the vendor and posted to CERT/CC
- 2026-11-09: This advisory
