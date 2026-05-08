# G5 — Live RPC Validator

OBSE plugin + Python driver that drives a running Oblivion.exe to spawn NPCs
and dump their resolved runtime inventory. Used as the ground-truth source
for the static plugin-conflict predictor.

## Build

1. Copy `plugin/EnvVars.props.template` → `plugin/EnvVars.props`, edit the paths.
2. Open `plugin/g5.sln` in Visual Studio. Build x86 / Release.
3. Post-build copies the DLL into the `MO2DeployPath` you set.

## Run

```powershell
python g5_driver.py --profile Reborn-OOO --candidate-list candidates.json --output ground_truth.jsonl
```

See `protocol.md` for the wire protocol.
