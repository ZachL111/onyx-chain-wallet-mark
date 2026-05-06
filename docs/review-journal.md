# Review Journal

I treated `onyx-chain-wallet-mark` as a project where the smallest useful behavior should still be inspectable.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its blockchain tooling focus without claiming live deployment or external usage.

## Cases

- `baseline`: `event finality`, score 197, lane `ship`
- `stress`: `nonce pressure`, score 203, lane `ship`
- `edge`: `settlement risk`, score 221, lane `ship`
- `recovery`: `proof depth`, score 157, lane `ship`
- `stale`: `event finality`, score 134, lane `watch`

## Note

A future change should add new cases before it changes the scoring rule.
