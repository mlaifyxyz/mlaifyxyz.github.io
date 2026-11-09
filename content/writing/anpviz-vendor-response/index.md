---
title: "What Anpviz says it will fix, and where my camera research ends"
date: 2026-11-09T10:00:00Z
draft: false
description: "Anpviz's stated response to the IPC-D240W-S findings, and the end of my independent testing."
author: "Matt"
tags: ["Security", "Cameras", "Firmware", "Research"]
categories: ["Security"]
comments: false
---

Anpviz has now given me a written response to my [IPC-D240W-S findings](/writing/anpviz-camera-security/). On 6 November, Calvin Li, its R&D lead, sent an assessment of F1–F23 and described what Anpviz says it has changed or plans to change. I want that position in the public record. The statements below are Anpviz's; they are not my certification of its firmware.

| Findings | What Anpviz told me |
|---|---|
| F1, F2, F7–F11, F16, F18–F23 | It says these defects have been fixed in a development branch. Its stated changes cover the recovery credential, input bounds, password and account handling, XML and URL escaping, media access, shell command construction, and the debug service. |
| F3, F4, F5, F12, F17 | It says these authentication and recovery behaviors were relaxed for NVR compatibility and easy setup. It is considering authentication enabled by default when cameras ship, with a manual option to turn it off. |
| F13, F14, F15 | It plans to keep reversible fixed-key storage for external-service credentials (F13) and its existing cloud update approach (F15). It regards the MAC/IP access restriction (F14) as expected behavior. |
| F6 | It says asymmetric signature checks for firmware updates are being designed and estimates about a month to implement them. The current package checks use CRC/MD5. |

Anpviz said it had not received the updated report containing F24 when it wrote the assessment, so its response does not cover F24. Its claim that a defect is fixed means it says it made a change in its development branch. It does not establish that a supported update has shipped or that the change works on my camera.

Anpviz also sent me a V3.6.3.1 image and asked me to test it. That image identifies as **MCA50E**; my IPC-D240W-S is **MCA40E**. After I pointed this out, Anpviz acknowledged the mistake and told me not to flash it. I did not install it. Both of my cameras now run firmware I built myself. My [separate technical review](/writing/anpviz-remediation-review/) explains what the supplied image showed in static analysis and why it cannot validate a fix for my camera.

I have finished my part of this investigation. I reported the findings privately, gave the evidence to Anpviz and the coordinators, reviewed the image Anpviz supplied, and published the results with their limits. I am not an Anpviz employee or part of its test team, and I will not take on unpaid testing or engineering for later builds. Anpviz is responsible for its fixes, model compatibility, testing, release decisions, and advice to its customers.

This closes **my research work**, not the CERT/CC or CISA cases. It also does not mean that the vulnerabilities have been fixed. The [public evidence repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026) preserves my findings, Anpviz's stated position, and the separate review of its first image. The F labels are my research IDs, not assigned CVEs.
