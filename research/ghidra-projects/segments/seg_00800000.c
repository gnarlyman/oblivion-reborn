
void FUN_008000f0(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xb0))();
                    /* WARNING: Could not recover jumptable at 0x00800108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0xb8))();
  return;
}



void FUN_00800110(void)

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
  
  puStack_8 = &LAB_009d06ce;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9336c;
  puVar2 = (undefined4 *)in_ECX[0x24];
  local_4 = 4;
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
  puVar2 = (undefined4 *)in_ECX[0x28];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x28] = 0;
  }
  if (DAT_00b474ac != (undefined4 *)0x0) {
    FUN_007c1ee0(DAT_00b474ac);
    puVar2 = DAT_00b474ac;
    if (DAT_00b474ac != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(DAT_00b474ac + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_00b474ac = (undefined4 *)0x0;
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x28];
  local_4._0_1_ = 3;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
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



void FUN_008002f0(undefined4 param_1)

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
              ("texRatio0",0x10000007,0,6,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0xa4,0);
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x18))
              ("texRatio1",0x10000007,0,7,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0xb4,0);
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
              ("Ambient Color",0x10000007,0,1,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46498,0);
  }
  FUN_0077aa60(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00800440(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  LONG LVar10;
  undefined4 uVar11;
  int in_ECX;
  undefined4 unaff_retaddr;
  float fVar12;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  piVar6 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x4c))();
  }
  iVar8 = (**(code **)(*piVar6 + 0x4c))(0);
  fVar2 = (float)iVar8;
  if (iVar8 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar3 = (float)iVar7;
  if (iVar7 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  piVar6 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x50))();
  }
  iVar8 = (**(code **)(*piVar6 + 0x50))(0);
  fVar12 = (float)iVar8;
  if (iVar8 < 0) {
    fVar12 = fVar12 + 4.2949673e+09;
  }
  fVar4 = (float)iVar7;
  if (iVar7 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  fVar12 = fVar12 / fVar4;
  if (DAT_00b42e96 != '\0') {
    unaff_retaddr = 0x3f800000;
    fVar12 = 1.0;
  }
  uStack_18 = 0;
  uStack_c = 0;
  uStack_14 = 0x3f800000;
  fStack_10 = 1.0;
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x4c))();
  }
  fVar4 = (float)iVar7;
  if (iVar7 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x50))();
  }
  fVar5 = (float)iVar7;
  if (iVar7 < 0) {
    fVar5 = fVar5 + 4.2949673e+09;
  }
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = unaff_retaddr;
  *(float *)(in_ECX + 0xa8) = fVar12;
  fVar4 = 0.5 / fVar4 + 0.0;
  *(float *)(in_ECX + 0xac) = fVar4;
  fVar5 = 0.5 / fVar5 + 0.0;
  *(float *)(in_ECX + 0xb0) = fVar5;
  *(float *)(in_ECX + 0xc0) = fVar5;
  *(undefined4 *)(in_ECX + 0xb4) = unaff_retaddr;
  *(float *)(in_ECX + 0xb8) = fVar12;
  *(float *)(in_ECX + 0xbc) = fVar4;
  uStack_14 = unaff_retaddr;
  if ((char)param_2 != '\0') {
    uStack_14 = 0x3f800000;
    fVar12 = 1.0;
  }
  fStack_10 = fVar12;
  FUN_00802890(*param_2);
  puVar9 = (undefined4 *)FUN_00405a30();
  puVar1 = *(undefined4 **)(in_ECX + 0xa0);
  if (puVar1 != puVar9) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar10 = InterlockedDecrement(puVar1 + 1), LVar10 == 0))
       && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 **)(in_ECX + 0xa0) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  if (*(int *)(fVar2 / fVar3) == 0) {
    FUN_007d71c0(1,0);
  }
  else {
    uVar11 = FUN_007d6fe0();
    FUN_007d7280(1,uVar11);
  }
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))(&uStack_18);
  }
  FUN_00709c60(DAT_00b3f928);
  if (*(int *)(fVar2 / fVar3) != 0) {
    FUN_007d72d0();
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xa0);
  if (puVar1 != (undefined4 *)0x0) {
    LVar10 = InterlockedDecrement(puVar1 + 1);
    if ((LVar10 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0xa0) = 0;
  }
  FUN_007c1ee0(DAT_00b474ac);
  puVar1 = DAT_00b474ac;
  if (DAT_00b474ac != (undefined4 *)0x0) {
    LVar10 = InterlockedDecrement(DAT_00b474ac + 1);
    if ((LVar10 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b474ac = (undefined4 *)0x0;
  }
  return;
}



undefined4 FUN_00800900(void)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cfc88;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = 0;
  local_10 = 0;
  local_4 = 0;
  piVar3 = (int *)FUN_007606a0(&local_14,uVar2);
  iVar5 = in_ECX[0x27];
  local_4._0_1_ = 1;
  if (iVar5 != *piVar3) {
    if (iVar5 != 0) {
      piVar1 = (int *)(iVar5 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar5 = *piVar3;
    in_ECX[0x27] = iVar5;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0)) {
    FUN_007604d0();
  }
  iVar5 = 0;
  do {
    piVar3 = (int *)FUN_00772630(&local_14);
    local_4._0_1_ = 2;
    if (iVar6 != *piVar3) {
      if (iVar6 != 0) {
        piVar1 = (int *)(iVar6 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar6 = *piVar3;
      local_10 = iVar6;
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
    FUN_00801110(iVar6,iVar5,3,2);
    FUN_00771640(0);
    FUN_00760010(*(undefined4 *)(in_ECX[0x27] + 0x14),iVar6);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  iVar5 = in_ECX[0x27];
  if (*(int *)(iVar5 + 0x30) == 0) {
    uVar4 = FUN_00772df0();
    *(undefined4 *)(iVar5 + 0x30) = uVar4;
  }
  FUN_00772cd0(7,0,0);
  iVar5 = in_ECX[0x27];
  if (*(int *)(iVar5 + 0x30) == 0) {
    uVar4 = FUN_00772df0();
    *(undefined4 *)(iVar5 + 0x30) = uVar4;
  }
  FUN_00772cd0(0xe,0,0);
  iVar5 = in_ECX[0x27];
  if (*(int *)(iVar5 + 0x30) == 0) {
    uVar4 = FUN_00772df0();
    *(undefined4 *)(iVar5 + 0x30) = uVar4;
  }
  FUN_00772cd0(0x1b,0,0);
  iVar5 = in_ECX[0x27];
  if (*(int *)(iVar5 + 0x30) == 0) {
    uVar4 = FUN_00772df0();
    *(undefined4 *)(iVar5 + 0x30) = uVar4;
  }
  FUN_00772cd0(0xf,0,0);
  iVar5 = in_ECX[0x27];
  if (*(int *)(iVar5 + 0x30) == 0) {
    uVar4 = FUN_00772df0();
    *(undefined4 *)(iVar5 + 0x30) = uVar4;
  }
  FUN_00772cd0(0xa8,0xf,0);
  (**(code **)(*in_ECX + 0xb8))();
  local_4 = 0xffffffff;
  if (iVar6 != 0) {
    piVar3 = (int *)(iVar6 + 0x5c);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      FUN_00772560();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



int FUN_00800b30(char param_1)

{
  undefined4 uVar1;
  
  if ((DAT_00b474ac == 0) && (param_1 != '\0')) {
    uVar1 = FUN_007c23c0(DAT_00b3f928,0x14);
    FUN_0075fa90(uVar1);
  }
  return DAT_00b474ac;
}



void FUN_00800b70(void)

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
  puStack_8 = &LAB_009d06ce;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_008026c0(uVar4);
  piVar1 = in_ECX + 0x24;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a9336c;
  _eh_vector_constructor_iterator_(piVar1,4,1,FUN_007c88a0,FUN_007016a0);
  piVar2 = in_ECX + 0x25;
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(piVar2,4,1,FUN_007c88a0,FUN_007016a0);
  local_4._0_1_ = 2;
  _eh_vector_constructor_iterator_(in_ECX + 0x27,4,1,FUN_007c88a0,FUN_004027d0);
  in_ECX[0x28] = 0;
  in_ECX[0x26] = 0;
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
  if (in_ECX[0x27] != 0) {
    piVar1 = (int *)(in_ECX[0x27] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0x27] = 0;
  }
  puVar3 = (undefined4 *)in_ECX[0x28];
  if (puVar3 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar3 + 1);
    if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    in_ECX[0x28] = 0;
  }
  *(undefined1 *)(in_ECX + 8) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00800cd0(byte param_1)

{
  FUN_00800110();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00800cf0(void)

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
  iStack_10 = 0;
  iVar6 = 0;
  iStack_4._0_1_ = 1;
  iStack_4._1_3_ = 0;
  if (in_ECX[0x26] == 0) {
    iVar5 = in_ECX[0x27];
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
    if (in_ECX[0x28] != 0) {
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
      FUN_0076c910(in_ECX[0x28]);
    }
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



int * FUN_00800e20(void)

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
  iVar3 = FUN_00401f00(0xc4);
  if (iVar3 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_00800b70();
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



void FUN_00800fb0(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)&DAT_00b42d80 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[iVar2] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
}



void FUN_00800fe0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int in_ECX;
  undefined4 unaff_retaddr;
  
  (**(code **)(**(int **)(in_ECX + 0x18) + 4))(param_4);
  FUN_0077a150(unaff_retaddr,param_1,param_2,param_4,param_4,param_5,param_6);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00801030(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char local_2a4 [8];
  char local_29c [16];
  char local_28c [127];
  char cStack_20d;
  char local_20c [260];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_2a4;
  if (param_2 != (char *)0x0) {
    __splitpath(param_1,local_29c,local_108,local_28c,local_2a4);
    __splitpath(&DAT_00b42f68,local_29c,local_20c,(char *)0x0,(char *)0x0);
    pcVar2 = local_108;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)local_108;
    pcVar2 = &cStack_20d;
    do {
      pcVar5 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar5 != '\0');
    pcVar5 = local_108;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar2 = pcVar2 + 1;
    }
    __makepath(param_2,local_29c,local_20c,local_28c,local_2a4);
  }
  return;
}



void FUN_00801110(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  FUN_00772ff0(0xb,param_2,0);
  FUN_00772ff0(1,1,0);
  FUN_00772ff0(2,2,0);
  FUN_00772ff0(4,1,0);
  FUN_00772ff0(5,2,0);
  *(undefined1 *)((int)param_1 + 0x5a) = 0;
  FUN_00772ff0(0x18,0,0);
  FUN_00773100(1,param_3,0,0);
  FUN_00773100(2,param_3,0,0);
  FUN_00773100(5,param_4,0,0);
  FUN_00773100(6,param_4,0,0);
  FUN_00773100(7,param_4,0,0);
  FUN_00771640(2);
  return;
}



void FUN_008011e0(undefined4 param_1,undefined4 param_2)

{
  FUN_00773100(1,param_2,0,0);
  FUN_00773100(2,param_2,0,0);
  return;
}



void FUN_00801210(int param_1,int param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (char *)0x0)) {
    pcVar5 = &DAT_00b42d80;
    if (DAT_00b42d80 == '\0') {
      pcVar5 = &DAT_00b42f68;
    }
    iVar8 = param_1 - (int)pcVar5;
    do {
      cVar2 = *pcVar5;
      pcVar5[iVar8] = cVar2;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    pcVar5 = param_3;
    if (DAT_00b43070 != '\0') {
      puVar3 = (undefined4 *)(param_1 + -1);
      do {
        puVar6 = puVar3;
        puVar3 = (undefined4 *)((int)puVar6 + 1);
      } while (*(char *)((int)puVar6 + 1) != '\0');
      *(undefined4 *)((int)puVar6 + 1) = 0x2e524448;
      *(undefined1 *)((int)puVar6 + 5) = 0;
    }
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    uVar4 = (int)pcVar5 - (int)param_3;
    pcVar5 = (char *)(param_1 + -1);
    do {
      pcVar1 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
    for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar5 = *param_3;
      param_3 = param_3 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  return;
}



void FUN_008012e0(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009d078e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a93494;
  local_4 = 1;
  if (in_ECX[0x1c] != 0) {
    piVar1 = (int *)(in_ECX[0x1c] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0(uVar2);
    }
    in_ECX[0x1c] = 0;
  }
  FUN_0076b350(in_ECX);
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(in_ECX + 0x1c,4,1,FUN_004027d0);
  local_4 = 0xffffffff;
  FUN_0076c760();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00801380(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d1138;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = in_ECX;
  piVar4 = (int *)FUN_007606a0(&local_10,uVar3);
  iVar2 = in_ECX[0x1c];
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
    in_ECX[0x1c] = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  local_4 = 0xffffffff;
  if (local_10 != (int *)0x0) {
    local_10[0x18] = local_10[0x18] + -1;
    if (local_10[0x18] == 0) {
      FUN_007604d0();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_008014e0(char *param_1,int *param_2,int param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  FILE *_File;
  size_t sVar9;
  void *_Str;
  uint uVar10;
  int *unaff_EBX;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  int *unaff_FS_OFFSET;
  FILE *_File_00;
  FILE *pFVar15;
  undefined4 uStack_d98;
  int *local_d94;
  int *local_d90;
  size_t local_d8c;
  undefined4 local_d88;
  int *local_d84;
  int *local_d80;
  uint local_d7c;
  int local_d78;
  char *local_d74;
  int *local_d70;
  uint local_d6c;
  int *local_d68;
  int local_d64;
  int *piStack_d60;
  int iStack_d5c;
  undefined4 uStack_d58;
  undefined4 uStack_d54;
  undefined4 local_d50;
  undefined **ppuStack_d4c;
  char *pcStack_d48;
  char local_d44 [260];
  char local_c40 [256];
  undefined1 auStack_b40 [3];
  char acStack_b3d [1301];
  char acStack_628 [256];
  char acStack_528 [4];
  char acStack_524 [1300];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d06fe;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&uStack_d98;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffff258;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar12 = 0;
  local_d74 = param_1;
  local_d84 = param_2;
  local_d78 = param_3;
  local_d64 = param_4;
  local_d94 = (int *)0x0;
  local_d90 = (int *)0x0;
  local_d68 = (int *)0x0;
  local_d50 = 0;
  local_d88 = 0;
  FUN_00801210(local_d44,param_1,param_4,&PTR_LAB_00a8abc0,uVar4);
  uStack_d98._0_3_ = CONCAT12(1,(undefined2)uStack_d98);
  if (DAT_00b430b8 != 0) {
    iVar12 = FUN_007dac70(param_4);
  }
  if ((DAT_00b2dd4c != '\0') && (iVar12 == 0)) {
    local_d70 = (int *)0x0;
    local_d6c = 0;
    local_d80 = (int *)0x0;
    local_d7c = 0;
    cVar2 = FUN_004315f0(local_d44,&local_d80,0x20);
    uVar3 = FUN_004315f0(param_1,&local_d70,0x20);
    uStack_d98 = (int *)CONCAT13(uVar3,(undefined3)uStack_d98);
    if ((cVar2 == '\0') && (DAT_00b430ae != '\0')) {
      if (DAT_00b42d80 == '\0') {
        FUN_00800fb0("cache:\\");
        FUN_00801210(local_d44,param_1,param_4,&PTR_LAB_00a8abc0);
      }
      cVar2 = FUN_004315f0(local_d44,&local_d80,0x20);
    }
    if ((uStack_d98._3_1_ == '\0') &&
       (_sprintf(local_c40,"SHADER ERROR : error opening HLSL source file : %s",param_1),
       DAT_00b42e8c != (code *)0x0)) {
      (*DAT_00b42e8c)(local_c40,0);
    }
    if (cVar2 == '\0') {
      uStack_d98 = (int *)((uint)uStack_d98 & 0xffff);
    }
    if ((local_d7c < local_d6c) || ((local_d6c == local_d7c && (local_d80 < local_d70)))) {
      uStack_d98 = (int *)((uint)uStack_d98 & 0xffff);
    }
  }
  uStack_d98 = (int *)((uint)uStack_d98 & 0xffffff);
  local_d8c = 0;
  if (iVar12 == 0) {
    if (uStack_d98._2_1_ == '\0') {
      piStack_d60 = (int *)0x0;
      if (DAT_00b43070 != '\0') {
        iVar12 = *local_d84;
        piStack_d60 = local_d84;
        while (iVar12 != 0) {
          piStack_d60 = piStack_d60 + 2;
          iVar12 = *piStack_d60;
        }
        *piStack_d60 = (int)&DAT_00a6dfc0;
        piStack_d60[1] = (int)&DAT_00a2f7ec;
      }
      piVar5 = (int *)FUN_00431130(param_1,0,0x2800,0x20);
      if (piVar5 == (int *)0x0) {
LAB_00801ae5:
        pcVar14 = "SHADER ERROR : error opening hlsl file : %s";
        goto LAB_00801c36;
      }
      if ((char)piVar5[9] == '\0') {
        (**(code **)*piVar5)(1);
        goto LAB_00801ae5;
      }
      uVar6 = (*(code *)((undefined4 *)*piVar5)[7])();
      uStack_d58 = uVar6;
      piVar7 = (int *)FUN_00401f00(uVar6);
      local_d70 = piVar7;
      FUN_0042c8e0(piVar7,uVar6);
      iVar12 = local_d78;
      local_d80 = local_d84 + 1;
      ppuStack_d4c = &PTR_LAB_00a93484;
      pcStack_d48 = param_1;
      acStack_b3d[1] = 0;
      iStack_d5c = 8;
      piVar11 = local_d80;
      do {
        pcVar14 = (char *)piVar11[-1];
        pcVar8 = pcVar14;
        if (pcVar14 != (char *)0x0) {
          do {
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
          uVar4 = (int)pcVar8 - (int)pcVar14;
          pcVar8 = acStack_b3d;
          do {
            pcVar1 = pcVar8 + 1;
            pcVar8 = pcVar8 + 1;
          } while (*pcVar1 != '\0');
          for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar14;
            pcVar14 = pcVar14 + 4;
            pcVar8 = pcVar8 + 4;
          }
          pcVar1 = (char *)*piVar11;
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar8 = *pcVar14;
            pcVar14 = pcVar14 + 1;
            pcVar8 = pcVar8 + 1;
          }
          if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
            pcVar14 = acStack_b3d;
            do {
              pcVar8 = pcVar14 + 1;
              pcVar14 = pcVar14 + 1;
            } while (*pcVar8 != '\0');
            pcVar14[0] = '=';
            pcVar14[1] = '\0';
            pcVar14 = pcVar1;
            do {
              cVar2 = *pcVar14;
              pcVar14 = pcVar14 + 1;
            } while (cVar2 != '\0');
            pcVar8 = acStack_b3d;
            do {
              pcVar13 = pcVar8 + 1;
              pcVar8 = pcVar8 + 1;
            } while (*pcVar13 != '\0');
            pcVar13 = pcVar1;
            for (uVar4 = (uint)((int)pcVar14 - (int)pcVar1) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined4 *)pcVar8 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar8 = pcVar8 + 4;
            }
            for (uVar4 = (int)pcVar14 - (int)pcVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *pcVar8 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar8 = pcVar8 + 1;
            }
          }
          pcVar14 = acStack_b3d;
          do {
            pcVar8 = pcVar14;
            pcVar14 = pcVar8 + 1;
          } while (pcVar8[1] != '\0');
          pcVar14[0] = ',';
          pcVar14[1] = ' ';
          pcVar8[3] = '\0';
          uVar6 = uStack_d58;
          piVar7 = local_d70;
        }
        piVar11 = piVar11 + 2;
        iStack_d5c = iStack_d5c + -1;
      } while (iStack_d5c != 0);
      _sprintf(acStack_524,"compiling : %s\n %s %s",local_d74,local_d78,acStack_b3d + 1);
      if (DAT_00b42e8c != (code *)0x0) {
        (*DAT_00b42e8c)(acStack_524,0);
      }
      local_d78 = D3DXCompileShader(piVar7,uVar6,local_d84,&ppuStack_d4c,&DAT_00a6aba4,iVar12,0,
                                    &local_d94,&local_d90,&local_d50);
      (**(code **)*piVar5)(1);
      FUN_00401f20(piVar7);
      if ((local_d90 != (int *)0x0) && (local_d94 == (int *)0x0)) {
        acStack_b3d[1] = 0;
        iVar12 = 0;
        piVar5 = local_d80;
        do {
          pcVar14 = (char *)piVar5[-1];
          pcVar8 = pcVar14;
          if (pcVar14 == (char *)0x0) break;
          do {
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
          uVar4 = (int)pcVar8 - (int)pcVar14;
          pcVar8 = acStack_b3d;
          do {
            pcVar1 = pcVar8 + 1;
            pcVar8 = pcVar8 + 1;
          } while (*pcVar1 != '\0');
          for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar14;
            pcVar14 = pcVar14 + 4;
            pcVar8 = pcVar8 + 4;
          }
          pcVar1 = (char *)*piVar5;
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar8 = *pcVar14;
            pcVar14 = pcVar14 + 1;
            pcVar8 = pcVar8 + 1;
          }
          if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
            pcVar14 = acStack_b3d;
            do {
              pcVar8 = pcVar14 + 1;
              pcVar14 = pcVar14 + 1;
            } while (*pcVar8 != '\0');
            pcVar14[0] = '=';
            pcVar14[1] = '\0';
            pcVar14 = pcVar1;
            do {
              cVar2 = *pcVar14;
              pcVar14 = pcVar14 + 1;
            } while (cVar2 != '\0');
            pcVar8 = acStack_b3d;
            do {
              pcVar13 = pcVar8 + 1;
              pcVar8 = pcVar8 + 1;
            } while (*pcVar13 != '\0');
            pcVar13 = pcVar1;
            for (uVar4 = (uint)((int)pcVar14 - (int)pcVar1) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined4 *)pcVar8 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar8 = pcVar8 + 4;
            }
            for (uVar4 = (int)pcVar14 - (int)pcVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *pcVar8 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar8 = pcVar8 + 1;
            }
          }
          pcVar14 = acStack_b3d;
          do {
            pcVar8 = pcVar14;
            pcVar14 = pcVar8 + 1;
          } while (pcVar8[1] != '\0');
          iVar12 = iVar12 + 1;
          piVar5 = piVar5 + 2;
          pcVar14[0] = ',';
          pcVar14[1] = ' ';
          pcVar8[3] = '\0';
        } while (iVar12 < 8);
        uVar6 = (**(code **)(*local_d90 + 0xc))(local_d90);
        _sprintf(acStack_528,"%s\n %s\n %s",local_d78,auStack_b40,uVar6);
        if (DAT_00b42e8c != (code *)0x0) {
          (*DAT_00b42e8c)(acStack_528,0);
        }
        (**(code **)(*local_d94 + 8))(local_d94);
        local_d90 = (int *)0x0;
      }
      if (local_d78 == 0) {
        sVar9 = local_d8c;
        if (local_d94 != (int *)0x0) {
          _File = _fopen(local_d44,"wb");
          if (_File == (FILE *)0x0) {
            _sprintf(local_c40,"invalid cache file : %s",local_d44);
            if (DAT_00b42e8c != (code *)0x0) {
              (*DAT_00b42e8c)(local_c40,0);
            }
            sVar9 = (**(code **)(*local_d94 + 0xc))(local_d94);
          }
          else {
            sVar9 = (**(code **)(*local_d94 + 0x10))(local_d94);
            _File_00 = (FILE *)0x1;
            piVar5 = uStack_d98;
            pFVar15 = _File;
            local_d8c = sVar9;
            _Str = (void *)(**(code **)(*uStack_d98 + 0xc))();
            _fwrite(_Str,(size_t)piVar5,sVar9,_File_00);
            _fclose(_File);
            FUN_0042e800(&ppuStack_d4c);
            sVar9 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,pFVar15);
          }
        }
        if (piStack_d60 != (int *)0x0) {
          *piStack_d60 = 0;
          piStack_d60[1] = 0;
        }
        goto LAB_00801b4d;
      }
    }
    else {
      piVar5 = (int *)FUN_00431130(local_d44,0,0x2800,0x20);
      if (piVar5 != (int *)0x0) {
        if ((char)piVar5[9] != '\0') {
          uVar6 = (**(code **)(*piVar5 + 0x1c))();
          local_d88 = uVar6;
          local_d8c = FUN_00401f00(uVar6);
          uStack_d98 = (int *)CONCAT13(1,(undefined3)uStack_d98);
          FUN_0042c8e0(local_d8c,uVar6);
        }
        (**(code **)*piVar5)(1);
        sVar9 = local_d8c;
        goto LAB_00801b4d;
      }
      param_1 = local_d44;
      pcVar14 = "SHADER ERROR : error opening cache file : %s";
LAB_00801c36:
      _sprintf(local_c40,pcVar14,param_1);
      if (DAT_00b42e8c != (code *)0x0) {
        pcVar14 = local_c40;
        goto LAB_00801c57;
      }
    }
LAB_00801c5d:
    local_d68 = (int *)0x0;
  }
  else {
    local_d8c = iVar12 + 0x104;
    sVar9 = local_d8c;
LAB_00801b4d:
    if (sVar9 != 0) {
      if (DAT_00b430b4 == 0) {
        iVar12 = (**(code **)(**(int **)(DAT_00b43104 + 0x280) + 0x16c))
                           (*(int **)(DAT_00b43104 + 0x280),sVar9,&uStack_d54);
        if (iVar12 == 0) {
          local_d64 = FUN_00401f00(0x38);
          uStack_4 = 0;
          if (local_d64 == 0) {
            local_d68 = (int *)0x0;
          }
          else {
            local_d68 = (int *)FUN_00780d80(DAT_00b43104);
          }
          uStack_4 = 0xffffffff;
          (**(code **)(*local_d68 + 0x44))(uStack_d54);
          goto LAB_00801c16;
        }
        _sprintf(acStack_628,"SHADER ERROR : failed to create vertex shader : %s",local_d44);
        if (DAT_00b42e8c == (code *)0x0) goto LAB_00801c5d;
        pcVar14 = acStack_628;
LAB_00801c57:
        (*DAT_00b42e8c)(pcVar14,0);
        goto LAB_00801c5d;
      }
      FUN_007daf50(local_d64,sVar9,local_d88);
    }
LAB_00801c16:
    if (uStack_d98._3_1_ != '\0') {
      FUN_00401f20(sVar9);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return local_d68;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_00801c90(undefined4 param_1,int *param_2,char *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  FILE *_File;
  int *piVar7;
  void *_Str;
  int iVar8;
  uint uVar9;
  int *unaff_EBX;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  int *unaff_FS_OFFSET;
  FILE *_File_00;
  undefined4 uStack_d98;
  int *local_d94;
  int *local_d90;
  int local_d8c;
  int *local_d88;
  uint local_d84;
  int *local_d80;
  uint local_d7c;
  char *pcStack_d78;
  int *local_d74;
  undefined4 local_d70;
  undefined4 local_d6c;
  undefined4 local_d68;
  int *piStack_d64;
  int *local_d60;
  int iStack_d5c;
  undefined4 uStack_d58;
  undefined4 local_d54;
  undefined4 uStack_d50;
  undefined **ppuStack_d4c;
  undefined4 uStack_d48;
  char local_d44 [260];
  char local_c40 [256];
  undefined1 auStack_b40 [3];
  char acStack_b3d [1301];
  char acStack_628 [256];
  char acStack_528 [4];
  char acStack_524 [1300];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d073e;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&uStack_d98;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffff258;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar10 = 0;
  local_d6c = param_1;
  local_d74 = param_2;
  local_d68 = param_4;
  local_d94 = (int *)0x0;
  local_d90 = (int *)0x0;
  local_d60 = (int *)0x0;
  local_d54 = 0;
  local_d70 = 0;
  FUN_00801210(local_d44,param_1,param_4,&PTR_LAB_00a8abbc,uVar3);
  uStack_d98 = (int *)CONCAT13(1,(uint3)uStack_d98);
  if (DAT_00b430b8 != 0) {
    iVar10 = FUN_007dac70(param_4);
  }
  if ((DAT_00b2dd4c != '\0') && (iVar10 == 0)) {
    local_d80 = (int *)0x0;
    local_d7c = 0;
    local_d88 = (int *)0x0;
    local_d84 = 0;
    uVar1 = FUN_004315f0(param_1,&local_d80,0x20);
    uStack_d98._0_3_ = CONCAT12(uVar1,(ushort)uStack_d98);
    cVar2 = FUN_004315f0(local_d44,&local_d88,0x20);
    if ((cVar2 == '\0') && (DAT_00b430ae != '\0')) {
      if (DAT_00b42d80 == '\0') {
        FUN_00800fb0("cache:\\");
        FUN_00801210(local_d44,param_1,local_d68,&PTR_LAB_00a8abbc);
      }
      cVar2 = FUN_004315f0(local_d44,&local_d88,0x20);
    }
    if ((uStack_d98._2_1_ == '\0') &&
       (_sprintf(local_c40,"SHADER ERROR : error opening HLSL source file : %s",param_1),
       DAT_00b42e8c != (code *)0x0)) {
      (*DAT_00b42e8c)(local_c40,0);
    }
    if (cVar2 == '\0') {
      uStack_d98 = (int *)((uint)uStack_d98 & 0xffffff);
    }
    if ((local_d84 < local_d7c) || ((local_d7c == local_d84 && (local_d88 < local_d80)))) {
      uStack_d98 = (int *)((uint)uStack_d98 & 0xffffff);
    }
  }
  uStack_d98._0_3_ = (uint3)(ushort)uStack_d98;
  local_d8c = 0;
  if (iVar10 == 0) {
    if (uStack_d98._3_1_ == '\0') {
      piStack_d64 = (int *)0x0;
      if (DAT_00b43070 != '\0') {
        iVar10 = *local_d74;
        piStack_d64 = local_d74;
        while (iVar10 != 0) {
          piStack_d64 = piStack_d64 + 2;
          iVar10 = *piStack_d64;
        }
        *piStack_d64 = (int)&DAT_00a6dfc0;
        piStack_d64[1] = (int)&DAT_00a2f7ec;
      }
      pcStack_d78 = param_3;
      iVar10 = _strncmp(param_3,"ps_2_0",4);
      if ((iVar10 == 0) && (pcStack_d78 = (char *)FUN_007b4780(1), pcStack_d78 == (char *)0x0)) {
        pcStack_d78 = param_3;
      }
      piVar4 = (int *)FUN_00431130(param_1,0,0x2800,0x20);
      if (piVar4 != (int *)0x0) {
        if ((char)piVar4[9] != '\0') {
          uVar5 = (**(code **)(*piVar4 + 0x1c))();
          uStack_d50 = uVar5;
          local_d80 = (int *)FUN_00401f00(uVar5);
          FUN_0042c8e0(local_d80,uVar5);
          pcVar14 = pcStack_d78;
          local_d88 = local_d74 + 1;
          ppuStack_d4c = &PTR_LAB_00a93484;
          uStack_d48 = param_1;
          acStack_b3d[1] = 0;
          iStack_d5c = 0;
          piVar7 = local_d88;
          do {
            pcVar13 = (char *)piVar7[-1];
            pcVar6 = pcVar13;
            if (pcVar13 == (char *)0x0) break;
            do {
              cVar2 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            uVar3 = (int)pcVar6 - (int)pcVar13;
            pcVar6 = acStack_b3d;
            do {
              pcVar12 = pcVar6 + 1;
              pcVar6 = pcVar6 + 1;
            } while (*pcVar12 != '\0');
            for (uVar9 = uVar3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar6 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar6 = pcVar6 + 4;
            }
            pcVar12 = (char *)*piVar7;
            for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pcVar6 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar6 = pcVar6 + 1;
            }
            if ((pcVar12 != (char *)0x0) && (*pcVar12 != '\0')) {
              pcVar13 = acStack_b3d;
              do {
                pcVar6 = pcVar13 + 1;
                pcVar13 = pcVar13 + 1;
              } while (*pcVar6 != '\0');
              pcVar13[0] = '=';
              pcVar13[1] = '\0';
              pcVar13 = pcVar12;
              do {
                cVar2 = *pcVar13;
                pcVar13 = pcVar13 + 1;
              } while (cVar2 != '\0');
              pcVar6 = acStack_b3d;
              do {
                pcVar11 = pcVar6 + 1;
                pcVar6 = pcVar6 + 1;
              } while (*pcVar11 != '\0');
              pcVar11 = pcVar12;
              for (uVar3 = (uint)((int)pcVar13 - (int)pcVar12) >> 2; uVar3 != 0; uVar3 = uVar3 - 1)
              {
                *(undefined4 *)pcVar6 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar6 = pcVar6 + 4;
              }
              for (uVar3 = (int)pcVar13 - (int)pcVar12 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                *pcVar6 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar6 = pcVar6 + 1;
              }
            }
            pcVar13 = acStack_b3d;
            do {
              pcVar6 = pcVar13;
              pcVar13 = pcVar6 + 1;
            } while (pcVar6[1] != '\0');
            pcVar13[0] = ',';
            pcVar13[1] = ' ';
            pcVar6[3] = '\0';
            iStack_d5c = iStack_d5c + 1;
            piVar7 = piVar7 + 2;
          } while (iStack_d5c < 8);
          _sprintf(acStack_524,"compiling : %s\n %s %s",local_d6c,pcStack_d78,acStack_b3d + 1);
          if (DAT_00b42e8c != (code *)0x0) {
            (*DAT_00b42e8c)(acStack_524,0);
          }
          piVar7 = local_d80;
          local_d80 = (int *)D3DXCompileShader(local_d80,uStack_d50,local_d74,&ppuStack_d4c,
                                               &DAT_00a6aba4,pcVar14,0,&local_d94,&local_d90,
                                               &local_d54);
          (**(code **)*piVar4)(1);
          FUN_00401f20(piVar7);
          if ((local_d90 != (int *)0x0) && (local_d94 == (int *)0x0)) {
            acStack_b3d[1] = 0;
            iVar10 = 8;
            piVar4 = local_d88;
            do {
              pcVar14 = (char *)piVar4[-1];
              pcVar13 = pcVar14;
              if (pcVar14 != (char *)0x0) {
                do {
                  cVar2 = *pcVar13;
                  pcVar13 = pcVar13 + 1;
                } while (cVar2 != '\0');
                uVar3 = (int)pcVar13 - (int)pcVar14;
                pcVar13 = acStack_b3d;
                do {
                  pcVar6 = pcVar13 + 1;
                  pcVar13 = pcVar13 + 1;
                } while (*pcVar6 != '\0');
                for (uVar9 = uVar3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(undefined4 *)pcVar13 = *(undefined4 *)pcVar14;
                  pcVar14 = pcVar14 + 4;
                  pcVar13 = pcVar13 + 4;
                }
                pcVar6 = (char *)*piVar4;
                for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                  *pcVar13 = *pcVar14;
                  pcVar14 = pcVar14 + 1;
                  pcVar13 = pcVar13 + 1;
                }
                if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
                  pcVar14 = acStack_b3d;
                  do {
                    pcVar13 = pcVar14 + 1;
                    pcVar14 = pcVar14 + 1;
                  } while (*pcVar13 != '\0');
                  pcVar14[0] = '=';
                  pcVar14[1] = '\0';
                  pcVar14 = pcVar6;
                  do {
                    cVar2 = *pcVar14;
                    pcVar14 = pcVar14 + 1;
                  } while (cVar2 != '\0');
                  pcVar13 = acStack_b3d;
                  do {
                    pcVar12 = pcVar13 + 1;
                    pcVar13 = pcVar13 + 1;
                  } while (*pcVar12 != '\0');
                  pcVar12 = pcVar6;
                  for (uVar3 = (uint)((int)pcVar14 - (int)pcVar6) >> 2; uVar3 != 0;
                      uVar3 = uVar3 - 1) {
                    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
                    pcVar12 = pcVar12 + 4;
                    pcVar13 = pcVar13 + 4;
                  }
                  for (uVar3 = (int)pcVar14 - (int)pcVar6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                    *pcVar13 = *pcVar12;
                    pcVar12 = pcVar12 + 1;
                    pcVar13 = pcVar13 + 1;
                  }
                }
                pcVar14 = acStack_b3d;
                do {
                  pcVar13 = pcVar14;
                  pcVar14 = pcVar13 + 1;
                } while (pcVar13[1] != '\0');
                pcVar14[0] = ',';
                pcVar14[1] = ' ';
                pcVar13[3] = '\0';
              }
              piVar4 = piVar4 + 2;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            uVar5 = (**(code **)(*local_d90 + 0xc))(local_d90);
            _sprintf(acStack_528,"%s\n %s\n %s",local_d70,auStack_b40,uVar5);
            if (DAT_00b42e8c != (code *)0x0) {
              (*DAT_00b42e8c)(acStack_528,0);
            }
            (**(code **)(*local_d94 + 8))(local_d94);
            local_d90 = (int *)0x0;
          }
          if (local_d80 != (int *)0x0) goto LAB_00802434;
          if (local_d94 != (int *)0x0) {
            _File = _fopen(local_d44,"wb");
            piVar7 = (int *)(**(code **)(*local_d94 + 0x10))(local_d94);
            _File_00 = (FILE *)0x1;
            piVar4 = uStack_d98;
            local_d74 = piVar7;
            _Str = (void *)(**(code **)(*uStack_d98 + 0xc))();
            _fwrite(_Str,(size_t)piVar4,(size_t)piVar7,_File_00);
            _fflush(_File);
            _fclose(_File);
            FUN_0042e800(&ppuStack_d4c);
            local_d8c = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX);
          }
          if (piStack_d64 != (int *)0x0) {
            *piStack_d64 = 0;
            piStack_d64[1] = 0;
          }
          goto LAB_0080231f;
        }
        (**(code **)*piVar4)(1);
      }
      _sprintf(local_c40,"SHADER ERROR : error opening hlsl file : %s",param_1);
      if (DAT_00b42e8c != (code *)0x0) {
        pcVar14 = local_c40;
LAB_0080242f:
        (*DAT_00b42e8c)(pcVar14,0);
      }
    }
    else {
      piVar4 = (int *)FUN_00431130(local_d44,0,0x2800,0x20);
      if (piVar4 != (int *)0x0) {
        if ((char)piVar4[9] != '\0') {
          uVar5 = (**(code **)(*piVar4 + 0x1c))();
          local_d70 = uVar5;
          local_d8c = FUN_00401f00(uVar5);
          uStack_d98._0_3_ = CONCAT12(1,(ushort)uStack_d98);
          FUN_0042c8e0(local_d8c,uVar5);
        }
        (**(code **)*piVar4)(1);
        goto LAB_0080231f;
      }
      _sprintf(local_c40,"SHADER ERROR : error opening cache file : %s",local_d44);
      if (DAT_00b42e8c != (code *)0x0) {
        pcVar14 = local_c40;
        goto LAB_0080242f;
      }
    }
LAB_00802434:
    local_d60 = (int *)0x0;
  }
  else {
    local_d8c = iVar10 + 0x104;
LAB_0080231f:
    iVar10 = local_d8c;
    if (local_d8c != 0) {
      if (DAT_00b430b4 == 0) {
        iVar8 = (**(code **)(**(int **)(DAT_00b43104 + 0x280) + 0x1a8))
                          (*(int **)(DAT_00b43104 + 0x280),local_d8c,&uStack_d58);
        if (iVar8 != 0) {
          _sprintf(acStack_628,"SHADER ERROR : failed to create pixel shader : %s",local_d44);
          if (DAT_00b42e8c != (code *)0x0) {
            pcVar14 = acStack_628;
            goto LAB_0080242f;
          }
          goto LAB_00802434;
        }
        local_d88 = (int *)FUN_00401f00(0x2c);
        uStack_4 = 0;
        if (local_d88 == (int *)0x0) {
          local_d60 = (int *)0x0;
        }
        else {
          local_d60 = (int *)FUN_00780b90(DAT_00b43104);
        }
        uStack_4 = 0xffffffff;
        (**(code **)(*local_d60 + 0x3c))(uStack_d58);
      }
      else {
        FUN_007daf50(local_d68,local_d8c,local_d70);
      }
    }
    if (uStack_d98._2_1_ != '\0') {
      FUN_00401f20(iVar10);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return local_d60;
}



void FUN_00802540(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d078e;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0076d040(uVar3);
  piVar1 = in_ECX + 0x1c;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a93494;
  _eh_vector_constructor_iterator_(piVar1,4,1,FUN_007c88a0,FUN_004027d0);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*piVar1 != 0) {
    piVar2 = (int *)(*piVar1 + 0x60);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_007604d0();
    }
    *piVar1 = 0;
  }
  *(undefined1 *)(in_ECX + 0x1e) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008025d0(byte param_1)

{
  FUN_008012e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined1 FUN_008025f0(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = FUN_007796f0(DAT_00b43104);
  if (cVar1 == '\0') {
    return 0;
  }
  (**(code **)(*in_ECX + 0x98))();
  (**(code **)(*in_ECX + 0xa0))();
  (**(code **)(*in_ECX + 0x9c))();
  FUN_0076cca0(1);
  return 1;
}



void FUN_00802640(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x6c,uVar1);
  piVar3 = (int *)0x0;
  local_4 = 0;
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_007e27f0();
  }
  local_4 = 0xffffffff;
  FUN_00405680(piVar3);
  (**(code **)(*piVar3 + 0x58))(param_1);
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_008026c0(void)

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
  puStack_8 = &LAB_009d07c3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00802540(uVar2);
  *in_ECX = &PTR_FUN_00a9367c;
  in_ECX[0x1f] = 0;
  puVar1 = (undefined4 *)in_ECX[0x1f];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x1f] = 0;
  }
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00802760(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009d07f3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9367c;
  puVar1 = (undefined4 *)in_ECX[0x1f];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x1f] = 0;
  }
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  puVar1 = (undefined4 *)in_ECX[0x1f];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_008012e0(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00802830(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x7c);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x7c) = 0;
  }
  FUN_0076c7d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void FUN_00802890(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x7c);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x7c) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_008029a0(byte param_1)

{
  FUN_00802760();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined2 FUN_008029c0(ushort param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  int in_ECX;
  ushort uVar3;
  undefined4 *puVar4;
  
  if (param_1 < *(ushort *)(in_ECX + 0xe)) {
    uVar3 = *(ushort *)(in_ECX + 0xe) - 1;
    if (param_1 != uVar3) {
      puVar2 = (undefined4 *)((uint)uVar3 * 0x10 + *(int *)(in_ECX + 0x10));
      puVar4 = (undefined4 *)((uint)param_1 * 0x10 + *(int *)(in_ECX + 0x10));
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
      puVar4[2] = puVar2[2];
      puVar4[3] = puVar2[3];
      *(undefined4 *)(*(int *)(in_ECX + 0x14) + (uint)param_1 * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 0x14) + (uint)uVar3 * 4);
      param_1 = uVar3;
    }
    pfVar1 = (float *)((uint)param_1 * 0x10 + 8 + *(int *)(in_ECX + 0x10));
    *pfVar1 = *pfVar1 - 10.0;
    *(undefined4 *)((uint)param_1 * 0x10 + 0xc + *(int *)(in_ECX + 0x10)) = 0;
    *(short *)(in_ECX + 0xe) = *(short *)(in_ECX + 0xe) + -1;
    DAT_00b42d60 = DAT_00b42d60 + -1;
  }
  return *(undefined2 *)(in_ECX + 0xe);
}



undefined2 FUN_00802a60(int param_1)

{
  int in_ECX;
  int extraout_ECX;
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(in_ECX + 0xe);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    if (param_1 == *(int *)(*(int *)(in_ECX + 0x14) + uVar1 * 4)) {
      FUN_008029c0(uVar1);
      in_ECX = extraout_ECX;
    }
  }
  return *(undefined2 *)(in_ECX + 0xe);
}



void FUN_00802a90(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  int in_ECX;
  
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x18) = *param_1;
    *(undefined4 *)(in_ECX + 0x1c) = param_1[1];
    *(undefined4 *)(in_ECX + 0x20) = param_1[2];
  }
  iVar2 = *(int *)(in_ECX + 8);
  puVar1 = (uint *)(iVar2 + 0x1c);
  *puVar1 = *puVar1 & 0xfffffbff;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  iVar2 = *(int *)(in_ECX + 8);
  puVar1 = (uint *)(iVar2 + 0x1c);
  *puVar1 = *puVar1 & 0xfffff7ff;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  iVar2 = *(int *)(in_ECX + 8);
  puVar1 = (uint *)(iVar2 + 0x1c);
  *puVar1 = *puVar1 & 0xffffefff;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  return;
}



void FUN_00802ae0(void)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  int *piVar5;
  uint *in_ECX;
  float *pfVar6;
  int unaff_ESI;
  float10 fVar7;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_30 = 5e+09;
  if (*(ushort *)((int)in_ECX + 0xe) == 0) {
    local_30 = 0.0;
  }
  uVar3 = (uint)*(ushort *)((int)in_ECX + 0xe);
  local_1c = local_30;
  local_18 = local_30;
  local_14 = local_30;
  local_28 = -local_30;
  local_24 = local_28;
  local_20 = local_28;
  if (uVar3 != 0) {
    pfVar6 = (float *)in_ECX[4];
    do {
      if (-2.1474836e+09 < pfVar6[2]) {
        if (*pfVar6 <= local_1c) {
          local_1c = *pfVar6;
        }
        if (local_28 <= *pfVar6) {
          local_28 = *pfVar6;
        }
        if (pfVar6[1] <= local_18) {
          local_18 = pfVar6[1];
        }
        if (local_24 <= pfVar6[1]) {
          local_24 = pfVar6[1];
        }
        if (pfVar6[2] <= local_14) {
          local_14 = pfVar6[2];
        }
        if (local_20 <= pfVar6[2]) {
          local_20 = pfVar6[2];
        }
      }
      pfVar6 = pfVar6 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar3 = in_ECX[1];
  if ((uVar3 != 0) && (piVar5 = (int *)*in_ECX, piVar5 != (int *)0x0)) {
    local_1c = (local_28 - local_1c) * 0.5 + local_1c;
    local_18 = (local_24 - local_18) * 0.5 + local_18;
    local_14 = (local_20 - local_14) * 0.5 + local_14;
    fVar7 = (float10)FUN_00982c30();
    fVar1 = (float)fVar7 + *(float *)(uVar3 + 0x28);
    for (puVar4 = (undefined *)(**(code **)(*piVar5 + 4))(); puVar4 != (undefined *)0x0;
        puVar4 = *(undefined **)(puVar4 + 4)) {
      if (puVar4 == &DAT_00b47878) {
        bVar2 = 1;
        goto LAB_00802d00;
      }
    }
    bVar2 = 0;
LAB_00802d00:
    piVar5 = (int *)(-(uint)bVar2 & (uint)piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x9c))(local_1c,local_18,local_14,fVar1);
      (**(code **)(*piVar5 + 0xa0))(*(undefined2 *)(unaff_ESI + 0xe));
      return;
    }
    piVar5 = (int *)FUN_00560920(&DAT_00b4786c,*in_ECX);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x9c))(local_1c,local_18,local_14,fVar1);
      (**(code **)(*piVar5 + 0xa0))(*(undefined2 *)((int)in_ECX + 0xe));
    }
  }
  return;
}



void FUN_00802db0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = 0;
  if (*(short *)(in_ECX + 0xe) != 0) {
    iVar2 = 0;
    do {
      *(undefined4 *)(*(int *)(in_ECX + 0x10) + 8 + iVar2) = 0;
      *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0xc + iVar2) = 0;
      *(undefined4 *)(*(int *)(in_ECX + 0x14) + iVar1 * 4) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar1 < (int)(uint)*(ushort *)(in_ECX + 0xe));
  }
  *(undefined2 *)(in_ECX + 0xe) = 0;
  FUN_00802ae0();
  return;
}



void FUN_00802e00(undefined4 *param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  int iVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d085a;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 2;
  FUN_007b20b0(uVar2);
  *(undefined2 *)(in_ECX + 3) = *(undefined2 *)(param_1 + 0xb);
  puVar7 = (undefined4 *)in_ECX[1];
  if (puVar7 != param_1) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar7 + 1), LVar3 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    in_ECX[1] = (int)param_1;
    InterlockedIncrement(param_1 + 1);
  }
  in_ECX[9] = param_2;
  iVar4 = FUN_00401f00((uint)*(ushort *)(in_ECX + 3) * 0x10);
  in_ECX[4] = iVar4;
  iVar4 = FUN_00401f00((uint)*(ushort *)(in_ECX + 3) * 4);
  puVar7 = (undefined4 *)0x0;
  iVar6 = 0;
  in_ECX[5] = iVar4;
  if ((short)in_ECX[3] != 0) {
    iVar4 = 0;
    do {
      *(undefined4 *)(iVar4 + in_ECX[4]) = 0;
      *(undefined4 *)(iVar4 + 4 + in_ECX[4]) = 0;
      *(undefined4 *)(iVar4 + 8 + in_ECX[4]) = 0;
      *(undefined4 *)(iVar4 + 0xc + in_ECX[4]) = 0;
      *(undefined4 *)(in_ECX[5] + iVar6 * 4) = 0;
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar6 < (int)(uint)*(ushort *)(in_ECX + 3));
  }
  iVar4 = 0;
  *(short *)((int)in_ECX + 0xe) = (short)in_ECX[3];
  if ((short)in_ECX[3] != 0) {
    iVar6 = 0;
    do {
      *(undefined4 *)(iVar6 + 8 + in_ECX[4]) = 0;
      *(undefined4 *)(iVar6 + 0xc + in_ECX[4]) = 0;
      *(undefined4 *)(in_ECX[5] + iVar4 * 4) = 0;
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 0x10;
    } while (iVar4 < (int)(uint)*(ushort *)((int)in_ECX + 0xe));
  }
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  FUN_00802ae0();
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *in_ECX = 0;
  }
  uVar5 = param_1[2];
  if (*(char *)(param_1 + 3) == '\x01') {
    iVar4 = FUN_00401f00(0xd4);
    local_4._0_1_ = 3;
    if (iVar4 != 0) {
      puVar7 = (undefined4 *)FUN_00864430(uVar5);
    }
  }
  else {
    iVar4 = FUN_00401f00(0xd4);
    local_4._0_1_ = 4;
    if (iVar4 != 0) {
      puVar7 = (undefined4 *)FUN_008645d0(uVar5);
    }
  }
  puVar1 = (undefined4 *)*in_ECX;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puVar1 != puVar7) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar1 + 1), LVar3 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *in_ECX = (int)puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if (DAT_00b42f48 < 2) {
    iVar4 = param_1[8];
  }
  else {
    iVar4 = param_1[7];
  }
  if (iVar4 != 0) {
    FUN_00405680(iVar4);
  }
  if (param_1[9] != 0) {
    FUN_00405680(param_1[9]);
  }
  iVar4 = FUN_00401f00(0xac);
  local_4._0_1_ = 5;
  if (iVar4 == 0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)FUN_007b22c0();
  }
  puVar1 = (undefined4 *)puVar7[0x28];
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puVar1 != (undefined4 *)param_1[6]) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar1 + 1), LVar3 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    iVar4 = param_1[6];
    puVar7[0x28] = iVar4;
    if (iVar4 != 0) {
      InterlockedIncrement((LONG *)(iVar4 + 4));
    }
  }
  puVar7[0x27] = in_ECX;
  if (param_3 == '\0') {
    puVar7[7] = puVar7[7] & 0xfffffffb;
  }
  else {
    puVar7[7] = puVar7[7] | 4;
  }
  puVar7[9] = 0;
  if (*(char *)(param_1 + 0xc) == '\0') {
    puVar7[7] = puVar7[7] & 0xffffdfff;
  }
  else {
    puVar7[7] = puVar7[7] | 0x2000;
  }
  puVar7[9] = 0;
  FUN_00405680(puVar7);
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 != puVar7) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar1 + 1), LVar3 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[2] = (int)puVar7;
    InterlockedIncrement(puVar7 + 1);
  }
  iVar6 = FUN_007b4290(3);
  iVar4 = *in_ECX;
  puVar7 = *(undefined4 **)(iVar6 + 4);
  puVar1 = *(undefined4 **)(iVar4 + 0xbc);
  if (puVar1 != puVar7) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar1 + 1), LVar3 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 **)(iVar4 + 0xbc) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  (**(code **)(**(int **)(iVar6 + 4) + 0x18))(*in_ECX);
  if ((*(int *)(*in_ECX + 0xb4) == 0) || (*(int *)(*(int *)(*in_ECX + 0xb4) + 0x34) == 0)) {
    iVar6 = *(int *)(unaff_retaddr + 0x14) * *(int *)(unaff_retaddr + 0x2c);
    iVar4 = FUN_00401f00(0x2c);
    puStack_8._0_1_ = 6;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_007e3ae0(iVar6,1);
    }
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
    FUN_007263b0(1);
    FUN_007260b0(0,*(undefined4 *)(unaff_retaddr + 0x10),iVar6 * 4,0);
    FUN_007262a0(0,0,0,1,iVar6,4,4);
    FUN_006c61e0(uVar5);
  }
  *unaff_FS_OFFSET = (int)in_ECX;
  return;
}



void FUN_00803210(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  LONG LVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *apuStack_14 [2];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d089e;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[2] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[1] = 0;
  }
  iVar2 = *in_ECX;
  if (*(int *)(iVar2 + 0x1c) != 0) {
    (**(code **)(**(int **)(iVar2 + 0x1c) + 0x88))(apuStack_14,iVar2,uVar3);
    if (apuStack_14[0] != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(apuStack_14[0] + 1);
      if ((LVar4 == 0) && (apuStack_14[0] != (undefined4 *)0x0)) {
        (**(code **)*apuStack_14[0])(1);
      }
    }
  }
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *in_ECX = 0;
  }
  FUN_00802db0();
  if (in_ECX[4] != 0) {
    FUN_00401f20(in_ECX[4]);
    in_ECX[4] = 0;
  }
  FUN_00401f20(in_ECX[5]);
  in_ECX[5] = 0;
  puVar1 = (undefined4 *)in_ECX[2];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[1];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)*in_ECX;
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008033d0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d08d6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(0xc0,uVar2);
  local_4 = 0;
  if (iVar3 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    iVar3 = FUN_00401f00(0x70,uVar2);
    local_4._0_1_ = 1;
    if (iVar3 == 0) {
      local_4 = (uint)local_4._1_3_ << 8;
      puVar5 = (undefined4 *)FUN_00709d10(0);
    }
    else {
      uVar4 = FUN_00703230(0,0,1,1,1,4,1,2,1);
      local_4 = (uint)local_4._1_3_ << 8;
      puVar5 = (undefined4 *)FUN_00709d10(uVar4);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x10);
  local_4 = 0xffffffff;
  if (puVar1 != puVar5) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar1 + 1);
      if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x10) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  FUN_00702970(4,0,0);
  FUN_00702ec0(0,0xbf800000,0x3f800000,0x40000000,0xc0000000);
  FUN_00703050();
  FUN_00702fc0(0,0,0,0,0x3f800000,0x3f800000);
  FUN_00707610();
  FUN_00707370(0,1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void thunk_FUN_00573880(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_ECX;
  
  puVar2 = (undefined4 *)in_ECX[1];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    (**(code **)(*in_ECX + 8))(puVar2);
    puVar2 = puVar1;
  }
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}



void FUN_00803570(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  
  if (param_1 != (int *)0x0) {
    if (*(int *)(in_ECX + 0x10) == 0) {
      FUN_008033d0();
    }
    FUN_004ec910(param_1);
    (**(code **)(*param_1 + 0x18))(*(undefined4 *)(in_ECX + 0x10));
    (**(code **)(*param_1 + 0xa8))
              (*(undefined4 *)(in_ECX + 0x10),&stack0x00000008,&stack0x0000000c,1);
    iVar1 = *(int *)(in_ECX + 0x10);
    puVar2 = *(undefined4 **)(iVar1 + 0xbc);
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)(iVar1 + 0xbc) = 0;
    }
  }
  return;
}



void FUN_00803600(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d0908;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a93744;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a93734;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00803670(byte param_1)

{
  FUN_00803600();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00803690(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d094e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 2;
  FUN_00573880(uVar2);
  puVar1 = *(undefined4 **)(in_ECX + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  *(undefined4 *)(in_ECX + 0x18) = 0;
  puVar1 = *(undefined4 **)(in_ECX + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x10) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x14);
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x10);
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00803600();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00803790(undefined4 param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  
  puVar1 = (undefined4 *)(**(code **)(*in_ECX + 4))();
  puVar1[2] = param_1;
  *puVar1 = 0;
  puVar1[1] = in_ECX[2];
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    *(undefined4 *)in_ECX[2] = puVar1;
    in_ECX[3] = in_ECX[3] + 1;
    in_ECX[2] = (int)puVar1;
    return;
  }
  in_ECX[3] = in_ECX[3] + 1;
  in_ECX[1] = (int)puVar1;
  in_ECX[2] = (int)puVar1;
  return;
}



void FUN_008037d0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  LONG LVar10;
  int in_ECX;
  int *piVar11;
  int *unaff_FS_OFFSET;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined **local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0978;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x10) == 0) {
    FUN_008033d0(uVar7);
  }
  puVar1 = (undefined4 *)**(undefined4 **)(in_ECX + 4);
  piVar2 = (int *)(*(undefined4 **)(in_ECX + 4))[2];
  local_10 = 0;
  local_18 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_1c = &PTR_FUN_00a93754;
  local_4 = 0;
  while (piVar2 != (int *)0x0) {
    cVar6 = (**(code **)(*piVar2 + 0xac))();
    if (cVar6 != '\0') {
      puVar8 = (undefined4 *)(*(code *)local_1c[1])();
      puVar8[2] = piVar2;
      *puVar8 = 0;
      puVar8[1] = local_14;
      puVar3 = puVar8;
      if (local_14 != (undefined4 *)0x0) {
        *local_14 = puVar8;
        puVar3 = local_18;
      }
      local_18 = puVar3;
      local_10 = local_10 + 1;
      local_14 = puVar8;
    }
    if (puVar1 == (undefined4 *)0x0) break;
    puVar3 = puVar1 + 2;
    puVar1 = (undefined4 *)*puVar1;
    piVar2 = (int *)*puVar3;
  }
  puVar1 = local_18;
  if (local_18 == (undefined4 *)0x0) {
    if (*(int *)(in_ECX + 0x18) != 0) {
      FUN_004ec910(*(int *)(in_ECX + 0x18));
      (**(code **)(**(int **)(in_ECX + 0x18) + 0x18))(*(undefined4 *)(in_ECX + 0x10));
      (**(code **)(**(int **)(in_ECX + 0x18) + 0xa8))
                (*(undefined4 *)(in_ECX + 0x10),&param_1,&param_2,1);
    }
  }
  else {
    uVar9 = FUN_007c23c0(param_1,3);
    FUN_0075fa90(uVar9);
    puVar3 = (undefined4 *)*puVar1;
    piVar2 = (int *)puVar1[2];
    iStack_28 = *(int *)(in_ECX + 0x14);
    param_1 = param_2;
    while (piVar2 != (int *)0x0) {
      iStack_24 = *(int *)(in_ECX + 0x10);
      piVar11 = *(int **)(iStack_24 + 0xbc);
      if (piVar11 != piVar2) {
        if (((piVar11 != (int *)0x0) && (LVar10 = InterlockedDecrement(piVar11 + 1), LVar10 == 0))
           && (piVar11 != (int *)0x0)) {
          (**(code **)*piVar11)(1);
        }
        *(int **)(iStack_24 + 0xbc) = piVar2;
        InterlockedIncrement(piVar2 + 1);
      }
      (**(code **)(*piVar2 + 0x18))(*(undefined4 *)(in_ECX + 0x10));
      uStack_20 = CONCAT31(uStack_20._1_3_,puVar3 == (undefined4 *)0x0);
      if (param_1 != 0) {
        piVar11 = (int *)&stack0x0000000c;
        if (puVar3 != (undefined4 *)0x0) {
          piVar11 = &iStack_28;
        }
        (**(code **)(*piVar2 + 0xa8))(*(undefined4 *)(in_ECX + 0x10),&param_1,piVar11,uStack_20);
      }
      iVar5 = iStack_28;
      iVar4 = param_1;
      param_1 = iStack_28;
      iStack_28 = iVar4;
      if (puVar3 == (undefined4 *)0x0) break;
      puVar1 = puVar3 + 2;
      puVar3 = (undefined4 *)*puVar3;
      param_1 = iVar5;
      piVar2 = (int *)*puVar1;
    }
    FUN_007c1ee0(*(undefined4 *)(in_ECX + 0x14));
  }
  iVar4 = *(int *)(in_ECX + 0x10);
  puVar1 = *(undefined4 **)(iVar4 + 0xbc);
  if (puVar1 != (undefined4 *)0x0) {
    LVar10 = InterlockedDecrement(puVar1 + 1);
    if ((LVar10 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(iVar4 + 0xbc) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00803600();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00803a30(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int iVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar5;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d094e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a93754;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  local_4 = 2;
  FUN_00573880(uVar2);
  puVar1 = (undefined4 *)in_ECX[5];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[5] = 0;
  }
  in_ECX[6] = 0;
  puVar1 = (undefined4 *)in_ECX[4];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[4] = 0;
  }
  iVar4 = FUN_007b4290(0x12);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) {
    FUN_00803790(*(int *)(iVar4 + 4));
  }
  if (DAT_00b43070 == '\0') {
    uVar5 = 7;
  }
  else {
    uVar5 = 8;
  }
  iVar4 = FUN_007b4290(uVar5);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) {
    FUN_00803790(*(int *)(iVar4 + 4));
  }
  if (DAT_00b42e84 != '\0') {
    iVar4 = FUN_007b4290(0x15);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) {
      FUN_00803790(*(int *)(iVar4 + 4));
    }
  }
  iVar4 = FUN_007b4290(0xb);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) {
    FUN_00803790(*(int *)(iVar4 + 4));
  }
  iVar4 = FUN_007b4290(0xc);
  if (iVar4 != 0) {
    in_ECX[6] = *(undefined4 *)(iVar4 + 4);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00803b80(void)

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
  
  puStack_8 = &LAB_009d09d8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a93e14;
  local_4 = 2;
  piVar5 = in_ECX + 0x24;
  iVar4 = 3;
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
  iVar4 = 3;
  piVar5 = in_ECX + 0x26;
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
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x26,4,3,FUN_007016a0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x24,4,2,FUN_007016a0);
  local_4 = 0xffffffff;
  FUN_00802760();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00803c90(undefined4 param_1)

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
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("texRatio0",0x10000007,0,6,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0xa8,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("RowOne",0x10000007,0,8,1,&DAT_00a2f7ec,0x10,4,&DAT_00b474cc,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("RowTwo",0x10000007,0,9,1,&DAT_00a2f7ec,0x10,4,&DAT_00b474dc,0);
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
              ("blurscale",0x10000007,0,3,1,&DAT_00a2f7ec,0x10,4,&DAT_00b2e03c,0);
    (**(code **)(**(int **)(in_ECX + 0x2c) + 0x18))
              ("blurdata",0x10000009,0,4,0x10,&DAT_00a2f7ec,0x100,4,&DAT_00b474f8,0);
  }
  FUN_0077aa60(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00803e40(undefined4 param_1,int *param_2,int *param_3,char param_4)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int in_ECX;
  float local_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  piVar4 = param_3;
  piVar3 = param_2;
  if (DAT_00b474f0 == (int *)0x0) {
    if (DAT_00b474ec == (int *)0x0) {
      if (*param_2 == 0) {
        fVar1 = 64.0;
        param_2 = (int *)0x42800000;
      }
      else {
        piVar6 = *(int **)(*param_2 + 0x20);
        if (piVar6 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (**(code **)(*piVar6 + 0x4c))();
        }
        fVar2 = (float)iVar5;
        if (iVar5 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x50))();
        }
        fVar1 = (float)iVar5;
        param_2 = (int *)fVar2;
        if (iVar5 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
      }
    }
    else {
      iVar5 = (**(code **)(*DAT_00b474ec + 0x4c))();
      param_2 = (int *)(float)iVar5;
      if (iVar5 < 0) {
        param_2 = (int *)((float)param_2 + 4.2949673e+09);
      }
      iVar5 = (**(code **)(*DAT_00b474ec + 0x50))();
      fVar1 = (float)iVar5;
      if (iVar5 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
    }
  }
  else {
    iVar5 = (**(code **)(*DAT_00b474f0 + 0x4c))();
    param_2 = (int *)(float)iVar5;
    if (iVar5 < 0) {
      param_2 = (int *)((float)param_2 + 4.2949673e+09);
    }
    iVar5 = (**(code **)(*DAT_00b474f0 + 0x50))();
    fVar1 = (float)iVar5;
    if (iVar5 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
  }
  if (DAT_00b42e96 == '\0') {
    if (*param_3 == 0) {
      piVar6 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
      iVar5 = (**(code **)(*piVar6 + 0x4c))(0);
      param_2 = (int *)(float)iVar5;
      if (iVar5 < 0) {
        param_2 = (int *)((float)param_2 + 4.2949673e+09);
      }
      piVar6 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
      iVar5 = (**(code **)(*piVar6 + 0x50))(0);
      local_14 = (float)iVar5;
    }
    else {
      piVar6 = *(int **)(*param_3 + 0x20);
      if (piVar6 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (**(code **)(*piVar6 + 0x4c))();
      }
      piVar6 = (int *)(float)iVar5;
      if (iVar5 < 0) {
        piVar6 = (int *)((float)piVar6 + 4.2949673e+09);
      }
      if (*(int **)(*param_3 + 0x20) == (int *)0x0) {
        iVar5 = 0;
        local_14 = 0.0;
        param_3 = piVar6;
      }
      else {
        iVar5 = (**(code **)(**(int **)(*param_3 + 0x20) + 0x50))();
        local_14 = (float)iVar5;
        param_3 = piVar6;
      }
    }
    if (iVar5 < 0) {
      local_14 = local_14 + 4.2949673e+09;
    }
    param_3 = (int *)((float)param_3 / (float)param_2);
    local_14 = local_14 / fVar1;
  }
  else {
    param_3 = (int *)0x3f800000;
    local_14 = 1.0;
  }
  *(int **)(in_ECX + 0xa8) = param_3;
  *(float *)(in_ECX + 0xac) = local_14;
  *(float *)(in_ECX + 0xb0) = 0.5 / (float)param_2 + 0.0;
  *(float *)(in_ECX + 0xb4) = 0.5 / fVar1 + 0.0;
  uStack_10 = 0;
  uStack_4 = 0;
  if (param_4 == '\0') {
    fStack_c = (float)param_3;
  }
  else {
    fStack_c = 1.0;
    local_14 = 1.0;
  }
  fStack_8 = local_14;
  if ((DAT_00b3f928[0x80] == 0) && (DAT_00b3f928[0x81] == 0)) {
    if (*piVar4 == 0) {
      FUN_007d71c0(1,0);
    }
    else {
      uVar7 = FUN_007d6fe0();
      FUN_007d7280(1,uVar7);
    }
  }
  if (DAT_00b474ec == (int *)0x0) {
    if (DAT_00b474f0 != (int *)0x0) {
      *(undefined4 *)(in_ECX + 0xa4) = 1;
      if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
         ((char)DAT_00b3f928[0x83] == '\x01')) {
        (**(code **)(*DAT_00b3f928 + 0x144))(&uStack_10);
      }
      goto LAB_00804184;
    }
    *(undefined4 *)(in_ECX + 0xa4) = 0;
    FUN_00802890(*piVar3);
  }
  else {
    *(undefined4 *)(in_ECX + 0xa4) = 2;
  }
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))(&uStack_10);
  }
LAB_00804184:
  FUN_00709c60(DAT_00b3f928);
  if (((char)param_3 != '\0') && (*piVar4 != 0)) {
    FUN_007d72d0();
  }
  return;
}



undefined4 FUN_00804510(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int *local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0a10;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar4 = (int *)FUN_007606a0(&local_10,uVar3);
  iVar2 = in_ECX[0x1c];
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
    in_ECX[0x1c] = iVar2;
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
  FUN_00760010(*(undefined4 *)(in_ECX[0x1c] + 0x14),local_14);
  iVar2 = in_ECX[0x1c];
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar5 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar5;
  }
  FUN_00772cd0(7,0,0);
  iVar2 = in_ECX[0x1c];
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar5 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar5;
  }
  FUN_00772cd0(0xe,0,0);
  iVar2 = in_ECX[0x1c];
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar5 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar5;
  }
  FUN_00772cd0(0x1b,0,0);
  iVar2 = in_ECX[0x1c];
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar5 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar5;
  }
  FUN_00772cd0(0xf,0,0);
  iVar2 = in_ECX[0x1c];
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar5 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar5;
  }
  FUN_00772cd0(0xa8,0xf,0);
  (**(code **)(*in_ECX + 0xb8))();
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



void FUN_008046c0(void)

{
  int in_ECX;
  
  switch(*(undefined4 *)(in_ECX + 0xa4)) {
  case 0:
    FUN_007aecb0(*(undefined4 *)(in_ECX + 0x90));
    FUN_007aec60(*(undefined4 *)(in_ECX + 0x98));
    return;
  case 1:
    FUN_007aecb0(*(undefined4 *)(in_ECX + 0x90));
    FUN_007aec60(*(undefined4 *)(in_ECX + 0x98));
    return;
  case 2:
    FUN_007aecb0(*(undefined4 *)(in_ECX + 0x94));
    FUN_007aec60(*(undefined4 *)(in_ECX + 0x9c));
    return;
  case 3:
    FUN_007aecb0(*(undefined4 *)(in_ECX + 0x90));
    FUN_007aec60(*(undefined4 *)(in_ECX + 0xa0));
    return;
  case 4:
    FUN_007aecb0(*(undefined4 *)(in_ECX + 0x90));
    FUN_007aec60(*(undefined4 *)(in_ECX + 0xa0));
  }
  return;
}



void FUN_00804790(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0a68;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_008026c0(uVar2);
  piVar6 = in_ECX + 0x24;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a93e14;
  _eh_vector_constructor_iterator_(piVar6,4,2,FUN_007c88a0,FUN_007016a0);
  piVar5 = in_ECX + 0x26;
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(piVar5,4,3,FUN_007c88a0,FUN_007016a0);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(in_ECX + 8) = 1;
  local_14 = 2;
  do {
    puVar1 = (undefined4 *)*piVar6;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar6 = 0;
    }
    piVar6 = piVar6 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  iVar4 = 3;
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
  in_ECX[0x29] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008048c0(byte param_1)

{
  FUN_00803b80();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00804bfa) */
/* WARNING: Removing unreachable block (ram,0x00804bff) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008048e0(void)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  undefined4 uVar6;
  float *pfVar7;
  int *in_ECX;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *unaff_FS_OFFSET;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d0aa0;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar4);
  iStack_14 = 0;
  iVar3 = in_ECX[0x1c];
  uStack_4._0_1_ = 1;
  uStack_4._1_3_ = 0;
  iVar8 = 0;
  if (iVar3 == 0) goto LAB_00804bd9;
  *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
  iStack_14 = iVar3;
  switch(in_ECX[0x29]) {
  case 0:
    FUN_007aec20(**(undefined4 **)(iVar3 + 0x24));
    uVar6 = FUN_00405a30();
    goto LAB_0080496b;
  case 1:
    FUN_007aec20(**(undefined4 **)(iVar3 + 0x24));
    uVar6 = DAT_00b474f0;
LAB_0080496b:
    FUN_0076c910(uVar6);
    FUN_0076c730(0x1b,0,0);
    break;
  case 2:
    FUN_007aec20(**(undefined4 **)(iVar3 + 0x24));
    FUN_0076c910(DAT_00b474ec);
    FUN_0076c730(0x1b,1,0);
    FUN_0076c730(0x13,9,0);
    FUN_0076c730(0x14,1,0);
    break;
  case 3:
    FUN_0076c730(0x1b,0,0);
    iStack_18 = DAT_00b474c8 - 1;
    if (iStack_18 < 7) {
      if (iStack_18 < 0) {
        iStack_18 = 0;
      }
      else if (6 < iStack_18) goto LAB_00804a0d;
    }
    else {
LAB_00804a0d:
      iStack_18 = 6;
    }
    FUN_007aec20(**(undefined4 **)(iVar3 + 0x24));
    uVar6 = FUN_00405a30();
    FUN_0076c910(uVar6);
    if (*(int **)(in_ECX[0x1f] + 0x20) == (int *)0x0) {
      iStack_10 = 0;
    }
    else {
      iStack_10 = (**(code **)(**(int **)(in_ECX[0x1f] + 0x20) + 0x4c))();
    }
    _DAT_00b2e03c = (float)iStack_10;
    if (iStack_10 < 0) {
      _DAT_00b2e03c = _DAT_00b2e03c + 4.2949673e+09;
    }
    _DAT_00b2e03c = 1.0 / _DAT_00b2e03c;
    puVar9 = (undefined4 *)(&DAT_00a93780 + iStack_18 * 0xf0);
    puVar10 = &DAT_00b474f8;
    for (iVar8 = 0x3c; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    _DAT_00b2e040 = 0.0;
    fVar2 = *(float *)(&DAT_00a93760 + iStack_18 * 4);
    pfVar7 = (float *)&DAT_00b47510;
    do {
      pfVar5 = pfVar7 + 0x14;
      pfVar7[-4] = pfVar7[-4] / fVar2;
      *pfVar7 = *pfVar7 / fVar2;
      pfVar7[4] = pfVar7[4] / fVar2;
      pfVar7[8] = pfVar7[8] / fVar2;
      pfVar7[0xc] = pfVar7[0xc] / fVar2;
      pfVar7 = pfVar5;
    } while ((int)pfVar5 < 0xb47600);
    break;
  case 4:
    FUN_0076c730(0x1b,0,0);
    iStack_18 = DAT_00b474c8 - 1;
    if (iStack_18 < 7) {
      if (iStack_18 < 0) {
        iStack_18 = 0;
      }
      else if (6 < iStack_18) goto LAB_00804b01;
    }
    else {
LAB_00804b01:
      iStack_18 = 6;
    }
    FUN_007aec20(**(undefined4 **)(iVar3 + 0x24));
    uVar6 = FUN_00405a30();
    FUN_0076c910(uVar6);
    _DAT_00b2e03c = 0.0;
    if (*(int **)(in_ECX[0x1f] + 0x20) == (int *)0x0) {
      iStack_10 = 0;
    }
    else {
      iStack_10 = (**(code **)(**(int **)(in_ECX[0x1f] + 0x20) + 0x4c))();
    }
    _DAT_00b2e040 = (float)iStack_10;
    if (iStack_10 < 0) {
      _DAT_00b2e040 = _DAT_00b2e040 + 4.2949673e+09;
    }
    _DAT_00b2e040 = 1.0 / _DAT_00b2e040;
    puVar9 = (undefined4 *)(&DAT_00a93780 + iStack_18 * 0xf0);
    puVar10 = &DAT_00b474f8;
    for (iVar8 = 0x3c; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    fVar2 = *(float *)(&DAT_00a93760 + iStack_18 * 4);
    pfVar7 = (float *)&DAT_00b47510;
    do {
      pfVar5 = pfVar7 + 0x14;
      pfVar7[-4] = pfVar7[-4] / fVar2;
      *pfVar7 = *pfVar7 / fVar2;
      pfVar7[4] = pfVar7[4] / fVar2;
      pfVar7[8] = pfVar7[8] / fVar2;
      pfVar7[0xc] = pfVar7[0xc] / fVar2;
      pfVar7 = pfVar5;
    } while ((int)pfVar5 < 0xb47600);
  }
  (**(code **)(*in_ECX + 0xb8))();
  iVar8 = iVar3;
LAB_00804bd9:
  FUN_0076ce40(in_ECX[0xe],&iStack_14);
  in_ECX[0xe] = in_ECX[0xe] + 1;
  uStack_4 = 0xffffffff;
  if (iVar8 != 0) {
    piVar1 = (int *)(iVar8 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



int * FUN_00804c50(void)

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
    piVar7 = (int *)FUN_00804790();
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



void FUN_00804de0(void)

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
  
  puStack_8 = &LAB_009d0bb8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a93f2c;
  puVar2 = (undefined4 *)in_ECX[0x25];
  local_4 = 6;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x25] = 0;
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
  piVar6 = in_ECX + 0x21;
  iVar5 = 2;
  do {
    if (piVar6[-2] != 0) {
      piVar1 = (int *)(piVar6[-2] + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0(uVar3);
      }
      piVar6[-2] = 0;
    }
    puVar2 = (undefined4 *)*piVar6;
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar6 = 0;
    }
    puVar2 = (undefined4 *)piVar6[2];
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      piVar6[2] = 0;
    }
    puVar2 = DAT_00b47604;
    piVar6 = piVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (DAT_00b47604 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(DAT_00b47604 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_00b47604 = (undefined4 *)0x0;
  }
  puVar2 = DAT_00b47608;
  if (DAT_00b47608 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(DAT_00b47608 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_00b47608 = (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)in_ECX[0x27];
  local_4._0_1_ = 5;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x26];
  local_4._0_1_ = 4;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x25];
  local_4._0_1_ = 3;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4._0_1_ = 2;
  _eh_vector_destructor_iterator_(in_ECX + 0x23,4,2,FUN_007016a0);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x21,4,2,FUN_007016a0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x1f,4,2,FUN_004027d0);
  local_4 = 0xffffffff;
  FUN_008012e0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00805080(void)

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
              ("Decal Offset",0x10000007,0,0xf,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46198,0);
    (**(code **)(**(int **)(in_ECX + 0x2c) + 0x18))
              ("Decal Count",0x10000007,0,0xe,1,&DAT_00a2f7ec,0x10,4,&DAT_00b4615c,0);
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
    uVar4 = (**(code **)(*(int *)*puVar1 + 0x38))("WorldViewProjTranspose");
    FUN_0075fa90(uVar4);
    (**(code **)(*(int *)*puVar1 + 0x1c))("SkinWorldViewProjTranspose",0x20000009,1,&DAT_00a2f7ec);
    uVar4 = (**(code **)(*(int *)*puVar1 + 0x38))("SkinWorldViewProjTranspose");
    FUN_0075fa90(uVar4);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("DecalCount",0x10000007,0,0x1e,1,&DAT_00a2f7ec,0x10,4,&DAT_00b4615c,0);
    (**(code **)(*(int *)*puVar1 + 0x18))("BoneMatrix3",0x20000009,0x80000,0x2a,0x18,0,0,0,0,0);
    uVar4 = (**(code **)(*(int *)*puVar1 + 0x38))("BoneMatrix3");
    FUN_0075fa90(uVar4);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("decal fade",0x10000007,0,0x1f,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46218,0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00805320(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int in_ECX;
  char *pcVar5;
  char *local_2f0;
  char *local_2ec;
  undefined1 *local_2e8;
  char *local_2e4;
  undefined1 *local_2e0;
  char *local_2dc;
  undefined *local_2d8;
  undefined *local_2d4;
  undefined1 *local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  char *pcStack_2a4;
  char *pcStack_2a0;
  undefined1 *puStack_29c;
  char *pcStack_298;
  undefined1 *puStack_294;
  char *pcStack_290;
  undefined *puStack_28c;
  undefined4 uStack_288;
  undefined1 auStack_284 [44];
  char *local_258;
  char *local_254;
  undefined1 *local_250;
  char *local_24c;
  undefined1 *local_248;
  char *local_244;
  undefined *local_240;
  undefined4 local_23c;
  undefined1 local_238 [44];
  char local_20c [260];
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_2f0;
  local_258 = "lighting\\2x\\v\\decal.v.hlsl";
  local_254 = "DECAL";
  local_250 = &DAT_00a2f7ec;
  local_24c = "GEOMDECAL";
  local_248 = &DAT_00a2f7ec;
  local_244 = "MAXDECALS";
  local_240 = &DAT_00a61fc8;
  local_23c = 0;
  _memset(local_238,0,0x2c);
  FUN_00801030(local_258,local_108);
  _sprintf(local_20c,"GDECAL.vso");
  puVar3 = (undefined4 *)FUN_008014e0(local_108,&local_254,"vs_1_1",local_20c,0,0);
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
  local_2f0 = "lighting\\2x\\v\\decal.v.hlsl";
  local_2ec = "DECAL";
  local_2e8 = &DAT_00a2f7ec;
  local_2e4 = "GEOMDECAL";
  local_2e0 = &DAT_00a2f7ec;
  local_2dc = "MAXDECALS";
  local_2d8 = &DAT_00a61fc8;
  local_2d4 = &DAT_00a90cc8;
  local_2d0 = &DAT_00a2f7ec;
  local_2cc = 0;
  local_2c8 = 0;
  local_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  FUN_00801030("lighting\\2x\\v\\decal.v.hlsl",local_108);
  _sprintf(local_20c,"GDECALS.vso");
  puVar3 = (undefined4 *)FUN_008014e0(local_108,&local_2ec,"vs_1_1",local_20c,0,0);
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
  pcVar5 = "ps_1_3";
  if (1 < DAT_00b42f48) {
    pcVar5 = "ps_2_0";
  }
  pcStack_2a4 = "lighting\\2x\\p\\decal.p.hlsl";
  pcStack_2a0 = "DECAL";
  puStack_29c = &DAT_00a2f7ec;
  pcStack_298 = "GEOMDECAL";
  puStack_294 = &DAT_00a2f7ec;
  pcStack_290 = "MAXDECALS";
  puStack_28c = &DAT_00a61fc8;
  uStack_288 = 0;
  _memset(auStack_284,0,0x2c);
  FUN_00801030(pcStack_2a4,local_108);
  _sprintf(local_20c,"GDECAL.pso");
  puVar3 = (undefined4 *)FUN_00801c90(local_108,&pcStack_2a0,pcVar5,local_20c,0,0);
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
  puVar1 = *(undefined4 **)(in_ECX + 0x90);
  if (puVar1 != *(undefined4 **)(in_ECX + 0x8c)) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *(int *)(in_ECX + 0x8c);
    *(int *)(in_ECX + 0x90) = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  return;
}



undefined4 FUN_00805670(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0ac8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar5 = in_ECX + 0x1f;
  local_18 = 2;
  local_10 = in_ECX;
  do {
    piVar4 = (int *)FUN_007606a0(&local_14,uVar3);
    iVar2 = *piVar5;
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
      *piVar5 = iVar2;
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
    piVar5 = piVar5 + 1;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  (**(code **)(*local_10 + 0xa8))();
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_00805740(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint3 uVar5;
  uint uVar6;
  int *piVar7;
  LONG LVar8;
  undefined4 uVar9;
  int in_ECX;
  int iVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d0b20;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar11 = 0;
  iVar2 = *(int *)(in_ECX + 0x7c);
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    iVar10 = iVar2;
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10,uVar6);
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      iVar11 = iVar2;
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 3;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,1,3,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar3 = *(undefined4 **)(in_ECX + 0x84);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x8c);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,9,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x19,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x18,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  if (iVar10 != *(int *)(in_ECX + 0x80)) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = *(int *)(in_ECX + 0x80);
    if (iVar10 != 0) {
      *(int *)(iVar10 + 0x60) = *(int *)(iVar10 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 4;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 5;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,1,3,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x88);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x90);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,9,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x19,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x18,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar11 != 0) {
    piVar7 = (int *)(iVar11 + 0x5c);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_00772560();
    }
  }
  piVar7 = (int *)(iVar10 + 0x60);
  *piVar7 = *piVar7 + -1;
  local_4 = 0xffffffff;
  if (*piVar7 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00805d40(void)

{
  int *in_ECX;
  
  FUN_00805320();
                    /* WARNING: Could not recover jumptable at 0x00805d53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0xa8))();
  return;
}



void FUN_00805d60(void)

{
  int *in_ECX;
  int iVar1;
  int *piVar2;
  
  piVar2 = in_ECX + 0x1f;
  iVar1 = 2;
  do {
    (**(code **)(*in_ECX + 0x94))(*piVar2);
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



void FUN_00805d90(void)

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
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0bb8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00802540(uVar3);
  piVar6 = in_ECX + 0x1f;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a93f2c;
  _eh_vector_constructor_iterator_(piVar6,4,2,FUN_007c88a0,FUN_004027d0);
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(in_ECX + 0x21,4,2,FUN_007c88a0,FUN_007016a0);
  local_4._0_1_ = 2;
  _eh_vector_constructor_iterator_(in_ECX + 0x23,4,2,FUN_007c88a0,FUN_007016a0);
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  *(undefined1 *)(in_ECX + 8) = 1;
  puVar2 = (undefined4 *)in_ECX[0x25];
  local_4 = CONCAT31(local_4._1_3_,6);
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x25] = 0;
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
  iVar5 = 2;
  do {
    if (*piVar6 != 0) {
      piVar1 = (int *)(*piVar6 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
      *piVar6 = 0;
    }
    piVar6 = piVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00805f00(byte param_1)

{
  FUN_00804de0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00805f20(undefined4 param_1,int param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  LONG LVar7;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  bool bVar8;
  undefined4 uVar9;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d0be8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int **)((int)param_4 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_4 + 0x18) + 0x54))(uVar5);
  }
  (**(code **)(*in_ECX + 0x80))();
  bVar8 = param_2 != 0;
  iVar1 = in_ECX[bVar8 + 0x1f];
  param_4 = (float)FUN_007ee1d0();
  if (bVar8 == 1) {
    *(undefined1 *)(in_ECX[0x25] + 8) = 0;
    *(undefined1 *)(in_ECX[0x26] + 8) = 1;
    *(undefined1 *)(in_ECX[0x27] + 8) = 1;
  }
  else {
    *(undefined1 *)(in_ECX[0x25] + 8) = 1;
    *(undefined1 *)(in_ECX[0x26] + 8) = 0;
    *(undefined1 *)(in_ECX[0x27] + 8) = 0;
  }
  (**(code **)(*(int *)in_ECX[0xc] + 0x48))();
  iVar4 = (int)param_4;
  switch(*(undefined1 *)((int)param_4 + 0x44)) {
  case 0:
    uStack_1c = 0;
    uStack_14 = 0;
    goto LAB_00806010;
  case 1:
    DAT_00b46198 = 0x3f000000;
    DAT_00b4619c = 0x3f000000;
    DAT_00b461a0 = 0;
    DAT_00b461a4 = 0x3f000000;
    break;
  case 2:
    DAT_00b46198 = 0;
    DAT_00b4619c = 0x3f000000;
    DAT_00b461a0 = 0x3f000000;
    DAT_00b461a4 = 0x3f000000;
    break;
  case 3:
    uStack_1c = 0x3f000000;
    uStack_14 = 0x3f000000;
LAB_00806010:
    DAT_00b46198 = uStack_1c;
    DAT_00b4619c = 0x3f000000;
    DAT_00b461a0 = uStack_14;
    DAT_00b461a4 = 0x3f000000;
    break;
  default:
    if (DAT_00b42e8c != (code *)0x0) {
      (*DAT_00b42e8c)("Invalid sub texture in decal",0);
    }
  }
  uVar5 = 10;
  _DAT_00b4615c = 0x3f800000;
  fStack_20 = *(float *)(iVar4 + 0x40);
  param_4 = 1.0;
  while( true ) {
    if ((uVar5 & 1) != 0) {
      param_4 = param_4 * fStack_20;
    }
    uVar5 = uVar5 >> 1;
    if (uVar5 == 0) break;
    fStack_20 = fStack_20 * fStack_20;
  }
  DAT_00b46218 = 1.0 - param_4;
  uVar9 = DAT_00b47604;
  if (param_2 != 0) {
    uVar9 = DAT_00b47608;
  }
  FUN_0075fa90(uVar9);
  piVar6 = (int *)FUN_007ee1d0();
  puVar2 = (undefined4 *)*piVar6;
  param_2 = *(int *)(*(int *)(iVar1 + 0x24) + 4);
  puVar3 = *(undefined4 **)(param_2 + 4);
  if (puVar3 != puVar2) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(param_2 + 4) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  *(int *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) + 1;
  uStack_4 = 0;
  param_2 = iVar1;
  FUN_0076ce40(in_ECX[0xe],&param_2);
  piVar6 = (int *)(iVar1 + 0x60);
  *piVar6 = *piVar6 + -1;
  uStack_4 = 0xffffffff;
  if (*piVar6 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = local_c;
  return 0;
}



int * FUN_00806210(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c57b6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_007aed00();
  }
  local_4 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_00771090(DAT_00b43104,2,1);
  puVar7 = DAT_00b47604;
  if (DAT_00b47604 != puVar4) {
    if (((DAT_00b47604 != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(DAT_00b47604 + 1), LVar5 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    DAT_00b47604 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b47604;
  puVar7 = (undefined4 *)*piVar3;
  if (puVar7 != DAT_00b47604) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar7 + 1), LVar5 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *piVar3 = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  piVar6 = (int *)FUN_00771090(DAT_00b43104,4,1);
  piVar8 = DAT_00b47608;
  if (DAT_00b47608 != piVar6) {
    if (((DAT_00b47608 != (int *)0x0) &&
        (LVar5 = InterlockedDecrement(DAT_00b47608 + 1), LVar5 == 0)) && (piVar8 != (int *)0x0)) {
      (**(code **)*piVar8)(1);
    }
    DAT_00b47608 = piVar6;
    if (piVar6 != (int *)0x0) {
      InterlockedIncrement(piVar6 + 1);
    }
  }
  (**(code **)(*(int *)*piVar3 + 0x50))(0,0,0,2,0);
  (**(code **)(*(int *)*piVar3 + 0x50))(1,3,3,2,0);
  (**(code **)(*DAT_00b47608 + 0x50))(0,0,0,2,0);
  (**(code **)(*DAT_00b47608 + 0x50))(1,1,1,3,0);
  (**(code **)(*DAT_00b47608 + 0x50))(2,2,2,4,0);
  (**(code **)(*DAT_00b47608 + 0x50))(3,3,3,2,0);
  if ((int *)*piVar3 != (int *)0x0) {
    for (puVar7 = (undefined4 *)(**(code **)(*(int *)*piVar3 + 4))();
        (puVar7 != (undefined4 *)0x0 && (puVar7 != &DAT_00b3f684)); puVar7 = (undefined4 *)puVar7[1]
        ) {
    }
  }
  iVar2 = FUN_00401f00(0xa0);
  if (iVar2 == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)FUN_00805d90();
  }
  (**(code **)(*piVar8 + 0x84))();
  FUN_00805320();
  FUN_00805670();
  (**(code **)(*piVar8 + 0x88))();
  (**(code **)(*piVar8 + 0x54))(*piVar3);
  piVar6 = (int *)piVar3[1];
  if (piVar6 != piVar8) {
    if (((piVar6 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar6 + 1), LVar5 == 0)) &&
       (piVar6 != (int *)0x0)) {
      (**(code **)*piVar6)(1);
    }
    piVar3[1] = (int)piVar8;
    InterlockedIncrement(piVar8 + 1);
  }
  *unaff_FS_OFFSET = iVar2;
  return piVar3;
}



undefined4 FUN_00806490(undefined4 *param_1)

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
    if (iVar6 == 3) goto LAB_00806577;
    FUN_00708560(&param_1,4);
    puVar2 = param_1;
    if (param_1 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(param_1 + 1);
      if ((LVar7 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  iVar6 = FUN_00401f00(0x9c);
  uStack_4 = 0;
  if (iVar6 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00864750();
  }
  uStack_4 = 0xffffffff;
  FUN_00405680(piVar5);
  cVar3 = (**(code **)(*piVar5 + 0x58))(puVar1);
  if (cVar3 == '\0') {
    FUN_004a1220(piVar5);
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
LAB_00806577:
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_00806590(void)

{
  int *piVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d0c48;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9405c;
  local_4 = 2;
  piVar5 = in_ECX + 0x27;
  iVar4 = 0x24;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 0x1e;
  piVar5 = in_ECX + 0x4b;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = &DAT_00b47620;
  do {
    if (*piVar5 != 0) {
      piVar1 = (int *)(*piVar5 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
  } while ((int)piVar5 < 0xb47710);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x4b,4,0x1e,FUN_007016a0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x27,4,0x24,FUN_007016a0);
  local_4 = 0xffffffff;
  FUN_007c8b30();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_008066e0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  
  FUN_008025f0();
  piVar5 = (int *)(in_ECX + 0x9c);
  iVar4 = 0x24;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = (int *)(in_ECX + 300);
  iVar4 = 0x1e;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = &DAT_00b47620;
  do {
    if (*piVar5 != 0) {
      piVar1 = (int *)(*piVar5 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
  } while ((int)piVar5 < 0xb47710);
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_008067f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  bool bVar12;
  undefined4 uVar13;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d0c78;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar6);
  iVar4 = DAT_00b42e90;
  piVar1 = *(int **)(param_4 + 0x18);
  uStack_4 = 0;
  bVar12 = false;
  if (((piVar1 == (int *)0x0) || (iVar7 = (**(code **)(*piVar1 + 0x54))(), iVar7 < 1)) ||
     (iVar7 = (**(code **)(*piVar1 + 0x54))(), 10 < iVar7)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  piVar8 = (int *)(-(uint)bVar3 & (uint)piVar1);
  uVar6 = 0;
  if (piVar8 != (int *)0x0) {
    if (((piVar1 == (int *)0x0) || (iVar7 = (**(code **)(*piVar1 + 0x54))(), iVar7 < 5)) ||
       (iVar7 = (**(code **)(*piVar1 + 0x54))(), 10 < iVar7)) {
      bVar3 = 0;
    }
    else {
      bVar3 = 1;
    }
    uVar6 = -(uint)bVar3 & (uint)piVar1;
  }
  if (piVar1 == (int *)0x0) {
    if (DAT_00b42e8c != (code *)0x0) {
      (*DAT_00b42e8c)("Attempting to render geometry with a shader, but no shader property",0);
    }
    uVar9 = 0;
    goto LAB_00807264;
  }
  if (((*(int *)(param_4 + 8) == 0) || ((*(byte *)(*(int *)(param_4 + 8) + 0x18) & 1) == 0)) ||
     (1.0 <= (float)piVar1[8])) {
    FUN_007e2430(0x3f800000);
  }
  else {
    DAT_00b464a4 = piVar1[8];
    bVar12 = true;
  }
  if (piVar8 != (int *)0x0) {
    if (DAT_00b42eac == 1) {
      uVar5 = FUN_007ed5d0();
      uVar10 = (uint)uVar5;
      if (10 < uVar5) {
        uVar10 = 10;
      }
      puVar11 = (undefined4 *)(&DAT_00b2dd50 + uVar10 * 0x10);
    }
    else {
      if (DAT_00b42eac != 2) goto LAB_00806a3e;
      uVar5 = (**(code **)(*piVar8 + 0x60))(param_1);
      uVar10 = (uint)uVar5;
      if (0x10 < uVar5) {
        uVar10 = 0x10;
      }
      puVar11 = &DAT_00b2de00 + uVar10 * 4;
    }
    FUN_007ecae0(0,*puVar11,puVar11[1],puVar11[2],puVar11[3]);
    FUN_007ecae0(0x19,DAT_00b25ad0,DAT_00b25ad4,DAT_00b25ad8,DAT_00b25adc);
  }
LAB_00806a3e:
  switch(iVar4) {
  case 0x4c:
    FUN_008736f0(param_1,param_2,param_4,uVar6);
    iVar7 = 0;
    break;
  case 0x4d:
    FUN_008738a0(param_1,param_2,param_4,uVar6);
    iVar7 = 1;
    break;
  default:
    uVar9 = FUN_007c9f30(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    goto LAB_00807264;
  case 0x50:
    FUN_00873aa0(param_1,param_2,param_4,uVar6);
    iVar7 = 2;
    break;
  case 0x52:
    FUN_00873c50(param_1,param_2,param_4,uVar6);
    iVar7 = 3;
    break;
  case 0x57:
    FUN_00873e50(param_1,param_2,param_4,uVar6);
    iVar7 = 4;
    break;
  case 0x58:
    FUN_00874090(param_1,param_2,param_4,uVar6);
    iVar7 = 5;
    break;
  case 0x5b:
    FUN_00874310(param_1,param_2,param_4,uVar6);
    iVar7 = 6;
    break;
  case 0x5d:
    FUN_00874550(param_1,param_2,param_4,uVar6);
    iVar7 = 7;
    break;
  case 0x62:
    FUN_008747d0(param_1,param_2,param_4,uVar6);
    iVar7 = 8;
    break;
  case 99:
    FUN_00874980(param_1,param_2,param_4,uVar6);
    iVar7 = 9;
    break;
  case 0x66:
    FUN_00874b80(param_1,param_2,param_4,uVar6);
    iVar7 = 10;
    break;
  case 0x68:
    FUN_00874d30(param_1,param_2,param_4,uVar6);
    iVar7 = 0xb;
    break;
  case 0x6d:
    FUN_00874f30(param_1,param_2,param_4,uVar6);
    iVar7 = 0xc;
    break;
  case 0x6e:
    FUN_00875170(param_1,param_2,param_4,uVar6);
    iVar7 = 0xd;
    break;
  case 0x71:
    FUN_008753f0(param_1,param_2,param_4,uVar6);
    iVar7 = 0xe;
    break;
  case 0x73:
    FUN_00875630(param_1,param_2,param_4,uVar6);
    iVar7 = 0xf;
    break;
  case 0x7a:
    FUN_008758b0(param_1,param_2,param_4,uVar6);
    iVar7 = 0x10;
    break;
  case 0x7b:
    FUN_00875a10(param_1,param_2,param_4,uVar6);
    iVar7 = 0x11;
    break;
  case 0x80:
    FUN_00875bd0(param_1,param_2,param_4,uVar6);
    iVar7 = 0x12;
    break;
  case 0x81:
    FUN_00875d30(param_1,param_2,param_4,uVar6);
    iVar7 = 0x13;
    break;
  case 0x88:
    FUN_00875ef0(param_1,param_2,param_4,uVar6);
    iVar7 = 0x14;
    break;
  case 0x89:
    FUN_008760f0(param_1,param_2,param_4,uVar6);
    iVar7 = 0x15;
    break;
  case 0x8e:
    FUN_00876340(param_1,param_2,param_4,uVar6);
    iVar7 = 0x16;
    break;
  case 0x8f:
    FUN_00876540(param_1,param_2,param_4,uVar6);
    iVar7 = 0x17;
    break;
  case 0x95:
    FUN_00876790(param_1,param_2,param_4,uVar6);
    iVar7 = 0x18;
    break;
  case 0x96:
    FUN_00876940(param_1,param_2,param_4,uVar6);
    iVar7 = 0x19;
    break;
  case 0x9b:
    FUN_00876b40(param_1,param_2,param_4,uVar6);
    iVar7 = 0x1a;
    break;
  case 0x9c:
    FUN_00876cf0(param_1,param_2,param_4,uVar6);
    iVar7 = 0x1b;
    break;
  case 0xa2:
    FUN_00876ef0(param_1,param_2,param_4,uVar6);
    iVar7 = 0x1c;
    break;
  case 0xa3:
    FUN_00877130(param_1,param_2,param_4,uVar6);
    iVar7 = 0x1d;
    break;
  case 0xa8:
    FUN_008773b0(param_1,param_2,param_4,uVar6);
    iVar7 = 0x1e;
    break;
  case 0xa9:
    FUN_008775f0(param_1,param_2,param_4,uVar6);
    iVar7 = 0x1f;
    break;
  case 0xb0:
    FUN_00877870(param_1,param_2,param_4,uVar6);
    iVar7 = 0x20;
    break;
  case 0xb1:
    FUN_00877a20(param_1,param_2,param_4,uVar6);
    iVar7 = 0x21;
    break;
  case 0xb6:
    FUN_00877c30(param_1,param_2,param_4,uVar6);
    iVar7 = 0x22;
    break;
  case 0xb7:
    FUN_00877de0(param_1,param_2,param_4,uVar6);
    iVar7 = 0x23;
    break;
  case 0xbd:
    FUN_00877ff0(param_1,param_2,param_4,uVar6);
    iVar7 = 0x24;
    break;
  case 0xbe:
    FUN_00878240(param_1,param_2,param_4,uVar6);
    iVar7 = 0x25;
    break;
  case 0xc3:
    FUN_008784c0(param_1,param_2,param_4,uVar6);
    iVar7 = 0x26;
    break;
  case 0xc4:
    FUN_00878710(param_1,param_2,param_4,uVar6);
    iVar7 = 0x27;
    break;
  case 0xca:
    FUN_00878990(param_1,param_2,param_4,uVar6);
    iVar7 = 0x28;
    break;
  case 0xcb:
    FUN_00878b40(param_1,param_2,param_4,uVar6);
    iVar7 = 0x29;
    break;
  case 0xd0:
    FUN_00878d50(param_1,param_2,param_4,uVar6);
    iVar7 = 0x2a;
    break;
  case 0xd1:
    FUN_00878f00(param_1,param_2,param_4,uVar6);
    iVar7 = 0x2b;
    break;
  case 0xd7:
    FUN_00879110(param_1,param_2,param_4,uVar6);
    iVar7 = 0x2c;
    break;
  case 0xd8:
    FUN_00879360(param_1,param_2,param_4,uVar6);
    iVar7 = 0x2d;
    break;
  case 0xdd:
    FUN_008795e0(param_1,param_2,param_4,uVar6);
    iVar7 = 0x2e;
    break;
  case 0xde:
    FUN_00879830(param_1,param_2,param_4,uVar6);
    iVar7 = 0x2f;
    break;
  case 0xea:
    FUN_00879ab0(param_1,param_2,param_4,uVar6);
    iVar7 = 0x30;
    break;
  case 0xed:
    FUN_00879c40(param_1,param_2,param_4,uVar6);
    iVar7 = 0x31;
    break;
  case 0xf8:
    FUN_00879dd0(param_1,param_2,param_4,uVar6);
    iVar7 = 0x32;
    break;
  case 0xfb:
    FUN_00879f60(param_1,param_2,param_4,uVar6);
    iVar7 = 0x33;
    break;
  case 0x10d:
    FUN_0087a0f0(param_1,param_2,param_4,uVar6);
    iVar7 = 0x34;
    break;
  case 0x10e:
    FUN_0087a1e0(param_1,param_2,param_4,uVar6);
    iVar7 = 0x35;
    break;
  case 0x117:
    FUN_0087a2d0(param_1,param_2,param_4,uVar6);
    iVar7 = 0x36;
    break;
  case 0x11a:
    FUN_0087a420(param_1,param_2,param_4,uVar6);
    iVar7 = 0x37;
    break;
  case 0x11e:
    FUN_0087a570(param_1,param_2,param_4,uVar6);
    iVar7 = 0x38;
    break;
  case 0x121:
    FUN_0087a750(param_1,param_2,param_4,uVar6);
    iVar7 = 0x39;
    break;
  case 0x125:
    FUN_0087a930(param_1,param_2,param_4,uVar6);
    iVar7 = 0x3a;
    break;
  case 0x128:
    FUN_0087aac0(param_1,param_2,param_4,uVar6);
    iVar7 = 0x3b;
  }
  if ((-1 < iVar4) && (iVar4 < 0x1a3)) {
    FUN_0076c730(0x1c,0,0);
    if (iVar4 - 0x10fU < 0x1b) {
      uVar9 = 0xf;
    }
    else if ((((iVar4 == 0x19e) || (iVar4 == 0x19f)) || (iVar4 == 10)) || (iVar4 == 0xb)) {
      uVar9 = 8;
    }
    else if (iVar4 == 0) {
      uVar9 = 0;
    }
    else if (iVar4 == 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = 7;
    }
    FUN_0076c730(0xa8,uVar9,0);
  }
  iVar2 = (&DAT_00b47620)[iVar7];
  piVar1 = &DAT_00b47620 + iVar7;
  if (DAT_00b42eac == 4) {
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar9 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar9;
    }
    FUN_00772cd0(0x34,1,0);
    iVar7 = *piVar1;
    if (*(int *)(iVar7 + 0x30) == 0) {
      uVar9 = FUN_00772df0();
      *(undefined4 *)(iVar7 + 0x30) = uVar9;
    }
    FUN_00772cd0(0x38,8,0);
    iVar7 = *piVar1;
    if (*(int *)(iVar7 + 0x30) == 0) {
      uVar9 = FUN_00772df0();
      *(undefined4 *)(iVar7 + 0x30) = uVar9;
    }
    FUN_00772cd0(0x37,7,0);
    iVar7 = *piVar1;
    if (*(int *)(iVar7 + 0x30) == 0) {
      uVar9 = FUN_00772df0();
      *(undefined4 *)(iVar7 + 0x30) = uVar9;
    }
    FUN_00772cd0(0x35,1,0);
    iVar7 = *piVar1;
    if (*(int *)(iVar7 + 0x30) == 0) {
      uVar9 = FUN_00772df0();
      *(undefined4 *)(iVar7 + 0x30) = uVar9;
    }
    uVar13 = 1;
    uVar9 = 0x36;
  }
  else {
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar9 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar9;
    }
    uVar13 = 0;
    uVar9 = 0x34;
  }
  FUN_00772cd0(uVar9,uVar13,0);
  if (iVar4 - 0x33U < 0x160) {
    if ((DAT_00b42eb8 == 0) || (*(char *)(DAT_00b42eb8 + 6) == '\0')) {
      FUN_0076c730(0x1b,1,0);
      FUN_0076c730(0x17,3,0);
      bVar12 = false;
      uVar9 = 0xe;
    }
    else {
      if (bVar12) {
        FUN_0076c730(0x1b,1,0);
        (**(code **)(*(int *)in_ECX[6] + 8))(*(undefined4 *)(param_4 + 8));
      }
      else {
        FUN_0076c730(0x1b,0,0);
      }
      FUN_0076c730(0x17,4,0);
      bVar12 = true;
      uVar9 = 0xe;
    }
LAB_0080721e:
    FUN_0076c730(uVar9,bVar12,0);
  }
  else if (iVar4 - 2U < 0xdd) {
    uVar9 = 0x1b;
    goto LAB_0080721e;
  }
  if ((DAT_00b42eb8 != 0) && (*(char *)(DAT_00b42eb8 + 7) == '\0')) {
    _DAT_00b4668c = 0;
  }
  uVar9 = 0;
LAB_00807264:
  *unaff_FS_OFFSET = local_c;
  return uVar9;
}



void FUN_00808df0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  LONG LVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0de0;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = FUN_007b4290(1,uVar5);
  iVar6 = *(int *)(iVar6 + 4);
  puVar1 = *(undefined4 **)(iVar6 + 0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 1);
  }
  puVar2 = *(undefined4 **)(iVar6 + 0x30);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar2 + 1);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x30);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (puVar3 != puVar2) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x30) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x2c);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x2c) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  puVar3 = *(undefined4 **)(iVar6 + 0x8c);
  puVar4 = *(undefined4 **)(in_ECX + 0x8c);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar4 + 1);
      if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x8c) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(iVar6 + 0x90);
  puVar4 = *(undefined4 **)(in_ECX + 0x90);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar4 + 1);
      if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x90) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(iVar6 + 0x94);
  puVar4 = *(undefined4 **)(in_ECX + 0x94);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar4 + 1);
      if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x94) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(iVar6 + 0x98);
  puVar4 = *(undefined4 **)(in_ECX + 0x98);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar4 + 1);
      if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x98) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  local_4 = local_4 & 0xffffff00;
  if (puVar2 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(puVar2 + 1);
    if (LVar7 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(puVar1 + 1);
    if (LVar7 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00809050(void)

{
  int *in_ECX;
  undefined4 *puVar1;
  
  puVar1 = &DAT_00b47620;
  do {
    (**(code **)(*in_ECX + 0x94))(*puVar1);
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0xb47710);
  return;
}



void FUN_00809080(undefined4 *param_1,undefined4 *param_2)

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
  puStack_8 = &LAB_009d0c48;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007c88b0(param_1,param_2,0,0);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a9405c;
  _eh_vector_constructor_iterator_(in_ECX + 0x27,4,0x24,FUN_007c88a0,FUN_007016a0);
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(in_ECX + 0x4b,4,0x1e,FUN_007c88a0,FUN_007016a0);
  *(undefined1 *)(in_ECX + 0x1e) = 0;
  puVar1 = (undefined4 *)in_ECX[0x1f];
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar2);
      }
    }
    in_ECX[0x1f] = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x20];
  if (puVar1 != param_2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0x20] = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  in_ECX[0x1d] = 0xffffffff;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008091b0(byte param_1)

{
  FUN_00806590();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint * FUN_008091d0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int *piVar6;
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
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(8,uVar2);
  puVar9 = (uint *)0x0;
  local_4 = 0;
  if (iVar3 != 0) {
    puVar9 = (uint *)FUN_007aed00();
  }
  local_4 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_00771090(DAT_00b43104,6,1);
  puVar7 = (undefined4 *)*puVar9;
  if (puVar7 != puVar4) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar7 + 1), LVar5 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *puVar9 = (uint)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  piVar6 = (int *)FUN_00771090(DAT_00b43104,8,1);
  (**(code **)(*(int *)*puVar9 + 0x50))(0,0,0,2,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(1,3,3,2,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(2,5,4,3,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(3,7,5,1,0);
  (**(code **)(*(int *)*puVar9 + 0x4c))(0,4,0xe,0x80000000,2,6,0,0);
  (**(code **)(*(int *)*puVar9 + 0x4c))(0,5,0xf,0x80000001,2,7,0,0);
  (**(code **)(*piVar6 + 0x50))(0,0,0,2,0);
  (**(code **)(*piVar6 + 0x50))(1,1,1,3,0);
  (**(code **)(*piVar6 + 0x50))(2,2,2,4,0);
  (**(code **)(*piVar6 + 0x50))(3,3,3,2,0);
  (**(code **)(*piVar6 + 0x50))(4,5,4,3,0);
  (**(code **)(*piVar6 + 0x50))(5,7,5,1,0);
  (**(code **)(*piVar6 + 0x4c))(0,6,0xe,0x80000000,2,6,0,0);
  (**(code **)(*piVar6 + 0x4c))(0,7,0xf,0x80000001,2,7,0,0);
  piVar8 = (int *)*puVar9;
  uVar2 = 0;
  if (piVar8 != (int *)0x0) {
    for (puVar7 = (undefined4 *)(**(code **)(*piVar8 + 4))(); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[1]) {
      if (puVar7 == &DAT_00b3f684) {
        bVar1 = 1;
        goto LAB_008093d0;
      }
    }
    bVar1 = 0;
LAB_008093d0:
    uVar2 = -(uint)bVar1 & (uint)piVar8;
  }
  puVar7 = (undefined4 *)(**(code **)(*piVar6 + 4))();
  do {
    if (puVar7 == (undefined4 *)0x0) {
      bVar1 = 0;
LAB_008093f5:
      iVar3 = FUN_00401f00(0x1a4);
      if (iVar3 == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)FUN_00809080(uVar2,-(uint)bVar1 & (uint)piVar6);
      }
      (**(code **)(*piVar8 + 0x84))();
      (**(code **)(*piVar8 + 0xa8))();
      (**(code **)(*piVar8 + 0xb4))();
      (**(code **)(*piVar8 + 0xb8))();
      (**(code **)(*piVar8 + 0x88))();
      piVar6 = (int *)puVar9[1];
      if (piVar6 != piVar8) {
        if (((piVar6 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar6 + 1), LVar5 == 0)) &&
           (piVar6 != (int *)0x0)) {
          (**(code **)*piVar6)(1);
        }
        puVar9[1] = (uint)piVar8;
        InterlockedIncrement(piVar8 + 1);
      }
      (**(code **)(*(int *)puVar9[1] + 0x54))(*puVar9);
      *unaff_FS_OFFSET = iVar3;
      return puVar9;
    }
    if (puVar7 == &DAT_00b3f684) {
      bVar1 = 1;
      goto LAB_008093f5;
    }
    puVar7 = (undefined4 *)puVar7[1];
  } while( true );
}



undefined4 FUN_008094d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  LONG LVar7;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar2 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c620b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar5 = (int *)FUN_00707530(4);
  if (piVar5 != (int *)0x0) {
    iVar6 = (**(code **)(*piVar5 + 0x54))(uVar4);
    if (4 < iVar6) {
      iVar6 = (**(code **)(*piVar5 + 0x54))();
      if (iVar6 < 0xb) goto LAB_00809646;
    }
    FUN_00708560(&param_1,4);
    puVar1 = param_1;
    if (param_1 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(param_1 + 1);
      if ((LVar7 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  param_1 = (undefined4 *)FUN_00401f00(0xf0);
  uStack_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_007d94b0();
  }
  uStack_4 = 0xffffffff;
  FUN_00405680(piVar5);
  piVar5[7] = piVar5[7] | 0x800;
  piVar5[9] = 0;
  FUN_00708560(&puStack_10,0);
  if (puStack_10 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(puStack_10 + 1);
    if ((LVar7 == 0) && (puStack_10 != (undefined4 *)0x0)) {
      (**(code **)*puStack_10)(1);
    }
  }
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
LAB_00809646:
      *unaff_FS_OFFSET = local_c;
      return 1;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_00809660(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa8))();
                    /* WARNING: Could not recover jumptable at 0x00809678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0xc0))();
  return;
}



void FUN_00809680(void)

{
  int *piVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d0d48;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a941ac;
  local_4 = 2;
  piVar5 = in_ECX + 0x27;
  iVar4 = 0x14;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 10;
  piVar5 = in_ECX + 0x3b;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = &DAT_00b47718;
  do {
    if (*piVar5 != 0) {
      piVar1 = (int *)(*piVar5 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
  } while ((int)piVar5 < 0xb47768);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x3b,4,10,FUN_007016a0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x27,4,0x14,FUN_007016a0);
  local_4 = 0xffffffff;
  FUN_007c8b30();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_008097d0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  
  FUN_008025f0();
  piVar5 = (int *)(in_ECX + 0x9c);
  iVar4 = 0x14;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = (int *)(in_ECX + 0xec);
  iVar4 = 10;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = &DAT_00b47718;
  do {
    if (*piVar5 != 0) {
      piVar1 = (int *)(*piVar5 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
  } while ((int)piVar5 < 0xb47768);
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_008098e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d0ce8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffac;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar6);
  iVar3 = DAT_00b42e90;
  if ((DAT_00b42e90 == 0x126) || (DAT_00b42e90 == 0x123)) {
    uVar9 = FUN_007c9f30(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    goto LAB_0080a059;
  }
  piVar2 = *(int **)(param_4 + 0x18);
  uStack_4 = 0;
  bVar13 = false;
  if (((piVar2 == (int *)0x0) || (iVar7 = (**(code **)(*piVar2 + 0x54))(), iVar7 < 1)) ||
     (iVar7 = (**(code **)(*piVar2 + 0x54))(), 10 < iVar7)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  piVar8 = (int *)(-(uint)bVar1 & (uint)piVar2);
  uVar6 = 0;
  if (piVar8 != (int *)0x0) {
    if (((piVar2 == (int *)0x0) || (iVar7 = (**(code **)(*piVar2 + 0x54))(), iVar7 < 5)) ||
       (iVar7 = (**(code **)(*piVar2 + 0x54))(), 10 < iVar7)) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
    }
    uVar6 = -(uint)bVar1 & (uint)piVar2;
  }
  if (piVar2 == (int *)0x0) {
    if (DAT_00b42e8c != (code *)0x0) {
      (*DAT_00b42e8c)("Attempting to render geometry with a shader, but no shader property",0);
    }
    uVar9 = 0;
    goto LAB_0080a059;
  }
  bVar1 = *(byte *)(piVar2 + 7);
  if ((*(int *)(param_4 + 8) == 0) || ((*(byte *)(*(int *)(param_4 + 8) + 0x18) & 1) == 0)) {
    FUN_007e2430(0x3f800000);
  }
  else {
    DAT_00b464a4 = piVar2[8];
    bVar13 = true;
  }
  if (piVar8 != (int *)0x0) {
    if (DAT_00b42eac == 1) {
      uVar5 = FUN_007ed5d0();
      uVar10 = (uint)uVar5;
      if (10 < uVar5) {
        uVar10 = 10;
      }
      puVar11 = (undefined4 *)(&DAT_00b2dd50 + uVar10 * 0x10);
    }
    else {
      if (DAT_00b42eac != 2) goto LAB_00809b37;
      uVar5 = (**(code **)(*piVar8 + 0x60))(param_1);
      uVar10 = (uint)uVar5;
      if (0x10 < uVar5) {
        uVar10 = 0x10;
      }
      puVar11 = &DAT_00b2de00 + uVar10 * 4;
    }
    FUN_007ecae0(0,*puVar11,puVar11[1],puVar11[2],puVar11[3]);
    FUN_007ecae0(0x19,DAT_00b25ad0,DAT_00b25ad4,DAT_00b25ad8,DAT_00b25adc);
  }
LAB_00809b37:
  iVar7 = FUN_007b4290(1);
  if ((bVar1 & 2) == 0) {
    uVar9 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x7c);
  }
  else {
    uVar9 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x80);
  }
  FUN_0075fa90(uVar9);
  if (iVar3 < 0x18d) {
    if (iVar3 == 0x18c) {
      FUN_00851ca0(param_1,param_2,param_4,uVar6);
      goto LAB_00809bc0;
    }
    switch(iVar3) {
    case 0x4e:
      FUN_0087fa20(param_1,param_2,param_4,uVar6);
      break;
    default:
switchD_00809b8b_caseD_4f:
      uVar9 = FUN_007c9f30(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      uStack_4 = 0xffffffff;
      FUN_007016a0();
      goto LAB_0080a059;
    case 0x53:
      FUN_0087fbd0(param_1,param_2,param_4,uVar6);
      break;
    case 0x59:
      FUN_0087fd80(param_1,param_2,param_4,uVar6);
      break;
    case 0x5e:
      FUN_0087ffc0(param_1,param_2,param_4,uVar6);
      break;
    case 100:
      FUN_00880200(param_1,param_2,param_4,uVar6);
      break;
    case 0x69:
      FUN_008803b0(param_1,param_2,param_4,uVar6);
      break;
    case 0x6f:
      FUN_00880560(param_1,param_2,param_4,uVar6);
      break;
    case 0x74:
      FUN_008807a0(param_1,param_2,param_4,uVar6);
      break;
    case 0x79:
      FUN_008809e0(param_1,param_2,param_4,uVar6);
      break;
    case 0x7f:
      FUN_00880c00(param_1,param_2,param_4,uVar6);
      break;
    case 0x87:
      FUN_00880e20(param_1,param_2,param_4,uVar6);
      break;
    case 0x8d:
      FUN_008810e0(param_1,param_2,param_4,uVar6);
      break;
    case 0x94:
      FUN_008813a0(param_1,param_2,param_4,uVar6);
      break;
    case 0x9a:
      FUN_00881610(param_1,param_2,param_4,uVar6);
      break;
    case 0xa1:
      FUN_00881880(param_1,param_2,param_4,uVar6);
      break;
    case 0xa7:
      FUN_00881b80(param_1,param_2,param_4,uVar6);
      break;
    case 0xe9:
      FUN_00881e80(param_1,param_2,param_4,uVar6);
      break;
    case 0xec:
      FUN_00881fd0(param_1,param_2,param_4,uVar6);
      break;
    case 0xf7:
      FUN_00882120(param_1,param_2,param_4,uVar6);
      break;
    case 0xfa:
      FUN_00882270(param_1,param_2,param_4,uVar6);
    }
    if ((-1 < iVar3) && (iVar3 < 0x1a3)) goto LAB_00809bc0;
  }
  else {
    if (iVar3 == 0x18d) {
      FUN_00851e70(param_1,param_2,param_4,uVar6);
    }
    else if (iVar3 == 0x18e) {
      FUN_00848950(param_1,param_2,param_4,uVar6);
    }
    else {
      if (iVar3 != 399) goto switchD_00809b8b_caseD_4f;
      FUN_00848ad0(param_1,param_2,param_4,uVar6);
    }
LAB_00809bc0:
    FUN_0076c730(0x1c,0,0);
    if (iVar3 - 0x10fU < 0x1b) {
      FUN_0076c730(0xa8,0xf,0);
    }
    else if ((((iVar3 == 0x19e) || (iVar3 == 0x19f)) || (iVar3 == 10)) || (iVar3 == 0xb)) {
      FUN_0076c730(0xa8,8,0);
    }
    else {
      FUN_0076c730(0xa8,7,0);
    }
  }
  bVar12 = DAT_00b42eac != 4;
  if (bVar12) {
    uVar9 = 0x34;
  }
  else {
    FUN_0076c730(0x34,1,0);
    FUN_0076c730(0x38,8,0);
    FUN_0076c730(0x37,7,0);
    FUN_0076c730(0x35,1,0);
    uVar9 = 0x36;
  }
  FUN_0076c730(uVar9,!bVar12,0);
  if (iVar3 - 0x33U < 0x160) {
    cVar4 = FUN_007c8510();
    if (cVar4 == '\0') {
      FUN_0076c730(0x1b,1,0);
      FUN_0076c730(0x17,3,0);
      bVar13 = false;
      uVar9 = 0xe;
    }
    else {
      if (bVar13) {
        FUN_0076c730(0x1b,1,0);
        (**(code **)(*(int *)in_ECX[6] + 8))(*(undefined4 *)(param_4 + 8));
      }
      else {
        FUN_0076c730(0x1b,0,0);
      }
      FUN_0076c730(0x17,4,0);
      bVar13 = true;
      uVar9 = 0xe;
    }
LAB_00809ffa:
    FUN_0076c730(uVar9,bVar13,0);
  }
  else if (iVar3 - 3U < 0xdc) {
    uVar9 = 0x1b;
    goto LAB_00809ffa;
  }
  if ((DAT_00b42eb8 != 0) && (*(char *)(DAT_00b42eb8 + 7) == '\0')) {
    _DAT_00b4668c = 0;
  }
  uStack_4 = 0xffffffff;
  FUN_007016a0();
  uVar9 = 0;
LAB_0080a059:
  *unaff_FS_OFFSET = local_c;
  return uVar9;
}



void FUN_0080ad10(void)

{
  int *in_ECX;
  undefined4 *puVar1;
  
  puVar1 = &DAT_00b47718;
  do {
    (**(code **)(*in_ECX + 0x94))(*puVar1);
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0xb47768);
  return;
}



void FUN_0080ad40(undefined4 *param_1,undefined4 *param_2)

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
  puStack_8 = &LAB_009d0d48;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007c88b0(param_1,param_2,0,0);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a941ac;
  _eh_vector_constructor_iterator_(in_ECX + 0x27,4,0x14,FUN_007c88a0,FUN_007016a0);
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(in_ECX + 0x3b,4,10,FUN_007c88a0,FUN_007016a0);
  *(undefined1 *)(in_ECX + 0x1e) = 0;
  puVar1 = (undefined4 *)in_ECX[0x1f];
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar2);
      }
    }
    in_ECX[0x1f] = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x20];
  if (puVar1 != param_2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0x20] = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  in_ECX[0x1d] = 0xffffffff;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0080ae70(byte param_1)

{
  FUN_00809680();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint * FUN_0080ae90(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int *piVar6;
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
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(8,uVar2);
  puVar9 = (uint *)0x0;
  local_4 = 0;
  if (iVar3 != 0) {
    puVar9 = (uint *)FUN_007aed00();
  }
  local_4 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_00771090(DAT_00b43104,6,1);
  puVar7 = (undefined4 *)*puVar9;
  if (puVar7 != puVar4) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar7 + 1), LVar5 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *puVar9 = (uint)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  piVar6 = (int *)FUN_00771090(DAT_00b43104,8,1);
  (**(code **)(*(int *)*puVar9 + 0x50))(0,0,0,2,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(1,3,3,2,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(2,5,4,3,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(3,7,5,1,0);
  (**(code **)(*(int *)*puVar9 + 0x4c))(0,4,0xe,0x80000000,2,6,0,0);
  (**(code **)(*(int *)*puVar9 + 0x4c))(0,5,0xf,0x80000001,2,7,0,0);
  (**(code **)(*piVar6 + 0x50))(0,0,0,2,0);
  (**(code **)(*piVar6 + 0x50))(1,1,1,3,0);
  (**(code **)(*piVar6 + 0x50))(2,2,2,4,0);
  (**(code **)(*piVar6 + 0x50))(3,3,3,2,0);
  (**(code **)(*piVar6 + 0x50))(4,5,4,3,0);
  (**(code **)(*piVar6 + 0x50))(5,7,5,1,0);
  (**(code **)(*piVar6 + 0x4c))(0,6,0xe,0x80000000,2,6,0,0);
  (**(code **)(*piVar6 + 0x4c))(0,7,0xf,0x80000001,2,7,0,0);
  piVar8 = (int *)*puVar9;
  uVar2 = 0;
  if (piVar8 != (int *)0x0) {
    for (puVar7 = (undefined4 *)(**(code **)(*piVar8 + 4))(); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[1]) {
      if (puVar7 == &DAT_00b3f684) {
        bVar1 = 1;
        goto LAB_0080b090;
      }
    }
    bVar1 = 0;
LAB_0080b090:
    uVar2 = -(uint)bVar1 & (uint)piVar8;
  }
  puVar7 = (undefined4 *)(**(code **)(*piVar6 + 4))();
  do {
    if (puVar7 == (undefined4 *)0x0) {
      bVar1 = 0;
LAB_0080b0b5:
      iVar3 = FUN_00401f00(0x114);
      if (iVar3 == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)FUN_0080ad40(uVar2,-(uint)bVar1 & (uint)piVar6);
      }
      (**(code **)(*piVar8 + 0x84))();
      (**(code **)(*piVar8 + 0xa8))();
      (**(code **)(*piVar8 + 0xb4))();
      (**(code **)(*piVar8 + 0xb8))();
      (**(code **)(*piVar8 + 0x88))();
      piVar6 = (int *)puVar9[1];
      if (piVar6 != piVar8) {
        if (((piVar6 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar6 + 1), LVar5 == 0)) &&
           (piVar6 != (int *)0x0)) {
          (**(code **)*piVar6)(1);
        }
        puVar9[1] = (uint)piVar8;
        InterlockedIncrement(piVar8 + 1);
      }
      (**(code **)(*(int *)puVar9[1] + 0x54))(*puVar9);
      *unaff_FS_OFFSET = iVar3;
      return puVar9;
    }
    if (puVar7 == &DAT_00b3f684) {
      bVar1 = 1;
      goto LAB_0080b0b5;
    }
    puVar7 = (undefined4 *)puVar7[1];
  } while( true );
}



undefined4 FUN_0080b190(undefined4 *param_1)

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
    if (4 < iVar6) {
      iVar6 = (**(code **)(*piVar5 + 0x54))();
      if (iVar6 < 0xb) goto LAB_0080b2c2;
    }
    FUN_00708560(&param_1,4);
    puVar1 = param_1;
    if (param_1 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(param_1 + 1);
      if ((LVar7 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  iVar6 = FUN_00401f00(0xf0);
  uStack_4 = 0;
  if (iVar6 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_007d94b0();
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
LAB_0080b2c2:
      *unaff_FS_OFFSET = local_c;
      return 1;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_0080b300(void)

{
  int *piVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d0e9c;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a942a4;
  iVar4 = 7;
  local_4 = 7;
  piVar5 = in_ECX + 0x29;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = in_ECX + 0x33;
  iVar4 = 7;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = in_ECX + 0x30;
  iVar4 = 3;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = in_ECX + 0x3a;
  iVar4 = 3;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 2;
  piVar5 = in_ECX + 0x27;
  do {
    if (*piVar5 != 0) {
      piVar1 = (int *)(*piVar5 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined1 *)(in_ECX + 0x1e) = 0;
  puVar2 = (undefined4 *)in_ECX[0x3d];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x3d] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x3e];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x3e] = 0;
  }
  in_ECX[0x1d] = 0xffffffff;
  puVar2 = (undefined4 *)in_ECX[0x3e];
  local_4._0_1_ = 6;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x3d];
  local_4._0_1_ = 5;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4._0_1_ = 4;
  _eh_vector_destructor_iterator_(in_ECX + 0x3a,4,3,FUN_007016a0);
  local_4._0_1_ = 3;
  _eh_vector_destructor_iterator_(in_ECX + 0x33,4,7,FUN_007016a0);
  local_4._0_1_ = 2;
  _eh_vector_destructor_iterator_(in_ECX + 0x30,4,3,FUN_007016a0);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x29,4,7,FUN_007016a0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x27,4,2,FUN_004027d0);
  local_4 = 0xffffffff;
  FUN_007c8b30();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0080b5d0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  
  FUN_008025f0();
  piVar5 = (int *)(in_ECX + 0xa4);
  iVar4 = 7;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = (int *)(in_ECX + 0xcc);
  iVar4 = 7;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = (int *)(in_ECX + 0xc0);
  iVar4 = 3;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = (int *)(in_ECX + 0xe8);
  iVar4 = 3;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = (int *)(in_ECX + 0x9c);
  iVar4 = 2;
  do {
    if (*piVar5 != 0) {
      piVar1 = (int *)(*piVar5 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 1;
}



void FUN_0080b710(void)

{
  int in_ECX;
  int *piVar1;
  int iVar2;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    piVar1 = (int *)(in_ECX + 0xa4);
    iVar2 = 7;
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x5c))();
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    piVar1 = (int *)(in_ECX + 0xcc);
    iVar2 = 7;
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x5c))();
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  piVar1 = (int *)(in_ECX + 0xe8);
  iVar2 = 3;
  do {
    if ((int *)piVar1[-10] != (int *)0x0) {
      (**(code **)(*(int *)piVar1[-10] + 0x44))();
    }
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x44))();
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_007c90b0();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0080c8b0(void)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0da8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar5 = (int *)(in_ECX + 0x9c);
  local_28 = 2;
  do {
    piVar3 = (int *)FUN_007606a0(&local_24,uVar2);
    iVar4 = *piVar5;
    local_4 = 0;
    if (iVar4 != *piVar3) {
      if (iVar4 != 0) {
        piVar1 = (int *)(iVar4 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
      }
      iVar4 = *piVar3;
      *piVar5 = iVar4;
      if (iVar4 != 0) {
        *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
      }
    }
    local_4 = 0xffffffff;
    if ((local_24 != 0) &&
       (*(int *)(local_24 + 0x60) = *(int *)(local_24 + 0x60) + -1, *(int *)(local_24 + 0x60) == 0))
    {
      FUN_007604d0();
    }
    FUN_00772630(&local_2c);
    local_4 = 1;
    FUN_00801110(local_2c,0,1,2);
    FUN_00760010(*(undefined4 *)(*piVar5 + 0x14),local_2c);
    piVar3 = (int *)FUN_00772630(&local_20);
    local_4._0_1_ = 2;
    if (local_2c != (int *)*piVar3) {
      if ((local_2c != (int *)0x0) && (local_2c[0x17] = local_2c[0x17] + -1, local_2c[0x17] == 0)) {
        FUN_00772560();
      }
      local_2c = (int *)*piVar3;
      if (local_2c != (int *)0x0) {
        local_2c[0x17] = local_2c[0x17] + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_20 != 0) &&
       (*(int *)(local_20 + 0x5c) = *(int *)(local_20 + 0x5c) + -1, *(int *)(local_20 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_2c,1,1,2);
    FUN_00760010(*(undefined4 *)(*piVar5 + 0x14),local_2c);
    piVar3 = (int *)FUN_00772630(&local_1c);
    local_4._0_1_ = 3;
    if (local_2c != (int *)*piVar3) {
      if ((local_2c != (int *)0x0) && (local_2c[0x17] = local_2c[0x17] + -1, local_2c[0x17] == 0)) {
        FUN_00772560();
      }
      local_2c = (int *)*piVar3;
      if (local_2c != (int *)0x0) {
        local_2c[0x17] = local_2c[0x17] + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_1c != 0) &&
       (*(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + -1, *(int *)(local_1c + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_2c,2,1,2);
    FUN_00760010(*(undefined4 *)(*piVar5 + 0x14),local_2c);
    piVar3 = (int *)FUN_00772630(&local_18);
    local_4._0_1_ = 4;
    if (local_2c != (int *)*piVar3) {
      if ((local_2c != (int *)0x0) && (local_2c[0x17] = local_2c[0x17] + -1, local_2c[0x17] == 0)) {
        FUN_00772560();
      }
      local_2c = (int *)*piVar3;
      if (local_2c != (int *)0x0) {
        local_2c[0x17] = local_2c[0x17] + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_18 != 0) &&
       (*(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + -1, *(int *)(local_18 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_2c,3,3,2);
    FUN_00760010(*(undefined4 *)(*piVar5 + 0x14),local_2c);
    piVar3 = (int *)FUN_00772630(&local_14);
    local_4._0_1_ = 5;
    if (local_2c != (int *)*piVar3) {
      if ((local_2c != (int *)0x0) && (local_2c[0x17] = local_2c[0x17] + -1, local_2c[0x17] == 0)) {
        FUN_00772560();
      }
      local_2c = (int *)*piVar3;
      if (local_2c != (int *)0x0) {
        local_2c[0x17] = local_2c[0x17] + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_14 != 0) &&
       (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_2c,4,1,2);
    FUN_00760010(*(undefined4 *)(*piVar5 + 0x14),local_2c);
    iVar4 = FUN_00404f00(0);
    if (1 < iVar4) {
      piVar3 = (int *)FUN_00772630(&local_10);
      local_4._0_1_ = 6;
      if (local_2c != (int *)*piVar3) {
        if ((local_2c != (int *)0x0) && (local_2c[0x17] = local_2c[0x17] + -1, local_2c[0x17] == 0))
        {
          FUN_00772560();
        }
        local_2c = (int *)*piVar3;
        if (local_2c != (int *)0x0) {
          local_2c[0x17] = local_2c[0x17] + 1;
        }
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      if ((local_10 != 0) &&
         (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0
         )) {
        FUN_00772560();
      }
      FUN_00801110(local_2c,5,3,2);
      FUN_00760010(*(undefined4 *)(*piVar5 + 0x14),local_2c);
    }
    local_4 = 0xffffffff;
    if (local_2c != (int *)0x0) {
      local_2c[0x17] = local_2c[0x17] + -1;
      if (local_2c[0x17] == 0) {
        FUN_00772560();
      }
    }
    piVar5 = piVar5 + 1;
    local_28 = local_28 + -1;
  } while (local_28 != 0);
  _DAT_00b43ea0 = 0x20082;
  _DAT_00b44530 = 0x10c;
  _DAT_00b43ea4 = 0x23982;
  _DAT_00b44534 = 0x13c;
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_0080cc90(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  LONG LVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0de0;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = FUN_007b4290(1,uVar5);
  iVar6 = *(int *)(iVar6 + 4);
  puVar1 = *(undefined4 **)(iVar6 + 0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 1);
  }
  puVar2 = *(undefined4 **)(iVar6 + 0x30);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar2 + 1);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x30);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (puVar3 != puVar2) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x30) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x2c);
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x2c) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  puVar3 = *(undefined4 **)(iVar6 + 0x8c);
  puVar4 = *(undefined4 **)(in_ECX + 0x8c);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar4 + 1);
      if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x8c) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(iVar6 + 0x90);
  puVar4 = *(undefined4 **)(in_ECX + 0x90);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar4 + 1);
      if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x90) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(iVar6 + 0x94);
  puVar4 = *(undefined4 **)(in_ECX + 0x94);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar4 + 1);
      if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x94) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(iVar6 + 0x98);
  puVar4 = *(undefined4 **)(in_ECX + 0x98);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar4 + 1);
      if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x98) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  local_4 = local_4 & 0xffffff00;
  if (puVar2 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(puVar2 + 1);
    if (LVar7 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(puVar1 + 1);
    if (LVar7 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0080cef0(void)

{
  int *in_ECX;
  undefined4 *puVar1;
  
  puVar1 = &DAT_00b455a0;
  do {
    (**(code **)(*in_ECX + 0x94))(*puVar1);
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0xb455a8);
  return;
}



void FUN_0080cf20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0e9c;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007c88b0(param_1,param_2,0,0);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a942a4;
  _eh_vector_constructor_iterator_(in_ECX + 0x27,4,2,FUN_007c88a0,FUN_004027d0);
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(in_ECX + 0x29,4,7,FUN_007c88a0,FUN_007016a0);
  local_4._0_1_ = 2;
  _eh_vector_constructor_iterator_(in_ECX + 0x30,4,3,FUN_007c88a0,FUN_007016a0);
  local_4._0_1_ = 3;
  _eh_vector_constructor_iterator_(in_ECX + 0x33,4,7,FUN_007c88a0,FUN_007016a0);
  local_4._0_1_ = 4;
  _eh_vector_constructor_iterator_(in_ECX + 0x3a,4,3,FUN_007c88a0,FUN_007016a0);
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  *(undefined1 *)(in_ECX + 0x1e) = 0;
  puVar1 = (undefined4 *)in_ECX[0x3d];
  local_4 = CONCAT31(local_4._1_3_,7);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0x3d] = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x3e];
  if (puVar1 != param_2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0x3e] = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x3e];
  puVar2 = (undefined4 *)in_ECX[9];
  if (puVar2 != puVar1) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    in_ECX[9] = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  in_ECX[0x1d] = 0xffffffff;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0080d0f0(byte param_1)

{
  FUN_0080b300();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0080d110(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  LONG LVar6;
  int iVar7;
  int iVar8;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined4 uVar12;
  int *piStack_3c;
  int *piStack_38;
  int *local_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int *piStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d0ed0;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_34 = in_ECX;
  (**(code **)(*in_ECX + 0x80))(uVar4);
  iStack_30 = DAT_00b42e90;
  if ((((0x15f < DAT_00b42e90) && (DAT_00b42e90 < 0x163)) ||
      ((5 < DAT_00b42e90 && (DAT_00b42e90 < 10)))) || (DAT_00b42e90 == 0x165)) {
    FUN_007b4290(1);
    uVar5 = FUN_007c9f30(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    goto LAB_0080d850;
  }
  piVar2 = *(int **)(param_4 + 0x18);
  bVar9 = false;
  bVar10 = false;
  bVar11 = false;
  cVar3 = '\x01';
  if (piVar2 != (int *)0x0) {
    uVar4 = piVar2[7];
    bVar9 = (uVar4 & 0x400) != 0;
    bVar10 = (uVar4 & 0x800) != 0;
    bVar11 = (uVar4 & 0x1000) != 0;
    FUN_007b4280(uVar4 >> 0x1c);
    FUN_00405ad0(&piStack_38);
    cVar3 = FUN_008aa390(&DAT_00b3fa90);
    if (((piStack_38 != (int *)0x0) && (LVar6 = InterlockedDecrement(piStack_38 + 1), LVar6 == 0))
       && (piStack_38 != (int *)0x0)) {
      (**(code **)*piStack_38)(1);
    }
    piStack_38 = (int *)piVar2[8];
    uStack_1c = DAT_00b46498;
    uStack_2c = DAT_00b46498;
    uStack_18 = DAT_00b4649c;
    uStack_28 = DAT_00b4649c;
    uStack_14 = DAT_00b464a0;
    uStack_24 = DAT_00b464a0;
    piStack_10 = DAT_00b464a4;
    DAT_00b464a4 = piStack_38;
    piStack_20 = piStack_38;
  }
  iVar8 = in_ECX[0x27];
  piVar1 = in_ECX + 0x27;
  if (DAT_00b42eac == 4) {
    if (*(int *)(iVar8 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar8 + 0x30) = uVar5;
    }
    FUN_00772cd0(0x34,1,0);
    iVar8 = *piVar1;
    if (*(int *)(iVar8 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar8 + 0x30) = uVar5;
    }
    FUN_00772cd0(0x38,8,0);
    iVar8 = *piVar1;
    if (*(int *)(iVar8 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar8 + 0x30) = uVar5;
    }
    FUN_00772cd0(0x37,7,0);
    iVar8 = *piVar1;
    if (*(int *)(iVar8 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar8 + 0x30) = uVar5;
    }
    FUN_00772cd0(0x35,1,0);
    iVar8 = *piVar1;
    if (*(int *)(iVar8 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar8 + 0x30) = uVar5;
    }
    uVar12 = 1;
    uVar5 = 0x36;
  }
  else {
    if (*(int *)(iVar8 + 0x30) == 0) {
      uVar5 = FUN_00772df0();
      *(undefined4 *)(iVar8 + 0x30) = uVar5;
    }
    uVar12 = 0;
    uVar5 = 0x34;
  }
  FUN_00772cd0(uVar5,uVar12,0);
  if (DAT_00b42f32 == '\0') {
    iVar8 = 1;
LAB_0080d39e:
    _DAT_00b46688 = piVar2[0x56];
    piStack_3c = in_ECX + 0x29;
    _DAT_00b4668c = piVar2[0x57];
    piStack_38 = in_ECX + 0x30;
    _DAT_00b46690 = piVar2[0x58];
    _DAT_00b46694 = piVar2[0x59];
  }
  else {
    iVar8 = DAT_00b42f48;
    if (DAT_00b42f48 == 1) goto LAB_0080d39e;
    _DAT_00b4616c = piVar2[0x56];
    piStack_3c = in_ECX + 0x33;
    _DAT_00b46170 = piVar2[0x57];
    piStack_38 = in_ECX + 0x3a;
    _DAT_00b46174 = piVar2[0x58];
    _DAT_00b46178 = piVar2[0x59];
  }
  if (param_2 == 0) {
    iVar7 = in_ECX[0x3d];
  }
  else {
    iVar7 = in_ECX[0x3e];
  }
  FUN_0075fa90(iVar7);
  switch(iStack_30) {
  case 0xe0:
    iVar7 = **(int **)(*piVar1 + 0x24);
    if (iVar7 != 0) {
      *(int *)(iVar7 + 0x5c) = *(int *)(iVar7 + 0x5c) + 1;
    }
    uStack_4 = 0;
    uVar5 = (**(code **)(*piVar2 + 0x88))(0);
    FUN_0076c910(uVar5);
    FUN_007aec20(*(undefined4 *)(*(int *)(*piVar1 + 0x24) + 4));
    uVar5 = (**(code **)(*piVar2 + 0x8c))(0);
    FUN_0076c910(uVar5);
    FUN_007aec20(*(undefined4 *)(*(int *)(*piVar1 + 0x24) + 8));
    FUN_0076c910(piVar2[0x5a]);
    FUN_007aec20(*(undefined4 *)(*(int *)(*piVar1 + 0x24) + 0xc));
    FUN_0076c910(DAT_00b430f8);
    if (1 < iVar8) {
      FUN_007aec20(*(undefined4 *)(*(int *)(*piVar1 + 0x24) + 0x14));
      FUN_0076c910(piVar2[0x5b]);
    }
    FUN_0076c730(0x1c,0,0);
    FUN_0076c730(0xa8,7,0);
    FUN_0076c730(0x1b,1,0);
    FUN_0076c730(0x13,5,0);
    FUN_0076c730(0x14,6,0);
    FUN_0076c730(7,1,0);
    FUN_0076c730(0x17,4,0);
    FUN_0076c730(0xe,1,0);
    FUN_007aecb0(*piStack_3c);
    if (cVar3 == '\0') {
      iVar8 = piStack_38[2];
    }
    else {
      iVar8 = *piStack_38;
    }
    FUN_007aec60(iVar8);
    iVar8 = local_34[0xe];
    goto LAB_0080d82b;
  case 0xe1:
    iVar7 = **(int **)(*piVar1 + 0x24);
    if (iVar7 != 0) {
      *(int *)(iVar7 + 0x5c) = *(int *)(iVar7 + 0x5c) + 1;
    }
    uStack_4 = 1;
    uVar5 = (**(code **)(*piVar2 + 0x88))(0);
    FUN_0076c910(uVar5);
    FUN_007aec20(*(undefined4 *)(*(int *)(*piVar1 + 0x24) + 4));
    uVar5 = (**(code **)(*piVar2 + 0x8c))(0);
    FUN_0076c910(uVar5);
    FUN_007aec20(*(undefined4 *)(*(int *)(*piVar1 + 0x24) + 8));
    FUN_0076c910(piVar2[0x5a]);
    FUN_007aec20(*(undefined4 *)(*(int *)(*piVar1 + 0x24) + 0xc));
    FUN_0076c910(DAT_00b430f8);
    if (1 < iVar8) {
      FUN_007aec20(*(undefined4 *)(*(int *)(*piVar1 + 0x24) + 0x14));
      FUN_0076c910(piVar2[0x5b]);
    }
    FUN_0076c730(0x1c,0,0);
    FUN_0076c730(0xa8,7,0);
    FUN_0076c730(0x1b,1,0);
    FUN_0076c730(0x13,5,0);
    FUN_0076c730(0x14,6,0);
    FUN_0076c730(7,1,0);
    FUN_0076c730(0x17,4,0);
    FUN_0076c730(0xe,1,0);
    if ((bVar9) || (cVar3 != '\0')) {
      FUN_007aec60(piStack_38[1]);
      if (bVar11) {
        iVar8 = piStack_3c[4];
      }
      else {
        iVar8 = piStack_3c[2];
      }
    }
    else {
      if (DAT_00b42f48 < 2) {
        iVar8 = *piStack_38;
      }
      else {
        iVar8 = piStack_38[1];
      }
      FUN_007aec60(iVar8);
      if (bVar10) {
        if (bVar11) {
          if (DAT_00b42f48 < 2) {
            iVar8 = piStack_3c[3];
          }
          else {
            iVar8 = piStack_3c[6];
          }
        }
        else if (DAT_00b42f48 < 2) {
          iVar8 = piStack_3c[1];
        }
        else {
          iVar8 = piStack_3c[5];
        }
      }
      else {
        iVar8 = *piStack_3c;
      }
    }
    FUN_007aecb0(iVar8);
    iVar8 = local_34[0xe];
LAB_0080d82b:
    FUN_0076ce40(iVar8,piVar1);
    local_34[0xe] = local_34[0xe] + 1;
    uStack_4 = 0xffffffff;
    if (iVar7 != 0) {
      piVar2 = (int *)(iVar7 + 0x5c);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_00772560();
      }
    }
    break;
  case 0x18c:
    FUN_00851ca0(param_1,param_2,param_4,piVar2);
    break;
  case 0x18d:
    FUN_00851e70(param_1,param_2,param_4,piVar2);
    break;
  case 0x18e:
    FUN_00848950(param_1,param_2,param_4,piVar2);
    break;
  case 399:
    FUN_00848ad0(param_1,param_2,param_4,piVar2);
  }
  uVar5 = 0;
LAB_0080d850:
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}



uint * FUN_0080d940(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int *piVar6;
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
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(8,uVar2);
  puVar9 = (uint *)0x0;
  local_4 = 0;
  if (iVar3 != 0) {
    puVar9 = (uint *)FUN_007aed00();
  }
  local_4 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_00771090(DAT_00b43104,6,1);
  puVar7 = (undefined4 *)*puVar9;
  if (puVar7 != puVar4) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar7 + 1), LVar5 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *puVar9 = (uint)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  piVar6 = (int *)FUN_00771090(DAT_00b43104,8,1);
  (**(code **)(*(int *)*puVar9 + 0x50))(0,0,0,2,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(1,3,3,2,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(2,5,4,3,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(3,7,5,1,0);
  (**(code **)(*(int *)*puVar9 + 0x4c))(0,4,0xe,0x80000000,2,6,0,0);
  (**(code **)(*(int *)*puVar9 + 0x4c))(0,5,0xf,0x80000001,2,7,0,0);
  (**(code **)(*piVar6 + 0x50))(0,0,0,2,0);
  (**(code **)(*piVar6 + 0x50))(1,1,1,3,0);
  (**(code **)(*piVar6 + 0x50))(2,2,2,4,0);
  (**(code **)(*piVar6 + 0x50))(3,3,3,2,0);
  (**(code **)(*piVar6 + 0x50))(4,5,4,3,0);
  (**(code **)(*piVar6 + 0x50))(5,7,5,1,0);
  (**(code **)(*piVar6 + 0x4c))(0,6,0xe,0x80000000,2,6,0,0);
  (**(code **)(*piVar6 + 0x4c))(0,7,0xf,0x80000001,2,7,0,0);
  piVar8 = (int *)*puVar9;
  uVar2 = 0;
  if (piVar8 != (int *)0x0) {
    for (puVar7 = (undefined4 *)(**(code **)(*piVar8 + 4))(); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[1]) {
      if (puVar7 == &DAT_00b3f684) {
        bVar1 = 1;
        goto LAB_0080db40;
      }
    }
    bVar1 = 0;
LAB_0080db40:
    uVar2 = -(uint)bVar1 & (uint)piVar8;
  }
  puVar7 = (undefined4 *)(**(code **)(*piVar6 + 4))();
  do {
    if (puVar7 == (undefined4 *)0x0) {
      bVar1 = 0;
LAB_0080db65:
      iVar3 = FUN_00401f00(0xfc);
      if (iVar3 == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)FUN_0080cf20(uVar2,-(uint)bVar1 & (uint)piVar6);
      }
      (**(code **)(*piVar8 + 0x84))();
      (**(code **)(*piVar8 + 0xa8))();
      (**(code **)(*piVar8 + 0xb4))();
      (**(code **)(*piVar8 + 0xb8))();
      (**(code **)(*piVar8 + 0x88))();
      piVar6 = (int *)puVar9[1];
      if (piVar6 != piVar8) {
        if (((piVar6 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar6 + 1), LVar5 == 0)) &&
           (piVar6 != (int *)0x0)) {
          (**(code **)*piVar6)(1);
        }
        puVar9[1] = (uint)piVar8;
        InterlockedIncrement(piVar8 + 1);
      }
      (**(code **)(*(int *)puVar9[1] + 0x54))(*puVar9);
      *unaff_FS_OFFSET = iVar3;
      return puVar9;
    }
    if (puVar7 == &DAT_00b3f684) {
      bVar1 = 1;
      goto LAB_0080db65;
    }
    puVar7 = (undefined4 *)puVar7[1];
  } while( true );
}



undefined4 FUN_0080dc40(undefined4 *param_1)

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
    if (iVar6 == 6) goto LAB_0080dd6b;
    FUN_00708560(&param_1,4);
    puVar1 = param_1;
    if (param_1 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(param_1 + 1);
      if ((LVar7 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  iVar6 = FUN_00401f00(0x170);
  uStack_4 = 0;
  if (iVar6 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_008823f0();
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
LAB_0080dd6b:
      *unaff_FS_OFFSET = local_c;
      return 1;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_0080df80(void)

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
  
  puStack_8 = &LAB_009d0f34;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9443c;
  local_4 = 3;
  piVar5 = in_ECX + 0x1f;
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
  piVar5 = in_ECX + 0x23;
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
  if (in_ECX[0x25] != 0) {
    piVar5 = (int *)(in_ECX[0x25] + 0x60);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      FUN_007604d0(uVar2);
    }
  }
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x23,4,2,FUN_007016a0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x1f,4,4,FUN_007016a0);
  local_4 = 0xffffffff;
  FUN_008012e0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0080e500(void)

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
              ("DirectronalLightDir",0x10000007,0,8,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0xa8,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("PointLightPos",0x10000007,0,9,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x98,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("LightRadius",0x10000007,0,10,1,&DAT_00a2f7ec,0x10,4,&DAT_00b465a8,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("FogParam | ShadowVolumeFatness",0x10000007,0,0xe,1,&DAT_00a2f7ec,0x10,4,
               &DAT_00b46638,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("FogColor | ShadowVolumeExtrudeDistance",0x10000007,0,0xf,1,&DAT_00a2f7ec,0x10,4,
               &DAT_00b46648,0);
    if (DAT_00b43070 != '\0') {
      (**(code **)(*(int *)*puVar1 + 0x18))
                ("Tree Dimmer",0x10000004,0,0x10,1,&DAT_00a2f7ec,4,4,&DAT_00b42ea8,0);
    }
    FUN_007f16f0(*puVar1,0x11);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0080e730(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  LONG LVar7;
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
  iVar2 = *(int *)(in_ECX + 0x94);
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
    *(int *)(in_ECX + 0x94) = iVar2;
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
  FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x94) + 0x14),local_14);
  iVar2 = *(int *)(in_ECX + 0x94);
  puVar3 = *(undefined4 **)(in_ECX + 0x7c);
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
  puVar3 = *(undefined4 **)(in_ECX + 0x8c);
  iVar2 = *(int *)(in_ECX + 0x94);
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
  local_4 = 0xffffffff;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0)) {
    FUN_00772560();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0080e8c0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0f6e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00802540(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a9443c;
  _eh_vector_constructor_iterator_(in_ECX + 0x1f,4,4,FUN_007c88a0,FUN_007016a0);
  local_4 = CONCAT31(local_4._1_3_,1);
  _eh_vector_constructor_iterator_(in_ECX + 0x23,4,2,FUN_007c88a0,FUN_007016a0);
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0080e980(byte param_1)

{
  FUN_0080df80();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0080e9a0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  byte bVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  undefined4 uVar11;
  int iVar12;
  int *in_ECX;
  float *unaff_FS_OFFSET;
  bool bVar13;
  float10 fVar14;
  undefined4 uVar15;
  float fStack_1c;
  float local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d1108;
  local_c = *unaff_FS_OFFSET;
  uVar8 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (float)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar8);
  (**(code **)(*(int *)in_ECX[6] + 8))(*(undefined4 *)(param_4 + 8));
  (**(code **)(*(int *)in_ECX[6] + 0x20))(*(undefined4 *)(param_4 + 0x1c));
  (**(code **)(*(int *)in_ECX[6] + 0x28))(*(undefined4 *)(param_4 + 0x2c));
  (**(code **)(*(int *)in_ECX[6] + 0x24))(*(undefined4 *)(param_4 + 0x28));
  iVar9 = *(int *)(param_4 + 0xc);
  bVar6 = false;
  if (iVar9 != 0) {
    fVar2 = *(float *)(iVar9 + 0x2c);
    fVar3 = *(float *)(iVar9 + 0x30);
    local_c = *(float *)((int)local_c + 0x88) - DAT_00b46658;
    fVar14 = (float10)FUN_00982c30();
    if ((fVar2 < (float)fVar14) || (fVar2 < *(float *)(param_3 + 0xc) + (float)fVar14)) {
      _DAT_00b46648 = *(undefined4 *)(iVar9 + 0x20);
      _DAT_00b4664c = *(undefined4 *)(iVar9 + 0x24);
      _DAT_00b46650 = *(undefined4 *)(iVar9 + 0x28);
      _DAT_00b4663c = fVar3 - fVar2;
      bVar6 = true;
      _DAT_00b46640 = 0;
      _DAT_00b46644 = 0;
      _DAT_00b46654 = 0;
      _DAT_00b46638 = fVar3;
    }
  }
  if (DAT_00b42e86 != '\0') {
    FUN_007ecae0(0,0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  }
  piVar4 = *(int **)(param_4 + 0x18);
  if (piVar4 == (int *)0x0) {
    bVar13 = false;
  }
  else {
    iVar9 = (**(code **)(*piVar4 + 0x54))();
    bVar13 = iVar9 == 8;
  }
  piVar1 = DAT_00b43104;
  if (DAT_00b43104 == (int *)0x0) {
    uVar8 = 0;
  }
  else {
    for (puVar10 = (undefined *)(**(code **)(*DAT_00b43104 + 4))(); puVar10 != (undefined *)0x0;
        puVar10 = *(undefined **)(puVar10 + 4)) {
      if (puVar10 == &DAT_00b42168) {
        bVar5 = 1;
        goto LAB_0080ec22;
      }
    }
    bVar5 = 0;
LAB_0080ec22:
    uVar8 = -(uint)bVar5 & (uint)piVar1;
  }
  if (((int *)(-(uint)bVar13 & (uint)piVar4) == (int *)0x0) || (uVar8 == 0)) goto LAB_0080edf5;
  iVar9 = **(int **)(in_ECX[0x25] + 0x24);
  piVar1 = in_ECX + 0x25;
  if (iVar9 != 0) {
    *(int *)(iVar9 + 0x5c) = *(int *)(iVar9 + 0x5c) + 1;
  }
  uVar11 = (**(code **)(*(int *)(-(uint)bVar13 & (uint)piVar4) + 0x78))();
  FUN_0076c910(uVar11);
  sVar7 = FUN_007ed5d0();
  if (sVar7 == 0) {
    if (bVar6) {
      FUN_007aecb0(in_ECX[0x20]);
      iVar12 = in_ECX[0x24];
    }
    else {
      iVar12 = in_ECX[0x1f];
LAB_0080ecbe:
      FUN_007aecb0(iVar12);
      iVar12 = in_ECX[0x23];
    }
  }
  else {
    if (!bVar6) {
      iVar12 = in_ECX[0x21];
      goto LAB_0080ecbe;
    }
    FUN_007aecb0(in_ECX[0x22]);
    iVar12 = in_ECX[0x24];
  }
  FUN_007aec60(iVar12);
  iVar12 = *piVar1;
  if (DAT_00b42eac == 4) {
    if (*(int *)(iVar12 + 0x30) == 0) {
      uVar11 = FUN_00772df0();
      *(undefined4 *)(iVar12 + 0x30) = uVar11;
    }
    FUN_00772cd0(0x34,1,0);
    iVar12 = *piVar1;
    if (*(int *)(iVar12 + 0x30) == 0) {
      uVar11 = FUN_00772df0();
      *(undefined4 *)(iVar12 + 0x30) = uVar11;
    }
    FUN_00772cd0(0x38,8,0);
    iVar12 = *piVar1;
    if (*(int *)(iVar12 + 0x30) == 0) {
      uVar11 = FUN_00772df0();
      *(undefined4 *)(iVar12 + 0x30) = uVar11;
    }
    FUN_00772cd0(0x37,7,0);
    iVar12 = *piVar1;
    if (*(int *)(iVar12 + 0x30) == 0) {
      uVar11 = FUN_00772df0();
      *(undefined4 *)(iVar12 + 0x30) = uVar11;
    }
    FUN_00772cd0(0x35,1,0);
    iVar12 = *piVar1;
    if (*(int *)(iVar12 + 0x30) == 0) {
      uVar11 = FUN_00772df0();
      *(undefined4 *)(iVar12 + 0x30) = uVar11;
    }
    uVar15 = 1;
    uVar11 = 0x36;
  }
  else {
    if (*(int *)(iVar12 + 0x30) == 0) {
      uVar11 = FUN_00772df0();
      *(undefined4 *)(iVar12 + 0x30) = uVar11;
    }
    uVar15 = 0;
    uVar11 = 0x34;
  }
  FUN_00772cd0(uVar11,uVar15,0);
  iVar12 = *piVar1;
  if (*(int *)(iVar12 + 0x30) == 0) {
    uVar11 = FUN_00772df0();
    *(undefined4 *)(iVar12 + 0x30) = uVar11;
  }
  FUN_00772cd0(0xa8,7,0);
  iVar12 = *piVar1;
  if (*(int *)(iVar12 + 0x30) == 0) {
    uVar11 = FUN_00772df0();
    *(undefined4 *)(iVar12 + 0x30) = uVar11;
  }
  FUN_00772cd0(0x1c,0,0);
  FUN_0076ce40(in_ECX[0xe],piVar1);
  in_ECX[0xe] = in_ECX[0xe] + 1;
  if (iVar9 != 0) {
    piVar4 = (int *)(iVar9 + 0x5c);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      FUN_00772560();
    }
  }
LAB_0080edf5:
  *unaff_FS_OFFSET = fStack_1c;
  return 0;
}



int * FUN_0080ee10(void)

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
  puVar4 = (undefined4 *)FUN_00771090(DAT_00b43104,5,1);
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
  (**(code **)(*(int *)*piVar8 + 0x50))(2,5,4,3,0);
  (**(code **)(*(int *)*piVar8 + 0x50))(3,7,5,1,0);
  (**(code **)(*(int *)*piVar8 + 0x4c))(0,4,8,0x80000000,3,2,0,0);
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
    piVar7 = (int *)FUN_0080e8c0();
  }
  (**(code **)(*piVar7 + 0x84))();
  (**(code **)(*piVar7 + 0xa8))();
  FUN_0080e730();
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



void FUN_0080eff0(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa8))();
  (**(code **)(*in_ECX + 0xc4))();
  if (1 < DAT_00b42f48) {
                    /* WARNING: Could not recover jumptable at 0x0080f01d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_ECX + 200))();
    return;
  }
  return;
}



void FUN_0080f070(void)

{
  int *piVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d0fc8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9459c;
  local_4 = 2;
  piVar5 = in_ECX + 0x27;
  iVar4 = 0x1c;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 10;
  piVar5 = in_ECX + 0x43;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = &DAT_00b47790;
  do {
    if (*piVar5 != 0) {
      piVar1 = (int *)(*piVar5 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
  } while ((int)piVar5 < 0xb47800);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x43,4,10,FUN_007016a0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x27,4,0x1c,FUN_007016a0);
  local_4 = 0xffffffff;
  FUN_007c8b30();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0080f1c0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  
  FUN_008025f0();
  piVar5 = (int *)(in_ECX + 0x9c);
  iVar4 = 0x1c;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = (int *)(in_ECX + 0x10c);
  iVar4 = 10;
  do {
    puVar2 = (undefined4 *)*piVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = &DAT_00b47790;
  do {
    if (*piVar5 != 0) {
      piVar1 = (int *)(*piVar5 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
  } while ((int)piVar5 < 0xb47800);
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0080f280(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 uVar12;
  undefined4 uVar13;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d0ff8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffb0;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar6);
  iVar4 = DAT_00b42e90;
  piVar2 = *(int **)(param_4 + 0x18);
  uStack_4 = 0;
  uVar12 = 0;
  if (((piVar2 == (int *)0x0) || (iVar7 = (**(code **)(*piVar2 + 0x54))(), iVar7 < 1)) ||
     (iVar7 = (**(code **)(*piVar2 + 0x54))(), 10 < iVar7)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  piVar8 = (int *)(-(uint)bVar1 & (uint)piVar2);
  uVar6 = 0;
  if (piVar8 != (int *)0x0) {
    if (((piVar2 == (int *)0x0) || (iVar7 = (**(code **)(*piVar2 + 0x54))(), iVar7 < 5)) ||
       (iVar7 = (**(code **)(*piVar2 + 0x54))(), 10 < iVar7)) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
    }
    uVar6 = -(uint)bVar1 & (uint)piVar2;
  }
  if (piVar2 == (int *)0x0) {
    if (DAT_00b42e8c != (code *)0x0) {
      (*DAT_00b42e8c)("Attempting to render geometry with a shader, but no shader property",0);
    }
    uVar9 = 0;
    goto LAB_0080fa21;
  }
  bVar1 = *(byte *)(piVar2 + 7);
  if ((*(int *)(param_4 + 8) == 0) || ((*(byte *)(*(int *)(param_4 + 8) + 0x18) & 1) == 0)) {
    FUN_007e2430(0x3f800000);
  }
  else {
    DAT_00b464a4 = piVar2[8];
    uVar12 = 1;
  }
  if (piVar8 != (int *)0x0) {
    if (DAT_00b42eac == 1) {
      uVar5 = FUN_007ed5d0();
      uVar10 = (uint)uVar5;
      if (10 < uVar5) {
        uVar10 = 10;
      }
      puVar11 = (undefined4 *)(&DAT_00b2dd50 + uVar10 * 0x10);
    }
    else {
      if (DAT_00b42eac != 2) goto LAB_0080f4be;
      uVar5 = (**(code **)(*piVar8 + 0x60))(param_1);
      uVar10 = (uint)uVar5;
      if (0x10 < uVar5) {
        uVar10 = 0x10;
      }
      puVar11 = &DAT_00b2de00 + uVar10 * 4;
    }
    FUN_007ecae0(0,*puVar11,puVar11[1],puVar11[2],puVar11[3]);
    FUN_007ecae0(0x19,DAT_00b25ad0,DAT_00b25ad4,DAT_00b25ad8,DAT_00b25adc);
  }
LAB_0080f4be:
  if ((bVar1 & 2) == 0) {
    iVar7 = in_ECX[0x1f];
  }
  else {
    iVar7 = in_ECX[0x20];
  }
  FUN_0075fa90(iVar7);
  if (iVar4 < 0x11c) {
    if (iVar4 != 0x11b) {
      switch(iVar4) {
      case 0x18:
        FUN_0085bf40(param_1,param_2,param_4,uVar6,0);
        iVar7 = 0;
        break;
      default:
        goto switchD_0080f503_caseD_19;
      case 0x2f:
        FUN_0085bfd0(param_1,param_2,param_4,uVar6,0);
        iVar7 = 1;
        break;
      case 0x30:
        FUN_0085c110(param_1,param_2,param_4,uVar6,0);
        iVar7 = 2;
        break;
      case 0x33:
        FUN_0085c250(param_1,param_2,param_4,uVar6,0);
        iVar7 = 3;
        break;
      case 0x54:
        FUN_0085d380(param_1,param_2,param_4,uVar6,0);
        iVar7 = 10;
        break;
      case 0x5f:
        FUN_0085d500(param_1,param_2,param_4,uVar6,0);
        iVar7 = 0xb;
        break;
      case 0x6a:
        FUN_0085d720(param_1,param_2,param_4,uVar6,0);
        iVar7 = 0xc;
        break;
      case 0x75:
        FUN_0085d8a0(param_1,param_2,param_4,uVar6,0);
        iVar7 = 0xd;
        break;
      case 0x82:
        FUN_0085c870(param_1,param_2,param_4,uVar6,0);
        iVar7 = 0xe;
        break;
      case 0x90:
        FUN_0085ca00(param_1,param_2,param_4,uVar6,0);
        iVar7 = 0xf;
        break;
      case 0x9d:
        FUN_0085cc20(param_1,param_2,param_4,uVar6,0);
        iVar7 = 0x10;
        break;
      case 0xaa:
        FUN_0085cdb0(param_1,param_2,param_4,uVar6,0);
        iVar7 = 0x11;
        break;
      case 0xb8:
        FUN_0085cfd0(param_1,param_2,param_4,uVar6,0);
        iVar7 = 0x12;
        break;
      case 0xc5:
        FUN_0085d160(param_1,param_2,param_4,uVar6,0);
        iVar7 = 0x13;
        break;
      case 0xd2:
        FUN_0085dac0(param_1,param_2,param_4,uVar6,0);
        iVar7 = 0x14;
        break;
      case 0xdf:
        FUN_0085dc50(param_1,param_2,param_4,uVar6,0);
        iVar7 = 0x15;
        break;
      case 0xe6:
        FUN_0085c370(param_1,param_2,param_4,uVar6,0);
        iVar7 = 4;
        break;
      case 0xe7:
        FUN_0085c450(param_1,param_2,param_4,uVar6,0);
        iVar7 = 5;
        break;
      case 0xee:
        FUN_0085de70(param_1,param_2,param_4,uVar6,0);
        iVar7 = 0x16;
        break;
      case 0xfc:
        FUN_0085df60(param_1,param_2,param_4,uVar6,0);
        iVar7 = 0x17;
        break;
      case 0x10b:
        FUN_0085c530(param_1,param_2,param_4,uVar6,0);
        iVar7 = 6;
        break;
      case 0x113:
        FUN_0085c610(param_1,param_2,param_4,uVar6,0);
        iVar7 = 7;
        break;
      case 0x114:
        FUN_0085c6f0(param_1,param_2,param_4,uVar6,0);
        iVar7 = 8;
      }
      goto LAB_0080f808;
    }
    FUN_0085e050(param_1,param_2,param_4,uVar6,0);
    iVar7 = 0x18;
    goto LAB_0080f818;
  }
  switch(iVar4) {
  case 0x122:
    FUN_0085e160(param_1,param_2,param_4,uVar6,0);
    iVar7 = 0x19;
    break;
  default:
switchD_0080f503_caseD_19:
    uVar9 = FUN_007c9f30(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    goto LAB_0080fa21;
  case 0x129:
    FUN_0085e300(param_1,param_2,param_4,uVar6,0);
    goto LAB_0080f803;
  case 0x17a:
    FUN_0085e410(param_1,param_2,param_4,uVar6,0);
LAB_0080f803:
    iVar7 = 0x1a;
    break;
  case 0x194:
    FUN_0085c7d0(param_1,param_2,param_4,uVar6,0);
    iVar7 = 9;
  }
LAB_0080f808:
  if ((-1 < iVar4) && (iVar4 < 0x1a3)) {
LAB_0080f818:
    FUN_0076c730(0x1c,0,0);
    if (iVar4 - 0x10fU < 0x1b) {
      uVar9 = 0xf;
    }
    else if ((((iVar4 == 0x19e) || (iVar4 == 0x19f)) || (iVar4 == 10)) || (iVar4 == 0xb)) {
      uVar9 = 8;
    }
    else if (iVar4 == 0) {
      uVar9 = 0;
    }
    else if (iVar4 == 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = 7;
    }
    FUN_0076c730(0xa8,uVar9,0);
  }
  iVar3 = (&DAT_00b47790)[iVar7];
  piVar2 = &DAT_00b47790 + iVar7;
  if (DAT_00b42eac == 4) {
    if (*(int *)(iVar3 + 0x30) == 0) {
      uVar9 = FUN_00772df0();
      *(undefined4 *)(iVar3 + 0x30) = uVar9;
    }
    FUN_00772cd0(0x34,1,0);
    iVar7 = *piVar2;
    if (*(int *)(iVar7 + 0x30) == 0) {
      uVar9 = FUN_00772df0();
      *(undefined4 *)(iVar7 + 0x30) = uVar9;
    }
    FUN_00772cd0(0x38,8,0);
    iVar7 = *piVar2;
    if (*(int *)(iVar7 + 0x30) == 0) {
      uVar9 = FUN_00772df0();
      *(undefined4 *)(iVar7 + 0x30) = uVar9;
    }
    FUN_00772cd0(0x37,7,0);
    iVar7 = *piVar2;
    if (*(int *)(iVar7 + 0x30) == 0) {
      uVar9 = FUN_00772df0();
      *(undefined4 *)(iVar7 + 0x30) = uVar9;
    }
    FUN_00772cd0(0x35,1,0);
    iVar7 = *piVar2;
    if (*(int *)(iVar7 + 0x30) == 0) {
      uVar9 = FUN_00772df0();
      *(undefined4 *)(iVar7 + 0x30) = uVar9;
    }
    uVar13 = 1;
    uVar9 = 0x36;
  }
  else {
    if (*(int *)(iVar3 + 0x30) == 0) {
      uVar9 = FUN_00772df0();
      *(undefined4 *)(iVar3 + 0x30) = uVar9;
    }
    uVar13 = 0;
    uVar9 = 0x34;
  }
  FUN_00772cd0(uVar9,uVar13,0);
  if (iVar4 - 0x33U < 0x162) {
    if ((DAT_00b42eb8 == 0) || (*(char *)(DAT_00b42eb8 + 6) == '\0')) {
      FUN_0076c730(0x1b,1,0);
      FUN_0076c730(0x17,3,0);
      uVar12 = 0;
      uVar9 = 0xe;
    }
    else {
      FUN_0076c730(0x1b,uVar12,0);
      FUN_0076c730(0x17,4,0);
      uVar12 = 1;
      uVar9 = 0xe;
    }
LAB_0080f9dd:
    FUN_0076c730(uVar9,uVar12,0);
  }
  else if (iVar4 - 2U < 0xdd) {
    uVar9 = 0x1b;
    goto LAB_0080f9dd;
  }
  if ((DAT_00b42eb8 != 0) && (*(char *)(DAT_00b42eb8 + 7) == '\0')) {
    _DAT_00b4668c = 0;
  }
  uVar9 = 0;
LAB_0080fa21:
  *unaff_FS_OFFSET = local_c;
  return uVar9;
}



void FUN_0080fc20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar1 = FUN_007b4290(1);
  uVar2 = *(undefined4 *)(in_ECX + 0x34);
  iVar1 = *(int *)(iVar1 + 4);
  uVar9 = 1;
  uVar7 = param_7;
  uVar8 = param_8;
  (**(code **)(**(int **)(iVar1 + 0x2c) + 0x40))
            (*(undefined4 *)(*(int *)(in_ECX + 0x3c) + 0x44),param_1,param_2,param_3,param_4,param_5
             ,param_6,param_7,param_8,uVar2,1);
  uVar6 = *(undefined4 *)(in_ECX + 0x34);
  uVar3 = uVar9;
  uVar4 = param_7;
  uVar5 = param_8;
  (**(code **)(**(int **)(iVar1 + 0x30) + 0x40))
            (*(undefined4 *)(*(int *)(in_ECX + 0x3c) + 0x58),param_5,param_6,uVar7,uVar8,uVar2,uVar9
             ,param_7,param_8,uVar6,1);
  FUN_0077a1f0(uVar2,uVar3,uVar4,uVar5,uVar6,uVar9,param_7,param_8);
  return;
}


