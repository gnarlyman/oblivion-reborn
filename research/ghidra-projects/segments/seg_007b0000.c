
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b0170(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  LONG LVar11;
  int in_ECX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  bool bVar12;
  int *unaff_retaddr;
  undefined4 uStack_18;
  undefined4 local_14;
  float fStack_10;
  undefined4 uStack_c;
  uint uStack_4;
  
  bVar5 = 0;
  local_14 = 0;
  FUN_007c23c0(DAT_00b43104,0xf);
  uVar6 = FUN_007c23c0(DAT_00b43104,0xf);
  piVar7 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  if (*(int **)(*param_2 + 0x20) != (int *)0x0) {
    bVar5 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x4c))();
  }
  (**(code **)(*piVar7 + 0x4c))(0);
  piVar7 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x50))();
  }
  iVar9 = (**(code **)(*piVar7 + 0x50))(0);
  fVar3 = (float)iVar9;
  if (iVar9 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar4 = (float)iVar8;
  if (iVar8 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  fVar3 = fVar3 / fVar4;
  bVar12 = DAT_00b43075 != '\0';
  uStack_18 = 0;
  local_14 = 0x3f800000;
  fStack_10 = 1.0;
  uStack_c = 0;
  *(undefined4 *)(in_ECX + 0xdc) = 0;
  *(undefined4 *)(in_ECX + 0xd8) = 0;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  if (DAT_00b2c1e8 != 0) {
    _DAT_00b2c2dc = 0;
    _DAT_00b2c2e0 = 1.0 - fVar3;
    _DAT_00b2c2d4 = uVar6;
    _DAT_00b2c2d8 = fVar3;
    *(undefined4 *)(in_ECX + 0xac) = 0;
    *(undefined4 *)(in_ECX + 0x90) = 0;
    FUN_00802890(*unaff_retaddr);
    uVar10 = FUN_007d6fe0();
    FUN_007d7280(1,uVar10);
    if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
       ((char)DAT_00b3f928[0x83] == '\x01')) {
      (**(code **)(*DAT_00b3f928 + 0x144))(0);
    }
    FUN_00709c60(DAT_00b3f928);
    FUN_007d72d0();
    _DAT_00b2c2d4 = 0x3f800000;
    _DAT_00b2c2d8 = 1.0;
    uStack_4 = 0;
    _DAT_00b2c2dc = 0;
    _DAT_00b2c2e0 = 0.0;
    _DAT_00b2c2ec = 0;
    _DAT_00b2c2f0 = 0.0;
    _DAT_00b2c2e4 = 0x3f800000;
    _DAT_00b2c2e8 = 1.0;
    if (DAT_00b2c1e8 != 0) {
      do {
        uVar10 = FUN_007d6fe0();
        FUN_007d7280(-bVar12 & 7,uVar10);
        if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
           ((char)DAT_00b3f928[0x83] == '\x01')) {
          (**(code **)(*DAT_00b3f928 + 0x144))(0);
        }
        FUN_00802890(unaff_EBP);
        *(undefined4 *)(in_ECX + 0xac) = 1;
        *(undefined4 *)(in_ECX + 0x90) = 1;
        FUN_00709c60(DAT_00b3f928);
        *(undefined4 *)(in_ECX + 0xac) = 2;
        FUN_00709c60(DAT_00b3f928);
        FUN_007d72d0();
        uVar10 = FUN_007d6fe0();
        FUN_007d7280(unaff_EBP,uVar10);
        if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
           ((char)DAT_00b3f928[0x83] == '\x01')) {
          (**(code **)(*DAT_00b3f928 + 0x144))(0);
        }
        FUN_00802890(unaff_ESI);
        *(undefined4 *)(in_ECX + 0xac) = 3;
        FUN_00709c60(DAT_00b3f928);
        *(undefined4 *)(in_ECX + 0xac) = 4;
        FUN_00709c60(DAT_00b3f928);
        FUN_007d72d0();
        uStack_4 = uStack_4 + 1;
      } while (uStack_4 < DAT_00b2c1e8);
    }
  }
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 2;
  FUN_00802890(unaff_EBP);
  if (*unaff_retaddr == 0) {
    unaff_retaddr = (int *)0x0;
    bVar5 = 1;
    piVar7 = (int *)register0x00000010;
  }
  else {
    piVar7 = (int *)(*unaff_retaddr + 0x20);
  }
  puVar1 = (undefined4 *)*piVar7;
  if ((((bVar5 & 1) != 0) && (unaff_retaddr != (int *)0x0)) &&
     (LVar11 = InterlockedDecrement(unaff_retaddr + 1), LVar11 == 0)) {
    (**(code **)*unaff_retaddr)(1);
  }
  puVar2 = *(undefined4 **)(in_ECX + 0xe0);
  if (puVar2 != puVar1) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar11 = InterlockedDecrement(puVar2 + 1), LVar11 == 0))
       && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(in_ECX + 0xe0) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  _DAT_00b2c2d4 = 0x3f800000;
  _DAT_00b2c2d8 = 1.0;
  _DAT_00b2c2dc = 0;
  _DAT_00b2c2e0 = 0.0;
  _DAT_00b2c2ec = 0;
  _DAT_00b2c2f0 = 1.0 - fVar3;
  if (DAT_00b2c1e4 == 0) {
    _DAT_00b2c2c4 = 0;
    _DAT_00b2c2c8 = 0x3f800000;
  }
  else if (DAT_00b2c1e4 == 1) {
    _DAT_00b2c2c4 = 0x3f800000;
    _DAT_00b2c2c8 = 0;
  }
  else {
    _DAT_00b2c2c4 = 0x3f800000;
    _DAT_00b2c2c8 = 0x3f800000;
  }
  fStack_10 = fVar3;
  local_14 = uVar6;
  if ((char)param_2 != '\0') {
    local_14 = 0x3f800000;
    fStack_10 = 1.0;
  }
  _DAT_00b2c2e4 = uVar6;
  _DAT_00b2c2e8 = fVar3;
  if (*param_1 == 0) {
    FUN_007d71c0(1,0);
  }
  else {
    uVar6 = FUN_007d6fe0();
    FUN_007d7280(1,uVar6);
  }
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))(&uStack_18);
  }
  FUN_00709c60(DAT_00b3f928);
  if (*param_1 != 0) {
    FUN_007d72d0();
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xe0);
  if (puVar1 != (undefined4 *)0x0) {
    LVar11 = InterlockedDecrement(puVar1 + 1);
    if ((LVar11 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0xe0) = 0;
  }
  FUN_007c1ee0(unaff_ESI);
  FUN_007c1ee0(unaff_EBP);
  return;
}



undefined4 FUN_007b09a0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  LONG LVar7;
  undefined4 uVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cd6a0;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar6 = (int *)FUN_007606a0(&local_10,uVar5);
  iVar2 = *(int *)(in_ECX + 0x70);
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
    *(int *)(in_ECX + 0x70) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  local_4 = 0xffffffff;
  if ((local_10 != 0) &&
     (*(int *)(local_10 + 0x60) = *(int *)(local_10 + 0x60) + -1, *(int *)(local_10 + 0x60) == 0)) {
    FUN_007604d0();
  }
  uVar5 = 0;
  do {
    FUN_00772630(&local_14);
    local_4 = 1;
    FUN_00801110(local_14,uVar5,3,2);
    FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x70) + 0x14),local_14);
    local_4 = 0xffffffff;
    if ((local_14 != 0) &&
       (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  iVar2 = *(int *)(in_ECX + 0x70);
  puVar3 = *(undefined4 **)(in_ECX + 0x94 + *(int *)(in_ECX + 0x90) * 4);
  puVar4 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x70);
  puVar3 = *(undefined4 **)(in_ECX + 0xa0 + *(int *)(in_ECX + 0x90) * 4);
  puVar4 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar2 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x70);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(7,0,0);
  iVar2 = *(int *)(in_ECX + 0x70);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xe,0,0);
  iVar2 = *(int *)(in_ECX + 0x70);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x1b,0,0);
  iVar2 = *(int *)(in_ECX + 0x70);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xf,0,0);
  iVar2 = *(int *)(in_ECX + 0x70);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xa8,7,0);
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_007b0bd0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cd706;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_008026c0(uVar2);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a8ce1c;
  _eh_vector_constructor_iterator_(in_ECX + 0x25,4,3,FUN_007c88a0,FUN_007016a0);
  piVar4 = in_ECX + 0x28;
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(piVar4,4,3,FUN_007c88a0,FUN_007016a0);
  in_ECX[0x38] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x24] = 0;
  puVar1 = (undefined4 *)in_ECX[0x38];
  local_4 = CONCAT31(local_4._1_3_,3);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x38] = 0;
  }
  local_14 = 3;
  do {
    puVar1 = (undefined4 *)piVar4[-3];
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      piVar4[-3] = 0;
    }
    puVar1 = (undefined4 *)*piVar4;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007b0d00(byte param_1)

{
  FUN_007afd40();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_007b0d20(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 **ppuVar8;
  LONG LVar9;
  int *in_ECX;
  int iVar10;
  int *unaff_FS_OFFSET;
  undefined4 uVar11;
  int iStack_18;
  undefined4 *puStack_14;
  undefined4 *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cd738;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar5 = false;
  (**(code **)(*in_ECX + 0x80))(uVar6);
  iVar10 = 0;
  iStack_18 = 0;
  iVar2 = in_ECX[0x24];
  uStack_4 = 0;
  if (iVar2 == 0) {
    iVar2 = **(int **)(in_ECX[0x1c] + 0x24);
    iStack_18 = iVar10;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      iStack_18 = iVar2;
    }
    uVar7 = FUN_00405a30();
    FUN_0076c910(uVar7);
    uVar7 = 1;
  }
  else {
    if (iVar2 == 1) {
      puStack_10 = (undefined4 *)0x0;
      do {
        iVar2 = *(int *)((int)puStack_10 + *(int *)(in_ECX[0x1c] + 0x24));
        if (iVar10 != iVar2) {
          if (iVar10 != 0) {
            piVar1 = (int *)(iVar10 + 0x5c);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_00772560();
            }
          }
          iVar10 = iVar2;
          if (iVar2 != 0) {
            *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
          }
        }
        if (in_ECX[0x1f] == 0) {
          bVar5 = true;
          puStack_14 = (undefined4 *)0x0;
          ppuVar8 = &puStack_14;
        }
        else {
          ppuVar8 = (undefined4 **)(in_ECX[0x1f] + 0x20);
        }
        puVar4 = *ppuVar8;
        if (((bVar5) && (bVar5 = false, puStack_14 != (undefined4 *)0x0)) &&
           (LVar9 = InterlockedDecrement(puStack_14 + 1), LVar9 == 0)) {
          (**(code **)*puStack_14)(1);
        }
        puVar3 = *(undefined4 **)(iVar10 + 4);
        if (puVar3 != puVar4) {
          if (((puVar3 != (undefined4 *)0x0) &&
              (LVar9 = InterlockedDecrement(puVar3 + 1), LVar9 == 0)) &&
             (puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(1);
          }
          *(undefined4 **)(iVar10 + 4) = puVar4;
          if (puVar4 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar4 + 1);
          }
        }
        FUN_00771640(0);
        puStack_10 = (undefined4 *)((int)puStack_10 + 4);
      } while ((int)puStack_10 < 0x10);
      goto LAB_007b0eea;
    }
    if (iVar2 != 2) goto LAB_007b0eea;
    iVar2 = **(int **)(in_ECX[0x1c] + 0x24);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      iStack_18 = iVar2;
    }
    uVar7 = FUN_00405a30();
    FUN_0076c910(uVar7);
    FUN_00771640(1);
    iVar10 = iStack_18;
    if (in_ECX[0x38] == 0) goto LAB_007b0eea;
    FUN_007aec20(*(undefined4 *)(*(int *)(in_ECX[0x1c] + 0x24) + 4));
    FUN_0076c910(in_ECX[0x38]);
    uVar7 = 0;
  }
  FUN_00771640(uVar7);
  iVar10 = iStack_18;
LAB_007b0eea:
  puStack_14 = (undefined4 *)in_ECX[0x1c];
  puStack_10 = (undefined4 *)in_ECX[in_ECX[0x24] + 0x25];
  puVar4 = (undefined4 *)puStack_14[0x16];
  piVar1 = in_ECX + 0x1c;
  if (puVar4 != puStack_10) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_14[0x16] = puStack_10;
    if (puStack_10 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_10 + 1);
    }
  }
  puStack_14 = (undefined4 *)*piVar1;
  puStack_10 = (undefined4 *)in_ECX[in_ECX[0x24] + 0x28];
  puVar4 = (undefined4 *)puStack_14[0x11];
  if (puVar4 != puStack_10) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_14[0x11] = puStack_10;
    if (puStack_10 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_10 + 1);
    }
  }
  iVar2 = in_ECX[0x2b];
  if (((iVar2 == 5) || (iVar2 == 2)) || (iVar2 == 4)) {
    iVar2 = *piVar1;
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x1b,1,0);
    iVar2 = *piVar1;
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x13,2,0);
    iVar2 = *piVar1;
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    uVar11 = 2;
    uVar7 = 0x14;
  }
  else {
    iVar2 = *piVar1;
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    uVar11 = 0;
    uVar7 = 0x1b;
  }
  FUN_00772cd0(uVar7,uVar11,0);
  FUN_0076ce40(in_ECX[0xe],piVar1);
  in_ECX[0xe] = in_ECX[0xe] + 1;
  uStack_4 = 0xffffffff;
  if (iVar10 != 0) {
    piVar1 = (int *)(iVar10 + 0x5c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_00772560();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



int * FUN_007b1070(void)

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
  iVar3 = FUN_00401f00(0xe4);
  if (iVar3 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_007b0bd0();
  }
  (**(code **)(*piVar7 + 0x84))();
  (**(code **)(*piVar7 + 0xb0))();
  (**(code **)(*piVar7 + 0xb4))();
  piVar1 = (int *)piVar8[1];
  if (piVar1 != piVar7) {
    if (((piVar1 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar1 + 1), LVar5 == 0)) &&
       (piVar1 != (int *)0x0)) {
      (**(code **)*piVar1)(1);
    }
    piVar8[1] = (int)piVar7;
    InterlockedIncrement(piVar7 + 1);
  }
  (**(code **)(*(int *)piVar8[1] + 0x54))(*piVar8);
  *unaff_FS_OFFSET = iVar3;
  return piVar8;
}



void FUN_007b1200(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cd82e;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a8cfd4;
  puVar2 = (undefined4 *)in_ECX[0x26];
  local_4 = 4;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x26] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x27];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x27] = 0;
  }
  if (in_ECX[0x25] != 0) {
    piVar1 = (int *)(in_ECX[0x25] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0(uVar3);
    }
    in_ECX[0x25] = 0;
  }
  *(undefined1 *)(in_ECX + 0x1e) = 0;
  in_ECX[0x24] = 0;
  *(undefined1 *)(in_ECX + 0x2c) = 0;
  puVar2 = (undefined4 *)in_ECX[0x2d];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x2d] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x2d];
  local_4._0_1_ = 3;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4._0_1_ = 2;
  _eh_vector_destructor_iterator_(in_ECX + 0x27,4,1,FUN_007016a0);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x26,4,1,FUN_007016a0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x25,4,1,FUN_004027d0);
  local_4 = 0xffffffff;
  FUN_00802760();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007b13a0(undefined4 param_1)

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
  puStack_8 = &LAB_009d00c6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x30) == 0) {
    iVar2 = FUN_00401f00(0x34,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_009a8490(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar3);
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x18))
              ("texRatio0",0x10000007,0,6,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0xa0,0);
  }
  if (*(int *)(in_ECX + 0x2c) == 0) {
    iVar2 = FUN_00401f00(0x34,uVar1);
    local_4 = 1;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_009a4750(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar3);
    (**(code **)(**(int **)(in_ECX + 0x2c) + 0x18))
              ("Blend Value",0x10000004,0,1,1,&DAT_00a2f7ec,4,4,&DAT_00b42d50,0);
  }
  FUN_0077aa60(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_007b1670(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *in_ECX;
  int iVar6;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cd780;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  piVar4 = (int *)FUN_007606a0(&local_10,uVar3);
  iVar2 = in_ECX[0x25];
  local_4._0_1_ = 1;
  if (iVar2 != *piVar4) {
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar2 = *piVar4;
    in_ECX[0x25] = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_10 != 0) &&
     (*(int *)(local_10 + 0x60) = *(int *)(local_10 + 0x60) + -1, *(int *)(local_10 + 0x60) == 0)) {
    FUN_007604d0();
  }
  piVar4 = (int *)FUN_00772630(&local_10);
  iVar2 = *piVar4;
  iVar6 = 0;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
    iVar6 = iVar2;
  }
  local_4._0_1_ = 0;
  if ((local_10 != 0) &&
     (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(iVar6,0,3,2);
  FUN_00771640(1);
  FUN_00760010(*(undefined4 *)(in_ECX[0x25] + 0x14),iVar6);
  piVar4 = (int *)FUN_00772630(&local_10);
  local_4._0_1_ = 3;
  if (iVar6 != *piVar4) {
    if (iVar6 != 0) {
      piVar1 = (int *)(iVar6 + 0x5c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00772560();
      }
    }
    iVar6 = *piVar4;
    if (iVar6 != 0) {
      *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 1;
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((local_10 != 0) &&
     (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(iVar6,1,3,2);
  FUN_00771640(0);
  FUN_00760010(*(undefined4 *)(in_ECX[0x25] + 0x14),iVar6);
  iVar2 = in_ECX[0x25];
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar5 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar5;
  }
  FUN_00772cd0(7,0,0);
  iVar2 = in_ECX[0x25];
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar5 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar5;
  }
  FUN_00772cd0(0xe,0,0);
  iVar2 = in_ECX[0x25];
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar5 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar5;
  }
  FUN_00772cd0(0x1b,0,0);
  iVar2 = in_ECX[0x25];
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar5 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar5;
  }
  FUN_00772cd0(0xf,0,0);
  iVar2 = in_ECX[0x25];
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar5 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar5;
  }
  FUN_00772cd0(0xa8,0xf,0);
  (**(code **)(*in_ECX + 0xb8))();
  local_4 = 0xffffffff;
  if (iVar6 != 0) {
    piVar4 = (int *)(iVar6 + 0x5c);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      FUN_00772560();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_007b18c0(undefined4 param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  LONG LVar11;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_1c;
  int *local_18;
  float local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar5 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cd7a8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  fVar2 = 1.0;
  if (DAT_00b42e96 == '\0') {
    if (*param_3 == 0) {
      piVar8 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))(uVar6);
      if (*(int **)(*param_2 + 0x20) != (int *)0x0) {
        (**(code **)(**(int **)(*param_2 + 0x20) + 0x4c))();
      }
      (**(code **)(*piVar8 + 0x4c))(0);
      piVar8 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
      if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x50))();
      }
      iVar7 = (**(code **)(*piVar8 + 0x50))(0);
      fVar2 = (float)iVar7;
      if (iVar7 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
    }
    else {
      piVar8 = *(int **)(*param_3 + 0x20);
      if (piVar8 == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = (**(code **)(*piVar8 + 0x4c))();
      }
      if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x4c))();
      }
      fVar3 = (float)iVar9;
      if (iVar9 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      fVar4 = (float)iVar7;
      if (iVar7 < 0) {
        fVar4 = fVar4 + 4.2949673e+09;
      }
      if (*(int **)(*param_3 + 0x20) == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (**(code **)(**(int **)(*param_3 + 0x20) + 0x50))();
      }
      if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x50))();
      }
      fVar2 = (float)iVar7;
      param_2 = (int *)(fVar3 / fVar4);
      if (iVar7 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
    }
    fVar3 = (float)iVar9;
    if (iVar9 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar2 = fVar2 / fVar3;
  }
  else {
    param_2 = (int *)0x3f800000;
  }
  local_1c = 0;
  local_18 = (int *)0x3f800000;
  local_14 = 1.0;
  local_10 = 0;
  if (*(int **)(*piVar5 + 0x20) == (int *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (**(code **)(**(int **)(*piVar5 + 0x20) + 0x4c))();
  }
  fVar3 = (float)iVar9;
  if (iVar9 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  if (*(int **)(*piVar5 + 0x20) == (int *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (**(code **)(**(int **)(*piVar5 + 0x20) + 0x50))();
  }
  fVar4 = (float)iVar9;
  if (iVar9 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(int **)(in_ECX + 0xa0) = param_2;
  *(float *)(in_ECX + 0xa4) = fVar2;
  *(float *)(in_ECX + 0xa8) = 0.5 / fVar3 + 0.0;
  *(float *)(in_ECX + 0xac) = 0.5 / fVar4 + 0.0;
  if ((char)param_4 == '\0') {
    local_18 = param_2;
  }
  else {
    fVar2 = 1.0;
    local_18 = (int *)0x3f800000;
  }
  local_14 = fVar2;
  FUN_00802890(*piVar5);
  if (DAT_00b43070 == '\0') {
    uVar10 = FUN_007b8200(&param_4,"Data\\Textures\\Menus\\Misc\\sepia.dds",1,0);
    uStack_4 = 0;
    FUN_0055e2a0(uVar10);
    puVar1 = param_4;
    uStack_4 = 0xffffffff;
    if (((param_4 != (undefined4 *)0x0) && (LVar11 = InterlockedDecrement(param_4 + 1), LVar11 == 0)
        ) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  if ((DAT_00b3f928[0x80] == 0) && (DAT_00b3f928[0x81] == 0)) {
    if (*param_3 == 0) {
      FUN_007d71c0(1,0);
    }
    else {
      uVar10 = FUN_007d6fe0();
      FUN_007d7280(1,uVar10);
    }
  }
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))(&local_1c);
  }
  FUN_00709c60(DAT_00b3f928);
  puVar1 = *(undefined4 **)(in_ECX + 0xb4);
  if (puVar1 != (undefined4 *)0x0) {
    LVar11 = InterlockedDecrement(puVar1 + 1);
    if ((LVar11 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0xb4) = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_007b1c70(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cd82e;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_008026c0(uVar4);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a8cfd4;
  _eh_vector_constructor_iterator_(in_ECX + 0x25,4,1,FUN_007c88a0,FUN_004027d0);
  piVar1 = in_ECX + 0x26;
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(piVar1,4,1,FUN_007c88a0,FUN_007016a0);
  piVar2 = in_ECX + 0x27;
  local_4._0_1_ = 2;
  _eh_vector_constructor_iterator_(piVar2,4,1,FUN_007c88a0,FUN_007016a0);
  in_ECX[0x2d] = 0;
  in_ECX[0x24] = 0;
  *(undefined1 *)(in_ECX + 0x2c) = 0;
  puVar3 = (undefined4 *)*piVar1;
  local_4 = CONCAT31(local_4._1_3_,4);
  if (puVar3 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar3 + 1);
    if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *piVar1 = 0;
  }
  puVar3 = (undefined4 *)*piVar2;
  if (puVar3 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar3 + 1);
    if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *piVar2 = 0;
  }
  if (in_ECX[0x25] != 0) {
    piVar1 = (int *)(in_ECX[0x25] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0x25] = 0;
  }
  *(undefined1 *)(in_ECX + 8) = 1;
  puVar3 = (undefined4 *)in_ECX[0x2d];
  if (puVar3 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar3 + 1);
    if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    in_ECX[0x2d] = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007b1de0(byte param_1)

{
  FUN_007b1200();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_007b1e00(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cd860;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar3);
  iVar5 = 0;
  iVar6 = 0;
  iStack_10 = 0;
  iStack_4._0_1_ = 1;
  iStack_4._1_3_ = 0;
  if (in_ECX[0x24] == 0) {
    iVar5 = in_ECX[0x25];
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
      iStack_10 = iVar5;
    }
    iVar5 = iStack_10;
    iVar2 = **(int **)(iStack_10 + 0x24);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      iVar6 = iVar2;
    }
    uVar4 = FUN_00405a30();
    FUN_0076c910(uVar4);
    iVar2 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
    if (iVar6 != iVar2) {
      if (iVar6 != 0) {
        piVar1 = (int *)(iVar6 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar6 = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      }
    }
    FUN_0076c910(in_ECX[0x2d]);
    FUN_0076ce40(in_ECX[0xe],&iStack_10);
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  if (iVar6 != 0) {
    piVar1 = (int *)(iVar6 + 0x5c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_00772560();
    }
  }
  iStack_4 = 0xffffffff;
  if (iVar5 != 0) {
    piVar1 = (int *)(iVar5 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



int * FUN_007b1f20(void)

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
  iVar3 = FUN_00401f00(0xb8);
  if (iVar3 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_007b1c70();
  }
  (**(code **)(*piVar7 + 0x84))();
  (**(code **)(*piVar7 + 0xb0))();
  (**(code **)(*piVar7 + 0xb4))();
  piVar1 = (int *)piVar8[1];
  if (piVar1 != piVar7) {
    if (((piVar1 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar1 + 1), LVar5 == 0)) &&
       (piVar1 != (int *)0x0)) {
      (**(code **)*piVar1)(1);
    }
    piVar8[1] = (int)piVar7;
    InterlockedIncrement(piVar7 + 1);
  }
  (**(code **)(*(int *)piVar8[1] + 0x54))(*piVar8);
  *unaff_FS_OFFSET = iVar3;
  return piVar8;
}



void FUN_007b20b0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  *in_ECX = 0;
  return;
}



uint FUN_007b2110(short param_1,short param_2)

{
  return ((int)param_1 & 0xfffffffcU) << 0xe | (uint)(ushort)(param_2 >> 2);
}



byte FUN_007b2130(char param_1)

{
  byte bVar1;
  
  if (DAT_00b42d64 == 0) {
    FUN_006f7070("Tried to enable/disable NULL LOD tree parent node.",
                 ".\\DistantLODShaderProperty.cpp",0x43c);
  }
  bVar1 = *(byte *)(DAT_00b42d64 + 0x18) & 1;
  if (param_1 != '\0') {
    *(ushort *)(DAT_00b42d64 + 0x18) = *(ushort *)(DAT_00b42d64 + 0x18) | 1;
    return bVar1;
  }
  *(ushort *)(DAT_00b42d64 + 0x18) = *(ushort *)(DAT_00b42d64 + 0x18) & 0xfffe;
  return bVar1;
}



void FUN_007b2180(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  undefined4 *unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ce3d8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  iVar2 = (**(code **)(*in_ECX + 4))();
  puVar3 = *(undefined4 **)(in_ECX[2] + iVar2 * 4);
  do {
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x14))();
      if (param_1 != (undefined4 *)0x0) {
        InterlockedIncrement(param_1 + 1);
      }
      (**(code **)(*in_ECX + 0xc))(puVar3);
      *puVar3 = *(undefined4 *)(in_ECX[2] + iVar2 * 4);
      *(undefined4 **)(in_ECX[2] + iVar2 * 4) = puVar3;
      in_ECX[3] = in_ECX[3] + 1;
LAB_007b222a:
      if ((param_1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_1 + 1), LVar4 == 0))
      {
        (**(code **)*param_1)(1);
      }
      *unaff_FS_OFFSET = unaff_ESI;
      return;
    }
    cVar1 = (**(code **)(*in_ECX + 8))();
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0x10))();
      if (unaff_retaddr != (undefined4 *)0x0) {
        InterlockedIncrement(unaff_retaddr + 1);
      }
      (**(code **)(*in_ECX + 0xc))(puVar3,local_4);
      param_1 = unaff_retaddr;
      goto LAB_007b222a;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}



void FUN_007b22c0(void)

{
  undefined4 *in_ECX;
  
  FUN_007ee440();
  *in_ECX = &PTR_FUN_00a8d1d4;
  in_ECX[0x28] = 0;
  in_ECX[0x27] = 0;
  return;
}



void FUN_007b2330(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cd888;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a8d1d4;
  in_ECX[0x27] = 0;
  puVar1 = (undefined4 *)in_ECX[0x28];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_007ee4f0(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007b23c0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int in_ECX;
  
  thunk_FUN_007e2490(param_1,param_2);
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  if (puVar1 != *(undefined4 **)(in_ECX + 0xa0)) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *(int *)(in_ECX + 0xa0);
    *(int *)(param_1 + 0xa0) = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(in_ECX + 0xa4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(in_ECX + 0xa8);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(in_ECX + 0x9c);
  return;
}



void FUN_007b2450(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cd8e4;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)in_ECX[9];
  local_4 = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  puVar1 = (undefined4 *)in_ECX[8];
  local_4._0_1_ = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[7];
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[6];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = (uint)local_4._1_3_ << 8;
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



void FUN_007b2560(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cd908;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a8d250;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a8d180;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007b25c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8d190;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_007b25e0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8d1b0;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_007b2600(int *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  LONG LVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  int *piVar5;
  int *unaff_retaddr;
  
  piVar5 = (int *)*param_1;
  *param_2 = piVar5[1];
  puVar1 = (undefined4 *)*param_3;
  if (puVar1 != (undefined4 *)piVar5[2]) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar3 = piVar5[2];
    *param_3 = iVar3;
    if (iVar3 != 0) {
      InterlockedIncrement((LONG *)(iVar3 + 4));
    }
  }
  if (*piVar5 != 0) {
    *param_1 = *piVar5;
    return;
  }
  iVar3 = (**(code **)(*in_ECX + 4))(piVar5[1]);
  uVar4 = iVar3 + 1;
  if (uVar4 < (uint)in_ECX[1]) {
    piVar5 = (int *)(in_ECX[2] + uVar4 * 4);
    do {
      if (*piVar5 != 0) {
        *unaff_retaddr = *piVar5;
        return;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar4 < (uint)in_ECX[1]);
  }
  *unaff_retaddr = 0;
  return;
}



void FUN_007b26c0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8068;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined4 *)(param_1 + 4) = param_2;
  puVar1 = *(undefined4 **)(param_1 + 8);
  local_4 = 0;
  if (puVar1 != param_3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar2);
      }
    }
    *(undefined4 **)(param_1 + 8) = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  local_4 = 0xffffffff;
  if (param_3 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(param_3 + 1);
    if (LVar3 == 0) {
      (**(code **)*param_3)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007b2770(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8d190;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007b27a0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8d1b0;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007b27d0(byte param_1)

{
  FUN_007b2330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_007b2800(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0cb6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(uint *)(in_ECX + 0x24) != param_2) {
    FUN_007e24c0(uVar1);
    if ((DAT_00b42f48 < 2) || (DAT_00b43070 != '\0')) {
      iVar2 = FUN_00401f00(0x10);
      local_4 = 1;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_007e2370(iVar2,param_1,0x195,1,0,0);
      }
      local_4 = 0xffffffff;
      puVar4 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x28) + 4))();
      puVar4[2] = uVar3;
      puVar4[1] = 0;
      *puVar4 = *(undefined4 *)(in_ECX + 0x2c);
      if (*(int *)(in_ECX + 0x2c) == 0) {
        *(undefined4 **)(in_ECX + 0x30) = puVar4;
      }
      else {
        *(undefined4 **)(*(int *)(in_ECX + 0x2c) + 4) = puVar4;
      }
      *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
      *(undefined4 **)(in_ECX + 0x2c) = puVar4;
    }
    else {
      iVar2 = FUN_00401f00(0x10);
      local_4 = 0;
      if (iVar2 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = FUN_007e2370(iVar2,param_1,0xc,1,0,0);
      }
      local_4 = 0xffffffff;
      FUN_006aa320(&param_1);
    }
    *(uint *)(in_ECX + 0x24) = (uint)DAT_00b42eac << 8 | param_2;
  }
  *unaff_FS_OFFSET = local_c;
  return in_ECX + 0x28;
}



undefined4 * FUN_007b2940(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0xac,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_007ee440();
    *puVar2 = &PTR_FUN_00a8d1d4;
    puVar2[0x28] = 0;
    puVar2[0x27] = 0;
  }
  local_4 = 0xffffffff;
  FUN_007b23c0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_007b29e0(byte param_1)

{
  FUN_007b2560();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined1 FUN_007b2a00(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  LONG LVar5;
  undefined1 uVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = (int)param_1;
  puStack_8 = &LAB_009c9ba8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar6 = 0;
  if (param_1 != (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
    local_4 = 0;
    cVar3 = FUN_004a1ab0(iVar1,&param_1);
    puVar2 = param_1;
    uVar6 = 0;
    if ((cVar3 != '\0') && (param_1 != (undefined4 *)0x0)) {
      uVar6 = 1;
    }
    local_4 = 0xffffffff;
    if (param_1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(param_1 + 1);
      if (LVar5 == 0) {
        (**(code **)*puVar2)(1,uVar4);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return uVar6;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x007b32ef) */
/* WARNING: Removing unreachable block (ram,0x007b3057) */
/* WARNING: Removing unreachable block (ram,0x007b315a) */
/* WARNING: Removing unreachable block (ram,0x007b3366) */

undefined4 * FUN_007b2aa0(int *param_1)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  short sVar4;
  byte bVar5;
  int *piVar6;
  char cVar7;
  ushort uVar8;
  short sVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  LONG LVar14;
  float *pfVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float *pfVar20;
  float *pfVar21;
  uint uVar22;
  int *unaff_FS_OFFSET;
  float *pfStack_600;
  undefined4 *puStack_5fc;
  float *pfStack_5f8;
  undefined4 *puStack_5f4;
  undefined1 uStack_5ed;
  ushort *puStack_5ec;
  undefined4 *puStack_5e8;
  uint uStack_5e4;
  float *pfStack_5e0;
  float *pfStack_5dc;
  float *pfStack_5d8;
  undefined4 *puStack_5d4;
  float *pfStack_5d0;
  uint uStack_5cc;
  undefined4 *puStack_5c8;
  float *local_5c4;
  short *psStack_5c0;
  void *pvStack_5bc;
  float fStack_5b8;
  int iStack_5b4;
  undefined4 *local_5b0;
  float *pfStack_5ac;
  float *pfStack_5a8;
  void *pvStack_5a4;
  void *pvStack_5a0;
  void *pvStack_59c;
  int iStack_598;
  uint uStack_594;
  float *pfStack_590;
  float *pfStack_58c;
  int *local_588;
  uint uStack_584;
  undefined4 *puStack_580;
  float *pfStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined **local_568;
  int *local_360;
  undefined4 local_e0;
  undefined4 local_dc;
  char local_d8 [200];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cd9a5;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&pfStack_600;
  *unaff_FS_OFFSET = (int)&local_c;
  local_588 = param_1;
  if (DAT_00b42f48 != 0) {
    pfVar20 = (float *)0x0;
    local_5c4 = (float *)0x0;
    FUN_00713a30();
    local_568 = &PTR_FUN_00a3690c;
    local_dc = 0;
    local_e0 = 0;
    if (param_1[2] != 0) {
      local_5b0 = (undefined4 *)0x0;
      local_4 = 1;
      cVar7 = FUN_004a1ab0(param_1[2]);
      puVar10 = local_5b0;
      if (cVar7 == '\0') {
        if ((((param_1[1] == 0) && (*param_1 != 0)) &&
            (cVar7 = FUN_006f9980(*param_1), cVar7 != '\0')) && ((int *)*local_360 != (int *)0x0)) {
          iVar11 = (**(code **)(*(int *)*local_360 + 8))();
          param_1[1] = iVar11;
        }
        iVar11 = param_1[1];
        puVar10 = local_5b0;
        if (iVar11 != 0) {
          while (iVar11 != 0) {
            uVar19 = 0;
            if (*(short *)(iVar11 + 0xb6) != 0) {
              if (*(short *)(iVar11 + 0xb6) == 0) goto LAB_007b2be3;
              do {
                piVar1 = *(int **)(*(int *)(iVar11 + 0xb0) + uVar19 * 4);
                if ((piVar1 != (int *)0x0) &&
                   (pfVar20 = (float *)(**(code **)(*piVar1 + 0xc))(), local_5c4 = pfVar20,
                   pfVar20 != (float *)0x0)) goto LAB_007b2bf5;
LAB_007b2be3:
                uVar19 = uVar19 + 1;
              } while (uVar19 < *(ushort *)(iVar11 + 0xb6));
            }
            if (pfVar20 != (float *)0x0) break;
          }
LAB_007b2bf5:
          iVar11 = FUN_00560920(&DAT_00b3fd04);
          uVar19 = ((DAT_00b42f48 < 2) - 1 & 0x94) + 0x50;
          uStack_5e4 = uVar19;
          if (iVar11 == 0) {
            uStack_5ed = 0;
            FUN_00560920(&DAT_00b3fcd4);
            iVar11 = FUN_00560920(&DAT_00b3fd2c,pfVar20[0x2d]);
            fStack_5b8 = *(float *)(iVar11 + 0x1c);
            uVar17 = (uint)*(ushort *)(iVar11 + 8);
            puStack_580 = *(undefined4 **)(iVar11 + 0x20);
            pfStack_5a8 = *(float **)(iVar11 + 0x24);
            pfStack_57c = *(float **)(iVar11 + 0x28);
            pvStack_5bc = *(void **)(iVar11 + 0x48);
            uVar8 = (ushort)(0xffff / (ulonglong)(longlong)(int)uVar17);
            if (uVar8 <= (ushort)uVar19) {
              uVar19 = (uint)uVar8;
              uStack_5e4 = uVar19;
            }
            puStack_5fc = (undefined4 *)(*(uint *)(iVar11 + 0x44) & 0xffff);
            uVar8 = (ushort)(0xffff / (ulonglong)(longlong)(int)puStack_5fc);
            if (uVar8 <= (ushort)uVar19) {
              uVar19 = (uint)uVar8;
              uStack_5e4 = uVar19;
            }
            uVar18 = uVar19 * uVar17;
            uStack_5cc = uVar17;
            uStack_584 = uVar17;
            pfStack_5f8 = (float *)FUN_00401f00();
            puStack_5d4 = (undefined4 *)
                          FUN_00401f00(-(uint)((int)((ulonglong)uVar18 * 0xc >> 0x20) != 0) |
                                       (uint)((ulonglong)uVar18 * 0xc));
            pfStack_5e0 = (float *)FUN_00401f00(-(uint)((int)((ulonglong)uVar18 * 0x10 >> 0x20) != 0
                                                       ) | (uint)((ulonglong)uVar18 * 0x10));
            local_4._0_1_ = 2;
            pfStack_600 = pfStack_5e0;
            if (pfStack_5e0 == (float *)0x0) {
              pfStack_5e0 = (float *)0x0;
            }
            else {
              _vector_constructor_iterator_(pfStack_5e0,0x10,uVar18,FUN_0047ea50);
            }
            local_4._0_1_ = 1;
            pfVar20 = (float *)FUN_00401f00();
            pfStack_600 = pfVar20;
            pfStack_5ac = (float *)FUN_00401f00(-(uint)((int)((ulonglong)uVar18 * 4 >> 0x20) != 0) |
                                                (uint)((ulonglong)uVar18 * 4));
            lVar3 = (ulonglong)(uVar19 * (int)puStack_5fc) * 2;
            psStack_5c0 = (short *)FUN_00401f00(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) |
                                                (uint)lVar3);
            iVar11 = 0;
            iStack_5b4 = 0;
            iStack_598 = 0;
            uVar22 = 0;
            uVar18 = uVar17;
            if (uVar19 != 0) {
              pvStack_5a0 = (void *)(uVar17 * 0xc);
              puStack_5e8 = (undefined4 *)(uVar17 * 0x10);
              puStack_5f4 = puStack_5d4;
              pfStack_5dc = pfStack_5e0;
              puStack_5c8 = (undefined4 *)0x0;
              pfStack_5d8 = pfStack_5ac;
              pfStack_5d0 = pfVar20;
              do {
                if (0 < (int)uVar18) {
                  pvStack_59c = (void *)(float)iStack_598;
                  pvStack_5a4 = (void *)((int)pfStack_5f8 - (int)puStack_5d4);
                  pfStack_58c = pfStack_57c;
                  puStack_5ec = (ushort *)((int)fStack_5b8 - (int)puStack_580);
                  pfStack_590 = pfStack_5d8;
                  uStack_594 = uStack_584;
                  puVar10 = puStack_5f4;
                  puVar16 = puStack_580;
                  pfVar20 = pfStack_5dc;
                  pfVar15 = pfStack_5a8;
                  pfVar21 = pfStack_5d0;
                  do {
                    *(undefined4 *)((int)pvStack_5a4 + (int)puVar10) =
                         *(undefined4 *)((int)puStack_5ec + (int)puVar16);
                    *(undefined4 *)((int)pvStack_5a4 + 4 + (int)puVar10) =
                         *(undefined4 *)((int)(puStack_5ec + 2) + (int)puVar16);
                    *(undefined4 *)((int)pvStack_5a4 + 8 + (int)puVar10) =
                         *(undefined4 *)((int)(puStack_5ec + 4) + (int)puVar16);
                    *puVar10 = *puVar16;
                    puVar10[1] = puVar16[1];
                    puVar10[2] = puVar16[2];
                    *pfVar20 = *pfVar15;
                    pfVar20[1] = pfVar15[1];
                    pfVar20[2] = pfVar15[2];
                    pfVar20[3] = pfVar15[3];
                    *pfVar21 = *pfStack_58c;
                    pfVar21[1] = pfStack_58c[1];
                    *pfStack_590 = (float)pvStack_59c;
                    pfStack_590 = pfStack_590 + 1;
                    pfStack_58c = pfStack_58c + 2;
                    puVar10 = puVar10 + 3;
                    puVar16 = puVar16 + 3;
                    pfVar20 = pfVar20 + 4;
                    pfVar15 = pfVar15 + 4;
                    pfVar21 = pfVar21 + 2;
                    uStack_594 = uStack_594 - 1;
                  } while (uStack_594 != 0);
                  uStack_594 = 0;
                  iVar11 = iStack_5b4;
                  uVar18 = uStack_584;
                }
                iVar12 = 0;
                if (0 < (int)puStack_5fc) {
                  do {
                    psStack_5c0[iVar11] =
                         *(short *)((int)pvStack_5bc + iVar12 * 2) + (short)puStack_5c8;
                    iVar12 = iVar12 + 1;
                    iVar11 = iVar11 + 1;
                    iStack_5b4 = iVar11;
                  } while (iVar12 < (int)puStack_5fc);
                }
                uVar22 = uStack_5e4 & 0xffff;
                puStack_5f4 = puStack_5f4 + uVar17 * 3;
                pfStack_5d8 = pfStack_5d8 + uVar18;
                pfStack_5d0 = pfStack_5d0 + uVar18 * 2;
                pfStack_5dc = pfStack_5dc + uVar17 * 4;
                iStack_598 = iStack_598 + 1;
                puStack_5c8 = (undefined4 *)((int)puStack_5c8 + uVar18);
              } while (iStack_598 < (int)uVar22);
            }
            uVar19 = (int)puStack_5fc / 3;
            puStack_5f4 = (undefined4 *)(uVar19 & 0xffff);
            pvStack_5bc = (void *)FUN_00401f00();
            local_4 = CONCAT31(local_4._1_3_,3);
            if (pvStack_5bc == (void *)0x0) {
LAB_007b33df:
              puStack_5e8 = (undefined4 *)0x0;
            }
            else {
              puStack_5e8 = (undefined4 *)
                            FUN_0072ab00(uStack_5e4 * uStack_5cc,pfStack_5f8,puStack_5d4,pfStack_5e0
                                         ,pfStack_600,1,0,uVar19 * uStack_5e4,psStack_5c0,
                                         uStack_5e4 * uStack_5cc);
            }
          }
          else {
            uStack_5ed = 1;
            iVar11 = FUN_00560920(&DAT_00b3fd0c);
            pvStack_5bc = *(void **)(iVar11 + 0x1c);
            uVar18 = (uint)*(ushort *)(iVar11 + 8);
            puStack_5ec = *(ushort **)(iVar11 + 0x48);
            pvStack_5a0 = *(void **)(iVar11 + 0x20);
            pvStack_5a4 = *(void **)(iVar11 + 0x24);
            pvStack_59c = *(void **)(iVar11 + 0x28);
            psStack_5c0 = *(short **)(iVar11 + 0x4c);
            uVar8 = (ushort)(0xffff / (ulonglong)(longlong)(int)uVar18);
            if (uVar8 <= (ushort)uVar19) {
              uVar19 = (uint)uVar8;
              uStack_5e4 = uVar19;
            }
            uVar8 = (ushort)(0xffff / (ulonglong)
                                      (longlong)
                                      (int)(((*puStack_5ec & 1) != 0) + 2 + (uint)*puStack_5ec));
            if (uVar8 <= (ushort)uVar19) {
              uVar19 = (uint)uVar8;
              uStack_5e4 = uVar19;
            }
            uVar22 = uVar19 * uVar18;
            uStack_5cc = uVar18;
            iStack_5b4 = FUN_00401f00();
            puStack_5c8 = (undefined4 *)
                          FUN_00401f00(-(uint)((int)((ulonglong)uVar22 * 0xc >> 0x20) != 0) |
                                       (uint)((ulonglong)uVar22 * 0xc));
            pfStack_5f8 = (float *)FUN_00401f00(-(uint)((int)((ulonglong)uVar22 * 0x10 >> 0x20) != 0
                                                       ) | (uint)((ulonglong)uVar22 * 0x10));
            local_4._0_1_ = 4;
            if (pfStack_5f8 == (float *)0x0) {
              pfStack_5d8 = (float *)0x0;
            }
            else {
              _vector_constructor_iterator_(pfStack_5f8,0x10,uVar22,FUN_0047ea50);
              pfStack_5d8 = pfStack_5f8;
            }
            local_4 = CONCAT31(local_4._1_3_,1);
            pfStack_5f8 = (float *)FUN_00401f00();
            pfStack_5ac = (float *)FUN_00401f00(-(uint)((int)((ulonglong)uVar22 * 4 >> 0x20) != 0) |
                                                (uint)((ulonglong)uVar22 * 4));
            uVar8 = *puStack_5ec;
            lVar3 = (ulonglong)
                    ((uVar19 - 1) * (uint)(ushort)(((uVar8 & 1) != 0) + 2 + uVar8) + (uint)uVar8) *
                    2;
            pfStack_5d0 = (float *)FUN_00401f00(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) |
                                                (uint)lVar3);
            iVar11 = 0;
            puStack_5fc = (undefined4 *)0x0;
            uVar22 = 0;
            uVar17 = 0;
            if (uVar19 != 0) {
              puStack_5e8 = (undefined4 *)(uVar18 << 4);
              pfStack_5dc = pfStack_5ac;
              puStack_5f4 = pfStack_5f8;
              pfStack_5a8 = (float *)(uVar19 - 1);
              pfStack_600 = (float *)(iStack_5b4 - (int)puStack_5c8);
              pfStack_5e0 = pfStack_5d8;
              puStack_5d4 = puStack_5c8;
              do {
                puVar10 = puStack_5d4;
                _memcpy((undefined1 *)((int)pfStack_600 + (int)puStack_5d4),pvStack_5bc,uVar18 * 0xc
                       );
                _memcpy(puVar10,pvStack_5a0,uVar18 * 0xc);
                _memcpy(pfStack_5e0,pvStack_5a4,(size_t)puStack_5e8);
                _memcpy(puStack_5f4,pvStack_59c,uVar18 * 8);
                if (uVar18 != 0) {
                  fStack_5b8 = (float)(int)puStack_5fc;
                  pfVar20 = pfStack_5dc;
                  for (uVar19 = uVar18; uVar19 != 0; uVar19 = uVar19 - 1) {
                    *pfVar20 = fStack_5b8;
                    pfVar20 = pfVar20 + 1;
                  }
                }
                iVar13 = 0;
                sVar4 = (short)puStack_5fc;
                sVar9 = (short)uStack_5cc;
                iVar12 = iVar11;
                if (*puStack_5ec != 0) {
                  do {
                    *(short *)((int)pfStack_5d0 + iVar12 * 2) = psStack_5c0[iVar13] + sVar4 * sVar9;
                    iVar13 = iVar13 + 1;
                    iVar12 = iVar12 + 1;
                  } while (iVar13 < (int)(uint)*puStack_5ec);
                }
                iVar11 = iVar12;
                if ((int)puStack_5fc < (int)pfStack_5a8) {
                  fStack_5b8 = (float)((uint)puStack_5fc & 0xffff);
                  *(short *)((int)pfStack_5d0 + (iVar12 + 1) * 2 + -2) =
                       sVar4 * sVar9 + psStack_5c0[*puStack_5ec - 1];
                  sVar9 = (sVar4 + 1) * sVar9;
                  *(short *)((int)pfStack_5d0 + (iVar12 + 1) * 2) = *psStack_5c0 + sVar9;
                  iVar11 = iVar12 + 2;
                  if ((*puStack_5ec & 1) == 1) {
                    *(short *)((int)pfStack_5d0 + iVar11 * 2) = *psStack_5c0 + sVar9;
                    iVar11 = iVar12 + 3;
                  }
                }
                pfStack_5e0 = (float *)((int)pfStack_5e0 + (int)puStack_5e8);
                uVar22 = uStack_5e4 & 0xffff;
                puStack_5d4 = puStack_5d4 + uVar18 * 3;
                puStack_5f4 = (undefined4 *)((int)puStack_5f4 + uVar18 * 8);
                puStack_5fc = (undefined4 *)((int)puStack_5fc + 1);
                pfStack_5dc = pfStack_5dc + uVar18;
                uVar17 = uStack_5e4;
              } while ((int)puStack_5fc < (int)uVar22);
            }
            pfStack_600 = (float *)FUN_00401f00();
            *(short *)pfStack_600 = (short)iVar11;
            uVar8 = *puStack_5ec;
            if ((uVar8 & 1) == 1) {
              uVar8 = uVar8 + 3;
            }
            else {
              uVar8 = uVar8 + 2;
            }
            puStack_5f4 = (undefined4 *)(uint)uVar8;
            pvStack_5bc = (void *)FUN_00401f00();
            local_4 = CONCAT31(local_4._1_3_,5);
            if (pvStack_5bc == (void *)0x0) goto LAB_007b33df;
            puStack_5e8 = (undefined4 *)
                          FUN_0073b430(uVar17 * uStack_5cc,iStack_5b4,puStack_5c8,pfStack_5d8,
                                       pfStack_5f8,1,0,iVar11 + -2,1,pfStack_600,pfStack_5d0,
                                       uVar17 * uStack_5cc);
          }
          pfVar20 = local_5c4;
          puStack_5fc = (undefined4 *)0x0;
          local_4 = CONCAT31(local_4._1_3_,6);
          iVar11 = FUN_00707530();
          if (((iVar11 != 0) && (**(int **)(iVar11 + 0x20) != 0)) &&
             (puVar10 = *(undefined4 **)(**(int **)(iVar11 + 0x20) + 8),
             puVar10 != (undefined4 *)0x0)) {
            puStack_5fc = puVar10;
            InterlockedIncrement(puVar10 + 1);
          }
          FUN_00708560(&pfStack_600);
          pfVar15 = pfStack_600;
          if (((pfStack_600 != (float *)0x0) &&
              (LVar14 = InterlockedDecrement((LONG *)(pfStack_600 + 1)), LVar14 == 0)) &&
             (pfVar15 != (float *)0x0)) {
            (**(code **)*pfVar15)();
          }
          pfVar15 = (float *)FUN_00401f00();
          local_4._0_1_ = 7;
          pfStack_600 = pfVar15;
          if (pfVar15 == (float *)0x0) {
            pfStack_5f8 = (float *)0x0;
          }
          else {
            FUN_006ffd30();
            *pfVar15 = (float)&PTR_FUN_00a3d604;
            *(undefined2 *)(pfVar15 + 6) = 0xec;
            *(undefined1 *)((int)pfVar15 + 0x1a) = 0;
            pfStack_5f8 = pfVar15;
          }
          local_4._0_1_ = 6;
          *(undefined1 *)((int)pfStack_5f8 + 0x1a) = 0;
          *(ushort *)(pfStack_5f8 + 6) = *(ushort *)(pfStack_5f8 + 6) & 0xf3ff | 0x1201;
          pfVar15 = (float *)FUN_00401f00();
          local_4._0_1_ = 8;
          pfStack_600 = pfVar15;
          if (pfVar15 == (float *)0x0) {
            local_5c4 = (float *)0x0;
          }
          else {
            FUN_006ffd30();
            *pfVar15 = (float)&PTR_FUN_00a3d604;
            *(undefined2 *)(pfVar15 + 6) = 0xec;
            *(undefined1 *)((int)pfVar15 + 0x1a) = 0;
            local_5c4 = pfVar15;
          }
          local_4 = CONCAT31(local_4._1_3_,6);
          *(undefined1 *)((int)local_5c4 + 0x1a) = 0;
          *(ushort *)(local_5c4 + 6) = *(ushort *)(local_5c4 + 6) & 0xf3fe | 0x1200;
          pfStack_600 = (float *)FUN_00707530();
          fVar2 = pfVar20[0x2d];
          uStack_578 = *(undefined4 *)((int)fVar2 + 0xc);
          uStack_574 = *(undefined4 *)((int)fVar2 + 0x10);
          uStack_570 = *(undefined4 *)((int)fVar2 + 0x14);
          uStack_56c = *(undefined4 *)((int)fVar2 + 0x18);
          puVar10 = (undefined4 *)FUN_00401f00();
          puVar16 = (undefined4 *)0x0;
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = &PTR_FUN_00a3fcf8;
            puVar10[1] = 0;
            InterlockedIncrement((LONG *)&DAT_00b3fd64);
            *puVar10 = &PTR_FUN_00a8d260;
            puVar10[2] = 0;
            puVar10[6] = 0;
            puVar10[7] = 0;
            puVar10[8] = 0;
            puVar10[9] = 0;
            puVar16 = puVar10;
          }
          puVar10 = local_5b0;
          if (local_5b0 != puVar16) {
            if ((local_5b0 != (undefined4 *)0x0) &&
               (LVar14 = InterlockedDecrement(local_5b0 + 1), LVar14 == 0)) {
              (**(code **)*puVar10)();
            }
            puVar10 = puVar16;
            local_5b0 = puVar16;
            if (puVar16 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar16 + 1);
            }
          }
          *(undefined1 *)(puVar10 + 3) = uStack_5ed;
          puVar16 = (undefined4 *)puVar10[2];
          if (puVar16 != puStack_5e8) {
            if (((puVar16 != (undefined4 *)0x0) &&
                (LVar14 = InterlockedDecrement(puVar16 + 1), LVar14 == 0)) &&
               (puVar16 != (undefined4 *)0x0)) {
              (**(code **)*puVar16)();
            }
            puVar10[2] = puStack_5e8;
            if (puStack_5e8 != (undefined4 *)0x0) {
              InterlockedIncrement(puStack_5e8 + 1);
            }
          }
          puVar10[4] = pfStack_5ac;
          puVar10[5] = uVar18;
          puVar16 = (undefined4 *)puVar10[6];
          if (puVar16 != puStack_5fc) {
            if (((puVar16 != (undefined4 *)0x0) &&
                (LVar14 = InterlockedDecrement(puVar16 + 1), LVar14 == 0)) &&
               (puVar16 != (undefined4 *)0x0)) {
              (**(code **)*puVar16)();
            }
            puVar10[6] = puStack_5fc;
            if (puStack_5fc != (undefined4 *)0x0) {
              InterlockedIncrement(puStack_5fc + 1);
            }
          }
          pfVar15 = local_5c4;
          pfVar20 = (float *)puVar10[8];
          if (pfVar20 != local_5c4) {
            if (((pfVar20 != (float *)0x0) &&
                (LVar14 = InterlockedDecrement((LONG *)(pfVar20 + 1)), LVar14 == 0)) &&
               (pfVar20 != (float *)0x0)) {
              (**(code **)*pfVar20)();
            }
            puVar10[8] = pfVar15;
            InterlockedIncrement((LONG *)(pfVar15 + 1));
          }
          pfVar15 = pfStack_5f8;
          pfVar20 = (float *)puVar10[7];
          if (pfVar20 != pfStack_5f8) {
            if (((pfVar20 != (float *)0x0) &&
                (LVar14 = InterlockedDecrement((LONG *)(pfVar20 + 1)), LVar14 == 0)) &&
               (pfVar20 != (float *)0x0)) {
              (**(code **)*pfVar20)();
            }
            puVar10[7] = pfVar15;
            InterlockedIncrement((LONG *)(pfVar15 + 1));
          }
          pfVar15 = pfStack_600;
          pfVar20 = (float *)puVar10[9];
          if (pfVar20 != pfStack_600) {
            if (((pfVar20 != (float *)0x0) &&
                (LVar14 = InterlockedDecrement((LONG *)(pfVar20 + 1)), LVar14 == 0)) &&
               (pfVar20 != (float *)0x0)) {
              (**(code **)*pfVar20)();
            }
            puVar10[9] = pfVar15;
            if (pfVar15 != (float *)0x0) {
              InterlockedIncrement((LONG *)(pfVar15 + 1));
            }
          }
          piVar6 = local_588;
          puVar10[10] = uStack_56c;
          puVar10[0xb] = uVar22;
          *(undefined2 *)((int)puVar10 + 0x32) = puStack_5f4._0_2_;
          *(undefined1 *)(puVar10 + 0xc) = 0;
          piVar1 = (int *)local_588[1];
          if (piVar1 != (int *)0x0) {
            for (puVar16 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar16 != (undefined4 *)0x0;
                puVar16 = (undefined4 *)puVar16[1]) {
              if (puVar16 == &DAT_00b3fd4c) {
                bVar5 = 1;
                goto LAB_007b3740;
              }
            }
            bVar5 = 0;
LAB_007b3740:
            if ((-(uint)bVar5 & (uint)piVar1) != 0) {
              *(undefined1 *)(puVar10 + 0xc) = 1;
            }
          }
          pfStack_600 = (float *)&stack0xfffff9e8;
          InterlockedIncrement(puVar10 + 1);
          FUN_007b2180(piVar6[2]);
          puVar16 = puStack_5fc;
          local_4 = CONCAT31(local_4._1_3_,1);
          if ((puStack_5fc != (undefined4 *)0x0) &&
             (LVar14 = InterlockedDecrement(puStack_5fc + 1), LVar14 == 0)) {
            (**(code **)*puVar16)();
          }
        }
      }
      if ((puVar10 == (undefined4 *)0x0) &&
         (_sprintf(local_d8,"DISTANT LOD ERROR : could not load DistantLOD nif %s"),
         DAT_00b42e8c != (code *)0x0)) {
        (*DAT_00b42e8c)(local_d8);
      }
      local_4 = local_4 & 0xffffff00;
      if ((puVar10 != (undefined4 *)0x0) &&
         (LVar14 = InterlockedDecrement(puVar10 + 1), LVar14 == 0)) {
        (**(code **)*puVar10)();
      }
      local_4 = 0xffffffff;
      FUN_00436420();
      goto LAB_007b3817;
    }
    local_4 = 0xffffffff;
    FUN_00436420();
  }
  puVar10 = (undefined4 *)0x0;
LAB_007b3817:
  *unaff_FS_OFFSET = local_c;
  return puVar10;
}



void FUN_007b3840(byte param_1)

{
  FUN_007b2450();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007b3860(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cd9e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a8d2b0;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a8d190;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007b38d0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cda18;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a8d2d0;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a8d1b0;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007b3940(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cda61;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x1c);
  local_4 = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  FUN_00573880(uVar3);
  puVar1 = *(undefined4 **)(in_ECX + 0x10);
  while (puVar1 != (undefined4 *)0x0) {
    iVar2 = puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    if (iVar2 != 0) {
      FUN_00803210();
      FUN_00401f20(iVar2);
    }
  }
  FUN_00573880(uVar3);
  local_4._0_1_ = 1;
  FUN_006aa660();
  puVar1 = *(undefined4 **)(in_ECX + 0x1c);
  local_4 = (uint)local_4._1_3_ << 8;
  if (((puVar1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar1 + 1), LVar4 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  local_4 = 0xffffffff;
  FUN_007b2560();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007b3a40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_c;
  int local_8;
  undefined4 *local_4;
  
  uVar5 = 0;
  if (DAT_00b2c340 != 0) {
    do {
      if (*(int *)(DAT_00b2c344 + uVar5 * 4) != 0) {
        local_8 = *(int *)(DAT_00b2c344 + uVar5 * 4);
        goto LAB_007b3a64;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < DAT_00b2c340);
  }
  local_8 = 0;
LAB_007b3a64:
  local_c = 0;
  if (DAT_00b2c348 != 0) {
    while (local_8 != 0) {
      FUN_00452600(&local_8,&local_4,&local_c);
      iVar4 = local_c;
      if (local_c != 0) {
        puVar2 = *(undefined4 **)(local_c + 0x24);
        do {
          puVar3 = puVar2;
          if (puVar3 == (undefined4 *)0x0) goto LAB_007b3b26;
          puVar2 = (undefined4 *)*puVar3;
        } while (param_1 != puVar3[2]);
        if (puVar3 != (undefined4 *)0x0) {
          puVar2 = *(undefined4 **)(local_c + 0x10);
          while (local_4 = puVar2, local_4 != (undefined4 *)0x0) {
            iVar1 = local_4[2];
            puVar2 = (undefined4 *)*local_4;
            if ((iVar1 != 0) && (iVar6 = FUN_00802a60(param_1), iVar6 == 0)) {
              FUN_007aa860(&local_4);
              FUN_00803210();
              FUN_00401f20(iVar1);
              DAT_00b42d5c = DAT_00b42d5c + -1;
            }
          }
        }
LAB_007b3b26:
        puVar2 = *(undefined4 **)(iVar4 + 0x24);
        do {
          local_4 = puVar2;
          if (local_4 == (undefined4 *)0x0) {
            local_4 = (undefined4 *)0x0;
            break;
          }
          puVar2 = (undefined4 *)*local_4;
        } while (param_1 != local_4[2]);
        if (local_4 != (undefined4 *)0x0) {
          FUN_007aa860(&local_4);
        }
      }
    }
  }
  return;
}



void FUN_007b3b70(void)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  *in_ECX = 0;
  in_ECX[6] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[3] = &PTR_FUN_00a8d268;
  in_ECX[7] = 0;
  in_ECX[0xb] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[8] = &PTR_FUN_00a770a4;
  return;
}



void FUN_007b3ba0(byte param_1)

{
  FUN_007b3860();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007b3bc0(byte param_1)

{
  FUN_007b38d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_007b3be0(undefined4 *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar3 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c53cb;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar8 = DAT_00b2c35c;
  if (1 < (int)DAT_00b2c35c) {
    sVar9 = (short)((uint)param_2 >> 0x10);
    uVar8 = ((int)DAT_00b2c35c / 2 - (int)(short)param_2 % (int)DAT_00b2c35c) + param_2 & 0xffffU |
            (int)(short)(sVar9 + ((short)((int)DAT_00b2c35c / 2) -
                                 (short)((int)sVar9 % (int)DAT_00b2c35c))) << 0x10;
  }
  puVar10 = (undefined4 *)0x0;
  *param_3 = 0;
  iVar6 = FUN_007b2aa0(param_1,uVar5);
  if (iVar6 == 0) {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  param_3 = (undefined4 *)0x0;
  cVar4 = FUN_0055e000(param_1[2],&param_3);
  puVar11 = param_3;
  if (cVar4 == '\0') {
    iVar7 = FUN_00401f00(0x30);
    if (iVar7 != 0) {
      puVar10 = (undefined4 *)FUN_007b3b70();
    }
    FUN_0075fa90(iVar6);
    *puVar10 = *param_1;
    puVar10[1] = param_1[1];
    puVar10[2] = param_1[2];
    FUN_00452570(param_1[2],puVar10);
    puVar11 = puVar10;
  }
  iVar7 = *piVar3;
  puVar10 = (undefined4 *)puVar11[4];
  if (iVar7 == 0) {
    do {
      if (puVar10 == (undefined4 *)0x0) break;
      iVar7 = puVar10[2];
      puVar10 = (undefined4 *)*puVar10;
      if ((*(short *)(iVar7 + 0xe) != *(short *)(iVar7 + 0xc)) && (uVar8 == *(uint *)(iVar7 + 0x24))
         ) {
        *piVar3 = iVar7;
        break;
      }
    } while (*piVar3 == 0);
    iVar7 = *piVar3;
    if (iVar7 != 0) goto LAB_007b3d17;
  }
  else {
LAB_007b3d17:
    if (*(short *)(iVar7 + 0xc) != *(short *)(iVar7 + 0xe)) goto LAB_007b3d86;
  }
  param_3 = (int *)FUN_00401f00(0x28);
  local_4 = 0;
  if (param_3 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_00802e00(iVar6,uVar8,0);
  }
  *piVar3 = iVar6;
  DAT_00b42d5c = DAT_00b42d5c + 1;
  local_4 = 0xffffffff;
  FUN_00802a90(param_1);
  FUN_005b1e20(piVar3);
  (**(code **)(*DAT_00b42d64 + 0x84))(*(undefined4 *)*piVar3,1);
LAB_007b3d86:
  uVar1 = *(ushort *)(*piVar3 + 0xe);
  uVar2 = *(ushort *)(*piVar3 + 0xc);
  *unaff_FS_OFFSET = local_c;
  return (uint)uVar2 - (uint)uVar1;
}



void FUN_007b3db0(void)

{
  int iVar1;
  uint uVar2;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  uVar2 = 0;
  if (DAT_00b2c340 != 0) {
    do {
      if (*(int *)(DAT_00b2c344 + uVar2 * 4) != 0) {
        local_8 = *(int *)(DAT_00b2c344 + uVar2 * 4);
        goto LAB_007b3dd8;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_00b2c340);
  }
  local_8 = 0;
LAB_007b3dd8:
  local_c = 0;
  if (DAT_00b2c348 != 0) {
    while (local_8 != 0) {
      FUN_00452600(&local_8,local_4,&local_c);
      iVar1 = local_c;
      if (local_c != 0) {
        FUN_007b3940();
        FUN_00401f20(iVar1);
      }
    }
  }
  FUN_007c2a40();
  DAT_00b42d5c = 0;
  DAT_00b42d60 = 0;
  return;
}



void FUN_007b3e60(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  undefined4 *local_18;
  int local_14;
  undefined1 local_10 [4];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b23e8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007b3db0(uVar2);
  uVar2 = 0;
  if (DAT_00b2c350 != 0) {
    do {
      if (*(int *)(DAT_00b2c354 + uVar2 * 4) != 0) {
        local_14 = *(int *)(DAT_00b2c354 + uVar2 * 4);
        goto LAB_007b3eb2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_00b2c350);
  }
  local_14 = 0;
LAB_007b3eb2:
  puVar4 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_4 = 0;
  if (DAT_00b2c358 != 0) {
    while (local_14 != 0) {
      FUN_007b2600(&local_14,local_10,&local_18);
      puVar4 = local_18;
      if (local_18 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)local_18[2];
        if (puVar1 != (undefined4 *)0x0) {
          LVar3 = InterlockedDecrement(puVar1 + 1);
          if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          puVar4[2] = 0;
        }
        FUN_00401f20(puVar4[4]);
        puVar4[4] = 0;
        puVar1 = (undefined4 *)puVar4[6];
        if (puVar1 != (undefined4 *)0x0) {
          LVar3 = InterlockedDecrement(puVar1 + 1);
          if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          puVar4[6] = 0;
        }
        puVar1 = (undefined4 *)puVar4[8];
        if (puVar1 != (undefined4 *)0x0) {
          LVar3 = InterlockedDecrement(puVar1 + 1);
          if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          puVar4[8] = 0;
        }
        puVar1 = (undefined4 *)puVar4[7];
        if (puVar1 != (undefined4 *)0x0) {
          LVar3 = InterlockedDecrement(puVar1 + 1);
          if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          puVar4[7] = 0;
        }
        puVar1 = (undefined4 *)puVar4[9];
        if (puVar1 != (undefined4 *)0x0) {
          LVar3 = InterlockedDecrement(puVar1 + 1);
          if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          puVar4[9] = 0;
        }
      }
    }
    FUN_007c2a40();
  }
  local_4 = 0xffffffff;
  if ((puVar4 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar4 + 1), LVar3 == 0)) {
    (**(code **)*puVar4)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007b4010(undefined4 param_1,int param_2,int *param_3,int param_4,int param_5,int param_6,
                 uint param_7)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  DAT_00b42d60 = DAT_00b42d60 + (param_7 & 0xffff);
  iVar4 = 0;
  sVar5 = (short)param_7;
  uVar6 = param_7;
  do {
    if (sVar5 == 0) {
      (**(code **)(*param_3 + 0x78))();
      param_7 = 0;
      FUN_0055e000(*(undefined4 *)(param_4 + 8),&param_7);
      piVar3 = *(int **)(param_7 + 0x24);
      if (*(int **)(param_7 + 0x24) != (int *)0x0) {
        while (piVar1 = (int *)*piVar3, param_2 != piVar3[2]) {
          piVar3 = piVar1;
          if (piVar1 == (int *)0x0) {
            FUN_005b1e20(&param_2);
            return;
          }
        }
        if (piVar3 != (int *)0x0) {
          return;
        }
      }
      FUN_005b1e20(&param_2);
      return;
    }
    iVar8 = 0;
    param_7 = 0;
    uVar2 = FUN_007b3be0(param_4,param_1,&param_7,param_3);
    if (param_7 == 0) {
      return;
    }
    if ((uVar2 & 0xffff) != 0) {
      puVar7 = (undefined4 *)(param_5 + 8 + iVar4 * 0xc);
      do {
        if ((short)uVar6 == 0) break;
        local_10 = puVar7[-2];
        local_c = puVar7[-1];
        local_8 = *puVar7;
        local_4 = *(undefined4 *)(param_6 + iVar4 * 4);
        FUN_00812510(&local_10,param_2);
        iVar8 = iVar8 + 1;
        uVar6 = uVar6 + 0xffff;
        iVar4 = iVar4 + 1;
        puVar7 = puVar7 + 3;
      } while (iVar8 < (int)(uVar2 & 0xffff));
    }
    FUN_00802ae0();
    sVar5 = (short)uVar6;
  } while( true );
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_007b4160(char *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char local_114 [12];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_114;
  iVar5 = -(int)param_2;
  do {
    cVar1 = *param_2;
    param_2[(int)(local_108 + iVar5)] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  *param_1 = '\0';
  pcVar2 = _strrchr(local_108,0x2e);
  pcVar3 = _strrchr(local_108,0x5c);
  pcVar4 = _strrchr(local_108,0x5f);
  if (((pcVar3 != (char *)0x0) && (pcVar4 != (char *)0x0)) && (pcVar4 < pcVar3)) {
    pcVar4 = (char *)0x0;
  }
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3[(int)(local_114 + -(int)pcVar2)] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
    }
    *pcVar2 = '\0';
    if (((local_108[0] == '\\') || (local_108[1] == ':')) ||
       (iVar5 = __strnicmp(local_108,"data",4), iVar5 == 0)) {
      pcVar2 = "%s%s%s";
    }
    else {
      pcVar2 = "Data\\%s%s%s";
    }
    _sprintf(param_1,pcVar2,local_108,param_3,local_114);
    return;
  }
  return;
}



void FUN_007b4270(int param_1,undefined4 param_2)

{
  *(undefined4 *)(&DAT_00b42f54 + param_1 * 4) = param_2;
  return;
}



undefined4 FUN_007b4280(int param_1)

{
  return *(undefined4 *)(&DAT_00b42f54 + param_1 * 4);
}



undefined4 FUN_007b4290(uint param_1)

{
  undefined4 uVar1;
  
  if (0x1b < param_1) {
    return 0;
  }
  if ((&DAT_00b42ec0)[param_1] != 0) goto switchD_007b42b9_default;
  switch(param_1) {
  case 1:
    uVar1 = FUN_007cbdc0();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 2:
    uVar1 = FUN_007e9840();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 3:
    uVar1 = FUN_008122a0();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 4:
    FUN_007b4290(1);
    uVar1 = FUN_00810b90();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 5:
    uVar1 = FUN_0080ee10();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 6:
    uVar1 = FUN_007f1410();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 7:
    if (DAT_00b42f48 < 2) {
      uVar1 = FUN_007b1070();
      (&DAT_00b42ec0)[param_1] = uVar1;
      return uVar1;
    }
    uVar1 = FUN_007eae80();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 8:
    if (DAT_00b43070 != '\0') {
      uVar1 = FUN_007c0b80();
      (&DAT_00b42ec0)[param_1] = uVar1;
      return uVar1;
    }
    break;
  case 9:
    uVar1 = FUN_007fa910();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 10:
    uVar1 = FUN_007bd920();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 0xb:
    if (1 < DAT_00b42f48) {
      uVar1 = FUN_007ec950();
      (&DAT_00b42ec0)[param_1] = uVar1;
      return uVar1;
    }
    break;
  case 0xc:
    uVar1 = FUN_00804c50();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 0xd:
    uVar1 = FUN_0080d940();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 0xe:
    uVar1 = FUN_0080ae90();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 0xf:
    uVar1 = FUN_008091d0();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 0x10:
    uVar1 = FUN_00806210();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 0x11:
    uVar1 = FUN_007dd1e0();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 0x12:
    uVar1 = FUN_007f59c0();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 0x13:
    uVar1 = FUN_007e1430();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 0x14:
    uVar1 = FUN_007de710();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 0x15:
    if (1 < DAT_00b42f48) {
      uVar1 = FUN_00800e20();
      (&DAT_00b42ec0)[param_1] = uVar1;
      return uVar1;
    }
    break;
  case 0x16:
    uVar1 = FUN_007e33a0();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 0x17:
    uVar1 = FUN_007f3e00();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 0x18:
    if (1 < DAT_00b42f48) {
      uVar1 = FUN_007afbb0();
      (&DAT_00b42ec0)[param_1] = uVar1;
      return uVar1;
    }
    break;
  case 0x19:
    uVar1 = FUN_007b1f20();
    (&DAT_00b42ec0)[param_1] = uVar1;
    return uVar1;
  case 0x1a:
    if (DAT_00b42ea5 != '\0') {
      uVar1 = FUN_007fc7d0();
      (&DAT_00b42ec0)[param_1] = uVar1;
      return uVar1;
    }
    break;
  case 0x1b:
    uVar1 = FUN_007eee40();
    (&DAT_00b42ec0)[param_1] = uVar1;
  default:
switchD_007b42b9_default:
    return (&DAT_00b42ec0)[param_1];
  }
  (&DAT_00b42ec0)[param_1] = 0;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b4520(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1[2] - *param_1) / 2;
  iVar1 = (param_1[1] - param_1[3]) / 2;
  _DAT_00b4313c = (float)(*param_1 + iVar2);
  _DAT_00b43140 = (float)(param_1[3] + iVar1);
  _DAT_00b43144 = (float)iVar2;
  _DAT_00b43148 = (float)iVar1;
  return;
}



void FUN_007b4590(void)

{
  switch(DAT_00b42f48) {
  default:
    DAT_00b42e88 = 2;
    return;
  case 3:
  case 4:
    DAT_00b42e88 = 6;
    return;
  case 5:
  case 6:
  case 7:
    DAT_00b42e88 = 8;
    return;
  }
}



void FUN_007b45f0(undefined4 param_1,undefined4 param_2,char param_3,int param_4,char *param_5,
                 int param_6)

{
  byte bVar2;
  int iVar1;
  byte bVar3;
  int extraout_EDX;
  
  bVar2 = (byte)((uint)param_1 >> 8);
  bVar3 = (byte)((uint)param_2 >> 8);
  if ((bVar2 < 2) || (bVar3 < 2)) {
    if ((bVar2 == 0) || (bVar3 == 0)) {
      DAT_00b42f48 = 0;
      DAT_00b43070 = 0;
    }
    else {
      DAT_00b42f48 = 1;
      DAT_00b43070 = 0;
      DAT_00b42f40 = 0xf;
    }
  }
  else {
    DAT_00b42f48 = 2;
    DAT_00b42f40 = 0x2f;
    if ((param_4 == 0) || (param_5 == (char *)0x0)) goto LAB_007b468e;
    iVar1 = __strnicmp(param_5,"ati",3);
    if (iVar1 == 0) {
      if (param_6 < 0x61) {
        if (DAT_00b42f48 == 2) {
          DAT_00b42f48 = 4;
        }
        DAT_00b42d74 = 6;
      }
      else {
        if (DAT_00b42f48 == 2) {
          DAT_00b42f48 = 6;
        }
        DAT_00b42d74 = 6;
LAB_007b4674:
        if (0xff < param_6) {
          DAT_00b42ea5 = 1;
        }
      }
    }
    else {
      iVar1 = __strnicmp(param_5,"nv",2);
      if (iVar1 != 0) {
        DAT_00b42f48 = 2;
        DAT_00b42d74 = 2;
        goto LAB_007b468e;
      }
      if (0x60 < param_6) {
        if (DAT_00b42f48 == 2) {
          DAT_00b42f48 = 5;
        }
        DAT_00b42d74 = 5;
        goto LAB_007b4674;
      }
      if (DAT_00b42f48 == 2) {
        DAT_00b42f48 = 3;
      }
      DAT_00b42d74 = 5;
    }
    if (1 < DAT_00b42f48) goto LAB_007b468e;
  }
  DAT_00b42f40 = DAT_00b42f40 & 0xffffffef;
LAB_007b468e:
  FUN_007b4590(DAT_00b42f48);
  if ((param_3 != '\0') && (extraout_EDX != 0)) {
    DAT_00b42f48 = 1;
  }
  return;
}



char * FUN_007b4780(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00b42d74;
  if (param_1 == '\0') {
    uVar1 = DAT_00b42f48;
  }
  switch(uVar1) {
  case 1:
    return "ps_1_3";
  case 2:
    return "ps_2_0";
  case 3:
  case 5:
    return "ps_2_a";
  case 4:
  case 6:
    return "ps_2_b";
  case 7:
    return "ps_3_0";
  default:
    return (char *)0x0;
  }
}



char * FUN_007b47e0(void)

{
  switch(DAT_00b42f48) {
  case 1:
    return "vs_1_1";
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    return "vs_2_0";
  case 7:
    return "vs_3_0";
  default:
    return (char *)0x0;
  }
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b4830(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  _DAT_00b2c1ec = param_3;
  _DAT_00b2c2b0 = param_4;
  DAT_00b2c1e4 = param_1;
  DAT_00b2c1e8 = param_2;
  _DAT_00b2c2b4 = param_5;
  DAT_00b2c2b8 = param_6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b4890(ushort param_1)

{
  if (_DAT_00b42eac != 4) {
    if (param_1 == 4) {
      FUN_007ab1d0(1);
    }
    _DAT_00b42eac = (uint)param_1;
    return;
  }
  if (param_1 != 4) {
    FUN_007ab1d0(0);
    _DAT_00b42eac = (uint)param_1;
    return;
  }
  _DAT_00b42eac = 4;
  return;
}



void FUN_007b48e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_008037d0(param_1,param_2,param_3);
  return;
}



void FUN_007b4900(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00803570(param_1,param_2,param_3,param_4);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_007b4920(undefined4 param_1)

{
  char local_10 [12];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_10;
  switch(param_1) {
  case 0:
    return "BSSM_ZONLY";
  case 1:
    return "BSSM_ZONLY_At";
  case 2:
    return "BSSM_ZONLY_S";
  case 3:
    return "BSSM_AMBIENT_OCCLUSION";
  case 4:
    return "BSSM_3XZONLY";
  case 5:
    return "BSSM_3XZONLY_S";
  case 6:
    return "BSSM_DEPTHMAP";
  case 7:
    return "BSSM_DEPTHMAP_At";
  case 8:
    return "BSSM_DEPTHMAP_S";
  case 9:
    return "BSSM_DEPTHMAP_SAt";
  case 10:
    return "BSSM_SELFILLUMALPHABLOCK";
  case 0xb:
    return "BSSM_SELFILLUMALPHABLOCK_S";
  case 0xc:
    return "BSSM_GRASS_NOALPHABLEND";
  case 0xd:
    return "BSSM_GRASSPT_NOALPHABLEND";
  case 0xe:
    return "BSSM_LEAVES";
  case 0xf:
    return "BSSM_FRONDS";
  case 0x10:
    return "BSSM_AMBIENT";
  case 0x11:
    return "BSSM_AMBIENT_G";
  case 0x12:
    return "BSSM_AMBIENT_At";
  case 0x13:
    return "BSSM_AMBIENT_GAt";
  case 0x14:
    return "BSSM_AMBIENT_S";
  case 0x15:
    return "BSSM_AMBIENT_SG";
  case 0x16:
    return "BSSM_AMBIENT_SAt";
  case 0x17:
    return "BSSM_AMBIENT_SGAt";
  case 0x18:
    return "BSSM_AMBIENT_Sb";
  case 0x19:
    return "BSSM_AMBDIFFTEX";
  case 0x1a:
    return "BSSM_AMBDIFFTEX_Vc";
  case 0x1b:
    return "BSSM_AMBDIFFTEX_G";
  case 0x1c:
    return "BSSM_AMBDIFFTEX_GVc";
  case 0x1d:
    return "BSSM_AMBDIFFTEX_Fg";
  case 0x1e:
    return "BSSM_AMBDIFFTEX_A";
  case 0x1f:
    return "BSSM_AMBDIFFTEX_AVc";
  case 0x20:
    return "BSSM_AMBDIFFTEX_GA";
  case 0x21:
    return "BSSM_AMBDIFFTEX_GAVc";
  case 0x22:
    return "BSSM_AMBDIFFTEX_FgA";
  case 0x23:
    return "BSSM_AMBDIFFTEX_GFgA";
  case 0x24:
    return "BSSM_AMBDIFFTEX_S";
  case 0x25:
    return "BSSM_AMBDIFFTEX_SVc";
  case 0x26:
    return "BSSM_AMBDIFFTEX_SG";
  case 0x27:
    return "BSSM_AMBDIFFTEX_SGVc";
  case 0x28:
    return "BSSM_AMBDIFFTEX_SFg";
  case 0x29:
    return "BSSM_AMBDIFFTEX_SA";
  case 0x2a:
    return "BSSM_AMBDIFFTEX_SAVc";
  case 0x2b:
    return "BSSM_AMBDIFFTEX_SGA";
  case 0x2c:
    return "BSSM_AMBDIFFTEX_SGAVc";
  case 0x2d:
    return "BSSM_AMBDIFFTEX_SFgA";
  case 0x2e:
    return "BSSM_AMBDIFFTEX_SGFgA";
  case 0x2f:
    return "BSSM_AMBDIFFTEX_Sb";
  case 0x30:
    return "BSSM_AMBDIFFTEX_SbF";
  case 0x31:
    return "BSSM_AMBDIFFDIRANDPT";
  case 0x32:
    return "BSSM_AMBDIFFDIRANDPT_S";
  case 0x33:
    return "BSSM_AMBDIFFDIRANDPT_Sb";
  case 0x34:
    return "BSSM_AMBDIFFTEX_F";
  case 0x35:
    return "BSSM_AMBDIFFTEX_FVc";
  case 0x36:
    return "BSSM_AMBDIFFTEX_FG";
  case 0x37:
    return "BSSM_AMBDIFFTEX_FGVc";
  case 0x38:
    return "BSSM_AMBDIFFTEX_FA";
  case 0x39:
    return "BSSM_AMBDIFFTEX_FAVc";
  case 0x3a:
    return "BSSM_AMBDIFFTEX_FFg";
  case 0x3b:
    return "BSSM_AMBDIFFTEX_FGA";
  case 0x3c:
    return "BSSM_AMBDIFFTEX_FGAVc";
  case 0x3d:
    return "BSSM_AMBDIFFTEX_FGFgA";
  case 0x3e:
    return "BSSM_AMBDIFFTEX_SF";
  case 0x3f:
    return "BSSM_AMBDIFFTEX_SFVc";
  case 0x40:
    return "BSSM_AMBDIFFTEX_SFG";
  case 0x41:
    return "BSSM_AMBDIFFTEX_SFGVc";
  case 0x42:
    return "BSSM_AMBDIFFTEX_SFA";
  case 0x43:
    return "BSSM_AMBDIFFTEX_SFAVc";
  case 0x44:
    return "BSSM_AMBDIFFTEX_SFFg";
  case 0x45:
    return "BSSM_AMBDIFFTEX_SFGA";
  case 0x46:
    return "BSSM_AMBDIFFTEX_SFGAVc";
  case 0x47:
    return "BSSM_AMBDIFFTEX_SFGFgA";
  case 0x48:
    return "BSSM_LANDAD";
  case 0x49:
    return "BSSM_LANDAD_Shp";
  case 0x4a:
    return "BSSM_AD2";
  case 0x4b:
    return "BSSM_AD2_G";
  case 0x4c:
    return "BSSM_AD2_Px";
  case 0x4d:
    return "BSSM_AD2_GPx";
  case 0x4e:
    return "BSSM_AD2_Fg";
  case 0x4f:
    return "BSSM_AD2_S";
  case 0x50:
    return "BSSM_AD2_SPx";
  case 0x51:
    return "BSSM_AD2_SG";
  case 0x52:
    return "BSSM_AD2_SGPx";
  case 0x53:
    return "BSSM_AD2_SFg";
  case 0x54:
    return "BSSM_AD2_Sb";
  case 0x55:
    return "BSSM_AD2_Shp";
  case 0x56:
    return "BSSM_AD2_GShp";
  case 0x57:
    return "BSSM_AD2_PxShp";
  case 0x58:
    return "BSSM_AD2_GPxShp";
  case 0x59:
    return "BSSM_AD2_FgShp";
  case 0x5a:
    return "BSSM_AD2_SShp";
  case 0x5b:
    return "BSSM_AD2_SPxShp";
  case 0x5c:
    return "BSSM_AD2_SGShp";
  case 0x5d:
    return "BSSM_AD2_SGPxShp";
  case 0x5e:
    return "BSSM_AD2_SFgShp";
  case 0x5f:
    return "BSSM_AD2_SbShp";
  case 0x60:
    return "BSSM_AD3";
  case 0x61:
    return "BSSM_AD3_G";
  case 0x62:
    return "BSSM_AD3_Px";
  case 99:
    return "BSSM_AD3_GPx";
  case 100:
    return "BSSM_AD3_Fg";
  case 0x65:
    return "BSSM_AD3_S";
  case 0x66:
    return "BSSM_AD3_SPx";
  case 0x67:
    return "BSSM_AD3_SG";
  case 0x68:
    return "BSSM_AD3_SGPx";
  case 0x69:
    return "BSSM_AD3_SFg";
  case 0x6a:
    return "BSSM_AD3_Sb";
  case 0x6b:
    return "BSSM_AD3_Shp";
  case 0x6c:
    return "BSSM_AD3_GShp";
  case 0x6d:
    return "BSSM_AD3_PxShp";
  case 0x6e:
    return "BSSM_AD3_GPxShp";
  case 0x6f:
    return "BSSM_AD3_FgShp";
  case 0x70:
    return "BSSM_AD3_SShp";
  case 0x71:
    return "BSSM_AD3_SPxShp";
  case 0x72:
    return "BSSM_AD3_SGShp";
  case 0x73:
    return "BSSM_AD3_SGPxShp";
  case 0x74:
    return "BSSM_AD3_SFgShp";
  case 0x75:
    return "BSSM_AD3_SbShp";
  case 0x76:
    return "BSSM_ADT";
  case 0x77:
    return "BSSM_ADT_Mn";
  case 0x78:
    return "BSSM_ADT_G";
  case 0x79:
    return "BSSM_ADT_Fg";
  case 0x7a:
    return "BSSM_ADT_Px";
  case 0x7b:
    return "BSSM_ADT_GPx";
  case 0x7c:
    return "BSSM_ADT_H";
  case 0x7d:
    return "BSSM_ADT_S";
  case 0x7e:
    return "BSSM_ADT_SG";
  case 0x7f:
    return "BSSM_ADT_SFg";
  case 0x80:
    return "BSSM_ADT_SPx";
  case 0x81:
    return "BSSM_ADT_SGPx";
  case 0x82:
    return "BSSM_ADT_Sb";
  case 0x83:
    return "BSSM_ADT_SH";
  case 0x84:
    return "BSSM_ADT_Shp";
  case 0x85:
    return "BSSM_ADT_MnShp";
  case 0x86:
    return "BSSM_ADT_GShp";
  case 0x87:
    return "BSSM_ADT_FgShp";
  case 0x88:
    return "BSSM_ADT_PxShp";
  case 0x89:
    return "BSSM_ADT_GPxShp";
  case 0x8a:
    return "BSSM_ADT_HShp";
  case 0x8b:
    return "BSSM_ADT_SShp";
  case 0x8c:
    return "BSSM_ADT_SGShp";
  case 0x8d:
    return "BSSM_ADT_SFgShp";
  case 0x8e:
    return "BSSM_ADT_SPxShp";
  case 0x8f:
    return "BSSM_ADT_SGPxShp";
  case 0x90:
    return "BSSM_ADT_SbShp";
  case 0x91:
    return "BSSM_ADT_SHShp";
  case 0x92:
    return "BSSM_ADT2";
  case 0x93:
    return "BSSM_ADT2_G";
  case 0x94:
    return "BSSM_ADT2_Fg";
  case 0x95:
    return "BSSM_ADT2_Px";
  case 0x96:
    return "BSSM_ADT2_GPx";
  case 0x97:
    return "BSSM_ADT2_H";
  case 0x98:
    return "BSSM_ADT2_S";
  case 0x99:
    return "BSSM_ADT2_SG";
  case 0x9a:
    return "BSSM_ADT2_SFg";
  case 0x9b:
    return "BSSM_ADT2_SPx";
  case 0x9c:
    return "BSSM_ADT2_SGPx";
  case 0x9d:
    return "BSSM_ADT2_Sb";
  case 0x9e:
    return "BSSM_ADT2_SH";
  case 0x9f:
    return "BSSM_ADT2_Shp";
  case 0xa0:
    return "BSSM_ADT2_GShp";
  case 0xa1:
    return "BSSM_ADT2_FgShp";
  case 0xa2:
    return "BSSM_ADT2_PxShp";
  case 0xa3:
    return "BSSM_ADT2_GPxShp";
  case 0xa4:
    return "BSSM_ADT2_HShp";
  case 0xa5:
    return "BSSM_ADT2_SShp";
  case 0xa6:
    return "BSSM_ADT2_SGShp";
  case 0xa7:
    return "BSSM_ADT2_SFgShp";
  case 0xa8:
    return "BSSM_ADT2_SPxShp";
  case 0xa9:
    return "BSSM_ADT2_SGPxShp";
  case 0xaa:
    return "BSSM_ADT2_SbShp";
  case 0xab:
    return "BSSM_ADT2_SHShp";
  case 0xac:
    return "BSSM_ADTS";
  case 0xad:
    return "BSSM_ADTS_G";
  case 0xae:
    return "BSSM_ADTS_H";
  case 0xaf:
    return "BSSM_ADTS_Fg";
  case 0xb0:
    return "BSSM_ADTS_Px";
  case 0xb1:
    return "BSSM_ADTS_GPx";
  case 0xb2:
    return "BSSM_ADTS_S";
  case 0xb3:
    return "BSSM_ADTS_SG";
  case 0xb4:
    return "BSSM_ADTS_SH";
  case 0xb5:
    return "BSSM_ADTS_SFg";
  case 0xb6:
    return "BSSM_ADTS_SPx";
  case 0xb7:
    return "BSSM_ADTS_SGPx";
  case 0xb8:
    return "BSSM_ADTS_Sb";
  case 0xb9:
    return "BSSM_ADTS_Shp";
  case 0xba:
    return "BSSM_ADTS_GShp";
  case 0xbb:
    return "BSSM_ADTS_HShp";
  case 0xbc:
    return "BSSM_ADTS_FgShp";
  case 0xbd:
    return "BSSM_ADTS_PxShp";
  case 0xbe:
    return "BSSM_ADTS_GPxShp";
  case 0xbf:
    return "BSSM_ADTS_SShp";
  case 0xc0:
    return "BSSM_ADTS_SGShp";
  case 0xc1:
    return "BSSM_ADTS_SHShp";
  case 0xc2:
    return "BSSM_ADTS_SFgShp";
  case 0xc3:
    return "BSSM_ADTS_SPxShp";
  case 0xc4:
    return "BSSM_ADTS_SGPxShp";
  case 0xc5:
    return "BSSM_ADTS_SbShp";
  case 0xc6:
    return "BSSM_ADTS2";
  case 199:
    return "BSSM_ADTS2_G";
  case 200:
    return "BSSM_ADTS2_H";
  case 0xc9:
    return "BSSM_ADTS2_Fg";
  case 0xca:
    return "BSSM_ADTS2_Px";
  case 0xcb:
    return "BSSM_ADTS2_GPx";
  case 0xcc:
    return "BSSM_ADTS2_S";
  case 0xcd:
    return "BSSM_ADTS2_SG";
  case 0xce:
    return "BSSM_ADTS2_SH";
  case 0xcf:
    return "BSSM_ADTS2_SFg";
  case 0xd0:
    return "BSSM_ADTS2_SPx";
  case 0xd1:
    return "BSSM_ADTS2_SGPx";
  case 0xd2:
    return "BSSM_ADTS2_Sb";
  case 0xd3:
    return "BSSM_ADTS2_Shp";
  case 0xd4:
    return "BSSM_ADTS2_GShp";
  case 0xd5:
    return "BSSM_ADTS2_HShp";
  case 0xd6:
    return "BSSM_ADTS2_FgShp";
  case 0xd7:
    return "BSSM_ADTS2_PxShp";
  case 0xd8:
    return "BSSM_ADTS2_GPxShp";
  case 0xd9:
    return "BSSM_ADTS2_SShp";
  case 0xda:
    return "BSSM_ADTS2_SGShp";
  case 0xdb:
    return "BSSM_ADTS2_SHShp";
  case 0xdc:
    return "BSSM_ADTS2_SFgShp";
  case 0xdd:
    return "BSSM_ADTS2_SPxShp";
  case 0xde:
    return "BSSM_ADTS2_SGPxShp";
  case 0xdf:
    return "BSSM_ADTS2_SbShp";
  case 0xe0:
    return "BSSM_ADTS_ONELIGHT";
  case 0xe1:
    return "BSSM_ADTS_DIRANDPT";
  case 0xe2:
    return "BSSM_DIFFUSEDIR";
  case 0xe3:
    return "BSSM_DIFFUSEPT";
  case 0xe4:
    return "BSSM_DIFFUSEDIR_S";
  case 0xe5:
    return "BSSM_DIFFUSEPT_S";
  case 0xe6:
    return "BSSM_DIFFUSEDIR_Sb";
  case 0xe7:
    return "BSSM_DIFFUSEPT_Sb";
  case 0xe8:
    return "BSSM_DIFFUSEPT2";
  case 0xe9:
    return "BSSM_DIFFUSEPT2_Fg";
  case 0xea:
    return "BSSM_DIFFUSEPT2_Px";
  case 0xeb:
    return "BSSM_DIFFUSEPT2_S";
  case 0xec:
    return "BSSM_DIFFUSEPT2_SFg";
  case 0xed:
    return "BSSM_DIFFUSEPT2_SPx";
  case 0xee:
    return "BSSM_DIFFUSEPT2_Sb";
  case 0xef:
    return "BSSM_DIFFUSEPT2_Shp";
  case 0xf0:
    return "BSSM_DIFFUSEPT2_FgShp";
  case 0xf1:
    return "BSSM_DIFFUSEPT2_PxShp";
  case 0xf2:
    return "BSSM_DIFFUSEPT2_SShp";
  case 0xf3:
    return "BSSM_DIFFUSEPT2_SFgShp";
  case 0xf4:
    return "BSSM_DIFFUSEPT2_SPxShp";
  case 0xf5:
    return "BSSM_DIFFUSEPT2_SbShp";
  case 0xf6:
    return "BSSM_DIFFUSEPT3";
  case 0xf7:
    return "BSSM_DIFFUSEPT3_Fg";
  case 0xf8:
    return "BSSM_DIFFUSEPT3_Px";
  case 0xf9:
    return "BSSM_DIFFUSEPT3_S";
  case 0xfa:
    return "BSSM_DIFFUSEPT3_SFg";
  case 0xfb:
    return "BSSM_DIFFUSEPT3_SPx";
  case 0xfc:
    return "BSSM_DIFFUSEPT3_Sb";
  case 0xfd:
    return "BSSM_DIFFUSEPT3_Shp";
  case 0xfe:
    return "BSSM_DIFFUSEPT3_FgShp";
  case 0xff:
    return "BSSM_DIFFUSEPT3_PxShp";
  case 0x100:
    return "BSSM_DIFFUSEPT3_SShp";
  case 0x101:
    return "BSSM_DIFFUSEPT3_SFgShp";
  case 0x102:
    return "BSSM_DIFFUSEPT3_SPxShp";
  case 0x103:
    return "BSSM_DIFFUSEPT3_SbShp";
  case 0x104:
    return "BSSM_TEXTURE";
  case 0x105:
    return "BSSM_TEXTURE_Fg";
  case 0x106:
    return "BSSM_TEXTURE_H";
  case 0x107:
    return "BSSM_TEXTURE_S";
  case 0x108:
    return "BSSM_TEXTURE_Vc";
  case 0x109:
    return "BSSM_TEXTURE_SVc";
  case 0x10a:
    return "BSSM_TEXTURE_SFg";
  case 0x10b:
    return "BSSM_TEXTURE_Sb";
  case 0x10c:
    return "BSSM_TEXTURE_SH";
  case 0x10d:
    return "BSSM_TEXTURE_Px";
  case 0x10e:
    return "BSSM_TEXTURE_SPx";
  case 0x10f:
    return "BSSM_SPECULARDIR";
  case 0x110:
    return "BSSM_SPECULARPT";
  case 0x111:
    return "BSSM_SPECULARDIR_S";
  case 0x112:
    return "BSSM_SPECULARPT_S";
  default:
    _sprintf(local_10,"??? %d",param_1);
    return "???";
  case 0x115:
    return "BSSM_2x_SPECULARDIR";
  case 0x116:
    return "BSSM_2x_SPECULARDIR_H";
  case 0x117:
    return "BSSM_2x_SPECULARDIR_Px";
  case 0x118:
    return "BSSM_2x_SPECULARDIR_S";
  case 0x119:
    return "BSSM_2x_SPECULARDIR_SH";
  case 0x11a:
    return "BSSM_2x_SPECULARDIR_SPx";
  case 0x11b:
    return "BSSM_2x_SPECULARDIR_Sb";
  case 0x11c:
    return "BSSM_2x_SPECULARDIR_Shp";
  case 0x11d:
    return "BSSM_2x_SPECULARDIR_HShp";
  case 0x11e:
    return "BSSM_2x_SPECULARDIR_PxShp";
  case 0x11f:
    return "BSSM_2x_SPECULARDIR_SShp";
  case 0x120:
    return "BSSM_2x_SPECULARDIR_SHShp";
  case 0x121:
    return "BSSM_2x_SPECULARDIR_SPxShp";
  case 0x122:
    return "BSSM_2x_SPECULARDIR_SbShp";
  case 0x123:
    return "BSSM_2x_SPECULARPT";
  case 0x124:
    return "BSSM_2x_SPECULARPT_H";
  case 0x125:
    return "BSSM_2x_SPECULARPT_Px";
  case 0x126:
    return "BSSM_2x_SPECULARPT_S";
  case 0x127:
    return "BSSM_2x_SPECULARPT_SH";
  case 0x128:
    return "BSSM_2x_SPECULARPT_SPx";
  case 0x129:
    return "BSSM_2x_SPECULARPT_Sb";
  case 0x12a:
    return "BSSM_3XOCCLUSION";
  case 0x12d:
    return "BSSM_3XLIGHTING";
  case 0x12e:
    return "BSSM_3XLIGHTING_S";
  case 0x12f:
    return "BSSM_3XLIGHTING_HAIR";
  case 0x130:
    return "BSSM_3XLIGHTING_Px";
  case 0x131:
    return "BSSM_3XLIGHTING_Fg";
  case 0x132:
    return "BSSM_3XLIGHTING_SFg";
  case 0x133:
    return "BSSM_3XLIGHTING_G";
  case 0x134:
    return "BSSM_3XLIGHTING_SG";
  case 0x135:
    return "BSSM_3XLIGHTING_Vc";
  case 0x136:
    return "BSSM_3XLIGHTING_VcS";
  case 0x137:
    return "BSSM_3XLIGHTING_VcPx";
  case 0x138:
    return "BSSM_3XLIGHTING_VcG";
  case 0x139:
    return "BSSM_3XLIGHTING_VcSG";
  case 0x13a:
    return "BSSM_3XLIGHTING_Shp";
  case 0x13b:
    return "BSSM_3XLIGHTING_SShp";
  case 0x13c:
    return "BSSM_3XLIGHTING_HAIRShp";
  case 0x13d:
    return "BSSM_3XLIGHTING_PxShp";
  case 0x13e:
    return "BSSM_3XLIGHTING_FgShp";
  case 0x13f:
    return "BSSM_3XLIGHTING_SFgShp";
  case 0x140:
    return "BSSM_3XLIGHTING_GShp";
  case 0x141:
    return "BSSM_3XLIGHTING_SGShp";
  case 0x142:
    return "BSSM_3XLIGHTING_VcShp";
  case 0x143:
    return "BSSM_3XLIGHTING_VcSShp";
  case 0x144:
    return "BSSM_3XLIGHTING_VcPxShp";
  case 0x145:
    return "BSSM_3XLIGHTING_VcGShp";
  case 0x146:
    return "BSSM_3XLIGHTING_VcSGShp";
  case 0x147:
    return "BSSM_3XENVMAP";
  case 0x148:
    return "BSSM_3XENVMAP_W";
  case 0x149:
    return "BSSM_3XENVMAP_Vc";
  case 0x14a:
    return "BSSM_3XENVMAP_WVc";
  case 0x14b:
    return "BSSM_3XENVMAP_S";
  case 0x14c:
    return "BSSM_3XENVMAP_SVc";
  case 0x14d:
    return "BSSM_3XENVMAP_EYE";
  case 0x14e:
    return "BSSM_3XLIGHTING_SIMPLESHADOW";
  case 0x14f:
    return "BSSM_3XLIGHTING_SIMPLESHADOW_Vc";
  case 0x150:
    return "BSSM_3XLIGHTING_SIMPLESHADOW_S";
  case 0x151:
    return "BSSM_3XLIGHTING_SIMPLESHADOW_VcS";
  case 0x152:
    return "BSSM_3XDECAL";
  case 0x153:
    return "BSSM_3XDECAL_A";
  case 0x154:
    return "BSSM_3XDEPTHMAP";
  case 0x155:
    return "BSSM_3XDEPTHMAP_S";
  case 0x156:
    return "BSSM_3XRENDERNORMALS";
  case 0x157:
    return "BSSM_3XRENDERNORMALS_S";
  case 0x158:
    return "BSSM_3XRENDERNORMALS_FIRE";
  case 0x159:
    return "BSSM_3XRENDERNORMALS_CLEAR";
  case 0x15a:
    return "BSSM_3XRENDERNORMALS_CLEAR_S";
  case 0x15b:
    return "BSSM_3XLOCALMAP";
  case 0x15c:
    return "BSSM_3XLOCALMAP_S";
  case 0x15d:
    return "BSSM_3XLOCALMAP_CLEAR";
  case 0x15e:
    return "BSSM_3XTEXEFFECT";
  case 0x15f:
    return "BSSM_3XTEXEFFECT_S";
  case 0x160:
    return "BSSM_RENDERNORMALS";
  case 0x161:
    return "BSSM_RENDERNORMALS_S";
  case 0x162:
    return "BSSM_RENDERNORMALS_FIRE";
  case 0x163:
    return "BSSM_RENDERNORMALS_CLEAR";
  case 0x164:
    return "BSSM_RENDERNORMALS_CLEAR_S";
  case 0x165:
    return "BSSM_LOCALMAP";
  case 0x166:
    return "BSSM_LOCALMAP_S";
  case 0x167:
    return "BSSM_LOCALMAP_CLEAR";
  case 0x168:
    return "BSSM_LANDDIFF";
  case 0x169:
    return "BSSM_LAND2xDIFF";
  case 0x16a:
    return "BSSM_LAND2xSPECDIR";
  case 0x16b:
    return "BSSM_LAND2xSPECDIR_Shp";
  case 0x16c:
    return "BSSM_LAND2xSPEC";
  case 0x16d:
    return "BSSM_LAND_G";
  case 0x16e:
    return "BSSM_LANDAD_A";
  case 0x16f:
    return "BSSM_LANDAD_AShp";
  case 0x170:
    return "BSSM_LAND_GA";
  case 0x171:
    return "BSSM_LANDDIFF_A";
  case 0x172:
    return "BSSM_LAND2xDIFF_A";
  case 0x173:
    return "BSSM_LAND2xSPECDIR_A";
  case 0x174:
    return "BSSM_LAND2xSPEC_A";
  case 0x175:
    return "BSSM_LAND2xSPECDIR_AShp";
  case 0x176:
    return "BSSM_LANDLO_A";
  case 0x177:
    return "BSSM_2x_SIMPLESHADOW";
  case 0x178:
    return "BSSM_2x_SIMPLESHADOW_S";
  case 0x179:
    return "BSSM_2x_SIMPLESHADOW_LAND";
  case 0x17a:
    return "BSSM_2x_SIMPLESHADOW_Sb";
  case 0x17b:
    return "BSSM_ADT_Sbb";
  case 0x17c:
    return "BSSM_WATER_LOD";
  case 0x17d:
    return "BSSM_SKYBASEPRE";
  case 0x17e:
    return "BSSM_PARTICLE";
  case 0x17f:
    return "BSSM_BOLT";
  case 0x180:
    return "BSSM_ENVMAP";
  case 0x181:
    return "BSSM_ENVMAP_Vc";
  case 0x182:
    return "BSSM_ENVMAP_S";
  case 0x183:
    return "BSSM_ENVMAP_SVc";
  case 0x184:
    return "BSSM_2x_ENVMAP";
  case 0x185:
    return "BSSM_2x_ENVMAP_S";
  case 0x186:
    return "BSSM_2x_ENVMAP_W";
  case 0x187:
    return "BSSM_2x_ENVMAP_EYE";
  case 0x188:
    return "BSSM_GEOMDECAL";
  case 0x189:
    return "BSSM_GEOMDECAL_S";
  case 0x18a:
    return "BSSM_DECAL";
  case 0x18b:
    return "BSSM_DECAL_A";
  case 0x18c:
    return "BSSM_TEXEFFECT";
  case 0x18d:
    return "BSSM_TEXEFFECT_S";
  case 0x18e:
    return "BSSM_2x_TEXEFFECT";
  case 399:
    return "BSSM_2x_TEXEFFECT_S";
  case 400:
    return "BSSM_FOG";
  case 0x191:
    return "BSSM_FOG_A";
  case 0x192:
    return "BSSM_FOG_S";
  case 0x193:
    return "BSSM_FOG_SA";
  case 0x194:
    return "BSSM_FOG_Sb";
  case 0x195:
    return "BSSM_GRASS";
  case 0x196:
    return "BSSM_GRASSPT";
  case 0x197:
    return "BSSM_GRASS_SIMPLESHADOW";
  case 0x198:
    return "BSSM_WATER_WADING";
  case 0x199:
    return "BSSM_WATER";
  case 0x19a:
    return "BSSM_WATER_LAVA";
  case 0x19b:
    return "BSSM_PRECIPITATION_RAIN";
  case 0x19c:
    return "BSSM_SKYBASEPOST";
  case 0x19d:
    return "BSSM_SELFILLUM_SKY";
  case 0x19e:
    return "BSSM_SELFILLUMALPHA";
  case 0x19f:
    return "BSSM_SELFILLUMALPHA_S";
  case 0x1a0:
    return "BSSM_SHADOWVOLUME_BACK";
  case 0x1a1:
    return "BSSM_SHADOWVOLUME_FRONT";
  case 0x1a2:
    return "BSSM_SHADOWVOLUME_WIRE";
  }
}



char * FUN_007b7070(void)

{
  switch(DAT_00b42f48) {
  case 0:
    return "BSSM_SV_NONE";
  case 1:
    return "BSSM_SV_1_X";
  case 2:
    return "BSSM_SV_2_0";
  case 3:
    return "BSSM_SV_2_A96";
  case 4:
    return "BSSM_SV_2_B96";
  case 5:
    return "BSSM_SV_2_A";
  case 6:
    return "BSSM_SV_2_B";
  case 7:
    return "BSSM_SV_3_0";
  default:
    return "???";
  }
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b70e0(void)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)FUN_00986300();
  fVar2 = (float10)FUN_00986000();
  fVar3 = (float10)FUN_00986300();
  fVar4 = (float10)FUN_00986000();
  _DAT_00b2d80c = ((float)fVar1 / (float)fVar2) / ((float)fVar3 / (float)fVar4);
  return;
}



void FUN_007b7170(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009cd503;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)*in_ECX;
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    *in_ECX = 0;
  }
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[1] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[1];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)*in_ECX;
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b7250(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b430ec;
  DAT_00b42ec0 = 0;
  DAT_00b42ec4 = 0;
  _DAT_00b42ec8 = 0;
  _DAT_00b42ecc = 0;
  _DAT_00b42ed0 = 0;
  _DAT_00b42ed4 = 0;
  _DAT_00b42ed8 = 0;
  _DAT_00b42edc = 0;
  _DAT_00b42ee0 = 0;
  DAT_00b42ee4 = 0;
  _DAT_00b42ee8 = 0;
  _DAT_00b42eec = 0;
  _DAT_00b42ef0 = 0;
  _DAT_00b42ef4 = 0;
  _DAT_00b42ef8 = 0;
  _DAT_00b42efc = 0;
  _DAT_00b42f00 = 0;
  _DAT_00b42f04 = 0;
  _DAT_00b42f08 = 0;
  _DAT_00b42f0c = 0;
  _DAT_00b42f10 = 0;
  _DAT_00b42f14 = 0;
  _DAT_00b42f18 = 0;
  _DAT_00b42f1c = 0;
  _DAT_00b42f20 = 0;
  _DAT_00b42f24 = 0;
  _DAT_00b42f28 = 0;
  _DAT_00b42f2c = 0;
  DAT_00b42f68 = 0;
  DAT_00b42d80 = 0;
  DAT_00b42f3f = 1;
  DAT_00b42e90 = 0xffffffff;
  DAT_00b42eb8 = 0;
  DAT_00b42ea7 = 1;
  DAT_00b42e85 = 0;
  DAT_00b42f40 = 0x2f;
  _DAT_00b42d70 = &LAB_007b4150;
  DAT_00b42d78 = 0;
  DAT_00b42eb4 = 0;
  DAT_00b42e95 = 1;
  DAT_00b42f31 = 0;
  DAT_00b42e94 = 0;
  DAT_00b42e86 = 0;
  DAT_00b42ebc = 0;
  DAT_00b42f48 = 0;
  DAT_00b42d74 = 0;
  DAT_00b42e87 = 1;
  DAT_00b42f33 = 0;
  if (DAT_00b430ec != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b430ec + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b430ec = (undefined4 *)0x0;
  }
  puVar1 = DAT_00b430dc;
  if (DAT_00b430dc != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b430dc + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b430dc = (undefined4 *)0x0;
  }
  puVar1 = DAT_00b430f0;
  if (DAT_00b430f0 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b430f0 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b430f0 = (undefined4 *)0x0;
  }
  puVar1 = DAT_00b430e0;
  if (DAT_00b430e0 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b430e0 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b430e0 = (undefined4 *)0x0;
  }
  puVar1 = DAT_00b43100;
  if (DAT_00b43100 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b43100 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b43100 = (undefined4 *)0x0;
  }
  puVar1 = DAT_00b430e4;
  if (DAT_00b430e4 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b430e4 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b430e4 = (undefined4 *)0x0;
  }
  puVar1 = DAT_00b4311c;
  if (DAT_00b4311c != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b4311c + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b4311c = (undefined4 *)0x0;
  }
  puVar1 = DAT_00b43120;
  if (DAT_00b43120 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b43120 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b43120 = (undefined4 *)0x0;
  }
  puVar1 = DAT_00b430f8;
  if (DAT_00b430f8 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b430f8 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b430f8 = (undefined4 *)0x0;
  }
  puVar1 = DAT_00b43110;
  if (DAT_00b43110 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b43110 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b43110 = (undefined4 *)0x0;
  }
  puVar1 = DAT_00b430d4;
  if (DAT_00b430d4 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b430d4 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b430d4 = (undefined4 *)0x0;
  }
  puVar1 = DAT_00b43114;
  if (DAT_00b43114 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b43114 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b43114 = (undefined4 *)0x0;
  }
  puVar1 = DAT_00b430f4;
  if (DAT_00b430f4 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b430f4 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b430f4 = (undefined4 *)0x0;
  }
  puVar1 = DAT_00b430fc;
  _DAT_00b42f38 = 0;
  _DAT_00b42f34 = 0;
  DAT_00b42f30 = 0;
  DAT_00b42f3c = 0;
  DAT_00b42f3e = 0;
  _DAT_00b42f60 = 0;
  if (DAT_00b430fc != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b430fc + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b430fc = (undefined4 *)0x0;
  }
  DAT_00b42e97 = 0;
  FUN_007b70e0(0x42960000);
  puVar1 = DAT_00b43128;
  DAT_00b42f32 = 0;
  DAT_00b42ea6 = 0;
  if (DAT_00b43128 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b43128 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b43128 = (undefined4 *)0x0;
  }
  puVar1 = DAT_00b43124;
  DAT_00b42e84 = 0;
  if (DAT_00b43124 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b43124 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b43124 = (undefined4 *)0x0;
  }
  DAT_00b42ea5 = 0;
  return;
}



undefined4 * FUN_007b7650(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b430fc;
  if (DAT_00b430fc == (undefined4 *)0x0) {
    iVar2 = FUN_00401f00(0x226c,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_007abe30();
    }
    puVar5 = DAT_00b430fc;
    local_4 = 0xffffffff;
    if (DAT_00b430fc != puVar3) {
      if (DAT_00b430fc != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(DAT_00b430fc + 1);
        if ((LVar4 == 0) && (puVar5 != (undefined4 *)0x0)) {
          (**(code **)*puVar5)(1);
        }
      }
      puVar5 = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        DAT_00b430fc = puVar3;
        InterlockedIncrement(puVar3 + 1);
        puVar5 = DAT_00b430fc;
      }
    }
  }
  DAT_00b430fc = puVar5;
  *unaff_FS_OFFSET = local_c;
  return puVar5;
}



int FUN_007b7710(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  int iVar8;
  longlong lVar9;
  size_t _Size;
  float fVar10;
  bool bVar11;
  char cVar12;
  ushort uVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  int iVar19;
  void *_Dst;
  ushort uVar20;
  int iVar21;
  float fVar22;
  float *pfVar23;
  uint uVar24;
  undefined4 *puVar25;
  uint uVar26;
  int *unaff_FS_OFFSET;
  float fStack_a8;
  float fStack_a4;
  uint uStack_a0;
  undefined4 *local_9c;
  uint uStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  void *local_88;
  void *local_84;
  int local_80;
  uint uStack_7c;
  int iStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 uStack_58;
  float fStack_50;
  int iStack_48;
  int iStack_44;
  uint uStack_40;
  float fStack_3c;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  int iStack_20;
  float fStack_1c;
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_009cdabb;
  local_14 = *unaff_FS_OFFSET;
  uVar14 = DAT_00b30aac ^ (uint)&stack0xffffff48;
  *unaff_FS_OFFSET = (int)&local_14;
  bVar11 = false;
  if (((char *)param_1[2] != (char *)0x0) &&
     (iVar15 = __strnicmp((char *)param_1[2],"STBB",4), iVar15 == 0)) {
    bVar11 = true;
  }
  local_88 = (void *)FUN_00401f00(0x14,uVar14);
  local_c = 0;
  if (local_88 == (void *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = FUN_007d7310(1);
  }
  iVar15 = local_80;
  local_c = 0xffffffff;
  if (bVar11) {
    puVar16 = (undefined4 *)FUN_00401f00(0x30,uVar14);
    local_9c = puVar16;
    puVar17 = (undefined4 *)FUN_00401f00(0x30);
    puVar25 = &DAT_00b2c688;
    for (iVar21 = 0xc; iVar21 != 0; iVar21 = iVar21 + -1) {
      *puVar16 = *puVar25;
      puVar25 = puVar25 + 1;
      puVar16 = puVar16 + 1;
    }
    puVar25 = &DAT_00b2c6b8;
    puVar16 = puVar17;
    for (iVar21 = 0xc; iVar21 != 0; iVar21 = iVar21 + -1) {
      *puVar16 = *puVar25;
      puVar25 = puVar25 + 1;
      puVar16 = puVar16 + 1;
    }
    *(undefined4 **)(iVar15 + 0xc) = local_9c;
    *(undefined4 **)(iVar15 + 0x10) = puVar17;
    puVar25 = &DAT_00b2c6e8;
    puVar16 = *(undefined4 **)(param_1[0x2d] + 0x20);
    for (iVar21 = 0xc; iVar21 != 0; iVar21 = iVar21 + -1) {
      *puVar16 = *puVar25;
      puVar25 = puVar25 + 1;
      puVar16 = puVar16 + 1;
    }
    *unaff_FS_OFFSET = local_14;
    return iVar15;
  }
  iVar21 = FUN_006ff9c0("Tangent space (binormal & tangent vectors)");
  if (iVar21 != 0) {
    uVar26 = (uint)*(ushort *)(param_1[0x2d] + 8);
    local_84 = *(void **)(iVar21 + 0xc);
    _Size = uVar26 * 0xc;
    local_9c = (undefined4 *)(_Size + (int)local_84);
    uVar18 = FUN_00401f00(uVar26 * 0xc,uVar14);
    *(undefined4 *)(iVar15 + 0xc) = uVar18;
    uVar18 = FUN_00401f00(uVar26 * 0xc);
    *(undefined4 *)(iVar15 + 0x10) = uVar18;
    _memcpy(*(void **)(iVar15 + 0xc),local_9c,_Size);
    _memcpy(*(void **)(iVar15 + 0x10),local_84,_Size);
    FUN_006ffac0("Tangent space (binormal & tangent vectors)");
    *unaff_FS_OFFSET = local_14;
    return iVar15;
  }
  if (((char *)param_1[2] == (char *)0x0) ||
     (iVar15 = _strncmp((char *)param_1[2],"Block",5), iVar15 == 0)) {
    if (param_1[2] == 0) {
      if (param_1[7] == 0) {
        FUN_0040fec0("Creating tangent space for a nameless parentless object");
      }
      else {
        FUN_0040fec0("Creating tangent space for a nameless object, parent=\'%s\'.",
                     *(undefined4 *)(param_1[7] + 8));
      }
    }
  }
  else {
    FUN_0040fec0("WARNING: Creating tangent space for non-land object named \'%s\'",param_1[2]);
  }
  iVar15 = (**(code **)(*param_1 + 0x10))();
  if (iVar15 != 0) {
    iVar19 = (**(code **)(*param_1 + 0x10))();
    iVar15 = *(int *)(iVar19 + 0xb4);
    uStack_a0 = (uint)*(ushort *)(iVar15 + 8);
    uStack_40 = (uint)*(ushort *)(iVar15 + 0x40);
    iVar21 = *(int *)(iVar15 + 0x1c);
    iVar8 = *(int *)(iVar15 + 0x28);
    iStack_48 = *(int *)(iVar15 + 0x20);
    iStack_44 = iVar21;
    iStack_20 = iVar19;
    cVar12 = FUN_00405650(&DAT_00b3fd04,iVar19);
    iStack_78 = 0;
    if (cVar12 != '\0') {
      iStack_78 = *(int *)(*(int *)(iVar19 + 0xb4) + 0x4c);
    }
    if (iStack_48 != 0) {
      lVar9 = (ulonglong)(uStack_a0 * 2) * 0xc;
      _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)lVar9 >> 0x20) != 0) | (uint)lVar9);
      local_88 = (void *)((int)_Dst + uStack_a0 * 0xc);
      _memset(_Dst,0,uStack_a0 * 0x18);
      local_84 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)uStack_a0 * 0xc >> 0x20) != 0) |
                                      (uint)((ulonglong)uStack_a0 * 0xc));
      local_9c = (undefined4 *)
                 FUN_00401f00(-(uint)((int)((ulonglong)uStack_a0 * 0xc >> 0x20) != 0) |
                              (uint)((ulonglong)uStack_a0 * 0xc));
      uVar14 = 0;
      bVar11 = false;
      uStack_7c = 0;
      if (uStack_40 != 0) {
        do {
          if (cVar12 == '\0') {
            (**(code **)(**(int **)(iStack_20 + 0xb4) + 0x60))
                      (uStack_7c,&fStack_8c,&uStack_98,&fStack_a8);
            uVar13 = SUB42(fStack_8c,0);
            uVar20 = SUB42(fStack_a8,0);
          }
          else {
            uVar7 = *(ushort *)(iStack_78 + uVar14 * 2);
            uStack_98 = (uint)*(ushort *)(iStack_78 + 2 + uVar14 * 2);
            uVar20 = *(ushort *)(iStack_78 + 4 + uVar14 * 2);
            fVar22 = (float)(uint)uVar20;
            bVar11 = !bVar11;
            uVar13 = uVar7;
            fStack_a8 = fVar22;
            fStack_8c = (float)(uint)uVar7;
            if (!bVar11) {
              uVar13 = uVar20;
              uVar20 = uVar7;
              fStack_a8 = (float)(uint)uVar7;
              fStack_a4 = fVar22;
              fStack_8c = fVar22;
            }
          }
          if (((uVar13 != (ushort)uStack_98) && ((ushort)uStack_98 != uVar20)) && (uVar13 != uVar20)
             ) {
            uVar26 = uStack_98 & 0xffff;
            pfVar23 = (float *)(iVar21 + uVar26 * 0xc);
            uVar24 = (uint)fStack_a8 & 0xffff;
            uVar14 = (uint)uVar13;
            pfVar1 = (float *)(iVar21 + uVar24 * 0xc);
            iVar15 = uVar14 * 0xc;
            fStack_1c = *pfVar23 - *(float *)(iVar15 + iVar21);
            fVar4 = *pfVar1 - *(float *)(iVar15 + iVar21);
            fVar22 = *(float *)(iVar15 + 4 + iStack_44);
            fVar5 = pfVar23[1] - fVar22;
            fVar22 = pfVar1[1] - fVar22;
            fVar2 = *(float *)(iVar15 + 8 + iStack_44);
            fStack_3c = pfVar23[2] - fVar2;
            fVar2 = pfVar1[2] - fVar2;
            fStack_94 = *(float *)(iVar8 + uVar14 * 8);
            fStack_74 = *(float *)(iVar8 + uVar26 * 8) - fStack_94;
            fStack_94 = *(float *)(iVar8 + uVar24 * 8) - fStack_94;
            fVar3 = *(float *)(iVar8 + 4 + uVar14 * 8);
            fStack_a4 = *(float *)(iVar8 + 4 + uVar26 * 8) - fVar3;
            fVar3 = *(float *)(iVar8 + 4 + uVar24 * 8) - fVar3;
            fStack_90 = 1.0 / (fStack_74 * fVar3 - fStack_94 * fStack_a4);
            dStack_30 = (double)fVar4;
            fStack_70 = (fStack_1c * fVar3 - fVar4 * fStack_a4) * fStack_90;
            dStack_38 = (double)fVar5;
            dStack_28 = (double)fVar22;
            fStack_6c = (fVar5 * fVar3 - fVar22 * fStack_a4) * fStack_90;
            uStack_58 = (double)fVar2;
            fStack_68 = (fStack_3c * fVar3 - fVar2 * fStack_a4) * fStack_90;
            fStack_64 = (fVar4 * fStack_74 - fStack_1c * fStack_94) * fStack_90;
            fStack_60 = (fVar22 * fStack_74 - fVar5 * fStack_94) * fStack_90;
            fStack_5c = fStack_90 * (fVar2 * fStack_74 - fStack_94 * fStack_3c);
            *(float *)(iVar15 + (int)_Dst) = *(float *)(iVar15 + (int)_Dst) + fStack_70;
            *(float *)(iVar15 + 4 + (int)_Dst) = *(float *)(iVar15 + 4 + (int)_Dst) + fStack_6c;
            pfVar23 = (float *)(iVar15 + 8 + (int)_Dst);
            *pfVar23 = *pfVar23 + fStack_68;
            pfVar23 = (float *)((int)_Dst + (uStack_98 & 0xffff) * 0xc);
            *pfVar23 = *pfVar23 + fStack_70;
            pfVar23[1] = pfVar23[1] + fStack_6c;
            pfVar23[2] = pfVar23[2] + fStack_68;
            pfVar23 = (float *)((int)_Dst + ((uint)fStack_a8 & 0xffff) * 0xc);
            *pfVar23 = *pfVar23 + fStack_70;
            pfVar23[1] = fStack_6c + pfVar23[1];
            pfVar23[2] = fStack_68 + pfVar23[2];
            pfVar23 = (float *)((int)local_88 + ((uint)fStack_8c & 0xffff) * 0xc);
            *pfVar23 = *pfVar23 + fStack_64;
            pfVar23[1] = pfVar23[1] + fStack_60;
            pfVar23[2] = pfVar23[2] + fStack_5c;
            pfVar23 = (float *)((int)local_88 + (uStack_98 & 0xffff) * 0xc);
            *pfVar23 = *pfVar23 + fStack_64;
            pfVar23[1] = pfVar23[1] + fStack_60;
            pfVar23[2] = pfVar23[2] + fStack_5c;
            pfVar23 = (float *)((int)local_88 + ((uint)fStack_a8 & 0xffff) * 0xc);
            *pfVar23 = *pfVar23 + fStack_64;
            pfVar23[1] = fStack_60 + pfVar23[1];
            pfVar23[2] = fStack_5c + pfVar23[2];
            iVar21 = iStack_44;
          }
          uStack_7c = uStack_7c + 1;
          uVar14 = uStack_7c & 0xffff;
        } while (uVar14 < uStack_40);
      }
      uVar14 = 0;
      if (uStack_a0 != 0) {
        uVar26 = 0;
        do {
          iVar15 = uVar26 * 0xc;
          fStack_6c = *(float *)(iVar15 + 4 + (int)_Dst);
          fStack_60 = *(float *)(iVar15 + 4 + iStack_48);
          pfVar23 = (float *)((int)local_84 + iVar15);
          fStack_68 = *(float *)(iVar15 + 8 + (int)_Dst);
          fStack_5c = *(float *)(iVar15 + 8 + iStack_48);
          local_88 = (void *)(fStack_5c * fStack_68 +
                             fStack_60 * fStack_6c +
                             *(float *)(iVar15 + iStack_48) * *(float *)(iVar15 + (int)_Dst));
          fStack_64 = (float)local_88 * *(float *)(iVar15 + iStack_48);
          fStack_60 = (float)local_88 * fStack_60;
          fStack_5c = (float)local_88 * fStack_5c;
          fStack_70 = *(float *)(iVar15 + (int)_Dst) - fStack_64;
          *pfVar23 = fStack_70;
          fStack_6c = fStack_6c - fStack_60;
          pfVar23[1] = fStack_6c;
          fStack_68 = fStack_68 - fStack_5c;
          pfVar23[2] = fStack_68;
          fVar22 = pfVar23[2];
          fVar2 = *(float *)(iVar15 + 4 + iStack_48);
          fVar3 = pfVar23[1];
          fVar4 = *(float *)(iVar15 + 8 + iStack_48);
          fVar10 = fVar2 * fVar22 - fVar4 * fVar3;
          fVar5 = *pfVar23;
          fVar6 = *(float *)(iVar15 + iStack_48);
          pfVar23 = (float *)(iVar15 + (int)local_9c);
          *pfVar23 = fVar10;
          fVar22 = fVar5 * fVar4 - fVar22 * fVar6;
          uStack_58 = (double)CONCAT44(fVar22,fVar10);
          pfVar23[1] = fVar22;
          fStack_50 = fVar6 * fVar3 - fVar5 * fVar2;
          pfVar23[2] = fStack_50;
          FUN_0043f350();
          FUN_0043f350();
          uVar14 = uVar14 + 1;
          uVar26 = uVar14 & 0xffff;
        } while (uVar26 < uStack_a0);
      }
      iVar15 = local_80;
      *(void **)(local_80 + 0xc) = local_84;
      *(undefined4 **)(local_80 + 0x10) = local_9c;
      FUN_00401f20(_Dst);
      *unaff_FS_OFFSET = local_14;
      return iVar15;
    }
    FUN_0040fec0(
                "BSShaderManager::CreateTangentSpaceSimple(): Trying to create a tangent space for a trigeom with no normals.  Aborted."
                );
    *unaff_FS_OFFSET = local_14;
    return 0;
  }
  FUN_0040fec0(
              "BSShaderManager::CreateTangentSpaceSimple(): Trying to create a tangent space for NiGeom that isn\'t triangle-based.  Aborted."
              );
  *unaff_FS_OFFSET = local_14;
  return 0;
}



void FUN_007b7f00(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0xc))();
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_1 + 8))();
      if (iVar2 != 0) {
        uVar4 = 0;
        if (*(short *)((int)param_1 + 0xb6) != 0) {
          if (*(short *)((int)param_1 + 0xb6) == 0) goto LAB_007b7fa0;
          do {
            iVar2 = *(int *)(param_1[0x2c] + uVar4 * 4);
            if (iVar2 != 0) {
              FUN_007b7f00(iVar2,param_2);
            }
LAB_007b7fa0:
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(ushort *)((int)param_1 + 0xb6));
        }
      }
    }
    else {
      piVar3 = (int *)FUN_00707530(4);
      piVar1 = (int *)param_1[0x2f];
      if (piVar3 == (int *)0x0) {
        uVar4 = 0;
      }
      else {
        iVar2 = (**(code **)(*piVar3 + 0x54))();
        uVar4 = -(uint)(iVar2 != -1) & (uint)piVar3;
      }
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x1c))();
      }
      if ((uVar4 != 0) && (piVar1 != (int *)0x0)) {
        *(undefined4 *)(uVar4 + 0x68) = param_2;
        return;
      }
    }
  }
  return;
}



byte FUN_007b7fc0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  bVar2 = 0;
  if (DAT_00b42f48 == 0) {
    return 0;
  }
  if (param_1 != (int *)0x0) {
    iVar4 = (**(code **)(*param_1 + 0xc))();
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_00707530(4);
      piVar1 = (int *)param_1[0x2f];
      if (piVar5 == (int *)0x0) {
        uVar6 = 0;
      }
      else {
        iVar4 = (**(code **)(*piVar5 + 0x54))();
        uVar6 = -(uint)(iVar4 != -1) & (uint)piVar5;
      }
      if (piVar1 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        iVar4 = (**(code **)(*piVar1 + 0x1c))();
        piVar5 = (int *)(-(uint)(iVar4 != -1) & (uint)piVar1);
      }
      if ((uVar6 != 0) && (piVar1 != (int *)0x0)) {
        bVar2 = (**(code **)(*piVar5 + 0x18))(param_1);
        *(undefined4 *)(uVar6 + 0x68) = param_4;
        return bVar2;
      }
      if ((param_2 < 0) || (iVar4 = param_2, 0x1c < param_2)) {
        if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)("Object prepared with invalid shader index",0);
        }
        iVar4 = 1;
      }
      if (param_2 == 1) {
        iVar4 = FUN_007d1920(param_1,param_3,param_4);
      }
      if ((iVar4 != 0) && (iVar4 = FUN_007b4290(iVar4), iVar4 != 0)) {
        FUN_004ec910(*(undefined4 *)(iVar4 + 4));
        bVar2 = (**(code **)(**(int **)(iVar4 + 4) + 0x18))(param_1);
        iVar4 = FUN_00707530(4);
        if (iVar4 == 0) {
          return bVar2;
        }
        *(undefined4 *)(iVar4 + 0x68) = param_4;
        return bVar2;
      }
      return 0;
    }
    iVar4 = (**(code **)(*param_1 + 8))();
    if (iVar4 != 0) {
      uVar6 = 0;
      if (*(short *)((int)param_1 + 0xb6) != 0) {
        bVar2 = 0;
        if (*(short *)((int)param_1 + 0xb6) == 0) goto LAB_007b812e;
        do {
          iVar4 = *(int *)(param_1[0x2c] + uVar6 * 4);
          if (iVar4 != 0) {
            bVar3 = FUN_007b7fc0(iVar4,param_2,param_3,param_4,param_5);
            bVar2 = bVar2 | bVar3;
          }
LAB_007b812e:
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(ushort *)((int)param_1 + 0xb6));
      }
    }
  }
  return bVar2;
}



undefined4 FUN_007b8150(int param_1)

{
  int *piVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)(param_1 + 0xbc);
  if (piVar1 != (int *)0x0) {
    for (puVar3 = (undefined *)(**(code **)(*piVar1 + 4))(); puVar3 != (undefined *)0x0;
        puVar3 = *(undefined **)(puVar3 + 4)) {
      if (puVar3 == &DAT_00b42884) {
        bVar2 = 1;
        goto LAB_007b8180;
      }
    }
    bVar2 = 0;
LAB_007b8180:
    if ((-(uint)bVar2 & (uint)piVar1) != 0) {
      uVar4 = FUN_00560920(&DAT_00b4257c,piVar1);
      return uVar4;
    }
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_007b8200(undefined4 *param_1,undefined4 param_2,char param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  LONG LVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  undefined4 *local_210;
  undefined4 local_20c;
  undefined4 *local_208;
  char acStack_204 [500];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009cdb0d;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_210;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffde4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_20c = 0;
  local_208 = param_1;
  local_210 = (undefined4 *)0x0;
  local_4 = 1;
  puVar7 = (undefined4 *)0x0;
  if ((DAT_00b42ebc != (int *)0x0) &&
     (puVar3 = (undefined4 *)(**(code **)(*DAT_00b42ebc + 4))(param_2,0,uVar2),
     puVar3 != (undefined4 *)0x0)) {
    local_210 = puVar3;
    InterlockedIncrement(puVar3 + 1);
    puVar7 = puVar3;
  }
  if ((param_3 != '\0') || (DAT_00b42ebc == (int *)0x0)) {
    if ((puVar7 == (undefined4 *)0x0) && (cVar1 = thunk_FUN_00748170(param_2,0), cVar1 != '\0')) {
      uVar4 = FUN_00701e00(param_2,&DAT_00b256d0,1);
      FUN_0075fa90(uVar4);
      puVar7 = local_210;
      if (DAT_00b42ebc != (int *)0x0) {
        (**(code **)(*DAT_00b42ebc + 8))(param_2,local_210);
      }
    }
    if (((param_3 != '\0') && (param_4 != '\0')) && (puVar7 != (undefined4 *)0x0)) {
      iVar5 = FUN_00560920(&DAT_00b3f95c,puVar7);
      if (((int *)puVar7[9] != (int *)0x0) &&
         (uVar2 = (**(code **)(*(int *)puVar7[9] + 0x10))(), uVar2 < 2)) {
        if (iVar5 == 0) {
          _sprintf(acStack_204,
                   "TEXTURE ERROR : texture does not contain mipmaps & will not be used : NOTASOURCETEXTURE"
                  );
        }
        else {
          _sprintf(acStack_204,
                   "TEXTURE ERROR : texture does not contain mipmaps & will not be used : %s",
                   *(undefined4 *)(iVar5 + 0x38));
        }
        if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)(acStack_204,0);
        }
        *param_1 = 0;
        local_20c = 1;
        local_4 = local_4 & 0xffffff00;
        FUN_007016a0();
        goto LAB_007b83d0;
      }
    }
  }
  *param_1 = puVar7;
  if (puVar7 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar7 + 1);
  }
  local_20c = 1;
  local_4 = local_4 & 0xffffff00;
  if ((puVar7 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar7 + 1), LVar6 == 0)) {
    (**(code **)*puVar7)(1);
  }
LAB_007b83d0:
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_007b8400(void)

{
  if ((DAT_00b42ee4 == 0) && (DAT_00b42ee4 = FUN_007fa910(), DAT_00b42ee4 == 0)) {
    return;
  }
  if (*(int *)(DAT_00b42ee4 + 4) == 0) {
    FUN_006f7070(0,".\\BSShaderManager.cpp",0xca4);
  }
  FUN_007f9d10(0);
  return;
}



void FUN_007b8440(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  piVar2 = (int *)FUN_00707530(4);
  if (piVar2 == (int *)0x0) goto LAB_007b848c;
  iVar3 = (**(code **)(*piVar2 + 0x54))();
  if (iVar3 < 1) {
LAB_007b8478:
    bVar1 = 0;
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x54))();
    if (10 < iVar3) goto LAB_007b8478;
    bVar1 = 1;
  }
  if ((-(uint)bVar1 & (uint)piVar2) != 0) {
    *(undefined4 *)((-(uint)bVar1 & (uint)piVar2) + 0x94) = param_2;
  }
LAB_007b848c:
  iVar3 = (**(code **)(*param_1 + 8))();
  if (iVar3 != 0) {
    uVar4 = 0;
    if (*(short *)((int)param_1 + 0xb6) != 0) {
      if (*(short *)((int)param_1 + 0xb6) == 0) goto LAB_007b84c8;
      do {
        iVar3 = *(int *)(param_1[0x2c] + uVar4 * 4);
        if (iVar3 != 0) {
          FUN_007b8440(iVar3,param_2);
        }
LAB_007b84c8:
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)((int)param_1 + 0xb6));
    }
  }
  return;
}



void FUN_007b84e0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = &DAT_00b42ec0;
  do {
    if ((*piVar3 != 0) && (piVar2 = *(int **)(*piVar3 + 4), piVar2 != (int *)0x0)) {
      iVar1 = (**(code **)(*piVar2 + 0x1c))();
      if (iVar1 == -1) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = *(int **)(*piVar3 + 4);
      }
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x90))();
      }
    }
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0xb42f30);
  return;
}



void FUN_007b8910(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if (DAT_00b42eb4 != (code *)0x0) {
      uVar1 = (*DAT_00b42eb4)(param_1);
    }
    FUN_007b7f00(param_1,uVar1);
  }
  return;
}



undefined1 FUN_007b8940(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    FUN_00707610();
    uVar2 = 0;
    if (DAT_00b42eb4 != (code *)0x0) {
      uVar2 = (*DAT_00b42eb4)(param_1);
    }
    uVar1 = FUN_007b7fc0(param_1,param_2,param_3,param_4,uVar2);
    FUN_00707610();
    return uVar1;
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_007b8990(void)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int *piVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  undefined2 in_FPUControlWord;
  float10 fVar12;
  undefined1 auStack_234 [40];
  float local_20c;
  float local_208;
  undefined1 *local_204;
  undefined4 *local_200;
  undefined4 *local_1fc;
  undefined4 *local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  undefined4 *local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  undefined1 local_1d8 [72];
  char acStack_190 [268];
  uint local_84;
  int local_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_009cdbfe;
  local_4c = *unaff_FS_OFFSET;
  local_84 = DAT_00b30aac ^ (uint)auStack_234;
  *unaff_FS_OFFSET = (int)&local_4c;
  FUN_0070f010();
  local_1fc = (undefined4 *)FUN_00401f00();
  local_44 = 0;
  if (local_1fc == (undefined4 *)0x0) {
    local_1e0 = 0.0;
  }
  else {
    local_1e0 = (float)FUN_0070e560(0x80,0x80,local_1d8,1,1);
  }
  fVar2 = 0.0;
  local_44 = 0xffffffff;
  local_1ec = 0.0;
  puVar8 = (undefined1 *)(**(int **)((int)local_1e0 + 0x5c) + *(int *)((int)local_1e0 + 0x50) + 1);
  do {
    iVar11 = 0;
    local_1e4 = 64.0 - fVar2;
    fVar1 = 0.0;
    puVar10 = puVar8;
    do {
      local_208 = local_1e4;
      local_200 = (undefined4 *)(64.0 - fVar1);
      local_1f8 = (undefined4 *)
                  (local_1e4 * local_1e4 + 4096.0 + (float)local_200 * (float)local_200);
      fVar12 = (float10)FUN_00982c30();
      puVar10[2] = 0;
      fVar2 = 1.0 / (float)fVar12;
      local_200 = (undefined4 *)((float)local_200 * fVar2);
      local_1f8._0_1_ = (undefined1)(int)ROUND((fVar2 * 64.0 + 1.0) * 0.5 * 255.0);
      puVar10[1] = local_1f8._0_1_;
      local_1f8._0_1_ = (undefined1)(int)ROUND((fVar2 * local_208 + 1.0) * 0.5 * 255.0);
      *puVar10 = local_1f8._0_1_;
      local_20c = (float)CONCAT22(local_20c._2_2_,in_FPUControlWord);
      iVar11 = iVar11 + 1;
      local_1f8 = (undefined4 *)(int)ROUND(((float)local_200 + 1.0) * 0.5 * 255.0);
      puVar10[-1] = local_1f8._0_1_;
      fVar1 = (float)iVar11;
      puVar10 = puVar10 + 4;
    } while (fVar1 < 128.0);
    local_1ec = (float)((int)local_1ec + 1);
    fVar2 = (float)(int)local_1ec;
    puVar8 = puVar8 + 0x200;
  } while (fVar2 < 128.0);
  *(int *)((int)local_1e0 + 0x68) = *(int *)((int)local_1e0 + 0x68) + 1;
  local_208 = fVar1;
  local_1fc = (undefined4 *)FUN_00401f00();
  local_44 = 1;
  if (local_1fc == (undefined4 *)0x0) {
    local_1f8 = (undefined4 *)0x0;
  }
  else {
    local_1f8 = (undefined4 *)FUN_0070e560(0x80,0x80,local_1d8,1,1);
  }
  fVar2 = 0.0;
  local_44 = 0xffffffff;
  local_1ec = 0.0;
  puVar8 = (undefined1 *)(**(int **)((int)local_1f8 + 0x5c) + *(int *)((int)local_1f8 + 0x50) + 1);
  do {
    local_1e4 = 64.0 - fVar2;
    iVar11 = 0;
    local_208 = 0.0;
    puVar10 = puVar8;
    do {
      local_200 = (undefined4 *)local_1e4;
      local_208 = local_208 - 64.0;
      local_1f4 = local_1e4 * local_1e4 + 4096.0 + local_208 * local_208;
      fVar12 = (float10)FUN_00982c30();
      iVar11 = iVar11 + 1;
      puVar10[2] = 0;
      fVar2 = 1.0 / (float)fVar12;
      local_200 = (undefined4 *)(fVar2 * (float)local_200);
      local_1f4._0_1_ = (undefined1)(int)ROUND((fVar2 * -64.0 + 1.0) * 0.5 * 255.0);
      puVar10[1] = local_1f4._0_1_;
      local_1f4._0_1_ = (undefined1)(int)ROUND(((float)local_200 + 1.0) * 0.5 * 255.0);
      *puVar10 = local_1f4._0_1_;
      local_20c = (float)CONCAT22(local_20c._2_2_,in_FPUControlWord);
      local_1f4 = (float)(int)ROUND((fVar2 * local_208 + 1.0) * 0.5 * 255.0);
      puVar10[-1] = local_1f4._0_1_;
      local_208 = (float)iVar11;
      puVar10 = puVar10 + 4;
    } while (local_208 < 128.0);
    local_1ec = (float)((int)local_1ec + 1);
    fVar2 = (float)(int)local_1ec;
    puVar8 = puVar8 + 0x200;
  } while (fVar2 < 128.0);
  *(int *)((int)local_1f8 + 0x68) = *(int *)((int)local_1f8 + 0x68) + 1;
  local_1fc = (undefined4 *)FUN_00401f00();
  local_44 = 2;
  if (local_1fc == (undefined4 *)0x0) {
    local_1f4 = 0.0;
  }
  else {
    local_1f4 = (float)FUN_0070e560(0x80,0x80,local_1d8,1,1);
  }
  fVar2 = 0.0;
  local_44 = 0xffffffff;
  local_208 = 0.0;
  puVar8 = (undefined1 *)(**(int **)((int)local_1f4 + 0x5c) + *(int *)((int)local_1f4 + 0x50) + 1);
  do {
    iVar11 = 0;
    local_20c = 0.0;
    local_1dc = fVar2 - 64.0;
    puVar10 = puVar8;
    do {
      local_200 = (undefined4 *)(local_20c - 64.0);
      local_1e4 = local_1dc;
      local_1f0 = (float)local_200 * (float)local_200 + 4096.0 + local_1dc * local_1dc;
      fVar12 = (float10)FUN_00982c30();
      puVar10[2] = 0;
      fVar2 = 1.0 / (float)fVar12;
      local_200 = (undefined4 *)(fVar2 * (float)local_200);
      local_204 = (undefined1 *)(fVar2 * 64.0);
      local_1e4 = local_1e4 * fVar2;
      local_1f0._0_1_ = (undefined1)(int)ROUND(((float)local_200 + 1.0) * 0.5 * 255.0);
      puVar10[1] = local_1f0._0_1_;
      local_1f0._0_1_ = (undefined1)(int)ROUND(((float)local_204 + 1.0) * 0.5 * 255.0);
      *puVar10 = local_1f0._0_1_;
      iVar11 = iVar11 + 1;
      local_1f0 = (float)(int)ROUND((local_1e4 + 1.0) * 0.5 * 255.0);
      puVar10[-1] = local_1f0._0_1_;
      local_20c = (float)iVar11;
      puVar10 = puVar10 + 4;
    } while (local_20c < 128.0);
    local_208 = (float)((int)local_208 + 1);
    fVar2 = (float)(int)local_208;
    puVar8 = puVar8 + 0x200;
  } while (fVar2 < 128.0);
  *(int *)((int)local_1f4 + 0x68) = *(int *)((int)local_1f4 + 0x68) + 1;
  local_1fc = (undefined4 *)FUN_00401f00();
  local_44 = 3;
  if (local_1fc == (undefined4 *)0x0) {
    local_1dc = 0.0;
  }
  else {
    local_1dc = (float)FUN_0070e560(0x80,0x80,local_1d8,1,1);
  }
  fVar2 = 0.0;
  local_44 = 0xffffffff;
  local_208 = 0.0;
  puVar8 = (undefined1 *)(**(int **)((int)local_1dc + 0x5c) + *(int *)((int)local_1dc + 0x50) + 1);
  do {
    iVar11 = 0;
    local_20c = 0.0;
    local_1f0 = 64.0 - fVar2;
    puVar10 = puVar8;
    do {
      local_200 = (undefined4 *)(local_20c - 64.0);
      local_1e4 = local_1f0;
      local_204 = (undefined1 *)
                  ((float)local_200 * (float)local_200 + 4096.0 + local_1f0 * local_1f0);
      fVar12 = (float10)FUN_00982c30();
      iVar11 = iVar11 + 1;
      puVar10[2] = 0;
      fVar2 = 1.0 / (float)fVar12;
      local_200 = (undefined4 *)(fVar2 * (float)local_200);
      local_1ec = fVar2 * -64.0;
      local_1e4 = fVar2 * local_1e4;
      local_204._0_1_ = (undefined1)(int)ROUND(((float)local_200 + 1.0) * 0.5 * 255.0);
      puVar10[1] = local_204._0_1_;
      local_204._0_1_ = (undefined1)(int)ROUND((local_1ec + 1.0) * 0.5 * 255.0);
      *puVar10 = local_204._0_1_;
      local_204 = (undefined1 *)(int)ROUND((local_1e4 + 1.0) * 0.5 * 255.0);
      puVar10[-1] = local_204._0_1_;
      local_20c = (float)iVar11;
      puVar10 = puVar10 + 4;
    } while (local_20c < 128.0);
    local_208 = (float)((int)local_208 + 1);
    fVar2 = (float)(int)local_208;
    puVar8 = puVar8 + 0x200;
  } while (fVar2 < 128.0);
  *(int *)((int)local_1dc + 0x68) = *(int *)((int)local_1dc + 0x68) + 1;
  local_1fc = (undefined4 *)FUN_00401f00();
  local_44 = 4;
  if (local_1fc == (undefined4 *)0x0) {
    local_1f0 = 0.0;
  }
  else {
    local_1f0 = (float)FUN_0070e560(0x80,0x80,local_1d8,1,1);
  }
  fVar2 = 0.0;
  local_44 = 0xffffffff;
  local_1ec = 0.0;
  puVar8 = (undefined1 *)(**(int **)((int)local_1f0 + 0x5c) + *(int *)((int)local_1f0 + 0x50) + 1);
  do {
    iVar11 = 0;
    local_20c = 0.0;
    local_1e4 = 64.0 - fVar2;
    puVar10 = puVar8;
    do {
      local_200 = (undefined4 *)(local_20c - 64.0);
      local_208 = local_1e4;
      local_204 = (undefined1 *)
                  ((float)local_200 * (float)local_200 + local_1e4 * local_1e4 + 4096.0);
      fVar12 = (float10)FUN_00982c30();
      iVar11 = iVar11 + 1;
      puVar10[2] = 0;
      fVar2 = 1.0 / (float)fVar12;
      local_200 = (undefined4 *)(fVar2 * (float)local_200);
      local_208 = fVar2 * local_208;
      local_204._0_1_ = (undefined1)(int)ROUND(((float)local_200 + 1.0) * 0.5 * 255.0);
      puVar10[1] = local_204._0_1_;
      local_204 = (undefined1 *)(int)ROUND((local_208 + 1.0) * 0.5 * 255.0);
      *puVar10 = local_204._0_1_;
      local_1e8 = (undefined4 *)(int)ROUND((fVar2 * 64.0 + 1.0) * 0.5 * 255.0);
      puVar10[-1] = local_1e8._0_1_;
      local_20c = (float)iVar11;
      puVar10 = puVar10 + 4;
    } while (local_20c < 128.0);
    local_1ec = (float)((int)local_1ec + 1);
    fVar2 = (float)(int)local_1ec;
    puVar8 = puVar8 + 0x200;
  } while (fVar2 < 128.0);
  *(int *)((int)local_1f0 + 0x68) = *(int *)((int)local_1f0 + 0x68) + 1;
  local_1fc = (undefined4 *)FUN_00401f00();
  local_44 = 5;
  if (local_1fc == (undefined4 *)0x0) {
    iVar11 = 0;
  }
  else {
    iVar11 = FUN_0070e560(0x80,0x80,local_1d8,1,1);
  }
  fVar2 = 0.0;
  local_44 = 0xffffffff;
  local_204 = (undefined1 *)(**(int **)(iVar11 + 0x5c) + *(int *)(iVar11 + 0x50) + 1);
  local_1ec = 0.0;
  do {
    local_20c = 0.0;
    iVar9 = 0;
    local_1e4 = 64.0 - fVar2;
    puVar8 = local_204;
    do {
      local_200 = (undefined4 *)(64.0 - local_20c);
      local_208 = local_1e4;
      local_1e8 = (undefined4 *)
                  ((float)local_200 * (float)local_200 + local_1e4 * local_1e4 + 4096.0);
      fVar12 = (float10)FUN_00982c30();
      iVar9 = iVar9 + 1;
      puVar8[2] = 0;
      fVar2 = 1.0 / (float)fVar12;
      local_200 = (undefined4 *)(fVar2 * (float)local_200);
      local_208 = fVar2 * local_208;
      local_1e8._0_1_ = (undefined1)(int)ROUND(((float)local_200 + 1.0) * 0.5 * 255.0);
      puVar8[1] = local_1e8._0_1_;
      local_1e8 = (undefined4 *)(int)ROUND((local_208 + 1.0) * 0.5 * 255.0);
      *puVar8 = local_1e8._0_1_;
      local_1fc = (undefined4 *)(int)ROUND((fVar2 * -64.0 + 1.0) * 0.5 * 255.0);
      puVar8[-1] = local_1fc._0_1_;
      local_20c = (float)iVar9;
      puVar8 = puVar8 + 4;
    } while (local_20c < 128.0);
    local_204 = local_204 + 0x200;
    local_1ec = (float)((int)local_1ec + 1);
    fVar2 = (float)(int)local_1ec;
  } while (fVar2 < 128.0);
  *(int *)(iVar11 + 0x68) = *(int *)(iVar11 + 0x68) + 1;
  puVar4 = (undefined4 *)
           FUN_00720a30(local_1e0,local_1f8,local_1f4,local_1dc,local_1f0,iVar11,DAT_00b43104);
  puVar3 = DAT_00b430ec;
  if (DAT_00b430ec == puVar4) {
LAB_007b95a2:
    if (DAT_00b430ec == (undefined4 *)0x0) goto LAB_007b95a6;
  }
  else {
    if (((DAT_00b430ec != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(DAT_00b430ec + 1), LVar5 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)();
    }
    DAT_00b430ec = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
      goto LAB_007b95a2;
    }
LAB_007b95a6:
    FUN_006f7070(0,".\\BSShaderManager.cpp");
  }
  local_1fc = (undefined4 *)FUN_00401f00();
  local_44 = 6;
  if (local_1fc == (undefined4 *)0x0) {
    iVar11 = 0;
  }
  else {
    iVar11 = FUN_0070e560(0x10,0x10,&DAT_00b25e48,1,1);
  }
  local_44 = 0xffffffff;
  puVar8 = (undefined1 *)(**(int **)(iVar11 + 0x5c) + *(int *)(iVar11 + 0x50) + 2);
  iVar9 = 0x10;
  do {
    iVar7 = 0x10;
    do {
      puVar8[-2] = 0x80;
      puVar8[-1] = 0x80;
      *puVar8 = 0xff;
      puVar8 = puVar8 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  *(int *)(iVar11 + 0x68) = *(int *)(iVar11 + 0x68) + 1;
  puVar4 = (undefined4 *)FUN_00701fc0(iVar11);
  puVar3 = DAT_00b430dc;
  if (DAT_00b430dc == puVar4) {
LAB_007b9685:
    if (DAT_00b430dc == (undefined4 *)0x0) goto LAB_007b9689;
  }
  else {
    if (((DAT_00b430dc != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(DAT_00b430dc + 1), LVar5 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)();
    }
    DAT_00b430dc = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
      goto LAB_007b9685;
    }
LAB_007b9689:
    FUN_006f7070(0,".\\BSShaderManager.cpp");
  }
  local_1fc = (undefined4 *)FUN_00401f00();
  local_44 = 7;
  if (local_1fc == (undefined4 *)0x0) {
    iVar11 = 0;
  }
  else {
    iVar11 = FUN_0070e560(0x10,0x10,&DAT_00b25e00,1,1);
  }
  local_44 = 0xffffffff;
  puVar8 = (undefined1 *)(**(int **)(iVar11 + 0x5c) + *(int *)(iVar11 + 0x50) + 2);
  iVar9 = 0x10;
  do {
    iVar7 = 0x10;
    do {
      puVar8[-2] = 0x80;
      puVar8[-1] = 0x80;
      *puVar8 = 0xff;
      puVar8[1] = 0x40;
      puVar8 = puVar8 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  *(int *)(iVar11 + 0x68) = *(int *)(iVar11 + 0x68) + 1;
  puVar4 = (undefined4 *)FUN_00701fc0(iVar11);
  puVar3 = DAT_00b430f0;
  if (DAT_00b430f0 == puVar4) {
LAB_007b9769:
    if (DAT_00b430f0 == (undefined4 *)0x0) goto LAB_007b976d;
  }
  else {
    if (((DAT_00b430f0 != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(DAT_00b430f0 + 1), LVar5 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)();
    }
    DAT_00b430f0 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
      goto LAB_007b9769;
    }
LAB_007b976d:
    FUN_006f7070(0,".\\BSShaderManager.cpp");
  }
  local_1fc = (undefined4 *)FUN_00401f00();
  local_44 = 8;
  if (local_1fc == (undefined4 *)0x0) {
    iVar11 = 0;
  }
  else {
    iVar11 = FUN_0070e560(0x10,0x10,&DAT_00b25e48,1,1);
  }
  local_44 = 0xffffffff;
  puVar8 = (undefined1 *)(**(int **)(iVar11 + 0x5c) + *(int *)(iVar11 + 0x50) + 2);
  iVar9 = 0x10;
  do {
    iVar7 = 0x10;
    do {
      puVar8[-2] = 0;
      puVar8[-1] = 0;
      *puVar8 = 0;
      puVar8 = puVar8 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  *(int *)(iVar11 + 0x68) = *(int *)(iVar11 + 0x68) + 1;
  puVar4 = (undefined4 *)FUN_00701fc0(iVar11);
  puVar3 = DAT_00b430e0;
  if (DAT_00b430e0 == puVar4) {
LAB_007b9845:
    if (DAT_00b430e0 == (undefined4 *)0x0) goto LAB_007b9849;
  }
  else {
    if (((DAT_00b430e0 != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(DAT_00b430e0 + 1), LVar5 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)();
    }
    DAT_00b430e0 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
      goto LAB_007b9845;
    }
LAB_007b9849:
    FUN_006f7070(0,".\\BSShaderManager.cpp");
  }
  piVar6 = (int *)FUN_007b8200(&local_1fc,"Data\\Textures\\Effects\\WindowEnvironmentMap01.dds",1);
  puVar3 = DAT_00b43100;
  local_44 = 9;
  if (DAT_00b43100 != (undefined4 *)*piVar6) {
    if (((DAT_00b43100 != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(DAT_00b43100 + 1), LVar5 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)();
    }
    DAT_00b43100 = (undefined4 *)*piVar6;
    if (DAT_00b43100 != (undefined4 *)0x0) {
      InterlockedIncrement(DAT_00b43100 + 1);
    }
  }
  puVar3 = local_1fc;
  local_44 = 0xffffffff;
  if (((local_1fc != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(local_1fc + 1), LVar5 == 0)
      ) && (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)();
  }
  piVar6 = (int *)FUN_007b8200(&local_1e8,"Data\\Textures\\Effects\\WindowEnvironmentMap02.dds",1);
  puVar3 = DAT_00b430e4;
  local_44 = 10;
  if (DAT_00b430e4 != (undefined4 *)*piVar6) {
    if (((DAT_00b430e4 != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(DAT_00b430e4 + 1), LVar5 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)();
    }
    DAT_00b430e4 = (undefined4 *)*piVar6;
    if (DAT_00b430e4 != (undefined4 *)0x0) {
      InterlockedIncrement(DAT_00b430e4 + 1);
    }
  }
  puVar3 = local_1e8;
  local_44 = 0xffffffff;
  if (((local_1e8 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(local_1e8 + 1), LVar5 == 0)
      ) && (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)();
  }
  local_1fc = (undefined4 *)FUN_00401f00();
  local_44 = 0xb;
  if (local_1fc == (undefined4 *)0x0) {
    iVar11 = 0;
  }
  else {
    iVar11 = FUN_0070e560(4,4,&DAT_00b25e00,1,1);
  }
  iVar9 = **(int **)(iVar11 + 0x5c) + *(int *)(iVar11 + 0x50);
  local_44 = 0xffffffff;
  if (((DAT_00b42d40 == '\0') || (DAT_00b42f3e == '\0')) || (DAT_00b42f48 < 2)) {
    puVar8 = (undefined1 *)(iVar9 + 2);
    iVar9 = 4;
    do {
      iVar7 = 4;
      do {
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0x40;
        puVar8 = puVar8 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  else {
    puVar8 = (undefined1 *)(iVar9 + 2);
    iVar9 = 4;
    do {
      iVar7 = 4;
      do {
        puVar8[-2] = 0xe6;
        puVar8[-1] = 0xd4;
        *puVar8 = 0xb8;
        puVar8[1] = 0x40;
        puVar8 = puVar8 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  *(int *)(iVar11 + 0x68) = *(int *)(iVar11 + 0x68) + 1;
  puVar4 = (undefined4 *)FUN_00701fc0(iVar11);
  puVar3 = DAT_00b4311c;
  if (DAT_00b4311c == puVar4) {
LAB_007b9a99:
    if (DAT_00b4311c == (undefined4 *)0x0) goto LAB_007b9a9d;
  }
  else {
    if (((DAT_00b4311c != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(DAT_00b4311c + 1), LVar5 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)();
    }
    DAT_00b4311c = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
      goto LAB_007b9a99;
    }
LAB_007b9a9d:
    FUN_006f7070(0,".\\BSShaderManager.cpp");
  }
  local_1fc = (undefined4 *)FUN_00401f00();
  local_44 = 0xc;
  if (local_1fc == (undefined4 *)0x0) {
    iVar11 = 0;
  }
  else {
    iVar11 = FUN_0070e560(4,4,&DAT_00b25e00,1,1);
  }
  local_44 = 0xffffffff;
  puVar8 = (undefined1 *)(**(int **)(iVar11 + 0x5c) + *(int *)(iVar11 + 0x50) + 2);
  iVar9 = 4;
  do {
    iVar7 = 4;
    do {
      puVar8[-2] = 0;
      puVar8[-1] = 0;
      *puVar8 = 0;
      puVar8[1] = 0xff;
      puVar8 = puVar8 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  *(int *)(iVar11 + 0x68) = *(int *)(iVar11 + 0x68) + 1;
  puVar4 = (undefined4 *)FUN_00701fc0(iVar11);
  puVar3 = DAT_00b43120;
  if (DAT_00b43120 == puVar4) {
LAB_007b9b79:
    if (DAT_00b43120 == (undefined4 *)0x0) goto LAB_007b9b7d;
  }
  else {
    if (((DAT_00b43120 != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(DAT_00b43120 + 1), LVar5 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)();
    }
    DAT_00b43120 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
      goto LAB_007b9b79;
    }
LAB_007b9b7d:
    FUN_006f7070(0,".\\BSShaderManager.cpp");
  }
  _sprintf(acStack_190,"%seyereflection.dds");
  puVar4 = (undefined4 *)
           FUN_00720f80(acStack_190,acStack_190,acStack_190,acStack_190,acStack_190,acStack_190,
                        DAT_00b43104,&DAT_00b256d0);
  puVar3 = DAT_00b43114;
  if (DAT_00b43114 == puVar4) {
LAB_007b9c13:
    if (DAT_00b43114 == (undefined4 *)0x0) goto LAB_007b9c17;
  }
  else {
    if (((DAT_00b43114 != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(DAT_00b43114 + 1), LVar5 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)();
    }
    DAT_00b43114 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
      goto LAB_007b9c13;
    }
LAB_007b9c17:
    FUN_006f7070(0,".\\BSShaderManager.cpp");
  }
  _sprintf(acStack_190,"%sreflection.dds");
  puVar4 = (undefined4 *)
           FUN_00720f80(acStack_190,acStack_190,acStack_190,acStack_190,acStack_190,acStack_190,
                        DAT_00b43104,&DAT_00b256d0);
  puVar3 = DAT_00b430f4;
  if (DAT_00b430f4 == puVar4) {
LAB_007b9cad:
    if (DAT_00b430f4 != (undefined4 *)0x0) goto LAB_007b9cc5;
  }
  else {
    if (((DAT_00b430f4 != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(DAT_00b430f4 + 1), LVar5 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)();
    }
    DAT_00b430f4 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
      goto LAB_007b9cad;
    }
  }
  FUN_006f7070(0,".\\BSShaderManager.cpp");
LAB_007b9cc5:
  _sprintf(acStack_190,"%saniso.dds");
  puVar4 = (undefined4 *)FUN_00701e00(acStack_190,&DAT_00b256d0,1);
  puVar3 = DAT_00b430f8;
  if (DAT_00b430f8 != puVar4) {
    if (((DAT_00b430f8 != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(DAT_00b430f8 + 1), LVar5 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)();
    }
    DAT_00b430f8 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  _sprintf(acStack_190,"%sblooddecal.dds");
  puVar4 = (undefined4 *)FUN_00701e00(acStack_190,&DAT_00b256d0,1);
  puVar3 = DAT_00b43128;
  if (DAT_00b43128 != puVar4) {
    if (((DAT_00b43128 != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(DAT_00b43128 + 1), LVar5 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)();
    }
    DAT_00b43128 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (DAT_00b430e8 == (undefined4 *)0x0) {
    _sprintf(acStack_190,"%sterrainnoise.dds");
    puVar4 = (undefined4 *)FUN_00701e00(acStack_190,&DAT_00b256d0,1);
    puVar3 = DAT_00b430e8;
    if (DAT_00b430e8 != puVar4) {
      if (((DAT_00b430e8 != (undefined4 *)0x0) &&
          (LVar5 = InterlockedDecrement(DAT_00b430e8 + 1), LVar5 == 0)) &&
         (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)();
      }
      DAT_00b430e8 = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar4 + 1);
      }
    }
  }
  local_1fc = (undefined4 *)FUN_00401f00();
  local_44 = 0xd;
  if (local_1fc == (undefined4 *)0x0) {
    iVar11 = 0;
  }
  else {
    iVar11 = FUN_0070e560(0x80,0x80,&DAT_00b25e48,1,1);
  }
  local_44 = 0xffffffff;
  local_1ec = 0.0;
  puVar8 = (undefined1 *)(**(int **)(iVar11 + 0x5c) + *(int *)(iVar11 + 0x50) + 2);
  do {
    local_20c = 0.0;
    local_1e0 = (float)(int)local_1ec;
    puVar10 = puVar8;
    do {
      fVar1 = local_20c;
      fVar2 = (float)(int)local_20c;
      if (63.5 <= fVar2) {
        local_1f4 = (fVar2 - 63.5) / 63.5;
      }
      else {
        local_1f4 = 1.0 - fVar2 / 63.5;
      }
      if (63.5 <= local_1e0) {
        fVar2 = (local_1e0 - 63.5) / 63.5;
      }
      else {
        fVar2 = 1.0 - local_1e0 / 63.5;
      }
      local_1fc = (undefined4 *)(local_1f4 * local_1f4 + fVar2 * fVar2);
      local_1f8 = local_1fc;
      if (1.0 < (float)local_1fc) {
        local_1f8 = (undefined4 *)0x3f800000;
      }
      if (0.0 <= (float)local_1f8) {
        local_200 = local_1fc;
        if (1.0 < (float)local_1fc) {
          local_200 = (undefined4 *)0x3f800000;
        }
      }
      else {
        local_200 = (undefined4 *)0x0;
      }
      iVar9 = FUN_00404f00();
      local_1fc = local_200;
      if (iVar9 == 1) {
        local_1fc = (undefined4 *)(1.0 - (float)local_200);
      }
      local_1fc = (undefined4 *)((float)local_1fc * 255.0);
      fVar12 = (float10)FUN_00985a00((double)(float)local_1fc);
      local_20c = (float)((int)fVar1 + 1);
      puVar8 = puVar10 + 3;
      local_1fc = (undefined4 *)(int)ROUND(fVar12);
      puVar10[-2] = local_1fc._0_1_;
      puVar10[-1] = local_1fc._0_1_;
      *puVar10 = local_1fc._0_1_;
      puVar10 = puVar8;
    } while ((int)local_20c < 0x80);
    local_1ec = (float)((int)local_1ec + 1);
  } while ((int)local_1ec < 0x80);
  *(int *)(iVar11 + 0x68) = *(int *)(iVar11 + 0x68) + 1;
  puVar4 = (undefined4 *)FUN_00701fc0(iVar11);
  puVar3 = DAT_00b43110;
  if (DAT_00b43110 != puVar4) {
    if (((DAT_00b43110 != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(DAT_00b43110 + 1), LVar5 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)();
    }
    DAT_00b43110 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar3 = DAT_00b430d4;
  if (DAT_00b430d4 != DAT_00b43110) {
    if (((DAT_00b430d4 != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(DAT_00b430d4 + 1), LVar5 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)();
    }
    DAT_00b430d4 = DAT_00b43110;
    if (DAT_00b43110 != (undefined4 *)0x0) {
      InterlockedIncrement(DAT_00b43110 + 1);
    }
  }
  puVar4 = (undefined4 *)FUN_007a98e0();
  puVar3 = DAT_00b43118;
  if (DAT_00b43118 != puVar4) {
    if (((DAT_00b43118 != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(DAT_00b43118 + 1), LVar5 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)();
    }
    DAT_00b43118 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  *unaff_FS_OFFSET = local_4c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ba0f0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cdc51;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b42f31 == '\0') {
    iVar3 = FUN_00401f00(0x48,uVar2);
    local_4 = 0;
    if (iVar3 == 0) {
      DAT_00b42f50 = 0;
    }
    else {
      DAT_00b42f50 = FUN_007c1ff0();
    }
    local_4 = 0xffffffff;
    iVar3 = FUN_00401f00(0x1c,uVar2);
    local_4 = 1;
    if (iVar3 == 0) {
      DAT_00b430b8 = (undefined4 *)0x0;
    }
    else {
      uVar4 = FUN_007dab80();
      DAT_00b430b8 = (undefined4 *)FUN_007db050(uVar4);
    }
    local_4 = 0xffffffff;
    FUN_007daca0(*DAT_00b430b8);
    puVar1 = DAT_00b430b8;
    if (DAT_00b430b8[1] == 0) {
      FUN_007db010();
      FUN_00401f20(puVar1);
      DAT_00b430b8 = (undefined4 *)0x0;
    }
    puVar5 = (undefined4 *)FUN_007b7650();
    puVar1 = DAT_00b430fc;
    if (DAT_00b430fc != puVar5) {
      if (((DAT_00b430fc != (undefined4 *)0x0) &&
          (LVar6 = InterlockedDecrement(DAT_00b430fc + 1), LVar6 == 0)) &&
         (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      DAT_00b430fc = puVar5;
      if (puVar5 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar5 + 1);
      }
    }
    FUN_007ab1d0(1);
    FUN_007b8990();
    _DAT_00b4616c = 0x3f000000;
    _DAT_00b46170 = 0x3f000000;
    _DAT_00b46174 = 0x3f000000;
    _DAT_00b46178 = 0x3f800000;
    if (DAT_00b43104 != 0) {
      iVar3 = 1;
      do {
        FUN_007b4290(iVar3);
        puVar1 = DAT_00b430b8;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x1c);
      if (DAT_00b430b8 != (undefined4 *)0x0) {
        FUN_007db010();
        FUN_00401f20(puVar1);
        DAT_00b430b8 = (undefined4 *)0x0;
      }
      if ((DAT_00b43104 != 0) && (DAT_00b42f3e != '\0')) {
        iVar3 = FUN_00401f00(0x1c);
        local_4 = 2;
        if (iVar3 == 0) {
          DAT_00b42d7c = 0;
        }
        else {
          DAT_00b42d7c = FUN_00803a30();
        }
      }
    }
    DAT_00b42f31 = '\x01';
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007ba2f0(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d00c6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b42f31 != '\0') {
    FUN_007b84e0(uVar1);
    FUN_007c2a40();
    FUN_007c2a40();
    FUN_007e30f0();
    FUN_007f3ba0();
    iVar2 = DAT_00b42d7c;
    if (DAT_00b42d7c != 0) {
      FUN_00803690();
      FUN_00401f20(iVar2);
      DAT_00b42d7c = 0;
    }
    iVar2 = DAT_00b42f50;
    if (DAT_00b42f50 != 0) {
      FUN_007c2100();
      FUN_00401f20(iVar2);
      DAT_00b42f50 = 0;
    }
    FUN_007ab1d0(0);
    DAT_00b42eb8 = 0;
    iVar2 = FUN_00401f00(0x48);
    local_4 = 0;
    if (iVar2 == 0) {
      DAT_00b42f50 = 0;
    }
    else {
      DAT_00b42f50 = FUN_007c1ff0();
    }
    local_4 = 0xffffffff;
    FUN_007c2450(DAT_00b43104);
    FUN_007ab1d0(1);
    if ((DAT_00b43104 != 0) && (DAT_00b42f3e != '\0')) {
      iVar2 = FUN_00401f00(0x1c);
      local_4 = 1;
      if (iVar2 == 0) {
        DAT_00b42d7c = 0;
      }
      else {
        DAT_00b42d7c = FUN_00803a30();
      }
    }
    *unaff_FS_OFFSET = local_c;
    return;
  }
  FUN_007ba0f0();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ba440(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cddc5;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00802540(uVar3);
  *in_ECX = &PTR_FUN_00a8f654;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  local_4 = 0x18;
  if (in_ECX[0x2e] != 0) {
    piVar1 = (int *)(in_ECX[0x2e] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0x2e] = 0;
  }
  if (in_ECX[0x2f] != 0) {
    piVar1 = (int *)(in_ECX[0x2f] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0x2f] = 0;
  }
  if (in_ECX[0x30] != 0) {
    piVar1 = (int *)(in_ECX[0x30] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0x30] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x31];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x31] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x32];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x32] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x33];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x33] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x34];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x34] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x35];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x35] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x36];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x36] = 0;
  }
  if (in_ECX[0x2d] != 0) {
    piVar1 = (int *)(in_ECX[0x2d] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0x2d] = 0;
  }
  if (in_ECX[0x2b] != 0) {
    piVar1 = (int *)(in_ECX[0x2b] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0x2b] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x1f];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x1f] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x20];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x20] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x21];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x21] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x23];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x23] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x24];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x24] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x25];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x25] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x22];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x22] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x26];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x26] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x27];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x27] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x28];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x28] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x29];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x29] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x2a];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x2a] = 0;
  }
  _DAT_00b43178 = DAT_00b25ad0;
  _DAT_00b43188 = DAT_00b25ad0;
  _DAT_00b43198 = DAT_00b25ad0;
  DAT_00b431a8 = DAT_00b25ad0;
  DAT_00b431b8 = DAT_00b25ad0;
  DAT_00b431c8 = DAT_00b25ad0;
  _DAT_00b43168 = DAT_00b25ad0;
  _DAT_00b4317c = DAT_00b25ad4;
  _DAT_00b43180 = DAT_00b25ad8;
  _DAT_00b43184 = DAT_00b25adc;
  _DAT_00b4318c = DAT_00b25ad4;
  _DAT_00b43190 = DAT_00b25ad8;
  _DAT_00b43194 = DAT_00b25adc;
  _DAT_00b4319c = DAT_00b25ad4;
  _DAT_00b431a0 = DAT_00b25ad8;
  _DAT_00b431a4 = DAT_00b25adc;
  DAT_00b431ac = DAT_00b25ad4;
  DAT_00b431b0 = DAT_00b25ad8;
  DAT_00b431b4 = DAT_00b25adc;
  DAT_00b431bc = DAT_00b25ad4;
  DAT_00b431c0 = DAT_00b25ad8;
  DAT_00b431c4 = DAT_00b25adc;
  DAT_00b431cc = DAT_00b25ad4;
  DAT_00b431d0 = DAT_00b25ad8;
  DAT_00b431d4 = DAT_00b25adc;
  _DAT_00b4316c = DAT_00b25ad4;
  _DAT_00b43170 = DAT_00b25ad8;
  _DAT_00b43174 = DAT_00b25adc;
  *(undefined1 *)(in_ECX + 8) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007ba970(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cddc5;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a8f654;
  local_4 = 0x18;
  if (in_ECX[0x2e] != 0) {
    piVar1 = (int *)(in_ECX[0x2e] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0(uVar3);
    }
    in_ECX[0x2e] = 0;
  }
  if (in_ECX[0x2f] != 0) {
    piVar1 = (int *)(in_ECX[0x2f] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0(uVar3);
    }
    in_ECX[0x2f] = 0;
  }
  if (in_ECX[0x30] != 0) {
    piVar1 = (int *)(in_ECX[0x30] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0(uVar3);
    }
    in_ECX[0x30] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x31];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x31] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x32];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x32] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x33];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x33] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x34];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x34] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x35];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x35] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x36];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x36] = 0;
  }
  if (in_ECX[0x2d] != 0) {
    piVar1 = (int *)(in_ECX[0x2d] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0x2d] = 0;
  }
  if (in_ECX[0x2b] != 0) {
    piVar1 = (int *)(in_ECX[0x2b] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0x2b] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x1f];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x1f] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x20];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x20] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x21];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x21] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x23];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x23] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x24];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x24] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x25];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x25] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x22];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x22] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x26];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x26] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x27];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x27] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x28];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x28] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x29];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x29] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x2a];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x2a] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x36];
  local_4._0_1_ = 0x17;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x35];
  local_4._0_1_ = 0x16;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x34];
  local_4._0_1_ = 0x15;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x33];
  local_4._0_1_ = 0x14;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x32];
  local_4._0_1_ = 0x13;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x31];
  local_4._0_1_ = 0x12;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4._0_1_ = 0x11;
  if (in_ECX[0x30] != 0) {
    piVar1 = (int *)(in_ECX[0x30] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
  }
  local_4._0_1_ = 0x10;
  if (in_ECX[0x2f] != 0) {
    piVar1 = (int *)(in_ECX[0x2f] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
  }
  local_4._0_1_ = 0xf;
  if (in_ECX[0x2e] != 0) {
    piVar1 = (int *)(in_ECX[0x2e] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
  }
  local_4._0_1_ = 0xe;
  if (in_ECX[0x2d] != 0) {
    piVar1 = (int *)(in_ECX[0x2d] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
  }
  local_4._0_1_ = 0xd;
  if (in_ECX[0x2c] != 0) {
    piVar1 = (int *)(in_ECX[0x2c] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
  }
  local_4._0_1_ = 0xc;
  if (in_ECX[0x2b] != 0) {
    piVar1 = (int *)(in_ECX[0x2b] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x2a];
  local_4._0_1_ = 0xb;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x29];
  local_4._0_1_ = 10;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x28];
  local_4._0_1_ = 9;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x27];
  local_4._0_1_ = 8;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x26];
  local_4._0_1_ = 7;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x25];
  local_4._0_1_ = 6;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x24];
  local_4._0_1_ = 5;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x23];
  local_4._0_1_ = 4;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x22];
  local_4._0_1_ = 3;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x21];
  local_4._0_1_ = 2;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x20];
  local_4._0_1_ = 1;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x1f];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_008012e0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007bb080(void)

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
    (**(code **)(**(int **)(in_ECX + 0x2c) + 0x18))
              ("Params",0x10000005,0,4,1,&DAT_00a2f7ec,8,4,in_ECX + 0xe0,0);
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
    (**(code **)(*(int *)*puVar1 + 0x18))("WorldTranspose",0x20000009,0,8,4,0,0,0,0,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("Color0",0x10000007,0,4,1,&DAT_00a2f7ec,0x10,4,&DAT_00b43178,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("Color1",0x10000007,0,5,1,&DAT_00a2f7ec,0x10,4,&DAT_00b43188,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("Color2",0x10000007,0,6,1,&DAT_00a2f7ec,0x10,4,&DAT_00b43198,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("eyepos",0x10000007,0,7,1,&DAT_00a2f7ec,0x10,4,&DAT_00b43168,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("Params",0x10000004,0,0xc,1,&DAT_00a2f7ec,4,4,in_ECX + 0xdc,0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007bb280(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int in_ECX;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcStack_8c4;
  char *pcStack_8c0;
  char *pcStack_8bc;
  undefined *puStack_8b8;
  undefined4 uStack_8b4;
  char *pcStack_8b0;
  undefined1 *puStack_8ac;
  undefined4 uStack_8a8;
  undefined1 auStack_8a4 [44];
  char *pcStack_878;
  undefined *puStack_874;
  undefined4 uStack_870;
  char *pcStack_86c;
  undefined4 uStack_868;
  undefined4 uStack_864;
  undefined1 auStack_860 [52];
  char *pcStack_82c;
  char *pcStack_828;
  undefined4 uStack_824;
  undefined *puStack_820;
  undefined4 uStack_81c;
  char *pcStack_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined1 auStack_80c [44];
  char *pcStack_7e0;
  undefined *puStack_7dc;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined1 auStack_7cc [56];
  char *pcStack_794;
  char *pcStack_790;
  char *pcStack_78c;
  undefined *puStack_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined1 auStack_77c [52];
  char *pcStack_748;
  undefined *puStack_744;
  char *pcStack_740;
  char *pcStack_73c;
  undefined4 uStack_738;
  undefined4 uStack_734;
  undefined1 auStack_730 [52];
  char *pcStack_6fc;
  char *pcStack_6f8;
  undefined4 uStack_6f4;
  undefined *puStack_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined1 auStack_6e0 [48];
  char *pcStack_6b0;
  undefined *puStack_6ac;
  undefined4 uStack_6a8;
  char *pcStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined1 auStack_698 [52];
  char *pcStack_664;
  char *pcStack_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined1 auStack_650 [56];
  char *pcStack_618;
  char *pcStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined1 auStack_604 [56];
  char *pcStack_5cc;
  char *pcStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined1 auStack_5b8 [56];
  char *pcStack_580;
  undefined *puStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined1 auStack_56c [56];
  char *local_534;
  undefined *local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_524;
  undefined1 local_520 [56];
  char *pcStack_4e8;
  undefined *puStack_4e4;
  char *pcStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined1 auStack_4d4 [56];
  char *local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined1 local_48c [60];
  char *pcStack_450;
  char *pcStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined1 auStack_440 [60];
  char *pcStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined1 auStack_3f4 [60];
  char *pcStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined1 auStack_3a8 [60];
  char local_36c [260];
  undefined1 local_268 [260];
  char acStack_164 [352];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&pcStack_8c4;
  local_49c = "sky\\v\\sky.v.hlsl";
  local_498 = 0;
  local_494 = 0;
  local_490 = 0;
  _memset(local_48c,0,0x3c);
  FUN_00801030(local_49c,local_268);
  _sprintf(local_36c,"SKY.vso");
  uVar7 = 0;
  pcVar5 = local_36c;
  uVar6 = 0;
  uVar2 = FUN_007b47e0();
  puVar3 = (undefined4 *)FUN_008014e0(local_268,&local_498,uVar2,pcVar5,uVar6,uVar7);
  puVar1 = *(undefined4 **)(in_ECX + 0x7c);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x7c) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  local_534 = "sky\\v\\sky.v.hlsl";
  local_530 = &DAT_00a8f8c4;
  local_52c = 0;
  local_528 = 0;
  local_524 = 0;
  _memset(local_520,0,0x38);
  FUN_00801030(local_534,local_268);
  _sprintf(local_36c,"SKYT.vso");
  uVar7 = 0;
  pcVar5 = local_36c;
  uVar6 = 0;
  uVar2 = FUN_007b47e0();
  puVar3 = (undefined4 *)FUN_008014e0(local_268,&local_530,uVar2,pcVar5,uVar6,uVar7);
  puVar1 = *(undefined4 **)(in_ECX + 0x80);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x80) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  pcStack_3b8 = "sky\\v\\sky_quad.v.hlsl";
  uStack_3b4 = 0;
  uStack_3b0 = 0;
  uStack_3ac = 0;
  _memset(auStack_3a8,0,0x3c);
  FUN_00801030(pcStack_3b8,local_268);
  _sprintf(local_36c,"SKYQUAD.vso");
  uVar7 = 0;
  pcVar5 = local_36c;
  uVar6 = 0;
  uVar2 = FUN_007b47e0();
  puVar3 = (undefined4 *)FUN_008014e0(local_268,&uStack_3b4,uVar2,pcVar5,uVar6,uVar7);
  puVar1 = *(undefined4 **)(in_ECX + 0x84);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x84) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  pcStack_5cc = "sky\\v\\sky.v.hlsl";
  pcStack_5c8 = "HORIZFADE";
  uStack_5c4 = 0;
  uStack_5c0 = 0;
  uStack_5bc = 0;
  _memset(auStack_5b8,0,0x38);
  FUN_00801030(pcStack_5cc,local_268);
  _sprintf(local_36c,"SKYHORIZFADE.vso");
  uVar7 = 0;
  pcVar5 = local_36c;
  uVar6 = 0;
  uVar2 = FUN_007b47e0();
  puVar3 = (undefined4 *)FUN_008014e0(local_268,&pcStack_5c8,uVar2,pcVar5,uVar6,uVar7);
  puVar1 = *(undefined4 **)(in_ECX + 0x88);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x88) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  pcStack_664 = "sky\\v\\sky.v.hlsl";
  pcStack_660 = "OCCLUSION";
  uStack_65c = 0;
  uStack_658 = 0;
  uStack_654 = 0;
  _memset(auStack_650,0,0x38);
  FUN_00801030(pcStack_664,local_268);
  _sprintf(local_36c,"SKYOCC.vso");
  uVar7 = 0;
  pcVar5 = local_36c;
  uVar6 = 0;
  uVar2 = FUN_007b47e0();
  puVar3 = (undefined4 *)FUN_008014e0(local_268,&pcStack_660,uVar2,pcVar5,uVar6,uVar7);
  puVar1 = *(undefined4 **)(in_ECX + 0x8c);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x8c) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  pcStack_878 = "sky\\v\\sky.v.hlsl";
  puStack_874 = &DAT_00a8f8c4;
  uStack_870 = 0;
  pcStack_86c = "CLOUDS";
  uStack_868 = 0;
  uStack_864 = 0;
  _memset(auStack_860,0,0x34);
  FUN_00801030(pcStack_878,local_268);
  _sprintf(local_36c,"SKYCLOUDS.vso");
  uVar7 = 0;
  pcVar5 = local_36c;
  uVar6 = 0;
  uVar2 = FUN_007b47e0();
  puVar3 = (undefined4 *)FUN_008014e0(local_268,&puStack_874,uVar2,pcVar5,uVar6,uVar7);
  puVar1 = *(undefined4 **)(in_ECX + 0x90);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x90) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  pcStack_82c = "sky\\v\\sky.v.hlsl";
  pcStack_828 = "HORIZFADE";
  uStack_824 = 0;
  puStack_820 = &DAT_00a8f8c4;
  uStack_81c = 0;
  pcStack_818 = "CLOUDS";
  uStack_814 = 0;
  uStack_810 = 0;
  _memset(auStack_80c,0,0x2c);
  FUN_00801030(pcStack_878,local_268);
  _sprintf(local_36c,"SKYCLOUDSFADE.vso");
  uVar7 = 0;
  pcVar5 = local_36c;
  uVar6 = 0;
  uVar2 = FUN_007b47e0();
  puVar3 = (undefined4 *)FUN_008014e0(local_268,&pcStack_828,uVar2,pcVar5,uVar6,uVar7);
  puVar1 = *(undefined4 **)(in_ECX + 0x94);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x94) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  pcStack_404 = "sky\\p\\sky.p.hlsl";
  uStack_400 = 0;
  uStack_3fc = 0;
  uStack_3f8 = 0;
  _memset(auStack_3f4,0,0x3c);
  FUN_00801030(pcStack_404,local_268);
  _sprintf(local_36c,"SKY.pso");
  uVar7 = 0;
  uVar6 = 0;
  pcVar5 = local_36c;
  uVar2 = FUN_007b4780(0,pcVar5,0,0);
  puVar3 = (undefined4 *)FUN_00801c90(local_268,&uStack_400,uVar2,pcVar5,uVar6,uVar7);
  puVar1 = *(undefined4 **)(in_ECX + 0xa0);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xa0) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  pcStack_7e0 = "sky\\p\\sky.p.hlsl";
  puStack_7dc = &DAT_00a8f8c4;
  uStack_7d8 = 0;
  uStack_7d4 = 0;
  uStack_7d0 = 0;
  _memset(auStack_7cc,0,0x38);
  FUN_00801030(pcStack_7e0,local_268);
  _sprintf(local_36c,"SKYTEX.pso");
  uVar7 = 0;
  uVar6 = 0;
  pcVar5 = local_36c;
  uVar2 = FUN_007b4780(0,pcVar5,0,0);
  puVar3 = (undefined4 *)FUN_00801c90(local_268,&puStack_7dc,uVar2,pcVar5,uVar6,uVar7);
  puVar1 = *(undefined4 **)(in_ECX + 0x98);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x98) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  pcStack_6fc = "sky\\p\\sky.p.hlsl";
  pcStack_6f8 = "HORIZFADE";
  uStack_6f4 = 0;
  puStack_6f0 = &DAT_00a8f8c4;
  uStack_6ec = 0;
  uStack_6e8 = 0;
  uStack_6e4 = 0;
  _memset(auStack_6e0,0,0x30);
  FUN_00801030(pcStack_7e0,local_268);
  _sprintf(local_36c,"SKYTEXFADE.pso");
  uVar7 = 0;
  uVar6 = 0;
  pcVar5 = local_36c;
  uVar2 = FUN_007b4780(0,pcVar5,0,0);
  puVar3 = (undefined4 *)FUN_00801c90(local_268,&pcStack_6f8,uVar2,pcVar5,uVar6,uVar7);
  puVar1 = *(undefined4 **)(in_ECX + 0x9c);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x9c) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  __gcvt((double)_DAT_00b43154,0xc,acStack_164);
  pcStack_450 = "sky\\p\\sky.p.hlsl";
  pcStack_44c = "OCCLUSION";
  uStack_448 = 0;
  uStack_444 = 0;
  _memset(auStack_440,0,0x3c);
  FUN_00801030(pcStack_450,local_268);
  _sprintf(local_36c,"SKYSUNOCCL.pso");
  uVar7 = 0;
  uVar6 = 0;
  pcVar5 = local_36c;
  uVar2 = FUN_007b4780(0,pcVar5,0,0);
  puVar3 = (undefined4 *)FUN_00801c90(local_268,&pcStack_44c,uVar2,pcVar5,uVar6,uVar7);
  puVar1 = *(undefined4 **)(in_ECX + 0xa4);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xa4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  pcStack_618 = "sky\\p\\sky.p.hlsl";
  pcStack_614 = "HORIZFADE";
  uStack_610 = 0;
  uStack_60c = 0;
  uStack_608 = 0;
  _memset(auStack_604,0,0x38);
  FUN_00801030(pcStack_618,local_268);
  _sprintf(local_36c,"SKYSHORIZFADE.pso");
  uVar7 = 0;
  uVar6 = 0;
  pcVar5 = local_36c;
  uVar2 = FUN_007b4780(0,pcVar5,0,0);
  puVar3 = (undefined4 *)FUN_00801c90(local_268,&pcStack_614,uVar2,pcVar5,uVar6,uVar7);
  puVar1 = *(undefined4 **)(in_ECX + 0xa8);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xa8) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  pcStack_794 = "sky\\v\\sky.v.hlsl";
  pcStack_790 = "DEPTH_VALUE";
  pcStack_78c = "0.999999";
  puStack_788 = &DAT_00a8f7b8;
  uStack_784 = 0;
  uStack_780 = 0;
  _memset(auStack_77c,0,0x34);
  FUN_00801030(pcStack_794,local_268);
  _sprintf(local_36c,"SKYFAR.vso");
  uVar7 = 0;
  pcVar5 = local_36c;
  uVar6 = 0;
  uVar2 = FUN_007b47e0();
  puVar3 = (undefined4 *)FUN_008014e0(local_268,&pcStack_790,uVar2,pcVar5,uVar6,uVar7);
  puVar1 = *(undefined4 **)(in_ECX + 0xc4);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xc4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  pcStack_8c4 = "sky\\v\\sky.v.hlsl";
  pcStack_8c0 = "DEPTH_VALUE";
  pcStack_8bc = "0.999999";
  puStack_8b8 = &DAT_00a8f7b8;
  uStack_8b4 = 0;
  pcStack_8b0 = "SI_CLOUDS";
  puStack_8ac = &DAT_00a2f7ec;
  uStack_8a8 = 0;
  _memset(auStack_8a4,0,0x2c);
  FUN_00801030(pcStack_8c4,local_268);
  _sprintf(local_36c,"SKYCLOUDSI.vso");
  uVar7 = 0;
  pcVar5 = local_36c;
  uVar6 = 0;
  uVar2 = FUN_007b47e0();
  puVar3 = (undefined4 *)FUN_008014e0(local_268,&pcStack_8c0,uVar2,pcVar5,uVar6,uVar7);
  puVar1 = *(undefined4 **)(in_ECX + 200);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 200) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  pcStack_580 = "sky\\v\\sky_quad.v.hlsl";
  puStack_57c = &DAT_00a8f7b8;
  uStack_578 = 0;
  uStack_574 = 0;
  uStack_570 = 0;
  _memset(auStack_56c,0,0x38);
  FUN_00801030(pcStack_580,local_268);
  _sprintf(local_36c,"SKYQUADSI.vso");
  uVar7 = 0;
  pcVar5 = local_36c;
  uVar6 = 0;
  uVar2 = FUN_007b47e0();
  puVar3 = (undefined4 *)FUN_008014e0(local_268,&puStack_57c,uVar2,pcVar5,uVar6,uVar7);
  puVar1 = *(undefined4 **)(in_ECX + 0xcc);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xcc) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  __gcvt((double)_DAT_00b43158,0xc,acStack_164);
  pcStack_4e0 = acStack_164;
  pcStack_4e8 = "sky\\p\\sky.p.hlsl";
  puStack_4e4 = &DAT_00a8f7b8;
  uStack_4dc = 0;
  uStack_4d8 = 0;
  _memset(auStack_4d4,0,0x38);
  FUN_00801030(pcStack_4e8,local_268);
  _sprintf(local_36c,"SKYSI.pso");
  uVar7 = 0;
  uVar6 = 0;
  pcVar5 = local_36c;
  uVar2 = FUN_007b4780(0,pcVar5,0,0);
  puVar3 = (undefined4 *)FUN_00801c90(local_268,&puStack_4e4,uVar2,pcVar5,uVar6,uVar7);
  puVar1 = *(undefined4 **)(in_ECX + 0xd0);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xd0) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  __gcvt((double)_DAT_00b43154,0xc,acStack_164);
  pcStack_740 = acStack_164;
  pcStack_748 = "sky\\p\\sky.p.hlsl";
  puStack_744 = &DAT_00a8f7b8;
  pcStack_73c = "SI_SUN";
  uStack_738 = 0;
  uStack_734 = 0;
  _memset(auStack_730,0,0x34);
  FUN_00801030(pcStack_748,local_268);
  _sprintf(local_36c,"SKYSISUN.pso");
  uVar7 = 0;
  uVar6 = 0;
  pcVar5 = local_36c;
  uVar2 = FUN_007b4780(0,pcVar5,0,0);
  puVar3 = (undefined4 *)FUN_00801c90(local_268,&puStack_744,uVar2,pcVar5,uVar6,uVar7);
  puVar1 = *(undefined4 **)(in_ECX + 0xd4);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xd4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  pcStack_6b0 = "sky\\p\\sky.p.hlsl";
  puStack_6ac = &DAT_00a8f7b8;
  uStack_6a8 = 0;
  pcStack_6a4 = "SI_CLOUDS";
  uStack_6a0 = 0;
  uStack_69c = 0;
  _memset(auStack_698,0,0x34);
  FUN_00801030(pcStack_6b0,local_268);
  _sprintf(local_36c,"SKYSICLOUDS.pso");
  uVar7 = 0;
  uVar6 = 0;
  pcVar5 = local_36c;
  uVar2 = FUN_007b4780(0,pcVar5,0,0);
  puVar3 = (undefined4 *)FUN_00801c90(local_268,&puStack_6ac,uVar2,pcVar5,uVar6,uVar7);
  puVar1 = *(undefined4 **)(in_ECX + 0xd8);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xd8) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  return;
}



undefined4 FUN_007bc1b0(void)

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
  uint local_4;
  
  puStack_8 = &LAB_009cde50;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_14 = 0;
  local_4 = 0;
  if (*(int *)(in_ECX + 0x70) == 0) {
    piVar6 = (int *)FUN_007606a0(&local_10,uVar5);
    iVar2 = *(int *)(in_ECX + 0x70);
    local_4._0_1_ = 1;
    if (iVar2 != *piVar6) {
      if (iVar2 != 0) {
        piVar1 = (int *)(iVar2 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
      }
      iVar2 = *piVar6;
      *(int *)(in_ECX + 0x70) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
      }
    }
    local_4._0_1_ = 0;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x60) = *(int *)(local_10 + 0x60) + -1, *(int *)(local_10 + 0x60) == 0))
    {
      FUN_007604d0();
    }
    FUN_00772630(&local_18);
    local_4._0_1_ = 2;
    FUN_00801110(local_18,0,3,2);
    FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x70) + 0x14),local_18);
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
    local_4 = CONCAT31(local_4._1_3_,2);
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,3,2);
    FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x70) + 0x14),local_18);
    iVar2 = *(int *)(in_ECX + 0x70);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(7,1,0);
    iVar2 = *(int *)(in_ECX + 0x70);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x17,4,0);
    iVar2 = *(int *)(in_ECX + 0x70);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xe,0,0);
    iVar2 = *(int *)(in_ECX + 0x70);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x1b,1,0);
    iVar2 = *(int *)(in_ECX + 0x70);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x13,5,0);
    iVar2 = *(int *)(in_ECX + 0x70);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x14,6,0);
    iVar2 = *(int *)(in_ECX + 0x70);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x34,0,0);
    iVar2 = *(int *)(in_ECX + 0x70);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xf,0,0);
    iVar2 = *(int *)(in_ECX + 0x70);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xa8,7,0);
    local_4 = local_4 & 0xffffff00;
    if ((local_18 != 0) &&
       (*(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + -1, *(int *)(local_18 + 0x5c) == 0))
    {
      FUN_00772560();
    }
  }
  iVar2 = *(int *)(in_ECX + 0x70);
  puVar3 = *(undefined4 **)(in_ECX + 0x7c);
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
  if (*(int *)(in_ECX + 0xac) == 0) {
    piVar6 = (int *)FUN_007606a0(&local_10,uVar5);
    iVar2 = *(int *)(in_ECX + 0xac);
    local_4._0_1_ = 4;
    if (iVar2 != *piVar6) {
      if (iVar2 != 0) {
        piVar1 = (int *)(iVar2 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
      }
      iVar2 = *piVar6;
      *(int *)(in_ECX + 0xac) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
      }
    }
    local_4._0_1_ = 0;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x60) = *(int *)(local_10 + 0x60) + -1, *(int *)(local_10 + 0x60) == 0))
    {
      FUN_007604d0();
    }
    FUN_00772630(&local_18);
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_00801110(local_18,0,3,2);
    FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0xac) + 0x14),local_18);
    iVar2 = *(int *)(in_ECX + 0xac);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(7,0,0);
    iVar2 = *(int *)(in_ECX + 0xac);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xe,0,0);
    iVar2 = *(int *)(in_ECX + 0xac);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x1b,1,0);
    iVar2 = *(int *)(in_ECX + 0xac);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x13,5,0);
    iVar2 = *(int *)(in_ECX + 0xac);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x14,2,0);
    iVar2 = *(int *)(in_ECX + 0xac);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x34,0,0);
    iVar2 = *(int *)(in_ECX + 0xac);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xf,0,0);
    iVar2 = *(int *)(in_ECX + 0xac);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xa8,7,0);
    local_4 = local_4 & 0xffffff00;
    if ((local_18 != 0) &&
       (*(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + -1, *(int *)(local_18 + 0x5c) == 0))
    {
      FUN_00772560();
    }
  }
  iVar2 = *(int *)(in_ECX + 0xac);
  puVar3 = *(undefined4 **)(in_ECX + 0x80);
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
  iVar2 = *(int *)(in_ECX + 0xac);
  puVar3 = *(undefined4 **)(in_ECX + 0x98);
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
  if (*(int *)(in_ECX + 0xb4) == 0) {
    piVar6 = (int *)FUN_007606a0(&local_10);
    iVar2 = *(int *)(in_ECX + 0xb4);
    local_4._0_1_ = 6;
    if (iVar2 != *piVar6) {
      if (iVar2 != 0) {
        piVar1 = (int *)(iVar2 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
      }
      iVar2 = *piVar6;
      *(int *)(in_ECX + 0xb4) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
      }
    }
    local_4._0_1_ = 0;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x60) = *(int *)(local_10 + 0x60) + -1, *(int *)(local_10 + 0x60) == 0))
    {
      FUN_007604d0();
    }
    piVar6 = (int *)FUN_00772630(&local_10);
    iVar2 = *piVar6;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      local_14 = iVar2;
    }
    iVar2 = local_14;
    local_4 = (uint)local_4._1_3_ << 8;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar2,0,3,2);
    FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0xb4) + 0x14),iVar2);
    iVar2 = *(int *)(in_ECX + 0xb4);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x1b,1,0);
    iVar2 = *(int *)(in_ECX + 0xb4);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x13,2,0);
    iVar2 = *(int *)(in_ECX + 0xb4);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x14,2,0);
    iVar2 = *(int *)(in_ECX + 0xb4);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xf,0,0);
    iVar2 = *(int *)(in_ECX + 0xb4);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(7,1,0);
    iVar2 = *(int *)(in_ECX + 0xb4);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xe,0,0);
    iVar2 = *(int *)(in_ECX + 0xb4);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x17,4,0);
    iVar2 = *(int *)(in_ECX + 0xb4);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xa8,0,0);
  }
  iVar2 = *(int *)(in_ECX + 0xb4);
  puVar3 = *(undefined4 **)(in_ECX + 0x8c);
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
  iVar2 = *(int *)(in_ECX + 0xb4);
  puVar3 = *(undefined4 **)(in_ECX + 0xa4);
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
  if (*(int *)(in_ECX + 0xb8) == 0) {
    piVar6 = (int *)FUN_007606a0(&local_10);
    iVar2 = *(int *)(in_ECX + 0xb8);
    local_4._0_1_ = 8;
    if (iVar2 != *piVar6) {
      if (iVar2 != 0) {
        piVar1 = (int *)(iVar2 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
      }
      iVar2 = *piVar6;
      *(int *)(in_ECX + 0xb8) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
      }
    }
    local_4._0_1_ = 0;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x60) = *(int *)(local_10 + 0x60) + -1, *(int *)(local_10 + 0x60) == 0))
    {
      FUN_007604d0();
    }
    piVar6 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 9;
    if (local_14 != *piVar6) {
      if (local_14 != 0) {
        piVar1 = (int *)(local_14 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_14 = *piVar6;
      if (local_14 != 0) {
        *(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + 1;
      }
    }
    iVar2 = local_14;
    local_4 = (uint)local_4._1_3_ << 8;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar2,0,3,2);
    FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0xb8) + 0x14),iVar2);
    iVar2 = *(int *)(in_ECX + 0xb8);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xf,0,0);
    iVar2 = *(int *)(in_ECX + 0xb8);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x1b,0,0);
    iVar2 = *(int *)(in_ECX + 0xb8);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(7,1,0);
    iVar2 = *(int *)(in_ECX + 0xb8);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xe,0,0);
    iVar2 = *(int *)(in_ECX + 0xb8);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x17,4,0);
    iVar2 = *(int *)(in_ECX + 0xb8);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xa8,8,0);
  }
  iVar2 = *(int *)(in_ECX + 0xb8);
  puVar3 = *(undefined4 **)(in_ECX + 0xcc);
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
  iVar2 = *(int *)(in_ECX + 0xb8);
  puVar3 = *(undefined4 **)(in_ECX + 0xd0);
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
  if (*(int *)(in_ECX + 0xbc) == 0) {
    piVar6 = (int *)FUN_007606a0(&local_10);
    iVar2 = *(int *)(in_ECX + 0xbc);
    local_4._0_1_ = 10;
    if (iVar2 != *piVar6) {
      if (iVar2 != 0) {
        piVar1 = (int *)(iVar2 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
      }
      iVar2 = *piVar6;
      *(int *)(in_ECX + 0xbc) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
      }
    }
    local_4._0_1_ = 0;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x60) = *(int *)(local_10 + 0x60) + -1, *(int *)(local_10 + 0x60) == 0))
    {
      FUN_007604d0();
    }
    piVar6 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xb;
    if (local_14 != *piVar6) {
      if (local_14 != 0) {
        piVar1 = (int *)(local_14 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_14 = *piVar6;
      if (local_14 != 0) {
        *(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + 1;
      }
    }
    iVar2 = local_14;
    local_4 = (uint)local_4._1_3_ << 8;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar2,0,3,2);
    FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0xbc) + 0x14),iVar2);
    iVar2 = *(int *)(in_ECX + 0xbc);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x1b,1,0);
    iVar2 = *(int *)(in_ECX + 0xbc);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x13,2,0);
    iVar2 = *(int *)(in_ECX + 0xbc);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x14,2,0);
    iVar2 = *(int *)(in_ECX + 0xbc);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xf,0,0);
    iVar2 = *(int *)(in_ECX + 0xbc);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(7,1,0);
    iVar2 = *(int *)(in_ECX + 0xbc);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xe,0,0);
    iVar2 = *(int *)(in_ECX + 0xbc);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x17,4,0);
    iVar2 = *(int *)(in_ECX + 0xbc);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xa8,8,0);
  }
  iVar2 = *(int *)(in_ECX + 0xbc);
  puVar3 = *(undefined4 **)(in_ECX + 0xc4);
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
  iVar2 = *(int *)(in_ECX + 0xbc);
  puVar3 = *(undefined4 **)(in_ECX + 0xd4);
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
  if (*(int *)(in_ECX + 0xc0) == 0) {
    piVar6 = (int *)FUN_007606a0(&local_10);
    iVar2 = *(int *)(in_ECX + 0xc0);
    local_4._0_1_ = 0xc;
    if (iVar2 != *piVar6) {
      if (iVar2 != 0) {
        piVar1 = (int *)(iVar2 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
      }
      iVar2 = *piVar6;
      *(int *)(in_ECX + 0xc0) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
      }
    }
    local_4._0_1_ = 0;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x60) = *(int *)(local_10 + 0x60) + -1, *(int *)(local_10 + 0x60) == 0))
    {
      FUN_007604d0();
    }
    piVar6 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xd;
    if (local_14 != *piVar6) {
      if (local_14 != 0) {
        piVar1 = (int *)(local_14 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_14 = *piVar6;
      if (local_14 != 0) {
        *(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + 1;
      }
    }
    iVar2 = local_14;
    local_4 = (uint)local_4._1_3_ << 8;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar2,0,3,2);
    FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0xc0) + 0x14),iVar2);
    iVar2 = *(int *)(in_ECX + 0xc0);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xf,0,0);
    iVar2 = *(int *)(in_ECX + 0xc0);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x1b,1,0);
    iVar2 = *(int *)(in_ECX + 0xc0);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x13,1,0);
    iVar2 = *(int *)(in_ECX + 0xc0);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x14,6,0);
    iVar2 = *(int *)(in_ECX + 0xc0);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(7,1,0);
    iVar2 = *(int *)(in_ECX + 0xc0);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xe,0,0);
    iVar2 = *(int *)(in_ECX + 0xc0);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x17,4,0);
    iVar2 = *(int *)(in_ECX + 0xc0);
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0xa8,8,0);
  }
  iVar2 = *(int *)(in_ECX + 0xc0);
  puVar3 = *(undefined4 **)(in_ECX + 200);
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
  puVar3 = *(undefined4 **)(in_ECX + 0xd8);
  iVar2 = *(int *)(in_ECX + 0xc0);
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
  local_4 = 0xffffffff;
  if (local_14 != 0) {
    piVar6 = (int *)(local_14 + 0x5c);
    *piVar6 = *piVar6 + -1;
    if (*piVar6 == 0) {
      FUN_00772560();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_007bd090(void)

{
  FUN_007bb280();
  FUN_007bc1b0();
  return;
}



int * FUN_007bd0d0(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cde86;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = (undefined4 *)FUN_00401f00(0x30,uVar4);
  *puVar5 = 0xbf800000;
  puVar5[1] = 0xbf800000;
  puVar5[2] = 0x3f7fffef;
  puVar5[3] = 0x3f800000;
  puVar5[4] = 0xbf800000;
  puVar5[5] = 0x3f7fffef;
  puVar5[6] = 0x3f800000;
  puVar5[7] = 0x3f800000;
  puVar5[8] = 0x3f7fffef;
  puVar5[9] = 0xbf800000;
  puVar5[10] = 0x3f800000;
  puVar5[0xb] = 0x3f7fffef;
  puVar6 = (undefined2 *)FUN_00401f00(0xc);
  *puVar6 = 0;
  puVar6[1] = 1;
  puVar6[2] = 2;
  puVar6[3] = 3;
  puVar6[4] = 0;
  puVar6[5] = 2;
  puVar7 = (undefined4 *)FUN_00401f00(0x40);
  local_4 = 0;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    _vector_constructor_iterator_(puVar7,0x10,4,FUN_0047ea50);
  }
  *puVar7 = DAT_00b25ad0;
  puVar7[1] = DAT_00b25ad4;
  puVar7[2] = DAT_00b25ad8;
  puVar7[3] = DAT_00b25adc;
  uVar3 = DAT_00b25adc;
  uVar2 = DAT_00b25ad8;
  uVar1 = DAT_00b25ad4;
  puVar7[4] = DAT_00b25ad0;
  puVar7[5] = uVar1;
  puVar7[6] = uVar2;
  puVar7[7] = uVar3;
  uVar3 = DAT_00b25adc;
  uVar2 = DAT_00b25ad8;
  uVar1 = DAT_00b25ad4;
  puVar7[8] = DAT_00b25ad0;
  puVar7[9] = uVar1;
  puVar7[10] = uVar2;
  puVar7[0xb] = uVar3;
  uVar3 = DAT_00b25adc;
  uVar2 = DAT_00b25ad8;
  uVar1 = DAT_00b25ad4;
  puVar7[0xc] = DAT_00b25ad0;
  puVar7[0xd] = uVar1;
  puVar7[0xe] = uVar2;
  local_4 = 0xffffffff;
  puVar7[0xf] = uVar3;
  iVar8 = FUN_00401f00(0xc0,uVar4);
  local_4 = 1;
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_007174b0(4,puVar5,0,puVar7,0,0,0,2,puVar6);
  }
  *param_1 = iVar8;
  if (iVar8 != 0) {
    InterlockedIncrement((LONG *)(iVar8 + 4));
  }
  iVar8 = *(int *)(*param_1 + 0xb4);
  *(undefined4 *)(iVar8 + 0xc) = 0;
  *(undefined4 *)(iVar8 + 0x10) = 0;
  *(undefined4 *)(iVar8 + 0x14) = 0;
  *(undefined4 *)(iVar8 + 0x18) = 0x447a0000;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_007bd330(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x94))(in_ECX[0x1c]);
  (**(code **)(*in_ECX + 0x94))(in_ECX[0x2b]);
  (**(code **)(*in_ECX + 0x94))(in_ECX[0x2d]);
  (**(code **)(*in_ECX + 0x94))(in_ECX[0x2e]);
  (**(code **)(*in_ECX + 0x94))(in_ECX[0x2f]);
  (**(code **)(*in_ECX + 0x94))(in_ECX[0x30]);
  return;
}



void FUN_007bd3b0(byte param_1)

{
  FUN_007ba970();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007bd3d0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *in_ECX;
  undefined4 unaff_EBX;
  int iVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  float fStack_30;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cdeb8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar2);
  _DAT_00b43168 = DAT_00b46658 - DAT_00b3f92c;
  _DAT_00b4316c = DAT_00b4665c - DAT_00b3f930;
  _DAT_00b43170 = DAT_00b46660 - DAT_00b3f934;
  _DAT_00b43174 = 0;
  iVar1 = *(int *)(param_4 + 0x18);
  iVar3 = *(int *)(iVar1 + 0x88);
  if ((iVar3 == 2) || (iVar3 == 4)) {
    iVar6 = 0;
  }
  else {
    iVar6 = **(int **)(*(int *)(param_4 + 0x20) + 0x20);
  }
  iVar7 = 0;
  if ((DAT_00b42e90 == 0x19d) && (iVar3 != 2)) {
    param_4 = CONCAT31(param_4._1_3_,1);
    if (iVar3 == 0) {
      iVar7 = in_ECX[0x2f];
    }
    else if (iVar3 == 3) {
      iVar7 = in_ECX[0x30];
    }
    else if (iVar3 == 4) {
      iVar7 = in_ECX[0x2e];
    }
    goto LAB_007bd691;
  }
  param_4 = (uint)param_4._1_3_ << 8;
  if (DAT_00b42e90 == 3) {
    iVar7 = in_ECX[0x2d];
    goto LAB_007bd691;
  }
  if (iVar3 == 1) {
    iVar7 = in_ECX[0x2b];
    goto LAB_007bd691;
  }
  iVar7 = in_ECX[0x1c];
  if (iVar3 == 5) {
    FUN_007aecb0(in_ECX[0x22]);
    iVar3 = in_ECX[0x2a];
LAB_007bd602:
    FUN_007aec60(iVar3);
  }
  else {
    if (iVar3 != 3) {
      if (iVar6 == 0) {
        FUN_007aecb0(in_ECX[0x1f]);
        iVar3 = in_ECX[0x28];
      }
      else {
        FUN_007aecb0(in_ECX[0x20]);
        iVar3 = in_ECX[0x26];
      }
      goto LAB_007bd602;
    }
    in_ECX[0x37] = (&DAT_00b4315c)[*(ushort *)(iVar1 + 0x84)];
    if (DAT_00b43164 == '\0') {
      FUN_007aecb0(in_ECX[0x24]);
      iVar3 = in_ECX[0x26];
      goto LAB_007bd602;
    }
    FUN_007aecb0(in_ECX[0x25]);
    FUN_007aec60(in_ECX[0x27]);
    _DAT_00b43170 = -_DAT_00b4314c / 7.0;
  }
  if (*(int *)(iVar7 + 0x30) == 0) {
    uVar4 = FUN_00772df0();
    *(undefined4 *)(iVar7 + 0x30) = uVar4;
  }
  FUN_00772cd0(0x1b,1,0);
  iVar3 = *(int *)(iVar1 + 0x88);
  if (((iVar3 == 5) || (iVar3 == 0)) || (iVar3 == 6)) {
    if (*(int *)(iVar7 + 0x30) == 0) {
      uVar4 = FUN_00772df0();
      *(undefined4 *)(iVar7 + 0x30) = uVar4;
    }
    FUN_00772cd0(0x13,5,0);
    if (*(int *)(iVar7 + 0x30) == 0) {
      uVar4 = FUN_00772df0();
      *(undefined4 *)(iVar7 + 0x30) = uVar4;
    }
    FUN_00772cd0(0x14,2,0);
  }
  else {
    FUN_0076c730(0x13,5,0);
    FUN_0076c730(0x14,6,0);
  }
LAB_007bd691:
  if (*(int *)(iVar1 + 0x88) == 3) {
    fStack_30 = *(float *)(iVar1 + 0x80);
    in_ECX[0x38] = (int)fStack_30;
  }
  else {
    in_ECX[0x38] = 0;
  }
  if (DAT_00b43070 != '\0') {
    fStack_30 = *(float *)(iVar1 + 0x80);
    in_ECX[0x39] = (int)(((fStack_30 - 0.0) / 1.0) * (_DAT_00b2c740 - _DAT_00b2c73c) + _DAT_00b2c73c
                        );
  }
  switch(*(undefined4 *)(iVar1 + 0x88)) {
  case 0:
  case 1:
  case 3:
  case 5:
  case 6:
  case 7:
    _DAT_00b43178 = *(undefined4 *)(iVar1 + 0x6c);
    _DAT_00b4317c = *(undefined4 *)(iVar1 + 0x70);
    _DAT_00b43180 = *(undefined4 *)(iVar1 + 0x74);
    _DAT_00b43184 = *(undefined4 *)(iVar1 + 0x78);
    break;
  case 2:
    _DAT_00b43178 = DAT_00b431a8;
    _DAT_00b4317c = DAT_00b431ac;
    _DAT_00b43180 = DAT_00b431b0;
    _DAT_00b43184 = DAT_00b431b4;
    _DAT_00b43188 = DAT_00b431b8;
    _DAT_00b4318c = DAT_00b431bc;
    _DAT_00b43190 = DAT_00b431c0;
    _DAT_00b43194 = DAT_00b431c4;
    _DAT_00b43198 = DAT_00b431c8;
    _DAT_00b4319c = DAT_00b431cc;
    _DAT_00b431a0 = DAT_00b431d0;
    _DAT_00b431a4 = DAT_00b431d4;
    break;
  default:
    _DAT_00b43178 = 0;
    _DAT_00b4317c = 0;
    _DAT_00b43180 = 0;
    _DAT_00b43184 = 0x3f800000;
    _DAT_00b43188 = 0;
    _DAT_00b4318c = 0;
    _DAT_00b43190 = 0;
    _DAT_00b43198 = 0;
    _DAT_00b4319c = 0;
    _DAT_00b431a0 = 0;
  }
  (**(code **)(*in_ECX + 0x94))(iVar7);
  if (iVar6 != 0) {
    FUN_0076c910(*(undefined4 *)(iVar6 + 8));
    FUN_00771640(*(byte *)(iVar6 + 5) & 0xf);
    FUN_007715e0(*(ushort *)(iVar6 + 4) >> 0xc & 3);
    if (((char)param_3 == '\0') && (*(int *)(iVar1 + 0x88) == 3)) {
      FUN_0076c910(*(undefined4 *)(iVar1 + 0x7c));
      FUN_00771640(*(byte *)(iVar6 + 5) & 0xf);
      FUN_007715e0(*(ushort *)(iVar6 + 4) >> 0xc & 3);
    }
  }
  if ((char)((uint)unaff_EBX >> 0x18) != '\0') {
    piVar5 = (int *)FUN_0075f9d0();
    (**(code **)(*piVar5 + 8))(fStack_30);
  }
  if (iVar7 != 0) {
    *(int *)(iVar7 + 0x60) = *(int *)(iVar7 + 0x60) + 1;
  }
  puStack_8 = (undefined1 *)0x0;
  param_3 = iVar7;
  FUN_0076ce40(in_ECX[0xe],&param_3);
  puStack_8 = (undefined1 *)0xffffffff;
  if (iVar7 != 0) {
    piVar5 = (int *)(iVar7 + 0x60);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      FUN_007604d0();
    }
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = 0;
  return 0;
}



int * FUN_007bd920(void)

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
  puVar4 = (undefined4 *)FUN_00771090(DAT_00b43104,3,1);
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
  (**(code **)(*(int *)*piVar8 + 0x50))(1,5,4,3,0);
  (**(code **)(*(int *)*piVar8 + 0x50))(2,7,5,1,0);
  if ((int *)*piVar8 != (int *)0x0) {
    for (puVar6 = (undefined4 *)(**(code **)(*(int *)*piVar8 + 4))();
        (puVar6 != (undefined4 *)0x0 && (puVar6 != &DAT_00b3f684)); puVar6 = (undefined4 *)puVar6[1]
        ) {
    }
  }
  iVar3 = FUN_00401f00(0xe8);
  if (iVar3 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_007ba440();
  }
  (**(code **)(*piVar7 + 0x84))();
  FUN_007bb280();
  FUN_007bc1b0();
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



undefined4 FUN_007bdac0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  LONG LVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int iStack_10;
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
    if (iVar6 == 0xb) {
      (**(code **)(*piVar5 + 0x58))(puVar1);
      iStack_10 = in_ECX;
      goto LAB_007bdbb3;
    }
    FUN_00708560(&param_1,4);
    puVar2 = param_1;
    if (param_1 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(param_1 + 1);
      if ((LVar7 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  iStack_10 = FUN_00401f00(0x8c);
  uStack_4 = 0;
  if (iStack_10 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_007c5190();
  }
  uStack_4 = 0xffffffff;
  FUN_00405680(piVar5);
  cVar3 = (**(code **)(*piVar5 + 0x58))(puVar1);
  if (cVar3 == '\0') {
    FUN_004a1220(piVar5);
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
LAB_007bdbb3:
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



void FUN_007bdbd0(void)

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
  
  puStack_8 = &LAB_009cdf4c;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a8ffac;
  local_4 = 5;
  piVar6 = in_ECX + 0x2c;
  iVar5 = 8;
  do {
    puVar2 = (undefined4 *)piVar6[-8];
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      piVar6[-8] = 0;
    }
    puVar2 = (undefined4 *)*piVar6;
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar6 = 0;
    }
    piVar6 = piVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  piVar6 = in_ECX + 0x35;
  iVar5 = 0xd;
  do {
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
  FUN_007c1ee0(DAT_00b43328);
  puVar2 = (undefined4 *)in_ECX[0x46];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x46] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x47];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x47] = 0;
  }
  puVar2 = DAT_00b43328;
  if (DAT_00b43328 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(DAT_00b43328 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_00b43328 = (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)in_ECX[0x47];
  local_4._0_1_ = 4;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x46];
  local_4._0_1_ = 3;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4._0_1_ = 2;
  _eh_vector_destructor_iterator_(in_ECX + 0x35,4,0xd,FUN_004027d0);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x2c,4,8,FUN_007016a0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x24,4,8,FUN_007016a0);
  local_4 = 0xffffffff;
  FUN_00802760();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007bddf0(undefined4 param_1)

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
              ("timingdata",0x10000007,0,0,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x80,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("hdrparam",0x10000007,0,1,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x108,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("blurscale",0x10000007,0,2,1,&DAT_00a2f7ec,0x10,4,&DAT_00b2c794,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("blurdata",0x10000009,0,3,0x10,&DAT_00a2f7ec,0x100,4,&DAT_00b43228,0);
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
              ("texRatio0",0x10000007,0,6,1,&DAT_00a2f7ec,0x10,4,&DAT_00b2c774,0);
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x18))
              ("texRatio1",0x10000007,0,7,1,&DAT_00a2f7ec,0x10,4,&DAT_00b2c784,0);
  }
  FUN_0077aa60(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007bdfc0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  LONG LVar11;
  undefined4 uVar12;
  uint uVar13;
  int **ppiVar14;
  int in_ECX;
  code *pcVar15;
  int iVar16;
  bool bVar17;
  undefined4 *in_stack_ffffff90;
  int *piStack_64;
  int **ppiStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  undefined4 uStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *piStack_30;
  int *piStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float local_18;
  float fStack_14;
  undefined4 uStack_10;
  int *piStack_4;
  
  _DAT_00b2c774 = 0x3f800000;
  _DAT_00b2c778 = 0x3f800000;
  _DAT_00b2c77c = 0.0;
  _DAT_00b2c780 = 0.0;
  iVar16 = 0;
  local_18 = 0.0;
  piStack_44 = (int *)0x7bdff8;
  piVar5 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  if (*(int **)(*param_2 + 0x20) != (int *)0x0) {
    piStack_44 = (int *)0x7be00e;
    iVar16 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x4c))();
  }
  piStack_44 = (int *)0x0;
  piStack_48 = (int *)0x7be01b;
  iVar6 = (**(code **)(*piVar5 + 0x4c))();
  fStack_24 = (float)iVar6;
  if (iVar6 < 0) {
    fStack_24 = fStack_24 + 4.2949673e+09;
  }
  fVar3 = (float)iVar16;
  if (iVar16 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fStack_24 = fStack_24 / fVar3;
  piStack_48 = (int *)0x7be052;
  local_18 = (float)iVar16;
  piVar5 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    iStack_1c = 0;
  }
  else {
    piStack_48 = (int *)0x7be064;
    iStack_1c = (**(code **)(**(int **)(*param_2 + 0x20) + 0x50))();
  }
  piStack_48 = (int *)0x0;
  uStack_4c = 0x7be075;
  iVar16 = (**(code **)(*piVar5 + 0x50))();
  fStack_24 = (float)iVar16;
  if (iVar16 < 0) {
    fStack_24 = fStack_24 + 4.2949673e+09;
  }
  fVar3 = (float)iStack_1c;
  if (iStack_1c < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fStack_24 = fStack_24 / fVar3;
  uStack_4c = 0x7be0ac;
  piVar5 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  uStack_4c = 0;
  piStack_50 = (int *)0x7be0b7;
  (**(code **)(*piVar5 + 0x4c))();
  iStack_1c = 0;
  local_18 = 1.0;
  fStack_14 = 1.0;
  uStack_10 = 0;
  if (DAT_00b42e96 != '\0') {
    piStack_2c = (int *)0x3f800000;
    fStack_28 = 1.0;
  }
  bVar17 = DAT_00b43075 != '\0';
  piStack_50 = (int *)0x0;
  piStack_54 = DAT_00b43104;
  piStack_58 = (int *)0x7be107;
  iVar16 = FUN_007c23c0();
  if (*(int **)(iVar16 + 0x20) == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    piStack_50 = (int *)0x7be119;
    iVar6 = (**(code **)(**(int **)(iVar16 + 0x20) + 0x4c))();
  }
  if (*(int **)(iVar16 + 0x20) == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piStack_50 = (int *)0x7be131;
    piVar5 = (int *)(**(code **)(**(int **)(iVar16 + 0x20) + 0x50))();
  }
  iVar16 = *piStack_4;
  if (*(char *)(in_ECX + 0x120) == '\0') {
    if (*(int **)(iVar16 + 0x20) == (int *)0x0) {
LAB_007be36d:
      if (*(int **)(iVar16 + 0x20) != (int *)0x0) {
        piStack_50 = (int *)0x7be37b;
        iVar8 = (**(code **)(**(int **)(iVar16 + 0x20) + 0x4c))();
        if (iVar8 == 0x280) {
          *(undefined4 *)(in_ECX + 0xd0) = 6;
          goto LAB_007be398;
        }
      }
      *(undefined4 *)(in_ECX + 0xd0) = 3;
    }
    else {
      piStack_50 = (int *)0x7be35a;
      iVar8 = (**(code **)(**(int **)(iVar16 + 0x20) + 0x4c))();
      if (iVar8 != 0x400) goto LAB_007be36d;
      *(undefined4 *)(in_ECX + 0xd0) = 4;
    }
LAB_007be398:
    piStack_54 = (int *)0x7be3a0;
    piStack_50 = (int *)iVar16;
    FUN_00802890();
    local_18 = 1.0 / (float)piStack_2c;
    fStack_14 = 1.0 / fStack_28;
    piStack_50 = (int *)0x7be3bf;
    piStack_50 = (int *)FUN_007d6fe0();
    piStack_58 = (int *)0x7be3ca;
    piStack_54 = (int *)(-(uint)bVar17 & 7);
    FUN_007d7280();
    if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
       ((char)DAT_00b3f928[0x83] == '\x01')) {
      piStack_50 = &iStack_1c;
      piStack_54 = (int *)0x7be3ff;
      (**(code **)(*DAT_00b3f928 + 0x144))();
    }
    piStack_54 = (int *)0x7be40f;
    piStack_50 = DAT_00b3f928;
    FUN_00709c60();
    FUN_007d72d0();
  }
  else {
    piStack_54 = (int *)0x7be15a;
    piStack_50 = (int *)iVar16;
    FUN_00802890();
    local_18 = 1.0 / (float)piStack_2c;
    fStack_14 = 1.0 / fStack_28;
    if (*(int **)(iVar16 + 0x20) == (int *)0x0) {
      iStack_20 = 0;
    }
    else {
      piStack_50 = (int *)0x7be180;
      iStack_20 = (**(code **)(**(int **)(iVar16 + 0x20) + 0x4c))();
    }
    fVar3 = (float)iStack_20;
    if (iStack_20 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    _DAT_00b2c77c = 0.5 / fVar3 + 0.0;
    if (*(int **)(iVar16 + 0x20) == (int *)0x0) {
      iStack_20 = 0;
    }
    else {
      piStack_50 = (int *)0x7be1b6;
      iStack_20 = (**(code **)(**(int **)(iVar16 + 0x20) + 0x50))();
    }
    fVar3 = (float)iStack_20;
    if (iStack_20 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    piStack_50 = (int *)0x8;
    piStack_54 = (int *)0xa;
    piStack_58 = (int *)0x0;
    _DAT_00b2c780 = 0.5 / fVar3 + 0.0;
    *(undefined4 *)(in_ECX + 0xd0) = 7;
    piStack_5c = (int *)DAT_00b3f928[0xa0];
    ppiStack_60 = (int **)0x7be205;
    (**(code **)(*piStack_5c + 0x114))();
    ppiStack_60 = (int **)0x1;
    piStack_64 = DAT_00b43104;
    piVar7 = (int *)FUN_007c23c0();
    ppiStack_60 = (int **)0x7be222;
    ppiStack_60 = (int **)FUN_007d6fe0();
    piStack_64 = piStack_48;
    FUN_007d7280();
    if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
       ((char)DAT_00b3f928[0x83] == '\x01')) {
      ppiStack_60 = &piStack_2c;
      piStack_64 = (int *)0x7be260;
      (**(code **)(*DAT_00b3f928 + 0x144))();
    }
    piStack_64 = (int *)0x7be270;
    ppiStack_60 = (int **)DAT_00b3f928;
    FUN_00709c60();
    piStack_64 = (int *)0x7be275;
    FUN_007d72d0();
    piStack_64 = piVar7;
    FUN_00802890();
    if ((int *)piStack_50[8] == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piStack_64 = (int *)0x7be28f;
      piVar5 = (int *)(**(code **)(*(int *)piStack_50[8] + 0x50))();
    }
    fVar3 = (float)(int)piVar5;
    if ((int)piVar5 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    _DAT_00b2c780 = 0.5 / fVar3 + 0.0;
    piStack_64 = (int *)0x7be2c0;
    piStack_64 = (int *)FUN_007d6fe0();
    FUN_007d7280(uStack_4c);
    if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
       ((char)DAT_00b3f928[0x83] == '\x01')) {
      piStack_64 = (int *)0x0;
      (**(code **)(*DAT_00b3f928 + 0x144))();
    }
    piStack_64 = DAT_00b3f928;
    FUN_00709c60();
    FUN_007d72d0();
    FUN_007c1ee0(piVar7);
    in_stack_ffffff90 = (undefined4 *)0x0;
    (**(code **)(*(int *)DAT_00b3f928[0xa0] + 0x114))((int *)DAT_00b3f928[0xa0],0,10,1);
    _DAT_00b2c77c = 0.0;
    _DAT_00b2c780 = 0.0;
  }
  if (iVar16 != *piStack_2c) {
    FUN_007c1ee0(iVar16);
  }
  piVar1 = piStack_64;
  piStack_58 = piStack_64;
  piVar7 = piStack_64;
  if (DAT_00b431e4 != '\0') {
    uVar9 = FUN_00405a30();
    FUN_007b4290(9);
    FUN_007fa470(uVar9);
    piVar7 = piStack_64;
  }
  while ((piVar2 = piVar1, 1 < iVar6 && (piVar7 = piVar2, 1 < (int)piStack_5c))) {
    iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    piStack_5c = (int *)((int)((int)piStack_5c + ((int)piStack_5c >> 0x1f & 3U)) >> 2);
    if ((int)piStack_5c < 1) {
      piStack_5c = (int *)0x1;
    }
    piVar7 = (int *)FUN_007c1b50(DAT_00b43104,iVar6,piStack_5c,4,0x71,0);
    *(undefined4 *)(in_ECX + 0xd0) = 3;
    FUN_00802890(piVar2);
    uVar9 = FUN_007d6fe0();
    FUN_007d7280(ppiStack_60,uVar9);
    if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
       ((char)DAT_00b3f928[0x83] == '\x01')) {
      (**(code **)(*DAT_00b3f928 + 0x144))(0);
    }
    FUN_00709c60(DAT_00b3f928);
    FUN_007d72d0();
    piVar1 = piVar7;
    if ((piVar2 != (int *)*piStack_2c) && (piVar2 != piStack_58)) {
      FUN_007c1ee0(piVar2);
    }
  }
  piStack_64 = piVar7;
  if (DAT_00b43328 == (undefined4 *)0x0) {
    if ((int *)piVar2[8] == (int *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(*(int *)piVar2[8] + 0x4c))();
    }
    puVar10 = (undefined4 *)FUN_007c2420(DAT_00b43104,uVar9,4,0x71,0);
    *(undefined4 *)(in_ECX + 0xd0) = 0xc;
    FUN_00802890(piVar2);
    uVar9 = FUN_007d6fe0();
    FUN_007d7280(ppiStack_60,uVar9);
    if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
       ((char)DAT_00b3f928[0x83] == '\x01')) {
      (**(code **)(*DAT_00b3f928 + 0x144))(0);
    }
    FUN_00709c60(DAT_00b3f928);
    FUN_007d72d0();
    puVar4 = DAT_00b43328;
    if (DAT_00b43328 == puVar10) goto LAB_007be746;
    if (((DAT_00b43328 != (undefined4 *)0x0) &&
        (LVar11 = InterlockedDecrement(DAT_00b43328 + 1), LVar11 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
  }
  else {
    if ((int *)DAT_00b43328[8] == (int *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(*(int *)DAT_00b43328[8] + 0x4c))();
    }
    puVar10 = (undefined4 *)FUN_007c2420(DAT_00b43104,uVar9,4,0x71,0);
    *(undefined4 *)(in_ECX + 0xd0) = 0xb;
    FUN_00802890(DAT_00b43328);
    uVar9 = FUN_00405a30();
    FUN_0075fa90(uVar9);
    uVar9 = FUN_007d6fe0();
    FUN_007d7280(ppiStack_60,uVar9);
    if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
       ((char)DAT_00b3f928[0x83] == '\x01')) {
      (**(code **)(*DAT_00b3f928 + 0x144))(0);
    }
    FUN_00709c60(DAT_00b3f928);
    FUN_007d72d0();
    FUN_007c1ee0(DAT_00b43328);
    puVar4 = DAT_00b43328;
    if (DAT_00b43328 == puVar10) goto LAB_007be746;
    if (((DAT_00b43328 != (undefined4 *)0x0) &&
        (LVar11 = InterlockedDecrement(DAT_00b43328 + 1), LVar11 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
  }
  DAT_00b43328 = puVar10;
  if (puVar10 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar10 + 1);
  }
LAB_007be746:
  uVar9 = FUN_007c23c0(DAT_00b43104,2);
  piVar1 = piStack_5c;
  *(undefined4 *)(in_ECX + 0xd0) = 10;
  uStack_4c = uVar9;
  FUN_00802890(piStack_5c);
  _DAT_00b2c774 = 0x3f800000;
  _DAT_00b2c778 = 0x3f800000;
  piVar7 = (int *)piVar1[8];
  if (piVar7 == (int *)0x0) {
    ppiStack_60 = (int **)0x0;
  }
  else {
    ppiStack_60 = (int **)(**(code **)(*piVar7 + 0x4c))();
  }
  fVar3 = (float)(int)ppiStack_60;
  if ((int)ppiStack_60 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  _DAT_00b2c77c = 0.5 / fVar3 + 0.0;
  piVar7 = (int *)piVar1[8];
  if (piVar7 == (int *)0x0) {
    ppiStack_60 = (int **)0x0;
  }
  else {
    ppiStack_60 = (int **)(**(code **)(*piVar7 + 0x50))();
  }
  fVar3 = (float)(int)ppiStack_60;
  if ((int)ppiStack_60 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  _DAT_00b2c780 = 0.5 / fVar3 + 0.0;
  uVar12 = FUN_007d6fe0();
  piVar7 = piStack_64;
  FUN_007d7280(piStack_64,uVar12);
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))(0);
  }
  FUN_00709c60(DAT_00b3f928);
  FUN_007d72d0();
  uVar13 = DAT_00b43224;
  if (DAT_00b43074 == '\0') {
    uVar13 = DAT_00b43220;
  }
  iVar16 = (uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f);
  if (0 < iVar16) {
    do {
      *(undefined4 *)(in_ECX + 0xd0) = 1;
      FUN_00802890(uVar9);
      uVar12 = FUN_007d6fe0();
      FUN_007d7280(piVar7,uVar12);
      if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
         ((char)DAT_00b3f928[0x83] == '\x01')) {
        (**(code **)(*DAT_00b3f928 + 0x144))(0);
      }
      FUN_00709c60(DAT_00b3f928);
      FUN_007d72d0();
      *(undefined4 *)(in_ECX + 0xd0) = 2;
      FUN_00802890(piStack_64);
      uVar12 = FUN_007d6fe0();
      FUN_007d7280(piVar7,uVar12);
      if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
         ((char)DAT_00b3f928[0x83] == '\x01')) {
        (**(code **)(*DAT_00b3f928 + 0x144))(0);
      }
      FUN_00709c60(DAT_00b3f928);
      FUN_007d72d0();
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  *(uint *)(in_ECX + 0xd0) = (DAT_00b2c1e4 != 2) - 1 & 9;
  FUN_00802890(uVar9);
  if (*piVar5 == 0) {
    piStack_64 = (int *)0x0;
    ppiVar14 = &piStack_64;
    piVar7 = (int *)0x1;
  }
  else {
    ppiVar14 = (int **)(*piVar5 + 0x20);
    piVar7 = piStack_54;
  }
  piVar2 = piStack_64;
  piVar1 = *ppiVar14;
  if (((((uint)piVar7 & 1) != 0) &&
      (piVar7 = (int *)((uint)piVar7 & 0xfffffffe), piStack_64 != (int *)0x0)) &&
     (LVar11 = InterlockedDecrement(piStack_64 + 1), LVar11 == 0)) {
    (**(code **)*piVar2)(1);
  }
  piVar2 = *(int **)(in_ECX + 0x118);
  if (piVar2 != piVar1) {
    if (((piVar2 != (int *)0x0) && (LVar11 = InterlockedDecrement(piVar2 + 1), LVar11 == 0)) &&
       (piVar2 != (int *)0x0)) {
      (**(code **)*piVar2)(1);
    }
    *(int **)(in_ECX + 0x118) = piVar1;
    if (piVar1 != (int *)0x0) {
      InterlockedIncrement(piVar1 + 1);
    }
  }
  if (DAT_00b43328 == (undefined4 *)0x0) {
    piStack_64 = (int *)0x0;
    ppiVar14 = &piStack_64;
    piVar7 = (int *)((uint)piVar7 | 2);
  }
  else {
    ppiVar14 = (int **)(DAT_00b43328 + 8);
  }
  piVar2 = piStack_64;
  piVar1 = *ppiVar14;
  if (((((uint)piVar7 & 2) != 0) &&
      (piVar7 = (int *)((uint)piVar7 & 0xfffffffd), piStack_64 != (int *)0x0)) &&
     (LVar11 = InterlockedDecrement(piStack_64 + 1), LVar11 == 0)) {
    (**(code **)*piVar2)(1);
  }
  piVar2 = *(int **)(in_ECX + 0x11c);
  if (piVar2 != piVar1) {
    if (((piVar2 != (int *)0x0) && (LVar11 = InterlockedDecrement(piVar2 + 1), LVar11 == 0)) &&
       (piVar2 != (int *)0x0)) {
      (**(code **)*piVar2)(1);
    }
    *(int **)(in_ECX + 0x11c) = piVar1;
    if (piVar1 != (int *)0x0) {
      InterlockedIncrement(piVar1 + 1);
    }
  }
  _DAT_00b2c784 = 0x3f800000;
  _DAT_00b2c788 = 0x3f800000;
  if (*(int **)(*piVar5 + 0x20) == (int *)0x0) {
    piStack_54 = (int *)0x0;
  }
  else {
    piStack_54 = (int *)(**(code **)(**(int **)(*piVar5 + 0x20) + 0x4c))();
  }
  fVar3 = (float)(int)piStack_54;
  if ((int)piStack_54 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  _DAT_00b2c78c = 0.5 / fVar3 + 0.0;
  if (*(int **)(*piVar5 + 0x20) == (int *)0x0) {
    iVar16 = 0;
  }
  else {
    iVar16 = (**(code **)(**(int **)(*piVar5 + 0x20) + 0x50))();
  }
  piVar5 = piStack_30;
  fVar3 = (float)iVar16;
  if (iVar16 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  _DAT_00b2c790 = 0.5 / fVar3 + 0.0;
  if ((char)piStack_2c == '\0') {
    piStack_48 = piStack_5c;
    piStack_44 = piStack_58;
  }
  else {
    piStack_48 = (int *)0x3f800000;
    piStack_44 = (int *)0x3f800000;
  }
  if (*piStack_30 == 0) {
    FUN_007d71c0(7,0);
  }
  else {
    uVar9 = FUN_007d6fe0();
    FUN_007d7280(7,uVar9);
  }
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))(&uStack_4c);
  }
  FUN_00709c60(DAT_00b3f928);
  if (*piVar5 != 0) {
    FUN_007d72d0();
  }
  if (DAT_00b431e4 != '\0') {
    if (in_stack_ffffff90 == (undefined4 *)0x0) {
      piStack_30 = (int *)0x0;
      ppiVar14 = &piStack_30;
      piVar7 = (int *)((uint)piVar7 | 4);
    }
    else {
      ppiVar14 = (int **)(in_stack_ffffff90 + 8);
    }
    piVar1 = piStack_30;
    piVar5 = *ppiVar14;
    if (((((uint)piVar7 & 4) != 0) &&
        (piVar7 = (int *)((uint)piVar7 & 0xfffffffb), piStack_30 != (int *)0x0)) &&
       (LVar11 = InterlockedDecrement(piStack_30 + 1), LVar11 == 0)) {
      (**(code **)*piVar1)(1);
    }
    FUN_007b4290(9);
    FUN_007fa470(piVar5);
    if (DAT_00b43328 == (undefined4 *)0x0) {
      piStack_30 = (int *)0x0;
      ppiVar14 = &piStack_30;
      piVar7 = (int *)((uint)piVar7 | 8);
    }
    else {
      ppiVar14 = (int **)(DAT_00b43328 + 8);
    }
    piVar1 = piStack_30;
    piVar5 = *ppiVar14;
    if (((((uint)piVar7 & 8) != 0) && (piStack_30 != (int *)0x0)) &&
       (LVar11 = InterlockedDecrement(piStack_30 + 1), LVar11 == 0)) {
      (**(code **)*piVar1)(1);
    }
    FUN_007b4290(9);
    FUN_007fa470(piVar5);
  }
  FUN_007c1ee0(piStack_64);
  FUN_007c1ee0(piStack_54);
  if (in_stack_ffffff90 != DAT_00b43328) {
    FUN_007c1ee0(in_stack_ffffff90);
  }
  pcVar15 = InterlockedDecrement_exref;
  if ((DAT_00b43075 != '\0') &&
     (FUN_007c1ee0(DAT_00b43328), puVar10 = DAT_00b43328, pcVar15 = InterlockedDecrement_exref,
     DAT_00b43328 != (undefined4 *)0x0)) {
    LVar11 = InterlockedDecrement(DAT_00b43328 + 1);
    if ((LVar11 == 0) && (puVar10 != (undefined4 *)0x0)) {
      (**(code **)*puVar10)(1);
    }
    DAT_00b43328 = (undefined4 *)0x0;
  }
  puVar10 = *(undefined4 **)(in_ECX + 0x118);
  if (puVar10 != (undefined4 *)0x0) {
    iVar16 = (*pcVar15)(puVar10 + 1);
    if ((iVar16 == 0) && (puVar10 != (undefined4 *)0x0)) {
      (**(code **)*puVar10)(1);
    }
    *(undefined4 *)(in_ECX + 0x118) = 0;
  }
  puVar10 = *(undefined4 **)(in_ECX + 0x11c);
  if (puVar10 != (undefined4 *)0x0) {
    iVar16 = (*pcVar15)(puVar10 + 1);
    if ((iVar16 == 0) && (puVar10 != (undefined4 *)0x0)) {
      (**(code **)*puVar10)(1);
    }
    *(undefined4 *)(in_ECX + 0x11c) = 0;
  }
  return;
}



undefined4 FUN_007bf1b0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *in_ECX;
  int iVar6;
  int *unaff_FS_OFFSET;
  int local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ce030;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  piVar4 = (int *)FUN_007606a0(&local_14,uVar3);
  iVar2 = in_ECX[0x35];
  local_4._0_1_ = 1;
  if (iVar2 != *piVar4) {
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar2 = *piVar4;
    in_ECX[0x35] = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0)) {
    FUN_007604d0();
  }
  piVar4 = (int *)FUN_00772630(&local_14);
  iVar2 = *piVar4;
  iVar6 = 0;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
    iVar6 = iVar2;
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(iVar6,0,3,2);
  FUN_00771640(0);
  FUN_00760010(*(undefined4 *)(in_ECX[0x35] + 0x14),iVar6);
  piVar4 = (int *)FUN_007606a0(&local_14);
  iVar2 = in_ECX[0x36];
  local_4._0_1_ = 3;
  if (iVar2 != *piVar4) {
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar2 = *piVar4;
    in_ECX[0x36] = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0)) {
    FUN_007604d0();
  }
  piVar4 = (int *)FUN_00772630(&local_14);
  local_4._0_1_ = 4;
  if (iVar6 != *piVar4) {
    if (iVar6 != 0) {
      piVar1 = (int *)(iVar6 + 0x5c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00772560();
      }
    }
    iVar6 = *piVar4;
    if (iVar6 != 0) {
      *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(iVar6,0,3,2);
  FUN_00771640(0);
  FUN_00760010(*(undefined4 *)(in_ECX[0x36] + 0x14),iVar6);
  piVar4 = (int *)FUN_007606a0(&local_14);
  iVar2 = in_ECX[0x37];
  local_4._0_1_ = 5;
  if (iVar2 != *piVar4) {
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar2 = *piVar4;
    in_ECX[0x37] = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0)) {
    FUN_007604d0();
  }
  piVar4 = (int *)FUN_00772630(&local_14);
  local_4._0_1_ = 6;
  if (iVar6 != *piVar4) {
    if (iVar6 != 0) {
      piVar1 = (int *)(iVar6 + 0x5c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00772560();
      }
    }
    iVar6 = *piVar4;
    if (iVar6 != 0) {
      *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(iVar6,0,3,2);
  FUN_00771640(0);
  FUN_00760010(*(undefined4 *)(in_ECX[0x37] + 0x14),iVar6);
  piVar4 = (int *)FUN_007606a0(&local_14);
  iVar2 = in_ECX[0x38];
  local_4._0_1_ = 7;
  if (iVar2 != *piVar4) {
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar2 = *piVar4;
    in_ECX[0x38] = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0)) {
    FUN_007604d0();
  }
  piVar4 = (int *)FUN_00772630(&local_14);
  local_4._0_1_ = 8;
  if (iVar6 != *piVar4) {
    if (iVar6 != 0) {
      piVar1 = (int *)(iVar6 + 0x5c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00772560();
      }
    }
    iVar6 = *piVar4;
    if (iVar6 != 0) {
      *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 1;
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(iVar6,0,3,2);
  FUN_00771640(DAT_00b43071 != '\0');
  FUN_00760010(*(undefined4 *)(in_ECX[0x38] + 0x14),iVar6);
  if (in_ECX[0x39] != 0) {
    piVar4 = (int *)(in_ECX[0x39] + 0x60);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      FUN_007604d0();
    }
    in_ECX[0x39] = 0;
  }
  if (in_ECX[0x3a] != 0) {
    piVar4 = (int *)(in_ECX[0x3a] + 0x60);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      FUN_007604d0();
    }
    in_ECX[0x3a] = 0;
  }
  if (in_ECX[0x3b] != 0) {
    piVar4 = (int *)(in_ECX[0x3b] + 0x60);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      FUN_007604d0();
    }
    in_ECX[0x3b] = 0;
  }
  if ((char)in_ECX[0x48] == '\0') {
    if (in_ECX[0x3c] != 0) {
      piVar4 = (int *)(in_ECX[0x3c] + 0x60);
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        FUN_007604d0();
      }
      in_ECX[0x3c] = 0;
    }
  }
  else {
    piVar4 = (int *)FUN_007606a0(&local_14);
    iVar2 = in_ECX[0x3c];
    local_4._0_1_ = 9;
    if (iVar2 != *piVar4) {
      if (iVar2 != 0) {
        piVar1 = (int *)(iVar2 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
      }
      iVar2 = *piVar4;
      in_ECX[0x3c] = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
      }
    }
    local_4._0_1_ = 0;
    if ((local_14 != 0) &&
       (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0))
    {
      FUN_007604d0();
    }
    piVar4 = (int *)FUN_00772630(&local_14);
    local_4._0_1_ = 10;
    if (iVar6 != *piVar4) {
      if (iVar6 != 0) {
        piVar1 = (int *)(iVar6 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar6 = *piVar4;
      if (iVar6 != 0) {
        *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 1;
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if ((local_14 != 0) &&
       (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar6,0,3,2);
    FUN_00773100(5,2,0,0);
    FUN_00773100(6,3,0,0);
    FUN_00773100(7,0,0,0);
    FUN_00760010(*(undefined4 *)(in_ECX[0x3c] + 0x14),iVar6);
  }
  piVar4 = (int *)FUN_007606a0(&local_14);
  iVar2 = in_ECX[0x3d];
  local_4._0_1_ = 0xb;
  if (iVar2 != *piVar4) {
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar2 = *piVar4;
    in_ECX[0x3d] = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0)) {
    FUN_007604d0();
  }
  piVar4 = (int *)FUN_00772630(&local_14);
  local_4._0_1_ = 0xc;
  if (iVar6 != *piVar4) {
    if (iVar6 != 0) {
      piVar1 = (int *)(iVar6 + 0x5c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00772560();
      }
    }
    iVar6 = *piVar4;
    if (iVar6 != 0) {
      *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(iVar6,0,3,2);
  FUN_00771640(0);
  FUN_00760010(*(undefined4 *)(in_ECX[0x3d] + 0x14),iVar6);
  piVar4 = (int *)FUN_007606a0(&local_14);
  iVar2 = in_ECX[0x3e];
  local_4._0_1_ = 0xd;
  if (iVar2 != *piVar4) {
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar2 = *piVar4;
    in_ECX[0x3e] = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0)) {
    FUN_007604d0();
  }
  piVar4 = (int *)FUN_00772630(&local_14);
  local_4._0_1_ = 0xe;
  if (iVar6 != *piVar4) {
    if (iVar6 != 0) {
      piVar1 = (int *)(iVar6 + 0x5c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00772560();
      }
    }
    iVar6 = *piVar4;
    if (iVar6 != 0) {
      *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(iVar6,0,3,2);
  FUN_00771640(DAT_00b43071 != '\0');
  FUN_00760010(*(undefined4 *)(in_ECX[0x3e] + 0x14),iVar6);
  piVar4 = (int *)FUN_00772630(&local_14);
  local_4._0_1_ = 0xf;
  if (iVar6 != *piVar4) {
    if (iVar6 != 0) {
      piVar1 = (int *)(iVar6 + 0x5c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00772560();
      }
    }
    iVar6 = *piVar4;
    if (iVar6 != 0) {
      *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(iVar6,1,3,2);
  FUN_00771640(0);
  FUN_00760010(*(undefined4 *)(in_ECX[0x3e] + 0x14),iVar6);
  piVar4 = (int *)FUN_00772630(&local_14);
  local_4._0_1_ = 0x10;
  if (iVar6 != *piVar4) {
    if (iVar6 != 0) {
      piVar1 = (int *)(iVar6 + 0x5c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00772560();
      }
    }
    iVar6 = *piVar4;
    if (iVar6 != 0) {
      *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(iVar6,2,3,2);
  FUN_00771640(0);
  FUN_00760010(*(undefined4 *)(in_ECX[0x3e] + 0x14),iVar6);
  piVar4 = (int *)FUN_007606a0(&local_14);
  iVar2 = in_ECX[0x3f];
  local_4._0_1_ = 0x11;
  if (iVar2 != *piVar4) {
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar2 = *piVar4;
    in_ECX[0x3f] = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0)) {
    FUN_007604d0();
  }
  piVar4 = (int *)FUN_00772630(&local_14);
  local_4._0_1_ = 0x12;
  if (iVar6 != *piVar4) {
    if (iVar6 != 0) {
      piVar1 = (int *)(iVar6 + 0x5c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00772560();
      }
    }
    iVar6 = *piVar4;
    if (iVar6 != 0) {
      *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(iVar6,0,3,2);
  FUN_00771640(0);
  FUN_00760010(*(undefined4 *)(in_ECX[0x3f] + 0x14),iVar6);
  piVar4 = (int *)FUN_007606a0(&local_14);
  iVar2 = in_ECX[0x40];
  local_4._0_1_ = 0x13;
  if (iVar2 != *piVar4) {
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar2 = *piVar4;
    in_ECX[0x40] = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0)) {
    FUN_007604d0();
  }
  piVar4 = (int *)FUN_00772630(&local_14);
  local_4._0_1_ = 0x14;
  if (iVar6 != *piVar4) {
    if (iVar6 != 0) {
      piVar1 = (int *)(iVar6 + 0x5c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00772560();
      }
    }
    iVar6 = *piVar4;
    if (iVar6 != 0) {
      *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(iVar6,0,3,2);
  FUN_00771640(0);
  FUN_00760010(*(undefined4 *)(in_ECX[0x40] + 0x14),iVar6);
  piVar4 = (int *)FUN_00772630(&local_14);
  local_4._0_1_ = 0x15;
  if (iVar6 != *piVar4) {
    if (iVar6 != 0) {
      piVar1 = (int *)(iVar6 + 0x5c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00772560();
      }
    }
    iVar6 = *piVar4;
    if (iVar6 != 0) {
      *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(iVar6,1,3,2);
  FUN_00771640(0);
  FUN_00760010(*(undefined4 *)(in_ECX[0x40] + 0x14),iVar6);
  piVar4 = (int *)FUN_007606a0(&local_14);
  iVar2 = in_ECX[0x41];
  local_4._0_1_ = 0x16;
  if (iVar2 != *piVar4) {
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar2 = *piVar4;
    in_ECX[0x41] = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0)) {
    FUN_007604d0();
  }
  piVar4 = (int *)FUN_00772630(&local_10);
  local_4._0_1_ = 0x17;
  if (iVar6 != *piVar4) {
    if (iVar6 != 0) {
      piVar1 = (int *)(iVar6 + 0x5c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00772560();
      }
    }
    iVar6 = *piVar4;
    if (iVar6 != 0) {
      *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 1;
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((local_10 != 0) &&
     (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(iVar6,0,3,2);
  FUN_00771640(0);
  FUN_00760010(*(undefined4 *)(in_ECX[0x41] + 0x14),iVar6);
  piVar4 = in_ECX + 0x35;
  local_14 = 0xd;
  do {
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x30) == 0) {
        uVar5 = FUN_00772df0();
        *(undefined4 *)(iVar2 + 0x30) = uVar5;
      }
      FUN_00772cd0(7,0,0);
      iVar2 = *piVar4;
      if (*(int *)(iVar2 + 0x30) == 0) {
        uVar5 = FUN_00772df0();
        *(undefined4 *)(iVar2 + 0x30) = uVar5;
      }
      FUN_00772cd0(0xe,0,0);
      iVar2 = *piVar4;
      if (*(int *)(iVar2 + 0x30) == 0) {
        uVar5 = FUN_00772df0();
        *(undefined4 *)(iVar2 + 0x30) = uVar5;
      }
      FUN_00772cd0(0x1b,0,0);
      iVar2 = *piVar4;
      if (*(int *)(iVar2 + 0x30) == 0) {
        uVar5 = FUN_00772df0();
        *(undefined4 *)(iVar2 + 0x30) = uVar5;
      }
      FUN_00772cd0(0xf,0,0);
      iVar2 = *piVar4;
      if (*(int *)(iVar2 + 0x30) == 0) {
        uVar5 = FUN_00772df0();
        *(undefined4 *)(iVar2 + 0x30) = uVar5;
      }
      FUN_00772cd0(0xa8,0xf,0);
    }
    piVar4 = piVar4 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  (**(code **)(*in_ECX + 0xb8))();
  local_4 = 0xffffffff;
  if (iVar6 != 0) {
    piVar4 = (int *)(iVar6 + 0x5c);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      FUN_00772560();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_007bfd90(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x9c);
  iVar2 = *(int *)(in_ECX + 0xd4);
  puVar3 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0xd4);
  puVar1 = *(undefined4 **)(in_ECX + 0xbc);
  puVar3 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x44) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0xd8);
  puVar1 = *(undefined4 **)(in_ECX + 0x98);
  puVar3 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0xd8);
  puVar1 = *(undefined4 **)(in_ECX + 0xb8);
  puVar3 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x44) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0xdc);
  puVar1 = *(undefined4 **)(in_ECX + 0x98);
  puVar3 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0xdc);
  puVar1 = *(undefined4 **)(in_ECX + 0xb8);
  puVar3 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x44) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0xe0);
  puVar1 = *(undefined4 **)(in_ECX + 0x90);
  puVar3 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0xe0);
  puVar1 = *(undefined4 **)(in_ECX + 0xb0);
  puVar3 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x44) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  if (*(int *)(in_ECX + 0xf0) != 0) {
    FUN_007aecb0(*(undefined4 *)(in_ECX + 0x9c));
    FUN_007aec60(*(undefined4 *)(in_ECX + 0xbc));
  }
  iVar2 = *(int *)(in_ECX + 0xf4);
  puVar1 = *(undefined4 **)(in_ECX + 0x9c);
  puVar3 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0xf4);
  puVar1 = *(undefined4 **)(in_ECX + 0xbc);
  puVar3 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x44) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0xf8);
  puVar1 = *(undefined4 **)(in_ECX + 0xa0);
  puVar3 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0xf8);
  puVar1 = *(undefined4 **)(in_ECX + 0xc0);
  puVar3 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x44) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0xfc);
  puVar1 = *(undefined4 **)(in_ECX + 0xa4);
  puVar3 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0xfc);
  puVar1 = *(undefined4 **)(in_ECX + 0xc4);
  puVar3 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x44) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x100);
  puVar1 = *(undefined4 **)(in_ECX + 0xa8);
  puVar3 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x100);
  puVar1 = *(undefined4 **)(in_ECX + 200);
  puVar3 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x44) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x104);
  puVar1 = *(undefined4 **)(in_ECX + 0xac);
  puVar3 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xcc);
  iVar2 = *(int *)(in_ECX + 0x104);
  puVar3 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x44) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  return;
}


