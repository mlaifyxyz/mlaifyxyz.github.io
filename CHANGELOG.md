# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

### Personal site at matthewd.xyz and matthewd.org (2026-11-07)

- This is the personal site again, at **https://matthewd.xyz** (canonical) and **https://matthewd.org**
  (same site, served directly, not a redirect). Projects live on mlaify.io.
- Hosting: Cloudflare Workers static assets (Worker `matthewd-xyz`, `wrangler.jsonc`, both apexes as custom
  domains), deployed by `.github/workflows/deploy.yml` after the operator approves the `production`
  environment. PRs build only. matthewd.xyz moves here from the mlaify.io Worker.
- Added `static/_headers`, `scripts/check-build.sh`, `.nvmrc`, and `build:cf` / `deploy` / `preview` scripts.
- Removed the GitHub Pages workflow (`hugo.yml`), `CNAME`, `static/CNAME` and `.nojekyll`.
- Removed the project pages (Aegis, AttackMap, OmekaRapper, OpenSift, OpenContractRx), `/projects/`,
  `/principles/`, `/contribute/`, the `[products]` params and the homepage projects section. Nav and footer
  link to mlaify.io instead; About links to mlaify.io for AttackMap and the build principles.
- Homepage About button points at `/about/` (was the `/me/` alias).
- Domain references in config, privacy, security, humans.txt and privacy.json name matthewd.xyz, with
  matthewd.org as the second address; `security.txt` lists a `Canonical:` line for each.
- Personal writing design, distinct from mlaify.io's project layout on the same palette: narrow serif
  reading column, wordmark header, small-caps kickers, ❦ ornament, by-year post index on the homepage and
  `/writing/`, centered post headers, and a single-column layout for pages (no sidebar or breadcrumbs).
- Serif and sans text use system font stacks; the Inter stylesheet from rsms.me is no longer loaded.
- Fixed: the theme toggle stored `mlaify-theme` while the early script read `matthewd-theme`, so a chosen
  theme could flash wrong on reload. Both now use `matthewd-theme`.
- New pages: `/contributing/`, `/code-of-conduct/`, `/license/`. Footer links all policy pages.
- Contacts are security@mlaify.io and privacy@mlaify.io (no matthewd.xyz or matthewd.org addresses). The security@mlaify.io
  PGP key is served at `/publickey.security.mlaify.io-38642d….asc`; `matthewdxyz.asc` removed.
- `/security/`, `/privacy-policy/` (now "Privacy Policy and Terms of Use"; the code of conduct moved to its
  own page), `humans.txt`, `privacy.json`, `CONTRIBUTING.md`, `CONTENT_LICENSE.md` and `LICENSE` updated for
  this site. `check-build.sh` also checks the key, humans.txt, privacy.json and the policy pages.
- All writing moves here from mlaify.io, which 301-redirects `/writing/*` (and the moved images) to
  matthewd.xyz: the Anpviz IPC-D240W-S camera security post and its two evidence graphics are new here;
  posts 1–6 already were (this site keeps their personal bylines, photo credits and Instagram links).

### Added
- New theme foundation: Tailwind CSS 3, Pagefind 1.4 search, JetBrains Mono + Inter fonts.
- Personal copper accent palette (`#b45309` family) site-wide; Aegis (cyan) and AttackMap (amber) accents preserved for Phase 2.
- Editorial hero-stack homepage with avatar, tagline, latest-writing list.
- Blog post layout with cover image, post-meta (reading time, tags, date), share row (Bluesky + copy link), prev/next, and Giscus comments.
- Blog list layout with paginated two-column post grid.
- 404 page.
- Shortcodes ported from mlaify in preparation for Phase 2: `callout`, `status`, `cta`, `feature`, `feature-grid`, `app-badges`, `repo-link`.
- Hugo config split into `config/_default/*.toml` files (hugo, module, markup, params, languages, menus).
- All mlaify content imported with first-person voice edits: Aegis (8 pages), AttackMap (7 pages), OmekaRapper, OpenSift, OpenContractRx.
- `/principles/` page (formerly mlaify's `/build-principles/`), recast in first-person.
- `/contribute/` page recast in first-person with matthewd@matthewd.xyz as the contact.
- `/projects/` hub page listing all 5 projects with status badges, sorted by weight.
- Projects section on the homepage (top 2 as cards, smaller 3 as pill links).
- `[products]` table in `params.toml` configuring all 5 projects (name, tagline, status, accent, URL, repo URL).

### Changed
- Replaced PaperMod theme with a port of mlaify's custom Hugo theme.
- Moved Giscus partial from `layouts/partials/` to `layouts/_partials/`.
- CI: added Node, `npm ci`, and Pagefind index steps to GitHub Pages workflow.
- Footer "Archives" link now points to `/posts/` (the working blog index); `/archives/` 301-redirects there via Hugo alias for backward compatibility.
- `/posts/` renamed to `/writing/`. Old URLs (`/posts/<slug>/`) 301-redirect via Hugo aliases. `/archives/` → `/writing/`.
- `/me/` renamed to `/about/`. Old URL redirects via alias. Body rewritten to remove the "professional photographer" lead (medical retirement), merge mlaify's umbrella copy in first-person, and link to `/principles/` for the longer story.
- Top nav: Writing · Projects · About (was Posts · About). Footer gains Projects, Principles, and Contribute entries.
- Site tagline shortened to "Open source contributor and writer." Description aligned.
- Aegis `repoUrl` in `params.toml` now points to `mlaify/aegis-spec` (the protocol RFC repo) rather than a non-existent `mlaify/aegis`.
- OG default image points at `images/pic-mdavis-home.svg` until a dedicated 1200×630 PNG is designed.
- `config/_default/languages.toml` uses `locale`/`label` (Hugo ≥ 0.158 keys) instead of the deprecated `languageCode`/`languageName`.
- `CNAME` updated to a new 10-domain set: `matthewd.xyz`, `matthewd.org`, `fhrp.org`, `mlaify.io`, `mdavis.me`, `mldavis.me`, `mlphotography.me`, `rightsarchived.org`, `rightsinfocus.org`, `tffhrtp.org`. mlaify.io is now claimed by this repo's GH Pages so the mlaify org repo could be archived without losing the domain.
- mlaify.io paths now 301-redirect to matthewd.xyz via Cloudflare Bulk Redirects (Phase 3). The redirect list is checked into `docs/superpowers/ops/cloudflare-redirects-mlaify-io.csv`; the runbook is at `docs/superpowers/ops/phase-3-runbook.md`. Cloudflare's Bulk Redirects feature does not rewrite paths (only swaps hosts), so the 5 path-changing cases (`/build-principles/` → `/principles/`, `/docs/project-*` → `/<project>/`, `/privacy/` → `/privacy-policy/`) use Hugo `aliases` for the second hop.
- `mlaify/mlaify.github.io` repo archived as defense-in-depth (origin still serves a "moved" notice if a Cloudflare rule ever misses).

### Removed
- PaperMod theme submodule.
- `hugo.yaml` and `hugo_bak.yaml` (replaced by `config/_default/`).
- `content/search.md` (PaperMod Fuse-based search page; replaced by Pagefind).
- `content/posts/` directory (moved to `content/writing/`).
- `content/me.md` (folded into `content/about/_index.md`).
- Side domains opensift.org and siftbook.org sunset (CNAME claim removed from mlaify.github.io, DNS records deleted in Cloudflare).
- `callmemattd.com` and `littleabigails.com` no longer claimed by this repo's GH Pages (removed from CNAME).
