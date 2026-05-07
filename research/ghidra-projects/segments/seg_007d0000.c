
undefined4 FUN_007d1170(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  LONG LVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  int local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0ac8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar8 = 0;
  do {
    piVar6 = (int *)FUN_007606a0(local_14,uVar5);
    iVar2 = *(int *)((int)&DAT_00b455a0 + uVar8);
    local_4 = 0;
    if (iVar2 != *piVar6) {
      if (iVar2 != 0) {
        piVar1 = (int *)(iVar2 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
      }
      iVar2 = *piVar6;
      *(int *)((int)&DAT_00b455a0 + uVar8) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
      }
    }
    local_4 = 0xffffffff;
    if ((local_14[0] != 0) &&
       (*(int *)(local_14[0] + 0x60) = *(int *)(local_14[0] + 0x60) + -1,
       *(int *)(local_14[0] + 0x60) == 0)) {
      FUN_007604d0();
    }
    puVar4 = DAT_00b45290;
    iVar2 = *(int *)((int)&DAT_00b455a0 + uVar8);
    puVar3 = *(undefined4 **)(iVar2 + 0x58);
    if (puVar3 != DAT_00b45290) {
      if (puVar3 != (undefined4 *)0x0) {
        LVar7 = InterlockedDecrement(puVar3 + 1);
        if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
      }
      *(undefined4 **)(iVar2 + 0x58) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar4 + 1);
      }
    }
    uVar8 = uVar8 + 4;
  } while (uVar8 < 0x68c);
  FUN_00820910();
  FUN_00814430();
  FUN_00815db0();
  FUN_0081aa00();
  FUN_0081b120();
  FUN_0081bce0();
  FUN_0081d090();
  FUN_0081dc40();
  FUN_0081ea70();
  FUN_008203d0();
  if (DAT_00b42f48 < 2) {
    FUN_0081f330();
  }
  else {
    FUN_0082d990();
    FUN_00820c00();
    FUN_00828280();
    FUN_00831910();
    FUN_00832740();
    FUN_008357b0();
    FUN_00836230();
    FUN_00836810();
    FUN_00839f90();
    FUN_0083a7e0();
    FUN_00839a50();
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007d1320(uint param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  LONG LVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *local_18;
  int local_14;
  float local_10;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  iVar3 = FUN_007b4290(1);
  iVar3 = *(int *)(iVar3 + 4);
  iVar4 = FUN_007b4290(0xe);
  iVar4 = *(int *)(iVar4 + 4);
  iVar5 = FUN_007b4290(0xf);
  iVar5 = *(int *)(iVar5 + 4);
  iVar6 = FUN_007b4290(0xd);
  iVar6 = *(int *)(iVar6 + 4);
  uVar1 = (ushort)param_1;
  if ((ushort)(uVar1 - 0x18c) < 4) {
    if (iVar3 != 0) {
      FUN_0055e2a0(iVar3 + 0x8c);
      FUN_0055e2a0(iVar3 + 0x90);
    }
    if (iVar4 != 0) {
      FUN_0055e2a0(iVar4 + 0x8c);
      FUN_0055e2a0(iVar4 + 0x90);
    }
    if (iVar5 != 0) {
      FUN_0055e2a0(iVar5 + 0x8c);
      FUN_0055e2a0(iVar5 + 0x90);
    }
    if (iVar6 != 0) {
      FUN_0055e2a0(iVar6 + 0x8c);
      FUN_0055e2a0(iVar6 + 0x90);
    }
  }
  else {
    if (iVar3 != 0) {
      FUN_0055e2a0(iVar3 + 0x94);
      FUN_0055e2a0(iVar3 + 0x98);
    }
    if (iVar4 != 0) {
      FUN_0055e2a0(iVar4 + 0x94);
      FUN_0055e2a0(iVar4 + 0x98);
    }
    if (iVar5 != 0) {
      FUN_0055e2a0(iVar5 + 0x94);
      FUN_0055e2a0(iVar5 + 0x98);
    }
    if (iVar6 != 0) {
      FUN_0055e2a0(iVar6 + 0x94);
      FUN_0055e2a0(iVar6 + 0x98);
    }
    if (DAT_00b42f48 < 2) {
      if (DAT_00b42f48 == 1) {
        FUN_00849020(param_1);
      }
    }
    else {
      FUN_0083ac70(param_1);
    }
  }
  if (0x1a2 < uVar1) goto LAB_007d1706;
  param_1 = param_1 & 0xffff;
  iVar3 = (&DAT_00b455a0)[param_1];
  if (*(int *)(iVar3 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar3 + 0x30) = uVar7;
  }
  FUN_00772cd0(0x1c,0,0);
  if (((uVar1 < 0x160) || (0x164 < uVar1)) && (2 < (ushort)(uVar1 - 0x165))) {
    if ((ushort)(uVar1 - 0x10f) < 0x1b) {
      uVar7 = 0xf;
    }
    else {
      if (((uVar1 == 0x19e) || (uVar1 == 0x19f)) || ((uVar1 == 10 || (uVar1 == 0xb)))) {
        iVar3 = (&DAT_00b455a0)[param_1];
        if (*(int *)(iVar3 + 0x30) == 0) {
          uVar7 = FUN_00772df0();
          *(undefined4 *)(iVar3 + 0x30) = uVar7;
        }
        uVar7 = 8;
        goto LAB_007d15a2;
      }
      if (uVar1 < 3) {
        uVar7 = 0;
      }
      else {
        if (uVar1 == 3) {
          FUN_0076c730(0xa8,0,0);
          goto LAB_007d15af;
        }
        uVar7 = 7;
      }
    }
    FUN_0076c730(0xa8,uVar7,0);
  }
  else {
    iVar3 = (&DAT_00b455a0)[param_1];
    if (*(int *)(iVar3 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar3 + 0x30) = uVar7;
    }
    uVar7 = 0xf;
LAB_007d15a2:
    FUN_00772cd0(0xa8,uVar7,0);
  }
LAB_007d15af:
  iVar3 = (&DAT_00b455a0)[param_1];
  if (DAT_00b42eac == 4) {
    if (*(int *)(iVar3 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar3 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x34,1,0);
    iVar3 = (&DAT_00b455a0)[param_1];
    if (*(int *)(iVar3 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar3 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x38,8,0);
    iVar3 = (&DAT_00b455a0)[param_1];
    if (*(int *)(iVar3 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar3 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x37,7,0);
    iVar3 = (&DAT_00b455a0)[param_1];
    if (*(int *)(iVar3 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar3 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x35,1,0);
    iVar3 = (&DAT_00b455a0)[param_1];
    if (*(int *)(iVar3 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar3 + 0x30) = uVar7;
    }
    uVar11 = 1;
    uVar7 = 0x36;
  }
  else {
    if (*(int *)(iVar3 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar3 + 0x30) = uVar7;
    }
    uVar11 = 0;
    uVar7 = 0x34;
  }
  FUN_00772cd0(uVar7,uVar11,0);
  if (uVar1 != 0x17b) {
    iVar3 = (&DAT_00b455a0)[param_1];
    uVar10 = 0;
    if (*(int *)(iVar3 + 0x18) != 0) {
      do {
        if (*(int *)(*(int *)(iVar3 + 0x24) + uVar10 * 4) != 0) {
          piVar8 = (int *)FUN_0075fb10(&local_18);
          puVar2 = local_18;
          local_14 = *piVar8;
          if (((local_18 != (undefined4 *)0x0) &&
              (LVar9 = InterlockedDecrement(local_18 + 1), LVar9 == 0)) &&
             (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
          if (((local_14 != 0) && (local_14 != DAT_00b43110)) && (uVar10 != 7)) {
            FUN_007715e0(3);
          }
        }
        iVar3 = (&DAT_00b455a0)[param_1];
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(iVar3 + 0x18));
    }
  }
LAB_007d1706:
  if ((uVar1 == 0x77) || (uVar1 == 0x85)) {
    local_10 = _DAT_00b4313c - DAT_00b3f92c;
    local_c = _DAT_00b43140 - DAT_00b3f930;
    fStack_8 = _DAT_00b43144 - 15.0;
    fStack_4 = _DAT_00b43148 - 15.0;
    FUN_007ecae0(0x20,local_10,local_c,fStack_8,fStack_4);
    FUN_007ecae0(0x22,DAT_00b2c718,DAT_00b2c71c,DAT_00b2c720,DAT_00b2c724);
  }
  if (uVar1 == 0x17b) {
    FUN_007ecae0(0x21,DAT_00b2c728,DAT_00b2c72c,DAT_00b2c730,DAT_00b2c734);
  }
  return;
}



void FUN_007d1800(ushort param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = (uint)param_1 * 4;
  if (*(int *)(&DAT_00b43490 + iVar2) != 0) {
    bVar3 = 2;
    piVar5 = &DAT_00b4501c;
    iVar4 = 9;
    do {
      iVar1 = piVar5[-1];
      if ((iVar1 != 0) && (*(char *)(iVar1 + 8) != '\0')) {
        *(bool *)(iVar1 + 8) = (*(uint *)(&DAT_00b43490 + iVar2) & 1 << (bVar3 - 1 & 0x1f)) == 0;
      }
      iVar1 = *piVar5;
      if ((iVar1 != 0) && (*(char *)(iVar1 + 8) != '\0')) {
        *(bool *)(iVar1 + 8) = (*(uint *)(&DAT_00b43490 + iVar2) & 1 << (bVar3 & 0x1f)) == 0;
      }
      iVar1 = piVar5[1];
      if ((iVar1 != 0) && (*(char *)(iVar1 + 8) != '\0')) {
        *(bool *)(iVar1 + 8) = (*(uint *)(&DAT_00b43490 + iVar2) & 1 << (bVar3 + 1 & 0x1f)) == 0;
      }
      bVar3 = bVar3 + 3;
      piVar5 = piVar5 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = FUN_007b4290(1);
    (**(code **)(**(int **)(*(int *)(iVar4 + 4) + 0x30) + 0x48))();
  }
  if (*(int *)(&DAT_00b44840 + iVar2) != 0) {
    iVar4 = 0;
    do {
      iVar1 = (&DAT_00b45518)[iVar4];
      if ((iVar1 != 0) && (*(char *)(iVar1 + 8) != '\0')) {
        *(bool *)(iVar1 + 8) =
             (*(uint *)(&DAT_00b44840 + iVar2) & 1 << ((char)iVar4 + 1U & 0x1f)) == 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x11);
    iVar2 = FUN_007b4290(1);
                    /* WARNING: Could not recover jumptable at 0x007d1919. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x2c) + 0x48))();
    return;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_007d1920(int *param_1,char param_2)

{
  char *_Str1;
  bool bVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_120;
  undefined4 local_11c;
  undefined4 *local_118;
  undefined1 auStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ce9de;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&puStack_120;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffed0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_11c = 0;
  piVar5 = (int *)FUN_00405760(&local_118);
  iVar10 = *piVar5;
  if (((local_118 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(local_118 + 1), LVar6 == 0)
      ) && (local_118 != (undefined4 *)0x0)) {
    (**(code **)*local_118)(1,uVar4);
  }
  if (iVar10 == 0) {
    FUN_00707610();
    piVar5 = (int *)FUN_00405760(&puStack_120);
    puVar2 = puStack_120;
    iVar10 = *piVar5;
    if (((puStack_120 != (undefined4 *)0x0) &&
        (LVar6 = InterlockedDecrement(puStack_120 + 1), LVar6 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  if (((param_1 == (int *)0x0) || (iVar8 = (**(code **)(*param_1 + 0x14))(), iVar8 != 0)) ||
     (iVar10 = *(int *)(iVar10 + 0x20), iVar10 == 0)) {
LAB_007d19df:
    uVar7 = 0;
    goto LAB_007d1c2d;
  }
  iVar8 = FUN_00707530(2);
  if (((iVar8 != 0) && (*(char **)(iVar8 + 8) != (char *)0x0)) &&
     (iVar9 = __stricmp(*(char **)(iVar8 + 8),"lava"), iVar9 == 0)) {
    uVar7 = 0x11;
    goto LAB_007d1c2d;
  }
  if ((**(int **)(iVar10 + 0x20) == 0) ||
     (iVar9 = *(int *)(**(int **)(iVar10 + 0x20) + 8), iVar9 == 0)) goto LAB_007d19df;
  iVar9 = FUN_00560920(&DAT_00b3f95c,iVar9);
  if ((iVar9 != 0) && (*(int *)(iVar9 + 0x38) != 0)) {
    FUN_007b4160(auStack_114,*(int *)(iVar9 + 0x38),&DAT_00a3cf00);
    piVar5 = (int *)FUN_007b8200(&local_11c,auStack_114,1,1);
    if ((*piVar5 == 0) && (param_2 == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    FUN_007016a0();
    if (bVar1) goto LAB_007d19df;
    if (((iVar8 != 0) && (*(char **)(iVar8 + 8) != (char *)0x0)) &&
       (iVar9 = __strnicmp(*(char **)(iVar8 + 8),"hair",4), iVar9 == 0)) {
      if ((DAT_00b42ea5 != '\0') || (4 < DAT_00b42f48)) {
LAB_007d1ade:
        uVar7 = 0x1a;
        goto LAB_007d1c2d;
      }
      goto LAB_007d1c28;
    }
    if ((1 < DAT_00b42f48) &&
       ((iVar8 != 0 && (iVar9 = __stricmp(*(char **)(iVar8 + 8),"skin"), iVar9 == 0)))) {
      if (*(float *)(iVar8 + 0x4c) < 1.0) {
        *(int *)(iVar8 + 0x54) = *(int *)(iVar8 + 0x54) + 1;
        *(undefined4 *)(iVar8 + 0x4c) = 0x40800000;
      }
      uVar7 = 0xe;
      goto LAB_007d1c2d;
    }
    if ((*(byte *)(iVar10 + 0x18) & 0xe) == 8) {
      uVar7 = 0xf;
      goto LAB_007d1c2d;
    }
    iVar10 = FUN_00707530(0);
    iVar8 = FUN_00707530(2);
    if (iVar8 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = __strnicmp(*(char **)(iVar8 + 8),"dynalpha",7);
    }
    if (iVar10 == 0) {
      if (iVar8 == 0) {
        puStack_120 = (undefined4 *)FUN_00401f00(0x1c);
        if (puStack_120 == (undefined4 *)0x0) {
          iVar10 = 0;
        }
        else {
          iStack_4 = iVar8;
          iVar10 = FUN_0047f920();
        }
        *(ushort *)(iVar10 + 0x18) = *(ushort *)(iVar10 + 0x18) & 0xfffe;
        iStack_4 = 0xffffffff;
        goto LAB_007d1bb3;
      }
LAB_007d1bcd:
      if (DAT_00b42ea5 != '\0') {
        for (iVar10 = param_1[3]; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x34)) {
          cVar3 = FUN_00405650(&DAT_00b3ce30,iVar10);
          if (cVar3 != '\0') goto LAB_007d1ade;
        }
      }
    }
    else {
LAB_007d1bb3:
      if (((*(byte *)(iVar10 + 0x18) & 1) == 0) && (iVar8 != 0)) goto LAB_007d1bcd;
      if (DAT_00b42ea5 != '\0') {
        uVar7 = 0x1a;
        goto LAB_007d1c2d;
      }
    }
    _Str1 = (char *)param_1[2];
    if ((_Str1 != (char *)0x0) && (iVar10 = _strncmp(_Str1,"Block",5), iVar10 != 0)) {
      _strncmp(_Str1,"STBB",4);
    }
  }
LAB_007d1c28:
  uVar7 = 1;
LAB_007d1c2d:
  *unaff_FS_OFFSET = local_c;
  return uVar7;
}



void FUN_007d1c60(void)

{
  int *in_ECX;
  undefined4 *puVar1;
  
  puVar1 = &DAT_00b455a0;
  do {
    (**(code **)(*in_ECX + 0x94))(*puVar1);
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0xb45c2c);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007d1c90(int param_1,undefined4 *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  LONG LVar5;
  
  if (param_2 != (undefined4 *)0x0) {
    iVar2 = param_2[0x38];
    if (iVar2 != 0) {
      _DAT_00b44f38 = *(undefined4 *)(iVar2 + 0xc);
      _DAT_00b44f3c = *(undefined4 *)(iVar2 + 0x10);
      _DAT_00b44f40 = *(undefined4 *)(iVar2 + 0x14);
      _DAT_00b44f44 = *(undefined4 *)(iVar2 + 0x18);
      _DAT_00b44f48 = *(undefined4 *)(iVar2 + 0x1c);
      _DAT_00b44f4c = *(undefined4 *)(iVar2 + 0x20);
      _DAT_00b44f50 = *(undefined4 *)(iVar2 + 0x24);
      _DAT_00b44f54 = *(undefined4 *)(iVar2 + 0x28);
      _DAT_00b44ed0 = *(undefined4 *)(iVar2 + 0x4c);
      _DAT_00b44ed4 = *(undefined4 *)(iVar2 + 0x50);
      _DAT_00b44f58 = *(undefined4 *)(iVar2 + 0x54);
      _DAT_00b44f5c = 0x3f800000;
    }
    _DAT_00b44f6c = 0;
    _DAT_00b44f68 = 0;
    _DAT_00b44f78 = 0.0;
    _DAT_00b44f84 = 0;
    _DAT_00b44f70 = 0;
    _DAT_00b44f74 = 0;
    _DAT_00b44f7c = 0.0;
    _DAT_00b44f80 = 0;
    if (param_1 != 0) {
      piVar4 = (int *)FUN_00405760(&param_2);
      puVar3 = param_2;
      iVar2 = *piVar4;
      if (((param_2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(param_2 + 1), LVar5 == 0)
          ) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 != 0) {
        fVar1 = *(float *)(iVar2 + 0x30);
        if ((fVar1 != 0.0) || (*(float *)(iVar2 + 0x2c) != 0.0)) {
          _DAT_00b44f78 = fVar1;
          _DAT_00b44f7c = fVar1 - *(float *)(iVar2 + 0x2c);
          _DAT_00b44f80 = 0x3f800000;
          _DAT_00b44f84 = 0;
          _DAT_00b44f68 = *(undefined4 *)(iVar2 + 0x20);
          _DAT_00b44f6c = *(undefined4 *)(iVar2 + 0x24);
          _DAT_00b44f70 = *(undefined4 *)(iVar2 + 0x28);
          _DAT_00b44f74 = 0;
          return;
        }
      }
    }
  }
  return;
}



void FUN_007d1eb0(byte param_1)

{
  FUN_007c8b30();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007d1ed0(float param_1,char param_2)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  
  if (param_1 == *(float *)(in_ECX + 0xdc)) {
    return;
  }
  if (param_2 == '\0') {
    fVar1 = *(float *)(in_ECX + 0xe0) / _DAT_00b2c680;
    fVar2 = 1.0;
    if (((fVar1 < 0.0) || (fVar1 <= 1.0)) && (fVar2 = fVar1, fVar1 < 0.0)) {
      fVar2 = 0.0;
    }
    *(float *)(in_ECX + 0xe0) = _DAT_00b2c680 * (1.0 - fVar2);
    *(float *)(in_ECX + 0xdc) = param_1;
    return;
  }
  *(undefined4 *)(in_ECX + 0xe0) = 0x3f800000;
  *(float *)(in_ECX + 0xdc) = param_1;
  return;
}



int * FUN_007d1fd0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cea29;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = in_ECX[2];
  puVar2 = *(undefined4 **)(iVar1 + 4);
  in_ECX[2] = (int)puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    in_ECX[1] = 0;
  }
  else {
    *puVar2 = 0;
  }
  iVar3 = *(int *)(iVar1 + 8);
  *param_1 = iVar3;
  if (iVar3 != 0) {
    InterlockedIncrement((LONG *)(iVar3 + 4));
  }
  local_4 = 0;
  (**(code **)(*in_ECX + 8))(iVar1,uVar4);
  in_ECX[3] = in_ECX[3] + -1;
  *unaff_FS_OFFSET = 1;
  return param_1;
}



undefined4 FUN_007d2070(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  
  if ((*(byte *)(*(int *)(in_ECX + 0x100) + 0x18) & 1) == 0) {
    puVar1 = *(undefined4 **)(in_ECX + 0xe8);
joined_r0x007d2089:
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = puVar1[2];
      puVar1 = (undefined4 *)*puVar1;
      if ((iVar2 != 0) && (piVar3 = *(int **)(iVar2 + 0xbc), piVar3 != (int *)0x0)) {
        iVar5 = FUN_00707530(4);
        if (*(int *)(iVar5 + 0x68) == 0) {
          if (DAT_00b42eb4 == (code *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (*DAT_00b42eb4)(iVar2);
          }
          *(undefined4 *)(iVar5 + 0x68) = uVar6;
        }
        if (((DAT_00b2c678 & 1 << ((byte)*(undefined4 *)(iVar5 + 0x68) & 0x1f)) != 0) &&
           (piVar3 != (int *)0x0)) {
          cVar4 = FUN_00733840();
          iVar5 = (**(code **)(*piVar3 + 0x1c))();
          if ((iVar5 < 1) || (iVar5 = (**(code **)(*piVar3 + 0x1c))(), 5 < iVar5)) {
            iVar5 = (**(code **)(*piVar3 + 0x1c))();
            if (iVar5 != 0x1b) goto joined_r0x007d2089;
            if (cVar4 == '\0') {
              DAT_00b42eb8 = 0;
              if (*(int *)(iVar2 + 0xb8) == 0) {
                DAT_00b42e90 = 0x154;
                uVar6 = 0x154;
              }
              else {
                DAT_00b42e90 = 0x155;
                uVar6 = 0x155;
              }
              FUN_007fd260(uVar6,0);
              goto LAB_007d21b0;
            }
          }
          else if (cVar4 == '\0') {
            DAT_00b42eb8 = 0;
            if (*(int *)(iVar2 + 0xb8) == 0) {
              DAT_00b42e90 = 0x10;
              FUN_007d1320(0x10,0);
            }
            else {
              DAT_00b42e90 = 0x14;
              FUN_007d1320(0x14,0);
            }
LAB_007d21b0:
            (**(code **)(*(int *)piVar3[0xc] + 0x48))();
            (**(code **)(*(int *)piVar3[0xb] + 0x48))();
          }
          FUN_007073d0(param_1);
        }
      }
      goto joined_r0x007d2089;
    }
  }
  return 1;
}



void FUN_007d21f0(void)

{
  undefined4 *puVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xe8);
  while (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar1;
    piVar3 = (int *)FUN_00707530(4);
    if (piVar3 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar3 + 0x54))();
      if ((iVar4 < 1) || (iVar4 = (**(code **)(*piVar3 + 0x54))(), 10 < iVar4)) {
        bVar2 = 0;
      }
      else {
        bVar2 = 1;
      }
      if ((-(uint)bVar2 & (uint)piVar3) != 0) {
        FUN_007ee720(in_ECX);
      }
    }
  }
  DAT_00b42e90 = 0xffffffff;
  DAT_00b42eb8 = 0;
  FUN_00573880();
  FUN_00573880();
  return;
}



void FUN_007d2280(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  LONG LVar10;
  int in_ECX;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  int *unaff_FS_OFFSET;
  float10 fVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 *local_e0;
  undefined4 *local_dc;
  float local_d8;
  undefined4 *puStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  int local_c0;
  uint local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 *puStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float local_64;
  undefined4 *local_60;
  float local_5c;
  undefined4 *puStack_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 *local_14;
  float local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cea96;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffff10;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar11 = (undefined4 *)0x0;
  local_dc = (undefined4 *)0x0;
  local_ac = (float)in_ECX;
  iVar7 = FUN_006ff9c0(&DAT_00a7d2cc);
  iVar8 = *(int *)(in_ECX + 0x130);
  local_98 = *(float *)(iVar7 + 0x1c);
  local_54 = *(float *)(iVar8 + 0x88) + *(float *)(iVar7 + 0xc);
  local_5c = *(float *)(iVar7 + 0x10) + *(float *)(iVar8 + 0x8c);
  local_64 = *(float *)(iVar7 + 0x14) + *(float *)(iVar8 + 0x90);
  local_9c = *(float *)(iVar7 + 0x18);
  local_94 = *(float *)(iVar7 + 0x20);
  local_d8 = local_98;
  if (local_98 < local_9c) {
    local_d8 = local_9c;
  }
  local_d0 = local_94;
  if ((local_94 < local_d8) && (local_d0 = local_9c, local_9c <= local_98)) {
    local_d0 = local_98;
  }
  uVar14 = 0;
  local_c0 = 0;
  local_bc = 0;
  if (param_1 == 0) {
    uVar17 = 0;
    FUN_007b4280(0,0,uVar6);
    iVar8 = FUN_007c62d0(uVar17);
    uVar16 = local_bc;
    while (iVar8 != 0) {
      if (*(char *)(iVar8 + 0xf4) == '\0') {
        uVar14 = uVar14 + 1;
      }
      uVar16 = uVar14;
      FUN_007b4280(0,uVar14,uVar6);
      iVar8 = FUN_007c62d0(uVar16);
      uVar16 = uVar14;
    }
    uVar17 = 0;
    local_c0 = 0;
    local_bc = uVar16;
    FUN_007b4280(0,0,uVar6);
    iVar8 = FUN_007c62d0(uVar17);
  }
  else {
    iVar8 = FUN_007ed1a0();
    uVar14 = FUN_007ed5d0();
    uVar14 = uVar14 & 0xffff;
    local_bc = uVar14;
  }
  if (0x27 < (int)uVar14) {
    uVar14 = 0x28;
    local_bc = 0x28;
  }
  local_90 = 0.0;
  local_d8 = 0.0;
  if (0 < (int)uVar14) {
    do {
      if (iVar8 != 0) {
        piVar9 = (int *)FUN_00405ad0(&local_14);
        puVar12 = local_14;
        iVar8 = *piVar9;
        local_dc = (undefined4 *)(*(float *)(iVar8 + 0x88) - local_54);
        local_10 = *(float *)(iVar8 + 0x8c) - local_5c;
        local_e0 = (undefined4 *)(*(float *)(iVar8 + 0x90) - local_64);
        if (((local_14 != (undefined4 *)0x0) &&
            (LVar10 = InterlockedDecrement(local_14 + 1), LVar10 == 0)) &&
           (puVar12 != (undefined4 *)0x0)) {
          (**(code **)*puVar12)(1);
        }
        piVar9 = (int *)FUN_00405ad0(&local_60);
        uStack_4 = 0;
        local_e0 = (undefined4 *)
                   ((float)local_e0 * (float)local_e0 +
                   local_10 * local_10 + (float)local_dc * (float)local_dc);
        local_dc = local_e0;
        fVar15 = (float10)FUN_00982c30();
        local_e0 = (undefined4 *)(float)fVar15;
        puVar12 = puVar11;
        if (1.0 - ((float)local_e0 - local_d0) / *(float *)(*piVar9 + 0xf8) < 0.0) {
LAB_007d254f:
          piVar9 = (int *)FUN_00405ad0(&puStack_58);
          local_e0 = local_dc;
          uStack_4 = 2;
          puVar11 = (undefined4 *)((uint)puVar12 | 2);
          fVar15 = (float10)FUN_00982c30();
          local_e0 = (undefined4 *)(float)fVar15;
          puVar1 = (undefined4 *)0x0;
          if (0.0 <= 1.0 - ((float)local_e0 - local_d0) / *(float *)(*piVar9 + 0xf8)) {
            piVar9 = (int *)FUN_00405ad0(&puStack_d4);
            local_e0 = local_dc;
            puVar11 = (undefined4 *)((uint)puVar12 | 6);
            fVar15 = (float10)FUN_00982c30();
            puVar1 = (undefined4 *)(1.0 - ((float)fVar15 - local_d0) / *(float *)(*piVar9 + 0xf8));
          }
        }
        else {
          piVar9 = (int *)FUN_00405ad0(&puStack_80);
          local_e0 = local_dc;
          uStack_4 = CONCAT31(uStack_4._1_3_,1);
          puVar11 = (undefined4 *)((uint)puVar11 | 1);
          fVar15 = (float10)FUN_00982c30();
          local_e0 = (undefined4 *)(float)fVar15;
          puVar1 = (undefined4 *)0x3f800000;
          puVar12 = puVar11;
          if (1.0 - ((float)local_e0 - local_d0) / *(float *)(*piVar9 + 0xf8) <= 1.0)
          goto LAB_007d254f;
        }
        puVar12 = puStack_d4;
        local_e0 = puVar1;
        if (((((uint)puVar11 & 4) != 0) &&
            (puVar11 = (undefined4 *)((uint)puVar11 & 0xfffffffb), local_dc = puVar11,
            puStack_d4 != (undefined4 *)0x0)) &&
           ((LVar10 = InterlockedDecrement(puStack_d4 + 1), LVar10 == 0 &&
            (puVar12 != (undefined4 *)0x0)))) {
          (**(code **)*puVar12)(1);
        }
        puVar12 = puStack_58;
        uStack_4 = 1;
        if (((((uint)puVar11 & 2) != 0) &&
            (puVar11 = (undefined4 *)((uint)puVar11 & 0xfffffffd), local_dc = puVar11,
            puStack_58 != (undefined4 *)0x0)) &&
           ((LVar10 = InterlockedDecrement(puStack_58 + 1), LVar10 == 0 &&
            (puVar12 != (undefined4 *)0x0)))) {
          (**(code **)*puVar12)(1);
        }
        puVar12 = puStack_80;
        uStack_4 = 0;
        if ((((((uint)puVar11 & 1) != 0) &&
             (puVar11 = (undefined4 *)((uint)puVar11 & 0xfffffffe), puStack_80 != (undefined4 *)0x0)
             ) && (LVar10 = InterlockedDecrement(puStack_80 + 1), LVar10 == 0)) &&
           (puVar12 != (undefined4 *)0x0)) {
          (**(code **)*puVar12)(1);
        }
        puVar12 = local_60;
        uStack_4 = 0xffffffff;
        if (((local_60 != (undefined4 *)0x0) &&
            (LVar10 = InterlockedDecrement(local_60 + 1), LVar10 == 0)) &&
           (puVar12 != (undefined4 *)0x0)) {
          (**(code **)*puVar12)(1);
        }
        *(undefined4 **)(&DAT_00b45cd0 + (int)local_d8 * 4) = local_e0;
        (&DAT_00b45c30)[(int)local_d8] = local_e0;
        local_90 = (float)local_e0 + local_90;
        uVar14 = local_bc;
      }
      if (param_1 == 0) {
        iVar8 = local_c0 + 1;
        local_c0 = iVar8;
        FUN_007b4280(0,iVar8);
        iVar8 = FUN_007c62d0(iVar8);
      }
      else {
        iVar8 = FUN_007ed3b0();
      }
      local_d8 = (float)((int)local_d8 + 1);
    } while ((int)local_d8 < (int)uVar14);
  }
  local_d8 = 0.0;
  local_b8 = DAT_00b3f9a8;
  local_b4 = DAT_00b3f9ac;
  local_b0 = DAT_00b3f9b0;
  local_a8 = DAT_00b3fa90;
  local_a4 = DAT_00b3fa94;
  local_a0 = DAT_00b3fa98;
  if (param_1 == 0) {
    uVar17 = 0;
    local_c0 = 0;
    FUN_007b4280(0,0);
    iVar8 = FUN_007c62d0(uVar17);
  }
  else {
    iVar8 = FUN_007ed1a0();
  }
  FUN_007b4280(0);
  piVar9 = (int *)FUN_00405ad0(&local_60);
  iVar7 = *piVar9;
  if (((local_60 != (undefined4 *)0x0) && (LVar10 = InterlockedDecrement(local_60 + 1), LVar10 == 0)
      ) && (local_60 != (undefined4 *)0x0)) {
    (**(code **)*local_60)(1);
  }
  fStack_38 = -*(float *)(iVar7 + 0x108);
  fStack_34 = -*(float *)(iVar7 + 0x10c);
  fStack_30 = -*(float *)(iVar7 + 0x110);
  FUN_0043f350();
  if (local_90 == 0.0) {
    local_b8 = fStack_38;
    local_a8 = *(float *)(iVar7 + 0xec);
    local_b4 = fStack_34;
    local_a4 = *(float *)(iVar7 + 0xf0);
    local_b0 = fStack_30;
    local_a0 = *(float *)(iVar7 + 0xf4);
  }
  else {
    iVar13 = 0;
    if (0 < (int)local_bc) {
      do {
        if ((iVar8 != 0) &&
           (local_dc = (undefined4 *)((float)(&DAT_00b45c30)[iVar13] / local_90),
           0.0 < (float)local_dc)) {
          piVar9 = (int *)FUN_00405ad0(&puStack_80);
          puVar11 = puStack_80;
          local_d8 = ((1.0 - (float)(&DAT_00b45c30)[iVar13]) * 1000.0 +
                     *(float *)(*piVar9 + 0xf8) * (float)(&DAT_00b45c30)[iVar13]) * (float)local_dc
                     + local_d8;
          if ((puStack_80 != (undefined4 *)0x0) &&
             ((LVar10 = InterlockedDecrement(puStack_80 + 1), LVar10 == 0 &&
              (puVar11 != (undefined4 *)0x0)))) {
            (**(code **)*puVar11)(1);
          }
          piVar9 = (int *)FUN_00405ad0(&puStack_58);
          puVar11 = puStack_58;
          iVar8 = *piVar9;
          fStack_2c = *(float *)(iVar8 + 0x88) - local_54;
          fStack_28 = *(float *)(iVar8 + 0x8c) - local_5c;
          fStack_24 = *(float *)(iVar8 + 0x90) - local_64;
          if (((puStack_58 != (undefined4 *)0x0) &&
              (LVar10 = InterlockedDecrement(puStack_58 + 1), LVar10 == 0)) &&
             (puVar11 != (undefined4 *)0x0)) {
            (**(code **)*puVar11)(1);
          }
          FUN_0043f350();
          fStack_48 = 1.0 - (float)(&DAT_00b45c30)[iVar13];
          fStack_50 = fStack_48 * fStack_38;
          fStack_4c = fStack_34 * fStack_48;
          fStack_48 = fStack_48 * fStack_30;
          puStack_d4 = (undefined4 *)(&DAT_00b45c30)[iVar13];
          fStack_20 = (float)puStack_d4 * fStack_2c;
          fStack_1c = fStack_28 * (float)puStack_d4;
          fStack_18 = (float)puStack_d4 * fStack_24;
          local_9c = fStack_20 + fStack_50;
          local_98 = fStack_1c + fStack_4c;
          local_94 = fStack_18 + fStack_48;
          fStack_cc = (float)local_dc * local_9c;
          fStack_c8 = local_98 * (float)local_dc;
          fStack_c4 = (float)local_dc * local_94;
          local_b8 = fStack_cc + local_b8;
          local_b4 = local_b4 + fStack_c8;
          local_b0 = fStack_c4 + local_b0;
          fStack_2c = local_9c;
          fStack_28 = local_98;
          fStack_24 = local_94;
          piVar9 = (int *)FUN_00405ad0(&local_e0);
          puVar11 = local_e0;
          fStack_68 = 1.0 - (float)(&DAT_00b45c30)[iVar13];
          fStack_70 = fStack_68 * *(float *)(iVar7 + 0xec);
          iVar8 = *piVar9;
          fStack_6c = *(float *)(iVar7 + 0xf0) * fStack_68;
          fStack_68 = fStack_68 * *(float *)(iVar7 + 0xf4);
          puStack_d4 = (undefined4 *)(&DAT_00b45c30)[iVar13];
          fStack_8c = (float)puStack_d4 * *(float *)(iVar8 + 0xec);
          fStack_88 = *(float *)(iVar8 + 0xf0) * (float)puStack_d4;
          fStack_84 = (float)puStack_d4 * *(float *)(iVar8 + 0xf4);
          fStack_7c = fStack_8c + fStack_70;
          fStack_78 = fStack_88 + fStack_6c;
          fStack_74 = fStack_84 + fStack_68;
          fStack_44 = (float)local_dc * fStack_7c;
          fStack_40 = fStack_78 * (float)local_dc;
          fStack_3c = (float)local_dc * fStack_74;
          local_a8 = fStack_44 + local_a8;
          local_a4 = fStack_40 + local_a4;
          local_a0 = fStack_3c + local_a0;
          if (((local_e0 != (undefined4 *)0x0) &&
              (LVar10 = InterlockedDecrement(local_e0 + 1), LVar10 == 0)) &&
             (puVar11 != (undefined4 *)0x0)) {
            (**(code **)*puVar11)(1);
          }
        }
        if (param_1 == 0) {
          iVar8 = local_c0 + 1;
          local_c0 = iVar8;
          FUN_007b4280(0,iVar8);
          iVar8 = FUN_007c62d0(iVar8);
        }
        else {
          iVar8 = FUN_007ed3b0();
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)local_bc);
    }
  }
  FUN_0043f350();
  if (local_b0 < 0.75) {
    local_b0 = 0.75;
  }
  FUN_0043f350();
  fVar5 = local_ac;
  fVar15 = (float10)*(float *)(*(int *)((int)local_ac + 0x130) + 0x94) * (float10)local_d0;
  if ((float10)256.0 < fVar15) {
    fVar15 = (float10)256.0;
  }
  iVar8 = *(int *)((int)local_ac + 0x100);
  local_ac = (float)(fVar15 * (float10)2.5);
  fStack_cc = local_ac * local_b8;
  fStack_c8 = local_b4 * local_ac;
  fStack_c4 = local_ac * local_b0;
  fStack_50 = fStack_cc + local_54;
  *(float *)(iVar8 + 0x54) = fStack_50;
  fStack_4c = fStack_c8 + local_5c;
  *(float *)(iVar8 + 0x58) = fStack_4c;
  fStack_48 = fStack_c4 + local_64;
  *(float *)(iVar8 + 0x5c) = fStack_48;
  local_d8 = local_ac * 6.0;
  FUN_00707370(0,1);
  fVar2 = local_a0 * 0.4 + local_a8 * 0.4 + local_a4 * 0.4;
  if (((0.8 <= fVar2) && (fVar3 = 1.0, 1.0 < fVar2)) || (fVar4 = 0.8, fVar3 = fVar2, 0.8 <= fVar2))
  {
    fVar4 = fVar3;
  }
  iVar8 = *(int *)((int)fVar5 + 0x100);
  *(int *)(iVar8 + 0xb8) = *(int *)(iVar8 + 0xb8) + 1;
  *(float *)(iVar8 + 0xec) = fVar4;
  *(float *)(iVar8 + 0xf0) = fVar4;
  *(float *)(iVar8 + 0xf4) = fVar4;
  iVar8 = *(int *)((int)fVar5 + 0x100);
  *(int *)(iVar8 + 0xb8) = *(int *)(iVar8 + 0xb8) + 1;
  *(float *)(iVar8 + 0xf8) = local_d8;
  *(undefined4 *)(iVar8 + 0xfc) = 0;
  *(undefined4 *)(iVar8 + 0x100) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



bool FUN_007d2ea0(int param_1,int *param_2)

{
  float fVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  
  piVar2 = param_2;
  if (param_2 == (int *)0x0) {
    return false;
  }
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 4))();
  if (puVar3 == &DAT_00b3fcfc) {
    return true;
  }
  fVar1 = *(float *)(param_1 + 0x2c);
  param_2._0_1_ = true;
  if (*(int *)(in_ECX + 0x14c) != 0) {
    uVar7 = 0;
    iVar5 = in_ECX + 0x150;
    do {
      uVar6 = 1 << ((byte)uVar7 & 0x1f);
      if ((*(uint *)(in_ECX + 0x1b0) & uVar6) != 0) {
        iVar4 = FUN_0047da70(iVar5);
        if (iVar4 == 2) {
          param_2._0_1_ = false;
        }
        else if (iVar4 == 1) {
          *(uint *)(in_ECX + 0x1b0) = *(uint *)(in_ECX + 0x1b0) & ~uVar6;
        }
      }
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + 0x10;
    } while (uVar7 < 6);
    return param_2._0_1_;
  }
  fVar8 = (float10)FUN_00982c30();
  param_2._0_1_ = (float)fVar8 - fVar1 < (float)piVar2[0x3e];
  return param_2._0_1_;
}



void FUN_007d2ff0(void)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_ECX;
  float10 fVar6;
  float fStack00000004;
  
  iVar2 = *(int *)(in_ECX + 0x100);
  fVar1 = *(float *)(iVar2 + 0xf8);
  fVar3 = *(float *)(iVar2 + 0xec);
  fVar4 = *(float *)(iVar2 + 0xf0);
  fVar5 = *(float *)(iVar2 + 0xf4);
  *(undefined4 *)(in_ECX + 0xd0) = 0x3f800000;
  if (*(char *)(in_ECX + 0xfc) != '\0') {
    fVar6 = (float10)FUN_00982c30();
    fVar1 = (float)fVar6 / fVar1;
    fStack00000004 = fVar1;
    if (fVar1 < 0.0) {
      fStack00000004 = 0.0;
    }
    if (fStack00000004 <= 1.0) {
      if (fVar1 < 0.0) {
        fVar1 = 0.0;
      }
    }
    else {
      fVar1 = 1.0;
    }
    *(float *)(in_ECX + 0xd0) = 1.0 - fVar1 * fVar1;
  }
  fStack00000004 = fVar5;
  if (fVar5 < fVar4) {
    fStack00000004 = fVar4;
  }
  if ((fStack00000004 < fVar3) || (fVar3 = fVar4, fVar5 < fVar4)) {
    fVar5 = fVar3;
  }
  *(float *)(in_ECX + 0xd0) = fVar5 * *(float *)(in_ECX + 0xd0);
  return;
}



float10 FUN_007d31b0(void)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_ECX;
  float10 fVar6;
  float in_stack_00000010;
  
  iVar2 = *(int *)(in_ECX + 0x100);
  if (((float)iVar2 != in_stack_00000010) && (*(char *)(in_ECX + 0xf4) != '\x01')) {
    fVar1 = *(float *)(iVar2 + 0xf8);
    fVar3 = *(float *)(iVar2 + 0xec);
    fVar4 = *(float *)(iVar2 + 0xf0);
    fVar5 = *(float *)(iVar2 + 0xf4);
    *(undefined4 *)(in_ECX + 0xd0) = 0x3f800000;
    if (*(char *)(in_ECX + 0xfc) != '\0') {
      fVar6 = (float10)FUN_00982c30();
      fVar1 = (float)fVar6 / fVar1;
      in_stack_00000010 = fVar1;
      if (fVar1 < 0.0) {
        in_stack_00000010 = 0.0;
      }
      if (in_stack_00000010 <= 1.0) {
        if (fVar1 < 0.0) {
          fVar1 = 0.0;
        }
      }
      else {
        fVar1 = 1.0;
      }
      *(float *)(in_ECX + 0xd0) = 1.0 - fVar1 * fVar1;
    }
    in_stack_00000010 = fVar5;
    if (fVar5 < fVar4) {
      in_stack_00000010 = fVar4;
    }
    if ((in_stack_00000010 < fVar3) || (fVar3 = fVar4, fVar5 < fVar4)) {
      fVar5 = fVar3;
    }
    fVar5 = *(float *)(in_ECX + 0xd0) * fVar5;
    *(float *)(in_ECX + 0xd0) = fVar5;
    return (float10)fVar5;
  }
  return (float10)0;
}



void FUN_007d3370(char param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  if (((((*(char *)(in_ECX + 0xf4) != '\0') && (param_1 == '\0')) || (DAT_00b42f48 < 3)) ||
      (((byte)DAT_00b42f40 & 0x10) == 0)) && (*(int *)(in_ECX + 0x114) != 0)) {
    FUN_007c1a30(*(int *)(in_ECX + 0x114));
    puVar1 = *(undefined4 **)(in_ECX + 0x114);
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(in_ECX + 0x114) = 0;
    }
    *(char *)(in_ECX + 0xf4) = param_1;
    return;
  }
  *(char *)(in_ECX + 0xf4) = param_1;
  return;
}



void FUN_007d3400(int *param_1)

{
  int *piVar1;
  char cVar2;
  LONG LVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x100);
  if (piVar1 != param_1) {
    if (((piVar1 != (int *)0x0) && (LVar3 = InterlockedDecrement(piVar1 + 1), LVar3 == 0)) &&
       (piVar1 != (int *)0x0)) {
      (**(code **)*piVar1)(1);
    }
    *(int **)(in_ECX + 0x100) = param_1;
    if (param_1 == (int *)0x0) goto LAB_007d3466;
    InterlockedIncrement(param_1 + 1);
  }
  if (param_1 != (int *)0x0) {
    for (puVar4 = (undefined4 *)(**(code **)(*param_1 + 4))(); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      if (puVar4 == &DAT_00b3fd80) {
        cVar2 = '\x01';
        goto LAB_007d3468;
      }
    }
  }
LAB_007d3466:
  cVar2 = '\0';
LAB_007d3468:
  *(char *)(in_ECX + 0xfc) = cVar2;
  if (cVar2 == '\0') {
    *(undefined4 *)(in_ECX + 0xd4) = 0x3f800000;
  }
  else if (*(char *)(in_ECX + 0x104) != '\0') {
    *(int *)(in_ECX + 0x108) = param_1[0x22];
    *(int *)(in_ECX + 0x10c) = param_1[0x23];
    *(int *)(in_ECX + 0x110) = param_1[0x24];
    return;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_007d34c0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  int *unaff_FS_OFFSET;
  float local_30c;
  float local_308;
  float fStack_304;
  float local_300;
  float local_2f4;
  undefined8 local_2f0;
  float local_2e8;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float *local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  undefined8 local_2c0;
  float local_2b8;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  double local_2a0;
  double local_298;
  double local_290;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8 [24];
  undefined4 local_198;
  int local_184;
  float local_164 [25];
  float local_100 [24];
  undefined4 local_a0;
  float local_98 [24];
  undefined4 local_38;
  byte local_2c [16];
  uint local_1c;
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_009ceacb;
  local_14 = *unaff_FS_OFFSET;
  local_1c = DAT_00b30aac ^ (uint)&local_30c;
  uVar8 = DAT_00b30aac ^ (uint)&stack0xfffffce8;
  *unaff_FS_OFFSET = (int)&local_14;
  local_2c[0] = 0;
  local_2c[1] = 1;
  local_2c[2] = 0;
  local_2c[3] = 2;
  local_2c[4] = 0;
  local_2c[5] = 3;
  local_2c[6] = 0;
  local_2c[7] = 4;
  local_2c[8] = 1;
  local_2c[9] = 2;
  local_2c[10] = 1;
  local_2c[0xb] = 3;
  local_2c[0xc] = 2;
  local_2c[0xd] = 4;
  local_2c[0xe] = 3;
  local_2c[0xf] = 4;
  local_2f4 = 7.00649e-45;
  do {
    FUN_00716db0(uVar8);
    local_2f4 = (float)((int)local_2f4 + -1);
  } while (-1 < (int)local_2f4);
  local_a0 = 0x3f;
  local_2f4 = 7.00649e-45;
  do {
    FUN_00716db0(uVar8);
    local_2f4 = (float)((int)local_2f4 + -1);
  } while (-1 < (int)local_2f4);
  local_234 = *(float *)(param_1 + 0x88);
  local_230 = *(float *)(param_1 + 0x8c);
  local_22c = *(float *)(param_1 + 0x90);
  local_38 = 0x3f;
  fVar1 = *(float *)(param_1 + 0xf4);
  fVar2 = *(float *)(param_1 + 0xf0);
  fVar3 = *(float *)(param_1 + 0x100);
  local_204 = *(float *)(param_1 + 0x6c) * fVar2 * fVar3;
  local_200 = *(float *)(param_1 + 0x78) * fVar2 * fVar3;
  local_300 = fVar2 * *(float *)(param_1 + 0x84) * fVar3;
  fVar2 = *(float *)(param_1 + 0x68) * fVar1 * fVar3;
  fVar4 = *(float *)(param_1 + 0x74) * fVar1 * fVar3;
  fVar1 = fVar1 * *(float *)(param_1 + 0x80) * fVar3;
  fVar5 = *(float *)(param_1 + 100) * fVar3;
  fVar6 = *(float *)(param_1 + 0x70) * fVar3;
  fVar3 = *(float *)(param_1 + 0x7c) * fVar3;
  local_228 = fVar5 + local_234 + fVar2 + local_204;
  local_224 = fVar6 + local_230 + fVar4 + local_200;
  local_220 = fVar3 + local_22c + fVar1 + local_300;
  local_21c = (fVar5 + local_234 + fVar2) - local_204;
  local_218 = (fVar6 + local_230 + fVar4) - local_200;
  local_214 = (fVar3 + local_22c + fVar1) - local_300;
  local_210 = ((fVar5 + local_234) - fVar2) + local_204;
  local_20c = ((fVar6 + local_230) - fVar4) + local_200;
  local_208 = ((fVar3 + local_22c) - fVar1) + local_300;
  local_204 = ((fVar5 + local_234) - fVar2) - local_204;
  local_200 = ((fVar6 + local_230) - fVar4) - local_200;
  local_300 = ((local_22c + fVar3) - fVar1) - local_300;
  local_288 = *(float *)(param_2 + 0x88);
  local_284 = *(float *)(param_2 + 0x8c);
  local_280 = *(float *)(param_2 + 0x90);
  local_2e8 = *(float *)(param_2 + 0x80);
  fVar1 = *(float *)(param_2 + 0xf4);
  local_2b8 = *(float *)(param_2 + 0x84);
  fVar2 = *(float *)(param_2 + 0xf0);
  fVar3 = *(float *)(param_2 + 0x100);
  local_2ac = *(float *)(param_2 + 0x6c) * fVar2 * fVar3;
  local_2a8 = *(float *)(param_2 + 0x78) * fVar2 * fVar3;
  local_30c = fVar2 * local_2b8 * fVar3;
  local_2f4 = *(float *)(param_2 + 0x68) * fVar1 * fVar3;
  local_2d4 = *(float *)(param_2 + 0x74) * fVar1 * fVar3;
  local_2d8 = fVar1 * local_2e8 * fVar3;
  local_2c4 = *(float *)(param_2 + 100) * fVar3;
  fVar1 = *(float *)(param_2 + 0x70) * fVar3;
  local_290 = (double)CONCAT44(local_290._4_4_,fVar1);
  local_2d0 = (float *)(*(float *)(param_2 + 0x7c) * fVar3);
  local_264 = local_2c4 + local_288 + local_2f4 + local_2ac;
  local_260 = fVar1 + local_284 + local_2d4 + local_2a8;
  local_25c = (float)local_2d0 + local_280 + local_2d8 + local_30c;
  local_258 = (local_2c4 + local_288 + local_2f4) - local_2ac;
  local_254 = (fVar1 + local_284 + local_2d4) - local_2a8;
  local_250 = ((float)local_2d0 + local_280 + local_2d8) - local_30c;
  local_24c = ((local_2c4 + local_288) - local_2f4) + local_2ac;
  local_248 = ((fVar1 + local_284) - local_2d4) + local_2a8;
  local_244 = (((float)local_2d0 + local_280) - local_2d8) + local_30c;
  local_2c0 = (double)CONCAT44(*(float *)(param_2 + 0x78),local_2ac);
  local_298 = (double)CONCAT44(local_298._4_4_,local_2a8);
  local_2a0 = (double)CONCAT44(local_2a0._4_4_,local_30c);
  local_2ac = ((local_2c4 + local_288) - local_2f4) - local_2ac;
  local_2a8 = ((fVar1 + local_284) - local_2d4) - local_2a8;
  local_2f0 = (double)CONCAT44(*(float *)(param_2 + 0x74),local_2a8);
  local_30c = ((local_280 + (float)local_2d0) - local_2d8) - local_30c;
  local_2dc = local_2f4;
  local_2cc = local_2d8;
  local_2c8 = local_2d4;
  local_2a4 = local_30c;
  local_270 = local_288;
  local_26c = local_284;
  local_268 = local_280;
  local_240 = local_2ac;
  local_23c = local_2a8;
  local_238 = local_30c;
  local_1fc = local_300;
  local_308 = local_2ac;
  fStack_304 = local_200;
  FUN_0070df30(0);
  local_184 = param_1;
  local_c = 0;
  FUN_0070e040(param_1 + 0xec);
  pfVar15 = local_164;
  pfVar14 = local_100;
  for (iVar11 = 0x19; iVar11 != 0; iVar11 = iVar11 + -1) {
    *pfVar14 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    pfVar14 = pfVar14 + 1;
  }
  local_184 = param_2;
  FUN_0070e040(param_2 + 0xec);
  pfVar15 = local_164;
  pfVar14 = local_98;
  for (iVar11 = 0x19; iVar11 != 0; iVar11 = iVar11 + -1) {
    *pfVar14 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    pfVar14 = pfVar14 + 1;
  }
  iVar11 = 5;
  do {
    FUN_00716db0();
    iVar11 = iVar11 + -1;
  } while (-1 < iVar11);
  iVar11 = 0;
  local_198 = 0x3f;
  local_2d0 = (float *)0x0;
  do {
    if (iVar11 == 0) {
      local_2d0 = &local_234;
      pfVar15 = local_98;
LAB_007d40d9:
      pfVar14 = local_1f8;
      for (iVar12 = 0x19; iVar12 != 0; iVar12 = iVar12 + -1) {
        *pfVar14 = *pfVar15;
        pfVar15 = pfVar15 + 1;
        pfVar14 = pfVar14 + 1;
      }
    }
    else if (iVar11 == 1) {
      local_2d0 = &local_270;
      pfVar15 = local_100;
      goto LAB_007d40d9;
    }
    iVar12 = 0;
    pfVar15 = local_2d0 + 2;
    do {
      iVar13 = 0;
      pfVar14 = local_1f8 + 2;
      while ((local_308 = (*pfVar14 * *pfVar15 +
                          pfVar14[-1] * pfVar15[-1] + pfVar14[-2] * pfVar15[-2]) - pfVar14[1],
             0.0 <= local_308 && (0.0 < local_308))) {
        iVar13 = iVar13 + 1;
        pfVar14 = pfVar14 + 4;
        if (5 < iVar13) {
          local_c = 0xffffffff;
          FUN_0070dfa0();
          uVar9 = 1;
          goto LAB_007d4546;
        }
      }
      iVar12 = iVar12 + 1;
      pfVar15 = pfVar15 + 3;
    } while (iVar12 < 5);
    iVar11 = iVar11 + 1;
  } while (iVar11 < 2);
  local_2c4 = 0.0;
  do {
    if (local_2c4 == 0.0) {
      local_2d0 = &local_234;
      pfVar15 = local_98;
LAB_007d41ba:
      pfVar14 = local_1f8;
      for (iVar11 = 0x19; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pfVar14 = *pfVar15;
        pfVar15 = pfVar15 + 1;
        pfVar14 = pfVar14 + 1;
      }
    }
    else if (local_2c4 == 1.4013e-45) {
      local_2d0 = &local_270;
      pfVar15 = local_100;
      goto LAB_007d41ba;
    }
    iVar11 = 0;
    do {
      pfVar15 = local_2d0 + (uint)local_2c[iVar11 * 2] * 3;
      local_288 = *pfVar15;
      local_284 = pfVar15[1];
      local_280 = pfVar15[2];
      pfVar15 = local_2d0 + (uint)local_2c[iVar11 * 2 + 1] * 3;
      local_2ac = *pfVar15;
      local_2a8 = pfVar15[1];
      local_2a4 = pfVar15[2];
      local_298 = (double)local_2ac;
      iVar12 = 0;
      pfVar15 = local_1f8 + 2;
      local_2a0 = (double)local_2a8;
      local_290 = (double)local_2a4;
      local_2c0 = (double)local_280;
      do {
        fVar1 = *pfVar15;
        local_2f0 = (double)fVar1;
        local_308 = pfVar15[1];
        fVar2 = (fVar1 * local_280 + pfVar15[-1] * local_284 + pfVar15[-2] * local_288) - local_308;
        fStack_304 = (float)((ulonglong)(double)local_308 >> 0x20);
        if (0.0 <= fVar2) {
          if (fVar2 <= 0.0) {
            iVar13 = 0;
          }
          else {
            iVar13 = 1;
          }
        }
        else {
          iVar13 = 2;
        }
        local_308 = (fVar1 * local_2a4 + pfVar15[-1] * local_2a8 + pfVar15[-2] * local_2ac) -
                    local_308;
        if (0.0 <= local_308) {
          if (local_308 <= 0.0) {
            iVar10 = 0;
          }
          else {
            iVar10 = 1;
          }
        }
        else {
          iVar10 = 2;
        }
        if (iVar13 == iVar10) {
          if ((iVar13 == 0) && (iVar10 == 0)) {
LAB_007d44c5:
            local_c = 0xffffffff;
            FUN_0070dfa0();
            uVar9 = 1;
            goto LAB_007d4546;
          }
        }
        else {
          local_27c = pfVar15[-2];
          fVar1 = pfVar15[1];
          local_278 = pfVar15[-1];
          local_274 = *pfVar15;
          uVar7 = (ulonglong)local_2f0 >> 0x20;
          local_2f4 = local_2ac - local_288;
          local_2c8 = local_2a8 - local_284;
          local_2d8 = local_2a4 - local_280;
          fVar1 = ((local_274 * fVar1 - local_280) * local_274 +
                  (fVar1 * local_27c - local_288) * local_27c +
                  (local_278 * fVar1 - local_284) * local_278) /
                  (local_2c8 * local_278 + local_2f4 * local_27c + local_2d8 * local_274);
          local_30c = fVar1 * local_2d8;
          local_2dc = local_2f4 * fVar1 + local_288;
          fVar3 = local_2c8 * fVar1 + local_284;
          local_2f0 = (double)CONCAT44((int)uVar7,fVar3);
          fVar2 = local_30c + local_280;
          local_2d4 = local_2f4;
          local_2cc = local_2d8;
          local_308 = fVar2;
          if ((0.0 <= fVar1) && (fVar1 <= 1.0)) {
            iVar13 = 0;
            pfVar14 = local_1f8 + 2;
            while ((iVar13 == iVar12 ||
                   (local_308 = (fVar2 * *pfVar14 + pfVar14[-1] * fVar3 + pfVar14[-2] * local_2dc) -
                                pfVar14[1], 0.0 <= local_308))) {
              iVar13 = iVar13 + 1;
              pfVar14 = pfVar14 + 4;
              if (5 < iVar13) goto LAB_007d44c5;
            }
          }
        }
        iVar12 = iVar12 + 1;
        pfVar15 = pfVar15 + 4;
      } while (iVar12 < 6);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 8);
    local_2c4 = (float)((int)local_2c4 + 1);
    if (1 < (int)local_2c4) {
      local_c = 0xffffffff;
      FUN_0070dfa0();
      uVar9 = 0;
LAB_007d4546:
      *unaff_FS_OFFSET = local_14;
      return uVar9;
    }
  } while( true );
}



void FUN_007d4570(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  LONG LVar6;
  int in_ECX;
  int iVar7;
  int *piVar8;
  int aiStack_1c [5];
  undefined4 uStack_8;
  
  piVar2 = param_1;
  if ((param_1 != (int *)0x0) && (0.0 < *(float *)(in_ECX + 0xd8))) {
    if (*(int *)(in_ECX + 0x114) == 0) {
      uVar3 = FUN_007c23c0(DAT_00b43104,0x16);
      param_1 = (int *)FUN_007d6fe0();
      iVar7 = *param_1;
      uVar4 = FUN_007c1360();
      (**(code **)(iVar7 + 0x6c))(uVar4);
      FUN_00499310(uVar3);
    }
    FUN_007c5a60(*(undefined4 *)(in_ECX + 0x114));
    piVar8 = piVar2 + 0x3b;
    piVar5 = aiStack_1c;
    for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar5 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar5 = piVar5 + 1;
    }
    piVar5 = (int *)FUN_00405ad0(&param_1);
    piVar8 = param_1;
    uStack_8 = *(undefined4 *)(*piVar5 + 0xf8);
    if (param_1 != (int *)0x0) {
      LVar6 = InterlockedDecrement(param_1 + 1);
      if ((LVar6 == 0) && (piVar8 != (int *)0x0)) {
        (**(code **)*piVar8)(1);
      }
    }
    FUN_0070c190(aiStack_1c);
    piVar5 = (int *)FUN_00405ad0(&param_1);
    piVar8 = param_1;
    iVar7 = *piVar5;
    piVar2[0x15] = *(int *)(iVar7 + 0x88);
    piVar2[0x16] = *(int *)(iVar7 + 0x8c);
    piVar2[0x17] = *(int *)(iVar7 + 0x90);
    if (param_1 != (int *)0x0) {
      LVar6 = InterlockedDecrement(param_1 + 1);
      if ((LVar6 == 0) && (piVar8 != (int *)0x0)) {
        (**(code **)*piVar8)(1);
      }
    }
    pcVar1 = *(code **)(*piVar2 + 0x84);
    piVar2[0x51] = in_ECX;
    (*pcVar1)(0xffffffff);
  }
  return;
}



void FUN_007d46c0(void)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  undefined4 uVar8;
  LONG LVar9;
  int in_ECX;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int **ppiVar13;
  undefined4 *puVar14;
  float *pfVar15;
  int *unaff_FS_OFFSET;
  float10 fVar16;
  int *local_208;
  int *local_204;
  float local_200;
  float local_1fc;
  int *local_1f8;
  int *local_1f4;
  float local_1f0;
  float local_1ec;
  int *local_1e8;
  float local_1e4;
  float local_1e0;
  int *local_1dc;
  float local_1d8;
  float local_1d4;
  int *local_1d0;
  float local_1cc;
  float local_1c8;
  int *local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  int local_1b0;
  float local_1ac;
  int *local_1a8;
  int *local_1a4;
  float local_1a0;
  int *local_19c;
  float local_198;
  undefined1 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  float local_17c [9];
  undefined4 local_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  float local_138;
  undefined4 local_134;
  int *local_130 [4];
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  undefined4 local_e4 [6];
  undefined1 auStack_cc [12];
  float local_c0;
  float local_bc;
  float local_b8;
  int iStack_b4;
  undefined4 uStack_34;
  int iStack_28;
  undefined1 uStack_24;
  int local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009ceb2f;
  local_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffde0;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (((((*(char *)(in_ECX + 0xf4) != '\0') && (2 < DAT_00b42f48)) &&
       (((byte)DAT_00b42f40 & 0x10) != 0)) || (*(char *)(in_ECX + 0x120) != '\0')) &&
     ((*(short *)(in_ECX + 0x118) != 0xff &&
      (*(float *)(in_ECX + 0xd8) < 0.05 == (*(float *)(in_ECX + 0xd8) == 0.05))))) {
    local_1b0 = in_ECX;
    if (*(int *)(in_ECX + 0x114) == 0) {
      iVar5 = FUN_007c1960(uVar4);
      if (iVar5 == 0) {
        piVar6 = (int *)FUN_00405ad0(&local_208);
        *(ushort *)(*piVar6 + 0x18) = *(ushort *)(*piVar6 + 0x18) | 1;
        FUN_007016a0();
        *unaff_FS_OFFSET = local_1c;
        return;
      }
      FUN_00499310(iVar5);
    }
    iVar5 = *(int *)(in_ECX + 0x130);
    puVar12 = (undefined4 *)(*(int *)(in_ECX + 0x100) + 100);
    puVar14 = local_e4;
    for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar14 = puVar14 + 1;
    }
    local_208 = (int *)(*(float *)(iVar5 + 0x20) - local_c0);
    local_1f8 = (int *)(*(float *)(iVar5 + 0x24) - local_bc);
    local_1fc = *(float *)(iVar5 + 0x28) - local_b8;
    local_1c0 = local_208;
    local_1bc = (float)local_1f8;
    local_1b8 = local_1fc;
    FUN_0043f350();
    local_208 = (int *)-DAT_00b258e8;
    local_1f8 = (int *)-DAT_00b258ec;
    local_1fc = -DAT_00b258f0;
    local_1f4 = local_208;
    local_1f0 = (float)local_1f8;
    local_1ec = local_1fc;
    FUN_004bf9e0(&local_1dc,&local_1f4);
    if ((((((float)local_1dc < 0.01) && (-0.01 < (float)local_1dc)) && (local_1d8 < 0.01)) &&
        ((-0.01 < local_1d8 && (local_1d4 < 0.01)))) && (-0.01 < local_1d4)) {
      local_1f4 = DAT_00b258d0;
      local_1f0 = DAT_00b258d4;
      local_1ec = DAT_00b258d8;
    }
    pfVar7 = (float *)FUN_004bf9e0(&local_1d0,&local_1dc);
    local_1f4 = (int *)*pfVar7;
    local_208 = (int *)-(float)local_1dc;
    local_1f0 = pfVar7[1];
    local_1f8 = (int *)-local_1d8;
    local_1ec = pfVar7[2];
    local_1fc = -local_1d4;
    local_1e8 = local_208;
    local_1e4 = (float)local_1f8;
    local_1e0 = local_1fc;
    local_1dc = local_208;
    local_1d8 = (float)local_1f8;
    local_1d4 = local_1fc;
    FUN_0070de60(0);
    iVar5 = *(int *)(in_ECX + 0x130);
    iVar10 = *(int *)(in_ECX + 0x100);
    local_194 = 0;
    local_200 = *(float *)(iVar5 + 0x2c);
    local_1f8 = (int *)(*(float *)(iVar10 + 0x88) - *(float *)(iVar5 + 0x20));
    fVar1 = *(float *)(iVar10 + 0x8c) - *(float *)(iVar5 + 0x24);
    local_1fc = *(float *)(iVar10 + 0x90) - *(float *)(iVar5 + 0x28);
    local_208 = (int *)(local_1fc * local_1fc + (float)local_1f8 * (float)local_1f8 + fVar1 * fVar1)
    ;
    fVar16 = (float10)FUN_00982c30();
    local_208 = (int *)(float)fVar16;
    fVar1 = (local_200 / (float)local_208) * 110.0;
    *(float *)(in_ECX + 0x124) = fVar1;
    local_200 = fVar1 * 0.5 * 0.01745328;
    fVar16 = (float10)FUN_00983af0();
    piVar6 = DAT_00b43104;
    local_208 = (int *)(float)fVar16;
    local_200 = -(float)local_208;
    local_19c = (int *)0x3f800000;
    local_198 = *(float *)(iVar10 + 0xf8);
    local_1f8 = DAT_00b43104;
    local_190 = 0;
    local_184 = 0;
    local_18c = 0x3f800000;
    local_188 = 0x3f800000;
    local_1ac = local_200;
    local_1a8 = local_208;
    local_1a4 = local_208;
    local_1a0 = local_200;
    if ((*(char *)(in_ECX + 0xf4) == '\0') || (cVar3 = FUN_00405a80(), cVar3 == '\0')) {
      local_130[0] = local_1dc;
      local_130[1] = local_1f4;
      local_1e4 = DAT_00b3f9ac;
      local_1e8 = DAT_00b3f9a8;
      local_130[2] = local_1c0;
      local_1e0 = DAT_00b3f9b0;
      local_130[3] = (int *)0x0;
      local_120 = local_1d8;
      local_11c = local_1f0;
      local_118 = local_1bc;
      local_114 = 0;
      local_110 = local_1d4;
      local_10c = local_1ec;
      local_108 = local_1b8;
      local_104 = 0;
      local_100 = -(DAT_00b3f9b0 * local_1d4 +
                   DAT_00b3f9ac * local_1d8 + (float)DAT_00b3f9a8 * (float)local_1dc);
      local_fc = -(DAT_00b3f9b0 * local_1ec +
                  (float)DAT_00b3f9a8 * (float)local_1f4 + DAT_00b3f9ac * local_1f0);
      local_f8 = -(DAT_00b3f9b0 * local_1b8 +
                  local_1bc * DAT_00b3f9ac + (float)local_1c0 * (float)DAT_00b3f9a8);
      local_f4 = 0x3f800000;
      piVar6 = (int *)((float)local_208 - local_1ac);
      local_1b4 = (float)local_208 - local_1a0;
      local_200 = 1.0 / (local_198 - 1.0);
      local_17c[3] = 2.0 / (float)piVar6;
      local_17c[7] = 0.0;
      local_150 = -((float)local_208 + local_1ac) / (float)piVar6;
      local_140 = 0;
      local_17c[4] = 0.0;
      local_17c[8] = 2.0 / local_1b4;
      local_14c = -(local_1a0 + (float)local_208) / local_1b4;
      local_13c = 0;
      local_17c[5] = 0.0;
      local_158 = 0;
      local_148 = local_200 * local_198;
      local_138 = -(local_200 * local_198);
      local_17c[6] = 0.0;
      local_154 = 0;
      local_134 = 0;
      local_144 = 0x3f800000;
      local_1b0 = in_ECX;
      local_208 = piVar6;
    }
    else {
      uVar8 = FUN_007b7650();
      FUN_00405070(uVar8);
      local_14 = 0;
      FUN_00405070(piVar6[2]);
      local_14._0_1_ = 1;
      FUN_00405710(local_1fc);
      piVar6 = (int *)(in_ECX + 0x14c);
      if (*piVar6 == 0) {
        local_204 = (int *)FUN_00401f00(0x124);
        local_14._0_1_ = 2;
        if (local_204 == (int *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_0070d590();
        }
        local_14._0_1_ = 1;
        FUN_0075fa90(uVar8);
      }
      iVar5 = *piVar6;
      *(float *)(iVar5 + 0x54) = local_c0;
      *(float *)(iVar5 + 0x58) = local_bc;
      *(float *)(iVar5 + 0x5c) = local_b8;
      FUN_00707370(0,1);
      iVar10 = local_1b0;
      iVar5 = *(int *)(local_1b0 + 0x130);
      local_1e8 = *(int **)(iVar5 + 0x20);
      local_1e4 = *(float *)(iVar5 + 0x24);
      local_1e0 = *(float *)(iVar5 + 0x28);
      iVar5 = FUN_006ff9c0(&DAT_00a7d2cc);
      local_1d0 = *(int **)(iVar5 + 0x18);
      local_1cc = *(float *)(iVar5 + 0x1c);
      local_1c8 = *(float *)(iVar5 + 0x20);
      if (local_1cc + (float)local_1d0 < local_1c8) {
        local_200 = DAT_00b258e8 * 10.0;
        local_1b4 = DAT_00b258ec * 10.0;
        local_204 = (int *)(DAT_00b258f0 * 10.0);
        local_1e8 = (int *)(local_200 + (float)local_1e8);
        local_1e4 = local_1e4 + local_1b4;
        local_1e0 = local_1e0 + (float)local_204;
      }
      FUN_0070c340(&local_1e8,&local_1f4);
      FUN_0070c190(&local_1ac);
      FUN_00404d30(&local_190);
      FUN_00707370(0,1);
      iVar5 = *piVar6;
      local_1dc = *(int **)(iVar5 + 0x6c);
      local_1d8 = *(float *)(iVar5 + 0x78);
      local_1d4 = *(float *)(iVar5 + 0x84);
      local_1f4 = *(int **)(iVar5 + 0x68);
      local_1f0 = *(float *)(iVar5 + 0x74);
      local_1ec = *(float *)(iVar5 + 0x80);
      local_1d0 = *(int **)(iVar5 + 100);
      local_1cc = *(float *)(iVar5 + 0x70);
      local_1c8 = *(float *)(iVar5 + 0x7c);
      local_204 = local_19c;
      local_1b4 = local_198;
      local_1c0 = local_1d0;
      local_1bc = local_1cc;
      local_1b8 = local_1c8;
      FUN_0070c230(*(int *)(iVar10 + 0x130) + 0x20);
      iVar10 = local_1b0;
      iVar5 = *piVar6;
      pfVar7 = (float *)(iVar5 + 0xec);
      pfVar15 = &local_1ac;
      for (iVar11 = 7; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pfVar15 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar15 = pfVar15 + 1;
      }
      local_198 = local_198 + 400.0;
      FUN_00717a40(&local_1ac,iVar5 + 100);
      local_19c = local_204;
      local_198 = local_1b4;
      FUN_0070c190(&local_1ac);
      local_180 = DAT_00b25ad0;
      local_17c[0] = DAT_00b25ad4;
      local_17c[1] = (float)DAT_00b25ad8;
      local_17c[2] = (float)DAT_00b25adc;
      (**(code **)(*DAT_00b3f928 + 0x68))(&local_180);
      local_1d4 = 1.0;
      local_1d0 = (int *)0x3f800000;
      local_1cc = 1.0;
      local_1c8 = 1.0;
      (**(code **)(*DAT_00b3f928 + 0x60))(&local_1d4);
      uVar8 = FUN_007d6fe0();
      FUN_007d7280(7,uVar8);
      (**(code **)(*DAT_00b3f928 + 0x60))(&local_188);
      if (((local_204[0x80] == 1) || (local_204[0x81] == 1)) && ((char)local_204[0x83] == '\x01')) {
        (**(code **)(*local_204 + 0x140))
                  (auStack_cc,&local_1cc,&local_200,&local_1e8,&local_1b8,&local_19c);
      }
      piVar2 = local_208;
      (**(code **)(*local_208 + 0x4c))(*piVar6);
      *(undefined1 *)(piVar2 + 0x878) = 1;
      FUN_0070df30(0);
      iStack_b4 = *piVar6;
      uStack_24 = 3;
      FUN_0070e040(&local_1bc);
      uStack_34 = 0;
      FUN_0070c0b0(*piVar6,*(undefined4 *)(iVar10 + 0x130),&local_c0,0);
      *(undefined1 *)((int)piVar2 + 0x21e1) = 1;
      (**(code **)(*piVar2 + 0x50))();
      piVar6 = local_1f8;
      if (((local_1f8[0x80] == 1) || (local_1f8[0x81] == 1)) && ((char)local_1f8[0x83] == '\x01')) {
        (**(code **)(*local_1f8 + 0x140))
                  (&DAT_00b3f9a8,&local_1c0,&local_1f4,&local_1dc,&local_1ac,&local_190);
      }
      piVar6 = piVar6 + 0x260;
      ppiVar13 = local_130;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppiVar13 = (int *)*piVar6;
        piVar6 = piVar6 + 1;
        ppiVar13 = ppiVar13 + 1;
      }
      pfVar7 = (float *)(local_1f8 + 0x270);
      pfVar15 = local_17c + 3;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar15 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar15 = pfVar15 + 1;
      }
      FUN_007d72d0();
      FUN_00405710(local_208);
      if (*(uint *)((int)local_1fc + 4) < 2) {
        InterlockedIncrement((LONG *)((int)local_1fc + 4));
      }
      if (*(char *)(local_1b0 + 300) != '\0') {
        uVar8 = FUN_00405a30();
        FUN_007a9cd0(uVar8);
      }
      *(undefined1 *)(local_1b0 + 0x214) = 0;
      local_14._0_1_ = 1;
      FUN_0070dfa0();
      local_14 = (uint)local_14._1_3_ << 8;
      FUN_007016a0();
      local_14 = 0xffffffff;
      FUN_007016a0();
    }
    ppiVar13 = local_130;
    puVar12 = (undefined4 *)(local_1b0 + 0x50);
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar12 = *ppiVar13;
      ppiVar13 = ppiVar13 + 1;
      puVar12 = puVar12 + 1;
    }
    *(float *)(local_1b0 + 0x80) =
         -(local_b8 * local_1d4 + local_c0 * (float)local_1dc + local_bc * local_1d8);
    pfVar7 = local_17c + 3;
    pfVar15 = (float *)(local_1b0 + 0x90);
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar15 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar15 = pfVar15 + 1;
    }
    *(float *)(local_1b0 + 0x84) =
         -(local_1ec * local_b8 + (float)local_1f4 * local_c0 + local_1f0 * local_bc);
    local_204 = (int *)(local_b8 * local_1b8 + local_c0 * (float)local_1c0 + local_1bc * local_bc);
    *(float *)(local_1b0 + 0x88) = -(float)local_204;
    D3DXMatrixMultiply(local_17c + 3,(undefined4 *)(local_1b0 + 0x50),(float *)(local_1b0 + 0x90));
    pfVar7 = local_17c;
    pfVar15 = (float *)(local_1b0 + 0x10);
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar15 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar15 = pfVar15 + 1;
    }
    *unaff_FS_OFFSET = iStack_28;
    return;
  }
  if (*(int *)(in_ECX + 0x114) != 0) {
    FUN_007c1a30(*(int *)(in_ECX + 0x114));
    puVar12 = *(undefined4 **)(in_ECX + 0x114);
    if (puVar12 != (undefined4 *)0x0) {
      LVar9 = InterlockedDecrement(puVar12 + 1);
      if ((LVar9 == 0) && (puVar12 != (undefined4 *)0x0)) {
        (**(code **)*puVar12)(1);
      }
      *(undefined4 *)(in_ECX + 0x114) = 0;
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_007d5320(void)

{
  undefined4 *puVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x144);
  while (puVar1 != (undefined4 *)0x0) {
    piVar3 = puVar1 + 2;
    puVar1 = (undefined4 *)*puVar1;
    if ((*piVar3 != 0) && (piVar3 = (int *)FUN_00707530(4), piVar3 != (int *)0x0)) {
      iVar4 = (**(code **)(*piVar3 + 0x54))();
      if ((iVar4 < 1) || (iVar4 = (**(code **)(*piVar3 + 0x54))(), 10 < iVar4)) {
        bVar2 = 0;
      }
      else {
        bVar2 = 1;
      }
      if ((-(uint)bVar2 & (uint)piVar3) != 0) {
        *(undefined4 *)((-(uint)bVar2 & (uint)piVar3) + 0x24) = 0;
      }
    }
  }
  *(undefined4 *)(in_ECX + 0x144) = 0;
  return;
}



void FUN_007d5390(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ceb58;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a91248;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a91228;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007d53f0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ceb88;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a91258;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a91238;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007d5470(byte param_1)

{
  FUN_007d5390();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007d5490(byte param_1)

{
  FUN_007d53f0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007d54b0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cecd6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a912b4;
  local_4 = 9;
  FUN_007d21f0(uVar2);
  puVar1 = (undefined4 *)in_ECX[0x3e];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x3e] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x40];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x40] = 0;
  }
  if (in_ECX[0x45] != 0) {
    FUN_007c1a30(in_ECX[0x45]);
  }
  puVar1 = (undefined4 *)in_ECX[0x45];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x45] = 0;
  }
  *(undefined2 *)(in_ECX + 0x46) = 0;
  puVar1 = (undefined4 *)in_ECX[0x47];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x47] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x53];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x53] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x4c];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x4c] = 0;
  }
  in_ECX[0x51] = 0;
  puVar1 = (undefined4 *)in_ECX[0x52];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x52] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x53];
  local_4._0_1_ = 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x52];
  local_4._0_1_ = 7;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4._0_1_ = 6;
  FUN_007d53f0();
  puVar1 = (undefined4 *)in_ECX[0x4c];
  local_4._0_1_ = 5;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x47];
  local_4._0_1_ = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x45];
  local_4._0_1_ = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x40];
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x3e];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_007d5390();
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007d5790(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  LONG LVar7;
  int in_ECX;
  bool bVar8;
  int *unaff_FS_OFFSET;
  undefined4 *local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar2 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cebb8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar8 = false;
  local_20 = (undefined4 *)0x0;
  iVar5 = FUN_007b8150(param_1,uVar4);
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_00405760(&local_20);
    bVar8 = true;
    param_1 = (undefined4 *)((uint)param_1 & 0xffffff00);
    if (*piVar6 != 0) goto LAB_007d57f0;
  }
  param_1 = (undefined4 *)CONCAT31(param_1._1_3_,1);
LAB_007d57f0:
  puVar3 = local_20;
  if ((((bVar8) && (local_20 != (undefined4 *)0x0)) &&
      (LVar7 = InterlockedDecrement(local_20 + 1), LVar7 == 0)) && (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  if ((char)param_1 == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fa00);
    _DAT_00b3fa78 = GetCurrentThreadId();
    _DAT_00b3fa7c = _DAT_00b3fa7c + 1;
    piVar6 = (int *)FUN_00405760(&param_1);
    puVar3 = param_1;
    piVar6 = *(int **)(*piVar6 + 0x18);
    if (((param_1 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(param_1 + 1), LVar7 == 0))
       && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    _DAT_00b3fa7c = _DAT_00b3fa7c + -1;
    if (_DAT_00b3fa7c == 0) {
      _DAT_00b3fa78 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fa00);
    if (((piVar6 != (int *)0x0) && (iVar5 = (**(code **)(*piVar6 + 0x54))(), 0 < iVar5)) &&
       (iVar5 = (**(code **)(*piVar6 + 0x54))(), iVar5 < 0xb)) {
      puVar3 = *(undefined4 **)(in_ECX + 0x144);
      do {
        puVar1 = puVar3;
        if (puVar1 == (undefined4 *)0x0) {
          if (((piVar6[7] & 0x1000U) == 0) || (iVar5 = (**(code **)(*piVar6 + 0x54))(), iVar5 == 4))
          {
            FUN_007ee330(in_ECX,puVar2 + 8);
            param_1 = puVar2;
            if (puVar2 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar2 + 1);
            }
            uStack_4 = 0;
            FUN_00749800(&param_1);
            uStack_4 = 0xffffffff;
            if ((puVar2 != (undefined4 *)0x0) &&
               (LVar7 = InterlockedDecrement(puVar2 + 1), LVar7 == 0)) {
              (**(code **)*puVar2)(1);
            }
          }
          goto LAB_007d595e;
        }
        puVar3 = (undefined4 *)*puVar1;
      } while ((undefined4 *)puVar1[2] != puVar2);
      FUN_007c58f0(puVar1,*(undefined4 **)(in_ECX + 0x144));
      if ((*(char *)(in_ECX + 0x104) != '\0') && (*(char *)(in_ECX + 0xf4) == '\0')) {
        uStack_1c = puVar2[8];
        uStack_18 = puVar2[9];
        uStack_14 = puVar2[10];
        uStack_10 = puVar2[0xb];
        FUN_007ecec0(&uStack_1c);
      }
    }
  }
LAB_007d595e:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007d59c0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0xf5) != '\0') {
    FUN_007d4570();
    return;
  }
  FUN_007d46c0(param_2);
  return;
}



undefined4 FUN_007d59e0(int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  uint uVar7;
  
  if (DAT_00b42f48 == 0) {
    return 0;
  }
  uVar1 = *(undefined4 *)(in_ECX + 0x1b0);
  cVar2 = FUN_007d2ea0(param_1,*(undefined4 *)(in_ECX + 0x100));
  if (cVar2 != '\0') {
    piVar3 = (int *)(**(code **)(*param_1 + 8))();
    if (piVar3 == (int *)0x0) {
      iVar5 = (**(code **)(*param_1 + 0x10))();
      if (iVar5 != 0) {
        uVar6 = (**(code **)(*param_1 + 0x10))();
        FUN_007d5790(uVar6);
      }
    }
    else {
      uVar7 = 0;
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 4))();
      if ((-(uint)(puVar4 == &DAT_00b3fd70) & (uint)piVar3) == 0) {
        if (*(short *)((int)piVar3 + 0xb6) != 0) {
          if (*(short *)((int)piVar3 + 0xb6) == 0) goto LAB_007d5ac2;
          do {
            iVar5 = *(int *)(piVar3[0x2c] + uVar7 * 4);
            if (((iVar5 != 0) && (*(float *)(iVar5 + 0x2c) != 0.0)) &&
               ((*(byte *)(iVar5 + 0x18) & 1) == 0)) {
              FUN_007d59e0(iVar5);
            }
LAB_007d5ac2:
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(ushort *)((int)piVar3 + 0xb6));
          *(undefined4 *)(in_ECX + 0x1b0) = uVar1;
          return 1;
        }
      }
      else {
        iVar5 = FUN_007c59e0();
        if (((iVar5 != 0) && (cVar2 = FUN_0049ffc0(), cVar2 != '\0')) &&
           ((*(byte *)(iVar5 + 0x18) & 1) == 0)) {
          FUN_007d59e0(iVar5);
          *(undefined4 *)(in_ECX + 0x1b0) = uVar1;
          return 1;
        }
      }
    }
  }
  *(undefined4 *)(in_ECX + 0x1b0) = uVar1;
  return 1;
}



undefined1
FUN_007d5b20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined2 param_6)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int *unaff_FS_OFFSET;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  undefined1 local_15c [84];
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cebeb;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar1 = *(undefined4 *)(param_5 + 0xc);
  switch(param_6) {
  case 0:
    local_168 = -DAT_00b258d0;
    local_164 = -DAT_00b258d4;
    local_160 = -DAT_00b258d8;
    local_178 = DAT_00b258e4;
    local_18c = DAT_00b258e0;
    local_188 = DAT_00b258dc;
    break;
  case 1:
    local_164 = DAT_00b258d4;
    local_160 = DAT_00b258d8;
    local_168 = DAT_00b258d0;
    goto LAB_007d5c38;
  case 2:
    local_168 = -DAT_00b258dc;
    local_164 = -DAT_00b258e0;
    local_160 = -DAT_00b258e4;
    local_16c = DAT_00b258f0;
    local_174 = DAT_00b258e8;
    local_170 = DAT_00b258ec;
    goto LAB_007d5df7;
  case 3:
    local_168 = DAT_00b258dc;
    local_164 = DAT_00b258e0;
    local_160 = DAT_00b258e4;
    local_178 = DAT_00b258f0;
    local_18c = DAT_00b258ec;
    local_188 = DAT_00b258e8;
    break;
  case 4:
    local_164 = -DAT_00b258ec;
    local_160 = -DAT_00b258f0;
    local_168 = -DAT_00b258e8;
LAB_007d5c38:
    local_184 = -DAT_00b258dc;
    local_180 = -DAT_00b258e0;
    local_178 = -DAT_00b258e4;
    local_174 = local_184;
    local_170 = local_180;
    local_16c = local_178;
    goto LAB_007d5e0d;
  case 5:
    local_168 = DAT_00b258e8;
    local_164 = DAT_00b258ec;
    local_160 = DAT_00b258f0;
    local_16c = -DAT_00b258e4;
    local_174 = -DAT_00b258dc;
    local_170 = -DAT_00b258e0;
LAB_007d5df7:
    local_17c = -DAT_00b258e4;
    local_188 = -DAT_00b258dc;
    local_18c = -DAT_00b258e0;
    local_184 = local_188;
    local_180 = local_18c;
    local_178 = local_17c;
    goto LAB_007d5e0d;
  default:
    goto switchD_007d5b69_default;
  }
  local_188 = -local_188;
  local_18c = -local_18c;
  local_178 = -local_178;
  local_184 = local_188;
  local_174 = local_188;
  local_180 = local_18c;
  local_170 = local_18c;
  local_16c = local_178;
LAB_007d5e0d:
  local_17c = local_178;
  FUN_00498fe0(&local_184,&local_174);
switchD_007d5b69_default:
  FUN_00814160(0);
  local_104 = param_2;
  local_4 = 0;
  local_108 = param_1;
  local_100 = param_3;
  FUN_00812ef0(param_6);
  FUN_00707370(0,1);
  uVar2 = FUN_007d34c0(uVar1,local_15c);
  local_4 = 0xffffffff;
  FUN_00813190();
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}



void FUN_007d5ed0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x148) == 0) {
    iVar2 = FUN_00401f00(0xc0,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00717570(0);
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar3);
    FUN_006ff420("fence");
  }
  FUN_00749800(in_ECX + 0x148);
  *(undefined4 *)(in_ECX + 0x144) = *(undefined4 *)(in_ECX + 0xe8);
  *unaff_FS_OFFSET = local_c;
  return;
}



int * FUN_007d5f80(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  LONG LVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cec29;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int **)(in_ECX + 4) != (int *)0x0) {
    piVar3 = *(int **)(in_ECX + 4);
    do {
      piVar4 = (int *)*piVar3;
      if (*param_2 == piVar3[2]) goto LAB_007d5fd2;
      piVar3 = piVar4;
    } while (piVar4 != (int *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_007d5fd2:
  piVar4 = param_2;
  param_2 = piVar3;
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)FUN_007c17d0(&local_10,&param_2);
  }
  iVar1 = *piVar4;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  local_4 = 0;
  if ((((piVar3 != (int *)0x0) && (local_10 != (undefined4 *)0x0)) &&
      (LVar5 = InterlockedDecrement(local_10 + 1), LVar5 == 0)) && (local_10 != (undefined4 *)0x0))
  {
    (**(code **)*local_10)(1,uVar2);
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_007d6060(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int iVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cecd6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a912b4;
  in_ECX[0x3c] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x39] = &PTR_FUN_00a91294;
  in_ECX[0x3e] = 0;
  in_ECX[0x40] = 0;
  in_ECX[0x45] = 0;
  in_ECX[0x47] = 0;
  in_ECX[0x4c] = 0;
  in_ECX[0x50] = 0;
  in_ECX[0x4e] = 0;
  in_ECX[0x4f] = 0;
  in_ECX[0x4d] = &PTR_FUN_00a912a4;
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  local_4 = 9;
  iVar4 = 5;
  do {
    FUN_00716db0(uVar2);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  in_ECX[0x6c] = 0x3f;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  *(undefined1 *)((int)in_ECX + 0xf5) = 1;
  in_ECX[0x36] = 0;
  *(undefined1 *)(in_ECX + 0x3d) = 0;
  *(undefined1 *)(in_ECX + 0x3f) = 0;
  *(undefined1 *)(in_ECX + 0x41) = 0;
  in_ECX[0x42] = DAT_00b3f9a8;
  in_ECX[0x43] = DAT_00b3f9ac;
  in_ECX[0x44] = DAT_00b3f9b0;
  *(undefined2 *)(in_ECX + 0x46) = 0;
  puVar1 = (undefined4 *)in_ECX[0x3e];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x3e] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x40];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x40] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x47];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x47] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x45];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x45] = 0;
  }
  in_ECX[0x12] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xb] = 0;
  in_ECX[10] = 0;
  in_ECX[8] = 0;
  in_ECX[7] = 0;
  in_ECX[6] = 0;
  in_ECX[5] = 0;
  in_ECX[0x13] = 0x3f800000;
  in_ECX[0xe] = 0x3f800000;
  in_ECX[9] = 0x3f800000;
  in_ECX[4] = 0x3f800000;
  *(undefined1 *)((int)in_ECX + 0xf5) = 0;
  in_ECX[0x49] = 0x42b40000;
  *(undefined1 *)(in_ECX + 0x48) = 0;
  *(undefined1 *)(in_ECX + 0x4b) = 0;
  in_ECX[0x4a] = 0x3f800000;
  puVar1 = (undefined4 *)in_ECX[0x4c];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x4c] = 0;
  }
  in_ECX[0x51] = 0;
  puVar1 = (undefined4 *)in_ECX[0x52];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x52] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x53];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x53] = 0;
  }
  in_ECX[0x38] = 0;
  in_ECX[0x37] = 0x3f800000;
  *(undefined1 *)(in_ECX + 0x85) = 0;
  _memset(in_ECX + 0x6d,0,0x60);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007d6370(byte param_1)

{
  FUN_007d54b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007d6390(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  LONG LVar6;
  int in_ECX;
  byte bVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  float10 fVar11;
  float local_a4;
  float local_a0;
  uint local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64 [24];
  uint local_4;
  
  FUN_007b7650();
  if (DAT_00b42cdb != '\0') {
    return;
  }
  iVar5 = *(int *)(in_ECX + 0x100);
  local_90 = *(float *)(iVar5 + 0x88);
  local_84 = *(float *)(iVar5 + 0xf8);
  cVar4 = *(char *)(in_ECX + 0xf4);
  local_8c = *(float *)(iVar5 + 0x8c);
  local_88 = *(float *)(iVar5 + 0x90);
  local_98 = 0;
  local_98._0_2_ = 0;
  bVar3 = true;
  if ((cVar4 == '\0') || (*(int *)(in_ECX + 0x14c) == 0)) {
    pfVar8 = (float *)(param_1 + 0x2c);
    pfVar10 = local_64;
    for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar10 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar10 = pfVar10 + 1;
    }
    uVar9 = 0;
    pfVar8 = local_64;
    do {
      if ((local_4 & 1 << ((byte)uVar9 & 0x1f)) != 0) {
        local_7c = pfVar8[1];
        local_80 = *pfVar8;
        local_78 = pfVar8[2];
        local_74 = pfVar8[3];
        iVar5 = FUN_0047da70(&local_80);
        if (iVar5 == 2) {
          local_98._0_2_ = 0xff;
          goto LAB_007d6539;
        }
        iVar5 = FUN_007415e0(&local_90);
        if (iVar5 == 2) {
          bVar3 = false;
        }
      }
      fVar2 = local_84;
      uVar9 = uVar9 + 1;
      pfVar8 = pfVar8 + 4;
    } while (uVar9 < 6);
    if ((((!bVar3) && (cVar4 != '\0')) && (2 < DAT_00b42f48)) &&
       ((((byte)DAT_00b42f40 & 0x10) != 0 && (*(char *)(in_ECX + 0xf5) != '\0')))) {
      iVar5 = 0;
      bVar7 = 0;
      do {
        cVar4 = FUN_007d5b20(local_90,local_8c,local_88,fVar2,param_1,iVar5);
        if (cVar4 == '\0') {
          local_98 = local_98 | 1 << (bVar7 & 0x1f);
        }
        iVar5 = iVar5 + 1;
        bVar7 = bVar7 + 1;
      } while ((ushort)iVar5 < 6);
    }
  }
  else {
    cVar4 = FUN_007d34c0(*(undefined4 *)(param_1 + 0xc),*(int *)(in_ECX + 0x14c));
    local_98._0_2_ = (-(ushort)(cVar4 != '\0') & 0xff01) + 0xff;
  }
LAB_007d6539:
  local_94 = *(float *)(in_ECX + 0xd4);
  local_a0 = *(float *)(in_ECX + 0xd8);
  if ((short)local_98 != 0xff) {
    iVar5 = *(int *)(param_1 + 0xc);
    local_70 = *(float *)(iVar5 + 0x88);
    local_6c = *(float *)(iVar5 + 0x8c);
    local_68 = *(float *)(iVar5 + 0x90);
    local_80 = local_90 - local_70;
    local_7c = local_8c - local_6c;
    local_78 = local_88 - local_68;
    fVar11 = (float10)FUN_00982c30();
    fVar2 = (float)fVar11 - local_84;
    if ((fVar2 < _DAT_00b4307c) || (_DAT_00b43080 == 0.0)) {
      local_94 = 1.0;
LAB_007d66c8:
      if (*(char *)(in_ECX + 0xf4) != '\0') {
        if ((fVar2 < _DAT_00b43084) || (_DAT_00b43088 == 0.0)) {
          local_a0 = 1.0;
        }
        else if (_DAT_00b43088 < fVar2) {
          local_a0 = 0.0;
        }
        else {
          local_a0 = 1.0 - (fVar2 - _DAT_00b43084) / (_DAT_00b43088 - _DAT_00b43084);
        }
      }
    }
    else if (fVar2 <= _DAT_00b43080) {
      local_94 = 1.0 - (fVar2 - _DAT_00b4307c) / (_DAT_00b43080 - _DAT_00b4307c);
      if (0.0 < local_94) goto LAB_007d66c8;
    }
    else {
      local_98._0_2_ = 0xff;
      local_94 = 0.0;
      local_a0 = 0.0;
    }
    if ((*(int *)(in_ECX + 0x130) != 0) && (iVar5 = FUN_00707530(2), iVar5 != 0)) {
      local_a0 = *(float *)(iVar5 + 0x50) * local_a0;
    }
    if (DAT_00b42d78 == (code *)0x0) {
      local_a4 = 0.0;
    }
    else {
      fVar11 = (float10)(*DAT_00b42d78)(1,1);
      local_a4 = (float)fVar11;
    }
    fVar2 = 1.0;
    local_a4 = *(float *)(in_ECX + 0xe0) + local_a4;
    *(float *)(in_ECX + 0xe0) = local_a4;
    if (local_a4 / _DAT_00b2c680 <= 1.0) {
      fVar2 = local_a4 / _DAT_00b2c680;
    }
    if (*(float *)(in_ECX + 0xdc) == 0.0) {
      fVar2 = 1.0 - fVar2;
    }
    local_a0 = local_a0 * fVar2;
  }
  if (*(short *)(in_ECX + 0x118) == 0xff) {
    if ((short)local_98 == 0xff) {
LAB_007d67ca:
      if (((((*(float *)(in_ECX + 0xd4) != 0.0) || (local_94 <= 1.0)) &&
           ((*(float *)(in_ECX + 0xd4) <= 0.0 || (local_94 != 0.0)))) &&
          ((*(float *)(in_ECX + 0xd8) != 0.0 || (local_a0 <= 0.0)))) &&
         ((*(float *)(in_ECX + 0xd8) <= 0.0 || (local_a0 != 0.0)))) goto LAB_007d68c6;
    }
  }
  else if ((short)local_98 != 0xff) goto LAB_007d67ca;
  puVar1 = *(undefined4 **)(in_ECX + 0xe8);
  while (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar1;
    iVar5 = FUN_00707530(4);
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 0x24) = 0;
    }
  }
  if ((*(float *)(in_ECX + 0xd8) == 0.0) && (*(int *)(in_ECX + 0x114) != 0)) {
    FUN_007c1a30(*(int *)(in_ECX + 0x114));
    puVar1 = *(undefined4 **)(in_ECX + 0x114);
    if (puVar1 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar1 + 1);
      if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(in_ECX + 0x114) = 0;
    }
  }
LAB_007d68c6:
  *(float *)(in_ECX + 0xd4) = local_94;
  *(short *)(in_ECX + 0x118) = (short)local_98;
  *(float *)(in_ECX + 0xd8) = local_a0;
  return;
}



void FUN_007d6900(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 8))();
    if (((iVar1 != 0) && ((*(byte *)(param_1 + 6) & 1) == 0)) && (*(float *)(iVar1 + 0x2c) != 0.0))
    {
      FUN_007d59e0(iVar1);
    }
  }
  return;
}



void FUN_007d6940(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  LONG LVar6;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar2 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cf808;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puStack_10 = in_ECX;
  piVar4 = (int *)FUN_00707530(4);
  if (piVar4 == (int *)0x0) goto LAB_007d69ae;
  iVar5 = (**(code **)(*piVar4 + 0x54))(uVar3);
  if (iVar5 < 1) {
LAB_007d699c:
    bVar1 = 0;
  }
  else {
    iVar5 = (**(code **)(*piVar4 + 0x54))();
    if (10 < iVar5) goto LAB_007d699c;
    bVar1 = 1;
  }
  if ((-(uint)bVar1 & (uint)piVar4) != 0) {
    FUN_007ee720(in_ECX);
  }
LAB_007d69ae:
  param_1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar2 + 1);
  }
  uStack_4 = 0;
  FUN_007d5f80(&puStack_10,&param_1);
  if (puStack_10 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puStack_10 + 1);
    if ((LVar6 == 0) && (puStack_10 != (undefined4 *)0x0)) {
      (**(code **)*puStack_10)(1);
    }
  }
  puVar2 = param_1;
  uStack_4 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(param_1 + 1);
    if (LVar6 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007d6a40(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  puVar2 = *(undefined4 **)(in_ECX + 0x144);
  while (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    if (*piVar1 != 0) {
      FUN_007d6940(*piVar1);
    }
  }
  *(undefined4 *)(in_ECX + 0x144) = 0;
  return;
}



uint FUN_007d6a80(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *in_ECX;
  
  if (((in_ECX[0x80] != 1) && (in_ECX[0x81] != 1)) || ((char)in_ECX[0x83] != '\0')) {
    return 0;
  }
  if (param_1 == 0) {
    uVar1 = FUN_0060d0a0(
                        "NiRenderer::BeginUsingRenderTargetGroup> Failed - NULL pointer for render target. Call BeginUsingDefaultRenderTargetGroup if you intended to use the backbuffer instead."
                        );
    return uVar1 & 0xffffff00;
  }
  FUN_00763f60();
  uVar1 = (**(code **)(*in_ECX + 0x148))(param_1,param_2);
  if ((char)uVar1 != '\0') {
    *(undefined1 *)(in_ECX + 0x83) = 1;
    return uVar1;
  }
  uVar1 = FUN_00763fa0();
  return uVar1 & 0xffffff00;
}



undefined4 FUN_007d6b00(void)

{
  int *piVar1;
  char cVar2;
  int *in_ECX;
  
  if (((in_ECX[0x80] == 1) || (in_ECX[0x81] == 1)) && ((char)in_ECX[0x83] == '\x01')) {
    cVar2 = (**(code **)(*in_ECX + 0x14c))();
    if (cVar2 != '\0') {
      if (in_ECX[0x3f] == 1) {
        (**(code **)(*in_ECX + 300))();
      }
      piVar1 = in_ECX + 0x3f;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        in_ECX[0x3e] = 0;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x20));
      *(undefined1 *)(in_ECX + 0x83) = 0;
      return 1;
    }
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x007d6ba8) */
/* WARNING: Removing unreachable block (ram,0x007d6bb6) */

undefined4 FUN_007d6b70(void)

{
  undefined4 *puVar1;
  undefined4 local_4;
  
  local_4 = 0;
  if (DAT_00b45d74 == 0) {
    local_4 = 0;
    puVar1 = &local_4;
  }
  else {
    puVar1 = &DAT_00b45d74 + DAT_00b45d74;
  }
  return *puVar1;
}



/* WARNING: Removing unreachable block (ram,0x007d6c50) */
/* WARNING: Removing unreachable block (ram,0x007d6c5e) */
/* WARNING: Removing unreachable block (ram,0x007d6c62) */

void FUN_007d6bd0(int *param_1,char param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  LONG LVar6;
  undefined4 *puVar7;
  undefined4 *in_ECX;
  int iVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  bool bVar10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ced29;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  piVar9 = in_ECX + 2;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a91370;
  _eh_vector_constructor_iterator_(piVar9,4,6,FUN_007c88a0,FUN_007016a0);
  in_ECX[8] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if ((param_1 != (int *)0x0) && (in_ECX[8] = param_1, param_1 != (int *)0x0)) {
    InterlockedIncrement(param_1 + 1);
  }
  bVar10 = param_2 != '\0';
  _param_2 = 0;
  if (bVar10) {
    if (param_1 != (int *)0x0) {
      for (puVar3 = (undefined *)(**(code **)(*param_1 + 4))(uVar2); puVar3 != (undefined *)0x0;
          puVar3 = *(undefined **)(puVar3 + 4)) {
        if (puVar3 == &DAT_00baa880) {
          iVar8 = param_1[0x11];
          if (((param_3 == 0) || (*(uint *)(param_3 + 8) < *(uint *)(iVar8 + 8))) ||
             (*(uint *)(param_3 + 0xc) < *(uint *)(iVar8 + 0xc))) {
            _param_2 = FUN_0070be00(iVar8,DAT_00b43104);
          }
          else {
            _param_2 = param_3;
          }
          goto LAB_007d6d25;
        }
      }
    }
    if (((param_3 == 0) ||
        (uVar2 = *(uint *)(param_3 + 8), uVar4 = (**(code **)(*param_1 + 0x4c))(), uVar2 < uVar4))
       || (uVar2 = *(uint *)(param_3 + 0xc), uVar4 = (**(code **)(*param_1 + 0x50))(),
          _param_2 = param_3, uVar2 < uVar4)) {
      uVar5 = (**(code **)(*param_1 + 0x54))(DAT_00b43104);
      _param_2 = FUN_0070be00(uVar5);
    }
  }
LAB_007d6d25:
  if (param_1 != (int *)0x0) {
    for (puVar3 = (undefined *)(**(code **)(*param_1 + 4))(); puVar3 != (undefined *)0x0;
        puVar3 = *(undefined **)(puVar3 + 4)) {
      if (puVar3 == &DAT_00baa880) {
        param_1 = param_1 + 0x11;
        param_3 = 6;
        do {
          puVar7 = (undefined4 *)FUN_009a21d0(*param_1,DAT_00b3f928,_param_2);
          puVar1 = (undefined4 *)*piVar9;
          if (puVar1 != puVar7) {
            if (((puVar1 != (undefined4 *)0x0) &&
                (LVar6 = InterlockedDecrement(puVar1 + 1), LVar6 == 0)) &&
               (puVar1 != (undefined4 *)0x0)) {
              (**(code **)*puVar1)(1);
            }
            *piVar9 = (int)puVar7;
            if (puVar7 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar7 + 1);
            }
          }
          param_1 = param_1 + 1;
          piVar9 = piVar9 + 1;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
        goto LAB_007d6e22;
      }
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x54))(DAT_00b3f928,_param_2);
  uVar5 = FUN_009a21d0(uVar5);
  FUN_0075fa90(uVar5);
  piVar9 = in_ECX + 3;
  iVar8 = 5;
  do {
    puVar1 = (undefined4 *)*piVar9;
    if (puVar1 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar1 + 1);
      if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar9 = 0;
    }
    piVar9 = piVar9 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
LAB_007d6e22:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007d6e40(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ced79;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a91370;
  local_4 = 2;
  piVar5 = in_ECX + 2;
  iVar4 = 6;
  do {
    puVar1 = (undefined4 *)*piVar5;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar2);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar1 = (undefined4 *)in_ECX[8];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[8] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[8];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 2,4,6,FUN_007016a0);
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4
FUN_007d6f40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0072a9b0(param_1,param_2,DAT_00b43104,param_3,uVar1);
  if (iVar2 != 0) {
    iVar3 = FUN_00401f00(0x24);
    local_4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_007d6bd0(iVar2,param_4,param_5);
      *unaff_FS_OFFSET = local_c;
      return uVar4;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 FUN_007d6fe0(void)

{
  undefined *puVar1;
  int iVar2;
  int in_ECX;
  
  if (in_ECX == 0) {
    return 0;
  }
  if (*(int **)(in_ECX + 0x20) != (int *)0x0) {
    for (puVar1 = (undefined *)(**(code **)(**(int **)(in_ECX + 0x20) + 4))();
        puVar1 != (undefined *)0x0; puVar1 = *(undefined **)(puVar1 + 4)) {
      if (puVar1 == &DAT_00baa880) {
        iVar2 = FUN_00560920(&DAT_00baa880,*(undefined4 *)(in_ECX + 0x20));
        return *(undefined4 *)(in_ECX + 8 + *(int *)(iVar2 + 0x40) * 4);
      }
    }
  }
  return *(undefined4 *)(in_ECX + 8);
}



void FUN_007d7030(void)

{
  int iVar1;
  undefined4 *puVar2;
  LONG LVar3;
  
  if (DAT_00b45d74 != 0) {
    DAT_00b45d74 = DAT_00b45d74 + -1;
    puVar2 = *(undefined4 **)(&DAT_00b45d78 + DAT_00b45d74 * 4);
    iVar1 = DAT_00b45d74 * 4;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)(&DAT_00b45d78 + iVar1) = 0;
    }
  }
  return;
}



void FUN_007d7080(byte param_1)

{
  FUN_007d6e40();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007d70a0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00b3f928;
  if (param_1 == 0) {
    param_1 = (**(code **)(*DAT_00b3f928 + 0x7c))();
  }
  if ((char)piVar1[0x83] != '\0') {
    FUN_007d6b00();
  }
  iVar2 = param_1;
  if (param_1 == 0) {
    iVar2 = (**(code **)(*DAT_00b3f928 + 0x7c))();
  }
  FUN_007d6a80(iVar2,param_2);
  if (DAT_00b45d74 < 10) {
    FUN_0075fa90(param_1);
    DAT_00b45d74 = DAT_00b45d74 + 1;
  }
  return;
}



void FUN_007d7110(void)

{
  int iVar1;
  
  if (DAT_00b45d74 != 0) {
    FUN_007d6b00();
    FUN_007d7030();
    iVar1 = FUN_007d6b70();
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*DAT_00b3f928 + 0x7c))();
    }
    FUN_007d6a80(iVar1,0);
  }
  return;
}



void FUN_007d7150(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  
  iVar3 = DAT_00b45d74;
  while (iVar3 != 0) {
    DAT_00b45d74 = iVar3 + -1;
    puVar2 = *(undefined4 **)(&DAT_00b45d78 + DAT_00b45d74 * 4);
    iVar1 = DAT_00b45d74 * 4;
    iVar3 = DAT_00b45d74;
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      iVar3 = DAT_00b45d74;
      *(undefined4 *)(&DAT_00b45d78 + iVar1) = 0;
    }
  }
  if (*(char *)(DAT_00b3f928 + 0x20c) == '\0') {
    return;
  }
  FUN_007d6b00();
  return;
}



void FUN_007d71c0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = DAT_00b3f928 + 0x80;
  if ((DAT_00b3f928[0x80] == 0) && (DAT_00b3f928[0x81] == 0)) {
    cVar2 = (**(code **)(*DAT_00b3f928 + 0x130))();
    if (cVar2 != '\0') {
      *piVar1 = 1;
    }
  }
  FUN_007d70a0(param_2,param_1);
  return;
}



void FUN_007d7210(void)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = DAT_00b3f928;
  FUN_007d7150();
  if ((piVar1[0x80] == 1) && (piVar1[0x81] == 0)) {
    cVar2 = (**(code **)(*piVar1 + 0x134))();
    if (cVar2 != '\0') {
      piVar1[0x80] = 2;
    }
  }
  if ((piVar1[0x80] == 2) && (piVar1[0x81] == 0)) {
    cVar2 = (**(code **)(*piVar1 + 0x138))();
    if (cVar2 != '\0') {
      piVar1[0x82] = piVar1[0x82] + 1;
      piVar1[0x80] = 0;
    }
  }
  return;
}



void FUN_007d7280(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = DAT_00b3f928 + 0x81;
  if ((DAT_00b3f928[0x81] == 0) && (DAT_00b3f928[0x80] == 0)) {
    cVar2 = (**(code **)(*DAT_00b3f928 + 0x130))();
    if (cVar2 != '\0') {
      *piVar1 = 1;
    }
  }
  FUN_007d70a0(param_2,param_1);
  return;
}



void FUN_007d72d0(void)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = DAT_00b3f928;
  FUN_007d7150();
  if ((piVar1[0x81] == 1) && (piVar1[0x80] == 0)) {
    cVar2 = (**(code **)(*piVar1 + 0x134))();
    if (cVar2 != '\0') {
      piVar1[0x81] = 0;
    }
  }
  return;
}



void FUN_007d7310(undefined1 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *(undefined1 *)(in_ECX + 2) = param_1;
  *in_ECX = &PTR_FUN_00a91378;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}



void FUN_007d7350(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a91378;
  if ((*(char *)(in_ECX + 2) != '\0') && (in_ECX[3] != 0)) {
    FUN_00401f20(in_ECX[3]);
  }
  in_ECX[3] = 0;
  if ((*(char *)(in_ECX + 2) != '\0') && (in_ECX[4] != 0)) {
    FUN_00401f20(in_ECX[4]);
  }
  in_ECX[4] = 0;
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  return;
}



void FUN_007d7400(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                 undefined1 param_9)

{
  int in_ECX;
  
  if (*(short *)(in_ECX + 0xb8) == 9) {
    **(undefined1 **)(in_ECX + 200) = param_1;
    *(undefined1 *)(*(int *)(in_ECX + 200) + 1) = param_2;
    *(undefined1 *)(*(int *)(in_ECX + 200) + 2) = param_3;
    *(undefined1 *)(*(int *)(in_ECX + 200) + 3) = param_4;
    *(undefined1 *)(*(int *)(in_ECX + 200) + 4) = param_5;
    *(undefined1 *)(*(int *)(in_ECX + 200) + 5) = param_6;
    *(undefined1 *)(*(int *)(in_ECX + 200) + 6) = param_7;
    *(undefined1 *)(*(int *)(in_ECX + 200) + 7) = param_8;
    *(undefined1 *)(*(int *)(in_ECX + 200) + 8) = param_9;
  }
  return;
}



void FUN_007d7490(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  LONG LVar6;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_14;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cedc4;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a91384;
  local_4 = 2;
  if (in_ECX[0x2f] != 0) {
    local_14 = 0;
    if (*(short *)(in_ECX + 0x2e) != 0) {
      do {
        iVar2 = in_ECX[0x2f];
        iVar1 = local_14 * 4;
        puVar3 = *(undefined4 **)(iVar2 + iVar1);
        if (puVar3 != (undefined4 *)0x0) {
          LVar6 = InterlockedDecrement(puVar3 + 1);
          if ((LVar6 == 0) && (puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(1);
          }
          *(undefined4 *)(iVar2 + iVar1) = 0;
        }
        iVar2 = in_ECX[0x30];
        puVar3 = *(undefined4 **)(iVar2 + iVar1);
        if (puVar3 != (undefined4 *)0x0) {
          LVar6 = InterlockedDecrement(puVar3 + 1);
          if ((LVar6 == 0) && (puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(1);
          }
          *(undefined4 *)(iVar2 + iVar1) = 0;
        }
        iVar2 = in_ECX[0x31];
        puVar3 = *(undefined4 **)(iVar2 + iVar1);
        if (puVar3 != (undefined4 *)0x0) {
          LVar6 = InterlockedDecrement(puVar3 + 1);
          if ((LVar6 == 0) && (puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(1);
          }
          *(undefined4 *)(iVar2 + iVar1) = 0;
        }
        local_14 = local_14 + 1;
      } while (local_14 < (int)(uint)*(ushort *)(in_ECX + 0x2e));
    }
    pvVar4 = (void *)in_ECX[0x2f];
    if (pvVar4 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar4,4,*(int *)((int)pvVar4 + -4),FUN_007016a0);
      FUN_00401f20((int)pvVar4 + -4);
    }
    pvVar4 = (void *)in_ECX[0x30];
    if (pvVar4 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar4,4,*(int *)((int)pvVar4 + -4),FUN_007016a0);
      FUN_00401f20((int)pvVar4 + -4);
    }
    pvVar4 = (void *)in_ECX[0x31];
    if (pvVar4 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar4,4,*(int *)((int)pvVar4 + -4),FUN_007016a0);
      FUN_00401f20((int)pvVar4 + -4);
    }
    FUN_00401f20(in_ECX[0x34],uVar5);
    FUN_00401f20(in_ECX[0x32]);
  }
  puVar3 = (undefined4 *)in_ECX[0x38];
  if (puVar3 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar3 + 1);
    if ((LVar6 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    in_ECX[0x38] = 0;
  }
  in_ECX[0x36] = 0;
  in_ECX[0x3a] = 0;
  puVar3 = (undefined4 *)in_ECX[0x35];
  if (puVar3 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar3 + 1);
    if ((LVar6 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    in_ECX[0x35] = 0;
  }
  puVar3 = (undefined4 *)in_ECX[0x38];
  local_4._0_1_ = 1;
  if (((puVar3 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar3 + 1), LVar6 == 0)) &&
     (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  puVar3 = (undefined4 *)in_ECX[0x35];
  local_4 = (uint)local_4._1_3_ << 8;
  if (((puVar3 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar3 + 1), LVar6 == 0)) &&
     (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  local_4 = 0xffffffff;
  FUN_007ee4f0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007d7880(byte param_1)

{
  FUN_007d7350();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007d78a0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7c3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a91428;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  local_4 = 1;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[2] = 0;
  }
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x17] = 2;
  in_ECX[0x13] = 0;
  in_ECX[0x18] = 1;
  in_ECX[0x14] = 0;
  in_ECX[0x19] = 1;
  in_ECX[0x15] = 0;
  in_ECX[0x1a] = 3;
  in_ECX[0x16] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007d79c0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ca7c3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a91428;
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[2] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007d7a70(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xe0);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xe0) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  return;
}



void FUN_007d7ad0(int param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 uVar9;
  LONG LVar10;
  int in_ECX;
  uint *puVar11;
  int *piVar12;
  int *piVar13;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar6 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cee01;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  thunk_FUN_007e2490(param_1,param_2);
  if (*(short *)(param_1 + 0xb8) != *(short *)(in_ECX + 0xb8)) {
    pvVar2 = *(void **)(param_1 + 0xbc);
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar2,4,*(int *)((int)pvVar2 + -4),FUN_007016a0);
      FUN_00401f20((int)pvVar2 + -4,uVar7);
    }
    pvVar2 = *(void **)(param_1 + 0xc0);
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar2,4,*(int *)((int)pvVar2 + -4),FUN_007016a0);
      FUN_00401f20((int)pvVar2 + -4,uVar7);
    }
    pvVar2 = *(void **)(param_1 + 0xc4);
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar2,4,*(int *)((int)pvVar2 + -4),FUN_007016a0);
      FUN_00401f20((int)pvVar2 + -4,uVar7);
    }
    FUN_00401f20(*(undefined4 *)(param_1 + 0xd0),uVar7);
    FUN_00401f20(*(undefined4 *)(param_1 + 200));
    uVar7 = (uint)*(ushort *)(in_ECX + 0xb8);
    puVar8 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar7 * 4) | uVar7 * 4 + 4);
    puVar11 = (uint *)0x0;
    local_4 = 0;
    if (puVar8 != (uint *)0x0) {
      puVar11 = puVar8 + 1;
      *puVar8 = uVar7;
      _eh_vector_constructor_iterator_(puVar11,4,uVar7,FUN_007c88a0,FUN_007016a0);
    }
    *(uint **)(param_1 + 0xbc) = puVar11;
    uVar7 = (uint)*(ushort *)(in_ECX + 0xb8);
    local_4 = 0xffffffff;
    puVar11 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar7 * 4) | uVar7 * 4 + 4);
    local_4 = 1;
    if (puVar11 == (uint *)0x0) {
      puVar8 = (uint *)0x0;
    }
    else {
      puVar8 = puVar11 + 1;
      *puVar11 = uVar7;
      _eh_vector_constructor_iterator_(puVar8,4,uVar7,FUN_007c88a0,FUN_007016a0);
    }
    *(uint **)(param_1 + 0xc0) = puVar8;
    uVar7 = (uint)*(ushort *)(in_ECX + 0xb8);
    local_4 = 0xffffffff;
    puVar11 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar7 * 4) | uVar7 * 4 + 4);
    local_4 = 2;
    if (puVar11 == (uint *)0x0) {
      puVar8 = (uint *)0x0;
    }
    else {
      puVar8 = puVar11 + 1;
      *puVar11 = uVar7;
      _eh_vector_constructor_iterator_(puVar8,4,uVar7,FUN_007c88a0,FUN_007016a0);
    }
    *(uint **)(param_1 + 0xc4) = puVar8;
    local_4 = 0xffffffff;
    uVar9 = FUN_00401f00(*(undefined2 *)(in_ECX + 0xb8));
    *(undefined4 *)(param_1 + 0xd0) = uVar9;
    uVar9 = FUN_00401f00(*(undefined2 *)(in_ECX + 0xb8));
    *(undefined4 *)(param_1 + 200) = uVar9;
    *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(in_ECX + 0xb8);
  }
  param_1 = 0;
  if (*(short *)(in_ECX + 0xb8) != 0) {
    do {
      iVar1 = param_1 * 4;
      iVar3 = *(int *)(iVar6 + 0xbc);
      puVar4 = *(undefined4 **)(iVar3 + iVar1);
      piVar12 = (int *)(*(int *)(in_ECX + 0xbc) + iVar1);
      if (puVar4 != (undefined4 *)*piVar12) {
        if (((puVar4 != (undefined4 *)0x0) &&
            (LVar10 = InterlockedDecrement(puVar4 + 1), LVar10 == 0)) &&
           (puVar4 != (undefined4 *)0x0)) {
          (**(code **)*puVar4)(1);
        }
        iVar5 = *piVar12;
        *(int *)(iVar3 + iVar1) = iVar5;
        if (iVar5 != 0) {
          InterlockedIncrement((LONG *)(iVar5 + 4));
        }
      }
      iVar3 = *(int *)(iVar6 + 0xc0);
      puVar4 = *(undefined4 **)(iVar3 + iVar1);
      piVar12 = (int *)(*(int *)(in_ECX + 0xc0) + iVar1);
      if (puVar4 != (undefined4 *)*piVar12) {
        if (((puVar4 != (undefined4 *)0x0) &&
            (LVar10 = InterlockedDecrement(puVar4 + 1), LVar10 == 0)) &&
           (puVar4 != (undefined4 *)0x0)) {
          (**(code **)*puVar4)(1);
        }
        iVar5 = *piVar12;
        *(int *)(iVar3 + iVar1) = iVar5;
        if (iVar5 != 0) {
          InterlockedIncrement((LONG *)(iVar5 + 4));
        }
      }
      piVar12 = (int *)(*(int *)(iVar6 + 0xc4) + iVar1);
      piVar13 = (int *)(*(int *)(in_ECX + 0xc4) + iVar1);
      puVar4 = (undefined4 *)*piVar12;
      if (puVar4 != (undefined4 *)*piVar13) {
        if (((puVar4 != (undefined4 *)0x0) &&
            (LVar10 = InterlockedDecrement(puVar4 + 1), LVar10 == 0)) &&
           (puVar4 != (undefined4 *)0x0)) {
          (**(code **)*puVar4)(1);
        }
        iVar1 = *piVar13;
        *piVar12 = iVar1;
        if (iVar1 != 0) {
          InterlockedIncrement((LONG *)(iVar1 + 4));
        }
      }
      *(undefined1 *)(param_1 + *(int *)(iVar6 + 0xd0)) =
           *(undefined1 *)(param_1 + *(int *)(in_ECX + 0xd0));
      *(undefined1 *)(param_1 + *(int *)(iVar6 + 200)) =
           *(undefined1 *)(param_1 + *(int *)(in_ECX + 200));
      param_1 = param_1 + 1;
    } while (param_1 < (int)(uint)*(ushort *)(in_ECX + 0xb8));
  }
  puVar4 = *(undefined4 **)(iVar6 + 0xd4);
  if (puVar4 != *(undefined4 **)(in_ECX + 0xd4)) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar10 = InterlockedDecrement(puVar4 + 1), LVar10 == 0))
       && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    iVar1 = *(int *)(in_ECX + 0xd4);
    *(int *)(iVar6 + 0xd4) = iVar1;
    if (iVar1 != 0) {
      InterlockedIncrement((LONG *)(iVar1 + 4));
    }
  }
  *(undefined2 *)(iVar6 + 0xcc) = *(undefined2 *)(in_ECX + 0xcc);
  *(undefined4 *)(iVar6 + 0xdc) = *(undefined4 *)(in_ECX + 0xdc);
  puVar4 = *(undefined4 **)(iVar6 + 0xe0);
  if (puVar4 != *(undefined4 **)(in_ECX + 0xe0)) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar10 = InterlockedDecrement(puVar4 + 1), LVar10 == 0))
       && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    iVar1 = *(int *)(in_ECX + 0xe0);
    *(int *)(iVar6 + 0xe0) = iVar1;
    if (iVar1 != 0) {
      InterlockedIncrement((LONG *)(iVar1 + 4));
    }
  }
  *(undefined1 *)(iVar6 + 0xe4) = *(undefined1 *)(in_ECX + 0xe4);
  *(undefined4 *)(iVar6 + 0xe8) = *(undefined4 *)(in_ECX + 0xe8);
  *(undefined4 *)(iVar6 + 0xec) = *(undefined4 *)(in_ECX + 0xec);
  *(undefined4 *)(iVar6 + 0xd8) = *(undefined4 *)(in_ECX + 0xd8);
  *(undefined4 *)(iVar6 + 0xa8) = *(undefined4 *)(in_ECX + 0xa8);
  *(undefined4 *)(iVar6 + 0xac) = *(undefined4 *)(in_ECX + 0xac);
  *(undefined4 *)(iVar6 + 0xb0) = *(undefined4 *)(in_ECX + 0xb0);
  *(undefined4 *)(iVar6 + 0xb4) = *(undefined4 *)(in_ECX + 0xb4);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_007d7f80(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  undefined4 uVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int local_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b8ceb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = 0;
  local_18 = 0;
  uVar6 = (uint)*(ushort *)(*(int *)(param_1 + 0xb4) + 8);
  iVar3 = FUN_00401f00(0x2c,uVar2);
  local_4 = 0;
  if (iVar3 != 0) {
    uVar5 = FUN_004c14d0(uVar6);
  }
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_18 = FUN_006ff9c0("tex %");
  }
  iVar3 = *(int *)(in_ECX + 0xd4);
  uVar2 = 0;
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) && (*(int *)(iVar3 + 0x10) != 0)) {
    uVar2 = 2;
  }
  if (local_18 != 0) {
    uVar2 = uVar2 + 2;
  }
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) && (*(int *)(iVar3 + 0x10) != 0)) {
    uVar4 = uVar2 - 1;
    if (uVar2 < 3) {
      uVar4 = uVar2;
    }
    FUN_007263b0(uVar4);
    FUN_00726b80(uVar2);
    FUN_007260b0(0,*(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0xc),uVar6 * 0xc,0);
    FUN_007262a0(0,0,0,3,uVar6,0xc,0xc);
    FUN_007260b0(1,*(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0x10),uVar6 * 0xc,0);
    FUN_007262a0(1,1,0,3,uVar6,0xc,0xc);
  }
  if (local_18 != 0) {
    iVar3 = *(int *)(local_18 + 0xc);
    *(int *)(in_ECX + 0xd8) = iVar3;
    if (iVar3 == 0) {
      *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xffffbfff;
    }
    else {
      *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x4000;
    }
    *(undefined4 *)(in_ECX + 0x24) = 0;
    iVar1 = uVar2 - 1;
    FUN_007260b0(iVar1,iVar3,uVar6 << 5,0);
    FUN_007262a0(uVar2 - 2,iVar1,0,4,uVar6,0x10,0x20);
    FUN_007262a0(iVar1,iVar1,0x10,4,uVar6,0x10,0x20);
    *(undefined4 *)(local_18 + 0x10) = 0;
    *(undefined4 *)(local_18 + 0xc) = 0;
    FUN_006ffac0("tex %");
  }
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_007d8160(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  LONG LVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *in_ECX;
  code *pcVar10;
  int *unaff_FS_OFFSET;
  bool bVar11;
  undefined4 *local_120;
  undefined4 local_11c;
  undefined4 *puStack_118;
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cee4c;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_120;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffed0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_11c = param_1;
  FUN_007b4160(local_114,param_1,&DAT_00a3cf00,uVar4);
  if (local_114[0] != '\0') {
    uVar5 = FUN_007b8200(&local_120,local_114,param_2,1);
    local_4 = 0;
    FUN_0055e2a0(uVar5);
    puVar2 = local_120;
    local_4 = 0xffffffff;
    if (((local_120 != (undefined4 *)0x0) &&
        (LVar6 = InterlockedDecrement(local_120 + 1), LVar6 == 0)) && (puVar2 != (undefined4 *)0x0))
    {
      (**(code **)*puVar2)(1);
    }
  }
  pcVar10 = InterlockedDecrement_exref;
  if ((param_3 != 0) &&
     (FUN_007b4160(local_114,param_3,&DAT_00a3cf00,uVar4), pcVar10 = InterlockedDecrement_exref,
     local_114[0] != '\0')) {
    uVar5 = FUN_007b8200(&local_120,local_114,param_2,1);
    local_4 = 1;
    FUN_0055e2a0(uVar5);
    puVar2 = local_120;
    pcVar10 = InterlockedDecrement_exref;
    local_4 = 0xffffffff;
    if ((local_120 != (undefined4 *)0x0) &&
       ((LVar6 = InterlockedDecrement(local_120 + 1), LVar6 == 0 && (puVar2 != (undefined4 *)0x0))))
    {
      (**(code **)*puVar2)(1);
    }
  }
  FUN_007b4160(local_114,local_11c,&DAT_00a7d0e0,uVar4);
  if (local_114[0] != '\0') {
    FUN_007b8200(&local_120,local_114,param_2,1);
    local_4 = 2;
    (**(code **)(*in_ECX + 0x94))(0,local_120);
    local_4 = 0xffffffff;
    if (((local_120 != (undefined4 *)0x0) && (iVar7 = (*pcVar10)(local_120 + 1), iVar7 == 0)) &&
       (local_120 != (undefined4 *)0x0)) {
      (**(code **)*local_120)(1);
    }
  }
  if (((in_ECX[7] & 0x40000U) != 0) &&
     (FUN_007b4160(local_114,local_11c,&DAT_00a7d0e8), local_114[0] != '\0')) {
    FUN_007b8200(&puStack_118,local_114,param_2,1);
    local_4 = 3;
    (**(code **)(*in_ECX + 0x80))(1,puStack_118);
    local_4 = 0xffffffff;
    if ((puStack_118 != (undefined4 *)0x0) &&
       ((iVar7 = (*pcVar10)(puStack_118 + 1), iVar7 == 0 && (puStack_118 != (undefined4 *)0x0)))) {
      (**(code **)*puStack_118)(1);
    }
  }
  if ((in_ECX[7] & 0x20000U) == 0) {
    bVar11 = (in_ECX[7] & 0x80U) != 0;
    iVar7 = *(int *)in_ECX[0x30];
    if (((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != 0)) &&
       (iVar8 = (**(code **)(**(int **)(iVar7 + 0x24) + 0xc))(), iVar8 != 0)) {
      if (*(int *)(iVar7 + 0x24) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (**(code **)(**(int **)(iVar7 + 0x24) + 0xc))();
      }
      iVar7 = *(int *)(iVar7 + 4);
      if (((iVar7 == 5) || (iVar7 == 6)) || (iVar7 == 1)) {
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
      bVar11 = (bool)(bVar11 | bVar1);
    }
    if (bVar11) {
      in_ECX[7] = in_ECX[7] | 1;
    }
    else {
      in_ECX[7] = in_ECX[7] & 0xfffffffe;
    }
    in_ECX[9] = 0;
    iVar7 = *(int *)(in_ECX[0x30] + 4);
    if (((iVar7 == 0) || (*(int *)(iVar7 + 0x24) == 0)) ||
       (iVar8 = (**(code **)(**(int **)(iVar7 + 0x24) + 0xc))(), iVar8 == 0)) {
LAB_007d8495:
      in_ECX[7] = in_ECX[7] & 0xffffffef;
    }
    else {
      if (*(int *)(iVar7 + 0x24) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (**(code **)(**(int **)(iVar7 + 0x24) + 0xc))();
      }
      iVar7 = *(int *)(iVar7 + 4);
      if (((iVar7 == 5) || (iVar7 == 6)) || (iVar7 == 1)) {
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
      if (!bVar11) goto LAB_007d8495;
      in_ECX[7] = in_ECX[7] | 0x10;
    }
    iVar7 = 0;
    in_ECX[9] = 0;
    if ((short)in_ECX[0x2e] != 0) {
      do {
        iVar8 = *(int *)(in_ECX[0x30] + iVar7 * 4);
        if (((iVar8 != 0) && (*(int *)(iVar8 + 0x24) != 0)) &&
           (iVar9 = (**(code **)(**(int **)(iVar8 + 0x24) + 0xc))(), iVar9 != 0)) {
          if (*(int *)(iVar8 + 0x24) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = (**(code **)(**(int **)(iVar8 + 0x24) + 0xc))();
          }
          iVar8 = *(int *)(iVar8 + 4);
          if (((iVar8 == 5) || (iVar8 == 6)) || (iVar8 == 1)) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
          *(undefined1 *)(iVar7 + in_ECX[0x34]) = uVar3;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)(uint)*(ushort *)(in_ECX + 0x2e));
    }
  }
  iVar7 = *(int *)in_ECX[0x2f];
  if (((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != 0)) &&
     (iVar8 = (**(code **)(**(int **)(iVar7 + 0x24) + 0xc))(), iVar8 != 0)) {
    if (*(int *)(iVar7 + 0x24) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (**(code **)(**(int **)(iVar7 + 0x24) + 0xc))();
    }
    iVar7 = *(int *)(iVar7 + 4);
    if (((iVar7 == 5) || (iVar7 == 6)) || (iVar7 == 1)) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    if ((bVar11) && ((in_ECX[7] & 0x800U) == 0)) {
      in_ECX[7] = in_ECX[7] | 0x100;
      goto LAB_007d8581;
    }
  }
  in_ECX[7] = in_ECX[7] & 0xfffffeff;
LAB_007d8581:
  in_ECX[9] = 0;
  iVar7 = *(int *)(in_ECX[0x2f] + 4);
  in_ECX[9] = 0;
  if (iVar7 == 0) {
    in_ECX[7] = in_ECX[7] & 0xfffffff7;
  }
  else {
    in_ECX[7] = in_ECX[7] | 8;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_007d85d0(int param_1,uint param_2,undefined2 *param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  int *piVar6;
  LONG LVar7;
  int iVar8;
  int *in_ECX;
  uint uVar9;
  code *pcVar10;
  float10 fVar11;
  float fStack_40;
  float fStack_3c;
  undefined4 *local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar6 = (int *)FUN_00405760(&local_30);
  iVar2 = *piVar6;
  if (((local_30 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(local_30 + 1), LVar7 == 0))
     && (local_30 != (undefined4 *)0x0)) {
    (**(code **)*local_30)(1);
  }
  uVar9 = (uint)DAT_00b42eac << 8 | param_2;
  if (DAT_00b42eac == 5) {
    FUN_007ed1a0();
    if (in_ECX[0x11] != 0) {
      if (*(char *)(*(int *)(in_ECX[0xf] + 8) + 8) != '\0') {
        **(undefined4 **)(*(int *)(in_ECX[0xf] + 8) + 0xc) = DAT_00b42eb0;
      }
      if (in_ECX[0x11] != 0) goto LAB_007d86b3;
    }
    if (((char)param_4 != '\0') && (iVar2 != 0)) {
      FUN_00573880();
      iVar8 = FUN_00707530(0);
      if (((iVar8 == 0) && (iVar8 = *(int *)(iVar2 + 8), iVar8 == 0)) ||
         (param_2 = 1, (*(ushort *)(iVar8 + 0x18) >> 9 & 1) == 0)) {
        param_2 = 0;
      }
      FUN_0085aac0(param_1,*(int *)(param_1 + 0xb8) != 0,param_2);
    }
LAB_007d86b3:
    return in_ECX + 0xe;
  }
  if (DAT_00b42eac == 6) {
    if (in_ECX[0x15] == 0) {
      FUN_0085abd0(param_1,(in_ECX[7] & 2U) != 0,
                   CONCAT31((int3)(uVar9 >> 8),(in_ECX[7] & 0x100000U) != 0));
    }
    return in_ECX + 0x12;
  }
  fStack_3c = (float)in_ECX[0x27];
  fStack_40 = (float)in_ECX[0x29];
  if (((in_ECX[7] & 0x80U) == 0) || (bVar3 = true, _DAT_00b430a0 <= 0.0)) {
    bVar3 = false;
  }
  if (((in_ECX[7] & 1U) == 0) || (_DAT_00b43090 <= 0.0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((bVar3) || (bVar4)) {
    fStack_10 = *(float *)(param_1 + 0x20);
    fStack_c = *(float *)(param_1 + 0x24);
    fStack_28 = DAT_00b46658;
    fStack_8 = *(float *)(param_1 + 0x28);
    fStack_24 = DAT_00b4665c;
    fStack_20 = DAT_00b46660;
    fStack_4 = *(float *)(param_1 + 0x2c);
    fStack_1c = fStack_10 - DAT_00b46658;
    fStack_18 = fStack_c - DAT_00b4665c;
    fStack_14 = fStack_8 - DAT_00b46660;
    fStack_2c = fStack_14 * fStack_14 + fStack_1c * fStack_1c + fStack_18 * fStack_18;
    fVar11 = (float10)FUN_00982c30();
    fStack_2c = (float)fVar11 - fStack_4;
    if (bVar3) {
      fVar1 = _DAT_00b43094;
      fVar5 = _DAT_00b43098;
      if ((in_ECX[7] & 0x20000U) != 0) {
        fVar1 = _DAT_00b4309c;
        fVar5 = _DAT_00b430a0;
      }
      if (fStack_2c < fVar1) {
        fStack_40 = 1.0;
      }
      else if (fVar5 == 0.0) {
        fStack_40 = 1.0;
      }
      else {
        fStack_40 = (fStack_2c - fVar1) / (fVar5 - fVar1);
        if (fStack_40 <= 1.0) {
          fStack_40 = 1.0 - fStack_40;
        }
        else {
          fStack_40 = 0.0;
        }
      }
    }
    if (!bVar4) goto LAB_007d8911;
    if (_DAT_00b4308c <= fStack_2c) {
      if (_DAT_00b43090 == 0.0) {
        fStack_3c = 1.0;
        goto LAB_007d8934;
      }
      if (fStack_2c <= _DAT_00b43090) {
        fStack_3c = (fStack_2c - _DAT_00b4308c) / (_DAT_00b43090 - _DAT_00b4308c);
        if (fStack_3c <= 1.0) {
          fStack_3c = 1.0 - fStack_3c;
        }
        else {
          fStack_3c = 0.0;
        }
        goto LAB_007d8911;
      }
      fStack_3c = 0.0;
      goto LAB_007d891c;
    }
    fStack_3c = 1.0;
LAB_007d8934:
    if ((float)in_ECX[0x27] != 0.0) goto LAB_007d8941;
LAB_007d8982:
    in_ECX[9] = 0;
  }
  else {
LAB_007d8911:
    if (fStack_3c == 0.0) {
LAB_007d891c:
      if ((float)in_ECX[0x27] <= 0.0) goto LAB_007d8929;
      goto LAB_007d8982;
    }
LAB_007d8929:
    if (0.0 < fStack_3c) goto LAB_007d8934;
LAB_007d8941:
    if ((fStack_40 != 0.0) || ((float)in_ECX[0x29] <= 0.0)) {
      if ((0.0 < fStack_40) && ((float)in_ECX[0x29] == 0.0)) {
        in_ECX[9] = 0;
      }
    }
    else {
      in_ECX[9] = 0;
    }
  }
  in_ECX[0x27] = (int)fStack_3c;
  in_ECX[0x29] = (int)fStack_40;
  if (iVar2 != 0) {
    FUN_007e2430(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x50));
  }
  if ((in_ECX[7] & 0x80000U) != 0) {
    if (iVar2 == 0) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = *(float *)(*(int *)(iVar2 + 0x10) + 0x50);
    }
    iVar8 = FUN_00707530(0);
    if (fVar1 == 1.0) {
      if ((iVar8 != 0) && ((*(byte *)(iVar8 + 0x18) & 1) != 0)) {
        *(ushort *)(iVar8 + 0x18) = *(ushort *)(iVar8 + 0x18) & 0xfffe;
LAB_007d8a2f:
        in_ECX[9] = 0;
      }
    }
    else if (((0.0 < fVar1) && (iVar8 != 0)) && ((*(byte *)(iVar8 + 0x18) & 1) == 0)) {
      *(ushort *)(iVar8 + 0x18) = *(ushort *)(iVar8 + 0x18) | 1;
      goto LAB_007d8a2f;
    }
    in_ECX[8] = (int)fVar1;
  }
  if ((in_ECX[9] == uVar9) && ((char)param_4 != '\0')) goto LAB_007d8b32;
  if ((char)param_4 == '\x01') {
    FUN_007e24c0();
    if ((float)in_ECX[8] == 0.0) goto LAB_007d8b32;
    in_ECX[9] = uVar9;
  }
  else {
    *param_3 = 0;
  }
  if (DAT_00b42f48 == 1) {
    pcVar10 = *(code **)(*in_ECX + 0x98);
LAB_007d8aa7:
    (*pcVar10)(param_1,param_2,param_3,param_4);
  }
  else if (1 < DAT_00b42f48) {
    pcVar10 = *(code **)(*in_ECX + 0x9c);
    goto LAB_007d8aa7;
  }
  if ((2 < DAT_00b42f48) && (((byte)DAT_00b42f40 & 0x10) != 0)) {
    if ((char)param_4 == '\0') goto LAB_007d8b32;
    if (iVar2 != 0) {
      iVar8 = FUN_00707530(0);
      if (((iVar8 == 0) && (iVar8 = *(int *)(iVar2 + 8), iVar8 == 0)) ||
         (param_2 = 1, (*(ushort *)(iVar8 + 0x18) >> 9 & 1) == 0)) {
        param_2 = 0;
      }
      FUN_0085aac0(param_1,*(int *)(param_1 + 0xb8) != 0,param_2);
    }
  }
  if ((((char)param_4 != '\0') && (in_ECX[0xd] != 0)) && (*(int *)(in_ECX[0xc] + 8) != 0)) {
    *(undefined1 *)(*(int *)(in_ECX[0xc] + 8) + 7) = 1;
  }
LAB_007d8b32:
  return in_ECX + 10;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_007d8ba0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 *param_9)

{
  void *pvVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  LONG LVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int in_ECX;
  int *piVar12;
  int *unaff_FS_OFFSET;
  int *local_12c;
  int local_128;
  undefined4 *local_124;
  int *local_120;
  int *local_11c;
  undefined4 *local_118;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ceec0;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_12c;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffec4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_120 = *(int **)(in_ECX + 0xc0);
  local_118 = *(undefined4 **)(in_ECX + 0xc4);
  piVar12 = *(int **)(in_ECX + 0xbc);
  local_128 = in_ECX;
  if (*(ushort *)(in_ECX + 0xb8) < 10) {
    local_124 = (undefined4 *)FUN_00401f00(0x2c,uVar4);
    local_4 = 0;
    if (local_124 == (undefined4 *)0x0) {
      piVar12 = (int *)0x0;
    }
    else {
      piVar12 = local_124 + 1;
      *local_124 = 10;
      _eh_vector_constructor_iterator_(piVar12,4,10,FUN_007c88a0,FUN_007016a0);
    }
    local_4 = 0xffffffff;
    local_12c = piVar12;
    local_124 = (undefined4 *)FUN_00401f00(0x2c);
    local_4 = 1;
    if (local_124 == (undefined4 *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = local_124 + 1;
      *local_124 = 10;
      _eh_vector_constructor_iterator_(piVar8,4,10,FUN_007c88a0,FUN_007016a0);
    }
    local_4 = 0xffffffff;
    local_120 = piVar8;
    local_11c = piVar8;
    local_124 = (undefined4 *)FUN_00401f00(0x2c);
    local_4 = 2;
    if (local_124 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = local_124 + 1;
      *local_124 = 10;
      _eh_vector_constructor_iterator_(puVar7,4,10,FUN_007c88a0,FUN_007016a0);
    }
    local_4 = 0xffffffff;
    local_118 = puVar7;
    uVar5 = FUN_00401f00(10);
    local_124 = (undefined4 *)FUN_00401f00(10);
    pvVar1 = *(void **)(in_ECX + 0xbc);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
      FUN_00401f20((int)pvVar1 + -4);
      in_ECX = local_128;
    }
    pvVar1 = *(void **)(in_ECX + 0xc0);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
      FUN_00401f20((int)pvVar1 + -4);
      in_ECX = local_128;
    }
    pvVar1 = *(void **)(in_ECX + 0xc4);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
      FUN_00401f20((int)pvVar1 + -4);
      in_ECX = local_128;
    }
    FUN_00401f20(*(undefined4 *)(in_ECX + 0xd0));
    FUN_00401f20(*(undefined4 *)(in_ECX + 200));
    *(int **)(in_ECX + 0xbc) = local_12c;
    *(int **)(in_ECX + 0xc0) = local_11c;
    *(undefined4 **)(in_ECX + 0xc4) = puVar7;
    *(undefined4 *)(in_ECX + 0xd0) = uVar5;
    *(undefined4 **)(in_ECX + 200) = local_124;
    *(undefined2 *)(in_ECX + 0xb8) = 10;
  }
  puVar7 = (undefined4 *)*piVar12;
  if (puVar7 != param_1) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar7 + 1), LVar6 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *piVar12 = (int)param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  puVar7 = (undefined4 *)piVar12[1];
  if (puVar7 != param_2) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar7 + 1), LVar6 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    piVar12[1] = (int)param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  puVar7 = (undefined4 *)piVar12[2];
  if (puVar7 != param_3) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar7 + 1), LVar6 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    piVar12[2] = (int)param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  puVar7 = (undefined4 *)piVar12[3];
  if (puVar7 != param_4) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar7 + 1), LVar6 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    piVar12[3] = (int)param_4;
    if (param_4 != (undefined4 *)0x0) {
      InterlockedIncrement(param_4 + 1);
    }
  }
  puVar7 = (undefined4 *)piVar12[4];
  if (puVar7 != param_5) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar7 + 1), LVar6 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    piVar12[4] = (int)param_5;
    if (param_5 != (undefined4 *)0x0) {
      InterlockedIncrement(param_5 + 1);
    }
  }
  puVar7 = (undefined4 *)piVar12[5];
  if (puVar7 != param_6) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar7 + 1), LVar6 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    piVar12[5] = (int)param_6;
    if (param_6 != (undefined4 *)0x0) {
      InterlockedIncrement(param_6 + 1);
    }
  }
  puVar7 = (undefined4 *)piVar12[6];
  if (puVar7 != param_7) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar7 + 1), LVar6 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    piVar12[6] = (int)param_7;
    if (param_7 != (undefined4 *)0x0) {
      InterlockedIncrement(param_7 + 1);
    }
  }
  puVar7 = (undefined4 *)piVar12[7];
  if (puVar7 != param_8) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar7 + 1), LVar6 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    piVar12[7] = (int)param_8;
    if (param_8 != (undefined4 *)0x0) {
      InterlockedIncrement(param_8 + 1);
    }
  }
  puVar7 = (undefined4 *)piVar12[8];
  if (puVar7 != param_9) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar7 + 1), LVar6 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    piVar12[8] = (int)param_9;
    if (param_9 != (undefined4 *)0x0) {
      InterlockedIncrement(param_9 + 1);
    }
  }
  puVar7 = (undefined4 *)piVar12[9];
  if (puVar7 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar7 + 1);
    if ((LVar6 == 0) && (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    piVar12[9] = 0;
  }
  puVar7 = *(undefined4 **)(local_128 + 200);
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 0;
  puVar7 = *(undefined4 **)(local_128 + 0xd0);
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 0;
  local_12c = (int *)0x0;
  local_124 = (undefined4 *)((int)piVar12 - (int)local_120);
  piVar12 = local_120;
  local_120 = (int *)((int)local_118 - (int)local_120);
  do {
    piVar8 = *(int **)((int)local_124 + (int)piVar12);
    if (piVar8 == (int *)0x0) break;
    for (puVar7 = (undefined4 *)(**(code **)(*piVar8 + 4))(); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[1]) {
      if (puVar7 == &DAT_00b3f95c) {
        bVar2 = 1;
        goto LAB_007d9084;
      }
    }
    bVar2 = 0;
LAB_007d9084:
    if ((-(uint)bVar2 & (uint)piVar8) != 0) {
      uVar5 = *(undefined4 *)((-(uint)bVar2 & (uint)piVar8) + 0x38);
      FUN_007b4160(acStack_114,uVar5,&DAT_00a3cf00);
      if (acStack_114[0] != '\0') {
        piVar8 = (int *)FUN_007b8200(&local_118,acStack_114,1,1);
        puVar7 = (undefined4 *)*piVar12;
        local_4 = 3;
        if (puVar7 != (undefined4 *)*piVar8) {
          if (((puVar7 != (undefined4 *)0x0) &&
              (LVar6 = InterlockedDecrement(puVar7 + 1), LVar6 == 0)) &&
             (puVar7 != (undefined4 *)0x0)) {
            (**(code **)*puVar7)(1);
          }
          iVar10 = *piVar8;
          *piVar12 = iVar10;
          if (iVar10 != 0) {
            InterlockedIncrement((LONG *)(iVar10 + 4));
          }
        }
        puVar7 = local_118;
        local_4 = 0xffffffff;
        if (((local_118 != (undefined4 *)0x0) &&
            (LVar6 = InterlockedDecrement(local_118 + 1), LVar6 == 0)) &&
           (puVar7 != (undefined4 *)0x0)) {
          (**(code **)*puVar7)(1);
        }
        iVar10 = *piVar12;
        if (((iVar10 != 0) && (*(int *)(iVar10 + 0x24) != 0)) &&
           (iVar9 = (**(code **)(**(int **)(iVar10 + 0x24) + 0xc))(), iVar9 != 0)) {
          if (*(int *)(iVar10 + 0x24) == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = (**(code **)(**(int **)(iVar10 + 0x24) + 0xc))();
          }
          iVar10 = *(int *)(iVar10 + 4);
          if (((iVar10 == 5) || (iVar10 == 6)) || (iVar10 == 1)) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
          *(undefined1 *)((int)local_12c + *(int *)(local_128 + 0xd0)) = uVar3;
        }
      }
      FUN_007b4160(acStack_114,uVar5,&DAT_00a7d0e0);
      if (acStack_114[0] != '\0') {
        piVar11 = (int *)FUN_007b8200(&local_11c,acStack_114,1,1);
        piVar8 = local_120;
        puVar7 = *(undefined4 **)((int)local_120 + (int)piVar12);
        local_4 = 4;
        if (puVar7 != (undefined4 *)*piVar11) {
          if (((puVar7 != (undefined4 *)0x0) &&
              (LVar6 = InterlockedDecrement(puVar7 + 1), LVar6 == 0)) &&
             (puVar7 != (undefined4 *)0x0)) {
            (**(code **)*puVar7)(1);
          }
          iVar10 = *piVar11;
          *(int *)((int)piVar8 + (int)piVar12) = iVar10;
          if (iVar10 != 0) {
            InterlockedIncrement((LONG *)(iVar10 + 4));
          }
        }
        piVar8 = local_11c;
        local_4 = 0xffffffff;
        if (((local_11c != (int *)0x0) && (LVar6 = InterlockedDecrement(local_11c + 1), LVar6 == 0))
           && (piVar8 != (int *)0x0)) {
          (**(code **)*piVar8)(1);
        }
      }
    }
    local_12c = (int *)((int)local_12c + 1);
    piVar12 = piVar12 + 1;
  } while ((int)local_12c < 9);
  if ((int)local_12c < 1) {
    *(undefined2 *)(local_128 + 0xcc) = 0;
  }
  else {
    *(short *)(local_128 + 0xcc) = (short)local_12c + -1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007d92c0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  if (param_1 != (int *)0x0) {
    iVar3 = (**(code **)(*param_1 + 0x10))();
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*param_1 + 8))();
      if (iVar3 != 0) {
        uVar1 = *(ushort *)(iVar3 + 0xb6);
        uVar5 = 0;
        if (uVar1 != 0) {
          do {
            if ((uVar5 < *(ushort *)(iVar3 + 0xb6)) &&
               (iVar2 = *(int *)(*(int *)(iVar3 + 0xb0) + uVar5 * 4), iVar2 != 0)) {
              FUN_007d92c0(iVar2,param_2,param_3,param_4,param_5);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar1);
        }
      }
    }
    else {
      piVar4 = (int *)FUN_00707530(4);
      if (((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 0x54))(), 4 < iVar3)) &&
         (iVar3 = (**(code **)(*piVar4 + 0x54))(), iVar3 < 0xb)) {
        *(undefined1 *)(piVar4 + 0x39) = 0;
        uVar5 = (-(uint)((char)param_4 != '\0') & 0x8000) + 0x8000;
        if ((char)param_2 == '\0') {
          piVar4[7] = piVar4[7] & ~uVar5;
        }
        else {
          piVar4[7] = piVar4[7] | uVar5;
        }
        piVar4[0x3a] = param_3;
        piVar4[9] = 0;
        if ((char)param_4 != '\0') {
          iVar3 = FUN_009828c0();
          piVar4[0x3b] = iVar3;
          return;
        }
      }
    }
  }
  return;
}



void FUN_007d93e0(int *param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  iVar3 = (**(code **)(*param_1 + 0x10))();
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*param_1 + 8))();
    if (iVar3 != 0) {
      uVar1 = *(ushort *)(iVar3 + 0xb6);
      uVar5 = 0;
      if (uVar1 != 0) {
        do {
          if ((uVar5 < *(ushort *)(iVar3 + 0xb6)) &&
             (iVar2 = *(int *)(*(int *)(iVar3 + 0xb0) + uVar5 * 4), iVar2 != 0)) {
            FUN_007d93e0(iVar2,param_2,param_3);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
      }
    }
  }
  else {
    piVar4 = (int *)FUN_00707530(4);
    if (((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 0x54))(), 4 < iVar3)) &&
       (iVar3 = (**(code **)(*piVar4 + 0x54))(), iVar3 < 0xb)) {
      if ((char)param_3 == '\0') {
        piVar4[7] = piVar4[7] & ~param_2;
        piVar4[9] = 0;
        return;
      }
      piVar4[7] = piVar4[7] | param_2;
      piVar4[9] = 0;
      return;
    }
  }
  return;
}



void FUN_007d94b0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  undefined1 *puVar5;
  undefined4 *in_ECX;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cef35;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007ee440(uVar2);
  *in_ECX = &PTR_FUN_00a91384;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x38] = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  *(undefined2 *)(in_ECX + 0x2e) = 2;
  puVar3 = (undefined4 *)FUN_00401f00(0xc);
  local_4._0_1_ = 3;
  if (puVar3 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = puVar3 + 1;
    *puVar3 = 2;
    _eh_vector_constructor_iterator_(piVar6,4,2,FUN_007c88a0,FUN_007016a0);
  }
  in_ECX[0x2f] = piVar6;
  puVar3 = (undefined4 *)*piVar6;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *piVar6 = 0;
  }
  iVar1 = in_ECX[0x2f];
  puVar3 = *(undefined4 **)(iVar1 + 4);
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  puVar3 = (undefined4 *)FUN_00401f00(0xc);
  local_4._0_1_ = 4;
  if (puVar3 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = puVar3 + 1;
    *puVar3 = 2;
    _eh_vector_constructor_iterator_(piVar6,4,2,FUN_007c88a0,FUN_007016a0);
  }
  in_ECX[0x30] = piVar6;
  puVar3 = (undefined4 *)*piVar6;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *piVar6 = 0;
  }
  iVar1 = in_ECX[0x30];
  puVar3 = *(undefined4 **)(iVar1 + 4);
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  puVar3 = (undefined4 *)FUN_00401f00(0xc);
  local_4._0_1_ = 5;
  if (puVar3 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = puVar3 + 1;
    *puVar3 = 2;
    _eh_vector_constructor_iterator_(piVar6,4,2,FUN_007c88a0,FUN_007016a0);
  }
  in_ECX[0x31] = piVar6;
  puVar3 = (undefined4 *)*piVar6;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *piVar6 = 0;
  }
  iVar1 = in_ECX[0x31];
  puVar3 = *(undefined4 **)(iVar1 + 4);
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  puVar5 = (undefined1 *)FUN_00401f00(2);
  in_ECX[0x34] = puVar5;
  *puVar5 = 0;
  *(undefined1 *)(in_ECX[0x34] + 1) = 0;
  puVar5 = (undefined1 *)FUN_00401f00(2);
  in_ECX[0x32] = puVar5;
  *puVar5 = 0x1e;
  *(undefined1 *)(in_ECX[0x32] + 1) = 0x1e;
  puVar3 = (undefined4 *)in_ECX[0x35];
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    in_ECX[0x35] = 0;
  }
  puVar3 = (undefined4 *)in_ECX[0x38];
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    in_ECX[0x38] = 0;
  }
  in_ECX[0x3b] = 0;
  in_ECX[0x3a] = 0;
  *(undefined1 *)(in_ECX + 0x39) = 0;
  in_ECX[0x37] = 1;
  in_ECX[0x27] = 0x3f800000;
  in_ECX[0x36] = 0;
  in_ECX[0x29] = 0x3f800000;
  if (DAT_00b45da4 != '\0') {
    in_ECX[7] = in_ECX[7] | 0x2000;
    in_ECX[9] = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007d97d0(byte param_1)

{
  FUN_007d7490();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007d97f0(byte param_1)

{
  FUN_007d79c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_007d9810(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0xf0,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_007d94b0();
  }
  local_4 = 0xffffffff;
  FUN_007d7ad0(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_007d9890(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  
  iVar1 = param_1;
  FUN_007ee5d0(param_1);
  param_1 = FUN_0070f910(DAT_00b45da8);
  uVar4 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  if ((in_ECX[7] & 0x400U) != 0) {
    param_1 = FUN_0070f950("facegenblend",1);
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
  }
  if ((in_ECX[7] & 0x4000U) == 0) {
    iVar2 = FUN_006f9540(*(undefined4 *)in_ECX[0x2f]);
    if (iVar2 == 0) {
      param_1 = FUN_0070fbe0("base diff",*(undefined4 *)in_ECX[0x2f]);
      uVar4 = (uint)*(ushort *)(iVar1 + 10);
      if (*(ushort *)(iVar1 + 8) <= uVar4) {
        FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
      }
    }
    else {
      param_1 = FUN_0070fc30("base diff",iVar2);
      uVar4 = (uint)*(ushort *)(iVar1 + 10);
      if (*(ushort *)(iVar1 + 8) <= uVar4) {
        FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
      }
    }
    FUN_0042bb90(uVar4,&param_1);
    iVar2 = FUN_006f9540(*(undefined4 *)in_ECX[0x30]);
    if (iVar2 == 0) {
      param_1 = FUN_0070fbe0("base normal",*(undefined4 *)in_ECX[0x30]);
      uVar4 = (uint)*(ushort *)(iVar1 + 10);
      if (*(ushort *)(iVar1 + 8) <= uVar4) {
        FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
      }
    }
    else {
      param_1 = FUN_0070fc30("base normal",iVar2);
      uVar4 = (uint)*(ushort *)(iVar1 + 10);
      if (*(ushort *)(iVar1 + 8) <= uVar4) {
        FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
      }
    }
    FUN_0042bb90(uVar4,&param_1);
    if (*(int *)(in_ECX[0x2f] + 4) != 0) {
      iVar2 = FUN_006f9540(*(int *)(in_ECX[0x2f] + 4));
      if (iVar2 == 0) {
        param_1 = FUN_0070fbe0("multi diff",*(undefined4 *)(in_ECX[0x2f] + 4));
      }
      else {
        param_1 = FUN_0070fc30("multi diff",iVar2);
      }
      FUN_0042d800(&param_1);
    }
    if (*(int *)(in_ECX[0x30] + 4) != 0) {
      iVar2 = FUN_006f9540(*(int *)(in_ECX[0x30] + 4));
      if (iVar2 == 0) {
        param_1 = FUN_0070fbe0("multi normal",*(undefined4 *)(in_ECX[0x30] + 4));
        FUN_0042d800(&param_1);
      }
      else {
        param_1 = FUN_0070fc30("multi normal",iVar2);
        FUN_0042d800(&param_1);
      }
    }
  }
  else {
    param_1 = FUN_0070f950("landscape texturing",1);
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
    param_1 = FUN_0070faa0("landscape textures",(short)in_ECX[0x2e]);
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
    iVar2 = 0;
    do {
      if (*(int *)(in_ECX[0x2f] + iVar2 * 4) != 0) {
        iVar3 = FUN_006f9540(*(undefined4 *)(in_ECX[0x2f] + iVar2 * 4));
        if (iVar3 == 0) {
          param_1 = FUN_0070fbe0("base tex",*(undefined4 *)in_ECX[0x2f]);
          uVar4 = (uint)*(ushort *)(iVar1 + 10);
          if (*(ushort *)(iVar1 + 8) <= uVar4) {
            FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
          }
        }
        else {
          param_1 = FUN_0070fc30("base tex",iVar3);
          uVar4 = (uint)*(ushort *)(iVar1 + 10);
          if (*(ushort *)(iVar1 + 8) <= uVar4) {
            FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
          }
        }
        FUN_0042bb90(uVar4,&param_1);
        iVar3 = *(int *)(in_ECX[0x30] + iVar2 * 4);
        if (iVar3 != 0) {
          iVar3 = FUN_006f9540(iVar3);
          if (iVar3 == 0) {
            param_1 = FUN_0070fbe0(" normal map",*(undefined4 *)(in_ECX[0x30] + iVar2 * 4));
          }
          else {
            param_1 = FUN_0070fc30(" normal map",iVar3);
          }
          FUN_0042d800(&param_1);
        }
        if (*(char *)(in_ECX[0x34] + iVar2) != '\0') {
          param_1 = FUN_0070f950(" specular",1);
          uVar4 = (uint)*(ushort *)(iVar1 + 10);
          if (*(ushort *)(iVar1 + 8) <= uVar4) {
            FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
          }
          FUN_0042bb90(uVar4,&param_1);
        }
        iVar3 = *(int *)(in_ECX[0x31] + iVar2 * 4);
        if (iVar3 != 0) {
          iVar3 = FUN_006f9540(iVar3);
          if (iVar3 == 0) {
            param_1 = FUN_0070fbe0(" glow map",*(undefined4 *)(in_ECX[0x31] + iVar2 * 4));
          }
          else {
            param_1 = FUN_0070fc30(" glow map",iVar3);
          }
          FUN_0042d800(&param_1);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 9);
  }
  if ((undefined4 *)in_ECX[0x31] != (undefined4 *)0x0) {
    iVar2 = FUN_006f9540(*(undefined4 *)in_ECX[0x31]);
    if (iVar2 == 0) {
      param_1 = FUN_0070fbe0("glowmap texture",*(undefined4 *)in_ECX[0x31]);
      uVar4 = (uint)*(ushort *)(iVar1 + 10);
      if (*(ushort *)(iVar1 + 8) <= uVar4) {
        FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
      }
    }
    else {
      param_1 = FUN_0070fc30("glowmap texture",iVar2);
      uVar4 = (uint)*(ushort *)(iVar1 + 10);
      if (*(ushort *)(iVar1 + 8) <= uVar4) {
        FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
      }
    }
    FUN_0042bb90(uVar4,&param_1);
  }
  iVar2 = (**(code **)(*in_ECX + 0x78))();
  if (iVar2 == 0) {
    param_1 = FUN_0070f950("clamp",1);
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
  }
  if ((in_ECX[7] & 0x8000U) == 0) {
    if ((in_ECX[7] & 0x10000U) == 0) goto LAB_007d9ec6;
    param_1 = FUN_0070fb90("refraction power",in_ECX[0x3a]);
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
    param_1 = FUN_0070faf0("refraction period",in_ECX[0x3b]);
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
  }
  else {
    param_1 = FUN_0070fb90("refraction power",in_ECX[0x3a]);
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
  }
  FUN_0042bb90(uVar4,&param_1);
LAB_007d9ec6:
  if ((*(byte *)(in_ECX + 7) & 1) != 0) {
    param_1 = FUN_0070fb90("specular lod",in_ECX[0x27]);
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
  }
  if ((in_ECX[7] & 0x80U) != 0) {
    param_1 = FUN_0070fb90("envmap lod",in_ECX[0x29]);
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
  }
  if (in_ECX[0x38] != 0) {
    param_1 = FUN_0070fbe0("spTexEffectData",in_ECX[0x38]);
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
    param_1 = FUN_0070fb90("Fill Color R",*(undefined4 *)(in_ECX[0x38] + 0xc));
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
    param_1 = FUN_0070fb90("Fill Color G",*(undefined4 *)(in_ECX[0x38] + 0x10));
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
    param_1 = FUN_0070fb90("Fill Color R",*(undefined4 *)(in_ECX[0x38] + 0x14));
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
    param_1 = FUN_0070fb90("Fill Color A",*(undefined4 *)(in_ECX[0x38] + 0x18));
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
    param_1 = FUN_0070fb90("Edge Color R",*(undefined4 *)(in_ECX[0x38] + 0x1c));
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
    param_1 = FUN_0070fb90("Edge Color G",*(undefined4 *)(in_ECX[0x38] + 0x20));
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
    param_1 = FUN_0070fb90("Edge Color R",*(undefined4 *)(in_ECX[0x38] + 0x24));
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
    param_1 = FUN_0070fb90("Edge Color A",*(undefined4 *)(in_ECX[0x38] + 0x28));
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
    param_1 = FUN_0070fb90("Edge Falloff",*(undefined4 *)(in_ECX[0x38] + 0x54));
    uVar4 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_007da220(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  int *piVar6;
  LONG LVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  char *_Str;
  int *in_ECX;
  int iVar12;
  char *pcVar13;
  int iVar14;
  int *unaff_FS_OFFSET;
  undefined4 *local_40c;
  uint uStack_408;
  int local_404;
  undefined4 *puStack_400;
  undefined4 *local_3fc;
  char acStack_3f8 [500];
  char acStack_204 [500];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cef5e;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_40c;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffbe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_404 = param_1;
  piVar6 = (int *)FUN_00405760(&local_3fc);
  puVar8 = (undefined4 *)*piVar6;
  local_40c = puVar8;
  if (((local_3fc != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(local_3fc + 1), LVar7 == 0)
      ) && (local_3fc != (undefined4 *)0x0)) {
    (**(code **)*local_3fc)(1,uVar5);
  }
  if (puVar8 == (undefined4 *)0x0) {
    FUN_00707610();
    piVar6 = (int *)FUN_00405760(&puStack_400);
    puVar8 = puStack_400;
    local_40c = (undefined4 *)*piVar6;
    if (((puStack_400 != (undefined4 *)0x0) &&
        (LVar7 = InterlockedDecrement(puStack_400 + 1), LVar7 == 0)) &&
       (puVar8 != (undefined4 *)0x0)) {
      (**(code **)*puVar8)(1);
    }
  }
  if (in_ECX[0x35] == 0) {
    if ((in_ECX[7] & 0x1000U) == 0) {
      if ((*(int *)(param_1 + 0xb4) != 0) &&
         (piVar6 = *(int **)(*(int *)(param_1 + 0xb4) + 0x34), piVar6 != (int *)0x0)) {
        for (puVar8 = (undefined4 *)(**(code **)(*piVar6 + 4))(); puVar8 != (undefined4 *)0x0;
            puVar8 = (undefined4 *)puVar8[1]) {
          if (puVar8 == &DAT_00b3fd98) goto LAB_007da359;
        }
      }
      uVar9 = FUN_007b7710(param_1);
      FUN_0075fa90(uVar9);
      if (in_ECX[0x35] == 0) {
        FUN_00708560(&puStack_400,6);
        FUN_007016a0();
        uVar9 = 0;
        goto LAB_007daacc;
      }
    }
LAB_007da359:
    if (in_ECX[0x35] != 0) goto LAB_007da366;
  }
  else {
LAB_007da366:
    uStack_408 = (uint)*(ushort *)(*(int *)(param_1 + 0xb4) + 8);
    bVar3 = false;
    if (uStack_408 != 0) {
      iVar12 = 0;
      do {
        iVar10 = *(int *)(in_ECX[0x35] + 0x10);
        iVar14 = iVar10 + iVar12;
        if (((DAT_00b3f9a8 == *(float *)(iVar10 + iVar12)) &&
            (DAT_00b3f9ac == *(float *)(iVar14 + 4))) && (DAT_00b3f9b0 == *(float *)(iVar14 + 8))) {
          puVar8 = (undefined4 *)(*(int *)(in_ECX[0x35] + 0x10) + iVar12);
          *puVar8 = DAT_00b258d0;
          puVar8[1] = DAT_00b258d4;
          puVar8[2] = DAT_00b258d8;
          bVar3 = true;
        }
        iVar10 = *(int *)(in_ECX[0x35] + 0xc);
        iVar14 = iVar10 + iVar12;
        if (((DAT_00b3f9a8 == *(float *)(iVar10 + iVar12)) &&
            (DAT_00b3f9ac == *(float *)(iVar14 + 4))) && (DAT_00b3f9b0 == *(float *)(iVar14 + 8))) {
          puVar8 = (undefined4 *)(*(int *)(in_ECX[0x35] + 0xc) + iVar12);
          *puVar8 = DAT_00b258dc;
          puVar8[1] = DAT_00b258e0;
          puVar8[2] = DAT_00b258e4;
          bVar3 = true;
        }
        iVar12 = iVar12 + 0xc;
        uStack_408 = uStack_408 - 1;
      } while (uStack_408 != 0);
      if ((bVar3) && (DAT_00b42ea6 != '\0')) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          _sprintf(acStack_3f8,"Invalid tangent space data in NULL : %s",
                   *(undefined4 *)(param_1 + 8));
        }
        else {
          _sprintf(acStack_3f8,"Invalid tangent space data in %s : %s",
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 8),*(undefined4 *)(param_1 + 8));
        }
        if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)(acStack_3f8,0);
        }
      }
    }
  }
  uStack_408 = local_40c[8];
  iVar12 = FUN_00707530(2);
  if ((iVar12 == 0) || (pcVar13 = *(char **)(iVar12 + 8), pcVar13 == (char *)0x0)) {
LAB_007da748:
    uVar5 = uStack_408;
    if (uStack_408 != 0) {
      if (((*(byte *)(uStack_408 + 0x18) & 0xe) == 6) || ((in_ECX[7] & 0x80U) != 0)) {
        in_ECX[7] = in_ECX[7] | 0x80;
      }
      else {
        in_ECX[7] = in_ECX[7] & 0xffffff7f;
      }
      iVar12 = 0;
      in_ECX[9] = 0;
      if (**(int **)(uStack_408 + 0x20) == 0) {
        uVar4 = 3;
      }
      else {
        uVar4 = *(ushort *)(**(int **)(uStack_408 + 0x20) + 4) >> 0xc & 3;
      }
      (**(code **)(*in_ECX + 0x7c))(uVar4);
      if ((*(byte *)(uVar5 + 0x18) & 0xe) == 8) {
        in_ECX[7] = in_ECX[7] | 0x800;
      }
      else {
        in_ECX[7] = in_ECX[7] & 0xfffff7ff;
      }
      in_ECX[9] = 0;
      if ((*(byte *)(uVar5 + 0x18) & 1) != 0) {
        in_ECX[7] = in_ECX[7] | 8;
        uVar5 = in_ECX[7];
        in_ECX[9] = 0;
        uVar4 = *(ushort *)(uStack_408 + 0x18) >> 4;
        if ((uVar4 & 0xff) == 0) {
          if ((uVar5 & 8) == 0) {
            in_ECX[7] = uVar5 & 0xfffffff7;
            in_ECX[9] = 0;
            iVar12 = 0;
          }
          else {
            in_ECX[7] = uVar5 | 8;
            in_ECX[9] = 0;
            iVar12 = 0;
          }
        }
        else {
          iVar14 = 0;
          iVar10 = 0x18;
          do {
            if ((int)(uVar4 & 0xff) <= iVar14) {
              if (iVar12 == 0) goto LAB_007da920;
              break;
            }
            iVar12 = *(int *)(iVar10 + *(int *)(uStack_408 + 0x20));
            iVar14 = iVar14 + 1;
            iVar10 = iVar10 + 4;
          } while (iVar12 == 0);
          iVar10 = in_ECX[0x2f];
          local_40c = *(undefined4 **)(iVar12 + 8);
          puVar8 = *(undefined4 **)(iVar10 + 4);
          if (puVar8 != local_40c) {
            if (((puVar8 != (undefined4 *)0x0) &&
                (LVar7 = InterlockedDecrement(puVar8 + 1), LVar7 == 0)) &&
               (puVar8 != (undefined4 *)0x0)) {
              (**(code **)*puVar8)(1);
            }
            *(undefined4 **)(iVar10 + 4) = local_40c;
            if (local_40c != (undefined4 *)0x0) {
              InterlockedIncrement(local_40c + 1);
            }
          }
          if (*(int *)(in_ECX[0x2f] + 4) != 0) {
            iVar10 = FUN_00560920(&DAT_00b3f95c,*(int *)(in_ECX[0x2f] + 4));
            piVar6 = *(int **)(*(int *)(in_ECX[0x2f] + 4) + 0x24);
            if ((piVar6 != (int *)0x0) && (uVar5 = (**(code **)(*piVar6 + 0x10))(), uVar5 < 2)) {
              if (iVar10 == 0) {
                _sprintf(acStack_3f8,
                         "TEXTURE ERROR : texture does not contain mipmaps & will not be used : NOTASOURCETEXTURE"
                        );
              }
              else {
                _sprintf(acStack_3f8,
                         "TEXTURE ERROR : texture does not contain mipmaps & will not be used : %s",
                         *(undefined4 *)(iVar10 + 0x38));
              }
              iVar10 = in_ECX[0x2f];
              puVar8 = *(undefined4 **)(iVar10 + 4);
              if (puVar8 != (undefined4 *)0x0) {
                LVar7 = InterlockedDecrement(puVar8 + 1);
                if ((LVar7 == 0) && (puVar8 != (undefined4 *)0x0)) {
                  (**(code **)*puVar8)(1);
                }
                *(undefined4 *)(iVar10 + 4) = 0;
              }
            }
          }
        }
      }
LAB_007da920:
      if (**(int **)(uStack_408 + 0x20) == 0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = *(undefined4 **)(**(int **)(uStack_408 + 0x20) + 8);
      }
      local_40c = (undefined4 *)0x0;
      if (iVar12 != 0) {
        local_40c = (undefined4 *)FUN_00560920(&DAT_00b3f95c,*(undefined4 *)(iVar12 + 8));
      }
      if (puVar8 != (undefined4 *)0x0) {
        piVar6 = (int *)in_ECX[0x2f];
        puVar2 = (undefined4 *)*piVar6;
        if (puVar2 != puVar8) {
          if (((puVar2 != (undefined4 *)0x0) &&
              (LVar7 = InterlockedDecrement(puVar2 + 1), LVar7 == 0)) &&
             (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
          *piVar6 = (int)puVar8;
          InterlockedIncrement(puVar8 + 1);
        }
        iVar12 = FUN_00560920(&DAT_00b3f95c,*(undefined4 *)in_ECX[0x2f]);
        piVar6 = *(int **)(*(int *)in_ECX[0x2f] + 0x24);
        if (iVar12 != 0) {
          uVar9 = 0;
          if (local_40c != (undefined4 *)0x0) {
            uVar9 = local_40c[0xe];
          }
          if (*(int *)(iVar12 + 0x38) != 0) {
            (**(code **)(*in_ECX + 0x6c))(*(int *)(iVar12 + 0x38),1,uVar9);
          }
        }
        if ((piVar6 != (int *)0x0) && (uVar5 = (**(code **)(*piVar6 + 0x10))(), uVar5 < 2)) {
          if (iVar12 == 0) {
            _sprintf(acStack_204,
                     "TEXTURE ERROR : texture does not contain mipmaps & will not be used : NOTASOURCETEXTURE"
                    );
          }
          else {
            _sprintf(acStack_204,
                     "TEXTURE ERROR : texture does not contain mipmaps & will not be used : %s",
                     *(undefined4 *)(iVar12 + 0x38));
          }
          piVar6 = (int *)in_ECX[0x2f];
          puVar8 = (undefined4 *)*piVar6;
          if (puVar8 != (undefined4 *)0x0) {
            LVar7 = InterlockedDecrement(puVar8 + 1);
            if ((LVar7 == 0) && (puVar8 != (undefined4 *)0x0)) {
              (**(code **)*puVar8)(1);
            }
            *piVar6 = 0;
          }
        }
      }
    }
  }
  else {
    iVar10 = __stricmp(pcVar13,"right eye");
    if ((iVar10 == 0) || (iVar10 = __stricmp(pcVar13,"left eye"), iVar10 == 0)) {
      in_ECX[7] = in_ECX[7] & 0xfffffffeU | 0x20000;
      in_ECX[9] = 0;
      goto LAB_007da748;
    }
    iVar10 = __stricmp(pcVar13,"envmap2");
    if (iVar10 == 0) {
      in_ECX[7] = in_ECX[7] | 0x200000;
      in_ECX[9] = 0;
      goto LAB_007da748;
    }
    iVar10 = __strnicmp(pcVar13,"refract",7);
    if (iVar10 == 0) {
      pcVar11 = *(char **)(iVar12 + 8);
      pcVar13 = pcVar11 + 1;
      do {
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      _Str = (char *)FUN_00401f00(pcVar11 + (1 - (int)pcVar13));
      pcVar13 = *(char **)(iVar12 + 8);
      pcVar11 = _Str;
      do {
        cVar1 = *pcVar13;
        *pcVar11 = cVar1;
        pcVar13 = pcVar13 + 1;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      pcVar13 = _strtok(_Str," ");
      if (pcVar13 != (char *)0x0) {
        iVar12 = __stricmp(pcVar13,"Refract");
        iVar10 = __stricmp(pcVar13,"RefractF");
        if (iVar12 == 0) {
          if (iVar10 != 0) {
            in_ECX[7] = in_ECX[7] | 0x8000;
          }
          else {
            in_ECX[7] = in_ECX[7] | 0x10000;
          }
        }
        else {
          if (iVar10 != 0) goto LAB_007da600;
          in_ECX[7] = in_ECX[7] | 0x10000;
        }
        in_ECX[9] = 0;
        *(undefined1 *)(in_ECX + 0x39) = 1;
        iVar12 = FUN_00707530(0);
        if (iVar12 != 0) {
          *(ushort *)(iVar12 + 0x18) = *(ushort *)(iVar12 + 0x18) & 0xfffe;
        }
      }
LAB_007da600:
      FUN_00401f20(_Str);
      goto LAB_007da748;
    }
    iVar12 = __strnicmp(pcVar13,"dynalpha",8);
    if (iVar12 == 0) {
      in_ECX[7] = in_ECX[7] | 0x80000;
      in_ECX[9] = 0;
      iVar12 = FUN_00707530(0);
      if (iVar12 == 0) {
        puStack_400 = (undefined4 *)FUN_00401f00(0x1c);
        uStack_4 = 0;
        if (puStack_400 == (undefined4 *)0x0) {
          uRam00000018 = uRam00000018 & 0xfffe;
          uStack_4 = 0xffffffff;
          FUN_00405680(0);
        }
        else {
          iVar12 = FUN_0047f920();
          *(ushort *)(iVar12 + 0x18) = *(ushort *)(iVar12 + 0x18) & 0xfffe;
          uStack_4 = 0xffffffff;
          FUN_00405680(iVar12);
        }
      }
      else {
        uVar9 = FUN_00700900();
        FUN_004a1220(iVar12);
        FUN_00405680(uVar9);
      }
      goto LAB_007da748;
    }
    iVar12 = __strnicmp(pcVar13,"HideSecret",10);
    if (iVar12 != 0) {
      iVar12 = __strnicmp(pcVar13,"hair",5);
      if ((iVar12 == 0) && (*(int *)(local_404 + 0xb8) == 0)) {
        in_ECX[7] = in_ECX[7] | 0x40001;
        in_ECX[9] = 0;
        iVar12 = FUN_00707530(0);
        if ((iVar12 != 0) && (DAT_00b42f48 < 5)) {
          *(ushort *)(iVar12 + 0x18) = *(ushort *)(iVar12 + 0x18) & 0xfffe;
          *(undefined1 *)(iVar12 + 0x1a) = 0x80;
        }
      }
      goto LAB_007da748;
    }
    in_ECX[7] = in_ECX[7] | 0x100000;
    in_ECX[9] = 0;
    FUN_0075fa90(DAT_00b4311c);
    (**(code **)(*in_ECX + 0x7c))(3);
  }
  iVar12 = local_404;
  iVar10 = FUN_00707530(0);
  if ((iVar10 != 0) && ((*(byte *)(iVar10 + 0x18) & 1) != 0)) {
    in_ECX[7] = in_ECX[7] | 0x40;
    in_ECX[9] = 0;
  }
  if ((*(int *)(iVar12 + 0xb4) == 0) || (*(int *)(*(int *)(iVar12 + 0xb4) + 0x34) == 0)) {
    uVar9 = (**(code **)(*in_ECX + 0x68))(iVar12);
    FUN_006c61e0(uVar9);
  }
  iVar10 = FUN_00707530(6);
  if (iVar10 != 0) {
    FUN_004a1220(iVar10);
  }
  if ((*(int *)(iVar12 + 0xb8) == 0) && ((in_ECX[7] & 2U) == 0)) {
    in_ECX[7] = in_ECX[7] & 0xfffffffd;
  }
  else {
    in_ECX[7] = in_ECX[7] | 2;
  }
  in_ECX[9] = 0;
  uVar9 = 1;
LAB_007daacc:
  *unaff_FS_OFFSET = local_c;
  return uVar9;
}



void FUN_007dab00(char *param_1,void *param_2,int param_3)

{
  char cVar1;
  void *_Dst;
  void *in_ECX;
  int iVar2;
  
  *(int *)((int)in_ECX + 0x100) = param_3;
  if ((param_3 == 0) || (param_2 == (void *)0x0)) {
    *(undefined4 *)((int)in_ECX + 0x104) = 0;
  }
  else {
    _Dst = (void *)FUN_00401f00(param_3);
    *(void **)((int)in_ECX + 0x104) = _Dst;
    _memcpy(_Dst,param_2,*(size_t *)((int)in_ECX + 0x100));
  }
  _memset(in_ECX,0,0x100);
  if (param_1 != (char *)0x0) {
    iVar2 = (int)in_ECX - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar2] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  return;
}



char FUN_007dab80(void)

{
  char cVar1;
  
  cVar1 = '\0';
  switch(DAT_00b42f48) {
  case 1:
    return '\x01';
  case 2:
    return '\x02';
  case 3:
    return '\x05';
  case 4:
    return '\b';
  case 5:
    break;
  case 6:
    if (DAT_00b42ea5 == '\0') {
      if (DAT_00b43070 == '\0') {
        return '\x06';
      }
      return (DAT_00b43071 != '\0') + '\x0e';
    }
    if (DAT_00b43070 == '\0') {
      return '\a';
    }
    return (DAT_00b43071 != '\0') + '\x10';
  case 7:
    if (DAT_00b43070 != '\0') {
      return (DAT_00b43071 != '\0') + '\x12';
    }
    cVar1 = '\t';
  default:
    return cVar1;
  }
  if (DAT_00b42ea5 == '\0') {
    if (DAT_00b43070 == '\0') {
      return '\x03';
    }
    return (DAT_00b43071 != '\0') + '\n';
  }
  if (DAT_00b43070 == '\0') {
    return '\x04';
  }
  return (DAT_00b43071 != '\0') + '\f';
}



undefined4 FUN_007dac70(undefined4 param_1)

{
  undefined4 local_4;
  
  local_4 = 0;
  FUN_0055e000(param_1,&local_4);
  return local_4;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_007daca0(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  undefined1 auStack_11c [3];
  undefined1 local_119;
  int local_118;
  uint uStack_114;
  int iStack_110;
  undefined4 local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_11c;
  uVar5 = 0;
  local_119 = 0;
  uVar1 = 0;
  if (param_1 != 0) {
    _sprintf(local_108,"\\Data\\Shaders\\%s",param_1);
    puVar2 = (undefined4 *)FUN_00431690(local_108,0,0);
    uVar1 = local_119;
    if (puVar2 != (undefined4 *)0x0) {
      local_10c = 1;
      iVar3 = (*(code *)puVar2[1])(puVar2,&local_118,0xc,&local_10c,1);
      if ((iVar3 == 0xc) && (local_118 == 100)) {
        uVar4 = FUN_00401f00(iStack_110);
        *(undefined4 *)(in_ECX + 4) = uVar4;
        iVar3 = FUN_0042c8e0(uVar4,iStack_110);
        if (iVar3 == iStack_110) {
          iVar3 = *(int *)(in_ECX + 4);
          local_119 = 1;
          if (uStack_114 != 0) {
            do {
              FUN_00412d30(iVar3,iVar3);
              uVar5 = uVar5 + 1;
              iVar3 = iVar3 + 0x104 + *(int *)(iVar3 + 0x100);
            } while (uVar5 < uStack_114);
          }
        }
        else {
          FUN_00401f20(*(undefined4 *)(in_ECX + 4));
          *(undefined4 *)(in_ECX + 4) = 0;
        }
      }
      (**(code **)*puVar2)(1);
      uVar1 = local_119;
    }
  }
  return uVar1;
}



void FUN_007dadc0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a91674;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_007dade0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a91674;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007dae10(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cef98;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a916a8;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a91674;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007dae80(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a916c8;
  if ((*(char *)(in_ECX + 4) != '\0') && (uVar3 = 0, in_ECX[1] != 0)) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[2] + uVar3 * 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = puVar2 + 1;
        puVar2 = (undefined4 *)*puVar2;
        FUN_00401f20(*puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)in_ECX[1]);
  }
  FUN_007dae10();
  return;
}



uint FUN_007daed0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int in_ECX;
  
  uVar3 = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    uVar3 = (int)cVar2 + uVar3 * 0x21;
    cVar2 = *pcVar1;
  }
  return uVar3 % *(uint *)(in_ECX + 4);
}



void FUN_007daf10(byte param_1)

{
  FUN_007dae10();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007daf30(byte param_1)

{
  FUN_007dae80();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007daf50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x108,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    param_3 = 0;
  }
  else {
    param_3 = FUN_007dab00(param_1,param_2,param_3);
  }
  uVar1 = (uint)*(ushort *)(in_ECX + 10);
  local_4 = 0xffffffff;
  if (*(ushort *)(in_ECX + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(in_ECX + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&param_3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007db010(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_00401f20(*in_ECX);
    *in_ECX = 0;
  }
  if (in_ECX[1] != 0) {
    FUN_00401f20(in_ECX[1]);
    in_ECX[1] = 0;
  }
  FUN_007dae80();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_007db050(int param_1)

{
  char cVar1;
  uint uVar2;
  void *_Dst;
  char *pcVar3;
  char *pcVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_78 [4];
  char local_74 [100];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cefcb;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)local_78;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff84;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[3] = 0x25;
  in_ECX[2] = &PTR_FUN_00a91674;
  in_ECX[5] = 0;
  _Dst = (void *)FUN_00401f00(0x94,uVar2);
  in_ECX[4] = _Dst;
  _memset(_Dst,0,in_ECX[3] * 4);
  *(undefined1 *)(in_ECX + 6) = 1;
  in_ECX[2] = &PTR_FUN_00a916e8;
  local_4 = 0;
  in_ECX[1] = 0;
  *in_ECX = 0;
  if (0 < param_1) {
    _sprintf(local_74,"shaderpackage%03i.sdp",param_1);
    pcVar3 = local_74;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar4 = (char *)FUN_00401f00(pcVar3 + (1 - (int)(local_74 + 1)),uVar2);
    *in_ECX = pcVar4;
    pcVar3 = local_74;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007db1b0(void)

{
  undefined4 in_stack_0000001c;
  
  FUN_00765480(in_stack_0000001c,0);
  _DAT_00b45dd4 = DAT_00b46658 - DAT_00b3f92c;
  _DAT_00b45dd8 = DAT_00b4665c - DAT_00b3f930;
  _DAT_00b45ddc = DAT_00b46660 - DAT_00b3f934;
  _DAT_00b45de0 = 0;
  return 0;
}



void FUN_007db260(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int iVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cf098;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9170c;
  puVar2 = (undefined4 *)in_ECX[0x2f];
  local_4 = 9;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x2f] = 0;
  }
  piVar6 = in_ECX + 0x1f;
  iVar5 = 0x10;
  do {
    puVar2 = (undefined4 *)piVar6[0x12];
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      piVar6[0x12] = 0;
    }
    if (*piVar6 != 0) {
      piVar1 = (int *)(*piVar6 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0(uVar3);
      }
      *piVar6 = 0;
    }
    piVar6 = piVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar2 = (undefined4 *)in_ECX[0x45];
  local_4._0_1_ = 8;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x44];
  local_4._0_1_ = 7;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x43];
  local_4._0_1_ = 6;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x42];
  local_4._0_1_ = 5;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x41];
  local_4._0_1_ = 4;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4._0_1_ = 3;
  _eh_vector_destructor_iterator_(in_ECX + 0x31,4,0x10,FUN_007016a0);
  puVar2 = (undefined4 *)in_ECX[0x30];
  local_4._0_1_ = 2;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x2f];
  local_4._0_1_ = 1;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x1f,4,0x10,FUN_004027d0);
  local_4 = 0xffffffff;
  FUN_008012e0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007db4b0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d00c6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)(in_ECX + 0x2c);
  if (*(int *)(in_ECX + 0x2c) == 0) {
    iVar3 = FUN_00401f00(0x34,uVar2);
    local_4 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_009a4750(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar4);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("Scroll",0x10000007,0,0,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45e64,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("EyePos",0x10000007,0,1,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45dd4,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("SunDir",0x10000007,0,2,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45df4,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("SunColor",0x10000007,0,3,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45e04,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("NormalOffset",0x10000007,0,4,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45ec4,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("ShallowColor",0x10000007,0,5,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45e14,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("DeepColor",0x10000007,0,6,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45e24,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("ReflectionColor",0x10000007,0,7,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45e34,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("VarAmounts",0x10000007,0,8,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45e44,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("FogParam",0x10000007,0,9,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45e74,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("FogColor",0x10000007,0,10,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45e84,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("FresnelRI",0x10000007,0,0xb,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45e94,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("BlendRadius",0x10000007,0,0xc,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45eb4,0);
  }
  puVar1 = (undefined4 *)(in_ECX + 0x30);
  if (*(int *)(in_ECX + 0x30) == 0) {
    iVar3 = FUN_00401f00(0x34,uVar2);
    local_4 = 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_009a8490(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar4);
    (**(code **)(*(int *)*puVar1 + 0x18))("WorldViewProjTranspose",0x20000009,0,0,4,0,0,0,0,0);
    (**(code **)(*(int *)*puVar1 + 0x1c))("WorldTranspose",0x20000009,4,&DAT_00a2f7ec);
    (**(code **)(*(int *)*puVar1 + 0x18))
              (&DAT_00a917cc,0x10000007,0,8,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45ea4,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("QPosAdjust",0x10000007,0,9,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45ed4,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("DepthOffset",0x10000007,0,10,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45ee4,0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_007db840(void)

{
  int *piVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  char **ppcVar6;
  char *_Format;
  int *local_874;
  int local_870;
  undefined1 **ppuStack_86c;
  char *pcStack_868;
  char *pcStack_864;
  char *pcStack_860;
  undefined1 *puStack_85c;
  char *pcStack_858;
  undefined1 *puStack_854;
  char *pcStack_850;
  undefined1 *puStack_84c;
  undefined *puStack_848;
  undefined1 *puStack_844;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  undefined4 uStack_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  char *pcStack_818;
  char *pcStack_814;
  undefined1 *puStack_810;
  char *pcStack_80c;
  undefined1 *puStack_808;
  undefined *puStack_804;
  undefined1 *puStack_800;
  undefined4 uStack_7fc;
  undefined1 auStack_7f8 [44];
  char *pcStack_7cc;
  char *pcStack_7c8;
  undefined1 *puStack_7c4;
  char *pcStack_7c0;
  undefined1 *puStack_7bc;
  undefined *puStack_7b8;
  undefined1 *puStack_7b4;
  undefined4 uStack_7b0;
  undefined1 auStack_7ac [44];
  char *pcStack_780;
  char *pcStack_77c;
  undefined1 *puStack_778;
  undefined *puStack_774;
  undefined1 *puStack_770;
  undefined4 uStack_76c;
  undefined1 auStack_768 [52];
  char *pcStack_734;
  char *pcStack_730;
  undefined1 *puStack_72c;
  char *pcStack_728;
  undefined1 *puStack_724;
  char *pcStack_720;
  undefined1 *puStack_71c;
  undefined *puStack_718;
  undefined1 *puStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  char *pcStack_6e8;
  char *pcStack_6e4;
  undefined1 *puStack_6e0;
  char *pcStack_6dc;
  undefined1 *puStack_6d8;
  undefined *puStack_6d4;
  undefined1 *puStack_6d0;
  undefined4 uStack_6cc;
  undefined1 auStack_6c8 [44];
  char *pcStack_69c;
  char *pcStack_698;
  undefined1 *puStack_694;
  undefined *puStack_690;
  undefined1 *puStack_68c;
  undefined4 uStack_688;
  undefined1 auStack_684 [52];
  char *pcStack_650;
  char *pcStack_64c;
  undefined1 *puStack_648;
  char *pcStack_644;
  undefined1 *puStack_640;
  char *pcStack_63c;
  undefined1 *puStack_638;
  char *pcStack_634;
  undefined1 *puStack_630;
  undefined *puStack_62c;
  undefined1 *puStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  char *pcStack_604;
  char *pcStack_600;
  undefined1 *puStack_5fc;
  char *pcStack_5f8;
  undefined1 *puStack_5f4;
  char *pcStack_5f0;
  undefined1 *puStack_5ec;
  undefined *puStack_5e8;
  undefined1 *puStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  char *pcStack_5b8;
  char *pcStack_5b4;
  undefined1 *puStack_5b0;
  char *pcStack_5ac;
  undefined1 *puStack_5a8;
  char *pcStack_5a4;
  undefined1 *puStack_5a0;
  char *pcStack_59c;
  undefined1 *puStack_598;
  undefined *puStack_594;
  undefined1 *puStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  char *pcStack_56c;
  char *pcStack_568;
  undefined1 *puStack_564;
  char *pcStack_560;
  undefined1 *puStack_55c;
  char *pcStack_558;
  undefined1 *puStack_554;
  undefined *puStack_550;
  undefined1 *puStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  char *pcStack_520;
  undefined *puStack_51c;
  undefined1 *puStack_518;
  undefined *puStack_514;
  undefined1 *puStack_510;
  undefined4 uStack_50c;
  undefined1 auStack_508 [52];
  char *pcStack_4d4;
  char *pcStack_4d0;
  undefined1 *puStack_4cc;
  char *pcStack_4c8;
  undefined1 *puStack_4c4;
  undefined *puStack_4c0;
  undefined1 *puStack_4bc;
  undefined *puStack_4b8;
  undefined1 *puStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  char *pcStack_488;
  char *pcStack_484;
  undefined1 *puStack_480;
  undefined *puStack_47c;
  undefined1 *puStack_478;
  undefined *puStack_474;
  undefined1 *puStack_470;
  undefined4 uStack_46c;
  undefined1 auStack_468 [44];
  char *pcStack_43c;
  undefined *puStack_438;
  undefined1 *puStack_434;
  char *pcStack_430;
  undefined1 *puStack_42c;
  undefined *puStack_428;
  undefined1 *puStack_424;
  undefined4 uStack_420;
  undefined1 auStack_41c [44];
  char *pcStack_3f0;
  char *pcStack_3ec;
  undefined1 *puStack_3e8;
  char *pcStack_3e4;
  undefined1 *puStack_3e0;
  undefined4 uStack_3dc;
  undefined1 auStack_3d8 [52];
  char *local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined1 local_394 [60];
  char *local_358;
  char *local_354;
  undefined1 *local_350;
  undefined4 local_34c;
  undefined1 local_348 [60];
  char acStack_30c [256];
  char local_20c [260];
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_874;
  local_3a4 = "water\\2_ab\\v\\water.v.hlsl";
  local_3a0 = 0;
  local_39c = 0;
  local_398 = 0;
  local_870 = in_ECX;
  _memset(local_394,0,0x3c);
  local_358 = "water\\2_ab\\v\\water.v.hlsl";
  local_354 = "WADING";
  local_350 = &DAT_00a2f7ec;
  local_34c = 0;
  _memset(local_348,0,0x3c);
  FUN_00801030(local_3a4,local_108);
  _sprintf(local_20c,"WATER000.vso");
  local_874 = (int *)FUN_008014e0(local_108,&local_3a0,"vs_1_1",local_20c,0,0);
  piVar1 = *(int **)(in_ECX + 0xbc);
  if (piVar1 != local_874) {
    if (((piVar1 != (int *)0x0) && (LVar3 = InterlockedDecrement(piVar1 + 1), LVar3 == 0)) &&
       (piVar1 != (int *)0x0)) {
      (**(code **)*piVar1)(1);
    }
    *(int **)(in_ECX + 0xbc) = local_874;
    if (local_874 != (int *)0x0) {
      InterlockedIncrement(local_874 + 1);
    }
  }
  FUN_00801030(local_358,local_108);
  _sprintf(local_20c,"WATER001.vso");
  local_874 = (int *)FUN_008014e0(local_108,&local_354,"vs_1_1",local_20c,0,0);
  piVar1 = *(int **)(in_ECX + 0xc0);
  if (piVar1 != local_874) {
    if (((piVar1 != (int *)0x0) && (LVar3 = InterlockedDecrement(piVar1 + 1), LVar3 == 0)) &&
       (piVar1 != (int *)0x0)) {
      (**(code **)*piVar1)(1);
    }
    *(int **)(in_ECX + 0xc0) = local_874;
    if (local_874 != (int *)0x0) {
      InterlockedIncrement(local_874 + 1);
    }
  }
  pcStack_868 = "ps_1_3";
  if (1 < DAT_00b42f48) {
    pcStack_868 = "ps_2_0";
  }
  if (DAT_00b42f48 < 5) {
    _Format = "water\\2_0\\p\\water.p.hlsl";
  }
  else {
    _Format = "water\\2_ab\\p\\water.p.hlsl";
  }
  _sprintf(acStack_30c,_Format);
  pcStack_864 = acStack_30c;
  uStack_83c = 0;
  uStack_838 = 0;
  uStack_834 = 0;
  uStack_830 = 0;
  uStack_82c = 0;
  uStack_828 = 0;
  uStack_824 = 0;
  uStack_820 = 0;
  uStack_81c = 0;
  pcStack_818 = acStack_30c;
  pcStack_860 = "WATER";
  puStack_85c = &DAT_00a2f7ec;
  pcStack_858 = "REFLECTIONS";
  puStack_854 = &DAT_00a2f7ec;
  pcStack_850 = "DEPTH";
  puStack_84c = &DAT_00a2f7ec;
  puStack_848 = &DAT_00a90d88;
  puStack_844 = &DAT_00a2f7ec;
  uStack_840 = 0;
  pcStack_814 = "WATER";
  puStack_810 = &DAT_00a2f7ec;
  pcStack_80c = "REFLECTIONS";
  puStack_808 = &DAT_00a2f7ec;
  puStack_804 = &DAT_00a90d88;
  puStack_800 = &DAT_00a2f7ec;
  uStack_7fc = 0;
  _memset(auStack_7f8,0,0x2c);
  pcStack_7cc = acStack_30c;
  pcStack_7c8 = "WATER";
  puStack_7c4 = &DAT_00a2f7ec;
  pcStack_7c0 = "DEPTH";
  puStack_7bc = &DAT_00a2f7ec;
  puStack_7b8 = &DAT_00a90d88;
  puStack_7b4 = &DAT_00a2f7ec;
  uStack_7b0 = 0;
  _memset(auStack_7ac,0,0x2c);
  pcStack_780 = acStack_30c;
  pcStack_77c = "WATER";
  puStack_778 = &DAT_00a2f7ec;
  puStack_774 = &DAT_00a90d88;
  puStack_770 = &DAT_00a2f7ec;
  uStack_76c = 0;
  _memset(auStack_768,0,0x34);
  pcStack_734 = acStack_30c;
  pcStack_730 = "WATER";
  puStack_72c = &DAT_00a2f7ec;
  pcStack_728 = "INTERIORWATER";
  puStack_724 = &DAT_00a2f7ec;
  pcStack_720 = "REFLECTIONS";
  puStack_71c = &DAT_00a2f7ec;
  puStack_718 = &DAT_00a90d88;
  puStack_714 = &DAT_00a2f7ec;
  uStack_710 = 0;
  uStack_70c = 0;
  uStack_708 = 0;
  pcStack_6dc = "INTERIORWATER";
  uStack_704 = 0;
  uStack_700 = 0;
  uStack_6fc = 0;
  uStack_6f8 = 0;
  uStack_6f4 = 0;
  uStack_6f0 = 0;
  uStack_6ec = 0;
  pcStack_6e4 = "WATER";
  puStack_6e0 = &DAT_00a2f7ec;
  puStack_6d8 = &DAT_00a2f7ec;
  puStack_6d4 = &DAT_00a90d88;
  puStack_6d0 = &DAT_00a2f7ec;
  uStack_6cc = 0;
  pcStack_6e8 = pcStack_734;
  _memset(auStack_6c8,0,0x2c);
  pcStack_69c = acStack_30c;
  pcStack_698 = "UNDERWATER";
  puStack_694 = &DAT_00a2f7ec;
  puStack_690 = &DAT_00a90d88;
  puStack_68c = &DAT_00a2f7ec;
  uStack_688 = 0;
  _memset(auStack_684,0,0x34);
  uStack_620 = 0;
  uStack_61c = 0;
  uStack_618 = 0;
  uStack_614 = 0;
  uStack_610 = 0;
  uStack_60c = 0;
  uStack_608 = 0;
  pcStack_650 = acStack_30c;
  pcStack_604 = acStack_30c;
  pcStack_634 = "DEPTH";
  pcStack_5f0 = "DEPTH";
  pcStack_5b8 = acStack_30c;
  pcStack_64c = "WATER";
  puStack_648 = &DAT_00a2f7ec;
  pcStack_644 = "REFLECTIONS";
  puStack_640 = &DAT_00a2f7ec;
  pcStack_63c = "WADING";
  puStack_638 = &DAT_00a2f7ec;
  puStack_630 = &DAT_00a2f7ec;
  puStack_62c = &DAT_00a90d88;
  puStack_628 = &DAT_00a2f7ec;
  uStack_624 = 0;
  pcStack_600 = "WATER";
  puStack_5fc = &DAT_00a2f7ec;
  pcStack_5f8 = "WADING";
  puStack_5f4 = &DAT_00a2f7ec;
  puStack_5ec = &DAT_00a2f7ec;
  puStack_5e8 = &DAT_00a90d88;
  puStack_5e4 = &DAT_00a2f7ec;
  uStack_5e0 = 0;
  uStack_5dc = 0;
  uStack_5d8 = 0;
  uStack_5d4 = 0;
  uStack_5d0 = 0;
  uStack_5cc = 0;
  uStack_5c8 = 0;
  uStack_5c4 = 0;
  uStack_5c0 = 0;
  uStack_5bc = 0;
  pcStack_5b4 = "WATER";
  puStack_5b0 = &DAT_00a2f7ec;
  uStack_588 = 0;
  uStack_584 = 0;
  uStack_580 = 0;
  uStack_57c = 0;
  uStack_578 = 0;
  uStack_574 = 0;
  uStack_570 = 0;
  pcStack_56c = acStack_30c;
  pcStack_5ac = "INTERIORWATER";
  pcStack_560 = "INTERIORWATER";
  pcStack_59c = "WADING";
  pcStack_558 = "WADING";
  pcStack_520 = acStack_30c;
  puStack_5a8 = &DAT_00a2f7ec;
  pcStack_5a4 = "REFLECTIONS";
  puStack_5a0 = &DAT_00a2f7ec;
  puStack_598 = &DAT_00a2f7ec;
  puStack_594 = &DAT_00a90d88;
  puStack_590 = &DAT_00a2f7ec;
  uStack_58c = 0;
  pcStack_568 = "WATER";
  puStack_564 = &DAT_00a2f7ec;
  puStack_55c = &DAT_00a2f7ec;
  puStack_554 = &DAT_00a2f7ec;
  puStack_550 = &DAT_00a90d88;
  puStack_54c = &DAT_00a2f7ec;
  uStack_548 = 0;
  uStack_544 = 0;
  uStack_540 = 0;
  uStack_53c = 0;
  uStack_538 = 0;
  uStack_534 = 0;
  uStack_530 = 0;
  uStack_52c = 0;
  uStack_528 = 0;
  uStack_524 = 0;
  puStack_51c = &DAT_00a91870;
  puStack_518 = &DAT_00a2f7ec;
  puStack_514 = &DAT_00a90d88;
  puStack_510 = &DAT_00a2f7ec;
  uStack_50c = 0;
  _memset(auStack_508,0,0x34);
  pcStack_4d4 = acStack_30c;
  pcStack_488 = acStack_30c;
  pcStack_4d0 = "WATER";
  puStack_4cc = &DAT_00a2f7ec;
  pcStack_4c8 = "REFLECTIONS";
  puStack_4c4 = &DAT_00a2f7ec;
  puStack_4c0 = &DAT_00a9186c;
  puStack_4bc = &DAT_00a2f7ec;
  puStack_4b8 = &DAT_00a90d88;
  puStack_4b4 = &DAT_00a2f7ec;
  uStack_4b0 = 0;
  uStack_4ac = 0;
  uStack_4a8 = 0;
  uStack_4a4 = 0;
  uStack_4a0 = 0;
  uStack_49c = 0;
  uStack_498 = 0;
  uStack_494 = 0;
  uStack_490 = 0;
  uStack_48c = 0;
  pcStack_484 = "WATER";
  puStack_480 = &DAT_00a2f7ec;
  puStack_47c = &DAT_00a9186c;
  puStack_478 = &DAT_00a2f7ec;
  puStack_474 = &DAT_00a90d88;
  puStack_470 = &DAT_00a2f7ec;
  uStack_46c = 0;
  _memset(auStack_468,0,0x2c);
  pcStack_43c = acStack_30c;
  puStack_438 = &DAT_00a91870;
  puStack_434 = &DAT_00a2f7ec;
  pcStack_430 = "LOD_LAVA";
  puStack_42c = &DAT_00a2f7ec;
  puStack_428 = &DAT_00a90d88;
  puStack_424 = &DAT_00a2f7ec;
  uStack_420 = 0;
  _memset(auStack_41c,0,0x2c);
  pcStack_3f0 = acStack_30c;
  pcStack_3ec = "WATER";
  puStack_3e8 = &DAT_00a2f7ec;
  pcStack_3e4 = "REFLECTIONS";
  puStack_3e0 = &DAT_00a2f7ec;
  uStack_3dc = 0;
  _memset(auStack_3d8,0,0x34);
  iVar5 = 0;
  ppcVar6 = &pcStack_864;
  local_874 = (int *)(local_870 + 0xc4);
  do {
    ppuStack_86c = ppcVar6;
    if (*ppcVar6 != (char *)0x0) {
      FUN_00801030(*ppcVar6,local_108);
      _sprintf(local_20c,"WATER%03i.pso",iVar5);
      puVar4 = (undefined4 *)FUN_00801c90(local_108,ppcVar6 + 1,pcStack_868,local_20c,0,1);
      puVar2 = (undefined4 *)*local_874;
      if (puVar2 != puVar4) {
        if (((puVar2 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar2 + 1), LVar3 == 0)
            ) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        *local_874 = (int)puVar4;
        if (puVar4 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar4 + 1);
        }
      }
    }
    local_874 = local_874 + 1;
    iVar5 = iVar5 + 1;
    ppcVar6 = ppuStack_86c + 0x13;
  } while (iVar5 < 0x10);
  return;
}



undefined4 FUN_007dc1a0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  LONG LVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf0f0;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar8 = 0;
  do {
    if (*(int *)(in_ECX + 0x7c + iVar8 * 4) == 0) {
      piVar5 = (int *)FUN_007606a0(&local_20,uVar4);
      iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
      local_4 = 0;
      if (iVar2 != *piVar5) {
        if (iVar2 != 0) {
          piVar1 = (int *)(iVar2 + 0x60);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_007604d0();
          }
        }
        iVar2 = *piVar5;
        *(int *)(in_ECX + 0x7c + iVar8 * 4) = iVar2;
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
        }
      }
      local_4 = 0xffffffff;
      if ((local_20 != 0) &&
         (*(int *)(local_20 + 0x60) = *(int *)(local_20 + 0x60) + -1, *(int *)(local_20 + 0x60) == 0
         )) {
        FUN_007604d0();
      }
      FUN_00772630(&local_28);
      local_4 = 1;
      FUN_00801110(local_28,0,3,2);
      FUN_00771640(1);
      FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x7c + iVar8 * 4) + 0x14),local_28);
      piVar5 = (int *)FUN_00772630(&local_1c);
      local_4._0_1_ = 2;
      if (local_28 != *piVar5) {
        if ((local_28 != 0) &&
           (*(int *)(local_28 + 0x5c) = *(int *)(local_28 + 0x5c) + -1,
           *(int *)(local_28 + 0x5c) == 0)) {
          FUN_00772560();
        }
        local_28 = *piVar5;
        if (local_28 != 0) {
          *(int *)(local_28 + 0x5c) = *(int *)(local_28 + 0x5c) + 1;
        }
      }
      local_4._0_1_ = 1;
      if ((local_1c != 0) &&
         (*(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + -1, *(int *)(local_1c + 0x5c) == 0
         )) {
        FUN_00772560();
      }
      FUN_00801110(local_28,1,1,2);
      FUN_00771640(1);
      FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x7c + iVar8 * 4) + 0x14),local_28);
      piVar5 = (int *)FUN_00772630(&local_18);
      local_4._0_1_ = 3;
      if (local_28 != *piVar5) {
        if ((local_28 != 0) &&
           (*(int *)(local_28 + 0x5c) = *(int *)(local_28 + 0x5c) + -1,
           *(int *)(local_28 + 0x5c) == 0)) {
          FUN_00772560();
        }
        local_28 = *piVar5;
        if (local_28 != 0) {
          *(int *)(local_28 + 0x5c) = *(int *)(local_28 + 0x5c) + 1;
        }
      }
      local_4._0_1_ = 1;
      if ((local_18 != 0) &&
         (*(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + -1, *(int *)(local_18 + 0x5c) == 0
         )) {
        FUN_00772560();
      }
      FUN_00801110(local_28,2,1,2);
      FUN_00771640(1);
      FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x7c + iVar8 * 4) + 0x14),local_28);
      piVar5 = (int *)FUN_00772630(&local_14);
      local_4._0_1_ = 4;
      if (local_28 != *piVar5) {
        if ((local_28 != 0) &&
           (*(int *)(local_28 + 0x5c) = *(int *)(local_28 + 0x5c) + -1,
           *(int *)(local_28 + 0x5c) == 0)) {
          FUN_00772560();
        }
        local_28 = *piVar5;
        if (local_28 != 0) {
          *(int *)(local_28 + 0x5c) = *(int *)(local_28 + 0x5c) + 1;
        }
      }
      local_4._0_1_ = 1;
      if ((local_14 != 0) &&
         (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0
         )) {
        FUN_00772560();
      }
      FUN_00801110(local_28,3,3,2);
      FUN_00771640(1);
      FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x7c + iVar8 * 4) + 0x14),local_28);
      piVar5 = (int *)FUN_00772630(&local_10);
      local_4._0_1_ = 5;
      if (local_28 != *piVar5) {
        if ((local_28 != 0) &&
           (*(int *)(local_28 + 0x5c) = *(int *)(local_28 + 0x5c) + -1,
           *(int *)(local_28 + 0x5c) == 0)) {
          FUN_00772560();
        }
        local_28 = *piVar5;
        if (local_28 != 0) {
          *(int *)(local_28 + 0x5c) = *(int *)(local_28 + 0x5c) + 1;
        }
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      if ((local_10 != 0) &&
         (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0
         )) {
        FUN_00772560();
      }
      FUN_00801110(local_28,4,3,2);
      FUN_00771640(1);
      FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x7c + iVar8 * 4) + 0x14),local_28);
      local_4 = 0xffffffff;
      if ((local_28 != 0) &&
         (*(int *)(local_28 + 0x5c) = *(int *)(local_28 + 0x5c) + -1, *(int *)(local_28 + 0x5c) == 0
         )) {
        FUN_00772560();
      }
    }
    if ((((iVar8 == 7) || (iVar8 == 9)) || (iVar8 == 8)) || (iVar8 == 10)) {
      iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
      local_24 = *(undefined4 **)(in_ECX + 0xc0);
      puVar3 = *(undefined4 **)(iVar2 + 0x58);
      if (puVar3 != local_24) {
        if (((puVar3 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar3 + 1), LVar6 == 0)
            ) && (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
        *(undefined4 **)(iVar2 + 0x58) = local_24;
        if (local_24 != (undefined4 *)0x0) {
          InterlockedIncrement(local_24 + 1);
        }
      }
    }
    else {
      FUN_007aecb0(*(undefined4 *)(in_ECX + 0xbc));
    }
    iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
    local_24 = *(undefined4 **)(in_ECX + 0xc4 + iVar8 * 4);
    puVar3 = *(undefined4 **)(iVar2 + 0x44);
    if (puVar3 != local_24) {
      if (((puVar3 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar3 + 1), LVar6 == 0))
         && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 **)(iVar2 + 0x44) = local_24;
      if (local_24 != (undefined4 *)0x0) {
        InterlockedIncrement(local_24 + 1);
      }
    }
    iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(7,1,0);
    iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x17,4,0);
    iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x34,0,0);
    iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xf,1,0);
    iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x18,0,0);
    iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x19,5,0);
    iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xa8,7,0);
    if (iVar8 == 0xc) {
      iVar2 = *(int *)(in_ECX + 0xac);
      if (*(int *)(iVar2 + 0x30) == 0) {
        uVar7 = FUN_00772df0();
        *(undefined4 *)(iVar2 + 0x30) = uVar7;
      }
      FUN_00772cd0(0x1b,0,0);
      iVar2 = *(int *)(in_ECX + 0xac);
      if (*(int *)(iVar2 + 0x30) == 0) {
        uVar7 = FUN_00772df0();
        *(undefined4 *)(iVar2 + 0x30) = uVar7;
      }
      uVar7 = 0xe;
LAB_007dc887:
      FUN_00772cd0(uVar7,1,0);
    }
    else {
      iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
      if (*(int *)(iVar2 + 0x30) == 0) {
        uVar7 = FUN_00772df0();
        *(undefined4 *)(iVar2 + 0x30) = uVar7;
      }
      FUN_00772cd0(0x1b,1,0);
      iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
      if (*(int *)(iVar2 + 0x30) == 0) {
        uVar7 = FUN_00772df0();
        *(undefined4 *)(iVar2 + 0x30) = uVar7;
      }
      FUN_00772cd0(0x13,5,0);
      iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
      if (*(int *)(iVar2 + 0x30) == 0) {
        uVar7 = FUN_00772df0();
        *(undefined4 *)(iVar2 + 0x30) = uVar7;
      }
      FUN_00772cd0(0x14,6,0);
      iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
      if (*(int *)(iVar2 + 0x30) == 0) {
        uVar7 = FUN_00772df0();
        *(undefined4 *)(iVar2 + 0x30) = uVar7;
      }
      FUN_00772cd0(0xe,1,0);
      if ((((iVar8 == 7) || (iVar8 == 8)) || (iVar8 == 9)) || (iVar8 == 10)) {
        iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
        if (*(int *)(iVar2 + 0x30) == 0) {
          uVar7 = FUN_00772df0();
          *(undefined4 *)(iVar2 + 0x30) = uVar7;
        }
        FUN_00772cd0(0x34,1,0);
        iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
        if (*(int *)(iVar2 + 0x30) == 0) {
          uVar7 = FUN_00772df0();
          *(undefined4 *)(iVar2 + 0x30) = uVar7;
        }
        FUN_00772cd0(0x39,0,0);
        iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
        if (*(int *)(iVar2 + 0x30) == 0) {
          uVar7 = FUN_00772df0();
          *(undefined4 *)(iVar2 + 0x30) = uVar7;
        }
        FUN_00772cd0(0x37,7,0);
        iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
        if (*(int *)(iVar2 + 0x30) == 0) {
          uVar7 = FUN_00772df0();
          *(undefined4 *)(iVar2 + 0x30) = uVar7;
        }
        FUN_00772cd0(0x38,8,0);
      }
      if (((iVar8 == 0) || (iVar8 == 2)) ||
         (((iVar8 == 1 || ((iVar8 == 3 || (iVar8 == 4)))) || (iVar8 == 5)))) {
        iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
        if (*(int *)(iVar2 + 0x30) == 0) {
          uVar7 = FUN_00772df0();
          *(undefined4 *)(iVar2 + 0x30) = uVar7;
        }
        FUN_00772cd0(0x34,1,0);
        iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
        if (*(int *)(iVar2 + 0x30) == 0) {
          uVar7 = FUN_00772df0();
          *(undefined4 *)(iVar2 + 0x30) = uVar7;
        }
        FUN_00772cd0(0x38,3,0);
        iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
        if (*(int *)(iVar2 + 0x30) == 0) {
          uVar7 = FUN_00772df0();
          *(undefined4 *)(iVar2 + 0x30) = uVar7;
        }
        FUN_00772cd0(0x39,0,0);
        iVar2 = *(int *)(in_ECX + 0x7c + iVar8 * 4);
        if (*(int *)(iVar2 + 0x30) == 0) {
          uVar7 = FUN_00772df0();
          *(undefined4 *)(iVar2 + 0x30) = uVar7;
        }
        uVar7 = 0x37;
        goto LAB_007dc887;
      }
    }
    iVar8 = iVar8 + 1;
    if (0xf < iVar8) {
      *unaff_FS_OFFSET = local_c;
      return 1;
    }
  } while( true );
}



void FUN_007dc8c0(void)

{
  FUN_007db840();
  FUN_007dc1a0();
  return;
}



void FUN_007dc970(void)

{
  int *in_ECX;
  int iVar1;
  int *piVar2;
  
  piVar2 = in_ECX + 0x1f;
  iVar1 = 0x10;
  do {
    (**(code **)(*in_ECX + 0x94))(*piVar2);
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007dc9a0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf1a8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00802540(uVar2);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a9170c;
  _eh_vector_constructor_iterator_(in_ECX + 0x1f,4,0x10,FUN_007c88a0,FUN_004027d0);
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  local_4._0_1_ = 3;
  _eh_vector_constructor_iterator_(in_ECX + 0x31,4,0x10,FUN_007c88a0,FUN_007016a0);
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  in_ECX[0x43] = 0;
  in_ECX[0x44] = 0;
  in_ECX[0x45] = 0;
  *(undefined1 *)(in_ECX + 8) = 1;
  puVar1 = (undefined4 *)in_ECX[0x42];
  local_4 = CONCAT31(local_4._1_3_,9);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x42] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x44];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x44] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x41];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x41] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x45];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x45] = 0;
  }
  _DAT_00b45e64 = 0;
  _DAT_00b45e68 = 0;
  DAT_00b45dbb = 0;
  _DAT_00b45e54 = 0;
  DAT_00b45dc0 = 0;
  _DAT_00b45e58 = 0;
  _DAT_00b45ec4 = 0;
  _DAT_00b45ec8 = 0;
  _DAT_00b45ecc = 0;
  _DAT_00b45ed0 = 0;
  _DAT_00b45ee4 = 0;
  _DAT_00b45ee8 = 0;
  _DAT_00b45eec = 0;
  _DAT_00b45ef0 = 0;
  if (DAT_00b42f48 < 3) {
    DAT_00b45db9 = 0;
  }
  DAT_00b45dcc = in_ECX;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007dcbb0(byte param_1)

{
  FUN_007db260();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007dcbd0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  LONG LVar6;
  int *in_ECX;
  int iVar7;
  int *unaff_FS_OFFSET;
  float10 fVar8;
  undefined4 *in_stack_00000010;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cf1d8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar5);
  iVar2 = in_stack_00000010[6];
  iVar7 = 0;
  switch(DAT_00b42e90) {
  case 0x17c:
    if (DAT_00b45dba == '\0') {
      if (DAT_00b45dc0 == '\0') {
        iVar7 = in_ECX[0x2b];
      }
      else {
        iVar7 = in_ECX[0x2c];
      }
    }
    else {
      iVar7 = in_ECX[0x2d];
    }
    break;
  case 0x198:
    if (DAT_00b45db8 == '\0') {
      if (DAT_00b45dc0 == '\0') {
        iVar7 = in_ECX[0x26];
      }
      else {
        iVar7 = in_ECX[0x27];
      }
    }
    else if (DAT_00b45dc0 == '\0') {
      iVar7 = in_ECX[0x28];
    }
    else {
      iVar7 = in_ECX[0x29];
    }
    break;
  case 0x199:
    if (DAT_00b45dc0 == '\0') {
      if (DAT_00b45db8 == '\0') {
        iVar7 = in_ECX[0x1f];
      }
      else {
        iVar7 = in_ECX[0x23];
      }
    }
    else if (DAT_00b45db8 == '\0') {
      iVar7 = in_ECX[0x21];
    }
    else {
      iVar7 = in_ECX[0x24];
    }
    break;
  case 0x19a:
    iVar7 = in_ECX[0x2a];
  }
  if ((((DAT_00b45db9 == '\0') || (in_ECX[0x43] == 0)) || (*(char *)(iVar2 + 0x72) == '\0')) &&
     ((iVar7 == in_ECX[0x1f] || (iVar7 == in_ECX[0x21])))) {
    if (DAT_00b45dc0 == '\0') {
      iVar7 = in_ECX[0x20];
    }
    else {
      iVar7 = in_ECX[0x22];
    }
  }
  if (DAT_00b45dbb != '\0') {
    iVar7 = in_ECX[0x25];
  }
  if ((DAT_00b45dba != '\0') && (DAT_00b45dbb == '\0')) {
    iVar7 = in_ECX[0x2a];
  }
  if ((*(char *)(iVar2 + 0x71) != '\0') && (DAT_00b45dbb == '\0')) {
    if (DAT_00b45dba == '\0') {
      if (DAT_00b45dc0 == '\0') {
        iVar7 = in_ECX[0x2b];
      }
      else {
        iVar7 = in_ECX[0x2c];
      }
    }
    else {
      iVar7 = in_ECX[0x2d];
    }
  }
  if (DAT_00b45dd0 != '\0') {
    iVar7 = in_ECX[0x2e];
  }
  if ((((iVar7 == in_ECX[0x26]) || (iVar7 == in_ECX[0x28])) || (iVar7 == in_ECX[0x27])) ||
     (iVar7 == in_ECX[0x29])) {
    _DAT_00b45eb4 = *(undefined4 *)(iVar2 + 0x7c);
  }
  _DAT_00b45eb8 = *(undefined4 *)(iVar2 + 0x80);
  iVar3 = **(int **)(iVar7 + 0x24);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar4 + 1);
    if ((LVar6 == 0) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 *)(iVar3 + 4) = 0;
  }
  iVar3 = *(int *)(*(int *)(iVar7 + 0x24) + 4);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar4 + 1);
    if ((LVar6 == 0) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 *)(iVar3 + 4) = 0;
  }
  iVar3 = *(int *)(*(int *)(iVar7 + 0x24) + 8);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar4 + 1);
    if ((LVar6 == 0) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 *)(iVar3 + 4) = 0;
  }
  iVar3 = *(int *)(*(int *)(iVar7 + 0x24) + 0xc);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar4 + 1);
    if ((LVar6 == 0) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 *)(iVar3 + 4) = 0;
  }
  iVar3 = *(int *)(*(int *)(iVar7 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar4 + 1);
    if ((LVar6 == 0) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 *)(iVar3 + 4) = 0;
  }
  iVar3 = in_stack_00000010[3];
  if (iVar3 != 0) {
    _DAT_00b45e84 = *(undefined4 *)(iVar3 + 0x20);
    _DAT_00b45e88 = *(undefined4 *)(iVar3 + 0x24);
    _DAT_00b45e74 = *(float *)(iVar3 + 0x30);
    _DAT_00b45e8c = *(undefined4 *)(iVar3 + 0x28);
    _DAT_00b45e78 = (undefined4 *)(_DAT_00b45e74 - *(float *)(iVar3 + 0x2c));
    _DAT_00b45e7c = 0;
    _DAT_00b45e80 = 0;
    _DAT_00b45e90 = 0;
    in_stack_00000010 = _DAT_00b45e78;
  }
  if ((in_ECX[0x42] == 0) || (DAT_00b45db8 != '\0')) {
    if ((in_ECX[0x44] == 0) || (DAT_00b45db8 == '\0')) {
      iVar3 = **(int **)(iVar7 + 0x24);
      puVar4 = *(undefined4 **)(iVar3 + 4);
      in_stack_00000010 = DAT_00b430dc;
      if (puVar4 != DAT_00b430dc) {
        if (((puVar4 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar4 + 1), LVar6 == 0)
            ) && (puVar4 != (undefined4 *)0x0)) {
          (**(code **)*puVar4)(1);
        }
        *(undefined4 **)(iVar3 + 4) = in_stack_00000010;
        if (in_stack_00000010 != (undefined4 *)0x0) {
          InterlockedIncrement(in_stack_00000010 + 1);
        }
      }
    }
    else {
      FUN_0076c910(in_ECX[0x44]);
    }
  }
  else {
    FUN_0076c910(in_ECX[0x42]);
  }
  if (*(char *)(iVar2 + 0x71) == '\0') {
    FUN_0076c910(in_ECX[0x41]);
  }
  if (in_ECX[0x45] != 0) {
    FUN_0076c910(in_ECX[0x45]);
  }
  if (DAT_00b45db9 != '\0') {
    if ((*(char *)(iVar2 + 0x72) == '\0') || (in_ECX[0x43] == 0)) {
      if ((in_ECX[0x43] != 0) && ((iVar7 == in_ECX[0x26] || (iVar7 == in_ECX[0x27])))) {
        FUN_0076c910(in_ECX[0x43]);
      }
    }
    else {
      FUN_0076c910(in_ECX[0x43]);
      _DAT_00b45ee4 = (float)*(int *)(iVar2 + 0x74);
      _DAT_00b45ee8 = (float)*(int *)(iVar2 + 0x78);
    }
  }
  if ((*(char *)(iVar2 + 0x70) != '\0') && (*(int *)(iVar2 + 0x6c) != 0)) {
    FUN_0076c910(*(int *)(iVar2 + 0x6c));
  }
  if (DAT_00b42d78 == (code *)0x0) {
    fVar8 = (float10)0;
  }
  else {
    fVar8 = (float10)(*DAT_00b42d78)(1,1);
  }
  in_stack_00000010 = (undefined4 *)(float)fVar8;
  _DAT_00b45e64 = (float)in_stack_00000010 * _DAT_00b45e54 + _DAT_00b45e64;
  if (DAT_00b42d78 == (code *)0x0) {
    fVar8 = (float10)0;
  }
  else {
    fVar8 = (float10)(*DAT_00b42d78)(1,1);
  }
  _DAT_00b45e68 = (float)fVar8 * _DAT_00b45e58 + _DAT_00b45e68;
  if (1.0 < _DAT_00b45e64 != (_DAT_00b45e64 == 1.0)) {
    _DAT_00b45e64 = 0.0;
  }
  if (1.0 < _DAT_00b45e68 != (_DAT_00b45e68 == 1.0)) {
    _DAT_00b45e68 = 0.0;
  }
  _DAT_00b45e94 = _DAT_00b45dc4;
  _DAT_00b45ed4 = DAT_00b3f92c;
  _DAT_00b45ed8 = DAT_00b3f930;
  _DAT_00b45edc = DAT_00b3f934;
  *(int *)(iVar7 + 0x60) = *(int *)(iVar7 + 0x60) + 1;
  uStack_4 = 0;
  in_stack_00000010 = (undefined4 *)iVar7;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000010);
  piVar1 = (int *)(iVar7 + 0x60);
  *piVar1 = *piVar1 + -1;
  uStack_4 = 0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = local_c;
  return 0;
}



int * FUN_007dd1e0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0cb6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(8,uVar2);
  piVar8 = (int *)0x0;
  local_4 = 0;
  if (iVar3 != 0) {
    piVar8 = (int *)FUN_007aed00();
  }
  local_4 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_00771090(DAT_00b43104,2,1);
  puVar6 = (undefined4 *)*piVar8;
  if (puVar6 != puVar4) {
    if (((puVar6 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar6 + 1), LVar5 == 0)) &&
       (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    *piVar8 = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  (**(code **)(*(int *)*piVar8 + 0x50))(0,0,0,2,0);
  (**(code **)(*(int *)*piVar8 + 0x50))(1,7,5,1,0);
  if ((int *)*piVar8 != (int *)0x0) {
    for (puVar6 = (undefined4 *)(**(code **)(*(int *)*piVar8 + 4))();
        (puVar6 != (undefined4 *)0x0 && (puVar6 != &DAT_00b3f684)); puVar6 = (undefined4 *)puVar6[1]
        ) {
    }
  }
  iVar3 = FUN_00401f00(0x118);
  if (iVar3 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_007dc9a0();
  }
  (**(code **)(*piVar7 + 0x84))();
  FUN_007db840();
  FUN_007dc1a0();
  (**(code **)(*piVar7 + 0x88))();
  (**(code **)(*piVar7 + 0x54))(*piVar8);
  piVar1 = (int *)piVar8[1];
  if (piVar1 != piVar7) {
    if (((piVar1 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar1 + 1), LVar5 == 0)) &&
       (piVar1 != (int *)0x0)) {
      (**(code **)*piVar1)(1);
    }
    piVar8[1] = (int)piVar7;
    InterlockedIncrement(piVar7 + 1);
  }
  *unaff_FS_OFFSET = iVar3;
  return piVar8;
}



undefined4 FUN_007dd370(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  LONG LVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar5 = (int *)FUN_00707530(4);
  if (piVar5 != (int *)0x0) {
    iVar6 = (**(code **)(*piVar5 + 0x54))(uVar4);
    if (iVar6 == 0xc) goto LAB_007dd484;
    FUN_00708560(&param_1,4);
    puVar2 = param_1;
    if (param_1 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(param_1 + 1);
      if ((LVar7 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  iVar6 = FUN_00401f00(0x88);
  uStack_4 = 0;
  if (iVar6 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_0085bbe0();
  }
  uStack_4 = 0xffffffff;
  iVar6 = FUN_00707530(2);
  if ((iVar6 != 0) && (*(char **)(iVar6 + 8) != (char *)0x0)) {
    iVar6 = __stricmp(*(char **)(iVar6 + 8),"lava");
    if (iVar6 == 0) {
      DAT_00b47844 = 1;
    }
  }
  FUN_00405680(piVar5);
  cVar3 = (**(code **)(*piVar5 + 0x58))(puVar1);
  if (cVar3 == '\0') {
    FUN_004a1220(piVar5);
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
LAB_007dd484:
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_007dd4a0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cf28c;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9193c;
  iVar4 = 8;
  local_4 = 8;
  piVar5 = in_ECX + 0x2d;
  do {
    puVar1 = (undefined4 *)piVar5[8];
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      piVar5[8] = 0;
    }
    puVar1 = (undefined4 *)*piVar5;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (in_ECX[0x3e] != 0) {
    piVar5 = (int *)(in_ECX[0x3e] + 0x60);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      FUN_007604d0(uVar2);
    }
    in_ECX[0x3e] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x43];
  local_4._0_1_ = 7;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x42];
  local_4._0_1_ = 6;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x41];
  local_4._0_1_ = 5;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x40];
  local_4._0_1_ = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x3f];
  local_4._0_1_ = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4._0_1_ = 2;
  if (in_ECX[0x3e] != 0) {
    piVar5 = (int *)(in_ECX[0x3e] + 0x60);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      FUN_007604d0();
    }
  }
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x35,4,8,FUN_007016a0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x2d,4,8,FUN_007016a0);
  local_4 = 0xffffffff;
  FUN_00802760();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007dd6b0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d00c6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)(in_ECX + 0x2c);
  if (*(int *)(in_ECX + 0x2c) == 0) {
    iVar3 = FUN_00401f00(0x34,uVar2);
    local_4 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_009a4750(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar4);
    (**(code **)(*(int *)*puVar1 + 0x18))
              (&DAT_00a7aa78,0x10000007,0,0,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x110,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("BlendAmount",0x10000007,0,1,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45f44,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("TextureOffset",0x10000007,0,2,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45fac,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("fDamp",0x10000007,0,3,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45f40,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("RainVars",0x10000007,0,4,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45f58,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("WadingVars",0x10000007,0,5,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45f68,0);
  }
  puVar1 = (undefined4 *)(in_ECX + 0x30);
  if (*(int *)(in_ECX + 0x30) == 0) {
    iVar3 = FUN_00401f00(0x34,uVar2);
    local_4 = 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_009a8490(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar4);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("texRatio0",0x10000007,0,6,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x94,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("texRatio1",0x10000007,0,7,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0xa4,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("TransMatrixRowOne",0x10000007,0,8,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45f78,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("TransMatrixRowTwo",0x10000007,0,9,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45f88,0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_007dd920(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int in_ECX;
  int *piVar5;
  int local_6e0;
  int local_6dc;
  char *local_6d4;
  char *local_6d0;
  char *local_6cc;
  char *local_6c8;
  undefined1 *local_6c4;
  undefined4 local_6c0;
  undefined1 local_6bc [60];
  char *local_680;
  char *local_67c;
  undefined1 *local_678;
  undefined4 local_674;
  undefined1 local_670 [60];
  char *local_634;
  char *local_630;
  undefined1 *local_62c;
  undefined4 local_628;
  undefined1 local_624 [60];
  char *local_5e8;
  char *local_5e4;
  undefined1 *local_5e0;
  undefined4 local_5dc;
  undefined1 local_5d8 [60];
  char *local_59c;
  char *local_598;
  undefined1 *local_594;
  undefined4 local_590;
  undefined1 local_58c [60];
  char *local_550;
  char *local_54c;
  undefined1 *local_548;
  undefined4 local_544;
  undefined1 local_540 [60];
  char *local_504;
  char *local_500;
  undefined1 *local_4fc;
  undefined4 local_4f8;
  undefined1 local_4f4 [60];
  char *local_4b8;
  char *local_4b4;
  undefined1 *local_4b0;
  undefined4 local_4ac;
  undefined1 local_4a8 [60];
  char *local_46c;
  char *local_468;
  undefined1 *local_464;
  undefined4 local_460;
  undefined1 local_45c [60];
  char *local_420;
  char *local_41c;
  undefined1 *local_418;
  undefined4 local_414;
  undefined1 local_410 [60];
  char *local_3d4;
  undefined4 local_3d0;
  undefined1 local_3cc [68];
  char *local_388;
  undefined4 local_384;
  undefined1 local_380 [68];
  char *local_33c;
  undefined4 local_338;
  undefined1 local_334 [68];
  char *local_2f0;
  undefined4 local_2ec;
  undefined1 local_2e8 [68];
  char *local_2a4;
  undefined4 local_2a0;
  undefined1 local_29c [68];
  char *local_258;
  undefined4 local_254;
  undefined1 local_250 [68];
  char local_20c [260];
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_6e0;
  local_46c = "water\\2_ab\\v\\displace.v.hlsl";
  local_468 = "RIPPLE_MAKER_WADING";
  local_464 = &DAT_00a2f7ec;
  local_460 = 0;
  _memset(local_45c,0,0x3c);
  local_420 = "water\\2_ab\\v\\displace.v.hlsl";
  local_41c = "RIPPLE_MAKER_RAIN";
  local_418 = &DAT_00a2f7ec;
  local_414 = 0;
  _memset(local_410,0,0x3c);
  local_3d4 = "water\\2_ab\\v\\displace.v.hlsl";
  local_3d0 = 0;
  _memset(local_3cc,0,0x44);
  local_388 = "water\\2_ab\\v\\displace.v.hlsl";
  local_384 = 0;
  _memset(local_380,0,0x44);
  local_33c = "water\\2_ab\\v\\displace.v.hlsl";
  local_338 = 0;
  _memset(local_334,0,0x44);
  local_2f0 = "water\\2_ab\\v\\displace.v.hlsl";
  local_2ec = 0;
  _memset(local_2e8,0,0x44);
  local_2a4 = "water\\2_ab\\v\\displace.v.hlsl";
  local_2a0 = 0;
  _memset(local_29c,0,0x44);
  local_258 = "water\\2_ab\\v\\displace.v.hlsl";
  local_254 = 0;
  _memset(local_250,0,0x44);
  local_6d0 = "ps_1_3";
  local_6d4 = "vs_1_1";
  if (1 < DAT_00b42f48) {
    local_6d0 = "ps_2_0";
    local_6d4 = "vs_2_0";
  }
  local_6cc = "water\\2_ab\\p\\displace.p.hlsl";
  local_6c8 = "RIPPLE_MAKER_WADING";
  local_6c4 = &DAT_00a2f7ec;
  local_6c0 = 0;
  _memset(local_6bc,0,0x3c);
  local_680 = "water\\2_ab\\p\\displace.p.hlsl";
  local_67c = "RIPPLE_MAKER_RAIN";
  local_678 = &DAT_00a2f7ec;
  local_674 = 0;
  _memset(local_670,0,0x3c);
  local_634 = "water\\2_ab\\p\\displace.p.hlsl";
  local_630 = "HEIGHTMAP_WADING";
  local_62c = &DAT_00a2f7ec;
  local_628 = 0;
  _memset(local_624,0,0x3c);
  local_5e8 = "water\\2_ab\\p\\displace.p.hlsl";
  local_5e4 = "HEIGHTMAP_RAIN";
  local_5e0 = &DAT_00a2f7ec;
  local_5dc = 0;
  _memset(local_5d8,0,0x3c);
  local_59c = "water\\2_ab\\p\\displace.p.hlsl";
  local_598 = "HEIGHTMAP_SMOOTH";
  local_594 = &DAT_00a2f7ec;
  local_590 = 0;
  _memset(local_58c,0,0x3c);
  local_550 = "water\\2_ab\\p\\displace.p.hlsl";
  local_54c = "NORMALS";
  local_548 = &DAT_00a2f7ec;
  local_544 = 0;
  _memset(local_540,0,0x3c);
  local_504 = "water\\2_ab\\p\\displace.p.hlsl";
  local_500 = "BLEND_HEIGHTMAPS";
  local_4fc = &DAT_00a2f7ec;
  local_4f8 = 0;
  _memset(local_4f4,0,0x3c);
  local_4b8 = "water\\2_ab\\p\\displace.p.hlsl";
  local_4b4 = "TEXCOORD_OFFSET";
  local_4b0 = &DAT_00a2f7ec;
  local_4ac = 0;
  _memset(local_4a8,0,0x3c);
  piVar5 = (int *)(in_ECX + 0xd4);
  local_6e0 = 0;
  local_6dc = 0;
  do {
    iVar2 = local_6dc;
    if (*(int *)((int)&local_46c + local_6dc) != 0) {
      FUN_00801030(*(int *)((int)&local_46c + local_6dc),local_108);
      _sprintf(local_20c,"WATERDISPLACE%03i.vso",local_6e0);
      puVar3 = (undefined4 *)FUN_008014e0(local_108,(int)&local_468 + iVar2,local_6d4,local_20c,0,0)
      ;
      puVar1 = (undefined4 *)piVar5[-8];
      if (puVar1 != puVar3) {
        if (puVar1 != (undefined4 *)0x0) {
          LVar4 = InterlockedDecrement(puVar1 + 1);
          if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
        }
        piVar5[-8] = (int)puVar3;
        if (puVar3 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar3 + 1);
        }
      }
    }
    iVar2 = local_6dc;
    if (*(int *)((int)&local_6cc + local_6dc) != 0) {
      FUN_00801030(*(int *)((int)&local_6cc + local_6dc),local_108);
      _sprintf(local_20c,"WATERDISPLACE%03i.pso",local_6e0);
      puVar3 = (undefined4 *)FUN_00801c90(local_108,(int)&local_6c8 + iVar2,local_6d0,local_20c,0,1)
      ;
      puVar1 = (undefined4 *)*piVar5;
      if (puVar1 != puVar3) {
        if (puVar1 != (undefined4 *)0x0) {
          LVar4 = InterlockedDecrement(puVar1 + 1);
          if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
        }
        *piVar5 = (int)puVar3;
        if (puVar3 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar3 + 1);
        }
      }
    }
    local_6e0 = local_6e0 + 1;
    local_6dc = local_6dc + 0x4c;
    piVar5 = piVar5 + 1;
  } while (local_6dc < 0x260);
  return;
}



undefined4 FUN_007ddd90(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  LONG LVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf2c8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0xf8) == 0) {
    piVar6 = (int *)FUN_007606a0(&local_14,uVar5);
    iVar2 = *(int *)(in_ECX + 0xf8);
    local_4 = 0;
    if (iVar2 != *piVar6) {
      if (iVar2 != 0) {
        piVar1 = (int *)(iVar2 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
      }
      iVar2 = *piVar6;
      *(int *)(in_ECX + 0xf8) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
      }
    }
    local_4 = 0xffffffff;
    if ((local_14 != 0) &&
       (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0))
    {
      FUN_007604d0();
    }
    FUN_00772630(&local_18);
    local_4 = 1;
    FUN_00801110(local_18,0,3,2);
    FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0xf8) + 0x14),local_18);
    piVar6 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 2;
    if (local_18 != *piVar6) {
      if ((local_18 != 0) &&
         (*(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + -1, *(int *)(local_18 + 0x5c) == 0
         )) {
        FUN_00772560();
      }
      local_18 = *piVar6;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,3,2);
    FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0xf8) + 0x14),local_18);
    local_4 = 0xffffffff;
    if ((local_18 != 0) &&
       (*(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + -1, *(int *)(local_18 + 0x5c) == 0))
    {
      FUN_00772560();
    }
  }
  iVar2 = *(int *)(in_ECX + 0xf8);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar7;
  }
  FUN_00772cd0(7,0,0);
  iVar2 = *(int *)(in_ECX + 0xf8);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar7;
  }
  FUN_00772cd0(0xe,0,0);
  iVar2 = *(int *)(in_ECX + 0xf8);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar7;
  }
  FUN_00772cd0(0x1b,0,0);
  iVar2 = *(int *)(in_ECX + 0xf8);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar7;
  }
  FUN_00772cd0(0xf,0,0);
  iVar2 = *(int *)(in_ECX + 0xf8);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar7;
  }
  FUN_00772cd0(0xa8,0xf,0);
  iVar2 = *(int *)(in_ECX + 0xf8);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar7;
  }
  FUN_00772cd0(0x16,1,0);
  iVar2 = *(int *)(in_ECX + 0xf8);
  puVar3 = *(undefined4 **)(in_ECX + 0xb4);
  puVar4 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xd4);
  iVar2 = *(int *)(in_ECX + 0xf8);
  puVar4 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar2 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_007de080(void)

{
  FUN_007dd920();
  FUN_007ddd90();
  return;
}



void FUN_007de0b0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x10c) != 0) {
    FUN_007c1ee0(*(int *)(in_ECX + 0x10c));
  }
  if (*(int *)(in_ECX + 0x100) != 0) {
    FUN_007c1ee0(*(int *)(in_ECX + 0x100));
  }
  if (*(int *)(in_ECX + 0x104) != 0) {
    FUN_007c1ee0(*(int *)(in_ECX + 0x104));
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x10c);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x10c) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x100);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x100) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x104);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x104) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xfc);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0xfc) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x108);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x108) = 0;
  }
  puVar1 = DAT_00b45fa8;
  if (DAT_00b45fa8 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b45fa8 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b45fa8 = (undefined4 *)0x0;
  }
  puVar1 = DAT_00b45fb4;
  if (DAT_00b45fb4 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b45fb4 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b45fb4 = (undefined4 *)0x0;
  }
  if (*(undefined4 **)(in_ECX + 0x90) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x90))(1);
  }
  *(undefined4 *)(in_ECX + 0x90) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007de240(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf310;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_008026c0(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a9193c;
  _eh_vector_constructor_iterator_(in_ECX + 0x2d,4,8,FUN_007c88a0,FUN_007016a0);
  local_4 = CONCAT31(local_4._1_3_,1);
  _eh_vector_constructor_iterator_(in_ECX + 0x35,4,8,FUN_007c88a0,FUN_007016a0);
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  in_ECX[0x43] = 0;
  *(undefined1 *)(in_ECX + 8) = 1;
  DAT_00b45f54 = in_ECX;
  in_ECX[0x3d] = 0;
  DAT_00b3ff00 = 0;
  in_ECX[0x45] = 0;
  in_ECX[0x46] = 0x3dcccccd;
  in_ECX[0x47] = 0x3dcccccd;
  in_ECX[0x48] = 0x3f800000;
  in_ECX[0x49] = 0x3d4ccccd;
  _DAT_00b45f44 = 0;
  _DAT_00b45f58 = 0x3dcccccd;
  _DAT_00b45f5c = 0x3f19999a;
  _DAT_00b45f60 = 0x3f7c28f6;
  _DAT_00b45f64 = 0x3c23d70a;
  _DAT_00b45f68 = 0x3ecccccd;
  _DAT_00b45f6c = 0x3f19999a;
  _DAT_00b45f70 = 0x3f7c28f6;
  _DAT_00b45f74 = 0x3d4ccccd;
  in_ECX[0x24] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007de390(byte param_1)

{
  FUN_007dd4a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_007de3b0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 uVar6;
  int *in_ECX;
  int iVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cf368;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar4);
  iVar7 = **(int **)(in_ECX[0x3e] + 0x24);
  puVar2 = *(undefined4 **)(iVar7 + 4);
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 1);
    if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(iVar7 + 4) = 0;
  }
  iVar7 = *(int *)(*(int *)(in_ECX[0x3e] + 0x24) + 4);
  puVar2 = *(undefined4 **)(iVar7 + 4);
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 1);
    if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(iVar7 + 4) = 0;
  }
  switch(in_ECX[0x3d]) {
  case 2:
    iVar7 = **(int **)(in_ECX[0x3e] + 0x24);
    if (iVar7 != 0) {
      *(int *)(iVar7 + 0x5c) = *(int *)(iVar7 + 0x5c) + 1;
    }
    uStack_4 = 1;
    FUN_008011e0(iVar7,1);
    break;
  case 3:
    iVar7 = **(int **)(in_ECX[0x3e] + 0x24);
    if (iVar7 != 0) {
      *(int *)(iVar7 + 0x5c) = *(int *)(iVar7 + 0x5c) + 1;
    }
    uStack_4 = 2;
    goto LAB_007de5a7;
  case 4:
    iVar7 = **(int **)(in_ECX[0x3e] + 0x24);
    if (iVar7 != 0) {
      *(int *)(iVar7 + 0x5c) = *(int *)(iVar7 + 0x5c) + 1;
    }
    uStack_4 = 3;
    FUN_008011e0(iVar7,1);
    break;
  case 5:
    iVar7 = **(int **)(in_ECX[0x3e] + 0x24);
    if (iVar7 != 0) {
      *(int *)(iVar7 + 0x5c) = *(int *)(iVar7 + 0x5c) + 1;
    }
    uStack_4 = 4;
    FUN_008011e0(iVar7,1);
    break;
  case 6:
    iVar7 = **(int **)(in_ECX[0x3e] + 0x24);
    if (iVar7 != 0) {
      *(int *)(iVar7 + 0x5c) = *(int *)(iVar7 + 0x5c) + 1;
    }
    uStack_4 = 5;
    FUN_008011e0(iVar7,1);
    uVar6 = FUN_00405a30();
    FUN_0076c910(uVar6);
    FUN_00771640(1);
    FUN_007aec20(*(undefined4 *)(*(int *)(in_ECX[0x3e] + 0x24) + 4));
LAB_007de5a7:
    FUN_008011e0(iVar7,1);
    break;
  case 7:
    iVar7 = **(int **)(in_ECX[0x3e] + 0x24);
    if (iVar7 != 0) {
      *(int *)(iVar7 + 0x5c) = *(int *)(iVar7 + 0x5c) + 1;
    }
    uStack_4 = 0;
    FUN_008011e0(iVar7,3);
    break;
  default:
    goto switchD_007de45b_default;
  }
  uVar6 = FUN_00405a30();
  FUN_0076c910(uVar6);
  uStack_4 = 0xffffffff;
  if (iVar7 != 0) {
    piVar1 = (int *)(iVar7 + 0x5c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_00772560();
    }
  }
switchD_007de45b_default:
  if (DAT_00b45f4c != '\0') {
    iVar7 = **(int **)(in_ECX[0x3e] + 0x24);
    if (iVar7 != 0) {
      *(int *)(iVar7 + 0x5c) = *(int *)(iVar7 + 0x5c) + 1;
    }
    uStack_4 = 6;
    FUN_008011e0(iVar7,3);
    uStack_4 = 0xffffffff;
    if (iVar7 != 0) {
      piVar1 = (int *)(iVar7 + 0x5c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00772560();
      }
    }
  }
  iVar7 = in_ECX[0x3e];
  puVar2 = (undefined4 *)in_ECX[in_ECX[0x3d] + 0x2d];
  puVar3 = *(undefined4 **)(iVar7 + 0x58);
  if (puVar3 != puVar2) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar3 + 1), LVar5 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar7 + 0x58) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  iVar7 = in_ECX[0x3e];
  puVar2 = (undefined4 *)in_ECX[in_ECX[0x3d] + 0x35];
  puVar3 = *(undefined4 **)(iVar7 + 0x44);
  if (puVar3 != puVar2) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar3 + 1), LVar5 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar7 + 0x44) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  FUN_0076ce40(in_ECX[0xe],in_ECX + 0x3e);
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = local_c;
  return 0;
}



int * FUN_007de710(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0cb6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(8,uVar2);
  piVar8 = (int *)0x0;
  local_4 = 0;
  if (iVar3 != 0) {
    piVar8 = (int *)FUN_007aed00();
  }
  local_4 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_00771090(DAT_00b43104,2,1);
  puVar6 = (undefined4 *)*piVar8;
  if (puVar6 != puVar4) {
    if (((puVar6 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar6 + 1), LVar5 == 0)) &&
       (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    *piVar8 = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  (**(code **)(*(int *)*piVar8 + 0x50))(0,0,0,2,0);
  (**(code **)(*(int *)*piVar8 + 0x50))(1,7,5,1,0);
  if ((int *)*piVar8 != (int *)0x0) {
    for (puVar6 = (undefined4 *)(**(code **)(*(int *)*piVar8 + 4))();
        (puVar6 != (undefined4 *)0x0 && (puVar6 != &DAT_00b3f684)); puVar6 = (undefined4 *)puVar6[1]
        ) {
    }
  }
  iVar3 = FUN_00401f00(0x128);
  if (iVar3 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_007de240();
  }
  (**(code **)(*piVar7 + 0x84))();
  FUN_007dd920();
  FUN_007ddd90();
  (**(code **)(*piVar7 + 0x88))();
  (**(code **)(*piVar7 + 0x54))(*piVar8);
  piVar1 = (int *)piVar8[1];
  if (piVar1 != piVar7) {
    if (((piVar1 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar1 + 1), LVar5 == 0)) &&
       (piVar1 != (int *)0x0)) {
      (**(code **)*piVar1)(1);
    }
    piVar8[1] = (int)piVar7;
    InterlockedIncrement(piVar7 + 1);
  }
  *unaff_FS_OFFSET = iVar3;
  return piVar8;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007de8a0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  float fVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  LONG LVar10;
  undefined4 *puVar11;
  float *pfVar12;
  int iVar13;
  int in_ECX;
  float *pfVar14;
  int *unaff_FS_OFFSET;
  float10 fVar15;
  undefined4 *puVar16;
  float fStack_84;
  int *piStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  float local_48;
  float afStack_44 [12];
  int iStack_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cf3b9;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&fStack_84;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffff6c;
  *unaff_FS_OFFSET = (int)&local_c;
  local_48 = (float)param_3;
  local_78 = (double)CONCAT44(param_1,param_2);
  piVar7 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))(uVar6);
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    piStack_80 = (int *)0x0;
  }
  else {
    piStack_80 = (int *)(**(code **)(**(int **)(*param_2 + 0x20) + 0x4c))();
  }
  iVar8 = (**(code **)(*piVar7 + 0x4c))(0);
  fStack_5c = (float)iVar8;
  if (iVar8 < 0) {
    fStack_5c = fStack_5c + 4.2949673e+09;
  }
  fVar1 = (float)(int)piStack_80;
  if ((int)piStack_80 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fStack_5c = fStack_5c / fVar1;
  piVar7 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    fStack_84 = 0.0;
  }
  else {
    fStack_84 = (float)(**(code **)(**(int **)(*param_2 + 0x20) + 0x50))();
  }
  iVar8 = (**(code **)(*piVar7 + 0x50))(0);
  fStack_58 = (float)iVar8;
  if (iVar8 < 0) {
    fStack_58 = fStack_58 + 4.2949673e+09;
  }
  fVar1 = (float)(int)fStack_84;
  if ((int)fStack_84 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fStack_58 = fStack_58 / fVar1;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  fStack_68 = 1.0;
  uStack_64 = 0;
  if (DAT_00b42e96 != '\0') {
    uStack_60 = 0x3f800000;
    fStack_58 = 1.0;
  }
  fStack_5c = (float)(-(uint)(DAT_00b43075 != '\0') & 7);
  if (DAT_00b45f4c == '\0') {
    uVar9 = 0x3ccccccd;
  }
  else {
    uVar9 = 0x3d072b02;
  }
  *(undefined4 *)(in_ECX + 0x120) = uVar9;
  if (*(int *)(in_ECX + 0x100) == 0) {
    uVar9 = FUN_007c23c0(DAT_00b43104,7);
    FUN_0075fa90(uVar9);
  }
  if (*(int *)(in_ECX + 0x104) == 0) {
    uVar9 = FUN_007c23c0(DAT_00b43104,7);
    FUN_0075fa90(uVar9);
  }
  uStack_70 = 0;
  uStack_64 = 0;
  uStack_6c = 0x3f800000;
  fStack_68 = 1.0;
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    fStack_84 = 0.0;
  }
  else {
    fStack_84 = (float)(**(code **)(**(int **)(*param_2 + 0x20) + 0x4c))();
  }
  local_48 = (float)(int)fStack_84;
  if ((int)fStack_84 < 0) {
    local_48 = local_48 + 4.2949673e+09;
  }
  local_48 = 0.5 / local_48;
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x50))();
  }
  fStack_84 = (float)iVar8;
  if (iVar8 < 0) {
    fStack_84 = fStack_84 + 4.2949673e+09;
  }
  fStack_84 = 0.5 / fStack_84;
  if ((char)param_2 == '\0') {
    uStack_6c = uStack_60;
    fStack_68 = fStack_58;
  }
  else {
    uStack_6c = 0x3f800000;
    fStack_68 = 1.0;
  }
  if (DAT_00b42d78 == (code *)0x0) {
    fVar15 = (float10)0;
  }
  else {
    fVar15 = (float10)(*DAT_00b42d78)(1,1);
  }
  fVar1 = (float)fVar15;
  puVar16 = (undefined4 *)0x0;
  *(float *)(in_ECX + 0x110) = fVar1;
  *(float *)(in_ECX + 0x11c) = *(float *)(in_ECX + 0x11c) + fVar1;
  *(float *)(in_ECX + 0x124) = fVar1 + *(float *)(in_ECX + 0x124);
  puVar11 = DAT_00b45fa8;
  local_c = 0;
  if (DAT_00b45f4c != '\0') {
    puVar2 = (undefined4 *)*param_2;
    if (DAT_00b45fa8 != puVar2) {
      if (((DAT_00b45fa8 != (undefined4 *)0x0) &&
          (LVar10 = InterlockedDecrement(DAT_00b45fa8 + 1), LVar10 == 0)) &&
         (puVar11 != (undefined4 *)0x0)) {
        (**(code **)*puVar11)(1);
      }
      DAT_00b45fa8 = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar2 + 1);
      }
    }
    *(undefined4 *)(in_ECX + 0xf4) = 7;
    uVar9 = FUN_007d6fe0();
    FUN_007d7280(fStack_5c,uVar9);
    if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
       ((char)DAT_00b3f928[0x83] == '\x01')) {
      (**(code **)(*DAT_00b3f928 + 0x144))(&uStack_70);
    }
    FUN_00709c60(DAT_00b3f928);
    FUN_007d72d0();
    if (DAT_00b45f4c != '\0') {
      uVar9 = FUN_007d6fe0();
      FUN_007d7280(0,uVar9);
      if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
         ((char)DAT_00b3f928[0x83] == '\x01')) {
        (**(code **)(*DAT_00b3f928 + 0x144))(&uStack_70);
      }
      goto LAB_007dec71;
    }
  }
  uVar9 = FUN_007d6fe0();
  FUN_007d7280(0,uVar9);
LAB_007dec71:
  if (DAT_00b45f4c == '\0') {
    *(undefined4 *)(in_ECX + 0xf4) = 1;
    *(undefined4 *)(in_ECX + 0x98) = _DAT_00b45f64;
    *(undefined4 *)(in_ECX + 0x94) = _DAT_00b45f64;
    iVar8 = FUN_009828c0();
    *(undefined4 *)(in_ECX + 0x11c) = 0;
    if (0 < iVar8) {
      do {
        iVar13 = _rand();
        local_78._0_4_ = (float)iVar13 / 32767.0;
        *(float *)(in_ECX + 0x9c) = ((float)local_78 + (float)local_78) - 1.0;
        iVar13 = _rand();
        fVar1 = (float)iVar13 / 32767.0;
        local_78 = (double)CONCAT44(local_78._4_4_,fVar1);
        *(float *)(in_ECX + 0xa0) = (fVar1 + fVar1) - 1.0;
        if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
           ((char)DAT_00b3f928[0x83] == '\x01')) {
          (**(code **)(*DAT_00b3f928 + 0x144))(&uStack_70);
        }
        FUN_00709c60(DAT_00b3f928);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else if (DAT_00b45f4d != '\0') {
    *(undefined4 *)(in_ECX + 0x98) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x94) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0xf4) = 0;
    uStack_54 = 0;
    *(undefined4 *)(in_ECX + 0x9c) = 0;
    *(undefined4 *)(in_ECX + 0xa0) = 0;
    iVar8 = FUN_007b4290(0x14);
    if (iVar8 != 0) {
      uStack_54 = *(undefined4 *)(iVar8 + 4);
    }
    if (*(int *)(in_ECX + 0x90) == 0) {
      puVar11 = (undefined4 *)FUN_00401f00(0x30);
      *puVar11 = 0;
      puVar11[1] = 0x3c23d70a;
      puVar11[2] = 0;
      puVar11[3] = 0x3f800000;
      puVar11[4] = 0x3c23d70a;
      puVar11[5] = 0;
      puVar11[6] = 0x3f800000;
      puVar11[7] = 0xbc23d70a;
      puVar11[8] = 0;
      puVar11[9] = 0;
      puVar11[10] = 0xbc23d70a;
      puVar11[0xb] = 0;
      afStack_44[8] = 9.18355e-41;
      afStack_44[9] = 2.8026e-45;
      afStack_44[10] = 2.75509e-40;
      puStack_4c = (undefined4 *)FUN_00401f00(0xc);
      fVar5 = afStack_44[9];
      fVar1 = afStack_44[8];
      afStack_44[8] = 0.0;
      afStack_44[9] = 0.0;
      *puStack_4c = fVar1;
      puStack_4c[1] = fVar5;
      puStack_4c[2] = afStack_44[10];
      afStack_44[0] = 0.0;
      afStack_44[1] = 0.0;
      afStack_44[2] = 0.0;
      afStack_44[3] = 0.0;
      afStack_44[4] = 0.0;
      afStack_44[5] = 0.0;
      afStack_44[6] = 0.0;
      afStack_44[7] = 0.0;
      pfVar12 = (float *)FUN_00401f00(0x20);
      local_78 = (double)CONCAT44(local_78._4_4_,pfVar12);
      pfVar14 = afStack_44;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar12 = *pfVar14;
        pfVar14 = pfVar14 + 1;
        pfVar12 = pfVar12 + 1;
      }
      afStack_44[8] = (float)FUN_00401f00(0x58);
      local_c._0_1_ = 1;
      if (afStack_44[8] == 0.0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_0071fb40(4,puVar11,0,0,(float)local_78,1,0,2,puStack_4c);
      }
      local_c._0_1_ = 0;
      afStack_44[8] = (float)FUN_00401f00(0xc0);
      local_c._0_1_ = 2;
      if (afStack_44[8] == 0.0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_00717570(uVar9);
      }
      local_c._0_1_ = 0;
      *(undefined4 *)(in_ECX + 0x90) = uVar9;
      afStack_44[8] = (float)FUN_00401f00(0x24);
      local_c._0_1_ = 3;
      if (afStack_44[8] == 0.0) {
        iVar8 = 0;
      }
      else {
        iVar8 = FUN_00482590();
      }
      *(ushort *)(iVar8 + 0x18) = *(ushort *)(iVar8 + 0x18) | 0xc00;
      local_c = (uint)local_c._1_3_ << 8;
      FUN_00405680(iVar8);
      FUN_00707610();
      FUN_00707370(0,1);
    }
    FUN_004ec910(uStack_54);
    _DAT_00b45f80 = _DAT_00b45f98 - _DAT_00b45fac;
    _DAT_00b45f78 = DAT_00b45fb8 - _DAT_00b45f80;
    local_78 = (double)(_DAT_00b45fb0 + _DAT_00b45f9c);
    _DAT_00b45f88 = DAT_00b45fbc - (_DAT_00b45fb0 + _DAT_00b45f9c);
    afStack_44[8] = -_DAT_00b45f88;
    afStack_44[9] = _DAT_00b45f78;
    FUN_00499020();
    _DAT_00b45f7c = afStack_44[8] * 1.5;
    _DAT_00b45f8c = afStack_44[9] * 1.5;
    _DAT_00b45f90 = (float)local_78;
    afStack_44[8] = _DAT_00b45f7c;
    afStack_44[9] = _DAT_00b45f8c;
    if (*(int **)(in_ECX + 0x90) == (int *)0x0) {
      FUN_00709c60(DAT_00b3f928);
    }
    else {
      (**(code **)(**(int **)(in_ECX + 0x90) + 0x84))();
    }
  }
  FUN_007d72d0();
  *(undefined4 *)(in_ECX + 0x94) = uStack_60;
  *(float *)(in_ECX + 0x98) = fStack_58;
  *(float *)(in_ECX + 0x9c) = local_48 + 0.0;
  *(float *)(in_ECX + 0xa0) = fStack_84 + 0.0;
  if (DAT_00b45f4c == '\0') {
    *(undefined4 *)(in_ECX + 0xf4) = 3;
  }
  else {
    *(undefined4 *)(in_ECX + 0xf4) = 2;
  }
  bVar4 = true;
  if (*(float *)(in_ECX + 0x120) < *(float *)(in_ECX + 0x124)) {
    puVar11 = (undefined4 *)0x0;
    do {
      if (bVar4) {
        if (DAT_00b45f4c == '\0') goto LAB_007df23c;
        bVar4 = false;
      }
      else if (DAT_00b45f4c == '\0') {
LAB_007df23c:
        if (puVar11 != *(undefined4 **)(in_ECX + 0x104)) {
          if ((puVar11 != (undefined4 *)0x0) &&
             (LVar10 = InterlockedDecrement(puVar11 + 1), LVar10 == 0)) {
            (**(code **)*puVar11)(1);
          }
          puVar11 = *(undefined4 **)(in_ECX + 0x104);
          puVar16 = puVar11;
          if (puVar11 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar11 + 1);
          }
        }
        puVar2 = (undefined4 *)*piStack_80;
        puVar3 = *(undefined4 **)(in_ECX + 0x104);
        if (puVar3 != puVar2) {
          if (((puVar3 != (undefined4 *)0x0) &&
              (LVar10 = InterlockedDecrement(puVar3 + 1), LVar10 == 0)) &&
             (puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(1);
          }
          *(undefined4 **)(in_ECX + 0x104) = puVar2;
          if (puVar2 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar2 + 1);
          }
        }
        *piStack_80 = (int)puVar11;
      }
      else {
        if (puVar11 != *(undefined4 **)(in_ECX + 0x100)) {
          if ((puVar11 != (undefined4 *)0x0) &&
             (LVar10 = InterlockedDecrement(puVar11 + 1), LVar10 == 0)) {
            (**(code **)*puVar11)(1);
          }
          puVar11 = *(undefined4 **)(in_ECX + 0x100);
          puVar16 = puVar11;
          if (puVar11 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar11 + 1);
          }
        }
        puVar2 = (undefined4 *)*piStack_80;
        puVar3 = *(undefined4 **)(in_ECX + 0x100);
        if (puVar3 != puVar2) {
          if (((puVar3 != (undefined4 *)0x0) &&
              (LVar10 = InterlockedDecrement(puVar3 + 1), LVar10 == 0)) &&
             (puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(1);
          }
          *(undefined4 **)(in_ECX + 0x100) = puVar2;
          if (puVar2 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar2 + 1);
          }
        }
        *piStack_80 = (int)puVar11;
      }
      *(float *)(in_ECX + 0x124) = *(float *)(in_ECX + 0x124) - *(float *)(in_ECX + 0x120);
      uVar9 = FUN_007d6fe0();
      FUN_007d7280(0,uVar9);
      FUN_00709c60(DAT_00b3f928);
      FUN_007d72d0();
    } while (*(float *)(in_ECX + 0x120) < *(float *)(in_ECX + 0x124));
  }
  puVar11 = (undefined4 *)*piStack_80;
  puVar2 = *(undefined4 **)(in_ECX + 0xfc);
  if (puVar2 != puVar11) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar10 = InterlockedDecrement(puVar2 + 1), LVar10 == 0))
       && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(in_ECX + 0xfc) = puVar11;
    if (puVar11 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar11 + 1);
    }
  }
  if (((DAT_00b45f4c != '\0') || (_DAT_00b45f44 <= 0.0)) || (1.0 <= _DAT_00b45f44)) {
    if ((*(int *)(in_ECX + 0x10c) != 0) && (_DAT_00b45f44 == 1.0)) {
      FUN_007c1ee0(*(int *)(in_ECX + 0x10c));
      puVar11 = *(undefined4 **)(in_ECX + 0x10c);
      if (puVar11 != (undefined4 *)0x0) {
        LVar10 = InterlockedDecrement(puVar11 + 1);
        if ((LVar10 == 0) && (puVar11 != (undefined4 *)0x0)) {
          (**(code **)*puVar11)(1);
        }
        *(undefined4 *)(in_ECX + 0x10c) = 0;
      }
    }
  }
  else {
    if (*(int *)(in_ECX + 0x10c) == 0) {
      uVar9 = FUN_007c23c0(DAT_00b43104,7);
      FUN_0075fa90(uVar9);
    }
    FUN_0075fa90(*puStack_50);
    *(undefined4 *)(in_ECX + 0xf4) = 6;
    uVar9 = FUN_007d6fe0();
    FUN_007d7280(fStack_5c,uVar9);
    FUN_00709c60(DAT_00b3f928);
    FUN_007d72d0();
    FUN_0055e2a0(in_ECX + 0x10c);
  }
  if (DAT_00b45fb4 != 0) {
    *(undefined4 *)(in_ECX + 0xf4) = 5;
    uVar9 = FUN_007d6fe0();
    FUN_007d7280(fStack_5c,uVar9);
    FUN_00709c60(DAT_00b3f928);
    FUN_007d72d0();
  }
  puVar2 = DAT_00b45fa8;
  puVar11 = (undefined4 *)*piStack_80;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  fStack_68 = 1.0;
  uStack_64 = 0;
  if (DAT_00b45fa8 != puVar11) {
    if (((DAT_00b45fa8 != (undefined4 *)0x0) &&
        (LVar10 = InterlockedDecrement(DAT_00b45fa8 + 1), LVar10 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_00b45fa8 = puVar11;
    if (puVar11 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar11 + 1);
    }
  }
  local_c = -1;
  if ((puVar16 != (undefined4 *)0x0) && (LVar10 = InterlockedDecrement(puVar16 + 1), LVar10 == 0)) {
    (**(code **)*puVar16)(1);
  }
  *unaff_FS_OFFSET = iStack_14;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007df580(float param_1,float param_2)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = _rand();
  fVar3 = (float)iVar4 / 32767.0;
  fVar2 = _DAT_00b2d63c;
  if (fVar3 < 0.5) {
    while (fVar2 < 1.0 - fVar3) {
      iVar4 = iVar5 * 2;
      iVar5 = iVar5 + 1;
      fVar2 = (float)(&DAT_00b2d644)[iVar4];
    }
    puVar1 = (undefined *)(1.0 - (float)(&PTR_s_bad_allocation_00b2d630)[iVar5 * 2]);
  }
  else {
    while (fVar2 < fVar3) {
      iVar4 = iVar5 * 2;
      iVar5 = iVar5 + 1;
      fVar2 = (float)(&DAT_00b2d644)[iVar4];
    }
    puVar1 = (&PTR_s_bad_allocation_00b2d630)[iVar5 * 2];
  }
  return (float10)((float)puVar1 * param_2 + param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007df640(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = _DAT_00b45fd8 / 100000.0;
  fVar1 = param_2 * param_2 + param_1 * param_1;
  fVar3 = (float10)FUN_00986000((_DAT_00b45fc0 * 3.1415927) / 180.0);
  fVar4 = (float10)FUN_00986300();
  param_1 = (float)fVar4 * param_2 + (float)fVar3 * param_1;
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  fVar3 = (float10)FUN_009866bc();
  param_2 = (param_1 * param_1 * (float)fVar3 * fVar2) / (fVar1 * fVar1 * fVar1);
  fVar3 = (float10)FUN_009866bc();
  if (param_1 < 0.0) {
    param_2 = param_2 * 0.25;
  }
  return (float10)((float)fVar3 * param_2);
}



void FUN_007df7a0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cf49c;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a91b74;
  local_4 = 0xb;
  piVar5 = in_ECX + 0x2d;
  iVar4 = 7;
  do {
    puVar1 = (undefined4 *)*piVar5;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar1 = (undefined4 *)in_ECX[0x2c];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x2c] = 0;
  }
  if (in_ECX[0x35] != 0) {
    piVar5 = (int *)(in_ECX[0x35] + 0x60);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      FUN_007604d0(uVar2);
    }
    in_ECX[0x35] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x3d];
  local_4._0_1_ = 10;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x3c];
  local_4._0_1_ = 9;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x3b];
  local_4._0_1_ = 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x3a];
  local_4._0_1_ = 7;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x39];
  local_4._0_1_ = 6;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x38];
  local_4._0_1_ = 5;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x37];
  local_4._0_1_ = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x36];
  local_4._0_1_ = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4._0_1_ = 2;
  if (in_ECX[0x35] != 0) {
    piVar5 = (int *)(in_ECX[0x35] + 0x60);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      FUN_007604d0();
    }
  }
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x2d,4,7,FUN_007016a0);
  puVar1 = (undefined4 *)in_ECX[0x2c];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00802760();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007dfa30(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d00c6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)(in_ECX + 0x2c);
  if (*(int *)(in_ECX + 0x2c) == 0) {
    iVar3 = FUN_00401f00(0x34,uVar2);
    local_4 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_009a4750(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar4);
    (**(code **)(*(int *)*puVar1 + 0x18))
              (&DAT_00a7aa78,0x10000007,0,0,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x100,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("fPassNum",0x10000007,0,1,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x104,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("fResolution",0x10000007,0,2,1,&DAT_00a2f7ec,0x10,4,&DAT_00b45fe4,0);
  }
  if (*(int *)(in_ECX + 0x30) == 0) {
    iVar3 = FUN_00401f00(0x34,uVar2);
    local_4 = 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_009a8490(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar4);
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x18))
              ("texRatio0",0x10000007,0,6,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x90,0);
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x18))
              ("texRatio1",0x10000007,0,7,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0xa0,0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_007dfbd0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  char **ppcStack_478;
  char *local_474;
  char *local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined1 local_45c [60];
  char *local_420;
  char *local_41c;
  undefined1 *local_418;
  undefined4 local_414;
  undefined1 local_410 [60];
  char *pcStack_3d4;
  char *pcStack_3d0;
  undefined1 *puStack_3cc;
  undefined4 uStack_3c8;
  undefined1 auStack_3c4 [60];
  char *pcStack_388;
  char *pcStack_384;
  undefined1 *puStack_380;
  undefined4 uStack_37c;
  undefined1 auStack_378 [60];
  char *pcStack_33c;
  char *pcStack_338;
  undefined1 *puStack_334;
  undefined4 uStack_330;
  undefined1 auStack_32c [60];
  char *pcStack_2f0;
  char *pcStack_2ec;
  undefined1 *puStack_2e8;
  undefined4 uStack_2e4;
  undefined1 auStack_2e0 [60];
  char *pcStack_2a4;
  char *pcStack_2a0;
  undefined1 *puStack_29c;
  undefined4 uStack_298;
  undefined1 auStack_294 [60];
  char *pcStack_258;
  char *pcStack_254;
  undefined1 *puStack_250;
  undefined4 uStack_24c;
  undefined1 auStack_248 [60];
  undefined1 local_20c [260];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&ppcStack_478;
  local_46c = "imagespace\\1x\\v\\base.v.hlsl";
  local_468 = 0;
  local_464 = 0;
  local_460 = 0;
  _memset(local_45c,0,0x3c);
  FUN_00801030(local_46c,local_20c);
  _sprintf(local_108,"WATERHMAP.vso");
  puVar2 = (undefined4 *)FUN_008014e0(local_20c,&local_468,"vs_1_1",local_108,0,0);
  puVar1 = *(undefined4 **)(in_ECX + 0xb0);
  if (puVar1 != puVar2) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar1 + 1), LVar3 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 **)(in_ECX + 0xb0) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  local_474 = "ps_1_3";
  if (1 < DAT_00b42f48) {
    local_474 = "ps_2_0";
  }
  local_420 = "water\\2_ab\\p\\waterhmap.p.hlsl";
  local_41c = "WATER_SPECTRUM";
  local_418 = &DAT_00a2f7ec;
  local_414 = 0;
  _memset(local_410,0,0x3c);
  pcStack_3d4 = "water\\2_ab\\p\\waterhmap.p.hlsl";
  pcStack_3d0 = "HORIZONTAL_BUTTERFLY";
  puStack_3cc = &DAT_00a2f7ec;
  uStack_3c8 = 0;
  _memset(auStack_3c4,0,0x3c);
  pcStack_388 = "water\\2_ab\\p\\waterhmap.p.hlsl";
  pcStack_384 = "VERTICAL_BUTTERFLY";
  puStack_380 = &DAT_00a2f7ec;
  uStack_37c = 0;
  _memset(auStack_378,0,0x3c);
  pcStack_33c = "water\\2_ab\\p\\waterhmap.p.hlsl";
  pcStack_338 = "HORIZONTAL_SCRAMBLE";
  puStack_334 = &DAT_00a2f7ec;
  uStack_330 = 0;
  _memset(auStack_32c,0,0x3c);
  pcStack_2f0 = "water\\2_ab\\p\\waterhmap.p.hlsl";
  pcStack_2ec = "VERTICAL_SCRAMBLE";
  puStack_2e8 = &DAT_00a2f7ec;
  uStack_2e4 = 0;
  _memset(auStack_2e0,0,0x3c);
  pcStack_2a4 = "water\\2_ab\\p\\waterhmap.p.hlsl";
  pcStack_2a0 = "NORMALS";
  puStack_29c = &DAT_00a2f7ec;
  uStack_298 = 0;
  _memset(auStack_294,0,0x3c);
  pcStack_258 = "water\\2_ab\\p\\waterhmap.p.hlsl";
  pcStack_254 = "FILTER";
  puStack_250 = &DAT_00a2f7ec;
  uStack_24c = 0;
  _memset(auStack_248,0,0x3c);
  ppcStack_478 = &local_420;
  iVar4 = 0;
  piVar5 = (int *)(in_ECX + 0xb4);
  do {
    if (*ppcStack_478 != (char *)0x0) {
      FUN_00801030(*ppcStack_478,local_20c);
      _sprintf(local_108,"WATERHMAP%03i.pso",iVar4);
      puVar2 = (undefined4 *)FUN_00801c90(local_20c,ppcStack_478 + 1,local_474,local_108,0,1);
      puVar1 = (undefined4 *)*piVar5;
      if (puVar1 != puVar2) {
        if (((puVar1 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar1 + 1), LVar3 == 0)
            ) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        *piVar5 = (int)puVar2;
        if (puVar2 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar2 + 1);
        }
      }
    }
    ppcStack_478 = ppcStack_478 + 0x13;
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar4 < 7);
  return;
}



undefined4 FUN_007dfee0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  LONG LVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf4e0;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0xd4) == 0) {
    piVar6 = (int *)FUN_007606a0(&local_14,uVar5);
    iVar2 = *(int *)(in_ECX + 0xd4);
    local_4 = 0;
    if (iVar2 != *piVar6) {
      if (iVar2 != 0) {
        piVar1 = (int *)(iVar2 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
      }
      iVar2 = *piVar6;
      *(int *)(in_ECX + 0xd4) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
      }
    }
    local_4 = 0xffffffff;
    if ((local_14 != 0) &&
       (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0))
    {
      FUN_007604d0();
    }
    FUN_00772630(&local_18);
    local_4 = 1;
    FUN_00801110(local_18,0,3,2);
    FUN_00771640(0);
    FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0x14),local_18);
    piVar6 = (int *)FUN_00772630(&local_14);
    local_4._0_1_ = 2;
    if (local_18 != *piVar6) {
      if ((local_18 != 0) &&
         (*(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + -1, *(int *)(local_18 + 0x5c) == 0
         )) {
        FUN_00772560();
      }
      local_18 = *piVar6;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_14 != 0) &&
       (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,3,2);
    FUN_00771640(0);
    FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0x14),local_18);
    piVar6 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 3;
    if (local_18 != *piVar6) {
      if ((local_18 != 0) &&
         (*(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + -1, *(int *)(local_18 + 0x5c) == 0
         )) {
        FUN_00772560();
      }
      local_18 = *piVar6;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,3,2);
    FUN_00771640(0);
    FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0x14),local_18);
    local_4 = 0xffffffff;
    if ((local_18 != 0) &&
       (*(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + -1, *(int *)(local_18 + 0x5c) == 0))
    {
      FUN_00772560();
    }
  }
  iVar2 = *(int *)(in_ECX + 0xd4);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar7;
  }
  FUN_00772cd0(7,0,0);
  iVar2 = *(int *)(in_ECX + 0xd4);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar7;
  }
  FUN_00772cd0(0xe,0,0);
  iVar2 = *(int *)(in_ECX + 0xd4);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar7;
  }
  FUN_00772cd0(0x1b,0,0);
  iVar2 = *(int *)(in_ECX + 0xd4);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar7;
  }
  FUN_00772cd0(0xf,0,0);
  iVar2 = *(int *)(in_ECX + 0xd4);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar7;
  }
  FUN_00772cd0(0xa8,0xf,0);
  iVar2 = *(int *)(in_ECX + 0xd4);
  puVar3 = *(undefined4 **)(in_ECX + 0xb0);
  puVar4 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xb4);
  iVar2 = *(int *)(in_ECX + 0xd4);
  puVar4 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar4 + 1), LVar8 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar2 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}


