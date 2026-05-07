
void FUN_006f0010(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_3 + 1);
    }
    param_1 = (undefined4 *)((int)param_1 + 6);
  }
  return;
}



int FUN_006f0040(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar1 = param_2;
    do {
      iVar2 = iVar1 + -6;
      *(undefined4 *)((param_3 - param_2) + iVar2) = *(undefined4 *)(iVar1 + -6);
      *(undefined2 *)((param_3 - param_2) + 4 + iVar2) = *(undefined2 *)(iVar1 + -2);
      iVar1 = iVar2;
    } while (iVar2 != param_1);
  }
  return param_3 + ((param_2 - param_1) / 6) * -6;
}



void FUN_006f0090(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = (undefined4 *)((int)param_1 + 6)) {
    *param_1 = *param_3;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_3 + 1);
  }
  return;
}



int FUN_006f00c0(int param_1,int param_2,undefined4 param_3)

{
  FUN_006f0010(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}



void FUN_006f0100(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006f0040(param_1,param_2,param_3,param_3,param_3,0);
  return;
}



void FUN_006f0130(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_005567d0(param_1,param_2,param_3);
  return;
}



void FUN_006f0160(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  uint extraout_ECX;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  undefined4 local_20;
  undefined2 local_1c;
  int local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009c8670;
  local_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&local_10;
  iVar3 = *(int *)(in_ECX + 4);
  local_20 = *param_4;
  local_1c = *(undefined2 *)(param_4 + 1);
  if (iVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)(in_ECX + 0xc) - iVar3) / 6;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar3) / 6;
    }
    puVar1 = &uStack_30;
    if (-iVar2 - 1U < param_3) {
      FUN_00790b90();
      uVar6 = extraout_ECX;
      puVar1 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar3) / 6;
    }
    if (uVar6 < iVar2 + param_3) {
      if (-(uVar6 >> 1) - 1 < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_ECX + 8) - iVar3) / 6;
      }
      if (uVar6 < iVar3 + param_3) {
        iVar3 = FUN_0054f700();
        uVar6 = iVar3 + param_3;
      }
      local_18 = uVar6 * 6;
      iVar2 = FUN_00401f00(local_18);
      local_8 = 0;
      uVar4 = FUN_005567d0(*(undefined4 *)(in_ECX + 4),param_2,iVar2);
      uVar4 = FUN_006f00c0(uVar4,param_3,&local_20);
      FUN_005567d0(param_2,*(undefined4 *)(in_ECX + 8),uVar4);
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (*(int *)(in_ECX + 8) - iVar3) / 6;
      }
      if (iVar3 != 0) {
        FUN_00401f20(iVar3);
      }
      *(int *)(in_ECX + 0xc) = local_18 + iVar2;
      *(uint *)(in_ECX + 8) = iVar2 + (param_3 + iVar5) * 6;
      *(int *)(in_ECX + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar3 = *(int *)(in_ECX + 8);
    if ((uint)((iVar3 - param_2) / 6) < param_3) {
      FUN_006f0130(param_2,iVar3,param_3 * 6 + param_2);
      local_8 = 2;
      FUN_006f00c0(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2) / 6,&local_20);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 6;
      FUN_006f0090(param_2,*(int *)(in_ECX + 8) + param_3 * -6,&local_20);
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar2 = iVar3 + param_3 * -6;
    uVar4 = FUN_006f0130(iVar2,iVar3,iVar3);
    *(undefined4 *)(in_ECX + 8) = uVar4;
    FUN_006f0100(param_2,iVar2,iVar3);
    FUN_006f0090(param_2,param_3 * 6 + param_2,&local_20);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_006f0400(uint param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  
  uVar2 = *(uint *)(in_ECX + 4);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (int)(*(int *)(in_ECX + 8) - uVar2) / 6;
  }
  if (uVar3 < param_1) {
    if (uVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(*(int *)(in_ECX + 8) - uVar2) / 6;
    }
    uVar3 = *(uint *)(in_ECX + 8);
    if (uVar3 < uVar2) {
      FUN_00984d5e();
    }
    FUN_006f0160(in_ECX,uVar3,param_1 - iVar4,&param_2);
    return;
  }
  if (uVar2 != 0) {
    uVar3 = *(uint *)(in_ECX + 8);
    if (param_1 < (uint)((int)(uVar3 - uVar2) / 6)) {
      if (uVar3 < uVar2) {
        FUN_00984d5e();
      }
      uVar2 = *(uint *)(in_ECX + 4);
      if (*(uint *)(in_ECX + 8) < uVar2) {
        FUN_00984d5e();
      }
      uVar1 = uVar2 + param_1 * 6;
      param_3 = uVar2;
      if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
        FUN_00984d5e();
      }
      FUN_00556d00(&param_2,in_ECX,uVar1,in_ECX,uVar3);
    }
  }
  return;
}



void FUN_006f04d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_009c86a1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      FUN_00557250(param_3 + 1);
    }
    param_1 = param_1 + 5;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



int FUN_006f0580(int param_1,int param_2,undefined4 param_3)

{
  FUN_006f04d0(param_1,param_2,param_3);
  return param_1 + param_2 * 0x14;
}



void FUN_006f05c0(undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  uint extraout_ECX;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  uint uStack_44;
  undefined4 local_34;
  undefined1 local_30 [4];
  int local_2c;
  int local_20;
  uint local_1c;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009c86c8;
  local_10 = *unaff_FS_OFFSET;
  uStack_44 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  *unaff_FS_OFFSET = (int)&local_10;
  local_34 = *param_4;
  FUN_00557250(param_4 + 1);
  iVar2 = *(int *)(in_ECX + 4);
  uVar5 = 0;
  local_8 = 0;
  if (iVar2 != 0) {
    uVar5 = (*(int *)(in_ECX + 0xc) - iVar2) / 0x14;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x14;
    }
    if (-iVar1 - 1U < param_3) {
      FUN_00790b90();
      uVar5 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x14;
    }
    if (uVar5 < iVar1 + param_3) {
      if (-(uVar5 >> 1) - 1 < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x14;
      }
      if (uVar5 < iVar2 + param_3) {
        iVar2 = FUN_0054f720();
        uVar5 = iVar2 + param_3;
      }
      local_20 = uVar5 * 0x14;
      iVar1 = FUN_00401f00(local_20);
      local_1c = local_1c & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,1);
      uVar3 = FUN_00557880(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar3 = FUN_006f0580(uVar3,param_3,&local_34);
      FUN_00557880(param_2,*(undefined4 *)(in_ECX + 8),uVar3);
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar2) / 0x14;
      }
      if (iVar2 != 0) {
        FUN_00557430(iVar2,*(undefined4 *)(in_ECX + 8));
        FUN_00401f20(*(undefined4 *)(in_ECX + 4));
      }
      *(int *)(in_ECX + 0xc) = local_20 + iVar1;
      *(uint *)(in_ECX + 8) = iVar1 + (param_3 + iVar4) * 0x14;
      *(int *)(in_ECX + 4) = iVar1;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8);
      if ((uint)((iVar2 - (int)param_2) / 0x14) < param_3) {
        FUN_00559300(param_2,iVar2,param_2 + param_3 * 5);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_006f0580(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - (int)param_2) / 0x14,
                     &local_34);
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x14;
        iVar2 = *(int *)(in_ECX + 8);
        local_8 = 0;
        for (; param_2 != (undefined4 *)(iVar2 + param_3 * -0x14); param_2 = param_2 + 5) {
          *param_2 = local_34;
          FUN_00557470(local_30);
        }
      }
      else {
        iVar1 = iVar2 + param_3 * -0x14;
        uVar3 = FUN_00559300(iVar1,iVar2,iVar2);
        *(undefined4 *)(in_ECX + 8) = uVar3;
        FUN_00558650(param_2,iVar1,iVar2);
        puVar6 = param_2 + param_3 * 5;
        for (; param_2 != puVar6; param_2 = param_2 + 5) {
          *param_2 = local_34;
          FUN_00557470(local_30);
        }
      }
    }
  }
  if (local_2c != 0) {
    FUN_00401f20(local_2c);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_006f08e0(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 local_14 [4];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c86f8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar2 = *(uint *)(in_ECX + 4);
  iVar5 = 0;
  local_4 = 0;
  if (uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (int)(*(int *)(in_ECX + 8) - uVar2) / 0x14;
  }
  if (uVar4 < param_1) {
    if (uVar2 != 0) {
      iVar5 = (int)(*(int *)(in_ECX + 8) - uVar2) / 0x14;
    }
    uVar4 = *(uint *)(in_ECX + 8);
    if (uVar4 < uVar2) {
      FUN_00984d5e(uVar3);
    }
    FUN_006f05c0(in_ECX,uVar4,param_1 - iVar5,&param_2);
  }
  else if (uVar2 != 0) {
    uVar4 = *(uint *)(in_ECX + 8);
    if (param_1 < (uint)((int)(uVar4 - uVar2) / 0x14)) {
      if (uVar4 < uVar2) {
        FUN_00984d5e(uVar3);
      }
      uVar2 = *(uint *)(in_ECX + 4);
      if (*(uint *)(in_ECX + 8) < uVar2) {
        FUN_00984d5e(uVar3);
      }
      uVar1 = uVar2 + param_1 * 0x14;
      local_10 = uVar2;
      if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
        FUN_00984d5e(uVar3);
      }
      FUN_00559240(local_14,in_ECX,uVar1,in_ECX,uVar4);
    }
  }
  if (param_4 != 0) {
    FUN_00401f20(param_4);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_006f0a00(undefined4 param_1,undefined4 *param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_e0;
  uint local_dc;
  uint local_d8;
  undefined1 auStack_d4 [4];
  undefined4 uStack_d0;
  undefined1 **local_cc;
  undefined4 local_c8;
  uint local_c4;
  uint uStack_c0;
  undefined1 *local_ac;
  uint local_a8;
  int local_a4;
  undefined1 *local_a0;
  undefined4 local_9a;
  undefined **local_94;
  undefined4 *local_54;
  undefined1 *local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c8741;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_ac;
  uStack_c0 = DAT_00b30aac ^ (uint)&stack0xffffff44;
  *unaff_FS_OFFSET = (int)&local_c;
  local_a0 = (undefined1 *)&local_dc;
  uStack_e0 = 8;
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8 = local_d8 & 0xffffff00;
  FUN_00414500("FREGM002");
  uStack_e0 = 0x6f0a87;
  FUN_006f6110();
  local_c4 = 0;
  local_ac = (undefined1 *)&uStack_e0;
  local_c8 = 0xf;
  local_cc = (undefined1 **)0x0;
  local_4 = 0;
  local_dc = local_dc & 0xffffff00;
  FUN_00414420(param_1,0,0xffffffff);
  cVar1 = FUN_006f66e0();
  if (cVar1 == '\0') {
    local_4 = 0xffffffff;
    local_c4 = 0x6f0ad1;
    FUN_006ed7c0();
    uVar2 = 0;
  }
  else {
    local_c4 = 0x38;
    local_c8 = 1;
    local_cc = &local_50;
    uStack_d0 = 0x6f0ae6;
    cVar1 = FUN_006f5e50();
    if (cVar1 == '\0') {
LAB_006f0aea:
      local_4 = 0xffffffff;
      local_c4 = 0x6f0afe;
      FUN_006ed7c0();
      uVar2 = 0;
    }
    else {
      *param_2 = local_44;
      local_c4 = 0x6f0b12;
      FUN_005598f0();
      local_c4 = 0x6f0b19;
      FUN_005598f0();
      local_ac = auStack_d4;
      local_d8 = local_4c;
      local_cc = (undefined1 **)0x0;
      local_c8 = 0;
      local_c4 = 0;
      local_dc = 0x6f0b39;
      FUN_006f08e0();
      local_ac = auStack_d4;
      local_d8 = local_48;
      local_cc = (undefined1 **)0x0;
      local_c8 = 0;
      local_c4 = 0;
      local_dc = 0x6f0b57;
      FUN_006f08e0();
      local_a8 = 0;
      if (local_4c != 0) {
        local_9a = 0;
        local_a4 = 0;
        do {
          iVar6 = local_a4;
          uVar4 = local_a8;
          if ((*(int *)(param_3 + 4) == 0) ||
             ((uint)((*(int *)(param_3 + 8) - *(int *)(param_3 + 4)) / 0x14) <= local_a8)) {
            local_c4 = 0x6f0ba1;
            FUN_00984d5e();
          }
          local_c8 = local_9a;
          local_c4 = local_c4 & 0xffff0000;
          local_cc = (undefined1 **)local_50;
          uStack_d0 = 0x6f0bc4;
          FUN_006f0400();
          local_c4 = 1;
          local_c8 = 4;
          local_cc = &local_a0;
          uStack_d0 = 0x6f0bd6;
          cVar1 = FUN_006f5d40();
          if (cVar1 == '\0') goto LAB_006f0aea;
          if ((*(int *)(param_3 + 4) == 0) ||
             ((uint)((*(int *)(param_3 + 8) - *(int *)(param_3 + 4)) / 0x14) <= uVar4)) {
            local_c4 = 0x6f0c04;
            FUN_00984d5e();
          }
          *(undefined1 **)(*(int *)(param_3 + 4) + iVar6) = local_a0;
          puVar3 = (undefined1 *)0x0;
          if (local_50 != (undefined1 *)0x0) {
            local_ac = (undefined1 *)0x0;
            do {
              local_c4 = 3;
              local_c8 = 2;
              local_cc = (undefined1 **)&local_18;
              uStack_d0 = 0x6f0c35;
              cVar1 = FUN_006f5d40();
              if (cVar1 == '\0') goto LAB_006f0aea;
              if ((*(int *)(param_3 + 4) == 0) ||
                 ((uint)((*(int *)(param_3 + 8) - *(int *)(param_3 + 4)) / 0x14) <= uVar4)) {
                local_c4 = 0x6f0c63;
                FUN_00984d5e();
              }
              iVar6 = *(int *)(param_3 + 4) + local_a4;
              if ((*(int *)(iVar6 + 8) == 0) ||
                 ((undefined1 *)((*(int *)(iVar6 + 0xc) - *(int *)(iVar6 + 8)) / 6) <= puVar3)) {
                local_c4 = 0x6f0c8d;
                FUN_00984d5e();
              }
              *(undefined2 *)(local_ac + *(int *)(iVar6 + 8)) = local_18;
              if ((*(int *)(param_3 + 4) == 0) ||
                 ((uint)((*(int *)(param_3 + 8) - *(int *)(param_3 + 4)) / 0x14) <= local_a8)) {
                local_c4 = 0x6f0cc8;
                FUN_00984d5e();
              }
              iVar6 = *(int *)(param_3 + 4) + local_a4;
              if ((*(int *)(iVar6 + 8) == 0) ||
                 ((undefined1 *)((*(int *)(iVar6 + 0xc) - *(int *)(iVar6 + 8)) / 6) <= puVar3)) {
                local_c4 = 0x6f0cf2;
                FUN_00984d5e();
              }
              *(undefined2 *)(local_ac + *(int *)(iVar6 + 8) + 2) = local_16;
              if ((*(int *)(param_3 + 4) == 0) ||
                 ((uint)((*(int *)(param_3 + 8) - *(int *)(param_3 + 4)) / 0x14) <= local_a8)) {
                local_c4 = 0x6f0d2e;
                FUN_00984d5e();
              }
              iVar6 = *(int *)(param_3 + 4) + local_a4;
              if ((*(int *)(iVar6 + 8) == 0) ||
                 ((undefined1 *)((*(int *)(iVar6 + 0xc) - *(int *)(iVar6 + 8)) / 6) <= puVar3)) {
                local_c4 = 0x6f0d58;
                FUN_00984d5e();
              }
              *(undefined2 *)(local_ac + *(int *)(iVar6 + 8) + 4) = local_14;
              puVar3 = puVar3 + 1;
              local_ac = local_ac + 6;
              uVar4 = local_a8;
            } while (puVar3 < local_50);
          }
          local_a4 = local_a4 + 0x14;
          local_a8 = uVar4 + 1;
        } while (local_a8 < local_4c);
      }
      uVar4 = 0;
      if (local_48 != 0) {
        local_9a = 0;
        local_a8 = 0;
        do {
          uVar5 = local_a8;
          puVar3 = (undefined1 *)0x0;
          if ((*(int *)(param_4 + 4) == 0) ||
             ((uint)((*(int *)(param_4 + 8) - *(int *)(param_4 + 4)) / 0x14) <= uVar4)) {
            local_c4 = 0x6f0dde;
            FUN_00984d5e();
          }
          local_c8 = local_9a;
          local_c4 = local_c4 & 0xffff0000;
          local_cc = (undefined1 **)local_50;
          uStack_d0 = 0x6f0e01;
          FUN_006f0400();
          local_c4 = 1;
          local_c8 = 4;
          local_cc = &local_a0;
          uStack_d0 = 0x6f0e13;
          cVar1 = FUN_006f5d40();
          if (cVar1 == '\0') goto LAB_006f0aea;
          if ((*(int *)(param_4 + 4) == 0) ||
             ((uint)((*(int *)(param_4 + 8) - *(int *)(param_4 + 4)) / 0x14) <= uVar4)) {
            local_c4 = 0x6f0e41;
            FUN_00984d5e();
          }
          *(undefined1 **)(uVar5 + *(int *)(param_4 + 4)) = local_a0;
          if (local_50 != (undefined1 *)0x0) {
            local_ac = (undefined1 *)0x0;
            do {
              local_c4 = 3;
              local_c8 = 2;
              local_cc = (undefined1 **)&local_18;
              uStack_d0 = 0x6f0e73;
              cVar1 = FUN_006f5d40();
              if (cVar1 == '\0') {
                local_94 = &PTR_FUN_00a7cd5c;
                local_4 = 1;
                if (local_54 != (undefined4 *)0x0) {
                  local_c4 = 1;
                  local_c8 = 0x6f105c;
                  (**(code **)*local_54)();
                }
                local_54 = (undefined4 *)0x0;
                local_4 = 0xffffffff;
                local_c4 = 0x6f1078;
                FUN_006ed710();
                uVar2 = 0;
                goto LAB_006f1011;
              }
              if ((*(int *)(param_4 + 4) == 0) ||
                 ((uint)((*(int *)(param_4 + 8) - *(int *)(param_4 + 4)) / 0x14) <= uVar4)) {
                local_c4 = 0x6f0ea1;
                FUN_00984d5e();
              }
              iVar6 = *(int *)(param_4 + 4) + local_a8;
              if ((*(int *)(iVar6 + 8) == 0) ||
                 ((undefined1 *)((*(int *)(iVar6 + 0xc) - *(int *)(iVar6 + 8)) / 6) <= puVar3)) {
                local_c4 = 0x6f0ecb;
                FUN_00984d5e();
              }
              *(undefined2 *)(local_ac + *(int *)(iVar6 + 8)) = local_18;
              if ((*(int *)(param_4 + 4) == 0) ||
                 ((uint)((*(int *)(param_4 + 8) - *(int *)(param_4 + 4)) / 0x14) <= uVar4)) {
                local_c4 = 0x6f0f04;
                FUN_00984d5e();
              }
              iVar6 = *(int *)(param_4 + 4) + local_a8;
              if ((*(int *)(iVar6 + 8) == 0) ||
                 ((undefined1 *)((*(int *)(iVar6 + 0xc) - *(int *)(iVar6 + 8)) / 6) <= puVar3)) {
                local_c4 = 0x6f0f2e;
                FUN_00984d5e();
              }
              *(undefined2 *)(local_ac + *(int *)(iVar6 + 8) + 2) = local_16;
              if ((*(int *)(param_4 + 4) == 0) ||
                 ((uint)((*(int *)(param_4 + 8) - *(int *)(param_4 + 4)) / 0x14) <= uVar4)) {
                local_c4 = 0x6f0f68;
                FUN_00984d5e();
              }
              iVar6 = *(int *)(param_4 + 4) + local_a8;
              if ((*(int *)(iVar6 + 8) == 0) ||
                 ((undefined1 *)((*(int *)(iVar6 + 0xc) - *(int *)(iVar6 + 8)) / 6) <= puVar3)) {
                local_c4 = 0x6f0f92;
                FUN_00984d5e();
              }
              *(undefined2 *)(local_ac + *(int *)(iVar6 + 8) + 4) = local_14;
              puVar3 = puVar3 + 1;
              local_ac = local_ac + 6;
              uVar5 = local_a8;
            } while (puVar3 < local_50);
          }
          uVar4 = uVar4 + 1;
          local_a8 = uVar5 + 0x14;
        } while (uVar4 < local_48);
      }
      local_94 = &PTR_FUN_00a7cd5c;
      local_4 = 2;
      if (local_54 != (undefined4 *)0x0) {
        local_c4 = 1;
        local_c8 = 0x6f0ff7;
        (**(code **)*local_54)();
      }
      local_54 = (undefined4 *)0x0;
      local_4 = 0xffffffff;
      local_c4 = 0x6f100f;
      FUN_006ed710();
      uVar2 = 1;
    }
  }
LAB_006f1011:
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}



int FUN_006f1080(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0xc;
}



int FUN_006f10a0(uint param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) == 0) ||
     ((uint)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0xc) <= param_1)) {
    FUN_00984d5e();
  }
  return *(int *)(in_ECX + 4) + param_1 * 0xc;
}



int FUN_006f10e0(uint param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) == 0) ||
     ((uint)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 4) <= param_1)) {
    FUN_00984d5e();
  }
  return param_1 * 0x10 + *(int *)(in_ECX + 4);
}



int FUN_006f1110(uint param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) == 0) ||
     ((uint)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 5) <= param_1)) {
    FUN_00984d5e();
  }
  return param_1 * 0x20 + *(int *)(in_ECX + 4);
}



int FUN_006f1140(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x2c;
}



int FUN_006f1160(uint param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) == 0) ||
     ((uint)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x2c) <= param_1)) {
    FUN_00984d5e();
  }
  return param_1 * 0x2c + *(int *)(in_ECX + 4);
}



void FUN_006f11a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_3 = param_3 + 3;
  }
  return;
}



void FUN_006f11e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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



int FUN_006f1210(uint param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) == 0) ||
     ((uint)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) <= param_1)) {
    FUN_00984d5e();
  }
  return *(int *)(in_ECX + 4) + param_1;
}



int FUN_006f1240(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_2 - (int)param_1;
  if (param_1 != param_2) {
    iVar2 = param_3 - (int)param_1;
    do {
      *(undefined4 *)(iVar2 + (int)param_1) = *param_1;
      *(undefined4 *)(iVar2 + 4 + (int)param_1) = param_1[1];
      *(undefined4 *)(iVar2 + 8 + (int)param_1) = param_1[2];
      param_1 = param_1 + 3;
    } while (param_1 != param_2);
  }
  return param_3 + (iVar1 / 0xc) * 0xc;
}



void FUN_006f1290(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
    }
    param_1 = param_1 + 3;
  }
  return;
}



void FUN_006f12d0(undefined4 *param_1,int param_2,undefined4 *param_3)

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



int FUN_006f1300(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    iVar3 = param_3 - param_2;
    iVar1 = param_2;
    do {
      iVar2 = iVar1 + -0x10;
      *(undefined4 *)(iVar3 + iVar2) = *(undefined4 *)(iVar1 + -0x10);
      *(undefined4 *)(iVar3 + 4 + iVar2) = *(undefined4 *)(iVar1 + -0xc);
      *(undefined4 *)(iVar3 + 8 + iVar2) = *(undefined4 *)(iVar1 + -8);
      *(undefined4 *)(iVar3 + 0xc + iVar2) = *(undefined4 *)(iVar1 + -4);
      iVar1 = iVar2;
    } while (iVar2 != param_1);
  }
  return param_3 + (param_2 - param_1 >> 4) * -0x10;
}



void FUN_006f1350(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006f1240(param_1,param_2,param_3,param_2,param_2,0);
  return;
}



int FUN_006f1380(int param_1,int param_2,undefined4 param_3)

{
  FUN_006f1290(param_1,param_2,param_3);
  return param_1 + param_2 * 0xc;
}



int FUN_006f13c0(int param_1,int param_2,undefined4 param_3)

{
  FUN_0054d9d0(param_1,param_2,param_3);
  return param_2 * 0x10 + param_1;
}



int FUN_006f1400(int param_1,int param_2,undefined4 param_3)

{
  FUN_006f12d0(param_1,param_2,param_3);
  return param_1 + param_2 * 8;
}



void FUN_006f1440(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006f1300(param_1,param_2,param_3,param_3,param_3,0);
  return;
}



void FUN_006f1470(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

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
    uVar2 = FUN_006f1240(param_5,*(undefined4 *)(in_ECX + 8),param_3,param_1,param_1,param_2);
    *(undefined4 *)(in_ECX + 8) = uVar2;
  }
  param_1[1] = param_3;
  *param_1 = uVar1;
  return;
}



void FUN_006f14d0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

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
    uVar2 = FUN_0054d950(param_5,*(undefined4 *)(in_ECX + 8),param_3,param_1,param_1,param_2);
    *(undefined4 *)(in_ECX + 8) = uVar2;
  }
  param_1[1] = param_3;
  *param_1 = uVar1;
  return;
}



void FUN_006f1530(int *param_1,int param_2,undefined4 *param_3,int param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00984d5e();
  }
  if (param_3 != param_5) {
    puVar1 = *(undefined4 **)(in_ECX + 8);
    iVar2 = (int)puVar1 - (int)param_5;
    if (param_5 != puVar1) {
      iVar3 = (int)param_3 - (int)param_5;
      do {
        *(undefined4 *)(iVar3 + (int)param_5) = *param_5;
        *(undefined4 *)(iVar3 + 4 + (int)param_5) = param_5[1];
        param_5 = param_5 + 2;
      } while (param_5 != puVar1);
    }
    *(undefined4 **)(in_ECX + 8) = param_3 + (iVar2 >> 3) * 2;
  }
  param_1[1] = (int)param_3;
  *param_1 = param_2;
  return;
}



void FUN_006f15a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006f11a0(param_1,param_2,param_3);
  return;
}



void FUN_006f15d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0054d910(param_1,param_2,param_3);
  return;
}



void FUN_006f1600(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006f11e0(param_1,param_2,param_3);
  return;
}



void FUN_006f1630(void)

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
  FUN_006f1470(local_8,in_ECX,uVar2,in_ECX,uVar1);
  return;
}



void FUN_006f1670(undefined4 *param_1,undefined4 *param_2)

{
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc631;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[7] = 0xf;
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    FUN_00414420(param_2 + 1,0,0xffffffff);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006f16f0(undefined4 *param_1,undefined4 *param_2)

{
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc631;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[10] = 0xf;
    param_1[9] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    FUN_00414420(param_2 + 4,0,0xffffffff);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006f1780(void)

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
  FUN_00414500("vector<T> too long",0x12);
  local_4 = 0;
  FUN_004146e0(local_50);
  local_34[0] = &PTR_FUN_00a370b8;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ad9930);
}



int FUN_006f1800(int param_1,int param_2,int param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009c87a0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_006f1670(param_3,param_1);
    param_3 = param_3 + 0x20;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}



int FUN_006f18a0(int param_1,int param_2,int param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009c87c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x2c) {
    FUN_006f16f0(param_3,param_1);
    param_3 = param_3 + 0x2c;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}



void FUN_006f1940(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  uint extraout_ECX;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009c87e0;
  local_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&local_10;
  local_24 = *param_4;
  local_20 = param_4[1];
  iVar3 = *(int *)(in_ECX + 4);
  local_1c = param_4[2];
  if (iVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)(in_ECX + 0xc) - iVar3) / 0xc;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar3) / 0xc;
    }
    puVar1 = &uStack_34;
    if (-iVar2 - 1U < param_3) {
      FUN_00790b90();
      uVar6 = extraout_ECX;
      puVar1 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar3) / 0xc;
    }
    if (uVar6 < iVar2 + param_3) {
      if (-(uVar6 >> 1) - 1 < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_ECX + 8) - iVar3) / 0xc;
      }
      if (uVar6 < iVar3 + param_3) {
        iVar3 = FUN_006f1080();
        uVar6 = iVar3 + param_3;
      }
      local_18 = uVar6 * 0xc;
      iVar2 = FUN_00401f00(local_18);
      local_8 = 0;
      uVar4 = FUN_006f11a0(*(undefined4 *)(in_ECX + 4),param_2,iVar2);
      uVar4 = FUN_006f1380(uVar4,param_3,&local_24);
      FUN_006f11a0(param_2,*(undefined4 *)(in_ECX + 8),uVar4);
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (*(int *)(in_ECX + 8) - iVar3) / 0xc;
      }
      if (iVar3 != 0) {
        FUN_00401f20(iVar3);
      }
      *(int *)(in_ECX + 0xc) = local_18 + iVar2;
      *(uint *)(in_ECX + 8) = iVar2 + (param_3 + iVar5) * 0xc;
      *(int *)(in_ECX + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar3 = *(int *)(in_ECX + 8);
    if ((uint)((iVar3 - param_2) / 0xc) < param_3) {
      FUN_006f15a0(param_2,iVar3,param_3 * 0xc + param_2);
      local_8 = 2;
      FUN_006f1380(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2) / 0xc,&local_24);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0xc;
      FUN_00790460(param_2,*(int *)(in_ECX + 8) + param_3 * -0xc,&local_24);
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar2 = iVar3 + param_3 * -0xc;
    uVar4 = FUN_006f15a0(iVar2,iVar3,iVar3);
    *(undefined4 *)(in_ECX + 8) = uVar4;
    FUN_0079aaa0(param_2,iVar2,iVar3);
    FUN_00790460(param_2,param_3 * 0xc + param_2,&local_24);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



undefined4 FUN_006f1bf0(uint param_1)

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
  if (0x3fffffff < param_1) {
    uVar1 = FUN_006f1780();
  }
  iVar2 = FUN_0078fb60(param_1,uVar1);
  *(int *)(in_ECX + 4) = iVar2;
  *(int *)(in_ECX + 8) = iVar2;
  iVar2 = iVar2 + param_1 * 4;
  *(int *)(in_ECX + 0xc) = iVar2;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}



void FUN_006f1c40(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

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
      FUN_006f1780();
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



void FUN_006f1e00(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int extraout_ECX;
  int iVar6;
  int *unaff_FS_OFFSET;
  uint uStack_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009c8800;
  local_10 = *unaff_FS_OFFSET;
  uStack_38 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  *unaff_FS_OFFSET = (int)&local_10;
  local_28 = *param_4;
  local_24 = param_4[1];
  local_20 = param_4[2];
  iVar3 = *(int *)(in_ECX + 4);
  local_1c = param_4[3];
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(in_ECX + 0xc) - iVar3 >> 4;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(in_ECX + 8) - iVar3 >> 4;
    }
    puVar1 = &uStack_38;
    if (-iVar6 - 1U < param_3) {
      uVar2 = FUN_00790b90();
      iVar3 = extraout_ECX;
      puVar1 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar1;
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(in_ECX + 8) - iVar3 >> 4;
    }
    if (uVar2 < iVar6 + param_3) {
      if (-(uVar2 >> 1) - 1 < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(in_ECX + 8) - iVar3 >> 4;
      }
      if (uVar2 < iVar6 + param_3) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(in_ECX + 8) - iVar3 >> 4;
        }
        uVar2 = iVar3 + param_3;
      }
      iVar6 = FUN_00401f00(uVar2 * 0x10);
      local_8 = 0;
      local_18 = iVar6;
      uVar4 = FUN_0054d910(*(undefined4 *)(in_ECX + 4),param_2,iVar6);
      uVar4 = FUN_006f13c0(uVar4,param_3,&local_28);
      FUN_0054d910(param_2,*(undefined4 *)(in_ECX + 8),uVar4);
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_ECX + 8) - iVar3 >> 4;
      }
      if (iVar3 != 0) {
        FUN_00401f20(iVar3);
      }
      *(uint *)(in_ECX + 0xc) = uVar2 * 0x10 + iVar6;
      *(uint *)(in_ECX + 8) = (param_3 + iVar5) * 0x10 + iVar6;
      *(int *)(in_ECX + 4) = iVar6;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar3 = *(int *)(in_ECX + 8);
    if ((uint)(iVar3 - param_2 >> 4) < param_3) {
      FUN_006f15d0(param_2,iVar3,param_3 * 0x10 + param_2);
      local_8 = 2;
      FUN_006f13c0(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2 >> 4),&local_28);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x10;
      FUN_0054d9a0(param_2,*(int *)(in_ECX + 8) + param_3 * -0x10,&local_28);
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar6 = iVar3 + param_3 * -0x10;
    uVar4 = FUN_006f15d0(iVar6,iVar3,iVar3);
    *(undefined4 *)(in_ECX + 8) = uVar4;
    FUN_006f1440(param_2,iVar6,iVar3);
    FUN_0054d9a0(param_2,param_3 * 0x10 + param_2,&local_28);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_006f2060(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int extraout_ECX;
  uint uVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined8 uVar8;
  uint uStack_34;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009c8820;
  local_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&local_10;
  local_24 = *param_4;
  iVar3 = *(int *)(in_ECX + 4);
  local_20 = param_4[1];
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(in_ECX + 0xc) - iVar3 >> 3;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(in_ECX + 8) - iVar3 >> 3;
    }
    uVar6 = param_3;
    puVar1 = &uStack_34;
    if (-iVar7 - 1U < param_3) {
      uVar8 = FUN_00790b90();
      uVar6 = (uint)((ulonglong)uVar8 >> 0x20);
      uVar2 = (uint)uVar8;
      iVar3 = extraout_ECX;
      puVar1 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar1;
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(in_ECX + 8) - iVar3 >> 3;
    }
    if (uVar2 < iVar7 + uVar6) {
      if (-(uVar2 >> 1) - 1 < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(in_ECX + 8) - iVar3 >> 3;
      }
      if (uVar2 < iVar7 + uVar6) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(in_ECX + 8) - iVar3 >> 3;
        }
        uVar2 = iVar3 + uVar6;
      }
      local_18 = uVar2 * 8;
      iVar7 = FUN_00401f00(local_18);
      local_8 = 0;
      local_1c = iVar7;
      uVar4 = FUN_006f11e0(*(undefined4 *)(in_ECX + 4),param_2,iVar7);
      uVar4 = FUN_006f1400(uVar4,param_3,&local_24);
      FUN_006f11e0(param_2,*(undefined4 *)(in_ECX + 8),uVar4);
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_ECX + 8) - iVar3 >> 3;
      }
      if (iVar3 != 0) {
        FUN_00401f20(iVar3);
      }
      *(int *)(in_ECX + 0xc) = local_18 + iVar7;
      *(uint *)(in_ECX + 8) = iVar7 + (param_3 + iVar5) * 8;
      *(int *)(in_ECX + 4) = iVar7;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar3 = *(int *)(in_ECX + 8);
    if ((uint)(iVar3 - param_2 >> 3) < uVar6) {
      FUN_006f1600(param_2,iVar3,uVar6 * 8 + param_2);
      local_8 = 2;
      FUN_006f1400(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2 >> 3),&local_24);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + uVar6 * 8;
      FUN_007a86f0(param_2,*(int *)(in_ECX + 8) + uVar6 * -8,&local_24);
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar7 = iVar3 + uVar6 * -8;
    uVar4 = FUN_006f1600(iVar7,iVar3,iVar3);
    *(undefined4 *)(in_ECX + 8) = uVar4;
    FUN_007a8750(param_2,iVar7,iVar3);
    FUN_007a86f0(param_2,uVar6 * 8 + param_2,&local_24);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



/* WARNING: Removing unreachable block (ram,0x006f2327) */

void FUN_006f22c0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009c8840;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  if (*(int *)(param_1 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (iVar3 != 0) {
    iVar4 = FUN_00401f00(iVar3 * 0xc);
    *(int *)(in_ECX + 4) = iVar4;
    *(int *)(in_ECX + 8) = iVar4;
    *(int *)(in_ECX + 0xc) = iVar3 * 0xc + iVar4;
    uVar1 = *(uint *)(param_1 + 8);
    local_8 = 0;
    if (uVar1 < *(uint *)(param_1 + 4)) {
      FUN_00984d5e();
    }
    uVar2 = *(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 8) < uVar2) {
      FUN_00984d5e();
    }
    uVar5 = FUN_006f11a0(uVar2,uVar1,*(undefined4 *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 8) = uVar5;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_006f23c0(int param_1)

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
      FUN_006f1780();
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



void FUN_006f2460(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != param_2) {
    do {
      *param_1 = *param_3;
      FUN_00414420(param_3 + 1,0,0xffffffff);
      param_1 = param_1 + 8;
    } while (param_1 != param_2);
  }
  return;
}



void FUN_006f24a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != param_2) {
    do {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      FUN_00414420(param_3 + 4,0,0xffffffff);
      param_1 = param_1 + 0xb;
    } while (param_1 != param_2);
  }
  return;
}



void FUN_006f24f0(int param_1,int param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009c8860;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_006f1670(param_1,param_3);
    param_1 = param_1 + 0x20;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_006f2580(int param_1,int param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009c8880;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_006f16f0(param_1,param_3);
    param_1 = param_1 + 0x2c;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_006f2610(uint param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint in_ECX;
  int iVar7;
  uint uVar8;
  
  uVar5 = param_1;
  if (in_ECX == param_1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar7 = *(int *)(param_1 + 8) - iVar1;
    iVar2 = iVar7 >> 0x1f;
    iVar7 = iVar7 / 0xc + iVar2;
    uVar8 = iVar7 - iVar2;
    if (iVar7 != iVar2) {
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(int *)(in_ECX + 8) - iVar2) / 0xc;
      }
      if (uVar8 <= uVar4) {
        param_1 = param_1 & 0xffffff00;
        FUN_006f1240(iVar1,*(undefined4 *)(uVar5 + 8),iVar2,param_1,param_1,param_1);
        if (*(int *)(uVar5 + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             *(int *)(in_ECX + 4) + ((*(int *)(uVar5 + 8) - *(int *)(uVar5 + 4)) / 0xc) * 0xc;
        return;
      }
      if (iVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_ECX + 0xc) - iVar2) / 0xc;
      }
      if (uVar5 < uVar8) {
        if (iVar2 != 0) {
          FUN_00401f20(iVar2);
        }
        uVar6 = FUN_006f1080();
        cVar3 = FUN_00556fe0(uVar6);
        if (cVar3 == '\0') {
          return;
        }
        uVar6 = *(undefined4 *)(in_ECX + 4);
        iVar7 = *(int *)(param_1 + 4);
      }
      else {
        iVar7 = FUN_006f1080();
        iVar7 = iVar1 + iVar7 * 0xc;
        FUN_006f1350(iVar1,iVar7,iVar2);
        uVar6 = *(undefined4 *)(in_ECX + 8);
      }
      uVar6 = FUN_006f15a0(iVar7,*(undefined4 *)(param_1 + 8),uVar6);
      *(undefined4 *)(in_ECX + 8) = uVar6;
      return;
    }
  }
  FUN_006f1630();
  return;
}



void FUN_006f2770(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    uVar7 = *(int *)(param_1 + 8) - iVar4 >> 2;
    if (uVar7 != 0) {
      iVar1 = *(int *)(in_ECX + 4);
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(in_ECX + 8) - iVar1 >> 2;
      }
      if (uVar7 <= uVar5) {
        FUN_00790420(iVar4,*(int *)(param_1 + 8),iVar1);
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             *(int *)(in_ECX + 4) + (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) * 4;
        return;
      }
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(in_ECX + 0xc) - iVar1 >> 2;
      }
      if (uVar5 < uVar7) {
        if (iVar1 != 0) {
          FUN_00401f20(iVar1);
        }
        if (*(int *)(param_1 + 4) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
        }
        cVar2 = FUN_006f1bf0(iVar4);
        if (cVar2 == '\0') {
          return;
        }
        uVar3 = FUN_007a25c0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                             *(undefined4 *)(in_ECX + 4));
        *(undefined4 *)(in_ECX + 8) = uVar3;
        return;
      }
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(in_ECX + 8) - iVar1 >> 2;
      }
      iVar6 = iVar4 + iVar6 * 4;
      FUN_00790420(iVar4,iVar6,iVar1);
      uVar3 = FUN_007a25c0(iVar6,*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_ECX + 8));
      *(undefined4 *)(in_ECX + 8) = uVar3;
      return;
    }
  }
  FUN_00784a70();
  return;
}



undefined4 * FUN_006f28a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    *param_3 = *param_1;
    FUN_00414420(param_1 + 1,0,0xffffffff);
    param_1 = param_1 + 8;
    param_3 = param_3 + 8;
  } while (param_1 != param_2);
  return param_3;
}



undefined4 * FUN_006f28e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    FUN_00414420(param_1 + 4,0,0xffffffff);
    param_1 = param_1 + 0xb;
    param_3 = param_3 + 0xb;
  } while (param_1 != param_2);
  return param_3;
}



undefined4 * FUN_006f2930(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar1 = param_2 + -0x20;
    param_3 = param_3 + -8;
    *param_3 = *(undefined4 *)(param_2 + -0x20);
    FUN_00414420(param_2 + -0x1c,0,0xffffffff);
    param_2 = iVar1;
  } while (iVar1 != param_1);
  return param_3;
}



undefined4 * FUN_006f2970(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar1 = param_2 + -0x2c;
    puVar2 = param_3 + -0xb;
    *puVar2 = *(undefined4 *)(param_2 + -0x2c);
    param_3[-10] = *(undefined4 *)(param_2 + -0x28);
    param_3[-9] = *(undefined4 *)(param_2 + -0x24);
    param_3[-8] = *(undefined4 *)(param_2 + -0x20);
    FUN_00414420(param_2 + -0x1c,0,0xffffffff);
    param_2 = iVar1;
    param_3 = puVar2;
  } while (iVar1 != param_1);
  return puVar2;
}



void FUN_006f29d0(uint param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  
  uVar2 = *(uint *)(in_ECX + 4);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (int)(*(int *)(in_ECX + 8) - uVar2) / 0xc;
  }
  if (uVar3 < param_1) {
    if (uVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(*(int *)(in_ECX + 8) - uVar2) / 0xc;
    }
    uVar3 = *(uint *)(in_ECX + 8);
    if (uVar3 < uVar2) {
      FUN_00984d5e();
    }
    FUN_006f1940(in_ECX,uVar3,param_1 - iVar4,&param_2);
    return;
  }
  if (uVar2 != 0) {
    uVar3 = *(uint *)(in_ECX + 8);
    if (param_1 < (uint)((int)(uVar3 - uVar2) / 0xc)) {
      if (uVar3 < uVar2) {
        FUN_00984d5e();
      }
      uVar2 = *(uint *)(in_ECX + 4);
      if (*(uint *)(in_ECX + 8) < uVar2) {
        FUN_00984d5e();
      }
      uVar1 = uVar2 + param_1 * 0xc;
      param_3 = uVar2;
      if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
        FUN_00984d5e();
      }
      FUN_006f1470(&param_2,in_ECX,uVar1,in_ECX,uVar3);
    }
  }
  return;
}



void FUN_006f2ab0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  undefined1 local_8 [4];
  uint local_4;
  
  uVar2 = *(uint *)(in_ECX + 4);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (int)(*(int *)(in_ECX + 8) - uVar2) >> 2;
  }
  if (uVar3 < param_1) {
    if (uVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(*(int *)(in_ECX + 8) - uVar2) >> 2;
    }
    uVar3 = *(uint *)(in_ECX + 8);
    if (uVar3 < uVar2) {
      FUN_00984d5e();
    }
    FUN_006f1c40(in_ECX,uVar3,param_1 - iVar4,&stack0x00000008);
    return;
  }
  if ((uVar2 != 0) && (uVar3 = *(uint *)(in_ECX + 8), param_1 < (uint)((int)(uVar3 - uVar2) >> 2)))
  {
    if (uVar3 < uVar2) {
      FUN_00984d5e();
    }
    uVar2 = *(uint *)(in_ECX + 4);
    if (*(uint *)(in_ECX + 8) < uVar2) {
      FUN_00984d5e();
    }
    uVar1 = uVar2 + param_1 * 4;
    local_4 = uVar2;
    if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
      FUN_00984d5e();
    }
    FUN_00439050(local_8,in_ECX,uVar1,in_ECX,uVar3);
  }
  return;
}



void FUN_006f2b70(uint param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(in_ECX + 4);
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(*(int *)(in_ECX + 8) - uVar1) >> 4;
  }
  if (uVar2 < param_1) {
    if (uVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(*(int *)(in_ECX + 8) - uVar1) >> 4;
    }
    uVar2 = *(uint *)(in_ECX + 8);
    if (uVar2 < uVar1) {
      FUN_00984d5e();
    }
    FUN_006f1e00(in_ECX,uVar2,param_1 - iVar3,&param_2);
    return;
  }
  if ((uVar1 != 0) && (uVar2 = *(uint *)(in_ECX + 8), param_1 < (uint)((int)(uVar2 - uVar1) >> 4)))
  {
    if (uVar2 < uVar1) {
      FUN_00984d5e();
    }
    uVar1 = *(uint *)(in_ECX + 4);
    if (*(uint *)(in_ECX + 8) < uVar1) {
      FUN_00984d5e();
    }
    uVar4 = param_1 * 0x10 + uVar1;
    param_3 = uVar1;
    if ((*(uint *)(in_ECX + 8) < uVar4) || (uVar4 < *(uint *)(in_ECX + 4))) {
      FUN_00984d5e();
    }
    FUN_006f14d0(&param_2,in_ECX,uVar4,in_ECX,uVar2);
  }
  return;
}



void FUN_006f2c20(uint param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  
  uVar2 = *(uint *)(in_ECX + 4);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (int)(*(int *)(in_ECX + 8) - uVar2) >> 3;
  }
  if (uVar3 < param_1) {
    if (uVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(*(int *)(in_ECX + 8) - uVar2) >> 3;
    }
    uVar3 = *(uint *)(in_ECX + 8);
    if (uVar3 < uVar2) {
      FUN_00984d5e();
    }
    FUN_006f2060(in_ECX,uVar3,param_1 - iVar4,&param_2);
    return;
  }
  if ((uVar2 != 0) && (uVar3 = *(uint *)(in_ECX + 8), param_1 < (uint)((int)(uVar3 - uVar2) >> 3)))
  {
    if (uVar3 < uVar2) {
      FUN_00984d5e();
    }
    uVar2 = *(uint *)(in_ECX + 4);
    if (*(uint *)(in_ECX + 8) < uVar2) {
      FUN_00984d5e();
    }
    uVar1 = uVar2 + param_1 * 8;
    param_3 = uVar2;
    if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
      FUN_00984d5e();
    }
    FUN_006f1530(&param_2,in_ECX,uVar1,in_ECX,uVar3);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x006f2ced) */

void FUN_006f2cd0(int param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int in_ECX;
  int iVar2;
  undefined1 *puVar3;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (param_1 != 0) {
    puVar1 = (undefined1 *)FUN_00412e70(param_1,0);
    *(undefined1 **)(in_ECX + 0xc) = puVar1 + param_1;
    *(undefined1 **)(in_ECX + 4) = puVar1;
    *(undefined1 **)(in_ECX + 8) = puVar1;
    puVar3 = puVar1;
    for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 **)(in_ECX + 8) = puVar1 + param_1;
  }
  return;
}



void FUN_006f2d30(int param_1)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c88a8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined4 *)(in_ECX + 0x18) = 0xf;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  FUN_00414420(param_1,0,0xffffffff);
  local_4 = 0;
  FUN_006f22c0(param_1 + 0x1c);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006f2db0(int param_1)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c88a8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined4 *)(in_ECX + 0x18) = 0xf;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  FUN_00414420(param_1,0,0xffffffff);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_006f23c0(param_1 + 0x20);
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_006f2e30(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00414420(param_1,0,0xffffffff);
    FUN_006f2610(param_1 + 0x1c);
    param_1 = param_1 + 0x2c;
    param_3 = param_3 + 0x2c;
  } while (param_1 != param_2);
  return param_3;
}



int FUN_006f2e80(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00414420(param_1,0,0xffffffff);
    *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    FUN_006f2770(param_1 + 0x20);
    param_1 = param_1 + 0x30;
    param_3 = param_3 + 0x30;
  } while (param_1 != param_2);
  return param_3;
}



int FUN_006f2ed0(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_006f2970(param_1,param_2,param_3,param_3,local_4,local_8);
  return param_3 + ((param_2 - param_1) / 0x2c) * -0x2c;
}



int FUN_006f2f30(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar1 = param_2 + -0x2c;
    param_3 = param_3 + -0x2c;
    FUN_00414420(iVar1,0,0xffffffff);
    FUN_006f2610(param_2 + -0x10);
    param_2 = iVar1;
  } while (iVar1 != param_1);
  return param_3;
}



int FUN_006f2f80(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar1 = param_2 + -0x30;
    iVar2 = param_3 + -0x30;
    FUN_00414420(iVar1,0,0xffffffff);
    *(undefined4 *)(param_3 + -0x14) = *(undefined4 *)(param_2 + -0x14);
    FUN_006f2770(param_2 + -0x10);
    param_2 = iVar1;
    param_3 = iVar2;
  } while (iVar1 != param_1);
  return iVar2;
}



void FUN_006f2fd0(undefined4 param_1)

{
  FUN_006f29d0(param_1,0,0,0);
  return;
}



void FUN_006f3010(undefined4 param_1)

{
  uint3 in_ECX;
  undefined4 uStack_4;
  
  uStack_4 = (uint)in_ECX;
  FUN_006f2cd0(param_1,(int)&uStack_4 + 3);
  return;
}



int FUN_006f3040(int param_1,int param_2,undefined4 param_3)

{
  FUN_006f24f0(param_1,param_2,param_3);
  return param_2 * 0x20 + param_1;
}



int FUN_006f3080(int param_1,int param_2,undefined4 param_3)

{
  FUN_006f2580(param_1,param_2,param_3);
  return param_2 * 0x2c + param_1;
}



int FUN_006f30c0(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_006f28a0(param_1,param_2,param_3,param_3,local_4,local_8);
  return (param_2 - param_1 >> 5) * 0x20 + param_3;
}



int FUN_006f3110(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_006f28e0(param_1,param_2,param_3,param_3,local_4,local_8);
  return ((param_2 - param_1) / 0x2c) * 0x2c + param_3;
}



int FUN_006f3170(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_006f2e80(param_1,param_2,param_3,param_3,local_4,local_8);
  return ((param_2 - param_1) / 0x30) * 0x30 + param_3;
}



void FUN_006f31d0(int param_1,int param_2,int param_3)

{
  if (param_1 != param_2) {
    do {
      FUN_00414420(param_3,0,0xffffffff);
      FUN_006f2610(param_3 + 0x1c);
      param_1 = param_1 + 0x2c;
    } while (param_1 != param_2);
  }
  return;
}



void FUN_006f3210(int param_1,int param_2,int param_3)

{
  if (param_1 != param_2) {
    do {
      FUN_00414420(param_3,0,0xffffffff);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
      FUN_006f2770(param_3 + 0x20);
      param_1 = param_1 + 0x30;
    } while (param_1 != param_2);
  }
  return;
}



int FUN_006f3250(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_006f2f30(param_1,param_2,param_3,param_3,local_4,local_8);
  return param_3 + ((param_2 - param_1) / 0x2c) * -0x2c;
}



int FUN_006f32b0(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_006f2f80(param_1,param_2,param_3,param_3,local_4,local_8);
  return param_3 + ((param_2 - param_1) / 0x30) * -0x30;
}



int FUN_006f3310(int param_1,int param_2,int param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_009c88e1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x2c) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_006f2d30(param_1);
    }
    param_3 = param_3 + 0x2c;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}



int FUN_006f33c0(int param_1,int param_2,int param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_009c8911;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_006f2db0(param_1);
    }
    param_3 = param_3 + 0x30;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}



void FUN_006f3470(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00984d5e();
  }
  if (param_3 != param_5) {
    uVar1 = FUN_006f30c0(param_5,*(undefined4 *)(in_ECX + 8),param_3);
    FUN_00557030(uVar1,*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = uVar1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



void FUN_006f34d0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00984d5e();
  }
  if (param_3 != param_5) {
    uVar1 = FUN_006f3110(param_5,*(undefined4 *)(in_ECX + 8),param_3);
    FUN_00557080(uVar1,*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = uVar1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



int FUN_006f3530(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_006f2e30(param_1,param_2,param_3,param_3,local_4,local_8);
  return ((param_2 - param_1) / 0x2c) * 0x2c + param_3;
}



void FUN_006f3590(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006f1800(param_1,param_2,param_3);
  return;
}



int FUN_006f35c0(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_006f2930(param_1,param_2,param_3,param_3,local_4,local_8);
  return param_3 + (param_2 - param_1 >> 5) * -0x20;
}



void FUN_006f3610(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006f18a0(param_1,param_2,param_3);
  return;
}



void FUN_006f3640(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006f2ed0(param_1,param_2,param_3,param_3,param_3,0);
  return;
}



void FUN_006f3670(int param_1,int param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_009c8941;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_006f2d30(param_3);
    }
    param_1 = param_1 + 0x2c;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_006f3720(int param_1,int param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_009c8971;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_006f2db0(param_3);
    }
    param_1 = param_1 + 0x30;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_006f37d0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00984d5e();
  }
  if (param_3 != param_5) {
    uVar1 = FUN_006f3530(param_5,*(undefined4 *)(in_ECX + 8),param_3);
    FUN_005573d0(uVar1,*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = uVar1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



void FUN_006f3830(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

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
    uVar2 = FUN_006f3170(param_5,*(undefined4 *)(in_ECX + 8),param_3,param_1,param_1,param_2);
    FUN_005570d0(uVar2,*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = uVar2;
  }
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006f38a0(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  uint uStack_58;
  undefined4 local_38 [2];
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009c8998;
  local_10 = *unaff_FS_OFFSET;
  uStack_58 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  *unaff_FS_OFFSET = (int)&local_10;
  local_38[0] = *param_4;
  uVar5 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  local_18 = uStack_58;
  FUN_00414420(param_4 + 1,0,0xffffffff);
  iVar1 = *(int *)(in_ECX + 4);
  local_8 = 0;
  if (iVar1 != 0) {
    uVar5 = *(int *)(in_ECX + 0xc) - iVar1 >> 5;
  }
  if (param_3 != 0) {
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(in_ECX + 8) - iVar1 >> 5;
    }
    if (0x7ffffffU - iVar4 < param_3) {
      iVar1 = FUN_00790b90();
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(in_ECX + 8) - iVar1 >> 5;
    }
    if (uVar5 < iVar4 + param_3) {
      if (0x7ffffff - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_ECX + 8) - iVar1 >> 5;
      }
      if (uVar5 < iVar4 + param_3) {
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(in_ECX + 8) - iVar1 >> 5;
        }
        uVar5 = iVar1 + param_3;
      }
      iVar4 = FUN_005563e0(uVar5,0);
      local_8 = CONCAT31(local_8._1_3_,1);
      uVar2 = FUN_006f1800(*(undefined4 *)(in_ECX + 4),param_2,iVar4);
      uVar2 = FUN_006f3040(uVar2,param_3,local_38);
      FUN_006f1800(param_2,*(undefined4 *)(in_ECX + 8),uVar2);
      iVar1 = *(int *)(in_ECX + 4);
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(in_ECX + 8) - iVar1 >> 5;
      }
      if (iVar1 != 0) {
        FUN_00557030(iVar1,*(undefined4 *)(in_ECX + 8));
        FUN_00401f20(*(undefined4 *)(in_ECX + 4));
      }
      *(uint *)(in_ECX + 0xc) = uVar5 * 0x20 + iVar4;
      *(uint *)(in_ECX + 8) = (param_3 + iVar3) * 0x20 + iVar4;
      *(int *)(in_ECX + 4) = iVar4;
    }
    else {
      iVar1 = *(int *)(in_ECX + 8);
      if ((uint)(iVar1 - param_2 >> 5) < param_3) {
        FUN_006f3590(param_2,iVar1,param_3 * 0x20 + param_2);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_006f3040(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2 >> 5),local_38);
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x20;
        local_8 = 0;
        FUN_006f2460(param_2,*(int *)(in_ECX + 8) + param_3 * -0x20,local_38);
      }
      else {
        iVar4 = iVar1 + param_3 * -0x20;
        uVar2 = FUN_006f3590(iVar4,iVar1,iVar1);
        *(undefined4 *)(in_ECX + 8) = uVar2;
        FUN_006f35c0(param_2,iVar4,iVar1);
        FUN_006f2460(param_2,param_3 * 0x20 + param_2,local_38);
      }
    }
  }
  if (0xf < local_1c) {
    FUN_00401f20(local_30);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006f3b50(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int extraout_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  uint uStack_64;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009c89c8;
  local_10 = *unaff_FS_OFFSET;
  uStack_64 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  *unaff_FS_OFFSET = (int)&local_10;
  local_40 = param_4[1];
  local_44 = *param_4;
  local_3c = param_4[2];
  local_38 = param_4[3];
  uVar5 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  local_18 = uStack_64;
  FUN_00414420(param_4 + 4,0,0xffffffff);
  iVar2 = *(int *)(in_ECX + 4);
  local_8 = 0;
  if (iVar2 != 0) {
    uVar5 = (*(int *)(in_ECX + 0xc) - iVar2) / 0x2c;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x2c;
    }
    if (0x5d1745dU - iVar1 < param_3) {
      FUN_00790b90();
      iVar2 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x2c;
    }
    if (uVar5 < iVar1 + param_3) {
      if (0x5d1745d - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x2c;
      }
      if (uVar5 < iVar2 + param_3) {
        iVar2 = FUN_006f1140();
        uVar5 = iVar2 + param_3;
      }
      iVar1 = FUN_00556440(uVar5,0);
      local_8 = CONCAT31(local_8._1_3_,1);
      uVar3 = FUN_006f18a0(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar3 = FUN_006f3080(uVar3,param_3,&local_44);
      FUN_006f18a0(param_2,*(undefined4 *)(in_ECX + 8),uVar3);
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar2) / 0x2c;
      }
      if (iVar2 != 0) {
        FUN_00557080(iVar2,*(undefined4 *)(in_ECX + 8));
        FUN_00401f20(*(undefined4 *)(in_ECX + 4));
      }
      *(uint *)(in_ECX + 0xc) = uVar5 * 0x2c + iVar1;
      *(uint *)(in_ECX + 8) = (param_3 + iVar4) * 0x2c + iVar1;
      *(int *)(in_ECX + 4) = iVar1;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8);
      if ((uint)((iVar2 - param_2) / 0x2c) < param_3) {
        FUN_006f3610(param_2,iVar2,param_3 * 0x2c + param_2);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_006f3080(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2) / 0x2c,
                     &local_44);
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x2c;
        local_8 = 0;
        FUN_006f24a0(param_2,*(int *)(in_ECX + 8) + param_3 * -0x2c,&local_44);
      }
      else {
        iVar1 = iVar2 + param_3 * -0x2c;
        uVar3 = FUN_006f3610(iVar1,iVar2,iVar2);
        *(undefined4 *)(in_ECX + 8) = uVar3;
        FUN_006f3640(param_2,iVar1,iVar2);
        FUN_006f24a0(param_2,param_3 * 0x2c + param_2,&local_44);
      }
    }
  }
  if (0xf < local_1c) {
    FUN_00401f20(local_30);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_006f3e70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006f3250(param_1,param_2,param_3,param_3,param_3,0);
  return;
}



void FUN_006f3ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006f32b0(param_1,param_2,param_3,param_3,param_3,0);
  return;
}



void FUN_006f3ed0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  uint in_stack_00000024;
  undefined1 local_14 [4];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c89f8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar1 = *(uint *)(in_ECX + 4);
  iVar4 = 0;
  local_4 = 0;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (int)(*(int *)(in_ECX + 8) - uVar1) >> 5;
  }
  if (uVar3 < param_1) {
    if (uVar1 != 0) {
      iVar4 = (int)(*(int *)(in_ECX + 8) - uVar1) >> 5;
    }
    uVar3 = *(uint *)(in_ECX + 8);
    if (uVar3 < uVar1) {
      FUN_00984d5e(uVar2);
    }
    FUN_006f38a0(in_ECX,uVar3,param_1 - iVar4,&param_2);
  }
  else if ((uVar1 != 0) &&
          (uVar3 = *(uint *)(in_ECX + 8), param_1 < (uint)((int)(uVar3 - uVar1) >> 5))) {
    if (uVar3 < uVar1) {
      FUN_00984d5e(uVar2);
    }
    uVar1 = *(uint *)(in_ECX + 4);
    if (*(uint *)(in_ECX + 8) < uVar1) {
      FUN_00984d5e(uVar2);
    }
    uVar5 = param_1 * 0x20 + uVar1;
    local_10 = uVar1;
    if ((*(uint *)(in_ECX + 8) < uVar5) || (uVar5 < *(uint *)(in_ECX + 4))) {
      FUN_00984d5e(uVar2);
    }
    FUN_006f3470(local_14,in_ECX,uVar5,in_ECX,uVar3);
  }
  if (0xf < in_stack_00000024) {
    FUN_00401f20(param_4);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006f3fc0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_0000001c;
  uint in_stack_00000030;
  undefined1 local_14 [4];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8a28;
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
    uVar3 = (int)(*(int *)(in_ECX + 8) - uVar1) / 0x2c;
  }
  if (uVar3 < param_1) {
    if (uVar1 != 0) {
      iVar5 = (int)(*(int *)(in_ECX + 8) - uVar1) / 0x2c;
    }
    uVar3 = *(uint *)(in_ECX + 8);
    if (uVar3 < uVar1) {
      FUN_00984d5e(uVar2);
    }
    FUN_006f3b50(in_ECX,uVar3,param_1 - iVar5,&stack0x00000008);
  }
  else if (uVar1 != 0) {
    uVar3 = *(uint *)(in_ECX + 8);
    if (param_1 < (uint)((int)(uVar3 - uVar1) / 0x2c)) {
      if (uVar3 < uVar1) {
        FUN_00984d5e(uVar2);
      }
      uVar1 = *(uint *)(in_ECX + 4);
      if (*(uint *)(in_ECX + 8) < uVar1) {
        FUN_00984d5e(uVar2);
      }
      uVar4 = param_1 * 0x2c + uVar1;
      local_10 = uVar1;
      if ((*(uint *)(in_ECX + 8) < uVar4) || (uVar4 < *(uint *)(in_ECX + 4))) {
        FUN_00984d5e(uVar2);
      }
      FUN_006f34d0(local_14,in_ECX,uVar4,in_ECX,uVar3);
    }
  }
  if (0xf < in_stack_00000030) {
    FUN_00401f20(in_stack_0000001c);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_006f40e0(int param_1,int param_2,undefined4 param_3)

{
  FUN_006f3670(param_1,param_2,param_3);
  return param_2 * 0x2c + param_1;
}



int FUN_006f4120(int param_1,int param_2,undefined4 param_3)

{
  FUN_006f3720(param_1,param_2,param_3);
  return param_2 * 0x30 + param_1;
}



void FUN_006f4160(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006f3310(param_1,param_2,param_3);
  return;
}



void FUN_006f4190(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006f33c0(param_1,param_2,param_3);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006f41c0(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int extraout_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  uint uStack_64;
  undefined1 local_44 [4];
  undefined4 local_40;
  uint local_2c;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009c8a58;
  local_10 = *unaff_FS_OFFSET;
  uStack_64 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  *unaff_FS_OFFSET = (int)&local_10;
  local_18 = uStack_64;
  FUN_006f2d30(param_4);
  iVar2 = *(int *)(in_ECX + 4);
  uVar5 = 0;
  local_8 = 0;
  if (iVar2 != 0) {
    uVar5 = (*(int *)(in_ECX + 0xc) - iVar2) / 0x2c;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x2c;
    }
    if (0x5d1745dU - iVar1 < param_3) {
      FUN_00790b90();
      iVar2 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x2c;
    }
    if (uVar5 < iVar1 + param_3) {
      if (0x5d1745d - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x2c;
      }
      if (uVar5 < iVar2 + param_3) {
        iVar2 = FUN_006f1140();
        uVar5 = iVar2 + param_3;
      }
      iVar1 = FUN_00556440(uVar5,0);
      local_8 = CONCAT31(local_8._1_3_,1);
      uVar3 = FUN_006f3310(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar3 = FUN_006f40e0(uVar3,param_3,local_44);
      FUN_006f3310(param_2,*(undefined4 *)(in_ECX + 8),uVar3);
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar2) / 0x2c;
      }
      if (iVar2 != 0) {
        FUN_005573d0(iVar2,*(undefined4 *)(in_ECX + 8));
        FUN_00401f20(*(undefined4 *)(in_ECX + 4));
      }
      *(uint *)(in_ECX + 0xc) = uVar5 * 0x2c + iVar1;
      *(uint *)(in_ECX + 8) = (param_3 + iVar4) * 0x2c + iVar1;
      *(int *)(in_ECX + 4) = iVar1;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8);
      if ((uint)((iVar2 - param_2) / 0x2c) < param_3) {
        FUN_006f4160(param_2,iVar2,param_3 * 0x2c + param_2);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_006f40e0(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2) / 0x2c,local_44
                    );
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x2c;
        local_8 = 0;
        FUN_006f31d0(param_2,*(int *)(in_ECX + 8) + param_3 * -0x2c,local_44);
      }
      else {
        iVar1 = iVar2 + param_3 * -0x2c;
        uVar3 = FUN_006f4160(iVar1,iVar2,iVar2);
        *(undefined4 *)(in_ECX + 8) = uVar3;
        FUN_006f3e70(param_2,iVar1,iVar2);
        FUN_006f31d0(param_2,param_3 * 0x2c + param_2,local_44);
      }
    }
  }
  if (local_24 != 0) {
    FUN_00401f20(local_24);
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (0xf < local_2c) {
    FUN_00401f20(local_40);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006f44d0(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int extraout_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  uint uStack_68;
  undefined1 local_48 [4];
  undefined4 local_44;
  uint local_30;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009c8a88;
  local_10 = *unaff_FS_OFFSET;
  uStack_68 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_68;
  *unaff_FS_OFFSET = (int)&local_10;
  local_18 = uStack_68;
  FUN_006f2db0(param_4);
  iVar2 = *(int *)(in_ECX + 4);
  uVar5 = 0;
  local_8 = 0;
  if (iVar2 != 0) {
    uVar5 = (*(int *)(in_ECX + 0xc) - iVar2) / 0x30;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x30;
    }
    if (0x5555555U - iVar1 < param_3) {
      FUN_00790b90();
      iVar2 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x30;
    }
    if (uVar5 < iVar1 + param_3) {
      if (0x5555555 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x30;
      }
      if (uVar5 < iVar2 + param_3) {
        iVar2 = FUN_00799f10();
        uVar5 = iVar2 + param_3;
      }
      iVar1 = FUN_00799fa0(uVar5,0);
      local_8 = CONCAT31(local_8._1_3_,1);
      uVar3 = FUN_006f33c0(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar3 = FUN_006f4120(uVar3,param_3,local_48);
      FUN_006f33c0(param_2,*(undefined4 *)(in_ECX + 8),uVar3);
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar2) / 0x30;
      }
      if (iVar2 != 0) {
        FUN_005570d0(iVar2,*(undefined4 *)(in_ECX + 8));
        FUN_00401f20(*(undefined4 *)(in_ECX + 4));
      }
      *(uint *)(in_ECX + 0xc) = uVar5 * 0x30 + iVar1;
      *(uint *)(in_ECX + 8) = (param_3 + iVar4) * 0x30 + iVar1;
      *(int *)(in_ECX + 4) = iVar1;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8);
      if ((uint)((iVar2 - param_2) / 0x30) < param_3) {
        FUN_006f4190(param_2,iVar2,param_3 * 0x30 + param_2);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_006f4120(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2) / 0x30,local_48
                    );
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x30;
        local_8 = 0;
        FUN_006f3210(param_2,*(int *)(in_ECX + 8) + param_3 * -0x30,local_48);
      }
      else {
        iVar1 = iVar2 + param_3 * -0x30;
        uVar3 = FUN_006f4190(iVar1,iVar2,iVar2);
        *(undefined4 *)(in_ECX + 8) = uVar3;
        FUN_006f3ea0(param_2,iVar1,iVar2);
        FUN_006f3210(param_2,param_3 * 0x30 + param_2,local_48);
      }
    }
  }
  if (local_24 != 0) {
    FUN_00401f20(local_24);
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (0xf < local_30) {
    FUN_00401f20(local_44);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_006f47f0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  uint in_stack_00000020;
  int in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined1 local_14 [4];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8ab8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar1 = *(uint *)(in_ECX + 4);
  local_4 = 0;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (int)(*(int *)(in_ECX + 8) - uVar1) / 0x2c;
  }
  if (uVar3 < param_1) {
    if (uVar1 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(*(int *)(in_ECX + 8) - uVar1) / 0x2c;
    }
    uVar3 = *(uint *)(in_ECX + 8);
    if (uVar3 < uVar1) {
      FUN_00984d5e(uVar2);
    }
    FUN_006f41c0(in_ECX,uVar3,param_1 - iVar5,&param_2);
  }
  else if ((uVar1 != 0) &&
          (uVar3 = *(uint *)(in_ECX + 8), param_1 < (uint)((int)(uVar3 - uVar1) / 0x2c))) {
    if (uVar3 < uVar1) {
      FUN_00984d5e(uVar2);
    }
    uVar1 = *(uint *)(in_ECX + 4);
    if (*(uint *)(in_ECX + 8) < uVar1) {
      FUN_00984d5e(uVar2);
    }
    uVar4 = param_1 * 0x2c + uVar1;
    local_10 = uVar1;
    if ((*(uint *)(in_ECX + 8) < uVar4) || (uVar4 < *(uint *)(in_ECX + 4))) {
      FUN_00984d5e(uVar2);
    }
    FUN_006f37d0(local_14,in_ECX,uVar4,in_ECX,uVar3);
  }
  if (in_stack_00000028 != 0) {
    FUN_00401f20(in_stack_00000028);
  }
  in_stack_00000028 = 0;
  in_stack_0000002c = 0;
  in_stack_00000030 = 0;
  if (0xf < in_stack_00000020) {
    FUN_00401f20(param_3);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006f4930(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  int *unaff_FS_OFFSET;
  uint in_stack_00000020;
  int in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined1 local_14 [4];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8ae8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar2 = *(uint *)(in_ECX + 4);
  local_4 = 0;
  if (uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (int)(*(int *)(in_ECX + 8) - uVar2) / 0x30;
  }
  if (uVar4 < param_1) {
    if (uVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(*(int *)(in_ECX + 8) - uVar2) / 0x30;
    }
    uVar4 = *(uint *)(in_ECX + 8);
    if (uVar4 < uVar2) {
      FUN_00984d5e(uVar3);
    }
    FUN_006f44d0(in_ECX,uVar4,param_1 - iVar5,&param_2);
  }
  else if ((uVar2 != 0) &&
          (uVar4 = *(uint *)(in_ECX + 8), param_1 < (uint)((int)(uVar4 - uVar2) / 0x30))) {
    if (uVar4 < uVar2) {
      FUN_00984d5e(uVar3);
    }
    uVar2 = *(uint *)(in_ECX + 4);
    if (*(uint *)(in_ECX + 8) < uVar2) {
      FUN_00984d5e(uVar3);
    }
    uVar1 = param_1 * 0x30 + uVar2;
    local_10 = uVar2;
    if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
      FUN_00984d5e(uVar3);
    }
    FUN_006f3830(local_14,in_ECX,uVar1,in_ECX,uVar4);
  }
  if (in_stack_0000002c != 0) {
    FUN_00401f20(in_stack_0000002c);
  }
  in_stack_0000002c = 0;
  in_stack_00000030 = 0;
  in_stack_00000034 = 0;
  if (0xf < in_stack_00000020) {
    FUN_00401f20(param_3);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006f4a70(undefined4 param_1)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_44 [4];
  undefined1 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint uStack_18;
  undefined1 auStack_14 [4];
  undefined1 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8b18;
  local_c = *unaff_FS_OFFSET;
  uStack_18 = DAT_00b30aac ^ (uint)auStack_14;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = auStack_44;
  local_2c = 0xf;
  local_30 = 0;
  local_40 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_4 = 0xffffffff;
  FUN_006f47f0(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006f4ae0(undefined4 param_1)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_48 [4];
  undefined1 local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint uStack_18;
  undefined1 auStack_14 [4];
  undefined1 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8b18;
  local_c = *unaff_FS_OFFSET;
  uStack_18 = DAT_00b30aac ^ (uint)auStack_14;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = auStack_48;
  local_30 = 0xf;
  local_34 = 0;
  local_44 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_4 = 0xffffffff;
  FUN_006f4930(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_006f4b50(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  uint uVar10;
  int *unaff_FS_OFFSET;
  undefined4 uStack_144;
  undefined4 local_140;
  char *local_13c;
  undefined4 local_138;
  undefined1 local_134 [4];
  uint local_130;
  short *psStack_12c;
  uint local_128;
  uint local_104;
  undefined1 local_fd;
  int local_fc;
  uint local_f8;
  undefined1 *local_f4;
  int local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  undefined1 *local_d8;
  int local_d0;
  int local_cc;
  undefined4 local_c8;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined **local_94;
  undefined4 *local_54;
  uint local_50;
  int local_4c;
  short *local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  byte local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  short local_18;
  short local_16;
  short local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c8be5;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_104;
  *unaff_FS_OFFSET = (int)&local_c;
  local_a8 = param_1;
  local_128 = 0x6f4baf;
  _memset(&local_50,0,0x38);
  local_f4 = local_134;
  local_138 = 8;
  local_13c = "FRTRI003";
  local_130 = local_130 & 0xffffff00;
  local_140 = 0x6f4bd2;
  FUN_00414500();
  local_138 = 0x6f4bde;
  FUN_006f6110();
  local_f4 = (undefined1 *)&local_138;
  local_13c = (char *)0xffffffff;
  local_140 = 0;
  uStack_144 = param_1;
  local_4 = 0;
  local_134[0] = 0;
  FUN_00414420();
  local_13c = (char *)0x6f4c0f;
  cVar1 = FUN_006f66e0();
  if (cVar1 != '\0') {
    local_128 = 0x6f4c45;
    cVar1 = FUN_006f5e50();
    if (cVar1 != '\0') {
      FUN_006f2fd0();
      local_128 = local_4c;
      psStack_12c = (short *)0x6f4c86;
      FUN_006f29d0();
      local_128 = 0;
      psStack_12c = local_48;
      local_130 = 0x6f4caa;
      FUN_006f2b70();
      local_f4 = (undefined1 *)&local_138;
      local_13c = (char *)local_44;
      local_130 = local_130 & 0xffffff00;
      local_140 = 0x6f4cd4;
      FUN_006f3ed0();
      local_f4 = (undefined1 *)&uStack_144;
      local_140 = 0;
      local_13c = (char *)0x0;
      local_138 = 0;
      local_130 = local_130 & 0xffffff00;
      FUN_006f3fc0(local_40);
      local_f0 = param_2 + 0x80;
      FUN_006f4a70();
      local_f4 = (undefined1 *)(param_2 + 0x90);
      FUN_006f4ae0();
      if (local_50 + local_2c != 0) {
        local_128 = 0x6f4d54;
        FUN_006f10a0();
        local_128 = 0x6f4d61;
        cVar1 = FUN_006f5d40();
        if (cVar1 == '\0') goto LAB_006f50ea;
      }
      if (local_4c != 0) {
        local_128 = 0x6f4d80;
        FUN_006f10a0();
        local_128 = 0x6f4d8d;
        cVar1 = FUN_006f5d40();
        if (cVar1 == '\0') goto LAB_006f50ea;
      }
      if (local_48 != (short *)0x0) {
        local_128 = 0x6f4dad;
        FUN_006f10e0();
        local_128 = 0x6f4dba;
        cVar1 = FUN_006f5d40();
        if (cVar1 == '\0') goto LAB_006f50ea;
      }
      uVar6 = 0;
      if (local_44 != 0) {
        local_104 = 0;
        do {
          if ((*(int *)(param_2 + 100) == 0) ||
             ((uint)(*(int *)(param_2 + 0x68) - *(int *)(param_2 + 100) >> 5) <= uVar6)) {
            FUN_00984d5e();
          }
          local_128 = 0x6f4e05;
          cVar1 = FUN_006f5d40();
          if (cVar1 == '\0') goto LAB_006f50ca;
          local_128 = 0x6f4e22;
          cVar1 = FUN_006f5d40();
          if (cVar1 == '\0') goto LAB_006f50ea;
          if (local_f8 != 0) {
            FUN_006f3010();
            local_4._0_1_ = 1;
            local_128 = 0x6f4e5a;
            FUN_006f1210();
            local_128 = 0x6f4e67;
            cVar1 = FUN_006f5d40();
            if (cVar1 == '\0') goto LAB_006f50e5;
            if (local_f8 < 2) {
              local_d8 = (undefined1 *)FUN_00414750();
              local_4._0_1_ = 2;
              FUN_006f1110();
              local_128 = 0x6f4f0b;
              FUN_00414420();
              FUN_0079ab00();
            }
            else {
              FUN_006f1110();
              FUN_006edb50();
              local_fc = 0;
              if (local_f8 - 1 != 0) {
                local_fc = local_f8 - 1;
              }
              local_d8 = (undefined1 *)FUN_006f1210();
              FUN_006f1110();
              puVar3 = (undefined1 *)FUN_006eda70();
              *puVar3 = *local_d8;
            }
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00794eb0();
          }
          local_104 = local_104 + 0x20;
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_44);
      }
      local_104 = 0;
      if (local_40 != 0) {
        local_fc = 0;
        do {
          iVar4 = local_fc;
          uVar6 = local_104;
          if ((*(int *)(param_2 + 0x74) == 0) ||
             ((uint)((*(int *)(param_2 + 0x78) - *(int *)(param_2 + 0x74)) / 0x2c) <= local_104)) {
            FUN_00984d5e();
          }
          local_128 = 0x6f4f8f;
          cVar1 = FUN_006f5d40();
          if (cVar1 == '\0') goto LAB_006f50ea;
          if ((*(int *)(param_2 + 0x74) == 0) ||
             ((uint)((*(int *)(param_2 + 0x78) - *(int *)(param_2 + 0x74)) / 0x2c) <= uVar6)) {
            FUN_00984d5e();
          }
          local_128 = 0x6f4fd6;
          cVar1 = FUN_006f5d40();
          if (cVar1 == '\0') goto LAB_006f50ca;
          local_128 = 0x6f4ff3;
          cVar1 = FUN_006f5d40();
          if (cVar1 == '\0') goto LAB_006f50ea;
          if (local_f8 != 0) {
            local_fd = 0;
            FUN_006f2cd0();
            fVar9 = local_e4;
            local_4._0_1_ = 3;
            if ((local_e4 == 0.0) || (local_e0 == local_e4)) {
              FUN_00984d5e();
            }
            local_128 = 0x6f504c;
            cVar1 = FUN_006f5d40();
            if (cVar1 == '\0') goto LAB_006f50e5;
            if (local_f8 < 2) {
              FUN_00414750();
              local_4._0_1_ = 4;
              FUN_006f1160();
              local_128 = 0x6f5146;
              FUN_00414420();
              FUN_0079ab00();
            }
            else {
              FUN_006f1160();
              FUN_006edb50();
              uVar6 = 0;
              if (local_f8 - 1 != 0) {
                uVar6 = local_f8 - 1;
              }
              if ((fVar9 == 0.0) || ((uint)((int)local_e0 - (int)fVar9) <= uVar6)) {
                FUN_00984d5e();
              }
              iVar4 = FUN_006f1160();
              if (*(uint *)(iVar4 + 0x24) < uVar6) {
                FUN_00984d5e();
              }
              if (*(uint *)(iVar4 + 0x28) < 0x10) {
                *(undefined1 *)(iVar4 + 0x14 + uVar6) = *(undefined1 *)((int)local_e4 + uVar6);
              }
              else {
                *(undefined1 *)(*(int *)(iVar4 + 0x14) + uVar6) =
                     *(undefined1 *)((int)local_e4 + uVar6);
              }
            }
            local_4 = (uint)local_4._1_3_ << 8;
            if (local_e4 != 0.0) {
              FUN_00401f20();
            }
            local_e4 = 0.0;
            local_e0 = 0.0;
            local_dc = 0;
            uVar6 = local_104;
            iVar4 = local_fc;
          }
          local_104 = uVar6 + 1;
          local_fc = iVar4 + 0x2c;
        } while (local_104 < local_40);
      }
      if ((local_38 & 1) != 0) {
        if (local_3c == 0) {
          local_128 = 0x6f51d8;
          FUN_006f2c20();
          if (local_50 != 0) {
            if ((*(int *)(param_2 + 0x34) == 0) ||
               (*(int *)(param_2 + 0x38) - *(int *)(param_2 + 0x34) >> 3 == 0)) {
              FUN_00984d5e();
            }
            local_128 = 0x6f5212;
            cVar1 = FUN_006f5d40();
            if (cVar1 == '\0') {
LAB_006f50ea:
              local_4 = 0xffffffff;
              FUN_006ed7c0();
              uVar2 = 0;
              goto LAB_006f5c7b;
            }
          }
          if (*(uint *)(param_2 + 0x48) < *(uint *)(param_2 + 0x44)) {
            FUN_00984d5e();
          }
          if (*(uint *)(param_2 + 0x48) < *(uint *)(param_2 + 0x44)) {
            FUN_00984d5e();
          }
          psStack_12c = &local_18;
          local_130 = 0x6f524a;
          local_128 = param_2 + 0x40;
          FUN_006f1470();
          if (*(uint *)(param_2 + 0x58) < *(uint *)(param_2 + 0x54)) {
            FUN_00984d5e();
          }
          if (*(uint *)(param_2 + 0x58) < *(uint *)(param_2 + 0x54)) {
            FUN_00984d5e();
          }
          psStack_12c = &local_18;
          local_130 = 0x6f527a;
          local_128 = param_2 + 0x50;
          FUN_006f14d0();
        }
        else {
          local_128 = 0x6f5295;
          FUN_006f2c20();
          if (local_3c != 0) {
            if ((*(int *)(param_2 + 0x34) == 0) ||
               (*(int *)(param_2 + 0x38) - *(int *)(param_2 + 0x34) >> 3 == 0)) {
              FUN_00984d5e();
            }
            local_128 = 0x6f52cf;
            cVar1 = FUN_006f5d40();
            if (cVar1 == '\0') goto LAB_006f50ea;
          }
          local_128 = local_4c;
          psStack_12c = (short *)0x6f52fc;
          FUN_006f29d0();
          if (local_4c != 0) {
            if ((*(int *)(param_2 + 0x44) == 0) ||
               (iVar7 = *(int *)(param_2 + 0x48) - *(int *)(param_2 + 0x44), iVar4 = iVar7 >> 0x1f,
               iVar7 / 0xc + iVar4 == iVar4)) {
              FUN_00984d5e();
            }
            local_128 = 0x6f5342;
            cVar1 = FUN_006f5d40();
            if (cVar1 == '\0') goto LAB_006f50ea;
          }
          local_128 = 0;
          psStack_12c = local_48;
          local_130 = 0x6f5374;
          FUN_006f2b70();
          if (local_48 != (short *)0x0) {
            if ((*(int *)(param_2 + 0x54) == 0) ||
               (*(int *)(param_2 + 0x58) - *(int *)(param_2 + 0x54) >> 4 == 0)) {
              FUN_00984d5e();
            }
            local_128 = 0x6f53ad;
            cVar1 = FUN_006f5d40();
            if (cVar1 == '\0') goto LAB_006f50ea;
          }
        }
      }
      iVar4 = local_f0;
      local_104 = 0;
      if (local_34 != 0) {
        local_fc = 0;
        do {
          iVar7 = local_fc;
          uVar6 = local_104;
          local_128 = 0x6f53ef;
          cVar1 = FUN_006f5d40();
          if (cVar1 == '\0') goto LAB_006f50ea;
          if (local_f8 != 0) {
            local_fd = 0;
            FUN_006f2cd0();
            iVar8 = local_d0;
            local_4._0_1_ = 5;
            if ((local_d0 == 0) || (local_cc == local_d0)) {
              FUN_00984d5e();
            }
            local_128 = 0x6f5448;
            cVar1 = FUN_006f5d40();
            if (cVar1 == '\0') {
              if (iVar8 != 0) {
                FUN_00401f20();
              }
              goto LAB_006f50ea;
            }
            if (local_f8 < 2) {
              local_ac = 0xf;
              local_b0 = 0;
              local_c0 = local_c0 & 0xffffff00;
              FUN_00414500();
              local_4._0_1_ = 6;
              if ((*(int *)(iVar4 + 4) == 0) ||
                 ((uint)((*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4)) / 0x2c) <= uVar6)) {
                FUN_00984d5e();
              }
              local_128 = 0x6f5592;
              FUN_00414420();
              if (0xf < local_ac) {
                FUN_00401f20();
              }
            }
            else {
              if ((*(int *)(iVar4 + 4) == 0) ||
                 ((uint)((*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4)) / 0x2c) <= uVar6)) {
                FUN_00984d5e();
              }
              if (*(uint *)(*(int *)(iVar4 + 4) + 0x14 + iVar7) < local_f8 - 1) {
                FUN_006edaa0();
              }
              else {
                FUN_004134e0();
              }
              uVar10 = 0;
              if (local_f8 != 1) {
                do {
                  if ((iVar8 == 0) || ((uint)(local_cc - iVar8) <= uVar10)) {
                    FUN_00984d5e();
                  }
                  if ((*(int *)(iVar4 + 4) == 0) ||
                     ((uint)((*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4)) / 0x2c) <= local_104)) {
                    FUN_00984d5e();
                  }
                  iVar7 = *(int *)(iVar4 + 4) + local_fc;
                  if (*(uint *)(iVar7 + 0x14) < uVar10) {
                    FUN_00984d5e();
                  }
                  if (*(uint *)(iVar7 + 0x18) < 0x10) {
                    iVar7 = iVar7 + 4;
                  }
                  else {
                    iVar7 = *(int *)(iVar7 + 4);
                  }
                  *(undefined1 *)(iVar7 + uVar10) = *(undefined1 *)(iVar8 + uVar10);
                  uVar10 = uVar10 + 1;
                  uVar6 = local_104;
                } while (uVar10 < local_f8 - 1);
              }
            }
            local_4 = (uint)local_4._1_3_ << 8;
            if (iVar8 != 0) {
              FUN_00401f20();
            }
            local_d0 = 0;
            local_cc = 0;
            local_c8 = 0;
          }
          local_128 = 0x6f55de;
          cVar1 = FUN_006f5d40();
          if (cVar1 == '\0') goto LAB_006f50ea;
          if ((*(int *)(iVar4 + 4) == 0) ||
             ((uint)((*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4)) / 0x2c) <= uVar6)) {
            FUN_00984d5e();
          }
          local_a0 = 0;
          local_9c = 0;
          local_98 = 0;
          local_128 = local_50;
          psStack_12c = (short *)0x6f5654;
          FUN_006f29d0();
          uVar6 = 0;
          if (local_50 != 0) {
            iVar7 = 0;
            do {
              local_128 = 0x6f567d;
              cVar1 = FUN_006f5d40();
              if (cVar1 == '\0') {
                local_94 = &PTR_FUN_00a7cd5c;
                local_4 = 7;
                if (local_54 != (undefined4 *)0x0) {
                  (**(code **)*local_54)();
                }
                goto LAB_006f58b2;
              }
              local_f0 = (int)local_18;
              local_ec = (float)local_d8 * (float)(int)local_14;
              local_e4 = (float)(int)local_16 * (float)local_d8;
              local_e8 = (float)local_f0 * (float)local_d8;
              local_e0 = local_ec;
              local_a4 = local_e4;
              if ((*(int *)(iVar4 + 4) == 0) ||
                 ((uint)((*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4)) / 0x2c) <= local_104)) {
                FUN_00984d5e();
              }
              iVar8 = *(int *)(iVar4 + 4) + local_fc;
              if ((*(int *)(iVar8 + 0x20) == 0) ||
                 ((uint)((*(int *)(iVar8 + 0x24) - *(int *)(iVar8 + 0x20)) / 0xc) <= uVar6)) {
                FUN_00984d5e();
              }
              pfVar5 = (float *)(*(int *)(iVar8 + 0x20) + iVar7);
              *pfVar5 = local_e8;
              pfVar5[1] = local_e4;
              uVar6 = uVar6 + 1;
              pfVar5[2] = local_e0;
              iVar7 = iVar7 + 0xc;
            } while (uVar6 < local_50);
          }
          local_fc = local_fc + 0x2c;
          local_104 = local_104 + 1;
        } while (local_104 < local_34);
      }
      puVar3 = local_f4;
      uVar6 = 0;
      local_f8 = local_50;
      if (local_30 != 0) {
        local_fc = 0;
        do {
          local_128 = 0x6f57b5;
          cVar1 = FUN_006f5d40();
          if (cVar1 == '\0') {
            local_94 = &PTR_FUN_00a7cd5c;
            local_4 = 8;
            if (local_54 != (undefined4 *)0x0) {
              (**(code **)*local_54)();
            }
            goto LAB_006f58b2;
          }
          uVar10 = 0;
          if (local_104 != 0) {
            local_fd = 0;
            FUN_006f2cd0();
            fVar9 = local_e4;
            local_4._0_1_ = 9;
            if ((local_e4 == 0.0) || (local_e0 == local_e4)) {
              FUN_00984d5e();
            }
            local_128 = 0x6f5810;
            cVar1 = FUN_006f5d40();
            if (cVar1 == '\0') {
              if (fVar9 != 0.0) {
                FUN_00401f20();
              }
              local_94 = &PTR_FUN_00a7cd5c;
              local_4 = 10;
              if (local_54 != (undefined4 *)0x0) {
                (**(code **)*local_54)();
              }
              goto LAB_006f58b2;
            }
            if (local_104 < 2) {
              local_ac = 0xf;
              local_b0 = 0;
              local_c0 = local_c0 & 0xffffff00;
              FUN_00414500();
              local_4._0_1_ = 0xb;
              if ((*(int *)(puVar3 + 4) == 0) ||
                 ((uint)((*(int *)(puVar3 + 8) - *(int *)(puVar3 + 4)) / 0x30) <= uVar6)) {
                FUN_00984d5e();
              }
              local_128 = 0x6f59c2;
              FUN_00414420();
              if (0xf < local_ac) {
                FUN_00401f20();
              }
            }
            else {
              if ((*(int *)(puVar3 + 4) == 0) ||
                 ((uint)((*(int *)(puVar3 + 8) - *(int *)(puVar3 + 4)) / 0x30) <= uVar6)) {
                FUN_00984d5e();
              }
              if (*(uint *)(*(int *)(puVar3 + 4) + local_fc + 0x14) < local_104 - 1) {
                FUN_006edaa0();
              }
              else {
                FUN_004134e0();
              }
              if (local_104 != 1) {
                do {
                  if ((local_e4 == 0.0) || ((uint)((int)local_e0 - (int)local_e4) <= uVar10)) {
                    FUN_00984d5e();
                  }
                  if ((*(int *)(puVar3 + 4) == 0) ||
                     ((uint)((*(int *)(puVar3 + 8) - *(int *)(puVar3 + 4)) / 0x30) <= uVar6)) {
                    FUN_00984d5e();
                  }
                  iVar4 = *(int *)(puVar3 + 4) + local_fc;
                  if (*(uint *)(iVar4 + 0x14) < uVar10) {
                    FUN_00984d5e();
                  }
                  if (*(uint *)(iVar4 + 0x18) < 0x10) {
                    iVar4 = iVar4 + 4;
                  }
                  else {
                    iVar4 = *(int *)(iVar4 + 4);
                  }
                  *(undefined1 *)(iVar4 + uVar10) = *(undefined1 *)((int)local_e4 + uVar10);
                  uVar10 = uVar10 + 1;
                  fVar9 = local_e4;
                } while (uVar10 < local_104 - 1);
              }
            }
            local_4 = (uint)local_4._1_3_ << 8;
            if (fVar9 != 0.0) {
              FUN_00401f20();
            }
            local_e4 = 0.0;
            local_e0 = 0.0;
            local_dc = 0;
          }
          if ((*(int *)(puVar3 + 4) == 0) ||
             ((uint)((*(int *)(puVar3 + 8) - *(int *)(puVar3 + 4)) / 0x30) <= uVar6)) {
            FUN_00984d5e();
          }
          *(uint *)(*(int *)(puVar3 + 4) + 0x1c + local_fc) = local_f8;
          local_128 = 0x6f5a41;
          cVar1 = FUN_006f5d40();
          if (cVar1 == '\0') {
            local_94 = &PTR_FUN_00a7cd5c;
            local_4 = 0xc;
            if (local_54 != (undefined4 *)0x0) {
              (**(code **)*local_54)();
            }
            goto LAB_006f58b2;
          }
          if ((*(int *)(puVar3 + 4) == 0) ||
             ((uint)((*(int *)(puVar3 + 8) - *(int *)(puVar3 + 4)) / 0x30) <= uVar6)) {
            FUN_00984d5e();
          }
          FUN_006f2ab0();
          if (local_104 != 0) {
            if ((*(int *)(puVar3 + 4) == 0) ||
               ((uint)((*(int *)(puVar3 + 8) - *(int *)(puVar3 + 4)) / 0x30) <= uVar6)) {
              FUN_00984d5e();
            }
            iVar4 = *(int *)(*(int *)(puVar3 + 4) + local_fc + 0x24);
            if ((iVar4 == 0) || (*(int *)(*(int *)(puVar3 + 4) + local_fc + 0x28) - iVar4 >> 2 == 0)
               ) {
              FUN_00984d5e();
            }
            local_128 = 0x6f5ae1;
            cVar1 = FUN_006f5d40();
            if (cVar1 == '\0') goto LAB_006f50ea;
          }
          local_f8 = local_f8 + local_104;
          local_fc = local_fc + 0x30;
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_30);
      }
      if (local_f8 == local_2c + local_50) {
        local_94 = &PTR_FUN_00a7cd5c;
        local_4 = 0xe;
        if (local_54 != (undefined4 *)0x0) {
          (**(code **)*local_54)();
        }
        local_54 = (undefined4 *)0x0;
        local_4 = 0xffffffff;
        FUN_006ed710();
        uVar2 = 1;
      }
      else {
        local_f4 = local_134;
        local_138 = 0xffffffff;
        local_13c = (char *)0x0;
        local_140 = local_a8;
        local_130 = local_130 & 0xffffff00;
        uStack_144 = 0x6f5b46;
        FUN_00414420();
        local_138 = 1;
        local_13c = (char *)0x6f5b4d;
        FUN_006f6bf0();
        local_94 = &PTR_FUN_00a7cd5c;
        local_4 = 0xd;
        if (local_54 != (undefined4 *)0x0) {
          (**(code **)*local_54)();
        }
LAB_006f58b2:
        local_54 = (undefined4 *)0x0;
        local_4 = 0xffffffff;
        FUN_006ed710();
        uVar2 = 0;
      }
      goto LAB_006f5c7b;
    }
  }
  local_4 = 0xffffffff;
  FUN_006ed7c0();
  uVar2 = 0;
LAB_006f5c7b:
  *unaff_FS_OFFSET = local_c;
  return uVar2;
LAB_006f50e5:
  FUN_00794eb0();
  goto LAB_006f50ea;
LAB_006f50ca:
  local_4 = 0xffffffff;
  FUN_006ed7c0();
  uVar2 = 0;
  goto LAB_006f5c7b;
}



undefined4 FUN_006f5cb0(byte *param_1,byte *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  for (; 3 < param_3; param_3 = param_3 - 4) {
    if (*(int *)param_1 != *(int *)param_2) goto LAB_006f5cdb;
    param_2 = param_2 + 4;
    param_1 = param_1 + 4;
  }
  if (param_3 == 0) {
LAB_006f5d39:
    uVar1 = 0;
  }
  else {
LAB_006f5cdb:
    iVar2 = (uint)*param_1 - (uint)*param_2;
    if (iVar2 == 0) {
      if (param_3 == 1) goto LAB_006f5d39;
      iVar2 = (uint)param_1[1] - (uint)param_2[1];
      if (iVar2 == 0) {
        if (param_3 == 2) goto LAB_006f5d39;
        iVar2 = (uint)param_1[2] - (uint)param_2[2];
        if (iVar2 == 0) {
          if ((param_3 == 3) || (iVar2 = (uint)param_1[3] - (uint)param_2[3], iVar2 == 0))
          goto LAB_006f5d39;
        }
      }
    }
    uVar1 = 1;
    if (iVar2 < 1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}



bool FUN_006f5d40(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(in_ECX + 0x40);
  if (iVar1 == 0) {
    return false;
  }
  iVar2 = param_2 * param_3;
  if ((param_2 != 0) && ((param_2 < 3 || (param_2 == 4)))) {
    iVar1 = (**(code **)(iVar1 + 4))(iVar1,param_1,iVar2,&param_2,1);
    return iVar2 - iVar1 == 0;
  }
  if ((param_2 & 3) == 0) {
    param_2 = 4;
  }
  else {
    FUN_006ed6d0(".\\binaryFile.cpp",0x1bd);
    param_2 = 1;
  }
  iVar1 = (**(code **)(*(int *)(in_ECX + 0x40) + 4))
                    (*(int *)(in_ECX + 0x40),param_1,iVar2,&param_2,1);
  return iVar2 - iVar1 == 0;
}



uint FUN_006f5de0(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  
  if (*(uint *)(in_ECX + 0x14) < param_1) {
    FUN_009805af();
  }
  uVar1 = *(int *)(in_ECX + 0x14) - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  uVar1 = param_2;
  if (param_4 <= param_2) {
    uVar1 = param_4;
  }
  if (*(uint *)(in_ECX + 0x18) < 0x10) {
    iVar2 = in_ECX + 4;
  }
  else {
    iVar2 = *(int *)(in_ECX + 4);
  }
  uVar1 = FUN_006f5cb0(iVar2 + param_1,param_3,uVar1);
  if (uVar1 == 0) {
    if (param_2 < param_4) {
      return 0xffffffff;
    }
    uVar1 = (uint)(param_2 != param_4);
  }
  return uVar1;
}



undefined4 FUN_006f5e50(void)

{
  char cVar1;
  int *in_ECX;
  
  if (in_ECX[0x10] != 0) {
    cVar1 = (**(code **)(*in_ECX + 0x10))();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_00414420(in_ECX + 1,0,0xffffffff);
    FUN_006f6bf0(1);
    if ((undefined4 *)in_ECX[0x10] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)in_ECX[0x10])();
    }
    in_ECX[0x10] = 0;
  }
  return 0;
}



void FUN_006f5ed0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  uint in_stack_0000001c;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8c3e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7cd44;
  in_ECX[7] = 0xf;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  in_ECX[0xe] = 0xf;
  in_ECX[0xd] = 0;
  *(undefined1 *)(in_ECX + 9) = 0;
  local_4 = 2;
  FUN_00414420(&param_1,0,0xffffffff);
  if (in_ECX[0xd] != 8) {
    FUN_006ed6d0(".\\binaryFile.cpp",0x1b,uVar1);
  }
  in_ECX[0xf] = 0;
  if ((uint)in_ECX[0xd] < 5) {
    FUN_00984d5e();
  }
  if ((uint)in_ECX[0xe] < 0x10) {
    puVar2 = in_ECX + 9;
  }
  else {
    puVar2 = (undefined4 *)in_ECX[9];
  }
  *(undefined1 *)((int)puVar2 + 5) = 0x30;
  if (0xf < in_stack_0000001c) {
    FUN_00401f20(param_2);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006f5fa0(void)

{
  int in_ECX;
  
  if (*(FILE **)(in_ECX + 0x3c) != (FILE *)0x0) {
    _fclose(*(FILE **)(in_ECX + 0x3c));
  }
  FUN_00414500(&DAT_00a2f7ec,0);
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  return;
}



undefined4 FUN_006f5fd0(void *param_1,size_t param_2,size_t param_3)

{
  size_t sVar1;
  int in_ECX;
  
  if (*(FILE **)(in_ECX + 0x3c) != (FILE *)0x0) {
    sVar1 = _fwrite(param_1,param_2,param_3,*(FILE **)(in_ECX + 0x3c));
    if (sVar1 == param_3) {
      return 1;
    }
    FUN_00414420(in_ECX + 4,0,0xffffffff);
    FUN_006f6bf0(6);
    if (*(FILE **)(in_ECX + 0x3c) != (FILE *)0x0) {
      _fclose(*(FILE **)(in_ECX + 0x3c));
    }
    FUN_00414500();
    *(undefined4 *)(in_ECX + 0x3c) = 0;
  }
  return 0;
}



undefined4 FUN_006f6060(void *param_1,size_t param_2,size_t param_3)

{
  size_t sVar1;
  int in_ECX;
  
  if (*(FILE **)(in_ECX + 0x3c) != (FILE *)0x0) {
    sVar1 = _fread(param_1,param_2,param_3,*(FILE **)(in_ECX + 0x3c));
    if (sVar1 == param_3) {
      return 1;
    }
    FUN_00414420(in_ECX + 4,0,0xffffffff);
    FUN_006f6bf0(1);
    if (*(FILE **)(in_ECX + 0x3c) != (FILE *)0x0) {
      _fclose(*(FILE **)(in_ECX + 0x3c));
    }
    FUN_00414500();
    *(undefined4 *)(in_ECX + 0x3c) = 0;
  }
  return 0;
}



void FUN_006f6110(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  uint in_stack_0000001c;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8c68;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_00414420(&param_1,0,0xffffffff);
  FUN_006f5ed0();
  *in_ECX = &PTR_FUN_00a7cd5c;
  in_ECX[0x10] = 0;
  if (0xf < in_stack_0000001c) {
    FUN_00401f20();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x006f61cd) */

void FUN_006f61a0(int param_1)

{
  uint uVar1;
  void *_Src;
  void *_Dst;
  int iVar2;
  int in_ECX;
  int iVar3;
  rsize_t _DstSize;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (iVar3 != 0) {
    iVar2 = FUN_00412e70(iVar3,0);
    *(int *)(in_ECX + 4) = iVar2;
    *(int *)(in_ECX + 8) = iVar2;
    *(int *)(in_ECX + 0xc) = iVar2 + iVar3;
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 < *(uint *)(param_1 + 4)) {
      FUN_00984d5e();
    }
    _Src = *(void **)(param_1 + 4);
    if (*(void **)(param_1 + 8) < _Src) {
      FUN_00984d5e();
    }
    _Dst = *(void **)(in_ECX + 4);
    _DstSize = uVar1 - (int)_Src;
    if (_DstSize != 0) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(rsize_t *)(in_ECX + 8) = _DstSize + (int)_Dst;
  }
  return;
}



undefined4 FUN_006f6230(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *_Filename;
  FILE *pFVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  uint in_stack_0000001c;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8c98;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (*(FILE **)(in_ECX + 0x3c) != (FILE *)0x0) {
    _fclose(*(FILE **)(in_ECX + 0x3c));
  }
  FUN_00414500();
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  _Filename = param_2;
  if (in_stack_0000001c < 0x10) {
    _Filename = (char *)&param_2;
  }
  pFVar2 = _fopen(_Filename,"wb");
  *(FILE **)(in_ECX + 0x3c) = pFVar2;
  if (pFVar2 == (FILE *)0x0) {
    FUN_00414420(&param_1,0,0xffffffff);
    FUN_006f6bf0(5);
    if (0xf < in_stack_0000001c) {
      FUN_00401f20();
    }
  }
  else {
    cVar1 = FUN_006f5fd0();
    if (cVar1 != '\0') {
      FUN_00414420();
      if (0xf < in_stack_0000001c) {
        FUN_00401f20();
      }
      uVar3 = 1;
      goto LAB_006f6396;
    }
    FUN_00414420(&param_1,0,0xffffffff);
    FUN_006f6bf0(5);
    if (*(FILE **)(in_ECX + 0x3c) != (FILE *)0x0) {
      _fclose(*(FILE **)(in_ECX + 0x3c));
    }
    FUN_00414500();
    *(undefined4 *)(in_ECX + 0x3c) = 0;
    if (0xf < in_stack_0000001c) {
      FUN_00401f20();
      uVar3 = 0;
      goto LAB_006f6396;
    }
  }
  uVar3 = 0;
LAB_006f6396:
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



undefined4 FUN_006f63b0(undefined4 param_1,char *param_2)

{
  char cVar1;
  FILE *pFVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  uint in_stack_0000001c;
  int local_30;
  int local_2c;
  int local_20;
  char *local_18;
  char *local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8cd8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (*(FILE **)(in_ECX + 0x3c) != (FILE *)0x0) {
    _fclose(*(FILE **)(in_ECX + 0x3c));
  }
  FUN_00414500();
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  pcVar5 = param_2;
  if (in_stack_0000001c < 0x10) {
    pcVar5 = (char *)&param_2;
  }
  pFVar2 = _fopen(pcVar5,"rb");
  *(FILE **)(in_ECX + 0x3c) = pFVar2;
  if (pFVar2 == (FILE *)0x0) {
    FUN_00414420(&param_1,0,0xffffffff);
    FUN_006f6bf0(4);
LAB_006f645d:
    if (0xf < in_stack_0000001c) {
      FUN_00401f20();
    }
  }
  else {
    FUN_006f2cd0();
    local_4._0_1_ = 1;
    if ((local_30 == 0) || (local_2c == local_30)) {
      FUN_00984d5e();
    }
    cVar1 = FUN_006f6060();
    if (cVar1 != '\0') {
      FUN_006f61a0();
      local_4 = CONCAT31(local_4._1_3_,2);
      if (*(uint *)(in_ECX + 0x34) < 5) {
        FUN_00984d5e();
      }
      if (*(uint *)(in_ECX + 0x38) < 0x10) {
        local_20 = in_ECX + 0x24;
      }
      else {
        local_20 = *(int *)(in_ECX + 0x24);
      }
      if ((local_18 == (char *)0x0) || ((uint)((int)local_14 - (int)local_18) < 6)) {
        FUN_00984d5e();
      }
      local_18[5] = *(char *)(local_20 + 5);
      if (local_14 == local_18) {
        FUN_00984d5e();
      }
      do {
        cVar1 = *local_18;
        local_18 = local_18 + 1;
      } while (cVar1 != '\0');
      iVar4 = FUN_006f5de0();
      if (iVar4 == 0) {
        if ((local_30 == 0) || ((uint)(local_2c - local_30) < 6)) {
          FUN_00984d5e();
        }
        if ('0' < *(char *)(local_30 + 5)) {
          pcVar5 = (char *)FUN_006eda70();
          pcVar6 = (char *)FUN_006f1210();
          if (*pcVar5 != *pcVar6) {
            FUN_00414680(&param_1);
            FUN_006f6bf0(4);
            FUN_006f5fa0();
            FUN_00794eb0();
            FUN_00794eb0();
            FUN_0079ab00();
            uVar3 = 0;
            goto LAB_006f66c4;
          }
        }
        if ((local_30 == 0) || ((uint)(local_2c - local_30) < 6)) {
          FUN_00984d5e();
        }
        puVar7 = (undefined1 *)FUN_006eda70();
        *puVar7 = *(undefined1 *)(local_30 + 5);
        FUN_00414420();
        FUN_00794eb0();
        FUN_00794eb0();
        FUN_0079ab00();
        uVar3 = 1;
        goto LAB_006f66c4;
      }
      FUN_00414420(&param_1,0,0xffffffff);
      FUN_006f6bf0(2);
      FUN_006f5fa0();
      FUN_00401f20();
      if (local_30 != 0) {
        FUN_00401f20();
      }
      goto LAB_006f645d;
    }
    if (local_30 != 0) {
      FUN_00401f20();
    }
    if (0xf < in_stack_0000001c) {
      FUN_00401f20();
      uVar3 = 0;
      goto LAB_006f66c4;
    }
  }
  uVar3 = 0;
LAB_006f66c4:
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



bool FUN_006f66e0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  bool bVar6;
  uint in_stack_0000001c;
  undefined1 in_stack_00000020;
  int local_34;
  int local_28;
  int local_24;
  char *local_18;
  char *local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8d18;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  iVar2 = FUN_00430ef0();
  *(int *)(in_ECX + 0x40) = iVar2;
  if (iVar2 == 0) {
    FUN_00414420(&param_1,0,0xffffffff);
    FUN_006f6bf0(4);
LAB_006f677a:
    if (0xf < in_stack_0000001c) {
      FUN_00401f20();
    }
  }
  else {
    FUN_006f2cd0();
    local_4._0_1_ = 1;
    if ((local_28 == 0) || (local_24 == local_28)) {
      FUN_00984d5e();
    }
    cVar1 = FUN_006f5e50();
    if (cVar1 != '\0') {
      FUN_006f61a0();
      local_4 = CONCAT31(local_4._1_3_,2);
      if (*(uint *)(in_ECX + 0x34) < 5) {
        FUN_00984d5e();
      }
      if (*(uint *)(in_ECX + 0x38) < 0x10) {
        local_34 = in_ECX + 0x24;
      }
      else {
        local_34 = *(int *)(in_ECX + 0x24);
      }
      if ((local_18 == (char *)0x0) || ((uint)((int)local_14 - (int)local_18) < 6)) {
        FUN_00984d5e();
      }
      local_18[5] = *(char *)(local_34 + 5);
      if (local_14 == local_18) {
        FUN_00984d5e();
      }
      do {
        cVar1 = *local_18;
        local_18 = local_18 + 1;
      } while (cVar1 != '\0');
      iVar2 = FUN_006f5de0();
      if (iVar2 == 0) {
        if ((local_28 == 0) || ((uint)(local_24 - local_28) < 6)) {
          FUN_00984d5e();
        }
        if ('0' < *(char *)(local_28 + 5)) {
          pcVar3 = (char *)FUN_006eda70();
          pcVar4 = (char *)FUN_006f1210();
          if (*pcVar3 != *pcVar4) {
            FUN_00414680(&param_1);
            FUN_006f6bf0(4);
            FUN_006ed6f0();
            FUN_00794eb0();
            FUN_00794eb0();
            FUN_0079ab00();
            bVar6 = false;
            goto LAB_006f69f4;
          }
        }
        if ((local_28 == 0) || ((uint)(local_24 - local_28) < 6)) {
          FUN_00984d5e();
        }
        puVar5 = (undefined1 *)FUN_006eda70();
        *puVar5 = *(undefined1 *)(local_28 + 5);
        FUN_00414420();
        bVar6 = *(int *)(in_ECX + 0x40) != 0;
        FUN_00794eb0();
        FUN_00794eb0();
        FUN_0079ab00();
        goto LAB_006f69f4;
      }
      FUN_00414420(&param_1,0,0xffffffff);
      FUN_006f6bf0(2);
      if (*(undefined4 **)(in_ECX + 0x40) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(in_ECX + 0x40))();
      }
      *(undefined4 *)(in_ECX + 0x40) = 0;
      FUN_00401f20();
      if (local_28 != 0) {
        FUN_00401f20();
      }
      goto LAB_006f677a;
    }
    if (local_28 != 0) {
      FUN_00401f20();
    }
    if (0xf < in_stack_0000001c) {
      FUN_00401f20();
      bVar6 = false;
      goto LAB_006f69f4;
    }
  }
  bVar6 = false;
LAB_006f69f4:
  *unaff_FS_OFFSET = local_c;
  return bVar6;
}



float10 FUN_006f6a10(void)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  __time64_t _Var4;
  double local_10;
  
  if (DAT_00b3f058 == '\0') {
    _Var4 = __time64((__time64_t *)0x0);
    FUN_009859d0((int)_Var4);
    DAT_00b3f058 = '\x01';
  }
  iVar2 = 4;
  local_10 = 0.0;
  do {
    iVar1 = _rand();
    iVar2 = iVar2 + -1;
    fVar3 = (float10)local_10 * (float10)32768.0 + (float10)iVar1;
    local_10 = (double)fVar3;
  } while (iVar2 != 0);
  return fVar3 * (float10)8.673617379884035e-19;
}



float10 FUN_006f6a80(void)

{
  float10 fVar1;
  float10 fVar2;
  double dVar3;
  
  do {
    do {
      fVar1 = (float10)FUN_006f6a10();
      dVar3 = (double)((fVar1 + fVar1) - (float10)1.0);
      fVar1 = (float10)FUN_006f6a10();
      fVar1 = (fVar1 + fVar1) - (float10)1;
      fVar2 = (float10)dVar3 * (float10)dVar3 + fVar1 * fVar1;
    } while ((float10)1 < fVar2);
  } while ((float10)0 == fVar2);
  FUN_00986b80((double)fVar2);
  fVar2 = (float10)FUN_00982c30();
  return fVar2 * (float10)(double)fVar1;
}



void FUN_006f6af0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    FUN_009805af();
  }
  uVar1 = *(int *)(param_1 + 0x14) - param_2;
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  uVar1 = *(uint *)(in_ECX + 0x14);
  if ((-uVar1 - 1 <= param_3) || (uVar1 + param_3 < uVar1)) {
    FUN_00980570();
  }
  if (param_3 != 0) {
    uVar1 = *(int *)(in_ECX + 0x14) + param_3;
    if (uVar1 == 0xffffffff) {
      FUN_00980570();
    }
    if (*(uint *)(in_ECX + 0x18) < uVar1) {
      FUN_004135c0(uVar1,*(undefined4 *)(in_ECX + 0x14));
    }
    else if (uVar1 == 0) {
      *(undefined4 *)(in_ECX + 0x14) = 0;
      if (0xf < *(uint *)(in_ECX + 0x18)) {
        **(undefined1 **)(in_ECX + 4) = 0;
        return;
      }
      *(undefined1 *)(in_ECX + 4) = 0;
      return;
    }
    if (uVar1 != 0) {
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        param_1 = param_1 + 4;
      }
      else {
        param_1 = *(int *)(param_1 + 4);
      }
      if (*(uint *)(in_ECX + 0x18) < 0x10) {
        iVar2 = in_ECX + 4;
      }
      else {
        iVar2 = *(int *)(in_ECX + 4);
      }
      _memcpy_s((void *)(*(int *)(in_ECX + 0x14) + iVar2),
                *(uint *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x14),(void *)(param_1 + param_2),
                param_3);
      *(uint *)(in_ECX + 0x14) = uVar1;
      if (0xf < *(uint *)(in_ECX + 0x18)) {
        *(undefined1 *)(*(int *)(in_ECX + 4) + uVar1) = 0;
        return;
      }
      *(undefined1 *)(in_ECX + 4 + uVar1) = 0;
    }
  }
  return;
}



void FUN_006f6bf0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *_Src;
  uint _Size;
  int *unaff_FS_OFFSET;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8d48;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (DAT_00b3f068 == 0) {
    DAT_00b3f068 = param_1;
    _Size = in_stack_0000001c;
    if (0xff < in_stack_0000001c) {
      FUN_006ed6d0(".\\lastError.cpp",0x41,uVar1);
      _Size = 0xff;
    }
    _Src = param_3;
    if (in_stack_00000020 < 0x10) {
      _Src = &param_3;
    }
    _memcpy(&DAT_00b3f06c,_Src,_Size);
    (&DAT_00b3f06c)[_Size] = 0;
  }
  if (0xf < in_stack_00000020) {
    FUN_00401f20(param_3);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006f6ca0(undefined4 *param_1,uint param_2)

{
  int in_ECX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(in_ECX + 0x18);
  puVar2 = (undefined4 *)(in_ECX + 4);
  puVar1 = puVar2;
  if (0xf < uVar3) {
    puVar1 = (undefined4 *)*puVar2;
  }
  if (puVar1 <= param_1) {
    puVar1 = puVar2;
    if (0xf < uVar3) {
      puVar1 = (undefined4 *)*puVar2;
    }
    if (param_1 < (undefined4 *)(*(int *)(in_ECX + 0x14) + (int)puVar1)) {
      if (0xf < uVar3) {
        puVar2 = (undefined4 *)*puVar2;
      }
      FUN_006f6af0(in_ECX,(int)param_1 - (int)puVar2,param_2);
      return;
    }
  }
  uVar3 = *(uint *)(in_ECX + 0x14);
  if ((-uVar3 - 1 <= param_2) || (uVar3 + param_2 < uVar3)) {
    FUN_00980570();
  }
  if (param_2 != 0) {
    uVar3 = *(int *)(in_ECX + 0x14) + param_2;
    if (uVar3 == 0xffffffff) {
      FUN_00980570();
    }
    if (*(uint *)(in_ECX + 0x18) < uVar3) {
      FUN_004135c0(uVar3,*(undefined4 *)(in_ECX + 0x14));
    }
    else if (uVar3 == 0) {
      *(undefined4 *)(in_ECX + 0x14) = 0;
      if (0xf < *(uint *)(in_ECX + 0x18)) {
        puVar2 = (undefined4 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
      return;
    }
    if (uVar3 != 0) {
      puVar1 = puVar2;
      if (0xf < *(uint *)(in_ECX + 0x18)) {
        puVar1 = (undefined4 *)*puVar2;
      }
      _memcpy_s((void *)(*(int *)(in_ECX + 0x14) + (int)puVar1),
                *(uint *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x14),param_1,param_2);
      *(uint *)(in_ECX + 0x14) = uVar3;
      if (0xf < *(uint *)(in_ECX + 0x18)) {
        puVar2 = (undefined4 *)*puVar2;
      }
      *(undefined1 *)((int)puVar2 + uVar3) = 0;
    }
  }
  return;
}



void FUN_006f6d90(void)

{
  int in_ECX;
  _Lockit local_4 [4];
  
  std::_Lockit::_Lockit(local_4,0);
  if (*(int *)(in_ECX + 4) != -1) {
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
  }
  FUN_009807d1();
  return;
}



uint FUN_006f6dc0(void)

{
  int iVar1;
  uint in_ECX;
  _Lockit local_4 [4];
  
  std::_Lockit::_Lockit(local_4,0);
  iVar1 = *(int *)(in_ECX + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(in_ECX + 4) = iVar1 + -1;
  }
  iVar1 = *(int *)(in_ECX + 4);
  FUN_009807d1();
  return ~-(uint)(iVar1 != 0) & in_ECX;
}



void FUN_006f6e10(void)

{
  uint uVar1;
  int iVar2;
  uint *in_ECX;
  undefined4 *puVar3;
  _Lockit local_4 [4];
  
  uVar1 = *in_ECX;
  if (uVar1 != 0) {
    std::_Lockit::_Lockit(local_4,0);
    iVar2 = *(int *)(uVar1 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar1 + 4) = iVar2 + -1;
    }
    puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar1 + 4) != 0) & uVar1);
    FUN_009807d1();
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  return;
}



int * FUN_006f6e60(int *param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = param_1;
  iVar1 = **(int **)(in_ECX + 0x24);
  *param_1 = iVar1;
  std::_Lockit::_Lockit((_Lockit *)&param_1,0);
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  FUN_009807d1();
  return piVar2;
}



void FUN_006f6eb0(void)

{
  ios_base *piVar1;
  int *in_ECX;
  
  piVar1 = (ios_base *)(in_ECX + 1);
  *(undefined ***)(piVar1 + *(int *)(*in_ECX + 4) + -4) = &PTR_LAB_00a7ce14;
  *(undefined ***)piVar1 = &PTR_FUN_00a7ce0c;
  std::ios_base::_Ios_base_dtor(piVar1);
  return;
}



void FUN_006f6ed0(byte param_1)

{
  ios_base *in_ECX;
  
  *(undefined ***)in_ECX = &PTR_FUN_00a7ce0c;
  std::ios_base::_Ios_base_dtor(in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_006f6f00(void)

{
  int in_ECX;
  
  if (**(int **)(in_ECX + 0x20) != 0) {
    return **(undefined4 **)(in_ECX + 0x30);
  }
  return 0;
}



undefined4 FUN_006f6f20(void)

{
  int in_ECX;
  
  if (**(int **)(in_ECX + 0x24) != 0) {
    return **(undefined4 **)(in_ECX + 0x34);
  }
  return 0;
}



void FUN_006f6f40(void)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x20) = in_ECX + 0x18;
  *(int *)(in_ECX + 0x24) = in_ECX + 0x1c;
  *(int *)(in_ECX + 0x10) = in_ECX + 8;
  *(int *)(in_ECX + 0x30) = in_ECX + 0x28;
  *(undefined4 **)(in_ECX + 0x14) = (undefined4 *)(in_ECX + 0xc);
  *(int *)(in_ECX + 0x34) = in_ECX + 0x2c;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  **(undefined4 **)(in_ECX + 0x24) = 0;
  **(undefined4 **)(in_ECX + 0x34) = 0;
  **(undefined4 **)(in_ECX + 0x10) = 0;
  **(undefined4 **)(in_ECX + 0x20) = 0;
  **(undefined4 **)(in_ECX + 0x30) = 0;
  return;
}



void FUN_006f6fa0(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined4 *puVar4;
  _Lockit local_4 [4];
  
  puVar1 = (uint *)in_ECX[0xe];
  *in_ECX = &PTR_FUN_00a7ce24;
  if (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      std::_Lockit::_Lockit(local_4,0);
      iVar3 = *(int *)(uVar2 + 4);
      if ((iVar3 != 0) && (iVar3 != -1)) {
        *(int *)(uVar2 + 4) = iVar3 + -1;
      }
      puVar4 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
      FUN_009807d1();
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
    }
    FUN_00401f20(puVar1);
  }
  FUN_00980bfc();
  return;
}



undefined4 FUN_006f7030(void)

{
  return 0xffffffff;
}



undefined4 FUN_006f7070(void)

{
  return 0;
}



uint FUN_006f7080(void)

{
  byte *pbVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x10))();
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  *(int *)in_ECX[0xc] = *(int *)in_ECX[0xc] + -1;
  pbVar1 = *(byte **)in_ECX[8];
  *(byte **)in_ECX[8] = pbVar1 + 1;
  return (uint)*pbVar1;
}



void FUN_006f7130(byte param_1)

{
  FUN_006f6fa0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* Library Function - Single Match
    public: char const & __thiscall std::_String_const_iterator<char,struct
   std::char_traits<char>,class std::allocator<char> >::operator*(void)const 
   
   Library: Visual Studio 2005 Release */

char * __thiscall
std::_String_const_iterator<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
operator*(_String_const_iterator<char,struct_std::char_traits<char>,class_std::allocator<char>_>
          *this)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)this != -2) {
    if (*(int *)this == 0) {
      FUN_00984d5e();
    }
    iVar1 = *(int *)this;
    if (*(uint *)(iVar1 + 0x18) < 0x10) {
      iVar2 = iVar1 + 4;
    }
    else {
      iVar2 = *(int *)(iVar1 + 4);
    }
    if ((uint)(*(int *)(iVar1 + 0x14) + iVar2) <= *(uint *)(this + 4)) {
      FUN_00984d5e();
    }
  }
  return *(char **)(this + 4);
}



void FUN_006f7190(void)

{
  uint uVar1;
  undefined4 *puVar2;
  _Locimp *p_Var3;
  int iVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  _Lockit local_14 [8];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c8d7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7ce24;
  FUN_00980be4(uVar1);
  local_4 = 0;
  puVar2 = (undefined4 *)FUN_00401f00(4);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    p_Var3 = std::locale::_Init();
    *puVar2 = p_Var3;
    iVar4 = FUN_0098083e();
    std::_Lockit::_Lockit(local_14,0);
    if (*(int *)(iVar4 + 4) != -1) {
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    }
    FUN_009807d1();
  }
  in_ECX[0xe] = puVar2;
  FUN_006f6f40();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006f7240(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int *in_ECX;
  undefined4 *puVar2;
  
  *in_ECX = 0;
  if ((param_2 != 0) && (param_1 != (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)(param_2 + 4);
    puVar2 = puVar1;
    if (0xf < *(uint *)(param_2 + 0x18)) {
      puVar2 = (undefined4 *)*puVar1;
    }
    if (puVar2 <= param_1) {
      if (0xf < *(uint *)(param_2 + 0x18)) {
        puVar1 = (undefined4 *)*puVar1;
      }
      if (param_1 <= (undefined4 *)(*(int *)(param_2 + 0x14) + (int)puVar1)) goto LAB_006f7285;
    }
  }
  FUN_00984d5e();
LAB_006f7285:
  *in_ECX = param_2;
  in_ECX[1] = (int)param_1;
  return;
}



void FUN_006f73e0(int param_1)

{
  undefined4 *in_ECX;
  
  FUN_006f7190();
  *in_ECX = &PTR_FUN_00a7ce60;
  *(undefined1 *)(in_ECX + 0x12) = 0;
  *(undefined1 *)((int)in_ECX + 0x41) = 0;
  FUN_006f6f40();
  if (param_1 != 0) {
    in_ECX[4] = param_1 + 8;
    in_ECX[5] = param_1 + 8;
    in_ECX[8] = param_1;
    in_ECX[9] = param_1;
    in_ECX[0xc] = param_1 + 4;
    in_ECX[0xd] = param_1 + 4;
  }
  in_ECX[0x13] = param_1;
  in_ECX[0x11] = DAT_00b3f16c;
  in_ECX[0xf] = 0;
  return;
}



bool FUN_006f7440(char param_1,FILE *param_2)

{
  int iVar1;
  
  iVar1 = FID_conflict__fputc((int)param_1,param_2);
  return iVar1 != -1;
}



undefined4 FUN_006f7460(void)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[0x13] != 0) {
    iVar1 = (**(code **)(*in_ECX + 4))(0xffffffff);
    if (iVar1 != -1) {
      iVar1 = _fflush((FILE *)in_ECX[0x13]);
      if (iVar1 < 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}



uint FUN_006f7500(void)

{
  byte *pbVar1;
  uint uVar2;
  int *in_ECX;
  
  pbVar1 = *(byte **)in_ECX[8];
  if ((pbVar1 != (byte *)0x0) && (uVar2 = *(uint *)in_ECX[8], uVar2 < *(int *)in_ECX[0xc] + uVar2))
  {
    return (uint)*pbVar1;
  }
  uVar2 = (**(code **)(*in_ECX + 0x14))();
  if (uVar2 == 0xffffffff) {
    return 0xffffffff;
  }
  (**(code **)(*in_ECX + 8))(uVar2);
  return uVar2;
}



int FUN_006f7550(char *param_1,size_t param_2)

{
  int iVar1;
  int in_ECX;
  
  if (*(FILE **)(in_ECX + 0x4c) != (FILE *)0x0) {
    if ((param_1 == (char *)0x0) && (param_2 == 0)) {
      iVar1 = 4;
    }
    else {
      iVar1 = 0;
    }
    iVar1 = _setvbuf(*(FILE **)(in_ECX + 0x4c),param_1,iVar1,param_2);
    if (iVar1 == 0) {
      iVar1 = *(int *)(in_ECX + 0x4c);
      *(undefined1 *)(in_ECX + 0x48) = 1;
      *(undefined1 *)(in_ECX + 0x41) = 0;
      FUN_006f6f40();
      if (iVar1 != 0) {
        *(int *)(in_ECX + 0x10) = iVar1 + 8;
        *(int *)(in_ECX + 0x14) = iVar1 + 8;
        *(int *)(in_ECX + 0x20) = iVar1;
        *(int *)(in_ECX + 0x24) = iVar1;
        *(int *)(in_ECX + 0x30) = iVar1 + 4;
        *(int *)(in_ECX + 0x34) = iVar1 + 4;
      }
      *(int *)(in_ECX + 0x4c) = iVar1;
      *(undefined4 *)(in_ECX + 0x44) = DAT_00b3f16c;
      *(undefined4 *)(in_ECX + 0x3c) = 0;
      return in_ECX;
    }
  }
  return 0;
}



undefined4 FUN_006f75e0(undefined4 param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x18)) {
    FUN_006f7240(*(undefined4 *)(in_ECX + 4),in_ECX);
    return param_1;
  }
  FUN_006f7240(in_ECX + 4,in_ECX);
  return param_1;
}



bool FUN_006f7620(int param_1,int param_2)

{
  int iVar1;
  
  if (*(uint *)(param_2 + 0x18) < 0x10) {
    iVar1 = param_2 + 4;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
  }
  iVar1 = FUN_006f5de0(0,*(undefined4 *)(param_1 + 0x14),iVar1,*(undefined4 *)(param_2 + 0x14));
  return iVar1 < 0;
}



void FUN_006f7670(void)

{
  uint uVar1;
  _Locinfo *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8dd4;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 4;
  std::_Locinfo::_Locinfo_dtor(in_ECX);
  if (0xf < *(uint *)(in_ECX + 0x70)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x5c),uVar1);
  }
  *(undefined4 *)(in_ECX + 0x70) = 0xf;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  in_ECX[0x5c] = (_Locinfo)0x0;
  if (0xf < *(uint *)(in_ECX + 0x54)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x40),uVar1);
  }
  *(undefined4 *)(in_ECX + 0x54) = 0xf;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  in_ECX[0x40] = (_Locinfo)0x0;
  if (0xf < *(uint *)(in_ECX + 0x38)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x24),uVar1);
  }
  *(undefined4 *)(in_ECX + 0x38) = 0xf;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  in_ECX[0x24] = (_Locinfo)0x0;
  if (0xf < *(uint *)(in_ECX + 0x1c)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 8),uVar1);
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0xf;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  in_ECX[8] = (_Locinfo)0x0;
  local_4 = 0xffffffff;
  FUN_009807d1();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_006f7750(void)

{
  byte *pbVar1;
  FILE *_File;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 ***pppuVar5;
  int iVar6;
  _String_const_iterator<char,struct_std::char_traits<char>,class_std::allocator<char>_> *p_Var7;
  char *pcVar8;
  undefined4 ***pppuVar9;
  int in_ECX;
  undefined4 ***pppuVar10;
  int *unaff_FS_OFFSET;
  rsize_t _MaxCount;
  undefined1 auStack_4c [3];
  byte local_49;
  int local_48;
  int local_44;
  byte *local_40;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [12];
  undefined4 **local_28 [4];
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c8df8;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_4c;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffa4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((**(int **)(in_ECX + 0x20) == 0) ||
     (**(int **)(in_ECX + 0x30) + **(uint **)(in_ECX + 0x20) <= **(uint **)(in_ECX + 0x20))) {
    _File = *(FILE **)(in_ECX + 0x4c);
    if (_File != (FILE *)0x0) {
      if (*(int *)(in_ECX + 0x3c) == 0) {
        uVar3 = FID_conflict__getc(_File);
        if (uVar3 != 0xffffffff) {
          uVar3 = uVar3 & 0xff;
          goto LAB_006f7a2e;
        }
      }
      else {
        local_14 = 0xf;
        local_18 = 0;
        local_28[0] = (undefined4 **)((uint)local_28[0] & 0xffffff00);
        local_4 = 0;
        local_44 = in_ECX;
        iVar4 = FID_conflict__getc(_File);
        while (iVar4 != -1) {
          FUN_006edaa0(1,iVar4);
          if (local_14 < 0x10) {
            pppuVar10 = local_28;
LAB_006f782c:
            pppuVar9 = (undefined4 ***)local_28[0];
            if (local_14 < 0x10) {
              pppuVar9 = local_28;
            }
            if (pppuVar10 < pppuVar9) goto LAB_006f7850;
            pppuVar9 = (undefined4 ***)local_28[0];
            if (local_14 < 0x10) {
              pppuVar9 = local_28;
            }
            if ((undefined4 ***)((int)pppuVar9 + local_18) < pppuVar10) goto LAB_006f7850;
          }
          else {
            pppuVar10 = (undefined4 ***)local_28[0];
            if ((undefined4 ***)local_28[0] != (undefined4 ***)0x0) goto LAB_006f782c;
LAB_006f7850:
            FUN_00984d5e(uVar3);
          }
          if (&stack0x00000000 != (undefined1 *)0x2a) {
            pppuVar9 = (undefined4 ***)local_28[0];
            if (local_14 < 0x10) {
              pppuVar9 = local_28;
            }
            if ((undefined4 ***)((int)pppuVar9 + local_18) <= pppuVar10) {
              FUN_00984d5e(uVar3);
            }
          }
          iVar4 = local_18;
          if (local_14 < 0x10) {
            pppuVar9 = local_28;
LAB_006f789d:
            pppuVar5 = (undefined4 ***)local_28[0];
            if (local_14 < 0x10) {
              pppuVar5 = local_28;
            }
            if (pppuVar9 < pppuVar5) goto LAB_006f78bd;
            pppuVar5 = (undefined4 ***)local_28[0];
            if (local_14 < 0x10) {
              pppuVar5 = local_28;
            }
            if ((undefined4 ***)((int)pppuVar5 + local_18) < pppuVar9) goto LAB_006f78bd;
          }
          else {
            pppuVar9 = (undefined4 ***)local_28[0];
            if ((undefined4 ***)local_28[0] != (undefined4 ***)0x0) goto LAB_006f789d;
LAB_006f78bd:
            FUN_00984d5e();
          }
          if (&stack0x00000000 != (undefined1 *)0x2a) {
            pppuVar5 = (undefined4 ***)local_28[0];
            if (local_14 < 0x10) {
              pppuVar5 = local_28;
            }
            if ((undefined4 ***)((int)pppuVar5 + local_18) <= pppuVar9) {
              FUN_00984d5e();
            }
          }
          iVar2 = local_44;
          iVar6 = (**(code **)(**(int **)(local_44 + 0x3c) + 0x10))
                            (local_44 + 0x44,pppuVar9,(int)pppuVar10 + iVar4,&local_48,&local_49,
                             &local_48,&local_40);
          iVar4 = local_18;
          if (iVar6 < 0) break;
          if (iVar6 < 2) {
            if (local_40 != &local_49) {
              p_Var7 = (_String_const_iterator<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)FUN_006f75e0(auStack_3c);
              pcVar8 = std::
                       _String_const_iterator<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       ::operator*(p_Var7);
              for (pcVar8 = pcVar8 + (iVar4 - local_48); 0 < (int)pcVar8; pcVar8 = pcVar8 + -1) {
                _ungetc((int)pcVar8[local_48 + -1],*(FILE **)(local_44 + 0x4c));
              }
              uVar3 = (uint)local_49;
              FUN_0079ab00();
              goto LAB_006f7a2e;
            }
            if (local_14 < 0x10) {
              pppuVar10 = local_28;
LAB_006f79a9:
              pppuVar9 = (undefined4 ***)local_28[0];
              if (local_14 < 0x10) {
                pppuVar9 = local_28;
              }
              if (pppuVar10 < pppuVar9) goto LAB_006f79cd;
              pppuVar9 = (undefined4 ***)local_28[0];
              if (local_14 < 0x10) {
                pppuVar9 = local_28;
              }
              if ((undefined4 ***)((int)pppuVar9 + local_18) < pppuVar10) goto LAB_006f79cd;
            }
            else {
              pppuVar10 = (undefined4 ***)local_28[0];
              if ((undefined4 ***)local_28[0] != (undefined4 ***)0x0) goto LAB_006f79a9;
LAB_006f79cd:
              FUN_00984d5e();
            }
            if (&stack0x00000000 != (undefined1 *)0x2a) {
              pppuVar9 = (undefined4 ***)local_28[0];
              if (local_14 < 0x10) {
                pppuVar9 = local_28;
              }
              if ((undefined4 ***)((int)pppuVar9 + local_18) <= pppuVar10) {
                FUN_00984d5e();
              }
            }
            FUN_004134e0(0,local_48 - (int)pppuVar10);
          }
          else {
            if (iVar6 != 3) break;
            if (local_18 != 0) {
              _MaxCount = 1;
              p_Var7 = (_String_const_iterator<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)FUN_006f75e0(auStack_34);
              pcVar8 = std::
                       _String_const_iterator<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       ::operator*(p_Var7);
              _memcpy_s(&local_49,1,pcVar8,_MaxCount);
              uVar3 = (uint)local_49;
              FUN_0079ab00();
              goto LAB_006f7a2e;
            }
          }
          iVar4 = FID_conflict__getc(*(FILE **)(iVar2 + 0x4c));
        }
        FUN_0079ab00();
      }
    }
    uVar3 = 0xffffffff;
  }
  else {
    **(int **)(in_ECX + 0x30) = **(int **)(in_ECX + 0x30) + -1;
    pbVar1 = (byte *)**(int **)(in_ECX + 0x20);
    **(int **)(in_ECX + 0x20) = (int)(pbVar1 + 1);
    uVar3 = (uint)*pbVar1;
  }
LAB_006f7a2e:
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_006f7ab0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  undefined4 ****ppppuVar4;
  size_t sVar5;
  undefined4 uVar6;
  int *in_ECX;
  undefined4 ****ppppuVar7;
  size_t _Count;
  int *unaff_FS_OFFSET;
  int *local_34;
  int aiStack_30 [2];
  undefined4 ***pppuStack_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  int iStack_18;
  uint uStack_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c8e28;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_34;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((in_ECX[0xf] != 0) && (*(char *)((int)in_ECX + 0x41) != '\0')) {
    local_34 = in_ECX;
    iVar2 = (**(code **)(*in_ECX + 4))(0xffffffff,uVar1);
    if (iVar2 == -1) {
LAB_006f7d9f:
      uVar6 = 0;
      goto LAB_006f7dae;
    }
    uStack_14 = 0xf;
    pppuStack_28 = (undefined4 ****)0x0;
    uStack_24 = 0;
    iStack_18 = 8;
    uStack_20 = 0;
    uStack_4 = 0;
LAB_006f7b50:
    if (uStack_14 < 0x10) {
      ppppuVar7 = &pppuStack_28;
LAB_006f7b5f:
      ppppuVar4 = (undefined4 ****)pppuStack_28;
      if (uStack_14 < 0x10) {
        ppppuVar4 = &pppuStack_28;
      }
      if (ppppuVar7 < ppppuVar4) goto LAB_006f7b83;
      ppppuVar4 = (undefined4 ****)pppuStack_28;
      if (uStack_14 < 0x10) {
        ppppuVar4 = &pppuStack_28;
      }
      if ((undefined4 ****)((int)ppppuVar4 + iStack_18) < ppppuVar7) goto LAB_006f7b83;
    }
    else {
      ppppuVar7 = (undefined4 ****)pppuStack_28;
      if ((undefined4 ****)pppuStack_28 != (undefined4 ****)0x0) goto LAB_006f7b5f;
LAB_006f7b83:
      FUN_00984d5e();
    }
    if (&stack0x00000000 != (undefined1 *)0x2a) {
      ppppuVar4 = (undefined4 ****)pppuStack_28;
      if (uStack_14 < 0x10) {
        ppppuVar4 = &pppuStack_28;
      }
      if ((undefined4 ****)((int)ppppuVar4 + iStack_18) <= ppppuVar7) {
        FUN_00984d5e();
      }
    }
    iVar2 = iStack_18;
    if (uStack_14 < 0x10) {
      ppppuVar4 = &pppuStack_28;
LAB_006f7bce:
      ppppuVar3 = (undefined4 ****)pppuStack_28;
      if (uStack_14 < 0x10) {
        ppppuVar3 = &pppuStack_28;
      }
      if (ppppuVar4 < ppppuVar3) goto LAB_006f7bf6;
      ppppuVar3 = (undefined4 ****)pppuStack_28;
      if (uStack_14 < 0x10) {
        ppppuVar3 = &pppuStack_28;
      }
      in_ECX = local_34;
      if ((undefined4 ****)((int)ppppuVar3 + iStack_18) < ppppuVar4) goto LAB_006f7bf6;
    }
    else {
      ppppuVar4 = (undefined4 ****)pppuStack_28;
      if ((undefined4 ****)pppuStack_28 != (undefined4 ****)0x0) goto LAB_006f7bce;
LAB_006f7bf6:
      FUN_00984d5e();
    }
    if (&stack0x00000000 != (undefined1 *)0x2a) {
      ppppuVar3 = (undefined4 ****)pppuStack_28;
      if (uStack_14 < 0x10) {
        ppppuVar3 = &pppuStack_28;
      }
      if ((undefined4 ****)((int)ppppuVar3 + iStack_18) <= ppppuVar4) {
        FUN_00984d5e();
      }
    }
    iVar2 = (**(code **)(*(int *)in_ECX[0xf] + 0x18))
                      (in_ECX + 0x11,ppppuVar4,(int)ppppuVar7 + iVar2,aiStack_30);
    if (iVar2 == 0) {
      *(undefined1 *)((int)in_ECX + 0x41) = 0;
LAB_006f7c6d:
      if (uStack_14 < 0x10) {
        ppppuVar7 = &pppuStack_28;
LAB_006f7c84:
        ppppuVar4 = (undefined4 ****)pppuStack_28;
        if (uStack_14 < 0x10) {
          ppppuVar4 = &pppuStack_28;
        }
        if (ppppuVar7 < ppppuVar4) goto LAB_006f7ca8;
        ppppuVar4 = (undefined4 ****)pppuStack_28;
        if (uStack_14 < 0x10) {
          ppppuVar4 = &pppuStack_28;
        }
        if ((undefined4 ****)((int)ppppuVar4 + iStack_18) < ppppuVar7) goto LAB_006f7ca8;
      }
      else {
        ppppuVar7 = (undefined4 ****)pppuStack_28;
        if ((undefined4 ****)pppuStack_28 != (undefined4 ****)0x0) goto LAB_006f7c84;
LAB_006f7ca8:
        FUN_00984d5e();
      }
      if (&stack0x00000000 != (undefined1 *)0x2a) {
        ppppuVar4 = (undefined4 ****)pppuStack_28;
        if (uStack_14 < 0x10) {
          ppppuVar4 = &pppuStack_28;
        }
        if ((undefined4 ****)((int)ppppuVar4 + iStack_18) <= ppppuVar7) {
          FUN_00984d5e();
        }
      }
      _Count = aiStack_30[0] - (int)ppppuVar7;
      if (_Count != 0) {
        if (uStack_14 < 0x10) {
          ppppuVar7 = &pppuStack_28;
LAB_006f7cf7:
          ppppuVar4 = (undefined4 ****)pppuStack_28;
          if (uStack_14 < 0x10) {
            ppppuVar4 = &pppuStack_28;
          }
          if (ppppuVar7 < ppppuVar4) goto LAB_006f7d1b;
          ppppuVar4 = (undefined4 ****)pppuStack_28;
          if (uStack_14 < 0x10) {
            ppppuVar4 = &pppuStack_28;
          }
          if ((undefined4 ****)((int)ppppuVar4 + iStack_18) < ppppuVar7) goto LAB_006f7d1b;
        }
        else {
          ppppuVar7 = (undefined4 ****)pppuStack_28;
          if ((undefined4 ****)pppuStack_28 != (undefined4 ****)0x0) goto LAB_006f7cf7;
LAB_006f7d1b:
          FUN_00984d5e();
        }
        if (&stack0x00000000 != (undefined1 *)0x2a) {
          ppppuVar4 = (undefined4 ****)pppuStack_28;
          if (uStack_14 < 0x10) {
            ppppuVar4 = &pppuStack_28;
          }
          if ((undefined4 ****)((int)ppppuVar4 + iStack_18) <= ppppuVar7) {
            FUN_00984d5e();
          }
        }
        sVar5 = _fwrite(ppppuVar7,1,_Count,(FILE *)in_ECX[0x13]);
        if (_Count != sVar5) goto LAB_006f7d9a;
      }
      if (*(char *)((int)in_ECX + 0x41) == '\0') goto LAB_006f7da7;
      if (_Count == 0) {
        FUN_006edaa0(8,0);
      }
      goto LAB_006f7b50;
    }
    if (iVar2 == 1) goto LAB_006f7c6d;
    if (iVar2 != 3) {
LAB_006f7d9a:
      FUN_0079ab00();
      goto LAB_006f7d9f;
    }
LAB_006f7da7:
    FUN_0079ab00();
  }
  uVar6 = 1;
LAB_006f7dae:
  *unaff_FS_OFFSET = local_c;
  return uVar6;
}



void FUN_006f7dd0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c8e58;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00983c94(uVar1);
  *in_ECX = &PTR_FUN_00a7ce9c;
  in_ECX[8] = 0;
  in_ECX[9] = 0xf;
  local_4 = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  FUN_00414420(param_1,0,0xffffffff);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_006f7e40(int param_1)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 ****ppppuVar7;
  int iVar8;
  undefined4 ****ppppuVar9;
  size_t sVar10;
  int in_ECX;
  undefined4 ****ppppuVar11;
  size_t _Count;
  int *unaff_FS_OFFSET;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30 [2];
  undefined4 ***local_28;
  undefined4 local_24;
  undefined1 local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c8e88;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_3c;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == -1) {
    param_1 = 0;
  }
  else {
    uVar1 = **(uint **)(in_ECX + 0x24);
    cVar4 = (char)param_1;
    if ((uVar1 == 0) || (piVar2 = *(int **)(in_ECX + 0x34), *piVar2 + uVar1 <= uVar1)) {
      if (*(FILE **)(in_ECX + 0x4c) != (FILE *)0x0) {
        if (*(int *)(in_ECX + 0x3c) != 0) {
          local_3c = CONCAT31(local_3c._1_3_,cVar4);
          local_14 = 0xf;
          local_28 = (undefined4 ****)0x0;
          local_24 = 0;
          local_18 = 8;
          local_20 = 0;
          local_4 = 0;
          local_38 = in_ECX;
LAB_006f7f25:
          if (local_14 < 0x10) {
            ppppuVar11 = &local_28;
LAB_006f7f34:
            ppppuVar9 = (undefined4 ****)local_28;
            if (local_14 < 0x10) {
              ppppuVar9 = &local_28;
            }
            if (ppppuVar11 < ppppuVar9) goto LAB_006f7f54;
            ppppuVar9 = (undefined4 ****)local_28;
            if (local_14 < 0x10) {
              ppppuVar9 = &local_28;
            }
            if ((undefined4 ****)((int)ppppuVar9 + local_18) < ppppuVar11) goto LAB_006f7f54;
          }
          else {
            ppppuVar11 = (undefined4 ****)local_28;
            if ((undefined4 ****)local_28 != (undefined4 ****)0x0) goto LAB_006f7f34;
LAB_006f7f54:
            FUN_00984d5e(uVar5);
          }
          if (&stack0x00000000 != (undefined1 *)0x2a) {
            ppppuVar9 = (undefined4 ****)local_28;
            if (local_14 < 0x10) {
              ppppuVar9 = &local_28;
            }
            if ((undefined4 ****)((int)ppppuVar9 + local_18) <= ppppuVar11) {
              FUN_00984d5e(uVar5);
            }
          }
          uVar1 = local_18;
          if (local_14 < 0x10) {
            ppppuVar9 = &local_28;
LAB_006f7fa1:
            ppppuVar7 = (undefined4 ****)local_28;
            if (local_14 < 0x10) {
              ppppuVar7 = &local_28;
            }
            if (ppppuVar9 < ppppuVar7) goto LAB_006f7fc1;
            ppppuVar7 = (undefined4 ****)local_28;
            if (local_14 < 0x10) {
              ppppuVar7 = &local_28;
            }
            if ((undefined4 ****)((int)ppppuVar7 + local_18) < ppppuVar9) goto LAB_006f7fc1;
          }
          else {
            ppppuVar9 = (undefined4 ****)local_28;
            if ((undefined4 ****)local_28 != (undefined4 ****)0x0) goto LAB_006f7fa1;
LAB_006f7fc1:
            FUN_00984d5e();
          }
          if (&stack0x00000000 != (undefined1 *)0x2a) {
            ppppuVar7 = (undefined4 ****)local_28;
            if (local_14 < 0x10) {
              ppppuVar7 = &local_28;
            }
            if ((undefined4 ****)((int)ppppuVar7 + local_18) <= ppppuVar9) {
              FUN_00984d5e();
            }
          }
          iVar6 = local_38;
          iVar8 = (**(code **)(**(int **)(local_38 + 0x3c) + 0x14))
                            (local_38 + 0x44,&local_3c,(int)&local_3c + 1,local_30,ppppuVar9,
                             (int)ppppuVar11 + uVar1,&local_34);
          if (iVar8 < 0) goto LAB_006f81dd;
          if (iVar8 < 2) {
            if (local_14 < 0x10) {
              ppppuVar11 = &local_28;
LAB_006f8041:
              ppppuVar9 = (undefined4 ****)local_28;
              if (local_14 < 0x10) {
                ppppuVar9 = &local_28;
              }
              if (ppppuVar11 < ppppuVar9) goto LAB_006f8065;
              ppppuVar9 = (undefined4 ****)local_28;
              if (local_14 < 0x10) {
                ppppuVar9 = &local_28;
              }
              if ((undefined4 ****)((int)ppppuVar9 + local_18) < ppppuVar11) goto LAB_006f8065;
            }
            else {
              ppppuVar11 = (undefined4 ****)local_28;
              if ((undefined4 ****)local_28 != (undefined4 ****)0x0) goto LAB_006f8041;
LAB_006f8065:
              FUN_00984d5e();
            }
            if (&stack0x00000000 != (undefined1 *)0x2a) {
              ppppuVar9 = (undefined4 ****)local_28;
              if (local_14 < 0x10) {
                ppppuVar9 = &local_28;
              }
              if ((undefined4 ****)((int)ppppuVar9 + local_18) <= ppppuVar11) {
                FUN_00984d5e();
              }
            }
            _Count = local_34 - (int)ppppuVar11;
            if (_Count != 0) {
              if (local_14 < 0x10) {
                ppppuVar11 = &local_28;
LAB_006f80bc:
                ppppuVar9 = (undefined4 ****)local_28;
                if (local_14 < 0x10) {
                  ppppuVar9 = &local_28;
                }
                if (ppppuVar11 < ppppuVar9) goto LAB_006f80dc;
                ppppuVar9 = (undefined4 ****)local_28;
                if (local_14 < 0x10) {
                  ppppuVar9 = &local_28;
                }
                if ((undefined4 ****)((int)ppppuVar9 + local_18) < ppppuVar11) goto LAB_006f80dc;
              }
              else {
                ppppuVar11 = (undefined4 ****)local_28;
                if ((undefined4 ****)local_28 != (undefined4 ****)0x0) goto LAB_006f80bc;
LAB_006f80dc:
                FUN_00984d5e();
              }
              if (&stack0x00000000 != (undefined1 *)0x2a) {
                ppppuVar9 = (undefined4 ****)local_28;
                if (local_14 < 0x10) {
                  ppppuVar9 = &local_28;
                }
                if ((undefined4 ****)((int)ppppuVar9 + local_18) <= ppppuVar11) {
                  FUN_00984d5e();
                }
              }
              sVar10 = _fwrite(ppppuVar11,1,_Count,*(FILE **)(local_38 + 0x4c));
              if (_Count != sVar10) goto LAB_006f81dd;
            }
            *(undefined1 *)(local_38 + 0x41) = 1;
            if (local_30[0] == &local_3c) goto code_r0x006f8148;
            FUN_0079ab00();
          }
          else {
            if (iVar8 != 3) goto LAB_006f81dd;
            cVar4 = FUN_006f7440(local_3c,*(undefined4 *)(iVar6 + 0x4c));
            if (cVar4 == '\0') {
              FUN_0079ab00();
              param_1 = -1;
            }
            else {
              FUN_0079ab00();
            }
          }
          goto LAB_006f81e5;
        }
        iVar6 = FID_conflict__fputc((int)cVar4,*(FILE **)(in_ECX + 0x4c));
        if (iVar6 != -1) goto LAB_006f81e5;
      }
LAB_006f81e2:
      param_1 = -1;
    }
    else {
      *piVar2 = *piVar2 + -1;
      pcVar3 = (char *)**(int **)(in_ECX + 0x24);
      **(int **)(in_ECX + 0x24) = (int)(pcVar3 + 1);
      *pcVar3 = cVar4;
    }
  }
LAB_006f81e5:
  *unaff_FS_OFFSET = local_c;
  return param_1;
code_r0x006f8148:
  if (_Count == 0) {
    if (0x1f < local_18) {
LAB_006f81dd:
      FUN_0079ab00();
      goto LAB_006f81e2;
    }
    FUN_006edaa0(8,0);
  }
  goto LAB_006f7f25;
}



void FUN_006f8210(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = in_ECX + 0x40;
  if (((**(int **)(in_ECX + 0x20) == iVar1) && (param_3 == 1)) && (*(int *)(in_ECX + 0x3c) == 0)) {
    param_2 = param_2 + -1;
  }
  if ((((*(int *)(in_ECX + 0x4c) != 0) && (cVar3 = FUN_006f7ab0(), cVar3 != '\0')) &&
      (((param_2 == 0 && (param_3 == 1)) ||
       (iVar4 = _fseek(*(FILE **)(in_ECX + 0x4c),param_2,param_3), iVar4 == 0)))) &&
     (iVar4 = _fgetpos(*(FILE **)(in_ECX + 0x4c),(fpos_t *)&local_8), iVar4 == 0)) {
    if (**(int **)(in_ECX + 0x20) == iVar1) {
      **(int **)(in_ECX + 0x10) = iVar1;
      **(int **)(in_ECX + 0x20) = in_ECX + 0x41;
      **(int **)(in_ECX + 0x30) = (in_ECX - (in_ECX + 0x41)) + 0x41;
    }
    param_1[2] = local_8;
    uVar2 = *(undefined4 *)(in_ECX + 0x44);
    *param_1 = 0;
    param_1[3] = local_4;
    param_1[4] = uVar2;
    return;
  }
  *param_1 = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



void FUN_006f82f0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_4;
  local_4 = param_5;
  if (*(int *)(in_ECX + 0x4c) != 0) {
    cVar2 = FUN_006f7ab0();
    if (cVar2 != '\0') {
      iVar3 = _fsetpos(*(FILE **)(in_ECX + 0x4c),(fpos_t *)&local_8);
      if (iVar3 == 0) {
        if (param_2 != 0) {
          iVar3 = _fseek(*(FILE **)(in_ECX + 0x4c),param_2,1);
          if (iVar3 != 0) goto LAB_006f83b3;
        }
        iVar3 = _fgetpos(*(FILE **)(in_ECX + 0x4c),(fpos_t *)&local_8);
        if (iVar3 == 0) {
          *(undefined4 *)(in_ECX + 0x44) = param_6;
          if (**(int **)(in_ECX + 0x20) == in_ECX + 0x40) {
            **(int **)(in_ECX + 0x10) = in_ECX + 0x40;
            **(int **)(in_ECX + 0x20) = in_ECX + 0x41;
            **(int **)(in_ECX + 0x30) = (in_ECX - (in_ECX + 0x41)) + 0x41;
          }
          param_1[2] = local_8;
          uVar1 = *(undefined4 *)(in_ECX + 0x44);
          *param_1 = 0;
          param_1[3] = local_4;
          param_1[4] = uVar1;
          return;
        }
      }
    }
  }
LAB_006f83b3:
  *param_1 = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



int FUN_006f83e0(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  if (*(int *)(in_ECX + 0x4c) != 0) {
    cVar2 = FUN_006f7ab0();
    iVar4 = in_ECX;
    if (cVar2 == '\0') {
      iVar4 = 0;
    }
    iVar3 = _fclose(*(FILE **)(in_ECX + 0x4c));
    if (iVar3 == 0) goto LAB_006f840b;
  }
  iVar4 = 0;
LAB_006f840b:
  *(undefined1 *)(in_ECX + 0x48) = 0;
  *(undefined1 *)(in_ECX + 0x41) = 0;
  FUN_006f6f40();
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  uVar1 = DAT_00b3f16c;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x44) = uVar1;
  return iVar4;
}



/* WARNING: Removing unreachable block (ram,0x006f84b4) */

int FUN_006f8430(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c8eb8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00414420(param_2,0,0xffffffff);
  local_4 = 0;
  uVar1 = FUN_006f6af0(param_3,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00414420(uVar1,0,0xffffffff);
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_006f84e0(char *param_1)

{
  undefined3 uVar1;
  _Lockit *in_ECX;
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
  puStack_8 = &LAB_009c8f1c;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  std::_Lockit::_Lockit(in_ECX,0);
  *(undefined4 *)(in_ECX + 0x1c) = 0xf;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  in_ECX[8] = (_Lockit)0x0;
  *(undefined4 *)(in_ECX + 0x38) = 0xf;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  in_ECX[0x24] = (_Lockit)0x0;
  *(undefined4 *)(in_ECX + 0x54) = 0xf;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  in_ECX[0x40] = (_Lockit)0x0;
  *(undefined4 *)(in_ECX + 0x70) = 0xf;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  in_ECX[0x5c] = (_Lockit)0x0;
  local_4._1_3_ = 0;
  uVar1 = local_4._1_3_;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  if (param_1 == (char *)0x0) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_00414500("bad locale name",0xf);
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_006f7dd0(local_50);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00af17bc);
  }
  local_4._1_3_ = uVar1;
  std::_Locinfo::_Locinfo_ctor((_Locinfo *)in_ECX,param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006f85b0(exception *param_1)

{
  exception *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c8f48;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  std::exception::exception(in_ECX,param_1);
  *(undefined ***)in_ECX = &PTR_FUN_00a7ce9c;
  *(undefined4 *)(in_ECX + 0x24) = 0xf;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  local_4 = 0;
  in_ECX[0x10] = (exception)0x0;
  FUN_00414420(param_1 + 0xc,0,0xffffffff);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006f8630(int param_1,char param_2,undefined4 param_3)

{
  uint uVar1;
  _Ctypevec *p_Var2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_98 [4];
  _Ctypevec local_94 [8];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8f7b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)local_98;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff60;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[1] = param_3;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a7cec4;
  FUN_006f84e0(&DAT_00a61d9c);
  p_Var2 = __Getctype(local_94);
  in_ECX[2] = p_Var2->_Page;
  in_ECX[3] = p_Var2->_Table;
  in_ECX[4] = p_Var2->_Delfl;
  in_ECX[5] = p_Var2->_LocaleName;
  FUN_006f7670(uVar1);
  if (param_1 != 0) {
    if ((int)in_ECX[5] < 1) {
      if ((int)in_ECX[5] < 0) {
        FUN_00401f20(in_ECX[4]);
      }
    }
    else {
      _free((void *)in_ECX[4]);
    }
    in_ECX[4] = param_1;
    in_ECX[5] = -(uint)(param_2 != '\0');
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



byte * FUN_006f8750(byte *param_1,byte *param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_1 != param_2) {
    do {
      iVar1 = __Tolower((uint)*param_1,(_Ctypevec *)(in_ECX + 8));
      *param_1 = (byte)iVar1;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}



byte * FUN_006f87a0(byte *param_1,byte *param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_1 != param_2) {
    do {
      iVar1 = __Toupper((uint)*param_1,(_Ctypevec *)(in_ECX + 8));
      *param_1 = (byte)iVar1;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}



int FUN_006f8810(void *param_1,int param_2,void *param_3,uint param_4)

{
  if (param_4 < (uint)(param_2 - (int)param_1)) {
    FUN_00984d5e();
  }
  _memcpy_s(param_3,param_4,param_1,param_2 - (int)param_1);
  return param_2;
}



int FUN_006f8890(void *param_1,int param_2,undefined4 param_3,void *param_4,uint param_5)

{
  if (param_5 < (uint)(param_2 - (int)param_1)) {
    FUN_00984d5e();
  }
  _memcpy_s(param_4,param_5,param_1,param_2 - (int)param_1);
  return param_2;
}



void FUN_006f88d0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7cec4;
  if ((int)in_ECX[5] < 1) {
    if ((int)in_ECX[5] < 0) {
      FUN_00401f20(in_ECX[4]);
    }
  }
  else {
    _free((void *)in_ECX[4]);
  }
  *in_ECX = &PTR_LAB_00a7ce04;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_006f8920(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afadb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    iVar2 = FUN_00401f00(0x18,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_006f8630(0,0,0);
    }
    *param_1 = iVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 2;
}



void FUN_006f89a0(uint param_1,char param_2)

{
  int in_ECX;
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined **local_94 [10];
  undefined1 local_6c [28];
  undefined **local_50 [10];
  undefined1 local_28 [28];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c8fc8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *(uint *)(in_ECX + 8) = param_1 & 0x17;
  uVar1 = *(uint *)(in_ECX + 0xc) & param_1 & 0x17;
  if (uVar1 == 0) {
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (param_2 != '\0') {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,0);
  }
  if ((uVar1 & 4) != 0) {
    FUN_00414750("ios_base::badbit set");
    local_4 = 0;
    FUN_006f7dd0(local_6c);
    local_94[0] = &PTR_FUN_00a7cea8;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_94,&DAT_00af18a0);
  }
  if ((uVar1 & 2) != 0) {
    FUN_00414750("ios_base::failbit set");
    local_4 = 1;
    FUN_006f7dd0(local_6c);
    local_94[0] = &PTR_FUN_00a7cea8;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_94,&DAT_00af18a0);
  }
  FUN_00414750("ios_base::eofbit set");
  local_4 = 2;
  FUN_006f7dd0(local_28);
  local_50[0] = &PTR_FUN_00a7cea8;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_50,&DAT_00af18a0);
}



void FUN_006f8af0(void)

{
  undefined4 *puVar1;
  _Locimp *p_Var2;
  int iVar3;
  int in_ECX;
  _Lockit local_4 [4];
  
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0x201;
  *(undefined4 *)(in_ECX + 0x14) = 6;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  FUN_006f89a0(0,0);
  puVar1 = (undefined4 *)FUN_00401f00(4);
  if (puVar1 != (undefined4 *)0x0) {
    p_Var2 = std::locale::_Init();
    *puVar1 = p_Var2;
    iVar3 = FUN_0098083e();
    std::_Lockit::_Lockit(local_4,0);
    if (*(int *)(iVar3 + 4) != -1) {
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    }
    FUN_009807d1();
    *(undefined4 **)(in_ECX + 0x24) = puVar1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  return;
}



void FUN_006f8b70(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8ff8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7ce60;
  local_4 = 0;
  if (*(char *)(in_ECX + 0x12) != '\0') {
    FUN_006f83e0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_006f6fa0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006f8be0(byte param_1)

{
  FUN_006f8b70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



facet * FUN_006f8c00(int *param_1)

{
  facet *pfVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  facet *pfVar5;
  int *unaff_FS_OFFSET;
  facet *local_24;
  _Lockit local_20 [4];
  _Lockit local_1c [4];
  undefined1 local_18 [12];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9028;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  std::_Lockit::_Lockit(local_1c,0);
  pfVar1 = DAT_00b3f170;
  local_4 = 0;
  local_24 = DAT_00b3f170;
  if (DAT_00ba9b64 == 0) {
    std::_Lockit::_Lockit(local_20,0);
    if (DAT_00ba9b64 == 0) {
      DAT_00ba9b60 = DAT_00ba9b60 + 1;
      DAT_00ba9b64 = DAT_00ba9b60;
    }
    FUN_009807d1(uVar3);
  }
  uVar2 = DAT_00ba9b64;
  iVar4 = *param_1;
  if (DAT_00ba9b64 < *(uint *)(iVar4 + 0xc)) {
    pfVar5 = *(facet **)(*(int *)(iVar4 + 8) + DAT_00ba9b64 * 4);
    if (pfVar5 != (facet *)0x0) goto LAB_006f8d05;
  }
  else {
    pfVar5 = (facet *)0x0;
  }
  if (*(char *)(iVar4 + 0x14) == '\0') {
LAB_006f8cac:
    if (pfVar5 != (facet *)0x0) goto LAB_006f8d05;
  }
  else {
    iVar4 = FUN_0098083e();
    if (uVar2 < *(uint *)(iVar4 + 0xc)) {
      pfVar5 = *(facet **)(*(int *)(iVar4 + 8) + uVar2 * 4);
      goto LAB_006f8cac;
    }
  }
  pfVar5 = pfVar1;
  if (pfVar1 == (facet *)0x0) {
    iVar4 = FUN_006f8920(&local_24);
    pfVar5 = local_24;
    if (iVar4 == -1) {
      FUN_00983d6e("bad cast");
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_18,&DAT_00af1944);
    }
    DAT_00b3f170 = local_24;
    FUN_006f6d90();
    std::locale::facet::facet_Register(pfVar5);
  }
LAB_006f8d05:
  local_4 = 0xffffffff;
  FUN_009807d1(uVar3);
  *unaff_FS_OFFSET = local_c;
  return pfVar5;
}



/* WARNING: Removing unreachable block (ram,0x006f8dc9) */

int FUN_006f8d30(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c8eb8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00414420(param_2,0,0xffffffff);
  local_4 = 0;
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_006f6ca0(param_3,(int)pcVar2 - (int)(param_3 + 1));
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00414420(uVar3,0,0xffffffff);
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006f8df0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_88 [120];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c905b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)local_88;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff74;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[1] = param_1;
  local_4 = 0;
  *in_ECX = &PTR_LAB_00a7cf48;
  FUN_006f84e0(&DAT_00a61d9c);
  FUN_006f7670(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006f8f00(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  uint local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9098;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = FUN_006f6e60(&local_14);
  local_4 = 0;
  piVar4 = (int *)FUN_006f8c00(uVar3,uVar2);
  local_4 = 0xffffffff;
  if (local_14 != 0) {
    std::_Lockit::_Lockit((_Lockit *)&local_10,0);
    iVar1 = *(int *)(local_14 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)(local_14 + 4) = iVar1 + -1;
    }
    puVar5 = (undefined4 *)(~-(uint)(*(int *)(local_14 + 4) != 0) & local_14);
    FUN_009807d1();
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
  }
  (**(code **)(*piVar4 + 0x18))(param_1);
  *unaff_FS_OFFSET = local_10;
  return;
}



undefined4 FUN_006f8fc0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afadb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    iVar2 = FUN_00401f00(8,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_006f8df0(0);
    }
    *param_1 = iVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 2;
}



void FUN_006f9030(undefined4 param_1,char param_2)

{
  ios_base iVar1;
  ios_base *in_ECX;
  
  FUN_006f8af0();
  *(undefined4 *)(in_ECX + 0x28) = param_1;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  iVar1 = (ios_base)FUN_006f8f00(0x20);
  in_ECX[0x30] = iVar1;
  if (*(int *)(in_ECX + 0x28) == 0) {
    FUN_006f89a0(*(uint *)(in_ECX + 8) | 4,0);
  }
  if (param_2 != '\0') {
    std::ios_base::_Addstd(in_ECX);
    return;
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  return;
}



facet * FUN_006f9090(int *param_1)

{
  uint uVar1;
  facet *pfVar2;
  uint uVar3;
  int iVar4;
  facet *pfVar5;
  int *unaff_FS_OFFSET;
  facet *local_24;
  _Lockit local_20 [4];
  _Lockit local_1c [4];
  undefined1 local_18 [12];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9028;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  std::_Lockit::_Lockit(local_1c,0);
  pfVar2 = DAT_00b3f174;
  local_4 = 0;
  local_24 = DAT_00b3f174;
  if (DAT_00b32a88 == 0) {
    std::_Lockit::_Lockit(local_20,0);
    if (DAT_00b32a88 == 0) {
      DAT_00b32a88 = DAT_00ba9b60 + 1;
      DAT_00ba9b60 = DAT_00b32a88;
    }
    FUN_009807d1(uVar3);
  }
  uVar1 = DAT_00b32a88;
  iVar4 = *param_1;
  if (DAT_00b32a88 < *(uint *)(iVar4 + 0xc)) {
    pfVar5 = *(facet **)(*(int *)(iVar4 + 8) + DAT_00b32a88 * 4);
    if (pfVar5 != (facet *)0x0) goto LAB_006f9195;
  }
  else {
    pfVar5 = (facet *)0x0;
  }
  if (*(char *)(iVar4 + 0x14) == '\0') {
LAB_006f913c:
    if (pfVar5 != (facet *)0x0) goto LAB_006f9195;
  }
  else {
    iVar4 = FUN_0098083e();
    if (uVar1 < *(uint *)(iVar4 + 0xc)) {
      pfVar5 = *(facet **)(*(int *)(iVar4 + 8) + uVar1 * 4);
      goto LAB_006f913c;
    }
  }
  pfVar5 = pfVar2;
  if (pfVar2 == (facet *)0x0) {
    iVar4 = FUN_006f8fc0(&local_24);
    pfVar5 = local_24;
    if (iVar4 == -1) {
      FUN_00983d6e("bad cast");
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_18,&DAT_00af1944);
    }
    DAT_00b3f174 = local_24;
    FUN_006f6d90();
    std::locale::facet::facet_Register(pfVar5);
  }
LAB_006f9195:
  local_4 = 0xffffffff;
  FUN_009807d1(uVar3);
  *unaff_FS_OFFSET = local_c;
  return pfVar5;
}



void FUN_006f9200(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c90dc;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_3 != 0) {
    *in_ECX = (int)&DAT_00a7cf7c;
    in_ECX[1] = (int)&PTR_FUN_00a7ce1c;
    local_4 = 0;
  }
  *(undefined ***)((int)in_ECX + *(int *)(*in_ECX + 4)) = &PTR_LAB_00a7ce14;
  FUN_006f9030(param_1,param_2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006f9290(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  
  FUN_0043f350();
  fVar2 = ABS(param_2);
  fVar1 = ABS(param_3);
  fVar3 = ABS(param_4);
  if ((fVar1 < fVar2) || (fVar3 < fVar2)) {
    if ((fVar2 < fVar1) || (fVar1 < fVar3 == (fVar1 == fVar3))) {
      local_18 = -param_3;
      local_14 = param_2;
      fVar1 = 0.0;
    }
    else {
      local_18 = -param_4;
      local_14 = 0.0;
      fVar1 = param_2;
    }
  }
  else {
    local_18 = 0.0;
    local_14 = -param_4;
    fVar1 = param_3;
  }
  FUN_0043f350();
  fVar2 = param_4 * local_14 - param_3 * fVar1;
  fVar3 = param_2 * fVar1 - local_18 * param_4;
  fVar1 = local_18 * param_3 - param_2 * local_14;
  FUN_0043f350();
  FUN_0043f350();
  *param_1 = param_4 * fVar3 - param_3 * fVar1;
  param_1[1] = param_2 * fVar1 - fVar2 * param_4;
  param_1[2] = fVar2 * param_3 - param_2 * fVar3;
  param_1[3] = fVar2;
  param_1[4] = fVar3;
  param_1[5] = fVar1;
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = param_4;
  return;
}



int FUN_006f94a0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = FUN_00700010(&DAT_00b3cac0);
  if ((iVar1 != 0) && (iVar1 = (**(code **)(**(int **)(iVar1 + 0x7c) + 0x4c))(param_2), iVar1 != 0))
  {
    return iVar1;
  }
  iVar1 = (**(code **)(*param_1 + 0x58))(param_2);
  return iVar1;
}



void FUN_006f94e0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 != (int *)0x0) {
    *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xffef | 6;
    iVar1 = (**(code **)(*param_1 + 8))();
    if (iVar1 != 0) {
      uVar3 = 0;
      if (*(short *)(iVar1 + 0xb6) != 0) {
        if (*(short *)(iVar1 + 0xb6) != 0) goto LAB_006f951c;
        uVar2 = 0;
        while( true ) {
          FUN_006f94e0(uVar2);
          uVar3 = uVar3 + 1;
          if (*(ushort *)(iVar1 + 0xb6) <= uVar3) break;
LAB_006f951c:
          uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xb0) + uVar3 * 4);
        }
      }
    }
  }
  return;
}



undefined4 FUN_006f9540(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  
  if (param_1 != (int *)0x0) {
    for (puVar2 = (undefined4 *)(**(code **)(*param_1 + 4))(); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[1]) {
      if (puVar2 == &DAT_00b3f95c) {
        bVar1 = 1;
        goto LAB_006f9570;
      }
    }
    bVar1 = 0;
LAB_006f9570:
    if ((-(uint)bVar1 & (uint)param_1) != 0) {
      return *(undefined4 *)((-(uint)bVar1 & (uint)param_1) + 0x38);
    }
  }
  return 0;
}



void FUN_006f9590(byte param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  pvVar1 = (void *)in_ECX[1];
  *in_ECX = &PTR_FUN_00a7cf88;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f95e0(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  
  if ((_DAT_00b3f388 & 1) == 0) {
    _DAT_00b3f388 = _DAT_00b3f388 | 1;
    DAT_00b3f384 = 0;
    _atexit(FUN_00a268d0);
  }
  if (param_1 < *(ushort *)(in_ECX + 10)) {
    if (*param_2 == DAT_00b3f384) {
      if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) != DAT_00b3f384) {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) == DAT_00b3f384) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  else {
    *(short *)(in_ECX + 10) = (short)param_1 + 1;
    if (*param_2 != DAT_00b3f384) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  iVar1 = *(int *)(in_ECX + 4);
  puVar2 = *(undefined4 **)(iVar1 + param_1 * 4);
  if (puVar2 != (undefined4 *)*param_2) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    iVar3 = *param_2;
    *(int *)(iVar1 + param_1 * 4) = iVar3;
    if (iVar3 != 0) {
      InterlockedIncrement((LONG *)(iVar3 + 4));
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9710(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9ba8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f400);
  _DAT_00b3f478 = GetCurrentThreadId();
  puVar1 = param_1;
  _DAT_00b3f47c = _DAT_00b3f47c + 1;
  if (param_1 != (undefined4 *)0x0) {
    InterlockedIncrement(param_1 + 1);
  }
  uVar3 = (uint)DAT_00b252f2;
  local_4 = 0;
  if (DAT_00b252f0 <= uVar3) {
    FUN_006c4510(DAT_00b252f6 + uVar3);
  }
  FUN_006f95e0(uVar3,&param_1);
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if (LVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  _DAT_00b3f47c = _DAT_00b3f47c + -1;
  if (_DAT_00b3f47c == 0) {
    _DAT_00b3f478 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f400);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006f9800(undefined4 param_1)

{
  uint uVar1;
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
  FUN_007005d0(uVar1);
  local_4 = 0;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a7cf94;
  FUN_006fdf10(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006f9870(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cfdd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7cf94;
  local_4 = 0;
  FUN_006fdf10(0);
  local_4 = 0xffffffff;
  FUN_0055ace0(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006f98d0(byte param_1)

{
  FUN_006f9870();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined1 FUN_006f9980(char *param_1,undefined4 *param_2)

{
  char *_Dst;
  undefined1 uVar1;
  int in_ECX;
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)thunk_FUN_00748110(param_1,0,0x2800);
  }
  uVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    _Dst = (char *)(in_ECX + 0xe0);
    _strcpy_s(_Dst,0x104,param_1);
    FUN_0060d0a0(_Dst);
    FUN_00747930(_Dst);
    uVar1 = FUN_007120f0(param_2);
    (**(code **)*param_2)(1);
  }
  return uVar1;
}



void FUN_006f9a40(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cfdd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar1);
  *in_ECX = &PTR_FUN_00a7d084;
  *(undefined2 *)(in_ECX + 4) = 0;
  *(undefined2 *)((int)in_ECX + 0x12) = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  in_ECX[3] = 0;
  in_ECX[2] = &PTR__scalar_deleting_destructor__00a686c4;
  *(undefined2 *)((int)in_ECX + 0x16) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006f9ab0(void)

{
  ushort uVar1;
  undefined4 *in_ECX;
  uint uVar2;
  
  *in_ECX = &PTR_FUN_00a7d084;
  uVar1 = 0;
  if (*(short *)((int)in_ECX + 0x12) != 0) {
    do {
      uVar2 = (uint)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(in_ECX[3] + uVar2 * 4) = 0;
    } while (uVar1 < *(ushort *)((int)in_ECX + 0x12));
  }
  *(undefined2 *)((int)in_ECX + 0x12) = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  in_ECX[2] = &PTR__scalar_deleting_destructor__00a686c4;
  FUN_00401f20(in_ECX[3]);
  FUN_0055ace0();
  return;
}



void FUN_006f9b00(byte param_1)

{
  FUN_006f9ab0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined1 FUN_006f9b20(void)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *in_ECX;
  int iStack_4;
  
  if (in_ECX[0x122] == 0) {
    uVar7 = FUN_00714390();
    return uVar7;
  }
  cVar6 = (**(code **)(*in_ECX + 0x34))();
  if (cVar6 == '\0') {
    return 0;
  }
  in_ECX[0x9c] = 0;
  in_ECX[0x9b] = 0;
  in_ECX[0x9a] = 0;
  FUN_00712930();
  uVar1 = in_ECX[0x36];
  uVar8 = FUN_00712290("5.0.0.1");
  if ((uVar1 < uVar8) || (cVar6 = FUN_00713ff0(), cVar6 != '\0')) {
    uVar2 = in_ECX[0x36];
    uVar9 = FUN_00712290("5.0.0.6");
    if (uVar9 <= uVar2) {
      FUN_00713030();
    }
    uVar2 = in_ECX[0x7d];
    uVar9 = in_ECX[0x9a];
    while (uVar9 < uVar2) {
      if (in_ECX[0x98] == 2) {
        return 0;
      }
      if (uVar1 < uVar8) {
        cVar6 = (**(code **)(*in_ECX + 0x50))();
        if (cVar6 == '\0') {
          return 0;
        }
      }
      else {
        (**(code **)(**(int **)(in_ECX[0x7c] + in_ECX[0x9a] * 4) + 0x1c))();
      }
      in_ECX[0x9a] = in_ECX[0x9a] + 1;
      uVar9 = in_ECX[0x9a];
    }
    (**(code **)(*in_ECX + 0x48))();
    uVar1 = in_ECX[0x9b];
    while (uVar1 < uVar2) {
      if (in_ECX[0x98] == 2) {
        return 0;
      }
      piVar3 = *(int **)(in_ECX[0x7c] + in_ECX[0x9b] * 4);
      if (piVar3 == (int *)0x0) {
LAB_006f9c92:
        (**(code **)(*piVar3 + 0x20))();
      }
      else {
        for (puVar10 = (undefined4 *)(**(code **)(*piVar3 + 4))(); puVar10 != (undefined4 *)0x0;
            puVar10 = (undefined4 *)puVar10[1]) {
          if (puVar10 == &DAT_00b3f584) {
            bVar5 = 1;
            goto LAB_006f9c64;
          }
        }
        bVar5 = 0;
LAB_006f9c64:
        if ((-(uint)bVar5 & (uint)piVar3) == 0) goto LAB_006f9c92;
        iVar4 = *(int *)((-(uint)bVar5 & (uint)piVar3) + 8);
        iStack_4 = 0;
        if (((in_ECX[0x122] == 0) || (iVar4 == 0)) || (FUN_0055e000(iVar4,&iStack_4), iStack_4 == 0)
           ) goto LAB_006f9c92;
      }
      in_ECX[0x9b] = in_ECX[0x9b] + 1;
      uVar1 = in_ECX[0x9b];
    }
    uVar1 = in_ECX[0x9c];
    while( true ) {
      if (uVar2 <= uVar1) {
        FUN_007126a0();
        FUN_007135c0();
        return 1;
      }
      if (in_ECX[0x98] == 2) break;
      piVar3 = *(int **)(in_ECX[0x7c] + in_ECX[0x9c] * 4);
      if (piVar3 == (int *)0x0) {
LAB_006f9d2e:
        (**(code **)(*piVar3 + 0x3c))();
      }
      else {
        for (puVar10 = (undefined4 *)(**(code **)(*piVar3 + 4))(); puVar10 != (undefined4 *)0x0;
            puVar10 = (undefined4 *)puVar10[1]) {
          if (puVar10 == &DAT_00b3f584) {
            bVar5 = 1;
            goto LAB_006f9d00;
          }
        }
        bVar5 = 0;
LAB_006f9d00:
        if ((-(uint)bVar5 & (uint)piVar3) == 0) goto LAB_006f9d2e;
        iVar4 = *(int *)((-(uint)bVar5 & (uint)piVar3) + 8);
        iStack_4 = 0;
        if (((in_ECX[0x122] == 0) || (iVar4 == 0)) || (FUN_0055e000(iVar4,&iStack_4), iStack_4 == 0)
           ) goto LAB_006f9d2e;
      }
      in_ECX[0x9c] = in_ECX[0x9c] + 1;
      uVar1 = in_ECX[0x9c];
    }
  }
  return 0;
}



undefined1 FUN_006f9d90(void)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  LONG LVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x488) != 0) {
    iVar4 = FUN_00401f00(0x18,uVar3);
    local_4 = 0;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_006f9a40();
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar5);
    FUN_00713e50(*(undefined4 *)(in_ECX + 0x48c));
  }
  uVar2 = FUN_00714b20();
  puVar1 = *(undefined4 **)(in_ECX + 0x48c);
  if (puVar1 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar1 + 1);
    if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x48c) = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}



void FUN_006f9e60(void)

{
  int in_ECX;
  
  FUN_00712930();
  *(undefined4 *)(in_ECX + 0x22c) = 0;
  *(undefined4 *)(in_ECX + 0x23c) = 0;
  *(undefined4 *)(in_ECX + 0x230) = 0;
  *(undefined4 *)(in_ECX + 0x240) = 0;
  FUN_007135c0();
  return;
}



undefined4 FUN_006f9e90(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  LONG LVar6;
  undefined4 *in_ECX;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c911b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (in_ECX[0x122] == 0) {
    uVar5 = FUN_00713f00(param_1);
    goto LAB_006fa022;
  }
  local_10 = in_ECX;
  cVar2 = FUN_0055e000(param_1,&param_1);
  if (cVar2 != '\0') {
    uVar5 = 0;
    goto LAB_006fa022;
  }
  param_1 = (undefined4 *)0x0;
  local_4 = 0;
  iVar4 = FUN_00560920(&DAT_00b3f584,puVar1,uVar3);
  if (iVar4 == 0) {
LAB_006f9f69:
    FUN_006fe260(in_ECX,puVar1);
    puVar7 = puVar1;
  }
  else {
    local_10 = (undefined4 *)0x0;
    if ((in_ECX[0x122] == 0) || (*(int *)(iVar4 + 8) == 0)) goto LAB_006f9f69;
    FUN_0055e000(*(int *)(iVar4 + 8),&local_10);
    if (local_10 == (undefined4 *)0x0) goto LAB_006f9f69;
    local_10 = (undefined4 *)FUN_00401f00(0xc);
    local_4._0_1_ = 1;
    if (local_10 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_006f9800(*(undefined4 *)(iVar4 + 8));
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0075fa90(uVar5);
    puVar7 = param_1;
  }
  FUN_00452570(puVar1,in_ECX[0x7e]);
  local_10 = puVar7;
  if (puVar7 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar7 + 1);
  }
  uVar3 = in_ECX[0x7e];
  local_4._0_1_ = 2;
  if ((uint)in_ECX[0x7d] <= uVar3) {
    FUN_008bca30(in_ECX[0x80] + uVar3);
  }
  FUN_008bcd40(uVar3,&local_10);
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar7 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar7 + 1);
    if (LVar6 == 0) {
      (**(code **)*puVar7)(1);
    }
  }
  puVar1 = param_1;
  local_4 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(param_1 + 1);
    if (LVar6 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  uVar5 = 1;
LAB_006fa022:
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}



int FUN_006fa040(char *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar2 = (uint)param_2;
    do {
      iVar1 = _tolower((int)*param_1);
      iVar3 = iVar3 * 0x1003f + iVar1;
      param_1 = param_1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}



void FUN_006fa080(char *param_1,char *param_2,char *param_3)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  
  bVar6 = 0;
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  param_3[2] = (char)pcVar3 - ((char)param_1 + '\x01');
  iVar4 = _tolower((int)*param_1);
  param_3[3] = (char)iVar4;
  iVar4 = _tolower((int)param_1[(byte)param_3[2] - 1]);
  *param_3 = (char)iVar4;
  if ((byte)param_3[2] < 3) {
    cVar2 = '\0';
  }
  else {
    iVar4 = _tolower((int)param_1[(byte)param_3[2] - 2]);
    cVar2 = (char)iVar4;
  }
  param_3[1] = cVar2;
  bVar1 = param_3[2];
  param_3[4] = '\0';
  param_3[5] = '\0';
  param_3[6] = '\0';
  param_3[7] = '\0';
  if (3 < bVar1) {
    uVar5 = FUN_006fa040(param_1 + 1,bVar1 - 3);
    *(undefined4 *)(param_3 + 4) = uVar5;
  }
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    iVar4 = FUN_006fa040(param_2,(char)pcVar3 - ((char)param_2 + '\x01'));
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + iVar4;
    pcVar3 = &DAT_00b25374;
    uVar7 = 0;
    while( true ) {
      iVar4 = __stricmp(pcVar3,param_2);
      if (iVar4 == 0) break;
      uVar7 = uVar7 + 10;
      bVar6 = bVar6 + 1;
      pcVar3 = pcVar3 + 10;
      if (0x31 < uVar7) {
        return;
      }
    }
    param_3[3] = param_3[3] + (bVar6 & 0xfc) * ' ';
    *param_3 = *param_3 + (bVar6 & 0xfe) * '@';
    param_3[1] = param_3[1] + bVar6 * -0x80;
  }
  return;
}



void FUN_006fa180(void)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = 0;
  *in_ECX = 0x415342;
  in_ECX[1] = 0x67;
  in_ECX[2] = 0x24;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006fa1b0(char *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char local_22c [16];
  char local_21c [15];
  char local_20d;
  undefined2 local_20c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_22c;
  local_22c[0] = '\0';
  local_108[0] = '\0';
  local_20c = local_20c & 0xff00;
  local_21c[0] = '\0';
  __splitpath(param_1,local_22c,local_108,(char *)&local_20c,local_21c);
  FUN_006fa080(&local_20c,local_21c,param_3);
  iVar2 = 0;
  do {
    pcVar3 = local_22c + iVar2;
    *(char *)((int)&local_20c + iVar2) = *pcVar3;
    iVar2 = iVar2 + 1;
  } while (*pcVar3 != '\0');
  pcVar3 = local_108;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = (int)pcVar3 - (int)local_108;
  pcVar3 = &local_20d;
  do {
    pcVar6 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = local_108;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar3 = pcVar3 + 1;
  }
  if ((char)local_20c == '\0') {
    local_20c = 0x2e;
  }
  pcVar3 = (char *)&local_20c;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3[(int)(&local_20d + -((int)&local_20c + 1))] == '\\') {
    pcVar3[(int)(&local_20d + -((int)&local_20c + 1))] = '\0';
  }
  FUN_006fa080(&local_20c,0,param_2);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006fa2d0(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char local_22c [16];
  char local_21c [15];
  char local_20d;
  undefined2 local_20c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_22c;
  pcVar6 = (char *)0x0;
  if (param_2 != 2) {
    local_22c[0] = '\0';
    local_108[0] = '\0';
    local_20c = local_20c & 0xff00;
    local_21c[0] = '\0';
    __splitpath(param_1,local_22c,local_108,(char *)&local_20c,local_21c);
    if (param_2 == 0) {
      pcVar6 = local_21c;
    }
    else {
      iVar2 = 0;
      do {
        pcVar3 = local_22c + iVar2;
        *(char *)((int)&local_20c + iVar2) = *pcVar3;
        iVar2 = iVar2 + 1;
      } while (*pcVar3 != '\0');
      pcVar3 = local_108;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      uVar4 = (int)pcVar3 - (int)local_108;
      pcVar3 = &local_20d;
      do {
        pcVar7 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar7 != '\0');
      pcVar7 = local_108;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar3 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar3 = pcVar3 + 1;
      }
      if ((char)local_20c == '\0') {
        local_20c = 0x2e;
      }
      pcVar3 = (char *)&local_20c;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (pcVar3[(int)(&local_20d + -((int)&local_20c + 1))] == '\\') {
        pcVar3[(int)(&local_20d + -((int)&local_20c + 1))] = '\0';
      }
    }
    param_1 = (char *)&local_20c;
  }
  FUN_006fa080(param_1,pcVar6);
  return;
}



void FUN_006fa3f0(char param_1)

{
  if ((DAT_00b3f480 & 1) == 0) {
    _toupper((int)param_1);
    return;
  }
  return;
}



uint FUN_006fa410(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  bool bVar8;
  
  cVar4 = *param_2;
  pcVar6 = param_2 + 1;
  if (cVar4 == '\0') {
    return (uint)(*param_1 == '\0');
  }
  if (cVar4 == '?') {
    if (param_1 != (char *)0x0) {
      uVar2 = FUN_006fa410(param_1 + 1,pcVar6);
      return uVar2;
    }
    return 0;
  }
  if (cVar4 == '*') {
    if (*pcVar6 == '\0') {
      return 1;
    }
    cVar4 = *param_1;
    while( true ) {
      if (cVar4 == '\0') {
        return 2;
      }
      uVar2 = FUN_006fa410(param_1,pcVar6);
      if (uVar2 != 0) break;
      param_1 = param_1 + 1;
      cVar4 = *param_1;
    }
    return uVar2;
  }
  if (cVar4 == '[') {
    if (*param_1 != '\0') {
      bVar7 = *pcVar6 == '^';
      if (bVar7) {
        pcVar6 = param_2 + 2;
      }
      bVar8 = false;
      pcVar5 = pcVar6;
      cVar4 = *pcVar6;
      while (cVar4 != '\0') {
        if (bVar8) {
          bVar8 = false;
        }
        else if (*pcVar5 == '\\') {
          bVar8 = true;
        }
        else if (*pcVar5 == ']') goto LAB_006fa4ed;
        pcVar5 = pcVar5 + 1;
        cVar4 = *pcVar5;
      }
      if (*pcVar5 == ']') {
LAB_006fa4ed:
        cVar4 = '\0';
        bVar8 = *pcVar6 == '-';
        for (; pcVar6 < pcVar5; pcVar6 = pcVar6 + 1) {
          if (bVar8) {
LAB_006fa517:
            cVar1 = *param_1;
            if ((DAT_00b3f480 & 1) == 0) {
              iVar3 = _toupper((int)cVar1);
              cVar1 = (char)iVar3;
            }
            if (pcVar6[1] != '-') {
              if (cVar4 == '\0') {
                cVar4 = *pcVar6;
              }
              if (cVar4 <= *pcVar6) {
                do {
                  uVar2 = (uint)cVar4;
                  if ((DAT_00b3f480 & 1) == 0) {
                    uVar2 = _toupper(uVar2);
                  }
                  if ((uVar2 & 0xff) == (int)cVar1) {
                    if (bVar7) {
                      return 0;
                    }
                    uVar2 = FUN_006fa410(param_1 + 1,pcVar5 + 1);
                    return uVar2;
                  }
                  cVar4 = cVar4 + '\x01';
                } while (cVar4 <= *pcVar6);
              }
            }
            bVar8 = false;
            cVar4 = '\0';
          }
          else if (*pcVar6 == '\\') {
            bVar8 = true;
          }
          else {
            if (*pcVar6 != '-') goto LAB_006fa517;
            cVar4 = pcVar6[-1];
            bVar8 = false;
          }
        }
        if (bVar7) {
          uVar2 = FUN_006fa410(param_1 + 1,pcVar5 + 1);
          return uVar2;
        }
      }
      return 0;
    }
  }
  else {
    if (cVar4 == '\\') {
      cVar4 = *pcVar6;
      pcVar6 = param_2 + 2;
      if (cVar4 == '\0') {
        return 0;
      }
    }
    cVar1 = FUN_006fa3f0(*param_1);
    cVar4 = FUN_006fa3f0(cVar4);
    if (cVar4 == cVar1) {
      uVar2 = FUN_006fa410(param_1 + 1,pcVar6);
      return uVar2;
    }
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006fa600(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char local_308 [4];
  char local_304 [256];
  char local_204 [256];
  char local_104 [256];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_308;
  if ((DAT_00b3f480 & 8) != 0) {
    cVar2 = *param_2;
    while ((cVar2 != '\0' && (cVar2 == ' '))) {
      pcVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      cVar2 = *pcVar1;
    }
  }
  if ((DAT_00b3f480 & 6) == 0) {
    iVar3 = (int)param_1 - (int)param_2;
    do {
      cVar2 = *param_2;
      param_2[iVar3] = cVar2;
      param_2 = param_2 + 1;
    } while (cVar2 != '\0');
    return;
  }
  __splitpath(param_2,local_308,local_204,local_104,local_304);
  if ((DAT_00b3f480 & 2) == 0) {
    local_308[0] = '\0';
    local_204[0] = '\0';
  }
  if ((DAT_00b3f480 & 4) == 0) {
    local_304[0] = '\0';
  }
  __makepath(param_1,local_308,local_204,local_104,local_304);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_006fa6f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_20c [260];
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_20c;
  FUN_006fa600(local_108,param_1);
  FUN_006fa600(local_20c,param_2);
  iVar1 = FUN_006fa410(local_108,local_20c);
  return iVar1 == 1;
}



void FUN_006fa7f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7d0f4;
  FUN_00721410();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006fa820(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9148;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00721350(uVar1);
  in_ECX[3] = 0;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a7d14c;
  FUN_00721440(&DAT_00a7d0ec);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006fa890(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9148;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00721350(uVar1);
  in_ECX[3] = param_1;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a7d14c;
  FUN_00721440(&DAT_00a7d0ec);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_006fa900(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_006fa820();
  }
  local_4 = 0xffffffff;
  FUN_00721440(0);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



undefined4 FUN_006fa970(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = FUN_006ff9c0(&DAT_00a7d0ec);
    uVar1 = FUN_00560920(&DAT_00b3f484,uVar1);
  }
  return uVar1;
}



undefined4 * FUN_006fac00(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00752bf0();
    puVar2[6] = 0x3f800000;
    *puVar2 = &PTR_FUN_00a7d1dc;
    puVar2[3] = 4000;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006faca0(float param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [36];
  
  local_3c = 0;
  local_38 = param_1 * 100.0;
  local_34 = 0;
  FUN_0070fdd0(param_2);
  puVar1 = (undefined4 *)FUN_00710250(local_30,&local_3c,local_24);
  _DAT_00b3f494 = *puVar1;
  _DAT_00b3f498 = puVar1[1];
  _DAT_00b3f49c = puVar1[2];
  return;
}



undefined4 * FUN_006fad00(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
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
  puVar2 = (undefined4 *)FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00752bf0();
    puVar2[6] = 0x3f800000;
    *puVar2 = &PTR_FUN_00a7d1dc;
    puVar2[3] = 4000;
  }
  local_4 = 0xffffffff;
  FUN_00752c40(puVar2,param_1);
  puVar2[6] = *(undefined4 *)(in_ECX + 0x18);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 FUN_006fae10(float *param_1)

{
  float *in_ECX;
  
  if ((((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) &&
     ((*(char *)((int)in_ECX + 0xe) == *(char *)((int)param_1 + 0xe) &&
      (*(short *)(in_ECX + 3) == *(short *)(param_1 + 3))))) {
    return 1;
  }
  return 0;
}



undefined4 FUN_006fae60(float *param_1)

{
  float *in_ECX;
  
  if ((((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) &&
     ((*(char *)((int)in_ECX + 0xe) == *(char *)((int)param_1 + 0xe) &&
      (*(short *)(in_ECX + 3) == *(short *)(param_1 + 3))))) {
    return 0;
  }
  return 1;
}



void thunk_FUN_00721550(void)

{
  FUN_00721550();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006faee0(float param_1)

{
  int in_ECX;
  undefined2 local_4;
  
  for (; param_1 < 0.0; param_1 = _DAT_00b3f9a0 + param_1) {
  }
  if (_DAT_00b3f9a0 < param_1 != (_DAT_00b3f9a0 == param_1)) {
    do {
      param_1 = param_1 - _DAT_00b3f9a0;
    } while (_DAT_00b3f9a0 <= param_1);
  }
  local_4 = (undefined2)(int)ROUND(param_1 * 1000.0);
  *(undefined2 *)(in_ECX + 0xc) = local_4;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fafa0(uint param_1,undefined4 *param_2)

{
  char cVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  if ((_DAT_00b3f4b0 & 1) == 0) {
    _DAT_00b3f4b0 = _DAT_00b3f4b0 | 1;
    _DAT_00b3f4ac = 0;
    DAT_00b3f4ae = 0;
  }
  if (param_1 < *(ushort *)(in_ECX + 10)) {
    cVar1 = FUN_006fae60(&DAT_00b3f4a0);
    if (cVar1 == '\0') {
      cVar1 = FUN_006fae60(&DAT_00b3f4a0);
      if (cVar1 != '\0') {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
      }
    }
    else {
      cVar1 = FUN_006fae10(&DAT_00b3f4a0);
      if (cVar1 != '\0') {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
      }
    }
  }
  else {
    *(short *)(in_ECX + 10) = (short)param_1 + 1;
    cVar1 = FUN_006fae60(&DAT_00b3f4a0);
    if (cVar1 != '\0') {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  puVar2 = (undefined4 *)(param_1 * 0x10 + *(int *)(in_ECX + 4));
  *puVar2 = *param_2;
  puVar2[1] = param_2[1];
  puVar2[2] = param_2[2];
  puVar2[3] = param_2[3];
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a7d240;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_006fb080(void)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0xc) = 0;
  *(undefined1 *)(in_ECX + 0xe) = 0xff;
  return;
}



undefined4 FUN_006fb0a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = FUN_006ff9c0(&PTR_LAB_00a7d238);
    uVar1 = FUN_00560920(&DAT_00b3f4b4,uVar1);
  }
  return uVar1;
}



void FUN_006fb0d0(uint param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int in_ECX;
  uint uVar7;
  ushort uVar8;
  int *unaff_FS_OFFSET;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined1 local_1c [12];
  undefined2 local_10;
  undefined1 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c95eb;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != *(ushort *)(in_ECX + 8)) {
    uVar8 = (ushort)param_1;
    if (param_1 < *(ushort *)(in_ECX + 10)) {
      uVar7 = param_1 & 0xffff;
      if (uVar8 < *(ushort *)(in_ECX + 10)) {
        do {
          puVar6 = (undefined4 *)((uVar7 & 0xffff) * 0x10 + *(int *)(in_ECX + 4));
          local_10 = 0;
          local_e = 0;
          cVar2 = FUN_006fae60(local_1c);
          if (cVar2 != '\0') {
            *puVar6 = local_2c;
            puVar6[1] = local_28;
            local_20 = local_20 & 0xff000000;
            puVar6[2] = local_24;
            puVar6[3] = local_20;
            *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
          }
          uVar7 = uVar7 + 1;
        } while ((ushort)uVar7 < *(ushort *)(in_ECX + 10));
      }
      *(ushort *)(in_ECX + 10) = uVar8;
    }
    iVar1 = *(int *)(in_ECX + 4);
    *(ushort *)(in_ECX + 8) = uVar8;
    if (param_1 == 0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      pvVar4 = (void *)FUN_00401f00((param_1 & 0xffff) * 0x10,uVar3);
      local_4 = 0;
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        _vector_constructor_iterator_(pvVar4,0x10,param_1 & 0xffff,FUN_006fb080);
      }
      *(void **)(in_ECX + 4) = pvVar4;
      uVar8 = 0;
      if (*(short *)(in_ECX + 10) != 0) {
        do {
          puVar6 = (undefined4 *)((uint)uVar8 * 0x10 + iVar1);
          puVar5 = (undefined4 *)(*(int *)(in_ECX + 4) + (uint)uVar8 * 0x10);
          *puVar5 = *puVar6;
          puVar5[1] = puVar6[1];
          puVar5[2] = puVar6[2];
          uVar8 = uVar8 + 1;
          puVar5[3] = puVar6[3];
        } while (uVar8 < *(ushort *)(in_ECX + 10));
      }
      uVar8 = *(ushort *)(in_ECX + 10);
      if (uVar8 < *(ushort *)(in_ECX + 8)) {
        do {
          puVar6 = (undefined4 *)((uint)uVar8 * 0x10 + *(int *)(in_ECX + 4));
          *puVar6 = local_2c;
          puVar6[1] = local_28;
          local_20 = local_20 & 0xff000000;
          puVar6[2] = local_24;
          uVar8 = uVar8 + 1;
          puVar6[3] = local_20;
        } while (uVar8 < *(ushort *)(in_ECX + 8));
      }
    }
    FUN_00401f20(iVar1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006fb280(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9183;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00721350(uVar1);
  *in_ECX = &PTR_FUN_00a7d24c;
  in_ECX[3] = &PTR__scalar_deleting_destructor__00a7d240;
  *(undefined2 *)(in_ECX + 5) = 0;
  *(undefined2 *)((int)in_ECX + 0x1a) = 1;
  *(undefined2 *)((int)in_ECX + 0x16) = 0;
  *(undefined2 *)(in_ECX + 6) = 0;
  in_ECX[4] = 0;
  local_4 = 2;
  FUN_00721440(&PTR_LAB_00a7d238);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006fb300(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7d24c;
  in_ECX[3] = &PTR__scalar_deleting_destructor__00a7d240;
  FUN_00401f20(in_ECX[4]);
  FUN_00721410();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_006fb340(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_006fb280();
  }
  local_4 = 0xffffffff;
  FUN_00721440(0);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_006fb3b0(float param_1)

{
  short sVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_4;
  
  iVar2 = (int)param_1;
  FUN_00709430(param_1);
  local_4 = 2;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))
            (*(int *)(iVar2 + 0x21c),(short *)(in_ECX + 0xc),2,&local_4,1);
  local_4 = 1;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0xe,1,&local_4,1);
  local_4 = 1;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&param_1,1,&local_4,1);
  sVar1 = *(short *)(in_ECX + 0xc);
  if (sVar1 < 0) {
    param_1 = (float)(int)sVar1 / 1000.0;
    FUN_006faee0(param_1);
  }
  return;
}



void FUN_006fb460(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_007094a0(param_1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0xc,2,&param_1,1);
  param_1 = 1;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0xe,1,&param_1,1);
  param_1 = 1;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0xe,1,&param_1,1);
  return;
}



void FUN_006fb4e0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  undefined4 local_14;
  undefined1 auStack_10 [12];
  undefined2 uStack_4;
  undefined1 uStack_2;
  
  uVar2 = param_1;
  FUN_00721610(param_1);
  iVar1 = *(int *)(uVar2 + 0x21c);
  local_14 = 4;
  (**(code **)(iVar1 + 4))(iVar1,&param_1,4,&local_14,1);
  uVar3 = 0;
  if (param_1 != 0) {
    FUN_006fb0d0(param_1);
    uStack_4 = 0;
    uStack_2 = 0xff;
    if (param_1 != 0) {
      do {
        FUN_006fb3b0(uVar2);
        uVar4 = (uint)*(ushort *)(in_ECX + 0x16);
        if (*(ushort *)(in_ECX + 0x14) <= uVar4) {
          FUN_006fb0d0(*(ushort *)(in_ECX + 0x1a) + uVar4);
        }
        FUN_006fafa0(uVar4,auStack_10);
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_1);
    }
  }
  return;
}



void FUN_006fb600(uint param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_10;
  
  iVar2 = param_1;
  FUN_00721730(param_1);
  param_1 = FUN_0070f910(DAT_00b3f4b4);
  uVar5 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar5) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar5);
  }
  FUN_0042bb90(uVar5,&param_1);
  uVar5 = (uint)*(ushort *)(in_ECX + 0x18);
  param_1 = FUN_0070fb40("iMarks",uVar5);
  uVar6 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar6) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar6);
  }
  FUN_0042bb90(uVar6,&param_1);
  param_1 = 0;
  if (uVar5 != 0) {
    local_10 = 0;
    do {
      iVar3 = FUN_0070fb40(&DAT_00a7d2bc,param_1);
      uVar1 = *(ushort *)(iVar2 + 10);
      uVar6 = (uint)uVar1;
      if (*(ushort *)(iVar2 + 8) <= uVar6) {
        FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar6);
      }
      if (uVar6 < *(ushort *)(iVar2 + 10)) {
        if (iVar3 == 0) {
          if (*(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) != 0) {
            *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) == 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(iVar2 + 10) = uVar1 + 1;
        if (iVar3 != 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      *(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) = iVar3;
      iVar4 = *(int *)(in_ECX + 0x10) + local_10;
      iVar3 = FUN_0070fb40(" Number",*(undefined1 *)(iVar4 + 0xe));
      uVar1 = *(ushort *)(iVar2 + 10);
      uVar6 = (uint)uVar1;
      if (*(ushort *)(iVar2 + 8) <= uVar6) {
        FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar6);
      }
      if (uVar6 < *(ushort *)(iVar2 + 10)) {
        if (iVar3 == 0) {
          if (*(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) != 0) {
            *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) == 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(iVar2 + 10) = uVar1 + 1;
        if (iVar3 != 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      *(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) = iVar3;
      iVar3 = FUN_00707280(&DAT_00a7d2ac);
      uVar1 = *(ushort *)(iVar2 + 10);
      uVar6 = (uint)uVar1;
      if (*(ushort *)(iVar2 + 8) <= uVar6) {
        FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar6);
      }
      if (uVar6 < *(ushort *)(iVar2 + 10)) {
        if (iVar3 == 0) {
          if (*(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) != 0) {
            *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) == 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(iVar2 + 10) = uVar1 + 1;
        if (iVar3 != 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      *(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) = iVar3;
      iVar3 = FUN_0070fb90(" Heading",(float)*(ushort *)(iVar4 + 0xc) / 1000.0);
      uVar1 = *(ushort *)(iVar2 + 10);
      uVar6 = (uint)uVar1;
      if (*(ushort *)(iVar2 + 8) <= uVar6) {
        FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar6);
      }
      if (uVar6 < *(ushort *)(iVar2 + 10)) {
        if (iVar3 == 0) {
          if (*(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) != 0) {
            *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) == 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(iVar2 + 10) = uVar1 + 1;
        if (iVar3 != 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      local_10 = local_10 + 0x10;
      *(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) = iVar3;
      param_1 = param_1 + 1;
    } while (param_1 < uVar5);
  }
  return;
}



void FUN_006fb8b0(void)

{
  undefined4 *in_ECX;
  
  FUN_00721370(&DAT_00a7d2cc);
  *in_ECX = &PTR_FUN_00a7d2d4;
  in_ECX[3] = DAT_00b3f9a8;
  in_ECX[4] = DAT_00b3f9ac;
  in_ECX[5] = DAT_00b3f9b0;
  in_ECX[6] = DAT_00b3f9a8;
  in_ECX[7] = DAT_00b3f9ac;
  in_ECX[8] = DAT_00b3f9b0;
  return;
}



undefined4 FUN_006fba20(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x24,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_006fb8b0();
  }
  local_4 = 0xffffffff;
  FUN_00721440(0);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



undefined4 FUN_006fba90(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = FUN_006ff9c0(&DAT_00a7d2cc);
    uVar1 = FUN_00560920(&DAT_00b3f4bc,uVar1);
  }
  return uVar1;
}



undefined4 FUN_006fbba0(undefined4 param_1)

{
  float *in_ECX;
  
  if (ABS(in_ECX[1]) <= ABS(*in_ECX)) {
    if (ABS(in_ECX[1]) <= ABS(in_ECX[2])) {
      FUN_004bf9e0(param_1,&DAT_00b258dc);
      return param_1;
    }
  }
  else if (ABS(*in_ECX) <= ABS(in_ECX[2])) {
    FUN_004bf9e0(param_1,&DAT_00b258d0);
    return param_1;
  }
  FUN_004bf9e0(param_1,&DAT_00b258e8);
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_006fbc40(float *param_1,undefined4 *param_2)

{
  uint uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((_DAT_00b3f528 & 1) == 0) {
    _DAT_00b3f528 = _DAT_00b3f528 | 1;
    _DAT_00b3f4c8 = 0.5;
    _DAT_00b3f4cc = 0.5;
    _DAT_00b3f4d0 = 0.5;
    _DAT_00b3f4d4 = 0.5;
    _DAT_00b3f4d8 = 0.5;
    _DAT_00b3f4dc = -0.5;
    _DAT_00b3f4e4 = -0.5;
    _DAT_00b3f4f0 = -0.5;
    _DAT_00b3f4f4 = -0.5;
    _DAT_00b3f4f8 = -0.5;
    _DAT_00b3f504 = -0.5;
    _DAT_00b3f50c = -0.5;
    _DAT_00b3f510 = -0.5;
    _DAT_00b3f514 = -0.5;
    _DAT_00b3f51c = -0.5;
    _DAT_00b3f520 = -0.5;
    _DAT_00b3f524 = -0.5;
    _DAT_00b3f4e0 = 0.5;
    _DAT_00b3f4e8 = 0.5;
    _DAT_00b3f4ec = 0.5;
    _DAT_00b3f4fc = 0.5;
    _DAT_00b3f500 = 0.5;
    _DAT_00b3f508 = 0.5;
    _DAT_00b3f518 = 0.5;
  }
  pfVar2 = (float *)FUN_00401f00(0x60,uVar1);
  *pfVar2 = *param_1 * _DAT_00b3f4c8;
  pfVar2[1] = _DAT_00b3f4cc * param_1[1];
  pfVar2[2] = _DAT_00b3f4d0 * param_1[2];
  pfVar2[3] = *param_1 * _DAT_00b3f4d4;
  pfVar2[4] = _DAT_00b3f4d8 * param_1[1];
  pfVar2[5] = _DAT_00b3f4dc * param_1[2];
  pfVar2[6] = *param_1 * _DAT_00b3f4e0;
  pfVar2[7] = _DAT_00b3f4e4 * param_1[1];
  pfVar2[8] = _DAT_00b3f4e8 * param_1[2];
  pfVar2[9] = *param_1 * _DAT_00b3f4ec;
  pfVar2[10] = _DAT_00b3f4f0 * param_1[1];
  pfVar2[0xb] = _DAT_00b3f4f4 * param_1[2];
  pfVar2[0xc] = *param_1 * _DAT_00b3f4f8;
  pfVar2[0xd] = _DAT_00b3f4fc * param_1[1];
  pfVar2[0xe] = _DAT_00b3f500 * param_1[2];
  pfVar2[0xf] = *param_1 * _DAT_00b3f504;
  pfVar2[0x10] = _DAT_00b3f508 * param_1[1];
  pfVar2[0x11] = _DAT_00b3f50c * param_1[2];
  pfVar2[0x12] = *param_1 * _DAT_00b3f510;
  pfVar2[0x13] = _DAT_00b3f514 * param_1[1];
  pfVar2[0x14] = _DAT_00b3f518 * param_1[2];
  pfVar2[0x15] = *param_1 * _DAT_00b3f51c;
  pfVar2[0x16] = _DAT_00b3f520 * param_1[1];
  pfVar2[0x17] = _DAT_00b3f524 * param_1[2];
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)0x0;
    puVar3 = param_2;
  }
  else {
    puVar3 = (undefined4 *)FUN_00401f00(0x80,uVar1);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = 0;
      puVar3[0x13] = 0;
      puVar3[0x14] = 0;
      puVar3[0x15] = 0;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0;
      puVar3[0x18] = 0;
      puVar3[0x19] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x1b] = 0;
      puVar3[0x1c] = 0;
      puVar3[0x1d] = 0;
      puVar3[0x1e] = 0;
      puVar3[0x1f] = 0;
    }
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_2;
      puVar3[1] = param_2[1];
      puVar3[2] = param_2[2];
      puVar3[3] = param_2[3];
      puVar3[4] = *param_2;
      puVar3[5] = param_2[1];
      puVar3[6] = param_2[2];
      puVar3[7] = param_2[3];
      puVar3[8] = *param_2;
      puVar3[9] = param_2[1];
      puVar3[10] = param_2[2];
      puVar3[0xb] = param_2[3];
      puVar3[0xc] = *param_2;
      puVar3[0xd] = param_2[1];
      puVar3[0xe] = param_2[2];
      puVar3[0xf] = param_2[3];
      puVar3[0x10] = *param_2;
      puVar3[0x11] = param_2[1];
      puVar3[0x12] = param_2[2];
      puVar3[0x13] = param_2[3];
      puVar3[0x14] = *param_2;
      puVar3[0x15] = param_2[1];
      puVar3[0x16] = param_2[2];
      puVar3[0x17] = param_2[3];
      puVar3[0x18] = *param_2;
      puVar3[0x19] = param_2[1];
      puVar3[0x1a] = param_2[2];
      puVar3[0x1b] = param_2[3];
      puVar3[0x1c] = *param_2;
      puVar3[0x1d] = param_2[1];
      puVar3[0x1e] = param_2[2];
      puVar3[0x1f] = param_2[3];
    }
  }
  param_2 = puVar3;
  puVar4 = (undefined4 *)FUN_00401f00(0x48,uVar1);
  puVar3 = &DAT_00a7d338;
  puVar7 = puVar4;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar5 = FUN_00401f00(0xc0);
  piVar6 = (int *)0x0;
  local_4 = 0;
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_007174b0(8,pfVar2,0,param_2,0,0,0,0xc,puVar4);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar6 + 0x90))();
  *unaff_FS_OFFSET = local_c;
  return piVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_006fc010(float param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  uint uVar23;
  float *pfVar24;
  float *unaff_FS_OFFSET;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  uint unaff_retaddr;
  float fVar31;
  undefined4 *local_d8;
  int local_d4;
  undefined8 local_d0;
  uint local_c0;
  float *local_bc;
  float fStack_ac;
  float local_a4;
  float *local_9c;
  int *local_7c;
  float local_78;
  int *local_74;
  float fStack_1c;
  float local_c;
  undefined1 *puStack_8;
  float local_4;
  
  local_4 = -NAN;
  puStack_8 = &LAB_009c91d8;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffff14;
  *unaff_FS_OFFSET = (float)&local_c;
  iVar8 = FUN_00401f00(0xdc,uVar7);
  puVar21 = (undefined4 *)0x0;
  local_4 = 0.0;
  if (iVar8 == 0) {
    local_74 = (int *)0x0;
  }
  else {
    local_74 = (int *)FUN_0070b780(0);
  }
  local_4 = -NAN;
  FUN_006ff420("BSTestObjects Sphere");
  fVar31 = (float)param_3;
  if (param_3 < 0) {
    fVar31 = fVar31 + 4.2949673e+09;
  }
  fVar2 = (float)(int)param_2;
  if ((int)param_2 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  uVar23 = (int)param_2 * 2 + 2;
  puVar9 = (undefined4 *)
           FUN_00401f00(-(uint)((int)((ulonglong)uVar23 * 0xc >> 0x20) != 0) |
                        (uint)((ulonglong)uVar23 * 0xc),uVar7);
  pfVar10 = (float *)FUN_00401f00(-(uint)((int)((ulonglong)uVar23 * 0xc >> 0x20) != 0) |
                                  (uint)((ulonglong)uVar23 * 0xc));
  if (param_4 != (undefined4 *)0x0) {
    puVar21 = (undefined4 *)
              FUN_00401f00(-(uint)((int)((ulonglong)uVar23 * 0x10 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar23 * 0x10));
    local_4 = 1.4013e-45;
    if (puVar21 == (undefined4 *)0x0) {
      puVar21 = (undefined4 *)0x0;
    }
    else {
      _vector_constructor_iterator_(puVar21,0x10,uVar23,FUN_0047ea50);
    }
    local_4 = -NAN;
  }
  pfVar11 = (float *)FUN_00401f00(-(uint)((int)((ulonglong)uVar23 * 8 >> 0x20) != 0) |
                                  (uint)((ulonglong)uVar23 * 8));
  lVar1 = (ulonglong)(uint)((int)param_2 * 6) * 2;
  iVar8 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = param_1;
  *pfVar10 = 0.0;
  pfVar10[1] = 0.0;
  iVar19 = 0;
  pfVar10[2] = 1.0;
  if (param_4 != (undefined4 *)0x0) {
    *puVar21 = *param_4;
    puVar21[1] = param_4[1];
    puVar21[2] = param_4[2];
    puVar21[3] = param_4[3];
  }
  *pfVar11 = 0.5;
  local_a4 = 0.0;
  pfVar11[1] = 0.0;
  iVar22 = 1;
  local_d8 = (undefined4 *)0x0;
  if (param_2 != (undefined4 *)0x0) {
    fVar25 = (float10)FUN_00986300();
    fVar26 = (float10)FUN_00986000();
    local_78 = (float)fVar26;
    iVar12 = (int)puVar9 - (int)pfVar10;
    pfVar24 = pfVar10;
    puVar13 = puVar21;
    pfVar6 = pfVar11;
    do {
      local_9c = pfVar6 + 2;
      local_d0._0_4_ = puVar13 + 4;
      pfVar18 = pfVar24 + 3;
      fVar26 = (float10)FUN_00986300();
      fVar3 = -(float)fVar26 * (float)fVar25;
      fVar26 = (float10)FUN_00986000();
      local_7c = (int *)((float)fVar26 * (float)fVar25);
      *(float *)(iVar12 + (int)pfVar18) = param_1 * fVar3;
      *(float *)(iVar12 + 4 + (int)pfVar18) = (float)local_7c * param_1;
      *(float *)(iVar12 + 8 + (int)pfVar18) = param_1 * local_78;
      *pfVar18 = fVar3;
      pfVar24[4] = (float)local_7c;
      pfVar24[5] = local_78;
      if (param_4 != (undefined4 *)0x0) {
        *(undefined4 *)local_d0 = *param_4;
        puVar13[5] = param_4[1];
        puVar13[6] = param_4[2];
        puVar13[7] = param_4[3];
      }
      *local_9c = local_a4;
      pfVar6[3] = 1.0 / fVar31;
      iVar22 = iVar22 + 1;
      if (local_d8 != (undefined4 *)0x0) {
        *(undefined2 *)(iVar8 + iVar19 * 2) = 0;
        *(short *)(iVar8 + (iVar19 + 1) * 2) = (short)iVar22 + -2;
        *(short *)(iVar8 + (iVar19 + 2) * 2) = (short)iVar22 + -1;
        iVar19 = iVar19 + 3;
      }
      local_d8 = (undefined4 *)((int)local_d8 + 1);
      pfVar24 = pfVar18;
      local_a4 = local_a4 + 1.0 / fVar2;
      puVar13 = (undefined4 *)local_d0;
      pfVar6 = local_9c;
    } while (local_d8 < param_2);
  }
  *(undefined2 *)(iVar8 + iVar19 * 2) = 0;
  sVar5 = (short)iVar22;
  *(short *)(iVar8 + (iVar19 + 1) * 2) = sVar5 + -1;
  *(undefined2 *)(iVar8 + 2 + (iVar19 + 1) * 2) = 1;
  puVar9[iVar22 * 3] = 0;
  puVar9[iVar22 * 3 + 1] = 0;
  puVar9[iVar22 * 3 + 2] = -param_1;
  pfVar10[iVar22 * 3] = 0.0;
  pfVar10[iVar22 * 3 + 1] = 0.0;
  pfVar10[iVar22 * 3 + 2] = -1.0;
  iVar19 = iVar19 + 3;
  if (param_4 != (undefined4 *)0x0) {
    puVar13 = puVar21 + iVar22 * 4;
    *puVar13 = *param_4;
    puVar13[1] = param_4[1];
    puVar13[2] = param_4[2];
    puVar13[3] = param_4[3];
  }
  pfVar11[iVar22 * 2] = 0.5;
  pfVar11[iVar22 * 2 + 1] = 1.0;
  iVar22 = iVar22 + 1;
  local_d0 = (double)CONCAT44(puVar21,param_2);
  local_a4 = 1.0;
  if (param_2 != (undefined4 *)0x0) {
    fVar25 = (float10)FUN_00986300();
    fVar26 = (float10)FUN_00986000();
    local_bc = pfVar11 + iVar22 * 2;
    local_78 = param_1 * (float)fVar26;
    local_d8 = puVar21 + iVar22 * 4;
    pfVar24 = pfVar10 + iVar22 * 3;
    iVar12 = (int)puVar9 - (int)pfVar10;
    do {
      fVar27 = (float10)FUN_00986300();
      fVar3 = -(float)fVar27 * (float)fVar25;
      fVar27 = (float10)FUN_00986000();
      fVar4 = (float)fVar25 * (float)fVar27;
      *(float *)((int)pfVar24 + iVar12) = param_1 * fVar3;
      local_7c = (int *)(fVar4 * param_1);
      *(int **)((int)pfVar24 + iVar12 + 4) = local_7c;
      *(float *)((int)pfVar24 + iVar12 + 8) = local_78;
      *pfVar24 = fVar3;
      pfVar24[1] = fVar4;
      pfVar24[2] = (float)fVar26;
      if (param_4 != (undefined4 *)0x0) {
        *local_d8 = *param_4;
        local_d8[1] = param_4[1];
        local_d8[2] = param_4[2];
        local_d8[3] = param_4[3];
      }
      *local_bc = local_a4;
      local_bc[1] = 1.0 - 1.0 / fVar31;
      local_bc = local_bc + 2;
      local_d8 = local_d8 + 4;
      iVar22 = iVar22 + 1;
      pfVar24 = pfVar24 + 3;
      if ((undefined4 *)local_d0 != param_2) {
        *(short *)(iVar8 + iVar19 * 2) = sVar5;
        *(short *)(iVar8 + (iVar19 + 1) * 2) = (short)iVar22 + -2;
        *(short *)(iVar8 + (iVar19 + 2) * 2) = (short)iVar22 + -1;
        iVar19 = iVar19 + 3;
      }
      iVar15 = (int)(undefined4 *)local_d0 + -1;
      local_d0 = (double)CONCAT44(local_d0._4_4_,iVar15);
      local_a4 = local_a4 - 1.0 / fVar2;
    } while (iVar15 != 0);
  }
  *(short *)(iVar8 + iVar19 * 2) = sVar5;
  *(short *)(iVar8 + (iVar19 + 1) * 2) = (short)iVar22 + -1;
  *(short *)(iVar8 + (iVar19 + 2) * 2) = sVar5 + 1;
  iVar12 = FUN_00401f00(0xc0);
  local_4 = 2.8026e-45;
  if (iVar12 == 0) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = (int *)FUN_007174b0(iVar22,puVar9,pfVar10,local_d0._4_4_,pfVar11,1,0,(iVar19 + 3) / 3,
                                  iVar8);
  }
  local_4 = -NAN;
  (**(code **)(*piVar14 + 0x90))();
  (**(code **)(*local_74 + 0x84))(piVar14,0);
  uVar23 = (int)param_1 - 2;
  uVar7 = (unaff_retaddr * 2 + 2) * uVar23;
  iVar8 = FUN_00401f00(-(uint)((int)((ulonglong)uVar7 * 0xc >> 0x20) != 0) |
                       (uint)((ulonglong)uVar7 * 0xc));
  iVar19 = FUN_00401f00(-(uint)((int)((ulonglong)uVar7 * 0xc >> 0x20) != 0) |
                        (uint)((ulonglong)uVar7 * 0xc));
  if (param_2 == (undefined4 *)0x0) {
    local_d4 = 0;
  }
  else {
    local_d4 = FUN_00401f00(-(uint)((int)((ulonglong)uVar7 * 0x10 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar7 * 0x10));
    if (local_d4 == 0) {
      local_d4 = 0;
    }
    else {
      iVar22 = uVar7 - 1;
      if (-1 < iVar22) {
        puVar21 = (undefined4 *)(local_d4 + 8);
        do {
          puVar21[-2] = 0;
          iVar22 = iVar22 + -1;
          puVar21[-1] = 0;
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21 = puVar21 + 4;
        } while (-1 < iVar22);
      }
    }
  }
  iVar22 = FUN_00401f00(-(uint)((int)((ulonglong)uVar7 * 8 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar7 * 8));
  iVar12 = FUN_00401f00(-(uint)((int)((ulonglong)uVar23 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar23 * 2));
  iVar15 = FUN_00401f00(-(uint)((int)((ulonglong)uVar7 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar7 * 2));
  iVar20 = 0;
  local_bc = (float *)0x0;
  piVar14 = local_74;
  fVar31 = 0.0;
  if (uVar23 != 0) {
    do {
      uVar7 = (int)local_bc + 1;
      local_c0 = 0;
      fStack_ac = 0.0;
      fVar25 = (float10)FUN_00986300();
      fVar26 = (float10)FUN_00986000();
      fVar27 = (float10)FUN_00986300();
      fVar28 = (float10)FUN_00986000();
      fVar2 = (float)local_d0;
      pfVar10 = (float *)(iVar22 + iVar20 * 8);
      puVar21 = (undefined4 *)(iVar20 * 0x10 + local_d4);
      pfVar11 = (float *)(iVar20 * 0xc + iVar19);
      pfVar24 = (float *)(iVar20 * 0xc + iVar8);
      do {
        fVar29 = (float10)FUN_00986300();
        fVar3 = -(float)fVar29 * (float)fVar25;
        fVar30 = (float10)FUN_00986000();
        fVar4 = (float)fVar25 * (float)fVar30;
        *pfVar24 = local_4 * fVar3;
        pfVar24[1] = fVar4 * local_4;
        pfVar24[2] = (float)fVar26 * local_4;
        *pfVar11 = fVar3;
        pfVar11[1] = fVar4;
        pfVar11[2] = (float)fVar26;
        if (param_2 != (undefined4 *)0x0) {
          *puVar21 = *param_2;
          puVar21[1] = param_2[1];
          puVar21[2] = param_2[2];
          puVar21[3] = param_2[3];
        }
        *pfVar10 = fStack_ac;
        pfVar10[1] = fVar31;
        *(short *)(iVar15 + iVar20 * 2) = (short)iVar20;
        fVar3 = (float)fVar27 * -(float)fVar29;
        fStack_1c = (float)fVar30 * (float)fVar27;
        pfVar24[3] = fVar3 * local_4;
        pfVar24[4] = fStack_1c * local_4;
        pfVar24[5] = (float)fVar28 * local_4;
        pfVar11[3] = fVar3;
        pfVar11[4] = fStack_1c;
        pfVar11[5] = (float)fVar28;
        if (param_2 != (undefined4 *)0x0) {
          puVar21[4] = *param_2;
          puVar21[5] = param_2[1];
          puVar21[6] = param_2[2];
          puVar21[7] = param_2[3];
        }
        puVar21 = puVar21 + 8;
        pfVar10[2] = fStack_ac;
        pfVar10[3] = fVar31 + fVar2;
        local_c0 = local_c0 + 1;
        *(short *)(iVar15 + (iVar20 + 1) * 2) = (short)(iVar20 + 1);
        iVar20 = iVar20 + 2;
        pfVar24 = pfVar24 + 6;
        pfVar11 = pfVar11 + 6;
        pfVar10 = pfVar10 + 4;
        fStack_ac = fStack_ac + local_78;
      } while (local_c0 <= unaff_retaddr);
      local_d0 = (double)(float)local_74;
      *(short *)(iVar12 + (int)local_bc * 2) = (short)unaff_retaddr * 2 + 2;
      piVar14 = local_7c;
      fVar31 = fVar31 + fVar2;
      local_bc = (float *)uVar7;
    } while (uVar7 < uVar23);
  }
  iVar16 = FUN_00401f00(0xc0);
  local_c = 4.2039e-45;
  if (iVar16 == 0) {
    piVar17 = (int *)0x0;
  }
  else {
    piVar17 = (int *)FUN_00719960(iVar20,iVar8,iVar19,local_d4,iVar22,1,0,unaff_retaddr * uVar23 * 2
                                  ,uVar23,iVar12,iVar15);
  }
  local_c = -NAN;
  (**(code **)(*piVar17 + 0x90))();
  (**(code **)(*piVar14 + 0x84))(piVar17,0);
  *unaff_FS_OFFSET = fStack_1c;
  return piVar14;
}



int FUN_006fcdc0(float *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 *puVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int *unaff_FS_OFFSET;
  float10 fVar15;
  undefined1 local_18 [12];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9216;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffff98;
  *unaff_FS_OFFSET = (int)&local_c;
  fVar12 = param_1[1];
  fVar14 = *param_1;
  fVar13 = param_1[2];
  fVar15 = (float10)FUN_00982c30(uVar5);
  param_1 = (float *)(float)fVar15;
  if ((float)param_1 < 8.0) {
    fVar1 = 8.0 / (float)param_1;
    fVar14 = fVar14 * fVar1;
    fVar12 = fVar12 * fVar1;
    fVar13 = fVar1 * fVar13;
    fVar15 = (float10)FUN_00982c30(uVar5);
    param_1 = (float *)(float)fVar15;
  }
  puVar6 = (undefined4 *)FUN_00401f00(0x3c);
  fVar4 = (float)param_1 * 0.15;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  pfVar7 = (float *)FUN_006fbba0(local_18);
  fVar1 = *pfVar7;
  fVar2 = pfVar7[1];
  fVar3 = pfVar7[2];
  puVar6[3] = fVar14;
  puVar6[4] = fVar12;
  puVar6[5] = fVar13;
  puVar6[6] = fVar14 * 0.75 + fVar1 * fVar4;
  puVar6[9] = fVar14;
  puVar6[7] = fVar2 * fVar4 + fVar12 * 0.75;
  puVar6[10] = fVar12;
  puVar6[0xb] = fVar13;
  puVar6[8] = fVar13 * 0.75 + fVar4 * fVar3;
  puVar6[0xc] = fVar14 * 0.75 - fVar1 * fVar4;
  puVar6[0xd] = fVar12 * 0.75 - fVar2 * fVar4;
  puVar6[0xe] = fVar13 * 0.75 - fVar4 * fVar3;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &DAT_00b25550;
  }
  puVar8 = (undefined4 *)FUN_00401f00(0x60);
  local_4 = 0;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    _vector_constructor_iterator_(puVar8,0x10,6,FUN_0047ea50);
  }
  *puVar8 = *param_2;
  puVar8[1] = param_2[1];
  puVar8[2] = param_2[2];
  puVar8[3] = param_2[3];
  puVar8[4] = *param_2;
  puVar8[5] = param_2[1];
  puVar8[6] = param_2[2];
  puVar8[7] = param_2[3];
  puVar8[8] = 0;
  puVar8[9] = 0x3f800000;
  puVar8[10] = 0;
  puVar8[0xb] = 0x3f800000;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0x3f800000;
  puVar8[0xe] = 0;
  puVar8[0x10] = 0;
  puVar8[0xf] = 0x3f800000;
  puVar8[0x11] = 0x3f800000;
  puVar8[0x12] = 0;
  local_4 = 0xffffffff;
  puVar8[0x13] = 0x3f800000;
  puVar9 = (undefined1 *)FUN_00401f00(6);
  *puVar9 = 1;
  puVar9[1] = 0;
  puVar9[2] = 1;
  puVar9[3] = 1;
  puVar9[4] = 0;
  iVar10 = FUN_00401f00(0xc0);
  local_4 = 1;
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = FUN_007177e0(5,puVar6,puVar8,0,0,0,puVar9);
  }
  *(undefined4 *)(iVar10 + 0x54) = DAT_00b3f9a8;
  *(undefined4 *)(iVar10 + 0x58) = DAT_00b3f9ac;
  *(undefined4 *)(iVar10 + 0x5c) = DAT_00b3f9b0;
  puVar6 = &DAT_00b26dc4;
  puVar8 = (undefined4 *)(iVar10 + 0x30);
  for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  local_4 = 0xffffffff;
  FUN_006ff420("BSTestObjects DirArrow");
  *unaff_FS_OFFSET = local_c;
  return iVar10;
}



int FUN_006fd1d0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  LONG LVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9269;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x48,uVar1);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_1;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = param_1;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = param_1;
  puVar3 = (undefined4 *)FUN_00401f00(0x60);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    _vector_constructor_iterator_(puVar3,0x10,6,FUN_0047ea50);
  }
  *puVar3 = DAT_00b25550;
  puVar3[1] = DAT_00b25554;
  puVar3[2] = DAT_00b25558;
  puVar3[3] = DAT_00b2555c;
  puVar3[4] = DAT_00b25550;
  puVar3[5] = DAT_00b25554;
  puVar3[6] = DAT_00b25558;
  puVar3[7] = DAT_00b2555c;
  puVar3[8] = DAT_00b25560;
  puVar3[9] = DAT_00b25564;
  puVar3[10] = DAT_00b25568;
  puVar3[0xb] = DAT_00b2556c;
  puVar3[0xc] = DAT_00b25560;
  puVar3[0xd] = DAT_00b25564;
  puVar3[0xe] = DAT_00b25568;
  puVar3[0xf] = DAT_00b2556c;
  puVar3[0x10] = DAT_00b25570;
  puVar3[0x11] = DAT_00b25574;
  puVar3[0x12] = DAT_00b25578;
  puVar3[0x13] = DAT_00b2557c;
  puVar3[0x14] = DAT_00b25570;
  puVar3[0x15] = DAT_00b25574;
  puVar3[0x16] = DAT_00b25578;
  local_4 = 0xffffffff;
  puVar3[0x17] = DAT_00b2557c;
  puVar4 = (undefined1 *)FUN_00401f00(6,uVar1);
  *puVar4 = 1;
  puVar4[1] = 0;
  puVar4[2] = 1;
  puVar4[3] = 0;
  puVar4[4] = 1;
  puVar4[5] = 0;
  iVar5 = FUN_00401f00(0xc0);
  local_4 = 1;
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_007177e0(6,puVar2,puVar3,0,0,0,puVar4);
  }
  *(undefined4 *)(iVar5 + 0x54) = DAT_00b3f9a8;
  *(undefined4 *)(iVar5 + 0x58) = DAT_00b3f9ac;
  *(undefined4 *)(iVar5 + 0x5c) = DAT_00b3f9b0;
  puVar2 = &DAT_00b26dc4;
  puVar3 = (undefined4 *)(iVar5 + 0x30);
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_4 = 0xffffffff;
  FUN_006ff420("BSTestObjects Coordinate Jack");
  puVar2 = (undefined4 *)FUN_00401f00(0x1c);
  local_4 = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar2 = &PTR_FUN_00a2fd04;
    *(undefined2 *)(puVar2 + 6) = 8;
  }
  if (puVar2 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar2 + 1);
  }
  *(ushort *)(puVar2 + 6) = *(ushort *)(puVar2 + 6) & 0xffdf | 0x10;
  *(ushort *)(puVar2 + 6) = *(ushort *)(puVar2 + 6) & 0xfff7;
  local_4 = 3;
  FUN_00405680(puVar2);
  local_4 = 0xffffffff;
  LVar6 = InterlockedDecrement(puVar2 + 1);
  if (LVar6 == 0) {
    (**(code **)*puVar2)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return iVar5;
}



void FUN_006fd530(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c80c8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00715990(uVar1);
  in_ECX[0x10] = 0;
  *in_ECX = &PTR_FUN_00a7d3d4;
  in_ECX[0xf] = 0xffffffff;
  *(undefined2 *)(in_ECX + 0x13) = 0;
  *(undefined2 *)((int)in_ECX + 0x4e) = 0;
  *(undefined2 *)(in_ECX + 0x14) = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x11] = &PTR__scalar_deleting_destructor__00a7c2fc;
  *(undefined2 *)((int)in_ECX + 0x52) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_006fd5d0(uint *param_1)

{
  int *piVar1;
  bool bVar2;
  uint *puVar3;
  int in_ECX;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = *(uint **)(in_ECX + 0x40);
  if (((puVar3 != (uint *)0x0) && (*(uint **)(in_ECX + 0x3c) != param_1)) &&
     ((param_1 == (uint *)0xffffffff || ((-1 < (int)param_1 && (param_1 < puVar3)))))) {
    puVar5 = (uint *)0x0;
    bVar2 = false;
    if (*(short *)(in_ECX + 0x4e) != 0) {
      do {
        puVar3 = *(uint **)(in_ECX + 0x48);
        piVar1 = (int *)puVar3[(int)puVar5];
        if (piVar1 != (int *)0x0) {
          if (puVar5 == param_1) {
            bVar2 = true;
          }
          uVar4 = 0;
          if (piVar1[2] != 0) {
            do {
              puVar3 = (uint *)(*piVar1 + uVar4 * 4);
              if (*(int *)(*piVar1 + uVar4 * 4) != 0) {
                puVar3 = (uint *)*puVar3;
                if (bVar2) {
                  *(ushort *)(puVar3 + 6) = (ushort)puVar3[6] | 2;
                }
                else {
                  *(ushort *)(puVar3 + 6) = (ushort)puVar3[6] & 0xfffd;
                }
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < (uint)piVar1[2]);
          }
        }
        puVar5 = (uint *)((int)puVar5 + 1);
      } while (puVar5 < (uint *)(uint)*(ushort *)(in_ECX + 0x4e));
    }
    *(uint **)(in_ECX + 0x3c) = param_1;
    return CONCAT31((int3)((uint)puVar3 >> 8),1);
  }
  return (uint)puVar3 & 0xffffff00;
}



int FUN_006fd660(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
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
  iVar2 = FUN_00401f00(0x54,uVar1);
  iVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_006fd530();
  }
  local_4 = 0xffffffff;
  FUN_00715d80(iVar3,param_1);
  *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(in_ECX + 0x40);
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __cdecl CProcessLocal<class
   CControlSiteFactoryMgr>::CreateObject(void)
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   AFX_MODULE_THREAD_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   _AFXCTL_AMBIENT_CACHE>::CreateObject(void)
   
   Library: Visual Studio 2005 Release */

undefined4 CreateObject(void)

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
  local_10 = FUN_00401f00(0x54,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006fd530();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006fd8b0(void)

{
  undefined4 *puVar1;
  ushort uVar2;
  int in_ECX;
  uint uVar3;
  
  uVar3 = 0;
  if (*(short *)(in_ECX + 0x4e) != 0) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x48) + uVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00401f20(*puVar1);
        FUN_00401f20(puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(in_ECX + 0x4e));
  }
  uVar2 = 0;
  if (*(short *)(in_ECX + 0x4e) != 0) {
    do {
      uVar3 = (uint)uVar2;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(int *)(in_ECX + 0x48) + uVar3 * 4) = 0;
    } while (uVar2 < *(ushort *)(in_ECX + 0x4e));
  }
  *(undefined2 *)(in_ECX + 0x50) = 0;
  *(undefined2 *)(in_ECX + 0x4e) = 0;
  return;
}



void FUN_006fd910(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ac6db;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = in_ECX;
  FUN_00715e40(param_1);
  local_18 = 0;
  FUN_0055e000(in_ECX,&local_18);
  uVar7 = 0;
  if (*(short *)(in_ECX + 0x4e) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x48) + uVar7 * 4);
      if (piVar1 == (int *)0x0) {
        local_14 = (int *)0x0;
        if (*(ushort *)(local_18 + 0x4c) <= uVar7) {
          FUN_004e4a10(*(ushort *)(local_18 + 0x52) + uVar7);
        }
        FUN_0042bb90(uVar7,&local_14);
      }
      else {
        piVar5 = (int *)FUN_00401f00(0xc,uVar4);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          *piVar5 = 0;
          piVar5[1] = 0;
          piVar5[2] = 0;
        }
        local_4 = 0xffffffff;
        local_14 = piVar5;
        if (*(ushort *)(local_18 + 0x4c) <= uVar7) {
          FUN_004e4a10(*(ushort *)(local_18 + 0x52) + uVar7);
        }
        FUN_0042bb90(uVar7,&local_14);
        uVar8 = 0;
        in_ECX = local_10;
        if (piVar1[2] != 0) {
          do {
            iVar6 = *(int *)(*piVar1 + uVar8 * 4);
            if (iVar6 == 0) {
              iVar6 = piVar5[1];
              if (piVar5[2] == iVar6) {
                if (iVar6 == 0) {
                  iVar6 = 1;
                }
                else {
                  iVar6 = iVar6 * 2;
                }
                FUN_006e8ca0(iVar6);
              }
              *(undefined4 *)(*piVar5 + piVar5[2] * 4) = 0;
            }
            else {
              local_14 = (int *)0x0;
              cVar3 = FUN_0055e000(iVar6,&local_14);
              iVar6 = piVar5[1];
              if (cVar3 == '\0') {
                if (piVar5[2] == iVar6) {
                  if (iVar6 == 0) {
                    iVar6 = 1;
                  }
                  else {
                    iVar6 = iVar6 * 2;
                  }
                  FUN_006e8ca0(iVar6);
                }
                *(undefined4 *)(*piVar5 + piVar5[2] * 4) = 0;
              }
              else {
                if (piVar5[2] == iVar6) {
                  if (iVar6 == 0) {
                    iVar6 = 1;
                  }
                  else {
                    iVar6 = iVar6 * 2;
                  }
                  FUN_006e8ca0(iVar6);
                }
                *(int **)(*piVar5 + piVar5[2] * 4) = local_14;
              }
            }
            piVar5[2] = piVar5[2] + 1;
            uVar8 = uVar8 + 1;
            in_ECX = local_10;
          } while (uVar8 < (uint)piVar1[2]);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ushort *)(in_ECX + 0x4e));
  }
  uVar2 = *(undefined4 *)(local_18 + 0x3c);
  *(undefined4 *)(local_18 + 0x3c) = 0xffffffff;
  FUN_006fd5d0(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006fdb00(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  uint uVar4;
  uint uStack_8;
  int iStack_4;
  
  piVar3 = param_1;
  FUN_00716050(param_1);
  param_1 = (int *)0x4;
  (**(code **)(piVar3[0x88] + 8))(piVar3[0x88],in_ECX + 0x3c,4,&param_1,1);
  param_1 = (int *)0x4;
  (**(code **)(piVar3[0x88] + 8))(piVar3[0x88],in_ECX + 0x40,4,&param_1,1);
  uStack_8 = (uint)*(ushort *)(in_ECX + 0x4e);
  param_1 = (int *)0x4;
  (**(code **)(piVar3[0x88] + 8))(piVar3[0x88],&uStack_8,4,&param_1,1);
  param_1 = (int *)0x0;
  if (*(short *)(in_ECX + 0x4e) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x48) + (int)param_1 * 4);
      iVar2 = piVar3[0x88];
      if (piVar1 == (int *)0x0) {
        uStack_8 = 0;
        iStack_4 = 4;
        (**(code **)(iVar2 + 8))(iVar2,&uStack_8,4,&iStack_4,1);
      }
      else {
        iStack_4 = piVar1[2];
        uStack_8 = 4;
        (**(code **)(iVar2 + 8))(iVar2,&iStack_4,4,&uStack_8);
        uVar4 = 0;
        if (piVar1[2] != 0) {
          do {
            (**(code **)(*piVar3 + 0x2c))(*(undefined4 *)(*piVar1 + uVar4 * 4));
            uVar4 = uVar4 + 1;
          } while (uVar4 < (uint)piVar1[2]);
        }
      }
      param_1 = (int *)((int)param_1 + 1);
    } while (param_1 < (uint)*(ushort *)(in_ECX + 0x4e));
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_006fdc30(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint uStack_20;
  uint auStack_1c [4];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b28fb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  auStack_1c[3] = in_ECX;
  FUN_00715f40(param_1);
  auStack_1c[1] = 4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))
            (*(int *)(param_1 + 0x21c),in_ECX + 0x3c,4,auStack_1c + 1,1,uVar1);
  auStack_1c[1] = 4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))
            (*(int *)(param_1 + 0x21c),in_ECX + 0x40,4,auStack_1c + 1,1);
  auStack_1c[0] = 0;
  auStack_1c[1] = 4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))
            (*(int *)(param_1 + 0x21c),auStack_1c,4,auStack_1c + 1,1);
  uVar1 = 0;
  if (auStack_1c[0] != 0) {
    do {
      piVar2 = (int *)FUN_00401f00(0xc);
      piVar5 = (int *)0x0;
      if (piVar2 != (int *)0x0) {
        *piVar2 = 0;
        piVar2[1] = 0;
        piVar2[2] = 0;
        piVar5 = piVar2;
      }
      uStack_4 = 0xffffffff;
      if (*(ushort *)(in_ECX + 0x4c) <= uVar1) {
        FUN_004e4a10(*(ushort *)(in_ECX + 0x52) + uVar1);
      }
      if (uVar1 < *(ushort *)(in_ECX + 0x4e)) {
        if (piVar5 == (int *)0x0) {
          if (*(int *)(*(int *)(in_ECX + 0x48) + uVar1 * 4) != 0) {
            *(short *)(in_ECX + 0x50) = *(short *)(in_ECX + 0x50) + -1;
          }
        }
        else if (*(int *)(*(int *)(in_ECX + 0x48) + uVar1 * 4) == 0) {
          *(short *)(in_ECX + 0x50) = *(short *)(in_ECX + 0x50) + 1;
        }
      }
      else {
        *(short *)(in_ECX + 0x4e) = (short)uVar1 + 1;
        if (piVar5 != (int *)0x0) {
          *(short *)(in_ECX + 0x50) = *(short *)(in_ECX + 0x50) + 1;
        }
      }
      *(int **)(*(int *)(in_ECX + 0x48) + uVar1 * 4) = piVar5;
      uStack_20 = 0;
      auStack_1c[2] = 4;
      (**(code **)(*(int *)(param_1 + 0x21c) + 4))
                (*(int *)(param_1 + 0x21c),&uStack_20,4,auStack_1c + 2,1);
      uVar4 = 0;
      if (uStack_20 != 0) {
        do {
          iVar3 = piVar5[1];
          if (piVar5[2] == iVar3) {
            if (iVar3 == 0) {
              iVar3 = 1;
            }
            else {
              iVar3 = iVar3 * 2;
            }
            FUN_006e8ca0(iVar3);
          }
          *(uint *)(*piVar5 + piVar5[2] * 4) = auStack_1c[3];
          piVar5[2] = piVar5[2] + 1;
          FUN_00712a20();
          uVar4 = uVar4 + 1;
        } while (uVar4 < uStack_20);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < auStack_1c[0]);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006fded0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7d3d4;
  FUN_006fd8b0();
  in_ECX[0x11] = &PTR__scalar_deleting_destructor__00a7c2fc;
  FUN_00401f20(in_ECX[0x12]);
  FUN_00715a70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006fdf10(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 8));
  *(undefined4 *)(in_ECX + 8) = 0;
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)FUN_00401f00(pcVar2 + (1 - (int)(param_1 + 1)));
    *(char **)(in_ECX + 8) = pcVar2;
    if (pcVar2 != (char *)0x0) {
      do {
        cVar1 = *param_1;
        *pcVar2 = cVar1;
        param_1 = param_1 + 1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    }
  }
  return;
}



undefined4 * FUN_006fdf70(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0xc,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a7cf94;
    puVar2[2] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006fe000(undefined4 param_1)

{
  int in_ECX;
  
  FUN_0068f970(param_1);
  FUN_00713720(*(undefined4 *)(in_ECX + 8));
  return;
}



void FUN_006fe060(undefined4 param_1)

{
  FUN_007008a0(param_1);
  FUN_00712ae0();
  return;
}



undefined1 FUN_006fe080(void)

{
  return 0;
}



void FUN_006fe090(int *param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = param_1;
  FUN_007008a0(param_1);
  FUN_00713620((int *)(in_ECX + 8));
  iVar1 = *(int *)(in_ECX + 8);
  param_1 = (int *)0x0;
  if ((piVar2[0x122] != 0) && (iVar1 != 0)) {
    FUN_0055e000(iVar1,&param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x24))(param_1);
    }
  }
  return;
}



/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __cdecl CProcessLocal<class
   CControlSiteFactoryMgr>::CreateObject(void)
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   AFX_MODULE_THREAD_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   _AFXCTL_AMBIENT_CACHE>::CreateObject(void)
   
   Library: Visual Studio 2005 Release */

undefined4 CreateObject(void)

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
  local_10 = FUN_00401f00(0x18,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006f9a40();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006fe160(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0068f970(param_1);
  uVar1 = FUN_007124d0();
  if (uVar1 != 0) {
    FUN_004e4a10(uVar1);
    for (uVar1 = uVar1 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
      piVar2 = (int *)FUN_007124a0();
      iVar3 = FUN_007124a0();
      if ((piVar2 != (int *)0x0) && (iVar3 != 0)) {
        (**(code **)(*piVar2 + 0x84))(iVar3,0);
      }
    }
  }
  return;
}



void FUN_006fe1d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  uint uVar3;
  int local_8;
  uint local_4;
  
  piVar2 = param_1;
  FUN_0068f970(param_1);
  uVar3 = (uint)*(ushort *)(in_ECX + 0x14);
  local_8 = uVar3 * 2;
  param_1 = (int *)0x4;
  local_4 = uVar3;
  (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],&local_8,4,&param_1,1);
  if (uVar3 != 0) {
    uVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + uVar3 * 4);
      if (iVar1 != 0) {
        (**(code **)(*piVar2 + 0x2c))(*(undefined4 *)(iVar1 + 0x1c));
        (**(code **)(*piVar2 + 0x2c))(iVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_4);
  }
  return;
}



undefined4 FUN_006fe260(int param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint local_4;
  
  piVar3 = param_2;
  if (param_2 == (int *)0x0) {
    local_4 = 0;
  }
  else {
    for (puVar4 = (undefined4 *)(**(code **)(*param_2 + 4))(); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      if (puVar4 == &DAT_00b3fa80) {
        bVar2 = 1;
        goto LAB_006fe290;
      }
    }
    bVar2 = 0;
LAB_006fe290:
    local_4 = -(uint)bVar2 & (uint)piVar3;
  }
  if ((local_4 != 0) && (*(int *)(local_4 + 0x1c) != 0)) {
    iVar1 = *(int *)(*(int *)(local_4 + 0x1c) + 8);
    param_2 = (int *)0x0;
    if ((*(int *)(param_1 + 0x488) != 0) &&
       ((iVar1 != 0 && (FUN_0055e000(iVar1,&param_2), param_2 != (int *)0x0)))) {
      FUN_0042d800(&local_4);
      return 1;
    }
  }
  return 0;
}



char * FUN_006fe340(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_00401f00(pcVar2 + (0x10 - (int)(param_1 + 1)));
  if (param_2 == 0) {
    _sprintf(pcVar2,"%s = AT_VERTICES",param_1);
  }
  else {
    if (param_2 == 1) {
      _sprintf(pcVar2,"%s = AT_SPECIFICOBJS",param_1);
      return pcVar2;
    }
    if (param_2 == 2) {
      _sprintf(pcVar2,"%s = AT_NODES",param_1);
      return pcVar2;
    }
  }
  return pcVar2;
}



void FUN_006fe3c0(int param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_ECX;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_1 == 0) {
    *param_2 = DAT_00b3f9a8;
    param_2[1] = DAT_00b3f9ac;
    param_2[2] = DAT_00b3f9b0;
    return;
  }
  iVar5 = *(int *)(param_1 + 0x1c);
  if ((*(int *)(in_ECX + 0x54) == 1) || (iVar5 == 0)) {
    *param_2 = *(float *)(param_1 + 0x88);
    param_2[1] = *(float *)(param_1 + 0x8c);
    param_2[2] = *(float *)(param_1 + 0x90);
    if (*(int *)(in_ECX + 0x54) == 1) {
      puVar7 = (undefined4 *)FUN_007101f0(&local_c,param_3);
      *param_3 = *puVar7;
      param_3[1] = puVar7[1];
      param_3[2] = puVar7[2];
      return;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x8c);
    fVar2 = *(float *)(iVar5 + 0x8c);
    fVar3 = *(float *)(param_1 + 0x90);
    fVar4 = *(float *)(iVar5 + 0x90);
    *param_2 = *(float *)(param_1 + 0x88) - *(float *)(iVar5 + 0x88);
    param_2[1] = fVar1 - fVar2;
    param_2[2] = fVar3 - fVar4;
    iVar6 = _rand();
    fVar1 = (float)iVar6 / 32767.0;
    local_c = *(float *)(iVar5 + 0x88) + fVar1 * *param_2;
    local_8 = *(float *)(iVar5 + 0x8c) + param_2[1] * fVar1;
    local_4 = *(float *)(iVar5 + 0x90);
    *param_2 = local_c;
    local_4 = local_4 + fVar1 * param_2[2];
    param_2[1] = local_8;
    param_2[2] = local_4;
    if (((*(int *)(in_ECX + 0x10) != 0) &&
        (fVar1 = *(float *)(*(int *)(in_ECX + 0x10) + 0x94), fVar1 != 1.0)) && (fVar1 != 0.0)) {
      FUN_0069dd70(1.0 / fVar1);
      return;
    }
  }
  return;
}



void FUN_006fe5a0(int *param_1,float *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  undefined8 uStack_18;
  float fStack_10;
  undefined1 auStack_c [12];
  
  if ((param_1 == (int *)0x0) || (iVar3 = (**(code **)(*param_1 + 0xc))(), iVar3 == 0)) {
    *param_2 = DAT_00b3f9a8;
    param_2[1] = DAT_00b3f9ac;
    param_2[2] = DAT_00b3f9b0;
    return;
  }
  uVar4 = (**(code **)(**(int **)(iVar3 + 0xb4) + 0x50))();
  uStack_18 = CONCAT44(uStack_18._4_4_,uVar4) & 0xffffffff0000ffff;
  iVar5 = _rand();
  uStack_18._0_4_ = (float)(longlong)ROUND(((float)iVar5 / 32767.0) * (float)(int)(float)uStack_18);
  if ((float)uStack_18 == (float)(uVar4 & 0xffff)) {
    uStack_18._0_4_ = (float)((int)(float)uStack_18 - 1);
  }
  iVar5 = *(int *)(*(int *)(iVar3 + 0xb4) + 0x1c);
  iVar2 = (int)(float)uStack_18 * 0xc;
  *param_2 = *(float *)(iVar2 + iVar5);
  param_2[1] = *(float *)(iVar2 + 4 + iVar5);
  param_2[2] = *(float *)(iVar2 + 8 + iVar5);
  fVar1 = (float)param_1[0x25];
  *param_2 = fVar1 * *param_2;
  param_2[1] = param_2[1] * fVar1;
  param_2[2] = fVar1 * param_2[2];
  if (*(int *)(*(int *)(iVar3 + 0xb4) + 0x20) == 0) {
    return;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0xb4) + 0x20);
  uStack_18 = CONCAT44(*(undefined4 *)(iVar2 + 4 + iVar3),*(undefined4 *)(iVar2 + iVar3));
  fStack_10 = *(float *)(iVar2 + 8 + iVar3);
  pfVar6 = (float *)FUN_007101f0(auStack_c,&uStack_18);
  uStack_18._0_4_ = *pfVar6;
  uStack_18._4_4_ = pfVar6[1];
  fStack_10 = pfVar6[2];
  fVar7 = (float10)FUN_00982c30();
  fVar1 = (float)fVar7;
  *param_3 = fVar1 * (float)uStack_18;
  param_3[1] = uStack_18._4_4_ * fVar1;
  param_3[2] = fVar1 * fStack_10;
  return;
}



void FUN_006fe760(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c9298;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00752fd0(uVar1);
  *in_ECX = &PTR_FUN_00a7d494;
  in_ECX[0x15] = 2;
  *(undefined2 *)(in_ECX + 0x18) = 0;
  *(undefined2 *)((int)in_ECX + 0x62) = 0;
  *(undefined2 *)(in_ECX + 0x19) = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x16] = &PTR_FUN_00a43850;
  *(undefined2 *)((int)in_ECX + 0x66) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006fe7e0(void)

{
  void *pvVar1;
  uint uVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c92c8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  pvVar1 = *(void **)(in_ECX + 0x5c);
  local_4 = 0;
  *(undefined ***)(in_ECX + 0x58) = &PTR_FUN_00a43850;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  local_4 = 0xffffffff;
  FUN_00752c20(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006fe860(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  uint uVar1;
  
  thunk_FUN_0074ee00(param_1,param_2);
  uVar1 = (uint)*(ushort *)(in_ECX + 0x62);
  if (uVar1 != 0) {
    FUN_00523b10(uVar1);
    do {
      uVar1 = uVar1 - 1;
      FUN_004b34e0(uVar1,*(int *)(in_ECX + 0x5c) + uVar1 * 4);
    } while (uVar1 != 0);
  }
  return;
}



void FUN_006fe8b0(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 in_ECX;
  undefined4 *puVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  uint local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c92f8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00753180(param_1);
  cVar2 = FUN_0055e000(in_ECX,&local_1c);
  uVar1 = local_1c;
  if (cVar2 != '\0') {
    uVar6 = (uint)*(ushort *)(local_1c + 0x62);
    local_1c = 0;
joined_r0x006fe90a:
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      cVar2 = FUN_0055e000(*(undefined4 *)(*(int *)(uVar1 + 0x5c) + uVar6 * 4),&local_18);
      puVar5 = local_18;
      if (cVar2 == '\0') goto LAB_006fe97f;
      local_1c = local_1c + 1;
      local_14 = local_18;
      if (local_18 != (undefined4 *)0x0) {
        InterlockedIncrement(local_18 + 1);
      }
      local_4 = 0;
      FUN_004b34e0(uVar6,&local_14);
      local_4 = 0xffffffff;
      if ((puVar5 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar5 + 1), LVar4 == 0))
      goto LAB_006fe9a8;
    }
    if (local_1c != *(ushort *)(uVar1 + 0x62)) {
      FUN_004784a0(uVar3);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
LAB_006fe97f:
  FUN_006d7f60(&local_10,uVar6);
  puVar5 = local_10;
  if (((local_10 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(local_10 + 1), LVar4 == 0))
     && (puVar5 != (undefined4 *)0x0)) {
LAB_006fe9a8:
    (**(code **)*puVar5)(1);
  }
  goto joined_r0x006fe90a;
}



/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __cdecl CProcessLocal<class
   CControlSiteFactoryMgr>::CreateObject(void)
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   AFX_MODULE_THREAD_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   _AFXCTL_AMBIENT_CACHE>::CreateObject(void)
   
   Library: Visual Studio 2005 Release */

undefined4 CreateObject(void)

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
  local_10 = FUN_00401f00(0x68,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006fe760();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x006fea98) */

void FUN_006fea60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  undefined4 local_8;
  
  uVar3 = (uint)*(ushort *)(in_ECX + 0x62);
  if (uVar3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = _rand();
    local_8 = (uint)(longlong)ROUND((float)uVar3 * ((float)iVar1 / 32767.0));
    if (local_8 == uVar3) {
      local_8 = local_8 - 1;
    }
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x5c) + local_8 * 4);
  }
  if (*(int *)(in_ECX + 0x54) == 0) {
    FUN_006fe5a0(uVar2,param_1,param_2);
    return;
  }
  FUN_006fe3c0(uVar2,param_1,param_2);
  return;
}



uint FUN_006feb00(undefined4 param_1)

{
  int in_ECX;
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(in_ECX + 10);
  if (*(ushort *)(in_ECX + 8) <= uVar1) {
    FUN_00523b10(*(ushort *)(in_ECX + 0xe) + uVar1);
  }
  FUN_004b34e0(uVar1,param_1);
  return uVar1;
}



void FUN_006feb40(byte param_1)

{
  FUN_006fe7e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_006feb80(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x68,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_006fe760();
  }
  local_4 = 0xffffffff;
  FUN_006fe860(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_006fed30(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  LONG LVar5;
  undefined4 uVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cf808;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 != (int *)0x0) &&
     (iVar3 = (**(code **)(*param_1 + 8))(uVar2), piVar1 != *(int **)(in_ECX + 0x50))) {
    if (*(int *)(in_ECX + 0x54) == 0) {
      iVar4 = (**(code **)(*piVar1 + 0xc))();
    }
    else {
      iVar4 = iVar3;
      if (*(int *)(in_ECX + 0x54) == 1) {
        iVar4 = FUN_006ff9c0(&PTR_FUN_00a7d44c);
      }
    }
    if (iVar4 != 0) {
      param_1 = piVar1;
      InterlockedIncrement(piVar1 + 1);
      uStack_4 = 0;
      FUN_006feb00(&param_1);
      uStack_4 = 0xffffffff;
      LVar5 = InterlockedDecrement(piVar1 + 1);
      if (LVar5 == 0) {
        (**(code **)*piVar1)(1);
      }
    }
    if (iVar3 != 0) {
      uVar2 = (uint)*(ushort *)(iVar3 + 0xb6);
      while (uVar2 != 0) {
        uVar2 = uVar2 - 1;
        if (uVar2 < *(ushort *)(iVar3 + 0xb6)) {
          uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0xb0) + uVar2 * 4);
        }
        else {
          uVar6 = 0;
        }
        FUN_006fed30(uVar6);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006fee40(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  
  FUN_00477ef0();
  if ((*(int **)(in_ECX + 0x50) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(in_ECX + 0x50) + 8))(), iVar1 != 0)) {
    FUN_00707370(0,1);
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    while (uVar3 != 0) {
      uVar3 = uVar3 - 1;
      if (uVar3 < *(ushort *)(iVar1 + 0xb6)) {
        uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xb0) + uVar3 * 4);
      }
      else {
        uVar2 = 0;
      }
      FUN_006fed30(uVar2);
    }
  }
  return;
}



void FUN_006feec0(undefined4 param_1)

{
  FUN_006fee40();
  FUN_0068f970(param_1);
  return;
}



void FUN_006feee0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  FUN_00752bf0();
  *in_ECX = &PTR_FUN_00a7d53c;
  in_ECX[3] = 3000;
  in_ECX[9] = DAT_00b3f9a8;
  in_ECX[10] = DAT_00b3f9ac;
  in_ECX[0xb] = DAT_00b3f9b0;
  in_ECX[0xc] = DAT_00b3f9a8;
  in_ECX[0xd] = DAT_00b3f9ac;
  uVar1 = DAT_00b3f9b0;
  in_ECX[8] = 0;
  in_ECX[6] = 0;
  in_ECX[0xe] = uVar1;
  return;
}



void FUN_006fef50(int param_1,ushort param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  
  pfVar1 = (float *)(*(int *)(param_1 + 0x5c) + (uint)param_2 * 0x1c);
  *pfVar1 = *(float *)(in_ECX + 0x30) + *pfVar1;
  pfVar1[1] = *(float *)(in_ECX + 0x34) + pfVar1[1];
  pfVar1[2] = *(float *)(in_ECX + 0x38) + pfVar1[2];
  fVar2 = *(float *)(in_ECX + 0x18);
  fVar3 = *(float *)(in_ECX + 0x34);
  fVar4 = *(float *)(in_ECX + 0x38);
  pfVar1 = (float *)(*(int *)(param_1 + 0x1c) + (uint)param_2 * 0xc);
  *pfVar1 = *pfVar1 - fVar2 * *(float *)(in_ECX + 0x30);
  pfVar1[1] = pfVar1[1] - fVar3 * fVar2;
  pfVar1[2] = pfVar1[2] - fVar2 * fVar4;
  return;
}



/* Library Function - Single Match
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   AFX_MODULE_THREAD_STATE>::CreateObject(void)
   
   Library: Visual Studio 2005 Release */

CNoTrackObject * __cdecl CThreadLocal<class_AFX_MODULE_THREAD_STATE>::CreateObject(void)

{
  uint uVar1;
  CNoTrackObject *pCVar2;
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
  local_10 = FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    pCVar2 = (CNoTrackObject *)FUN_006feee0();
    *unaff_FS_OFFSET = local_c;
    return pCVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (CNoTrackObject *)0x0;
}



int FUN_006ff290(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
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
  iVar2 = FUN_00401f00(0x3c,uVar1);
  iVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_006feee0();
  }
  local_4 = 0xffffffff;
  FUN_00752c40(iVar3,param_1);
  *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



void FUN_006ff420(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *_Dst;
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 8));
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    _Dst = (char *)FUN_00401f00(pcVar2 + (1 - (int)(param_1 + 1)));
    *(char **)(in_ECX + 8) = _Dst;
    _strcpy_s(_Dst,(rsize_t)(pcVar2 + (1 - (int)(param_1 + 1))),param_1);
    return;
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ff480(ushort param_1)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int in_ECX;
  uint uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
  _DAT_00b3f678 = GetCurrentThreadId();
  iVar2 = _DAT_00b3f67c;
  _DAT_00b3f67c = _DAT_00b3f67c + 1;
  if (param_1 < *(ushort *)(in_ECX + 0x14)) {
    uVar4 = (uint)param_1;
    if (*(int *)(*(int *)(in_ECX + 0x10) + uVar4 * 4) != 0) {
      puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x10) + uVar4 * 4);
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    if ((int)uVar4 < (int)(*(ushort *)(in_ECX + 0x14) - 1)) {
      do {
        puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x10) + uVar4 * 4);
        *puVar1 = puVar1[1];
        param_1 = param_1 + 1;
        uVar4 = (uint)param_1;
      } while ((int)uVar4 < (int)(*(ushort *)(in_ECX + 0x14) - 1));
    }
    *(short *)(in_ECX + 0x14) = *(short *)(in_ECX + 0x14) + -1;
    *(undefined4 *)(*(int *)(in_ECX + 0x10) + (uint)*(ushort *)(in_ECX + 0x14) * 4) = 0;
    _DAT_00b3f67c = _DAT_00b3f67c + -1;
    if (_DAT_00b3f67c == 0) {
      _DAT_00b3f678 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x006ff564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
    return;
  }
  if (iVar2 == 0) {
    _DAT_00b3f678 = 0;
  }
  _DAT_00b3f67c = iVar2;
                    /* WARNING: Could not recover jumptable at 0x006ff4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006ff570(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  void *_Dst;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  int in_ECX;
  ushort uVar10;
  uint uVar11;
  bool bVar12;
  
  if (param_1 == 0) {
    return 0;
  }
  InterlockedIncrement((LONG *)(param_1 + 4));
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
  _DAT_00b3f678 = GetCurrentThreadId();
  _DAT_00b3f67c = _DAT_00b3f67c + 1;
  sVar3 = *(short *)(in_ECX + 0x16);
  if (sVar3 == 0) {
    *(undefined2 *)(in_ECX + 0x16) = 1;
    *(undefined2 *)(in_ECX + 0x14) = 1;
    piVar6 = (int *)FUN_00401f00(4);
    *(int **)(in_ECX + 0x10) = piVar6;
    *piVar6 = param_1;
    _DAT_00b3f67c = _DAT_00b3f67c + -1;
    if (_DAT_00b3f67c == 0) {
      _DAT_00b3f678 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
    return 1;
  }
  if (*(short *)(in_ECX + 0x14) == sVar3) {
    uVar10 = sVar3 * 2 + 1;
    *(ushort *)(in_ECX + 0x16) = uVar10;
    _Dst = (void *)FUN_00401f00((uint)uVar10 * 4);
    _memcpy(_Dst,*(void **)(in_ECX + 0x10),(uint)*(ushort *)(in_ECX + 0x14) * 4);
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x10));
    *(void **)(in_ECX + 0x10) = _Dst;
  }
  *(int *)(*(int *)(in_ECX + 0x10) + (uint)*(ushort *)(in_ECX + 0x14) * 4) = param_1;
  *(short *)(in_ECX + 0x14) = *(short *)(in_ECX + 0x14) + 1;
  uVar10 = *(ushort *)(in_ECX + 0x14);
  if (uVar10 < *(ushort *)(in_ECX + 0x16)) {
    do {
      uVar11 = (uint)uVar10;
      uVar10 = uVar10 + 1;
      *(undefined4 *)(*(int *)(in_ECX + 0x10) + uVar11 * 4) = 0;
    } while (uVar10 < *(ushort *)(in_ECX + 0x16));
  }
  uVar10 = *(short *)(in_ECX + 0x14) - 1;
  uVar11 = (uint)uVar10;
  while (uVar10 != 0) {
    iVar5 = (uVar11 & 0xffff) * 4;
    pbVar7 = (byte *)FUN_00452a60();
    pbVar8 = (byte *)FUN_00452a60();
    do {
      bVar2 = *pbVar8;
      bVar12 = bVar2 < *pbVar7;
      if (bVar2 != *pbVar7) {
LAB_006ff6d4:
        iVar9 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_006ff6d9;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar8[1];
      bVar12 = bVar2 < pbVar7[1];
      if (bVar2 != pbVar7[1]) goto LAB_006ff6d4;
      pbVar8 = pbVar8 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar2 != 0);
    iVar9 = 0;
LAB_006ff6d9:
    if (iVar9 == 0) {
      FUN_006ff480(uVar11);
      _DAT_00b3f67c = _DAT_00b3f67c + -1;
      if (_DAT_00b3f67c == 0) {
        _DAT_00b3f678 = 0;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
      return 0;
    }
    if (iVar9 < 1) break;
    uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0x10) + -4 + iVar5);
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x10) + iVar5);
    puVar1[-1] = *puVar1;
    uVar11 = uVar11 + 0xffff;
    *(undefined4 *)(*(int *)(in_ECX + 0x10) + iVar5) = uVar4;
    uVar10 = (ushort)uVar11;
  }
  _DAT_00b3f67c = _DAT_00b3f67c + -1;
  if (_DAT_00b3f67c == 0) {
    _DAT_00b3f678 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006ff760(ushort param_1)

{
  short sVar1;
  undefined4 uVar2;
  void *_Dst;
  int in_ECX;
  
  if (param_1 == 0) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
  _DAT_00b3f678 = GetCurrentThreadId();
  _DAT_00b3f67c = _DAT_00b3f67c + 1;
  sVar1 = *(short *)(in_ECX + 0x16);
  *(ushort *)(in_ECX + 0x16) = param_1;
  if (sVar1 == 0) {
    uVar2 = FUN_00401f00((uint)param_1 * 4);
    *(undefined4 *)(in_ECX + 0x10) = uVar2;
    *(undefined2 *)(in_ECX + 0x14) = 0;
  }
  else {
    _Dst = (void *)FUN_00401f00((uint)param_1 * 4);
    _memcpy(_Dst,*(void **)(in_ECX + 0x10),(uint)*(ushort *)(in_ECX + 0x14) * 4);
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x10));
    *(void **)(in_ECX + 0x10) = _Dst;
  }
  _DAT_00b3f67c = _DAT_00b3f67c + -1;
  if (_DAT_00b3f67c == 0) {
    _DAT_00b3f678 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
  return 1;
}



uint FUN_006ff820(byte *param_1,int param_2)

{
  byte bVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  bool bVar5;
  
  if (param_1 == (byte *)0x0) {
    return in_EAX & 0xffffff00;
  }
  if (param_2 != 0) {
    iVar2 = FUN_00452a60();
    if (iVar2 == 0) {
      FUN_00721440(param_1);
    }
    else {
      pbVar4 = (byte *)FUN_00452a60();
      do {
        bVar1 = *param_1;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_006ff884:
          in_EAX = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_006ff889;
        }
        if (bVar1 == 0) break;
        bVar1 = param_1[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_006ff884;
        param_1 = param_1 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      in_EAX = 0;
LAB_006ff889:
      if (in_EAX != 0) goto LAB_006ff88d;
    }
    uVar3 = FUN_006ff570(param_2);
    return uVar3;
  }
LAB_006ff88d:
  return in_EAX & 0xffffff00;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_006ff8a0(int *param_1)

{
  char cVar1;
  char *_Str;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *_Dst;
  uint uVar5;
  int in_ECX;
  int *local_14 [2];
  char acStack_c [8];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_14;
  local_14[0] = param_1;
  if (param_1 != (int *)0x0) {
    iVar2 = FUN_00452a60();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)(**(code **)(*param_1 + 4))();
      _Str = (char *)*puVar3;
      if (_Str != (char *)0x0) {
        pcVar4 = _Str;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 != _Str + 1) {
          FUN_006c5d40(acStack_c,6,"ED%03d",*(undefined2 *)(in_ECX + 0x14));
          pcVar4 = _strstr(_Str,"ExtraData");
          iVar2 = 0;
          if (_Str < pcVar4) {
            iVar2 = (int)pcVar4 - (int)_Str;
          }
          pcVar4 = acStack_c;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          pcVar4 = pcVar4 + iVar2 + (1 - (int)(acStack_c + 1));
          _Dst = (char *)FUN_00401f00(pcVar4);
          FUN_006ed670(_Dst,pcVar4,_Str,iVar2);
          _Dst[iVar2] = '\0';
          _strcat_s(_Dst,(rsize_t)pcVar4,acStack_c);
          FUN_00721440(_Dst);
          FUN_00401f20(_Dst);
          param_1 = local_14[0];
        }
      }
    }
    uVar5 = FUN_006ff570(param_1);
    return uVar5;
  }
  return local_4 & 0xffffff00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006ff9c0(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  byte *pbVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  bool bVar10;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
  _DAT_00b3f678 = GetCurrentThreadId();
  _DAT_00b3f67c = _DAT_00b3f67c + 1;
  uVar2 = *(short *)(in_ECX + 0x14) - 1;
  uVar9 = (uint)uVar2;
  sVar8 = 0;
  if (-1 < (short)uVar2) {
    do {
      uVar5 = (int)(short)uVar9 + (int)sVar8 >> 1;
      pbVar3 = (byte *)FUN_00452a60();
      pbVar6 = param_1;
      do {
        bVar1 = *pbVar6;
        bVar10 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_006ffa41:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_006ffa46;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar10 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_006ffa41;
        pbVar6 = pbVar6 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_006ffa46:
      sVar7 = (short)uVar5;
      if (iVar4 == 0) {
        _DAT_00b3f67c = _DAT_00b3f67c + -1;
        if (_DAT_00b3f67c == 0) {
          _DAT_00b3f678 = 0;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
        return *(undefined4 *)(*(int *)(in_ECX + 0x10) + sVar7 * 4);
      }
      if (iVar4 < 1) {
        uVar9 = (uVar5 & 0xffff) - 1 & 0xffff;
      }
      else {
        sVar8 = sVar7 + 1;
      }
    } while (sVar8 <= (short)uVar9);
  }
  _DAT_00b3f67c = _DAT_00b3f67c + -1;
  if (_DAT_00b3f67c == 0) {
    _DAT_00b3f678 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006ffac0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  ushort uVar4;
  int in_ECX;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar6 = 0;
  if (*(short *)(in_ECX + 0x14) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
    _DAT_00b3f678 = GetCurrentThreadId();
    iVar3 = _DAT_00b3f67c;
    _DAT_00b3f67c = _DAT_00b3f67c + 1;
    if (param_1 != (byte *)0x0) {
      uVar4 = *(short *)(in_ECX + 0x14) - 1;
      uVar8 = (uint)uVar4;
      if (-1 < (short)uVar4) {
        do {
          uVar7 = (int)(short)uVar8 + (int)(short)uVar6 >> 1 & 0xffff;
          pbVar2 = (byte *)FUN_00452a60();
          pbVar5 = param_1;
          do {
            bVar1 = *pbVar5;
            bVar9 = bVar1 < *pbVar2;
            if (bVar1 != *pbVar2) {
LAB_006ffb63:
              iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_006ffb68;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar9 = bVar1 < pbVar2[1];
            if (bVar1 != pbVar2[1]) goto LAB_006ffb63;
            pbVar5 = pbVar5 + 2;
            pbVar2 = pbVar2 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_006ffb68:
          if (iVar3 == 0) {
            FUN_006ff480(uVar7);
            _DAT_00b3f67c = _DAT_00b3f67c + -1;
            if (_DAT_00b3f67c == 0) {
              _DAT_00b3f678 = 0;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
            return 1;
          }
          if (iVar3 < 1) {
            uVar8 = uVar7 - 1 & 0xffff;
          }
          else {
            uVar6 = uVar7 + 1 & 0xffff;
          }
        } while ((short)uVar6 <= (short)uVar8);
      }
      _DAT_00b3f67c = _DAT_00b3f67c + -1;
      if (_DAT_00b3f67c == 0) {
        _DAT_00b3f678 = 0;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
      return 0;
    }
    if (iVar3 == 0) {
      _DAT_00b3f678 = 0;
    }
    _DAT_00b3f67c = iVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006ffbe0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
  _DAT_00b3f678 = GetCurrentThreadId();
  iVar1 = _DAT_00b3f67c;
  _DAT_00b3f67c = _DAT_00b3f67c + 1;
  if ((ushort)param_1 < *(ushort *)(in_ECX + 0x14)) {
    FUN_006ff480(param_1);
    _DAT_00b3f67c = _DAT_00b3f67c + -1;
    if (_DAT_00b3f67c == 0) {
      _DAT_00b3f678 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
    return 1;
  }
  if (iVar1 == 0) {
    _DAT_00b3f678 = 0;
  }
  _DAT_00b3f67c = iVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ffc60(void)

{
  ushort uVar1;
  int in_ECX;
  uint uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
  _DAT_00b3f678 = GetCurrentThreadId();
  _DAT_00b3f67c = _DAT_00b3f67c + 1;
  uVar1 = *(short *)(in_ECX + 0x14) - 1;
  uVar2 = (uint)uVar1;
  while (-1 < (short)uVar1) {
    FUN_006ff480(uVar2);
    uVar2 = uVar2 - 1;
    uVar1 = (ushort)uVar2;
  }
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x10));
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined2 *)(in_ECX + 0x16) = 0;
  *(undefined2 *)(in_ECX + 0x14) = 0;
  _DAT_00b3f67c = _DAT_00b3f67c + -1;
  if (_DAT_00b3f67c == 0) {
    _DAT_00b3f678 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
  return;
}



void FUN_006ffce0(int param_1)

{
  int in_ECX;
  
  FUN_007008a0(param_1);
  FUN_00713620(in_ECX + 8);
  if (*(uint *)(param_1 + 0xd8) < 0x500000b) {
    FUN_00712a20();
    FUN_00712a20();
    return;
  }
  FUN_00712ae0();
  FUN_00712a20();
  return;
}



void FUN_006ffd30(void)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  *in_ECX = &PTR_FUN_00a7d5bc;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  *(undefined2 *)((int)in_ECX + 0x16) = 0;
  in_ECX[2] = 0;
  return;
}



void FUN_006ffd70(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c9333;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7d5bc;
  local_4 = 1;
  FUN_00401f20(in_ECX[2],uVar2);
  FUN_006ffc60();
  puVar1 = (undefined4 *)in_ECX[3];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006ffe10(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  ushort uVar2;
  
  FUN_00700750(param_1);
  uVar2 = 0;
  if (*(short *)(in_ECX + 0x14) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x10) + (uint)uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x38))(param_1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 0x14));
  }
  if (*(int **)(in_ECX + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xc) + 0x38))(param_1);
  }
  return;
}



void FUN_006ffe60(int param_1)

{
  int in_ECX;
  
  if (param_1 != 0) {
    FUN_006c61e0(*(undefined4 *)(in_ECX + 0xc));
    FUN_0075fa90(param_1);
  }
  return;
}



void FUN_006ffe90(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9360;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 != (undefined4 *)0x0) &&
     (puVar1 = *(undefined4 **)(in_ECX + 0xc), puVar1 != (undefined4 *)0x0)) {
    if (puVar1 == param_1) {
      InterlockedIncrement(param_1 + 1);
      local_4 = 0;
      FUN_0075fa90(param_1[0xd]);
      puVar1 = (undefined4 *)param_1[0xd];
      if (puVar1 != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(puVar1 + 1);
        if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        param_1[0xd] = 0;
      }
      local_4 = 0xffffffff;
      LVar3 = InterlockedDecrement(param_1 + 1);
      if (LVar3 == 0) {
        (**(code **)*param_1)(1);
      }
    }
    else {
      for (puVar1 = (undefined4 *)puVar1[0xd]; puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)puVar1[0xd]) {
        if (puVar1 == param_1) {
          if (puVar1 != (undefined4 *)0x0) {
            InterlockedIncrement(param_1 + 1);
            local_4 = 1;
            FUN_006c61e0(param_1[0xd]);
            puVar1 = (undefined4 *)param_1[0xd];
            if (puVar1 != (undefined4 *)0x0) {
              LVar3 = InterlockedDecrement(puVar1 + 1);
              if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
                (**(code **)*puVar1)(1,uVar2);
              }
              param_1[0xd] = 0;
            }
            local_4 = 0xffffffff;
            FUN_007016a0();
          }
          break;
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006fffd0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  return;
}


