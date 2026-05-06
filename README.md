# onyx-chain-wallet-mark

`onyx-chain-wallet-mark` explores blockchain tooling with a small C codebase and local fixtures. The technical goal is to implement a C blockchain tooling project for wallet resource planning, using capacity fixtures and allocation and spill reports.

## Purpose

The project exists to keep a narrow engineering decision visible and testable. For this repo, that decision is how event finality and settlement risk should influence a review result.

## Onyx Chain Wallet Mark Review Notes

The first comparison I would make is `settlement risk` against `event finality` because it shows where the rule is most opinionated.

## What Is Covered

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/onyx-chain-wallet-walkthrough.md` walks through the case spread.
- The C code includes a review path for `settlement risk` and `event finality`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Implementation Notes

The fixture data drives the tests. The code stays thin, while `metadata/domain-review.json` and `config/review-profile.json` explain what each case is meant to protect.

The added C path is deliberately direct, with fixtures doing most of the explaining.

## Command

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Audit Path

The check exercises the source code and the review fixture. `edge` is the high score at 221; `stale` is the low score at 134.

## Limits

The fixture set is small enough to audit by hand. The next useful expansion is malformed input coverage, not extra surface area.
