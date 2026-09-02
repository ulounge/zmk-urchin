# Working rules — ulounge/zmk-urchin — READ FIRST

Set by Sylvain, 2026-09-02. These govern every session on this repo, in Claude Code
and in Cowork. Sylvain is not a developer but reads code: explain before you show,
and never assume he'll spot a bad line for you.

---

## 1. Reading is pre-authorised — act freely

Standing consent for ANY read-only action. Do not ask permission to look at
something. Look, then report.

Explicitly pre-authorised:

- Reading any file in this repo, on any branch
- `git log`, `git diff`, `git show`, `git status`, `git branch`, `git ls-remote`
- Reading GitHub Actions run status, logs and artifact listings
- Reading the upstream repos (`duckyb/zmk-urchin`, `duckyb/urchin`,
  `zmkfirmware/zmk`, `GPeye/urchin-peripheral-animation`, `ulounge/nice-view-mod`)
- Web search and fetching public documentation (zmk.dev above all)
- Reading project docs, listing and reading memory

Diagnose first, then propose. No permission request before a read.

### The three things that only LOOK like reading

1. **Pushing to observe.** `git push` — even to `Dev` — starts a GitHub Actions
   build and publishes commits under Sylvain's name. That is a change. Needs consent.
2. **"Flash to test."** Flashing a `.uf2` overwrites working firmware on a keyboard
   he types on all day. That is a change, and it is his hand on the reset button,
   never an assumed next step.
3. **Disturbing a live browser session.** Navigating or clicking in a tab where
   Sylvain has work in progress can destroy it. Open a new tab instead, or ask.

---

## 2. No change without express consent

Do NOT change anything without Sylvain's explicit, specific go-ahead first.

This covers, at minimum:

- Editing, creating, renaming or deleting any file in the repo
- `git add`, `git commit`, `git push`, creating a branch, opening or merging a PR
- Merging `Dev` into `master`
- Changing `config/west.yml` revisions or `build.yaml` shields
- Editing `README.md`, the keymap diagram or any asset
- Anything touching GitHub settings, Actions, secrets or the FUNDING file
- Writing to project docs or to memory

"Go" or "ok" in reply to a broad question is NOT consent for a specific change.
Present the exact change, then wait for a yes on that change. One yes covers one
change — do not generalise it to the next one.

**Absolute:** never commit directly to `master`, never force-push, never rewrite
history, never delete a branch.

---

## 3. The edit process — six steps, every change, no exceptions

**Step 1 — Explain, then show the diff, before touching anything.**
Two parts, in this order:

- Two or three sentences of plain language: what this does to the keyboard, which
  key, which layer, what it feels like in use.
- Then a GitHub-style unified diff — `-` removed, `+` added, context unprefixed,
  in a ```diff fenced block. State what is deleted, what is updated, what is added.

Never describe a keymap change in prose only. Never show a diff without the
plain-language part.

**Step 2 — Wait for approval of that specific diff.** No approval, no edit.

**Step 3 — Secure the rollback before editing.**

- Record the current `Dev` and `master` commit SHAs and state them in the report.
- Before any firmware Sylvain will flash: confirm he has the last known-good
  firmware zip saved locally. Git protects the source; only a saved `.uf2`
  protects the keyboard he is typing on right now.
- Never rely on "I can just revert" as the whole plan — say the exact revert
  command he would run.

**Step 4 — Dry run: validate before committing.** For any keymap change:

- **Count the bindings.** Every layer must have exactly 34: 10 + 10 + 10 + 4 thumb.
  A miscount is the number one cause of a silent build failure here. Count them.
- Confirm every `&behavior` used is defined in `behaviors {}` or is stock ZMK.
- Confirm every keycode exists — French codes come from `keymap_french.h`, not
  from the standard ZMK keycode list. Check the header, don't assume.
- Confirm layer names match the `#define` list and the layer order is unchanged.
- Verify behaviors and properties against zmk.dev docs. Never invent devicetree
  syntax. If unsure, say so — do not produce plausible code.

**Step 5 — Apply.** One logical change per commit, on `Dev`, with a message that
says what changed and on which layer.

Attribution: when Claude makes the commit, end the message with exactly one
`Assisted-By:` trailer naming the model — e.g.
`Assisted-By: Claude Opus 5 <noreply@anthropic.com>`. Never `Co-Authored-By:`:
Sylvain is the author of this repo, Claude assisted. Add no other trailer.

**Step 6 — Test the real effect, not the save.**

- A commit is not a test. A green GitHub Actions run is not a test either — it
  proves the firmware compiles, nothing about whether the key does what he wanted.
- Report the run result, and give him the artifact link.
- Sylvain flashes and confirms behaviour on hardware. Only then may `Dev` be
  proposed for merge into `master`.

---

## 4. Report every change

After any edit, report:

- Which file (full path) and which layer
- What changed — before → after, or the specific lines added and removed
- Why
- Anything it could break — including: the other half's firmware, Bluetooth
  pairing, the nice!view animation module, Android behaviour
- How to roll it back — the exact command, plus "re-flash the previous zip"

No silent edits. No "cleaned up while I was in there". Flag separately anything
added that Sylvain did not explicitly ask for, so he can strike it.

---

## 5. Never, regardless of instruction

- Enter Sylvain's credentials, passwords or 2FA/OTP codes anywhere
- Complete a login or verification challenge on his behalf
- Commit a token, key or secret to this repo

---

## 6. Project-specific knowledge worth not re-deriving

- Branch is `Dev` — capital D. Git is case-sensitive; getting this wrong wastes
  twenty minutes every time.
- ZMK is pinned to `v0.3.0` in TWO places and they must always match:
  `config/west.yml` (`revision: v0.3.0` — the source tree) and
  `.github/workflows/build.yml` (`build-user-config.yml@v0.3.0` — the CI
  workflow). Pinning only one half-works silently: with `west.yml` alone the
  firmware compiles, then main's post-build "explicit ZMK compat" step hard-fails
  and the artifact upload is skipped. Never change one without the other.
- Why: ZMK main moved to Zephyr 4.1 board variants in Dec 2025, so `nice_nano_v2`
  no longer exists there, and `build.yaml` names it three times. Upstream
  `duckyb/urchin-zmk-firmware` pinned to v0.3.0 the same way.
- Because ZMK is pinned, a failing build is no longer evidence of an upstream
  break. Suspect in order: the keymap, then `urchin-zmk-module` and
  `nice-view-mod` — both still `revision: main`, the only unpinned moving parts.
- `build.yaml` uses a custom shield `nice_view_custom` from `ulounge/nice-view-mod`.
  Reverting to stock `nice_view` requires editing BOTH `build.yaml` and `west.yml`.
  Never touch one without the other.
- Three firmware files are produced: left, right, and `settings_reset`. Always say
  which goes where, and remind him about `settings_reset` when Bluetooth pairing
  behaviour changes.
- Firmware only matches the diagram when the host OS is set to French input.
- Known issue, do not "fix" by accident: À Ç œ æ È É do not work on Android.

- Commit `7f901d4` (Add working rules for Claude sessions) carries an old
  `Co-Authored-By:` trailer. It is already pushed — leave it. Correcting it
  would mean rewriting history, which section 2 forbids.

---

## 7. Standing preferences

- Flag uncertainty and own mistakes plainly; do not paper over a wrong earlier guess.
- Push back with a better option rather than agreeing to please.
- Cite sources — zmk.dev for anything ZMK.
- Concise and segmented. Show the diff, not a description of it.
