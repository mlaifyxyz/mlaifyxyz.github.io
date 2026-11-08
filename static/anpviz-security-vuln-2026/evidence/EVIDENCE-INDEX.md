# Anpviz decompiler code exports

See the [repository overview](README.md) for the coordinated-disclosure timeline, publication scope, and version limits.

This is a local, versioned index of **existing Ghidra C-like decompiler output**, not recovered vendor source code and not a credential generator. Every case-result `.c` file was copied byte for byte from the latest complete case snapshot; prior snapshots contain no additional `.c` filenames. `MANIFEST.tsv` records each destination, original source path, SHA-256, and whether it was an exact copy. The 15 non-C case artifacts (including two original web JavaScript files) are copied under `supporting-evidence/` with their original extensions and tracked in `SUPPORTING-MANIFEST.tsv`. The existing `old/master_password_FUN_0001eccc_mainctrl.c` was left untouched. The sole extracted function file, `V3.3.0.6/F1/FUN_0001b734_mainctrl.c`, preserves lines 5–216 verbatim from the larger original decompilation.

Sources: [initial public report](https://matthewd.xyz/writing/anpviz-camera-security/), [remediation review](https://matthewd.xyz/writing/anpviz-remediation-review/), and [versioned case dossiers](CVE-4.0/README.md). The later case review corrects some claims in the original F19 write-up. These are **static** results for V3.6.3.1's MCA50E build, which has not been run on the owner's MCA40E camera.

The [source screenshot index](screenshots/README.md) holds line-numbered PNG excerpts for the C exports, organized by firmware and finding. The [CVE candidate and CVSS v4.0 dossiers](CVE-4.0/README.md) document every F1–F24, N1–N9 index slot, and OTHER for both versions, including evidence gaps and unassigned CVE status.

## F1: recovery value in four images

The vendor-domain literal in the original files is **`www.anjvision.com`**, not `www.anjoyvision.com`.

| Firmware | Derivation initializer | UDP comparison / use |
| --- | --- | --- |
| MCF26 V3.3.0.6 (2024 reference) | [recovery_initializer @ 0x1ea80](V3.3.0.6/F1/mainctrl_super_init.c) | [FUN_0001b734](V3.3.0.6/F1/FUN_0001b734_mainctrl.c) |
| 40E V3.4.5.6 (2026 reference) | [FUN_000222e0](V3.4.5.6/F1/ref-main-super-init.c) | [FUN_0001eccc](V3.4.5.6/F1/master_password_FUN_0001eccc_mainctrl.c) |
| Owner-captured stock V3.5.2.1 | [FUN_000227d4](V3.5.2.1/F1/F1-search_thread_init-old.c) | [FUN_0001f1bc](V3.5.2.1/F1/F1-udp_login-old.c) |
| Vendor-supplied MCA50E V3.6.3.1 | [FUN_00022e9c](V3.6.3.1/F1/F1-search_thread_init-new.c) | [FUN_0001f82c](V3.6.3.1/F1/F1-udp_login-new.c) |

The first three use the serial and vendor string with `our_md5_encode`; the new initializer uses the serial, chip UUID, and an embedded firmware constant before another MD5 stage. The old/new search-reply builders are in the same F1 folders. No device-specific value was calculated or recorded here. Do not conflate F1's UDP recovery value with F19's Linux root account password.

## F19: runtime root account, revised case finding

The original F19 report emphasized a shared firmware hash. The later case review found a runtime password setter in both the captured stock build and the supplied MCA50E build. The relevant original decompilations are [old setter](V3.5.2.1/F19/F19-runtime_root_password-old.c), [new setter](V3.6.3.1/F19/F19-runtime_root_password-new.c), [new `sn_password`](V3.6.3.1/F19/NEW-libtools-sn_password-new.c), and [new P2P ID broadcast](V3.6.3.1/F19/F19-p2pid_apply_broadcast-new.annot.c). The new annotated `sn_password` export retains the case's redaction. The case review says the setter uses device identifiers and that those identifiers appear in network messages; it does **not** record a generated root password or a live login on V3.6.3.1. Read its F19 section before making a public claim.

## Cross-reference: original F1–F24

The directory named in the “C exports” column contains all copied `.c` files for that finding. `—` means the latest case-results snapshot has **no dedicated C export** for that ID; the original finding or case report points to its other evidence. Some C files support multiple IDs; the “also see” column names the shared code rather than duplicating or rewriting it.

| Original ID | Topic | C exports | Also see / evidence limit |
| --- | --- | --- | --- |
| F1 | UDP recovery/master value | `V3.3.0.6/F1`, `V3.4.5.6/F1`, `V3.5.2.1/F1`, `V3.6.3.1/F1` | Exact per-image files above; `N4` uses the new login function |
| F2 | TCP 9999 parser overflow | `V3.5.2.1/F2`, `V3.6.3.1/F2` | Offline parser PoC in original report; new bounds are static |
| F3 | SADP reset verifier | `V3.5.2.1/F3`, `V3.6.3.1/F3` | Runtime zero-state reachability open |
| F4 | Serial-gated factory restore | `V3.5.2.1/F4`, `V3.6.3.1/F4` | Also F1 authentication gate |
| F5 | Broadcast reset SDK | — | Receiving firmware component not found in case review |
| F6 | Unsigned update | `V3.5.2.1/F6`, `V3.6.3.1/F6` | `CheckB-updater` decompilations; separate boot-TFTP result is packet evidence |
| F7 | Password-length inconsistency | `V3.5.2.1/F7`, `V3.6.3.1/F7` | [Web UI JavaScript diff](supporting-evidence/F7-F8-F10-userManageConfig.js.diff) is additional source evidence |
| F8 | Failed password change | `V3.5.2.1/F8`, `V3.6.3.1/F8` | Later case snapshot includes three old/new server handler pairs; [web JS](supporting-evidence/F7-F8-F10-userManageConfig.js.diff) also matters |
| F9 | URL-reserved password characters | — | Web/RTSP behavior and JS; no dedicated C export |
| F10 | XML attribute escaping | — | [Web JavaScript diff](supporting-evidence/F7-F8-F10-userManageConfig.js.diff) and [admin-reset excerpt](supporting-evidence/F10-index.js-admin-reset-new.txt), not C |
| F11 | Password over HTTP | — | HTTP capture and web/server traces; no dedicated C export |
| F12 | Default-off ONVIF/HIK/DAHUA auth | `V3.5.2.1/F12`, `V3.6.3.1/F12` | Default XML and parser behavior; also N1 |
| F13 | Fixed reversible service-credential encryption | — | Web JS and default configuration; no dedicated C export |
| F14 | MAC/IP access restriction | `V3.5.2.1/F14`, `V3.6.3.1/F14` | Design/limits in original report |
| F15 | Cloud FOTA/COTA | — | Old `ac18pro_server` is absent from the MCA50E package; [endpoint inventory](supporting-evidence/endpoints-urls-old.tsv), no dedicated C export |
| F16 | ONVIF media URIs | `V3.5.2.1/F16`, `V3.6.3.1/F16` | Some `.annot.c` files are annotated static-review output |
| F17 | UDP/3001 control operations | `V3.5.2.1/F17`, `V3.6.3.1/F17` | Also F1/F4/F20 |
| F18 | MAC/U-Boot-args shell builders | `V3.5.2.1/F18`, `V3.6.3.1/F18` | Reachability of every input not established |
| F19 | Root account and runtime setter | `V3.5.2.1/F19`, `V3.6.3.1/F19` | Revised finding; see F19 note above |
| F20 | UDP serial parser overflow | `V3.5.2.1/F20`, `V3.6.3.1/F20` | RCE not demonstrated |
| F21 | ONVIF scope/event parser overflows | `V3.5.2.1/F21`, `V3.6.3.1/F21` | New event-manager parser removed |
| F22 | Debug enable, listener and Telnet | `V3.5.2.1/F22`, `V3.6.3.1/F22` | Old live debug/Telnet evidence in original report |
| F23 | Debug `SetVersion` injection | `V3.5.2.1/F23`, `V3.6.3.1/F23` | Old root shell confirmed; this specific new handler is statically fixed |
| F24 | `hik_server` URL parser overflow | `V3.5.2.1/F24`, `V3.6.3.1/F24` | RCE and complete pre-auth path not demonstrated |

## Cross-reference: new case findings

| New ID | Topic | C exports / related original code |
| --- | --- | --- |
| N1 | Default-off auth on firmware/config/key upload routes | `V3.6.3.1/N1` (14 files); also F6 and F12 |
| N2 | UDP 22000 | Excluded by case review; no such code copied |
| N3 | Config-file command channel | No standalone C export in case results; address and evidence in detailed review |
| N4 | Case-insensitive UDP password comparison | `V3.6.3.1/F1/F1-udp_login-new.c` |
| N5 | Plain-HTTP delta fetch | No standalone C export; [new endpoint inventory](supporting-evidence/endpoints-urls-new.tsv) and detailed review |
| N7 | Plaintext password logging | No standalone C export; web/server traces in detailed review |
| N8 | Emptied default password rule | No C export; [web JavaScript diff](supporting-evidence/F7-F8-F10-userManageConfig.js.diff) |
| N9 | HTTP Digest replay | `V3.6.3.1/N9` (5 files) |

`V3.5.2.1/OTHER` and `V3.6.3.1/OTHER` hold the shared-memory bounds-check decompilations. All copied non-C artifacts also remain at their original paths under `case-results`. The export set does not fill gaps by inventing source code or renaming web JavaScript as C.
