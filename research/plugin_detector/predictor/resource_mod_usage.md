# Resource-mod usage audit — Reborn-OOO

Scans active ARMO/CLOT/WEAP/AMMO records' MODL/ICON paths and attributes each to the mod folder providing the resource via VFS.

## Totals
- Paths scanned: 29339
- Paths resolved: 22793
- Paths NOT resolved (broken refs): 6546

## Verdict legend
- **NEEDED** — at least one active record references a path the VFS attributes to this mod (i.e., this mod's copy is the winning provider). Removing the mod would break those references.
- **SHADOWED** — the mod ships files referenced by some record, but a higher-priority mod also ships the same paths and wins. Removing the mod would not break references (the higher-priority mod still provides the path).
- **NOT REFERENCED** — no scanned record references any path the mod provides. Either the mod's content is engine-implicit (skeleton, body, UI), referenced via NIF-internal textures (out of scope), or simply not used by the active load.

## Focused mods

### UFF Unrepentant Archer
- Verdict: **NEEDED (exclusive refs)**
- Total loose files: 314
- Exclusive refs: 146
- Shadowed refs: 0

Sample referencing records (up to 20):
  - WEAP `UniqueWeapBlindness` 0x000CA156 (OOO Enhanced.esp) → `MODL` `meshes/unrepentantarcher/weapons/nicocedar.nif`
  - ARMO `NLcourtboot` 0x1D026461 (OOO Enhanced.esp) → `MODL` `meshes/unrepentantarcher/armor/dkembossboots.nif`
  - ARMO `NLcourtboot` 0x1D026461 (OOO Enhanced.esp) → `MOD2` `meshes/unrepentantarcher/armor/fancyboots_gnd.nif`
  - ARMO `NLcourtgloves` 0x1D026462 (OOO Enhanced.esp) → `MODL` `meshes/unrepentantarcher/armor/dkembossgauntlets.nif`
  - ARMO `NLcourtgloves` 0x1D026462 (OOO Enhanced.esp) → `MOD2` `meshes/unrepentantarcher/armor/dkembossgauntlets_gnd.nif`
  - ARMO `NLcourtgloves` 0x1D026462 (OOO Enhanced.esp) → `MOD3` `meshes/unrepentantarcher/armor/fancygloves.nif`
  - ARMO `NLnordicfurtunic` 0x1D026463 (OOO Enhanced.esp) → `MODL` `meshes/unrepentantarcher/armor/newfurm.nif`
  - ARMO `NLnordicfurtunic` 0x1D026463 (OOO Enhanced.esp) → `MOD2` `meshes/unrepentantarcher/armor/newfurm_gnd.nif`
  - ARMO `NLnordicfurtunic` 0x1D026463 (OOO Enhanced.esp) → `MOD3` `meshes/unrepentantarcher/armor/newfurf.nif`
  - ARMO `NLnordicpants` 0x1D026464 (OOO Enhanced.esp) → `MODL` `meshes/unrepentantarcher/armor/leatherknickersm.nif`
  - ARMO `NLnordicpants` 0x1D026464 (OOO Enhanced.esp) → `MOD2` `meshes/unrepentantarcher/armor/leatherknickersm_gnd.nif`
  - ARMO `NLnordicpants` 0x1D026464 (OOO Enhanced.esp) → `MOD3` `meshes/unrepentantarcher/armor/leatherknickersf.nif`
  - ARMO `NLnordicpants` 0x1D026464 (OOO Enhanced.esp) → `MOD4` `meshes/unrepentantarcher/armor/buckskinpants2f_gnd.nif`
  - ARMO `NLnordichelm` 0x1D026465 (OOO Enhanced.esp) → `MODL` `meshes/unrepentantarcher/armor/leatherhelmet.nif`
  - ARMO `NLnordichelm` 0x1D026465 (OOO Enhanced.esp) → `MOD2` `meshes/unrepentantarcher/armor/leatherhelmet_gnd.nif`
  - ARMO `NLnordichandwraps` 0x1D026466 (OOO Enhanced.esp) → `MODL` `meshes/unrepentantarcher/armor/studdedglovesm.nif`
  - ARMO `NLnordichandwraps` 0x1D026466 (OOO Enhanced.esp) → `MOD2` `meshes/unrepentantarcher/armor/studdedgloves_gnd.nif`
  - ARMO `NLnordichandwraps` 0x1D026466 (OOO Enhanced.esp) → `MOD3` `meshes/unrepentantarcher/armor/studdedglovesf.nif`
  - ARMO `NLleatherhood1` 0x1D026467 (OOO Enhanced.esp) → `MODL` `meshes/unrepentantarcher/armor/leatherhood01.nif`
  - ARMO `NLleatherhood1` 0x1D026467 (OOO Enhanced.esp) → `MOD2` `meshes/unrepentantarcher/armor/leatherhood01_gnd.nif`

### Apophis Armory of the Silver Dragon
- Verdict: **NEEDED (exclusive refs)**
- Total loose files: 558
- Exclusive refs: 138
- Shadowed refs: 0

Sample referencing records (up to 20):
  - WEAP `BoundDagger` 0x0002627C (OOO Enhanced.esp) → `MODL` `meshes/weapons/silverdragon/daggerstealth.nif`
  - WEAP `BoundDagger` 0x0002627C (OOO Enhanced.esp) → `ICON` `textures/weapons/silverdragon/daggerstealth.dds`
  - ARMO `TheSilverDragonShieldOOO` 0x01025675 (OOO Enhanced.esp) → `MODL` `meshes/armor/silverdragon/knight/shield.nif`
  - ARMO `TheSilverDragonShieldOOO` 0x01025675 (OOO Enhanced.esp) → `MOD2` `meshes/armor/silverdragon/knight/shield.nif`
  - ARMO `TheSilverDragonShieldOOO` 0x01025675 (OOO Enhanced.esp) → `ICON` `textures/armor/silverdragon/knight/shield.dds`
  - WEAP `VolmyrSword` 0x0100D9B0 (OOO Enhanced.esp) → `MODL` `meshes/weapons/silverdragon/dragoncrusher.nif`
  - ARMO `00SilverDragonBattleMageRobe` 0x1D005B7A (OOO Enhanced.esp) → `MODL` `meshes/armor/silverdragon/battlemage/m/robe.nif`
  - ARMO `00SilverDragonBattleMageRobe` 0x1D005B7A (OOO Enhanced.esp) → `MOD2` `meshes/armor/silverdragon/battlemage/m/robe_gnd.nif`
  - ARMO `00SilverDragonBattleMageHood` 0x1D005B7B (OOO Enhanced.esp) → `MODL` `meshes/armor/silverdragon/battlemage/hood.nif`
  - ARMO `00SilverDragonBattleMageHood` 0x1D005B7B (OOO Enhanced.esp) → `MOD2` `meshes/armor/silverdragon/battlemage/hood_gnd.nif`
  - ARMO `00SilverDragonBattleMageHood` 0x1D005B7B (OOO Enhanced.esp) → `ICON` `textures/armor/silverdragon/battlemage/hood.dds`
  - ARMO `00SilverDragonBattleMageGauntlets` 0x1D006065 (OOO Enhanced.esp) → `MODL` `meshes/armor/silverdragon/battlemage/m/gauntlets.nif`
  - ARMO `00SilverDragonBattleMageGauntlets` 0x1D006065 (OOO Enhanced.esp) → `MOD2` `meshes/armor/silverdragon/battlemage/m/gauntlets_gnd.nif`
  - ARMO `00SilverDragonBattleMageGauntlets` 0x1D006065 (OOO Enhanced.esp) → `MOD3` `meshes/armor/silverdragon/battlemage/f/gauntlets.nif`
  - ARMO `00SilverDragonBattleMageBoots` 0x1D006066 (OOO Enhanced.esp) → `MODL` `meshes/armor/silverdragon/battlemage/m/boots.nif`
  - ARMO `00SilverDragonBattleMageBoots` 0x1D006066 (OOO Enhanced.esp) → `MOD2` `meshes/armor/silverdragon/battlemage/m/boots_gnd.nif`
  - ARMO `00SilverDragonBattleMageBoots` 0x1D006066 (OOO Enhanced.esp) → `ICON` `textures/armor/silverdragon/battlemage/m/boots.dds`
  - ARMO `00SilverDragonBattleMageMask` 0x1D006067 (OOO Enhanced.esp) → `MODL` `meshes/armor/silverdragon/battlemage/mask.nif`
  - ARMO `00SilverDragonBattleMageMask` 0x1D006067 (OOO Enhanced.esp) → `MOD2` `meshes/armor/silverdragon/battlemage/mask_gnd.nif`
  - ARMO `00SilverDragonBattleMageMask` 0x1D006067 (OOO Enhanced.esp) → `ICON` `textures/armor/silverdragon/battlemage/mask.dds`

### Sentinel Legendary Weapons And Armors
- Verdict: **NEEDED (exclusive refs)**
- Total loose files: 752
- Exclusive refs: 112
- Shadowed refs: 0

Sample referencing records (up to 20):
  - WEAP `UniqueWeapAkavari` 0x000CA155 (OOO Enhanced.esp) → `MODL` `meshes/sentinel/weapons/perfectakaviridai-katana.nif`
  - WEAP `UniqueWeapAcid` 0x000CA154 (OOO Enhanced.esp) → `MODL` `meshes/sentinel/weapons/perfectakavirikatana.nif`
  - WEAP `BaurusAkaviriLongSword` 0x0006B843 (OOO Enhanced.esp) → `MODL` `meshes/sentinel/weapons/perfectakavirikatana.nif`
  - WEAP `CGAkaviriLongSwordRenault` 0x00066C44 (OOO Enhanced.esp) → `MODL` `meshes/sentinel/weapons/perfectakavirikatana.nif`
  - WEAP `MQ09Akaviri2HSword15` 0x00187BC7 (Bashed Patch, 0.esp) → `MODL` `meshes/sentinel/weapons/akavirininjato.nif`
  - WEAP `MQ09AkaviriFrostSword20` 0x00187BC3 (Bashed Patch, 0.esp) → `MODL` `meshes/sentinel/weapons/akaviriwakizashi.nif`
  - WEAP `MQ09AkaviriFrostSword15` 0x00187BC2 (Bashed Patch, 0.esp) → `MODL` `meshes/sentinel/weapons/akaviriwakizashi.nif`
  - WEAP `MQ09Akaviri2HSword20` 0x00187BC0 (Bashed Patch, 0.esp) → `MODL` `meshes/sentinel/weapons/akavirininjato.nif`
  - WEAP `WeapAkaviriLongSwordFine` 0x000E78E5 (OOO Enhanced.esp) → `MODL` `meshes/sentinel/weapons/akaviriwakizashi.nif`
  - WEAP `CGAkaviriLongSwordGlenroy` 0x00022F82 (OOO Enhanced.esp) → `MODL` `meshes/sentinel/weapons/perfectakavirikatana.nif`
  - CLOT `XBloodRobeOOO` 0x01048F74 (OOO Enhanced.esp) → `MODL` `meshes/sentinel/armor/belneirosrobe.nif`
  - CLOT `XBloodRobeOOO` 0x01048F74 (OOO Enhanced.esp) → `MOD2` `meshes/sentinel/armor/belneirosrobe_gnd.nif`
  - ARMO `SenTineLArmorAkaviriEmperorArmor` 0x1D00293A (OOO Enhanced.esp) → `MODL` `meshes/sentinel/armor/akaviriemperorarmor.nif`
  - ARMO `SenTineLArmorAkaviriEmperorArmor` 0x1D00293A (OOO Enhanced.esp) → `MOD2` `meshes/sentinel/armor/emperorarmor_gnd.nif`
  - ARMO `SenTineLArmorAkaviriEmperorArmor` 0x1D00293A (OOO Enhanced.esp) → `MOD3` `meshes/sentinel/armor/akaviriemperorarmor.nif`
  - ARMO `SenTineLArmorEmperorShield` 0x1D0037F7 (OOO Enhanced.esp) → `MODL` `meshes/sentinel/armor/emperorshield.nif`
  - ARMO `SenTineLArmorEmperorShield` 0x1D0037F7 (OOO Enhanced.esp) → `MOD2` `meshes/sentinel/armor/emperorshield.nif`
  - ARMO `SenTineLArmorEmperorShield` 0x1D0037F7 (OOO Enhanced.esp) → `ICON` `textures/sentinel/armor/emperorshield.dds`
  - ARMO `SenTineLArmorEmperorShieldReplica00` 0x1D006FCC (OOO Enhanced.esp) → `MODL` `meshes/sentinel/armor/emperorshield.nif`
  - ARMO `SenTineLArmorEmperorShieldReplica00` 0x1D006FCC (OOO Enhanced.esp) → `MOD2` `meshes/sentinel/armor/emperorshield.nif`

### Offhand Weapons
- Verdict: **NEEDED (exclusive refs)**
- Total loose files: 93
- Exclusive refs: 91
- Shadowed refs: 0

Sample referencing records (up to 20):
  - ARMO `WeapOffhandIronWarAxeFine` 0x1D0016F0 (OOO Enhanced.esp) → `MODL` `meshes/weapons/offhand weapons/iron/waraxe (offhand).nif`
  - ARMO `WeapOffhandIronWarAxeFine` 0x1D0016F0 (OOO Enhanced.esp) → `MOD2` `meshes/weapons/offhand weapons/iron/waraxe (offhand).nif`
  - ARMO `WeapOffhandAkaviriLongsword` 0x1D102ACF (OOO Enhanced.esp) → `MODL` `meshes/weapons/offhand weapons/akaviri weapon/longsword (offhand).nif`
  - ARMO `WeapOffhandAkaviriLongsword` 0x1D102ACF (OOO Enhanced.esp) → `MOD2` `meshes/weapons/offhand weapons/akaviri weapon/longsword (offhand).nif`
  - ARMO `WeapOffhandClub` 0x1D102AD0 (OOO Enhanced.esp) → `MODL` `meshes/weapons/offhand weapons/club/club (offhand).nif`
  - ARMO `WeapOffhandClub` 0x1D102AD0 (OOO Enhanced.esp) → `MOD2` `meshes/weapons/offhand weapons/club/club (offhand).nif`
  - ARMO `WeapOffhandSteelCutlass` 0x1D102AD1 (OOO Enhanced.esp) → `MODL` `meshes/weapons/offhand weapons/cutlass/cutlass (offhand).nif`
  - ARMO `WeapOffhandSteelCutlass` 0x1D102AD1 (OOO Enhanced.esp) → `MOD2` `meshes/weapons/offhand weapons/cutlass/cutlass (offhand).nif`
  - ARMO `WeapOffhandDaedricLongsword` 0x1D102AD3 (OOO Enhanced.esp) → `MODL` `meshes/weapons/offhand weapons/daedric/longsword (offhand).nif`
  - ARMO `WeapOffhandDaedricLongsword` 0x1D102AD3 (OOO Enhanced.esp) → `MOD2` `meshes/weapons/offhand weapons/daedric/longsword (offhand).nif`
  - ARMO `WeapOffhandDaedricMace` 0x1D102AD4 (OOO Enhanced.esp) → `MODL` `meshes/weapons/offhand weapons/daedric/mace (offhand).nif`
  - ARMO `WeapOffhandDaedricMace` 0x1D102AD4 (OOO Enhanced.esp) → `MOD2` `meshes/weapons/offhand weapons/daedric/mace (offhand).nif`
  - ARMO `WeapOffhandDaedricWarAxe` 0x1D102AD6 (OOO Enhanced.esp) → `MODL` `meshes/weapons/offhand weapons/daedric/waraxe (offhand).nif`
  - ARMO `WeapOffhandDaedricWarAxe` 0x1D102AD6 (OOO Enhanced.esp) → `MOD2` `meshes/weapons/offhand weapons/daedric/waraxe (offhand).nif`
  - ARMO `WeapOffhandDwarvenDagger` 0x1D102AD7 (OOO Enhanced.esp) → `MOD2` `meshes/weapons/offhand weapons/dwarven/dagger (offhand).nif`
  - ARMO `WeapOffhandDwarvenLongsword` 0x1D102AD8 (OOO Enhanced.esp) → `MODL` `meshes/weapons/offhand weapons/dwarven/longsword (offhand).nif`
  - ARMO `WeapOffhandDwarvenLongsword` 0x1D102AD8 (OOO Enhanced.esp) → `MOD2` `meshes/weapons/offhand weapons/dwarven/longsword (offhand).nif`
  - ARMO `WeapOffhandDwarvenMace` 0x1D102AD9 (OOO Enhanced.esp) → `MODL` `meshes/weapons/offhand weapons/dwarven/mace (offhand).nif`
  - ARMO `WeapOffhandDwarvenMace` 0x1D102AD9 (OOO Enhanced.esp) → `MOD2` `meshes/weapons/offhand weapons/dwarven/mace (offhand).nif`
  - ARMO `WeapOffhandDwarvenShortSword` 0x1D102ADA (OOO Enhanced.esp) → `MOD2` `meshes/weapons/offhand weapons/dwarven/shortsword (offhand).nif`

### Lost Paladins of the Divines
- Verdict: **NEEDED (exclusive refs)**
- Total loose files: 324
- Exclusive refs: 83
- Shadowed refs: 0

Sample referencing records (up to 20):
  - ARMO `HeavenFuryBootsGold` 0x01004C84 (OOO Enhanced.esp) → `MODL` `meshes/armor/lpotd/wrath/m/boots.nif`
  - ARMO `HeavenFuryBootsGold` 0x01004C84 (OOO Enhanced.esp) → `MOD2` `meshes/armor/lpotd/wrath/m/rboots_gnd.nif`
  - ARMO `HeavenFuryBootsGold` 0x01004C84 (OOO Enhanced.esp) → `ICON` `textures/armor/lpotd/wrath/m/boots.dds`
  - ARMO `HeavenFuryCuirassGold` 0x01004C85 (OOO Enhanced.esp) → `MODL` `meshes/armor/lpotd/wrath/m/cuirass.nif`
  - ARMO `HeavenFuryCuirassGold` 0x01004C85 (OOO Enhanced.esp) → `MOD2` `meshes/armor/lpotd/wrath/m/rcuirass_gnd.nif`
  - ARMO `HeavenFuryCuirassGold` 0x01004C85 (OOO Enhanced.esp) → `ICON` `textures/armor/lpotd/wrath/m/cuirass.dds`
  - ARMO `HeavenFuryCuirassGold` 0x01004C85 (OOO Enhanced.esp) → `MOD3` `meshes/armor/lpotd/wrath/f/cuirass.nif`
  - ARMO `HeavenFuryCuirassGold` 0x01004C85 (OOO Enhanced.esp) → `MOD4` `meshes/armor/lpotd/wrath/f/rcuirass_gnd.nif`
  - ARMO `HeavenFuryGauntletsGold` 0x01004C86 (OOO Enhanced.esp) → `MODL` `meshes/armor/lpotd/wrath/m/gauntlets.nif`
  - ARMO `HeavenFuryGauntletsGold` 0x01004C86 (OOO Enhanced.esp) → `MOD2` `meshes/armor/lpotd/wrath/m/rgauntlets_gnd.nif`
  - ARMO `HeavenFuryGreavesGold` 0x01004C87 (OOO Enhanced.esp) → `MODL` `meshes/armor/lpotd/wrath/m/greaves.nif`
  - ARMO `HeavenFuryGreavesGold` 0x01004C87 (OOO Enhanced.esp) → `MOD2` `meshes/armor/lpotd/wrath/m/rgreaves_gnd.nif`
  - ARMO `HeavenFuryGreavesGold` 0x01004C87 (OOO Enhanced.esp) → `ICON` `textures/armor/lpotd/wrath/m/greaves.dds`
  - ARMO `HeavenFuryHelmetGold` 0x01004C88 (OOO Enhanced.esp) → `MODL` `meshes/armor/lpotd/wrath/helmet.nif`
  - ARMO `HeavenFuryHelmetGold` 0x01004C88 (OOO Enhanced.esp) → `MOD2` `meshes/armor/lpotd/wrath/rhelmet_gnd.nif`
  - ARMO `HeavenFuryShieldGold` 0x01004C8A (OOO Enhanced.esp) → `MODL` `meshes/armor/lpotd/wrath/shield.nif`
  - ARMO `HeavenFuryShieldGold` 0x01004C8A (OOO Enhanced.esp) → `MOD2` `meshes/armor/lpotd/wrath/rshield.nif`
  - ARMO `HeavenFuryShieldGold` 0x01004C8A (OOO Enhanced.esp) → `ICON` `textures/armor/lpotd/wrath/shield.dds`
  - WEAP `WeapHeavenFuryClaymore01` 0x01007AE6 (OOO Enhanced.esp) → `MODL` `meshes/weapons/lpotd/wrath/claymore.nif`
  - WEAP `WeapHeavenFuryClaymore01` 0x01007AE6 (OOO Enhanced.esp) → `ICON` `textures/weapons/lpotd/wrath/claymore.dds`

### RealSwords Nord
- Verdict: **NEEDED (exclusive refs)**
- Total loose files: 378
- Exclusive refs: 72
- Shadowed refs: 0

Sample referencing records (up to 20):
  - ARMO `RSNordIronShield01` 0x1D002B57 (OOO Enhanced.esp) → `MODL` `meshes/realswords/nord/shields/nordshield01.nif`
  - ARMO `RSNordIronShield01` 0x1D002B57 (OOO Enhanced.esp) → `MOD2` `meshes/realswords/nord/shields/nordshield01.nif`
  - ARMO `RSNordIronShield02` 0x1D002B58 (OOO Enhanced.esp) → `MODL` `meshes/realswords/nord/shields/nordshield02.nif`
  - ARMO `RSNordIronShield02` 0x1D002B58 (OOO Enhanced.esp) → `MOD2` `meshes/realswords/nord/shields/nordshield02.nif`
  - ARMO `RSNordHelmWings` 0x1D00479F (OOO Enhanced.esp) → `MODL` `meshes/realswords/nord/nordhelmwings.nif`
  - ARMO `RSNordHelmWings` 0x1D00479F (OOO Enhanced.esp) → `MOD2` `meshes/realswords/nord/nordhelmwings_gnd.nif`
  - ARMO `RSNordBoots` 0x1D0047A2 (OOO Enhanced.esp) → `MODL` `meshes/realswords/nord/nordboots.nif`
  - ARMO `RSNordBoots` 0x1D0047A2 (OOO Enhanced.esp) → `MOD2` `meshes/realswords/nord/nordboots_gnd.nif`
  - ARMO `RSNordChainmailCuirass` 0x1D0047A4 (OOO Enhanced.esp) → `MODL` `meshes/realswords/nord/chainmailm1.nif`
  - ARMO `RSNordWarCuirass` 0x1D0070ED (OOO Enhanced.esp) → `MODL` `meshes/realswords/nord/cuirassm.nif`
  - ARMO `RSNordWarCuirass` 0x1D0070ED (OOO Enhanced.esp) → `MOD3` `meshes/realswords/nord/cuirassm.nif`
  - ARMO `RSNordSteelHelm` 0x1D009A1F (OOO Enhanced.esp) → `MODL` `meshes/realswords/nord/helmsteelwings.nif`
  - ARMO `RSNordSteelHelm` 0x1D009A1F (OOO Enhanced.esp) → `MOD2` `meshes/realswords/nord/helmsteelwings_gnd.nif`
  - ARMO `RSNordSteelHelmBrumaGuard` 0x1D00F666 (OOO Enhanced.esp) → `MODL` `meshes/realswords/nord/helmsteelwings2.nif`
  - ARMO `RSNordSteelHelmBrumaGuard` 0x1D00F666 (OOO Enhanced.esp) → `MOD2` `meshes/realswords/nord/helmsteelwings2_gnd.nif`
  - ARMO `RSNordHelmWingsBrumaGuard` 0x1D00F667 (OOO Enhanced.esp) → `MODL` `meshes/realswords/nord/nordhelmwings2.nif`
  - ARMO `RSNordHelmWingsBrumaGuard` 0x1D00F667 (OOO Enhanced.esp) → `MOD2` `meshes/realswords/nord/nordhelmwings2_gnd.nif`
  - WEAP `RSNordAxeBeardedFineWaraxe` 0x1D001D17 (OOO Enhanced.esp) → `MODL` `meshes/realswords/nord/axebeardedfine.nif`
  - WEAP `RSNordCawood2` 0x1D001D4A (OOO Enhanced.esp) → `MODL` `meshes/realswords/nord/cawood2.nif`
  - WEAP `RSNordGramrOldLongsword` 0x1D001E25 (OOO Enhanced.esp) → `MODL` `meshes/realswords/nord/gramrold.nif`

### Adonnays Elven Weaponry
- Verdict: **NEEDED (exclusive refs)**
- Total loose files: 420
- Exclusive refs: 69
- Shadowed refs: 0

Sample referencing records (up to 20):
  - WEAP `WeapCommonShortbow02OOO` 0x01001F18 (Oscuro's_Oblivion_Overhaul.esm) → `MODL` `meshes/weapons/adonnay/bows/shortbow02.nif`
  - WEAP `WeapCommonShortbow01OOO` 0x01001F19 (Oscuro's_Oblivion_Overhaul.esm) → `MODL` `meshes/weapons/adonnay/bows/shortbow01.nif`
  - WEAP `WeapAyleidWhiteWarBowOOO` 0x01001F1A (OOO Enhanced.esp) → `MODL` `meshes/weapons/adonnay/bows/whitewoodwarbow.nif`
  - WEAP `WeapAyleidWhiteLongBowOOO` 0x01001F1B (Oscuro's_Oblivion_Overhaul.esm) → `MODL` `meshes/weapons/adonnay/bows/whitewoodlongbow.nif`
  - WEAP `WeapAyleidWhiteBowOOO` 0x01001F1C (OOO Enhanced.esp) → `MODL` `meshes/weapons/adonnay/bows/whitewoodbow.nif`
  - WEAP `WeapAyleidRedwoodWarBowOOO` 0x01001F1D (OOO Enhanced.esp) → `MODL` `meshes/weapons/adonnay/bows/redwoodwarbow.nif`
  - WEAP `WeapAyleidRedwoodBowOOO` 0x01001F1E (OOO Enhanced.esp) → `MODL` `meshes/weapons/adonnay/bows/redwoodbow.nif`
  - WEAP `WeapAyleidRedwoodLongBowOOO` 0x01001F1F (OOO Enhanced.esp) → `MODL` `meshes/weapons/adonnay/bows/redwoodlongbow.nif`
  - WEAP `WeapAyleidElmLongBowOOO` 0x01001F20 (Oscuro's_Oblivion_Overhaul.esm) → `MODL` `meshes/weapons/adonnay/bows/elmlongbow.nif`
  - WEAP `WeapAyleidElmWarBowOOO` 0x01001F21 (OOO Enhanced.esp) → `MODL` `meshes/weapons/adonnay/bows/elmwarbow.nif`
  - WEAP `WeapAyleidElmBowOOO` 0x01001F22 (OOO Enhanced.esp) → `MODL` `meshes/weapons/adonnay/bows/elmwoodbow.nif`
  - WEAP `WeapAyleidCloudWarBowOOO` 0x01001F23 (OOO Enhanced.esp) → `MODL` `meshes/weapons/adonnay/bows/skywoodwarbow.nif`
  - WEAP `WeapAyleidCloudLongBowOOO` 0x01001F24 (OOO Enhanced.esp) → `MODL` `meshes/weapons/adonnay/bows/skywoodlongbow.nif`
  - WEAP `WeapAyleidCloudBowOOO` 0x01001F25 (OOO Enhanced.esp) → `MODL` `meshes/weapons/adonnay/bows/skywoodbow.nif`
  - WEAP `WeapAyleidEbonyWarBowOOO` 0x01001F26 (OOO Enhanced.esp) → `MODL` `meshes/weapons/adonnay/bows/ebonywarbow.nif`
  - WEAP `WeapAyleidEbonyLongBowOOO` 0x01001F27 (OOO Enhanced.esp) → `MODL` `meshes/weapons/adonnay/bows/ebonylongbow.nif`
  - WEAP `WeapAyleidEbonyBowOOO` 0x01001F28 (OOO Enhanced.esp) → `MODL` `meshes/weapons/adonnay/bows/ebonybow.nif`
  - WEAP `WeapAyleidIvoryWarBowOOO` 0x01001F29 (OOO Enhanced.esp) → `MODL` `meshes/weapons/adonnay/bows/ivorywarbow.nif`
  - WEAP `WeapAyleidIvoryLongBowOOO` 0x01001F2A (OOO Enhanced.esp) → `MODL` `meshes/weapons/adonnay/bows/ivorylongbow.nif`
  - WEAP `WeapAyleidIvoryBowOOO` 0x01001F2B (OOO Enhanced.esp) → `MODL` `meshes/weapons/adonnay/bows/ivorybow.nif`

### Vermillion and Silverthorn Robes by Kafei
- Verdict: **NEEDED (exclusive refs)**
- Total loose files: 25
- Exclusive refs: 39
- Shadowed refs: 5

Sample referencing records (up to 20):
  - CLOT `KDSilverthornHoodOOO` 0x01001C9C (Oscuro's_Oblivion_Overhaul.esm) → `MODL` `meshes/clothes/kdrobes/silverthornhood.nif`
  - CLOT `KDSilverthornHoodOOO` 0x01001C9C (Oscuro's_Oblivion_Overhaul.esm) → `MOD2` `meshes/clothes/kdrobes/silverthornhood_gnd.nif`
  - CLOT `KDSilverthornHoodOOO` 0x01001C9C (Oscuro's_Oblivion_Overhaul.esm) → `MOD3` `meshes/clothes/kdrobes/silverthornhood.nif`
  - CLOT `KDSilverthornHoodOOO` 0x01001C9C (Oscuro's_Oblivion_Overhaul.esm) → `MOD4` `meshes/clothes/kdrobes/silverthornhood_gnd.nif`
  - CLOT `KDSilverthornRobeOOO` 0x01001C9D (Oscuro's_Oblivion_Overhaul.esm) → `MODL` `meshes/clothes/kdrobes/msilverthorn.nif`
  - CLOT `KDSilverthornRobeOOO` 0x01001C9D (Oscuro's_Oblivion_Overhaul.esm) → `MOD2` `meshes/clothes/kdrobes/silverthorn_gnd.nif`
  - CLOT `KDSilverthornRobeOOO` 0x01001C9D (Oscuro's_Oblivion_Overhaul.esm) → `MOD4` `meshes/clothes/kdrobes/silverthorn_gnd.nif`
  - CLOT `KDVermillionGlovesOOOZLadyEmber` 0x01001C9E (OOO Enhanced.esp) → `MODL` `meshes/clothes/kdrobes/mvermgaunt.nif`
  - CLOT `KDVermillionGlovesOOOZLadyEmber` 0x01001C9E (OOO Enhanced.esp) → `MOD2` `meshes/clothes/kdrobes/vermgaunt_gnd.nif`
  - CLOT `KDVermillionGlovesOOOZLadyEmber` 0x01001C9E (OOO Enhanced.esp) → `MOD3` `meshes/clothes/kdrobes/fvermgaunt.nif`
  - CLOT `KDVermillionGlovesOOOZLadyEmber` 0x01001C9E (OOO Enhanced.esp) → `MOD4` `meshes/clothes/kdrobes/vermgaunt_gnd.nif`
  - CLOT `KDVermillionHoodOOO` 0x01001C9F (Oscuro's_Oblivion_Overhaul.esm) → `MODL` `meshes/clothes/kdrobes/vermillionhood.nif`
  - CLOT `KDVermillionHoodOOO` 0x01001C9F (Oscuro's_Oblivion_Overhaul.esm) → `MOD2` `meshes/clothes/kdrobes/vermillionhood_gnd.nif`
  - CLOT `KDVermillionHoodOOO` 0x01001C9F (Oscuro's_Oblivion_Overhaul.esm) → `MOD3` `meshes/clothes/kdrobes/vermillionhood.nif`
  - CLOT `KDVermillionHoodOOO` 0x01001C9F (Oscuro's_Oblivion_Overhaul.esm) → `MOD4` `meshes/clothes/kdrobes/vermillionhood_gnd.nif`
  - CLOT `KDVermillionRobeOOO` 0x01001CA0 (Oscuro's_Oblivion_Overhaul.esm) → `MODL` `meshes/clothes/kdrobes/mvermillion.nif`
  - CLOT `KDVermillionRobeOOO` 0x01001CA0 (Oscuro's_Oblivion_Overhaul.esm) → `MOD2` `meshes/clothes/kdrobes/vermillion_gnd.nif`
  - CLOT `KDVermillionRobeOOO` 0x01001CA0 (Oscuro's_Oblivion_Overhaul.esm) → `MOD4` `meshes/clothes/kdrobes/vermillion_gnd.nif`
  - CLOT `KDVermillionRobeOOOZLadyEmber` 0x01004661 (OOO Enhanced.esp) → `MODL` `meshes/clothes/kdrobes/mvermillion.nif`
  - CLOT `KDVermillionRobeOOOZLadyEmber` 0x01004661 (OOO Enhanced.esp) → `MOD2` `meshes/clothes/kdrobes/vermillion_gnd.nif`

### Blue Leather
- Verdict: **NEEDED (exclusive refs)**
- Total loose files: 37
- Exclusive refs: 20
- Shadowed refs: 0

Sample referencing records (up to 20):
  - ARMO `LeatherBootsBlue` 0x1D003EB6 (OOO Enhanced.esp) → `MODL` `meshes/armor/bleather/m/boots.nif`
  - ARMO `LeatherBootsBlue` 0x1D003EB6 (OOO Enhanced.esp) → `MOD2` `meshes/armor/bleather/m/boots_gnd.nif`
  - ARMO `LeatherBootsBlue` 0x1D003EB6 (OOO Enhanced.esp) → `MOD3` `meshes/armor/bleather/f/boots.nif`
  - ARMO `LeatherBootsBlue` 0x1D003EB6 (OOO Enhanced.esp) → `MOD4` `meshes/armor/bleather/m/boots_gnd.nif`
  - ARMO `LeatherCuirassBlue` 0x1D003EB9 (OOO Enhanced.esp) → `MODL` `meshes/armor/bleather/m/cuirass.nif`
  - ARMO `LeatherCuirassBlue` 0x1D003EB9 (OOO Enhanced.esp) → `MOD2` `meshes/armor/bleather/m/cuirass_gnd.nif`
  - ARMO `LeatherCuirassBlue` 0x1D003EB9 (OOO Enhanced.esp) → `MOD3` `meshes/armor/bleather/f/cuirass.nif`
  - ARMO `LeatherCuirassBlue` 0x1D003EB9 (OOO Enhanced.esp) → `MOD4` `meshes/armor/bleather/f/cuirass_gnd.nif`
  - ARMO `LeatherGreavesBlue` 0x1D003EBA (OOO Enhanced.esp) → `MODL` `meshes/armor/bleather/m/greaves.nif`
  - ARMO `LeatherGreavesBlue` 0x1D003EBA (OOO Enhanced.esp) → `MOD2` `meshes/armor/bleather/m/greaves_gnd.nif`
  - ARMO `LeatherGreavesBlue` 0x1D003EBA (OOO Enhanced.esp) → `MOD3` `meshes/armor/bleather/f/greaves.nif`
  - ARMO `LeatherGreavesBlue` 0x1D003EBA (OOO Enhanced.esp) → `MOD4` `meshes/armor/bleather/m/greaves_gnd.nif`
  - ARMO `LeatherHelmetBlue` 0x1D003EBB (OOO Enhanced.esp) → `MODL` `meshes/armor/bleather/helmet.nif`
  - ARMO `LeatherHelmetBlue` 0x1D003EBB (OOO Enhanced.esp) → `MOD2` `meshes/armor/bleather/helmet_gnd.nif`
  - ARMO `LeatherHelmetBlue` 0x1D003EBB (OOO Enhanced.esp) → `MOD3` `meshes/armor/bleather/helmet.nif`
  - ARMO `LeatherHelmetBlue` 0x1D003EBB (OOO Enhanced.esp) → `MOD4` `meshes/armor/bleather/helmet_gnd.nif`
  - ARMO `LeatherGauntletsBlue` 0x1D003EBC (OOO Enhanced.esp) → `MODL` `meshes/armor/bleather/m/gauntlets.nif`
  - ARMO `LeatherGauntletsBlue` 0x1D003EBC (OOO Enhanced.esp) → `MOD2` `meshes/armor/bleather/m/gauntlets_gnd.nif`
  - ARMO `LeatherGauntletsBlue` 0x1D003EBC (OOO Enhanced.esp) → `MOD3` `meshes/armor/bleather/f/gauntlets.nif`
  - ARMO `LeatherGauntletsBlue` 0x1D003EBC (OOO Enhanced.esp) → `MOD4` `meshes/armor/bleather/m/gauntlets_gnd.nif`

### KafeiDotours Vermillion and Silverthorn Robes For Exnems Bod
- Verdict: **NEEDED (exclusive refs)**
- Total loose files: 4
- Exclusive refs: 5
- Shadowed refs: 0

Sample referencing records (up to 20):
  - CLOT `KDSilverthornRobeOOO` 0x01001C9D (Oscuro's_Oblivion_Overhaul.esm) → `MOD3` `meshes/clothes/kdrobes/fsilverthorn.nif`
  - CLOT `KDVermillionRobeOOO` 0x01001CA0 (Oscuro's_Oblivion_Overhaul.esm) → `MOD3` `meshes/clothes/kdrobes/fvermillion.nif`
  - CLOT `KDVermillionRobeOOOZLadyEmber` 0x01004661 (OOO Enhanced.esp) → `MOD3` `meshes/clothes/kdrobes/fvermillion.nif`
  - CLOT `KDSilverthornRobeOOOZLien` 0x01005B7A (Oscuro's_Oblivion_Overhaul.esm) → `MOD3` `meshes/clothes/kdrobes/fsilverthorn.nif`
  - CLOT `XUnderkingrobeOOO` 0x0100966A (OOO Enhanced.esp) → `MOD3` `meshes/clothes/kdrobes/fsilverthorn.nif`

### Dragon Claw Sword And Shield
- Verdict: **NEEDED (exclusive refs)**
- Total loose files: 13
- Exclusive refs: 4
- Shadowed refs: 0

Sample referencing records (up to 20):
  - ARMO `sOOOJojjoDragonClawShield` 0x1D0014C6 (OOO Enhanced.esp) → `MODL` `meshes/armor/dragonclawshield/dragonclawshield.nif`
  - ARMO `sOOOJojjoDragonClawShield` 0x1D0014C6 (OOO Enhanced.esp) → `MOD2` `meshes/armor/dragonclawshield/dragonclawshield.nif`
  - WEAP `sOOOJojjoDragonClaw` 0x1D0014C0 (OOO Enhanced.esp) → `MODL` `meshes/weapons/dragonclaw/dragonclawsword.nif`
  - WEAP `sOOOJojjoDragonClaw` 0x1D0014C0 (OOO Enhanced.esp) → `ICON` `textures/weapons/dragonclaw/dragonclawsword.dds`

### Blood Elves and Egyptian armors for Exnems Body by Plipo
- Verdict: **NOT REFERENCED by record-scan**
- Total loose files: 45
- Exclusive refs: 0
- Shadowed refs: 0

### Female EyeCandy Wardrobe
- Verdict: **NOT REFERENCED by record-scan**
- Total loose files: 84
- Exclusive refs: 0
- Shadowed refs: 0

### HGEC Blood Elves and Egyptian Armor
- Verdict: **NOT REFERENCED by record-scan**
- Total loose files: 7
- Exclusive refs: 0
- Shadowed refs: 0

## Full table

| mod | verdict | exclusive | shadowed | total files |
|---|---|---:|---:|---:|
| Useful Meshes Collection | NEEDED (exclusive refs) | 259 | 0 | 11257 |
| UFF Unrepentant Archer | NEEDED (exclusive refs) | 146 | 0 | 314 |
| Apophis Armory of the Silver Dragon | NEEDED (exclusive refs) | 138 | 0 | 558 |
| Sentinel Legendary Weapons And Armors | NEEDED (exclusive refs) | 112 | 0 | 752 |
| Offhand Weapons | NEEDED (exclusive refs) | 91 | 0 | 93 |
| Lost Paladins of the Divines | NEEDED (exclusive refs) | 83 | 0 | 324 |
| RealSwords Nord | NEEDED (exclusive refs) | 72 | 0 | 378 |
| Adonnays Elven Weaponry | NEEDED (exclusive refs) | 69 | 0 | 420 |
| Reborn - OOO Enhanced HTB Path Fix | NEEDED (exclusive refs) | 48 | 0 | 31 |
| Reborn - OOO Enhanced Residual Mesh Nullify | NEEDED (exclusive refs) | 45 | 0 | 46 |
| Vermillion and Silverthorn Robes by Kafei | NEEDED (exclusive refs) | 39 | 5 | 25 |
| Blue Leather | NEEDED (exclusive refs) | 20 | 0 | 37 |
| KafeiDotours Vermillion and Silverthorn Robes For Exnems Bod | NEEDED (exclusive refs) | 5 | 0 | 4 |
| Dragon Claw Sword And Shield | NEEDED (exclusive refs) | 4 | 0 | 13 |
| 1_Clickable Magic Gate | NOT REFERENCED by record-scan | 0 | 0 | 4 |
| 1_DarNified UI Ultrawide config preset | NOT REFERENCED by record-scan | 0 | 0 | 5 |
| 1_ULF DarNified UI patch image file | NOT REFERENCED by record-scan | 0 | 0 | 2 |
| 4gb Ram Patcher | NOT REFERENCED by record-scan | 0 | 0 | 3 |
| AddActorValues | NOT REFERENCED by record-scan | 0 | 0 | 2 |
| AveSithis Engine Fixes | NOT REFERENCED by record-scan | 0 | 0 | 6 |
| Ayleid Ruins Fixed - Mesh Replacer and Modder Resource | NOT REFERENCED by record-scan | 0 | 0 | 34 |
| Base Object Swapper | NOT REFERENCED by record-scan | 0 | 0 | 3 |
| Base Object Swapper Integrations | NOT REFERENCED by record-scan | 0 | 0 | 3 |
| Better Mesh for OCOv2 Uses Merged Teeth | NOT REFERENCED by record-scan | 0 | 0 | 2 |
| Better Necks for OCOv2 | NOT REFERENCED by record-scan | 0 | 0 | 49 |
| Better OCOv2 Agemaps | NOT REFERENCED by record-scan | 0 | 0 | 10 |
| Better Oblivion Cursor File | NOT REFERENCED by record-scan | 0 | 0 | 4 |
| Blockhead | NOT REFERENCED by record-scan | 0 | 0 | 3 |
| Blockhead-Reborn | NOT REFERENCED by record-scan | 0 | 0 | 2 |
| Blood Elves and Egyptian armors for Exnems Body by Plipo | NOT REFERENCED by record-scan | 0 | 0 | 45 |
| Blue's Engine Fixes | NOT REFERENCED by record-scan | 0 | 0 | 2 |
| CPU Affinity | NOT REFERENCED by record-scan | 0 | 0 | 4 |
| CSE Batch Compile | NOT REFERENCED by record-scan | 0 | 0 | 1 |
| ConScribe | NOT REFERENCED by record-scan | 0 | 0 | 3 |
| Console Ignores Player | NOT REFERENCED by record-scan | 0 | 0 | 2 |
| Console Paste | NOT REFERENCED by record-scan | 0 | 0 | 2 |
| ConsoleCommands | NOT REFERENCED by record-scan | 0 | 0 | 4 |
| Crash Logger Improved | NOT REFERENCED by record-scan | 0 | 0 | 6 |
| DarNified UI | NOT REFERENCED by record-scan | 0 | 0 | 196 |
| EngineBugFixes | NOT REFERENCED by record-scan | 0 | 0 | 4 |
| Extended UI - Boss Bar Position Fix | NOT REFERENCED by record-scan | 0 | 0 | 2 |
| Extended UI Boss Bar Retexture | NOT REFERENCED by record-scan | 0 | 0 | 3 |
| Faster Dungeon Doors | NOT REFERENCED by record-scan | 0 | 0 | 5 |
| Female EyeCandy Wardrobe | NOT REFERENCED by record-scan | 0 | 0 | 84 |
| FractionalMagicDamage | NOT REFERENCED by record-scan | 0 | 0 | 2 |
| G5 Validator | NOT REFERENCED by record-scan | 0 | 0 | 1 |
| GPEngineFixes | NOT REFERENCED by record-scan | 0 | 0 | 3 |
| Grip of Steel | NOT REFERENCED by record-scan | 0 | 0 | 2 |
| HGEC Blood Elves and Egyptian Armor | NOT REFERENCED by record-scan | 0 | 0 | 7 |
| HGEC Body | NOT REFERENCED by record-scan | 0 | 0 | 30 |
| MIEO - Parasol Mesh Fix | NOT REFERENCED by record-scan | 0 | 0 | 2 |
| Main Menu Ultrawide | NOT REFERENCED by record-scan | 0 | 0 | 5 |
| Menu Alt-Tab Crash Fix | NOT REFERENCED by record-scan | 0 | 0 | 3 |
| MenuQue - OBSE Plugin | NOT REFERENCED by record-scan | 0 | 0 | 5 |
| MessageLogger | NOT REFERENCED by record-scan | 0 | 0 | 5 |
| Modders Resource- Ayleid Furniture | NOT REFERENCED by record-scan | 0 | 0 | 80 |
| My Universal Fonts | NOT REFERENCED by record-scan | 0 | 0 | 9 |
| New icon for Eye and Crosshair | NOT REFERENCED by record-scan | 0 | 0 | 7 |
| No Refraction Spells | NOT REFERENCED by record-scan | 0 | 0 | 8 |
| OBL Mod Limit Fix | NOT REFERENCED by record-scan | 0 | 0 | 3 |
| OCOv2 Eyelash Mesh Fix | NOT REFERENCED by record-scan | 0 | 0 | 6 |
| OCOv2 Orsimer Overhaul | NOT REFERENCED by record-scan | 0 | 0 | 55 |
| Oblivion Construction Set - Non-installer version | NOT REFERENCED by record-scan | 0 | 0 | 144 |
| Oblivion Display Tweaks | NOT REFERENCED by record-scan | 0 | 0 | 3 |
| Oblivion Magic Extender | NOT REFERENCED by record-scan | 0 | 0 | 2 |
| Oblivion Reloaded Combined(ORC) 315 | NOT REFERENCED by record-scan | 0 | 0 | 670 |
| Oblivion Script Extender (OBSE xOBSE) | NOT REFERENCED by record-scan | 0 | 0 | 11 |
| Reborn Configs | NOT REFERENCED by record-scan | 0 | 0 | 21 |
| RuntimeEditorIDs | NOT REFERENCED by record-scan | 0 | 0 | 3 |
| Seamless - HGEC Female | NOT REFERENCED by record-scan | 0 | 0 | 3 |
| Shambles Crash Fix | NOT REFERENCED by record-scan | 0 | 0 | 2 |
| Simple Compass Retexture | NOT REFERENCED by record-scan | 0 | 0 | 4 |
| SkyBSA | NOT REFERENCED by record-scan | 0 | 0 | 2 |
| TES4Edit 4.1.5f | NOT REFERENCED by record-scan | 0 | 0 | 260 |
| Two-handed weapon swing fix for First Person View (Tick Fix) | NOT REFERENCED by record-scan | 0 | 0 | 6 |
| UW HUD Config | NOT REFERENCED by record-scan | 0 | 0 | 7 |
| Ultrawide Letterbox Fix | NOT REFERENCED by record-scan | 0 | 0 | 3 |
| Universal Skeleton Nif | NOT REFERENCED by record-scan | 0 | 0 | 4 |
| WalkBlessed OBSE Plugin (diagonal move) | NOT REFERENCED by record-scan | 0 | 0 | 3 |
| Wrye Bash | NOT REFERENCED by record-scan | 0 | 0 | 645 |

## Broken refs (6546 paths NOT resolved by VFS)

First 50:
- ARMO `SE32CirionsHelmet4` 0x000972BB (Bashed Patch, 0.esp) → `ICON` `textures/ooose/armor/madness/helmetcirion.dds`
- ARMO `SE32CirionsHelmet3` 0x000972B4 (Bashed Patch, 0.esp) → `ICON` `textures/ooose/armor/madness/helmetcirion.dds`
- ARMO `SE32CirionsHelmet2` 0x000972AA (Bashed Patch, 0.esp) → `ICON` `textures/ooose/armor/madness/helmetcirion.dds`
- ARMO `SE32CirionsHelmet1` 0x00097271 (Bashed Patch, 0.esp) → `ICON` `textures/ooose/armor/madness/helmetcirion.dds`
- ARMO `SE32CirionsHelmet6` 0x0009726D (Bashed Patch, 0.esp) → `ICON` `textures/ooose/armor/madness/helmetcirion.dds`
- ARMO `SE32CirionsHelmet5` 0x0009725A (Bashed Patch, 0.esp) → `ICON` `textures/ooose/armor/madness/helmetcirion.dds`
- ARMO `SEMadnessMagicShield2` 0x00092581 (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/shield.dds`
- ARMO `SEMadnessMagicShield1` 0x00092580 (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/shield.dds`
- ARMO `SEMadnessMagicHelmet2` 0x0009257E (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/helmet.dds`
- ARMO `SEMadnessMagicHelmet1` 0x00092577 (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/helmet.dds`
- ARMO `SEMadnessMagicGreaves2` 0x00092573 (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/greaves.dds`
- ARMO `SEMadnessMagicGreaves1` 0x00092572 (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/greaves.dds`
- ARMO `SEMadnessMagicGauntlets2` 0x00092563 (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/gauntlets.dds`
- ARMO `SEMadnessMagicGauntlets1` 0x00092560 (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/gauntlets.dds`
- ARMO `SEMadnessMagicCuirass2` 0x0009255F (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/cuirass.dds`
- ARMO `SEMadnessMagicCuirass1` 0x00092555 (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/cuirass.dds`
- ARMO `SEMadnessMagicBoots2` 0x00092553 (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/boots.dds`
- ARMO `SEMadnessMagicBoots1` 0x0009254F (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/boots.dds`
- ARMO `SEAmberMagicHelmet2` 0x00092515 (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/amber/helmet.dds`
- ARMO `SEAmberMagicHelmet1` 0x000924BD (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/amber/helmet.dds`
- ARMO `SEMadnessShield2` 0x0009224F (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/shield.dds`
- ARMO `SEMadnessHelmet2` 0x00092233 (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/helmet.dds`
- ARMO `SEMadnessGreaves2` 0x0009221A (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/greaves.dds`
- ARMO `SEMadnessGauntlets2` 0x00092209 (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/gauntlets.dds`
- ARMO `SEMadnessCuirass2` 0x00092206 (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/cuirass.dds`
- ARMO `SEMadnessBoots2` 0x00092202 (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/boots.dds`
- ARMO `SEMadnessShield1` 0x000921D0 (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/shield.dds`
- ARMO `SEMadnessHelmet1` 0x0009219D (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/helmet.dds`
- ARMO `SEMadnessGreaves1` 0x00092173 (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/greaves.dds`
- ARMO `SEMadnessGauntlets1` 0x00092140 (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/gauntlets.dds`
- ARMO `SEMadnessCuirass1` 0x0009213F (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/cuirass.dds`
- ARMO `SEMadnessBoots1` 0x0009213C (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/madness/boots.dds`
- ARMO `SEAmberHelmet2` 0x0009213A (OOOShiveringIsles.esp) → `ICON` `textures/armor/amber/m/helmet.dds`
- ARMO `SEAmberHelmet1` 0x000920FA (OOOShiveringIsles.esp) → `ICON` `textures/armor/amber/m/helmet.dds`
- ARMO `SEGoldenSaintOfficerHelmet1` 0x00081C9F (OOOShiveringIsles.esp) → `ICON` `textures/armor/goldensaint/m/officerhelmet.dds`
- ARMO `SEGoldenSaintOfficerHelmet2` 0x00081C9E (OOOShiveringIsles.esp) → `ICON` `textures/armor/goldensaint/m/officerhelmet.dds`
- ARMO `SEGoldenSaintOfficerHelmet3` 0x00081C9D (OOOShiveringIsles.esp) → `ICON` `textures/armor/goldensaint/m/officerhelmet.dds`
- ARMO `SEGoldenSaintOfficerHelmet4` 0x00081C9C (OOOShiveringIsles.esp) → `ICON` `textures/armor/goldensaint/m/officerhelmet.dds`
- ARMO `SEGoldenSaintOfficerHelmet5` 0x00081C9B (OOOShiveringIsles.esp) → `ICON` `textures/armor/goldensaint/m/officerhelmet.dds`
- ARMO `SEGoldenSaintOfficerHelmet6` 0x00081C9A (OOOShiveringIsles.esp) → `ICON` `textures/armor/goldensaint/m/officerhelmet.dds`
- ARMO `SETESTDarkSeducerArmor1Fur` 0x00080EE7 (Oblivion.esm) → `ICON` `textures/armor/darkseducer/m/cuirass.dds`
- ARMO `SETEST07ADarkSeducerEliteHelmet` 0x00080EE5 (Oblivion.esm) → `ICON` `textures/armor/darkseducer/m/officerhelmet.dds`
- ARMO `SETESTGoldenSaintArmor1Iron` 0x00080EE0 (OOOShiveringIsles.esp) → `ICON` `textures/ooose/armor/femsaint/malearmor.dds`
- ARMO `SETESTGoldenSaintOfficerHelmet` 0x00080EDE (Oblivion.esm) → `ICON` `textures/armor/goldensaint/m/officerhelmet.dds`
- ARMO `SEGoldenSaintHelmetReward6Daedric` 0x0007EB20 (Bashed Patch, 0.esp) → `ICON` `textures/ooose/armor/femsaint/malehelmet.dds`
- ARMO `SEGoldenSaintHelmetReward5Ebony` 0x0007EB1F (Bashed Patch, 0.esp) → `ICON` `textures/ooose/armor/femsaint/malehelmet.dds`
- ARMO `SEGoldenSaintHelmetReward4Orcish` 0x0007EB1E (Bashed Patch, 0.esp) → `ICON` `textures/ooose/armor/femsaint/malehelmet.dds`
- ARMO `SEGoldenSaintHelmetReward3Dwarven` 0x0007EB1D (Bashed Patch, 0.esp) → `ICON` `textures/ooose/armor/femsaint/malehelmet.dds`
- ARMO `SEGoldenSaintHelmetReward2Steel` 0x0007EB1C (Bashed Patch, 0.esp) → `ICON` `textures/ooose/armor/femsaint/malehelmet.dds`
- ARMO `SEGoldenSaintHelmetReward1Iron` 0x0007EB1B (Bashed Patch, 0.esp) → `ICON` `textures/ooose/armor/femsaint/malehelmet.dds`