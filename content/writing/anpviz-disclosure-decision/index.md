---
title: "Why I published the Anpviz camera findings early"
date: 2026-11-08T18:00:00Z
draft: false
description: "My disclosure decision, the wrong-board remediation image, and what the public evidence does and does not establish."
author: "Matt"
tags: ["Security", "Cameras", "Firmware", "Research"]
categories: ["Security"]
comments: false
---

I published my [Anpviz IPC-D240W-S findings](/writing/anpviz-camera-security/) before the 26 January 2027 date I had proposed to the vendor. That was my decision, made out of frustration with the handling of a serious report and concern for camera owners. The proposed date was not an agreement approved by CERT/CC. I had reported privately, sought coordination, and asked for a technical assessment. At the time of my first publication, I had received an acknowledgement and a referral to R&D, but no substantive assessment of the findings. Anpviz **did** send an item-by-item technical response and a firmware image afterward; the record should include that response, even though I disagree with much of it.

The image exposed a separate due-diligence problem. Anpviz described V3.6.3.1 as a remediation build for my IPC-D240W-S and asked me to install it. My camera's captured firmware identifies an **MCA40E** board. The image they sent identifies **MCA50E**. It contains different board configuration, a core-voltage-related GPIO change, a higher CPU clock setting, and a different built-in partition layout. After I raised the mismatch, Anpviz acknowledged on 7 November that it had sent the wrong image, said it was tested only for MCA50E, and instructed me **not to flash it**. I did not install it. The mismatch and bootloader change could have made the camera unbootable or required hardware-level recovery; I cannot say irreversible damage would definitely have occurred because I did not perform that test. My [static comparison](/writing/anpviz-remediation-review/) explains the evidence and limits.

### The firmware hash and bootloader

Anpviz did not provide a SHA-256 checksum with the first image as I received it. I independently calculated the SHA-256 of the exact file named `firmware_MCA50E_V0_V3.6.3.1_SMW_T{MCA40E_V0_MCA50E_V0}_20261106165310.bin`:

`83e4464e66d5f46bc0df1073350ca5be703cfae1a189262d3850b16124228cad`

That hash identifies the file I analyzed. By itself it does **not** authenticate the vendor as the publisher; an independently received, trusted checksum or signature would serve a different purpose. Anpviz later promised to send the correct MCA40E build with a SHA-256 through CERT/CC VINCE.

I also was not told before reviewing the package that it included **U-Boot**, the bootloader. The package header selects kernel, root filesystem and U-Boot sections, and the reviewed update path writes the bootloader section. Anpviz subsequently confirmed that U-Boot is written and said the boot chain has no enabled secure boot, provisioned trust root or signature verification. Updating a bootloader is a consequential operation, especially in an image built for another board. It should have been disclosed before asking me to flash the camera.

### The security response

The UDP recovery login still checks a calculated override before configured accounts in the supplied image. Anpviz replaced the old serial-based calculation with one involving more device-specific inputs. That changes the formula, but the code still contains a way to derive and accept a privileged credential. I asked why a master recovery credential exists and why removal was not the chosen fix. I have not received a satisfactory explanation in the correspondence reviewed here. I have **not** tried the new value on a running camera.

My static review classifies **four** of F1–F24 as fixed as stated, **11** as insufficiently addressed, **seven** as unchanged or not fixed, and **two** as undecidable from the supplied image. That is a review of an MCA50E build, not a live regression test or a verdict on a compatible MCA40E release. I credited bounds fixes in F2, F20 and F21 and the removal of the F23 shell injection. I found that unsigned updates (F6), default-off protocol authentication (F12), and the calculated login (F1) remain concerns. Some newly observed paths may be more serious, particularly a possible unauthenticated firmware and key-upload route when shipped authentication defaults are off. That route is a **static lead requiring isolated device validation**, not a demonstrated compromise. The full [remediation review](/writing/anpviz-remediation-review/) gives the per-finding evidence and caveats.

### A longer public history

Other researchers had already published related warnings. [Bishop Fox's 2018 SV3C advisory](https://www.bishopfox.com/news/2018/10/sv3c-l-series-hd-camera-multiple-vulnerabilities/) ([current page](https://bishopfox.com/blog/sv3c-l-series-hd-camera-advisory); [NVD CVE-2018-12666](https://nvd.nist.gov/vuln/detail/cve-2018-12666)) listed ten issues and said no fix was available at publication. [Willgues's 2024 Anpviz research](https://willgu.es/pages/anpviz-ip-camera-vuln.html) reported four CVEs, described a debug/Telnet path, and recounts repeated requests for a patch timeline with little substantive response. [andylee77's 2026 Anjvision disclosure repository](https://github.com/andylee77/anjvision-cve-2026) records another set of proposed issues and CERT/CC contact. These reports involve different models and firmware branches. They establish a history of publicly reported issue classes and, in the 2024 author's account, difficult coordination; they do not prove that every old CVE applies to my camera or that Anpviz knew of every defect I found.

As of this post, Anpviz said it was waiting for access to my CERT/CC VINCE case. I have not seen confirmation that it has joined that case, despite the earlier public reports and another researcher's stated CERT/CC filing. I cannot verify the status of its request from outside CERT/CC. Access to one case is not automatic from participation in another. I want Anpviz, the upstream firmware maintainers and the coordinator in the same written technical discussion.

### The public record

I published a [versioned evidence site](/anpviz-security-vuln-2026/) on **matthewd.xyz** and **matthewd.org** and a matching [GitHub research repository](https://github.com/mlaifyxyz/anpviz_sec_vuln_10-2026). Together they organize the old V3.5.2.1 capture and supplied V3.6.3.1 image into finding pages with decompiler excerpts, 146 labeled code screenshots, 68 old/new dossiers, proposed CWE mappings, provisional CVSS v4.0 assessments and source-hash manifests. The F and N labels are my research identifiers, **not assigned CVEs**. The site links to [earlier disclosures](/anpviz-security-vuln-2026/evidence/PRIOR-DISCLOSURES.md) so readers can distinguish historical reports from this case. The public copy omits the firmware binary, calculated credentials, device identifiers and operational exploit packets.

I want a model-correct, independently identifiable build, a clear account of what it writes, and fixes that can be verified. I will update the evidence if Anpviz supplies a compatible image or shows that my static interpretation is wrong. Camera owners should ask for firmware specifically validated for their board and avoid exposing camera services to the internet while these questions remain open.
