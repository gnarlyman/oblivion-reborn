
void FUN_00940a30(float *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if ((DAT_00ba9429 == '\0') && (DAT_00ba9429 = FUN_009246e0(4), DAT_00ba9429 == '\0')) {
    return;
  }
  *(float **)(in_ECX + 0x2c) = param_1;
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(*(int *)param_1[0xe] + 0x10);
  *(undefined4 *)(in_ECX + 0x24) = param_2;
  *(undefined4 *)(in_ECX + 0x28) = param_3;
  uVar2 = (**(code **)(**(int **)param_1[0xd] + 8))();
  *(undefined4 *)(in_ECX + 0x18) = uVar2;
  *(undefined4 *)(in_ECX + 0x1c) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x20) = 0x3f800000;
  iVar1 = *(int *)(in_ECX + 0x10);
  uVar2 = *(undefined4 *)(iVar1 + 0x20);
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  *(float *)(in_ECX + 0x14) = 1.0 / *(float *)(iVar1 + 0x1c);
  fStack_28 = *(float *)(iVar1 + 0x1c) * 1.5258789e-05;
  fStack_40 = fStack_28 * param_1[8];
  fStack_3c = fStack_28 * param_1[9];
  fStack_38 = fStack_28 * param_1[10];
  fStack_34 = fStack_28 * param_1[0xb];
  fStack_30 = (param_1[10] + param_1[9] + param_1[8]) * 3.0;
  fStack_70 = fStack_28 * (*param_1 - *(float *)(iVar1 + 0x10));
  fStack_6c = fStack_28 * (param_1[1] - *(float *)(iVar1 + 0x14));
  fStack_68 = fStack_28 * (param_1[2] - *(float *)(iVar1 + 0x18));
  fStack_64 = fStack_28 * (param_1[3] - *(float *)(iVar1 + 0x1c));
  fStack_60 = fStack_28 * (param_1[4] - *(float *)(iVar1 + 0x10));
  fStack_5c = fStack_28 * (param_1[5] - *(float *)(iVar1 + 0x14));
  fStack_58 = fStack_28 * (param_1[6] - *(float *)(iVar1 + 0x18));
  fStack_54 = fStack_28 * (param_1[7] - *(float *)(iVar1 + 0x1c));
  uStack_24 = 0;
  uStack_2c = 0;
  uStack_20 = 0;
  FUN_0093fb80(&uStack_50,uVar2,&fStack_70);
  return;
}



int FUN_00940b70(void)

{
  int in_ECX;
  
  return (int)*(short *)(in_ECX + 0xe);
}



int FUN_00940b80(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = -1;
  switch((uint)*(byte *)(in_ECX + 0xc)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    iVar1 = (int)*(short *)(in_ECX + 0xe);
    if (*(short *)(in_ECX + 0xe) == 0) {
      iVar1 = 1;
    }
    return *(short *)(&DAT_00aa1ed0 + (uint)*(byte *)(in_ECX + 0xc) * 0xc) * iVar1;
  case 0x13:
    return (int)*(short *)(&DAT_00aa1ed0 + (uint)*(byte *)(in_ECX + 0xd) * 0xc);
  case 0x18:
    iVar1 = (int)*(short *)(in_ECX + 0xe);
    if (*(short *)(in_ECX + 0xe) == 0) {
      iVar1 = 1;
    }
    iVar1 = (uint)*(ushort *)(in_ECX + 0x10) * iVar1;
    return (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
  case 0x19:
    iVar2 = (int)*(short *)(in_ECX + 0xe);
    if (*(short *)(in_ECX + 0xe) == 0) {
      iVar2 = 1;
    }
    iVar1 = FUN_00953130();
    iVar1 = iVar1 * iVar2;
  }
  return iVar1;
}



uint FUN_00940c50(void)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  
  bVar1 = *(byte *)(in_ECX + 0xc);
  if (bVar1 == 0x18) {
    return (uint)(*(ushort *)(in_ECX + 0x10) >> 3);
  }
  if (bVar1 == 0x13) {
    return (int)*(short *)(&DAT_00aa1ed2 + (uint)*(byte *)(in_ECX + 0xd) * 0xc);
  }
  if (bVar1 == 0x19) {
    uVar3 = 1;
    iVar4 = 0;
    iVar2 = FUN_0090d240();
    if (0 < iVar2) {
      do {
        FUN_0090d260(iVar4);
        iVar2 = FUN_00940c50();
        if ((int)uVar3 < iVar2) {
          FUN_0090d260(iVar4);
          uVar3 = FUN_00940c50();
        }
        iVar4 = iVar4 + 1;
        iVar2 = FUN_0090d240();
      } while (iVar4 < iVar2);
    }
    return uVar3;
  }
  return (int)*(short *)(&DAT_00aa1ed2 + (uint)bVar1 * 0xc);
}



undefined1 FUN_00940ce0(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 0xd);
}



int FUN_00940cf0(void)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  
  bVar1 = *(byte *)(in_ECX + 0xd);
  if (bVar1 == 0x18) {
    return -1;
  }
  if (bVar1 != 0x19) {
    return (int)*(short *)(&DAT_00aa1ed0 + (uint)bVar1 * 0xc);
  }
  iVar2 = FUN_00953130();
  return iVar2;
}



int FUN_00940d20(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00940b80();
  if (iVar1 == 1) {
    return (int)(char)*param_1;
  }
  if (iVar1 != 2) {
    if (iVar1 == 4) {
      return *param_1;
    }
    return 0;
  }
  return (int)(short)*param_1;
}



void FUN_00940d90(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00aa21ec;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0x80000000;
  FUN_008b0e10();
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0x80000000;
  FUN_00942b70();
  FUN_00942b70();
  in_ECX[0x11] = 0xffffffff;
  in_ECX[0x12] = 0xffffffff;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  FUN_008b0e10();
  FUN_008b0e10();
  FUN_008b0e80(&DAT_00ba8764,0xffffffff);
  FUN_008b0e80(&DAT_00ba871c,0xffffffff);
  FUN_008b0e80(&DAT_00ba8788,0xffffffff);
  return;
}



void FUN_00940e30(void)

{
  undefined4 *in_ECX;
  int iVar1;
  
  iVar1 = 0;
  *in_ECX = &PTR_FUN_00aa21ec;
  if (0 < (int)in_ECX[9]) {
    do {
      (**(code **)(*DAT_00ba7d98 + 4))(*(undefined4 *)(in_ECX[8] + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)in_ECX[9]);
  }
  FUN_008b0e60();
  FUN_008b0e60();
  FUN_00942bb0();
  FUN_00942bb0();
  if (-1 < (int)in_ECX[10]) {
    FUN_008a75d0(in_ECX[8],in_ECX[10] << 2,0x14);
  }
  FUN_008b0e60();
  if (-1 < (int)in_ECX[4]) {
    FUN_008a75d0(in_ECX[2],(in_ECX[4] & 0x3fffffff) * 0x18,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



undefined4 FUN_00940ef0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar2 = param_1;
  iVar1 = FUN_00942b00(param_1,&param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_008b18f0(uVar2);
    param_1 = *(undefined4 *)(in_ECX + 0x24);
    FUN_009429d0(uVar2,param_1);
    if (*(uint *)(in_ECX + 0x24) == (*(uint *)(in_ECX + 0x28) & 0x3fffffff)) {
      FUN_008a6ee0((int *)(in_ECX + 0x20),4);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x20) + *(int *)(in_ECX + 0x24) * 4) = uVar2;
    *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + 1;
  }
  return param_1;
}



void FUN_00940f60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_008b1550(param_1,0xffffffff);
  if ((iVar1 == -1) && (iVar1 = FUN_008b1550(param_2,0xffffffff), iVar1 == -1)) {
    while (iVar1 = FUN_0090d1f0(), iVar1 != 0) {
      iVar1 = FUN_008b1550(iVar1,0xffffffff);
      if (iVar1 != -1) {
        return;
      }
    }
    uVar2 = FUN_0090d1e0();
    uVar2 = FUN_0090d1e0(uVar2);
    iVar1 = FUN_008b1770(uVar2);
    if (iVar1 == 0) {
      FUN_00940ef0(PTR_s___types___00b30594);
    }
    uVar2 = FUN_0090d1e0();
    uVar2 = FUN_0090d1e0(uVar2);
    iVar1 = FUN_008b1770(uVar2);
    if (iVar1 == 0) {
      FUN_00940ef0(PTR_s___types___00b30594);
    }
    uVar2 = FUN_0090d1e0();
    uVar2 = FUN_0090d1e0(uVar2);
    iVar1 = FUN_008b1770(uVar2);
    if (iVar1 == 0) {
      FUN_00940ef0(PTR_s___types___00b30594);
      return;
    }
    FUN_00940ef0(param_3);
  }
  return;
}



void FUN_00941070(int param_1,undefined *param_2,int *param_3,undefined4 param_4,undefined *param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar4 = param_1;
  uVar1 = FUN_008b0f00(param_1);
  FUN_008b0d80(&param_1,uVar1);
  puVar5 = param_5;
  puVar3 = param_2;
  if ((char)param_1 == '\0') {
    while (pcVar2 = (char *)FUN_0090d380(&param_5), *pcVar2 == '\0') {
LAB_009410d1:
      if (puVar3 == (undefined *)0x0) goto LAB_00941121;
      iVar4 = FUN_009411e0(iVar4,puVar3,param_3,param_4,puVar5);
      puVar5 = PTR_s___types___00b30594;
      if (iVar4 == 0) {
        return;
      }
      uVar1 = FUN_008b0f00(iVar4);
      FUN_008b0d80(&param_1,uVar1);
      puVar3 = &DAT_00ba8788;
      if ((char)param_1 != '\0') {
        return;
      }
    }
    if (param_3 != (int *)0x0) {
      puVar3 = (undefined *)(**(code **)(*param_3 + 0xc))(iVar4);
      goto LAB_009410d1;
    }
LAB_00941121:
    FUN_008b0e80(iVar4,0xffffffff);
  }
  return;
}



undefined4 thunk_FUN_00940ef0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar2 = param_1;
  iVar1 = FUN_00942b00(param_1,&param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_008b18f0(uVar2);
    param_1 = *(undefined4 *)(in_ECX + 0x24);
    FUN_009429d0(uVar2,param_1);
    if (*(uint *)(in_ECX + 0x24) == (*(uint *)(in_ECX + 0x28) & 0x3fffffff)) {
      FUN_008a6ee0((int *)(in_ECX + 0x20),4);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x20) + *(int *)(in_ECX + 0x24) * 4) = uVar2;
    *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + 1;
  }
  return param_1;
}



undefined *
FUN_009411e0(undefined *param_1,undefined *param_2,undefined4 param_3,int *param_4,
            undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_60;
  undefined **appuStack_5c [4];
  int local_4c;
  undefined *local_48;
  int iStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar3 = param_2;
  iVar5 = (int)param_1;
  local_60 = (int)param_1;
  param_1 = param_2;
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 4))(&local_60,&param_1);
  }
  if (local_60 == 0) {
    FUN_008b0e80(iVar5,0xffffffff);
    return param_1;
  }
  local_48 = param_1;
  local_4c = local_60;
  iStack_3c = FUN_00940f60(iVar5,puVar3,param_5);
  FUN_008b0e80(iVar5,*(undefined4 *)(in_ECX + 0xc));
  if (*(uint *)(in_ECX + 0xc) == (*(uint *)(in_ECX + 0x10) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 8),0x18);
  }
  piVar1 = (int *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 0xc) * 0x18);
  *piVar1 = local_4c;
  piVar1[1] = (int)local_48;
  piVar1[2] = iVar5;
  piVar1[3] = (int)param_2;
  piVar1[4] = iStack_3c;
  piVar1[5] = -1;
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
  *(uint *)(in_ECX + 0x50) = *(int *)(in_ECX + 0x50) + (uint)(param_1 == &DAT_00ba8788);
  *(uint *)(in_ECX + 0x4c) = *(int *)(in_ECX + 0x4c) + (uint)(param_1 != &DAT_00ba8788);
  FUN_0090bb90();
  FUN_00942d70(&param_2);
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x80000000;
  iStack_28 = 0;
  iStack_24 = 0;
  uStack_20 = 0x80000000;
  iStack_1c = 0;
  iStack_18 = 0;
  uStack_14 = 0x80000000;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0x80000000;
  uStack_4 = 0;
  FUN_00953140();
  FUN_00942d10(appuStack_5c,local_60,param_1,&uStack_34);
  iVar5 = 0;
  if (0 < iStack_24) {
    iVar6 = 0;
    iVar4 = iStack_28;
    do {
      iVar2 = *(int *)(iVar6 + 8 + iVar4);
      if (iVar2 != 0) {
        FUN_00941070(*(undefined4 *)(iVar6 + 4 + iVar4),iVar2,param_3,param_4,param_5);
        iVar4 = iStack_28;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar5 < iStack_24);
  }
  iVar5 = 0;
  if (0 < iStack_18) {
    do {
      FUN_009429d0(*(undefined4 *)(iStack_1c + 4 + iVar5 * 8),0xffffffff);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iStack_18);
  }
  appuStack_5c[0] = &PTR_LAB_00a45e5c;
  FUN_00941400();
  FUN_00942e10();
  return param_1;
}



void FUN_00941400(void)

{
  undefined4 *in_ECX;
  
  if ((undefined4 *)in_ECX[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xc])(1);
  }
  if (-1 < (int)in_ECX[0xb]) {
    FUN_008a75d0(in_ECX[9],in_ECX[0xb] << 3,0x14);
  }
  if (-1 < (int)in_ECX[8]) {
    FUN_008a75d0(in_ECX[6],in_ECX[8] << 3,0x14);
  }
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],(in_ECX[5] & 0x3fffffff) * 0xc,0x14);
  }
  if (-1 < (int)in_ECX[2]) {
    FUN_008a75d0(*in_ECX,in_ECX[2] << 3,0x14);
  }
  return;
}



undefined4 FUN_009414c0(undefined4 param_1,int param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_40 [60];
  int *local_4;
  
  local_40[0] = 0x41;
  local_40[1] = 0x42;
  local_40[2] = 0x43;
  local_40[3] = 0x44;
  local_40[4] = 0x45;
  local_40[5] = 0x46;
  local_40[6] = 0x47;
  local_40[7] = 0x48;
  local_40[8] = 0x49;
  local_40[9] = 0x4a;
  local_40[10] = 0x4b;
  local_40[0xb] = 0x4c;
  local_40[0xc] = 0x4d;
  local_40[0xd] = 0x4e;
  local_40[0xe] = 0x4f;
  local_40[0xf] = 0x50;
  local_40[0x10] = 0x51;
  local_40[0x11] = 0x52;
  local_40[0x12] = 0x53;
  local_40[0x13] = 0x54;
  local_40[0x14] = 0x55;
  local_40[0x15] = 0x56;
  local_40[0x16] = 0x57;
  local_40[0x17] = 0x58;
  local_40[0x18] = 0x59;
  local_40[0x19] = 0x5a;
  local_40[0x1a] = 0x61;
  local_40[0x1b] = 0x62;
  local_40[0x1c] = 99;
  local_40[0x1d] = 100;
  local_40[0x1e] = 0x65;
  local_40[0x1f] = 0x66;
  local_40[0x20] = 0x67;
  local_40[0x21] = 0x68;
  local_40[0x22] = 0x69;
  local_40[0x23] = 0x6a;
  local_40[0x24] = 0x6b;
  local_40[0x25] = 0x6c;
  local_40[0x26] = 0x6d;
  local_40[0x27] = 0x6e;
  local_40[0x28] = 0x6f;
  local_40[0x29] = 0x70;
  local_40[0x2a] = 0x71;
  local_40[0x2b] = 0x72;
  local_40[0x2c] = 0x73;
  local_40[0x2d] = 0x74;
  local_40[0x2e] = 0x75;
  local_40[0x2f] = 0x76;
  local_40[0x30] = 0x77;
  local_40[0x31] = 0x78;
  local_40[0x32] = 0x79;
  local_40[0x33] = 0x7a;
  local_40[0x34] = 0x30;
  local_40[0x35] = 0x31;
  local_40[0x36] = 0x32;
  local_40[0x37] = 0x33;
  local_40[0x38] = 0x34;
  local_40[0x39] = 0x35;
  local_40[0x3a] = 0x36;
  local_40[0x3b] = 0x37;
  local_4 = (int *)0x2f2b3938;
  FUN_009183a0(param_1,0);
  iVar2 = 0x13;
  uVar4 = param_3;
  if (0 < (int)param_3) {
    while( true ) {
      param_3 = param_3 & 0xff000000;
      uVar3 = 3;
      if ((int)uVar4 < 3) {
        uVar3 = uVar4;
      }
      FUN_008b1890(&param_3,param_2,uVar3);
      local_54 = local_40[param_3 >> 2 & 0x3f];
      local_53 = local_40[(uint)(param_3._1_1_ >> 4) | (param_3 & 3) << 4];
      local_52 = local_40[(uint)(param_3._2_1_ >> 6) | (param_3._1_1_ & 0xf) << 2];
      local_51 = local_40[param_3._2_1_ & 0x3f];
      param_2 = param_2 + uVar3;
      uVar4 = uVar4 - uVar3;
      if ((int)uVar3 < 3) break;
      FUN_00918390(&local_54,4);
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        FUN_00918390(&DAT_00a366d0,1);
        iVar2 = 0x13;
      }
      pcVar1 = (char *)(**(code **)(*local_4 + 8))(&stack0x00000000);
      if (*pcVar1 == '\0') {
        FUN_00918180();
        return 1;
      }
      if ((int)uVar4 < 1) {
        FUN_00918180();
        return 0;
      }
    }
    if (uVar3 == 1) {
      local_52 = 0x3d;
    }
    else if (uVar3 != 2) goto LAB_0094174b;
    local_51 = 0x3d;
    FUN_00918390(&local_54,4);
  }
LAB_0094174b:
  FUN_00918180();
  return 0;
}



void FUN_00941760(void)

{
  int iVar1;
  undefined4 in_EAX;
  int iVar2;
  int *in_ECX;
  int *unaff_ESI;
  
  switch(in_EAX) {
  case 1:
    FUN_008bbdb0();
    return;
  case 2:
    FUN_008bbee0();
    return;
  case 3:
    FUN_008bbee0();
    return;
  case 4:
    FUN_008bbee0();
    return;
  case 5:
    FUN_008bbee0();
    return;
  case 6:
    FUN_008bbee0();
    return;
  case 7:
    FUN_008bbee0();
    return;
  case 8:
    FUN_008bbee0();
    return;
  case 9:
    FUN_008bbee0();
    return;
  case 10:
    FUN_008bbee0();
    return;
  case 0xb:
    FUN_008bbee0();
    return;
  case 0xc:
  case 0xd:
    goto LAB_00941893;
  case 0xe:
  case 0xf:
    FUN_008bbee0();
    FUN_008bbee0();
    break;
  case 0x10:
    FUN_008bbee0();
    FUN_008bbee0();
    break;
  case 0x11:
    FUN_008bbee0();
    FUN_008bbee0();
    FUN_008bbee0();
LAB_00941893:
    FUN_008bbee0();
    return;
  case 0x12:
    FUN_008bbee0();
    FUN_008bbee0();
    FUN_008bbee0();
    break;
  default:
    return;
  case 0x14:
    iVar1 = *unaff_ESI;
    (**(code **)(*in_ECX + 0x10))();
    FUN_008bbee0();
    iVar2 = *(int *)(iVar1 + -4) + -1;
    *(int *)(iVar1 + -4) = iVar2;
    if (-1 < iVar2) {
      return;
    }
    FUN_008b1930();
    return;
  }
  FUN_008bbee0();
  return;
}



undefined4 FUN_00941b00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_c [12];
  
  FUN_008bbf50(param_1);
  FUN_008bbee0(local_c,"\n%s<hkrawdata size=\"%i\"><![CDATA[\n",*(undefined4 *)(in_ECX + 8),param_3)
  ;
  uVar1 = FUN_009414c0(param_1,param_2,param_3);
  FUN_008bbee0(local_c,"\n]]></hkrawdata>");
  FUN_008bc000();
  return uVar1;
}



void FUN_00941b70(undefined4 param_1)

{
  FUN_008b0e80(param_1,0);
  return;
}



void FUN_00941b90(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *unaff_EDI;
  
  iVar2 = unaff_EDI[1];
  iVar1 = in_ECX + 1 + iVar2;
  if (iVar2 < iVar1) {
    if ((int)(unaff_EDI[2] & 0x3fffffffU) < iVar1) {
      FUN_008a6e40();
    }
    for (; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      *(undefined1 *)(iVar2 + *unaff_EDI) = 9;
    }
  }
  unaff_EDI[1] = iVar1;
  *(undefined1 *)(*unaff_EDI + -1 + iVar1) = 0;
  unaff_EDI[1] = unaff_EDI[1] + -1;
  return;
}



void FUN_00941bf0(undefined4 param_1,int param_2,int param_3)

{
  int in_ECX;
  undefined1 local_c [12];
  
  FUN_008bbf50(param_1);
  FUN_008bbee0(local_c,"\n%s<hkobject",*(undefined4 *)(in_ECX + 8));
  if (param_3 != 0) {
    FUN_008bbee0(local_c," class=\"%s\"",param_3);
  }
  if (param_2 != 0) {
    FUN_008bbee0(local_c," name=\"%s\"",param_2);
  }
  FUN_008bbee0(local_c,&DAT_00a67e7c);
  FUN_00941b90();
  FUN_008bc000();
  return;
}



void FUN_00941c90(undefined4 param_1)

{
  int in_ECX;
  undefined1 local_c [12];
  
  FUN_00941b90();
  FUN_008bbf50(param_1);
  FUN_008bbee0(local_c,"\n%s</hkobject>",*(undefined4 *)(in_ECX + 8));
  FUN_008bc000();
  return;
}



/* WARNING: Removing unreachable block (ram,0x00941d52) */
/* WARNING: Removing unreachable block (ram,0x00941d5e) */
/* WARNING: Removing unreachable block (ram,0x00941d64) */
/* WARNING: Removing unreachable block (ram,0x00941d66) */
/* WARNING: Removing unreachable block (ram,0x00941d72) */
/* WARNING: Removing unreachable block (ram,0x00941d78) */

undefined4 FUN_00941ce0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  FUN_008bbee0(param_2,"\n%s<hkobject>",*in_ECX);
  FUN_00941b90();
  iVar2 = 0;
  iVar1 = FUN_0090d240();
  if (0 < iVar1) {
    do {
      FUN_0090d260(iVar2);
      FUN_00942170();
      iVar2 = iVar2 + 1;
      iVar1 = FUN_0090d240();
    } while (iVar2 < iVar1);
  }
  iVar1 = in_ECX[1];
  in_ECX[1] = iVar1;
  *(undefined1 *)(*in_ECX + -1 + iVar1) = 0;
  in_ECX[1] = in_ECX[1] + -1;
  FUN_008bbee0(param_2,"\n%s</hkobject>",*in_ECX);
  return 0;
}



void FUN_00941db0(void)

{
  FUN_00941b90();
  return;
}



undefined4 * FUN_00941dd0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined *local_4;
  
  DAT_00ba7fc0 = DAT_00ba7fc0 + 1;
  local_4 = &DAT_00ba7fc4;
  if (param_2 != 0) {
    iVar2 = FUN_008b1550(param_2,0xffffffff);
    if (iVar2 == -1) {
      iVar2 = *(int *)(in_ECX + 0x28) + 1;
      FUN_008b0e80(param_2,iVar2);
    }
    if (iVar2 != 0) {
      FUN_008b1990(&local_4,"#%04i",iVar2);
      goto LAB_00941e80;
    }
  }
  iVar2 = FUN_008b1860(&DAT_00aa22a8);
  if ((*(int *)(local_4 + -8) < iVar2) || (0 < *(int *)(local_4 + -4))) {
    piVar1 = (int *)(local_4 + -4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      FUN_008b1930();
    }
    iVar3 = FUN_008b1950(iVar2);
    local_4 = (undefined *)(iVar3 + 0xc);
  }
  FUN_008b1890(local_4,&DAT_00aa22a8,iVar2 + 1);
  *(int *)(local_4 + -0xc) = iVar2;
LAB_00941e80:
  *(int *)(local_4 + -4) = *(int *)(local_4 + -4) + 1;
  *param_1 = local_4;
  piVar1 = (int *)(local_4 + -4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    FUN_008b1930();
  }
  return param_1;
}



void FUN_00941ec0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  piVar1 = in_ECX + 2;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00aa22b8;
  *piVar1 = (int)(in_ECX + 5);
  in_ECX[3] = 0;
  in_ECX[4] = 0x80000010;
  FUN_008b0e10();
  if (in_ECX[3] == (in_ECX[4] & 0x3fffffff)) {
    FUN_008a6ee0(piVar1,1);
  }
  *(undefined1 *)(in_ECX[3] + *piVar1) = 0;
  iVar2 = in_ECX[3];
  in_ECX[3] = iVar2 + 1;
  in_ECX[3] = iVar2;
  return;
}



void FUN_00941f30(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  undefined4 *puVar3;
  int iVar4;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_c = FUN_00940cf0();
  puVar3 = (undefined4 *)*unaff_EBX;
  local_4 = FUN_00940ce0();
  if (unaff_EBX[1] != 0) {
    FUN_00941b90();
    switch(local_4) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
      if ((local_4 < 0xc) || (local_8 = 1, 0x12 < local_4)) {
        local_8 = 0x10;
      }
      local_10 = 0;
      if (0 < (int)unaff_EBX[1]) {
        do {
          if (local_10 % local_8 == 0) {
            FUN_008bbee0(param_3,&PTR_LAB_00aa22f0,*param_1);
          }
          else {
            FUN_008bbd90(0x20);
          }
          FUN_00941760();
          local_10 = local_10 + 1;
        } while (local_10 < (int)unaff_EBX[1]);
      }
      break;
    case 0x13:
      FUN_008bbee0(param_3,"<!-- zero array %s -->",*param_2);
      break;
    case 0x19:
      iVar4 = 0;
      if (0 < (int)unaff_EBX[1]) {
        do {
          FUN_0090d1f0(puVar3,param_3,param_4);
          FUN_00941ce0();
          puVar3 = (undefined4 *)((int)puVar3 + local_c);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)unaff_EBX[1]);
      }
      break;
    case 0x1c:
      iVar4 = 0;
      if (0 < (int)unaff_EBX[1]) {
        do {
          (**(code **)(*param_4 + 0x10))(&local_8,*puVar3);
          (**(code **)(*param_4 + 0x10))(&local_c,puVar3[1]);
          iVar4 = iVar4 + 1;
          puVar1 = &DAT_00a36430;
          if ((int)unaff_EBX[1] <= iVar4) {
            puVar1 = (undefined2 *)&DAT_00a2f7ec;
          }
          FUN_008bbee0(param_3,"(%s %s%s)",local_8,local_4,puVar1);
          puVar3 = (undefined4 *)((int)puVar3 + local_c);
          iVar2 = *(int *)(local_4 + -4) + -1;
          *(int *)(local_4 + -4) = iVar2;
          if (iVar2 < 0) {
            FUN_008b1930();
          }
          iVar2 = *(int *)(local_8 + -4) + -1;
          *(int *)(local_8 + -4) = iVar2;
          if (iVar2 < 0) {
            FUN_008b1930();
          }
        } while (iVar4 < (int)unaff_EBX[1]);
      }
    }
    FUN_00941b90();
    FUN_008bbee0(param_3,&PTR_LAB_00aa22f0,*param_1);
  }
  return;
}



void FUN_00942170(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  int *piVar14;
  uint local_224;
  int *local_220;
  uint local_21c;
  char *local_218 [5];
  undefined4 uStack_204;
  undefined1 local_200 [512];
  
  piVar10 = (int *)((uint)*(ushort *)((int)param_2 + 0x12) + param_3);
  local_220 = piVar10;
  if (((*(char *)(param_2 + 3) == '\x14') && (*(char *)((int)param_2 + 0xd) == '\x02')) &&
     (*piVar10 == 0)) {
    FUN_008bbee0(param_4,"\n%s<!-- <hkparam name=\"%s\">(null)</hkparam> -->",*param_1,*param_2);
    return;
  }
  FUN_008bbee0(param_4,"\n%s<hkparam name=\"%s\"",*param_1,*param_2);
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0x16:
  case 0x17:
  case 0x1a:
    iVar13 = piVar10[1];
    break;
  default:
    goto switchD_009421ff_caseD_18;
  case 0x1b:
    iVar13 = piVar10[2];
  }
  FUN_008bbee0(param_4," numelements=\"%i\"",iVar13);
switchD_009421ff_caseD_18:
  FUN_008bbee0(param_4,&DAT_00a67e7c);
  switch(*(undefined1 *)(param_2 + 3)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    local_224 = FUN_00940b70();
    if (local_224 == 0) {
      local_224 = 1;
    }
    iVar13 = FUN_00940b80();
    local_220 = (int *)(iVar13 / (int)local_224);
    local_21c = 0;
    if (0 < (int)local_224) {
      do {
        uVar5 = local_21c;
        if (*(char *)(param_2 + 3) == '\x02') {
          FUN_008bbee0(param_4,&DAT_00a56250,(int)(char)*piVar10);
          local_21c = uVar5;
        }
        else {
          if (local_21c != 0) {
            puVar8 = (undefined2 *)&DAT_00a366d0;
            if (local_21c % 0x32 != 0) {
              puVar8 = &DAT_00a36430;
            }
            FUN_008bbee0(param_4,puVar8);
          }
          FUN_00941760();
        }
        piVar10 = (int *)((int)piVar10 + (int)local_220);
        local_21c = local_21c + 1;
      } while ((int)local_21c < (int)local_224);
    }
    break;
  case 0x13:
    FUN_008bbee0(param_4,"<!-- zero %s -->",*param_2);
    break;
  case 0x14:
    iVar13 = FUN_00940b70();
    if (iVar13 == 0) {
      iVar13 = 1;
    }
    iVar9 = 0;
    if (*(char *)((int)param_2 + 0xd) == '\x02') {
      local_21c = 0;
      if (0 < iVar13) {
        do {
          uVar5 = local_21c;
          pcVar11 = (char *)piVar10[local_21c];
          if (pcVar11 == (char *)0x0) {
            FUN_008bbdb0(&DAT_00aa23a4);
          }
          else {
            cVar1 = *pcVar11;
            pcVar12 = pcVar11;
            while (local_21c = uVar5, cVar1 != '\0') {
              switch(*pcVar11) {
              case '\"':
              case '&':
              case '\'':
              case '<':
              case '>':
                FUN_00918390(pcVar12,(int)pcVar11 - (int)pcVar12);
                pcVar2 = "<&lt;";
                pcVar12 = pcVar11 + 1;
                local_218[0] = "<&lt;";
                local_218[1] = ">&gt;";
                local_218[2] = "&&amp;";
                local_218[3] = "\"&quot;";
                local_218[4] = "\'&apos;";
                uStack_204 = 0;
                iVar9 = 0;
                do {
                  if (*pcVar2 == *pcVar11) {
                    pcVar2 = local_218[iVar9];
                    uVar6 = FUN_008b1860(pcVar2 + 1);
                    FUN_00918390(pcVar2 + 1,uVar6);
                    break;
                  }
                  pcVar2 = local_218[iVar9 + 1];
                  iVar9 = iVar9 + 1;
                } while (pcVar2 != (char *)0x0);
              }
              pcVar2 = pcVar11 + 1;
              pcVar11 = pcVar11 + 1;
              uVar5 = local_21c;
              cVar1 = *pcVar2;
            }
            FUN_00918390(pcVar12,(int)pcVar11 - (int)pcVar12);
          }
          local_21c = uVar5 + 1;
          piVar10 = local_220;
        } while ((int)local_21c < iVar13);
      }
    }
    else if (0 < iVar13) {
      do {
        if (piVar10[iVar9] == 0) {
          FUN_008bbdb0(&DAT_00aa22a8);
        }
        else {
          (**(code **)(*param_5 + 0x10))(&local_21c,piVar10[iVar9]);
          puVar8 = &DAT_00a36430;
          if (iVar13 + -1 <= iVar9) {
            puVar8 = (undefined2 *)&DAT_00a2f7ec;
          }
          FUN_008bbee0(param_4,&DAT_00a2f884,local_21c,puVar8);
          iVar3 = *(int *)(local_21c - 4) + -1;
          *(int *)(local_21c - 4) = iVar3;
          if (iVar3 < 0) {
            FUN_008b1930();
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar13);
    }
    break;
  case 0x15:
    uVar4 = FUN_00940b70();
    uVar5 = uVar4;
    if (uVar4 == 0) {
      uVar5 = 1;
    }
    if (uVar4 < 0x80000000) {
      do {
        FUN_008bbdb0("&null;");
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    break;
  case 0x16:
  case 0x17:
  case 0x1a:
    FUN_00941f30(param_1,param_2,param_4,param_5);
    break;
  case 0x18:
    FUN_00953130();
    uVar6 = FUN_00940d20(piVar10);
    local_220 = (int *)0x0;
    iVar13 = FUN_00953160(uVar6,&local_220);
    if (iVar13 == 0) {
      FUN_008bbee0(param_4,local_220);
    }
    else {
      FUN_008bbee0(param_4,"INVALID_VALUE_%i",uVar6);
    }
    break;
  case 0x19:
    FUN_00941b90();
    local_220 = (int *)FUN_0090d1f0();
    local_224 = FUN_00940b70();
    if (local_224 == 0) {
      local_224 = 1;
    }
    iVar13 = FUN_00953130();
    if (0 < (int)local_224) {
      local_21c = local_224;
      do {
        FUN_00941ce0(piVar10,param_4,param_5);
        piVar10 = (int *)((int)piVar10 + iVar13);
        local_21c = local_21c - 1;
      } while (local_21c != 0);
    }
    FUN_00941b90();
    uVar6 = *param_1;
    FUN_008bbd90(10);
    FUN_008bbdb0(uVar6);
    break;
  case 0x1b:
    iVar13 = *piVar10;
    FUN_00941b90();
    FUN_008bbee0(param_4,"\n%s<!-- Homogeneous Class -->",*param_1);
    local_220 = *(int **)(param_4 + 8);
    uVar6 = FUN_0090d1e0();
    uVar7 = FUN_0090d1e0(uVar6);
    FUN_00941bf0(local_220,uVar7,uVar6);
    local_224 = 0;
    iVar9 = FUN_0090d240();
    if (0 < iVar9) {
      do {
        iVar9 = iVar13;
        iVar3 = param_4;
        piVar14 = param_5;
        uVar6 = FUN_0090d260(local_224);
        FUN_00942170(param_1,uVar6,iVar9,iVar3,piVar14);
        local_224 = local_224 + 1;
        iVar9 = FUN_0090d240();
      } while ((int)local_224 < iVar9);
    }
    FUN_00941c90(*(undefined4 *)(param_4 + 8));
    FUN_008bbee0(param_4,"\n%s<!-- Homogeneous Data -->",*param_1);
    local_21c = FUN_00953130();
    local_224 = piVar10[1];
    local_220 = (int *)0x0;
    if (0 < piVar10[2]) {
      do {
        FUN_00941ce0(local_224,param_4,param_5);
        local_224 = local_224 + local_21c;
        local_220 = (int *)((int)local_220 + 1);
      } while ((int)local_220 < piVar10[2]);
    }
    FUN_00941b90();
    break;
  case 0x1c:
    local_224 = FUN_00940b70();
    if (local_224 == 0) {
      local_224 = 1;
    }
    iVar13 = 0;
    if (0 < (int)local_224) {
      do {
        if ((piVar10[iVar13 * 2] != 0) && (piVar10[iVar13 * 2 + 1] != 0)) {
          (**(code **)(*param_5 + 0x10))(&local_21c,piVar10[iVar13 * 2]);
          (**(code **)(*param_5 + 0x10))(&stack0xfffffdd8,piVar10[iVar13 * 2 + 1]);
          puVar8 = &DAT_00a36430;
          if ((int)local_224 <= iVar13 + 1) {
            puVar8 = (undefined2 *)&DAT_00a2f7ec;
          }
          FUN_008bbee0(param_4,"(%s %s%s)",local_21c,local_220,puVar8);
          iVar9 = local_220[-1];
          local_220[-1] = iVar9 + -1;
          if (iVar9 + -1 < 0) {
            FUN_008b1930();
          }
          iVar9 = *(int *)(local_21c - 4) + -1;
          *(int *)(local_21c - 4) = iVar9;
          if (iVar9 < 0) {
            FUN_008b1930();
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)local_224);
    }
    break;
  default:
    FUN_008bbfb0(local_200,0x200,1);
    FUN_008bbdb0("Unhandled member type found!");
    (**(code **)(*DAT_00ba7fb0 + 8))
              (3,0x40a18b57,local_200,".\\serialize\\xml\\hkXmlObjectWriter.cpp",0x298);
    FUN_008bc000();
  }
  FUN_008bbee0(param_4,"</hkparam>");
  return;
}



bool FUN_009428a0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int in_ECX;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 local_c [12];
  
  FUN_008bbf50(param_1);
  iVar5 = 0;
  iVar2 = FUN_0090d240();
  if (0 < iVar2) {
    do {
      puVar7 = local_c;
      uVar6 = param_2;
      uVar3 = FUN_0090d260(iVar5);
      FUN_00942170(in_ECX + 8,uVar3,uVar6,puVar7);
      iVar5 = iVar5 + 1;
      iVar2 = FUN_0090d240();
    } while (iVar5 < iVar2);
  }
  pcVar4 = (char *)FUN_00918060(&param_1);
  cVar1 = *pcVar4;
  FUN_008bc000();
  return cVar1 == '\0';
}



void FUN_00942930(byte param_1)

{
  FUN_0090d480();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00942960(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (-1 < (int)in_ECX[2]) {
    piVar2 = (int *)*in_ECX;
    do {
      if (*piVar2 != -1) {
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 <= (int)in_ECX[2]);
  }
  return;
}



void FUN_00942980(int param_1,undefined4 param_2)

{
  int *in_ECX;
  
  *(undefined4 *)(*in_ECX + (param_1 + 2 + in_ECX[2] * 2) * 4) = param_2;
  return;
}



void FUN_009429a0(int param_1)

{
  int *in_ECX;
  int *piVar1;
  
  param_1 = param_1 + 1;
  if (param_1 <= in_ECX[2]) {
    piVar1 = (int *)(*in_ECX + param_1 * 4);
    do {
      if (*piVar1 != -1) {
        return;
      }
      param_1 = param_1 + 1;
      piVar1 = piVar1 + 1;
    } while (param_1 <= in_ECX[2]);
  }
  return;
}



void FUN_009429d0(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  char *pcVar6;
  uint uVar7;
  
  uVar4 = 0;
  cVar2 = *param_1;
  pcVar6 = param_1;
  while (cVar2 != '\0') {
    uVar4 = uVar4 * 0x1f + (int)cVar2;
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    cVar2 = *pcVar1;
  }
  uVar4 = uVar4 & 0x7fffffff;
  iVar5 = in_ECX[2];
  if (in_ECX[1] * 2 - iVar5 != 0 && iVar5 <= in_ECX[1] * 2) {
    FUN_00942bd0(iVar5 * 2 + 2);
  }
  uVar3 = in_ECX[2];
  uVar7 = uVar3 & uVar4;
  iVar5 = *(int *)(*in_ECX + uVar7 * 4);
  while (iVar5 != -1) {
    if ((*(uint *)(*in_ECX + uVar7 * 4) == uVar4) &&
       (iVar5 = FUN_008b1770(param_1,*(undefined4 *)(*in_ECX + 4 + (uVar3 + uVar7) * 4)), iVar5 == 0
       )) goto LAB_00942a4f;
    uVar3 = in_ECX[2];
    uVar7 = uVar7 + 1 & uVar3;
    iVar5 = *(int *)(*in_ECX + uVar7 * 4);
  }
  in_ECX[1] = in_ECX[1] + 1;
LAB_00942a4f:
  *(uint *)(*in_ECX + uVar7 * 4) = uVar4;
  *(char **)(*in_ECX + 4 + (in_ECX[2] + uVar7) * 4) = param_1;
  *(undefined4 *)(*in_ECX + (uVar7 + 2 + in_ECX[2] * 2) * 4) = param_2;
  return;
}



uint FUN_00942a80(char *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *in_ECX;
  char *pcVar7;
  uint uVar8;
  
  uVar5 = 0;
  cVar2 = *param_1;
  pcVar7 = param_1;
  while (cVar2 != '\0') {
    uVar5 = uVar5 * 0x1f + (int)cVar2;
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
    cVar2 = *pcVar1;
  }
  iVar6 = *in_ECX;
  uVar3 = in_ECX[2];
  uVar8 = uVar3 & uVar5 & 0x7fffffff;
  uVar4 = *(uint *)(iVar6 + uVar8 * 4);
  while( true ) {
    if (uVar4 == 0xffffffff) {
      return in_ECX[2] + 1;
    }
    if ((uVar4 == (uVar5 & 0x7fffffff)) &&
       (iVar6 = FUN_008b1770(param_1,*(undefined4 *)(iVar6 + 4 + (uVar3 + uVar8) * 4)), iVar6 == 0))
    break;
    uVar3 = in_ECX[2];
    iVar6 = *in_ECX;
    uVar8 = uVar8 + 1 & uVar3;
    uVar4 = *(uint *)(iVar6 + uVar8 * 4);
  }
  return uVar8;
}



undefined4 FUN_00942b00(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_00942a80(param_1);
  if (iVar1 <= in_ECX[2]) {
    *param_2 = *(undefined4 *)(*in_ECX + (iVar1 + 2 + in_ECX[2] * 2) * 4);
    return 0;
  }
  return 1;
}



undefined4 FUN_00942b40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_00942a80(param_1);
  if (iVar1 <= in_ECX[2]) {
    return *(undefined4 *)(*in_ECX + (iVar1 + 2 + in_ECX[2] * 2) * 4);
  }
  return param_2;
}



void FUN_00942b70(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xc0,0x14);
  *in_ECX = uVar1;
  FUN_008b18c0(uVar1,0xff,0x40);
  in_ECX[1] = 0;
  in_ECX[2] = 0xf;
  return;
}



void FUN_00942bb0(void)

{
  undefined4 *in_ECX;
  
  (**(code **)(*DAT_00ba7d98 + 0x14))(*in_ECX,(in_ECX[2] + 1) * 0xc,0x14);
  return;
}



void FUN_00942bd0(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = *in_ECX;
  iVar3 = in_ECX[2] + 1;
  iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(param_1 * 0xc,0x14);
  *in_ECX = iVar2;
  FUN_008b18c0(iVar2,0xff,param_1 * 4);
  in_ECX[2] = param_1 + -1;
  iVar2 = 0;
  in_ECX[1] = 0;
  if (0 < iVar3) {
    puVar4 = (undefined4 *)(iVar1 + iVar3 * 4);
    do {
      if (*(int *)(iVar1 + iVar2 * 4) != -1) {
        FUN_009429d0(*puVar4,*(undefined4 *)(iVar1 + (iVar2 + iVar3 * 2) * 4));
      }
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar2 < iVar3);
  }
  (**(code **)(*DAT_00ba7d98 + 0x14))(iVar1,iVar3 * 0xc,0x14);
  return;
}



int FUN_00942ca0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 8) + 0xc;
}



undefined4 FUN_00942cb0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = FUN_008b0f40(param_1,&local_4);
  if (iVar1 == 1) {
    local_4 = FUN_009531a0(param_1,&DAT_00ba8788);
    FUN_0090c290(local_4);
    FUN_008b0e80(param_1,local_4);
  }
  return local_4;
}



bool FUN_00942d10(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  int in_ECX;
  
  uVar1 = param_3;
  if (*(int *)(in_ECX + 0xc) != 0) {
    uVar1 = FUN_00942cb0(param_3,*(int *)(in_ECX + 8) + 0xc);
  }
  (**(code **)(**(int **)(in_ECX + 8) + 8))(param_2,param_3,param_1,uVar1,param_4);
  pcVar2 = (char *)(**(code **)(*param_1 + 8))(&stack0xfffffff8);
  return *pcVar2 == '\0';
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00942d70(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00aa2444;
  iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x14,0x12);
  *(undefined2 *)(iVar1 + 4) = 0x14;
  FUN_0090bba0(&DAT_00b2fde4);
  iVar1 = FUN_00953530(&stack0xfffffff4,in_ECX);
  in_ECX[2] = iVar1;
  if ((((*(char *)(iVar1 + 0xc) != (char)_DAT_00b2fde4) ||
       (*(char *)(iVar1 + 0xd) != (char)((uint)_DAT_00b2fde4 >> 8))) ||
      (*(char *)(iVar1 + 0xe) != (char)((uint)_DAT_00b2fde4 >> 0x10))) ||
     (*(char *)(iVar1 + 0xf) != (char)((uint)_DAT_00b2fde4 >> 0x18))) {
    iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xc,5);
    if (iVar1 != 0) {
      FUN_008b0e10();
      in_ECX[3] = iVar1;
      return;
    }
  }
  in_ECX[3] = 0;
  return;
}



void FUN_00942e10(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[2];
  *in_ECX = &PTR_FUN_00aa2444;
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  iVar2 = in_ECX[3];
  if (iVar2 != 0) {
    FUN_008b0e60();
    (**(code **)(*DAT_00ba7d98 + 0x14))(iVar2,0xc,5);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00942e60(byte param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[2];
  *in_ECX = &PTR_FUN_00aa2444;
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  iVar2 = in_ECX[3];
  if (iVar2 != 0) {
    FUN_008b0e60();
    (**(code **)(*DAT_00ba7d98 + 0x14))(iVar2,0xc,5);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00942ed0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *in_ECX;
  int unaff_EBX;
  
  piVar2 = (int *)(**(code **)(*in_ECX + 0xc))();
  iVar1 = *piVar2;
  uVar3 = FUN_0090d1e0();
  (**(code **)(iVar1 + 8))(param_2,uVar3);
  piVar2 = (int *)(**(code **)(*in_ECX + 8))();
  (**(code **)(*piVar2 + 8))(unaff_EBX);
  piVar2 = (int *)(**(code **)(*in_ECX + 0x10))();
  (**(code **)(*piVar2 + 8))(*(undefined4 *)(unaff_EBX + 8),param_2);
  return;
}



void FUN_00942f20(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = FUN_0090d1e0();
  }
  FUN_009429d0(param_2,param_1);
  return;
}



void FUN_00942f70(undefined4 *param_1)

{
  FUN_009429d0(*param_1,param_1);
  return;
}



void FUN_00942ff0(byte param_1)

{
  undefined4 *in_ECX;
  
  FUN_00942bb0();
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00943030(byte param_1)

{
  undefined4 *in_ECX;
  
  FUN_008b0e60();
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



undefined4 * FUN_00943070(void)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00aa2768;
  piVar1 = (int *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x14,0x12);
  *(undefined2 *)(piVar1 + 1) = 0x14;
  *(undefined2 *)((int)piVar1 + 6) = 1;
  *piVar1 = (int)&PTR_FUN_00aa2738;
  FUN_00942b70();
  in_ECX[2] = piVar1;
  puVar2 = &DAT_00ba93c4;
  ppuVar4 = &PTR_DAT_00a9aa48;
  do {
    (**(code **)(*piVar1 + 8))(puVar2,0);
    puVar2 = ppuVar4[1];
    ppuVar4 = ppuVar4 + 1;
  } while (puVar2 != (undefined *)0x0);
  piVar1 = (int *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x14,0x12);
  *(undefined2 *)(piVar1 + 1) = 0x14;
  *(undefined2 *)((int)piVar1 + 6) = 1;
  *piVar1 = (int)&PTR_FUN_00aa2748;
  FUN_00942b70();
  in_ECX[3] = piVar1;
  ppuVar4 = &PTR_s_hkBoxShape_00b2fa8c;
  ppuVar5 = &PTR_PTR_00a9a910;
  do {
    (**(code **)(*piVar1 + 8))(ppuVar4);
    ppuVar4 = (undefined **)ppuVar5[1];
    ppuVar5 = ppuVar5 + 1;
  } while (ppuVar4 != (undefined **)0x0);
  puVar3 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x14,0x12);
  *(undefined2 *)(puVar3 + 1) = 0x14;
  *(undefined2 *)((int)puVar3 + 6) = 1;
  *puVar3 = &PTR_FUN_00aa2758;
  FUN_008b0e10();
  in_ECX[4] = puVar3;
  FUN_009546d0(&PTR_PTR_00a9a910,&PTR_DAT_00a9aa48);
  return in_ECX;
}



void FUN_00943170(byte param_1)

{
  FUN_009431a0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_009431a0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[2];
  *in_ECX = &PTR_FUN_00aa2768;
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[3];
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)in_ECX[4];
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00943230(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_14;
  
  fVar6 = *param_2;
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fStack_14 = param_2[3];
  fVar3 = fVar6 + *param_1;
  fVar4 = fVar7 + param_1[1];
  fVar5 = fVar8 + param_1[2];
  fVar2 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  if (1e-16 < fVar2) {
    fVar2 = 1.0 / fVar2;
    fVar6 = fVar2 * fVar3;
    fVar7 = fVar2 * fVar4;
    fVar8 = fVar2 * fVar5;
    fStack_14 = fVar2 * (fStack_14 + param_1[3]);
  }
  fVar2 = fVar7 * param_4[2] - fVar8 * param_4[1];
  fVar3 = fVar8 * *param_4 - fVar6 * param_4[2];
  fVar4 = fVar6 * param_4[1] - fVar7 * *param_4;
  fVar1 = (float10)FUN_008ecbb0(fVar4 * param_3[2] + fVar3 * param_3[1] + fVar2 * *param_3,
                                (fVar2 * fVar7 - fVar3 * fVar6) * param_3[2] +
                                (fVar4 * fVar6 - fVar2 * fVar8) * param_3[1] +
                                (fVar3 * fVar8 - fVar4 * fVar7) * *param_3);
  *param_6 = (float)fVar1;
  *param_5 = fVar6;
  param_5[1] = fVar7;
  param_5[2] = fVar8;
  param_5[3] = fStack_14;
  return;
}



undefined4 FUN_00943410(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}



void FUN_00943420(int *param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00aa27e0;
  in_ECX[2] = param_1;
  uVar1 = (**(code **)(*param_1 + 0x1c))();
  in_ECX[3] = uVar1;
  return;
}



void FUN_00943450(void)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00943460(uint *param_1,int param_2,uint param_3,float *param_4,float *param_5)

{
  int *piVar1;
  int in_ECX;
  float *pfVar2;
  float10 fVar3;
  float fStack_228;
  uint local_224;
  uint uStack_220;
  uint uStack_21c;
  uint uStack_218;
  undefined1 local_210 [524];
  
  *param_4 = 3.4028235e+38;
  *param_5 = -3.4028235e+38;
  if (0 < (int)param_3) {
    pfVar2 = (float *)(param_2 + 0xc);
    local_224 = param_3;
    do {
      piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 8) + 0x28))(pfVar2[-3],local_210);
      if (piVar1 == (int *)0x0) {
        fVar3 = (float10)0.0;
        fStack_228 = 0.0;
      }
      else {
        (**(code **)(*piVar1 + 0x10))(param_1);
        local_224 = *param_1 ^ 0x80000000;
        uStack_220 = param_1[1] ^ 0x80000000;
        uStack_21c = param_1[2] ^ 0x80000000;
        uStack_218 = param_1[3] ^ 0x80000000;
        fVar3 = (float10)(**(code **)(*piVar1 + 0x10))(&local_224);
        fVar3 = -fVar3;
      }
      pfVar2[-1] = (float)fVar3;
      *pfVar2 = fStack_228;
      if (fVar3 < (float10)*param_4) {
        *param_4 = (float)fVar3;
      }
      if (*param_5 < fStack_228) {
        *param_5 = fStack_228;
      }
      pfVar2 = pfVar2 + 4;
      local_224 = local_224 - 1;
    } while (local_224 != 0);
  }
  return;
}



void FUN_00943540(uint *param_1,undefined4 *param_2,uint param_3,float *param_4,float *param_5)

{
  int *piVar1;
  int in_ECX;
  float10 fVar2;
  float fStack_228;
  uint local_224;
  uint uStack_220;
  uint uStack_21c;
  uint uStack_218;
  undefined1 local_210 [524];
  
  *param_4 = 3.4028235e+38;
  *param_5 = -3.4028235e+38;
  if (0 < (int)param_3) {
    local_224 = param_3;
    do {
      piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 8) + 0x28))(*param_2,local_210);
      if (piVar1 == (int *)0x0) {
        fVar2 = (float10)0.0;
        fStack_228 = 0.0;
      }
      else {
        (**(code **)(*piVar1 + 0x10))(param_1);
        local_224 = *param_1 ^ 0x80000000;
        uStack_220 = param_1[1] ^ 0x80000000;
        uStack_21c = param_1[2] ^ 0x80000000;
        uStack_218 = param_1[3] ^ 0x80000000;
        fVar2 = (float10)(**(code **)(*piVar1 + 0x10))(&local_224);
        fVar2 = -fVar2;
      }
      if (fVar2 < (float10)*param_4) {
        *param_4 = (float)fVar2;
      }
      if (*param_5 < fStack_228) {
        *param_5 = fStack_228;
      }
      param_2 = param_2 + 4;
      local_224 = local_224 - 1;
    } while (local_224 != 0);
  }
  return;
}



void FUN_00943650(undefined4 *param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *param_1;
  *(undefined4 *)(in_ECX + 8) = param_1[1];
  *(undefined4 *)(in_ECX + 0xc) = param_1[2];
  *(undefined4 *)(in_ECX + 0x10) = param_1[3];
  *(undefined4 *)(in_ECX + 0x14) = param_1[4];
  return;
}



void FUN_00943680(undefined4 *param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = *param_1;
  *(undefined4 *)(in_ECX + 0x1c) = param_1[1];
  *(undefined4 *)(in_ECX + 0x20) = param_1[2];
  *(undefined4 *)(in_ECX + 0x24) = param_1[3];
  *(undefined4 *)(in_ECX + 0x28) = param_1[4];
  *(undefined4 *)(in_ECX + 0x2c) = param_1[5];
  return;
}



int FUN_009436b0(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  return (iVar1 + 0x1b400 + *(int *)(in_ECX + 8)) * 0x10;
}



int FUN_009436d0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 *puStack_104;
  undefined1 local_100 [4];
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [92];
  int aiStack_84 [32];
  
  iVar1 = (**(code **)(*param_1 + 8))();
  iVar1 = iVar1 + *(int *)(in_ECX + 8);
  FUN_00956490(iVar1 * 0xc);
  FUN_00957fd0(in_ECX + 0x18);
  FUN_009554e0(in_ECX + 0x30,auStack_f0,param_1);
  iVar2 = (**(code **)(*param_1 + 8))();
  iVar2 = (iVar2 + 0x1b400 + *(int *)(in_ECX + 8)) * 0x10;
  if ((param_2 == 0) || (iVar3 = param_2, param_3 < iVar2)) {
    iVar3 = (**(code **)*DAT_00ba7d98)(iVar2,0x25);
  }
  iStack_f8 = iVar1 * 0x10 + iVar3;
  iStack_f4 = iStack_f8 + 0xf8000;
  iStack_fc = iVar3;
  (**(code **)(*param_1 + 0xc))(iVar3);
  FUN_00957590();
  uVar4 = FUN_00957c90(param_1,auStack_e0,aiStack_84,puStack_104 + 1,local_100);
  FUN_004bfc40();
  if (iVar3 != param_2) {
    (**(code **)(*DAT_00ba7d98 + 4))(iVar3);
  }
  *puStack_104 = uVar4;
  iVar1 = FUN_009568a0();
  (**(code **)(aiStack_84[0] + 0x14))(uVar4,iVar1 + 0x10);
  FUN_004bfc40();
  return iVar1;
}



void FUN_00943800(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00943890(param_1);
  FUN_009438e0(param_1);
  *(undefined4 *)(in_ECX + 0x34) = 0x3e4ccccd;
  *(undefined4 *)(in_ECX + 0x30) = 0x3f000000;
  *(undefined4 *)(in_ECX + 0x38) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x50) = 4;
  *(undefined4 *)(in_ECX + 0x40) = 0x3e4ccccd;
  *(undefined4 *)(in_ECX + 0x44) = 0x3e4ccccd;
  *(undefined4 *)(in_ECX + 0x48) = 0x3d4ccccd;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  return;
}



void FUN_00943860(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x30) = *param_1;
  *(undefined4 *)(in_ECX + 0x34) = param_1[1];
  *(undefined4 *)(in_ECX + 0x38) = param_1[2];
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  *(undefined4 *)(in_ECX + 0x40) = param_1[4];
  *(undefined4 *)(in_ECX + 0x44) = uVar1;
  *(undefined4 *)(in_ECX + 0x48) = uVar2;
  *(undefined4 *)(in_ECX + 0x4c) = uVar3;
  *(undefined4 *)(in_ECX + 0x50) = param_1[8];
  return;
}



void FUN_00943890(int param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[4] = 5;
  in_ECX[3] = 5;
  *in_ECX = 0x3dcccccd;
  in_ECX[1] = 1000;
  in_ECX[2] = 10;
  if (param_1 == 0) {
    *in_ECX = 0x3e4ccccd;
  }
  else if (param_1 == 1) {
    *in_ECX = 0x3d4ccccd;
    in_ECX[2] = 0x1e;
    return;
  }
  return;
}



void FUN_009438e0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0x3f800000;
  in_ECX[1] = 0x3f800000;
  in_ECX[2] = 0x3f800000;
  in_ECX[3] = 0x3f800000;
  in_ECX[4] = 0x3f800000;
  in_ECX[5] = 0x3f000000;
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_00943900(int *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  int *in_ECX;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  int *piVar11;
  int *piVar12;
  uint auStack_3b8 [87];
  undefined1 *puStack_25c;
  int *piStack_258;
  byte *local_254;
  int local_23c [4];
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  uint local_210;
  undefined1 local_200 [512];
  
  if (DAT_00ba94e4 == '\0') {
    local_254 = (byte *)0x4;
    piStack_258 = (int *)0x943920;
    DAT_00ba94e4 = FUN_009246e0();
    if (DAT_00ba94e4 == '\0') {
switchD_00943957_caseD_0:
      return;
    }
  }
LAB_00943944:
  pbVar10 = param_2;
  bVar1 = *pbVar10;
  uVar4 = (uint)bVar1;
  piStack_258 = param_1;
  switch(uVar4) {
  case 0:
    goto switchD_00943957_caseD_0;
  case 1:
  case 2:
  case 3:
  case 4:
    local_21c = param_1[8] - uVar4;
    local_22c = (uint)pbVar10[1] + param_1[4] << (bVar1 & 0x1f);
    bVar6 = (byte)(param_1[8] - uVar4);
    local_23c[0] = (in_ECX[4] >> (bVar6 & 0x1f)) - local_22c;
    local_228 = (uint)pbVar10[2] + param_1[5] << (bVar1 & 0x1f);
    local_23c[1] = (in_ECX[5] >> (bVar6 & 0x1f)) - local_228;
    local_224 = (uint)pbVar10[3] + param_1[6] << (bVar1 & 0x1f);
    local_23c[2] = (in_ECX[6] >> (bVar6 & 0x1f)) - local_224;
    local_23c[3] = (in_ECX[7] >> (bVar6 & 0x1f)) + 1;
    local_220 = param_1[7];
    local_218 = param_1[9];
    param_1 = local_23c;
    param_2 = pbVar10 + 4;
    goto LAB_00943944;
  case 5:
    param_2 = pbVar10 + pbVar10[1] + 2;
    goto LAB_00943944;
  case 6:
    param_2 = pbVar10 + pbVar10[2] + 3 + (uint)pbVar10[1] * 0x100;
    goto LAB_00943944;
  case 7:
    param_2 = pbVar10 + (uint)CONCAT11(pbVar10[1],pbVar10[2]) * 0x100 + pbVar10[3] + 4;
    goto LAB_00943944;
  default:
    local_254 = (byte *)0x1;
    piStack_258 = (int *)0x200;
    puStack_25c = local_200;
    auStack_3b8[0x56] = 0x943dbf;
    FUN_008bbfb0();
    local_254 = (byte *)0xaa1eac;
    piStack_258 = (int *)0x943dcd;
    FUN_008bbdb0();
    local_254 = (byte *)0x124;
    piStack_258 = (int *)0xaa2800;
    puStack_25c = local_200;
    auStack_3b8[0x56] = 0x1298fedd;
    auStack_3b8[0x55] = 3;
    auStack_3b8[0x54] = 0x943dee;
    (**(code **)(*DAT_00ba7fb0 + 8))();
    local_254 = (byte *)0x943df7;
    FUN_008bc000();
    param_2 = pbVar10;
    goto LAB_00943944;
  case 9:
    bVar1 = pbVar10[1];
    if (param_1 != local_23c) {
      piVar11 = local_23c;
      for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar11 = *param_1;
        param_1 = param_1 + 1;
        piVar11 = piVar11 + 1;
      }
      param_1 = local_23c;
    }
    local_220 = local_220 + (uint)bVar1;
    param_2 = pbVar10 + 2;
    goto LAB_00943944;
  case 10:
    bVar1 = pbVar10[1];
    bVar6 = pbVar10[2];
    if (param_1 != local_23c) {
      piVar11 = local_23c;
      for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar11 = *param_1;
        param_1 = param_1 + 1;
        piVar11 = piVar11 + 1;
      }
      param_1 = local_23c;
    }
    local_220 = local_220 + (uint)CONCAT11(bVar1,bVar6);
    param_2 = pbVar10 + 3;
    goto LAB_00943944;
  case 0xb:
    bVar1 = pbVar10[1];
    bVar6 = pbVar10[2];
    bVar2 = pbVar10[3];
    bVar3 = pbVar10[4];
    if (param_1 != local_23c) {
      piVar11 = local_23c;
      for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar11 = *param_1;
        param_1 = param_1 + 1;
        piVar11 = piVar11 + 1;
      }
      param_1 = local_23c;
    }
    local_220 = CONCAT31(CONCAT21(CONCAT11(bVar1,bVar6),bVar2),bVar3);
    param_2 = pbVar10 + 5;
    goto LAB_00943944;
  case 0x10:
  case 0x11:
  case 0x12:
    uVar9 = (uint)pbVar10[1];
    uVar7 = (uint)pbVar10[2];
    iVar5 = param_1[uVar4 - 0x10];
    iVar8 = param_1[3];
    break;
  case 0x13:
    iVar5 = param_1[2] + param_1[1];
    uVar9 = (uint)pbVar10[1] << 1;
    uVar7 = (uint)pbVar10[2] << 1;
    iVar8 = param_1[3] + 1 + (param_1[3] >> 1);
    break;
  case 0x14:
    iVar5 = param_1[1];
    iVar8 = param_1[2];
    goto LAB_009439da;
  case 0x15:
    iVar5 = param_1[2] + *param_1;
    uVar9 = (uint)pbVar10[1] << 1;
    uVar7 = (uint)pbVar10[2] << 1;
    iVar8 = param_1[3] + 1 + (param_1[3] >> 1);
    break;
  case 0x16:
    iVar8 = param_1[2];
    goto LAB_009439d8;
  case 0x17:
    iVar5 = param_1[1] + *param_1;
    uVar9 = (uint)pbVar10[1] << 1;
    uVar7 = (uint)pbVar10[2] << 1;
    iVar8 = param_1[3] + 1 + (param_1[3] >> 1);
    break;
  case 0x18:
    iVar8 = param_1[1];
LAB_009439d8:
    iVar5 = *param_1;
LAB_009439da:
    uVar9 = (uint)pbVar10[1] << 1;
    uVar7 = (uint)pbVar10[2] << 1;
    iVar5 = (iVar5 - iVar8) + 0xff;
    iVar8 = param_1[3] + 1 + (param_1[3] >> 1);
    break;
  case 0x19:
    iVar5 = param_1[2] + param_1[1] + *param_1;
    goto LAB_00943a21;
  case 0x1a:
    iVar8 = param_1[1];
    iVar5 = param_1[2];
    goto LAB_00943a16;
  case 0x1b:
    iVar8 = param_1[2];
    iVar5 = param_1[1];
LAB_00943a16:
    iVar5 = (iVar8 - iVar5) + 0xff + *param_1;
LAB_00943a21:
    uVar9 = (uint)pbVar10[1] * 3;
    uVar7 = (uint)pbVar10[2] * 3;
    iVar8 = param_1[3] << 2;
    break;
  case 0x1c:
    iVar5 = ((*param_1 - param_1[2]) - param_1[1]) + 0x1fe;
    uVar9 = (uint)pbVar10[1] * 3;
    uVar7 = (uint)pbVar10[2] * 3;
    iVar8 = param_1[3] << 2;
    break;
  case 0x20:
  case 0x21:
  case 0x22:
    param_2 = pbVar10 + 3;
    if ((int)(uint)pbVar10[1] <= param_1[3] + param_1[uVar4 - 0x20]) {
      param_2 = pbVar10 + 3 + pbVar10[2];
      if (param_1[uVar4 - 0x20] <= (int)(param_1[3] + 1 + (uint)pbVar10[1])) {
        local_254 = (byte *)((int)param_2 - (uint)pbVar10[2]);
        puStack_25c = (undefined1 *)0x943ad9;
        FUN_00943900();
      }
    }
    goto LAB_00943944;
  case 0x23:
  case 0x24:
  case 0x25:
    local_214 = param_1[uVar4 - 0x23];
    local_210 = (uint)pbVar10[1];
    if (local_214 + param_1[3] < (int)(uint)pbVar10[2]) {
      param_2 = pbVar10 + 7 + CONCAT11(pbVar10[3],pbVar10[4]);
    }
    else {
      param_2 = pbVar10 + 7 + CONCAT11(pbVar10[5],pbVar10[6]);
      if (local_214 <= (int)(param_1[3] + (uint)pbVar10[1])) {
        local_254 = param_2 + ((uint)CONCAT11(pbVar10[3],pbVar10[4]) -
                              (uint)CONCAT11(pbVar10[5],pbVar10[6]));
        puStack_25c = (undefined1 *)0x943b47;
        FUN_00943900();
      }
    }
    goto LAB_00943944;
  case 0x26:
  case 0x27:
  case 0x28:
    if (param_1[3] + param_1[uVar4 - 0x26] < (int)(uint)pbVar10[1]) {
      return;
    }
    if ((int)((uint)pbVar10[2] + param_1[3]) < param_1[uVar4 - 0x26]) {
      return;
    }
    param_2 = pbVar10 + 3;
    goto LAB_00943944;
  case 0x29:
  case 0x2a:
  case 0x2b:
    if (in_ECX[7] + in_ECX[uVar4 - 0x25] <
        (int)(uint)CONCAT21(CONCAT11(pbVar10[1],pbVar10[2]),pbVar10[3])) {
      return;
    }
    if ((int)(in_ECX[7] + (uint)pbVar10[6] + (uint)CONCAT11(pbVar10[4],pbVar10[5]) * 0x100) <
        in_ECX[uVar4 - 0x25]) {
      return;
    }
    param_2 = pbVar10 + 7;
    goto LAB_00943944;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
    uVar4 = uVar4 - 0x30;
    goto LAB_00943e4d;
  case 0x50:
    uVar4 = (uint)pbVar10[1];
    goto LAB_00943e4d;
  case 0x51:
    uVar4 = (uint)CONCAT11(pbVar10[1],pbVar10[2]);
    goto LAB_00943e4d;
  case 0x52:
    uVar4 = (uint)CONCAT21(CONCAT11(pbVar10[1],pbVar10[2]),pbVar10[3]);
    goto LAB_00943e4d;
  case 0x53:
    uVar4 = CONCAT31(CONCAT21(CONCAT11(pbVar10[1],pbVar10[2]),pbVar10[3]),pbVar10[4]);
LAB_00943e4d:
    iVar8 = param_1[7];
    piVar11 = (int *)*in_ECX;
    if (piVar11[1] == (piVar11[2] & 0x3fffffffU)) {
      local_254 = (byte *)0x4;
      puStack_25c = (undefined1 *)0x943e6c;
      piStack_258 = piVar11;
      FUN_008a6ee0();
    }
    *(uint *)(*piVar11 + piVar11[1] * 4) = iVar8 + uVar4;
    piVar11[1] = piVar11[1] + 1;
    return;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    param_2 = pbVar10 + 2;
    auStack_3b8[uVar4 + 8] = (uint)pbVar10[1];
    goto LAB_00943d86;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    auStack_3b8[uVar4 + 4] = (uint)CONCAT11(pbVar10[1],pbVar10[2]);
    param_2 = pbVar10 + 3;
    goto LAB_00943d86;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    auStack_3b8[uVar4] = CONCAT31(CONCAT21(CONCAT11(pbVar10[1],pbVar10[2]),pbVar10[3]),pbVar10[4]);
    param_2 = pbVar10 + 5;
LAB_00943d86:
    if (param_1 != local_23c) {
      piVar11 = param_1;
      piVar12 = local_23c;
      for (iVar8 = 10; param_1 = local_23c, iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar12 = *piVar11;
        piVar11 = piVar11 + 1;
        piVar12 = piVar12 + 1;
      }
    }
    goto LAB_00943944;
  }
  param_2 = pbVar10 + 4;
  if ((int)uVar7 <= iVar8 + iVar5) {
    param_2 = pbVar10 + 4 + pbVar10[3];
    if (iVar5 <= (int)(iVar8 + uVar9)) {
      local_254 = (byte *)((int)param_2 - (uint)pbVar10[3]);
      puStack_25c = (undefined1 *)0x943a9c;
      FUN_00943900();
    }
  }
  goto LAB_00943944;
}



void FUN_00943f80(int param_1,float *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_ECX;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *in_ECX = param_3;
  in_ECX[4] = (int)ROUND((*param_2 - *(float *)(param_1 + 0x10)) * *(float *)(param_1 + 0x1c)) + -1;
  in_ECX[5] = (int)ROUND((param_2[1] - *(float *)(param_1 + 0x14)) * *(float *)(param_1 + 0x1c)) +
              -1;
  in_ECX[6] = (int)ROUND((param_2[2] - *(float *)(param_1 + 0x18)) * *(float *)(param_1 + 0x1c)) +
              -1;
  local_28 = (int)*(short *)((int)in_ECX + 0x12);
  iVar2 = (int)ROUND(param_2[3] * *(float *)(param_1 + 0x1c)) + 2;
  in_ECX[7] = iVar2;
  local_24 = (int)*(short *)((int)in_ECX + 0x16);
  local_1c = (iVar2 >> 0x10) + 1;
  local_20 = (int)*(short *)((int)in_ECX + 0x1a);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_4 = 0;
  local_8 = 0x10;
  FUN_00943900(&local_28,uVar1);
  return;
}



void FUN_00944060(int *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  int *in_ECX;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  uint auStack_3b0 [82];
  undefined1 *puStack_268;
  int *piStack_264;
  byte *local_260;
  int local_244 [4];
  int local_234;
  int local_230;
  int local_22c;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  undefined1 local_200 [512];
  
  if (DAT_00ba94e5 == '\0') {
    local_260 = (byte *)0x4;
    piStack_264 = (int *)0x94407c;
    DAT_00ba94e5 = FUN_009246e0();
    if (DAT_00ba94e5 == '\0') {
switchD_009440b3_caseD_0:
      return;
    }
  }
LAB_009440a0:
  pbVar9 = param_2;
  bVar5 = *pbVar9;
  uVar6 = (uint)bVar5;
  piStack_264 = param_1;
  switch(uVar6) {
  case 0:
    goto switchD_009440b3_caseD_0;
  case 1:
  case 2:
  case 3:
  case 4:
    local_224 = (uint)pbVar9[1] + param_1[8] << (bVar5 & 0x1f);
    local_220 = (uint)pbVar9[2] + param_1[9] << (bVar5 & 0x1f);
    local_21c = (uint)pbVar9[3] + param_1[10] << (bVar5 & 0x1f);
    local_214 = param_1[0xc] + uVar6;
    bVar5 = 0x10 - (char)(param_1[0xc] + uVar6);
    local_234 = (in_ECX[8] >> (bVar5 & 0x1f)) - local_224;
    local_230 = (in_ECX[9] >> (bVar5 & 0x1f)) - local_220;
    local_22c = (in_ECX[10] >> (bVar5 & 0x1f)) - local_21c;
    local_244[0] = ((in_ECX[4] >> (bVar5 & 0x1f)) + 1) - local_224;
    local_244[1] = ((in_ECX[5] >> (bVar5 & 0x1f)) + 1) - local_220;
    local_244[2] = ((in_ECX[6] >> (bVar5 & 0x1f)) + 1) - local_21c;
    local_210 = param_1[0xd];
    local_218 = param_1[0xb];
    param_1 = local_244;
    param_2 = pbVar9 + 4;
    goto LAB_009440a0;
  case 5:
    param_2 = pbVar9 + pbVar9[1] + 2;
    goto LAB_009440a0;
  case 6:
    param_2 = pbVar9 + (uint)pbVar9[1] * 0x100 + pbVar9[2] + 3;
    goto LAB_009440a0;
  case 7:
    param_2 = pbVar9 + (uint)CONCAT11(pbVar9[1],pbVar9[2]) * 0x100 + pbVar9[3] + 4;
    goto LAB_009440a0;
  default:
    piStack_264 = (int *)0x200;
    puStack_268 = local_200;
    local_260 = (byte *)0x1;
    auStack_3b0[0x51] = 0x9445ce;
    FUN_008bbfb0();
    local_260 = (byte *)0xaa1eac;
    piStack_264 = (int *)0x9445dc;
    FUN_008bbdb0();
    local_260 = (byte *)0x173;
    piStack_264 = (int *)0xaa2838;
    puStack_268 = local_200;
    auStack_3b0[0x51] = 0x1298fedd;
    auStack_3b0[0x50] = 3;
    auStack_3b0[0x4f] = 0x9445fd;
    (**(code **)(*DAT_00ba7fb0 + 8))();
    local_260 = (byte *)0x944606;
    FUN_008bc000();
    param_2 = pbVar9;
    goto LAB_009440a0;
  case 9:
    bVar5 = pbVar9[1];
    if (param_1 != local_244) {
      piVar10 = param_1;
      piVar12 = local_244;
      for (iVar8 = 0xe; param_1 = local_244, iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar12 = *piVar10;
        piVar10 = piVar10 + 1;
        piVar12 = piVar12 + 1;
      }
    }
    local_218 = local_218 + (uint)bVar5;
    param_2 = pbVar9 + 2;
    goto LAB_009440a0;
  case 10:
    bVar5 = pbVar9[1];
    bVar1 = pbVar9[2];
    if (param_1 != local_244) {
      piVar10 = param_1;
      piVar12 = local_244;
      for (iVar8 = 0xe; param_1 = local_244, iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar12 = *piVar10;
        piVar10 = piVar10 + 1;
        piVar12 = piVar12 + 1;
      }
    }
    local_218 = local_218 + (uint)CONCAT11(bVar5,bVar1);
    param_2 = pbVar9 + 3;
    goto LAB_009440a0;
  case 0xb:
    bVar5 = pbVar9[1];
    bVar1 = pbVar9[2];
    bVar2 = pbVar9[3];
    bVar3 = pbVar9[4];
    if (param_1 != local_244) {
      piVar10 = param_1;
      piVar12 = local_244;
      for (iVar8 = 0xe; param_1 = local_244, iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar12 = *piVar10;
        piVar10 = piVar10 + 1;
        piVar12 = piVar12 + 1;
      }
    }
    local_218 = CONCAT31(CONCAT21(CONCAT11(bVar5,bVar1),bVar2),bVar3);
    param_2 = pbVar9 + 5;
    goto LAB_009440a0;
  case 0x10:
  case 0x11:
  case 0x12:
    if ((int)(uint)pbVar9[2] < param_1[uVar6 - 0x10]) {
      param_2 = pbVar9 + 4 + pbVar9[3];
      if (param_1[uVar6 - 0xc] < (int)(uint)pbVar9[1]) {
        local_260 = (byte *)((int)param_2 - (uint)pbVar9[3]);
        puStack_268 = (undefined1 *)0x9442ab;
        FUN_00944060();
      }
    }
    else {
      param_2 = pbVar9 + 4;
      if ((int)(uint)pbVar9[1] <= param_1[uVar6 - 0xc]) {
        return;
      }
    }
    goto LAB_009440a0;
  case 0x13:
    iVar4 = param_1[6] + param_1[5];
    iVar8 = (uint)pbVar9[1] << 1;
    iVar11 = (uint)pbVar9[2] << 1;
    iVar7 = param_1[2] + param_1[1];
    break;
  case 0x14:
    iVar4 = param_1[5] - param_1[2];
    iVar7 = param_1[1] - param_1[6];
    iVar8 = (uint)pbVar9[1] * 2 + -0xff;
    iVar11 = (uint)pbVar9[2] * 2 + -0xff;
    break;
  case 0x15:
    iVar4 = param_1[6] + param_1[4];
    iVar8 = (uint)pbVar9[1] << 1;
    iVar11 = (uint)pbVar9[2] << 1;
    iVar7 = param_1[2] + *param_1;
    break;
  case 0x16:
    iVar4 = param_1[4] - param_1[2];
    iVar7 = *param_1 - param_1[6];
    iVar8 = (uint)pbVar9[1] * 2 + -0xff;
    iVar11 = (uint)pbVar9[2] * 2 + -0xff;
    break;
  case 0x17:
    iVar4 = param_1[5] + param_1[4];
    iVar8 = (uint)pbVar9[1] << 1;
    iVar11 = (uint)pbVar9[2] << 1;
    iVar7 = param_1[1] + *param_1;
    break;
  case 0x18:
    iVar4 = param_1[4] - param_1[1];
    iVar7 = *param_1;
    iVar8 = (uint)pbVar9[1] * 2 + -0xff;
    iVar11 = (uint)pbVar9[2] * 2 + -0xff;
    goto LAB_00944228;
  case 0x19:
    iVar8 = (uint)pbVar9[1] * 3;
    iVar11 = (uint)pbVar9[2] * 3;
    iVar4 = param_1[6] + param_1[5] + param_1[4];
    iVar7 = param_1[2] + param_1[1] + *param_1;
    break;
  case 0x1a:
    iVar8 = (pbVar9[1] - 0x55) * 3;
    iVar11 = (pbVar9[2] - 0x55) * 3;
    iVar4 = (param_1[5] - param_1[2]) + param_1[4];
    iVar7 = (param_1[1] - param_1[6]) + *param_1;
    break;
  case 0x1b:
    iVar8 = (pbVar9[1] - 0x55) * 3;
    iVar11 = (pbVar9[2] - 0x55) * 3;
    iVar4 = (param_1[6] - param_1[1]) + param_1[4];
    iVar7 = (param_1[2] - param_1[5]) + *param_1;
    break;
  case 0x1c:
    iVar8 = (pbVar9[1] - 0xaa) * 3;
    iVar11 = (pbVar9[2] - 0xaa) * 3;
    iVar4 = (param_1[4] - param_1[2]) - param_1[1];
    iVar7 = *param_1 - param_1[6];
LAB_00944228:
    iVar7 = iVar7 - param_1[5];
    break;
  case 0x20:
  case 0x21:
  case 0x22:
    param_2 = pbVar9 + 3;
    if ((int)(uint)pbVar9[1] < param_1[uVar6 - 0x20]) {
      param_2 = pbVar9 + 3 + pbVar9[2];
      if (param_1[uVar6 - 0x1c] <= (int)(uint)pbVar9[1]) {
        local_260 = (byte *)((int)param_2 - (uint)pbVar9[2]);
        puStack_268 = (undefined1 *)0x9442e2;
        FUN_00944060();
      }
    }
    goto LAB_009440a0;
  case 0x23:
  case 0x24:
  case 0x25:
    if ((int)(uint)pbVar9[2] < param_1[uVar6 - 0x23]) {
      param_2 = pbVar9 + CONCAT11(pbVar9[5],pbVar9[6]) + 7;
      if (param_1[uVar6 - 0x1f] < (int)(uint)pbVar9[1]) {
        local_260 = param_2 + ((uint)CONCAT11(pbVar9[3],pbVar9[4]) -
                              (uint)CONCAT11(pbVar9[5],pbVar9[6]));
        puStack_268 = (undefined1 *)0x944357;
        FUN_00944060();
      }
    }
    else {
      if ((int)(uint)pbVar9[1] <= param_1[uVar6 - 0x1f]) {
        return;
      }
      param_2 = pbVar9 + CONCAT11(pbVar9[3],pbVar9[4]) + 7;
    }
    goto LAB_009440a0;
  case 0x26:
  case 0x27:
  case 0x28:
    if (param_1[uVar6 - 0x26] < (int)(uint)pbVar9[1]) {
      return;
    }
    if ((int)(uint)pbVar9[2] <= param_1[uVar6 - 0x22]) {
      return;
    }
    param_2 = pbVar9 + 3;
    goto LAB_009440a0;
  case 0x29:
  case 0x2a:
  case 0x2b:
    if (in_ECX[uVar6 - 0x25] < (int)(uint)CONCAT21(CONCAT11(pbVar9[1],pbVar9[2]),pbVar9[3])) {
      return;
    }
    if ((int)(uint)CONCAT21(CONCAT11(pbVar9[4],pbVar9[5]),pbVar9[6]) < in_ECX[uVar6 - 0x21]) {
      return;
    }
    param_2 = pbVar9 + 7;
    goto LAB_009440a0;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
    uVar6 = uVar6 - 0x30;
    goto LAB_0094465c;
  case 0x50:
    uVar6 = (uint)pbVar9[1];
    goto LAB_0094465c;
  case 0x51:
    uVar6 = (uint)CONCAT11(pbVar9[1],pbVar9[2]);
    goto LAB_0094465c;
  case 0x52:
    uVar6 = (uint)CONCAT21(CONCAT11(pbVar9[1],pbVar9[2]),pbVar9[3]);
    goto LAB_0094465c;
  case 0x53:
    uVar6 = CONCAT31(CONCAT21(CONCAT11(pbVar9[1],pbVar9[2]),pbVar9[3]),pbVar9[4]);
LAB_0094465c:
    piVar10 = (int *)*in_ECX;
    iVar8 = param_1[0xb];
    if (piVar10[1] == (piVar10[2] & 0x3fffffffU)) {
      local_260 = (byte *)0x4;
      puStack_268 = (undefined1 *)0x94467b;
      piStack_264 = piVar10;
      FUN_008a6ee0();
    }
    *(uint *)(*piVar10 + piVar10[1] * 4) = iVar8 + uVar6;
    piVar10[1] = piVar10[1] + 1;
    return;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    param_2 = pbVar9 + 2;
    auStack_3b0[uVar6 + 8] = (uint)pbVar9[1];
    goto LAB_00944591;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    auStack_3b0[uVar6 + 4] = (uint)CONCAT11(pbVar9[1],pbVar9[2]);
    param_2 = pbVar9 + 3;
    goto LAB_00944591;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    auStack_3b0[uVar6] = CONCAT31(CONCAT21(CONCAT11(pbVar9[1],pbVar9[2]),pbVar9[3]),pbVar9[4]);
    param_2 = pbVar9 + 5;
LAB_00944591:
    if (param_1 != local_244) {
      piVar10 = local_244;
      for (iVar8 = 0xe; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar10 = *param_1;
        param_1 = param_1 + 1;
        piVar10 = piVar10 + 1;
      }
      param_1 = local_244;
    }
    goto LAB_009440a0;
  }
  param_2 = pbVar9 + 4;
  if (iVar11 < iVar7) {
    bVar5 = pbVar9[3];
    if (iVar4 < iVar8) {
      puStack_268 = (undefined1 *)0x94425f;
      local_260 = param_2;
      FUN_00944060();
      param_2 = param_2 + bVar5;
    }
    else {
      param_2 = param_2 + bVar5;
    }
  }
  else if (iVar8 <= iVar4) {
    return;
  }
  goto LAB_009440a0;
}



void FUN_00944790(int param_1,float *param_2,float *param_3,float param_4,undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *in_ECX;
  float fVar5;
  float fVar6;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  *in_ECX = param_5;
  in_ECX[0xc] = param_1;
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar5 = ABS(fVar1 * *param_2) + ABS(fVar2 * param_2[4]) + ABS(fVar3 * param_2[8]) + param_4;
  fVar6 = ABS(fVar1 * param_2[1]) + ABS(fVar2 * param_2[5]) + ABS(fVar3 * param_2[9]) + param_4;
  param_4 = ABS(fVar1 * param_2[2]) + ABS(fVar2 * param_2[6]) + ABS(fVar3 * param_2[10]) + param_4;
  fVar1 = param_2[0xc];
  fVar2 = param_2[0xd];
  fVar3 = param_2[0xe];
  in_ECX[8] = (int)ROUND(((-fVar5 + fVar1) - *(float *)(param_1 + 0x10)) *
                         *(float *)(param_1 + 0x1c)) + -1;
  in_ECX[4] = (int)ROUND(((fVar5 + fVar1) - *(float *)(in_ECX[0xc] + 0x10)) *
                         *(float *)(in_ECX[0xc] + 0x1c)) + 1;
  in_ECX[9] = (int)ROUND(((-fVar6 + fVar2) - *(float *)(in_ECX[0xc] + 0x14)) *
                         *(float *)(in_ECX[0xc] + 0x1c)) + -1;
  in_ECX[5] = (int)ROUND(((fVar6 + fVar2) - *(float *)(in_ECX[0xc] + 0x14)) *
                         *(float *)(in_ECX[0xc] + 0x1c)) + 1;
  in_ECX[10] = (int)ROUND(((-param_4 + fVar3) - *(float *)(in_ECX[0xc] + 0x18)) *
                          *(float *)(in_ECX[0xc] + 0x1c)) + -1;
  local_40 = (int)*(short *)((int)in_ECX + 0x22);
  iVar4 = (int)ROUND(((param_4 + fVar3) - *(float *)(in_ECX[0xc] + 0x18)) *
                     *(float *)(in_ECX[0xc] + 0x1c)) + 1;
  local_50 = *(short *)((int)in_ECX + 0x12) + 1;
  local_3c = (int)*(short *)((int)in_ECX + 0x26);
  in_ECX[6] = iVar4;
  local_4c = *(short *)((int)in_ECX + 0x16) + 1;
  local_48 = (iVar4 >> 0x10) + 1;
  local_38 = (int)*(short *)((int)in_ECX + 0x2a);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  FUN_00944060(&local_50,*(undefined4 *)(in_ECX[0xc] + 0x20));
  return;
}



void FUN_00944950(int param_1,float *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_ECX;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  *in_ECX = param_3;
  in_ECX[0xc] = param_1;
  in_ECX[8] = (int)ROUND((*param_2 - *(float *)(param_1 + 0x10)) * *(float *)(param_1 + 0x1c)) + -1;
  in_ECX[4] = (int)ROUND((param_2[4] - *(float *)(in_ECX[0xc] + 0x10)) *
                         *(float *)(in_ECX[0xc] + 0x1c)) + 1;
  in_ECX[9] = (int)ROUND((param_2[1] - *(float *)(in_ECX[0xc] + 0x14)) *
                         *(float *)(in_ECX[0xc] + 0x1c)) + -1;
  in_ECX[5] = (int)ROUND((param_2[5] - *(float *)(in_ECX[0xc] + 0x14)) *
                         *(float *)(in_ECX[0xc] + 0x1c)) + 1;
  in_ECX[10] = (int)ROUND((param_2[2] - *(float *)(in_ECX[0xc] + 0x18)) *
                          *(float *)(in_ECX[0xc] + 0x1c)) + -1;
  local_40 = (int)*(short *)((int)in_ECX + 0x22);
  iVar1 = (int)ROUND((param_2[6] - *(float *)(in_ECX[0xc] + 0x18)) * *(float *)(in_ECX[0xc] + 0x1c))
          + 1;
  local_50 = *(short *)((int)in_ECX + 0x12) + 1;
  local_3c = (int)*(short *)((int)in_ECX + 0x26);
  in_ECX[6] = iVar1;
  local_4c = *(short *)((int)in_ECX + 0x16) + 1;
  local_48 = (iVar1 >> 0x10) + 1;
  local_38 = (int)*(short *)((int)in_ECX + 0x2a);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  FUN_00944060(&local_50,*(undefined4 *)(in_ECX[0xc] + 0x20));
  return;
}



void FUN_00944a90(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *in_ECX = *param_1;
  in_ECX[1] = uVar1;
  in_ECX[2] = uVar2;
  in_ECX[3] = uVar3;
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  return;
}



void FUN_00944ac0(float *param_1,byte *param_2,float *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  char *pcVar17;
  int *piVar18;
  int in_ECX;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  int iVar22;
  uint auStack_444 [77];
  int **ppiStack_310;
  float *pfStack_30c;
  byte *pbStack_308;
  float *local_304;
  uint local_2e8;
  float local_2e0;
  float local_2dc;
  int local_2d8;
  undefined4 local_2cc;
  float local_2c8;
  undefined1 local_2c1;
  float local_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float local_2b0;
  float local_2ac;
  int *local_2a8;
  float local_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  undefined4 uStack_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float local_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float local_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float local_230;
  float local_220;
  float local_210 [131];
  
  if (DAT_00ba94e6 == '\0') {
    local_304 = (float *)0x4;
    pbStack_308 = (byte *)0x944ae3;
    DAT_00ba94e6 = FUN_009246e0();
    if (DAT_00ba94e6 == '\0') {
switchD_00944b1b_caseD_0:
      return;
    }
  }
LAB_00944b00:
  uVar19 = (uint)*param_2;
  local_2d8 = 999;
  switch(uVar19) {
  case 0:
    goto switchD_00944b1b_caseD_0;
  case 1:
  case 2:
  case 3:
  case 4:
    fStack_2a0 = (float)param_2[1];
    fStack_29c = (float)param_2[2];
    uStack_294 = 0;
    fStack_298 = (float)param_2[3];
    local_2ac = (float)(1 << (*param_2 & 0x1f));
    *param_3 = *param_3 - fStack_2a0;
    param_3[1] = param_3[1] - fStack_29c;
    param_3[2] = param_3[2] - fStack_298;
    param_3[3] = param_3[3] - 0.0;
    param_3[4] = param_3[4] - fStack_2a0;
    param_3[5] = param_3[5] - fStack_29c;
    param_3[6] = param_3[6] - fStack_298;
    param_3[7] = param_3[7] - 0.0;
    *param_3 = local_2ac * *param_3;
    param_3[1] = local_2ac * param_3[1];
    param_3[2] = local_2ac * param_3[2];
    param_3[3] = local_2ac * param_3[3];
    param_3[4] = local_2ac * param_3[4];
    param_3[5] = local_2ac * param_3[5];
    param_3[6] = local_2ac * param_3[6];
    param_3[7] = local_2ac * param_3[7];
    local_2c0 = local_2ac * (*param_1 + fStack_2a0);
    fStack_2bc = local_2ac * (param_1[1] + fStack_29c);
    fStack_2b8 = local_2ac * (param_1[2] + fStack_298);
    fStack_2b4 = local_2ac * (param_1[3] + 0.0);
    local_2b0 = (float)((int)param_1[4] + uVar19);
    local_2ac = local_2ac * param_1[5];
    param_2 = param_2 + 4;
    local_2a4 = param_1[7];
    local_2a8 = (int *)param_1[6];
    param_1 = &local_2c0;
    goto LAB_00944b00;
  case 5:
    param_2 = param_2 + param_2[1] + 2;
    goto LAB_00944b00;
  case 6:
    param_2 = param_2 + (uint)param_2[1] * 0x100 + param_2[2] + 3;
    goto LAB_00944b00;
  case 7:
    param_2 = param_2 + (uint)CONCAT11(param_2[1],param_2[2]) * 0x100 + param_2[3] + 4;
    goto LAB_00944b00;
  default:
    local_304 = (float *)0x1;
    pbStack_308 = (byte *)0x200;
    pfStack_30c = local_210;
    ppiStack_310 = (int **)0x94563f;
    FUN_008bbfb0();
    local_304 = (float *)0xaa1eac;
    pbStack_308 = (byte *)0x945650;
    FUN_008bbdb0();
    local_304 = (float *)0x1c9;
    pbStack_308 = (byte *)0xaa286c;
    pfStack_30c = local_210;
    ppiStack_310 = (int **)0x1298fedd;
    auStack_444[0x4c] = 3;
    auStack_444[0x4b] = 0x945674;
    (**(code **)(*DAT_00ba7fb0 + 8))();
    local_304 = (float *)0x945680;
    FUN_008bc000();
    goto LAB_00944b00;
  case 9:
    bVar7 = param_2[1];
    if (param_1 != &local_2c0) {
      local_304 = param_1;
      pbStack_308 = (byte *)0x945503;
      FUN_00944a90();
      param_1 = &local_2c0;
    }
    local_2a8 = (int *)((int)local_2a8 + (uint)bVar7);
    param_2 = param_2 + 2;
    goto LAB_00944b00;
  case 10:
    bVar7 = param_2[1];
    bVar8 = param_2[2];
    if (param_1 != &local_2c0) {
      local_304 = param_1;
      pbStack_308 = (byte *)0x945538;
      FUN_00944a90();
      param_1 = &local_2c0;
    }
    local_2a8 = (int *)((int)local_2a8 + (uint)CONCAT11(bVar7,bVar8));
    param_2 = param_2 + 3;
    goto LAB_00944b00;
  case 0xb:
    bVar7 = param_2[1];
    bVar8 = param_2[2];
    bVar9 = param_2[3];
    bVar10 = param_2[4];
    if (param_1 != &local_2c0) {
      local_304 = param_1;
      pbStack_308 = (byte *)0x94557f;
      FUN_00944a90();
      param_1 = &local_2c0;
    }
    param_2 = param_2 + 5;
    local_2a8 = (int *)CONCAT31(CONCAT21(CONCAT11(bVar7,bVar8),bVar9),bVar10);
    goto LAB_00944b00;
  case 0x10:
  case 0x11:
  case 0x12:
    local_2d8 = uVar19 - 0x10;
    local_2dc = (float)param_2[1];
    local_2e0 = (float)param_2[2];
    fVar4 = param_3[local_2d8];
    fVar5 = param_3[uVar19 - 0xc];
    break;
  case 0x13:
    local_2dc = (float)((uint)param_2[1] << 1);
    local_2e0 = (float)((uint)param_2[2] << 1);
    fVar4 = param_3[2] + param_3[1];
    fVar5 = param_3[6] + param_3[5];
    break;
  case 0x14:
    local_2dc = (float)(int)((uint)param_2[1] * 2 + -0xff);
    local_2e0 = (float)(int)((uint)param_2[2] * 2 + -0xff);
    fVar4 = param_3[1] - param_3[2];
    fVar5 = param_3[5] - param_3[6];
    break;
  case 0x15:
    local_2dc = (float)((uint)param_2[1] << 1);
    local_2e0 = (float)((uint)param_2[2] << 1);
    fVar4 = param_3[2] + *param_3;
    fVar5 = param_3[6] + param_3[4];
    break;
  case 0x16:
    local_2dc = (float)(int)((uint)param_2[1] * 2 + -0xff);
    local_2e0 = (float)(int)((uint)param_2[2] * 2 + -0xff);
    fVar4 = *param_3 - param_3[2];
    fVar5 = param_3[4] - param_3[6];
    break;
  case 0x17:
    local_2dc = (float)((uint)param_2[1] << 1);
    local_2e0 = (float)((uint)param_2[2] << 1);
    fVar4 = param_3[1] + *param_3;
    fVar5 = param_3[5] + param_3[4];
    break;
  case 0x18:
    local_2dc = (float)(int)((uint)param_2[1] * 2 + -0xff);
    local_2e0 = (float)(int)((uint)param_2[2] * 2 + -0xff);
    fVar4 = *param_3 - param_3[1];
    fVar5 = param_3[4] - param_3[5];
    break;
  case 0x19:
    local_2dc = (float)((uint)param_2[1] * 3);
    local_2e0 = (float)((uint)param_2[2] * 3);
    fVar4 = param_3[2] + param_3[1] + *param_3;
    fVar5 = param_3[6] + param_3[5] + param_3[4];
    break;
  case 0x1a:
    local_2dc = (float)(int)((param_2[1] - 0x55) * 3);
    local_2e0 = (float)(int)((param_2[2] - 0x55) * 3);
    fVar4 = (param_3[1] + *param_3) - param_3[2];
    fVar5 = (param_3[5] + param_3[4]) - param_3[6];
    break;
  case 0x1b:
    local_2dc = (float)(int)((param_2[1] - 0x55) * 3);
    local_2e0 = (float)(int)((param_2[2] - 0x55) * 3);
    fVar4 = (*param_3 - param_3[1]) + param_3[2];
    fVar5 = (param_3[4] - param_3[5]) + param_3[6];
    break;
  case 0x1c:
    local_2dc = (float)(int)((param_2[1] - 0xaa) * 3);
    local_2e0 = (float)(int)((param_2[2] - 0xaa) * 3);
    fVar4 = (*param_3 - param_3[1]) - param_3[2];
    fVar5 = (param_3[4] - param_3[5]) - param_3[6];
    break;
  case 0x20:
  case 0x21:
  case 0x22:
    local_2d8 = uVar19 - 0x20;
    local_2e0 = (float)param_2[1];
    pbVar21 = param_2 + 3;
    local_2dc = local_2e0 + 1.0;
    fVar4 = param_3[local_2d8];
    fVar5 = param_3[uVar19 - 0x1c];
    goto LAB_00944e32;
  case 0x23:
  case 0x24:
  case 0x25:
    local_2d8 = uVar19 - 0x23;
    local_2dc = (float)param_2[1];
    local_2e0 = (float)param_2[2];
    pbVar21 = param_2 + 7;
    fVar4 = param_3[local_2d8];
    uVar20 = (uint)CONCAT11(param_2[3],param_2[4]);
    fVar5 = param_3[uVar19 - 0x1f];
    local_2e8 = (uint)CONCAT11(param_2[5],param_2[6]);
    goto LAB_00944e3c;
  case 0x26:
  case 0x27:
  case 0x28:
    pbVar21 = param_2 + 1;
    pbVar1 = param_2 + 2;
    iVar22 = uVar19 - 0x26;
    param_2 = param_2 + 3;
    local_2e0 = (float)*pbVar21;
    fVar4 = (float)*pbVar1;
    goto LAB_00945224;
  case 0x29:
  case 0x2a:
  case 0x2b:
    pbVar21 = param_2 + 5;
    iVar22 = uVar19 - 0x29;
    pbVar1 = param_2 + 4;
    pbVar2 = param_2 + 6;
    local_2e0 = (float)CONCAT21(CONCAT11(param_2[1],param_2[2]),param_2[3]) *
                *(float *)(in_ECX + 0x14) * param_1[5] - param_1[iVar22];
    param_2 = param_2 + 7;
    fVar4 = (float)CONCAT21(CONCAT11(*pbVar1,*pbVar21),*pbVar2) * *(float *)(in_ECX + 0x14) *
            param_1[5] - param_1[iVar22];
LAB_00945224:
    fVar5 = param_3[iVar22];
    fVar6 = param_3[iVar22 + 4];
    if (fVar6 <= fVar5) {
      if (fVar5 < local_2e0) {
        return;
      }
      if (fVar4 < fVar6) {
        return;
      }
      iVar22 = 1;
    }
    else {
      if (fVar6 < local_2e0) {
        return;
      }
      if (fVar4 < fVar5) {
        return;
      }
      iVar22 = 0;
    }
    local_280 = *param_3;
    fVar11 = fVar5 - fVar4;
    fStack_27c = param_3[1];
    fStack_278 = param_3[2];
    fStack_274 = param_3[3];
    local_270 = param_3[4];
    fStack_26c = param_3[5];
    fStack_268 = param_3[6];
    fStack_264 = param_3[7];
    if (fVar11 * (fVar6 - fVar4) < 0.0) {
      local_304 = (float *)(fVar11 / (fVar11 - (fVar6 - fVar4)));
      pbStack_308 = (byte *)0x945323;
      FUN_00535aa0();
      param_3[iVar22 * -4 + 4] = (1.0 - local_230) * local_280 + local_230 * local_270;
      param_3[iVar22 * -4 + 5] = (1.0 - local_230) * fStack_27c + local_230 * fStack_26c;
      param_3[iVar22 * -4 + 6] = (1.0 - local_230) * fStack_278 + local_230 * fStack_268;
      param_3[iVar22 * -4 + 7] = (1.0 - local_230) * fStack_274 + local_230 * fStack_264;
    }
    fVar5 = fVar5 - local_2e0;
    if ((fVar6 - local_2e0) * fVar5 < 0.0) {
      local_304 = (float *)(fVar5 / (fVar5 - (fVar6 - local_2e0)));
      pbStack_308 = (byte *)0x94539f;
      FUN_00535aa0();
      pfVar3 = param_3 + iVar22 * 4;
      *pfVar3 = (1.0 - local_220) * local_280 + local_220 * local_270;
      pfVar3[1] = (1.0 - local_220) * fStack_27c + local_220 * fStack_26c;
      pfVar3[2] = (1.0 - local_220) * fStack_278 + local_220 * fStack_268;
      pfVar3[3] = (1.0 - local_220) * fStack_274 + local_220 * fStack_264;
    }
    goto LAB_00944b00;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
    uVar19 = uVar19 - 0x30;
    goto LAB_009456d7;
  case 0x50:
    uVar19 = (uint)param_2[1];
    goto LAB_009456d7;
  case 0x51:
    uVar19 = (uint)CONCAT11(param_2[1],param_2[2]);
    goto LAB_009456d7;
  case 0x52:
    uVar19 = (uint)CONCAT21(CONCAT11(param_2[1],param_2[2]),param_2[3]);
    goto LAB_009456d7;
  case 0x53:
    uVar19 = (uint)param_2[4] + (uint)CONCAT11(param_2[1],param_2[2]) * 0x10000 +
             (uint)param_2[3] * 0x100;
LAB_009456d7:
    iVar22 = uVar19 + (int)param_1[6];
    if (*(undefined4 **)(in_ECX + 0x44) != (undefined4 *)0x0) {
      pbStack_308 = *(byte **)(in_ECX + 100);
      pfStack_30c = (float *)(in_ECX + 0x20);
      ppiStack_310 = (int **)&local_2c1;
      auStack_444[0x4c] = 0x9456fc;
      local_304 = (float *)iVar22;
      pcVar17 = (char *)(**(code **)**(undefined4 **)(in_ECX + 0x44))();
      if (*pcVar17 == '\0') {
        return;
      }
    }
    local_304 = local_210;
    pfStack_30c = (float *)0x945716;
    pbStack_308 = (byte *)iVar22;
    piVar18 = (int *)(**(code **)(**(int **)(in_ECX + 100) + 0x28))();
    pfStack_30c = *(float **)(in_ECX + 0x58);
    if (pfStack_30c != (float *)0x0) {
      ppiStack_310 = (int **)(in_ECX + 0x20);
      auStack_444[0x4c] = (int)&local_2cc + 3;
      auStack_444[0x4b] = 0x94572e;
      pcVar17 = (char *)(**(code **)(*piVar18 + 0x14))();
      if (*pcVar17 == '\0') {
        return;
      }
      *(undefined1 *)(in_ECX + 0x50) = 1;
      *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(*(int *)(in_ECX + 0x58) + 0x14);
      *(int *)(*(int *)(in_ECX + 0x58) + 0x10) = iVar22;
      return;
    }
    fStack_29c = *(float *)(in_ECX + 0x60);
    fStack_2a0 = *(float *)((int)fStack_29c + 8);
    pfStack_30c = *(float **)(in_ECX + 0x5c);
    ppiStack_310 = &local_2a8;
    auStack_444[0x4c] = in_ECX + 0x20;
    auStack_444[0x4b] = 0x945774;
    local_2a8 = piVar18;
    local_2a4 = (float)iVar22;
    (**(code **)(*piVar18 + 0x18))();
    *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(*(int *)(in_ECX + 0x5c) + 4);
    return;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    pbVar21 = param_2 + 1;
    param_2 = param_2 + 2;
    auStack_444[uVar19 + 8] = (uint)*pbVar21;
    goto LAB_009455e4;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    auStack_444[uVar19 + 4] = (uint)CONCAT11(param_2[1],param_2[2]);
    param_2 = param_2 + 3;
    goto LAB_009455e4;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    auStack_444[uVar19] = CONCAT31(CONCAT21(CONCAT11(param_2[1],param_2[2]),param_2[3]),param_2[4]);
    param_2 = param_2 + 5;
LAB_009455e4:
    if (param_1 != &local_2c0) {
      local_2c0 = *param_1;
      fStack_2bc = param_1[1];
      fStack_2b8 = param_1[2];
      fStack_2b4 = param_1[3];
      local_2b0 = param_1[4];
      local_2ac = param_1[5];
      local_2a8 = (int *)param_1[6];
      param_1 = &local_2c0;
    }
    goto LAB_00944b00;
  }
  pbVar21 = param_2 + 4;
LAB_00944e32:
  local_2e8 = (uint)pbVar21[-1];
  uVar20 = 0;
LAB_00944e3c:
  if ((local_2e0 <= fVar5) || (local_2e0 <= fVar4)) {
    param_2 = pbVar21 + local_2e8;
    if ((fVar4 <= local_2dc) || (fVar5 <= local_2dc)) {
      local_250 = *param_3;
      fStack_24c = param_3[1];
      fStack_248 = param_3[2];
      fStack_244 = param_3[3];
      local_2cc = fVar4 - local_2dc;
      local_240 = param_3[4];
      fStack_23c = param_3[5];
      fStack_238 = param_3[6];
      fStack_234 = param_3[7];
      fVar4 = fVar4 - local_2e0;
      local_2c8 = fVar5 - local_2dc;
      fVar5 = fVar5 - local_2e0;
      if (local_2c8 <= local_2cc) {
        if (fVar5 * fVar4 < 0.0) {
          fVar4 = fVar4 / (fVar4 - fVar5);
          local_240 = (1.0 - fVar4) * local_250 + fVar4 * local_240;
          fStack_23c = (1.0 - fVar4) * fStack_24c + fVar4 * fStack_23c;
          fStack_238 = (1.0 - fVar4) * fStack_248 + fVar4 * fStack_238;
          fStack_234 = (1.0 - fVar4) * fStack_244 + fVar4 * fStack_234;
        }
        local_304 = &local_250;
        pfStack_30c = param_1;
        ppiStack_310 = (int **)0x9450a2;
        pbStack_308 = param_2;
        FUN_00944ac0();
        if (local_2c8 * local_2cc < 0.0) {
          local_2c8 = local_2cc / (local_2cc - local_2c8);
          *param_3 = (1.0 - local_2c8) * *param_3 + local_2c8 * param_3[4];
          param_3[1] = (1.0 - local_2c8) * param_3[1] + local_2c8 * param_3[5];
          param_3[2] = (1.0 - local_2c8) * param_3[2] + local_2c8 * param_3[6];
          param_3[3] = (1.0 - local_2c8) * param_3[3] + local_2c8 * param_3[7];
        }
        if (*(float *)(in_ECX + 0x54) < 1.0) {
          local_288 = *(float *)(in_ECX + 0x54);
          fVar4 = *(float *)(in_ECX + 0x34);
          fVar5 = *(float *)(in_ECX + 0x38);
          fVar6 = *(float *)(in_ECX + 0x3c);
          iVar22 = *(int *)(in_ECX + 0x10);
          fVar11 = *(float *)(iVar22 + 0x14);
          fVar12 = *(float *)(iVar22 + 0x18);
          fVar13 = *(float *)(iVar22 + 0x1c);
          fVar14 = *(float *)(in_ECX + 0x24);
          fVar15 = *(float *)(in_ECX + 0x28);
          fVar16 = *(float *)(in_ECX + 0x2c);
          param_3[4] = ((1.0 - local_288) * *(float *)(in_ECX + 0x20) +
                       local_288 * *(float *)(in_ECX + 0x30)) - *(float *)(iVar22 + 0x10);
          param_3[5] = ((1.0 - local_288) * fVar14 + local_288 * fVar4) - fVar11;
          param_3[6] = ((1.0 - local_288) * fVar15 + local_288 * fVar5) - fVar12;
          param_3[7] = ((1.0 - local_288) * fVar16 + local_288 * fVar6) - fVar13;
          local_284 = param_1[5];
          param_3[4] = local_284 * param_3[4];
          param_3[5] = local_284 * param_3[5];
          param_3[6] = local_284 * param_3[6];
          param_3[7] = local_284 * param_3[7];
          fVar4 = param_1[1];
          fVar5 = param_1[2];
          fVar6 = param_1[3];
          param_3[4] = param_3[4] - *param_1;
          param_3[5] = param_3[5] - fVar4;
          param_3[6] = param_3[6] - fVar5;
          param_3[7] = param_3[7] - fVar6;
          if ((local_2d8 < 3) && (local_2dc < param_3[local_2d8 + 4])) {
            return;
          }
        }
        param_2 = param_2 + (uVar20 - local_2e8);
      }
      else {
        if (local_2c8 * local_2cc < 0.0) {
          fVar6 = local_2cc / (local_2cc - local_2c8);
          local_240 = (1.0 - fVar6) * local_250 + fVar6 * local_240;
          fStack_23c = (1.0 - fVar6) * fStack_24c + fVar6 * fStack_23c;
          fStack_238 = (1.0 - fVar6) * fStack_248 + fVar6 * fStack_238;
          fStack_234 = (1.0 - fVar6) * fStack_244 + fVar6 * fStack_234;
        }
        local_304 = &local_250;
        pbStack_308 = param_2 + (uVar20 - local_2e8);
        pfStack_30c = param_1;
        ppiStack_310 = (int **)0x944f42;
        FUN_00944ac0();
        if (fVar5 * fVar4 < 0.0) {
          fVar4 = fVar4 / (fVar4 - fVar5);
          *param_3 = (1.0 - fVar4) * *param_3 + fVar4 * param_3[4];
          param_3[1] = (1.0 - fVar4) * param_3[1] + fVar4 * param_3[5];
          param_3[2] = (1.0 - fVar4) * param_3[2] + fVar4 * param_3[6];
          param_3[3] = (1.0 - fVar4) * param_3[3] + fVar4 * param_3[7];
        }
        if (*(float *)(in_ECX + 0x54) < 1.0) {
          local_28c = *(float *)(in_ECX + 0x54);
          fVar4 = *(float *)(in_ECX + 0x34);
          fVar5 = *(float *)(in_ECX + 0x38);
          fVar6 = *(float *)(in_ECX + 0x3c);
          iVar22 = *(int *)(in_ECX + 0x10);
          fVar11 = *(float *)(iVar22 + 0x14);
          fVar12 = *(float *)(iVar22 + 0x18);
          fVar13 = *(float *)(iVar22 + 0x1c);
          fVar14 = *(float *)(in_ECX + 0x24);
          fVar15 = *(float *)(in_ECX + 0x28);
          fVar16 = *(float *)(in_ECX + 0x2c);
          param_3[4] = ((1.0 - local_28c) * *(float *)(in_ECX + 0x20) +
                       local_28c * *(float *)(in_ECX + 0x30)) - *(float *)(iVar22 + 0x10);
          param_3[5] = ((1.0 - local_28c) * fVar14 + local_28c * fVar4) - fVar11;
          param_3[6] = ((1.0 - local_28c) * fVar15 + local_28c * fVar5) - fVar12;
          param_3[7] = ((1.0 - local_28c) * fVar16 + local_28c * fVar6) - fVar13;
          local_290 = param_1[5];
          param_3[4] = local_290 * param_3[4];
          param_3[5] = local_290 * param_3[5];
          param_3[6] = local_290 * param_3[6];
          param_3[7] = local_290 * param_3[7];
          fVar4 = param_1[1];
          fVar5 = param_1[2];
          fVar6 = param_1[3];
          param_3[4] = param_3[4] - *param_1;
          param_3[5] = param_3[5] - fVar4;
          param_3[6] = param_3[6] - fVar5;
          param_3[7] = param_3[7] - fVar6;
          if ((local_2d8 < 3) && (param_3[local_2d8 + 4] < local_2e0)) {
            return;
          }
        }
      }
    }
  }
  else {
    param_2 = pbVar21 + uVar20;
  }
  goto LAB_00944b00;
}



void FUN_00945880(undefined1 *param_1,undefined4 param_2,int param_3,float *param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
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
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  *(undefined4 *)(in_ECX + 100) = param_2;
  *(int *)(in_ECX + 0x10) = param_3;
  *(undefined4 *)(in_ECX + 0x58) = param_5;
  *(undefined4 *)(in_ECX + 0x54) = 0x3f800000;
  uVar1 = *(undefined4 *)(param_3 + 0x20);
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  *(float *)(in_ECX + 0x14) = 1.0 / *(float *)(param_3 + 0x1c);
  fVar2 = *(float *)(param_3 + 0x10);
  fVar3 = *(float *)(param_3 + 0x14);
  fVar4 = *(float *)(param_3 + 0x18);
  fVar5 = *(float *)(param_3 + 0x1c);
  local_3c = *(float *)(param_3 + 0x1c) * 1.5258789e-05;
  fVar6 = param_4[1];
  fVar7 = param_4[2];
  fVar8 = param_4[3];
  fVar9 = param_4[4];
  fVar10 = param_4[5];
  fVar11 = param_4[6];
  fVar12 = param_4[7];
  local_30 = local_3c * (*param_4 - fVar2);
  fStack_2c = local_3c * (fVar6 - fVar3);
  fStack_28 = local_3c * (fVar7 - fVar4);
  fStack_24 = local_3c * (fVar8 - fVar5);
  *(float *)(in_ECX + 0x20) = *param_4;
  *(float *)(in_ECX + 0x24) = fVar6;
  *(float *)(in_ECX + 0x28) = fVar7;
  *(float *)(in_ECX + 0x2c) = fVar8;
  fVar6 = param_4[5];
  fVar7 = param_4[6];
  fVar8 = param_4[7];
  *(float *)(in_ECX + 0x30) = param_4[4];
  *(float *)(in_ECX + 0x34) = fVar6;
  *(float *)(in_ECX + 0x38) = fVar7;
  *(float *)(in_ECX + 0x3c) = fVar8;
  *(float *)(in_ECX + 0x40) = param_4[8];
  *(float *)(in_ECX + 0x44) = param_4[9];
  *(undefined1 *)(in_ECX + 0x50) = 0;
  local_38 = 0;
  local_40 = 0;
  local_34 = 0;
  local_20 = local_3c * (fVar9 - fVar2);
  fStack_1c = local_3c * (fVar10 - fVar3);
  fStack_18 = local_3c * (fVar11 - fVar4);
  fStack_14 = local_3c * (fVar12 - fVar5);
  FUN_00944ac0(&local_50,uVar1,&local_30);
  *param_1 = *(undefined1 *)(in_ECX + 0x50);
  return;
}



void FUN_00945960(undefined4 param_1,int param_2,float *param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
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
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  *(undefined4 *)(in_ECX + 100) = param_1;
  *(undefined4 *)(in_ECX + 0x60) = param_4;
  *(int *)(in_ECX + 0x5c) = param_5;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_5 + 4);
  *(int *)(in_ECX + 0x10) = param_2;
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  *(float *)(in_ECX + 0x14) = 1.0 / *(float *)(param_2 + 0x1c);
  fVar2 = *(float *)(param_2 + 0x10);
  fVar3 = *(float *)(param_2 + 0x14);
  fVar4 = *(float *)(param_2 + 0x18);
  fVar5 = *(float *)(param_2 + 0x1c);
  local_3c = *(float *)(param_2 + 0x1c) * 1.5258789e-05;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  fVar9 = param_3[4];
  fVar10 = param_3[5];
  fVar11 = param_3[6];
  fVar12 = param_3[7];
  local_30 = local_3c * (*param_3 - fVar2);
  fStack_2c = local_3c * (fVar6 - fVar3);
  fStack_28 = local_3c * (fVar7 - fVar4);
  fStack_24 = local_3c * (fVar8 - fVar5);
  *(float *)(in_ECX + 0x20) = *param_3;
  *(float *)(in_ECX + 0x24) = fVar6;
  *(float *)(in_ECX + 0x28) = fVar7;
  *(float *)(in_ECX + 0x2c) = fVar8;
  fVar6 = param_3[5];
  fVar7 = param_3[6];
  fVar8 = param_3[7];
  *(float *)(in_ECX + 0x30) = param_3[4];
  *(float *)(in_ECX + 0x34) = fVar6;
  *(float *)(in_ECX + 0x38) = fVar7;
  *(float *)(in_ECX + 0x3c) = fVar8;
  *(float *)(in_ECX + 0x40) = param_3[8];
  *(float *)(in_ECX + 0x44) = param_3[9];
  *(undefined1 *)(in_ECX + 0x50) = 0;
  local_38 = 0;
  local_40 = 0;
  local_34 = 0;
  local_20 = local_3c * (fVar9 - fVar2);
  fStack_1c = local_3c * (fVar10 - fVar3);
  fStack_18 = local_3c * (fVar11 - fVar4);
  fStack_14 = local_3c * (fVar12 - fVar5);
  FUN_00944ac0(&local_50,uVar1,&local_30);
  return;
}



undefined8 FUN_00945a30(void)

{
  undefined8 uVar1;
  
  uVar1 = rdtsc();
  return uVar1;
}



void FUN_00945a50(void)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  undefined8 uVar4;
  longlong lVar5;
  int local_4c;
  double local_48;
  LARGE_INTEGER LStack_30;
  LARGE_INTEGER LStack_28;
  int iStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_c;
  
  uVar4 = CONCAT44(DAT_00ba94f4,DAT_00ba94f0);
  if (DAT_00ba94f0 == 0 && DAT_00ba94f4 == 0) {
    local_4c = 10;
    local_48 = 1000000.0;
    do {
      uVar4 = (**(code **)(*in_ECX + 8))();
      iStack_c = (int)((ulonglong)uVar4 >> 0x20);
      QueryPerformanceCounter(&LStack_28);
      iVar2 = 5000;
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      lVar5 = (**(code **)(*in_ECX + 8))();
      QueryPerformanceCounter(&LStack_30);
      QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_00ba94f0);
      iStack_20 = LStack_30.s.LowPart - LStack_28._0_4_;
      uVar3 = (LStack_30.s.HighPart - LStack_28._4_4_) -
              (uint)(LStack_30.s.LowPart < LStack_28.s.LowPart);
      uStack_1c = uVar3 & 0x7fffffff;
      uStack_14 = uVar3 & 0x80000000;
      uStack_18 = 0;
      dVar1 = (-(double)(longlong)
                        (((ulonglong)
                          (((int)((ulonglong)lVar5 >> 0x20) - iStack_c) -
                          (uint)((uint)lVar5 < (uint)uVar4)) & 0x80000000) << 0x20) +
              (double)(lVar5 - CONCAT44(iStack_c,(uint)uVar4) & 0x7fffffffffffffff)) /
              (-(double)(longlong)(((ulonglong)uVar3 & 0x80000000) << 0x20) +
              (double)(CONCAT44(uVar3,iStack_20) & 0x7fffffffffffffff));
      if (dVar1 < local_48) {
        local_48 = dVar1;
      }
      local_4c = local_4c + -1;
    } while (local_4c != 0);
    uStack_14 = DAT_00ba94f4 & 0x80000000;
    uStack_18 = 0;
    uVar4 = FUN_009828f6();
  }
  DAT_00ba94f4 = (uint)((ulonglong)uVar4 >> 0x20);
  DAT_00ba94f0 = (int)uVar4;
  return;
}



void FUN_00945c10(void)

{
  int in_ECX;
  
  if (*(SOCKET *)(in_ECX + 0x20) != 0xffffffff) {
    closesocket(*(SOCKET *)(in_ECX + 0x20));
    *(undefined4 *)(in_ECX + 0x20) = 0xffffffff;
  }
  return;
}



int FUN_00945c30(char *param_1,int param_2)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[8] != 0xffffffff) {
    iVar1 = recv(in_ECX[8],param_1,param_2,0);
    if ((0 < iVar1) && (iVar1 != -1)) {
      return iVar1;
    }
    iVar1 = WSAGetLastError();
    if (iVar1 != 0x2733) {
      (**(code **)(*in_ECX + 0xc))();
    }
  }
  return 0;
}



int FUN_00945c70(char *param_1,int param_2)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[8] != 0xffffffff) {
    iVar1 = send(in_ECX[8],param_1,param_2,0);
    if ((0 < iVar1) && (iVar1 != -1)) {
      return iVar1;
    }
    iVar1 = WSAGetLastError();
    if (iVar1 != 0x2733) {
      (**(code **)(*in_ECX + 0xc))();
    }
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00945dd0(u_short param_1)

{
  SOCKET SVar1;
  int iVar2;
  int *in_ECX;
  char acStack_18 [4];
  sockaddr sStack_14;
  undefined4 local_4;
  
  local_4 = DAT_00b30aac;
  (**(code **)(*in_ECX + 0xc))();
  SVar1 = socket(2,1,0);
  in_ECX[8] = SVar1;
  if (SVar1 != 0xffffffff) {
    sStack_14.sa_family = 2;
    sStack_14.sa_data[2] = '\0';
    sStack_14.sa_data[3] = '\0';
    sStack_14.sa_data[4] = '\0';
    sStack_14.sa_data[5] = '\0';
    sStack_14.sa_data._0_2_ = htons(param_1);
    acStack_18[0] = '\x01';
    acStack_18[1] = '\0';
    acStack_18[2] = '\0';
    acStack_18[3] = '\0';
    setsockopt(in_ECX[8],0xffff,4,acStack_18,4);
    iVar2 = bind(in_ECX[8],&sStack_14,0x10);
    if (iVar2 == -1) {
      (**(code **)(*in_ECX + 0xc))();
      return 1;
    }
    iVar2 = listen(in_ECX[8],2);
    if (iVar2 != -1) {
      return 0;
    }
    (**(code **)(*in_ECX + 0xc))();
  }
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00945eb0(void)

{
  int iVar1;
  undefined1 local_394 [512];
  WSADATA local_194;
  undefined4 local_4;
  
  local_4 = DAT_00b30aac;
  if ((_DAT_00ba94fc & 1) == 0) {
    _DAT_00ba94fc = _DAT_00ba94fc | 1;
    DAT_00ba94f8 = '\0';
  }
  else if (DAT_00ba94f8 != '\0') {
    return;
  }
  iVar1 = WSAStartup(0x202,&local_194);
  if (iVar1 == -1) {
    FUN_008bbfb0(local_394,0x200,1);
    FUN_008bbdb0("(Windows)WSAStartup failed with error!");
    (**(code **)(*DAT_00ba7fb0 + 8))(3,0x321825f8,local_394,".\\stream\\impl\\hkBsdSocket.cpp",0x41)
    ;
    FUN_008bc000();
  }
  DAT_00ba94f8 = 1;
  return;
}



void FUN_00945f70(int param_1)

{
  SOCKET SVar1;
  int *in_ECX;
  
  FUN_00918100();
  *in_ECX = (int)&PTR_FUN_00aa28fc;
  in_ECX[8] = param_1;
  FUN_00945eb0();
  if (in_ECX[8] == -1) {
    (**(code **)(*in_ECX + 0xc))();
    SVar1 = socket(2,1,0);
    in_ECX[8] = SVar1;
  }
  return;
}



void FUN_00945fb0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00aa28fc;
  if (in_ECX[8] != 0xffffffff) {
    closesocket(in_ECX[8]);
    in_ECX[8] = 0xffffffff;
  }
  in_ECX[5] = &PTR_LAB_00a45e5c;
  in_ECX[2] = &PTR_LAB_00a45e5c;
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



undefined4 FUN_00946130(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int in_ECX;
  
  FUN_00918440(0x11);
  iVar1 = param_2;
  iVar3 = iVar1;
  if (*(int *)(*(int *)(in_ECX + 0x2c) + 0x48) != 0) {
    pcVar2 = (char *)FUN_0090d380(&param_2);
    if (*pcVar2 != '\0') {
      iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x2c) + 0x48) + 0xc))(param_1);
      if (iVar3 == 0) {
        iVar3 = iVar1;
      }
    }
  }
  FUN_009181b0(0x21);
  FUN_00918460(param_1,0);
  FUN_00918460(iVar3,0);
  return 0x11;
}



void FUN_009461b0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  FUN_00918440(0xd);
  FUN_009181b0(0x20);
  FUN_00918460(&DAT_00ba8788,0);
  FUN_009181b0(DAT_00b2fde4);
  FUN_009181b0(DAT_00b2fde5);
  FUN_009181b0(DAT_00b2fde6);
  FUN_009181b0(DAT_00b2fde7);
  iVar1 = *(int *)(in_ECX + 0x24);
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 0x28)) {
    do {
      FUN_00946130(*(undefined4 *)(*(int *)(iVar1 + 0x24) + iVar2 * 8),
                   *(undefined4 *)(*(int *)(iVar1 + 0x24) + 4 + iVar2 * 8));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 0x28));
  }
  return;
}



int * FUN_00946250(int *param_1,int param_2)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  int in_ECX;
  uint uVar3;
  int *in_EDX;
  
  uVar3 = in_ECX - 1;
  if (uVar3 < 0x1a) {
    param_2 = param_2 * 2;
    do {
      switch((&switchD_00946277::switchdataD_0094630c)
             [(&switchD_00946277::switchdataD_00946324)[uVar3]]) {
      case (undefined *)0x94627e:
        in_EDX = in_EDX + (uint)*(ushort *)(*param_1 + 2 + param_2) * 4;
        uVar3 = 0xc;
        break;
      case (undefined *)0x946297:
        uVar1 = *(ushort *)(*param_1 + 2 + param_2);
        iVar2 = FUN_00940cf0();
        in_EDX = (int *)(iVar2 * (uint)uVar1 + *in_EDX);
        uVar3 = (uint)*(byte *)(in_EAX + 0xd);
        break;
      case (undefined *)0x9462bc:
        if (in_EAX == 0) {
          return (int *)0x0;
        }
        if (*(int *)(in_EAX + 4) == 0) {
          return (int *)0x0;
        }
        iVar2 = FUN_0090d1f0();
        if (iVar2 == 0) {
          return (int *)0x0;
        }
        in_EAX = FUN_0090d260(*(undefined2 *)(*param_1 + 2 + param_2));
        uVar3 = (uint)*(byte *)(in_EAX + 0xc);
        in_EDX = (int *)((int)in_EDX + (uint)*(ushort *)(in_EAX + 0x12));
        break;
      case (undefined *)0x9462fb:
        goto switchD_00946277_caseD_9462fb;
      case (undefined *)0x946303:
        return in_EDX;
      }
      param_2 = param_2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 < 0x1a);
  }
switchD_00946277_caseD_9462fb:
  return (int *)0x0;
}



undefined4 FUN_00946340(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  
  FUN_00918440(9);
  FUN_009181b0(0x22);
  FUN_00918460(param_1,0);
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x24)) {
    piVar4 = *(int **)(in_ECX + 0x20);
    while (*piVar4 != param_1) {
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 2;
      if (*(int *)(in_ECX + 0x24) <= iVar2) {
        return 9;
      }
    }
    iVar3 = *(int *)(in_ECX + 0x24) + -1;
    *(int *)(in_ECX + 0x24) = iVar3;
    iVar1 = *(int *)(in_ECX + 0x20);
    *(undefined4 *)(iVar1 + iVar2 * 8) = *(undefined4 *)(iVar1 + iVar3 * 8);
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = *(undefined4 *)(iVar1 + 4 + iVar3 * 8);
  }
  return 9;
}



void FUN_009463e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *(undefined1 *)(in_ECX + 3) = 1;
  in_ECX[2] = &PTR_LAB_00a9d1c0;
  *in_ECX = &PTR_FUN_00aa2950;
  in_ECX[2] = &PTR_LAB_00aa2938;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0x80000000;
  if ((int)param_1[1] < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)*param_1 + 4);
  }
  in_ECX[0xb] = iVar1;
  if (iVar1 != 0) {
    if (*(short *)(iVar1 + 4) != 0) {
      *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    }
    FUN_008ca4d0(&LAB_009463b0,in_ECX);
  }
  return;
}



void FUN_00946470(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int iVar3;
  
  iVar1 = in_ECX[0xb];
  *in_ECX = &PTR_FUN_00aa2950;
  in_ECX[2] = &PTR_LAB_00aa2938;
  if (iVar1 != 0) {
    iVar3 = 0;
    if (0 < *(int *)(iVar1 + 0x28)) {
      do {
        FUN_00946340(*(undefined4 *)(*(int *)(iVar1 + 0x24) + iVar3 * 8));
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar1 + 0x28));
    }
    FUN_008ca250(&LAB_009463b0);
    puVar2 = (undefined4 *)in_ECX[0xb];
    if ((*(short *)(puVar2 + 1) != 0) &&
       (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
       *(short *)((int)puVar2 + 6) == 0)) {
      (**(code **)*puVar2)(1);
    }
  }
  if (-1 < (int)in_ECX[10]) {
    FUN_008a75d0(in_ECX[8],in_ECX[10] << 3,0x14);
  }
  in_ECX[2] = &PTR_LAB_00a9d1c0;
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00946550(void)

{
  DAT_00ba9500 = FUN_00947c50("ObjectInspection",&LAB_00946520);
  return;
}



void FUN_00946570(byte param_1)

{
  FUN_00946470();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



int FUN_009465a0(int param_1,int param_2,char param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  int *piVar8;
  int unaff_EBX;
  int iVar9;
  int unaff_retaddr;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  uint uStack_20;
  int iStack_1c;
  uint uStack_18;
  undefined1 auStack_14 [20];
  
  FUN_0090bba0(&DAT_00a9c288);
  iVar6 = param_2;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0x80000000;
  iVar5 = iVar6;
  if (((*(int *)(*(int *)(in_ECX + 0x2c) + 0x48) != 0) &&
      (pcVar4 = (char *)FUN_0090d380(&param_2), *pcVar4 != '\0')) &&
     (iVar5 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x2c) + 0x48) + 0xc))(param_1), iVar5 == 0))
  {
    iVar5 = iVar6;
  }
  piVar3 = param_4;
  if (param_3 != '\0') {
    uVar1 = param_4[1];
    iVar6 = 0;
    if (0 < (int)uVar1) {
      piVar8 = (int *)*param_4;
      do {
        if (*piVar8 == param_1) break;
        iVar6 = iVar6 + 1;
        piVar8 = piVar8 + 2;
      } while (iVar6 < param_4[1]);
    }
    if (iVar6 < (int)uVar1) {
      if (-1 < (int)local_24) {
        FUN_008a75d0(local_2c,(local_24 & 0x3fffffff) * 0x18,0x14);
      }
      return 0;
    }
    if (uVar1 == (param_4[2] & 0x3fffffffU)) {
      FUN_008a6ee0(param_4,8);
    }
    piVar8 = (int *)(*piVar3 + piVar3[1] * 8);
    piVar3[1] = piVar3[1] + 1;
    *piVar8 = param_1;
    piVar8[1] = iVar5;
  }
  uStack_20 = 0;
  iStack_1c = 0;
  uStack_18 = 0x80000000;
  FUN_008bc030(&uStack_20,1);
  iVar6 = FUN_009582e0(auStack_14,&local_30,param_1,0,param_1,iVar5,&local_2c);
  if ((iVar6 == iStack_1c) && (0 < iVar6)) {
    iVar6 = iVar6 + 1;
    param_2 = iVar6;
    FUN_00918440(iVar6);
    FUN_009181b0(0x24);
    FUN_00918390(uStack_20,iStack_1c);
    if (((char)param_1 != '\0') && (iVar5 = 0, 0 < local_30)) {
      iVar9 = 0;
      iVar6 = unaff_retaddr;
      do {
        uVar2 = *(undefined4 *)(iVar9 + 8 + unaff_EBX);
        iVar7 = FUN_009465a0(uVar2,*(undefined4 *)(iVar9 + 0x10 + unaff_EBX),
                             CONCAT31((int3)((uint)uVar2 >> 8),1),piVar3);
        iVar6 = iVar6 + iVar7;
        iVar5 = iVar5 + 1;
        iVar9 = iVar9 + 0x18;
      } while (iVar5 < local_30);
    }
    FUN_008bc2e0();
    if (-1 < (int)uStack_20) {
      FUN_008a75d0(local_28,uStack_20 & 0x3fffffff,0x14);
    }
    if (-1 < (int)local_2c) {
      FUN_008a75d0(unaff_EBX,(local_2c & 0x3fffffff) * 0x18,0x14);
    }
    return iVar6;
  }
  FUN_008bc2e0();
  if (-1 < (int)uStack_18) {
    FUN_008a75d0(uStack_20,uStack_18 & 0x3fffffff,0x14);
  }
  if (-1 < (int)local_24) {
    FUN_008a75d0(local_2c,(local_24 & 0x3fffffff) * 0x18,0x14);
  }
  return -1;
}



/* WARNING: Removing unreachable block (ram,0x009468af) */

void FUN_00946880(void)

{
  int in_ECX;
  uint uVar1;
  uint extraout_ECX;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  uVar1 = *(uint *)(in_ECX + 0x1c);
  iVar2 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = -0x80000000;
  if (0 < (int)uVar1) {
    do {
      local_8 = 0;
      FUN_009465a0(*(undefined4 *)(*(int *)(in_ECX + 0x18) + iVar2 * 8),
                   *(undefined4 *)(*(int *)(in_ECX + 0x18) + 4 + iVar2 * 8),uVar1 & 0xffffff00,
                   &local_c);
      iVar2 = iVar2 + 1;
      uVar1 = extraout_ECX;
    } while (iVar2 < *(int *)(in_ECX + 0x1c));
  }
  if (-1 < local_4) {
    FUN_008a75d0(local_c,local_4 << 3,0x14);
  }
  return;
}



void FUN_00946cb0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00aa297c;
  in_ECX[2] = &PTR_LAB_00aa2964;
  if (-1 < (int)in_ECX[0x10]) {
    FUN_008a75d0(in_ECX[0xe],in_ECX[0x10] & 0x3fffffff,0x14);
  }
  if (-1 < (int)in_ECX[0xd]) {
    FUN_008a75d0(in_ECX[0xb],in_ECX[0xd] & 0x3fffffff,0x14);
  }
  if (-1 < (int)in_ECX[10]) {
    FUN_008a75d0(in_ECX[8],in_ECX[10] << 2,0x14);
  }
  in_ECX[2] = &PTR_LAB_00a9d1c0;
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00946d90(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined1 auStack_2c [20];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  float fStack_8;
  undefined4 uStack_4;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = &PTR_LAB_00a9d1c0;
  *(undefined1 *)(in_ECX + 3) = 1;
  *in_ECX = &PTR_FUN_00aa297c;
  in_ECX[2] = &PTR_LAB_00aa2964;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0x80000000;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0x80000000;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0x80000000;
  FUN_009584c0();
  local_18 = 0;
  local_c = 0;
  local_14 = 0;
  local_10 = 1;
  uVar6 = FUN_00917fd0();
  uVar1 = (uint)(uVar6 >> 0x20);
  uStack_3c = uVar1 & 0x80000000;
  uStack_40 = 0;
  uStack_4 = 0x3f800000;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x80000000;
  fStack_8 = (float)((float10)1000.0 /
                    (-(float10)(longlong)(((ulonglong)uVar1 & 0x80000000) << 0x20) +
                    (float10)(uVar6 & 0x7fffffffffffffff)));
  FUN_008bc030(in_ECX + 0xb,1);
  FUN_0090bba0(&DAT_00a9c288);
  FUN_009582e0(auStack_2c,&uStack_40,1,0,&local_18,&DAT_00ba99f8,&uStack_38);
  FUN_008bc2e0();
  if (-1 < (int)uStack_30) {
    FUN_008a75d0(uStack_38,(uStack_30 & 0x3fffffff) * 0x18,0x14);
  }
  uVar1 = in_ECX[10] & 0x3fffffff;
  if ((int)uVar1 < param_1[1]) {
    if (-1 < (int)in_ECX[10]) {
      FUN_008a75d0(in_ECX[8],uVar1 << 2,0x14);
    }
    uVar2 = FUN_008a7560(param_1[1] << 2,0x14);
    in_ECX[8] = uVar2;
    in_ECX[10] = in_ECX[10] & 0x40000000 | param_1[1];
  }
  iVar4 = param_1[1];
  puVar3 = (undefined4 *)in_ECX[8];
  in_ECX[9] = iVar4;
  if (0 < iVar4) {
    iVar5 = *param_1 - (int)puVar3;
    do {
      *puVar3 = *(undefined4 *)(iVar5 + (int)puVar3);
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



void FUN_00946f80(byte param_1)

{
  FUN_00946cb0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x009471ca) */

void FUN_00946fb0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int unaff_FS_OFFSET;
  char local_5d;
  int local_5c;
  int local_58;
  undefined1 local_54 [4];
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  undefined1 local_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined **local_14;
  undefined2 local_e;
  int *local_c;
  int local_8;
  int local_4;
  
  iVar1 = _tls_index;
  iVar9 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0x80000000;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0x80000000;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0x80000000;
    local_5c = in_ECX;
    if (0 < *(int *)(in_ECX + 0x1c)) {
      piVar6 = *(int **)(in_ECX + 0x18);
LAB_00947010:
      if (*(int *)(*piVar6 + 0xc) < 1) goto code_r0x00947018;
      iVar5 = (*(int **)(in_ECX + 0x18))[iVar9];
      if (0 < *(int *)(iVar5 + 0xc)) {
        local_50 = FUN_008a7560(*(int *)(iVar5 + 0xc) << 2,0x14);
        local_48 = local_48 & 0x40000000 | *(uint *)(iVar5 + 0xc);
      }
      local_4c = *(int *)(iVar5 + 0xc);
      iVar7 = 0;
      iVar5 = *(int *)(iVar5 + 8);
      if (0 < local_4c) {
        do {
          *(undefined4 *)(local_50 + iVar7 * 4) = *(undefined4 *)(iVar5 + iVar7 * 4);
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_4c);
      }
      iVar9 = *(int *)(*(int *)(local_5c + 0x18) + iVar9 * 4);
      if ((int)(local_3c & 0x3fffffff) < *(int *)(iVar9 + 0x28)) {
        if (-1 < (int)local_3c) {
          FUN_008a75d0(local_44,(local_3c & 0x3fffffff) << 2,0x14);
        }
        local_44 = FUN_008a7560(*(int *)(iVar9 + 0x28) << 2,0x14);
        local_3c = local_3c & 0x40000000 | *(uint *)(iVar9 + 0x28);
      }
      local_40 = *(uint *)(iVar9 + 0x28);
      iVar5 = 0;
      iVar9 = *(int *)(iVar9 + 0x24);
      if (0 < (int)local_40) {
        do {
          *(undefined4 *)(local_44 + iVar5 * 4) = *(undefined4 *)(iVar9 + iVar5 * 4);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)local_40);
      }
      if (local_4c == 0) goto LAB_00947149;
      goto LAB_009471b9;
    }
LAB_00947149:
    iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + iVar1 * 4);
    uVar3 = *(undefined4 *)(iVar1 + 0x1a0);
    uVar2 = *(undefined4 *)(iVar1 + 0x1a4);
    if ((local_48 & 0x3fffffff) == 0) {
      FUN_008a6ee0(&local_50,4);
    }
    *(undefined4 *)(local_50 + local_4c * 4) = uVar3;
    local_4c = local_4c + 1;
    if (local_40 == (local_3c & 0x3fffffff)) {
      FUN_008a6ee0(&local_44,4);
    }
    *(undefined4 *)(local_44 + local_40 * 4) = uVar2;
    local_40 = local_40 + 1;
LAB_009471b9:
    iVar1 = local_5c;
    piVar6 = (int *)(local_5c + 0x30);
    iVar7 = 0;
    iVar5 = 0;
    *(undefined4 *)(local_5c + 0x34) = 0;
    local_58 = 0;
    FUN_008b0e10();
    local_38 = 0;
    local_34 = 0;
    local_30 = 0x80000000;
    iVar9 = local_58;
    if (0 < local_4c) {
      do {
        FUN_009584f0(*(undefined4 *)(local_50 + iVar7 * 4),*(undefined4 *)(local_44 + iVar7 * 4),
                     local_2c);
        iVar5 = iVar5 + (*(int *)(local_44 + iVar7 * 4) - *(int *)(local_50 + iVar7 * 4));
        iVar7 = iVar7 + 1;
        iVar9 = iVar5;
      } while (iVar7 < local_4c);
    }
    local_58 = iVar9;
    uVar3 = FUN_008b0d00();
    FUN_008b0d80(&local_5d,uVar3);
    while (local_5d != '\0') {
      if (local_34 == (local_30 & 0x3fffffff)) {
        FUN_008a6ee0(&local_38,0x10);
      }
      piVar8 = (int *)(local_34 * 0x10 + local_38);
      local_34 = local_34 + 1;
      iVar9 = FUN_008b0d20(uVar3);
      *piVar8 = iVar9;
      piVar8[1] = iVar9 >> 0x1f;
      iVar9 = FUN_008b0d30(uVar3);
      piVar8[2] = iVar9;
      uVar3 = FUN_008b0d50(uVar3);
      FUN_008b0d80(&local_5d,uVar3);
    }
    local_8 = *(int *)(iVar1 + 0x34);
    local_e = 1;
    local_14 = &PTR_FUN_00a98330;
    local_4 = 1;
    iVar9 = local_8 + 1;
    uVar4 = *(uint *)(iVar1 + 0x38) & 0x3fffffff;
    local_c = piVar6;
    if ((int)uVar4 < iVar9) {
      iVar1 = uVar4 * 2;
      if (iVar9 < iVar1) {
        iVar9 = iVar1;
      }
      FUN_008a6e40(piVar6,iVar9,1);
    }
    *(undefined1 *)(local_c[1] + *local_c) = 0;
    FUN_0090bba0(&DAT_00a9c288);
    FUN_009582e0(&local_14,local_54,1,0,&local_38,&DAT_00ba99d4,&local_20);
    piVar8 = local_c;
    local_14 = &PTR_FUN_00a98330;
    if ((local_4 == 0) && (local_c != (int *)0x0)) {
      if (-1 < local_c[2]) {
        FUN_008a75d0(*local_c,local_c[2] & 0x3fffffff,0x14);
      }
      (**(code **)(*DAT_00ba7d98 + 0x14))(piVar8,0xc,0x14);
    }
    local_14 = &PTR_LAB_00a45e5c;
    if (-1 < (int)local_30) {
      FUN_008a75d0(local_38,local_30 << 4,0x14);
    }
    FUN_008b0e60();
    iVar1 = local_4c;
    if (iVar5 < 1) {
      if (-1 < (int)local_3c) {
        FUN_008a75d0(local_44,local_3c << 2,0x14);
      }
      if (-1 < (int)local_48) {
        FUN_008a75d0(local_50,local_48 << 2,0x14);
      }
    }
    else {
      iVar9 = *(int *)(local_5c + 0x34);
      iVar5 = *(int *)(local_5c + 0x28);
      FUN_00918440(iVar9 + local_4c * 4 + iVar5 + 0xd + local_58);
      FUN_009181b0(10);
      FUN_00918440(iVar5);
      if (0 < iVar5) {
        FUN_00918390(*(undefined4 *)(local_5c + 0x24),iVar5);
      }
      FUN_00918440(iVar9);
      if (0 < iVar9) {
        FUN_00918390(*piVar6,iVar9);
      }
      FUN_00918440(iVar1);
      iVar9 = 0;
      if (0 < iVar1) {
        do {
          iVar5 = *(int *)(local_44 + iVar9 * 4) - *(int *)(local_50 + iVar9 * 4);
          FUN_00918440(iVar5);
          if (0 < iVar5) {
            FUN_00918390(*(undefined4 *)(local_50 + iVar9 * 4),iVar5);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar1);
      }
      if (-1 < (int)local_3c) {
        FUN_008a75d0(local_44,local_3c << 2,0x14);
      }
      if (-1 < (int)local_48) {
        FUN_008a75d0(local_50,local_48 << 2,0x14);
      }
    }
    if (-1 < (int)local_18) {
      FUN_008a75d0(local_20,(local_18 & 0x3fffffff) * 0x18,0x14);
    }
  }
  return;
code_r0x00947018:
  iVar9 = iVar9 + 1;
  piVar6 = piVar6 + 1;
  if (*(int *)(in_ECX + 0x1c) <= iVar9) goto LAB_00947149;
  goto LAB_00947010;
}



void FUN_00947630(void)

{
  DAT_00ba9504 = FUN_00947c50("Statistics",&LAB_00947600);
  return;
}



void FUN_009477c0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = &PTR_LAB_00a9d1c0;
  *(undefined1 *)(in_ECX + 3) = 1;
  puVar1 = in_ECX + 8;
  *puVar1 = &PTR_LAB_00aa2984;
  *in_ECX = &PTR_FUN_00aa2a04;
  in_ECX[2] = &PTR_LAB_00aa29ec;
  *puVar1 = &PTR_LAB_00aa29b8;
  if (DAT_00ba9508 == 0) {
    DAT_00ba9508 = FUN_00947c50("DebugDisplay",&LAB_00947860);
  }
  FUN_008a7a80(puVar1);
  return;
}



void FUN_00947890(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  byte unaff_retaddr;
  
  puVar1 = in_ECX + 8;
  *in_ECX = &PTR_FUN_00aa2a04;
  in_ECX[2] = &PTR_LAB_00aa29ec;
  *puVar1 = &PTR_LAB_00aa29b8;
  FUN_008a77d0(puVar1);
  *puVar1 = &PTR_LAB_00aa2984;
  in_ECX[2] = &PTR_LAB_00a9d1c0;
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((unaff_retaddr & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_009478f0(void)

{
  DAT_00ba9508 = FUN_00947c50("DebugDisplay",&LAB_00947860);
  return;
}



void FUN_00947910(undefined1 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 8) + 0xc))(param_1,param_2 * param_3);
  if (*(char *)(in_ECX + 0xc) != '\0') {
    if (param_2 == 2) {
      if (0 < param_3) {
        do {
          uVar1 = *param_1;
          *param_1 = param_1[1];
          param_1[1] = uVar1;
          param_1 = param_1 + 2;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
    }
    else if (param_2 == 4) {
      if (0 < param_3) {
        param_1 = param_1 + 2;
        do {
          uVar1 = param_1[-2];
          param_1[-2] = param_1[1];
          param_1[1] = uVar1;
          uVar1 = param_1[-1];
          param_1[-1] = *param_1;
          *param_1 = uVar1;
          param_1 = param_1 + 4;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
        return;
      }
    }
    else if ((param_2 == 8) && (0 < param_3)) {
      param_1 = param_1 + 6;
      do {
        uVar1 = param_1[-6];
        param_1[-6] = param_1[1];
        param_1[1] = uVar1;
        uVar1 = param_1[-5];
        param_1[-5] = *param_1;
        *param_1 = uVar1;
        uVar1 = param_1[-4];
        param_1[-4] = param_1[-1];
        param_1[-1] = uVar1;
        uVar1 = param_1[-3];
        param_1[-3] = param_1[-2];
        param_1[-2] = uVar1;
        param_1 = param_1 + 8;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return;
    }
  }
  return;
}



void FUN_009479f0(int param_1,undefined1 param_2)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a98328;
  in_ECX[2] = param_1;
  *(undefined1 *)(in_ECX + 3) = param_2;
  if (*(short *)(param_1 + 4) != 0) {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  }
  return;
}



undefined4 FUN_00947a20(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_008a7720();
  uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + param_1 * 0xc);
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(in_ECX + 0x18));
  return uVar1;
}



int FUN_00947a50(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  FUN_008a7720();
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x10)) {
    iVar3 = 0;
    do {
      iVar1 = FUN_008b1770(*(undefined4 *)(iVar3 + *(int *)(in_ECX + 0xc)),param_1);
      if (iVar1 == 0) {
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)(in_ECX + 0x18));
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < *(int *)(in_ECX + 0x10));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(in_ECX + 0x18));
  return -1;
}



undefined4 FUN_00947ac0(int param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  int in_ECX;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(in_ECX + 0x18);
  FUN_008a7720();
  uVar1 = (**(code **)(*(int *)(in_ECX + 0xc) + 4 + param_1 * 0xc))(param_2);
  LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}



void FUN_00947b00(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00aa2a0c;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0x80000000;
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x12);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    InitializeCriticalSectionAndSpinCount(lpCriticalSection,2000);
    in_ECX[6] = lpCriticalSection;
    return;
  }
  in_ECX[6] = 0;
  return;
}



void FUN_00947b60(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 *in_ECX;
  int iVar2;
  int iVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)in_ECX[6];
  *in_ECX = &PTR_FUN_00aa2a0c;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    (**(code **)(*DAT_00ba7d98 + 0x14))(lpCriticalSection,0x18,0x12);
  }
  iVar2 = in_ECX[4];
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(in_ECX[3] + iVar3) + -4) + -1;
      *(int *)(*(int *)(in_ECX[3] + iVar3) + -4) = iVar1;
      if (iVar1 < 0) {
        FUN_008b1930();
      }
      iVar3 = iVar3 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],(in_ECX[5] & 0x3fffffff) * 0xc,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00947c20(byte param_1)

{
  FUN_00947b60();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



int FUN_00947c50(char *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int in_ECX;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int local_14;
  
  piVar12 = (int *)0x0;
  bVar5 = false;
  FUN_008a7720();
  iVar11 = 0;
  if (0 < *(int *)(in_ECX + 0x10)) {
    iVar13 = 0;
    do {
      iVar6 = FUN_008b1770(*(undefined4 *)(iVar13 + *(int *)(in_ECX + 0xc)),param_1);
      if (iVar6 == 0) {
        piVar12 = (int *)(*(int *)(in_ECX + 0xc) + iVar13);
        bVar5 = true;
      }
      iVar11 = iVar11 + 1;
      iVar13 = iVar13 + 0xc;
    } while (iVar11 < *(int *)(in_ECX + 0x10));
    if (bVar5) goto LAB_00947ec3;
  }
  iVar11 = *(int *)(in_ECX + 0x10);
  piVar12 = (int *)(in_ECX + 0xc);
  uVar1 = iVar11 + 1;
  if ((int)uVar1 < iVar11) {
    iVar6 = uVar1 * 0xc;
    iVar13 = iVar11 - uVar1;
    do {
      iVar7 = *(int *)(*(int *)(iVar6 + *piVar12) + -4) + -1;
      *(int *)(*(int *)(iVar6 + *piVar12) + -4) = iVar7;
      if (iVar7 < 0) {
        FUN_008b1930();
      }
      iVar6 = iVar6 + 0xc;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  else {
    uVar3 = *(uint *)(in_ECX + 0x14);
    if ((int)(uVar3 & 0x3fffffff) < (int)uVar1) {
      uVar8 = (uVar3 & 0x3fffffff) * 2;
      if ((int)uVar8 <= (int)uVar1) {
        uVar8 = uVar1;
      }
      piVar4 = (int *)*piVar12;
      *piVar12 = 0;
      *(undefined4 *)(in_ECX + 0x10) = 0;
      *(undefined4 *)(in_ECX + 0x14) = 0x80000000;
      if (0 < (int)uVar8) {
        FUN_008a6e40(piVar12,uVar8 & ((int)uVar8 < 0) - 1,0xc);
      }
      iVar13 = *piVar12;
      if (0 < iVar11) {
        puVar9 = (undefined4 *)(iVar13 + 4);
        piVar10 = piVar4;
        iVar6 = iVar11;
        do {
          if (puVar9 != (undefined4 *)&DAT_00000004) {
            iVar7 = *piVar10;
            piVar2 = (int *)(iVar7 + -4);
            *piVar2 = *piVar2 + 1;
            puVar9[-1] = iVar7;
            *puVar9 = *(undefined4 *)(((int)piVar4 - iVar13) + (int)puVar9);
            puVar9[1] = piVar10[2];
          }
          puVar9 = puVar9 + 3;
          piVar10 = piVar10 + 3;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *(int *)(in_ECX + 0x10) = iVar11;
      piVar10 = piVar4;
      local_14 = iVar11;
      if (0 < iVar11) {
        do {
          iVar13 = *(int *)(*piVar10 + -4) + -1;
          *(int *)(*piVar10 + -4) = iVar13;
          if (iVar13 < 0) {
            FUN_008b1930();
          }
          local_14 = local_14 + -1;
          piVar10 = piVar10 + 3;
        } while (local_14 != 0);
      }
      if (-1 < (int)uVar3) {
        FUN_008a75d0(piVar4,(uVar3 & 0x3fffffff) * 0xc,0x14);
      }
    }
    if (iVar11 < iVar11 + 1) {
      puVar9 = (undefined4 *)(*piVar12 + iVar11 * 0xc);
      iVar13 = (iVar11 + 1) - iVar11;
      do {
        if (puVar9 != (undefined4 *)0x0) {
          DAT_00ba7fc0 = DAT_00ba7fc0 + 1;
          *puVar9 = &DAT_00ba7fc4;
        }
        puVar9 = puVar9 + 3;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
  }
  *(int *)(in_ECX + 0x10) = iVar11 + 1;
  piVar12 = (int *)(*piVar12 + iVar11 * 0xc);
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    iVar11 = *(int *)(*piVar12 + -4) + -1;
    *(int *)(*piVar12 + -4) = iVar11;
    if (iVar11 < 0) {
      FUN_008b1930();
    }
    DAT_00ba7fc0 = DAT_00ba7fc0 + 1;
    *piVar12 = (int)&DAT_00ba7fc4;
  }
  else {
    iVar13 = FUN_008b1860(param_1);
    iVar11 = *piVar12;
    if ((*(int *)(iVar11 + -8) < iVar13) || (0 < *(int *)(iVar11 + -4))) {
      iVar6 = *(int *)(iVar11 + -4) + -1;
      *(int *)(iVar11 + -4) = iVar6;
      if (iVar6 < 0) {
        FUN_008b1930();
      }
      iVar11 = FUN_008b1950(iVar13);
      *piVar12 = iVar11 + 0xc;
    }
    FUN_008b1890(*piVar12,param_1,iVar13 + 1);
    *(int *)(*piVar12 + -0xc) = iVar13;
  }
  piVar12[1] = param_2;
  piVar12[2] = *(int *)(in_ECX + 8);
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
LAB_00947ec3:
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(in_ECX + 0x18));
  return piVar12[2];
}



void FUN_00947ee0(int *param_1)

{
  int unaff_EBX;
  int unaff_ESI;
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = 0;
  local_4 = 0;
  local_8 = 0;
  (**(code **)(*param_1 + 8))(&local_4,&local_8);
  if (0 < unaff_ESI) {
    do {
      FUN_008b0e80(*(undefined1 *)(iVar1 + unaff_EBX),param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < unaff_ESI);
  }
  return;
}



void FUN_00947f40(int *param_1)

{
  int unaff_ESI;
  int iVar1;
  int unaff_EDI;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = 0;
  local_4 = 0;
  local_8 = 0;
  (**(code **)(*param_1 + 8))(&local_4,&local_8);
  if (0 < unaff_EDI) {
    do {
      FUN_008b1570(*(undefined1 *)(iVar1 + unaff_ESI));
      iVar1 = iVar1 + 1;
    } while (iVar1 < unaff_EDI);
  }
  return;
}



void FUN_00947fa0(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  undefined1 local_39;
  undefined *local_38;
  uint local_34 [2];
  int *local_2c;
  undefined1 local_28 [8];
  undefined1 local_20 [28];
  
  do {
    FUN_00947910(local_34,1,1);
    uVar1 = local_34[0];
    cVar4 = (char)local_34[0];
    if (cVar4 != -0x10) {
      uVar5 = local_34[0] & 0xff;
      iVar2 = FUN_008b0f40(uVar5,&local_2c);
      if ((iVar2 == 0) && (local_2c != (int *)0x0)) {
        (**(code **)(*local_2c + 0xc))(uVar1);
      }
      else {
        if (cVar4 == -0x50) {
          FUN_00948c80(local_20);
          FUN_00947910(local_28,8,1);
        }
        else if (cVar4 == -0x4f) {
          FUN_00948c80(local_20);
        }
        DAT_00ba7fc0 = DAT_00ba7fc0 + 1;
        local_38 = &DAT_00ba7fc4;
        FUN_008b1990(&local_38,
                     "VDB: Found a command (%x) with no handler. Could corrupt the stream.",uVar5);
        iVar2 = *(int *)(local_38 + -4);
        *(int *)(local_38 + -4) = iVar2 + -1;
        if (iVar2 + -1 < 0) {
          FUN_008b1930();
        }
      }
    }
    pcVar3 = (char *)FUN_00918060(&local_39);
  } while ((*pcVar3 != '\0') && (cVar4 != -0x10));
  *param_1 = 1;
  return;
}



undefined4 FUN_009480a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00918440(0x11);
    FUN_009181b0(3);
    FUN_00918440(param_1);
    FUN_00918460(param_2,0);
    FUN_00918440(param_3);
  }
  if (*(int *)(in_ECX + 4) != 0) {
    pcVar1 = (char *)FUN_00918060(&param_1);
    if (*pcVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00948110(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00918440(0x29);
    FUN_009181b0(2);
    FUN_00948810(param_1);
    FUN_00918460(param_2,0);
    FUN_00918440(param_3);
  }
  if (*(int *)(in_ECX + 4) != 0) {
    pcVar1 = (char *)FUN_00918060(&param_1);
    if (*pcVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00948180(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00918440(0xd);
    FUN_009181b0(4);
    FUN_00918460(param_1,0);
    FUN_00918440(param_2);
  }
  if (*(int *)(in_ECX + 4) != 0) {
    pcVar1 = (char *)FUN_00918060(&param_1);
    if (*pcVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}



undefined4
FUN_009481e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  
  uVar1 = param_7;
  if (*(int *)(in_ECX + 4) != 0) {
    iVar2 = FUN_008b1860(param_7);
    FUN_00918440(iVar2 + 0x33);
    FUN_009181b0(0xd);
    FUN_00948800(param_1);
    FUN_00948800(param_2);
    FUN_00948800(param_3);
    FUN_00918440(param_4);
    FUN_00918440(param_5);
    FUN_00918440(param_6);
    FUN_00918420(iVar2);
    FUN_00918390(uVar1,iVar2);
  }
  if (*(int *)(in_ECX + 4) != 0) {
    pcVar3 = (char *)FUN_00918060(&param_7);
    if (*pcVar3 != '\0') {
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_009482a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00918440(0x15);
    FUN_009181b0(7);
    FUN_00948800(param_1);
    FUN_00918440(param_2);
    FUN_00918440(param_3);
  }
  if (*(int *)(in_ECX + 4) != 0) {
    pcVar1 = (char *)FUN_00918060(&param_1);
    if (*pcVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00948310(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00918440(0x21);
    FUN_009181b0(8);
    FUN_00948800(param_1);
    FUN_00948800(param_2);
    FUN_00918440(param_3);
    FUN_00918440(param_4);
  }
  if (*(int *)(in_ECX + 4) != 0) {
    pcVar1 = (char *)FUN_00918060(&param_1);
    if (*pcVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00948390(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  
  uVar1 = param_1;
  if (*(int *)(in_ECX + 4) != 0) {
    iVar2 = FUN_008b1860(param_1);
    if (0xffff < iVar2) {
      iVar2 = 0xffff;
    }
    FUN_00918440(iVar2 + 0xb);
    FUN_009181b0(9);
    FUN_00918420(iVar2);
    FUN_00918390(uVar1,iVar2);
    FUN_00918440(param_2);
    FUN_00918440(param_3);
  }
  if (*(int *)(in_ECX + 4) != 0) {
    pcVar3 = (char *)FUN_00918060(&param_1);
    if (*pcVar3 != '\0') {
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00948430(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int in_ECX;
  
  iVar1 = param_2;
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00918440(param_2 + 5);
    FUN_009181b0(0xf);
    FUN_00918440(iVar1);
    FUN_00918390(param_1,iVar1);
  }
  if (*(int *)(in_ECX + 4) != 0) {
    pcVar2 = (char *)FUN_00918060(&param_2);
    if (*pcVar2 != '\0') {
      return 0;
    }
  }
  return 1;
}



void FUN_009484e0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = &PTR_LAB_00aa2984;
  *in_ECX = &PTR_FUN_00aa2b44;
  in_ECX[2] = &PTR_LAB_00aa2b10;
  in_ECX[3] = param_1;
  return;
}



void FUN_00948510(byte param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = &PTR_LAB_00aa2b10;
  in_ECX[2] = &PTR_LAB_00aa2984;
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



int FUN_00948550(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_EDI;
  
  iVar3 = 0;
  iVar2 = 4;
  if (0 < unaff_EDI[1]) {
    do {
      iVar1 = FUN_00948bc0(*(undefined4 *)(*unaff_EDI + iVar3 * 4));
      iVar2 = iVar2 + iVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < unaff_EDI[1]);
  }
  return iVar2;
}



void FUN_00948580(int *param_1)

{
  int iVar1;
  
  FUN_00918440(param_1[1]);
  iVar1 = 0;
  if (0 < param_1[1]) {
    do {
      FUN_00948910(*(undefined4 *)(*param_1 + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[1]);
  }
  return;
}



undefined4 FUN_009485c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  
  uVar1 = param_1;
  if (*(int *)(in_ECX + 4) != 0) {
    iVar2 = FUN_00948550();
    FUN_00918440(iVar2 + 0x29);
    FUN_009181b0(1);
    FUN_00948580(uVar1);
    FUN_00948810(param_2);
    FUN_00918460(param_3,0);
    FUN_00918440(param_4);
  }
  if (*(int *)(in_ECX + 4) != 0) {
    pcVar3 = (char *)FUN_00918060(&param_1);
    if (*pcVar3 != '\0') {
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00948650(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  
  uVar1 = param_1;
  if (*(int *)(in_ECX + 4) != 0) {
    iVar2 = FUN_00948550();
    FUN_00918440(iVar2 + 0x25);
    FUN_009181b0(5);
    FUN_00948580(uVar1);
    FUN_00948810(param_2);
    FUN_00918440(param_3);
    FUN_00918440(param_4);
  }
  if (*(int *)(in_ECX + 4) != 0) {
    pcVar3 = (char *)FUN_00918060(&param_1);
    if (*pcVar3 != '\0') {
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_009486d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  
  uVar1 = param_1;
  if (*(int *)(in_ECX + 4) != 0) {
    iVar2 = FUN_00948550();
    FUN_00918440(iVar2 + 9);
    FUN_009181b0(6);
    FUN_00948580(uVar1);
    FUN_00918440(param_2);
    FUN_00918440(param_3);
  }
  if (*(int *)(in_ECX + 4) != 0) {
    pcVar3 = (char *)FUN_00918060(&param_1);
    if (*pcVar3 != '\0') {
      return 0;
    }
  }
  return 1;
}



void FUN_00948750(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_009184a0(param_1,(uint)in_ECX & 0xffffff00);
  *in_ECX = &PTR_FUN_00aa2b4c;
  return;
}



void FUN_00948770(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  uint extraout_ECX;
  undefined4 unaff_ESI;
  
  iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x1c,0x17);
  *(undefined2 *)(iVar2 + 4) = 0x1c;
  uVar3 = FUN_008f5f10(unaff_ESI,0x2000);
  FUN_009183a0(uVar3,extraout_ECX & 0xffffff00);
  puVar1 = (undefined4 *)in_ECX[2];
  *in_ECX = &PTR_FUN_00aa2b4c;
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  return;
}



void FUN_009487d0(byte param_1)

{
  FUN_00918180();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00948800(undefined4 param_1)

{
  FUN_00918480(param_1,3);
  return;
}



void FUN_00948810(undefined4 *param_1)

{
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_60 = param_1[0xc];
  uStack_5c = param_1[0xd];
  uStack_58 = param_1[0xe];
  uStack_54 = param_1[0xf];
  local_40 = *param_1;
  uStack_3c = param_1[1];
  uStack_38 = param_1[2];
  uStack_34 = param_1[3];
  local_30 = param_1[4];
  uStack_2c = param_1[5];
  uStack_28 = param_1[6];
  uStack_24 = param_1[7];
  local_20 = param_1[8];
  uStack_1c = param_1[9];
  uStack_18 = param_1[10];
  uStack_14 = param_1[0xb];
  FUN_008b1b40(&local_40);
  FUN_00918480(&local_60,3);
  FUN_00918480(local_50,4);
  return;
}



void FUN_00948880(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_1;
  iVar2 = param_1[1];
  FUN_00918440(iVar2);
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      FUN_00918480(*param_1 + iVar3,3);
      iVar3 = iVar3 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1 = (int *)param_1[4];
  FUN_00918440(param_1);
  if (0 < (int)param_1) {
    iVar2 = 0;
    do {
      iVar3 = piVar1[3] + iVar2;
      FUN_00918440(*(undefined4 *)(piVar1[3] + iVar2));
      FUN_00918440(*(undefined4 *)(iVar3 + 4));
      FUN_00918440(*(undefined4 *)(iVar3 + 8));
      iVar2 = iVar2 + 0xc;
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  return;
}



void FUN_00948910(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  FUN_009181b0(uVar2);
  switch(uVar2) {
  case 1:
    FUN_00948810(param_1 + 0x10);
    iVar1 = FUN_0094d240(local_80);
    FUN_00918440(*(undefined4 *)(iVar1 + 0xc));
    uVar2 = FUN_0094d240(local_70);
    FUN_00918480(uVar2,3);
    FUN_00918440(*(undefined4 *)(param_1 + 0x70));
    FUN_00918440(*(undefined4 *)(param_1 + 0x74));
    return;
  case 2:
    FUN_00948810(param_1 + 0x10);
    FUN_00918480(param_1 + 0x60,3);
    return;
  case 3:
    uVar2 = FUN_0094d5d0();
    FUN_00918480(uVar2,3);
    uVar2 = FUN_009492d0();
    FUN_00918480(uVar2,3);
    return;
  case 4:
    uVar2 = FUN_0094d240(local_60);
    FUN_00918480(uVar2,3);
    uVar2 = FUN_0094dad0(local_50);
    FUN_00918480(uVar2,3);
    fVar4 = (float10)FUN_0094da70();
    FUN_00918440((float)fVar4);
    fVar4 = (float10)FUN_0094da60();
    FUN_00918440((float)fVar4);
    uVar2 = FUN_0094da80();
    FUN_00918440(uVar2);
    return;
  case 5:
    uVar2 = FUN_0094d250(local_40);
    FUN_00918480(uVar2,3);
    uVar2 = FUN_0094d240(local_30);
    FUN_00918480(uVar2,3);
    uVar2 = FUN_0094dad0(local_20);
    FUN_00918480(uVar2,3);
    fVar4 = (float10)FUN_0094d1d0();
    FUN_00918440((float)fVar4);
    fVar4 = (float10)FUN_0094d1b0();
    FUN_00918440((float)fVar4);
    fVar4 = (float10)FUN_0094d1c0();
    FUN_00918440((float)fVar4);
    uVar2 = FUN_0094d1e0();
    FUN_00918440(uVar2);
    return;
  case 6:
    FUN_00948810(param_1 + 0x10);
    FUN_00948880(*(undefined4 *)(param_1 + 0x50));
    return;
  case 7:
    uVar2 = FUN_009492d0();
    FUN_00918480(uVar2,3);
    uVar2 = FUN_0094d5d0();
    FUN_00918480(uVar2,3);
    uVar2 = FUN_0094d5e0();
    FUN_00918480(uVar2,3);
    puVar3 = (undefined4 *)FUN_0094d5f0();
    FUN_00918440(*puVar3);
    break;
  case 8:
  case 9:
    FUN_00948810(param_1 + 0x10);
    FUN_00918440(*(undefined4 *)(param_1 + 0x80));
    FUN_00918480(param_1 + 0x60,3);
    FUN_00918480(param_1 + 0x70,3);
    FUN_00918440(*(undefined4 *)(param_1 + 0x84));
    FUN_00918440(*(undefined4 *)(param_1 + 0x88));
    return;
  }
  return;
}



int FUN_00948bc0(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  switch(*(undefined4 *)(param_1 + 0x54)) {
  case 1:
  case 5:
    return 0x35;
  case 2:
  case 7:
    iVar1 = 0x29;
    break;
  case 3:
    return 0x19;
  case 4:
    return 0x25;
  case 6:
    return (*(int *)(*(int *)(param_1 + 0x50) + 0x10) + *(int *)(*(int *)(param_1 + 0x50) + 4)) *
           0xc + 0x25;
  case 8:
  case 9:
    return 0x41;
  }
  return iVar1;
}



void FUN_00948c30(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_009479f0(param_1,(uint)in_ECX & 0xffffff00);
  *in_ECX = &PTR_FUN_00aa2b54;
  return;
}



void FUN_00948c50(byte param_1)

{
  FUN_008bc000();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00948c80(int param_1)

{
  FUN_00947910(param_1,4,3);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



void FUN_00948cb0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_008b0da0();
  *(undefined4 *)(in_ECX + 0x24) = param_1;
  return;
}



void FUN_00948cd0(void)

{
  FUN_008b0da0();
  return;
}



void FUN_00948ce0(void)

{
  int in_ECX;
  
  FUN_008b0da0();
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00948d69) */

void FUN_00948d00(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = &PTR_LAB_00aa2b5c;
  *in_ECX = &PTR_FUN_00aa2b8c;
  in_ECX[2] = &PTR_LAB_00aa2b74;
  uVar1 = FUN_008a7560(param_1,0x14);
  in_ECX[3] = uVar1;
  in_ECX[4] = param_1;
  in_ECX[5] = param_1;
  FUN_008b0e10();
  in_ECX[4] = 0;
  return;
}



void FUN_00948d90(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00aa2b8c;
  in_ECX[2] = &PTR_LAB_00aa2b74;
  FUN_008b0e60();
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],in_ECX[5] & 0x3fffffff,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00948e2c) */

int FUN_00948df0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *unaff_ESI;
  
  uVar2 = unaff_ESI[1];
  if ((int)uVar2 < 1) {
    if (uVar2 == (unaff_ESI[2] & 0x3fffffffU)) {
      FUN_008a6ee0();
    }
    iVar3 = *unaff_ESI + unaff_ESI[1];
    unaff_ESI[1] = unaff_ESI[1] + 1;
    unaff_ESI[1] = 0;
  }
  else {
    iVar3 = *unaff_ESI + uVar2;
  }
  iVar1 = param_1 + 6 + unaff_ESI[1];
  if ((int)(unaff_ESI[2] & 0x3fffffffU) < iVar1) {
    FUN_008a6e40();
  }
  unaff_ESI[1] = iVar1;
  return iVar3;
}



void FUN_00948e80(int param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int in_ECX;
  uint uVar4;
  
  if (((*(int *)(in_ECX + 8) + 0x46 < (int)(*(uint *)(in_ECX + 0xc) & 0x3fffffff)) &&
      ((*(uint *)(in_ECX + 0x1c) & param_2) != 0)) && ((uVar4 = 0, param_4 != 0 || (param_5 != 0))))
  {
    param_2 = 0;
    if (param_1 != 0) {
      iVar2 = FUN_008b1860(param_1);
      uVar4 = iVar2 + 1;
      param_2 = uVar4 & 0x80000001;
      if ((int)param_2 < 0) {
        param_2 = (param_2 - 1 | 0xfffffffe) + 1;
      }
    }
    puVar3 = (undefined1 *)FUN_00948df0(param_2 + uVar4);
    *puVar3 = 0x43;
    puVar3[1] = (char)uVar4 + (char)param_2;
    *(short *)(puVar3 + 2) = (short)param_4;
    if (param_5 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(*DAT_00ba7d98 + 0x28))(param_5);
    }
    *(undefined2 *)(puVar3 + 4) = uVar1;
    if ((0 < (int)uVar4) && (FUN_008b1890(puVar3 + 6,param_1,uVar4), param_2 != 0)) {
      puVar3[uVar4 + 6] = 0;
    }
  }
  return;
}



void FUN_00949150(byte param_1)

{
  FUN_00948d90();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_00949180(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00aa2bbc;
  in_ECX[2] = &PTR_LAB_00aa2ba4;
  in_ECX[8] = &PTR_LAB_00a9d250;
  if (in_ECX[9] != 0) {
    FUN_008caf40(in_ECX + 8);
    puVar1 = (undefined4 *)in_ECX[9];
    if ((*(short *)(puVar1 + 1) != 0) &&
       (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
       *(short *)((int)puVar1 + 6) == 0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[9] = 0;
  }
  in_ECX[2] = &PTR_LAB_00a9d1c0;
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_009491f0(int *param_1)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_ECX;
  int iVar5;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = &PTR_LAB_00a9d1c0;
  *(undefined1 *)(in_ECX + 3) = 1;
  in_ECX[8] = &PTR_LAB_00aa2b9c;
  iVar5 = 0;
  *in_ECX = &PTR_FUN_00aa2bbc;
  in_ECX[2] = &PTR_LAB_00aa2ba4;
  in_ECX[8] = &PTR_LAB_00a9d250;
  in_ECX[9] = 0;
  iVar4 = param_1[1];
  if (0 < iVar4) {
    do {
      uVar2 = (**(code **)(**(int **)(*param_1 + iVar5 * 4) + 4))();
      iVar3 = FUN_008b1770("Physics",uVar2);
      if (iVar3 == 0) {
        iVar4 = *(int *)(*param_1 + iVar5 * 4);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = iVar4 + -8;
        }
        in_ECX[9] = iVar4;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  if (in_ECX[9] != 0) {
    FUN_008cb120(in_ECX + 8);
    if (*(short *)(in_ECX[9] + 4) != 0) {
      psVar1 = (short *)(in_ECX[9] + 6);
      *psVar1 = *psVar1 + 1;
    }
  }
  return;
}



void FUN_009492a0(byte param_1)

{
  FUN_00949180();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



int FUN_009492d0(void)

{
  int in_ECX;
  
  return in_ECX + 0x70;
}



void FUN_009492e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(in_ECX + 0x60) = *param_1;
  *(undefined4 *)(in_ECX + 100) = uVar1;
  *(undefined4 *)(in_ECX + 0x68) = uVar2;
  *(undefined4 *)(in_ECX + 0x6c) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(in_ECX + 0x70) = *param_2;
  *(undefined4 *)(in_ECX + 0x74) = uVar1;
  *(undefined4 *)(in_ECX + 0x78) = uVar2;
  *(undefined4 *)(in_ECX + 0x7c) = uVar3;
  return;
}



void FUN_00949300(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 3;
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
  in_ECX[4] = 0x3f800000;
  in_ECX[9] = 0x3f800000;
  in_ECX[0xe] = 0x3f800000;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  *in_ECX = &PTR_FUN_00a9d2f4;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  return;
}



void FUN_00949680(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int in_ECX;
  int *piVar9;
  undefined4 *puVar10;
  
  piVar5 = (int *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x24);
  piVar9 = (int *)0x0;
  if (piVar5 != (int *)0x0) {
    *piVar5 = 0;
    piVar5[1] = 0;
    piVar5[2] = -0x80000000;
    piVar5[3] = 0;
    piVar5[4] = 0;
    piVar5[5] = -0x80000000;
    piVar9 = piVar5;
  }
  *(int **)(in_ECX + 0x50) = piVar9;
  iVar4 = piVar9[1];
  iVar1 = iVar4 + 1;
  if ((int)(piVar9[2] & 0x3fffffffU) < iVar1) {
    iVar6 = (piVar9[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    FUN_008a6e40(piVar9,iVar6,0x10);
  }
  piVar9[1] = iVar1;
  uVar2 = *(undefined4 *)(in_ECX + 0x68);
  uVar3 = *(undefined4 *)(in_ECX + 100);
  puVar10 = (undefined4 *)(iVar4 * 0x10 + *piVar9);
  *puVar10 = *(undefined4 *)(in_ECX + 0x60);
  puVar10[1] = uVar3;
  puVar10[2] = uVar2;
  puVar10[3] = 0;
  piVar9 = *(int **)(in_ECX + 0x50);
  iVar4 = piVar9[1];
  iVar1 = iVar4 + 1;
  if ((int)(piVar9[2] & 0x3fffffffU) < iVar1) {
    iVar6 = (piVar9[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    FUN_008a6e40(piVar9,iVar6,0x10);
  }
  piVar9[1] = iVar1;
  uVar2 = *(undefined4 *)(in_ECX + 0x78);
  uVar3 = *(undefined4 *)(in_ECX + 100);
  puVar10 = (undefined4 *)(iVar4 * 0x10 + *piVar9);
  *puVar10 = *(undefined4 *)(in_ECX + 0x60);
  puVar10[1] = uVar3;
  puVar10[2] = uVar2;
  puVar10[3] = 0;
  piVar9 = *(int **)(in_ECX + 0x50);
  iVar4 = piVar9[1];
  iVar1 = iVar4 + 1;
  if ((int)(piVar9[2] & 0x3fffffffU) < iVar1) {
    iVar6 = (piVar9[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    FUN_008a6e40(piVar9,iVar6,0x10);
  }
  piVar9[1] = iVar1;
  uVar2 = *(undefined4 *)(in_ECX + 0x78);
  uVar3 = *(undefined4 *)(in_ECX + 100);
  puVar10 = (undefined4 *)(iVar4 * 0x10 + *piVar9);
  *puVar10 = *(undefined4 *)(in_ECX + 0x70);
  puVar10[1] = uVar3;
  puVar10[2] = uVar2;
  puVar10[3] = 0;
  piVar9 = *(int **)(in_ECX + 0x50);
  iVar4 = piVar9[1];
  iVar1 = iVar4 + 1;
  if ((int)(piVar9[2] & 0x3fffffffU) < iVar1) {
    iVar6 = (piVar9[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    FUN_008a6e40(piVar9,iVar6,0x10);
  }
  piVar9[1] = iVar1;
  uVar2 = *(undefined4 *)(in_ECX + 0x68);
  uVar3 = *(undefined4 *)(in_ECX + 100);
  puVar10 = (undefined4 *)(iVar4 * 0x10 + *piVar9);
  *puVar10 = *(undefined4 *)(in_ECX + 0x70);
  puVar10[1] = uVar3;
  puVar10[2] = uVar2;
  puVar10[3] = 0;
  piVar9 = *(int **)(in_ECX + 0x50);
  iVar4 = piVar9[1];
  iVar1 = iVar4 + 1;
  if ((int)(piVar9[2] & 0x3fffffffU) < iVar1) {
    iVar6 = (piVar9[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    FUN_008a6e40(piVar9,iVar6,0x10);
  }
  piVar9[1] = iVar1;
  uVar2 = *(undefined4 *)(in_ECX + 0x68);
  uVar3 = *(undefined4 *)(in_ECX + 0x74);
  puVar10 = (undefined4 *)(iVar4 * 0x10 + *piVar9);
  *puVar10 = *(undefined4 *)(in_ECX + 0x60);
  puVar10[1] = uVar3;
  puVar10[2] = uVar2;
  puVar10[3] = 0;
  piVar9 = *(int **)(in_ECX + 0x50);
  iVar4 = piVar9[1];
  iVar1 = iVar4 + 1;
  if ((int)(piVar9[2] & 0x3fffffffU) < iVar1) {
    iVar6 = (piVar9[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    FUN_008a6e40(piVar9,iVar6,0x10);
  }
  piVar9[1] = iVar1;
  uVar2 = *(undefined4 *)(in_ECX + 0x78);
  uVar3 = *(undefined4 *)(in_ECX + 0x74);
  puVar10 = (undefined4 *)(iVar4 * 0x10 + *piVar9);
  *puVar10 = *(undefined4 *)(in_ECX + 0x60);
  puVar10[1] = uVar3;
  puVar10[2] = uVar2;
  puVar10[3] = 0;
  piVar9 = *(int **)(in_ECX + 0x50);
  iVar4 = piVar9[1];
  iVar1 = iVar4 + 1;
  if ((int)(piVar9[2] & 0x3fffffffU) < iVar1) {
    iVar6 = (piVar9[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    FUN_008a6e40(piVar9,iVar6,0x10);
  }
  piVar9[1] = iVar1;
  uVar2 = *(undefined4 *)(in_ECX + 0x78);
  uVar3 = *(undefined4 *)(in_ECX + 0x74);
  puVar10 = (undefined4 *)(iVar4 * 0x10 + *piVar9);
  *puVar10 = *(undefined4 *)(in_ECX + 0x70);
  puVar10[1] = uVar3;
  puVar10[2] = uVar2;
  puVar10[3] = 0;
  piVar9 = *(int **)(in_ECX + 0x50);
  iVar4 = piVar9[1];
  iVar1 = iVar4 + 1;
  if ((int)(piVar9[2] & 0x3fffffffU) < iVar1) {
    iVar6 = (piVar9[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    FUN_008a6e40(piVar9,iVar6,0x10);
  }
  piVar9[1] = iVar1;
  uVar2 = *(undefined4 *)(in_ECX + 0x68);
  uVar3 = *(undefined4 *)(in_ECX + 0x74);
  puVar10 = (undefined4 *)(iVar4 * 0x10 + *piVar9);
  *puVar10 = *(undefined4 *)(in_ECX + 0x70);
  puVar10[1] = uVar3;
  puVar10[2] = uVar2;
  puVar10[3] = 0;
  iVar4 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar4 + 0x10);
  iVar1 = iVar6 + 1;
  uVar7 = *(uint *)(iVar4 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar1) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar1) {
      iVar8 = iVar1;
    }
    FUN_008a6e40((int *)(iVar4 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar4 + 0x10) = iVar1;
  puVar10 = (undefined4 *)(*(int *)(iVar4 + 0xc) + iVar6 * 0xc);
  *puVar10 = 0;
  puVar10[1] = 3;
  puVar10[2] = 1;
  iVar4 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar4 + 0x10);
  iVar1 = iVar6 + 1;
  uVar7 = *(uint *)(iVar4 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar1) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar1) {
      iVar8 = iVar1;
    }
    FUN_008a6e40((int *)(iVar4 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar4 + 0x10) = iVar1;
  puVar10 = (undefined4 *)(*(int *)(iVar4 + 0xc) + iVar6 * 0xc);
  *puVar10 = 1;
  puVar10[1] = 3;
  puVar10[2] = 2;
  iVar4 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar4 + 0x10);
  iVar1 = iVar6 + 1;
  uVar7 = *(uint *)(iVar4 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar1) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar1) {
      iVar8 = iVar1;
    }
    FUN_008a6e40((int *)(iVar4 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar4 + 0x10) = iVar1;
  puVar10 = (undefined4 *)(*(int *)(iVar4 + 0xc) + iVar6 * 0xc);
  *puVar10 = 2;
  puVar10[1] = 6;
  puVar10[2] = 5;
  iVar4 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar4 + 0x10);
  iVar1 = iVar6 + 1;
  uVar7 = *(uint *)(iVar4 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar1) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar1) {
      iVar8 = iVar1;
    }
    FUN_008a6e40((int *)(iVar4 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar4 + 0x10) = iVar1;
  puVar10 = (undefined4 *)(*(int *)(iVar4 + 0xc) + iVar6 * 0xc);
  *puVar10 = 5;
  puVar10[1] = 1;
  puVar10[2] = 2;
  iVar4 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar4 + 0x10);
  iVar1 = iVar6 + 1;
  uVar7 = *(uint *)(iVar4 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar1) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar1) {
      iVar8 = iVar1;
    }
    FUN_008a6e40((int *)(iVar4 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar4 + 0x10) = iVar1;
  puVar10 = (undefined4 *)(*(int *)(iVar4 + 0xc) + iVar6 * 0xc);
  *puVar10 = 5;
  puVar10[1] = 6;
  puVar10[2] = 4;
  iVar4 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar4 + 0x10);
  iVar1 = iVar6 + 1;
  uVar7 = *(uint *)(iVar4 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar1) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar1) {
      iVar8 = iVar1;
    }
    FUN_008a6e40((int *)(iVar4 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar4 + 0x10) = iVar1;
  puVar10 = (undefined4 *)(*(int *)(iVar4 + 0xc) + iVar6 * 0xc);
  *puVar10 = 4;
  puVar10[1] = 6;
  puVar10[2] = 7;
  iVar4 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar4 + 0x10);
  iVar1 = iVar6 + 1;
  uVar7 = *(uint *)(iVar4 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar1) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar1) {
      iVar8 = iVar1;
    }
    FUN_008a6e40((int *)(iVar4 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar4 + 0x10) = iVar1;
  puVar10 = (undefined4 *)(*(int *)(iVar4 + 0xc) + iVar6 * 0xc);
  *puVar10 = 7;
  puVar10[1] = 3;
  puVar10[2] = 0;
  iVar4 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar4 + 0x10);
  iVar1 = iVar6 + 1;
  uVar7 = *(uint *)(iVar4 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar1) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar1) {
      iVar8 = iVar1;
    }
    FUN_008a6e40((int *)(iVar4 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar4 + 0x10) = iVar1;
  puVar10 = (undefined4 *)(*(int *)(iVar4 + 0xc) + iVar6 * 0xc);
  *puVar10 = 0;
  puVar10[1] = 4;
  puVar10[2] = 7;
  iVar4 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar4 + 0x10);
  iVar1 = iVar6 + 1;
  uVar7 = *(uint *)(iVar4 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar1) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar1) {
      iVar8 = iVar1;
    }
    FUN_008a6e40((int *)(iVar4 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar4 + 0x10) = iVar1;
  puVar10 = (undefined4 *)(*(int *)(iVar4 + 0xc) + iVar6 * 0xc);
  *puVar10 = 0;
  puVar10[1] = 1;
  puVar10[2] = 4;
  iVar4 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar4 + 0x10);
  iVar1 = iVar6 + 1;
  uVar7 = *(uint *)(iVar4 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar1) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar1) {
      iVar8 = iVar1;
    }
    FUN_008a6e40((int *)(iVar4 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar4 + 0x10) = iVar1;
  puVar10 = (undefined4 *)(*(int *)(iVar4 + 0xc) + iVar6 * 0xc);
  *puVar10 = 4;
  puVar10[1] = 1;
  puVar10[2] = 5;
  iVar4 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar4 + 0x10);
  iVar1 = iVar6 + 1;
  uVar7 = *(uint *)(iVar4 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar1) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar1) {
      iVar8 = iVar1;
    }
    FUN_008a6e40((int *)(iVar4 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar4 + 0x10) = iVar1;
  puVar10 = (undefined4 *)(*(int *)(iVar4 + 0xc) + iVar6 * 0xc);
  *puVar10 = 2;
  puVar10[1] = 3;
  puVar10[2] = 6;
  iVar4 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar4 + 0x10);
  iVar1 = iVar6 + 1;
  uVar7 = *(uint *)(iVar4 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar1) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar1) {
      iVar8 = iVar1;
    }
    FUN_008a6e40((int *)(iVar4 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar4 + 0x10) = iVar1;
  puVar10 = (undefined4 *)(*(int *)(iVar4 + 0xc) + iVar6 * 0xc);
  *puVar10 = 6;
  puVar10[1] = 3;
  puVar10[2] = 7;
  return;
}



void FUN_00949ca0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 2;
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
  in_ECX[4] = 0x3f800000;
  in_ECX[9] = 0x3f800000;
  in_ECX[0xe] = 0x3f800000;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  *in_ECX = &PTR_FUN_00a9d378;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  in_ECX[0x18] = *param_1;
  in_ECX[0x19] = uVar1;
  in_ECX[0x1a] = uVar2;
  in_ECX[0x1b] = uVar3;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  in_ECX[0x18] = *param_1;
  in_ECX[0x19] = uVar1;
  in_ECX[0x1a] = uVar2;
  in_ECX[0x1b] = uVar3;
  return;
}



void FUN_00949d00(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 2;
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
  in_ECX[4] = 0x3f800000;
  in_ECX[9] = 0x3f800000;
  in_ECX[0xe] = 0x3f800000;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  *in_ECX = &PTR_FUN_00a9d378;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  return;
}



void FUN_00949d50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(in_ECX + 0x60) = *param_1;
  *(undefined4 *)(in_ECX + 100) = uVar1;
  *(undefined4 *)(in_ECX + 0x68) = uVar2;
  *(undefined4 *)(in_ECX + 0x6c) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(in_ECX + 0x10) = *param_2;
  *(undefined4 *)(in_ECX + 0x14) = uVar1;
  *(undefined4 *)(in_ECX + 0x18) = uVar2;
  *(undefined4 *)(in_ECX + 0x1c) = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined4 *)(in_ECX + 0x20) = param_2[4];
  *(undefined4 *)(in_ECX + 0x24) = uVar1;
  *(undefined4 *)(in_ECX + 0x28) = uVar2;
  *(undefined4 *)(in_ECX + 0x2c) = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  *(undefined4 *)(in_ECX + 0x30) = param_2[8];
  *(undefined4 *)(in_ECX + 0x34) = uVar1;
  *(undefined4 *)(in_ECX + 0x38) = uVar2;
  *(undefined4 *)(in_ECX + 0x3c) = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  *(undefined4 *)(in_ECX + 0x40) = param_2[0xc];
  *(undefined4 *)(in_ECX + 0x44) = uVar1;
  *(undefined4 *)(in_ECX + 0x48) = uVar2;
  *(undefined4 *)(in_ECX + 0x4c) = uVar3;
  return;
}



void FUN_00949d90(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int in_ECX;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *local_ac;
  uint local_a8;
  uint local_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 local_90 [35];
  
  uVar4 = param_1[2] & 0x3fffffff;
  if (uVar4 < 0x18) {
    uVar5 = uVar4 * 2;
    if (uVar4 == 0xc || uVar5 < 0x18) {
      uVar5 = 0x18;
    }
    FUN_008a6e40(param_1,uVar5,0x10);
  }
  param_1[1] = 0x18;
  uVar4 = 0;
  do {
    local_a0 = *(float *)(in_ECX + 0x60);
    fStack_9c = *(float *)(in_ECX + 100);
    fStack_98 = *(float *)(in_ECX + 0x68);
    uStack_94 = *(undefined4 *)(in_ECX + 0x6c);
    if ((uVar4 & 1) != 0) {
      local_a0 = local_a0 * -1.0;
    }
    if ((uVar4 & 2) != 0) {
      fStack_9c = fStack_9c * -1.0;
    }
    if ((uVar4 & 4) != 0) {
      fStack_98 = fStack_98 * -1.0;
    }
    FUN_0088fcc0(in_ECX + 0x10,&local_a0);
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 8);
  iVar8 = 0;
  local_ac = local_90;
  local_a8 = 0;
  do {
    local_a4 = 1;
    iVar6 = iVar8 << 4;
    do {
      uVar4 = local_a4 ^ local_a8;
      if ((int)local_a8 < (int)uVar4) {
        uVar1 = local_ac[1];
        uVar2 = local_ac[2];
        uVar3 = local_ac[3];
        puVar7 = (undefined4 *)(*param_1 + iVar6);
        *puVar7 = *local_ac;
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
        puVar7 = (undefined4 *)(*param_1 + iVar6 + 0x10);
        iVar8 = iVar8 + 2;
        iVar6 = iVar6 + 0x20;
        uVar1 = local_90[uVar4 * 4 + 1];
        uVar2 = local_90[uVar4 * 4 + 2];
        uVar3 = local_90[uVar4 * 4 + 3];
        *puVar7 = local_90[uVar4 * 4];
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
      }
      local_a4 = local_a4 * 2;
    } while ((int)local_a4 < 8);
    local_a8 = local_a8 + 1;
    local_ac = local_ac + 4;
  } while ((int)local_a8 < 8);
  return;
}



void FUN_00949ec0(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  float *pfVar10;
  undefined4 *puVar11;
  int iVar12;
  
  piVar5 = (int *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x24);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = 0;
    piVar5[1] = 0;
    piVar5[2] = -0x80000000;
    piVar5[3] = 0;
    piVar5[4] = 0;
    piVar5[5] = -0x80000000;
  }
  *(int **)(in_ECX + 0x50) = piVar5;
  iVar9 = piVar5[1];
  iVar12 = iVar9 + 1;
  if ((int)(piVar5[2] & 0x3fffffffU) < iVar12) {
    iVar6 = (piVar5[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar12) {
      iVar6 = iVar12;
    }
    FUN_008a6e40(piVar5,iVar6,0x10);
  }
  piVar5[1] = iVar12;
  fVar1 = *(float *)(in_ECX + 0x68);
  fVar2 = *(float *)(in_ECX + 100);
  pfVar10 = (float *)(iVar9 * 0x10 + *piVar5);
  *pfVar10 = -*(float *)(in_ECX + 0x60);
  pfVar10[1] = fVar2;
  pfVar10[2] = fVar1;
  pfVar10[3] = 0.0;
  piVar5 = *(int **)(in_ECX + 0x50);
  iVar9 = piVar5[1];
  iVar12 = iVar9 + 1;
  if ((int)(piVar5[2] & 0x3fffffffU) < iVar12) {
    iVar6 = (piVar5[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar12) {
      iVar6 = iVar12;
    }
    FUN_008a6e40(piVar5,iVar6,0x10);
  }
  piVar5[1] = iVar12;
  uVar3 = *(undefined4 *)(in_ECX + 0x68);
  uVar4 = *(undefined4 *)(in_ECX + 100);
  puVar11 = (undefined4 *)(iVar9 * 0x10 + *piVar5);
  *puVar11 = *(undefined4 *)(in_ECX + 0x60);
  puVar11[1] = uVar4;
  puVar11[2] = uVar3;
  puVar11[3] = 0;
  piVar5 = *(int **)(in_ECX + 0x50);
  iVar9 = piVar5[1];
  iVar12 = iVar9 + 1;
  if ((int)(piVar5[2] & 0x3fffffffU) < iVar12) {
    iVar6 = (piVar5[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar12) {
      iVar6 = iVar12;
    }
    FUN_008a6e40(piVar5,iVar6,0x10);
  }
  piVar5[1] = iVar12;
  uVar3 = *(undefined4 *)(in_ECX + 0x68);
  fVar1 = *(float *)(in_ECX + 100);
  puVar11 = (undefined4 *)(iVar9 * 0x10 + *piVar5);
  *puVar11 = *(undefined4 *)(in_ECX + 0x60);
  puVar11[1] = -fVar1;
  puVar11[2] = uVar3;
  puVar11[3] = 0;
  piVar5 = *(int **)(in_ECX + 0x50);
  iVar9 = piVar5[1];
  iVar12 = iVar9 + 1;
  if ((int)(piVar5[2] & 0x3fffffffU) < iVar12) {
    iVar6 = (piVar5[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar12) {
      iVar6 = iVar12;
    }
    FUN_008a6e40(piVar5,iVar6,0x10);
  }
  piVar5[1] = iVar12;
  fVar1 = *(float *)(in_ECX + 0x68);
  fVar2 = *(float *)(in_ECX + 100);
  pfVar10 = (float *)(iVar9 * 0x10 + *piVar5);
  *pfVar10 = -*(float *)(in_ECX + 0x60);
  pfVar10[1] = -fVar2;
  pfVar10[2] = fVar1;
  pfVar10[3] = 0.0;
  piVar5 = *(int **)(in_ECX + 0x50);
  iVar9 = piVar5[1];
  iVar12 = iVar9 + 1;
  if ((int)(piVar5[2] & 0x3fffffffU) < iVar12) {
    iVar6 = (piVar5[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar12) {
      iVar6 = iVar12;
    }
    FUN_008a6e40(piVar5,iVar6,0x10);
  }
  piVar5[1] = iVar12;
  fVar1 = *(float *)(in_ECX + 0x68);
  fVar2 = *(float *)(in_ECX + 100);
  pfVar10 = (float *)(iVar9 * 0x10 + *piVar5);
  *pfVar10 = -*(float *)(in_ECX + 0x60);
  pfVar10[1] = fVar2;
  pfVar10[2] = -fVar1;
  pfVar10[3] = 0.0;
  piVar5 = *(int **)(in_ECX + 0x50);
  iVar9 = piVar5[1];
  iVar12 = iVar9 + 1;
  if ((int)(piVar5[2] & 0x3fffffffU) < iVar12) {
    iVar6 = (piVar5[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar12) {
      iVar6 = iVar12;
    }
    FUN_008a6e40(piVar5,iVar6,0x10);
  }
  piVar5[1] = iVar12;
  fVar1 = *(float *)(in_ECX + 0x68);
  uVar3 = *(undefined4 *)(in_ECX + 100);
  puVar11 = (undefined4 *)(iVar9 * 0x10 + *piVar5);
  *puVar11 = *(undefined4 *)(in_ECX + 0x60);
  puVar11[1] = uVar3;
  puVar11[2] = -fVar1;
  puVar11[3] = 0;
  piVar5 = *(int **)(in_ECX + 0x50);
  iVar9 = piVar5[1];
  iVar12 = iVar9 + 1;
  if ((int)(piVar5[2] & 0x3fffffffU) < iVar12) {
    iVar6 = (piVar5[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar12) {
      iVar6 = iVar12;
    }
    FUN_008a6e40(piVar5,iVar6,0x10);
  }
  piVar5[1] = iVar12;
  fVar1 = *(float *)(in_ECX + 0x68);
  fVar2 = *(float *)(in_ECX + 100);
  puVar11 = (undefined4 *)(iVar9 * 0x10 + *piVar5);
  *puVar11 = *(undefined4 *)(in_ECX + 0x60);
  puVar11[1] = -fVar2;
  puVar11[2] = -fVar1;
  puVar11[3] = 0;
  piVar5 = *(int **)(in_ECX + 0x50);
  iVar9 = piVar5[1];
  iVar12 = iVar9 + 1;
  if ((int)(piVar5[2] & 0x3fffffffU) < iVar12) {
    iVar6 = (piVar5[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar12) {
      iVar6 = iVar12;
    }
    FUN_008a6e40(piVar5,iVar6,0x10);
  }
  piVar5[1] = iVar12;
  fVar1 = *(float *)(in_ECX + 0x68);
  fVar2 = *(float *)(in_ECX + 100);
  pfVar10 = (float *)(iVar9 * 0x10 + *piVar5);
  *pfVar10 = -*(float *)(in_ECX + 0x60);
  pfVar10[1] = -fVar2;
  pfVar10[2] = -fVar1;
  pfVar10[3] = 0.0;
  iVar12 = 0;
  if (0 < *(int *)(*(int *)(in_ECX + 0x50) + 4)) {
    iVar9 = 0;
    do {
      FUN_0088fcc0(in_ECX + 0x10,**(int **)(in_ECX + 0x50) + iVar9);
      iVar12 = iVar12 + 1;
      iVar9 = iVar9 + 0x10;
    } while (iVar12 < *(int *)(*(int *)(in_ECX + 0x50) + 4));
  }
  iVar9 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar9 + 0x10);
  iVar12 = iVar6 + 1;
  uVar7 = *(uint *)(iVar9 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar12) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar12) {
      iVar8 = iVar12;
    }
    FUN_008a6e40((int *)(iVar9 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar9 + 0x10) = iVar12;
  puVar11 = (undefined4 *)(*(int *)(iVar9 + 0xc) + iVar6 * 0xc);
  *puVar11 = 3;
  puVar11[1] = 2;
  puVar11[2] = 1;
  iVar9 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar9 + 0x10);
  iVar12 = iVar6 + 1;
  uVar7 = *(uint *)(iVar9 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar12) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar12) {
      iVar8 = iVar12;
    }
    FUN_008a6e40((int *)(iVar9 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar9 + 0x10) = iVar12;
  puVar11 = (undefined4 *)(*(int *)(iVar9 + 0xc) + iVar6 * 0xc);
  *puVar11 = 3;
  puVar11[1] = 1;
  puVar11[2] = 0;
  iVar9 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar9 + 0x10);
  iVar12 = iVar6 + 1;
  uVar7 = *(uint *)(iVar9 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar12) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar12) {
      iVar8 = iVar12;
    }
    FUN_008a6e40((int *)(iVar9 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar9 + 0x10) = iVar12;
  puVar11 = (undefined4 *)(*(int *)(iVar9 + 0xc) + iVar6 * 0xc);
  *puVar11 = 6;
  puVar11[1] = 7;
  puVar11[2] = 4;
  iVar9 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar9 + 0x10);
  iVar12 = iVar6 + 1;
  uVar7 = *(uint *)(iVar9 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar12) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar12) {
      iVar8 = iVar12;
    }
    FUN_008a6e40((int *)(iVar9 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar9 + 0x10) = iVar12;
  puVar11 = (undefined4 *)(*(int *)(iVar9 + 0xc) + iVar6 * 0xc);
  *puVar11 = 6;
  puVar11[1] = 4;
  puVar11[2] = 5;
  iVar9 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar9 + 0x10);
  iVar12 = iVar6 + 1;
  uVar7 = *(uint *)(iVar9 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar12) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar12) {
      iVar8 = iVar12;
    }
    FUN_008a6e40((int *)(iVar9 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar9 + 0x10) = iVar12;
  puVar11 = (undefined4 *)(*(int *)(iVar9 + 0xc) + iVar6 * 0xc);
  *puVar11 = 4;
  puVar11[1] = 7;
  puVar11[2] = 3;
  iVar9 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar9 + 0x10);
  iVar12 = iVar6 + 1;
  uVar7 = *(uint *)(iVar9 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar12) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar12) {
      iVar8 = iVar12;
    }
    FUN_008a6e40((int *)(iVar9 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar9 + 0x10) = iVar12;
  puVar11 = (undefined4 *)(*(int *)(iVar9 + 0xc) + iVar6 * 0xc);
  *puVar11 = 4;
  puVar11[1] = 3;
  puVar11[2] = 0;
  iVar9 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar9 + 0x10);
  iVar12 = iVar6 + 1;
  uVar7 = *(uint *)(iVar9 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar12) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar12) {
      iVar8 = iVar12;
    }
    FUN_008a6e40((int *)(iVar9 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar9 + 0x10) = iVar12;
  puVar11 = (undefined4 *)(*(int *)(iVar9 + 0xc) + iVar6 * 0xc);
  *puVar11 = 2;
  puVar11[1] = 6;
  puVar11[2] = 5;
  iVar9 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar9 + 0x10);
  iVar12 = iVar6 + 1;
  uVar7 = *(uint *)(iVar9 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar12) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar12) {
      iVar8 = iVar12;
    }
    FUN_008a6e40((int *)(iVar9 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar9 + 0x10) = iVar12;
  puVar11 = (undefined4 *)(*(int *)(iVar9 + 0xc) + iVar6 * 0xc);
  *puVar11 = 2;
  puVar11[1] = 5;
  puVar11[2] = 1;
  iVar9 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar9 + 0x10);
  iVar12 = iVar6 + 1;
  uVar7 = *(uint *)(iVar9 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar12) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar12) {
      iVar8 = iVar12;
    }
    FUN_008a6e40((int *)(iVar9 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar9 + 0x10) = iVar12;
  puVar11 = (undefined4 *)(*(int *)(iVar9 + 0xc) + iVar6 * 0xc);
  *puVar11 = 7;
  puVar11[1] = 6;
  puVar11[2] = 2;
  iVar9 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar9 + 0x10);
  iVar12 = iVar6 + 1;
  uVar7 = *(uint *)(iVar9 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar12) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar12) {
      iVar8 = iVar12;
    }
    FUN_008a6e40((int *)(iVar9 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar9 + 0x10) = iVar12;
  puVar11 = (undefined4 *)(*(int *)(iVar9 + 0xc) + iVar6 * 0xc);
  *puVar11 = 7;
  puVar11[1] = 2;
  puVar11[2] = 3;
  iVar9 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar9 + 0x10);
  iVar12 = iVar6 + 1;
  uVar7 = *(uint *)(iVar9 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar12) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar12) {
      iVar8 = iVar12;
    }
    FUN_008a6e40((int *)(iVar9 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar9 + 0x10) = iVar12;
  puVar11 = (undefined4 *)(*(int *)(iVar9 + 0xc) + iVar6 * 0xc);
  *puVar11 = 1;
  puVar11[1] = 5;
  puVar11[2] = 4;
  iVar9 = *(int *)(in_ECX + 0x50);
  iVar6 = *(int *)(iVar9 + 0x10);
  iVar12 = iVar6 + 1;
  uVar7 = *(uint *)(iVar9 + 0x14) & 0x3fffffff;
  if ((int)uVar7 < iVar12) {
    iVar8 = uVar7 * 2;
    if (iVar8 <= iVar12) {
      iVar8 = iVar12;
    }
    FUN_008a6e40((int *)(iVar9 + 0xc),iVar8,0xc);
  }
  *(int *)(iVar9 + 0x10) = iVar12;
  puVar11 = (undefined4 *)(*(int *)(iVar9 + 0xc) + iVar6 * 0xc);
  *puVar11 = 1;
  puVar11[1] = 4;
  puVar11[2] = 0;
  return;
}



void FUN_0094a520(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 8;
  in_ECX[1] = 8;
  return;
}



void FUN_0094a530(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00aa2be4;
  in_ECX[2] = *param_1;
  in_ECX[3] = param_1[1];
  in_ECX[4] = 0;
  return;
}



undefined4 FUN_0094a560(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *puVar4;
  
  if (*(int *)(in_ECX + 0x10) == 0) {
    puVar1 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x18);
    puVar4 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0x80000000;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0x80000000;
      puVar4 = puVar1;
    }
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x60,8);
    *(undefined2 *)(iVar2 + 4) = 0x60;
    uVar3 = FUN_0094ccb0(puVar4);
    *(undefined4 *)(in_ECX + 0x10) = uVar3;
    if (uRam00000028 == (uRam0000002c & 0x3fffffff)) {
      FUN_008a6ee0(0x24,4);
    }
    *(undefined4 *)(iRam00000024 + uRam00000028 * 4) = *(undefined4 *)(in_ECX + 0x10);
    uRam00000028 = uRam00000028 + 1;
  }
  return *(undefined4 *)(in_ECX + 0x10);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_0094a630(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  float in_ECX;
  int unaff_EBX;
  int iVar9;
  float *pfVar10;
  undefined4 *puVar11;
  int iVar12;
  float10 fVar13;
  undefined4 uVar14;
  float fStack_314;
  int iStack_310;
  float fStack_30c;
  int *piStack_308;
  float fStack_304;
  float local_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  undefined4 uStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float afStack_2bc [15];
  int iStack_280;
  int iStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [524];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  local_300 = in_ECX;
  uVar4 = (**(code **)(*param_1 + 8))();
  switch(uVar4) {
  case 2:
  case 0xc:
  case 0xd:
  case 0x10:
  case 0x14:
    iVar8 = (**(code **)(*param_1 + 0x20))();
    if (iVar8 != -1) {
      do {
        uVar4 = (**(code **)(*param_1 + 0x28))(iVar8,auStack_220);
        FUN_0094a630(uVar4,param_2,param_3);
        iVar8 = (**(code **)(*param_1 + 0x24))(iVar8);
      } while (iVar8 != -1);
      return;
    }
    break;
  case 3:
  case 0x16:
  case 0x18:
    FUN_0094a630(param_1[3],param_2,param_3);
    return;
  case 4:
    afStack_2bc[6] = (float)param_1[3];
    afStack_2bc[3] = 0.0;
    afStack_2bc[4] = 0.0;
    afStack_2bc[5] = 0.0;
    iVar8 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x80,8);
    *(undefined2 *)(iVar8 + 4) = 0x80;
    uVar4 = FUN_00958590(afStack_2bc + 1,*(undefined4 *)((int)in_ECX + 0xc),
                         *(undefined4 *)((int)in_ECX + 8));
    FUN_00539980(param_2);
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
      FUN_008a6ee0(param_3,4);
      *(undefined4 *)(*param_3 + param_3[1] * 4) = uVar4;
      param_3[1] = param_3[1] + 1;
      return;
    }
    goto LAB_0094a995;
  case 5:
    FUN_0088fcc0(param_2,param_1 + 0xc);
    FUN_0088fcc0(param_2,param_1 + 8);
    iVar8 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x90,8);
    uVar14 = 1;
    uVar4 = 9;
    *(undefined2 *)(iVar8 + 4) = 0x90;
    fVar13 = (float10)FUN_008f2260(9,1);
    uVar4 = FUN_00916380(&fStack_2e8,afStack_2bc + 1,(float)fVar13,uVar4,uVar14);
    FUN_00539980(param_2);
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
      FUN_008a6ee0(param_3,4);
      *(undefined4 *)(*param_3 + param_3[1] * 4) = uVar4;
      param_3[1] = param_3[1] + 1;
      return;
    }
    goto LAB_0094ac60;
  case 6:
    iVar8 = FUN_0094a560(param_3);
    iVar12 = *(int *)(iVar8 + 0x50);
    fStack_304 = *(float *)(iVar12 + 4);
    iVar8 = (int)fStack_304 + 1;
    uVar6 = *(uint *)(iVar12 + 8) & 0x3fffffff;
    if ((int)uVar6 < iVar8) {
      iVar9 = uVar6 * 2;
      if (iVar9 <= iVar8) {
        iVar9 = iVar8;
      }
      FUN_008a6e40(iVar12,iVar9,0x10);
    }
    *(int *)(iVar12 + 4) = iVar8;
    FUN_0088fcc0(param_2,param_1 + 4);
    fStack_2f8 = *(float *)(iVar12 + 4);
    iVar8 = (int)fStack_2f8 + 1;
    uVar6 = *(uint *)(iVar12 + 8) & 0x3fffffff;
    if ((int)uVar6 < iVar8) {
      iVar9 = uVar6 * 2;
      if (iVar9 <= iVar8) {
        iVar9 = iVar8;
      }
      FUN_008a6e40(iVar12,iVar9,0x10);
    }
    *(int *)(iVar12 + 4) = iVar8;
    FUN_0088fcc0(param_2,param_1 + 8);
    fStack_2f8 = *(float *)(iVar12 + 4);
    iVar8 = (int)fStack_2f8 + 1;
    uVar6 = *(uint *)(iVar12 + 8) & 0x3fffffff;
    if ((int)uVar6 < iVar8) {
      iVar9 = uVar6 * 2;
      if (iVar9 <= iVar8) {
        iVar9 = iVar8;
      }
      FUN_008a6e40(iVar12,iVar9,0x10);
    }
    *(int *)(iVar12 + 4) = iVar8;
    FUN_0088fcc0(param_2,param_1 + 0xc);
    iVar9 = *(int *)(iVar12 + 0x10);
    iVar8 = iVar9 + 1;
    uVar6 = *(uint *)(iVar12 + 0x14) & 0x3fffffff;
    if ((int)uVar6 < iVar8) {
      iVar5 = uVar6 * 2;
      if (iVar5 <= iVar8) {
        iVar5 = iVar8;
      }
      FUN_008a6e40((int *)(iVar12 + 0xc),iVar5,0xc);
    }
    piVar1 = (int *)(*(int *)(iVar12 + 0xc) + iVar9 * 0xc);
    *(int *)(iVar12 + 0x10) = iVar8;
    *piVar1 = (int)fStack_304;
    piVar1[1] = (int)fStack_304 + 1;
    piVar1[2] = (int)fStack_304 + 2;
    return;
  case 7:
    iVar8 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x70,8);
    *(undefined2 *)(iVar8 + 4) = 0x70;
    uVar4 = FUN_00949ca0(param_1 + 4);
    FUN_00539980(param_2);
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
      FUN_008a6ee0(param_3,4);
    }
LAB_0094ac60:
    *(undefined4 *)(*param_3 + param_3[1] * 4) = uVar4;
    param_3[1] = param_3[1] + 1;
    return;
  case 8:
    iVar8 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x90,8);
    *(undefined2 *)(iVar8 + 4) = 0x90;
    local_300 = (float)param_1[3];
    uVar4 = FUN_008f4080(param_1 + 8,param_1 + 4,local_300,6,1);
    FUN_00539980(param_2);
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
      FUN_008a6ee0(param_3,4);
    }
    goto LAB_0094a995;
  case 9:
    (**(code **)(*param_1 + 0x1c))(&fStack_2c0);
    fStack_2d4 = 0.0;
    fStack_2d0 = 0.0;
    fStack_2cc = -0.0;
    if (fStack_2c0._0_1_ != '\0') {
      if (0 < (int)fStack_2c4) {
        FUN_008a6e40(&fStack_2d4,(uint)fStack_2c4 & ((int)fStack_2c4 < 0) - 1,0x10);
      }
      fStack_2d0 = fStack_2c4;
    }
    iVar8 = (**(code **)(*param_1 + 0x20))(fStack_2d4);
    fVar3 = fStack_2c8;
    fStack_268 = 0.0;
    fStack_264 = 0.0;
    fStack_260 = -0.0;
    if (0 < (int)fStack_2c8) {
      FUN_008a6e40(&fStack_268,(uint)fStack_2c8 & ((int)fStack_2c8 < 0) - 1,0x10);
    }
    fStack_264 = fVar3;
    if (0 < (int)fStack_2c8) {
      iVar9 = 0;
      iVar12 = 0;
      do {
        FUN_0088fcc0(param_2,iVar8 + iVar9);
        iVar12 = iVar12 + 1;
        iVar9 = iVar9 + 0x10;
      } while (iVar12 < (int)fStack_2c8);
    }
    puVar11 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x24);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0x80000000;
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0x80000000;
    }
    fStack_2fc = fStack_26c;
    fStack_2f8 = 2.24208e-44;
    local_300 = fStack_270;
    FUN_008f21e0(&local_300,puVar11,1);
    iVar8 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x60,8);
    *(undefined2 *)(iVar8 + 4) = 0x60;
    uVar4 = FUN_0094ccb0(puVar11);
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
      FUN_008a6ee0(param_3,4);
    }
    *(undefined4 *)(*param_3 + param_3[1] * 4) = uVar4;
    param_3[1] = param_3[1] + 1;
    if (-1 < (int)fStack_258) {
      FUN_008a75d0(fStack_260,(int)fStack_258 << 4,0x14);
    }
    if (-1 < (int)fStack_2c8) {
      FUN_008a75d0(fStack_2d0,(int)fStack_2c8 << 4,0x14);
      return;
    }
    break;
  case 10:
    iVar8 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x24);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_008b44a0();
    }
    piStack_308 = (int *)0x0;
    fVar3 = fStack_30c;
    if (0 < param_1[8]) {
      do {
        fStack_30c = fVar3;
        local_300 = (float)(**(code **)(*(int *)param_1[6] + 0x28))
                                     (*(undefined4 *)(param_1[7] + (int)piStack_308 * 4),auStack_228
                                     );
        fStack_30c = *(float *)(iVar8 + 0x10);
        uVar6 = *(uint *)(iVar8 + 0x14) & 0x3fffffff;
        if ((int)uVar6 < (int)fStack_30c + 1) {
          iVar12 = uVar6 * 2;
          if (iVar12 <= (int)fStack_30c + 1) {
            iVar12 = (int)fStack_30c + 1;
          }
          FUN_008a6e40((int *)(iVar8 + 0xc),iVar12,0xc);
        }
        *(int *)(iVar8 + 0x10) = (int)fStack_30c + 1;
        piVar1 = (int *)(*(int *)(iVar8 + 0xc) + (int)fStack_30c * 0xc);
        iVar12 = *(int *)(iVar8 + 4);
        *piVar1 = iVar12;
        piVar1[1] = iVar12 + 1;
        piVar1[2] = iVar12 + 2;
        iStack_310 = (int)local_300 + 0x10;
        fStack_30c = 4.2039e-45;
        do {
          local_300 = *(float *)(iVar8 + 4);
          iVar12 = (int)local_300 + 1;
          uVar6 = *(uint *)(iVar8 + 8) & 0x3fffffff;
          if ((int)uVar6 < iVar12) {
            iVar9 = uVar6 * 2;
            if (iVar9 <= iVar12) {
              iVar9 = iVar12;
            }
            FUN_008a6e40(iVar8,iVar9,0x10);
          }
          *(int *)(iVar8 + 4) = iVar12;
          FUN_0088fcc0(param_2,iStack_310);
          iStack_310 = iStack_310 + 0x10;
          fStack_30c = (float)((int)fStack_30c + -1);
        } while (fStack_30c != 0.0);
        piStack_308 = (int *)((int)piStack_308 + 1);
        fStack_30c = 0.0;
        fVar3 = 0.0;
      } while ((int)piStack_308 < param_1[8]);
    }
    iVar12 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x60,8);
    *(undefined2 *)(iVar12 + 4) = 0x60;
    uVar4 = FUN_0094ccb0(iVar8);
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
      FUN_008a6ee0(param_3,4);
    }
    *(undefined4 *)(*param_3 + param_3[1] * 4) = uVar4;
    param_3[1] = param_3[1] + 1;
    return;
  case 0xb:
    fStack_304 = 0.0;
    if (0 < param_1[3]) {
      fStack_2e0 = 0.0;
      fStack_2dc = 0.0;
      uStack_2d8 = 0.0;
      fStack_2d4 = 0.0;
      piVar1 = param_1;
      do {
        piStack_308 = piVar1 + 4;
        afStack_2bc[6] = (float)piVar1[7];
        afStack_2bc[3] = (float)DAT_00ba7a40;
        afStack_2bc[4] = (float)DAT_00ba7a44;
        afStack_2bc[5] = (float)DAT_00ba7a48;
        iVar8 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x80,8);
        *(undefined2 *)(iVar8 + 4) = 0x80;
        iVar5 = FUN_00958590(afStack_2bc + 3,*(undefined4 *)((int)local_300 + 0xc),
                             *(undefined4 *)((int)local_300 + 8));
        *(float *)(iVar5 + 0x10) = fStack_2e0;
        *(float *)(iVar5 + 0x14) = fStack_2dc;
        *(float *)(iVar5 + 0x18) = uStack_2d8;
        *(float *)(iVar5 + 0x1c) = fStack_2d4;
        *(float *)(iVar5 + 0x20) = fStack_2e0;
        *(float *)(iVar5 + 0x24) = fStack_2dc;
        *(float *)(iVar5 + 0x28) = uStack_2d8;
        *(float *)(iVar5 + 0x2c) = fStack_2d4;
        *(float *)(iVar5 + 0x30) = fStack_2e0;
        *(float *)(iVar5 + 0x34) = fStack_2dc;
        *(float *)(iVar5 + 0x38) = uStack_2d8;
        *(float *)(iVar5 + 0x3c) = fStack_2d4;
        *(undefined4 *)(iVar5 + 0x10) = 0x3f800000;
        *(undefined4 *)(iVar5 + 0x24) = 0x3f800000;
        *(undefined4 *)(iVar5 + 0x38) = 0x3f800000;
        *(float *)(iVar5 + 0x40) = fStack_2e0;
        *(float *)(iVar5 + 0x44) = fStack_2dc;
        *(float *)(iVar5 + 0x48) = uStack_2d8;
        *(float *)(iVar5 + 0x4c) = fStack_2d4;
        iVar8 = piStack_308[1];
        iVar12 = piStack_308[2];
        iVar9 = piStack_308[3];
        *(int *)(iVar5 + 0x40) = *piStack_308;
        *(int *)(iVar5 + 0x44) = iVar8;
        *(int *)(iVar5 + 0x48) = iVar12;
        *(int *)(iVar5 + 0x4c) = iVar9;
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_3,4);
        }
        *(int *)(*param_3 + param_3[1] * 4) = iVar5;
        param_3[1] = param_3[1] + 1;
        fStack_304 = (float)((int)fStack_304 + 1);
        piVar1 = piStack_308;
      } while ((int)fStack_304 < param_1[3]);
      return;
    }
    break;
  case 0xe:
    afStack_2bc[4] = 0.0;
    afStack_2bc[5] = 0.0;
    afStack_2bc[6] = 0.0;
    afStack_2bc[7] = 0.0;
    afStack_2bc[9] = 0.0;
    afStack_2bc[10] = 0.0;
    afStack_2bc[0xb] = 0.0;
    afStack_2bc[0xc] = 0.0;
    afStack_2bc[0xe] = 0.0;
    iStack_280 = param_1[8];
    iStack_27c = param_1[9];
    fStack_278 = (float)param_1[10];
    fStack_274 = (float)param_1[0xb];
    afStack_2bc[3] = 1.0;
    afStack_2bc[8] = 1.0;
    afStack_2bc[0xd] = 1.0;
    FUN_008b1f70(param_2,afStack_2bc + 3);
    FUN_0094a630(param_1[4],&fStack_260,param_3);
    return;
  case 0xf:
    FUN_008b1f70(param_2,param_1 + 8);
    FUN_0094a630(param_1[4],afStack_2bc + 3,param_3);
    return;
  case 0x11:
    iVar8 = FUN_0094a560(param_3);
    piVar1 = *(int **)(iVar8 + 0x50);
    local_300 = 0.0;
    if (0 < param_1[4]) {
      fStack_2e0 = 0.01;
      fStack_2dc = 0.0;
      uStack_2d8 = 0.0;
      fStack_2d4 = 0.0;
      fStack_304 = 2.8026e-45;
      piStack_308 = (int *)0x0;
      do {
        pfVar10 = (float *)(param_1[3] + (int)piStack_308);
        afStack_2bc[3] = *pfVar10;
        afStack_2bc[4] = pfVar10[1];
        afStack_2bc[5] = pfVar10[2];
        afStack_2bc[6] = pfVar10[3];
        iVar8 = param_1[3] + (int)piStack_308;
        iVar12 = piVar1[1];
        afStack_2bc[7] = *(float *)(iVar8 + 0x10);
        afStack_2bc[8] = *(float *)(iVar8 + 0x14);
        afStack_2bc[9] = *(float *)(iVar8 + 0x18);
        afStack_2bc[10] = *(float *)(iVar8 + 0x1c);
        iVar8 = iVar12 + 1;
        if ((int)(piVar1[2] & 0x3fffffffU) < iVar8) {
          iVar9 = (piVar1[2] & 0x3fffffffU) * 2;
          if (iVar9 <= iVar8) {
            iVar9 = iVar8;
          }
          FUN_008a6e40(piVar1,iVar9,0x10);
        }
        piVar1[1] = iVar12 + 1;
        pfVar10 = (float *)(iVar12 * 0x10 + *piVar1);
        *pfVar10 = afStack_2bc[3];
        pfVar10[1] = afStack_2bc[4];
        pfVar10[2] = afStack_2bc[5];
        pfVar10[3] = afStack_2bc[6];
        FUN_0088fcc0(param_2,pfVar10);
        iVar12 = piVar1[1];
        iVar8 = iVar12 + 1;
        if ((int)(piVar1[2] & 0x3fffffffU) < iVar8) {
          iVar9 = (piVar1[2] & 0x3fffffffU) * 2;
          if (iVar9 <= iVar8) {
            iVar9 = iVar8;
          }
          FUN_008a6e40(piVar1,iVar9,0x10);
        }
        piVar1[1] = iVar12 + 1;
        pfVar10 = (float *)(iVar12 * 0x10 + *piVar1);
        *pfVar10 = afStack_2bc[3] + fStack_2e0;
        pfVar10[1] = afStack_2bc[4] + fStack_2dc;
        pfVar10[2] = afStack_2bc[5] + uStack_2d8;
        pfVar10[3] = afStack_2bc[6] + fStack_2d4;
        iVar12 = piVar1[1];
        iVar8 = iVar12 + 1;
        if ((int)(piVar1[2] & 0x3fffffffU) < iVar8) {
          iVar9 = (piVar1[2] & 0x3fffffffU) * 2;
          if (iVar9 <= iVar8) {
            iVar9 = iVar8;
          }
          FUN_008a6e40(piVar1,iVar9,0x10);
        }
        puVar11 = (undefined4 *)(iVar12 * 0x10 + *piVar1);
        piVar1[1] = iVar12 + 1;
        *puVar11 = afStack_2bc[7];
        puVar11[1] = afStack_2bc[8];
        puVar11[2] = afStack_2bc[9];
        puVar11[3] = afStack_2bc[10];
        FUN_0088fcc0(param_2,puVar11);
        iVar12 = piVar1[4];
        iVar8 = iVar12 + 1;
        if ((int)(piVar1[5] & 0x3fffffffU) < iVar8) {
          iVar9 = (piVar1[5] & 0x3fffffffU) * 2;
          if (iVar9 <= iVar8) {
            iVar9 = iVar8;
          }
          FUN_008a6e40(piVar1 + 3,iVar9,0xc);
        }
        piVar1[4] = iVar12 + 1;
        piVar2 = (int *)(piVar1[3] + iVar12 * 0xc);
        *piVar2 = (int)fStack_304 + -2;
        piVar2[1] = (int)fStack_304 + -1;
        piVar2[2] = (int)fStack_304;
        fStack_304 = (float)((int)fStack_304 + 3);
        local_300 = (float)((int)local_300 + 1);
        piStack_308 = (int *)((int)piStack_308 + 0x20);
      } while ((int)local_300 < param_1[4]);
      return;
    }
    break;
  default:
    fStack_304 = 0.0;
    if (0 < *(int *)(DAT_00ba9510 + 0xc)) {
      do {
        puVar11 = (undefined4 *)(*(int *)(DAT_00ba9510 + 8) + (int)fStack_304 * 8);
        iVar8 = (**(code **)(*param_1 + 8))();
        if (puVar11[1] == iVar8) {
          (*(code *)*puVar11)(param_1,param_2,param_3);
        }
        fStack_304 = (float)((int)fStack_304 + 1);
      } while ((int)fStack_304 < *(int *)(DAT_00ba9510 + 0xc));
    }
    break;
  case 0x13:
    iVar8 = FUN_0094a560(param_3);
    afStack_2bc[3] = (float)param_1[8];
    afStack_2bc[4] = (float)param_1[9];
    afStack_2bc[5] = (float)param_1[10];
    afStack_2bc[6] = (float)param_1[0xb];
    iVar8 = *(int *)(iVar8 + 0x50);
    local_300 = 0.0;
    if (param_1[3] != 1 && -1 < param_1[3] + -1) {
      do {
        piStack_308 = (int *)0x0;
        if (param_1[4] != 1 && -1 < param_1[4] + -1) {
          fStack_304 = (float)(int)local_300;
          piVar1 = (int *)(iVar8 + 0xc);
          afStack_2bc[2] = fStack_304 + 1.0;
          do {
            fVar13 = (float10)(**(code **)(*param_1 + 0x24))(local_300,piStack_308);
            fStack_304 = (float)iStack_310;
            local_300 = (float)(iStack_310 + 1);
            fStack_2f8 = fStack_30c * afStack_2bc[1];
            fStack_2f4 = (float)fVar13 * afStack_2bc[2];
            fStack_2f0 = fStack_304 * afStack_2bc[3];
            fStack_2ec = afStack_2bc[4] * 0.0;
            fVar13 = (float10)(**(code **)(*param_1 + 0x24))(piStack_308,local_300);
            fStack_304 = fStack_30c + 1.0;
            fStack_2e0 = fStack_314 * fStack_2c0;
            fStack_2dc = (float)fVar13 * afStack_2bc[0];
            uStack_2d8 = fStack_304 * afStack_2bc[1];
            fStack_2d4 = afStack_2bc[2] * 0.0;
            fVar13 = (float10)(**(code **)(*param_1 + 0x24))(iStack_310 + 1,unaff_EBX);
            fStack_278 = fStack_2cc * fStack_2c8;
            fStack_274 = (float)fVar13 * fStack_2c4;
            fStack_270 = fStack_314 * fStack_2c0;
            fStack_26c = afStack_2bc[0] * 0.0;
            fVar13 = (float10)(**(code **)(*param_1 + 0x24))(unaff_EBX + 1,iStack_310);
            iVar12 = *(int *)(iVar8 + 4);
            local_300 = fStack_2d4 * fStack_2d0;
            fStack_2fc = (float)fVar13 * fStack_2cc;
            fStack_2f8 = fStack_314 * fStack_2c8;
            fStack_2f4 = fStack_2c4 * 0.0;
            uVar6 = *(uint *)(iVar8 + 8) & 0x3fffffff;
            if ((int)uVar6 < iVar12 + 1) {
              iVar9 = uVar6 * 2;
              if (iVar9 <= iVar12 + 1) {
                iVar9 = iVar12 + 1;
              }
              FUN_008a6e40(iVar8,iVar9,0x10);
            }
            *(int *)(iVar8 + 4) = iVar12 + 1;
            FUN_0088fcc0(param_2,&iStack_310);
            iVar12 = *(int *)(iVar8 + 4);
            uVar6 = *(uint *)(iVar8 + 8) & 0x3fffffff;
            if ((int)uVar6 < iVar12 + 1) {
              iVar9 = uVar6 * 2;
              if (iVar9 <= iVar12 + 1) {
                iVar9 = iVar12 + 1;
              }
              FUN_008a6e40(iVar8,iVar9,0x10);
            }
            *(int *)(iVar8 + 4) = iVar12 + 1;
            FUN_0088fcc0(param_2,&fStack_2f0);
            iVar12 = *(int *)(iVar8 + 4);
            uVar6 = *(uint *)(iVar8 + 8) & 0x3fffffff;
            if ((int)uVar6 < iVar12 + 1) {
              iVar9 = uVar6 * 2;
              if (iVar9 <= iVar12 + 1) {
                iVar9 = iVar12 + 1;
              }
              FUN_008a6e40(iVar8,iVar9,0x10);
            }
            *(int *)(iVar8 + 4) = iVar12 + 1;
            FUN_0088fcc0(param_2,&iStack_280);
            iVar12 = *(int *)(iVar8 + 4);
            uVar6 = *(uint *)(iVar8 + 8) & 0x3fffffff;
            if ((int)uVar6 < iVar12 + 1) {
              iVar9 = uVar6 * 2;
              if (iVar9 <= iVar12 + 1) {
                iVar9 = iVar12 + 1;
              }
              FUN_008a6e40(iVar8,iVar9,0x10);
            }
            *(int *)(iVar8 + 4) = iVar12 + 1;
            FUN_0088fcc0(param_2,&local_300);
            pcVar7 = (char *)(**(code **)(*param_1 + 0x28))((int)&uStack_2d8 + 3);
            fStack_2f4 = *(float *)(iVar8 + 0x10);
            iVar12 = (int)fStack_2f4 + 1;
            if (*pcVar7 == '\0') {
              uVar6 = *(uint *)(iVar8 + 0x14) & 0x3fffffff;
              if ((int)uVar6 < iVar12) {
                iVar9 = uVar6 * 2;
                if (iVar9 <= iVar12) {
                  iVar9 = iVar12;
                }
                FUN_008a6e40(piVar1,iVar9,0xc);
              }
              *(int *)(iVar8 + 0x10) = (int)fStack_2f4 + 1;
              pfVar10 = (float *)(*piVar1 + (int)fStack_2f4 * 0xc);
              fStack_2c0 = (float)((int)piStack_308 + 1);
              pfVar10[1] = fStack_2c0;
              fStack_264 = (float)((int)piStack_308 + 2);
              *pfVar10 = (float)piStack_308;
              pfVar10[2] = fStack_264;
              fStack_2f4 = *(float *)(iVar8 + 0x10);
              fStack_2fc = (float)((int)fStack_2f4 + 1);
              uVar6 = *(uint *)(iVar8 + 0x14) & 0x3fffffff;
              if ((int)uVar6 < (int)fStack_2fc) {
                iVar12 = uVar6 * 2;
                if (iVar12 <= (int)fStack_2fc) {
                  iVar12 = (int)fStack_2fc;
                }
                FUN_008a6e40(piVar1,iVar12,0xc);
              }
              *(int *)(iVar8 + 0x10) = (int)fStack_2f4 + 1;
              piVar2 = (int *)(*piVar1 + (int)fStack_2f4 * 0xc);
              *piVar2 = (int)piStack_308 + 3;
              piVar2[1] = (int)fStack_264;
              piVar2[2] = (int)fStack_2c0;
            }
            else {
              uVar6 = *(uint *)(iVar8 + 0x14) & 0x3fffffff;
              if ((int)uVar6 < iVar12) {
                iVar9 = uVar6 * 2;
                if (iVar9 <= iVar12) {
                  iVar9 = iVar12;
                }
                FUN_008a6e40(piVar1,iVar9,0xc);
              }
              *(int *)(iVar8 + 0x10) = (int)fStack_2f4 + 1;
              pfVar10 = (float *)(*piVar1 + (int)fStack_2f4 * 0xc);
              pfVar10[1] = (float)((int)piStack_308 + 1);
              pfVar10[2] = (float)((int)piStack_308 + 3);
              *pfVar10 = (float)piStack_308;
              fStack_2fc = *(float *)(iVar8 + 0x10);
              iVar12 = (int)fStack_2fc + 1;
              uVar6 = *(uint *)(iVar8 + 0x14) & 0x3fffffff;
              if ((int)uVar6 < iVar12) {
                iVar9 = uVar6 * 2;
                if (iVar9 <= iVar12) {
                  iVar9 = iVar12;
                }
                FUN_008a6e40(piVar1,iVar9,0xc);
              }
              *(int *)(iVar8 + 0x10) = (int)fStack_2fc + 1;
              pfVar10 = (float *)(*piVar1 + (int)fStack_2fc * 0xc);
              *pfVar10 = (float)piStack_308;
              pfVar10[1] = (float)((int)piStack_308 + 3);
              pfVar10[2] = (float)((int)piStack_308 + 2);
            }
            piStack_308 = (int *)fStack_2f8;
          } while ((int)fStack_2f8 < param_1[4] + -1);
        }
        local_300 = (float)((int)local_300 + 1);
      } while ((int)local_300 < param_1[3] + -1);
      return;
    }
    break;
  case 0x17:
    (**(code **)(*param_1 + 0xc))(&DAT_00b2f090,0x3a83126f,&fStack_260);
    afStack_2bc[0] = 0.0;
    afStack_2bc[1] = 0.0;
    afStack_2bc[2] = 0.0;
    afStack_2bc[3] = 0.0;
    fStack_2fc = ABS(fStack_25c - fStack_26c);
    fStack_2f8 = ABS(fStack_258 - fStack_268);
    fStack_2f4 = ABS(fStack_254 - fStack_264);
    fStack_2f0 = ABS(fStack_250 - fStack_260);
    if (fStack_2f8 <= fStack_2fc) {
      if (fStack_2f4 <= fStack_2fc) {
        iVar8 = 0;
      }
      else {
        iVar8 = 2;
      }
    }
    else if (fStack_2f4 <= fStack_2f8) {
      iVar8 = 1;
    }
    else {
      iVar8 = 2;
    }
    fStack_304 = 0.5;
    fStack_2ec = (fStack_25c - fStack_26c) * 0.5;
    fStack_2e8 = (fStack_258 - fStack_268) * 0.5;
    fStack_2e4 = (fStack_254 - fStack_264) * 0.5;
    fStack_2e0 = (fStack_250 - fStack_260) * 0.5;
    fStack_2dc = fStack_2ec + fStack_26c;
    uStack_2d8 = fStack_2e8 + fStack_268;
    fStack_2d4 = fStack_2e4 + fStack_264;
    fStack_2d0 = fStack_2e0 + fStack_260;
    afStack_2bc[iVar8] = 1.0;
    iVar8 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xa0,8);
    *(undefined2 *)(iVar8 + 4) = 0xa0;
    uVar4 = FUN_0094d710(param_1 + 4,afStack_2bc + 1,&uStack_2d8,&fStack_2e8);
    FUN_00539980(param_2);
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
      FUN_008a6ee0(param_3,4);
      *(undefined4 *)(*param_3 + param_3[1] * 4) = uVar4;
      param_3[1] = param_3[1] + 1;
      return;
    }
LAB_0094a995:
    *(undefined4 *)(*param_3 + param_3[1] * 4) = uVar4;
    param_3[1] = param_3[1] + 1;
    return;
  case 0x19:
    FUN_008b1f70(param_2,param_1 + 8);
    FUN_0094a630(param_1[3],afStack_2bc + 3,param_3);
    return;
  }
  return;
}



void FUN_0094b7e0(undefined4 param_1,int param_2)

{
  int in_ECX;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  uStack_2c = 0;
  uStack_24 = 0;
  local_50 = 0x3f800000;
  uStack_3c = 0x3f800000;
  uStack_28 = 0x3f800000;
  local_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_0094a630(param_1,&local_50,param_2);
  return;
}



void FUN_0094b840(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0x3a83126f;
  return;
}



void FUN_0094b850(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00aa2be4;
  in_ECX[2] = *param_1;
  in_ECX[3] = 0;
  return;
}



float10 FUN_0094b8b0(void)

{
  float fVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float local_28;
  int local_24;
  float *local_1c;
  int local_18;
  int local_14;
  
  puVar2 = (undefined4 *)FUN_00916bc0();
  local_1c = (float *)0x0;
  local_18 = 0;
  local_14 = -0x80000000;
  FUN_00917200(&local_1c);
  local_28 = -1000.0;
  if (0 < local_18) {
    local_24 = local_18;
    pfVar5 = local_1c;
    do {
      if (0 < (int)puVar2[1]) {
        pfVar3 = (float *)*puVar2;
        iVar4 = puVar2[1];
        do {
          fVar1 = pfVar5[2] * pfVar3[2] + pfVar5[1] * pfVar3[1] + *pfVar5 * *pfVar3 + pfVar3[3];
          if (local_28 < fVar1) {
            local_28 = fVar1;
          }
          pfVar3 = pfVar3 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      pfVar5 = pfVar5 + 4;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  if (-1 < local_14) {
    FUN_008a75d0(local_1c,local_14 << 4,0x14);
  }
  return (float10)local_28;
}



void FUN_0094b9b0(undefined4 param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  int *unaff_ESI;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30 [4];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  (**(code **)(*in_ECX + 0xc))(&DAT_00b2f090,param_1,local_30);
  uVar2 = 0x3f800000;
  uVar3 = 0;
  uVar4 = 0;
  if (unaff_ESI[1] == (unaff_ESI[2] & 0x3fffffffU)) {
    FUN_008a6ee0();
  }
  puVar1 = (undefined4 *)(unaff_ESI[1] * 0x10 + *unaff_ESI);
  unaff_ESI[1] = unaff_ESI[1] + 1;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = -fStack_2c;
  uVar2 = 0;
  uVar3 = 0x3f800000;
  uVar4 = 0;
  if (unaff_ESI[1] == (unaff_ESI[2] & 0x3fffffffU)) {
    FUN_008a6ee0();
  }
  puVar1 = (undefined4 *)(unaff_ESI[1] * 0x10 + *unaff_ESI);
  unaff_ESI[1] = unaff_ESI[1] + 1;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = -fStack_28;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0x3f800000;
  if (unaff_ESI[1] == (unaff_ESI[2] & 0x3fffffffU)) {
    FUN_008a6ee0();
  }
  puVar1 = (undefined4 *)(unaff_ESI[1] * 0x10 + *unaff_ESI);
  unaff_ESI[1] = unaff_ESI[1] + 1;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = -fStack_24;
  uVar2 = 0xbf800000;
  uVar3 = 0;
  uVar4 = 0;
  if (unaff_ESI[1] == (unaff_ESI[2] & 0x3fffffffU)) {
    FUN_008a6ee0();
  }
  puVar1 = (undefined4 *)(unaff_ESI[1] * 0x10 + *unaff_ESI);
  unaff_ESI[1] = unaff_ESI[1] + 1;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uStack_3c;
  uVar2 = 0;
  uVar3 = 0xbf800000;
  uVar4 = 0;
  if (unaff_ESI[1] == (unaff_ESI[2] & 0x3fffffffU)) {
    FUN_008a6ee0();
  }
  puVar1 = (undefined4 *)(unaff_ESI[1] * 0x10 + *unaff_ESI);
  unaff_ESI[1] = unaff_ESI[1] + 1;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uStack_38;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0xbf800000;
  if (unaff_ESI[1] == (unaff_ESI[2] & 0x3fffffffU)) {
    FUN_008a6ee0();
  }
  puVar1 = (undefined4 *)(unaff_ESI[1] * 0x10 + *unaff_ESI);
  unaff_ESI[1] = unaff_ESI[1] + 1;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uStack_34;
  return;
}



void FUN_0094bbc0(byte param_1)

{
  FUN_0094bbf0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_0094bbf0(void)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[4]) {
    FUN_008a75d0(in_ECX[2],in_ECX[4] << 3,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



undefined4 FUN_0094bc40(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int iVar3;
  undefined4 unaff_EDI;
  uint uVar4;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  undefined4 uStack_c;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x80000000;
  thunk_FUN_0092c240();
  uVar4 = local_14;
  if ((int)local_14 < 1) {
    if ((local_10 & 0x80000000) == 0) {
      FUN_008a75d0(local_18,local_10 << 4,0x14);
    }
    return 0;
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0x80000000;
  if (0 < (int)local_14) {
    FUN_008a6e40(&local_24,local_14 & ((int)local_14 < 0) - 1,0x10);
  }
  local_20 = uVar4;
  if (0 < (int)uVar4) {
    iVar3 = 0;
    do {
      FUN_0088fcc0(param_1,iVar3 + local_18);
      iVar3 = iVar3 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = 0x80000000;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[5] = 0x80000000;
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  uStack_c = 0x10;
  FUN_008f21e0(&local_14,puVar1,1);
  iVar3 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x60,8);
  *(undefined2 *)(iVar3 + 4) = 0x60;
  uVar2 = FUN_0094ccb0(puVar1);
  if (-1 < unaff_EBP) {
    FUN_008a75d0(unaff_EDI,unaff_EBP << 4,0x14);
  }
  if (-1 < (int)local_20) {
    FUN_008a75d0(unaff_EBX,local_20 << 4,0x14);
  }
  return uVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0094be00(int *param_1,undefined4 param_2,int *param_3)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined4 uVar14;
  char *pcVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int in_ECX;
  float *pfVar20;
  int iVar21;
  int iVar22;
  float *pfVar23;
  int unaff_FS_OFFSET;
  float10 fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float *pfStack_364;
  float *pfStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  undefined1 auStack_348 [4];
  float fStack_344;
  undefined1 auStack_340 [8];
  undefined8 uStack_338;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_318;
  undefined1 uStack_311;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  int iStack_280;
  int iStack_27c;
  int iStack_278;
  int iStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  undefined1 auStack_260 [64];
  undefined1 auStack_220 [524];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  uVar14 = (**(code **)(*param_1 + 8))();
  switch(uVar14) {
  case 2:
  case 0xc:
  case 0xd:
  case 0x10:
  case 0x14:
    iVar19 = (**(code **)(*param_1 + 0x20))();
    if (iVar19 != -1) {
      do {
        uVar14 = (**(code **)(*param_1 + 0x28))(iVar19,auStack_220);
        FUN_0094be00(uVar14,param_2,param_3);
        iVar19 = (**(code **)(*param_1 + 0x24))(iVar19);
      } while (iVar19 != -1);
      return;
    }
    break;
  case 3:
  case 0x16:
  case 0x18:
    FUN_0094be00(param_1[3],param_2,param_3);
    return;
  case 4:
  case 8:
  case 0xb:
  case 0x11:
  case 0x13:
  case 0x17:
    break;
  case 5:
    fVar24 = (float10)FUN_008f2260();
    fStack_368 = (float)fVar24;
    pfStack_364 = (float *)param_1[3];
    if (*(float *)(in_ECX + 8) < (float)pfStack_364) {
      FUN_0088fcc0(param_2,param_1 + 0xc);
      FUN_0088fcc0(param_2,param_1 + 8);
      fStack_2f0 = fStack_330 - (float)pfStack_360;
      fStack_2ec = fStack_32c - fStack_35c;
      fStack_2e8 = fStack_328 - fStack_358;
      fStack_2e4 = fStack_324 - fStack_354;
      fVar25 = fStack_2ec * fStack_2ec;
      fStack_30c = fStack_2e8 * fStack_2e8;
      auVar31._4_4_ = fVar25;
      auVar31._0_4_ = fVar25;
      auVar31._8_4_ = fVar25;
      auVar31._12_4_ = fVar25;
      auVar32._4_12_ = auVar31._4_12_;
      auVar32._0_4_ = fVar25 + fStack_2f0 * fStack_2f0;
      auVar7._4_4_ = fStack_30c;
      auVar7._0_4_ = fStack_30c + auVar32._0_4_;
      auVar7._8_4_ = fStack_30c;
      auVar7._12_4_ = fStack_30c;
      auVar35 = rsqrtss(auVar32,auVar7);
      fStack_310 = auVar35._0_4_;
      fStack_344 = 0.5;
      _auStack_340 = ZEXT416((uint)(fStack_310 * 0.5 *
                                   (3.0 - (fStack_30c + auVar32._0_4_) * fStack_310 * fStack_310)));
      fStack_308 = fStack_30c;
      fStack_304 = fStack_30c;
      FUN_00535aa0(pfStack_364);
      fVar25 = fStack_310 * (float)auStack_340._0_4_ * fStack_2f0;
      fVar28 = fStack_310 * (float)auStack_340._0_4_ * fStack_2ec;
      fVar27 = fStack_310 * (float)auStack_340._0_4_ * fStack_2e8;
      fVar30 = fStack_310 * (float)auStack_340._0_4_ * fStack_2e4;
      fStack_330 = fStack_330 + fVar25;
      fStack_32c = fStack_32c + fVar28;
      fStack_328 = fStack_328 + fVar27;
      fStack_324 = fStack_324 + fVar30;
      pfStack_360 = (float *)((float)pfStack_360 - fVar25);
      fStack_35c = fStack_35c - fVar28;
      fStack_358 = fStack_358 - fVar27;
      fStack_354 = fStack_354 - fVar30;
      iVar19 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x90,8);
      *(undefined2 *)(iVar19 + 4) = 0x90;
      uVar14 = FUN_00916380(auStack_340 + 8,&fStack_368,fStack_36c + fStack_370,9,1);
LAB_0094c1c6:
      FUN_00539980(param_2);
      if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
        FUN_008a6ee0(param_3,4);
      }
      *(undefined4 *)(*param_3 + param_3[1] * 4) = uVar14;
      param_3[1] = param_3[1] + 1;
      return;
    }
    break;
  case 6:
    fStack_344 = (float)param_1[3];
    if (*(float *)(in_ECX + 8) < fStack_344) {
      pfVar20 = (float *)(param_1 + 8);
      pfVar1 = (float *)(param_1 + 4);
      pfVar23 = (float *)(param_1 + 0xc);
      pfStack_364 = pfVar20;
      pcVar15 = (char *)FUN_00950b10(&uStack_311,pfVar1,pfVar20,pfVar23,0x3a83126f);
      if (*pcVar15 != '\0') {
        fStack_2d8 = *pfVar20 - *pfVar1;
        fStack_2e0 = (float)param_1[9] - (float)param_1[5];
        fStack_2dc = (float)param_1[10] - (float)param_1[6];
        fVar25 = fStack_2e0 * fStack_2e0;
        fVar28 = fStack_2dc * fStack_2dc;
        auVar33._4_4_ = fVar25;
        auVar33._0_4_ = fVar25;
        auVar33._8_4_ = fVar25;
        auVar33._12_4_ = fVar25;
        auVar34._4_12_ = auVar33._4_12_;
        auVar34._0_4_ = fVar25 + fStack_2d8 * fStack_2d8;
        auVar35._4_4_ = fVar28;
        auVar35._0_4_ = fVar28 + auVar34._0_4_;
        auVar35._8_4_ = fVar28;
        auVar35._12_4_ = fVar28;
        auVar35 = rsqrtss(auVar34,auVar35);
        fVar25 = auVar35._0_4_;
        fStack_368 = 0.5;
        fStack_2d4 = fVar25 * 0.5 * (3.0 - (fVar28 + auVar34._0_4_) * fVar25 * fVar25);
        fStack_2d8 = fStack_2d4 * fStack_2d8;
        fStack_2e0 = fStack_2d4 * fStack_2e0;
        fStack_2dc = fStack_2d4 * fStack_2dc;
        fStack_2d4 = fStack_2d4 * ((float)param_1[0xb] - (float)param_1[7]);
        fStack_2d0 = *pfVar23 - *pfVar20;
        fStack_2cc = (float)param_1[0xd] - (float)param_1[9];
        fStack_2c8 = (float)param_1[0xe] - (float)param_1[10];
        fVar25 = fStack_2cc * fStack_2cc;
        fVar28 = fStack_2c8 * fStack_2c8;
        auVar45._4_4_ = fVar25;
        auVar45._0_4_ = fVar25;
        auVar45._8_4_ = fVar25;
        auVar45._12_4_ = fVar25;
        auVar46._4_12_ = auVar45._4_12_;
        auVar46._0_4_ = fVar25 + fStack_2d0 * fStack_2d0;
        auVar2._4_4_ = fVar28;
        auVar2._0_4_ = fVar28 + auVar46._0_4_;
        auVar2._8_4_ = fVar28;
        auVar2._12_4_ = fVar28;
        auVar35 = rsqrtss(auVar46,auVar2);
        fVar25 = auVar35._0_4_;
        fStack_2c4 = fVar25 * 0.5 * (3.0 - (fVar28 + auVar46._0_4_) * fVar25 * fVar25);
        fStack_2d0 = fStack_2c4 * fStack_2d0;
        fStack_2cc = fStack_2c4 * fStack_2cc;
        fStack_2c8 = fStack_2c4 * fStack_2c8;
        fStack_2c4 = fStack_2c4 * ((float)param_1[0xf] - (float)param_1[0xb]);
        fStack_2fc = *pfVar23 - *pfVar1;
        fStack_2f8 = (float)param_1[0xd] - (float)param_1[5];
        fStack_300 = (float)param_1[0xe] - (float)param_1[6];
        fVar25 = fStack_2f8 * fStack_2f8;
        fVar28 = fStack_300 * fStack_300;
        auVar37._4_4_ = fVar25;
        auVar37._0_4_ = fVar25;
        auVar37._8_4_ = fVar25;
        auVar37._12_4_ = fVar25;
        auVar38._4_12_ = auVar37._4_12_;
        auVar38._0_4_ = fVar25 + fStack_2fc * fStack_2fc;
        auVar3._4_4_ = fVar28;
        auVar3._0_4_ = fVar28 + auVar38._0_4_;
        auVar3._8_4_ = fVar28;
        auVar3._12_4_ = fVar28;
        auVar35 = rsqrtss(auVar38,auVar3);
        fVar25 = auVar35._0_4_;
        fStack_2f0 = 3.0;
        fStack_2ec = 0.0;
        fStack_2e8 = 0.0;
        fStack_2e4 = 0.0;
        fStack_310 = 0.5;
        fStack_30c = 0.0;
        fStack_308 = 0.0;
        fStack_304 = 0.0;
        fStack_318 = *(float *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        fStack_2f4 = fVar25 * 0.5 * (3.0 - (fVar28 + auVar38._0_4_) * fVar25 * fVar25);
        fStack_2fc = fStack_2f4 * fStack_2fc;
        fStack_2f8 = fStack_2f4 * fStack_2f8;
        fStack_300 = fStack_2f4 * fStack_300;
        fStack_2f4 = fStack_2f4 * ((float)param_1[0xf] - (float)param_1[7]);
        fStack_330 = fStack_2e0 * fStack_300 - fStack_2dc * fStack_2f8;
        fStack_32c = fStack_2dc * fStack_2fc - fStack_2d8 * fStack_300;
        fStack_328 = fStack_2d8 * fStack_2f8 - fStack_2e0 * fStack_2fc;
        fStack_324 = fStack_2d4 * fStack_2f4 - fStack_2d4 * fStack_2f4;
        fStack_2c0 = fStack_2f8;
        fStack_2bc = fStack_300;
        fStack_2b8 = fStack_2fc;
        fStack_2b4 = fStack_2f4;
        fStack_270 = fStack_2dc;
        fStack_26c = fStack_2d8;
        fStack_268 = fStack_2e0;
        fStack_264 = fStack_2d4;
        pfStack_360 = (float *)FUN_008a7560(0x80,0x14);
        fVar30 = fStack_344;
        fStack_358 = 1.12104e-44;
        fStack_35c = 1.12104e-44;
        *pfStack_360 = fStack_330;
        pfStack_360[1] = fStack_32c;
        pfStack_360[2] = fStack_328;
        pfStack_360[3] = fStack_324;
        FUN_00535aa0(fStack_344);
        fStack_368 = pfStack_360[2] *
                     ((float)auStack_340._0_4_ * pfStack_360[2] + (float)param_1[6]) +
                     pfStack_360[1] *
                     ((float)auStack_340._0_4_ * pfStack_360[1] + (float)param_1[5]) +
                     *pfStack_360 * ((float)auStack_340._0_4_ * *pfStack_360 + *pfVar1);
        pfStack_360[3] = -fStack_368;
        pfStack_360[4] = -fStack_330;
        pfStack_360[5] = -fStack_32c;
        pfStack_360[6] = -fStack_328;
        pfStack_360[7] = -fStack_324;
        FUN_00535aa0(fVar30);
        fStack_368 = pfStack_360[6] *
                     ((float)auStack_340._0_4_ * pfStack_360[6] + (float)param_1[6]) +
                     pfStack_360[5] *
                     ((float)auStack_340._0_4_ * pfStack_360[5] + (float)param_1[5]) +
                     pfStack_360[4] * ((float)auStack_340._0_4_ * pfStack_360[4] + *pfVar1);
        auVar10._4_4_ = fStack_32c;
        auVar10._0_4_ = fStack_330;
        auVar10._8_4_ = fStack_328;
        fVar25 = fStack_330;
        fVar28 = fStack_32c;
        pfStack_360[7] = -fStack_368;
        uStack_338._0_4_ = fStack_330;
        auStack_340 = (undefined1  [8])auVar10._4_8_;
        uStack_338._4_4_ = fStack_324;
        pfStack_360[8] = fStack_2e0 * fStack_328 - fStack_270 * fStack_32c;
        pfStack_360[9] = fStack_2dc * fStack_330 - fStack_26c * fStack_328;
        pfStack_360[10] = fStack_2d8 * fStack_32c - fStack_268 * fStack_330;
        pfStack_360[0xb] = fStack_2d4 * fStack_324 - fStack_264 * fStack_324;
        fStack_330 = fStack_328;
        fStack_32c = fVar25;
        fStack_328 = fVar28;
        FUN_00535aa0(fVar30);
        fStack_368 = pfStack_360[10] * (fStack_2e0 * pfStack_360[10] + (float)param_1[6]) +
                     pfStack_360[9] * (fStack_2e0 * pfStack_360[9] + (float)param_1[5]) +
                     pfStack_360[8] * (fStack_2e0 * pfStack_360[8] + *pfVar1);
        pfStack_360[0xb] = -fStack_368;
        pfStack_360[0xc] = fStack_2cc * fStack_330 - fStack_2c8 * (float)auStack_340._0_4_;
        pfStack_360[0xd] = fStack_2c8 * fStack_32c - fStack_2d0 * (float)auStack_340._4_4_;
        pfStack_360[0xe] = fStack_2d0 * fStack_328 - fStack_2cc * (float)uStack_338;
        pfStack_360[0xf] = fStack_2c4 * fStack_324 - fStack_2c4 * uStack_338._4_4_;
        FUN_00535aa0(fVar30);
        fStack_368 = pfStack_360[0xe] * (fStack_2d0 * pfStack_360[0xe] + pfStack_364[2]) +
                     pfStack_360[0xd] * (fStack_2d0 * pfStack_360[0xd] + pfStack_364[1]) +
                     pfStack_360[0xc] * (fStack_2d0 * pfStack_360[0xc] + *pfStack_364);
        pfStack_360[0xf] = -fStack_368;
        pfStack_360[0x10] = (float)auStack_340._0_4_ * fStack_300 - fStack_330 * fStack_2c0;
        pfStack_360[0x11] = (float)auStack_340._4_4_ * fStack_2fc - fStack_32c * fStack_2bc;
        pfStack_360[0x12] = (float)uStack_338 * fStack_2f8 - fStack_328 * fStack_2b8;
        pfStack_360[0x13] = uStack_338._4_4_ * fStack_2f4 - fStack_324 * fStack_2b4;
        FUN_00535aa0(fVar30);
        fStack_368 = pfStack_360[0x12] * (fStack_300 * pfStack_360[0x12] + (float)param_1[0xe]) +
                     pfStack_360[0x11] * (fStack_300 * pfStack_360[0x11] + (float)param_1[0xd]) +
                     pfStack_360[0x10] * (fStack_300 * pfStack_360[0x10] + *pfVar23);
        pfStack_360[0x13] = -fStack_368;
        pfStack_360[0x14] = pfStack_360[8] + pfStack_360[0xc];
        pfStack_360[0x15] = pfStack_360[9] + pfStack_360[0xd];
        pfStack_360[0x16] = pfStack_360[10] + pfStack_360[0xe];
        pfStack_360[0x17] = pfStack_360[0xb] + pfStack_360[0xf];
        fVar25 = pfStack_360[0x14];
        fVar28 = pfStack_360[0x15];
        fVar27 = pfStack_360[0x16];
        fVar26 = fVar28 * fVar28;
        fVar29 = fVar27 * fVar27;
        auVar39._4_4_ = fVar26;
        auVar39._0_4_ = fVar26;
        auVar39._8_4_ = fVar26;
        auVar39._12_4_ = fVar26;
        auVar40._4_12_ = auVar39._4_12_;
        auVar40._0_4_ = fVar26 + fVar25 * fVar25;
        auVar11._4_8_ = uStack_338;
        auVar11._0_4_ = fVar29;
        auStack_340 = (undefined1  [8])(auVar11._0_8_ << 0x20);
        uStack_338._0_4_ = fVar29;
        uStack_338._4_4_ = fVar29;
        auVar4._4_4_ = fVar29;
        auVar4._0_4_ = fVar29 + auVar40._0_4_;
        auVar4._8_4_ = fVar29;
        auVar4._12_4_ = fVar29;
        auVar35 = rsqrtss(auVar40,auVar4);
        fVar36 = auVar35._0_4_;
        fVar26 = fStack_310 * fVar36 * (fStack_2f0 - (fVar29 + auVar40._0_4_) * fVar36 * fVar36);
        pfStack_360[0x14] = fVar26 * fVar25;
        pfStack_360[0x15] = fVar26 * fVar28;
        pfStack_360[0x16] = fVar26 * fVar27;
        pfStack_360[0x17] = fVar26 * pfStack_360[0x17];
        auStack_340._0_4_ = fVar36;
        FUN_00535aa0(fVar30);
        fStack_368 = pfStack_360[0x16] * (fStack_300 * pfStack_360[0x16] + pfStack_364[2]) +
                     pfStack_360[0x15] * (fStack_300 * pfStack_360[0x15] + pfStack_364[1]) +
                     pfStack_360[0x14] * (fStack_300 * pfStack_360[0x14] + *pfStack_364);
        pfStack_360[0x17] = -fStack_368;
        pfStack_360[0x18] = pfStack_360[0xc] + pfStack_360[0x10];
        pfStack_360[0x19] = pfStack_360[0xd] + pfStack_360[0x11];
        pfStack_360[0x1a] = pfStack_360[0xe] + pfStack_360[0x12];
        pfStack_360[0x1b] = pfStack_360[0xf] + pfStack_360[0x13];
        fVar25 = pfStack_360[0x18];
        fVar28 = pfStack_360[0x19];
        fVar27 = pfStack_360[0x1a];
        fVar26 = fVar28 * fVar28;
        fVar29 = fVar27 * fVar27;
        auVar41._4_4_ = fVar26;
        auVar41._0_4_ = fVar26;
        auVar41._8_4_ = fVar26;
        auVar41._12_4_ = fVar26;
        auVar42._4_12_ = auVar41._4_12_;
        auVar42._0_4_ = fVar26 + fVar25 * fVar25;
        auVar12._4_8_ = uStack_338;
        auVar12._0_4_ = fVar29;
        auStack_340 = (undefined1  [8])(auVar12._0_8_ << 0x20);
        uStack_338._0_4_ = fVar29;
        uStack_338._4_4_ = fVar29;
        auVar5._4_4_ = fVar29;
        auVar5._0_4_ = fVar29 + auVar42._0_4_;
        auVar5._8_4_ = fVar29;
        auVar5._12_4_ = fVar29;
        auVar35 = rsqrtss(auVar42,auVar5);
        fVar36 = auVar35._0_4_;
        fVar26 = fStack_310 * fVar36 * (fStack_2f0 - (fVar29 + auVar42._0_4_) * fVar36 * fVar36);
        pfStack_360[0x18] = fVar26 * fVar25;
        pfStack_360[0x19] = fVar26 * fVar28;
        pfStack_360[0x1a] = fVar26 * fVar27;
        pfStack_360[0x1b] = fVar26 * pfStack_360[0x1b];
        auStack_340._0_4_ = fVar36;
        FUN_00535aa0(fVar30);
        fStack_368 = pfStack_360[0x1a] * (fStack_300 * pfStack_360[0x1a] + (float)param_1[0xe]) +
                     pfStack_360[0x19] * (fStack_300 * pfStack_360[0x19] + (float)param_1[0xd]) +
                     pfStack_360[0x18] * (fStack_300 * pfStack_360[0x18] + *pfVar23);
        pfStack_360[0x1b] = -fStack_368;
        pfStack_360[0x1c] = pfStack_360[0x10] + pfStack_360[8];
        pfStack_360[0x1d] = pfStack_360[0x11] + pfStack_360[9];
        pfStack_360[0x1e] = pfStack_360[0x12] + pfStack_360[10];
        pfStack_360[0x1f] = pfStack_360[0x13] + pfStack_360[0xb];
        fVar25 = pfStack_360[0x1c];
        fVar28 = pfStack_360[0x1d];
        fVar27 = pfStack_360[0x1e];
        fVar26 = fVar28 * fVar28;
        fVar29 = fVar27 * fVar27;
        auVar43._4_4_ = fVar26;
        auVar43._0_4_ = fVar26;
        auVar43._8_4_ = fVar26;
        auVar43._12_4_ = fVar26;
        auVar44._4_12_ = auVar43._4_12_;
        auVar44._0_4_ = fVar26 + fVar25 * fVar25;
        auVar13._4_8_ = uStack_338;
        auVar13._0_4_ = fVar29;
        auStack_340 = (undefined1  [8])(auVar13._0_8_ << 0x20);
        uStack_338._0_4_ = fVar29;
        uStack_338._4_4_ = fVar29;
        auVar6._4_4_ = fVar29;
        auVar6._0_4_ = fVar29 + auVar44._0_4_;
        auVar6._8_4_ = fVar29;
        auVar6._12_4_ = fVar29;
        auVar35 = rsqrtss(auVar44,auVar6);
        fVar26 = auVar35._0_4_;
        auStack_340._0_4_ = fVar26;
        fVar26 = fStack_310 * fVar26 * (fStack_2f0 - (fVar29 + auVar44._0_4_) * fVar26 * fVar26);
        pfStack_360[0x1c] = fVar26 * fVar25;
        pfStack_360[0x1d] = fVar26 * fVar28;
        pfStack_360[0x1e] = fVar26 * fVar27;
        pfStack_360[0x1f] = fVar26 * pfStack_360[0x1f];
        FUN_00535aa0(fVar30);
        fStack_368 = pfStack_360[0x1e] * (fStack_300 * pfStack_360[0x1e] + (float)param_1[6]) +
                     pfStack_360[0x1d] * (fStack_300 * pfStack_360[0x1d] + (float)param_1[5]) +
                     pfStack_360[0x1c] * (fStack_300 * pfStack_360[0x1c] + *pfVar1);
        pfStack_360[0x1f] = -fStack_368;
        iVar19 = FUN_0094bc40(param_2);
        if (iVar19 != 0) {
          if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
            FUN_008a6ee0(param_3,4);
          }
          *(int *)(*param_3 + param_3[1] * 4) = iVar19;
          param_3[1] = param_3[1] + 1;
        }
        if (-1 < (int)fStack_358) {
          FUN_008a75d0(pfStack_360,(int)fStack_358 << 4,0x14);
          return;
        }
      }
    }
    break;
  case 7:
    fStack_368 = (float)param_1[3];
    if (*(float *)(in_ECX + 8) < fStack_368) {
      auStack_340._4_4_ = fStack_368 + (float)param_1[5];
      auStack_340._0_4_ = fStack_368 + (float)param_1[4];
      uStack_338._0_4_ = fStack_368 + (float)param_1[6];
      uStack_338._4_4_ = fStack_368 + (float)param_1[7];
      iVar19 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x70,8);
      *(undefined2 *)(iVar19 + 4) = 0x70;
      uVar14 = FUN_00949ca0(auStack_348);
      goto LAB_0094c1c6;
    }
    break;
  case 9:
    pfStack_364 = (float *)param_1[3];
    if (*(float *)(in_ECX + 8) < (float)pfStack_364) {
      puVar16 = (undefined4 *)FUN_00916bc0();
      fVar24 = (float10)FUN_0094b8b0();
      fStack_318 = (float)fVar24;
      iVar19 = 0;
      pfStack_360 = (float *)0x0;
      fStack_35c = 0.0;
      fStack_358 = -0.0;
      if (0 < (int)puVar16[1]) {
        pfStack_360 = (float *)FUN_008a7560(puVar16[1] << 4,0x14);
        fStack_358 = (float)((uint)fStack_358 & 0x40000000 | puVar16[1]);
      }
      fStack_35c = (float)puVar16[1];
      puVar17 = (undefined4 *)*puVar16;
      pfVar20 = pfStack_360;
      iVar21 = (int)fStack_35c;
      if (0 < (int)fStack_35c) {
        do {
          uVar14 = puVar17[1];
          uVar8 = puVar17[2];
          uVar9 = puVar17[3];
          *pfVar20 = (float)*puVar17;
          pfVar20[1] = (float)uVar14;
          pfVar20[2] = (float)uVar8;
          pfVar20[3] = (float)uVar9;
          puVar17 = puVar17 + 4;
          iVar21 = iVar21 + -1;
          pfVar20 = pfVar20 + 4;
        } while (iVar21 != 0);
      }
      if (0.005 - (float)pfStack_364 < fStack_318) {
        iVar21 = puVar16[1];
        if (3 < iVar21) {
          iVar22 = (iVar21 - 4U >> 2) + 1;
          iVar19 = iVar22 * 4;
          iVar18 = 0;
          do {
            iVar22 = iVar22 + -1;
            *(float *)(iVar18 + 0xc + (int)pfStack_360) =
                 *(float *)(iVar18 + 0xc + (int)pfStack_360) - (float)pfStack_364;
            *(float *)(iVar18 + 0x1c + (int)pfStack_360) =
                 *(float *)(iVar18 + 0x1c + (int)pfStack_360) - (float)pfStack_364;
            *(float *)(iVar18 + 0x2c + (int)pfStack_360) =
                 *(float *)(iVar18 + 0x2c + (int)pfStack_360) - (float)pfStack_364;
            *(float *)(iVar18 + 0x3c + (int)pfStack_360) =
                 *(float *)(iVar18 + 0x3c + (int)pfStack_360) - (float)pfStack_364;
            iVar18 = iVar18 + 0x40;
          } while (iVar22 != 0);
        }
        if (iVar19 < iVar21) {
          iVar21 = iVar21 - iVar19;
          iVar19 = iVar19 << 4;
          do {
            iVar21 = iVar21 + -1;
            *(float *)(iVar19 + 0xc + (int)pfStack_360) =
                 *(float *)(iVar19 + 0xc + (int)pfStack_360) - (float)pfStack_364;
            iVar19 = iVar19 + 0x10;
          } while (iVar21 != 0);
        }
      }
      FUN_0094b9b0(pfStack_364);
      iVar19 = FUN_0094bc40(param_2);
      if (iVar19 != 0) {
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_3,4);
        }
        *(int *)(*param_3 + param_3[1] * 4) = iVar19;
        param_3[1] = param_3[1] + 1;
      }
      if (-1 < (int)fStack_358) {
        FUN_008a75d0(pfStack_360,(int)fStack_358 << 4,0x14);
        return;
      }
    }
    break;
  case 10:
    if ((*(float *)(in_ECX + 8) < (float)param_1[3]) && (iVar19 = 0, 0 < param_1[8])) {
      do {
        uVar14 = (**(code **)(*(int *)param_1[6] + 0x28))
                           (*(undefined4 *)(param_1[7] + iVar19 * 4),auStack_220);
        FUN_0094be00(uVar14,param_2,param_3);
        iVar19 = iVar19 + 1;
      } while (iVar19 < param_1[8]);
      return;
    }
    break;
  case 0xe:
    uStack_2ac = 0;
    uStack_2a8 = 0;
    uStack_2a4 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_294 = 0;
    uStack_290 = 0;
    uStack_28c = 0;
    uStack_284 = 0;
    iStack_280 = param_1[8];
    iStack_27c = param_1[9];
    iStack_278 = param_1[10];
    iStack_274 = param_1[0xb];
    uStack_2b0 = 0x3f800000;
    uStack_29c = 0x3f800000;
    uStack_288 = 0x3f800000;
    FUN_008b1f70(param_2,&uStack_2b0);
    FUN_0094be00(param_1[4],auStack_260,param_3);
    return;
  case 0xf:
    FUN_008b1f70(param_2,param_1 + 8);
    FUN_0094be00(param_1[4],auStack_260,param_3);
    return;
  default:
    pfStack_364 = (float *)0x0;
    if (0 < *(int *)(DAT_00ba9514 + 0xc)) {
      do {
        puVar16 = (undefined4 *)(*(int *)(DAT_00ba9514 + 8) + (int)pfStack_364 * 8);
        iVar19 = (**(code **)(*param_1 + 8))();
        if (puVar16[1] == iVar19) {
          (*(code *)*puVar16)(param_1,param_2,param_3);
        }
        pfStack_364 = (float *)((int)pfStack_364 + 1);
      } while ((int)pfStack_364 < *(int *)(DAT_00ba9514 + 0xc));
      return;
    }
    break;
  case 0x19:
    FUN_008b1f70(param_2,param_1 + 8);
    FUN_0094be00(param_1[3],auStack_260,param_3);
    return;
  }
  return;
}



void FUN_0094cc50(undefined4 param_1,int param_2)

{
  int in_ECX;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  uStack_2c = 0;
  uStack_24 = 0;
  local_50 = 0x3f800000;
  uStack_3c = 0x3f800000;
  uStack_28 = 0x3f800000;
  local_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_0094be00(param_1,&local_50,param_2);
  return;
}



void FUN_0094ccb0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[0x15] = 6;
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
  in_ECX[4] = 0x3f800000;
  in_ECX[9] = 0x3f800000;
  in_ECX[0xe] = 0x3f800000;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  *in_ECX = &PTR_FUN_00aa2bec;
  in_ECX[0x14] = param_1;
  return;
}



void FUN_0094cd00(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int local_18;
  
  if (*(int *)(in_ECX + 0x50) != 0) {
    local_18 = *(int *)(*(int *)(in_ECX + 0x50) + 0x10);
    if (-1 < local_18 + -1) {
      iVar4 = (local_18 + -1) * 0xc;
      do {
        iVar7 = (*(int **)(in_ECX + 0x50))[3];
        iVar10 = *(int *)(iVar4 + 4 + iVar7);
        piVar5 = (int *)(iVar4 + iVar7);
        iVar7 = piVar5[2];
        iVar8 = *piVar5 * 0x10;
        puVar9 = (undefined4 *)(**(int **)(in_ECX + 0x50) + iVar8);
        if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_1,0x10);
        }
        puVar6 = (undefined4 *)(param_1[1] * 0x10 + *param_1);
        param_1[1] = param_1[1] + 1;
        uVar1 = puVar9[1];
        uVar2 = puVar9[2];
        uVar3 = puVar9[3];
        *puVar6 = *puVar9;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        iVar10 = iVar10 * 0x10;
        puVar9 = (undefined4 *)(**(int **)(in_ECX + 0x50) + iVar10);
        if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_1,0x10);
        }
        puVar6 = (undefined4 *)(param_1[1] * 0x10 + *param_1);
        param_1[1] = param_1[1] + 1;
        uVar1 = puVar9[1];
        uVar2 = puVar9[2];
        uVar3 = puVar9[3];
        *puVar6 = *puVar9;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        puVar9 = (undefined4 *)(**(int **)(in_ECX + 0x50) + iVar8);
        if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_1,0x10);
        }
        puVar6 = (undefined4 *)(param_1[1] * 0x10 + *param_1);
        param_1[1] = param_1[1] + 1;
        uVar1 = puVar9[1];
        uVar2 = puVar9[2];
        uVar3 = puVar9[3];
        *puVar6 = *puVar9;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        iVar7 = iVar7 * 0x10;
        puVar9 = (undefined4 *)(**(int **)(in_ECX + 0x50) + iVar7);
        if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_1,0x10);
        }
        puVar6 = (undefined4 *)(param_1[1] * 0x10 + *param_1);
        param_1[1] = param_1[1] + 1;
        uVar1 = puVar9[1];
        uVar2 = puVar9[2];
        uVar3 = puVar9[3];
        *puVar6 = *puVar9;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        puVar9 = (undefined4 *)(**(int **)(in_ECX + 0x50) + iVar10);
        if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_1,0x10);
        }
        puVar6 = (undefined4 *)(param_1[1] * 0x10 + *param_1);
        param_1[1] = param_1[1] + 1;
        uVar1 = puVar9[1];
        uVar2 = puVar9[2];
        uVar3 = puVar9[3];
        *puVar6 = *puVar9;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        puVar9 = (undefined4 *)(**(int **)(in_ECX + 0x50) + iVar7);
        if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_1,0x10);
        }
        puVar6 = (undefined4 *)(param_1[1] * 0x10 + *param_1);
        param_1[1] = param_1[1] + 1;
        uVar1 = puVar9[1];
        uVar2 = puVar9[2];
        uVar3 = puVar9[3];
        *puVar6 = *puVar9;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        iVar4 = iVar4 + -0xc;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  return;
}



void FUN_0094cef0(void)

{
  undefined4 *in_ECX;
  
  FUN_009585f0();
  in_ECX[4] = 0x40000000;
  in_ECX[5] = 0x40000000;
  in_ECX[6] = 0x18;
  in_ECX[2] = 0x3f000000;
  in_ECX[1] = 0x40400000;
  *in_ECX = 0x40a00000;
  in_ECX[3] = 0x3fc00000;
  return;
}



void FUN_0094cf30(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00958610(in_ECX + 0x40,in_ECX + 0x60,0x3e800000,0xffff0000,param_1);
  FUN_00958610(in_ECX + 0x50,in_ECX + 0x90,0x3e800000,0xffffffff,param_1);
  return;
}



void FUN_0094cf80(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar2 = FUN_008aebb0(0x3f800000,0x3f800000,0,0x3f800000);
  uVar3 = FUN_008aebb0(0x3f800000,0x3f000000,0,0x3f800000);
  uVar4 = FUN_008aebb0(0x3f800000,0,0x3f800000,0x3f800000);
  local_60 = *(undefined4 *)(in_ECX + 0x60);
  uStack_5c = *(undefined4 *)(in_ECX + 100);
  uStack_58 = *(undefined4 *)(in_ECX + 0x68);
  uStack_54 = *(undefined4 *)(in_ECX + 0x6c);
  local_70 = *(undefined4 *)(in_ECX + 0x70);
  uStack_6c = *(undefined4 *)(in_ECX + 0x74);
  uStack_68 = *(undefined4 *)(in_ECX + 0x78);
  uStack_64 = *(undefined4 *)(in_ECX + 0x7c);
  local_50 = *(undefined4 *)(in_ECX + 0x80);
  uStack_4c = *(undefined4 *)(in_ECX + 0x84);
  uStack_48 = *(undefined4 *)(in_ECX + 0x88);
  uStack_44 = *(undefined4 *)(in_ECX + 0x8c);
  local_30 = *(undefined4 *)(in_ECX + 0x90);
  uStack_2c = *(undefined4 *)(in_ECX + 0x94);
  uStack_28 = *(undefined4 *)(in_ECX + 0x98);
  uStack_24 = *(undefined4 *)(in_ECX + 0x9c);
  local_40 = *(undefined4 *)(in_ECX + 0xa0);
  uStack_3c = *(undefined4 *)(in_ECX + 0xa4);
  uStack_38 = *(undefined4 *)(in_ECX + 0xa8);
  uStack_34 = *(undefined4 *)(in_ECX + 0xac);
  local_20 = *(undefined4 *)(in_ECX + 0xb0);
  uStack_1c = *(undefined4 *)(in_ECX + 0xb4);
  uStack_18 = *(undefined4 *)(in_ECX + 0xb8);
  uStack_14 = *(undefined4 *)(in_ECX + 0xbc);
  FUN_00958750(in_ECX + 0x20,&local_60,&local_70,0xffff0000,*(undefined4 *)(in_ECX + 0xc),param_1);
  FUN_00958750(in_ECX + 0x20,&local_70,&local_50,0xff008000,*(undefined4 *)(in_ECX + 0xc),param_1);
  FUN_00958750(in_ECX + 0x20,&local_50,&local_60,0xff0000ff,*(undefined4 *)(in_ECX + 0xc),param_1);
  iVar1 = in_ECX + 0x30;
  FUN_00958750(iVar1,&local_30,&local_40,uVar2,*(undefined4 *)(in_ECX + 0xc),param_1);
  FUN_00958750(iVar1,&local_40,&local_20,uVar3,*(undefined4 *)(in_ECX + 0xc),param_1);
  FUN_00958750(iVar1,&local_20,&local_30,uVar4,*(undefined4 *)(in_ECX + 0xc),param_1);
  return;
}



void FUN_0094d100(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x50);
  uVar3 = *(undefined4 *)(iVar2 + 0x14);
  uVar4 = *(undefined4 *)(iVar2 + 0x18);
  uVar5 = *(undefined4 *)(iVar2 + 0x1c);
  *param_2 = *(undefined4 *)(iVar2 + 0x10);
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x24);
  uVar4 = *(undefined4 *)(iVar2 + 0x28);
  uVar5 = *(undefined4 *)(iVar2 + 0x2c);
  param_2[4] = *(undefined4 *)(iVar2 + 0x20);
  param_2[5] = uVar3;
  param_2[6] = uVar4;
  param_2[7] = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x34);
  uVar4 = *(undefined4 *)(iVar2 + 0x38);
  uVar5 = *(undefined4 *)(iVar2 + 0x3c);
  param_2[8] = *(undefined4 *)(iVar2 + 0x30);
  param_2[9] = uVar3;
  param_2[10] = uVar4;
  param_2[0xb] = uVar5;
  uVar3 = *(undefined4 *)(iVar2 + 0x44);
  uVar4 = *(undefined4 *)(iVar2 + 0x48);
  uVar5 = *(undefined4 *)(iVar2 + 0x4c);
  param_2[0xc] = *(undefined4 *)(iVar2 + 0x40);
  param_2[0xd] = uVar3;
  param_2[0xe] = uVar4;
  param_2[0xf] = uVar5;
  iVar1 = *(int *)(iVar1 + 0x50);
  uVar3 = *(undefined4 *)(iVar1 + 0x14);
  uVar4 = *(undefined4 *)(iVar1 + 0x18);
  uVar5 = *(undefined4 *)(iVar1 + 0x1c);
  *param_3 = *(undefined4 *)(iVar1 + 0x10);
  param_3[1] = uVar3;
  param_3[2] = uVar4;
  param_3[3] = uVar5;
  uVar3 = *(undefined4 *)(iVar1 + 0x24);
  uVar4 = *(undefined4 *)(iVar1 + 0x28);
  uVar5 = *(undefined4 *)(iVar1 + 0x2c);
  param_3[4] = *(undefined4 *)(iVar1 + 0x20);
  param_3[5] = uVar3;
  param_3[6] = uVar4;
  param_3[7] = uVar5;
  uVar3 = *(undefined4 *)(iVar1 + 0x34);
  uVar4 = *(undefined4 *)(iVar1 + 0x38);
  uVar5 = *(undefined4 *)(iVar1 + 0x3c);
  param_3[8] = *(undefined4 *)(iVar1 + 0x30);
  param_3[9] = uVar3;
  param_3[10] = uVar4;
  param_3[0xb] = uVar5;
  uVar3 = *(undefined4 *)(iVar1 + 0x44);
  uVar4 = *(undefined4 *)(iVar1 + 0x48);
  uVar5 = *(undefined4 *)(iVar1 + 0x4c);
  param_3[0xc] = *(undefined4 *)(iVar1 + 0x40);
  param_3[0xd] = uVar3;
  param_3[0xe] = uVar4;
  param_3[0xf] = uVar5;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(in_ECX + 0x90) = *param_2;
  *(undefined4 *)(in_ECX + 0x94) = uVar3;
  *(undefined4 *)(in_ECX + 0x98) = uVar4;
  *(undefined4 *)(in_ECX + 0x9c) = uVar5;
  uVar3 = param_2[5];
  uVar4 = param_2[6];
  uVar5 = param_2[7];
  *(undefined4 *)(in_ECX + 0xa0) = param_2[4];
  *(undefined4 *)(in_ECX + 0xa4) = uVar3;
  *(undefined4 *)(in_ECX + 0xa8) = uVar4;
  *(undefined4 *)(in_ECX + 0xac) = uVar5;
  uVar3 = param_2[9];
  uVar4 = param_2[10];
  uVar5 = param_2[0xb];
  *(undefined4 *)(in_ECX + 0xb0) = param_2[8];
  *(undefined4 *)(in_ECX + 0xb4) = uVar3;
  *(undefined4 *)(in_ECX + 0xb8) = uVar4;
  *(undefined4 *)(in_ECX + 0xbc) = uVar5;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(in_ECX + 0x60) = *param_3;
  *(undefined4 *)(in_ECX + 100) = uVar3;
  *(undefined4 *)(in_ECX + 0x68) = uVar4;
  *(undefined4 *)(in_ECX + 0x6c) = uVar5;
  uVar3 = param_3[5];
  uVar4 = param_3[6];
  uVar5 = param_3[7];
  *(undefined4 *)(in_ECX + 0x70) = param_3[4];
  *(undefined4 *)(in_ECX + 0x74) = uVar3;
  *(undefined4 *)(in_ECX + 0x78) = uVar4;
  *(undefined4 *)(in_ECX + 0x7c) = uVar5;
  uVar3 = param_3[9];
  uVar4 = param_3[10];
  uVar5 = param_3[0xb];
  *(undefined4 *)(in_ECX + 0x80) = param_3[8];
  *(undefined4 *)(in_ECX + 0x84) = uVar3;
  *(undefined4 *)(in_ECX + 0x88) = uVar4;
  *(undefined4 *)(in_ECX + 0x8c) = uVar5;
  uVar3 = param_2[0xd];
  uVar4 = param_2[0xe];
  uVar5 = param_2[0xf];
  *(undefined4 *)(in_ECX + 0x30) = param_2[0xc];
  *(undefined4 *)(in_ECX + 0x34) = uVar3;
  *(undefined4 *)(in_ECX + 0x38) = uVar4;
  *(undefined4 *)(in_ECX + 0x3c) = uVar5;
  uVar3 = param_3[0xd];
  uVar4 = param_3[0xe];
  uVar5 = param_3[0xf];
  *(undefined4 *)(in_ECX + 0x20) = param_3[0xc];
  *(undefined4 *)(in_ECX + 0x24) = uVar3;
  *(undefined4 *)(in_ECX + 0x28) = uVar4;
  *(undefined4 *)(in_ECX + 0x2c) = uVar5;
  return;
}



float10 FUN_0094d1b0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x90);
}



float10 FUN_0094d1c0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x94);
}



float10 FUN_0094d1d0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x98);
}



undefined4 FUN_0094d1e0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x9c);
}



void FUN_0094d1f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(in_ECX + 0x80) = *param_5;
  *(undefined4 *)(in_ECX + 0x84) = uVar1;
  *(undefined4 *)(in_ECX + 0x88) = uVar2;
  *(undefined4 *)(in_ECX + 0x8c) = uVar3;
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  *(undefined4 *)(in_ECX + 0x60) = *param_6;
  *(undefined4 *)(in_ECX + 100) = uVar1;
  *(undefined4 *)(in_ECX + 0x68) = uVar2;
  *(undefined4 *)(in_ECX + 0x6c) = uVar3;
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = param_7[3];
  *(undefined4 *)(in_ECX + 0x90) = param_2;
  *(undefined4 *)(in_ECX + 0x94) = param_3;
  *(undefined4 *)(in_ECX + 0x70) = uVar1;
  *(undefined4 *)(in_ECX + 0x74) = uVar2;
  *(undefined4 *)(in_ECX + 0x78) = uVar3;
  *(undefined4 *)(in_ECX + 0x7c) = uVar4;
  *(undefined4 *)(in_ECX + 0x98) = param_1;
  *(undefined4 *)(in_ECX + 0x9c) = param_4;
  return;
}



void FUN_0094d240(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 100);
  uVar2 = *(undefined4 *)(in_ECX + 0x68);
  uVar3 = *(undefined4 *)(in_ECX + 0x6c);
  *param_1 = *(undefined4 *)(in_ECX + 0x60);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}



void FUN_0094d250(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x84);
  uVar2 = *(undefined4 *)(in_ECX + 0x88);
  uVar3 = *(undefined4 *)(in_ECX + 0x8c);
  *param_1 = *(undefined4 *)(in_ECX + 0x80);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}



void FUN_0094d270(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 5;
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
  in_ECX[4] = 0x3f800000;
  in_ECX[9] = 0x3f800000;
  in_ECX[0xe] = 0x3f800000;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  *in_ECX = &PTR_FUN_00aa2c04;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  return;
}



void FUN_0094d2e0(int *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int local_68;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 local_40 [60];
  
  fVar1 = *(float *)(in_ECX + 0x94);
  fVar2 = *(float *)(in_ECX + 0x90);
  iVar5 = *(int *)(in_ECX + 0x9c);
  FUN_008b1eb0(in_ECX + 0x60,*(undefined4 *)(in_ECX + 0x90));
  fStack_54 = *(float *)(in_ECX + 0x98);
  local_60 = fStack_54 * *(float *)(in_ECX + 0x70);
  fStack_5c = fStack_54 * *(float *)(in_ECX + 0x74);
  fStack_58 = fStack_54 * *(float *)(in_ECX + 0x78);
  fStack_54 = fStack_54 * *(float *)(in_ECX + 0x7c);
  FUN_0088fe00(local_40,&local_60);
  local_60 = local_60 + *(float *)(in_ECX + 0x80);
  fStack_5c = fStack_5c + *(float *)(in_ECX + 0x84);
  fStack_58 = fStack_58 + *(float *)(in_ECX + 0x88);
  fStack_54 = fStack_54 + *(float *)(in_ECX + 0x8c);
  FUN_008b1eb0(in_ECX + 0x60,(fVar1 - fVar2) / (float)iVar5);
  iVar5 = *(int *)(in_ECX + 0x9c) + 2;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar5) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    FUN_008a6e40(param_1,iVar4,0x10);
  }
  pfVar3 = (float *)*param_1;
  param_1[1] = iVar5;
  *pfVar3 = local_60;
  pfVar3[1] = fStack_5c;
  pfVar3[2] = fStack_58;
  pfVar3[3] = fStack_54;
  iVar5 = 0;
  if (-1 < *(int *)(in_ECX + 0x9c)) {
    local_68 = 0;
    do {
      local_50 = local_60 - *(float *)(in_ECX + 0x80);
      fStack_4c = fStack_5c - *(float *)(in_ECX + 0x84);
      fStack_48 = fStack_58 - *(float *)(in_ECX + 0x88);
      fStack_44 = fStack_54 - *(float *)(in_ECX + 0x8c);
      FUN_0088fe00(local_40,&local_50);
      local_60 = local_50 + *(float *)(in_ECX + 0x80);
      fStack_5c = fStack_4c + *(float *)(in_ECX + 0x84);
      fStack_58 = fStack_48 + *(float *)(in_ECX + 0x88);
      fStack_54 = fStack_44 + *(float *)(in_ECX + 0x8c);
      pfVar3 = (float *)(local_68 + 0x10 + *param_1);
      *pfVar3 = local_60;
      pfVar3[1] = fStack_5c;
      pfVar3[2] = fStack_58;
      pfVar3[3] = fStack_54;
      local_68 = local_68 + 0x10;
      iVar5 = iVar5 + 1;
    } while (iVar5 <= *(int *)(in_ECX + 0x9c));
  }
  return;
}



void FUN_0094d430(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int local_c [3];
  
  local_c[0] = 0;
  local_c[1] = 0;
  local_c[2] = -0x80000000;
  FUN_0094d2e0(local_c);
  iVar8 = *(int *)(in_ECX + 0x9c) * 2;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar8) {
    iVar6 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar8) {
      iVar6 = iVar8;
    }
    FUN_008a6e40(param_1,iVar6,0x10);
  }
  param_1[1] = iVar8;
  iVar8 = 0;
  if (0 < *(int *)(in_ECX + 0x9c)) {
    iVar6 = 0;
    iVar7 = 0;
    do {
      puVar1 = (undefined4 *)(iVar7 + local_c[0]);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(*param_1 + iVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar2 = (undefined4 *)(iVar7 + 0x10 + local_c[0]);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar1 = (undefined4 *)(*param_1 + iVar6 + 0x10);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      iVar6 = iVar6 + 0x20;
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x10;
    } while (iVar8 < *(int *)(in_ECX + 0x9c));
  }
  if (-1 < local_c[2]) {
    FUN_008a75d0(local_c[0],local_c[2] << 4,0x14);
  }
  return;
}



void FUN_0094d510(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  
  puVar6 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x24);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0x80000000;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0x80000000;
  }
  *(undefined4 **)(in_ECX + 0x50) = puVar6;
  FUN_0094d2e0(puVar6);
  piVar7 = *(int **)(in_ECX + 0x50);
  if (piVar7[1] == (piVar7[2] & 0x3fffffffU)) {
    FUN_008a6ee0(piVar7,0x10);
  }
  puVar6 = (undefined4 *)(piVar7[1] * 0x10 + *piVar7);
  piVar7[1] = piVar7[1] + 1;
  uVar3 = *(undefined4 *)(in_ECX + 0x84);
  uVar4 = *(undefined4 *)(in_ECX + 0x88);
  uVar5 = *(undefined4 *)(in_ECX + 0x8c);
  *puVar6 = *(undefined4 *)(in_ECX + 0x80);
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar5;
  iVar2 = *(int *)(*(int *)(in_ECX + 0x50) + 4);
  if (0 < *(int *)(in_ECX + 0x9c)) {
    iVar9 = 0;
    iVar8 = 0;
    do {
      piVar7 = (int *)(*(int *)(*(int *)(in_ECX + 0x50) + 0xc) + iVar9);
      iVar1 = iVar8 + 1;
      piVar7[2] = iVar8;
      *piVar7 = iVar2 + -1;
      piVar7[1] = iVar1;
      iVar9 = iVar9 + 0xc;
      iVar8 = iVar1;
    } while (iVar1 < *(int *)(in_ECX + 0x9c));
  }
  return;
}



int FUN_0094d5d0(void)

{
  int in_ECX;
  
  return in_ECX + 0x60;
}



int FUN_0094d5e0(void)

{
  int in_ECX;
  
  return in_ECX + 0x80;
}



int FUN_0094d5f0(void)

{
  int in_ECX;
  
  return in_ECX + 0x90;
}



void FUN_0094d600(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = *(float *)(in_ECX + 0x80);
  fVar7 = *(float *)(in_ECX + 0x84);
  fVar5 = *(float *)(in_ECX + 0x88);
  fVar8 = *(float *)(in_ECX + 0x8c);
  fVar9 = *(float *)(in_ECX + 0x60);
  fVar10 = *(float *)(in_ECX + 100);
  fVar11 = *(float *)(in_ECX + 0x68);
  fVar1 = *(float *)(in_ECX + 0x6c);
  fVar4 = *(float *)(in_ECX + 0x74);
  fVar2 = *(float *)(in_ECX + 0x78);
  fVar3 = *(float *)(in_ECX + 0x7c);
  *param_1 = *(float *)(in_ECX + 0x70);
  param_1[1] = fVar4;
  param_1[2] = fVar2;
  param_1[3] = fVar3;
  fVar4 = *(float *)(in_ECX + 0x74);
  fVar2 = *(float *)(in_ECX + 0x78);
  fVar3 = *(float *)(in_ECX + 0x7c);
  param_1[4] = *(float *)(in_ECX + 0x70);
  param_1[5] = fVar4;
  param_1[6] = fVar2;
  param_1[7] = fVar3;
  fVar4 = *(float *)(in_ECX + 0x74);
  fVar2 = *(float *)(in_ECX + 0x78);
  fVar3 = *(float *)(in_ECX + 0x7c);
  param_1[8] = *(float *)(in_ECX + 0x70);
  param_1[9] = fVar4;
  param_1[10] = fVar2;
  param_1[0xb] = fVar3;
  fVar4 = *(float *)(in_ECX + 0x74);
  fVar2 = *(float *)(in_ECX + 0x78);
  fVar3 = *(float *)(in_ECX + 0x7c);
  param_1[0xc] = *(float *)(in_ECX + 0x70);
  param_1[0xd] = fVar4;
  param_1[0xe] = fVar2;
  param_1[0xf] = fVar3;
  fVar4 = *(float *)(in_ECX + 0x90) * (fVar10 * fVar5 - fVar11 * fVar7);
  fVar5 = *(float *)(in_ECX + 0x94) * (fVar11 * fVar6 - fVar9 * fVar5);
  fVar6 = *(float *)(in_ECX + 0x98) * (fVar9 * fVar7 - fVar10 * fVar6);
  fVar7 = *(float *)(in_ECX + 0x9c) * (fVar1 * fVar8 - fVar1 * fVar8);
  fVar8 = *(float *)(in_ECX + 0x90) * *(float *)(in_ECX + 0x80);
  fVar9 = *(float *)(in_ECX + 0x94) * *(float *)(in_ECX + 0x84);
  fVar10 = *(float *)(in_ECX + 0x98) * *(float *)(in_ECX + 0x88);
  fVar11 = *(float *)(in_ECX + 0x9c) * *(float *)(in_ECX + 0x8c);
  *param_1 = *param_1 + fVar4 + fVar8;
  param_1[1] = param_1[1] + fVar5 + fVar9;
  param_1[2] = param_1[2] + fVar6 + fVar10;
  param_1[3] = param_1[3] + fVar7 + fVar11;
  param_1[4] = param_1[4] + fVar4;
  param_1[5] = param_1[5] + fVar5;
  param_1[6] = param_1[6] + fVar6;
  param_1[7] = param_1[7] + fVar7;
  param_1[4] = param_1[4] - fVar8;
  param_1[5] = param_1[5] - fVar9;
  param_1[6] = param_1[6] - fVar10;
  param_1[7] = param_1[7] - fVar11;
  param_1[8] = param_1[8] - fVar4;
  param_1[9] = param_1[9] - fVar5;
  param_1[10] = param_1[10] - fVar6;
  param_1[0xb] = param_1[0xb] - fVar7;
  param_1[8] = param_1[8] + fVar8;
  param_1[9] = param_1[9] + fVar9;
  param_1[10] = param_1[10] + fVar10;
  param_1[0xb] = param_1[0xb] + fVar11;
  param_1[0xc] = param_1[0xc] - fVar4;
  param_1[0xd] = param_1[0xd] - fVar5;
  param_1[0xe] = param_1[0xe] - fVar6;
  param_1[0xf] = param_1[0xf] - fVar7;
  param_1[0xc] = param_1[0xc] - fVar8;
  param_1[0xd] = param_1[0xd] - fVar9;
  param_1[0xe] = param_1[0xe] - fVar10;
  param_1[0xf] = param_1[0xf] - fVar11;
  return;
}



void FUN_0094d6d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(in_ECX + 0x60) = *param_1;
  *(undefined4 *)(in_ECX + 100) = uVar1;
  *(undefined4 *)(in_ECX + 0x68) = uVar2;
  *(undefined4 *)(in_ECX + 0x6c) = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(in_ECX + 0x70) = *param_3;
  *(undefined4 *)(in_ECX + 0x74) = uVar1;
  *(undefined4 *)(in_ECX + 0x78) = uVar2;
  *(undefined4 *)(in_ECX + 0x7c) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(in_ECX + 0x80) = *param_2;
  *(undefined4 *)(in_ECX + 0x84) = uVar1;
  *(undefined4 *)(in_ECX + 0x88) = uVar2;
  *(undefined4 *)(in_ECX + 0x8c) = uVar3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(in_ECX + 0x90) = *param_4;
  *(undefined4 *)(in_ECX + 0x94) = uVar1;
  *(undefined4 *)(in_ECX + 0x98) = uVar2;
  *(undefined4 *)(in_ECX + 0x9c) = uVar3;
  return;
}



void FUN_0094d710(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 7;
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
  in_ECX[4] = 0x3f800000;
  in_ECX[9] = 0x3f800000;
  in_ECX[0xe] = 0x3f800000;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  *in_ECX = &PTR_FUN_00aa2c14;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  in_ECX[0x18] = *param_1;
  in_ECX[0x19] = uVar1;
  in_ECX[0x1a] = uVar2;
  in_ECX[0x1b] = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  in_ECX[0x1c] = *param_3;
  in_ECX[0x1d] = uVar1;
  in_ECX[0x1e] = uVar2;
  in_ECX[0x1f] = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  in_ECX[0x20] = *param_2;
  in_ECX[0x21] = uVar1;
  in_ECX[0x22] = uVar2;
  in_ECX[0x23] = uVar3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  in_ECX[0x24] = *param_4;
  in_ECX[0x25] = uVar1;
  in_ECX[0x26] = uVar2;
  in_ECX[0x27] = uVar3;
  return;
}



void FUN_0094d790(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 7;
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
  in_ECX[4] = 0x3f800000;
  in_ECX[9] = 0x3f800000;
  in_ECX[0xe] = 0x3f800000;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  *in_ECX = &PTR_FUN_00aa2c14;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  return;
}



void FUN_0094d7f0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar3 = param_1[2] & 0x3fffffff;
  if (uVar3 < 0xc) {
    uVar4 = uVar3 * 2;
    if (uVar3 == 6 || uVar4 < 0xc) {
      uVar4 = 0xc;
    }
    FUN_008a6e40(param_1,uVar4,0x10);
  }
  param_1[1] = 0xc;
  FUN_0094d600(&local_50);
  puVar1 = (undefined4 *)*param_1;
  *puVar1 = local_50;
  puVar1[1] = uStack_4c;
  puVar1[2] = uStack_48;
  puVar1[3] = uStack_44;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x10) = local_40;
  *(undefined4 *)(iVar2 + 0x14) = uStack_3c;
  *(undefined4 *)(iVar2 + 0x18) = uStack_38;
  *(undefined4 *)(iVar2 + 0x1c) = uStack_34;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x20) = local_40;
  *(undefined4 *)(iVar2 + 0x24) = uStack_3c;
  *(undefined4 *)(iVar2 + 0x28) = uStack_38;
  *(undefined4 *)(iVar2 + 0x2c) = uStack_34;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x30) = local_30;
  *(undefined4 *)(iVar2 + 0x34) = uStack_2c;
  *(undefined4 *)(iVar2 + 0x38) = uStack_28;
  *(undefined4 *)(iVar2 + 0x3c) = uStack_24;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x40) = local_30;
  *(undefined4 *)(iVar2 + 0x44) = uStack_2c;
  *(undefined4 *)(iVar2 + 0x48) = uStack_28;
  *(undefined4 *)(iVar2 + 0x4c) = uStack_24;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x50) = local_20;
  *(undefined4 *)(iVar2 + 0x54) = uStack_1c;
  *(undefined4 *)(iVar2 + 0x58) = uStack_18;
  *(undefined4 *)(iVar2 + 0x5c) = uStack_14;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x60) = local_20;
  *(undefined4 *)(iVar2 + 100) = uStack_1c;
  *(undefined4 *)(iVar2 + 0x68) = uStack_18;
  *(undefined4 *)(iVar2 + 0x6c) = uStack_14;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x70) = local_50;
  *(undefined4 *)(iVar2 + 0x74) = uStack_4c;
  *(undefined4 *)(iVar2 + 0x78) = uStack_48;
  *(undefined4 *)(iVar2 + 0x7c) = uStack_44;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x80) = local_50;
  *(undefined4 *)(iVar2 + 0x84) = uStack_4c;
  *(undefined4 *)(iVar2 + 0x88) = uStack_48;
  *(undefined4 *)(iVar2 + 0x8c) = uStack_44;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x90) = local_30;
  *(undefined4 *)(iVar2 + 0x94) = uStack_2c;
  *(undefined4 *)(iVar2 + 0x98) = uStack_28;
  *(undefined4 *)(iVar2 + 0x9c) = uStack_24;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0xa0) = local_40;
  *(undefined4 *)(iVar2 + 0xa4) = uStack_3c;
  *(undefined4 *)(iVar2 + 0xa8) = uStack_38;
  *(undefined4 *)(iVar2 + 0xac) = uStack_34;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0xb0) = local_20;
  *(undefined4 *)(iVar2 + 0xb4) = uStack_1c;
  *(undefined4 *)(iVar2 + 0xb8) = uStack_18;
  *(undefined4 *)(iVar2 + 0xbc) = uStack_14;
  return;
}



void FUN_0094d8b0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int in_ECX;
  undefined4 *puVar10;
  
  puVar7 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x24);
  puVar10 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0x80000000;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0x80000000;
    puVar10 = puVar7;
  }
  *(undefined4 **)(in_ECX + 0x50) = puVar10;
  if ((puVar10[2] & 0x3fffffff) < 5) {
    uVar8 = (puVar10[2] & 0x3fffffff) * 2;
    if (uVar8 < 6) {
      uVar8 = 5;
    }
    FUN_008a6e40(puVar10,uVar8,0x10);
  }
  puVar10[1] = 5;
  iVar1 = **(int **)(in_ECX + 0x50);
  uVar4 = *(undefined4 *)(in_ECX + 0x74);
  uVar5 = *(undefined4 *)(in_ECX + 0x78);
  uVar6 = *(undefined4 *)(in_ECX + 0x7c);
  *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(in_ECX + 0x70);
  *(undefined4 *)(iVar1 + 0x44) = uVar4;
  *(undefined4 *)(iVar1 + 0x48) = uVar5;
  *(undefined4 *)(iVar1 + 0x4c) = uVar6;
  FUN_0094d600(**(undefined4 **)(in_ECX + 0x50));
  iVar2 = *(int *)(in_ECX + 0x50);
  iVar3 = *(int *)(iVar2 + 0x10);
  iVar1 = iVar3 + 1;
  uVar8 = *(uint *)(iVar2 + 0x14) & 0x3fffffff;
  if ((int)uVar8 < iVar1) {
    iVar9 = uVar8 * 2;
    if (iVar9 <= iVar1) {
      iVar9 = iVar1;
    }
    FUN_008a6e40((int *)(iVar2 + 0xc),iVar9,0xc);
  }
  *(int *)(iVar2 + 0x10) = iVar1;
  puVar10 = (undefined4 *)(*(int *)(iVar2 + 0xc) + iVar3 * 0xc);
  *puVar10 = 2;
  puVar10[1] = 4;
  puVar10[2] = 3;
  iVar2 = *(int *)(in_ECX + 0x50);
  iVar3 = *(int *)(iVar2 + 0x10);
  iVar1 = iVar3 + 1;
  uVar8 = *(uint *)(iVar2 + 0x14) & 0x3fffffff;
  if ((int)uVar8 < iVar1) {
    iVar9 = uVar8 * 2;
    if (iVar9 <= iVar1) {
      iVar9 = iVar1;
    }
    FUN_008a6e40((int *)(iVar2 + 0xc),iVar9,0xc);
  }
  *(int *)(iVar2 + 0x10) = iVar1;
  puVar10 = (undefined4 *)(*(int *)(iVar2 + 0xc) + iVar3 * 0xc);
  *puVar10 = 0;
  puVar10[1] = 4;
  puVar10[2] = 2;
  iVar2 = *(int *)(in_ECX + 0x50);
  iVar3 = *(int *)(iVar2 + 0x10);
  iVar1 = iVar3 + 1;
  uVar8 = *(uint *)(iVar2 + 0x14) & 0x3fffffff;
  if ((int)uVar8 < iVar1) {
    iVar9 = uVar8 * 2;
    if (iVar9 <= iVar1) {
      iVar9 = iVar1;
    }
    FUN_008a6e40((int *)(iVar2 + 0xc),iVar9,0xc);
  }
  *(int *)(iVar2 + 0x10) = iVar1;
  puVar10 = (undefined4 *)(*(int *)(iVar2 + 0xc) + iVar3 * 0xc);
  *puVar10 = 1;
  puVar10[1] = 4;
  puVar10[2] = 0;
  iVar2 = *(int *)(in_ECX + 0x50);
  iVar3 = *(int *)(iVar2 + 0x10);
  iVar1 = iVar3 + 1;
  uVar8 = *(uint *)(iVar2 + 0x14) & 0x3fffffff;
  if ((int)uVar8 < iVar1) {
    iVar9 = uVar8 * 2;
    if (iVar9 <= iVar1) {
      iVar9 = iVar1;
    }
    FUN_008a6e40((int *)(iVar2 + 0xc),iVar9,0xc);
  }
  *(int *)(iVar2 + 0x10) = iVar1;
  puVar10 = (undefined4 *)(*(int *)(iVar2 + 0xc) + iVar3 * 0xc);
  *puVar10 = 3;
  puVar10[1] = 4;
  puVar10[2] = 1;
  return;
}



float10 FUN_0094da60(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x88);
}



float10 FUN_0094da70(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x84);
}



undefined4 FUN_0094da80(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x80);
}



void FUN_0094da90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x84) = param_1;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(in_ECX + 0x60) = *param_5;
  *(undefined4 *)(in_ECX + 100) = uVar1;
  *(undefined4 *)(in_ECX + 0x68) = uVar2;
  *(undefined4 *)(in_ECX + 0x6c) = uVar3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(in_ECX + 0x70) = *param_4;
  *(undefined4 *)(in_ECX + 0x74) = uVar1;
  *(undefined4 *)(in_ECX + 0x78) = uVar2;
  *(undefined4 *)(in_ECX + 0x7c) = uVar3;
  *(undefined4 *)(in_ECX + 0x88) = param_2;
  *(undefined4 *)(in_ECX + 0x80) = param_3;
  return;
}



void FUN_0094dad0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x74);
  uVar2 = *(undefined4 *)(in_ECX + 0x78);
  uVar3 = *(undefined4 *)(in_ECX + 0x7c);
  *param_1 = *(undefined4 *)(in_ECX + 0x70);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}



void FUN_0094dae0(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[0x15] = 4;
  in_ECX[0x14] = 0;
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
  in_ECX[4] = 0x3f800000;
  in_ECX[9] = 0x3f800000;
  in_ECX[0xe] = 0x3f800000;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  *in_ECX = &PTR_FUN_00aa2c2c;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  return;
}



void FUN_0094db40(int *param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  float *pfVar9;
  int in_ECX;
  uint uVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_50 [4];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar12 = *(int *)(in_ECX + 0x80);
  if ((int)(param_1[2] & 0x3fffffffU) < iVar12) {
    iVar11 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar11 <= iVar12) {
      iVar11 = iVar12;
    }
    FUN_008a6e40(param_1,iVar11,0x10);
  }
  param_1[1] = iVar12;
  pfVar1 = (float *)(in_ECX + 0x70);
  bVar4 = ABS(*(float *)(in_ECX + 0x70)) <= ABS(*(float *)(in_ECX + 0x74));
  fVar14 = ABS(*(float *)(in_ECX + 0x70));
  if (!bVar4) {
    fVar14 = ABS(*(float *)(in_ECX + 0x74));
  }
  uVar10 = (uint)!bVar4;
  if (fVar14 <= ABS(*(float *)(in_ECX + 0x78))) {
    uVar8 = 2;
  }
  else {
    uVar8 = uVar10;
    uVar10 = 2;
  }
  local_50[uVar10] = 0.0;
  local_50[bVar4] = pfVar1[uVar8];
  uVar3 = *(undefined4 *)(in_ECX + 0x84);
  local_50[uVar8] = -pfVar1[bVar4];
  fVar14 = local_50[1] * local_50[1];
  fStack_1c = local_50[2] * local_50[2];
  auVar17._4_4_ = fVar14;
  auVar17._0_4_ = fVar14;
  auVar17._8_4_ = fVar14;
  auVar17._12_4_ = fVar14;
  auVar18._4_12_ = auVar17._4_12_;
  auVar18._0_4_ = fVar14 + local_50[0] * local_50[0];
  auVar19._4_4_ = fStack_1c;
  auVar19._0_4_ = fStack_1c + auVar18._0_4_;
  auVar19._8_4_ = fStack_1c;
  auVar19._12_4_ = fStack_1c;
  auVar19 = rsqrtss(auVar18,auVar19);
  local_20 = auVar19._0_4_;
  local_50[3] = local_20 * 0.5 * (3.0 - (fStack_1c + auVar18._0_4_) * local_20 * local_20);
  local_50[0] = local_50[3] * local_50[0];
  local_50[1] = local_50[3] * local_50[1];
  local_50[2] = local_50[3] * local_50[2];
  local_50[3] = local_50[3] * 0.0;
  fStack_18 = fStack_1c;
  fStack_14 = fStack_1c;
  FUN_008b1b00(local_50,uVar3);
  FUN_008b1b00(pfVar1,6.2831855 / (float)*(int *)(in_ECX + 0x80));
  fVar16 = *pfVar1;
  fVar21 = *(float *)(in_ECX + 0x74);
  fVar5 = *(float *)(in_ECX + 0x78);
  fVar22 = *(float *)(in_ECX + 0x7c);
  fVar14 = (fStack_34 * fStack_34 + fStack_34 * fStack_34) - 1.0;
  fVar20 = fStack_38 * fVar5 + fStack_3c * fVar21 + local_40 * fVar16;
  fVar20 = fVar20 + fVar20;
  fStack_34 = fStack_34 + fStack_34;
  iVar12 = 0;
  fVar13 = fVar14 * fVar16 + fVar20 * local_40 +
           fStack_34 * (fStack_3c * fVar5 - fStack_38 * fVar21);
  fVar15 = fVar14 * fVar21 + fVar20 * fStack_3c +
           fStack_34 * (fStack_38 * fVar16 - local_40 * fVar5);
  fVar16 = fVar14 * fVar5 + fVar20 * fStack_38 +
           fStack_34 * (local_40 * fVar21 - fStack_3c * fVar16);
  fVar14 = fVar14 * fVar22 + fVar20 * 0.0 + fStack_34 * (fVar22 * 0.0 - fVar22 * 0.0);
  if (0 < *(int *)(in_ECX + 0x80)) {
    iVar11 = 0;
    do {
      uVar3 = *(undefined4 *)(in_ECX + 100);
      uVar6 = *(undefined4 *)(in_ECX + 0x68);
      uVar7 = *(undefined4 *)(in_ECX + 0x6c);
      puVar2 = (undefined4 *)(*param_1 + iVar11);
      *puVar2 = *(undefined4 *)(in_ECX + 0x60);
      puVar2[1] = uVar3;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      fVar20 = *(float *)(in_ECX + 0x88);
      pfVar1 = (float *)(*param_1 + iVar11);
      fVar21 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar22 = pfVar1[3];
      pfVar9 = (float *)(*param_1 + iVar11);
      *pfVar9 = *pfVar1 + fVar20 * fVar13;
      pfVar9[1] = fVar21 + fVar20 * fVar15;
      pfVar9[2] = fVar5 + fVar20 * fVar16;
      pfVar9[3] = fVar22 + fVar20 * fVar14;
      fVar20 = (fStack_24 * fStack_24 + fStack_24 * fStack_24) - 1.0;
      fVar21 = fStack_28 * fVar16 + fStack_2c * fVar15 + local_30 * fVar13;
      fVar21 = fVar21 + fVar21;
      fVar5 = fStack_24 + fStack_24;
      fVar22 = fStack_2c * fVar13;
      fVar23 = fStack_28 * fVar13;
      fVar24 = local_30 * fVar15;
      iVar12 = iVar12 + 1;
      iVar11 = iVar11 + 0x10;
      fVar13 = fVar20 * fVar13 + fVar21 * local_30 +
               fVar5 * (fStack_2c * fVar16 - fStack_28 * fVar15);
      fVar15 = fVar20 * fVar15 + fVar21 * fStack_2c + fVar5 * (fVar23 - local_30 * fVar16);
      fVar16 = fVar20 * fVar16 + fVar21 * fStack_28 + fVar5 * (fVar24 - fVar22);
      fVar14 = fVar20 * fVar14 + fVar21 * 0.0 + fVar5 * (fVar14 * 0.0 - fVar14 * 0.0);
    } while (iVar12 < *(int *)(in_ECX + 0x80));
  }
  return;
}



void FUN_0094de80(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int local_c [3];
  
  local_c[0] = 0;
  local_c[1] = 0;
  local_c[2] = -0x80000000;
  FUN_0094db40(local_c);
  iVar8 = *(int *)(in_ECX + 0x80) * 4;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar8) {
    iVar6 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar8) {
      iVar6 = iVar8;
    }
    FUN_008a6e40(param_1,iVar6,0x10);
  }
  param_1[1] = iVar8;
  iVar8 = 0;
  if (0 < *(int *)(in_ECX + 0x80)) {
    iVar7 = 0;
    iVar6 = 0;
    do {
      uVar3 = *(undefined4 *)(in_ECX + 100);
      uVar4 = *(undefined4 *)(in_ECX + 0x68);
      uVar5 = *(undefined4 *)(in_ECX + 0x6c);
      puVar1 = (undefined4 *)(*param_1 + iVar7);
      *puVar1 = *(undefined4 *)(in_ECX + 0x60);
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar1 = (undefined4 *)(iVar6 + local_c[0]);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(*param_1 + 0x10 + iVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(iVar6 + local_c[0]);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      iVar6 = iVar6 + 0x10;
      puVar2 = (undefined4 *)(*param_1 + iVar7 + 0x20);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x40;
      puVar1 = (undefined4 *)((iVar8 % *(int *)(in_ECX + 0x80)) * 0x10 + local_c[0]);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(*param_1 + -0x10 + iVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
    } while (iVar8 < *(int *)(in_ECX + 0x80));
  }
  if (-1 < local_c[2]) {
    FUN_008a75d0(local_c[0],local_c[2] << 4,0x14);
  }
  return;
}



void FUN_0094e0a0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int in_ECX;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uStack_154;
  int iStack_14c;
  int *local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  int *local_130;
  undefined4 uStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  int *local_120;
  undefined4 uStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  int local_108;
  int local_104;
  uint local_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 local_a0 [16];
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_00958600(param_2);
  FUN_0094d100(param_1,local_90,local_50);
  iVar1 = in_ECX + 0x50;
  FUN_0088fcc0(local_90,iVar2 + 0x40);
  FUN_0088fcc0(local_50,iVar2 + 0x10);
  FUN_0094cf30(param_3);
  FUN_0088fe00(in_ECX + 0x90,iVar2 + 0x60);
  local_f0 = *(float *)(iVar2 + 100) * *(float *)(iVar2 + 0x58) -
             *(float *)(iVar2 + 0x68) * *(float *)(iVar2 + 0x54);
  fStack_ec = *(float *)(iVar2 + 0x68) * *(float *)(iVar2 + 0x50) -
              *(float *)(iVar2 + 0x60) * *(float *)(iVar2 + 0x58);
  fStack_e8 = *(float *)(iVar2 + 0x60) * *(float *)(iVar2 + 0x54) -
              *(float *)(iVar2 + 100) * *(float *)(iVar2 + 0x50);
  fVar8 = fStack_ec * fStack_ec;
  fStack_13c = fStack_e8 * fStack_e8;
  auVar9._4_4_ = fVar8;
  auVar9._0_4_ = fVar8;
  auVar9._8_4_ = fVar8;
  auVar9._12_4_ = fVar8;
  auVar10._4_12_ = auVar9._4_12_;
  auVar10._0_4_ = fVar8 + local_f0 * local_f0;
  auVar11._4_4_ = fStack_13c;
  auVar11._0_4_ = fStack_13c + auVar10._0_4_;
  auVar11._8_4_ = fStack_13c;
  auVar11._12_4_ = fStack_13c;
  auVar11 = rsqrtss(auVar10,auVar11);
  local_140 = auVar11._0_4_;
  local_120 = (int *)0x40400000;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  local_130 = (int *)0x3f000000;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  fStack_e4 = (float)local_140 * 0.5 *
              (3.0 - (fStack_13c + auVar10._0_4_) * (float)local_140 * (float)local_140);
  local_f0 = fStack_e4 * local_f0;
  fStack_ec = fStack_e4 * fStack_ec;
  fStack_e8 = fStack_e4 * fStack_e8;
  fStack_e4 = fStack_e4 *
              (*(float *)(iVar2 + 0x6c) * *(float *)(iVar2 + 0x5c) -
              *(float *)(iVar2 + 0x6c) * *(float *)(iVar2 + 0x5c));
  fStack_138 = fStack_13c;
  fStack_134 = fStack_13c;
  FUN_0088fe00(in_ECX + 0x90,&local_f0);
  FUN_0088fe00(in_ECX + 0x90,iVar2 + 0x50);
  local_b0 = *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x38) -
             *(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x34);
  fStack_ac = *(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x30) -
              *(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x38);
  fStack_a8 = *(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x34) -
              *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x30);
  fVar8 = fStack_ac * fStack_ac;
  fStack_13c = fStack_a8 * fStack_a8;
  auVar12._4_4_ = fVar8;
  auVar12._0_4_ = fVar8;
  auVar12._8_4_ = fVar8;
  auVar12._12_4_ = fVar8;
  auVar13._4_12_ = auVar12._4_12_;
  auVar13._0_4_ = fVar8 + local_b0 * local_b0;
  auVar3._4_4_ = fStack_13c;
  auVar3._0_4_ = fStack_13c + auVar13._0_4_;
  auVar3._8_4_ = fStack_13c;
  auVar3._12_4_ = fStack_13c;
  auVar11 = rsqrtss(auVar13,auVar3);
  local_140 = auVar11._0_4_;
  fStack_a4 = (float)local_130 * (float)local_140 *
              ((float)local_120 - (fStack_13c + auVar13._0_4_) * (float)local_140 * (float)local_140
              );
  local_b0 = fStack_a4 * local_b0;
  fStack_ac = fStack_a4 * fStack_ac;
  fStack_a8 = fStack_a4 * fStack_a8;
  fStack_a4 = fStack_a4 *
              (*(float *)(iVar2 + 0x2c) * *(float *)(iVar2 + 0x3c) -
              *(float *)(iVar2 + 0x2c) * *(float *)(iVar2 + 0x3c));
  fStack_138 = fStack_13c;
  fStack_134 = fStack_13c;
  FUN_0088fe00(in_ECX + 0x60,&local_b0);
  FUN_0088fe00(in_ECX + 0x60,iVar2 + 0x30);
  FUN_00958750(iVar1,local_e0,&local_f0,0xff008000,*(undefined4 *)(in_ECX + 0xc),param_3);
  uVar14 = *(undefined4 *)(in_ECX + 0xc);
  uVar7 = param_3;
  uVar4 = FUN_008aeb80(0xff,0xff,0,0xff,uVar14,param_3);
  FUN_00958750(in_ECX + 0x40,local_a0,local_d0,uVar4,uVar14,uVar7);
  local_104 = in_ECX + 0xd0;
  FUN_0094da90(*(undefined4 *)(iVar2 + 0x70),0x3f000000,0x18,local_e0,iVar1);
  local_c0 = 0x3e800000;
  uStack_bc = 0x3e800000;
  uStack_b8 = 0x3e800000;
  uStack_b4 = 0x3e800000;
  FUN_0094d6d0(&local_100,&local_f0,iVar1,&local_c0);
  fVar8 = *(float *)(iVar2 + 0x74);
  local_108 = in_ECX + 0x160;
  FUN_0094da90(1.5707964 - ABS(*(float *)(iVar2 + 0x78)),0x3f000000,0x18,&local_100,iVar1);
  local_100 = local_100 ^ 0x80000000;
  uStack_fc = uStack_fc ^ 0x80000000;
  uStack_f8 = uStack_f8 ^ 0x80000000;
  uStack_f4 = uStack_f4 ^ 0x80000000;
  FUN_0094da90(1.5707964 - ABS(fVar8),0x3f000000,0x18,&local_100,iVar1);
  local_140 = (int *)0x0;
  fStack_13c = 0.0;
  fStack_138 = -0.0;
  local_130 = (int *)0x0;
  uStack_12c = 0;
  uStack_128 = 0x80000000;
  local_120 = (int *)0x0;
  uStack_11c = 0;
  uStack_118 = 0x80000000;
  FUN_008a6e40(&local_140,1,4);
  fStack_13c = 1.4013e-45;
  if ((uStack_118 & 0x3fffffff) == 0) {
    FUN_008a6e40(&local_120,1,4);
  }
  uVar5 = uStack_128 & 0x3fffffff;
  uStack_11c = 1;
  if (uVar5 < 2) {
    uVar6 = uVar5 * 2;
    if (uVar5 == 1 || uVar6 < 2) {
      uVar6 = 2;
    }
    FUN_008a6e40(&local_130,uVar6,4);
  }
  uStack_12c = 2;
  *local_140 = local_104;
  *local_130 = local_108;
  local_130[1] = in_ECX + 0x1f0;
  *local_120 = in_ECX + 0x280;
  uVar14 = param_3;
  (**(code **)(*param_2 + 0x24))(&local_140,0xffffff00,param_3);
  (**(code **)(*param_2 + 0x24))(&fStack_13c,0xffff0000,param_3);
  iVar1 = *param_2;
  uVar7 = FUN_008aeb80(0xff,0,0xff,0xff,param_3);
  (**(code **)(iVar1 + 0x24))(&fStack_138,uVar7);
  if (-1 < (int)fStack_13c) {
    FUN_008a75d0(in_ECX + 0x280,(int)fStack_13c << 2,0x14);
  }
  if (-1 < iStack_14c) {
    FUN_008a75d0(uStack_154,iStack_14c << 2,0x14);
  }
  if (-1 < iVar1) {
    FUN_008a75d0(uVar14,iVar1 << 2,0x14);
  }
  return;
}



void FUN_0094e5c0(int param_1,int *param_2,undefined4 param_3)

{
  float fVar1;
  bool bVar2;
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
  uint uVar15;
  float *pfVar16;
  undefined4 uVar17;
  int in_ECX;
  uint uVar18;
  int iVar19;
  float *pfVar20;
  undefined1 *puVar21;
  int local_17c;
  float local_170 [5];
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined1 local_150 [64];
  undefined1 local_110 [64];
  undefined1 local_d0 [16];
  float local_c0 [47];
  
  iVar19 = *(int *)(param_1 + 0xc);
  FUN_00958600(param_2);
  FUN_0094d100(param_1,local_150,local_110);
  FUN_0088fcc0(local_150,iVar19 + 0x20);
  FUN_0088fcc0(local_110,iVar19 + 0x10);
  FUN_0094cf30(param_3);
  FUN_0094cf80(param_3);
  bVar2 = ABS(*(float *)(iVar19 + 0x30)) <= ABS(*(float *)(iVar19 + 0x34));
  fVar1 = ABS(*(float *)(iVar19 + 0x30));
  if (!bVar2) {
    fVar1 = ABS(*(float *)(iVar19 + 0x34));
  }
  uVar18 = (uint)!bVar2;
  if (fVar1 <= ABS(*(float *)(iVar19 + 0x38))) {
    uVar15 = 2;
  }
  else {
    uVar15 = uVar18;
    uVar18 = 2;
  }
  fVar4 = *(float *)(iVar19 + 0x30);
  fVar5 = *(float *)(iVar19 + 0x34);
  fVar6 = *(float *)(iVar19 + 0x38);
  fVar7 = *(float *)(iVar19 + 0x3c);
  local_170[uVar18] = 0.0;
  fVar1 = *(float *)((uint)bVar2 * 4 + 0x30 + iVar19);
  local_170[3] = 0.0;
  local_170[bVar2] = *(float *)(uVar15 * 4 + 0x30 + iVar19);
  local_170[uVar15] = -fVar1;
  fVar1 = *(float *)(in_ECX + 0x40);
  fVar12 = *(float *)(in_ECX + 0x44);
  fVar13 = *(float *)(in_ECX + 0x48);
  fVar14 = *(float *)(in_ECX + 0x4c);
  local_170[4] = fVar5 * local_170[2] - fVar6 * local_170[1];
  fStack_15c = fVar6 * local_170[0] - fVar4 * local_170[2];
  fStack_158 = fVar4 * local_170[1] - fVar5 * local_170[0];
  fStack_154 = fVar7 * 0.0 - fVar7 * 0.0;
  iVar19 = 0;
  do {
    local_17c = -1;
    pfVar16 = local_c0 + iVar19 * 0x18;
    do {
      pfVar20 = local_170;
      if (iVar19 == 0) {
        pfVar20 = local_170 + 4;
      }
      fVar4 = *pfVar20;
      fVar5 = pfVar20[1];
      fVar6 = pfVar20[2];
      fVar7 = pfVar20[3];
      pfVar20 = local_170 + 4;
      if (iVar19 == 0) {
        pfVar20 = local_170;
      }
      fVar8 = *pfVar20;
      fVar9 = pfVar20[1];
      fVar10 = pfVar20[2];
      fVar11 = pfVar20[3];
      pfVar16[-4] = fVar1;
      pfVar16[-3] = fVar12;
      pfVar16[-2] = fVar13;
      pfVar16[-1] = fVar14;
      *pfVar16 = fVar1;
      pfVar16[1] = fVar12;
      pfVar16[2] = fVar13;
      pfVar16[3] = fVar14;
      fVar3 = (float)local_17c * 1.4;
      pfVar16[-4] = pfVar16[-4] + fVar4 * 2.0;
      pfVar16[-3] = pfVar16[-3] + fVar5 * 2.0;
      pfVar16[-2] = pfVar16[-2] + fVar6 * 2.0;
      pfVar16[-1] = pfVar16[-1] + fVar7 * 2.0;
      *pfVar16 = *pfVar16 + fVar4 * -2.0;
      pfVar16[1] = pfVar16[1] + fVar5 * -2.0;
      pfVar16[2] = pfVar16[2] + fVar6 * -2.0;
      pfVar16[3] = pfVar16[3] + fVar7 * -2.0;
      pfVar16[-4] = pfVar16[-4] + fVar3 * fVar8;
      pfVar16[-3] = pfVar16[-3] + fVar3 * fVar9;
      pfVar16[-2] = pfVar16[-2] + fVar3 * fVar10;
      pfVar16[-1] = pfVar16[-1] + fVar3 * fVar11;
      local_17c = local_17c + 1;
      *pfVar16 = *pfVar16 + fVar3 * fVar8;
      pfVar16[1] = pfVar16[1] + fVar3 * fVar9;
      pfVar16[2] = pfVar16[2] + fVar3 * fVar10;
      pfVar16[3] = pfVar16[3] + fVar3 * fVar11;
      pfVar16 = pfVar16 + 8;
    } while (local_17c < 2);
    iVar19 = iVar19 + 1;
  } while (iVar19 < 2);
  puVar21 = local_d0;
  local_17c = 6;
  do {
    iVar19 = *param_2;
    uVar17 = FUN_008aebb0(0x3f4ccccd,0x3f4ccccd,0x3f4ccccd,0x3f800000,param_3);
    (**(code **)(iVar19 + 0x1c))(puVar21,puVar21 + 0x10,uVar17);
    puVar21 = puVar21 + 0x20;
    local_17c = local_17c + -1;
  } while (local_17c != 0);
  iVar19 = *param_2;
  uVar17 = FUN_008aebb0(0x3e99999a,0x3e99999a,0x3f4ccccd,0x3f800000,param_3);
  (**(code **)(iVar19 + 0x1c))(in_ECX + 0x50,in_ECX + 0x30,uVar17);
  return;
}



void FUN_0094e860(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int iStack_114;
  int local_110;
  int local_10c;
  int local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 auStack_f4 [16];
  undefined1 auStack_e4 [20];
  undefined1 local_d0 [48];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 auStack_94 [17];
  undefined1 local_50 [76];
  
  iVar4 = *(int *)(param_1 + 0xc);
  FUN_00958600(param_2);
  FUN_0094d100(param_1,local_d0,local_50);
  *(undefined4 *)(in_ECX + 0x50) = local_a0;
  *(undefined4 *)(in_ECX + 0x54) = uStack_9c;
  *(undefined4 *)(in_ECX + 0x58) = uStack_98;
  *(undefined4 *)(in_ECX + 0x5c) = auStack_94[0];
  FUN_00928570(*(int *)(*(int *)(param_1 + 0x10) + 0x50) + 0x10,in_ECX + 0x40);
  FUN_0094cf80(param_3);
  FUN_0094cf30(param_3);
  if (*(int *)(iVar4 + 0xc) != 0) {
    FUN_008b1f70(local_d0,iVar4 + 0x60);
    if (*(int **)(iVar4 + 0xc) != (int *)0x0) {
      local_110 = 0;
      local_10c = 0;
      local_108 = -0x80000000;
      (**(code **)(**(int **)(iVar4 + 0xc) + 0x28))(&local_110);
      if (1 < local_110) {
        local_108 = local_110 + -1;
        iVar4 = 0x10;
        do {
          puVar1 = (undefined4 *)(iVar4 + iStack_114);
          uStack_104 = *puVar1;
          uStack_100 = puVar1[1];
          uStack_fc = puVar1[2];
          uStack_f8 = puVar1[3];
          FUN_0088fcc0(auStack_94,&uStack_104);
          puVar1 = (undefined4 *)(iVar4 + -0x10 + iStack_114);
          uStack_104 = *puVar1;
          uStack_100 = puVar1[1];
          uStack_fc = puVar1[2];
          uStack_f8 = puVar1[3];
          FUN_0088fcc0(auStack_94,&uStack_104);
          iVar2 = *param_2;
          uVar3 = FUN_008aebb0(0,0x3e800000,0x3f800000,0x3f800000,param_3);
          (**(code **)(iVar2 + 0x1c))(auStack_e4,auStack_f4,uVar3);
          iVar4 = iVar4 + 0x10;
          local_108 = local_108 + -1;
        } while (local_108 != 0);
      }
      if (-1 < local_10c) {
        FUN_008a75d0(iStack_114,local_10c << 4,0x14);
      }
    }
  }
  return;
}



void FUN_0094ea10(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 *puStack_120;
  float *pfStack_11c;
  float *pfStack_118;
  float fStack_114;
  float *pfStack_110;
  float *pfStack_10c;
  float *pfStack_108;
  float fStack_104;
  float *pfStack_100;
  float *pfStack_fc;
  undefined1 *puStack_f8;
  int *piStack_f4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(param_1 + 0xc);
  piStack_f4 = param_2;
  puStack_f8 = (undefined1 *)0x94ea36;
  FUN_00958600();
  piStack_f4 = (int *)local_50;
  puStack_f8 = local_90;
  pfStack_fc = (float *)param_1;
  pfStack_100 = (float *)0x94ea4e;
  FUN_0094d100();
  piStack_f4 = (int *)(iVar1 + 0x30);
  puStack_f8 = local_90;
  pfStack_fc = (float *)0x94ea5f;
  FUN_0088fcc0();
  piStack_f4 = (int *)(iVar1 + 0x10);
  puStack_f8 = local_50;
  pfStack_fc = (float *)0x94ea73;
  FUN_0088fcc0();
  piStack_f4 = (int *)param_3;
  puStack_f8 = (undefined1 *)0x94ea7e;
  FUN_0094cf80();
  piStack_f4 = (int *)param_3;
  puStack_f8 = (undefined1 *)0x94ea89;
  FUN_0094cf30();
  piStack_f4 = (int *)param_3;
  puStack_f8 = (undefined1 *)0xffff0000;
  pfStack_fc = in_ECX + 0x14;
  pfStack_100 = in_ECX + 0x10;
  fStack_104 = 1.3675822e-38;
  (**(code **)(*param_2 + 0x1c))();
  fStack_104 = (float)(iVar1 + 0x60);
  pfStack_108 = in_ECX + 0x24;
  pfStack_10c = (float *)0x94eab5;
  FUN_0088fe00();
  fVar2 = *in_ECX * -0.5;
  fVar3 = *in_ECX * 0.5;
  fStack_e0 = fVar2 * fStack_b0 + in_ECX[0x14];
  fStack_dc = fVar2 * fStack_ac + in_ECX[0x15];
  fStack_d8 = fVar2 * fStack_a8 + in_ECX[0x16];
  fStack_d4 = fVar2 * fStack_a4 + in_ECX[0x17];
  fStack_104 = (float)param_3;
  pfStack_108 = (float *)0xff008000;
  pfStack_10c = &fStack_d0;
  fStack_d0 = fVar3 * fStack_b0 + in_ECX[0x14];
  fStack_cc = fVar3 * fStack_ac + in_ECX[0x15];
  fStack_c8 = fVar3 * fStack_a8 + in_ECX[0x16];
  fStack_c4 = fVar3 * fStack_a4 + in_ECX[0x17];
  pfStack_110 = &fStack_e0;
  fStack_114 = 1.3676e-38;
  (**(code **)(*param_2 + 0x1c))();
  puStack_f8 = *(undefined1 **)(iVar1 + 0x90);
  piStack_f4 = *(int **)(iVar1 + 0x94);
  fStack_114 = (float)(iVar1 + 0x70);
  pfStack_118 = in_ECX + 0x24;
  pfStack_11c = (float *)0x94eb48;
  FUN_0088fe00();
  fVar2 = *in_ECX * 0.1;
  fVar3 = *in_ECX * -0.1;
  fStack_d0 = (float)piStack_f4 * fStack_c0 + in_ECX[0x14];
  fStack_cc = (float)piStack_f4 * fStack_bc + in_ECX[0x15];
  fStack_c8 = (float)piStack_f4 * fStack_b8 + in_ECX[0x16];
  fStack_c4 = (float)piStack_f4 * fStack_b4 + in_ECX[0x17];
  fVar4 = fVar2 * fStack_e0 + fStack_d0;
  fVar5 = fVar2 * fStack_dc + fStack_cc;
  fVar6 = fVar2 * fStack_d8 + fStack_c8;
  fVar7 = fVar2 * fStack_d4 + fStack_c4;
  fStack_114 = (float)param_3;
  pfStack_118 = (float *)0xffffffff;
  pfStack_11c = &fStack_d0;
  puStack_120 = &stack0xffffff10;
  fStack_d0 = fVar3 * fStack_e0 + fStack_d0;
  fStack_cc = fVar3 * fStack_dc + fStack_cc;
  fStack_c8 = fVar3 * fStack_d8 + fStack_c8;
  fStack_c4 = fVar3 * fStack_d4 + fStack_c4;
  piStack_f4 = (int *)fVar3;
  (**(code **)(*param_2 + 0x1c))();
  fVar2 = *in_ECX * 0.1;
  fVar3 = *in_ECX * -0.1;
  fStack_e0 = (float)pfStack_108 * fStack_d0 + in_ECX[0x14];
  fStack_dc = (float)pfStack_108 * fStack_cc + in_ECX[0x15];
  fStack_d8 = (float)pfStack_108 * fStack_c8 + in_ECX[0x16];
  fStack_d4 = (float)pfStack_108 * fStack_c4 + in_ECX[0x17];
  pfStack_100 = (float *)(fVar2 * fVar4 + fStack_e0);
  pfStack_fc = (float *)(fVar2 * fVar5 + fStack_dc);
  puStack_f8 = (undefined1 *)(fVar2 * fVar6 + fStack_d8);
  piStack_f4 = (int *)(fVar2 * fVar7 + fStack_d4);
  fStack_e0 = fVar3 * fVar4 + fStack_e0;
  fStack_dc = fVar3 * fVar5 + fStack_dc;
  fStack_d8 = fVar3 * fVar6 + fStack_d8;
  fStack_d4 = fVar3 * fVar7 + fStack_d4;
  pfStack_108 = (float *)fVar3;
  (**(code **)(*param_2 + 0x1c))(&pfStack_100,&fStack_e0,0xffffffff,param_3);
  FUN_0088fe00(in_ECX + 0x24,iVar1 + 0x40);
  pfStack_118 = (float *)(*in_ECX * 0.5);
  pfStack_110 = (float *)((float)pfStack_118 * (float)pfStack_100 + in_ECX[0x14]);
  pfStack_10c = (float *)((float)pfStack_118 * (float)pfStack_fc + in_ECX[0x15]);
  pfStack_108 = (float *)((float)pfStack_118 * (float)puStack_f8 + in_ECX[0x16]);
  fStack_104 = (float)pfStack_118 * (float)piStack_f4 + in_ECX[0x17];
  (**(code **)(*param_2 + 0x1c))(&stack0xffffff10,&pfStack_110,0xffffff00,param_3);
  FUN_0088fe00(in_ECX + 0x18,iVar1 + 0x20);
  fVar2 = *in_ECX * -0.5;
  fVar3 = *in_ECX * 0.5;
  pfStack_100 = (float *)(fVar2 * (float)pfStack_110 + in_ECX[0x10]);
  pfStack_fc = (float *)(fVar2 * (float)pfStack_10c + in_ECX[0x11]);
  puStack_f8 = (undefined1 *)(fVar2 * (float)pfStack_108 + in_ECX[0x12]);
  piStack_f4 = (int *)(fVar2 * fStack_104 + in_ECX[0x13]);
  puStack_120 = (undefined1 *)(fVar3 * (float)pfStack_110 + in_ECX[0x10]);
  pfStack_11c = (float *)(fVar3 * (float)pfStack_10c + in_ECX[0x11]);
  pfStack_118 = (float *)(fVar3 * (float)pfStack_108 + in_ECX[0x12]);
  fStack_114 = fVar3 * fStack_104 + in_ECX[0x13];
  (**(code **)(*param_2 + 0x1c))(&pfStack_100,&puStack_120,0xff0000ff,param_3);
  return;
}



void FUN_0094ed70(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 uVar6;
  int in_ECX;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_b0 [8];
  float *local_a8;
  float *local_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_00958600(param_2);
  FUN_0094d100(param_1,local_90,local_50);
  local_a8 = (float *)(in_ECX + 0x50);
  FUN_0088fcc0(local_90,iVar1 + 0x20);
  local_a4 = (float *)(in_ECX + 0x40);
  FUN_0088fcc0(local_50,iVar1 + 0x10);
  FUN_0094cf30(param_3);
  FUN_0094cf80(param_3);
  pfVar5 = local_a8;
  fVar9 = *local_a8;
  pfVar2 = local_a8 + 1;
  pfVar3 = local_a8 + 2;
  pfVar4 = local_a8 + 3;
  local_a8 = *(float **)(iVar1 + 0xc);
  iVar1 = *param_2;
  fVar9 = fVar9 - *local_a4;
  fVar10 = *pfVar2 - local_a4[1];
  fVar11 = *pfVar3 - local_a4[2];
  fVar7 = fVar10 * fVar10;
  fVar8 = fVar11 * fVar11;
  auVar12._4_4_ = fVar7;
  auVar12._0_4_ = fVar7;
  auVar12._8_4_ = fVar7;
  auVar12._12_4_ = fVar7;
  auVar13._4_12_ = auVar12._4_12_;
  auVar13._0_4_ = fVar7 + fVar9 * fVar9;
  auVar14._4_4_ = fVar8;
  auVar14._0_4_ = fVar8 + auVar13._0_4_;
  auVar14._8_4_ = fVar8;
  auVar14._12_4_ = fVar8;
  auVar14 = rsqrtss(auVar13,auVar14);
  fVar7 = auVar14._0_4_;
  fVar7 = fVar7 * 0.5 * (3.0 - (fVar8 + auVar13._0_4_) * fVar7 * fVar7);
  local_a0 = (float)local_a8 * fVar7 * fVar9 + *local_a4;
  fStack_9c = (float)local_a8 * fVar7 * fVar10 + local_a4[1];
  fStack_98 = (float)local_a8 * fVar7 * fVar11 + local_a4[2];
  fStack_94 = (float)local_a8 * fVar7 * (*pfVar4 - local_a4[3]) + local_a4[3];
  uVar6 = FUN_008aebb0(0,0x3f000000,0x3f800000,0x3f800000,param_3);
  (**(code **)(iVar1 + 0x1c))(local_a4,&local_a0,uVar6);
  (**(code **)(*param_2 + 0x1c))(auStack_b0,pfVar5,0xffff0000,param_3);
  return;
}



void FUN_0094eee0(int param_1,int *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float *in_ECX;
  int iVar4;
  float fVar5;
  float *pfStack_100;
  float *pfStack_fc;
  float *pfStack_f8;
  int *piStack_f4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  iVar4 = *(int *)(param_1 + 0xc);
  piStack_f4 = param_2;
  pfStack_f8 = (float *)0x94ef0a;
  local_d8 = (float)iVar4;
  FUN_00958600();
  piStack_f4 = (int *)local_50;
  pfStack_f8 = (float *)local_90;
  pfStack_fc = (float *)param_1;
  pfStack_100 = (float *)0x94ef22;
  FUN_0094d100();
  piStack_f4 = (int *)(iVar4 + 0x60);
  pfStack_f8 = (float *)local_90;
  pfStack_fc = (float *)0x94ef33;
  FUN_0088fcc0();
  piStack_f4 = (int *)(iVar4 + 0x10);
  pfStack_f8 = (float *)local_50;
  pfStack_fc = (float *)0x94ef47;
  FUN_0088fcc0();
  piStack_f4 = (int *)param_3;
  pfStack_f8 = (float *)0x94ef52;
  FUN_0094cf30();
  piStack_f4 = (int *)param_3;
  pfStack_f8 = (float *)0x94ef5d;
  FUN_0094cf80();
  piStack_f4 = (int *)(iVar4 + 0x70);
  pfStack_f8 = in_ECX + 0x24;
  pfStack_fc = (float *)0x94ef71;
  FUN_0088fe00();
  piStack_f4 = (int *)(iVar4 + 0x80);
  pfStack_f8 = in_ECX + 0x24;
  pfStack_fc = (float *)0x94ef88;
  FUN_0088fe00();
  piStack_f4 = (int *)param_3;
  pfStack_f8 = (float *)0xffff0000;
  pfStack_fc = in_ECX + 0x14;
  pfStack_100 = in_ECX + 0x10;
  (**(code **)(*param_2 + 0x1c))();
  fVar1 = *(float *)(iVar4 + 0x94);
  fStack_d0 = in_ECX[0x14];
  fStack_cc = in_ECX[0x15];
  fStack_c8 = in_ECX[0x16];
  fStack_c4 = in_ECX[0x17];
  fVar5 = param_3;
  if (fVar1 == 3.4028235e+38) {
    fVar1 = *in_ECX;
    fVar2 = -*in_ECX;
    iVar4 = *param_2;
    fStack_e0 = fVar1 * fStack_c0 + fStack_d0;
    fStack_dc = fVar1 * fStack_bc + fStack_cc;
    local_d8 = fVar1 * fStack_b8 + fStack_c8;
    fStack_d4 = fVar1 * fStack_b4 + fStack_c4;
    fStack_d0 = fVar2 * fStack_c0 + fStack_d0;
    fStack_cc = fVar2 * fStack_bc + fStack_cc;
    fStack_c8 = fVar2 * fStack_b8 + fStack_c8;
    fStack_c4 = fVar2 * fStack_b4 + fStack_c4;
    uVar3 = FUN_008aebb0(0,0x3f000000,0x3f800000,0x3f800000,param_3);
  }
  else {
    fVar2 = *(float *)(iVar4 + 0x90);
    iVar4 = *param_2;
    fStack_e0 = fVar1 * fStack_c0 + fStack_d0;
    fStack_dc = fVar1 * fStack_bc + fStack_cc;
    local_d8 = fVar1 * fStack_b8 + fStack_c8;
    fStack_d4 = fVar1 * fStack_b4 + fStack_c4;
    fStack_d0 = fVar2 * fStack_c0 + fStack_d0;
    fStack_cc = fVar2 * fStack_bc + fStack_cc;
    fStack_c8 = fVar2 * fStack_b8 + fStack_c8;
    fStack_c4 = fVar2 * fStack_b4 + fStack_c4;
    uVar3 = FUN_008aebb0(0,0x3f000000,0x3f800000,0x3f800000,param_3);
  }
  (**(code **)(iVar4 + 0x1c))(&fStack_d0,&fStack_e0,uVar3);
  fVar1 = *(float *)((int)pfStack_f8 + 0x90);
  piStack_f4 = *(int **)((int)pfStack_f8 + 0x94);
  pfStack_f8 = (float *)(*in_ECX * -0.5);
  fStack_e0 = in_ECX[0x14] + fVar1 * fStack_d0 + (float)pfStack_f8 * fStack_c0;
  fStack_dc = in_ECX[0x15] + fVar1 * fStack_cc + (float)pfStack_f8 * fStack_bc;
  local_d8 = in_ECX[0x16] + fVar1 * fStack_c8 + (float)pfStack_f8 * fStack_b8;
  fStack_d4 = in_ECX[0x17] + fVar1 * fStack_c4 + (float)pfStack_f8 * fStack_b4;
  (**(code **)(*param_2 + 0x1c))(&stack0xffffff10,&fStack_e0,0xffffffff,param_3);
  fVar1 = *in_ECX * 0.5;
  pfStack_100 = (float *)(in_ECX[0x14] + fVar5 * fStack_e0 + fVar1 * fStack_d0);
  pfStack_fc = (float *)(in_ECX[0x15] + fVar5 * fStack_dc + fVar1 * fStack_cc);
  pfStack_f8 = (float *)(in_ECX[0x16] + fVar5 * local_d8 + fVar1 * fStack_c8);
  piStack_f4 = (int *)(in_ECX[0x17] + fVar5 * fStack_d4 + fVar1 * fStack_c4);
  (**(code **)(*param_2 + 0x1c))(&pfStack_100,&stack0xffffff10,0xffffffff,param_3);
  return;
}



void FUN_0094f1c0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float *in_ECX;
  float unaff_EDI;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float **ppfStack_13c;
  undefined1 *puStack_138;
  float *pfStack_134;
  float *pfStack_130;
  float *pfStack_12c;
  float fStack_128;
  float fStack_124;
  float *pfStack_120;
  float *pfStack_11c;
  float *pfStack_118;
  int *piStack_114;
  int iStack_104;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float local_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined1 auStack_d0 [4];
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(param_1 + 0xc);
  piStack_114 = param_2;
  pfStack_118 = (float *)0x94f1ea;
  local_e4 = (float)iVar1;
  FUN_00958600();
  piStack_114 = (int *)local_50;
  pfStack_118 = (float *)local_90;
  pfStack_11c = (float *)param_1;
  pfStack_120 = (float *)0x94f205;
  FUN_0094d100();
  piStack_114 = (int *)(iVar1 + 0x60);
  pfStack_118 = (float *)local_90;
  pfStack_11c = (float *)0x94f219;
  FUN_0088fcc0();
  piStack_114 = (int *)(iVar1 + 0x20);
  pfStack_118 = (float *)local_50;
  pfStack_11c = (float *)0x94f22d;
  FUN_0088fcc0();
  piStack_114 = (int *)param_3;
  pfStack_118 = (float *)0x94f238;
  FUN_0094cf80();
  piStack_114 = (int *)param_3;
  pfStack_118 = (float *)0x94f243;
  FUN_0094cf30();
  piStack_114 = (int *)(iVar1 + 0x70);
  pfStack_118 = in_ECX + 0x24;
  pfStack_11c = (float *)0x94f257;
  FUN_0088fe00();
  piStack_114 = (int *)(iVar1 + 0x80);
  pfStack_118 = in_ECX + 0x24;
  pfStack_11c = (float *)0x94f26e;
  FUN_0088fe00();
  piStack_114 = (int *)param_3;
  pfStack_118 = (float *)0xffff0000;
  pfStack_120 = in_ECX + 0x10;
  fStack_124 = 1.3678654e-38;
  pfStack_11c = in_ECX + 0x14;
  (**(code **)(*param_2 + 0x1c))();
  fVar2 = *in_ECX * 0.5;
  fStack_e0 = in_ECX[0x14];
  piStack_114 = (int *)(*in_ECX * -0.5);
  fStack_f0 = fVar2 * fStack_c0 + fStack_e0;
  fStack_ec = fVar2 * fStack_bc + in_ECX[0x15];
  fStack_e8 = fVar2 * fStack_b8 + in_ECX[0x16];
  local_e4 = fVar2 * fStack_b4 + in_ECX[0x17];
  fStack_e0 = (float)piStack_114 * fStack_c0 + fStack_e0;
  fStack_dc = (float)piStack_114 * fStack_bc + in_ECX[0x15];
  fStack_d8 = (float)piStack_114 * fStack_b8 + in_ECX[0x16];
  fStack_d4 = (float)piStack_114 * fStack_b4 + in_ECX[0x17];
  iVar1 = *param_2;
  fStack_124 = (float)param_3;
  fStack_128 = 1.0;
  pfStack_12c = (float *)0x3f800000;
  pfStack_130 = (float *)0x3f000000;
  pfStack_134 = (float *)0x0;
  puStack_138 = (undefined1 *)0x94f2f2;
  fStack_128 = (float)FUN_008aebb0();
  pfStack_12c = &fStack_f0;
  pfStack_130 = &fStack_e0;
  pfStack_134 = (float *)0x94f305;
  (**(code **)(iVar1 + 0x1c))();
  pfStack_134 = &fStack_c0;
  puStack_138 = auStack_d0;
  ppfStack_13c = (float **)(in_ECX + 0x14);
  FUN_0094d1f0(0x3fc00000,*(undefined4 *)(iStack_104 + 0xc),*(undefined4 *)(iStack_104 + 0x10),0x18)
  ;
  pfStack_134 = (float *)0x4;
  pfStack_120 = (float *)0x0;
  pfStack_11c = (float *)0x0;
  ppfStack_13c = &pfStack_120;
  puStack_138 = (undefined1 *)0x1;
  pfStack_118 = (float *)0x80000000;
  FUN_008a6e40();
  pfStack_11c = (float *)0x1;
  *pfStack_120 = (float)(in_ECX + 0x34);
  pfStack_134 = (float *)param_3;
  puStack_138 = (undefined1 *)0xffffffff;
  ppfStack_13c = &pfStack_120;
  (**(code **)(*param_2 + 0x24))();
  if (-1 < (int)fStack_124) {
    FUN_008a75d0(pfStack_12c,(int)fStack_124 << 2,0x14);
  }
  fStack_ec = in_ECX[0x14];
  fStack_e8 = in_ECX[0x15];
  local_e4 = in_ECX[0x16];
  fStack_e0 = in_ECX[0x17];
  pfStack_130 = (float *)(*in_ECX * 0.5);
  pfStack_12c = (float *)(fStack_ec + (float)pfStack_130 * fStack_cc);
  fStack_128 = fStack_e8 + (float)pfStack_130 * fStack_c8;
  fStack_124 = local_e4 + (float)pfStack_130 * fStack_c4;
  pfStack_120 = (float *)(fStack_e0 + (float)pfStack_130 * fStack_c0);
  (**(code **)(*param_2 + 0x1c))(&fStack_ec,&pfStack_12c,0xffffff00,param_3);
  FUN_0088fe00(in_ECX + 0x18,pfStack_120 + 0x14);
  fVar2 = *in_ECX * 0.5;
  fVar3 = (float)pfStack_118 * (float)pfStack_118;
  fVar4 = (float)piStack_114 * (float)piStack_114;
  auVar5._4_4_ = fVar3;
  auVar5._0_4_ = fVar3;
  auVar5._8_4_ = fVar3;
  auVar5._12_4_ = fVar3;
  auVar6._4_12_ = auVar5._4_12_;
  auVar6._0_4_ = fVar3 + (float)pfStack_11c * (float)pfStack_11c;
  auVar7._4_4_ = fVar4;
  auVar7._0_4_ = fVar4 + auVar6._0_4_;
  auVar7._8_4_ = fVar4;
  auVar7._12_4_ = fVar4;
  auVar7 = rsqrtss(auVar6,auVar7);
  fVar3 = auVar7._0_4_;
  fVar3 = fVar3 * 0.5 * (3.0 - (fVar4 + auVar6._0_4_) * fVar3 * fVar3);
  fStack_fc = in_ECX[0x10];
  fStack_f8 = in_ECX[0x11];
  fStack_f4 = in_ECX[0x12];
  fStack_f0 = in_ECX[0x13];
  pfStack_11c = (float *)(fVar3 * (float)pfStack_11c);
  pfStack_118 = (float *)(fVar3 * (float)pfStack_118);
  piStack_114 = (int *)(fVar3 * (float)piStack_114);
  ppfStack_13c = (float **)(fStack_fc + fVar2 * (float)pfStack_11c);
  puStack_138 = (undefined1 *)(fStack_f8 + fVar2 * (float)pfStack_118);
  pfStack_134 = (float *)(fStack_f4 + fVar2 * (float)piStack_114);
  pfStack_130 = (float *)(fStack_f0 + fVar2 * fVar3 * unaff_EDI);
  (**(code **)(*param_2 + 0x1c))(&fStack_fc,&ppfStack_13c,0xffffff00,param_3);
  return;
}



void FUN_0094f4e0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float *in_ECX;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_00958600(param_2);
  FUN_0094d100(param_1,local_90,local_50);
  FUN_0088fcc0(local_90,iVar1 + 0x40);
  FUN_0088fcc0(local_50,iVar1 + 0x10);
  FUN_0094cf80(param_3);
  FUN_0094cf30(param_3);
  (**(code **)(*param_2 + 0x1c))(in_ECX + 0x10,in_ECX + 0x14,0xffff0000,param_3);
  FUN_0088fe00(in_ECX + 0x24,iVar1 + 0x50);
  fVar2 = *in_ECX * -0.5;
  iVar1 = *param_2;
  fStack_c0 = fVar2 * fStack_b0 + in_ECX[0x14];
  fStack_bc = fVar2 * fStack_ac + in_ECX[0x15];
  fStack_b8 = fVar2 * fStack_a8 + in_ECX[0x16];
  fStack_b4 = fVar2 * fStack_a4 + in_ECX[0x17];
  uVar3 = FUN_008aebb0(0,0x3f000000,0x3f800000,0x3f800000,param_3);
  (**(code **)(iVar1 + 0x1c))(&fStack_c0,&stack0xffffff30,uVar3);
  return;
}



void FUN_0094f610(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_00958600(param_2);
  FUN_0094d100(param_1,local_90,local_50);
  FUN_0088fcc0(local_90,iVar1 + 0x20);
  FUN_0088fcc0(local_50,iVar1 + 0x10);
  FUN_0094cf30(param_3);
  FUN_0094cf80(param_3);
  (**(code **)(*param_2 + 0x1c))(in_ECX + 0x40,in_ECX + 0x50,0xffff0000,param_3);
  return;
}



void FUN_0094f6b0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  undefined1 auVar2 [16];
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
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float afStack_70 [2];
  float local_68;
  float local_64 [9];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar3 = param_1[0x10] + param_2[0x10];
  param_4[0x44] = 0.0;
  param_4[0x45] = 0.0;
  param_4[0x46] = 0.0;
  param_4[0x47] = 0.0;
  param_4[0x48] = 0.0;
  param_4[0x49] = 0.0;
  param_4[0x4a] = 0.0;
  param_4[0x4b] = 0.0;
  param_4[0x4c] = 0.0;
  param_4[0x4d] = 0.0;
  param_4[0x4e] = 0.0;
  param_4[0x4f] = 0.0;
  param_4[0x44] = fVar3;
  param_4[0x49] = fVar3;
  param_4[0x4e] = fVar3;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[3];
  param_4[0x38] = *param_3;
  param_4[0x39] = fVar3;
  param_4[0x3a] = fVar4;
  param_4[0x3b] = fVar5;
  fVar3 = param_3[5];
  fVar4 = param_3[6];
  fVar5 = param_3[7];
  param_4[0x3c] = param_3[4];
  param_4[0x3d] = fVar3;
  param_4[0x3e] = fVar4;
  param_4[0x3f] = fVar5;
  fVar3 = param_3[9];
  fVar4 = param_3[10];
  fVar5 = param_3[0xb];
  afStack_70[1] = (float)-(int)param_4;
  param_4[0x40] = param_3[8];
  param_4[0x41] = fVar3;
  param_4[0x42] = fVar4;
  param_4[0x43] = fVar5;
  local_64[0] = 2.8026e-45;
  pfVar14 = param_4;
  do {
    fVar3 = *param_3;
    fVar4 = param_3[1];
    fVar5 = param_3[2];
    fVar6 = param_3[3];
    fVar17 = *param_1;
    fVar18 = param_1[1];
    fVar19 = param_1[2];
    fVar20 = param_1[3];
    *pfVar14 = fVar18 * fVar5 - fVar19 * fVar4;
    pfVar14[1] = fVar19 * fVar3 - fVar17 * fVar5;
    pfVar14[2] = fVar17 * fVar4 - fVar18 * fVar3;
    pfVar14[3] = fVar20 * fVar6 - fVar20 * fVar6;
    fVar3 = param_3[4];
    fVar4 = param_3[5];
    fVar5 = param_3[6];
    fVar6 = param_3[7];
    fVar17 = *param_1;
    fVar18 = param_1[1];
    fVar19 = param_1[2];
    fVar20 = param_1[3];
    pfVar14[4] = fVar18 * fVar5 - fVar19 * fVar4;
    pfVar14[5] = fVar19 * fVar3 - fVar17 * fVar5;
    pfVar14[6] = fVar17 * fVar4 - fVar18 * fVar3;
    pfVar14[7] = fVar20 * fVar6 - fVar20 * fVar6;
    fVar3 = param_3[8];
    fVar4 = param_3[9];
    fVar5 = param_3[10];
    fVar6 = param_3[0xb];
    fVar17 = *param_1;
    fVar18 = param_1[1];
    fVar19 = param_1[2];
    fVar20 = param_1[3];
    pfVar14[8] = fVar18 * fVar5 - fVar19 * fVar4;
    pfVar14[9] = fVar19 * fVar3 - fVar17 * fVar5;
    pfVar14[10] = fVar17 * fVar4 - fVar18 * fVar3;
    pfVar14[0xb] = fVar20 * fVar6 - fVar20 * fVar6;
    fVar3 = param_1[4];
    fVar4 = param_1[5];
    fVar5 = param_1[6];
    fVar6 = param_1[7];
    fVar17 = param_1[8];
    fVar18 = param_1[9];
    fVar19 = param_1[10];
    fVar20 = param_1[0xb];
    fVar7 = param_1[0xc];
    fVar8 = param_1[0xd];
    fVar9 = param_1[0xe];
    fVar10 = param_1[0xf];
    iVar15 = 3;
    pfVar16 = pfVar14;
    do {
      fVar11 = *pfVar16;
      fVar12 = pfVar16[1];
      fVar13 = pfVar16[2];
      pfVar16[0xc] = fVar3 * fVar11 + fVar17 * fVar12 + fVar7 * fVar13;
      pfVar16[0xd] = fVar4 * fVar11 + fVar18 * fVar12 + fVar8 * fVar13;
      pfVar16[0xe] = fVar5 * fVar11 + fVar19 * fVar12 + fVar9 * fVar13;
      pfVar16[0xf] = fVar6 * fVar11 + fVar20 * fVar12 + fVar10 * fVar13;
      pfVar16 = pfVar16 + 4;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    fVar3 = pfVar14[4];
    pfVar14[4] = pfVar14[1];
    pfVar14[1] = fVar3;
    fVar3 = pfVar14[8];
    pfVar14[8] = pfVar14[2];
    pfVar14[2] = fVar3;
    fVar3 = pfVar14[9];
    pfVar14[9] = pfVar14[6];
    pfVar14[6] = fVar3;
    fVar3 = *pfVar14;
    fVar4 = pfVar14[1];
    fVar5 = pfVar14[2];
    fVar6 = pfVar14[3];
    fVar17 = pfVar14[4];
    fVar18 = pfVar14[5];
    fVar19 = pfVar14[6];
    fVar20 = pfVar14[7];
    fVar7 = pfVar14[8];
    fVar8 = pfVar14[9];
    fVar9 = pfVar14[10];
    fVar10 = pfVar14[0xb];
    pfVar16 = pfVar14 + 0xc;
    local_68 = 4.2039e-45;
    do {
      fVar11 = *pfVar16;
      fVar12 = pfVar16[1];
      fVar13 = pfVar16[2];
      pfVar1 = (float *)((int)afStack_70 + (int)afStack_70[1] + (int)pfVar16);
      *pfVar1 = fVar3 * fVar11 + fVar17 * fVar12 + fVar7 * fVar13;
      pfVar1[1] = fVar4 * fVar11 + fVar18 * fVar12 + fVar8 * fVar13;
      pfVar1[2] = fVar5 * fVar11 + fVar19 * fVar12 + fVar9 * fVar13;
      pfVar1[3] = fVar6 * fVar11 + fVar20 * fVar12 + fVar10 * fVar13;
      pfVar16 = pfVar16 + 4;
      local_68 = (float)((int)local_68 + -1);
    } while (local_68 != 0.0);
    param_4[0x44] = param_4[0x44] + local_40;
    param_4[0x45] = param_4[0x45] + fStack_3c;
    param_4[0x46] = param_4[0x46] + fStack_38;
    param_4[0x47] = param_4[0x47] + fStack_34;
    param_4[0x48] = param_4[0x48] + local_30;
    param_4[0x49] = param_4[0x49] + fStack_2c;
    param_4[0x4a] = param_4[0x4a] + fStack_28;
    param_4[0x4b] = param_4[0x4b] + fStack_24;
    param_4[0x4c] = param_4[0x4c] + local_20;
    param_4[0x4d] = param_4[0x4d] + fStack_1c;
    param_4[0x4e] = param_4[0x4e] + fStack_18;
    param_4[0x4f] = param_4[0x4f] + fStack_14;
    fVar3 = param_1[0x10];
    pfVar14[0x18] = fVar3;
    afStack_70[1] = (float)((int)afStack_70[1] + -0x70);
    local_64[0] = (float)((int)local_64[0] + -1);
    pfVar14[0x19] = 1.0 / (fVar3 + 1.1920929e-07);
    pfVar14 = pfVar14 + 0x1c;
    param_1 = param_2;
  } while (local_64[0] != 0.0);
  auVar2 = *(undefined1 (*) [16])(param_4 + 0x48);
  fVar3 = param_4[0x44];
  fVar4 = param_4[0x45];
  fVar5 = param_4[0x46];
  fVar6 = param_4[0x47];
  fVar18 = param_4[0x49] * param_4[0x4e] - param_4[0x4a] * param_4[0x4d];
  fVar19 = param_4[0x4a] * param_4[0x4c] - param_4[0x48] * param_4[0x4e];
  fVar20 = param_4[0x48] * param_4[0x4d] - param_4[0x49] * param_4[0x4c];
  fVar17 = 1.0 / (fVar5 * fVar20 + fVar4 * fVar19 + fVar3 * fVar18 + 1.6940659e-21);
  param_4[0x50] = fVar17 * fVar18;
  param_4[0x51] = fVar17 * fVar19;
  param_4[0x52] = fVar17 * fVar20;
  param_4[0x53] = fVar17 * (param_4[0x4b] * param_4[0x4f] - param_4[0x4b] * param_4[0x4f]);
  param_4[0x54] = fVar17 * (param_4[0x4d] * fVar5 - param_4[0x4e] * fVar4);
  param_4[0x55] = fVar17 * (param_4[0x4e] * fVar3 - param_4[0x4c] * fVar5);
  param_4[0x56] = fVar17 * (param_4[0x4c] * fVar4 - param_4[0x4d] * fVar3);
  param_4[0x57] = fVar17 * (param_4[0x4f] * fVar6 - param_4[0x4f] * fVar6);
  param_4[0x58] = fVar17 * (fVar4 * auVar2._8_4_ - fVar5 * auVar2._4_4_);
  param_4[0x59] = fVar17 * (fVar5 * auVar2._0_4_ - fVar3 * auVar2._8_4_);
  param_4[0x5a] = fVar17 * (fVar3 * auVar2._4_4_ - fVar4 * auVar2._0_4_);
  param_4[0x5b] = fVar17 * (fVar6 * auVar2._12_4_ - fVar6 * auVar2._12_4_);
  param_4[0x47] = 1.0 / (param_4[0x44] + 1.1920929e-07);
  param_4[0x4b] =
       1.0 / ((param_4[0x4e] * param_4[0x49] - param_4[0x4d] * param_4[0x4a]) + 1.1920929e-07);
  return;
}



void FUN_0094fa50(int param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar1 = *(float *)(param_1 + 0x60);
  fVar12 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar9 = *(float *)(param_1 + 0xe0) * fVar12 + *(float *)(param_1 + 0xf0) * fVar2 +
          *(float *)(param_1 + 0x100) * fVar3;
  fVar10 = *(float *)(param_1 + 0xe4) * fVar12 + *(float *)(param_1 + 0xf4) * fVar2 +
           *(float *)(param_1 + 0x104) * fVar3;
  fVar11 = *(float *)(param_1 + 0xe8) * fVar12 + *(float *)(param_1 + 0xf8) * fVar2 +
           *(float *)(param_1 + 0x108) * fVar3;
  fVar12 = *(float *)(param_1 + 0xec) * fVar12 + *(float *)(param_1 + 0xfc) * fVar2 +
           *(float *)(param_1 + 0x10c) * fVar3;
  *param_3 = *param_3 + fVar1 * fVar9;
  param_3[1] = param_3[1] + fVar1 * fVar10;
  param_3[2] = param_3[2] + fVar1 * fVar11;
  param_3[3] = param_3[3] + fVar1 * fVar12;
  fVar1 = *(float *)(param_1 + 0xd0);
  *param_4 = *param_4 - fVar1 * fVar9;
  param_4[1] = param_4[1] - fVar1 * fVar10;
  param_4[2] = param_4[2] - fVar1 * fVar11;
  param_4[3] = param_4[3] - fVar1 * fVar12;
  fVar1 = *param_2;
  fVar12 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = *(float *)(param_1 + 0x54);
  fVar9 = *(float *)(param_1 + 0x58);
  fVar10 = *(float *)(param_1 + 0x5c);
  fVar11 = *(float *)(param_1 + 0x44);
  fVar4 = *(float *)(param_1 + 0x48);
  fVar5 = *(float *)(param_1 + 0x4c);
  fVar6 = *(float *)(param_1 + 0x34);
  fVar7 = *(float *)(param_1 + 0x38);
  fVar8 = *(float *)(param_1 + 0x3c);
  param_3[4] = param_3[4] +
               *(float *)(param_1 + 0x30) * fVar1 + *(float *)(param_1 + 0x40) * fVar12 +
               *(float *)(param_1 + 0x50) * fVar2;
  param_3[5] = param_3[5] + fVar6 * fVar1 + fVar11 * fVar12 + fVar3 * fVar2;
  param_3[6] = param_3[6] + fVar7 * fVar1 + fVar4 * fVar12 + fVar9 * fVar2;
  param_3[7] = param_3[7] + fVar8 * fVar1 + fVar5 * fVar12 + fVar10 * fVar2;
  fVar1 = *param_2;
  fVar12 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = *(float *)(param_1 + 0xc4);
  fVar9 = *(float *)(param_1 + 200);
  fVar10 = *(float *)(param_1 + 0xcc);
  fVar11 = *(float *)(param_1 + 0xb4);
  fVar4 = *(float *)(param_1 + 0xb8);
  fVar5 = *(float *)(param_1 + 0xbc);
  fVar6 = *(float *)(param_1 + 0xa4);
  fVar7 = *(float *)(param_1 + 0xa8);
  fVar8 = *(float *)(param_1 + 0xac);
  param_4[4] = param_4[4] -
               (*(float *)(param_1 + 0xa0) * fVar1 + *(float *)(param_1 + 0xb0) * fVar12 +
               *(float *)(param_1 + 0xc0) * fVar2);
  param_4[5] = param_4[5] - (fVar6 * fVar1 + fVar11 * fVar12 + fVar3 * fVar2);
  param_4[6] = param_4[6] - (fVar7 * fVar1 + fVar4 * fVar12 + fVar9 * fVar2);
  param_4[7] = param_4[7] - (fVar8 * fVar1 + fVar5 * fVar12 + fVar10 * fVar2);
  param_3[7] = 0.0;
  param_4[7] = 0.0;
  param_3[3] = 0.0;
  param_4[3] = 0.0;
  return;
}



void FUN_0094fb80(float *param_1,float *param_2,float *param_3,float *param_4)

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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  fVar1 = param_1[0x40];
  fVar2 = param_1[0x41];
  fVar3 = param_1[0x42];
  fVar4 = param_1[0x3c];
  fVar5 = param_1[0x3d];
  fVar31 = *param_2 - *param_3;
  fVar32 = param_2[1] - param_3[1];
  fVar33 = param_2[2] - param_3[2];
  fVar6 = param_2[4];
  fVar7 = param_2[5];
  fVar8 = param_2[6];
  fVar9 = param_1[0x3e];
  fVar10 = param_3[4];
  fVar11 = param_3[5];
  fVar12 = param_3[6];
  fVar13 = param_1[0x25];
  fVar14 = param_1[0x26];
  fVar15 = param_1[0x27];
  fVar16 = param_1[0x21];
  fVar17 = param_1[0x22];
  fVar18 = param_1[0x23];
  fVar19 = param_1[0x1d];
  fVar20 = param_1[0x1e];
  fVar21 = param_1[0x1f];
  fVar22 = param_1[5];
  fVar23 = param_1[6];
  fVar24 = param_1[7];
  fVar25 = param_1[9];
  fVar26 = param_1[10];
  fVar27 = param_1[0xb];
  fVar28 = param_1[1];
  fVar29 = param_1[2];
  fVar30 = param_1[3];
  *param_4 = ((*param_1 * fVar6 + param_1[4] * fVar7 + param_1[8] * fVar8) -
             (param_1[0x1c] * fVar10 + param_1[0x20] * fVar11 + param_1[0x24] * fVar12)) +
             param_1[0x38] * fVar31 + param_1[0x39] * fVar32 + param_1[0x3a] * fVar33;
  param_4[1] = ((fVar28 * fVar6 + fVar22 * fVar7 + fVar25 * fVar8) -
               (fVar19 * fVar10 + fVar16 * fVar11 + fVar13 * fVar12)) +
               fVar4 * fVar31 + fVar5 * fVar32 + fVar9 * fVar33;
  param_4[2] = ((fVar29 * fVar6 + fVar23 * fVar7 + fVar26 * fVar8) -
               (fVar20 * fVar10 + fVar17 * fVar11 + fVar14 * fVar12)) +
               fVar1 * fVar31 + fVar2 * fVar32 + fVar3 * fVar33;
  param_4[3] = ((fVar30 * fVar6 + fVar24 * fVar7 + fVar27 * fVar8) -
               (fVar21 * fVar10 + fVar18 * fVar11 + fVar15 * fVar12)) +
               fVar1 * fVar31 + fVar2 * fVar32 + fVar3 * fVar33;
  return;
}



float10 FUN_0094fc90(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  FUN_0094fb80(param_1,param_3,param_4,&local_40);
  if ((*(float *)(param_2 + 0x18) < local_40) &&
     (local_40 = *(float *)(param_2 + 0x18),
     *(float *)(param_2 + 0x1c) <= *(float *)(param_2 + 0x18))) {
    return (float10)0.0;
  }
  fStack_3c = -fStack_3c;
  fStack_38 = -fStack_38;
  fStack_34 = -fStack_34;
  local_40 = (*(float *)(param_2 + 0x14) + 1.0) * -local_40 + *(float *)(param_2 + 0x1c);
  local_30 = *(float *)(param_1 + 0x140) * local_40 + *(float *)(param_1 + 0x150) * fStack_3c +
             *(float *)(param_1 + 0x160) * fStack_38;
  fStack_2c = *(float *)(param_1 + 0x144) * local_40 + *(float *)(param_1 + 0x154) * fStack_3c +
              *(float *)(param_1 + 0x164) * fStack_38;
  fStack_28 = *(float *)(param_1 + 0x148) * local_40 + *(float *)(param_1 + 0x158) * fStack_3c +
              *(float *)(param_1 + 0x168) * fStack_38;
  fStack_24 = *(float *)(param_1 + 0x14c) * local_40 + *(float *)(param_1 + 0x15c) * fStack_3c +
              *(float *)(param_1 + 0x16c) * fStack_38;
  local_20 = local_30 * local_30;
  fStack_1c = fStack_2c * fStack_2c;
  fStack_18 = fStack_28 * fStack_28;
  fStack_14 = fStack_24 * fStack_24;
  if (*(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10) * local_20 < fStack_18 + fStack_1c) {
    fVar1 = ABS(fStack_28);
    fVar3 = ABS(fStack_2c);
    fStack_24 = 0.0;
    fVar4 = local_40 * *(float *)(param_1 + 0x11c);
    fStack_3c = fStack_3c - fVar4 * *(float *)(param_1 + 0x114);
    fStack_38 = fStack_38 - fVar4 * *(float *)(param_1 + 0x118);
    fVar2 = fStack_38 * *(float *)(param_1 + 0x134);
    fStack_2c = (fStack_3c * *(float *)(param_1 + 0x124) - fVar2) * *(float *)(param_1 + 300);
    fStack_28 = (fStack_38 * *(float *)(param_1 + 0x138) - fVar2) * *(float *)(param_1 + 300);
    fVar2 = fStack_2c * fStack_2c + fStack_28 * fStack_28;
    fVar5 = (fVar4 + 0.0) * *(float *)(param_2 + 0x10);
    fVar5 = fVar5 * fVar5;
    if (fVar5 < fVar2) {
      fVar2 = SQRT(fVar5 / fVar2);
      fStack_2c = fVar2 * fStack_2c;
      fStack_28 = fVar2 * fStack_28;
    }
    local_40 = ((local_40 - fVar4 * *(float *)(param_1 + 0x110)) -
               fStack_2c * *(float *)(param_1 + 0x120)) - fStack_28 * *(float *)(param_1 + 0x130);
    fStack_3c = (fStack_3c - fStack_2c * *(float *)(param_1 + 0x124)) -
                fStack_28 * *(float *)(param_1 + 0x134);
    fStack_38 = (fStack_38 - fStack_2c * *(float *)(param_1 + 0x128)) -
                fStack_28 * *(float *)(param_1 + 0x138);
    fStack_34 = ((fStack_34 - fVar4 * *(float *)(param_1 + 0x11c)) -
                fStack_2c * *(float *)(param_1 + 300)) - fStack_28 * *(float *)(param_1 + 0x13c);
    fVar2 = local_40 * *(float *)(param_1 + 0x11c);
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    local_30 = (fVar3 + fVar1) * *(float *)(param_2 + 0x20) + fVar2 + fVar4 + 0.0;
  }
  FUN_0094fa50(param_1,&local_30,param_3,param_4);
  return (float10)local_30;
}



void FUN_0094fee0(void)

{
  FID_conflict___time32((__time32_t *)0x0);
  return;
}



void FUN_0094fef0(float *param_1,int param_2,int param_3,byte *param_4,int param_5,
                 undefined4 *param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  float *pfVar7;
  float *pfVar8;
  undefined2 uVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float *local_7c;
  float local_74;
  float local_70;
  float *local_68;
  int local_60;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  iVar2 = *(int *)(param_5 + 0x14);
  fVar22 = 1.0 / (float)param_2;
  iVar3 = *(int *)(param_5 + 0x18);
  puVar4 = (undefined4 *)param_6[1];
  uVar5 = *param_6;
  puVar4[2] = param_3;
  *puVar4 = 0x11801;
  puVar4[3] = iVar2;
  puVar4[4] = iVar3;
  puVar4[5] = 0x14;
  puVar4[1] = uVar5;
  pfVar11 = (float *)*param_6;
  pfVar13 = (float *)(puVar4 + 6);
  fVar41 = 0.0;
  fVar42 = 0.0;
  fVar43 = 0.0;
  fVar45 = 0.0;
  local_50 = 0.0;
  fStack_4c = 0.0;
  fStack_48 = 0.0;
  fVar35 = 0.0;
  local_68 = (float *)0x0;
  fVar18 = 0.0;
  if (-1 < param_2 + -1) {
    local_7c = param_1 + 4;
    pfVar14 = (float *)(param_3 + 0x10);
    local_60 = param_2;
    do {
      fVar15 = local_7c[1];
      fVar16 = local_7c[2];
      fVar17 = local_7c[3];
      *pfVar11 = *local_7c;
      pfVar11[1] = fVar15;
      pfVar11[2] = fVar16;
      pfVar11[3] = fVar17;
      fVar15 = local_7c[-4] - *(float *)(iVar2 + 0x40);
      fVar17 = local_7c[-3] - *(float *)(iVar2 + 0x44);
      fVar19 = local_7c[-2] - *(float *)(iVar2 + 0x48);
      fVar23 = local_7c[-1] - *(float *)(iVar2 + 0x4c);
      fVar26 = local_7c[-4] - *(float *)(iVar3 + 0x40);
      fVar32 = local_7c[-3] - *(float *)(iVar3 + 0x44);
      fVar33 = local_7c[-2] - *(float *)(iVar3 + 0x48);
      fVar34 = local_7c[-1] - *(float *)(iVar3 + 0x4c);
      fVar16 = fVar17 * local_7c[2] - fVar19 * local_7c[1];
      fVar19 = fVar19 * *local_7c - fVar15 * local_7c[2];
      fVar15 = fVar15 * local_7c[1] - fVar17 * *local_7c;
      fVar17 = fVar23 * local_7c[3] - fVar23 * local_7c[3];
      if (*(char *)(iVar2 + 0xc) == '\0') {
        fVar17 = *(float *)(iVar2 + 0x7c) * fVar15;
        fVar37 = *(float *)(iVar2 + 0x68) * fVar19;
        fVar39 = *(float *)(iVar2 + 0x6c) * fVar19;
        fVar23 = *(float *)(iVar2 + 0x54) * fVar16;
        fVar20 = *(float *)(iVar2 + 0x58) * fVar16;
        fVar24 = *(float *)(iVar2 + 0x5c) * fVar16;
        fVar16 = *(float *)(iVar2 + 0x50) * fVar16 + *(float *)(iVar2 + 0x60) * fVar19 +
                 *(float *)(iVar2 + 0x70) * fVar15;
        fVar19 = fVar23 + *(float *)(iVar2 + 100) * fVar19 + *(float *)(iVar2 + 0x74) * fVar15;
        fVar15 = fVar20 + fVar37 + *(float *)(iVar2 + 0x78) * fVar15;
        fVar17 = fVar24 + fVar39 + fVar17;
      }
      pfVar11[4] = fVar16;
      pfVar11[5] = fVar19;
      pfVar11[6] = fVar15;
      pfVar11[7] = fVar17;
      fVar15 = local_7c[1] * fVar33 - local_7c[2] * fVar32;
      fVar16 = local_7c[2] * fVar26 - *local_7c * fVar33;
      fVar17 = *local_7c * fVar32 - local_7c[1] * fVar26;
      fVar19 = local_7c[3] * fVar34 - local_7c[3] * fVar34;
      if (*(char *)(iVar3 + 0xc) == '\0') {
        fVar19 = *(float *)(iVar3 + 0x7c) * fVar17;
        fVar33 = *(float *)(iVar3 + 0x68) * fVar16;
        fVar34 = *(float *)(iVar3 + 0x6c) * fVar16;
        fVar23 = *(float *)(iVar3 + 0x54) * fVar15;
        fVar26 = *(float *)(iVar3 + 0x58) * fVar15;
        fVar32 = *(float *)(iVar3 + 0x5c) * fVar15;
        fVar15 = *(float *)(iVar3 + 0x50) * fVar15 + *(float *)(iVar3 + 0x60) * fVar16 +
                 *(float *)(iVar3 + 0x70) * fVar17;
        fVar16 = fVar23 + *(float *)(iVar3 + 100) * fVar16 + *(float *)(iVar3 + 0x74) * fVar17;
        fVar17 = fVar26 + fVar33 + *(float *)(iVar3 + 0x78) * fVar17;
        fVar19 = fVar32 + fVar34 + fVar19;
      }
      pfVar11[8] = fVar15;
      pfVar11[9] = fVar16;
      pfVar11[10] = fVar17;
      pfVar11[0xb] = fVar19;
      fVar15 = *(float *)(iVar3 + 0x3c) + *(float *)(iVar2 + 0x3c) + 1.1920929e-07 +
               pfVar11[6] * pfVar11[6] * *(float *)(iVar2 + 0x38) +
               pfVar11[10] * pfVar11[10] * *(float *)(iVar3 + 0x38) +
               pfVar11[5] * pfVar11[5] * *(float *)(iVar2 + 0x34) +
               pfVar11[9] * pfVar11[9] * *(float *)(iVar3 + 0x34) +
               pfVar11[4] * pfVar11[4] * *(float *)(iVar2 + 0x30) +
               pfVar11[8] * pfVar11[8] * *(float *)(iVar3 + 0x30);
      pfVar11[0xb] = fVar15;
      pfVar11[7] = 1.0 / fVar15;
      local_68 = (float *)((int)local_68 + (uint)*(ushort *)(pfVar14 + -1));
      fVar18 = fVar18 + pfVar14[-4];
      fVar15 = *pfVar14;
      fVar16 = -pfVar14[-3] - (local_7c[3] - fVar15);
      local_74 = *(float *)(param_5 + 8);
      if (fVar15 * -0.050000012 < local_74) {
        local_74 = fVar15 * -0.050000012;
      }
      local_70 = local_74 + fVar15;
      fVar15 = (local_7c[3] - fVar15) - local_74;
      if (local_74 + local_74 + 0.001 < fVar16) {
        local_70 = local_70 - fVar16;
        fVar15 = fVar15 + fVar16;
      }
      if (ABS(fVar15) < 1e-10) {
        fVar15 = 0.0;
      }
      if (0.0 <= local_70) {
        local_70 = 0.0;
      }
      *pfVar14 = local_70;
      pfVar11[3] = -fVar15 * *(float *)(param_5 + 4);
      fVar41 = fVar41 + local_7c[-4];
      fVar42 = fVar42 + local_7c[-3];
      fVar43 = fVar43 + local_7c[-2];
      fVar45 = fVar45 + local_7c[-1];
      local_50 = local_50 + *local_7c;
      fStack_4c = fStack_4c + local_7c[1];
      fStack_48 = fStack_48 + local_7c[2];
      fVar35 = fVar35 + local_7c[3];
      if ((*(byte *)((int)pfVar14 + -1) & 2) == 0) {
        *pfVar13 = 2.76944e-40;
      }
      else {
        fVar15 = pfVar11[-1];
        fVar16 = *(float *)(iVar2 + 0x3c);
        fVar17 = *(float *)(iVar3 + 0x3c);
        fVar17 = (pfVar11[6] * pfVar11[-6] * *(float *)(iVar2 + 0x38) +
                  pfVar11[10] * pfVar11[-2] * *(float *)(iVar3 + 0x38) +
                  fVar16 * pfVar11[2] * pfVar11[-10] + fVar17 * pfVar11[2] * pfVar11[-10] +
                 pfVar11[5] * pfVar11[-7] * *(float *)(iVar2 + 0x34) +
                 pfVar11[9] * pfVar11[-3] * *(float *)(iVar3 + 0x34) +
                 fVar16 * pfVar11[1] * pfVar11[-0xb] + fVar17 * pfVar11[1] * pfVar11[-0xb] +
                 pfVar11[4] * pfVar11[-8] * *(float *)(iVar2 + 0x30) +
                 pfVar11[8] * pfVar11[-4] * *(float *)(iVar3 + 0x30) +
                 fVar16 * *pfVar11 * pfVar11[-0xc] + fVar17 * *pfVar11 * pfVar11[-0xc]) * 0.99;
        fVar16 = 1.0 / (pfVar11[0xb] * fVar15 - fVar17 * fVar17);
        pfVar11[-1] = fVar16 * pfVar11[0xb];
        pfVar11[0xb] = fVar16 * fVar15;
        pfVar13[-1] = 4.62052e-40;
        *pfVar13 = -(fVar16 * fVar17);
      }
      pfVar11 = pfVar11 + 0xc;
      pfVar13 = pfVar13 + 1;
      local_7c = local_7c + 8;
      pfVar14 = pfVar14 + 5;
      local_60 = local_60 + -1;
    } while (local_60 != 0);
  }
  fVar18 = (float)(int)local_68 * 0.00390625 * fVar22 * fVar18;
  if (fVar18 <= 0.0) {
    param_6[1] = pfVar13;
    *param_6 = pfVar11;
    return;
  }
  fVar15 = fStack_4c * fStack_4c;
  fVar16 = fStack_48 * fStack_48;
  fVar17 = fVar16 + fVar15 + local_50 * local_50;
  if (fVar22 * fVar22 * fVar17 <= 0.9999) {
    if (fVar17 <= 0.1) {
      local_50 = param_1[4];
      fStack_4c = param_1[5];
      fStack_48 = param_1[6];
      fStack_44 = param_1[7];
      if (fStack_48 * fStack_48 + fStack_4c * fStack_4c + local_50 * local_50 < 0.9) {
        local_50 = 0.0;
        fStack_48 = 0.0;
        fStack_44 = 0.0;
        fVar18 = 0.0;
        fStack_4c = 1.0;
      }
    }
    else {
      auVar27._4_4_ = fVar15;
      auVar27._0_4_ = fVar15;
      auVar27._8_4_ = fVar15;
      auVar27._12_4_ = fVar15;
      auVar28._4_12_ = auVar27._4_12_;
      auVar28._0_4_ = fVar15 + local_50 * local_50;
      auVar31._4_4_ = fVar16;
      auVar31._0_4_ = fVar16 + auVar28._0_4_;
      auVar31._8_4_ = fVar16;
      auVar31._12_4_ = fVar16;
      auVar31 = rsqrtss(auVar28,auVar31);
      fVar15 = auVar31._0_4_;
      fStack_44 = fVar15 * 0.5 * (3.0 - (fVar16 + auVar28._0_4_) * fVar15 * fVar15);
      local_50 = fStack_44 * local_50;
      fStack_4c = fStack_44 * fStack_4c;
      fStack_48 = fStack_44 * fStack_48;
      fStack_44 = fStack_44 * fVar35;
    }
  }
  else {
    local_50 = param_1[4];
    fStack_4c = param_1[5];
    fStack_48 = param_1[6];
    fStack_44 = param_1[7];
  }
  do {
    while( true ) {
      uVar10 = (uint)*(ushort *)(param_4 + 2);
      fVar35 = (float)(&DAT_00b2f094)[uVar10 * 4] * fStack_48 -
               (float)(&DAT_00b2f098)[uVar10 * 4] * fStack_4c;
      fVar15 = (float)(&DAT_00b2f098)[uVar10 * 4] * local_50 -
               (float)(&DAT_00b2f090)[uVar10 * 4] * fStack_48;
      fVar16 = (float)(&DAT_00b2f090)[uVar10 * 4] * fStack_4c -
               (float)(&DAT_00b2f094)[uVar10 * 4] * local_50;
      if (0.1 < fVar16 * fVar16 + fVar15 * fVar15 + fVar35 * fVar35) {
        fVar17 = fVar15 * fVar15;
        fVar19 = fVar16 * fVar16;
        auVar29._4_4_ = fVar17;
        auVar29._0_4_ = fVar17;
        auVar29._8_4_ = fVar17;
        auVar29._12_4_ = fVar17;
        auVar30._4_12_ = auVar29._4_12_;
        auVar30._0_4_ = fVar17 + fVar35 * fVar35;
        auVar6._4_4_ = fVar19;
        auVar6._0_4_ = fVar19 + auVar30._0_4_;
        auVar6._8_4_ = fVar19;
        auVar6._12_4_ = fVar19;
        auVar31 = rsqrtss(auVar30,auVar6);
        fVar17 = auVar31._0_4_;
        fVar17 = fVar17 * 0.5 * (3.0 - (fVar19 + auVar30._0_4_) * fVar17 * fVar17);
        fVar35 = fVar17 * fVar35;
        fVar15 = fVar17 * fVar15;
        fVar16 = fVar17 * fVar16;
        fVar17 = fVar17 * ((float)(&DAT_00b2f09c)[uVar10 * 4] * fStack_44 -
                          (float)(&DAT_00b2f09c)[uVar10 * 4] * fStack_44);
        fVar41 = fVar22 * fVar41;
        fVar42 = fVar22 * fVar42;
        fVar43 = fVar22 * fVar43;
        fVar45 = fVar22 * fVar45;
        fVar19 = fStack_4c * fVar16 - fStack_48 * fVar15;
        fVar26 = fStack_48 * fVar35 - local_50 * fVar16;
        fVar33 = local_50 * fVar15 - fStack_4c * fVar35;
        fVar20 = fStack_44 * fVar17 - fStack_44 * fVar17;
        *pfVar11 = fVar19;
        pfVar11[1] = fVar26;
        pfVar11[2] = fVar33;
        pfVar11[3] = fVar20;
        fVar34 = fVar41 - *(float *)(iVar2 + 0x40);
        fVar24 = fVar42 - *(float *)(iVar2 + 0x44);
        fVar32 = fVar43 - *(float *)(iVar2 + 0x48);
        fVar37 = fVar45 - *(float *)(iVar2 + 0x4c);
        fVar39 = fVar41 - *(float *)(iVar3 + 0x40);
        fVar36 = fVar42 - *(float *)(iVar3 + 0x44);
        fVar38 = fVar43 - *(float *)(iVar3 + 0x48);
        fVar40 = fVar45 - *(float *)(iVar3 + 0x4c);
        fVar23 = fVar24 * fVar33 - fVar32 * fVar26;
        fVar32 = fVar32 * fVar19 - fVar34 * fVar33;
        fVar34 = fVar34 * fVar26 - fVar24 * fVar19;
        fVar24 = fVar37 * fVar20 - fVar37 * fVar20;
        if (*(char *)(iVar2 + 0xc) == '\0') {
          fVar24 = *(float *)(iVar2 + 0x7c) * fVar34;
          fVar44 = *(float *)(iVar2 + 0x68) * fVar32;
          fVar46 = *(float *)(iVar2 + 0x6c) * fVar32;
          fVar37 = *(float *)(iVar2 + 0x54) * fVar23;
          fVar21 = *(float *)(iVar2 + 0x58) * fVar23;
          fVar25 = *(float *)(iVar2 + 0x5c) * fVar23;
          fVar23 = *(float *)(iVar2 + 0x50) * fVar23 + *(float *)(iVar2 + 0x60) * fVar32 +
                   *(float *)(iVar2 + 0x70) * fVar34;
          fVar32 = fVar37 + *(float *)(iVar2 + 100) * fVar32 + *(float *)(iVar2 + 0x74) * fVar34;
          fVar34 = fVar21 + fVar44 + *(float *)(iVar2 + 0x78) * fVar34;
          fVar24 = fVar25 + fVar46 + fVar24;
        }
        pfVar11[4] = fVar23;
        pfVar11[5] = fVar32;
        pfVar11[6] = fVar34;
        pfVar11[7] = fVar24;
        fVar23 = fVar26 * fVar38 - fVar33 * fVar36;
        fVar32 = fVar33 * fVar39 - fVar19 * fVar38;
        fVar26 = fVar19 * fVar36 - fVar26 * fVar39;
        fVar19 = fVar20 * fVar40 - fVar20 * fVar40;
        if (*(char *)(iVar3 + 0xc) == '\0') {
          fVar19 = *(float *)(iVar3 + 0x7c) * fVar26;
          fVar24 = *(float *)(iVar3 + 0x68) * fVar32;
          fVar37 = *(float *)(iVar3 + 0x6c) * fVar32;
          fVar33 = *(float *)(iVar3 + 0x54) * fVar23;
          fVar34 = *(float *)(iVar3 + 0x58) * fVar23;
          fVar20 = *(float *)(iVar3 + 0x5c) * fVar23;
          fVar23 = *(float *)(iVar3 + 0x50) * fVar23 + *(float *)(iVar3 + 0x60) * fVar32 +
                   *(float *)(iVar3 + 0x70) * fVar26;
          fVar32 = fVar33 + *(float *)(iVar3 + 100) * fVar32 + *(float *)(iVar3 + 0x74) * fVar26;
          fVar26 = fVar34 + fVar24 + *(float *)(iVar3 + 0x78) * fVar26;
          fVar19 = fVar20 + fVar37 + fVar19;
        }
        pfVar11[8] = fVar23;
        pfVar11[9] = fVar32;
        pfVar11[10] = fVar26;
        pfVar11[0xb] = fVar19;
        fVar19 = *(float *)(iVar3 + 0x3c) + *(float *)(iVar2 + 0x3c) + 1.1920929e-07 +
                 pfVar11[6] * pfVar11[6] * *(float *)(iVar2 + 0x38) +
                 pfVar11[10] * pfVar11[10] * *(float *)(iVar3 + 0x38) +
                 pfVar11[5] * pfVar11[5] * *(float *)(iVar2 + 0x34) +
                 pfVar11[9] * pfVar11[9] * *(float *)(iVar3 + 0x34) +
                 pfVar11[4] * pfVar11[4] * *(float *)(iVar2 + 0x30) +
                 pfVar11[8] * pfVar11[8] * *(float *)(iVar3 + 0x30);
        pfVar11[0xb] = fVar19;
        pfVar11[7] = 1.0 / fVar19;
        pfVar11[3] = *(float *)(param_4 + 8) * *(float *)(param_5 + 4);
        pfVar11[0xc] = fVar35;
        pfVar11[0xd] = fVar15;
        pfVar11[0xe] = fVar16;
        pfVar11[0xf] = fVar17;
        fVar19 = fVar41 - *(float *)(iVar2 + 0x40);
        fVar26 = fVar42 - *(float *)(iVar2 + 0x44);
        fVar32 = fVar43 - *(float *)(iVar2 + 0x48);
        fVar33 = fVar45 - *(float *)(iVar2 + 0x4c);
        fVar34 = fVar41 - *(float *)(iVar3 + 0x40);
        fVar20 = fVar42 - *(float *)(iVar3 + 0x44);
        fVar24 = fVar43 - *(float *)(iVar3 + 0x48);
        fVar45 = fVar45 - *(float *)(iVar3 + 0x4c);
        fVar23 = fVar26 * fVar16 - fVar32 * fVar15;
        fVar32 = fVar32 * fVar35 - fVar19 * fVar16;
        fVar19 = fVar19 * fVar15 - fVar26 * fVar35;
        fVar26 = fVar33 * fVar17 - fVar33 * fVar17;
        if (*(char *)(iVar2 + 0xc) == '\0') {
          fVar26 = *(float *)(iVar2 + 0x7c) * fVar19;
          fVar36 = *(float *)(iVar2 + 0x68) * fVar32;
          fVar38 = *(float *)(iVar2 + 0x6c) * fVar32;
          fVar33 = *(float *)(iVar2 + 0x54) * fVar23;
          fVar37 = *(float *)(iVar2 + 0x58) * fVar23;
          fVar39 = *(float *)(iVar2 + 0x5c) * fVar23;
          fVar23 = *(float *)(iVar2 + 0x50) * fVar23 + *(float *)(iVar2 + 0x60) * fVar32 +
                   *(float *)(iVar2 + 0x70) * fVar19;
          fVar32 = fVar33 + *(float *)(iVar2 + 100) * fVar32 + *(float *)(iVar2 + 0x74) * fVar19;
          fVar19 = fVar37 + fVar36 + *(float *)(iVar2 + 0x78) * fVar19;
          fVar26 = fVar39 + fVar38 + fVar26;
        }
        pfVar11[0x10] = fVar23;
        pfVar11[0x11] = fVar32;
        pfVar11[0x12] = fVar19;
        pfVar11[0x13] = fVar26;
        fVar19 = fVar15 * fVar24 - fVar16 * fVar20;
        fVar16 = fVar16 * fVar34 - fVar35 * fVar24;
        fVar35 = fVar35 * fVar20 - fVar15 * fVar34;
        fVar45 = fVar17 * fVar45 - fVar17 * fVar45;
        if (*(char *)(iVar3 + 0xc) == '\0') {
          fVar45 = *(float *)(iVar3 + 0x7c) * fVar35;
          fVar15 = *(float *)(iVar3 + 0x68) * fVar16;
          fVar17 = *(float *)(iVar3 + 0x6c) * fVar16;
          fVar23 = *(float *)(iVar3 + 0x54) * fVar19;
          fVar26 = *(float *)(iVar3 + 0x58) * fVar19;
          fVar32 = *(float *)(iVar3 + 0x5c) * fVar19;
          fVar19 = *(float *)(iVar3 + 0x50) * fVar19 + *(float *)(iVar3 + 0x60) * fVar16 +
                   *(float *)(iVar3 + 0x70) * fVar35;
          fVar16 = fVar23 + *(float *)(iVar3 + 100) * fVar16 + *(float *)(iVar3 + 0x74) * fVar35;
          fVar35 = fVar26 + fVar15 + *(float *)(iVar3 + 0x78) * fVar35;
          fVar45 = fVar32 + fVar17 + fVar45;
        }
        pfVar11[0x14] = fVar19;
        pfVar11[0x15] = fVar16;
        pfVar11[0x16] = fVar35;
        pfVar11[0x17] = fVar45;
        fVar45 = *(float *)(iVar3 + 0x3c) + *(float *)(iVar2 + 0x3c) + 1.1920929e-07 +
                 pfVar11[0x12] * pfVar11[0x12] * *(float *)(iVar2 + 0x38) +
                 pfVar11[0x16] * pfVar11[0x16] * *(float *)(iVar3 + 0x38) +
                 pfVar11[0x11] * pfVar11[0x11] * *(float *)(iVar2 + 0x34) +
                 pfVar11[0x15] * pfVar11[0x15] * *(float *)(iVar3 + 0x34) +
                 pfVar11[0x10] * pfVar11[0x10] * *(float *)(iVar2 + 0x30) +
                 pfVar11[0x14] * pfVar11[0x14] * *(float *)(iVar3 + 0x30);
        pfVar12 = pfVar11 + 0x18;
        pfVar11[0x17] = fVar45;
        pfVar11[0x13] = 1.0 / fVar45;
        pfVar11[0xf] = *(float *)(param_4 + 0x10) * *(float *)(param_5 + 4);
        fVar45 = pfVar11[0xb];
        fVar35 = *(float *)(iVar2 + 0x3c);
        fVar15 = *(float *)(iVar3 + 0x3c);
        fVar15 = pfVar11[0x12] * pfVar11[6] * *(float *)(iVar2 + 0x38) +
                 pfVar11[0x16] * pfVar11[10] * *(float *)(iVar3 + 0x38) +
                 fVar35 * pfVar11[0xe] * pfVar11[2] + fVar15 * pfVar11[0xe] * pfVar11[2] +
                 pfVar11[0x11] * pfVar11[5] * *(float *)(iVar2 + 0x34) +
                 pfVar11[0x15] * pfVar11[9] * *(float *)(iVar3 + 0x34) +
                 fVar35 * pfVar11[0xd] * pfVar11[1] + fVar15 * pfVar11[0xd] * pfVar11[1] +
                 pfVar11[0x10] * pfVar11[4] * *(float *)(iVar2 + 0x30) +
                 pfVar11[0x14] * pfVar11[8] * *(float *)(iVar3 + 0x30) +
                 fVar35 * pfVar11[0xc] * *pfVar11 + fVar15 * pfVar11[0xc] * *pfVar11;
        fVar35 = 1.0 / (fVar45 * pfVar11[0x17] - fVar15 * fVar15);
        pfVar11[0xb] = fVar35 * pfVar11[0x17];
        pfVar11[0x17] = fVar35 * fVar45;
        fVar45 = *(float *)(param_5 + 0x10);
        pfVar13[1] = (float)(param_4 + 4);
        pfVar14 = pfVar13 + 5;
        *pfVar13 = 4.66362e-40;
        pfVar13[4] = 1.12104e-44;
        pfVar13[2] = -(fVar15 * fVar35);
        pfVar13[3] = fVar18 * fVar45;
        if (1 < param_2) {
          bVar1 = *param_4;
          while( true ) {
            if ((bVar1 & 4) == 0) {
              if (*(char *)(iVar2 + 0xc) == '\0') {
                fVar18 = *(float *)(iVar2 + 0x74);
                fVar22 = *(float *)(iVar2 + 0x78);
                fVar45 = *(float *)(iVar2 + 0x7c);
                fVar41 = *(float *)(iVar2 + 100);
                fVar42 = *(float *)(iVar2 + 0x68);
                fVar43 = *(float *)(iVar2 + 0x6c);
                fVar35 = *(float *)(iVar2 + 0x54);
                fVar15 = *(float *)(iVar2 + 0x58);
                fVar16 = *(float *)(iVar2 + 0x5c);
                *pfVar12 = *(float *)(iVar2 + 0x50) * local_50 +
                           *(float *)(iVar2 + 0x60) * fStack_4c +
                           *(float *)(iVar2 + 0x70) * fStack_48;
                pfVar11[0x19] = fVar35 * local_50 + fVar41 * fStack_4c + fVar18 * fStack_48;
                pfVar11[0x1a] = fVar15 * local_50 + fVar42 * fStack_4c + fVar22 * fStack_48;
                pfVar11[0x1b] = fVar16 * local_50 + fVar43 * fStack_4c + fVar45 * fStack_48;
              }
              else {
                *pfVar12 = local_50;
                pfVar11[0x19] = fStack_4c;
                pfVar11[0x1a] = fStack_48;
                pfVar11[0x1b] = fStack_44;
              }
              local_50 = -local_50;
              fStack_4c = -fStack_4c;
              fStack_48 = -fStack_48;
              fStack_44 = -fStack_44;
              if (*(char *)(iVar3 + 0xc) == '\0') {
                fStack_44 = *(float *)(iVar3 + 0x7c) * fStack_48;
                fVar41 = *(float *)(iVar3 + 0x68) * fStack_4c;
                fVar42 = *(float *)(iVar3 + 0x6c) * fStack_4c;
                fVar18 = *(float *)(iVar3 + 0x54) * local_50;
                fVar22 = *(float *)(iVar3 + 0x58) * local_50;
                fVar45 = *(float *)(iVar3 + 0x5c) * local_50;
                local_50 = *(float *)(iVar3 + 0x50) * local_50 +
                           *(float *)(iVar3 + 0x60) * fStack_4c +
                           *(float *)(iVar3 + 0x70) * fStack_48;
                fStack_4c = fVar18 + *(float *)(iVar3 + 100) * fStack_4c +
                            *(float *)(iVar3 + 0x74) * fStack_48;
                fStack_48 = fVar22 + fVar41 + *(float *)(iVar3 + 0x78) * fStack_48;
                fStack_44 = fVar45 + fVar42 + fStack_44;
              }
              pfVar11[0x1c] = local_50;
              pfVar11[0x1d] = fStack_4c;
              pfVar11[0x1e] = fStack_48;
              pfVar11[0x1f] = fStack_44;
              pfVar11[0x1b] =
                   1.0 / (pfVar11[0x1a] * pfVar11[0x1a] * *(float *)(iVar2 + 0x38) +
                          pfVar11[0x1e] * pfVar11[0x1e] * *(float *)(iVar3 + 0x38) +
                          pfVar11[0x19] * pfVar11[0x19] * *(float *)(iVar2 + 0x34) +
                          pfVar11[0x1d] * pfVar11[0x1d] * *(float *)(iVar3 + 0x34) +
                          *pfVar12 * *pfVar12 * *(float *)(iVar2 + 0x30) +
                          pfVar11[0x1c] * pfVar11[0x1c] * *(float *)(iVar3 + 0x30) + 1.1920929e-07);
              fVar18 = *(float *)(param_4 + 0x1c);
              *pfVar14 = *(float *)(param_4 + 0x1c);
              *pfVar13 = 5.59634e-40;
              pfVar11[0x1f] = *(float *)(param_4 + 0x18) * *(float *)(param_5 + 4);
              pfVar11[0x1b] = (1.0 / fVar18) * pfVar11[0x1b];
              *param_6 = pfVar11 + 0x20;
              param_6[1] = pfVar13 + 6;
              return;
            }
            local_68 = param_1;
            param_4[0x1c] = 0;
            param_4[0x1d] = 0;
            param_4[0x1e] = 0;
            param_4[0x1f] = 0;
            if (-1 < param_2 + -1) {
              local_60 = param_2;
              do {
                fVar18 = *local_68;
                pfVar7 = local_68 + 1;
                pfVar8 = local_68 + 2;
                local_68 = local_68 + 8;
                *(float *)(param_4 + 0x1c) =
                     SQRT((*pfVar8 - fVar43) * (*pfVar8 - fVar43) +
                          (*pfVar7 - fVar42) * (*pfVar7 - fVar42) +
                          (fVar18 - fVar41) * (fVar18 - fVar41)) + *(float *)(param_4 + 0x1c);
                local_60 = local_60 + -1;
              } while (local_60 != 0);
            }
            fVar18 = *(float *)(param_4 + 0x1c);
            *(float *)(param_4 + 0x1c) = fVar22 * fVar18;
            if (fVar22 * fVar18 < 1e-06) break;
            *param_4 = *param_4 & 0xfb;
            bVar1 = *param_4;
          }
          *param_6 = pfVar12;
          param_6[1] = pfVar14;
          return;
        }
        *param_6 = pfVar12;
        param_6[1] = pfVar14;
        return;
      }
      if (ABS(fStack_4c) <= ABS(local_50)) break;
      if (ABS(fStack_48) <= ABS(local_50)) goto LAB_009504d3;
      param_4[2] = 0;
      param_4[3] = 0;
      param_4[8] = 0;
      param_4[9] = 0;
      param_4[10] = 0;
      param_4[0xb] = 0;
      param_4[0x10] = 0;
      param_4[0x11] = 0;
      param_4[0x12] = 0;
      param_4[0x13] = 0;
    }
    uVar9 = 1;
    if (ABS(fStack_48) <= ABS(fStack_4c)) {
LAB_009504d3:
      uVar9 = 2;
    }
    *(undefined2 *)(param_4 + 2) = uVar9;
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    param_4[0x10] = 0;
    param_4[0x11] = 0;
    param_4[0x12] = 0;
    param_4[0x13] = 0;
  } while( true );
}


