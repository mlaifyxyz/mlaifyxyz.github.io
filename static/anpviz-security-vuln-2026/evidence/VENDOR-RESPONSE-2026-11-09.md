# Anpviz's stated remediation plan and the end of my investigation

**9 November 2026.** This records the position Anpviz sent me through its R&D lead, Calvin Li, on 6 November. It is a summary of Anpviz's statements about my original findings F1–F23. It is not a finding that the changes work, have shipped, or apply to the IPC-D240W-S camera I tested. Anpviz said it had not yet received F24 and would assess that finding separately.

| Findings | Anpviz's stated position |
|---|---|
| F1, F2, F7–F11, F16, F18–F23 | Anpviz says these defects have been fixed in its development branch. It describes changes to the recovery credential, input bounds, password handling, XML and URL escaping, account and media authentication, command construction, and the debug service. |
| F3, F4, F5, F12, F17 | Anpviz describes these as intentionally relaxed authentication or recovery behavior for NVR compatibility and ease of setup. It is considering authentication enabled by default at shipment while retaining a manual way to turn it off. |
| F13, F14, F15 | Anpviz says it will retain the reversible fixed-key storage for external-service credentials (F13) and the existing cloud update approach (F15). It regards the MAC/IP restriction (F14) as expected design behavior. |
| F6 | Anpviz says asymmetric firmware signature checks are in design and estimates implementation in roughly one month. Its current update checks use CRC/MD5. |

These are the vendor's classifications, including where it calls a behavior intentional or a fix complete. My [static review of the image it supplied](https://matthewd.xyz/writing/anpviz-remediation-review/) records my separate assessment. The V3.6.3.1 image was built for an MCA50E board, while my IPC-D240W-S uses MCA40E. Anpviz acknowledged the mismatch and instructed me not to flash it. I did not install it or perform a live validation of the claimed fixes. My cameras now run my own firmware.

I have completed my independent research and disclosure work: I reported the issues, gave Anpviz and the coordinators the evidence, reviewed the image that was provided, and published my findings and limits. I am not an Anpviz employee or its test team, and I will not take on unpaid testing or engineering for its future releases. Anpviz is responsible for deciding what to change, validating each supported model, publishing a compatible update, and communicating remaining risks to its customers. This statement closes **my work**; it does not close the CERT/CC or CISA cases or certify that Anpviz has fixed the vulnerabilities.

The full follow-up is [on my website](https://matthewd.xyz/writing/anpviz-vendor-response/). Finding IDs here are research labels, not assigned CVEs.
