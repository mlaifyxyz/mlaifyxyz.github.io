# Anpviz camera security research, October–November 2026

This repository is the evidence companion to the [IPC-D240W-S security report](https://matthewd.xyz/writing/anpviz-camera-security/), [remediation-image review](https://matthewd.xyz/writing/anpviz-remediation-review/) and [disclosure-decision follow-up](https://matthewd.xyz/writing/anpviz-disclosure-decision/). The browsable index is at [matthewd.xyz/anpviz-security-vuln-2026](https://matthewd.xyz/anpviz-security-vuln-2026/) and is also served at [matthewd.org/anpviz-security-vuln-2026](https://matthewd.org/anpviz-security-vuln-2026/).

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
