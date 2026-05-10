"""Scan active plugins for player-castable spells (SPIT type=0).

Resolves runtime FormIDs by remapping each plugin's local high-byte through
its MAST chain to the runtime load order. Buckets spells by school using a
hardcoded effect-signature → school table.

Usage:
    python find_spells.py [--profile Reborn-OOO]
"""
from __future__ import annotations
import argparse
import struct
import sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from audit_ooo_enhanced import iter_records, parse_subrecords, cstr, load_plugin

MODLIST = Path(r"D:\Modlists\Reborn")
DATA_DIR = MODLIST / "Stock Game" / "Data"
MODS_DIR = MODLIST / "mods"

# Effect signature → school. Vanilla 4-char EFIDs from MGEF records.
SCHOOL: dict[str, str] = {}
def _add(sch: str, *codes: str) -> None:
    for c in codes:
        SCHOOL[c] = sch
_add("Restoration",
     "RSHE","RSMA","RSFA","RSAT","RSHL","RSPA","RSDI","RSPO","RSNW","RSFI","RSFR","RSSH","RSMG",
     "CUDI","CUPO","CUPA",
     "FOHE","FOMA","FOFA","FOAT","FOSK","FOSP",
     "ABHE","ABMA","ABFA","ABAT","ABSK","ABSP",
     "STMA","STMH","STRH")
_add("Destruction",
     "FIDG","FRDG","SHDG",
     "DGHE","DGMA","DGFA","DGAT","DGSK","DGSP",
     "DRHE","DRMA","DRFA","DRAT","DRSK","DRSP",
     "DISE","DIWE",
     "WKFI","WKFR","WKSH","WKMA","WKDI","WKNW","WKPO")
_add("Alteration",
     "BRDN","FTHR","SHLD","FISH","FRSH","LISH",
     "LGHT","WABR","WAWA","OPNL","LOCK")
_add("Illusion",
     "CHRM","CALM","COCR","COHU","DECR","DEHU","FRCR","FRHU","RACR","RAHU",
     "INVI","CHML","NEYE","PARA","SLNC","DEMO","DEMC","DEMH","FRZN","FRNZ","RALY","CMND")
_add("Mysticism",
     "DTCT","DTNL","TELE","STRP","SOTR","DSPL","REDG","RFLC","SABS")
_add("Conjuration",
     "BWAX","BWBO","BWCU","BWDA","BWGA","BWGR","BWHE","BWMA","BWSH","BWSW",
     "BABO","BAAX","BACS","BADA","BAGA","BAGS","BAHE","BAMA","BASH","BASW",
     "TURN")

LEVELS = {0: "Novice", 1: "Apprentice", 2: "Journeyman", 3: "Expert", 4: "Master"}


def school_of(efid: str) -> str | None:
    if efid in SCHOOL:
        return SCHOOL[efid]
    if efid.startswith("Z"):
        return "Conjuration"
    return None


def parse_active(plugins_txt: Path) -> list[str]:
    active = []
    for ln in plugins_txt.read_text(encoding="utf-8").splitlines():
        s = ln.strip()
        if not s or s.startswith("#"):
            continue
        if s.startswith("*"):
            active.append(s[1:])
        else:
            active.append(s)
    return active


def find_plugin_path(name: str) -> Path | None:
    p = DATA_DIR / name
    if p.exists():
        return p
    cands = list(MODS_DIR.glob(f"*/{name}"))
    return cands[0] if cands else None


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--profile", default="Reborn-OOO")
    ap.add_argument("--per-school-limit", type=int, default=30)
    ap.add_argument("--plugin-allowlist", nargs="*", default=None,
                    help="if set, only scan these plugin filenames")
    args = ap.parse_args()

    plugins_txt = MODLIST / "profiles" / args.profile / "plugins.txt"
    active = parse_active(plugins_txt)

    # Bethesda forces .esm before .esp regardless of file order.
    esms = [p for p in active if p.lower().endswith(".esm")]
    esps = [p for p in active if not p.lower().endswith(".esm")]
    load_order = esms + esps
    lo_index = {n.lower(): i for i, n in enumerate(load_order)}

    targets = args.plugin_allowlist or load_order

    def runtime_fid(local_fid: int, masters: list[str], plugin_idx: int) -> int:
        high = local_fid >> 24
        body = local_fid & 0x00FFFFFF
        if high < len(masters):
            rt_high = lo_index.get(masters[high].lower())
        else:
            rt_high = plugin_idx
        if rt_high is None:
            return -1
        return (rt_high << 24) | body

    by_school: dict[str, list] = defaultdict(list)

    for pname in targets:
        if pname.lower() not in lo_index:
            continue
        path = find_plugin_path(pname)
        if path is None:
            continue
        try:
            data, masters = load_plugin(path)
        except Exception as e:
            print(f"  ! load fail {pname}: {e}", file=sys.stderr)
            continue
        plugin_idx = lo_index[pname.lower()]
        for top, sig, fid, flags, body in iter_records(data):
            if sig != "SPEL":
                continue
            edid = name = None
            spit_type = spit_cost = spit_level = None
            efids: list[str] = []
            for ssig, sub in parse_subrecords(body):
                if ssig == "EDID":
                    edid = cstr(sub)
                elif ssig == "FULL":
                    name = cstr(sub)
                elif ssig == "SPIT" and len(sub) >= 16:
                    spit_type, spit_cost, spit_level, _ = struct.unpack_from("<IIII", sub)
                elif ssig == "EFID" and len(sub) >= 4:
                    efids.append(sub[:4].decode("latin-1", "replace"))
            if spit_type != 0 or not efids:
                continue
            school = next((s for s in (school_of(e) for e in efids) if s), None)
            if not school:
                continue
            rt = runtime_fid(fid, masters, plugin_idx)
            if rt < 0:
                continue
            by_school[school].append((spit_level or 0, pname, rt,
                                      edid or "", name or "", spit_cost or 0,
                                      ",".join(efids)))

    for sch in ["Restoration", "Destruction", "Alteration",
                "Illusion", "Mysticism", "Conjuration"]:
        rows = sorted(by_school.get(sch, []), key=lambda r: (r[0], r[5], r[4]))
        print(f"\n=== {sch} ({len(rows)}) ===")
        for lvl, plug, fid, edid, name, cost, efs in rows[:args.per_school_limit]:
            ll = LEVELS.get(lvl, str(lvl))[:4]
            print(f"  [{ll}] {fid:08X}  cost={cost:3d}  {plug[:35]:35s}  "
                  f"{edid[:35]:35s}  {name}  ({efs})")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
