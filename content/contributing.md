---
title: "Contributing"
kicker: "Community"
description: "Corrections, suggestions, and fixes to this site are welcome."
lastmod: 2026-11-07
comments: false
---

This is a personal site, so most of what's here is my own writing. Corrections and suggestions are still welcome: a typo, a broken link, an outdated command in a technical post, or something that reads wrong.

Everyone taking part follows the [Code of Conduct](/code-of-conduct/).

## Ways to help

- **Comment on a post.** Each post has comments at the bottom (GitHub Discussions via Giscus).
- **Report a problem.** Open an issue in [the site's repository](https://github.com/mlaifyxyz/mlaifyxyz.github.io/issues/new/choose) using the bug report or feature request template.
- **Fix it yourself.** Typos and small content fixes can go straight to a pull request.
- **Report a security issue privately.** Don't open a public issue; follow the [security policy](/security/) and email [security@mlaify.io](mailto:security@mlaify.io).
- **Privacy questions** go to [privacy@mlaify.io](mailto:privacy@mlaify.io).

Want to work on code? My projects, such as AttackMap and grrclone, live on [mlaify.io](https://mlaify.io/) and have their own contribution guides.

## Pull requests

1. Fork the repository and create a topic branch from `main`.
2. Keep each change focused on one thing.
3. Add an entry under `[Unreleased]` in `CHANGELOG.md` for any visible change.
4. Build the site locally (see below) and check the pages you changed.
5. Open the pull request against `main` using the template, and say what changed and why.

Every pull request runs the same build as production. Merges to `main` are deployed only after I approve them.

## Building locally

You need Node.js 24 and Hugo extended 0.162.1.

```sh
git clone https://github.com/mlaifyxyz/mlaifyxyz.github.io.git
cd mlaifyxyz.github.io
npm ci
npm run dev        # hugo server at http://localhost:1313/
npm run build:cf   # production build + Pagefind index + output checks
```

## Licensing

By contributing, you agree that your contributions are licensed under the site's [licenses](/license/): MIT for code and configuration, CC BY-NC-SA 4.0 for written content and original media.
