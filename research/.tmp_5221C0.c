
void TESNPC_FaceGenFiller(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  
  FUN_00552880(param_1);
  if (in_ECX[0x3a] == 0) {
    uVar1 = FaceGen_DefaultGetter(param_1);
    FaceGen_FallbackPopulator(uVar1);
    return;
  }
  iVar2 = (**(code **)(*in_ECX + 0x128))(0x45);
  piVar3 = in_ECX + 0x5a;
  if (iVar2 == 0) {
    piVar3 = in_ECX + 0x42;
  }
  FaceGen_SilentSkipLoop_TESRace_unk12(in_ECX[0x3a] + 0x29c,piVar3,param_1,0,0);
  return;
}

