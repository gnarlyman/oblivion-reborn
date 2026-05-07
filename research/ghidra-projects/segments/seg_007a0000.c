
void FUN_007a0a50(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(in_ECX + 4);
  if (uVar1 != 0) {
    iVar2 = *(uint *)(in_ECX + 8) - uVar1;
    iVar3 = iVar2 >> 0x1f;
    if (iVar2 / 0x30 + iVar3 != iVar3) {
      if (*(uint *)(in_ECX + 8) < uVar1) {
        FUN_00984d5e();
      }
      if ((param_2 == 0) || (param_2 != in_ECX)) {
        FUN_00984d5e();
      }
      iVar3 = (int)(param_3 - uVar1) / 0x30;
      goto LAB_007a0ab3;
    }
  }
  iVar3 = 0;
LAB_007a0ab3:
  FUN_0079f700(param_2,param_3,1,param_4);
  uVar1 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar1) {
    FUN_00984d5e();
  }
  uVar1 = iVar3 * 0x30 + uVar1;
  if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
    FUN_00984d5e();
  }
  param_1[1] = uVar1;
  *param_1 = in_ECX;
  return;
}



void FUN_007a0b50(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint local_8 [2];
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)(in_ECX + 8) - uVar1) / 0x30) <
      (uint)((int)(*(int *)(in_ECX + 0xc) - uVar1) / 0x30))) {
    iVar2 = *(int *)(in_ECX + 8);
    local_8[0] = local_8[0] & 0xffffff00;
    FUN_0079e190(iVar2,1,param_1);
    *(int *)(in_ECX + 8) = iVar2 + 0x30;
    return;
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (uVar3 < uVar1) {
    FUN_00984d5e();
  }
  FUN_007a0a50(local_8,in_ECX,uVar3,param_1);
  return;
}



void FUN_007a0bf0(int param_1,int param_2,undefined4 param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_0079fb80(param_3);
  }
  return;
}



void FUN_007a0c20(int param_1,int param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_009cc5a1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_0079ee40(param_3);
    }
    param_1 = param_1 + 0x10;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_007a0cd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 != 0) {
      iVar1 = *(int *)(param_1 + 8);
      for (; iVar2 != iVar1; iVar2 = iVar2 + 0x30) {
        if (*(int *)(iVar2 + 4) != 0) {
          FUN_00401f20(*(int *)(iVar2 + 4));
        }
        *(undefined4 *)(iVar2 + 4) = 0;
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined4 *)(iVar2 + 0xc) = 0;
      }
      FUN_00401f20(*(undefined4 *)(param_1 + 4));
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



int FUN_007a0d40(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *unaff_FS_OFFSET;
  uint uStack_3c;
  undefined1 local_2c [4];
  int *local_28;
  int *local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cc5d9;
  local_10 = *unaff_FS_OFFSET;
  uStack_3c = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  *unaff_FS_OFFSET = (int)&local_10;
  local_18 = param_3;
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  local_20 = 0;
  local_8 = 0;
  while( true ) {
    local_8 = CONCAT31(local_8._1_3_,1);
    if (param_1 == param_2) break;
    local_8 = CONCAT31(local_8._1_3_,2);
    local_1c = param_3;
    if (param_3 != 0) {
      FUN_0079ee40(local_2c);
    }
    uVar2 = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 4) = uVar2;
    uVar2 = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar2;
    uVar2 = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    param_3 = param_3 + 0x10;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    param_1 = param_1 + 0x10;
  }
  if (local_28 != (int *)0x0) {
    if (local_28 != local_24) {
      piVar3 = local_28 + 1;
      do {
        if (*piVar3 != 0) {
          FUN_00401f20(*piVar3);
        }
        *piVar3 = 0;
        piVar3[1] = 0;
        piVar3[2] = 0;
        piVar1 = piVar3 + 0xb;
        piVar3 = piVar3 + 0xc;
      } while (piVar1 != local_24);
    }
    FUN_00401f20(local_28);
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}



void FUN_007a0e60(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined1 local_c [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_c;
  for (; param_1 != param_2; param_2 = param_2 + -0x10) {
    uVar2 = *(undefined4 *)(param_3 + -0xc);
    *(undefined4 *)(param_3 + -0xc) = *(undefined4 *)(param_2 + -0xc);
    *(undefined4 *)(param_2 + -0xc) = uVar2;
    uVar2 = *(undefined4 *)(param_3 + -8);
    *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
    *(undefined4 *)(param_2 + -8) = uVar2;
    uVar2 = *(undefined4 *)(param_3 + -4);
    *(undefined4 *)(param_3 + -4) = *(undefined4 *)(param_2 + -4);
    *(undefined4 *)(param_2 + -4) = uVar2;
    param_3 = param_3 + -0x10;
  }
  *unaff_FS_OFFSET = iVar1;
  return;
}



void FUN_007a0ee0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cc628;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_2c = 0;
  local_38 = 0;
  local_28 = 0;
  local_34 = 0;
  local_20 = 0;
  local_30 = 0;
  local_1c = 0;
  local_24 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  FUN_007a0b50(local_3c);
  if (local_38 != 0) {
    FUN_00401f20(local_38,uVar1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_007a0f70(int param_1,int param_2,undefined4 param_3)

{
  FUN_007a0c20(param_1,param_2,param_3);
  return param_2 * 0x10 + param_1;
}



void FUN_007a0fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_007a0d40(param_1,param_2,param_3);
  return;
}



int FUN_007a1000(int param_1,int param_2,int param_3)

{
  FUN_007a0e60(param_1,param_2,param_3,param_3,param_3,0);
  return param_3 + (param_2 - param_1 >> 4) * -0x10;
}



void FUN_007a1040(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  int extraout_ECX;
  uint uVar6;
  int *unaff_FS_OFFSET;
  uint uStack_3c;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  uint local_1c;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009cc658;
  local_10 = *unaff_FS_OFFSET;
  uStack_3c = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  *unaff_FS_OFFSET = (int)&local_10;
  FUN_0079ee40(param_4);
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = 0;
  local_8 = 0;
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(int *)(in_ECX + 0xc) - iVar2 >> 4;
  }
  if (param_3 != 0) {
    if (iVar2 != 0) {
      iVar1 = *(int *)(in_ECX + 8) - iVar2 >> 4;
    }
    if (0xfffffffU - iVar1 < param_3) {
      FUN_00790b90();
      iVar2 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(in_ECX + 8) - iVar2 >> 4;
    }
    if (uVar6 < iVar1 + param_3) {
      if (0xfffffff - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(in_ECX + 8) - iVar2 >> 4;
      }
      if (uVar6 < iVar1 + param_3) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(in_ECX + 8) - iVar2 >> 4;
        }
        uVar6 = iVar2 + param_3;
      }
      iVar1 = FUN_00794550(uVar6,0);
      local_1c = local_1c & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,1);
      uVar3 = FUN_007a0d40(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar4 = FUN_007a0f70(uVar3,param_3,local_2c);
      local_1c = local_1c & 0xffffff00;
      FUN_007a0d40(param_2,*(undefined4 *)(in_ECX + 8),uVar4);
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_ECX + 8) - iVar2 >> 4;
      }
      if (iVar2 != 0) {
        FUN_007a0cd0(iVar2,*(undefined4 *)(in_ECX + 8));
        FUN_00401f20(*(undefined4 *)(in_ECX + 4));
      }
      *(uint *)(in_ECX + 0xc) = uVar6 * 0x10 + iVar1;
      *(uint *)(in_ECX + 8) = (param_3 + iVar5) * 0x10 + iVar1;
      *(int *)(in_ECX + 4) = iVar1;
      param_3 = uVar4;
    }
    else {
      local_1c = *(uint *)(in_ECX + 8);
      if ((uint)((int)(local_1c - param_2) >> 4) < param_3) {
        FUN_007a0fd0(param_2,local_1c,param_3 * 0x10 + param_2);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_007a0f70(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2 >> 4),local_2c);
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x10;
        local_8 = 0;
        FUN_007a0bf0(param_2,*(int *)(in_ECX + 8) + param_3 * -0x10,local_2c);
      }
      else {
        iVar2 = local_1c + param_3 * -0x10;
        uVar3 = FUN_007a0fd0(iVar2,local_1c,local_1c);
        *(undefined4 *)(in_ECX + 8) = uVar3;
        FUN_007a1000(param_2,iVar2,local_1c);
        FUN_007a0bf0(param_2,param_3 * 0x10 + param_2,local_2c);
      }
    }
  }
  if (local_28 != 0) {
    FUN_0079e150(local_28,local_24,local_2c,param_3);
    FUN_00401f20(local_28);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_007a1320(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int in_ECX;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(in_ECX + 4);
  if ((uVar2 == 0) || ((int)(*(uint *)(in_ECX + 8) - uVar2) >> 4 == 0)) {
    iVar1 = 0;
  }
  else {
    if (*(uint *)(in_ECX + 8) < uVar2) {
      FUN_00984d5e();
    }
    if ((param_2 == 0) || (param_2 != in_ECX)) {
      FUN_00984d5e();
    }
    iVar1 = (int)(param_3 - uVar2) >> 4;
  }
  FUN_007a1040(param_2,param_3,1,param_4);
  uVar2 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar2) {
    FUN_00984d5e();
  }
  uVar2 = iVar1 * 0x10 + uVar2;
  if ((*(uint *)(in_ECX + 8) < uVar2) || (uVar2 < *(uint *)(in_ECX + 4))) {
    FUN_00984d5e();
  }
  param_1[1] = uVar2;
  *param_1 = in_ECX;
  return;
}



void FUN_007a13b0(void)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_28 [4];
  uint local_24;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_009cc6c5;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 1;
  in_ECX[0xb] = 2;
  in_ECX[0xd] = 4;
  in_ECX[0xe] = 1;
  *(undefined1 *)(in_ECX + 0xf) = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x15] = 0x3f800000;
  local_4 = 2;
  uStack_3 = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x14] = 4;
  in_ECX[0x17] = 0;
  in_ECX[0x19] = 2;
  in_ECX[0x1a] = 1;
  in_ECX[0x18] = 0x3d4ccccd;
  iVar3 = FUN_00401f00(0x5c,uVar2);
  local_4 = 3;
  uVar1 = local_4;
  local_4 = 3;
  if (iVar3 == 0) {
    uVar4 = 0;
    local_4 = uVar1;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = local_24 & 0xffffff00;
    FUN_00414500("BezierSpline 0.0 1.0 0.0 { 3 0 0.00138887 0.337009 0.941501 0.132767 0.493215 0.998903 1 0.00102074 0.23702 1 -6.24607e-008 0.307222 -0.951638 0.126974 }"
                 ,0x99);
    local_4 = 4;
    uVar4 = FUN_00786d60(local_28);
  }
  in_ECX[0xc] = uVar4;
  if ((iVar3 != 0) && (0xf < local_10)) {
    FUN_00401f20(local_24);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007a14e0(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cc701;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = *(int *)(in_ECX + 0x30);
  local_4 = 2;
  if (iVar1 != 0) {
    FUN_00784b60(uVar2);
    FUN_00401f20(iVar1);
  }
  *(undefined4 *)(in_ECX + 0x30) = 0;
  if (*(int *)(in_ECX + 0x44) != 0) {
    FUN_0079b120(*(int *)(in_ECX + 0x44),*(undefined4 *)(in_ECX + 0x48),in_ECX + 0x40,in_ECX);
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x44));
  }
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  if (*(int *)(in_ECX + 0x1c) != 0) {
    FUN_007a0cd0(*(int *)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x20),in_ECX + 0x18,in_ECX);
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x1c));
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    FUN_0079e150(*(int *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 0x10),in_ECX + 8,in_ECX);
    FUN_00401f20(*(undefined4 *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007a15d0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint local_8 [2];
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)(in_ECX + 8) - uVar1) >> 4) <
      (uint)((int)(*(int *)(in_ECX + 0xc) - uVar1) >> 4))) {
    iVar2 = *(int *)(in_ECX + 8);
    local_8[0] = local_8[0] & 0xffffff00;
    FUN_007a0c20(iVar2,1,param_1);
    *(int *)(in_ECX + 8) = iVar2 + 0x10;
    return;
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (uVar3 < uVar1) {
    FUN_00984d5e();
  }
  FUN_007a1320(local_8,in_ECX,uVar3,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x007a199e) */

void FUN_007a1660(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  uint local_40;
  uint local_3c;
  float local_34 [3];
  int *local_28;
  int *local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cc738;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffff94;
  *unaff_FS_OFFSET = (int)&local_c;
  local_48 = 0.0;
  local_50 = 0.0;
  iVar7 = 0;
  for (uVar10 = 0;
      (*(int *)(in_ECX + 0xc) != 0 &&
      (uVar10 < (uint)((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0x30)));
      uVar10 = uVar10 + 1) {
    if ((*(int *)(in_ECX + 0xc) == 0) ||
       ((uint)((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0x30) <= uVar10)) {
      FUN_00984d5e();
    }
    iVar4 = *(int *)(in_ECX + 0xc);
    local_48 = *(float *)(iVar4 + 0x20 + iVar7) + local_48;
    if ((iVar4 == 0) || ((uint)((*(int *)(in_ECX + 0x10) - iVar4) / 0x30) <= uVar10)) {
      FUN_00984d5e();
    }
    iVar4 = *(int *)(in_ECX + 0xc);
    if (local_50 < *(float *)(iVar7 + 0x20 + iVar4)) {
      if ((iVar4 == 0) || ((uint)((*(int *)(in_ECX + 0x10) - iVar4) / 0x30) <= uVar10)) {
        FUN_00984d5e();
      }
      local_50 = *(float *)(*(int *)(in_ECX + 0xc) + 0x20 + iVar7);
    }
    iVar7 = iVar7 + 0x30;
  }
  local_34[0] = local_50 * local_50;
  FUN_0078eaf0(uVar6);
  fVar2 = *(float *)(in_ECX + 0x60);
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  local_20 = 0;
  uVar6 = 0;
  local_4 = 1;
  local_54 = 0;
  while ((*(int *)(in_ECX + 0xc) != 0 &&
         (uVar6 < (uint)((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0x30)))) {
    if ((*(int *)(in_ECX + 0xc) == 0) ||
       ((uint)((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0x30) <= uVar6)) {
      FUN_00984d5e();
    }
    fVar3 = *(float *)(local_54 + 0x20 + *(int *)(in_ECX + 0xc));
    if (fVar3 <= (1.0 - fVar2) * local_50) {
      fVar11 = (float10)FUN_0078ea00(0,*(undefined4 *)(in_ECX + 0x5c));
      fVar5 = local_34[0] * (float)fVar11;
      if ((*(int *)(in_ECX + 0xc) == 0) ||
         ((uint)((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0x30) <= uVar6)) {
        FUN_00984d5e();
      }
      *(float *)(local_54 + 0x24 + *(int *)(in_ECX + 0xc)) = (1.0 - (float)fVar11) * fVar3 + fVar5;
      uVar6 = uVar6 + 1;
      local_54 = local_54 + 0x30;
    }
    else {
      if ((*(int *)(in_ECX + 0xc) == 0) ||
         ((uint)((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0x30) <= uVar6)) {
        FUN_00984d5e();
      }
      FUN_007a0b50(*(int *)(in_ECX + 0xc) + local_54);
      uVar10 = *(uint *)(in_ECX + 0xc);
      if (*(uint *)(in_ECX + 0x10) < uVar10) {
        FUN_00984d5e();
      }
      uVar10 = local_54 + uVar10;
      if ((*(uint *)(in_ECX + 0x10) < uVar10) || (uVar10 < *(uint *)(in_ECX + 0xc))) {
        FUN_00984d5e();
      }
      local_40 = local_40 & 0xffffff00;
      local_3c = local_3c & 0xffffff00;
      FUN_0079b700(uVar10 + 0x30,*(undefined4 *)(in_ECX + 0x10),uVar10,local_34[0],local_3c,local_40
                  );
      iVar4 = *(int *)(in_ECX + 0x10);
      for (iVar7 = iVar4 + -0x30; iVar7 != iVar4; iVar7 = iVar7 + 0x30) {
        if (*(int *)(iVar7 + 4) != 0) {
          FUN_00401f20(*(int *)(iVar7 + 4));
        }
        *(undefined4 *)(iVar7 + 4) = 0;
        *(undefined4 *)(iVar7 + 8) = 0;
        *(undefined4 *)(iVar7 + 0xc) = 0;
      }
      *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -0x30;
    }
  }
  uVar6 = *(uint *)(in_ECX + 0x10);
  local_34[0] = (float)((uint)local_34[0] & 0xffffff00);
  if (uVar6 < *(uint *)(in_ECX + 0xc)) {
    FUN_00984d5e();
  }
  uVar10 = *(uint *)(in_ECX + 0xc);
  if (*(uint *)(in_ECX + 0x10) < uVar10) {
    FUN_00984d5e();
  }
  FUN_0079fa30(uVar10,uVar6,(int)(uVar6 - uVar10) / 0x30,local_34[0]);
  piVar9 = local_24;
  local_34[0] = (float)((uint)local_34[0] & 0xffffff00);
  piVar8 = local_28;
  if ((local_24 < local_28) && (FUN_00984d5e(), piVar8 = local_28, local_24 < local_28)) {
    FUN_00984d5e();
  }
  FUN_0079fa30(piVar8,piVar9,((int)piVar9 - (int)piVar8) / 0x30,local_34[0]);
  local_4c = 0.0;
  for (uVar6 = 0;
      (local_28 != (int *)0x0 && (uVar6 < (uint)(((int)local_24 - (int)local_28) / 0x30)));
      uVar6 = uVar6 + 1) {
    iVar7 = (int)local_4c + (int)local_28;
    uVar10 = *(uint *)(in_ECX + 0xc);
    if (*(uint *)(in_ECX + 0x10) < uVar10) {
      FUN_00984d5e();
    }
    FUN_007a0a50(local_34,in_ECX + 8,uVar10,iVar7);
    local_4c = (float)((int)local_4c + 0x30);
  }
  uVar6 = *(uint *)(in_ECX + 0x50);
  local_50 = 0.0;
  if (uVar6 != 0) {
    do {
      if (uVar6 == 1) {
        fVar2 = *(float *)(in_ECX + 0x54);
      }
      else {
        local_34[0] = (float)(int)local_50;
        if ((int)local_50 < 0) {
          local_34[0] = local_34[0] + 4.2949673e+09;
        }
        fVar2 = (float)(int)(uVar6 - 1);
        if ((int)(uVar6 - 1) < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        local_34[0] = local_34[0] / fVar2;
        fVar2 = (*(float *)(in_ECX + 0x58) - *(float *)(in_ECX + 0x54)) * local_34[0] +
                *(float *)(in_ECX + 0x54);
      }
      local_18 = (int *)0x0;
      local_14 = (int *)0x0;
      local_10 = 0;
      local_4c = 0.0;
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0.0 < fVar2 * local_48) {
        uVar6 = 0;
        iVar7 = 0;
        while (((*(int *)(in_ECX + 0xc) != 0 &&
                (uVar6 < (uint)((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0x30))) &&
               (local_4c <= fVar2 * local_48))) {
          if ((*(int *)(in_ECX + 0xc) == 0) ||
             ((uint)((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0x30) <= uVar6)) {
            FUN_00984d5e();
          }
          iVar4 = *(int *)(in_ECX + 0xc);
          local_4c = *(float *)(iVar4 + 0x20 + iVar7) + local_4c;
          if ((iVar4 == 0) || ((uint)((*(int *)(in_ECX + 0x10) - iVar4) / 0x30) <= uVar6)) {
            FUN_00984d5e();
          }
          FUN_007a0b50(*(int *)(in_ECX + 0xc) + iVar7);
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + 0x30;
        }
      }
      FUN_007a15d0(local_1c);
      piVar8 = local_14;
      if (local_18 != (int *)0x0) {
        if (local_18 != local_14) {
          piVar9 = local_18 + 1;
          do {
            if (*piVar9 != 0) {
              FUN_00401f20(*piVar9);
            }
            *piVar9 = 0;
            piVar9[1] = 0;
            piVar9[2] = 0;
            piVar1 = piVar9 + 0xb;
            piVar9 = piVar9 + 0xc;
          } while (piVar1 != piVar8);
        }
        FUN_00401f20(local_18);
      }
      uVar6 = *(uint *)(in_ECX + 0x50);
      local_50 = (float)((int)local_50 + 1);
      local_18 = (int *)0x0;
      local_14 = (int *)0x0;
      local_10 = 0;
    } while ((uint)local_50 < uVar6);
  }
  piVar8 = local_24;
  if (local_28 != (int *)0x0) {
    if (local_28 != local_24) {
      piVar9 = local_28 + 1;
      do {
        if (*piVar9 != 0) {
          FUN_00401f20(*piVar9);
        }
        *piVar9 = 0;
        piVar9[1] = 0;
        piVar9[2] = 0;
        piVar1 = piVar9 + 0xb;
        piVar9 = piVar9 + 0xc;
      } while (piVar1 != piVar8);
    }
    FUN_00401f20(local_28);
  }
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  local_20 = 0;
  local_4 = 0xffffffff;
  FUN_0060d0a0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007a1cd0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *in_ECX;
  int iVar7;
  int *unaff_FS_OFFSET;
  int local_a0;
  undefined1 local_94 [4];
  undefined1 local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [4];
  undefined1 local_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [40];
  undefined1 local_34 [40];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cc77e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff50;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[1] = param_2;
  *in_ECX = param_1;
  local_a0 = 0;
  FUN_007a1660(uVar2);
  uVar2 = 0;
  iVar7 = 0;
  while( true ) {
    if ((in_ECX[7] == 0) || ((int)(in_ECX[8] - in_ECX[7]) >> 4 == 0)) {
      FUN_00984d5e();
    }
    iVar3 = *(int *)(in_ECX[7] + 4);
    if ((iVar3 == 0) || ((uint)((*(int *)(in_ECX[7] + 8) - iVar3) / 0x30) <= uVar2)) break;
    if (in_ECX[10] == 0) {
      if ((in_ECX[7] == 0) || ((int)(in_ECX[8] - in_ECX[7]) >> 4 == 0)) {
        FUN_00984d5e();
      }
      iVar3 = in_ECX[7];
      if ((*(int *)(iVar3 + 4) == 0) ||
         ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x30) <= uVar2)) {
        FUN_00984d5e();
      }
      iVar1 = *(int *)(*(int *)(iVar3 + 4) + 4 + iVar7);
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(*(int *)(iVar3 + 4) + iVar7 + 8) - iVar1) / 0x38;
      }
      local_a0 = local_a0 + in_ECX[0xb] * iVar3 * 2;
      uVar2 = uVar2 + 1;
      iVar7 = iVar7 + 0x30;
    }
    else {
      if (in_ECX[10] != 1) {
        local_7c = 0xf;
        local_80 = 0;
        local_90 = 0;
        FUN_00414500("default reached in CFrondEngine::Compute()",0x2a);
        local_4 = 0;
        FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_5c,&DAT_00af39e4);
      }
      if ((in_ECX[7] == 0) || ((int)(in_ECX[8] - in_ECX[7]) >> 4 == 0)) {
        FUN_00984d5e();
      }
      iVar3 = in_ECX[7];
      if ((*(int *)(iVar3 + 4) == 0) ||
         ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x30) <= uVar2)) {
        FUN_00984d5e();
      }
      iVar1 = *(int *)(*(int *)(iVar3 + 4) + 4 + iVar7);
      if (iVar1 == 0) {
        uVar2 = uVar2 + 1;
        iVar7 = iVar7 + 0x30;
      }
      else {
        local_a0 = local_a0 +
                   (in_ECX[0xd] * 2 + -1) *
                   ((*(int *)(*(int *)(iVar3 + 4) + iVar7 + 8) - iVar1) / 0x38);
        uVar2 = uVar2 + 1;
        iVar7 = iVar7 + 0x30;
      }
    }
  }
  if (0xffff < local_a0) {
    uVar4 = FUN_007a54a0("frond vertices exceed %d",0xffff);
    local_4 = 1;
    FUN_006f7dd0(uVar4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_5c,&DAT_00af17bc);
  }
  FUN_00798090(*(undefined2 *)(in_ECX + 0x14));
  if (in_ECX[10] == 0) {
    uVar2 = 0;
    iVar7 = 0;
    while( true ) {
      if ((in_ECX[7] == 0) || ((int)(in_ECX[8] - in_ECX[7]) >> 4 == 0)) {
        FUN_00984d5e();
      }
      iVar3 = *(int *)(in_ECX[7] + 4);
      if ((iVar3 == 0) || ((uint)((*(int *)(in_ECX[7] + 8) - iVar3) / 0x30) <= uVar2)) break;
      if ((in_ECX[7] == 0) || ((int)(in_ECX[8] - in_ECX[7]) >> 4 == 0)) {
        FUN_00984d5e();
      }
      iVar3 = in_ECX[7];
      if ((*(int *)(iVar3 + 4) == 0) ||
         ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x30) <= uVar2)) {
        FUN_00984d5e();
      }
      FUN_0079c540(*(int *)(iVar3 + 4) + iVar7);
      uVar2 = uVar2 + 1;
      iVar7 = iVar7 + 0x30;
    }
    uVar2 = 0;
    while( true ) {
      uVar5 = 0;
      if (in_ECX[7] == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (int)(in_ECX[8] - in_ECX[7]) >> 4;
      }
      if (uVar6 <= (uVar2 & 0xffff)) break;
      FUN_00794a90(uVar2);
      local_a0 = 0;
      while( true ) {
        if ((in_ECX[7] == 0) || ((uint)((int)(in_ECX[8] - in_ECX[7]) >> 4) <= (uVar2 & 0xffff))) {
          FUN_00984d5e();
        }
        uVar6 = uVar2 & 0xffff;
        iVar3 = uVar6 * 0x10 + in_ECX[7];
        iVar7 = *(int *)(iVar3 + 4);
        if ((iVar7 == 0) || ((uint)((*(int *)(iVar3 + 8) - iVar7) / 0x30) <= uVar5)) break;
        if ((in_ECX[7] == 0) || ((uint)((int)(in_ECX[8] - in_ECX[7]) >> 4) <= uVar6)) {
          FUN_00984d5e();
        }
        iVar7 = uVar6 * 0x10 + in_ECX[7];
        if ((*(int *)(iVar7 + 4) == 0) ||
           ((uint)((*(int *)(iVar7 + 8) - *(int *)(iVar7 + 4)) / 0x30) <= uVar5)) {
          FUN_00984d5e();
        }
        iVar7 = *(int *)(iVar7 + 4);
        if ((in_ECX[7] == 0) || ((int)(in_ECX[8] - in_ECX[7]) >> 4 == 0)) {
          FUN_00984d5e();
        }
        iVar3 = in_ECX[7];
        if ((*(int *)(iVar3 + 4) == 0) ||
           ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x30) <= uVar5)) {
          FUN_00984d5e();
        }
        FUN_0079a390(uVar2 & 0xffff,*(undefined4 *)(local_a0 + 0x28 + *(int *)(iVar3 + 4)),
                     iVar7 + local_a0);
        uVar5 = uVar5 + 1;
        local_a0 = local_a0 + 0x30;
      }
      uVar2 = uVar2 + 1;
    }
  }
  else {
    if (in_ECX[10] != 1) {
      local_60 = 0xf;
      local_64 = 0;
      local_74 = 0;
      FUN_00414500("default reached in CFrondEngine::Compute()",0x2a);
      local_4 = 2;
      FUN_00789190(local_78,0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_34,&DAT_00af39e4);
    }
    uVar2 = 0;
    iVar7 = 0;
    while( true ) {
      if ((in_ECX[7] == 0) || ((int)(in_ECX[8] - in_ECX[7]) >> 4 == 0)) {
        FUN_00984d5e();
      }
      iVar3 = *(int *)(in_ECX[7] + 4);
      if ((iVar3 == 0) || ((uint)((*(int *)(in_ECX[7] + 8) - iVar3) / 0x30) <= uVar2)) break;
      if ((in_ECX[7] == 0) || ((int)(in_ECX[8] - in_ECX[7]) >> 4 == 0)) {
        FUN_00984d5e();
      }
      iVar3 = in_ECX[7];
      if ((*(int *)(iVar3 + 4) == 0) ||
         ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x30) <= uVar2)) {
        FUN_00984d5e();
      }
      FUN_0079fd10(*(int *)(iVar3 + 4) + iVar7);
      uVar2 = uVar2 + 1;
      iVar7 = iVar7 + 0x30;
    }
    uVar2 = 0;
    while( true ) {
      if (in_ECX[7] == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (int)(in_ECX[8] - in_ECX[7]) >> 4;
      }
      if (uVar5 <= (uVar2 & 0xffff)) break;
      FUN_00794a90(uVar2);
      uVar5 = 0;
      local_a0 = 0;
      while( true ) {
        if ((in_ECX[7] == 0) || ((uint)((int)(in_ECX[8] - in_ECX[7]) >> 4) <= (uVar2 & 0xffff))) {
          FUN_00984d5e();
        }
        iVar3 = (uVar2 & 0xffff) * 0x10 + in_ECX[7];
        iVar7 = *(int *)(iVar3 + 4);
        if ((iVar7 == 0) || ((uint)((*(int *)(iVar3 + 8) - iVar7) / 0x30) <= uVar5)) break;
        if ((in_ECX[7] == 0) || ((int)(in_ECX[8] - in_ECX[7]) >> 4 == 0)) {
          FUN_00984d5e();
        }
        iVar7 = in_ECX[7];
        if ((*(int *)(iVar7 + 4) == 0) ||
           ((uint)((*(int *)(iVar7 + 8) - *(int *)(iVar7 + 4)) / 0x30) <= uVar5)) {
          FUN_00984d5e();
        }
        iVar7 = *(int *)(iVar7 + 4);
        if ((in_ECX[7] == 0) || ((uint)((int)(in_ECX[8] - in_ECX[7]) >> 4) <= (uVar2 & 0xffff))) {
          FUN_00984d5e();
        }
        iVar3 = (uVar2 & 0xffff) * 0x10 + in_ECX[7];
        if ((*(int *)(iVar3 + 4) == 0) ||
           ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x30) <= uVar5)) {
          FUN_00984d5e();
        }
        *(undefined4 *)(local_a0 + 0x2c + *(int *)(iVar3 + 4)) =
             *(undefined4 *)(iVar7 + local_a0 + 0x2c);
        if ((in_ECX[7] == 0) || ((uint)((int)(in_ECX[8] - in_ECX[7]) >> 4) <= (uVar2 & 0xffff))) {
          FUN_00984d5e();
        }
        iVar7 = (uVar2 & 0xffff) * 0x10 + in_ECX[7];
        if ((*(int *)(iVar7 + 4) == 0) ||
           ((uint)((*(int *)(iVar7 + 8) - *(int *)(iVar7 + 4)) / 0x30) <= uVar5)) {
          FUN_00984d5e();
        }
        iVar7 = *(int *)(iVar7 + 4);
        if ((in_ECX[7] == 0) || ((int)(in_ECX[8] - in_ECX[7]) >> 4 == 0)) {
          FUN_00984d5e();
        }
        iVar3 = in_ECX[7];
        if ((*(int *)(iVar3 + 4) == 0) ||
           ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x30) <= uVar5)) {
          FUN_00984d5e();
        }
        FUN_0079a450(uVar2 & 0xffff,*(undefined4 *)(local_a0 + 0x28 + *(int *)(iVar3 + 4)),
                     iVar7 + local_a0);
        uVar5 = uVar5 + 1;
        local_a0 = local_a0 + 0x30;
      }
      uVar2 = uVar2 + 1;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007a2400(undefined4 *param_1,undefined4 *param_2)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x4c);
  *param_2 = *(undefined4 *)(in_ECX + 0x50);
  return;
}



void FUN_007a2420(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x4c) = param_1;
  *(undefined4 *)(in_ECX + 0x50) = param_2;
  return;
}



float10 FUN_007a2440(void)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 8) - DAT_00b429b0;
  fVar4 = *(float *)(in_ECX + 4) - DAT_00b429ac;
  fVar3 = *(float *)(in_ECX + 0xc) - DAT_00b429b4;
  fVar1 = 1.0 - ((float)(((int)(fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1) >> 1) + 0x1fc00000) -
                *(float *)(in_ECX + 0x44)) / (*(float *)(in_ECX + 0x40) - *(float *)(in_ECX + 0x44))
  ;
  *(float *)(in_ECX + 0x14) = fVar1;
  uVar2 = 0x3f800000;
  if ((fVar1 <= 1.0) && (uVar2 = 0, 0.0 <= fVar1)) {
    return (float10)*(float *)(in_ECX + 0x14);
  }
  *(undefined4 *)(in_ECX + 0x14) = uVar2;
  return (float10)*(float *)(in_ECX + 0x14);
}



void FUN_007a24d0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x44) = param_1;
  *(undefined4 *)(in_ECX + 0x40) = param_2;
  return;
}



void FUN_007a24f0(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_1 == 0) {
    FUN_0078ea30(0xffffffff);
    FUN_0078ea00(0x40000000,0x49742400);
    uVar1 = FUN_009828c0();
    *(undefined4 *)(in_ECX + 0x48) = uVar1;
    return;
  }
  if (param_1 != 1) {
    *(int *)(in_ECX + 0x48) = param_1;
  }
  return;
}



void FUN_007a2540(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = FUN_0078eb40();
  *(undefined4 *)(in_ECX + 0x54) = uVar1;
  return;
}



void FUN_007a2560(char *param_1)

{
  char *pcVar1;
  undefined **local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1;
    if ((uint)(0xffffffff / ZEXT48(param_1)) < 0x54) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_c,&param_1);
      local_c[0] = &PTR_FUN_00a32488;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_c,&DAT_00ad7f34);
    }
  }
  FUN_00401f00((int)pcVar1 * 0x54);
  return;
}



void * FUN_007a25c0(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}



void FUN_007a25f0(void)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x2c)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x18));
  }
  *(undefined4 *)(in_ECX + 0x2c) = 0xf;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined1 *)(in_ECX + 0x18) = 0;
  return;
}



void FUN_007a2620(void)

{
  rsize_t rVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *pvVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_c;
  int local_8;
  
  if (*(char *)(in_ECX + 0x21) != '\0') {
    iVar7 = *(int *)(in_ECX + 0x58);
    if (iVar7 != 0) {
      FUN_00790d00();
      FUN_00401f20(iVar7);
    }
    *(undefined4 *)(in_ECX + 0x58) = 0;
    local_8 = 0;
    if (0 < *(int *)(in_ECX + 0xc0)) {
      local_c = 0;
      do {
        if (*(int *)(in_ECX + 0xd4) != 0) {
          uVar5 = 0;
          while( true ) {
            iVar6 = *(int *)(local_c + 4 + *(int *)(in_ECX + 0xd4));
            iVar7 = local_c + *(int *)(in_ECX + 0xd4);
            if ((iVar6 == 0) || ((uint)(*(int *)(iVar7 + 8) - iVar6 >> 2) <= uVar5)) break;
            if ((iVar6 == 0) || ((uint)(*(int *)(iVar7 + 8) - iVar6 >> 2) <= uVar5)) {
              FUN_00984d5e();
            }
            puVar2 = *(undefined4 **)(*(int *)(iVar7 + 4) + uVar5 * 4);
            if (puVar2 != (undefined4 *)0x0) {
              (**(code **)*puVar2)(1);
            }
            iVar7 = *(int *)(*(int *)(in_ECX + 0xd4) + 4 + local_c);
            iVar6 = *(int *)(in_ECX + 0xd4) + local_c;
            if ((iVar7 == 0) || ((uint)(*(int *)(iVar6 + 8) - iVar7 >> 2) <= uVar5)) {
              FUN_00984d5e();
            }
            *(undefined4 *)(*(int *)(iVar6 + 4) + uVar5 * 4) = 0;
            uVar5 = uVar5 + 1;
          }
          pvVar3 = *(void **)(*(int *)(in_ECX + 0xd4) + 8 + local_c);
          iVar7 = *(int *)(in_ECX + 0xd4) + local_c;
          if (pvVar3 < *(void **)(iVar7 + 4)) {
            FUN_00984d5e();
          }
          pvVar4 = *(void **)(iVar7 + 4);
          if (*(void **)(iVar7 + 8) < pvVar4) {
            FUN_00984d5e();
          }
          if (pvVar4 != pvVar3) {
            iVar6 = *(int *)(iVar7 + 8) - (int)pvVar3 >> 2;
            rVar1 = iVar6 * 4;
            if (0 < iVar6) {
              _memmove_s(pvVar4,rVar1,pvVar3,rVar1);
            }
            *(void **)(iVar7 + 8) = (void *)(rVar1 + (int)pvVar4);
          }
        }
        local_8 = local_8 + 1;
        local_c = local_c + 0x10;
      } while (local_8 < *(int *)(in_ECX + 0xc0));
    }
    pvVar3 = *(void **)(in_ECX + 0xd4);
    if (pvVar3 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar3,0x10,*(int *)((int)pvVar3 + -4),FUN_00794eb0);
      FUN_00401f20((int)pvVar3 + -4);
    }
    *(undefined4 *)(in_ECX + 0xd4) = 0;
    for (uVar5 = 0;
        (pvVar3 = *(void **)(in_ECX + 100), pvVar3 != (void *)0x0 &&
        (uVar5 < (uint)(*(int *)(in_ECX + 0x68) - (int)pvVar3 >> 2))); uVar5 = uVar5 + 1) {
      if ((pvVar3 == (void *)0x0) || ((uint)(*(int *)(in_ECX + 0x68) - (int)pvVar3 >> 2) <= uVar5))
      {
        FUN_00984d5e();
      }
      iVar7 = *(int *)(*(int *)(in_ECX + 100) + uVar5 * 4);
      if (iVar7 != 0) {
        FUN_007a7800();
        FUN_00401f20(iVar7);
      }
      if ((*(int *)(in_ECX + 100) == 0) ||
         ((uint)(*(int *)(in_ECX + 0x68) - *(int *)(in_ECX + 100) >> 2) <= uVar5)) {
        FUN_00984d5e();
      }
      *(undefined4 *)(*(int *)(in_ECX + 100) + uVar5 * 4) = 0;
    }
    pvVar4 = *(void **)(in_ECX + 0x68);
    if (pvVar4 < pvVar3) {
      FUN_00984d5e();
    }
    pvVar3 = *(void **)(in_ECX + 100);
    if (*(void **)(in_ECX + 0x68) < pvVar3) {
      FUN_00984d5e();
    }
    if (pvVar3 != pvVar4) {
      iVar7 = *(int *)(in_ECX + 0x68) - (int)pvVar4 >> 2;
      rVar1 = iVar7 * 4;
      if (0 < iVar7) {
        _memmove_s(pvVar3,rVar1,pvVar4,rVar1);
      }
      *(void **)(in_ECX + 0x68) = (void *)(rVar1 + (int)pvVar3);
    }
    *(undefined1 *)(in_ECX + 0x21) = 0;
  }
  return;
}



void FUN_007a2850(undefined1 *param_1)

{
  undefined1 *in_ECX;
  
  *in_ECX = *param_1;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x2c) = 0xf;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  in_ECX[0x18] = 0;
  FUN_00414420(param_1 + 0x14,0,0xffffffff);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  return;
}



void FUN_007a28e0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar4;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [40];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab198;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffa8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0078eb40(uVar1);
  do {
    switch(iVar2) {
    case 0x232f:
      uVar3 = FUN_0078eb40(uVar1);
      *(undefined4 *)(in_ECX + 0x70) = uVar3;
      break;
    case 0x2330:
      fVar4 = (float10)FUN_0078eb10();
      *(float *)(in_ECX + 0xdc) = (float)fVar4;
      break;
    default:
      local_38 = 0xf;
      local_3c = 0;
      local_4c = 0;
      FUN_00414500("malformed engine lod data",0x19);
      local_4 = 0;
      FUN_00789190(local_50,0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_34,&DAT_00af39e4);
    case 0x2332:
      fVar4 = (float10)FUN_0078eb10();
      *(float *)(in_ECX + 0xe4) = (float)fVar4;
      if ((float)fVar4 == 0.0) {
        *(undefined4 *)(in_ECX + 0xe4) = 0x3dcccccd;
      }
      break;
    case 0x2333:
      uVar3 = FUN_0078eb40(uVar1);
      *(undefined4 *)(in_ECX + 0xc0) = uVar3;
      break;
    case 0x2334:
      fVar4 = (float10)FUN_0078eb10();
      *(float *)(in_ECX + 0xe0) = (float)fVar4;
      break;
    case 0x2335:
      fVar4 = (float10)FUN_0078eb10();
      *(float *)(in_ECX + 0xe8) = (float)fVar4;
      break;
    case 0x2336:
      fVar4 = (float10)FUN_0078eb10();
      *(float *)(in_ECX + 0xec) = (float)fVar4;
    }
    iVar2 = FUN_0078eb40(uVar1);
  } while (iVar2 != 0x232e);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007a2a40(uint *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar6;
  uint local_98;
  undefined1 local_94 [4];
  undefined1 local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [4];
  undefined1 local_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [40];
  undefined1 local_34 [40];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cc7be;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff54;
  *unaff_FS_OFFSET = (int)&local_c;
  local_98 = 0;
  while( true ) {
    if ((*(int *)(in_ECX + 100) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x68) - *(int *)(in_ECX + 100) >> 2) <= local_98)) {
      iVar4 = FUN_0078eb40(uVar3);
      if (iVar4 != 0x3a99) {
        local_60 = 0xf;
        local_64 = 0;
        local_74 = 0;
        FUN_00414500("malformed texture controls",0x1a);
        local_4 = 2;
        FUN_00789190(local_78,0);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_34,&DAT_00af39e4);
      }
      *unaff_FS_OFFSET = local_c;
      return;
    }
    iVar4 = FUN_0078eb40(uVar3);
    if (iVar4 != 0x3a9a) {
      local_7c = 0xf;
      local_80 = 0;
      local_90 = 0;
      FUN_00414500("malformed texture controls",0x1a);
      local_4 = 0;
      FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_5c,&DAT_00af39e4);
    }
    uVar2 = *param_1;
    *param_1 = uVar2 + 1;
    if ((param_1[2] == 0) || (param_1[3] - param_1[2] <= uVar2)) {
      FUN_00984d5e();
    }
    cVar1 = *(char *)(param_1[2] + uVar2);
    if ((*(int *)(in_ECX + 100) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x68) - *(int *)(in_ECX + 100) >> 2) <= local_98)) {
      FUN_00984d5e();
    }
    iVar4 = local_98 * 4;
    *(bool *)(*(int *)(iVar4 + *(int *)(in_ECX + 100)) + 0x1e) = cVar1 != '\0';
    iVar5 = FUN_0078eb40(uVar3);
    if (iVar5 != 0x3a9b) break;
    if ((*(int *)(in_ECX + 100) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x68) - *(int *)(in_ECX + 100) >> 2) <= local_98)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(in_ECX + 100);
    fVar6 = (float10)FUN_0078eb10();
    local_98 = local_98 + 1;
    *(float *)(*(int *)(iVar5 + iVar4) + 0x20) = (float)fVar6;
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90 = 0;
  FUN_00414500("malformed texture controls",0x1a);
  local_4 = 1;
  FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_5c,&DAT_00af39e4);
}



void FUN_007a2c60(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  float10 fVar6;
  undefined1 local_94 [4];
  undefined1 local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [40];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cc861;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff5c;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = 0;
  while( true ) {
    if ((*(int *)(in_ECX + 100) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x68) - *(int *)(in_ECX + 100) >> 2) <= uVar5)) {
      iVar2 = FUN_0078eb40(uVar1);
      if (iVar2 != 0x3e81) {
        local_38 = 0xf;
        local_3c = 0;
        local_4c = 0;
        FUN_00414500("malformed flare info",0x14);
        local_4 = 0xb;
        FUN_00789190(local_50,0);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_34,&DAT_00af39e4);
      }
      *unaff_FS_OFFSET = local_c;
      return;
    }
    iVar2 = FUN_0078eb40(uVar1);
    if (iVar2 != 0x3e82) {
      local_7c = 0xf;
      local_80 = 0;
      local_90 = 0;
      FUN_00414500("malformed flare info",0x14);
      local_4 = 0;
      FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_78,&DAT_00af39e4);
    }
    if ((*(int *)(in_ECX + 100) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x68) - *(int *)(in_ECX + 100) >> 2) <= uVar5)) {
      FUN_00984d5e();
    }
    iVar2 = *(int *)(in_ECX + 100);
    fVar6 = (float10)FUN_0078eb10();
    *(float *)(*(int *)(iVar2 + uVar5 * 4) + 0x24) = (float)fVar6;
    iVar2 = FUN_0078eb40(uVar1);
    if (iVar2 != 0x3e83) {
      local_7c = 0xf;
      local_80 = 0;
      local_90 = 0;
      FUN_00414500("malformed flare info",0x14);
      local_4 = 1;
      FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_78,&DAT_00af39e4);
    }
    if ((*(int *)(in_ECX + 100) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x68) - *(int *)(in_ECX + 100) >> 2) <= uVar5)) {
      FUN_00984d5e();
    }
    iVar2 = *(int *)(in_ECX + 100);
    uVar3 = FUN_0078eb40();
    *(undefined4 *)(*(int *)(iVar2 + uVar5 * 4) + 0x28) = uVar3;
    iVar2 = FUN_0078eb40();
    if (iVar2 != 0x3e84) {
      local_7c = 0xf;
      local_80 = 0;
      local_90 = 0;
      FUN_00414500("malformed flare info",0x14);
      local_4 = 2;
      FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_78,&DAT_00af39e4);
    }
    if ((*(int *)(in_ECX + 100) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x68) - *(int *)(in_ECX + 100) >> 2) <= uVar5)) {
      FUN_00984d5e();
    }
    iVar2 = *(int *)(in_ECX + 100);
    fVar6 = (float10)FUN_0078eb10();
    *(float *)(*(int *)(iVar2 + uVar5 * 4) + 0x2c) = (float)fVar6;
    iVar2 = FUN_0078eb40();
    if (iVar2 != 0x3e85) {
      local_7c = 0xf;
      local_80 = 0;
      local_90 = 0;
      FUN_00414500("malformed flare info",0x14);
      local_4 = 3;
      FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_78,&DAT_00af39e4);
    }
    if ((*(int *)(in_ECX + 100) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x68) - *(int *)(in_ECX + 100) >> 2) <= uVar5)) {
      FUN_00984d5e();
    }
    iVar2 = *(int *)(in_ECX + 100);
    fVar6 = (float10)FUN_0078eb10();
    *(float *)(*(int *)(iVar2 + uVar5 * 4) + 0x30) = (float)fVar6;
    iVar2 = FUN_0078eb40();
    if (iVar2 != 0x3e86) {
      FUN_00414750("malformed flare info");
      local_4 = 4;
      FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_78,&DAT_00af39e4);
    }
    if ((*(int *)(in_ECX + 100) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x68) - *(int *)(in_ECX + 100) >> 2) <= uVar5)) {
      FUN_00984d5e();
    }
    iVar2 = *(int *)(in_ECX + 100);
    fVar6 = (float10)FUN_0078eb10();
    *(float *)(*(int *)(iVar2 + uVar5 * 4) + 0x34) = (float)fVar6;
    iVar2 = FUN_0078eb40();
    if (iVar2 != 0x3e87) {
      FUN_00414750("malformed flare info");
      local_4 = 5;
      FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_78,&DAT_00af39e4);
    }
    piVar4 = (int *)FUN_0054f7a0(uVar5);
    fVar6 = (float10)FUN_0078eb10();
    *(float *)(*piVar4 + 0x38) = (float)fVar6;
    iVar2 = FUN_0078eb40();
    if (iVar2 != 0x3e88) {
      FUN_00414750("malformed flare info");
      local_4 = 6;
      FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_78,&DAT_00af39e4);
    }
    piVar4 = (int *)FUN_0054f7a0(uVar5);
    fVar6 = (float10)FUN_0078eb10();
    *(float *)(*piVar4 + 0x3c) = (float)fVar6;
    iVar2 = FUN_0078eb40();
    if (iVar2 != 0x3e89) {
      FUN_00414750("malformed flare info");
      local_4 = 7;
      FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_78,&DAT_00af39e4);
    }
    piVar4 = (int *)FUN_0054f7a0(uVar5);
    fVar6 = (float10)FUN_0078eb10();
    *(float *)(*piVar4 + 0x40) = (float)fVar6;
    iVar2 = FUN_0078eb40();
    if (iVar2 != 0x3e8a) {
      FUN_00414750("malformed flare info");
      local_4 = 8;
      FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_78,&DAT_00af39e4);
    }
    piVar4 = (int *)FUN_0054f7a0(uVar5);
    fVar6 = (float10)FUN_0078eb10();
    *(float *)(*piVar4 + 0x44) = (float)fVar6;
    iVar2 = FUN_0078eb40();
    if (iVar2 != 0x3e8b) break;
    piVar4 = (int *)FUN_0054f7a0(uVar5);
    fVar6 = (float10)FUN_0078eb10();
    *(float *)(*piVar4 + 0x48) = (float)fVar6;
    iVar2 = FUN_0078eb40();
    if (iVar2 != 0x3e8c) {
      FUN_00414750("malformed flare info");
      local_4 = 10;
      FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_78,&DAT_00af39e4);
    }
    piVar4 = (int *)FUN_0054f7a0(uVar5);
    fVar6 = (float10)FUN_0078eb10();
    *(float *)(*piVar4 + 0x4c) = (float)fVar6;
    uVar5 = uVar5 + 1;
  }
  FUN_00414750("malformed flare info");
  local_4 = 9;
  FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_78,&DAT_00af39e4);
}



undefined4 FUN_007a3230(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  uVar1 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x30c30c3 < param_1) {
    uVar1 = FUN_00790b90();
  }
  iVar2 = FUN_007a2560(param_1,uVar1);
  *(int *)(in_ECX + 4) = iVar2;
  *(int *)(in_ECX + 8) = iVar2;
  *(uint *)(in_ECX + 0xc) = param_1 * 0x54 + iVar2;
  return 1;
}



void FUN_007a3280(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int extraout_ECX;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  param_4 = (undefined4 *)*param_4;
  iVar5 = *(int *)(in_ECX + 4);
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(in_ECX + 0xc) - iVar5 >> 2;
  }
  if (param_3 != 0) {
    if (iVar5 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(in_ECX + 8) - iVar5 >> 2;
    }
    if (0x3fffffffU - iVar1 < param_3) {
      FUN_00790b90();
      iVar5 = extraout_ECX;
    }
    if (iVar5 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(in_ECX + 8) - iVar5 >> 2;
    }
    if (uVar4 < iVar1 + param_3) {
      if (0x3fffffff - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (iVar5 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(in_ECX + 8) - iVar5 >> 2;
      }
      if (uVar4 < iVar1 + param_3) {
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(in_ECX + 8) - iVar5 >> 2;
        }
        uVar4 = iVar5 + param_3;
      }
      iVar1 = FUN_0078fb60(uVar4,0);
      uVar2 = FUN_007a25c0(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar2 = FUN_00790b60(uVar2,param_3,&param_4);
      FUN_007a25c0(param_2,*(undefined4 *)(in_ECX + 8),uVar2);
      iVar5 = *(int *)(in_ECX + 4);
      if (iVar5 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(in_ECX + 8) - iVar5 >> 2;
      }
      if (iVar5 != 0) {
        FUN_00401f20(iVar5);
      }
      *(int *)(in_ECX + 4) = iVar1;
      *(uint *)(in_ECX + 0xc) = iVar1 + uVar4 * 4;
      *(uint *)(in_ECX + 8) = iVar1 + (param_3 + iVar3) * 4;
      return;
    }
    iVar1 = *(int *)(in_ECX + 8);
    iVar5 = param_3 * 4;
    if ((uint)(iVar1 - param_2 >> 2) < param_3) {
      FUN_007a25c0(param_2,iVar1,iVar5 + param_2);
      FUN_00790b60(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2 >> 2),&param_4);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + iVar5;
      FUN_00790490(param_2,*(int *)(in_ECX + 8) + param_3 * -4,&param_4);
      return;
    }
    iVar3 = iVar1 + param_3 * -4;
    uVar2 = FUN_007a25c0(iVar3,iVar1,iVar1);
    *(undefined4 *)(in_ECX + 8) = uVar2;
    FUN_005254a0(param_2,iVar3,iVar1);
    FUN_00790490(param_2,iVar5 + param_2,&param_4);
  }
  return;
}



void FUN_007a3470(undefined1 *param_1)

{
  undefined1 *in_ECX;
  
  *in_ECX = *param_1;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  FUN_00414420(param_1 + 0x14,0,0xffffffff);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  return;
}



void FUN_007a34f0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_28 [4];
  uint local_24;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cc898;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = local_24 & 0xffffff00;
  FUN_00414420(param_1,0,0xffffffff);
  local_4 = 0;
  FUN_00414420(local_28,0,0xffffffff);
  if (0xf < local_10) {
    FUN_00401f20(local_24,uVar1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007a3580(int param_1)

{
  rsize_t _DstSize;
  void *_Src;
  void *_Dst;
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  uint uVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (uVar3 != 0) {
    if (0x3fffffff < uVar3) {
      FUN_00790b90();
      uVar2 = extraout_ECX;
    }
    iVar1 = FUN_0078fb60(uVar3,uVar2);
    *(int *)(in_ECX + 4) = iVar1;
    *(int *)(in_ECX + 8) = iVar1;
    *(uint *)(in_ECX + 0xc) = iVar1 + uVar3 * 4;
    uVar3 = *(uint *)(param_1 + 8);
    if (uVar3 < *(uint *)(param_1 + 4)) {
      FUN_00984d5e();
    }
    _Src = *(void **)(param_1 + 4);
    if (*(void **)(param_1 + 8) < _Src) {
      FUN_00984d5e();
    }
    _Dst = *(void **)(in_ECX + 4);
    iVar1 = (int)(uVar3 - (int)_Src) >> 2;
    _DstSize = iVar1 * 4;
    if (iVar1 != 0) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)(in_ECX + 8) = (void *)(_DstSize + (int)_Dst);
  }
  return;
}



void FUN_007a3620(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 == 0) || ((int)(*(uint *)(in_ECX + 8) - uVar1) >> 2 == 0)) {
    iVar2 = 0;
  }
  else {
    if (*(uint *)(in_ECX + 8) < uVar1) {
      FUN_00984d5e();
    }
    if ((param_2 == 0) || (param_2 != in_ECX)) {
      FUN_00984d5e();
    }
    iVar2 = (int)(param_3 - uVar1) >> 2;
  }
  FUN_007a3280(param_2,param_3,1,param_4);
  uVar1 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar1) {
    FUN_00984d5e();
  }
  uVar1 = uVar1 + iVar2 * 4;
  if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
    FUN_00984d5e();
  }
  param_1[1] = uVar1;
  *param_1 = in_ECX;
  return;
}



void FUN_007a36b0(int param_1,int param_2)

{
  uint *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = (uint *)(param_1 + 0x2c);
    do {
      if (0xf < *puVar1) {
        FUN_00401f20(puVar1[-5]);
      }
      *puVar1 = 0xf;
      puVar1[-1] = 0;
      *(undefined1 *)(puVar1 + -5) = 0;
      param_1 = param_1 + 0x54;
      puVar1 = puVar1 + 0x15;
    } while (param_1 != param_2);
  }
  return;
}



void FUN_007a3700(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cc902;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0078ecf0(uVar1);
  in_ECX[4] = 0x3f800000;
  in_ECX[5] = 0x3f800000;
  local_4 = 0;
  in_ECX[6] = 0xbf800000;
  *in_ECX = &PTR_FUN_00a8c894;
  in_ECX[7] = 0;
  FUN_0078eaf0();
  local_4._0_1_ = 1;
  *(undefined1 *)((int)in_ECX + 0x21) = 1;
  FUN_007a8620();
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 6;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  local_4._0_1_ = 4;
  FUN_007a5b10();
  in_ECX[0x37] = 0x3f000000;
  in_ECX[0x38] = 0x3f800000;
  local_4 = CONCAT31(local_4._1_3_,5);
  in_ECX[0x35] = 0;
  in_ECX[0x39] = 0x3e99999a;
  *(undefined1 *)(in_ECX + 0x36) = 0;
  in_ECX[0x3c] = 1;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0x3d4ccccd;
  FUN_007a8480();
  in_ECX[0x43] = 0x3e800000;
  in_ECX[0x17] = param_1;
  in_ECX[0x40] = -((float)in_ECX[0x3d] * 45.0);
  in_ECX[0x41] = (float)in_ECX[0x3d] * 45.0;
  in_ECX[0x42] = (float)in_ECX[0x3e] + (float)in_ECX[0x3e];
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007a3860(void)

{
  uint uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009cc954;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 4;
  FUN_007a5b70(uVar1);
  if (*(int *)(in_ECX + 0x78) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x78));
  }
  *(undefined4 *)(in_ECX + 0x78) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  if (*(int *)(in_ECX + 100) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 100));
  }
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  if (0xf < *(uint *)(in_ECX + 0x3c)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x28));
  }
  *(undefined4 *)(in_ECX + 0x3c) = 0xf;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined1 *)(in_ECX + 0x28) = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_0060d0a0();
  local_4 = 0xffffffff;
  FUN_0078ed10();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007a3920(byte param_1)

{
  FUN_007a3860();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007a3940(void)

{
  float fVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  float local_44;
  int local_40;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_28;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cc980;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar4 = 0;
  local_44 = -1.0;
  iVar3 = 0;
  while ((*(int *)(in_ECX + 0x98) != 0 &&
         (uVar4 < (uint)((*(int *)(in_ECX + 0x9c) - *(int *)(in_ECX + 0x98)) / 0x54)))) {
    if ((*(int *)(in_ECX + 0x98) == 0) ||
       ((uint)((*(int *)(in_ECX + 0x9c) - *(int *)(in_ECX + 0x98)) / 0x54) <= uVar4)) {
      FUN_00984d5e();
    }
    iVar2 = *(int *)(in_ECX + 0x98) + iVar3;
    if (*(float *)(*(int *)(in_ECX + 0x98) + 0x48 + iVar3) <= *(float *)(iVar2 + 0x4c)) {
      fVar1 = *(float *)(iVar2 + 0x4c);
    }
    else {
      fVar1 = *(float *)(iVar2 + 0x48);
    }
    fVar1 = *(float *)(in_ECX + 0xa4) * fVar1;
    if (fVar1 <= local_44) {
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x54;
    }
    else {
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x54;
      local_44 = fVar1;
    }
  }
  if (*(int *)(in_ECX + 0xd4) != 0) {
    FUN_0079b2f0();
    local_40 = 1;
    if (1 < *(int *)(in_ECX + 0xc0)) {
      iVar3 = 0x10;
      do {
        FUN_007a8f00();
        local_4 = 0;
        FUN_007a3580(*(int *)(in_ECX + 0xd4) + -0x10 + iVar3);
        FUN_007a9740(local_3c);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_0079b2f0();
        if (local_38 != 0) {
          FUN_00401f20();
        }
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_4 = 0xffffffff;
        if (local_28 != 0) {
          FUN_00401f20();
        }
        local_40 = local_40 + 1;
        iVar3 = iVar3 + 0x10;
      } while (local_40 < *(int *)(in_ECX + 0xc0));
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_007a3b80(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  for (; param_1 != param_2; param_1 = param_1 + 0x54) {
    FUN_007a3470(param_1);
  }
  return (iVar1 / 0x54) * 0x54 + param_3;
}



int FUN_007a3bd0(int param_1,int param_2,int param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_009cc9b1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x54) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_007a2850(param_1);
    }
    param_3 = param_3 + 0x54;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}



void FUN_007a3c80(void)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  rsize_t _DstSize;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int in_ECX;
  uint uVar8;
  uint uVar9;
  int iVar10;
  void *pvVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  float local_58;
  float local_50;
  float local_4c;
  undefined1 local_40 [8];
  undefined1 local_38 [4];
  void *local_34;
  void *local_30;
  undefined4 local_2c;
  undefined1 local_28 [4];
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  int local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  puStack_10 = &LAB_009cc9e8;
  local_14 = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffff90;
  *unaff_FS_OFFSET = (int)&local_14;
  uVar9 = 0;
  local_34 = (void *)0x0;
  local_30 = (void *)0x0;
  local_2c = 0;
  local_c = 0;
  if (*(int *)(in_ECX + 0x58) != 0) {
    iVar6 = *(int *)(*(int *)(in_ECX + 0x5c) + 0x6c);
    if (iVar6 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(int *)(*(int *)(in_ECX + 0x5c) + 0x70) - iVar6 >> 2;
    }
    if ((short)(uVar8 / 3) != 0) {
      FUN_007917e0(local_38);
    }
  }
  pvVar11 = local_34;
  local_4c = 0.0;
  uVar8 = 0;
  local_50 = 0.0;
  iVar6 = FUN_0078fa80(uVar5);
  if (iVar6 != 0) {
    do {
      if ((pvVar11 == (void *)0x0) || ((uint)((int)local_30 - (int)pvVar11 >> 2) <= uVar8)) {
        FUN_00984d5e();
        pvVar11 = local_34;
      }
      fVar2 = *(float *)(*(int *)((int)pvVar11 + uVar8 * 4) + 0x28);
      local_4c = fVar2 + local_4c;
      if (local_50 < fVar2) {
        local_50 = fVar2;
      }
      uVar8 = uVar8 + 1;
      uVar7 = FUN_0078fa80(uVar5);
    } while (uVar8 < uVar7);
  }
  FUN_0078eaf0();
  fVar2 = *(float *)(in_ECX + 0xec);
  local_24 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_c = CONCAT31(local_c._1_3_,2);
  while ((local_34 != (void *)0x0 && (uVar9 < (uint)((int)local_30 - (int)local_34 >> 2)))) {
    fVar3 = *(float *)(*(int *)((int)local_34 + uVar9 * 4) + 0x28);
    if (fVar3 <= (1.0 - fVar2) * local_50) {
      fVar12 = (float10)FUN_0078ea00(0,*(undefined4 *)(in_ECX + 0xe8));
      local_58 = (1.0 - (float)fVar12) * fVar3 + local_50 * (float)fVar12;
      if (local_58 <= 0.0) {
        local_58 = 0.0;
      }
      if ((local_34 == (void *)0x0) || ((uint)((int)local_30 - (int)local_34 >> 2) <= uVar9)) {
        FUN_00984d5e();
      }
      *(float *)(*(int *)((int)local_34 + uVar9 * 4) + 0x2c) = local_58;
      uVar9 = uVar9 + 1;
    }
    else {
      if ((local_34 == (void *)0x0) || ((uint)((int)local_30 - (int)local_34 >> 2) <= uVar9)) {
        FUN_00984d5e();
      }
      puVar4 = local_20;
      puVar1 = (undefined4 *)((int)local_34 + uVar9 * 4);
      if ((local_24 == (undefined4 *)0x0) ||
         ((uint)(local_1c - (int)local_24 >> 2) <= (uint)((int)local_20 - (int)local_24 >> 2))) {
        if (local_20 < local_24) {
          FUN_00984d5e();
        }
        FUN_007a3620(local_40,local_28,puVar4,puVar1);
      }
      else {
        *local_20 = *puVar1;
        local_20 = local_20 + 1;
      }
      pvVar11 = local_34;
      if (local_30 < local_34) {
        FUN_00984d5e();
      }
      pvVar11 = (void *)((int)pvVar11 + uVar9 * 4);
      if ((local_30 < pvVar11) || (pvVar11 < local_34)) {
        FUN_00984d5e();
      }
      iVar6 = (int)local_30 - ((int)pvVar11 + 4) >> 2;
      if (0 < iVar6) {
        _DstSize = iVar6 * 4;
        _memmove_s(pvVar11,_DstSize,(void *)((int)pvVar11 + 4),_DstSize);
      }
      local_30 = (void *)((int)local_30 + -4);
    }
  }
  FUN_00791410(local_38);
  FUN_00791410(local_28);
  uVar5 = 0;
  iVar6 = FUN_0078fa80();
  if (iVar6 != 0) {
    do {
      if ((local_24 == (undefined4 *)0x0) || ((uint)((int)local_20 - (int)local_24 >> 2) <= uVar5))
      {
        FUN_00984d5e();
      }
      pvVar11 = local_34;
      puVar1 = local_24 + uVar5;
      if (local_30 < local_34) {
        FUN_00984d5e();
      }
      FUN_007a3620(local_40,local_38,pvVar11,puVar1);
      uVar5 = uVar5 + 1;
      uVar9 = FUN_0078fa80();
    } while (uVar5 < uVar9);
  }
  uVar5 = *(uint *)(in_ECX + 0x70);
  uVar9 = 0;
  if (uVar5 != 0) {
    do {
      if (uVar9 == 0) {
        FUN_00794630(0);
      }
      if ((int)uVar5 < 2) {
        fVar2 = 1.0;
      }
      else {
        fVar2 = (float)(int)uVar9;
        if ((int)uVar9 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        fVar2 = (*(float *)(in_ECX + 0xdc) - *(float *)(in_ECX + 0xe0)) *
                (fVar2 / (float)(int)(uVar5 - 1)) + *(float *)(in_ECX + 0xe0);
      }
      iVar10 = 0;
      uVar8 = 0;
      local_50 = 0.0;
      iVar6 = FUN_0078fa80();
      pvVar11 = local_34;
      if (iVar6 != 0) {
        do {
          if (fVar2 * local_4c <= local_50) break;
          if ((pvVar11 == (void *)0x0) || ((uint)((int)local_30 - (int)pvVar11 >> 2) <= uVar8)) {
            FUN_00984d5e();
            pvVar11 = local_34;
          }
          iVar6 = uVar8 * 4;
          iVar10 = iVar10 + 1;
          uVar8 = uVar8 + 1;
          local_50 = *(float *)(*(int *)((int)pvVar11 + iVar6) + 0x28) + local_50;
          uVar7 = FUN_0078fa80();
        } while (uVar8 < uVar7);
      }
      FUN_00794a90(uVar9);
      if ((uVar9 == 0) && (iVar10 == 0)) {
        FUN_00796100(0,0,0);
      }
      else {
        uVar8 = 0;
        if (0 < iVar10) {
          do {
            if ((local_34 == (void *)0x0) || ((uint)((int)local_30 - (int)local_34 >> 2) <= uVar8))
            {
              FUN_00984d5e();
            }
            FUN_0078f420(uVar9,*(undefined4 *)(in_ECX + 0x5c));
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < iVar10);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar5);
  }
  if (local_24 != (undefined4 *)0x0) {
    FUN_00401f20(local_24);
  }
  local_24 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_c = local_c & 0xffffff00;
  FUN_0060d0a0();
  if (local_34 != (void *)0x0) {
    FUN_00401f20(local_34);
  }
  *unaff_FS_OFFSET = local_14;
  return;
}



void FUN_007a4190(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_60 [2];
  undefined1 local_58 [8];
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [40];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cca18;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffff90;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar1 = *(uint *)(in_ECX + 0x68);
  iVar6 = in_ECX + 0x60;
  if (uVar1 < *(uint *)(in_ECX + 100)) {
    FUN_00984d5e(uVar5);
  }
  uVar2 = *(uint *)(in_ECX + 100);
  if (*(uint *)(in_ECX + 0x68) < uVar2) {
    FUN_00984d5e(uVar5);
  }
  FUN_00439050(local_60,iVar6,uVar2,iVar6,uVar1);
  param_1 = FUN_0078eb40();
  if (0 < param_1) {
    do {
      local_60[0] = FUN_007a7900(uVar4);
      uVar1 = *(uint *)(in_ECX + 100);
      if ((uVar1 == 0) ||
         ((uint)((int)(*(int *)(in_ECX + 0x6c) - uVar1) >> 2) <=
          (uint)((int)(*(int *)(in_ECX + 0x68) - uVar1) >> 2))) {
        uVar5 = *(uint *)(in_ECX + 0x68);
        if (uVar5 < uVar1) {
          FUN_00984d5e();
        }
        FUN_007a3620(local_58,iVar6,uVar5,local_60);
      }
      else {
        puVar3 = *(undefined4 **)(in_ECX + 0x68);
        *puVar3 = local_60[0];
        *(undefined4 **)(in_ECX + 0x68) = puVar3 + 1;
      }
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  iVar6 = FUN_0078eb40();
  if (iVar6 != 0x3f7) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_00414500("malformed branch data",0x15);
    local_4 = 0;
    FUN_00789190(local_50,0);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00af39e4);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007a42d0(undefined4 param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  uint *puVar8;
  int *unaff_FS_OFFSET;
  int local_70;
  int local_6c;
  uint *local_68;
  undefined1 local_64 [8];
  undefined1 local_5c [4];
  undefined1 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [44];
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_009cca63;
  local_14 = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff80;
  *unaff_FS_OFFSET = (int)&local_14;
  local_70 = 0;
  uVar5 = FUN_0078eb40(uVar4);
  *(undefined4 *)(in_ECX + 0xc0) = uVar5;
  pvVar1 = *(void **)(in_ECX + 0xd4);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_00794eb0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  uVar2 = *(uint *)(in_ECX + 0xc0);
  uVar7 = -(uint)((int)((ulonglong)uVar2 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 0x10);
  local_68 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar7) | uVar7 + 4);
  puVar8 = (uint *)0x0;
  local_c = 0;
  if (local_68 != (uint *)0x0) {
    puVar8 = local_68 + 1;
    *local_68 = uVar2;
    _eh_vector_constructor_iterator_(puVar8,0x10,uVar2,FUN_006ef4a0,FUN_00794eb0);
  }
  local_c = 0xffffffff;
  *(uint **)(in_ECX + 0xd4) = puVar8;
  iVar6 = FUN_0078eb40(uVar4);
  if (iVar6 != 0x1b59) {
    local_6c = 0;
    do {
      if (*(int *)(in_ECX + 0xc0) <= local_70) {
        local_44 = 0xf;
        local_48 = 0;
        local_58 = 0;
        FUN_00414500("too many leaf lod levels",0x18);
        local_c = 1;
        FUN_00789190(local_5c,0);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_40,&DAT_00af39e4);
      }
      if (iVar6 != 0x1b5a) {
        local_44 = 0xf;
        local_48 = 0;
        local_58 = 0;
        FUN_00414500("malformed leaf lod data",0x17);
        local_c = 2;
        FUN_00789190(local_5c,0);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_40,&DAT_00af39e4);
      }
      iVar6 = FUN_0078eb40();
      while (iVar6 != 0x1b5b) {
        if (iVar6 != 0x1b5c) {
          local_44 = 0xf;
          local_48 = 0;
          local_58 = 0;
          FUN_00414500("malformed leaf lod data",0x17);
          local_c = 3;
          FUN_00789190(local_5c,0);
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(local_40,&DAT_00af39e4);
        }
        local_68 = (uint *)FUN_007a8250(param_1);
        iVar6 = *(int *)(in_ECX + 0xd4) + local_6c;
        uVar4 = *(uint *)(iVar6 + 4);
        if ((uVar4 == 0) ||
           ((uint)((int)(*(int *)(iVar6 + 0xc) - uVar4) >> 2) <=
            (uint)((int)(*(int *)(iVar6 + 8) - uVar4) >> 2))) {
          uVar2 = *(uint *)(iVar6 + 8);
          if (uVar2 < uVar4) {
            FUN_00984d5e();
          }
          FUN_007a3620(local_64,iVar6,uVar2,&local_68);
        }
        else {
          puVar3 = *(undefined4 **)(iVar6 + 8);
          *puVar3 = local_68;
          *(undefined4 **)(iVar6 + 8) = puVar3 + 1;
        }
        iVar6 = FUN_0078eb40();
      }
      local_70 = local_70 + 1;
      local_6c = local_6c + 0x10;
      iVar6 = FUN_0078eb40();
    } while (iVar6 != 0x1b59);
  }
  *(undefined1 *)(in_ECX + 0xd8) = 1;
  *unaff_FS_OFFSET = local_14;
  return;
}



void FUN_007a45a0(undefined4 param_1,undefined4 param_2)

{
  FUN_007a36b0(param_1,param_2);
  return;
}



void FUN_007a45c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_007a3b80(param_1,param_2,param_3,param_2,param_2,0);
  return;
}



void FUN_007a45f0(undefined4 param_1)

{
  float *pfVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  __time64_t _Var11;
  uint *local_48;
  undefined1 local_44 [8];
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
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cca96;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffa8;
  *unaff_FS_OFFSET = (int)&local_c;
  DAT_00b2b704 = *(char *)(in_ECX + 0xd8) == '\0';
  local_48 = (uint *)FUN_00401f00(0x40,uVar4);
  puVar8 = (uint *)0x0;
  local_4 = 0;
  if (local_48 == (uint *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_007915c0(0);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x58) = uVar5;
  if (*(char *)(in_ECX + 0xd8) == '\0') {
    uVar2 = *(uint *)(in_ECX + 0xc0);
    uVar7 = -(uint)((int)((ulonglong)uVar2 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 0x10);
    local_48 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar7) | uVar7 + 4,uVar4);
    local_4 = 1;
    if (local_48 != (uint *)0x0) {
      puVar8 = local_48 + 1;
      *local_48 = uVar2;
      _eh_vector_constructor_iterator_(puVar8,0x10,uVar2,FUN_006ef4a0,FUN_00794eb0);
    }
    *(uint **)(in_ECX + 0xd4) = puVar8;
  }
  local_4 = 0xffffffff;
  DAT_00b2b708 = *(undefined4 *)(in_ECX + 0xf0);
  FUN_00790b00();
  DAT_00b429b8 = in_ECX + 0x84;
  uVar4 = 0;
  while ((iVar9 = *(int *)(in_ECX + 100), iVar9 != 0 &&
         (uVar4 < (uint)(*(int *)(in_ECX + 0x68) - iVar9 >> 2)))) {
    if ((iVar9 == 0) || ((uint)(*(int *)(in_ECX + 0x68) - iVar9 >> 2) <= uVar4)) {
      FUN_00984d5e();
    }
    puVar3 = DAT_00b429e4;
    local_48 = *(uint **)(*(int *)(in_ECX + 100) + uVar4 * 4);
    if ((DAT_00b429e0 == (undefined4 *)0x0) ||
       ((uint)(DAT_00b429e8 - (int)DAT_00b429e0 >> 2) <=
        (uint)((int)DAT_00b429e4 - (int)DAT_00b429e0 >> 2))) {
      if (DAT_00b429e4 < DAT_00b429e0) {
        FUN_00984d5e();
      }
      FUN_007a3620(local_44,&DAT_00b429dc,puVar3,&local_48);
      uVar4 = uVar4 + 1;
    }
    else {
      *DAT_00b429e4 = local_48;
      DAT_00b429e4 = DAT_00b429e4 + 1;
      uVar4 = uVar4 + 1;
    }
  }
  FUN_0078ea30(*(undefined4 *)(in_ECX + 0x48));
  local_48 = (uint *)(*(float *)(in_ECX + 0x4c) - *(float *)(in_ECX + 0x50));
  fVar10 = (float10)FUN_0078ea00(local_48,*(float *)(in_ECX + 0x50) + *(float *)(in_ECX + 0x4c));
  local_48 = (uint *)(float)fVar10;
  FUN_009859d0(*(undefined4 *)(in_ECX + 0x54));
  if (0.0 < *(float *)(in_ECX + 0x4c)) {
    iVar9 = 0;
    for (uVar4 = 0;
        (*(int *)(in_ECX + 0x98) != 0 &&
        (uVar4 < (uint)((*(int *)(in_ECX + 0x9c) - *(int *)(in_ECX + 0x98)) / 0x54)));
        uVar4 = uVar4 + 1) {
      if ((*(int *)(in_ECX + 0x98) == 0) ||
         ((uint)((*(int *)(in_ECX + 0x9c) - *(int *)(in_ECX + 0x98)) / 0x54) <= uVar4)) {
        FUN_00984d5e();
      }
      pfVar1 = (float *)(*(int *)(in_ECX + 0x98) + 0x3c + iVar9);
      iVar6 = *(int *)(in_ECX + 0x98) + iVar9;
      iVar9 = iVar9 + 0x54;
      *(float *)(iVar6 + 0x48) = *pfVar1 * *(float *)(in_ECX + 0x4c);
      *(float *)(iVar6 + 0x4c) = *(float *)(iVar6 + 0x40) * *(float *)(in_ECX + 0x4c);
    }
  }
  FUN_0078ea30(*(undefined4 *)(in_ECX + 0x48));
  FUN_00798090(*(undefined2 *)(in_ECX + 0x70));
  FUN_00794a90(0);
  DAT_00b429c0 = *(undefined4 *)(in_ECX + 0x48);
  local_3c = 0;
  local_38 = 0;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_20 = 0x3f800000;
  local_10 = 0x3f800000;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_007925b0(*(undefined4 *)(in_ECX + 0x48),local_48,0,in_ECX + 4,0,0,&local_30,&local_3c,
               *(undefined4 *)(in_ECX + 0x5c),in_ECX + 0x74,0x3f800000,
               *(undefined4 *)(in_ECX + 0x48),0xbf800000);
  FUN_007a3c80();
  if (*(char *)(in_ECX + 0xd8) == '\0') {
    FUN_007a3940(param_1);
  }
  _Var11 = __time64((__time64_t *)0x0);
  FUN_009859d0((int)_Var11);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007a4950(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar3;
  undefined1 auStack_bc [12];
  undefined4 uStack_b0;
  undefined **ppuStack_ac;
  char *pcStack_a8;
  uint *puStack_a4;
  uint uStack_a0;
  undefined1 local_88 [4];
  uint local_84;
  undefined4 local_74;
  uint local_70;
  undefined1 local_6c [4];
  uint local_68;
  undefined4 local_58;
  uint local_54;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [40];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ccadb;
  local_c = *unaff_FS_OFFSET;
  uStack_a0 = DAT_00b30aac ^ (uint)&stack0xffffff64;
  *unaff_FS_OFFSET = (int)&local_c;
  puStack_a4 = (uint *)0x7a498d;
  iVar2 = FUN_0078eb40();
  do {
    if (iVar2 < 0x7d1) {
      if (iVar2 == 2000) {
        FUN_0078ec20(auStack_bc);
        FUN_00789120();
        puStack_a4 = (uint *)0xffffffff;
        pcStack_a8 = (char *)0x0;
        ppuStack_ac = (undefined **)local_88;
        local_4 = 0;
        uStack_b0 = 0x7a49e8;
        FUN_00414420();
        local_4 = 0xffffffff;
        if (0xf < local_70) {
          puStack_a4 = (uint *)local_84;
          pcStack_a8 = (char *)0x7a4a04;
          FUN_00401f20();
        }
        puStack_a4 = (uint *)local_6c;
        local_70 = 0xf;
        local_74 = 0;
        local_84 = local_84 & 0xffffff00;
        pcStack_a8 = (char *)0x7a4a23;
        ppuStack_ac = (undefined **)FUN_00789430();
        puStack_a4 = (uint *)0xffffffff;
        pcStack_a8 = (char *)0x0;
        local_4 = 1;
        uStack_b0 = 0x7a4a39;
        FUN_00414420();
        local_4 = 0xffffffff;
        if (0xf < local_54) {
          puStack_a4 = (uint *)local_68;
          pcStack_a8 = (char *)0x7a4a55;
          FUN_00401f20();
        }
        local_54 = 0xf;
        local_58 = 0;
        local_68 = local_68 & 0xffffff00;
      }
      else {
        if (iVar2 != 0x3f6) goto switchD_007a4a78_default;
        puStack_a4 = param_1;
        pcStack_a8 = (char *)0x7a49b0;
        FUN_007a4190();
      }
    }
    else {
      switch(iVar2) {
      case 0x7d1:
        puStack_a4 = (uint *)0x7a4aa3;
        fVar3 = (float10)FUN_0078eb10();
        *(float *)(in_ECX + 0x40) = (float)fVar3;
        break;
      case 0x7d2:
        uVar1 = *param_1;
        *param_1 = uVar1 + 1;
        if ((param_1[2] == 0) || (param_1[3] - param_1[2] <= uVar1)) {
          puStack_a4 = (uint *)0x7a4acd;
          FUN_00984d5e();
        }
        break;
      case 0x7d3:
        puStack_a4 = (uint *)0x7a4a97;
        fVar3 = (float10)FUN_0078eb10();
        *(float *)(in_ECX + 0x44) = (float)fVar3;
        break;
      case 0x7d4:
        puStack_a4 = (uint *)0x7a4aaf;
        FUN_0078eb40();
        break;
      case 0x7d5:
        puStack_a4 = (uint *)0x7a4a86;
        puStack_a4 = (uint *)FUN_0078eb40();
        pcStack_a8 = (char *)0x7a4a8e;
        FUN_007a24f0();
        break;
      case 0x7d6:
        puStack_a4 = (uint *)0x7a4ad6;
        fVar3 = (float10)FUN_0078eb10();
        *(float *)(in_ECX + 0x4c) = (float)fVar3;
        break;
      case 0x7d7:
        puStack_a4 = (uint *)0x7a4ae2;
        fVar3 = (float10)FUN_0078eb10();
        *(float *)(in_ECX + 0x50) = (float)fVar3;
        break;
      default:
switchD_007a4a78_default:
        puStack_a4 = (uint *)0x22;
        pcStack_a8 = "malformed general tree information";
        local_38 = 0xf;
        local_3c = 0;
        local_4c = 0;
        ppuStack_ac = (undefined **)0x7a4b33;
        FUN_00414500();
        puStack_a4 = (uint *)0x0;
        pcStack_a8 = local_50;
        local_4 = 2;
        ppuStack_ac = (undefined **)0x7a4b4d;
        FUN_00789190();
        puStack_a4 = (uint *)&DAT_00af39e4;
        pcStack_a8 = local_34;
                    /* WARNING: Subroutine does not return */
        ppuStack_ac = &switchD_007a4a78::switchdataD_007a4b5c;
        __CxxThrowException_8();
      }
    }
    puStack_a4 = (uint *)0x7a4aec;
    iVar2 = FUN_0078eb40();
    if (iVar2 == 0x3eb) {
      *unaff_FS_OFFSET = local_c;
      return;
    }
  } while( true );
}



void FUN_007a4b80(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar1 = param_2;
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00984d5e();
  }
  if (param_3 != param_5) {
    param_2 = param_2 & 0xffffff00;
    uVar2 = FUN_007a3b80(param_5,*(undefined4 *)(in_ECX + 8),param_3,param_1,param_1,param_2);
    FUN_007a36b0(uVar2,*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = uVar2;
  }
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



void FUN_007a4bf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_007a3bd0(param_1,param_2,param_3);
  return;
}



void FUN_007a4c20(void)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  undefined1 local_8 [8];
  
  uVar1 = *(uint *)(in_ECX + 8);
  if (uVar1 < *(uint *)(in_ECX + 4)) {
    FUN_00984d5e();
  }
  uVar2 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar2) {
    FUN_00984d5e();
  }
  FUN_007a4b80(local_8,in_ECX,uVar2,in_ECX,uVar1);
  return;
}



void FUN_007a4c60(uint param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint in_ECX;
  int iVar7;
  uint uVar8;
  
  uVar6 = param_1;
  if (in_ECX == param_1) {
    return;
  }
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)(param_1 + 8);
    iVar7 = *piVar1 - *(int *)(param_1 + 4);
    iVar2 = iVar7 >> 0x1f;
    iVar7 = iVar7 / 0x54 + iVar2;
    uVar8 = iVar7 - iVar2;
    if (iVar7 != iVar2) {
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(int *)(in_ECX + 8) - iVar2) / 0x54;
      }
      if (uVar8 <= uVar4) {
        param_1 = param_1 & 0xffffff00;
        uVar5 = FUN_007a3b80(*(undefined4 *)(uVar6 + 4),*piVar1,iVar2,param_1,param_1,param_1);
        FUN_007a36b0(uVar5,*(undefined4 *)(in_ECX + 8));
        if (*(int *)(uVar6 + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             ((*(int *)(uVar6 + 8) - *(int *)(uVar6 + 4)) / 0x54) * 0x54 + *(int *)(in_ECX + 4);
        return;
      }
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_ECX + 0xc) - iVar2) / 0x54;
      }
      if (uVar6 < uVar8) {
        if (iVar2 != 0) {
          FUN_007a45a0(iVar2,*(undefined4 *)(in_ECX + 8));
          FUN_00401f20(*(undefined4 *)(in_ECX + 4));
        }
        uVar5 = FUN_007876a0();
        cVar3 = FUN_007a3230(uVar5);
        if (cVar3 == '\0') {
          return;
        }
        uVar5 = FUN_007a4bf0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                             *(undefined4 *)(in_ECX + 4));
        *(undefined4 *)(in_ECX + 8) = uVar5;
        return;
      }
      iVar7 = FUN_007876a0();
      iVar7 = iVar7 * 0x54 + *(int *)(param_1 + 4);
      FUN_007a45c0(*(int *)(param_1 + 4),iVar7,iVar2);
      uVar5 = FUN_007a4bf0(iVar7,*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_ECX + 8));
      *(undefined4 *)(in_ECX + 8) = uVar5;
      return;
    }
  }
  FUN_007a4c20();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_007a4df0(uint *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 ****ppppuVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_b4 [4];
  undefined4 ***local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  undefined1 local_98 [40];
  undefined1 local_70 [28];
  undefined1 local_54 [40];
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ccb31;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)local_b4;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff3c;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_0078eb40(uVar2);
  if (iVar3 != 1000) {
    local_9c = 0xf;
    local_a0 = 0;
    local_b0[0] = (undefined4 ***)((uint)local_b0[0] & 0xffffff00);
    FUN_00414500("missing begin_file token",0x18);
    local_4 = 0;
    FUN_00789190(local_b4,0);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_98,&DAT_00af39e4);
  }
  FUN_0078ec20(local_2c);
  local_4 = 1;
  local_9c = 0xf;
  local_a0 = 0;
  local_b0[0] = (undefined4 ***)((uint)local_b0[0] & 0xffffff00);
  pcVar4 = PTR_DAT_00b2ba10;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00414500(PTR_DAT_00b2ba10,(int)pcVar4 - (int)(PTR_DAT_00b2ba10 + 1));
  local_4._0_1_ = 2;
  ppppuVar5 = (undefined4 ****)local_b0[0];
  if (local_9c < 0x10) {
    ppppuVar5 = local_b0;
  }
  iVar3 = FUN_006f5de0(0,local_18,ppppuVar5,local_a0);
  local_4._0_1_ = 1;
  if (0xf < local_9c) {
    FUN_00401f20(local_b0[0]);
  }
  if (iVar3 != 0) {
    local_9c = 0xf;
    local_a0 = 0;
    local_b0[0] = (undefined4 ***)((uint)local_b0[0] & 0xffffff00);
    FUN_00414500("not a valid SpeedTree SPT file",0x1e);
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_00789190(local_b4,0);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_98,&DAT_00af39e4);
  }
  iVar3 = FUN_0078eb40();
  do {
    if (iVar3 == 0x3ea) {
      FUN_007a4950(param_1);
    }
    else if (iVar3 == 0x3ec) {
      FUN_007a6020(param_1);
    }
    else {
      if (iVar3 != 0x3f3) {
        FUN_00414750("malformed SpeedTree SPT file");
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_00789190(local_70,0);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_54,&DAT_00af39e4);
      }
      FUN_007a84a0(param_1);
    }
    iVar3 = FUN_0078eb40();
  } while (iVar3 != 0x3e9);
  if ((param_1[2] != 0) && (*param_1 < param_1[3] - param_1[2])) {
    iVar3 = FUN_0078ebf0();
    if (iVar3 == 7000) {
      FUN_0078eb40();
      FUN_007a42d0(param_1);
    }
  }
  FUN_007a34f0(in_ECX + 0x24);
  FUN_007a4c60(in_ECX + 0x94);
  if (-1.0 < *(float *)(in_ECX + 0x18)) {
    *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(in_ECX + 0x18);
    *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(in_ECX + 0x1c);
  }
  if (0xf < local_14) {
    FUN_00401f20(local_28);
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_007a50b0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (((*param_3 == *param_2) && (param_3[1] == param_2[1])) && (param_3[2] == param_2[2])) {
    fVar5 = param_2[1];
    *param_1 = *param_2;
    fVar6 = param_2[2];
    param_1[1] = fVar5;
    param_1[2] = fVar6;
    return;
  }
  fVar5 = *param_3;
  fVar6 = *param_2;
  fVar1 = param_3[1];
  fVar2 = param_2[1];
  fVar3 = param_3[2];
  fVar4 = param_2[2];
  FUN_0078ed70();
  fVar7 = (fVar5 - fVar6) * (*param_4 - *param_2) + (fVar1 - fVar2) * (param_4[1] - param_2[1]) +
          (fVar3 - fVar4) * (param_4[2] - param_2[2]);
  *param_1 = *param_2 + fVar7 * (fVar5 - fVar6);
  param_1[1] = param_2[1] + fVar7 * (fVar1 - fVar2);
  param_1[2] = fVar7 * (fVar3 - fVar4) + param_2[2];
  return;
}



void FUN_007a51c0(int param_1,float param_2,float param_3,float param_4,float param_5,float *param_6
                 )

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  undefined4 *puVar4;
  float *in_ECX;
  float local_7c;
  float local_78;
  float local_74;
  double local_70;
  float local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
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
  
  local_5c = param_2 - param_5 * *in_ECX;
  local_58 = param_3 - in_ECX[1] * param_5;
  local_54 = param_4 - in_ECX[2] * param_5;
  local_38 = param_5 * *in_ECX + param_2;
  local_34 = in_ECX[1] * param_5 + param_3;
  local_30 = in_ECX[2] * param_5 + param_4;
  local_68 = in_ECX[5] * param_5;
  local_50 = param_2 - in_ECX[3] * param_5;
  local_4c = param_3 - in_ECX[4] * param_5;
  local_48 = param_4 - local_68;
  local_7c = in_ECX[3] * param_5;
  local_78 = in_ECX[4] * param_5;
  local_70 = (double)param_5;
  local_74 = param_5 * in_ECX[5];
  local_20 = local_7c + param_2;
  local_1c = local_78 + param_3;
  *(undefined2 *)(param_1 + 0x22) = 0;
  uVar1 = 0;
  local_18 = param_4 + local_74;
  sVar2 = FUN_007877b0();
  if (sVar2 != 0) {
    local_70 = local_70 + local_70;
    do {
      puVar4 = (undefined4 *)FUN_00794730(uVar1);
      local_44 = *puVar4;
      local_40 = puVar4[1];
      local_3c = puVar4[2];
      FUN_007a50b0(&local_2c,&local_5c,&local_38,&local_44);
      local_7c = (float)(((int)((local_24 - local_54) * (local_24 - local_54) +
                               (local_2c - local_5c) * (local_2c - local_5c) +
                               (local_28 - local_58) * (local_28 - local_58)) >> 1) + 0x1fc00000) /
                 (float)local_70;
      if (param_6 != (float *)0x0) {
        local_7c = param_6[2] + local_7c * (*param_6 - param_6[2]);
      }
      FUN_007a50b0(&local_14,&local_50,&local_20,&local_44);
      local_78 = (float)(((int)((local_c - local_48) * (local_c - local_48) +
                               (local_14 - local_50) * (local_14 - local_50) +
                               (local_10 - local_4c) * (local_10 - local_4c)) >> 1) + 0x1fc00000) /
                 (float)local_70;
      if (param_6 != (float *)0x0) {
        local_78 = param_6[5] + local_78 * (param_6[1] - param_6[5]);
      }
      FUN_007964f0(&local_7c);
      uVar1 = uVar1 + 1;
      uVar3 = FUN_007877b0();
    } while (uVar1 < uVar3);
  }
  return;
}



void FUN_007a5470(void)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  *in_ECX = 0;
  in_ECX[5] = 0;
  in_ECX[4] = 0;
  in_ECX[3] = 0;
  in_ECX[8] = 0;
  in_ECX[7] = 0;
  in_ECX[6] = 0;
  in_ECX[0xf] = 0xf;
  in_ECX[0xe] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_007a54a0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int unaff_ESI;
  undefined4 local_408;
  char local_404 [1024];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_408;
  local_408 = 0;
  _vsprintf(local_404,param_1,&stack0x00000008);
  pcVar2 = local_404;
  *(undefined4 *)(unaff_ESI + 0x18) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00414500(local_404,(int)pcVar2 - (int)(local_404 + 1));
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_007a5530(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_e4 [12];
  undefined4 uStack_d8;
  undefined *puStack_d4;
  char *pcStack_d0;
  undefined1 *puStack_cc;
  uint uStack_c8;
  undefined1 *local_b4;
  undefined1 local_b0 [4];
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined1 local_70 [72];
  uint local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ccb7b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_b4;
  uStack_c8 = DAT_00b30aac ^ (uint)&stack0xffffff3c;
  *unaff_FS_OFFSET = (int)&local_c;
  puStack_cc = (undefined1 *)0x7a557b;
  iVar1 = FUN_0078eb40();
  do {
    switch(iVar1) {
    case 0x4652:
      puStack_cc = local_7c;
      pcStack_d0 = (char *)0x7a55b2;
      puVar2 = (undefined4 *)FUN_0078eba0();
      *in_ECX = *puVar2;
      in_ECX[1] = puVar2[1];
      in_ECX[2] = puVar2[2];
      break;
    case 0x4653:
      puStack_cc = local_88;
      pcStack_d0 = (char *)0x7a55d3;
      puVar2 = (undefined4 *)FUN_0078eba0();
      in_ECX[3] = *puVar2;
      in_ECX[4] = puVar2[1];
      in_ECX[5] = puVar2[2];
      break;
    case 0x4654:
      puStack_cc = local_94;
      pcStack_d0 = (char *)0x7a55f5;
      puVar2 = (undefined4 *)FUN_0078eba0();
      in_ECX[6] = *puVar2;
      in_ECX[7] = puVar2[1];
      in_ECX[8] = puVar2[2];
      break;
    case 0x4655:
      local_b4 = auStack_e4;
      FUN_0078ec20(auStack_e4);
      FUN_00789120();
      puStack_cc = local_b0;
      local_4 = 0;
      pcStack_d0 = (char *)0x7a5640;
      puStack_d4 = (undefined *)FUN_00789430();
      puStack_cc = (undefined1 *)0xffffffff;
      pcStack_d0 = (char *)0x0;
      local_4 = CONCAT31(local_4._1_3_,1);
      uStack_d8 = 0x7a5654;
      FUN_00414420();
      if (0xf < local_98) {
        puStack_cc = (undefined1 *)local_ac;
        pcStack_d0 = (char *)0x7a5664;
        FUN_00401f20();
      }
      local_98 = 0xf;
      local_9c = 0;
      local_ac = local_ac & 0xffffff00;
      local_4 = 0xffffffff;
      if (0xf < local_14) {
        puStack_cc = (undefined1 *)local_28;
        pcStack_d0 = (char *)0x7a5698;
        FUN_00401f20();
      }
      local_14 = 0xf;
      local_18 = 0;
      local_28 = local_28 & 0xffffff00;
      break;
    default:
      pcStack_d0 = "malformed frond info (token %d)";
      puStack_d4 = (undefined *)0x7a5702;
      puStack_cc = (undefined1 *)iVar1;
      pcStack_d0 = (char *)FUN_007a54a0();
      puStack_cc = (undefined1 *)0x0;
      local_4 = 2;
      puStack_d4 = (undefined *)0x7a571b;
      FUN_00789190();
      puStack_cc = &DAT_00af39e4;
      pcStack_d0 = local_70;
                    /* WARNING: Subroutine does not return */
      puStack_d4 = &UNK_007a572a;
      __CxxThrowException_8();
    }
    puStack_cc = (undefined1 *)0x7a56bb;
    iVar1 = FUN_0078eb40();
  } while (iVar1 != 0x4651);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007a5740(int param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  float10 fVar8;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ccbb8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  lVar1 = (ulonglong)*(uint *)(in_ECX + 0x38) * 4;
  *(int *)(in_ECX + 0x40) = param_1;
  uVar3 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  *(undefined4 *)(in_ECX + 0x4c) = uVar3;
  FUN_0078eaf0();
  iVar6 = 0;
  local_4 = 0;
  if (0 < *(int *)(in_ECX + 0x38)) {
    do {
      fVar8 = (float10)FUN_0078ea00(0,0x461c4000);
      *(float *)(*(int *)(in_ECX + 0x4c) + iVar6 * 4) = (float)fVar8;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_ECX + 0x38));
  }
  lVar1 = (ulonglong)(uint)(param_1 << 4) * 4;
  puVar4 = (undefined4 *)
           FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  iVar6 = param_1 * 2;
  *(undefined4 **)(in_ECX + 0x48) = puVar4;
  if (0 < iVar6) {
    do {
      *puVar4 = 0;
      puVar4[1] = 0x3f800000;
      puVar4[2] = 0x3f800000;
      puVar4[3] = 0x3f800000;
      puVar4[4] = 0x3f800000;
      puVar4[5] = 0;
      iVar6 = iVar6 + -1;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4 = puVar4 + 8;
    } while (iVar6 != 0);
  }
  lVar1 = (ulonglong)*(uint *)(in_ECX + 0x3c) * 4;
  uVar3 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  iVar6 = 0;
  uVar2 = *(int *)(in_ECX + 0x38) * param_1 * 0x20;
  *(undefined4 *)(in_ECX + 0x44) = uVar3;
  if (0 < *(int *)(in_ECX + 0x3c)) {
    iVar7 = 0;
    do {
      uVar3 = FUN_00401f00(-(uint)((int)((ulonglong)uVar2 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar2 * 4));
      *(undefined4 *)(iVar7 + *(int *)(in_ECX + 0x44)) = uVar3;
      iVar5 = 0;
      if (3 < (int)uVar2) {
        do {
          *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x44) + iVar7) + iVar5 * 4) = 0;
          *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x44) + iVar7) + 4 + iVar5 * 4) = 0;
          *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x44) + iVar7) + 8 + iVar5 * 4) = 0;
          *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x44) + iVar7) + 0xc + iVar5 * 4) = 0;
          iVar5 = iVar5 + 4;
        } while (iVar5 < (int)(uVar2 - 3));
      }
      for (; iVar5 < (int)uVar2; iVar5 = iVar5 + 1) {
        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x44) + iVar7) + iVar5 * 4) = 0;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar6 < *(int *)(in_ECX + 0x3c));
  }
  local_4 = 0xffffffff;
  FUN_0060d0a0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007a5910(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0x3f4ccccd;
  *(undefined4 *)(in_ECX + 8) = 0x3f4ccccd;
  *(undefined4 *)(in_ECX + 0xc) = 0x3f4ccccd;
  *(undefined4 *)(in_ECX + 0x10) = 0x3e4ccccd;
  *(undefined4 *)(in_ECX + 0x2c) = 0xf;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  in_ECX[0x18] = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0x3f000000;
  *(undefined4 *)(in_ECX + 0x34) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0x3df5c28f;
  *(undefined4 *)(in_ECX + 0x40) = 0x3df5c28f;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0x41200000;
  *(undefined4 *)(in_ECX + 0x4c) = 0x41200000;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  return;
}



void FUN_007a5970(int param_1,int param_2,undefined4 param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x54) {
    FUN_007a3470(param_3);
  }
  return;
}



void FUN_007a59a0(int param_1,int param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_009ccbf1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_007a2850(param_3);
    }
    param_1 = param_1 + 0x54;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



int FUN_007a5a50(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  while (param_1 != param_2) {
    param_2 = param_2 + -0x54;
    FUN_007a3470(param_2);
  }
  return param_3 + (iVar1 / 0x54) * -0x54;
}



int FUN_007a5aa0(int param_1,int param_2,undefined4 param_3)

{
  FUN_007a59a0(param_1,param_2,param_3);
  return param_2 * 0x54 + param_1;
}



void FUN_007a5ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_007a5a50(param_1,param_2,param_3,param_3,param_3,0);
  return;
}



void FUN_007a5b10(void)

{
  undefined1 *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0x3f800000;
  *in_ECX = 1;
  *(undefined4 *)(in_ECX + 0xc) = 2;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0x3f000000;
  *(undefined4 *)(in_ECX + 0x2c) = 1;
  *(undefined4 *)(in_ECX + 0x24) = 0x3f400000;
  *(undefined4 *)(in_ECX + 0x38) = 3;
  *(undefined4 *)(in_ECX + 0x3c) = 4;
  *(undefined4 *)(in_ECX + 0x28) = 0x3f4ccccd;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  return;
}



void FUN_007a5b70(void)

{
  int in_ECX;
  int iVar1;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x4c));
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  if (*(int *)(in_ECX + 0x44) != 0) {
    iVar1 = 0;
    if (0 < *(int *)(in_ECX + 0x3c)) {
      do {
        FUN_00401f20(*(undefined4 *)(*(int *)(in_ECX + 0x44) + iVar1 * 4));
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(in_ECX + 0x3c));
    }
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x44));
    *(undefined4 *)(in_ECX + 0x44) = 0;
  }
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x48));
  *(undefined4 *)(in_ECX + 0x48) = 0;
  if (*(int *)(in_ECX + 0x14) != 0) {
    FUN_007a36b0(*(int *)(in_ECX + 0x14),*(undefined4 *)(in_ECX + 0x18),in_ECX + 0x10,in_ECX);
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x14));
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_007a5c00(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int extraout_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  uint uStack_8c;
  undefined1 local_6c [24];
  undefined4 local_54;
  uint local_40;
  uint local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009ccc18;
  local_10 = *unaff_FS_OFFSET;
  uStack_8c = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_8c;
  *unaff_FS_OFFSET = (int)&local_10;
  local_18 = uStack_8c;
  FUN_007a2850(param_4);
  iVar2 = *(int *)(in_ECX + 4);
  uVar5 = 0;
  local_8 = 0;
  if (iVar2 != 0) {
    uVar5 = (*(int *)(in_ECX + 0xc) - iVar2) / 0x54;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x54;
    }
    if (0x30c30c3U - iVar1 < param_3) {
      FUN_00790b90();
      iVar2 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x54;
    }
    if (uVar5 < iVar1 + param_3) {
      if (0x30c30c3 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x54;
      }
      if (uVar5 < iVar2 + param_3) {
        iVar2 = FUN_007876a0();
        uVar5 = iVar2 + param_3;
      }
      iVar1 = FUN_007a2560(uVar5,0);
      local_8 = CONCAT31(local_8._1_3_,1);
      uVar3 = FUN_007a3bd0(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar3 = FUN_007a5aa0(uVar3,param_3,local_6c);
      FUN_007a3bd0(param_2,*(undefined4 *)(in_ECX + 8),uVar3);
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar2) / 0x54;
      }
      if (iVar2 != 0) {
        FUN_007a36b0(iVar2,*(undefined4 *)(in_ECX + 8));
        FUN_00401f20(*(undefined4 *)(in_ECX + 4));
      }
      *(uint *)(in_ECX + 0xc) = uVar5 * 0x54 + iVar1;
      *(uint *)(in_ECX + 8) = (param_3 + iVar4) * 0x54 + iVar1;
      *(int *)(in_ECX + 4) = iVar1;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8);
      if ((uint)((iVar2 - param_2) / 0x54) < param_3) {
        FUN_007a4bf0(param_2,iVar2,param_3 * 0x54 + param_2);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_007a5aa0(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2) / 0x54,local_6c
                    );
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x54;
        local_8 = 0;
        FUN_007a5970(param_2,*(int *)(in_ECX + 8) + param_3 * -0x54,local_6c);
      }
      else {
        iVar1 = iVar2 + param_3 * -0x54;
        uVar3 = FUN_007a4bf0(iVar1,iVar2,iVar2);
        *(undefined4 *)(in_ECX + 8) = uVar3;
        FUN_007a5ae0(param_2,iVar1,iVar2);
        FUN_007a5970(param_2,param_3 * 0x54 + param_2,local_6c);
      }
    }
  }
  if (0xf < local_40) {
    FUN_00401f20(local_54);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_007a5f00(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000020;
  uint in_stack_00000034;
  undefined1 local_14 [4];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ccc48;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar1 = *(uint *)(in_ECX + 4);
  iVar5 = 0;
  local_4 = 0;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (int)(*(int *)(in_ECX + 8) - uVar1) / 0x54;
  }
  if (uVar3 < param_1) {
    if (uVar1 != 0) {
      iVar5 = (int)(*(int *)(in_ECX + 8) - uVar1) / 0x54;
    }
    uVar3 = *(uint *)(in_ECX + 8);
    if (uVar3 < uVar1) {
      FUN_00984d5e(uVar2);
    }
    FUN_007a5c00(in_ECX,uVar3,param_1 - iVar5,&stack0x00000008);
  }
  else if (uVar1 != 0) {
    uVar3 = *(uint *)(in_ECX + 8);
    if (param_1 < (uint)((int)(uVar3 - uVar1) / 0x54)) {
      if (uVar3 < uVar1) {
        FUN_00984d5e(uVar2);
      }
      uVar1 = *(uint *)(in_ECX + 4);
      if (*(uint *)(in_ECX + 8) < uVar1) {
        FUN_00984d5e(uVar2);
      }
      uVar4 = param_1 * 0x54 + uVar1;
      local_10 = uVar1;
      if ((*(uint *)(in_ECX + 8) < uVar4) || (uVar4 < *(uint *)(in_ECX + 4))) {
        FUN_00984d5e(uVar2);
      }
      FUN_007a4b80(local_14,in_ECX,uVar4,in_ECX,uVar3);
    }
  }
  if (0xf < in_stack_00000034) {
    FUN_00401f20(in_stack_00000020);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_007a6020(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  float10 fVar6;
  undefined1 auStack_1f0 [60];
  undefined4 uStack_1b4;
  undefined1 *puStack_1b0;
  int iStack_1ac;
  undefined1 *puStack_1a8;
  char *pcStack_1a4;
  undefined1 *puStack_1a0;
  uint uStack_19c;
  undefined1 *local_188;
  int local_184;
  uint local_180;
  int local_17c;
  undefined1 local_178 [4];
  uint local_174;
  undefined4 local_164;
  uint local_160;
  undefined1 local_15c [4];
  uint local_158;
  undefined4 local_148;
  uint local_144;
  undefined1 local_140 [4];
  uint local_13c;
  undefined4 local_12c;
  uint local_128;
  undefined1 local_124 [4];
  undefined1 local_120;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [4];
  undefined1 local_104;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec [8];
  undefined1 local_e4 [12];
  undefined1 local_d8 [12];
  undefined1 local_cc [12];
  undefined1 local_c0 [12];
  undefined1 local_b4 [40];
  undefined1 local_8c [40];
  undefined1 local_64 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cccaf;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_188;
  uStack_19c = DAT_00b30aac ^ (uint)&stack0xfffffe68;
  *unaff_FS_OFFSET = (int)&local_c;
  puStack_1a0 = (undefined1 *)0x7a606f;
  local_184 = in_ECX;
  iVar2 = FUN_0078eb40();
  do {
    if (iVar2 < 0xbb9) {
      if (iVar2 == 3000) {
        puStack_1a0 = (undefined1 *)0x7a6483;
        fVar6 = (float10)FUN_0078eb10();
        *(float *)(in_ECX + 0x24) = (float)fVar6;
      }
      else {
        if (iVar2 != 0x3f1) goto switchD_007a6499_default;
        puStack_1a0 = (undefined1 *)0x7a6094;
        FUN_0078eb40();
        puStack_1a0 = (undefined1 *)0x7a609b;
        local_17c = FUN_0078eb40();
        uVar5 = *(uint *)(in_ECX + 0x18);
        if (uVar5 < *(uint *)(in_ECX + 0x14)) {
          puStack_1a0 = (undefined1 *)0x7a60af;
          FUN_00984d5e();
        }
        uVar1 = *(uint *)(in_ECX + 0x14);
        if (*(uint *)(local_184 + 0x18) < uVar1) {
          puStack_1a0 = (undefined1 *)0x7a60c3;
          FUN_00984d5e();
        }
        iStack_1ac = local_184 + 0x10;
        puStack_1b0 = local_ec;
        uStack_1b4 = 0x7a60db;
        puStack_1a8 = (undefined1 *)uVar1;
        pcStack_1a4 = (char *)iStack_1ac;
        puStack_1a0 = (undefined1 *)uVar5;
        FUN_007a4b80();
        local_188 = auStack_1f0;
        FUN_007a5910();
        iVar2 = local_17c;
        FUN_007a5f00(local_17c);
        local_180 = 0;
        if (0 < iVar2) {
          local_188 = (undefined1 *)0x0;
          do {
            local_60 = 0x3f4ccccd;
            local_64[0] = 0;
            local_5c = 0x3f4ccccd;
            local_38 = 0xf;
            local_58 = 0x3f4ccccd;
            local_3c = 0;
            local_4c = local_4c & 0xffffff00;
            local_54 = 0.2;
            local_34 = 0x3f000000;
            local_30 = 0x3f800000;
            local_2c = 0;
            local_28 = 0x3df5c28f;
            local_24 = 0x3df5c28f;
            local_20 = 0;
            local_1c = 0x41200000;
            local_18 = 0x41200000;
            local_14 = 0;
            local_4 = 0;
            puStack_1a0 = (undefined1 *)0x7a61bc;
            FUN_0078eb40();
            puStack_1a0 = (undefined1 *)0x7a61c3;
            iVar2 = FUN_0078eb40();
            do {
              switch(iVar2) {
              case 4000:
                uVar5 = *param_1;
                *param_1 = uVar5 + 1;
                if ((param_1[2] == 0) || (param_1[3] - param_1[2] <= uVar5)) {
                  puStack_1a0 = (undefined1 *)0x7a6201;
                  FUN_00984d5e();
                }
                local_64[0] = *(char *)(uVar5 + param_1[2]) != '\0';
                break;
              case 0xfa1:
                puStack_1a0 = local_c0;
                pcStack_1a4 = (char *)0x7a6225;
                puVar3 = (undefined4 *)FUN_0078eba0();
                local_60 = *puVar3;
                local_5c = puVar3[1];
                local_58 = puVar3[2];
                break;
              case 0xfa2:
                puStack_1a0 = (undefined1 *)0x7a624e;
                fVar6 = (float10)FUN_0078eb10();
                local_54 = (float)fVar6;
                break;
              case 0xfa3:
                puStack_1a0 = local_15c;
                pcStack_1a4 = (char *)0x7a6266;
                FUN_0078ec20();
                puStack_1a0 = (undefined1 *)0xffffffff;
                pcStack_1a4 = (char *)0x0;
                puStack_1a8 = local_15c;
                local_4 = CONCAT31(local_4._1_3_,1);
                local_160 = 0xf;
                local_164 = 0;
                local_174 = local_174 & 0xffffff00;
                iStack_1ac = 0x7a628b;
                FUN_00414420();
                if (0xf < local_144) {
                  puStack_1a0 = (undefined1 *)local_158;
                  pcStack_1a4 = (char *)0x7a62a0;
                  FUN_00401f20();
                }
                local_144 = 0xf;
                local_148 = 0;
                local_158 = local_158 & 0xffffff00;
                puStack_1a0 = (undefined1 *)0xffffffff;
                pcStack_1a4 = (char *)0x0;
                puStack_1a8 = local_178;
                local_4._0_1_ = 2;
                iStack_1ac = 0x7a62cb;
                FUN_00414420();
                local_4._0_1_ = 0;
                if (0xf < local_160) {
                  puStack_1a0 = (undefined1 *)local_174;
                  pcStack_1a4 = (char *)0x7a62e2;
                  FUN_00401f20();
                }
                puStack_1a0 = local_140;
                local_160 = 0xf;
                local_164 = 0;
                local_174 = local_174 & 0xffffff00;
                pcStack_1a4 = (char *)0x7a6302;
                puStack_1a8 = (undefined1 *)FUN_00789430();
                puStack_1a0 = (undefined1 *)0xffffffff;
                pcStack_1a4 = (char *)0x0;
                local_4._0_1_ = 3;
                iStack_1ac = 0x7a631a;
                FUN_00414420();
                local_4 = (uint)local_4._1_3_ << 8;
                if (0xf < local_128) {
                  puStack_1a0 = (undefined1 *)local_13c;
                  pcStack_1a4 = (char *)0x7a6331;
                  FUN_00401f20();
                }
                local_128 = 0xf;
                local_12c = 0;
                local_13c = local_13c & 0xffffff00;
                break;
              case 0xfa4:
                puStack_1a0 = local_cc;
                pcStack_1a4 = (char *)0x7a6354;
                puVar3 = (undefined4 *)FUN_0078eba0();
                local_34 = *puVar3;
                local_30 = puVar3[1];
                local_2c = puVar3[2];
                break;
              case 0xfa5:
                puStack_1a0 = local_d8;
                pcStack_1a4 = (char *)0x7a6382;
                puVar3 = (undefined4 *)FUN_0078eba0();
                local_28 = *puVar3;
                local_24 = puVar3[1];
                local_20 = puVar3[2];
                break;
              case 0xfa6:
                puStack_1a0 = local_e4;
                pcStack_1a4 = (char *)0x7a63b0;
                puVar3 = (undefined4 *)FUN_0078eba0();
                local_1c = *puVar3;
                local_18 = puVar3[1];
                local_14 = puVar3[2];
                break;
              case 0xfa7:
                puStack_1a0 = (undefined1 *)0x7a63d6;
                FUN_0078eb10();
                break;
              default:
                puStack_1a0 = (undefined1 *)0x21;
                pcStack_1a4 = "malformed single leaf information";
                local_f0 = 0xf;
                local_f4 = 0;
                local_104 = 0;
                puStack_1a8 = (undefined1 *)0x7a659d;
                FUN_00414500();
                puStack_1a0 = (undefined1 *)0x0;
                pcStack_1a4 = local_108;
                local_4 = CONCAT31(local_4._1_3_,4);
                puStack_1a8 = (undefined1 *)0x7a65ba;
                FUN_00789190();
                puStack_1a0 = &DAT_00af39e4;
                pcStack_1a4 = local_b4;
                    /* WARNING: Subroutine does not return */
                puStack_1a8 = (undefined1 *)0x7a65cc;
                __CxxThrowException_8();
              }
              puStack_1a0 = (undefined1 *)0x7a63df;
              iVar2 = FUN_0078eb40();
            } while (iVar2 != 0x3f0);
            if ((*(int *)(local_184 + 0x14) == 0) ||
               ((uint)((*(int *)(local_184 + 0x18) - *(int *)(local_184 + 0x14)) / 0x54) <=
                local_180)) {
              puStack_1a0 = (undefined1 *)0x7a6419;
              FUN_00984d5e();
            }
            puStack_1a0 = local_64;
            pcStack_1a4 = (char *)0x7a642d;
            FUN_007a3470();
            local_4 = 0xffffffff;
            if (0xf < local_38) {
              puStack_1a0 = (undefined1 *)local_4c;
              pcStack_1a4 = (char *)0x7a644f;
              FUN_00401f20();
            }
            local_188 = local_188 + 0x54;
            local_180 = local_180 + 1;
          } while ((int)local_180 < local_17c);
        }
        puStack_1a0 = (undefined1 *)0x7a6473;
        FUN_0078eb40();
        in_ECX = local_184;
      }
      goto LAB_007a6539;
    }
    switch(iVar2) {
    case 0xbb9:
      puStack_1a0 = (undefined1 *)0x7a64a7;
      uVar4 = FUN_0078eb40();
      *(undefined4 *)(in_ECX + 0x2c) = uVar4;
      break;
    case 0xbba:
      puStack_1a0 = (undefined1 *)0x7a64b6;
      fVar6 = (float10)FUN_0078eb10();
      *(float *)(in_ECX + 0x28) = (float)fVar6;
      break;
    case 0xbbb:
      uVar5 = *param_1;
      *param_1 = uVar5 + 1;
      goto LAB_007a64c2;
    case 0xbbc:
    case 0xbbd:
      puStack_1a0 = (undefined1 *)0x7a64e0;
      FUN_0078eb10();
      break;
    case 0xbbe:
      uVar5 = *param_1;
      *param_1 = uVar5 + 1;
LAB_007a64c2:
      if ((param_1[2] == 0) || (param_1[3] - param_1[2] <= uVar5)) {
        puStack_1a0 = (undefined1 *)0x7a64d7;
        FUN_00984d5e();
      }
      break;
    case 0xbbf:
      puStack_1a0 = (undefined1 *)0x7a652a;
      fVar6 = (float10)FUN_0078eb10();
      *(float *)(in_ECX + 0x20) = (float)fVar6;
      break;
    case 0xbc0:
      puStack_1a0 = (undefined1 *)0x7a6536;
      uVar4 = FUN_0078eb40();
      *(undefined4 *)(in_ECX + 0xc) = uVar4;
      break;
    case 0xbc1:
      uVar5 = *param_1;
      *param_1 = uVar5 + 1;
      if ((param_1[2] == 0) || (param_1[3] - param_1[2] <= uVar5)) {
        puStack_1a0 = (undefined1 *)0x7a6500;
        FUN_00984d5e();
      }
      *(bool *)in_ECX = *(char *)(uVar5 + param_1[2]) != '\0';
      break;
    case 0xbc2:
      puStack_1a0 = (undefined1 *)0x7a6515;
      fVar6 = (float10)FUN_0078eb10();
      *(float *)(in_ECX + 4) = (float)fVar6;
      break;
    default:
switchD_007a6499_default:
      puStack_1a0 = (undefined1 *)0x22;
      pcStack_1a4 = "malformed general leaf information";
      local_10c = 0xf;
      local_110 = 0;
      local_120 = 0;
      puStack_1a8 = (undefined1 *)0x7a65f8;
      FUN_00414500();
      puStack_1a0 = (undefined1 *)0x0;
      pcStack_1a4 = local_124;
      local_4 = 5;
      puStack_1a8 = (undefined1 *)0x7a6615;
      FUN_00789190();
      puStack_1a0 = &DAT_00af39e4;
      pcStack_1a4 = local_8c;
                    /* WARNING: Subroutine does not return */
      puStack_1a8 = &UNK_007a6627;
      __CxxThrowException_8();
    }
LAB_007a6539:
    puStack_1a0 = (undefined1 *)0x7a6540;
    iVar2 = FUN_0078eb40();
    if (iVar2 == 0x3ed) {
      *unaff_FS_OFFSET = local_c;
      return;
    }
  } while( true );
}



void FUN_007a6670(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0x3f800000;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[5] = 0x3f800000;
  in_ECX[10] = 0x3f800000;
  in_ECX[0xf] = 0x3f800000;
  return;
}



void FUN_007a66b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0x3f800000;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[5] = 0x3f800000;
  in_ECX[10] = 0x3f800000;
  in_ECX[0xf] = 0x3f800000;
  return;
}



void FUN_007a66f0(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x30) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a6700(void)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0098598a();
  if ((DAT_00b42a80 & 1) == 0) {
    DAT_00b42a80 = DAT_00b42a80 | 1;
    _DAT_00b42a74 = 0.0;
    _DAT_00b42a78 = 0.5;
    _DAT_00b42a7c = 1.0;
  }
  if ((DAT_00b42a80 & 2) == 0) {
    DAT_00b42a80 = DAT_00b42a80 | 2;
    _DAT_00b42a68 = 0.0;
    _DAT_00b42a6c = -0.5;
    _DAT_00b42a70 = 1.0;
  }
  if ((DAT_00b42a80 & 4) == 0) {
    DAT_00b42a80 = DAT_00b42a80 | 4;
    _DAT_00b42a5c = 0.0;
    _DAT_00b42a64 = 0.0;
    _DAT_00b42a60 = -0.5;
  }
  if ((DAT_00b42a80 & 8) == 0) {
    DAT_00b42a80 = DAT_00b42a80 | 8;
    _DAT_00b42a50 = 0.0;
    _DAT_00b42a58 = 0.0;
    _DAT_00b42a54 = 0.5;
  }
  if ((DAT_00b42a80 & 0x10) == 0) {
    DAT_00b42a80 = DAT_00b42a80 | 0x10;
  }
  _DAT_00b42a20 = _DAT_00b42a74;
  _DAT_00b42a24 = _DAT_00b42a78;
  _DAT_00b42a28 = _DAT_00b42a7c;
  _DAT_00b42a2c = _DAT_00b42a68;
  _DAT_00b42a30 = _DAT_00b42a6c;
  _DAT_00b42a34 = _DAT_00b42a70;
  _DAT_00b42a38 = _DAT_00b42a5c;
  _DAT_00b42a3c = _DAT_00b42a60;
  _DAT_00b42a40 = _DAT_00b42a64;
  _DAT_00b42a44 = _DAT_00b42a50;
  _DAT_00b42a48 = _DAT_00b42a54;
  _DAT_00b42a4c = _DAT_00b42a58;
  FUN_00793aa0((float)fVar1 * 57.29578);
  _DAT_00b2ba7c = _DAT_00b42a78 * 0.0 + _DAT_00b42a74 * 1.0 + _DAT_00b42a7c * 0.0;
  _DAT_00b2ba80 = _DAT_00b42a7c * 0.0 + _DAT_00b42a74 * 0.0 + _DAT_00b42a78 * 1.0;
  _DAT_00b2ba84 = _DAT_00b42a7c * 1.0 + _DAT_00b42a78 * 0.0 + _DAT_00b42a74 * 0.0;
  _DAT_00b2ba88 = _DAT_00b42a70 * 0.0 + _DAT_00b42a68 * 1.0 + _DAT_00b42a6c * 0.0;
  _DAT_00b2ba8c = _DAT_00b42a70 * 0.0 + _DAT_00b42a6c * 1.0 + _DAT_00b42a68 * 0.0;
  _DAT_00b2ba90 = _DAT_00b42a70 * 1.0 + _DAT_00b42a6c * 0.0 + _DAT_00b42a68 * 0.0;
  _DAT_00b2ba94 = _DAT_00b42a64 * 0.0 + _DAT_00b42a5c * 1.0 + _DAT_00b42a60 * 0.0;
  _DAT_00b2ba98 = _DAT_00b42a64 * 0.0 + _DAT_00b42a60 * 1.0 + _DAT_00b42a5c * 0.0;
  _DAT_00b2ba9c = _DAT_00b42a64 * 1.0 + _DAT_00b42a60 * 0.0 + _DAT_00b42a5c * 0.0;
  _DAT_00b2baa0 = _DAT_00b42a58 * 0.0 + _DAT_00b42a54 * 0.0 + _DAT_00b42a50 * 1.0;
  _DAT_00b2baa4 = _DAT_00b42a58 * 0.0 + _DAT_00b42a54 * 1.0 + _DAT_00b42a50 * 0.0;
  _DAT_00b2baa8 = _DAT_00b42a58 * 1.0 + _DAT_00b42a50 * 0.0 + _DAT_00b42a54 * 0.0;
  return;
}



float * FUN_007a6b10(float *param_1,float *param_2)

{
  float *in_ECX;
  int iVar1;
  float *pfVar2;
  
  pfVar2 = param_1;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar2 = *in_ECX;
    in_ECX = in_ECX + 1;
    pfVar2 = pfVar2 + 1;
  }
  if (*param_2 < *param_1) {
    *param_1 = *param_2;
  }
  if (param_2[1] < param_1[1]) {
    param_1[1] = param_2[1];
  }
  if (param_2[2] < param_1[2]) {
    param_1[2] = param_2[2];
  }
  if (param_1[6] < *param_2) {
    param_1[6] = *param_2;
  }
  if (param_1[7] < param_2[1]) {
    param_1[7] = param_2[1];
  }
  if (param_1[8] < param_2[2]) {
    param_1[8] = param_2[2];
  }
  return param_1;
}



void FUN_007a6bb0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ccce8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0078e550(uVar1);
  local_4 = 0;
  FUN_0078e550();
  in_ECX[2] = 0x7f7fffff;
  in_ECX[1] = 0x7f7fffff;
  *in_ECX = 0x7f7fffff;
  in_ECX[8] = 0xff7fffff;
  in_ECX[7] = 0xff7fffff;
  in_ECX[6] = 0xff7fffff;
  *unaff_FS_OFFSET = local_c;
  return;
}



float * FUN_007a6c20(float *param_1,float *param_2)

{
  float *in_ECX;
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  
  pfVar2 = in_ECX;
  pfVar3 = param_1;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  if (*param_2 < *in_ECX) {
    *param_1 = *param_2;
  }
  if (in_ECX[6] < param_2[6]) {
    param_1[6] = param_2[6];
  }
  if (param_2[1] < in_ECX[1]) {
    param_1[1] = param_2[1];
  }
  if (in_ECX[7] < param_2[7]) {
    param_1[7] = param_2[7];
  }
  if (param_2[2] < in_ECX[2]) {
    param_1[2] = param_2[2];
  }
  if (in_ECX[8] < param_2[8]) {
    param_1[8] = param_2[8];
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007a6cd0(void)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = FUN_009828c0();
  local_4 = iVar1 * 0x41a7 + (iVar1 / 0x1f31d) * -0x7fffffff;
  if (local_4 < 1) {
    local_4 = local_4 + 0x7fffffff;
  }
  _DAT_00b42c90 = (double)local_4;
  return (float10)((float)local_4 * 4.656613e-10);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a6d30(void)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float10 extraout_ST0;
  int iStack00000004;
  
  pfVar2 = (float *)&DAT_00b42a90;
  do {
    iVar1 = FUN_009828c0();
    iStack00000004 = iVar1 * 0x41a7 + (iVar1 / 0x1f31d) * -0x7fffffff;
    if (iStack00000004 < 1) {
      iStack00000004 = iStack00000004 + 0x7fffffff;
    }
    pfVar3 = pfVar2 + 1;
    *pfVar2 = (float)((float10)iStack00000004 * extraout_ST0);
    pfVar2 = pfVar3;
  } while ((int)pfVar3 < 0xb42c90);
  _DAT_00b42c90 = (double)iStack00000004;
  return;
}



void FUN_007a6dd0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8c9b4;
  if (*(char *)(in_ECX + 4) == '\0') {
    FUN_00401f20(in_ECX[2]);
    FUN_00401f20(in_ECX[3]);
  }
  *in_ECX = &PTR_LAB_00a8c5d4;
  return;
}



void FUN_007a6e00(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8c9dc;
  DAT_00b42c9c = DAT_00b42c9c + -1;
  if (DAT_00b42c9c != 0) {
    *(undefined1 *)(in_ECX + 4) = 1;
  }
  *in_ECX = &PTR_FUN_00a8c9b4;
  if (*(char *)(in_ECX + 4) == '\0') {
    FUN_00401f20(in_ECX[2]);
    FUN_00401f20(in_ECX[3]);
  }
  *in_ECX = &PTR_LAB_00a8c5d4;
  return;
}



void FUN_007a6f30(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8c9b4;
  if (*(char *)(in_ECX + 4) == '\0') {
    FUN_00401f20(in_ECX[2]);
    FUN_00401f20(in_ECX[3]);
  }
  *in_ECX = &PTR_LAB_00a8c5d4;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007a6f70(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8c9dc;
  DAT_00b42c9c = DAT_00b42c9c + -1;
  if (DAT_00b42c9c != 0) {
    *(undefined1 *)(in_ECX + 4) = 1;
  }
  *in_ECX = &PTR_FUN_00a8c9b4;
  if (*(char *)(in_ECX + 4) == '\0') {
    FUN_00401f20(in_ECX[2]);
    FUN_00401f20(in_ECX[3]);
  }
  *in_ECX = &PTR_LAB_00a8c5d4;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007a6fd0(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  float10 fVar4;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [40];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab198;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffa8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (_DAT_00b42c90 == 0.0) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_00414500("Random number generator not initialised",0x27);
    local_4 = 0;
    FUN_004146e0(local_50);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00af60f4);
  }
  FUN_007a6cd0(uVar2);
  iVar3 = FUN_009828c0();
  fVar1 = (float)(&DAT_00b42a90)[iVar3];
  fVar4 = (float10)FUN_007a6cd0();
  (&DAT_00b42a90)[iVar3] = (float)fVar4;
  *unaff_FS_OFFSET = local_c;
  return (float10)fVar1;
}



void FUN_007a7090(void)

{
  int *unaff_FS_OFFSET;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [40];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c8778;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  FUN_00414500("Newran: illegal combination",0x1b);
  local_4 = 0;
  FUN_004146e0(local_50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00af60f4);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a7100(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  int *unaff_FS_OFFSET;
  float10 fVar4;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [40];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ccd18;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffac;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((double)CONCAT44(param_2,param_1) < 1.0) && (0.0 < (double)CONCAT44(param_2,param_1))) {
    iVar2 = FUN_009828c0(uVar1);
    _DAT_00b42c90 = (double)iVar2;
    pfVar3 = (float *)&DAT_00b42a90;
    do {
      fVar4 = (float10)FUN_007a6cd0();
      *pfVar3 = (float)fVar4;
      pfVar3 = pfVar3 + 1;
    } while ((int)pfVar3 < 0xb42c90);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  FUN_00414500("Newran: seed out of range",0x19);
  local_4 = 0;
  FUN_004146e0(local_50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00af60f4);
}



void FUN_007a71d0(char param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  float local_9c;
  undefined1 auStack_94 [4];
  undefined1 uStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [4];
  undefined1 uStack_74;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined **appuStack_5c [4];
  undefined1 uStack_4c;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [40];
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ccd5b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff54;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined1 *)(in_ECX + 4) = 0;
  iVar4 = FUN_00401f00(0xf0,uVar3);
  in_ECX[2] = iVar4;
  iVar4 = FUN_00401f00(0xf0);
  local_9c = 0.0;
  in_ECX[3] = iVar4;
  if (param_1 == '\0') {
    fVar2 = 0.02;
  }
  else {
    fVar2 = 0.01;
  }
  iVar4 = 0;
  do {
    *(float *)(in_ECX[2] + iVar4 * 4) = local_9c;
    fVar5 = (float10)(**(code **)(*in_ECX + 0xc))(local_9c);
    fVar1 = (float)fVar5;
    *(float *)(in_ECX[3] + iVar4 * 4) = fVar1;
    if (fVar1 <= 0.0) {
      if (iVar4 < 0x32) {
        uStack_7c = 0xf;
        uStack_80 = 0;
        uStack_90 = 0;
        FUN_00414500("Newran: area too small",0x16);
        iStack_4 = 2;
        FUN_006f7dd0(auStack_94);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(auStack_34,&DAT_00af17bc);
      }
      if (param_1 == '\0') {
        in_ECX[1] = (int)(float)iVar4;
      }
      else {
        in_ECX[1] = (int)((float)iVar4 + (float)iVar4);
      }
      *unaff_FS_OFFSET = local_c;
      return;
    }
    iVar4 = iVar4 + 1;
    local_9c = fVar2 / fVar1 + local_9c;
  } while (iVar4 < 0x3c);
  uStack_60 = 0xf;
  uStack_64 = 0;
  uStack_74 = 0;
  FUN_00414500("Newran: area too large",0x16);
  iStack_4 = 0;
  FUN_00983c94();
  iStack_4._0_1_ = 1;
  appuStack_5c[0] = &PTR_FUN_00a7ce9c;
  uStack_38 = 0xf;
  uStack_3c = 0;
  uStack_4c = 0;
  FUN_00414420(auStack_78,0,0xffffffff);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(appuStack_5c,&DAT_00af17bc);
}



float10 FUN_007a73a0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *in_ECX;
  float10 fVar6;
  float10 fVar7;
  
  if ((char)in_ECX[4] != '\0') {
    FUN_007a71d0(0);
  }
  do {
    FUN_007a6fd0();
    iVar5 = FUN_009828c0();
    fVar2 = *(float *)(in_ECX[2] + iVar5 * 4);
    fVar6 = (float10)FUN_007a6fd0();
    fVar7 = (float10)fVar2;
    pfVar1 = (float *)(in_ECX[3] + iVar5 * 4);
    fVar2 = (float)(fVar6 * ((float10)*(float *)(in_ECX[2] + 4 + iVar5 * 4) - fVar7) + fVar7);
    fVar6 = (float10)FUN_007a6fd0();
    fVar3 = (float)(fVar6 * (float10)*pfVar1);
    fVar4 = pfVar1[1];
    if (fVar4 < fVar3 == (fVar4 == fVar3)) {
      return (float10)fVar2;
    }
    fVar6 = (float10)(**(code **)(*in_ECX + 0xc))(fVar2);
  } while (fVar6 < (float10)fVar3 != (fVar6 == (float10)fVar3));
  return (float10)fVar2;
}



float10 FUN_007a7460(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *in_ECX;
  float10 fVar6;
  float10 fVar7;
  float local_14;
  
  if ((char)in_ECX[4] != '\0') {
    FUN_007a71d0(1);
  }
  while( true ) {
    local_14 = 1.0;
    fVar6 = (float10)FUN_007a6fd0();
    if (0.5 < (float)fVar6) {
      local_14 = -1.0;
    }
    iVar5 = FUN_009828c0();
    fVar2 = *(float *)(in_ECX[2] + iVar5 * 4);
    fVar6 = (float10)FUN_007a6fd0();
    fVar7 = (float10)fVar2;
    pfVar1 = (float *)(in_ECX[3] + iVar5 * 4);
    fVar2 = (float)(fVar6 * ((float10)*(float *)(in_ECX[2] + 4 + iVar5 * 4) - fVar7) + fVar7);
    fVar6 = (float10)FUN_007a6fd0();
    fVar3 = (float)(fVar6 * (float10)*pfVar1);
    fVar4 = pfVar1[1];
    if (fVar4 < fVar3 == (fVar4 == fVar3)) break;
    fVar6 = (float10)(**(code **)(*in_ECX + 0xc))(fVar2);
    if (fVar6 < (float10)fVar3 == (fVar6 == (float10)fVar3)) {
      return (float10)(fVar2 * local_14);
    }
  }
  return (float10)(fVar2 * local_14);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a7560(void)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ccd88;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[1] = 0;
  *(undefined1 *)(in_ECX + 4) = 1;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *in_ECX = &PTR_FUN_00a8c9dc;
  local_4 = 0;
  if (DAT_00b42c9c == 0) {
    FUN_007a71d0(1);
    _DAT_00b42c98 = in_ECX[1];
    DAT_00b42a88 = in_ECX[2];
    DAT_00b42a8c = in_ECX[3];
  }
  else {
    *(undefined1 *)(in_ECX + 4) = 0;
    in_ECX[1] = _DAT_00b42c98;
    in_ECX[2] = DAT_00b42a88;
    in_ECX[3] = DAT_00b42a8c;
  }
  DAT_00b42c9c = DAT_00b42c9c + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007a7610(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ccdf2;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[2] = 0x3e99999a;
  *in_ECX = 6;
  in_ECX[3] = 0x3f800000;
  in_ECX[1] = 3;
  in_ECX[5] = 0x3f800000;
  *(undefined1 *)(in_ECX + 7) = 1;
  in_ECX[6] = 0x3f800000;
  *(undefined1 *)((int)in_ECX + 0x1d) = 0;
  *(undefined1 *)((int)in_ECX + 0x1e) = 0;
  in_ECX[4] = 0x3e99999a;
  in_ECX[10] = 0;
  in_ECX[0x14] = 0;
  in_ECX[8] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[9] = 0x3f800000;
  in_ECX[0x17] = 0;
  in_ECX[0xb] = 0x3f800000;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0xc] = 0x41f00000;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0xd] = 0x41200000;
  in_ECX[0x1c] = 0;
  in_ECX[0xe] = 0x3f800000;
  in_ECX[0xf] = 0x3f000000;
  in_ECX[0x10] = 0x3e800000;
  in_ECX[0x11] = 0x3e99999a;
  in_ECX[0x12] = 0x3dcccccd;
  in_ECX[0x13] = 0x3f800000;
  iVar2 = FUN_00401f00(0x5c,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00785be0();
  }
  local_4 = 0xffffffff;
  in_ECX[0x16] = uVar3;
  iVar2 = FUN_00401f00(0x5c,uVar1);
  local_4 = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00785be0();
  }
  local_4 = 0xffffffff;
  in_ECX[0x15] = uVar3;
  iVar2 = FUN_00401f00(0x5c,uVar1);
  local_4 = 2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00785be0();
  }
  local_4 = 0xffffffff;
  in_ECX[0x19] = uVar3;
  iVar2 = FUN_00401f00(0x5c);
  local_4 = 3;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00785be0();
  }
  local_4 = 0xffffffff;
  in_ECX[0x1b] = uVar3;
  iVar2 = FUN_00401f00(0x5c);
  local_4 = 4;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00785be0();
  }
  local_4 = 0xffffffff;
  in_ECX[0x1a] = uVar3;
  iVar2 = FUN_00401f00(0x5c);
  local_4 = 5;
  if (iVar2 != 0) {
    uVar3 = FUN_00785be0();
    in_ECX[0x18] = uVar3;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  in_ECX[0x18] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007a7800(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x58);
  if (iVar1 != 0) {
    FUN_00784b60();
    FUN_00401f20(iVar1);
  }
  iVar1 = *(int *)(in_ECX + 0x5c);
  if (iVar1 != 0) {
    FUN_00784b60();
    FUN_00401f20(iVar1);
  }
  iVar1 = *(int *)(in_ECX + 0x54);
  if (iVar1 != 0) {
    FUN_00784b60();
    FUN_00401f20(iVar1);
  }
  iVar1 = *(int *)(in_ECX + 0x50);
  if (iVar1 != 0) {
    FUN_00784b60();
    FUN_00401f20(iVar1);
  }
  iVar1 = *(int *)(in_ECX + 0x6c);
  if (iVar1 != 0) {
    FUN_00784b60();
    FUN_00401f20(iVar1);
  }
  iVar1 = *(int *)(in_ECX + 100);
  if (iVar1 != 0) {
    FUN_00784b60();
    FUN_00401f20(iVar1);
  }
  iVar1 = *(int *)(in_ECX + 0x68);
  if (iVar1 != 0) {
    FUN_00784b60();
    FUN_00401f20(iVar1);
  }
  iVar1 = *(int *)(in_ECX + 0x60);
  if (iVar1 != 0) {
    FUN_00784b60();
    FUN_00401f20(iVar1);
  }
  iVar1 = *(int *)(in_ECX + 0x70);
  if (iVar1 != 0) {
    FUN_00784b60();
    FUN_00401f20(iVar1);
  }
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  return;
}



undefined4 * FUN_007a7900(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  float10 fVar6;
  undefined1 local_94 [4];
  undefined1 local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [4];
  undefined1 local_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [40];
  undefined1 local_34 [40];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cce31;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff58;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x74,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_007a7610();
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_0078eb40();
  if (iVar2 == 0x3f8) {
    iVar2 = FUN_0078eb40();
    do {
      switch(iVar2) {
      case 6000:
        iVar4 = FUN_007909d0();
        iVar2 = puVar3[0x14];
        if (iVar2 != iVar4) {
          if (iVar2 != 0) {
            FUN_00784b60();
            FUN_00401f20(iVar2);
          }
          puVar3[0x14] = iVar4;
        }
        break;
      case 0x1771:
        iVar4 = FUN_007909d0();
        iVar2 = puVar3[0x15];
        if (iVar2 != iVar4) {
          if (iVar2 != 0) {
            FUN_00784b60();
            FUN_00401f20(iVar2);
          }
          puVar3[0x15] = iVar4;
        }
        break;
      case 0x1772:
        iVar4 = FUN_007909d0();
        iVar2 = puVar3[0x16];
        if (iVar2 != iVar4) {
          if (iVar2 != 0) {
            FUN_00784b60();
            FUN_00401f20(iVar2);
          }
          puVar3[0x16] = iVar4;
        }
        break;
      case 0x1773:
        iVar4 = FUN_007909d0();
        iVar2 = puVar3[0x17];
        if (iVar2 != iVar4) {
          if (iVar2 != 0) {
            FUN_00784b60();
            FUN_00401f20(iVar2);
          }
          puVar3[0x17] = iVar4;
        }
        break;
      case 0x1774:
        iVar4 = FUN_007909d0();
        iVar2 = puVar3[0x18];
        if (iVar2 != iVar4) {
          if (iVar2 != 0) {
            FUN_00784b60();
            FUN_00401f20(iVar2);
          }
          puVar3[0x18] = iVar4;
        }
        break;
      case 0x1775:
        iVar4 = FUN_007909d0();
        iVar2 = puVar3[0x19];
        if (iVar2 != iVar4) {
          if (iVar2 != 0) {
            FUN_00784b60();
            FUN_00401f20(iVar2);
          }
          puVar3[0x19] = iVar4;
        }
        break;
      case 0x1776:
        iVar4 = FUN_007909d0();
        iVar2 = puVar3[0x1a];
        if (iVar2 != iVar4) {
          if (iVar2 != 0) {
            FUN_00784b60();
            FUN_00401f20(iVar2);
          }
          puVar3[0x1a] = iVar4;
        }
        break;
      case 0x1777:
        iVar4 = FUN_007909d0();
        iVar2 = puVar3[0x1b];
        if (iVar2 != iVar4) {
          if (iVar2 != 0) {
            FUN_00784b60();
            FUN_00401f20(iVar2);
          }
          puVar3[0x1b] = iVar4;
        }
        break;
      case 0x1778:
        uVar5 = FUN_0078eb40();
        *puVar3 = uVar5;
        break;
      case 0x1779:
        uVar5 = FUN_0078eb40();
        puVar3[1] = uVar5;
        break;
      case 0x177a:
        fVar6 = (float10)FUN_0078eb10();
        puVar3[2] = (float)fVar6;
        break;
      case 0x177b:
        fVar6 = (float10)FUN_0078eb10();
        puVar3[3] = (float)fVar6;
        break;
      case 0x177c:
        fVar6 = (float10)FUN_0078eb10();
        puVar3[4] = (float)fVar6;
        break;
      case 0x177d:
        fVar6 = (float10)FUN_0078eb10();
        puVar3[5] = (float)fVar6;
        break;
      case 0x177e:
        fVar6 = (float10)FUN_0078eb10();
        puVar3[6] = (float)fVar6;
        break;
      case 0x177f:
        uVar1 = *param_1;
        *param_1 = uVar1 + 1;
        if ((param_1[2] == 0) || (param_1[3] - param_1[2] <= uVar1)) {
          FUN_00984d5e();
        }
        *(bool *)(puVar3 + 7) = *(char *)(param_1[2] + uVar1) != '\0';
        break;
      case 0x1780:
        uVar1 = *param_1;
        *param_1 = uVar1 + 1;
        if ((param_1[2] == 0) || (param_1[3] - param_1[2] <= uVar1)) {
          FUN_00984d5e();
        }
        *(bool *)((int)puVar3 + 0x1d) = *(char *)(param_1[2] + uVar1) != '\0';
        break;
      case 0x1781:
        iVar4 = FUN_007909d0();
        iVar2 = puVar3[0x1c];
        if (iVar2 != iVar4) {
          if (iVar2 != 0) {
            FUN_00784b60();
            FUN_00401f20(iVar2);
          }
          puVar3[0x1c] = iVar4;
        }
        break;
      default:
        local_7c = 0xf;
        local_80 = 0;
        local_90 = 0;
        FUN_00414500("malformed general branch information",0x24);
        local_4 = 2;
        FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_34,&DAT_00af39e4);
      }
      iVar2 = FUN_0078eb40();
    } while (iVar2 != 0x3f9);
    *unaff_FS_OFFSET = local_c;
    return puVar3;
  }
  local_60 = 0xf;
  local_64 = 0;
  local_74 = 0;
  FUN_00414500("malformed branch data",0x15);
  local_4 = 1;
  FUN_00789190(local_78,0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_5c,&DAT_00af39e4);
}



void FUN_007a7d10(undefined4 *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *in_ECX;
  
  FUN_0078ecf0();
  *(undefined1 *)(in_ECX + 4) = param_3;
  *in_ECX = &PTR_FUN_00a8cab4;
  in_ECX[5] = 0xffffffff;
  *(undefined1 *)(in_ECX + 6) = param_2;
  in_ECX[9] = 0;
  in_ECX[8] = 0;
  in_ECX[7] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xb] = 0;
  in_ECX[10] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xd] = 0;
  *(undefined1 *)(in_ECX + 0x10) = 0;
  in_ECX[0x12] = param_5;
  in_ECX[0x11] = param_4;
  in_ECX[1] = *param_1;
  in_ECX[2] = param_1[1];
  in_ECX[3] = param_1[2];
  return;
}



void FUN_007a7d80(void)

{
  undefined4 *in_ECX;
  
  FUN_0078ecf0();
  *in_ECX = &PTR_FUN_00a8cab4;
  in_ECX[5] = 0xffffffff;
  *(undefined1 *)(in_ECX + 4) = 0;
  *(undefined1 *)(in_ECX + 6) = 0;
  in_ECX[9] = 0;
  in_ECX[8] = 0;
  in_ECX[7] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xb] = 0;
  in_ECX[10] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xd] = 0;
  *(undefined1 *)(in_ECX + 0x10) = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x11] = 0;
  return;
}



void FUN_007a7dd0(int param_1)

{
  int in_ECX;
  
  if (param_1 != in_ECX) {
    FUN_0078ed20(param_1);
    *(undefined1 *)(in_ECX + 0x10) = *(undefined1 *)(param_1 + 0x10);
    *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined1 *)(in_ECX + 0x18) = *(undefined1 *)(param_1 + 0x18);
    *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)(in_ECX + 0x40) = *(undefined1 *)(param_1 + 0x40);
    *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  }
  return;
}



undefined4 FUN_007a7e50(void)

{
  uint uVar1;
  int iVar2;
  undefined4 in_ECX;
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
  iVar2 = FUN_00401f00(0x4c,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_007a7d80();
  }
  local_4 = 0xffffffff;
  FUN_007a7dd0(in_ECX);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_007a7ec0(float *param_1)

{
  byte bVar1;
  byte bVar2;
  int in_ECX;
  
  bVar1 = *(byte *)(in_ECX + 0x15);
  bVar2 = *(byte *)(in_ECX + 0x16);
  *param_1 = (float)*(byte *)(in_ECX + 0x14) / 255.0;
  param_1[1] = (float)bVar1 / 255.0;
  param_1[2] = (float)bVar2 / 255.0;
  return;
}



void FUN_007a7f10(float *param_1,char param_2)

{
  float fVar1;
  int in_ECX;
  int iVar2;
  int local_14;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_1;
  local_8 = param_1[1];
  local_4 = param_1[2];
  if (param_2 != '\0') {
    fVar1 = (float)*(byte *)(in_ECX + 0x18) / 255.0;
    local_c = local_c * fVar1;
    local_8 = local_8 * fVar1;
    local_4 = fVar1 * local_4;
  }
  if (local_c <= 1.0) {
    if (local_c < 0.0) {
      local_c = 0.0;
    }
  }
  else {
    local_c = 1.0;
  }
  if (local_8 <= 1.0) {
    if (local_8 < 0.0) {
      local_8 = 0.0;
    }
  }
  else {
    local_8 = 1.0;
  }
  fVar1 = 0.0;
  if (local_4 <= 1.0) {
    if (0.0 <= local_4) goto LAB_007a7fde;
  }
  else {
    fVar1 = 1.0;
  }
  local_4 = fVar1;
LAB_007a7fde:
  local_14 = (int)(longlong)ROUND(local_4 * -255.0);
  iVar2 = 0xff00 - local_14;
  local_14 = (int)(longlong)ROUND(local_8 * -255.0);
  iVar2 = iVar2 * 0x100 - local_14;
  local_14 = (int)(longlong)ROUND(local_c * -255.0);
  *(int *)(in_ECX + 0x14) = iVar2 * 0x100 - local_14;
  return;
}



void FUN_007a8070(byte param_1)

{
  FUN_0078ed10();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007a8090(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  int in_ECX;
  float10 fVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *(float *)(in_ECX + 4) - *param_1;
  local_8 = *(float *)(in_ECX + 8) - param_1[1];
  local_4 = *(float *)(in_ECX + 0xc) - param_1[2];
  fVar2 = (float10)FUN_00982c30();
  fVar1 = 1.0 / (float)fVar2;
  local_c = fVar1 * local_c;
  local_8 = local_8 * fVar1;
  local_4 = fVar1 * local_4;
  local_18 = *param_2 - *param_1;
  local_14 = param_2[1] - param_1[1];
  local_10 = param_2[2] - param_1[2];
  fVar2 = (float10)FUN_00982c30();
  fVar1 = 1.0 / (float)fVar2;
  local_18 = fVar1 * local_18;
  local_14 = local_14 * fVar1;
  local_10 = fVar1 * local_10;
  FUN_0078fcc0(&local_18);
  fVar2 = (float10)FUN_00986000();
  param_3 = param_3 + ((float)fVar2 + 1.0) * 0.5 * (1.0 - param_3);
  local_c = (float)*(byte *)(in_ECX + 0x14) / 255.0;
  local_8 = (float)*(byte *)(in_ECX + 0x15) / 255.0;
  local_4 = (float)*(byte *)(in_ECX + 0x16) / 255.0;
  local_18 = param_3 * local_c;
  local_14 = local_8 * param_3;
  local_10 = param_3 * local_4;
  FUN_007a7f10(&local_18,1);
  return;
}



int FUN_007a8250(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [40];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cce73;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff88;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x4c,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_007a7d80();
  }
  local_4 = 0xffffffff;
  iVar3 = FUN_0078eb40();
  do {
    switch(iVar3) {
    case 0x1b5e:
      uVar4 = FUN_0078eb70();
      *(undefined4 *)(iVar2 + 0x14) = uVar4;
      break;
    case 0x1b5f:
      uVar1 = *param_1;
      *param_1 = uVar1 + 1;
      if ((param_1[2] == 0) || (param_1[3] - param_1[2] <= uVar1)) {
        FUN_00984d5e();
      }
      *(undefined1 *)(iVar2 + 0x10) = *(undefined1 *)(param_1[2] + uVar1);
      break;
    case 0x1b60:
      uVar1 = *param_1;
      *param_1 = uVar1 + 1;
      if ((param_1[2] == 0) || (param_1[3] - param_1[2] <= uVar1)) {
        FUN_00984d5e();
      }
      *(undefined1 *)(iVar2 + 0x18) = *(undefined1 *)(param_1[2] + uVar1);
      break;
    default:
      local_38 = 0xf;
      local_3c = 0;
      local_4c = 0;
      FUN_00414500("malformed billboard leaf",0x18);
      local_4 = 1;
      FUN_00789190(local_50,0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_34,&DAT_00af39e4);
    case 0x1b62:
      puVar5 = (undefined4 *)FUN_0078eba0(local_68);
      *(undefined4 *)(iVar2 + 0x1c) = *puVar5;
      *(undefined4 *)(iVar2 + 0x20) = puVar5[1];
      *(undefined4 *)(iVar2 + 0x24) = puVar5[2];
      break;
    case 0x1b63:
      uVar1 = *param_1;
      *param_1 = uVar1 + 1;
      if ((param_1[2] == 0) || (param_1[3] - param_1[2] <= uVar1)) {
        FUN_00984d5e();
      }
      *(undefined1 *)(iVar2 + 0x40) = *(undefined1 *)(param_1[2] + uVar1);
      break;
    case 0x1b64:
      uVar1 = *param_1;
      *param_1 = uVar1 + 1;
      if ((param_1[2] == 0) || (param_1[3] - param_1[2] <= uVar1)) {
        FUN_00984d5e();
      }
      *(float *)(iVar2 + 0x44) = (float)*(byte *)(param_1[2] + uVar1) / 255.0;
      break;
    case 0x1b65:
      uVar4 = FUN_0078eb40();
      *(undefined4 *)(iVar2 + 0x48) = uVar4;
      break;
    case 0x1b67:
      puVar5 = (undefined4 *)FUN_0078eba0(local_5c);
      *(undefined4 *)(iVar2 + 4) = *puVar5;
      *(undefined4 *)(iVar2 + 8) = puVar5[1];
      *(undefined4 *)(iVar2 + 0xc) = puVar5[2];
      break;
    case 0x1b68:
      FUN_0078eb10();
    }
    iVar3 = FUN_0078eb40();
  } while (iVar3 != 0x1b5d);
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



void FUN_007a8480(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0x3f000000;
  in_ECX[1] = 0x3f000000;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  return;
}



void FUN_007a84a0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  undefined1 local_8c [12];
  undefined1 local_80 [12];
  undefined1 local_74 [12];
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [40];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cce98;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff6c;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_0078eb40(uVar2);
  do {
    switch(iVar3) {
    case 5000:
      FUN_0078eba0(local_8c);
      break;
    case 0x1389:
      FUN_0078eba0(local_80);
      break;
    case 0x138a:
      puVar4 = (undefined4 *)FUN_0078eba0(local_74);
      in_ECX[3] = *puVar4;
      in_ECX[4] = puVar4[1];
      in_ECX[5] = puVar4[2];
      break;
    case 0x138b:
      FUN_0078eba0(local_68);
      break;
    case 0x138c:
      puVar4 = (undefined4 *)FUN_0078eba0(local_5c);
      *in_ECX = *puVar4;
      in_ECX[1] = puVar4[1];
      in_ECX[2] = puVar4[2];
      break;
    case 0x138d:
      fVar5 = (float10)FUN_0078eb10();
      in_ECX[6] = (float)fVar5;
      break;
    case 0x138e:
      uVar1 = *param_1;
      *param_1 = uVar1 + 1;
      if ((param_1[2] == 0) || (param_1[3] - param_1[2] <= uVar1)) {
        FUN_00984d5e();
      }
      break;
    default:
      local_38 = 0xf;
      local_3c = 0;
      local_4c = 0;
      FUN_00414500("malformed general wind information",0x22);
      local_4 = 0;
      FUN_00789190(local_50,0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_34,&DAT_00af39e4);
    }
    iVar3 = FUN_0078eb40(uVar2);
  } while (iVar3 != 0x3f4);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007a8620(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = 0xf;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0x44898000;
  *(undefined4 *)(in_ECX + 0x24) = 0x4b0;
  *(undefined4 *)(in_ECX + 0x20) = 0x42c80000;
  *(undefined4 *)(in_ECX + 0x30) = 0x1bc;
  *(undefined4 *)(in_ECX + 0x28) = 0x42480000;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  return;
}



void FUN_007a8660(char *param_1)

{
  char *pcVar1;
  undefined **local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1;
    if ((uint)(0xffffffff / ZEXT48(param_1)) < 8) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_c,&param_1);
      local_c[0] = &PTR_FUN_00a32488;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_c,&DAT_00ad7f34);
    }
  }
  FUN_00401f00((int)pcVar1 * 8);
  return;
}



void FUN_007a86c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
    }
    param_3 = param_3 + 2;
  }
  return;
}



void FUN_007a86f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}



void FUN_007a8720(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
    }
    param_1 = param_1 + 2;
  }
  return;
}



int FUN_007a8750(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar1 = param_2;
    do {
      iVar2 = iVar1 + -8;
      *(undefined4 *)((param_3 - param_2) + iVar2) = *(undefined4 *)(iVar1 + -8);
      *(undefined4 *)((param_3 - param_2) + 4 + iVar2) = *(undefined4 *)(iVar1 + -4);
      iVar1 = iVar2;
    } while (iVar2 != param_1);
  }
  return param_3 + (param_2 - param_1 >> 3) * -8;
}



int FUN_007a8790(int param_1,int param_2,undefined4 param_3)

{
  FUN_007a8720(param_1,param_2,param_3);
  return param_1 + param_2 * 8;
}



void FUN_007a87d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  if (in_ECX[2] != 0) {
    FUN_00401f20(in_ECX[2]);
  }
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}



void FUN_007a8800(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  
  if (param_1 == 0) {
    return;
  }
  if ((*in_ECX == 0) || (in_ECX[1] == 0)) {
    FUN_00984d5e();
  }
  iVar1 = *in_ECX;
  uVar3 = *(uint *)(iVar1 + 8);
  iVar2 = in_ECX[2];
  if (param_1 < 0) {
    if (*(uint *)(iVar1 + 0xc) < uVar3) {
      FUN_00984d5e();
    }
    if ((uint)-param_1 <= (uint)(((int)(in_ECX[1] - uVar3) >> 2) * 0x20 + iVar2)) goto LAB_007a8876;
  }
  else {
    if (*(uint *)(iVar1 + 0xc) < uVar3) {
      FUN_00984d5e();
    }
    if ((uint)(((int)(in_ECX[1] - uVar3) >> 2) * 0x20 + iVar2 + param_1) <= *(uint *)*in_ECX)
    goto LAB_007a8876;
  }
  FUN_00984d5e();
LAB_007a8876:
  if ((param_1 < 0) && ((uint)in_ECX[2] < (uint)-param_1)) {
    uVar3 = in_ECX[2] + param_1;
    in_ECX[1] = in_ECX[1] + (-uVar3 - 1 >> 5) * -4 + -4;
    in_ECX[2] = uVar3 & 0x1f;
    return;
  }
  in_ECX[1] = in_ECX[1] + ((uint)(in_ECX[2] + param_1) >> 5) * 4;
  in_ECX[2] = in_ECX[2] + param_1 & 0x1f;
  return;
}



void FUN_007a88d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_007a86c0(param_1,param_2,param_3);
  return;
}



void FUN_007a8900(void)

{
  int *unaff_FS_OFFSET;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c8778;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  FUN_00414500("vector<bool> too long",0x15);
  local_4 = 0;
  FUN_004146e0(local_50);
  local_34[0] = &PTR_FUN_00a370b8;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ad9930);
}



/* WARNING: Removing unreachable block (ram,0x007a8993) */

void FUN_007a8980(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *in_ECX;
  uint uVar5;
  undefined1 auStack_8 [4];
  uint uStack_4;
  
  uVar3 = in_ECX[2];
  uVar5 = param_1 + 0x1f >> 5;
  if ((uVar3 != 0) && (uVar5 < (uint)((int)(in_ECX[3] - uVar3) >> 2))) {
    uVar4 = in_ECX[3];
    if (uVar4 < uVar3) {
      FUN_00984d5e();
    }
    uVar3 = in_ECX[2];
    if (in_ECX[3] < uVar3) {
      FUN_00984d5e();
    }
    uVar1 = uVar3 + uVar5 * 4;
    uStack_4 = uVar3;
    if ((in_ECX[3] < uVar1) || (uVar1 < in_ECX[2])) {
      FUN_00984d5e();
    }
    FUN_00439050(auStack_8,in_ECX + 1,uVar1,in_ECX + 1,uVar4);
  }
  *in_ECX = param_1;
  if ((param_1 & 0x1f) != 0) {
    if ((in_ECX[2] == 0) || ((uint)((int)(in_ECX[3] - in_ECX[2]) >> 2) <= uVar5 - 1)) {
      FUN_00984d5e();
    }
    puVar2 = (uint *)(in_ECX[2] + (uVar5 - 1) * 4);
    *puVar2 = *puVar2 & (1 << (sbyte)(param_1 & 0x1f)) - 1U;
  }
  return;
}



void FUN_007a8a40(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined8 uVar8;
  uint uStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009ccec0;
  local_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&local_10;
  local_20 = *param_4;
  local_1c = param_4[1];
  iVar5 = *(int *)(in_ECX + 4);
  if (iVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(int *)(in_ECX + 0xc) - iVar5 >> 3;
  }
  if (param_3 != 0) {
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(in_ECX + 8) - iVar5 >> 3;
    }
    uVar6 = param_3;
    puVar1 = &uStack_30;
    if (0x1fffffffU - iVar4 < param_3) {
      uVar8 = FUN_00790b90();
      uVar6 = (uint)((ulonglong)uVar8 >> 0x20);
      iVar5 = (int)uVar8;
      puVar1 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar1;
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(in_ECX + 8) - iVar5 >> 3;
    }
    if (uVar7 < iVar4 + uVar6) {
      if (0x1fffffff - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar5 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_ECX + 8) - iVar5 >> 3;
      }
      if (uVar7 < iVar4 + uVar6) {
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(in_ECX + 8) - iVar5 >> 3;
        }
        uVar7 = iVar5 + uVar6;
      }
      iVar4 = FUN_007a8660(uVar7,0);
      local_8 = 0;
      local_18 = iVar4;
      uVar2 = FUN_007a86c0(*(undefined4 *)(in_ECX + 4),param_2,iVar4);
      uVar2 = FUN_007a8790(uVar2,param_3,&local_20);
      FUN_007a86c0(param_2,*(undefined4 *)(in_ECX + 8),uVar2);
      iVar5 = *(int *)(in_ECX + 4);
      if (iVar5 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(in_ECX + 8) - iVar5 >> 3;
      }
      if (iVar5 != 0) {
        FUN_00401f20(iVar5);
      }
      *(uint *)(in_ECX + 0xc) = iVar4 + uVar7 * 8;
      *(uint *)(in_ECX + 8) = iVar4 + (param_3 + iVar3) * 8;
      *(int *)(in_ECX + 4) = iVar4;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar5 = *(int *)(in_ECX + 8);
    if ((uint)(iVar5 - param_2 >> 3) < uVar6) {
      FUN_007a88d0(param_2,iVar5,uVar6 * 8 + param_2);
      local_8 = 2;
      FUN_007a8790(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2 >> 3),&local_20);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + uVar6 * 8;
      FUN_007a86f0(param_2,*(int *)(in_ECX + 8) + uVar6 * -8,&local_20);
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar4 = iVar5 + uVar6 * -8;
    uVar2 = FUN_007a88d0(iVar4,iVar5,iVar5);
    *(undefined4 *)(in_ECX + 8) = uVar2;
    FUN_007a8750(param_2,iVar4,iVar5);
    FUN_007a86f0(param_2,uVar6 * 8 + param_2,&local_20);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_007a8ca0(uint *param_1,uint *param_2,uint param_3,undefined4 param_4,uint *param_5,
                 uint param_6,char *param_7)

{
  uint uVar1;
  
  while ((param_2 != param_5 || (param_3 != param_6))) {
    if (param_1 == (uint *)0x0) {
      FUN_00984d5e();
    }
    if (*param_7 == '\0') {
      if ((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) {
        FUN_00984d5e();
      }
      uVar1 = param_1[2];
      if (param_1[3] < uVar1) {
        FUN_00984d5e();
      }
      if (*param_1 <= ((int)((int)param_2 - uVar1) >> 2) * 0x20 + param_3) {
        FUN_00984d5e();
      }
      *param_2 = *param_2 & ~(1 << ((byte)param_3 & 0x1f));
    }
    else {
      if ((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) {
        FUN_00984d5e();
      }
      uVar1 = param_1[2];
      if (param_1[3] < uVar1) {
        FUN_00984d5e();
      }
      if (*param_1 <= ((int)((int)param_2 - uVar1) >> 2) * 0x20 + param_3) {
        FUN_00984d5e();
      }
      *param_2 = *param_2 | 1 << ((byte)param_3 & 0x1f);
    }
    uVar1 = param_1[2];
    if (param_1[3] < uVar1) {
      FUN_00984d5e();
    }
    if (*param_1 < ((int)((int)param_2 - uVar1) >> 2) * 0x20 + 1 + param_3) {
      FUN_00984d5e();
    }
    if (param_3 < 0x1f) {
      param_3 = param_3 + 1;
    }
    else {
      param_3 = 0;
      param_2 = param_2 + 1;
    }
  }
  return;
}



void FUN_007a8d90(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 == 0) || ((int)(*(uint *)(in_ECX + 8) - uVar1) >> 3 == 0)) {
    iVar2 = 0;
  }
  else {
    if (*(uint *)(in_ECX + 8) < uVar1) {
      FUN_00984d5e();
    }
    if ((param_2 == 0) || (param_2 != in_ECX)) {
      FUN_00984d5e();
    }
    iVar2 = (int)(param_3 - uVar1) >> 3;
  }
  FUN_007a8a40(param_2,param_3,1,param_4);
  uVar1 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar1) {
    FUN_00984d5e();
  }
  uVar1 = uVar1 + iVar2 * 8;
  if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
    FUN_00984d5e();
  }
  param_1[1] = uVar1;
  *param_1 = in_ECX;
  return;
}



void FUN_007a8e20(uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  uint uVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (param_1 != 0) {
    if (0x3fffffff < param_1) {
      FUN_00790b90();
    }
    puVar1 = (undefined4 *)FUN_0078fb60(param_1,0);
    *(undefined4 **)(in_ECX + 0xc) = puVar1 + param_1;
    *(undefined4 **)(in_ECX + 4) = puVar1;
    *(undefined4 **)(in_ECX + 8) = puVar1;
    puVar3 = puVar1;
    for (uVar2 = param_1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *param_2;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 **)(in_ECX + 8) = puVar1 + param_1;
  }
  return;
}



void FUN_007a8e90(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  if (param_4 == 0) {
    FUN_00984d5e(0,param_5,param_6,param_7);
  }
  if (param_1 == 0) {
    FUN_00984d5e(0,param_2,param_3,param_4);
  }
  FUN_007a8ca0(param_1);
  return;
}



void FUN_007a8f00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = param_2;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 0x14) = param_3;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = param_4;
  *(undefined4 *)(in_ECX + 0x18) = param_1;
  return;
}



void FUN_007a8f30(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint local_8 [2];
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)(in_ECX + 8) - uVar1) >> 3) <
      (uint)((int)(*(int *)(in_ECX + 0xc) - uVar1) >> 3))) {
    iVar2 = *(int *)(in_ECX + 8);
    local_8[0] = local_8[0] & 0xffffff00;
    FUN_007a8720(iVar2,1,param_1);
    *(int *)(in_ECX + 8) = iVar2 + 8;
    return;
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (uVar3 < uVar1) {
    FUN_00984d5e();
  }
  FUN_007a8d90(local_8,in_ECX,uVar3,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_007a8fc0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  int in_ECX;
  int iVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  int local_60 [2];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ccf07;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffff90;
  *unaff_FS_OFFSET = (int)&local_c;
  local_60[1] = 0;
  if ((_DAT_00b42ca4 & 1) == 0) {
    _DAT_00b42ca4 = _DAT_00b42ca4 | 1;
    local_4 = 1;
    FUN_0078eaf0(uVar6);
    _atexit(FUN_00a27070);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_60[1] = 1;
  piVar10 = *(int **)(in_ECX + 4);
  local_4 = 0;
  if (*(int **)(in_ECX + 8) < piVar10) {
    FUN_00984d5e();
  }
  while( true ) {
    piVar4 = *(int **)(in_ECX + 8);
    if (piVar4 < *(int **)(in_ECX + 4)) {
      FUN_00984d5e();
    }
    if (piVar10 == piVar4) break;
    fVar11 = (float10)FUN_0078ea00(0,0x3f800000);
    if ((float10)*(float *)(in_ECX + 0x14) < fVar11) {
      if (*(int **)(in_ECX + 8) <= piVar10) {
        FUN_00984d5e();
      }
      local_60[0] = FUN_007a7e50();
      if (*(int **)(in_ECX + 8) <= piVar10) {
        FUN_00984d5e();
      }
      iVar9 = piVar10[1];
      if (*(int **)(in_ECX + 8) <= piVar10) {
        FUN_00984d5e();
      }
      iVar5 = *piVar10;
      local_48 = *(float *)(iVar9 + 4) + *(float *)(iVar5 + 4);
      local_44 = *(float *)(iVar9 + 8) + *(float *)(iVar5 + 8);
      local_40 = *(float *)(iVar9 + 0xc) + *(float *)(iVar5 + 0xc);
      local_54 = local_48 * 0.5;
      local_50 = local_44 * 0.5;
      local_4c = local_40 * 0.5;
      if (*(int **)(in_ECX + 8) <= piVar10) {
        FUN_00984d5e();
      }
      iVar9 = *(int *)(in_ECX + 0x18);
      uVar6 = (uint)(*(byte *)(*piVar10 + 0x40) >> 1);
      if ((*(int *)(iVar9 + 0x14) == 0) ||
         ((uint)((*(int *)(iVar9 + 0x18) - *(int *)(iVar9 + 0x14)) / 0x54) <= uVar6)) {
        FUN_00984d5e();
      }
      iVar9 = uVar6 * 0x54 + *(int *)(iVar9 + 0x14);
      fVar1 = *(float *)(iVar9 + 0x4c);
      fVar2 = *(float *)(in_ECX + 0x1c);
      fVar3 = *(float *)(iVar9 + 0x34);
      *(float *)(local_60[0] + 4) = local_54;
      *(float *)(local_60[0] + 8) = local_50;
      local_58 = fVar1 * fVar2 * 0.5 * (fVar3 - 0.5);
      local_4c = local_58 + local_4c;
      *(float *)(local_60[0] + 0xc) = local_4c;
      if (*(int **)(in_ECX + 8) <= piVar10) {
        FUN_00984d5e();
        if (*(int **)(in_ECX + 8) <= piVar10) {
          FUN_00984d5e();
        }
      }
      pfVar7 = (float *)FUN_007a7ec0(local_24);
      pfVar8 = (float *)FUN_007a7ec0(local_18);
      local_3c = *pfVar8 + *pfVar7;
      local_38 = pfVar7[1] + pfVar8[1];
      local_34 = pfVar7[2] + pfVar8[2];
      local_30 = local_3c * 0.5;
      local_2c = local_38 * 0.5;
      local_28 = local_34 * 0.5;
      FUN_007a7f10(&local_30,0);
      FUN_00791770(local_60);
    }
    if (*(int **)(in_ECX + 8) <= piVar10) {
      FUN_00984d5e();
    }
    piVar10 = piVar10 + 2;
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_007a9240(undefined4 param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint **ppuVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int *unaff_FS_OFFSET;
  uint *local_b0;
  uint *local_ac;
  uint local_a8;
  uint *local_a4;
  uint *local_a0;
  uint local_9c;
  int **ppiStack_98;
  uint uStack_94;
  undefined1 local_7d;
  undefined1 *local_7c;
  int local_78;
  int local_74;
  int *local_70;
  float local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  int *local_60;
  int *local_58;
  int local_54;
  int local_50;
  undefined1 *local_4c;
  int *local_48;
  uint *local_44;
  uint *local_40;
  int local_3c;
  uint *local_38;
  uint *local_34;
  int local_30;
  uint *local_2c;
  uint *local_28;
  int local_24;
  uint local_20 [2];
  uint *local_18;
  uint *local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar12 = param_3;
  piVar11 = param_2;
  puStack_8 = &LAB_009ccf48;
  local_c = *unaff_FS_OFFSET;
  uStack_94 = DAT_00b30aac ^ (uint)&stack0xffffff70;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (param_2 == (int *)0x0) {
    iVar13 = 0;
  }
  else {
    iVar13 = (int)param_3 - (int)param_2 >> 2;
  }
  local_20[0] = 0;
  local_70 = (int *)0x0;
  ppiStack_98 = &local_70;
  local_9c = iVar13 + 0x1fU >> 5;
  local_a0 = (uint *)0x7a92b4;
  FUN_007a8e20();
  local_4._0_1_ = 1;
  local_9c = 0x7a92c6;
  ppiStack_98 = (int **)iVar13;
  FUN_007a8980();
  puVar8 = local_18;
  ppiStack_98 = (int **)&local_7d;
  local_68 = (undefined1 *)&local_a4;
  local_4 = CONCAT31(local_4._1_3_,2);
  local_7d = 0;
  ppuVar10 = &local_a4;
  if (local_14 < local_18) {
    local_a8 = 0x7a92f5;
    FUN_00984d5e();
    ppuVar10 = (uint **)local_68;
  }
  local_68 = (undefined1 *)ppuVar10;
  local_a4 = local_20;
  local_a0 = puVar8;
  local_9c = 0;
  if (local_20[0] != 0) {
    local_a8 = local_20[0];
    local_ac = (uint *)0x7a9321;
    FUN_007a8800();
  }
  puVar8 = local_18;
  local_68 = (undefined1 *)&local_b0;
  ppuVar10 = &local_b0;
  if (local_14 < local_18) {
    FUN_00984d5e();
    ppuVar10 = (uint **)local_68;
  }
  local_68 = (undefined1 *)ppuVar10;
  local_b0 = local_20;
  local_ac = puVar8;
  local_a8 = 0;
  FUN_007a8e90();
  piVar14 = piVar11;
  if (piVar12 < piVar11) {
    ppiStack_98 = (int **)0x7a9369;
    FUN_00984d5e();
  }
  do {
    local_58 = piVar14;
    if (piVar12 < piVar11) {
      ppiStack_98 = (int **)0x7a9379;
      FUN_00984d5e();
    }
    if (piVar14 == piVar12) {
      local_20[0] = 0;
      if (local_18 != (uint *)0x0) {
        ppiStack_98 = (int **)local_18;
        local_9c = 0x7a9702;
        FUN_00401f20();
      }
      local_18 = (uint *)0x0;
      local_14 = (uint *)0x0;
      local_10 = 0;
      if (piVar11 != (int *)0x0) {
        local_9c = 0x7a9721;
        ppiStack_98 = (int **)piVar11;
        FUN_00401f20();
      }
      *unaff_FS_OFFSET = local_c;
      return;
    }
    if (piVar12 <= piVar14) {
      ppiStack_98 = (int **)0x7a9388;
      FUN_00984d5e();
    }
    local_54 = *piVar14;
    local_7c = (undefined1 *)0x7f7fffff;
    local_50 = 0;
    local_78 = -1;
    if (piVar12 < piVar11) {
      ppiStack_98 = (int **)0x7a93b1;
      FUN_00984d5e();
    }
    local_4c = (undefined1 *)&param_1;
    iVar13 = (int)piVar14 - (int)piVar11 >> 2;
    local_70 = piVar14 + 1;
    local_48 = piVar14;
    if ((piVar12 < local_70) || (local_70 < piVar11)) {
      ppiStack_98 = (int **)0x7a93de;
      FUN_00984d5e();
    }
    local_64 = local_4c;
    local_60 = local_70;
    while( true ) {
      iVar13 = iVar13 + 1;
      if (piVar12 < piVar11) {
        ppiStack_98 = (int **)0x7a93f9;
        FUN_00984d5e();
      }
      if ((local_64 == (undefined1 *)0x0) || ((undefined4 *)local_64 != &param_1)) {
        ppiStack_98 = (int **)0x7a9411;
        FUN_00984d5e();
      }
      puVar8 = local_18;
      piVar15 = piVar14;
      if (local_60 == piVar12) break;
      if (local_14 < local_18) {
        ppiStack_98 = (int **)0x7a942d;
        FUN_00984d5e();
      }
      local_38 = local_20;
      local_34 = puVar8;
      local_30 = 0;
      local_9c = 0x7a944b;
      ppiStack_98 = (int **)iVar13;
      FUN_007a8800();
      puVar9 = local_34;
      puVar8 = local_38;
      if (local_38 == (uint *)0x0) {
        ppiStack_98 = (int **)0x7a945c;
        FUN_00984d5e();
        ppiStack_98 = (int **)0x7a9461;
        FUN_00984d5e();
LAB_007a9467:
        ppiStack_98 = (int **)0x7a946c;
        FUN_00984d5e();
      }
      else if (local_34 == (uint *)0x0) goto LAB_007a9467;
      uVar1 = puVar8[2];
      if (puVar8[3] < uVar1) {
        ppiStack_98 = (int **)0x7a9479;
        FUN_00984d5e();
      }
      iVar2 = local_30;
      if (*puVar8 <= (uint)(((int)((int)puVar9 - uVar1) >> 2) * 0x20 + local_30)) {
        ppiStack_98 = (int **)0x7a9492;
        FUN_00984d5e();
      }
      puVar8 = local_18;
      piVar11 = param_2;
      piVar12 = param_3;
      piVar15 = local_58;
      if ((*puVar9 & 1 << ((byte)iVar2 & 0x1f)) != 0) break;
      if (local_14 < local_18) {
        ppiStack_98 = (int **)0x7a94b6;
        FUN_00984d5e();
      }
      local_2c = local_20;
      local_28 = puVar8;
      local_24 = 0;
      local_9c = 0x7a94d4;
      ppiStack_98 = (int **)iVar13;
      FUN_007a8800();
      puVar9 = local_28;
      puVar8 = local_2c;
      if (local_2c == (uint *)0x0) {
        ppiStack_98 = (int **)0x7a94e5;
        FUN_00984d5e();
        ppiStack_98 = (int **)0x7a94ea;
        FUN_00984d5e();
LAB_007a94f0:
        ppiStack_98 = (int **)0x7a94f5;
        FUN_00984d5e();
      }
      else if (local_28 == (uint *)0x0) goto LAB_007a94f0;
      uVar1 = puVar8[2];
      if (puVar8[3] < uVar1) {
        ppiStack_98 = (int **)0x7a9502;
        FUN_00984d5e();
      }
      iVar2 = local_24;
      if (*puVar8 <= (uint)(((int)((int)puVar9 - uVar1) >> 2) * 0x20 + local_24)) {
        ppiStack_98 = (int **)0x7a951b;
        FUN_00984d5e();
      }
      puVar7 = local_64;
      piVar11 = local_60;
      if ((*puVar9 & 1 << ((byte)iVar2 & 0x1f)) == 0) {
        if (local_64 == (undefined1 *)0x0) {
          ppiStack_98 = (int **)0x7a9539;
          FUN_00984d5e();
        }
        piVar11 = local_60;
        if (*(int **)(puVar7 + 8) <= local_60) {
          ppiStack_98 = (int **)0x7a9547;
          FUN_00984d5e();
        }
        piVar12 = local_58;
        iVar2 = *piVar11;
        if (param_3 <= local_58) {
          ppiStack_98 = (int **)0x7a955e;
          FUN_00984d5e();
        }
        iVar3 = *piVar12;
        fVar4 = *(float *)(iVar2 + 8) - *(float *)(iVar3 + 8);
        fVar6 = *(float *)(iVar2 + 4) - *(float *)(iVar3 + 4);
        fVar5 = *(float *)(iVar2 + 0xc) - *(float *)(iVar3 + 0xc);
        local_6c = fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4;
        local_68 = (undefined1 *)(((int)local_6c >> 1) + 0x1fc00000);
        if (((float)local_68 < *(float *)(local_74 + 0x10)) && ((float)local_68 < (float)local_7c))
        {
          local_7c = local_68;
          if (*(int **)(local_64 + 8) <= piVar11) {
            ppiStack_98 = (int **)0x7a95ca;
            FUN_00984d5e();
          }
          local_50 = *piVar11;
          local_78 = iVar13;
        }
      }
      puVar7 = local_64;
      if (local_64 == (undefined1 *)0x0) {
        ppiStack_98 = (int **)0x7a95ee;
        FUN_00984d5e();
      }
      if (*(int **)(puVar7 + 8) <= piVar11) {
        ppiStack_98 = (int **)0x7a95f8;
        FUN_00984d5e();
      }
      local_60 = piVar11 + 1;
      piVar11 = param_2;
      piVar12 = param_3;
      piVar14 = local_58;
    }
    puVar8 = local_18;
    if (local_50 != 0) {
      if (local_14 < local_18) {
        ppiStack_98 = (int **)0x7a9645;
        FUN_00984d5e();
      }
      local_44 = local_20;
      ppiStack_98 = (int **)local_78;
      local_40 = puVar8;
      local_3c = 0;
      local_9c = 0x7a9667;
      FUN_007a8800();
      puVar9 = local_40;
      puVar8 = local_44;
      if (local_44 == (uint *)0x0) {
        ppiStack_98 = (int **)0x7a9678;
        FUN_00984d5e();
        ppiStack_98 = (int **)0x7a967d;
        FUN_00984d5e();
LAB_007a9683:
        ppiStack_98 = (int **)0x7a9688;
        FUN_00984d5e();
      }
      else if (local_40 == (uint *)0x0) goto LAB_007a9683;
      local_6c = (float)puVar8[2];
      if (puVar8[3] < (uint)local_6c) {
        ppiStack_98 = (int **)0x7a9699;
        FUN_00984d5e();
      }
      if (*puVar8 <= (uint)(((int)puVar9 - (int)local_6c >> 2) * 0x20 + local_3c)) {
        ppiStack_98 = (int **)0x7a96b4;
        FUN_00984d5e();
      }
      ppiStack_98 = (int **)&local_54;
      *puVar9 = *puVar9 | 1 << ((byte)local_3c & 0x1f);
      local_9c = 0x7a96cf;
      FUN_007a8f30();
      piVar11 = param_2;
    }
    piVar14 = local_70;
    if (piVar12 <= piVar15) {
      ppiStack_98 = (int **)0x7a96df;
      FUN_00984d5e();
      piVar14 = local_70;
    }
  } while( true );
}



int FUN_007a9740(int param_1,undefined4 param_2,int param_3)

{
  int *unaff_FS_OFFSET;
  int local_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ccf99;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_007a3580(&param_2);
  FUN_007a9240();
  FUN_007a8fc0();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0079b2f0();
  if (local_18 != 0) {
    FUN_00401f20();
  }
  if (param_3 != 0) {
    FUN_00401f20();
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_007a9820(undefined4 *param_1,ushort param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  
  uVar1 = DAT_00b3f928;
  DAT_00b42e90 = (uint)param_2;
  DAT_00b42eb8 = param_1;
  piVar2 = (int *)FUN_00707530(4);
  if (((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x54))(), 0 < iVar3)) &&
     (iVar3 = (**(code **)(*piVar2 + 0x54))(), iVar3 < 0xb)) {
    iVar3 = piVar2[0x25];
    if (((param_2 < 6) || (9 < param_2)) && ((param_2 != 0x154 && (param_2 != 0x155)))) {
      FUN_007ecb20();
    }
    bVar4 = 0;
    if (*(char *)(param_1 + 2) != '\0') {
      do {
        FUN_007ee390((uint)bVar4,*(undefined4 *)(param_1[3] + (uint)bVar4 * 4),iVar3);
        bVar4 = bVar4 + 1;
      } while (bVar4 < *(byte *)(param_1 + 2));
    }
  }
  (**(code **)(*(int *)*param_1 + 0x84))(uVar1);
  return;
}



/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_007a98e0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int local_40 [14];
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ccfcb;
  local_40[0xd] = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)local_40;
  *unaff_FS_OFFSET = (int)(local_40 + 0xd);
  local_40[1] = 0xbf800000;
  local_40[2] = 0xbf800000;
  local_40[3] = 0x3dcccccd;
  local_40[4] = 0x3f800000;
  local_40[7] = 0x3f800000;
  local_40[8] = 0x3f800000;
  local_40[0xb] = 0x3f800000;
  local_40[5] = 0xbf800000;
  local_40[10] = 0xbf800000;
  local_40[6] = 0x3dcccccd;
  local_40[9] = 0x3dcccccd;
  local_40[0xc] = 0x3dcccccd;
  local_40[0] = FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  if (local_40[0] != 0) {
    uVar2 = FUN_00738dc0(4,local_40 + 1,0,0);
    *unaff_FS_OFFSET = local_40[0xd];
    return uVar2;
  }
  *unaff_FS_OFFSET = local_40[0xd];
  return 0;
}



void FUN_007a99a0(void)

{
  DAT_00b42cd0 = 0;
  DAT_00b42cb8 = 0;
  DAT_00b42cc4 = 0;
  DAT_00b42cbc = 0;
  DAT_00b42cb4 = 0;
  DAT_00b42cb0 = 0;
  if (DAT_00b42cdb == '\0') {
    DAT_00b42ccc = 0;
    DAT_00b42cc8 = 0;
    DAT_00b42ca8 = 0;
    DAT_00b42cc0 = 0;
    DAT_00b42cac = 0;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x007a9a39) */

void FUN_007a99f0(uint param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  
  if ((param_1 < 3) &&
     (iVar1 = in_ECX + param_1 * 0x14, *(char *)(in_ECX + 0xcc + param_1 * 0x14) != '\0')) {
    piVar2 = (int *)(in_ECX + (param_1 * 5 + 0x32) * 4);
    piVar3 = (int *)*piVar2;
    if (piVar3 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar3 + 0x1c))(piVar3,&param_1,4);
      if (iVar4 == 0) {
        *(undefined4 *)(iVar1 + 0xd0) = 0;
        *(undefined4 *)(iVar1 + 0xd4) = 1;
        *(undefined1 *)(iVar1 + 0xcc) = 0;
        return;
      }
      if (iVar4 != 1) {
        (**(code **)(*(int *)*piVar2 + 8))((int *)*piVar2);
        *piVar2 = 0;
        *(undefined1 *)(iVar1 + 0xcc) = 0;
      }
    }
  }
  return;
}



void FUN_007a9ac0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a8cb28;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}



void FUN_007a9ae0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a8cb28;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a9c30(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  puVar2 = *(undefined4 **)(in_ECX + 0xc);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b33f00);
    _DAT_00b33f78 = GetCurrentThreadId();
    _DAT_00b33f7c = _DAT_00b33f7c + 1;
    puVar2[1] = 0;
    *puVar2 = DAT_00b33eac;
    _DAT_00b33f7c = _DAT_00b33f7c + -1;
    if (_DAT_00b33f7c == 0) {
      _DAT_00b33f78 = 0;
    }
    DAT_00b33eac = puVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b33f00);
    puVar2 = puVar1;
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (*(undefined4 **)(in_ECX + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(in_ECX + 8) = 0;
  }
  return;
}



undefined4 FUN_007a9cc0(void)

{
  int iVar1;
  
  iVar1 = FUN_007b4290(1);
  return *(undefined4 *)(iVar1 + 4);
}



void FUN_007a9cd0(undefined4 param_1)

{
  FUN_007b4290(9);
  FUN_007fa470(param_1);
  return;
}



void FUN_007a9cf0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  undefined1 local_4 [4];
  
  iVar3 = 0;
  if (*(short *)(in_ECX + 0x21e6) != 0) {
    do {
      if (*(int *)(*(int *)(in_ECX + 0x21e8) + iVar3 * 4) != 0) {
        piVar4 = *(int **)(*(int *)(in_ECX + 0x21e8) + iVar3 * 4);
        (**(code **)(*piVar4 + 0x1c))(piVar4,local_4,4,1);
        piVar4 = *(int **)(*(int *)(in_ECX + 0x21e8) + iVar3 * 4);
        (**(code **)(*piVar4 + 8))(piVar4);
        *(undefined4 *)(*(int *)(in_ECX + 0x21e8) + iVar3 * 4) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(ushort *)(in_ECX + 0x21e6));
  }
  piVar4 = (int *)(in_ECX + 200);
  iVar3 = 3;
  do {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))(piVar1,local_4,4,1);
      (**(code **)(*(int *)*piVar4 + 8))((int *)*piVar4);
      *piVar4 = 0;
      *(undefined1 *)(piVar4 + 1) = 0;
    }
    piVar4 = piVar4 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = *(int *)(in_ECX + 0x2238);
  puVar2 = *(undefined4 **)(in_ECX + 0x2230);
  *(undefined1 *)(in_ECX + 0xc0) = 0;
  while (iVar3 != 0) {
    iVar3 = puVar2[2];
    puVar2 = (undefined4 *)*puVar2;
    if ((iVar3 != 0) && (piVar4 = *(int **)(iVar3 + 0x14), piVar4 != (int *)0x0)) {
      (**(code **)(*piVar4 + 0x1c))(piVar4,local_4,4,1);
      (**(code **)(**(int **)(iVar3 + 0x14) + 8))(*(int **)(iVar3 + 0x14));
      *(undefined4 *)(iVar3 + 0x14) = 0;
    }
    iVar3 = *(int *)(in_ECX + 0x2238);
  }
  *(undefined2 *)(in_ECX + 0x21e4) = 0;
  *(undefined2 *)(in_ECX + 0x21e6) = 0;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x21e8));
  *(undefined4 *)(in_ECX + 0x21e8) = 0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_007a9e10(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  int *unaff_EBX;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  int *local_324;
  int *local_320;
  int local_31c;
  int local_318;
  char acStack_310 [256];
  char local_210 [248];
  char acStack_118 [260];
  int iStack_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cd036;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_324;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffccc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_324 = (int *)FUN_00401f00(0xdc,uVar3);
  local_4 = 0;
  if (local_324 == (int *)0x0) {
    local_320 = (int *)0x0;
  }
  else {
    local_320 = (int *)FUN_0070b780(0);
  }
  piVar6 = local_320;
  local_4 = 0xffffffff;
  FUN_006ff420("RenderPasses");
  piVar7 = (int *)(in_ECX + 0x114);
  local_31c = 0;
  do {
    if (*piVar7 != 0) {
      local_324 = piVar7;
      local_318 = FUN_00401f00(0xdc,uVar3);
      local_4 = 1;
      if (local_318 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_0070b780(0);
      }
      iVar1 = *piVar7;
      local_4 = 0xffffffff;
      uVar5 = FUN_007b4920(local_31c);
      _sprintf(local_210,"%i : %s",iVar1,uVar5);
      FUN_006ff420(local_210);
      (**(code **)(*piVar6 + 0x84))(piVar4,1);
      puVar2 = (undefined4 *)piVar7[-3];
      while (puVar2 != (undefined4 *)0x0) {
        piVar6 = (int *)puVar2[2];
        puVar2 = (undefined4 *)*puVar2;
        local_318 = FUN_00401f00(0xdc);
        local_4 = 2;
        if (local_318 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_0070b780(0);
        }
        local_4 = 0xffffffff;
        _sprintf(acStack_310,"%x : %s",*piVar6,*(undefined4 *)(*piVar6 + 8));
        FUN_006ff420(acStack_310);
        (**(code **)(*piVar4 + 0x84))(uVar5,1);
        piVar6 = local_320;
        piVar7 = local_324;
      }
    }
    local_31c = local_31c + 1;
    piVar7 = piVar7 + 5;
  } while (local_31c < 0x1a3);
  local_324 = piVar7;
  local_318 = FUN_00401f00(0xdc);
  local_4 = 3;
  if (local_318 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_0070b780(0);
  }
  local_4 = 0xffffffff;
  FUN_006ff420("Occluded Geometry");
  (**(code **)(*piVar6 + 0x84))(piVar7,0);
  uVar3 = 0;
  if (DAT_00b42cb8 != 0) {
    do {
      puVar2 = *(undefined4 **)(local_31c + 0x21f0);
      while (puVar2 != (undefined4 *)0x0) {
        iVar1 = puVar2[2];
        puVar2 = (undefined4 *)*puVar2;
        local_320 = (int *)FUN_00401f00(0xdc);
        local_c = 4;
        if (local_320 == (int *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_0070b780(0);
        }
        local_c = -1;
        _sprintf(acStack_118,"%x : %s",iVar1,*(undefined4 *)(iVar1 + 8));
        FUN_006ff420(acStack_118);
        (**(code **)(*piVar7 + 0x84))(uVar5,1);
        piVar6 = unaff_EBX;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < DAT_00b42cb8);
  }
  FUN_00707370(0,1);
  *unaff_FS_OFFSET = iStack_14;
  return piVar6;
}



void FUN_007aa130(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cd078;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((*(char *)(in_ECX + 0xc0) == '\0') && (param_2 < 3)) &&
     (iVar1 = in_ECX + param_2 * 0x14, *(char *)(in_ECX + 0xcc + param_2 * 0x14) == '\0')) {
    iVar4 = param_2 * 5 + 0x32;
    piVar2 = (int *)(in_ECX + iVar4 * 4);
    if (*(int *)(in_ECX + iVar4 * 4) == 0) {
      (**(code **)(**(int **)(DAT_00b43104 + 0x280) + 0x1d8))
                (*(int **)(DAT_00b43104 + 0x280),9,piVar2,uVar3);
      if (*piVar2 == 0) {
        *(undefined1 *)(iVar1 + 0xcc) = 0;
        *(undefined4 *)(iVar1 + 0xd0) = 0;
        *(undefined4 *)(iVar1 + 0xd8) = 0;
        goto LAB_007aa260;
      }
    }
    iVar4 = FUN_007b4290(1);
    iVar4 = *(int *)(iVar4 + 4);
    FUN_007d1320(3,0);
    (**(code **)(**(int **)(iVar4 + 0x30) + 0x48))();
    (**(code **)(**(int **)(iVar4 + 0x2c) + 0x48))();
    (**(code **)(*(int *)*piVar2 + 0x18))((int *)*piVar2,2);
    FUN_007e2370(&stack0xffffffdc,uStack_4,3,1,0,0);
    local_c = 0;
    FUN_007a9820(&stack0xffffffdc,3);
    (**(code **)(*(int *)*piVar2 + 0x18))((int *)*piVar2,1);
    *(undefined1 *)(iVar1 + 0xcc) = 1;
    *(undefined4 *)(iVar1 + 0xd8) = 0;
    uStack_4 = 0xffffffff;
    FUN_007e2400();
  }
LAB_007aa260:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007aa280(void)

{
  bool bVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  uint *puVar4;
  float local_8;
  uint local_4;
  
  local_8 = 0.0;
  iVar2 = 0;
  local_4 = 0x7fffffff;
  bVar1 = true;
  iVar3 = 0;
  puVar4 = (uint *)(in_ECX + 0xd4);
  do {
    if ((char)puVar4[-2] != '\0') {
      FUN_007a99f0(iVar3);
      if ((char)puVar4[-2] != '\0') {
        puVar4[1] = puVar4[1] + 1;
        *(undefined1 *)(in_ECX + 0xc0) = 1;
        bVar1 = false;
      }
    }
    if ((0.0 < (float)puVar4[-1]) || (*puVar4 != 0)) {
      if (*puVar4 < local_4) {
        local_4 = *puVar4;
      }
      if (local_8 < (float)puVar4[-1]) {
        local_8 = (float)puVar4[-1];
      }
    }
    iVar2 = iVar2 + puVar4[1];
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 5;
  } while (iVar3 < 3);
  if (bVar1) {
    *(float *)(in_ECX + 0xc4) = local_8;
    *(undefined1 *)(in_ECX + 0xc0) = 0;
    if (local_4 < 10) {
      *(undefined4 *)(in_ECX + 0xc4) = 0x3f800000;
    }
    *(uint *)(in_ECX + 0xbc) = local_4;
    DAT_00b42cc0 = iVar2;
    *(undefined4 *)(in_ECX + 0xd0) = 0;
    *(undefined4 *)(in_ECX + 0xe4) = 0;
    *(undefined4 *)(in_ECX + 0xf8) = 0;
    *(undefined4 *)(in_ECX + 0xd4) = 0;
    *(undefined4 *)(in_ECX + 0xe8) = 0;
    *(undefined4 *)(in_ECX + 0xfc) = 0;
    return;
  }
  return;
}



bool FUN_007aa380(void)

{
  int in_ECX;
  
  return 0 < *(int *)(in_ECX + 0x5c);
}



undefined1 FUN_007aa3c0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  if (param_1 == *(int *)(in_ECX + 0x223c)) {
    return *(undefined1 *)(in_ECX + 0x2240);
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x2230);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
  } while ((iVar2 == 0) || (*(int *)(iVar2 + 0x10) != param_1));
  if (*(char *)(iVar2 + 0x19) != '\0') {
    if ((char)param_2 != '\0') {
      if ((DAT_00b42cde == '\0') || (*(int *)(iVar2 + 0x14) == 0)) {
        if (DAT_00b42cdf != '\0') goto LAB_007aa473;
      }
      else {
        do {
          iVar3 = (**(code **)(**(int **)(iVar2 + 0x14) + 0x1c))
                            (*(int **)(iVar2 + 0x14),&param_2,4,1);
          DAT_00b42cac = DAT_00b42cac + 1;
        } while (iVar3 == 1);
        if (iVar3 == 0) {
          *(bool *)(iVar2 + 0x18) = param_2 == 0;
          *(int *)(iVar2 + 0x1c) = param_2;
        }
        else {
          (**(code **)(**(int **)(iVar2 + 0x14) + 8))(*(int **)(iVar2 + 0x14));
          *(undefined4 *)(iVar2 + 0x14) = 0;
LAB_007aa473:
          *(undefined4 *)(iVar2 + 0x1c) = 999999;
          *(undefined1 *)(iVar2 + 0x18) = 0;
        }
      }
      *(undefined1 *)(iVar2 + 0x19) = 0;
    }
    if (*(char *)(iVar2 + 0x19) != '\0') goto LAB_007aa494;
  }
  *(int *)(in_ECX + 0x223c) = param_1;
  *(undefined1 *)(in_ECX + 0x2240) = *(undefined1 *)(iVar2 + 0x18);
LAB_007aa494:
  return *(undefined1 *)(iVar2 + 0x18);
}



undefined4 FUN_007aa4a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x2230);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
  } while ((iVar2 == 0) || (*(int *)(iVar2 + 0x10) != param_1));
  return *(undefined4 *)(iVar2 + 0x1c);
}



void FUN_007aa4d0(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2238) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x2230) + 8);
      if (iVar1 != 0) {
        piVar2 = *(int **)(iVar1 + 0x14);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          *(undefined4 *)(iVar1 + 0x14) = 0;
        }
        FUN_00401f20(iVar1);
      }
      piVar2 = *(int **)(in_ECX + 0x2230);
      iVar1 = *piVar2;
      *(int *)(in_ECX + 0x2230) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(in_ECX + 0x2234) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      (**(code **)(*(int *)(in_ECX + 0x222c) + 8))(piVar2);
      *(int *)(in_ECX + 0x2238) = *(int *)(in_ECX + 0x2238) + -1;
    } while (*(int *)(in_ECX + 0x2238) != 0);
  }
  return;
}



void FUN_007aa550(code *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *local_10;
  uint local_c;
  int local_8;
  
  FUN_007a9c30();
  if (*(int *)(in_ECX + 4) != 0) {
    local_c = 1;
    do {
      puVar8 = *(undefined4 **)(in_ECX + 4);
      puVar4 = (undefined4 *)0x0;
      *(undefined4 *)(in_ECX + 4) = 0;
      local_10 = (undefined4 *)0x0;
      local_8 = 0;
      if (puVar8 != (undefined4 *)0x0) {
LAB_007aa591:
        local_8 = local_8 + 1;
        iVar5 = 0;
        uVar1 = 0;
        uVar6 = local_c;
        puVar7 = puVar8;
        if (local_c != 0) {
          do {
            puVar7 = (undefined4 *)*puVar7;
            iVar5 = iVar5 + 1;
            if (puVar7 == (undefined4 *)0x0) break;
            uVar1 = uVar1 + 1;
          } while (uVar1 < local_c);
        }
        do {
          puVar3 = puVar7;
          puVar9 = puVar8;
          if (iVar5 < 1) {
            if (((int)uVar6 < 1) || (puVar7 == (undefined4 *)0x0)) goto LAB_007aa625;
            if (iVar5 != 0) goto LAB_007aa5cb;
            uVar6 = uVar6 - 1;
            puVar7 = (undefined4 *)*puVar7;
          }
          else {
LAB_007aa5cb:
            if (((uVar6 == 0) || (puVar7 == (undefined4 *)0x0)) ||
               (iVar2 = (*param_1)(puVar8 + 2,puVar7 + 2), puVar4 = local_10, iVar2 < 1)) {
              puVar9 = (undefined4 *)*puVar8;
              iVar5 = iVar5 + -1;
              puVar3 = puVar8;
            }
            else {
              uVar6 = uVar6 - 1;
              puVar7 = (undefined4 *)*puVar7;
            }
          }
          puVar8 = puVar9;
          local_10 = puVar3;
          if (puVar4 == (undefined4 *)0x0) {
            *(undefined4 **)(in_ECX + 4) = puVar3;
            puVar3[1] = 0;
            puVar4 = puVar3;
          }
          else {
            *puVar4 = puVar3;
            puVar3[1] = puVar4;
            puVar4 = puVar3;
          }
        } while( true );
      }
LAB_007aa633:
      local_c = local_c * 2;
      *puVar4 = 0;
    } while (local_8 != 1);
    *(undefined4 **)(in_ECX + 8) = puVar4;
  }
  return;
LAB_007aa625:
  puVar8 = puVar7;
  if (puVar7 == (undefined4 *)0x0) goto LAB_007aa633;
  goto LAB_007aa591;
}



void FUN_007aa660(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cd0a8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a8cba8;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a8cb30;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007aa6c0(void)

{
  int in_ECX;
  
  FUN_007a9c30();
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}



void FUN_007aa6e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cd0d8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a8cb88;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a8cb48;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007aa740(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cd108;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a8cb98;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a8cb58;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007aa7a0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cd138;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a8cbb8;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a8cb68;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007aa800(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cd168;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a8cbc8;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a8cb78;
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_007aa860(int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *in_ECX;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)in_ECX[1]) {
    *param_1 = *piVar1;
    piVar1 = (int *)in_ECX[1];
    iVar2 = *piVar1;
    in_ECX[1] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 4) = 0;
      iVar2 = piVar1[2];
      (**(code **)(*in_ECX + 8))(piVar1);
      in_ECX[3] = in_ECX[3] + -1;
      return iVar2;
    }
    pcVar3 = *(code **)(*in_ECX + 8);
    in_ECX[2] = 0;
    iVar2 = piVar1[2];
    (*pcVar3)(piVar1);
    in_ECX[3] = in_ECX[3] + -1;
    return iVar2;
  }
  if (piVar1 != (int *)in_ECX[2]) {
    piVar6 = (int *)piVar1[1];
    iVar2 = *piVar1;
    *param_1 = iVar2;
    if (piVar6 != (int *)0x0) {
      *piVar6 = iVar2;
    }
    if (iVar2 != 0) {
      *(int **)(iVar2 + 4) = piVar6;
    }
    iVar2 = piVar1[2];
    (**(code **)(*in_ECX + 8))(piVar1);
    in_ECX[3] = in_ECX[3] + -1;
    return iVar2;
  }
  *param_1 = 0;
  iVar2 = in_ECX[2];
  puVar4 = *(undefined4 **)(iVar2 + 4);
  in_ECX[2] = (int)puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    iVar5 = *(int *)(iVar2 + 8);
    (**(code **)(*in_ECX + 8))(iVar2);
    in_ECX[3] = in_ECX[3] + -1;
    return iVar5;
  }
  pcVar3 = *(code **)(*in_ECX + 8);
  in_ECX[1] = 0;
  iVar5 = *(int *)(iVar2 + 8);
  (*pcVar3)(iVar2);
  in_ECX[3] = in_ECX[3] + -1;
  return iVar5;
}



void FUN_007aa990(byte param_1)

{
  FUN_007aa6e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007aa9b0(byte param_1)

{
  FUN_007aa660();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007aa9d0(byte param_1)

{
  FUN_007aa800();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007aa9f0(byte param_1)

{
  FUN_007aa740();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007aaa10(byte param_1)

{
  FUN_007aa7a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



bool FUN_007aaa30(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  int *piVar6;
  uint uVar7;
  LONG LVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int in_ECX;
  int *unaff_FS_OFFSET;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int iStack_5c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cd1a3;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffff8c;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar1 = *(undefined4 *)(in_ECX + 8);
  local_1c = 0;
  local_18 = 0;
  *(int *)(in_ECX + 8) = param_1;
  piVar6 = DAT_00b3f928;
  local_14 = 0;
  local_10 = 0;
  puVar2 = (undefined4 *)DAT_00b3f928[2];
  bVar5 = false;
  bVar14 = false;
  if (puVar2 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar2 + 1);
  }
  puVar3 = (undefined4 *)piVar6[2];
  local_4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    LVar8 = InterlockedDecrement(puVar3 + 1);
    if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    piVar6[2] = 0;
  }
  iVar9 = FUN_00401f00(0x10,uVar7);
  local_4._0_1_ = 1;
  if (iVar9 == 0) {
    iStack_5c = 0;
  }
  else {
    iStack_5c = FUN_007e2370(iVar9,0,0,1,0,0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1 = FUN_00800b30(0);
  if ((param_1 != 0) && (*(int *)(in_ECX + 0x2224) != 0)) {
    piVar10 = (int *)FUN_007d6fe0();
    iVar9 = *piVar10;
    uVar11 = (**(code **)(*param_2 + 0x74))();
    (**(code **)(iVar9 + 0x6c))(uVar11);
    (**(code **)(*piVar6 + 0x68))(auStack_20);
    uStack_34 = 0x3f000000;
    uStack_30 = 0x3f000000;
    uStack_2c = 0;
    uStack_28 = 0;
    (**(code **)(*piVar6 + 0x60))(&uStack_34);
    bVar5 = true;
    FUN_007d72d0();
    if (1 < DAT_00b34fc0) {
      piVar10 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
      iVar9 = (**(code **)(*piVar10 + 0x84))();
      iVar12 = (**(code **)(*param_2 + 0x84))();
      (**(code **)(*(int *)DAT_00b3f928[0xa0] + 0x88))
                ((int *)DAT_00b3f928[0xa0],*(undefined4 *)(iVar9 + 0xc),0,
                 *(undefined4 *)(iVar12 + 0xc),0,0);
    }
    uVar11 = FUN_007d6fe0();
    FUN_007d7280(0,uVar11);
    iVar9 = *(int *)(in_ECX + 8);
    uStack_44 = *(undefined4 *)(iVar9 + 0x6c);
    uStack_40 = *(undefined4 *)(iVar9 + 0x78);
    uStack_3c = *(undefined4 *)(iVar9 + 0x84);
    uStack_38 = *(undefined4 *)(iVar9 + 0x68);
    uStack_34 = *(undefined4 *)(iVar9 + 0x74);
    uStack_30 = *(undefined4 *)(iVar9 + 0x80);
    uStack_2c = *(undefined4 *)(iVar9 + 100);
    uStack_28 = *(undefined4 *)(iVar9 + 0x70);
    uStack_24 = *(undefined4 *)(iVar9 + 0x7c);
    if (((piVar6[0x80] == 1) || (piVar6[0x81] == 1)) && ((char)piVar6[0x83] == '\x01')) {
      (**(code **)(*piVar6 + 0x140))
                (iVar9 + 0x88,&uStack_2c,&uStack_38,&uStack_44,iVar9 + 0xec,iVar9 + 0x110);
    }
    puVar3 = *(undefined4 **)(in_ECX + 0x2218);
joined_r0x007aac96:
    do {
      if (puVar3 == (undefined4 *)0x0) goto LAB_007aad7b;
      piVar10 = (int *)puVar3[2];
      piVar4 = (int *)piVar10[0x2f];
      puVar3 = (undefined4 *)*puVar3;
      if (piVar4 != (int *)0x0) {
        iVar9 = FUN_00707530(4);
        bVar14 = (*(byte *)(iVar9 + 0x1c) & 2) != 0;
        iVar9 = (**(code **)(*piVar4 + 0x1c))();
        if ((iVar9 < 1) || (iVar9 = (**(code **)(*piVar4 + 0x1c))(), 5 < iVar9)) {
          iVar9 = (**(code **)(*piVar4 + 0x1c))();
          if (iVar9 != 0x1b) goto joined_r0x007aac96;
          iVar9 = bVar14 + 0x159;
          FUN_007fd260(iVar9,0);
        }
        else {
          iVar9 = bVar14 + 0x163;
          FUN_007d1320(iVar9,0);
        }
        (**(code **)(*(int *)piVar4[0xc] + 0x48))();
        (**(code **)(*(int *)piVar4[0xb] + 0x48))();
        *(short *)(iStack_5c + 4) = (short)iVar9;
        DAT_00b42eb8 = iStack_5c;
        DAT_00b42e90 = iVar9;
        (**(code **)(*piVar10 + 0x84))(DAT_00b3f928);
      }
    } while( true );
  }
LAB_007aad8d:
  FUN_007a9c30();
  *(undefined4 *)(in_ECX + 0x2220) = *(undefined4 *)(in_ECX + 0x2218);
  *(undefined4 *)(in_ECX + 0x2218) = 0;
  *(undefined4 *)(in_ECX + 0x221c) = 0;
  *(undefined4 *)(in_ECX + 0x2224) = 0;
  iVar9 = *(int *)(in_ECX + 0x2210);
  if (iVar9 != 0) {
    if (!bVar14) {
      bVar15 = param_1 == 0;
      if (bVar15) {
        param_1 = FUN_00800b30(1);
      }
      piVar10 = (int *)FUN_007d6fe0();
      iVar12 = *piVar10;
      uVar11 = (**(code **)(*param_2 + 0x74))();
      (**(code **)(iVar12 + 0x6c))(uVar11);
      (**(code **)(*piVar6 + 0x68))(auStack_20);
      uStack_34 = 0x3f000000;
      uStack_30 = 0x3f000000;
      uStack_2c = 0;
      uStack_28 = 0;
      (**(code **)(*piVar6 + 0x60))(&uStack_34);
      bVar5 = true;
      FUN_007d72d0();
      if (1 < DAT_00b34fc0) {
        piVar10 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
        iVar12 = (**(code **)(*piVar10 + 0x84))();
        iVar13 = (**(code **)(*param_2 + 0x84))();
        (**(code **)(*(int *)DAT_00b3f928[0xa0] + 0x88))
                  ((int *)DAT_00b3f928[0xa0],*(undefined4 *)(iVar12 + 0xc),0,
                   *(undefined4 *)(iVar13 + 0xc),0,0);
      }
      uVar11 = FUN_007d6fe0();
      FUN_007d7280(bVar15,uVar11);
      iVar12 = *(int *)(in_ECX + 8);
      uStack_2c = *(undefined4 *)(iVar12 + 0x6c);
      uStack_28 = *(undefined4 *)(iVar12 + 0x78);
      uStack_24 = *(undefined4 *)(iVar12 + 0x84);
      uStack_38 = *(undefined4 *)(iVar12 + 0x68);
      uStack_34 = *(undefined4 *)(iVar12 + 0x74);
      uStack_30 = *(undefined4 *)(iVar12 + 0x80);
      uStack_44 = *(undefined4 *)(iVar12 + 100);
      uStack_40 = *(undefined4 *)(iVar12 + 0x70);
      uStack_3c = *(undefined4 *)(iVar12 + 0x7c);
      if (((piVar6[0x80] == 1) || (piVar6[0x81] == 1)) && ((char)piVar6[0x83] == '\x01')) {
        (**(code **)(*piVar6 + 0x140))
                  (iVar12 + 0x88,&uStack_44,&uStack_38,&uStack_2c,iVar12 + 0xec,iVar12 + 0x110);
      }
    }
    *(undefined1 *)(iStack_5c + 8) = 0;
    puVar3 = *(undefined4 **)(in_ECX + 0x2204);
joined_r0x007aaf71:
    do {
      if (puVar3 == (undefined4 *)0x0) goto LAB_007ab095;
      piVar10 = (int *)puVar3[2];
      piVar4 = (int *)piVar10[0x2f];
      puVar3 = (undefined4 *)*puVar3;
      if (piVar4 != (int *)0x0) {
        iVar12 = FUN_00707530(4);
        bVar15 = (*(uint *)(iVar12 + 0x1c) & 2) != 0;
        bVar16 = (*(uint *)(iVar12 + 0x1c) & 0x10000) == 0;
        iVar12 = (**(code **)(*piVar4 + 0x1c))();
        if ((iVar12 < 1) || (iVar12 = (**(code **)(*piVar4 + 0x1c))(), 5 < iVar12)) {
          iVar12 = (**(code **)(*piVar4 + 0x1c))();
          if (iVar12 != 0x1b) goto joined_r0x007aaf71;
          if (bVar16) {
            iVar12 = bVar15 + 0x156;
          }
          else {
            iVar12 = 0x158;
          }
          FUN_007fd260(iVar12,0);
        }
        else if (bVar16) {
          iVar12 = bVar15 + 0x160;
          FUN_007d1320(iVar12,0);
        }
        else {
          iVar12 = 0x162;
          FUN_007d1320(0x162,0);
        }
        (**(code **)(*(int *)piVar4[0xc] + 0x48))();
        (**(code **)(*(int *)piVar4[0xb] + 0x48))();
        *(short *)(iStack_5c + 4) = (short)iVar12;
        DAT_00b42eb8 = iStack_5c;
        DAT_00b42e90 = iVar12;
        (**(code **)(*piVar10 + 0x84))(DAT_00b3f928);
      }
    } while( true );
  }
LAB_007ab0e9:
  if ((bVar14) || (iVar9 != 0)) {
    FUN_007d72d0();
  }
  if (param_1 != 0) {
    piVar10 = (int *)FUN_007d6fe0();
    (**(code **)(*piVar10 + 0x6c))(0);
  }
  if (iStack_5c != 0) {
    FUN_007e2400();
    FUN_00401f20(iStack_5c);
  }
  puVar3 = (undefined4 *)piVar6[2];
  if (puVar3 != puVar2) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    piVar6[2] = (int)puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  if (bVar5) {
    (**(code **)(*piVar6 + 0x60))(&local_1c);
  }
  *(undefined4 *)(in_ECX + 8) = uVar1;
  local_4 = 0xffffffff;
  if ((puVar2 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar2 + 1), LVar8 == 0)) {
    (**(code **)*puVar2)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return iVar9 != 0;
LAB_007aad7b:
  bVar14 = true;
  goto LAB_007aad8d;
LAB_007ab095:
  FUN_007a9c30();
  *(undefined4 *)(in_ECX + 0x220c) = *(undefined4 *)(in_ECX + 0x2204);
  *(undefined4 *)(in_ECX + 0x2204) = 0;
  *(undefined4 *)(in_ECX + 0x2208) = 0;
  *(undefined4 *)(in_ECX + 0x2210) = 0;
  if (DAT_00b42cdc != '\0') {
    uVar11 = FUN_00405a30();
    FUN_007b4290(9);
    FUN_007fa470(uVar11);
  }
  goto LAB_007ab0e9;
}



void FUN_007ab1d0(char param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  LONG LVar10;
  int *piVar11;
  int *unaff_FS_OFFSET;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cd23d;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffa4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == '\0') {
    piVar11 = &DAT_00b42cf8;
    do {
      puVar9 = (undefined4 *)*piVar11;
      if (puVar9 != (undefined4 *)0x0) {
        LVar10 = InterlockedDecrement(puVar9 + 1);
        if ((LVar10 == 0) && (puVar9 != (undefined4 *)0x0)) {
          (**(code **)*puVar9)(1);
        }
        *piVar11 = 0;
      }
      piVar11 = piVar11 + 1;
    } while ((int)piVar11 < 0xb42d3c);
  }
  else {
    local_44 = (undefined4 *)FUN_00401f00(0x1c,uVar4);
    local_4 = 0;
    if (local_44 == (undefined4 *)0x0) {
      local_44 = (undefined4 *)0x0;
    }
    else {
      FUN_006ffd30();
      *local_44 = &PTR_FUN_00a2fd04;
      *(undefined2 *)(local_44 + 6) = 8;
    }
    if (local_44 != (undefined4 *)0x0) {
      InterlockedIncrement(local_44 + 1);
    }
    *(ushort *)(local_44 + 6) = *(ushort *)(local_44 + 6) & 0xffc7;
    local_4 = 1;
    local_48 = (undefined4 *)FUN_00401f00(0x1c,uVar4);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (local_48 == (undefined4 *)0x0) {
      local_48 = (undefined4 *)0x0;
    }
    else {
      FUN_006ffd30();
      *local_48 = &PTR_FUN_00a2fdb4;
      *(undefined2 *)(local_48 + 6) = 0xf;
    }
    if (local_48 != (undefined4 *)0x0) {
      InterlockedIncrement(local_48 + 1);
    }
    *(ushort *)(local_48 + 6) = *(ushort *)(local_48 + 6) & 0xfffe;
    *(ushort *)(local_48 + 6) = *(ushort *)(local_48 + 6) & 0xfffd;
    local_4._0_1_ = 3;
    local_4c = (undefined4 *)FUN_00401f00(0x1c);
    local_4 = CONCAT31(local_4._1_3_,4);
    if (local_4c == (undefined4 *)0x0) {
      local_4c = (undefined4 *)0x0;
    }
    else {
      FUN_006ffd30();
      *local_4c = &PTR_FUN_00a3d604;
      *(undefined2 *)(local_4c + 6) = 0xec;
      *(undefined1 *)((int)local_4c + 0x1a) = 0;
    }
    if (local_4c != (undefined4 *)0x0) {
      InterlockedIncrement(local_4c + 1);
    }
    *(ushort *)(local_4c + 6) = *(ushort *)(local_4c + 6) & 0xfffe;
    local_4._0_1_ = 5;
    _param_1 = 0;
    local_40 = &DAT_00b2de04;
    do {
      puVar9 = (undefined4 *)0x0;
      iVar5 = FUN_00401f00(0xc0);
      local_4._0_1_ = 6;
      uVar3 = (undefined1)local_4;
      local_4._0_1_ = 6;
      if (iVar5 == 0) {
        puVar7 = (undefined4 *)0x0;
        local_4._0_1_ = uVar3;
      }
      else {
        iVar5 = FUN_00401f00(0x70);
        local_4._0_1_ = 7;
        if (iVar5 == 0) {
          local_4._0_1_ = 6;
          puVar7 = (undefined4 *)FUN_00709d10(0);
        }
        else {
          uVar6 = FUN_00703230(0,0,1,1,1,4,1,2,1);
          local_4._0_1_ = 6;
          puVar7 = (undefined4 *)FUN_00709d10(uVar6);
        }
      }
      if (puVar7 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar7 + 1);
      }
      local_4._0_1_ = 8;
      FUN_00702970(4,0,0);
      FUN_00702ec0(0,0,0,0x3f800000,0x3f800000);
      FUN_00703050();
      FUN_00702fc0(0,0,0,0,0x3f800000,0x3f800000);
      puVar8 = (undefined4 *)FUN_00401f00(0x24);
      local_4 = CONCAT31(local_4._1_3_,9);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        FUN_006ffd30();
        *puVar8 = &PTR_FUN_00a3d744;
        puVar8[7] = 0;
        puVar8[8] = 0xffffffff;
        *(undefined2 *)(puVar8 + 6) = 0x4180;
      }
      if (puVar8 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar8 + 1);
      }
      *(ushort *)(puVar8 + 6) = *(ushort *)(puVar8 + 6) | 1;
      local_4._0_1_ = 10;
      if (_param_1 < 0x10) {
        *(ushort *)(puVar8 + 6) = *(ushort *)(puVar8 + 6) & 0xfff | 0x2000;
      }
      else {
        *(ushort *)(puVar8 + 6) = *(ushort *)(puVar8 + 6) & 0xfff | 0x3000;
      }
      *(ushort *)(puVar8 + 6) = *(ushort *)(puVar8 + 6) & 0xfc01;
      puVar8[7] = _param_1 + 1U & 0xffff;
      iVar5 = FUN_00401f00(0x5c);
      local_4 = CONCAT31(local_4._1_3_,0xb);
      if (iVar5 != 0) {
        puVar9 = (undefined4 *)FUN_007095a0();
      }
      if (puVar9 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar9 + 1);
      }
      uVar6 = local_40[-1];
      uVar1 = *local_40;
      local_4 = CONCAT31(local_4._1_3_,0xc);
      iVar5 = local_40[1];
      puVar9[0x15] = puVar9[0x15] + 1;
      puVar9[0x10] = uVar6;
      puVar9[0x11] = uVar1;
      puVar9[0x12] = iVar5;
      FUN_00405680(puVar8);
      FUN_00405680(puVar9);
      FUN_00405680(local_44);
      FUN_00405680(local_48);
      FUN_00405680(local_4c);
      FUN_00707610();
      FUN_00707370(0,1);
      puVar2 = (undefined4 *)(&DAT_00b42cf8)[_param_1];
      if (puVar2 != puVar7) {
        if (((puVar2 != (undefined4 *)0x0) &&
            (LVar10 = InterlockedDecrement(puVar2 + 1), LVar10 == 0)) &&
           (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        (&DAT_00b42cf8)[_param_1] = puVar7;
        InterlockedIncrement(puVar7 + 1);
      }
      local_4 = CONCAT31(local_4._1_3_,10);
      LVar10 = InterlockedDecrement(puVar9 + 1);
      if (LVar10 == 0) {
        (**(code **)*puVar9)(1);
      }
      local_4 = CONCAT31(local_4._1_3_,8);
      LVar10 = InterlockedDecrement(puVar8 + 1);
      if (LVar10 == 0) {
        (**(code **)*puVar8)(1);
      }
      local_4._0_1_ = 5;
      LVar10 = InterlockedDecrement(puVar7 + 1);
      if (LVar10 == 0) {
        (**(code **)*puVar7)(1);
      }
      _param_1 = _param_1 + 1;
      local_40 = local_40 + 4;
    } while ((int)local_40 < 0xb2df14);
    local_4 = CONCAT31(local_4._1_3_,3);
    LVar10 = InterlockedDecrement(local_4c + 1);
    if (LVar10 == 0) {
      (**(code **)*local_4c)(1);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    LVar10 = InterlockedDecrement(local_48 + 1);
    if (LVar10 == 0) {
      (**(code **)*local_48)(1);
    }
    local_4 = 0xffffffff;
    LVar10 = InterlockedDecrement(local_44 + 1);
    if (LVar10 == 0) {
      (**(code **)*local_44)(1);
      *unaff_FS_OFFSET = iVar5;
      return;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007ab6f0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = (undefined4 *)(in_ECX + 0x108);
  iVar5 = 0x1a3;
  do {
    FUN_007a9c30();
    puVar4[2] = *puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[3] = 0;
    puVar4 = puVar4 + 5;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (*(int *)(in_ECX + 0x48) != 0) {
    do {
      piVar1 = *(int **)(in_ECX + 0x40);
      iVar5 = *piVar1;
      *(int *)(in_ECX + 0x40) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)(in_ECX + 0x44) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 4) = 0;
      }
      puVar4 = (undefined4 *)piVar1[2];
      (**(code **)(*(int *)(in_ECX + 0x3c) + 8))(piVar1);
      *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + -1;
      if (puVar4 != (undefined4 *)0x0) {
        FUN_007a9c30();
        puVar4[3] = puVar4[1];
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[4] = 0;
        *puVar4 = &PTR_LAB_00a8cb28;
        FUN_00401f20(puVar4);
      }
    } while (*(int *)(in_ECX + 0x48) != 0);
  }
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  if (*(int *)(in_ECX + 0x58) != 0) {
    do {
      piVar1 = *(int **)(in_ECX + 0x50);
      iVar5 = *piVar1;
      *(int *)(in_ECX + 0x50) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)(in_ECX + 0x54) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 4) = 0;
      }
      puVar4 = (undefined4 *)piVar1[2];
      (**(code **)(*(int *)(in_ECX + 0x4c) + 8))(piVar1);
      *(int *)(in_ECX + 0x58) = *(int *)(in_ECX + 0x58) + -1;
      if (puVar4 != (undefined4 *)0x0) {
        FUN_007a9c30();
        puVar4[3] = puVar4[1];
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[4] = 0;
        *puVar4 = &PTR_LAB_00a8cb28;
        FUN_00401f20(puVar4);
      }
    } while (*(int *)(in_ECX + 0x58) != 0);
  }
  *(undefined4 *)(in_ECX + 0x74) = 0;
  if (*(int *)(in_ECX + 0x70) != 0) {
    do {
      piVar1 = *(int **)(in_ECX + 0x68);
      iVar5 = *piVar1;
      *(int *)(in_ECX + 0x68) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)(in_ECX + 0x6c) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 4) = 0;
      }
      puVar4 = (undefined4 *)piVar1[2];
      (**(code **)(*(int *)(in_ECX + 100) + 8))(piVar1);
      *(int *)(in_ECX + 0x70) = *(int *)(in_ECX + 0x70) + -1;
      if (puVar4 != (undefined4 *)0x0) {
        FUN_007a9c30();
        puVar4[3] = puVar4[1];
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[4] = 0;
        FUN_007a9c30();
        puVar4[8] = puVar4[6];
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[9] = 0;
        puVar4[5] = &PTR_LAB_00a8cb28;
        *puVar4 = &PTR_LAB_00a8cb40;
        FUN_00401f20(puVar4);
      }
    } while (*(int *)(in_ECX + 0x70) != 0);
  }
  iVar5 = *(int *)(in_ECX + 0x78);
  if (iVar5 != 0) {
    FUN_007a9c30();
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar5 + 4);
    *(undefined4 *)(iVar5 + 4) = 0;
    *(undefined4 *)(iVar5 + 8) = 0;
    *(undefined4 *)(iVar5 + 0x10) = 0;
  }
  FUN_007a9c30();
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(in_ECX + 0x94);
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  FUN_007a9c30();
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(in_ECX + 0x80);
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  if ((*(int *)(in_ECX + 0x21dc) != 0) &&
     (iVar5 = *(int *)(*(int *)(*(int *)(in_ECX + 0x21d4) + 8) + 4), *(int *)(iVar5 + 0x10) != 0)) {
    puVar4 = *(undefined4 **)(iVar5 + 4);
    while (puVar4 != (undefined4 *)0x0) {
      iVar2 = puVar4[2];
      puVar4 = (undefined4 *)*puVar4;
      if (iVar2 != 0) {
        FUN_007e2400();
        FUN_00401f20(iVar2);
      }
    }
    FUN_007a9c30();
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar5 + 4);
    *(undefined4 *)(iVar5 + 4) = 0;
    *(undefined4 *)(iVar5 + 8) = 0;
    *(undefined4 *)(iVar5 + 0x10) = 0;
  }
  puVar4 = *(undefined4 **)(in_ECX + 0x21c4);
  while (puVar4 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar4;
    (**(code **)(*(int *)(in_ECX + 0x21c0) + 8))(puVar4);
    puVar4 = puVar3;
  }
  *(undefined4 *)(in_ECX + 0x21cc) = 0;
  *(undefined4 *)(in_ECX + 0x21c4) = 0;
  *(undefined4 *)(in_ECX + 0x21c8) = 0;
  DAT_00b42cdb = 0;
  return;
}



void FUN_007ab960(float *param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  undefined4 *local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((*(int *)(in_ECX + 0x5c) == 0) && (*(int *)(in_ECX + 8) != 0)) {
    puVar4 = (undefined4 *)FUN_00401f00(0x18);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = &PTR_LAB_00a8cb28;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
    }
    local_10 = puVar4;
    FUN_007a9c30();
    puVar4[3] = puVar4[1];
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[4] = 0;
    iVar1 = *(int *)(in_ECX + 8);
    local_c = *(float *)(iVar1 + 100);
    local_8 = *(float *)(iVar1 + 0x70);
    local_4 = *(float *)(iVar1 + 0x7c);
    fVar2 = param_1[2] * local_4 + *param_1 * local_c + param_1[1] * local_8;
    if (*(char *)(in_ECX + 0x35) != '\0') {
      fVar2 = fVar2 - param_1[3];
    }
    puVar4[5] = fVar2;
    puVar6 = *(undefined4 **)(in_ECX + 0x50);
    bVar3 = false;
    while (puVar6 != (undefined4 *)0x0) {
      if (*(float *)(puVar6[2] + 0x14) < (float)puVar4[5]) {
        puVar5 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x4c) + 4))();
        puVar5[2] = puVar4;
        *puVar5 = puVar6;
        puVar5[1] = puVar6[1];
        if ((undefined4 *)puVar6[1] == (undefined4 *)0x0) {
          *(undefined4 **)(in_ECX + 0x50) = puVar5;
        }
        else {
          *(undefined4 *)puVar6[1] = puVar5;
        }
        puVar6[1] = puVar5;
        *(int *)(in_ECX + 0x58) = *(int *)(in_ECX + 0x58) + 1;
        bVar3 = true;
      }
      puVar6 = (undefined4 *)*puVar6;
      if (bVar3) {
        *(int *)(in_ECX + 0x5c) = *(int *)(in_ECX + 0x5c) + 1;
        *(undefined4 **)(in_ECX + 0x60) = puVar4;
        return;
      }
    }
    if (!bVar3) {
      FUN_005b1e20(&local_10);
    }
    *(undefined4 **)(in_ECX + 0x60) = puVar4;
  }
  *(int *)(in_ECX + 0x5c) = *(int *)(in_ECX + 0x5c) + 1;
  return;
}



void FUN_007aba90(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(int *)(in_ECX + 0x5c) - 1;
  uVar1 = uVar1 & ((int)uVar1 < 0) - 1;
  *(uint *)(in_ECX + 0x5c) = uVar1;
  if ((int)uVar1 < 1) {
    *(undefined4 *)(in_ECX + 0x60) = 0;
  }
  return;
}



void FUN_007abac0(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    FUN_007aa550(&LAB_007a9a90);
    puVar2 = *(undefined4 **)(param_1 + 4);
    if (puVar2 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)*puVar2;
      piVar6 = (int *)puVar2[2];
      if (piVar6 != (int *)0x0) {
        do {
          piVar3 = *(int **)(*piVar6 + 0xbc);
          sVar1 = (short)piVar6[1];
          if (piVar3 != (int *)0x0) {
            iVar4 = (**(code **)(*piVar3 + 0x1c))();
            if ((iVar4 < 1) || (iVar4 = (**(code **)(*piVar3 + 0x1c))(), 5 < iVar4)) {
              iVar4 = (**(code **)(*piVar3 + 0x1c))();
              if (iVar4 != 0x1b) goto LAB_007abb70;
              FUN_007fd260(sVar1,param_2);
            }
            else {
              FUN_007d1320(sVar1,param_2);
            }
            (**(code **)(*(int *)piVar3[0xc] + 0x48))();
            (**(code **)(*(int *)piVar3[0xb] + 0x48))();
          }
LAB_007abb70:
          while (sVar1 == (short)piVar6[1]) {
            FUN_007a9820(piVar6,sVar1);
            if (puVar5 == (undefined4 *)0x0) goto LAB_007abb98;
            piVar6 = (int *)puVar5[2];
            puVar5 = (undefined4 *)*puVar5;
            if (piVar6 == (int *)0x0) goto LAB_007abb98;
          }
        } while( true );
      }
    }
LAB_007abb98:
    FUN_007a9c30();
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



void FUN_007abbc0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      puVar2 = *(undefined4 **)(param_1 + 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = puVar2 + 2;
        puVar2 = (undefined4 *)*puVar2;
        (**(code **)(*(int *)*puVar1 + 0x84))(DAT_00b3f928);
      }
      FUN_007a9c30();
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    FUN_007abac0(param_1 + 0x14,0);
  }
  return;
}



undefined4 * FUN_007abc40(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x74) != 0) {
    return *(undefined4 **)(in_ECX + 0x74);
  }
  puVar1 = (undefined4 *)FUN_00401f00(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_LAB_00a8cb40;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[5] = &PTR_LAB_00a8cb28;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
  }
  FUN_007a9c30();
  puVar1[3] = puVar1[1];
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  FUN_007a9c30();
  puVar1[8] = puVar1[6];
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar2 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 100) + 4))();
  puVar2[2] = puVar1;
  *puVar2 = 0;
  puVar2[1] = *(undefined4 *)(in_ECX + 0x6c);
  if (*(undefined4 **)(in_ECX + 0x6c) != (undefined4 *)0x0) {
    **(undefined4 **)(in_ECX + 0x6c) = puVar2;
    *(int *)(in_ECX + 0x70) = *(int *)(in_ECX + 0x70) + 1;
    *(undefined4 **)(in_ECX + 0x6c) = puVar2;
    *(undefined4 **)(in_ECX + 0x74) = puVar1;
    return puVar1;
  }
  *(int *)(in_ECX + 0x70) = *(int *)(in_ECX + 0x70) + 1;
  *(undefined4 **)(in_ECX + 0x68) = puVar2;
  *(undefined4 **)(in_ECX + 0x6c) = puVar2;
  *(undefined4 **)(in_ECX + 0x74) = puVar1;
  return puVar1;
}



void FUN_007abd00(int param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  puVar3 = *(undefined4 **)(in_ECX + 0x2230);
  while (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)puVar3[2];
    puVar3 = (undefined4 *)*puVar3;
    if ((puVar4 != (undefined4 *)0x0) && (puVar4[4] == param_1)) {
      *puVar4 = *param_2;
      puVar4[1] = param_2[1];
      puVar4[2] = param_2[2];
      puVar4[3] = param_2[3];
      *(undefined1 *)((int)puVar4 + 0x1a) = param_3;
      return;
    }
  }
  puVar3 = (undefined4 *)FUN_00401f00(0x20);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar1 = param_2[3];
    *puVar3 = *param_2;
    puVar3[1] = param_2[1];
    uVar2 = param_2[2];
    puVar3[3] = uVar1;
    puVar3[2] = uVar2;
    puVar3[4] = param_1;
    puVar3[5] = 0;
    *(undefined1 *)(puVar3 + 6) = 0;
    *(undefined1 *)((int)puVar3 + 0x19) = 0;
    *(undefined1 *)((int)puVar3 + 0x1a) = 1;
    puVar3[7] = 0;
  }
  puVar4 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x222c) + 4))();
  puVar4[2] = puVar3;
  puVar4[1] = 0;
  *puVar4 = *(undefined4 *)(in_ECX + 0x2230);
  if (*(int *)(in_ECX + 0x2230) != 0) {
    *(undefined4 **)(*(int *)(in_ECX + 0x2230) + 4) = puVar4;
    *(int *)(in_ECX + 0x2238) = *(int *)(in_ECX + 0x2238) + 1;
    *(undefined4 **)(in_ECX + 0x2230) = puVar4;
    return;
  }
  *(int *)(in_ECX + 0x2238) = *(int *)(in_ECX + 0x2238) + 1;
  *(undefined4 **)(in_ECX + 0x2234) = puVar4;
  *(undefined4 **)(in_ECX + 0x2230) = puVar4;
  return;
}



void FUN_007abde0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_0044d810();
  }
  else {
    *(undefined4 *)(in_ECX + 0xc) = *puVar1;
  }
  puVar1[2] = *param_1;
  *puVar1 = 0;
  puVar1[1] = *(undefined4 *)(in_ECX + 8);
  if (*(undefined4 **)(in_ECX + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(in_ECX + 8) = puVar1;
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
    *(undefined4 **)(in_ECX + 8) = puVar1;
    return;
  }
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
  *(undefined4 **)(in_ECX + 4) = puVar1;
  *(undefined4 **)(in_ECX + 8) = puVar1;
  return;
}



void FUN_007abe30(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_18;
  int local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cd354;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0071a8e0(uVar2);
  *in_ECX = &PTR_FUN_00a8cc5c;
  in_ECX[0x12] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0xf] = &PTR_FUN_00a8cc0c;
  in_ECX[0x16] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x13] = &PTR_FUN_00a8cc0c;
  in_ECX[0x1c] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x19] = &PTR_FUN_00a8cc1c;
  in_ECX[0x1f] = &PTR_LAB_00a8cb28;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x24] = &PTR_LAB_00a8cb28;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x29] = &PTR_LAB_00a8cb28;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3e] = 0;
  local_4._0_1_ = 6;
  local_4._1_3_ = 0;
  in_ECX[0x32] = 0;
  *(undefined1 *)(in_ECX + 0x33) = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  *(undefined1 *)(in_ECX + 0x38) = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  *(undefined1 *)(in_ECX + 0x3d) = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  _eh_vector_constructor_iterator_(in_ECX + 0x41,0x14,0x1a3,FUN_007a9ac0,FUN_007a9ae0);
  in_ECX[0x873] = 0;
  in_ECX[0x871] = 0;
  in_ECX[0x872] = 0;
  in_ECX[0x870] = &PTR_FUN_00a8cc2c;
  in_ECX[0x877] = 0;
  in_ECX[0x875] = 0;
  in_ECX[0x876] = 0;
  in_ECX[0x874] = &PTR_FUN_00a8cc3c;
  in_ECX[0x87b] = &PTR_LAB_00a8cb40;
  in_ECX[0x87c] = 0;
  in_ECX[0x87d] = 0;
  in_ECX[0x87e] = 0;
  in_ECX[0x880] = &PTR_LAB_00a8cb40;
  in_ECX[0x881] = 0;
  in_ECX[0x882] = 0;
  in_ECX[0x883] = 0;
  in_ECX[0x885] = &PTR_LAB_00a8cb40;
  in_ECX[0x886] = 0;
  in_ECX[0x887] = 0;
  in_ECX[0x888] = 0;
  in_ECX[0x88a] = 0;
  in_ECX[0x88e] = 0;
  in_ECX[0x88c] = 0;
  in_ECX[0x88d] = 0;
  in_ECX[0x88b] = &PTR_FUN_00a8cc4c;
  in_ECX[0x894] = 0;
  in_ECX[0x892] = 0;
  in_ECX[0x893] = 0;
  in_ECX[0x891] = &PTR_FUN_00a80bbc;
  in_ECX[0x898] = 0;
  in_ECX[0x896] = 0;
  in_ECX[0x897] = 0;
  in_ECX[0x895] = &PTR_FUN_00a80bbc;
  local_18 = in_ECX + 0x42;
  *(undefined1 *)(in_ECX + 0x878) = 1;
  *(undefined1 *)((int)in_ECX + 0x21e1) = 0;
  *(undefined1 *)((int)in_ECX + 0x21e2) = 0;
  *(undefined1 *)((int)in_ECX + 0x21e3) = 1;
  local_4 = CONCAT31(local_4._1_3_,0x10);
  DAT_00b42cdd = 0;
  local_14 = 0x1a3;
  do {
    FUN_007a9c30();
    local_18[2] = *local_18;
    *local_18 = 0;
    local_18[1] = 0;
    local_18[3] = 0;
    local_18 = local_18 + 5;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  puVar5 = (undefined4 *)in_ECX[0x875];
  while (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar5;
    (**(code **)(in_ECX[0x874] + 8))(puVar5);
    puVar5 = puVar1;
  }
  in_ECX[0x877] = 0;
  in_ECX[0x875] = 0;
  in_ECX[0x876] = 0;
  uVar3 = FUN_00401f00(200);
  in_ECX[0x87a] = uVar3;
  *(undefined2 *)(in_ECX + 0x879) = 0;
  *(undefined2 *)((int)in_ECX + 0x21e6) = 0x32;
  iVar4 = 0;
  do {
    *(undefined4 *)(iVar4 + in_ECX[0x87a]) = 0;
    iVar4 = iVar4 + 4;
  } while (iVar4 < 200);
  FUN_007a9c30();
  in_ECX[0x87e] = in_ECX[0x87c];
  in_ECX[0x87c] = 0;
  in_ECX[0x87d] = 0;
  in_ECX[0x87f] = 0;
  FUN_007a9c30();
  in_ECX[0x883] = in_ECX[0x881];
  in_ECX[0x881] = 0;
  in_ECX[0x882] = 0;
  in_ECX[0x884] = 0;
  FUN_007a9c30();
  in_ECX[0x888] = in_ECX[0x886];
  in_ECX[0x886] = 0;
  in_ECX[0x887] = 0;
  in_ECX[0x889] = 0;
  puVar5 = (undefined4 *)in_ECX[0x10];
  while (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar5;
    (**(code **)(in_ECX[0xf] + 8))(puVar5);
    puVar5 = puVar1;
  }
  in_ECX[0x12] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x1e] = 0;
  FUN_007a9c30();
  in_ECX[0x27] = in_ECX[0x25];
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x28] = 0;
  FUN_007a9c30();
  in_ECX[0x22] = in_ECX[0x20];
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x23] = 0;
  puVar5 = (undefined4 *)in_ECX[0x14];
  while (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar5;
    (**(code **)(in_ECX[0x13] + 8))(puVar5);
    puVar5 = puVar1;
  }
  in_ECX[0x16] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  puVar5 = (undefined4 *)in_ECX[0x1a];
  while (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar5;
    (**(code **)(in_ECX[0x19] + 8))(puVar5);
    puVar5 = puVar1;
  }
  in_ECX[0x1c] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x31] = 0x3f800000;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  in_ECX[0x2f] = 0;
  puVar5 = in_ECX + 0x33;
  iVar4 = 3;
  do {
    puVar5[1] = 0;
    puVar5[-1] = 0;
    *(undefined1 *)puVar5 = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5 = puVar5 + 5;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  in_ECX[0x88f] = 0;
  *(undefined1 *)(in_ECX + 0x890) = 0;
  iVar4 = FUN_00401f00(4);
  local_4 = CONCAT31(local_4._1_3_,0x11);
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_007f5b50();
  }
  in_ECX[0x899] = uVar3;
  *(undefined1 *)(in_ECX + 0x89a) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007ac2c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cd499;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a8cc5c;
  local_4 = 0x10;
  puVar7 = in_ECX + 0x42;
  iVar6 = 0x1a3;
  do {
    FUN_007a9c30(uVar4);
    puVar7[2] = *puVar7;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[3] = 0;
    puVar7 = puVar7 + 5;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_007a9c30(uVar4);
  in_ECX[0x883] = in_ECX[0x881];
  in_ECX[0x881] = 0;
  in_ECX[0x882] = 0;
  in_ECX[0x884] = 0;
  FUN_007a9c30();
  in_ECX[0x888] = in_ECX[0x886];
  in_ECX[0x886] = 0;
  in_ECX[0x887] = 0;
  in_ECX[0x889] = 0;
  if (in_ECX[0x12] != 0) {
    do {
      piVar8 = (int *)in_ECX[0x10];
      iVar6 = *piVar8;
      in_ECX[0x10] = iVar6;
      if (iVar6 == 0) {
        in_ECX[0x11] = 0;
      }
      else {
        *(undefined4 *)(iVar6 + 4) = 0;
      }
      puVar7 = (undefined4 *)piVar8[2];
      (**(code **)(in_ECX[0xf] + 8))(piVar8);
      in_ECX[0x12] = in_ECX[0x12] + -1;
      if (puVar7 != (undefined4 *)0x0) {
        FUN_007a9c30();
        puVar7[3] = puVar7[1];
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[4] = 0;
        *puVar7 = &PTR_LAB_00a8cb28;
        FUN_00401f20(puVar7);
      }
    } while (in_ECX[0x12] != 0);
  }
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  if (in_ECX[0x16] != 0) {
    do {
      piVar8 = (int *)in_ECX[0x14];
      iVar6 = *piVar8;
      in_ECX[0x14] = iVar6;
      if (iVar6 == 0) {
        in_ECX[0x15] = 0;
      }
      else {
        *(undefined4 *)(iVar6 + 4) = 0;
      }
      puVar7 = (undefined4 *)piVar8[2];
      (**(code **)(in_ECX[0x13] + 8))(piVar8);
      in_ECX[0x16] = in_ECX[0x16] + -1;
      if (puVar7 != (undefined4 *)0x0) {
        FUN_007a9c30();
        puVar7[3] = puVar7[1];
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[4] = 0;
        *puVar7 = &PTR_LAB_00a8cb28;
        FUN_00401f20(puVar7);
      }
    } while (in_ECX[0x16] != 0);
  }
  if (in_ECX[0x898] != 0) {
    do {
      piVar8 = (int *)in_ECX[0x896];
      iVar6 = *piVar8;
      in_ECX[0x896] = iVar6;
      if (iVar6 == 0) {
        in_ECX[0x897] = 0;
      }
      else {
        *(undefined4 *)(iVar6 + 4) = 0;
      }
      (**(code **)(in_ECX[0x895] + 8))(piVar8);
      in_ECX[0x898] = in_ECX[0x898] + -1;
    } while (in_ECX[0x898] != 0);
  }
  if (in_ECX[0x894] != 0) {
    do {
      piVar8 = (int *)in_ECX[0x892];
      iVar6 = *piVar8;
      in_ECX[0x892] = iVar6;
      if (iVar6 == 0) {
        in_ECX[0x893] = 0;
      }
      else {
        *(undefined4 *)(iVar6 + 4) = 0;
      }
      (**(code **)(in_ECX[0x891] + 8))(piVar8);
      in_ECX[0x894] = in_ECX[0x894] + -1;
    } while (in_ECX[0x894] != 0);
  }
  in_ECX[0x1d] = 0;
  iVar6 = in_ECX[0x1c];
  while (iVar6 != 0) {
    piVar8 = (int *)in_ECX[0x1a];
    iVar6 = *piVar8;
    in_ECX[0x1a] = iVar6;
    if (iVar6 == 0) {
      in_ECX[0x1b] = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 4) = 0;
    }
    puVar7 = (undefined4 *)piVar8[2];
    (**(code **)(in_ECX[0x19] + 8))(piVar8);
    in_ECX[0x1c] = in_ECX[0x1c] + -1;
    if (puVar7 != (undefined4 *)0x0) {
      FUN_007a9c30();
      puVar7[3] = puVar7[1];
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[4] = 0;
      FUN_007a9c30();
      puVar7[8] = puVar7[6];
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[9] = 0;
      puVar7[5] = &PTR_LAB_00a8cb28;
      *puVar7 = &PTR_LAB_00a8cb40;
      FUN_00401f20(puVar7);
    }
    iVar6 = in_ECX[0x1c];
  }
  iVar6 = in_ECX[0x1e];
  if (iVar6 != 0) {
    FUN_007a9c30();
    *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar6 + 4);
    *(undefined4 *)(iVar6 + 4) = 0;
    *(undefined4 *)(iVar6 + 8) = 0;
    *(undefined4 *)(iVar6 + 0x10) = 0;
    puVar7 = (undefined4 *)in_ECX[0x1e];
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = &PTR_LAB_00a8cb28;
      FUN_00401f20(puVar7);
    }
  }
  FUN_007a9c30();
  in_ECX[0x27] = in_ECX[0x25];
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x28] = 0;
  FUN_007a9c30();
  in_ECX[0x22] = in_ECX[0x20];
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x23] = 0;
  FUN_007a9c30();
  in_ECX[0x2c] = in_ECX[0x2a];
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2d] = 0;
  puVar7 = (undefined4 *)in_ECX[0x875];
  while (puVar7 != (undefined4 *)0x0) {
    iVar6 = puVar7[2];
    puVar7 = (undefined4 *)*puVar7;
    if (iVar6 != 0) {
      iVar1 = *(int *)(iVar6 + 4);
      if (iVar1 != 0) {
        FUN_007a9c30();
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 4);
        *(undefined4 *)(iVar1 + 4) = 0;
        *(undefined4 *)(iVar1 + 8) = 0;
        *(undefined4 *)(iVar1 + 0x10) = 0;
        if (*(undefined4 **)(iVar6 + 4) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(iVar6 + 4))(1);
        }
      }
      FUN_00401f20(iVar6);
    }
  }
  puVar7 = (undefined4 *)in_ECX[0x875];
  while (puVar7 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar7;
    (**(code **)(in_ECX[0x874] + 8))(puVar7);
    puVar7 = puVar2;
  }
  in_ECX[0x877] = 0;
  in_ECX[0x875] = 0;
  in_ECX[0x876] = 0;
  FUN_00401f20(in_ECX[0x87a]);
  if (in_ECX[0x88e] != 0) {
    do {
      iVar6 = *(int *)(in_ECX[0x88c] + 8);
      if (iVar6 != 0) {
        piVar8 = *(int **)(iVar6 + 0x14);
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 8))(piVar8);
          *(undefined4 *)(iVar6 + 0x14) = 0;
        }
        FUN_00401f20(iVar6);
      }
      piVar8 = (int *)in_ECX[0x88c];
      iVar6 = *piVar8;
      in_ECX[0x88c] = iVar6;
      if (iVar6 == 0) {
        in_ECX[0x88d] = 0;
      }
      else {
        *(undefined4 *)(iVar6 + 4) = 0;
      }
      (**(code **)(in_ECX[0x88b] + 8))(piVar8);
      in_ECX[0x88e] = in_ECX[0x88e] + -1;
    } while (in_ECX[0x88e] != 0);
  }
  puVar7 = (undefined4 *)in_ECX[0x88a];
  if (puVar7 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar7 + 1);
    if ((LVar5 == 0) && (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    in_ECX[0x88a] = 0;
  }
  piVar8 = in_ECX + 0x32;
  iVar6 = 3;
  do {
    piVar3 = (int *)*piVar8;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      *piVar8 = 0;
    }
    piVar8 = piVar8 + 5;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = in_ECX[0x899];
  if (iVar6 != 0) {
    FUN_006c4090();
    FUN_00401f20(iVar6);
    in_ECX[0x899] = 0;
  }
  piVar8 = in_ECX + 0x895;
  *piVar8 = (int)&PTR_FUN_00a80bac;
  local_4._0_1_ = 0x11;
  puVar7 = (undefined4 *)in_ECX[0x896];
  while (puVar7 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar7;
    (**(code **)(*piVar8 + 8))(puVar7);
    puVar7 = puVar2;
  }
  in_ECX[0x898] = 0;
  in_ECX[0x896] = 0;
  in_ECX[0x897] = 0;
  *piVar8 = (int)&PTR_LAB_00a80b9c;
  piVar8 = in_ECX + 0x891;
  *piVar8 = (int)&PTR_FUN_00a80bac;
  local_4._0_1_ = 0x12;
  puVar7 = (undefined4 *)in_ECX[0x892];
  while (puVar7 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar7;
    (**(code **)(*piVar8 + 8))(puVar7);
    puVar7 = puVar2;
  }
  in_ECX[0x894] = 0;
  in_ECX[0x892] = 0;
  in_ECX[0x893] = 0;
  *piVar8 = (int)&PTR_LAB_00a80b9c;
  piVar8 = in_ECX + 0x88b;
  *piVar8 = (int)&PTR_FUN_00a8cbc8;
  local_4._0_1_ = 0x13;
  puVar7 = (undefined4 *)in_ECX[0x88c];
  while (puVar7 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar7;
    (**(code **)(*piVar8 + 8))(puVar7);
    puVar7 = puVar2;
  }
  in_ECX[0x88e] = 0;
  in_ECX[0x88c] = 0;
  in_ECX[0x88d] = 0;
  *piVar8 = (int)&PTR_LAB_00a8cb78;
  puVar7 = (undefined4 *)in_ECX[0x88a];
  local_4._0_1_ = 0xc;
  if (((puVar7 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar7 + 1), LVar5 == 0)) &&
     (puVar7 != (undefined4 *)0x0)) {
    (**(code **)*puVar7)(1);
  }
  piVar8 = in_ECX + 0x874;
  in_ECX[0x885] = &PTR_LAB_00a8cb40;
  in_ECX[0x880] = &PTR_LAB_00a8cb40;
  in_ECX[0x87b] = &PTR_LAB_00a8cb40;
  *piVar8 = (int)&PTR_FUN_00a8cbb8;
  local_4._0_1_ = 0x14;
  puVar7 = (undefined4 *)in_ECX[0x875];
  while (puVar7 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar7;
    (**(code **)(*piVar8 + 8))(puVar7);
    puVar7 = puVar2;
  }
  in_ECX[0x877] = 0;
  in_ECX[0x875] = 0;
  in_ECX[0x876] = 0;
  *piVar8 = (int)&PTR_LAB_00a8cb68;
  piVar8 = in_ECX + 0x870;
  *piVar8 = (int)&PTR_FUN_00a8cba8;
  local_4._0_1_ = 0x15;
  puVar7 = (undefined4 *)in_ECX[0x871];
  while (puVar7 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar7;
    (**(code **)(*piVar8 + 8))(puVar7);
    puVar7 = puVar2;
  }
  in_ECX[0x873] = 0;
  in_ECX[0x871] = 0;
  in_ECX[0x872] = 0;
  *piVar8 = (int)&PTR_LAB_00a8cb30;
  local_4._0_1_ = 6;
  _eh_vector_destructor_iterator_(in_ECX + 0x41,0x14,0x1a3,FUN_007a9ae0);
  piVar8 = in_ECX + 0x19;
  in_ECX[0x29] = &PTR_LAB_00a8cb28;
  in_ECX[0x24] = &PTR_LAB_00a8cb28;
  in_ECX[0x1f] = &PTR_LAB_00a8cb28;
  *piVar8 = (int)&PTR_FUN_00a8cb98;
  local_4._0_1_ = 0x16;
  puVar7 = (undefined4 *)in_ECX[0x1a];
  while (puVar7 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar7;
    (**(code **)(*piVar8 + 8))(puVar7);
    puVar7 = puVar2;
  }
  in_ECX[0x1c] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  *piVar8 = (int)&PTR_LAB_00a8cb58;
  piVar8 = in_ECX + 0x13;
  *piVar8 = (int)&PTR_FUN_00a8cb88;
  local_4._0_1_ = 0x17;
  puVar7 = (undefined4 *)in_ECX[0x14];
  while (puVar7 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar7;
    (**(code **)(*piVar8 + 8))(puVar7);
    puVar7 = puVar2;
  }
  in_ECX[0x16] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  *piVar8 = (int)&PTR_LAB_00a8cb48;
  piVar8 = in_ECX + 0xf;
  *piVar8 = (int)&PTR_FUN_00a8cb88;
  local_4 = CONCAT31(local_4._1_3_,0x18);
  puVar7 = (undefined4 *)in_ECX[0x10];
  while (puVar7 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar7;
    (**(code **)(*piVar8 + 8))(puVar7);
    puVar7 = puVar2;
  }
  in_ECX[0x12] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  *piVar8 = (int)&PTR_LAB_00a8cb48;
  local_4 = 0xffffffff;
  FUN_0071a910();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007ac9a0(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int in_ECX;
  int *piVar8;
  uint uVar9;
  int *local_8;
  int *local_4;
  
  uVar9 = param_1 & 0xffff;
  if (DAT_00b42ce8 != '\0') {
    if (param_1 == 0x49) {
      param_1 = 0x48;
    }
    else if (param_1 == 0x16f) {
      param_1 = 0x16e;
    }
  }
  iVar4 = FUN_007b4290(1);
  piVar8 = *(int **)(iVar4 + 4);
  iVar4 = in_ECX + uVar9 * 0x14;
  if (*(int *)(iVar4 + 0x114) == 0) {
    return;
  }
  piVar7 = *(int **)(**(int **)(*(int *)(iVar4 + 0x108) + 8) + 0xbc);
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  if (piVar7 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar7 + 0x1c))();
    if ((iVar5 < 1) || (iVar5 = (**(code **)(*piVar7 + 0x1c))(), 5 < iVar5)) {
      iVar5 = (**(code **)(*piVar7 + 0x1c))();
      if (iVar5 != 0x1b) goto LAB_007acaae;
      FUN_007fd260(param_1,param_2);
      (**(code **)(*(int *)piVar7[0xc] + 0x48))();
      piVar8 = (int *)piVar7[0xb];
      local_4 = piVar7;
    }
    else {
      FUN_007d1320(param_1,param_2);
      (**(code **)(*(int *)piVar7[0xc] + 0x48))();
      (**(code **)(*(int *)piVar7[0xb] + 0x48))();
      local_8 = piVar7;
      if (piVar7 == piVar8) goto LAB_007acaae;
      (**(code **)(*(int *)piVar8[0xc] + 0x48))();
      piVar8 = (int *)piVar8[0xb];
    }
    (**(code **)(*piVar8 + 0x48))();
  }
LAB_007acaae:
  if (DAT_00b2bb7c != '\0') {
    if (((param_1 == 0x48) || (param_1 == 0x49)) || ((0x167 < param_1 && (param_1 < 0x176)))) {
      FUN_007aa550(&LAB_007aa390);
      FUN_007f6fc0(in_ECX + (uVar9 * 5 + 0x41) * 4,param_1);
      return;
    }
    if (((param_1 == 0xc) || (param_1 == 0xd)) || ((0x194 < param_1 && (param_1 < 0x198)))) {
      FUN_007aa550(&LAB_007aa390);
      FUN_007f7680(in_ECX + (uVar9 * 5 + 0x41) * 4,param_1);
      return;
    }
    if ((((((param_1 == 0x54) || (param_1 == 0x5f)) || (param_1 == 0x6a)) ||
         (((param_1 == 0x75 || (param_1 == 0x82)) ||
          ((param_1 == 0x90 || ((param_1 == 0x9d || (param_1 == 0xaa)))))))) ||
        ((param_1 == 0xb8 ||
         ((((((param_1 == 0xc5 || (param_1 == 0xd2)) || (param_1 == 0xdf)) ||
            ((param_1 == 0xee || (param_1 == 0xf5)))) || (param_1 == 0xfc)) ||
          ((param_1 == 0x103 || (param_1 == 0x10b)))))))) ||
       (((param_1 == 0x11b || (((param_1 == 0x122 || (param_1 == 0x129)) || (param_1 == 0x194)))) ||
        (((((param_1 == 0x18 || (param_1 == 0x2f)) || (param_1 == 0x30)) ||
          ((param_1 == 0x33 || (param_1 == 0xe7)))) || ((param_1 == 0x113 || (param_1 == 0x114))))))
       )) {
      FUN_007aa550(&LAB_007aa390);
      FUN_007f7ee0(in_ECX + (uVar9 * 5 + 0x41) * 4,param_1);
      return;
    }
    if (param_1 == 0xe) {
      FUN_007aa550(&LAB_007aa390);
      FUN_007f86c0(in_ECX + (uVar9 * 5 + 0x41) * 4,0xe);
      return;
    }
    if (param_1 == 0x17b) {
      FUN_007aa550(&LAB_007aa390);
      FUN_007f8db0(in_ECX + (uVar9 * 5 + 0x41) * 4,0x17b);
      return;
    }
  }
  piVar8 = (int *)(*(undefined4 **)(iVar4 + 0x108))[2];
  puVar1 = (undefined4 *)**(undefined4 **)(iVar4 + 0x108);
  if ((DAT_00b42e97 != '\0') && (*(int **)(in_ECX + 0x21f0) != (int *)0x0)) {
    piVar7 = *(int **)(in_ECX + 0x21f0);
    do {
      piVar2 = (int *)*piVar7;
      if (*piVar8 == piVar7[2]) {
        if (piVar7 != (int *)0x0) goto LAB_007ace0b;
        break;
      }
      piVar7 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  if (((param_1 < 0x160) || (0x162 < param_1)) && (2 < param_1 - 0x156)) {
    if ((*(char *)(in_ECX + 0x21e2) != '\0') && ((local_8 != (int *)0x0 || (local_4 != (int *)0x0)))
       ) {
      FUN_007abde0(piVar8);
    }
    FUN_007a9820(piVar8,param_1);
  }
  else {
    FUN_007abde0(piVar8);
  }
  DAT_00b42cbc = DAT_00b42cbc + 1;
  uVar6 = (**(code **)(**(int **)(*piVar8 + 0xb4) + 0x5c))();
  DAT_00b42cb4 = DAT_00b42cb4 + (uVar6 & 0xffff);
LAB_007ace0b:
  if (local_8 == (int *)0x0) {
    if (local_4 != (int *)0x0) {
      FUN_0060d0a0(param_1);
    }
  }
  else {
    FUN_007d1800(param_1);
  }
joined_r0x007ace33:
  do {
    if (puVar1 == (undefined4 *)0x0) {
      if (DAT_00b42cda == '\0') {
        iVar4 = in_ECX + (uVar9 * 5 + 0x41) * 4;
        FUN_007a9c30();
        *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar4 + 4);
        *(undefined4 *)(iVar4 + 4) = 0;
        *(undefined4 *)(iVar4 + 8) = 0;
        *(undefined4 *)(iVar4 + 0x10) = 0;
      }
      return;
    }
    puVar3 = (undefined4 *)*puVar1;
    piVar8 = (int *)puVar1[2];
    puVar1 = puVar3;
    if ((DAT_00b42e97 != '\0') && (*(int **)(in_ECX + 0x21f0) != (int *)0x0)) {
      piVar7 = *(int **)(in_ECX + 0x21f0);
      do {
        piVar2 = (int *)*piVar7;
        if (*piVar8 == piVar7[2]) {
          if (piVar7 != (int *)0x0) goto joined_r0x007ace33;
          break;
        }
        piVar7 = piVar2;
      } while (piVar2 != (int *)0x0);
    }
    if (((param_1 < 0x160) || (0x162 < param_1)) && (2 < param_1 - 0x156)) {
      if ((*(char *)(in_ECX + 0x21e2) != '\0') &&
         ((local_8 != (int *)0x0 || (local_4 != (int *)0x0)))) {
        FUN_007abde0(piVar8);
      }
      FUN_007a9820(piVar8,param_1);
    }
    else {
      FUN_007abde0(piVar8);
    }
    DAT_00b42cbc = DAT_00b42cbc + 1;
    uVar6 = (**(code **)(**(int **)(*piVar8 + 0xb4) + 0x5c))();
    DAT_00b42cb4 = DAT_00b42cb4 + (uVar6 & 0xffff);
  } while( true );
}



void FUN_007acf40(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  int *local_c;
  undefined4 *puStack_8;
  undefined4 local_4;
  
  local_4 = DAT_00b3f928;
  iVar4 = *(int *)(in_ECX + 0x20);
  *(int *)(in_ECX + 0x30) = iVar4;
  if (iVar4 == 0) {
    local_c = (int *)0x0;
  }
  else {
    *(int *)(in_ECX + 0x30) = iVar4 + -1;
    local_c = *(int **)(*(int *)(in_ECX + 0x28) + (iVar4 + -1) * 4);
  }
  if (*(int *)(in_ECX + 0x58) == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = *(undefined4 **)(*(int *)(in_ECX + 0x50) + 8);
  }
  DAT_00b42cdd = 1;
  piVar2 = local_c;
joined_r0x007acf8e:
  do {
    if (local_c == (int *)0x0) {
LAB_007ad13f:
      if (*(int *)(in_ECX + 0x1c) == 0) {
        if (*(int *)(in_ECX + 0x18) != 0) {
          do {
            piVar2 = *(int **)(in_ECX + 0x10);
            iVar4 = *piVar2;
            *(int *)(in_ECX + 0x10) = iVar4;
            if (iVar4 == 0) {
              *(undefined4 *)(in_ECX + 0x14) = 0;
            }
            else {
              *(undefined4 *)(iVar4 + 4) = 0;
            }
            (**(code **)(*(int *)(in_ECX + 0xc) + 8))(piVar2);
            *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + -1;
          } while (*(int *)(in_ECX + 0x18) != 0);
        }
      }
      else if (*(int *)(*(int *)(in_ECX + 0x1c) + 0xc) != 0) {
        do {
          piVar2 = *(int **)(in_ECX + 0x1c);
          piVar3 = (int *)piVar2[1];
          iVar4 = *piVar3;
          piVar2[1] = iVar4;
          if (iVar4 == 0) {
            piVar2[2] = 0;
          }
          else {
            *(undefined4 *)(iVar4 + 4) = 0;
          }
          (**(code **)(*piVar2 + 8))(piVar3);
          piVar2[3] = piVar2[3] + -1;
        } while (*(int *)(*(int *)(in_ECX + 0x1c) + 0xc) != 0);
        return;
      }
      return;
    }
    while( true ) {
      if ((puVar6 == (undefined4 *)0x0) ||
         ((float)puVar6[5] <= *(float *)(*(int *)(in_ECX + 0x2c) + *(int *)(in_ECX + 0x30) * 4)))
      goto LAB_007acffe;
      FUN_007abac0(puVar6,1);
      *puVar6 = &PTR_LAB_00a8cb28;
      FUN_00401f20(puVar6);
      piVar3 = *(int **)(in_ECX + 0x50);
      iVar4 = *piVar3;
      *(int *)(in_ECX + 0x50) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(in_ECX + 0x54) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 4) = 0;
      }
      (**(code **)(*(int *)(in_ECX + 0x4c) + 8))(piVar3);
      *(int *)(in_ECX + 0x58) = *(int *)(in_ECX + 0x58) + -1;
      local_c = piVar2;
      if (*(int *)(in_ECX + 0x58) == 0) break;
      puVar6 = *(undefined4 **)(*(int *)(in_ECX + 0x50) + 8);
    }
    puVar6 = (undefined4 *)0x0;
LAB_007acffe:
    piVar3 = (int *)FUN_00707530(4);
    if (piVar3 == (int *)0x0) {
      if (*(char *)(in_ECX + 0x21e3) != '\0') {
        (**(code **)(*local_c + 0x84))(local_4);
      }
    }
    else {
      iVar4 = (**(code **)(*piVar3 + 0x54))();
      if (iVar4 == -1) {
        if (DAT_00b42eac != 6) {
          (**(code **)(*local_c + 0x84))(local_4);
        }
        goto joined_r0x007acf8e;
      }
      puStack_8 = *(undefined4 **)(in_ECX + 0x21c4);
      if (puStack_8 != (undefined4 *)0x0) {
        do {
          puVar1 = (undefined4 *)puStack_8[2];
          puVar5 = (undefined4 *)*puStack_8;
          if ((puVar1 != (undefined4 *)0x0) && ((int *)*puVar1 == piVar2)) {
            piVar3 = (int *)((int *)*puVar1)[0x2f];
            if (piVar3 != (int *)0x0) {
              iVar4 = (**(code **)(*piVar3 + 0x1c))();
              if ((iVar4 < 1) || (iVar4 = (**(code **)(*piVar3 + 0x1c))(), 5 < iVar4)) {
                iVar4 = (**(code **)(*piVar3 + 0x1c))();
                if (iVar4 != 0x1b) goto LAB_007ad0d5;
                FUN_007fd260(*(undefined2 *)(puVar1 + 1),1);
              }
              else {
                FUN_007d1320(*(undefined2 *)(puVar1 + 1),1);
              }
              (**(code **)(*(int *)piVar3[0xc] + 0x48))();
              (**(code **)(*(int *)piVar3[0xb] + 0x48))();
            }
LAB_007ad0d5:
            FUN_007a9820(puVar1,*(undefined2 *)(puVar1 + 1));
            FUN_007aa860(&puStack_8);
            puVar5 = (undefined4 *)0x0;
          }
          puStack_8 = puVar5;
        } while (puVar5 != (undefined4 *)0x0);
        puStack_8 = (undefined4 *)0x0;
      }
    }
    if (*(int *)(in_ECX + 0x30) == 0) goto LAB_007ad13f;
    iVar4 = *(int *)(in_ECX + 0x30) + -1;
    *(int *)(in_ECX + 0x30) = iVar4;
    local_c = *(int **)(*(int *)(in_ECX + 0x28) + iVar4 * 4);
    piVar2 = local_c;
  } while( true );
}



void FUN_007ad1c0(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_007abde0(&param_2);
  }
  return;
}



void FUN_007ad1e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = *(int **)(in_ECX + 0x2230);
  if (piVar2 != (int *)0x0) {
    while( true ) {
      iVar1 = piVar2[2];
      piVar2 = (int *)*piVar2;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) == param_1)) break;
      if (piVar2 == (int *)0x0) {
        return;
      }
    }
    param_1 = iVar1;
    if (*(int *)(iVar1 + 0x14) != 0) {
      (**(code **)(**(int **)(iVar1 + 0x14) + 8))(*(int **)(iVar1 + 0x14));
      *(undefined4 *)(iVar1 + 0x14) = 0;
    }
    FUN_00401f20(iVar1);
    FUN_00776690(&param_1);
  }
  return;
}



void FUN_007ad250(byte param_1)

{
  FUN_007ac2c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007ad270(int *param_1)

{
  bool bVar1;
  char extraout_AL;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  LONG LVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined3 uVar13;
  undefined3 extraout_var;
  int *piVar11;
  undefined4 *puVar12;
  int in_ECX;
  int *unaff_EBX;
  ushort uVar14;
  float10 fVar15;
  int *apiStack_7c [2];
  undefined4 uStack_74;
  int *piStack_70;
  undefined4 *puStack_6c;
  int iStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 *puStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int *piStack_c;
  
  if (DAT_00b42cda == '\0') {
LAB_007ad2d1:
    if (DAT_00b42cdb != '\0') {
      FUN_007ab6f0();
    }
  }
  else {
    if (DAT_00b42cdb != '\0') {
      if (param_1 == (int *)0x0) {
        return 1;
      }
      puVar3 = (undefined4 *)(**(code **)(*param_1 + 4))();
      if (puVar3 == (undefined4 *)0x0) {
        return 1;
      }
      while (puVar3 != &DAT_00b3fcdc) {
        puVar3 = (undefined4 *)puVar3[1];
        if (puVar3 == (undefined4 *)0x0) {
          return 1;
        }
      }
    }
    if (DAT_00b42cda == '\0') goto LAB_007ad2d1;
  }
  if ((*(char *)(in_ECX + 0x2268) == '\0') && (DAT_00b42ce8 == '\0')) {
    *(undefined1 *)(in_ECX + 0x2268) = 1;
  }
  piVar4 = (int *)FUN_00405760(&puStack_6c);
  puVar3 = puStack_6c;
  iVar8 = *piVar4;
  if (((puStack_6c != (undefined4 *)0x0) &&
      (LVar5 = InterlockedDecrement(puStack_6c + 1), LVar5 == 0)) && (puVar3 != (undefined4 *)0x0))
  {
    (**(code **)*puVar3)(1);
  }
  if (iVar8 == 0) {
    puVar3 = &param_1;
    FUN_007abc40(puVar3);
    FUN_007abde0(puVar3);
    return 1;
  }
  piVar4 = (int *)param_1[0x2f];
  piVar11 = *(int **)(iVar8 + 0x18);
  piStack_70 = piVar11;
  if (DAT_00b42ce3 == '\0') {
    if (piVar4 == (int *)0x0) goto LAB_007ad39f;
  }
  else if (piVar4 == (int *)0x0) {
    if (*(int *)(iVar8 + 0x20) == 0) {
      return 1;
    }
    iVar6 = **(int **)(*(int *)(iVar8 + 0x20) + 0x20);
    if (iVar6 == 0) {
      return 1;
    }
    if (*(int *)(iVar6 + 8) == 0) {
      return 1;
    }
    goto LAB_007ad39f;
  }
  if (piVar11 == (int *)0x0) goto LAB_007ad39f;
  iVar6 = (**(code **)(*piVar4 + 0x1c))();
  iVar7 = (**(code **)(*piVar11 + 0x54))();
  piVar4 = param_1;
  if (iVar6 == 0x16) {
    if (iVar7 == 0xb) {
      piStack_70 = (int *)0x0;
      iVar8 = (**(code **)(*piVar11 + 0x5c))(param_1,DAT_00b42f40,&piStack_70,1);
      puVar3 = (undefined4 *)**(undefined4 **)(iVar8 + 4);
      for (apiStack_7c[0] = (int *)(*(undefined4 **)(iVar8 + 4))[2]; apiStack_7c[0] != (int *)0x0;
          apiStack_7c[0] = (int *)*apiStack_7c[0]) {
        if (DAT_00b42ce8 == '\0') {
          FUN_007abde0(apiStack_7c);
        }
        else if ((short)apiStack_7c[0][1] == 0x17d) {
          FUN_007a9820(apiStack_7c[0],0x17d);
        }
        if (puVar3 == (undefined4 *)0x0) break;
        apiStack_7c[0] = puVar3 + 2;
        puVar3 = (undefined4 *)*puVar3;
      }
      DAT_00b42cd0 = DAT_00b42cd0 + 1;
      iVar8 = (**(code **)(*piStack_c + 0x10))();
      if (iVar8 == 0) {
        return 1;
      }
      piVar4 = (int *)piStack_c[0x2d];
LAB_007ad509:
      uVar9 = (**(code **)(*piVar4 + 0x5c))();
      DAT_00b42cc4 = DAT_00b42cc4 + (uVar9 & 0xffff);
      return 1;
    }
  }
  else if (iVar6 == 0x18) {
    if (iVar7 == 0xc) {
      piStack_70 = (int *)0x0;
      iVar8 = (**(code **)(*piVar11 + 0x5c))(param_1,DAT_00b42f40,&piStack_70,1);
      apiStack_7c[0] = (int *)(*(undefined4 **)(iVar8 + 4))[2];
      for (puVar3 = (undefined4 *)**(undefined4 **)(iVar8 + 4);
          (apiStack_7c[0] != (int *)0x0 && (FUN_007abde0(apiStack_7c), puVar3 != (undefined4 *)0x0))
          ; puVar3 = (undefined4 *)*puVar3) {
        apiStack_7c[0] = (int *)puVar3[2];
      }
      DAT_00b42cd0 = DAT_00b42cd0 + 1;
      iVar8 = (**(code **)(*piVar4 + 0x10))();
      if (iVar8 == 0) {
        return 1;
      }
      piVar4 = (int *)piVar4[0x2d];
      goto LAB_007ad509;
    }
  }
  else if (iVar6 == 0x19) {
    if (iVar7 == 0xe) {
      if (*(char *)(in_ECX + 0x21e3) == '\0') {
        return 1;
      }
      uStack_74 = 0;
      iVar8 = (**(code **)(*piVar11 + 0x5c))(param_1,DAT_00b42f40,&uStack_74,1);
      puVar3 = (undefined4 *)**(undefined4 **)(iVar8 + 4);
      for (piVar4 = (int *)(*(undefined4 **)(iVar8 + 4))[2]; apiStack_7c[0] = piVar4,
          piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
        if (unaff_EBX[0x42] == 8) {
          FUN_007ad1c0(in_ECX + 0xa4,piVar4);
        }
        else {
          FUN_005b1e20(apiStack_7c);
          FUN_005b1e20(piVar4);
        }
        if (puVar3 == (undefined4 *)0x0) break;
        piVar4 = puVar3 + 2;
        puVar3 = (undefined4 *)*puVar3;
      }
LAB_007ad6ce:
      DAT_00b42cd0 = DAT_00b42cd0 + 1;
      iVar8 = (**(code **)(*piStack_c + 0x10))();
      if (iVar8 == 0) {
        return 1;
      }
      iVar8 = *(int *)piStack_c[0x2d];
      goto LAB_007ad6f5;
    }
  }
  else if (iVar6 == 0x1a) {
    if (iVar7 == 0xd) {
      if (*(char *)(in_ECX + 0x21e3) == '\0') {
        return 1;
      }
      piStack_70 = (int *)0x0;
      iVar8 = (**(code **)(*piVar11 + 0x5c))(param_1,DAT_00b42f40,&piStack_70,1);
      puVar3 = (undefined4 *)**(undefined4 **)(iVar8 + 4);
      for (piVar4 = (int *)(*(undefined4 **)(iVar8 + 4))[2]; apiStack_7c[0] = piVar4,
          piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
        FUN_005b1e20(apiStack_7c);
        FUN_005b1e20(piVar4);
        if (puVar3 == (undefined4 *)0x0) break;
        piVar4 = puVar3 + 2;
        puVar3 = (undefined4 *)*puVar3;
      }
      goto LAB_007ad6ce;
    }
  }
  else if (iVar6 < 0) goto LAB_007ad39f;
  if (iVar7 < 1) {
LAB_007ad39f:
    if (*(char *)(in_ECX + 0x21e0) == '\0') {
      (**(code **)(*param_1 + 0x84))(DAT_00b3f928);
    }
    else {
      if (((*(byte *)(*(int *)(iVar8 + 8) + 0x18) & 1) != 0) &&
         ((*(char *)(in_ECX + 0x34) == '\0' ||
          ((*(ushort *)(*(int *)(iVar8 + 8) + 0x18) >> 0xd & 1) == 0)))) {
        if (DAT_00b42ce3 != '\0') {
          FUN_005b1e20(&param_1);
          return 1;
        }
        if ((DAT_00b42ce1 != '\0') && ((float)param_1[10] < (float)_DAT_00b42ce4)) {
          FUN_005b1e20(&param_1);
          return 1;
        }
        FUN_005b1e20(&param_1);
        return 1;
      }
      if (DAT_00b42eac != 6) {
        puVar3 = &param_1;
        FUN_007abc40(puVar3);
        FUN_007abde0(puVar3);
        return 1;
      }
    }
    return 1;
  }
  uVar10 = 0;
  if ((piVar11[0x26] != 0) && (uVar10 = FUN_007aa3c0(piVar11[0x26],1), (char)uVar10 != '\0')) {
    return 1;
  }
  piVar4 = param_1;
  uVar13 = (undefined3)((uint)uVar10 >> 8);
  uStack_58 = *(undefined4 *)(iVar8 + 8);
  if ((-1 < (char)param_1[6]) && (DAT_00b42eac != 5)) {
    uVar10 = FUN_007b4280((uint)piVar11[7] >> 0x1c);
    FUN_007c7050(piVar4,uVar10);
    if (extraout_AL == '\0') {
      return 1;
    }
    *(ushort *)(piVar4 + 6) = *(ushort *)(piVar4 + 6) | 0x80;
    uVar13 = extraout_var;
  }
  bVar1 = 0 < *(int *)(in_ECX + 0x5c);
  if (bVar1 != ((piVar11[7] & 0x200U) != 0)) {
    FUN_00434980(0x200,CONCAT31(uVar13,bVar1));
    FUN_007e24c0();
  }
  iStack_68 = 0;
  apiStack_7c[0] = (int *)(**(code **)(*piVar11 + 0x5c))(piVar4,DAT_00b42f40,&iStack_68,1);
  if (apiStack_7c[0] == (int *)0x0) {
    return 1;
  }
  uVar10 = 0;
  if (1 < (uint)apiStack_7c[0][3]) {
    iVar8 = piStack_c[3];
    while ((iVar8 != 0 && ((char)((uint)uVar10 >> 0x18) == '\0'))) {
      cVar2 = FUN_00405650(&DAT_00b3ce30,iVar8);
      if (cVar2 != '\0') {
        puVar3 = (undefined4 *)FUN_00401f00(0x18);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = &PTR_LAB_00a8cb28;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
        }
        puVar3[5] = 0;
        FUN_007aa6c0();
        FUN_006aa320(&stack0xffffff7c);
        uVar10 = 0x1000000;
      }
      iVar8 = *(int *)(iVar8 + 0x34);
    }
  }
  if (apiStack_7c[0][3] == 0) {
    return 1;
  }
  if ((float)unaff_EBX[8] <= 0.0) {
    return 1;
  }
  if (((*(char *)(in_ECX + 0x21e2) != '\0') && (*(char *)(in_ECX + 0x21e0) != '\0')) &&
     (iVar8 = (**(code **)(*unaff_EBX + 100))(), *(int *)(iVar8 + 0xc) != 0)) {
    iVar8 = *(int *)(*(int *)(iVar8 + 4) + 8);
    if (*(char *)(in_ECX + 0x21e0) == '\0') {
      iVar6 = FUN_007a9cc0();
      FUN_007d1320(*(undefined2 *)(iVar8 + 4),0);
      if (iVar6 != 0) {
        (**(code **)(**(int **)(iVar6 + 0x30) + 0x48))();
        (**(code **)(**(int **)(iVar6 + 0x2c) + 0x48))();
      }
      FUN_007a9820(iVar8,*(undefined2 *)(iVar8 + 4));
    }
    else {
      FUN_007abde0(&stack0xffffff7c);
    }
  }
  piVar4 = (int *)((undefined4 *)apiStack_7c[0][1])[2];
  puVar3 = *(undefined4 **)apiStack_7c[0][1];
  while (piVar4 != (int *)0x0) {
    uVar14 = *(ushort *)(piVar4 + 1);
    if ((DAT_00b42ce8 == '\0') ||
       ((((0x12 < (ushort)(uVar14 - 0x168) || (uVar14 == 0x16e)) || (uVar14 == 0x16f)) &&
        (uVar14 != 0x17b)))) {
      if (((uVar14 == 400) || (uVar14 == 0x192)) ||
         (((ushort)(uVar14 - 0x34) < 0x14 && (apiStack_7c[0][3] == 1)))) {
        piVar11 = (int *)FUN_00405760(&uStack_74);
        iVar8 = *piVar11;
        FUN_007016a0();
        iVar8 = *(int *)(iVar8 + 0xc);
        if (iVar8 != 0) {
          iVar6 = *(int *)(in_ECX + 8);
          piStack_70 = *(int **)(iVar8 + 0x2c);
          fStack_64 = *(float *)(iVar6 + 0x88);
          fStack_60 = *(float *)(iVar6 + 0x8c);
          puStack_6c = *(undefined4 **)(iVar8 + 0x30);
          fStack_5c = *(float *)(iVar6 + 0x90);
          iVar6 = *piVar4;
          fStack_40 = *(float *)(iVar6 + 0x20);
          fStack_4c = fStack_40 - fStack_64;
          fStack_38 = *(float *)(iVar6 + 0x28);
          fStack_3c = *(float *)(iVar6 + 0x24);
          fStack_34 = *(float *)(iVar6 + 0x2c);
          fStack_48 = fStack_3c - fStack_60;
          fStack_44 = fStack_38 - fStack_5c;
          fVar15 = (float10)FUN_00404c90();
          if ((float10)(float)piStack_70 < fVar15 + (float10)fStack_34) {
            _DAT_00b46648 = *(undefined4 *)(iVar8 + 0x20);
            _DAT_00b4664c = *(undefined4 *)(iVar8 + 0x24);
            puStack_30 = puStack_6c;
            _DAT_00b46650 = *(undefined4 *)(iVar8 + 0x28);
            _DAT_00b4663c = (float)((float10)(float)puStack_6c - (float10)(float)piStack_70);
            uStack_28 = 0;
            uStack_24 = 0;
            _DAT_00b46638 = puStack_6c;
            _DAT_00b46640 = 0;
            _DAT_00b46644 = 0;
            uStack_14 = 0;
            _DAT_00b46654 = 0;
            uStack_58 = _DAT_00b46648;
            uStack_54 = _DAT_00b4664c;
            uStack_50 = _DAT_00b46650;
            fStack_2c = _DAT_00b4663c;
            uStack_20 = _DAT_00b46648;
            uStack_1c = _DAT_00b4664c;
            uStack_18 = _DAT_00b46650;
            goto switchD_007adbf2_default;
          }
          if ((uVar14 != 400) && (uVar14 != 0x192)) {
            switch(uVar14) {
            case 0x34:
              goto switchD_007adbf2_caseD_34;
            case 0x35:
              goto switchD_007adbf2_caseD_35;
            case 0x36:
              goto switchD_007adbf2_caseD_36;
            case 0x37:
              goto switchD_007adbf2_caseD_37;
            case 0x38:
              goto switchD_007adbf2_caseD_38;
            case 0x39:
              goto switchD_007adbf2_caseD_39;
            case 0x3a:
              goto switchD_007adbf2_caseD_3a;
            case 0x3b:
              goto switchD_007adbf2_caseD_3b;
            case 0x3c:
              goto switchD_007adbf2_caseD_3c;
            case 0x3d:
              goto switchD_007adbf2_caseD_3d;
            case 0x3e:
              goto switchD_007adbf2_caseD_3e;
            case 0x3f:
              goto switchD_007adbf2_caseD_3f;
            case 0x40:
              goto switchD_007adbf2_caseD_40;
            case 0x41:
              goto switchD_007adbf2_caseD_41;
            case 0x42:
              goto switchD_007adbf2_caseD_42;
            case 0x43:
              goto switchD_007adbf2_caseD_43;
            case 0x44:
              goto switchD_007adbf2_caseD_44;
            case 0x45:
              goto switchD_007adbf2_caseD_45;
            case 0x46:
              goto switchD_007adbf2_caseD_46;
            case 0x47:
              goto switchD_007adbf2_caseD_47;
            }
            goto switchD_007adbf2_default;
          }
          goto LAB_007adc08;
        }
        if ((uVar14 != 400) && (uVar14 != 0x192)) {
          switch(uVar14) {
          case 0x34:
switchD_007adbf2_caseD_34:
            uVar14 = 0x19;
            break;
          case 0x35:
switchD_007adbf2_caseD_35:
            uVar14 = 0x1a;
            break;
          case 0x36:
switchD_007adbf2_caseD_36:
            uVar14 = 0x1b;
            break;
          case 0x37:
switchD_007adbf2_caseD_37:
            uVar14 = 0x1c;
            break;
          case 0x38:
switchD_007adbf2_caseD_38:
            uVar14 = 0x1e;
            break;
          case 0x39:
switchD_007adbf2_caseD_39:
            uVar14 = 0x1f;
            break;
          case 0x3a:
switchD_007adbf2_caseD_3a:
            uVar14 = 0x1d;
            break;
          case 0x3b:
switchD_007adbf2_caseD_3b:
            uVar14 = 0x20;
            break;
          case 0x3c:
switchD_007adbf2_caseD_3c:
            uVar14 = 0x21;
            break;
          case 0x3d:
switchD_007adbf2_caseD_3d:
            uVar14 = 0x22;
            break;
          case 0x3e:
switchD_007adbf2_caseD_3e:
            uVar14 = 0x24;
            break;
          case 0x3f:
switchD_007adbf2_caseD_3f:
            uVar14 = 0x25;
            break;
          case 0x40:
switchD_007adbf2_caseD_40:
            uVar14 = 0x26;
            break;
          case 0x41:
switchD_007adbf2_caseD_41:
            uVar14 = 0x27;
            break;
          case 0x42:
switchD_007adbf2_caseD_42:
            uVar14 = 0x29;
            break;
          case 0x43:
switchD_007adbf2_caseD_43:
            uVar14 = 0x2a;
            break;
          case 0x44:
switchD_007adbf2_caseD_44:
            uVar14 = 0x28;
            break;
          case 0x45:
switchD_007adbf2_caseD_45:
            uVar14 = 0x2b;
            break;
          case 0x46:
switchD_007adbf2_caseD_46:
            uVar14 = 0x2c;
            break;
          case 0x47:
switchD_007adbf2_caseD_47:
            uVar14 = 0x2e;
          }
          goto switchD_007adbf2_default;
        }
        if (puVar3 != (undefined4 *)0x0) {
          puVar12 = (undefined4 *)*puVar3;
          goto LAB_007adf0c;
        }
        break;
      }
switchD_007adbf2_default:
      if ((iStack_68 == 0) || ((*(byte *)(iStack_68 + 0x18) & 1) == 0)) {
LAB_007adde7:
        if (*(char *)(in_ECX + 0x21e0) != '\0') {
          if (((char)((uint)uVar10 >> 0x18) == '\0') || (*(int *)(*(int *)(in_ECX + 0x40) + 8) == 0)
             ) {
            FUN_007abde0(&stack0xffffff7c);
            DAT_00b42cb0 = DAT_00b42cb0 + 0x10;
          }
          else {
            FUN_007ad1c0(*(undefined4 *)(*(int *)(in_ECX + 0x40) + 8),piVar4);
            DAT_00b42cb0 = DAT_00b42cb0 + 0x10;
          }
          goto LAB_007adc08;
        }
      }
      else if (*(char *)(in_ECX + 0x21e0) != '\0') {
        if ((((((unaff_EBX[7] & 0x100U) != 0) || ((float)unaff_EBX[8] < 1.0)) && (DAT_00b42eac != 5)
             ) && ((uVar14 < 0x156 || (0x15a < uVar14)))) && ((uVar14 < 0x160 || (0x164 < uVar14))))
        {
          if (((*(int *)(in_ECX + 0x5c) < 1) || (*(int *)(in_ECX + 0x60) == 0)) ||
             ((unaff_EBX[7] & 0x200U) == 0)) {
            FUN_005b1e20(&stack0xffffff7c);
            if (DAT_00b42ce3 == '\0') {
              if ((DAT_00b42ce1 == '\0') || ((float)_DAT_00b42ce4 <= *(float *)(*piVar4 + 0x28))) {
                FUN_005b1e20(piVar4);
              }
              else {
                FUN_005b1e20(piVar4);
              }
            }
            else {
              FUN_005b1e20(piVar4);
            }
          }
          else {
            FUN_007ad1c0(*(int *)(in_ECX + 0x60),piVar4);
          }
          goto LAB_007adc08;
        }
        goto LAB_007adde7;
      }
      if (DAT_00b42eac == 6) {
LAB_007adee8:
        DAT_00b42cb0 = DAT_00b42cb0 + 0x10;
      }
      else {
        if (DAT_00b2bb7c == '\0') {
LAB_007adea5:
          if (*(int *)(in_ECX + 0x78) == 0) {
            puVar12 = (undefined4 *)FUN_00401f00(0x18);
            if (puVar12 == (undefined4 *)0x0) {
              puVar12 = (undefined4 *)0x0;
            }
            else {
              *puVar12 = &PTR_LAB_00a8cb28;
              puVar12[1] = 0;
              puVar12[2] = 0;
              puVar12[3] = 0;
            }
            *(undefined4 **)(in_ECX + 0x78) = puVar12;
            puVar12[5] = 0;
            FUN_007aa6c0();
          }
          FUN_007abde0(&stack0xffffff7c);
          goto LAB_007adee8;
        }
        if ((short)piVar4[1] == 0x195) {
          FUN_007abde0(&stack0xffffff7c);
          DAT_00b42cb0 = DAT_00b42cb0 + 0x10;
        }
        else {
          if ((short)piVar4[1] != 0x76) goto LAB_007adea5;
          FUN_007abde0(&stack0xffffff7c);
          DAT_00b42cb0 = DAT_00b42cb0 + 0x10;
        }
      }
LAB_007adc08:
      if (puVar3 == (undefined4 *)0x0) break;
      puVar12 = (undefined4 *)*puVar3;
    }
    else {
      if (puVar3 == (undefined4 *)0x0) break;
      puVar12 = (undefined4 *)*puVar3;
    }
LAB_007adf0c:
    piVar4 = (int *)puVar3[2];
    puVar3 = puVar12;
  }
  DAT_00b42cd0 = DAT_00b42cd0 + 1;
  iVar8 = (**(code **)(*piStack_c + 0x10))();
  if (iVar8 == 0) {
    return 1;
  }
  iVar8 = **(int **)(iVar8 + 0xb4);
LAB_007ad6f5:
  uVar9 = (**(code **)(iVar8 + 0x5c))();
  DAT_00b42cc4 = DAT_00b42cc4 + (uVar9 & 0xffff);
  return 1;
}



void FUN_007aec20(int param_1)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *in_ECX;
  if (iVar2 != param_1) {
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x5c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00772560();
      }
    }
    *in_ECX = param_1;
    if (param_1 != 0) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      return;
    }
  }
  return;
}



void FUN_007aec60(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x44);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x44) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_007aecb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x58);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x58) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_007aed00(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cd503;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
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
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007aedb0(void)

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
  
  puStack_8 = &LAB_009cd57e;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a8ccdc;
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
  puVar2 = DAT_00b42d44;
  if (DAT_00b42d44 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(DAT_00b42d44 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_00b42d44 = (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)in_ECX[0x30];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x30] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x30];
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



void FUN_007aef80(undefined4 param_1)

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
              ("Camera Pos",0x10000007,0,1,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0xb0,0);
  }
  FUN_0077aa60(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_007af240(void)

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
  
  puStack_8 = &LAB_009cd5c8;
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
  FUN_00771640(0);
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
  local_4._0_1_ = 0;
  if ((local_10 != 0) &&
     (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(iVar6,1,3,2);
  FUN_00771640(0);
  FUN_00760010(*(undefined4 *)(in_ECX[0x25] + 0x14),iVar6);
  piVar4 = (int *)FUN_00772630(&local_10);
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
  local_4 = (uint)local_4._1_3_ << 8;
  if ((local_10 != 0) &&
     (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(iVar6,2,3,2);
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



void FUN_007af510(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  int *piVar5;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x98);
  piVar5 = (int *)(*(int *)(in_ECX + 0x94) + 0x58);
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
  puVar1 = *(undefined4 **)(in_ECX + 0x9c);
  iVar3 = *(int *)(in_ECX + 0x94);
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



void FUN_007af5b0(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  LONG LVar9;
  int in_ECX;
  undefined4 unaff_retaddr;
  float fVar10;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  piVar5 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x4c))();
  }
  iVar7 = (**(code **)(*piVar5 + 0x4c))(0);
  fVar2 = (float)iVar7;
  if (iVar7 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar3 = (float)iVar6;
  if (iVar6 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  piVar5 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x50))();
  }
  iVar7 = (**(code **)(*piVar5 + 0x50))(0);
  fVar10 = (float)iVar7;
  if (iVar7 < 0) {
    fVar10 = fVar10 + 4.2949673e+09;
  }
  fVar4 = (float)iVar6;
  if (iVar6 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  fVar10 = fVar10 / fVar4;
  uStack_18 = 0;
  uStack_14 = 0x3f800000;
  fStack_10 = 1.0;
  uStack_c = 0;
  if (DAT_00b42e96 != '\0') {
    unaff_retaddr = 0x3f800000;
    fVar10 = 1.0;
  }
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x4c))();
  }
  fVar4 = (float)iVar6;
  if (iVar6 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x50))();
  }
  *(undefined4 *)(in_ECX + 0xa0) = unaff_retaddr;
  *(float *)(in_ECX + 0xa4) = fVar10;
  *(float *)(in_ECX + 0xa8) = 0.5 / fVar4 + 0.0;
  fVar4 = (float)iVar6;
  if (iVar6 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(float *)(in_ECX + 0xac) = 0.5 / fVar4 + 0.0;
  uStack_14 = unaff_retaddr;
  if ((char)param_2 != '\0') {
    uStack_14 = 0x3f800000;
    fVar10 = 1.0;
  }
  fStack_10 = fVar10;
  FUN_00802890(*param_2);
  if (*(int *)(fVar2 / fVar3) == 0) {
    uVar8 = (**(code **)(*DAT_00b3f928 + 0x7c))();
  }
  else {
    uVar8 = FUN_007d6fe0();
  }
  FUN_007d70a0(uVar8,1);
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))(&uStack_18);
  }
  FUN_00709c60(DAT_00b3f928);
  FUN_007d7110();
  puVar1 = *(undefined4 **)(in_ECX + 0xc0);
  if (puVar1 != (undefined4 *)0x0) {
    LVar9 = InterlockedDecrement(puVar1 + 1);
    if ((LVar9 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0xc0) = 0;
  }
  return;
}



void FUN_007af820(void)

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
  puStack_8 = &LAB_009cd57e;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_008026c0(uVar4);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a8ccdc;
  _eh_vector_constructor_iterator_(in_ECX + 0x25,4,1,FUN_007c88a0,FUN_004027d0);
  piVar1 = in_ECX + 0x26;
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(piVar1,4,1,FUN_007c88a0,FUN_007016a0);
  piVar2 = in_ECX + 0x27;
  local_4._0_1_ = 2;
  _eh_vector_constructor_iterator_(piVar2,4,1,FUN_007c88a0,FUN_007016a0);
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x24] = 0;
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
  puVar3 = (undefined4 *)in_ECX[0x30];
  if (puVar3 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar3 + 1);
    if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    in_ECX[0x30] = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007af9a0(byte param_1)

{
  FUN_007aedb0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_007af9c0(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cd600;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar2);
  iVar5 = 0;
  iVar6 = 0;
  iStack_24 = 0;
  iVar7 = 0;
  iStack_4._0_1_ = 1;
  iStack_4._1_3_ = 0;
  if (in_ECX[0x24] == 0) {
    iVar5 = in_ECX[0x25];
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
      iStack_24 = iVar5;
    }
    iVar5 = iStack_24;
    iVar4 = **(int **)(iStack_24 + 0x24);
    if (iVar4 != 0) {
      *(int *)(iVar4 + 0x5c) = *(int *)(iVar4 + 0x5c) + 1;
      iVar7 = iVar4;
    }
    uVar3 = FUN_00405a30();
    FUN_0076c910(uVar3);
    if (*(int **)(in_ECX[0x1f] + 0x20) != (int *)0x0) {
      iVar6 = (**(code **)(**(int **)(in_ECX[0x1f] + 0x20) + 0x50))();
    }
    if (*(int **)(in_ECX[0x1f] + 0x20) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (**(code **)(**(int **)(in_ECX[0x1f] + 0x20) + 0x4c))();
    }
    fStack_1c = (float)iVar4;
    if (iVar4 < 0) {
      fStack_1c = fStack_1c + 4.2949673e+09;
    }
    fStack_1c = 1.0 / fStack_1c;
    fStack_18 = (float)iVar6;
    if (iVar6 < 0) {
      fStack_18 = fStack_18 + 4.2949673e+09;
    }
    fStack_18 = 1.0 / fStack_18;
    in_ECX[0x2c] = (int)fStack_1c;
    uStack_14 = 0;
    in_ECX[0x2d] = (int)fStack_18;
    uStack_10 = 0;
    in_ECX[0x2e] = 0;
    in_ECX[0x2f] = 0;
    iVar4 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
    iStack_20 = iVar6;
    if (iVar7 != iVar4) {
      if (iVar7 != 0) {
        piVar1 = (int *)(iVar7 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar7 = iVar4;
      if (iVar4 != 0) {
        *(int *)(iVar4 + 0x5c) = *(int *)(iVar4 + 0x5c) + 1;
      }
    }
    FUN_0076c910(in_ECX[0x30]);
    iVar6 = *(int *)(*(int *)(iVar5 + 0x24) + 8);
    if (iVar7 != iVar6) {
      if (iVar7 != 0) {
        piVar1 = (int *)(iVar7 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar7 = iVar6;
      if (iVar6 != 0) {
        *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 1;
      }
    }
    FUN_0076c910(DAT_00b42d44);
    FUN_0076ce40(in_ECX[0xe],&iStack_24);
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  if (iVar7 != 0) {
    piVar1 = (int *)(iVar7 + 0x5c);
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



int * FUN_007afbb0(void)

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
    piVar7 = (int *)FUN_007af820();
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



void FUN_007afd40(void)

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
  
  puStack_8 = &LAB_009cd666;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a8ce1c;
  puVar1 = (undefined4 *)in_ECX[0x38];
  iVar4 = 3;
  local_4 = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[0x38] = 0;
  }
  piVar5 = in_ECX + 0x28;
  do {
    puVar1 = (undefined4 *)piVar5[-3];
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      piVar5[-3] = 0;
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
  puVar1 = (undefined4 *)in_ECX[0x38];
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x28,4,3,FUN_007016a0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x25,4,3,FUN_007016a0);
  local_4 = 0xffffffff;
  FUN_00802760();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007afea0(undefined4 param_1)

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
              ("blendW",0x10000007,0,0,1,&DAT_00a2f7ec,0x10,4,&DAT_00b2c2c4,0);
    (**(code **)(**(int **)(in_ECX + 0x2c) + 0x18))
              ("alphaAdd",0x10000007,0,2,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0xd0,0);
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
              ("x texcoord offsets",0x10000007,0,4,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0xb0,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("y texcoord offsets",0x10000007,0,5,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0xc0,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("texRatio0",0x10000007,0,6,1,&DAT_00a2f7ec,0x10,4,&DAT_00b2c2d4,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("texRatio1",0x10000007,0,7,1,&DAT_00a2f7ec,0x10,4,&DAT_00b2c2e4,0);
  }
  FUN_0077aa60(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}


