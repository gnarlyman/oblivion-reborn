
void FaceGen_HelperPopulator(int param_1,int param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  LONG LVar7;
  char *_Str1;
  int iVar8;
  int in_ECX;
  int *piVar9;
  int *unaff_FS_OFFSET;
  int local_18;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d6b08;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    iVar6 = in_ECX + 0x29c;
    if (iVar6 == 0) {
      iVar6 = FaceGen_DefaultGetter(uVar4);
    }
    FaceGen_FallbackPopulator(iVar6,param_2);
    local_18 = 0;
  }
  else {
    TESNPC_FaceGenFiller(param_2);
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x1c8);
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x1cc);
    *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0x1e8);
    *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x1d0);
    uVar5 = FUN_00519d20();
    *(undefined4 *)(param_2 + 0x70) = uVar5;
    local_18 = 0;
  }
  do {
    iVar6 = FUN_0052bc50(local_18);
    uVar1 = *(ushort *)(param_2 + 0x7e);
    uVar4 = (uint)uVar1;
    if (*(ushort *)(param_2 + 0x7c) <= uVar4) {
      FUN_004e4a10(*(ushort *)(param_2 + 0x82) + uVar4);
    }
    if (uVar4 < *(ushort *)(param_2 + 0x7e)) {
      if (iVar6 == 0) {
        if (*(int *)(*(int *)(param_2 + 0x78) + uVar4 * 4) != 0) {
          *(short *)(param_2 + 0x80) = *(short *)(param_2 + 0x80) + -1;
        }
      }
      else if (*(int *)(*(int *)(param_2 + 0x78) + uVar4 * 4) == 0) {
        *(short *)(param_2 + 0x80) = *(short *)(param_2 + 0x80) + 1;
      }
    }
    else {
      *(ushort *)(param_2 + 0x7e) = uVar1 + 1;
      if (iVar6 != 0) {
        *(short *)(param_2 + 0x80) = *(short *)(param_2 + 0x80) + 1;
      }
    }
    *(int *)(*(int *)(param_2 + 0x78) + uVar4 * 4) = iVar6;
    iVar6 = FUN_0052bd00(local_18);
    uVar1 = *(ushort *)(param_2 + 0x8e);
    uVar4 = (uint)uVar1;
    if (*(ushort *)(param_2 + 0x8c) <= uVar4) {
      FUN_004e4a10(*(ushort *)(param_2 + 0x92) + uVar4);
    }
    if (uVar4 < *(ushort *)(param_2 + 0x8e)) {
      if (iVar6 == 0) {
        if (*(int *)(*(int *)(param_2 + 0x88) + uVar4 * 4) != 0) {
          *(short *)(param_2 + 0x90) = *(short *)(param_2 + 0x90) + -1;
        }
      }
      else if (*(int *)(*(int *)(param_2 + 0x88) + uVar4 * 4) == 0) {
        *(short *)(param_2 + 0x90) = *(short *)(param_2 + 0x90) + 1;
      }
    }
    else {
      *(ushort *)(param_2 + 0x8e) = uVar1 + 1;
      if (iVar6 != 0) {
        *(short *)(param_2 + 0x90) = *(short *)(param_2 + 0x90) + 1;
      }
    }
    *(int *)(*(int *)(param_2 + 0x88) + uVar4 * 4) = iVar6;
    uVar1 = *(ushort *)(param_2 + 0x9e);
    uVar4 = (uint)uVar1;
    puVar2 = (&PTR_s_FaceGenFace_00b10ca8)[local_18];
    if (*(ushort *)(param_2 + 0x9c) <= uVar4) {
      FUN_004e4a10(*(ushort *)(param_2 + 0xa2) + uVar4);
    }
    if (uVar4 < *(ushort *)(param_2 + 0x9e)) {
      if (puVar2 == (undefined *)0x0) {
        if (*(int *)(*(int *)(param_2 + 0x98) + uVar4 * 4) != 0) {
          *(short *)(param_2 + 0xa0) = *(short *)(param_2 + 0xa0) + -1;
        }
      }
      else if (*(int *)(*(int *)(param_2 + 0x98) + uVar4 * 4) == 0) {
        *(short *)(param_2 + 0xa0) = *(short *)(param_2 + 0xa0) + 1;
      }
    }
    else {
      *(ushort *)(param_2 + 0x9e) = uVar1 + 1;
      if (puVar2 != (undefined *)0x0) {
        *(short *)(param_2 + 0xa0) = *(short *)(param_2 + 0xa0) + 1;
      }
    }
    *(undefined **)(*(int *)(param_2 + 0x98) + uVar4 * 4) = puVar2;
    if ((param_1 != 0) && (DAT_00b10d3c != '\0')) {
      uVar5 = FUN_00524100(&local_10,local_18);
      uVar4 = (uint)*(ushort *)(param_2 + 0xae);
      local_4 = 0;
      if (*(ushort *)(param_2 + 0xac) <= uVar4) {
        FUN_00523b10(*(ushort *)(param_2 + 0xb2) + uVar4);
      }
      FUN_005254d0(uVar4,uVar5);
      puVar3 = local_10;
      local_4 = 0xffffffff;
      if (((local_10 != (undefined4 *)0x0) &&
          (LVar7 = InterlockedDecrement(local_10 + 1), LVar7 == 0)) && (puVar3 != (undefined4 *)0x0)
         ) {
        (**(code **)*puVar3)(1);
      }
    }
    local_18 = local_18 + 1;
  } while (local_18 < 9);
  *(char *)(param_2 + 0xb4) = DAT_00b10d3c;
  *(undefined4 *)(param_2 + 0xc0) = DAT_00b120b0;
  *(int *)(param_2 + 0xb8) = in_ECX + 0x188;
  *(int *)(param_2 + 0xbc) = in_ECX + 0x1a0;
  if (((*(int *)(param_2 + 0x60) == 0) && (piVar9 = (int *)(in_ECX + 0x8c), piVar9 != (int *)0x0))
     && ((*(int *)(in_ECX + 0x90) != 0 || (*piVar9 != 0)))) {
    *(int *)(param_2 + 0x60) = *piVar9;
  }
  if (*(int *)(param_2 + 0x6c) == 0) {
    piVar9 = (int *)(in_ECX + 0xa8);
    if ((piVar9 == (int *)0x0) || ((*(int *)(in_ECX + 0xac) == 0 && (*piVar9 == 0)))) {
      for (piVar9 = (int *)(DAT_00b33a98 + 0x3c); piVar9 != (int *)0x0; piVar9 = (int *)piVar9[1]) {
        iVar6 = *piVar9;
        if (iVar6 != 0) {
          _Str1 = *(char **)(iVar6 + 0x28);
          if (_Str1 == (char *)0x0) {
            _Str1 = "";
          }
          iVar8 = __stricmp(_Str1,"Characters\\Eyes\\EyeDefault.dds");
          if (iVar8 == 0) {
            *(int *)(param_2 + 0x6c) = iVar6;
            break;
          }
        }
      }
    }
    else {
      *(int *)(param_2 + 0x6c) = *piVar9;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}

