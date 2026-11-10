---
title: "How I keep sensitive work private with Cryptomator"
date: 2026-11-10T12:00:00-06:00
draft: false
description: "Why Cryptomator is part of how I protect sensitive work on local and remote storage, and why it deserves your support."
summary: "Cryptomator encrypts my most sensitive work before it ever leaves my device. It is open source, it works everywhere I do, and it deserves support."
author: "Matt"
tags: ["Security", "Encryption", "Open Source", "Privacy"]
categories: ["Security"]
showToc: false
comments: false
---

Some of my work has to stay secret until the right time, and some of it has to stay secret indefinitely. Security research is the clearest example: notes, evidence and correspondence about a vulnerability that has not been fixed or disclosed yet can hurt people if they leak. The same is true of personal records, client material and anything else I would not want a stolen laptop, a compromised cloud account or a curious storage provider to expose.

For that work I use [Cryptomator](https://cryptomator.org/).

### What Cryptomator does

Cryptomator creates encrypted **vaults**. A vault is an ordinary folder on a local disk, an external drive, a network share or a cloud sync folder. When I unlock it, Cryptomator presents it as a virtual drive, and I work with my files normally. Everything written into the vault is encrypted on my device before it is stored. File contents are encrypted, and so are file and folder names, so the storage underneath sees only scrambled data.

That model matters to me for three reasons:

- **Encryption happens on my side.** I do not have to trust a cloud provider's promises about who can read my files. The provider stores ciphertext and never holds my key.
- **It works per file, not as one giant container.** Sync services upload only the files that changed, so a vault works well in Dropbox, iCloud Drive, OneDrive, Google Drive, a WebDAV server or a plain folder on my own storage.
- **There is no account to break into.** Cryptomator does not need me to sign up for a service to protect my files. The vault and its password are mine.

### How I use it

I keep my most sensitive material in Cryptomator vaults and treat them as the place where that work lives, not an archive I remember to copy things into later. Drafts, research notes, evidence and anything I would be uncomfortable seeing in someone else's hands go inside a vault from the start.

Because a vault is just a folder of encrypted files, I can put it wherever it is useful: on a local drive for work that never leaves the machine, or in a synced folder so the same encrypted vault follows me. If someone gets the files out of the synced storage, an external drive or a backup, they get encrypted data. When I am done working, I lock the vault, and the plaintext view disappears.

### On every device I use

Cryptomator runs on macOS, Windows and Linux, with apps for iOS and Android. That consistency is the reason it fits my work instead of getting in the way of it. I can open the same vault on my laptop, my desktop and my phone, and the protection is the same on each one. I do not need one tool for local disks, another for cloud storage and a third for mobile.

### Why it matters that it is open source

Encryption software asks for a lot of trust. Cryptomator earns it the right way: its [source code is public](https://github.com/cryptomator), its vault format is documented, and it has been independently audited. Anyone can read how it works, check its claims and report problems. For a security tool, that openness is not a nice extra; it is the point.

It also means Cryptomator does not depend on locking you in. Your files stay in an open, documented format, in storage you choose.

### Support Cryptomator

Good open-source security software does not maintain itself. Someone has to fix bugs, keep up with operating system changes, respond to security reports and keep the apps working on every platform people depend on. The desktop apps are free to use, and that makes it easy to forget that the work behind them costs time and money.

If Cryptomator protects your files, please help keep it going:

- **Support the project.** Buy the mobile apps, become a supporter, or [donate](https://cryptomator.org/donate/) through the Cryptomator website.
- **Tell people about it.** Share it with a friend who keeps sensitive files in the cloud, a colleague who handles confidential work, or a family member who just wants their documents to stay private.
- **Contribute if you can.** Report bugs, help with translations or improve the documentation.

Strong, private, client-side encryption should be something ordinary people use every day. Cryptomator makes that practical. Give it a try at [cryptomator.org](https://cryptomator.org/), and if it earns a place in your workflow the way it has in mine, help it stay around.
