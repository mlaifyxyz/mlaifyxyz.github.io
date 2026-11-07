---
title: "Anpviz's first remediation image: wrong board, partial fixes, and open questions"
date: 2026-11-07T12:00:00Z
draft: false
description: "A static review of Anpviz's V3.6.3.1 image, its response to the IPC-D240W-S disclosure, and the fixes still to verify."
author: "Matt"
tags: ["Security", "Cameras", "Firmware", "Research"]
categories: ["Security"]
comments: false
---

**Research status, 7 November 2026 UTC.** This follows my [initial IPC-D240W-S report](/writing/anpviz-camera-security/). Anpviz sent me an assessment and a V3.6.3.1 firmware image on 6 November, describing the image as a remediation build for my V3.5.2.1 camera. I compared it statically with a read-only capture from my own camera and earlier Anpviz releases. **I have not installed or run the new image.** Both of my cameras run my own firmware, so I cannot claim that any new build has passed a live regression test on an IPC-D240W-S.

My review found four of the 24 original findings fixed as described, 11 insufficiently addressed, seven unchanged, and two that cannot be decided from these images. These are **research classifications for the supplied image**, not 24 demonstrated live exploits. I also found possible new exposures that need testing and a response from Anpviz. The most immediate issue was simpler: **Anpviz sent firmware for the wrong board.** On 7 November, its R&D lead acknowledged that error, told me not to flash it, and promised the correct build through CERT/CC VINCE. That response is a material improvement in the coordination record, but it does not establish that the security issues are fixed on my camera.

## The image was for an MCA50E, not my MCA40E

The supplied image identifies its board as MCA50E, replacing the MCA40E flag and default configuration found in the IPC-D240W-S capture. Its MCA50E profile selects a higher CPU clock, a different video memory reservation, a GPIO setting associated with core voltage, and a 2880 × 1620 default stream rather than the 2560 × 1440 sensor's native resolution. It also bundles U-Boot with a different built-in partition layout. Those differences made flashing it to my camera unsafe as a validation step.

Anpviz has since explained that its sales team supplied the wrong internal board designation to engineering. Calvin Li, its R&D lead, wrote on 7 November: “We sent you a firmware image that was not built for the IPC-D240W-S” and “Please do not flash that image.” He said their internal testing covered the MCA50E configuration only, and that the image had not been distributed to other customers for MCA40E cameras. I cannot independently verify the distribution claim. Anpviz promised a correct MCA40E build and its SHA-256 through VINCE once its case access is approved. **No compatible build has been provided in the correspondence reviewed for this post.**

The security findings below concern shared code in the image they supplied. The board mismatch prevents a device-level verdict for the IPC-D240W-S and may matter for findings involving components that differ by board. The supplied binary is not linked here.

## What Anpviz says, and what the code shows

Anpviz's 6 November assessment said it had remediated F1, F2, F7–F11, F16, F18–F23. It described F3, F4, F5, F12 and F17 as authentication choices or recovery features made for third-party NVR convenience, with authentication to be enabled by default and a manual-off option retained. It called F14 expected design behavior, retained the fixed-key reversible credential storage in F13, and said the cloud update controls in F15 were sufficient. It placed a firmware signature for F6 in a future security-hardening release. The assessment also argued that many reported buffer overflows would not occur or become exploitable in normal operation.

The following table summarizes my **static comparison of V3.5.2.1 and the supplied MCA50E V3.6.3.1 image**. “Fixed” means the specific code defect was addressed in this binary; it does not certify a model-compatible release or every related path.

| Verdict | Findings | What the comparison shows |
|---|---|---|
| Fixed as described | F2, F20, F21, F23 | Bounds added to the debug, UDP serial, and ONVIF scope parsers; the `SetVersion` shell command was replaced with validated file writing. |
| Insufficiently addressed | F1, F4, F7, F8, F10, F11, F16, F17, F18, F19, F22 | New checks or partial fixes leave derived credentials, related authentication paths, cleartext transport, incomplete escaping, shell construction, or the debug/Telnet capability. |
| Unchanged or not fixed | F3, F6, F9, F12, F13, F14, F24 | The reviewed paths retain the reset verifier behavior, unsigned updates, URL credential issue, authentication defaults, fixed-key storage, spoofable MAC/IP restriction, and Hikvision-compatible parser copy. Some were explicitly retained by Anpviz. |
| Cannot decide statically | F5, F15 | No matching broadcast-reset receiver was located in either image. The earlier cloud update client is absent from this MCA50E image; its replacement and MCA40E status need an answer. |

## A master password is still calculated (F1)

Anpviz holds a calcualated formula for a master password for every single camera that they manufacture. I stressed the imporance of this in my intial CVD. Anpviz says it replaced the old deterministic recovery value with a “stronger algorithm based on the device-unique identity.” the new algorithm does incorporate more device-specific inputs. But the UDP login still checks a calculated master value **before** it checks configured accounts. The image contains the calculation, and the device's search reply appears to expose the serial number and chip UUID used by it. That means “device-unique” does not by itself mean secret. No vendor should need access to every device that they manufacture. Ever. Anpviz did not explain why they need a master password to their cameras, which I asked them to explain in a follow-up email. I have not attempted a login with the new value on a running camera.

Selected, abridged Ghidra output from the old and new `mainctrl` UDP login; adjacent setup code are below:

### Reference output

```c
iVar1 = access("/mnt/nand/security.flag",0);
if ((iVar1 == -1) && (iVar1 = access("/opt/ch/security.flag",0), 
```

```c
pcVar4 = (char *)[redacted]();
snprintf(param_7 + sVar5,0x800 - sVar5,"[redacted]]",
```

```c
piVar2 = (int *)ixmlDocument_getElementsByTagName(iVar1,"OPERATOR_AUTH");
if (piVar2 == (int *)0x0) {
uVar9 = 0xf8;
pcVar5 = "[%s:%u]Not found auth node\n";
```

```c
sprintf((char *)&uStack_1130,"%s%s",acStack_1270,"[redacted]]");
our_md5_encode(auStack_830,&uStack_1130,[redacted]);
```

```c
our_md5_encode(&local_370,pcVar5,[redacted]);
local_350 = 0;
iVar3 = strcmp(pcVar5 + -0x28,(char *)&local_330);
if ((iVar3 == 0) &&
((iVar3 = strcmp((char *)&local_370,(char *)&local_230), iVar3 == 0 ||
(iVar3 = strcmp(pcVar5,(char *)&local_230), iVar3 == 0)))) break;
iVar3 = *piVar2;
iVar8 = iVar8 + 1;
pcVar5 = pcVar5 + 0x78;
```

```c
if (iVar8 == iVar3) {
uVar9 = 0x12d;
pcVar5 = "[%s:%u]verify user password failed!!!\n\n";
```

```c
DebugPrint(8,7,"[%s:%u]Super password %s checked ok.\n",...);  
```

### "Remediated" output

```c
iVar3 = access("/mnt/nand/security.flag",0);
if ((iVar3 == -1) && (iVar3 = access("/opt/ch/security.flag",0), iVar3 == -1))
```

```c
pcVar5 = (char *)[redacted]();
local_11b0 = 0x53;
pbVar2 = &local_11b0;
pbVar1 = ...;
while (pbVar2 != local_11af + 0x15) {
pbVar1 = pbVar1 + 1;
pbVar2 = pbVar2 + 1;
*pbVar2 = *pbVar1 ^ 0x3c;
```

```c
piVar2 = (int *)ixmlDocument_getElementsByTagName(iVar1,"OPERATOR_AUTH");
if (piVar2 == (int *)0x0) {
uVar9 = 0x14d;
pcVar5 = "[%s:%u]Not found auth node\n";
```

```c
ixmlNodeList_free(piVar2);
if (((char)local_330 == '\0') || ((char)local_230 == '\0')) {
pcVar5 = "[%s:%u]Not found auth info\n";
```

```c
pcVar4 = (char *)get_chip_uuid();
snprintf(param_7 + sVar5,0x800 - sVar5,"[redacted]",
pcVar4,param_5);
if (DAT_000c4328 != '\0') {
sVar5 = strlen(param_7);
snprintf(param_7 + sVar5,0x800 - sVar5,"[redacted]",..);
```

```c
snprintf((char *)&uStack_1130,0x100,"%s%s%s",acStack_1270,pcVar5,(char *)[redacted]);
sVar4 = strlen((char *)&uStack_1130);
our_md5_encode(&local_1294,&uStack_1130,[redacted]);
local_1274 = 0;
snprintf(acStack_830,0x100,"%s%s",&local_1294,[redacted]);
sVar4 = strlen(acStack_830);
our_md5_encode(&local_1230,acStack_830,[redacted]);
```

```c
iVar3 = strcasecmp((char *)&local_230,...);
if (iVar3 == 0) {
DebugPrint(8,7,"[%s:%u]Super password %s checked ok.\n",...,0x18e,&local_230);
```

The branch order is the issue. The new `security.flag` requires operator authentication for the UDP control plane, an improvement over the older shipped state, but that check also accepts the calculated value. Anpviz needs to remove this override or show why the device-exposed inputs cannot yield an accepted credential.

## The root password changes at boot (F19)

My first post described a shared root hash in the old images. Later analysis corrected that framing: **both versions set a runtime root password**. In V3.5.2.1 it is derived from the serial number; in the supplied V3.6.3.1 image it is derived from the serial, a flash UUID, and an embedded constant, with some vendor-specific exceptions. The new image locks the shipped hash, which is useful, but the runtime setter remains. The reviewed code also appears to print the derived value, and another path appears to broadcast the serial and flash UUID on the local network. The latter path needs a device test to confirm the runtime disclosure.

Selected, abridged Ghidra output from the new root-password setup; no secret, formula, or usable command is included:

### Reference output

```c
  iVar2 = access("/opt/ch/flag.set.passwd",0);
  if (iVar2 == -1) {
    return;
  }
```

```c
  GetSN(auStack_328);
  memset(acStack_308,0,0x100);
  memset(auStack_208,0,0x100);
  sprintf(acStack_308,"%s%s","ANJVISION",[redacted]);
  sVar1 = strlen(acStack_308);
  our_md5_encode(auStack_208,acStack_308,[redacted]);
```

```c
  sprintf(acStack_108,"echo -e \"%s\n%s\" | passwd root",(char *)&local_358,(char *)&local_358);
```

### "Remediated" output

```c
  iVar2 = access("/opt/ch/flag.set.passwd",0);
  if (iVar2 == -1) {
    return;
  }
```

```c
        GetSN(acStack_110);
        uVar1 = get_uuid();
        sn_password(acStack_110,uVar1,&local_150);
        puts((char *)&local_150);
```

```c
  sprintf(acStack_110,"echo -e \"%s\n%s\" | passwd root",(char *)&local_150,(char *)&local_150);
```

The original F19 finding should therefore be read with this correction. The relevant question is whether each unit has a **random, non-exported** root secret, not whether the factory hash is locked.

## Some real fixes; debug and Telnet remain (F2, F20–F23)

The new image does contain concrete improvements. For example, the old UDP serial extractor's unbounded `strcpy` became a size-bounded copy, and the reviewed callers supply a destination size:

```c
/* old */ strcpy(param_2, (char *)puVar4[1]);
/* new */ snprintf(param_2, param_3, "%s", (char *)puVar4[1]);
```

The debug parser and ONVIF scope parsers also gained bounds, and the `SetVersion` path no longer feeds its argument to a root shell command. I classify those specific findings as fixed in this image. I have not performed live fuzzing or verified every related handler.

For F22, the TCP debug service now requires a login and has timeouts. Its authentication is based on a static password hash that may be replayable; the code still contains the web enable path, a persistent enable flag, the debug listener, and a command that starts Telnet. My earlier **live** result was a root shell reached after a valid administrator credential enabled the debug service. It did not show unauthenticated access by default. The new image has not been run, so its end-to-end behavior remains untested.

## Updates are still unsigned (F6); authentication defaults still matter (F12)

Anpviz calls asymmetric signing a planned hardening feature and says CRC/MD5 checks detect corruption and “keyless tampering.” CRC and unkeyed MD5 are integrity checks against accidental changes; neither authenticates the publisher of a deliberately modified package. I found no signature verification in the reviewed update path. The supplied package includes U-Boot, and the updater's reviewed path can write it after the package checks. Anpviz confirmed on 7 November that U-Boot is written, and said the boot chain has **no enabled secure boot, no provisioned trust root, and no signature verification**. It attributes the U-Boot change to an IR-CUT startup issue. Those statements clarify the design; they do not close F6.

The shipped MCA50E defaults still leave ONVIF, Hikvision-compatible, and Dahua-compatible authentication off. Anpviz's proposed default-on change is not present in this image. The NVR compatibility rationale explains why that choice was made, but a manual-off option should not turn off protection for firmware or private-key uploads.

That is why a **new, unconfirmed high-priority lead** matters: in the new web server, the authentication flag for several upload routes appears to follow the ONVIF authentication setting, which is off by default. The routes include firmware, configuration, certificate, and private-key upload handlers. The firmware handler appears to pass data to the unsigned updater. This is a static control-flow assessment, **not** a demonstrated unauthenticated upload or compromise. A correct MCA40E image and isolated lab test are needed before making that runtime claim. Anpviz has been asked to address it.

## Other incomplete work and new leads

The new web account page escapes XML in one place, but other credential forms still assemble XML without equivalent escaping (F10). A cookie now holds a password hash rather than plaintext, but passwords still travel in HTTP requests and a new server logging path appears to record plaintext (F11 and new lead N7). A snapshot URI builder was fixed, while the stream URI can still include administrator-derived credential material under shipped defaults (F16). The MAC setter now validates its input and writes one file directly, yet the validator does not check every hexadecimal digit and a shell-based U-Boot argument path remains (F18). The Hikvision-compatible URL parser still contains an unbounded copy into a 128-byte stack buffer (F24):

```c
char local_ec0[128];
/* ... */
strcpy(local_ec0, pcVar9 + 10);
```

That last excerpt establishes a memory-safety defect in the decompiled path, **not** remote code execution. The supplied image also warrants follow-up on a possible configuration command channel, case-insensitive password comparison, a plain-HTTP update fetch, and HTTP Digest replay behavior. These are static leads, not additional live exploit claims. I found no support for an earlier “UDP 22000” lead and have excluded it.

Anpviz argues that many overflows are behind controlled or authenticated paths. That may change their exploitability, but it does not make an unbounded copy safe. Conversely, my static review cannot establish that each path is reachable on a default camera. Both points belong in a careful risk assessment.

## What happens next

Anpviz's 7 November reply acknowledged the wrong image, accepted that my board-profile analysis was consistent with what it built, and promised finding-by-finding answers with evidence. A second reply confirmed receipt of my detailed comparison and said its R&D team was reviewing it. I welcome those responses and will update this account when the correct MCA40E build and substantive evidence arrive. Their earlier assessment and this review should not be treated as the final word on product scope or remediation.

I have submitted the detailed evidence through CERT/CC coordination (VRF #26-10-FZTVG; CISA case #116607). My earlier proposal of **26 January 2027** as a 90-day disclosure date was a proposal, not a coordinator-approved deadline. The first article went public on 5 November after I sought earlier coordination. This follow-up reflects the vendor's subsequent technical engagement and corrects the original root-credential description. I have no evidence that Anpviz has deliberately exploited buyers' devices. The firmware contains identifiers associated with other brands, but I cannot yet identify their affected models or count deployed devices.

I will not publish the supplied binary, derived credentials, device identifiers, full request formats, or a working exploit. Owners should avoid exposing stock camera services to the internet, restrict camera network access, enable available authentication, and ask Anpviz for an update **specifically validated for their board and model**. Do not install the MCA50E image on an IPC-D240W-S.
