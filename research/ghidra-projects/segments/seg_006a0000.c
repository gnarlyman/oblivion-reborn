
undefined4 FUN_006a0300(void)

{
  int iVar1;
  int in_ECX;
  
  if ((((*(int *)(in_ECX + 0x18) == 0) && (*(int *)(in_ECX + 0x1c) != 0)) &&
      (*(int *)(in_ECX + 0x34) != 0)) && (*(char *)(in_ECX + 0x28) == '\0')) {
    iVar1 = FUN_0041b8b0();
    if (*(int *)(in_ECX + 0x34) != iVar1) {
      return 1;
    }
  }
  return 0;
}



void FUN_006a0350(void)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  float local_8;
  
  if (((*(int *)(in_ECX + 0x18) == 0) || (*(float *)(*(int *)(in_ECX + 0x18) + 0x18) < 100.0)) ||
     (*(int *)(in_ECX + 0x2c) != 0x574e5352)) {
    iVar2 = *(int *)(in_ECX + 0x48);
    local_8 = 0.0;
    if (iVar2 != 0) {
      local_8 = *(float *)(iVar2 + 0x48);
      if (local_8 < *(float *)(iVar2 + 0x38)) {
        local_8 = *(float *)(iVar2 + 0x38);
      }
    }
    if (*(char *)(in_ECX + 0x28) != '\0') {
      local_8 = 0.0;
      *(undefined4 *)(iVar2 + 0x38) = 0;
      *(undefined4 *)(*(int *)(in_ECX + 0x48) + 0x48) = 0;
    }
    iVar2 = *(int *)(in_ECX + 0x34);
    if (*(float *)(iVar2 + 0x6c) <= local_8) {
      fVar1 = *(float *)(iVar2 + 0x2c);
    }
    else {
      fVar1 = (local_8 / *(float *)(iVar2 + 0x6c)) * *(float *)(iVar2 + 0x2c);
    }
    *(float *)(in_ECX + 0x38) = fVar1;
    if (*(int *)(in_ECX + 0x3c) != 0) {
      FUN_007e4700(*(undefined4 *)(in_ECX + 0x38));
    }
  }
  return;
}



void FUN_006a05b0(void)

{
  int *in_ECX;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *(undefined4 *)(in_ECX[7] + 0xc);
  FUN_0045f7a0(&local_8,4);
  local_4 = *(undefined4 *)(in_ECX[0xd] + 0xc);
  FUN_0045f7a0(&local_4,4);
  (**(code **)(*in_ECX + 0x78))(0,in_ECX[7]);
  return;
}



bool FUN_006a0610(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  undefined4 local_8;
  undefined4 local_4;
  
  bVar1 = true;
  FUN_0045ba00(&local_8,4);
  uVar2 = FUN_0046b250(local_8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
  iVar3 = FUN_009832e6(uVar2);
  in_ECX[7] = iVar3;
  if (iVar3 != 0) {
    iVar3 = FUN_006ecc80();
    if (iVar3 != 0) {
      iVar3 = FUN_006ecc80();
      if (*(char *)(iVar3 + 0x26) == '\x06') goto LAB_006a0672;
    }
  }
  bVar1 = false;
LAB_006a0672:
  FUN_0045ba00(&local_4,4);
  uVar2 = FUN_0046b250(local_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b034e0,0);
  iVar3 = FUN_009832e6(uVar2);
  if (iVar3 == 0) {
    bVar1 = false;
  }
  (**(code **)(*in_ECX + 0x7c))(0,in_ECX[7]);
  if (bVar1) {
    (**(code **)(*in_ECX + 0x80))(0,in_ECX[7]);
    (**(code **)(*in_ECX + 0x84))(0,in_ECX[7],iVar3);
  }
  return bVar1;
}



void FUN_006a0700(void)

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
  puStack_8 = &LAB_009c5ef9;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0069d880(uVar2);
  *in_ECX = &PTR_FUN_00a764b4;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0xd] = 0;
  puVar1 = (undefined4 *)in_ECX[0x12];
  local_4 = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x12] = 0;
  }
  in_ECX[0xe] = 0;
  puVar1 = (undefined4 *)in_ECX[0xf];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0xf] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x10];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x10] = 0;
  }
  *(undefined1 *)(in_ECX + 10) = 0;
  in_ECX[0xb] = 0xffffffff;
  in_ECX[0xc] = 0;
  *(undefined1 *)(in_ECX + 0x11) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006a0800(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c5ef9;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0069d8c0(param_1,param_2);
  *in_ECX = &PTR_FUN_00a764b4;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0xd] = 0;
  local_4 = 3;
  iVar4 = FUN_00419b30(0);
  uVar1 = *(undefined4 *)(iVar4 + 0x78);
  in_ECX[0xe] = 0;
  in_ECX[0xd] = uVar1;
  puVar2 = (undefined4 *)in_ECX[0x12];
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 1);
    if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1,uVar3);
    }
    in_ECX[0x12] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0xf];
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 1);
    if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0xf] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x10];
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 1);
    if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x10] = 0;
  }
  *(undefined1 *)(in_ECX + 10) = 0;
  in_ECX[0xb] = *(undefined4 *)(*(int *)(*(int *)(in_ECX[6] + 0xc) + 0x1c) + 0x98);
  in_ECX[0xc] = 0;
  if (in_ECX[7] == DAT_00b333c4) {
    iVar4 = FUN_00660110(0);
    if (iVar4 != 0) {
      iVar4 = FUN_00660110(0);
      if ((*(byte *)(iVar4 + 0x18) & 1) == 0) {
        *(undefined1 *)(in_ECX + 0x11) = 1;
        goto LAB_006a092a;
      }
    }
    *(undefined1 *)(in_ECX + 0x11) = 0;
  }
  else {
    *(undefined1 *)(in_ECX + 0x11) = 0;
  }
LAB_006a092a:
  if (in_ECX[0xb] == 0x52414944) {
    iVar4 = FUN_009832e6(in_ECX[6],0,&PTR_PTR_00b14914,&PTR_PTR_00b15c00,0);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x38) != 0)) {
      in_ECX[0xc] = *(undefined4 *)(*(int *)(iVar4 + 0x38) + 8);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006a0980(undefined4 param_1,undefined4 param_2,float param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined1 uVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c5ef9;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = 0;
  FUN_0069d8c0(param_1,0);
  *in_ECX = &PTR_FUN_00a764b4;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xd] = param_2;
  puVar1 = (undefined4 *)in_ECX[0x12];
  local_4 = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[0x12] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0xf];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0xf] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x10];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x10] = 0;
  }
  *(undefined1 *)(in_ECX + 10) = 0;
  in_ECX[0xb] = 0xffffffff;
  in_ECX[0xc] = 0;
  if (in_ECX[7] == DAT_00b333c4) {
    iVar4 = FUN_00660110(0);
    if (iVar4 != 0) {
      iVar4 = FUN_00660110(0);
      if ((*(byte *)(iVar4 + 0x18) & 1) == 0) {
        uVar5 = 1;
      }
    }
  }
  *(undefined1 *)(in_ECX + 0x11) = uVar5;
  if (param_3 < 0.0) {
    param_3 = 3.4028235e+38;
  }
  in_ECX[2] = param_3;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006a0ac0(void)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  LONG LVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_118 [4];
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c5f55;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)local_118;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffed8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a764b4;
  local_4 = 3;
  if (in_ECX[0x12] != 0) {
    piVar3 = (int *)in_ECX[7];
    if (piVar3 == DAT_00b333c4) {
      iVar6 = FUN_00660110(1);
      if (iVar6 != 0) {
        FUN_004adad0(iVar6,in_ECX[0x12]);
      }
      iVar6 = FUN_00660110(0);
    }
    else {
      if (piVar3 == (int *)0x0) goto LAB_006a0b6f;
      iVar6 = (**(code **)(*piVar3 + 0x154))(uVar5);
    }
    if (iVar6 != 0) {
      FUN_004adad0(iVar6,in_ECX[0x12]);
    }
  }
LAB_006a0b6f:
  if (in_ECX[0x10] != 0) {
    FUN_004ac740(in_ECX[0x10],in_ECX[0xf]);
  }
  puVar4 = (undefined4 *)in_ECX[0xf];
  if (puVar4 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(puVar4 + 1);
    if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    in_ECX[0xf] = 0;
  }
  if (in_ECX[0x10] != 0) {
    FUN_007074b0(0);
  }
  puVar4 = (undefined4 *)in_ECX[0x10];
  if (puVar4 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(puVar4 + 1);
    if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    in_ECX[0x10] = 0;
  }
  puVar4 = (undefined4 *)in_ECX[0x12];
  if (puVar4 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(puVar4 + 1);
    if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    in_ECX[0x12] = 0;
  }
  if (in_ECX[0xd] != 0) {
    if (((in_ECX[7] != 0) && (*(int *)(DAT_00b33398 + 0x24) != 0)) &&
       ((iVar6 = *(int *)(in_ECX[0xd] + 0xc), iVar6 == 0x852fe || (iVar6 == 0x84a51)))) {
      FUN_006ac420(in_ECX[7],0x3f800000);
    }
    puVar8 = *(undefined1 **)(in_ECX[0xd] + 0x108);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_00a2f7ec;
    }
    _sprintf(acStack_114,"%s\\%s","Textures",puVar8);
    FUN_00440420(acStack_114,0);
    iVar6 = in_ECX[0xd];
    if (*(ushort *)(iVar6 + 0x100) == 0xffff) {
      pcVar9 = *(char **)(iVar6 + 0xfc);
      pcVar1 = pcVar9 + 1;
      do {
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      uVar5 = (int)pcVar9 - (int)pcVar1;
    }
    else {
      uVar5 = (uint)*(ushort *)(iVar6 + 0x100);
    }
    if (uVar5 != 0) {
      puVar8 = *(undefined1 **)(iVar6 + 0xfc);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_00a2f7ec;
      }
      _sprintf(acStack_114,"%s\\%s","Textures",puVar8);
      FUN_00440420(acStack_114,0);
    }
  }
  puVar4 = (undefined4 *)in_ECX[0x12];
  local_4._0_1_ = 2;
  if (puVar4 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(puVar4 + 1);
    if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
  }
  puVar4 = (undefined4 *)in_ECX[0x10];
  local_4._0_1_ = 1;
  if (puVar4 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(puVar4 + 1);
    if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
  }
  puVar4 = (undefined4 *)in_ECX[0xf];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar4 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(puVar4 + 1);
    if ((LVar7 == 0) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0069dc50();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006a0d90(undefined1 *param_1,undefined1 *param_2,float *param_3,int *param_4,int *param_5)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  float10 fVar10;
  undefined1 auStack_c [12];
  
  iVar5 = *(int *)(in_ECX + 0x2c);
  iVar9 = 0;
  bVar2 = false;
  piVar4 = (int *)FUN_009832e6(*(undefined4 *)(in_ECX + 0x1c),0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,
                               0);
  iVar8 = 0;
  if (piVar4 != (int *)0x0) {
    if (piVar4 == DAT_00b333c4) {
      if ((DAT_00b333c4[0x176] == 0) || (DAT_00b333c4[0x178] != in_ECX)) {
        iVar8 = FUN_006600d0(*(char *)(in_ECX + 0x44) == '\0');
      }
      else {
        bVar2 = true;
      }
    }
    else {
      iVar8 = (**(code **)(*piVar4 + 0x168))();
    }
  }
  if ((*(char *)(in_ECX + 0x28) != '\0') || (iVar5 == 0x45574944)) {
    if ((*(int **)(in_ECX + 0x1c) == (int *)0x0) ||
       ((((cVar3 = (**(code **)(**(int **)(in_ECX + 0x1c) + 400))(), cVar3 == '\0' ||
          (piVar4 = *(int **)(*(int *)(in_ECX + 0x1c) + 0x58), piVar4 == (int *)0x0)) ||
         (iVar7 = (**(code **)(*piVar4 + 0xec))(1), iVar7 == 0)) ||
        ((iVar5 != 0x45574944 && (cVar3 = (**(code **)(*piVar4 + 0x13c))(), cVar3 != '\0'))))))
    goto LAB_006a1098;
    if (bVar2) {
      piVar1 = (int *)DAT_00b333c4[0x176];
      cVar3 = (**(code **)(*piVar4 + 0x138))();
      if (cVar3 == '\0') {
        iVar9 = (**(code **)(*piVar1 + 0x58))("Weapon");
      }
      else {
        iVar9 = (**(code **)(*piVar1 + 0x58))("Torch");
      }
    }
    else {
      cVar3 = (**(code **)(*piVar4 + 0x304))();
      if (cVar3 == '\0') {
        iVar5 = (**(code **)(*piVar4 + 0x124))(iVar8);
        if (iVar5 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_00405790(0);
        }
      }
      else {
        iVar9 = (**(code **)(*piVar4 + 0x118))();
      }
    }
    iVar5 = (**(code **)(*piVar4 + 0xec))(1);
    iVar5 = FUN_009832e6(*(undefined4 *)(iVar5 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0);
    if (iVar9 == 0) goto LAB_006a1098;
  }
  else {
    if (iVar5 == 0x52414944) {
      iVar5 = FUN_009832e6(*(undefined4 *)(in_ECX + 0x18),0,&PTR_PTR_00b14914,&PTR_PTR_00b15c00,0);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x38) != 0)) {
        *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(*(int *)(iVar5 + 0x38) + 8);
      }
      if ((((*(int **)(in_ECX + 0x1c) != (int *)0x0) &&
           (cVar3 = (**(code **)(**(int **)(in_ECX + 0x1c) + 400))(), cVar3 != '\0')) &&
          (*(int *)(in_ECX + 0x30) != 0)) &&
         ((iVar8 != 0 && (iVar5 = FUN_00477e90(*(int *)(in_ECX + 0x30)), iVar5 != 0)))) {
        iVar5 = *(int *)(iVar5 + 8);
        *param_4 = iVar5;
        *param_5 = iVar5;
        return;
      }
      goto LAB_006a1098;
    }
    if (*(int **)(in_ECX + 0x1c) == (int *)0x0) goto LAB_006a1098;
    iVar9 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x154))();
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x1c) + 400))();
    if (cVar3 != '\0') {
      if (*(int **)(in_ECX + 0x1c) == DAT_00b333c4) {
        iVar9 = FUN_00660110(*(char *)(in_ECX + 0x44) == '\0');
      }
      *param_1 = 1;
      *param_4 = iVar9;
      *param_5 = iVar9;
      return;
    }
    uVar6 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x170))
                      (0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0);
    iVar5 = FUN_009832e6(uVar6);
  }
  if ((iVar5 != 0) && ((*(char *)(iVar5 + 0x90) == '\x01' || (*(char *)(iVar5 + 0x90) == '\0')))) {
    *param_2 = 1;
    if (*(float *)(iVar9 + 0x2c) <= 0.0) {
      FUN_00707370(0,0);
    }
    FUN_004121a0(auStack_c,iVar9 + 0x88);
    fVar10 = (float10)FUN_00404c90();
    *param_3 = (float)(fVar10 + (float10)*(float *)(iVar9 + 0x2c));
  }
LAB_006a1098:
  *param_4 = iVar9;
  *param_5 = iVar9;
  return;
}



void FUN_006a1590(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  undefined4 uVar5;
  
  if ((((*(int *)(in_ECX + 0x1c) != 0) && (*(int *)(in_ECX + 0x34) != 0)) &&
      ((iVar3 = *(int *)(*(int *)(in_ECX + 0x34) + 0xc), iVar3 == 0x852fe || (iVar3 == 0x84a51))))
     && (*(int *)(DAT_00b33398 + 0x24) != 0)) {
    FUN_006ac420(*(int *)(in_ECX + 0x1c),0x3f800000);
  }
  if (*(int *)(in_ECX + 0x48) == 0) goto LAB_006a1630;
  piVar1 = *(int **)(in_ECX + 0x1c);
  if (piVar1 == DAT_00b333c4) {
    iVar3 = FUN_00660110(1);
    if (iVar3 != 0) {
      FUN_004adad0(iVar3,*(undefined4 *)(in_ECX + 0x48));
    }
    iVar3 = FUN_00660110(0);
    if (iVar3 == 0) goto LAB_006a1630;
    uVar5 = *(undefined4 *)(in_ECX + 0x48);
  }
  else {
    if (piVar1 == (int *)0x0) goto LAB_006a1630;
    iVar3 = (**(code **)(*piVar1 + 0x154))();
    if (iVar3 == 0) goto LAB_006a1630;
    uVar5 = *(undefined4 *)(in_ECX + 0x48);
  }
  FUN_004adad0(iVar3,uVar5);
LAB_006a1630:
  if (*(int *)(in_ECX + 0x40) != 0) {
    FUN_004ac740(*(int *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x3c));
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x3c);
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(in_ECX + 0x3c) = 0;
  }
  if (*(int *)(in_ECX + 0x40) != 0) {
    FUN_007074b0(0);
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x40);
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(in_ECX + 0x40) = 0;
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x48);
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  return;
}



void FUN_006a16d0(byte param_1)

{
  FUN_006a0ac0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_006a16f0(void)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 *puVar10;
  byte bVar11;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 uStack_13c;
  char local_13b;
  char local_13a;
  char local_139;
  undefined4 uStack_138;
  int local_134;
  int local_130;
  undefined4 local_12c;
  float fStack_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c5fca;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&uStack_13c;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffeb4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = in_ECX[6];
  if (iVar5 != 0) {
    in_ECX[8] = *(int *)(iVar5 + 4);
    *(byte *)(in_ECX + 9) =
         ~(byte)(*(uint *)(*(int *)(*(int *)(iVar5 + 0xc) + 0x1c) + 0x58) >> 10) & 1;
    if ((*(uint *)(iVar5 + 0x14) >> 4 & 1) != 0) {
      in_ECX[0xe] = 0x42c80000;
    }
  }
  local_12c = 0;
  local_13a = '\0';
  local_139 = '\0';
  local_13b = '\0';
  if ((in_ECX[7] == DAT_00b333c4) && (iVar5 = FUN_00660110(0), iVar5 != 0)) {
    iVar5 = FUN_00660110(0);
    bVar11 = ~*(byte *)(iVar5 + 0x18) & 1;
    if (((float)in_ECX[8] <= 0.0) || (local_13b = '\x01', bVar11 == *(byte *)(in_ECX + 0x11))) {
      local_13b = '\0';
    }
    *(byte *)(in_ECX + 0x11) = bVar11;
  }
  local_130 = 0;
  local_134 = 0;
  FUN_006a0d90(&local_139,&local_13a,&local_12c,&local_130,&local_134);
  if (((local_130 != 0) && (local_134 != 0)) && (in_ECX[0xd] != 0)) {
    if (((*(int *)(DAT_00b33398 + 0x24) != 0) &&
        ((iVar5 = *(int *)(in_ECX[0xd] + 0xc), iVar5 == 0x852fe || (iVar5 == 0x84a51)))) &&
       (puVar6 = (undefined4 *)FUN_006ade50("AMBFireMediumLP",0x12,1), puVar6 != (undefined4 *)0x0))
    {
      puVar7 = (undefined4 *)(**(code **)(*(int *)in_ECX[7] + 0x174))(uVar4);
      uStack_120 = *puVar7;
      uStack_11c = puVar7[1];
      uStack_118 = puVar7[2];
      FUN_006b7360(uStack_120,uStack_11c,uStack_118);
      FUN_006b7280(0x3f800000);
      FUN_006b7190(1);
      FUN_006ac3e0(*puVar6,in_ECX[7]);
      FUN_006b73e0();
      FUN_00401f20(puVar6);
    }
    if ((((char)in_ECX[10] == '\0') ||
        (cVar2 = (**(code **)(*(int *)in_ECX[7] + 400))(), cVar2 == '\0')) ||
       (*(int **)(in_ECX[7] + 0x58) == (int *)0x0)) {
LAB_006a1921:
      cVar2 = FUN_004ac730(8);
      if (cVar2 != '\0') goto LAB_006a1b3d;
      if (in_ECX[0x10] == 0) {
        iStack_124 = FUN_00401f00(0xdc);
        uStack_4 = 0;
        if (iStack_124 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_0070b780(0);
        }
        uStack_4 = 0xffffffff;
        FUN_0075fa90(uVar8);
        FUN_006ff420("ParticleShader Geometry");
        puVar6 = &DAT_00b26dc4;
        puVar7 = (undefined4 *)(in_ECX[0x10] + 0x30);
        for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      piVar1 = in_ECX + 0xf;
      if (in_ECX[0xf] == 0) {
        uStack_138 = 0;
        iVar5 = in_ECX[0xd];
        uStack_4 = 1;
        iVar9 = FUN_00449190();
        if (iVar9 != 0) {
          puVar10 = *(undefined1 **)(iVar5 + 0x108);
          if (puVar10 == (undefined1 *)0x0) {
            puVar10 = &DAT_00a2f7ec;
          }
          _sprintf(acStack_114,"%s\\%s","Textures",puVar10);
          uVar8 = FUN_00442890(&fStack_128,acStack_114,0,0);
          uStack_4._0_1_ = 2;
          FUN_0055e2a0(uVar8);
          uStack_4 = CONCAT31(uStack_4._1_3_,1);
          FUN_007016a0();
          uVar8 = FUN_004ad990(in_ECX[0x10],local_134,uStack_138,in_ECX[0xe]);
          FUN_0075fa90(uVar8);
        }
        uStack_4 = 0xffffffff;
        FUN_007016a0();
      }
      iVar5 = *piVar1;
      if (iVar5 != 0) {
        if (local_13a != '\0') {
          *(undefined4 *)(iVar5 + 0x70) = 2;
          *(undefined4 *)(iVar5 + 0x74) = local_12c;
        }
        if ((char)in_ECX[10] != '\0') {
          *(undefined1 *)(*piVar1 + 0x78) = 0;
        }
        if ((int *)in_ECX[7] != (int *)0x0) {
          uVar8 = (**(code **)(*(int *)in_ECX[7] + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b07ee4,0);
          iVar5 = FUN_009832e6(uVar8);
          if ((local_139 != '\0') || (iVar5 != 0)) {
            if ((in_ECX[7] == DAT_00b333c4) && ((char)in_ECX[0x11] == '\0')) {
              *(undefined4 *)(*piVar1 + 0x70) = 0;
            }
            else {
              *(undefined4 *)(*piVar1 + 0x70) = 1;
            }
          }
        }
        FUN_007e5c30(local_134);
        if (local_13b != '\0') {
          FUN_007e4800(0);
          fStack_128 = (float)in_ECX[0xe] - 0.166;
          FUN_007e51f0(fStack_128,0,1);
          FUN_007e51f0(in_ECX[0xe],0,1);
        }
      }
      (**(code **)(*in_ECX + 0x70))();
    }
    else {
      cVar2 = (**(code **)(**(int **)(in_ECX[7] + 0x58) + 0x138))();
      cVar3 = (**(code **)(**(int **)(in_ECX[7] + 0x58) + 0x304))();
      if (((cVar3 != '\0') || (*(int **)(DAT_00b333c4 + 0x5e0) == in_ECX)) && (cVar2 == '\0'))
      goto LAB_006a1921;
LAB_006a1b3d:
      if (in_ECX[0xf] != 0) {
        if (in_ECX[0x10] != 0) {
          FUN_004ac740(in_ECX[0x10],in_ECX[0xf]);
          FUN_0075fa90(0);
          if (in_ECX[0x10] != 0) {
            FUN_007074b0(0);
          }
          FUN_0075fa90(0);
        }
      }
    }
    cVar2 = FUN_004ac730(1);
    if (cVar2 == '\0') {
      if (in_ECX[0x12] == 0) {
        uStack_138 = 0;
        iVar5 = in_ECX[0xd];
        uStack_4 = 3;
        iVar9 = FUN_00449190();
        if (iVar9 != 0) {
          puVar10 = *(undefined1 **)(iVar5 + 0xfc);
          if (puVar10 == (undefined1 *)0x0) {
            puVar10 = &DAT_00a2f7ec;
          }
          _sprintf(acStack_114,"%s\\%s","Textures",puVar10);
          uVar8 = FUN_00442890(&iStack_124,acStack_114,0,0);
          uStack_4._0_1_ = 4;
          FUN_0055e2a0(uVar8);
          uStack_4 = CONCAT31(uStack_4._1_3_,3);
          FUN_007016a0();
        }
        uVar8 = FUN_004acb20(local_130,uStack_138);
        FUN_0075fa90(uVar8);
        uStack_4 = 0xffffffff;
        FUN_007016a0();
      }
      FUN_004ad9e0(local_130,in_ECX[0x12]);
    }
    if ((in_ECX[0xf] != 0) || (in_ECX[0x12] != 0)) {
      uVar8 = 1;
      goto LAB_006a1c6e;
    }
  }
  uVar8 = 0;
LAB_006a1c6e:
  *unaff_FS_OFFSET = local_c;
  return uVar8;
}



void FUN_006a1ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c6008;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0069f360(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a76594;
  in_ECX[6] = &PTR_FUN_00a7658c;
  FUN_0065b750(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006a1d50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a767bc;
  *(undefined1 *)(in_ECX + 1) = 0;
  return;
}



void FUN_006a1d60(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a767bc;
  return;
}



int * FUN_006a1d70(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0xc))();
  if (cVar1 != '\0') {
    return in_ECX + -0x1a;
  }
  return (int *)0x0;
}



undefined4 FUN_006a1d90(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0046b250(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_009832e6(iVar1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006a1dc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*piVar2 + 0x124))();
      return uVar3;
    }
  }
  return 0;
}



void FUN_006a1df0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int *in_ECX;
  
  piVar2 = (int *)(**(code **)(*in_ECX + 8))();
  bVar1 = false;
  while ((piVar2 != (int *)0x0 && (!bVar1))) {
    bVar1 = false;
    if ((*piVar2 != 0) && (*(int *)(*piVar2 + 8) == param_1)) {
      bVar1 = true;
    }
    piVar2 = (int *)piVar2[1];
  }
  return;
}



char FUN_006a1e20(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  char cVar4;
  
  if (param_1 == 0) {
    return '\0';
  }
  iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
  if (((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 4), iVar2 != 0)) && (iVar2 != -0x18)) {
    piVar3 = (int *)(**(code **)(*in_ECX + 8))();
    cVar4 = '\0';
    while ((piVar3 != (int *)0x0 && (cVar4 == '\0'))) {
      iVar1 = *piVar3;
      if ((iVar1 != 0) &&
         ((*(int *)(iVar1 + 8) == iVar2 + 0x18 && (*(int *)(iVar1 + 0x30) == param_1)))) {
        cVar4 = '\x01';
      }
      piVar3 = (int *)piVar3[1];
    }
    return cVar4;
  }
  return '\0';
}



void FUN_006a1ea0(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int *in_ECX;
  
  piVar4 = (int *)(**(code **)(*in_ECX + 8))();
  bVar3 = false;
  while ((piVar4 != (int *)0x0 &&
         (((piVar1 = (int *)piVar4[1], piVar1 != (int *)0x0 || (*piVar4 != 0)) && (!bVar3))))) {
    iVar2 = *piVar4;
    bVar3 = false;
    piVar4 = piVar1;
    if ((iVar2 != 0) && (**(int **)(iVar2 + 0xc) == param_1)) {
      bVar3 = true;
    }
  }
  return;
}



undefined4 FUN_006a1ee0(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *in_ECX;
  
  piVar3 = (int *)(**(code **)(*in_ECX + 8))();
  while( true ) {
    if ((piVar3 == (int *)0x0) || ((piVar3[1] == 0 && (*piVar3 == 0)))) {
      return 0;
    }
    iVar1 = *piVar3;
    if ((iVar1 != 0) &&
       ((cVar2 = FUN_00413470(), cVar2 != '\0' && (*(int *)(iVar1 + 0x24) == param_1)))) break;
    piVar3 = (int *)piVar3[1];
  }
  return 1;
}



float10 FUN_006a1f30(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  
  piVar3 = (int *)(**(code **)(*in_ECX + 8))();
  while ((piVar3 != (int *)0x0 &&
         ((piVar1 = (int *)piVar3[1], piVar1 != (int *)0x0 || (*piVar3 != 0))))) {
    iVar2 = *piVar3;
    piVar3 = piVar1;
    if ((iVar2 != 0) && (**(int **)(iVar2 + 0xc) == param_1)) {
      return (float10)*(float *)(iVar2 + 0x18);
    }
  }
  return (float10)0;
}



void FUN_006a1f70(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *in_ECX;
  
  piVar4 = (int *)(**(code **)(*in_ECX + 8))();
  if (piVar4 == (int *)0x0) {
    return;
  }
  do {
    piVar1 = (int *)piVar4[1];
    if ((piVar1 == (int *)0x0) && (*piVar4 == 0)) {
      return;
    }
    iVar2 = *piVar4;
    if ((((iVar2 != 0) && (*(char *)(iVar2 + 0x11) == '\0')) && (*(int *)(iVar2 + 8) == param_1)) &&
       ((param_2 == 0 || (*(int *)(iVar2 + 0x24) == param_2)))) {
      if (param_3 == 0) {
        FUN_0068ea10(1);
      }
      else if ((*(int *)(param_3 + 0x30) == *(int *)(iVar2 + 0x30)) &&
              (cVar3 = FUN_00414190(*(undefined4 *)(param_3 + 0xc)), cVar3 == '\0')) {
        FUN_0068ea10(1);
        return;
      }
    }
    piVar4 = piVar1;
    if (piVar1 == (int *)0x0) {
      return;
    }
  } while( true );
}



void FUN_006a2000(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *in_ECX;
  
  if (param_1 == 1) {
    uVar3 = (**(code **)(*in_ECX + 4))(0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
    piVar4 = (int *)FUN_009832e6(uVar3);
    if (piVar4 != (int *)0x0) {
      while( true ) {
        iVar5 = FUN_005e02e0(0);
        piVar6 = (int *)(iVar5 + 0x58);
        if ((int *)(iVar5 + 0x58) == (int *)0x0) break;
        while( true ) {
          piVar1 = (int *)piVar6[1];
          if ((piVar1 == (int *)0x0) && (*piVar6 == 0)) {
            return;
          }
          iVar5 = *piVar6;
          if ((iVar5 != 0) && (iVar7 = (**(code **)(*(int *)(iVar5 + 0x18) + 0x18))(), iVar7 == 1))
          break;
          piVar6 = piVar1;
          if (piVar1 == (int *)0x0) {
            return;
          }
        }
        (**(code **)(*piVar4 + 0x2e0))(iVar5);
      }
    }
  }
  else {
    piVar4 = (int *)(**(code **)(*in_ECX + 8))();
    while ((piVar4 != (int *)0x0 &&
           ((piVar6 = (int *)piVar4[1], piVar6 != (int *)0x0 || (*piVar4 != 0))))) {
      iVar5 = *piVar4;
      piVar4 = piVar6;
      if ((iVar5 != 0) && (*(char *)(iVar5 + 0x11) == '\0')) {
        iVar7 = FUN_009832e6(*(undefined4 *)(iVar5 + 8),0,&PTR_PTR_00b03280,&PTR_PTR_00b0320c,0);
        if (iVar7 == 0) {
          cVar2 = '\0';
        }
        else {
          cVar2 = FUN_00414eb0();
        }
        iVar5 = (**(code **)(**(int **)(iVar5 + 8) + 0x18))();
        if ((iVar5 == param_1) || ((cVar2 != '\0' && (param_1 == 5)))) {
          FUN_0068ea10(0);
        }
      }
    }
  }
  return;
}



void FUN_006a2110(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  
  if (param_1 != 0) {
    piVar3 = (int *)(**(code **)(*in_ECX + 8))();
    while ((piVar3 != (int *)0x0 &&
           ((piVar1 = (int *)piVar3[1], piVar1 != (int *)0x0 || (*piVar3 != 0))))) {
      iVar2 = *piVar3;
      piVar3 = piVar1;
      if ((iVar2 != 0) && ((*(char *)(iVar2 + 0x11) == '\0' && (*(int *)(iVar2 + 0x30) == param_1)))
         ) {
        FUN_0068ea10(param_2);
      }
    }
  }
  return;
}



void FUN_006a2160(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  
  piVar3 = (int *)(**(code **)(*in_ECX + 8))();
  while ((piVar3 != (int *)0x0 &&
         ((piVar1 = (int *)piVar3[1], piVar1 != (int *)0x0 || (*piVar3 != 0))))) {
    iVar2 = *piVar3;
    piVar3 = piVar1;
    if (iVar2 != 0) {
      FUN_0068ea10(1);
    }
  }
  return;
}



void FUN_006a2190(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  
  piVar2 = (int *)(**(code **)(*in_ECX + 8))();
  while ((piVar2 != (int *)0x0 &&
         ((piVar1 = (int *)piVar2[1], piVar1 != (int *)0x0 || (*piVar2 != 0))))) {
    iVar3 = *piVar2;
    piVar2 = piVar1;
    if (iVar3 != 0) {
      piVar1 = *(int **)(iVar3 + 8);
      iVar3 = (**(code **)(*piVar1 + 0x18))();
      if ((((iVar3 == 0) || (iVar3 = (**(code **)(*piVar1 + 0x18))(), iVar3 == 2)) ||
          (iVar3 = (**(code **)(*piVar1 + 0x18))(), iVar3 == 3)) ||
         (((iVar3 = (**(code **)(*piVar1 + 0x18))(), iVar3 == 7 ||
           (iVar3 = (**(code **)(*piVar1 + 0x18))(), iVar3 == 8)) ||
          ((iVar3 = FUN_009832e6(piVar1,0,&PTR_PTR_00b03280,&PTR_PTR_00b033c8,0), iVar3 != 0 &&
           (*(int *)(iVar3 + 0x34) == 0)))))) {
        FUN_0068ea10(param_1);
      }
    }
  }
  return;
}



int FUN_006a2250(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0xc))();
  if (cVar1 != '\0') {
    return in_ECX[-0x17];
  }
  iVar2 = (**(code **)(*in_ECX + 4))();
  return *(int *)(iVar2 + 0xc);
}



void FUN_006a2280(undefined4 param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *in_ECX;
  undefined4 *puVar8;
  
  bVar2 = false;
  piVar4 = (int *)(**(code **)(*in_ECX + 8))();
  cVar3 = (**(code **)(*in_ECX + 0xc))();
  if (cVar3 != '\0') {
    if ((in_ECX != (int *)0x68) && (in_ECX[-4] == 0)) {
      return;
    }
    piVar5 = (int *)(**(code **)(*in_ECX + 4))();
    iVar6 = (**(code **)(*piVar5 + 0x154))();
    if (iVar6 == 0) {
      return;
    }
    (**(code **)(*in_ECX + 4))();
    iVar6 = FUN_006ecc80();
    if (iVar6 == 0) {
      return;
    }
    (**(code **)(*in_ECX + 4))();
    FUN_006ecc80();
    iVar6 = FUN_004ca790();
    if (iVar6 == 0) {
      return;
    }
    if (((char)in_ECX[4] == '\0') && (cVar3 = FUN_0045a500(), cVar3 == '\0')) {
      bVar2 = true;
    }
  }
  while ((piVar5 = piVar4, piVar5 != (int *)0x0 &&
         ((piVar4 = (int *)piVar5[1], piVar4 != (int *)0x0 || (*piVar5 != 0))))) {
    puVar1 = (undefined4 *)*piVar5;
    if ((puVar1 != (undefined4 *)0x0) &&
       (((!bVar2 || (*(int *)(*(int *)(puVar1[3] + 0x1c) + 0x98) == 0x46464553)) &&
        (FUN_0068e670(param_1), *(char *)((int)puVar1 + 0x11) != '\0')))) {
      piVar7 = (int *)(**(code **)(*in_ECX + 8))();
      if (piVar5 == piVar7) {
        piVar4 = piVar5;
      }
      puVar8 = puVar1;
      (**(code **)(*in_ECX + 8))(puVar1);
      FUN_0065c620(puVar8);
      (**(code **)(*in_ECX + 0x14))(puVar1);
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void FUN_006a23b0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *in_ECX;
  undefined4 *puVar7;
  
  piVar3 = (int *)(**(code **)(*in_ECX + 8))();
  cVar2 = (**(code **)(*in_ECX + 0xc))();
  if (cVar2 != '\0') {
    if ((in_ECX != (int *)0x68) && (in_ECX[-4] == 0)) {
      return;
    }
    piVar4 = (int *)(**(code **)(*in_ECX + 4))();
    iVar5 = (**(code **)(*piVar4 + 0x154))();
    if (iVar5 == 0) {
      return;
    }
    (**(code **)(*in_ECX + 4))();
    iVar5 = FUN_006ecc80();
    if (iVar5 == 0) {
      return;
    }
    (**(code **)(*in_ECX + 4))();
    FUN_006ecc80();
    iVar5 = FUN_004ca790();
    if (iVar5 == 0) {
      return;
    }
  }
  while ((piVar4 = piVar3, piVar4 != (int *)0x0 &&
         ((piVar3 = (int *)piVar4[1], piVar3 != (int *)0x0 || (*piVar4 != 0))))) {
    puVar1 = (undefined4 *)*piVar4;
    if ((puVar1 != (undefined4 *)0x0) && (puVar1[2] == param_1)) {
      if (*(char *)(puVar1 + 4) == '\0') {
        FUN_0068e670(0x3dcccccd);
      }
      if (*(char *)((int)puVar1 + 0x11) != '\0') {
        piVar6 = (int *)(**(code **)(*in_ECX + 8))();
        if (piVar4 == piVar6) {
          piVar3 = piVar4;
        }
        puVar7 = puVar1;
        (**(code **)(*in_ECX + 8))(puVar1);
        FUN_0065c620(puVar7);
        (**(code **)(*in_ECX + 0x14))(puVar1);
        (**(code **)*puVar1)(1);
      }
    }
  }
  return;
}



void FUN_006a24b0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *in_ECX;
  bool bVar6;
  undefined4 *puVar7;
  
  piVar5 = (int *)(**(code **)(*in_ECX + 8))();
  piVar1 = piVar5;
  while ((piVar4 = piVar1, piVar3 = piVar5, piVar4 != (int *)0x0 &&
         ((piVar1 = (int *)piVar4[1], piVar1 != (int *)0x0 || (*piVar4 != 0))))) {
    puVar2 = (undefined4 *)*piVar4;
    if (param_2 == 0) {
      bVar6 = true;
    }
    else {
      bVar6 = param_2 == puVar2[9];
    }
    piVar5 = piVar4;
    if ((puVar2 != (undefined4 *)0x0) && (*(char *)((int)puVar2 + 0x11) == '\0')) {
      if ((*(int *)puVar2[3] == param_1) && (bVar6)) {
        FUN_0068ea10(1);
        puVar7 = puVar2;
        (**(code **)(*in_ECX + 8))(puVar2);
        FUN_0065c620(puVar7);
        (**(code **)(*in_ECX + 0x14))(puVar2);
        (**(code **)*puVar2)(1);
        piVar5 = piVar3;
        piVar1 = piVar4;
        if (piVar4 != piVar3) {
          piVar1 = (int *)piVar3[1];
        }
      }
      else {
        piVar1 = (int *)piVar4[1];
      }
    }
  }
  return;
}



void FUN_006a2550(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *in_ECX;
  undefined4 *puVar6;
  
  piVar5 = (int *)(**(code **)(*in_ECX + 8))();
  piVar1 = piVar5;
  while ((piVar4 = piVar1, piVar3 = piVar5, piVar4 != (int *)0x0 &&
         ((piVar1 = (int *)piVar4[1], piVar1 != (int *)0x0 || (*piVar4 != 0))))) {
    puVar2 = (undefined4 *)*piVar4;
    piVar5 = piVar4;
    if ((puVar2 != (undefined4 *)0x0) &&
       (((*(char *)((int)puVar2 + 0x11) == '\0' && (*(int *)puVar2[3] == param_1)) &&
        (puVar2[2] != param_2)))) {
      FUN_0068ea10(1);
      puVar6 = puVar2;
      (**(code **)(*in_ECX + 8))(puVar2);
      FUN_0065c620(puVar6);
      (**(code **)(*in_ECX + 0x14))(puVar2);
      (**(code **)*puVar2)(1);
      piVar5 = piVar3;
      piVar1 = piVar4;
      if (piVar4 != piVar3) {
        piVar1 = (int *)piVar3[1];
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_006a27f0(int param_1,int *param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *in_ECX;
  undefined1 *puVar13;
  int *unaff_FS_OFFSET;
  float10 fVar14;
  undefined1 auStack_128 [3];
  byte bStack_125;
  float afStack_124 [2];
  int *local_11c;
  float afStack_118 [2];
  int local_110;
  char acStack_10c [252];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c6051;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_128;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffec8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_110 = param_1;
  local_11c = param_2;
  fVar4 = (float)(**(code **)(*in_ECX + 4))(uVar3);
  afStack_124[0] = fVar4;
  if (fVar4 != 0.0) {
    FUN_004fbf90(*(undefined4 *)(param_3[3] + 0x1c),(int)fVar4 + 0x44,0x2000);
  }
  if (*(int *)(*(int *)(param_3[3] + 0x1c) + 0x98) == 0x46464553) {
    bStack_125 = (**(code **)(*param_2 + 0x1c))();
  }
  else {
    bStack_125 = 0;
  }
  if (((fVar4 == DAT_00b333c4) && (*(int *)(param_3[3] + 0x10) == 0)) &&
     ((iVar5 = (**(code **)(*param_2 + 0x18))(), iVar5 == 0 ||
      ((iVar5 = (**(code **)(*param_2 + 0x18))(), iVar5 == 2 ||
       (iVar5 = (**(code **)(*param_2 + 0x18))(), iVar5 == 3)))))) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  bStack_125 = bStack_125 | bVar1;
  iVar5 = (**(code **)(*param_2 + 0x18))();
  if (((iVar5 == 4) || (iVar6 = (**(code **)(*param_2 + 0x18))(), iVar5 = local_110, iVar6 == 1)) ||
     (bStack_125 != 0)) {
    afStack_118[0] = 1.0;
    iVar5 = local_110;
LAB_006a293d:
    if (DAT_00b333c4 == 0.0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)((int)DAT_00b333c4 + 0x68);
    }
    if (((in_ECX != piVar7) || (cVar2 = FUN_0065d820(), cVar2 == '\0')) ||
       (cVar2 = FUN_00413470(), cVar2 == '\0')) {
      cVar2 = (**(code **)(*param_3 + 0x34))();
      if (cVar2 == '\0') {
        if (DAT_00b3355c != '\0') {
          iVar5 = (**(code **)(*in_ECX + 4))();
          if (iVar5 == 0) {
            pcVar9 = "{NULL}";
          }
          else {
            (**(code **)(*in_ECX + 4))();
            pcVar9 = (char *)FUN_004da2a0();
          }
          puVar8 = (undefined4 *)FUN_004139f0(afStack_124);
          puVar13 = (undefined1 *)param_2[1];
          uStack_4 = 1;
          if (puVar13 == (undefined1 *)0x0) {
            puVar13 = &DAT_00a2f7ec;
          }
          FUN_00579b60("Invalid Target: Target: %s Spell: %s Effect: %s",pcVar9,puVar13,*puVar8);
          FUN_00401f20();
        }
      }
      else {
        cVar2 = FUN_0068d9f0();
        if (cVar2 == '\0') {
          iVar6 = (**(code **)(*param_2 + 0x18))();
          if (iVar6 == 6) {
            if ((param_3[0xc] == 0) || (*(char *)(param_3[0xc] + 4) != '\x15')) goto LAB_006a2b69;
          }
          else if (1 < iVar6 - 7U) {
LAB_006a2b69:
            FUN_006a1f70(param_2,iVar5,param_3);
          }
        }
        else if ((*(uint *)(*(int *)(param_3[3] + 0x1c) + 0x58) & 0x30000) != 0) {
          for (piVar7 = (int *)(**(code **)(*in_ECX + 8))();
              (piVar7 != (int *)0x0 && ((piVar7[1] != 0 || (*piVar7 != 0))));
              piVar7 = (int *)piVar7[1]) {
            iVar5 = *piVar7;
            if ((iVar5 != 0) &&
               (cVar2 = FUN_0041cac0(param_3[3],*(undefined4 *)(iVar5 + 0xc)), cVar2 != '\0')) {
              FUN_006a1f70(*(undefined4 *)(iVar5 + 8),0,iVar5);
            }
          }
        }
        puVar8 = (undefined4 *)(**(code **)(*param_3 + 4))();
        piVar7 = local_11c;
        if (puVar8 != (undefined4 *)0x0) {
          puVar8[8] = in_ECX;
          iVar5 = FUN_009832e6();
          if (iVar5 == 0) {
            FUN_0068e170(afStack_118[0]);
          }
          iVar5 = (**(code **)(*in_ECX + 8))();
          if (iVar5 != 0) {
            puVar13 = &LAB_006a25e0;
            puVar10 = puVar8;
            (**(code **)(*in_ECX + 8))(puVar8,&LAB_006a25e0);
            FUN_00416650(puVar10,puVar13);
            (**(code **)(*in_ECX + 0x10))(puVar8);
            if (*(int *)(*(int *)(puVar8[3] + 0x1c) + 0x98) == 0x504d4156) {
              FUN_0068e670(0);
            }
            if (DAT_00b3355c != '\0') {
              if (afStack_124[0] == 0.0) {
                pcVar9 = "{NULL}";
              }
              else {
                pcVar9 = (char *)FUN_004da2a0();
              }
              puVar10 = (undefined4 *)FUN_004139f0(afStack_118);
              afStack_124[0] = (float)puVar8[7];
              puVar13 = (undefined1 *)piVar7[1];
              local_11c = (int *)puVar8[6];
              uStack_4 = 2;
              if (puVar13 == (undefined1 *)0x0) {
                puVar13 = &DAT_00a2f7ec;
              }
              uVar12 = *puVar10;
              uVar11 = FUN_004133c0();
              uVar11 = FUN_00413320((double)afStack_124[0],uVar11);
              FUN_00579b60("Effect %s from spell %s added to %s. Mag: %.2f/%d Dur: %.2f/%d",uVar12,
                           puVar13,pcVar9,(double)(float)local_11c,uVar11);
              uStack_4 = 0xffffffff;
              FUN_00402da0();
            }
            uVar12 = 1;
            goto LAB_006a2cbc;
          }
          (**(code **)*puVar8)(1);
        }
      }
    }
  }
  else {
    fVar14 = (float10)(**(code **)(*in_ECX + 0x20))(local_110,param_2,param_3);
    afStack_118[0] = (float)fVar14;
    if (0.0 < afStack_118[0]) goto LAB_006a293d;
    if (DAT_00b333c4 == 0.0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)DAT_00b333c4 + 0x5c;
    }
    if (iVar5 == iVar6) {
      if (DAT_00b333c4 == 0.0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)((int)DAT_00b333c4 + 0x68);
      }
      if (in_ECX != piVar7) {
        puVar8 = (undefined4 *)FUN_004139f0(afStack_124);
        _sprintf(acStack_10c,"%s %s",*puVar8,DAT_00b38ea0);
        FUN_00401f20();
        FUN_0057acc0(acStack_10c,0,1,0xbf800000);
      }
    }
    if (DAT_00b3355c != '\0') {
      iVar5 = (**(code **)(*in_ECX + 4))();
      if (iVar5 == 0) {
        pcVar9 = "{NULL}";
      }
      else {
        (**(code **)(*in_ECX + 4))();
        pcVar9 = (char *)FUN_004da2a0();
      }
      puVar8 = (undefined4 *)FUN_004139f0(afStack_124);
      puVar13 = (undefined1 *)param_2[1];
      uStack_4 = 0;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &DAT_00a2f7ec;
      }
      FUN_00579b60("Target: %s FULLY RESISTED Spell: %s Effect: %s",pcVar9,puVar13,*puVar8,
                   (double)afStack_118[0]);
      FUN_00401f20(afStack_124[0]);
    }
  }
  uVar12 = 0;
LAB_006a2cbc:
  *unaff_FS_OFFSET = local_c;
  return uVar12;
}



uint FUN_006a2cf0(undefined4 param_1,int *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int *in_ECX;
  
  if (*(int *)(*(int *)(param_3 + 0xc) + 0x10) != 0) {
    if (*(int *)(*(int *)(*(int *)(param_3 + 0xc) + 0x1c) + 0x98) == 0x46464553) {
      cVar1 = (**(code **)(*param_2 + 0x1c))();
      if (cVar1 != '\0') goto LAB_006a2d7a;
    }
    cVar1 = (**(code **)(*param_2 + 0x20))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*in_ECX + 0x28))(param_1,param_2,param_3);
      if (cVar1 != '\0') {
        uVar2 = (**(code **)(*in_ECX + 0x18))(param_1,param_3);
        return uVar2 & 0xffffff00;
      }
      cVar1 = (**(code **)(*in_ECX + 0x24))(param_1,param_2,param_3,0);
      if (cVar1 != '\0') {
        uVar2 = (**(code **)(*in_ECX + 0x1c))(param_1,param_3);
        return uVar2 & 0xffffff00;
      }
    }
  }
LAB_006a2d7a:
  uVar2 = FUN_006a27f0(param_1,param_2,param_3);
  return uVar2;
}



undefined4 * FUN_006a2da0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006a82f0(in_ECX[9],in_ECX[2],in_ECX[3]);
    *puVar2 = &PTR_FUN_00a768a4;
    puVar3 = puVar2;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



undefined4 * FUN_006a2e30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006a82f0(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a768a4;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006a2ea0(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_00b333c4 + 0x284))(0x29);
  if (0 < iVar1) {
    FUN_007f4de0(0x3f800000,0,0,0);
    _DAT_00b46924 = _DAT_00b380a0;
    return;
  }
  FUN_007f4de0(0,0,0,0);
  _DAT_00b46924 = 0;
  return;
}



void FUN_006a2f30(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_006a88d0();
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 4))();
  if (iVar1 == DAT_00b333c4) {
    FUN_006a2ea0();
    return;
  }
  return;
}



void FUN_006a2f60(int param_1)

{
  FUN_0068dc90(param_1);
  if (param_1 == DAT_00b333c4) {
    FUN_006a2ea0();
  }
  return;
}



void FUN_006a2f80(int param_1)

{
  FUN_0068f970(param_1);
  if (((*(int *)(DAT_00b33b00 + 0x44) == 0x1ffff000) ||
      (*(int *)(DAT_00b33b00 + 0x44) == 0x7ffff000)) && (param_1 == DAT_00b333c4)) {
    FUN_006a2ea0();
  }
  return;
}



void FUN_006a2fc0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc) = param_1;
  return;
}



void FUN_006a2fd0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = param_1;
  return;
}



void FUN_006a2fe0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c60d8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a34d50;
  *(undefined1 *)(in_ECX + 1) = 0x39;
  in_ECX[2] = 0;
  local_4 = 0;
  FUN_00699140(uVar1);
  in_ECX[8] = param_1;
  *in_ECX = &PTR_FUN_00a7693c;
  in_ECX[3] = &PTR_FUN_00a768f4;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006a3060(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  int *piVar5;
  
  iVar2 = FUN_00673a50(0);
  if (iVar2 != 0) {
    for (piVar3 = (int *)FUN_007616d0(); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
      piVar4 = (int *)*piVar3;
      if ((piVar4 == (int *)0x0) ||
         (cVar1 = (**(code **)(*piVar4 + 400))(), piVar5 = piVar4, cVar1 == '\0')) {
        piVar5 = (int *)0x0;
      }
      if ((piVar4 == (int *)0x0) || (cVar1 = (**(code **)(*piVar4 + 0xe8))(), cVar1 == '\0')) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_009832e6(piVar4,0,&PTR_PTR_00b05538,&PTR_PTR_00b05b7c,0);
      }
      if (piVar5 == (int *)0x0) {
        if (piVar4 != (int *)0x0) {
          if (in_ECX == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = in_ECX + 0xc;
          }
          (**(code **)(*piVar4 + 0x218))(iVar2);
        }
      }
      else if (in_ECX == 0) {
        FUN_005e69e0(0);
      }
      else {
        FUN_005e69e0(in_ECX + 0xc);
      }
    }
  }
  iVar2 = FUN_00673a50(1);
  if (iVar2 != 0) {
    for (piVar3 = (int *)FUN_007616d0(); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
      piVar4 = (int *)*piVar3;
      if ((piVar4 == (int *)0x0) ||
         (cVar1 = (**(code **)(*piVar4 + 400))(), piVar5 = piVar4, cVar1 == '\0')) {
        piVar5 = (int *)0x0;
      }
      if ((piVar4 == (int *)0x0) || (cVar1 = (**(code **)(*piVar4 + 0xe8))(), cVar1 == '\0')) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_009832e6(piVar4,0,&PTR_PTR_00b05538,&PTR_PTR_00b05b7c,0);
      }
      if (piVar5 == (int *)0x0) {
        if (piVar4 != (int *)0x0) {
          if (in_ECX == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = in_ECX + 0xc;
          }
          (**(code **)(*piVar4 + 0x218))(iVar2);
        }
      }
      else if (in_ECX == 0) {
        FUN_005e69e0(0);
      }
      else {
        FUN_005e69e0(in_ECX + 0xc);
      }
    }
  }
  if (DAT_00b333c4 != 0) {
    if (in_ECX != 0) {
      FUN_005e69e0(in_ECX + 0xc);
      return;
    }
    FUN_005e69e0(0);
  }
  return;
}



void FUN_006a3210(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c60af;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7693c;
  in_ECX[3] = &PTR_FUN_00a768f4;
  local_4 = 1;
  if (*(char *)(DAT_00b33a98 + 0xcd4) == '\0') {
    if (in_ECX[8] != 0) {
      FUN_004e1f80(uVar1);
    }
    FUN_006a3060();
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00699160();
  *in_ECX = &PTR_LAB_00a34d50;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006a32a0(byte param_1)

{
  FUN_006a3210();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006a32c0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x14) = param_1;
  return;
}



void FUN_006a3310(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c60d8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a34d50;
  *(undefined1 *)(in_ECX + 1) = 0x3a;
  in_ECX[2] = 0;
  local_4 = 0;
  FUN_006a1d50(uVar1);
  *in_ECX = &PTR_FUN_00a76978;
  in_ECX[3] = &PTR_LAB_00a76948;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[5] = param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006a3390(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba58;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_006a1d60(uVar1);
  *in_ECX = &PTR_LAB_00a34d50;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006a33f0(byte param_1)

{
  FUN_006a3390();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_006a3410(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_0068d7a0(in_ECX[9],in_ECX[2],in_ECX[3]);
    *puVar2 = &PTR_FUN_00a76984;
    puVar3 = puVar2;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



undefined4 * FUN_006a3550(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0068d7a0(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a76984;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_006a3680(byte param_1)

{
  FUN_0068d970();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_006a36a0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006a82f0(in_ECX[9],in_ECX[2],in_ECX[3]);
    *puVar2 = &PTR_FUN_00a769cc;
    puVar3 = puVar2;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



undefined4 * FUN_006a37b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006a82f0(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a769cc;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_006a3820(int param_1)

{
  FUN_0068f970(param_1);
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_008a5580(*(int *)(param_1 + 0x3c),0);
  }
  return;
}



void FUN_006a3980(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_0068d7a0(param_1,param_2,param_3);
  in_ECX[0x10] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  *in_ECX = &PTR_FUN_00a76a1c;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = DAT_00b27110;
  in_ECX[0x15] = DAT_00b27114;
  in_ECX[0x16] = DAT_00b27118;
  in_ECX[0x17] = DAT_00b2711c;
  return;
}



int FUN_006a3a00(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x60,uVar1);
  iVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_006a3980(in_ECX[9],in_ECX[2],in_ECX[3]);
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(iVar3);
  *(int *)(iVar3 + 0x38) = in_ECX[0xe];
  *(int *)(iVar3 + 0x3c) = in_ECX[0xf];
  *(int *)(iVar3 + 0x40) = in_ECX[0x10];
  *(int *)(iVar3 + 0x44) = in_ECX[0x11];
  *(int *)(iVar3 + 0x48) = in_ECX[0x12];
  *(int *)(iVar3 + 0x4c) = in_ECX[0x13];
  *(int *)(iVar3 + 0x50) = in_ECX[0x14];
  *(int *)(iVar3 + 0x54) = in_ECX[0x15];
  *(int *)(iVar3 + 0x58) = in_ECX[0x16];
  *(int *)(iVar3 + 0x5c) = in_ECX[0x17];
  *unaff_FS_OFFSET = iVar2;
  return iVar3;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006a3ac0(float param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  int in_ECX;
  float10 fVar7;
  undefined4 uVar8;
  undefined1 auStack_e4 [8];
  float fStack_dc;
  int *local_d8;
  undefined1 auStack_d4 [36];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [60];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_e4;
  if (*(int *)(in_ECX + 0x20) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_006a1d70();
  }
  if ((*(int *)(in_ECX + 0x24) == 0) ||
     (piVar3 = (int *)FUN_00699050(), local_d8 = piVar3, piVar3 == (int *)0x0)) {
    FUN_0068ea10(1);
    return;
  }
  if ((*(int *)(in_ECX + 0x38) != 0) && (piVar2 != (int *)0x0)) {
    cVar1 = (**(code **)(*piVar2 + 0x198))(0);
    if (cVar1 != '\0') {
      FUN_0068ea10(0);
      return;
    }
    if (*(int *)(in_ECX + 0x3c) == 0) {
      *(undefined4 *)(in_ECX + 0x3c) = 10;
      *(undefined4 *)(in_ECX + 0x40) = 0;
    }
    iVar4 = *(int *)(in_ECX + 0x3c);
    if (iVar4 == 10) {
      piVar3 = (int *)piVar2[0x16];
      iVar4 = (**(code **)(*piVar3 + 8))();
      if (iVar4 == 0) {
        *(undefined1 *)((int)piVar3 + 0x2a9) = 1;
      }
      fStack_dc = *(float *)(in_ECX + 4) - *(float *)(in_ECX + 0x40);
      if (5.0 < fStack_dc) {
        *(undefined4 *)(in_ECX + 0x3c) = 0x14;
      }
      fStack_dc = fStack_dc * 0.25;
      fVar7 = (float10)FUN_004ac760(0x3f800000,fStack_dc);
      fStack_dc = (float)fVar7;
      FUN_004529e0(&fStack_b0,in_ECX + 0x44);
      FUN_004529e0(&fStack_a0,in_ECX + 0x44);
      fStack_a8 = fStack_a8 + 14.287673;
      fStack_80 = (1.0 - fStack_dc) * fStack_a0 + fStack_b0 * fStack_dc;
      fStack_7c = (1.0 - fStack_dc) * fStack_9c + fStack_ac * fStack_dc;
      fStack_78 = (1.0 - fStack_dc) * fStack_98 + fStack_a8 * fStack_dc;
      fStack_74 = (1.0 - fStack_dc) * fStack_94 + fStack_a4 * fStack_dc;
      FUN_004d6900(&fStack_b0);
      pfVar5 = (float *)(**(code **)(*local_d8 + 0x174))();
      fStack_a0 = *pfVar5 - fStack_b0;
      fStack_9c = pfVar5[1] - fStack_ac;
      uVar8 = 0x3f000000;
      uVar6 = _DAT_00b3f99c;
      fVar7 = (float10)FUN_0098598a(0x3f000000,_DAT_00b3f99c);
      local_d8 = (int *)(float)fVar7;
      FUN_007118e0(-(float)local_d8,uVar8,uVar6);
      FUN_00539850(auStack_50,auStack_d4);
      uStack_90 = *(undefined4 *)(in_ECX + 0x54);
      uStack_8c = *(undefined4 *)(in_ECX + 0x58);
      uStack_88 = *(undefined4 *)(in_ECX + 0x5c);
      uStack_84 = *(undefined4 *)(in_ECX + 0x50);
      FUN_008b1b40(auStack_50);
      FUN_008b1c60(&uStack_90,auStack_70,fStack_dc);
      local_d8 = (int *)(1.0 / param_1);
      FUN_008a34c0(&fStack_80,auStack_60,local_d8,0x3f800000);
      iVar4 = *piVar2;
      uVar6 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x20))();
      (**(code **)(iVar4 + 0x1e4))(uVar6);
      return;
    }
    if (iVar4 == 0x14) {
      fStack_dc = (float)(**(code **)(*piVar2 + 0x164))();
      iVar4 = (**(code **)(*piVar2 + 0x154))();
      if ((iVar4 != 0) && (fStack_dc != 0.0)) {
        *(undefined4 *)(in_ECX + 0x3c) = 0x1e;
        FUN_005e13d0(1);
        FUN_00477b60(0,0,0xffffffff);
        FUN_008ab8a0(iVar4,0);
        piVar2 = (int *)piVar2[0x16];
        iVar4 = (**(code **)(*piVar2 + 8))();
        if (iVar4 == 0) {
          *(undefined1 *)((int)piVar2 + 0x2a9) = 0;
        }
        FUN_00424870(0);
        *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(in_ECX + 4);
        return;
      }
    }
    else if (iVar4 == 0x1e) {
      if (2.0 < *(float *)(in_ECX + 4) - *(float *)(in_ECX + 0x40)) {
        *(undefined4 *)(in_ECX + 0x3c) = 0x28;
        *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(in_ECX + 4);
        iVar4 = (**(code **)(*piVar2 + 0x154))();
        if (iVar4 != 0) {
          FUN_0088d070(iVar4,6,1,0);
        }
        uVar6 = (**(code **)(*piVar2 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4,0);
        iVar4 = FUN_009832e6(uVar6);
        if (iVar4 != 0) {
          FUN_005263b0(DAT_00b362bc);
        }
        piVar2 = (int *)FUN_005e12b0();
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x9c))(0,0);
          return;
        }
      }
    }
    else if (iVar4 == 0x28) {
      if (1.0 < *(float *)(in_ECX + 4) - *(float *)(in_ECX + 0x40)) {
        *(undefined4 *)(in_ECX + 0x3c) = 0x32;
        FUN_005e6680(4);
        FUN_005e8ec0(0);
        FUN_00692430(piVar2,piVar3);
      }
    }
    else if (iVar4 == 0x32) {
      (**(code **)(*(int *)piVar2[0x16] + 0x49c))();
      FUN_006925c0(piVar2,piVar3);
    }
  }
  return;
}



undefined4 FUN_006a4030(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c74db;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&local_10;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = FUN_00401f00(0x60,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006a3980(param_1,param_2,param_3);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006a40b0(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar8;
  undefined4 uVar9;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c610b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x24) == 0) {
    uVar9 = 1;
  }
  else {
    if (*(int *)(in_ECX + 0x20) != 0) {
      piVar4 = (int *)FUN_006a1d70(uVar3);
      if (piVar4 != (int *)0x0) {
        cVar2 = (**(code **)(*piVar4 + 0x198))(0);
        if (cVar2 != '\0') {
          uVar9 = 0;
          (**(code **)(*piVar4 + 0x9c))(0);
          FUN_005e6680(4);
          cVar2 = (**(code **)(*piVar4 + 0x334))(1);
          if (cVar2 != '\0') {
            (**(code **)(*piVar4 + 0x340))(0);
          }
          piVar1 = (int *)piVar4[0x16];
          iVar5 = (**(code **)(*piVar1 + 8))();
          if (iVar5 == 0) {
            *(undefined1 *)((int)piVar1 + 0x2a9) = 1;
          }
          FUN_005e8ec0(1);
          iVar5 = *piVar4;
          uVar6 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x20))();
          (**(code **)(iVar5 + 0x1e4))(uVar6);
          iVar5 = (**(code **)(*piVar4 + 0x154))();
          if (iVar5 != 0) {
            iVar5 = (**(code **)(*piVar4 + 0x154))();
            FUN_004d8a30(*(undefined4 *)(iVar5 + 0x88),*(undefined4 *)(iVar5 + 0x8c),
                         *(undefined4 *)(iVar5 + 0x90));
          }
          (**(code **)(*piVar4 + 0x148))();
          (**(code **)(*(int *)piVar4[0x16] + 0x484))(0);
          FUN_005e6d70(0);
          iVar5 = *piVar4;
          iVar7 = FUN_005f1910(8);
          uVar6 = SUB84((double)iVar7,0);
          fVar8 = (float10)(**(code **)(*piVar4 + 0x288))(8,0);
          (**(code **)(iVar5 + 0x2a4))(8,(float)((float10)(double)CONCAT44(uVar6,uVar9) - fVar8));
          iVar5 = (**(code **)(*piVar4 + 0x154))();
          if (iVar5 != 0) {
            FUN_004e3490();
            uVar9 = (**(code **)(*piVar4 + 0x154))();
            FUN_005ea1a0(uVar9);
          }
          iVar5 = FUN_00401f00(0x3c);
          if (iVar5 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_00568e10();
          }
          uVar9 = 0xffffffff;
          FUN_005661e0(0x18);
          *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x1006;
          *(undefined4 *)(iVar5 + 0x18) = 0x19;
          FUN_005f1590(iVar5,1,1);
          piVar4 = (int *)(**(code **)(*piVar4 + 0x154))();
          if (piVar4 != (int *)0x0) {
            FUN_0088d070(piVar4,1,1,0,uVar9);
            iVar5 = (**(code **)(*piVar4 + 0x58))("Bip01 Spine2");
            if (iVar5 == 0) {
              FUN_004a7a60("No Bip01 Spine2 bone for reanimation. Need a backup bone!");
              *unaff_FS_OFFSET = local_c;
              return;
            }
            iVar5 = FUN_0047fac0(iVar5);
            if (iVar5 != 0) {
              piVar4 = *(int **)(iVar5 + 0x10);
              *(int **)(in_ECX + 0x38) = piVar4;
              (**(code **)(*piVar4 + 0x9c))(6);
              FUN_004d6900(in_ECX + 0x44);
              FUN_004d6950(in_ECX + 0x50);
              *unaff_FS_OFFSET = iStack_10;
              return;
            }
          }
          goto LAB_006a4353;
        }
      }
    }
    uVar9 = 0;
  }
  FUN_0068ea10(uVar9);
LAB_006a4353:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006a4420(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c57e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0068d7a0(param_1,param_2,param_3);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a76aac;
  uVar2 = FUN_00412cc0(uVar1);
  in_ECX[0xe] = uVar2;
  in_ECX[0xf] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_006a44a0(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
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
  iVar2 = FUN_00401f00(0x40,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_006a4420(in_ECX[9],in_ECX[2],in_ECX[3]);
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(uVar3);
  *unaff_FS_OFFSET = iVar2;
  return uVar3;
}



void FUN_006a4580(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c57e8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a76aac;
  iVar1 = in_ECX[0xf];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_004fb4e0(uVar2);
    FUN_00401f20(iVar1);
  }
  local_4 = 0xffffffff;
  FUN_0068d970();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006a45f0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x38) != 0) {
    uVar1 = FUN_004fbdc0();
    *(undefined4 *)(in_ECX + 0x3c) = uVar1;
    uVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 4))(uVar1);
    FUN_004f9f00(uVar2,uVar1);
  }
  return;
}



void FUN_006a4620(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  
  if ((*(int *)(in_ECX + 0x38) != 0) &&
     (((*(uint *)(DAT_00b33b00 + 0x18) >> 0xb & 1) == 0 ||
      ((*(uint *)(DAT_00b33b00 + 0x18) >> 1 & 1) != 0)))) {
    uVar3 = *(undefined4 *)(in_ECX + 0x3c);
    uVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 4))(uVar3);
    FUN_004f9f30(uVar2,uVar3);
  }
  iVar1 = *(int *)(in_ECX + 0x3c);
  if (iVar1 != 0) {
    FUN_004fb4e0();
    FUN_00401f20(iVar1);
    *(undefined4 *)(in_ECX + 0x3c) = 0;
  }
  return;
}



void FUN_006a4680(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 uVar2;
  
  if (*(int *)(in_ECX + 0x38) != 0) {
    uVar2 = *(undefined4 *)(in_ECX + 0x3c);
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 4))(uVar2,param_1);
    FUN_004f9f60(uVar1,uVar2,param_1);
  }
  return;
}



void FUN_006a4810(byte param_1)

{
  FUN_006a4580();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006a4870(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 *in_ECX;
  
  FUN_006a82f0(param_1,param_2,param_3);
  *in_ECX = &PTR_FUN_00a76af4;
  if (*param_3 != 0x444c4853) {
    in_ECX[0xe] = param_3[5];
    in_ECX[0xf] = 0x2b;
    return;
  }
  in_ECX[0xf] = 0x48;
  return;
}



undefined4 * FUN_006a48c0(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *in_ECX;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar3 = (undefined4 *)FUN_00401f00(0x40,uVar2);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    piVar1 = (int *)in_ECX[3];
    FUN_006a82f0(in_ECX[9],in_ECX[2],piVar1);
    *puVar3 = &PTR_FUN_00a76af4;
    puVar4 = puVar3;
    if (*piVar1 == 0x444c4853) {
      puVar3[0xf] = 0x48;
    }
    else {
      puVar3[0xe] = piVar1[5];
      puVar3[0xf] = 0x2b;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar4);
  *unaff_FS_OFFSET = (int)puVar3;
  return puVar4;
}



void FUN_006a49f0(int *param_1,float param_2)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  float10 fVar3;
  
  if ((param_1 != (int *)0x0) && (iVar1 = *(int *)(in_ECX + 0x3c), iVar1 != 0x48)) {
    if (*(int *)(in_ECX + 0x28) == 4) {
      (**(code **)(*param_1 + 0x2ac))(iVar1,param_2);
      return;
    }
    if ((*(uint *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x58) >> 1 & 1) != 0) {
      (**(code **)(*param_1 + 0x294))(iVar1,param_2,0);
      return;
    }
    fVar2 = (float10)param_2;
    if ((fVar2 < (float10)0) && (*(int *)(in_ECX + 0x38) != 10)) {
      fVar3 = (float10)(**(code **)(*param_1 + 0x288))(*(int *)(in_ECX + 0x38));
      fVar2 = (float10)param_2;
      if ((float10)(float)(fVar2 + fVar3) < (float10)0) {
        fVar2 = (float10)(float)(fVar2 - (float10)(float)(fVar2 + fVar3));
      }
    }
    (**(code **)(*param_1 + 0x2a4))(*(undefined4 *)(in_ECX + 0x3c),(float)fVar2,0);
  }
  return;
}



void FUN_006a4ad0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_006a86f0();
  if (((*(uint *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x58) >> 1 & 1) != 0) ||
     (*(float *)(in_ECX + 0x1c) == 0.0)) {
    if (*(int *)(in_ECX + 0x20) != 0) {
      uVar1 = FUN_006a1d70();
      FUN_006a49f0(uVar1,*(undefined4 *)(in_ECX + 0x18));
      return;
    }
    FUN_006a49f0(0,*(undefined4 *)(in_ECX + 0x18));
  }
  return;
}



void FUN_006a4ba0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_006a88d0();
  if ((*(uint *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x58) >> 1 & 1) != 0) {
    if (*(int *)(in_ECX + 0x20) != 0) {
      uVar1 = FUN_006a1d70();
      FUN_006a49f0(uVar1,-*(float *)(in_ECX + 0x18));
      return;
    }
    FUN_006a49f0(0,-*(float *)(in_ECX + 0x18));
  }
  return;
}



undefined4 * FUN_006a4bf0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_0068d7a0(in_ECX[9],in_ECX[2],in_ECX[3]);
    *puVar2 = &PTR_FUN_00a76b44;
    puVar3 = puVar2;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



undefined4 * FUN_006a4d10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0068d7a0(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a76b44;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_006a4d80(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_006a1d70();
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00699050();
  }
  if ((((piVar2 != (int *)0x0) && (cVar1 = (**(code **)(*piVar2 + 0x198))(0), cVar1 == '\0')) &&
      (piVar3 != (int *)0x0)) && (cVar1 = (**(code **)(*piVar3 + 0x198))(0), cVar1 == '\0')) {
    return;
  }
  FUN_0068ea10(0);
  return;
}



void FUN_006a4df0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int in_ECX;
  int iVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  char local_21;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c26db;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x24) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00699050(uVar2);
  }
  if (*(int *)(in_ECX + 0x20) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_006a1d70();
    if (piVar4 != (int *)0x0) {
      cVar1 = FUN_005e3270();
      if ((cVar1 != '\0') && (*(int *)(in_ECX + 0x20) != 0)) {
        iVar10 = *(int *)(in_ECX + 0x20) + -0x68;
        goto LAB_006a4e58;
      }
    }
  }
  iVar10 = 0;
LAB_006a4e58:
  if (iVar3 == 0) {
    local_21 = '\0';
  }
  else {
    local_21 = FUN_005e04e0();
  }
  if (iVar10 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00625070();
  }
  if (((piVar4 != (int *)0x0) && (iVar3 != 0)) && ((iVar10 == 0 || (0 < iVar5)))) {
    FUN_0041e6f0();
    cVar1 = FUN_0048b1d0(piVar4);
    if ((cVar1 != '\0') && (local_21 != '\0')) {
      FUN_0057acc0(DAT_00b38df0,0,1,0xbf800000);
      FUN_0057de50(0x20);
      *(int *)(DAT_00b333c4 + 0x680) = *(int *)(DAT_00b333c4 + 0x680) + 1;
    }
    if (iVar10 != 0) {
      FUN_00625090(0);
    }
    iVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x18) + 0x14))();
    if (iVar3 != 0) {
      (**(code **)(*piVar4 + 0x1e0))();
      fVar11 = (float10)FUN_00986000();
      fVar14 = (float)fVar11;
      (**(code **)(*piVar4 + 0x1e0))();
      fVar11 = (float10)FUN_00986300();
      fVar13 = -(float)fVar11;
      FUN_006ecc80();
      uVar6 = FUN_004c9be0(piVar4);
      uVar19 = 3;
      FUN_006ecc80(uVar6,3);
      uVar6 = FUN_00441800(uVar6,uVar19);
      iVar3 = FUN_00401f00(0x20);
      uStack_4 = 0;
      if (iVar3 == 0) {
        uVar6 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(in_ECX + 0xc) + 0x1c);
        puVar7 = (undefined4 *)(**(code **)(*piVar4 + 0x174))();
        uVar19 = *puVar7;
        uVar20 = 0;
        uVar18 = 0x3f800000;
        uVar16 = puVar7[1];
        uVar17 = puVar7[2];
        uVar15 = 0;
        uVar8 = (**(code **)(*(int *)(iVar3 + 0x18) + 0x14))
                          (fVar13,fVar14,0,uVar19,uVar16,uVar17,0x3f800000,0);
        uVar12 = 0x3f800000;
        uVar9 = FUN_006ecc80(0x3f800000,uVar6,uVar8);
        uVar6 = FUN_005713f0(uVar9,uVar12,uVar6,uVar8,fVar13,fVar14,uVar15,uVar19,uVar16,uVar17,
                             uVar18,uVar20);
      }
      uStack_4 = 0xffffffff;
      FUN_00570c00("SpecialIdle_Soultrap");
      FUN_00678d30(uVar6);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006a5050(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_006a1d70();
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00699050();
  }
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar2 + 0x198))(0);
    if ((cVar1 != '\0') && (piVar3 != (int *)0x0)) {
      cVar1 = (**(code **)(*piVar3 + 0x198))(0);
      if (cVar1 == '\0') {
        cVar1 = FUN_005e1d30();
        if (cVar1 == '\0') {
          FUN_006a4df0();
          return;
        }
      }
    }
  }
  return;
}



void FUN_006a51d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  FUN_0068f2b0(param_1,param_2,param_3);
  in_ECX[0x11] = 0;
  *in_ECX = &PTR_FUN_00a76bac;
  in_ECX[0xf] = 0;
  *(undefined1 *)(in_ECX + 0x10) = 0;
  in_ECX[0x12] = DAT_00b3f9a8;
  in_ECX[0x13] = DAT_00b3f9ac;
  in_ECX[0x14] = DAT_00b3f9b0;
  in_ECX[0x15] = DAT_00b3f9a8;
  in_ECX[0x16] = DAT_00b3f9ac;
  uVar1 = DAT_00b3f9b0;
  *(undefined1 *)(in_ECX + 0x18) = 0;
  *(undefined1 *)((int)in_ECX + 0x61) = 0;
  in_ECX[0x17] = uVar1;
  return;
}



void FUN_006a5240(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6138;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a76bac;
  local_4 = 0;
  if ((*(char *)((int)in_ECX + 0x61) != '\0') && (in_ECX[2] != 0)) {
    FUN_00419f10(1);
  }
  local_4 = 0xffffffff;
  FUN_0068d970(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_006a52b0(void)

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
  iVar2 = FUN_00401f00(100,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_006a51d0(*(undefined4 *)(in_ECX + 0x24),*(undefined4 *)(in_ECX + 8),
                         *(undefined4 *)(in_ECX + 0xc));
  }
  local_4 = 0xffffffff;
  FUN_0068f1f0(iVar2);
  *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined1 *)(iVar2 + 0x40) = *(undefined1 *)(in_ECX + 0x40);
  *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(in_ECX + 0x44);
  *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(in_ECX + 0x48);
  *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(in_ECX + 0x4c);
  *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(in_ECX + 0x50);
  *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(in_ECX + 0x54);
  *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(in_ECX + 0x58);
  *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(in_ECX + 0x5c);
  *(undefined1 *)(iVar2 + 0x60) = *(undefined1 *)(in_ECX + 0x60);
  if (((*(char *)(in_ECX + 0x61) != '\0') && (*(char *)(iVar2 + 0x61) == '\0')) &&
     (*(int *)(in_ECX + 8) != 0)) {
    FUN_0041a610(0);
  }
  *(undefined1 *)(iVar2 + 0x61) = *(undefined1 *)(in_ECX + 0x61);
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



void FUN_006a5390(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_006a1d70();
  }
  if ((*(int *)(in_ECX + 0x3c) == 0) || (iVar3 == 0)) goto LAB_006a5442;
  piVar1 = *(int **)(*(int *)(in_ECX + 0x3c) + 0x58);
  if (piVar1 == (int *)0x0) {
LAB_006a541d:
    FUN_00692660(*(undefined4 *)(in_ECX + 0x3c),iVar3,1);
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x8c))(1);
  }
  else {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 != 0) goto LAB_006a541d;
    cVar2 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x198))(0);
    if (cVar2 == '\0') {
      FUN_006a24b0(0x50525453,0);
      FUN_006005f0(0,0);
    }
    FUN_00633130(*(undefined4 *)(in_ECX + 0x3c));
    FUN_00692660(*(undefined4 *)(in_ECX + 0x3c),iVar3,1);
  }
  *(undefined4 *)(in_ECX + 0x3c) = 0;
LAB_006a5442:
  if ((*(char *)(in_ECX + 0x61) != '\0') && (*(int *)(in_ECX + 8) != 0)) {
    FUN_00419f10(0);
    *(undefined1 *)(in_ECX + 0x61) = 0;
  }
  return;
}



void FUN_006a54f0(byte param_1)

{
  FUN_006a5240();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint FUN_006a5510(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  float *pfVar9;
  int in_ECX;
  int iVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  int iStack_ac;
  float *pfStack_a4;
  float fStack_94;
  float fStack_90;
  int iStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float local_7c [2];
  uint local_74;
  double dStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  double dStack_44;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  
  FUN_006ecc80();
  iVar6 = FUN_004af170();
  if (iVar6 == 0) {
    FUN_006ecc80();
    cVar5 = FUN_004c97f0();
    if (cVar5 == '\0') {
      local_74 = 100;
      iVar6 = FUN_00401f00(0x4b0);
      *param_1 = iVar6;
      pfVar9 = (float *)(**(code **)(*param_2 + 0x174))();
      fVar2 = *pfVar9;
      fVar3 = pfVar9[1];
      fVar4 = pfVar9[2];
      fStack_94 = (float)param_2[8];
      iStack_8c = param_2[10];
      fStack_90 = (float)param_2[9];
      FUN_0070fdd0(iStack_8c);
      fStack_94 = 0.0;
      fStack_90 = 250.0;
      iStack_8c = 0;
      pfVar9 = (float *)FUN_007101f0(&fStack_30,&fStack_94);
      pfStack_a4 = (float *)0x0;
      fVar1 = pfVar9[1];
      dStack_70 = (double)((*pfVar9 + fVar2) - 250.0);
      dStack_44 = (double)CONCAT44(dStack_44._4_4_,((pfVar9[2] + fVar4) - 0.0) + 0.0);
      iVar6 = 0;
      do {
        iStack_ac = 0;
        fStack_94 = (float)(int)pfStack_a4 * 50.0;
        iVar12 = iVar6 + 0x78;
        fVar2 = fStack_94 + (float)dStack_70;
        do {
          fStack_90 = (float)iStack_ac * 50.0;
          fStack_84 = fStack_90 + ((fVar1 + fVar3) - 250.0);
          fStack_80 = dStack_44._0_4_;
          fStack_88 = fVar2;
          cVar5 = FUN_00440590(&fStack_88,local_7c);
          if (cVar5 != '\0') {
            fStack_80 = local_7c[0];
          }
          pfVar9 = (float *)(*param_1 + iVar6);
          *pfVar9 = fStack_88;
          pfVar9[1] = fStack_84;
          iStack_ac = iStack_ac + 1;
          iVar6 = iVar6 + 0xc;
          pfVar9[2] = fStack_80;
        } while (iStack_ac < 10);
        pfStack_a4 = (float *)((int)pfStack_a4 + 1);
        iVar6 = iVar12;
      } while ((int)pfStack_a4 < 10);
      return local_74;
    }
  }
  else {
    local_7c[0] = 0.0;
    local_7c[1] = 0.0;
    uVar7 = (**(code **)(*param_2 + 0x174))(param_2,1,0);
    iVar6 = FUN_0067d820(uVar7);
    if (iVar6 != 0) {
      FUN_004e80b0(0x43fa0000,local_7c);
      FUN_00446cb0(iVar6);
      iVar6 = 0;
      pfVar9 = local_7c;
      do {
        if (*pfVar9 != 0.0) {
          iVar6 = iVar6 + 1;
        }
        pfVar9 = (float *)pfVar9[1];
      } while (pfVar9 != (float *)0x0);
      local_74 = iVar6 * 0xd + 1;
      puVar8 = (undefined4 *)
               FUN_00401f00(-(uint)((int)((ulonglong)local_74 * 0xc >> 0x20) != 0) |
                            (uint)((ulonglong)local_74 * 0xc));
      *param_1 = (int)puVar8;
      *puVar8 = *(undefined4 *)(in_ECX + 0x48);
      uStack_54 = 0;
      puVar8[1] = *(undefined4 *)(in_ECX + 0x4c);
      dStack_44 = 0.0;
      pfStack_a4 = local_7c;
      puVar8[2] = *(undefined4 *)(in_ECX + 0x50);
      iVar6 = 0xc;
      uStack_34 = 0;
      do {
        pfVar9 = (float *)FUN_004bef40();
        fStack_88 = *pfVar9;
        fStack_84 = pfVar9[1];
        fStack_80 = pfVar9[2];
        pfVar9 = (float *)(*param_1 + iVar6);
        *pfVar9 = fStack_88;
        pfVar9[1] = fStack_84;
        pfVar9[2] = fStack_80;
        FUN_0047df80(0);
        iVar10 = 4;
        iVar11 = iVar6 + 0x3c;
        dStack_70 = (double)fStack_80;
        fStack_48 = fStack_80 + (float)dStack_44;
        iVar12 = iVar6;
        do {
          iVar12 = iVar12 + 0xc;
          fVar13 = (float10)FUN_00986000();
          fStack_30 = (float)fVar13;
          fVar13 = (float10)FUN_00986300();
          fStack_2c = (float)fVar13;
          pfVar9 = (float *)(*param_1 + iVar12);
          iVar10 = iVar10 + -1;
          fStack_5c = fStack_30 * 50.0;
          fStack_58 = fStack_2c * 50.0;
          fStack_50 = fStack_5c + fStack_88;
          *pfVar9 = fStack_50;
          fStack_4c = fStack_84 + fStack_58;
          pfVar9[1] = fStack_4c;
          pfVar9[2] = fStack_48;
        } while (iVar10 != 0);
        FUN_0047df80(0);
        iVar12 = 8;
        iVar6 = iVar6 + 0x9c;
        fStack_60 = (float)((float10)0.0 + (float10)dStack_70);
        do {
          fVar13 = (float10)FUN_00986000();
          fStack_94 = (float)fVar13;
          fVar13 = (float10)FUN_00986300();
          fStack_90 = (float)fVar13;
          pfVar9 = (float *)(*param_1 + iVar11);
          iVar11 = iVar11 + 0xc;
          iVar12 = iVar12 + -1;
          fStack_3c = fStack_94 * 150.0;
          fStack_38 = fStack_90 * 150.0;
          fStack_68 = fStack_3c + fStack_88;
          *pfVar9 = fStack_68;
          fStack_64 = fStack_38 + fStack_84;
          pfVar9[1] = fStack_64;
          pfVar9[2] = fStack_60;
        } while (iVar12 != 0);
        pfStack_a4 = (float *)pfStack_a4[1];
      } while (pfStack_a4 != (float *)0x0);
      return local_74;
    }
  }
  return 0;
}



float10 FUN_006a5a10(int *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 auStack_48 [9];
  undefined1 auStack_24 [36];
  
  pfVar2 = (float *)(**(code **)(*param_1 + 0x174))();
  fStack_68 = param_2[1] - pfVar2[1];
  fStack_64 = param_2[2] - pfVar2[2];
  fStack_6c = *param_2 - *pfVar2;
  fVar6 = (float10)FUN_00982c30();
  fVar1 = (float)fVar6;
  if (250.0 <= fVar1) {
    if (500.0 <= fVar1) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = (500.0 - fVar1) / 250.0;
    }
  }
  else {
    fVar1 = fVar1 / 250.0;
  }
  iStack_5c = param_1[9];
  iStack_60 = param_1[8];
  iStack_58 = param_1[10];
  puVar4 = &DAT_00b26dc4;
  puVar5 = auStack_48;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_0070fdd0(iStack_58);
  FUN_007103c0(auStack_24);
  FUN_00710250(&fStack_54,&fStack_6c,auStack_48);
  FUN_0043f350();
  return (float10)((1.0 - ABS(fStack_54)) * (1.0 - ABS(fStack_54)) * fVar1 * (fStack_50 + 1.0) * 0.5
                  );
}



void FUN_006a5b70(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float fStack_4;
  
  piVar4 = (int *)(**(code **)(*(int *)(DAT_00b333c4 + 0x68) + 8))();
  iVar5 = 0;
  fStack_4 = -3.4028235e+38;
  iVar6 = 0;
  if (piVar4 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar4[1];
      if ((piVar1 == (int *)0x0) && (*piVar4 == 0)) break;
      iVar2 = *piVar4;
      uVar3 = *(uint *)(*(int *)(*(int *)(iVar2 + 0xc) + 0x1c) + 0x58);
      if (((uVar3 & 0x70000) != 0) &&
         (((uVar3 >> 0x12 & 1) != 0 && (iVar6 = iVar6 + 1, fStack_4 < *(float *)(iVar2 + 4))))) {
        fStack_4 = *(float *)(iVar2 + 4);
        iVar5 = iVar2;
      }
      piVar4 = piVar1;
    } while (piVar1 != (int *)0x0);
    if ((iVar5 != 0) && (DAT_00b38280 < iVar6)) {
      FUN_0068ea10(0);
    }
  }
  return;
}



undefined4 FUN_006a5c00(undefined4 param_1,undefined4 param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_006a5a10(DAT_00b3c0e4,param_1);
  fVar2 = (float10)FUN_006a5a10(DAT_00b3c0e4,param_2);
  if ((float)fVar2 == (float)fVar1) {
    return 0;
  }
  if ((float)fVar1 < (float)fVar2) {
    return 1;
  }
  return 0xffffffff;
}



void FUN_006a5c60(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined **ppuVar8;
  undefined4 uVar9;
  undefined **ppuVar10;
  undefined4 uVar11;
  undefined4 local_1c [4];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c6170;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x20) != 0) {
    iVar3 = FUN_006a1d70(uVar2);
    if (iVar3 != 0) {
      iVar4 = FUN_009832e6(*(undefined4 *)(in_ECX + 0x38),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b07884,0);
      if (iVar4 == 0) {
        iVar4 = FUN_009832e6(*(undefined4 *)(in_ECX + 0x38),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03248,0)
        ;
      }
      else {
        FUN_00469690();
        puVar6 = local_1c;
        uVar9 = 1;
        local_4 = 0;
        uVar5 = FUN_005e1fd0(1,puVar6);
        FUN_0046cde0(uVar5,uVar9,puVar6);
        uVar11 = 0;
        ppuVar10 = &PTR_PTR_00b03248;
        ppuVar8 = &PTR_PTR_00b03268;
        uVar9 = 0;
        uVar5 = FUN_00469c70(0);
        iVar4 = FUN_009832e6(uVar5,uVar9,ppuVar8,ppuVar10,uVar11);
        local_4 = 0xffffffff;
        FUN_0046a010();
      }
      if (iVar4 == 0) {
        puVar6 = (undefined4 *)FUN_004134c0(local_1c);
        local_4 = 1;
        FUN_004a7a60("%s effect has no associated creature.",*puVar6,puVar6[1]);
        FUN_00401f20(local_1c[0]);
      }
      else {
        uVar11 = 0;
        uVar5 = FUN_004d6670(0);
        uVar9 = FUN_006ecc80(uVar5);
        piVar7 = (int *)FUN_0044a7d0(iVar4,(undefined4 *)(in_ECX + 0x48),in_ECX + 0x54,uVar9,uVar5,
                                     uVar11);
        if (piVar7 != (int *)0x0) {
          cVar1 = (**(code **)(*piVar7 + 400))();
          if (cVar1 == '\0') {
            uVar5 = FUN_004da2a0();
            FUN_004a7a60("%s summoned a non-actor.",uVar5);
            thunk_FUN_0046a9e0(1);
          }
          else {
            *(int **)(in_ECX + 0x3c) = piVar7;
            FUN_004d8a30(*(undefined4 *)(in_ECX + 0x48),*(undefined4 *)(in_ECX + 0x4c),
                         *(undefined4 *)(in_ECX + 0x50));
            (**(code **)(**(int **)(in_ECX + 0x3c) + 0x178))(0);
            (**(code **)(**(int **)(in_ECX + 0x3c) + 0x1c4))();
            FUN_00692430(*(undefined4 *)(in_ECX + 0x3c),iVar3);
            (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x4e8))(1);
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006a5e50(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if (((*(int *)(in_ECX + 0x20) == 0) || (iVar2 = FUN_006a1d70(), iVar2 == 0)) ||
     ((*(char *)(in_ECX + 0x60) != '\0' &&
      ((*(int **)(in_ECX + 0x3c) == (int *)0x0 ||
       (cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x198))(0), cVar1 != '\0')))))) {
    FUN_0068ea10(0);
    return;
  }
  if ((*(float *)(in_ECX + 0x44) < *(float *)(in_ECX + 4) !=
       (*(float *)(in_ECX + 0x44) == *(float *)(in_ECX + 4))) && (*(char *)(in_ECX + 0x60) == '\0'))
  {
    FUN_006a5c60(iVar2);
    if (iVar2 == DAT_00b333c4) {
      FUN_006a5b70();
    }
    *(undefined1 *)(in_ECX + 0x60) = 1;
  }
  if (*(int **)(in_ECX + 0x3c) == (int *)0x0) {
    return;
  }
  cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x198))(0);
  if (cVar1 != '\0') {
    return;
  }
  FUN_006925c0(*(undefined4 *)(in_ECX + 0x3c),iVar2);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_006a5ef0(undefined4 param_1,float *param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  undefined4 uVar8;
  undefined1 auStack_4c4 [8];
  float local_4bc;
  float local_4b8;
  float local_4b4;
  int *local_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float local_4a4;
  int *local_498;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  float fStack_484;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 uStack_474;
  int iStack_46c;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  float local_420;
  float local_41c;
  float local_418;
  float local_410;
  float local_40c;
  float local_408;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined1 auStack_3f0 [32];
  undefined1 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3ac;
  int iStack_3a0;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined **local_370;
  undefined4 local_36c;
  undefined1 *local_360;
  int local_35c;
  undefined4 local_358;
  undefined1 local_350 [384];
  undefined **local_1d0;
  undefined4 local_1cc;
  undefined1 *local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b0 [396];
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009c61ca;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_4c4;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffb30;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (*(int *)(in_ECX + 0x20) == 0) {
    local_4b0 = (int *)0x0;
  }
  else {
    local_4b0 = (int *)FUN_006a1d70(uVar3);
  }
  uVar4 = FUN_009832e6(*(undefined4 *)(in_ECX + 0x38),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03248,0);
  fVar7 = (float10)FUN_0046d5c0(uVar4);
  local_4b8 = (float)fVar7;
  if (local_4b8 < 64.0) {
    local_4b8 = 64.0;
  }
  local_4b4 = (float)FUN_00401f00(0x14);
  local_14 = 0;
  if (local_4b4 == 0.0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    local_4bc = local_4b8 * 0.5;
    puVar5 = (undefined4 *)FUN_00532090(local_4bc,1);
  }
  FUN_00532250();
  local_14 = 1;
  local_480 = 0x1b;
  if (puVar5 == (undefined4 *)0x0) {
    local_47c = 0;
  }
  else {
    local_47c = puVar5[2];
  }
  local_45c = 0;
  local_458 = 0;
  local_454 = 0;
  local_450 = 0;
  local_448 = 0;
  local_444 = 0;
  local_440 = 0;
  local_43c = 0;
  local_434 = 0;
  local_460 = 0x3f800000;
  local_44c = 0x3f800000;
  local_438 = 0x3f800000;
  local_430 = 0;
  local_42c = 0;
  local_428 = 0;
  local_424 = 0;
  FUN_00531fc0(&local_480);
  local_14 = CONCAT31(local_14._1_3_,2);
  iVar6 = FUN_006ecc80();
  if (iVar6 != 0) {
    FUN_006ecc80();
    cVar2 = FUN_004c97f0();
    uVar4 = DAT_00b35c24;
    if (cVar2 != '\0') {
      uVar4 = FUN_00424180();
    }
    FUN_0089f470(uVar4);
  }
  local_360 = local_350;
  local_36c = 0x7f7fffff;
  local_370 = &PTR_FUN_00a55dec;
  local_358 = 0x80000008;
  local_35c = 0;
  local_1cc = 0x7f7fffff;
  local_1d0 = &PTR_FUN_00a55dec;
  local_1c0 = local_1b0;
  local_1b8 = 0x80000008;
  local_1bc = 0;
  local_400 = 0x34000000;
  local_3fc = 0x34000000;
  local_14 = CONCAT31(local_14._1_3_,4);
  local_4a4 = local_4b8 * 0.5 + 10.0;
  local_4b4 = *param_2 + 0.0;
  local_4bc = param_2[1] + 0.0;
  local_420 = local_4b4 * 0.14287673;
  local_41c = local_4bc * 0.14287673;
  local_418 = (local_4a4 + param_2[2]) * 0.14287673;
  local_4b8 = local_4a4 + param_2[2];
  local_410 = local_4b4 * 0.14287673;
  local_40c = local_4bc * 0.14287673;
  local_408 = local_4b8 * 0.14287673;
  if (local_498 != (int *)0x0) {
    FUN_0089f570();
    (**(code **)(*local_498 + 0x30))(&local_420,&local_410,&local_1d0,&local_370);
    FUN_0089f570();
  }
  if (local_35c < 1) {
    FUN_008aeca0();
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
    piVar1 = local_4b0;
    uVar8 = 0;
    uVar4 = FUN_006ecc80(0);
    cVar2 = FUN_005e06c0(param_2,uVar4,uVar8);
    if (cVar2 == '\0') {
      uStack_3ac = 0x3f800000;
      uStack_3d0 = 0;
      iStack_3a0 = 0;
      uStack_380 = 0;
      uStack_37c = 0;
      uStack_378 = 0;
      uStack_390 = DAT_00ba7a40;
      uStack_38c = DAT_00ba7a44;
      uStack_388 = DAT_00ba7a48;
      uStack_384 = uRam00ba7a4c;
      uStack_3cc = 0x1b;
      puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x174))();
      uStack_48c = *puVar5;
      uStack_488 = puVar5[1];
      fStack_484 = (float)puVar5[2] + 64.0;
      fStack_4ac = *param_2;
      local_4a4 = param_2[2] + 64.0;
      fStack_4a8 = param_2[1];
      FUN_004f8840(&uStack_48c);
      FUN_004f90c0(&fStack_4ac);
      FUN_00446a10(auStack_3f0);
      local_14._0_1_ = 3;
      if (iStack_3a0 == 0) {
        FUN_005322e0();
        local_14._0_1_ = 2;
        FUN_005322e0();
        local_14 = CONCAT31(local_14._1_3_,1);
        FUN_008aefb0();
        local_14 = 0xffffffff;
        FUN_008a5090();
        uVar4 = 1;
        goto LAB_006a649d;
      }
    }
    else {
    }
    local_14._0_1_ = 3;
    FUN_005322e0();
    local_14._0_1_ = 2;
    FUN_005322e0();
    local_14 = CONCAT31(local_14._1_3_,1);
    FUN_008aefb0();
    local_14 = 0xffffffff;
    FUN_008a5090();
    uVar4 = 0;
  }
  else {
    FUN_008aeca0();
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
    local_14._0_1_ = 3;
    FUN_005322e0();
    local_14._0_1_ = 2;
    FUN_005322e0();
    local_14 = CONCAT31(local_14._1_3_,1);
    FUN_008aefb0();
    local_14 = 0xffffffff;
    if (-1 < iStack_46c) {
      FUN_008a75d0(uStack_474,iStack_46c * 8,0x14);
    }
    uVar4 = 0;
  }
LAB_006a649d:
  *unaff_FS_OFFSET = local_1c;
  return uVar4;
}



undefined4 FUN_006a64d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  void *pvVar1;
  char cVar2;
  size_t _NumOfElements;
  void *pvVar3;
  int iVar4;
  void *local_8 [2];
  
  local_8[0] = (void *)0x0;
  _NumOfElements = FUN_006a5510(local_8,param_1,param_2);
  pvVar1 = local_8[0];
  if (((int)_NumOfElements < 1) || (local_8[0] == (void *)0x0)) {
    return 0;
  }
  DAT_00b3c0e4 = param_1;
  _qsort(local_8[0],_NumOfElements,0xc,FUN_006a5c00);
  iVar4 = 0;
  pvVar3 = pvVar1;
  if (0 < (int)_NumOfElements) {
    do {
      cVar2 = FUN_006a5ef0(param_2,pvVar3);
      if (cVar2 != '\0') {
        if (iVar4 < (int)_NumOfElements) {
          *param_3 = *(undefined4 *)((int)pvVar1 + iVar4 * 0xc);
          param_3[1] = *(undefined4 *)((int)pvVar1 + iVar4 * 0xc + 4);
          param_3[2] = *(undefined4 *)((int)pvVar1 + iVar4 * 0xc + 8);
          FUN_00401f20(pvVar1);
          return 1;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      pvVar3 = (void *)((int)pvVar3 + 0xc);
    } while (iVar4 < (int)_NumOfElements);
  }
  FUN_00401f20(pvVar1);
  return 0;
}



void FUN_006a65b0(void)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c26db;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x20) != 0) {
    piVar3 = (int *)FUN_006a1d70(uVar2);
    if (piVar3 != (int *)0x0) {
      *(int *)(in_ECX + 0x54) = piVar3[8];
      *(int *)(in_ECX + 0x58) = piVar3[9];
      *(int *)(in_ECX + 0x5c) = piVar3[10];
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x174))();
      *(undefined4 *)(in_ECX + 0x48) = *puVar4;
      *(undefined4 *)(in_ECX + 0x4c) = puVar4[1];
      *(undefined4 *)(in_ECX + 0x50) = puVar4[2];
      cVar1 = FUN_006a64d0(piVar3,*(undefined4 *)(in_ECX + 0x3c),&fStack_18);
      if (cVar1 != '\0') {
        *(float *)(in_ECX + 0x48) = fStack_18;
        *(float *)(in_ECX + 0x4c) = fStack_14;
        *(undefined4 *)(in_ECX + 0x50) = uStack_10;
      }
      fVar9 = (float10)FUN_00986000();
      fVar10 = (float10)FUN_00986300();
      fStack_18 = -(float)fVar10 * 64.0;
      fStack_14 = (float)fVar9 * 64.0;
      uStack_10 = 0;
      FUN_006ecc80();
      uVar5 = FUN_004c9be0(piVar3);
      uVar18 = 3;
      FUN_006ecc80(uVar5,3);
      uVar5 = FUN_00441800(uVar5,uVar18);
      iVar6 = FUN_00401f00(0x20);
      uStack_4 = 0;
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        uVar18 = *(undefined4 *)(in_ECX + 0x48);
        uVar19 = 0;
        uVar17 = 0x3f800000;
        uVar15 = *(undefined4 *)(in_ECX + 0x4c);
        uVar16 = *(undefined4 *)(in_ECX + 0x50);
        fVar12 = fStack_18;
        fVar13 = fStack_14;
        uVar14 = uStack_10;
        uVar7 = (**(code **)(*(int *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x18) + 0x14))
                          (fStack_18,fStack_14,uStack_10,uVar18,uVar15,uVar16,0x3f800000,0);
        uVar11 = 0x3f800000;
        uVar8 = FUN_006ecc80(0x3f800000,uVar5,uVar7);
        iVar6 = FUN_005713f0(uVar8,uVar11,uVar5,uVar7,fVar12,fVar13,uVar14,uVar18,uVar15,uVar16,
                             uVar17,uVar19);
      }
      uStack_4 = 0xffffffff;
      FUN_00570c00("SpecialIdle_SummonEffect");
      FUN_00678d30(iVar6);
      fVar9 = (float10)FUN_00480b00(*(undefined4 *)(iVar6 + 0x18),"SpecialIdle_SummonEffect",
                                    &DAT_00a52608);
      *(float *)(in_ECX + 0x44) = (float)fVar9;
      if ((*(char *)(in_ECX + 0x61) == '\0') && (*(int *)(in_ECX + 8) != 0)) {
        FUN_0041a610(0);
        *(undefined1 *)(in_ECX + 0x61) = 1;
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_006a67e0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x40,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_0068d7a0(in_ECX[9],in_ECX[2],in_ECX[3]);
    puVar2[0xe] = 0;
    *puVar2 = &PTR_FUN_00a76c54;
    *(undefined1 *)((int)puVar2 + 0x3d) = 0;
    *(undefined1 *)(puVar2 + 0xf) = 0;
    puVar3 = puVar2;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  puVar3[0xe] = in_ECX[0xe];
  *(char *)(puVar3 + 0xf) = (char)in_ECX[0xf];
  *(undefined1 *)((int)puVar3 + 0x3d) = *(undefined1 *)((int)in_ECX + 0x3d);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



undefined4 * FUN_006a6890(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x40,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0068d7a0(param_1,param_2,param_3);
    puVar2[0xe] = 0;
    *puVar2 = &PTR_FUN_00a76c54;
    *(undefined1 *)((int)puVar2 + 0x3d) = 0;
    *(undefined1 *)(puVar2 + 0xf) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006a6920(char param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int iVar7;
  undefined4 uVar8;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c620b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar7 = *(int *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x78);
  if (((iVar7 != 0) && (*(int *)(in_ECX + 0x20) != 0)) && (*(int *)(in_ECX + 0x28) == 4)) {
    if (param_1 == '\0') {
      piVar5 = *(int **)(in_ECX + 0x34);
      if (piVar5 != (int *)0x0) {
        do {
          if ((piVar5[1] == 0) && (*piVar5 == 0)) break;
          iVar3 = *piVar5;
          *(undefined1 *)(iVar3 + 0x24) = 1;
          *(undefined4 *)(iVar3 + 0x18) = 0;
          piVar5 = (int *)piVar5[1];
        } while (piVar5 != (int *)0x0);
        FUN_004526e0(uVar2);
        FUN_00401f20(*(undefined4 *)(in_ECX + 0x34));
        *(undefined4 *)(in_ECX + 0x34) = 0;
        uVar4 = (**(code **)(**(int **)(in_ECX + 0x20) + 4))(iVar7);
        FUN_00678e70(uVar4,iVar7);
      }
    }
    else {
      iVar3 = *(int *)(in_ECX + 0x34);
      if (iVar3 != 0) {
        cVar1 = FUN_0046cb60();
        if (cVar1 == '\0') goto LAB_006a6a85;
        if (iVar3 != 0) {
          FUN_004526e0();
          FUN_00401f20(*(undefined4 *)(in_ECX + 0x34));
          *(undefined4 *)(in_ECX + 0x34) = 0;
        }
      }
      iVar3 = FUN_00401f00(0x4c);
      local_4 = 0;
      if (iVar3 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        uVar8 = 0xbf800000;
        uVar4 = (**(code **)(**(int **)(in_ECX + 0x20) + 4))(iVar7,0xbf800000);
        piVar5 = (int *)FUN_006a0980(uVar4,iVar7,uVar8);
      }
      local_4 = 0xffffffff;
      cVar1 = (**(code **)(*piVar5 + 0x68))();
      if (cVar1 == '\0') {
        (**(code **)*piVar5)(1);
      }
      else {
        FUN_00678d30(piVar5);
        puVar6 = (undefined4 *)FUN_00401f00(8);
        if (puVar6 == (undefined4 *)0x0) {
          *(undefined4 *)(in_ECX + 0x34) = 0;
          piVar5[6] = in_ECX;
        }
        else {
          *puVar6 = piVar5;
          puVar6[1] = 0;
          *(undefined4 **)(in_ECX + 0x34) = puVar6;
          piVar5[6] = in_ECX;
        }
      }
    }
  }
LAB_006a6a85:
  *unaff_FS_OFFSET = local_c;
  return;
}



float10 FUN_006a6af0(void)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float fStack_1c;
  undefined4 uStack_18;
  
  if ((*(int **)(in_ECX + 0x20) != (int *)0x0) &&
     (piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 4))(), piVar3 != (int *)0x0)) {
    iVar4 = FUN_006ecc80();
    cVar2 = FUN_004d8b90();
    if ((cVar2 == '\0') || ((iVar4 != 0 && (cVar2 = FUN_004c9820(), cVar2 != '\0')))) {
      iVar4 = *(int *)(DAT_00b333a0 + 0x5c);
      uVar1 = *(undefined4 *)(iVar4 + 0xd0);
      fVar5 = (float10)FUN_00499140();
      fVar6 = (float10)FUN_00499200();
      if (*(int *)(iVar4 + 0x10) == 0) {
        fStack_1c = 0.0;
      }
      else {
        fStack_1c = (float)*(byte *)(*(int *)(iVar4 + 0x10) + 0x4d) * 0.003921569 * 1.0 + 0.0;
      }
      if (*(int *)(iVar4 + 0x14) != 0) {
        fStack_1c = ((float)*(byte *)(*(int *)(iVar4 + 0x14) + 0x4d) * 0.003921569 * 1.0 + 0.0) *
                    (1.0 - *(float *)(iVar4 + 0xd8)) + *(float *)(iVar4 + 0xd8) * fStack_1c;
      }
      uStack_18 = 0;
      iVar4 = FUN_006ecc80();
      if ((*(byte *)(iVar4 + 0x24) >> 1 & 1) != 0) {
        FUN_006ecc80();
        fVar7 = (float10)FUN_004cace0();
        iVar4 = (**(code **)(*piVar3 + 0x174))();
        if (*(float *)(iVar4 + 8) < (float)fVar7 != (*(float *)(iVar4 + 8) == (float)fVar7)) {
          uStack_18 = 1;
        }
      }
      fVar5 = (float10)FUN_00548ec0(*(undefined4 *)(in_ECX + 0x18),uVar1,(float)fVar5,(float)fVar6,1
                                    ,fStack_1c,uStack_18);
      return fVar5;
    }
  }
  return (float10)0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006a6de0(float param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined2 extraout_var;
  uint3 uVar7;
  int in_ECX;
  float10 fVar8;
  float fVar9;
  float fStack_c;
  
  if (*(char *)(in_ECX + 0x3d) != '\0') {
    *(undefined1 *)(in_ECX + 0x3d) = 0;
    return;
  }
  if (*(int **)(in_ECX + 0x20) == (int *)0x0) {
    return;
  }
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 4))();
  if (iVar3 == 0) {
    return;
  }
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 4))();
  iVar3 = FUN_006ecc80();
  cVar2 = FUN_004d8b90();
  if ((cVar2 != '\0') && ((iVar3 == 0 || (cVar2 = FUN_004c9820(), cVar2 == '\0')))) {
    FUN_006a6920(0);
    if (piVar4 != DAT_00b333c4) {
      return;
    }
    puVar5 = (undefined4 *)FUN_00403c00();
    _DAT_00b15eb0 = (float)*puVar5;
    if (*(float *)(in_ECX + 0x38) <= 1.0) {
      return;
    }
    fVar1 = *(float *)(in_ECX + 0x38);
    pfVar6 = (float *)FUN_00403c00();
    fVar8 = (float10)FUN_004ac790(0x3f800000,fVar1 - *pfVar6 * param_1);
    fVar1 = (float)fVar8;
    *(float *)(in_ECX + 0x38) = fVar1;
    if (DAT_00b43070 != '\0') {
      fVar8 = (float10)FUN_004ac790(0x3f800000,fVar1 / 1.5);
      _DAT_00b2c7a4 = (float)fVar8;
      return;
    }
    FUN_007b4830(DAT_00b06d3c,DAT_00b06d44,_DAT_00b06d4c,fVar1 * _DAT_00b06d5c,fVar1 * _DAT_00b06d64
                 ,DAT_00b06d54);
    return;
  }
  fVar8 = (float10)FUN_006a6af0();
  fVar1 = (float)fVar8;
  uVar7 = (uint3)(CONCAT22(extraout_var,
                           (ushort)(0.01 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 0.01) << 0xe) >> 8);
  if (0.01 < fVar1) {
    iVar3 = CONCAT31(uVar7,1);
  }
  else {
    iVar3 = (uint)uVar7 << 8;
  }
  FUN_006a6920(iVar3);
  if (piVar4 != DAT_00b333c4) {
    return;
  }
  if (fVar1 <= 0.01) goto LAB_006a7029;
  (**(code **)(*DAT_00b333c4 + 0x220))(fVar1 * param_1,0,0);
  if (0.0 <= _DAT_00b15eb0) {
    if (_DAT_00b15eb0 == 3.4028235e+38) goto LAB_006a7006;
  }
  else {
    FUN_005e70f0(1,1);
LAB_006a7006:
    pfVar6 = (float *)FUN_00403c00();
    _DAT_00b15eb0 = *pfVar6;
  }
  _DAT_00b15eb0 = _DAT_00b15eb0 - param_1;
LAB_006a7029:
  fVar8 = (float10)0;
  iVar3 = *(int *)(DAT_00b333a0 + 0x5c);
  if (*(int *)(iVar3 + 0x10) != 0) {
    fVar8 = (float10)FUN_00499100(5,0x3f800000,(float)fVar8);
  }
  fStack_c = (float)fVar8;
  if (*(int *)(iVar3 + 0x14) != 0) {
    fVar1 = *(float *)(iVar3 + 0xd8);
    fVar8 = (float10)FUN_00499100(5,0x3f800000,0);
    fStack_c = (float)(fVar8 * ((float10)1 - (float10)fVar1) +
                      (float10)(float)((float10)fStack_c * (float10)fVar1));
  }
  fVar1 = (_DAT_00b37fb8 - 1.0) * fStack_c + 1.0;
  if (fVar1 <= *(float *)(in_ECX + 0x38)) {
    if (*(float *)(in_ECX + 0x38) <= fVar1) {
      return;
    }
    fVar9 = *(float *)(in_ECX + 0x38);
    pfVar6 = (float *)FUN_00403c00();
    fVar8 = (float10)FUN_004ac790(fVar1,fVar9 - *pfVar6 * param_1);
    fVar1 = (float)fVar8;
    *(float *)(in_ECX + 0x38) = fVar1;
    if (DAT_00b43070 != '\0') {
      fVar8 = (float10)FUN_004ac790(0x3f800000,fVar1 / 1.5);
      _DAT_00b2c7a4 = (float)fVar8;
      return;
    }
    fVar9 = fVar1 * _DAT_00b06d64;
    fVar1 = fVar1 * _DAT_00b06d5c;
  }
  else {
    pfVar6 = (float *)FUN_00403c00();
    fVar8 = (float10)FUN_004ac760(fVar1,param_1 * *pfVar6 + *(float *)(in_ECX + 0x38));
    fVar1 = (float)fVar8;
    *(float *)(in_ECX + 0x38) = fVar1;
    if (DAT_00b43070 != '\0') {
      fVar8 = (float10)FUN_004ac790(0x3f800000,fVar1 / 1.5);
      _DAT_00b2c7a4 = (float)fVar8;
      return;
    }
    fVar9 = fVar1 * _DAT_00b06d64;
    fVar1 = fVar1 * _DAT_00b06d5c;
  }
  FUN_007b4830(DAT_00b06d3c,DAT_00b06d44,_DAT_00b06d4c,fVar1,fVar9,DAT_00b06d54);
  return;
}



void FUN_006a7290(undefined4 param_1)

{
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    FUN_0043f3e0(param_1,*(int *)(in_ECX + 8) + 0x30);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x006a740a) */
/* WARNING: Removing unreachable block (ram,0x006a7418) */
/* WARNING: Removing unreachable block (ram,0x006a741c) */
/* WARNING: Removing unreachable block (ram,0x006a7426) */

void FUN_006a73b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c6243;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006a82f0(param_1,param_2,param_3);
  *in_ECX = &PTR_FUN_00a76c9c;
  in_ECX[0xf] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x10] = 0;
  *(undefined1 *)(in_ECX + 0x13) = 0;
  in_ECX[0x11] = 0;
  *(undefined1 *)((int)in_ECX + 0x4d) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006a7460(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6268;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x3c);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0068d970(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_006a74e0(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
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
  iVar2 = FUN_00401f00(0x50,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_006a73b0(in_ECX[9],in_ECX[2],in_ECX[3]);
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(uVar3);
  *unaff_FS_OFFSET = iVar2;
  return uVar3;
}



void FUN_006a7560(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 auStack_18 [8];
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c62a6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*(int **)(in_ECX + 0x48) != (int *)0x0) && (*(int *)(in_ECX + 0x24) != 0)) {
    iVar3 = (**(code **)(**(int **)(in_ECX + 0x48) + 0x170))(uVar2);
    if (*(char *)(iVar3 + 4) != '\x17') {
      iVar3 = (**(code **)(**(int **)(in_ECX + 0x48) + 0x154))();
      if (iVar3 != 0) {
        iVar4 = FUN_00480340(iVar3);
        if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x10), iVar4 != 0)) {
          FUN_0068fa90(iVar4);
          puVar5 = (undefined4 *)FUN_00497340(&fStack_34);
          if (((byte)*puVar5 & 0x3f) != 4) {
            puVar5 = (undefined4 *)FUN_00497340(&fStack_34);
            if (((byte)*puVar5 & 0x3f) != 5) goto LAB_006a780e;
          }
          fStack_34 = (float)FUN_00401f00(0x1c);
          uStack_4 = 0;
          if (fStack_34 != 0.0) {
            puVar5 = (undefined4 *)FUN_00497340(&fStack_38);
            FUN_0068faf0(*(undefined4 *)(in_ECX + 0x48),iVar4,*puVar5);
          }
          uStack_4 = 0xffffffff;
          iVar3 = FUN_00560920(&DAT_00b35288,iVar3);
          if (iVar3 != 0) {
            FUN_004a01b0(6);
          }
          if (*(int *)(DAT_00b333c4 + 0x574) != 0) {
            FUN_0066a670();
          }
          cVar1 = FUN_0045a500();
          if (cVar1 == '\0') {
            *(undefined4 *)(in_ECX + 0x40) = 0x461c4000;
          }
          FUN_0066d120(*(undefined4 *)(in_ECX + 0x48),3,*(undefined4 *)(in_ECX + 0x40));
          FUN_005f11f0(&fStack_24,auStack_18);
          cVar1 = FUN_0045a500();
          if (cVar1 == '\0') {
            FUN_006a7290(&fStack_30);
            fStack_30 = fStack_30 - fStack_24;
            fStack_38 = fStack_2c - fStack_20;
            fStack_34 = fStack_28 - fStack_1c;
            fStack_2c = fStack_38;
            fStack_28 = fStack_34;
            fVar7 = (float10)FUN_0047d9e0(&fStack_30);
            fStack_34 = (float)fVar7;
            *(float *)(in_ECX + 0x40) = fStack_34;
            *(float *)(DAT_00b333c4 + 0x584) = fStack_34;
            FUN_0069dd70(*(undefined4 *)(in_ECX + 0x40));
          }
          if (*(int *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x78) != 0) {
            fStack_34 = (float)FUN_00401f00(0x4c);
            uStack_4 = 1;
            if (fStack_34 == 0.0) {
              piVar6 = (int *)0x0;
            }
            else {
              piVar6 = (int *)FUN_006a0980(*(undefined4 *)(in_ECX + 0x48),
                                           *(undefined4 *)
                                            (*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x78),
                                           0xbf800000);
            }
            uStack_4 = 0xffffffff;
            cVar1 = (**(code **)(*piVar6 + 0x68))();
            if (cVar1 != '\0') {
              FUN_00678d30(piVar6);
              *unaff_FS_OFFSET = local_c;
              return;
            }
            (**(code **)*piVar6)(1);
            *unaff_FS_OFFSET = iStack_10;
            return;
          }
          goto LAB_006a7817;
        }
      }
    }
  }
LAB_006a780e:
  FUN_0068ea10(0);
LAB_006a7817:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006a7830(void)

{
  int in_ECX;
  int iVar1;
  float10 fVar2;
  undefined1 auStack_68 [4];
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_44;
  float local_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_68;
  if (*(int *)(DAT_00b333c4 + 0x574) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_00b333c4 + 0x574) + 8);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x18);
    }
    FUN_0066a670();
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0xc);
      if (*(char *)(in_ECX + 0x4c) != '\0') {
        local_5c = *(float *)(DAT_00b333c4 + 0x24);
        local_60 = *(float *)(DAT_00b333c4 + 0x20);
        local_58 = *(float *)(DAT_00b333c4 + 0x28);
        FUN_007117c0(local_58,local_60,local_5c);
        local_64 = *(float *)(in_ECX + 0x44) + _DAT_00b38048;
        local_60 = local_64 * local_50;
        local_5c = local_44 * local_64;
        local_58 = local_64 * local_38;
        local_30 = local_60 * 0.14287673;
        fStack_2c = local_5c * 0.14287673;
        fStack_28 = local_58 * 0.14287673;
        if ((iVar1 == 0) || (*(int *)(iVar1 + 8) == 0)) {
          fVar2 = (float10)0;
        }
        else {
          fVar2 = (float10)FUN_0089da90();
        }
        local_64 = (float)fVar2;
        local_30 = local_64 * local_30;
        fStack_2c = local_64 * fStack_2c;
        fStack_28 = local_64 * fStack_28;
        fStack_24 = local_64 * fStack_24;
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(iVar1 + 8);
        }
        FUN_008a6410();
        (**(code **)(**(int **)(iVar1 + 0x50) + 0x5c))(&local_30);
        return;
      }
      FUN_004d9960(&DAT_00b3f9a8);
    }
  }
  return;
}



undefined4 FUN_006a79b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c74db;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&local_10;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = FUN_00401f00(0x50,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006a73b0(param_1,param_2,param_3);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006a7a80(byte param_1)

{
  FUN_006a7460();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006a7aa0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_006a86f0();
  uVar1 = FUN_005795c0();
  *(undefined4 *)(in_ECX + 0x48) = uVar1;
  FUN_006a7560();
  *(undefined1 *)(in_ECX + 0x4d) = 0;
  return;
}



void FUN_006a7ac0(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  undefined4 *puVar9;
  int in_ECX;
  
  FUN_006a8800(param_1);
  iVar7 = *(int *)(DAT_00b333c4 + 0x574);
  if ((iVar7 == 0) || (*(int *)(iVar7 + 8) == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar7 + 8) + 0x18);
  }
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0xc) != 0)) {
    if ((*(int *)(in_ECX + 0x24) == 0) || (iVar5 = FUN_006ecc80(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      (**(code **)(**(int **)(in_ECX + 0x24) + 0x20))();
      FUN_006ecc80();
      cVar4 = FUN_004c97f0();
      iVar5 = DAT_00b35c24;
      if (cVar4 != '\0') {
        iVar5 = FUN_00424180();
      }
    }
    if ((*(int *)(DAT_00b333c4 + 0x578) == 0) || (iVar6 = FUN_006ecc80(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      FUN_006ecc80();
      cVar4 = FUN_004c97f0();
      iVar6 = DAT_00b35c24;
      if (cVar4 != '\0') {
        iVar6 = FUN_00424180();
      }
    }
    if ((((iVar7 != 0) && (*(int *)(in_ECX + 0x48) == *(int *)(DAT_00b333c4 + 0x578))) &&
        (*(int *)(DAT_00b333c4 + 0x57c) == 3)) && (iVar5 == iVar6)) {
      iVar7 = FUN_00403520(6,0);
      if ((iVar7 == 0) || (iVar7 = FUN_00403520(4,0), iVar7 == 0)) {
        iVar7 = FUN_00403520(4,0);
        if (iVar7 == 0) {
          iVar7 = FUN_00403520(6,0);
          if (iVar7 == 0) {
            fVar1 = 0.0;
          }
          else {
            fVar1 = *(float *)(in_ECX + 0x44);
            pfVar8 = (float *)FUN_00403c00();
            if (-*pfVar8 < fVar1) {
              pfVar8 = (float *)FUN_00403c00();
              *(float *)(in_ECX + 0x44) = -*pfVar8;
            }
            fVar1 = *(float *)(in_ECX + 0x44);
            pfVar8 = (float *)FUN_00403c00();
            fVar1 = fVar1 - *pfVar8 * param_1;
            *(float *)(in_ECX + 0x44) = fVar1;
            pfVar8 = (float *)FUN_00403c00();
            if (-*pfVar8 <= fVar1) goto LAB_006a7d77;
            pfVar8 = (float *)FUN_00403c00();
            fVar1 = -*pfVar8;
          }
        }
        else {
          fVar1 = *(float *)(in_ECX + 0x44);
          pfVar8 = (float *)FUN_00403c00();
          if (fVar1 < *pfVar8) {
            puVar9 = (undefined4 *)FUN_00403c00();
            *(undefined4 *)(in_ECX + 0x44) = *puVar9;
          }
          pfVar8 = (float *)FUN_00403c00();
          fVar1 = *pfVar8 * param_1 + *(float *)(in_ECX + 0x44);
          *(float *)(in_ECX + 0x44) = fVar1;
          pfVar8 = (float *)FUN_00403c00();
          if (fVar1 <= *pfVar8) goto LAB_006a7d77;
          pfVar8 = (float *)FUN_00403c00();
          fVar1 = *pfVar8;
        }
        *(float *)(in_ECX + 0x44) = fVar1;
      }
      else {
        fVar1 = *(float *)(in_ECX + 0x44);
        pfVar8 = (float *)FUN_00403c00();
        fVar2 = *pfVar8;
        pfVar8 = (float *)FUN_00403c00();
        if (*pfVar8 + fVar2 * 0.1 < fVar1) {
          *(undefined1 *)(in_ECX + 0x4c) = 1;
        }
        FUN_0068ea10(0);
      }
LAB_006a7d77:
      fVar1 = *(float *)(in_ECX + 0x44) * param_1 + *(float *)(DAT_00b333c4 + 0x584);
      *(float *)(in_ECX + 0x40) = fVar1;
      pfVar8 = (float *)FUN_00403c00();
      if (fVar1 < *pfVar8) {
        puVar9 = (undefined4 *)FUN_00403c00();
        *(undefined4 *)(in_ECX + 0x40) = *puVar9;
      }
      fVar1 = *(float *)(in_ECX + 0x18);
      fVar2 = *(float *)(in_ECX + 0x40);
      pfVar8 = (float *)FUN_00403c00();
      fVar3 = *pfVar8;
      pfVar8 = (float *)FUN_00403c00();
      if (*pfVar8 * fVar3 * fVar1 < fVar2) {
        fVar1 = *(float *)(in_ECX + 0x18);
        pfVar8 = (float *)FUN_00403c00();
        fVar2 = *pfVar8;
        pfVar8 = (float *)FUN_00403c00();
        *(float *)(in_ECX + 0x40) = *pfVar8 * fVar1 * fVar2;
      }
      *(undefined4 *)(DAT_00b333c4 + 0x584) = *(undefined4 *)(in_ECX + 0x40);
      if (*(char *)(in_ECX + 0x4d) == '\0') {
        FUN_0066d930(param_1);
      }
      *(undefined1 *)(in_ECX + 0x4d) = 0;
      return;
    }
  }
  FUN_0068ea10(0);
  return;
}



void FUN_006a7e70(void)

{
  int in_ECX;
  
  FUN_006a7830();
  FUN_00678e70(*(undefined4 *)(in_ECX + 0x48),
               *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x78));
  FUN_006a88d0();
  return;
}



undefined4 * FUN_006a7ea0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_0068d7a0(in_ECX[9],in_ECX[2],in_ECX[3]);
    *puVar2 = &PTR_FUN_00a76cec;
    *(undefined1 *)(puVar2 + 0xe) = 0;
    puVar3 = puVar2;
  }
  *(char *)(puVar3 + 0xe) = (char)in_ECX[0xe];
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



undefined4 * FUN_006a7f30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0068d7a0(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a76cec;
    *(undefined1 *)(puVar2 + 0xe) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 FUN_006a8010(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  
  if (param_1 != 0) {
    piVar3 = (int *)FUN_006a1d70();
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x198))(0);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*piVar3 + 0x1f8))();
        if (cVar1 == '\0') {
          uVar2 = FUN_005e1fd0(*(undefined4 *)(in_ECX + 0x18));
          cVar1 = FUN_00549020(uVar2);
          if (cVar1 != '\0') {
            iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b03818,&PTR_PTR_00b10a1c,0);
            if (iVar4 == 0) {
              iVar4 = FUN_005e0dc0();
              if (iVar4 == 4) {
                return 1;
              }
            }
            else {
              iVar4 = FUN_005e02e0(0);
              if (*(char *)(iVar4 + 0x104) == '\x02') {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



void FUN_006a80d0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined4 uVar4;
  
  if (*(int *)(in_ECX + 0x20) == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_006a1d70();
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00699050();
  }
  if ((piVar1 != (int *)0x0) && (iVar2 != 0)) {
    iVar3 = (**(code **)(*piVar1 + 0x330))();
    if (iVar3 != 0) {
      uVar4 = 0;
      (**(code **)(*piVar1 + 0x330))(iVar2,0);
      FUN_006210d0(iVar2,uVar4);
      *(undefined1 *)(in_ECX + 0x38) = 1;
    }
  }
  return;
}



void FUN_006a81b0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  FUN_0068d8a0(param_1);
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b14914,&PTR_PTR_00b14fd4,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(in_ECX + 0x38);
  }
  return;
}



float10 FUN_006a8220(float param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  float10 fVar5;
  
  uVar1 = (**(code **)(*in_ECX + 0x44))();
  if ((((uVar1 < 8) || (iVar2 = (**(code **)(*in_ECX + 0x44))(), iVar2 - 8U < 4)) ||
      (iVar2 = (**(code **)(*in_ECX + 0x44))(), iVar2 - 0xcU < 0x15)) &&
     (((iVar2 = (**(code **)(*in_ECX + 0x44))(), iVar2 != 10 &&
       (*(int *)(*(int *)(in_ECX[3] + 0x1c) + 0x98) != 0x45484241)) && (param_1 <= 0.0)))) {
    if (in_ECX[8] == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_006a1d70();
    }
    iVar2 = *piVar3;
    uVar4 = (**(code **)(*in_ECX + 0x44))();
    fVar5 = (float10)(**(code **)(iVar2 + 0x288))(uVar4);
    fVar5 = (float10)(float)((float10)param_1 + fVar5);
    if (fVar5 < (float10)0) {
      return (float10)(float)((float10)param_1 - fVar5);
    }
  }
  return (float10)param_1;
}



void FUN_006a82f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_ECX;
  
  FUN_0068d7a0(param_1,param_2,param_3);
  *in_ECX = &PTR_FUN_00a76d34;
  if ((*(byte *)(*(int *)(param_3 + 0x1c) + 0x5b) & 1) == 0) {
    in_ECX[0xe] = *(undefined4 *)(param_3 + 0x14);
  }
  else {
    in_ECX[0xe] = *(undefined4 *)(*(int *)(param_3 + 0x1c) + 0x60);
  }
  if ((*(uint *)(*(int *)(param_3 + 0x1c) + 0x58) >> 8 & 1) != 0) {
    in_ECX[6] = 0x3f800000;
  }
  return;
}



undefined4 FUN_006a8350(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
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
  iVar2 = FUN_00401f00(0x3c,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_006a82f0(in_ECX[9],in_ECX[2],in_ECX[3]);
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(uVar3);
  *unaff_FS_OFFSET = iVar2;
  return uVar3;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006a83d0(void)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  char acStack_cc [200];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)acStack_cc;
  if (DAT_00b333c4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_00b333c4 + 0x68;
  }
  if (((*(int *)(in_ECX + 0x20) == iVar4) &&
      (((uVar1 = *(uint *)(*(int *)(in_ECX + 0xc) + 0x14), uVar1 < 8 || (uVar1 - 0xc < 0x15)) &&
       (cVar3 = FUN_00413470(), cVar3 != '\0')))) &&
     ((iVar4 = (**(code **)(**(int **)(in_ECX + 8) + 0x18))(), iVar4 != 4 &&
      (iVar4 = *(int *)(*(int *)(in_ECX + 0xc) + 0x1c), (*(uint *)(iVar4 + 0x58) >> 2 & 1) != 0))))
  {
    if (((*(uint *)(iVar4 + 0x58) >> 1 & 1) != 0) ||
       (cVar3 = FUN_0068d9f0(), uVar5 = DAT_00b38e00, cVar3 != '\0')) {
      uVar5 = DAT_00b38e08;
    }
    uVar2 = DAT_00b38d28;
    uVar5 = FUN_00565cc0(*(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x14),uVar5);
    _sprintf(acStack_cc,"%s %s %s",uVar2,uVar5);
    FUN_0057acc0(acStack_cc,0,1,0x40400000);
  }
  return;
}



void FUN_006a84d0(int *param_1,float param_2)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  float10 fVar3;
  float10 fVar4;
  
  if (param_1 != (int *)0x0) {
    cVar1 = FUN_005e04e0();
    if (((cVar1 != '\0') && (*(int *)(in_ECX + 0x28) == 4)) &&
       ((*(uint *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x58) >> 1 & 1) != 0)) {
      (**(code **)(*param_1 + 0x2ac))(*(undefined4 *)(in_ECX + 0x38),param_2);
      return;
    }
    if (*(int *)(in_ECX + 0x24) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00699050();
    }
    if ((*(int *)(*(int *)(in_ECX + 0xc) + 0x10) == 0) || (cVar1 = FUN_00413470(), cVar1 == '\0')) {
      uVar2 = 0;
    }
    if ((*(uint *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x58) >> 1 & 1) != 0) {
      (**(code **)(*param_1 + 0x294))(*(undefined4 *)(in_ECX + 0x38),param_2,uVar2);
      return;
    }
    fVar3 = (float10)param_2;
    if ((fVar3 < (float10)0) && (*(int *)(in_ECX + 0x38) != 10)) {
      fVar4 = (float10)(**(code **)(*param_1 + 0x288))(*(int *)(in_ECX + 0x38));
      fVar3 = (float10)param_2;
      if ((float10)(float)(fVar3 + fVar4) < (float10)0) {
        fVar3 = (float10)(float)(fVar3 - (float10)(float)(fVar3 + fVar4));
      }
    }
    (**(code **)(*param_1 + 0x2a4))(*(undefined4 *)(in_ECX + 0x38),(float)fVar3,uVar2);
  }
  return;
}



void FUN_006a8620(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *in_ECX;
  
  FUN_0068e600(param_1);
  if ((((0x5e < *(byte *)(DAT_00b33b00 + 0x7c)) && (*(byte *)(DAT_00b33b00 + 0x7c) < 0x62)) &&
      (in_ECX[8] != 0)) &&
     (((piVar3 = (int *)FUN_006a1d70(), piVar3 != (int *)0x0 &&
       (cVar2 = FUN_005e04e0(), cVar2 != '\0')) &&
      ((cVar2 = FUN_0068d9f0(), cVar2 != '\0' &&
       ((*(uint *)(*(int *)(in_ECX[3] + 0x1c) + 0x58) >> 1 & 1) != 0)))))) {
    if (in_ECX[9] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00699050();
    }
    iVar1 = *piVar3;
    uVar5 = (**(code **)(*in_ECX + 0x44))(-(float)in_ECX[6]);
    (**(code **)(iVar1 + 0x2ac))(uVar5);
    iVar1 = *piVar3;
    uVar4 = (**(code **)(*in_ECX + 0x44))(in_ECX[6],uVar4);
    (**(code **)(iVar1 + 0x294))(uVar4);
  }
  return;
}



void FUN_006a86f0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  float10 fVar5;
  
  if (in_ECX[8] == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_006a1d70();
  }
  if (((*(uint *)(*(int *)(in_ECX[3] + 0x1c) + 0x58) >> 2 & 1) != 0) &&
     (in_ECX[6] = (int)-(float)in_ECX[6], piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*in_ECX + 0x44))();
    if ((iVar3 == 8) && (*(int *)(in_ECX[3] + 0x10) != 0)) {
      if (in_ECX[9] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00699050();
      }
      fVar5 = (float10)FUN_005e2560(in_ECX[6],uVar4);
      in_ECX[6] = (int)(float)fVar5;
    }
  }
  if ((*(uint *)(*(int *)(in_ECX[3] + 0x1c) + 0x58) >> 1 & 1) == 0) {
    iVar3 = FUN_004133c0();
    if (iVar3 != 0) goto LAB_006a87f0;
    cVar1 = FUN_0068d9f0();
    if (cVar1 != '\0') goto LAB_006a87f0;
  }
  fVar5 = (float10)FUN_006a8220(in_ECX[6]);
  in_ECX[6] = (int)(float)fVar5;
  FUN_006a84d0(piVar2,(float)fVar5);
  if ((in_ECX[0xe] == 5) && ((float)in_ECX[6] < 0.0)) {
    fVar5 = (float10)(**(code **)(*piVar2 + 0x288))(8);
    if (fVar5 < (float10)1.0 != (fVar5 == (float10)1.0)) {
      if (in_ECX[9] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00699050();
      }
      FUN_006005f0(uVar4,0);
    }
  }
LAB_006a87f0:
  FUN_006a83d0();
  return;
}



void FUN_006a8800(float param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  float10 fVar4;
  
  if ((*(uint *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x58) >> 1 & 1) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_006a1d70();
    }
    cVar1 = FUN_0068d9f0();
    if ((((cVar1 != '\0') || (0.0 < *(float *)(in_ECX + 0x1c))) || (*(int *)(in_ECX + 0x28) == 4))
       && (((FUN_006a84d0(piVar2,*(float *)(in_ECX + 0x18) * param_1), *(int *)(in_ECX + 0x38) == 5
            && (*(float *)(in_ECX + 0x18) < 0.0)) &&
           (fVar4 = (float10)(**(code **)(*piVar2 + 0x288))(8),
           fVar4 < (float10)1.0 != (fVar4 == (float10)1.0))))) {
      if (*(int *)(in_ECX + 0x24) != 0) {
        uVar3 = FUN_00699050();
        FUN_006005f0(uVar3,0);
        return;
      }
      FUN_006005f0(0,0);
    }
  }
  return;
}



void FUN_006a88d0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  float10 fVar5;
  float10 fVar6;
  float local_4;
  
  if ((*(uint *)(*(int *)(in_ECX[3] + 0x1c) + 0x58) >> 1 & 1) != 0) {
    if (in_ECX[8] == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_006a1d70();
    }
    if (0.0 < (float)in_ECX[6]) {
      fVar5 = (float10)FUN_006a8220(-(float)in_ECX[6]);
      local_4 = (float)(fVar5 + (float10)(float)in_ECX[6]);
      iVar3 = (**(code **)(*in_ECX + 0x44))();
      if (iVar3 == 8) {
        fVar5 = (float10)FUN_004d7570();
        fVar5 = (float10)local_4 + fVar5;
        fVar6 = (float10)(float)in_ECX[6] + (float10)1;
        if (fVar5 < fVar6 != (fVar5 == fVar6)) {
          local_4 = (float)((float10)local_4 + (float10)1);
        }
      }
      if (in_ECX[9] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00699050();
      }
      (**(code **)(*piVar2 + 0x2a4))(in_ECX[0xe],local_4,uVar4);
    }
    FUN_006a84d0(piVar2,-(float)in_ECX[6]);
    cVar1 = (**(code **)(*piVar2 + 0x198))(0);
    if ((cVar1 != '\0') && ((in_ECX[0xe] == 8 || (in_ECX[0xe] == 5)))) {
      iVar3 = (**(code **)(*piVar2 + 0x284))(8);
      if (0.0 < (float)iVar3) {
        (**(code **)(*piVar2 + 0x2a4))(8,-(float)iVar3,0);
        return;
      }
    }
  }
  return;
}



undefined4 * FUN_006a8a00(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_0068d7a0(in_ECX[9],in_ECX[2],in_ECX[3]);
    *puVar2 = &PTR_FUN_00a76d84;
    puVar3 = puVar2;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(puVar3);
  *unaff_FS_OFFSET = (int)puVar2;
  return puVar3;
}



undefined4 * FUN_006a8ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0068d7a0(param_1,param_2,param_3);
    *puVar2 = &PTR_FUN_00a76d84;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_006a8c70(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  FUN_0068dc90(param_1);
  piVar2 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b03070,&PTR_PTR_00b05940,0);
  if ((piVar2 != (int *)0x0) && ((int *)piVar2[0x16] != (int *)0x0)) {
    cVar1 = (**(code **)(*(int *)piVar2[0x16] + 800))();
    if (cVar1 != '\0') {
      iVar3 = (**(code **)(*piVar2 + 0x154))();
      if (iVar3 != 0) {
        FUN_0060e2e0(*(undefined4 *)(in_ECX + 0x18));
      }
      (**(code **)(*(int *)piVar2[0x16] + 0x5c))();
      DAT_00b33d80 = 1;
      (**(code **)(*(int *)piVar2[0x16] + 0x318))(param_1);
      DAT_00b33d80 = 0;
    }
  }
  return;
}



void FUN_006a8d00(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int *piVar3;
  undefined1 local_4 [4];
  
  piVar2 = *(int **)(in_ECX + 0x70);
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)&DAT_00a78fa4;
    iVar1 = (**(code **)*piVar2)(piVar2,&DAT_00a78fa4,local_4);
    if ((-1 < iVar1) && (piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 0x20))(piVar3);
      (**(code **)(*piVar2 + 8))(piVar2);
      *(uint *)(in_ECX + 0xdc) = *(uint *)(in_ECX + 0xdc) | 4;
    }
  }
  return;
}



void FUN_006a8d50(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int *piVar3;
  undefined1 local_4 [4];
  
  if ((*(uint *)(in_ECX + 0xdc) & 2) == 0) {
    *(uint *)(in_ECX + 0xdc) = *(uint *)(in_ECX + 0xdc) & 0xfffffffb;
    return;
  }
  piVar2 = *(int **)(in_ECX + 0x70);
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)&DAT_00a78fa4;
    iVar1 = (**(code **)*piVar2)(piVar2,&DAT_00a78fa4,local_4);
    if (-1 < iVar1) {
      (**(code **)(*piVar3 + 0x1c))(piVar3);
      (**(code **)(*piVar2 + 8))(piVar2);
      *(uint *)(in_ECX + 0xdc) = *(uint *)(in_ECX + 0xdc) & 0xfffffffb;
    }
  }
  return;
}



void FUN_006a8db0(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int *piVar3;
  undefined1 local_4 [4];
  
  if (((*(byte *)(in_ECX + 0xdc) & 2) != 0) &&
     (piVar2 = *(int **)(in_ECX + 0x70), piVar2 != (int *)0x0)) {
    piVar3 = (int *)&DAT_00a78fa4;
    iVar1 = (**(code **)*piVar2)(piVar2,&DAT_00a78fa4,local_4);
    if (-1 < iVar1) {
      (**(code **)(*piVar3 + 0x24))(piVar3);
      (**(code **)(*piVar2 + 8))(piVar2);
      *(uint *)(in_ECX + 0xdc) = *(uint *)(in_ECX + 0xdc) & 0xfffffffc;
    }
  }
  return;
}



float10 FUN_006a8e00(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x2f8);
}



undefined4 FUN_006a8e10(undefined4 param_1,undefined4 param_2,float param_3)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x80) = param_1;
  *(undefined4 *)(in_ECX + 0x84) = param_2;
  *(float *)(in_ECX + 0x88) = param_3 + 128.0;
  return 0;
}



undefined4 FUN_006a8e40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x8c) = param_1;
  *(undefined4 *)(in_ECX + 0x90) = param_2;
  *(undefined4 *)(in_ECX + 0x94) = param_3;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0x3f800000;
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_006a8e80(char *param_1,undefined2 param_2)

{
  char cVar1;
  HANDLE hFindFile;
  int iVar2;
  BOOL BVar3;
  CHAR *pCVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  CHAR *pCVar8;
  char *pcVar9;
  _WIN32_FIND_DATAA local_248;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_248;
  switch(param_2) {
  case 0:
    pcVar9 = "Data\\Music\\Explore\\";
    break;
  case 1:
    pcVar9 = "Data\\Music\\Public\\";
    break;
  case 2:
    pcVar9 = "Data\\Music\\Dungeon\\";
    break;
  default:
    pcVar9 = "Data\\Music\\Explore\\";
    break;
  case 4:
    pcVar9 = "Data\\Music\\Battle\\";
  }
  _sprintf(local_108,pcVar9);
  _sprintf(param_1,"%s*.mp3",local_108);
  hFindFile = FindFirstFileA(param_1,&local_248);
  if (hFindFile != (HANDLE)0xffffffff) {
    iVar7 = 1;
    iVar2 = FindNextFileA(hFindFile,&local_248);
    while (iVar2 != 0) {
      iVar7 = iVar7 + 1;
      iVar2 = FindNextFileA(hFindFile,&local_248);
    }
    hFindFile = (HANDLE)FindClose(hFindFile);
    if (iVar7 != 0) {
      iVar2 = FUN_0047df80(0);
      iVar2 = iVar2 % iVar7;
      hFindFile = FindFirstFileA(param_1,&local_248);
      if (hFindFile != (HANDLE)0xffffffff) {
        do {
          if (iVar2 == 0) {
            FindClose(hFindFile);
            pcVar9 = local_108;
            iVar7 = (int)param_1 - (int)pcVar9;
            do {
              cVar1 = *pcVar9;
              pcVar9[iVar7] = cVar1;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 != '\0');
            pCVar8 = local_248.cFileName;
            pCVar4 = pCVar8;
            do {
              cVar1 = *pCVar4;
              pCVar4 = pCVar4 + 1;
            } while (cVar1 != '\0');
            uVar5 = (int)pCVar4 - (int)pCVar8;
            pCVar4 = param_1 + -1;
            do {
              pcVar9 = pCVar4 + 1;
              pCVar4 = pCVar4 + 1;
            } while (*pcVar9 != '\0');
            for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined4 *)pCVar4 = *(undefined4 *)pCVar8;
              pCVar8 = pCVar8 + 4;
              pCVar4 = pCVar4 + 4;
            }
            for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pCVar4 = *pCVar8;
              pCVar8 = pCVar8 + 1;
              pCVar4 = pCVar4 + 1;
            }
            return CONCAT31((int3)(uVar5 >> 8),1);
          }
          iVar2 = iVar2 + -1;
          BVar3 = FindNextFileA(hFindFile,&local_248);
        } while (BVar3 != 0);
        hFindFile = (HANDLE)FindClose(hFindFile);
      }
    }
  }
  return (uint)hFindFile & 0xffffff00;
}



int FUN_006a9030(void)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(in_ECX + 4) != 0) {
    piVar2 = *(int **)(in_ECX + 8);
    do {
      if (*piVar2 != 0) {
        return (*(int **)(in_ECX + 8))[uVar1];
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 4));
  }
  return 0;
}



uint FUN_006a9060(uint param_1)

{
  int in_ECX;
  
  return param_1 % *(uint *)(in_ECX + 4);
}



void FUN_006a90a0(undefined2 param_1)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0x44) = param_1;
  FUN_006b6f20(*(undefined4 *)(in_ECX + 0x3c));
  return;
}



void FUN_006a90c0(undefined2 param_1)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0x46) = param_1;
  FUN_006b6f20(*(undefined4 *)(in_ECX + 0x3c));
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006a9110(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  float fVar1;
  double dVar2;
  uint *puVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  char *pcVar14;
  float10 fVar15;
  undefined1 auStack_234 [8];
  float fStack_22c;
  int local_228;
  int local_224;
  float local_220;
  float local_21c;
  int local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined4 *local_208;
  uint local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  int *local_1f4;
  uint *local_1f0;
  undefined4 local_1ec;
  undefined8 uStack_1e8;
  char acStack_1e0 [7];
  char cStack_1d9;
  char local_1d8 [192];
  char acStack_118 [8];
  char local_110 [204];
  uint local_44;
  
  local_44 = DAT_00b30aac ^ (uint)auStack_234;
  iVar7 = *param_3;
  local_1f4 = param_3;
  local_1ec = *param_4;
  local_208 = param_4;
  local_224 = *(undefined4 *)(*(int *)(param_1 + 0x300) + 0xc);
  local_218 = param_1;
  local_228 = iVar7;
  FUN_0057b8e0();
  local_228 = iVar7 + param_2 * 2;
  _sprintf(local_1d8,"[%s] Music Playing: ");
  switch(*(undefined2 *)(param_1 + 0xb0)) {
  case 0:
    pcVar5 = "Explore!";
    break;
  case 1:
    pcVar5 = "Public";
    break;
  case 2:
    pcVar5 = "Dungeon?";
    break;
  default:
    goto switchD_006a91bd_caseD_3;
  case 4:
    pcVar5 = "Battle!";
    break;
  case 8:
    pcVar5 = "Special";
  }
  _sprintf(local_110,pcVar5);
switchD_006a91bd_caseD_3:
  pcVar5 = local_110;
  do {
    cVar4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar4 != '\0');
  uVar6 = (int)pcVar5 - (int)local_110;
  pcVar5 = &cStack_1d9;
  do {
    pcVar14 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar14 != '\0');
  pcVar14 = local_110;
  for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar14;
    pcVar14 = pcVar14 + 4;
    pcVar5 = pcVar5 + 4;
  }
  fVar1 = *(float *)(local_218 + 0x2f0);
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar5 = *pcVar14;
    pcVar14 = pcVar14 + 1;
    pcVar5 = pcVar5 + 1;
  }
  _sprintf(local_110,"(%.3f)",(double)fVar1);
  pcVar5 = local_110;
  do {
    cVar4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar4 != '\0');
  uVar6 = (int)pcVar5 - (int)local_110;
  pcVar5 = &cStack_1d9;
  do {
    pcVar14 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar14 != '\0');
  pcVar14 = local_110;
  for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar14;
    pcVar14 = pcVar14 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar5 = *pcVar14;
    pcVar14 = pcVar14 + 1;
    pcVar5 = pcVar5 + 1;
  }
  FUN_0057b8e0();
  iVar7 = local_218;
  iVar12 = local_228 + param_2;
  local_228 = iVar12;
  _sprintf(local_1d8,"%d sounds loaded. %d moving sounds registered.");
  FUN_0057b8e0();
  uVar6 = *(uint *)(*(int *)(iVar7 + 0x300) + 4);
  uVar9 = 0;
  local_228 = iVar12 + param_2 * 2;
  local_1f0 = (uint *)0x0;
  if (uVar6 != 0) {
    piVar8 = *(int **)(*(int *)(iVar7 + 0x300) + 8);
    piVar13 = piVar8;
    do {
      if (*piVar13 != 0) {
        local_224 = piVar8[uVar9];
        goto LAB_006a9343;
      }
      uVar9 = uVar9 + 1;
      piVar13 = piVar13 + 1;
    } while (uVar9 < uVar6);
  }
  local_224 = 0;
LAB_006a9343:
  if (local_224 != 0) {
    do {
      iVar7 = local_218;
      FUN_00452600();
      puVar3 = local_1f0;
      local_204 = *local_1f0;
      iVar12 = FUN_006b67d0();
      if (iVar12 == 0) {
        _sprintf(local_1d8,"%NoName:\t");
      }
      else {
        if (DAT_00b161c0 == '\0') {
          pcVar5 = "%d:\t";
        }
        else {
          FUN_006b67d0();
          pcVar5 = "%s:\t";
        }
        _sprintf(local_1d8,pcVar5);
      }
      local_220 = 0.0;
      local_21c = 0.0;
      piVar8 = (int *)puVar3[0x15];
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0x1c))(piVar8,&local_21c);
        (**(code **)(*(int *)puVar3[0x15] + 0x20))((int *)puVar3[0x15],&local_228);
      }
      if ((*puVar3 & 2) == 0) {
        if (*(byte *)((int)puVar3 + 0x4a) == 0) {
          dVar2 = (double)*(ushort *)((int)puVar3 + 0x46) / 100.0;
        }
        else {
          dVar2 = 100.0;
        }
        fStack_22c = (float)(uint)(ushort)puVar3[0x11];
        _sprintf(local_110,"(-%.1fdB)(-%.1fdB)",(double)(int)fStack_22c / 100.0,dVar2);
      }
      else {
        local_1f8 = (float)puVar3[10];
        local_200 = (float)puVar3[8];
        local_1fc = (float)puVar3[9];
        if (local_21c <= 1e+06) {
          if (*(byte *)((int)puVar3 + 0x4a) == 0) {
            uStack_1e8 = (double)*(ushort *)((int)puVar3 + 0x46) / 100.0;
          }
          else {
            uStack_1e8 = 100.0;
          }
          fStack_214 = local_200 - *(float *)(iVar7 + 0x80);
          fStack_210 = local_1fc - *(float *)(iVar7 + 0x84);
          fStack_20c = local_1f8 - *(float *)(iVar7 + 0x88);
          fStack_22c = fStack_20c * fStack_20c + fStack_214 * fStack_214 + fStack_210 * fStack_210;
          fVar15 = (float10)FUN_00982c30();
          fStack_22c = (float)(uint)(ushort)puVar3[0x11];
          _sprintf(local_110,"(-%.1fdB)(-%.1fdB)(%.0f/%.0f) (%.0f)",(double)(int)fStack_22c / 100.0,
                   uStack_1e8,(double)(local_220 * 69.99),(double)(local_21c * 69.99),
                   (double)(float)fVar15);
        }
        else {
          if (*(byte *)((int)puVar3 + 0x4a) == 0) {
            uStack_1e8 = (double)*(ushort *)((int)puVar3 + 0x46) / 100.0;
          }
          else {
            uStack_1e8 = 100.0;
          }
          fStack_214 = local_200 - *(float *)(iVar7 + 0x80);
          fStack_210 = local_1fc - *(float *)(iVar7 + 0x84);
          fStack_20c = local_1f8 - *(float *)(iVar7 + 0x88);
          fStack_22c = fStack_20c * fStack_20c + fStack_214 * fStack_214 + fStack_210 * fStack_210;
          fVar15 = (float10)FUN_00982c30();
          fStack_22c = (float)(uint)(ushort)puVar3[0x11];
          _sprintf(local_110,"(-%.1fdB)(-%.1fdB)(%.0f/Default) (%.0f)",
                   (double)(int)fStack_22c / 100.0,uStack_1e8,(double)(local_220 * 69.99),
                   (double)(float)fVar15);
        }
      }
      pcVar5 = local_110;
      do {
        cVar4 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar4 != '\0');
      uVar6 = (int)pcVar5 - (int)local_110;
      pcVar5 = &cStack_1d9;
      do {
        pcVar14 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
      } while (*pcVar14 != '\0');
      pcVar14 = local_110;
      for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar5 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar5 = pcVar5 + 1;
      }
      cVar4 = FUN_006b6af0();
      if (cVar4 == '\0') {
        pcVar5 = &cStack_1d9;
        do {
          pcVar14 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar14 != '\0');
        uVar10 = 0x7561505b;
        uVar11 = 0x5d6573;
      }
      else {
        pcVar5 = &cStack_1d9;
        do {
          pcVar14 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar14 != '\0');
        uVar10 = 0x616c505b;
        uVar11 = 0x5d2079;
      }
      *(undefined4 *)pcVar5 = uVar10;
      *(undefined4 *)(pcVar5 + 4) = uVar11;
      pcVar5 = &cStack_1d9;
      do {
        pcVar14 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
      } while (*pcVar14 != '\0');
      pcVar5[0] = '[';
      pcVar5[1] = '\0';
      if ((local_204 & 1) != 0) {
        pcVar5 = &cStack_1d9;
        do {
          pcVar14 = pcVar5;
          pcVar5 = pcVar14 + 1;
        } while (pcVar14[1] != '\0');
        pcVar5[0] = '2';
        pcVar5[1] = 'D';
        pcVar14[3] = '\0';
      }
      if ((local_204 & 2) != 0) {
        pcVar5 = &cStack_1d9;
        do {
          pcVar14 = pcVar5;
          pcVar5 = pcVar14 + 1;
        } while (pcVar14[1] != '\0');
        pcVar5[0] = '3';
        pcVar5[1] = 'D';
        pcVar14[3] = '\0';
      }
      if ((local_204 & 4) != 0) {
        pcVar5 = &cStack_1d9;
        do {
          pcVar14 = pcVar5;
          pcVar5 = pcVar14 + 1;
        } while (pcVar14[1] != '\0');
        builtin_strncpy(pcVar14 + 1,"|VOCE",6);
      }
      if ((local_204 & 8) != 0) {
        pcVar5 = &cStack_1d9;
        do {
          pcVar14 = pcVar5;
          pcVar5 = pcVar14 + 1;
        } while (pcVar14[1] != '\0');
        builtin_strncpy(pcVar14 + 1,"|FOOT",6);
      }
      if ((local_204 & 0x10) != 0) {
        pcVar5 = &cStack_1d9;
        do {
          pcVar14 = pcVar5;
          pcVar5 = pcVar14 + 1;
        } while (pcVar14[1] != '\0');
        builtin_strncpy(pcVar14 + 1,"|LOOP",6);
      }
      if ((local_204 & 0x20) != 0) {
        pcVar5 = &cStack_1d9;
        do {
          pcVar14 = pcVar5;
          pcVar5 = pcVar14 + 1;
        } while (pcVar14[1] != '\0');
        builtin_strncpy(pcVar14 + 1,"|SYST",6);
      }
      if ((local_204 & 0x40) != 0) {
        pcVar5 = &cStack_1d9;
        do {
          pcVar14 = pcVar5;
          pcVar5 = pcVar14 + 1;
        } while (pcVar14[1] != '\0');
        builtin_strncpy(pcVar14 + 1,"|LOFR",6);
      }
      if ((local_204 & 0x100) != 0) {
        pcVar5 = &cStack_1d9;
        do {
          pcVar14 = pcVar5;
          pcVar5 = pcVar14 + 1;
        } while (pcVar14[1] != '\0');
        builtin_strncpy(pcVar14 + 1,"|1OFF",6);
      }
      if ((local_204 & 0x1000) != 0) {
        pcVar5 = &cStack_1d9;
        do {
          pcVar14 = pcVar5;
          pcVar5 = pcVar14 + 1;
        } while (pcVar14[1] != '\0');
        builtin_strncpy(pcVar14 + 1,"|RGN",5);
      }
      if (*(byte *)((int)puVar3 + 0x4a) != 0) {
        pcVar5 = &cStack_1d9;
        do {
          pcVar14 = pcVar5;
          pcVar5 = pcVar14 + 1;
        } while (pcVar14[1] != '\0');
        pcVar5[0] = '|';
        pcVar5[1] = 'X';
        pcVar14[3] = '\0';
      }
      pcVar5 = &cStack_1d9;
      do {
        pcVar14 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
      } while (*pcVar14 != '\0');
      pcVar5[0] = ']';
      pcVar5[1] = '\0';
      iVar7 = FUN_006b67e0();
      if (iVar7 != 0) {
        piVar8 = (int *)FUN_006b67e0();
        (**(code **)(*piVar8 + 0x18))(piVar8);
        _sprintf(acStack_118,"[%i]");
        pcVar5 = acStack_118;
        do {
          cVar4 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar4 != '\0');
        uVar6 = (int)pcVar5 - (int)acStack_118;
        pcVar5 = (char *)((int)&uStack_1e8 + 7);
        do {
          pcVar14 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar14 != '\0');
        pcVar14 = acStack_118;
        for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar5 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar5 = pcVar5 + 1;
        }
        piVar8 = (int *)FUN_006b67e0();
        uVar6 = (**(code **)(*piVar8 + 0x24))(piVar8);
        if ((uVar6 & 2) != 0) {
          pcVar5 = &cStack_1d9;
          do {
            pcVar14 = pcVar5;
            pcVar5 = pcVar14 + 1;
          } while (pcVar14[1] != '\0');
          builtin_strncpy(pcVar14 + 1,"!!!",4);
        }
      }
      FUN_0057b8e0();
      local_228 = local_228 + param_2;
    } while (local_224 != 0);
    *local_1f4 = local_228;
    *local_208 = local_1ec;
    return;
  }
  *local_1f4 = local_228;
  *local_208 = local_1ec;
  return;
}



void FUN_006a9a10(void)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  uint *local_c;
  int local_8;
  undefined1 local_4 [4];
  
  uVar1 = *(uint *)(*(int *)(in_ECX + 0x300) + 4);
  uVar3 = 0;
  local_c = (uint *)0x0;
  if (uVar1 != 0) {
    piVar2 = *(int **)(*(int *)(in_ECX + 0x300) + 8);
    piVar4 = piVar2;
    do {
      if (*piVar4 != 0) {
        local_8 = piVar2[uVar3];
        goto joined_r0x006a9a4a;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < uVar1);
  }
  local_8 = 0;
joined_r0x006a9a4a:
  while (local_8 != 0) {
    FUN_00452600(&local_8,local_4,&local_c);
    uVar1 = *local_c;
    if ((uVar1 & 0x10) != 0) {
      *local_c = uVar1 | 0x200;
      if ((uVar1 & 1) == 0) {
        FUN_006b6aa0();
      }
      else {
        FUN_006b7130(1);
      }
    }
  }
  return;
}



void FUN_006a9aa0(void)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  uint *local_c;
  int local_8;
  undefined1 local_4 [4];
  
  uVar1 = *(uint *)(*(int *)(in_ECX + 0x300) + 4);
  uVar3 = 0;
  local_c = (uint *)0x0;
  if (uVar1 != 0) {
    piVar2 = *(int **)(*(int *)(in_ECX + 0x300) + 8);
    piVar4 = piVar2;
    do {
      if (*piVar4 != 0) {
        local_8 = piVar2[uVar3];
        goto joined_r0x006a9ada;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < uVar1);
  }
  local_8 = 0;
joined_r0x006a9ada:
  while (local_8 != 0) {
    FUN_00452600(&local_8,local_4,&local_c);
    uVar1 = *local_c;
    if ((uVar1 & 0x10) != 0) {
      *local_c = uVar1 & 0xfffffdff;
      if ((uVar1 & 1) == 0) {
        FUN_006b6e60(1);
      }
      else {
        FUN_006b7130(0);
      }
    }
  }
  return;
}



void FUN_006a9b40(void)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  int in_ECX;
  int *piVar6;
  uint *local_c;
  int local_8;
  undefined1 local_4 [4];
  
  *(undefined1 *)(in_ECX + 0xa4) = 1;
  local_c = (uint *)0x0;
  if (DAT_00b16178 != '\0') {
    uVar1 = *(uint *)(*(int *)(in_ECX + 0x300) + 4);
    uVar5 = 0;
    if (uVar1 != 0) {
      piVar2 = *(int **)(*(int *)(in_ECX + 0x300) + 8);
      piVar6 = piVar2;
      do {
        if (*piVar6 != 0) {
          local_8 = piVar2[uVar5];
          goto joined_r0x006a9b8e;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (uVar5 < uVar1);
    }
    local_8 = 0;
joined_r0x006a9b8e:
    while (local_8 != 0) {
      FUN_00452600(&local_8,local_4,&local_c);
      puVar3 = local_c;
      cVar4 = FUN_006b6af0();
      if ((cVar4 != '\0') && ((*puVar3 & 0x20) == 0)) {
        *puVar3 = *puVar3 | 0x200;
        cVar4 = FUN_006b7120();
        if ((cVar4 == '\0') || ((*puVar3 & 1) == 0)) {
          FUN_006b6aa0();
        }
        else {
          FUN_006b7130(1);
        }
      }
    }
  }
  return;
}



void FUN_006a9c00(void)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  int in_ECX;
  int *piVar6;
  undefined4 uVar7;
  uint *local_c;
  int local_8;
  undefined1 local_4 [4];
  
  *(undefined1 *)(in_ECX + 0xa4) = 0;
  local_c = (uint *)0x0;
  if (DAT_00b16178 != '\0') {
    uVar1 = *(uint *)(*(int *)(in_ECX + 0x300) + 4);
    uVar5 = 0;
    if (uVar1 != 0) {
      piVar2 = *(int **)(*(int *)(in_ECX + 0x300) + 8);
      piVar6 = piVar2;
      do {
        if (*piVar6 != 0) {
          local_8 = piVar2[uVar5];
          goto joined_r0x006a9c4e;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (uVar5 < uVar1);
    }
    local_8 = 0;
joined_r0x006a9c4e:
    while (local_8 != 0) {
      FUN_00452600(&local_8,local_4,&local_c);
      puVar3 = local_c;
      if (((*local_c & 0x200) != 0) &&
         ((cVar4 = FUN_006b6af0(), cVar4 == '\0' || ((*puVar3 & 1) != 0)))) {
        *puVar3 = *puVar3 ^ 0x200;
        if ((*puVar3 & 0x10) == 0) {
          uVar7 = 0;
        }
        else {
          if ((*puVar3 & 1) != 0) {
            FUN_006b7130(0);
          }
          uVar7 = 1;
        }
        FUN_006b6e60(uVar7);
        FUN_006b6f20(puVar3[0xf]);
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_006a9cd0(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_108;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)(local_108 + -(int)param_1)] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  puVar2 = (undefined4 *)&stack0xfffffef7;
  do {
    puVar4 = puVar2;
    puVar2 = (undefined4 *)((int)puVar4 + 1);
  } while (*(char *)((int)puVar4 + 1) != '\0');
  *(undefined4 *)((int)puVar4 + 1) = 0x61772e2a;
  *(undefined2 *)((int)puVar4 + 5) = 0x76;
  if (DAT_00b04460 == '\0') {
    uVar5 = FUN_0042ddf0(local_108,param_1,8);
    return uVar5;
  }
  piVar6 = (int *)FUN_00431970(local_108,param_1,8,0);
  if (piVar6 != (int *)0x0) {
    uVar10 = 0;
    piVar7 = piVar6;
    do {
      if (*piVar7 != 0) {
        uVar10 = uVar10 + 1;
      }
      piVar7 = (int *)piVar7[1];
    } while (piVar7 != (int *)0x0);
    if (uVar10 != 0) {
      uVar8 = FUN_0047df80(0);
      uVar8 = uVar8 % uVar10;
      piVar7 = piVar6;
      do {
        if (uVar8 == 0) {
          pcVar3 = (char *)*piVar7;
          pcVar9 = param_1;
          do {
            cVar1 = *pcVar3;
            *pcVar9 = cVar1;
            pcVar3 = pcVar3 + 1;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
        }
        uVar8 = uVar8 - 1;
        FUN_00401f20(*piVar7);
        piVar7 = (int *)piVar7[1];
      } while (piVar7 != (int *)0x0);
      FUN_004526e0();
      FUN_00401f20(piVar6);
      return 1;
    }
    FUN_00401f20(piVar6);
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_006a9e00(undefined4 *param_1,int *param_2,byte param_3)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int in_ECX;
  undefined4 *puVar10;
  int *unaff_FS_OFFSET;
  undefined4 *local_164;
  int *local_160;
  uint local_15c;
  undefined4 *puStack_158;
  undefined4 uStack_154;
  undefined4 *local_150;
  undefined2 local_14c;
  undefined2 local_14a;
  uint local_148;
  int local_144;
  undefined2 local_140;
  undefined2 local_13e;
  undefined2 local_13c;
  undefined4 local_138;
  uint local_134;
  uint local_130;
  undefined4 local_12c;
  undefined2 *local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c62ec;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_164;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffe8c;
  *unaff_FS_OFFSET = (int)&local_c;
  local_150 = param_1;
  local_160 = param_2;
  piVar5 = param_2;
  do {
    iVar8 = *piVar5;
    (local_114 + -(int)param_2)[(int)piVar5] = (char)iVar8;
    piVar5 = (int *)((int)piVar5 + 1);
  } while ((char)iVar8 != '\0');
  cVar2 = thunk_FUN_00748170(local_114,0,uVar4);
  pcVar6 = _strstr(local_114,".wav");
  if (pcVar6 != (char *)0x0) {
    pcVar6[1] = 'm';
    pcVar6[2] = 'p';
    pcVar6[3] = '3';
  }
  cVar3 = thunk_FUN_00748170(local_114,0,uVar4);
  if (cVar3 == '\0') {
    if (cVar2 == '\0') {
      FUN_004a7a60("MP3 file \'%s\' not found",local_114);
    }
  }
  else {
    local_15c = FUN_00401f00(0x1c);
    local_4 = 0;
    if (local_15c == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_006b45c0(local_114);
    }
    local_4 = 0xffffffff;
    if (((char)piVar5[6] == '\0') || (*piVar5 == 0)) {
      FUN_004a7a60("MP3 file \'%s\' is not compatible with current decoder.",param_2);
      FUN_006b31d0();
    }
    else {
      local_15c = FUN_00401f00(0x413c);
      local_4 = 1;
      if (local_15c == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)FUN_006b1d40(piVar5);
      }
      puVar9 = local_150;
      local_12c = 0;
      local_138 = 0x24;
      local_13c = 0;
      local_148 = *(uint *)(piVar5[1] + 8);
      local_144 = local_148 * 2;
      local_14a = 1;
      local_14c = 1;
      local_13e = 0x10;
      local_140 = 2;
      local_4 = 0xffffffff;
      local_134 = -(uint)((param_3 & 2) != 0) & 0x20010 | 0xa0;
      local_124 = 0;
      local_120 = 0;
      local_11c = 0;
      local_118 = 0;
      local_128 = &local_14c;
      local_130 = *(int *)*piVar7 * 0x900;
      local_164 = (undefined4 *)(local_148 / 1000);
      local_15c = (local_130 >> 1) / (uint)local_164 & 0xffff;
      if (*(int *)(in_ECX + 8) != 0) {
        iVar8 = (**(code **)(**(int **)(in_ECX + 8) + 0xc))
                          (*(int **)(in_ECX + 8),&local_138,local_150,0);
        if (iVar8 < 0) {
          FUN_004a7a60("CreateSoundBuffer failed while playing voice %s",local_160);
        }
        else {
          piVar1 = (int *)*puVar9;
          puStack_158 = (undefined4 *)0x0;
          uStack_154 = 0;
          local_160 = piVar1;
          iVar8 = (**(code **)(*piVar1 + 0x2c))(piVar1,0,0,&puStack_158,&uStack_154,0,0,2);
          if (-1 < iVar8) {
            local_164 = puStack_158;
            puVar9 = (undefined4 *)FUN_006b3ae0();
            puVar10 = local_164;
            while (puVar9 != (undefined4 *)0x0) {
              local_164 = puVar10 + 0x240;
              for (iVar8 = 0x240; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar10 = puVar10 + 1;
              }
              puVar9 = (undefined4 *)FUN_006b3ae0();
              piVar1 = local_160;
              puVar10 = local_164;
            }
            local_164 = puVar10;
            (**(code **)(*piVar1 + 0x4c))(piVar1,puStack_158,uStack_154,0,0);
            FUN_006b31d0();
            FUN_00401f20(piVar5);
            FUN_006b3500();
            FUN_00401f20(piVar7);
            local_15c = local_15c & 0xffff;
            goto LAB_006aa137;
          }
        }
      }
      FUN_006b31d0();
      FUN_00401f20(piVar5);
      FUN_006b3500();
      piVar5 = piVar7;
    }
    FUN_00401f20(piVar5);
  }
  local_15c = 0;
LAB_006aa137:
  *unaff_FS_OFFSET = local_c;
  return local_15c;
}



void FUN_006aa170(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0xdc) & 1) != 0) {
    FUN_006a8db0();
    (**(code **)(**(int **)(in_ECX + 0x74) + 8))(*(int **)(in_ECX + 0x74));
    (**(code **)(**(int **)(in_ECX + 0x70) + 8))(*(int **)(in_ECX + 0x70));
    *(uint *)(in_ECX + 0xdc) = *(uint *)(in_ECX + 0xdc) & 0xfffffffe;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006aa1a0(float param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (0.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  if (param_2 != '\0') {
    *(float *)(in_ECX + 0x2f8) = param_1;
    *(float *)(in_ECX + 0x2f0) = param_1;
  }
  if (DAT_00b3c0ec != '\0') {
    param_1 = _DAT_00b16188;
  }
  param_1 = param_1 * *(float *)(in_ECX + 0xb8);
  if ((*(byte *)(in_ECX + 0xdc) & 1) != 0) {
    if (param_1 * param_1 < 0.01) {
                    /* WARNING: Could not recover jumptable at 0x006aa24a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(in_ECX + 0x74) + 0x1c))();
      return;
    }
    piVar1 = *(int **)(in_ECX + 0x74);
    iVar2 = *piVar1;
    FUN_00986cd0();
    uVar3 = FUN_009828c0();
    (**(code **)(iVar2 + 0x1c))(piVar1,uVar3);
  }
  return;
}



void FUN_006aa280(void)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  *(undefined1 *)(in_ECX + 0xa4) = 0;
  local_c = 0;
  if (DAT_00b16178 != '\0') {
    uVar1 = *(uint *)(*(int *)(in_ECX + 0x300) + 4);
    uVar3 = 0;
    if (uVar1 != 0) {
      piVar2 = *(int **)(*(int *)(in_ECX + 0x300) + 8);
      piVar4 = piVar2;
      do {
        if (*piVar4 != 0) {
          local_8 = piVar2[uVar3];
          goto joined_r0x006aa2cb;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar3 < uVar1);
    }
    local_8 = 0;
joined_r0x006aa2cb:
    while (local_8 != 0) {
      FUN_00452600(&local_8,local_4,&local_c);
      FUN_006b6f20(*(undefined4 *)(local_c + 0x3c));
    }
  }
  FUN_006aa1a0(*(undefined4 *)(in_ECX + 0x2f0),1);
  return;
}



void FUN_006aa320(int *param_1)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 4))();
  piVar1[2] = *param_1;
  piVar1[1] = 0;
  *piVar1 = in_ECX[1];
  if (in_ECX[1] != 0) {
    *(int **)(in_ECX[1] + 4) = piVar1;
    in_ECX[3] = in_ECX[3] + 1;
    in_ECX[1] = (int)piVar1;
    return;
  }
  in_ECX[3] = in_ECX[3] + 1;
  in_ECX[2] = (int)piVar1;
  in_ECX[1] = (int)piVar1;
  return;
}



void FUN_006aa370(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a76e30;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_006aa390(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a76e50;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_006aa3b0(undefined4 *param_1)

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
LAB_006aa45a:
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
      goto LAB_006aa45a;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}



void FUN_006aa4d0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6328;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a76e90;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a76e70;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006aa530(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a76e30;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006aa560(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a76e50;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006aa590(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6363;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[4] = 0;
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  puVar1 = (undefined4 *)in_ECX[4];
  local_4 = 1;
  if (puVar1 != param_5) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar2);
      }
    }
    in_ECX[4] = param_5;
    if (param_5 != (undefined4 *)0x0) {
      InterlockedIncrement(param_5 + 1);
    }
  }
  local_4 = 0xffffffff;
  if (param_5 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(param_5 + 1);
    if (LVar3 == 0) {
      (**(code **)*param_5)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006aa660(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6388;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a76e80;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a76e20;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006aa6d0(byte param_1)

{
  FUN_006aa4d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006aa6f0(byte param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006aa730(void)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  LONG LVar10;
  int in_ECX;
  int *piVar11;
  int *unaff_FS_OFFSET;
  undefined4 *local_34;
  byte *local_30;
  int local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c63b8;
  local_c = *unaff_FS_OFFSET;
  uVar8 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (99 < (uint)(DAT_00b33ea0 - *(int *)(in_ECX + 0xd0))) {
    *(int *)(in_ECX + 0xd0) = DAT_00b33ea0;
    local_34 = (undefined4 *)0x0;
    local_18 = *(float *)(DAT_00b333c4 + 0x2c);
    local_14 = *(float *)(DAT_00b333c4 + 0x30);
    local_10 = *(float *)(DAT_00b333c4 + 0x34);
    uVar1 = *(uint *)(*(int *)(in_ECX + 0x304) + 4);
    uVar9 = 0;
    local_4 = 0;
    puVar4 = local_34;
    if (uVar1 != 0) {
      piVar2 = *(int **)(*(int *)(in_ECX + 0x304) + 8);
      piVar11 = piVar2;
      do {
        if (*piVar11 != 0) {
          local_2c = piVar2[uVar9];
          goto joined_r0x006aa7cb;
        }
        uVar9 = uVar9 + 1;
        piVar11 = piVar11 + 1;
      } while (uVar9 < uVar1);
    }
    local_2c = 0;
joined_r0x006aa7cb:
    while (local_34 = puVar4, local_2c != 0) {
      FUN_007b2600(&local_2c,&local_28,&local_34);
      uVar6 = local_28;
      puVar4 = local_34;
      if (local_34 != (undefined4 *)0x0) {
        bVar3 = false;
        local_30 = (byte *)0x0;
        FUN_0055e000(local_28,&local_30);
        pbVar5 = local_30;
        if (local_30 == (byte *)0x0) {
          FUN_004524c0(uVar6);
          FUN_006f9710(local_34,uVar8);
          puVar4 = local_34;
        }
        else {
          cVar7 = FUN_006b6af0();
          puVar4 = local_34;
          if (cVar7 != '\0') {
            local_24 = (float)local_34[0x22];
            local_20 = (float)local_34[0x23];
            local_1c = (float)local_34[0x24];
            if (((local_18 == local_24) && (local_14 == local_20)) &&
               (local_30 = (byte *)ABS(local_10 - local_1c), (float)local_30 < 128.0)) {
              bVar3 = true;
              local_24 = *(float *)(in_ECX + 0x80);
              local_20 = *(float *)(in_ECX + 0x84);
            }
            if (((*pbVar5 & 8) != 0) || (bVar3)) {
              local_30 = (byte *)(local_1c - 128.0);
              FUN_006b6be0(local_24,local_20,local_30);
              puVar4 = local_34;
            }
            else {
              FUN_006b6be0(local_24,local_20,local_1c);
              puVar4 = local_34;
            }
          }
        }
      }
    }
    local_4 = 0xffffffff;
    if ((puVar4 != (undefined4 *)0x0) && (LVar10 = InterlockedDecrement(puVar4 + 1), LVar10 == 0)) {
      (**(code **)*puVar4)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006aa980(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    InterlockedIncrement((LONG *)(param_2 + 4));
    FUN_006aa3b0(param_1);
  }
  return;
}



undefined4 FUN_006aa9c0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca9b8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = (undefined4 *)0x0;
  local_4 = 0;
  FUN_004a1ab0(*(undefined4 *)(*param_1 + 0xc),&local_10);
  FUN_004524c0(*(undefined4 *)(*param_1 + 0xc));
  puVar2 = local_10;
  if (local_10 != (undefined4 *)0x0) {
    FUN_006f9710(local_10,uVar3);
  }
  FUN_004524c0(*(undefined4 *)(*param_1 + 0xc));
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_006b6700();
    FUN_00401f20(iVar1);
  }
  local_4 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if (LVar4 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_006aabd0(undefined4 *param_1,char *param_2,uint param_3,uint *param_4)

{
  char cVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int iVar6;
  char *pcVar7;
  HMMIO hmmio;
  MMRESULT MVar8;
  int iVar9;
  int in_ECX;
  uint uVar10;
  char *pcVar11;
  uint *puVar12;
  char *pcVar13;
  uint *puVar14;
  int iStack_210;
  undefined4 uStack_20c;
  uint uStack_208;
  char *local_204;
  uint *local_200;
  undefined4 *local_1fc;
  int local_1f8;
  _MMCKINFO _Stack_1f4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  _MMCKINFO _Stack_1d0;
  _MMIOINFO _Stack_1bc;
  _MMIOINFO local_174;
  uint auStack_12c [4];
  undefined4 *puStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&iStack_210;
  local_1fc = param_1;
  local_204 = param_2;
  local_200 = param_4;
  if (*(int *)(in_ECX + 8) == 0) {
    return 0;
  }
  local_1f8 = in_ECX;
  _memset(&local_174,0,0x48);
  local_174.fccIOProc = 0x564157;
  local_174.pIOProc = &LAB_006aaaa0;
  if ((DAT_00b33a04 == (int *)0x0) ||
     (iVar6 = (**(code **)(*DAT_00b33a04 + 4))(param_2,0,0,0xffffffff), iVar6 == 0)) {
    builtin_strncpy(local_108,"data\\sou",8);
    builtin_strncpy(local_108 + 8,"nd\\",4);
    pcVar7 = param_2;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    pcVar13 = (char *)((int)&uStack_10c + 3);
    do {
      pcVar11 = pcVar13 + 1;
      pcVar13 = pcVar13 + 1;
    } while (*pcVar11 != '\0');
    pcVar11 = param_2;
    for (uVar10 = (uint)((int)pcVar7 - (int)param_2) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar10 = (int)pcVar7 - (int)param_2 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar13 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar13 = pcVar13 + 1;
    }
    if (DAT_00b33a04 == (int *)0x0) {
      return 0;
    }
    iVar6 = (**(code **)(*DAT_00b33a04 + 4))(local_108,0,0,0xffffffff);
    if (iVar6 == 0) {
      return 0;
    }
    param_2 = local_108;
  }
  hmmio = mmioOpenA(param_2,&local_174,0x10000);
  if (hmmio != (HMMIO)0x0) {
    MVar8 = mmioDescend(hmmio,&_Stack_1d0,(MMCKINFO *)0x0,0);
    if (MVar8 != 0x109) {
      _Stack_1f4.ckid = 0x20746d66;
      MVar8 = mmioDescend(hmmio,&_Stack_1f4,&_Stack_1d0,0x10);
      if ((MVar8 != 0x109) && (0xf < _Stack_1f4.cksize)) {
        mmioRead(hmmio,(HPSTR)&uStack_1e0,0x10);
        if ((short)uStack_1e0 == 1) {
          mmioAscend(hmmio,&_Stack_1f4,0);
          _Stack_1f4.ckid = 0x61746164;
          mmioDescend(hmmio,&_Stack_1f4,&_Stack_1d0,0x10);
          DVar5 = _Stack_1f4.cksize;
          uVar10 = 0;
          auStack_12c[3] = 0;
          puStack_11c = (undefined4 *)0x0;
          auStack_12c[0] = 0x24;
          if ((param_3 & 1) == 0) {
            if (((param_3 & 4) == 0) || ((param_3 & 2) == 0)) {
              if (((param_3 & 0x10a) != 0) || ((param_3 & 2) != 0)) {
                uVar10 = 0x20010;
              }
            }
            else {
              uVar10 = 0x30010;
            }
          }
          else {
            uVar10 = 0x40;
          }
          auStack_12c[1] = uVar10 | 0xa0;
          if ((*(byte *)(in_ECX + 0xac) & 4) != 0) {
            auStack_12c[1] = uVar10 | 0x400a0;
          }
          auStack_12c[2] = _Stack_1f4.cksize;
          uStack_118 = 0;
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          puStack_11c = (undefined4 *)FUN_00401f00(0x12);
          puVar4 = local_1fc;
          *puStack_11c = uStack_1e0;
          puStack_11c[1] = uStack_1dc;
          puStack_11c[2] = uStack_1d8;
          puStack_11c[3] = uStack_1d4;
          *(undefined2 *)(puStack_11c + 4) = 0;
          uStack_208 = (uint)(((ulonglong)auStack_12c[2] /
                              (ulonglong)(*(ushort *)((int)puStack_11c + 0xe) >> 3)) /
                             ((ulonglong)(uint)puStack_11c[1] / 1000)) & 0xffff;
          iVar6 = (**(code **)(**(int **)(local_1f8 + 8) + 0xc))
                            (*(int **)(local_1f8 + 8),auStack_12c,local_1fc,0);
          piVar2 = (int *)*puVar4;
          if (iVar6 < 0) {
            if (((param_3 & 2) != 0) && (1 < uStack_1e0._2_2_)) {
              FUN_004a7a60("Attempting to play %i channel sound \"%s\" in 3D (must be mono)",
                           uStack_1e0._2_2_,local_204);
            }
            FUN_00401f20(puStack_11c);
            mmioClose(hmmio,0);
            return 0;
          }
          iStack_210 = 0;
          uStack_20c = 0;
          iVar9 = (**(code **)(*piVar2 + 0x2c))(piVar2,0,DVar5,&iStack_210,&uStack_20c,0,0,0);
          iVar6 = iStack_210;
          if (iVar9 < 0) {
LAB_006ab11a:
            mmioClose(hmmio,0);
            return 0;
          }
          mmioGetInfo(hmmio,&_Stack_1bc,0);
          uVar10 = 0;
          if (_Stack_1f4.cksize != 0) {
            do {
              if ((_Stack_1bc.pchNext == _Stack_1bc.pchEndRead) &&
                 (MVar8 = mmioAdvance(hmmio,&_Stack_1bc,0), MVar8 != 0)) {
                FUN_00401f20(puStack_11c);
                (**(code **)(*piVar2 + 0x4c))(piVar2,iStack_210,uStack_20c,0,0);
                goto LAB_006ab11a;
              }
              *(char *)(uVar10 + iVar6) = *_Stack_1bc.pchNext;
              _Stack_1bc.pchNext = _Stack_1bc.pchNext + 1;
              uVar10 = uVar10 + 1;
            } while (uVar10 < _Stack_1f4.cksize);
          }
          (**(code **)(*piVar2 + 0x4c))(piVar2,iStack_210,uStack_20c,0,0);
          mmioClose(hmmio,0);
          puVar3 = local_200;
          if (local_200 != (uint *)0x0) {
            puVar12 = auStack_12c;
            puVar14 = local_200;
            for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar14 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar14 = puVar14 + 1;
            }
            uVar10 = FUN_00401f00(0x12);
            puVar3[4] = uVar10;
            *(undefined2 *)(uVar10 + 0x10) = *(undefined2 *)(puStack_11c + 4);
            *(undefined4 *)(puVar3[4] + 8) = puStack_11c[2];
            *(undefined2 *)(puVar3[4] + 0xc) = *(undefined2 *)(puStack_11c + 3);
            *(undefined2 *)(puVar3[4] + 2) = *(undefined2 *)((int)puStack_11c + 2);
            *(undefined4 *)(puVar3[4] + 4) = puStack_11c[1];
            *(undefined2 *)(puVar3[4] + 0xe) = *(undefined2 *)((int)puStack_11c + 0xe);
            *(undefined2 *)puVar3[4] = *(undefined2 *)puStack_11c;
          }
          FUN_00401f20(puStack_11c);
          return uStack_208 & 0xffff;
        }
      }
    }
    mmioClose(hmmio,0);
  }
  return 0;
}



undefined4 FUN_006ab130(undefined4 param_1)

{
  undefined4 local_4;
  
  local_4 = 0;
  FUN_0055e000(param_1,&local_4);
  return local_4;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_006ab160(uint param_1,char *param_2,char param_3)

{
  LPVOID *ppv;
  char cVar1;
  byte bVar2;
  short sVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  int in_ECX;
  byte *pbVar7;
  short sVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined2 local_40c;
  WCHAR local_20c [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_40c;
  if (DAT_00b16180 == '\0') {
    return local_4 & 0xffffff00;
  }
  pcVar4 = _strstr((char *)(in_ECX + 0x1e4),"death");
  sVar8 = (short)param_1;
  if (((pcVar4 == (char *)0x0) || (sVar8 != -1)) || (param_3 != '\0')) {
    pcVar4 = _strstr((char *)(in_ECX + 0x1e4),"success");
    if ((pcVar4 == (char *)0x0) || (*(short *)(in_ECX + 0xb0) != 8)) {
      pcVar4 = param_2;
      if ((*(short *)(in_ECX + 0xb0) == 8) &&
         (((*(byte *)(in_ECX + 0xdc) & 2) == 0 && (param_2 == (char *)0x0)))) {
        pcVar4 = (char *)(in_ECX + 0x1e4);
      }
      if ((*(short *)(in_ECX + 0xb0) == 4) && (sVar8 == 8)) {
        *(undefined2 *)(in_ECX + 0xb0) = 0;
      }
      sVar3 = *(short *)(in_ECX + 0xb0);
      if ((((((sVar3 != 8) && (sVar3 != 4)) || (sVar8 == -1)) && (sVar3 != sVar8)) ||
          ((*(byte *)(in_ECX + 0xdc) & 2) == 0)) &&
         (((sVar3 == 8 || (sVar3 == 4)) || (sVar8 != -1)))) {
        if (pcVar4 == (char *)0x0) {
          if (sVar8 == -1) {
            iVar6 = FUN_00440560();
            if (iVar6 == 0) {
              param_1 = 0;
            }
            else {
              uVar10 = 0;
              FUN_00440560(0);
              param_1 = FUN_004cad00(uVar10);
              param_1 = param_1 & 0xffff;
            }
          }
          pcVar4 = (char *)FUN_006a8e80(&local_40c,param_1);
          if ((char)pcVar4 == '\0') goto LAB_006ab1f3;
        }
        else {
          iVar6 = (int)&local_40c - (int)pcVar4;
          do {
            cVar1 = *pcVar4;
            pcVar4[iVar6] = cVar1;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
        }
        pcVar4 = (char *)FID_conflict___access(&local_40c,0);
        if (pcVar4 != (char *)0xffffffff) {
          if (*(short *)(in_ECX + 0xb0) != 8) {
            pbVar7 = (byte *)&local_40c;
            pbVar5 = (byte *)(in_ECX + 0x1e4);
            do {
              bVar2 = *pbVar5;
              bVar9 = bVar2 < *pbVar7;
              if (bVar2 != *pbVar7) {
LAB_006ab340:
                iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_006ab345;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar5[1];
              bVar9 = bVar2 < pbVar7[1];
              if (bVar2 != pbVar7[1]) goto LAB_006ab340;
              pbVar5 = pbVar5 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar2 != 0);
            iVar6 = 0;
LAB_006ab345:
            pcVar4 = (char *)0x0;
            if (iVar6 == 0) goto LAB_006ab1f3;
          }
          FUN_006aa170();
          ppv = (LPVOID *)(in_ECX + 0x70);
          pcVar4 = (char *)CoCreateInstance((IID *)&DAT_00a78fb4,(LPUNKNOWN)0x0,1,
                                            (IID *)&DAT_00a78f64,ppv);
          if (-1 < (int)pcVar4) {
            MultiByteToWideChar(0,0,(LPCSTR)&local_40c,-1,local_20c,0x104);
            pcVar4 = (char *)(**(code **)(*(int *)*ppv + 0x34))(*ppv,local_20c,0);
            if (-1 < (int)pcVar4) {
              (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_00a78f74,in_ECX + 0x74);
              if ((*(byte *)(in_ECX + 0xdc) & 0x18) == 0) {
                FUN_006aa1a0(*(undefined4 *)(in_ECX + 0x2f0),0);
              }
              pcVar4 = (char *)&local_40c;
              iVar6 = (in_ECX + 0x1e4) - (int)pcVar4;
              do {
                cVar1 = *pcVar4;
                pcVar4[iVar6] = cVar1;
                pcVar4 = pcVar4 + 1;
              } while (cVar1 != '\0');
              *(uint *)(in_ECX + 0xdc) = *(uint *)(in_ECX + 0xdc) | 1;
              *(short *)(in_ECX + 0xb0) = (short)param_1;
              return CONCAT31((int3)((uint)pcVar4 >> 8),1);
            }
          }
        }
      }
    }
    else {
      *(short *)(in_ECX + 0xb0) = sVar8;
    }
  }
LAB_006ab1f3:
  return (uint)pcVar4 & 0xffffff00;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006ab420(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int *unaff_EDI;
  int *piVar3;
  undefined1 *puStack_10;
  undefined1 local_8 [8];
  
  puStack_10 = local_8;
  if ((DAT_00b16180 != '\0') && ((*(byte *)(in_ECX + 0xdc) & 1) != 0)) {
    iVar2 = (**(code **)**(undefined4 **)(in_ECX + 0x70))
                      (*(undefined4 **)(in_ECX + 0x70),&DAT_00a78fa4);
    if (-1 < iVar2) {
      piVar3 = *(int **)(in_ECX + 0x70);
      iVar2 = (**(code **)*piVar3)(piVar3,&DAT_00a78f84);
      if (-1 < iVar2) {
        (**(code **)(puStack_10 + 0x20))(&puStack_10,0);
      }
      (**(code **)(puStack_10 + 8))();
      iVar2 = (**(code **)(*piVar3 + 0x1c))(piVar3);
      if ((*(byte *)(in_ECX + 0xdc) & 4) != 0) {
        (**(code **)(*unaff_EDI + 0x20))(unaff_EDI);
      }
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      if (-1 < iVar2) {
        *(uint *)(in_ECX + 0xdc) = *(uint *)(in_ECX + 0xdc) | 2;
      }
      uVar1 = *(uint *)(in_ECX + 0xdc);
      if (((uVar1 & 1) != 0) && (((uVar1 & 8) == 0 || ((uVar1 & 0x10) == 0)))) {
        FUN_006aa1a0(*(undefined4 *)(in_ECX + 0x2f0),0);
      }
    }
  }
  return;
}



undefined4 FUN_006ab500(undefined4 param_1,undefined4 param_2)

{
  int local_4;
  
  if (DAT_00b16178 != '\0') {
    local_4 = 0;
    FUN_0055e000(param_1,&local_4);
    if (local_4 != 0) {
      FUN_006b6b20(param_2);
    }
  }
  return 0;
}



undefined4 FUN_006ab540(undefined4 param_1,char param_2)

{
  float fVar1;
  float fVar2;
  uint *puVar3;
  char cVar4;
  float *pfVar5;
  uint3 uVar7;
  int iVar6;
  int in_ECX;
  float10 fVar8;
  double local_18;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = (double)((ulonglong)local_18 & 0xffffffff00000000);
  FUN_0055e000(param_1,&local_18);
  puVar3 = local_18._0_4_;
  if ((local_18._0_4_ != (uint *)0x0) && (DAT_00b16178 != '\0')) {
    cVar4 = FUN_006b7050();
    if (cVar4 == '\0') {
      return 0x80004005;
    }
    FUN_006b6f20(puVar3[0xf]);
    if ((*(char *)(in_ECX + 0xa4) != '\0') && (((byte)*puVar3 & 0x21 | 4) == 0)) {
      if (param_2 != '\0') {
        *puVar3 = *puVar3 | 0x10;
      }
      *puVar3 = *puVar3 | 0x200;
      return 0;
    }
    if ((*(char *)(in_ECX + 0xa5) != '\0') && ((*puVar3 & 0x20) == 0)) {
      fVar8 = (float10)FUN_006b6b90();
      local_18 = (double)fVar8;
      pfVar5 = (float *)FUN_00403c00();
      FUN_006b6b20((float)local_18 - *pfVar5);
      if ((*puVar3 & 0x1000) != 0) {
        return 0;
      }
    }
    if ((*puVar3 & 2) != 0) {
      local_18 = *(double *)(puVar3 + 8);
      local_10 = (float)puVar3[10];
      local_c = (float)puVar3[8] - *(float *)(in_ECX + 0x80);
      local_8 = (float)puVar3[9] - *(float *)(in_ECX + 0x84);
      local_4 = local_10 - *(float *)(in_ECX + 0x88);
      fVar8 = (float10)FUN_00982c30();
      fVar1 = (float)fVar8;
      fVar2 = (float)(int)puVar3[0xe];
      if ((int)puVar3[0xe] < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      uVar7 = (uint3)(CONCAT22((short)(puVar3[0xe] >> 0x10),
                               (ushort)(fVar2 < fVar1) << 8 |
                               (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                               (ushort)(fVar2 == fVar1) << 0xe) >> 8);
      if (fVar2 < fVar1) {
        iVar6 = CONCAT31(uVar7,1);
      }
      else {
        iVar6 = (uint)uVar7 << 8;
      }
      FUN_006b7130(iVar6);
    }
    if (((*puVar3 & 0x10) == 0) && (param_2 == '\0')) {
      FUN_006b6e60(0);
      return 0;
    }
    FUN_006b6e60(1);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006ab6f0(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  uint *puVar3;
  undefined2 extraout_var;
  uint3 uVar5;
  int iVar4;
  int in_ECX;
  float10 fVar6;
  uint *local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_1c = (uint *)0x0;
  FUN_0055e000(param_1,&local_1c);
  puVar3 = local_1c;
  if ((DAT_00b16178 != '\0') &&
     (((*(char *)(in_ECX + 0xa4) == '\0' || ((local_1c != (uint *)0x0 && ((*local_1c & 0x21) != 0)))
       ) && (local_1c != (uint *)0x0)))) {
    if ((*(char *)(in_ECX + 0xa5) != '\0') && ((*local_1c & 0x20) == 0)) {
      fVar6 = (float10)FUN_006b6b90();
      FUN_006b6b20((float)(fVar6 - (float10)_DAT_00b161b8));
      if ((*puVar3 & 0x1000) != 0) {
        return 0;
      }
    }
    FUN_006b6f20(puVar3[0xf]);
    if ((*puVar3 & 2) != 0) {
      local_18 = (float)puVar3[8];
      local_14 = (float)puVar3[9];
      local_10 = (float)puVar3[10];
      local_c = local_18 - *(float *)(in_ECX + 0x80);
      local_8 = local_14 - *(float *)(in_ECX + 0x84);
      local_4 = local_10 - *(float *)(in_ECX + 0x88);
      fVar6 = (float10)FUN_00982c30();
      fVar1 = (float)fVar6;
      fVar2 = (float)(int)puVar3[0xe];
      if ((int)puVar3[0xe] < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      uVar5 = (uint3)(CONCAT22(extraout_var,
                               (ushort)(fVar2 < fVar1) << 8 |
                               (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                               (ushort)(fVar2 == fVar1) << 0xe) >> 8);
      if (fVar2 < fVar1) {
        iVar4 = CONCAT31(uVar5,1);
      }
      else {
        iVar4 = (uint)uVar5 << 8;
      }
      FUN_006b7130(iVar4);
    }
    FUN_006b6a50(param_2);
  }
  return 0;
}



undefined4 FUN_006ab850(undefined4 param_1)

{
  int local_4;
  
  if (DAT_00b16178 != '\0') {
    local_4 = 0;
    FUN_0055e000(param_1,&local_4);
    if (local_4 != 0) {
      FUN_006b6aa0();
    }
  }
  return 0;
}



undefined4 FUN_006ab890(undefined4 param_1)

{
  int local_4;
  
  if (DAT_00b16178 != '\0') {
    local_4 = 0;
    FUN_0055e000(param_1,&local_4);
    if (local_4 != 0) {
      FUN_006b6ac0();
    }
  }
  return 0;
}



void FUN_006ab8d0(undefined4 param_1,char param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b44b6;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b33ea0;
  if (DAT_00b16178 == '\0') goto LAB_006ab9b9;
  param_3 = DAT_00b33ea0 + param_3;
  iVar3 = FUN_00401f00();
  if (param_2 == '\0') {
    local_4 = 1;
    if (iVar3 == 0) goto LAB_006ab97a;
    uVar4 = FUN_006aa590(8,param_1,iVar2,param_3);
  }
  else {
    local_4 = 0;
    if (iVar3 == 0) {
LAB_006ab97a:
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_006aa590(7,param_1,iVar2,param_3);
    }
  }
  piVar1 = *(int **)(in_ECX + 0x308);
  local_4 = 0xffffffff;
  puVar5 = (undefined4 *)(**(code **)(*piVar1 + 4))();
  puVar5[2] = uVar4;
  *puVar5 = 0;
  puVar5[1] = piVar1[2];
  if ((undefined4 *)piVar1[2] == (undefined4 *)0x0) {
    piVar1[1] = (int)puVar5;
  }
  else {
    *(undefined4 *)piVar1[2] = puVar5;
  }
  piVar1[3] = piVar1[3] + 1;
  piVar1[2] = (int)puVar5;
LAB_006ab9b9:
  *unaff_FS_OFFSET = local_c;
  return;
}



bool FUN_006ab9d0(undefined4 param_1)

{
  char cVar1;
  int local_4;
  
  if (DAT_00b16178 != '\0') {
    local_4 = 0;
    FUN_0055e000(param_1,&local_4);
    if (local_4 != 0) {
      cVar1 = FUN_006b6af0();
      return cVar1 != '\0';
    }
  }
  return false;
}



undefined4 FUN_006aba20(undefined4 param_1,undefined4 param_2)

{
  int local_4;
  
  if (DAT_00b16178 != '\0') {
    local_4 = 0;
    FUN_0055e000(param_1,&local_4);
    if (local_4 != 0) {
      FUN_006b6f20(param_2);
    }
  }
  return 0;
}



undefined4 FUN_006aba60(undefined4 param_1,ushort param_2)

{
  ushort uVar1;
  
  if (DAT_00b16178 != '\0') {
    uVar1 = 10000;
    if (param_2 < 0x2711) {
      uVar1 = param_2;
    }
    _param_2 = 0;
    FUN_0055e000(param_1,&param_2);
    if (_param_2 != 0) {
      *(ushort *)(_param_2 + 0x44) = uVar1;
      FUN_006b6f20(*(undefined4 *)(_param_2 + 0x3c));
    }
  }
  return 0;
}



float10 FUN_006abac0(undefined4 param_1)

{
  int local_4;
  
  if (DAT_00b16178 != '\0') {
    local_4 = 0;
    FUN_0055e000(param_1,&local_4);
    if (local_4 != 0) {
      return (float10)*(float *)(local_4 + 0x3c);
    }
  }
  return (float10)0;
}



void FUN_006abb00(uint param_1)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a76e30;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a7714c;
  return;
}



void FUN_006abb50(uint param_1)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a76e50;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a7716c;
  return;
}



void FUN_006abba0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c63e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7714c;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a76e30;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006abc10(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6418;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7716c;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a76e50;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006abc80(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar8;
  int local_98;
  undefined1 auStack_94 [52];
  int iStack_60;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c645c;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_98;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff58;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  _memset(in_ECX,0,0x328);
  in_ECX[0x33] = DAT_00b33ea0;
  *(undefined1 *)(in_ECX + 0x29) = 0;
  in_ECX[0x2d] = 1000000000;
  local_98 = FUN_00401f00(0x10);
  local_4 = 0;
  if (local_98 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_006abb00(0x25);
  }
  local_4 = 0xffffffff;
  in_ECX[0xc0] = uVar2;
  local_98 = FUN_00401f00(0x10,uVar1);
  local_4 = 1;
  if (local_98 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_006abb50(0x25);
  }
  local_4 = 0xffffffff;
  in_ECX[0xc1] = uVar2;
  puVar3 = (undefined4 *)FUN_00401f00(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[3] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_00a770a4;
  }
  in_ECX[200] = puVar3;
  DAT_00b3c214 = in_ECX;
  puVar3 = (undefined4 *)FUN_00401f00(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[3] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_00a770b4;
  }
  puVar6 = in_ECX + 2;
  in_ECX[0xc2] = puVar3;
  *(undefined1 *)((int)in_ECX + 0xa6) = 0;
  _DAT_00b161b8 = 0;
  iVar4 = DirectSoundCreate8(0,puVar6,0);
  if ((iVar4 == 0) &&
     (iVar4 = (**(code **)(*(int *)*puVar6 + 0x18))((int *)*puVar6,param_1,2), -1 < iVar4)) {
    in_ECX[4] = 0x60;
    in_ECX[0x1c] = 0;
    iVar4 = (**(code **)(*(int *)*puVar6 + 0x10))((int *)*puVar6,in_ECX + 4);
    if (-1 < iVar4) {
      in_ECX[0x2b] = in_ECX[0x2b] | 1;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_34 = 0x24;
      (**(code **)(*(int *)*puVar6 + 0x10))((int *)*puVar6,auStack_94);
      uStack_38 = 0x91;
      iVar4 = (**(code **)(*(int *)*puVar6 + 0xc))((int *)*puVar6,auStack_3c,in_ECX + 3,0);
      if (-1 < iVar4) {
        puVar6 = (undefined4 *)in_ECX[3];
        puVar3 = in_ECX + 0x1e;
        iVar4 = (**(code **)*puVar6)(puVar6,&DAT_00a78e84,puVar3);
        if (-1 < iVar4) {
          (**(code **)(*(int *)*puVar3 + 0x38))((int *)*puVar3,0x7f7fffff,0x7f7fffff,0x7f7fffff,0);
          pfVar5 = (float *)FUN_00403c00();
          if (10.0 < *pfVar5) {
            _DAT_00b161d8 = 0x41200000;
          }
          pfVar5 = (float *)FUN_00403c00();
          if (*pfVar5 < 0.0) {
            _DAT_00b161d8 = 0x3f800000;
          }
          iVar4 = *(int *)*puVar3;
          puVar6 = (undefined4 *)FUN_00403c00();
          (**(code **)(iVar4 + 0x3c))(*puVar3,*puVar6,0);
          *(undefined1 *)((int)in_ECX + 0xa5) = 0;
          in_ECX[0x1d] = 0;
          if (iStack_60 != 0) {
            in_ECX[0x2b] = in_ECX[0x2b] | 4;
          }
          in_ECX[0xc9] = 0;
          in_ECX[0x34] = DAT_00b33ea0;
          *(undefined2 *)(in_ECX + 0x2c) = 0;
          CoInitialize((LPVOID)0x0);
          in_ECX[0x37] = 0;
          fVar8 = (float10)FUN_00404e30();
          in_ECX[0x2e] = (float)fVar8;
          piVar7 = (int *)FUN_00403c00();
          local_98 = *piVar7;
          in_ECX[0xbe] = local_98;
          in_ECX[0xbc] = local_98;
          puVar3 = (undefined4 *)FUN_00403c00();
          in_ECX[0x31] = *puVar3;
          fVar8 = (float10)FUN_00404e30();
          in_ECX[0x2f] = (float)fVar8;
          fVar8 = (float10)FUN_00404e30();
          in_ECX[0x30] = (float)fVar8;
          in_ECX[0xbd] = 0;
          in_ECX[0x32] = DAT_00b33ea0;
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006ac000(byte param_1)

{
  FUN_006aa660();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ac020(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  LONG LVar6;
  int in_ECX;
  int *piVar7;
  int iStack_c;
  int iStack_8;
  undefined1 auStack_4 [4];
  
  _DAT_00b16190 = *(undefined4 *)(in_ECX + 0xb8);
  _DAT_00b16198 = *(undefined4 *)(in_ECX + 0xbc);
  _DAT_00b161a8 = *(undefined4 *)(in_ECX + 0xc4);
  _DAT_00b161a0 = *(undefined4 *)(in_ECX + 0x2f8);
  if ((*(byte *)(in_ECX + 0xdc) & 1) != 0) {
    FUN_006a8db0();
    (**(code **)(**(int **)(in_ECX + 0x74) + 8))(*(int **)(in_ECX + 0x74));
    (**(code **)(**(int **)(in_ECX + 0x70) + 8))(*(int **)(in_ECX + 0x70));
    *(uint *)(in_ECX + 0xdc) = *(uint *)(in_ECX + 0xdc) & 0xfffffffe;
  }
  if (*(int *)(in_ECX + 0x324) != 0) {
    FUN_006b73c0();
    iVar1 = *(int *)(in_ECX + 0x324);
    if (iVar1 != 0) {
      FUN_006b73e0();
      FUN_00401f20(iVar1);
    }
  }
  iVar1 = *(int *)(in_ECX + 0x300);
  if (iVar1 != 0) {
    uVar5 = 0;
    if (*(uint *)(iVar1 + 4) != 0) {
      piVar7 = *(int **)(iVar1 + 8);
      do {
        if (*piVar7 != 0) {
          iStack_c = (*(int **)(iVar1 + 8))[uVar5];
          goto joined_r0x006ac0e0;
        }
        uVar5 = uVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (uVar5 < *(uint *)(iVar1 + 4));
    }
    iStack_c = 0;
joined_r0x006ac0e0:
    while (iStack_c != 0) {
      FUN_00452600(&iStack_c,auStack_4,&iStack_8);
      iVar1 = iStack_8;
      if (iStack_8 != 0) {
        FUN_006b6700();
        FUN_00401f20(iVar1);
      }
    }
    if (*(undefined4 **)(in_ECX + 0x300) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x300))(1);
    }
  }
  if (*(undefined4 **)(in_ECX + 0x304) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x304))(1);
  }
  if (*(undefined4 **)(in_ECX + 800) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 800))(1);
  }
  if (*(int *)(in_ECX + 0x308) != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x308) + 0xc);
    while (iVar1 != 0) {
      piVar7 = *(int **)(in_ECX + 0x308);
      piVar2 = (int *)piVar7[1];
      iVar1 = piVar2[2];
      iVar3 = *piVar2;
      piVar7[1] = iVar3;
      if (iVar3 == 0) {
        piVar7[2] = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      (**(code **)(*piVar7 + 8))(piVar2);
      piVar7[3] = piVar7[3] + -1;
      if (iVar1 != 0) {
        puVar4 = *(undefined4 **)(iVar1 + 0x10);
        if (((puVar4 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar4 + 1), LVar6 == 0)
            ) && (puVar4 != (undefined4 *)0x0)) {
          (**(code **)*puVar4)(1);
        }
        FUN_00401f20(iVar1);
      }
      iVar1 = *(int *)(*(int *)(in_ECX + 0x308) + 0xc);
    }
    if (*(undefined4 **)(in_ECX + 0x308) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x308))(1);
    }
  }
  piVar7 = *(int **)(in_ECX + 8);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
  }
  CoUninitialize();
  FUN_006af870();
  return;
}



void FUN_006ac210(void)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  LONG LVar6;
  int in_ECX;
  undefined4 *puVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b23e8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar7 = (undefined4 *)0x0;
  local_1c = 0;
  local_18 = (undefined4 *)0x0;
  uVar1 = *(uint *)(*(int *)(in_ECX + 0x304) + 4);
  uVar5 = 0;
  local_4 = 0;
  if (uVar1 != 0) {
    piVar2 = *(int **)(*(int *)(in_ECX + 0x304) + 8);
    piVar8 = piVar2;
    do {
      if (*piVar8 != 0) {
        local_14 = piVar2[uVar5];
        goto joined_r0x006ac27b;
      }
      uVar5 = uVar5 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar5 < uVar1);
  }
  local_14 = 0;
joined_r0x006ac27b:
  while (local_14 != 0) {
    FUN_007b2600(&local_14,&local_10,&local_18);
    uVar3 = local_10;
    FUN_004524c0(local_10);
    puVar7 = local_18;
    if (local_18 != (undefined4 *)0x0) {
      FUN_006f9710(local_18,uVar4);
    }
    FUN_0055e000(uVar3,&local_1c);
    if (local_1c != 0) {
      FUN_006b6ac0();
      FUN_006aa9c0(&local_1c);
    }
  }
  local_4 = 0xffffffff;
  if ((puVar7 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar7 + 1), LVar6 == 0)) {
    (**(code **)*puVar7)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006ac330(uint param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  int *piVar5;
  uint *local_8;
  int local_4;
  
  uVar3 = param_1;
  uVar1 = *(uint *)(*(int *)(in_ECX + 0x300) + 4);
  uVar4 = 0;
  local_8 = (uint *)0x0;
  if (uVar1 != 0) {
    piVar2 = *(int **)(*(int *)(in_ECX + 0x300) + 8);
    piVar5 = piVar2;
    do {
      if (*piVar5 != 0) {
        local_4 = piVar2[uVar4];
        goto joined_r0x006ac36a;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar4 < uVar1);
  }
  local_4 = 0;
joined_r0x006ac36a:
  while (local_4 != 0) {
    FUN_00452600(&local_4,&param_1,&local_8);
    if ((*local_8 & uVar3) != 0) {
      FUN_006b6ac0();
      FUN_006aa9c0(&local_8);
    }
  }
  return;
}



void FUN_006ac3c0(void)

{
  FUN_006ac330(0x1000);
  return;
}



void FUN_006ac3d0(void)

{
  FUN_006ac330(4);
  return;
}



void FUN_006ac3e0(undefined4 param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_2 + 0x3c) != 0)) {
    InterlockedIncrement((LONG *)(*(int *)(param_2 + 0x3c) + 4));
    FUN_006aa3b0(param_1);
  }
  return;
}



void FUN_006ac420(int param_1,float param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  LONG LVar6;
  int in_ECX;
  int *piVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  undefined2 in_FPUControlWord;
  undefined4 *local_24;
  uint *local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  longlong local_14;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c64a0;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar8 = (undefined4 *)0x0;
  local_20 = (uint *)0x0;
  local_24 = (undefined4 *)0x0;
  puVar1 = *(undefined4 **)(param_1 + 0x3c);
  local_4 = 0;
  local_1c = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 1);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if ((puVar1 == (undefined4 *)0x0) || (DAT_00b16178 == '\0')) {
    local_4 = (uint)local_4._1_3_ << 8;
    if ((puVar1 == (undefined4 *)0x0) || (LVar6 = InterlockedDecrement(puVar1 + 1), LVar6 != 0))
    goto LAB_006ac5f5;
    puVar8 = (undefined4 *)*puVar1;
  }
  else {
    param_1 = FUN_006a9030(uVar4);
joined_r0x006ac49b:
    if (param_1 != 0) {
      FUN_007b2600(&param_1,&local_18,&local_24);
      uVar3 = local_18;
      puVar8 = local_24;
      if ((local_24 == puVar1) &&
         (FUN_0055e000(local_18,&local_20), puVar1 = local_1c, local_20 != (uint *)0x0)) {
        *local_20 = *local_20 | 0x100;
        FUN_004524c0(uVar3);
        if (puVar8 != (undefined4 *)0x0) {
          FUN_006f9710(puVar8);
        }
        if (0.1 <= param_2) {
          param_1 = CONCAT22(param_1._2_2_,in_FPUControlWord);
          local_14 = (longlong)ROUND(param_2 * 1000.0);
          FUN_006ab8d0(uVar3,1,(undefined4)local_14);
        }
        else {
          FUN_006b6ac0();
        }
        uVar4 = *(uint *)(*(int *)(in_ECX + 0x304) + 4);
        uVar5 = 0;
        puVar1 = local_1c;
        if (uVar4 != 0) {
          piVar2 = *(int **)(*(int *)(in_ECX + 0x304) + 8);
          piVar7 = piVar2;
          do {
            if (*piVar7 != 0) {
              param_1 = piVar2[uVar5];
              goto joined_r0x006ac49b;
            }
            uVar5 = uVar5 + 1;
            piVar7 = piVar7 + 1;
          } while (uVar5 < uVar4);
        }
        param_1 = 0;
      }
      goto joined_r0x006ac49b;
    }
    local_4 = local_4 & 0xffffff00;
    LVar6 = InterlockedDecrement(puVar1 + 1);
    if (LVar6 == 0) {
      (**(code **)*puVar1)(1);
    }
    local_4 = -1;
    if ((puVar8 == (undefined4 *)0x0) || (LVar6 = InterlockedDecrement(puVar8 + 1), LVar6 != 0))
    goto LAB_006ac5f5;
    puVar8 = (undefined4 *)*puVar8;
  }
  (*(code *)*puVar8)(1);
LAB_006ac5f5:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_006ac610(int *param_1,char *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int in_ECX;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int *unaff_FS_OFFSET;
  char *local_148;
  int local_144 [2];
  int local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c64ce;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_148;
  *unaff_FS_OFFSET = (int)&local_c;
  local_148 = param_2;
  if (DAT_00b16178 == '\0') {
    *param_1 = 0;
    uVar3 = 1;
    goto LAB_006ac9be;
  }
  if (param_4 == 0) {
    *(int *)(in_ECX + 0xb4) = *(int *)(in_ECX + 0xb4) + 1;
  }
  if (*param_1 == 0) {
    local_13c = FUN_00401f00();
    local_4 = 0;
    if (local_13c == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_006b6dc0(local_148);
    }
    *param_1 = iVar4;
  }
  local_4 = 0xffffffff;
  local_144[0] = 0;
  iVar4 = __strnicmp(local_148,"data",3);
  pcVar8 = local_148;
  if ((iVar4 == 0) || (iVar4 = __strnicmp(local_148,".\\data",5), iVar4 == 0)) {
    iVar4 = -(int)pcVar8;
    do {
      cVar1 = *pcVar8;
      pcVar8[(int)(local_114 + iVar4)] = cVar1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
  }
  else {
    builtin_strncpy(local_114 + 8,"nd\\",4);
    builtin_strncpy(local_114 + 4,"\\sou",4);
    builtin_strncpy(local_114,"data",4);
    pcVar5 = pcVar8;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar9 = (char *)((int)&local_118 + 3);
    do {
      pcVar7 = pcVar9 + 1;
      pcVar9 = pcVar9 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = pcVar8;
    for (uVar6 = (uint)((int)pcVar5 - (int)pcVar8) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = (int)pcVar5 - (int)pcVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  pcVar8 = local_114;
  cVar1 = local_114[0];
  while (cVar1 != '\0') {
    iVar4 = _tolower((int)*pcVar8);
    *pcVar8 = (char)iVar4;
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
  }
  local_138 = 0;
  local_134 = 0;
  local_130 = 0;
  local_12c = 0;
  local_124 = 0;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_128 = 0;
  pcVar8 = _strstr(local_114,"voice");
  if (pcVar8 == (char *)0x0) {
    iVar4 = 0;
    if (*param_1 != 0) {
      pcVar8 = local_114;
      do {
        pcVar5 = pcVar8;
        pcVar8 = pcVar5 + 1;
      } while (*pcVar5 != '\0');
      if (pcVar5[-1] == '\\') {
        FUN_006a9cd0();
      }
      uVar2 = FUN_006aabd0(local_144,local_114);
      *(undefined2 *)(*param_1 + 0x1c) = uVar2;
      iVar4 = *param_1;
      if (*(short *)(iVar4 + 0x1c) == 0) {
        uVar2 = FUN_006aabd0(local_144,local_148);
        *(undefined2 *)(*param_1 + 0x1c) = uVar2;
        iVar4 = *param_1;
        if (*(short *)(iVar4 + 0x1c) == 0) goto LAB_006ac872;
      }
    }
    *(undefined4 *)(iVar4 + 8) = local_130;
  }
  else {
    uVar2 = FUN_006a9e00(local_144);
    *(undefined2 *)(*param_1 + 0x1c) = uVar2;
    if (*(short *)(*param_1 + 0x1c) == 0) {
      uVar2 = FUN_006aabd0(local_144,local_114);
      *(undefined2 *)(*param_1 + 0x1c) = uVar2;
      if (*(short *)(*param_1 + 0x1c) == 0) {
        uVar2 = FUN_006aabd0(local_144,local_148);
        *(undefined2 *)(*param_1 + 0x1c) = uVar2;
        iVar4 = *param_1;
        if (*(short *)(iVar4 + 0x1c) == 0) {
LAB_006ac872:
          if (iVar4 != 0) {
            FUN_006b6700();
            FUN_00401f20();
          }
          *param_1 = 0;
          uVar3 = 0x80004005;
          goto LAB_006ac9be;
        }
      }
    }
  }
  if ((DAT_00b161c0 != '\0') && (iVar4 = FUN_006b67d0(), iVar4 == 0)) {
    pcVar8 = _strstr(local_114,"\\");
    pcVar8 = pcVar8 + 1;
    pcVar5 = _strstr(pcVar8,"\\");
    while (pcVar5 != (char *)0x0) {
      pcVar8 = _strstr(pcVar8,"\\");
      pcVar8 = pcVar8 + 1;
      pcVar5 = _strstr(pcVar8,"\\");
    }
    FUN_006b6770();
  }
  if ((*param_1 != 0) && (local_144[0] != 0)) {
    FUN_006b67f0();
  }
  FUN_006b6f20();
  FUN_00401f20();
  uVar3 = 0;
LAB_006ac9be:
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



undefined4 FUN_006ac9f0(int param_1)

{
  undefined4 uVar1;
  int local_4;
  
  local_4 = 0;
  FUN_0055e000(param_1,&local_4);
  param_1 = local_4;
  if (local_4 == 0) {
    return 0x80004005;
  }
  uVar1 = FUN_006aa9c0(&param_1);
  return uVar1;
}



bool FUN_006aca40(undefined4 param_1)

{
  int local_4;
  
  local_4 = 0;
  FUN_0055e000(param_1,&local_4);
  return local_4 != 0;
}



undefined2 FUN_006aca70(undefined4 param_1)

{
  int local_4;
  
  if (DAT_00b16178 != '\0') {
    local_4 = 0;
    FUN_0055e000(param_1,&local_4);
    if (local_4 != 0) {
      return *(undefined2 *)(local_4 + 0x1c);
    }
  }
  return 0;
}



undefined4 FUN_006acab0(undefined4 param_1,uint *param_2)

{
  int iVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  uint **local_20;
  uint uStack_1c;
  uint *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b3ba6;
  local_c = *unaff_FS_OFFSET;
  uStack_1c = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b16178 == '\0') goto LAB_006acbb7;
  local_20 = &local_10;
  local_10 = (uint *)0x0;
  FUN_0055e000(param_1);
  if (local_10 == (uint *)0x0) {
    *unaff_FS_OFFSET = local_c;
    return 0x80004005;
  }
  *local_10 = *local_10 | 0x200;
  local_20 = (uint **)0x14;
  if (*(char *)(in_ECX + 0xa6) == '\0') {
    iVar1 = FUN_00401f00();
    local_4 = 1;
    if (iVar1 == 0) goto LAB_006acb99;
    local_10 = (uint *)&local_20;
    local_20 = (uint **)0x0;
    param_2 = (uint *)FUN_006aa590(3,param_1,DAT_00b33ea0 + (int)param_2,0);
  }
  else {
    iVar1 = FUN_00401f00();
    local_4 = 0;
    if (iVar1 == 0) {
LAB_006acb99:
      param_2 = (uint *)0x0;
    }
    else {
      local_10 = (uint *)&local_20;
      local_20 = (uint **)0x0;
      param_2 = (uint *)FUN_006aa590(3,param_1,-(int)param_2,0);
    }
  }
  local_20 = &param_2;
  local_4 = 0xffffffff;
  FUN_005b1e20();
LAB_006acbb7:
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 FUN_006acbf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_4;
  
  if (DAT_00b16178 == '\0') {
    return 0;
  }
  local_4 = 0;
  FUN_0055e000(param_1,&local_4);
  if (local_4 != 0) {
    uVar1 = FUN_006b6be0(param_2,param_3,param_4);
    return uVar1;
  }
  return 0x80004005;
}



void FUN_006acc50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int local_4;
  
  if (DAT_00b16178 != '\0') {
    local_4 = 0;
    FUN_0055e000(param_1,&local_4);
    if (local_4 != 0) {
      FUN_006b6d40(param_2,param_3,0);
    }
  }
  return;
}



int FUN_006acca0(int param_1,undefined4 param_2)

{
  char cVar1;
  int local_4;
  
  local_4 = 0;
  cVar1 = FUN_0055e000(param_2,&local_4);
  if (cVar1 != '\0') {
    if (local_4 == param_1) {
      return param_1;
    }
    FUN_004a7a60("AudioID Collision(%i)",param_2);
    FUN_006b6ac0();
    FUN_006ac9f0(param_2);
  }
  FUN_00452570(param_2,param_1);
  return param_1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006acd10(ushort param_1)

{
  LPVOID *ppv;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  byte *pbVar7;
  HRESULT HVar8;
  int in_ECX;
  byte *pbVar9;
  char *pcVar10;
  bool bVar11;
  undefined4 uVar12;
  uint local_410;
  undefined2 local_40c;
  WCHAR local_20c [260];
  uint local_4;
  
  iVar6 = DAT_00b33ea0;
  local_4 = DAT_00b30aac ^ (uint)&local_410;
  *(int *)(in_ECX + 0x2e8) = DAT_00b33ea0;
  uVar3 = *(uint *)(in_ECX + 0xdc);
  *(int *)(in_ECX + 0x2ec) = iVar6 + 0x6a4;
  *(ushort *)(in_ECX + 0x2fc) = param_1;
  if ((uVar3 & 2) != 0) {
    if (*(ushort *)(in_ECX + 0xb0) == param_1) {
      return;
    }
    *(undefined4 *)(in_ECX + 0x2f4) = *(undefined4 *)(in_ECX + 0x2f8);
    *(uint *)(in_ECX + 0xdc) = uVar3 | 8;
    return;
  }
  *(undefined4 *)(in_ECX + 0x2f4) = *(undefined4 *)(in_ECX + 0x2f8);
  local_410 = (uint)param_1;
  *(undefined4 *)(in_ECX + 0x2f0) = 0;
  *(uint *)(in_ECX + 0xdc) = uVar3 & 0xfffffff7 | 0x10;
  pcVar10 = (char *)0x0;
  if (DAT_00b16180 != '\0') {
    pcVar5 = _strstr((char *)(in_ECX + 0x1e4),"death");
    if ((pcVar5 == (char *)0x0) || (param_1 != 0xffff)) {
      pcVar5 = _strstr((char *)(in_ECX + 0x1e4),"success");
      if ((pcVar5 != (char *)0x0) && (*(short *)(in_ECX + 0xb0) == 8)) {
        *(ushort *)(in_ECX + 0xb0) = param_1;
        FUN_006ab420();
        return;
      }
      if ((*(short *)(in_ECX + 0xb0) == 8) && ((*(byte *)(in_ECX + 0xdc) & 2) == 0)) {
        pcVar10 = (char *)(in_ECX + 0x1e4);
      }
      if ((*(short *)(in_ECX + 0xb0) == 4) && (param_1 == 8)) {
        *(undefined2 *)(in_ECX + 0xb0) = 0;
      }
      uVar2 = *(ushort *)(in_ECX + 0xb0);
      if ((((((uVar2 != 8) && (uVar2 != 4)) || (param_1 == 0xffff)) && (uVar2 != param_1)) ||
          ((*(byte *)(in_ECX + 0xdc) & 2) == 0)) &&
         (((uVar2 == 8 || (uVar2 == 4)) || (param_1 != 0xffff)))) {
        if (pcVar10 == (char *)0x0) {
          if (param_1 == 0xffff) {
            iVar6 = FUN_00440560();
            if (iVar6 == 0) {
              local_410 = 0;
            }
            else {
              uVar12 = 0;
              FUN_00440560(0);
              local_410 = FUN_004cad00(uVar12);
              local_410 = local_410 & 0xffff;
            }
          }
          cVar4 = FUN_006a8e80(&local_40c,local_410);
          if (cVar4 == '\0') goto LAB_006acfe6;
        }
        else {
          iVar6 = (int)&local_40c - (int)pcVar10;
          do {
            cVar4 = *pcVar10;
            pcVar10[iVar6] = cVar4;
            pcVar10 = pcVar10 + 1;
          } while (cVar4 != '\0');
        }
        iVar6 = FID_conflict___access(&local_40c,0);
        if (iVar6 != -1) {
          if (*(short *)(in_ECX + 0xb0) != 8) {
            pbVar9 = (byte *)&local_40c;
            pbVar7 = (byte *)(in_ECX + 0x1e4);
            do {
              bVar1 = *pbVar7;
              bVar11 = bVar1 < *pbVar9;
              if (bVar1 != *pbVar9) {
LAB_006acf20:
                iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_006acf25;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar11 = bVar1 < pbVar9[1];
              if (bVar1 != pbVar9[1]) goto LAB_006acf20;
              pbVar7 = pbVar7 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_006acf25:
            if (iVar6 == 0) goto LAB_006acfe6;
          }
          FUN_006aa170();
          ppv = (LPVOID *)(in_ECX + 0x70);
          HVar8 = CoCreateInstance((IID *)&DAT_00a78fb4,(LPUNKNOWN)0x0,1,(IID *)&DAT_00a78f64,ppv);
          if (-1 < HVar8) {
            MultiByteToWideChar(0,0,(LPCSTR)&local_40c,-1,local_20c,0x104);
            iVar6 = (**(code **)(*(int *)*ppv + 0x34))(*ppv,local_20c,0);
            if (-1 < iVar6) {
              (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_00a78f74,in_ECX + 0x74);
              if ((*(byte *)(in_ECX + 0xdc) & 0x18) == 0) {
                FUN_006aa1a0(*(undefined4 *)(in_ECX + 0x2f0),0);
              }
              pcVar10 = (char *)&local_40c;
              iVar6 = (in_ECX + 0x1e4) - (int)pcVar10;
              do {
                cVar4 = *pcVar10;
                pcVar10[iVar6] = cVar4;
                pcVar10 = pcVar10 + 1;
              } while (cVar4 != '\0');
              *(uint *)(in_ECX + 0xdc) = *(uint *)(in_ECX + 0xdc) | 1;
              *(undefined2 *)(in_ECX + 0xb0) = (undefined2)local_410;
            }
          }
        }
      }
    }
  }
LAB_006acfe6:
  FUN_006ab420();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006ad030(void)

{
  LPVOID *ppvVar1;
  byte *pbVar2;
  float fVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  short sVar9;
  undefined2 uVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  HRESULT HVar16;
  int in_ECX;
  undefined4 unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  int *unaff_EDI;
  bool bVar17;
  int *piVar18;
  float local_420;
  int *piStack_41c;
  int iStack_418;
  int local_414;
  undefined2 uStack_40c;
  WCHAR aWStack_20c [260];
  uint local_4;
  
  uVar7 = DAT_00b33ea0;
  local_4 = DAT_00b30aac ^ (uint)&local_420;
  if (DAT_00b16180 == '\0') {
    return;
  }
  if (*(undefined4 **)(in_ECX + 0x70) == (undefined4 *)0x0) {
    iVar11 = FUN_006ecc80();
    if (iVar11 == 0) {
      return;
    }
    cVar8 = FUN_004c97f0();
    if (cVar8 == '\0') {
      puVar12 = (undefined4 *)(**(code **)(*DAT_00b333c4 + 0x174))();
      FUN_004c9cf0();
      (**(code **)(*DAT_00b333c4 + 0x174))();
      iVar11 = FUN_0044a270(*puVar12);
    }
    if ((*(short *)(in_ECX + 0xb0) != 4) && (iVar11 != 0)) {
      FUN_004cad00();
      FUN_006acd10();
      return;
    }
    if (DAT_00b16180 == '\0') goto LAB_006addee;
    pbVar2 = (byte *)(in_ECX + 0x1e4);
    _strstr((char *)pbVar2,"death");
    pcVar13 = _strstr((char *)pbVar2,"success");
    if ((pcVar13 == (char *)0x0) || (*(short *)(in_ECX + 0xb0) != 8)) {
      if (*(short *)(in_ECX + 0xb0) == 8) {
        pbVar14 = (byte *)0x0;
        if ((*(byte *)(in_ECX + 0xdc) & 2) == 0) {
          pbVar14 = pbVar2;
        }
LAB_006ad161:
        if ((*(byte *)(in_ECX + 0xdc) & 2) != 0) goto LAB_006addee;
      }
      else {
        pbVar14 = (byte *)0x0;
        if (*(short *)(in_ECX + 0xb0) == 4) goto LAB_006ad161;
      }
      if (pbVar14 == (byte *)0x0) {
        cVar8 = FUN_006a8e80();
        if (cVar8 == '\0') goto LAB_006addee;
      }
      else {
        iVar11 = (int)&uStack_40c - (int)pbVar14;
        do {
          bVar4 = *pbVar14;
          pbVar14[iVar11] = bVar4;
          pbVar14 = pbVar14 + 1;
        } while (bVar4 != 0);
      }
      iVar11 = FID_conflict___access(&uStack_40c,0);
      if (iVar11 == -1) goto LAB_006addee;
      if (*(short *)(in_ECX + 0xb0) != 8) {
        pbVar14 = (byte *)&uStack_40c;
        pbVar15 = pbVar2;
        do {
          bVar4 = *pbVar15;
          bVar17 = bVar4 < *pbVar14;
          if (bVar4 != *pbVar14) {
LAB_006ad1f0:
            iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_006ad1f5;
          }
          if (bVar4 == 0) break;
          bVar4 = pbVar15[1];
          bVar17 = bVar4 < pbVar14[1];
          if (bVar4 != pbVar14[1]) goto LAB_006ad1f0;
          pbVar15 = pbVar15 + 2;
          pbVar14 = pbVar14 + 2;
        } while (bVar4 != 0);
        iVar11 = 0;
LAB_006ad1f5:
        if (iVar11 == 0) goto LAB_006addee;
      }
      FUN_006aa170();
      ppvVar1 = (LPVOID *)(in_ECX + 0x70);
      HVar16 = CoCreateInstance((IID *)&DAT_00a78fb4,(LPUNKNOWN)0x0,1,(IID *)&DAT_00a78f64,ppvVar1);
      if (HVar16 < 0) goto LAB_006addee;
      MultiByteToWideChar(0,0,(LPCSTR)&uStack_40c,-1,aWStack_20c,0x104);
      iVar11 = (**(code **)(*(int *)*ppvVar1 + 0x34))();
      if (iVar11 < 0) goto LAB_006addee;
      (*(code *)**(undefined4 **)*ppvVar1)();
      if ((*(byte *)(in_ECX + 0xdc) & 0x18) == 0) {
        FUN_006aa1a0();
      }
      pcVar13 = (char *)&uStack_40c;
      iVar11 = (int)pbVar2 - (int)pcVar13;
      do {
        cVar8 = *pcVar13;
        pcVar13[iVar11] = cVar8;
        pcVar13 = pcVar13 + 1;
      } while (cVar8 != '\0');
      goto LAB_006addde;
    }
  }
  else {
    local_414 = DAT_00b33ea0 - *(int *)(in_ECX + 0x2e8);
    local_420 = (float)local_414;
    if (local_414 < 0) {
      local_420 = local_420 + 4.2949673e+09;
    }
    local_420 = local_420 / 1700.0;
    if (0.0 <= local_420) {
      if (1.0 < local_420) {
        local_420 = 1.0;
      }
    }
    else {
      local_420 = 0.0;
    }
    if (*(int *)(in_ECX + 0x74) == 0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x70))();
    }
    fVar3 = 0.0;
    uVar6 = *(uint *)(in_ECX + 0xdc);
    if ((uVar6 & 8) == 0) {
      if (((uVar6 & 1) == 0) || ((uVar6 & 0x10) == 0)) {
        if ((uVar6 & 1) == 0) {
          iVar11 = FUN_006ecc80();
          if (iVar11 != 0) {
            cVar8 = FUN_004c97f0();
            if (cVar8 == '\0') {
              puVar12 = (undefined4 *)(**(code **)(*DAT_00b333c4 + 0x174))();
              FUN_004c9cf0();
              (**(code **)(*DAT_00b333c4 + 0x174))();
              iVar11 = FUN_0044a270(*puVar12);
            }
            pbVar2 = (byte *)(in_ECX + 0x1e4);
            pcVar13 = _strstr((char *)pbVar2,"death");
            if (pcVar13 != (char *)0x0) {
              *(undefined2 *)(in_ECX + 0xb0) = 0;
            }
            if ((*(short *)(in_ECX + 0xb0) == 4) || (iVar11 == 0)) {
              if (DAT_00b16180 != '\0') {
                _strstr((char *)pbVar2,"death");
                pcVar13 = _strstr((char *)pbVar2,"success");
                if ((pcVar13 == (char *)0x0) || (*(short *)(in_ECX + 0xb0) != 8)) {
                  if (*(short *)(in_ECX + 0xb0) == 8) {
                    pbVar14 = (byte *)0x0;
                    if ((*(byte *)(in_ECX + 0xdc) & 2) == 0) {
                      pbVar14 = pbVar2;
                    }
LAB_006ad757:
                    if ((*(byte *)(in_ECX + 0xdc) & 2) != 0) goto LAB_006ad89e;
                  }
                  else {
                    pbVar14 = (byte *)0x0;
                    if (*(short *)(in_ECX + 0xb0) == 4) goto LAB_006ad757;
                  }
                  if (pbVar14 == (byte *)0x0) {
                    cVar8 = FUN_006a8e80();
                    if (cVar8 == '\0') goto LAB_006ad89e;
                  }
                  else {
                    iVar11 = (int)&uStack_40c - (int)pbVar14;
                    do {
                      bVar4 = *pbVar14;
                      pbVar14[iVar11] = bVar4;
                      pbVar14 = pbVar14 + 1;
                    } while (bVar4 != 0);
                  }
                  iVar11 = FID_conflict___access(&uStack_40c,0);
                  if (iVar11 != -1) {
                    if (*(short *)(in_ECX + 0xb0) != 8) {
                      pbVar14 = (byte *)&uStack_40c;
                      pbVar15 = pbVar2;
                      do {
                        bVar4 = *pbVar15;
                        bVar17 = bVar4 < *pbVar14;
                        if (bVar4 != *pbVar14) {
LAB_006ad7e0:
                          iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                          goto LAB_006ad7e5;
                        }
                        if (bVar4 == 0) break;
                        bVar4 = pbVar15[1];
                        bVar17 = bVar4 < pbVar14[1];
                        if (bVar4 != pbVar14[1]) goto LAB_006ad7e0;
                        pbVar15 = pbVar15 + 2;
                        pbVar14 = pbVar14 + 2;
                      } while (bVar4 != 0);
                      iVar11 = 0;
LAB_006ad7e5:
                      if (iVar11 == 0) goto LAB_006ad89e;
                    }
                    FUN_006aa170();
                    ppvVar1 = (LPVOID *)(in_ECX + 0x70);
                    HVar16 = CoCreateInstance((IID *)&DAT_00a78fb4,(LPUNKNOWN)0x0,1,
                                              (IID *)&DAT_00a78f64,ppvVar1);
                    if (-1 < HVar16) {
                      MultiByteToWideChar(0,0,(LPCSTR)&uStack_40c,-1,aWStack_20c,0x104);
                      iVar11 = (**(code **)(*(int *)*ppvVar1 + 0x34))();
                      if (-1 < iVar11) {
                        (*(code *)**(undefined4 **)*ppvVar1)();
                        if ((*(byte *)(in_ECX + 0xdc) & 0x18) == 0) {
                          FUN_006aa1a0();
                        }
                        pcVar13 = (char *)&uStack_40c;
                        iVar11 = (int)pbVar2 - (int)pcVar13;
                        do {
                          cVar8 = *pcVar13;
                          pcVar13[iVar11] = cVar8;
                          pcVar13 = pcVar13 + 1;
                        } while (cVar8 != '\0');
                        *(uint *)(in_ECX + 0xdc) = *(uint *)(in_ECX + 0xdc) | 1;
                        goto LAB_006ad895;
                      }
                    }
                  }
                }
                else {
LAB_006ad895:
                  *(undefined2 *)(in_ECX + 0xb0) = 4;
                }
              }
LAB_006ad89e:
              FUN_006ab420();
            }
            else {
              FUN_004cad00();
              FUN_006acd10();
            }
          }
        }
        else if (*(float *)(in_ECX + 0x2f8) != *(float *)(in_ECX + 0x2f0)) {
          local_420 = ABS(*(float *)(in_ECX + 0x2f8) - *(float *)(in_ECX + 0x2f0));
          if (0.02 <= local_420) {
            if (*(float *)(in_ECX + 0x2f8) <= *(float *)(in_ECX + 0x2f0)) {
              fVar3 = *(float *)(in_ECX + 0x2f0) - 0.02;
            }
            else {
              fVar3 = *(float *)(in_ECX + 0x2f0) + 0.02;
            }
          }
          else {
            fVar3 = *(float *)(in_ECX + 0x2f8);
          }
          goto LAB_006ad91b;
        }
      }
      else if (*(float *)(in_ECX + 0x2f4) < *(float *)(in_ECX + 0x2f0) ==
               (*(float *)(in_ECX + 0x2f4) == *(float *)(in_ECX + 0x2f0))) {
        if (*(uint *)(in_ECX + 0x2ec) < uVar7) {
          fVar3 = *(float *)(in_ECX + 0x2f8);
        }
        else {
          fVar3 = ((local_420 - 0.5) + (local_420 - 0.5)) * *(float *)(in_ECX + 0x2f8);
        }
LAB_006ad91b:
        *(float *)(in_ECX + 0x2f0) = fVar3;
        FUN_006aa1a0();
      }
      else {
        *(uint *)(in_ECX + 0xdc) = uVar6 & 0xffffffef;
      }
    }
    else if (0.05 <= *(float *)(in_ECX + 0x2f0)) {
      if ((uVar6 & 1) != 0) {
        if (local_420 <= 0.5) {
          fVar3 = *(float *)(in_ECX + 0x2f8) - (local_420 + local_420) * *(float *)(in_ECX + 0x2f8);
        }
        goto LAB_006ad91b;
      }
      *(uint *)(in_ECX + 0xdc) = uVar6 & 0xfffffff7;
    }
    else {
      sVar9 = *(short *)(in_ECX + 0x2fc);
      *(uint *)(in_ECX + 0xdc) = uVar6 & 0xfffffff7 | 0x10;
      if (DAT_00b16180 != '\0') {
        pbVar2 = (byte *)(in_ECX + 0x1e4);
        pcVar13 = _strstr((char *)pbVar2,"death");
        if ((pcVar13 == (char *)0x0) || (sVar9 != -1)) {
          pcVar13 = _strstr((char *)pbVar2,"success");
          if ((pcVar13 == (char *)0x0) || (*(short *)(in_ECX + 0xb0) != 8)) {
            pbVar14 = (byte *)0x0;
            if ((*(short *)(in_ECX + 0xb0) == 8) && ((*(byte *)(in_ECX + 0xdc) & 2) == 0)) {
              pbVar14 = pbVar2;
            }
            if ((*(short *)(in_ECX + 0xb0) == 4) && (sVar9 == 8)) {
              *(undefined2 *)(in_ECX + 0xb0) = 0;
            }
            sVar5 = *(short *)(in_ECX + 0xb0);
            if ((((((sVar5 != 8) && (sVar5 != 4)) || (sVar9 == -1)) && (sVar5 != sVar9)) ||
                ((*(byte *)(in_ECX + 0xdc) & 2) == 0)) &&
               (((sVar5 == 8 || (sVar5 == 4)) || (sVar9 != -1)))) {
              if (pbVar14 == (byte *)0x0) {
                if (sVar9 == -1) {
                  iVar11 = FUN_00440560();
                  if (iVar11 == 0) {
                    sVar9 = 0;
                  }
                  else {
                    FUN_00440560();
                    sVar9 = FUN_004cad00();
                  }
                }
                cVar8 = FUN_006a8e80();
                if (cVar8 == '\0') goto LAB_006ad58e;
              }
              else {
                iVar11 = (int)&uStack_40c - (int)pbVar14;
                do {
                  bVar4 = *pbVar14;
                  pbVar14[iVar11] = bVar4;
                  pbVar14 = pbVar14 + 1;
                } while (bVar4 != 0);
              }
              iVar11 = FID_conflict___access(&uStack_40c,0);
              if (iVar11 != -1) {
                if (*(short *)(in_ECX + 0xb0) != 8) {
                  pbVar14 = (byte *)&uStack_40c;
                  pbVar15 = pbVar2;
                  do {
                    bVar4 = *pbVar15;
                    bVar17 = bVar4 < *pbVar14;
                    if (bVar4 != *pbVar14) {
LAB_006ad4d2:
                      iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                      goto LAB_006ad4d7;
                    }
                    if (bVar4 == 0) break;
                    bVar4 = pbVar15[1];
                    bVar17 = bVar4 < pbVar14[1];
                    if (bVar4 != pbVar14[1]) goto LAB_006ad4d2;
                    pbVar15 = pbVar15 + 2;
                    pbVar14 = pbVar14 + 2;
                  } while (bVar4 != 0);
                  iVar11 = 0;
LAB_006ad4d7:
                  if (iVar11 == 0) goto LAB_006ad58e;
                }
                FUN_006aa170();
                ppvVar1 = (LPVOID *)(in_ECX + 0x70);
                HVar16 = CoCreateInstance((IID *)&DAT_00a78fb4,(LPUNKNOWN)0x0,1,(IID *)&DAT_00a78f64
                                          ,ppvVar1);
                if (-1 < HVar16) {
                  MultiByteToWideChar(0,0,(LPCSTR)&uStack_40c,-1,aWStack_20c,0x104);
                  iVar11 = (**(code **)(*(int *)*ppvVar1 + 0x34))();
                  if (-1 < iVar11) {
                    (*(code *)**(undefined4 **)*ppvVar1)();
                    if ((*(byte *)(in_ECX + 0xdc) & 0x18) == 0) {
                      FUN_006aa1a0();
                    }
                    pcVar13 = (char *)&uStack_40c;
                    iVar11 = (int)pbVar2 - (int)pcVar13;
                    do {
                      cVar8 = *pcVar13;
                      pcVar13[iVar11] = cVar8;
                      pcVar13 = pcVar13 + 1;
                    } while (cVar8 != '\0');
                    *(uint *)(in_ECX + 0xdc) = *(uint *)(in_ECX + 0xdc) | 1;
                    goto LAB_006ad587;
                  }
                }
              }
            }
          }
          else {
LAB_006ad587:
            *(short *)(in_ECX + 0xb0) = sVar9;
          }
        }
      }
LAB_006ad58e:
      FUN_006ab420();
    }
    if ((*(uint *)(in_ECX + 0xdc) & 0x1a) == 0) {
      FUN_006acd10();
      return;
    }
    if (((*(uint *)(in_ECX + 0xdc) & 1) != 0) &&
       (iVar11 = (**(code **)**(undefined4 **)(in_ECX + 0x70))(), -1 < iVar11)) {
      piVar18 = &iStack_418;
      iVar11 = (**(code **)(*piStack_41c + 0x20))(piStack_41c);
      while (-1 < iVar11) {
        if ((0 < unaff_EBP) && (unaff_EBP < 4)) {
          FUN_006a8db0();
        }
        (**(code **)(*unaff_EDI + 0x30))(unaff_EDI,unaff_EBP,unaff_EBX,unaff_ESI);
        iVar11 = (**(code **)(*piVar18 + 0x20))
                           (piVar18,&stack0xfffffbc4,&stack0xfffffbc8,&stack0xfffffbcc,0);
      }
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
    if ((*(short *)(in_ECX + 0xb0) == 4) && (cVar8 = FUN_006605a0(), cVar8 == '\0')) {
      uVar10 = 0xffff;
      if (DAT_00b16180 == '\0') {
        return;
      }
      pbVar2 = (byte *)(in_ECX + 0x1e4);
      pcVar13 = _strstr((char *)pbVar2,"death");
      if (pcVar13 != (char *)0x0) {
        return;
      }
      pcVar13 = _strstr((char *)pbVar2,"success");
      if ((pcVar13 == (char *)0x0) || (*(short *)(in_ECX + 0xb0) != 8)) {
        sVar9 = *(short *)(in_ECX + 0xb0);
        pbVar14 = (byte *)0x0;
        if ((sVar9 == 8) && ((*(byte *)(in_ECX + 0xdc) & 2) == 0)) {
          pbVar14 = pbVar2;
        }
        if ((sVar9 == -1) && ((*(byte *)(in_ECX + 0xdc) & 2) != 0)) {
          return;
        }
        if ((sVar9 != 8) && (sVar9 != 4)) {
          return;
        }
        if (pbVar14 == (byte *)0x0) {
          iVar11 = FUN_00440560();
          if (iVar11 == 0) {
            uVar10 = 0;
          }
          else {
            FUN_00440560();
            uVar10 = FUN_004cad00();
          }
          cVar8 = FUN_006a8e80();
          if (cVar8 == '\0') {
            return;
          }
        }
        else {
          iVar11 = (int)&uStack_40c - (int)pbVar14;
          do {
            bVar4 = *pbVar14;
            pbVar14[iVar11] = bVar4;
            pbVar14 = pbVar14 + 1;
            uVar10 = 0xffff;
          } while (bVar4 != 0);
        }
        iVar11 = FID_conflict___access(&uStack_40c,0);
        if (iVar11 == -1) {
          return;
        }
        if (*(short *)(in_ECX + 0xb0) != 8) {
          pbVar14 = (byte *)&uStack_40c;
          pbVar15 = pbVar2;
          do {
            bVar4 = *pbVar15;
            bVar17 = bVar4 < *pbVar14;
            if (bVar4 != *pbVar14) {
LAB_006adb50:
              iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
              goto LAB_006adb55;
            }
            if (bVar4 == 0) break;
            bVar4 = pbVar15[1];
            bVar17 = bVar4 < pbVar14[1];
            if (bVar4 != pbVar14[1]) goto LAB_006adb50;
            pbVar15 = pbVar15 + 2;
            pbVar14 = pbVar14 + 2;
          } while (bVar4 != 0);
          iVar11 = 0;
LAB_006adb55:
          if (iVar11 == 0) {
            return;
          }
        }
        FUN_006aa170();
        ppvVar1 = (LPVOID *)(in_ECX + 0x70);
        HVar16 = CoCreateInstance((IID *)&DAT_00a78fb4,(LPUNKNOWN)0x0,1,(IID *)&DAT_00a78f64,ppvVar1
                                 );
        if (HVar16 < 0) {
          return;
        }
        MultiByteToWideChar(0,0,(LPCSTR)&uStack_40c,-1,aWStack_20c,0x104);
        iVar11 = (**(code **)(*(int *)*ppvVar1 + 0x34))();
        if (iVar11 < 0) {
          return;
        }
        (*(code *)**(undefined4 **)*ppvVar1)();
        if ((*(byte *)(in_ECX + 0xdc) & 0x18) == 0) {
          FUN_006aa1a0();
        }
        pcVar13 = (char *)&uStack_40c;
        iVar11 = (int)pbVar2 - (int)pcVar13;
        do {
          cVar8 = *pcVar13;
          pcVar13[iVar11] = cVar8;
          pcVar13 = pcVar13 + 1;
        } while (cVar8 != '\0');
        *(uint *)(in_ECX + 0xdc) = *(uint *)(in_ECX + 0xdc) | 1;
      }
      *(undefined2 *)(in_ECX + 0xb0) = uVar10;
      return;
    }
    if (*(short *)(in_ECX + 0xb0) == 4) {
      return;
    }
    if (*(short *)(in_ECX + 0xb0) == 8) {
      return;
    }
    cVar8 = FUN_006605a0();
    if (cVar8 == '\0') {
      return;
    }
    if (DAT_00b16180 == '\0') {
      return;
    }
    pbVar2 = (byte *)(in_ECX + 0x1e4);
    _strstr((char *)pbVar2,"death");
    pcVar13 = _strstr((char *)pbVar2,"success");
    if ((pcVar13 != (char *)0x0) && (*(short *)(in_ECX + 0xb0) == 8)) {
      *(undefined2 *)(in_ECX + 0xb0) = 4;
      return;
    }
    if (*(short *)(in_ECX + 0xb0) == 8) {
      pbVar14 = (byte *)0x0;
      if ((*(byte *)(in_ECX + 0xdc) & 2) == 0) {
        pbVar14 = pbVar2;
      }
LAB_006adcaf:
      if ((*(byte *)(in_ECX + 0xdc) & 2) != 0) {
        return;
      }
    }
    else {
      pbVar14 = (byte *)0x0;
      if (*(short *)(in_ECX + 0xb0) == 4) goto LAB_006adcaf;
    }
    if (pbVar14 == (byte *)0x0) {
      cVar8 = FUN_006a8e80();
      if (cVar8 == '\0') {
        return;
      }
    }
    else {
      iVar11 = (int)&uStack_40c - (int)pbVar14;
      do {
        bVar4 = *pbVar14;
        pbVar14[iVar11] = bVar4;
        pbVar14 = pbVar14 + 1;
      } while (bVar4 != 0);
    }
    iVar11 = FID_conflict___access(&uStack_40c,0);
    if (iVar11 == -1) {
      return;
    }
    if (*(short *)(in_ECX + 0xb0) != 8) {
      pbVar14 = (byte *)&uStack_40c;
      pbVar15 = pbVar2;
      do {
        bVar4 = *pbVar15;
        bVar17 = bVar4 < *pbVar14;
        if (bVar4 != *pbVar14) {
LAB_006add30:
          iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_006add35;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar15[1];
        bVar17 = bVar4 < pbVar14[1];
        if (bVar4 != pbVar14[1]) goto LAB_006add30;
        pbVar15 = pbVar15 + 2;
        pbVar14 = pbVar14 + 2;
      } while (bVar4 != 0);
      iVar11 = 0;
LAB_006add35:
      if (iVar11 == 0) {
        return;
      }
    }
    FUN_006aa170();
    ppvVar1 = (LPVOID *)(in_ECX + 0x70);
    HVar16 = CoCreateInstance((IID *)&DAT_00a78fb4,(LPUNKNOWN)0x0,1,(IID *)&DAT_00a78f64,ppvVar1);
    if (HVar16 < 0) {
      return;
    }
    MultiByteToWideChar(0,0,(LPCSTR)&uStack_40c,-1,aWStack_20c,0x104);
    iVar11 = (**(code **)(*(int *)*ppvVar1 + 0x34))();
    if (iVar11 < 0) {
      return;
    }
    (*(code *)**(undefined4 **)*ppvVar1)();
    if ((*(byte *)(in_ECX + 0xdc) & 0x18) == 0) {
      FUN_006aa1a0();
    }
    pcVar13 = (char *)&uStack_40c;
    iVar11 = (int)pbVar2 - (int)pcVar13;
    do {
      cVar8 = *pcVar13;
      pcVar13[iVar11] = cVar8;
      pcVar13 = pcVar13 + 1;
    } while (cVar8 != '\0');
LAB_006addde:
    *(uint *)(in_ECX + 0xdc) = *(uint *)(in_ECX + 0xdc) | 1;
  }
  *(undefined2 *)(in_ECX + 0xb0) = 4;
LAB_006addee:
  FUN_006ab420();
  return;
}



void FUN_006ade10(byte param_1)

{
  FUN_006abba0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006ade30(byte param_1)

{
  FUN_006abc10();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_006ade50(float param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int in_ECX;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  int *unaff_FS_OFFSET;
  float local_11c;
  undefined4 local_118;
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c651c;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_11c;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffed4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_11c = param_1;
  if (DAT_00b16178 == '\0') {
    local_11c = (float)FUN_00401f00(4,uVar2);
    local_4 = 0;
    if (local_11c != 0.0) {
      uVar3 = FUN_006b7180(0);
      goto LAB_006ae072;
    }
  }
  else {
    local_118 = 0;
    iVar4 = FUN_00447490(param_1);
    if (iVar4 != 0) {
      builtin_strncpy(local_114,"data\\sound\\",0xc);
      pcVar5 = *(char **)(iVar4 + 0x28);
      pcVar6 = pcVar5;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = "";
        pcVar6 = pcVar5;
      }
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar10 = (char *)((int)&local_118 + 3);
      do {
        pcVar8 = pcVar10 + 1;
        pcVar10 = pcVar10 + 1;
      } while (*pcVar8 != '\0');
      pcVar8 = pcVar6;
      for (uVar2 = (uint)((int)pcVar5 - (int)pcVar6) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar2 = (int)pcVar5 - (int)pcVar6 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
      iVar9 = *(int *)(iVar4 + 0xc);
      if (param_3 == '\0') {
        iVar7 = FUN_006ab130(iVar9);
        if (iVar7 != 0) goto LAB_006ae070;
      }
      else {
        iVar9 = *(int *)(in_ECX + 0xb4);
        *(int *)(in_ECX + 0xb4) = iVar9 + 1;
      }
      iVar7 = FUN_006ac610(&local_118,local_114,param_2,iVar9);
      iVar9 = local_118;
      if (iVar7 == 0) {
        if ((*(byte *)(iVar4 + 0x39) != 0) && (*(byte *)(iVar4 + 0x38) != 0)) {
          local_118 = (uint)*(byte *)(iVar4 + 0x38) * 5;
          FUN_006b6c60((float)local_118,(float)((uint)*(byte *)(iVar4 + 0x39) * 100));
        }
        FUN_006a90a0(*(undefined2 *)(iVar4 + 0x40));
        FUN_006b6770(local_11c);
        FUN_006acca0(iVar9,*(undefined4 *)(iVar9 + 0xc));
        *(float *)(iVar9 + 0x2c) = (float)*(byte *)(iVar4 + 0x43) * 0.09375;
        local_11c = (float)*(byte *)(iVar4 + 0x42) * 0.09375;
        *(float *)(iVar9 + 0x30) = local_11c;
        FUN_006b6f20(0x3f800000);
        local_11c = (float)FUN_00401f00(4);
        local_4 = 1;
        if (local_11c != 0.0) {
          uVar3 = FUN_006b7180(*(undefined4 *)(iVar9 + 0xc));
          goto LAB_006ae072;
        }
      }
    }
  }
LAB_006ae070:
  uVar3 = 0;
LAB_006ae072:
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_006ae0a0(int param_1,uint param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int in_ECX;
  float fVar8;
  char *pcVar9;
  char *pcVar10;
  int *unaff_FS_OFFSET;
  float local_124;
  int local_120;
  undefined4 local_118;
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c657a;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_124;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffecc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b16178 == '\0') {
    local_124 = (float)FUN_00401f00(4,uVar2);
    local_4 = 0;
    if (local_124 != 0.0) {
      uVar3 = FUN_006b7180(0);
      goto LAB_006ae345;
    }
  }
  else {
    local_124 = 0.0;
    FUN_0055e000(param_1,&local_124);
    fVar8 = local_124;
    if ((local_124 == 0.0) || (param_3 != '\0')) {
      piVar4 = (int *)FUN_004473f0(param_1);
      if (piVar4 != (int *)0x0) {
        if (*(ushort *)(piVar4 + 0xb) == 0xffff) {
          pcVar5 = (char *)piVar4[10];
          pcVar6 = pcVar5 + 1;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          uVar2 = (int)pcVar5 - (int)pcVar6;
        }
        else {
          uVar2 = (uint)*(ushort *)(piVar4 + 0xb);
        }
        if (uVar2 != 0) {
          local_120 = piVar4[0xe];
          local_118 = piVar4[0x10];
          if ((piVar4[0xf] & 0x10U) != 0) {
            param_2 = param_2 | 0x10;
          }
          builtin_strncpy(local_114,"data\\sound\\",0xc);
          pcVar6 = (char *)piVar4[10];
          pcVar5 = pcVar6;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = "";
            pcVar5 = pcVar6;
          }
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          pcVar10 = (char *)((int)&local_118 + 3);
          do {
            pcVar9 = pcVar10 + 1;
            pcVar10 = pcVar10 + 1;
          } while (*pcVar9 != '\0');
          pcVar9 = pcVar5;
          for (uVar2 = (uint)((int)pcVar6 - (int)pcVar5) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar2 = (int)pcVar6 - (int)pcVar5 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *pcVar10 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar10 = pcVar10 + 1;
          }
          if (param_3 != '\0') {
            param_1 = *(int *)(in_ECX + 0xb4);
            *(int *)(in_ECX + 0xb4) = param_1 + 1;
          }
          iVar7 = FUN_006ac610(&local_124,local_114,param_2,param_1);
          if (iVar7 == 0) {
            uVar3 = (**(code **)(*piVar4 + 0xd4))();
            fVar8 = local_124;
            FUN_006b6770(uVar3);
            FUN_006acca0(fVar8,*(undefined4 *)((int)fVar8 + 0xc));
            *(float *)((int)fVar8 + 0x2c) = (float)*(byte *)((int)piVar4 + 0x43) * 0.09375;
            local_124 = (float)*(byte *)((int)piVar4 + 0x42) * 0.09375;
            *(float *)((int)fVar8 + 0x30) = local_124;
            if ((*(byte *)((int)piVar4 + 0x39) != 0) && (*(byte *)(piVar4 + 0xe) != 0)) {
              local_124 = (float)((uint)*(byte *)(piVar4 + 0xe) * 5);
              FUN_006b6c60((float)(int)local_124,(float)((uint)*(byte *)((int)piVar4 + 0x39) * 100))
              ;
            }
            FUN_006a90a0((short)piVar4[0x10]);
            FUN_006b6f20(0x3f800000);
            local_124 = (float)FUN_00401f00(4);
            local_4 = 1;
            goto LAB_006ae164;
          }
        }
      }
    }
    else {
      local_124 = (float)FUN_00401f00(4,uVar2);
      local_4 = 2;
LAB_006ae164:
      if (local_124 != 0.0) {
        uVar3 = FUN_006b7180(*(undefined4 *)((int)fVar8 + 0xc));
        goto LAB_006ae345;
      }
    }
  }
  uVar3 = 0;
LAB_006ae345:
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



undefined4 FUN_006ae370(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  char *pcVar6;
  int *unaff_FS_OFFSET;
  bool bVar7;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c65c6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b16178 == '\0') {
    param_1 = (char *)FUN_00401f00(4,uVar2);
    local_4 = 0;
    if (param_1 != (char *)0x0) {
      uVar3 = FUN_006b7180(0);
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
  }
  else if (param_1 != (char *)0x0) {
    iVar5 = 1;
    bVar7 = true;
    pcVar6 = "";
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar7 = *param_1 == *pcVar6;
      param_1 = param_1 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
      param_1 = (char *)0x0;
      iVar5 = *(int *)(in_ECX + 0xb4);
      *(int *)(in_ECX + 0xb4) = iVar5 + 1;
      iVar4 = FUN_006ac610(&param_1,pcVar1,param_2,iVar5);
      iVar5 = (int)param_1;
      if (iVar4 == 0) {
        FUN_006acca0(param_1,*(undefined4 *)((int)param_1 + 0xc));
        param_1 = (char *)FUN_00401f00(4,uVar2);
        local_4 = 1;
        if (param_1 == (char *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_006b7180(*(undefined4 *)(iVar5 + 0xc));
        }
        local_4 = 0xffffffff;
        FUN_006b6f20(0x3f800000);
        *unaff_FS_OFFSET = local_c;
        return uVar3;
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4
FUN_006ae4b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            float param_6,char param_7)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c65fb;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((DAT_00b16178 != '\0') && (param_4 != 0)) {
    uVar2 = *(uint *)(param_4 + 0x3c);
    uVar6 = uVar2 & 0x10;
    if (param_6._0_1_ != '\0') {
      param_5 = *(int *)(in_ECX + 0xb4);
      *(int *)(in_ECX + 0xb4) = param_5 + 1;
    }
    uVar2 = uVar2 & 0x40;
    if (uVar2 == 0) {
      uVar6 = uVar6 | 2;
    }
    else {
      uVar6 = uVar6 | 1;
    }
    if (param_7 != '\0') {
      uVar6 = uVar6 | 0x2000;
    }
    _param_7 = 0;
    if (param_6._0_1_ == '\0') {
      param_6 = 0.0;
      FUN_0055e000(param_5,&param_6);
      if (param_6 != 0.0) goto LAB_006ae706;
    }
    puVar3 = *(undefined1 **)(param_4 + 0x28);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_00a2f7ec;
    }
    iVar4 = FUN_006ac610(&param_7,puVar3,uVar6,param_5);
    iVar1 = _param_7;
    if (iVar4 == 0) {
      FUN_006acca0(_param_7,*(undefined4 *)(_param_7 + 0xc));
      *(float *)(iVar1 + 0x2c) = (float)*(byte *)(param_4 + 0x43) * 0.09375;
      param_6 = (float)*(byte *)(param_4 + 0x42) * 0.09375;
      *(float *)(iVar1 + 0x30) = param_6;
      *(undefined2 *)(iVar1 + 0x44) = *(undefined2 *)(param_4 + 0x40);
      FUN_006b6f20(*(undefined4 *)(iVar1 + 0x3c));
      FUN_006b6f20(0x3f800000);
      if (uVar2 == 0) {
        param_6 = (float)((uint)*(byte *)(param_4 + 0x38) * 5);
        FUN_006b6c60((float)(int)param_6,(float)((uint)*(byte *)(param_4 + 0x39) * 100));
        FUN_006b6be0(param_1,param_2,param_3);
        (**(code **)(**(int **)(in_ECX + 0x78) + 0x44))(*(int **)(in_ECX + 0x78));
      }
      param_6 = (float)(int)(char)((uint)*(undefined4 *)(param_4 + 0x38) >> 0x10) / 200.0 + 1.0;
      FUN_006b6b20(param_6);
      FUN_006ab540(*(undefined4 *)(iVar1 + 0xc),uVar6 >> 4);
      param_6 = (float)FUN_00401f00(4);
      uStack_4 = 0;
      if (param_6 != 0.0) {
        uVar5 = FUN_006b7180(*(undefined4 *)(iVar1 + 0xc));
        goto LAB_006ae708;
      }
    }
  }
LAB_006ae706:
  uVar5 = 0;
LAB_006ae708:
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ae720(char param_1)

{
  float fVar1;
  char cVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  int in_ECX;
  bool bVar6;
  float10 fVar7;
  int local_8;
  float local_4;
  
  cVar2 = param_1;
  if (*(char *)(in_ECX + 0xa5) != param_1) {
    bVar6 = param_1 != '\0';
    *(char *)(in_ECX + 0xa5) = param_1;
    _param_1 = (uint *)0x0;
    fVar1 = _DAT_00b161b8;
    if (bVar6) {
      fVar1 = -_DAT_00b161b8;
    }
    if (DAT_00b16178 != '\0') {
      local_8 = FUN_006a9030();
      while (local_8 != 0) {
        FUN_00452600(&local_8,&local_4,&param_1);
        puVar3 = _param_1;
        if ((*_param_1 & 0x1000) != 0) {
          FUN_006b6ac0();
        }
        if (((*puVar3 & 0x20) == 0) && (cVar4 = FUN_006b6af0(), cVar4 != '\0')) {
          fVar7 = (float10)FUN_006b6b90();
          local_4 = (float)(fVar7 + (float10)fVar1);
          FUN_006b6b20(local_4);
        }
      }
    }
    if (*(int *)(in_ECX + 0x324) == 0) {
      if (cVar2 == '\0') {
        return;
      }
    }
    else if (cVar2 == '\0') {
      FUN_006b7240();
      FUN_006b73c0();
      iVar5 = *(int *)(in_ECX + 0x324);
      if (iVar5 != 0) {
        FUN_006b73e0();
        FUN_00401f20(iVar5);
      }
      *(undefined4 *)(in_ECX + 0x324) = 0;
      return;
    }
    if (*(int *)(in_ECX + 0x324) == 0) {
      iVar5 = FUN_006ade50("AMBUnderwaterLP",0x11,1);
      *(int *)(in_ECX + 0x324) = iVar5;
      if (iVar5 != 0) {
        _param_1 = (uint *)0x1;
        FUN_006b7190();
        return;
      }
    }
  }
  return;
}



undefined4 FUN_006ae860(uint param_1,uint *param_2)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  float fVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  uint uVar11;
  float *pfVar12;
  int iVar13;
  float fVar14;
  int in_ECX;
  uint uVar15;
  ushort in_FPUControlWord;
  float10 extraout_ST0;
  float10 fVar16;
  undefined4 uVar17;
  uint *puStack_70;
  int *piStack_6c;
  int iStack_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  uint **local_50;
  uint **ppuStack_4c;
  uint *local_38;
  int *piStack_34;
  uint *local_30 [4];
  longlong local_20;
  
  local_38 = (uint *)0x0;
  if (*(int *)(in_ECX + 8) == 0) {
    return 0;
  }
  if (DAT_00b16178 == '\0') {
    return 0;
  }
  if ((((DAT_00b33428 == 0) || (*(int *)(DAT_00b33428 + 0x20) == 0)) ||
      (*(int *)(DAT_00b33428 + 0x20) == 2)) && (iVar8 = FUN_00578fe0(), iVar8 != 0x3ef)) {
    cVar7 = (char)param_1;
  }
  else {
    cVar7 = '\x01';
  }
  if (*(char *)(in_ECX + 0xa6) == '\0') {
    if (cVar7 != '\0') {
      FUN_006a9b40();
    }
  }
  else if (cVar7 == '\0') {
    FUN_006a9c00();
  }
  else if ((*(char *)(in_ECX + 0xa6) != '\0') || ((char)param_2 != '\0')) {
    FUN_006ad030();
  }
  *(char *)(in_ECX + 0xa6) = cVar7;
  if (cVar7 == '\0') {
    if ((char)param_2 == '\0') {
      param_2 = (uint *)(float)(int)DAT_00b33ea0;
      if ((int)DAT_00b33ea0 < 0) {
        param_2 = (uint *)((float)param_2 + 4.2949673e+09);
      }
      ppuStack_4c = (uint **)0x6aea20;
      iVar8 = FUN_009828c0();
      if (iVar8 - 1U < 0x1d) {
        return 0;
      }
      param_1 = in_FPUControlWord | 0xc00;
      local_20 = (longlong)ROUND(extraout_ST0);
      *(undefined4 *)(in_ECX + 0xcc) = (undefined4)local_20;
    }
  }
  else if ((char)param_2 == '\0') {
    ppuStack_4c = (uint **)0x6ae914;
    param_1 = FUN_006a9030();
    while (param_1 != 0) {
      ppuStack_4c = &local_38;
      local_50 = local_30;
      local_58 = (double)CONCAT44(&param_1,0x6ae93a);
      FUN_00452600();
      if (((*local_38 & 0x100) != 0) && ((*local_38 & 0x21) != 0)) {
        ppuStack_4c = (uint **)0x6ae950;
        cVar7 = FUN_006b6af0();
        if (cVar7 == '\0') {
          ppuStack_4c = &param_2;
          param_2 = local_30[0];
          local_50 = (uint **)0x6ae96c;
          FUN_006aa320();
        }
      }
    }
    param_1 = 0;
    if (*(int *)(*(int *)(in_ECX + 800) + 0xc) == 0) {
      return 0;
    }
    do {
      piVar10 = *(int **)(in_ECX + 800);
      ppuStack_4c = (uint **)piVar10[1];
      iVar8 = (int)*ppuStack_4c;
      piVar10[1] = iVar8;
      if (iVar8 == 0) {
        piVar10[2] = 0;
      }
      else {
        *(undefined4 *)(iVar8 + 4) = 0;
      }
      iVar8 = (int)ppuStack_4c[2];
      local_50 = (uint **)0x6ae9b9;
      (**(code **)(*piVar10 + 8))();
      piVar10[3] = piVar10[3] + -1;
      local_50 = (uint **)0x6ae9c4;
      ppuStack_4c = (uint **)iVar8;
      FUN_006ac9f0();
    } while (*(int *)(*(int *)(in_ECX + 800) + 0xc) != 0);
    return 0;
  }
  ppuStack_4c = (uint **)0x1;
  local_50 = (uint **)(*(float *)(in_ECX + 0x84) / 69.99);
  uStack_60._4_4_ = *(int **)(in_ECX + 0x78);
  param_2 = (uint *)(*(float *)(in_ECX + 0x80) / 69.99);
  local_58 = (double)CONCAT44(*(float *)(in_ECX + 0x88) / 69.99,param_2);
  uStack_60._0_4_ = 9.818751e-39;
  (**(code **)(*uStack_60._4_4_ + 0x38))();
  fStack_64 = *(float *)(in_ECX + 0x9c);
  uStack_60._0_4_ = 1.4013e-45;
  iStack_68 = *(int *)(in_ECX + 0xa0);
  piStack_6c = *(int **)(in_ECX + 0x98);
  puStack_70 = *(uint **)(in_ECX + 0x90);
  (**(code **)(**(int **)(in_ECX + 0x78) + 0x34))
            (*(int **)(in_ECX + 0x78),*(undefined4 *)(in_ECX + 0x8c),*(undefined4 *)(in_ECX + 0x94))
  ;
  (**(code **)(**(int **)(in_ECX + 0x78) + 0x44))(*(int **)(in_ECX + 0x78));
  FUN_006aa730();
  if (*(int *)(*(int *)(in_ECX + 0x308) + 0xc) != 0) {
    for (piVar10 = *(int **)(*(int *)(in_ECX + 0x308) + 4); piStack_6c = piVar10,
        piVar10 != (int *)0x0; piVar10 = (int *)*piVar10) {
      piStack_34 = (int *)piVar10[1];
      piVar2 = (int *)piVar10[2];
      iVar8 = *piVar2;
      if (iVar8 == 3) {
        iVar8 = piVar2[2];
        if (iVar8 < 0) {
          piVar2[2] = DAT_00b33ea0 - iVar8;
        }
        else if (iVar8 - 0x14U <= DAT_00b33ea0) {
          puVar9 = (uint *)FUN_006ab130(piVar2[1]);
          if (puVar9 != (uint *)0x0) {
            iStack_68 = piVar2[2] - DAT_00b33ea0;
            if ((0x2d < iStack_68) || (iStack_68 < -0x7d)) {
              FUN_0040fec0("Voice was off by %i milliseconds, attempting to correct",iStack_68);
              piVar10 = (int *)FUN_006b67e0();
              if (piVar10 != (int *)0x0) {
                puStack_70 = (uint *)0x0;
                fStack_64 = (float)puVar9[0x10];
                local_30[0] = (uint *)CONCAT31(local_30[0]._1_3_,*(undefined1 *)((int)puVar9 + 0x11)
                                              );
                iVar8 = (**(code **)(*piVar10 + 0x10))(piVar10,&puStack_70,0);
                if (-1 < iVar8) {
                  (**(code **)(*piVar10 + 0x34))
                            (piVar10,(int)puStack_70 -
                                     ((uint)fStack_64 / 1000) * ((uint)local_30[0] & 0xff) *
                                     iStack_68);
                }
              }
            }
            if (*(char *)(in_ECX + 0xa5) != '\0') {
              if ((*puVar9 & 0x1000) != 0) {
                FUN_006b6f20(0);
              }
              fVar16 = (float10)FUN_006b6b90();
              local_58 = (double)fVar16;
              pfVar12 = (float *)FUN_00403c00();
              local_30[0] = (uint *)((float)local_58 - *pfVar12);
              FUN_006b6b20(local_30[0]);
            }
            *puVar9 = *puVar9 & 0xfffffdff;
            if ((*puVar9 & 0x10) == 0) {
              FUN_006b6e60(0);
              if ((*puVar9 & 4) != 0) {
                *puVar9 = *puVar9 | 0x100;
              }
            }
            else {
              FUN_006b6e60(1);
            }
          }
          FUN_007aa860(&piStack_6c);
          FUN_006aa6f0(1);
          if (piStack_34 == (int *)0x0) {
            piVar10 = *(int **)(*(int *)(in_ECX + 0x308) + 4);
          }
          else {
            piVar10 = (int *)*piStack_34;
          }
        }
      }
      else if (iVar8 == 7) {
        local_30[0] = (uint *)0x0;
        FUN_0055e000(piVar2[1],local_30);
        puVar9 = local_30[0];
        if (local_30[0] != (uint *)0x0) {
          uVar11 = piVar2[3];
          if ((DAT_00b33ea0 < uVar11) && (*(ushort *)((int)local_30[0] + 0x46) < 10000)) {
            fVar1 = (float)(int)(uVar11 - DAT_00b33ea0);
            if ((int)(uVar11 - DAT_00b33ea0) < 0) {
              fVar1 = fVar1 + 4.2949673e+09;
            }
            fVar14 = (float)(int)(uVar11 - piVar2[2]);
            if ((int)(uVar11 - piVar2[2]) < 0) {
              fVar14 = fVar14 + 4.2949673e+09;
            }
            local_30[0] = (uint *)(fVar1 / fVar14);
            fVar16 = (float10)FUN_00986cd0();
            local_30[0] = (uint *)(float)fVar16;
            iVar8 = FUN_009828c0();
            if (9999 < iVar8) {
              iVar8 = 10000;
            }
            FUN_006a90c0(iVar8);
          }
          else {
            FUN_006b6ac0();
            *(undefined2 *)((int)puVar9 + 0x46) = 10000;
LAB_006aec3d:
            FUN_006b6f20(puVar9[0xf]);
            *(undefined1 *)((int)puVar9 + 0x4b) = 0;
            FUN_007aa860(&piStack_6c);
            FUN_006aa6f0(1);
            if (piStack_34 == (int *)0x0) {
              piVar10 = *(int **)(*(int *)(in_ECX + 0x308) + 4);
            }
            else {
              piVar10 = (int *)*piStack_34;
            }
          }
        }
      }
      else if (iVar8 == 8) {
        local_30[0] = (uint *)0x0;
        FUN_0055e000(piVar2[1],local_30);
        puVar9 = local_30[0];
        if (local_30[0] != (uint *)0x0) {
          cVar7 = FUN_006b6af0();
          if (cVar7 == '\0') {
            *(undefined2 *)((int)puVar9 + 0x46) = 10000;
            FUN_006b6f20(puVar9[0xf]);
            FUN_006b6e60(*puVar9 >> 4 & 0xffffff01);
          }
          uVar11 = piVar2[3];
          if ((uVar11 <= DAT_00b33ea0) || (*(short *)((int)puVar9 + 0x46) == 0)) {
            *(undefined2 *)((int)puVar9 + 0x46) = 0;
            goto LAB_006aec3d;
          }
          fVar1 = (float)(int)(uVar11 - DAT_00b33ea0);
          if ((int)(uVar11 - DAT_00b33ea0) < 0) {
            fVar1 = fVar1 + 4.2949673e+09;
          }
          fVar14 = (float)(int)(uVar11 - piVar2[2]);
          if ((int)(uVar11 - piVar2[2]) < 0) {
            fVar14 = fVar14 + 4.2949673e+09;
          }
          local_30[0] = (uint *)(1.0 - fVar1 / fVar14);
          fVar16 = (float10)FUN_00986cd0();
          local_30[0] = (uint *)(float)fVar16;
          iVar8 = FUN_009828c0();
          if (9999 < iVar8) {
            iVar8 = 10000;
          }
          FUN_006a90c0(iVar8);
        }
      }
      puStack_70 = (uint *)0x0;
      if (piVar10 == (int *)0x0) break;
    }
  }
  piVar10 = DAT_00b333c4 + 0x1bb;
  local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
  piStack_34 = piVar10;
  iVar8 = FUN_006ecc80();
  if (iVar8 != 0) {
    FUN_006ecc80();
    cVar7 = FUN_004c97f0();
    if (cVar7 != '\0') goto LAB_006af317;
  }
  uVar11 = DAT_00b33ea0 - *(int *)(in_ECX + 200);
  uVar15 = (int)uVar11 >> 0x1f;
  if ((500 < (int)((uVar11 ^ uVar15) - uVar15)) &&
     ((DAT_00b333c4[0x1bc] != 0 || (DAT_00b333c4[0x1bb] != 0)))) {
    iVar8 = *(int *)(DAT_00b333a0 + 0x5c);
    piStack_6c = *(int **)(iVar8 + 0xd0);
    local_30[0] = (uint *)CONCAT31(local_30[0]._1_3_,1);
    iStack_68 = 0;
    local_58 = (double)CONCAT44(local_58._4_4_,iVar8);
    piVar2 = piStack_6c;
    while ((piVar10 != (int *)0x0 && (piVar3 = (int *)*piVar10, piVar3 != (int *)0x0))) {
      iVar13 = *piVar3;
      fVar1 = (float)*(byte *)(iVar13 + 0x43) * 0.09375;
      fStack_64 = (float)*(byte *)(iVar13 + 0x42) * 0.09375;
      if (((piVar3[1] & 0xffffU) == 0) ||
         ((*(int *)(iVar8 + 0x10) == 0 ||
          ((*(byte *)(*(int *)(iVar8 + 0x10) + 0x53) & (byte)piVar3[1]) != 0)))) {
        uStack_60._0_4_ = ABS(fStack_64 - fVar1);
        if (0.09375 <= (float)uStack_60) {
          if (fVar1 < fStack_64) {
            if ((float)piVar2 < fVar1) {
              piVar10 = (int *)piVar10[1];
              piStack_34 = piVar10;
            }
            else {
              if ((float)piVar2 <= fStack_64) goto LAB_006af009;
              piVar10 = (int *)piVar10[1];
              piStack_34 = piVar10;
            }
          }
          else {
LAB_006af009:
            if (((fVar1 <= fStack_64) || (fVar1 <= (float)piVar2)) || ((float)piVar2 <= fStack_64))
            goto LAB_006af054;
            piVar10 = (int *)piVar10[1];
            piStack_34 = piVar10;
          }
        }
        else {
LAB_006af054:
          if ((((*(uint *)(iVar13 + 0x3c) & 0x40) == 0) || ((*(uint *)(iVar13 + 0x3c) & 0x10) == 0))
             || (cVar7 = FUN_006aca40(*(undefined4 *)(iVar13 + 0xc)), cVar7 != '\0')) {
            if ((*(uint *)(iVar13 + 0x3c) & 0x10) == 0) {
              fVar1 = (float)piVar3[2];
              if (piVar3[2] < 0) {
                fVar1 = fVar1 + 4.2949673e+09;
              }
              fStack_64 = (fVar1 / 1e+07) * 0.5;
              uStack_60._0_4_ = (float)FUN_0047df80(0);
              if ((float)(int)(float)uStack_60 / 32767.0 < fStack_64) {
                if ((*(uint *)(iVar13 + 0x3c) & 0x40) == 0) {
                  uVar17 = 0x1102;
                }
                else {
                  uVar17 = 0x1101;
                }
                iVar8 = FUN_006ae0a0(*(undefined4 *)(iVar13 + 0xc),uVar17,0);
                if (iVar8 != 0) {
                  if ((*(uint *)(iVar13 + 0x3c) & 0x40) == 0) {
                    pfVar12 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
                    local_50 = (uint **)*pfVar12;
                    ppuStack_4c = (uint **)pfVar12[1];
                    fVar1 = pfVar12[2];
                    uVar11 = FUN_0047df80(0);
                    uVar11 = uVar11 & 0x80000001;
                    if ((int)uVar11 < 0) {
                      uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
                    }
                    iVar13 = FUN_0047df80(0);
                    uStack_60 = ((double)iVar13 / 32767.0) * 500.0;
                    fVar16 = (float10)FUN_00507010(0xbf800000,uVar11);
                    local_50 = (uint **)(float)(fVar16 * (float10)700.0 + (float10)uStack_60 +
                                               (float10)(float)local_50);
                    uVar11 = FUN_0047df80(0);
                    uVar11 = uVar11 & 0x80000001;
                    if ((int)uVar11 < 0) {
                      uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
                    }
                    fVar16 = (float10)FUN_00507010(0xbf800000,uVar11);
                    fStack_64 = (float)fVar16;
                    fVar14 = (float)FUN_0047df80(0);
                    ppuStack_4c = (uint **)(fStack_64 * 700.0 +
                                            ((float)(int)fVar14 / 32767.0) * 500.0 +
                                           (float)ppuStack_4c);
                    uStack_60._0_4_ = fVar14;
                    FUN_006b7360(local_50,ppuStack_4c,fVar1 + 256.0);
                  }
                  FUN_006b7190(0);
                  FUN_006b73e0();
                  goto LAB_006af2e6;
                }
              }
            }
          }
          else {
            iVar8 = FUN_006ae0a0(*(undefined4 *)(iVar13 + 0xc),0x1011,0);
            cVar7 = FUN_0055e000(*(undefined4 *)(iVar13 + 0xc),&iStack_68);
            iVar6 = iStack_68;
            if (cVar7 != '\0') {
              *(uint *)(iStack_68 + 0x34) = (uint)*(ushort *)(piVar3 + 1);
              cVar7 = FUN_006b7050();
              if (cVar7 == '\0') {
                FUN_006a90c0(10000);
                FUN_006b6e60(1);
              }
              else {
                *(undefined1 *)(iVar6 + 0x4b) = 1;
                FUN_006ab8d0(*(undefined4 *)(iVar13 + 0xc),0,5000);
              }
            }
            if (iVar8 != 0) {
              FUN_006b73e0();
LAB_006af2e6:
              FUN_00401f20(iVar8);
            }
          }
          piVar10 = (int *)piStack_34[1];
          iVar8 = (int)(float)local_58;
          piVar2 = piStack_6c;
          piStack_34 = piVar10;
        }
      }
      else {
        piVar10 = (int *)piVar10[1];
        piStack_34 = piVar10;
        uStack_60._0_4_ = fVar1;
      }
    }
  }
LAB_006af317:
  FUN_006ad030();
  piStack_34 = (int *)FUN_006a9030();
  do {
    if (piStack_34 == (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x78) + 0x44))(*(int **)(in_ECX + 0x78));
      iVar8 = *(int *)(*(int *)(in_ECX + 800) + 0xc);
      while (iVar8 != 0) {
        piVar10 = *(int **)(in_ECX + 800);
        piVar2 = (int *)piVar10[1];
        iVar8 = *piVar2;
        piVar10[1] = iVar8;
        if (iVar8 == 0) {
          piVar10[2] = 0;
        }
        else {
          *(undefined4 *)(iVar8 + 4) = 0;
        }
        iVar8 = piVar2[2];
        (**(code **)(*piVar10 + 8))(piVar2);
        piVar10[3] = piVar10[3] + -1;
        local_38 = (uint *)0x0;
        FUN_0055e000(iVar8,&local_38);
        if (local_38 != (uint *)0x0) {
          FUN_006aa9c0(&local_38);
        }
        iVar8 = *(int *)(*(int *)(in_ECX + 800) + 0xc);
      }
      if ((char)piStack_34 != '\0') {
        *(uint *)(in_ECX + 200) = DAT_00b33ea0;
      }
      return 0;
    }
    FUN_00452600(&piStack_34,&iStack_68,&puStack_70);
    puVar9 = puStack_70;
    if ((((*puStack_70 & 0x1000) != 0) && ((*puStack_70 & 0x10) != 0)) &&
       (uVar11 = DAT_00b33ea0 - *(int *)(in_ECX + 200), uVar15 = (int)uVar11 >> 0x1f,
       500 < (int)((uVar11 ^ uVar15) - uVar15))) {
      bVar4 = false;
      piVar10 = DAT_00b333c4 + 0x1bb;
      local_30[0] = (uint *)CONCAT31(local_30[0]._1_3_,1);
      if (piVar10 != (int *)0x0) {
        do {
          if ((int *)*piVar10 == (int *)0x0) break;
          if (*(uint *)(*(int *)*piVar10 + 0xc) == puStack_70[3]) {
            bVar4 = true;
          }
          piVar10 = (int *)piVar10[1];
        } while (piVar10 != (int *)0x0);
        if (bVar4) goto LAB_006af3cf;
      }
      if (*(char *)((int)puStack_70 + 0x4b) == '\0') {
        *(undefined1 *)((int)puStack_70 + 0x4b) = 1;
        FUN_006ab8d0(puStack_70[3],1,5000);
        *puVar9 = *puVar9 | 0x100;
      }
    }
LAB_006af3cf:
    uVar11 = *puVar9;
    if ((uVar11 & 2) != 0) {
      local_50 = (uint **)puVar9[8];
      ppuStack_4c = (uint **)puVar9[9];
      fVar1 = (float)local_50 - *(float *)(in_ECX + 0x80);
      fVar14 = (float)ppuStack_4c - *(float *)(in_ECX + 0x84);
      fVar5 = (float)puVar9[10] - *(float *)(in_ECX + 0x88);
      local_58._0_4_ = fVar5 * fVar5 + fVar1 * fVar1 + fVar14 * fVar14;
      fVar16 = (float10)FUN_00982c30();
      fVar1 = (float)fVar16;
      local_58 = (double)CONCAT44(local_58._4_4_,fVar1);
      piStack_6c = (int *)(float)(int)puVar9[0xe];
      if ((int)puVar9[0xe] < 0) {
        piStack_6c = (int *)((float)piStack_6c + 4.2949673e+09);
      }
      if ((DAT_00b333b8 != '\0') && ((uVar11 & 4) == 0)) {
        piStack_6c = (int *)((float)piStack_6c * 0.25);
      }
      bVar4 = (float)piStack_6c < fVar1;
      fStack_64 = (float)CONCAT31(fStack_64._1_3_,bVar4);
      FUN_006b7130(fStack_64);
      if ((bVar4) && ((*puVar9 & 0x100) != 0)) {
        FUN_006b6ac0();
      }
    }
    cVar7 = FUN_006b6af0();
    if (((cVar7 == '\0') || (cVar7 = FUN_006b7050(), cVar7 != '\0')) ||
       (*(char *)((int)puVar9 + 0x4b) != '\0')) {
      cVar7 = FUN_006b7050();
      if (((cVar7 == '\0') || ((*puVar9 & 0x10) == 0)) ||
         ((*(char *)((int)puVar9 + 0x4b) != '\0' ||
          ((*(short *)((int)puVar9 + 0x46) == 0 || ((*puVar9 & 0x100) != 0)))))) goto LAB_006af558;
      if (DAT_00b333b8 == '\0') {
        FUN_006b6e60(1);
        *(undefined1 *)((int)puVar9 + 0x4b) = 1;
        uVar17 = 0;
        if ((*puVar9 & 0x1000) == 0) goto LAB_006af54f;
        uVar11 = puVar9[3];
        goto LAB_006af553;
      }
LAB_006af561:
      if ((*puVar9 & 0x1000) != 0) {
        *puVar9 = *puVar9 | 0x100;
        FUN_006b6ac0();
      }
    }
    else {
      *(undefined1 *)((int)puVar9 + 0x4b) = 1;
      if ((*puVar9 & 0x20) == 0) {
        *puVar9 = *puVar9 | 0x100;
      }
      uVar17 = 1;
      if ((*puVar9 & 0x1000) == 0) {
        uVar11 = puVar9[3];
      }
      else {
LAB_006af54f:
        uVar11 = puVar9[3];
      }
LAB_006af553:
      FUN_006ab8d0(uVar11,uVar17,5000);
LAB_006af558:
      if (DAT_00b333b8 != '\0') goto LAB_006af561;
    }
    if ((((*puVar9 & 0x100) != 0) && (cVar7 = FUN_006b6af0(), cVar7 == '\0')) &&
       ((*puVar9 & 0x200) == 0)) {
      local_58 = (double)CONCAT44(local_58._4_4_,iStack_68);
      FUN_006aa320(&local_58);
    }
  } while( true );
}



void FUN_006af660(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 1;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  uVar1 = FUN_00401f00(0x4000);
  in_ECX[3] = uVar1;
  in_ECX[4] = 8;
  puVar2 = (undefined4 *)FUN_00401f00(0x80);
  in_ECX[5] = puVar2;
  *puVar2 = 0;
  iVar3 = 4;
  do {
    piVar4 = (int *)(in_ECX[5] + iVar3);
    iVar5 = *(int *)(in_ECX[5] + -4 + iVar3) + iVar6;
    iVar3 = iVar3 + 4;
    iVar6 = iVar6 * 2;
    *piVar4 = iVar5;
  } while (iVar3 < 0x80);
  return;
}



void FUN_006af6d0(void)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x14));
  FUN_00401f20(*(undefined4 *)(in_ECX + 0xc));
  return;
}



uint FUN_006af6f0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + param_1;
  uVar3 = 0;
  while (param_1 != 0) {
    if (*(int *)(in_ECX + 0x10) == 0) {
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
      *(undefined4 *)(in_ECX + 0x10) = 8;
    }
    uVar5 = *(uint *)(in_ECX + 0x10);
    if (param_1 < *(uint *)(in_ECX + 0x10)) {
      uVar5 = param_1;
    }
    uVar1 = *(uint *)(*(int *)(in_ECX + 0xc) + (*(uint *)(in_ECX + 8) & 0xfff) * 4);
    uVar2 = *(uint *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 0x10) * 4);
    iVar4 = *(int *)(in_ECX + 0x10) - uVar5;
    param_1 = param_1 - uVar5;
    *(int *)(in_ECX + 0x10) = iVar4;
    uVar3 = uVar3 | ((int)(uVar1 & uVar2) >> ((byte)iVar4 & 0x1f)) << ((byte)param_1 & 0x1f);
  }
  return uVar3;
}



uint FUN_006af750(void)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
  if (*(int *)(in_ECX + 0x10) == 0) {
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
    *(undefined4 *)(in_ECX + 0x10) = 8;
  }
  uVar1 = *(uint *)(*(int *)(in_ECX + 0xc) + (*(uint *)(in_ECX + 8) & 0xfff) * 4);
  uVar2 = *(uint *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 0x10) * 4);
  iVar3 = *(int *)(in_ECX + 0x10) + -1;
  *(int *)(in_ECX + 0x10) = iVar3;
  return (uVar1 & uVar2) >> ((byte)iVar3 & 0x1f);
}



void FUN_006af790(undefined4 param_1)

{
  uint *in_ECX;
  
  *(undefined4 *)(in_ECX[3] + *in_ECX * 4) = param_1;
  *in_ECX = *in_ECX + 1 & 0xfff;
  return;
}



void FUN_006af7b0(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) - param_1;
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + param_1;
  uVar1 = *(uint *)(in_ECX + 0x10);
  while (7 < uVar1) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -8;
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + -1;
    uVar1 = *(uint *)(in_ECX + 0x10);
  }
  return;
}



void FUN_006af7e0(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) - param_1;
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + param_1 * -8;
  return;
}



void FUN_006af800(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a77408;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_006af820(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a77408;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006af850(int param_1)

{
  if (param_1 != 0) {
    DAT_00b3c0f0 = param_1;
    return;
  }
  DAT_00b3c0f0 = *(undefined4 *)(DAT_00b33398 + 0x24);
  return;
}



void FUN_006af870(void)

{
  FUN_007c2a40();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006af880(float param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6,
                 char param_7,char param_8)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined4 *puVar9;
  float *pfVar10;
  undefined4 uVar11;
  undefined4 unaff_EBX;
  undefined4 *puVar12;
  undefined4 *puVar13;
  float10 fVar14;
  int *unaff_retaddr;
  char *pcVar15;
  char cVar16;
  undefined4 *puStack_24;
  int local_20;
  
  cVar16 = (char)((uint)unaff_EBX >> 0x18);
  if (param_1 == 0.0) {
    return;
  }
  if (DAT_00b16304 <= DAT_00b3c20c) {
    return;
  }
  if (DAT_00b3c0f0 == 0) {
    DAT_00b3c0f0 = *(int *)(DAT_00b33398 + 0x24);
  }
  puStack_24 = (undefined4 *)(uint)(uint3)puStack_24;
  puVar13 = (undefined4 *)0x0;
  puVar12 = (undefined4 *)0x0;
  iVar8 = (**(code **)(**(int **)((int)param_1 + 0x58) + 0xec))(1);
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(iVar8 + 8);
  }
  if (iVar8 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_009832e6(iVar8,0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0);
  }
  puVar9 = (undefined4 *)(**(code **)(*unaff_retaddr + 0x174))();
  uVar2 = *puVar9;
  uVar3 = puVar9[1];
  uVar4 = puVar9[2];
  if ((DAT_00b333b8 != '\0') &&
     (fVar14 = (float10)FUN_00982c30(), _DAT_00b162fc * 0.5 < (float)fVar14)) {
    return;
  }
  if (param_3 == (int *)0x0) {
    if (local_20 == 0) {
      puVar12 = (undefined4 *)FUN_006ade50("WPNSwishHand",0x4102,1);
      goto LAB_006afae9;
    }
    if (DAT_00b162ec == '\0') {
      fVar1 = *(float *)(local_20 + 0x7c);
      pfVar10 = (float *)FUN_00403c00();
      if (fVar1 < *pfVar10) goto LAB_006afabb;
      pfVar10 = (float *)FUN_00403c00();
      if ((fVar1 <= *pfVar10) || (pfVar10 = (float *)FUN_00403c00(), *pfVar10 <= fVar1))
      goto LAB_006afa46;
LAB_006afa9f:
      pcVar15 = "WPNSwishMedium";
    }
    else {
      fVar1 = *(float *)(local_20 + 0x94);
      pfVar10 = (float *)FUN_00403c00();
      if (*pfVar10 < fVar1) {
LAB_006afabb:
        pcVar15 = "WPNSwishSmall";
      }
      else {
        pfVar10 = (float *)FUN_00403c00();
        if ((fVar1 < *pfVar10) && (pfVar10 = (float *)FUN_00403c00(), *pfVar10 < fVar1))
        goto LAB_006afa9f;
LAB_006afa46:
        pcVar15 = "WPNSwishLarge";
      }
    }
    iVar8 = FUN_00447490(pcVar15);
    if (iVar8 == 0) {
      return;
    }
    puVar12 = (undefined4 *)FUN_006ae0a0(*(undefined4 *)(iVar8 + 0xc),0x4102,1);
LAB_006afae9:
    if (puVar12 == (undefined4 *)0x0) {
      return;
    }
    FUN_006b7360(uVar2,uVar3,uVar4);
    FUN_006ac3e0(*puVar12,unaff_retaddr);
    FUN_006b7190(0);
    FUN_006b73e0();
    FUN_00401f20(puVar12);
    return;
  }
  puVar9 = (undefined4 *)(**(code **)(*param_3 + 0x174))();
  uVar2 = *puVar9;
  uVar3 = puVar9[1];
  uVar4 = puVar9[2];
  if (param_5 < 0) {
    if (-1 < param_6) {
      if (param_6 == 0) {
        pcVar15 = "WPNBlockShieldLight";
      }
      else {
        if (param_6 != 1) goto LAB_006afbd4;
        pcVar15 = "WPNBlockShieldHeavy";
      }
      cVar16 = '\x01';
      goto LAB_006afbb3;
    }
  }
  else {
    if (param_5 == 0) {
      pcVar15 = "PHYArmorHitLight";
    }
    else {
      pcVar15 = "PHYArmorHitHeavy";
    }
LAB_006afbb3:
    iVar8 = FUN_00447490(pcVar15);
    if (iVar8 != 0) {
      puVar12 = (undefined4 *)FUN_006ae0a0(*(undefined4 *)(iVar8 + 0xc),0x4102,1);
    }
  }
LAB_006afbd4:
  bVar6 = false;
  if (param_7 == '\0') {
    cVar7 = FUN_005e3270();
    if ((cVar7 == '\0') || ((char)param_3[0x41] != '\x02')) {
      cVar7 = FUN_005e3270();
      bVar6 = true;
      if (cVar7 == '\0') {
        pcVar15 = "PHYDamageFlesh";
      }
      else {
        pcVar15 = "PHYDamageFur";
      }
    }
    else {
      pcVar15 = "PHYDamageBone";
      bVar6 = false;
    }
    iVar8 = FUN_00447490(pcVar15);
    if (iVar8 != 0) {
      puStack_24 = (undefined4 *)FUN_006ae0a0(*(undefined4 *)(iVar8 + 0xc),0x4102,1);
    }
  }
  bVar5 = false;
  if ((param_4 < 0) && (cVar7 = FUN_005e3270(), cVar7 != '\0')) {
    uVar11 = (**(code **)(*unaff_retaddr + 0x170))();
    FUN_009832e6(uVar11,0,&PTR_PTR_00b03248,&PTR_PTR_00b0375c,0);
    iVar8 = FUN_0051cec0(9);
    if ((iVar8 == 0) ||
       ((DAT_00b3c0f0 == 0 ||
        (puVar13 = (undefined4 *)FUN_006ae0a0(*(undefined4 *)(iVar8 + 0xc),0x4102,1),
        puVar13 == (undefined4 *)0x0)))) goto LAB_006afcad;
  }
  else {
LAB_006afcad:
    switch(param_4) {
    case 0:
    case 1:
      bVar5 = true;
      if (param_8 == '\0') {
        if ((bVar6) && (cVar16 == '\0')) {
          pcVar15 = "WPNHitBladeFlesh";
        }
        else {
          pcVar15 = "WPNHitBlade";
        }
      }
      else {
        pcVar15 = "WPNHitBladeFleshEnchanted";
      }
      break;
    case 2:
    case 3:
      bVar5 = true;
      if (param_8 == '\0') {
        if ((bVar6) && (cVar16 == '\0')) {
          pcVar15 = "WPNHitBluntFlesh";
        }
        else {
          pcVar15 = "WPNHitBlunt";
        }
      }
      else {
        pcVar15 = "WPNHitBluntFleshEnchanted";
      }
      break;
    default:
      pcVar15 = "WPNHitHand";
      break;
    case 5:
      pcVar15 = "WPNHitArrow";
    }
    iVar8 = FUN_00447490(pcVar15);
    if ((iVar8 == 0) ||
       (puVar13 = (undefined4 *)FUN_006ae0a0(*(undefined4 *)(iVar8 + 0xc),0x4102,1),
       puVar13 == (undefined4 *)0x0)) goto LAB_006afde6;
  }
  FUN_006b7360(uVar2,uVar3,uVar4);
  if ((unaff_retaddr[0x16] != 0) && (local_20 != 0)) {
    fVar14 = (float10)FUN_0047e0b0(0x3dcccccd);
    FUN_006b7310((float)(((float10)0.05000000074505806 - fVar14) + (float10)1.0));
  }
  fVar14 = (float10)FUN_00517dd0();
  FUN_006b7280((float)(fVar14 * (float10)0.9800000190734863));
  FUN_006ac3e0(*puVar13,param_3);
LAB_006afde6:
  if ((bVar5) && (bVar6)) {
    if (puStack_24 != (undefined4 *)0x0) {
      FUN_006b73c0();
      FUN_006b73e0();
      FUN_00401f20(puStack_24);
      puStack_24 = (undefined4 *)0x0;
    }
  }
  else if ((puStack_24 != (undefined4 *)0x0) && (0.0 < param_1)) {
    iVar8 = FUN_005f1910(8);
    param_1 = param_1 / (float)iVar8;
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
    fVar14 = (float10)FUN_00517df0();
    FUN_006b7280((float)(fVar14 * (float10)0.9800000190734863));
    FUN_006b7360(uVar2,uVar3,uVar4);
    FUN_006b7310((1.0 - param_1 / 10.0) - 0.05);
    FUN_006ac3e0(*puStack_24,param_3);
  }
  if (puVar12 != (undefined4 *)0x0) {
    FUN_006b7360(uVar2,uVar3,uVar4);
    iVar8 = FUN_0047e020(4);
    FUN_006b7310((float)(iVar8 + -2) / 200.0 + 1.0);
    FUN_006ac3e0(*puVar12,param_3);
    fVar14 = (float10)FUN_00517de0();
    FUN_006b7280((float)(fVar14 * (float10)0.9800000190734863));
    FUN_006b71c0(0);
  }
  if (puStack_24 != (undefined4 *)0x0) {
    FUN_006b71c0(0);
  }
  if (puVar13 != (undefined4 *)0x0) {
    FUN_006b71c0(0);
    FUN_006b73e0();
    FUN_00401f20(puVar13);
  }
  if (puStack_24 != (undefined4 *)0x0) {
    FUN_006b73e0();
    FUN_00401f20(puStack_24);
  }
  if (puVar12 != (undefined4 *)0x0) {
    FUN_006b73e0();
    FUN_00401f20(puVar12);
  }
  return;
}



void FUN_006afff0(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,char param_9)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  char *pcVar6;
  float local_18;
  float local_10;
  
  iVar3 = 0;
  iVar4 = 0;
  if (DAT_00b3c0f0 == 0) {
    return;
  }
  if (DAT_00b16304 <= DAT_00b3c20c) {
    return;
  }
  switch(param_1) {
  case 0:
  case 1:
    if (param_9 == '\0') {
      pcVar6 = "WPNBlockBlade";
    }
    else {
      pcVar6 = "WPNHitBladeEnchanted";
    }
    break;
  case 2:
  case 3:
    if (param_9 == '\0') {
      pcVar6 = "WPNBlockBlunt";
    }
    else {
      pcVar6 = "WPNHitBluntEnchanted";
    }
    break;
  case 4:
    pcVar6 = "WPNBlockStaff";
    break;
  case 5:
    pcVar6 = "WPNBlockBow";
    break;
  case 0xffffffff:
    pcVar6 = "WPNBlockHand";
    break;
  default:
    goto switchD_006b0024_default;
  }
  iVar3 = FUN_006ade50(pcVar6,0x4102,1);
switchD_006b0024_default:
  switch(param_2) {
  case 0:
  case 1:
    pcVar6 = "WPNBlockBlade";
    break;
  case 2:
  case 3:
    pcVar6 = "WPNBlockBlunt";
    break;
  case 4:
    pcVar6 = "WPNBlockStaff";
    break;
  case 5:
    pcVar6 = "WPNBlockBow";
    break;
  case 0xffffffff:
    pcVar6 = "WPNBlockHand";
    break;
  default:
    goto switchD_006b00a4_default;
  }
  iVar4 = FUN_006ade50(pcVar6,0x4102,1);
switchD_006b00a4_default:
  if (param_6 <= param_3) {
    local_10 = param_6;
  }
  else {
    local_10 = param_3;
  }
  if (param_3 <= param_6) {
    local_18 = param_6;
  }
  else {
    local_18 = param_3;
  }
  if (param_3 < param_6) {
    param_6 = param_3;
  }
  fVar1 = local_10 + (local_18 - param_6) * 0.5;
  if (param_7 <= param_4) {
    local_18 = param_7;
  }
  else {
    local_18 = param_4;
  }
  if (param_4 <= param_7) {
    local_10 = param_7;
  }
  else {
    local_10 = param_4;
  }
  if (param_4 < param_7) {
    param_7 = param_4;
  }
  fVar2 = (local_10 - param_7) * 0.5 + local_18;
  if (param_8 <= param_5) {
    local_18 = param_8;
  }
  else {
    local_18 = param_5;
  }
  if (param_5 <= param_8) {
    local_10 = param_8;
  }
  else {
    local_10 = param_5;
  }
  if (param_5 < param_8) {
    param_8 = param_5;
  }
  local_18 = (local_10 - param_8) * 0.5 + local_18;
  if (iVar3 != 0) {
    FUN_006b7360(fVar1,fVar2,local_18);
    FUN_006b7280(0x3f7ae148);
    fVar5 = (float10)FUN_0047e0b0(0x3e19999a);
    FUN_006b7310((float)(fVar5 + (float10)1.0));
    FUN_006b7190(0);
  }
  if (iVar4 != 0) {
    FUN_006b7360(fVar1,fVar2,local_18);
    FUN_006b7280(0x3f7ae148);
    fVar5 = (float10)FUN_0047e0b0(0x3e19999a);
    FUN_006b7310((float)(fVar5 + (float10)1.0));
    FUN_006b7190(0);
  }
  if (iVar3 != 0) {
    FUN_006b73e0();
    FUN_00401f20(iVar3);
  }
  if (iVar4 != 0) {
    FUN_006b73e0();
    FUN_00401f20(iVar4);
  }
  return;
}


