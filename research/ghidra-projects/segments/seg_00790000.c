
int FUN_007902f0(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_007841c0(param_1,param_2,param_3,param_3,local_4,local_8);
  return param_3 + ((param_2 - param_1) / 0x18) * -0x18;
}



void FUN_00790350(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (*(float *)(*param_1 + 0x2c) < *(float *)(iVar1 + 0x2c)) {
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  iVar1 = *param_3;
  if (*(float *)(*param_2 + 0x2c) < *(float *)(iVar1 + 0x2c)) {
    *param_3 = *param_2;
    *param_2 = iVar1;
  }
  iVar1 = *param_2;
  if (*(float *)(*param_1 + 0x2c) < *(float *)(iVar1 + 0x2c)) {
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  return;
}



void FUN_007903b0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  while( true ) {
    iVar1 = iVar2 * 2 + 2;
    if (param_3 <= iVar1) break;
    if (*(float *)(*(int *)(param_1 + -4 + iVar1 * 4) + 0x2c) <
        *(float *)(*(int *)(param_1 + iVar1 * 4) + 0x2c)) {
      iVar1 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar1 * 4);
    iVar2 = iVar1;
  }
  if (iVar1 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar2 = param_3 + -1;
  }
  FUN_0078fbc0(param_1,iVar2,param_2,param_4,param_5);
  return;
}



void * FUN_00790420(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _DstSize = iVar1 * 4;
  if (0 < iVar1) {
    _memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}



void FUN_00790460(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}



void FUN_00790490(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}



void FUN_007904b0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 4 + param_1;
    FUN_00790350(param_1,iVar1,iVar2 * 8 + param_1,param_4);
    FUN_00790350(param_2 + iVar2 * -4,param_2,iVar2 * 4 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -4;
    FUN_00790350(param_3 + iVar2 * -8,iVar3,param_3,param_4);
    FUN_00790350(iVar1,param_2,iVar3,param_4);
    return;
  }
  FUN_00790350(param_1,param_2,param_3,param_4);
  return;
}



void FUN_00790560(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar2 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar2) {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    FUN_007903b0(param_1,iVar2,iVar3,*(undefined4 *)(param_1 + -4 + iVar1),param_3);
  }
  return;
}



void FUN_007905a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_007902f0(param_1,param_2,param_3,param_3,param_3,0);
  return;
}



void FUN_007905d0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_4;
  
  piVar5 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_007904b0(param_2,piVar5,param_3 + -1,param_4);
  piVar3 = piVar5 + 1;
  for (; param_2 < piVar5; piVar5 = piVar5 + -1) {
    if ((*(float *)(*piVar5 + 0x2c) < *(float *)(piVar5[-1] + 0x2c)) ||
       (*(float *)(piVar5[-1] + 0x2c) < *(float *)(*piVar5 + 0x2c))) break;
  }
  iVar2 = (int)param_3 + (3 - (int)piVar3);
  local_4 = piVar5;
  if (3 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
    fVar1 = *(float *)(*piVar5 + 0x2c);
    do {
      piVar4 = piVar3;
      if ((fVar1 < *(float *)(*piVar3 + 0x2c)) || (*(float *)(*piVar3 + 0x2c) < fVar1))
      goto LAB_00790710;
      if ((fVar1 < *(float *)(piVar3[1] + 0x2c)) || (*(float *)(piVar3[1] + 0x2c) < fVar1)) {
        piVar3 = piVar3 + 1;
        piVar4 = piVar3;
        goto LAB_00790710;
      }
      if ((fVar1 < *(float *)(piVar3[2] + 0x2c)) || (*(float *)(piVar3[2] + 0x2c) < fVar1)) {
        piVar3 = piVar3 + 2;
        piVar4 = piVar3;
        goto LAB_00790710;
      }
      if ((fVar1 < *(float *)(piVar3[3] + 0x2c)) || (*(float *)(piVar3[3] + 0x2c) < fVar1)) {
        piVar3 = piVar3 + 3;
        piVar4 = piVar3;
        goto LAB_00790710;
      }
      piVar3 = piVar3 + 4;
    } while ((int)piVar3 < (int)(param_3 + -3));
  }
  piVar4 = piVar3;
  if (piVar3 < param_3) {
    do {
      piVar4 = piVar3;
      if ((*(float *)(*piVar5 + 0x2c) < *(float *)(*piVar3 + 0x2c)) ||
         (*(float *)(*piVar3 + 0x2c) < *(float *)(*piVar5 + 0x2c))) break;
      piVar3 = piVar3 + 1;
      piVar4 = piVar3;
    } while (piVar3 < param_3);
  }
LAB_00790710:
  iVar2 = (int)param_3 + (3 - (int)piVar3);
  if (3 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
    do {
      fVar1 = *(float *)(*piVar3 + 0x2c);
      if (*(float *)(*piVar5 + 0x2c) <= fVar1) {
        if (*(float *)(*piVar5 + 0x2c) < fVar1) goto joined_r0x0079085f;
        iVar2 = *piVar4;
        *piVar4 = *piVar3;
        piVar4 = piVar4 + 1;
        *piVar3 = iVar2;
      }
      fVar1 = *(float *)(piVar3[1] + 0x2c);
      if (*(float *)(*piVar5 + 0x2c) <= fVar1) {
        if (*(float *)(*piVar5 + 0x2c) < fVar1) {
          piVar3 = piVar3 + 1;
          goto joined_r0x0079085f;
        }
        iVar2 = *piVar4;
        *piVar4 = piVar3[1];
        piVar4 = piVar4 + 1;
        piVar3[1] = iVar2;
      }
      fVar1 = *(float *)(piVar3[2] + 0x2c);
      if (*(float *)(*piVar5 + 0x2c) <= fVar1) {
        if (*(float *)(*piVar5 + 0x2c) < fVar1) {
          piVar3 = piVar3 + 2;
          goto joined_r0x0079085f;
        }
        iVar2 = *piVar4;
        *piVar4 = piVar3[2];
        piVar4 = piVar4 + 1;
        piVar3[2] = iVar2;
      }
      fVar1 = *(float *)(piVar3[3] + 0x2c);
      if (*(float *)(*piVar5 + 0x2c) <= fVar1) {
        if (*(float *)(*piVar5 + 0x2c) < fVar1) {
          piVar3 = piVar3 + 3;
          goto joined_r0x0079085f;
        }
        iVar2 = *piVar4;
        *piVar4 = piVar3[3];
        piVar4 = piVar4 + 1;
        piVar3[3] = iVar2;
      }
      piVar3 = piVar3 + 4;
    } while ((int)piVar3 < (int)(param_3 + -3));
  }
  for (; piVar3 < param_3; piVar3 = piVar3 + 1) {
    fVar1 = *(float *)(*piVar3 + 0x2c);
    if (*(float *)(*piVar5 + 0x2c) <= fVar1) {
      if (*(float *)(*piVar5 + 0x2c) < fVar1) break;
      iVar2 = *piVar4;
      *piVar4 = *piVar3;
      piVar4 = piVar4 + 1;
      *piVar3 = iVar2;
    }
  }
joined_r0x0079085f:
  do {
    if (local_4 <= param_2) break;
    if (*(float *)(local_4[-1] + 0x2c) <= *(float *)(*piVar5 + 0x2c)) {
      if (*(float *)(local_4[-1] + 0x2c) < *(float *)(*piVar5 + 0x2c)) break;
      iVar2 = piVar5[-1];
      piVar5 = piVar5 + -1;
      *piVar5 = local_4[-1];
      local_4[-1] = iVar2;
    }
    local_4 = local_4 + -1;
  } while( true );
  if (local_4 == param_2) {
    if (piVar3 == param_3) {
      *param_1 = piVar5;
      param_1[1] = piVar4;
      return;
    }
    if (piVar4 != piVar3) {
      iVar2 = *piVar5;
      *piVar5 = *piVar4;
      *piVar4 = iVar2;
    }
    iVar2 = *piVar5;
    *piVar5 = *piVar3;
    piVar5 = piVar5 + 1;
    *piVar3 = iVar2;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  else {
    local_4 = local_4 + -1;
    if (piVar3 == param_3) {
      piVar5 = piVar5 + -1;
      if (local_4 != piVar5) {
        iVar2 = *local_4;
        *local_4 = *piVar5;
        *piVar5 = iVar2;
      }
      iVar2 = *piVar5;
      *piVar5 = piVar4[-1];
      piVar4[-1] = iVar2;
      piVar4 = piVar4 + -1;
    }
    else {
      iVar2 = *piVar3;
      *piVar3 = *local_4;
      *local_4 = iVar2;
      piVar3 = piVar3 + 1;
    }
  }
  goto LAB_00790710;
}



void FUN_00790930(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if ((param_1 != param_2) && (piVar4 = param_1 + 1, piVar4 != param_2)) {
    piVar3 = param_1 + 2;
    do {
      piVar1 = piVar4;
      piVar2 = param_1;
      if (*(float *)(*piVar4 + 0x2c) <= *(float *)(*param_1 + 0x2c)) {
        do {
          piVar2 = piVar1;
          piVar1 = piVar2 + -1;
        } while (*(float *)(piVar2[-1] + 0x2c) < *(float *)(*piVar4 + 0x2c));
      }
      if ((piVar2 != piVar4) && (piVar4 != piVar3)) {
        FUN_0078fc20(piVar2,piVar4,piVar3,0,0);
      }
      piVar4 = piVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (piVar4 != param_2);
  }
  return;
}



undefined4 FUN_007909d0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 local_28 [4];
  undefined4 local_24;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cbbb4;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x5c,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0078ec20(local_28);
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar3 = FUN_00786d60(uVar3);
    if (0xf < local_10) {
      FUN_00401f20(local_24);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



int FUN_00790a70(int param_1,int param_2,undefined4 param_3)

{
  FUN_007848e0(param_1,param_2,param_3);
  return param_1 + param_2 * 0x18;
}



void FUN_00790ab0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  for (param_2 = param_2 - (int)param_1; 1 < param_2 >> 2; param_2 = param_2 + -4) {
    uVar1 = *(undefined4 *)((int)param_1 + param_2 + -4);
    *(undefined4 *)((int)param_1 + param_2 + -4) = *param_1;
    FUN_007903b0(param_1,0,param_2 + -4 >> 2,uVar1,param_3);
  }
  return;
}



void FUN_00790b00(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_8 [8];
  
  uVar2 = DAT_00b429e4;
  if (DAT_00b429e4 < DAT_00b429e0) {
    FUN_00984d5e();
  }
  uVar1 = DAT_00b429e0;
  if (DAT_00b429e4 < DAT_00b429e0) {
    FUN_00984d5e();
  }
  FUN_00439050(local_8,&DAT_00b429dc,uVar1,&DAT_00b429dc,uVar2);
  return;
}



undefined4 * FUN_00790b60(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return param_1 + param_2;
}



void FUN_00790b90(void)

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



void FUN_00790c10(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_00790ca7:
      if (1 < iVar1) {
        FUN_00790930(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_00790560(param_1,param_2,param_4,0,0);
        }
        FUN_00790ab0(param_1,param_2,param_4);
        return;
      }
      goto LAB_00790ca7;
    }
    FUN_007905d0(&local_8,param_1,param_2,param_4);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffffcU) < (int)(param_2 - local_4 & 0xfffffffcU)) {
      FUN_00790c10(param_1,local_8,param_3,param_4);
      param_1 = iVar1;
    }
    else {
      FUN_00790c10(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}



void FUN_00790d00(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cbbe6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x18),uVar2);
  *(undefined4 *)(in_ECX + 0x18) = 0;
  iVar3 = 0;
  for (uVar4 = 0;
      (*(int *)(in_ECX + 0xc) != 0 &&
      (uVar4 < (uint)((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0xc))); uVar4 = uVar4 + 1
      ) {
    if ((*(int *)(in_ECX + 0xc) == 0) ||
       ((uint)((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0xc) <= uVar4)) {
      FUN_00984d5e();
    }
    iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + 8 + iVar3);
    if (iVar1 != 0) {
      FUN_00790d00();
      FUN_00401f20(iVar1,uVar2);
    }
    if ((*(int *)(in_ECX + 0xc) == 0) ||
       ((uint)((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0xc) <= uVar4)) {
      FUN_00984d5e();
    }
    *(undefined4 *)(*(int *)(in_ECX + 0xc) + 8 + iVar3) = 0;
    iVar3 = iVar3 + 0xc;
  }
  if (*(int *)(in_ECX + 0x34) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x34),uVar2);
  }
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0xc),uVar2);
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00790e40(uint param_1)

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
    uVar1 = FUN_00790b90();
  }
  iVar2 = FUN_0078fb60(param_1,uVar1);
  *(int *)(in_ECX + 4) = iVar2;
  *(int *)(in_ECX + 8) = iVar2;
  iVar2 = iVar2 + param_1 * 4;
  *(int *)(in_ECX + 0xc) = iVar2;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}



void FUN_00790e90(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int extraout_ECX;
  uint uVar6;
  int *unaff_FS_OFFSET;
  uint uStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009cbc10;
  local_10 = *unaff_FS_OFFSET;
  uStack_30 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  *unaff_FS_OFFSET = (int)&local_10;
  local_20 = *param_4;
  local_1c = param_4[1];
  local_18 = param_4[2];
  iVar3 = *(int *)(in_ECX + 4);
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
    puVar1 = &uStack_30;
    if (0x15555555U - iVar2 < param_3) {
      FUN_00790b90();
      iVar3 = extraout_ECX;
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
      if (0x15555555 - (uVar6 >> 1) < uVar6) {
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
      iVar2 = FUN_0078faa0(uVar6,0);
      local_8 = 0;
      uVar4 = FUN_006f11a0(*(undefined4 *)(in_ECX + 4),param_2,iVar2);
      uVar4 = FUN_006f1380(uVar4,param_3,&local_20);
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
      *(uint *)(in_ECX + 0xc) = iVar2 + uVar6 * 0xc;
      *(uint *)(in_ECX + 8) = iVar2 + (param_3 + iVar5) * 0xc;
      *(int *)(in_ECX + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar3 = *(int *)(in_ECX + 8);
    if ((uint)((iVar3 - param_2) / 0xc) < param_3) {
      FUN_006f15a0(param_2,iVar3,param_3 * 0xc + param_2);
      local_8 = 2;
      FUN_006f1380(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2) / 0xc,&local_20);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0xc;
      FUN_00790460(param_2,*(int *)(in_ECX + 8) + param_3 * -0xc,&local_20);
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar2 = iVar3 + param_3 * -0xc;
    uVar4 = FUN_006f15a0(iVar2,iVar3,iVar3);
    *(undefined4 *)(in_ECX + 8) = uVar4;
    FUN_0079aaa0(param_2,iVar2,iVar3);
    FUN_00790460(param_2,param_3 * 0xc + param_2,&local_20);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_00791140(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int extraout_ECX;
  uint uVar6;
  int *unaff_FS_OFFSET;
  uint uStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009cbc30;
  local_10 = *unaff_FS_OFFSET;
  uStack_3c = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  *unaff_FS_OFFSET = (int)&local_10;
  local_2c = *param_4;
  local_28 = param_4[1];
  local_24 = param_4[2];
  local_1c = param_4[4];
  local_20 = param_4[3];
  iVar3 = *(int *)(in_ECX + 4);
  local_18 = param_4[5];
  if (iVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)(in_ECX + 0xc) - iVar3) / 0x18;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar3) / 0x18;
    }
    puVar1 = &uStack_3c;
    if (0xaaaaaaaU - iVar2 < param_3) {
      FUN_00790b90();
      iVar3 = extraout_ECX;
      puVar1 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar3) / 0x18;
    }
    if (uVar6 < iVar2 + param_3) {
      if (0xaaaaaaa - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_ECX + 8) - iVar3) / 0x18;
      }
      if (uVar6 < iVar3 + param_3) {
        iVar3 = FUN_00783fe0();
        uVar6 = iVar3 + param_3;
      }
      iVar2 = FUN_0078fb00(uVar6,0);
      local_8 = 0;
      uVar4 = FUN_007847f0(*(undefined4 *)(in_ECX + 4),param_2,iVar2);
      uVar4 = FUN_00790a70(uVar4,param_3,&local_2c);
      FUN_007847f0(param_2,*(undefined4 *)(in_ECX + 8),uVar4);
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (*(int *)(in_ECX + 8) - iVar3) / 0x18;
      }
      if (iVar3 != 0) {
        FUN_00401f20(iVar3);
      }
      *(uint *)(in_ECX + 0xc) = iVar2 + uVar6 * 0x18;
      *(uint *)(in_ECX + 8) = iVar2 + (param_3 + iVar5) * 0x18;
      *(int *)(in_ECX + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar3 = *(int *)(in_ECX + 8);
    if ((uint)((iVar3 - param_2) / 0x18) < param_3) {
      FUN_007849c0(param_2,iVar3,param_3 * 0x18 + param_2);
      local_8 = 2;
      FUN_00790a70(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2) / 0x18,&local_2c)
      ;
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x18;
      FUN_00784140(param_2,*(int *)(in_ECX + 8) + param_3 * -0x18,&local_2c);
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar2 = iVar3 + param_3 * -0x18;
    uVar4 = FUN_007849c0(iVar2,iVar3,iVar3);
    *(undefined4 *)(in_ECX + 8) = uVar4;
    FUN_007905a0(param_2,iVar2,iVar3);
    FUN_00784140(param_2,param_3 * 0x18 + param_2,&local_2c);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_00791410(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < *(uint *)(param_1 + 4)) {
    FUN_00984d5e();
  }
  uVar2 = *(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 8) < uVar2) {
    FUN_00984d5e();
  }
  FUN_00790c10(uVar2,uVar1,(int)(uVar1 - uVar2) >> 2,0);
  return;
}



void FUN_00791460(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(in_ECX + 4);
  if (uVar1 != 0) {
    iVar2 = *(uint *)(in_ECX + 8) - uVar1;
    iVar3 = iVar2 >> 0x1f;
    if (iVar2 / 0xc + iVar3 != iVar3) {
      if (*(uint *)(in_ECX + 8) < uVar1) {
        FUN_00984d5e();
      }
      if ((param_2 == 0) || (param_2 != in_ECX)) {
        FUN_00984d5e();
      }
      iVar3 = (int)(param_3 - uVar1) / 0xc;
      goto LAB_007914c1;
    }
  }
  iVar3 = 0;
LAB_007914c1:
  FUN_00790e90(param_2,param_3,1,param_4);
  uVar1 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar1) {
    FUN_00984d5e();
  }
  uVar1 = uVar1 + iVar3 * 0xc;
  if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
    FUN_00984d5e();
  }
  param_1[1] = uVar1;
  *param_1 = in_ECX;
  return;
}



void FUN_00791510(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(in_ECX + 4);
  if (uVar1 != 0) {
    iVar2 = *(uint *)(in_ECX + 8) - uVar1;
    iVar3 = iVar2 >> 0x1f;
    if (iVar2 / 0x18 + iVar3 != iVar3) {
      if (*(uint *)(in_ECX + 8) < uVar1) {
        FUN_00984d5e();
      }
      if ((param_2 == 0) || (param_2 != in_ECX)) {
        FUN_00984d5e();
      }
      iVar3 = (int)(param_3 - uVar1) / 0x18;
      goto LAB_00791573;
    }
  }
  iVar3 = 0;
LAB_00791573:
  FUN_00791140(param_2,param_3,1,param_4);
  uVar1 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar1) {
    FUN_00984d5e();
  }
  uVar1 = uVar1 + iVar3 * 0x18;
  if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
    FUN_00984d5e();
  }
  param_1[1] = uVar1;
  *param_1 = in_ECX;
  return;
}



void FUN_007915c0(undefined4 param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_c [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_c;
  *in_ECX = param_1;
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0xffffffff;
  *(undefined2 *)(in_ECX + 8) = 0;
  in_ECX[9] = 0xffffffff;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void FUN_00791630(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint local_8 [2];
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)(in_ECX + 8) - uVar1) / 0xc) <
      (uint)((int)(*(int *)(in_ECX + 0xc) - uVar1) / 0xc))) {
    iVar2 = *(int *)(in_ECX + 8);
    local_8[0] = local_8[0] & 0xffffff00;
    FUN_006f1290(iVar2,1,param_1);
    *(int *)(in_ECX + 8) = iVar2 + 0xc;
    return;
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (uVar3 < uVar1) {
    FUN_00984d5e();
  }
  FUN_00791460(local_8,in_ECX,uVar3,param_1);
  return;
}



void FUN_007916d0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint local_8 [2];
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)(in_ECX + 8) - uVar1) / 0x18) <
      (uint)((int)(*(int *)(in_ECX + 0xc) - uVar1) / 0x18))) {
    iVar2 = *(int *)(in_ECX + 8);
    local_8[0] = local_8[0] & 0xffffff00;
    FUN_007848e0(iVar2,1,param_1);
    *(int *)(in_ECX + 8) = iVar2 + 0x18;
    return;
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (uVar3 < uVar1) {
    FUN_00984d5e();
  }
  FUN_00791510(local_8,in_ECX,uVar3,param_1);
  return;
}



void FUN_00791770(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int in_ECX;
  undefined1 local_8 [8];
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)(in_ECX + 8) - uVar1) >> 2) <
      (uint)((int)(*(int *)(in_ECX + 0xc) - uVar1) >> 2))) {
    puVar2 = *(undefined4 **)(in_ECX + 8);
    *puVar2 = *param_1;
    *(undefined4 **)(in_ECX + 8) = puVar2 + 1;
    return;
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (uVar3 < uVar1) {
    FUN_00984d5e();
  }
  FUN_007a3620(local_8,in_ECX,uVar3,param_1);
  return;
}



void FUN_007917e0(undefined4 param_1)

{
  int in_ECX;
  uint uVar1;
  undefined1 local_4 [4];
  
  FUN_00791770(local_4);
  for (uVar1 = 0;
      (*(int *)(in_ECX + 0xc) != 0 &&
      (uVar1 < (uint)((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0xc))); uVar1 = uVar1 + 1
      ) {
    if ((*(int *)(in_ECX + 0xc) == 0) ||
       ((uint)((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0xc) <= uVar1)) {
      FUN_00984d5e();
    }
    FUN_007917e0(param_1);
  }
  return;
}



void FUN_00791870(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int local_c;
  int local_8 [2];
  
  uVar4 = DAT_00b429f4;
  if (DAT_00b429f4 < DAT_00b429f0) {
    FUN_00984d5e();
  }
  uVar2 = DAT_00b429f0;
  if (DAT_00b429f4 < DAT_00b429f0) {
    FUN_00984d5e();
  }
  FUN_00439050(local_8,&DAT_00b429ec,uVar2,&DAT_00b429ec,uVar4);
  uVar4 = DAT_00b429d4;
  if (DAT_00b429d4 < DAT_00b429d0) {
    FUN_00984d5e();
  }
  uVar2 = DAT_00b429d0;
  if (DAT_00b429d4 < DAT_00b429d0) {
    FUN_00984d5e();
  }
  FUN_00439050(local_8,&DAT_00b429cc,uVar2,&DAT_00b429cc,uVar4);
  iVar3 = 0;
  uVar4 = 0;
  local_c = 0;
  while( true ) {
    if ((*(int *)(DAT_00b429b8 + 0x14) == 0) ||
       ((uint)((*(int *)(DAT_00b429b8 + 0x18) - *(int *)(DAT_00b429b8 + 0x14)) / 0x54) <= uVar4))
    break;
    piVar1 = (int *)(DAT_00b429b8 + 0x14);
    if ((*(int *)(DAT_00b429b8 + 0x14) == 0) ||
       ((uint)((*(int *)(DAT_00b429b8 + 0x18) - *(int *)(DAT_00b429b8 + 0x14)) / 0x54) <= uVar4)) {
      FUN_00984d5e();
    }
    local_8[0] = iVar3;
    if (*(char *)(local_c + *piVar1) == '\0') {
      FUN_00791770(local_8);
    }
    else {
      FUN_00791770(local_8);
    }
    local_8[0] = iVar3 + 1;
    FUN_00791770(local_8);
    local_c = local_c + 0x54;
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 2;
  }
  return;
}



void FUN_007919d0(undefined4 param_1,float param_2,float param_3,float *param_4,float *param_5,
                 undefined4 param_6,undefined4 param_7,undefined *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int extraout_ECX;
  int iVar11;
  uint uVar12;
  int *unaff_FS_OFFSET;
  float10 fVar13;
  undefined4 uVar14;
  undefined *puVar15;
  undefined4 uVar16;
  uint local_3c;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_18 [12];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cbc8b;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffac;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*(int *)(DAT_00b429b8 + 0x14) == 0) ||
     (iVar10 = *(int *)(DAT_00b429b8 + 0x18) - *(int *)(DAT_00b429b8 + 0x14),
     iVar11 = iVar10 >> 0x1f, iVar10 / 0x54 + iVar11 == iVar11)) goto LAB_00791e61;
  if ((DAT_00b429f0 == 0) ||
     ((DAT_00b429f4 - DAT_00b429f0 >> 2 == 0 ||
      (cVar4 = FUN_0078f600(param_3,param_2), cVar4 == '\0')))) {
    if (DAT_00b429d0 == 0) goto LAB_00791e61;
    uVar12 = DAT_00b429d4 - DAT_00b429d0 >> 2;
    if (uVar12 < 2) {
      if (uVar12 == 0) goto LAB_00791e61;
      piVar6 = (int *)FUN_0054f7a0(0);
      iVar11 = *piVar6;
    }
    else {
      fVar13 = (float10)FUN_0078ea00(0,0x49742400);
      if (DAT_00b429d0 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = DAT_00b429d4 - DAT_00b429d0 >> 2;
      }
      local_3c = (uint)(longlong)ROUND((float)fVar13);
      if ((DAT_00b429d0 == 0) || ((uint)(DAT_00b429d4 - DAT_00b429d0 >> 2) <= local_3c % uVar12)) {
        FUN_00984d5e(uVar5);
      }
      iVar11 = *(int *)(DAT_00b429d0 + (local_3c % uVar12) * 4);
    }
  }
  else {
    local_3c = 0;
    if (DAT_00b429f0 == 0) {
LAB_00791add:
      FUN_00984d5e(uVar5);
    }
    else {
      uVar12 = DAT_00b429f4 - DAT_00b429f0 >> 2;
      if (1 < uVar12) {
        fVar13 = (float10)FUN_0078ea00(0,0x47c35000);
        local_3c = (uint)(longlong)ROUND(fVar13);
        local_3c = local_3c % uVar12;
      }
      if ((DAT_00b429f0 == 0) || ((uint)(DAT_00b429f4 - DAT_00b429f0 >> 2) <= local_3c))
      goto LAB_00791add;
    }
    iVar11 = *(int *)(DAT_00b429f0 + local_3c * 4);
  }
  if (*(int *)(DAT_00b429b8 + 0xc) == 1) {
    puVar15 = &DAT_00b429fc;
LAB_00791bce:
    cVar4 = FUN_0078fd30(param_1,iVar11 / 2,puVar15);
    if (cVar4 == '\0') goto LAB_00791e61;
  }
  else {
    puVar15 = param_8;
    if (*(int *)(DAT_00b429b8 + 0xc) == 2) goto LAB_00791bce;
  }
  param_8 = (undefined *)0x3f800000;
  if (*DAT_00b429b8 != '\0') {
    fVar13 = (float10)FUN_0078fa00(param_3);
    param_3 = param_2 * (1.0 - (float)fVar13) + (float)fVar13;
    param_3 = param_3 * param_3 * param_3;
    param_8 = (undefined *)(param_3 + (1.0 - *(float *)(extraout_ECX + 4)) * (1.0 - param_3));
  }
  param_3 = (float)FUN_00401f00(0x4c);
  local_4 = 0;
  if (param_3 == 0.0) {
    iVar10 = 0;
  }
  else {
    uVar14 = param_6;
    uVar16 = param_7;
    FUN_0078ea00(0,0x461c4000);
    iVar10 = FUN_009828c0(uVar14,uVar16);
    iVar10 = iVar10 % *(int *)(DAT_00b429b8 + 0x38);
    uVar7 = FUN_009828c0(iVar10);
    iVar10 = FUN_007a7d10(param_1,uVar7,iVar10,uVar14,uVar16);
  }
  local_4 = 0xffffffff;
  param_3 = (float)iVar10;
  FUN_00791770(&param_3);
  if (*(int *)(DAT_00b429b8 + 0xc) == 1) {
    FUN_00791770(&param_3);
  }
  iVar8 = FUN_0078fa40(iVar11 / 2);
  *(char *)(iVar10 + 0x40) = (char)iVar11;
  param_3 = (float)(((int)(param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1])
                    >> 1) + 0x1fc00000);
  pfVar9 = param_5;
  if (0.0001 <= param_3) {
    pfVar9 = (float *)FUN_0078f250(local_18,param_5,param_4,*(undefined4 *)(iVar8 + 0x10));
  }
  fVar1 = *pfVar9;
  fVar2 = pfVar9[1];
  fVar3 = pfVar9[2];
  FUN_0078ed70();
  *(float *)(iVar10 + 0x1c) = fVar1;
  *(float *)(iVar10 + 0x20) = fVar2;
  *(float *)(iVar10 + 0x24) = fVar3;
  *(float *)(iVar10 + 0x28) = fVar1;
  *(float *)(iVar10 + 0x2c) = fVar2;
  *(float *)(iVar10 + 0x30) = fVar3;
  FUN_0078ed70();
  *(float *)(iVar10 + 0x34) = fVar3 * fVar2 - fVar3 * fVar2;
  *(float *)(iVar10 + 0x38) = fVar1 * fVar3 - fVar1 * fVar3;
  *(float *)(iVar10 + 0x3c) = fVar1 * fVar2 - fVar1 * fVar2;
  fVar13 = (float10)FUN_0078ea00(-*(float *)(iVar8 + 0x10),*(undefined4 *)(iVar8 + 0x10));
  local_24 = (float)fVar13;
  param_3 = local_24 + *(float *)(iVar8 + 8);
  local_1c = *(float *)(iVar8 + 0xc) + local_24;
  local_24 = local_24 + *(float *)(iVar8 + 4);
  local_20 = param_3;
  FUN_007a7f10(&local_24,1);
LAB_00791e61:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00791e80(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int local_28;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  float local_4;
  
  fVar5 = _DAT_00b2b714;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar6 = _rand();
    local_28 = 0;
    fVar4 = _DAT_00b2b714 / (float)*(int *)(param_1 + 0x28);
    if (0 < *(int *)(param_1 + 0x28)) {
      do {
        fVar1 = fVar4 * *(float *)(param_1 + 0x2c);
        iVar7 = _rand();
        local_18 = (fVar1 + (fVar4 - fVar1) * ((float)iVar7 / 32767.0)) * (float)local_28 +
                   (fVar5 - 0.0) * ((float)iVar6 / 32767.0) + 0.0;
        if (_DAT_00b2b714 < local_18) {
          local_18 = local_18 - _DAT_00b2b714;
        }
        local_10 = *(undefined4 *)(param_1 + 0x38);
        local_8 = *(undefined4 *)(param_1 + 0x4c);
        fVar3 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x34);
        fVar1 = *(float *)(param_1 + 0x34);
        fVar2 = *(float *)(param_1 + 0x30);
        iVar7 = _rand();
        local_14 = (fVar3 + ((fVar1 + fVar2) - fVar3) * ((float)iVar7 / 32767.0)) / 57.29578;
        fVar3 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x48);
        fVar1 = *(float *)(param_1 + 0x48);
        fVar2 = *(float *)(param_1 + 0x44);
        iVar7 = _rand();
        local_c = fVar3 + ((fVar1 + fVar2) - fVar3) * ((float)iVar7 / 32767.0);
        fVar3 = *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x40);
        fVar1 = *(float *)(param_1 + 0x40);
        fVar2 = *(float *)(param_1 + 0x3c);
        iVar7 = _rand();
        local_4 = fVar3 + ((fVar1 + fVar2) - fVar3) * ((float)iVar7 / 32767.0);
        FUN_007916d0(&local_18);
        local_28 = local_28 + 1;
      } while (local_28 < *(int *)(param_1 + 0x28));
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007920a0(int *param_1,float param_2,uint param_3,float *param_4,undefined4 param_5,
                 float *param_6,float *param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 in_ECX;
  int iVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float10 fVar10;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined8 local_e8;
  float local_e0;
  double local_d8;
  float local_d0;
  double local_c8;
  float local_c0;
  double local_b8;
  float local_b0;
  double local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_84 [11];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  double local_10;
  
  if ((DAT_00b429e0 == 0) || ((uint)(DAT_00b429e4 - DAT_00b429e0 >> 2) <= param_3)) {
    FUN_00984d5e();
  }
  iVar6 = *(int *)(DAT_00b429e0 + param_3 * 4);
  local_98 = 0.0;
  local_9c = 0.0;
  local_a0 = 0.0;
  local_8c = 0.0;
  local_90 = 0.0;
  local_94 = 0.0;
  local_84[0] = 1.0;
  local_84[4] = 1.0;
  local_84[8] = 1.0;
  local_3c = 0x3f800000;
  local_2c = 0x3f800000;
  local_1c = 0x3f800000;
  local_84[1] = 0.0;
  local_84[2] = 0.0;
  local_84[3] = 0.0;
  local_84[5] = 0.0;
  local_84[6] = 0.0;
  local_84[7] = 0.0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_44 = 0.0;
  local_48 = 0.0;
  local_4c = 0.0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  fVar10 = (float10)FUN_00784210(param_5);
  local_a8._0_4_ = (float)(fVar10 * (float10)param_2);
  fVar7 = local_a8._0_4_ / (float)*(int *)(iVar6 + 4);
  if (fVar7 <= 0.01) {
    fVar7 = 0.01;
  }
  fVar10 = (float10)FUN_0078ea00(0xc3340000,0x43340000);
  local_a8 = (double)CONCAT44(local_a8._4_4_,(float)fVar10);
  fVar8 = param_7[1];
  fVar1 = *param_7;
  fVar2 = param_7[2];
  local_94 = *param_4;
  local_90 = param_4[1];
  local_8c = param_4[2];
  local_f4 = param_6[2] * fVar2 + *param_6 * fVar1 + param_6[1] * fVar8;
  local_f0 = param_6[5] * fVar2 + param_6[4] * fVar8 + param_6[3] * fVar1;
  fVar3 = param_6[6];
  fVar4 = param_6[7];
  fVar5 = param_6[8];
  pfVar9 = local_84;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar9 = *param_6;
    param_6 = param_6 + 1;
    pfVar9 = pfVar9 + 1;
  }
  local_ec = fVar2 * fVar5 + fVar3 * fVar1 + fVar4 * fVar8;
  FUN_0078f050((float)fVar10,local_f4,local_f0,local_ec);
  FUN_0078eec0(0x42700000);
  local_a0 = local_84[6] * _DAT_00b2b720 + local_84[3] * _DAT_00b2b71c + local_84[0] * _DAT_00b2b718
  ;
  local_9c = local_84[7] * _DAT_00b2b720 + local_84[4] * _DAT_00b2b71c + local_84[1] * _DAT_00b2b718
  ;
  local_98 = _DAT_00b2b720 * local_84[8] + local_84[2] * _DAT_00b2b718 + local_84[5] * _DAT_00b2b71c
  ;
  local_b0 = fVar7 * local_98;
  local_4c = local_a0 * fVar7 + local_94;
  local_48 = local_9c * fVar7 + local_90;
  local_d0 = local_b0 + local_8c;
  local_c8 = (double)local_4c;
  local_f4 = local_4c - local_94;
  local_b8 = (double)local_48;
  local_f0 = local_48 - local_90;
  local_d8 = (double)local_d0;
  local_ec = local_d0 - local_8c;
  local_10 = (double)local_f0;
  local_a8 = (double)local_f4;
  local_e8 = (double)local_ec;
  local_44 = local_d0;
  fVar10 = (float10)FUN_00982c30();
  local_ec = 1.0 / (float)fVar10;
  local_f4 = (float)local_a8 * local_ec;
  local_f0 = (float)local_10 * local_ec;
  local_ec = local_ec * (float)local_e8;
  local_e0 = local_ec;
  fVar7 = local_f4;
  fVar8 = local_f0;
  if ((param_1 != (int *)0x0) && (param_1[7] != 0)) {
    iVar6 = param_1[6];
    local_e8._0_4_ = *(float *)(iVar6 + 0xc);
    local_e8._4_4_ = *(float *)(iVar6 + 0x10);
    local_e0 = *(float *)(iVar6 + 0x14);
    if (*(int *)(DAT_00b429b8 + 0x2c) != 0) {
      iVar6 = 0;
      do {
        if (*(int *)(DAT_00b429b8 + 0x2c) <= iVar6) {
          if (param_1 != (int *)0x0) {
            iVar6 = param_1[6];
            local_e8._0_4_ = *(float *)(iVar6 + 0xc);
            local_e8._4_4_ = *(float *)(iVar6 + 0x10);
            local_e0 = *(float *)(iVar6 + 0x14);
          }
          break;
        }
        param_1 = (int *)*param_1;
        iVar6 = iVar6 + 1;
      } while (param_1 != (int *)0x0);
    }
    local_c0 = (float)local_d8 - local_e0;
    local_e0 = local_c0;
    fVar7 = (float)local_c8 - (float)local_e8;
    fVar8 = (float)local_b8 - local_e8._4_4_;
  }
  local_b8 = (double)fVar8;
  local_e8 = (double)CONCAT44(fVar8,fVar7);
  local_d8 = (double)fVar7;
  local_c8 = (double)local_e0;
  fVar10 = (float10)FUN_00982c30();
  local_e0 = 1.0 / (float)fVar10;
  local_e8 = (double)CONCAT44((float)local_b8 * local_e0,(float)local_d8 * local_e0);
  local_e0 = local_e0 * (float)local_c8;
  FUN_007919d0(&local_4c,param_5,in_ECX,&local_f4,&local_e8,param_9,param_10,param_8);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007925b0(int param_1,float *param_2,uint param_3,float *param_4,float param_5,float param_6
                 ,float *param_7,undefined4 param_8,float *param_9,undefined4 param_10,
                 float param_11,undefined4 param_12,float param_13)

{
  rsize_t _DstSize;
  short sVar1;
  int *piVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  void *pvVar11;
  char cVar12;
  int iVar13;
  void *pvVar14;
  float *pfVar15;
  float *pfVar16;
  undefined4 *puVar17;
  float *in_ECX;
  int iVar18;
  short sVar19;
  short sVar20;
  int iVar21;
  float fVar22;
  float *pfVar23;
  float *pfVar24;
  void *_Dst;
  short sVar25;
  float fVar26;
  float *pfVar27;
  int *unaff_FS_OFFSET;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  float fStack_12c;
  float *pfStack_128;
  float *local_124;
  float local_120;
  float *pfStack_11c;
  float *local_118;
  float *pfStack_114;
  float local_dc;
  float local_d8;
  float *local_d0;
  int local_b8;
  float local_b4;
  float local_94;
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
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cbcda;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar12 = FUN_00799ea0();
  if ((cVar12 == '\0') || (iVar13 = FUN_00780f70(), (int)param_3 < iVar13)) {
    bVar10 = false;
    bVar3 = false;
  }
  else {
    bVar3 = true;
    bVar10 = true;
  }
  if (param_3 == DAT_00b2b708) {
    DAT_00b429c0 = DAT_00b429c0 + 1;
  }
  if (param_3 == 0) {
    FUN_00791870();
  }
  if ((DAT_00b429e0 == 0) || ((uint)(DAT_00b429e4 - DAT_00b429e0 >> 2) <= param_3)) {
    FUN_00984d5e();
  }
  piVar2 = *(int **)(DAT_00b429e0 + param_3 * 4);
  if (!bVar3) {
    in_ECX[9] = (float)(uint)*(ushort *)((int)param_9 + 0x22);
  }
  in_ECX[1] = param_5;
  if (!bVar3) {
    FUN_00791e80();
  }
  fVar28 = (float10)FUN_00784210();
  fVar22 = (float)(fVar28 * (float10)(float)param_2);
  FUN_0078ea00();
  FUN_00784210();
  fVar28 = (float10)FUN_00784210();
  local_7c = (float)fVar28;
  fVar28 = (float10)FUN_00784210();
  local_94 = (float)(fVar28 * (float10)(float)param_2);
  fVar28 = (float10)FUN_00784210();
  local_80 = (float)fVar28;
  *(short *)(in_ECX + 8) = (short)*piVar2;
  iVar13 = 0;
  if (in_ECX[3] != 0.0) {
    iVar13 = ((int)in_ECX[4] - (int)in_ECX[3]) / 0xc;
  }
  local_84 = (float)piVar2[8];
  if ((param_1 + iVar13 & 1U) != 0) {
    local_84 = -local_84;
  }
  if (*(char *)((int)piVar2 + 0x1d) == '\0') {
    local_88 = (fVar22 / (float)param_2) * (float)piVar2[6];
  }
  else {
    local_88 = (float)piVar2[6];
  }
  local_8c = (float)piVar2[5];
  if ((char)piVar2[7] == '\0') {
    local_8c = local_8c * local_94 * _DAT_00b2b714;
  }
  fVar28 = (float10)FUN_00784210();
  if ((0.0 < param_13) && (param_13 * 0.85 < (float)(fVar28 * (float10)local_94))) {
    local_94 = param_13 * 0.85;
  }
  fVar26 = (float)(piVar2[1] + 1);
  in_ECX[7] = fVar26;
  if (1 < (int)fVar26) {
    pvVar14 = (void *)FUN_00401f00();
    local_4 = 0;
    if (pvVar14 == (void *)0x0) {
      pvVar14 = (void *)0x0;
    }
    else {
      pfStack_114 = (float *)0x792875;
      _vector_constructor_iterator_(pvVar14,0x48,(int)fVar26,FUN_0078f3e0);
    }
    local_4 = 0xffffffff;
    in_ECX[6] = (float)pvVar14;
    if (!bVar10) {
      iVar13 = FUN_00401f00();
      sVar1 = *(short *)((int)param_9 + 0x22);
      iVar18 = 0;
      local_b4 = 0.0;
      sVar20 = 0;
      if (in_ECX[7] != 1.4013e-45 && -1 < (int)in_ECX[7] + -1) {
        do {
          iVar21 = 0;
          sVar25 = sVar20;
          if (*piVar2 != -1 && -1 < *piVar2 + 1) {
            do {
              sVar19 = sVar1 + sVar25;
              *(short *)(iVar13 + iVar18 * 2) = (short)*piVar2 + sVar19 + 1;
              *(short *)(iVar13 + (iVar18 + 1) * 2) = sVar19;
              iVar21 = iVar21 + 1;
              iVar18 = iVar18 + 2;
              sVar25 = sVar25 + 1;
            } while (iVar21 < *piVar2 + 1);
          }
          local_b4 = (float)((int)local_b4 + 1);
          sVar20 = sVar1 + sVar20;
          *(short *)(iVar13 + iVar18 * 2) = (short)*piVar2 + sVar20 + 1;
          *(short *)(iVar13 + (iVar18 + 1) * 2) = (short)*piVar2 + sVar20 + 1;
          iVar18 = iVar18 + 2;
          sVar20 = sVar25;
        } while ((int)local_b4 < (int)in_ECX[7] + -1);
      }
      FUN_00796100();
      *(short *)((int)param_9 + 0x26) = *(short *)((int)param_9 + 0x26) + 1;
    }
    local_d0 = (float *)in_ECX[6];
    local_d0[3] = *param_4;
    local_d0[4] = param_4[1];
    local_d0[5] = param_4[2];
    FUN_00784370();
    FUN_00784370();
    pfVar24 = local_d0 + 7;
    pfVar15 = pfVar24;
    for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
      *pfVar15 = *param_7;
      param_7 = param_7 + 1;
      pfVar15 = pfVar15 + 1;
    }
    pfStack_114 = (float *)0x792a71;
    FUN_0078f050();
    FUN_0078ef60();
    fVar7 = local_d0[0xb] * _DAT_00b2b71c;
    fVar6 = local_d0[8] * _DAT_00b2b718;
    fVar26 = local_d0[0xe] * _DAT_00b2b720;
    fVar8 = local_d0[0xc] * _DAT_00b2b71c;
    fVar5 = local_d0[9] * _DAT_00b2b718;
    fVar4 = _DAT_00b2b720 * local_d0[0xf];
    *local_d0 = _DAT_00b2b71c * local_d0[10] + _DAT_00b2b718 * *pfVar24 +
                _DAT_00b2b720 * local_d0[0xd];
    local_d0[1] = fVar26 + fVar6 + fVar7;
    local_d0[2] = fVar4 + fVar8 + fVar5;
    fVar28 = (float10)FUN_00784210();
    local_d0[6] = (float)(fVar28 * (float10)local_94);
    fVar29 = (float10)FUN_00784210();
    fVar28 = (float10)local_80;
    FUN_0078fcc0();
    FUN_00982c30();
    FUN_00784210();
    local_54 = 0x3f800000;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_44 = 0x3f800000;
    local_34 = 0x3f800000;
    pfStack_114 = (float *)0x792ce1;
    FUN_0078f160();
    pfVar15 = (float *)FUN_0078edd0();
    pfVar16 = pfVar24;
    for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
      *pfVar16 = *pfVar15;
      pfVar15 = pfVar15 + 1;
      pfVar16 = pfVar16 + 1;
    }
    fVar7 = local_d0[0xb] * _DAT_00b2b71c;
    fVar6 = local_d0[8] * _DAT_00b2b718;
    fVar26 = local_d0[0xe] * _DAT_00b2b720;
    fVar8 = local_d0[0xc] * _DAT_00b2b71c;
    fVar5 = local_d0[9] * _DAT_00b2b718;
    fVar4 = _DAT_00b2b720 * local_d0[0xf];
    *local_d0 = _DAT_00b2b71c * local_d0[10] + _DAT_00b2b718 * *pfVar24 +
                _DAT_00b2b720 * local_d0[0xd];
    local_d0[1] = fVar26 + fVar6 + fVar7;
    local_d0[2] = fVar4 + fVar8 + fVar5;
    if ((param_9 != (float *)0x0) && (param_3 == 0)) {
      param_9[6] = local_d0[6] + local_d0[6];
      param_9[7] = (float)piVar2[2] * fVar22;
    }
    if ((int)DAT_00b2b708 < (int)param_3) {
      if (DAT_00b429c8 != '\0') {
        local_d0[0x11] = (0.0 - param_11) * (float)(fVar29 * fVar28) + param_11;
      }
    }
    else {
      local_dc = 1.0;
      if (param_3 == DAT_00b2b708) {
        local_dc = 1.0 - (float)(fVar29 * fVar28) * 0.0;
      }
      local_d0[0x11] = local_dc;
    }
    if (bVar10) {
      FUN_007a0ee0();
      fVar26 = local_d0[3];
      pfVar15 = &fStack_12c;
      for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
        *pfVar15 = *pfVar24;
        pfVar24 = pfVar24 + 1;
        pfVar15 = pfVar15 + 1;
      }
      FUN_0079c490(fVar26,local_d0[4],local_d0[5]);
    }
    else {
      local_dc = 0.0;
      if (param_3 != 0) {
        local_dc = param_6;
      }
      pfStack_11c = (float *)(uint)*(ushort *)(in_ECX + 8);
      pfStack_114 = &local_8c;
      local_118 = param_9;
      local_120 = local_dc;
      local_124 = (float *)0x0;
      fStack_12c = 1.1128815e-38;
      pfStack_128 = local_d0;
      FUN_0078feb0();
    }
    local_b4 = 0.0;
    *(undefined4 *)((int)in_ECX[6] + 0x40) = 0;
    local_b8 = 1;
    if (1 < (int)in_ECX[7]) {
      local_dc = 1.00893e-43;
      do {
        pfVar23 = (float *)((int)in_ECX[6] + (int)local_dc);
        fVar28 = (float10)FUN_00985b70();
        pfVar15 = (float *)(float)fVar28;
        fVar26 = (float)pfVar15 * fVar22 - local_b4;
        fVar28 = (float10)FUN_00784210();
        pfVar23[6] = (float)(fVar28 * (float10)local_94);
        fVar29 = (float10)FUN_00784210();
        fVar28 = (float10)local_80;
        pfVar24 = pfVar23 + 7;
        pfVar16 = local_d0 + 7;
        pfVar27 = pfVar24;
        for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
          *pfVar27 = *pfVar16;
          pfVar16 = pfVar16 + 1;
          pfVar27 = pfVar27 + 1;
        }
        local_60 = _DAT_00b2b71c * pfVar23[10] + _DAT_00b2b718 * *pfVar24 +
                   _DAT_00b2b720 * pfVar23[0xd];
        local_5c = pfVar23[0xe] * _DAT_00b2b720 +
                   pfVar23[8] * _DAT_00b2b718 + pfVar23[0xb] * _DAT_00b2b71c;
        local_58 = _DAT_00b2b720 * pfVar23[0xf] +
                   pfVar23[0xc] * _DAT_00b2b71c + pfVar23[9] * _DAT_00b2b718;
        *pfVar23 = local_60;
        pfVar23[1] = local_5c;
        pfVar23[2] = local_58;
        FUN_00986130();
        fVar4 = _DAT_00b2b72c * pfVar23[1];
        fVar5 = _DAT_00b2b728 * pfVar23[2];
        fVar8 = _DAT_00b2b724 * pfVar23[2];
        fVar9 = *pfVar23 * _DAT_00b2b72c;
        fVar6 = *pfVar23 * _DAT_00b2b728;
        fVar7 = _DAT_00b2b724 * pfVar23[1];
        fVar30 = (float10)FUN_00982c30();
        local_64 = 1.0 / (float)fVar30;
        local_6c = local_64 * (fVar4 - fVar5);
        local_68 = (fVar8 - fVar9) * local_64;
        local_64 = local_64 * (fVar6 - fVar7);
        FUN_00784210();
        pfStack_114 = (float *)0x79321e;
        FUN_0078f160();
        pfVar16 = (float *)FUN_0078edd0();
        pfVar27 = pfVar24;
        for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
          *pfVar27 = *pfVar16;
          pfVar16 = pfVar16 + 1;
          pfVar27 = pfVar27 + 1;
        }
        FUN_00784370();
        FUN_00784370();
        FUN_0078ef60();
        local_78 = _DAT_00b2b71c * pfVar23[10] + _DAT_00b2b718 * *pfVar24 +
                   _DAT_00b2b720 * pfVar23[0xd];
        local_74 = pfVar23[0xe] * _DAT_00b2b720 +
                   pfVar23[8] * _DAT_00b2b718 + pfVar23[0xb] * _DAT_00b2b71c;
        local_70 = _DAT_00b2b720 * pfVar23[0xf] +
                   pfVar23[0xc] * _DAT_00b2b71c + pfVar23[9] * _DAT_00b2b718;
        *pfVar23 = local_78;
        pfVar23[1] = local_74;
        pfVar23[2] = local_70;
        fVar4 = fVar26 * *local_d0 + local_d0[3];
        fVar5 = local_d0[4] + local_d0[1] * fVar26;
        fVar6 = local_d0[5] + fVar26 * local_d0[2];
        pfVar23[3] = fVar4;
        pfVar23[4] = fVar5;
        pfVar23[5] = fVar6;
        if ((int)DAT_00b2b708 < (int)param_3) {
          if (DAT_00b429c8 != '\0') {
            pfVar23[0x11] = (0.0 - param_11) * (float)(fVar29 * fVar28) + param_11;
          }
        }
        else {
          local_d8 = 1.0;
          if (param_3 == DAT_00b2b708) {
            local_d8 = 1.0 - (float)(fVar29 * fVar28) * (float)pfVar15;
          }
          pfVar23[0x11] = local_d8;
        }
        if (bVar10) {
          pfVar15 = &fStack_12c;
          for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
            *pfVar15 = *pfVar24;
            pfVar24 = pfVar24 + 1;
            pfVar15 = pfVar15 + 1;
          }
          FUN_0079c490(fVar4,fVar5,fVar6);
        }
        else {
          local_120 = param_6;
          if (param_3 == 0) {
            if ((float)piVar2[2] <= (float)pfVar15) {
              local_120 = ((float)piVar2[2] * -1.0) / (1.0 - (float)piVar2[2]);
            }
            else {
              local_120 = 1.0;
            }
          }
          pfStack_11c = (float *)(uint)*(ushort *)(in_ECX + 8);
          pfStack_114 = &local_8c;
          local_118 = param_9;
          fStack_12c = 1.1130961e-38;
          pfStack_128 = pfVar23;
          local_124 = pfVar15;
          FUN_0078feb0();
        }
        local_b4 = local_b4 + fVar26;
        *(float *)((int)local_dc + 0x40 + (int)in_ECX[6]) = local_b4;
        local_b8 = local_b8 + 1;
        local_dc = (float)((int)local_dc + 0x48);
        local_d0 = pfVar23;
      } while (local_b8 < (int)in_ECX[7]);
    }
    if (bVar10) {
      FUN_0079a000();
    }
    else {
      *(undefined2 *)((int)param_9 + 0x22) = *(undefined2 *)(in_ECX + 9);
      FUN_0078f7a0();
    }
    iVar13 = FUN_009828c0();
    fVar22 = (float)(param_3 + 1);
    if (DAT_00b429e0 == 0) {
      iVar18 = 0;
    }
    else {
      iVar18 = DAT_00b429e4 - DAT_00b429e0 >> 2;
    }
    bVar3 = iVar18 + -1 <= (int)fVar22;
    if (((!bVar3) || (DAT_00b2b704 != '\0')) && (local_b8 = 0, 0 < iVar13)) {
      do {
        if (!bVar3) {
          param_1 = param_1 + 3;
          FUN_0078ea30();
        }
        fVar28 = (float10)FUN_0078ea00();
        FUN_0078f720();
        if (!bVar3) {
          FUN_0078ea30();
          FUN_0078ea00();
        }
        fVar26 = in_ECX[6];
        local_8c = (*(float *)((int)fVar26 + 0x54) - *(float *)((int)fVar26 + 0xc)) * 0.0 +
                   *(float *)((int)fVar26 + 0xc);
        local_88 = (*(float *)((int)fVar26 + 0x58) - *(float *)((int)fVar26 + 0x10)) * 0.0 +
                   *(float *)((int)fVar26 + 0x10);
        local_84 = (*(float *)((int)fVar26 + 0x5c) - *(float *)((int)fVar26 + 0x14)) * 0.0 +
                   *(float *)((int)fVar26 + 0x14);
        local_d0 = (float *)0x3f800000;
        if ((float)piVar2[2] != (float)piVar2[3]) {
          local_d0 = (float *)(((float)fVar28 - (float)piVar2[2]) /
                              ((float)piVar2[3] - (float)piVar2[2]));
        }
        if (bVar3) {
          pfStack_114 = (float *)((int)fVar26 + 0x1c);
          local_118 = local_d0;
          pfStack_11c = &local_8c;
          local_124 = param_2;
          fStack_12c = 1.1132204e-38;
          pfStack_128 = in_ECX;
          local_120 = fVar22;
          FUN_007920a0();
        }
        else {
          puVar17 = (undefined4 *)FUN_00401f00();
          if (puVar17 == (undefined4 *)0x0) {
            puVar17 = (undefined4 *)0x0;
          }
          else {
            puVar17[1] = 0;
            *puVar17 = in_ECX;
            puVar17[3] = 0;
            puVar17[4] = 0;
            puVar17[5] = 0;
            puVar17[10] = 0;
            puVar17[0xb] = 0;
            puVar17[6] = 0;
            puVar17[7] = 0xffffffff;
            *(undefined2 *)(puVar17 + 8) = 0;
            puVar17[9] = 0xffffffff;
            puVar17[0xd] = 0;
            puVar17[0xe] = 0;
            puVar17[0xf] = 0;
          }
          local_4 = 0xffffffff;
          local_dc = (float)local_d0 * (1.0 - param_6) + param_6;
          if ((int)fVar22 < 2) {
            local_dc = local_dc * local_dc;
          }
          local_118 = (float *)in_ECX[6];
          pfStack_114 = param_9;
          pfStack_11c = local_118 + 7;
          local_120 = local_dc;
          pfStack_128 = &local_8c;
          local_124 = local_d0;
          fStack_12c = fVar22;
          FUN_007925b0(param_1,param_2);
          cVar12 = FUN_00799ea0();
          if ((cVar12 == '\0') || (iVar18 = FUN_00780f70(), (int)fVar22 < iVar18)) {
            FUN_00791630();
          }
          else if (puVar17 != (undefined4 *)0x0) {
            FUN_00790d00();
            FUN_00401f20();
          }
        }
        local_b8 = local_b8 + 1;
      } while (local_b8 < iVar13);
    }
    pvVar14 = DAT_00b42a04;
    pvVar11 = DAT_00b42a04;
    if (bVar3) {
      _Dst = DAT_00b42a00;
      if ((DAT_00b42a04 < DAT_00b42a00) &&
         (FUN_00984d5e(), _Dst = DAT_00b42a00, DAT_00b42a04 < DAT_00b42a00)) {
        FUN_00984d5e();
      }
      pvVar11 = DAT_00b42a04;
      if (_Dst != pvVar14) {
        iVar13 = (int)DAT_00b42a04 - (int)pvVar14 >> 2;
        _DstSize = iVar13 * 4;
        pvVar11 = (void *)((int)_Dst + _DstSize);
        if (0 < iVar13) {
          pfStack_114 = (float *)0x7939c9;
          _memmove_s(_Dst,_DstSize,pvVar14,_DstSize);
        }
      }
    }
    DAT_00b42a04 = pvVar11;
    FUN_0078f690();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00793a00(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined1 local_24 [36];
  
  FUN_00986000();
  FUN_00986300();
  puVar1 = (undefined4 *)FUN_0078edd0(local_24,in_ECX);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *in_ECX = *puVar1;
    puVar1 = puVar1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}



void FUN_00793aa0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined1 local_24 [36];
  
  FUN_00986000();
  FUN_00986300();
  puVar1 = (undefined4 *)FUN_0078edd0(local_24,in_ECX);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *in_ECX = *puVar1;
    puVar1 = puVar1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}



void FUN_00793b40(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[2] = 2;
  in_ECX[1] = 0x3e800000;
  in_ECX[3] = 2;
  in_ECX[4] = 2;
  in_ECX[8] = 0;
  *(undefined1 *)(in_ECX + 5) = 1;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 4;
  in_ECX[0xf] = 0x3f800000;
  in_ECX[0xc] = 0;
  in_ECX[0x10] = 0x3f800000;
  in_ECX[0xd] = 0;
  in_ECX[7] = 0x3f800000;
  in_ECX[0xe] = 0;
  in_ECX[6] = 0x3f800000;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00793b90(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  
  in_ECX[1] = param_1;
  fVar1 = in_ECX[7] * param_1 * 8.0;
  in_ECX[8] = fVar1;
  in_ECX[9] = param_1 * 180.0 * in_ECX[6];
  fVar2 = _DAT_00b42a0c;
  in_ECX[0xd] = 0.0;
  in_ECX[0xc] = 0.0;
  *in_ECX = (param_3 + fVar2 * param_2 * 8.0 * in_ECX[7]) - fVar2 * fVar1;
  return (float10)*in_ECX;
}



void FUN_00793c00(undefined4 *param_1)

{
  float fVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = *param_1;
  fVar1 = (float)param_1[1];
  *(float *)(in_ECX + 0x1c) = fVar1;
  *(float *)(in_ECX + 0x20) = (float)param_1[6] * 8.0 * fVar1;
  *(float *)(in_ECX + 0x24) = (float)param_1[6] * 180.0 * *(float *)(in_ECX + 0x18);
  *(undefined4 *)(in_ECX + 4) = param_1[6];
  return;
}



void FUN_00793c40(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x28) = param_1;
  *(undefined4 *)(in_ECX + 0x2c) = param_2;
  return;
}



void FUN_00793c60(void)

{
  uint uVar1;
  void *pvVar2;
  undefined2 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  pvVar2 = (void *)FUN_00401f00(0x100,uVar1);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar2,0x40,4,FUN_007a66b0);
  }
  local_4 = 0xffffffff;
  *(void **)(in_ECX + 2) = pvVar2;
  FUN_00787830(4);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00793cf0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_9c [39];
  
  in_ECX[0x1c] = 0x3f000000;
  local_9c[0xd] = 0x3f4ccccd;
  local_9c[0xe] = 0x3f4ccccd;
  *in_ECX = 0;
  local_9c[0xf] = 0x3f4ccccd;
  in_ECX[0xe] = 0;
  in_ECX[0x1d] = 0;
  local_9c[0x10] = 0x3e4ccccd;
  in_ECX[0x1e] = 0;
  local_9c[0x11] = 0x3e4ccccd;
  local_9c[0x12] = 0x3e4ccccd;
  local_9c[0x13] = 0;
  local_9c[0x14] = 0;
  local_9c[0x15] = 0;
  local_9c[0x16] = 0;
  local_9c[0x17] = 0;
  local_9c[0x18] = 0;
  local_9c[0x19] = 0;
  puVar2 = local_9c + 0xd;
  puVar3 = in_ECX;
  for (iVar1 = 0xd; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  local_9c[0] = 0x3f800000;
  local_9c[1] = 0x3f800000;
  local_9c[2] = 0x3f800000;
  local_9c[0x1a] = 0x3f800000;
  local_9c[0x1b] = 0x3f800000;
  local_9c[0x1c] = 0x3f800000;
  local_9c[3] = 0x3f000000;
  local_9c[4] = 0x3f000000;
  local_9c[5] = 0x3f000000;
  local_9c[0x1d] = 0x3f000000;
  local_9c[0x1e] = 0x3f000000;
  local_9c[0x1f] = 0x3f000000;
  local_9c[6] = 0;
  local_9c[7] = 0;
  local_9c[8] = 0;
  local_9c[9] = 0;
  local_9c[10] = 0;
  local_9c[0xb] = 0;
  local_9c[0xc] = 0;
  puVar3 = local_9c;
  puVar2 = in_ECX + 0xf;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  local_9c[0x20] = 0;
  local_9c[0x21] = 0;
  local_9c[0x22] = 0;
  local_9c[0x23] = 0;
  local_9c[0x24] = 0;
  local_9c[0x25] = 0;
  local_9c[0x26] = 0;
  puVar3 = local_9c + 0x1a;
  puVar2 = in_ECX + 0x1f;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00793e77) */

void FUN_00793e10(undefined4 param_1,int param_2,int param_3)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int in_ECX;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  uint *puVar11;
  float10 fVar12;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  uint *local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  int local_7c;
  int local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
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
  float local_24;
  float local_20;
  float *local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (((*(int *)(in_ECX + 0x38) == 1) && (*(int *)(in_ECX + 0x74) != 0)) && (0 < param_3)) {
    puVar11 = (uint *)(param_2 + 4);
    local_78 = param_3;
    local_7c = in_ECX;
    do {
      piVar9 = (int *)*puVar11;
      local_a4 = puVar11;
      if ((int *)puVar11[1] < piVar9) {
        FUN_00984d5e();
      }
      while( true ) {
        piVar2 = (int *)puVar11[1];
        if (piVar2 < (int *)*puVar11) {
          FUN_00984d5e();
        }
        if (piVar9 == piVar2) break;
        if ((int *)puVar11[1] <= piVar9) {
          FUN_00984d5e();
        }
        local_1c = (float *)(*piVar9 + 0x1c);
        if ((int *)puVar11[1] <= piVar9) {
          FUN_00984d5e();
        }
        iVar3 = *piVar9;
        if ((int *)puVar11[1] <= piVar9) {
          FUN_00984d5e();
        }
        FUN_007a7ec0(&local_c);
        local_6c = 0.0;
        iVar8 = 0;
        local_70 = 0.0;
        pfVar10 = (float *)&DAT_00b2b7d4;
        local_74 = 0.0;
        local_80 = -1.0;
        local_a8 = 0.0;
        local_ac = 0.0;
        local_b0 = 0.0;
        do {
          if ((&DAT_00b42a18)[iVar8] != '\0') {
            local_90 = pfVar10[-1];
            local_8c = *pfVar10;
            local_88 = pfVar10[1];
            if (pfVar10[0xb] == 0.0) {
              pfVar7 = &local_90;
            }
            else {
              pfVar7 = &local_18;
              local_18 = pfVar10[-1] - *(float *)(iVar3 + 4);
              local_14 = *pfVar10 - *(float *)(iVar3 + 8);
              local_10 = pfVar10[1] - *(float *)(iVar3 + 0xc);
            }
            local_98 = pfVar7[1];
            local_9c = *pfVar7;
            local_94 = pfVar7[2];
            fVar12 = (float10)FUN_00982c30();
            fVar1 = 1.0 / (float)fVar12;
            local_9c = fVar1 * local_9c;
            local_98 = local_98 * fVar1;
            local_94 = fVar1 * local_94;
            fVar1 = local_1c[2] * local_94 + local_9c * *local_1c + local_1c[1] * local_98;
            if (local_80 < fVar1 != (local_80 == fVar1)) {
              local_80 = fVar1;
              local_74 = local_90;
              local_70 = local_8c;
              local_6c = local_88;
            }
            if (fVar1 < 0.0) {
              fVar1 = 0.0;
            }
            local_a0 = *(float *)(local_7c + 0x70) + (1.0 - *(float *)(local_7c + 0x70)) * fVar1;
            if ((*(byte *)(local_7c + 0x74) & 1) != 0) {
              local_4c = *(float *)(local_7c + 0x60);
              local_48 = *(float *)(local_7c + 100);
              local_44 = *(float *)(local_7c + 0x68);
              local_40 = pfVar10[5] * *(float *)(local_7c + 0x48);
              local_3c = pfVar10[6] * *(float *)(local_7c + 0x4c);
              local_38 = pfVar10[7] * *(float *)(local_7c + 0x50);
              local_b4 = 1.0;
              if (pfVar10[0xb] != 0.0) {
                fVar1 = local_8c - *(float *)(iVar3 + 8);
                fVar5 = local_90 - *(float *)(iVar3 + 4);
                fVar4 = local_88 - *(float *)(iVar3 + 0xc);
                local_50 = (float)(((int)(fVar4 * fVar4 + fVar5 * fVar5 + fVar1 * fVar1) >> 1) +
                                  0x1fc00000);
                local_84 = pfVar10[0xe] * local_50 * local_50 +
                           pfVar10[0xc] + local_50 * pfVar10[0xd];
                if (local_84 != 0.0) {
                  local_b4 = 1.0 / local_84;
                }
              }
              local_28 = local_c * local_a0 * pfVar10[2];
              local_24 = pfVar10[3] * local_a0 * local_8;
              local_20 = local_a0 * pfVar10[4] * local_4;
              local_68 = local_28 + local_40;
              local_64 = local_24 + local_3c;
              local_60 = local_20 + local_38;
              local_5c = local_b4 * local_68;
              local_58 = local_64 * local_b4;
              local_54 = local_b4 * local_60;
              local_34 = local_5c + *(float *)(local_7c + 0x60);
              local_30 = local_58 + *(float *)(local_7c + 100);
              local_2c = local_54 + *(float *)(local_7c + 0x68);
              local_b0 = local_34 + local_b0;
              local_ac = local_30 + local_ac;
              local_a8 = local_2c + local_a8;
            }
          }
          iVar6 = local_7c;
          pfVar10 = pfVar10 + 0x10;
          iVar8 = iVar8 + 1;
        } while ((int)pfVar10 < 0xb2b9d4);
        if (0.0 <= local_b0) {
          if (1.0 < local_b0) {
            local_b0 = 1.0;
          }
        }
        else {
          local_b0 = 0.0;
        }
        if (0.0 <= local_ac) {
          if (1.0 < local_ac) {
            local_ac = 1.0;
          }
        }
        else {
          local_ac = 0.0;
        }
        if (0.0 <= local_a8) {
          if (1.0 < local_a8) {
            local_a8 = 1.0;
          }
        }
        else {
          local_a8 = 0.0;
        }
        if ((*(byte *)(local_7c + 0x74) & 1) != 0) {
          if ((int *)local_a4[1] <= piVar9) {
            FUN_00984d5e();
          }
          FUN_007a7f10(&local_b0,0);
        }
        if ((*(byte *)(iVar6 + 0x74) & 2) != 0) {
          if ((int *)local_a4[1] <= piVar9) {
            FUN_00984d5e();
          }
          FUN_007a8090(param_1,&local_74,*(undefined4 *)(iVar6 + 0x70));
        }
        if ((int *)local_a4[1] <= piVar9) {
          FUN_00984d5e();
        }
        piVar9 = piVar9 + 1;
        puVar11 = local_a4;
      }
      puVar11 = puVar11 + 4;
      local_78 = local_78 + -1;
    } while (local_78 != 0);
  }
  return;
}



void FUN_00794340(void)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float *in_ECX;
  float *pfVar4;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [40];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cbd08;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffa0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0078eb40(uVar1);
  do {
    switch(iVar2) {
    case 0x1f42:
      fVar3 = (float)FUN_0078eb40(uVar1);
      *in_ECX = fVar3;
      break;
    case 0x1f43:
      iVar2 = 0xd;
      pfVar4 = in_ECX;
      do {
        pfVar4 = pfVar4 + 1;
        fVar5 = (float10)FUN_0078eb10();
        *pfVar4 = (float)fVar5;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      break;
    case 0x1f44:
      fVar3 = (float)FUN_0078eb40(uVar1);
      in_ECX[0xe] = fVar3;
      break;
    case 0x1f45:
      pfVar4 = in_ECX + 0xf;
      iVar2 = 0xd;
      do {
        fVar5 = (float10)FUN_0078eb10();
        *pfVar4 = (float)fVar5;
        pfVar4 = pfVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      break;
    case 0x1f46:
      fVar5 = (float10)FUN_0078eb10();
      in_ECX[0x1c] = (float)fVar5;
      break;
    case 0x1f47:
      fVar3 = (float)FUN_0078eb40(uVar1);
      in_ECX[0x1d] = fVar3;
      break;
    case 0x1f48:
      fVar3 = (float)FUN_0078eb40(uVar1);
      in_ECX[0x1e] = fVar3;
      break;
    case 0x1f49:
      pfVar4 = in_ECX + 0x1f;
      iVar2 = 0xd;
      do {
        fVar5 = (float10)FUN_0078eb10();
        *pfVar4 = (float)fVar5;
        pfVar4 = pfVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      break;
    default:
      local_38 = 0xf;
      local_3c = 0;
      local_4c = 0;
      FUN_00414500("malformed lighting information",0x1e);
      local_4 = 0;
      FUN_00789190(local_50,0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_34,&DAT_00af39e4);
    }
    iVar2 = FUN_0078eb40(uVar1);
  } while (iVar2 != 0x1f41);
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_007944c0(float *param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = (int)(longlong)ROUND(param_1[2] * -255.0);
  iVar1 = 0xff00 - local_8;
  local_8 = (int)(longlong)ROUND(param_1[1] * -255.0);
  iVar1 = iVar1 * 0x100 - local_8;
  local_8 = (int)(longlong)ROUND(*param_1 * -255.0);
  return iVar1 * 0x100 - local_8;
}



void FUN_00794550(char *param_1)

{
  char *pcVar1;
  undefined **local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1;
    if ((uint)(0xffffffff / ZEXT48(param_1)) < 0x10) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_c,&param_1);
      local_c[0] = &PTR_FUN_00a32488;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_c,&DAT_00ad7f34);
    }
  }
  FUN_00401f00((int)pcVar1 << 4);
  return;
}



undefined4 FUN_007945b0(ushort param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)param_1;
  if ((*(int *)(in_ECX + 0x4c) == 0) ||
     ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <= uVar2)) {
    FUN_00984d5e();
  }
  iVar1 = uVar2 * 0x10 + *(int *)(in_ECX + 0x4c);
  iVar3 = *(int *)(iVar1 + 4);
  if ((iVar3 != 0) && (*(int *)(iVar1 + 8) - iVar3 >> 2 != 0)) {
    if ((*(int *)(in_ECX + 0x4c) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <= uVar2)) {
      FUN_00984d5e();
    }
    iVar3 = uVar2 * 0x10 + *(int *)(in_ECX + 0x4c);
    if ((*(int *)(iVar3 + 4) == 0) || (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 2 == 0)) {
      FUN_00984d5e();
    }
    return *(undefined4 *)(iVar3 + 4);
  }
  return 0;
}



void FUN_00794630(ushort param_1)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  do {
    if ((short)param_1 < 0) {
LAB_00794680:
      uVar1 = 0;
    }
    else {
      if ((*(int *)(in_ECX + 0x4c) == 0) ||
         ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <=
          (uint)(int)(short)param_1)) {
        FUN_00984d5e();
      }
      iVar3 = (short)param_1 * 0x10 + *(int *)(in_ECX + 0x4c);
      iVar4 = *(int *)(iVar3 + 4);
      if (iVar4 == 0) goto LAB_00794680;
      uVar1 = *(int *)(iVar3 + 8) - iVar4 >> 2 & 0xffff;
    }
    if ((int)uVar1 <= (int)uVar2) {
      return;
    }
    uVar1 = (uint)param_1;
    if ((*(int *)(in_ECX + 0x4c) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <= uVar1)) {
      FUN_00984d5e();
    }
    iVar4 = uVar1 * 0x10 + *(int *)(in_ECX + 0x4c);
    if ((*(int *)(iVar4 + 4) == 0) ||
       ((uint)(*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) >> 2) <= uVar2)) {
      FUN_00984d5e();
    }
    FUN_00401f20(*(undefined4 *)(*(int *)(iVar4 + 4) + uVar2 * 4));
    if ((*(int *)(in_ECX + 0x4c) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <= uVar1)) {
      FUN_00984d5e();
    }
    iVar4 = uVar1 * 0x10 + *(int *)(in_ECX + 0x4c);
    if ((*(int *)(iVar4 + 4) == 0) ||
       ((uint)(*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) >> 2) <= uVar2)) {
      FUN_00984d5e();
    }
    *(undefined4 *)(*(int *)(iVar4 + 4) + uVar2 * 4) = 0;
    uVar2 = uVar2 + 1;
  } while( true );
}



int FUN_00794730(int param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x6c) == 0) ||
     (*(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) >> 2 == 0)) {
    FUN_00984d5e();
  }
  return *(int *)(in_ECX + 0x6c) + param_1 * 0xc;
}



int FUN_00794760(int param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0xbc) == 0) ||
     ((uint)(*(int *)(in_ECX + 0xc0) - *(int *)(in_ECX + 0xbc) >> 2) <= (uint)(param_1 * 2))) {
    FUN_00984d5e();
  }
  return *(int *)(in_ECX + 0xbc) + param_1 * 8;
}



void FUN_007947a0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  uint local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [48];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cbd38;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff98;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x6c) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) >> 2;
  }
  local_58 = uVar4 / 3 & 0xffff;
  if (local_58 != 0) {
    iVar5 = 0;
    do {
      if ((*(int *)(in_ECX + 0x6c) == 0) ||
         (*(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) >> 2 == 0)) {
        FUN_00984d5e(uVar1);
      }
      local_48 = *(undefined4 *)(*(int *)(in_ECX + 0x6c) + iVar5);
      iVar2 = *(int *)(in_ECX + 0x6c) + iVar5;
      local_44 = *(undefined4 *)(iVar2 + 4);
      local_40 = *(undefined4 *)(iVar2 + 8);
      puVar3 = (undefined4 *)FUN_007a6b10(local_3c,&local_48);
      puVar6 = param_1;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      local_4 = 0;
      FUN_0060d0a0();
      local_4 = 0xffffffff;
      FUN_0060d0a0();
      iVar5 = iVar5 + 0xc;
      local_58 = local_58 - 1;
    } while (local_58 != 0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007948c0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float *pfVar13;
  int in_ECX;
  uint uVar14;
  int iVar15;
  
  if (*(int *)(in_ECX + 0x6c) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) >> 2;
  }
  uVar14 = uVar14 / 3 & 0xffff;
  if (uVar14 != 0) {
    iVar15 = 0;
    do {
      if ((*(int *)(in_ECX + 0x6c) == 0) ||
         (*(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) >> 2 == 0)) {
        FUN_00984d5e();
      }
      fVar1 = *(float *)(*(int *)(in_ECX + 0x6c) + iVar15);
      pfVar13 = (float *)(*(int *)(in_ECX + 0x6c) + iVar15);
      fVar2 = pfVar13[1];
      fVar3 = pfVar13[2];
      fVar4 = param_1[1];
      fVar5 = param_1[5];
      fVar6 = param_1[9];
      fVar7 = param_1[0xd];
      fVar8 = param_1[2];
      fVar9 = param_1[6];
      fVar10 = param_1[10];
      fVar11 = param_1[0xe];
      *pfVar13 = fVar2 * param_1[4] + fVar1 * *param_1 + fVar3 * param_1[8] + param_1[0xc];
      pfVar13[1] = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1 + fVar7;
      pfVar13[2] = fVar8 * fVar1 + fVar9 * fVar2 + fVar10 * fVar3 + fVar11;
      if (((*(char *)(in_ECX + 8) != '\0') && (iVar12 = *(int *)(in_ECX + 0x7c), iVar12 != 0)) &&
         (*(int *)(in_ECX + 0x80) - iVar12 >> 2 != 0)) {
        if ((iVar12 == 0) || (*(int *)(in_ECX + 0x80) - iVar12 >> 2 == 0)) {
          FUN_00984d5e();
        }
        fVar1 = *(float *)(*(int *)(in_ECX + 0x7c) + iVar15);
        pfVar13 = (float *)(*(int *)(in_ECX + 0x7c) + iVar15);
        fVar2 = pfVar13[1];
        fVar3 = pfVar13[2];
        fVar4 = param_1[1];
        fVar5 = param_1[5];
        fVar6 = param_1[9];
        fVar7 = param_1[0xd];
        fVar8 = param_1[2];
        fVar9 = param_1[6];
        fVar10 = param_1[10];
        fVar11 = param_1[0xe];
        *pfVar13 = fVar2 * param_1[4] + fVar1 * *param_1 + fVar3 * param_1[8] + param_1[0xc];
        pfVar13[1] = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1 + fVar7;
        pfVar13[2] = fVar8 * fVar1 + fVar9 * fVar2 + fVar10 * fVar3 + fVar11;
      }
      iVar15 = iVar15 + 0xc;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return;
}



void FUN_00794a90(ushort param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  *(ushort *)(in_ECX + 0x24) = param_1;
  *(undefined2 *)(in_ECX + 0x26) = 0;
  iVar1 = *(int *)(in_ECX + 0x2c);
  uVar2 = (uint)param_1;
  if ((iVar1 != 0) && (uVar2 < (uint)(*(int *)(in_ECX + 0x30) - iVar1 >> 2))) {
    *(undefined4 *)(iVar1 + uVar2 * 4) = 0;
    return;
  }
  FUN_00984d5e();
  *(undefined4 *)(*(int *)(in_ECX + 0x2c) + uVar2 * 4) = 0;
  return;
}



uint FUN_00794ae0(ushort param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint in_EAX;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  float *pfVar23;
  int in_ECX;
  uint uVar24;
  int iVar25;
  float *pfVar26;
  int local_3c;
  
  if (*(char *)(in_ECX + 0x12) != '\0') {
    return in_EAX & 0xffffff00;
  }
  if (*(int *)(in_ECX + 0x6c) == 0) {
    uVar24 = 0;
  }
  else {
    uVar24 = *(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) >> 2;
  }
  uVar24 = uVar24 / 3 & 0xffff;
  if (*(int *)(in_ECX + 0xc) == 0) {
    uVar20 = FUN_00401f00(uVar24);
    *(undefined4 *)(in_ECX + 0xc) = uVar20;
  }
  iVar21 = 0;
  if (uVar24 != 0) {
    do {
      *(undefined1 *)(iVar21 + *(int *)(in_ECX + 0xc)) = 0;
      iVar21 = iVar21 + 1;
    } while (iVar21 < (int)uVar24);
  }
  uVar24 = 0;
  do {
    if ((short)param_1 < 0) {
LAB_00794b93:
      uVar22 = 0;
    }
    else {
      if ((*(int *)(in_ECX + 0x4c) == 0) ||
         ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <=
          (uint)(int)(short)param_1)) {
        FUN_00984d5e();
      }
      iVar25 = (short)param_1 * 0x10 + *(int *)(in_ECX + 0x4c);
      iVar21 = *(int *)(iVar25 + 4);
      if (iVar21 == 0) goto LAB_00794b93;
      uVar22 = *(int *)(iVar25 + 8) - iVar21 >> 2 & 0xffff;
    }
    if ((int)uVar22 <= (int)uVar24) {
      *(undefined1 *)(in_ECX + 0x12) = 1;
      return CONCAT31((int3)(uVar22 >> 8),1);
    }
    local_3c = 0;
    while( true ) {
      if ((*(int *)(in_ECX + 0x3c) == 0) ||
         ((uint)(*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) >> 4) <= (uint)param_1)) {
        FUN_00984d5e();
      }
      uVar22 = (uint)param_1;
      iVar21 = uVar22 * 0x10 + *(int *)(in_ECX + 0x3c);
      if ((*(int *)(iVar21 + 4) == 0) ||
         ((uint)(*(int *)(iVar21 + 8) - *(int *)(iVar21 + 4) >> 1) <= uVar24)) {
        FUN_00984d5e();
      }
      if ((int)(uint)*(ushort *)(*(int *)(iVar21 + 4) + uVar24 * 2) <= local_3c) break;
      if ((*(int *)(in_ECX + 0x4c) == 0) ||
         ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <= uVar22)) {
        FUN_00984d5e();
      }
      iVar21 = uVar22 * 0x10 + *(int *)(in_ECX + 0x4c);
      if ((*(int *)(iVar21 + 4) == 0) ||
         ((uint)(*(int *)(iVar21 + 8) - *(int *)(iVar21 + 4) >> 2) <= uVar24)) {
        FUN_00984d5e();
      }
      uVar22 = (uint)*(ushort *)(*(int *)(*(int *)(iVar21 + 4) + uVar24 * 4) + local_3c * 2);
      if (*(char *)(uVar22 + *(int *)(in_ECX + 0xc)) == '\0') {
        if ((*(int *)(in_ECX + 0xfc) == 0) ||
           ((uint)(*(int *)(in_ECX + 0x100) - *(int *)(in_ECX + 0xfc) >> 2) <= uVar22)) {
          FUN_00984d5e();
        }
        fVar1 = *(float *)(*(int *)(in_ECX + 0xfc) + uVar22 * 4);
        if ((*(int *)(in_ECX + 0x7c) == 0) ||
           (*(int *)(in_ECX + 0x80) - *(int *)(in_ECX + 0x7c) >> 2 == 0)) {
          FUN_00984d5e();
        }
        iVar21 = uVar22 * 0xc;
        fVar2 = *(float *)(*(int *)(in_ECX + 0x7c) + iVar21);
        pfVar26 = (float *)(*(int *)(in_ECX + 0x7c) + iVar21);
        fVar3 = pfVar26[1];
        fVar4 = pfVar26[2];
        if ((*(int *)(in_ECX + 0x10c) == 0) ||
           ((uint)(*(int *)(in_ECX + 0x110) - *(int *)(in_ECX + 0x10c)) <= uVar22)) {
          FUN_00984d5e();
        }
        pfVar23 = (float *)((uint)*(byte *)(*(int *)(in_ECX + 0x10c) + uVar22) * 0x40 + DAT_00b42a14
                           );
        fVar5 = pfVar23[4];
        fVar6 = *pfVar23;
        fVar7 = pfVar23[8];
        fVar8 = pfVar23[0xc];
        fVar9 = pfVar23[5];
        fVar10 = pfVar23[1];
        fVar11 = pfVar23[9];
        fVar12 = pfVar23[0xd];
        fVar13 = pfVar23[6];
        fVar14 = pfVar23[2];
        fVar15 = pfVar23[10];
        fVar16 = pfVar23[0xe];
        fVar17 = pfVar26[2];
        fVar18 = pfVar26[1];
        fVar19 = *pfVar26;
        if ((*(int *)(in_ECX + 0x6c) == 0) ||
           (*(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) >> 2 == 0)) {
          FUN_00984d5e();
        }
        pfVar26 = (float *)(*(int *)(in_ECX + 0x6c) + iVar21);
        *pfVar26 = fVar1 * ((fVar3 * fVar5 + fVar2 * fVar6 + fVar4 * fVar7 + fVar8) - fVar19) +
                   fVar19;
        pfVar26[1] = fVar18 + fVar1 * ((fVar11 * fVar4 + fVar10 * fVar2 + fVar9 * fVar3 + fVar12) -
                                      fVar18);
        pfVar26[2] = fVar17 + ((fVar4 * fVar15 + fVar13 * fVar3 + fVar14 * fVar2 + fVar16) - fVar17)
                              * fVar1;
        *(undefined1 *)(uVar22 + *(int *)(in_ECX + 0xc)) = 1;
      }
      local_3c = local_3c + 1;
    }
    uVar24 = uVar24 + 1;
  } while( true );
}



void * FUN_00794e00(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 1;
  _DstSize = iVar1 * 2;
  if (0 < iVar1) {
    _memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}



void FUN_00794e30(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}



void * FUN_00794e50(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 1;
  _Dst = (void *)(param_3 + iVar1 * -2);
  if (0 < iVar1) {
    _memmove_s(_Dst,iVar1 * 2,param_1,iVar1 * 2);
  }
  return _Dst;
}



void * FUN_00794e80(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 1;
  _DstSize = iVar1 * 2;
  if (iVar1 != 0) {
    _memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (int)param_3);
}



void FUN_00794eb0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}



void FUN_00794ee0(int *param_1,int param_2,void *param_3,int param_4,void *param_5)

{
  rsize_t _DstSize;
  int iVar1;
  int in_ECX;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00984d5e();
  }
  if (param_3 != param_5) {
    iVar1 = *(int *)(in_ECX + 8) - (int)param_5 >> 1;
    _DstSize = iVar1 * 2;
    if (0 < iVar1) {
      _memmove_s(param_3,_DstSize,param_5,_DstSize);
    }
    *(void **)(in_ECX + 8) = (void *)(_DstSize + (int)param_3);
  }
  param_1[1] = (int)param_3;
  *param_1 = param_2;
  return;
}



void FUN_00794f40(void)

{
  void *_Src;
  void *_Dst;
  rsize_t _DstSize;
  int iVar1;
  int in_ECX;
  
  _Src = *(void **)(in_ECX + 8);
  if (_Src < *(void **)(in_ECX + 4)) {
    FUN_00984d5e();
  }
  _Dst = *(void **)(in_ECX + 4);
  if (*(void **)(in_ECX + 8) < _Dst) {
    FUN_00984d5e();
  }
  if (_Dst != _Src) {
    iVar1 = *(int *)(in_ECX + 8) - (int)_Src >> 1;
    _DstSize = iVar1 * 2;
    if (0 < iVar1) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)(in_ECX + 8) = (void *)(_DstSize + (int)_Dst);
  }
  return;
}



undefined2 * FUN_00794f90(undefined2 *param_1,int param_2,undefined2 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return param_1 + param_2;
}



void FUN_00794fc0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00401f20(*(int *)(param_1 + 4));
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00795021) */

undefined4 FUN_00795000(int param_1)

{
  int iVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (param_1 != 0) {
    iVar1 = FUN_00401f00(param_1 * 4);
    *(int *)(in_ECX + 0xc) = param_1 * 4 + iVar1;
    *(int *)(in_ECX + 4) = iVar1;
    *(int *)(in_ECX + 8) = iVar1;
    return 1;
  }
  return 0;
}



undefined4 FUN_00795050(uint param_1)

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
  if (0xfffffff < param_1) {
    uVar1 = FUN_00790b90();
  }
  iVar2 = FUN_00794550(param_1,uVar1);
  *(int *)(in_ECX + 4) = iVar2;
  *(int *)(in_ECX + 8) = iVar2;
  *(uint *)(in_ECX + 0xc) = param_1 * 0x10 + iVar2;
  return 1;
}



void FUN_007950a0(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar4 = *(int *)(in_ECX + 4);
  param_4 = (undefined4 *)*param_4;
  if (iVar4 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 0xc) - iVar4 >> 2;
  }
  uVar6 = CONCAT44(iVar4,iVar1);
  if (param_3 != 0) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(in_ECX + 8) - iVar4 >> 2;
    }
    if (-iVar4 - 1U < param_3) {
      uVar6 = FUN_00790b90();
    }
    iVar4 = (int)((ulonglong)uVar6 >> 0x20);
    uVar2 = (uint)uVar6;
    if (iVar4 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(in_ECX + 8) - iVar4 >> 2;
    }
    if (uVar2 < iVar1 + param_3) {
      if (-(uVar2 >> 1) - 1 < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar4 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(in_ECX + 8) - iVar4 >> 2;
      }
      if (uVar2 < iVar1 + param_3) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(in_ECX + 8) - iVar4 >> 2;
        }
        uVar2 = iVar4 + param_3;
      }
      iVar1 = FUN_00401f00(uVar2 * 4);
      uVar3 = FUN_007a25c0(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar3 = FUN_00790b60(uVar3,param_3,&param_4);
      FUN_007a25c0(param_2,*(undefined4 *)(in_ECX + 8),uVar3);
      iVar4 = *(int *)(in_ECX + 4);
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_ECX + 8) - iVar4 >> 2;
      }
      if (iVar4 != 0) {
        FUN_00401f20(iVar4);
      }
      *(int *)(in_ECX + 4) = iVar1;
      *(uint *)(in_ECX + 0xc) = uVar2 * 4 + iVar1;
      *(uint *)(in_ECX + 8) = iVar1 + (param_3 + iVar5) * 4;
      return;
    }
    iVar1 = *(int *)(in_ECX + 8);
    iVar4 = param_3 * 4;
    if ((uint)(iVar1 - param_2 >> 2) < param_3) {
      FUN_007a25c0(param_2,iVar1,iVar4 + param_2);
      FUN_00790b60(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2 >> 2),&param_4);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + iVar4;
      FUN_00790490(param_2,*(int *)(in_ECX + 8) + param_3 * -4,&param_4);
      return;
    }
    iVar5 = iVar1 + param_3 * -4;
    uVar3 = FUN_007a25c0(iVar5,iVar1,iVar1);
    *(undefined4 *)(in_ECX + 8) = uVar3;
    FUN_005254a0(param_2,iVar5,iVar1);
    FUN_00790490(param_2,iVar4 + param_2,&param_4);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00795281) */

undefined4 FUN_00795260(int param_1)

{
  int iVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (param_1 != 0) {
    iVar1 = FUN_00401f00(param_1 * 2);
    *(int *)(in_ECX + 0xc) = param_1 * 2 + iVar1;
    *(int *)(in_ECX + 4) = iVar1;
    *(int *)(in_ECX + 8) = iVar1;
    return 1;
  }
  return 0;
}



void FUN_007952b0(undefined4 param_1,void *param_2,uint param_3,ushort *param_4)

{
  rsize_t rVar1;
  int iVar2;
  uint uVar3;
  void *_Dst;
  void *_Dst_00;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  param_4 = (ushort *)(uint)*param_4;
  iVar5 = *(int *)(in_ECX + 4);
  if (iVar5 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(in_ECX + 0xc) - iVar5 >> 1;
  }
  uVar7 = CONCAT44(iVar5,iVar2);
  if (param_3 != 0) {
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_ECX + 8) - iVar5 >> 1;
    }
    if (-iVar5 - 1U < param_3) {
      uVar7 = FUN_00790b90();
    }
    iVar5 = (int)((ulonglong)uVar7 >> 0x20);
    uVar3 = (uint)uVar7;
    if (iVar5 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8) - iVar5 >> 1;
    }
    if (uVar3 < iVar2 + param_3) {
      if (-(uVar3 >> 1) - 1 < uVar3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
      }
      if (iVar5 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(in_ECX + 8) - iVar5 >> 1;
      }
      if (uVar3 < iVar2 + param_3) {
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(in_ECX + 8) - iVar5 >> 1;
        }
        uVar3 = iVar5 + param_3;
      }
      _Dst = (void *)FUN_00401f00(uVar3 * 2);
      iVar5 = (int)param_2 - (int)*(void **)(in_ECX + 4) >> 1;
      rVar1 = iVar5 * 2;
      if (iVar5 != 0) {
        _memmove_s(_Dst,rVar1,*(void **)(in_ECX + 4),rVar1);
      }
      _Dst_00 = (void *)FUN_00794f90((void *)(rVar1 + (int)_Dst),param_3,&param_4);
      iVar5 = *(int *)(in_ECX + 8) - (int)param_2 >> 1;
      if (iVar5 != 0) {
        rVar1 = iVar5 * 2;
        _memmove_s(_Dst_00,rVar1,param_2,rVar1);
      }
      iVar5 = *(int *)(in_ECX + 4);
      if (iVar5 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(in_ECX + 8) - iVar5 >> 1;
      }
      if (iVar5 != 0) {
        FUN_00401f20(iVar5);
      }
      *(void **)(in_ECX + 4) = _Dst;
      *(void **)(in_ECX + 0xc) = (void *)(uVar3 * 2 + (int)_Dst);
      *(void **)(in_ECX + 8) = (void *)((int)_Dst + (param_3 + iVar2) * 2);
      return;
    }
    iVar5 = *(int *)(in_ECX + 8);
    iVar2 = param_3 * 2;
    if ((uint)(iVar5 - (int)param_2 >> 1) < param_3) {
      FUN_00794e80(param_2,iVar5,(void *)(iVar2 + (int)param_2));
      FUN_00794f90(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - (int)param_2 >> 1),
                   &param_4);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + iVar2;
      FUN_00794e30(param_2,*(int *)(in_ECX + 8) + param_3 * -2,&param_4);
      return;
    }
    iVar6 = iVar5 + param_3 * -2;
    uVar4 = FUN_00794e80(iVar6,iVar5,iVar5);
    *(undefined4 *)(in_ECX + 8) = uVar4;
    FUN_00794e50(param_2,iVar6,iVar5);
    FUN_00794e30(param_2,(void *)(iVar2 + (int)param_2),&param_4);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x007954ae) */

void FUN_00795480(int param_1)

{
  uint uVar1;
  void *_Src;
  void *_Dst;
  rsize_t _DstSize;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 1;
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_00401f00(iVar2 * 2);
    *(int *)(in_ECX + 4) = iVar3;
    *(int *)(in_ECX + 8) = iVar3;
    *(int *)(in_ECX + 0xc) = iVar2 * 2 + iVar3;
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 < *(uint *)(param_1 + 4)) {
      FUN_00984d5e();
    }
    _Src = *(void **)(param_1 + 4);
    if (*(void **)(param_1 + 8) < _Src) {
      FUN_00984d5e();
    }
    _Dst = *(void **)(in_ECX + 4);
    iVar2 = (int)(uVar1 - (int)_Src) >> 1;
    _DstSize = iVar2 * 2;
    if (iVar2 != 0) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)(in_ECX + 8) = (void *)(_DstSize + (int)_Dst);
  }
  return;
}



void FUN_00795510(int param_1)

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
    uVar7 = *(int *)(param_1 + 8) - iVar4 >> 1;
    if (uVar7 != 0) {
      iVar1 = *(int *)(in_ECX + 4);
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(in_ECX + 8) - iVar1 >> 1;
      }
      if (uVar7 <= uVar5) {
        FUN_00794e00(iVar4,*(int *)(param_1 + 8),iVar1);
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             *(int *)(in_ECX + 4) + (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 1) * 2;
        return;
      }
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(in_ECX + 0xc) - iVar1 >> 1;
      }
      if (uVar5 < uVar7) {
        if (iVar1 != 0) {
          FUN_00401f20(iVar1);
        }
        if (*(int *)(param_1 + 4) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 1;
        }
        cVar2 = FUN_00795260(iVar4);
        if (cVar2 == '\0') {
          return;
        }
        uVar3 = FUN_00794e80(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                             *(undefined4 *)(in_ECX + 4));
        *(undefined4 *)(in_ECX + 8) = uVar3;
        return;
      }
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(in_ECX + 8) - iVar1 >> 1;
      }
      iVar6 = iVar4 + iVar6 * 2;
      FUN_00794e00(iVar4,iVar6,iVar1);
      uVar3 = FUN_00794e80(iVar6,*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_ECX + 8));
      *(undefined4 *)(in_ECX + 8) = uVar3;
      return;
    }
  }
  FUN_00794f40();
  return;
}



void FUN_00795630(undefined4 param_1)

{
  uint uVar1;
  undefined4 in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_1c [4];
  int local_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cbd68;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00795480(in_ECX);
  local_4 = 0;
  FUN_00795510(param_1);
  FUN_00795510(local_1c);
  if (local_18 != 0) {
    FUN_00401f20(local_18,uVar1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x007956cd) */

void FUN_007956b0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (param_1 != 0) {
    puVar1 = (undefined4 *)FUN_00401f00(param_1 * 4);
    *(undefined4 **)(in_ECX + 0xc) = puVar1 + param_1;
    *(undefined4 **)(in_ECX + 4) = puVar1;
    *(undefined4 **)(in_ECX + 8) = puVar1;
    puVar3 = puVar1;
    for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 **)(in_ECX + 8) = puVar1 + param_1;
  }
  return;
}



void FUN_00795720(uint param_1)

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
    FUN_007950a0(in_ECX,uVar3,param_1 - iVar4,&stack0x00000008);
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



void FUN_00795820(undefined4 param_1,undefined4 param_2)

{
  FUN_00794fc0(param_1,param_2);
  return;
}



void FUN_00795840(int *param_1,int param_2,int param_3,undefined4 param_4)

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
  FUN_007950a0(param_2,param_3,1,param_4);
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



void FUN_007958d0(uint param_1)

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
    FUN_007a3280(in_ECX,uVar3,param_1 - iVar4,&stack0x00000008);
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



void FUN_00795990(uint param_1)

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
    uVar3 = (int)(*(int *)(in_ECX + 8) - uVar2) >> 1;
  }
  if (uVar3 < param_1) {
    if (uVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(*(int *)(in_ECX + 8) - uVar2) >> 1;
    }
    uVar3 = *(uint *)(in_ECX + 8);
    if (uVar3 < uVar2) {
      FUN_00984d5e();
    }
    FUN_007952b0(in_ECX,uVar3,param_1 - iVar4,&stack0x00000008);
    return;
  }
  if ((uVar2 != 0) && (uVar3 = *(uint *)(in_ECX + 8), param_1 < (uint)((int)(uVar3 - uVar2) >> 1)))
  {
    if (uVar3 < uVar2) {
      FUN_00984d5e();
    }
    uVar2 = *(uint *)(in_ECX + 4);
    if (*(uint *)(in_ECX + 8) < uVar2) {
      FUN_00984d5e();
    }
    uVar1 = uVar2 + param_1 * 2;
    local_4 = uVar2;
    if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
      FUN_00984d5e();
    }
    FUN_00794ee0(local_8,in_ECX,uVar1,in_ECX,uVar3);
  }
  return;
}



void FUN_00795a40(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 == 0) || ((int)(*(uint *)(in_ECX + 8) - uVar1) >> 1 == 0)) {
    iVar2 = 0;
  }
  else {
    if (*(uint *)(in_ECX + 8) < uVar1) {
      FUN_00984d5e();
    }
    if ((param_2 == 0) || (param_2 != in_ECX)) {
      FUN_00984d5e();
    }
    iVar2 = (int)(param_3 - uVar1) >> 1;
  }
  FUN_007952b0(param_2,param_3,1,param_4);
  uVar1 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar1) {
    FUN_00984d5e();
  }
  uVar1 = uVar1 + iVar2 * 2;
  if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
    FUN_00984d5e();
  }
  param_1[1] = uVar1;
  *param_1 = in_ECX;
  return;
}



int FUN_00795ad0(int param_1,int param_2,int param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_009cbda1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_00795480(param_1);
    }
    param_3 = param_3 + 0x10;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}



int FUN_00795b80(int param_1,int param_2,int param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_009cbdd1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_007a3580(param_1);
    }
    param_3 = param_3 + 0x10;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}



void FUN_00795c30(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int in_ECX;
  undefined1 local_8 [8];
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)(in_ECX + 8) - uVar1) >> 2) <
      (uint)((int)(*(int *)(in_ECX + 0xc) - uVar1) >> 2))) {
    puVar2 = *(undefined4 **)(in_ECX + 8);
    *puVar2 = *param_1;
    *(undefined4 **)(in_ECX + 8) = puVar2 + 1;
    return;
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (uVar3 < uVar1) {
    FUN_00984d5e();
  }
  FUN_00795840(local_8,in_ECX,uVar3,param_1);
  return;
}



int FUN_00795ca0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_00795510(param_1);
  }
  return (iVar1 >> 4) * 0x10 + param_3;
}



int FUN_00795ce0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_0079b2f0(param_1);
  }
  return (iVar1 >> 4) * 0x10 + param_3;
}



void FUN_00795d20(int param_1,int param_2,undefined4 param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_00795510(param_3);
  }
  return;
}



void FUN_00795d50(int param_1,int param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_009cbe01;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_00795480(param_3);
    }
    param_1 = param_1 + 0x10;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



int FUN_00795e00(int param_1,int param_2,int param_3)

{
  int *unaff_FS_OFFSET;
  uint uStack_3c;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_009cbe39;
  local_10 = *unaff_FS_OFFSET;
  uStack_3c = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  *unaff_FS_OFFSET = (int)&local_10;
  local_18 = param_3;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_8 = 1;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    local_8 = 2;
    local_1c = param_3;
    if (param_3 != 0) {
      FUN_00795480(local_2c);
    }
    local_8 = 1;
    FUN_00795630(param_1);
    param_3 = param_3 + 0x10;
  }
  if (local_28 != 0) {
    FUN_00401f20(local_28);
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}



int FUN_00795ed0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  uint uStack_3c;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cbe79;
  local_10 = *unaff_FS_OFFSET;
  uStack_3c = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  *unaff_FS_OFFSET = (int)&local_10;
  local_18 = param_3;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_8 = 0;
  for (; local_8 = CONCAT31(local_8._1_3_,1), param_1 != param_2; param_1 = param_1 + 0x10) {
    local_8 = CONCAT31(local_8._1_3_,2);
    local_1c = param_3;
    if (param_3 != 0) {
      FUN_007a3580(local_2c);
    }
    uVar1 = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 4) = uVar1;
    uVar1 = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
    uVar1 = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    param_3 = param_3 + 0x10;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  if (local_28 != 0) {
    FUN_00401f20(local_28);
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}



void FUN_00795fb0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_c [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_c;
  *in_ECX = param_2;
  *(undefined4 *)(in_ECX + 4) = param_1;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined2 *)(in_ECX + 0x10) = 0;
  in_ECX[0x12] = 1;
  *(undefined4 *)(in_ECX + 0x14) = 2;
  *(undefined2 *)(in_ECX + 0x20) = 0;
  *(undefined2 *)(in_ECX + 0x22) = 0;
  *(undefined2 *)(in_ECX + 0x24) = 0;
  *(undefined2 *)(in_ECX + 0x26) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  *(undefined4 *)(in_ECX + 0xb4) = 0;
  *(undefined4 *)(in_ECX + 0xbc) = 0;
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  *(undefined4 *)(in_ECX + 0xc4) = 0;
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  *(undefined4 *)(in_ECX + 0xdc) = 0;
  *(undefined4 *)(in_ECX + 0xe0) = 0;
  *(undefined4 *)(in_ECX + 0xe4) = 0;
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  *(undefined4 *)(in_ECX + 0x100) = 0;
  *(undefined4 *)(in_ECX + 0x104) = 0;
  *(undefined4 *)(in_ECX + 0x10c) = 0;
  *(undefined4 *)(in_ECX + 0x110) = 0;
  *(undefined4 *)(in_ECX + 0x114) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void FUN_00796100(ushort param_1,undefined4 param_2,ushort param_3)

{
  int *piVar1;
  ushort uVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  if ((*(int *)(in_ECX + 0x3c) == 0) ||
     ((uint)(*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) >> 4) <= uVar4)) {
    FUN_00984d5e();
  }
  FUN_00795990(*(ushort *)(in_ECX + 0x26) + 1,0);
  if ((*(int *)(in_ECX + 0x3c) == 0) ||
     ((uint)(*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) >> 4) <= uVar4)) {
    FUN_00984d5e();
  }
  iVar3 = uVar4 * 0x10 + *(int *)(in_ECX + 0x3c);
  uVar2 = *(ushort *)(in_ECX + 0x26);
  if ((*(int *)(iVar3 + 4) == 0) ||
     ((uint)(*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 1) <= (uint)uVar2)) {
    FUN_00984d5e();
  }
  *(ushort *)(*(int *)(iVar3 + 4) + (uint)uVar2 * 2) = param_3;
  if ((*(int *)(in_ECX + 0x4c) == 0) ||
     ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <= uVar4)) {
    FUN_00984d5e();
  }
  FUN_007958d0(*(ushort *)(in_ECX + 0x26) + 1,0);
  if ((*(int *)(in_ECX + 0x4c) == 0) ||
     ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <= uVar4)) {
    FUN_00984d5e();
  }
  uVar2 = *(ushort *)(in_ECX + 0x26);
  iVar3 = uVar4 * 0x10 + *(int *)(in_ECX + 0x4c);
  if ((*(int *)(iVar3 + 4) == 0) ||
     ((uint)(*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 2) <= (uint)uVar2)) {
    FUN_00984d5e();
  }
  *(undefined4 *)(*(int *)(iVar3 + 4) + (uint)uVar2 * 4) = param_2;
  if ((*(int *)(in_ECX + 0x2c) == 0) ||
     ((uint)(*(int *)(in_ECX + 0x30) - *(int *)(in_ECX + 0x2c) >> 2) <= uVar4)) {
    FUN_00984d5e();
  }
  piVar1 = (int *)(*(int *)(in_ECX + 0x2c) + uVar4 * 4);
  *piVar1 = *piVar1 + (param_3 - 2);
  return;
}



void FUN_00796230(undefined4 param_1)

{
  param_1 = FUN_007944c0(param_1);
  FUN_00795c30(&param_1);
  return;
}



void FUN_00796260(undefined4 *param_1)

{
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *param_1;
  local_8 = param_1[1];
  local_4 = param_1[2];
  FUN_00785f30(&local_c);
  FUN_00785f30(&local_8);
  FUN_00785f30(&local_4);
  if ((*(char *)(in_ECX + 8) != '\0') && (*(int *)(in_ECX + 0x14) == 1)) {
    FUN_00785f30(&local_c);
    FUN_00785f30(&local_8);
    FUN_00785f30(&local_4);
  }
  return;
}



void FUN_007962f0(int param_1)

{
  FUN_00785f30(param_1);
  FUN_00785f30(param_1 + 4);
  FUN_00785f30(param_1 + 8);
  return;
}



void FUN_00796320(undefined4 *param_1,short param_2)

{
  float fVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *in_ECX;
  
  if (*(int *)(in_ECX + 0xbc) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(in_ECX + 0xc0) - *(int *)(in_ECX + 0xbc) >> 2;
  }
  if ((uint)*(ushort *)(in_ECX + 0x22) == uVar4 >> 1) {
    if (*(int *)(in_ECX + 0xbc) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_ECX + 0xc0) - *(int *)(in_ECX + 0xbc) >> 2;
    }
    FUN_00527160(iVar5 + 2,0);
    if (param_2 < 0) goto LAB_0079647d;
    if (*in_ECX != '\0') {
      if (*(int *)(in_ECX + 0xdc) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_ECX + 0xe0) - *(int *)(in_ECX + 0xdc);
      }
      FUN_006ef4b0(iVar5 + 1,0);
      if (*(int *)(in_ECX + 0xcc) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_ECX + 0xd0) - *(int *)(in_ECX + 0xcc) >> 2;
      }
      FUN_00527160(iVar5 + 2,0);
    }
  }
  if ((-1 < param_2) && (*in_ECX != '\0')) {
    uVar2 = *(ushort *)(in_ECX + 0x22);
    if ((*(int *)(in_ECX + 0xdc) == 0) ||
       ((uint)(*(int *)(in_ECX + 0xe0) - *(int *)(in_ECX + 0xdc)) <= (uint)uVar2)) {
      FUN_00984d5e();
    }
    *(char *)((uint)uVar2 + *(int *)(in_ECX + 0xdc)) = (char)param_2;
    uVar2 = *(ushort *)(in_ECX + 0x22);
    if ((*(int *)(in_ECX + 0xcc) == 0) ||
       ((uint)(*(int *)(in_ECX + 0xd0) - *(int *)(in_ECX + 0xcc) >> 2) <= (uint)uVar2 * 2)) {
      FUN_00984d5e();
    }
    *(undefined4 *)(*(int *)(in_ECX + 0xcc) + (uint)uVar2 * 8) = *param_1;
    uVar4 = (uint)*(ushort *)(in_ECX + 0x22) * 2 + 1;
    if ((*(int *)(in_ECX + 0xcc) == 0) ||
       ((uint)(*(int *)(in_ECX + 0xd0) - *(int *)(in_ECX + 0xcc) >> 2) <= uVar4)) {
      FUN_00984d5e();
    }
    *(undefined4 *)(*(int *)(in_ECX + 0xcc) + uVar4 * 4) = param_1[1];
  }
LAB_0079647d:
  uVar2 = *(ushort *)(in_ECX + 0x22);
  if ((*(int *)(in_ECX + 0xbc) == 0) ||
     ((uint)(*(int *)(in_ECX + 0xc0) - *(int *)(in_ECX + 0xbc) >> 2) <= (uint)uVar2 * 2)) {
    FUN_00984d5e();
  }
  *(undefined4 *)(*(int *)(in_ECX + 0xbc) + (uint)uVar2 * 8) = *param_1;
  cVar3 = FUN_00787680();
  fVar1 = (float)param_1[1];
  if (cVar3 != '\0') {
    fVar1 = -fVar1;
  }
  uVar4 = (uint)*(ushort *)(in_ECX + 0x22) * 2 + 1;
  if ((*(int *)(in_ECX + 0xbc) == 0) ||
     ((uint)(*(int *)(in_ECX + 0xc0) - *(int *)(in_ECX + 0xbc) >> 2) <= uVar4)) {
    FUN_00984d5e();
  }
  *(float *)(*(int *)(in_ECX + 0xbc) + uVar4 * 4) = fVar1;
  return;
}



void FUN_007964f0(float param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = (int)param_1;
  FUN_00785f30(param_1);
  cVar2 = FUN_00787680();
  if (cVar2 != '\0') {
    param_1 = -*(float *)(iVar1 + 4);
    FUN_00785f30(&param_1);
    return;
  }
  FUN_00785f30(iVar1 + 4);
  return;
}



void FUN_00796540(float param_1,byte param_2)

{
  int in_ECX;
  
  param_1 = 1.0 - param_1;
  param_2 = (char)((uint)param_2 % *(uint *)(*(int *)(in_ECX + 4) + 0x2c)) +
            *(char *)(*(int *)(in_ECX + 4) + 0x28);
  FUN_00785f30(&param_1);
  FUN_0078d4e0(&param_2);
  return;
}



void FUN_00796590(undefined4 *param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *param_1;
  local_8 = param_1[1];
  local_4 = param_1[2];
  FUN_00785f30(&local_c);
  FUN_00785f30(&local_8);
  FUN_00785f30(&local_4);
  return;
}



void FUN_007965e0(undefined4 *param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *param_1;
  local_8 = param_1[1];
  local_4 = param_1[2];
  FUN_00785f30(&local_c);
  FUN_00785f30(&local_8);
  FUN_00785f30(&local_4);
  return;
}



void FUN_00796630(char param_1,float *param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  int in_ECX;
  float local_8;
  float local_4;
  
  uVar2 = *(ushort *)(in_ECX + 0x22);
  if ((*(int *)(in_ECX + 0xdc) == 0) ||
     ((uint)(*(int *)(in_ECX + 0xe0) - *(int *)(in_ECX + 0xdc)) <= (uint)uVar2)) {
    FUN_00984d5e();
  }
  if (param_1 == *(char *)((uint)uVar2 + *(int *)(in_ECX + 0xdc))) {
    uVar2 = *(ushort *)(in_ECX + 0x22);
    if ((*(int *)(in_ECX + 0xcc) == 0) ||
       ((uint)(*(int *)(in_ECX + 0xd0) - *(int *)(in_ECX + 0xcc) >> 2) <= (uint)uVar2 * 2)) {
      FUN_00984d5e();
    }
    iVar3 = *(int *)(in_ECX + 0xcc);
    uVar1 = (uint)*(ushort *)(in_ECX + 0x22) * 2 + 1;
    local_8 = param_2[2] + *(float *)(iVar3 + (uint)uVar2 * 8) * (*param_2 - param_2[2]);
    if ((iVar3 == 0) || ((uint)(*(int *)(in_ECX + 0xd0) - iVar3 >> 2) <= uVar1)) {
      FUN_00984d5e();
    }
    local_4 = param_2[5] +
              *(float *)(*(int *)(in_ECX + 0xcc) + uVar1 * 4) * (param_2[1] - param_2[5]);
    cVar4 = FUN_00787680();
    if (cVar4 != '\0') {
      local_4 = -local_4;
    }
    FUN_00796320(&local_8,0xffffffff);
  }
  return;
}



void FUN_00796730(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00984d5e();
  }
  if (param_3 != param_5) {
    uVar1 = FUN_00795ca0(param_5,*(undefined4 *)(in_ECX + 8),param_3);
    FUN_00794fc0(uVar1,*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = uVar1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



void FUN_00796790(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00984d5e();
  }
  if (param_3 != param_5) {
    uVar1 = FUN_00795ce0(param_5,*(undefined4 *)(in_ECX + 8),param_3);
    FUN_00794fc0(uVar1,*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = uVar1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



void FUN_007967f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00795ad0(param_1,param_2,param_3);
  return;
}



void FUN_00796820(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00795b80(param_1,param_2,param_3);
  return;
}



void FUN_00796850(void)

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
  FUN_00796730(local_8,in_ECX,uVar2,in_ECX,uVar1);
  return;
}



void FUN_00796890(void)

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
  FUN_00796790(local_8,in_ECX,uVar2,in_ECX,uVar1);
  return;
}



int FUN_007968d0(int param_1,int param_2,undefined4 param_3)

{
  FUN_00795d50(param_1,param_2,param_3);
  return param_2 * 0x10 + param_1;
}



void FUN_00796910(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00795e00(param_1,param_2,param_3);
  return;
}



int FUN_00796940(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  while (param_1 != param_2) {
    param_2 = param_2 + -0x10;
    FUN_00795630(param_2);
  }
  return param_3 + (iVar1 >> 4) * -0x10;
}



void FUN_00796980(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00795ed0(param_1,param_2,param_3);
  return;
}



void FUN_007969b0(void)

{
  int *piVar1;
  rsize_t _DstSize;
  void *_Src;
  void *_Dst;
  uint uVar2;
  int *piVar3;
  int in_ECX;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  for (local_c = 0;
      (uVar4 = *(uint *)(in_ECX + 0x4c), uVar4 != 0 &&
      (local_c < (uint)((int)(*(int *)(in_ECX + 0x50) - uVar4) >> 4))); local_c = local_c + 1) {
    uVar4 = 0;
    while( true ) {
      if ((*(int *)(in_ECX + 0x4c) == 0) ||
         ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <= local_c)) {
        FUN_00984d5e();
      }
      iVar7 = *(int *)(*(int *)(in_ECX + 0x4c) + 4 + local_8);
      if ((iVar7 == 0) ||
         ((uint)(*(int *)(*(int *)(in_ECX + 0x4c) + local_8 + 8) - iVar7 >> 2) <= uVar4)) break;
      if ((*(int *)(in_ECX + 0x4c) == 0) ||
         ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <= local_c)) {
        FUN_00984d5e();
      }
      iVar7 = *(int *)(*(int *)(in_ECX + 0x4c) + 4 + local_8);
      iVar6 = *(int *)(in_ECX + 0x4c) + local_8;
      if ((iVar7 == 0) || ((uint)(*(int *)(iVar6 + 8) - iVar7 >> 2) <= uVar4)) {
        FUN_00984d5e();
      }
      FUN_00401f20(*(undefined4 *)(*(int *)(iVar6 + 4) + uVar4 * 4));
      if ((*(int *)(in_ECX + 0x4c) == 0) ||
         ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <= local_c)) {
        FUN_00984d5e();
      }
      iVar7 = *(int *)(*(int *)(in_ECX + 0x4c) + 4 + local_8);
      iVar6 = *(int *)(in_ECX + 0x4c) + local_8;
      if ((iVar7 == 0) || ((uint)(*(int *)(iVar6 + 8) - iVar7 >> 2) <= uVar4)) {
        FUN_00984d5e();
      }
      *(undefined4 *)(*(int *)(iVar6 + 4) + uVar4 * 4) = 0;
      uVar4 = uVar4 + 1;
    }
    if ((*(int *)(in_ECX + 0x4c) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <= local_c)) {
      FUN_00984d5e();
    }
    _Src = *(void **)(*(int *)(in_ECX + 0x4c) + 8 + local_8);
    iVar7 = *(int *)(in_ECX + 0x4c) + local_8;
    if (_Src < *(void **)(iVar7 + 4)) {
      FUN_00984d5e();
    }
    _Dst = *(void **)(iVar7 + 4);
    if (*(void **)(iVar7 + 8) < _Dst) {
      FUN_00984d5e();
    }
    if (_Dst != _Src) {
      iVar6 = *(int *)(iVar7 + 8) - (int)_Src >> 2;
      _DstSize = iVar6 * 4;
      if (0 < iVar6) {
        _memmove_s(_Dst,_DstSize,_Src,_DstSize);
      }
      *(void **)(iVar7 + 8) = (void *)(_DstSize + (int)_Dst);
    }
    local_8 = local_8 + 0x10;
  }
  uVar8 = *(uint *)(in_ECX + 0x50);
  if (uVar8 < uVar4) {
    FUN_00984d5e();
  }
  uVar4 = *(uint *)(in_ECX + 0x4c);
  if (*(uint *)(in_ECX + 0x50) < uVar4) {
    FUN_00984d5e();
  }
  if (uVar4 != uVar8) {
    uVar2 = *(uint *)(in_ECX + 0x50);
    piVar5 = (int *)(((int)(uVar2 - uVar8) >> 4) * 0x10 + uVar4);
    for (; uVar8 != uVar2; uVar8 = uVar8 + 0x10) {
      FUN_0079b2f0(uVar8);
    }
    piVar3 = *(int **)(in_ECX + 0x50);
    if (piVar5 != piVar3) {
      piVar9 = piVar5 + 1;
      do {
        if (*piVar9 != 0) {
          FUN_00401f20(*piVar9);
        }
        *piVar9 = 0;
        piVar9[1] = 0;
        piVar9[2] = 0;
        piVar1 = piVar9 + 3;
        piVar9 = piVar9 + 4;
      } while (piVar1 != piVar3);
    }
    *(int **)(in_ECX + 0x50) = piVar5;
  }
  return;
}



void FUN_00796bc0(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar6 = *(int *)(param_1 + 4);
  if (iVar6 != 0) {
    uVar7 = *(int *)(param_1 + 8) - iVar6 >> 4;
    if (uVar7 != 0) {
      iVar1 = *(int *)(in_ECX + 4);
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)(in_ECX + 8) - iVar1 >> 4;
      }
      if (uVar7 <= uVar3) {
        uVar4 = FUN_00795ca0(iVar6,*(int *)(param_1 + 8),iVar1);
        FUN_00794fc0(uVar4,*(undefined4 *)(in_ECX + 8));
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4) * 0x10 + *(int *)(in_ECX + 4);
        return;
      }
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)(in_ECX + 0xc) - iVar1 >> 4;
      }
      if (uVar3 < uVar7) {
        if (iVar1 != 0) {
          FUN_00795820(iVar1,*(undefined4 *)(in_ECX + 8));
          FUN_00401f20(*(undefined4 *)(in_ECX + 4));
        }
        if (*(int *)(param_1 + 4) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
        }
        cVar2 = FUN_00795050(iVar6);
        if (cVar2 == '\0') {
          return;
        }
        uVar4 = FUN_007967f0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                             *(undefined4 *)(in_ECX + 4));
        *(undefined4 *)(in_ECX + 8) = uVar4;
        return;
      }
      if (iVar1 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_ECX + 8) - iVar1 >> 4;
      }
      iVar5 = iVar5 * 0x10 + iVar6;
      FUN_00795ca0(iVar6,iVar5,iVar1);
      uVar4 = FUN_007967f0(iVar5,*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_ECX + 8));
      *(undefined4 *)(in_ECX + 8) = uVar4;
      return;
    }
  }
  FUN_00796850();
  return;
}



void FUN_00796d10(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar6 = *(int *)(param_1 + 4);
  if (iVar6 != 0) {
    uVar7 = *(int *)(param_1 + 8) - iVar6 >> 4;
    if (uVar7 != 0) {
      iVar1 = *(int *)(in_ECX + 4);
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)(in_ECX + 8) - iVar1 >> 4;
      }
      if (uVar7 <= uVar3) {
        uVar4 = FUN_00795ce0(iVar6,*(int *)(param_1 + 8),iVar1);
        FUN_00794fc0(uVar4,*(undefined4 *)(in_ECX + 8));
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4) * 0x10 + *(int *)(in_ECX + 4);
        return;
      }
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)(in_ECX + 0xc) - iVar1 >> 4;
      }
      if (uVar3 < uVar7) {
        if (iVar1 != 0) {
          FUN_00795820(iVar1,*(undefined4 *)(in_ECX + 8));
          FUN_00401f20(*(undefined4 *)(in_ECX + 4));
        }
        if (*(int *)(param_1 + 4) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
        }
        cVar2 = FUN_00795050(iVar6);
        if (cVar2 == '\0') {
          return;
        }
        uVar4 = FUN_00796820(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                             *(undefined4 *)(in_ECX + 4));
        *(undefined4 *)(in_ECX + 8) = uVar4;
        return;
      }
      if (iVar1 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_ECX + 8) - iVar1 >> 4;
      }
      iVar5 = iVar5 * 0x10 + iVar6;
      FUN_00795ce0(iVar6,iVar5,iVar1);
      uVar4 = FUN_00796820(iVar5,*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_ECX + 8));
      *(undefined4 *)(in_ECX + 8) = uVar4;
      return;
    }
  }
  FUN_00796890();
  return;
}



void FUN_00796e60(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009cbf70;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uVar1 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (param_1 != 0) {
    if (0xfffffff < param_1) {
      uVar1 = FUN_00790b90();
    }
    iVar2 = FUN_00794550(param_1,uVar1);
    *(uint *)(in_ECX + 0xc) = param_1 * 0x10 + iVar2;
    *(int *)(in_ECX + 4) = iVar2;
    *(int *)(in_ECX + 8) = iVar2;
    local_8 = 0;
    FUN_00795d50(iVar2,param_1,param_2);
    *(uint *)(in_ECX + 8) = param_1 * 0x10 + iVar2;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_00796f20(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009cbf90;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uVar1 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (param_1 != 0) {
    if (0xfffffff < param_1) {
      uVar1 = FUN_00790b90();
    }
    iVar2 = FUN_00794550(param_1,uVar1);
    *(uint *)(in_ECX + 0xc) = param_1 * 0x10 + iVar2;
    *(int *)(in_ECX + 4) = iVar2;
    *(int *)(in_ECX + 8) = iVar2;
    local_8 = 0;
    FUN_0079bf40(iVar2,param_1,param_2);
    *(uint *)(in_ECX + 8) = param_1 * 0x10 + iVar2;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_00796fe0(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int extraout_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  uint uStack_3c;
  undefined1 local_2c [4];
  int local_28;
  uint local_1c;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009cbfb8;
  local_10 = *unaff_FS_OFFSET;
  uStack_3c = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  *unaff_FS_OFFSET = (int)&local_10;
  FUN_00795480(param_4);
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = 0;
  local_8 = 0;
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)(in_ECX + 0xc) - iVar2 >> 4;
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
    if (uVar5 < iVar1 + param_3) {
      if (0xfffffff - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(in_ECX + 8) - iVar2 >> 4;
      }
      if (uVar5 < iVar1 + param_3) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(in_ECX + 8) - iVar2 >> 4;
        }
        uVar5 = iVar2 + param_3;
      }
      iVar1 = FUN_00794550(uVar5,0);
      local_1c = local_1c & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,1);
      uVar3 = FUN_00795e00(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar3 = FUN_007968d0(uVar3,param_3,local_2c);
      local_1c = local_1c & 0xffffff00;
      FUN_00795e00(param_2,*(undefined4 *)(in_ECX + 8),uVar3);
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_ECX + 8) - iVar2 >> 4;
      }
      if (iVar2 != 0) {
        FUN_00794fc0(iVar2,*(undefined4 *)(in_ECX + 8));
        FUN_00401f20(*(undefined4 *)(in_ECX + 4));
      }
      *(uint *)(in_ECX + 0xc) = uVar5 * 0x10 + iVar1;
      *(uint *)(in_ECX + 8) = (param_3 + iVar4) * 0x10 + iVar1;
      *(int *)(in_ECX + 4) = iVar1;
    }
    else {
      local_1c = *(uint *)(in_ECX + 8);
      if ((uint)((int)(local_1c - param_2) >> 4) < param_3) {
        FUN_00796910(param_2,local_1c,param_3 * 0x10 + param_2);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_007968d0(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2 >> 4),local_2c);
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x10;
        local_8 = 0;
        FUN_00795d20(param_2,*(int *)(in_ECX + 8) + param_3 * -0x10,local_2c);
      }
      else {
        iVar2 = local_1c + param_3 * -0x10;
        uVar3 = FUN_00796910(iVar2,local_1c,local_1c);
        *(undefined4 *)(in_ECX + 8) = uVar3;
        FUN_00796940(param_2,iVar2,local_1c);
        FUN_00795d20(param_2,param_3 * 0x10 + param_2,local_2c);
      }
    }
  }
  if (local_28 != 0) {
    FUN_00401f20(local_28);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_00797270(void)

{
  uint uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cc0a0;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0xe;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0xc),uVar1);
  *(undefined4 *)(in_ECX + 0xc) = 0;
  FUN_007969b0();
  if (*(int *)(in_ECX + 0x10c) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x10c),uVar1);
  }
  *(undefined4 *)(in_ECX + 0x10c) = 0;
  *(undefined4 *)(in_ECX + 0x110) = 0;
  *(undefined4 *)(in_ECX + 0x114) = 0;
  if (*(int *)(in_ECX + 0xfc) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0xfc),uVar1);
  }
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  *(undefined4 *)(in_ECX + 0x100) = 0;
  *(undefined4 *)(in_ECX + 0x104) = 0;
  if (*(int *)(in_ECX + 0xec) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0xec),uVar1);
  }
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  if (*(int *)(in_ECX + 0xdc) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0xdc));
  }
  *(undefined4 *)(in_ECX + 0xdc) = 0;
  *(undefined4 *)(in_ECX + 0xe0) = 0;
  *(undefined4 *)(in_ECX + 0xe4) = 0;
  if (*(int *)(in_ECX + 0xcc) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0xcc));
  }
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  if (*(int *)(in_ECX + 0xbc) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0xbc));
  }
  *(undefined4 *)(in_ECX + 0xbc) = 0;
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  *(undefined4 *)(in_ECX + 0xc4) = 0;
  if (*(int *)(in_ECX + 0xac) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0xac));
  }
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  *(undefined4 *)(in_ECX + 0xb4) = 0;
  if (*(int *)(in_ECX + 0x9c) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x9c));
  }
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  if (*(int *)(in_ECX + 0x8c) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x8c));
  }
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  if (*(int *)(in_ECX + 0x7c) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x7c));
  }
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  if (*(int *)(in_ECX + 0x6c) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x6c));
  }
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  if (*(int *)(in_ECX + 0x5c) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x5c));
  }
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  if (*(int *)(in_ECX + 0x4c) != 0) {
    FUN_00794fc0(*(int *)(in_ECX + 0x4c),*(undefined4 *)(in_ECX + 0x50),in_ECX + 0x48,in_ECX);
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x4c));
  }
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  if (*(int *)(in_ECX + 0x3c) != 0) {
    FUN_00794fc0(*(int *)(in_ECX + 0x3c),*(undefined4 *)(in_ECX + 0x40),in_ECX + 0x38,in_ECX);
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x3c));
  }
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  if (*(int *)(in_ECX + 0x2c) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x2c));
  }
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007974f0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cbd68;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  FUN_00796e60(param_1,local_1c);
  if (local_18 != 0) {
    FUN_00401f20(local_18,uVar1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00797570(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cbd68;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  FUN_00796f20(param_1,local_1c);
  if (local_18 != 0) {
    FUN_00401f20(local_18,uVar1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007975f0(uint param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined1 local_14 [4];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cc0c8;
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
    uVar3 = (int)(*(int *)(in_ECX + 8) - uVar1) >> 4;
  }
  if (uVar3 < param_1) {
    if (uVar1 != 0) {
      iVar4 = (int)(*(int *)(in_ECX + 8) - uVar1) >> 4;
    }
    uVar3 = *(uint *)(in_ECX + 8);
    if (uVar3 < uVar1) {
      FUN_00984d5e(uVar2);
    }
    FUN_00796fe0(in_ECX,uVar3,param_1 - iVar4,&param_2);
  }
  else if ((uVar1 != 0) &&
          (uVar3 = *(uint *)(in_ECX + 8), param_1 < (uint)((int)(uVar3 - uVar1) >> 4))) {
    if (uVar3 < uVar1) {
      FUN_00984d5e(uVar2);
    }
    uVar1 = *(uint *)(in_ECX + 4);
    if (*(uint *)(in_ECX + 8) < uVar1) {
      FUN_00984d5e(uVar2);
    }
    uVar5 = param_1 * 0x10 + uVar1;
    local_10 = uVar1;
    if ((*(uint *)(in_ECX + 8) < uVar5) || (uVar5 < *(uint *)(in_ECX + 4))) {
      FUN_00984d5e(uVar2);
    }
    FUN_00796730(local_14,in_ECX,uVar5,in_ECX,uVar3);
  }
  if (param_3 != 0) {
    FUN_00401f20(param_3);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007976e0(uint param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined1 local_14 [4];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cc0c8;
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
    uVar3 = (int)(*(int *)(in_ECX + 8) - uVar1) >> 4;
  }
  if (uVar3 < param_1) {
    if (uVar1 != 0) {
      iVar4 = (int)(*(int *)(in_ECX + 8) - uVar1) >> 4;
    }
    uVar3 = *(uint *)(in_ECX + 8);
    if (uVar3 < uVar1) {
      FUN_00984d5e(uVar2);
    }
    FUN_0079ebb0(in_ECX,uVar3,param_1 - iVar4,&param_2);
  }
  else if ((uVar1 != 0) &&
          (uVar3 = *(uint *)(in_ECX + 8), param_1 < (uint)((int)(uVar3 - uVar1) >> 4))) {
    if (uVar3 < uVar1) {
      FUN_00984d5e(uVar2);
    }
    uVar1 = *(uint *)(in_ECX + 4);
    if (*(uint *)(in_ECX + 8) < uVar1) {
      FUN_00984d5e(uVar2);
    }
    uVar5 = param_1 * 0x10 + uVar1;
    local_10 = uVar1;
    if ((*(uint *)(in_ECX + 8) < uVar5) || (uVar5 < *(uint *)(in_ECX + 4))) {
      FUN_00984d5e(uVar2);
    }
    FUN_00796790(local_14,in_ECX,uVar5,in_ECX,uVar3);
  }
  if (param_3 != 0) {
    FUN_00401f20(param_3);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x007979c7) */

int FUN_007977d0(undefined4 param_1)

{
  rsize_t rVar1;
  undefined4 *puVar2;
  void *pvVar3;
  size_t _Size;
  uint uVar4;
  uint uVar5;
  int in_ECX;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  int *unaff_FS_OFFSET;
  bool bVar14;
  uint local_6c;
  undefined2 *local_60;
  undefined2 *local_54;
  void *local_50;
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cc108;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff84;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x6c) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) >> 2;
  }
  iVar12 = uVar6 * -0x55555555;
  if ((short)(uVar6 / 3) != 0) {
    FUN_007974f0(*(undefined2 *)(in_ECX + 0x20));
    local_4 = 0;
    FUN_00797570(*(undefined2 *)(in_ECX + 0x20));
    local_4._0_1_ = 1;
    local_54 = (undefined2 *)0x0;
    FUN_007956b0(*(undefined2 *)(in_ECX + 0x20),&local_54);
    local_4 = CONCAT31(local_4._1_3_,2);
    uVar10 = 0;
    if (*(short *)(in_ECX + 0x20) != 0) {
      do {
        uVar9 = 0;
        local_6c = 0;
        while (-1 < (short)uVar10) {
          if ((*(int *)(in_ECX + 0x4c) == 0) ||
             ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <=
              (uint)(int)(short)uVar10)) {
            FUN_00984d5e();
          }
          iVar11 = (short)uVar10 * 0x10 + *(int *)(in_ECX + 0x4c);
          iVar12 = *(int *)(iVar11 + 4);
          if ((iVar12 == 0) || ((ushort)(*(int *)(iVar11 + 8) - iVar12 >> 2) <= uVar9)) break;
          if ((*(int *)(in_ECX + 0x3c) == 0) ||
             ((uint)(*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) >> 4) <= (uint)uVar10)) {
            FUN_00984d5e();
          }
          iVar12 = (uint)uVar10 * 0x10 + *(int *)(in_ECX + 0x3c);
          if ((*(int *)(iVar12 + 4) == 0) ||
             ((uint)(*(int *)(iVar12 + 8) - *(int *)(iVar12 + 4) >> 1) <= (uint)uVar9)) {
            FUN_00984d5e();
          }
          local_6c = local_6c + *(ushort *)(*(int *)(iVar12 + 4) + (uint)uVar9 * 2);
          uVar9 = uVar9 + 1;
        }
        if ((int)local_6c < 1) {
          puVar13 = (undefined2 *)(uint)uVar10;
          local_54 = puVar13;
          if ((local_28 == 0) || ((undefined2 *)(local_24 - local_28 >> 4) <= puVar13)) {
            FUN_00984d5e();
          }
          iVar12 = (int)puVar13 * 0x10 + local_28;
          pvVar7 = *(void **)(iVar12 + 8);
          if (pvVar7 < *(void **)(iVar12 + 4)) {
            FUN_00984d5e();
          }
          pvVar3 = *(void **)(iVar12 + 4);
          if (*(void **)(iVar12 + 8) < pvVar3) {
            FUN_00984d5e();
          }
          if (pvVar3 != pvVar7) {
            iVar11 = *(int *)(iVar12 + 8) - (int)pvVar7 >> 1;
            rVar1 = iVar11 * 2;
            local_50 = (void *)(rVar1 + (int)pvVar3);
            if (0 < iVar11) {
              _memmove_s(pvVar3,rVar1,pvVar7,rVar1);
            }
            *(void **)(iVar12 + 8) = local_50;
          }
          if ((local_38 == 0) || ((undefined2 *)(local_34 - local_38 >> 4) <= local_54)) {
            FUN_00984d5e();
          }
          pvVar7 = *(void **)((int)local_54 * 0x10 + 8 + local_38);
          iVar12 = (int)local_54 * 0x10 + local_38;
          if (pvVar7 < *(void **)(iVar12 + 4)) {
            FUN_00984d5e();
          }
          pvVar3 = *(void **)(iVar12 + 4);
          if (*(void **)(iVar12 + 8) < pvVar3) {
            FUN_00984d5e();
          }
          if (pvVar3 != pvVar7) {
            iVar11 = *(int *)(iVar12 + 8) - (int)pvVar7 >> 2;
            rVar1 = iVar11 * 4;
            local_50 = (void *)(rVar1 + (int)pvVar3);
            if (0 < iVar11) {
              _memmove_s(pvVar3,rVar1,pvVar7,rVar1);
            }
            *(void **)(iVar12 + 8) = local_50;
          }
          if ((local_18 == 0) || ((uint)(local_14 - local_18 >> 2) <= (uint)uVar10)) {
            FUN_00984d5e();
          }
          *(undefined4 *)(local_18 + (uint)uVar10 * 4) = 0;
        }
        else {
          if ((char)param_1 == '\0') {
            if ((short)uVar10 < 0) {
LAB_00797a2b:
              uVar6 = 0;
            }
            else {
              if ((*(int *)(in_ECX + 0x4c) == 0) ||
                 ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <=
                  (uint)(int)(short)uVar10)) {
                FUN_00984d5e();
              }
              iVar11 = (short)uVar10 * 0x10 + *(int *)(in_ECX + 0x4c);
              iVar12 = *(int *)(iVar11 + 4);
              if (iVar12 == 0) goto LAB_00797a2b;
              uVar6 = *(int *)(iVar11 + 8) - iVar12 >> 2 & 0xffff;
            }
            if (uVar6 != 0) {
              uVar6 = uVar6 - 1;
            }
            local_6c = local_6c + uVar6 * 2;
          }
          else {
            uVar6 = 0;
LAB_00797930:
            if ((short)uVar10 < 0) {
LAB_0079796b:
              uVar5 = 0;
            }
            else {
              if ((*(int *)(in_ECX + 0x4c) == 0) ||
                 ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <=
                  (uint)(int)(short)uVar10)) {
                FUN_00984d5e();
              }
              iVar11 = (short)uVar10 * 0x10 + *(int *)(in_ECX + 0x4c);
              iVar12 = *(int *)(iVar11 + 4);
              if (iVar12 == 0) goto LAB_0079796b;
              uVar5 = *(int *)(iVar11 + 8) - iVar12 >> 2 & 0xffff;
            }
            uVar8 = uVar6 & 0xffff;
            if ((int)uVar8 < (int)(uVar5 - 1)) {
              if ((*(int *)(in_ECX + 0x3c) == 0) ||
                 ((uint)(*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) >> 4) <= (uint)uVar10)) {
                FUN_00984d5e();
              }
              iVar12 = (uint)uVar10 * 0x10 + *(int *)(in_ECX + 0x3c);
              if ((*(int *)(iVar12 + 4) == 0) ||
                 ((uint)(*(int *)(iVar12 + 8) - *(int *)(iVar12 + 4) >> 1) <= uVar8)) {
                FUN_00984d5e();
              }
              if ((*(ushort *)(*(int *)(iVar12 + 4) + uVar8 * 2) & 1) == 0) {
                local_6c = local_6c + 2;
                uVar6 = uVar6 + 1;
              }
              else {
                local_6c = local_6c + 3;
                uVar6 = uVar6 + 1;
              }
              goto LAB_00797930;
            }
          }
          local_60 = (undefined2 *)
                     FUN_00401f00(-(uint)((int)((ulonglong)local_6c * 2 >> 0x20) != 0) |
                                  (uint)((ulonglong)local_6c * 2));
          uVar9 = 0;
          local_54 = local_60;
          while (-1 < (short)uVar10) {
            uVar6 = (uint)(short)uVar10;
            if ((*(int *)(in_ECX + 0x4c) == 0) ||
               ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <= uVar6)) {
              FUN_00984d5e();
            }
            iVar11 = uVar6 * 0x10 + *(int *)(in_ECX + 0x4c);
            iVar12 = *(int *)(iVar11 + 4);
            if ((iVar12 == 0) || ((ushort)(*(int *)(iVar11 + 8) - iVar12 >> 2) <= uVar9)) break;
            uVar5 = (uint)uVar10;
            if ((*(int *)(in_ECX + 0x3c) == 0) ||
               ((uint)(*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) >> 4) <= uVar5)) {
              FUN_00984d5e();
            }
            uVar8 = (uint)uVar9;
            iVar12 = uVar5 * 0x10 + *(int *)(in_ECX + 0x3c);
            if ((*(int *)(iVar12 + 4) == 0) ||
               ((uint)(*(int *)(iVar12 + 8) - *(int *)(iVar12 + 4) >> 1) <= uVar8)) {
              FUN_00984d5e();
            }
            pvVar7 = (void *)(uint)*(ushort *)(*(int *)(iVar12 + 4) + uVar8 * 2);
            if ((*(int *)(in_ECX + 0x4c) == 0) ||
               ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <= uVar5)) {
              FUN_00984d5e();
            }
            iVar12 = uVar5 * 0x10 + *(int *)(in_ECX + 0x4c);
            if ((*(int *)(iVar12 + 4) == 0) ||
               ((uint)(*(int *)(iVar12 + 8) - *(int *)(iVar12 + 4) >> 2) <= uVar8)) {
              FUN_00984d5e();
            }
            _Size = (int)pvVar7 * 2;
            local_50 = pvVar7;
            _memcpy(local_60,*(void **)(*(int *)(iVar12 + 4) + uVar8 * 4),_Size);
            local_60 = local_60 + (int)pvVar7;
            if ((*(int *)(in_ECX + 0x4c) == 0) ||
               ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <= uVar6)) {
              FUN_00984d5e();
            }
            iVar11 = uVar6 * 0x10 + *(int *)(in_ECX + 0x4c);
            iVar12 = *(int *)(iVar11 + 4);
            if (iVar12 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = *(int *)(iVar11 + 8) - iVar12 >> 2 & 0xffff;
            }
            if ((int)uVar8 < (int)(uVar6 - 1)) {
              if ((char)param_1 == '\0') {
                iVar12 = *(int *)(in_ECX + 0x4c);
LAB_00797ce2:
                if ((iVar12 == 0) || ((uint)(*(int *)(in_ECX + 0x50) - iVar12 >> 4) <= uVar5)) {
                  FUN_00984d5e();
                }
                local_50 = (void *)(uVar5 * 0x10 + *(int *)(in_ECX + 0x4c));
                if ((*(int *)((int)local_50 + 4) == 0) ||
                   ((uint)(*(int *)((int)local_50 + 8) - *(int *)((int)local_50 + 4) >> 2) <= uVar8)
                   ) {
                  FUN_00984d5e();
                }
                *local_60 = *(undefined2 *)
                             (*(int *)(*(int *)((int)local_50 + 4) + uVar8 * 4) + -2 + _Size);
                if ((*(int *)(in_ECX + 0x4c) == 0) ||
                   ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <= uVar5)) {
                  FUN_00984d5e();
                }
                iVar12 = uVar5 * 0x10 + *(int *)(in_ECX + 0x4c);
                if ((*(int *)(iVar12 + 4) == 0) ||
                   ((uint)(*(int *)(iVar12 + 8) - *(int *)(iVar12 + 4) >> 2) <= uVar8 + 1)) {
                  FUN_00984d5e();
                }
                local_60[1] = **(undefined2 **)(*(int *)(iVar12 + 4) + (uVar8 + 1) * 4);
                local_60 = local_60 + 2;
                goto LAB_00797d80;
              }
              uVar6 = (uint)local_50 & 0x80000001;
              bVar14 = uVar6 == 0;
              if ((int)uVar6 < 0) {
                bVar14 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
              }
              iVar12 = *(int *)(in_ECX + 0x4c);
              if (bVar14) goto LAB_00797ce2;
              if ((iVar12 == 0) || ((uint)(*(int *)(in_ECX + 0x50) - iVar12 >> 4) <= uVar5)) {
                FUN_00984d5e();
              }
              local_50 = (void *)(uVar5 * 0x10 + *(int *)(in_ECX + 0x4c));
              if ((*(int *)((int)local_50 + 4) == 0) ||
                 ((uint)(*(int *)((int)local_50 + 8) - *(int *)((int)local_50 + 4) >> 2) <= uVar8))
              {
                FUN_00984d5e();
              }
              *local_60 = *(undefined2 *)
                           (*(int *)(*(int *)((int)local_50 + 4) + uVar8 * 4) + -2 + _Size);
              if ((*(int *)(in_ECX + 0x4c) == 0) ||
                 ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <= uVar5)) {
                FUN_00984d5e();
              }
              local_50 = (void *)(uVar5 * 0x10 + *(int *)(in_ECX + 0x4c));
              if ((*(int *)((int)local_50 + 4) == 0) ||
                 ((uint)(*(int *)((int)local_50 + 8) - *(int *)((int)local_50 + 4) >> 2) <= uVar8))
              {
                FUN_00984d5e();
              }
              local_60[1] = *(undefined2 *)
                             (*(int *)(*(int *)((int)local_50 + 4) + uVar8 * 4) + -2 + _Size);
              if ((*(int *)(in_ECX + 0x4c) == 0) ||
                 ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <= uVar5)) {
                FUN_00984d5e();
              }
              iVar12 = uVar5 * 0x10 + *(int *)(in_ECX + 0x4c);
              if ((*(int *)(iVar12 + 4) == 0) ||
                 ((uint)(*(int *)(iVar12 + 8) - *(int *)(iVar12 + 4) >> 2) <= uVar8 + 1)) {
                FUN_00984d5e();
              }
              local_60[2] = **(undefined2 **)(*(int *)(iVar12 + 4) + (uVar8 + 1) * 4);
              local_60 = local_60 + 3;
              uVar9 = uVar9 + 1;
            }
            else {
LAB_00797d80:
              uVar9 = uVar9 + 1;
            }
          }
          local_50 = (void *)(local_6c & 0xffff);
          uVar6 = (uint)uVar10;
          if ((local_28 == 0) || ((uint)(local_24 - local_28 >> 4) <= uVar6)) {
            FUN_00984d5e();
          }
          iVar12 = uVar6 * 0x10 + local_28;
          uVar5 = *(uint *)(iVar12 + 4);
          if ((uVar5 == 0) ||
             ((uint)((int)(*(int *)(iVar12 + 0xc) - uVar5) >> 1) <=
              (uint)((int)(*(int *)(iVar12 + 8) - uVar5) >> 1))) {
            uVar8 = *(uint *)(iVar12 + 8);
            if (uVar8 < uVar5) {
              FUN_00984d5e();
            }
            FUN_00795a40(local_4c,iVar12,uVar8,&local_50);
          }
          else {
            puVar13 = *(undefined2 **)(iVar12 + 8);
            *puVar13 = (undefined2)local_6c;
            *(undefined2 **)(iVar12 + 8) = puVar13 + 1;
          }
          if ((local_38 == 0) || ((uint)(local_34 - local_38 >> 4) <= uVar6)) {
            FUN_00984d5e();
          }
          uVar5 = *(uint *)(uVar6 * 0x10 + 4 + local_38);
          iVar12 = uVar6 * 0x10 + local_38;
          if ((uVar5 == 0) ||
             ((uint)((int)(*(int *)(iVar12 + 0xc) - uVar5) >> 2) <=
              (uint)((int)(*(int *)(iVar12 + 8) - uVar5) >> 2))) {
            uVar8 = *(uint *)(iVar12 + 8);
            if (uVar8 < uVar5) {
              FUN_00984d5e();
            }
            FUN_007a3620(local_44,iVar12,uVar8,&local_54);
          }
          else {
            puVar2 = *(undefined4 **)(iVar12 + 8);
            *puVar2 = local_54;
            *(undefined4 **)(iVar12 + 8) = puVar2 + 1;
          }
          if ((local_18 == 0) || ((uint)(local_14 - local_18 >> 2) <= uVar6)) {
            FUN_00984d5e();
          }
          *(uint *)(local_18 + uVar6 * 4) = local_6c - 2;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ushort *)(in_ECX + 0x20));
    }
    FUN_007969b0(uVar4);
    FUN_00796bc0(local_2c);
    FUN_00796d10(local_3c);
    FUN_00785580(local_1c);
    iVar12 = 0;
    if (local_18 != 0) {
      iVar12 = FUN_00401f20(local_18);
    }
    if (local_38 != 0) {
      FUN_00794fc0(local_38,local_34,local_3c,param_1);
      iVar12 = FUN_00401f20(local_38);
    }
    if (local_28 != 0) {
      FUN_00794fc0(local_28,local_24,local_2c,param_1);
      iVar12 = FUN_00401f20(local_28);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return iVar12;
}



void FUN_00798090(ushort param_1)

{
  int in_ECX;
  uint uVar1;
  uint uVar2;
  uint local_8 [2];
  
  if (*(uint *)(in_ECX + 0x40) < *(uint *)(in_ECX + 0x3c)) {
    FUN_00984d5e();
  }
  if (*(uint *)(in_ECX + 0x40) < *(uint *)(in_ECX + 0x3c)) {
    FUN_00984d5e();
  }
  FUN_00796730(local_8);
  if (*(uint *)(in_ECX + 0x50) < *(uint *)(in_ECX + 0x4c)) {
    FUN_00984d5e();
  }
  if (*(uint *)(in_ECX + 0x50) < *(uint *)(in_ECX + 0x4c)) {
    FUN_00984d5e();
  }
  FUN_00796790(local_8);
  local_8[0] = *(uint *)(in_ECX + 0x30);
  if (local_8[0] < *(uint *)(in_ECX + 0x2c)) {
    FUN_00984d5e();
  }
  if (*(uint *)(in_ECX + 0x30) < *(uint *)(in_ECX + 0x2c)) {
    FUN_00984d5e();
  }
  FUN_00439050(local_8);
  *(ushort *)(in_ECX + 0x20) = param_1;
  uVar2 = (uint)param_1;
  FUN_007975f0(uVar2);
  FUN_007976e0(uVar2);
  FUN_00795720();
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      if ((*(int *)(in_ECX + 0x2c) == 0) ||
         ((uint)(*(int *)(in_ECX + 0x30) - *(int *)(in_ECX + 0x2c) >> 2) <= uVar1)) {
        FUN_00984d5e();
      }
      *(undefined4 *)(*(int *)(in_ECX + 0x2c) + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < (int)uVar2);
  }
  return;
}



void FUN_007981c0(void)

{
  int in_ECX;
  
  FUN_00786f30();
  *(undefined1 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  return;
}



void FUN_007981e0(void)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x10));
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x14));
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x18));
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x24));
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x28));
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x2c));
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x30));
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x1c));
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x20));
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x34));
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x38));
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x40));
  *(undefined4 *)(in_ECX + 0x40) = 0;
  FUN_00786f70();
  return;
}



void FUN_00798290(undefined4 param_1)

{
  undefined1 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  *(undefined4 *)(in_ECX + 4) = param_1;
  *(undefined2 *)(in_ECX + 8) = 3;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined2 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined2 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  return;
}



void FUN_007982d0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  if ((*(int *)(in_ECX + 0x2c) != 0) && (iVar1 = 0, *(short *)(in_ECX + 0x28) != 0)) {
    iVar2 = 0;
    do {
      *(undefined1 *)(iVar2 + 0x3c + *(int *)(in_ECX + 0x2c)) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x44;
    } while (iVar1 < (int)(uint)*(ushort *)(in_ECX + 0x28));
  }
  return;
}



void * FUN_00798300(int *param_1)

{
  size_t _Size;
  void *_Dst;
  int *piVar1;
  int in_ECX;
  
  _Dst = *(void **)(in_ECX + 0x18);
  if ((((_Dst != (void *)0x0) && (piVar1 = *(int **)(in_ECX + 0x10), piVar1 != (int *)0x0)) &&
      (*piVar1 != 0)) && (_Dst != (void *)0x0)) {
    _Size = (uint)*(ushort *)(in_ECX + 0x1c) * (uint)*(ushort *)(in_ECX + 8) * 0x80;
    _memcpy(_Dst,(void *)*piVar1,_Size);
    *param_1 = (int)((_Size - *(int *)(in_ECX + 0x18)) + (int)_Dst) >> 2;
    return *(void **)(in_ECX + 0x18);
  }
  return _Dst;
}



void FUN_00798360(float *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int in_ECX;
  float *pfVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_34;
  
  pfVar1 = param_1;
  if ((*(int *)(in_ECX + 0x2c) != 0) && (*(int *)(in_ECX + 0x20) != 0)) {
    local_34 = 0;
    if (*(short *)(in_ECX + 0x28) != 0) {
      param_1 = (float *)0x0;
      do {
        iVar15 = *(int *)(in_ECX + 0x2c) + (int)param_1;
        iVar14 = 0;
        if (*(short *)(iVar15 + 0xc) != 0) {
          iVar16 = 0;
          do {
            fVar2 = *(float *)(*(int *)(iVar15 + 0x18) + iVar16);
            pfVar13 = (float *)(*(int *)(iVar15 + 0x18) + iVar16);
            fVar3 = pfVar13[1];
            fVar4 = pfVar13[2];
            fVar5 = pfVar1[1];
            fVar6 = pfVar1[5];
            fVar7 = pfVar1[9];
            fVar8 = pfVar1[0xd];
            fVar9 = pfVar1[2];
            fVar10 = pfVar1[6];
            fVar11 = pfVar1[10];
            fVar12 = pfVar1[0xe];
            *pfVar13 = fVar3 * pfVar1[4] + fVar2 * *pfVar1 + fVar4 * pfVar1[8] + pfVar1[0xc];
            pfVar13[1] = fVar7 * fVar4 + fVar6 * fVar3 + fVar5 * fVar2 + fVar8;
            pfVar13[2] = fVar9 * fVar2 + fVar10 * fVar3 + fVar11 * fVar4 + fVar12;
            if (*(char *)(in_ECX + 1) != '\0') {
              fVar2 = *(float *)(*(int *)(iVar15 + 0x40) + iVar16);
              pfVar13 = (float *)(*(int *)(iVar15 + 0x40) + iVar16);
              fVar3 = pfVar13[1];
              fVar4 = pfVar13[2];
              fVar5 = pfVar1[5];
              fVar6 = pfVar1[1];
              fVar7 = pfVar1[9];
              fVar8 = pfVar1[0xd];
              fVar9 = pfVar1[6];
              fVar10 = pfVar1[2];
              fVar11 = pfVar1[10];
              fVar12 = pfVar1[0xe];
              *pfVar13 = fVar3 * pfVar1[4] + fVar2 * *pfVar1 + fVar4 * pfVar1[8] + pfVar1[0xc];
              pfVar13[1] = fVar7 * fVar4 + fVar6 * fVar2 + fVar5 * fVar3 + fVar8;
              pfVar13[2] = fVar4 * fVar11 + fVar9 * fVar3 + fVar10 * fVar2 + fVar12;
            }
            iVar14 = iVar14 + 1;
            iVar16 = iVar16 + 0xc;
          } while (iVar14 < (int)(uint)*(ushort *)(iVar15 + 0xc));
        }
        param_1 = (float *)((int)param_1 + 0x44);
        local_34 = local_34 + 1;
      } while (local_34 < (int)(uint)*(ushort *)(in_ECX + 0x28));
    }
    fVar2 = *pfVar1;
    iVar14 = 0;
    if (*(short *)(in_ECX + 0x1c) != 0) {
      iVar15 = 0;
      do {
        pfVar1 = (float *)(*(int *)(in_ECX + 0x20) + iVar15);
        pfVar13 = (float *)(*(int *)(in_ECX + 0x20) + iVar15);
        iVar14 = iVar14 + 1;
        iVar15 = iVar15 + 0xc;
        *pfVar13 = *pfVar1 * fVar2;
        pfVar13[1] = pfVar13[1] * fVar2;
        pfVar13[2] = pfVar13[2] * fVar2;
      } while (iVar14 < (int)(uint)*(ushort *)(in_ECX + 0x1c));
    }
  }
  return;
}



void FUN_00798550(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x14) != 0) && (param_2 != (undefined4 *)0x0)) {
    cVar3 = FUN_00787680();
    if (cVar3 == '\0') {
      fVar2 = 1.0;
    }
    else {
      fVar2 = -1.0;
    }
    iVar4 = *(int *)(in_ECX + 0x14);
    param_1 = param_1 * 0x40;
    *(undefined4 *)(iVar4 + param_1) = *param_2;
    iVar4 = iVar4 + param_1;
    *(float *)(iVar4 + 4) = fVar2 * (float)param_2[1];
    *(undefined4 *)(iVar4 + 8) = param_2[2];
    *(float *)(iVar4 + 0xc) = (float)param_2[3] * fVar2;
    *(undefined4 *)(iVar4 + 0x10) = param_2[4];
    *(float *)(iVar4 + 0x14) = (float)param_2[5] * fVar2;
    *(undefined4 *)(iVar4 + 0x18) = param_2[6];
    *(float *)(iVar4 + 0x1c) = fVar2 * (float)param_2[7];
    puVar1 = (undefined4 *)(param_1 + 0x20 + *(int *)(in_ECX + 0x14));
    *puVar1 = param_2[2];
    puVar1[1] = (float)param_2[1] * fVar2;
    puVar1[2] = *param_2;
    puVar1[3] = (float)param_2[3] * fVar2;
    puVar1[4] = param_2[6];
    puVar1[5] = (float)param_2[5] * fVar2;
    puVar1[6] = param_2[4];
    puVar1[7] = fVar2 * (float)param_2[7];
  }
  return;
}



void FUN_00798630(undefined4 *param_1,ushort param_2)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((((*(int *)(in_ECX + 0x2c) != 0) && (param_2 < *(ushort *)(in_ECX + 0x28))) &&
      (*(int *)(in_ECX + 0x10) != 0)) &&
     (((*(int *)(in_ECX + 0x24) != 0 && (*(int *)(in_ECX + 0x20) != 0)) &&
      ((*(int *)(in_ECX + 4) != 0 && (*(int *)(in_ECX + 0xc) != 0)))))) {
    puVar2 = (undefined4 *)(*(int *)(in_ECX + 0x2c) + (uint)param_2 * 0x44);
    puVar3 = param_1;
    for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)param_1 = 1;
    param_1[2] = (uint)param_2;
  }
  return;
}



void FUN_00798690(void)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  if (((*(int *)(in_ECX + 0x2c) != 0) && (*(short *)(in_ECX + 0x28) != 0)) &&
     (iVar1 = 0, *(short *)(in_ECX + 0x28) != 0)) {
    iVar2 = 0;
    do {
      FUN_00401f20(*(undefined4 *)(iVar2 + 0x10 + *(int *)(in_ECX + 0x2c)));
      FUN_00401f20(*(undefined4 *)(iVar2 + 0x14 + *(int *)(in_ECX + 0x2c)));
      FUN_00401f20(*(undefined4 *)(iVar2 + 0x18 + *(int *)(in_ECX + 0x2c)));
      FUN_00401f20(*(undefined4 *)(iVar2 + 0x24 + *(int *)(in_ECX + 0x2c)));
      FUN_00401f20(*(undefined4 *)(iVar2 + 0x28 + *(int *)(in_ECX + 0x2c)));
      FUN_00401f20(*(undefined4 *)(iVar2 + 0x2c + *(int *)(in_ECX + 0x2c)));
      FUN_00401f20(*(undefined4 *)(iVar2 + 0x30 + *(int *)(in_ECX + 0x2c)));
      FUN_00401f20(*(undefined4 *)(iVar2 + 0x1c + *(int *)(in_ECX + 0x2c)));
      FUN_00401f20(*(undefined4 *)(iVar2 + 0x20 + *(int *)(in_ECX + 0x2c)));
      FUN_00401f20(*(undefined4 *)(iVar2 + 0x34 + *(int *)(in_ECX + 0x2c)));
      FUN_00401f20(*(undefined4 *)(iVar2 + 0x38 + *(int *)(in_ECX + 0x2c)));
      *(undefined4 *)(iVar2 + 0x10 + *(int *)(in_ECX + 0x2c)) = 0;
      *(undefined4 *)(iVar2 + 0x14 + *(int *)(in_ECX + 0x2c)) = 0;
      *(undefined4 *)(iVar2 + 0x18 + *(int *)(in_ECX + 0x2c)) = 0;
      *(undefined4 *)(iVar2 + 0x24 + *(int *)(in_ECX + 0x2c)) = 0;
      *(undefined4 *)(iVar2 + 0x28 + *(int *)(in_ECX + 0x2c)) = 0;
      *(undefined4 *)(iVar2 + 0x2c + *(int *)(in_ECX + 0x2c)) = 0;
      *(undefined4 *)(iVar2 + 0x30 + *(int *)(in_ECX + 0x2c)) = 0;
      *(undefined4 *)(iVar2 + 0x1c + *(int *)(in_ECX + 0x2c)) = 0;
      *(undefined4 *)(iVar2 + 0x20 + *(int *)(in_ECX + 0x2c)) = 0;
      *(undefined4 *)(iVar2 + 0x34 + *(int *)(in_ECX + 0x2c)) = 0;
      *(undefined4 *)(iVar2 + 0x38 + *(int *)(in_ECX + 0x2c)) = 0;
      FUN_00401f20(*(undefined4 *)(iVar2 + 0x40 + *(int *)(in_ECX + 0x2c)));
      *(undefined4 *)(iVar2 + 0x40 + *(int *)(in_ECX + 0x2c)) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x44;
    } while (iVar1 < (int)(uint)*(ushort *)(in_ECX + 0x28));
  }
  return;
}



void FUN_007987d0(ushort param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  int in_ECX;
  int iVar9;
  int iVar10;
  float *pfVar11;
  undefined1 local_c [12];
  
  if (((((*(int *)(in_ECX + 4) != 0) && (param_1 < *(ushort *)(in_ECX + 0x28))) &&
       (*(char *)(in_ECX + 1) != '\0')) &&
      ((*(int *)(in_ECX + 0x2c) != 0 &&
       (iVar1 = *(int *)(in_ECX + 0x2c) + (uint)param_1 * 0x44, iVar1 != 0)))) &&
     ((*(int *)(iVar1 + 0x40) != 0 &&
      ((*(int *)(iVar1 + 0x18) != 0 && (iVar9 = 0, *(short *)(iVar1 + 0xc) != 0)))))) {
    iVar10 = 0;
    do {
      fVar2 = *(float *)(*(int *)(iVar1 + 0x34) + iVar9 * 4);
      pfVar11 = (float *)(*(int *)(iVar1 + 0x40) + iVar10);
      pfVar7 = (float *)FUN_00786ed0(local_c,(uint)*(byte *)(*(int *)(iVar1 + 0x38) + iVar9) * 0x40
                                             + DAT_00b42a14);
      fVar3 = pfVar11[2];
      fVar5 = pfVar7[1];
      fVar4 = pfVar11[1];
      fVar6 = pfVar7[2];
      pfVar8 = (float *)(*(int *)(iVar1 + 0x18) + iVar10);
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0xc;
      *pfVar8 = fVar2 * (*pfVar7 - *pfVar11) + *pfVar11;
      pfVar8[1] = fVar4 + fVar2 * (fVar5 - fVar4);
      pfVar8[2] = fVar3 + (fVar6 - fVar3) * fVar2;
    } while (iVar9 < (int)(uint)*(ushort *)(iVar1 + 0xc));
  }
  return;
}



void FUN_00798940(void)

{
  void *pvVar1;
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x20));
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x24));
  pvVar1 = *(void **)(in_ECX + 0x2c);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x44,*(int *)((int)pvVar1 + -4),FUN_007981e0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x18));
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  return;
}



void FUN_007989b0(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  bool bVar13;
  float local_9c;
  float local_98;
  undefined1 local_8c [48];
  undefined4 *local_5c;
  undefined1 local_58 [48];
  uint local_28;
  
  iVar7 = *(int *)(in_ECX + 0x2c);
  if ((((iVar7 != 0) && ((ushort)param_2 < *(ushort *)(in_ECX + 0x28))) &&
      (*(int *)(in_ECX + 0x10) != 0)) &&
     (((*(int *)(in_ECX + 0x24) != 0 && (*(int *)(in_ECX + 0x20) != 0)) &&
      ((*(int *)(in_ECX + 4) != 0 && (*(int *)(in_ECX + 0xc) != 0)))))) {
    uVar9 = param_2 & 0xffff;
    puVar6 = (undefined4 *)(iVar7 + uVar9 * 0x44);
    if (*(char *)(iVar7 + 0x3c + uVar9 * 0x44) == '\0') {
      local_5c = puVar6;
      local_28 = uVar9;
      if (*(int *)(*(int *)(in_ECX + 4) + 0x10) == 1) {
        FUN_007987d0(param_2);
      }
      local_9c = 1.0;
      if ((ushort)param_2 != 0) {
        local_9c = (float)(int)local_28 * param_5 + 1.0;
      }
      _vector_constructor_iterator_(local_8c,0xc,4,FUN_00786e40);
      _vector_constructor_iterator_(local_58,0xc,4,FUN_00786e40);
      uVar11 = 0;
      if (*(short *)(in_ECX + 0x1c) != 0) {
        uVar10 = (uint)*(ushort *)(in_ECX + 8);
        do {
          iVar7 = ((int)uVar11 / 2) * 0xc;
          local_98 = *(float *)(*(int *)(in_ECX + 0x24) + iVar7);
          fVar1 = *(float *)(*(int *)(in_ECX + 0x24) + iVar7 + 4);
          uVar8 = uVar11 & 0x80000001;
          bVar13 = uVar8 == 0;
          if ((int)uVar8 < 0) {
            bVar13 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (bVar13) {
            local_98 = 1.0 - local_98;
          }
          pfVar5 = (float *)(*(int *)(in_ECX + 0x20) + iVar7);
          iVar7 = 0;
          fVar4 = (1.0 - local_98) * local_9c * *pfVar5;
          fVar3 = (1.0 - fVar1) * local_9c * pfVar5[1];
          fVar2 = -(local_9c * *pfVar5 * local_98);
          fVar1 = -(fVar1 * pfVar5[1] * local_9c);
          if (uVar10 != 0) {
            do {
              puVar6 = (undefined4 *)
                       ((uVar10 * uVar11 + iVar7) * 0x40 +
                       *(int *)(*(int *)(in_ECX + 0x10) + uVar9 * 4));
              iVar7 = iVar7 + 1;
              *puVar6 = 0;
              puVar6[1] = fVar4;
              puVar6[2] = fVar3;
              puVar6[4] = 0;
              puVar6[5] = fVar2;
              puVar6[6] = fVar3;
              puVar6[8] = 0;
              puVar6[9] = fVar2;
              puVar6[10] = fVar1;
              puVar6[0xc] = 0;
              puVar6[0xd] = fVar4;
              puVar6[0xe] = fVar1;
              uVar10 = (uint)*(ushort *)(in_ECX + 8);
            } while (iVar7 < (int)uVar10);
          }
          uVar11 = uVar11 + 1;
          puVar6 = local_5c;
        } while ((int)uVar11 < (int)((uint)*(ushort *)(in_ECX + 0x1c) * 2));
      }
      *(undefined1 *)(puVar6 + 0xf) = 1;
    }
    puVar12 = param_1;
    for (iVar7 = 0xf; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    }
    param_1[2] = uVar9;
    *(undefined1 *)param_1 = 1;
  }
  return;
}



void FUN_00798cc0(ushort param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  char *in_ECX;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b8ceb;
  local_c = *unaff_FS_OFFSET;
  uVar8 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar12 = (uint *)0x0;
  if ((((param_2 != 0) && (*(int *)(in_ECX + 0x10) != 0)) && (*(int *)(in_ECX + 4) != 0)) &&
     (*(int *)(in_ECX + 0x14) != 0)) {
    uVar15 = (uint)param_1;
    *(ushort *)(in_ECX + 0x28) = param_1;
    puVar9 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar15 * 0x44) | uVar15 * 0x44 + 4,uVar8);
    local_4 = 0;
    if (puVar9 != (uint *)0x0) {
      puVar12 = puVar9 + 1;
      *puVar9 = uVar15;
      _eh_vector_constructor_iterator_(puVar12,0x44,uVar15,FUN_007981c0,FUN_007981e0);
    }
    local_4 = 0xffffffff;
    *(uint **)(in_ECX + 0x2c) = puVar12;
    uVar7 = 0;
    if (param_1 != 0) {
      do {
        uVar15 = (uint)uVar7;
        iVar1 = *(int *)(in_ECX + 0x2c) + uVar15 * 0x44;
        iVar2 = uVar15 * 0x10 + param_2;
        if (*(int *)(iVar2 + 4) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ushort)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2);
        }
        *(ushort *)(iVar1 + 0xc) = uVar6;
        uVar10 = FUN_00401f00((uint)uVar6 * 4,uVar8);
        uVar13 = 0;
        *(undefined4 *)(iVar1 + 0x20) = uVar10;
        if (*(short *)(iVar1 + 0xc) != 0) {
          do {
            if ((*(int *)(iVar2 + 4) == 0) ||
               ((uint)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2) <= uVar13)) {
              FUN_00984d5e();
            }
            iVar14 = *(int *)(iVar2 + 4);
            bVar3 = *(byte *)(*(int *)(iVar14 + uVar13 * 4) + 0x40);
            if ((iVar14 == 0) || ((uint)(*(int *)(iVar2 + 8) - iVar14 >> 2) <= uVar13)) {
              FUN_00984d5e();
            }
            iVar14 = uVar13 * 4;
            uVar13 = uVar13 + 1;
            *(uint *)(*(int *)(iVar1 + 0x20) + -4 + uVar13 * 4) =
                 ((uint)*(byte *)(*(int *)(*(int *)(iVar2 + 4) + iVar14) + 0x10) +
                 (uint)*(ushort *)(in_ECX + 8) * (uint)bVar3) * 0x40 +
                 *(int *)(*(int *)(in_ECX + 0x10) + uVar15 * 4);
          } while ((int)uVar13 < (int)(uint)*(ushort *)(iVar1 + 0xc));
        }
        if (in_ECX[1] != '\0') {
          uVar10 = FUN_00401f00((uint)*(ushort *)(iVar1 + 0xc) * 0xc);
          uVar15 = 0;
          *(undefined4 *)(iVar1 + 0x40) = uVar10;
          if (*(short *)(iVar1 + 0xc) != 0) {
            iVar14 = 0;
            do {
              if ((*(int *)(iVar2 + 4) == 0) ||
                 ((uint)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2) <= uVar15)) {
                FUN_00984d5e();
              }
              iVar5 = *(int *)(*(int *)(iVar2 + 4) + uVar15 * 4);
              iVar11 = *(int *)(iVar1 + 0x40);
              *(undefined4 *)(iVar11 + iVar14) = *(undefined4 *)(iVar5 + 4);
              iVar11 = iVar11 + iVar14;
              *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar5 + 8);
              uVar15 = uVar15 + 1;
              iVar14 = iVar14 + 0xc;
              *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar5 + 0xc);
            } while ((int)uVar15 < (int)(uint)*(ushort *)(iVar1 + 0xc));
          }
          uVar10 = FUN_00401f00((uint)*(ushort *)(iVar1 + 0xc) * 4);
          uVar15 = 0;
          *(undefined4 *)(iVar1 + 0x34) = uVar10;
          if (*(short *)(iVar1 + 0xc) != 0) {
            do {
              if ((*(int *)(iVar2 + 4) == 0) ||
                 ((uint)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2) <= uVar15)) {
                FUN_00984d5e();
              }
              iVar14 = uVar15 * 4;
              uVar15 = uVar15 + 1;
              *(float *)(*(int *)(iVar1 + 0x34) + -4 + uVar15 * 4) =
                   1.0 - *(float *)(*(int *)(*(int *)(iVar2 + 4) + iVar14) + 0x44);
            } while ((int)uVar15 < (int)(uint)*(ushort *)(iVar1 + 0xc));
          }
          uVar10 = FUN_00401f00(*(undefined2 *)(iVar1 + 0xc));
          *(undefined4 *)(iVar1 + 0x38) = uVar10;
          uVar15 = 0;
          if (*(short *)(iVar1 + 0xc) != 0) {
            do {
              if ((*(int *)(iVar2 + 4) == 0) ||
                 ((uint)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2) <= uVar15)) {
                FUN_00984d5e();
              }
              uVar13 = uVar15 + 1;
              *(char *)(uVar15 + *(int *)(iVar1 + 0x38)) =
                   (char)((ulonglong)*(byte *)(*(int *)(*(int *)(iVar2 + 4) + uVar15 * 4) + 0x48) %
                         (ulonglong)(longlong)(int)(uint)*(byte *)(*(int *)(in_ECX + 4) + 0x2c)) +
                   *(char *)(*(int *)(in_ECX + 4) + 0x28);
              uVar15 = uVar13;
            } while ((int)uVar13 < (int)(uint)*(ushort *)(iVar1 + 0xc));
          }
        }
        uVar10 = FUN_00401f00((uint)*(ushort *)(iVar1 + 0xc) * 0xc);
        uVar15 = 0;
        *(undefined4 *)(iVar1 + 0x18) = uVar10;
        if (*(short *)(iVar1 + 0xc) != 0) {
          iVar14 = 0;
          do {
            if ((*(int *)(iVar2 + 4) == 0) ||
               ((uint)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2) <= uVar15)) {
              FUN_00984d5e();
            }
            iVar5 = *(int *)(*(int *)(iVar2 + 4) + uVar15 * 4);
            iVar11 = *(int *)(iVar1 + 0x18);
            *(undefined4 *)(iVar11 + iVar14) = *(undefined4 *)(iVar5 + 4);
            iVar11 = iVar11 + iVar14;
            *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar5 + 8);
            uVar15 = uVar15 + 1;
            iVar14 = iVar14 + 0xc;
            *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar5 + 0xc);
          } while (uVar15 < *(ushort *)(iVar1 + 0xc));
        }
        uVar10 = FUN_00401f00(*(undefined2 *)(iVar1 + 0xc));
        uVar15 = 0;
        *(undefined4 *)(iVar1 + 0x10) = uVar10;
        if (*(short *)(iVar1 + 0xc) != 0) {
          do {
            if ((*(int *)(iVar2 + 4) == 0) ||
               ((uint)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2) <= uVar15)) {
              FUN_00984d5e();
            }
            *(undefined1 *)(uVar15 + *(int *)(iVar1 + 0x10)) =
                 *(undefined1 *)(*(int *)(*(int *)(iVar2 + 4) + uVar15 * 4) + 0x40);
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(ushort *)(iVar1 + 0xc));
        }
        uVar10 = FUN_00401f00(*(undefined2 *)(iVar1 + 0xc));
        uVar15 = 0;
        *(undefined4 *)(iVar1 + 0x14) = uVar10;
        if (*(short *)(iVar1 + 0xc) != 0) {
          do {
            if ((*(int *)(iVar2 + 4) == 0) ||
               ((uint)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2) <= uVar15)) {
              FUN_00984d5e();
            }
            iVar14 = *(int *)(iVar2 + 4);
            cVar4 = *(char *)(*(int *)(iVar14 + uVar15 * 4) + 0x40);
            if ((iVar14 == 0) || ((uint)(*(int *)(iVar2 + 8) - iVar14 >> 2) <= uVar15)) {
              FUN_00984d5e();
            }
            *(char *)(uVar15 + *(int *)(iVar1 + 0x14)) =
                 in_ECX[8] * cVar4 + *(char *)(*(int *)(*(int *)(iVar2 + 4) + uVar15 * 4) + 0x10);
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(ushort *)(iVar1 + 0xc));
        }
        uVar10 = FUN_00401f00((uint)*(ushort *)(iVar1 + 0xc) * 4);
        uVar15 = 0;
        *(undefined4 *)(iVar1 + 0x1c) = uVar10;
        if (*(short *)(iVar1 + 0xc) != 0) {
          do {
            if ((*(int *)(iVar2 + 4) == 0) ||
               ((uint)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2) <= uVar15)) {
              FUN_00984d5e();
            }
            iVar14 = uVar15 * 4;
            uVar15 = uVar15 + 1;
            *(uint *)(*(int *)(iVar1 + 0x1c) + -4 + uVar15 * 4) =
                 (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 4) + iVar14) + 0x40) * 0x20 +
                 *(int *)(in_ECX + 0x14);
          } while (uVar15 < *(ushort *)(iVar1 + 0xc));
        }
        uVar10 = FUN_00401f00((uint)*(ushort *)(iVar1 + 0xc) * 4);
        uVar15 = 0;
        *(undefined4 *)(iVar1 + 0x24) = uVar10;
        if (*(short *)(iVar1 + 0xc) != 0) {
          do {
            if ((*(int *)(iVar2 + 4) == 0) ||
               ((uint)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2) <= uVar15)) {
              FUN_00984d5e();
            }
            *(undefined4 *)(*(int *)(iVar1 + 0x24) + uVar15 * 4) =
                 *(undefined4 *)(*(int *)(*(int *)(iVar2 + 4) + uVar15 * 4) + 0x14);
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(ushort *)(iVar1 + 0xc));
        }
        if (*in_ECX == '\0') {
          uVar10 = FUN_00401f00((uint)*(ushort *)(iVar1 + 0xc) * 0xc);
          uVar15 = 0;
          *(undefined4 *)(iVar1 + 0x28) = uVar10;
          if (*(short *)(iVar1 + 0xc) != 0) {
            iVar14 = 0;
            do {
              if ((*(int *)(iVar2 + 4) == 0) ||
                 ((uint)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2) <= uVar15)) {
                FUN_00984d5e();
              }
              iVar5 = *(int *)(*(int *)(iVar2 + 4) + uVar15 * 4);
              iVar11 = *(int *)(iVar1 + 0x28);
              *(undefined4 *)(iVar11 + iVar14) = *(undefined4 *)(iVar5 + 0x1c);
              iVar11 = iVar11 + iVar14;
              *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar5 + 0x20);
              uVar15 = uVar15 + 1;
              iVar14 = iVar14 + 0xc;
              *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar5 + 0x24);
            } while (uVar15 < *(ushort *)(iVar1 + 0xc));
          }
          if (*in_ECX == '\0') {
            uVar10 = FUN_00401f00((uint)*(ushort *)(iVar1 + 0xc) * 0xc);
            *(undefined4 *)(iVar1 + 0x30) = uVar10;
            uVar10 = FUN_00401f00((uint)*(ushort *)(iVar1 + 0xc) * 0xc);
            uVar15 = 0;
            *(undefined4 *)(iVar1 + 0x2c) = uVar10;
            if (*(short *)(iVar1 + 0xc) != 0) {
              iVar14 = 0;
              do {
                if ((*(int *)(iVar2 + 4) == 0) ||
                   ((uint)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2) <= uVar15)) {
                  FUN_00984d5e();
                }
                iVar5 = *(int *)(*(int *)(iVar2 + 4) + uVar15 * 4);
                iVar11 = *(int *)(iVar1 + 0x30);
                *(undefined4 *)(iVar11 + iVar14) = *(undefined4 *)(iVar5 + 0x28);
                iVar11 = iVar11 + iVar14;
                *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar5 + 0x2c);
                *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar5 + 0x30);
                if ((*(int *)(iVar2 + 4) == 0) ||
                   ((uint)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2) <= uVar15)) {
                  FUN_00984d5e();
                }
                iVar5 = *(int *)(*(int *)(iVar2 + 4) + uVar15 * 4);
                iVar11 = *(int *)(iVar1 + 0x2c);
                *(undefined4 *)(iVar11 + iVar14) = *(undefined4 *)(iVar5 + 0x34);
                iVar11 = iVar11 + iVar14;
                *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar5 + 0x38);
                uVar15 = uVar15 + 1;
                iVar14 = iVar14 + 0xc;
                *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar5 + 0x3c);
              } while (uVar15 < *(ushort *)(iVar1 + 0xc));
            }
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < param_1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00799320(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int in_ECX;
  uint uVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar4 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afc36;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined2 *)(in_ECX + 8) = *(undefined2 *)(param_3 + 0x38);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_3 + 0x4c);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_3 + 0x44);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_3 + 0x48);
  uVar10 = 0;
  if (*(int *)(param_3 + 0x14) != 0) {
    uVar10 = (*(int *)(param_3 + 0x18) - *(int *)(param_3 + 0x14)) / 0x54;
  }
  *(short *)(in_ECX + 0x1c) = (short)uVar10;
  pvVar6 = (void *)FUN_00401f00((uVar10 & 0xffff) * 0xc,uVar5);
  local_4 = 0;
  if (pvVar6 == (void *)0x0) {
    pvVar6 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar6,0xc,uVar10 & 0xffff,FUN_00786e40);
  }
  uVar2 = *(ushort *)(in_ECX + 0x1c);
  local_4 = 0xffffffff;
  *(void **)(in_ECX + 0x20) = pvVar6;
  pvVar6 = (void *)FUN_00401f00((uint)uVar2 * 0xc,uVar5);
  local_4 = 1;
  if (pvVar6 == (void *)0x0) {
    pvVar6 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar6,0xc,(uint)uVar2,FUN_00786e40);
  }
  *(void **)(in_ECX + 0x24) = pvVar6;
  iVar11 = 0;
  uVar10 = 0;
  local_4 = 0xffffffff;
  if (*(short *)(in_ECX + 0x1c) != 0) {
    param_3 = 0;
    do {
      if ((*(int *)(iVar4 + 0x14) == 0) ||
         ((uint)((*(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 0x14)) / 0x54) <= uVar10)) {
        FUN_00984d5e();
      }
      iVar1 = *(int *)(iVar4 + 0x14) + 0x48 + iVar11;
      puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x20) + param_3);
      *puVar7 = *(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x48 + iVar11);
      puVar7[1] = *(undefined4 *)(iVar1 + 4);
      puVar7[2] = *(undefined4 *)(iVar1 + 8);
      if ((*(int *)(iVar4 + 0x14) == 0) ||
         ((uint)((*(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 0x14)) / 0x54) <= uVar10)) {
        FUN_00984d5e();
      }
      puVar8 = (undefined4 *)(*(int *)(in_ECX + 0x24) + param_3);
      param_3 = param_3 + 0xc;
      puVar7 = (undefined4 *)(*(int *)(iVar4 + 0x14) + 0x30 + iVar11);
      *puVar8 = *puVar7;
      puVar8[1] = puVar7[1];
      puVar8[2] = puVar7[2];
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + 0x54;
    } while ((int)uVar10 < (int)(uint)*(ushort *)(in_ECX + 0x1c));
  }
  lVar3 = (ulonglong)((uint)*(ushort *)(in_ECX + 0x1c) * (uint)*(ushort *)(in_ECX + 8) * 0x20) * 4;
  uVar9 = FUN_00401f00(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
  *(undefined4 *)(in_ECX + 0x18) = uVar9;
  FUN_00798cc0(param_1,param_2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00799530(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

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
      uVar2 = FUN_00784b30(uVar2,param_3,&param_4);
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
      FUN_00784b30(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2 >> 2),&param_4);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + iVar5;
      FUN_00523af0(param_2,*(int *)(in_ECX + 8) + param_3 * -4,&param_4);
      return;
    }
    iVar3 = iVar1 + param_3 * -4;
    uVar2 = FUN_007a25c0(iVar3,iVar1,iVar1);
    *(undefined4 *)(in_ECX + 8) = uVar2;
    FUN_005254a0(param_2,iVar3,iVar1);
    FUN_00523af0(param_2,iVar5 + param_2,&param_4);
  }
  return;
}



void FUN_007996f0(int *param_1,int param_2,int param_3,undefined4 param_4)

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
  FUN_00799530(param_2,param_3,1,param_4);
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



void FUN_00799780(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int in_ECX;
  undefined1 local_8 [8];
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)(in_ECX + 8) - uVar1) >> 2) <
      (uint)((int)(*(int *)(in_ECX + 0xc) - uVar1) >> 2))) {
    puVar2 = *(undefined4 **)(in_ECX + 8);
    *puVar2 = *param_1;
    *(undefined4 **)(in_ECX + 8) = puVar2 + 1;
    return;
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (uVar3 < uVar1) {
    FUN_00984d5e();
  }
  FUN_007996f0(local_8,in_ECX,uVar3,param_1);
  return;
}



void FUN_007997f0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  undefined4 *puVar7;
  int in_ECX;
  float *pfVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  int *unaff_FS_OFFSET;
  int local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  double local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined1 local_9c [48];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54 [12];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cc198;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffff00;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar10 = 0;
  if (((*(int *)(in_ECX + 0x24) != 0) && (*(int *)(in_ECX + 0x20) != 0)) &&
     (*(int *)(in_ECX + 0x2c) != 0)) {
    local_a8 = 0;
    local_a4 = 0;
    local_a0 = 0;
    local_4 = 0;
    local_c8 = in_ECX;
    if (*(short *)(in_ECX + 0x1c) != 0) {
      iVar12 = 0;
      fVar5 = 0.0;
      local_d8 = 0.0;
      while( true ) {
        fVar1 = *(float *)(*(int *)(in_ECX + 0x24) + iVar12) *
                *(float *)(*(int *)(in_ECX + 0x20) + iVar12);
        fVar2 = *(float *)(*(int *)(in_ECX + 0x20) + iVar12 + 4) *
                *(float *)(*(int *)(in_ECX + 0x24) + iVar12 + 4);
        local_ec = 0.0;
        fVar4 = (0.0 - fVar1) * (0.0 - fVar1);
        fVar3 = (0.0 - fVar2) * (0.0 - fVar2);
        iVar9 = (int)(fVar3 + fVar4 + fVar5) >> 1;
        if (0.0 < (float)(iVar9 + 0x1fc00000)) {
          local_ec = (float)(iVar9 + 0x1fc00000);
        }
        local_b8 = *(float *)(*(int *)(in_ECX + 0x20) + iVar12);
        pfVar8 = (float *)(*(int *)(in_ECX + 0x20) + iVar12);
        if (local_ec <
            (float)(((int)((local_b8 - fVar1) * (local_b8 - fVar1) + fVar3 + fVar5) >> 1) +
                   0x1fc00000)) {
          local_c4 = *pfVar8;
          local_ec = (float)(((int)((local_c4 - fVar1) * (local_c4 - fVar1) + fVar3 + fVar5) >> 1) +
                            0x1fc00000);
        }
        iVar9 = *(int *)(in_ECX + 0x20);
        local_e8 = *(float *)(iVar12 + iVar9);
        fVar3 = *(float *)(iVar12 + iVar9 + 4) - fVar2;
        if (local_ec <
            (float)(((int)((local_e8 - fVar1) * (local_e8 - fVar1) + fVar3 * fVar3 + fVar5) >> 1) +
                   0x1fc00000)) {
          local_e8 = *(float *)(iVar12 + iVar9);
          fVar3 = *(float *)(iVar12 + iVar9 + 4) - fVar2;
          local_ec = (float)(((int)(fVar3 * fVar3 + (local_e8 - fVar1) * (local_e8 - fVar1) + fVar5)
                             >> 1) + 0x1fc00000);
        }
        if (local_ec <
            (float)(((int)((pfVar8[1] - fVar2) * (pfVar8[1] - fVar2) + fVar4 + fVar5) >> 1) +
                   0x1fc00000)) {
          local_ec = (float)(((int)(fVar5 + (pfVar8[1] - fVar2) * (pfVar8[1] - fVar2) + fVar4) >> 1)
                            + 0x1fc00000);
        }
        FUN_00799780(&local_ec);
        iVar10 = iVar10 + 1;
        iVar12 = iVar12 + 0xc;
        if ((int)(uint)*(ushort *)(in_ECX + 0x1c) <= iVar10) break;
        fVar5 = (float)local_d8;
      }
    }
    local_f0 = 0;
    if (*(short *)(in_ECX + 0x28) != 0) {
      local_cc = 0;
      do {
        uVar11 = 0;
        local_e8 = (float)(*(int *)(in_ECX + 0x2c) + local_cc);
        if (*(short *)((int)local_e8 + 0xc) != 0) {
          local_d0 = 0;
          do {
            fVar5 = local_e8;
            FUN_007a6bb0(uVar6);
            pfVar8 = (float *)(*(int *)((int)fVar5 + 0x18) + local_d0);
            local_4 = CONCAT31(local_4._1_3_,1);
            local_e0 = *pfVar8;
            local_e4 = pfVar8[1];
            local_ec = pfVar8[2];
            uVar13 = (uint)(*(byte *)(*(int *)((int)fVar5 + 0x10) + uVar11) >> 1);
            if ((local_a8 == 0) || ((uint)(local_a4 - local_a8 >> 2) <= uVar13)) {
              FUN_00984d5e();
            }
            local_dc = *(float *)(local_a8 + uVar13 * 4);
            local_6c = local_e0 + local_dc;
            local_68 = local_e4;
            local_64 = local_ec;
            puVar7 = (undefined4 *)FUN_007a6b10(local_9c,&local_6c);
            puVar14 = local_54;
            for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar14 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar14 = puVar14 + 1;
            }
            local_4._0_1_ = 2;
            FUN_0060d0a0();
            local_4 = CONCAT31(local_4._1_3_,1);
            FUN_0060d0a0();
            local_18 = local_e0 - local_dc;
            local_14 = local_e4;
            local_10 = local_ec;
            puVar7 = (undefined4 *)FUN_007a6b10(local_9c,&local_18);
            puVar14 = local_54;
            for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar14 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar14 = puVar14 + 1;
            }
            local_4._0_1_ = 3;
            FUN_0060d0a0();
            local_4 = CONCAT31(local_4._1_3_,1);
            FUN_0060d0a0();
            local_20 = local_e4 + local_dc;
            local_24 = local_e0;
            local_1c = local_ec;
            local_d8._0_4_ = local_20;
            puVar7 = (undefined4 *)FUN_007a6b10(local_9c,&local_24);
            puVar14 = local_54;
            for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar14 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar14 = puVar14 + 1;
            }
            local_4._0_1_ = 4;
            FUN_0060d0a0();
            local_4 = CONCAT31(local_4._1_3_,1);
            FUN_0060d0a0();
            local_5c = local_e4 - local_dc;
            local_60 = local_e0;
            local_58 = local_ec;
            local_d8._0_4_ = local_5c;
            puVar7 = (undefined4 *)FUN_007a6b10(local_9c,&local_60);
            puVar14 = local_54;
            for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar14 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar14 = puVar14 + 1;
            }
            local_4._0_1_ = 5;
            FUN_0060d0a0();
            local_4 = CONCAT31(local_4._1_3_,1);
            FUN_0060d0a0();
            local_bc = local_ec + local_dc;
            local_c4 = local_e0;
            local_c0 = local_e4;
            local_d8._0_4_ = local_bc;
            puVar7 = (undefined4 *)FUN_007a6b10(local_9c,&local_c4);
            puVar14 = local_54;
            for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar14 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar14 = puVar14 + 1;
            }
            local_4._0_1_ = 6;
            FUN_0060d0a0();
            local_4 = CONCAT31(local_4._1_3_,1);
            FUN_0060d0a0();
            local_b0 = local_ec - local_dc;
            local_d8 = (double)CONCAT44(local_d8._4_4_,local_b0);
            local_b8 = local_e0;
            local_b4 = local_e4;
            puVar7 = (undefined4 *)FUN_007a6b10(local_9c,&local_b8);
            puVar14 = local_54;
            for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar14 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar14 = puVar14 + 1;
            }
            local_4._0_1_ = 7;
            FUN_0060d0a0();
            local_4._0_1_ = 1;
            FUN_0060d0a0();
            puVar7 = (undefined4 *)FUN_007a6c20(local_9c,local_54);
            puVar14 = param_1;
            for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar14 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar14 = puVar14 + 1;
            }
            local_4._0_1_ = 8;
            FUN_0060d0a0();
            local_4._0_1_ = 1;
            FUN_0060d0a0();
            local_4._0_1_ = 9;
            FUN_0060d0a0();
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_0060d0a0();
            local_d0 = local_d0 + 0xc;
            uVar11 = uVar11 + 1;
            in_ECX = local_c8;
          } while (uVar11 < *(ushort *)((int)local_e8 + 0xc));
        }
        local_cc = local_cc + 0x44;
        local_f0 = local_f0 + 1;
      } while (local_f0 < (int)(uint)*(ushort *)(in_ECX + 0x28));
    }
    if (local_a8 != 0) {
      FUN_00401f20(local_a8);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_00799ea0(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 0x3c);
}



void FUN_00799eb0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x30);
  if (iVar1 != param_1) {
    if (iVar1 != 0) {
      FUN_00784b60();
      FUN_00401f20(iVar1);
    }
    *(int *)(in_ECX + 0x30) = param_1;
  }
  return;
}



int FUN_00799ee0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x38;
}



int FUN_00799f10(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x30;
}



void FUN_00799f30(char *param_1)

{
  char *pcVar1;
  undefined **local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1;
    if ((uint)(0xffffffff / ZEXT48(param_1)) < 0x38) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_c,&param_1);
      local_c[0] = &PTR_FUN_00a32488;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_c,&DAT_00ad7f34);
    }
  }
  FUN_00401f00((int)pcVar1 * 0x38);
  return;
}



void FUN_00799fa0(char *param_1)

{
  char *pcVar1;
  undefined **local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1;
    if ((uint)(0xffffffff / ZEXT48(param_1)) < 0x30) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_c,&param_1);
      local_c[0] = &PTR_FUN_00a32488;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_c,&DAT_00ad7f34);
    }
  }
  FUN_00401f00((int)pcVar1 * 0x30);
  return;
}



void FUN_0079a000(float param_1)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int in_ECX;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  int local_18;
  uint local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cc1c8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar10 = 0;
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0x30;
  }
  if ((*(int *)(in_ECX + 0xc) == 0) ||
     ((uint)((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0x30) <= iVar7 - 1U)) {
    FUN_00984d5e(uVar6);
  }
  iVar11 = (iVar7 - 1U) * 0x30 + *(int *)(in_ECX + 0xc);
  iVar7 = FUN_00799ee0();
  if (iVar7 != 1) {
    local_18 = 0;
    do {
      if ((*(int *)(iVar11 + 4) == 0) ||
         ((uint)((*(int *)(iVar11 + 8) - *(int *)(iVar11 + 4)) / 0x38) <= uVar10 + 1)) {
        FUN_00984d5e(uVar6);
      }
      iVar7 = *(int *)(iVar11 + 4);
      if ((iVar7 == 0) || ((uint)((*(int *)(iVar11 + 8) - iVar7) / 0x38) <= uVar10)) {
        FUN_00984d5e(uVar6);
      }
      fVar3 = *(float *)(local_18 + 0x3c + iVar7) - *(float *)(*(int *)(iVar11 + 4) + 4 + local_18);
      pfVar8 = (float *)(*(int *)(iVar11 + 4) + local_18);
      fVar5 = *(float *)(local_18 + 0x38 + iVar7) - *pfVar8;
      uVar10 = uVar10 + 1;
      fVar4 = *(float *)(local_18 + 0x40 + iVar7) - pfVar8[2];
      *(float *)(iVar11 + 0x10) =
           (float)(((int)(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3) >> 1) + 0x1fc00000) +
           *(float *)(iVar11 + 0x10);
      iVar7 = FUN_00799ee0();
      local_18 = local_18 + 0x38;
    } while (uVar10 < iVar7 - 1U);
  }
  FUN_0078eaf0();
  local_4 = 0;
  if ((*(int *)(in_ECX + 0x44) == 0) ||
     (iVar9 = *(int *)(in_ECX + 0x48) - *(int *)(in_ECX + 0x44), iVar7 = iVar9 >> 0x1f,
     iVar9 / 0x2c + iVar7 == iVar7)) {
    if ((*(int *)(in_ECX + 0xc) == 0) ||
       ((uint)((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0x30) <= uVar10)) {
      FUN_00984d5e(uVar6);
    }
    *(undefined1 *)(uVar10 * 0x30 + 0x18 + *(int *)(in_ECX + 0xc)) = 0;
    *(float *)(iVar11 + 0x14) = *(float *)(iVar11 + 0x10) * 0.5;
    *(undefined4 *)(iVar11 + 0x1c) = 0;
  }
  else {
    if (*(int *)(in_ECX + 0x44) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (*(int *)(in_ECX + 0x48) - *(int *)(in_ECX + 0x44)) / 0x2c;
    }
    fVar12 = (float10)FUN_0078ea00(0,0x47c35000);
    local_14 = (uint)(longlong)ROUND(fVar12);
    *(char *)(iVar11 + 0x18) = (char)(local_14 % uVar6);
    uVar6 = local_14 % uVar6 & 0xff;
    if ((*(int *)(in_ECX + 0x44) == 0) ||
       ((uint)((*(int *)(in_ECX + 0x48) - *(int *)(in_ECX + 0x44)) / 0x2c) <= uVar6)) {
      FUN_00984d5e();
    }
    bVar1 = *(byte *)(iVar11 + 0x18);
    *(float *)(iVar11 + 0x14) =
         *(float *)(uVar6 * 0x2c + 0x1c + *(int *)(in_ECX + 0x44)) * *(float *)(iVar11 + 0x10) * 0.5
    ;
    if ((*(int *)(in_ECX + 0x44) == 0) ||
       ((uint)((*(int *)(in_ECX + 0x48) - *(int *)(in_ECX + 0x44)) / 0x2c) <= (uint)bVar1)) {
      FUN_00984d5e();
    }
    bVar2 = *(byte *)(iVar11 + 0x18);
    *(float *)(iVar11 + 0x14) =
         *(float *)((uint)bVar1 * 0x2c + 0x20 + *(int *)(in_ECX + 0x44)) * *(float *)(iVar11 + 0x14)
    ;
    if ((*(int *)(in_ECX + 0x44) == 0) ||
       ((uint)((*(int *)(in_ECX + 0x48) - *(int *)(in_ECX + 0x44)) / 0x2c) <= (uint)bVar2)) {
      FUN_00984d5e();
    }
    iVar7 = *(int *)(in_ECX + 0x44);
    bVar1 = *(byte *)(iVar11 + 0x18);
    if ((*(int *)(in_ECX + 0x44) == 0) ||
       ((uint)((*(int *)(in_ECX + 0x48) - *(int *)(in_ECX + 0x44)) / 0x2c) <= (uint)bVar1)) {
      FUN_00984d5e();
    }
    fVar12 = (float10)FUN_0078ea00(*(undefined4 *)
                                    ((uint)bVar1 * 0x2c + *(int *)(in_ECX + 0x44) + 0x24),
                                   *(undefined4 *)((uint)bVar2 * 0x2c + iVar7 + 0x28));
    *(float *)(iVar11 + 0x1c) = (float)fVar12;
    uVar6 = 0;
    if (*(int *)(in_ECX + 0xc) != 0) {
      uVar6 = (*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0x30;
    }
    if ((uVar6 & 1) != 0) {
      *(float *)(iVar11 + 0x1c) = (float)fVar12 * -1.0;
    }
  }
  local_4 = 0xffffffff;
  *(float *)(iVar11 + 0x20) = param_1 * *(float *)(iVar11 + 0x10);
  FUN_0060d0a0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0079a390(undefined4 param_1,short param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  uint uVar6;
  uint uVar7;
  
  if ((*in_ECX != 0) && (uVar6 = 0, in_ECX[0xb] != 0)) {
    do {
      iVar2 = FUN_00799ee0();
      uVar3 = iVar2 * 2 & 0xffff;
      iVar2 = FUN_00401f00(uVar3 * 2);
      uVar7 = 0;
      uVar4 = FUN_00799ee0();
      if ((uVar4 & 0x7fffffff) != 0) {
        do {
          sVar1 = FUN_00799ee0();
          *(short *)(iVar2 + uVar7 * 2) = param_2 + sVar1 * (short)uVar6 * 2 + (short)uVar7;
          uVar7 = uVar7 + 1;
          iVar5 = FUN_00799ee0();
        } while (uVar7 < (uint)(iVar5 * 2));
      }
      FUN_00796100(param_1,iVar2,uVar3);
      *(short *)(*in_ECX + 0x26) = *(short *)(*in_ECX + 0x26) + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)in_ECX[0xb]);
  }
  return;
}



void FUN_0079a450(undefined4 param_1,short param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *in_ECX;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  float10 extraout_ST0;
  uint local_40;
  short local_24;
  uint local_1c;
  uint local_10;
  
  iVar5 = param_3;
  if (*in_ECX != 0) {
    iVar7 = FUN_009828c0();
    iVar1 = iVar7 + -1;
    iVar8 = FUN_009828c0();
    iVar2 = iVar8 + -1;
    uVar14 = (iVar8 * 2 + 1) * iVar1 - 1;
    lVar3 = (ulonglong)uVar14 * 2;
    iVar9 = FUN_00401f00(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
    iVar15 = 0;
    local_40 = 0;
    if (0 < iVar1) {
      do {
        sVar6 = FUN_009828c0();
        uVar13 = local_40 + 1;
        iVar10 = FUN_009828c0();
        if ((local_40 == iVar7 - 2U) || (iVar11 = FUN_00799ee0(), iVar11 + -1 < iVar10)) {
          iVar10 = FUN_00799ee0();
          iVar10 = iVar10 + -1;
        }
        local_24 = (short)iVar10 - sVar6;
        uVar12 = local_40 & 0x80000001;
        bVar16 = uVar12 == 0;
        if ((int)uVar12 < 0) {
          bVar16 = (uVar12 - 1 | 0xfffffffe) == 0xffffffff;
        }
        sVar4 = (short)*(undefined4 *)(iVar5 + 0x2c);
        if (bVar16) {
          sVar4 = sVar4 * sVar6;
          param_3 = 0;
          if (0 < iVar8) {
            do {
              local_1c = (uint)(longlong)
                               ROUND((float)param_3 * (float)(extraout_ST0 / (float10)iVar2));
              if (param_3 == iVar2) {
                local_1c = *(int *)(iVar5 + 0x2c) - 1;
              }
              uVar12 = *(int *)(iVar5 + 0x2c) - 1;
              if (uVar12 < local_1c) {
                local_1c = uVar12;
              }
              *(short *)(iVar9 + iVar15 * 2) = param_2 + sVar4 + (short)local_1c;
              param_3 = param_3 + 1;
              *(short *)(iVar9 + (iVar15 + 1) * 2) =
                   *(short *)(iVar5 + 0x2c) * local_24 + param_2 + sVar4 + (short)local_1c;
              iVar15 = iVar15 + 2;
            } while (param_3 < iVar8);
          }
        }
        else {
          sVar4 = sVar4 * sVar6;
          if (-1 < iVar2) {
            iVar10 = iVar2;
            do {
              local_10 = (uint)(longlong)
                               ROUND((float)iVar10 * (float)(extraout_ST0 / (float10)iVar2));
              if (iVar10 == iVar2) {
                local_10 = *(int *)(iVar5 + 0x2c) - 1;
              }
              uVar12 = *(int *)(iVar5 + 0x2c) - 1;
              if (uVar12 < local_10) {
                local_10 = uVar12;
              }
              *(short *)(iVar9 + iVar15 * 2) = sVar4 + param_2 + (short)local_10;
              iVar15 = iVar15 + 2;
              *(short *)(iVar9 + -2 + iVar15 * 2) =
                   *(short *)(iVar5 + 0x2c) * local_24 + sVar4 + (short)local_10 + param_2;
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
          }
        }
        if ((int)local_40 < (int)(iVar7 - 2U)) {
          *(undefined2 *)(iVar9 + iVar15 * 2) = *(undefined2 *)(iVar9 + -2 + iVar15 * 2);
          iVar15 = iVar15 + 1;
        }
        local_40 = uVar13;
      } while ((int)uVar13 < iVar1);
    }
    FUN_00796100(param_1,iVar9,uVar14);
    *(short *)(*in_ECX + 0x26) = *(short *)(*in_ECX + 0x26) + 1;
  }
  return;
}



void FUN_0079a810(int param_1,undefined4 param_2,float *param_3,char param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  float local_20 [8];
  
  pfVar5 = local_20;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar5 = *param_3;
    param_3 = param_3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  if (param_4 != '\0') {
    iVar4 = 1;
    do {
      iVar2 = iVar4 + 2;
      local_20[iVar4] = -local_20[iVar4];
      iVar4 = iVar2;
    } while (iVar2 < 8);
  }
  *(undefined2 *)(param_1 + 0x22) = 0;
  sVar1 = FUN_007877b0();
  if (sVar1 != 0) {
    iVar4 = 0;
    do {
      FUN_00796630(param_2,local_20);
      *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + 1;
      iVar4 = iVar4 + 1;
      uVar3 = FUN_007877b0();
    } while (iVar4 < (int)(uVar3 & 0xffff));
  }
  return;
}



int FUN_0079a890(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = (int)param_2 - (int)param_1;
  if (param_1 != param_2) {
    iVar3 = param_3 - (int)param_2;
    do {
      param_2 = param_2 + -0xe;
      puVar4 = param_2;
      puVar5 = (undefined4 *)((int)param_2 + iVar3);
      for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    } while (param_2 != param_1);
  }
  return param_3 + (iVar1 / 0x38) * -0x38;
}



int FUN_0079a8f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    iVar3 = param_3 - param_2;
    iVar1 = param_2;
    do {
      iVar2 = iVar1 + -0xc;
      *(undefined4 *)(iVar3 + iVar2) = *(undefined4 *)(iVar1 + -0xc);
      *(undefined4 *)(iVar3 + 4 + iVar2) = *(undefined4 *)(iVar1 + -8);
      *(undefined4 *)(iVar3 + 8 + iVar2) = *(undefined4 *)(iVar1 + -4);
      iVar1 = iVar2;
    } while (iVar2 != param_1);
  }
  return param_3 + ((param_2 - param_1) / 0xc) * -0xc;
}



int FUN_0079a950(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 != param_2) {
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 0xe;
      puVar4 = (undefined4 *)((int)puVar2 + (param_3 - (int)param_1));
      for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar2 = puVar3;
    } while (puVar3 != param_2);
  }
  return param_3 + (((int)param_2 - (int)param_1) / 0x38) * 0x38;
}



void FUN_0079a9b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xe) {
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_1;
      puVar3 = param_3;
      for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_3 = param_3 + 0xe;
  }
  return;
}



void FUN_0079a9e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 0xe;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 0xe; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}



void FUN_0079aa10(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = param_3;
      puVar3 = param_1;
      for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1 = param_1 + 0xe;
  }
  return;
}



void FUN_0079aa40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0079a950(param_1,param_2,param_3,param_2,param_2,0);
  return;
}



void FUN_0079aa70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0079a890(param_1,param_2,param_3,param_3,param_3,0);
  return;
}



void FUN_0079aaa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0079a8f0(param_1,param_2,param_3,param_3,param_3,0);
  return;
}



void FUN_0079aad0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0079a9b0(param_1,param_2,param_3);
  return;
}



void FUN_0079ab00(void)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x18)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 0x18) = 0xf;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  return;
}



int FUN_0079ab30(int param_1,int param_2,undefined4 param_3)

{
  FUN_0079aa10(param_1,param_2,param_3);
  return param_1 + param_2 * 0x38;
}



void FUN_0079ab70(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

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
    uVar2 = FUN_0079a950(param_5,*(undefined4 *)(in_ECX + 8),param_3,param_1,param_1,param_2);
    *(undefined4 *)(in_ECX + 8) = uVar2;
  }
  param_1[1] = param_3;
  *param_1 = uVar1;
  return;
}



void FUN_0079abd0(void)

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
  FUN_0079ab70(local_8,in_ECX,uVar2,in_ECX,uVar1);
  return;
}



void FUN_0079ac40(int param_1,int param_2)

{
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cc281;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0xf;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    FUN_00414420(param_2,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0079acc0(uint param_1)

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
  if (0x4924924 < param_1) {
    uVar1 = FUN_00790b90();
  }
  iVar2 = FUN_00799f30(param_1,uVar1);
  *(int *)(in_ECX + 4) = iVar2;
  *(int *)(in_ECX + 8) = iVar2;
  *(uint *)(in_ECX + 0xc) = iVar2 + param_1 * 0x38;
  return 1;
}



undefined4 FUN_0079ad20(uint param_1)

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
  if (0x5555555 < param_1) {
    uVar1 = FUN_00790b90();
  }
  iVar2 = FUN_00799fa0(param_1,uVar1);
  *(int *)(in_ECX + 4) = iVar2;
  *(int *)(in_ECX + 8) = iVar2;
  *(uint *)(in_ECX + 0xc) = param_1 * 0x30 + iVar2;
  return 1;
}



void FUN_0079ad70(int param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009cc1f0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  iVar4 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38;
  }
  cVar3 = FUN_0079acc0(iVar4);
  if (cVar3 != '\0') {
    uVar1 = *(uint *)(param_1 + 8);
    local_8 = 0;
    if (uVar1 < *(uint *)(param_1 + 4)) {
      FUN_00984d5e();
    }
    uVar2 = *(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 8) < uVar2) {
      FUN_00984d5e();
    }
    uVar5 = FUN_0079a9b0(uVar2,uVar1,*(undefined4 *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 8) = uVar5;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0079ae40(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  uint uStack_5c;
  undefined4 local_4c [14];
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009cc210;
  local_10 = *unaff_FS_OFFSET;
  uStack_5c = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  *unaff_FS_OFFSET = (int)&local_10;
  puVar4 = local_4c;
  for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar3 = *(int *)(in_ECX + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(in_ECX + 0xc) - iVar3) / 0x38;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x38;
    }
    if (0x4924924U - iVar3 < param_3) {
      FUN_00790b90();
    }
    if (*(int *)(in_ECX + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x38;
    }
    if (uVar5 < iVar3 + param_3) {
      if (0x4924924 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (*(int *)(in_ECX + 4) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x38;
      }
      if (uVar5 < iVar3 + param_3) {
        iVar3 = FUN_00799ee0();
        uVar5 = iVar3 + param_3;
      }
      iVar1 = FUN_00799f30(uVar5,0);
      local_8 = 0;
      uVar2 = FUN_0079a9b0(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar2 = FUN_0079ab30(uVar2,param_3,local_4c);
      FUN_0079a9b0(param_2,*(undefined4 *)(in_ECX + 8),uVar2);
      iVar3 = 0;
      if (*(int *)(in_ECX + 4) != 0) {
        iVar3 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x38;
      }
      if (*(int *)(in_ECX + 4) != 0) {
        FUN_00401f20(*(int *)(in_ECX + 4));
      }
      *(uint *)(in_ECX + 0xc) = iVar1 + uVar5 * 0x38;
      *(uint *)(in_ECX + 8) = iVar1 + (param_3 + iVar3) * 0x38;
      *(int *)(in_ECX + 4) = iVar1;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar3 = *(int *)(in_ECX + 8);
    if ((uint)((iVar3 - param_2) / 0x38) < param_3) {
      FUN_0079aad0(param_2,iVar3,param_3 * 0x38 + param_2);
      local_8 = 2;
      FUN_0079ab30(*(undefined4 *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2) / 0x38,
                   local_4c);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x38;
      FUN_0079a9e0(param_2,*(int *)(in_ECX + 8) + param_3 * -0x38,local_4c);
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar1 = iVar3 + param_3 * -0x38;
    uVar2 = FUN_0079aad0(iVar1,iVar3,iVar3);
    *(undefined4 *)(in_ECX + 8) = uVar2;
    FUN_0079aa70(param_2,iVar1,iVar3);
    FUN_0079a9e0(param_2,param_3 * 0x38 + param_2,local_4c);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0079b120(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x2c) {
    if (0xf < *(uint *)(param_1 + 0x18)) {
      FUN_00401f20(*(undefined4 *)(param_1 + 4));
    }
    *(undefined4 *)(param_1 + 0x18) = 0xf;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



void FUN_0079b160(uint param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint in_ECX;
  int iVar6;
  uint uVar7;
  
  uVar4 = param_1;
  if (in_ECX == param_1) {
    return;
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    iVar1 = iVar6 >> 0x1f;
    iVar6 = iVar6 / 0x38 + iVar1;
    uVar7 = iVar6 - iVar1;
    if (iVar6 != iVar1) {
      iVar1 = *(int *)(in_ECX + 4);
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (*(int *)(in_ECX + 8) - iVar1) / 0x38;
      }
      if (uVar7 <= uVar3) {
        param_1 = param_1 & 0xffffff00;
        FUN_0079a950(*(undefined4 *)(uVar4 + 4),*(undefined4 *)(uVar4 + 8),iVar1,param_1,param_1,
                     param_1);
        if (*(int *)(uVar4 + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             *(int *)(in_ECX + 4) + ((*(int *)(uVar4 + 8) - *(int *)(uVar4 + 4)) / 0x38) * 0x38;
        return;
      }
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(int *)(in_ECX + 0xc) - iVar1) / 0x38;
      }
      if (uVar4 < uVar7) {
        if (iVar1 != 0) {
          FUN_00401f20(iVar1);
        }
        uVar5 = FUN_00799ee0();
        cVar2 = FUN_0079acc0(uVar5);
        if (cVar2 == '\0') {
          return;
        }
        uVar5 = FUN_0079aad0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                             *(undefined4 *)(in_ECX + 4));
        *(undefined4 *)(in_ECX + 8) = uVar5;
        return;
      }
      iVar6 = FUN_00799ee0();
      iVar6 = *(int *)(param_1 + 4) + iVar6 * 0x38;
      FUN_0079aa40(*(int *)(param_1 + 4),iVar6,iVar1);
      uVar5 = FUN_0079aad0(iVar6,*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_ECX + 8));
      *(undefined4 *)(in_ECX + 8) = uVar5;
      return;
    }
  }
  FUN_0079abd0();
  return;
}



void FUN_0079b2f0(int param_1)

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
        cVar2 = FUN_00790e40(iVar4);
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



int FUN_0079b420(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00414420(param_1,0,0xffffffff);
    *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    iVar1 = param_1 + 0x2c;
    iVar2 = param_3 + 0x2c;
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    param_1 = iVar1;
    param_3 = iVar2;
  } while (iVar1 != param_2);
  return iVar2;
}



int FUN_0079b470(int param_1,int param_2,int param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cc230;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x2c) {
    FUN_0079ac40(param_3,param_1);
    param_3 = param_3 + 0x2c;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}



int FUN_0079b510(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar1 = param_2 + -0x2c;
    iVar2 = param_3 + -0x2c;
    FUN_00414420(iVar1,0,0xffffffff);
    *(undefined4 *)(param_3 + -0x10) = *(undefined4 *)(param_2 + -0x10);
    *(undefined4 *)(param_3 + -0xc) = *(undefined4 *)(param_2 + -0xc);
    *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
    *(undefined4 *)(param_3 + -4) = *(undefined4 *)(param_2 + -4);
    param_2 = iVar1;
    param_3 = iVar2;
  } while (iVar1 != param_1);
  return iVar2;
}



void FUN_0079b560(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(in_ECX + 4);
  if (uVar1 != 0) {
    iVar2 = *(uint *)(in_ECX + 8) - uVar1;
    iVar3 = iVar2 >> 0x1f;
    if (iVar2 / 0x38 + iVar3 != iVar3) {
      if (*(uint *)(in_ECX + 8) < uVar1) {
        FUN_00984d5e();
      }
      if ((param_2 == 0) || (param_2 != in_ECX)) {
        FUN_00984d5e();
      }
      iVar3 = (int)(param_3 - uVar1) / 0x38;
      goto LAB_0079b5c7;
    }
  }
  iVar3 = 0;
LAB_0079b5c7:
  FUN_0079ae40(param_2,param_3,1,param_4);
  uVar1 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar1) {
    FUN_00984d5e();
  }
  uVar1 = uVar1 + iVar3 * 0x38;
  if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
    FUN_00984d5e();
  }
  param_1[1] = uVar1;
  *param_1 = in_ECX;
  return;
}



void FUN_0079b620(int param_1,int param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cc250;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0079ac40(param_1,param_3);
    param_1 = param_1 + 0x2c;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0079b6b0(int param_1,int param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x2c) {
    FUN_00414420(param_3,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  }
  return;
}



int FUN_0079b700(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_0079b160(param_1);
    *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    iVar1 = param_1 + 0x30;
    iVar2 = param_3 + 0x30;
    *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined1 *)(param_3 + 0x18) = *(undefined1 *)(param_1 + 0x18);
    *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    param_1 = iVar1;
    param_3 = iVar2;
  } while (iVar1 != param_2);
  return iVar2;
}



int FUN_0079b770(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_0079b510(param_1,param_2,param_3,param_3,local_4,local_8);
  return param_3 + ((param_2 - param_1) / 0x2c) * -0x2c;
}



void FUN_0079b7d0(int param_1,int param_2)

{
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cc281;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (param_1 != 0) {
    FUN_0079ad70(param_2);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_0079b860(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar1 = param_2 + -0x30;
    iVar2 = param_3 + -0x30;
    FUN_0079b160(iVar1);
    *(undefined4 *)(param_3 + -0x20) = *(undefined4 *)(param_2 + -0x20);
    *(undefined4 *)(param_3 + -0x1c) = *(undefined4 *)(param_2 + -0x1c);
    *(undefined1 *)(param_3 + -0x18) = *(undefined1 *)(param_2 + -0x18);
    *(undefined4 *)(param_3 + -0x14) = *(undefined4 *)(param_2 + -0x14);
    *(undefined4 *)(param_3 + -0x10) = *(undefined4 *)(param_2 + -0x10);
    *(undefined4 *)(param_3 + -0xc) = *(undefined4 *)(param_2 + -0xc);
    *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
    *(undefined4 *)(param_3 + -4) = *(undefined4 *)(param_2 + -4);
    param_2 = iVar1;
    param_3 = iVar2;
  } while (iVar1 != param_1);
  return iVar2;
}



void FUN_0079b8d0(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined1 local_3c [4];
  int local_38;
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
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cc2a8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0079ad70(param_1);
  local_2c = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  local_28 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  local_10 = *(undefined4 *)(param_1 + 0x2c);
  local_20 = *(undefined4 *)(param_1 + 0x1c);
  local_1c = *(undefined4 *)(param_1 + 0x20);
  local_18 = *(undefined4 *)(param_1 + 0x24);
  local_4 = 0;
  local_24 = uVar1;
  local_14 = uVar2;
  FUN_0079b160(param_2);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  FUN_0079b160(local_3c);
  *(undefined4 *)(param_2 + 0x10) = local_2c;
  *(undefined4 *)(param_2 + 0x14) = local_28;
  *(undefined1 *)(param_2 + 0x18) = uVar1;
  *(undefined4 *)(param_2 + 0x1c) = local_20;
  *(undefined4 *)(param_2 + 0x28) = uVar2;
  *(undefined4 *)(param_2 + 0x2c) = local_10;
  *(undefined4 *)(param_2 + 0x20) = local_1c;
  *(undefined4 *)(param_2 + 0x24) = local_18;
  if (local_38 != 0) {
    FUN_00401f20(local_38,uVar3);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0079b9f0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined1 param_10,undefined4 param_11,undefined4 param_12,float param_13,
                 undefined4 param_14,undefined4 param_15)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cc2d8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  while (param_3 < param_2) {
    iVar4 = (param_2 + -1) / 2;
    iVar3 = iVar4 * 0x30;
    iVar1 = iVar3 + param_1;
    if (*(float *)(iVar3 + 0x24 + param_1) <= param_13) break;
    iVar3 = param_2 * 0x30 + param_1;
    FUN_0079b160(iVar1);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
    *(undefined1 *)(iVar3 + 0x18) = *(undefined1 *)(iVar1 + 0x18);
    *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(iVar1 + 0x2c);
    param_2 = iVar4;
  }
  param_1 = param_2 * 0x30 + param_1;
  FUN_0079b160(&param_4);
  *(undefined4 *)(param_1 + 0x10) = param_8;
  *(undefined4 *)(param_1 + 0x14) = param_9;
  *(undefined4 *)(param_1 + 0x28) = param_14;
  *(undefined4 *)(param_1 + 0x1c) = param_11;
  *(undefined4 *)(param_1 + 0x20) = param_12;
  *(undefined1 *)(param_1 + 0x18) = param_10;
  *(undefined4 *)(param_1 + 0x2c) = param_15;
  *(float *)(param_1 + 0x24) = param_13;
  if (param_5 != 0) {
    FUN_00401f20(param_5,uVar2);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0079bb20(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  undefined1 local_3c [4];
  int local_38;
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
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cc308;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffb0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = ((int)param_3 - (int)param_1) / 0x30;
  iVar1 = (param_2 - (int)param_1) / 0x30;
  iVar4 = iVar1;
  param_2 = iVar2;
  while (iVar3 = iVar4, iVar3 != 0) {
    iVar4 = param_2 % iVar3;
    param_2 = iVar3;
  }
  if ((param_2 < iVar2) && (0 < param_2)) {
    puVar6 = param_1 + param_2 * 0xc + 5;
    do {
      puVar9 = puVar6 + -5;
      FUN_0079ad70(puVar9);
      local_2c = puVar6[-1];
      local_24 = *(undefined1 *)(puVar6 + 1);
      local_28 = *puVar6;
      local_14 = puVar6[5];
      local_10 = puVar6[6];
      local_20 = puVar6[2];
      local_1c = puVar6[3];
      local_18 = puVar6[4];
      local_4 = 0;
      puVar7 = param_1;
      if (puVar6 + iVar1 * 0xc + -5 != param_3) {
        puVar7 = puVar6 + iVar1 * 0xc + -5;
      }
      puVar8 = puVar9;
      if (puVar7 != puVar6 + -5) {
        do {
          puVar9 = puVar7;
          FUN_0079b160(puVar9);
          puVar8[4] = puVar9[4];
          puVar8[5] = puVar9[5];
          *(undefined1 *)(puVar8 + 6) = *(undefined1 *)(puVar9 + 6);
          puVar8[7] = puVar9[7];
          puVar8[8] = puVar9[8];
          puVar8[9] = puVar9[9];
          puVar8[10] = puVar9[10];
          puVar8[0xb] = puVar9[0xb];
          iVar2 = ((int)param_3 - (int)puVar9) / 0x30;
          if (iVar1 < iVar2) {
            puVar7 = puVar9 + iVar1 * 0xc;
          }
          else {
            puVar7 = param_1 + (iVar1 - iVar2) * 0xc;
          }
          puVar8 = puVar9;
        } while (puVar7 != puVar6 + -5);
      }
      FUN_0079b160(local_3c);
      puVar9[4] = local_2c;
      puVar9[5] = local_28;
      *(undefined1 *)(puVar9 + 6) = local_24;
      puVar9[7] = local_20;
      puVar9[8] = local_1c;
      puVar9[10] = local_14;
      puVar9[0xb] = local_10;
      puVar9[9] = local_18;
      local_4 = 0xffffffff;
      if (local_38 != 0) {
        FUN_00401f20(local_38,uVar5);
      }
      param_2 = param_2 + -1;
      puVar6 = puVar6 + -0xc;
    } while (0 < param_2);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0079bd20(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint local_8 [2];
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)(in_ECX + 8) - uVar1) / 0x38) <
      (uint)((int)(*(int *)(in_ECX + 0xc) - uVar1) / 0x38))) {
    iVar2 = *(int *)(in_ECX + 8);
    local_8[0] = local_8[0] & 0xffffff00;
    FUN_0079aa10(iVar2,1,param_1);
    *(int *)(in_ECX + 8) = iVar2 + 0x38;
    return;
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (uVar3 < uVar1) {
    FUN_00984d5e();
  }
  FUN_0079b560(local_8,in_ECX,uVar3,param_1);
  return;
}



int FUN_0079bdf0(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_0079b420(param_1,param_2,param_3,param_3,local_4,local_8);
  return ((param_2 - param_1) / 0x2c) * 0x2c + param_3;
}



void FUN_0079be50(int param_1,int param_2,undefined4 param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_0079b2f0(param_3);
  }
  return;
}



int FUN_0079be80(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_0079b700(param_1,param_2,param_3,param_3,local_4,local_8);
  return ((param_2 - param_1) / 0x30) * 0x30 + param_3;
}



void FUN_0079bee0(int param_1,int param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    FUN_0079b160(param_3);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 0x14);
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_3 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
  }
  return;
}



void FUN_0079bf40(int param_1,int param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_009cc341;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_007a3580(param_3);
    }
    param_1 = param_1 + 0x10;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



int FUN_0079c020(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_0079b860(param_1,param_2,param_3,param_3,local_4,local_8);
  return param_3 + ((param_2 - param_1) / 0x30) * -0x30;
}



void FUN_0079c080(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  for (; param_1 != param_2; param_2 = param_2 + -0x10) {
    uVar1 = *(undefined4 *)(param_3 + -0xc);
    *(undefined4 *)(param_3 + -0xc) = *(undefined4 *)(param_2 + -0xc);
    *(undefined4 *)(param_2 + -0xc) = uVar1;
    uVar1 = *(undefined4 *)(param_3 + -8);
    *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
    *(undefined4 *)(param_2 + -8) = uVar1;
    uVar1 = *(undefined4 *)(param_3 + -4);
    *(undefined4 *)(param_3 + -4) = *(undefined4 *)(param_2 + -4);
    *(undefined4 *)(param_2 + -4) = uVar1;
    param_3 = param_3 + -0x10;
  }
  return;
}



void FUN_0079c0d0(int param_1,int param_2,int param_3)

{
  if (*(float *)(param_1 + 0x24) < *(float *)(param_2 + 0x24)) {
    FUN_0079b8d0(param_2,param_1);
  }
  if (*(float *)(param_2 + 0x24) < *(float *)(param_3 + 0x24)) {
    FUN_0079b8d0(param_3,param_2);
  }
  if (*(float *)(param_1 + 0x24) < *(float *)(param_2 + 0x24)) {
    FUN_0079b8d0(param_2,param_1);
  }
  return;
}



void FUN_0079c130(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined1 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cc2d8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  iVar3 = param_2;
  while( true ) {
    iVar1 = iVar3 * 2 + 2;
    if (param_3 <= iVar1) break;
    if (*(float *)(iVar1 * 0x30 + param_1 + -0xc) < *(float *)(iVar1 * 0x30 + 0x24 + param_1)) {
      iVar1 = iVar3 * 2 + 1;
    }
    iVar2 = iVar1 * 0x30 + param_1;
    iVar3 = iVar3 * 0x30 + param_1;
    FUN_0079b160();
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
    *(undefined1 *)(iVar3 + 0x18) = *(undefined1 *)(iVar2 + 0x18);
    *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(iVar2 + 0x2c);
    iVar3 = iVar1;
  }
  if (iVar1 == param_3) {
    iVar1 = param_3 * 0x30 + -0x30 + param_1;
    iVar2 = iVar3 * 0x30 + param_1;
    FUN_0079b160();
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
    *(undefined1 *)(iVar2 + 0x18) = *(undefined1 *)(iVar1 + 0x18);
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
    iVar3 = param_3 + -1;
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar1 + 0x2c);
  }
  FUN_0079ad70(&param_4);
  FUN_0079b9f0(param_1,iVar3,param_2);
  if (param_5 != 0) {
    FUN_00401f20();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_0079c2e0(int param_1,int param_2,int param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cc360;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    FUN_0079b7d0(param_3,param_1);
    param_3 = param_3 + 0x30;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}



void FUN_0079c380(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined1 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cc388;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_0079b160();
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined1 *)(param_3 + 0x18) = *(undefined1 *)(param_1 + 0x18);
  *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  FUN_0079ad70(&param_4);
  FUN_0079c130(param_1,0,(param_2 - param_1) / 0x30);
  if (param_5 != 0) {
    FUN_00401f20();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0079c490(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [9];
  undefined4 local_8;
  undefined4 local_4;
  
  local_38 = param_1;
  local_34 = param_2;
  local_30 = param_3;
  puVar2 = (undefined4 *)&stack0x00000010;
  puVar3 = local_2c;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_8 = in_stack_00000034;
  local_4 = in_stack_00000038;
  iVar1 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    iVar1 = (*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0x30;
  }
  if ((*(int *)(in_ECX + 0xc) == 0) ||
     ((uint)((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0x30) <= iVar1 - 1U)) {
    FUN_00984d5e();
  }
  FUN_0079bd20(&local_38);
  return;
}



void FUN_0079c540(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  undefined4 *puVar13;
  int *in_ECX;
  uint uVar14;
  int *unaff_FS_OFFSET;
  float10 fVar15;
  int local_198;
  uint local_194;
  float local_18c;
  int *local_188;
  float *local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  int local_150;
  int local_14c;
  undefined4 local_148;
  undefined1 local_144 [4];
  float *local_140;
  float *local_13c;
  int local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  uint local_11c;
  float local_118;
  float local_114;
  undefined1 local_110 [4];
  float *local_10c;
  float *local_108;
  int local_104;
  double local_100;
  uint local_f4;
  undefined4 local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
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
  float local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c [4];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined1 local_28 [8];
  undefined1 local_20 [12];
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_009cc3d1;
  local_14 = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xfffffe58;
  *unaff_FS_OFFSET = (int)&local_14;
  if ((*in_ECX != 0) && (in_ECX[1] != 0)) {
    local_a8 = (float)in_ECX[0xb];
    if (in_ECX[0xb] < 0) {
      local_a8 = local_a8 + 4.2949673e+09;
    }
    local_a8 = 180.0 / local_a8;
    *(uint *)(param_1 + 0x28) = (uint)*(ushort *)(*in_ECX + 0x22);
    *(undefined4 *)(param_1 + 0x2c) = 2;
    local_11c = 0;
    local_188 = in_ECX;
    if (in_ECX[0xb] != 0) {
      do {
        local_f4 = (uint)*(ushort *)(*local_188 + 0x22);
        local_150 = 0;
        local_14c = 0;
        local_148 = 0;
        local_164 = 0.0;
        local_c = 0;
        local_168 = 0.0;
        local_180 = 0.0;
        local_16c = 0.0;
        iVar7 = FUN_00799ee0(uVar6);
        if (iVar7 != 0) {
          fVar1 = (float)(int)local_11c;
          if ((int)local_11c < 0) {
            fVar1 = fVar1 + 4.2949673e+09;
          }
          local_100 = (double)(fVar1 * local_a8);
          do {
            iVar8 = FUN_00799ee0(uVar6);
            iVar7 = *(int *)(param_1 + 4);
            if ((uint)local_180 < iVar8 - 1U) {
              if ((iVar7 == 0) ||
                 ((uint)((*(int *)(param_1 + 8) - iVar7) / 0x38) <= (uint)local_180)) {
                FUN_00984d5e();
              }
              pfVar10 = (float *)(*(int *)(param_1 + 4) + 0xc + (int)local_180 * 0x38);
            }
            else {
              uVar14 = (int)local_180 - 1;
              if ((iVar7 == 0) || ((uint)((*(int *)(param_1 + 8) - iVar7) / 0x38) <= uVar14)) {
                FUN_00984d5e();
              }
              pfVar10 = (float *)(*(int *)(param_1 + 4) + 0xc + uVar14 * 0x38);
            }
            fVar1 = *(float *)(param_1 + 0x1c);
            pfVar11 = local_4c;
            for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
              *pfVar11 = *pfVar10;
              pfVar10 = pfVar10 + 1;
              pfVar11 = pfVar11 + 1;
            }
            FUN_00793a00(fVar1 + (float)local_100);
            local_160 = local_34 * 0.0 + local_4c[3] + local_4c[0] * 0.0;
            local_15c = local_30 * 0.0 + local_4c[1] * 0.0 + local_3c;
            local_18c = local_4c[2] * 0.0 + local_38 + local_2c * 0.0;
            local_158 = local_18c;
            FUN_00791630(&local_160);
            fVar1 = local_180;
            local_174 = 0.0;
            iVar7 = *(int *)(param_1 + 4);
            local_178 = 0.0;
            local_17c = 0.0;
            if (local_180 == 0.0) {
              if ((iVar7 == 0) ||
                 (iVar7 = *(int *)(param_1 + 8) - iVar7, iVar8 = iVar7 >> 0x1f,
                 iVar7 / 0x38 + iVar8 == iVar8)) {
                FUN_00984d5e();
              }
              pfVar10 = *(float **)(param_1 + 4);
              if ((pfVar10 == (float *)0x0) ||
                 ((uint)((*(int *)(param_1 + 8) - (int)pfVar10) / 0x38) < 2)) {
                FUN_00984d5e();
              }
              iVar8 = *(int *)(param_1 + 4);
              local_17c = *(float *)(iVar8 + 0x38) - *pfVar10;
              local_178 = *(float *)(iVar8 + 0x3c) - pfVar10[1];
              local_18c = *(float *)(iVar8 + 0x40) - pfVar10[2];
              local_c0 = local_17c;
              local_bc = local_178;
              local_b8 = local_18c;
            }
            else {
              if ((iVar7 == 0) ||
                 (iVar7 = *(int *)(param_1 + 8) - iVar7, iVar8 = iVar7 >> 0x1f,
                 iVar7 / 0x38 + iVar8 == iVar8)) {
                FUN_00984d5e();
              }
              pfVar10 = *(float **)(param_1 + 4);
              if ((pfVar10 == (float *)0x0) ||
                 ((uint)((*(int *)(param_1 + 8) - (int)pfVar10) / 0x38) <= (uint)fVar1)) {
                FUN_00984d5e();
              }
              iVar8 = *(int *)(param_1 + 4);
              iVar7 = iVar8 + (int)fVar1 * 0x38;
              local_17c = *(float *)(iVar8 + (int)fVar1 * 0x38) - *pfVar10;
              local_178 = *(float *)(iVar7 + 4) - pfVar10[1];
              local_18c = *(float *)(iVar7 + 8) - pfVar10[2];
              local_8c = local_17c;
              local_88 = local_178;
              local_84 = local_18c;
            }
            local_174 = local_18c;
            fVar15 = (float10)FUN_00982c30();
            fVar9 = 1.0 / (float)fVar15;
            local_17c = fVar9 * local_17c;
            local_178 = fVar9 * local_178;
            local_174 = fVar9 * local_174;
            local_120 = 0.0;
            local_124 = 0.0;
            local_128 = 0.0;
            local_12c = 0.0;
            local_130 = 0.0;
            local_134 = 0.0;
            iVar7 = FUN_00799ee0();
            if ((fVar1 == (float)(iVar7 - 1U)) && (iVar7 = FUN_00799ee0(), iVar7 != 0)) {
              if ((local_150 == 0) || ((uint)((local_14c - local_150) / 0xc) <= (int)fVar1 - 1U)) {
                FUN_00984d5e();
              }
              fVar9 = *(float *)(param_1 + 0x14);
              pfVar10 = (float *)(local_150 + ((int)fVar1 - 1U) * 0xc);
              fVar2 = *pfVar10;
              fVar3 = pfVar10[1];
              local_18c = fVar9 * pfVar10[2];
              if ((*(int *)(param_1 + 4) == 0) ||
                 ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38) <= (uint)fVar1)) {
                FUN_00984d5e();
              }
              iVar7 = (int)fVar1 * 0x38;
              local_128 = fVar9 * fVar2 + *(float *)(*(int *)(param_1 + 4) + iVar7);
              iVar8 = *(int *)(param_1 + 4) + iVar7;
              local_124 = *(float *)(iVar8 + 4) + fVar3 * fVar9;
              local_18c = *(float *)(iVar8 + 8) + local_18c;
              local_120 = local_18c;
              local_d8 = local_128;
              local_d4 = local_124;
              local_d0 = local_18c;
              if ((local_150 == 0) || ((uint)((local_14c - local_150) / 0xc) <= (int)fVar1 - 1U)) {
                FUN_00984d5e();
              }
              fVar9 = *(float *)(param_1 + 0x14);
              fVar2 = *(float *)(local_150 + ((int)fVar1 - 1U) * 0xc);
              iVar8 = local_150 + ((int)fVar1 - 1U) * 0xc;
              fVar3 = *(float *)(iVar8 + 4);
              local_18c = fVar9 * *(float *)(iVar8 + 8);
              if ((*(int *)(param_1 + 4) == 0) ||
                 ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38) <= (uint)fVar1)) {
                FUN_00984d5e();
              }
              iVar8 = *(int *)(param_1 + 4) + iVar7;
              local_134 = *(float *)(*(int *)(param_1 + 4) + iVar7) - fVar9 * fVar2;
              local_130 = *(float *)(iVar8 + 4) - fVar3 * fVar9;
              local_18c = *(float *)(iVar8 + 8) - local_18c;
              local_12c = local_18c;
              local_80 = local_134;
              local_7c = local_130;
              local_78 = local_18c;
            }
            else if ((fVar1 == 0.0) || (iVar7 = FUN_00799ee0(), iVar7 - 1U <= (uint)fVar1)) {
              fVar9 = *(float *)(param_1 + 0x14);
              fVar3 = fVar9 * local_160;
              fVar2 = fVar9 * local_15c;
              fVar9 = fVar9 * local_158;
              if ((iVar8 == 0) || ((uint)((*(int *)(param_1 + 8) - iVar8) / 0x38) <= (uint)fVar1)) {
                FUN_00984d5e();
              }
              iVar7 = *(int *)(param_1 + 4);
              iVar8 = (int)fVar1 * 0x38;
              local_128 = fVar3 + *(float *)(iVar8 + iVar7);
              local_124 = *(float *)(iVar8 + 4 + iVar7) + fVar2;
              local_120 = *(float *)(iVar8 + 8 + iVar7) + fVar9;
              fVar9 = *(float *)(param_1 + 0x14);
              fVar3 = fVar9 * local_160;
              fVar2 = fVar9 * local_15c;
              fVar9 = fVar9 * local_158;
              local_74 = local_128;
              local_70 = local_124;
              local_6c = local_120;
              if ((iVar7 == 0) || ((uint)((*(int *)(param_1 + 8) - iVar7) / 0x38) <= (uint)fVar1)) {
                FUN_00984d5e();
              }
              iVar7 = *(int *)(param_1 + 4) + iVar8;
              local_134 = *(float *)(*(int *)(param_1 + 4) + iVar8) - fVar3;
              local_130 = *(float *)(iVar7 + 4) - fVar2;
              local_12c = *(float *)(iVar7 + 8) - fVar9;
              local_cc = local_134;
              local_c8 = local_130;
              local_c4 = local_12c;
            }
            else {
              if ((local_150 == 0) || ((uint)((local_14c - local_150) / 0xc) <= (int)fVar1 - 1U)) {
                FUN_00984d5e();
              }
              fVar9 = *(float *)(param_1 + 0x14);
              pfVar10 = (float *)(local_150 + ((int)fVar1 - 1U) * 0xc);
              fVar2 = *pfVar10;
              fVar3 = pfVar10[1];
              local_18c = fVar9 * pfVar10[2];
              if ((*(int *)(param_1 + 4) == 0) ||
                 ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38) <= (uint)fVar1)) {
                FUN_00984d5e();
              }
              iVar7 = *(int *)(param_1 + 4);
              iVar8 = (int)fVar1 * 0x38;
              local_170 = fVar9 * fVar2 + *(float *)(iVar8 + iVar7);
              local_180 = *(float *)(iVar8 + 4 + iVar7) + fVar3 * fVar9;
              fVar9 = *(float *)(iVar8 + 8 + iVar7) + local_18c;
              local_18c = *(float *)(param_1 + 0x14);
              fVar3 = local_18c * local_160;
              fVar2 = local_18c * local_15c;
              local_18c = local_18c * local_158;
              if ((iVar7 == 0) || ((uint)((*(int *)(param_1 + 8) - iVar7) / 0x38) <= (uint)fVar1)) {
                FUN_00984d5e();
              }
              iVar7 = *(int *)(param_1 + 4) + iVar8;
              local_18c = *(float *)(iVar7 + 8) + local_18c;
              local_128 = (*(float *)(*(int *)(param_1 + 4) + iVar8) + fVar3 + local_170) * 0.5;
              local_124 = (*(float *)(iVar7 + 4) + fVar2 + local_180) * 0.5;
              local_120 = (local_18c + fVar9) * 0.5;
              local_98 = local_128;
              local_94 = local_124;
              local_90 = local_120;
              if ((local_150 == 0) || ((uint)((local_14c - local_150) / 0xc) <= (int)fVar1 - 1U)) {
                FUN_00984d5e();
              }
              fVar9 = *(float *)(param_1 + 0x14);
              fVar2 = *(float *)(local_150 + ((int)fVar1 - 1U) * 0xc);
              iVar7 = local_150 + ((int)fVar1 - 1U) * 0xc;
              fVar3 = *(float *)(iVar7 + 4);
              fVar4 = *(float *)(iVar7 + 8);
              if ((*(int *)(param_1 + 4) == 0) ||
                 ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38) <= (uint)fVar1)) {
                FUN_00984d5e();
              }
              iVar7 = *(int *)(param_1 + 4);
              local_18c = *(float *)(iVar8 + iVar7) - fVar9 * fVar2;
              local_170 = *(float *)(iVar8 + 4 + iVar7) - fVar3 * fVar9;
              local_180 = *(float *)(iVar8 + 8 + iVar7) - fVar9 * fVar4;
              fVar9 = *(float *)(param_1 + 0x14);
              fVar3 = fVar9 * local_160;
              fVar2 = fVar9 * local_15c;
              fVar9 = fVar9 * local_158;
              if ((iVar7 == 0) || ((uint)((*(int *)(param_1 + 8) - iVar7) / 0x38) <= (uint)fVar1)) {
                FUN_00984d5e();
              }
              iVar7 = *(int *)(param_1 + 4) + iVar8;
              local_134 = ((*(float *)(*(int *)(param_1 + 4) + iVar8) - fVar3) + local_18c) * 0.5;
              local_130 = ((*(float *)(iVar7 + 4) - fVar2) + local_170) * 0.5;
              local_12c = ((*(float *)(iVar7 + 8) - fVar9) + local_180) * 0.5;
              local_68 = local_134;
              local_64 = local_130;
              local_60 = local_12c;
            }
            iVar7 = (int)fVar1 * 0x38;
            local_184 = (float *)fVar1;
            fVar9 = (float)(int)fVar1;
            if ((int)fVar1 < 0) {
              fVar9 = fVar9 + 4.2949673e+09;
            }
            local_184 = (float *)FUN_00799ee0();
            fVar2 = (float)(int)local_184;
            if ((int)local_184 < 0) {
              fVar2 = fVar2 + 4.2949673e+09;
            }
            FUN_00796260(&local_128);
            local_f0 = 0x3f800000;
            local_ec = fVar9 / (fVar2 - 1.0);
            FUN_00796320(&local_f0,*(undefined1 *)(param_1 + 0x18));
            local_dc = 0x3f800000;
            local_e0 = 0x3f800000;
            local_e4 = 0x3f800000;
            local_e8 = 0x3f800000;
            FUN_00796230(&local_e8);
            FUN_007962f0(&local_17c);
            FUN_00796590(&local_160);
            fVar9 = local_15c * local_174 - local_158 * local_178;
            local_b0 = local_17c * local_158 - local_160 * local_174;
            local_ac = local_178 * local_160 - local_15c * local_17c;
            local_b4 = fVar9;
            if (0.1 <= (float)(((int)(fVar9 * fVar9 + local_b0 * local_b0 + local_ac * local_ac) >>
                               1) + 0x1fc00000)) {
              local_16c = fVar9;
              local_168 = local_b0;
              local_164 = local_ac;
              fVar15 = (float10)FUN_00982c30();
              fVar2 = 1.0 / (float)fVar15;
              local_16c = fVar2 * fVar9;
              local_168 = local_168 * fVar2;
              local_164 = fVar2 * local_164;
            }
            else {
              local_16c = local_17c;
              local_168 = local_178;
              local_164 = local_174;
            }
            FUN_007965e0(&local_16c);
            if (*(char *)(*local_188 + 8) != '\0') {
              if ((*(int *)(param_1 + 4) == 0) ||
                 ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38) <= (uint)fVar1)) {
                FUN_00984d5e();
              }
              iVar8 = *(int *)(param_1 + 4);
              if ((iVar8 == 0) || ((uint)((*(int *)(param_1 + 8) - iVar8) / 0x38) <= (uint)fVar1)) {
                FUN_00984d5e();
              }
              FUN_00796540(*(undefined4 *)(iVar7 + 0x30 + *(int *)(param_1 + 4)),
                           *(undefined1 *)(iVar7 + 0x34 + iVar8));
            }
            *(short *)(*local_188 + 0x22) = *(short *)(*local_188 + 0x22) + 1;
            FUN_00796260(&local_134);
            local_f0 = 0;
            FUN_00796320(&local_f0,*(undefined1 *)(param_1 + 0x18));
            local_dc = 0x3f800000;
            local_e0 = 0x3f800000;
            local_e4 = 0x3f800000;
            local_e8 = 0x3f800000;
            FUN_00796230(&local_e8);
            FUN_007962f0(&local_17c);
            FUN_00796590(&local_160);
            fVar9 = local_15c * local_174 - local_158 * local_178;
            local_a0 = local_17c * local_158 - local_160 * local_174;
            local_9c = local_178 * local_160 - local_15c * local_17c;
            local_a4 = fVar9;
            if (0.1 <= (float)(((int)(fVar9 * fVar9 + local_a0 * local_a0 + local_9c * local_9c) >>
                               1) + 0x1fc00000)) {
              local_16c = fVar9;
              local_168 = local_a0;
              local_164 = local_9c;
              fVar15 = (float10)FUN_00982c30();
              fVar2 = 1.0 / (float)fVar15;
              local_16c = fVar2 * fVar9;
              local_168 = local_168 * fVar2;
              local_164 = fVar2 * local_164;
            }
            else {
              local_16c = local_17c;
              local_168 = local_178;
              local_164 = local_174;
            }
            FUN_007965e0(&local_16c);
            if (*(char *)(*local_188 + 8) != '\0') {
              if ((*(int *)(param_1 + 4) == 0) ||
                 ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38) <= (uint)fVar1)) {
                FUN_00984d5e();
              }
              iVar8 = *(int *)(param_1 + 4);
              if ((iVar8 == 0) || ((uint)((*(int *)(param_1 + 8) - iVar8) / 0x38) <= (uint)fVar1)) {
                FUN_00984d5e();
              }
              FUN_00796540(*(undefined4 *)(iVar7 + 0x30 + *(int *)(param_1 + 4)),
                           *(undefined1 *)(iVar7 + 0x34 + iVar8));
            }
            *(short *)(*local_188 + 0x22) = *(short *)(*local_188 + 0x22) + 1;
            local_180 = (float)((int)fVar1 + 1U);
            fVar9 = (float)FUN_00799ee0();
          } while ((int)fVar1 + 1U < (uint)fVar9);
        }
        local_170 = 0.0;
        local_140 = (float *)0x0;
        local_18c = 0.0;
        local_13c = (float *)0x0;
        local_138 = 0;
        local_10c = (float *)0x0;
        local_108 = (float *)0x0;
        local_104 = 0;
        local_c = CONCAT31(local_c._1_3_,2);
        local_198 = FUN_00799ee0(uVar6);
        piVar5 = local_188;
        local_180 = 0.0;
        if (local_198 != 1) {
          do {
            iVar7 = (int)local_180 * 2;
            pfVar10 = (float *)FUN_00794730(*(int *)(param_1 + 0x28) + iVar7);
            pfVar11 = (float *)FUN_00794730(*(int *)(param_1 + 0x28) + 2 + iVar7);
            local_118 = pfVar10[1];
            local_114 = pfVar11[1];
            fVar1 = pfVar11[2];
            local_184 = (float *)(((int)((fVar1 - pfVar10[2]) * (fVar1 - pfVar10[2]) +
                                        (local_114 - local_118) * (local_114 - local_118) +
                                        (*pfVar11 - *pfVar10) * (*pfVar11 - *pfVar10)) >> 1) +
                                 0x1fc00000);
            local_170 = (float)local_184 + local_170;
            local_100._0_4_ = fVar1;
            if ((local_140 == (float *)0x0) ||
               ((uint)(local_138 - (int)local_140 >> 2) <=
                (uint)((int)local_13c - (int)local_140 >> 2))) {
              local_184 = local_13c;
              if (local_13c < local_140) {
                FUN_00984d5e();
              }
              FUN_007996f0(local_28,local_144,local_184,&local_170);
            }
            else {
              *local_13c = local_170;
              local_13c = local_13c + 1;
            }
            pfVar11 = (float *)FUN_00794730(*(int *)(param_1 + 0x28) + 1 + iVar7);
            pfVar12 = (float *)FUN_00794730(*(int *)(param_1 + 0x28) + 3 + iVar7);
            pfVar10 = local_108;
            local_100 = (double)CONCAT44(local_100._4_4_,*pfVar11);
            local_114 = pfVar11[1];
            local_118 = pfVar12[1];
            fVar1 = *pfVar12 - *pfVar11;
            local_184 = (float *)(((int)((pfVar12[2] - pfVar11[2]) * (pfVar12[2] - pfVar11[2]) +
                                        (local_118 - local_114) * (local_118 - local_114) +
                                        fVar1 * fVar1) >> 1) + 0x1fc00000);
            local_18c = (float)local_184 + local_18c;
            if ((local_10c == (float *)0x0) ||
               ((uint)(local_104 - (int)local_10c >> 2) <=
                (uint)((int)local_108 - (int)local_10c >> 2))) {
              if (local_108 < local_10c) {
                FUN_00984d5e();
              }
              FUN_007996f0(local_20,local_110,pfVar10,&local_18c);
            }
            else {
              *local_108 = local_18c;
              local_108 = local_108 + 1;
            }
            local_180 = (float)((int)local_180 + 1);
          } while ((uint)local_180 < local_198 - 1U);
        }
        *(short *)(*piVar5 + 0x22) = (short)local_f4 + 2;
        if (1 < local_198 - 1U) {
          iVar7 = 0;
          local_198 = local_198 + -2;
          local_194 = 0;
          local_180 = 2.8026e-45;
          do {
            puVar13 = (undefined4 *)FUN_00794760(*(int *)(param_1 + 0x28) + (int)local_180);
            local_5c = *puVar13;
            if ((local_140 == (float *)0x0) ||
               ((uint)((int)local_13c - (int)local_140 >> 2) <= local_194)) {
              FUN_00984d5e();
            }
            local_58 = (*(float *)(iVar7 + (int)local_140) / local_170) * 0.999;
            FUN_00796320(&local_5c,*(undefined1 *)(param_1 + 0x18));
            *(short *)(*piVar5 + 0x22) = *(short *)(*piVar5 + 0x22) + 1;
            puVar13 = (undefined4 *)FUN_00794760(*(int *)(param_1 + 0x28) + 1 + (int)local_180);
            local_54 = *puVar13;
            if ((local_10c == (float *)0x0) ||
               ((uint)((int)local_108 - (int)local_10c >> 2) <= local_194)) {
              FUN_00984d5e();
            }
            local_50 = (*(float *)(iVar7 + (int)local_10c) / local_18c) * 0.999;
            FUN_00796320(&local_54,*(undefined1 *)(param_1 + 0x18));
            local_180 = (float)((int)local_180 + 2);
            *(short *)(*piVar5 + 0x22) = *(short *)(*piVar5 + 0x22) + 1;
            local_194 = local_194 + 1;
            iVar7 = iVar7 + 4;
            local_198 = local_198 + -1;
          } while (local_198 != 0);
        }
        *(short *)(*piVar5 + 0x22) = *(short *)(*piVar5 + 0x22) + 1;
        *(short *)(*piVar5 + 0x22) = *(short *)(*piVar5 + 0x22) + 1;
        if (local_10c != (float *)0x0) {
          FUN_00401f20(local_10c);
        }
        local_10c = (float *)0x0;
        local_108 = (float *)0x0;
        local_104 = 0;
        if (local_140 != (float *)0x0) {
          FUN_00401f20(local_140);
        }
        local_140 = (float *)0x0;
        local_13c = (float *)0x0;
        local_138 = 0;
        local_c = 0xffffffff;
        if (local_150 != 0) {
          FUN_00401f20(local_150);
        }
        local_11c = local_11c + 1;
      } while (local_11c < (uint)piVar5[0xb]);
    }
  }
  *unaff_FS_OFFSET = local_14;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0079da10(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float local_c;
  float local_8;
  float local_4;
  
  fVar8 = (float10)FUN_00784210(0);
  fVar1 = *(float *)(param_1 + 0x14);
  uVar7 = *(uint *)(in_ECX + 0x34);
  uVar6 = 0;
  if (uVar7 != 0) {
    local_c = 0.0;
    do {
      fVar2 = (float)(int)uVar6;
      if ((int)uVar6 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      fVar3 = (float)(int)uVar7;
      if ((int)uVar7 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      fVar2 = 1.0 - fVar2 / (fVar3 - 1.0);
      local_8 = -fVar2 * *(float *)(param_1 + 0x14);
      fVar9 = (float10)FUN_00784210(fVar2);
      local_4 = (float)(fVar9 * (float10)*(float *)(param_1 + 0x14) -
                       (float10)(float)(fVar8 * (float10)fVar1));
      FUN_00791630(&local_c);
      uVar7 = *(uint *)(in_ECX + 0x34);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  uVar7 = *(int *)(in_ECX + 0x34) - 2;
  if (-1 < (int)uVar7) {
    iVar5 = uVar7 * 0xc;
    do {
      if ((*(int *)(param_2 + 4) == 0) ||
         ((uint)((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0xc) <= uVar7)) {
        FUN_00984d5e();
      }
      iVar4 = *(int *)(param_2 + 4);
      local_c = *(float *)(iVar4 + iVar5);
      local_4 = *(float *)(iVar4 + iVar5 + 8);
      local_8 = *(float *)(iVar4 + 4 + iVar5) * -1.0;
      FUN_00791630(&local_c);
      uVar7 = uVar7 - 1;
      iVar5 = iVar5 + -0xc;
    } while (-1 < (int)uVar7);
  }
  iVar5 = FUN_006f1080();
  if (iVar5 != 0) {
    uVar7 = 0;
    do {
      if (uVar7 != *(int *)(in_ECX + 0x34) - 1U) {
        if (uVar7 == 0) {
          if ((*(int *)(param_2 + 4) == 0) ||
             ((uint)((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0xc) < 2)) {
            FUN_00984d5e();
          }
          if ((*(int *)(param_2 + 4) == 0) ||
             (iVar4 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4), iVar5 = iVar4 >> 0x1f,
             iVar4 / 0xc + iVar5 == iVar5)) {
            FUN_00984d5e();
          }
          if ((*(int *)(param_2 + 4) == 0) ||
             ((uint)((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0xc) < 2)) {
            FUN_00984d5e();
          }
          if ((*(int *)(param_2 + 4) == 0) ||
             (iVar4 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4), iVar5 = iVar4 >> 0x1f,
             iVar4 / 0xc + iVar5 == iVar5)) {
            FUN_00984d5e();
          }
          FUN_0098598a();
        }
        else {
          iVar4 = FUN_006f1080();
          iVar5 = *(int *)(param_2 + 4);
          if (uVar7 == iVar4 - 1U) {
            if ((iVar5 == 0) || ((uint)((*(int *)(param_2 + 8) - iVar5) / 0xc) <= uVar7)) {
              FUN_00984d5e();
            }
            if ((*(int *)(param_2 + 4) == 0) ||
               ((uint)((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0xc) <= uVar7 - 1)) {
              FUN_00984d5e();
            }
            if ((*(int *)(param_2 + 4) == 0) ||
               ((uint)((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0xc) <= uVar7)) {
              FUN_00984d5e();
            }
            if ((*(int *)(param_2 + 4) == 0) ||
               ((uint)((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0xc) <= uVar7 - 1)) {
              FUN_00984d5e();
            }
            FUN_0098598a();
          }
          else {
            if ((iVar5 == 0) || ((uint)((*(int *)(param_2 + 8) - iVar5) / 0xc) <= uVar7 + 1)) {
              FUN_00984d5e();
            }
            if ((*(int *)(param_2 + 4) == 0) ||
               ((uint)((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0xc) <= uVar7)) {
              FUN_00984d5e();
            }
            if ((*(int *)(param_2 + 4) == 0) ||
               ((uint)((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0xc) <= uVar7 + 1)) {
              FUN_00984d5e();
            }
            if ((*(int *)(param_2 + 4) == 0) ||
               ((uint)((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0xc) <= uVar7)) {
              FUN_00984d5e();
            }
            iVar5 = *(int *)(param_2 + 4);
            FUN_0098598a();
            if ((iVar5 == 0) || ((uint)((*(int *)(param_2 + 8) - iVar5) / 0xc) <= uVar7)) {
              FUN_00984d5e();
            }
            if ((*(int *)(param_2 + 4) == 0) ||
               ((uint)((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0xc) <= uVar7 - 1)) {
              FUN_00984d5e();
            }
            if ((*(int *)(param_2 + 4) == 0) ||
               ((uint)((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0xc) <= uVar7)) {
              FUN_00984d5e();
            }
            if ((*(int *)(param_2 + 4) == 0) ||
               ((uint)((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0xc) <= uVar7 - 1)) {
              FUN_00984d5e();
            }
            FUN_0098598a();
          }
        }
      }
      fVar8 = (float10)FUN_00986000();
      local_8 = (float)fVar8;
      fVar8 = (float10)FUN_00986300();
      local_4 = (float)fVar8;
      fVar8 = (float10)FUN_00982c30();
      fVar1 = 1.0 / (float)fVar8;
      local_c = fVar1 * 0.0;
      local_8 = local_8 * fVar1;
      local_4 = fVar1 * local_4;
      FUN_00791630(&local_c);
      uVar7 = uVar7 + 1;
      uVar6 = FUN_006f1080();
    } while (uVar7 < uVar6);
  }
  return;
}



void FUN_0079e020(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00984d5e();
  }
  if (param_3 != param_5) {
    uVar1 = FUN_0079bdf0(param_5,*(undefined4 *)(in_ECX + 8),param_3);
    FUN_0079b120(uVar1,*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = uVar1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



int FUN_0079e080(int param_1,int param_2,undefined4 param_3)

{
  FUN_0079b620(param_1,param_2,param_3);
  return param_2 * 0x2c + param_1;
}



void FUN_0079e0c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0079be80(param_1,param_2,param_3,param_2,param_2,0);
  return;
}



void FUN_0079e0f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0079b470(param_1,param_2,param_3);
  return;
}



void FUN_0079e120(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0079b770(param_1,param_2,param_3,param_3,param_3,0);
  return;
}



void FUN_0079e150(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00401f20(*(int *)(param_1 + 4));
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



void FUN_0079e190(int param_1,int param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cc400;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0079b7d0(param_1,param_3);
    param_1 = param_1 + 0x30;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0079e220(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_3 - param_1) / 0x30;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0x30 + param_1;
    FUN_0079c0d0(param_1,iVar1,iVar2 * 0x60 + param_1,param_4);
    FUN_0079c0d0(param_2 + iVar2 * -0x30,param_2,iVar2 * 0x30 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0x30;
    FUN_0079c0d0(param_3 + iVar2 * -0x60,iVar3,param_3,param_4);
    FUN_0079c0d0(iVar1,param_2,iVar3,param_4);
    return;
  }
  FUN_0079c0d0(param_1,param_2,param_3,param_4);
  return;
}



void FUN_0079e2e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_2 - param_1) / 0x30;
  iVar2 = iVar1 / 2;
  if (0 < iVar2) {
    iVar3 = iVar2 * 0x30 + 0x14 + param_1;
    do {
      iVar2 = iVar2 + -1;
      FUN_0079ad70(iVar3 + -0x44);
      FUN_0079c130(param_1,iVar2,iVar1);
      iVar3 = iVar3 + -0x30;
    } while (0 < iVar2);
  }
  return;
}



void FUN_0079e380(void)

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
  FUN_0079e020(local_8,in_ECX,uVar2,in_ECX,uVar1);
  return;
}



int FUN_0079e3c0(int param_1,int param_2,undefined4 param_3)

{
  FUN_0079bf40(param_1,param_2,param_3);
  return param_2 * 0x10 + param_1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0079e400(undefined4 param_1,int param_2,uint param_3,int param_4)

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
  uint local_40;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009cc428;
  local_10 = *unaff_FS_OFFSET;
  uStack_64 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  *unaff_FS_OFFSET = (int)&local_10;
  uVar5 = 0;
  local_2c = 0xf;
  local_30 = 0;
  local_40 = local_40 & 0xffffff00;
  local_18 = uStack_64;
  FUN_00414420(param_4,0,0xffffffff);
  local_28 = *(undefined4 *)(param_4 + 0x1c);
  local_24 = *(undefined4 *)(param_4 + 0x20);
  local_20 = *(undefined4 *)(param_4 + 0x24);
  local_1c = *(undefined4 *)(param_4 + 0x28);
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
      uVar3 = FUN_0079b470(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar3 = FUN_0079e080(uVar3,param_3,local_44);
      FUN_0079b470(param_2,*(undefined4 *)(in_ECX + 8),uVar3);
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar2) / 0x2c;
      }
      if (iVar2 != 0) {
        FUN_0079b120(iVar2,*(undefined4 *)(in_ECX + 8));
        FUN_00401f20(*(undefined4 *)(in_ECX + 4));
      }
      *(uint *)(in_ECX + 0xc) = uVar5 * 0x2c + iVar1;
      *(uint *)(in_ECX + 8) = (param_3 + iVar4) * 0x2c + iVar1;
      *(int *)(in_ECX + 4) = iVar1;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8);
      if ((uint)((iVar2 - param_2) / 0x2c) < param_3) {
        FUN_0079e0f0(param_2,iVar2,param_3 * 0x2c + param_2);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0079e080(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2) / 0x2c,local_44
                    );
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x2c;
        local_8 = 0;
        FUN_0079b6b0(param_2,*(int *)(in_ECX + 8) + param_3 * -0x2c,local_44);
      }
      else {
        iVar1 = iVar2 + param_3 * -0x2c;
        uVar3 = FUN_0079e0f0(iVar1,iVar2,iVar2);
        *(undefined4 *)(in_ECX + 8) = uVar3;
        FUN_0079e120(param_2,iVar1,iVar2);
        FUN_0079b6b0(param_2,param_3 * 0x2c + param_2,local_44);
      }
    }
  }
  if (0xf < local_2c) {
    FUN_00401f20(local_40);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0079e720(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0079c020(param_1,param_2,param_3,param_3,param_3,0);
  return;
}



int FUN_0079e750(int param_1,int param_2,int param_3)

{
  FUN_0079c080(param_1,param_2,param_3,param_3,param_3,0);
  return param_3 + (param_2 - param_1 >> 4) * -0x10;
}



void FUN_0079e790(uint *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = ((int)(param_3 - param_2) / 0x60) * 0x30 + param_2;
  FUN_0079e220(param_2,uVar5,param_3 - 0x30,param_4);
  uVar4 = uVar5 + 0x30;
  for (; param_2 < uVar5; uVar5 = uVar5 - 0x30) {
    if ((*(float *)(uVar5 + 0x24) < *(float *)(uVar5 - 0xc)) ||
       (*(float *)(uVar5 - 0xc) < *(float *)(uVar5 + 0x24))) break;
  }
  uVar3 = uVar5;
  if (3 < (int)((param_3 - uVar4) + 0x2f) / 0x30) {
    fVar1 = *(float *)(uVar5 + 0x24);
    do {
      uVar2 = uVar4;
      if ((fVar1 < *(float *)(uVar4 + 0x24)) || (*(float *)(uVar4 + 0x24) < fVar1))
      goto joined_r0x0079e8ea;
      if ((fVar1 < *(float *)(uVar4 + 0x54)) || (*(float *)(uVar4 + 0x54) < fVar1)) {
        uVar4 = uVar4 + 0x30;
        uVar2 = uVar4;
        goto joined_r0x0079e8ea;
      }
      if ((fVar1 < *(float *)(uVar4 + 0x84)) || (*(float *)(uVar4 + 0x84) < fVar1)) {
        uVar4 = uVar4 + 0x60;
        uVar2 = uVar4;
        goto joined_r0x0079e8ea;
      }
      if ((fVar1 < *(float *)(uVar4 + 0xb4)) || (*(float *)(uVar4 + 0xb4) < fVar1)) {
        uVar4 = uVar4 + 0x90;
        uVar2 = uVar4;
        goto joined_r0x0079e8ea;
      }
      uVar4 = uVar4 + 0xc0;
    } while ((int)uVar4 < (int)(param_3 - 0x90));
  }
  uVar2 = uVar4;
  if (uVar4 < param_3) {
    do {
      uVar2 = uVar4;
      if ((*(float *)(uVar5 + 0x24) < *(float *)(uVar4 + 0x24)) ||
         (*(float *)(uVar4 + 0x24) < *(float *)(uVar5 + 0x24))) break;
      uVar4 = uVar4 + 0x30;
      uVar2 = uVar4;
    } while (uVar4 < param_3);
  }
joined_r0x0079e8ea:
  do {
    if (param_3 <= uVar2) {
joined_r0x0079e92c:
      for (; param_2 < uVar5; uVar5 = uVar5 - 0x30) {
        if (*(float *)(uVar5 - 0xc) <= *(float *)(uVar3 + 0x24)) {
          if (*(float *)(uVar5 - 0xc) < *(float *)(uVar3 + 0x24)) break;
          uVar3 = uVar3 - 0x30;
          FUN_0079b8d0(uVar3,uVar5 - 0x30);
        }
      }
      if (uVar5 == param_2) {
        if (uVar2 == param_3) {
          param_1[1] = uVar4;
          *param_1 = uVar3;
          return;
        }
        if (uVar4 != uVar2) {
          FUN_0079b8d0(uVar3,uVar4);
        }
        uVar4 = uVar4 + 0x30;
        FUN_0079b8d0(uVar3,uVar2);
        uVar2 = uVar2 + 0x30;
        uVar3 = uVar3 + 0x30;
      }
      else {
        uVar5 = uVar5 - 0x30;
        if (uVar2 == param_3) {
          uVar3 = uVar3 - 0x30;
          if (uVar5 != uVar3) {
            FUN_0079b8d0(uVar5,uVar3);
          }
          uVar4 = uVar4 - 0x30;
          FUN_0079b8d0(uVar3,uVar4);
        }
        else {
          FUN_0079b8d0(uVar2,uVar5);
          uVar2 = uVar2 + 0x30;
        }
      }
      goto joined_r0x0079e8ea;
    }
    if (*(float *)(uVar3 + 0x24) <= *(float *)(uVar2 + 0x24)) {
      if (*(float *)(uVar3 + 0x24) < *(float *)(uVar2 + 0x24)) goto joined_r0x0079e92c;
      FUN_0079b8d0(uVar4,uVar2);
      uVar4 = uVar4 + 0x30;
    }
    uVar2 = uVar2 + 0x30;
  } while( true );
}



void FUN_0079e9f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != param_2) && (iVar3 = param_1 + 0x30, iVar3 != param_2)) {
    iVar4 = param_1 + 0x60;
    do {
      iVar1 = iVar3;
      iVar2 = param_1;
      if (*(float *)(iVar4 + -0xc) <= *(float *)(param_1 + 0x24)) {
        do {
          iVar2 = iVar1;
          iVar1 = iVar2 + -0x30;
        } while (*(float *)(iVar2 + -0xc) < *(float *)(iVar4 + -0xc));
      }
      if ((iVar2 != iVar3) && (iVar3 != iVar4)) {
        FUN_0079bb20(iVar2,iVar3,iVar4,0,0);
      }
      iVar3 = iVar3 + 0x30;
      iVar4 = iVar4 + 0x30;
    } while (iVar3 != param_2);
  }
  return;
}



void FUN_0079ea70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0079c2e0(param_1,param_2,param_3);
  return;
}



void FUN_0079eaa0(undefined4 param_1,undefined4 param_2)

{
  FUN_0079e150(param_1,param_2);
  return;
}



int FUN_0079eac0(int param_1,int param_2,undefined4 param_3)

{
  FUN_0079e190(param_1,param_2,param_3);
  return param_2 * 0x30 + param_1;
}



void FUN_0079eb00(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(in_ECX + 4);
  if (uVar3 != 0) {
    iVar1 = *(uint *)(in_ECX + 8) - uVar3;
    iVar2 = iVar1 >> 0x1f;
    if (iVar1 / 0x2c + iVar2 != iVar2) {
      if (*(uint *)(in_ECX + 8) < uVar3) {
        FUN_00984d5e();
      }
      if ((param_2 == 0) || (param_2 != in_ECX)) {
        FUN_00984d5e();
      }
      iVar2 = (int)(param_3 - uVar3) / 0x2c;
      goto LAB_0079eb63;
    }
  }
  iVar2 = 0;
LAB_0079eb63:
  FUN_0079e400(param_2,param_3,1,param_4);
  uVar3 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar3) {
    FUN_00984d5e();
  }
  uVar3 = iVar2 * 0x2c + uVar3;
  if ((*(uint *)(in_ECX + 8) < uVar3) || (uVar3 < *(uint *)(in_ECX + 4))) {
    FUN_00984d5e();
  }
  *param_1 = in_ECX;
  param_1[1] = uVar3;
  return;
}



void FUN_0079ebb0(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int extraout_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  uint uStack_3c;
  undefined1 local_2c [4];
  int local_28;
  uint local_1c;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009cc458;
  local_10 = *unaff_FS_OFFSET;
  uStack_3c = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  *unaff_FS_OFFSET = (int)&local_10;
  FUN_007a3580(param_4);
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = 0;
  local_8 = 0;
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)(in_ECX + 0xc) - iVar2 >> 4;
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
    if (uVar5 < iVar1 + param_3) {
      if (0xfffffff - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(in_ECX + 8) - iVar2 >> 4;
      }
      if (uVar5 < iVar1 + param_3) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(in_ECX + 8) - iVar2 >> 4;
        }
        uVar5 = iVar2 + param_3;
      }
      iVar1 = FUN_00794550(uVar5,0);
      local_1c = local_1c & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,1);
      uVar3 = FUN_00795ed0(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar3 = FUN_0079e3c0(uVar3,param_3,local_2c);
      local_1c = local_1c & 0xffffff00;
      FUN_00795ed0(param_2,*(undefined4 *)(in_ECX + 8),uVar3);
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_ECX + 8) - iVar2 >> 4;
      }
      if (iVar2 != 0) {
        FUN_00794fc0(iVar2,*(undefined4 *)(in_ECX + 8));
        FUN_00401f20(*(undefined4 *)(in_ECX + 4));
      }
      *(uint *)(in_ECX + 0xc) = uVar5 * 0x10 + iVar1;
      *(uint *)(in_ECX + 8) = (param_3 + iVar4) * 0x10 + iVar1;
      *(int *)(in_ECX + 4) = iVar1;
    }
    else {
      local_1c = *(uint *)(in_ECX + 8);
      if ((uint)((int)(local_1c - param_2) >> 4) < param_3) {
        FUN_00796980(param_2,local_1c,param_3 * 0x10 + param_2);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0079e3c0(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2 >> 4),local_2c);
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x10;
        local_8 = 0;
        FUN_0079be50(param_2,*(int *)(in_ECX + 8) + param_3 * -0x10,local_2c);
      }
      else {
        iVar2 = local_1c + param_3 * -0x10;
        uVar3 = FUN_00796980(iVar2,local_1c,local_1c);
        *(undefined4 *)(in_ECX + 8) = uVar3;
        FUN_0079e750(param_2,iVar2,local_1c);
        FUN_0079be50(param_2,param_3 * 0x10 + param_2,local_2c);
      }
    }
  }
  if (local_28 != 0) {
    FUN_00401f20(local_28);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0079ee40(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009cc480;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  if (*(int *)(param_1 + 4) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x30;
  }
  uVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (uVar4 != 0) {
    if (0x5555555 < uVar4) {
      FUN_00790b90();
      uVar3 = extraout_ECX;
    }
    iVar2 = FUN_00799fa0(uVar4,uVar3);
    *(int *)(in_ECX + 4) = iVar2;
    *(int *)(in_ECX + 8) = iVar2;
    *(uint *)(in_ECX + 0xc) = uVar4 * 0x30 + iVar2;
    uVar4 = *(uint *)(param_1 + 8);
    local_8 = 0;
    if (uVar4 < *(uint *)(param_1 + 4)) {
      FUN_00984d5e();
    }
    uVar1 = *(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 8) < uVar1) {
      FUN_00984d5e();
    }
    uVar3 = FUN_0079c2e0(uVar1,uVar4,*(undefined4 *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 8) = uVar3;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0079ef40(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_2 - param_1) / 0x30;
  if (1 < iVar1) {
    param_2 = param_2 + -0x1c;
    if (iVar1 < 2) goto LAB_0079efd2;
    do {
      iVar1 = param_2 + -0x14;
      FUN_0079ad70(iVar1);
      FUN_0079c380(param_1,iVar1,iVar1);
LAB_0079efd2:
      param_2 = param_2 + -0x30;
    } while (1 < (param_2 + (0x1c - param_1)) / 0x30);
  }
  return;
}



void FUN_0079f040(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint local_8 [2];
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)(in_ECX + 8) - uVar1) / 0x2c) <
      (uint)((int)(*(int *)(in_ECX + 0xc) - uVar1) / 0x2c))) {
    iVar2 = *(int *)(in_ECX + 8);
    local_8[0] = local_8[0] & 0xffffff00;
    FUN_0079b620(iVar2,1,param_1);
    *(int *)(in_ECX + 8) = iVar2 + 0x2c;
    return;
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (uVar3 < uVar1) {
    FUN_00984d5e();
  }
  FUN_0079eb00(local_8,in_ECX,uVar3,param_1);
  return;
}



void FUN_0079f0e0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

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
    uVar2 = FUN_0079be80(param_5,*(undefined4 *)(in_ECX + 8),param_3,param_1,param_1,param_2);
    FUN_0079e150(uVar2,*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = uVar2;
  }
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



void FUN_0079f150(int *param_1,int param_2,int param_3,undefined4 param_4)

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
  FUN_0079ebb0(param_2,param_3,1,param_4);
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



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0079f1e0(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  undefined1 auStack_138 [12];
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  char *pcStack_124;
  undefined1 *puStack_120;
  uint uStack_11c;
  int local_108;
  int local_104;
  undefined1 *local_100;
  undefined1 local_fc [4];
  uint local_f8;
  undefined4 local_e8;
  uint local_e4;
  undefined1 local_e0 [4];
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  undefined1 local_c4 [40];
  undefined1 local_9c [96];
  undefined1 local_3c [4];
  uint local_38;
  undefined4 local_28;
  uint local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cc4ce;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_108;
  uStack_11c = DAT_00b30aac ^ (uint)&stack0xfffffee8;
  *unaff_FS_OFFSET = (int)&local_c;
  puStack_120 = (undefined1 *)0x79f22f;
  local_108 = in_ECX;
  puStack_120 = (undefined1 *)FUN_0078eb40();
  do {
    if ((int)puStack_120 < 0x36b8) {
      if (puStack_120 == (undefined1 *)0x36b7) {
        puStack_120 = (undefined1 *)0x79f550;
        uVar3 = FUN_0078eb40();
        *(undefined4 *)(in_ECX + 100) = uVar3;
      }
      else {
        switch(puStack_120) {
        case (undefined1 *)0x32ca:
          puStack_120 = (undefined1 *)0x79f26e;
          uVar3 = FUN_0078eb40();
          *(undefined4 *)(in_ECX + 0x38) = uVar3;
          break;
        case (undefined1 *)0x32cb:
          puStack_120 = (undefined1 *)0x79f27d;
          uVar3 = FUN_0078eb40();
          *(undefined4 *)(in_ECX + 0x28) = uVar3;
          break;
        case (undefined1 *)0x32cc:
          puStack_120 = (undefined1 *)0x79f28c;
          uVar3 = FUN_0078eb40();
          *(undefined4 *)(in_ECX + 0x2c) = uVar3;
          break;
        case (undefined1 *)0x32cd:
          puStack_120 = (undefined1 *)0x79f29b;
          puStack_120 = (undefined1 *)FUN_007909d0();
          pcStack_124 = (char *)0x79f2a3;
          FUN_00799eb0();
          break;
        case (undefined1 *)0x32ce:
          puStack_120 = (undefined1 *)0x79f2af;
          uVar3 = FUN_0078eb40();
          *(undefined4 *)(in_ECX + 0x34) = uVar3;
          break;
        case (undefined1 *)0x32cf:
          puStack_120 = (undefined1 *)0x79f2be;
          uVar1 = FUN_007877e0();
          *(undefined1 *)(in_ECX + 0x3c) = uVar1;
          break;
        case (undefined1 *)0x32d0:
          puStack_120 = (undefined1 *)0x79f319;
          FUN_0079e380();
          puStack_120 = (undefined1 *)0x79f320;
          local_104 = FUN_0078eb40();
          in_ECX = local_108;
          if (0 < local_104) {
            iVar4 = 0;
            do {
              local_24 = 0xf;
              local_20 = 0.5;
              local_28 = 0;
              local_38 = local_38 & 0xffffff00;
              local_1c = 1.0;
              local_18 = 0.0;
              local_14 = 0.0;
              local_4 = 0;
              puStack_120 = (undefined1 *)0x79f37d;
              FUN_0078eb40();
              puStack_120 = (undefined1 *)0x79f384;
              iVar2 = FUN_0078eb40();
              do {
                switch(iVar2) {
                case 0x36b2:
                  local_100 = auStack_138;
                  FUN_0078ec20(auStack_138);
                  FUN_00789120();
                  puStack_120 = (undefined1 *)0xffffffff;
                  pcStack_124 = (char *)0x0;
                  puStack_128 = local_fc;
                  local_4._0_1_ = 1;
                  uStack_12c = 0x79f3dc;
                  FUN_00414420();
                  local_4._0_1_ = 0;
                  if (0xf < local_e4) {
                    puStack_120 = (undefined1 *)local_f8;
                    pcStack_124 = (char *)0x79f3f3;
                    FUN_00401f20();
                  }
                  puStack_120 = local_e0;
                  local_e4 = 0xf;
                  local_e8 = 0;
                  local_f8 = local_f8 & 0xffffff00;
                  pcStack_124 = (char *)0x79f417;
                  puStack_128 = (undefined1 *)FUN_00789430();
                  puStack_120 = (undefined1 *)0xffffffff;
                  pcStack_124 = (char *)0x0;
                  local_4._0_1_ = 2;
                  uStack_12c = 0x79f42f;
                  FUN_00414420();
                  local_4 = (uint)local_4._1_3_ << 8;
                  if (0xf < local_c8) {
                    puStack_120 = (undefined1 *)local_dc;
                    pcStack_124 = (char *)0x79f446;
                    FUN_00401f20();
                  }
                  local_c8 = 0xf;
                  local_cc = 0;
                  local_dc = local_dc & 0xffffff00;
                  break;
                case 0x36b3:
                  puStack_120 = (undefined1 *)0x79f462;
                  fVar5 = (float10)FUN_0078eb10();
                  local_20 = (float)fVar5;
                  break;
                case 0x36b4:
                  puStack_120 = (undefined1 *)0x79f472;
                  fVar5 = (float10)FUN_0078eb10();
                  local_1c = (float)fVar5;
                  break;
                case 0x36b5:
                  puStack_120 = (undefined1 *)0x79f482;
                  fVar5 = (float10)FUN_0078eb10();
                  local_18 = (float)fVar5;
                  break;
                case 0x36b6:
                  puStack_120 = (undefined1 *)0x79f492;
                  fVar5 = (float10)FUN_0078eb10();
                  local_14 = (float)fVar5;
                  break;
                default:
                  pcStack_124 = "malformed frond texture information (token %d)";
                  puStack_128 = (undefined1 *)0x79f57a;
                  puStack_120 = (undefined1 *)iVar2;
                  pcStack_124 = (char *)FUN_007a54a0();
                  puStack_120 = (undefined1 *)0x0;
                  local_4 = CONCAT31(local_4._1_3_,3);
                  puStack_128 = (undefined1 *)0x79f590;
                  FUN_00789190();
                  puStack_120 = &DAT_00af39e4;
                  pcStack_124 = local_c4;
                    /* WARNING: Subroutine does not return */
                  puStack_128 = (undefined1 *)0x79f59f;
                  __CxxThrowException_8();
                }
                puStack_120 = (undefined1 *)0x79f4a0;
                iVar2 = FUN_0078eb40();
              } while (iVar2 != 0x36b1);
              puStack_120 = local_3c;
              pcStack_124 = (char *)0x79f4bf;
              FUN_0079f040();
              local_4 = 0xffffffff;
              if (0xf < local_24) {
                puStack_120 = (undefined1 *)local_38;
                pcStack_124 = (char *)0x79f4e0;
                FUN_00401f20();
              }
              iVar4 = iVar4 + 1;
              local_24 = 0xf;
              local_28 = 0;
              local_38 = local_38 & 0xffffff00;
              in_ECX = local_108;
            } while (iVar4 < local_104);
          }
          break;
        case (undefined1 *)0x32d1:
          puStack_120 = (undefined1 *)0x79f2cd;
          uVar3 = FUN_0078eb40();
          *(undefined4 *)(in_ECX + 0x50) = uVar3;
          break;
        case (undefined1 *)0x32d2:
          puStack_120 = (undefined1 *)0x79f2dc;
          fVar5 = (float10)FUN_0078eb10();
          *(float *)(in_ECX + 0x54) = (float)fVar5;
          break;
        case (undefined1 *)0x32d3:
          puStack_120 = (undefined1 *)0x79f2eb;
          fVar5 = (float10)FUN_0078eb10();
          *(float *)(in_ECX + 0x58) = (float)fVar5;
          break;
        case (undefined1 *)0x32d4:
          puStack_120 = (undefined1 *)0x79f2fa;
          fVar5 = (float10)FUN_0078eb10();
          *(float *)(in_ECX + 0x5c) = (float)fVar5;
          break;
        case (undefined1 *)0x32d5:
          puStack_120 = (undefined1 *)0x79f309;
          fVar5 = (float10)FUN_0078eb10();
          *(float *)(in_ECX + 0x60) = (float)fVar5;
          break;
        default:
          goto switchD_0079f260_default;
        }
      }
    }
    else {
      if (puStack_120 != (undefined1 *)0x36b8) {
switchD_0079f260_default:
        pcStack_124 = "malformed frond info (token %d)";
        puStack_128 = (undefined1 *)0x79f5b1;
        pcStack_124 = (char *)FUN_007a54a0();
        puStack_120 = (undefined1 *)0x0;
        local_4 = 4;
        puStack_128 = (undefined1 *)0x79f5cd;
        FUN_00789190();
        puStack_120 = &DAT_00af39e4;
        pcStack_124 = local_9c;
                    /* WARNING: Subroutine does not return */
        puStack_128 = &UNK_0079f5df;
        __CxxThrowException_8();
      }
      puStack_120 = (undefined1 *)0x79f563;
      uVar3 = FUN_0078eb40();
      *(undefined4 *)(in_ECX + 0x68) = uVar3;
    }
    puStack_120 = (undefined1 *)0x79f514;
    puStack_120 = (undefined1 *)FUN_0078eb40();
    if (puStack_120 == (undefined1 *)0x32c9) {
      *unaff_FS_OFFSET = local_c;
      return;
    }
  } while( true );
}



void FUN_0079f630(void)

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
  FUN_0079f0e0(local_8,in_ECX,uVar2,in_ECX,uVar1);
  return;
}



void FUN_0079f670(undefined4 param_1)

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
    FUN_0079bf40(iVar2,1,param_1);
    *(int *)(in_ECX + 8) = iVar2 + 0x10;
    return;
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (uVar3 < uVar1) {
    FUN_00984d5e();
  }
  FUN_0079f150(local_8,in_ECX,uVar3,param_1);
  return;
}



void FUN_0079f700(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int extraout_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  uint uStack_5c;
  undefined1 local_4c [4];
  int local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009cc508;
  local_10 = *unaff_FS_OFFSET;
  uStack_5c = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  *unaff_FS_OFFSET = (int)&local_10;
  FUN_0079ad70(param_4);
  local_3c = *(undefined4 *)(param_4 + 0x10);
  local_34 = *(undefined1 *)(param_4 + 0x18);
  local_38 = *(undefined4 *)(param_4 + 0x14);
  local_24 = *(undefined4 *)(param_4 + 0x28);
  local_20 = *(undefined4 *)(param_4 + 0x2c);
  local_30 = *(undefined4 *)(param_4 + 0x1c);
  local_2c = *(undefined4 *)(param_4 + 0x20);
  local_28 = *(undefined4 *)(param_4 + 0x24);
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
      local_1c = local_1c & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,1);
      uVar3 = FUN_0079c2e0(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar3 = FUN_0079eac0(uVar3,param_3,local_4c);
      local_1c = local_1c & 0xffffff00;
      FUN_0079c2e0(param_2,*(undefined4 *)(in_ECX + 8),uVar3);
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar2) / 0x30;
      }
      if (iVar2 != 0) {
        FUN_0079e150(iVar2,*(undefined4 *)(in_ECX + 8));
        FUN_00401f20(*(undefined4 *)(in_ECX + 4));
      }
      *(uint *)(in_ECX + 0xc) = uVar5 * 0x30 + iVar1;
      *(uint *)(in_ECX + 8) = (param_3 + iVar4) * 0x30 + iVar1;
      *(int *)(in_ECX + 4) = iVar1;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8);
      if ((uint)((iVar2 - param_2) / 0x30) < param_3) {
        FUN_0079ea70(param_2,iVar2,param_3 * 0x30 + param_2);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0079eac0(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2) / 0x30,local_4c
                    );
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x30;
        local_8 = 0;
        FUN_0079bee0(param_2,*(int *)(in_ECX + 8) + param_3 * -0x30,local_4c);
      }
      else {
        iVar1 = iVar2 + param_3 * -0x30;
        uVar3 = FUN_0079ea70(iVar1,iVar2,iVar2);
        *(undefined4 *)(in_ECX + 8) = uVar3;
        FUN_0079e720(param_2,iVar1,iVar2);
        FUN_0079bee0(param_2,param_3 * 0x30 + param_2,local_4c);
      }
    }
  }
  if (local_48 != 0) {
    FUN_00401f20(local_48);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0079fa30(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 / 0x30;
    if (iVar1 < 0x21) {
LAB_0079fb10:
      if (1 < iVar1) {
        FUN_0079e9f0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (param_2 - param_1) / 0x30) {
          FUN_0079e2e0(param_1,param_2,param_4,0,0);
        }
        FUN_0079ef40(param_1,param_2,param_4);
        return;
      }
      goto LAB_0079fb10;
    }
    FUN_0079e790(&local_8,param_1,param_2,param_4);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_8 - param_1) / 0x30 < (param_2 - local_4) / 0x30) {
      FUN_0079fa30(param_1,local_8,param_3,param_4);
      param_1 = iVar1;
    }
    else {
      FUN_0079fa30(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}



void FUN_0079fb80(uint param_1)

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
    iVar7 = iVar7 / 0x30 + iVar2;
    uVar8 = iVar7 - iVar2;
    if (iVar7 != iVar2) {
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(int *)(in_ECX + 8) - iVar2) / 0x30;
      }
      if (uVar8 <= uVar4) {
        param_1 = param_1 & 0xffffff00;
        uVar5 = FUN_0079be80(*(undefined4 *)(uVar6 + 4),*piVar1,iVar2,param_1,param_1,param_1);
        FUN_0079e150(uVar5,*(undefined4 *)(in_ECX + 8));
        if (*(int *)(uVar6 + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             ((*(int *)(uVar6 + 8) - *(int *)(uVar6 + 4)) / 0x30) * 0x30 + *(int *)(in_ECX + 4);
        return;
      }
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_ECX + 0xc) - iVar2) / 0x30;
      }
      if (uVar6 < uVar8) {
        if (iVar2 != 0) {
          FUN_0079eaa0(iVar2,*(undefined4 *)(in_ECX + 8));
          FUN_00401f20(*(undefined4 *)(in_ECX + 4));
        }
        uVar5 = FUN_00799f10();
        cVar3 = FUN_0079ad20(uVar5);
        if (cVar3 == '\0') {
          return;
        }
        uVar5 = FUN_0079ea70(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                             *(undefined4 *)(in_ECX + 4));
        *(undefined4 *)(in_ECX + 8) = uVar5;
        return;
      }
      iVar7 = FUN_00799f10();
      iVar7 = iVar7 * 0x30 + *(int *)(param_1 + 4);
      FUN_0079e0c0(*(int *)(param_1 + 4),iVar7,iVar2);
      uVar5 = FUN_0079ea70(iVar7,*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_ECX + 8));
      *(undefined4 *)(in_ECX + 8) = uVar5;
      return;
    }
  }
  FUN_0079f630();
  return;
}



void FUN_0079fd10(int param_1)

{
  short *psVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  float *pfVar14;
  float *pfVar15;
  int *in_ECX;
  int iVar16;
  int iVar17;
  int *piVar18;
  int *unaff_FS_OFFSET;
  float10 fVar19;
  uint local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114 [2];
  float local_10c;
  float local_108;
  uint local_104;
  float local_100;
  float local_fc [2];
  float local_f4;
  int *local_f0;
  float local_ec;
  float *local_e8;
  float *local_e4;
  int local_e0;
  undefined1 local_dc [4];
  float *local_d8;
  float *local_d4;
  int local_d0;
  float local_cc;
  float local_c8;
  int *local_c0;
  int *local_bc;
  undefined4 local_b8;
  undefined1 local_b4 [4];
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined1 local_a4 [4];
  int local_a0;
  int local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88 [4];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58 [4];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_009cc567;
  local_14 = *unaff_FS_OFFSET;
  uVar10 = DAT_00b30aac ^ (uint)&stack0xfffffec8;
  *unaff_FS_OFFSET = (int)&local_14;
  if ((*in_ECX != 0) && (in_ECX[1] != 0)) {
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0;
    local_c = 1;
    local_f0 = in_ECX;
    FUN_0079da10(param_1,local_b4,local_a4);
    if (local_b0 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = (local_ac - local_b0) / 0xc;
    }
    *(int *)(param_1 + 0x2c) = iVar11;
    *(uint *)(param_1 + 0x28) = (uint)*(ushort *)(*in_ECX + 0x22);
    local_128 = 0;
    iVar11 = FUN_00799ee0(uVar10);
    if (iVar11 != 0) {
      do {
        local_114[0] = (float)(int)local_128;
        if ((int)local_128 < 0) {
          local_114[0] = local_114[0] + 4.2949673e+09;
        }
        iVar11 = FUN_00799ee0(uVar10);
        fVar5 = (float)iVar11;
        if (iVar11 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        local_120 = 0.0;
        local_108 = local_114[0] / (fVar5 - 1.0);
        if (*(int *)(param_1 + 0x2c) != 0) {
          local_104 = local_128 * 0x38;
          local_114[0] = 0.0;
          do {
            fVar5 = (float)(int)local_120;
            if ((int)local_120 < 0) {
              fVar5 = fVar5 + 4.2949673e+09;
            }
            fVar6 = (float)*(int *)(param_1 + 0x2c);
            if (*(int *)(param_1 + 0x2c) < 0) {
              fVar6 = fVar6 + 4.2949673e+09;
            }
            if ((*(int *)(param_1 + 4) == 0) ||
               ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38) <= local_128)) {
              FUN_00984d5e();
            }
            iVar11 = *(int *)(param_1 + 4);
            pfVar12 = (float *)(local_104 + 0xc + iVar11);
            pfVar14 = local_88;
            for (iVar16 = 9; iVar16 != 0; iVar16 = iVar16 + -1) {
              *pfVar14 = *pfVar12;
              pfVar12 = pfVar12 + 1;
              pfVar14 = pfVar14 + 1;
            }
            if (local_128 == 0) {
              pfVar12 = local_88;
            }
            else {
              if ((iVar11 == 0) ||
                 ((uint)((*(int *)(param_1 + 8) - iVar11) / 0x38) <= local_128 - 1)) {
                FUN_00984d5e();
              }
              pfVar12 = (float *)(*(int *)(param_1 + 4) + 0xc + (local_128 - 1) * 0x38);
            }
            uVar4 = *(undefined4 *)(param_1 + 0x1c);
            pfVar14 = local_58;
            for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
              *pfVar14 = *pfVar12;
              pfVar12 = pfVar12 + 1;
              pfVar14 = pfVar14 + 1;
            }
            FUN_00793a00(uVar4);
            FUN_00793a00(*(undefined4 *)(param_1 + 0x1c));
            if ((local_b0 == 0) || ((uint)((local_ac - local_b0) / 0xc) <= (uint)local_120)) {
              FUN_00984d5e();
            }
            fVar8 = local_114[0];
            local_fc[0] = local_70 * *(float *)(local_b0 + 8 + (int)local_114[0]) +
                          local_88[0] * *(float *)(local_b0 + (int)local_114[0]) +
                          local_88[3] * *(float *)(local_b0 + 4 + (int)local_114[0]);
            local_100 = local_6c * *(float *)(local_b0 + 8 + (int)local_114[0]) +
                        local_88[1] * *(float *)(local_b0 + (int)local_114[0]) +
                        local_78 * *(float *)(local_b0 + 4 + (int)local_114[0]);
            local_11c = local_68 * *(float *)(local_b0 + 8 + (int)local_114[0]) +
                        local_88[2] * *(float *)(local_b0 + (int)local_114[0]) +
                        local_74 * *(float *)(local_b0 + 4 + (int)local_114[0]);
            if ((local_b0 == 0) || ((uint)((local_ac - local_b0) / 0xc) <= (uint)local_120)) {
              FUN_00984d5e();
            }
            pfVar12 = (float *)(local_b0 + 4 + (int)fVar8);
            pfVar14 = (float *)(local_b0 + 8 + (int)fVar8);
            local_f4 = local_3c * *pfVar14 +
                       local_48 * *pfVar12 + local_58[1] * *(float *)(local_b0 + (int)fVar8);
            local_118 = local_40 * *pfVar14 +
                        local_58[0] * *(float *)(local_b0 + (int)fVar8) + local_58[3] * *pfVar12 +
                        local_fc[0];
            local_100 = local_f4 + local_100;
            local_114[0] = local_38 * *pfVar14 +
                           local_44 * *pfVar12 + local_58[2] * *(float *)(local_b0 + (int)fVar8) +
                           local_11c;
            fVar7 = local_118 * 0.5;
            local_10c = local_100 * 0.5;
            local_11c = local_114[0] * 0.5;
            local_fc[0] = local_100;
            if ((*(int *)(param_1 + 4) == 0) ||
               ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38) <= local_128)) {
              FUN_00984d5e();
            }
            pfVar12 = (float *)(*(int *)(param_1 + 4) + local_104);
            local_34 = *pfVar12 + fVar7;
            local_10c = pfVar12[1] + local_10c;
            local_11c = pfVar12[2] + local_11c;
            local_30 = local_10c;
            local_2c = local_11c;
            fVar19 = (float10)FUN_00982c30();
            piVar3 = local_f0;
            local_5c = 1.0 / (float)fVar19;
            local_64 = local_5c * local_118;
            local_60 = local_fc[0] * local_5c;
            local_5c = local_5c * local_114[0];
            FUN_00796260(&local_34);
            local_c8 = local_108;
            local_cc = fVar5 / (fVar6 - 1.0);
            FUN_00796320(&local_cc,*(undefined1 *)(param_1 + 0x18));
            if ((local_a0 == 0) || ((uint)((local_9c - local_a0) / 0xc) <= (uint)local_120)) {
              FUN_00984d5e();
            }
            fVar5 = *(float *)(local_a0 + (int)fVar8) * local_88[0];
            fVar7 = local_88[3] * *(float *)(local_a0 + 4 + (int)fVar8);
            fVar6 = local_70 * *(float *)(local_a0 + 8 + (int)fVar8);
            local_10c = local_6c * *(float *)(local_a0 + 8 + (int)fVar8) +
                        local_78 * *(float *)(local_a0 + 4 + (int)fVar8) +
                        local_88[1] * *(float *)(local_a0 + (int)fVar8);
            local_f4 = local_68 * *(float *)(local_a0 + 8 + (int)fVar8) +
                       local_74 * *(float *)(local_a0 + 4 + (int)fVar8) +
                       local_88[2] * *(float *)(local_a0 + (int)fVar8);
            if ((local_a0 == 0) || ((uint)((local_9c - local_a0) / 0xc) <= (uint)local_120)) {
              FUN_00984d5e();
            }
            pfVar12 = (float *)(local_a0 + 8 + (int)fVar8);
            local_100 = local_38 * *pfVar12 +
                        local_58[2] * *(float *)(local_a0 + (int)fVar8) +
                        local_44 * *(float *)(local_a0 + 4 + (int)fVar8);
            local_11c = local_100 + local_f4;
            local_114[0] = (local_40 * *pfVar12 +
                            local_58[0] * *(float *)(local_a0 + (int)fVar8) +
                            local_58[3] * *(float *)(local_a0 + 4 + (int)fVar8) +
                           fVar6 + fVar7 + fVar5) * 0.5;
            local_fc[0] = (local_3c * *pfVar12 +
                           local_58[1] * *(float *)(local_a0 + (int)fVar8) +
                           local_48 * *(float *)(local_a0 + 4 + (int)fVar8) + local_10c) * 0.5;
            local_118 = local_11c * 0.5;
            fVar19 = (float10)FUN_00982c30();
            local_8c = 1.0 / (float)fVar19;
            local_94 = local_8c * local_114[0];
            local_90 = local_fc[0] * local_8c;
            local_8c = local_8c * local_118;
            local_1c = 0x3f800000;
            local_20 = 0x3f800000;
            local_24 = 0x3f800000;
            local_28 = 0x3f800000;
            FUN_00796230(&local_28);
            FUN_007962f0(&local_94);
            FUN_00796590(&local_64);
            local_114[0] = local_5c * local_90 - local_60 * local_8c;
            local_fc[0] = local_64 * local_8c - local_94 * local_5c;
            local_118 = local_94 * local_60 - local_64 * local_90;
            fVar19 = (float10)FUN_00982c30();
            fVar5 = 1.0 / (float)fVar19;
            local_ec = fVar5 * local_114[0];
            local_e8 = (float *)(local_fc[0] * fVar5);
            local_e4 = (float *)(fVar5 * local_118);
            FUN_007965e0(&local_ec);
            if (*(char *)(*piVar3 + 8) != '\0') {
              if ((*(int *)(param_1 + 4) == 0) ||
                 ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38) <= local_128)) {
                FUN_00984d5e();
              }
              local_114[0] = *(float *)(param_1 + 4);
              if ((local_114[0] == 0.0) ||
                 ((uint)((*(int *)(param_1 + 8) - (int)local_114[0]) / 0x38) <= local_128)) {
                FUN_00984d5e();
              }
              FUN_00796540(*(undefined4 *)(*(int *)(param_1 + 4) + 0x30 + local_104),
                           *(undefined1 *)(local_104 + 0x34 + (int)local_114[0]));
            }
            psVar1 = (short *)(*piVar3 + 0x22);
            *psVar1 = *psVar1 + 1;
            local_120 = (float)((int)local_120 + 1);
            local_114[0] = (float)((int)fVar8 + 0xc);
          } while ((uint)local_120 < (uint)*(float *)(param_1 + 0x2c));
        }
        local_128 = local_128 + 1;
        uVar13 = FUN_00799ee0();
      } while (local_128 < uVar13);
    }
    local_d8 = (float *)0x0;
    local_d4 = (float *)0x0;
    local_d0 = 0;
    local_c0 = (int *)0x0;
    local_bc = (int *)0x0;
    local_b8 = 0;
    local_c._0_1_ = 3;
    local_128 = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      local_108 = 0.0;
      do {
        local_e8 = (float *)0x0;
        local_120 = 0.0;
        local_e4 = (float *)0x0;
        local_e0 = 0;
        local_c = CONCAT31(local_c._1_3_,4);
        FUN_007996f0(&local_cc,&local_ec,0,&local_108);
        local_104 = 1;
        uVar10 = FUN_00799ee0();
        if (1 < uVar10) {
          do {
            iVar11 = *(int *)(param_1 + 0x2c);
            iVar16 = *(int *)(param_1 + 0x28);
            iVar17 = local_104 - 1;
            pfVar14 = (float *)FUN_00794730(local_104 * iVar11 + iVar16 + local_128);
            pfVar15 = (float *)FUN_00794730(iVar17 * iVar11 + iVar16 + local_128);
            pfVar12 = local_e4;
            local_10c = *pfVar14;
            local_f4 = pfVar14[2];
            local_11c = *pfVar15;
            local_100 = pfVar15[2];
            local_120 = (float)(((int)((local_100 - local_f4) * (local_100 - local_f4) +
                                      (local_11c - local_10c) * (local_11c - local_10c) +
                                      (pfVar15[1] - pfVar14[1]) * (pfVar15[1] - pfVar14[1])) >> 1) +
                               0x1fc00000) + local_120;
            if ((local_e8 == (float *)0x0) ||
               ((uint)(local_e0 - (int)local_e8 >> 2) <= (uint)((int)local_e4 - (int)local_e8 >> 2))
               ) {
              if (local_e4 < local_e8) {
                FUN_00984d5e();
              }
              FUN_007996f0(local_114,&local_ec,pfVar12,&local_120);
            }
            else {
              *local_e4 = local_120;
              local_e4 = local_e4 + 1;
            }
            uVar13 = local_104 + 1;
            local_104 = uVar13;
            uVar10 = FUN_00799ee0();
          } while (uVar13 < uVar10);
        }
        FUN_0079f670(&local_ec);
        pfVar12 = local_d4;
        if ((local_d8 == (float *)0x0) ||
           ((uint)(local_d0 - (int)local_d8 >> 2) <= (uint)((int)local_d4 - (int)local_d8 >> 2))) {
          if (local_d4 < local_d8) {
            FUN_00984d5e();
          }
          FUN_007996f0(local_fc,local_dc,pfVar12,&local_120);
        }
        else {
          *local_d4 = local_120;
          local_d4 = local_d4 + 1;
        }
        local_c._0_1_ = 3;
        if (local_e8 != (float *)0x0) {
          FUN_00401f20(local_e8);
        }
        local_128 = local_128 + 1;
        local_e8 = (float *)0x0;
        local_e4 = (float *)0x0;
        local_e0 = 0;
      } while (local_128 < *(uint *)(param_1 + 0x2c));
    }
    local_128 = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      do {
        uVar13 = 1;
        uVar10 = FUN_00799ee0();
        if (1 < uVar10) {
          local_108 = (float)(local_128 << 4);
          do {
            sVar9 = *(short *)(param_1 + 0x2c) * (short)uVar13 + (short)local_128 +
                    *(short *)(param_1 + 0x28);
            *(short *)(*local_f0 + 0x22) = sVar9;
            pfVar12 = (float *)FUN_00794760(sVar9);
            local_cc = *pfVar12;
            if ((local_c0 == (int *)0x0) ||
               ((uint)((int)local_bc - (int)local_c0 >> 4) <= local_128)) {
              FUN_00984d5e();
            }
            piVar3 = (int *)((int)local_c0 + (int)local_108 + 4);
            iVar11 = *piVar3;
            if ((iVar11 == 0) ||
               ((uint)(*(int *)((int)local_c0 + (int)local_108 + 8) - iVar11 >> 2) <= uVar13)) {
              FUN_00984d5e();
            }
            iVar11 = *piVar3;
            if ((local_d8 == (float *)0x0) ||
               ((uint)((int)local_d4 - (int)local_d8 >> 2) <= local_128)) {
              FUN_00984d5e();
            }
            local_c8 = (*(float *)(iVar11 + uVar13 * 4) / local_d8[local_128]) * 0.999;
            FUN_00796320(&local_cc,*(undefined1 *)(param_1 + 0x18));
            *(short *)(*local_f0 + 0x22) = *(short *)(*local_f0 + 0x22) + 1;
            uVar13 = uVar13 + 1;
            uVar10 = FUN_00799ee0();
          } while (uVar13 < uVar10);
        }
        local_128 = local_128 + 1;
      } while (local_128 < *(uint *)(param_1 + 0x2c));
    }
    piVar3 = local_bc;
    if (local_c0 != (int *)0x0) {
      if (local_c0 != local_bc) {
        piVar18 = local_c0 + 1;
        do {
          if (*piVar18 != 0) {
            FUN_00401f20(*piVar18);
          }
          *piVar18 = 0;
          piVar18[1] = 0;
          piVar18[2] = 0;
          piVar2 = piVar18 + 3;
          piVar18 = piVar18 + 4;
        } while (piVar2 != piVar3);
      }
      FUN_00401f20(local_c0);
    }
    local_c0 = (int *)0x0;
    local_bc = (int *)0x0;
    local_b8 = 0;
    if (local_d8 != (float *)0x0) {
      FUN_00401f20(local_d8);
    }
    local_d8 = (float *)0x0;
    local_d4 = (float *)0x0;
    local_d0 = 0;
    if (local_a0 != 0) {
      FUN_00401f20(local_a0);
    }
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0;
    if (local_b0 != 0) {
      FUN_00401f20(local_b0);
    }
  }
  *unaff_FS_OFFSET = local_14;
  return;
}


