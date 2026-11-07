# Contributing

Thank you for your interest in contributing to **matthewd.org**, Matt D.'s personal website. Most of the site is personal writing, but corrections, suggestions, and fixes are welcome. Projects (AttackMap, grrclone and others) live on [mlaify.io](https://mlaify.io) and have their own repositories and guides.

By participating, you agree to follow the [Code of Conduct](CODE_OF_CONDUCT.md).

## Ways to Contribute

- **Report a bug or content issue**: open an issue using the [bug report template](.github/ISSUE_TEMPLATE/bug_report.md).
- **Suggest an improvement**: open an issue using the [feature request template](.github/ISSUE_TEMPLATE/feature_request.md).
- **Fix a typo or update content**: open a pull request directly.
- **Comment on a post**: use the comments at the bottom of each post (GitHub Discussions via Giscus).
- **Report a security vulnerability**: **do not open a public issue.** Email [security@mlaify.io](mailto:security@mlaify.io) and follow [`SECURITY.md`](SECURITY.md).
- **Privacy questions or requests**: email [privacy@mlaify.io](mailto:privacy@mlaify.io).

## Pull Request Process

1. Fork the repository and create a topic branch from `main`.
2. Make your changes. Keep them focused on a single purpose.
3. Add an entry under `[Unreleased]` in [`CHANGELOG.md`](CHANGELOG.md) for any user-facing change, following [Keep a Changelog](https://keepachangelog.com/en/1.1.0/).
4. Build the site locally (below) and check that the pages you changed render and that no links break.
5. Open a pull request against `main` using the PR template. Describe what changed and why.
6. Respond to review feedback. Squash or fix up commits as requested before merge.

Every pull request runs the production build (`npm run build:cf`) in CI. Merges to `main` deploy to Cloudflare only after the maintainer approves the deploy.

## Style and Content Guidelines

- **Markdown:** CommonMark / Hugo-flavored markdown. Keep front matter consistent with existing posts.
- **Posts:** each post is a page bundle under `content/writing/<slug>/index.md`.
- **Images:** put post-specific images in the post's bundle, or shared ones in `static/images/`. Always give descriptive `alt` text, and credit third-party images in the caption.
- **Tone:** match the existing voice of the site: direct, personal, and considerate.
- **Design:** matthewd.org uses its own writing layout (narrow serif column) on the shared copper and warm-neutral palette. Keep the project-style card layouts on mlaify.io.
- **Privacy:** do not introduce trackers, analytics, web fonts, or other third-party resources without discussion. The site is intentionally privacy-respecting and static-first.

## Local Development

You need Node.js 24 (see [`.nvmrc`](.nvmrc)) and Hugo extended 0.162.1.

```sh
git clone https://github.com/mlaifyxyz/mlaifyxyz.github.io.git
cd mlaifyxyz.github.io
npm ci

npm run dev        # Hugo dev server at http://localhost:1313/
npm run build:cf   # production build, Pagefind index, and output checks
npm run preview    # serve public/ through wrangler, like production
```

## Licensing

By contributing, you agree that your contributions will be licensed under the terms of the project:

- Code and configuration: [MIT License](LICENSE)
- Written content and original media: [CC BY-NC-SA 4.0](CONTENT_LICENSE.md)
