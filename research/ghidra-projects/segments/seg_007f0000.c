
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f0100(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  short sVar2;
  float *pfStack_40;
  undefined4 uStack_3c;
  float local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  float *pfStack_28;
  undefined4 uStack_24;
  undefined1 auStack_18 [4];
  float fStack_14;
  undefined1 local_c [12];
  
  local_34 = -DAT_00b465a8;
  uStack_3c = param_2;
  pfStack_40 = &local_34;
  local_30 = (undefined1 *)-DAT_00b465ac;
  local_2c = (undefined1 *)-DAT_00b465b0;
  D3DXVec3TransformNormal();
  D3DXVec3Normalize(&pfStack_40);
  pfStack_28 = pfStack_40;
  _DAT_00b46740 = pfStack_40;
  uStack_24 = 0;
  _DAT_00b46744 = 0;
  _DAT_00b46738 = auStack_18;
  _DAT_00b4673c = local_c;
  local_30 = auStack_18;
  local_2c = local_c;
  sVar2 = FUN_007ed5d0();
  uVar1 = DAT_00b4653c;
  if (sVar2 != 0) {
    uStack_3c = DAT_00b46538;
    local_34 = DAT_00b46540;
    D3DXVec3TransformCoord(&local_30,&uStack_3c,param_2);
    _DAT_00b46748 = uStack_3c;
    _DAT_00b4674c = uVar1;
    _DAT_00b46750 = local_34;
    _DAT_00b46754 = DAT_00b465b8 / fStack_14;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f0210(undefined4 param_1,undefined4 param_2,float param_3,float param_4)

{
  _DAT_00b46778 = param_1;
  _DAT_00b46788 = param_2;
  _DAT_00b4672c = _DAT_00b4672c + param_3;
  _DAT_00b46730 = _DAT_00b46730 + param_4;
  return;
}



void FUN_007f0250(void)

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
  
  puStack_8 = &LAB_009cfd36;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a92844;
  local_4 = 3;
  piVar5 = in_ECX + 0xdf;
  iVar4 = 4;
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
  piVar5 = in_ECX + 0xe3;
  iVar4 = 2;
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
  local_4._0_1_ = 2;
  if (in_ECX[0xe5] != 0) {
    piVar5 = (int *)(in_ECX[0xe5] + 0x60);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      FUN_007604d0(uVar2);
    }
  }
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0xe3,4,2,FUN_007016a0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0xdf,4,4,FUN_007016a0);
  local_4 = 0xffffffff;
  FUN_008012e0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007f07d0(void)

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
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)(in_ECX + 0x30);
  if (*(int *)(in_ECX + 0x30) == 0) {
    iVar3 = FUN_00401f00(0x34,uVar2);
    local_4 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_009a8490(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar4);
    (**(code **)(*(int *)*puVar1 + 0x18))("WorldViewProjTranspose",0x20000009,0,0,4,0,0,0,0,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("Ambient Color",0x10000007,0,5,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46498,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("Diff Color 0",0x10000007,0,6,1,&DAT_00a2f7ec,0x10,4,&DAT_00b464a8,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("Diff Color 1",0x10000007,0,7,1,&DAT_00a2f7ec,0x10,4,&DAT_00b464b8,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("FogParam | ShadowVolumeFatness",0x10000007,0,8,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46638,
               0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("FogColor | ShadowVolumeExtrudeDistance",0x10000007,0,9,1,&DAT_00a2f7ec,0x10,4,
               &DAT_00b46648,0);
    if (DAT_00b43070 != '\0') {
      (**(code **)(*(int *)*puVar1 + 0x18))
                ("Tree Dimmer",0x10000004,0,10,1,&DAT_00a2f7ec,4,4,&DAT_00b42ea8,0);
    }
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("grouped constants",0x10000009,0,0xb,6,&DAT_00a2f7ec,0x60,4,&DAT_00b46738,0);
    FUN_007f16f0(*puVar1,0x11);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("leaf data",0x10000009,0,0x22,0x30,&DAT_00a2f7ec,0x300,4,in_ECX + 0x7c,0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007f09d0(void)

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
  iVar2 = *(int *)(in_ECX + 0x394);
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
    *(int *)(in_ECX + 0x394) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  local_4 = 0xffffffff;
  if ((local_10 != 0) &&
     (*(int *)(local_10 + 0x60) = *(int *)(local_10 + 0x60) + -1, *(int *)(local_10 + 0x60) == 0)) {
    FUN_007604d0();
  }
  FUN_00772630(&local_14);
  local_4 = 1;
  FUN_00801110(local_14,0,1,2);
  FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x394) + 0x14),local_14);
  iVar2 = *(int *)(in_ECX + 0x394);
  puVar3 = *(undefined4 **)(in_ECX + 0x37c);
  puVar4 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar4 + 1);
      if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x394);
  puVar3 = *(undefined4 **)(in_ECX + 0x38c);
  puVar4 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar4 + 1);
      if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x394);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(7,1,0);
  iVar2 = *(int *)(in_ECX + 0x394);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x17,4,0);
  iVar2 = *(int *)(in_ECX + 0x394);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xe,1,0);
  local_4 = 0xffffffff;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0)) {
    FUN_00772560();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f0bc0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  LONG LVar9;
  undefined4 uVar10;
  int in_ECX;
  int iVar11;
  int *piVar12;
  undefined1 *puVar13;
  int *unaff_FS_OFFSET;
  bool bVar14;
  float10 fVar15;
  int in_stack_00000010;
  int iStack_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cfd68;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(**(int **)(in_ECX + 0x18) + 8))(*(undefined4 *)(in_stack_00000010 + 8),uVar6);
  (**(code **)(**(int **)(in_ECX + 0x18) + 0x28))(*(undefined4 *)(in_stack_00000010 + 0x2c));
  (**(code **)(**(int **)(in_ECX + 0x18) + 0x24))(*(undefined4 *)(in_stack_00000010 + 0x28));
  iVar11 = *(int *)(in_stack_00000010 + 0xc);
  bVar4 = false;
  if (iVar11 != 0) {
    fVar1 = *(float *)(iVar11 + 0x2c);
    fVar2 = *(float *)(iVar11 + 0x30);
    puStack_8 = (undefined1 *)
                ((*(float *)(puStack_8 + 0x90) - DAT_00b46660) *
                 (*(float *)(puStack_8 + 0x90) - DAT_00b46660) +
                (*(float *)(puStack_8 + 0x88) - DAT_00b46658) *
                (*(float *)(puStack_8 + 0x88) - DAT_00b46658) +
                (*(float *)(puStack_8 + 0x8c) - DAT_00b4665c) *
                (*(float *)(puStack_8 + 0x8c) - DAT_00b4665c));
    fVar15 = (float10)FUN_00982c30();
    puStack_8 = (undefined1 *)(float)fVar15;
    if ((fVar1 < (float)puStack_8) ||
       (puVar13 = *(undefined1 **)(in_stack_00000010 + 0xc),
       fVar3 = (float)puVar13 + (float)puStack_8, puStack_8 = puVar13, fVar1 < fVar3)) {
      _DAT_00b46648 = *(undefined4 *)(iVar11 + 0x20);
      _DAT_00b4664c = *(undefined4 *)(iVar11 + 0x24);
      _DAT_00b46650 = *(undefined4 *)(iVar11 + 0x28);
      _DAT_00b4663c = fVar2 - fVar1;
      bVar4 = true;
      _DAT_00b46640 = 0;
      _DAT_00b46644 = 0;
      _DAT_00b46654 = 0;
      _DAT_00b46638 = fVar2;
    }
  }
  if (DAT_00b42e86 != '\0') {
    FUN_007ecae0(0,0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    FUN_007ecae0(1,0,0x3ecccccd,0,0);
  }
  piVar12 = *(int **)(in_stack_00000010 + 0x18);
  if (piVar12 == (int *)0x0) {
    bVar14 = false;
  }
  else {
    iVar11 = (**(code **)(*piVar12 + 0x54))();
    bVar14 = iVar11 == 9;
  }
  piVar12 = (int *)(-(uint)bVar14 & (uint)piVar12);
  puVar7 = (undefined4 *)(**(code **)(*piVar12 + 0xa0))();
  puVar8 = (undefined4 *)(in_ECX + 0x7c);
  for (iVar11 = 0xc0; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar11 = (**(code **)(*piVar12 + 0x9c))();
  puStack_8 = *(undefined1 **)(iVar11 + 0x18);
  _DAT_00b4677c = (float)puStack_8 * _DAT_00b4672c;
  iVar11 = (**(code **)(*piVar12 + 0x9c))();
  puStack_8 = *(undefined1 **)(iVar11 + 0x1c);
  _DAT_00b4678c = (float)puStack_8 * _DAT_00b46730;
  iVar11 = (**(code **)(*piVar12 + 0x9c))();
  _DAT_00b46780 = *(undefined4 *)(iVar11 + 0x14);
  iVar11 = (**(code **)(*piVar12 + 0x9c))();
  _DAT_00b46790 = *(undefined4 *)(iVar11 + 0x10);
  _DAT_00b467a0 = 0;
  _DAT_00b467a4 = 0;
  _DAT_00b467a8 = 0;
  _DAT_00b467ac = 0;
  iVar11 = (**(code **)(*piVar12 + 0x9c))();
  _DAT_00b467a4 = *(undefined4 *)(iVar11 + 0xc);
  iVar11 = **(int **)(*(int *)(in_ECX + 0x394) + 0x24);
  if (iVar11 != 0) {
    *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
  }
  puStack_8 = (undefined1 *)iVar11;
  puVar8 = (undefined4 *)(**(code **)(*piVar12 + 0x78))();
  puVar7 = *(undefined4 **)(iVar11 + 4);
  puVar13 = puStack_8;
  if (puVar7 != puVar8) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar7 + 1), LVar9 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    puVar13 = puStack_8;
    *(undefined4 **)((int)puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  if (DAT_00b42e86 == '\0') {
    sVar5 = FUN_007ed5d0();
    if (sVar5 == 0) {
      if (bVar4) {
        FUN_007aecb0(*(undefined4 *)(in_ECX + 0x380));
        uVar10 = *(undefined4 *)(in_ECX + 0x390);
        goto LAB_007f0fe9;
      }
      uVar10 = *(undefined4 *)(in_ECX + 0x37c);
    }
    else {
      if (bVar4) {
        FUN_007aecb0(*(undefined4 *)(in_ECX + 0x388));
        uVar10 = *(undefined4 *)(in_ECX + 0x390);
        goto LAB_007f0fe9;
      }
      uVar10 = *(undefined4 *)(in_ECX + 900);
    }
  }
  else {
    uVar10 = *(undefined4 *)(in_ECX + 0x37c);
  }
  FUN_007aecb0(uVar10);
  uVar10 = *(undefined4 *)(in_ECX + 0x38c);
LAB_007f0fe9:
  FUN_007aec60(uVar10);
  if (DAT_00b42eac == 4) {
    iVar11 = *(int *)(in_ECX + 0x394);
    if (*(int *)(iVar11 + 0x30) == 0) {
      uVar10 = FUN_00772df0();
      *(undefined4 *)(iVar11 + 0x30) = uVar10;
    }
    FUN_00772cd0(0x34,1,0);
    iVar11 = *(int *)(in_ECX + 0x394);
    if (*(int *)(iVar11 + 0x30) == 0) {
      uVar10 = FUN_00772df0();
      *(undefined4 *)(iVar11 + 0x30) = uVar10;
    }
    FUN_00772cd0(0x38,8,0);
    iVar11 = *(int *)(in_ECX + 0x394);
    if (*(int *)(iVar11 + 0x30) == 0) {
      uVar10 = FUN_00772df0();
      *(undefined4 *)(iVar11 + 0x30) = uVar10;
    }
    FUN_00772cd0(0x37,7,0);
    iVar11 = *(int *)(in_ECX + 0x394);
    if (*(int *)(iVar11 + 0x30) == 0) {
      uVar10 = FUN_00772df0();
      *(undefined4 *)(iVar11 + 0x30) = uVar10;
    }
    FUN_00772cd0(0x35,1,0);
    iVar11 = *(int *)(in_ECX + 0x394);
    if (*(int *)(iVar11 + 0x30) == 0) {
      uVar10 = FUN_00772df0();
      *(undefined4 *)(iVar11 + 0x30) = uVar10;
    }
    FUN_00772cd0(0x36,1,0);
    puVar13 = puStack_8;
  }
  else {
    iVar11 = *(int *)(in_ECX + 0x394);
    if (*(int *)(iVar11 + 0x30) == 0) {
      uVar10 = FUN_00772df0();
      *(undefined4 *)(iVar11 + 0x30) = uVar10;
    }
    FUN_00772cd0(0x34,0,0);
  }
  iVar11 = *(int *)(in_ECX + 0x394);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar10 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar10;
  }
  FUN_00772cd0(0xa8,7,0);
  iVar11 = *(int *)(in_ECX + 0x394);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar10 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar10;
  }
  FUN_00772cd0(0x1c,0,0);
  if (puVar13 != (undefined1 *)0x0) {
    piVar12 = (int *)((int)puVar13 + 0x5c);
    *piVar12 = *piVar12 + -1;
    if (*piVar12 == 0) {
      FUN_00772560();
    }
  }
  *unaff_FS_OFFSET = iStack_18;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f1170(void)

{
  _DAT_00b46768 = *(undefined4 *)(DAT_00b43124 + 0x68);
  _DAT_00b4676c = *(undefined4 *)(DAT_00b43124 + 0x74);
  _DAT_00b46770 = *(undefined4 *)(DAT_00b43124 + 0x80);
  _DAT_00b46774 = 0;
  _DAT_00b46758 = *(undefined4 *)(DAT_00b43124 + 0x6c);
  _DAT_00b4675c = *(undefined4 *)(DAT_00b43124 + 0x78);
  _DAT_00b46760 = *(undefined4 *)(DAT_00b43124 + 0x84);
  _DAT_00b46764 = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f1200(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cfdb0;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00802540(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a92844;
  _eh_vector_constructor_iterator_(in_ECX + 0xdf,4,4,FUN_007c88a0,FUN_007016a0);
  local_4 = CONCAT31(local_4._1_3_,1);
  _eh_vector_constructor_iterator_(in_ECX + 0xe3,4,2,FUN_007c88a0,FUN_007016a0);
  in_ECX[0xe5] = 0;
  _memset(in_ECX + 0x1f,0,0x300);
  _DAT_00b46758 = 0x3f800000;
  _DAT_00b46764 = 0x3f800000;
  _DAT_00b4675c = 0x3f800000;
  _DAT_00b46760 = 0x3f800000;
  _DAT_00b46770 = 0x3f800000;
  _DAT_00b46768 = 0x3f800000;
  _DAT_00b4676c = 0x3f800000;
  _DAT_00b4677c = 0;
  _DAT_00b46774 = 0x3f800000;
  _DAT_00b46778 = 0;
  _DAT_00b46788 = 0;
  _DAT_00b46780 = 0;
  _DAT_00b46784 = 0;
  _DAT_00b46794 = 0;
  _DAT_00b4678c = 0;
  _DAT_00b46790 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007f1390(byte param_1)

{
  FUN_007f0250();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4
FUN_007f13b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x80))();
  FUN_007f0bc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_0076ce40(in_ECX[0xe],in_ECX + 0xe5);
  in_ECX[0xe] = in_ECX[0xe] + 1;
  return 0;
}



int * FUN_007f1410(void)

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
  puVar4 = (undefined4 *)FUN_00771090(DAT_00b43104,4,1);
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
  (**(code **)(*(int *)*piVar8 + 0x50))(1,3,3,2,0);
  (**(code **)(*(int *)*piVar8 + 0x50))(2,7,5,1,0);
  (**(code **)(*(int *)*piVar8 + 0x4c))(0,3,8,0x80000000,3,2,0,0);
  if ((int *)*piVar8 != (int *)0x0) {
    for (puVar6 = (undefined4 *)(**(code **)(*(int *)*piVar8 + 4))();
        (puVar6 != (undefined4 *)0x0 && (puVar6 != &DAT_00b3f684)); puVar6 = (undefined4 *)puVar6[1]
        ) {
    }
  }
  iVar3 = FUN_00401f00(0x398);
  if (iVar3 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_007f1200();
  }
  (**(code **)(*piVar7 + 0x84))();
  (**(code **)(*piVar7 + 0xa8))();
  FUN_007f09d0();
  (**(code **)(*piVar7 + 0x88))();
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



void FUN_007f16f0(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x18))
            ("TreeData",0x10000007,0,param_2,1,&DAT_00a2f7ec,0x10,4,&DAT_00b467a0,0);
  (**(code **)(*param_1 + 0x18))
            ("WindMatrices",0x10000009,0,param_2 + 1,0x10,&DAT_00a2f7ec,0x100,4,&DAT_00b467b8,0);
  return;
}



undefined4 FUN_007f1760(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  undefined4 *apuStack_58 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (3 < param_1) {
    return 0;
  }
  local_8 = 0;
  local_c = 0;
  apuStack_58[0] = &local_40;
  local_10 = 0;
  local_14 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_4 = 0x3f800000;
  local_18 = 0x3f800000;
  local_2c = 0x3f800000;
  local_40 = 0x3f800000;
  apuStack_58[3] = (undefined4 *)0x0;
  apuStack_58[2] = (undefined4 *)param_3;
  apuStack_58[1] = (undefined4 *)param_2;
  D3DXMatrixRotationYawPitchRoll();
  D3DXMatrixTranspose(apuStack_58 + 2,apuStack_58 + 2);
  ppuVar2 = apuStack_58;
  puVar3 = (undefined4 *)(&DAT_00b467b8 + param_1 * 0x40);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 1;
}



void FUN_007f1810(void)

{
  uint uVar1;
  void *_Dst;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cfdd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a929c0;
  _Dst = (void *)FUN_00401f00(0x300,uVar1);
  in_ECX[2] = _Dst;
  _memset(_Dst,0,0x300);
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007f18a0(void *param_1,uint param_2)

{
  int in_ECX;
  
  if (((param_1 != (void *)0x0) && (*(void **)(in_ECX + 8) != (void *)0x0)) && (param_2 != 0)) {
    if (0xbf < param_2) {
      param_2 = 0xc0;
    }
    _memcpy(*(void **)(in_ECX + 8),param_1,param_2 * 4);
    if (param_2 < 0xc0) {
      _memset((void *)(*(int *)(in_ECX + 8) + param_2 * 4),0,(0xc0 - param_2) * 4);
    }
  }
  return;
}



void FUN_007f1920(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a929c0;
  if (in_ECX[2] != 0) {
    FUN_00401f20(in_ECX[2]);
  }
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007f1960(undefined2 param_1,undefined4 param_2,undefined4 *param_3)

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
  puStack_8 = &LAB_009cfe16;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007f25a0(param_2);
  *in_ECX = &PTR_FUN_00a929cc;
  in_ECX[0x2a] = 0;
  puVar1 = (undefined4 *)in_ECX[0x2a];
  local_4 = 1;
  if (puVar1 == param_3) {
    *(undefined2 *)(in_ECX + 0x2b) = param_1;
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar2);
      }
    }
    in_ECX[0x2a] = param_3;
    if (param_3 == (undefined4 *)0x0) {
      *(undefined2 *)(in_ECX + 0x2b) = param_1;
    }
    else {
      InterlockedIncrement(param_3 + 1);
      *(undefined2 *)(in_ECX + 0x2b) = param_1;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007f1b70(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009cfe16;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a929cc;
  puVar1 = (undefined4 *)in_ECX[0x2a];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x2a] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x2a];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_007f2690(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007f1c30(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int in_ECX;
  
  thunk_FUN_007e2490(param_1,param_2);
  (**(code **)(*param_1 + 0x7c))(*(undefined4 *)(in_ECX + 0x9c));
  puVar1 = (undefined4 *)param_1[0x2a];
  if (puVar1 == *(undefined4 **)(in_ECX + 0xa8)) {
    *(undefined2 *)(param_1 + 0x2b) = *(undefined2 *)(in_ECX + 0xac);
    return;
  }
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0xa8);
  param_1[0x2a] = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 4));
    *(undefined2 *)(param_1 + 0x2b) = *(undefined2 *)(in_ECX + 0xac);
    return;
  }
  *(undefined2 *)(param_1 + 0x2b) = *(undefined2 *)(in_ECX + 0xac);
  return;
}



int * FUN_007f1ce0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0xb0,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    uVar3 = (**(code **)(*in_ECX + 0x9c))();
    uVar4 = (**(code **)(*in_ECX + 0x68))(uVar3);
    uVar5 = (**(code **)(*in_ECX + 0x98))(uVar4);
    piVar6 = (int *)FUN_007f1960(uVar5,uVar4,uVar3);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar6 + 0x7c))(in_ECX[0x27]);
  *unaff_FS_OFFSET = iVar2;
  return piVar6;
}



void FUN_007f1d90(byte param_1)

{
  FUN_007f1b70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_007f1db0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = (**(code **)(*in_ECX + 0x70))(uVar1);
  iVar3 = FUN_00401f00(0x2c);
  uStack_4 = 0;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_007e3ae0(iVar2,1);
  }
  uStack_4 = 0xffffffff;
  FUN_007263b0(1);
  iVar3 = iVar2 << 4;
  uVar6 = 0;
  uVar5 = (**(code **)(*in_ECX + 0x6c))(iVar3,0);
  FUN_007260b0(0,uVar5,iVar3,uVar6);
  FUN_007262a0(0,0,0,4,iVar2,0x10,0x10);
  *unaff_FS_OFFSET = local_c;
  return uVar4;
}



undefined4 FUN_007f1e60(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0xb0,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*in_ECX + 0x9c))();
    uVar4 = (**(code **)(*in_ECX + 0x68))(uVar3);
    uVar5 = (**(code **)(*in_ECX + 0x98))(uVar4);
    uVar3 = FUN_007f1960(uVar5,uVar4,uVar3);
  }
  local_4 = 0xffffffff;
  FUN_007f1c30(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



int FUN_007f1f00(undefined4 param_1,uint param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9f56;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar6 = (uint)DAT_00b42eac << 8 | param_2;
  if (DAT_00b42eac == 6) {
    iVar4 = in_ECX + 0x48;
    goto LAB_007f2014;
  }
  if (*(uint *)(in_ECX + 0x24) != param_2) {
    FUN_007e24c0(uVar3);
    iVar4 = FUN_007b4280(*(uint *)(in_ECX + 0x1c) >> 0x1c);
    uVar1 = *(undefined4 *)(iVar4 + 0x118);
    sVar2 = FUN_007ed600();
    if (sVar2 == 0) {
      param_2 = FUN_00401f00(0x10);
      local_4 = 0;
      if (param_2 == 0) {
LAB_007f1fea:
        param_1 = 0;
      }
      else {
        param_1 = FUN_007e2370(param_2,param_1,0xe,1,1,uVar1);
      }
    }
    else {
      uVar5 = FUN_007ed2a0();
      param_2 = FUN_00401f00(0x10);
      local_4 = 1;
      if (param_2 == 0) goto LAB_007f1fea;
      param_1 = FUN_007e2370(param_2,param_1,0xe,1,2,uVar1,uVar5);
    }
    local_4 = 0xffffffff;
    FUN_006aa320(&param_1);
    *(uint *)(in_ECX + 0x24) = uVar6;
  }
  *param_3 = 1;
  iVar4 = in_ECX + 0x28;
LAB_007f2014:
  *unaff_FS_OFFSET = local_c;
  return iVar4;
}



void FUN_007f2030(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_007f2420(param_1);
  *in_ECX = &PTR_FUN_00a92a94;
  return;
}



undefined4 * FUN_007f2070(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0xf4,uVar1);
  local_4 = 0;
  puVar4 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (**(code **)(*in_ECX + 0xa0))();
    FUN_007f2420(uVar3);
    *puVar2 = &PTR_FUN_00a92a94;
    puVar4 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



void FUN_007f2150(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a92a94;
  FUN_007f24e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_007f2180(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0xf4,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uVar3 = (**(code **)(*in_ECX + 0xa0))();
    FUN_007f2420(uVar3);
    *puVar2 = &PTR_FUN_00a92a94;
  }
  local_4 = 0xffffffff;
  FUN_007d7ad0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 FUN_007f2210(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar7;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c620b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    uVar1 = *(ushort *)(*(int *)(param_1 + 0xb4) + 8);
    uVar2 = (**(code **)(*in_ECX + 0xa8))(uVar3);
    if (uVar1 <= uVar2) {
      uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 0xb4) + 8);
      iVar4 = FUN_00401f00(0x2c);
      uStack_4 = 0;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_007e3ae0(uVar3,3);
      }
      uStack_4 = 0xffffffff;
      FUN_007263b0(3);
      FUN_007260b0(0,*(undefined4 *)(in_ECX[0x35] + 0xc),uVar3 * 0xc,0);
      FUN_007262a0(0,0,0,3,uVar3,0xc,0xc);
      FUN_007260b0(1,*(undefined4 *)(in_ECX[0x35] + 0x10),uVar3 * 0xc,0);
      FUN_007262a0(1,1,0,3,uVar3,0xc,0xc);
      iVar4 = uVar3 << 4;
      uVar7 = 0;
      uVar6 = (**(code **)(*in_ECX + 0xa4))(iVar4,0);
      FUN_007260b0(2,uVar6,iVar4,uVar7);
      FUN_007262a0(2,2,0,4,uVar3,0x10,0x10);
      goto LAB_007f233c;
    }
  }
  uVar5 = 0;
LAB_007f233c:
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}



void FUN_007f2360(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a92b6c;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  return;
}



void thunk_FUN_007d9890(void)

{
  FUN_007d9890();
  return;
}



void FUN_007f23d0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a92b6c;
  if ((in_ECX[2] != 0) && (*(short *)(in_ECX + 3) != 0)) {
    FUN_00401f20(in_ECX[2]);
  }
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007f2420(undefined4 *param_1)

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
  puStack_8 = &LAB_009cfe56;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007d94b0(uVar2);
  *in_ECX = &PTR_FUN_00a92b74;
  in_ECX[0x3c] = 0;
  puVar1 = (undefined4 *)in_ECX[0x3c];
  local_4 = 1;
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0x3c] = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007f24e0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009cfe56;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a92b74;
  puVar1 = (undefined4 *)in_ECX[0x3c];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x3c] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x3c];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_007d7490(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x007f25fb) */
/* WARNING: Removing unreachable block (ram,0x007f2609) */
/* WARNING: Removing unreachable block (ram,0x007f260d) */

void FUN_007f25a0(int param_1)

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
  puStack_8 = &LAB_009cfea4;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007ee440(uVar2);
  *in_ECX = &PTR_FUN_00a92c2c;
  in_ECX[0x27] = 0;
  in_ECX[0x29] = 0;
  local_4 = 2;
  if ((param_1 != 0) && (in_ECX[0x29] = param_1, param_1 != 0)) {
    InterlockedIncrement((LONG *)(param_1 + 4));
  }
  puVar1 = (undefined4 *)in_ECX[0x27];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x27] = 0;
  }
  in_ECX[0x28] = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007f2690(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cfee4;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a92c2c;
  puVar1 = (undefined4 *)in_ECX[0x29];
  local_4 = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x29] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x27];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x27] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x29];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x27];
  local_4 = (uint)local_4._1_3_ << 8;
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



void FUN_007f27a0(byte param_1)

{
  FUN_007f24e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007f27c0(byte param_1)

{
  FUN_007f2690();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f27e0(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *_Dst;
  int iVar3;
  undefined4 *in_ECX;
  int iVar4;
  float *pfVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cff08;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007e27f0(uVar1);
  *in_ECX = &PTR_FUN_00a92d0c;
  in_ECX[0x58] = 0;
  in_ECX[0x59] = 0;
  in_ECX[0x5a] = 0;
  local_4 = 0;
  in_ECX[0x5b] = 0;
  in_ECX[0x5c] = 0;
  in_ECX[0x5d] = 0;
  in_ECX[0x5e] = 0;
  in_ECX[0x5f] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x23] = 0;
  in_ECX[99] = 0;
  in_ECX[100] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = in_ECX[0x4e];
  *(undefined1 *)(in_ECX + 0x60) = 0;
  *(undefined1 *)((int)in_ECX + 0x182) = 1;
  *(undefined1 *)((int)in_ECX + 0x183) = 1;
  in_ECX[0x1e] = 0;
  in_ECX[0x20] = 4;
  uVar2 = FUN_007f3760();
  in_ECX[0x54] = 0x3f800000;
  in_ECX[0x53] = uVar2;
  in_ECX[0x55] = 0x3f800000;
  uVar2 = DAT_00b2dc90;
  in_ECX[0x57] = 0x3f800000;
  in_ECX[0x56] = uVar2;
  in_ECX[0x4e] = 0x45000000;
  in_ECX[0x4d] = 1;
  in_ECX[0x65] = 0;
  in_ECX[0x4f] = 0x42c80000;
  in_ECX[0x50] = 0x40400000;
  in_ECX[0x51] = 0x40400000;
  in_ECX[0x52] = 0x3f800000;
  in_ECX[0x58] = DAT_00b25ae0;
  in_ECX[0x59] = DAT_00b25ae4;
  in_ECX[0x5a] = DAT_00b25ae8;
  in_ECX[0x5b] = DAT_00b25aec;
  in_ECX[0x5c] = DAT_00b25ae0;
  in_ECX[0x5d] = DAT_00b25ae4;
  in_ECX[0x5e] = DAT_00b25ae8;
  in_ECX[0x5f] = DAT_00b25aec;
  *(undefined1 *)((int)in_ECX + 0x181) = 1;
  FUN_007f3790();
  in_ECX[0x61] = 0;
  uVar1 = FUN_007f3760();
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)uVar1 * 0x10 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar1 * 0x10));
  in_ECX[0x1b] = _Dst;
  _memset(_Dst,0,uVar1 << 4);
  iVar4 = 0x28;
  pfVar5 = (float *)(in_ECX + 0x25);
  do {
    iVar3 = _rand();
    iVar4 = iVar4 + -1;
    *pfVar5 = (float)iVar3 / 32767.0;
    pfVar5 = pfVar5 + 1;
  } while (iVar4 != 0);
  _DAT_00b468e8 = _DAT_00b468e8 + 1;
  in_ECX[0x66] = 0x3f800000;
  in_ECX[0x65] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f2a30(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cff38;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a92d0c;
  local_4 = 0;
  FUN_00401f20(in_ECX[0x1b],uVar1);
  _DAT_00b468e8 = _DAT_00b468e8 + -1;
  if (_DAT_00b468e8 == 0) {
    FUN_007f3870();
  }
  local_4 = 0xffffffff;
  FUN_007e2650();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007f2ab0(float param_1)

{
  float *pfVar1;
  int in_ECX;
  int iVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = *(char *)(in_ECX + 0x180);
  iVar4 = *(int *)(in_ECX + 0x84);
LAB_007f2ac3:
  do {
    if ((cVar3 != '\0') && (iVar4 < *(int *)(in_ECX + 0x14c))) goto LAB_007f2ad7;
    do {
      if (*(int *)(in_ECX + 0x88) < iVar4) {
        return;
      }
LAB_007f2ad7:
      iVar2 = 0;
      if (0 < *(int *)(in_ECX + 0x134)) {
        do {
          pfVar1 = (float *)((*(int *)(in_ECX + 0x14c) * iVar2 + iVar4) * 0x10 + 4 +
                            *(int *)(in_ECX + 0x6c));
          iVar2 = iVar2 + 1;
          *pfVar1 = param_1 + *pfVar1;
        } while (iVar2 < *(int *)(in_ECX + 0x134));
      }
      iVar4 = iVar4 + 1;
      if (iVar4 < *(int *)(in_ECX + 0x14c)) goto LAB_007f2ac3;
    } while (cVar3 == '\0');
    iVar4 = 0;
    cVar3 = '\0';
  } while( true );
}



int FUN_007f2b30(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(in_ECX + 0x14c);
  iVar2 = param_1 % iVar1;
  *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) - iVar2;
  if (*(char *)(in_ECX + 0x180) != '\0') {
    if (*(int *)(in_ECX + 0x88) < 0) {
      *(int *)(in_ECX + 0x84) = *(int *)(in_ECX + 0x84) + iVar1;
      *(undefined1 *)(in_ECX + 0x180) = 0;
    }
    if (*(char *)(in_ECX + 0x180) != '\0') {
      *(int *)(in_ECX + 400) = *(int *)(in_ECX + 400) - iVar2;
      return param_1 / iVar1;
    }
  }
  iVar1 = *(int *)(in_ECX + 0x84);
  *(int *)(in_ECX + 400) = *(int *)(in_ECX + 400) - iVar2;
  if (iVar1 < *(int *)(in_ECX + 0x88)) {
    return iVar1;
  }
  *(int *)(in_ECX + 0x88) = iVar1;
  return iVar1;
}



void FUN_007f2ba0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x14c);
  *(int *)(in_ECX + 0x84) = *(int *)(in_ECX + 0x84) + param_1 % iVar1;
  if ((*(char *)(in_ECX + 0x180) != '\0') && (iVar1 <= *(int *)(in_ECX + 0x84))) {
    *(int *)(in_ECX + 0x84) = *(int *)(in_ECX + 0x84) - iVar1;
    *(undefined1 *)(in_ECX + 0x180) = 0;
  }
  *(int *)(in_ECX + 400) = *(int *)(in_ECX + 400) - param_1 % iVar1;
  if ((*(char *)(in_ECX + 0x180) == '\0') && (*(int *)(in_ECX + 0x88) <= *(int *)(in_ECX + 0x84))) {
    *(int *)(in_ECX + 0x84) = *(int *)(in_ECX + 0x88);
  }
  return;
}



void FUN_007f2c00(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int in_ECX;
  float10 fVar14;
  float local_2c;
  float local_28;
  float local_24;
  
  iVar9 = *(int *)(in_ECX + 0x14c) * param_1;
  iVar13 = *(int *)(in_ECX + 0x6c);
  iVar10 = (iVar9 + param_3) * 0x10;
  fVar3 = *(float *)(iVar10 + iVar13);
  iVar10 = iVar10 + iVar13;
  fVar4 = *(float *)(iVar10 + 4);
  fVar5 = *(float *)(iVar10 + 8);
  iVar10 = *(int *)(in_ECX + 0x14c);
  iVar11 = (iVar10 * param_1 + param_4) * 0x10;
  pfVar12 = (float *)(iVar11 + iVar13);
  local_2c = fVar3 - *pfVar12;
  local_28 = fVar4 - *(float *)(iVar11 + 4 + iVar13);
  local_24 = fVar5 - pfVar12[2];
  if (local_28 < 0.0) {
    local_2c = DAT_00b3f9a8;
    local_28 = DAT_00b3f9ac;
    local_24 = DAT_00b3f9b0;
  }
  FUN_0043f350();
  fVar1 = *(float *)(in_ECX + 0x150);
  fVar6 = (float)param_2 / (float)iVar10;
  iVar13 = _rand();
  iVar10 = (iVar9 + param_2) * 0x10;
  *(float *)(iVar10 + *(int *)(in_ECX + 0x6c)) =
       (fVar1 * local_2c + fVar3 + *(float *)(in_ECX + 0x154) * ((float)iVar13 / 32767.0)) -
       *(float *)(in_ECX + 0x154) * 0.5;
  *(float *)(*(int *)(in_ECX + 0x6c) + 4 + iVar10) = fVar1 * (local_28 + 1.0) + fVar4;
  iVar13 = _rand();
  *(float *)(*(int *)(in_ECX + 0x6c) + 8 + iVar10) =
       (fVar1 * local_24 + fVar5 + *(float *)(in_ECX + 0x154) * ((float)iVar13 / 32767.0)) -
       *(float *)(in_ECX + 0x154) * 0.5;
  fVar3 = *(float *)(in_ECX + 0x70);
  pfVar12 = (float *)(*(int *)(in_ECX + 0x6c) + iVar10);
  fVar4 = *pfVar12;
  fVar5 = *(float *)(in_ECX + 0x78);
  fVar1 = pfVar12[2];
  fVar14 = (float10)FUN_00982c30();
  fVar2 = (float)fVar14;
  if (fVar2 <= *(float *)(in_ECX + 0x13c)) {
    return;
  }
  fVar8 = fVar2 - *(float *)(in_ECX + 0x13c);
  fVar7 = (*(float *)(in_ECX + 0x140) * fVar8) / fVar2;
  if (*(float *)(in_ECX + 0x13c) < ABS(fVar7 * fVar2)) {
    fVar7 = fVar8 / fVar2;
  }
  pfVar12 = (float *)(*(int *)(in_ECX + 0x6c) + iVar10);
  *pfVar12 = *pfVar12 + (fVar6 * fVar3 - fVar4) * fVar7;
  *(float *)(*(int *)(in_ECX + 0x6c) + 8 + iVar10) =
       *(float *)(*(int *)(in_ECX + 0x6c) + 8 + iVar10) + fVar7 * (fVar6 * fVar5 - fVar1);
  return;
}



void FUN_007f2ec0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  float10 extraout_ST0;
  float10 fVar5;
  
  iVar1 = FUN_007f3760();
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  iVar4 = *(int *)(in_ECX + 0x134) * *(int *)(in_ECX + 0x14c);
  *(undefined1 *)(in_ECX + 0x180) = 0;
  if (iVar1 < iVar4) {
    FUN_00987c00((double)((float)(iVar4 - iVar1) / (float)*(int *)(in_ECX + 0x14c)));
    uVar2 = FUN_009828c0();
    *(undefined4 *)(in_ECX + 0x134) = uVar2;
  }
  iVar1 = 4;
  if (*(int *)(in_ECX + 0x14c) < 5) {
    iVar1 = *(int *)(in_ECX + 0x14c);
  }
  iVar4 = *(int *)(in_ECX + 0x134);
  *(int *)(in_ECX + 0x80) = iVar1;
  uVar2 = FUN_009828c0();
  iVar1 = 0;
  *(undefined4 *)(in_ECX + 0x8c) = uVar2;
  if (0 < iVar4) {
    iVar4 = 0;
    fVar5 = extraout_ST0;
    do {
      if (*(char *)(in_ECX + 0x183) == '\0') {
        iVar3 = _rand();
        *(float *)(iVar4 + *(int *)(in_ECX + 0x6c)) =
             ((float)iVar3 / 32767.0) * *(float *)(in_ECX + 0x13c) -
             *(float *)(in_ECX + 0x13c) * 0.5;
        iVar3 = _rand();
        *(float *)(*(int *)(in_ECX + 0x6c) + 4 + iVar4) =
             ((float)iVar3 / 32767.0) * *(float *)(in_ECX + 0x13c) -
             *(float *)(in_ECX + 0x13c) * 0.5;
        iVar3 = _rand();
        *(float *)(*(int *)(in_ECX + 0x6c) + 8 + iVar4) =
             ((float)iVar3 / 32767.0) * *(float *)(in_ECX + 0x13c) -
             *(float *)(in_ECX + 0x13c) * 0.5;
        fVar5 = (float10)0;
      }
      else {
        *(float *)(iVar4 + *(int *)(in_ECX + 0x6c)) = (float)fVar5;
        *(float *)(*(int *)(in_ECX + 0x6c) + 4 + iVar4) = (float)fVar5;
        *(float *)(*(int *)(in_ECX + 0x6c) + 8 + iVar4) = (float)fVar5;
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar1 < *(int *)(in_ECX + 0x134));
  }
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  return;
}



void FUN_007f3090(byte param_1)

{
  FUN_007f2a30();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_007f30b0(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x19c,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_007f27e0();
  }
  local_4 = 0xffffffff;
  FUN_007e2490(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_007f3130(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  if (0 < param_1) {
    do {
      *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + 1;
      iVar4 = *(int *)(in_ECX + 0x14c);
      if (iVar4 <= *(int *)(in_ECX + 0x88)) {
        *(undefined4 *)(in_ECX + 0x88) = 0;
      }
      iVar1 = *(int *)(in_ECX + 0x88);
      if (iVar1 == *(int *)(in_ECX + 0x84)) {
        iVar2 = *(int *)(in_ECX + 0x84) + 1;
        *(int *)(in_ECX + 0x84) = iVar2;
        if (iVar4 <= iVar2) {
          *(int *)(in_ECX + 0x84) = iVar2 - iVar4;
        }
      }
      iVar4 = 0;
      *(bool *)(in_ECX + 0x180) = iVar1 < *(int *)(in_ECX + 0x84);
      if (0 < *(int *)(in_ECX + 0x134)) {
        do {
          if (iVar1 == 0) {
            if (*(char *)(in_ECX + 0x180) == '\0') {
              iVar2 = 0;
            }
            else {
              iVar2 = *(int *)(in_ECX + 0x14c) + -1;
            }
          }
          else {
            iVar2 = iVar1 + -1;
          }
          iVar3 = *(int *)(in_ECX + 0x80);
          if (iVar1 < iVar3) {
            if (*(char *)(in_ECX + 0x180) == '\0') {
              iVar3 = 0;
            }
            else {
              iVar3 = (*(int *)(in_ECX + 0x14c) - iVar3) + iVar1;
            }
          }
          else {
            iVar3 = iVar1 - iVar3;
          }
          FUN_007f2c00(iVar4,iVar1,iVar2,iVar3);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(in_ECX + 0x134));
      }
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}



void FUN_007f3220(float param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  
  *(float *)(in_ECX + 0x7c) = param_1 + *(float *)(in_ECX + 0x7c);
  FUN_00987c00((double)((param_2 - *(float *)(in_ECX + 0x90)) / *(float *)(in_ECX + 0x150)));
  iVar2 = FUN_009828c0();
  *(float *)(in_ECX + 0x90) = (float)iVar2 * *(float *)(in_ECX + 0x150) + *(float *)(in_ECX + 0x90);
  FUN_007f3130();
  fVar1 = (float)*(int *)(in_ECX + 0x14c) * *(float *)(in_ECX + 0x150);
  if (*(float *)(in_ECX + 0x90) < fVar1) {
    fVar1 = *(float *)(in_ECX + 0x90);
  }
  fVar1 = *(float *)(in_ECX + 0x90) - fVar1;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  *(int *)(in_ECX + 0x194) = *(int *)(in_ECX + 0x194) + iVar2;
  *(float *)(in_ECX + 0x18c) = fVar1;
  return;
}



void FUN_007f3300(float param_1,float param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  int in_ECX;
  float10 fVar3;
  
  if (0.1 < param_1) {
    param_1 = 0.1;
  }
  FUN_007f2ab0(param_1 * param_3);
  fVar3 = (float10)param_2;
  if (fVar3 < (float10)*(float *)(in_ECX + 0x150)) {
    fVar3 = (float10)*(float *)(in_ECX + 0x150);
  }
  *(undefined4 *)(in_ECX + 0x90) =
       *(undefined4 *)(*(int *)(in_ECX + 0x88) * 0x10 + 4 + *(int *)(in_ECX + 0x6c));
  fVar1 = *(float *)(*(int *)(in_ECX + 0x84) * 0x10 + 4 + *(int *)(in_ECX + 0x6c));
  *(float *)(in_ECX + 0x18c) = fVar1;
  if (fVar1 <= -*(float *)(in_ECX + 0x150)) {
    uVar2 = FUN_009828c0();
    fVar3 = (float10)FUN_007f2ba0(uVar2);
    *(undefined4 *)(in_ECX + 0x18c) =
         *(undefined4 *)(*(int *)(in_ECX + 0x84) * 0x10 + 4 + *(int *)(in_ECX + 0x6c));
  }
  if (fVar3 <= (float10)*(float *)(in_ECX + 0x90)) {
    if ((float10)*(float *)(in_ECX + 0x90) < fVar3 + (float10)*(float *)(in_ECX + 0x150)) {
      return;
    }
    uVar2 = FUN_009828c0();
    FUN_007f2b30(uVar2);
    *(undefined4 *)(in_ECX + 0x90) =
         *(undefined4 *)(*(int *)(in_ECX + 0x88) * 0x10 + 4 + *(int *)(in_ECX + 0x6c));
    return;
  }
  uVar2 = FUN_009828c0();
  FUN_007f3130(uVar2);
  *(undefined4 *)(in_ECX + 0x90) =
       *(undefined4 *)(*(int *)(in_ECX + 0x88) * 0x10 + 4 + *(int *)(in_ECX + 0x6c));
  return;
}



int FUN_007f3470(undefined4 param_1)

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
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x34) == 0) {
    iVar2 = FUN_00401f00(0x10,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_007e2370(iVar2,param_1,0x17f,1,0,0);
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
  *unaff_FS_OFFSET = local_c;
  return in_ECX + 0x28;
}



void FUN_007f3530(float param_1,undefined4 param_2,float param_3,char param_4)

{
  int iVar1;
  int in_ECX;
  
  if (param_4 == '\0') {
    FUN_007f3220(param_1,param_2);
    return;
  }
  iVar1 = FUN_009828c0();
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  FUN_007f2ba0(iVar1);
  *(float *)(in_ECX + 0x18c) = *(float *)(in_ECX + 0x18c) + param_1 * param_3;
  return;
}



void FUN_007f35a0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007e28e0(param_1);
  param_1 = FUN_0070f910(DAT_00b468ec);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_007f35f0(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa8))();
                    /* WARNING: Could not recover jumptable at 0x007f3608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0xac))();
  return;
}



void FUN_007f3610(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8)

{
  int in_ECX;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined1 local_24 [36];
  
  FUN_007103c0(local_24);
  local_34 = DAT_00b46658;
  local_30 = DAT_00b4665c;
  local_2c = DAT_00b46660;
  local_54 = 1.0 / *(float *)(param_7 + 0x30);
  local_28 = DAT_00b46664;
  local_50 = -*(float *)(param_7 + 0x24) + DAT_00b46658;
  local_4c = -*(float *)(param_7 + 0x28) + DAT_00b4665c;
  local_48 = -*(float *)(param_7 + 0x2c) + DAT_00b46660;
  local_5c = local_54 * local_50;
  local_58 = local_4c * local_54;
  local_54 = local_54 * local_48;
  FUN_007101f0(&local_40,&local_5c);
  local_50 = (float)local_40;
  *(undefined4 *)(in_ECX + 0x128) = local_40;
  local_4c = (float)local_3c;
  *(undefined4 *)(in_ECX + 300) = local_3c;
  local_48 = (float)local_38;
  local_44 = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x130) = local_38;
  *(undefined4 *)(in_ECX + 0x134) = 0x3f800000;
  FUN_00779710(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void FUN_007f3760(void)

{
  if (DAT_00b468fc == 0) {
    DAT_00b468fc = ((DAT_00b42f48 < 2) - 1 & 0xa0) + 0x4b;
  }
  return;
}



int FUN_007f3790(void)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_00b468f8 == 0) {
    if (DAT_00b468fc == 0) {
      DAT_00b468fc = ((DAT_00b42f48 < 2) - 1 & 0xa0) + 0x4b;
    }
    uVar6 = DAT_00b468fc * DAT_00b2dc90;
    lVar1 = (ulonglong)(uVar6 * 4) * 4;
    DAT_00b468f8 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    uVar5 = 0;
    if (uVar6 != 0) {
      pfVar4 = (float *)(DAT_00b468f8 + 8);
      do {
        fVar2 = (float)(int)uVar5;
        if ((int)uVar5 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        uVar5 = uVar5 + 1;
        fVar3 = fVar2 / (float)DAT_00b2dc90;
        fVar2 = (fVar2 + 1.0) / (float)DAT_00b2dc90;
        pfVar4[-2] = fVar3;
        pfVar4[-1] = fVar3;
        *pfVar4 = fVar2;
        pfVar4[1] = fVar2;
        pfVar4 = pfVar4 + 4;
      } while (uVar5 < uVar6);
    }
  }
  return DAT_00b468f8;
}



void FUN_007f3870(void)

{
  if (DAT_00b468f8 != 0) {
    FUN_00401f20(DAT_00b468f8);
  }
  DAT_00b468f8 = 0;
  return;
}



void FUN_007f3890(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong lVar3;
  float fVar4;
  uint uVar5;
  LONG LVar6;
  void *_Dst;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  int iStack_20;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cff92;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00802540(uVar5);
  *in_ECX = &PTR_FUN_00a92d8c;
  in_ECX[0x4a] = 0;
  in_ECX[0x4b] = 0;
  in_ECX[0x4c] = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x5e] = 0;
  in_ECX[0x5f] = 0;
  in_ECX[0x60] = 0;
  in_ECX[0x61] = 0;
  in_ECX[0x62] = 0;
  in_ECX[99] = 0;
  in_ECX[100] = 0;
  in_ECX[0x65] = 0;
  in_ECX[0x66] = 0;
  in_ECX[0x67] = 0;
  in_ECX[0x68] = 0;
  *(undefined1 *)(in_ECX + 8) = 1;
  in_ECX[0x1f] = 0x17f;
  local_4 = 3;
  if (in_ECX[0x5e] != 0) {
    piVar1 = (int *)(in_ECX[0x5e] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0x5e] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[9];
  if (puVar2 != param_1) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar2 + 1), LVar6 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)();
    }
    in_ECX[9] = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x67];
  if (puVar2 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar2 + 1);
    if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)();
    }
    in_ECX[0x67] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x68];
  if (puVar2 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar2 + 1);
    if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)();
    }
    in_ECX[0x68] = 0;
  }
  in_ECX[0x21] = 0;
  in_ECX[0x4a] = 0;
  in_ECX[0x4b] = 0;
  in_ECX[0x4c] = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x5f] = DAT_00b25ae0;
  in_ECX[0x60] = DAT_00b25ae4;
  in_ECX[0x61] = DAT_00b25ae8;
  in_ECX[0x62] = DAT_00b25aec;
  in_ECX[99] = DAT_00b25ae0;
  in_ECX[100] = DAT_00b25ae4;
  in_ECX[0x65] = DAT_00b25ae8;
  in_ECX[0x66] = DAT_00b25aec;
  if (DAT_00b468fc == 0) {
    DAT_00b468fc = ((DAT_00b42f48 < 2) - 1 & 0xa0) + 0x4b;
  }
  fVar4 = (float)DAT_00b468fc;
  if (DAT_00b468fc < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  fVar7 = (float10)FUN_00987c00((double)(fVar4 * 0.25));
  iStack_20 = (int)(longlong)ROUND((float)fVar7);
  lVar3 = (ulonglong)(uint)(iStack_20 * 4) * 0x10;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
  in_ECX[0x20] = _Dst;
  _memset(_Dst,0,iStack_20 << 6);
  _memset(in_ECX + 0x4e,0,0x40);
  _memset(in_ECX + 0x22,0,0xa0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007f3ba0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b4690c;
  if (DAT_00b4690c != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b4690c + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b4690c = (undefined4 *)0x0;
  }
  return;
}



void FUN_007f3be0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x19c) + 0x5c))();
    (**(code **)(**(int **)(in_ECX + 0x1a0) + 0x44))();
  }
  FUN_0077a4a0();
  return;
}



void FUN_007f3c10(void)

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
  puVar1 = (undefined4 *)(in_ECX + 0x30);
  if (*(int *)(in_ECX + 0x30) == 0) {
    iVar3 = FUN_00401f00(0x34,uVar2);
    local_4 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_009a8490(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar4);
    (**(code **)(*(int *)*puVar1 + 0x18))("WorldViewProjTranspose",0x20000009,0,0,4,0,0,0,0,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("fVars",0x10000009,0,4,4,&DAT_00a2f7ec,0x40,4,in_ECX + 0x138,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("EyePosition",0x10000007,0,8,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x128,0);
    if (DAT_00b468fc == 0) {
      DAT_00b468fc = ((DAT_00b42f48 < 2) - 1 & 0xa0) + 0x4b;
    }
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("bolt data",0x10000009,0,0xe,DAT_00b468fc,&DAT_00a2f7ec,DAT_00b468fc << 4,4,
               *(undefined4 *)(in_ECX + 0x80),0);
  }
  if (*(int *)(in_ECX + 0x2c) == 0) {
    iVar3 = FUN_00401f00(0x34,uVar2);
    local_4 = 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_009a4750(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar4);
    (**(code **)(**(int **)(in_ECX + 0x2c) + 0x18))
              ("CoreColor",0x10000007,0,0,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x17c,0);
    (**(code **)(**(int **)(in_ECX + 0x2c) + 0x18))
              ("GlowColor",0x10000007,0,1,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x18c,0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



uint * FUN_007f3e00(void)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint *puVar9;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0cb6;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = FUN_00401f00(8,uVar3);
  puVar9 = (uint *)0x0;
  local_4 = 0;
  if (iVar4 != 0) {
    puVar9 = (uint *)FUN_007aed00();
  }
  local_4 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_00771090(DAT_00b43104,5,1);
  puVar7 = (undefined4 *)*puVar9;
  if (puVar7 != puVar5) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar7 + 1), LVar6 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *puVar9 = (uint)puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  (**(code **)(*(int *)*puVar9 + 0x50))(0,0,0,2,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(1,3,3,2,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(2,5,4,3,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(3,7,5,1,0);
  (**(code **)(*(int *)*puVar9 + 0x4c))(0,4,6,0x80000000,0,10,1,0);
  piVar8 = (int *)*puVar9;
  uVar3 = 0;
  if (piVar8 != (int *)0x0) {
    for (puVar7 = (undefined4 *)(**(code **)(*piVar8 + 4))(); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[1]) {
      if (puVar7 == &DAT_00b3f684) {
        bVar2 = 1;
        goto LAB_007f3f22;
      }
    }
    bVar2 = 0;
LAB_007f3f22:
    uVar3 = -(uint)bVar2 & (uint)piVar8;
  }
  iVar4 = FUN_00401f00(0x1a4);
  if (iVar4 == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)FUN_007f3890(uVar3);
  }
  (**(code **)(*piVar8 + 0x84))();
  (**(code **)(*piVar8 + 0xa8))();
  (**(code **)(*piVar8 + 0xac))();
  (**(code **)(*piVar8 + 0x88))();
  piVar1 = (int *)puVar9[1];
  if (piVar1 != piVar8) {
    if (((piVar1 != (int *)0x0) && (LVar6 = InterlockedDecrement(piVar1 + 1), LVar6 == 0)) &&
       (piVar1 != (int *)0x0)) {
      (**(code **)*piVar1)(1);
    }
    puVar9[1] = (uint)piVar8;
    InterlockedIncrement(piVar8 + 1);
  }
  (**(code **)(*(int *)puVar9[1] + 0x54))(*puVar9);
  *unaff_FS_OFFSET = iVar4;
  return puVar9;
}



void FUN_007f4190(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint3 uVar4;
  uint uVar5;
  int *piVar6;
  LONG LVar7;
  undefined4 uVar8;
  int in_ECX;
  int iVar9;
  int *unaff_FS_OFFSET;
  int local_18;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cf688;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_18 = 0;
  iVar1 = *(int *)(in_ECX + 0x178);
  local_4._1_3_ = 0;
  uVar4 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar9 = 0;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) + 1;
    iVar9 = iVar1;
  }
  if (*(int *)(iVar9 + 0x18) == 0) {
    piVar6 = (int *)FUN_00772630(&local_10,uVar5);
    iVar1 = *piVar6;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x5c) + 1;
      local_18 = iVar1;
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar9 + 0x14),local_18);
    uVar4 = local_4._1_3_;
  }
  local_4._1_3_ = uVar4;
  puVar2 = *(undefined4 **)(in_ECX + 0x19c);
  puVar3 = *(undefined4 **)(iVar9 + 0x58);
  if (puVar3 != puVar2) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar9 + 0x58) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x1a0);
  puVar3 = *(undefined4 **)(iVar9 + 0x44);
  if (puVar3 != puVar2) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar9 + 0x44) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x16,1,0);
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x34,0,0);
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xe,0,0);
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_18 != 0) {
    piVar6 = (int *)(local_18 + 0x5c);
    *piVar6 = *piVar6 + -1;
    if (*piVar6 == 0) {
      FUN_00772560();
    }
  }
  piVar6 = (int *)(iVar9 + 0x60);
  *piVar6 = *piVar6 + -1;
  local_4 = 0xffffffff;
  if (*piVar6 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007f4420(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  LONG LVar5;
  uint uVar6;
  bool bVar7;
  
  piVar2 = param_1;
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    uVar6 = 0;
    if ((short)param_1[0x2e] != 0) {
      do {
        if ((uVar6 < *(ushort *)((int)piVar2 + 0xb6)) && (*(int *)(piVar2[0x2c] + uVar6 * 4) != 0))
        {
          piVar3 = (int *)FUN_00707530(4);
          if (piVar3 == (int *)0x0) {
            bVar7 = false;
          }
          else {
            iVar4 = (**(code **)(*piVar3 + 0x54))();
            bVar7 = iVar4 == 0xd;
          }
        }
        else {
          piVar3 = (int *)0x0;
          bVar7 = false;
        }
        if (((((-(uint)bVar7 & (uint)piVar3) != 0) && ((-(uint)bVar7 & (uint)piVar3) == param_2)) &&
            ((**(code **)(*piVar2 + 0x8c))(&param_1,uVar6), piVar3 = param_1, param_1 != (int *)0x0)
            ) && ((LVar5 = InterlockedDecrement(param_1 + 1), LVar5 == 0 && (piVar3 != (int *)0x0)))
           ) {
          (**(code **)*piVar3)(1);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(piVar2 + 0x2e));
    }
    puVar1 = DAT_00b4690c;
    DAT_00b46900 = DAT_00b46900 + -1;
    if (DAT_00b46900 < 1) {
      if (DAT_00b4690c != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(DAT_00b4690c + 1);
        if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        DAT_00b4690c = (undefined4 *)0x0;
      }
      DAT_00b46900 = 0;
    }
  }
  return;
}



void FUN_007f4560(void)

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
  
  puStack_8 = &LAB_009cffe2;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a92d8c;
  puVar2 = DAT_00b4690c;
  local_4 = 3;
  if (DAT_00b4690c != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(DAT_00b4690c + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_00b4690c = (undefined4 *)0x0;
  }
  FUN_00401f20(in_ECX[0x20],uVar3);
  in_ECX[0x20] = 0;
  if (in_ECX[0x5e] != 0) {
    piVar1 = (int *)(in_ECX[0x5e] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0x5e] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x67];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x67] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x68];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x68] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x68];
  local_4._0_1_ = 2;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x67];
  local_4._0_1_ = 1;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (in_ECX[0x5e] != 0) {
    piVar1 = (int *)(in_ECX[0x5e] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
  }
  local_4 = 0xffffffff;
  FUN_008012e0();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_007f46e0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d1138;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x178) == 0) {
    local_10 = in_ECX;
    piVar4 = (int *)FUN_007606a0(&local_10,uVar3);
    iVar2 = *(int *)(in_ECX + 0x178);
    local_4 = 0;
    if (iVar2 != *piVar4) {
      if (iVar2 != 0) {
        piVar1 = (int *)(iVar2 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
      }
      iVar2 = *piVar4;
      *(int *)(in_ECX + 0x178) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
      }
    }
    local_4 = 0xffffffff;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x60) = *(int *)(local_10 + 0x60) + -1, *(int *)(local_10 + 0x60) == 0))
    {
      FUN_007604d0();
    }
  }
  FUN_007f4190();
  *unaff_FS_OFFSET = local_c;
  return 1;
}



undefined4 FUN_007f4790(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int *in_ECX;
  uint uVar5;
  bool bVar6;
  int in_stack_00000010;
  
  (**(code **)(*in_ECX + 0x80))();
  piVar1 = *(int **)(in_stack_00000010 + 0x18);
  if (piVar1 == (int *)0x0) {
    bVar6 = false;
  }
  else {
    iVar3 = (**(code **)(*piVar1 + 0x54))();
    bVar6 = iVar3 == 0xd;
  }
  uVar5 = -(uint)bVar6 & (uint)piVar1;
  if (uVar5 != 0) {
    iVar3 = **(int **)(in_ECX[0x5e] + 0x24);
    puVar2 = *(undefined4 **)(iVar3 + 4);
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    FUN_007715e0(3);
    in_ECX[0x4e] = *(int *)(uVar5 + 0x7c);
    in_ECX[0x4f] = (int)((float)*(int *)(uVar5 + 0x134) * (float)*(int *)(uVar5 + 0x14c));
    in_ECX[0x50] = (int)(float)*(int *)(uVar5 + 0x14c);
    in_ECX[0x51] = *(int *)(uVar5 + 0x154);
    in_ECX[0x52] = (int)(float)*(int *)(uVar5 + 0x84);
    in_ECX[0x53] = (int)(float)*(int *)(uVar5 + 0x88);
    in_ECX[0x54] = *(int *)(uVar5 + 0x144);
    in_ECX[0x55] = *(int *)(uVar5 + 0x148);
    if (*(char *)(uVar5 + 0x180) == '\0') {
      iVar3 = 0x3f800000;
    }
    else {
      iVar3 = -0x40800000;
    }
    in_ECX[0x56] = iVar3;
    in_ECX[0x57] = *(int *)(uVar5 + 0x198);
    in_ECX[0x58] = *(int *)(uVar5 + 0x18c);
    in_ECX[0x59] = *(int *)(uVar5 + 0x90);
    in_ECX[0x5f] = *(int *)(uVar5 + 0x160);
    in_ECX[0x60] = *(int *)(uVar5 + 0x164);
    in_ECX[0x61] = *(int *)(uVar5 + 0x168);
    in_ECX[0x62] = *(int *)(uVar5 + 0x16c);
    in_ECX[99] = *(int *)(uVar5 + 0x170);
    in_ECX[100] = *(int *)(uVar5 + 0x174);
    in_ECX[0x65] = *(int *)(uVar5 + 0x178);
    in_ECX[0x66] = *(int *)(uVar5 + 0x17c);
    if (DAT_00b468fc == 0) {
      DAT_00b468fc = ((DAT_00b42f48 < 2) - 1 & 0xa0) + 0x4b;
    }
    _memcpy((void *)in_ECX[0x20],*(void **)(uVar5 + 0x6c),DAT_00b468fc << 4);
    FUN_0076ce40(in_ECX[0xe],in_ECX + 0x5e);
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  return 0;
}



undefined4 * FUN_007f4970(void)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  undefined4 *puVar10;
  short *psVar11;
  short sVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int *unaff_FS_OFFSET;
  undefined4 uVar16;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0021;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffa0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar10 = DAT_00b4690c;
  if (DAT_00b4690c == (undefined4 *)0x0) {
    if (DAT_00b468fc == 0) {
      DAT_00b468fc = ((DAT_00b42f48 < 2) - 1 & 0xa0) + 0x4b;
    }
    if ((short)DAT_00b468fc == 0) {
      *unaff_FS_OFFSET = local_c;
      return (undefined4 *)0x0;
    }
    iVar13 = (DAT_00b468fc & 0xffff) * DAT_00b2dc90;
    uVar1 = iVar13 * 4;
    iVar4 = FUN_00401f00(-(uint)((int)((ulonglong)uVar1 * 0xc >> 0x20) != 0) |
                         (uint)((ulonglong)uVar1 * 0xc),uVar3);
    lVar2 = (ulonglong)(uint)(iVar13 * 6) * 2;
    iVar5 = FUN_00401f00(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
    if (iVar13 != 0) {
      psVar11 = (short *)(iVar5 + 4);
      puVar10 = (undefined4 *)(iVar4 + 0x18);
      sVar12 = 0;
      iVar15 = iVar13;
      do {
        puVar10[-6] = 0xbf800000;
        puVar10[-5] = 0xbf800000;
        puVar10[-3] = 0x3f800000;
        puVar10[-2] = 0xbf800000;
        puVar10[-1] = 0;
        *puVar10 = 0x3f800000;
        puVar10[1] = 0x3f800000;
        puVar10[2] = 0;
        puVar10[3] = 0xbf800000;
        puVar10[4] = 0x3f800000;
        puVar10[5] = 0;
        puVar10[-4] = 0;
        psVar11[-1] = sVar12 + 1;
        psVar11[-2] = sVar12;
        psVar11[2] = sVar12;
        *psVar11 = sVar12 + 2;
        psVar11[1] = sVar12 + 3;
        psVar11[3] = sVar12 + 2;
        sVar12 = sVar12 + 4;
        puVar10 = puVar10 + 0xc;
        psVar11 = psVar11 + 6;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    iVar15 = FUN_00401f00(0x58,uVar3);
    uVar14 = 0;
    local_4 = 0;
    if (iVar15 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_0071fb40(uVar1,iVar4,0,0,0,0,0,iVar13 * 2,iVar5);
    }
    local_4 = 0xffffffff;
    iVar4 = FUN_00401f00(0x2c,uVar3);
    local_4 = 1;
    if (iVar4 != 0) {
      uVar14 = FUN_007e3ae0(uVar1,1);
    }
    local_4 = 0xffffffff;
    FUN_007263b0(1);
    iVar13 = iVar13 * 0x10;
    uVar16 = 1;
    uVar7 = FUN_007f3790(iVar13,1);
    FUN_007260b0(0,uVar7,iVar13,uVar16);
    FUN_007262a0(0,0,0,1,uVar1,4,4);
    FUN_006c61e0(uVar14);
    iVar13 = FUN_00401f00(0xc0);
    local_4 = 2;
    if (iVar13 == 0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)FUN_00717570(uVar6);
    }
    iVar13 = puVar8[0x2d];
    *(undefined4 *)(iVar13 + 0xc) = *(undefined4 *)(iVar13 + 0xc);
    *(undefined4 *)(iVar13 + 0x10) = *(undefined4 *)(iVar13 + 0x10);
    *(undefined4 *)(iVar13 + 0x14) = *(undefined4 *)(iVar13 + 0x14);
    *(undefined4 *)(iVar13 + 0x18) = 0x45000000;
    puVar10 = DAT_00b4690c;
    local_4 = 0xffffffff;
    if (DAT_00b4690c != puVar8) {
      if (((DAT_00b4690c != (undefined4 *)0x0) &&
          (LVar9 = InterlockedDecrement(DAT_00b4690c + 1), LVar9 == 0)) &&
         (puVar10 != (undefined4 *)0x0)) {
        (**(code **)*puVar10)(1);
      }
      DAT_00b4690c = puVar8;
      InterlockedIncrement(puVar8 + 1);
      puVar10 = DAT_00b4690c;
    }
  }
  DAT_00b4690c = puVar10;
  *unaff_FS_OFFSET = local_c;
  return puVar10;
}



void FUN_007f4c70(byte param_1)

{
  FUN_007f4560();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint FUN_007f4c90(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar3 = (int *)FUN_00707530(4);
  piVar6 = (int *)0x0;
  if (piVar3 != (int *)0x0) {
    for (puVar4 = (undefined4 *)(**(code **)(*piVar3 + 4))(uVar2); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      if (puVar4 == &DAT_00b468ec) goto LAB_007f4d42;
    }
  }
  iVar5 = FUN_00401f00(0x19c);
  uStack_4 = 0;
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_007f27e0();
  }
  uStack_4 = 0xffffffff;
  FUN_00405680(piVar6);
  cVar1 = (**(code **)(*piVar6 + 0x58))(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_004a1220(piVar6);
    *unaff_FS_OFFSET = local_c;
    return uVar2 & 0xffffff00;
  }
LAB_007f4d42:
  uVar2 = FUN_0077aa60(param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}



uint FUN_007f4d60(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (param_1 != (int *)0x0) {
    FUN_007f4970();
    uVar1 = FUN_00700900();
    (**(code **)(*param_1 + 0x84))(uVar1,0);
    FUN_007b8940(uVar1,0x17,0,1);
    piVar2 = (int *)FUN_00707530(4);
    bVar4 = false;
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar2 + 0x54))();
      bVar4 = iVar3 == 0xd;
    }
    if ((-(uint)bVar4 & (uint)piVar2) != 0) {
      FUN_007f4970();
      DAT_00b46900 = DAT_00b46900 + 1;
      return -(uint)bVar4 & (uint)piVar2;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f4de0(float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  _DAT_00b46914 = param_1;
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  if (param_1 <= 1.0) {
    if (_DAT_00b46914 < 0.0) {
      _DAT_00b46914 = 0.0;
    }
  }
  else {
    _DAT_00b46914 = 1.0;
  }
  _DAT_00b46918 = param_2;
  _DAT_00b4691c = param_3;
  _DAT_00b46920 = param_4;
  return;
}



void FUN_007f4e50(void)

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
  
  puStack_8 = &LAB_009d0090;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a92eb4;
  puVar2 = (undefined4 *)in_ECX[0x24];
  local_4 = 3;
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
  if (in_ECX[0x27] != 0) {
    piVar1 = (int *)(in_ECX[0x27] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0(uVar3);
    }
    in_ECX[0x27] = 0;
  }
  local_4._0_1_ = 2;
  _eh_vector_destructor_iterator_(in_ECX + 0x27,4,1,FUN_004027d0);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x25,4,1,FUN_007016a0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x24,4,1,FUN_007016a0);
  local_4 = 0xffffffff;
  FUN_00802760();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007f4fa0(undefined4 param_1)

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
  if (*(int *)(in_ECX + 0x2c) == 0) {
    iVar2 = FUN_00401f00(0x34,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_009a4750(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar3);
    (**(code **)(**(int **)(in_ECX + 0x2c) + 0x18))
              ("timingdata",0x10000007,0,0,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x80,0);
    (**(code **)(**(int **)(in_ECX + 0x2c) + 0x18))
              ("spellinput",0x10000007,0,1,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46914,0);
  }
  if (*(int *)(in_ECX + 0x30) == 0) {
    iVar2 = FUN_00401f00(0x34,uVar1);
    local_4 = 1;
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
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x18))
              ("texRatio1",0x10000007,0,7,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0xb0,0);
  }
  FUN_0077aa60(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007f5120(undefined4 param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  undefined4 unaff_retaddr;
  float fVar8;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  piVar4 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x4c))();
  }
  iVar6 = (**(code **)(*piVar4 + 0x4c))(0);
  fVar1 = (float)iVar6;
  if (iVar6 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)iVar5;
  if (iVar5 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  piVar4 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x50))();
  }
  iVar6 = (**(code **)(*piVar4 + 0x50))(0);
  fVar8 = (float)iVar6;
  if (iVar6 < 0) {
    fVar8 = fVar8 + 4.2949673e+09;
  }
  fVar3 = (float)iVar5;
  if (iVar5 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar8 = fVar8 / fVar3;
  uStack_18 = 0;
  uStack_14 = 0x3f800000;
  fStack_10 = 1.0;
  uStack_c = 0;
  if (DAT_00b42e96 != '\0') {
    unaff_retaddr = 0x3f800000;
    fVar8 = 1.0;
  }
  *(undefined4 *)(in_ECX + 0x98) = 0;
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x4c))();
  }
  fVar3 = (float)iVar5;
  if (iVar5 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x50))();
  }
  *(undefined4 *)(in_ECX + 0xa0) = unaff_retaddr;
  *(float *)(in_ECX + 0xa4) = fVar8;
  *(float *)(in_ECX + 0xa8) = 0.5 / fVar3 + 0.0;
  fVar3 = (float)iVar5;
  if (iVar5 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  *(float *)(in_ECX + 0xac) = 0.5 / fVar3 + 0.0;
  uStack_14 = unaff_retaddr;
  if ((char)param_2 != '\0') {
    uStack_14 = 0x3f800000;
    fVar8 = 1.0;
  }
  fStack_10 = fVar8;
  FUN_00802890(*param_2);
  if (*(int *)(fVar1 / fVar2) == 0) {
    FUN_007d71c0(1,0);
  }
  else {
    uVar7 = FUN_007d6fe0();
    FUN_007d7280(1,uVar7);
  }
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))(&uStack_18);
  }
  FUN_00709c60(DAT_00b3f928);
  if (*(int *)(fVar1 / fVar2) != 0) {
    FUN_007d72d0();
  }
  return;
}



undefined4 FUN_007f54f0(void)

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
  
  puStack_8 = &LAB_009d0108;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = 0;
  local_4 = 0;
  piVar4 = (int *)FUN_007606a0(&local_14,uVar3);
  iVar2 = in_ECX[0x27];
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
    in_ECX[0x27] = iVar2;
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
    local_10 = iVar2;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(iVar6,0,3,2);
  FUN_00771640(0);
  FUN_00760010(*(undefined4 *)(in_ECX[0x27] + 0x14),iVar6);
  iVar2 = in_ECX[0x27];
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar5;
    }
    FUN_00772cd0(7,0,0);
    iVar2 = in_ECX[0x27];
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar5;
    }
    FUN_00772cd0(0xe,0,0);
    iVar2 = in_ECX[0x27];
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar5;
    }
    FUN_00772cd0(0x1b,0,0);
    iVar2 = in_ECX[0x27];
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar5;
    }
    FUN_00772cd0(0xf,0,0);
    iVar2 = in_ECX[0x27];
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar5;
    }
    FUN_00772cd0(0xa8,0xf,0);
  }
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



void FUN_007f56e0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  int *piVar5;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x90);
  piVar5 = (int *)(*(int *)(in_ECX + 0x9c) + 0x58);
  puVar2 = (undefined4 *)*piVar5;
  if (puVar2 != puVar1) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    *piVar5 = (int)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x94);
  iVar3 = *(int *)(in_ECX + 0x9c);
  puVar2 = *(undefined4 **)(iVar3 + 0x44);
  if (puVar2 != puVar1) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)(iVar3 + 0x44) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  return;
}



void FUN_007f5780(void)

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
  puStack_8 = &LAB_009d0090;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_008026c0(uVar4);
  piVar1 = in_ECX + 0x24;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a92eb4;
  _eh_vector_constructor_iterator_(piVar1,4,1,FUN_007c88a0,FUN_007016a0);
  piVar2 = in_ECX + 0x25;
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(piVar2,4,1,FUN_007c88a0,FUN_007016a0);
  local_4._0_1_ = 2;
  _eh_vector_constructor_iterator_(in_ECX + 0x27,4,1,FUN_007c88a0,FUN_004027d0);
  in_ECX[0x26] = 0;
  puVar3 = (undefined4 *)*piVar1;
  local_4 = CONCAT31(local_4._1_3_,3);
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
  if (in_ECX[0x27] != 0) {
    piVar1 = (int *)(in_ECX[0x27] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0x27] = 0;
  }
  *(undefined1 *)(in_ECX + 8) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007f58b0(byte param_1)

{
  FUN_007f4e50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_007f58d0(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d31c0;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar2);
  iVar5 = 0;
  iVar4 = 0;
  iStack_14 = 0;
  iStack_10 = 0;
  iStack_4._0_1_ = 1;
  iStack_4._1_3_ = 0;
  if (in_ECX[0x26] == 0) {
    iVar5 = in_ECX[0x27];
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
      iStack_14 = iVar5;
    }
    iVar5 = iStack_14;
    iVar4 = **(int **)(iStack_14 + 0x24);
    if (iVar4 != 0) {
      *(int *)(iVar4 + 0x5c) = *(int *)(iVar4 + 0x5c) + 1;
      iStack_10 = iVar4;
    }
    iVar4 = iStack_10;
    uVar3 = FUN_00405a30();
    FUN_0076c910(uVar3);
    FUN_0076ce40(in_ECX[0xe],&iStack_14);
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  if (iVar4 != 0) {
    piVar1 = (int *)(iVar4 + 0x5c);
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



int * FUN_007f59c0(void)

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
  iVar3 = FUN_00401f00(0xc0);
  if (iVar3 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_007f5780();
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



void FUN_007f5b50(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = FUN_00401f00(-(uint)((int)((ulonglong)DAT_00b28cb0 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)DAT_00b28cb0 * 4));
  *in_ECX = uVar1;
  return;
}



void FUN_007f5b80(undefined4 param_1,float *param_2)

{
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  param_2[0xe] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xb] = 0.0;
  param_2[9] = 0.0;
  param_2[8] = 0.0;
  param_2[7] = 0.0;
  param_2[6] = 0.0;
  param_2[4] = 0.0;
  param_2[3] = 0.0;
  param_2[2] = 0.0;
  param_2[1] = 0.0;
  param_2[0xf] = 1.0;
  param_2[10] = 1.0;
  param_2[5] = 1.0;
  *param_2 = 1.0;
  FUN_00718a80(&local_34);
  *param_2 = local_4 * local_34;
  param_2[1] = local_28 * local_4;
  param_2[2] = local_1c * local_4;
  param_2[4] = local_30 * local_4;
  param_2[5] = local_24 * local_4;
  param_2[6] = local_18 * local_4;
  param_2[8] = local_2c * local_4;
  param_2[9] = local_20 * local_4;
  param_2[10] = local_4 * local_14;
  param_2[0xc] = local_10;
  param_2[0xd] = local_c;
  param_2[0xe] = local_8;
  param_2[0xf] = 1.0;
  return;
}



undefined4 FUN_007f5c40(ushort param_1)

{
  if (0x11b < param_1) {
    switch(param_1) {
    case 0x122:
    case 0x17b:
    case 0x194:
      goto switchD_007f5c63_caseD_18;
    default:
switchD_007f5c63_caseD_19:
      return 0;
    case 0x129:
switchD_007f5c63_caseD_19:
      return 0x802;
    case 0x168:
    case 0x16c:
    case 0x171:
    case 0x174:
      return 0x800;
    case 0x169:
    case 0x172:
      return 0x3800;
    }
  }
  if (param_1 == 0x11b) {
switchD_007f5c63_caseD_18:
    return 0x12;
  }
  switch(param_1) {
  case 0x18:
  case 0x2f:
  case 0x30:
  case 0x82:
  case 0x90:
  case 0xb8:
  case 0xc5:
  case 0xe6:
  case 0x10b:
  case 0x113:
    goto switchD_007f5c63_caseD_18;
  default:
    goto switchD_007f5c63_caseD_19;
  case 0x33:
  case 0x54:
  case 0x5f:
  case 0x9d:
  case 0xaa:
  case 0xd2:
  case 0xdf:
    return 0x1012;
  case 0x6a:
  case 0x75:
    return 0x3012;
  case 0x76:
    return 0x82;
  case 0xe7:
  case 0x114:
    goto switchD_007f5c63_caseD_19;
  case 0xee:
    return 0x1802;
  case 0xfc:
    return 0x3802;
  }
}



undefined4 FUN_007f5e80(ushort param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x11c) {
    if (param_1 == 0x11b) {
switchD_007f5ef4_caseD_122:
      uVar1 = 0x108;
    }
    else {
      switch(param_1) {
      case 0x18:
      case 0xe7:
      case 0x10b:
        goto switchD_007f5eab_caseD_18;
      case 0x2f:
      case 0x30:
      case 0xe6:
      case 0x113:
      case 0x114:
        return 8;
      case 0x33:
      case 0xee:
        return 0x18;
      case 0x48:
      case 0x49:
      case 0x6a:
      case 0x75:
        goto switchD_007f5eab_caseD_48;
      case 0x54:
      case 0x5f:
        return 0x10;
      case 0x76:
      case 0x82:
      case 0x90:
      case 0xc5:
        goto switchD_007f5eab_caseD_76;
      case 0x9d:
      case 0xaa:
      case 0xb8:
      case 0xd2:
      case 0xdf:
        return 0x110;
      case 0xfc:
        goto switchD_007f5eab_caseD_fc;
      }
    }
switchD_007f5eab_caseD_19:
    return uVar1;
  }
  switch(param_1) {
  case 0x122:
  case 0x129:
  case 0x16c:
    goto switchD_007f5ef4_caseD_122;
  default:
    goto switchD_007f5eab_caseD_19;
  case 0x168:
  case 0x194:
switchD_007f5eab_caseD_18:
    return 0;
  case 0x169:
switchD_007f5eab_caseD_fc:
    return 0x38;
  case 0x16a:
  case 0x17b:
switchD_007f5eab_caseD_76:
    return 0x100;
  case 0x16b:
  case 0x173:
  case 0x175:
    return 0x130;
  case 0x16d:
  case 0x16e:
  case 0x16f:
  case 0x170:
  case 0x171:
  case 0x176:
switchD_007f5eab_caseD_48:
    return 0x30;
  case 0x172:
    return 0xbc;
  case 0x174:
    return 0x138;
  }
}



void FUN_007f60f0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  
  uVar1 = *(undefined4 *)(param_3 + 0x94);
  bVar4 = 0;
  if (*(char *)(param_2 + 8) != '\0') {
    do {
      uVar3 = (uint)bVar4;
      iVar2 = *(int *)(*(int *)(param_2 + 0xc) + uVar3 * 4);
      if (((param_4 == 0) || (*(byte *)(param_4 + 8) <= bVar4)) ||
         (iVar2 != *(int *)(*(int *)(param_4 + 0xc) + uVar3 * 4))) {
        FUN_007ee390(uVar3,iVar2,uVar1);
      }
      bVar4 = bVar4 + 1;
    } while (bVar4 < *(byte *)(param_2 + 8));
  }
  return;
}



void FUN_007f6150(undefined4 param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 < 0x169) {
    if (param_2 == 0x168) {
      FUN_008517f0(param_1,0,param_3,param_4,0);
      return;
    }
    if (param_2 == 0x48) {
      FUN_00850c70(param_1,0,param_3,param_4,0);
      return;
    }
    if (param_2 == 0x49) {
      FUN_00846250(param_1,0,param_3,param_4,0);
      return;
    }
  }
  else {
    switch(param_2) {
    case 0x169:
      FUN_00846c50(param_1,0,param_3,param_4,0);
      return;
    case 0x16a:
      FUN_00846dc0(param_1,0,param_3,param_4,0);
      return;
    case 0x16b:
      FUN_008479e0(param_1,0,param_3,param_4,0);
      return;
    case 0x16c:
      FUN_00846f90(param_1,0,param_3,param_4,0);
      return;
    case 0x16d:
      FUN_00851250(param_1,0,param_3,param_4,0);
      return;
    case 0x16e:
      FUN_00850f60(param_1,0,param_3,param_4,0);
      return;
    case 0x16f:
      FUN_00846570(param_1,0,param_3,param_4,0);
      return;
    case 0x170:
      FUN_00851520(param_1,0,param_3,param_4,0);
      return;
    case 0x171:
      FUN_008519b0(param_1,0,param_3,param_4,0);
      return;
    case 0x172:
      FUN_00847160(param_1,0,param_3,param_4,0);
      return;
    case 0x173:
      FUN_00847400(param_1,0,param_3,param_4,0);
      return;
    case 0x174:
      FUN_008476f0(param_1,0,param_3,param_4,0);
      return;
    case 0x175:
      FUN_00847d50(param_1,0,param_3,param_4,0);
      return;
    case 0x176:
      FUN_00846890(param_1,0,param_3,param_4,0);
    }
  }
  return;
}



void FUN_007f63d0(undefined4 param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 < 0x11c) {
    if (param_2 == 0x11b) {
      FUN_0085e050(param_1,0,param_3,param_4,1);
      return;
    }
    switch(param_2) {
    case 0x18:
      FUN_0085bf40(param_1,0,param_3,param_4,1);
      return;
    case 0x2f:
      FUN_0085bfd0(param_1,0,param_3,param_4,1);
      return;
    case 0x30:
      FUN_0085c110(param_1,0,param_3,param_4,1);
      return;
    case 0x33:
      FUN_0085c250(param_1,0,param_3,param_4,1);
      return;
    case 0x54:
      FUN_0085d380(param_1,0,param_3,param_4,1);
      return;
    case 0x5f:
      FUN_0085d500(param_1,0,param_3,param_4,1);
      return;
    case 0x6a:
      FUN_0085d720(param_1,0,param_3,param_4,1);
      return;
    case 0x75:
      FUN_0085d8a0(param_1,0,param_3,param_4,1);
      return;
    case 0x82:
      FUN_0085c870(param_1,0,param_3,param_4,1);
      return;
    case 0x90:
      FUN_0085ca00(param_1,0,param_3,param_4,1);
      return;
    case 0x9d:
      FUN_0085cc20(param_1,0,param_3,param_4,1);
      return;
    case 0xaa:
      FUN_0085cdb0(param_1,0,param_3,param_4,1);
      return;
    case 0xb8:
      FUN_0085cfd0(param_1,0,param_3,param_4,1);
      return;
    case 0xc5:
      FUN_0085d160(param_1,0,param_3,param_4,1);
      return;
    case 0xd2:
      FUN_0085dac0(param_1,0,param_3,param_4,1);
      return;
    case 0xdf:
      FUN_0085dc50(param_1,0,param_3,param_4,1);
      return;
    case 0xe6:
      FUN_0085c370(param_1,0,param_3,param_4,1);
      return;
    case 0xe7:
      FUN_0085c450(param_1,0,param_3,param_4,1);
      return;
    case 0xee:
      FUN_0085de70(param_1,0,param_3,param_4,1);
      return;
    case 0xfc:
      FUN_0085df60(param_1,0,param_3,param_4,1);
      return;
    case 0x10b:
      FUN_0085c530(param_1,0,param_3,param_4,1);
      return;
    case 0x113:
      FUN_0085c610(param_1,0,param_3,param_4,1);
      return;
    case 0x114:
      FUN_0085c6f0(param_1,0,param_3,param_4,1);
      return;
    }
  }
  else if (param_2 == 0x122) {
    FUN_0085e160(param_1,0,param_3,param_4,1);
  }
  else {
    if (param_2 == 0x129) {
      FUN_0085e300(param_1,0,param_3,param_4,1);
      return;
    }
    if (param_2 == 0x194) {
      FUN_0085c7d0(param_1,0,param_3,param_4,1);
      return;
    }
  }
  return;
}



void FUN_007f68c0(ushort param_1,char param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  int *piVar8;
  int local_4;
  
  uVar5 = (uint)param_1;
  uVar1 = *(uint *)(&DAT_00b43490 + uVar5 * 4);
  uVar2 = *(uint *)(&DAT_00b43b20 + uVar5 * 4);
  bVar7 = 2;
  piVar8 = &DAT_00b4501c;
  local_4 = 9;
  do {
    if (((piVar8[-1] != 0) && (uVar4 = 1 << (bVar7 - 1 & 0x1f), (uVar2 & uVar4) != 0)) &&
       ((uVar1 & uVar4) == 0)) {
      if ((param_2 == '\0') || ((param_3 & uVar4) != 0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      *(undefined1 *)(piVar8[-1] + 8) = uVar3;
    }
    if (((*piVar8 != 0) && (uVar4 = 1 << (bVar7 & 0x1f), (uVar2 & uVar4) != 0)) &&
       ((uVar1 & uVar4) == 0)) {
      if ((param_2 == '\0') || ((param_3 & uVar4) != 0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      *(undefined1 *)(*piVar8 + 8) = uVar3;
    }
    if (((piVar8[1] != 0) && (uVar4 = 1 << (bVar7 + 1 & 0x1f), (uVar2 & uVar4) != 0)) &&
       ((uVar1 & uVar4) == 0)) {
      if ((param_2 == '\0') || ((param_3 & uVar4) != 0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      *(undefined1 *)(piVar8[1] + 8) = uVar3;
    }
    bVar7 = bVar7 + 3;
    piVar8 = piVar8 + 3;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  (**(code **)(**(int **)(param_5 + 0x30) + 0x48))();
  uVar1 = *(uint *)(&DAT_00b44840 + uVar5 * 4);
  uVar2 = *(uint *)(&DAT_00b441b0 + uVar5 * 4);
  piVar8 = &DAT_00b45518;
  iVar6 = 0x11;
  bVar7 = 1;
  do {
    if (((*piVar8 != 0) && (uVar5 = 1 << (bVar7 & 0x1f), (uVar2 & uVar5) != 0)) &&
       ((uVar1 & uVar5) == 0)) {
      if ((param_2 == '\0') || ((param_4 & uVar5) != 0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      *(undefined1 *)(*piVar8 + 8) = uVar3;
    }
    bVar7 = bVar7 + 1;
    piVar8 = piVar8 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  (**(code **)(**(int **)(param_5 + 0x2c) + 0x48))();
  return;
}



void FUN_007f6a30(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  LONG LVar5;
  
  puVar2 = param_1;
  iVar1 = DAT_00b3f928;
  puVar4 = (undefined4 *)FUN_00405760(&param_1);
  puVar3 = param_1;
  *(undefined4 *)(iVar1 + 0xc) = *puVar4;
  if (param_1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(param_1 + 1);
    if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar4 = (undefined4 *)FUN_007016d0(&param_1);
  puVar3 = param_1;
  *(undefined4 *)(iVar1 + 0x10) = *puVar4;
  if (param_1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(param_1 + 1);
    if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
  }
  FUN_00778db0(*(undefined4 *)(iVar1 + 0x8a4),puVar2[0x2d],0,0,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f6ae0(int param_1,ushort param_2,undefined4 param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  LONG LVar7;
  undefined4 uVar8;
  int unaff_retaddr;
  
  iVar2 = (&DAT_00b455a0)[param_2];
  iVar3 = **(int **)(iVar2 + 0x24);
  puVar6 = (undefined4 *)(**(code **)(*param_4 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar6) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar4 + 1);
      if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(param_1 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar2 + 0x24) + 4);
  puVar6 = (undefined4 *)FUN_00848fd0(param_4,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar6) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar4 + 1);
      if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar5 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  uVar1 = *(undefined1 *)(*(int *)(iVar3 + 8) + 0x1a);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x18,uVar1,0);
  if (*(int *)(*(int *)(unaff_retaddr + 0xb4) + 0x24) != 0) {
    _DAT_00b46688 = 0x3f800000;
    return;
  }
  _DAT_00b46688 = 0;
  return;
}



void FUN_007f6bf0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  LONG LVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *in_ECX;
  uint uVar10;
  uint *unaff_FS_OFFSET;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  uint local_34;
  int *local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *puStack_1c;
  int *local_18;
  undefined4 *puStack_14;
  uint local_10;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar2 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d0158;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (uint)&local_c;
  local_28 = *(undefined4 *)(param_1[0x2d] + 0x38);
  local_18 = *(int **)(DAT_00b3f928 + 0x8ac);
  local_2c = *(int **)(DAT_00b3f928 + 0x8b8);
  local_10 = param_3[6];
  uVar10 = 0;
  local_34 = 0;
  local_30 = in_ECX;
  if (local_10 != 0) {
    do {
      iVar1 = *(int *)(param_3[9] + uVar10 * 4);
      if (iVar1 == 0) {
LAB_007f6c91:
        param_1 = (int *)((uint)param_1 & 0xffffff00);
      }
      else {
        piVar4 = (int *)FUN_0075fb10(&local_24);
        local_34 = local_34 | 1;
        param_1 = (int *)CONCAT31(param_1._1_3_,1);
        if (*(int *)(*local_30 + uVar10 * 4) == *piVar4) goto LAB_007f6c91;
      }
      puVar7 = local_24;
      if (((((local_34 & 1) != 0) &&
           (local_34 = local_34 & 0xfffffffe, local_24 != (undefined4 *)0x0)) &&
          (LVar5 = InterlockedDecrement(local_24 + 1), LVar5 == 0)) && (puVar7 != (undefined4 *)0x0)
         ) {
        (**(code **)*puVar7)(1);
      }
      if ((char)param_1 == '\0') {
        if (iVar1 == 0) break;
      }
      else {
        puVar6 = (undefined4 *)FUN_0075fb10(&local_20);
        puVar7 = local_20;
        *(undefined4 *)(*local_30 + uVar10 * 4) = *puVar6;
        if (((local_20 != (undefined4 *)0x0) &&
            (LVar5 = InterlockedDecrement(local_20 + 1), LVar5 == 0)) &&
           (puVar7 != (undefined4 *)0x0)) {
          (**(code **)*puVar7)(1);
        }
        piVar4 = (int *)FUN_0075fb10(&puStack_1c);
        puVar7 = puStack_1c;
        param_1 = (int *)CONCAT31(param_1._1_3_,*piVar4 != 0);
        if (((puStack_1c != (undefined4 *)0x0) &&
            (LVar5 = InterlockedDecrement(puStack_1c + 1), LVar5 == 0)) &&
           (puVar7 != (undefined4 *)0x0)) {
          (**(code **)*puVar7)(1);
        }
        if ((char)param_1 != '\0') {
          puVar7 = (undefined4 *)FUN_0075fb10(&puStack_14);
          iVar1 = *local_18;
          uStack_4 = 0;
          uVar8 = (**(code **)(*local_2c + 8))(*puVar7,&uStack_35,&uStack_36,&uStack_37);
          (**(code **)(iVar1 + 0xe0))(uVar10,uVar8);
          puVar7 = puStack_14;
          uStack_4 = 0xffffffff;
          if (((puStack_14 != (undefined4 *)0x0) &&
              (LVar5 = InterlockedDecrement(puStack_14 + 1), LVar5 == 0)) &&
             (puVar7 != (undefined4 *)0x0)) {
            (**(code **)*puVar7)(1);
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_10);
  }
  puVar7 = param_3;
  if (((char)param_4 != '\0') && (param_3[0xc] != 0)) {
    FUN_007726c0(uVar3);
  }
  if (uVar10 < DAT_00b28cb8) {
    FUN_00771790(uVar10);
  }
  if ((puVar7[0x11] != 0) && (piVar4 = (int *)param_2[0xb], piVar4 != (int *)0x0)) {
    puVar6 = (undefined4 *)FUN_007016d0(&param_1);
    uStack_4 = 1;
    puVar9 = (undefined4 *)FUN_00405760(&param_4);
    uStack_4._0_1_ = 2;
    (**(code **)(*piVar4 + 0x40))
              (puVar7[0x11],piVar2,0,0,local_28,*puVar9,*puVar6,piVar2 + 0x19,piVar2 + 8,0,0);
    puVar7 = param_4;
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    if ((param_4 != (undefined4 *)0x0) &&
       ((LVar5 = InterlockedDecrement(param_4 + 1), LVar5 == 0 && (puVar7 != (undefined4 *)0x0)))) {
      (**(code **)*puVar7)(1);
    }
    piVar4 = param_1;
    uStack_4 = 0xffffffff;
    if (((param_1 != (int *)0x0) && (LVar5 = InterlockedDecrement(param_1 + 1), LVar5 == 0)) &&
       (piVar4 != (int *)0x0)) {
      (**(code **)*piVar4)(1);
    }
  }
  puVar7 = param_3;
  if ((param_3[0x16] != 0) && (piVar4 = (int *)param_2[0xc], piVar4 != (int *)0x0)) {
    puVar6 = (undefined4 *)FUN_007016d0(&param_2);
    uStack_4 = 3;
    puVar9 = (undefined4 *)FUN_00405760(&param_3);
    uStack_4._0_1_ = 4;
    (**(code **)(*piVar4 + 0x40))
              (puVar7[0x16],piVar2,0,0,local_28,*puVar9,*puVar6,piVar2 + 0x19,piVar2 + 8,0,0);
    puVar7 = param_3;
    uStack_4 = CONCAT31(uStack_4._1_3_,3);
    if ((param_3 != (undefined4 *)0x0) &&
       ((LVar5 = InterlockedDecrement(param_3 + 1), LVar5 == 0 && (puVar7 != (undefined4 *)0x0)))) {
      (**(code **)*puVar7)(1);
    }
    puVar7 = param_2;
    uStack_4 = 0xffffffff;
    if (((param_2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(param_2 + 1), LVar5 == 0))
       && (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
  }
  (**(code **)(*piVar2 + 0x88))(DAT_00b3f928);
  *unaff_FS_OFFSET = local_10;
  return;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007f6fc0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 *unaff_ESI;
  int *piVar13;
  int *piVar14;
  int **ppiVar15;
  int *unaff_FS_OFFSET;
  char cVar16;
  undefined4 uVar17;
  int *piVar18;
  int *piVar19;
  undefined4 uVar20;
  int *piVar21;
  undefined4 uStack_150;
  undefined4 *puStack_14c;
  int *piStack_148;
  undefined4 uStack_144;
  LONG *pLStack_140;
  LONG *pLVar22;
  undefined4 uStack_134;
  undefined4 *puStack_130;
  int *piStack_12c;
  int *apiStack_128 [2];
  int *piStack_11c;
  LONG LStack_100;
  LONG LStack_fc;
  undefined4 *puStack_f8;
  int *piStack_f4;
  int *piStack_f0;
  int *piStack_ec;
  undefined4 local_c4 [2];
  undefined4 *local_bc;
  int iStack_b8;
  int *local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  undefined4 uStack_88;
  int local_80 [10];
  undefined4 uStack_58;
  undefined4 uStack_3c;
  undefined4 uStack_20;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d01c2;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_90 = DAT_00b3f928;
  piStack_ec = (int *)0x7f700e;
  local_98 = FUN_007f5c40();
  piStack_ec = (int *)0x7f701a;
  local_94 = FUN_007f5e80();
  local_b0 = **(undefined4 **)(param_1 + 4);
  local_b4 = (int *)(*(undefined4 **)(param_1 + 4))[2];
  piVar1 = (int *)*local_b4;
  local_ac = piVar1[0x2d];
  piVar13 = piVar1 + 0x19;
  piVar14 = local_80;
  for (iVar11 = 0xd; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar14 = *piVar13;
    piVar13 = piVar13 + 1;
    piVar14 = piVar14 + 1;
  }
  local_a8 = piVar1[8];
  local_a4 = piVar1[9];
  local_a0 = piVar1[10];
  local_9c = piVar1[0xb];
  piStack_ec = (int *)0x7f7079;
  puVar6 = (undefined4 *)FUN_00405760();
  piVar13 = (int *)*puVar6;
  if (local_bc != (undefined4 *)0x0) {
    piStack_ec = (int *)0x7f708f;
    LVar7 = InterlockedDecrement(local_bc + 1);
    if ((LVar7 == 0) && (local_bc != (undefined4 *)0x0)) {
      piStack_ec = (int *)0x7f70a1;
      (**(code **)*local_bc)();
    }
  }
  DAT_00b42e90 = (undefined4 *)((uint)param_2 & 0xffff);
  piVar14 = (int *)piVar1[0x2f];
  iVar11 = piVar13[6];
  DAT_00b42eb8 = local_b4;
  FUN_007ecb20();
  piStack_f0 = local_b4;
  piStack_f4 = param_2;
  puStack_f8 = (undefined4 *)0x7f70e0;
  piStack_ec = (int *)iVar11;
  FUN_007f60f0();
  piStack_ec = (int *)0x7f70e8;
  FUN_007f6a30();
  puVar6 = *(undefined4 **)(local_ac + 0x38);
  piStack_ec = (int *)0x7f70fb;
  puVar8 = (undefined4 *)FUN_007016d0();
  piStack_f0 = (int *)*puVar8;
  piStack_ec = local_80;
  LStack_fc = 0;
  uStack_4 = 0;
  puStack_f8 = puVar6;
  piStack_f4 = piVar13;
  (**(code **)(*piVar14 + 0x28))();
  uStack_20 = 0xffffffff;
  if (((unaff_ESI != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(unaff_ESI + 1), LVar7 == 0)
      ) && (unaff_ESI != (undefined4 *)0x0)) {
    (**(code **)*unaff_ESI)();
  }
  FUN_007016d0();
  puVar8 = local_c4;
  uStack_20 = 1;
  piStack_11c = piVar1;
  (**(code **)(*piVar14 + 0x2c))();
  uStack_3c = 0xffffffff;
  if (puStack_f8 != (undefined4 *)0x0) {
    apiStack_128[1] = (int *)0x7f71a9;
    puVar8 = puStack_f8;
    LVar7 = InterlockedDecrement(puStack_f8 + 1);
    if ((LVar7 == 0) && (puVar8 != (undefined4 *)0x0)) {
      apiStack_128[1] = (int *)0x7f71bd;
      (**(code **)*puVar8)();
    }
  }
  (**(code **)(*piVar14 + 0x48))();
  puStack_f8 = (undefined4 *)piVar14[0xf];
  apiStack_128[1] = (int *)0x7f71d9;
  puVar9 = (undefined4 *)FUN_007016d0();
  apiStack_128[0] = (int *)*puVar9;
  piVar18 = (int *)&stack0xffffff20;
  apiStack_128[1] = &iStack_b8;
  uStack_134 = 0;
  uStack_3c = 2;
  puStack_130 = puVar6;
  piStack_12c = piVar13;
  (**(code **)(*piVar14 + 0x30))();
  uStack_58 = 0xffffffff;
  if (piVar18 != (int *)0x0) {
    pLStack_140 = (LONG *)0x7f7220;
    piStack_11c = piVar18;
    LVar7 = InterlockedDecrement(piVar18 + 1);
    if ((LVar7 == 0) && (piStack_11c != (int *)0x0)) {
      pLStack_140 = (LONG *)0x7f7234;
      (**(code **)*piStack_11c)();
    }
  }
  pLStack_140 = (LONG *)0x7f7240;
  puVar9 = (undefined4 *)FUN_007016d0();
  uStack_144 = *puVar9;
  pLVar22 = &LStack_fc;
  pLStack_140 = (LONG *)&stack0xffffff2c;
  uStack_150 = 0;
  uStack_58 = 3;
  puStack_14c = puVar6;
  piStack_148 = piVar13;
  (**(code **)(*piVar14 + 0x34))();
  local_80[2] = 0xffffffff;
  if (((pLStack_140 != (LONG *)0x0) &&
      (pLVar22 = pLStack_140, LVar7 = InterlockedDecrement(pLStack_140 + 1), LVar7 == 0)) &&
     (pLVar22 != (LONG *)0x0)) {
    (**(code **)*pLVar22)(1);
  }
  piVar18 = piVar1;
  piVar19 = piVar13;
  (**(code **)(*piVar14 + 0x3c))(piVar1,0,puVar6,piVar13);
  puVar9 = (undefined4 *)FUN_007016d0(&uStack_150);
  ppiVar15 = &piStack_12c;
  uStack_88 = 4;
  (**(code **)(*piVar14 + 0x38))(piVar1,0,0,puVar6,piVar13,*puVar9);
  local_a8 = 0xffffffff;
  if (((&stack0x00000000 != (undefined1 *)0x104) &&
      (LVar7 = InterlockedDecrement(&LStack_100), LVar7 == 0)) &&
     (&stack0x00000000 != (undefined1 *)0x104)) {
    (*(code *)*puVar8)(1);
  }
  iVar11 = *(int *)(DAT_00b3f928 + 0x8ac);
  if ((DAT_00b427be < 5) && (*(int *)(iVar11 + 0xd48 + (uint)DAT_00b427be * 8) != 2)) {
    *(undefined4 *)(iVar11 + 0xd48 + (uint)DAT_00b427be * 8) = 2;
    (**(code **)(**(int **)(iVar11 + 0xff8) + 0x114))(*(int **)(iVar11 + 0xff8),1,7,2);
  }
  (**(code **)(*piVar1 + 0x88))(DAT_00b3f928);
  FUN_007d1800(local_a0);
  puVar6 = (undefined4 *)0x0;
  _memset(*ppiVar15,0,DAT_00b28cb0 * 4);
  piVar3 = piVar1;
  iVar11 = local_a4;
  while (local_a4 = iVar11, piVar3 != (int *)0x0) {
    piVar2 = (int *)*piVar3;
    piVar3 = (int *)piVar3[2];
    DAT_00b42e90 = (undefined4 *)(local_a0 & 0xffff);
    iVar11 = *piVar3;
    puVar8 = *(undefined4 **)(iVar11 + 0xb4);
    DAT_00b42eb8 = piVar3;
    piVar21 = piVar3;
    puStack_130 = DAT_00b42e90;
    piVar10 = (int *)FUN_00405760(&piStack_12c);
    iVar4 = *piVar10;
    if (((piStack_12c != (int *)0x0) &&
        (piVar10 = piStack_12c, LVar7 = InterlockedDecrement(piStack_12c + 1), LVar7 == 0)) &&
       (piVar10 != (int *)0x0)) {
      (**(code **)*piVar10)(1);
    }
    uVar20 = *(undefined4 *)(iVar4 + 0x18);
    cVar16 = (char)((uint)piVar13 >> 0x18);
    if (puVar6 == puVar8) {
      if (cVar16 == '\0') {
        FUN_007f68c0(local_a0,1,pLStack_140,pLVar22,piVar14);
        piVar13 = (int *)&DAT_01000000;
      }
      uVar5 = local_a0;
      FUN_007f60f0(local_a0,piVar3,uVar20,piVar19);
      FUN_007f6150(iVar11,uVar5,iVar4,uVar20,piVar14);
      FUN_007f5b80(apiStack_128,&piStack_f4);
      FUN_007c9140(&piStack_f4,puStack_f8,puStack_130,*(undefined4 *)(iVar11 + 0xb8));
    }
    else {
      if (cVar16 != '\0') {
        FUN_007f68c0(local_a0,0,pLStack_140,pLVar22,piVar14);
        piVar13 = (int *)0x0;
      }
      FUN_007f6a30(iVar11);
      uVar17 = puVar8[0xe];
      puVar6 = (undefined4 *)(iVar11 + 100);
      ppiVar15 = apiStack_128;
      for (iVar12 = 0xd; iVar12 != 0; iVar12 = iVar12 + -1) {
        *ppiVar15 = (int *)*puVar6;
        puVar6 = puVar6 + 1;
        ppiVar15 = ppiVar15 + 1;
      }
      uStack_150 = *(undefined4 *)(iVar11 + 0x20);
      puStack_14c = *(undefined4 **)(iVar11 + 0x24);
      piStack_148 = *(int **)(iVar11 + 0x28);
      uStack_144 = *(undefined4 *)(iVar11 + 0x2c);
      FUN_007f60f0(local_a0,piVar21,uVar20,piVar19);
      FUN_007f6150(iVar11,local_a0,iVar4,uVar20,piVar14);
      puVar6 = (undefined4 *)FUN_007016d0(&uStack_134);
      ppiVar15 = apiStack_128;
      local_ac = 5;
      (**(code **)(*piVar14 + 0x34))(iVar11,0,0,uVar17,iVar4,*puVar6,ppiVar15,&uStack_150);
      if (((puVar8 != (undefined4 *)0x0) &&
          (puVar6 = puVar8, LVar7 = InterlockedDecrement(puVar8 + 1), LVar7 == 0)) &&
         (puVar6 != (undefined4 *)0x0)) {
        (**(code **)*puVar6)(1);
      }
      (**(code **)(*piVar14 + 0x3c))(iVar11,0,ppiVar15,iVar4);
    }
    FUN_007f6bf0(iVar11,piVar14,piVar18,0);
    piVar3 = piVar2;
    puVar6 = puVar8;
    piVar19 = piVar21;
    iVar11 = local_a4;
  }
  FUN_007a9c30();
  *(undefined4 *)(iVar11 + 0xc) = *(undefined4 *)(iVar11 + 4);
  *(undefined4 *)(iVar11 + 4) = 0;
  *(undefined4 *)(iVar11 + 8) = 0;
  *(undefined4 *)(iVar11 + 0x10) = 0;
  (**(code **)(*piVar14 + 0x4c))();
  (**(code **)(*(int *)piVar1[0x22b] + 0xfc))(0);
  *unaff_FS_OFFSET = iStack_b8;
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_007f7680(int param_1,uint param_2)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 ***pppuVar5;
  short sVar6;
  int *piVar7;
  LONG LVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int **ppiVar17;
  int *unaff_FS_OFFSET;
  int iVar18;
  int iVar19;
  undefined4 *****pppppuVar20;
  int *piVar21;
  undefined4 *puVar22;
  int ****ppppiStack_15c;
  int *piStack_158;
  undefined4 *puStack_154;
  int *piStack_150;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 ****ppppuStack_144;
  undefined4 uStack_140;
  int *piStack_13c;
  undefined4 *puStack_138;
  undefined4 *puStack_134;
  uint *puStack_130;
  int *apiStack_128 [3];
  undefined4 ***pppuStack_11c;
  undefined4 uStack_118;
  int **ppiStack_114;
  int *piStack_104;
  undefined4 *puStack_100;
  undefined4 uStack_fc;
  undefined4 **ppuStack_f8;
  undefined4 **ppuVar25;
  uint uStack_d4;
  int *local_b8;
  int local_b4;
  undefined4 *local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 *local_a4;
  uint local_a0;
  undefined4 *puStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  int local_80 [10];
  undefined4 uStack_58;
  undefined4 uStack_3c;
  undefined4 uStack_20;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d023d;
  local_c = *unaff_FS_OFFSET;
  uStack_d4 = DAT_00b30aac ^ (uint)&stack0xffffff30;
  *unaff_FS_OFFSET = (int)&local_c;
  local_a0 = DAT_00b3f928;
  puVar9 = (undefined4 *)**(undefined4 **)(param_1 + 4);
  local_b8 = (int *)(*(undefined4 **)(param_1 + 4))[2];
  piVar2 = (int *)*local_b8;
  local_a8 = piVar2[0x2d];
  piVar3 = (int *)piVar2[0x2f];
  local_a4 = puVar9;
  piVar7 = (int *)FUN_00405760();
  puVar22 = (undefined4 *)*piVar7;
  if (((local_b0 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(local_b0 + 1), LVar8 == 0))
     && (local_b0 != (undefined4 *)0x0)) {
    (**(code **)*local_b0)();
  }
  local_b4 = puVar22[6];
  sVar6 = *(short *)(*(int *)(local_b4 + 0x9c) + 0xe);
  do {
    if (sVar6 != 0) {
      piVar7 = piVar2 + 0x19;
      piVar16 = local_80;
      for (iVar13 = 0xd; iVar13 != 0; iVar13 = iVar13 + -1) {
        *piVar16 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar16 = piVar16 + 1;
      }
      iStack_98 = piVar2[8];
      iStack_94 = piVar2[9];
      iStack_90 = piVar2[10];
      DAT_00b42e90 = param_2 & 0xffff;
      iStack_8c = piVar2[0xb];
      DAT_00b42eb8 = local_b8;
      FUN_007ecb20();
      FUN_007f60f0();
      FUN_007f6a30();
      piVar16 = *(int **)(local_a8 + 0x38);
      FUN_007016d0();
      piVar7 = &iStack_98;
      uStack_4 = 0;
      (**(code **)(*piVar3 + 0x28))();
      uStack_20 = 0xffffffff;
      if (piVar7 != (int *)0x0) {
        ppuStack_f8 = (undefined4 **)0x7f77fc;
        LVar8 = InterlockedDecrement(piVar7 + 1);
        if ((LVar8 == 0) && (piVar7 != (int *)0x0)) {
          ppuStack_f8 = (undefined4 **)0x7f7810;
          (**(code **)*piVar7)();
        }
      }
      ppuStack_f8 = (undefined4 **)0x7f781c;
      puVar9 = (undefined4 *)FUN_007016d0();
      uStack_fc = *puVar9;
      ppuStack_f8 = &puStack_9c;
      uStack_20 = 1;
      piStack_104 = piVar16;
      puStack_100 = puVar22;
      (**(code **)(*piVar3 + 0x2c))();
      uStack_3c = 0xffffffff;
      if (ppuStack_f8 != (undefined4 **)0x0) {
        ppiStack_114 = (int **)0x7f7864;
        ppuVar25 = ppuStack_f8;
        LVar8 = InterlockedDecrement((LONG *)(ppuStack_f8 + 1));
        if ((LVar8 == 0) && (ppuVar25 != (undefined4 **)0x0)) {
          ppiStack_114 = (int **)0x7f7878;
          (*(code *)**ppuVar25)();
        }
      }
      (**(code **)(*piVar3 + 0x48))();
      ppiStack_114 = (int **)0x7f7895;
      puVar9 = (undefined4 *)FUN_007016d0();
      uStack_118 = *puVar9;
      ppiStack_114 = &local_b8;
      apiStack_128[1] = (int *)0x0;
      uStack_3c = 2;
      apiStack_128[0] = piVar2;
      apiStack_128[2] = piVar16;
      pppuStack_11c = (undefined4 ***)puVar22;
      (**(code **)(*piVar3 + 0x30))();
      ppiVar17 = ppiStack_114;
      uStack_58 = 0xffffffff;
      if (ppiStack_114 != (int **)0x0) {
        puStack_130 = (uint *)0x7f78dd;
        LVar8 = InterlockedDecrement((LONG *)(ppiStack_114 + 1));
        if ((LVar8 == 0) && (ppiVar17 != (int **)0x0)) {
          puStack_130 = (uint *)0x7f78f1;
          (*(code *)**ppiVar17)();
        }
      }
      puStack_130 = (uint *)0x7f78fd;
      puStack_134 = (undefined4 *)FUN_007016d0();
      puStack_134 = (undefined4 *)*puStack_134;
      puStack_130 = &uStack_d4;
      uStack_140 = 0;
      ppppuStack_144 = (undefined4 ****)0x0;
      uStack_58 = 3;
      piStack_13c = piVar16;
      puStack_138 = puVar22;
      (**(code **)(*piVar3 + 0x34))();
      local_80[2] = 0xffffffff;
      if (puStack_134 != (undefined4 *)0x0) {
        piStack_150 = (int *)0x7f7947;
        puVar9 = puStack_134;
        LVar8 = InterlockedDecrement(puStack_134 + 1);
        if ((LVar8 == 0) && (puVar9 != (undefined4 *)0x0)) {
          piStack_150 = (int *)0x7f795b;
          (**(code **)*puVar9)();
        }
      }
      puStack_154 = (undefined4 *)0x0;
      ppppiStack_15c = (undefined4 ****)0x7f796a;
      piStack_158 = piVar2;
      piStack_150 = piVar16;
      puVar23 = puVar22;
      (**(code **)(*piVar3 + 0x3c))();
      ppppiStack_15c = (int ****)&ppppuStack_144;
      puVar9 = (undefined4 *)FUN_007016d0();
      puVar9 = (undefined4 *)*puVar9;
      ppppiStack_15c = (int ****)(apiStack_128 + 3);
      uStack_88 = 4;
      piVar7 = piVar16;
      (**(code **)(*piVar3 + 0x38))(piVar2,0,0,piVar16,puVar22,puVar9,&piStack_104);
      local_a8 = 0xffffffff;
      puVar22 = puVar9;
      if (((puVar9 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar9 + 1), LVar8 == 0))
         && (puVar9 != (undefined4 *)0x0)) {
        (**(code **)*puVar9)(1);
      }
      (**(code **)(*piVar2 + 0x88))(DAT_00b3f928);
      piStack_158 = piStack_150;
      _memset((void *)*puStack_154,0,DAT_00b28cb0 * 4);
      puVar9 = local_a4;
      while (local_a4 = puVar9, puVar23 != (undefined4 *)0x0) {
        puVar24 = (undefined4 *)*puVar23;
        piVar21 = (int *)puVar23[2];
        iVar13 = *piVar21;
        piVar4 = *(int **)(iVar13 + 0xb4);
        piStack_150 = piVar4;
        piVar10 = (int *)FUN_00405760(&ppppuStack_144);
        iVar15 = *piVar10;
        if (ppppuStack_144 != (undefined4 ****)0x0) {
          ppppiStack_15c = ppppuStack_144;
          LVar8 = InterlockedDecrement((LONG *)(ppppuStack_144 + 1));
          if ((LVar8 == 0) && (ppppiStack_15c != (undefined4 ****)0x0)) {
            (*(code *)**ppppiStack_15c)(1);
          }
        }
        ppppiStack_15c = *(int *****)(iVar15 + 0x18);
        puVar23 = puVar24;
        puVar9 = local_a4;
        if (*(short *)((int)ppppiStack_15c[0x27] + 0xe) != 0) {
          DAT_00b42e90 = local_a0 & 0xffff;
          DAT_00b42eb8 = piVar21;
          if (piStack_158 == piVar4) {
            FUN_007f60f0(local_a0,piVar21,ppppiStack_15c,0);
            FUN_007e6a90(iVar13,ppppiStack_15c);
            if (*(char *)(ppppiStack_15c[0x27][1] + 0xc) == '\0') {
              uVar12 = (**(code **)(*piVar4 + 0x5c))();
              iVar15 = piVar4[0x12];
            }
            else {
              uVar12 = (**(code **)(*piVar4 + 0x5c))();
              iVar15 = piVar4[0x13];
            }
            uVar1 = *(ushort *)(piVar4 + 0x10);
            piVar16[0xf] = uVar12 & 0xffff;
            piVar16[0x10] = (uint)uVar1;
            piVar16[0x13] = iVar15;
            piVar16[0x12] = 0;
            piVar16[0x11] = 1;
            if ((short)local_a0 == 0x197) {
              piStack_150 = *(int **)(puVar22[9] + 4);
              piStack_158 = (int *)FUN_00405a30();
              piVar21 = (int *)piStack_150[1];
              if (piVar21 != piStack_158) {
                if (((piVar21 != (int *)0x0) &&
                    (LVar8 = InterlockedDecrement(piVar21 + 1), LVar8 == 0)) &&
                   (piVar21 != (int *)0x0)) {
                  (**(code **)*piVar21)(1);
                }
                piStack_150[1] = (int)piStack_158;
                if (piStack_158 != (int *)0x0) {
                  InterlockedIncrement(piStack_158 + 1);
                }
              }
              FUN_007e6310(0,apiStack_128);
            }
            else if ((DAT_00b43344 != '\0') && (sVar6 = FUN_007ed600(), sVar6 != 0)) {
              FUN_007f5b80(apiStack_128,&stack0xffffff0c);
              FUN_007e61c0(ppppiStack_15c,&stack0xffffff0c,ppuStack_f8,local_a0 & 0xffff);
            }
            FUN_007f6bf0(iVar13,piVar3,puVar22,0);
            piStack_158 = piVar4;
            puVar23 = puVar24;
            puVar9 = local_a4;
          }
          else {
            FUN_007f6a30(iVar13);
            piStack_158 = (int *)piVar4[0xe];
            puVar9 = (undefined4 *)(iVar13 + 100);
            ppiVar17 = apiStack_128;
            for (iVar14 = 0xd; iVar14 != 0; iVar14 = iVar14 + -1) {
              *ppiVar17 = (int *)*puVar9;
              puVar9 = puVar9 + 1;
              ppiVar17 = ppiVar17 + 1;
            }
            uStack_140 = *(undefined4 *)(iVar13 + 0x20);
            piStack_13c = *(int **)(iVar13 + 0x24);
            puStack_138 = *(undefined4 **)(iVar13 + 0x28);
            puStack_134 = *(undefined4 **)(iVar13 + 0x2c);
            FUN_007f60f0(local_a0,piVar21,ppppiStack_15c,0);
            puVar9 = (undefined4 *)FUN_007016d0(&stack0xfffffed4);
            piVar16 = piStack_158;
            iVar14 = 0;
            local_ac = 5;
            (**(code **)(*piVar3 + 0x2c))
                      (iVar13,0,piStack_158,iVar15,*puVar9,apiStack_128,&uStack_140);
            if (((piVar2 != (int *)0x0) &&
                (piVar21 = piVar2, LVar8 = InterlockedDecrement(piVar2 + 1), LVar8 == 0)) &&
               (piVar21 != (int *)0x0)) {
              (**(code **)*piVar21)(1);
            }
            (**(code **)(*piVar3 + 0x48))();
            puVar9 = (undefined4 *)FUN_007016d0(&stack0xfffffeb4);
            pppppuVar20 = &ppppiStack_15c;
            iVar19 = 0;
            iVar18 = iVar13;
            (**(code **)(*piVar3 + 0x34))(iVar13,0,0,piVar16,iVar15,*puVar9,&ppppuStack_144);
            piVar21 = piVar7;
            if (((piVar7 != (int *)0x0) && (LVar8 = InterlockedDecrement(piVar7 + 1), LVar8 == 0))
               && (piVar7 != (int *)0x0)) {
              (**(code **)*piVar7)(1);
            }
            (**(code **)(*piVar3 + 0x3c))(iVar13,0,piVar16,iVar15);
            iVar15 = **(int **)(iVar14 + 0x8ac);
            uVar11 = (**(code **)(**(int **)(iVar19 + 0x58) + 0x40))(0);
            (**(code **)(iVar15 + 0x88))(uVar11);
            pppuVar5 = *pppppuVar20[0x22b];
            uVar11 = (**(code **)(**(int **)(iVar18 + 0x44) + 0x38))(0);
            (*(code *)pppuVar5[0x1e])(uVar11);
            FUN_007f6bf0(iVar13,piVar3,puVar22,0);
            piVar16 = piStack_158;
            piVar7 = piVar21;
            piStack_158 = piStack_150;
            puVar23 = puVar24;
            puVar9 = local_a4;
          }
        }
      }
      FUN_007a9c30();
      puVar9[3] = puVar9[1];
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[4] = 0;
      (**(code **)(*piVar3 + 0x4c))();
      (**(code **)(*(int *)piVar2[0x22b] + 0xfc))(0);
LAB_007f7ec4:
      *unaff_FS_OFFSET = local_c;
      return;
    }
    if (puVar9 == (undefined4 *)0x0) {
      FUN_007a9c30();
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      goto LAB_007f7ec4;
    }
    local_a4 = (undefined4 *)*puVar9;
    local_b8 = (int *)puVar9[2];
    piVar2 = (int *)*local_b8;
    local_a8 = piVar2[0x2d];
    piVar3 = (int *)piVar2[0x2f];
    piVar7 = (int *)FUN_00405760();
    puVar9 = puStack_9c;
    puVar22 = (undefined4 *)*piVar7;
    if (((puStack_9c != (undefined4 *)0x0) &&
        (LVar8 = InterlockedDecrement(puStack_9c + 1), LVar8 == 0)) && (puVar9 != (undefined4 *)0x0)
       ) {
      (**(code **)*puVar9)();
    }
    local_b4 = puVar22[6];
    sVar6 = *(short *)(*(int *)(local_b4 + 0x9c) + 0xe);
    puVar9 = local_a4;
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x007f84ba) */
/* WARNING: Removing unreachable block (ram,0x007f84cc) */
/* WARNING: Removing unreachable block (ram,0x007f84d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f7ee0(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  LONG LVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *unaff_FS_OFFSET;
  int iVar12;
  undefined4 uStack_1b0;
  int iStack_1ac;
  uint uStack_1a8;
  undefined4 uStack_188;
  int *piStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  int **ppiStack_178;
  int **ppiStack_174;
  int *piStack_170;
  undefined4 *puStack_16c;
  int *piStack_168;
  uint uVar13;
  uint uVar14;
  int *piStack_160;
  undefined4 uStack_15c;
  undefined4 *puStack_158;
  int *piStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 **ppuStack_148;
  int **ppiVar15;
  int **ppiVar16;
  int iStack_130;
  int *piStack_12c;
  int *piStack_104;
  int *piStack_100;
  uint uStack_fc;
  int *piStack_f8;
  int *piStack_f4;
  undefined4 *local_d4 [2];
  undefined4 uStack_cc;
  int *local_c0;
  int local_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_88;
  int local_80 [10];
  undefined4 uStack_58;
  undefined4 uStack_3c;
  undefined4 uStack_20;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d02b8;
  local_c = *unaff_FS_OFFSET;
  puVar3 = (undefined4 *)(DAT_00b30aac ^ (uint)&stack0xffffff18);
  *unaff_FS_OFFSET = (int)&local_c;
  local_9c = DAT_00b3f928;
  piStack_f4 = (int *)0x7f7f2e;
  local_98 = FUN_007f5c40();
  piStack_f4 = (int *)0x7f7f3a;
  local_94 = FUN_007f5e80();
  local_b0 = **(undefined4 **)(param_1 + 4);
  local_c0 = (int *)(*(undefined4 **)(param_1 + 4))[2];
  piVar1 = (int *)*local_c0;
  local_bc = piVar1[0x2d];
  piVar10 = piVar1 + 0x19;
  piVar11 = local_80;
  for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar11 = *piVar10;
    piVar10 = piVar10 + 1;
    piVar11 = piVar11 + 1;
  }
  local_ac = piVar1[8];
  local_a8 = piVar1[9];
  local_a4 = piVar1[10];
  local_a0 = piVar1[0xb];
  piStack_f4 = (int *)0x7f7f99;
  puVar4 = (uint *)FUN_00405760();
  uVar14 = *puVar4;
  if (local_d4[0] != (undefined4 *)0x0) {
    piStack_f4 = (int *)0x7f7faf;
    LVar5 = InterlockedDecrement(local_d4[0] + 1);
    if ((LVar5 == 0) && (local_d4[0] != (undefined4 *)0x0)) {
      piStack_f4 = (int *)0x7f7fc1;
      (**(code **)*local_d4[0])();
    }
  }
  piVar10 = (int *)piVar1[0x2f];
  uVar2 = *(undefined4 *)(uVar14 + 0x18);
  piStack_f4 = (int *)0x7f7fd1;
  iVar8 = FUN_007b4290();
  uStack_b4 = *(undefined4 *)(iVar8 + 4);
  DAT_00b42e90 = param_2 & 0xffff;
  DAT_00b42eb8 = local_c0;
  FUN_007ecb20();
  piStack_f8 = local_c0;
  uStack_fc = param_2;
  piStack_100 = (int *)0x7f8014;
  piStack_f4 = (int *)uVar2;
  FUN_007f60f0();
  piStack_f4 = (int *)0x7f801c;
  FUN_007f6a30();
  piVar11 = *(int **)(local_bc + 0x38);
  piStack_f4 = (int *)0x7f802f;
  puVar6 = (undefined4 *)FUN_007016d0();
  piStack_f8 = (int *)*puVar6;
  piStack_f4 = local_80;
  piStack_104 = (int *)0x0;
  uStack_4 = 0;
  piStack_100 = piVar11;
  uStack_fc = uVar14;
  (**(code **)(*piVar10 + 0x28))();
  uStack_20 = 0xffffffff;
  if (((puVar3 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar3 + 1), LVar5 == 0)) &&
     (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)();
  }
  FUN_007016d0();
  uStack_20 = 1;
  (**(code **)(*piVar10 + 0x2c))();
  uStack_3c = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    piStack_12c = (int *)0x7f80dd;
    piStack_104 = piVar1;
    LVar5 = InterlockedDecrement(piVar1 + 1);
    if ((LVar5 == 0) && (piStack_104 != (int *)0x0)) {
      piStack_12c = (int *)0x7f80f1;
      (**(code **)*piStack_104)();
    }
  }
  (**(code **)(*piVar10 + 0x48))();
  piStack_12c = (int *)0x7f810d;
  piVar7 = (int *)FUN_007016d0();
  iStack_130 = *piVar7;
  piStack_12c = &iStack_b8;
  uStack_3c = 2;
  (**(code **)(*piVar10 + 0x30))();
  uStack_58 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    ppuStack_148 = (undefined4 **)0x7f8154;
    LVar5 = InterlockedDecrement(piVar1 + 1);
    if ((LVar5 == 0) && (piVar1 != (int *)0x0)) {
      ppuStack_148 = (undefined4 **)0x7f8168;
      (**(code **)*piVar1)();
    }
  }
  ppuStack_148 = (undefined4 **)0x7f8174;
  puVar3 = (undefined4 *)FUN_007016d0();
  uStack_14c = *puVar3;
  ppiVar15 = &piStack_100;
  ppuStack_148 = local_d4;
  puStack_158 = (undefined4 *)0x0;
  uStack_15c = 0;
  uStack_58 = 3;
  piStack_160 = piVar1;
  piStack_154 = piVar11;
  uStack_150 = uVar14;
  (**(code **)(*piVar10 + 0x34))();
  local_80[2] = 0xffffffff;
  ppiVar16 = ppiVar15;
  if (ppiVar15 != (int **)0x0) {
    piStack_168 = (int *)0x7f81bd;
    LVar5 = InterlockedDecrement((LONG *)(ppiVar15 + 1));
    if ((LVar5 == 0) && (ppiVar15 != (int **)0x0)) {
      piStack_168 = (int *)0x7f81d1;
      (*(code *)**ppiVar15)();
    }
  }
  puStack_16c = (undefined4 *)0x0;
  ppiStack_174 = (int **)0x7f81df;
  piStack_170 = piVar1;
  piStack_168 = piVar11;
  uVar13 = uVar14;
  (**(code **)(*piVar10 + 0x3c))();
  ppiStack_174 = &piStack_154;
  ppiStack_178 = (int **)0x7f81eb;
  puVar3 = (undefined4 *)FUN_007016d0();
  uStack_17c = *puVar3;
  ppiStack_174 = (int **)&iStack_130;
  ppiStack_178 = &piStack_104;
  uStack_188 = 0;
  uStack_88 = 4;
  piStack_184 = piVar11;
  uStack_180 = uVar14;
  (**(code **)(*piVar10 + 0x38))();
  ppiVar15 = ppiStack_174;
  local_a8 = 0xffffffff;
  if (((ppiStack_174 != (int **)0x0) &&
      (LVar5 = InterlockedDecrement((LONG *)(ppiStack_174 + 1)), LVar5 == 0)) &&
     (ppiVar15 != (int **)0x0)) {
    (*(code *)**ppiVar15)();
  }
  (**(code **)(*piVar1 + 0x88))();
  FUN_007d1800();
  uStack_17c = uVar13;
  uStack_1a8 = 0x7f8289;
  _memset((void *)*puStack_16c,0,DAT_00b28cb0 * 4);
  ppiVar15 = ppiStack_174;
  ppiStack_174 = (int **)piStack_168;
  puVar3 = puStack_158;
  iVar8 = local_a4;
  while (local_a4 = iVar8, puVar3 != (undefined4 *)0x0) {
    puStack_158 = (undefined4 *)*puVar3;
    DAT_00b42eb8 = (int *)puVar3[2];
    DAT_00b42e90 = local_a0 & 0xffff;
    iVar8 = *DAT_00b42eb8;
    uVar14 = *(uint *)(iVar8 + 0xb4);
    piStack_168 = DAT_00b42eb8;
    piVar7 = (int *)FUN_00405760();
    ppiVar15 = (int **)*piVar7;
    ppiStack_178 = ppiVar15;
    if (((piVar11 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar11 + 1), LVar5 == 0)) &&
       (piVar11 != (int *)0x0)) {
      (**(code **)*piVar11)();
    }
    piStack_170 = ppiVar15[6];
    puVar3 = (undefined4 *)(iVar8 + 100);
    puVar6 = (undefined4 *)&stack0xfffffed8;
    for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    piStack_154 = *(int **)(iVar8 + 0x20);
    uStack_150 = *(uint *)(iVar8 + 0x24);
    uStack_14c = *(undefined4 *)(iVar8 + 0x28);
    ppuStack_148 = *(undefined4 ***)(iVar8 + 0x2c);
    if (uStack_17c == uVar14) {
      if (uStack_180._3_1_ == '\0') {
        uStack_1a8 = local_a0;
        iStack_1ac = 0x7f85a2;
        FUN_007f68c0();
        uStack_180 = CONCAT13(1,(undefined3)uStack_180);
      }
      uStack_1a8 = 0x7f85be;
      FUN_007f60f0();
      iStack_1ac = 0x7f85d2;
      uStack_1a8 = iVar8;
      FUN_007f63d0();
      if (*(char *)((int)piStack_168 + 7) == '\0') {
        _DAT_00b4668c = 0;
      }
      FUN_007c8680();
      FUN_00765480();
      FUN_007f5b80();
      uStack_1a8 = 0x7f863e;
      FUN_007c9140();
    }
    else {
      if (uStack_180._3_1_ != '\0') {
        uStack_1a8 = local_a0;
        iStack_1ac = 0x7f837a;
        FUN_007f68c0();
        uStack_180 = uStack_180 & 0xffffff;
      }
      FUN_007f6a30();
      iVar9 = *(int *)(uVar14 + 0x38);
      uStack_1a8 = 0x7f83b0;
      FUN_007f60f0();
      ppiVar15 = ppiStack_178;
      iStack_1ac = 0x7f83c9;
      uStack_1a8 = iVar8;
      FUN_007f63d0();
      if (*(char *)((int)piStack_168 + 7) == '\0') {
        _DAT_00b4668c = 0;
      }
      FUN_007016d0();
      iStack_1ac = 0;
      uStack_1b0 = 0;
      local_ac = 5;
      uStack_1a8 = iVar9;
      (**(code **)(*piVar10 + 0x34))(iVar8);
      uStack_cc = 0xffffffff;
      if (((piStack_154 != (int *)0x0) &&
          (piVar7 = piStack_154, LVar5 = InterlockedDecrement(piStack_154 + 1), LVar5 == 0)) &&
         (piVar7 != (int *)0x0)) {
        (**(code **)*piVar7)(1);
      }
      iVar12 = iVar9;
      (**(code **)(*piVar10 + 0x3c))(iVar8,0,iVar9,ppiVar15);
      piVar7 = (int *)piVar10[0xb];
      puVar3 = (undefined4 *)FUN_007016d0(&piStack_160);
      iStack_1ac = piVar1[0x11];
      (**(code **)(*piVar7 + 0x40))
                (iStack_1ac,iVar8,0,0,iVar9,ppiVar15,*puVar3,&puStack_158,&piStack_184,0,1);
      piVar7 = (int *)piVar10[0xc];
      puVar3 = (undefined4 *)FUN_007016d0(&uStack_188);
      (**(code **)(*piVar7 + 0x40))
                (*(undefined4 *)(iVar12 + 0x58),iVar8,0,0,iVar9,ppiVar15,*puVar3,&piStack_184,
                 &uStack_1b0,0,1);
      piVar7 = piStack_12c;
      local_ac = -1;
      if (((piStack_12c != (int *)0x0) &&
          (LVar5 = InterlockedDecrement(piStack_12c + 1), LVar5 == 0)) && (piVar7 != (int *)0x0)) {
        (**(code **)*piVar7)();
      }
    }
    uStack_1a8 = 0x7f864e;
    FUN_007f6bf0();
    uStack_17c = uVar14;
    ppiVar15 = ppiStack_174;
    ppiStack_174 = (int **)piStack_168;
    puVar3 = puStack_158;
    iVar8 = local_a4;
  }
  piStack_168 = (int *)ppiStack_174;
  ppiStack_174 = ppiVar15;
  puStack_158 = puVar3;
  FUN_007a9c30();
  *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar8 + 4);
  *(undefined4 *)(iVar8 + 4) = 0;
  *(undefined4 *)(iVar8 + 8) = 0;
  *(undefined4 *)(iVar8 + 0x10) = 0;
  (**(code **)(*piVar10 + 0x4c))();
  (**(code **)(*ppiVar16[0x22b] + 0xfc))();
  *unaff_FS_OFFSET = iStack_b8;
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f86c0(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  LONG LVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *unaff_FS_OFFSET;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int iStack_14c;
  undefined4 uStack_148;
  int iStack_144;
  int iStack_140;
  undefined4 *puStack_13c;
  undefined4 *puStack_138;
  int *piStack_130;
  undefined4 *puStack_12c;
  int aiStack_128 [3];
  int *piStack_11c;
  int iStack_104;
  int *piStack_100;
  undefined4 uStack_f4;
  int iStack_f0;
  uint uStack_ec;
  int *piStack_e8;
  int *piStack_e4;
  undefined4 *local_bc;
  int local_b8 [3];
  int local_ac;
  undefined4 local_a8;
  int iStack_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int iStack_90;
  undefined4 uStack_88;
  int local_80 [10];
  undefined4 uStack_58;
  undefined4 uStack_3c;
  undefined4 uStack_20;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d032d;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_b8[0] = DAT_00b3f928;
  local_a8 = **(undefined4 **)(param_1 + 4);
  piVar6 = (int *)(*(undefined4 **)(param_1 + 4))[2];
  piVar1 = (int *)*piVar6;
  local_ac = piVar1[0x2d];
  piVar3 = piVar1 + 0x19;
  piVar13 = local_80;
  for (iVar11 = 0xd; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar13 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar13 = piVar13 + 1;
  }
  local_a0 = piVar1[8];
  local_9c = piVar1[9];
  local_98 = piVar1[10];
  local_94 = piVar1[0xb];
  piStack_e4 = (int *)0x7f8755;
  piVar3 = (int *)FUN_00405760();
  iVar11 = *piVar3;
  if (local_bc != (undefined4 *)0x0) {
    piStack_e4 = (int *)0x7f876b;
    LVar4 = InterlockedDecrement(local_bc + 1);
    if ((LVar4 == 0) && (local_bc != (undefined4 *)0x0)) {
      piStack_e4 = (int *)0x7f877d;
      (**(code **)*local_bc)();
    }
  }
  DAT_00b42e90 = param_2 & 0xffff;
  piVar3 = (int *)piVar1[0x2f];
  uVar10 = *(undefined4 *)(iVar11 + 0x18);
  DAT_00b42eb8 = piVar6;
  FUN_007ecb20();
  uStack_ec = param_2;
  iStack_f0 = 0x7f87bc;
  piStack_e8 = piVar6;
  piStack_e4 = (int *)uVar10;
  FUN_007f60f0();
  piStack_e4 = (int *)0x7f87c4;
  FUN_007f6a30();
  iVar2 = *(int *)(local_ac + 0x38);
  piStack_e4 = (int *)0x7f87db;
  iStack_90 = iVar2;
  puVar5 = (undefined4 *)FUN_007016d0();
  piStack_e8 = (int *)*puVar5;
  piStack_e4 = local_80;
  uStack_f4 = 0;
  uStack_4 = 0;
  iStack_f0 = iVar2;
  uStack_ec = iVar11;
  (**(code **)(*piVar3 + 0x28))();
  uStack_20 = 0xffffffff;
  if (piStack_e4 != (int *)0x0) {
    piStack_100 = (int *)0x7f8822;
    piVar6 = piStack_e4;
    LVar4 = InterlockedDecrement(piStack_e4 + 1);
    if ((LVar4 == 0) && (piVar6 != (int *)0x0)) {
      piStack_100 = (int *)0x7f8836;
      (**(code **)*piVar6)();
    }
  }
  piStack_100 = (int *)0x7f8842;
  piVar6 = (int *)FUN_007016d0();
  iStack_104 = *piVar6;
  piStack_100 = &local_9c;
  uStack_20 = 1;
  (**(code **)(*piVar3 + 0x2c))();
  uStack_3c = 0xffffffff;
  if (piStack_100 != (int *)0x0) {
    piStack_11c = (int *)0x7f8889;
    piVar6 = piStack_100;
    LVar4 = InterlockedDecrement(piStack_100 + 1);
    if ((LVar4 == 0) && (piVar6 != (int *)0x0)) {
      piStack_11c = (int *)0x7f889d;
      (**(code **)*piVar6)();
    }
  }
  (**(code **)(*piVar3 + 0x48))();
  piStack_e8 = (int *)piVar3[0xf];
  piStack_11c = (int *)0x7f88b9;
  puVar5 = (undefined4 *)FUN_007016d0();
  aiStack_128[2] = *puVar5;
  piStack_11c = local_b8;
  puStack_12c = (undefined4 *)0x0;
  uStack_3c = 2;
  piStack_130 = piVar1;
  aiStack_128[0] = iVar2;
  aiStack_128[1] = iVar11;
  (**(code **)(*piVar3 + 0x30))();
  uStack_58 = 0xffffffff;
  if (piStack_11c != (int *)0x0) {
    puStack_138 = (undefined4 *)0x7f8900;
    piVar6 = piStack_11c;
    LVar4 = InterlockedDecrement(piStack_11c + 1);
    if ((LVar4 == 0) && (piVar6 != (int *)0x0)) {
      puStack_138 = (undefined4 *)0x7f8914;
      (**(code **)*piVar6)();
    }
  }
  puStack_138 = (undefined4 *)0x7f8920;
  puStack_13c = (undefined4 *)FUN_007016d0();
  puStack_13c = (undefined4 *)*puStack_13c;
  puVar5 = &uStack_f4;
  puStack_138 = (undefined4 *)&stack0xffffff2c;
  uStack_148 = 0;
  iStack_14c = 0;
  uStack_58 = 3;
  iStack_144 = iVar2;
  iStack_140 = iVar11;
  (**(code **)(*piVar3 + 0x34))();
  local_80[2] = 0xffffffff;
  if (puStack_13c != (undefined4 *)0x0) {
    puStack_138 = puStack_13c;
    LVar4 = InterlockedDecrement(puStack_13c + 1);
    if ((LVar4 == 0) && (puStack_138 != (undefined4 *)0x0)) {
      (**(code **)*puStack_138)(1);
    }
  }
  iVar17 = iVar11;
  (**(code **)(*piVar3 + 0x3c))();
  puVar7 = (undefined4 *)FUN_007016d0(&iStack_14c);
  puVar7 = (undefined4 *)*puVar7;
  piVar6 = &iStack_104;
  iVar15 = 0;
  uStack_88 = 4;
  (**(code **)(*piVar3 + 0x38))(piVar1,0,0,iVar2,iVar11,puVar7,piVar6,aiStack_128 + 1);
  local_a8 = 0xffffffff;
  if (((puVar7 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar7 + 1), LVar4 == 0)) &&
     (puVar7 != (undefined4 *)0x0)) {
    (**(code **)*puVar7)(1);
  }
  (**(code **)(*piVar1 + 0x88))(DAT_00b3f928);
  _memset(_DAT_00000000,0,DAT_00b28cb0 * 4);
  piVar13 = piVar1;
  while (piVar13 != (int *)0x0) {
    piVar16 = piVar13 + 2;
    piVar13 = (int *)*piVar13;
    DAT_00b42eb8 = (int *)*piVar16;
    DAT_00b42e90 = local_a0 & 0xffff;
    iVar11 = *DAT_00b42eb8;
    iVar18 = *(int *)(iVar11 + 0xb4);
    piVar16 = DAT_00b42eb8;
    piVar8 = (int *)FUN_00405760(&stack0xfffffecc);
    iVar12 = *piVar8;
    iStack_14c = iVar12;
    puVar7 = puVar5;
    if (((puVar5 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar5 + 1), LVar4 == 0)) &&
       (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    uVar10 = *(undefined4 *)(iVar12 + 0x18);
    piVar8 = (int *)(iVar11 + 100);
    piVar14 = aiStack_128;
    for (iVar12 = 0xd; iVar12 != 0; iVar12 = iVar12 + -1) {
      *piVar14 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar14 = piVar14 + 1;
    }
    uStack_148 = *(undefined4 *)(iVar11 + 0x20);
    iStack_144 = *(int *)(iVar11 + 0x24);
    iStack_140 = *(int *)(iVar11 + 0x28);
    puStack_13c = *(undefined4 **)(iVar11 + 0x2c);
    if (iVar17 == iVar18) {
      FUN_007f60f0(local_a0,piVar16,uVar10,piVar6);
      puVar5 = (undefined4 *)FUN_007016d0(&puStack_12c);
      local_ac = 6;
      FUN_007f0bc0(iVar11,0,puStack_138,iStack_14c,*puVar5,aiStack_128,&uStack_148);
      puVar5 = puStack_12c;
      local_ac = -1;
      if (((puStack_12c != (undefined4 *)0x0) &&
          (LVar4 = InterlockedDecrement(puStack_12c + 1), LVar4 == 0)) &&
         (puVar5 != (undefined4 *)0x0)) {
        (**(code **)*puVar5)(1);
      }
      FUN_00765480(aiStack_128,0);
      FUN_007f5b80(aiStack_128,&uStack_f4);
      FUN_007f0100(uVar10,&uStack_f4,piVar1);
      iVar17 = *(int *)piVar1[0x22b];
      uVar10 = (**(code **)(**(int **)(iVar2 + 0x58) + 0x40))(0);
      (**(code **)(iVar17 + 0x88))(uVar10);
      piVar6 = (int *)piVar6[0x11];
    }
    else {
      iVar17 = iVar18;
      FUN_007f6a30(iVar11);
      puVar5 = *(undefined4 **)(iVar18 + 0x38);
      puStack_138 = puVar5;
      FUN_007f60f0(local_a0,piVar16,uVar10,piVar6);
      puVar9 = (undefined4 *)FUN_007016d0(&piStack_130);
      local_ac = 5;
      FUN_007f0bc0(iVar11,0,puVar5,iStack_14c,*puVar9,aiStack_128,&uStack_148);
      local_ac = -1;
      if (((piStack_130 != (int *)0x0) &&
          (piVar8 = piStack_130, LVar4 = InterlockedDecrement(piStack_130 + 1), LVar4 == 0)) &&
         (piVar8 != (int *)0x0)) {
        (**(code **)*piVar8)(1);
      }
      FUN_00765480(aiStack_128,0);
      FUN_007f5b80(aiStack_128,&uStack_f4);
      FUN_007f0100(uVar10,&uStack_f4,piVar1);
      (**(code **)(*piVar3 + 0x3c))(iVar11,0,puVar5,iStack_14c);
      iVar18 = *(int *)piVar6[0x22b];
      uVar10 = (**(code **)(*(int *)piVar16[0x16] + 0x40))(0);
      (**(code **)(iVar18 + 0x88))(uVar10);
      piVar6 = (int *)piVar6[0x11];
      iVar18 = iVar17;
    }
    iVar17 = **(int **)(iVar15 + 0x8ac);
    uVar10 = (**(code **)(*piVar6 + 0x38))(0);
    (**(code **)(iVar17 + 0x78))(uVar10);
    FUN_007f6bf0(iVar11,piVar3,iVar2,1);
    piVar6 = piVar16;
    iVar17 = iVar18;
    puVar5 = puVar7;
  }
  FUN_007a9c30();
  *(undefined4 *)(iStack_a4 + 0xc) = *(undefined4 *)(iStack_a4 + 4);
  *(undefined4 *)(iStack_a4 + 4) = 0;
  *(undefined4 *)(iStack_a4 + 8) = 0;
  *(undefined4 *)(iStack_a4 + 0x10) = 0;
  (**(code **)(*piVar3 + 0x4c))();
  (**(code **)(*(int *)piVar1[0x22b] + 0xfc))(0);
  *unaff_FS_OFFSET = local_b8[0];
  return;
}



void FUN_007f8db0(int param_1,uint param_2)

{
  int **ppiVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int **ppiVar11;
  int *piVar12;
  int **ppiVar13;
  int *unaff_FS_OFFSET;
  int *piVar14;
  char cVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 **ppuVar19;
  undefined1 *puVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  int **ppiStack_10c;
  undefined4 *puStack_108;
  undefined4 **ppuStack_104;
  undefined4 *puStack_100;
  undefined4 *puStack_fc;
  int *apiStack_f8 [2];
  undefined4 uStack_e8;
  undefined4 *puStack_e4;
  undefined4 *puStack_e0;
  undefined4 uStack_dc;
  int **ppiStack_d8;
  undefined4 *puStack_c4;
  undefined4 uStack_c0;
  undefined4 **ppuStack_bc;
  int *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 *local_5c;
  undefined4 uStack_58;
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int local_40 [8];
  undefined4 uStack_20;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d0380;
  local_c = *unaff_FS_OFFSET;
  puVar4 = (undefined4 *)(DAT_00b30aac ^ (uint)&stack0xffffff6c);
  *unaff_FS_OFFSET = (int)&local_c;
  local_70 = DAT_00b3f928;
  local_68 = FUN_007f5c40();
  local_6c = FUN_007f5e80();
  local_74 = **(undefined4 **)(param_1 + 4);
  local_78 = (int *)(*(undefined4 **)(param_1 + 4))[2];
  ppiVar1 = (int **)*local_78;
  piVar14 = ppiVar1[0x2d];
  ppiVar11 = ppiVar1 + 0x19;
  piVar12 = local_40;
  for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar12 = (int)*ppiVar11;
    ppiVar11 = ppiVar11 + 1;
    piVar12 = piVar12 + 1;
  }
  local_50 = ppiVar1[8];
  local_4c = ppiVar1[9];
  local_48 = ppiVar1[10];
  local_44 = ppiVar1[0xb];
  puVar5 = (undefined4 *)FUN_00405760();
  puVar5 = (undefined4 *)*puVar5;
  if (((local_5c != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(local_5c + 1), LVar6 == 0))
     && (local_5c != (undefined4 *)0x0)) {
    (**(code **)*local_5c)();
  }
  DAT_00b42e90 = param_2 & 0xffff;
  piVar12 = ppiVar1[0x2f];
  DAT_00b42eb8 = local_78;
  FUN_007ecb20();
  FUN_007f60f0();
  FUN_007f6a30();
  puVar16 = (undefined4 *)piVar14[0xe];
  FUN_007016d0();
  uStack_4 = 0;
  (**(code **)(*piVar12 + 0x28))();
  uStack_20 = 0xffffffff;
  if (piVar14 != (int *)0x0) {
    ppuStack_bc = (undefined4 **)0x7f8f30;
    LVar6 = InterlockedDecrement(piVar14 + 1);
    if ((LVar6 == 0) && (piVar14 != (int *)0x0)) {
      ppuStack_bc = (undefined4 **)0x7f8f44;
      (**(code **)*piVar14)();
    }
  }
  ppuStack_bc = (undefined4 **)0x7f8f50;
  puVar7 = (undefined4 *)FUN_007016d0();
  uStack_c0 = *puVar7;
  puVar7 = &local_6c;
  ppuStack_bc = &local_5c;
  uStack_20 = 1;
  puStack_c4 = puVar5;
  (**(code **)(*piVar12 + 0x2c))();
  local_40[1] = 0xffffffff;
  if (puVar4 != (undefined4 *)0x0) {
    ppiStack_d8 = (int **)0x7f8f98;
    LVar6 = InterlockedDecrement(puVar4 + 1);
    if ((LVar6 == 0) && (puVar4 != (undefined4 *)0x0)) {
      ppiStack_d8 = (int **)0x7f8fac;
      (**(code **)*puVar4)();
    }
  }
  (**(code **)(*piVar12 + 0x48))();
  ppiStack_d8 = (int **)0x7f8fc9;
  puVar4 = (undefined4 *)FUN_007016d0();
  uStack_dc = *puVar4;
  ppiStack_d8 = &local_78;
  uStack_e8 = 0;
  local_40[1] = 2;
  puStack_e4 = puVar16;
  puStack_e0 = puVar5;
  (**(code **)(*piVar12 + 0x30))();
  uStack_58 = 0xffffffff;
  if (puVar7 != (undefined4 *)0x0) {
    apiStack_f8[1] = (int *)0x7f9011;
    LVar6 = InterlockedDecrement(puVar7 + 1);
    if ((LVar6 == 0) && (puVar7 != (undefined4 *)0x0)) {
      apiStack_f8[1] = (int *)0x7f9025;
      (**(code **)*puVar7)();
    }
  }
  apiStack_f8[1] = (int *)0x7f9031;
  puVar4 = (undefined4 *)FUN_007016d0();
  apiStack_f8[0] = (int *)*puVar4;
  apiStack_f8[1] = (int *)&stack0xffffff6c;
  ppuStack_104 = (undefined4 **)0x0;
  puStack_108 = (undefined4 *)0x0;
  uStack_58 = 3;
  ppiStack_10c = ppiVar1;
  puStack_100 = puVar16;
  puStack_fc = puVar5;
  (**(code **)(*piVar12 + 0x34))();
  ppiVar11 = ppiStack_d8;
  local_78 = (int *)0xffffffff;
  if (((ppiStack_d8 != (int **)0x0) &&
      (LVar6 = InterlockedDecrement((LONG *)(ppiStack_d8 + 1)), LVar6 == 0)) &&
     (ppiVar11 != (int **)0x0)) {
    (*(code *)**ppiVar11)();
  }
  puVar7 = puVar5;
  (**(code **)(*piVar12 + 0x3c))(ppiVar1);
  puVar4 = (undefined4 *)FUN_007016d0(&uStack_e8);
  puVar4 = (undefined4 *)*puVar4;
  puVar20 = &stack0xffffff2c;
  ppuVar19 = &puStack_c4;
  ppiVar11 = ppiVar1;
  (**(code **)(*piVar12 + 0x38))(ppiVar1,0,0,puVar16,puVar5,puVar4,ppuVar19,puVar20);
  puVar3 = puStack_108;
  if (((puStack_108 != (undefined4 *)0x0) &&
      (LVar6 = InterlockedDecrement(puStack_108 + 1), LVar6 == 0)) && (puVar3 != (undefined4 *)0x0))
  {
    (**(code **)*puVar3)(1);
  }
  (*(code *)(*ppiVar1)[0x22])(DAT_00b3f928);
  FUN_007d1800(local_40);
  ppuStack_104 = ppuVar19;
  _memset((void *)*puVar4,0,DAT_00b28cb0 * 4);
  piVar14 = piRam00000280;
  (**(code **)(*piRam00000280 + 0x114))(piRam00000280,0,8,DAT_00b430a8);
  puVar3 = (undefined4 *)0x0;
  while (puVar5 != (undefined4 *)0x0) {
    puVar17 = (undefined4 *)*puVar5;
    DAT_00b42eb8 = (int *)puVar5[2];
    DAT_00b42e90 = 0;
    iVar9 = *DAT_00b42eb8;
    puVar5 = *(undefined4 **)(iVar9 + 0xb4);
    piVar8 = (int *)FUN_00405760(&stack0xfffffef0);
    iVar10 = *piVar8;
    iVar18 = iVar10;
    puVar22 = puVar7;
    if (((puVar7 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar7 + 1), LVar6 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    uVar21 = *(undefined4 *)(iVar10 + 0x18);
    puVar7 = (undefined4 *)(iVar9 + 100);
    ppiVar13 = apiStack_f8;
    for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
      *ppiVar13 = (int *)*puVar7;
      puVar7 = puVar7 + 1;
      ppiVar13 = ppiVar13 + 1;
    }
    puStack_108 = *(undefined4 **)(iVar9 + 0x20);
    ppuStack_104 = *(undefined4 ***)(iVar9 + 0x24);
    puStack_100 = *(undefined4 **)(iVar9 + 0x28);
    puStack_fc = *(undefined4 **)(iVar9 + 0x2c);
    cVar15 = (char)((uint)ppiVar11 >> 0x18);
    if (puVar16 == puVar5) {
      if (cVar15 == '\0') {
        FUN_007f68c0(0,1,puVar20,ppuVar19,piVar12);
        ppiVar11 = (int **)&DAT_01000000;
      }
      FUN_007c8520(apiStack_f8);
      FUN_007f6ae0(iVar9,0,iVar18,uVar21,piVar12);
      FUN_00765480(apiStack_f8,0);
      FUN_007f6bf0(iVar9,piVar12,0,1);
      puVar16 = puVar5;
      puVar3 = puVar4;
      puVar5 = puVar17;
      puVar7 = puVar22;
    }
    else {
      puVar16 = puVar5;
      if (cVar15 != '\0') {
        FUN_007f68c0(0,0,puVar20,ppuVar19,piVar12);
        ppiVar11 = (int **)0x0;
      }
      FUN_007f6a30(iVar9);
      uVar2 = puVar5[0xe];
      FUN_007f6ae0(iVar9,0,iVar18,uVar21,piVar12);
      puVar5 = (undefined4 *)FUN_007016d0(&ppiStack_10c);
      ppuStack_bc = (undefined4 **)0x5;
      (**(code **)(*piVar12 + 0x34))(iVar9,0,0,uVar2,iVar18,*puVar5,apiStack_f8,&puStack_108);
      uStack_dc = 0xffffffff;
      puVar5 = puVar17;
      if (((puVar17 != (undefined4 *)0x0) &&
          (LVar6 = InterlockedDecrement(puVar17 + 1), puVar16 = puVar17, LVar6 == 0)) &&
         (puVar17 != (undefined4 *)0x0)) {
        (**(code **)*puVar17)(1);
        puVar16 = puVar17;
      }
      (**(code **)(*piVar12 + 0x3c))(iVar9,0,uVar2,piVar14);
      FUN_00765480(apiStack_f8,0);
      FUN_007f6bf0(iVar9,piVar12,0,1);
      puVar3 = puVar4;
      puVar7 = puVar22;
    }
  }
  FUN_007a9c30();
  ppiVar1[3] = ppiVar1[1];
  ppiVar1[1] = (int *)0x0;
  ppiVar1[2] = (int *)0x0;
  ppiVar1[4] = (int *)0x0;
  (**(code **)(*piVar12 + 0x4c))();
  (**(code **)(*(int *)puVar3[0x22b] + 0xfc))(0);
  (**(code **)(*(int *)puVar3[0xa0] + 0x114))((int *)puVar3[0xa0],0,8,0);
  *unaff_FS_OFFSET = (int)ppiStack_d8;
  return;
}



void FUN_007f9410(int param_1)

{
  short sVar1;
  ushort uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int **ppiVar6;
  undefined4 *puVar7;
  int *piVar8;
  LONG LVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int unaff_EBP;
  int *unaff_ESI;
  int **ppiVar17;
  int *unaff_FS_OFFSET;
  undefined4 *puVar18;
  int iVar19;
  int *piStack_128;
  int *piStack_124;
  int *piStack_118;
  uint uStack_114;
  int *piStack_110;
  int *piStack_10c;
  undefined4 uStack_108;
  undefined4 *puStack_104;
  int *apiStack_f8 [4];
  undefined1 *puStack_e8;
  int *piStack_d4;
  undefined4 uStack_d0;
  uint *puStack_cc;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_6c;
  undefined4 *local_68;
  int local_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int aiStack_50 [8];
  undefined4 uStack_30;
  int iStack_1c;
  undefined4 uStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d03e8;
  local_c = *unaff_FS_OFFSET;
  puVar7 = (undefined4 *)(DAT_00b30aac ^ (uint)&stack0xffffff6c);
  *unaff_FS_OFFSET = (int)&local_c;
  local_64 = DAT_00b3f928;
  piVar3 = (int *)**(undefined4 **)(param_1 + 4);
  piVar4 = *(int **)(*(undefined4 **)(param_1 + 4))[2];
  uStack_a0 = 0x7f9478;
  piVar8 = (int *)FUN_00405760();
  iVar14 = *piVar8;
  if (local_68 != (undefined4 *)0x0) {
    uStack_a0 = 0x7f9492;
    LVar9 = InterlockedDecrement(local_68 + 1);
    if ((LVar9 == 0) && (local_68 != (undefined4 *)0x0)) {
      uStack_a0 = 0x7f94a5;
      (**(code **)*local_68)();
    }
  }
  puVar18 = *(undefined4 **)(iVar14 + 0x18);
  piVar8 = (int *)piVar4[0x2f];
  uStack_a0 = 8;
  uStack_a4 = 0;
  (**(code **)(**(int **)(local_64 + 0x280) + 0x114))();
  sVar1 = *(short *)(puVar18[0x27] + 0xe);
  piVar10 = piVar3;
  iVar14 = local_c;
  do {
    local_c = iVar14;
    if (sVar1 != 0) {
      piVar10 = piVar4 + 0x19;
      piVar16 = aiStack_50;
      for (iVar14 = 0xd; iVar14 != 0; iVar14 = iVar14 + -1) {
        *piVar16 = *piVar10;
        piVar10 = piVar10 + 1;
        piVar16 = piVar16 + 1;
      }
      iStack_60 = piVar4[8];
      iStack_5c = piVar4[9];
      iStack_58 = piVar4[10];
      DAT_00b42e90 = (uint)puStack_8 & 0xffff;
      iStack_54 = piVar4[0xb];
      DAT_00b42eb8 = piVar3;
      uStack_6c = DAT_00b42e90;
      FUN_007ecb20();
      FUN_007f60f0();
      FUN_007f6a30();
      piVar3 = *(int **)(unaff_EBP + 0x38);
      piVar10 = (int *)FUN_007016d0();
      puVar18 = (undefined4 *)*piVar10;
      uStack_14 = 0;
      (**(code **)(*piVar8 + 0x28))();
      uStack_30 = 0xffffffff;
      if (puVar7 != (undefined4 *)0x0) {
        puStack_cc = (uint *)0x7f95ae;
        LVar9 = InterlockedDecrement(puVar7 + 1);
        if ((LVar9 == 0) && (puVar7 != (undefined4 *)0x0)) {
          puStack_cc = (uint *)0x7f95c2;
          (**(code **)*puVar7)();
        }
      }
      puStack_cc = (uint *)0x7f95ce;
      puVar7 = (undefined4 *)FUN_007016d0();
      uStack_d0 = *puVar7;
      puStack_cc = &uStack_6c;
      uStack_30 = 1;
      piStack_d4 = unaff_ESI;
      (**(code **)(*piVar8 + 0x2c))();
      aiStack_50[1] = 0xffffffff;
      if (puVar18 != (undefined4 *)0x0) {
        puStack_e8 = (undefined1 *)0x7f9616;
        LVar9 = InterlockedDecrement(puVar18 + 1);
        if ((LVar9 == 0) && (puVar18 != (undefined4 *)0x0)) {
          puStack_e8 = (undefined1 *)0x7f962a;
          (**(code **)*puVar18)();
        }
      }
      (**(code **)(*piVar8 + 0x48))();
      iVar14 = piVar8[0xf];
      puStack_e8 = (undefined1 *)0x7f9647;
      puVar7 = (undefined4 *)FUN_007016d0();
      apiStack_f8[3] = (int *)*puVar7;
      puStack_e8 = &stack0xffffff78;
      apiStack_f8[0] = (int *)0x0;
      aiStack_50[1] = 2;
      apiStack_f8[1] = piVar3;
      apiStack_f8[2] = unaff_ESI;
      (**(code **)(*piVar8 + 0x30))();
      piVar10 = piStack_d4;
      local_68 = (undefined4 *)0xffffffff;
      if (piStack_d4 != (int *)0x0) {
        puStack_104 = (undefined4 *)0x7f968f;
        LVar9 = InterlockedDecrement(piStack_d4 + 1);
        if ((LVar9 == 0) && (piVar10 != (int *)0x0)) {
          puStack_104 = (undefined4 *)0x7f96a3;
          (**(code **)*piVar10)();
        }
      }
      puStack_104 = (undefined4 *)0x7f96af;
      puVar7 = (undefined4 *)FUN_007016d0();
      uStack_108 = *puVar7;
      puStack_104 = &uStack_a4;
      uStack_114 = 0;
      piStack_118 = (int *)0x0;
      local_68 = (undefined4 *)0x3;
      piStack_110 = piVar3;
      piStack_10c = unaff_ESI;
      (**(code **)(*piVar8 + 0x34))();
      if (apiStack_f8[1] != (int *)0x0) {
        apiStack_f8[0] = apiStack_f8[1];
        piStack_124 = (int *)0x7f96f9;
        LVar9 = InterlockedDecrement(apiStack_f8[1] + 1);
        if ((LVar9 == 0) && (apiStack_f8[0] != (int *)0x0)) {
          piStack_124 = (int *)0x7f970d;
          (**(code **)*apiStack_f8[0])();
        }
      }
      piStack_128 = (int *)0x0;
      piStack_124 = piVar3;
      (**(code **)(*piVar8 + 0x3c))(piVar4);
      puVar11 = (undefined4 *)FUN_007016d0(&puStack_104);
      puVar7 = (undefined4 *)&stack0xffffff1c;
      ppiVar17 = &piStack_d4;
      puVar18 = (undefined4 *)0x0;
      (**(code **)(*piVar8 + 0x38))(piVar4,0,0,piVar3,unaff_ESI,*puVar11);
      piVar10 = piStack_124;
      if (((piStack_124 != (int *)0x0) &&
          (LVar9 = InterlockedDecrement(piStack_124 + 1), LVar9 == 0)) && (piVar10 != (int *)0x0)) {
        (**(code **)*piVar10)(1);
      }
      (**(code **)(*piVar4 + 0x88))(DAT_00b3f928);
      _memset((void *)*puVar7,0,DAT_00b28cb0 * 4);
      while (unaff_ESI != (int *)0x0) {
        piVar10 = (int *)*unaff_ESI;
        piVar16 = (int *)unaff_ESI[2];
        iVar5 = *piVar16;
        ppiVar6 = *(int ***)(iVar5 + 0xb4);
        piVar12 = (int *)FUN_00405760(&piStack_118);
        iVar19 = *piVar12;
        if (piStack_118 != (int *)0x0) {
          piStack_128 = piStack_118;
          LVar9 = InterlockedDecrement(piStack_118 + 1);
          if ((LVar9 == 0) && (piStack_128 != (int *)0x0)) {
            (**(code **)*piStack_128)(1);
          }
        }
        piStack_128 = *(int **)(iVar19 + 0x18);
        unaff_ESI = piVar10;
        if (*(short *)(piStack_128[0x27] + 0xe) != 0) {
          DAT_00b42e90 = uStack_114;
          DAT_00b42eb8 = piVar16;
          if (ppiVar17 == ppiVar6) {
            FUN_008115c0(piStack_128);
            if (*(char *)(*(int *)(piStack_128[0x27] + 4) + 0xc) == '\0') {
              uVar13 = (*(code *)(*ppiVar6)[0x17])();
              piVar16 = ppiVar6[0x12];
            }
            else {
              uVar13 = (*(code *)(*ppiVar6)[0x17])();
              piVar16 = ppiVar6[0x13];
            }
            uVar2 = *(ushort *)(ppiVar6 + 0x10);
            piVar3[0x13] = (int)piVar16;
            piVar3[0x10] = (uint)uVar2;
            piVar3[0xf] = uVar13 & 0xffff;
            piVar3[0x12] = 0;
            piVar3[0x11] = 1;
            FUN_007f6bf0(iVar5,piVar8,piStack_124,0);
            unaff_ESI = piVar10;
            ppiVar17 = ppiVar6;
          }
          else {
            FUN_007f6a30(iVar5);
            piStack_128 = ppiVar6[0xe];
            puVar7 = (undefined4 *)(iVar5 + 100);
            ppiVar17 = apiStack_f8;
            for (iVar15 = 0xd; iVar15 != 0; iVar15 = iVar15 + -1) {
              *ppiVar17 = (int *)*puVar7;
              puVar7 = puVar7 + 1;
              ppiVar17 = ppiVar17 + 1;
            }
            uStack_108 = *(undefined4 *)(iVar5 + 0x20);
            puStack_104 = *(undefined4 **)(iVar5 + 0x24);
            puVar7 = (undefined4 *)FUN_007016d0(&piStack_110);
            piVar3 = piStack_128;
            (**(code **)(*piVar8 + 0x2c))
                      (iVar5,0,piStack_128,iVar19,*puVar7,apiStack_f8,&uStack_108);
            if (((piVar16 != (int *)0x0) &&
                (LVar9 = InterlockedDecrement(piVar16 + 1), piVar10 = piVar16, LVar9 == 0)) &&
               (piVar16 != (int *)0x0)) {
              (**(code **)*piVar16)(1);
              piVar10 = piVar16;
            }
            (**(code **)(*piVar8 + 0x48))();
            puVar7 = (undefined4 *)FUN_007016d0(&piStack_128);
            (**(code **)(*piVar8 + 0x34))(iVar5,0,0,piVar3,iVar19,*puVar7,&uStack_114,&piStack_124);
            apiStack_f8[0] = (int *)0xffffffff;
            puVar7 = puVar18;
            if (((puVar18 != (undefined4 *)0x0) &&
                (LVar9 = InterlockedDecrement(puVar18 + 1), LVar9 == 0)) &&
               (puVar18 != (undefined4 *)0x0)) {
              (**(code **)*puVar18)(1);
            }
            (**(code **)(*piVar8 + 0x3c))(iVar5,0,piVar3,iVar19);
            FUN_007f6bf0(iVar5,piVar8,piStack_124,0);
            piVar3 = piStack_128;
            puVar18 = puVar7;
            unaff_ESI = piVar10;
            ppiVar17 = ppiVar6;
          }
        }
      }
      FUN_007a9c30();
      *(undefined4 *)(iVar14 + 0xc) = *(undefined4 *)(iVar14 + 4);
      *(undefined4 *)(iVar14 + 4) = 0;
      *(undefined4 *)(iVar14 + 8) = 0;
      *(undefined4 *)(iVar14 + 0x10) = 0;
      (**(code **)(*piVar8 + 0x4c))();
      (**(code **)(*(int *)piVar4[0x22b] + 0xfc))(0);
      (**(code **)(*(int *)piVar4[0xa0] + 0x114))((int *)piVar4[0xa0],0,8,0);
LAB_007f9b1e:
      *unaff_FS_OFFSET = iStack_1c;
      return;
    }
    if (piVar10 == (int *)0x0) {
      FUN_007a9c30();
      *(undefined4 *)(iVar14 + 0xc) = *(undefined4 *)(iVar14 + 4);
      *(undefined4 *)(iVar14 + 4) = 0;
      *(undefined4 *)(iVar14 + 8) = 0;
      *(undefined4 *)(iVar14 + 0x10) = 0;
      goto LAB_007f9b1e;
    }
    piVar16 = (int *)*piVar10;
    piVar3 = (int *)piVar10[2];
    piVar4 = (int *)*piVar3;
    unaff_EBP = piVar4[0x2d];
    puVar11 = (undefined4 *)FUN_00405760();
    unaff_ESI = (int *)*puVar11;
    if (((puVar18 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar18 + 1), LVar9 == 0))
       && (puVar18 != (undefined4 *)0x0)) {
      (**(code **)*puVar18)();
    }
    piVar8 = (int *)piVar4[0x2f];
    sVar1 = *(short *)(*(int *)(unaff_ESI[6] + 0x9c) + 0xe);
    piVar10 = piVar16;
    iVar14 = local_c;
  } while( true );
}



void FUN_007f9b50(void)

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
  
  puStack_8 = &LAB_009d0458;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a92fcc;
  puVar1 = (undefined4 *)in_ECX[0x30];
  local_4 = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[0x30] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x31];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x31] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x2f];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x2f] = 0;
  }
  piVar5 = in_ECX + 0x1f;
  iVar4 = 0x10;
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
  puVar1 = (undefined4 *)in_ECX[0x31];
  local_4._0_1_ = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x30];
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x2f];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x1f,4,0x10,FUN_007016a0);
  local_4 = 0xffffffff;
  FUN_008012e0();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x007f9f2f) */
/* WARNING: Removing unreachable block (ram,0x007f9f06) */

void FUN_007f9d10(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  LONG LVar6;
  int *in_ECX;
  float local_14 [3];
  float fStack_8;
  undefined4 uStack_4;
  
  if (param_1 == 0) {
    piVar5 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
    (**(code **)(*piVar5 + 0x4c))(0);
    piVar5 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
    iVar4 = (**(code **)(*piVar5 + 0x50))(0);
    fVar2 = (float)iVar4;
  }
  else {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0x4c))();
    }
    local_14[0] = (float)iVar4;
    if (iVar4 < 0) {
      local_14[0] = local_14[0] + 4.2949673e+09;
    }
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      iVar4 = 0;
      fVar2 = 0.0;
    }
    else {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0x50))();
      fVar2 = (float)iVar4;
    }
  }
  if (iVar4 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar2 = fVar2 / local_14[0];
  local_14[2] = fVar2;
  if (fVar2 < 1.0) {
    local_14[2] = 1.0;
  }
  local_14[2] = fVar2 / local_14[2];
  if (fVar2 < 1.0) {
    fVar2 = 1.0;
  }
  in_ECX[0x32] = 0;
  local_14[1] = 0.05;
  fStack_8 = 1.0 / fVar2 - 0.05;
  uStack_4 = 0;
  do {
    if ((int *)in_ECX[in_ECX[0x32] + 0x1f] != (int *)0x0) {
      iVar4 = (**(code **)(*(int *)in_ECX[in_ECX[0x32] + 0x1f] + 0x4c))();
      fVar2 = (float)iVar4;
      if (iVar4 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      iVar4 = (**(code **)(*(int *)in_ECX[in_ECX[0x32] + 0x1f] + 0x50))();
      fVar3 = (float)iVar4;
      if (iVar4 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      fVar2 = fVar2 / fVar3;
      local_14[0] = fVar2;
      if (fVar2 < 1.0) {
        local_14[0] = 1.0;
      }
      local_14[0] = fVar2 / local_14[0];
      if (fVar2 < 1.0) {
        fVar2 = 1.0;
      }
      FUN_00702ec0(0,(float)(in_ECX[0x32] & 3) * 0.5 - 1.0,
                   (float)((uint)in_ECX[0x32] >> 2) * -0.5 + 1.0,local_14[0] * 0.49,
                   (1.0 / fVar2) * -0.49);
      FUN_00703050();
      iVar4 = in_ECX[0x2f];
      piVar5 = *(int **)(iVar4 + 0xbc);
      if (piVar5 != in_ECX) {
        if (((piVar5 != (int *)0x0) && (LVar6 = InterlockedDecrement(piVar5 + 1), LVar6 == 0)) &&
           (piVar5 != (int *)0x0)) {
          (**(code **)*piVar5)(1);
        }
        *(int **)(iVar4 + 0xbc) = in_ECX;
        InterlockedIncrement(in_ECX + 1);
      }
      (**(code **)(*in_ECX + 0x18))(in_ECX[0x2f]);
      if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
         ((char)DAT_00b3f928[0x83] == '\x01')) {
        (**(code **)(*DAT_00b3f928 + 0x144))(local_14);
      }
      FUN_00709c60(DAT_00b3f928);
      iVar4 = in_ECX[0x32];
      puVar1 = (undefined4 *)in_ECX[iVar4 + 0x1f];
      if (puVar1 != (undefined4 *)0x0) {
        LVar6 = InterlockedDecrement(puVar1 + 1);
        if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        in_ECX[iVar4 + 0x1f] = 0;
      }
      iVar4 = in_ECX[0x2f];
      puVar1 = *(undefined4 **)(iVar4 + 0xbc);
      if (puVar1 != (undefined4 *)0x0) {
        LVar6 = InterlockedDecrement(puVar1 + 1);
        if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        *(undefined4 *)(iVar4 + 0xbc) = 0;
      }
    }
    in_ECX[0x32] = in_ECX[0x32] + 1;
  } while ((uint)in_ECX[0x32] < 0x10);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_007fa090(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  char *local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined1 local_294 [60];
  char *local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined1 local_248 [60];
  char local_20c [260];
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_2a4;
  local_258 = "imagespace\\1x\\v\\base_old.v.hlsl";
  local_254 = 0;
  local_250 = 0;
  local_24c = 0;
  _memset(local_248,0,0x3c);
  FUN_00801030(local_258,local_108);
  _sprintf(local_20c,"DEBUG.vso");
  puVar2 = (undefined4 *)FUN_008014e0(local_108,&local_254,"vs_1_1",local_20c,0,0);
  puVar1 = *(undefined4 **)(in_ECX + 0xc0);
  if (puVar1 != puVar2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xc0) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  local_2a4 = "imagespace\\1x\\p\\copy.p.hlsl";
  local_2a0 = 0;
  local_29c = 0;
  local_298 = 0;
  _memset(local_294,0,0x3c);
  FUN_00801030(local_2a4,local_108);
  _sprintf(local_20c,"DEBUG.pso");
  puVar2 = (undefined4 *)FUN_00801c90(local_108,&local_2a0,"ps_1_3",local_20c,0,0);
  puVar1 = *(undefined4 **)(in_ECX + 0xc4);
  if (puVar1 != puVar2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xc4) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  return;
}



undefined4 FUN_007fa220(void)

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
  int *local_14;
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
  FUN_00772630(&local_14);
  local_4 = 1;
  FUN_00801110(local_14,0,3,2);
  FUN_00771640(0);
  FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x70) + 0x14),local_14);
  iVar2 = *(int *)(in_ECX + 0x70);
  puVar3 = *(undefined4 **)(in_ECX + 0xc0);
  puVar4 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar4 + 1);
      if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x70);
  puVar3 = *(undefined4 **)(in_ECX + 0xc4);
  puVar4 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar4 + 1);
      if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
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
  FUN_00772cd0(0x13,2,0);
  iVar2 = *(int *)(in_ECX + 0x70);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x14,2,0);
  iVar2 = *(int *)(in_ECX + 0x70);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xa8,0xf,0);
  local_4 = 0xffffffff;
  if (local_14 != (int *)0x0) {
    local_14[0x17] = local_14[0x17] + -1;
    if (local_14[0x17] == 0) {
      FUN_00772560();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_007fa470(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  LONG LVar5;
  int in_ECX;
  int *piVar6;
  int iVar7;
  
  iVar7 = -1;
  piVar6 = (int *)(in_ECX + 0x80);
  iVar2 = 2;
  do {
    if ((((iVar7 != -1) || ((piVar6[-1] == 0 && (iVar7 = iVar2 + -2, iVar7 != -1)))) ||
        ((*piVar6 == 0 && (iVar7 = iVar2 + -1, iVar7 != -1)))) ||
       ((piVar6[1] == 0 && (iVar7 = iVar2, iVar2 != -1)))) goto LAB_007fa4cf;
    if (piVar6[2] == 0) {
      iVar7 = iVar2 + 1;
    }
    uVar1 = iVar2 + 2;
    piVar6 = piVar6 + 4;
    iVar2 = iVar2 + 4;
  } while (uVar1 < 0x10);
  if (iVar7 != -1) {
LAB_007fa4cf:
    if (param_1 != (int *)0x0) {
      for (puVar3 = (undefined4 *)(**(code **)(*param_1 + 4))(); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[1]) {
        if (puVar3 == &DAT_00b3f95c) {
          piVar6 = *(int **)(in_ECX + 0x7c + iVar7 * 4);
          if (piVar6 == param_1) {
            return;
          }
          goto joined_r0x007fa52f;
        }
      }
      puVar4 = (undefined *)(**(code **)(*param_1 + 4))();
      if (puVar4 != (undefined *)0x0) {
        while (puVar4 != &DAT_00b3ff04) {
          puVar4 = *(undefined **)(puVar4 + 4);
          if (puVar4 == (undefined *)0x0) {
            return;
          }
        }
        piVar6 = *(int **)(in_ECX + 0x7c + iVar7 * 4);
        if (piVar6 != param_1) {
joined_r0x007fa52f:
          if (((piVar6 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar6 + 1), LVar5 == 0)) &&
             (piVar6 != (int *)0x0)) {
            (**(code **)*piVar6)(1);
          }
          *(int **)(in_ECX + 0x7c + iVar7 * 4) = param_1;
          InterlockedIncrement(param_1 + 1);
        }
      }
    }
  }
  return;
}



undefined1 FUN_007fa580(void)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0496;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar2 = FUN_008025f0(uVar3);
  iVar4 = FUN_00401f00(0xc0);
  local_4 = 0;
  if (iVar4 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    iVar4 = FUN_00401f00(0x70);
    local_4._0_1_ = 1;
    if (iVar4 == 0) {
      local_4 = (uint)local_4._1_3_ << 8;
      puVar6 = (undefined4 *)FUN_00709d10(0);
    }
    else {
      uVar5 = FUN_00703230(0,0,1,1,1,4,1,2,1);
      local_4 = (uint)local_4._1_3_ << 8;
      puVar6 = (undefined4 *)FUN_00709d10(uVar5);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xbc);
  local_4 = 0xffffffff;
  if (puVar1 != puVar6) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar1 + 1);
      if ((LVar7 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xbc) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  FUN_00702970(4,0,0);
  FUN_00702ec0(0,0xbf800000,0x3f800000,0x40000000,0xc0000000);
  FUN_00703050();
  FUN_00702fc0(0,0,0,0,0x3f800000,0x3f800000);
  FUN_00707610();
  FUN_00707370(0,1);
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}



void FUN_007fa730(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0508;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00802540(uVar2);
  piVar4 = in_ECX + 0x1f;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a92fcc;
  _eh_vector_constructor_iterator_(piVar4,4,0x10,FUN_007c88a0,FUN_007016a0);
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  puVar1 = (undefined4 *)in_ECX[0x30];
  local_4 = CONCAT31(local_4._1_3_,4);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x30] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x31];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x31] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x2f];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x2f] = 0;
  }
  iStack_14 = 0x10;
  do {
    puVar1 = (undefined4 *)*piVar4;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    iStack_14 = iStack_14 + -1;
  } while (iStack_14 != 0);
  *(undefined1 *)(in_ECX + 8) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007fa870(byte param_1)

{
  FUN_007f9b50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_007fa890(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x80))();
  iVar1 = **(int **)(in_ECX[0x1c] + 0x24);
  puVar2 = (undefined4 *)in_ECX[in_ECX[0x32] + 0x1f];
  puVar3 = *(undefined4 **)(iVar1 + 4);
  if (puVar3 != puVar2) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar1 + 4) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  FUN_0076ce40(in_ECX[0xe],in_ECX + 0x1c);
  in_ECX[0xe] = in_ECX[0xe] + 1;
  return 0;
}



int * FUN_007fa910(void)

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
  iVar3 = FUN_00401f00(0xcc);
  if (iVar3 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_007fa730();
  }
  (**(code **)(*piVar7 + 0x84))();
  FUN_007fa090();
  FUN_007fa220();
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



void FUN_007faa90(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xac))();
                    /* WARNING: Could not recover jumptable at 0x007faaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0xb0))();
  return;
}



void FUN_007faab0(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa8))();
  FUN_0085e660();
  return;
}



void FUN_007faad0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (param_1 < 0x14) {
    (&DAT_00b47018)[param_1 * 8] = param_2;
    (&DAT_00b4701c)[param_1 * 8] = param_3;
    (&DAT_00b47020)[param_1 * 8] = param_4;
    (&DAT_00b47024)[param_1 * 8] = param_5;
  }
  return;
}



void FUN_007fab00(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (param_1 < 0x14) {
    (&DAT_00b47008)[param_1 * 8] = param_2;
    (&DAT_00b4700c)[param_1 * 8] = param_3;
    (&DAT_00b47010)[param_1 * 8] = param_4;
    (&DAT_00b47014)[param_1 * 8] = param_5;
  }
  return;
}



void FUN_007fab30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_00b46f78 = param_1;
  DAT_00b46f7c = param_2;
  DAT_00b46f80 = param_3;
  DAT_00b46f84 = param_4;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007fab60(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  if ((param_1 != 0) && (param_3 - 0x156U < 3)) {
    if (*(char *)(param_1 + 0xe4) == '\0') {
      fVar3 = (float10)FUN_007c8480();
      _DAT_00b46ff8 = (float)fVar3;
      if (param_3 == 0x158) {
        iVar2 = *(int *)(param_1 + 0xec);
        fVar3 = (float10)FUN_0043f490(0,1);
        _DAT_00b46df8 =
             (float)((fVar3 / (float10)3600.0) * (float10)6.283180236816406 * (float10)iVar2);
      }
    }
    else {
      fVar1 = *(float *)(param_2 + 0x44);
      _DAT_00b46ff8 = *(float *)(param_2 + 0x40) * 0.255;
      if (param_3 == 0x158) {
        fVar3 = (float10)FUN_0043f490(0,1);
        _DAT_00b46df8 =
             (float)((fVar3 / (float10)3600.0) * (float10)6.283180236816406 * (float10)fVar1 *
                    (float10)255.0);
        return;
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007fac40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_009d05a5;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00802540(uVar2);
  *in_ECX = &PTR_FUN_00a930c4;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  puVar1 = (undefined4 *)in_ECX[9];
  local_4 = 8;
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[9] = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x23];
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0x23] = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x24];
  if (puVar1 != param_2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0x24] = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x25];
  if (puVar1 != param_3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0x25] = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x26];
  if (puVar1 != param_4) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0x26] = param_4;
    if (param_4 != (undefined4 *)0x0) {
      InterlockedIncrement(param_4 + 1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x1f];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x1f] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x20];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x20] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x21];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x21] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x22];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x22] = 0;
  }
  in_ECX[0x27] = 0;
  _DAT_00b46964 = 0;
  _DAT_00b46968 = 0;
  _DAT_00b4696c = 0;
  _DAT_00b46970 = 0;
  _DAT_00b46974 = 0;
  _DAT_00b46978 = 0;
  _DAT_00b4697c = 0;
  _DAT_00b46980 = 0;
  DAT_00b46984 = 0;
  _memset(&DAT_00b46930,0,0x31);
  if (DAT_00b42f48 < 7) {
    DAT_00b2dcfc = 8;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007faf20(void)

{
  int *piVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d05a5;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a930c4;
  local_4 = 8;
  piVar4 = &DAT_00b47288;
  do {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0xb47308);
  iVar5 = 0;
  do {
    puVar2 = *(undefined4 **)((int)&DAT_00b46ed8 + iVar5);
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)((int)&DAT_00b46ed8 + iVar5) = 0;
    }
    puVar2 = *(undefined4 **)((int)&DAT_00b46c20 + iVar5);
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)((int)&DAT_00b46c20 + iVar5) = 0;
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x9c);
  piVar4 = &DAT_00b473d0;
  do {
    if (*piVar4 != 0) {
      piVar1 = (int *)(*piVar4 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0xb474a8);
  puVar2 = (undefined4 *)in_ECX[9];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[9] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x23];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x23] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x24];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x24] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x25];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x25] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x26];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x26] = 0;
  }
  in_ECX[0x27] = 0;
  puVar2 = (undefined4 *)in_ECX[0x26];
  local_4._0_1_ = 7;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x25];
  local_4._0_1_ = 6;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x24];
  local_4._0_1_ = 5;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x23];
  local_4._0_1_ = 4;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x22];
  local_4._0_1_ = 3;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x21];
  local_4._0_1_ = 2;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x20];
  local_4._0_1_ = 1;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x1f];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_008012e0();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_007fb250(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LONG LVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  
  FUN_008025f0();
  piVar8 = &DAT_00b47288;
  do {
    puVar7 = (undefined4 *)*piVar8;
    if (puVar7 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar7 + 1);
      if ((LVar6 == 0) && (puVar7 != (undefined4 *)0x0)) {
        (**(code **)*puVar7)(1);
      }
      *piVar8 = 0;
    }
    piVar8 = piVar8 + 1;
  } while ((int)piVar8 < 0xb47308);
  iVar9 = 0;
  do {
    puVar7 = *(undefined4 **)((int)&DAT_00b46ed8 + iVar9);
    if (puVar7 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar7 + 1);
      if ((LVar6 == 0) && (puVar7 != (undefined4 *)0x0)) {
        (**(code **)*puVar7)(1);
      }
      *(undefined4 *)((int)&DAT_00b46ed8 + iVar9) = 0;
    }
    puVar7 = *(undefined4 **)((int)&DAT_00b46c20 + iVar9);
    if (puVar7 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar7 + 1);
      if ((LVar6 == 0) && (puVar7 != (undefined4 *)0x0)) {
        (**(code **)*puVar7)(1);
      }
      *(undefined4 *)((int)&DAT_00b46c20 + iVar9) = 0;
    }
    iVar9 = iVar9 + 4;
  } while (iVar9 < 0x9c);
  piVar8 = &DAT_00b473d0;
  do {
    if (*piVar8 != 0) {
      piVar1 = (int *)(*piVar8 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
      *piVar8 = 0;
    }
    uVar5 = DAT_00b25adc;
    uVar4 = DAT_00b25ad8;
    uVar3 = DAT_00b25ad4;
    uVar2 = DAT_00b25ad0;
    piVar8 = piVar8 + 1;
  } while ((int)piVar8 < 0xb474a8);
  DAT_00b46cc8 = DAT_00b25ad0;
  DAT_00b46cd0 = DAT_00b25ad8;
  DAT_00b46cd4 = DAT_00b25adc;
  DAT_00b46ccc = DAT_00b25ad4;
  puVar7 = &DAT_00b46cc8;
  puVar10 = &DAT_00b46cd8;
  for (iVar9 = 0x80; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  DAT_00b46f78 = uVar2;
  DAT_00b46f80 = uVar4;
  DAT_00b46f84 = uVar5;
  DAT_00b46f7c = uVar3;
  puVar7 = &DAT_00b46f78;
  puVar10 = &DAT_00b46f88;
  for (iVar9 = 0xc0; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  return 1;
}



void FUN_007fb390(void)

{
  int in_ECX;
  uint uVar1;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    uVar1 = 0;
    do {
      if (*(int **)((int)&DAT_00b47288 + uVar1) != (int *)0x0) {
        (**(code **)(**(int **)((int)&DAT_00b47288 + uVar1) + 0x5c))();
      }
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x80);
  }
  uVar1 = 0;
  do {
    if (*(int **)((int)&DAT_00b46ed8 + uVar1) != (int *)0x0) {
      (**(code **)(**(int **)((int)&DAT_00b46ed8 + uVar1) + 0x44))();
    }
    if (*(int **)((int)&DAT_00b46c20 + uVar1) != (int *)0x0) {
      (**(code **)(**(int **)((int)&DAT_00b46c20 + uVar1) + 0x44))();
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x9c);
  FUN_0077a4a0();
  return;
}



void FUN_007fb400(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  piVar1 = *(int **)(param_4 + 0x18);
  if (piVar1 == (int *)0x0) {
    bVar3 = false;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x54))();
    bVar3 = iVar2 == 10;
  }
  if ((-(uint)bVar3 & (uint)piVar1) != 0) {
    *(undefined1 *)((-(uint)bVar3 & (uint)piVar1) + 0x100) = 0;
  }
  FUN_0077a1b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007fb470(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  int in_ECX;
  short sVar6;
  int in_stack_00000010;
  undefined4 uVar7;
  undefined1 uVar8;
  
  iVar1 = *(int *)(in_stack_00000010 + 8);
  if ((*(int **)(in_stack_00000010 + 0x18) == (int *)0x0) ||
     (iVar4 = (**(code **)(**(int **)(in_stack_00000010 + 0x18) + 0x54))(), iVar4 != 10)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(in_stack_00000010 + 0x18);
  }
  if ((0x155 < DAT_00b42e90) && (DAT_00b42e90 < 0x15b)) goto LAB_007fb67d;
  bVar3 = false;
  bVar2 = false;
  sVar6 = (short)_DAT_00b42eac;
  if (iVar1 == 0) {
LAB_007fb5c3:
    if (((0x14d < DAT_00b42e90) && (DAT_00b42e90 < 0x152)) || (sVar6 == 5)) {
      if ((*(ushort *)(iVar1 + 0x18) >> 9 & 1) == 0) {
        if ((*(byte *)(iVar1 + 0x18) & 1) == 0) {
          if (sVar6 == 5) {
            pcVar5 = *(code **)(**(int **)(in_ECX + 0x18) + 100);
            uVar8 = 0;
            uVar7 = 0xf;
            goto LAB_007fb67a;
          }
        }
        else if (sVar6 == 5) goto LAB_007fb61b;
        (**(code **)(**(int **)(in_ECX + 0x18) + 100))(0xf,1,0);
        (**(code **)(**(int **)(in_ECX + 0x18) + 100))(0x19,5,0);
        uVar8 = 0;
      }
      else {
LAB_007fb61b:
        (**(code **)(**(int **)(in_ECX + 0x18) + 8))(iVar1);
        if (((*(byte *)(iVar1 + 0x18) & 1) == 0) ||
           ((**(code **)(**(int **)(in_ECX + 0x18) + 100))(0x1b,0,0),
           (*(ushort *)(iVar1 + 0x18) >> 9 & 1) != 0)) goto LAB_007fb67d;
        (**(code **)(**(int **)(in_ECX + 0x18) + 100))(0xf,1,0);
        (**(code **)(**(int **)(in_ECX + 0x18) + 100))(0x19,5,0);
        uVar8 = 0x80;
      }
      pcVar5 = *(code **)(**(int **)(in_ECX + 0x18) + 100);
      goto LAB_007fb678;
    }
    (**(code **)(**(int **)(in_ECX + 0x18) + 100))(0xf,0,0);
    pcVar5 = *(code **)(**(int **)(in_ECX + 0x18) + 100);
    uVar8 = 0;
    uVar7 = 0x1b;
  }
  else {
    if (((*(ushort *)(iVar1 + 0x18) >> 9 & 1) != 0) &&
       (((*(uint *)(iVar4 + 0x1c) & 0x800) == 0 || (*(float *)(iVar4 + 0x20) < 1.0)))) {
      bVar2 = true;
    }
    if (((*(byte *)(iVar1 + 0x18) & 1) == 0) ||
       ((1.0 <= *(float *)(iVar4 + 0x20) && ((*(uint *)(iVar4 + 0x1c) & 0x100) == 0)))) {
      if (!bVar2) goto LAB_007fb5c3;
    }
    else {
      bVar3 = true;
    }
    if (sVar6 == 5) goto LAB_007fb5c3;
    pcVar5 = *(code **)(**(int **)(in_ECX + 0x18) + 100);
    if (bVar3) {
      (*pcVar5)(0x1b,1,0);
      (**(code **)(**(int **)(in_ECX + 0x18) + 100))
                (0x13,(*(int **)(in_ECX + 0x18))[(*(byte *)(iVar1 + 0x18) >> 1 & 0xf) + 8],0);
      pcVar5 = *(code **)(**(int **)(in_ECX + 0x18) + 100);
      iVar4 = (*(int **)(in_ECX + 0x18))[(*(ushort *)(iVar1 + 0x18) >> 5 & 0xf) + 8];
      uVar7 = 0x14;
    }
    else {
      iVar4 = 0;
      uVar7 = 0x1b;
    }
    (*pcVar5)(uVar7,iVar4,0);
    pcVar5 = *(code **)(**(int **)(in_ECX + 0x18) + 100);
    if (!bVar2) {
      uVar8 = 0;
      uVar7 = 0xf;
      goto LAB_007fb67a;
    }
    (*pcVar5)(0xf,1,0);
    (**(code **)(**(int **)(in_ECX + 0x18) + 100))
              (0x19,(*(int **)(in_ECX + 0x18))[(*(ushort *)(iVar1 + 0x18) >> 10 & 7) + 0x13],0);
    uVar8 = *(undefined1 *)(iVar1 + 0x1a);
    pcVar5 = *(code **)(**(int **)(in_ECX + 0x18) + 100);
LAB_007fb678:
    uVar7 = 0x18;
  }
LAB_007fb67a:
  (*pcVar5)(uVar7,uVar8,0);
LAB_007fb67d:
  (**(code **)(**(int **)(in_ECX + 0x18) + 0x20))(*(undefined4 *)(in_stack_00000010 + 0x1c));
  (**(code **)(**(int **)(in_ECX + 0x18) + 0x24))(*(undefined4 *)(in_stack_00000010 + 0x28));
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_007fb6f0(undefined4 param_1,float *param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6,float *param_7)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  LONG LVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  int unaff_ESI;
  float *pfVar8;
  float *pfVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  bool bVar13;
  float10 extraout_ST0;
  float10 fVar14;
  float *pfStack_294;
  float *pfStack_290;
  float *pfStack_28c;
  float *pfStack_288;
  undefined4 uStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float local_24c;
  float fStack_248;
  undefined4 *puStack_244;
  int local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  undefined4 *puStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  undefined4 uStack_214;
  float afStack_210 [35];
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  int *piStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float *pfStack_f8;
  int iStack_f4;
  float afStack_f0 [8];
  undefined4 uStack_d0;
  undefined1 auStack_cc [8];
  undefined1 auStack_c4 [92];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [88];
  
  piVar4 = *(int **)(param_5 + 0x18);
  local_24c = (float)in_ECX;
  if (piVar4 == (int *)0x0) {
    bVar13 = false;
  }
  else {
    iVar7 = (**(code **)(*piVar4 + 0x54))();
    bVar13 = iVar7 == 10;
  }
  uVar3 = -(uint)bVar13 & (uint)piVar4;
  bVar13 = (*(byte *)(uVar3 + 0x1c) & 2) != 0;
  local_240 = DAT_00b42e90;
  uStack_25c = CONCAT13(bVar13,(undefined3)uStack_25c);
  if (bVar13) {
    if (param_3 == 0) {
      return 0;
    }
    if (*(int *)(in_ECX + 0x34) == 0) {
      pfStack_288 = (float *)0x3;
      pfStack_28c = (float *)0x0;
      pfStack_290 = param_7;
      pfStack_294 = param_2;
      FUN_007655f0();
    }
    pfStack_288 = (float *)0x7fb786;
    (**(code **)(**(int **)((int)local_24c + 0x18) + 0x30))();
  }
  pfStack_288 = param_7;
  pfStack_28c = (float *)0x7fb79d;
  FUN_00765480();
  if (DAT_00b42eac != 5) {
    fVar14 = (float10)1;
    if (*(char *)(uVar3 + 0x100) == '\0') {
      *(undefined1 *)(uVar3 + 0x100) = 1;
      fStack_100 = 0.0;
      fStack_104 = 0.0;
      fStack_108 = 0.0;
      uStack_10c = 0;
      fStack_114 = 0.0;
      fStack_118 = 0.0;
      uStack_11c = 0;
      fStack_120 = 0.0;
      fStack_128 = 0.0;
      piStack_12c = (int *)0x0;
      fStack_130 = 0.0;
      fStack_134 = 0.0;
      fStack_140 = 0.0;
      fStack_144 = 0.0;
      fStack_148 = 0.0;
      fStack_14c = 0.0;
      fStack_154 = 0.0;
      fStack_158 = 0.0;
      fStack_15c = 0.0;
      fStack_160 = 0.0;
      fStack_168 = 0.0;
      fStack_16c = 0.0;
      fStack_170 = 0.0;
      fStack_174 = 0.0;
      fStack_fc = (float)fVar14;
      fStack_110 = (float)fVar14;
      fStack_124 = (float)fVar14;
      fStack_138 = (float)fVar14;
      fStack_13c = (float)fVar14;
      fStack_150 = (float)fVar14;
      fStack_164 = (float)fVar14;
      fStack_178 = (float)fVar14;
      if ((bVar13) && (param_2 != (float *)0x0)) {
        pfVar8 = (float *)param_2[10];
        fStack_178 = *pfVar8;
        pfStack_28c = &fStack_138;
        fStack_174 = pfVar8[1];
        fStack_170 = pfVar8[2];
        fStack_168 = pfVar8[4];
        fStack_164 = pfVar8[5];
        fStack_160 = pfVar8[6];
        fStack_158 = pfVar8[8];
        fStack_154 = pfVar8[9];
        fStack_150 = pfVar8[10];
        fStack_148 = pfVar8[0xc] + DAT_00b3f92c;
        fStack_144 = pfVar8[0xd] + DAT_00b3f930;
        fStack_140 = pfVar8[0xe] + DAT_00b3f934;
        fStack_16c = pfVar8[3];
        fStack_15c = pfVar8[7];
        fStack_14c = pfVar8[0xb];
        fStack_13c = pfVar8[0xf];
        pfStack_288 = (float *)0x0;
        pfStack_290 = (float *)0x7fb9e8;
        D3DXMatrixInverse();
      }
      else {
        pfStack_288 = (float *)0x7fb9fb;
        FUN_00718a80();
        fStack_138 = afStack_210[0xc] * afStack_210[0];
        fStack_134 = afStack_210[3] * afStack_210[0xc];
        fStack_130 = afStack_210[6] * afStack_210[0xc];
        fStack_128 = afStack_210[1] * afStack_210[0xc];
        fStack_124 = afStack_210[4] * afStack_210[0xc];
        fStack_120 = afStack_210[7] * afStack_210[0xc];
        fStack_118 = afStack_210[2] * afStack_210[0xc];
        fStack_114 = afStack_210[5] * afStack_210[0xc];
        fStack_110 = afStack_210[0xc] * afStack_210[8];
        fStack_108 = afStack_210[9];
        fStack_104 = afStack_210[10];
        fStack_100 = afStack_210[0xb];
        fStack_fc = 1.0;
      }
      if (DAT_00b4696e != '\0') {
        if (((*(int **)(DAT_00b42eb8 + 0xc) == (int *)0x0) ||
            (*(char *)(**(int **)(DAT_00b42eb8 + 0xc) + 0xf5) != '\0')) ||
           ((0x146 < local_240 && (local_240 < 0x14e)))) {
          pfStack_288 = afStack_210 + 0x10;
          pfVar8 = (float *)(*(int *)((int)local_24c + 0x14) + 0x940);
          pfVar9 = afStack_210 + 0x10;
          for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pfVar9 = *pfVar8;
            pfVar8 = pfVar8 + 1;
            pfVar9 = pfVar9 + 1;
          }
          pfStack_28c = (float *)0x7fbcd4;
          D3DXMatrixTranspose();
          DAT_00b46d68 = afStack_210[0x10];
          DAT_00b46d6c = afStack_210[0x11];
          _DAT_00b46d70 = afStack_210[0x12];
          _DAT_00b46d74 = afStack_210[0x13];
          _DAT_00b46d78 = afStack_210[0x14];
          _DAT_00b46d7c = afStack_210[0x15];
          _DAT_00b46d80 = afStack_210[0x16];
          _DAT_00b46d84 = afStack_210[0x17];
          _DAT_00b46d88 = afStack_210[0x18];
          _DAT_00b46d8c = afStack_210[0x19];
          _DAT_00b46d90 = afStack_210[0x1a];
          _DAT_00b46d94 = afStack_210[0x1b];
          _DAT_00b46d98 = afStack_210[0x1c];
          _DAT_00b46d9c = afStack_210[0x1d];
          _DAT_00b46da0 = afStack_210[0x1e];
          _DAT_00b46da4 = afStack_210[0x1f];
        }
        else {
          afStack_210[0xe] = 0.0;
          afStack_210[0xd] = 0.0;
          afStack_210[0xc] = 0.0;
          afStack_210[0xb] = 0.0;
          afStack_210[9] = 0.0;
          afStack_210[8] = 0.0;
          afStack_210[7] = 0.0;
          afStack_210[6] = 0.0;
          afStack_210[4] = 0.0;
          afStack_210[3] = 0.0;
          afStack_210[2] = 0.0;
          afStack_210[1] = 0.0;
          afStack_210[0x1e] = 0.0;
          afStack_210[0x1d] = 0.0;
          afStack_210[0x1c] = 0.0;
          afStack_210[0x1b] = 0.0;
          afStack_210[0x19] = 0.0;
          afStack_210[0x18] = 0.0;
          afStack_210[0x17] = 0.0;
          afStack_210[0x16] = 0.0;
          afStack_210[0x14] = 0.0;
          afStack_210[0x13] = 0.0;
          afStack_210[0x12] = 0.0;
          afStack_210[0x11] = 0.0;
          afStack_210[0xf] = 1.0;
          afStack_210[10] = 1.0;
          afStack_210[5] = 1.0;
          afStack_210[0] = 1.0;
          afStack_210[0x1f] = 1.0;
          afStack_210[0x1a] = 1.0;
          afStack_210[0x15] = 1.0;
          afStack_210[0x10] = 1.0;
          if (param_2 == (float *)0x0) {
            pfStack_288 = afStack_210;
            pfStack_28c = (float *)0x7fbbf3;
            FUN_007640a0();
          }
          else {
            pfVar8 = (float *)param_2[10];
            pfVar9 = afStack_210;
            for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
              *pfVar9 = *pfVar8;
              pfVar8 = pfVar8 + 1;
              pfVar9 = pfVar9 + 1;
            }
          }
          afStack_210[0xc] = DAT_00b3f92c + afStack_210[0xc];
          afStack_210[0xd] = DAT_00b3f930 + afStack_210[0xd];
          afStack_210[0xe] = DAT_00b3f934 + afStack_210[0xe];
          pfStack_288 = afStack_210;
          pfStack_28c = afStack_f0;
          pfStack_290 = (float *)0x7fbc6a;
          D3DXMatrixMultiply();
          pfStack_294 = afStack_210 + 0xd;
          pfVar8 = &fStack_fc;
          pfVar9 = afStack_210 + 0xd;
          for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pfVar9 = *pfVar8;
            pfVar8 = pfVar8 + 1;
            pfVar9 = pfVar9 + 1;
          }
          pfStack_290 = pfStack_294;
          D3DXMatrixTranspose();
          pfVar8 = afStack_210 + 0x10;
          pfVar9 = &DAT_00b46d68;
          for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pfVar9 = *pfVar8;
            pfVar8 = pfVar8 + 1;
            pfVar9 = pfVar9 + 1;
          }
        }
      }
      fVar14 = (float10)1;
      if ((local_240 < 0x152) || (0x153 < local_240)) {
        iVar6 = FUN_009828c0();
        puStack_244 = (undefined4 *)FUN_009828c0();
        iVar7 = 0;
        fVar14 = extraout_ST0;
        if (((local_240 < 0x14e) || (0x151 < local_240)) && (0 < iVar6)) {
          puStack_224 = (undefined4 *)0x0;
          iVar7 = iVar6;
          pfVar8 = (float *)&DAT_00b47018;
          do {
            fStack_23c = -*pfVar8;
            pfStack_288 = &fStack_23c;
            fStack_238 = -pfVar8[1];
            pfStack_28c = &fStack_184;
            fStack_234 = -pfVar8[2];
            pfStack_290 = (float *)0x7fbe5c;
            D3DXVec3TransformNormal();
            pfStack_290 = afStack_210 + 0x20;
            pfStack_294 = &fStack_248;
            D3DXVec3Normalize();
            fStack_258 = fStack_23c;
            fStack_220 = fStack_23c;
            fStack_254 = fStack_238;
            fStack_21c = fStack_238;
            fStack_250 = fStack_234;
            fStack_218 = fStack_234;
            FUN_0043f350();
            fStack_230 = fStack_220;
            iVar7 = iVar7 + -1;
            fStack_22c = fStack_21c;
            fStack_228 = fStack_218;
            *pfVar8 = fStack_220;
            pfVar8[1] = fStack_21c;
            pfVar8[2] = fStack_218;
            pfVar8[3] = (float)puStack_224;
            pfVar8 = pfVar8 + 8;
          } while (iVar7 != 0);
          fVar14 = (float10)1;
          iVar7 = iVar6;
        }
        if (0 < (int)puStack_244) {
          pfVar8 = (float *)(&DAT_00b47018 + iVar7 * 8);
          puVar10 = puStack_244;
          do {
            fStack_230 = *pfVar8;
            fStack_22c = pfVar8[1];
            fStack_228 = pfVar8[2];
            puStack_224 = (undefined4 *)pfVar8[3];
            pfStack_288 = &fStack_220;
            pfStack_28c = &fStack_184;
            pfStack_290 = (float *)0x7fbf53;
            fStack_220 = fStack_230;
            fStack_21c = fStack_22c;
            fStack_218 = fStack_228;
            D3DXVec3TransformCoord();
            fStack_258 = fStack_184;
            fStack_254 = fStack_180;
            fStack_250 = fStack_17c;
            fStack_23c = fStack_184;
            fStack_238 = fStack_180;
            puStack_244 = puStack_224;
            fStack_234 = fStack_17c;
            if (param_2 == (float *)0x0) {
              if ((local_240 == 0x14e) || (local_240 == 0x14f)) {
                fStack_248 = param_7[0xc];
                fStack_23c = fStack_248 * fStack_184;
                fStack_238 = fStack_248 * fStack_180;
                fStack_234 = fStack_248 * fStack_17c;
              }
              else {
                puStack_244 = (undefined4 *)((float)puStack_224 / param_7[0xc]);
              }
            }
            puVar10 = (undefined4 *)((int)puVar10 + -1);
            *pfVar8 = fStack_23c;
            pfVar8[1] = fStack_238;
            pfVar8[2] = fStack_234;
            pfVar8[3] = (float)puStack_244;
            pfVar8 = pfVar8 + 8;
          } while (puVar10 != (undefined4 *)0x0);
          fVar14 = (float10)1;
        }
      }
      fStack_21c = DAT_00b4665c;
      fStack_220 = DAT_00b46658;
      fStack_218 = DAT_00b46660;
      uStack_214 = DAT_00b46664;
      if (local_240 - 0x147U < 7) {
        fStack_258 = DAT_00b46658 - DAT_00b3f92c;
        fStack_254 = DAT_00b4665c - DAT_00b3f930;
        fStack_250 = DAT_00b46660 - DAT_00b3f934;
      }
      else {
        fStack_184 = DAT_00b46658;
        pfStack_288 = &fStack_184;
        fStack_180 = DAT_00b4665c;
        pfStack_28c = &fStack_258;
        fStack_17c = DAT_00b46660;
        pfStack_290 = (float *)0x7fc161;
        D3DXVec3TransformCoord();
        fVar14 = (float10)1;
      }
      DAT_00b46f94 = (float)fVar14;
      _DAT_00b46db4 = (float)fVar14;
      _DAT_00b46da8 = fStack_258;
      _DAT_00b46dac = fStack_254;
      _DAT_00b46db0 = fStack_250;
      DAT_00b46f88 = fStack_258;
      DAT_00b46f8c = fStack_254;
      DAT_00b46f90 = fStack_250;
    }
    if (DAT_00b46979 != '\0') {
      if ((bVar13) && (param_2 != (float *)0x0)) {
        afStack_210[0] = (float)fVar14;
        afStack_210[1] = 0.0;
        afStack_210[2] = 0.0;
        fStack_258 = DAT_00b3f92c;
        fStack_254 = DAT_00b3f930;
        afStack_210[3] = DAT_00b3f92c;
        fStack_250 = DAT_00b3f934;
        afStack_210[4] = 0.0;
        afStack_210[6] = 0.0;
        afStack_210[5] = (float)fVar14;
        afStack_210[7] = DAT_00b3f930;
        afStack_210[8] = 0.0;
        afStack_210[9] = 0.0;
        afStack_210[10] = (float)fVar14;
        afStack_210[0xb] = DAT_00b3f934;
        afStack_210[0xc] = 0.0;
        afStack_210[0xd] = 0.0;
        afStack_210[0xe] = 0.0;
      }
      else {
        afStack_210[0] = *param_7;
        afStack_210[1] = param_7[1];
        afStack_210[2] = param_7[2];
        afStack_210[3] = param_7[9];
        afStack_210[4] = param_7[3];
        afStack_210[5] = param_7[4];
        afStack_210[6] = param_7[5];
        afStack_210[7] = param_7[10];
        afStack_210[8] = param_7[6];
        afStack_210[9] = param_7[7];
        afStack_210[10] = param_7[8];
        afStack_210[0xb] = param_7[0xb];
        afStack_210[0xc] = 0.0;
        afStack_210[0xd] = 0.0;
        afStack_210[0xe] = 0.0;
        fVar14 = (float10)param_7[0xc];
      }
      afStack_210[0xe] = 0.0;
      afStack_210[0xd] = 0.0;
      afStack_210[0xc] = 0.0;
      afStack_210[0xf] = (float)fVar14;
      pfVar8 = afStack_210;
      pfVar9 = afStack_210 + 0x10;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar9 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar9 = pfVar9 + 1;
      }
      _DAT_00b46e18 = afStack_210[0x10];
      _DAT_00b46e1c = afStack_210[0x11];
      _DAT_00b46e20 = afStack_210[0x12];
      _DAT_00b46e24 = afStack_210[0x13];
      _DAT_00b46e28 = afStack_210[0x14];
      _DAT_00b46e2c = afStack_210[0x15];
      _DAT_00b46e30 = afStack_210[0x16];
      _DAT_00b46e34 = afStack_210[0x17];
      _DAT_00b46e38 = afStack_210[0x18];
      _DAT_00b46e3c = afStack_210[0x19];
      _DAT_00b46e40 = afStack_210[0x1a];
      _DAT_00b46e44 = afStack_210[0x1b];
      _DAT_00b46e48 = afStack_210[0x1c];
      _DAT_00b46e4c = afStack_210[0x1d];
      _DAT_00b46e50 = afStack_210[0x1e];
      _DAT_00b46e54 = afStack_210[0x1f];
      _DAT_00b46e58 = DAT_00b44ee8;
      _DAT_00b46e5c = DAT_00b44eec;
      _DAT_00b46e60 = DAT_00b44ef0;
      _DAT_00b46e64 = DAT_00b44ef4;
      _DAT_00b46e68 = DAT_00b44ef8;
      _DAT_00b46e6c = DAT_00b44efc;
      _DAT_00b46e70 = DAT_00b44f00;
      _DAT_00b46e74 = DAT_00b44f04;
    }
    if ((DAT_00b4697f != '\0') && (param_2 != (float *)0x0)) {
      pfStack_288 = afStack_210 + 0x10;
      pfVar8 = (float *)param_2[10];
      pfVar9 = afStack_210 + 0x10;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar9 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar9 = pfVar9 + 1;
      }
      pfStack_28c = (float *)0x7fc513;
      D3DXMatrixTranspose();
      pfVar8 = afStack_210 + 0x10;
      pfVar9 = (float *)&DAT_00b46e78;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar9 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar9 = pfVar9 + 1;
      }
    }
    pfVar8 = *(float **)(DAT_00b43104 + 0x280);
    if (local_240 - 0x14eU < 4) {
      iStack_f4 = **(int **)(DAT_00b42eb8 + 0xc);
      pfStack_f8 = pfVar8;
      if (*(char *)(iStack_f4 + 0x214) == '\0') {
        piVar4 = (int *)(iStack_f4 + 0x150);
        iVar7 = *(int *)((int)local_24c + 0x14);
        pfVar8 = (float *)(iVar7 + 0x980);
        pfVar9 = afStack_210 + 0x10;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar9 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          pfVar9 = pfVar9 + 1;
        }
        pfStack_28c = afStack_210;
        afStack_210[0x1c] =
             -(DAT_00b3f930 * afStack_210[0x14] + DAT_00b3f92c * afStack_210[0x10] +
              DAT_00b3f934 * afStack_210[0x18]);
        afStack_210[0x1d] =
             -(afStack_210[0x19] * DAT_00b3f934 +
              afStack_210[0x11] * DAT_00b3f92c + afStack_210[0x15] * DAT_00b3f930);
        fStack_248 = DAT_00b3f934 * afStack_210[0x1a] +
                     afStack_210[0x16] * DAT_00b3f930 + afStack_210[0x12] * DAT_00b3f92c;
        afStack_210[0x1e] = -fStack_248;
        pfVar8 = (float *)(iVar7 + 0x9c0);
        pfVar9 = afStack_f0;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar9 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          pfVar9 = pfVar9 + 1;
        }
        pfStack_288 = afStack_210 + 0x10;
        pfStack_290 = (float *)0x7fc665;
        D3DXMatrixMultiply();
        pfStack_290 = &fStack_21c;
        pfStack_294 = (float *)0x0;
        D3DXMatrixInverse(auStack_5c);
        D3DXMatrixTranspose(&fStack_228,auStack_68);
        iVar7 = -(int)piVar4;
        iVar11 = 0;
        iVar6 = -(int)piVar4;
        do {
          pfVar8 = (float *)*piVar4;
          iVar2 = piVar4[1];
          fVar1 = (float)piVar4[3];
          pfStack_28c = pfVar8;
          pfStack_288 = (float *)iVar2;
          D3DXPlaneNormalize(&pfStack_28c,&pfStack_28c);
          D3DXPlaneTransform(&fStack_258,&pfStack_294,&fStack_238);
          *(undefined1 **)(unaff_ESI + (int)piVar4) = auStack_cc + iVar7;
          *(undefined1 **)((int)pfVar8 + (int)piVar4) = auStack_c4 + iVar6;
          *(undefined4 *)((int)-fVar1 + (int)piVar4) = uStack_25c;
          *(float *)(iVar2 + (int)piVar4) = fStack_258;
          (**(code **)(*piStack_12c + 0xdc))(piStack_12c,iVar11,unaff_ESI + (int)piVar4);
          iVar11 = iVar11 + 1;
          piVar4 = piVar4 + 4;
        } while (iVar11 < 6);
        *(undefined1 *)((int)fStack_114 + 0x214) = 1;
        puVar10 = &uStack_d0;
        puVar12 = (undefined4 *)((int)fStack_114 + 0x1b4);
        for (iVar7 = 0x18; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        }
        return 0;
      }
      iVar7 = 0;
      do {
        pfStack_290 = (float *)0x7fc7ad;
        pfStack_28c = pfVar8;
        pfStack_288 = (float *)iVar7;
        (**(code **)((int)*pfVar8 + 0xdc))();
        iVar7 = iVar7 + 1;
      } while (iVar7 < 6);
    }
    return 0;
  }
  pfStack_288 = (float *)0x7fb7bc;
  piVar4 = (int *)FUN_00405ad0();
  local_24c = *(float *)(*piVar4 + 0xf8);
  if (puStack_244 != (undefined4 *)0x0) {
    pfStack_288 = (float *)0x7fb7da;
    LVar5 = InterlockedDecrement(puStack_244 + 1);
    if ((LVar5 == 0) && (puStack_244 != (undefined4 *)0x0)) {
      pfStack_288 = (float *)0x7fb7ec;
      (**(code **)*puStack_244)();
    }
  }
  if (param_2 == (float *)0x0) {
    local_24c = local_24c / param_7[0xc];
  }
  DAT_00b47014 = local_24c;
  return 0;
}



int * FUN_007fc7d0(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ce956;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = FUN_00401f00(8,uVar4);
  local_4 = 0;
  if (iVar5 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_007aed00();
  }
  local_4 = 0xffffffff;
  puVar7 = (undefined4 *)FUN_00771090(DAT_00b43104,6,1);
  puVar12 = (undefined4 *)*piVar6;
  if (puVar12 != puVar7) {
    if (((puVar12 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar12 + 1), LVar8 == 0))
       && (puVar12 != (undefined4 *)0x0)) {
      (**(code **)*puVar12)(1);
    }
    *piVar6 = (int)puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  piVar9 = (int *)FUN_00771090(DAT_00b43104,8,1);
  piVar10 = (int *)FUN_00771090(DAT_00b43104,4,1);
  piVar11 = (int *)FUN_00771090(DAT_00b43104,8,1);
  (**(code **)(*(int *)*piVar6 + 0x50))(0,0,0,2,0);
  (**(code **)(*(int *)*piVar6 + 0x50))(1,3,3,2,0);
  (**(code **)(*(int *)*piVar6 + 0x50))(2,5,4,3,0);
  (**(code **)(*(int *)*piVar6 + 0x50))(3,7,5,1,0);
  (**(code **)(*(int *)*piVar6 + 0x4c))(0,4,0xe,0x80000000,2,6,0,0);
  (**(code **)(*(int *)*piVar6 + 0x4c))(0,5,0xf,0x80000001,2,7,0,0);
  (**(code **)(*piVar9 + 0x50))(0,0,0,2,0);
  (**(code **)(*piVar9 + 0x50))(1,1,1,3,0);
  (**(code **)(*piVar9 + 0x50))(2,2,2,4,0);
  (**(code **)(*piVar9 + 0x50))(3,3,3,2,0);
  (**(code **)(*piVar9 + 0x50))(4,5,4,3,0);
  (**(code **)(*piVar9 + 0x50))(5,7,5,1,0);
  (**(code **)(*piVar9 + 0x4c))(0,6,0xe,0x80000000,2,6,0,0);
  (**(code **)(*piVar9 + 0x4c))(0,7,0xf,0x80000001,2,7,0,0);
  (**(code **)(*piVar10 + 0x50))(0,0,0,2,0);
  (**(code **)(*piVar10 + 0x50))(1,3,3,2,0);
  (**(code **)(*piVar10 + 0x50))(2,5,4,3,0);
  (**(code **)(*piVar10 + 0x50))(3,7,5,1,0);
  (**(code **)(*piVar11 + 0x50))(0,0,0,2,0);
  (**(code **)(*piVar11 + 0x50))(1,3,3,2,0);
  (**(code **)(*piVar11 + 0x50))(2,5,4,3,0);
  (**(code **)(*piVar11 + 0x50))(3,7,5,1,0);
  (**(code **)(*piVar11 + 0x4c))(0,4,0xe,0x80000000,2,6,0,0);
  (**(code **)(*piVar11 + 0x4c))(0,5,0xf,0x80000001,2,7,0,0);
  (**(code **)(*piVar11 + 0x4c))(0,6,8,&DAT_80000002,3,5,1,0);
  (**(code **)(*piVar11 + 0x4c))(0,7,9,0x80000003,3,5,2,0);
  piVar13 = (int *)*piVar6;
  if (piVar13 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    for (puVar12 = (undefined4 *)(**(code **)(*piVar13 + 4))(); puVar12 != (undefined4 *)0x0;
        puVar12 = (undefined4 *)puVar12[1]) {
      if (puVar12 == &DAT_00b3f684) {
        bVar1 = 1;
        goto LAB_007fcb16;
      }
    }
    bVar1 = 0;
LAB_007fcb16:
    uVar4 = -(uint)bVar1 & (uint)piVar13;
  }
  for (puVar12 = (undefined4 *)(**(code **)(*piVar9 + 4))(); puVar12 != (undefined4 *)0x0;
      puVar12 = (undefined4 *)puVar12[1]) {
    if (puVar12 == &DAT_00b3f684) {
      bVar1 = 1;
      goto LAB_007fcb44;
    }
  }
  bVar1 = 0;
LAB_007fcb44:
  for (puVar12 = (undefined4 *)(**(code **)(*piVar10 + 4))(); puVar12 != (undefined4 *)0x0;
      puVar12 = (undefined4 *)puVar12[1]) {
    if (puVar12 == &DAT_00b3f684) {
      bVar2 = 1;
      goto LAB_007fcb70;
    }
  }
  bVar2 = 0;
LAB_007fcb70:
  puVar12 = (undefined4 *)(**(code **)(*piVar11 + 4))();
  do {
    if (puVar12 == (undefined4 *)0x0) {
      bVar3 = 0;
LAB_007fcb95:
      iVar5 = FUN_00401f00(0xa0);
      if (iVar5 == 0) {
        piVar13 = (int *)0x0;
      }
      else {
        piVar13 = (int *)FUN_007fac40(uVar4,-(uint)bVar1 & (uint)piVar9,-(uint)bVar2 & (uint)piVar10
                                      ,-(uint)bVar3 & (uint)piVar11);
      }
      (**(code **)(*piVar13 + 0x84))();
      (**(code **)(*piVar13 + 0xa8))();
      (**(code **)(*piVar13 + 0xb4))();
      (**(code **)(*piVar13 + 0x88))();
      piVar9 = (int *)piVar6[1];
      if (piVar9 != piVar13) {
        if (((piVar9 != (int *)0x0) && (LVar8 = InterlockedDecrement(piVar9 + 1), LVar8 == 0)) &&
           (piVar9 != (int *)0x0)) {
          (**(code **)*piVar9)(1);
        }
        piVar6[1] = (int)piVar13;
        InterlockedIncrement(piVar13 + 1);
      }
      (**(code **)(*(int *)piVar6[1] + 0x54))(*piVar6);
      *unaff_FS_OFFSET = iVar5;
      return piVar6;
    }
    if (puVar12 == &DAT_00b3f684) {
      bVar3 = 1;
      goto LAB_007fcb95;
    }
    puVar12 = (undefined4 *)puVar12[1];
  } while( true );
}



void FUN_007fcc80(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d05ec;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = (int *)(in_ECX + 0x30);
  if (*(int *)(in_ECX + 0x30) == 0) {
    iVar5 = FUN_00401f00(0x34,uVar4);
    local_4 = 0;
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_009a8490(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar6);
    (**(code **)(*(int *)*piVar1 + 0x1c))("WorldViewProjTranspose",0x20000009,0,&DAT_00a2f7ec);
    puVar7 = (undefined4 *)(**(code **)(*(int *)*piVar1 + 0x38))("WorldViewProjTranspose");
    puVar3 = DAT_00b46b98;
    if (DAT_00b46b98 != puVar7) {
      if (DAT_00b46b98 != (undefined4 *)0x0) {
        LVar8 = InterlockedDecrement(DAT_00b46b98 + 1);
        if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
      }
      DAT_00b46b98 = puVar7;
      if (puVar7 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar7 + 1);
      }
    }
    (**(code **)(*(int *)*piVar1 + 0x1c))("SkinWorldViewProjTranspose",0x20000009,1,&DAT_00a2f7ec);
    uVar6 = (**(code **)(*(int *)*piVar1 + 0x38))("SkinWorldViewProjTranspose");
    FUN_0075fa90(uVar6);
    (**(code **)(*(int *)*piVar1 + 0x1c))("WorldViewTranspose",0x20000009,5,&DAT_00a2f7ec);
    uVar6 = (**(code **)(*(int *)*piVar1 + 0x38))("WorldViewTranspose");
    FUN_0075fa90(uVar6);
    (**(code **)(*(int *)*piVar1 + 0x1c))("SkinWorldViewTranspose",0x20000009,6,&DAT_00a2f7ec);
    uVar6 = (**(code **)(*(int *)*piVar1 + 0x38))("SkinWorldViewTranspose");
    FUN_0075fa90(uVar6);
    (**(code **)(*(int *)*piVar1 + 0x18))("BoneMatrix3",0x20000009,0x120000,0x1f,0x36,0,0,0,0,0);
    uVar6 = (**(code **)(*(int *)*piVar1 + 0x38))("BoneMatrix3");
    FUN_0075fa90(uVar6);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("ConstantGroup",0x10000009,0,10,0x15,&DAT_00a2f7ec,0x150,4,&DAT_00b46d68,0);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("decal fade",0x10000009,0,0x20,8,&DAT_00a2f7ec,0x80,4,&DAT_00b46218,0);
    uVar6 = (**(code **)(*(int *)*piVar1 + 0x38))("decal fade");
    FUN_0075fa90(uVar6);
    (**(code **)(*(int *)*piVar1 + 0x18))
              ("decal proj",0x10000009,0,0x28,0x20,&DAT_00a2f7ec,0x200,4,&DAT_00b46298,0);
    uVar6 = (**(code **)(*(int *)*piVar1 + 0x38))("decal proj");
    FUN_0075fa90(uVar6);
  }
  piVar2 = (int *)(in_ECX + 0x2c);
  if (*(int *)(in_ECX + 0x2c) == 0) {
    iVar5 = FUN_00401f00(0x34,uVar4);
    local_4 = 1;
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_009a4750(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar6);
    (**(code **)(*(int *)*piVar2 + 0x18))
              ("ConstantGroup",0x10000009,0,0,0x31,&DAT_00a2f7ec,0x310,4,&DAT_00b46f78,0);
    uVar6 = (**(code **)(*(int *)*piVar2 + 0x38))("ConstantGroup");
    *(undefined4 *)(in_ECX + 0x9c) = uVar6;
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x88);
  if (puVar3 != (undefined4 *)*piVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    iVar5 = *piVar1;
    *(int *)(in_ECX + 0x88) = iVar5;
    if (iVar5 != 0) {
      InterlockedIncrement((LONG *)(iVar5 + 4));
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x84);
  if (puVar3 != (undefined4 *)*piVar2) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    iVar5 = *piVar2;
    *(int *)(in_ECX + 0x84) = iVar5;
    if (iVar5 != 0) {
      InterlockedIncrement((LONG *)(iVar5 + 4));
    }
  }
  puVar3 = (undefined4 *)(in_ECX + 0x80);
  if (*(int *)(in_ECX + 0x80) == 0) {
    iVar5 = FUN_00401f00(0x34,uVar4);
    local_4 = 2;
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_009a8490(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar6);
    (**(code **)(*(int *)*puVar3 + 0x1c))("WorldViewProjTranspose",0x20000009,0,&DAT_00a2f7ec);
    (**(code **)(*(int *)*puVar3 + 0x1c))("SkinWorldViewProjTranspose",0x20000009,4,&DAT_00a2f7ec);
    (**(code **)(*(int *)*puVar3 + 0x18))("BoneMatrix3",0x20000009,0x120000,0xe,0x36,0,0,0,0,0);
    (**(code **)(*(int *)*puVar3 + 0x18))
              ("EyePosition",0x10000007,0,8,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46da8,0);
    (**(code **)(*(int *)*puVar3 + 0x18))
              ("U Offset",0x10000004,0,9,1,&DAT_00a2f7ec,4,4,&DAT_00b46b3c,0);
    (**(code **)(*(int *)*puVar3 + 0x18))
              ("V Offset",0x10000004,0,10,1,&DAT_00a2f7ec,4,4,&DAT_00b46b40,0);
    (**(code **)(*(int *)*puVar3 + 0x18))
              ("InvBoundDiameter",0x10000004,0,0xb,1,&DAT_00a2f7ec,4,4,&DAT_00b46b44,0);
    (**(code **)(*(int *)*puVar3 + 0x18))
              ("FogParam",0x10000007,0,0xc,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46b88,0);
    (**(code **)(*(int *)*puVar3 + 0x18))
              ("FogColor",0x10000007,0,0xd,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46b78,0);
  }
  puVar3 = (undefined4 *)(in_ECX + 0x7c);
  if (*(int *)(in_ECX + 0x7c) == 0) {
    iVar5 = FUN_00401f00(0x34);
    local_4 = 3;
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_009a4750(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar6);
    (**(code **)(*(int *)*puVar3 + 0x18))
              ("Fill Color",0x10000007,0,0,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46b48,0);
    (**(code **)(*(int *)*puVar3 + 0x18))
              ("Rim Color",0x10000007,0,1,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46b58,0);
    (**(code **)(*(int *)*puVar3 + 0x18))
              (&DAT_00a9317c,0x10000007,0,2,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46b68,0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007fd260(ushort param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = FUN_007b4290(0x1a);
  iVar3 = *(int *)(iVar3 + 4);
  if ((iVar3 == 0) || (1 < (ushort)(param_1 - 0x15e))) {
    puVar1 = *(undefined4 **)(iVar3 + 0x2c);
    if (puVar1 != *(undefined4 **)(iVar3 + 0x84)) {
      if (((puVar1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar1 + 1), LVar4 == 0))
         && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      iVar5 = *(int *)(iVar3 + 0x84);
      *(int *)(iVar3 + 0x2c) = iVar5;
      if (iVar5 != 0) {
        InterlockedIncrement((LONG *)(iVar5 + 4));
      }
    }
    puVar1 = *(undefined4 **)(iVar3 + 0x30);
    if (puVar1 != *(undefined4 **)(iVar3 + 0x88)) {
      if (((puVar1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar1 + 1), LVar4 == 0))
         && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      iVar5 = *(int *)(iVar3 + 0x88);
      *(int *)(iVar3 + 0x30) = iVar5;
      if (iVar5 != 0) {
        InterlockedIncrement((LONG *)(iVar5 + 4));
      }
    }
  }
  else {
    FUN_0055e2a0(iVar3 + 0x7c);
    FUN_0055e2a0(iVar3 + 0x80);
  }
  if (param_1 == 4) {
    iVar3 = 1;
  }
  else if (param_1 == 5) {
    iVar3 = 2;
  }
  else {
    iVar3 = param_1 - 0x12a;
  }
  iVar8 = 1;
  iVar9 = 0;
  iVar5 = 2;
  do {
    if (iVar9 < 5) {
      if ((&DAT_00b46b98)[iVar9] != 0) {
        *(bool *)((&DAT_00b46b98)[iVar9] + 8) =
             (*(uint *)(&DAT_00b46988 + iVar3 * 4) & 1 << ((byte)iVar8 & 0x1f)) != 0;
      }
    }
    else {
      (&DAT_00b46963)[iVar8] =
           (*(uint *)(&DAT_00b46988 + iVar3 * 4) & 1 << ((byte)iVar8 & 0x1f)) != 0;
    }
    bVar7 = (byte)iVar5;
    if (iVar8 < 5) {
      if ((&DAT_00b46b9c)[iVar9] != 0) {
        *(bool *)((&DAT_00b46b9c)[iVar9] + 8) =
             (*(uint *)(&DAT_00b46988 + iVar3 * 4) & 1 << (bVar7 & 0x1f)) != 0;
      }
    }
    else {
      (&DAT_00b46964)[iVar8] = (*(uint *)(&DAT_00b46988 + iVar3 * 4) & 1 << (bVar7 & 0x1f)) != 0;
    }
    if (iVar5 < 5) {
      if ((&DAT_00b46ba0)[iVar9] != 0) {
        *(bool *)((&DAT_00b46ba0)[iVar9] + 8) =
             (*(uint *)(&DAT_00b46988 + iVar3 * 4) & 1 << (bVar7 + 1 & 0x1f)) != 0;
      }
    }
    else {
      (&DAT_00b46964)[iVar5] = (*(uint *)(&DAT_00b46988 + iVar3 * 4) & 1 << (bVar7 + 1 & 0x1f)) != 0
      ;
    }
    iVar9 = iVar9 + 3;
    iVar8 = iVar8 + 3;
    iVar5 = iVar5 + 3;
  } while (iVar9 < 0x21);
  uVar2 = *(uint *)(&DAT_00b46a60 + iVar3 * 4);
  iVar5 = 0;
  do {
    (&DAT_00b46930)[iVar5] = (uVar2 & 1 << ((char)iVar5 + 1U & 0x1f)) != 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x31);
  _DAT_00b46935 = 0x101;
  DAT_00b46937 = 1;
  _DAT_00b46974 = 0x101;
  DAT_00b46976 = 1;
  if ((param_1 == 4) || (param_1 == 5)) {
    iVar3 = (&DAT_00b473d0)[iVar3];
  }
  else {
    if ((ushort)(param_1 - 0x156) < 8) {
      iVar3 = (&DAT_00b46f28)[param_1];
      if (*(int *)(iVar3 + 0x30) == 0) {
        uVar6 = FUN_00772df0();
        *(undefined4 *)(iVar3 + 0x30) = uVar6;
      }
      FUN_00772cd0(0xa8,0xf,0);
      return;
    }
    if ((ushort)(param_1 - 299) < 0x35) {
      iVar3 = (&DAT_00b46f28)[param_1];
      if (*(int *)(iVar3 + 0x30) == 0) {
        uVar6 = FUN_00772df0();
        *(undefined4 *)(iVar3 + 0x30) = uVar6;
      }
      FUN_00772cd0(0xa8,7,0);
      return;
    }
    iVar3 = (&DAT_00b46f28)[param_1];
  }
  if (*(int *)(iVar3 + 0x30) == 0) {
    uVar6 = FUN_00772df0();
    *(undefined4 *)(iVar3 + 0x30) = uVar6;
  }
  FUN_00772cd0(0xa8,0,0);
  return;
}



undefined4 FUN_007fec30(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d5858;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = 0;
  do {
    piVar4 = (int *)FUN_007606a0(local_14,uVar3);
    iVar2 = *(int *)((int)&DAT_00b473d0 + uVar5);
    local_4 = 0;
    if (iVar2 != *piVar4) {
      if (iVar2 != 0) {
        piVar1 = (int *)(iVar2 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
      }
      iVar2 = *piVar4;
      *(int *)((int)&DAT_00b473d0 + uVar5) = iVar2;
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
    uVar5 = uVar5 + 4;
  } while (uVar5 < 0xd8);
  FUN_0085e660();
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_007fecf0(void)

{
  int *in_ECX;
  undefined4 *puVar1;
  
  puVar1 = &DAT_00b473d0;
  do {
    (**(code **)(*in_ECX + 0x94))(*puVar1);
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0xb474a8);
  return;
}



void FUN_007fed20(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = param_1[0x38];
  if (iVar1 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x8c))(0);
    if (iVar2 == 0) {
      uVar3 = DAT_00b430f0;
      if ((param_1[7] & 0x80U) == 0) {
        uVar3 = DAT_00b430dc;
      }
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x8c))(0);
    }
    FUN_0076c910(uVar3);
    FUN_007715e0(3);
    iVar2 = DAT_00b43120;
    if (*(int *)(iVar1 + 8) != 0) {
      iVar2 = *(int *)(iVar1 + 8);
    }
    FUN_0076c910(iVar2);
    FUN_007715e0(3);
    FUN_00862600(param_2,2);
    uVar3 = *(undefined4 *)(iVar1 + 0x5c);
    if (*(int *)(param_2 + 0x30) == 0) {
      uVar4 = FUN_00772df0();
      *(undefined4 *)(param_2 + 0x30) = uVar4;
    }
    FUN_00772cd0(0x13,uVar3,0);
    uVar3 = *(undefined4 *)(iVar1 + 0x60);
    if (*(int *)(param_2 + 0x30) == 0) {
      uVar4 = FUN_00772df0();
      *(undefined4 *)(param_2 + 0x30) = uVar4;
    }
    FUN_00772cd0(0x14,uVar3,0);
    uVar3 = *(undefined4 *)(iVar1 + 100);
    if (*(int *)(param_2 + 0x30) == 0) {
      uVar4 = FUN_00772df0();
      *(undefined4 *)(param_2 + 0x30) = uVar4;
    }
    FUN_00772cd0(0xab,uVar3,1);
    uVar3 = *(undefined4 *)(iVar1 + 0x68);
    if (*(int *)(param_2 + 0x30) == 0) {
      uVar4 = FUN_00772df0();
      *(undefined4 *)(param_2 + 0x30) = uVar4;
    }
    FUN_00772cd0(0x17,uVar3,0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007fee40(int param_1,undefined4 *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  LONG LVar5;
  
  if (param_2 != (undefined4 *)0x0) {
    iVar2 = param_2[0x38];
    if (iVar2 != 0) {
      _DAT_00b46b48 = *(undefined4 *)(iVar2 + 0xc);
      _DAT_00b46b4c = *(undefined4 *)(iVar2 + 0x10);
      _DAT_00b46b50 = *(undefined4 *)(iVar2 + 0x14);
      _DAT_00b46b54 = *(undefined4 *)(iVar2 + 0x18);
      _DAT_00b46b58 = *(undefined4 *)(iVar2 + 0x1c);
      _DAT_00b46b5c = *(undefined4 *)(iVar2 + 0x20);
      _DAT_00b46b60 = *(undefined4 *)(iVar2 + 0x24);
      _DAT_00b46b64 = *(undefined4 *)(iVar2 + 0x28);
      _DAT_00b46b3c = *(undefined4 *)(iVar2 + 0x4c);
      _DAT_00b46b40 = *(undefined4 *)(iVar2 + 0x50);
      _DAT_00b46b68 = *(undefined4 *)(iVar2 + 0x54);
      _DAT_00b46b6c = 0x3f800000;
    }
    _DAT_00b46b7c = 0;
    _DAT_00b46b78 = 0;
    _DAT_00b46b88 = 0.0;
    _DAT_00b46b94 = 0;
    _DAT_00b46b80 = 0;
    _DAT_00b46b84 = 0;
    _DAT_00b46b8c = 0.0;
    _DAT_00b46b90 = 0;
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
          _DAT_00b46b88 = fVar1;
          _DAT_00b46b8c = fVar1 - *(float *)(iVar2 + 0x2c);
          _DAT_00b46b90 = 0x3f800000;
          _DAT_00b46b94 = 0;
          _DAT_00b46b78 = *(undefined4 *)(iVar2 + 0x20);
          _DAT_00b46b7c = *(undefined4 *)(iVar2 + 0x24);
          _DAT_00b46b80 = *(undefined4 *)(iVar2 + 0x28);
          _DAT_00b46b84 = 0;
          return;
        }
      }
    }
  }
  return;
}



void FUN_007ff060(byte param_1)

{
  FUN_007faf20();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007ff080(float param_1,float param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  fVar3 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d0618;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = FUN_00862b40(param_2,param_1,0);
  if ((*(byte *)((int)fVar3 + 0x1c) & 2) == 0) {
    uVar7 = *(undefined4 *)(in_ECX + 0x8c);
  }
  else {
    uVar7 = *(undefined4 *)(in_ECX + 0x90);
  }
  FUN_0075fa90(uVar7);
  _DAT_00b46fd8 = 0;
  _DAT_00b46fdc = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x9c) + 0x20) = 0xb;
  *(undefined1 *)(DAT_00b46c18 + 8) = 0;
  *(undefined1 *)(DAT_00b46c14 + 8) = 0;
  iVar2 = DAT_00b2dcfc;
  iVar6 = 0;
  if (0 < DAT_00b2dcfc) {
    do {
      (&DAT_00b4693a)[iVar6 * 2] = 0;
      (&DAT_00b46939)[iVar6 * 2] = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  DAT_00b4693a = 1;
  iVar2 = *(int *)(param_3 + 0xc);
  if (iVar2 != 0) {
    param_2 = *(float *)(iVar2 + 0x2c);
    _DAT_00b46db8 = *(float *)(iVar2 + 0x30);
    if ((_DAT_00b46db8 != 0.0) || (param_1 = _DAT_00b46db8, param_2 != 0.0)) {
      _DAT_00b46dc8 = *(undefined4 *)(iVar2 + 0x20);
      _DAT_00b46dbc = _DAT_00b46db8 - param_2;
      _DAT_00b46dcc = *(undefined4 *)(iVar2 + 0x24);
      _DAT_00b46dd0 = *(undefined4 *)(iVar2 + 0x28);
      _DAT_00b46dd4 = 0x3f800000;
      param_1 = _DAT_00b46dbc;
      goto LAB_007ff29d;
    }
  }
  _DAT_00b46dbc = 0.0;
  _DAT_00b46db8 = 500000.0;
  _DAT_00b46dcc = DAT_00b25ad4;
  _DAT_00b46dc8 = DAT_00b25ad0;
  _DAT_00b46dd0 = DAT_00b25ad8;
  _DAT_00b46dd4 = DAT_00b25adc;
LAB_007ff29d:
  _DAT_00b46dc4 = 0;
  _DAT_00b46dc0 = 0x3f800000;
  _DAT_00b46fa8 = 0x3f800000;
  iVar2 = *(int *)(param_3 + 0x10);
  if ((iVar2 != 0) && (param_1 = *(float *)(iVar2 + 0x50), param_1 < 1.0)) {
    _DAT_00b46fa8 = *(undefined4 *)(iVar2 + 0x50);
  }
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x48))(uVar4);
  (**(code **)(**(int **)(in_ECX + 0x2c) + 0x48))();
  if (*(int *)(iVar5 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar5 + 0x30) = uVar7;
  }
  FUN_00772cd0(0x1b,0,0);
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  uStack_4 = 0;
  param_1 = (float)iVar5;
  FUN_0076ce40(*(undefined4 *)(in_ECX + 0x38),&param_1);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  uStack_4 = 0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 FUN_007ff350(undefined4 *param_1)

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
  
  puVar2 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar5 = (int *)FUN_00707530(4);
  if (piVar5 != (int *)0x0) {
    iVar6 = (**(code **)(*piVar5 + 0x54))(uVar4);
    if (iVar6 == 10) goto LAB_007ff47b;
    FUN_00708560(&param_1,4);
    puVar1 = param_1;
    if (param_1 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(param_1 + 1);
      if ((LVar7 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  iVar6 = FUN_00401f00(0x108);
  uStack_4 = 0;
  if (iVar6 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00863430();
  }
  uStack_4 = 0xffffffff;
  FUN_00405680(piVar5);
  cVar3 = (**(code **)(*piVar5 + 0x58))(puVar2);
  if (cVar3 == '\0') {
    FUN_004a1220(piVar5);
    puVar1 = (undefined4 *)puVar2[0x2f];
    if (puVar1 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar1 + 1);
      if ((LVar7 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      puVar2[0x2f] = 0;
    }
  }
  else {
    iVar6 = (**(code **)(*piVar5 + 0x8c))(0);
    if (iVar6 != 0) {
LAB_007ff47b:
      *unaff_FS_OFFSET = local_c;
      return 1;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007ff4a0(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  LONG LVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  int *in_ECX;
  int *unaff_EBX;
  int iVar15;
  int *unaff_FS_OFFSET;
  bool bVar16;
  float10 fVar17;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d0648;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffb0;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar6);
  iVar15 = (int)param_4;
  piVar8 = *(int **)((int)param_4 + 0x18);
  if (piVar8 == (int *)0x0) {
    bVar16 = false;
  }
  else {
    iVar7 = (**(code **)(*piVar8 + 0x54))();
    bVar16 = iVar7 == 10;
  }
  iVar7 = DAT_00b42e90;
  piVar8 = (int *)(-(uint)bVar16 & (uint)piVar8);
  if (DAT_00b42eac == 5) {
    uVar9 = FUN_007ff080(piVar8,DAT_00b42e90,iVar15);
  }
  else {
    iVar15 = *(int *)(iVar15 + 0x10);
    fStack_28 = *(float *)(iVar15 + 0x40);
    fStack_24 = *(float *)(iVar15 + 0x44);
    fStack_20 = *(float *)(iVar15 + 0x48);
    FUN_007fab60(piVar8,iVar15,DAT_00b42e90);
    cVar4 = FUN_008aa390(&DAT_00b3fa90);
    if (cVar4 != '\0') {
      if (DAT_00b43070 != '\0') {
        fVar17 = (float10)FUN_00507140();
        fVar1 = (float)fVar17;
        fStack_28 = fVar1 * fStack_28;
        fStack_24 = fVar1 * fStack_24;
        fStack_20 = fVar1 * fStack_20;
      }
      iVar10 = (**(code **)(*piVar8 + 0x90))(0);
      if (iVar10 == 0) {
        fStack_1c = fStack_28 + DAT_00b46f78;
        fStack_18 = fStack_24 + DAT_00b46f7c;
        fStack_14 = fStack_20 + DAT_00b46f80;
        if (DAT_00b43070 == '\0') {
          if (1.0 <= fStack_1c) {
            fStack_1c = 1.0;
          }
          if (1.0 <= fStack_18) {
            fStack_18 = 1.0;
          }
          if (1.0 <= fStack_14) {
            fStack_14 = 1.0;
          }
        }
        DAT_00b46f78 = fStack_1c;
        DAT_00b46f7c = fStack_18;
        DAT_00b46f80 = fStack_14;
      }
      else {
        if (DAT_00b43070 == '\0') {
          if (1.0 <= fStack_28) {
            fStack_28 = 1.0;
          }
          if (1.0 <= fStack_24) {
            fStack_24 = 1.0;
          }
          if (1.0 <= fStack_20) {
            fStack_20 = 1.0;
          }
        }
        _DAT_00b46fb8 = fStack_28;
        _DAT_00b46fbc = fStack_24;
        _DAT_00b46fc0 = fStack_20;
        _DAT_00b46fc4 = 0;
      }
    }
    fVar1 = 1.0;
    if (((DAT_00b42f40 & 8) == 0) || ((*(byte *)(piVar8 + 7) & 1) == 0)) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x01';
    }
    if ((DAT_00b42f40 & 1) == 0) {
      _DAT_00b46fc8 = 0;
    }
    else {
      _DAT_00b46fc8 = 0x3f800000;
    }
    if ((DAT_00b42f40 & 2) == 0) {
      _DAT_00b46fcc = 0;
    }
    else {
      _DAT_00b46fcc = 0x3f800000;
    }
    if ((DAT_00b42f40 & 4) == 0) {
      _DAT_00b46fd0 = 0;
    }
    else {
      _DAT_00b46fd0 = 0x3f800000;
    }
    if (cVar4 == '\0') {
      _DAT_00b46fd4 = 0;
    }
    else {
      _DAT_00b46fd4 = 0x3f800000;
    }
    if ((iVar7 == 0x14e) || (iVar7 == 0x14f)) {
      if ((piVar8[7] & 0x800U) == 0) {
        _DAT_00b46fd4 = 0x3f800000;
      }
      else {
        _DAT_00b46fd4 = 0;
      }
    }
    _DAT_00b46de8 = DAT_00b25ad0;
    _DAT_00b46dec = DAT_00b25ad4;
    _DAT_00b46df0 = DAT_00b25ad8;
    _DAT_00b46df4 = DAT_00b25adc;
    if (iVar7 < 0x147) {
      bVar2 = *(byte *)(DAT_00b42eb8 + 8);
      if (bVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (uint)bVar2;
        if ((int)DAT_00b2dcfc < (int)(uint)bVar2) {
          uVar6 = DAT_00b2dcfc;
        }
        uVar6 = uVar6 - 1 & 0xffff;
      }
      _DAT_00b46fd8 = 0x3f800000;
      _DAT_00b46fdc = (float)uVar6;
      _DAT_00b46fe0 = *(undefined4 *)(iVar15 + 0x4c);
      *(uint *)(in_ECX[0x27] + 0x20) = uVar6 * 2 + 0xb;
      if (*(int *)(*(int *)(param_1 + 0xb4) + 0x24) == 0) {
        fVar1 = 0.0;
      }
      iVar10 = 0;
      _DAT_00b46fe4 = fVar1;
      uVar3 = DAT_00b2dcfc;
      if (uVar6 != 0xffffffff) {
        do {
          (&DAT_00b4693a)[iVar10 * 2] = 1;
          (&DAT_00b46939)[iVar10 * 2] = 1;
          iVar10 = iVar10 + 1;
          uVar3 = DAT_00b2dcfc;
        } while (iVar10 < (int)(uVar6 + 1));
      }
      for (; uVar6 = DAT_00b2dcfc, iVar10 < (int)DAT_00b2dcfc; iVar10 = iVar10 + 1) {
        DAT_00b2dcfc = uVar3;
        (&DAT_00b4693a)[iVar10 * 2] = 0;
        (&DAT_00b46939)[iVar10 * 2] = 0;
        uVar3 = DAT_00b2dcfc;
        DAT_00b2dcfc = uVar6;
      }
      DAT_00b2dcfc = uVar3;
      *(undefined1 *)(DAT_00b46c18 + 8) = 0;
      *(undefined1 *)(DAT_00b46c14 + 8) = 0;
    }
    else if (iVar7 - 0x152U < 2) {
      *(undefined1 *)(DAT_00b46c18 + 8) = 1;
      *(undefined1 *)(DAT_00b46c14 + 8) = 1;
      _DAT_00b46939 = 0x1010101;
      _DAT_00b4693d = 0x1010101;
      *(undefined4 *)(in_ECX[0x27] + 0x20) = 0x11;
    }
    else if (iVar7 == 0x14d) {
      sVar5 = FUN_007ed5d0();
      if (sVar5 == 0) {
        if (DAT_00b42ce3 == '\0') {
          DAT_00b47008 = DAT_00b46f78;
          DAT_00b4700c = DAT_00b46f7c;
          DAT_00b47010 = DAT_00b46f80;
          DAT_00b47014 = DAT_00b46f84;
        }
        else {
          DAT_00b47008 = 0.5;
          DAT_00b4700c = 0.5;
          DAT_00b47010 = 0.5;
          DAT_00b47014 = 0x3f800000;
        }
      }
      *(undefined4 *)(in_ECX[0x27] + 0x20) = 10;
      uVar6 = DAT_00b2dcfc;
      iVar10 = 1;
      _DAT_00b46939 = CONCAT22(_DAT_00b4693b,1);
      if (1 < (int)DAT_00b2dcfc) {
        do {
          (&DAT_00b4693a)[iVar10 * 2] = 0;
          (&DAT_00b46939)[iVar10 * 2] = 0;
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)uVar6);
      }
      *(undefined1 *)(DAT_00b46c18 + 8) = 0;
    }
    else {
      if (iVar7 - 0x14eU < 4) {
        *(undefined4 *)(in_ECX[0x27] + 0x20) = 0xb;
      }
      else {
        *(undefined4 *)(in_ECX[0x27] + 0x20) = 9;
        _memset(&DAT_00b46939,0,DAT_00b2dcfc * 2);
        fVar1 = 0.0;
      }
      _DAT_00b46fd8 = 0;
      _DAT_00b46fdc = fVar1;
      *(undefined1 *)(DAT_00b46c18 + 8) = 0;
    }
    (**(code **)(*(int *)in_ECX[0xc] + 0x48))();
    (**(code **)(*(int *)in_ECX[0xb] + 0x48))();
    iVar10 = FUN_00862b40(iVar7,piVar8,cVar4);
    if (iVar10 != 0) {
      if (iVar7 - 0x15eU < 2) {
        FUN_007fee40(param_1,piVar8,iVar10);
      }
      puVar14 = (undefined4 *)in_ECX[9];
      if ((*(byte *)(piVar8 + 7) & 2) == 0) {
        puVar12 = (undefined4 *)in_ECX[0x23];
      }
      else {
        puVar12 = (undefined4 *)in_ECX[0x24];
      }
      if (puVar14 != puVar12) {
        if (((puVar14 != (undefined4 *)0x0) &&
            (LVar11 = InterlockedDecrement(puVar14 + 1), LVar11 == 0)) &&
           (puVar14 != (undefined4 *)0x0)) {
          (**(code **)*puVar14)(1);
        }
        in_ECX[9] = (int)puVar12;
        if (puVar12 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar12 + 1);
        }
      }
      if (DAT_00b46973 != '\0') {
        iVar13 = *(int *)((int)param_4 + 0xc);
        if (iVar13 == 0) {
          _DAT_00b46db8 = 500000.0;
          _DAT_00b46dbc = 0.0;
          _DAT_00b46dc0 = 0x3f800000;
          _DAT_00b46dc4 = 0;
          _DAT_00b46dc8 = DAT_00b25ad0;
          _DAT_00b46dcc = DAT_00b25ad4;
          _DAT_00b46dd0 = DAT_00b25ad8;
          _DAT_00b46dd4 = DAT_00b25adc;
        }
        else {
          _DAT_00b46db8 = *(float *)(iVar13 + 0x30);
          if ((_DAT_00b46db8 == 0.0) && (*(float *)(iVar13 + 0x2c) == 0.0)) {
            _DAT_00b46db8 = 500000.0;
            _DAT_00b46dbc = 0.0;
            _DAT_00b46dc0 = 0x3f800000;
            _DAT_00b46dc4 = 0;
            _DAT_00b46dc8 = DAT_00b25ad0;
            _DAT_00b46dcc = DAT_00b25ad4;
            _DAT_00b46dd0 = DAT_00b25ad8;
            _DAT_00b46dd4 = DAT_00b25adc;
          }
          else {
            _DAT_00b46dc8 = *(undefined4 *)(iVar13 + 0x20);
            _DAT_00b46dbc = _DAT_00b46db8 - *(float *)(iVar13 + 0x2c);
            _DAT_00b46dcc = *(undefined4 *)(iVar13 + 0x24);
            _DAT_00b46dd0 = *(float *)(iVar13 + 0x28);
            _DAT_00b46dc0 = 0x3f800000;
            _DAT_00b46dc4 = 0;
            _DAT_00b46dd4 = 0x3f800000;
          }
        }
      }
      _DAT_00b46fb0 = DAT_00b25ae8;
      _DAT_00b46fac = DAT_00b25ae4;
      _DAT_00b46fb4 = DAT_00b25aec;
      if ((DAT_00b42ce3 == '\0') && (iVar7 - 0x147U < 7)) {
        param_4 = *(float *)(iVar15 + 0x50);
        if (1.0 <= param_4) {
          _DAT_00b46fa8 = (float)piVar8[0x29];
        }
        else {
          param_4 = *(float *)(iVar15 + 0x50);
          _DAT_00b46fa8 = (float)piVar8[0x29] * param_4;
        }
      }
      else {
        param_4 = *(float *)(iVar15 + 0x50);
        if (1.0 <= param_4) {
          _DAT_00b46fa8 = 1.0;
        }
        else {
          _DAT_00b46fa8 = *(float *)(iVar15 + 0x50);
        }
      }
      if ((0x18 < iVar7 - 0x147U) || (iVar7 - 0x14eU < 4)) {
        iVar15 = **(int **)(iVar10 + 0x24);
        puVar12 = (undefined4 *)(**(code **)(*piVar8 + 0x88))(0);
        puVar14 = *(undefined4 **)(iVar15 + 4);
        if (puVar14 != puVar12) {
          if (((puVar14 != (undefined4 *)0x0) &&
              (LVar11 = InterlockedDecrement(puVar14 + 1), LVar11 == 0)) &&
             (puVar14 != (undefined4 *)0x0)) {
            (**(code **)*puVar14)(1);
          }
          *(undefined4 **)(iVar15 + 4) = puVar12;
          if (puVar12 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar12 + 1);
          }
        }
        iVar15 = *(int *)(*(int *)(iVar10 + 0x24) + 4);
        iVar13 = (**(code **)(*unaff_EBX + 0x8c))(0);
        puVar14 = DAT_00b430dc;
        if (iVar13 != 0) {
          puVar14 = (undefined4 *)(**(code **)(*unaff_EBX + 0x8c))(0);
        }
        puVar12 = *(undefined4 **)(iVar15 + 4);
        if (puVar12 != puVar14) {
          if (((puVar12 != (undefined4 *)0x0) &&
              (LVar11 = InterlockedDecrement(puVar12 + 1), LVar11 == 0)) &&
             (puVar12 != (undefined4 *)0x0)) {
            (**(code **)*puVar12)(1);
          }
          *(undefined4 **)(iVar15 + 4) = puVar14;
          if (puVar14 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar14 + 1);
          }
        }
        _DAT_00b46fe8 = DAT_00b25ad0;
        _DAT_00b46ff4 = DAT_00b25adc;
        _DAT_00b46fec = DAT_00b25ad4;
        _DAT_00b46ff0 = DAT_00b25ad8;
        sVar5 = FUN_007ed5c0();
        iVar15 = DAT_00b42eb8;
        if ((sVar5 != 0) && (DAT_00b42e90 - 0x14eU < 4)) {
          iVar13 = **(int **)(DAT_00b42eb8 + 0xc);
          if ((((*(char *)(iVar13 + 0xf4) != '\0') && (*(int *)(iVar13 + 0x114) != 0)) ||
              (*(char *)(iVar13 + 0x120) != '\0')) && (*(char *)(DAT_00b42eb8 + 8) != '\0')) {
            if ((*(char *)(iVar13 + 0xf4) != '\0') && (cVar4 = FUN_00405a80(), cVar4 != '\0')) {
              _DAT_00b46fec = 0x3f800000;
              uVar9 = FUN_00405a30();
              FUN_0076c910(uVar9);
              FUN_00771640(1);
              FUN_007715e0(0);
              iVar15 = DAT_00b42eb8;
            }
            _DAT_00b46ff0 = *(float *)(**(int **)(iVar15 + 0xc) + 0x128);
            param_4 = _DAT_00b46ff0;
            if (*(char *)(iVar13 + 0x120) == '\0') {
              _DAT_00b46ff4 = 0x3f800000;
            }
            else {
              _DAT_00b46ff4 = 0;
            }
          }
        }
      }
      if (iVar7 == 0x14d) {
        _DAT_00b46e08 = *(float *)(param_1 + 0x20) - DAT_00b3f92c;
        _DAT_00b46e0c = *(float *)(param_1 + 0x24) - DAT_00b3f930;
        _DAT_00b46e10 = *(float *)(param_1 + 0x28) - DAT_00b3f934;
        param_4 = _DAT_00b46e0c;
      }
      if ((piVar8[7] & 0x80000U) == 0) {
        param_1 = 0;
        if (iVar7 - 0x14eU < 4) {
          if (*(int *)(iVar10 + 0x30) == 0) {
            uVar9 = FUN_00772df0();
            *(undefined4 *)(iVar10 + 0x30) = uVar9;
          }
          FUN_00772cd0(0xaf,param_1,0);
          param_1 = 0xb8d1b717;
          if (*(int *)(iVar10 + 0x30) == 0) {
            uVar9 = FUN_00772df0();
            *(undefined4 *)(iVar10 + 0x30) = uVar9;
          }
        }
        else {
          if (*(int *)(iVar10 + 0x30) == 0) {
            uVar9 = FUN_00772df0();
            *(undefined4 *)(iVar10 + 0x30) = uVar9;
          }
          FUN_00772cd0(0xaf,param_1,0);
          param_1 = 0;
          if (*(int *)(iVar10 + 0x30) == 0) {
            uVar9 = FUN_00772df0();
            *(undefined4 *)(iVar10 + 0x30) = uVar9;
          }
        }
      }
      else {
        param_1 = 0x3f800000;
        if (*(int *)(iVar10 + 0x30) == 0) {
          uVar9 = FUN_00772df0();
          *(undefined4 *)(iVar10 + 0x30) = uVar9;
        }
        FUN_00772cd0(0xaf,param_1,0);
        param_1 = 0x3a03126f;
        if (*(int *)(iVar10 + 0x30) == 0) {
          uVar9 = FUN_00772df0();
          *(undefined4 *)(iVar10 + 0x30) = uVar9;
        }
      }
      FUN_00772cd0(0xc3,param_1,0);
      *(int *)(iVar10 + 0x60) = *(int *)(iVar10 + 0x60) + 1;
      uStack_4 = 0;
      param_1 = iVar10;
      FUN_0076ce40(in_ECX[0xe],&param_1);
      piVar8 = (int *)(iVar10 + 0x60);
      *piVar8 = *piVar8 + -1;
      uStack_4 = 0xffffffff;
      if (*piVar8 == 0) {
        FUN_007604d0();
      }
      in_ECX[0xe] = in_ECX[0xe] + 1;
    }
    uVar9 = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return uVar9;
}


