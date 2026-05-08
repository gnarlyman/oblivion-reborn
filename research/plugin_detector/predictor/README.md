# Predictor v1

Static predictor for the naked-NPC bug class on Reborn-OOO. Walks the load
order, applies override winning (BP merges fall out naturally), resolves NPC
inventory through template + race + LVLI chains, asks the VFS module whether
referenced meshes resolve.

Validated against G5 ground truth corpus at `../g5/validation_vanilla.jsonl`.

Run: `python predictor/predict.py --profile Reborn-OOO --output predictions.jsonl`
