# matthewd.xyz

Personal website and writing for Matt D., built with Hugo and served on Cloudflare
Workers (static assets) at **https://matthewd.xyz**, and at **https://matthewd.org**
(same site, served directly, not a redirect; canonical links use matthewd.xyz).

Projects (AttackMap, grrclone and the rest) live on **[mlaify.io](https://mlaify.io)**
(repo `mlaify/mlaify.github.io`), which links back here. This site keeps the personal
side: About, Writing (all of it — mlaify.io 301-redirects `/writing/*` here), and the
privacy and security pages.

## License

- Code and configuration are licensed under the MIT License.
- Written content and original media are licensed under CC BY-NC-SA 4.0 unless otherwise noted.

---

## Overview

- **Framework:** Hugo (static site generator)
- **Theme:** Custom Tailwind theme (in-repo, shared with mlaify.io)
- **Search:** Pagefind
- **Hosting:** Cloudflare Workers static assets (Worker `matthewd-xyz`)
- **DNS / CDN:** Cloudflare
- **Comments:** Giscus (GitHub Discussions)
- **Fonts:** system serif / sans-serif stacks only, no web fonts

### Design

matthewd.xyz and mlaify.io share one palette (copper accent, warm "ink" neutrals) but
not one layout. matthewd.xyz is a **personal writing** design: a single narrow column
(`container-column`), serif reading text (`prose-writing`), small-caps kickers, a ❦
ornament rule, and a by-year post index (`layouts/_partials/post-index.html`).
mlaify.io keeps the wide, card-based **project** layout. Keep it that way when porting
changes between the two repos.

### Policies and contacts

| | Repository | On the site |
|---|---|---|
| Security policy | [`SECURITY.md`](SECURITY.md) | `/security/`, `/.well-known/security.txt` |
| Privacy policy and terms | — | `/privacy-policy/`, `/privacy.json` |
| Code of conduct | [`CODE_OF_CONDUCT.md`](CODE_OF_CONDUCT.md) | `/code-of-conduct/` |
| Contributing | [`CONTRIBUTING.md`](CONTRIBUTING.md) | `/contributing/` |
| Licenses | [`LICENSE`](LICENSE) (MIT), [`CONTENT_LICENSE.md`](CONTENT_LICENSE.md) (CC BY-NC-SA 4.0) | `/license/` |
| humans.txt | — | `/humans.txt` |

Contacts: **security@mlaify.io** (security reports and code of conduct reports;
PGP key `static/publickey.security.mlaify.io-…asc`, fingerprint
`3864 2D27 5F82 0A02 6F3B FC5E 7E44 D7D0 5BAF D4DF`) and **privacy@mlaify.io**.
No matthewd.xyz or matthewd.org addresses are used. The repository files and the site pages carry the
same text in two places; update both together. `security.txt` expires
2027-05-09; renew it before then.

---

## Deploy

The operator approves every production deploy. A push to `main` starts
[`.github/workflows/deploy.yml`](.github/workflows/deploy.yml) in the `production`
environment, which waits for its required reviewer; once approved it runs
`npm run build:cf` and `wrangler deploy`. Pull requests run the same build without
deploying. There is no Workers Builds (Git integration) and no GitHub Pages.

| | |
|---|---|
| Worker | `matthewd-xyz` |
| Config | [`wrangler.jsonc`](wrangler.jsonc) |
| Production | `main` → `https://matthewd.xyz` and `https://matthewd.org` after approval |
| Canonical | `matthewd.xyz` (Hugo `baseurl`); matthewd.org pages point their canonical link there |
| `www.` on either domain | Cloudflare Redirect Rule → that apex (not a custom domain) |
| `workers.dev` / previews | off |

### One-time setup

1. **Free matthewd.xyz first.** matthewd.xyz is currently a custom domain of the
   `mlaify-io` Worker, and a hostname can belong to only one Worker. Merge the
   mlaify.github.io PR that removes it from that Worker's `wrangler.jsonc` and approve
   its deploy *before* this site's first deploy. matthewd.xyz shows the old mlaify.io
   content until then, and briefly nothing between the two deploys.
2. **DNS:** in the `matthewd.org` zone, delete any apex `A`/`AAAA`/`CNAME` records left
   over from GitHub Pages. `wrangler deploy` attaches each custom domain and creates its
   record, and fails if a conflicting record exists.
3. **API token:** Cloudflare → My Profile → API Tokens → *Edit Cloudflare Workers*
   template, scoped to this account and the `matthewd.xyz` and `matthewd.org` zones.
4. **GitHub repo settings:**
   - Environment `production` with yourself as required reviewer, limited to `main`.
   - Environment secrets `CLOUDFLARE_API_TOKEN` and `CLOUDFLARE_ACCOUNT_ID`.
   - Settings → Pages → unpublish / set source to none (the Pages workflow is gone).
5. **www:** for each zone, Rules → Redirect Rules → `www.<domain>/*` →
   `https://<domain>/${1}` (301), with a proxied `www` DNS record (e.g. `AAAA 100::`).
   matthewd.xyz may already have this rule from its mlaify.io days.

### Build

`build:cf` (in [`package.json`](package.json)) runs `npm ci`, Hugo, Pagefind, then
[`scripts/check-build.sh`](scripts/check-build.sh), which fails the build if
`index.html`, `404.html`, `pagefind/`, `security.txt` or `_headers` is missing.

| Tool | Pinned to | Where |
|---|---|---|
| Node.js | 24.12.0 | [`.nvmrc`](.nvmrc) |
| Hugo | 0.162.1 (extended) | `HUGO_VERSION` in deploy.yml |
| wrangler | 4.156.0 | `WRANGLER_VERSION` in deploy.yml, `deploy`/`preview` scripts |

### Headers

[`static/_headers`](static/_headers) is the single source of truth for security and
cache headers. Cloudflare reads it at deploy time; it is not served.

### Local

```bash
npm run build:cf && npm run preview
```

`preview` runs `wrangler dev`, which serves `public/` through the same asset router as
production (trailing-slash redirects, the 404 page, `_headers`). On the MacBook, run it
in the dev VM.

---

## Repository structure

```text
.
├── content/            # about/, writing/, privacy-policy.md, security.md
├── static/             # Images, favicon, humans.txt, _headers, .well-known/
├── layouts/            # Templates (the theme lives here)
├── assets/             # CSS, JS
├── config/_default/    # Site configuration
├── scripts/            # check-build.sh — build output assertions
├── wrangler.jsonc      # Cloudflare Workers config (assets, routes)
└── .github/            # deploy workflow, templates, CODEOWNERS
```
