
void FUN_006d0010(ushort param_1)

{
  uint uVar1;
  uint *puVar2;
  void *_Dst;
  int in_ECX;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c620b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *(ushort *)(in_ECX + 0x44) = param_1;
  if (param_1 != 0) {
    uVar6 = (uint)param_1;
    puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar6 * 0x30) | uVar6 * 0x30 + 4,uVar1);
    puVar4 = (uint *)0x0;
    local_4 = 0;
    if (puVar2 != (uint *)0x0) {
      puVar4 = puVar2 + 1;
      *puVar2 = uVar6;
      _eh_vector_constructor_iterator_(puVar4,0x30,uVar6,FUN_006cbcb0,thunk_FUN_006ccf50);
    }
    local_4 = 0xffffffff;
    *(uint **)(in_ECX + 0x3c) = puVar4;
    if (param_1 != 0) {
      iVar5 = 0;
      uVar3 = uVar6;
      do {
        InterlockedIncrement((LONG *)(*(int *)(in_ECX + 0x3c) + 4 + iVar5));
        iVar5 = iVar5 + 0x30;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    _Dst = (void *)FUN_00401f00(uVar6 * 4,uVar1);
    *(void **)(in_ECX + 0x40) = _Dst;
    _memset(_Dst,0,uVar6 * 4);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d0170(int param_1,undefined4 param_2)

{
  int in_ECX;
  ushort uVar1;
  
  thunk_FUN_00715d80(param_1,param_2);
  FUN_006d0010(*(undefined2 *)(in_ECX + 0x44));
  uVar1 = 0;
  if (*(short *)(in_ECX + 0x44) != 0) {
    do {
      thunk_FUN_006cd3d0(*(int *)(param_1 + 0x3c) + (uint)uVar1 * 0x30,param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(in_ECX + 0x44));
  }
  return;
}



undefined4 * FUN_006d0260(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x48,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006d04e0();
    *puVar2 = &PTR_FUN_00a79984;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    *(undefined2 *)(puVar2 + 0x11) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 * FUN_006d02e0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x48,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006d04e0();
    *puVar2 = &PTR_FUN_00a79984;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    *(undefined2 *)(puVar2 + 0x11) = 0;
  }
  local_4 = 0xffffffff;
  FUN_006d0170(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_006d03e0(int *param_1)

{
  ushort *puVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  ushort uVar4;
  
  piVar3 = param_1;
  thunk_FUN_00716050(param_1);
  iVar2 = piVar3[0x88];
  puVar1 = (ushort *)(in_ECX + 0x44);
  param_1 = (int *)0x2;
  (**(code **)(iVar2 + 8))(iVar2,puVar1,2,&param_1,1);
  uVar4 = 0;
  if (*puVar1 != 0) {
    do {
      (**(code **)(*piVar3 + 0x2c))(*(undefined4 *)(*(int *)(in_ECX + 0x40) + (uint)uVar4 * 4));
      uVar4 = uVar4 + 1;
    } while (uVar4 < *puVar1);
  }
  return;
}



void FUN_006d04e0(void)

{
  undefined4 *in_ECX;
  
  FUN_00715990();
  *(ushort *)(in_ECX + 2) = *(ushort *)(in_ECX + 2) & 0xffdf;
  *in_ECX = &PTR_FUN_00a7a16c;
  return;
}



void FUN_006d0510(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 8) >> 5 & 1) == 0) {
    *(undefined4 *)(in_ECX + 0x14) = 0;
    *(undefined4 *)(in_ECX + 0x18) = 0;
  }
  return;
}



void thunk_FUN_00715d80(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  
  piVar1 = param_1;
  FUN_00700770(param_1,param_2);
  *(undefined2 *)(piVar1 + 2) = *(undefined2 *)(in_ECX + 8);
  piVar1[3] = *(int *)(in_ECX + 0xc);
  piVar1[4] = *(int *)(in_ECX + 0x10);
  piVar1[5] = *(int *)(in_ECX + 0x14);
  piVar1[6] = *(int *)(in_ECX + 0x18);
  piVar1[7] = *(int *)(in_ECX + 0x1c);
  piVar1[8] = *(int *)(in_ECX + 0x20);
  piVar1[9] = *(int *)(in_ECX + 0x24);
  if (*(int *)(in_ECX + 0x30) != 0) {
    cVar3 = FUN_0055e000(*(int *)(in_ECX + 0x30),&param_1);
    piVar2 = param_1;
    if (cVar3 != '\0') {
      piVar4 = *(int **)(in_ECX + 0x30);
      param_1 = (int *)(**(code **)(*param_1 + 4))();
      piVar4 = (int *)(**(code **)(*piVar4 + 4))();
      if (piVar4 == param_1) {
        piVar1[0xc] = (int)piVar2;
        goto LAB_00715e12;
      }
    }
    piVar1[0xc] = 0;
  }
LAB_00715e12:
  if (*(int **)(in_ECX + 0x34) != (int *)0x0) {
    uVar5 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x18))(param_2);
    FUN_0075fa90(uVar5);
  }
  return;
}



ushort thunk_FUN_00715820(int param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  int in_ECX;
  
  uVar3 = FUN_00700670(param_1);
  if (((char)uVar3 != '\0') && (uVar3 = *(ushort *)(in_ECX + 8), uVar3 == *(ushort *)(param_1 + 8)))
  {
    fVar1 = *(float *)(in_ECX + 0xc);
    fVar2 = *(float *)(param_1 + 0xc);
    uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 != fVar1) goto LAB_00715896;
    fVar1 = *(float *)(in_ECX + 0x10);
    fVar2 = *(float *)(param_1 + 0x10);
    uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 != fVar1) goto LAB_00715896;
    fVar1 = *(float *)(in_ECX + 0x14);
    fVar2 = *(float *)(param_1 + 0x14);
    uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 != fVar1) goto LAB_00715896;
    fVar1 = *(float *)(in_ECX + 0x18);
    fVar2 = *(float *)(param_1 + 0x18);
    uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 != fVar1) goto LAB_00715896;
    if (*(int *)(in_ECX + 0x30) != 0) {
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_00715896;
      if (*(int *)(in_ECX + 0x30) != 0) goto LAB_0071588f;
    }
    if (*(int *)(param_1 + 0x30) == 0) {
LAB_0071588f:
      return CONCAT11((char)(uVar3 >> 8),1);
    }
  }
LAB_00715896:
  return uVar3 & 0xff00;
}



void FUN_006d0550(int param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_4;
  
  iVar2 = param_1;
  FUN_00715f40(param_1);
  uVar1 = *(uint *)(iVar2 + 0xd8);
  if ((0xa010067 < uVar1) && (uVar1 < 0xa01006d)) {
    iVar2 = *(int *)(iVar2 + 0x21c);
    local_4 = 1;
    (**(code **)(iVar2 + 4))(iVar2,&param_1,1,&local_4,1);
    if ((char)param_1 != '\0') {
      *(ushort *)(in_ECX + 8) = *(ushort *)(in_ECX + 8) | 0x20;
      return;
    }
    *(ushort *)(in_ECX + 8) = *(ushort *)(in_ECX + 8) & 0xffdf;
  }
  return;
}



void FUN_006d05c0(uint param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00716140(param_1);
  param_1 = FUN_0070f910(DAT_00b3cdf8);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = CONCAT31(param_1._1_3_,*(byte *)(in_ECX + 8) >> 5) & 0xffffff01;
  param_1 = FUN_0070f950("IsManagerControlled",param_1);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006d0660(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x60))(0,param_1,param_2,1);
  return;
}



undefined4 FUN_006d0690(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x50) != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x50) + 8);
  }
  return 0;
}



void FUN_006d06a0(void)

{
  int *piVar1;
  int *in_ECX;
  uint uVar2;
  uint uVar3;
  float fStack_8;
  float fStack_4;
  
  if ((*(byte *)(in_ECX + 2) >> 5 & 1) == 0) {
    if (in_ECX[0x14] == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(in_ECX[0x14] + 8);
    }
    in_ECX[5] = 0x7f7fffff;
    in_ECX[6] = -0x800001;
    if (uVar2 != 0) {
      uVar3 = 0;
      do {
        piVar1 = (int *)(**(code **)(*in_ECX + 0x80))(uVar3);
        if (piVar1 != (int *)0x0) {
          fStack_4 = -3.4028235e+38;
          fStack_8 = 3.4028235e+38;
          (**(code **)(*piVar1 + 0x80))(&fStack_8,&fStack_4);
          if (fStack_8 < (float)in_ECX[5]) {
            in_ECX[5] = (int)fStack_8;
          }
          if ((float)in_ECX[6] < fStack_4) {
            in_ECX[6] = (int)fStack_4;
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x006d07c9) */

void FUN_006d07b0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  iVar5 = *(int *)(in_ECX + 0x50);
  uVar1 = *(uint *)(iVar5 + 8);
  if (uVar1 == 0) {
    local_14 = 0;
    local_20 = DAT_00b3f9a8;
    local_1c = DAT_00b3f9ac;
    local_18 = DAT_00b3f9b0;
  }
  else {
    FUN_0072a0f0(*(undefined4 *)(iVar5 + 0xc),**(undefined4 **)(iVar5 + 0x10));
    uVar4 = 1;
    if (1 < uVar1) {
      iVar5 = 0xc;
      do {
        iVar2 = *(int *)(in_ECX + 0x50);
        if (uVar4 < *(uint *)(iVar2 + 8)) {
          puVar3 = (undefined4 *)(*(int *)(iVar2 + 0x10) + iVar5);
        }
        else {
          puVar3 = (undefined4 *)0x0;
        }
        FUN_0072a0f0(*(undefined4 *)(iVar2 + 0xc),*puVar3);
        FUN_0072a6b0(local_10);
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0xc;
      } while (uVar4 < uVar1);
    }
  }
  iVar5 = *(int *)(*(int *)(in_ECX + 0x30) + 0xb4);
  *(undefined4 *)(iVar5 + 0xc) = local_20;
  *(undefined4 *)(iVar5 + 0x10) = local_1c;
  *(undefined4 *)(iVar5 + 0x14) = local_18;
  *(undefined4 *)(iVar5 + 0x18) = local_14;
  return;
}



void FUN_006d0880(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  uint uVar2;
  
  if (*(int *)(in_ECX[0x14] + 8) != 0) {
    uVar2 = 0;
    do {
      piVar1 = (int *)(**(code **)(*in_ECX + 0x80))(uVar2);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x84))(param_1,param_2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(in_ECX[0x14] + 8));
  }
  return;
}



void FUN_006d08d0(undefined4 param_1)

{
  int *piVar1;
  short sVar2;
  ushort uVar3;
  int *in_ECX;
  ushort uVar4;
  
  FUN_00715e40(param_1);
  uVar4 = 0;
  sVar2 = (**(code **)(*in_ECX + 0x74))();
  if (sVar2 != 0) {
    do {
      piVar1 = *(int **)(in_ECX[0x15] + (uint)uVar4 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x38))(param_1);
      }
      uVar4 = uVar4 + 1;
      uVar3 = (**(code **)(*in_ECX + 0x74))();
    } while (uVar4 < uVar3);
  }
  return;
}



undefined1 FUN_006d0920(undefined4 param_1)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  int *piVar4;
  int *in_ECX;
  int iVar5;
  
  cVar1 = thunk_FUN_00715f10(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((int *)in_ECX[0x14] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x14] + 0x24))(param_1);
  }
  iVar5 = 0;
  sVar2 = (**(code **)(*in_ECX + 0x74))();
  if (sVar2 != 0) {
    do {
      piVar4 = (int *)(**(code **)(*in_ECX + 0x80))(iVar5);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x24))(param_1);
      }
      iVar5 = iVar5 + 1;
      uVar3 = (**(code **)(*in_ECX + 0x74))();
    } while ((ushort)iVar5 < uVar3);
  }
  return 1;
}



ushort FUN_006d0a80(char *param_1)

{
  int iVar1;
  char *_Str1;
  uint uVar2;
  ushort uVar3;
  char *_Str2;
  
  if (param_1 == (char *)0x0) {
    return 0xffff;
  }
  uVar3 = 0;
  iVar1 = FUN_006d0690();
  if (iVar1 != 0) {
    do {
      _Str2 = param_1;
      _Str1 = (char *)FUN_004b2460();
      iVar1 = __stricmp(_Str1,_Str2);
      if (iVar1 == 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      uVar2 = FUN_006d0690();
    } while (uVar3 < uVar2);
  }
  return 0xffff;
}



void FUN_006d0b60(void)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int *in_ECX;
  uint uVar4;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar1 = *(uint *)(in_ECX[0x14] + 8);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      piVar3 = (int *)(**(code **)(*in_ECX + 0x80))(uVar4);
      uStack_4 = 0;
      if (uVar4 < *(ushort *)((int)in_ECX + 0x4a)) {
        uStack_4 = *(undefined4 *)(in_ECX[0x11] + uVar4 * 4);
      }
      uStack_8 = uStack_4;
      if ((uVar4 == 0) && (*(char *)(in_ECX[0x14] + 0x14) != '\0')) {
        if (*(char *)((int)in_ECX + 0x59) == '\0') {
          uStack_8 = 0x3f800000;
        }
        else {
          uStack_8 = 0;
        }
LAB_006d0bf3:
        uStack_4 = uStack_8;
        if (uVar4 < *(ushort *)((int)in_ECX + 0x4a)) {
          FUN_004ca210(uVar4,&uStack_4);
        }
      }
      else if ((piVar3 != (int *)0x0) &&
              (cVar2 = (**(code **)(*piVar3 + 0x5c))(in_ECX[10],in_ECX[0xc],&uStack_8),
              cVar2 != '\0')) goto LAB_006d0bf3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}



void FUN_006d0c30(void)

{
  float fVar1;
  uint uVar2;
  void *_Dst;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  _Dst = (void *)(**(code **)(*in_ECX + 0xa4))();
  uVar2 = *(uint *)(in_ECX[0x14] + 8);
  uVar3 = (uint)*(ushort *)(*(int *)(in_ECX[0xc] + 0xb4) + 8);
  if (*(char *)((int)in_ECX + 0x59) == '\0') {
    _memset(_Dst,0,uVar3 * 0xc);
  }
  uVar5 = 0;
  if (uVar2 != 0) {
    iVar4 = 0;
    do {
      if ((uVar5 < *(ushort *)((int)in_ECX + 0x4a)) &&
         ((fVar1 = *(float *)(in_ECX[0x11] + uVar5 * 4), 0.001 <= fVar1 || (fVar1 <= -0.001)))) {
        FUN_00725bd0(_Dst,fVar1,*(undefined4 *)(*(int *)(in_ECX[0x14] + 0x10) + iVar4),uVar3);
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (uVar5 < uVar2);
  }
  return;
}



void FUN_006d0cf0(void)

{
  int *piVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x30) != 0) && (*(char *)(in_ECX + 0x58) != '\0')) {
    FUN_006d0c30();
    piVar1 = *(int **)(*(int *)(in_ECX + 0x30) + 0xb4);
    *(ushort *)((int)piVar1 + 0x2e) = *(ushort *)((int)piVar1 + 0x2e) | 1;
    if (((*(byte *)(in_ECX + 0x3c) & 1) != 0) && (piVar1[8] != 0)) {
      (**(code **)(*piVar1 + 0x54))();
    }
    *(undefined1 *)(in_ECX + 0x58) = 0;
  }
  return;
}



void FUN_006d0d30(uint param_1)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar1 = param_1;
  FUN_006d0550(param_1);
  if (*(uint *)(uVar1 + 0xd8) < 0xa000102) {
    *(ushort *)(in_ECX + 0x3c) = *(ushort *)(uVar1 + 0x25a) >> 5 & 0x3f;
  }
  else {
    param_1 = 2;
    (**(code **)(*(int *)(uVar1 + 0x21c) + 4))(*(int *)(uVar1 + 0x21c),in_ECX + 0x3c,2,&param_1,1);
  }
  FUN_00712a20();
  if (0x4000001 < *(uint *)(uVar1 + 0xd8)) {
    local_8 = 1;
    (**(code **)(*(int *)(uVar1 + 0x21c) + 4))(*(int *)(uVar1 + 0x21c),&param_1,1,&local_8,1);
    *(bool *)(in_ECX + 0x5a) = (char)param_1 != '\0';
  }
  if (0xa010067 < *(uint *)(uVar1 + 0xd8)) {
    FUN_00712ae0();
  }
  if (9 < *(uint *)(uVar1 + 4)) {
    local_8 = 4;
    (**(code **)(*(int *)(uVar1 + 0x21c) + 4))(*(int *)(uVar1 + 0x21c),&param_1,4,&local_8,1);
    FUN_004ca040(param_1);
    uVar2 = 0;
    if (param_1 != 0) {
      do {
        local_8 = 4;
        (**(code **)(*(int *)(uVar1 + 0x21c) + 4))(*(int *)(uVar1 + 0x21c),&uStack_4,4,&local_8,1);
        local_8 = uStack_4;
        if (uVar2 < *(ushort *)(in_ECX + 0x4a)) {
          FUN_004ca210(uVar2,&local_8);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_1);
    }
  }
  return;
}



void FUN_006d0e80(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *in_ECX;
  uint uVar3;
  undefined4 uStack_c;
  undefined4 local_8 [2];
  
  thunk_FUN_00716050(param_1);
  local_8[0] = 2;
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 0xf,2,local_8,1);
  (**(code **)(*param_1 + 0x2c))(in_ECX[0x14]);
  uStack_c = 1;
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],&stack0x00000000,1,&uStack_c,1);
  uVar1 = (**(code **)(*in_ECX + 0x74))();
  uVar1 = uVar1 & 0xffff;
  uStack_c = 4;
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],&stack0xfffffff0,4,&uStack_c,1);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = (**(code **)(*in_ECX + 0x80))(uVar3);
      (**(code **)(*param_1 + 0x2c))(uVar2);
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffff) < uVar1);
  }
  uStack_c = 4;
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],&stack0xfffffff0,4,&uStack_c,1);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uStack_c = 0;
      if (uVar3 < *(ushort *)((int)in_ECX + 0x4a)) {
        uStack_c = *(undefined4 *)(in_ECX[0x11] + uVar3 * 4);
      }
      local_8[0] = uStack_c;
      uStack_c = 4;
      (**(code **)(param_1[0x88] + 8))(param_1[0x88],local_8,4,&uStack_c,1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}



undefined4 FUN_006d0fe0(ushort param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
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
  uVar2 = (uint)param_1;
  _param_1 = 0;
  if (uVar2 < *(ushort *)(in_ECX + 0x4a)) {
    _param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x44) + uVar2 * 4);
  }
  local_10 = FUN_00401f00(0x18,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar3 = FUN_006d29e0(_param_1);
    *unaff_FS_OFFSET = local_c;
    return uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006d10f0(uint *param_1)

{
  void *pvVar1;
  short sVar2;
  uint *puVar3;
  uint uVar4;
  int in_ECX;
  uint *puVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c620b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  pvVar1 = *(void **)(in_ECX + 0x54);
  puVar5 = (uint *)0x0;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  puVar3 = param_1;
  sVar2 = (short)param_1;
  if ((short)param_1 != 0) {
    uVar6 = (uint)param_1 & 0xffff;
    param_1 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar6 * 4) | uVar6 * 4 + 4,uVar4);
    local_4 = 0;
    if (param_1 != (uint *)0x0) {
      puVar5 = param_1 + 1;
      *param_1 = uVar6;
      _eh_vector_constructor_iterator_(puVar5,4,uVar6,FUN_007c88a0,FUN_007016a0);
    }
    local_4 = 0xffffffff;
  }
  *(uint **)(in_ECX + 0x54) = puVar5;
  FUN_004ca040((uint)puVar3 & 0xffff);
  uVar4 = 0;
  if (sVar2 != 0) {
    param_1 = (uint *)0x0;
    do {
      FUN_004ca210(uVar4,&param_1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < ((uint)puVar3 & 0xffff));
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d11f0(undefined4 *param_1,char param_2)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *in_ECX;
  int iVar3;
  
  puVar1 = (undefined4 *)in_ECX[0x14];
  if (puVar1 != param_1) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(puVar1 + 1), LVar2 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x14] = (int)param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  if ((in_ECX[0x14] == 0) || (iVar3 = *(int *)(in_ECX[0x14] + 8), iVar3 == 0)) {
    iVar3 = 0;
  }
  FUN_006d10f0(iVar3);
  if (param_2 != '\0') {
    (**(code **)(*in_ECX + 0xa8))();
  }
  return;
}



void FUN_006d12f0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c78ee;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7a23c;
  puVar1 = (undefined4 *)in_ECX[0x14];
  local_4 = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x14] = 0;
  }
  FUN_006d10f0(0);
  puVar1 = (undefined4 *)in_ECX[0x14];
  local_4 = CONCAT31(local_4._1_3_,1);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  in_ECX[0x10] = &PTR__scalar_deleting_destructor__00a45af0;
  FUN_00401f20(in_ECX[0x11]);
  local_4 = 0xffffffff;
  FUN_00715a70();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d13c0(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x50) != 0) {
    if ((*(byte *)(in_ECX + 8) >> 5 & 1) == 0) {
      cVar1 = FUN_006c36b0(param_1);
      if ((cVar1 == '\0') || (*(char *)(in_ECX + 0x5a) != '\0')) {
        *(undefined1 *)(in_ECX + 0x58) = 1;
      }
    }
    else {
      *(undefined1 *)(in_ECX + 0x58) = 1;
      *(undefined4 *)(in_ECX + 0x28) = 0xff7fffff;
    }
    if ((((*(int *)(in_ECX + 0x30) != 0) && (*(char *)(in_ECX + 0x58) != '\0')) &&
        (FUN_006d0b60(*(undefined4 *)(in_ECX + 0x28)), DAT_00b3ce19 != '\0')) &&
       (((cVar1 = FUN_00404dd0(), cVar1 != '\0' &&
         (*(int *)(*(int *)(*(int *)(in_ECX + 0x30) + 0xb4) + 4) == 1)) &&
        (piVar2 = (int *)FUN_006ebf20(), piVar2 != (int *)0x0)))) {
      FUN_006ebc20(in_ECX,*(undefined4 *)(in_ECX + 0x30));
      cVar1 = FUN_006d0660(piVar2,2);
      if (cVar1 == '\0') {
        (**(code **)(*piVar2 + 0x54))();
      }
    }
  }
  return;
}



void FUN_006d1480(int *param_1,undefined4 param_2)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *in_ECX;
  uint uVar6;
  uint uVar7;
  
  thunk_FUN_00715d80(param_1,param_2);
  *(short *)(param_1 + 0xf) = (short)in_ECX[0xf];
  if (in_ECX[0x14] != 0) {
    FUN_006d11f0(in_ECX[0x14],param_1[0xc] != 0);
  }
  if (DAT_00b3ce18 != '\0') {
    *(undefined1 *)((int)in_ECX + 0x5a) = 1;
    *(undefined1 *)((int)param_1 + 0x5a) = 1;
  }
  uVar6 = 0;
  sVar2 = (**(code **)(*in_ECX + 0x74))();
  if (sVar2 != 0) {
    do {
      uVar7 = uVar6;
      if (*(int *)(in_ECX[0x15] + (uVar6 & 0xffff) * 4) == 0) {
        pcVar5 = *(code **)(*param_1 + 0x84);
        uVar4 = 0;
      }
      else {
        iVar1 = *param_1;
        uVar4 = FUN_00700710(param_2);
        pcVar5 = *(code **)(iVar1 + 0x84);
      }
      (*pcVar5)(uVar4,uVar7);
      uVar6 = uVar6 + 1;
      uVar3 = (**(code **)(*in_ECX + 0x74))();
    } while ((ushort)uVar6 < uVar3);
  }
  return;
}



undefined4 * FUN_006d1520(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7939;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x5c,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006d04e0();
    *puVar2 = &PTR_FUN_00a7a23c;
    puVar2[0x10] = &PTR__scalar_deleting_destructor__00a45af0;
    *(undefined2 *)(puVar2 + 0x12) = 0;
    *(undefined2 *)((int)puVar2 + 0x4e) = 1;
    *(undefined2 *)((int)puVar2 + 0x4a) = 0;
    *(undefined2 *)(puVar2 + 0x13) = 0;
    puVar2[0x11] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    *(undefined2 *)(puVar2 + 0xf) = 0;
    *(undefined1 *)(puVar2 + 0x16) = 0;
    *(undefined1 *)((int)puVar2 + 0x59) = 0;
    *(undefined1 *)((int)puVar2 + 0x5a) = 0;
    *(undefined1 *)((int)puVar2 + 0x5b) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006d1730(byte param_1)

{
  FUN_006d12f0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_006d1750(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7989;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x5c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006d04e0();
    *puVar2 = &PTR_FUN_00a7a23c;
    puVar2[0x10] = &PTR__scalar_deleting_destructor__00a45af0;
    *(undefined2 *)(puVar2 + 0x12) = 0;
    *(undefined2 *)((int)puVar2 + 0x4e) = 1;
    *(undefined2 *)((int)puVar2 + 0x4a) = 0;
    *(undefined2 *)(puVar2 + 0x13) = 0;
    puVar2[0x11] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    *(undefined2 *)(puVar2 + 0xf) = 0;
    *(undefined1 *)(puVar2 + 0x16) = 0;
    *(undefined1 *)((int)puVar2 + 0x59) = 0;
    *(undefined1 *)((int)puVar2 + 0x5a) = 0;
    *(undefined1 *)((int)puVar2 + 0x5b) = 0;
  }
  local_4 = 0xffffffff;
  FUN_006d1480(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_006d1810(byte param_1)

{
  FUN_006e3340();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006d1830(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  int iVar2;
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
  local_10 = FUN_00401f00(0x34,uVar1);
  local_4 = 0;
  if (local_10 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_006d2480(param_2,param_4,param_5);
  }
  *(byte *)(iVar2 + 0xc) = *(byte *)(iVar2 + 0xc) | 2;
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_006d18c0(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x58);
  if (iVar2 == 0) {
    uVar1 = FUN_00401f00(0xf);
    *(undefined4 *)(in_ECX + 0x58) = uVar1;
    FUN_006c5d40(uVar1,0xf,&DAT_00a2f860,*(undefined4 *)(in_ECX + 0x54));
    iVar2 = *(int *)(in_ECX + 0x58);
  }
  return iVar2;
}



undefined4 FUN_006d1920(uint param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x2c);
  if ((iVar1 != 0) && (param_1 < *(ushort *)(iVar1 + 10))) {
    return *(undefined4 *)(*(int *)(iVar1 + 4) + param_1 * 4);
  }
  return 0;
}



undefined2 FUN_006d1950(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2c) == 0) {
    return 0;
  }
  return *(undefined2 *)(*(int *)(in_ECX + 0x2c) + 10);
}



void FUN_006d1960(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  undefined1 local_c [12];
  
  if ((*(byte *)(in_ECX + 8) >> 5 & 1) == 0) {
    cVar1 = FUN_006c36b0(param_1);
    if (cVar1 != '\0') {
      if (*(int **)(in_ECX + 0x3c) == (int *)0x0) {
        return;
      }
      cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x94))();
      if (cVar1 == '\0') {
        return;
      }
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x28) = 0xff7fffff;
  }
  if (*(int **)(in_ECX + 0x3c) != (int *)0x0) {
    fVar4 = *(float *)(in_ECX + 0x30);
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x5c))
                      (*(undefined4 *)(in_ECX + 0x28),fVar4,local_c);
    if (cVar1 != '\0') {
      uVar5 = (uint)(longlong)ROUND(fVar4 + 0.01);
      *(uint *)(in_ECX + 0x50) = uVar5;
      if (*(ushort *)(in_ECX + 0x4a) <= uVar5) {
        *(uint *)(in_ECX + 0x50) = *(ushort *)(in_ECX + 0x4a) - 1;
      }
      iVar2 = *(int *)(in_ECX + 0x30);
      if (iVar2 != 0) {
        uVar5 = *(uint *)(in_ECX + 0x54);
        if ((uVar5 < *(ushort *)(iVar2 + 0x26)) &&
           (*(int *)(*(int *)(iVar2 + 0x20) + uVar5 * 4) != 0)) {
          FUN_00405710(*(undefined4 *)(*(int *)(in_ECX + 0x44) + *(int *)(in_ECX + 0x50) * 4));
          return;
        }
        uVar5 = uVar5 - 0x400;
        if (((*(int *)(iVar2 + 0x2c) != 0) && (uVar5 < *(ushort *)(*(int *)(iVar2 + 0x2c) + 10))) &&
           (iVar2 = FUN_006d1920(uVar5), iVar2 != 0)) {
          uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x44) + *(int *)(in_ECX + 0x50) * 4);
          FUN_006d1920(uVar5);
          FUN_00405710(uVar3);
        }
      }
    }
  }
  return;
}



undefined1 FUN_006d1a90(undefined4 param_1)

{
  ushort uVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  uint uVar4;
  
  cVar3 = thunk_FUN_006ce350(param_1);
  if (cVar3 == '\0') {
    return 0;
  }
  uVar1 = *(ushort *)(in_ECX + 0x4a);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      piVar2 = *(int **)(*(int *)(in_ECX + 0x44) + uVar4 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x24))(param_1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 1;
}



void FUN_006d1af0(void)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c79f8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7a33c;
  local_4 = 0;
  FUN_00401f20(in_ECX[0x16],uVar2);
  in_ECX[0x16] = 0;
  pvVar1 = (void *)in_ECX[0x11];
  in_ECX[0x10] = &PTR_FUN_00a539bc;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4,uVar2);
  }
  local_4 = 0xffffffff;
  FUN_006c3a40();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d1bc0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  LONG LVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = (uint)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7b18;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((uint)*(ushort *)(in_ECX + 0x4a) <= param_2) {
    FUN_00523b10((int)param_2 + 1);
  }
  param_2 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    InterlockedIncrement(param_1 + 1);
  }
  local_4 = 0;
  if (*(ushort *)(in_ECX + 0x48) <= uVar1) {
    FUN_00523b10(*(ushort *)(in_ECX + 0x4e) + uVar1);
  }
  FUN_005254d0(uVar1,&param_2);
  local_4 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(param_1 + 1);
    if (LVar2 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d1c80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  uint uVar2;
  
  thunk_FUN_006ce2c0(param_1,param_2);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(in_ECX + 0x54);
  uVar2 = 0;
  if (*(short *)(in_ECX + 0x4a) != 0) {
    if (*(short *)(in_ECX + 0x4a) == 0) {
      uVar1 = 0;
      goto LAB_006d1cb2;
    }
    do {
      uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x44) + uVar2 * 4);
LAB_006d1cb2:
      FUN_006d1bc0(uVar1,uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 0x4a));
  }
  return;
}



void FUN_006d1cd0(uint *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int in_ECX;
  uint uVar8;
  uint *puVar9;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  int local_1c;
  undefined4 uStack_18;
  float fStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar4 = (int)param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c79d1;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c = in_ECX;
  thunk_FUN_006ce320(param_1);
  param_1 = (uint *)0x4;
  (**(code **)(*(int *)(iVar4 + 0x21c) + 4))
            (*(int *)(iVar4 + 0x21c),in_ECX + 0x54,4,&param_1,1,uVar5);
  if (*(uint *)(iVar4 + 0xd8) < 0xa010068) {
    param_1 = (uint *)0x4;
    (**(code **)(*(int *)(iVar4 + 0x21c) + 4))(*(int *)(iVar4 + 0x21c),&puStack_20,4,&param_1,1);
    uStack_18 = 4;
    (**(code **)(*(int *)(iVar4 + 0x21c) + 4))(*(int *)(iVar4 + 0x21c),&fStack_14,4,&uStack_18,1);
    uVar5 = FUN_00712ae0();
    puStack_24 = (undefined4 *)FUN_00401f00(0x18);
    uStack_4 = 0;
    param_1 = puStack_24;
    if (puStack_24 == (undefined4 *)0x0) {
      puStack_24 = (undefined4 *)0x0;
    }
    else {
      FUN_007005d0();
      *puStack_24 = &PTR_FUN_00a7a2ec;
      puStack_24[2] = 0;
      puStack_24[3] = 0;
      puStack_24[4] = 0;
      *(undefined1 *)(puStack_24 + 5) = 0;
    }
    uStack_4 = 0xffffffff;
    if (uVar5 != 0) {
      uVar1 = uVar5 + 1;
      uVar8 = -(uint)((int)((ulonglong)uVar1 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 8);
      param_1 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar8) | uVar8 + 4);
      uStack_4 = 1;
      if (param_1 == (uint *)0x0) {
        puVar9 = (uint *)0x0;
      }
      else {
        puVar9 = param_1 + 1;
        *param_1 = uVar1;
        _eh_vector_constructor_iterator_(puVar9,8,uVar1,FUN_007616d0,FUN_0060d0a0);
      }
      uVar8 = 0;
      param_1 = puStack_20;
      uStack_4 = 0xffffffff;
      if (uVar5 != 0) {
        do {
          puVar9[uVar8 * 2] = (uint)param_1;
          fVar3 = (float)(int)uVar8;
          if ((int)uVar8 < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
          }
          puVar9[uVar8 * 2 + 1] = (uint)fVar3;
          uVar8 = uVar8 + 1;
          param_1 = (uint *)((float)param_1 + fStack_14);
        } while (uVar8 < uVar5);
      }
      iStack_10 = uVar5 - 1;
      puVar9[uVar5 * 2] = (uint)param_1;
      fVar3 = (float)iStack_10;
      if (iStack_10 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      puVar9[uVar5 * 2 + 1] = (uint)fVar3;
      FUN_006e3540(puVar9,uVar1,5);
      *(undefined4 **)(local_1c + 0x14) = puStack_20;
      *(uint **)(local_1c + 0x18) = param_1;
      in_ECX = local_1c;
    }
    param_1 = (uint *)FUN_00401f00(0x18);
    uStack_4 = 2;
    if (param_1 == (uint *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)FUN_006d2990(puStack_24);
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x3c);
    uStack_4 = 0xffffffff;
    if (puVar2 != puVar6) {
      if (puVar2 != (undefined4 *)0x0) {
        LVar7 = InterlockedDecrement(puVar2 + 1);
        if ((LVar7 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
      }
      *(undefined4 **)(in_ECX + 0x3c) = puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar6 + 1);
      }
    }
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x7c))();
    *unaff_FS_OFFSET = local_c;
    return;
  }
  FUN_00712ae0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d1f60(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7c98;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = in_ECX;
  thunk_FUN_00715e70(param_1);
  if (in_ECX[0xc] != 0) {
    uVar1 = FUN_007124d0(uVar1);
    FUN_00523b10(uVar1);
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        puVar2 = (undefined4 *)FUN_007124a0();
        local_10 = puVar2;
        if (puVar2 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar2 + 1);
        }
        local_4 = 0;
        FUN_005254d0(uVar4,&local_10);
        local_4 = 0xffffffff;
        if (puVar2 != (undefined4 *)0x0) {
          LVar3 = InterlockedDecrement(puVar2 + 1);
          if (LVar3 == 0) {
            (**(code **)*puVar2)(1);
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d20c0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c79f8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006ec180(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a7a33c;
  FUN_00523de0(1,1);
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d2130(byte param_1)

{
  FUN_006d1af0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_006d2150(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x5c,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_006d20c0();
  }
  local_4 = 0xffffffff;
  FUN_006d1c80(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
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
  local_10 = FUN_00401f00(0x5c,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006d20c0();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006d2250(int param_1)

{
  thunk_FUN_006ce320(param_1);
  if (*(uint *)(param_1 + 0xd8) < 0xa010068) {
    FUN_00712a20();
  }
  return;
}



void thunk_FUN_006ce350(void)

{
  thunk_FUN_006ce350();
  return;
}



void FUN_006d22c0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  undefined4 *puVar4;
  
  if ((*(byte *)(in_ECX + 8) >> 5 & 1) == 0) {
    cVar3 = FUN_006c36b0(param_1);
    if (cVar3 != '\0') {
      if (*(int **)(in_ECX + 0x3c) == (int *)0x0) {
        return;
      }
      cVar3 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x94))();
      if (cVar3 == '\0') {
        return;
      }
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x28) = 0xff7fffff;
  }
  if (*(int **)(in_ECX + 0x3c) != (int *)0x0) {
    puVar4 = &param_1;
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x5c))
                      (*(undefined4 *)(in_ECX + 0x28),*(undefined4 *)(in_ECX + 0x30));
    if (cVar3 != '\0') {
      iVar2 = *(int *)(in_ECX + 0x30);
      piVar1 = (int *)(iVar2 + 0x54);
      *piVar1 = *piVar1 + 1;
      *(undefined4 **)(iVar2 + 0x50) = puVar4;
    }
  }
  return;
}



undefined4 * FUN_006d2350(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x40,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ec180();
    *puVar2 = &PTR_FUN_00a7a3ec;
  }
  local_4 = 0xffffffff;
  thunk_FUN_006ce2c0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_006d23d0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x40,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ec180();
    *puVar2 = &PTR_FUN_00a7a3ec;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_006d2430(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ec1d0(param_1);
  param_1 = FUN_0070f910(DAT_00b3cf1c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006d2480(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_006cce40(param_1,param_2,param_3);
  *in_ECX = &PTR_FUN_00a7a49c;
  in_ECX[0xc] = 0xff7fffff;
  return;
}



undefined4 * FUN_006d24e0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x34,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006cc4e0();
    *puVar2 = &PTR_FUN_00a7a49c;
    puVar2[0xc] = 0xff7fffff;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



undefined4 FUN_006d2580(float param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0xc) & 1) != 0) {
    param_1 = *(float *)(in_ECX + 0x20);
  }
  if (param_1 != -3.4028235e+38) {
    if (*(int **)(in_ECX + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(in_ECX + 0x18) + 0x5c))
                        (param_1,param_2,(undefined4 *)(in_ECX + 0x30));
      if (cVar1 != '\0') {
        *param_3 = *(undefined4 *)(in_ECX + 0x30);
        return 1;
      }
    }
    *(undefined4 *)(in_ECX + 0x30) = 0xff7fffff;
    *param_3 = 0xff7fffff;
    return 0;
  }
  return 0;
}



undefined4 FUN_006d2600(float param_1,float param_2,float *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  char cVar6;
  int in_ECX;
  byte bVar7;
  float local_8;
  float local_4;
  
  uVar5 = param_2;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  bVar7 = 0;
  local_8 = 1.0;
  bVar4 = false;
  if (*(char *)(in_ECX + 0xd) != '\0') {
    do {
      iVar3 = (uint)bVar7 * 0x18;
      piVar2 = *(int **)(iVar3 + *(int *)(in_ECX + 0x14));
      iVar1 = iVar3 + *(int *)(in_ECX + 0x14);
      if ((piVar2 != (int *)0x0) && (0.0 < *(float *)(iVar1 + 8))) {
        param_2 = param_1;
        if ((piVar2 != (int *)0x0) && (*(float *)(iVar1 + 8) != 0.0)) {
          if ((*(byte *)(in_ECX + 0xc) & 1) != 0) {
            param_2 = *(float *)(iVar1 + 0x14);
          }
          if (param_2 != -3.4028235e+38) {
            cVar6 = (**(code **)(*piVar2 + 0x5c))(param_2,uVar5,&local_4);
            if (cVar6 == '\0') {
              local_8 = local_8 - *(float *)(iVar3 + 8 + *(int *)(in_ECX + 0x14));
            }
            else {
              bVar4 = true;
              *(float *)(in_ECX + 0x30) =
                   *(float *)(iVar3 + 8 + *(int *)(in_ECX + 0x14)) * local_4 +
                   *(float *)(in_ECX + 0x30);
            }
            goto LAB_006d26e4;
          }
        }
        local_8 = local_8 - *(float *)(iVar1 + 8);
      }
LAB_006d26e4:
      bVar7 = bVar7 + 1;
    } while (bVar7 < *(byte *)(in_ECX + 0xd));
  }
  local_8 = *(float *)(in_ECX + 0x30) / local_8;
  *(float *)(in_ECX + 0x30) = local_8;
  if (bVar4) {
    *param_3 = local_8;
    return 1;
  }
  *param_3 = -3.4028235e+38;
  *(undefined4 *)(in_ECX + 0x30) = 0xff7fffff;
  return 0;
}



uint FUN_006d2740(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  uVar1 = in_EAX & 0xffffff00;
  if (*(char *)(in_ECX + 0xe) == '\x01') {
    uVar1 = FUN_006d2580(param_1,param_2,param_3);
    *(undefined4 *)(in_ECX + 8) = param_1;
    return uVar1;
  }
  if (*(char *)(in_ECX + 0xe) != '\0') {
    FUN_006cd0f0();
    uVar1 = FUN_006d2600(param_1,param_2,param_3);
  }
  *(undefined4 *)(in_ECX + 8) = param_1;
  return uVar1;
}



undefined4 * FUN_006d27a0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x34,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006cc4e0();
    *puVar2 = &PTR_FUN_00a7a49c;
    puVar2[0xc] = 0xff7fffff;
  }
  local_4 = 0xffffffff;
  FUN_006cd3d0(puVar2,param_1);
  puVar2[0xc] = *(undefined4 *)(in_ECX + 0x30);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 FUN_006d2940(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 8);
    *param_2 = *(undefined4 *)(iVar1 + 0x10);
    *param_3 = *(undefined1 *)(iVar1 + 0x14);
    return *(undefined4 *)(iVar1 + 0xc);
  }
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  return 0;
}



void FUN_006d2990(int param_1)

{
  undefined4 *in_ECX;
  
  FUN_006ec220();
  *in_ECX = &PTR_FUN_00a7a55c;
  in_ECX[3] = 0xff7fffff;
  in_ECX[4] = param_1;
  if (param_1 != 0) {
    InterlockedIncrement((LONG *)(param_1 + 4));
  }
  in_ECX[5] = 0;
  return;
}



void FUN_006d29e0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_006ec220();
  in_ECX[3] = param_1;
  *in_ECX = &PTR_FUN_00a7a55c;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  return;
}



void FUN_006d2b70(undefined4 param_1)

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
    *(undefined4 *)(in_ECX + 0x10) = 0;
  }
  *(undefined4 *)(in_ECX + 0xc) = param_1;
  return;
}



int FUN_006d2be0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c80f8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_006eba60(param_1,param_2);
  if (*(int *)(in_ECX + 0x10) != 0) {
    FUN_006e35a0(&param_2,param_1,param_2);
    local_4 = 0;
    FUN_0070bd60(param_2);
    puVar1 = param_2;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    local_4 = 0xffffffff;
    if (((param_2 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_2 + 1), LVar4 == 0))
       && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



void FUN_006d2d50(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int in_ECX;
  
  thunk_FUN_00700770(param_1,param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 == *(undefined4 **)(in_ECX + 0x10)) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(in_ECX + 0x14);
    return;
  }
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x10);
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 4));
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(in_ECX + 0x14);
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(in_ECX + 0x14);
  return;
}



undefined4 * FUN_006d2dd0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ec220();
    *puVar2 = &PTR_FUN_00a7a55c;
    puVar2[3] = 0xff7fffff;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 * FUN_006d2ec0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ec220();
    *puVar2 = &PTR_FUN_00a7a55c;
    puVar2[3] = 0xff7fffff;
    puVar2[4] = 0;
    puVar2[5] = 0;
  }
  local_4 = 0xffffffff;
  FUN_006d2d50(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_006d2f60(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int in_ECX;
  
  iVar2 = param_1;
  thunk_FUN_007008a0(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0xc,4,&param_1,1);
  puVar3 = (undefined4 *)FUN_00712a90();
  puVar1 = *(undefined4 **)(in_ECX + 0x10);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x10) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  return;
}



void FUN_006d3100(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int *piVar1;
  int in_ECX;
  undefined1 *puVar2;
  int iVar3;
  
  FUN_006be490();
  *(undefined4 *)(in_ECX + 0x14) = param_2;
  piVar1 = (int *)(in_ECX + 0x20);
  *piVar1 = param_3;
  *(undefined4 *)(in_ECX + 0x30) = param_1;
  *(undefined4 *)(in_ECX + 0x34) = param_4;
  *(undefined4 *)(in_ECX + 0x18) = param_5;
  *(undefined4 *)(in_ECX + 0x1c) = param_8;
  *(undefined4 *)(in_ECX + 0x24) = param_6;
  *(undefined4 *)(in_ECX + 0x28) = param_9;
  *(undefined4 *)(in_ECX + 0x38) = param_7;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  puVar2 = (undefined1 *)(in_ECX + 0x2c);
  iVar3 = 3;
  do {
    if (piVar1[-3] == 0) {
      *puVar2 = 0;
    }
    else {
      *puVar2 = (&DAT_00b3d3e8)[*piVar1];
    }
    piVar1 = piVar1 + 1;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



undefined4 FUN_006d3190(float *param_1,float *param_2)

{
  if (*param_2 == *param_1) {
    return 1;
  }
  return 0;
}



undefined2 FUN_006d31b0(float param_1,int param_2,uint param_3,uint *param_4,byte param_5)

{
  int iVar1;
  uint uVar2;
  
  *param_4 = 0;
  if (param_3 != 0) {
    do {
      iVar1 = (uint)param_5 * *param_4;
      if (param_1 <= *(float *)(iVar1 + param_2)) {
        if (param_1 < *(float *)(iVar1 + param_2)) {
          return 1;
        }
        return 0;
      }
      uVar2 = *param_4 + 1;
      *param_4 = uVar2;
    } while (uVar2 < param_3);
  }
  return 1;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_006d3210(int param_1,int param_2,float *param_3,uint param_4,float param_5,float param_6,
                 int *param_7,int *param_8)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  undefined4 *puVar12;
  int *unaff_FS_OFFSET;
  undefined8 local_38;
  undefined4 local_30;
  float *local_2c;
  uint local_28;
  int local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7a2b;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (int)(local_24 + 6);
  if (param_2 == 4) {
    uVar5 = 0;
    do {
      uVar6 = uVar5 & 0xff;
      fVar2 = param_3[uVar6 + 5];
      fVar3 = param_3[uVar6 + 0xc];
      fVar4 = param_3[uVar6 + 8];
      *(float *)((int)&local_38 + uVar5 * 4) = fVar4;
      FUN_006d3210(0,fVar4,fVar3,fVar2,param_5,param_6,local_24 + uVar5 + 3,local_24 + uVar5);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 3);
    puVar7 = (undefined4 *)FUN_00401f00(0x4c);
    local_4 = 0;
    if (puVar7 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      puVar12 = puVar7 + 1;
      *puVar7 = 1;
      _eh_vector_constructor_iterator_(puVar12,0x48,1,FUN_006be430,FUN_0060d0a0);
    }
    *param_7 = (int)puVar12;
    *param_8 = 1;
    local_4 = 0xffffffff;
    FUN_006d3100(local_24[3],local_24[0],(float *)local_38,local_14,local_24[1],local_38._4_4_,
                 local_10,local_24[2],local_30);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  param_2 = param_2 + param_1 * 6;
  *param_8 = 0;
  bVar1 = (&DAT_00b3d3e8)[param_2];
  uVar6 = 0;
  if (3 < (int)param_4) {
    uVar8 = (uint)bVar1;
    pfVar10 = (float *)((int)param_3 + uVar8 * 3);
    local_38 = (double)CONCAT44(local_38._4_4_,param_3);
    local_2c = (float *)((int)param_3 + uVar8 * 2);
    pfVar11 = (float *)((int)param_3 + uVar8);
    do {
      if (param_5 <= *(float *)local_38) {
        if (param_6 < *(float *)local_38) goto LAB_006d3466;
        *param_8 = *param_8 + 1;
      }
      if (param_5 <= *pfVar11) {
        if (param_6 < *pfVar11) goto LAB_006d3466;
        *param_8 = *param_8 + 1;
      }
      if (param_5 <= *local_2c) {
        if (param_6 < *local_2c) goto LAB_006d3466;
        *param_8 = *param_8 + 1;
      }
      if (param_5 <= *pfVar10) {
        if (param_6 < *pfVar10) goto LAB_006d3466;
        *param_8 = *param_8 + 1;
      }
      local_38 = (double)CONCAT44(local_38._4_4_,(float *)local_38 + uVar8);
      local_2c = local_2c + uVar8;
      uVar6 = uVar6 + 4;
      pfVar11 = pfVar11 + uVar8;
      pfVar10 = pfVar10 + uVar8;
    } while (uVar6 < param_4 - 3);
  }
  if (uVar6 < param_4) {
    pfVar10 = (float *)(bVar1 * uVar6 + (int)param_3);
    do {
      if (param_5 <= *pfVar10) {
        if (param_6 < *pfVar10) break;
        *param_8 = *param_8 + 1;
      }
      uVar6 = uVar6 + 1;
      pfVar10 = (float *)((int)pfVar10 + (uint)bVar1);
    } while (uVar6 < param_4);
  }
LAB_006d3466:
  if (*param_8 == 0) {
    *param_7 = 0;
  }
  else {
    local_28 = param_2;
    iVar9 = (**(code **)(&DAT_00b3d358 + param_2 * 4))(*param_8,uVar5);
    *param_7 = iVar9;
    local_2c = *(float **)(&DAT_00b3d530 + param_2 * 4);
    local_28 = 0;
    *param_8 = 0;
    if (param_4 != 0) {
      local_38 = (double)param_5;
      do {
        if (param_5 <= *param_3) {
          if (param_6 < *param_3) break;
          pfVar10 = (float *)(*param_8 * (uint)bVar1 + *param_7);
          (*(code *)local_2c)(pfVar10,param_3);
          param_5 = (float)local_38;
          *pfVar10 = *param_3 - param_5;
          *param_8 = *param_8 + 1;
        }
        local_28 = local_28 + 1;
        param_3 = (float *)((int)param_3 + (uint)bVar1);
        if (param_4 <= local_28) {
          *unaff_FS_OFFSET = local_c;
          return;
        }
      } while( true );
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d3540(int param_1,int param_2,int *param_3,int *param_4,float param_5,undefined4 param_6
                 )

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_4;
  
  piVar5 = param_4;
  piVar4 = param_3;
  if (param_2 == 4) {
    iVar1 = *param_3;
    uVar6 = 0;
    do {
      uVar7 = uVar6 & 0xff;
      param_2 = *(int *)(iVar1 + 0x14 + uVar7 * 4);
      local_4 = *(undefined4 *)(iVar1 + 0x30 + uVar7 * 4);
      iVar2 = *(int *)(iVar1 + 0x20 + uVar7 * 4);
      if (param_2 != 0) {
        FUN_006d3540(0,iVar2,&local_4,&param_2,param_5,param_6);
      }
      *(undefined4 *)(iVar1 + 0x30 + uVar7 * 4) = local_4;
      *(int *)(iVar1 + 0x14 + uVar7 * 4) = param_2;
      *(int *)(iVar1 + 0x20 + uVar7 * 4) = iVar2;
      *(undefined4 *)(iVar1 + 0x3c + uVar7 * 4) = 0;
      uVar6 = uVar6 + 1;
      *(undefined *)(uVar7 + 0x2c + iVar1) = (&DAT_00b3d3e8)[iVar2];
    } while (uVar6 < 3);
    return;
  }
  pcVar3 = *(code **)(&DAT_00b3d1a8 + (param_2 + param_1 * 6) * 4);
  if ((*param_4 == 1) && (param_5 == *(float *)*param_3)) {
    return;
  }
  (*pcVar3)(param_5,param_3,param_4);
  (*pcVar3)(param_6,piVar4,piVar5);
  return;
}



void FUN_006d3630(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c));
  return;
}



void FUN_006d3660(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x220);
  param_1 = 4;
  (**(code **)(*piVar1 + 8))(*piVar1,param_2,4,&param_1,1);
  return;
}



float10 FUN_006d3690(float param_1,float param_2,float param_3)

{
  return (float10)((1.0 - param_1) * param_2 + param_3 * param_1);
}



float10 FUN_006d36b0(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  return (float10)(param_2 +
                  ((param_1 * ((param_5 + param_3) - (param_4 - param_2) * 2.0) +
                   ((param_4 - param_2) * 3.0 - (param_3 * 2.0 + param_5))) * param_1 + param_3) *
                  param_1);
}



void FUN_006d3720(float param_1,float param_2,float *param_3,float param_4,float param_5,
                 float *param_6,float param_7,undefined4 param_8,float *param_9,float *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_5 - param_2;
  fVar2 = (param_7 - param_2) / fVar1;
  fVar3 = ((fVar2 * ((*param_3 - (param_4 - param_1) * 2.0) + *param_6) * 3.0 +
           (((param_4 - param_1) * 3.0 - *param_3 * 2.0) - *param_6) * 2.0) * fVar2 + *param_3) /
          fVar1;
  *param_9 = fVar3;
  *param_10 = (param_5 - param_7) * fVar3;
  *param_9 = *param_9 * (param_7 - param_2);
  *param_3 = fVar2 * *param_3;
  *param_6 = ((param_5 - param_7) / fVar1) * *param_6;
  return;
}



void FUN_006d3810(byte param_1)

{
  FUN_006d9c90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006d3830(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 == 0) {
    if (*(int *)(in_ECX + 0x10) != 0) {
      FUN_006e33b0(0,0,0);
    }
  }
  else {
    if (*(int *)(in_ECX + 0x10) == 0) {
      puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
      local_4 = 0;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        FUN_007005d0();
        *puVar2 = &PTR_FUN_00a7a2ec;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        *(undefined1 *)(puVar2 + 5) = 0;
      }
      local_4 = 0xffffffff;
      FUN_0075fa90(puVar2);
    }
    FUN_006e33b0(param_1,param_2,param_3);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d38f0(int param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  if (param_1 != 0) {
    FUN_0075fa90(param_1);
    return;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x38);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x38) = 0;
  }
  return;
}



void FUN_006d3940(int param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  if (param_1 != 0) {
    FUN_0075fa90(param_1);
    return;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x3c) = 0;
  }
  return;
}



void FUN_006d3990(int param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  if (param_1 != 0) {
    FUN_0075fa90(param_1);
    return;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x40);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x40) = 0;
  }
  return;
}



void FUN_006d39e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 == 0) {
    if (*(int *)(in_ECX + 0x18) != 0) {
      FUN_006d9d00(0,0,0);
    }
  }
  else {
    if (*(int *)(in_ECX + 0x18) == 0) {
      puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
      local_4 = 0;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        FUN_007005d0();
        *puVar2 = &PTR_FUN_00a7a624;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        *(undefined1 *)(puVar2 + 5) = 0;
      }
      local_4 = 0xffffffff;
      FUN_0075fa90(puVar2);
    }
    FUN_006d9d00(param_1,param_2,param_3);
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_006d3aa0(uint *param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x2c);
  if (iVar1 != 0) {
    *param_1 = (uint)*(ushort *)(iVar1 + 10);
    *param_2 = *(undefined4 *)(iVar1 + 0x14);
    *param_3 = *(undefined1 *)(iVar1 + 0x1d);
    return *(undefined4 *)(iVar1 + 0x24);
  }
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  return 0;
}



undefined4 FUN_006d3af0(uint *param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x2c);
  if (iVar1 != 0) {
    *param_1 = (uint)*(ushort *)(iVar1 + 0xc);
    *param_2 = *(undefined4 *)(iVar1 + 0x18);
    *param_3 = *(undefined1 *)(iVar1 + 0x1e);
    return *(undefined4 *)(iVar1 + 0x28);
  }
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  return 0;
}



void FUN_006d3b40(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  bVar1 = *(byte *)(param_1 + 8);
  uVar3 = bVar1 & 1;
  uVar4 = *(ushort *)(param_2 + 8);
  uVar2 = uVar4 & 0xfffe | uVar3;
  *(ushort *)(param_2 + 8) = uVar2;
  if ((bVar1 & 1) == 0) {
    uVar3 = uVar2 | 8;
  }
  else {
    uVar3 = uVar4 & 0xfff6 | uVar3;
  }
  *(ushort *)(param_2 + 8) = uVar3;
  *(ushort *)(param_2 + 8) =
       *(ushort *)(param_2 + 8) ^ (byte)((byte)uVar3 ^ *(byte *)(param_1 + 8)) & 6;
  if ((*(byte *)(param_1 + 8) >> 4 & 1) == 0) {
    uVar4 = *(ushort *)(param_2 + 8) & 0xffef;
  }
  else {
    uVar4 = *(ushort *)(param_2 + 8) | 0x10;
  }
  *(ushort *)(param_2 + 8) = uVar4;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  if ((*(byte *)(param_1 + 8) >> 3 & 1) != 0) {
    *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) | 8;
    return;
  }
  *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) & 0xfff7;
  return;
}



void FUN_006d3bd0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  LONG LVar7;
  int unaff_EBX;
  undefined4 unaff_ESI;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  undefined1 auStack_24 [3];
  undefined1 local_21;
  undefined4 local_1c;
  int iStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c7a84;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c = *(undefined4 *)(param_1 + 0x30);
  local_21 = 0;
  piVar2 = (int *)FUN_00700010(&DAT_00b3ca58);
  piVar8 = (int *)0x0;
  if ((piVar2 != (int *)0x0) &&
     (piVar3 = (int *)(**(code **)(*piVar2 + 0x80))(0,uVar1), piVar3 != (int *)0x0)) {
    for (puVar4 = (undefined4 *)(**(code **)(*piVar3 + 4))(); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      if (puVar4 == &DAT_00b3d91c) goto LAB_006d3c7f;
    }
  }
  local_21 = 1;
  piStack_14 = (int *)FUN_00401f00(0x40);
  uStack_4 = 0;
  if (piStack_14 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_006c3e50();
  }
  uStack_4 = 0xffffffff;
  FUN_006d3b40(param_1,piVar2);
LAB_006d3c7f:
  piStack_14 = (int *)FUN_00401f00(0x44);
  uStack_4 = 1;
  if (piStack_14 != (int *)0x0) {
    piVar8 = (int *)FUN_006dfb70(0,0,0);
  }
  uStack_4 = 0xffffffff;
  piVar8[4] = *(int *)(param_1 + 0x40);
  FUN_006df010(0);
  if ((*(byte *)(param_1 + 0x3c) & 1) == 0) {
    *(ushort *)(piVar8 + 3) = *(ushort *)(piVar8 + 3) & 0xfffe;
  }
  else {
    *(ushort *)(piVar8 + 3) = *(ushort *)(piVar8 + 3) | 1;
  }
  *(ushort *)(piVar8 + 3) =
       *(ushort *)(piVar8 + 3) & 0xfff9 | (*(byte *)(param_1 + 0x3c) >> 1 & 3) * 2;
  piVar3 = (int *)(**(code **)(*piVar2 + 0x80))(0);
  piStack_14 = piVar3;
  if (piVar3 != (int *)0x0) {
    InterlockedIncrement(piVar3 + 1);
  }
  puStack_8 = (undefined1 *)0x2;
  if (piVar3 != (int *)0x0) {
    for (puVar4 = (undefined4 *)(**(code **)(*piVar3 + 4))(); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      if (puVar4 == &DAT_00b3d91c) {
        if ((piVar3[0xb] != 0) && (*(short *)(piVar3[0xb] + 10) != 0)) {
          iStack_18 = FUN_00401f00(0x20);
          puStack_8._0_1_ = 3;
          if (iStack_18 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_006da160(0);
          }
          puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
          uVar6 = FUN_006d3aa0(&iStack_18,&local_1c,auStack_24);
          FUN_006d39e0(uVar6,iStack_18,local_1c);
          FUN_006e1a80(0,0,0);
          FUN_006d38f0(uVar5);
          param_1 = unaff_retaddr;
        }
        if ((piVar3[0xb] != 0) && (*(short *)(piVar3[0xb] + 0xc) != 0)) {
          iStack_18 = FUN_00401f00(0x18);
          puStack_8._0_1_ = 4;
          if (iStack_18 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_006d2990(0);
          }
          puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
          uVar6 = FUN_006d3af0(&local_1c,&iStack_18,auStack_24);
          FUN_006d3830(uVar6,local_1c,iStack_18);
          FUN_006e1ac0(0,0,0);
          FUN_006d3990(uVar5);
          param_1 = unaff_retaddr;
        }
        break;
      }
    }
  }
  (**(code **)(*piVar2 + 0x84))(piVar8,0);
  (**(code **)(*piVar8 + 0x7c))();
  if ((char)((uint)unaff_ESI >> 0x18) != '\0') {
    (**(code **)(*piVar2 + 0x58))(unaff_EBX);
  }
  if (unaff_EBX != 0) {
    FUN_006ffe90(param_1);
  }
  uStack_10 = 0xffffffff;
  if ((piVar3 != (int *)0x0) && (LVar7 = InterlockedDecrement(piVar3 + 1), LVar7 == 0)) {
    (**(code **)*piVar3)(1);
  }
  *unaff_FS_OFFSET = iStack_18;
  return;
}



void FUN_006d3eb0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_18 [4];
  int local_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar2 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b8ceb;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_14 = *(int *)(param_1 + 0x30);
  piVar1 = *(int **)(local_14 + 0xc);
  do {
    if (piVar1 == (int *)0x0) {
LAB_006d3fdb:
      FUN_006ffe90(iVar2);
      *unaff_FS_OFFSET = local_c;
      return;
    }
    for (puVar4 = (undefined4 *)(**(code **)(*piVar1 + 4))(uVar3); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      if (puVar4 == &DAT_00b3ca58) {
        piVar5 = (int *)(**(code **)(*piVar1 + 0x80))(0);
        if (piVar5 != (int *)0x0) {
          puVar4 = (undefined4 *)(**(code **)(*piVar5 + 4))();
          goto joined_r0x006d3f2f;
        }
        break;
      }
    }
LAB_006d3f3f:
    piVar1 = (int *)piVar1[0xd];
  } while( true );
joined_r0x006d3f2f:
  if (puVar4 == (undefined4 *)0x0) goto LAB_006d3f3f;
  if (puVar4 == &DAT_00b3df08) {
    uVar6 = *(undefined4 *)(iVar2 + 0x40);
    iStack_10 = FUN_00401f00(0x18);
    uStack_4 = 0;
    if (iStack_10 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_006d2990(uVar6);
    }
    uStack_4 = 0xffffffff;
    FUN_006d3940(uVar6);
    FUN_006d3b40(iVar2,piVar1);
    (**(code **)(*piVar5 + 0x80))(auStack_18,&param_1);
    (**(code **)(*piVar5 + 0x84))(unaff_EBP,uStack_4);
    (**(code **)(*piVar1 + 0x88))();
    (**(code **)(*piVar5 + 0x7c))();
    goto LAB_006d3fdb;
  }
  puVar4 = (undefined4 *)puVar4[1];
  goto joined_r0x006d3f2f;
}



void FUN_006d4000(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  LONG LVar7;
  int unaff_EBP;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009c7abe;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = *(int *)(param_1 + 0x30);
  piVar4 = (int *)FUN_00700010(&DAT_00b3ca58);
  piVar8 = (int *)0x0;
  if (piVar4 != (int *)0x0) {
    InterlockedIncrement(piVar4 + 1);
  }
  local_4 = (undefined4 *)0x0;
  iVar5 = FUN_00401f00(0x5c,uVar3);
  local_4._0_1_ = 1;
  if (iVar5 != 0) {
    piVar8 = (int *)FUN_006dc1d0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  }
  local_4 = (undefined4 *)((uint)local_4._1_3_ << 8);
  if ((*(byte *)(param_1 + 0x3c) >> 2 & 1) == 0) {
    *(ushort *)(piVar8 + 3) = *(ushort *)(piVar8 + 3) & 0xfffb;
  }
  else {
    *(ushort *)(piVar8 + 3) = *(ushort *)(piVar8 + 3) | 4;
  }
  if ((*(byte *)(param_1 + 0x3c) >> 3 & 1) == 0) {
    *(ushort *)(piVar8 + 3) = *(ushort *)(piVar8 + 3) & 0xfff7;
  }
  else {
    *(ushort *)(piVar8 + 3) = *(ushort *)(piVar8 + 3) | 8;
  }
  piVar8[0xe] = *(int *)(param_1 + 0x68);
  if ((*(byte *)(param_1 + 0x3c) >> 4 & 1) == 0) {
    *(ushort *)(piVar8 + 3) = *(ushort *)(piVar8 + 3) & 0xffef;
  }
  else {
    *(ushort *)(piVar8 + 3) = *(ushort *)(piVar8 + 3) | 0x10;
    FUN_006dbbc0();
  }
  if ((*(byte *)(param_1 + 0x3c) >> 5 & 1) == 0) {
    *(ushort *)(piVar8 + 3) = *(ushort *)(piVar8 + 3) & 0xffdf;
  }
  else {
    *(ushort *)(piVar8 + 3) = *(ushort *)(piVar8 + 3) | 0x20;
  }
  piVar8[10] = *(int *)(param_1 + 0x58);
  piVar8[0xb] = *(int *)(param_1 + 0x5c);
  *(undefined2 *)(piVar8 + 0xc) = *(undefined2 *)(param_1 + 0x60);
  if ((*(byte *)(param_1 + 0x3c) >> 6 & 1) == 0) {
    *(ushort *)(piVar8 + 3) = *(ushort *)(piVar8 + 3) & 0xffbf;
  }
  else {
    *(ushort *)(piVar8 + 3) = *(ushort *)(piVar8 + 3) | 0x40;
  }
  if ((*(byte *)(param_1 + 0x3c) >> 1 & 1) == 0) {
    *(ushort *)(piVar8 + 3) = *(ushort *)(piVar8 + 3) & 0xfffd;
  }
  else {
    *(ushort *)(piVar8 + 3) = *(ushort *)(piVar8 + 3) | 2;
  }
  if ((piVar4 == (int *)0x0) || (iVar5 = (**(code **)(*piVar4 + 0x80))(0), iVar5 != 0)) {
    iVar5 = FUN_00401f00(0x40);
    local_4._0_1_ = 2;
    if (iVar5 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_006c3e50();
    }
    local_4 = (undefined4 *)((uint)local_4._1_3_ << 8);
    if (piVar4 != piVar6) {
      if ((piVar4 != (int *)0x0) && (LVar7 = InterlockedDecrement(piVar4 + 1), LVar7 == 0)) {
        (**(code **)*piVar4)(1);
      }
      piVar4 = piVar6;
      if (piVar6 != (int *)0x0) {
        InterlockedIncrement(piVar6 + 1);
      }
    }
    (**(code **)(*piVar4 + 0x84))(piVar8,0);
    (**(code **)(*piVar4 + 0x58))(unaff_EBP);
    FUN_006d3b40(param_1,piVar4);
    FUN_00478300(piVar4[0xd]);
    local_4 = *(undefined4 **)(param_1 + 0x34);
    puVar2 = (undefined4 *)piVar4[0xd];
    if (puVar2 != local_4) {
      if (((puVar2 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar2 + 1), LVar7 == 0))
         && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      piVar4[0xd] = (int)local_4;
      if (local_4 != (undefined4 *)0x0) {
        InterlockedIncrement(local_4 + 1);
      }
    }
    piVar6 = *(int **)(param_1 + 0x34);
    if (piVar6 != piVar4) {
      if (((piVar6 != (int *)0x0) && (LVar7 = InterlockedDecrement(piVar6 + 1), LVar7 == 0)) &&
         (piVar6 != (int *)0x0)) {
        (**(code **)*piVar6)(1);
      }
      *(int **)(param_1 + 0x34) = piVar4;
      InterlockedIncrement(piVar4 + 1);
    }
  }
  else {
    (**(code **)(*piVar4 + 0x84))(piVar8,0);
    FUN_006d3b40(param_1,piVar4);
  }
  (**(code **)(*piVar8 + 0x7c))();
  if (unaff_EBP != 0) {
    FUN_006ffe90(param_1);
  }
  local_c = -1;
  LVar7 = InterlockedDecrement(piVar4 + 1);
  if (LVar7 == 0) {
    (**(code **)*piVar4)(1);
  }
  *unaff_FS_OFFSET = iVar1;
  return;
}



void FUN_006d42d0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if ((param_2 != (int *)0x0) &&
     (puVar3 = (undefined4 *)(**(code **)(*param_2 + 4))(), puVar3 != (undefined4 *)0x0)) {
    while (puVar3 != &DAT_00b3fa80) {
      puVar3 = (undefined4 *)puVar3[1];
      if (puVar3 == (undefined4 *)0x0) {
        return;
      }
    }
    piVar1 = (int *)param_2[3];
joined_r0x006d4307:
    piVar2 = piVar1;
    if (piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[0xd];
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 4))(); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[1]) {
        if (puVar3 == &DAT_00b3dbdc) {
          FUN_006d3eb0(piVar2);
          goto joined_r0x006d4307;
        }
      }
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 4))(); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[1]) {
        if (puVar3 == &DAT_00b3df34) {
          FUN_006d3bd0(piVar2);
          goto joined_r0x006d4307;
        }
      }
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 4))(); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[1]) {
        if (puVar3 == &DAT_00b3ddc0) {
          FUN_006d4000(piVar2);
          break;
        }
      }
      goto joined_r0x006d4307;
    }
    iVar4 = (**(code **)(*param_2 + 8))();
    if (iVar4 != 0) {
      uVar6 = 0;
      if (*(short *)((int)param_2 + 0xb6) != 0) {
        if (*(short *)((int)param_2 + 0xb6) != 0) goto LAB_006d43b5;
        uVar5 = 0;
        while( true ) {
          FUN_006d42d0(param_1,uVar5);
          uVar6 = uVar6 + 1;
          if (*(ushort *)((int)param_2 + 0xb6) <= uVar6) break;
LAB_006d43b5:
          uVar5 = *(undefined4 *)(param_2[0x2c] + uVar6 * 4);
        }
      }
    }
  }
  return;
}



void FUN_006d43e0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  if (((*(uint *)(param_1 + 0xd8) < 0xa010068) && (param_2 != (int *)0x0)) &&
     (puVar1 = (undefined4 *)(**(code **)(*param_2 + 4))(), puVar1 != (undefined4 *)0x0)) {
    while (puVar1 != &DAT_00b3f584) {
      puVar1 = (undefined4 *)puVar1[1];
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
    }
    FUN_006d42d0(param_1,param_2);
  }
  return;
}



void FUN_006d4470(undefined4 param_1)

{
  ushort *puVar1;
  char cVar2;
  char cVar3;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 8) >> 5 & 1) == 0) {
    cVar2 = FUN_006c36b0(param_1);
    if (cVar2 != '\0') {
      if (*(int **)(in_ECX + 0x3c) == (int *)0x0) {
        return;
      }
      cVar2 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x94))();
      if (cVar2 == '\0') {
        return;
      }
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x28) = 0xff7fffff;
  }
  if (*(int **)(in_ECX + 0x3c) != (int *)0x0) {
    cVar2 = '\x04';
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x60))
                      (*(undefined4 *)(in_ECX + 0x28),*(undefined4 *)(in_ECX + 0x30));
    if (cVar3 != '\0') {
      if (cVar2 == '\0') {
        puVar1 = (ushort *)(*(int *)(in_ECX + 0x30) + 0x18);
        *puVar1 = *puVar1 | 1;
        return;
      }
      puVar1 = (ushort *)(*(int *)(in_ECX + 0x30) + 0x18);
      *puVar1 = *puVar1 & 0xfffe;
    }
  }
  return;
}



void FUN_006d44f0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  thunk_FUN_00715e70(param_1);
  if (*(uint *)(param_1 + 0xd8) < 0xa010068) {
    uVar2 = FUN_007124a0(uVar1);
    iVar3 = FUN_00401f00(0x18);
    local_4 = 0;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_006e7f50(uVar2);
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar2);
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x7c))();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_006d45a0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x40,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ec630();
    *puVar2 = &PTR_FUN_00a7a674;
  }
  local_4 = 0xffffffff;
  thunk_FUN_006ce2c0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_006d4620(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x40,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ec630();
    *puVar2 = &PTR_FUN_00a7a674;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_006d4680(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ec660(param_1);
  param_1 = FUN_0070f910(DAT_00b3d80c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006d46d0(void)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[0x10] = 0x3f800000;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[0x11] = 0x3f800000;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  *(undefined1 *)(in_ECX + 0x12) = 0;
  *(undefined1 *)((int)in_ECX + 0x49) = 0;
  *(undefined1 *)((int)in_ECX + 0x4a) = 0;
  *(undefined1 *)((int)in_ECX + 0x4b) = 0;
  *in_ECX = &PTR_FUN_00a7a724;
  return;
}



void FUN_006d4740(void)

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
  *in_ECX = &PTR_FUN_00a7a724;
  local_4 = 0;
  if (in_ECX[3] != 0) {
    (**(code **)(&DAT_00b3d2c8 + in_ECX[4] * 4))(in_ECX[3],uVar1);
  }
  if (in_ECX[6] != 0) {
    (**(code **)(&DAT_00b3d2c8 + in_ECX[7] * 4))(in_ECX[6]);
  }
  if (in_ECX[9] != 0) {
    (**(code **)(&DAT_00b3d2c8 + in_ECX[10] * 4))(in_ECX[9]);
  }
  if (in_ECX[0xc] != 0) {
    (**(code **)(&DAT_00b3d2c8 + in_ECX[0xd] * 4))(in_ECX[0xc]);
  }
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
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
  local_10 = FUN_00401f00(0x4c,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006d46d0();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006d49f0(byte param_1)

{
  FUN_006d4740();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006d4a10(int param_1,int param_2,int param_3)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    (**(code **)(&DAT_00b3d2c8 + *(int *)(in_ECX + 0x10) * 4))(*(int *)(in_ECX + 0xc));
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    *(int *)(in_ECX + 8) = param_2;
    *(int *)(in_ECX + 0xc) = param_1;
    *(int *)(in_ECX + 0x10) = param_3;
    *(undefined *)(in_ECX + 0x48) = (&DAT_00b3d3e8)[param_3];
    return;
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined1 *)(in_ECX + 0x48) = 0;
  return;
}



void FUN_006d4a70(int param_1,int param_2,int param_3)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x18) != 0) {
    (**(code **)(&DAT_00b3d2c8 + *(int *)(in_ECX + 0x1c) * 4))(*(int *)(in_ECX + 0x18));
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    *(int *)(in_ECX + 0x14) = param_2;
    *(int *)(in_ECX + 0x18) = param_1;
    *(int *)(in_ECX + 0x1c) = param_3;
    *(undefined *)(in_ECX + 0x49) = (&DAT_00b3d3e8)[param_3];
    return;
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined1 *)(in_ECX + 0x49) = 0;
  return;
}



void FUN_006d4ad0(int param_1,int param_2,int param_3)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    (**(code **)(&DAT_00b3d2c8 + *(int *)(in_ECX + 0x28) * 4))(*(int *)(in_ECX + 0x24));
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    *(int *)(in_ECX + 0x20) = param_2;
    *(int *)(in_ECX + 0x24) = param_1;
    *(int *)(in_ECX + 0x28) = param_3;
    *(undefined *)(in_ECX + 0x4a) = (&DAT_00b3d3e8)[param_3];
    return;
  }
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined1 *)(in_ECX + 0x4a) = 0;
  return;
}



void FUN_006d4b30(int param_1,int param_2,int param_3)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x30) != 0) {
    (**(code **)(&DAT_00b3d2c8 + *(int *)(in_ECX + 0x34) * 4))(*(int *)(in_ECX + 0x30));
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    *(int *)(in_ECX + 0x2c) = param_2;
    *(int *)(in_ECX + 0x30) = param_1;
    *(int *)(in_ECX + 0x34) = param_3;
    *(undefined *)(in_ECX + 0x4b) = (&DAT_00b3d3e8)[param_3];
    return;
  }
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined1 *)(in_ECX + 0x4b) = 0;
  return;
}



void FUN_006d4b90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int local_8;
  int iStack_4;
  
  iVar2 = param_1;
  FUN_007008a0(param_1);
  local_8 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&param_1,4,&local_8,1);
  if (param_1 != 0) {
    local_8 = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&iStack_4,4,&local_8,1);
    iVar3 = iStack_4;
    *(undefined *)(in_ECX + 0x48) = (&DAT_00b3d3e8)[iStack_4];
    iVar4 = (**(code **)(&DAT_00b3d088 + iStack_4 * 4))(iVar2,param_1);
    iVar1 = iStack_4 * 4;
    iStack_4 = iVar4;
    (**(code **)(&DAT_00b3d410 + iVar1))(iVar4,param_1,*(undefined1 *)(in_ECX + 0x48));
    FUN_006d4a10(iStack_4,param_1,iVar3);
  }
  iStack_4 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&param_1,4,&iStack_4,1);
  if (param_1 != 0) {
    iStack_4 = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&local_8,4,&iStack_4,1);
    iVar1 = local_8;
    *(undefined *)(in_ECX + 0x49) = (&DAT_00b3d3e8)[local_8];
    iStack_4 = (**(code **)(&DAT_00b3d088 + local_8 * 4))(iVar2,param_1);
    (**(code **)(&DAT_00b3d410 + iVar1 * 4))(iStack_4,param_1,*(undefined1 *)(in_ECX + 0x49));
    FUN_006d4a70(iStack_4,param_1,iVar1);
  }
  iStack_4 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&param_1,4,&iStack_4,1);
  if (param_1 != 0) {
    iStack_4 = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&local_8,4,&iStack_4,1);
    iVar1 = local_8;
    *(undefined *)(in_ECX + 0x4a) = (&DAT_00b3d3e8)[local_8];
    iStack_4 = (**(code **)(&DAT_00b3d088 + local_8 * 4))(iVar2,param_1);
    (**(code **)(&DAT_00b3d410 + iVar1 * 4))(iStack_4,param_1,*(undefined1 *)(in_ECX + 0x4a));
    FUN_006d4ad0(iStack_4,param_1,iVar1);
  }
  iStack_4 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&param_1,4,&iStack_4,1);
  if (param_1 != 0) {
    iStack_4 = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&local_8,4,&iStack_4,1);
    iVar1 = local_8;
    *(undefined *)(in_ECX + 0x4b) = (&DAT_00b3d3e8)[local_8];
    uVar5 = (**(code **)(&DAT_00b3d088 + local_8 * 4))(iVar2,param_1);
    (**(code **)(&DAT_00b3d410 + iVar1 * 4))(uVar5,param_1,*(undefined1 *)(in_ECX + 0x4b));
    FUN_006d4b30(uVar5,param_1,iVar1);
  }
  return;
}



void FUN_006d4df0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_0068f970(param_1);
  piVar1 = (int *)(in_ECX + 8);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),piVar1,4,&param_1,1);
  if (*piVar1 != 0) {
    param_1 = 4;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 0x10,4,&param_1,1);
    (**(code **)(&DAT_00b3d5c0 + *(int *)(in_ECX + 0x10) * 4))
              (iVar2,*(undefined4 *)(in_ECX + 0xc),*piVar1);
  }
  piVar1 = (int *)(in_ECX + 0x14);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),piVar1,4,&param_1,1);
  if (*piVar1 != 0) {
    param_1 = 4;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 0x1c,4,&param_1,1);
    (**(code **)(&DAT_00b3d5c0 + *(int *)(in_ECX + 0x1c) * 4))
              (iVar2,*(undefined4 *)(in_ECX + 0x18),*piVar1);
  }
  piVar1 = (int *)(in_ECX + 0x20);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),piVar1,4,&param_1,1);
  if (*piVar1 != 0) {
    param_1 = 4;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 0x28,4,&param_1,1);
    (**(code **)(&DAT_00b3d5c0 + *(int *)(in_ECX + 0x28) * 4))
              (iVar2,*(undefined4 *)(in_ECX + 0x24),*piVar1);
  }
  piVar1 = (int *)(in_ECX + 0x2c);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),piVar1,4,&param_1,1);
  if (*piVar1 != 0) {
    param_1 = 4;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 0x34,4,&param_1,1);
    (**(code **)(&DAT_00b3d5c0 + *(int *)(in_ECX + 0x34) * 4))
              (iVar2,*(undefined4 *)(in_ECX + 0x30),*piVar1);
  }
  return;
}



undefined4 FUN_006d50b0(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x50);
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 8);
    *param_2 = *(undefined4 *)(iVar1 + 0x10);
    *param_3 = *(undefined1 *)(iVar1 + 0x48);
    return *(undefined4 *)(iVar1 + 0xc);
  }
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  return 0;
}



undefined4 FUN_006d5100(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x50);
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 0x14);
    *param_2 = *(undefined4 *)(iVar1 + 0x1c);
    *param_3 = *(undefined1 *)(iVar1 + 0x49);
    return *(undefined4 *)(iVar1 + 0x18);
  }
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  return 0;
}



undefined4 FUN_006d5150(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x50);
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 0x20);
    *param_2 = *(undefined4 *)(iVar1 + 0x28);
    *param_3 = *(undefined1 *)(iVar1 + 0x4a);
    return *(undefined4 *)(iVar1 + 0x24);
  }
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  return 0;
}



undefined4 FUN_006d51a0(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x50);
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 0x2c);
    *param_2 = *(undefined4 *)(iVar1 + 0x34);
    *param_3 = *(undefined1 *)(iVar1 + 0x4b);
    return *(undefined4 *)(iVar1 + 0x30);
  }
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  return 0;
}



void FUN_006d5250(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c7af3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7a7c4;
  puVar1 = (undefined4 *)in_ECX[0x14];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x14] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x14];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00715a70(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d5300(void)

{
  byte bVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  iVar4 = *(int *)(in_ECX + 0x50);
  *(undefined4 *)(in_ECX + 0x14) = 0x7f7fffff;
  *(undefined4 *)(in_ECX + 0x18) = 0xff7fffff;
  if (iVar4 != 0) {
    pfVar2 = *(float **)(iVar4 + 0xc);
    iVar3 = *(int *)(iVar4 + 8);
    bVar1 = *(byte *)(iVar4 + 0x48);
    if (pfVar2 != (float *)0x0) {
      if (*pfVar2 < 3.4028235e+38) {
        *(float *)(in_ECX + 0x14) = *pfVar2;
      }
      iVar3 = (uint)bVar1 * (iVar3 + -1);
      if (-3.4028235e+38 < *(float *)((int)pfVar2 + iVar3)) {
        *(float *)(in_ECX + 0x18) = *(float *)((int)pfVar2 + iVar3);
      }
    }
    if (iVar4 != 0) {
      pfVar2 = *(float **)(iVar4 + 0x18);
      iVar3 = *(int *)(iVar4 + 0x14);
      bVar1 = *(byte *)(iVar4 + 0x49);
      if (pfVar2 != (float *)0x0) {
        if (*pfVar2 < *(float *)(in_ECX + 0x14)) {
          *(float *)(in_ECX + 0x14) = *pfVar2;
        }
        iVar3 = (uint)bVar1 * (iVar3 + -1);
        if (*(float *)(in_ECX + 0x18) < *(float *)((int)pfVar2 + iVar3)) {
          *(float *)(in_ECX + 0x18) = *(float *)((int)pfVar2 + iVar3);
        }
      }
      if (iVar4 != 0) {
        pfVar2 = *(float **)(iVar4 + 0x24);
        iVar3 = *(int *)(iVar4 + 0x20);
        bVar1 = *(byte *)(iVar4 + 0x4a);
        if (pfVar2 != (float *)0x0) {
          if (*pfVar2 < *(float *)(in_ECX + 0x14)) {
            *(float *)(in_ECX + 0x14) = *pfVar2;
          }
          iVar3 = (uint)bVar1 * (iVar3 + -1);
          if (*(float *)(in_ECX + 0x18) < *(float *)((int)pfVar2 + iVar3)) {
            *(float *)(in_ECX + 0x18) = *(float *)((int)pfVar2 + iVar3);
          }
        }
        if (iVar4 != 0) {
          iVar3 = *(int *)(iVar4 + 0x2c);
          bVar1 = *(byte *)(iVar4 + 0x4b);
          pfVar2 = *(float **)(iVar4 + 0x30);
          if (pfVar2 != (float *)0x0) {
            if (*pfVar2 < *(float *)(in_ECX + 0x14)) {
              *(float *)(in_ECX + 0x14) = *pfVar2;
            }
            iVar4 = (uint)bVar1 * (iVar3 + -1);
            if (*(float *)(in_ECX + 0x18) < *(float *)((int)pfVar2 + iVar4)) {
              *(float *)(in_ECX + 0x18) = *(float *)((int)pfVar2 + iVar4);
            }
          }
        }
      }
    }
  }
  return;
}



void FUN_006d5460(void)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int in_ECX;
  uint uVar4;
  float10 fVar5;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_4;
  
  if ((*(char *)(in_ECX + 0x54) != '\0') &&
     (iVar1 = *(int *)(*(int *)(in_ECX + 0x30) + 0xb4),
     *(ushort *)(in_ECX + 0x4c) < (*(byte *)(iVar1 + 0x2c) & 0x3f))) {
    local_c = 0.0;
    iVar2 = FUN_006d50b0(&local_20,&local_1c,&local_24);
    if (iVar2 != 0) {
      fVar5 = (float10)FUN_006bb270(*(undefined4 *)(in_ECX + 0x28),iVar2,local_1c,local_20,
                                    in_ECX + 0x3c,local_24);
      local_c = (float)fVar5;
    }
    local_18 = 0.0;
    iVar2 = FUN_006d5100(&local_20,&local_1c,&local_24);
    if (iVar2 != 0) {
      fVar5 = (float10)FUN_006bb270(*(undefined4 *)(in_ECX + 0x28),iVar2,local_1c,local_20,
                                    in_ECX + 0x44,local_24);
      local_18 = (float)fVar5;
    }
    local_14 = 1.0;
    iVar2 = FUN_006d5150(&local_20,&local_1c,&local_24);
    if (iVar2 != 0) {
      fVar5 = (float10)FUN_006bb270(*(undefined4 *)(in_ECX + 0x28),iVar2,local_1c,local_20,
                                    in_ECX + 0x40,local_24);
      local_14 = (float)fVar5;
    }
    local_10 = 1.0;
    iVar2 = FUN_006d51a0(&local_20,&local_1c,&local_24);
    if (iVar2 != 0) {
      fVar5 = (float10)FUN_006bb270(*(undefined4 *)(in_ECX + 0x28),iVar2,local_1c,local_20,
                                    in_ECX + 0x48,local_24);
      local_10 = (float)fVar5;
    }
    iVar2 = *(int *)(in_ECX + 0x50);
    local_1c = local_14 / *(float *)(iVar2 + 0x40);
    local_20 = *(float *)(iVar2 + 0x38);
    local_4 = local_10 / *(float *)(iVar2 + 0x44);
    local_24 = *(float *)(iVar2 + 0x3c);
    pfVar3 = (float *)FUN_007282f0(*(undefined2 *)(in_ECX + 0x4c));
    if (*(ushort *)(iVar1 + 8) != 0) {
      uVar4 = (uint)*(ushort *)(iVar1 + 8);
      do {
        uVar4 = uVar4 - 1;
        *pfVar3 = local_1c * *pfVar3 + ((1.0 - local_1c) * 0.5 - (local_c - local_20 * local_1c));
        pfVar3[1] = pfVar3[1] * local_4 + (1.0 - local_4) * 0.5 + (local_18 - local_4 * local_24);
        pfVar3 = pfVar3 + 2;
      } while (uVar4 != 0);
    }
    iVar2 = *(int *)(in_ECX + 0x50);
    *(float *)(iVar2 + 0x38) = local_c;
    *(float *)(iVar2 + 0x3c) = local_18;
    *(float *)(iVar2 + 0x40) = local_14;
    *(float *)(iVar2 + 0x44) = local_10;
    *(ushort *)(iVar1 + 0x2e) = *(ushort *)(iVar1 + 0x2e) | 8;
    *(undefined1 *)(in_ECX + 0x54) = 0;
  }
  return;
}



undefined4 * FUN_006d56a0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x58,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00715990();
    *puVar2 = &PTR_FUN_00a7a7c4;
    puVar2[0x14] = 0;
    *(undefined2 *)(puVar2 + 0x13) = 0;
    puVar2[0xf] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0x12] = 0;
    *(undefined1 *)(puVar2 + 0x15) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 FUN_006d57c0(int param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  
  cVar2 = FUN_00715820(param_1);
  if ((cVar2 != '\0') && (*(short *)(in_ECX + 0x4c) == *(short *)(param_1 + 0x4c))) {
    piVar1 = *(int **)(in_ECX + 0x50);
    if ((piVar1 == (int *)0x0) == (*(int *)(param_1 + 0x50) == 0)) {
      if ((piVar1 != (int *)0x0) &&
         (cVar2 = (**(code **)(*piVar1 + 0x2c))(*(int *)(param_1 + 0x50)), cVar2 == '\0')) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



void FUN_006d5810(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x50);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x50) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  FUN_006d5300();
  return;
}



void FUN_006d5870(byte param_1)

{
  FUN_006d5250();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_006d5920(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
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
  puVar2 = (undefined4 *)FUN_00401f00(0x58,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00715990();
    *puVar2 = &PTR_FUN_00a7a7c4;
    puVar2[0x14] = 0;
    *(undefined2 *)(puVar2 + 0x13) = 0;
    puVar2[0xf] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0x12] = 0;
    *(undefined1 *)(puVar2 + 0x15) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00715d80(puVar2,param_1);
  puVar2[0xf] = *(undefined4 *)(in_ECX + 0x3c);
  puVar2[0x11] = *(undefined4 *)(in_ECX + 0x44);
  puVar2[0x10] = *(undefined4 *)(in_ECX + 0x40);
  puVar2[0x12] = *(undefined4 *)(in_ECX + 0x48);
  *(undefined2 *)(puVar2 + 0x13) = *(undefined2 *)(in_ECX + 0x4c);
  if (*(int *)(in_ECX + 0x50) != 0) {
    FUN_006d5810(*(int *)(in_ECX + 0x50));
  }
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_006d59f0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00716140(param_1);
  param_1 = FUN_0070f910(DAT_00b3d8cc);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined4 FUN_006d5a40(float *param_1)

{
  float *in_ECX;
  
  if ((((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) &&
     (param_1[3] == in_ECX[3])) {
    return 0;
  }
  return 1;
}



void FUN_006d5ad0(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x2c);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x2c) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_006d5b20(int param_1)

{
  undefined4 *in_ECX;
  
  FUN_006ec220();
  *in_ECX = &PTR_FUN_00a7a83c;
  in_ECX[3] = DAT_00b24260;
  in_ECX[4] = DAT_00b24264;
  in_ECX[5] = DAT_00b24268;
  in_ECX[6] = DAT_00b3cba4;
  in_ECX[7] = DAT_00b3cba8;
  in_ECX[8] = DAT_00b3cbac;
  in_ECX[9] = DAT_00b3cbb0;
  in_ECX[10] = 0xff7fffff;
  in_ECX[0xb] = param_1;
  if (param_1 != 0) {
    InterlockedIncrement((LONG *)(param_1 + 4));
  }
  *(undefined2 *)(in_ECX + 0xc) = 0;
  *(undefined2 *)((int)in_ECX + 0x32) = 0;
  *(undefined2 *)(in_ECX + 0xd) = 0;
  return;
}



void FUN_006d5bb0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7da8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x2c);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_006ec250(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d5c30(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  FUN_006ec220();
  puVar2 = in_ECX + 3;
  for (iVar1 = 8; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar1 != 0;
      iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)register0x00000010;
    puVar2 = puVar2 + 1;
  }
  *in_ECX = &PTR_FUN_00a7a83c;
  in_ECX[0xb] = 0;
  *(undefined2 *)(in_ECX + 0xc) = 0;
  *(undefined2 *)((int)in_ECX + 0x32) = 0;
  *(undefined2 *)(in_ECX + 0xd) = 0;
  return;
}



void FUN_006d5db0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  float *pfVar6;
  bool bVar7;
  int in_ECX;
  float *pfVar8;
  float *pfVar9;
  int local_4;
  
  iVar5 = *(int *)(in_ECX + 0x2c);
  *param_1 = 3.4028235e+38;
  *param_2 = -3.4028235e+38;
  bVar7 = false;
  if (iVar5 != 0) {
    uVar4 = *(ushort *)(iVar5 + 10);
    bVar3 = *(byte *)(iVar5 + 0x1d);
    pfVar9 = *(float **)(iVar5 + 0x24);
    if (uVar4 != 0) {
      fVar1 = *pfVar9;
      if (fVar1 < *param_1) {
        *param_1 = fVar1;
      }
      fVar1 = *(float *)((uVar4 - 1) * (uint)bVar3 + (int)pfVar9);
      if (*param_2 < fVar1) {
        *param_2 = fVar1;
      }
      bVar7 = true;
    }
    if (iVar5 != 0) {
      uVar4 = *(ushort *)(iVar5 + 8);
      bVar3 = *(byte *)(iVar5 + 0x1c);
      pfVar9 = *(float **)(iVar5 + 0x20);
      if (uVar4 != 0) {
        if (*(int *)(iVar5 + 0x10) == 4) {
          pfVar8 = pfVar9 + 0xb;
          pfVar9 = pfVar9 + 0xc;
          local_4 = 3;
          do {
            fVar1 = pfVar9[-7];
            if (fVar1 != 0.0) {
              pfVar6 = (float *)*pfVar9;
              fVar2 = *pfVar6;
              bVar3 = *(byte *)pfVar8;
              if (fVar2 < *param_1) {
                *param_1 = fVar2;
              }
              fVar1 = *(float *)(((int)fVar1 + -1) * (uint)bVar3 + (int)pfVar6);
              if (*param_2 < fVar1) {
                *param_2 = fVar1;
              }
              bVar7 = true;
            }
            pfVar9 = pfVar9 + 1;
            pfVar8 = (float *)((int)pfVar8 + 1);
            local_4 = local_4 + -1;
          } while (local_4 != 0);
        }
        else {
          if (*pfVar9 < *param_1) {
            *param_1 = *pfVar9;
          }
          fVar1 = *(float *)((uVar4 - 1) * (uint)bVar3 + (int)pfVar9);
          if (*param_2 < fVar1) {
            *param_2 = fVar1;
          }
          bVar7 = true;
        }
      }
      if (iVar5 != 0) {
        uVar4 = *(ushort *)(iVar5 + 0xc);
        bVar3 = *(byte *)(iVar5 + 0x1e);
        pfVar9 = *(float **)(iVar5 + 0x28);
        if (uVar4 != 0) {
          fVar1 = *pfVar9;
          if (fVar1 < *param_1) {
            *param_1 = fVar1;
          }
          fVar1 = *(float *)((uVar4 - 1) * (uint)bVar3 + (int)pfVar9);
          if (fVar1 <= *param_2) {
            return;
          }
          *param_2 = fVar1;
          return;
        }
      }
    }
  }
  if (bVar7) {
    return;
  }
  *param_1 = 0.0;
  *param_2 = 0.0;
  return;
}



int FUN_006d5fe0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7b18;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_006eba60(param_1,param_2);
  if (*(int *)(in_ECX + 0x2c) != 0) {
    FUN_006e1fc0(&param_2,param_1,param_2);
    local_4 = 0;
    FUN_006d5ad0(param_2);
    puVar1 = param_2;
    *(undefined2 *)(iVar3 + 0x30) = 0;
    *(undefined2 *)(iVar3 + 0x32) = 0;
    *(undefined2 *)(iVar3 + 0x34) = 0;
    local_4 = 0xffffffff;
    if (((param_2 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_2 + 1), LVar4 == 0))
       && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



bool FUN_006d60b0(float param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  uint local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  if (param_1 == *(float *)(in_ECX + 8)) {
    puVar4 = (undefined4 *)(in_ECX + 0xc);
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_3 = *puVar4;
      puVar4 = puVar4 + 1;
      param_3 = param_3 + 1;
    }
    cVar1 = FUN_006cbc10();
    return cVar1 == '\0';
  }
  iVar3 = *(int *)(in_ECX + 0x2c);
  if (iVar3 != 0) {
    local_14 = CONCAT31(local_14._1_3_,*(undefined1 *)(iVar3 + 0x1d));
    if (*(short *)(iVar3 + 10) != 0) {
      local_18 = (uint)*(ushort *)(in_ECX + 0x30);
      uVar2 = FUN_006bbba0(local_10,param_1,*(undefined4 *)(iVar3 + 0x24),
                           *(undefined4 *)(iVar3 + 0x14),*(short *)(iVar3 + 10),&local_18,local_14);
      FUN_00471390(uVar2);
      *(undefined2 *)(in_ECX + 0x30) = (undefined2)local_18;
    }
  }
  iVar3 = *(int *)(in_ECX + 0x2c);
  if (iVar3 != 0) {
    local_14 = CONCAT31(local_14._1_3_,*(undefined1 *)(iVar3 + 0x1c));
    if (*(short *)(iVar3 + 8) != 0) {
      local_18 = (uint)*(ushort *)(in_ECX + 0x32);
      uVar2 = FUN_006bcf70(local_10,param_1,*(undefined4 *)(iVar3 + 0x20),
                           *(undefined4 *)(iVar3 + 0x10),*(short *)(iVar3 + 8),&local_18,local_14);
      FUN_00471430(uVar2);
      *(undefined2 *)(in_ECX + 0x32) = (undefined2)local_18;
    }
  }
  iVar3 = *(int *)(in_ECX + 0x2c);
  if (iVar3 != 0) {
    local_14 = CONCAT31(local_14._1_3_,*(undefined1 *)(iVar3 + 0x1e));
    if (*(short *)(iVar3 + 0xc) != 0) {
      local_18 = (uint)*(ushort *)(in_ECX + 0x34);
      fVar5 = (float10)FUN_006bb270(param_1,*(undefined4 *)(iVar3 + 0x28),
                                    *(undefined4 *)(iVar3 + 0x18),*(short *)(iVar3 + 0xc),&local_18,
                                    local_14);
      FUN_00471560((float)fVar5);
      *(undefined2 *)(in_ECX + 0x34) = (undefined2)local_18;
    }
  }
  puVar4 = (undefined4 *)(in_ECX + 0xc);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_3 = *puVar4;
    puVar4 = puVar4 + 1;
    param_3 = param_3 + 1;
  }
  cVar1 = FUN_006cbc10();
  if (cVar1 == '\0') {
    *(float *)(in_ECX + 8) = param_1;
    return true;
  }
  return false;
}



uint FUN_006d6230(uint param_1)

{
  float fVar1;
  uint uVar2;
  int *in_ECX;
  
  uVar2 = param_1 & 0xffff;
  if (uVar2 == 0) {
    if (in_ECX[0xb] != 0) {
      uVar2 = (**(code **)(*in_ECX + 0x9c))(param_1);
      if (uVar2 != 0) goto LAB_006d6298;
    }
    fVar1 = (float)in_ECX[3];
  }
  else if (uVar2 == 1) {
    if (in_ECX[0xb] != 0) {
      uVar2 = (**(code **)(*in_ECX + 0x9c))(param_1);
      if (uVar2 != 0) goto LAB_006d6298;
    }
    fVar1 = (float)in_ECX[7];
  }
  else {
    uVar2 = uVar2 - 2;
    if (uVar2 != 0) {
LAB_006d6298:
      return uVar2 & 0xffffff00;
    }
    if (in_ECX[0xb] != 0) {
      uVar2 = (**(code **)(*in_ECX + 0x9c))(param_1);
      if (uVar2 != 0) goto LAB_006d6298;
    }
    fVar1 = (float)in_ECX[10];
  }
  if (fVar1 != -3.4028235e+38) {
    return 1;
  }
  return 0;
}



void FUN_006d62d0(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  LONG LVar7;
  int in_ECX;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float local_74;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  
  iVar6 = *(int *)(in_ECX + 0x2c);
  if (iVar6 == 0) {
    return;
  }
  local_44 = -3.4028235e+38;
  local_60[0] = DAT_00b24260;
  local_60[3] = DAT_00b3cba4;
  local_48 = DAT_00b3cbb0;
  local_60[1] = DAT_00b24264;
  local_60[2] = DAT_00b24268;
  local_50 = DAT_00b3cba8;
  local_4c = DAT_00b3cbac;
  if (*(short *)(iVar6 + 10) == 0) {
    FUN_006e1f00(0,0,0);
LAB_006d63b6:
    if (*(float *)(in_ECX + 0xc) != -3.4028235e+38) goto LAB_006d63ce;
  }
  else {
    if (*(short *)(iVar6 + 10) != 1) {
      if ((*(int *)(iVar6 + 0x14) == 1) || (*(int *)(iVar6 + 0x14) == 5)) {
        bVar3 = true;
        uVar9 = 1;
        do {
          if (*(ushort *)(iVar6 + 10) <= uVar9) {
            if (bVar3) goto LAB_006d6419;
            break;
          }
          cVar4 = FUN_008aa390();
          if (cVar4 != '\0') {
            bVar3 = false;
          }
          uVar9 = uVar9 + 1;
        } while (bVar3);
      }
      goto LAB_006d63b6;
    }
LAB_006d6419:
    FUN_006e1f00(0,0,0);
LAB_006d63ce:
    FUN_00471390();
  }
  iVar6 = *(int *)(in_ECX + 0x2c);
  uVar9 = (uint)*(ushort *)(iVar6 + 8);
  iVar1 = *(int *)(iVar6 + 0x10);
  iVar2 = *(int *)(iVar6 + 0x20);
  if (uVar9 == 0) {
    FUN_006e1e90(0,0,0);
    if (*(float *)(in_ECX + 0x1c) != -3.4028235e+38) goto LAB_006d64f1;
  }
  else {
    if ((uVar9 == 1) && (iVar1 != 4)) {
LAB_006d6525:
      FUN_006e1e90(0,0,0);
    }
    else {
      if ((iVar1 == 1) || (iVar1 == 5)) {
        bVar3 = true;
        uVar8 = 1;
        do {
          if (uVar9 <= uVar8) {
            if (bVar3) goto LAB_006d6525;
            break;
          }
          iVar5 = *(byte *)(iVar6 + 0x1c) * uVar8;
          iVar1 = iVar5 + 4 + iVar2;
          if ((((*(float *)(iVar2 + 4) != *(float *)(iVar5 + 4 + iVar2)) ||
               (*(float *)(iVar2 + 8) != *(float *)(iVar1 + 4))) ||
              (*(float *)(iVar2 + 0xc) != *(float *)(iVar1 + 8))) ||
             (*(float *)(iVar2 + 0x10) != *(float *)(iVar1 + 0xc))) {
            bVar3 = false;
          }
          uVar8 = uVar8 + 1;
        } while (bVar3);
      }
      if (*(float *)(in_ECX + 0x1c) == -3.4028235e+38) goto LAB_006d64fa;
    }
LAB_006d64f1:
    FUN_00471430();
  }
LAB_006d64fa:
  iVar6 = *(int *)(in_ECX + 0x2c);
  uVar9 = (uint)*(ushort *)(iVar6 + 0xc);
  if (uVar9 == 0) {
    FUN_006e1f60(0,0,0);
LAB_006d6589:
    if (*(float *)(in_ECX + 0x28) == -3.4028235e+38) goto LAB_006d65d8;
    local_74 = *(float *)(in_ECX + 0x28);
  }
  else {
    local_74 = *(float *)(*(int *)(iVar6 + 0x28) + 4);
    if (uVar9 != 1) {
      if ((*(int *)(iVar6 + 0x18) == 1) || (*(int *)(iVar6 + 0x18) == 5)) {
        bVar3 = true;
        uVar8 = 1;
        do {
          if (uVar9 <= uVar8) {
            if (bVar3) {
              FUN_006e1f60(0,0,0);
              goto LAB_006d65a4;
            }
            break;
          }
          if (local_74 != *(float *)(*(byte *)(iVar6 + 0x1e) * uVar8 + 4 + *(int *)(iVar6 + 0x28)))
          {
            bVar3 = false;
          }
          uVar8 = uVar8 + 1;
        } while (bVar3);
      }
      goto LAB_006d6589;
    }
    FUN_006e1f60(0,0,0);
  }
LAB_006d65a4:
  iVar6 = __isnan((double)local_74);
  if ((iVar6 == 0) && (iVar6 = FUN_00983ffd((double)local_74), iVar6 != 0)) {
    local_44 = local_74;
  }
LAB_006d65d8:
  puVar10 = *(undefined4 **)(in_ECX + 0x2c);
  if ((((*(short *)((int)puVar10 + 10) == 0) && (*(short *)(puVar10 + 2) == 0)) &&
      (*(short *)(puVar10 + 3) == 0)) && (puVar10 != (undefined4 *)0x0)) {
    LVar7 = InterlockedDecrement(puVar10 + 1);
    if ((LVar7 == 0) && (puVar10 != (undefined4 *)0x0)) {
      (**(code **)*puVar10)();
    }
    *(undefined4 *)(in_ECX + 0x2c) = 0;
  }
  puVar10 = local_60;
  puVar11 = (undefined4 *)(in_ECX + 0xc);
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  return;
}



void FUN_006d6660(int param_1,undefined4 param_2)

{
  LONG LVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  thunk_FUN_00700770(param_1,param_2);
  puVar3 = (undefined4 *)(in_ECX + 0xc);
  puVar4 = (undefined4 *)(param_1 + 0xc);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x2c);
  if (puVar3 != *(undefined4 **)(in_ECX + 0x2c)) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar1 = InterlockedDecrement(puVar3 + 1);
      if ((LVar1 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    iVar2 = *(int *)(in_ECX + 0x2c);
    *(int *)(param_1 + 0x2c) = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(in_ECX + 0x30);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(in_ECX + 0x32);
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(in_ECX + 0x34);
  return;
}



undefined4 * FUN_006d66e0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ec220();
    *puVar2 = &PTR_FUN_00a7a83c;
    puVar2[3] = DAT_00b24260;
    puVar2[4] = DAT_00b24264;
    puVar2[5] = DAT_00b24268;
    puVar2[6] = DAT_00b3cba4;
    puVar2[7] = DAT_00b3cba8;
    puVar2[8] = DAT_00b3cbac;
    puVar2[9] = DAT_00b3cbb0;
    puVar2[10] = 0xff7fffff;
    puVar2[0xb] = 0;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    *(undefined2 *)((int)puVar2 + 0x32) = 0;
    *(undefined2 *)(puVar2 + 0xd) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006d67b0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  
  thunk_FUN_007008a0(param_1);
  FUN_006cb990(param_1);
  puVar2 = (undefined4 *)FUN_00712a90();
  puVar1 = *(undefined4 **)(in_ECX + 0x2c);
  if (puVar1 != puVar2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x2c) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  return;
}



void FUN_006d68d0(byte param_1)

{
  FUN_006d5bb0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_006d68f0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ec220();
    *puVar2 = &PTR_FUN_00a7a83c;
    puVar2[3] = DAT_00b24260;
    puVar2[4] = DAT_00b24264;
    puVar2[5] = DAT_00b24268;
    puVar2[6] = DAT_00b3cba4;
    puVar2[7] = DAT_00b3cba8;
    puVar2[8] = DAT_00b3cbac;
    puVar2[9] = DAT_00b3cbb0;
    puVar2[10] = 0xff7fffff;
    puVar2[0xb] = 0;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    *(undefined2 *)((int)puVar2 + 0x32) = 0;
    *(undefined2 *)(puVar2 + 0xd) = 0;
  }
  local_4 = 0xffffffff;
  FUN_006d6660(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_006d6a40(float *param_1)

{
  float *in_ECX;
  
  if (((*(char *)(in_ECX + 7) == '\0') && (*param_1 == *in_ECX)) && (param_1[1] == in_ECX[1])) {
    *(undefined1 *)(in_ECX + 7) = 0;
    *in_ECX = *param_1;
    in_ECX[1] = param_1[1];
    return;
  }
  *(undefined1 *)(in_ECX + 7) = 1;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}



void FUN_006d6a90(float param_1)

{
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x1c) == '\0') && (param_1 == *(float *)(in_ECX + 8))) {
    *(float *)(in_ECX + 8) = param_1;
    *(undefined1 *)(in_ECX + 0x1c) = 0;
    return;
  }
  *(float *)(in_ECX + 8) = param_1;
  *(undefined1 *)(in_ECX + 0x1c) = 1;
  return;
}



void FUN_006d6ad0(float *param_1)

{
  int in_ECX;
  
  if (((*(char *)(in_ECX + 0x1c) == '\0') && (*param_1 == *(float *)(in_ECX + 0xc))) &&
     (param_1[1] == *(float *)(in_ECX + 0x10))) {
    *(undefined1 *)(in_ECX + 0x1c) = 0;
    *(float *)(in_ECX + 0xc) = *param_1;
    *(float *)(in_ECX + 0x10) = param_1[1];
    return;
  }
  *(undefined1 *)(in_ECX + 0x1c) = 1;
  *(float *)(in_ECX + 0xc) = *param_1;
  *(float *)(in_ECX + 0x10) = param_1[1];
  return;
}



int FUN_006d6b20(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x54);
  if (iVar2 == 0) {
    uVar1 = FUN_00401f00(0x32);
    *(undefined4 *)(in_ECX + 0x54) = uVar1;
    switch(*(undefined4 *)(in_ECX + 0x50)) {
    case 0:
      FUN_006c5d40(uVar1,0x32,"%d-%d-TT_TRANSLATE_U",*(undefined1 *)(in_ECX + 0x48),
                   *(undefined4 *)(in_ECX + 0x4c));
      return *(int *)(in_ECX + 0x54);
    case 1:
      FUN_006c5d40(uVar1,0x32,"%d-%d-TT_TRANSLATE_V",*(undefined1 *)(in_ECX + 0x48),
                   *(undefined4 *)(in_ECX + 0x4c));
      return *(int *)(in_ECX + 0x54);
    case 2:
      FUN_006c5d40(uVar1,0x32,"%d-%d-TT_ROTATE",*(undefined1 *)(in_ECX + 0x48),
                   *(undefined4 *)(in_ECX + 0x4c));
      return *(int *)(in_ECX + 0x54);
    case 3:
      FUN_006c5d40(uVar1,0x32,"%d-%d-TT_SCALE_U",*(undefined1 *)(in_ECX + 0x48),
                   *(undefined4 *)(in_ECX + 0x4c));
      return *(int *)(in_ECX + 0x54);
    case 4:
      FUN_006c5d40(uVar1,0x32,"%d-%d-TT_SCALE_V",*(undefined1 *)(in_ECX + 0x48),
                   *(undefined4 *)(in_ECX + 0x4c));
    }
    iVar2 = *(int *)(in_ECX + 0x54);
  }
  return iVar2;
}



bool FUN_006d6c80(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x44) != 0) {
    return true;
  }
  iVar1 = *(int *)(in_ECX + 0x30);
  if (iVar1 == 0) {
    return false;
  }
  uVar2 = *(uint *)(in_ECX + 0x4c);
  if (*(char *)(in_ECX + 0x48) == '\0') {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + uVar2 * 4);
    *(int *)(in_ECX + 0x44) = iVar1;
    return iVar1 != 0;
  }
  iVar1 = *(int *)(iVar1 + 0x2c);
  if ((iVar1 != 0) && (uVar2 < *(ushort *)(iVar1 + 10))) {
    iVar1 = *(int *)(*(int *)(iVar1 + 4) + uVar2 * 4);
    *(int *)(in_ECX + 0x44) = iVar1;
    return iVar1 != 0;
  }
  *(undefined4 *)(in_ECX + 0x44) = 0;
  return false;
}



void FUN_006d6ce0(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c7b4b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*(byte *)(in_ECX + 8) >> 5 & 1) == 0) {
    cVar1 = FUN_006c36b0(param_1);
    if ((cVar1 != '\0') &&
       ((*(int **)(in_ECX + 0x3c) == (int *)0x0 ||
        (cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x94))(), cVar1 == '\0'))))
    goto switchD_006d6dfc_default;
  }
  else {
    *(undefined4 *)(in_ECX + 0x28) = 0xff7fffff;
  }
  if (((*(int **)(in_ECX + 0x3c) != (int *)0x0) &&
      (cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x5c))
                         (*(undefined4 *)(in_ECX + 0x28),*(undefined4 *)(in_ECX + 0x30),&param_1,
                          uVar2), cVar1 != '\0')) && (cVar1 = FUN_006d6c80(), cVar1 != '\0')) {
    piVar3 = *(int **)(*(int *)(in_ECX + 0x44) + 0xc);
    if (piVar3 == (int *)0x0) {
      iStack_2c = FUN_00401f00(0x48);
      uStack_4 = 0;
      if (iStack_2c == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        uStack_24 = 0x3f000000;
        uStack_20 = 0x3f000000;
        uStack_1c = 0x3f800000;
        uStack_18 = 0x3f800000;
        uStack_14 = 0;
        uStack_10 = 0;
        piVar3 = (int *)FUN_0072ff40(&uStack_14,0,&uStack_1c,&uStack_24,0);
      }
      *(int **)(*(int *)(in_ECX + 0x44) + 0xc) = piVar3;
    }
    switch(*(undefined4 *)(in_ECX + 0x50)) {
    case 0:
      iStack_28 = piVar3[1];
      iStack_2c = param_1;
      FUN_006d6a40(&iStack_2c);
      *unaff_FS_OFFSET = local_c;
      return;
    case 1:
      iStack_2c = *piVar3;
      iStack_28 = param_1;
      FUN_006d6a40(&iStack_2c);
      *unaff_FS_OFFSET = local_c;
      return;
    case 2:
      FUN_006d6a90(param_1);
      *unaff_FS_OFFSET = local_c;
      return;
    case 3:
      iStack_28 = piVar3[4];
      iStack_2c = param_1;
      break;
    case 4:
      iStack_2c = piVar3[3];
      iStack_28 = param_1;
      break;
    default:
      goto switchD_006d6dfc_default;
    }
    FUN_006d6ad0(&iStack_2c);
  }
switchD_006d6dfc_default:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d6ef0(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int in_ECX;
  
  cVar2 = FUN_006d6c80();
  if (cVar2 != '\0') {
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x44) + 0xc);
    if (puVar1 == (undefined4 *)0x0) {
      *param_1 = 0;
      return;
    }
    switch(*(undefined4 *)(in_ECX + 0x50)) {
    case 0:
      *param_1 = *puVar1;
      return;
    case 1:
      *param_1 = puVar1[1];
      return;
    case 2:
      *param_1 = puVar1[2];
      return;
    case 3:
      *param_1 = puVar1[3];
      return;
    case 4:
      *param_1 = puVar1[4];
    }
  }
  return;
}



void FUN_006d6fe0(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar1 = param_1;
  thunk_FUN_006ce320(param_1);
  local_8 = 1;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,1,&local_8,1);
  *(bool *)(in_ECX + 0x48) = (char)param_1 != '\0';
  local_8 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x4c,4,&local_8,1);
  local_8 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&uStack_4,4,&local_8,1);
  *(undefined4 *)(in_ECX + 0x50) = uStack_4;
  if (*(uint *)(iVar1 + 0xd8) < 0xa010068) {
    FUN_00712a20();
  }
  return;
}



void FUN_006d7120(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_ECX;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7b78;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006ec180(uVar2);
  uVar2 = 0;
  in_ECX[0x14] = param_3;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a7a95c;
  in_ECX[0x15] = 0;
  in_ECX[0x10] = 0;
  *(undefined1 *)(in_ECX + 0x12) = 0;
  in_ECX[0x13] = 0;
  if (in_ECX[0xc] != param_1) {
    in_ECX[0x11] = 0;
  }
  FUN_00715ce0(param_1);
  in_ECX[0x11] = param_2;
  if (param_2 == 0) {
    FUN_00401f20(in_ECX[0x15]);
    in_ECX[0x15] = 0;
  }
  else {
    iVar1 = in_ECX[0xc];
    if (iVar1 != 0) {
      uVar3 = 0;
      if (*(ushort *)(iVar1 + 0x26) != 0) {
        piVar5 = *(int **)(iVar1 + 0x20);
        do {
          if (*piVar5 == param_2) {
            *(undefined1 *)(in_ECX + 0x12) = 0;
            in_ECX[0x13] = uVar3;
            FUN_00401f20(in_ECX[0x15]);
            in_ECX[0x15] = 0;
            goto LAB_006d722f;
          }
          uVar3 = uVar3 + 1;
          piVar5 = piVar5 + 1;
        } while (uVar3 < *(ushort *)(iVar1 + 0x26));
      }
      iVar4 = FUN_006d1950();
      if (iVar4 != 0) {
        iVar1 = *(int *)(iVar1 + 0x2c);
        do {
          if ((iVar1 == 0) || (*(ushort *)(iVar1 + 10) <= uVar2)) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(*(int *)(iVar1 + 4) + uVar2 * 4);
          }
          if (iVar4 == param_2) {
            *(undefined1 *)(in_ECX + 0x12) = 1;
            in_ECX[0x13] = uVar2;
            FUN_00401f20(in_ECX[0x15]);
            in_ECX[0x15] = 0;
            break;
          }
          uVar2 = uVar2 + 1;
          uVar3 = FUN_006d1950();
        } while (uVar2 < uVar3);
      }
    }
  }
LAB_006d722f:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d7250(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7a95c;
  FUN_00401f20(in_ECX[0x15]);
  in_ECX[0x15] = 0;
  FUN_006c3a40();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_006d7290(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x58,uVar1);
  iVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_006d7120(0,0,0);
  }
  local_4 = 0xffffffff;
  thunk_FUN_006ce2c0(iVar3,param_1);
  *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(in_ECX + 0x40);
  *(undefined1 *)(iVar3 + 0x48) = *(undefined1 *)(in_ECX + 0x48);
  *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(in_ECX + 0x4c);
  *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(in_ECX + 0x50);
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



undefined4 FUN_006d7320(void)

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
  local_10 = FUN_00401f00(0x58,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006d7120(0,0,0);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006d7390(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ec1d0(param_1);
  param_1 = FUN_0070f910(DAT_00b3d9b4);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006d73e0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  return;
}



undefined4 FUN_006d73f0(float *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  float *in_ECX;
  byte *pbVar4;
  bool bVar5;
  
  if (*param_1 == *in_ECX) {
    pbVar4 = (byte *)param_1[1];
    pbVar2 = (byte *)in_ECX[1];
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_006d7427:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_006d742c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_006d7427;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_006d742c:
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}



undefined4 * FUN_006d7450(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00721350();
    *puVar2 = &PTR_FUN_00a7aa0c;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 FUN_006d74d0(int param_1)

{
  uint uVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    cVar2 = FUN_00700670(param_1);
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(in_ECX + 0xc);
      if (uVar1 != *(uint *)(param_1 + 0xc)) {
        return 0;
      }
      uVar5 = 0;
      if (uVar1 != 0) {
        iVar4 = *(int *)(in_ECX + 0x10);
        iVar3 = *(int *)(param_1 + 0x10) - iVar4;
        do {
          cVar2 = FUN_006d73f0(iVar4 + iVar3);
          if (cVar2 != '\0') {
            return 0;
          }
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + 8;
        } while (uVar5 < uVar1);
      }
      return 1;
    }
  }
  return 0;
}



void FUN_006d7540(void)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7e18;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7aa0c;
  pvVar1 = (void *)in_ECX[4];
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,8,*(int *)((int)pvVar1 + -4),FUN_006ec6b0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  local_4 = 0xffffffff;
  FUN_00721410(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d75c0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int *in_ECX;
  uint uVar5;
  uint *puVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009afb5b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007214a0(param_1,param_2);
  puVar6 = (uint *)0x0;
  *(int *)(param_1 + 0xc) = in_ECX[3];
  if ((in_ECX[3] == 0) ||
     (puVar3 = (undefined4 *)(**(code **)(*in_ECX + 4))(uVar2), puVar3 != &DAT_00b3da08)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar2 = in_ECX[3];
    uVar5 = -(uint)((int)((ulonglong)uVar2 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 8);
    puVar4 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
    uStack_4 = 0;
    if (puVar4 != (uint *)0x0) {
      puVar6 = puVar4 + 1;
      *puVar4 = uVar2;
      _eh_vector_constructor_iterator_(puVar6,8,uVar2,FUN_006d73e0,FUN_006ec6b0);
    }
    uVar2 = 0;
    *(uint **)(param_1 + 0x10) = puVar6;
    uStack_4 = 0xffffffff;
    if (in_ECX[3] != 0) {
      do {
        iVar1 = uVar2 * 8;
        *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x10)) = *(undefined4 *)(iVar1 + in_ECX[4]);
        FUN_006ec6c0(*(undefined4 *)(in_ECX[4] + 4 + iVar1));
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)in_ECX[3]);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d76d0(byte param_1)

{
  FUN_006d7540();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_006d76f0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00721350();
    *puVar2 = &PTR_FUN_00a7aa0c;
    puVar2[3] = 0;
    puVar2[4] = 0;
  }
  local_4 = 0xffffffff;
  FUN_006d75c0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_006d7780(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int in_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  uint *puStack_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar2 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b520b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00721610(param_1);
  iVar1 = *(int *)(uVar2 + 0x21c);
  local_10 = 4;
  (**(code **)(iVar1 + 4))(iVar1,&param_1,4,&local_10,1,uVar3);
  uVar3 = param_1;
  if (param_1 != 0) {
    uVar5 = -(uint)((int)((ulonglong)param_1 * 8 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 8);
    puVar4 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
    uStack_4 = 0;
    if (puVar4 == (uint *)0x0) {
      puStack_14 = (uint *)0x0;
    }
    else {
      puStack_14 = puVar4 + 1;
      *puVar4 = uVar3;
      _eh_vector_constructor_iterator_(puStack_14,8,uVar3,FUN_006d73e0,FUN_006ec6b0);
    }
    uVar3 = 0;
    uStack_4 = 0xffffffff;
    if (param_1 != 0) {
      do {
        FUN_006ec720(uVar2);
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_1);
    }
    *(uint *)(in_ECX + 0xc) = param_1;
    *(uint **)(in_ECX + 0x10) = puStack_14;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d78f0(uint param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int in_ECX;
  uint uVar10;
  
  iVar3 = param_1;
  FUN_00721730(param_1);
  param_1 = FUN_0070f910(DAT_00b3da08);
  uVar10 = (uint)*(ushort *)(iVar3 + 10);
  if (*(ushort *)(iVar3 + 8) <= uVar10) {
    FUN_004e4a10(*(ushort *)(iVar3 + 0xe) + uVar10);
  }
  FUN_0042bb90(uVar10,&param_1);
  param_1 = FUN_0070fb40("m_uiNumKeys",*(undefined4 *)(in_ECX + 0xc));
  uVar10 = (uint)*(ushort *)(iVar3 + 10);
  if (*(ushort *)(iVar3 + 8) <= uVar10) {
    FUN_004e4a10(*(ushort *)(iVar3 + 0xe) + uVar10);
  }
  FUN_0042bb90(uVar10,&param_1);
  param_1 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    do {
      uVar10 = param_1;
      pcVar4 = (char *)FUN_0070fb90(&DAT_00a7aa78,
                                    *(undefined4 *)(*(int *)(in_ECX + 0x10) + param_1 * 8));
      pcVar5 = (char *)FUN_0070fc30(&DAT_00a7aa70,
                                    *(undefined4 *)(*(int *)(in_ECX + 0x10) + 4 + uVar10 * 8));
      pcVar6 = pcVar4;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar7 = pcVar5;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar8 = FUN_00401f00(pcVar6 + (int)(pcVar7 + ((4 - (int)(pcVar5 + 1)) - (int)(pcVar4 + 1))));
      FUN_006c5d40(uVar8,pcVar6 + (int)(pcVar7 + ((4 - (int)(pcVar5 + 1)) - (int)(pcVar4 + 1))),
                   "%s : %s",pcVar4,pcVar5);
      iVar9 = FUN_0070fc30("TextKey",uVar8);
      uVar2 = *(ushort *)(iVar3 + 10);
      uVar10 = (uint)uVar2;
      if (*(ushort *)(iVar3 + 8) <= uVar10) {
        FUN_004e4a10(*(ushort *)(iVar3 + 0xe) + uVar10);
      }
      if (uVar10 < *(ushort *)(iVar3 + 10)) {
        if (iVar9 == 0) {
          if (*(int *)(*(int *)(iVar3 + 4) + uVar10 * 4) != 0) {
            *(short *)(iVar3 + 0xc) = *(short *)(iVar3 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(iVar3 + 4) + uVar10 * 4) == 0) {
          *(short *)(iVar3 + 0xc) = *(short *)(iVar3 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(iVar3 + 10) = uVar2 + 1;
        if (iVar9 != 0) {
          *(short *)(iVar3 + 0xc) = *(short *)(iVar3 + 0xc) + 1;
        }
      }
      *(int *)(*(int *)(iVar3 + 4) + uVar10 * 4) = iVar9;
      FUN_00401f20(pcVar4);
      FUN_00401f20(pcVar5);
      FUN_00401f20(uVar8);
      param_1 = param_1 + 1;
    } while (param_1 < *(uint *)(in_ECX + 0xc));
  }
  return;
}



undefined4 * FUN_006d7ad0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a79934;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006d7c20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x21c);
  param_1 = 1;
  (**(code **)(*piVar1 + 4))(*piVar1,param_2,param_3,&param_1,1);
  return;
}



void FUN_006d7cf0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_007008a0(param_1);
  piVar1 = (int *)(in_ECX + 0xc);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),piVar1,4,&param_1,1);
  if (*piVar1 != 0) {
    uVar3 = FUN_00401f00(*piVar1);
    *(undefined4 *)(in_ECX + 8) = uVar3;
    param_1 = 1;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),uVar3,*piVar1,&param_1,1);
  }
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x10,4,&param_1,1);
  return;
}



undefined4 * FUN_006d7d90(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ffd30();
    *puVar2 = &PTR_FUN_00a7aa94;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void thunk_FUN_00700050(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int in_ECX;
  
  FUN_0068f970(param_1);
  if (*(uint *)(param_1 + 0xd8) < 0x500000b) {
    uVar2 = FUN_007124a0();
    *(undefined4 *)(in_ECX + 0x10) = uVar2;
  }
  else {
    iVar3 = FUN_007124d0();
    FUN_006ff760(iVar3);
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar2 = FUN_007124a0();
      FUN_006ff8a0(uVar2);
    }
  }
  puVar4 = (undefined4 *)FUN_007124a0();
  puVar1 = *(undefined4 **)(in_ECX + 0xc);
  if (puVar1 != puVar4) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 **)(in_ECX + 0xc) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  return;
}



undefined4 thunk_FUN_00700200(int param_1)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  byte *pbVar8;
  ushort uVar9;
  bool bVar10;
  
  cVar3 = FUN_00700670(param_1);
  if (cVar3 == '\0') {
    return 0;
  }
  pbVar4 = *(byte **)(in_ECX + 8);
  if (pbVar4 == (byte *)0x0) {
LAB_0070022a:
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    if (pbVar4 == (byte *)0x0) goto LAB_00700260;
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      return 0;
    }
    if (pbVar4 == (byte *)0x0) goto LAB_0070022a;
  }
  pbVar8 = *(byte **)(param_1 + 8);
  do {
    bVar1 = *pbVar4;
    bVar10 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_00700257:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_0070025c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar10 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_00700257;
    pbVar4 = pbVar4 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_0070025c:
  if (iVar5 != 0) {
    return 0;
  }
LAB_00700260:
  if (*(short *)(in_ECX + 0x14) != *(short *)(param_1 + 0x14)) {
    return 0;
  }
  uVar9 = 0;
  if (*(short *)(in_ECX + 0x14) != 0) {
    do {
      cVar3 = (**(code **)(**(int **)((uint)uVar9 * 4 + *(int *)(in_ECX + 0x10)) + 0x2c))
                        (*(undefined4 *)((uint)uVar9 * 4 + *(int *)(param_1 + 0x10)));
      if (cVar3 == '\0') {
        return 0;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(ushort *)(in_ECX + 0x14));
  }
  piVar2 = *(int **)(in_ECX + 0xc);
  iVar5 = *(int *)(param_1 + 0xc);
  if (piVar2 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_00715b20();
  }
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00715b20();
  }
  if (iVar6 == iVar7) {
    while( true ) {
      if ((piVar2 == (int *)0x0) || (iVar5 == 0)) {
        return 1;
      }
      cVar3 = (**(code **)(*piVar2 + 0x2c))(iVar5);
      if (cVar3 == '\0') break;
      piVar2 = (int *)piVar2[0xd];
      iVar5 = *(int *)(iVar5 + 0x34);
    }
  }
  return 0;
}



void FUN_006d7e10(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *_Dst;
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 8));
  *(undefined4 *)(in_ECX + 8) = 0;
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    _Dst = (char *)FUN_00401f00(pcVar2 + (1 - (int)(param_1 + 1)));
    *(char **)(in_ECX + 8) = _Dst;
    _strcpy_s(_Dst,(rsize_t)(pcVar2 + (1 - (int)(param_1 + 1))),param_1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d7e90(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  
  if ((_DAT_00b3daec & 1) == 0) {
    _DAT_00b3daec = _DAT_00b3daec | 1;
    DAT_00b3dae8 = 0;
    _atexit(FUN_00a26860);
  }
  if (param_1 < *(ushort *)(in_ECX + 10)) {
    if (*param_2 == DAT_00b3dae8) {
      if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) != DAT_00b3dae8) {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) == DAT_00b3dae8) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  else {
    *(short *)(in_ECX + 10) = (short)param_1 + 1;
    if (*param_2 != DAT_00b3dae8) {
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



int * FUN_006d7f60(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  uVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7bc9;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 < *(ushort *)(in_ECX + 10)) {
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 4) + param_2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
    param_2 = 0;
    local_4 = 2;
    FUN_0055e2a0(&param_2);
    if (puVar1 != (undefined4 *)0x0) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
    }
    if (uVar2 == *(ushort *)(in_ECX + 10) - 1) {
      *(ushort *)(in_ECX + 10) = *(ushort *)(in_ECX + 10) - 1;
    }
    *param_1 = (int)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
    local_4 = local_4 & 0xffffff00;
    if ((puVar1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar1 + 1), LVar4 == 0)) {
      (**(code **)*puVar1)(1,uVar3);
    }
  }
  else {
    *param_1 = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_006d8070(byte param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  pvVar1 = (void *)in_ECX[1];
  *in_ECX = &PTR_FUN_00a7aae4;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006d80c0(char *param_1,undefined4 param_2,undefined2 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  char *_Dst;
  LONG LVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7c19;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar3);
  *in_ECX = &PTR_FUN_00a7aaec;
  in_ECX[3] = &PTR__scalar_deleting_destructor__00a38fb4;
  *(undefined2 *)(in_ECX + 5) = 0;
  *(undefined2 *)((int)in_ECX + 0x1a) = 1;
  *(undefined2 *)((int)in_ECX + 0x16) = 0;
  *(undefined2 *)(in_ECX + 6) = 0;
  in_ECX[4] = 0;
  in_ECX[7] = &PTR_FUN_00a7aae4;
  *(undefined2 *)(in_ECX + 9) = 0;
  *(undefined2 *)((int)in_ECX + 0x2a) = 1;
  *(undefined2 *)((int)in_ECX + 0x26) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  in_ECX[8] = 0;
  in_ECX[0xb] = 0;
  local_4 = 4;
  if (param_1 == (char *)0x0) {
    in_ECX[2] = 0;
  }
  else {
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    _Dst = (char *)FUN_00401f00(pcVar4 + (1 - (int)(param_1 + 1)));
    in_ECX[2] = _Dst;
    _strcpy_s(_Dst,(rsize_t)(pcVar4 + (1 - (int)(param_1 + 1))),param_1);
  }
  FUN_004e4a10(param_2);
  *(undefined2 *)((int)in_ECX + 0x1a) = param_3;
  FUN_006c4510(param_2);
  *(undefined2 *)((int)in_ECX + 0x2a) = param_3;
  puVar2 = (undefined4 *)in_ECX[0xb];
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 1);
    if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0xb] = 0;
  }
  in_ECX[0xc] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d8200(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  int *piVar4;
  LONG LVar5;
  int iVar6;
  undefined4 *in_ECX;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined4 *local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7c71;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7aaec;
  local_4 = 3;
  FUN_00401f20(in_ECX[2],uVar3);
  uVar7 = 0;
  if (*(short *)((int)in_ECX + 0x26) != 0) {
    do {
      piVar4 = (int *)FUN_006d7f60(local_14,uVar7);
      puVar1 = (undefined4 *)*piVar4;
      local_4._0_1_ = 4;
      if (puVar1 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(puVar1 + 1);
        if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        *piVar4 = 0;
      }
      puVar1 = local_14[0];
      local_4 = CONCAT31(local_4._1_3_,3);
      if (((local_14[0] != (undefined4 *)0x0) &&
          (LVar5 = InterlockedDecrement(local_14[0] + 1), LVar5 == 0)) &&
         (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      if (uVar7 < *(ushort *)((int)in_ECX + 0x16)) {
        iVar6 = *(int *)(in_ECX[4] + uVar7 * 4);
        *(undefined4 *)(in_ECX[4] + uVar7 * 4) = 0;
        if (iVar6 != 0) {
          *(short *)(in_ECX + 6) = *(short *)(in_ECX + 6) + -1;
        }
        if (uVar7 == *(ushort *)((int)in_ECX + 0x16) - 1) {
          *(ushort *)((int)in_ECX + 0x16) = *(ushort *)((int)in_ECX + 0x16) - 1;
        }
      }
      else {
        iVar6 = 0;
      }
      FUN_00401f20(iVar6);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ushort *)((int)in_ECX + 0x26));
  }
  puVar1 = (undefined4 *)in_ECX[0xb];
  local_4._0_1_ = 2;
  if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  pvVar2 = (void *)in_ECX[8];
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[7] = &PTR_FUN_00a7aae4;
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar2,4,*(int *)((int)pvVar2 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar2 + -4,uVar3);
  }
  in_ECX[3] = &PTR__scalar_deleting_destructor__00a38fb4;
  FUN_00401f20(in_ECX[4],uVar3);
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_006d83a0(char *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char cVar2;
  char *_Src;
  undefined4 *puVar3;
  uint uVar4;
  char *pcVar5;
  LONG LVar6;
  int in_ECX;
  uint uVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  _Src = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf808;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar7 = (uint)*(ushort *)(in_ECX + 0x16);
  pcVar1 = param_1 + 1;
  pcVar5 = param_1;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  param_1 = (char *)FUN_00401f00(pcVar5 + (1 - (int)pcVar1),uVar4);
  _strcpy_s(param_1,(rsize_t)(pcVar5 + (1 - (int)pcVar1)),_Src);
  if (*(ushort *)(in_ECX + 0x14) <= uVar7) {
    FUN_004e4a10(*(ushort *)(in_ECX + 0x1a) + uVar7);
  }
  FUN_0042bb90(uVar7,&param_1);
  puVar3 = param_2;
  param_1 = (char *)param_2;
  if (param_2 != (undefined4 *)0x0) {
    InterlockedIncrement(param_2 + 1);
  }
  local_4 = 0;
  if (*(ushort *)(in_ECX + 0x24) <= uVar7) {
    FUN_006c4510(*(ushort *)(in_ECX + 0x2a) + uVar7);
  }
  FUN_006d7e90(uVar7,&param_1);
  local_4 = 0xffffffff;
  if (puVar3 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar3 + 1);
    if (LVar6 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return uVar7;
}



undefined4 FUN_006d84a0(void)

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
  local_10 = FUN_00401f00(0x34,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006d80c0(0,0xc,0xc);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006d8610(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c7c98;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puStack_10 = in_ECX;
  FUN_0068f970(param_1);
  puVar2 = (undefined4 *)FUN_007124a0(uVar1);
  puVar4 = (undefined4 *)in_ECX[0xb];
  if (puVar4 != puVar2) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar4 + 1);
      if ((LVar3 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    in_ECX[0xb] = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  uVar1 = (uint)*(ushort *)((int)in_ECX + 0x16);
  FUN_006c4510(uVar1);
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      puVar4 = (undefined4 *)FUN_007124a0();
      puStack_10 = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar4 + 1);
      }
      uStack_4 = 0;
      FUN_006d7e90(uVar5,&puStack_10);
      uStack_4 = 0xffffffff;
      if (puVar4 != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(puVar4 + 1);
        if (LVar3 == 0) {
          (**(code **)*puVar4)(1);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d8710(byte param_1)

{
  FUN_006d8200();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_006d8730(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *piVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  uint local_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7cdb;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((0x4010002 < *(uint *)(param_1 + 0xd8)) || (*(uint *)(param_1 + 0x210) <= param_2)) ||
     (iVar4 = FUN_00560920(&DAT_00b3daa8,*(undefined4 *)(*(int *)(param_1 + 0x208) + param_2 * 4),
                           uVar3), iVar4 == 0)) {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  if (param_3 == 0) {
    param_3 = *(int *)(iVar4 + 8);
  }
  iVar5 = FUN_00401f00(0x34);
  local_4 = 0;
  if (iVar5 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = FUN_006d80c0(param_3,0xc,0xc);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar9 = 0;
  local_4 = 0xffffffff;
  if (*(short *)(iVar4 + 0x14) != 0) {
    do {
      iVar5 = FUN_00560920(&DAT_00b3da08,
                           *(undefined4 *)(*(int *)(iVar4 + 0x10) + (uVar9 & 0xffff) * 4),uVar3);
      if (iVar5 != 0) {
        FUN_006d5ad0(iVar5);
        FUN_006ffbe0(uVar9);
        break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(ushort *)(iVar4 + 0x14));
  }
  piVar8 = *(int **)(iVar4 + 0xc);
  if (piVar8 != (int *)0x0) {
    InterlockedIncrement(piVar8 + 1);
  }
  local_4 = 1;
  local_18 = 0;
  if (*(short *)(iVar4 + 0x14) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(iVar4 + 0x10) + (local_18 & 0xffff) * 4);
      uVar3 = 0;
      if (piVar1 != (int *)0x0) {
        for (puVar6 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar6 != (undefined4 *)0x0;
            puVar6 = (undefined4 *)puVar6[1]) {
          if (puVar6 == &DAT_00b3fcc0) {
            bVar2 = 1;
            goto LAB_006d88a0;
          }
        }
        bVar2 = 0;
LAB_006d88a0:
        uVar3 = -(uint)bVar2 & (uint)piVar1;
      }
      if (piVar8 == (int *)0x0) {
        uVar9 = 0;
      }
      else {
        for (puVar6 = (undefined4 *)(**(code **)(*piVar8 + 4))(); puVar6 != (undefined4 *)0x0;
            puVar6 = (undefined4 *)puVar6[1]) {
          if (puVar6 == &DAT_00b3ca58) {
            bVar2 = 1;
            goto LAB_006d88d6;
          }
        }
        bVar2 = 0;
LAB_006d88d6:
        uVar9 = -(uint)bVar2 & (uint)piVar8;
      }
      FUN_006d83a0(*(undefined4 *)(uVar3 + 0xc),uVar9);
      piVar1 = (int *)piVar8[0xd];
      if (piVar1 != (int *)0x0) {
        InterlockedIncrement(piVar1 + 1);
      }
      puVar6 = (undefined4 *)piVar8[0xd];
      local_4 = CONCAT31(local_4._1_3_,2);
      if (puVar6 != (undefined4 *)0x0) {
        LVar7 = InterlockedDecrement(puVar6 + 1);
        if ((LVar7 == 0) && (puVar6 != (undefined4 *)0x0)) {
          (**(code **)*puVar6)(1);
        }
        piVar8[0xd] = 0;
      }
      if (piVar8 != piVar1) {
        LVar7 = InterlockedDecrement(piVar8 + 1);
        if (LVar7 == 0) {
          (**(code **)*piVar8)(1);
        }
        piVar8 = piVar1;
        if (piVar1 != (int *)0x0) {
          InterlockedIncrement(piVar1 + 1);
        }
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      if ((piVar1 != (int *)0x0) && (LVar7 = InterlockedDecrement(piVar1 + 1), LVar7 == 0)) {
        (**(code **)*piVar1)(1);
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(ushort *)(iVar4 + 0x14));
  }
  FUN_006ffc60();
  local_4 = 0xffffffff;
  if ((piVar8 != (int *)0x0) && (LVar7 = InterlockedDecrement(piVar8 + 1), LVar7 == 0)) {
    (**(code **)*piVar8)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x006d8acd) */
/* WARNING: Removing unreachable block (ram,0x006d8adb) */

undefined4 * FUN_006d89f0(undefined4 *param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c7d21;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  if (*(uint *)(param_2 + 0xd8) < 0x4010003) {
    puVar2 = (undefined4 *)FUN_006d8730(param_2,param_3,param_4);
    if (puVar2 == (undefined4 *)0x0) goto LAB_006d8ab6;
    InterlockedIncrement(puVar2 + 1);
  }
  else {
    if (*(uint *)(param_2 + 0x210) <= param_3) {
      *param_1 = 0;
      *unaff_FS_OFFSET = local_c;
      return param_1;
    }
    uVar3 = FUN_00560920(&DAT_00b3db20,*(undefined4 *)(*(int *)(param_2 + 0x208) + param_3 * 4),
                         uVar1);
    FUN_0075fa90(uVar3);
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (param_4 != 0) {
      FUN_006d7e10(param_4);
    }
    *param_1 = puVar2;
    InterlockedIncrement(puVar2 + 1);
    local_4 = local_4 & 0xffffff00;
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if (LVar4 == 0) {
      (**(code **)*puVar2)(1);
    }
    *unaff_FS_OFFSET = local_c;
    return param_1;
  }
LAB_006d8ab6:
  *param_1 = 0;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_006d8b50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 local_4a0;
  undefined4 *local_49c;
  undefined1 local_498 [1160];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7d6d;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_4a0;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffb54;
  *unaff_FS_OFFSET = (int)&local_c;
  local_49c = param_1;
  local_4a0 = 0;
  FUN_00713a30(uVar2);
  local_4 = 1;
  cVar1 = FUN_00711fc0(param_2);
  if (cVar1 == '\0') {
    *param_1 = 0;
  }
  else {
    FUN_006d89f0(param_1,local_498,param_3,param_4);
  }
  local_4a0 = 1;
  local_4 = local_4 & 0xffffff00;
  FUN_00713c60();
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_006d8c40(void)

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
  *in_ECX = &PTR_FUN_00a7ab3c;
  local_4 = 0;
  if (in_ECX[3] != 0) {
    (**(code **)(&DAT_00b3d2f8 + in_ECX[4] * 4))(in_ECX[3],uVar1);
  }
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d8cb0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(in_ECX + 0xc);
  FUN_006d3540(1,*(undefined4 *)(in_ECX + 0x10),&local_4,in_ECX + 8,param_1,param_2);
  *(undefined4 *)(in_ECX + 0xc) = local_4;
  return;
}



undefined4 * FUN_006d8cf0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a7ab3c;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 FUN_006d8d70(int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  
  cVar2 = FUN_00700670(param_1);
  if ((((cVar2 != '\0') && (*(int *)(in_ECX + 8) == *(int *)(param_1 + 8))) &&
      (*(int *)(in_ECX + 0x10) == *(int *)(param_1 + 0x10))) &&
     (*(char *)(in_ECX + 0x14) == *(char *)(param_1 + 0x14))) {
    pcVar1 = *(code **)(&DAT_00b3d4d0 + *(int *)(in_ECX + 0x10) * 4);
    uVar4 = 0;
    if (*(int *)(in_ECX + 8) != 0) {
      do {
        iVar3 = *(byte *)(in_ECX + 0x14) * uVar4;
        cVar2 = (*pcVar1)(*(int *)(in_ECX + 0xc) + iVar3,*(int *)(param_1 + 0xc) + iVar3);
        if (cVar2 == '\0') {
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(in_ECX + 8));
    }
    return 1;
  }
  return 0;
}



void FUN_006d8df0(byte param_1)

{
  FUN_006d8c40();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006d8e10(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    (**(code **)(&DAT_00b3d2f8 + *(int *)(in_ECX + 0x10) * 4))(*(int *)(in_ECX + 0xc));
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = (&DAT_00b3d3f4)[param_3];
    *(int *)(in_ECX + 0xc) = param_1;
    *(undefined1 *)(in_ECX + 0x14) = uVar1;
    *(int *)(in_ECX + 8) = param_2;
    *(int *)(in_ECX + 0x10) = param_3;
    return;
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined1 *)(in_ECX + 0x14) = 0;
  return;
}



int * FUN_006d8e70(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8139;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  local_14 = 0;
  piVar3 = (int *)FUN_00700790(&local_10);
  iVar1 = *piVar3;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  local_4 = 0;
  local_14 = 1;
  if (local_10 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(local_10 + 1);
    if ((LVar4 == 0) && (local_10 != (undefined4 *)0x0)) {
      (**(code **)*local_10)(1,uVar2);
    }
  }
  if (*(int *)(in_ECX + 8) != 0) {
    local_18 = 0;
    local_1c = 0;
    FUN_006d3210(2,*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0xc),*(int *)(in_ECX + 8)
                 ,param_2,param_3,&local_18,&local_1c);
    FUN_006d8e10(local_18,local_1c,*(undefined4 *)(in_ECX + 0x10));
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_006d9010(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_0068f970(param_1);
  piVar1 = (int *)(in_ECX + 8);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),piVar1,4,&param_1,1);
  if (*piVar1 != 0) {
    param_1 = 4;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))
              (*(int *)(iVar2 + 0x220),(int *)(in_ECX + 0x10),4,&param_1,1);
    (**(code **)(&DAT_00b3d5f0 + *(int *)(in_ECX + 0x10) * 4))
              (iVar2,*(undefined4 *)(in_ECX + 0xc),*piVar1);
  }
  return;
}



void FUN_006d9180(byte param_1)

{
  FUN_006ec810();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006d91b0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  undefined4 local_6c [9];
  undefined1 local_48 [36];
  undefined1 local_24 [36];
  
  if ((*(int *)(in_ECX + 0x30) != 0) && (cVar1 = FUN_006c36b0(param_1), cVar1 == '\0')) {
    uVar2 = FUN_006ec8c0(&local_78,&local_74,&local_7c);
    fVar6 = (float10)FUN_006bb270(*(undefined4 *)(in_ECX + 0x28),uVar2,local_74,local_78,
                                  in_ECX + 0x3c,local_7c);
    local_70 = (float)fVar6;
    puVar3 = (undefined4 *)(*(int *)(in_ECX + 0x30) + 0x30);
    puVar5 = local_6c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_0070fdd0(-local_70);
    puVar3 = (undefined4 *)FUN_007100a0(local_24,local_48);
    puVar5 = local_6c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar3 = local_6c;
    puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x30) + 0x30);
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return;
}



undefined4 * FUN_006d9280(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x44,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00715990();
    puVar2[0x10] = 0;
    puVar2[0xf] = 0;
    *puVar2 = &PTR_FUN_00a7ac04;
  }
  local_4 = 0xffffffff;
  FUN_006ec910(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_006d9310(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x44,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00715990();
    puVar2[0x10] = 0;
    puVar2[0xf] = 0;
    *puVar2 = &PTR_FUN_00a7ac04;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006d9390(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00716140(param_1);
  param_1 = FUN_0070f910(DAT_00b3dbdc);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006d9400(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7da8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x1c);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_006ec250(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d95c0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  LONG LVar7;
  int in_ECX;
  uint uVar8;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  uVar2 = puVar1[2];
  iVar3 = puVar1[3];
  iVar4 = puVar1[4];
  if (uVar2 != 0) {
    local_10 = *(undefined4 *)(iVar3 + 4);
    local_c = *(undefined4 *)(iVar3 + 8);
    local_8 = *(undefined4 *)(iVar3 + 0xc);
    local_4 = *(undefined4 *)(iVar3 + 0x10);
    if ((uVar2 != 1) || (iVar4 == 4)) {
      if ((iVar4 != 1) && (iVar4 != 5)) {
        return;
      }
      bVar5 = true;
      uVar8 = 1;
      while (uVar8 < uVar2) {
        cVar6 = FUN_006d5a40(&local_10);
        if (cVar6 != '\0') {
          bVar5 = false;
        }
        uVar8 = uVar8 + 1;
        if (!bVar5) {
          return;
        }
      }
      if (!bVar5) {
        return;
      }
    }
    puVar1 = *(undefined4 **)(in_ECX + 0x1c);
    if (puVar1 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar1 + 1);
      if ((LVar7 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(in_ECX + 0x1c) = 0;
    }
    *(undefined4 *)(in_ECX + 0xc) = local_10;
    *(undefined4 *)(in_ECX + 0x10) = local_c;
    *(undefined4 *)(in_ECX + 0x14) = local_8;
    *(undefined4 *)(in_ECX + 0x18) = local_4;
    return;
  }
  if (puVar1 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(puVar1 + 1);
    if ((LVar7 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  *(undefined4 *)(in_ECX + 0xc) = DAT_00b3eba0;
  *(undefined4 *)(in_ECX + 0x10) = DAT_00b3eba4;
  *(undefined4 *)(in_ECX + 0x14) = DAT_00b3eba8;
  *(undefined4 *)(in_ECX + 0x18) = DAT_00b3ebac;
  return;
}



int FUN_006d9740(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c80f8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_006eba60(param_1,param_2);
  if (*(int *)(in_ECX + 0x1c) != 0) {
    FUN_006d8e70(&param_2,param_1,param_2);
    local_4 = 0;
    FUN_006dabf0(param_2);
    puVar1 = param_2;
    *(undefined4 *)(iVar3 + 0x20) = 0;
    local_4 = 0xffffffff;
    if (((param_2 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_2 + 1), LVar4 == 0))
       && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



bool FUN_006d9800(float param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined1 local_10 [16];
  
  if (param_1 == *(float *)(in_ECX + 8)) {
    *param_3 = *(undefined4 *)(in_ECX + 0xc);
    param_3[1] = *(undefined4 *)(in_ECX + 0x10);
    param_3[2] = *(undefined4 *)(in_ECX + 0x14);
    param_3[3] = *(undefined4 *)(in_ECX + 0x18);
    cVar2 = FUN_0073b770(&DAT_00b3eba0);
    return cVar2 == '\0';
  }
  iVar1 = *(int *)(in_ECX + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 0) {
      puVar3 = (undefined4 *)
               FUN_006bcf70(local_10,param_1,*(undefined4 *)(iVar1 + 0xc),
                            *(undefined4 *)(iVar1 + 0x10),*(int *)(iVar1 + 8),in_ECX + 0x20,
                            *(undefined1 *)(iVar1 + 0x14));
      *(undefined4 *)(in_ECX + 0xc) = *puVar3;
      *(undefined4 *)(in_ECX + 0x10) = puVar3[1];
      *(undefined4 *)(in_ECX + 0x14) = puVar3[2];
      *(undefined4 *)(in_ECX + 0x18) = puVar3[3];
    }
  }
  cVar2 = FUN_0073b770(&DAT_00b3eba0);
  if (cVar2 == '\0') {
    *param_3 = *(undefined4 *)(in_ECX + 0xc);
    param_3[1] = *(undefined4 *)(in_ECX + 0x10);
    param_3[2] = *(undefined4 *)(in_ECX + 0x14);
    param_3[3] = *(undefined4 *)(in_ECX + 0x18);
    *(float *)(in_ECX + 8) = param_1;
    return true;
  }
  return false;
}



void FUN_006d98f0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int in_ECX;
  
  thunk_FUN_00700770(param_1,param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(in_ECX + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(in_ECX + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(in_ECX + 0x18);
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar1 == *(undefined4 **)(in_ECX + 0x1c)) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
    return;
  }
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 4));
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  return;
}



undefined4 * FUN_006d9980(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x24,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ec220();
    *puVar2 = &PTR_FUN_00a7ac7c;
    puVar2[3] = DAT_00b3eba0;
    puVar2[4] = DAT_00b3eba4;
    puVar2[5] = DAT_00b3eba8;
    puVar2[6] = DAT_00b3ebac;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006d9af0(byte param_1)

{
  FUN_006d9400();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_006d9b10(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x24,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ec220();
    *puVar2 = &PTR_FUN_00a7ac7c;
    puVar2[3] = DAT_00b3eba0;
    puVar2[4] = DAT_00b3eba4;
    puVar2[5] = DAT_00b3eba8;
    puVar2[6] = DAT_00b3ebac;
    puVar2[7] = 0;
    puVar2[8] = 0;
  }
  local_4 = 0xffffffff;
  FUN_006d98f0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_006d9c90(void)

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
  *in_ECX = &PTR_FUN_00a7a624;
  local_4 = 0;
  if (in_ECX[3] != 0) {
    (**(code **)(&DAT_00b3d2e0 + in_ECX[4] * 4))(in_ECX[3],uVar1);
  }
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006d9d00(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int in_ECX;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = (&DAT_00b3d3ee)[param_3];
    *(int *)(in_ECX + 0xc) = param_1;
    *(int *)(in_ECX + 8) = param_2;
    *(undefined1 *)(in_ECX + 0x14) = uVar1;
    *(int *)(in_ECX + 0x10) = param_3;
    return;
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined1 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}



undefined4 * FUN_006d9d40(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a7a624;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 FUN_006d9dc0(int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  
  cVar2 = FUN_00700670(param_1);
  if ((((cVar2 != '\0') && (*(int *)(in_ECX + 8) == *(int *)(param_1 + 8))) &&
      (*(int *)(in_ECX + 0x10) == *(int *)(param_1 + 0x10))) &&
     (*(char *)(in_ECX + 0x14) == *(char *)(param_1 + 0x14))) {
    pcVar1 = *(code **)(&DAT_00b3d4b8 + *(int *)(in_ECX + 0x10) * 4);
    uVar4 = 0;
    if (*(int *)(in_ECX + 8) != 0) {
      do {
        iVar3 = *(byte *)(in_ECX + 0x14) * uVar4;
        cVar2 = (*pcVar1)(*(int *)(in_ECX + 0xc) + iVar3,*(int *)(param_1 + 0xc) + iVar3);
        if (cVar2 == '\0') {
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(in_ECX + 8));
    }
    return 1;
  }
  return 0;
}



void FUN_006d9e40(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    (**(code **)(&DAT_00b3d2e0 + *(int *)(in_ECX + 0x10) * 4))(*(int *)(in_ECX + 0xc));
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = (&DAT_00b3d3ee)[param_3];
    *(int *)(in_ECX + 0xc) = param_1;
    *(undefined1 *)(in_ECX + 0x14) = uVar1;
    *(int *)(in_ECX + 8) = param_2;
    *(int *)(in_ECX + 0x10) = param_3;
    return;
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined1 *)(in_ECX + 0x14) = 0;
  return;
}



int * FUN_006d9ea0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8139;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  local_14 = 0;
  piVar3 = (int *)FUN_00700790(&local_10);
  iVar1 = *piVar3;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  local_4 = 0;
  local_14 = 1;
  if (local_10 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(local_10 + 1);
    if ((LVar4 == 0) && (local_10 != (undefined4 *)0x0)) {
      (**(code **)*local_10)(1,uVar2);
    }
  }
  if (*(int *)(in_ECX + 8) != 0) {
    local_18 = 0;
    local_1c = 0;
    FUN_006d3210(1,*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0xc),*(int *)(in_ECX + 8)
                 ,param_2,param_3,&local_18,&local_1c);
    FUN_006d9e40(local_18,local_1c,*(undefined4 *)(in_ECX + 0x10));
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_006da040(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_0068f970(param_1);
  piVar1 = (int *)(in_ECX + 8);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),piVar1,4,&param_1,1);
  if (*piVar1 != 0) {
    param_1 = 4;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))
              (*(int *)(iVar2 + 0x220),(int *)(in_ECX + 0x10),4,&param_1,1);
    (**(code **)(&DAT_00b3d5d8 + *(int *)(in_ECX + 0x10) * 4))
              (iVar2,*(undefined4 *)(in_ECX + 0xc),*piVar1);
  }
  return;
}



undefined4 FUN_006da150(void)

{
  return 1;
}



void FUN_006da160(int param_1)

{
  undefined4 *in_ECX;
  
  FUN_006ec220();
  *in_ECX = &PTR_FUN_00a7ad5c;
  in_ECX[3] = DAT_00b24fc8;
  in_ECX[4] = DAT_00b24fcc;
  in_ECX[5] = DAT_00b24fd0;
  in_ECX[6] = param_1;
  if (param_1 != 0) {
    InterlockedIncrement((LONG *)(param_1 + 4));
  }
  in_ECX[7] = 0;
  return;
}



void FUN_006da1c0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7da8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x18);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_006ec250(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006da240(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_006ec220();
  in_ECX[3] = param_1;
  in_ECX[4] = param_2;
  *in_ECX = &PTR_FUN_00a7ad5c;
  in_ECX[5] = param_3;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  return;
}



void FUN_006da320(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  LONG LVar6;
  int in_ECX;
  uint uVar7;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x18);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  uVar2 = puVar1[2];
  iVar3 = puVar1[3];
  if (uVar2 != 0) {
    local_c = *(undefined4 *)(iVar3 + 4);
    local_8 = *(undefined4 *)(iVar3 + 8);
    local_4 = *(undefined4 *)(iVar3 + 0xc);
    if (uVar2 != 1) {
      if ((puVar1[4] != 1) && (puVar1[4] != 5)) {
        return;
      }
      bVar4 = true;
      uVar7 = 1;
      while (uVar7 < uVar2) {
        cVar5 = FUN_008aa390(&local_c);
        if (cVar5 != '\0') {
          bVar4 = false;
        }
        uVar7 = uVar7 + 1;
        if (!bVar4) {
          return;
        }
      }
      if (!bVar4) {
        return;
      }
    }
    puVar1 = *(undefined4 **)(in_ECX + 0x18);
    if (puVar1 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar1 + 1);
      if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(in_ECX + 0x18) = 0;
    }
    *(undefined4 *)(in_ECX + 0xc) = local_c;
    *(undefined4 *)(in_ECX + 0x10) = local_8;
    *(undefined4 *)(in_ECX + 0x14) = local_4;
    return;
  }
  if (puVar1 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar1 + 1);
    if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x18) = 0;
  }
  *(undefined4 *)(in_ECX + 0xc) = DAT_00b24fc8;
  *(undefined4 *)(in_ECX + 0x10) = DAT_00b24fcc;
  *(undefined4 *)(in_ECX + 0x14) = DAT_00b24fd0;
  return;
}



void FUN_006da440(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x18) = 0;
  }
  *(undefined4 *)(in_ECX + 0xc) = param_1;
  *(undefined4 *)(in_ECX + 0x10) = param_2;
  *(undefined4 *)(in_ECX + 0x14) = param_3;
  return;
}



int FUN_006da4c0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c80f8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_006eba60(param_1,param_2);
  if (*(int *)(in_ECX + 0x18) != 0) {
    FUN_006d9ea0(&param_2,param_1,param_2);
    local_4 = 0;
    FUN_006daba0(param_2);
    puVar1 = param_2;
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    local_4 = 0xffffffff;
    if (((param_2 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_2 + 1), LVar4 == 0))
       && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



undefined4 FUN_006da580(float param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined1 local_c [12];
  
  if (param_1 == *(float *)(in_ECX + 8)) {
    *param_3 = *(undefined4 *)(in_ECX + 0xc);
    param_3[1] = *(undefined4 *)(in_ECX + 0x10);
    param_3[2] = *(undefined4 *)(in_ECX + 0x14);
    if (((DAT_00b24fc8 == *(float *)(in_ECX + 0xc)) && (DAT_00b24fcc == *(float *)(in_ECX + 0x10)))
       && (DAT_00b24fd0 == *(float *)(in_ECX + 0x14))) {
      return 0;
    }
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x18);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 8) != 0) {
        puVar2 = (undefined4 *)
                 FUN_006bbba0(local_c,param_1,*(undefined4 *)(iVar1 + 0xc),
                              *(undefined4 *)(iVar1 + 0x10),*(int *)(iVar1 + 8),in_ECX + 0x1c,
                              *(undefined1 *)(iVar1 + 0x14));
        *(undefined4 *)(in_ECX + 0xc) = *puVar2;
        *(undefined4 *)(in_ECX + 0x10) = puVar2[1];
        *(undefined4 *)(in_ECX + 0x14) = puVar2[2];
      }
    }
    if (((DAT_00b24fc8 == *(float *)(in_ECX + 0xc)) && (DAT_00b24fcc == *(float *)(in_ECX + 0x10)))
       && (DAT_00b24fd0 == *(float *)(in_ECX + 0x14))) {
      return 0;
    }
    *param_3 = *(undefined4 *)(in_ECX + 0xc);
    param_3[1] = *(undefined4 *)(in_ECX + 0x10);
    param_3[2] = *(undefined4 *)(in_ECX + 0x14);
    *(float *)(in_ECX + 8) = param_1;
  }
  return 1;
}



void FUN_006da6b0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int in_ECX;
  
  thunk_FUN_00700770(param_1,param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(in_ECX + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(in_ECX + 0x14);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 == *(undefined4 **)(in_ECX + 0x18)) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
    return;
  }
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x18);
  *(int *)(param_1 + 0x18) = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 4));
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  return;
}



undefined4 * FUN_006da740(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x20,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ec220();
    *puVar2 = &PTR_FUN_00a7ad5c;
    puVar2[3] = DAT_00b24fc8;
    puVar2[4] = DAT_00b24fcc;
    puVar2[5] = DAT_00b24fd0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006da7e0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  
  thunk_FUN_007008a0(param_1);
  FUN_00709430(param_1);
  puVar2 = (undefined4 *)FUN_00712a90();
  puVar1 = *(undefined4 **)(in_ECX + 0x18);
  if (puVar1 != puVar2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x18) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  return;
}



void FUN_006da900(byte param_1)

{
  FUN_006da1c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_006da920(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x20,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ec220();
    *puVar2 = &PTR_FUN_00a7ad5c;
    puVar2[3] = DAT_00b24fc8;
    puVar2[4] = DAT_00b24fcc;
    puVar2[5] = DAT_00b24fd0;
    puVar2[6] = 0;
    puVar2[7] = 0;
  }
  local_4 = 0xffffffff;
  FUN_006da6b0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_006daba0(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x18);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x18) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_006dabf0(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x1c);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x1c) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



undefined4 FUN_006dac40(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x18);
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 8);
    *param_2 = *(undefined4 *)(iVar1 + 0x10);
    *param_3 = *(undefined1 *)(iVar1 + 0x14);
    return *(undefined4 *)(iVar1 + 0xc);
  }
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  return 0;
}



void FUN_006dac80(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c7dee;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7ae34;
  puVar1 = (undefined4 *)in_ECX[6];
  local_4 = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[6] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[7];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[7] = 0;
  }
  FUN_00401f20(in_ECX[8],uVar2);
  puVar1 = (undefined4 *)in_ECX[7];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[6];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_006ec250();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_006dae50(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  byte bVar4;
  
  iVar1 = *(int *)(in_ECX + 0x18);
  iVar3 = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
    bVar4 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x10);
    bVar4 = *(byte *)(iVar1 + 0x14);
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  (*(code *)(&DAT_00b3d010)[iVar2])
            (param_4,(uint)bVar4 * param_2 + iVar3,(uint)bVar4 * param_3 + iVar3,param_1);
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006daeb0(uint param_1,uint param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float *pfVar5;
  byte bVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  float10 fVar11;
  undefined1 *puVar12;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  uint local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac [4];
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
  int local_70;
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [48];
  undefined1 local_24 [36];
  
  iVar8 = *(int *)(in_ECX + 0x18);
  pfVar5 = (float *)&DAT_00b26dc4;
  pfVar10 = local_ac;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar10 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar10 = pfVar10 + 1;
  }
  if (iVar8 != 0) {
    local_dc = *(float *)(iVar8 + 8);
    uVar4 = *(undefined4 *)(iVar8 + 0x10);
    bVar6 = *(byte *)(iVar8 + 0x14);
    iVar8 = *(int *)(iVar8 + 0xc);
    if (1 < (uint)local_dc) {
      if ((*(byte *)(in_ECX + 0xc) >> 2 & 1) == 0) {
        FUN_006bbee0(param_3,bVar6 * param_1 + iVar8,bVar6 * param_2 + iVar8,uVar4,&local_88,
                     &local_b8,&local_7c,&local_d4);
        local_ac[0] = local_88;
        local_ac[3] = local_84;
        local_94 = local_80;
        FUN_004bf9e0(&local_c4,&local_88);
        local_ac[1] = local_c4;
        local_9c = local_c0;
        local_90 = local_bc;
        local_e8 = local_84 * local_bc - local_80 * local_c0;
        local_e4 = local_80 * local_c4 - local_88 * local_bc;
        local_e0 = local_88 * local_c0 - local_84 * local_c4;
        local_ac[2] = local_e8;
        local_98 = local_e4;
        local_8c = local_e0;
      }
      else {
        uVar9 = (uint)bVar6;
        local_70 = uVar9 * param_2 + iVar8;
        local_d8 = (float)(uVar9 * param_1 + iVar8);
        FUN_006bbee0(param_3,local_d8,local_70,uVar4,&local_88,&local_b8,&local_7c,&local_d4);
        fVar2 = local_d8;
        if (*(float *)(in_ECX + 0x2c) != 0.0) {
          fVar1 = 1.0 - *(float *)(in_ECX + 0x2c);
          if (fVar1 < param_3 == (fVar1 == param_3)) {
            if (param_3 <= *(float *)(in_ECX + 0x2c)) {
              if (((*(byte *)(in_ECX + 0xc) >> 1 & 1) == 0) && (param_1 == 0)) {
                local_cc = (int)local_dc - 1;
              }
              else {
                local_cc = param_1;
              }
              if (local_cc != 0) {
                local_c8 = (*(float *)(in_ECX + 0x2c) - param_3) /
                           (*(float *)(in_ECX + 0x2c) + *(float *)(in_ECX + 0x2c));
                local_dc = 1.0 - local_c8;
                FUN_006bbee0(*(undefined4 *)(in_ECX + 0x2c),local_d8,local_70,uVar4,&local_c4,
                             &local_b8,&local_7c,&local_d4);
                local_d8 = 1.0 - *(float *)(in_ECX + 0x2c);
                FUN_006bbee0(local_d8,(local_cc - 1) * uVar9 + iVar8,uVar9 * local_cc + iVar8,uVar4,
                             &local_c4,&local_e8,&local_7c,&local_d0);
                uVar4 = FUN_0047da10(local_6c,local_c8,&local_e8);
                puVar12 = local_60;
                FUN_0047da10(local_54,local_dc,&local_b8,puVar12,uVar4);
                pfVar5 = (float *)FUN_0047d9b0(puVar12,uVar4);
                local_b8 = *pfVar5;
                local_b4 = pfVar5[1];
                local_b0 = pfVar5[2];
                FUN_0043f350();
                local_d4 = local_dc * local_d4 + local_d0 * local_c8;
                pfVar5 = (float *)FUN_00498fe0(local_6c,&local_b8);
                local_7c = *pfVar5;
                local_78 = pfVar5[1];
                local_74 = pfVar5[2];
              }
            }
          }
          else {
            if (((*(byte *)(in_ECX + 0xc) >> 1 & 1) == 0) && (param_2 == (int)local_dc - 1U)) {
              local_cc = 0;
            }
            else {
              local_cc = param_2;
            }
            if (local_cc < (int)local_dc - 1U) {
              local_dc = (*(float *)(in_ECX + 0x2c) + (1.0 - param_3)) /
                         (*(float *)(in_ECX + 0x2c) + *(float *)(in_ECX + 0x2c));
              local_c8 = 1.0 - local_dc;
              local_d8 = 1.0 - *(float *)(in_ECX + 0x2c);
              FUN_006bbee0(local_d8,fVar2,local_70,uVar4,&local_c4,&local_b8,&local_7c,&local_d4);
              FUN_006bbee0(*(undefined4 *)(in_ECX + 0x2c),uVar9 * local_cc + iVar8,
                           (local_cc + 1) * uVar9 + iVar8,uVar4,&local_c4,&local_e8,&local_7c,
                           &local_d0);
              uVar4 = FUN_0047da10(local_54,local_c8,&local_e8);
              puVar12 = local_60;
              FUN_0047da10(local_6c,local_dc,&local_b8,puVar12,uVar4);
              pfVar5 = (float *)FUN_0047d9b0(puVar12,uVar4);
              local_b8 = *pfVar5;
              local_b4 = pfVar5[1];
              local_b0 = pfVar5[2];
              FUN_0043f350();
              local_d4 = local_dc * local_d4 + local_d0 * local_c8;
              pfVar5 = (float *)FUN_00498fe0(local_6c,&local_b8);
              local_7c = *pfVar5;
              local_78 = pfVar5[1];
              local_74 = pfVar5[2];
            }
          }
        }
        local_ac[0] = local_88;
        local_ac[3] = local_84;
        local_94 = local_80;
        local_ac[1] = -local_b8;
        local_9c = -local_b4;
        local_90 = -local_b0;
        local_e8 = -local_7c;
        local_e4 = -local_78;
        local_e0 = -local_74;
        local_ac[2] = local_e8;
        local_98 = local_e4;
        local_8c = local_e0;
      }
      local_8c = local_e0;
      local_98 = local_e4;
      local_ac[2] = local_e8;
      bVar6 = (byte)*(undefined2 *)(in_ECX + 0xc);
      if ((bVar6 >> 6 & 1) != 0) {
        local_ac[0] = -local_88;
        local_ac[3] = -local_84;
        local_94 = -local_80;
        local_e8 = -local_ac[1];
        local_e4 = -local_9c;
        local_e0 = -local_90;
        local_ac[1] = local_e8;
        local_9c = local_e4;
        local_90 = local_e0;
      }
      fVar3 = local_94;
      fVar1 = local_ac[3];
      fVar2 = local_ac[0];
      if (*(short *)(in_ECX + 0x30) == 1) {
        local_e8 = local_ac[0];
        local_e4 = local_ac[3];
        local_e0 = local_94;
        local_c4 = -local_ac[1];
        local_c0 = -local_9c;
        local_bc = -local_90;
        local_ac[0] = local_c4;
        local_ac[3] = local_c0;
        local_94 = local_bc;
        local_ac[1] = fVar2;
        local_9c = fVar1;
        local_90 = fVar3;
      }
      else if (*(short *)(in_ECX + 0x30) == 2) {
        local_e8 = local_ac[0];
        local_e4 = local_ac[3];
        local_e0 = local_94;
        local_c4 = -local_ac[2];
        local_c0 = -local_98;
        local_bc = -local_8c;
        local_ac[0] = local_c4;
        local_ac[3] = local_c0;
        local_94 = local_bc;
        local_ac[2] = fVar2;
        local_98 = fVar1;
        local_8c = fVar3;
      }
      if ((bVar6 >> 3 & 1) != 0) {
        if ((_DAT_00b3dd34 & 1) == 0) {
          _DAT_00b3dd34 = _DAT_00b3dd34 | 1;
          _DAT_00b3dd30 = 4.0 / _DAT_00b3f9a4;
        }
        local_d0 = (float)*(int *)(in_ECX + 0x38) * *(float *)(in_ECX + 0x28);
        if (local_d4 < *(float *)(in_ECX + 0x34)) {
          local_d8 = local_d4 / *(float *)(in_ECX + 0x34);
          fVar11 = (float10)FUN_009870a0();
          local_d8 = (float)fVar11;
          local_d0 = local_d8 * _DAT_00b3dd30 * local_d0;
        }
        FUN_0070fe20(local_d0,local_88,local_84,local_80);
        pfVar5 = (float *)FUN_007100a0(local_24,local_ac);
        pfVar10 = local_ac;
        for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
          *pfVar10 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          pfVar10 = pfVar10 + 1;
        }
      }
    }
  }
  pfVar5 = local_ac;
  for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
    *param_4 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    param_4 = param_4 + 1;
  }
  return;
}



float10 FUN_006db660(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  byte bVar4;
  float10 fVar5;
  undefined1 local_c [12];
  
  iVar1 = *(int *)(in_ECX + 0x18);
  iVar3 = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
    bVar4 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x10);
    bVar4 = *(byte *)(iVar1 + 0x14);
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  (*(code *)(&DAT_00b3d250)[iVar2])
            (param_3,(uint)bVar4 * param_1 + iVar3,(uint)bVar4 * param_2 + iVar3,local_c);
  fVar5 = (float10)FUN_00982c30();
  return (float10)(float)fVar5;
}



float10 FUN_006db6f0(undefined4 param_1,undefined4 param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float local_4;
  
  local_4 = 0.0;
  iVar2 = 0;
  do {
    fVar3 = (float10)FUN_006db660(param_1,param_2,*(float *)((int)&DAT_00b246f4 + iVar2) * param_3);
    pfVar1 = (float *)((int)&DAT_00b246e0 + iVar2);
    iVar2 = iVar2 + 4;
    local_4 = (float)(fVar3 * (float10)*pfVar1 + (float10)local_4);
  } while (iVar2 < 0x14);
  return (float10)(local_4 * param_3);
}



int FUN_006db790(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c80f8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_006eba60(param_1,param_2);
  if (*(int *)(in_ECX + 0x1c) != 0) {
    FUN_006e35a0(&param_2,param_1,param_2);
    local_4 = 0;
    FUN_006dabf0(param_2);
    puVar1 = param_2;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    local_4 = 0xffffffff;
    if (((param_2 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_2 + 1), LVar4 == 0))
       && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



uint FUN_006db8d0(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined3 uVar8;
  undefined2 uVar9;
  byte bVar10;
  int in_ECX;
  byte *pbVar11;
  byte bVar12;
  byte *pbVar13;
  int iVar14;
  int iStack_8;
  undefined1 auStack_4 [4];
  
  iVar4 = param_1;
  uVar6 = thunk_FUN_00700670(param_1);
  if ((char)uVar6 == '\0') goto LAB_006db8e5;
  piVar3 = *(int **)(in_ECX + 0x18);
  if (piVar3 == (int *)0x0) {
LAB_006db900:
    if (*(int *)(iVar4 + 0x18) != 0) goto LAB_006db8e5;
    if (piVar3 != (int *)0x0) goto LAB_006db90a;
  }
  else {
    if (*(int *)(iVar4 + 0x18) == 0) goto LAB_006db8e5;
    if (piVar3 == (int *)0x0) goto LAB_006db900;
LAB_006db90a:
    uVar6 = (**(code **)(*piVar3 + 0x2c))(*(undefined4 *)(iVar4 + 0x18));
    if ((char)uVar6 == '\0') goto LAB_006db8e5;
  }
  piVar3 = *(int **)(in_ECX + 0x1c);
  if (piVar3 == (int *)0x0) {
LAB_006db92a:
    if (*(int *)(iVar4 + 0x1c) != 0) goto LAB_006db8e5;
    if (piVar3 != (int *)0x0) goto LAB_006db934;
  }
  else {
    if (*(int *)(iVar4 + 0x1c) == 0) goto LAB_006db8e5;
    if (piVar3 == (int *)0x0) goto LAB_006db92a;
LAB_006db934:
    uVar6 = (**(code **)(*piVar3 + 0x2c))(*(undefined4 *)(iVar4 + 0x1c));
    if ((char)uVar6 == '\0') {
LAB_006db8e5:
      return uVar6 & 0xffffff00;
    }
  }
  pbVar13 = *(byte **)(in_ECX + 0x20);
  if (pbVar13 == (byte *)0x0) {
LAB_006db955:
    if (*(int *)(iVar4 + 0x20) != 0) {
LAB_006db95b:
      return uVar6 & 0xffffff00;
    }
  }
  else {
    if (*(int *)(iVar4 + 0x20) == 0) goto LAB_006db95b;
    if (pbVar13 == (byte *)0x0) goto LAB_006db955;
  }
  if (pbVar13 != (byte *)0x0) {
    FUN_006dac40(&iStack_8,auStack_4,&param_1);
    pbVar11 = *(byte **)(iVar4 + 0x20);
    for (uVar6 = iStack_8 * 4; 3 < uVar6; uVar6 = uVar6 - 4) {
      if (*(int *)pbVar13 != *(int *)pbVar11) goto LAB_006db9af;
      pbVar11 = pbVar11 + 4;
      pbVar13 = pbVar13 + 4;
    }
    if (uVar6 == 0) {
LAB_006dba0c:
      uVar7 = 0;
    }
    else {
LAB_006db9af:
      iVar14 = (uint)*pbVar13 - (uint)*pbVar11;
      if (iVar14 == 0) {
        if (uVar6 == 1) goto LAB_006dba0c;
        iVar14 = (uint)pbVar13[1] - (uint)pbVar11[1];
        if (iVar14 == 0) {
          if (uVar6 == 2) goto LAB_006dba0c;
          iVar14 = (uint)pbVar13[2] - (uint)pbVar11[2];
          if (iVar14 == 0) {
            if ((uVar6 == 3) || (iVar14 = (uint)pbVar13[3] - (uint)pbVar11[3], iVar14 == 0))
            goto LAB_006dba0c;
          }
        }
      }
      uVar7 = 1;
      if (iVar14 < 1) {
        uVar7 = 0xffffffff;
      }
    }
    uVar6 = 0;
    if (uVar7 != 0) goto LAB_006dbadf;
  }
  fVar1 = *(float *)(in_ECX + 0x24);
  fVar2 = *(float *)(iVar4 + 0x24);
  uVar7 = CONCAT22((short)(uVar6 >> 0x10),
                   (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                   (ushort)(fVar2 == fVar1) << 0xe);
  if ((fVar2 == fVar1) && (((*(byte *)(in_ECX + 0xc) ^ *(byte *)(iVar4 + 0xc)) & 1) == 0)) {
    bVar10 = (byte)*(undefined2 *)(iVar4 + 0xc);
    bVar12 = (byte)*(undefined2 *)(in_ECX + 0xc);
    bVar5 = (bVar10 ^ bVar12) >> 1;
    uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
    if (((bVar5 & 1) == 0) &&
       (uVar6 = *(uint *)(in_ECX + 0x38), uVar7 = uVar6, uVar6 == *(uint *)(iVar4 + 0x38))) {
      uVar8 = (undefined3)(uVar6 >> 8);
      bVar5 = (bVar10 ^ bVar12) >> 2;
      uVar7 = CONCAT31(uVar8,bVar5);
      if (((((bVar5 & 1) == 0) &&
           (bVar5 = (bVar10 ^ bVar12) >> 3, uVar7 = CONCAT31(uVar8,bVar5), (bVar5 & 1) == 0)) &&
          (bVar5 = (bVar10 ^ bVar12) >> 4, uVar7 = CONCAT31(uVar8,bVar5), (bVar5 & 1) == 0)) &&
         (bVar5 = (bVar10 ^ bVar12) >> 5, uVar7 = CONCAT31(uVar8,bVar5), (bVar5 & 1) == 0)) {
        fVar1 = *(float *)(in_ECX + 0x28);
        fVar2 = *(float *)(iVar4 + 0x28);
        uVar9 = (undefined2)(uVar6 >> 0x10);
        uVar7 = CONCAT22(uVar9,(ushort)(fVar2 < fVar1) << 8 |
                               (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                               (ushort)(fVar2 == fVar1) << 0xe);
        if (fVar2 == fVar1) {
          fVar1 = *(float *)(in_ECX + 0x2c);
          fVar2 = *(float *)(iVar4 + 0x2c);
          uVar7 = CONCAT22(uVar9,(ushort)(fVar2 < fVar1) << 8 |
                                 (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                 (ushort)(fVar2 == fVar1) << 0xe);
          if (((fVar2 == fVar1) &&
              (uVar7 = CONCAT22(uVar9,*(short *)(in_ECX + 0x30)),
              *(short *)(in_ECX + 0x30) == *(short *)(iVar4 + 0x30))) &&
             (((bVar10 ^ bVar12) >> 6 & 1) == 0)) {
            return CONCAT31((int3)(uVar7 >> 8),1);
          }
        }
      }
    }
  }
LAB_006dbadf:
  return uVar7 & 0xffffff00;
}



void FUN_006dbaf0(byte param_1)

{
  FUN_006dac80();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



float10 FUN_006dbb10(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  float10 fVar4;
  undefined4 local_8;
  
  if (*(float *)(in_ECX + 0x24) < 0.0) {
    if (*(int *)(in_ECX + 0x18) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(uint *)(*(int *)(in_ECX + 0x18) + 8);
    }
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x20));
    puVar2 = (undefined4 *)
             FUN_00401f00(-(uint)((int)((ulonglong)local_8 * 4 >> 0x20) != 0) |
                          (uint)((ulonglong)local_8 * 4));
    *(undefined4 **)(in_ECX + 0x20) = puVar2;
    *puVar2 = 0;
    uVar3 = 0;
    if (local_8 != 1) {
      do {
        uVar1 = uVar3 + 1;
        fVar4 = (float10)FUN_006db6f0(uVar3,uVar1,0x3f800000);
        *(float *)(*(int *)(in_ECX + 0x20) + 4 + uVar3 * 4) =
             *(float *)(*(int *)(in_ECX + 0x20) + uVar3 * 4) + (float)fVar4;
        uVar3 = uVar1;
      } while (uVar1 < local_8 - 1);
    }
    *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(*(int *)(in_ECX + 0x20) + -4 + local_8 * 4);
  }
  return (float10)*(float *)(in_ECX + 0x24);
}



void FUN_006dbbc0(void)

{
  int in_ECX;
  float10 fVar1;
  
  if ((*(byte *)(in_ECX + 0xc) & 1) != 0) {
    fVar1 = (float10)FUN_006dbb10();
    *(float *)(in_ECX + 0x24) = (float)fVar1;
    *(ushort *)(in_ECX + 0xc) = *(ushort *)(in_ECX + 0xc) & 0xfffe;
  }
  return;
}



void FUN_006dbbe0(float param_1,uint *param_2,int *param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  int in_ECX;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float local_20;
  float fStack_18;
  int iStack_14;
  
  if (*(int *)(in_ECX + 0x18) == 0) {
    local_20 = 0.0;
  }
  else {
    local_20 = *(float *)(*(int *)(in_ECX + 0x18) + 8);
  }
  if (param_1 == 0.0) {
    *param_2 = 0;
    *param_3 = 1;
    *param_4 = 0.0;
    return;
  }
  if (param_1 < 0.0) {
    fVar6 = (float10)FUN_00982bfa();
    param_1 = (float)fVar6 + 1.0;
  }
  if (param_1 == 1.0) {
    *param_2 = (int)local_20 - 2;
    *param_3 = (int)local_20 + -1;
    *param_4 = 1.0;
    return;
  }
  if (1.0 < param_1) {
    fVar6 = (float10)FUN_00982bfa();
    param_1 = (float)fVar6;
  }
  param_1 = param_1 * *(float *)(in_ECX + 0x24);
  uVar4 = 0;
  iVar5 = 1;
  if (local_20 != 1.4013e-45) {
    pfVar3 = *(float **)(in_ECX + 0x20);
    do {
      pfVar3 = pfVar3 + 1;
      if (param_1 <= *pfVar3) {
        iVar1 = *(int *)(in_ECX + 0x20);
        fStack_18 = param_1 - *(float *)(iVar1 + uVar4 * 4);
        local_20 = fStack_18 / (*(float *)(iVar1 + iVar5 * 4) - *(float *)(iVar1 + uVar4 * 4));
        break;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 1;
    } while (uVar4 < (int)local_20 - 1U);
  }
  iStack_14 = 0;
  do {
    fVar6 = (float10)FUN_006db6f0(uVar4,iVar5,local_20);
    fVar2 = ABS((float)(fVar6 - (float10)fStack_18));
    if (fVar2 < 0.0001 != (fVar2 == 0.0001)) break;
    fVar7 = (float10)FUN_006db660(uVar4,iVar5,local_20);
    iStack_14 = iStack_14 + 1;
    local_20 = (float)((float10)local_20 - (float10)(float)(fVar6 - (float10)fStack_18) / fVar7);
  } while (iStack_14 < 0x20);
  *param_2 = uVar4;
  *param_3 = iVar5;
  *param_4 = local_20;
  return;
}



void FUN_006dbdb0(float param_1,uint *param_2,uint *param_3,float *param_4)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  float *pfVar5;
  byte bVar6;
  int in_ECX;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  int local_8;
  
  if ((*(byte *)(in_ECX + 0xc) >> 4 & 1) != 0) {
    FUN_006dbbe0(param_1,param_2,param_3,param_4);
    *(uint *)(in_ECX + 0x10) = *param_2;
    return;
  }
  iVar3 = *(int *)(in_ECX + 0x18);
  pfVar9 = (float *)0x0;
  if (iVar3 == 0) {
    local_8 = 0;
    bVar6 = 0;
  }
  else {
    local_8 = *(int *)(iVar3 + 8);
    bVar6 = *(byte *)(iVar3 + 0x14);
    pfVar9 = *(float **)(iVar3 + 0xc);
  }
  if (param_1 <= *pfVar9) {
    *param_2 = 0;
    *param_3 = 1;
    *param_4 = 0.0;
    return;
  }
  uVar8 = (uint)bVar6;
  uVar1 = local_8 - 1;
  fVar2 = *(float *)(uVar8 * uVar1 + (int)pfVar9);
  if (fVar2 < param_1 != (fVar2 == param_1)) {
    *param_2 = local_8 - 2;
    *param_3 = uVar1;
    *param_4 = 1.0;
    return;
  }
  uVar7 = *(uint *)(in_ECX + 0x10);
  bVar4 = true;
  do {
    pfVar5 = param_4;
    if (uVar1 <= uVar7) {
LAB_006dbee2:
      *param_4 = (param_1 - *(float *)(uVar8 * uVar7 + (int)pfVar9)) /
                 (*(float *)(uVar8 * (int)pfVar5 + (int)pfVar9) -
                 *(float *)(uVar8 * uVar7 + (int)pfVar9));
      *param_2 = uVar7;
      *param_3 = (uint)pfVar5;
      return;
    }
    if ((*(float *)(uVar8 * uVar7 + (int)pfVar9) == param_1) ||
       ((*(float *)(uVar8 * uVar7 + (int)pfVar9) < param_1 &&
        (param_1 < *(float *)((uVar7 + 1) * uVar8 + (int)pfVar9))))) {
      *(uint *)(in_ECX + 0x10) = uVar7;
      pfVar5 = (float *)(uVar7 + 1);
      goto LAB_006dbee2;
    }
    if ((uVar7 == local_8 - 2U) && (bVar4)) {
      uVar7 = 0;
      bVar4 = false;
    }
    else {
      uVar7 = uVar7 + 1;
    }
  } while( true );
}



void FUN_006dc000(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int in_ECX;
  float10 fVar5;
  
  thunk_FUN_0068f970(param_1);
  puVar3 = (undefined4 *)FUN_007124a0();
  puVar1 = *(undefined4 **)(in_ECX + 0x18);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x18) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = (undefined4 *)FUN_007124a0();
  puVar1 = *(undefined4 **)(in_ECX + 0x1c);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x1c) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  *(ushort *)(in_ECX + 0xc) = *(ushort *)(in_ECX + 0xc) | 1;
  if ((((byte)*(undefined2 *)(in_ECX + 0xc) >> 4 & 1) != 0) && ((*(byte *)(in_ECX + 0xc) & 1) != 0))
  {
    fVar5 = (float10)FUN_006dbb10();
    *(float *)(in_ECX + 0x24) = (float)fVar5;
    *(ushort *)(in_ECX + 0xc) = *(ushort *)(in_ECX + 0xc) & 0xfffe;
  }
  iVar2 = *(int *)(in_ECX + 0x18);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 8) != 0) {
      fVar5 = (float10)(**(code **)(&DAT_00b3d130 + *(int *)(iVar2 + 0x10) * 4))
                                 (*(undefined4 *)(iVar2 + 0xc),*(int *)(iVar2 + 8));
      *(float *)(in_ECX + 0x34) = (float)fVar5;
    }
  }
  return;
}



void FUN_006dc0f0(int *param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = param_1;
  thunk_FUN_0068f970(param_1);
  param_1 = (int *)0x2;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0xc,2,&param_1,1);
  param_1 = (int *)0x4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x38,4,&param_1,1);
  param_1 = (int *)0x4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x28,4,&param_1,1);
  param_1 = (int *)0x4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x2c,4,&param_1,1);
  param_1 = (int *)0x2;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x30,2,&param_1,1);
  (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(in_ECX + 0x18));
  (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(in_ECX + 0x1c));
  return;
}



void FUN_006dc1d0(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c7dee;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006ec220(uVar2);
  *in_ECX = &PTR_FUN_00a7ae34;
  in_ECX[6] = param_1;
  if (param_1 != 0) {
    InterlockedIncrement((LONG *)(param_1 + 4));
  }
  in_ECX[7] = param_2;
  if (param_2 != 0) {
    InterlockedIncrement((LONG *)(param_2 + 4));
  }
  in_ECX[0xf] = DAT_00b3eba0;
  in_ECX[0x10] = DAT_00b3eba4;
  in_ECX[0x11] = DAT_00b3eba8;
  in_ECX[0x12] = DAT_00b3ebac;
  in_ECX[0x13] = DAT_00b24fc8;
  in_ECX[0x14] = DAT_00b24fcc;
  uVar1 = DAT_00b24fd0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0x15] = uVar1;
  in_ECX[0xd] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[9] = 0xbf800000;
  in_ECX[0xe] = 1;
  *(undefined2 *)(in_ECX + 0xc) = 0;
  in_ECX[8] = 0;
  *(undefined2 *)(in_ECX + 3) = 3;
  in_ECX[0x16] = 0xff7fffff;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_006dc2c0(float param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  float10 fVar3;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [36];
  
  if (param_1 == *(float *)(in_ECX + 8)) {
    if (((DAT_00b24fc8 == *(float *)(in_ECX + 0x4c)) && (DAT_00b24fcc == *(float *)(in_ECX + 0x50)))
       && (DAT_00b24fd0 == *(float *)(in_ECX + 0x54))) {
      *param_3 = 0xff7fffff;
      param_3[4] = 0xff7fffff;
      param_3[7] = 0xff7fffff;
      return 0;
    }
    FUN_00471390((float *)(in_ECX + 0x4c));
    if ((*(byte *)(in_ECX + 0xc) >> 5 & 1) == 0) {
      return 1;
    }
    FUN_00471430(in_ECX + 0x3c);
    return 1;
  }
  iVar1 = *(int *)(in_ECX + 0x1c);
  if (iVar1 != 0) {
    local_3c = (float)CONCAT31(local_3c._1_3_,*(undefined1 *)(iVar1 + 0x14));
    if (((*(int *)(iVar1 + 0xc) != 0) && (*(int *)(in_ECX + 0x18) != 0)) &&
       (*(int *)(*(int *)(in_ECX + 0x18) + 0xc) != 0)) {
      fVar3 = (float10)FUN_006bb270(param_1,*(int *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),
                                    *(undefined4 *)(iVar1 + 8),in_ECX + 0x14,local_3c);
      local_3c = (float)fVar3;
      FUN_006dbdb0(local_3c,&local_34,&local_38,&local_3c);
      if ((*(byte *)(in_ECX + 0xc) >> 5 & 1) != 0) {
        FUN_006daeb0(local_34,local_38,local_3c,local_24);
        FUN_007150f0(local_24);
      }
      puVar2 = (undefined4 *)FUN_006dae50(local_30,local_34,local_38,local_3c);
      *(undefined4 *)(in_ECX + 0x4c) = *puVar2;
      *(undefined4 *)(in_ECX + 0x50) = puVar2[1];
      *(undefined4 *)(in_ECX + 0x54) = puVar2[2];
      FUN_00471390((undefined4 *)(in_ECX + 0x4c));
      if ((*(byte *)(in_ECX + 0xc) >> 5 & 1) != 0) {
        FUN_00471430(in_ECX + 0x3c);
      }
      *(float *)(in_ECX + 0x58) = param_1;
      return 1;
    }
  }
  return 0;
}



void FUN_006dc480(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *_Dst;
  int in_ECX;
  uint uVar2;
  float10 fVar3;
  
  thunk_FUN_00700770(param_1,param_2);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(in_ECX + 0xc);
  if (*(int **)(in_ECX + 0x18) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x18) + 0x18))(param_2);
    FUN_006daba0(uVar1);
  }
  if (*(int **)(in_ECX + 0x1c) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x18))(param_2);
    FUN_006dabf0(uVar1);
  }
  if ((*(byte *)(in_ECX + 0xc) >> 2 & 1) == 0) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xfffb;
  }
  else {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 4;
  }
  if ((*(byte *)(in_ECX + 0xc) >> 3 & 1) == 0) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xfff7;
  }
  else {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 8;
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(in_ECX + 0x38);
  if ((*(byte *)(in_ECX + 0xc) >> 4 & 1) == 0) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xffef;
  }
  else {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x10;
    if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
      fVar3 = (float10)FUN_006dbb10();
      *(float *)(param_1 + 0x24) = (float)fVar3;
      *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xfffe;
    }
  }
  if ((*(byte *)(in_ECX + 0xc) >> 5 & 1) == 0) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xffdf;
  }
  else {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x20;
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(in_ECX + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(in_ECX + 0x2c);
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(in_ECX + 0x30);
  if ((*(byte *)(in_ECX + 0xc) >> 6 & 1) == 0) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xffbf;
  }
  else {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x40;
  }
  if ((*(byte *)(in_ECX + 0xc) >> 1 & 1) == 0) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xfffd;
  }
  else {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 2;
  }
  if (*(int *)(in_ECX + 0x20) != 0) {
    if (*(int *)(in_ECX + 0x18) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(*(int *)(in_ECX + 0x18) + 8);
    }
    _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)uVar2 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)uVar2 * 4));
    *(void **)(param_1 + 0x20) = _Dst;
    _memcpy(_Dst,*(void **)(in_ECX + 0x20),uVar2 * 4);
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(in_ECX + 0x24);
  return;
}



undefined4 FUN_006dc5e0(void)

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
  local_10 = FUN_00401f00(0x5c,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006dc1d0(0,0);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006dc650(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ec460(param_1);
  param_1 = FUN_0070f910(DAT_00b3dd4c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined4 FUN_006dc6a0(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x5c,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_006dc1d0(0,0);
  }
  local_4 = 0xffffffff;
  FUN_006dc480(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_006dc720(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x48);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x48) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_006dc770(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined1 *param_4)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x48);
  if (iVar1 != 0) {
    *param_2 = *(undefined4 *)(iVar1 + 8);
    *param_3 = *(undefined4 *)(iVar1 + 0x10);
    *param_4 = *(undefined1 *)(iVar1 + 0x14);
    *param_1 = *(undefined4 *)(iVar1 + 0xc);
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  *param_1 = 0;
  *param_4 = 0;
  return;
}



void FUN_006dc7d0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c7e2e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7aeec;
  puVar1 = (undefined4 *)in_ECX[0x12];
  local_4 = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x12] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x13];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x13] = 0;
  }
  FUN_00401f20(in_ECX[0x14],uVar2);
  puVar1 = (undefined4 *)in_ECX[0x13];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x12];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00715a70();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_006dc8e0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar1 = *(int *)(in_ECX + 0x48);
  if (iVar1 == 0) {
    iVar2 = 0;
    iVar1 = 0;
    bVar3 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x10);
    bVar3 = *(byte *)(iVar1 + 0x14);
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  (*(code *)(&DAT_00b3d010)[iVar2])
            (param_4,(uint)bVar3 * param_2 + iVar1,(uint)bVar3 * param_3 + iVar1,param_1);
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006dc940(uint param_1,uint param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float *pfVar5;
  byte bVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  float10 fVar11;
  undefined1 *puVar12;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  uint local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac [4];
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
  int local_70;
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [48];
  undefined1 local_24 [36];
  
  iVar8 = *(int *)(in_ECX + 0x48);
  pfVar5 = (float *)&DAT_00b26dc4;
  pfVar10 = local_ac;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar10 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar10 = pfVar10 + 1;
  }
  if (iVar8 != 0) {
    local_dc = *(float *)(iVar8 + 8);
    uVar4 = *(undefined4 *)(iVar8 + 0x10);
    bVar6 = *(byte *)(iVar8 + 0x14);
    iVar8 = *(int *)(iVar8 + 0xc);
    if (1 < (uint)local_dc) {
      if ((*(byte *)(in_ECX + 0x3c) >> 2 & 1) == 0) {
        FUN_006bbee0(param_3,bVar6 * param_1 + iVar8,bVar6 * param_2 + iVar8,uVar4,&local_88,
                     &local_b8,&local_7c,&local_d4);
        local_ac[0] = local_88;
        local_ac[3] = local_84;
        local_94 = local_80;
        FUN_004bf9e0(&local_c4,&local_88);
        local_ac[1] = local_c4;
        local_9c = local_c0;
        local_90 = local_bc;
        local_e8 = local_84 * local_bc - local_80 * local_c0;
        local_e4 = local_80 * local_c4 - local_88 * local_bc;
        local_e0 = local_88 * local_c0 - local_84 * local_c4;
        local_ac[2] = local_e8;
        local_98 = local_e4;
        local_8c = local_e0;
      }
      else {
        uVar9 = (uint)bVar6;
        local_70 = uVar9 * param_2 + iVar8;
        local_d8 = (float)(uVar9 * param_1 + iVar8);
        FUN_006bbee0(param_3,local_d8,local_70,uVar4,&local_88,&local_b8,&local_7c,&local_d4);
        fVar2 = local_d8;
        if (*(float *)(in_ECX + 0x5c) != 0.0) {
          fVar1 = 1.0 - *(float *)(in_ECX + 0x5c);
          if (fVar1 < param_3 == (fVar1 == param_3)) {
            if (param_3 <= *(float *)(in_ECX + 0x5c)) {
              if (((*(byte *)(in_ECX + 0x3c) >> 1 & 1) == 0) && (param_1 == 0)) {
                local_cc = (int)local_dc - 1;
              }
              else {
                local_cc = param_1;
              }
              if (local_cc != 0) {
                local_c8 = (*(float *)(in_ECX + 0x5c) - param_3) /
                           (*(float *)(in_ECX + 0x5c) + *(float *)(in_ECX + 0x5c));
                local_dc = 1.0 - local_c8;
                FUN_006bbee0(*(undefined4 *)(in_ECX + 0x5c),local_d8,local_70,uVar4,&local_c4,
                             &local_b8,&local_7c,&local_d4);
                local_d8 = 1.0 - *(float *)(in_ECX + 0x5c);
                FUN_006bbee0(local_d8,(local_cc - 1) * uVar9 + iVar8,uVar9 * local_cc + iVar8,uVar4,
                             &local_c4,&local_e8,&local_7c,&local_d0);
                uVar4 = FUN_0047da10(local_6c,local_c8,&local_e8);
                puVar12 = local_60;
                FUN_0047da10(local_54,local_dc,&local_b8,puVar12,uVar4);
                pfVar5 = (float *)FUN_0047d9b0(puVar12,uVar4);
                local_b8 = *pfVar5;
                local_b4 = pfVar5[1];
                local_b0 = pfVar5[2];
                FUN_0043f350();
                local_d4 = local_dc * local_d4 + local_d0 * local_c8;
                pfVar5 = (float *)FUN_00498fe0(local_6c,&local_b8);
                local_7c = *pfVar5;
                local_78 = pfVar5[1];
                local_74 = pfVar5[2];
              }
            }
          }
          else {
            if (((*(byte *)(in_ECX + 0x3c) >> 1 & 1) == 0) && (param_2 == (int)local_dc - 1U)) {
              local_cc = 0;
            }
            else {
              local_cc = param_2;
            }
            if (local_cc < (int)local_dc - 1U) {
              local_dc = (*(float *)(in_ECX + 0x5c) + (1.0 - param_3)) /
                         (*(float *)(in_ECX + 0x5c) + *(float *)(in_ECX + 0x5c));
              local_c8 = 1.0 - local_dc;
              local_d8 = 1.0 - *(float *)(in_ECX + 0x5c);
              FUN_006bbee0(local_d8,fVar2,local_70,uVar4,&local_c4,&local_b8,&local_7c,&local_d4);
              FUN_006bbee0(*(undefined4 *)(in_ECX + 0x5c),uVar9 * local_cc + iVar8,
                           (local_cc + 1) * uVar9 + iVar8,uVar4,&local_c4,&local_e8,&local_7c,
                           &local_d0);
              uVar4 = FUN_0047da10(local_54,local_c8,&local_e8);
              puVar12 = local_60;
              FUN_0047da10(local_6c,local_dc,&local_b8,puVar12,uVar4);
              pfVar5 = (float *)FUN_0047d9b0(puVar12,uVar4);
              local_b8 = *pfVar5;
              local_b4 = pfVar5[1];
              local_b0 = pfVar5[2];
              FUN_0043f350();
              local_d4 = local_dc * local_d4 + local_d0 * local_c8;
              pfVar5 = (float *)FUN_00498fe0(local_6c,&local_b8);
              local_7c = *pfVar5;
              local_78 = pfVar5[1];
              local_74 = pfVar5[2];
            }
          }
        }
        local_ac[0] = local_88;
        local_ac[3] = local_84;
        local_94 = local_80;
        local_ac[1] = -local_b8;
        local_9c = -local_b4;
        local_90 = -local_b0;
        local_e8 = -local_7c;
        local_e4 = -local_78;
        local_e0 = -local_74;
        local_ac[2] = local_e8;
        local_98 = local_e4;
        local_8c = local_e0;
      }
      local_8c = local_e0;
      local_98 = local_e4;
      local_ac[2] = local_e8;
      bVar6 = (byte)*(undefined2 *)(in_ECX + 0x3c);
      if ((bVar6 >> 6 & 1) != 0) {
        local_ac[0] = -local_88;
        local_ac[3] = -local_84;
        local_94 = -local_80;
        local_e8 = -local_ac[1];
        local_e4 = -local_9c;
        local_e0 = -local_90;
        local_ac[1] = local_e8;
        local_9c = local_e4;
        local_90 = local_e0;
      }
      fVar3 = local_94;
      fVar1 = local_ac[3];
      fVar2 = local_ac[0];
      if (*(short *)(in_ECX + 0x60) == 1) {
        local_e8 = local_ac[0];
        local_e4 = local_ac[3];
        local_e0 = local_94;
        local_c4 = -local_ac[1];
        local_c0 = -local_9c;
        local_bc = -local_90;
        local_ac[0] = local_c4;
        local_ac[3] = local_c0;
        local_94 = local_bc;
        local_ac[1] = fVar2;
        local_9c = fVar1;
        local_90 = fVar3;
      }
      else if (*(short *)(in_ECX + 0x60) == 2) {
        local_e8 = local_ac[0];
        local_e4 = local_ac[3];
        local_e0 = local_94;
        local_c4 = -local_ac[2];
        local_c0 = -local_98;
        local_bc = -local_8c;
        local_ac[0] = local_c4;
        local_ac[3] = local_c0;
        local_94 = local_bc;
        local_ac[2] = fVar2;
        local_98 = fVar1;
        local_8c = fVar3;
      }
      if ((bVar6 >> 3 & 1) != 0) {
        if ((_DAT_00b3dd9c & 1) == 0) {
          _DAT_00b3dd9c = _DAT_00b3dd9c | 1;
          _DAT_00b3dd98 = 4.0 / _DAT_00b3f9a4;
        }
        local_d0 = (float)*(int *)(in_ECX + 0x68) * *(float *)(in_ECX + 0x58);
        if (local_d4 < *(float *)(in_ECX + 100)) {
          local_d8 = local_d4 / *(float *)(in_ECX + 100);
          fVar11 = (float10)FUN_009870a0();
          local_d8 = (float)fVar11;
          local_d0 = local_d8 * _DAT_00b3dd98 * local_d0;
        }
        FUN_0070fe20(local_d0,local_88,local_84,local_80);
        pfVar5 = (float *)FUN_007100a0(local_24,local_ac);
        pfVar10 = local_ac;
        for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
          *pfVar10 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          pfVar10 = pfVar10 + 1;
        }
      }
    }
  }
  pfVar5 = local_ac;
  for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
    *param_4 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    param_4 = param_4 + 1;
  }
  return;
}



float10 FUN_006dd0f0(int param_1,int param_2,undefined4 param_3)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  undefined1 local_c [12];
  
  iVar1 = *(int *)(in_ECX + 0x48);
  if (iVar1 == 0) {
    iVar2 = 0;
    iVar1 = 0;
    bVar3 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x10);
    bVar3 = *(byte *)(iVar1 + 0x14);
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  (*(code *)(&DAT_00b3d250)[iVar2])
            (param_3,(uint)bVar3 * param_1 + iVar1,(uint)bVar3 * param_2 + iVar1,local_c);
  fVar4 = (float10)FUN_00982c30();
  return (float10)(float)fVar4;
}



float10 FUN_006dd180(undefined4 param_1,undefined4 param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float local_4;
  
  local_4 = 0.0;
  iVar2 = 0;
  do {
    fVar3 = (float10)FUN_006dd0f0(param_1,param_2,*(float *)((int)&DAT_00b24740 + iVar2) * param_3);
    pfVar1 = (float *)((int)&DAT_00b2472c + iVar2);
    iVar2 = iVar2 + 4;
    local_4 = (float)(fVar3 * (float10)*pfVar1 + (float10)local_4);
  } while (iVar2 < 0x14);
  return (float10)(local_4 * param_3);
}



uint FUN_006dd270(int param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined3 uVar6;
  undefined2 uVar7;
  byte bVar8;
  int in_ECX;
  byte *pbVar9;
  byte bVar10;
  byte *pbVar11;
  int iVar12;
  int unaff_EDI;
  undefined1 auStack_c [8];
  undefined1 auStack_4 [4];
  
  uVar4 = FUN_00715820(param_1);
  if ((((char)uVar4 == '\0') ||
      (uVar4 = (**(code **)(**(int **)(in_ECX + 0x48) + 0x2c))(*(undefined4 *)(param_1 + 0x48)),
      (char)uVar4 == '\0')) ||
     (uVar4 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x2c))(*(undefined4 *)(param_1 + 0x4c)),
     (char)uVar4 == '\0')) {
    return uVar4 & 0xffffff00;
  }
  pbVar11 = *(byte **)(in_ECX + 0x50);
  if (pbVar11 == (byte *)0x0) {
LAB_006dd2c5:
    if (*(int *)(param_1 + 0x50) != 0) {
LAB_006dd2cb:
      return uVar4 & 0xffffff00;
    }
  }
  else {
    if (*(int *)(param_1 + 0x50) == 0) goto LAB_006dd2cb;
    if (pbVar11 == (byte *)0x0) goto LAB_006dd2c5;
  }
  if (pbVar11 != (byte *)0x0) {
    FUN_006dc770(auStack_c,&stack0xffffffec,&stack0xfffffff0,auStack_4);
    pbVar9 = *(byte **)(param_1 + 0x50);
    for (uVar4 = unaff_EDI * 4; 3 < uVar4; uVar4 = uVar4 - 4) {
      if (*(int *)pbVar11 != *(int *)pbVar9) goto LAB_006dd328;
      pbVar9 = pbVar9 + 4;
      pbVar11 = pbVar11 + 4;
    }
    if (uVar4 == 0) {
LAB_006dd385:
      uVar5 = 0;
    }
    else {
LAB_006dd328:
      iVar12 = (uint)*pbVar11 - (uint)*pbVar9;
      if (iVar12 == 0) {
        if (uVar4 == 1) goto LAB_006dd385;
        iVar12 = (uint)pbVar11[1] - (uint)pbVar9[1];
        if (iVar12 == 0) {
          if (uVar4 == 2) goto LAB_006dd385;
          iVar12 = (uint)pbVar11[2] - (uint)pbVar9[2];
          if (iVar12 == 0) {
            if ((uVar4 == 3) || (iVar12 = (uint)pbVar11[3] - (uint)pbVar9[3], iVar12 == 0))
            goto LAB_006dd385;
          }
        }
      }
      uVar5 = 1;
      if (iVar12 < 1) {
        uVar5 = 0xffffffff;
      }
    }
    uVar4 = 0;
    if (uVar5 != 0) goto LAB_006dd457;
  }
  fVar1 = *(float *)(in_ECX + 0x54);
  fVar2 = *(float *)(param_1 + 0x54);
  uVar5 = CONCAT22((short)(uVar4 >> 0x10),
                   (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                   (ushort)(fVar2 == fVar1) << 0xe);
  if (fVar2 == fVar1) {
    uVar6 = (undefined3)(uVar5 >> 8);
    bVar3 = *(byte *)(param_1 + 0x3c) ^ *(byte *)(in_ECX + 0x3c);
    uVar5 = CONCAT31(uVar6,bVar3);
    if ((bVar3 & 1) == 0) {
      bVar8 = (byte)*(undefined2 *)(param_1 + 0x3c);
      bVar10 = (byte)*(undefined2 *)(in_ECX + 0x3c);
      bVar3 = (bVar8 ^ bVar10) >> 1;
      uVar5 = CONCAT31(uVar6,bVar3);
      if (((bVar3 & 1) == 0) &&
         (uVar4 = *(uint *)(in_ECX + 0x68), uVar5 = uVar4, uVar4 == *(uint *)(param_1 + 0x68))) {
        uVar6 = (undefined3)(uVar4 >> 8);
        bVar3 = (bVar8 ^ bVar10) >> 2;
        uVar5 = CONCAT31(uVar6,bVar3);
        if (((bVar3 & 1) == 0) &&
           (((bVar3 = (bVar8 ^ bVar10) >> 3, uVar5 = CONCAT31(uVar6,bVar3), (bVar3 & 1) == 0 &&
             (bVar3 = (bVar8 ^ bVar10) >> 4, uVar5 = CONCAT31(uVar6,bVar3), (bVar3 & 1) == 0)) &&
            (bVar3 = (bVar8 ^ bVar10) >> 5, uVar5 = CONCAT31(uVar6,bVar3), (bVar3 & 1) == 0)))) {
          fVar1 = *(float *)(in_ECX + 0x58);
          fVar2 = *(float *)(param_1 + 0x58);
          uVar7 = (undefined2)(uVar4 >> 0x10);
          uVar5 = CONCAT22(uVar7,(ushort)(fVar2 < fVar1) << 8 |
                                 (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                 (ushort)(fVar2 == fVar1) << 0xe);
          if (fVar2 == fVar1) {
            fVar1 = *(float *)(in_ECX + 0x5c);
            fVar2 = *(float *)(param_1 + 0x5c);
            uVar5 = CONCAT22(uVar7,(ushort)(fVar2 < fVar1) << 8 |
                                   (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                   (ushort)(fVar2 == fVar1) << 0xe);
            if (((fVar2 == fVar1) &&
                (uVar5 = CONCAT22(uVar7,*(short *)(in_ECX + 0x60)),
                *(short *)(in_ECX + 0x60) == *(short *)(param_1 + 0x60))) &&
               (((bVar8 ^ bVar10) >> 6 & 1) == 0)) {
              return CONCAT31((int3)(uVar5 >> 8),1);
            }
          }
        }
      }
    }
  }
LAB_006dd457:
  return uVar5 & 0xffffff00;
}



void FUN_006dd470(byte param_1)

{
  FUN_006dc7d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



float10 FUN_006dd490(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  float10 fVar4;
  undefined4 local_8;
  
  if (*(float *)(in_ECX + 0x54) < 0.0) {
    if (*(int *)(in_ECX + 0x48) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(uint *)(*(int *)(in_ECX + 0x48) + 8);
    }
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x50));
    puVar2 = (undefined4 *)
             FUN_00401f00(-(uint)((int)((ulonglong)local_8 * 4 >> 0x20) != 0) |
                          (uint)((ulonglong)local_8 * 4));
    *(undefined4 **)(in_ECX + 0x50) = puVar2;
    *puVar2 = 0;
    uVar3 = 0;
    if (local_8 != 1) {
      do {
        uVar1 = uVar3 + 1;
        fVar4 = (float10)FUN_006dd180(uVar3,uVar1,0x3f800000);
        *(float *)(*(int *)(in_ECX + 0x50) + 4 + uVar3 * 4) =
             *(float *)(*(int *)(in_ECX + 0x50) + uVar3 * 4) + (float)fVar4;
        uVar3 = uVar1;
      } while (uVar1 < local_8 - 1);
    }
    *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(*(int *)(in_ECX + 0x50) + -4 + local_8 * 4);
  }
  return (float10)*(float *)(in_ECX + 0x54);
}



void FUN_006dd540(float param_1,uint *param_2,int *param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  int in_ECX;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float local_20;
  float fStack_18;
  int iStack_14;
  
  if (*(int *)(in_ECX + 0x48) == 0) {
    local_20 = 0.0;
  }
  else {
    local_20 = *(float *)(*(int *)(in_ECX + 0x48) + 8);
  }
  if (param_1 == 0.0) {
    *param_2 = 0;
    *param_3 = 1;
    *param_4 = 0.0;
    return;
  }
  if (param_1 < 0.0) {
    fVar6 = (float10)FUN_00982bfa();
    param_1 = (float)fVar6 + 1.0;
  }
  if (param_1 == 1.0) {
    *param_2 = (int)local_20 - 2;
    *param_3 = (int)local_20 + -1;
    *param_4 = 1.0;
    return;
  }
  if (1.0 < param_1) {
    fVar6 = (float10)FUN_00982bfa();
    param_1 = (float)fVar6;
  }
  param_1 = param_1 * *(float *)(in_ECX + 0x54);
  uVar4 = 0;
  iVar5 = 1;
  if (local_20 != 1.4013e-45) {
    pfVar3 = *(float **)(in_ECX + 0x50);
    do {
      pfVar3 = pfVar3 + 1;
      if (param_1 <= *pfVar3) {
        iVar1 = *(int *)(in_ECX + 0x50);
        fStack_18 = param_1 - *(float *)(iVar1 + uVar4 * 4);
        local_20 = fStack_18 / (*(float *)(iVar1 + iVar5 * 4) - *(float *)(iVar1 + uVar4 * 4));
        break;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 1;
    } while (uVar4 < (int)local_20 - 1U);
  }
  iStack_14 = 0;
  do {
    fVar6 = (float10)FUN_006dd180(uVar4,iVar5,local_20);
    fVar2 = ABS((float)(fVar6 - (float10)fStack_18));
    if (fVar2 < 0.0001 != (fVar2 == 0.0001)) break;
    fVar7 = (float10)FUN_006dd0f0(uVar4,iVar5,local_20);
    iStack_14 = iStack_14 + 1;
    local_20 = (float)((float10)local_20 - (float10)(float)(fVar6 - (float10)fStack_18) / fVar7);
  } while (iStack_14 < 0x20);
  *param_2 = uVar4;
  *param_3 = iVar5;
  *param_4 = local_20;
  return;
}



void FUN_006dd710(float param_1,uint *param_2,uint *param_3,float *param_4)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  float *pfVar5;
  byte bVar6;
  int in_ECX;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  int local_8;
  
  if ((*(byte *)(in_ECX + 0x3c) >> 4 & 1) != 0) {
    FUN_006dd540(param_1,param_2,param_3,param_4);
    *(uint *)(in_ECX + 0x40) = *param_2;
    return;
  }
  iVar3 = *(int *)(in_ECX + 0x48);
  if (iVar3 == 0) {
    pfVar9 = (float *)0x0;
    local_8 = 0;
    bVar6 = 0;
  }
  else {
    local_8 = *(int *)(iVar3 + 8);
    bVar6 = *(byte *)(iVar3 + 0x14);
    pfVar9 = *(float **)(iVar3 + 0xc);
  }
  if (param_1 <= *pfVar9) {
    *param_2 = 0;
    *param_3 = 1;
    *param_4 = 0.0;
    return;
  }
  uVar8 = (uint)bVar6;
  uVar1 = local_8 - 1;
  fVar2 = *(float *)(uVar8 * uVar1 + (int)pfVar9);
  if (fVar2 < param_1 != (fVar2 == param_1)) {
    *param_2 = local_8 - 2;
    *param_3 = uVar1;
    *param_4 = 1.0;
    return;
  }
  uVar7 = *(uint *)(in_ECX + 0x40);
  bVar4 = true;
  do {
    pfVar5 = param_4;
    if (uVar1 <= uVar7) {
LAB_006dd842:
      *param_4 = (param_1 - *(float *)(uVar8 * uVar7 + (int)pfVar9)) /
                 (*(float *)(uVar8 * (int)pfVar5 + (int)pfVar9) -
                 *(float *)(uVar8 * uVar7 + (int)pfVar9));
      *param_2 = uVar7;
      *param_3 = (uint)pfVar5;
      return;
    }
    if ((*(float *)(uVar8 * uVar7 + (int)pfVar9) == param_1) ||
       ((*(float *)(uVar8 * uVar7 + (int)pfVar9) < param_1 &&
        (param_1 < *(float *)((uVar7 + 1) * uVar8 + (int)pfVar9))))) {
      *(uint *)(in_ECX + 0x40) = uVar7;
      pfVar5 = (float *)(uVar7 + 1);
      goto LAB_006dd842;
    }
    if ((uVar7 == local_8 - 2U) && (bVar4)) {
      uVar7 = 0;
      bVar4 = false;
    }
    else {
      uVar7 = uVar7 + 1;
    }
  } while( true );
}



void FUN_006dd980(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int in_ECX;
  float10 fVar5;
  
  FUN_00715e70(param_1);
  puVar3 = (undefined4 *)FUN_007124a0();
  puVar1 = *(undefined4 **)(in_ECX + 0x48);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x48) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = (undefined4 *)FUN_007124a0();
  puVar1 = *(undefined4 **)(in_ECX + 0x4c);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x4c) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  *(ushort *)(in_ECX + 0x3c) = *(ushort *)(in_ECX + 0x3c) | 1;
  if ((((byte)*(undefined2 *)(in_ECX + 0x3c) >> 4 & 1) != 0) &&
     ((*(byte *)(in_ECX + 0x3c) & 1) != 0)) {
    fVar5 = (float10)FUN_006dd490();
    *(float *)(in_ECX + 0x54) = (float)fVar5;
    *(ushort *)(in_ECX + 0x3c) = *(ushort *)(in_ECX + 0x3c) & 0xfffe;
  }
  iVar2 = *(int *)(in_ECX + 0x48);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 8) != 0) {
      fVar5 = (float10)(**(code **)(&DAT_00b3d130 + *(int *)(iVar2 + 0x10) * 4))
                                 (*(undefined4 *)(iVar2 + 0xc),*(int *)(iVar2 + 8));
      *(float *)(in_ECX + 100) = (float)fVar5;
    }
  }
  return;
}



void FUN_006dda70(int *param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = param_1;
  FUN_00716050(param_1);
  param_1 = (int *)0x2;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x3c,2,&param_1,1);
  param_1 = (int *)0x4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x68,4,&param_1,1);
  param_1 = (int *)0x4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x58,4,&param_1,1);
  param_1 = (int *)0x4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x5c,4,&param_1,1);
  param_1 = (int *)0x2;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x60,2,&param_1,1);
  (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(in_ECX + 0x48));
  (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(in_ECX + 0x4c));
  return;
}



void FUN_006ddb50(float param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int in_ECX;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [9];
  
  iVar5 = *(int *)(in_ECX + 0x4c);
  if (iVar5 != 0) {
    uVar1 = *(undefined4 *)(iVar5 + 0x10);
    iVar2 = *(int *)(iVar5 + 0xc);
    uVar3 = *(undefined4 *)(iVar5 + 8);
    if ((iVar2 != 0) && (iVar5 = *(int *)(in_ECX + 0x48), iVar5 != 0)) {
      local_38 = CONCAT31(local_38._1_3_,*(undefined1 *)(iVar5 + 0x14));
      if ((*(int *)(iVar5 + 0xc) != 0) && (cVar4 = FUN_006c36b0(param_1), cVar4 == '\0')) {
        fVar8 = (float10)FUN_006bb270(*(undefined4 *)(in_ECX + 0x28),iVar2,uVar1,uVar3,in_ECX + 0x44
                                      ,local_38);
        param_1 = (float)fVar8;
        FUN_006dd710(param_1,&local_38,&local_34,&param_1);
        if ((*(byte *)(in_ECX + 0x3c) >> 5 & 1) != 0) {
          FUN_006dc940(local_38,local_34,param_1,local_24);
          puVar6 = local_24;
          puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x30) + 0x30);
          for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        FUN_006dc8e0(&local_30,local_38,local_34,param_1);
        iVar5 = *(int *)(in_ECX + 0x30);
        *(undefined4 *)(iVar5 + 0x54) = local_30;
        *(undefined4 *)(iVar5 + 0x58) = local_2c;
        *(undefined4 *)(iVar5 + 0x5c) = local_28;
      }
    }
  }
  return;
}



void FUN_006ddc60(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *_Dst;
  int in_ECX;
  uint uVar2;
  float10 fVar3;
  
  FUN_00715d80(param_1,param_2);
  *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(in_ECX + 0x3c);
  if (*(int **)(in_ECX + 0x48) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x48) + 0x18))(param_2);
    FUN_006dc720(uVar1);
  }
  if (*(int **)(in_ECX + 0x4c) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x18))(param_2);
    FUN_0071b140(uVar1);
  }
  if ((*(byte *)(in_ECX + 0x3c) >> 2 & 1) == 0) {
    *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) & 0xfffb;
  }
  else {
    *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) | 4;
  }
  if ((*(byte *)(in_ECX + 0x3c) >> 3 & 1) == 0) {
    *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) & 0xfff7;
  }
  else {
    *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) | 8;
  }
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(in_ECX + 0x68);
  if ((*(byte *)(in_ECX + 0x3c) >> 4 & 1) == 0) {
    *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) & 0xffef;
  }
  else {
    *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) | 0x10;
    if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
      fVar3 = (float10)FUN_006dd490();
      *(float *)(param_1 + 0x54) = (float)fVar3;
      *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) & 0xfffe;
    }
  }
  if ((*(byte *)(in_ECX + 0x3c) >> 5 & 1) == 0) {
    *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) & 0xffdf;
  }
  else {
    *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) | 0x20;
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(in_ECX + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(in_ECX + 0x5c);
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(in_ECX + 0x60);
  if ((*(byte *)(in_ECX + 0x3c) >> 6 & 1) == 0) {
    *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) & 0xffbf;
  }
  else {
    *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) | 0x40;
  }
  if ((*(byte *)(in_ECX + 0x3c) >> 1 & 1) == 0) {
    *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) & 0xfffd;
  }
  else {
    *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) | 2;
  }
  if (*(int *)(in_ECX + 0x50) != 0) {
    if (*(int *)(in_ECX + 0x48) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(*(int *)(in_ECX + 0x48) + 8);
    }
    _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)uVar2 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)uVar2 * 4));
    *(void **)(param_1 + 0x50) = _Dst;
    _memcpy(_Dst,*(void **)(in_ECX + 0x50),uVar2 * 4);
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(in_ECX + 0x54);
  return;
}



undefined4 * FUN_006dddc0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7e79;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x6c,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00715990();
    *puVar2 = &PTR_FUN_00a7aeec;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x16] = 0;
    puVar2[0x10] = 0;
    puVar2[0x17] = 0;
    puVar2[0x11] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 1;
    *(undefined2 *)(puVar2 + 0x18) = 0;
    puVar2[0x15] = 0xbf800000;
    puVar2[0x14] = 0;
    *(undefined2 *)(puVar2 + 0xf) = 3;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006dde70(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00716140(param_1);
  param_1 = FUN_0070f910(DAT_00b3ddc0);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined4 * FUN_006ddec0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7ec9;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x6c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00715990();
    *puVar2 = &PTR_FUN_00a7aeec;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x16] = 0;
    puVar2[0x10] = 0;
    puVar2[0x17] = 0;
    puVar2[0x11] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 1;
    *(undefined2 *)(puVar2 + 0x18) = 0;
    puVar2[0x15] = 0xbf800000;
    puVar2[0x14] = 0;
    *(undefined2 *)(puVar2 + 0xf) = 3;
  }
  local_4 = 0xffffffff;
  FUN_006ddc60(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_006ddf90(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a7af64;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006de010(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 == 0) {
    if (*(int *)(in_ECX + 0x10) != 0) {
      FUN_006e3540(0,0,0);
    }
  }
  else {
    if (*(int *)(in_ECX + 0x10) == 0) {
      puVar2 = (undefined4 *)FUN_00401f00(0x18,uVar1);
      local_4 = 0;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        FUN_007005d0();
        *puVar2 = &PTR_FUN_00a7a2ec;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        *(undefined1 *)(puVar2 + 5) = 0;
      }
      local_4 = 0xffffffff;
      FUN_0075fa90(puVar2);
    }
    FUN_006e3540(param_1,param_2,param_3);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006de0d0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  
  FUN_00401f20(*in_ECX);
  FUN_00401f20(in_ECX[1]);
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



bool FUN_006de110(int *param_1,uint param_2)

{
  int *in_ECX;
  float *pfVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    pfVar1 = (float *)*in_ECX;
    iVar3 = *param_1 - (int)pfVar1;
    do {
      if (*(float *)(iVar3 + (int)pfVar1) != *pfVar1) {
        return false;
      }
      if (*(float *)(iVar3 + 4 + (int)pfVar1) != pfVar1[1]) {
        return false;
      }
      if (*(float *)(iVar3 + 8 + (int)pfVar1) != pfVar1[2]) {
        return false;
      }
      uVar2 = uVar2 + 1;
      pfVar1 = pfVar1 + 3;
    } while (uVar2 < param_2);
  }
  if ((char *)in_ECX[1] == (char *)0x0) {
    if (param_1[1] == 0) goto LAB_006de1ae;
  }
  else if (param_1[1] != 0) {
LAB_006de1ae:
    iVar3 = __stricmp((char *)in_ECX[1],(char *)param_1[1]);
    return iVar3 == 0;
  }
  return false;
}



uint FUN_006de1e0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = FUN_00700670(param_1);
  if (((((char)uVar1 == '\0') || (uVar1 = *(uint *)(in_ECX + 8), uVar1 != *(uint *)(param_1 + 8)))
      || (*(int *)(in_ECX + 0xc) != *(int *)(param_1 + 0xc))) ||
     (*(char *)(in_ECX + 0x14) != *(char *)(param_1 + 0x14))) {
    return uVar1 & 0xffffff00;
  }
  uVar5 = 0;
  uVar2 = 0;
  if (uVar1 != 0) {
    iVar4 = 0;
    do {
      if (uVar5 < *(uint *)(param_1 + 8)) {
        iVar3 = *(int *)(param_1 + 0x10) + iVar4;
      }
      else {
        iVar3 = 0;
      }
      uVar1 = FUN_006de110(iVar3,*(undefined4 *)(in_ECX + 0xc));
      if ((char)uVar1 == '\0') {
        return uVar1 & 0xffffff00;
      }
      uVar2 = *(uint *)(in_ECX + 8);
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (uVar5 < uVar2);
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}



void FUN_006de270(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x21c);
  param_1 = 4;
  (**(code **)(*piVar1 + 4))(*piVar1,param_2,param_3 * 4,&param_1,1);
  return;
}



void FUN_006de2b0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x220);
  param_1 = 4;
  (**(code **)(*piVar1 + 8))(*piVar1,param_2,param_3 * 4,&param_1,1);
  return;
}



void FUN_006de2f0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  undefined1 local_4 [4];
  
  iVar1 = param_1;
  FUN_00713620(in_ECX + 1);
  if ((0xa010067 < *(uint *)(iVar1 + 0xd8)) && (*(uint *)(iVar1 + 4) < 10)) {
    param_1 = 4;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),local_4,4,&param_1,1);
  }
  uVar2 = param_2;
  uVar3 = FUN_00401f00(-(uint)((int)((ulonglong)param_2 * 0xc >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 0xc));
  *in_ECX = uVar3;
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),uVar3,uVar2 * 0xc,&param_1,1);
  return;
}



void FUN_006de390(void)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca4b8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7af64;
  pvVar1 = (void *)in_ECX[4];
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0xc,*(int *)((int)pvVar1 + -4),FUN_006de0d0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  local_4 = 0xffffffff;
  FUN_0055ace0(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006de410(int param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  LONG LVar9;
  char *pcVar10;
  char *_Dst;
  int in_ECX;
  uint uVar11;
  int iVar12;
  int *unaff_FS_OFFSET;
  uint *local_134;
  char cStack_12d;
  int iStack_12c;
  int iStack_128;
  int local_124;
  int iStack_120;
  uint *puStack_11c;
  undefined4 uStack_118;
  int iStack_114;
  char acStack_110 [256];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c7f0c;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_134;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xfffffebc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_124 = in_ECX;
  FUN_007008a0(param_1);
  puVar1 = (uint *)(in_ECX + 8);
  local_134 = (uint *)0x4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))
            (*(int *)(param_1 + 0x21c),puVar1,4,&local_134,1,uVar6);
  local_134 = (uint *)0x4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))
            (*(int *)(param_1 + 0x21c),in_ECX + 0xc,4,&local_134,1);
  local_134 = (uint *)0x1;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),&cStack_12d,1,&local_134,1)
  ;
  uVar6 = *puVar1;
  *(bool *)(in_ECX + 0x14) = cStack_12d == '\x01';
  uVar11 = -(uint)((int)((ulonglong)uVar6 * 0xc >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0xc);
  puStack_11c = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar11) | uVar11 + 4);
  uStack_4 = 0;
  if (puStack_11c == (uint *)0x0) {
    local_134 = (uint *)0x0;
  }
  else {
    *puStack_11c = uVar6;
    local_134 = puStack_11c + 1;
    _eh_vector_constructor_iterator_(local_134,0xc,uVar6,FUN_004842d0,FUN_006de0d0);
  }
  uStack_4 = 0xffffffff;
  *(uint **)(in_ECX + 0x10) = local_134;
  local_134 = (uint *)0x0;
  if (*puVar1 != 0) {
    iStack_12c = 0;
    do {
      if (*(uint *)(param_1 + 0xd8) < 0xa010068) {
        iStack_128 = 4;
        (**(code **)(*(int *)(param_1 + 0x21c) + 4))
                  (*(int *)(param_1 + 0x21c),&iStack_120,4,&iStack_128,1);
        uStack_118 = 4;
        (**(code **)(*(int *)(param_1 + 0x21c) + 4))
                  (*(int *)(param_1 + 0x21c),&iStack_114,4,&uStack_118,1);
        iVar12 = iStack_114;
        if (iStack_120 != 0) {
          puStack_11c = (uint *)CONCAT31(puStack_11c._1_3_,(&DAT_00b3d3e8)[iStack_114]);
          uVar7 = (**(code **)(&DAT_00b3d088 + iStack_114 * 4))(param_1,iStack_120);
          (**(code **)(&DAT_00b3d410 + iVar12 * 4))(uVar7,iStack_120,puStack_11c);
          iStack_128 = FUN_00401f00(0x18);
          uStack_4 = 1;
          if (iStack_128 == 0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = (int *)FUN_006d2990(0);
          }
          uStack_4 = 0xffffffff;
          FUN_006de010(uVar7,iStack_120,iVar12);
          iVar3 = *(int *)(local_124 + 0x10);
          piVar4 = *(int **)(iStack_12c + 8 + iVar3);
          iVar12 = iStack_12c + 8;
          if (piVar4 != piVar8) {
            if (((piVar4 != (int *)0x0) && (LVar9 = InterlockedDecrement(piVar4 + 1), LVar9 == 0))
               && (piVar4 != (int *)0x0)) {
              (**(code **)*piVar4)(1);
            }
            *(int **)(iVar12 + iVar3) = piVar8;
            if (piVar8 != (int *)0x0) {
              InterlockedIncrement(piVar8 + 1);
            }
          }
          (**(code **)(*piVar8 + 0x7c))();
          in_ECX = local_124;
        }
        FUN_006c5d40(acStack_110,0x100,"MT %d",local_134);
        iVar12 = *(int *)(in_ECX + 0x10) + iStack_12c;
        FUN_00401f20(*(undefined4 *)(iVar12 + 4));
        pcVar10 = acStack_110;
        do {
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        _Dst = (char *)FUN_00401f00(pcVar10 + (1 - (int)(acStack_110 + 1)));
        *(char **)(iVar12 + 4) = _Dst;
        _strcpy_s(_Dst,(rsize_t)(pcVar10 + (1 - (int)(acStack_110 + 1))),acStack_110);
        lVar5 = (ulonglong)*(uint *)(in_ECX + 0xc) * 0xc;
        iStack_128 = FUN_00401f00(-(uint)((int)((ulonglong)lVar5 >> 0x20) != 0) | (uint)lVar5);
        uVar6 = 0;
        if (*(uint *)(in_ECX + 0xc) != 0) {
          do {
            FUN_00709430(param_1);
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(uint *)(in_ECX + 0xc));
        }
        piVar8 = (int *)(*(int *)(local_124 + 0x10) + iStack_12c);
        FUN_00401f20(*piVar8);
        *piVar8 = iStack_128;
        in_ECX = local_124;
      }
      else {
        FUN_006de2f0(param_1,*(undefined4 *)(in_ECX + 0xc));
      }
      iStack_12c = iStack_12c + 0xc;
      local_134 = (uint *)((int)local_134 + 1);
    } while (local_134 < *(uint **)(in_ECX + 8));
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_006de790(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 *puVar3;
  int iStack_c;
  uint local_8 [2];
  
  iVar2 = param_1;
  FUN_0068f970(param_1);
  local_8[0] = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))
            (*(int *)(iVar2 + 0x220),(int *)(in_ECX + 8),4,local_8,1);
  local_8[0] = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 0xc,4,local_8,1);
  param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(in_ECX + 0x14));
  local_8[0] = 1;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),&param_1,1,local_8,1);
  local_8[0] = 0;
  if (*(int *)(in_ECX + 8) != 0) {
    iStack_c = 0;
    do {
      puVar3 = (undefined4 *)(*(int *)(in_ECX + 0x10) + iStack_c);
      iVar1 = *(int *)(in_ECX + 0xc);
      FUN_00713720(puVar3[1]);
      if (iVar1 != 0) {
        local_8[1] = 4;
        (**(code **)(*(int *)(iVar2 + 0x220) + 8))
                  (*(int *)(iVar2 + 0x220),*puVar3,iVar1 * 0xc,local_8 + 1,1);
      }
      iStack_c = iStack_c + 0xc;
      local_8[0] = local_8[0] + 1;
    } while (local_8[0] < *(uint *)(in_ECX + 8));
  }
  return;
}



void FUN_006de890(byte param_1)

{
  FUN_006de390();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006dea70(undefined4 *param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(in_ECX + 0x30);
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  switch(*(byte *)(in_ECX + 0x40) & 7) {
  case 0:
    local_c = *(undefined4 *)(iVar1 + 0x1c);
    local_8 = *(undefined4 *)(iVar1 + 0x20);
    local_4 = *(undefined4 *)(iVar1 + 0x24);
    break;
  case 1:
    local_c = *(undefined4 *)(iVar1 + 0x28);
    local_8 = *(undefined4 *)(iVar1 + 0x2c);
    local_4 = *(undefined4 *)(iVar1 + 0x30);
    break;
  case 2:
    local_c = *(undefined4 *)(iVar1 + 0x34);
    local_8 = *(undefined4 *)(iVar1 + 0x38);
    local_4 = *(undefined4 *)(iVar1 + 0x3c);
    break;
  case 3:
    local_c = *(undefined4 *)(iVar1 + 0x40);
    local_8 = *(undefined4 *)(iVar1 + 0x44);
    local_4 = *(undefined4 *)(iVar1 + 0x48);
  }
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = local_4;
  return;
}



void FUN_006deb70(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 local_c [12];
  
  if ((*(byte *)(in_ECX + 8) >> 5 & 1) == 0) {
    cVar2 = FUN_006c36b0(param_1);
    if (cVar2 != '\0') {
      if (*(int **)(in_ECX + 0x3c) == (int *)0x0) {
        return;
      }
      cVar2 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x94))();
      if (cVar2 == '\0') {
        return;
      }
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x28) = 0xff7fffff;
  }
  if ((*(int **)(in_ECX + 0x3c) != (int *)0x0) &&
     (cVar2 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x54))
                        (*(undefined4 *)(in_ECX + 0x28),*(undefined4 *)(in_ECX + 0x30),local_c),
     cVar2 != '\0')) {
    iVar1 = *(int *)(in_ECX + 0x30);
    if (0.0 <= fStack_18) {
      if (1.0 < fStack_18) {
        fStack_18 = 1.0;
      }
    }
    else {
      fStack_18 = 0.0;
    }
    if (0.0 <= fStack_14) {
      if (1.0 < fStack_14) {
        fStack_14 = 1.0;
      }
    }
    else {
      fStack_14 = 0.0;
    }
    if (0.0 <= fStack_10) {
      if (1.0 < fStack_10) {
        fStack_10 = 1.0;
      }
    }
    else {
      fStack_10 = 0.0;
    }
    switch(*(byte *)(in_ECX + 0x40) & 7) {
    case 0:
      *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + 1;
      *(float *)(iVar1 + 0x1c) = fStack_18;
      *(float *)(iVar1 + 0x20) = fStack_14;
      *(float *)(iVar1 + 0x24) = fStack_10;
      return;
    case 1:
      *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + 1;
      *(float *)(iVar1 + 0x28) = fStack_18;
      *(float *)(iVar1 + 0x2c) = fStack_14;
      *(float *)(iVar1 + 0x30) = fStack_10;
      return;
    case 2:
      *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + 1;
      *(float *)(iVar1 + 0x34) = fStack_18;
      *(float *)(iVar1 + 0x38) = fStack_14;
      *(float *)(iVar1 + 0x3c) = fStack_10;
      return;
    case 3:
      *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + 1;
      *(float *)(iVar1 + 0x40) = fStack_18;
      *(float *)(iVar1 + 0x44) = fStack_14;
      *(float *)(iVar1 + 0x48) = fStack_10;
    }
  }
  return;
}



void FUN_006dedd0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  thunk_FUN_006ce320(param_1);
  if (*(uint *)(iVar1 + 0xd8) < 0xa000102) {
    *(ushort *)(in_ECX + 0x40) = *(ushort *)(iVar1 + 0x25a) >> 5 & 0xff;
  }
  else {
    param_1 = 2;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x40,2,&param_1,1);
  }
  if (*(uint *)(iVar1 + 0xd8) < 0xa010068) {
    FUN_00712a20();
  }
  return;
}



void FUN_006dee80(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7b024;
  FUN_006c3a40();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_006deeb0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x44,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ecc00();
    *puVar2 = &PTR_FUN_00a7b024;
    *(undefined2 *)(puVar2 + 0x10) = 0;
  }
  local_4 = 0xffffffff;
  thunk_FUN_006ce2c0(puVar2,param_1);
  *(undefined2 *)(puVar2 + 0x10) = *(undefined2 *)(in_ECX + 0x40);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_006def40(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x44,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ecc00();
    *puVar2 = &PTR_FUN_00a7b024;
    *(undefined2 *)(puVar2 + 0x10) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_006defc0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ecc30(param_1);
  param_1 = FUN_0070f910(DAT_00b3de94);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_006df010(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *_Dst;
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x14));
  *(undefined4 *)(in_ECX + 0x14) = 0;
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    _Dst = (char *)FUN_00401f00(pcVar2 + (1 - (int)(param_1 + 1)));
    *(char **)(in_ECX + 0x14) = _Dst;
    _strcpy_s(_Dst,(rsize_t)(pcVar2 + (1 - (int)(param_1 + 1))),param_1);
  }
  return;
}



undefined4 FUN_006df060(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x10) == 0) {
    iVar1 = (**(code **)(*param_1 + 0x4c))(*(undefined4 *)(in_ECX + 0x14));
    if (iVar1 == 0) {
      return 0;
    }
    *(int *)(in_ECX + 0x10) = iVar1;
  }
  return 1;
}



undefined4 FUN_006df090(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + 8);
  if (iVar1 != 0) {
    FUN_006df010(iVar1);
    *(undefined4 *)(in_ECX + 0x10) = 0;
    return 1;
  }
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x14));
  *(undefined4 *)(in_ECX + 0x14) = 0;
  return 0;
}



void FUN_006df0d0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c7f5e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7b0d4;
  local_4 = 0;
  FUN_00401f20(in_ECX[5],uVar1);
  in_ECX[5] = 0;
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(in_ECX + 0xe,4,3,FUN_007016a0);
  local_4 = 0xffffffff;
  FUN_006eba30();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006df950(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  thunk_FUN_00700770(param_1,param_2);
  uVar1 = *(ushort *)(in_ECX + 0xc);
  *(ushort *)(param_1 + 0xc) = uVar1;
  if ((*(byte *)(in_ECX + 0xc) & 1) == 0) {
    uVar1 = uVar1 & 0xfffe;
  }
  else {
    uVar1 = uVar1 | 1;
  }
  *(ushort *)(param_1 + 0xc) = uVar1;
  *(ushort *)(param_1 + 0xc) =
       *(ushort *)(param_1 + 0xc) ^ (byte)((byte)uVar1 ^ *(byte *)(in_ECX + 0xc)) & 6;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(in_ECX + 0x10);
  FUN_00401f20(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  puVar5 = (undefined4 *)(in_ECX + 0x18);
  puVar2 = (undefined4 *)(param_1 + 0x18);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar2 = puVar2 + 1;
  }
  piVar6 = (int *)(param_1 + 0x38);
  param_2 = 3;
  do {
    if (*(int *)((int)piVar6 + (in_ECX - param_1)) != 0) {
      puVar2 = (undefined4 *)FUN_00700900();
      puVar5 = (undefined4 *)*piVar6;
      if (puVar5 != puVar2) {
        if (puVar5 != (undefined4 *)0x0) {
          LVar3 = InterlockedDecrement(puVar5 + 1);
          if ((LVar3 == 0) && (puVar5 != (undefined4 *)0x0)) {
            (**(code **)*puVar5)(1);
          }
        }
        *piVar6 = (int)puVar2;
        if (puVar2 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar2 + 1);
        }
      }
    }
    piVar6 = piVar6 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



void FUN_006dfa20(int param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  FUN_00700750(param_1);
  FUN_0055e000(in_ECX,&param_1);
  iVar1 = param_1;
  cVar2 = FUN_0055e000(*(undefined4 *)(in_ECX + 0x10),&param_1);
  if (cVar2 != '\0') {
    *(int *)(iVar1 + 0x10) = param_1;
    return;
  }
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(in_ECX + 0x10);
  return;
}



undefined1 FUN_006dfa70(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  uint uVar2;
  int *piVar3;
  
  cVar1 = thunk_FUN_00700650(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = 0;
  piVar3 = (int *)(in_ECX + 0x38);
  do {
    if ((int *)*piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*(int *)*piVar3 + 0x24))(param_1);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar2 < 3);
  return 1;
}



void FUN_006dfb70(undefined4 param_1,short param_2,char param_3)

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
  puStack_8 = &LAB_009c7f9e;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006eba00(uVar3);
  *in_ECX = &PTR_FUN_00a7b0d4;
  in_ECX[4] = param_1;
  *(undefined2 *)(in_ECX + 3) = 0;
  in_ECX[5] = 0;
  in_ECX[6] = DAT_00b24260;
  in_ECX[7] = DAT_00b24264;
  in_ECX[8] = DAT_00b24268;
  in_ECX[9] = DAT_00b3cba4;
  in_ECX[10] = DAT_00b3cba8;
  in_ECX[0xb] = DAT_00b3cbac;
  in_ECX[0xc] = DAT_00b3cbb0;
  in_ECX[0xd] = 0xff7fffff;
  piVar1 = in_ECX + 0xe;
  local_4 = 0;
  _eh_vector_constructor_iterator_(piVar1,4,3,FUN_007c88a0,FUN_007016a0);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (param_3 == '\0') {
    *(ushort *)(in_ECX + 3) = *(ushort *)(in_ECX + 3) & 0xfffe;
  }
  else {
    *(ushort *)(in_ECX + 3) = *(ushort *)(in_ECX + 3) | 1;
  }
  *(ushort *)(in_ECX + 3) = *(ushort *)(in_ECX + 3) & 0xfff9 | param_2 * 2;
  puVar2 = (undefined4 *)*piVar1;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *piVar1 = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0xf];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0xf] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x10];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x10] = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006dfcd0(byte param_1)

{
  FUN_006df0d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_006dfcf0(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x44,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_006dfb70(0,0,0);
  }
  local_4 = 0xffffffff;
  FUN_006df950(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



undefined4 FUN_006dfd70(void)

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
  local_10 = FUN_00401f00(0x44,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006dfb70(0,0,0);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_006dfde0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  int in_ECX;
  int *piVar7;
  
  iVar3 = param_1;
  thunk_FUN_007008a0(param_1);
  iVar1 = *(int *)(iVar3 + 0x21c);
  param_1 = 2;
  (**(code **)(iVar1 + 4))(iVar1,in_ECX + 0xc,2,&param_1,1);
  uVar4 = FUN_00712a90();
  *(undefined4 *)(in_ECX + 0x10) = uVar4;
  FUN_00713620(in_ECX + 0x14);
  FUN_006cb990(iVar3);
  piVar7 = (int *)(in_ECX + 0x38);
  param_1 = 3;
  do {
    puVar5 = (undefined4 *)FUN_00712a90();
    puVar2 = (undefined4 *)*piVar7;
    if (puVar2 != puVar5) {
      if (puVar2 != (undefined4 *)0x0) {
        LVar6 = InterlockedDecrement(puVar2 + 1);
        if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
      }
      *piVar7 = (int)puVar5;
      if (puVar5 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar5 + 1);
      }
    }
    piVar7 = piVar7 + 1;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return;
}


