
/* WARNING: Type propagation algorithm not settling */

void FUN_007201b0(int param_1)

{
  int iVar1;
  int in_ECX;
  ushort uVar2;
  uint local_8 [2];
  
  iVar1 = param_1;
  FUN_00732eb0(param_1);
  local_8[0] = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))
            (*(int *)(iVar1 + 0x220),(int *)(in_ECX + 0x44),4,local_8,1);
  param_1 = CONCAT31(param_1._1_3_,*(int *)(in_ECX + 0x48) != 0);
  local_8[0] = 1;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&param_1,1,local_8,1);
  if ((char)param_1 != '\0') {
    local_8[0] = 2;
    (**(code **)(*(int *)(iVar1 + 0x220) + 8))
              (*(int *)(iVar1 + 0x220),*(undefined4 *)(in_ECX + 0x48),*(int *)(in_ECX + 0x44) * 2,
               local_8,1);
  }
  local_8[0] = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))
            (*(int *)(iVar1 + 0x220),(short *)(in_ECX + 0x50),2,local_8,1);
  uVar2 = 0;
  if (*(short *)(in_ECX + 0x50) != 0) {
    do {
      local_8[0] = (uint)*(ushort *)((uint)uVar2 * 8 + *(int *)(in_ECX + 0x4c));
      local_8[1] = 2;
      (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),local_8,2,local_8 + 1,1);
      if ((short)local_8[0] != 0) {
        local_8[1] = 2;
        (**(code **)(*(int *)(iVar1 + 0x220) + 8))
                  (*(int *)(iVar1 + 0x220),
                   *(undefined4 *)(*(int *)(in_ECX + 0x4c) + 4 + (uint)uVar2 * 8),
                   (local_8[0] & 0xffff) * 2,local_8 + 1,1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 0x50));
  }
  return;
}



void FUN_00720300(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00732ef0(param_1);
  param_1 = FUN_0070f910(DAT_00b3fd2c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("m_uiTriListLength",*(undefined4 *)(in_ECX + 0x44));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fbe0("m_pusTriList",*(undefined4 *)(in_ECX + 0x48));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_007204c0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x3c) == 0) && (*(int *)(in_ECX + 0x38) != 0)) {
    piVar1 = (int *)FUN_0071b280();
    uVar2 = (**(code **)(*piVar1 + 8))(*(undefined4 *)(in_ECX + 0x38),0);
    FUN_0075fa90(uVar2);
  }
  return;
}



void FUN_00720510(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca1f8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7f644;
  puVar1 = (undefined4 *)in_ECX[0xf];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0xf] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00701d40(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007205a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  LONG LVar5;
  int in_ECX;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  int *unaff_FS_OFFSET;
  undefined4 *local_24 [4];
  undefined4 *puStack_14;
  undefined4 *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca23e;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = FUN_00401f00(0x70,uVar3);
  puVar6 = (undefined4 *)0x0;
  local_4 = 0;
  if (iVar4 != 0) {
    puVar6 = (undefined4 *)
             FUN_0070e560(*(undefined4 *)param_1[0x15],*(undefined4 *)param_1[0x16],param_1 + 2,
                          param_1[0x18],6);
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x3c);
  local_4 = 0xffffffff;
  if (puVar2 != puVar6) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 **)(in_ECX + 0x3c) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  _eh_vector_constructor_iterator_(local_24,4,6,FUN_007c88a0,FUN_007016a0);
  local_4 = 1;
  if (local_24[0] != param_1) {
    if (((local_24[0] != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(local_24[0] + 1), LVar5 == 0)) &&
       (local_24[0] != (undefined4 *)0x0)) {
      (**(code **)*local_24[0])(1);
    }
    local_24[0] = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  if (local_24[1] != param_2) {
    if (((local_24[1] != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(local_24[1] + 1), LVar5 == 0)) &&
       (local_24[1] != (undefined4 *)0x0)) {
      (**(code **)*local_24[1])(1);
    }
    local_24[1] = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  if (local_24[2] != param_3) {
    if (((local_24[2] != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(local_24[2] + 1), LVar5 == 0)) &&
       (local_24[2] != (undefined4 *)0x0)) {
      (**(code **)*local_24[2])(1);
    }
    local_24[2] = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  if (local_24[3] != param_4) {
    if (((local_24[3] != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(local_24[3] + 1), LVar5 == 0)) &&
       (local_24[3] != (undefined4 *)0x0)) {
      (**(code **)*local_24[3])(1);
    }
    local_24[3] = param_4;
    if (param_4 != (undefined4 *)0x0) {
      InterlockedIncrement(param_4 + 1);
    }
  }
  if (puStack_14 != param_5) {
    if (((puStack_14 != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(puStack_14 + 1), LVar5 == 0)) &&
       (puStack_14 != (undefined4 *)0x0)) {
      (**(code **)*puStack_14)(1);
    }
    puStack_14 = param_5;
    if (param_5 != (undefined4 *)0x0) {
      InterlockedIncrement(param_5 + 1);
    }
  }
  if (puStack_10 != param_6) {
    if (((puStack_10 != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(puStack_10 + 1), LVar5 == 0)) &&
       (puStack_10 != (undefined4 *)0x0)) {
      (**(code **)*puStack_10)(1);
    }
    puStack_10 = param_6;
    if (param_6 != (undefined4 *)0x0) {
      InterlockedIncrement(param_6 + 1);
    }
  }
  param_1 = (undefined4 *)0x0;
  ppuVar7 = local_24;
  do {
    puVar6 = *ppuVar7;
    uVar3 = 0;
    if (puVar6[0x18] != 0) {
      do {
        iVar4 = *(int *)(in_ECX + 0x3c);
        piVar1 = (int *)(puVar6[0x17] + uVar3 * 4);
        _memcpy((void *)(*(int *)(*(int *)(iVar4 + 0x5c) + *(int *)(iVar4 + 0x60) * 4) *
                         (int)param_1 + *(int *)(*(int *)(iVar4 + 0x5c) + uVar3 * 4) +
                        *(int *)(iVar4 + 0x50)),
                (void *)(*(int *)(puVar6[0x17] + uVar3 * 4) + puVar6[0x14]),piVar1[1] - *piVar1);
        puVar6 = *ppuVar7;
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)puVar6[0x18]);
    }
    param_1 = (undefined4 *)((int)param_1 + 1);
    ppuVar7 = ppuVar7 + 1;
  } while (param_1 < 6);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_24,4,6,FUN_007016a0);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_00720880(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x4c,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00701cd0();
    *puVar2 = &PTR_FUN_00a7f644;
    puVar2[0x12] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_00720900(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int in_ECX;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int local_24 [6];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca273;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(uint *)(param_1 + 0xd8) < 0xa030006) {
    thunk_FUN_00700050(param_1);
    _eh_vector_constructor_iterator_(local_24,4,6,FUN_007c88a0,FUN_007016a0);
    uVar6 = 0;
    local_4 = 0;
    iVar3 = FUN_007124d0(uVar2);
    if (iVar3 == 6) {
      do {
        puVar4 = (undefined4 *)FUN_007124a0();
        puVar1 = (undefined4 *)local_24[uVar6];
        if (puVar1 != puVar4) {
          if (((puVar1 != (undefined4 *)0x0) &&
              (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
             (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          local_24[uVar6] = (int)puVar4;
          if (puVar4 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar4 + 1);
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 6);
    }
    if (*(int *)(in_ECX + 0x3c) == 0) {
      FUN_007205a0(local_24[0],local_24[1],local_24[2],local_24[3],local_24[4],local_24[5]);
    }
    local_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(local_24,4,6,FUN_007016a0);
  }
  else {
    FUN_00702260(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 *
FUN_00720a30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,undefined4 *param_8)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar3 = (undefined4 *)FUN_00401f00(0x4c,uVar2);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00701cd0();
    *puVar3 = &PTR_FUN_00a7f644;
    puVar3[0x12] = 0;
    puVar4 = puVar3;
  }
  puVar4[6] = *param_8;
  puVar4[7] = param_8[1];
  puVar4[8] = param_8[2];
  local_4 = 0xffffffff;
  FUN_007205a0(param_1,param_2,param_3,param_4,param_5,param_6);
  if (puVar4[0x12] != 0) {
    puVar4[0x12] = 0;
  }
  if (param_7 != (int *)0x0) {
    cVar1 = (**(code **)(*param_7 + 0x10c))(puVar4);
    if (cVar1 == '\0') {
      (**(code **)*puVar4)(1);
      *unaff_FS_OFFSET = (int)puVar3;
      return (undefined4 *)0x0;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



void FUN_00720b20(byte param_1)

{
  FUN_00720510();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00720b40(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 ,undefined4 param_6,int *param_7)

{
  char *_Src;
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *_Dst;
  undefined4 *puVar5;
  LONG LVar6;
  int *unaff_FS_OFFSET;
  uint local_154;
  undefined4 local_150;
  int *local_14c;
  int local_144 [4];
  undefined4 uStack_134;
  undefined4 uStack_130;
  uint local_12c [4];
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 auStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca2a6;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_154;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffe9c;
  *unaff_FS_OFFSET = (int)&local_c;
  local_154 = param_4;
  local_150 = param_5;
  local_14c = (int *)param_6;
  _eh_vector_constructor_iterator_(local_144,4,6,FUN_007c88a0,FUN_007016a0);
  local_4 = 0;
  local_12c[0] = param_1;
  local_12c[1] = param_2;
  local_12c[2] = param_3;
  local_12c[3] = local_154;
  local_11c = local_150;
  local_118 = local_14c;
  local_14c = (int *)FUN_0071b280(uVar3);
  local_154 = 0;
  do {
    _Src = *(char **)((int)local_12c + local_154);
    pcVar4 = _Src;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    _Dst = (char *)FUN_00401f00(pcVar4 + (1 - (int)(_Src + 1)));
    _strcpy_s(_Dst,(rsize_t)(pcVar4 + (1 - (int)(_Src + 1))),_Src);
    FUN_0060d0a0(_Dst);
    local_150 = FUN_0071b090(_Dst);
    FUN_007478f0(local_150);
    (**(code **)(*param_7 + 4))();
    cVar2 = (**(code **)(*param_7 + 8))(auStack_114,0x104);
    while (cVar2 != '\0') {
      cVar2 = thunk_FUN_00748170(auStack_114,0);
      if (cVar2 != '\0') {
        puVar5 = (undefined4 *)(**(code **)(*local_14c + 8))(auStack_114,0);
        puVar1 = *(undefined4 **)((int)local_144 + local_154);
        if (puVar1 != puVar5) {
          if (((puVar1 != (undefined4 *)0x0) &&
              (LVar6 = InterlockedDecrement(puVar1 + 1), LVar6 == 0)) &&
             (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          *(undefined4 **)((int)local_144 + local_154) = puVar5;
          if (puVar5 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar5 + 1);
          }
        }
        FUN_00401f20(local_150);
        FUN_00401f20(_Dst);
        break;
      }
      cVar2 = (**(code **)(*param_7 + 8))(auStack_114,0x104);
    }
    if (*(int *)((int)local_144 + local_154) == 0) goto LAB_00720d65;
    local_154 = local_154 + 4;
  } while (local_154 < 0x18);
  FUN_007205a0(local_144[0],local_144[1],local_144[2],local_144[3],uStack_134,uStack_130);
LAB_00720d65:
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_144,4,6,FUN_007016a0);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_00720f80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,undefined4 *param_8)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  undefined4 local_234;
  int *local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 *local_224;
  undefined1 local_220 [528];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca2f9;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_234;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffdbc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_234 = param_4;
  local_22c = param_5;
  local_228 = param_6;
  local_230 = param_7;
  puVar3 = (undefined4 *)FUN_00401f00(0x4c,uVar2);
  local_4 = 0;
  local_224 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00701cd0();
    *puVar3 = &PTR_FUN_00a7f644;
    puVar3[0x12] = 0;
  }
  puVar3[6] = *param_8;
  puVar3[7] = param_8[1];
  local_4 = 0xffffffff;
  puVar3[8] = param_8[2];
  FUN_007478c0();
  local_4 = 1;
  FUN_00720b40(param_1,param_2,param_3,local_234,local_22c,local_228,local_220);
  if (puVar3[0x12] != 0) {
    puVar3[0x12] = 0;
  }
  if (local_230 == (int *)0x0) {
LAB_007210d4:
    local_4 = 0xffffffff;
    FUN_007478e0();
  }
  else {
    if (puVar3[0xf] != 0) {
      cVar1 = (**(code **)(*local_230 + 0x10c))(puVar3);
      if (cVar1 != '\0') goto LAB_007210d4;
    }
    (**(code **)*puVar3)(1);
    local_4 = 0xffffffff;
    FUN_007478e0();
    puVar3 = (undefined4 *)0x0;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_00721120(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007028c0(param_1);
  param_1 = FUN_0070f910(DAT_00b3fd34);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00721170(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_007214a0(param_1,param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
  return;
}



undefined4 * FUN_00721190(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00721350();
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_00a3f9e4;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



undefined4 * FUN_00721230(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00721350();
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_00a3f9e4;
  }
  local_4 = 0xffffffff;
  FUN_007214a0(puVar2,param_1);
  puVar2[3] = *(undefined4 *)(in_ECX + 0xc);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_00721350(void)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  *in_ECX = &PTR_FUN_00a7f6dc;
  in_ECX[2] = 0;
  return;
}



void FUN_00721370(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *_Dst;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca338;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar2);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a7f6dc;
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != param_1 + 1) {
      pcVar3 = param_1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      _Dst = (char *)FUN_00401f00(pcVar3 + (1 - (int)(param_1 + 1)));
      in_ECX[2] = _Dst;
      _strcpy_s(_Dst,(rsize_t)(pcVar3 + (1 - (int)(param_1 + 1))),param_1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00721410(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7f6dc;
  FUN_00401f20(in_ECX[2]);
  in_ECX[2] = 0;
  FUN_0055ace0();
  return;
}



void FUN_00721440(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *_Dst;
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
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



void FUN_007214a0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_00700770(param_1,param_2);
  FUN_00721440(*(undefined4 *)(in_ECX + 8));
  return;
}



undefined4 * FUN_007214d0(void)

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
    *puVar2 = &PTR_FUN_00a7f6dc;
    puVar2[2] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_00721550(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(uint *)(param_1 + 0xd8) < 0x500000b) {
    uVar1 = FUN_007124a0();
    *(undefined4 *)(in_ECX + 8) = uVar1;
  }
  return;
}



undefined4 FUN_00721570(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  int in_ECX;
  byte *pbVar5;
  bool bVar6;
  
  uVar2 = FUN_00700670(param_1);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  pbVar5 = *(byte **)(param_1 + 8);
  pbVar3 = *(byte **)(in_ECX + 8);
  while( true ) {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) break;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
  return CONCAT31((int3)((uint)iVar4 >> 8),iVar4 == 0);
}



void FUN_007215d0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7f6dc;
  FUN_00401f20(in_ECX[2]);
  in_ECX[2] = 0;
  FUN_0055ace0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00721610(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007008a0(param_1);
  if ((uint)piVar1[0x36] < 0x500000b) {
    FUN_00712a20(uVar2);
    local_14 = 4;
    (**(code **)(piVar1[0x87] + 4))(piVar1[0x87],&param_1,4,&local_14,1);
    if ((param_1 != (int *)0x0) && (in_ECX != (int *)0x0)) {
      puVar3 = (undefined4 *)(**(code **)(*in_ECX + 4))();
      if (puVar3 == &DAT_00b3fd44) {
        uVar4 = FUN_00401f00(param_1);
        FUN_006d7c20(piVar1,uVar4,param_1);
        iStack_10 = FUN_00401f00(0x14);
        uStack_4 = 0;
        if (iStack_10 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_004c15f0(param_1,uVar4);
        }
        uStack_4 = 0xffffffff;
        if (iVar5 != 0) {
          (**(code **)(*piVar1 + 0x24))(iVar5);
          *unaff_FS_OFFSET = iStack_10;
          return;
        }
      }
    }
  }
  else {
    FUN_00713620(in_ECX + 2);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00721730(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  undefined4 local_4;
  
  local_4 = FUN_0070f910(DAT_00b3fd44);
  iVar1 = param_1;
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_4);
  param_1 = FUN_0070fc30("m_pcName",*(undefined4 *)(in_ECX + 8));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



uint FUN_007217c0(int param_1,float *param_2,float *param_3,undefined4 *param_4,undefined4 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  fVar3 = *(float *)(param_1 + 0x88) - *param_2;
  fVar4 = *(float *)(param_1 + 0x8c) - param_2[1];
  fVar5 = *(float *)(param_1 + 0x90) - param_2[2];
  fVar1 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
  if (fVar1 < 0.001) {
    return (uint)(ushort)((ushort)(fVar1 < 0.001) << 8 | (ushort)NAN(fVar1) << 10 |
                         (ushort)(fVar1 == 0.001) << 0xe);
  }
  FUN_0043f350();
  fVar1 = *(float *)(param_1 + 0x70);
  fVar2 = *(float *)(param_1 + 0x7c);
  *param_3 = -*(float *)(param_1 + 100);
  param_3[1] = -fVar1;
  param_3[2] = -fVar2;
  uVar9 = *(undefined4 *)(param_1 + 0x74);
  uVar10 = *(undefined4 *)(param_1 + 0x80);
  *param_4 = *(undefined4 *)(param_1 + 0x68);
  param_4[1] = uVar9;
  param_4[2] = uVar10;
  local_30 = *(undefined4 *)(param_1 + 0x6c);
  local_2c = *(undefined4 *)(param_1 + 0x78);
  local_28 = *(undefined4 *)(param_1 + 0x84);
  *param_5 = local_30;
  param_5[1] = local_2c;
  param_5[2] = local_28;
  fVar1 = param_3[2] * fVar5 + *param_3 * fVar3 + param_3[1] * fVar4;
  uVar6 = (uint)(ushort)((ushort)(fVar1 < 0.999999) << 8 | (ushort)NAN(fVar1) << 10 |
                        (ushort)(fVar1 == 0.999999) << 0xe);
  if (fVar1 < 0.999999) {
    FUN_004bf9e0(&local_30,param_3);
    uVar9 = local_30;
    uVar10 = local_2c;
    uVar11 = local_28;
    fVar8 = (float10)FUN_00612820(fVar1,local_30,local_2c,local_28);
    FUN_0070fe20((float)fVar8,uVar9,uVar10,uVar11);
    *param_3 = fVar3;
    param_3[1] = fVar4;
    param_3[2] = fVar5;
    puVar7 = (undefined4 *)FUN_007101f0(&local_30,param_4);
    *param_4 = *puVar7;
    param_4[1] = puVar7[1];
    param_4[2] = puVar7[2];
    puVar7 = (undefined4 *)FUN_007101f0(&local_30,param_5);
    *param_5 = *puVar7;
    param_5[1] = puVar7[1];
    uVar6 = puVar7[2];
    param_5[2] = uVar6;
  }
  return CONCAT31((int3)(uVar6 >> 8),1);
}



undefined1 thunk_FUN_0070acf0(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int in_ECX;
  uint uVar4;
  
  cVar3 = FUN_00707af0(param_1);
  if (cVar3 == '\0') {
    return 0;
  }
  uVar4 = 0;
  if (*(short *)(in_ECX + 0xb6) != 0) {
    if (*(short *)(in_ECX + 0xb6) == 0) goto LAB_0070ad2e;
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0xb0) + uVar4 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x24))(param_1);
      }
LAB_0070ad2e:
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(in_ECX + 0xb6));
  }
  puVar2 = *(undefined4 **)(in_ECX + 0xc0);
  while (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x24))(param_1);
    }
  }
  return 1;
}



undefined4 FUN_00721a90(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (0x16 - (int)(param_1 + 1));
  uVar3 = FUN_00401f00(pcVar2);
  switch(param_2) {
  case 0:
    FUN_006c5d40(uVar3,pcVar2,"%s = ALWAYS_FACE_CAMERA",param_1);
    return uVar3;
  case 1:
    FUN_006c5d40(uVar3,pcVar2,"%s = ROTATE_ABOUT_UP",param_1);
    return uVar3;
  case 2:
    FUN_006c5d40(uVar3,pcVar2,"%s = RIGID_FACE_CAMERA",param_1);
    return uVar3;
  case 3:
    FUN_006c5d40(uVar3,pcVar2,"%s = ALWAYS_FACE_CENTER",param_1);
    return uVar3;
  case 4:
    FUN_006c5d40(uVar3,pcVar2,"%s = RIGID_FACE_CENTER",param_1);
    return uVar3;
  case 5:
    FUN_006c5d40(uVar3,pcVar2,"%s = BSROTATE_ABOUT_UP",param_1);
  }
  return uVar3;
}



void FUN_00721b70(int param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int in_ECX;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float10 fVar11;
  undefined4 uVar12;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8 [10];
  float local_d0;
  float local_cc;
  undefined1 local_c8 [12];
  undefined1 local_bc [12];
  undefined1 local_b0 [12];
  undefined1 local_a4 [12];
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined1 local_80 [12];
  undefined1 local_74 [12];
  undefined4 local_68 [13];
  undefined1 local_34 [52];
  
  if (*(int *)(in_ECX + 0x1c) == 0) {
    FUN_00718a50();
  }
  else {
    puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x1c) + 100);
    puVar4 = local_68;
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  puVar4 = (undefined4 *)FUN_0053d7a0(local_34,in_ECX + 0x30);
  bVar2 = *(byte *)(in_ECX + 0xdc);
  puVar7 = (undefined4 *)(in_ECX + 100);
  puVar9 = puVar7;
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  bVar2 = bVar2 & 7;
  pfVar5 = (float *)&DAT_00b26dc4;
  pfVar10 = local_f8;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar10 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar10 = pfVar10 + 1;
  }
  switch(bVar2) {
  case 0:
  case 3:
    if (bVar2 == 3) {
      cVar3 = FUN_007217c0(param_1,in_ECX + 0x88,&local_130,&local_108,&local_114);
      if (cVar3 == '\0') break;
    }
    else {
      local_130 = -*(float *)(param_1 + 100);
      local_12c = -*(float *)(param_1 + 0x70);
      local_128 = -*(float *)(param_1 + 0x7c);
      local_108 = *(float *)(param_1 + 0x68);
      local_104 = *(float *)(param_1 + 0x74);
      local_100 = *(float *)(param_1 + 0x80);
      local_120 = *(float *)(param_1 + 0x6c);
      local_11c = *(float *)(param_1 + 0x78);
      local_118 = *(float *)(param_1 + 0x84);
      local_114 = local_120;
      local_110 = local_11c;
      local_10c = local_118;
    }
    pfVar5 = (float *)FUN_00710250(local_8c,&local_130,puVar7);
    local_130 = *pfVar5;
    local_12c = pfVar5[1];
    local_128 = pfVar5[2];
    pfVar5 = (float *)FUN_00710250(local_c8,&local_108,puVar7);
    local_108 = *pfVar5;
    local_104 = pfVar5[1];
    local_100 = pfVar5[2];
    pfVar5 = (float *)FUN_00710250(local_b0,&local_114,puVar7);
    local_114 = *pfVar5;
    local_110 = pfVar5[1];
    local_10c = pfVar5[2];
    local_124 = local_110 * local_110 + local_104 * local_104;
    fVar11 = (float10)FUN_00982c30();
    local_124 = (float)fVar11;
    if (local_124 <= 1e-06) {
      local_f8[0] = -local_114;
      local_f8[3] = -local_110;
      local_f8[6] = -local_10c;
      local_120 = -local_108;
      local_11c = -local_104;
      local_f8[7] = -local_100;
      local_118 = local_f8[7];
      local_f8[1] = local_120;
      local_f8[4] = local_11c;
    }
    else {
      local_fc = local_104 * (1.0 / local_124);
      local_124 = -local_110 * (1.0 / local_124);
      local_f8[0] = local_124 * local_108 + local_fc * local_114;
      local_f8[3] = local_fc * local_110 + local_124 * local_104;
      local_f8[6] = local_10c * local_fc + local_100 * local_124;
      local_f8[1] = local_fc * local_108 - local_114 * local_124;
      local_f8[4] = local_fc * local_104 - local_124 * local_110;
      local_f8[7] = local_fc * local_100 - local_10c * local_124;
    }
    local_f8[2] = local_130;
    local_f8[5] = local_12c;
    local_f8[8] = local_128;
    break;
  case 1:
    local_120 = *(float *)(param_1 + 0x88) - *(float *)(in_ECX + 0x88);
    local_11c = *(float *)(param_1 + 0x8c) - *(float *)(in_ECX + 0x8c);
    pfVar5 = &local_130;
    local_118 = *(float *)(param_1 + 0x90) - *(float *)(in_ECX + 0x90);
    uVar12 = *(undefined4 *)(in_ECX + 0x94);
    FUN_00710250(local_80,&local_120,puVar7,pfVar5,uVar12);
    FUN_004bf9b0(pfVar5,uVar12);
    local_fc = local_130 * local_130 + local_128 * local_128;
    fVar11 = (float10)FUN_00982c30();
    local_fc = (float)fVar11;
    local_124 = local_fc;
    if (1e-12 <= local_fc) {
      local_124 = 1.0 / local_fc;
      local_130 = local_124 * local_130;
      local_128 = local_124 * local_128;
      local_f8[3] = 0.0;
      local_f8[6] = -local_130;
      local_f8[1] = 0.0;
      local_f8[4] = 1.0;
      local_f8[7] = 0.0;
      local_f8[5] = 0.0;
      local_f8[0] = local_128;
      local_f8[2] = local_130;
      local_f8[8] = local_128;
    }
    break;
  case 2:
  case 4:
    if (bVar2 == 4) {
      cVar3 = FUN_007217c0(param_1,in_ECX + 0x88,&local_114,&local_108,&local_130);
      if (cVar3 == '\0') break;
    }
    else {
      local_114 = -*(float *)(param_1 + 100);
      local_110 = -*(float *)(param_1 + 0x70);
      local_10c = -*(float *)(param_1 + 0x7c);
      local_108 = *(float *)(param_1 + 0x68);
      local_104 = *(float *)(param_1 + 0x74);
      local_100 = *(float *)(param_1 + 0x80);
      local_130 = *(float *)(param_1 + 0x6c);
      local_12c = *(float *)(param_1 + 0x78);
      local_128 = *(float *)(param_1 + 0x84);
      local_120 = local_130;
      local_11c = local_12c;
      local_118 = local_128;
    }
    pfVar5 = (float *)FUN_00710250(local_98,&local_114,puVar7);
    local_114 = *pfVar5;
    local_110 = pfVar5[1];
    local_10c = pfVar5[2];
    pfVar5 = (float *)FUN_00710250(local_74,&local_108,puVar7);
    local_108 = *pfVar5;
    local_104 = pfVar5[1];
    local_100 = pfVar5[2];
    pfVar5 = (float *)FUN_00710250(local_bc,&local_130,puVar7);
    local_130 = *pfVar5;
    local_12c = pfVar5[1];
    local_128 = pfVar5[2];
    local_f8[1] = local_108;
    local_f8[4] = local_104;
    local_f8[7] = local_100;
    local_f8[2] = local_114;
    local_f8[5] = local_110;
    local_f8[8] = local_10c;
    local_f8[0] = local_130;
    local_f8[3] = local_12c;
    local_f8[6] = local_128;
    break;
  case 5:
    *puVar7 = 0x3f800000;
    pfVar5 = &local_130;
    *(undefined4 *)(in_ECX + 0x70) = 0;
    *(undefined4 *)(in_ECX + 0x7c) = 0;
    *(undefined4 *)(in_ECX + 0x68) = 0;
    *(undefined4 *)(in_ECX + 0x80) = 0;
    *(undefined4 *)(in_ECX + 0x74) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x6c) = 0;
    *(undefined4 *)(in_ECX + 0x78) = 0;
    *(undefined4 *)(in_ECX + 0x84) = 0x3f800000;
    local_f8[9] = *(float *)(param_1 + 0x88) - *(float *)(in_ECX + 0x88);
    local_d0 = *(float *)(param_1 + 0x8c) - *(float *)(in_ECX + 0x8c);
    local_cc = *(float *)(param_1 + 0x90) - *(float *)(in_ECX + 0x90);
    uVar12 = *(undefined4 *)(in_ECX + 0x94);
    FUN_00710250(local_a4,local_f8 + 9,puVar7,pfVar5,uVar12);
    FUN_004bf9b0(pfVar5,uVar12);
    local_fc = local_130 * local_130 + local_12c * local_12c;
    fVar11 = (float10)FUN_00982c30();
    local_fc = (float)fVar11;
    local_124 = local_fc;
    if (1e-12 <= local_fc) {
      local_124 = 1.0 / local_fc;
      local_130 = local_124 * local_130;
      local_12c = local_124 * local_12c;
      local_f8[0] = -local_12c;
      local_f8[6] = 0.0;
      local_f8[1] = 0.0;
      local_f8[4] = 0.0;
      local_f8[7] = 1.0;
      local_f8[8] = 0.0;
      local_f8[2] = local_130;
      local_f8[3] = local_130;
      local_f8[5] = local_12c;
    }
  }
  puVar4 = (undefined4 *)FUN_007100a0(local_34,local_f8);
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar8 = 0;
  if (*(short *)(in_ECX + 0xb6) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0xb0) + uVar8 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x60))
                  (*(undefined4 *)(in_ECX + 0xe0),*(byte *)(in_ECX + 0xdc) >> 3 & 1);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)(in_ECX + 0xb6));
  }
  return;
}



void FUN_00722340(void)

{
  int in_ECX;
  float10 fVar1;
  
  if (*(short *)(in_ECX + 0xb8) != 0) {
    fVar1 = (float10)FUN_00982c30();
    *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(in_ECX + 0x88);
    *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(in_ECX + 0x8c);
    *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(in_ECX + 0x90);
    *(float *)(in_ECX + 0x2c) = (float)fVar1 + *(float *)(in_ECX + 0x2c);
  }
  return;
}



undefined4 * FUN_007223e0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0xe4,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0070b780(0);
    puVar2[0x38] = 0;
    *puVar2 = &PTR_FUN_00a45134;
    *(undefined2 *)(puVar2 + 0x37) = 9;
  }
  local_4 = 0xffffffff;
  FUN_0070ac60(puVar2,param_1);
  *(undefined2 *)(puVar2 + 0x37) = *(undefined2 *)(in_ECX + 0xdc);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_00722490(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0xe4,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0070b780(0);
    puVar2[0x38] = 0;
    *puVar2 = &PTR_FUN_00a45134;
    *(undefined2 *)(puVar2 + 0x37) = 9;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_00722690(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_007227b0(param_1);
  *in_ECX = &PTR_FUN_00a7f7fc;
  return;
}



void FUN_007226c0(void)

{
  undefined4 *in_ECX;
  
  FUN_00722810();
  *in_ECX = &PTR_FUN_00a7f7fc;
  return;
}



void FUN_007226e0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7f7fc;
  FUN_00722850();
  return;
}



void thunk_FUN_00722a50(void)

{
  FUN_00722a50();
  return;
}



void thunk_FUN_00723020(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x8c))(*(undefined4 *)(in_ECX + 0xb4));
  FUN_00707e90(param_1,param_1);
  return;
}



int thunk_FUN_00723440(int param_1)

{
  int *piVar1;
  char extraout_AL;
  int iVar2;
  uint3 uVar3;
  uint3 extraout_var;
  int in_ECX;
  
  iVar2 = FUN_00707b50(param_1);
  if ((char)iVar2 == '\0') {
    return iVar2;
  }
  piVar1 = *(int **)(in_ECX + 0xb8);
  uVar3 = (uint3)((uint)iVar2 >> 8);
  if ((piVar1 == (int *)0x0) == (*(int *)(param_1 + 0xb8) == 0)) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x2c))(*(int *)(param_1 + 0xb8));
      uVar3 = extraout_var;
      if (extraout_AL == '\0') goto LAB_00723482;
    }
    iVar2 = (**(code **)(**(int **)(in_ECX + 0xb4) + 0x2c))(*(undefined4 *)(param_1 + 0xb4));
    return iVar2;
  }
LAB_00723482:
  return (uint)uVar3 << 8;
}



void FUN_00722720(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7f7fc;
  FUN_00722850();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00722750(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00723620(param_1);
  param_1 = FUN_0070f910(DAT_00b3fd54);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_007227a0(void)

{
  undefined4 in_ECX;
  
  FUN_0070e1a0(in_ECX);
  return;
}



void FUN_007227b0(int param_1)

{
  undefined4 *in_ECX;
  
  FUN_00708450();
  *in_ECX = &PTR_FUN_00a7f8ac;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = param_1;
  if (param_1 != 0) {
    InterlockedIncrement((LONG *)(param_1 + 4));
  }
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  return;
}



void FUN_00722810(void)

{
  undefined4 *in_ECX;
  
  FUN_00708450();
  *in_ECX = &PTR_FUN_00a7f8ac;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00722850(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ca3ae;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7f8ac;
  local_4 = 5;
  FUN_00738420();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fa00);
  _DAT_00b3fa78 = GetCurrentThreadId();
  _DAT_00b3fa7c = _DAT_00b3fa7c + 1;
  puVar1 = (undefined4 *)in_ECX[0x2b];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[0x2b] = 0;
  }
  _DAT_00b3fa7c = _DAT_00b3fa7c + -1;
  if (_DAT_00b3fa7c == 0) {
    _DAT_00b3fa78 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fa00);
  puVar1 = (undefined4 *)in_ECX[0x2d];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x2d] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x2f];
  local_4._0_1_ = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x2e];
  local_4._0_1_ = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x2d];
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x2c];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x2b];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00707ca0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00722a10(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0xac);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(in_ECX + 0xb0);
  for (piVar1 = *(int **)(in_ECX + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0xd]) {
    (**(code **)(*piVar1 + 0x68))();
  }
  return;
}



void FUN_00722a50(int param_1)

{
  int in_ECX;
  
  if (param_1 != 0) {
    if (*(int **)(in_ECX + 0xa8) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0xa8) + 0x54))();
      (**(code **)(**(int **)(in_ECX + 0xa8) + 0x50))();
    }
    FUN_0075fa90(param_1);
  }
  return;
}



void FUN_00722aa0(void)

{
  char cVar1;
  undefined1 *puVar2;
  int in_ECX;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  local_1c = *(undefined4 *)(in_ECX + 0x24);
  local_20 = *(undefined4 *)(in_ECX + 0x20);
  local_18 = *(undefined4 *)(in_ECX + 0x28);
  local_14 = *(undefined4 *)(in_ECX + 0x2c);
  if (*(int *)(in_ECX + 0xb8) == 0) {
    puVar2 = (undefined1 *)(*(int *)(in_ECX + 0xb4) + 0xc);
  }
  else {
    FUN_0072bb30(local_10);
    puVar2 = local_10;
  }
  FUN_0072a820(puVar2,in_ECX + 100);
  if (*(char *)(in_ECX + 0x18) < '\0') {
    cVar1 = FUN_0072a0a0(&local_20);
    if (cVar1 != '\0') {
      *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) | 0x80;
      return;
    }
    *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) & 0xff7f;
  }
  return;
}



void FUN_00722b30(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  LONG LVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf808;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar4 = (int *)FUN_007077d0(&param_1,param_1,1);
  puVar1 = *(undefined4 **)(in_ECX + 0xac);
  local_4 = 0;
  if (puVar1 != (undefined4 *)*piVar4) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar3);
      }
    }
    iVar2 = *piVar4;
    *(int *)(in_ECX + 0xac) = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  puVar1 = param_1;
  local_4 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(param_1 + 1);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00722f00(undefined1 *param_1,undefined4 param_2,undefined1 *param_3)

{
  int in_ECX;
  
  FUN_00707d80(param_1,param_2,param_3);
  if (*(int *)(in_ECX + 0xb8) != 0) {
    *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) | 4;
    *param_1 = 1;
    *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) | 2;
    *param_3 = 0;
  }
  return;
}



void FUN_00722fc0(int *param_1)

{
  int in_ECX;
  
  FUN_00707a40(param_1);
  (**(code **)(*param_1 + 0xb4))(*(undefined4 *)(in_ECX + 0xb4));
  if (*(int *)(in_ECX + 0xb8) != 0) {
    (**(code **)(*param_1 + 200))(*(int *)(in_ECX + 0xb8));
    (**(code **)(*param_1 + 0xc4))(*(undefined4 *)(*(int *)(in_ECX + 0xb8) + 0xc));
  }
  return;
}



void FUN_00723020(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x8c))(*(undefined4 *)(in_ECX + 0xb4));
  FUN_00707e90(param_1,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0072325b) */
/* WARNING: Removing unreachable block (ram,0x00723265) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00723050(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  LONG LVar7;
  int in_ECX;
  undefined4 uVar8;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca3f6;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00707ab0(param_1);
  FUN_0055e000(in_ECX,&param_1);
  puVar2 = param_1;
  if (*(int *)(in_ECX + 0xb8) != 0) {
    cVar3 = FUN_0055e000(*(int *)(in_ECX + 0xb8),&param_1);
    if (cVar3 == '\0') {
      uVar8 = (**(code **)(**(int **)(in_ECX + 0xb8) + 0x18))(puVar1,uVar4);
      FUN_0075fa90(uVar8);
      (**(code **)(**(int **)(in_ECX + 0xb8) + 0x38))(puVar1);
    }
    else {
      FUN_0075fa90(param_1);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fa00);
  _DAT_00b3fa78 = GetCurrentThreadId();
  _DAT_00b3fa7c = _DAT_00b3fa7c + 1;
  uVar8 = 0;
  if (*(int **)(in_ECX + 0xbc) != (int *)0x0) {
    puVar5 = (undefined *)(**(code **)(**(int **)(in_ECX + 0xbc) + 4))();
    if (puVar5 == &DAT_00b40124) {
      param_1 = (undefined4 *)FUN_00401f00(0x10);
      uStack_4 = 0;
      if (param_1 != (undefined4 *)0x0) {
        uVar8 = FUN_007385b0();
      }
      uStack_4 = 0xffffffff;
      uVar6 = FUN_00452a60();
      FUN_00738630(uVar6);
      uVar6 = FUN_00943410();
      FUN_006a2fc0(uVar6);
      FUN_0075fa90(uVar8);
    }
    else {
      FUN_004ec910(*(undefined4 *)(in_ECX + 0xbc));
      (**(code **)(**(int **)(in_ECX + 0xbc) + 0x18))(puVar2);
      puVar1 = *(undefined4 **)(in_ECX + 0xac);
      param_1 = puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar1 + 1);
      }
      uStack_4 = 1;
      iStack_10 = FUN_00401f00(0x30);
      uStack_4._0_1_ = 2;
      if (iStack_10 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_00731620(puVar1);
      }
      uStack_4._0_1_ = 1;
      uVar8 = FUN_007077d0(&puStack_14,uVar8,0);
      uStack_4._0_1_ = 3;
      FUN_0055e2a0(uVar8);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      if (((puStack_14 != (undefined4 *)0x0) &&
          (LVar7 = InterlockedDecrement(puStack_14 + 1), LVar7 == 0)) &&
         (puStack_14 != (undefined4 *)0x0)) {
        (**(code **)*puStack_14)(1);
      }
      if ((puVar1 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar1 + 1), LVar7 == 0)) {
        (**(code **)*puVar1)(1);
      }
      uStack_4 = 0xffffffff;
    }
  }
  _DAT_00b3fa7c = _DAT_00b3fa7c + -1;
  if (_DAT_00b3fa7c == 0) {
    _DAT_00b3fa78 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fa00);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007232b0(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9ba8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00700160(param_1);
  puVar1 = *(undefined4 **)(in_ECX + 0xbc);
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 1);
    local_4 = 0;
    uVar3 = FUN_00943410(uVar2);
    FUN_00452a60(uVar3);
    FUN_007383f0();
    local_4 = 0xffffffff;
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if (LVar4 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00723350(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  
  FUN_007081b0(param_1);
  puVar2 = (undefined4 *)FUN_007124a0();
  puVar1 = *(undefined4 **)(in_ECX + 0xb4);
  if (puVar1 != puVar2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xb4) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  puVar2 = (undefined4 *)FUN_007124a0();
  puVar1 = *(undefined4 **)(in_ECX + 0xb8);
  if (puVar1 != puVar2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xb8) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  return;
}



undefined1 FUN_00723400(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_00707af0(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  (**(code **)(**(int **)(in_ECX + 0xb4) + 0x24))(param_1);
  if (*(int **)(in_ECX + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xb8) + 0x24))(param_1);
  }
  return 1;
}



int FUN_00723440(int param_1)

{
  int *piVar1;
  char extraout_AL;
  int iVar2;
  uint3 uVar3;
  uint3 extraout_var;
  int in_ECX;
  
  iVar2 = FUN_00707b50(param_1);
  if ((char)iVar2 == '\0') {
    return iVar2;
  }
  piVar1 = *(int **)(in_ECX + 0xb8);
  uVar3 = (uint3)((uint)iVar2 >> 8);
  if ((piVar1 == (int *)0x0) == (*(int *)(param_1 + 0xb8) == 0)) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x2c))(*(int *)(param_1 + 0xb8));
      uVar3 = extraout_var;
      if (extraout_AL == '\0') goto LAB_00723482;
    }
    iVar2 = (**(code **)(**(int **)(in_ECX + 0xb4) + 0x2c))(*(undefined4 *)(param_1 + 0xb4));
    return iVar2;
  }
LAB_00723482:
  return (uint)uVar3 << 8;
}



void FUN_007234b0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00707f00(param_1);
  FUN_00712a20(uVar2);
  FUN_00712a20();
  if (0x5000014 < *(uint *)(uVar1 + 0xd8)) {
    param_1 = param_1 & 0xffffff00;
    local_14 = 1;
    (**(code **)(*(int *)(uVar1 + 0x21c) + 4))(*(int *)(uVar1 + 0x21c),&param_1,1,&local_14,1);
    if ((char)param_1 != '\0') {
      iStack_10 = FUN_00401f00(0x10);
      uStack_4 = 0;
      if (iStack_10 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_007385b0();
      }
      uStack_4 = 0xffffffff;
      FUN_0075fa90(uVar3);
      FUN_007386e0(uVar1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00723590(int *param_1)

{
  int iVar1;
  uint in_ECX;
  uint uStack_4;
  
  uStack_4 = in_ECX;
  FUN_00708330(param_1);
  (**(code **)(*param_1 + 0x2c))(*(undefined4 *)(in_ECX + 0xb4));
  (**(code **)(*param_1 + 0x2c))(*(undefined4 *)(in_ECX + 0xb8));
  uStack_4 = uStack_4 & 0xffffff00;
  if (*(int *)(in_ECX + 0xbc) != 0) {
    iVar1 = FUN_00452a60();
    if (iVar1 != 0) {
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
    }
  }
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],&uStack_4,1,&stack0xfffffff4,1);
  if ((char)uStack_4 != '\0') {
    FUN_00738720(param_1);
  }
  return;
}



void FUN_00723620(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint uVar4;
  
  iVar2 = param_1;
  FUN_007086b0(param_1);
  param_1 = FUN_0070f910(DAT_00b3fd5c);
  uVar4 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  param_1 = FUN_0070fbe0("GeomData",*(undefined4 *)(in_ECX + 0xb4));
  uVar4 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  if (*(int **)(in_ECX + 0xbc) != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0xbc) + 4))();
    param_1 = FUN_0070fc30("shader",*puVar3);
    uVar4 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
  }
  if ((*(int *)(in_ECX + 0xb8) != 0) &&
     (iVar1 = *(int *)(*(int *)(in_ECX + 0xb8) + 0xc), iVar1 != 0)) {
    param_1 = FUN_0070fb40("skin partitions",*(undefined4 *)(iVar1 + 8));
    uVar4 = (uint)*(ushort *)(iVar2 + 10);
    if (*(ushort *)(iVar2 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar4);
    }
    FUN_0042bb90(uVar4,&param_1);
  }
  return;
}



void FUN_00723750(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xfc);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xfc) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_007237a0(void)

{
  int in_ECX;
  
  *(undefined ***)(in_ECX + 0xec) = &PTR__scalar_deleting_destructor__00a44f6c;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0xf0));
  FUN_0070b810();
  return;
}



void FUN_007237d0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca458;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7f97c;
  puVar1 = (undefined4 *)in_ECX[0x3f];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  in_ECX[0x3b] = &PTR__scalar_deleting_destructor__00a44f6c;
  FUN_00401f20(in_ECX[0x3c],uVar2);
  FUN_0070b810();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00723880(void)

{
  int in_ECX;
  
  FUN_0070c120();
  if (*(int **)(in_ECX + 0xfc) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xfc) + 0x50))();
  }
  return;
}



void FUN_007238a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x100) != '\0') && (*(int **)(in_ECX + 0xfc) != (int *)0x0)) {
    uVar2 = (**(code **)(**(int **)(in_ECX + 0xfc) + 0x4c))(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(in_ECX + 0xe0) = uVar2;
    if (-1 < DAT_00b273fc) {
      uVar2 = (**(code **)(**(int **)(in_ECX + 0xfc) + 0x58))(DAT_00b273fc);
      *(undefined4 *)(in_ECX + 0xe0) = uVar2;
    }
    if (-1 < *(int *)(in_ECX + 0xe0)) {
      do {
        iVar1 = *(int *)(in_ECX + 0xe0);
        if ((iVar1 < (int)(uint)*(ushort *)(in_ECX + 0xb6)) &&
           (*(int *)(*(int *)(in_ECX + 0xb0) + iVar1 * 4) != 0)) break;
        *(int *)(in_ECX + 0xe0) = iVar1 + -1;
      } while (-1 < iVar1 + -1);
    }
  }
  FUN_007243e0(param_1);
  return;
}



void FUN_00723930(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (*(short *)(in_ECX + 0xb6) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0xb0) + iVar2 * 4);
      if ((piVar1 != (int *)0x0) &&
         (*(int *)(*(int *)(in_ECX + 0xf0) + iVar2 * 4) != *(int *)(in_ECX + 0xe8))) {
        FUN_0042bb90(iVar2,in_ECX + 0xe8);
        (**(code **)(*piVar1 + 0x60))
                  (*(undefined4 *)(in_ECX + 0xe4),*(byte *)(in_ECX + 0xdc) >> 1 & 1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(in_ECX + 0xb6));
  }
  return;
}



void FUN_007239b0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  LONG LVar3;
  int in_ECX;
  
  FUN_00723ef0(param_1,param_2);
  if (*(int **)(in_ECX + 0xfc) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(in_ECX + 0xfc) + 0x54))();
    FUN_00723750(uVar2);
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xfc);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  return;
}



undefined4 FUN_00723ac0(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  
  cVar3 = FUN_00723f30(param_1);
  if (cVar3 == '\0') {
    return 0;
  }
  piVar1 = *(int **)(in_ECX + 0xfc);
  piVar2 = *(int **)(param_1 + 0xfc);
  if (piVar1 != (int *)0x0) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    if (piVar1 != (int *)0x0) goto LAB_00723af9;
  }
  if (piVar2 != (int *)0x0) {
    return 0;
  }
  if (piVar1 == (int *)0x0) {
    return 1;
  }
LAB_00723af9:
  if (piVar2 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar1 + 4))();
    iVar5 = (**(code **)(*piVar2 + 4))();
    if ((iVar4 == iVar5) &&
       (cVar3 = (**(code **)(**(int **)(in_ECX + 0xfc) + 0x2c))(piVar2), cVar3 == '\0')) {
      return 0;
    }
  }
  return 1;
}



void FUN_00723b30(byte param_1)

{
  FUN_007237d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_00723b50(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x104,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00723f70();
    *puVar2 = &PTR_FUN_00a7f97c;
    puVar2[0x3f] = 0;
    puVar2[0x38] = 0;
    *(undefined1 *)(puVar2 + 0x40) = 1;
  }
  local_4 = 0xffffffff;
  FUN_007239b0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_00723bf0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x104,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00723f70();
    *puVar2 = &PTR_FUN_00a7f97c;
    puVar2[0x3f] = 0;
    puVar2[0x38] = 0;
    *(undefined1 *)(puVar2 + 0x40) = 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_00723c80(uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int in_ECX;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca48b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c = in_ECX;
  FUN_007247d0(param_1);
  if (*(uint *)(uVar2 + 0xd8) < 0xa00010c) {
    local_20 = FUN_00401f00(0x28);
    uVar3 = 0;
    local_4 = 0;
    if (local_20 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_007249a0();
    }
    local_4 = 0xffffffff;
    FUN_00709430(uVar2);
    puVar4[2] = local_18;
    puVar4[3] = local_14;
    puVar4[4] = local_10;
    local_30 = 4;
    (**(code **)(*(int *)(uVar2 + 0x21c) + 4))(*(int *)(uVar2 + 0x21c),&param_1,4,&local_30,1);
    if ((param_1 != 0) && (FUN_00724ab0(param_1), param_1 != 0)) {
      iVar6 = 0;
      do {
        local_30 = 4;
        (**(code **)(*(int *)(uVar2 + 0x21c) + 4))(*(int *)(uVar2 + 0x21c),&uStack_28,4,&local_30,1)
        ;
        uStack_2c = 4;
        (**(code **)(*(int *)(uVar2 + 0x21c) + 4))
                  (*(int *)(uVar2 + 0x21c),&iStack_24,4,&uStack_2c,1);
        local_30 = uStack_28;
        local_20 = iStack_24;
        if ((uint)puVar4[8] <= uVar3) {
          FUN_00724ab0(uVar3 + 1);
        }
        *(undefined4 *)(puVar4[9] + iVar6) = local_30;
        uVar3 = uVar3 + 1;
        *(int *)(puVar4[9] + 4 + iVar6) = local_20;
        iVar6 = iVar6 + 0x10;
        in_ECX = local_1c;
      } while (uVar3 < param_1);
    }
    puVar1 = *(undefined4 **)(in_ECX + 0xfc);
    if (puVar1 != puVar4) {
      if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0))
         && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 **)(in_ECX + 0xfc) = puVar4;
      InterlockedIncrement(puVar4 + 1);
    }
  }
  else {
    FUN_00712a20(uVar3);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00723ef0(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_0070ac60(param_1,param_2);
  *(undefined2 *)(param_1 + 0xdc) = *(undefined2 *)(in_ECX + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(in_ECX + 0xe0);
  return;
}



uint FUN_00723f30(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = FUN_0070ad70(param_1);
  if ((((char)uVar1 != '\0') &&
      (uVar1 = *(uint *)(in_ECX + 0xe0), uVar1 == *(uint *)(param_1 + 0xe0))) &&
     (((*(byte *)(param_1 + 0xdc) ^ *(byte *)(in_ECX + 0xdc)) & 1) == 0)) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}



void FUN_00723f70(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bcb18;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0070b780(0);
  in_ECX[0x39] = 0;
  *in_ECX = &PTR_FUN_00a7fa3c;
  *(undefined2 *)(in_ECX + 0x37) = 0;
  in_ECX[0x38] = 0xffffffff;
  in_ECX[0x3a] = 1;
  *(undefined2 *)(in_ECX + 0x3d) = 1;
  *(undefined2 *)((int)in_ECX + 0xfa) = 1;
  local_4 = 0;
  in_ECX[0x3b] = &PTR__scalar_deleting_destructor__00a44f6c;
  *(undefined2 *)((int)in_ECX + 0xf6) = 0;
  *(undefined2 *)(in_ECX + 0x3e) = 0;
  uVar2 = FUN_00401f00(4,uVar1);
  in_ECX[0x3c] = uVar2;
  *(ushort *)(in_ECX + 0x37) = *(ushort *)(in_ECX + 0x37) | 3;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00724190(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  
  if ((char)param_2 == '\0') {
    *(ushort *)(in_ECX + 0x37) = *(ushort *)(in_ECX + 0x37) & 0xfffd;
  }
  else {
    *(ushort *)(in_ECX + 0x37) = *(ushort *)(in_ECX + 0x37) | 2;
  }
  in_ECX[0x39] = param_1;
  if ((*(byte *)(in_ECX + 0x37) & 1) == 0) {
    FUN_0070a0d0(param_1,param_2);
    return;
  }
  in_ECX[0x3a] = in_ECX[0x3a] + 1;
  if ((char)param_2 != '\0') {
    FUN_0047c930(param_1,1);
  }
  (**(code **)(*in_ECX + 0x74))();
  if ((-1 < in_ECX[0x38]) &&
     (piVar1 = *(int **)(in_ECX[0x2c] + in_ECX[0x38] * 4), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x60))(param_1,param_2);
    FUN_0042bb90(in_ECX[0x38],in_ECX + 0x3a);
    in_ECX[8] = piVar1[8];
    in_ECX[9] = piVar1[9];
    in_ECX[10] = piVar1[10];
    in_ECX[0xb] = piVar1[0xb];
  }
  return;
}



void FUN_007243e0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xe0);
  if ((-1 < iVar1) &&
     (piVar2 = *(int **)(*(int *)(in_ECX + 0xb0) + iVar1 * 4), piVar2 != (int *)0x0)) {
    if (*(int *)(*(int *)(in_ECX + 0xf0) + iVar1 * 4) != *(int *)(in_ECX + 0xe8)) {
      FUN_0042bb90(iVar1,in_ECX + 0xe8);
      (**(code **)(*piVar2 + 0x60))
                (*(undefined4 *)(in_ECX + 0xe4),*(byte *)(in_ECX + 0xdc) >> 1 & 1);
    }
    FUN_007073d0(param_1);
  }
  return;
}



void FUN_00724460(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0xdc) & 1) == 0) {
    FUN_0070a310(param_1);
  }
  else if (-1 < *(int *)(in_ECX + 0xe0)) {
    FUN_0047c930(param_1,1);
    piVar1 = *(int **)(*(int *)(in_ECX + 0xb0) + *(int *)(in_ECX + 0xe0) * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x4c))(param_1);
      return;
    }
  }
  return;
}



void FUN_00724510(void)

{
  int *piVar1;
  int in_ECX;
  uint uVar2;
  undefined1 local_34 [52];
  
  uVar2 = 0;
  if (*(short *)(in_ECX + 0xb6) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0xb0) + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        if (*(int *)(*(int *)(in_ECX + 0xf0) + uVar2 * 4) != *(int *)(in_ECX + 0xe8)) {
          FUN_0042bb90(uVar2,in_ECX + 0xe8);
          (**(code **)(*piVar1 + 0x60))
                    (*(undefined4 *)(in_ECX + 0xe4),*(byte *)(in_ECX + 0xdc) >> 1 & 1);
        }
        (**(code **)(*piVar1 + 0x50))();
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 0xb6));
  }
  FUN_00718a80(local_34);
  FUN_0072a820(in_ECX + 0x20,local_34);
  return;
}



int FUN_007245c0(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0xfc,uVar1);
  iVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_00723f70();
  }
  local_4 = 0xffffffff;
  FUN_0070ac60(iVar3,param_1);
  *(undefined2 *)(iVar3 + 0xdc) = *(undefined2 *)(in_ECX + 0xdc);
  *(undefined4 *)(iVar3 + 0xe0) = *(undefined4 *)(in_ECX + 0xe0);
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   _AFX_THREAD_STATE>::CreateObject(void)
    public: static class CObject * __cdecl CFrameWnd::CreateObject(void)
   
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
  local_10 = FUN_00401f00(0xfc,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_00723f70();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_007246c0(byte param_1)

{
  int in_ECX;
  
  *(undefined ***)(in_ECX + 0xec) = &PTR__scalar_deleting_destructor__00a44f6c;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0xf0));
  FUN_0070b810();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007247d0(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_00709ee0(param_1);
  puVar1 = (ushort *)(in_ECX + 0xdc);
  if (*(uint *)(iVar2 + 0xd8) < 0xa000102) {
    *puVar1 = (ushort)*(byte *)(iVar2 + 0x259);
  }
  else {
    param_1 = 2;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),puVar1,2,&param_1,1);
  }
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0xe0,4,&param_1,1);
  *puVar1 = *puVar1 | 2;
  return;
}



void FUN_00724860(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_0070b6a0(param_1);
  iVar1 = *(int *)(iVar2 + 0x220);
  param_1 = 2;
  (**(code **)(iVar1 + 8))(iVar1,in_ECX + 0xdc,2,&param_1,1);
  iVar1 = *(int *)(iVar2 + 0x220);
  param_1 = 4;
  (**(code **)(iVar1 + 8))(iVar1,in_ECX + 0xe0,4,&param_1,1);
  return;
}



void FUN_007248c0(uint param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0070bae0(param_1);
  param_1 = FUN_0070f910(DAT_00b3fd70);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070faf0("m_iIndex",*(undefined4 *)(in_ECX + 0xe0));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(in_ECX + 0xdc)) & 0xffffff01;
  param_1 = FUN_0070f950("m_bUpdateOnlyActive",param_1);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_007249a0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  FUN_00738760();
  *in_ECX = &PTR_FUN_00a7fb0c;
  in_ECX[2] = DAT_00b3f9a8;
  in_ECX[3] = DAT_00b3f9ac;
  uVar1 = DAT_00b3f9b0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[4] = uVar1;
  return;
}



void FUN_007249f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  local_10 = *(float *)(param_1 + 0x94);
  local_18 = local_10 * *(float *)(in_ECX + 8);
  local_14 = *(float *)(in_ECX + 0xc) * local_10;
  local_10 = local_10 * *(float *)(in_ECX + 0x10);
  pfVar5 = (float *)FUN_007101f0(local_c,&local_18);
  fVar1 = *(float *)(param_1 + 0x8c);
  fVar2 = pfVar5[1];
  fVar3 = *(float *)(param_1 + 0x90);
  fVar4 = pfVar5[2];
  *(float *)(in_ECX + 0x14) = *(float *)(param_1 + 0x88) + *pfVar5;
  uVar8 = 0;
  *(float *)(in_ECX + 0x18) = fVar1 + fVar2;
  *(float *)(in_ECX + 0x1c) = fVar3 + fVar4;
  if (*(int *)(in_ECX + 0x20) != 0) {
    iVar6 = 0;
    do {
      uVar8 = uVar8 + 1;
      *(float *)(*(int *)(in_ECX + 0x24) + iVar6 + 8) =
           *(float *)(param_1 + 0x94) * *(float *)(*(int *)(in_ECX + 0x24) + iVar6);
      pfVar5 = (float *)(*(int *)(in_ECX + 0x24) + 4 + iVar6);
      iVar7 = *(int *)(in_ECX + 0x24) + iVar6;
      iVar6 = iVar6 + 0x10;
      *(float *)(iVar7 + 0xc) = *pfVar5 * *(float *)(param_1 + 0x94);
    } while (uVar8 < *(uint *)(in_ECX + 0x20));
  }
  return;
}



void FUN_00724ab0(uint param_1)

{
  void *_Dst;
  uint uVar1;
  int in_ECX;
  
  if (param_1 != *(uint *)(in_ECX + 0x20)) {
    if (param_1 == 0) {
      FUN_00401f20(*(undefined4 *)(in_ECX + 0x24));
      *(undefined4 *)(in_ECX + 0x24) = 0;
      *(undefined4 *)(in_ECX + 0x20) = 0;
      return;
    }
    _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 0x10 >> 0x20) != 0) |
                                (uint)((ulonglong)param_1 * 0x10));
    if (*(void **)(in_ECX + 0x24) != (void *)0x0) {
      uVar1 = *(uint *)(in_ECX + 0x20);
      if ((int)param_1 <= (int)*(uint *)(in_ECX + 0x20)) {
        uVar1 = param_1;
      }
      _memcpy(_Dst,*(void **)(in_ECX + 0x24),uVar1 << 4);
    }
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x24));
    *(void **)(in_ECX + 0x24) = _Dst;
    *(uint *)(in_ECX + 0x20) = param_1;
  }
  return;
}



uint FUN_00724b30(int param_1)

{
  float fVar1;
  int in_ECX;
  float *pfVar2;
  uint uVar3;
  
  uVar3 = 0;
  fVar1 = ABS((*(float *)(param_1 + 0x7c) * (*(float *)(in_ECX + 0x1c) - *(float *)(param_1 + 0x90))
              + *(float *)(param_1 + 100) * (*(float *)(in_ECX + 0x14) - *(float *)(param_1 + 0x88))
                + *(float *)(param_1 + 0x70) *
                  (*(float *)(in_ECX + 0x18) - *(float *)(param_1 + 0x8c))) *
              *(float *)(param_1 + 0x120));
  if (*(uint *)(in_ECX + 0x20) != 0) {
    pfVar2 = (float *)(*(int *)(in_ECX + 0x24) + 0xc);
    do {
      if ((pfVar2[-1] < fVar1 != (pfVar2[-1] == fVar1)) && (fVar1 < *pfVar2)) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      pfVar2 = pfVar2 + 4;
    } while (uVar3 < *(uint *)(in_ECX + 0x20));
  }
  return 0xffffffff;
}



void FUN_00724dd0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(in_ECX + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(in_ECX + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(in_ECX + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(in_ECX + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  FUN_00724ab0(*(undefined4 *)(in_ECX + 0x20));
  _memcpy(*(void **)(param_1 + 0x24),*(void **)(in_ECX + 0x24),*(int *)(in_ECX + 0x20) << 4);
  return;
}



undefined4 * FUN_00724e30(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x28,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00738760();
    *puVar2 = &PTR_FUN_00a7fb0c;
    puVar2[2] = DAT_00b3f9a8;
    puVar2[3] = DAT_00b3f9ac;
    puVar2[4] = DAT_00b3f9b0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_00724f40(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7fb0c;
  FUN_00401f20(in_ECX[9]);
  FUN_00738790();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_00724f80(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x28,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00738760();
    *puVar2 = &PTR_FUN_00a7fb0c;
    puVar2[2] = DAT_00b3f9a8;
    puVar2[3] = DAT_00b3f9ac;
    puVar2[4] = DAT_00b3f9b0;
    puVar2[8] = 0;
    puVar2[9] = 0;
  }
  puVar2[2] = *(undefined4 *)(in_ECX + 8);
  puVar2[3] = *(undefined4 *)(in_ECX + 0xc);
  puVar2[4] = *(undefined4 *)(in_ECX + 0x10);
  local_4 = 0xffffffff;
  FUN_00724ab0(*(undefined4 *)(in_ECX + 0x20));
  _memcpy((void *)puVar2[9],*(void **)(in_ECX + 0x24),*(int *)(in_ECX + 0x20) << 4);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_00725050(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x28,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00738760();
    *puVar2 = &PTR_FUN_00a7fb0c;
    puVar2[2] = DAT_00b3f9a8;
    puVar2[3] = DAT_00b3f9ac;
    puVar2[4] = DAT_00b3f9b0;
    puVar2[8] = 0;
    puVar2[9] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00724dd0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_007251c0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_1;
  thunk_FUN_0068f970(param_1);
  FUN_007094a0(iVar1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))
            (*(int *)(iVar1 + 0x220),(int *)(in_ECX + 0x20),4,&param_1,1);
  uVar3 = 0;
  if (*(int *)(in_ECX + 0x20) != 0) {
    iVar2 = 0;
    do {
      param_1 = 4;
      (**(code **)(*(int *)(iVar1 + 0x220) + 8))
                (*(int *)(iVar1 + 0x220),*(int *)(in_ECX + 0x24) + iVar2,4,&param_1,1);
      param_1 = 4;
      (**(code **)(*(int *)(iVar1 + 0x220) + 8))
                (*(int *)(iVar1 + 0x220),*(int *)(in_ECX + 0x24) + 4 + iVar2,4,&param_1,1);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar3 < *(uint *)(in_ECX + 0x20));
  }
  return;
}



void FUN_00725270(int param_1)

{
  ushort uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint local_4c;
  int local_48;
  int local_44;
  
  local_44 = in_ECX;
  local_48 = FUN_0070f910();
  uVar1 = *(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10();
  }
  FUN_0042bb90(uVar1,&local_48);
  local_48 = FUN_00707280();
  uVar1 = *(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10();
  }
  FUN_0042bb90(uVar1,&local_48);
  local_48 = FUN_00707280();
  uVar1 = *(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10();
  }
  FUN_0042bb90(uVar1,&local_48);
  local_4c = 0;
  if (*(int *)(in_ECX + 0x20) != 0) {
    local_48 = 0;
    do {
      iVar2 = FUN_00401f00();
      FUN_006c5d40(iVar2,0x80,"range[%d] = %g   %g",local_4c,
                   (double)*(float *)(local_48 + *(int *)(in_ECX + 0x24)),
                   (double)*(float *)(local_48 + 4 + *(int *)(in_ECX + 0x24)));
      uVar1 = *(ushort *)(param_1 + 10);
      uVar3 = (uint)uVar1;
      if (*(ushort *)(param_1 + 8) <= uVar3) {
        FUN_004e4a10();
      }
      if (uVar3 < *(ushort *)(param_1 + 10)) {
        if (iVar2 == 0) {
          if (*(int *)(*(int *)(param_1 + 4) + uVar3 * 4) != 0) {
            *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(param_1 + 4) + uVar3 * 4) == 0) {
          *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(param_1 + 10) = uVar1 + 1;
        if (iVar2 != 0) {
          *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
        }
      }
      local_48 = local_48 + 0x10;
      local_4c = local_4c + 1;
      *(int *)(*(int *)(param_1 + 4) + uVar3 * 4) = iVar2;
      in_ECX = local_44;
    } while (local_4c < *(uint *)(local_44 + 0x20));
  }
  return;
}



void FUN_00725410(void)

{
  int in_ECX;
  
  FUN_0070c120();
  *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + 1;
  return;
}



void FUN_00725430(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_0071a5a0(param_1,param_2);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(in_ECX + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(in_ECX + 0x10c);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(in_ECX + 0x110);
  return;
}



undefined4 * FUN_00725470(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x114,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0071a490();
    puVar2[0x42] = 0;
    *puVar2 = &PTR_FUN_00a43044;
    puVar2[0x43] = 0x3f800000;
    puVar2[0x44] = 0;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void thunk_FUN_00707af0(void)

{
  thunk_FUN_00707af0();
  return;
}



ushort FUN_00725500(int param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  int in_ECX;
  
  uVar3 = FUN_0071a650(param_1);
  if ((char)uVar3 != '\0') {
    fVar1 = *(float *)(in_ECX + 0x108);
    fVar2 = *(float *)(param_1 + 0x108);
    uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 == fVar1) {
      fVar1 = *(float *)(in_ECX + 0x10c);
      fVar2 = *(float *)(param_1 + 0x10c);
      uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
              (ushort)(fVar2 == fVar1) << 0xe;
      if (fVar2 == fVar1) {
        fVar1 = *(float *)(in_ECX + 0x110);
        fVar2 = *(float *)(param_1 + 0x110);
        uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                (ushort)(fVar2 == fVar1) << 0xe;
        if (fVar2 == fVar1) {
          return CONCAT11((char)(uVar3 >> 8),1);
        }
      }
    }
  }
  return uVar3 & 0xff00;
}



undefined4 * FUN_00725560(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x114,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0071a490();
    puVar2[0x42] = 0;
    *puVar2 = &PTR_FUN_00a43044;
    puVar2[0x43] = 0x3f800000;
    puVar2[0x44] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0071a5a0(puVar2,param_1);
  puVar2[0x42] = *(undefined4 *)(in_ECX + 0x108);
  puVar2[0x43] = *(undefined4 *)(in_ECX + 0x10c);
  puVar2[0x44] = *(undefined4 *)(in_ECX + 0x110);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_00725620(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_0071a6d0(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x108,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x10c,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x110,4,&param_1,1);
  return;
}



void FUN_007256b0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_0071a730(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x108,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x10c,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x110,4,&param_1,1);
  return;
}



void FUN_00725740(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0071a790(param_1);
  param_1 = FUN_0070f910(DAT_00b3fd80);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("m_fAtten0",*(undefined4 *)(in_ECX + 0x108));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("m_fAtten1",*(undefined4 *)(in_ECX + 0x10c));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("m_fAtten2",*(undefined4 *)(in_ECX + 0x110));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00725860(void)

{
  DAT_00b3fd88 = FUN_007072e0();
  return;
}



void FUN_00725870(void)

{
  FUN_00401f20(DAT_00b3fd88);
  DAT_00b3fd88 = 0;
  return;
}



void FUN_00725890(float *param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = (uint)param_2;
  uVar5 = 0;
  if (3 < (int)param_2) {
    iVar9 = ((int)param_2 - 4U >> 2) + 1;
    uVar5 = iVar9 * 4;
    do {
      fVar1 = *param_1;
      fVar2 = param_1[2] * param_1[2] + fVar1 * fVar1 + param_1[1] * param_1[1];
      if (fVar2 == 0.0) {
        param_2 = 0.0;
      }
      else {
        uVar7 = ((uint)fVar2 >> 0x17) - 0x7f;
        uVar6 = (uint)fVar2 & 0x7fffff;
        if ((uVar7 & 1) != 0) {
          uVar6 = uVar6 | 0x800000;
        }
        param_2 = 1.0 / (float)(((short)((short)uVar7 >> 1) + 0x7f) * 0x800000 |
                               *(uint *)(DAT_00b3fd88 + (uVar6 >> 0x10) * 4));
      }
      *param_1 = param_2 * fVar1;
      param_1[1] = param_1[1] * param_2;
      param_1[2] = param_1[2] * param_2;
      param_1 = (float *)((int)param_1 + param_3);
      fVar1 = *param_1;
      fVar2 = param_1[2] * param_1[2] + fVar1 * fVar1 + param_1[1] * param_1[1];
      if (fVar2 == 0.0) {
        param_2 = 0.0;
      }
      else {
        uVar7 = ((uint)fVar2 >> 0x17) - 0x7f;
        uVar6 = (uint)fVar2 & 0x7fffff;
        if ((uVar7 & 1) != 0) {
          uVar6 = uVar6 | 0x800000;
        }
        param_2 = 1.0 / (float)(((short)((short)uVar7 >> 1) + 0x7f) * 0x800000 |
                               *(uint *)(DAT_00b3fd88 + (uVar6 >> 0x10) * 4));
      }
      *param_1 = param_2 * fVar1;
      param_1[1] = param_1[1] * param_2;
      param_1[2] = param_1[2] * param_2;
      param_1 = (float *)((int)param_1 + param_3);
      fVar1 = *param_1;
      fVar2 = param_1[2] * param_1[2] + fVar1 * fVar1 + param_1[1] * param_1[1];
      if (fVar2 == 0.0) {
        param_2 = 0.0;
      }
      else {
        uVar7 = ((uint)fVar2 >> 0x17) - 0x7f;
        uVar6 = (uint)fVar2 & 0x7fffff;
        if ((uVar7 & 1) != 0) {
          uVar6 = uVar6 | 0x800000;
        }
        param_2 = 1.0 / (float)(((short)((short)uVar7 >> 1) + 0x7f) * 0x800000 |
                               *(uint *)(DAT_00b3fd88 + (uVar6 >> 0x10) * 4));
      }
      *param_1 = param_2 * fVar1;
      param_1[1] = param_1[1] * param_2;
      param_1[2] = param_1[2] * param_2;
      param_1 = (float *)((int)param_1 + param_3);
      fVar1 = *param_1;
      fVar2 = param_1[2] * param_1[2] + fVar1 * fVar1 + param_1[1] * param_1[1];
      if (fVar2 == 0.0) {
        param_2 = 0.0;
      }
      else {
        uVar7 = ((uint)fVar2 >> 0x17) - 0x7f;
        uVar6 = (uint)fVar2 & 0x7fffff;
        if ((uVar7 & 1) != 0) {
          uVar6 = uVar6 | 0x800000;
        }
        param_2 = 1.0 / (float)(((short)((short)uVar7 >> 1) + 0x7f) * 0x800000 |
                               *(uint *)(DAT_00b3fd88 + (uVar6 >> 0x10) * 4));
      }
      *param_1 = param_2 * fVar1;
      param_1[1] = param_1[1] * param_2;
      param_1[2] = param_1[2] * param_2;
      param_1 = (float *)((int)param_1 + param_3);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (uVar5 < uVar8) {
    iVar9 = uVar8 - uVar5;
    do {
      fVar1 = param_1[1];
      fVar2 = *param_1;
      fVar3 = param_1[2];
      fVar4 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
      if (fVar4 == 0.0) {
        param_2 = 0.0;
      }
      else {
        uVar8 = ((uint)fVar4 >> 0x17) - 0x7f;
        uVar5 = (uint)fVar4 & 0x7fffff;
        if ((uVar8 & 1) != 0) {
          uVar5 = uVar5 | 0x800000;
        }
        param_2 = 1.0 / (float)(((short)((short)uVar8 >> 1) + 0x7f) * 0x800000 |
                               *(uint *)(DAT_00b3fd88 + (uVar5 >> 0x10) * 4));
      }
      *param_1 = fVar2 * param_2;
      param_1[1] = fVar1 * param_2;
      param_1[2] = param_2 * fVar3;
      param_1 = (float *)((int)param_1 + param_3);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}



void FUN_00725bd0(int param_1,float param_2,int param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (3 < (int)param_4) {
    iVar6 = (param_4 - 4 >> 2) + 1;
    uVar7 = iVar6 * 4;
    pfVar4 = (float *)(param_1 + 0x14);
    pfVar5 = (float *)(param_3 + 0x20);
    do {
      iVar6 = iVar6 + -1;
      fVar1 = pfVar5[-7];
      fVar2 = pfVar5[-6];
      pfVar4[-5] = pfVar4[-5] + pfVar5[-8] * param_2;
      pfVar4[-4] = pfVar4[-4] + fVar1 * param_2;
      pfVar4[-3] = pfVar4[-3] + fVar2 * param_2;
      fVar1 = *(float *)((int)pfVar4 + (param_3 - param_1) + -4);
      fVar2 = *(float *)((int)pfVar4 + (param_3 - param_1));
      pfVar4[-2] = pfVar4[-2] + pfVar5[-5] * param_2;
      pfVar4[-1] = fVar1 * param_2 + pfVar4[-1];
      *pfVar4 = *pfVar4 + fVar2 * param_2;
      fVar1 = pfVar5[-1];
      fVar2 = *pfVar5;
      pfVar4[1] = pfVar5[-2] * param_2 + pfVar4[1];
      pfVar4[2] = pfVar4[2] + fVar1 * param_2;
      pfVar4[3] = pfVar4[3] + fVar2 * param_2;
      fVar1 = pfVar5[2];
      fVar2 = pfVar5[3];
      pfVar4[4] = pfVar4[4] + pfVar5[1] * param_2;
      pfVar4[5] = pfVar4[5] + fVar1 * param_2;
      pfVar4[6] = fVar2 * param_2 + pfVar4[6];
      pfVar4 = pfVar4 + 0xc;
      pfVar5 = pfVar5 + 0xc;
    } while (iVar6 != 0);
  }
  if (uVar7 < param_4) {
    pfVar4 = (float *)(uVar7 * 0xc + param_3);
    iVar6 = param_4 - uVar7;
    pfVar5 = (float *)(uVar7 * 0xc + 8 + param_1);
    do {
      fVar1 = *pfVar4;
      pfVar4 = pfVar4 + 3;
      iVar6 = iVar6 + -1;
      fVar2 = *(float *)((int)pfVar5 + (param_3 - param_1) + -4);
      fVar3 = *(float *)((int)pfVar5 + (param_3 - param_1));
      pfVar5[-2] = fVar1 * param_2 + pfVar5[-2];
      pfVar5[-1] = pfVar5[-1] + fVar2 * param_2;
      *pfVar5 = *pfVar5 + fVar3 * param_2;
      pfVar5 = pfVar5 + 3;
    } while (iVar6 != 0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00725d70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a7fbe0;
  _DAT_00b3fd8c = in_ECX;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00725d80(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a7fbe0;
  _DAT_00b3fd8c = 0;
  return;
}



void FUN_00725de0(int param_1,int *param_2)

{
  int in_ECX;
  
  switch(*(undefined4 *)(in_ECX + 4)) {
  case 4:
  case 8:
  case 0xc:
    *(undefined4 *)(param_1 + *param_2 * 4) = 4;
    *param_2 = *param_2 + 1;
  case 3:
  case 7:
  case 0xb:
    *(undefined4 *)(param_1 + *param_2 * 4) = 4;
    *param_2 = *param_2 + 1;
  case 2:
  case 6:
  case 10:
    *(undefined4 *)(param_1 + *param_2 * 4) = 4;
    *param_2 = *param_2 + 1;
  case 1:
  case 5:
  case 9:
    *(undefined4 *)(param_1 + *param_2 * 4) = 4;
    *param_2 = *param_2 + 1;
    return;
  case 0x10:
  case 0x14:
    *(undefined4 *)(param_1 + *param_2 * 4) = 2;
    *param_2 = *param_2 + 1;
  case 0xf:
  case 0x13:
    *(undefined4 *)(param_1 + *param_2 * 4) = 2;
    *param_2 = *param_2 + 1;
  case 0xe:
  case 0x12:
    *(undefined4 *)(param_1 + *param_2 * 4) = 2;
    *param_2 = *param_2 + 1;
  case 0xd:
  case 0x11:
    *(undefined4 *)(param_1 + *param_2 * 4) = 2;
    *param_2 = *param_2 + 1;
    return;
  case 0x18:
  case 0x1c:
  case 0x20:
    *(undefined4 *)(param_1 + *param_2 * 4) = 1;
    *param_2 = *param_2 + 1;
  case 0x17:
  case 0x1b:
  case 0x1f:
    *(undefined4 *)(param_1 + *param_2 * 4) = 1;
    *param_2 = *param_2 + 1;
  case 0x16:
  case 0x1a:
  case 0x1e:
    *(undefined4 *)(param_1 + *param_2 * 4) = 1;
    *param_2 = *param_2 + 1;
  case 0x15:
  case 0x19:
  case 0x1d:
    *(undefined4 *)(param_1 + *param_2 * 4) = 1;
    *param_2 = *param_2 + 1;
    return;
  default:
    return;
  }
}



uint FUN_00725ef0(int param_1)

{
  bool bVar1;
  uint uVar2;
  int in_ECX;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  
  uVar2 = *(uint *)(in_ECX + 4);
  if (uVar2 != *(uint *)(param_1 + 4)) {
    return uVar2 & 0xffffff00;
  }
  pbVar4 = *(byte **)(param_1 + 8);
  pbVar3 = *(byte **)(in_ECX + 8);
  for (; 3 < uVar2; uVar2 = uVar2 - 4) {
    if (*(int *)pbVar3 != *(int *)pbVar4) goto LAB_00725f28;
    pbVar4 = pbVar4 + 4;
    pbVar3 = pbVar3 + 4;
  }
  if (uVar2 == 0) {
LAB_00725f8d:
    bVar1 = false;
  }
  else {
LAB_00725f28:
    iVar5 = (uint)*pbVar3 - (uint)*pbVar4;
    if (iVar5 == 0) {
      if (uVar2 == 1) goto LAB_00725f8d;
      iVar5 = (uint)pbVar3[1] - (uint)pbVar4[1];
      if (iVar5 == 0) {
        if (uVar2 == 2) goto LAB_00725f8d;
        iVar5 = (uint)pbVar3[2] - (uint)pbVar4[2];
        if (iVar5 == 0) {
          if ((uVar2 == 3) || (iVar5 = (uint)pbVar3[3] - (uint)pbVar4[3], iVar5 == 0))
          goto LAB_00725f8d;
        }
      }
    }
    bVar1 = true;
    if (iVar5 < 1) {
      return 0xffffff00;
    }
  }
  return (uint)!bVar1;
}



void FUN_00726010(void)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca4b8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar2);
  *in_ECX = &PTR_FUN_00a45ec4;
  in_ECX[7] = &PTR__scalar_deleting_destructor__00a45e70;
  *(undefined2 *)(in_ECX + 9) = 0;
  *(undefined2 *)((int)in_ECX + 0x2a) = 1;
  *(undefined2 *)((int)in_ECX + 0x26) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  in_ECX[8] = 0;
  in_ECX[2] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  uVar1 = 0;
  if (*(short *)((int)in_ECX + 0x26) != 0) {
    do {
      uVar2 = (uint)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(in_ECX[8] + uVar2 * 4) = 0;
    } while (uVar1 < *(ushort *)((int)in_ECX + 0x26));
  }
  *(undefined2 *)((int)in_ECX + 0x26) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  in_ECX[6] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_007260b0(void *param_1,void *param_2,int *param_3,char param_4)

{
  int *_Size;
  int *piVar1;
  int *in_ECX;
  bool bVar2;
  
  _Size = param_3;
  piVar1 = param_3;
  if ((param_1 < (void *)(uint)*(ushort *)((int)in_ECX + 0x26)) &&
     (piVar1 = *(int **)(in_ECX[8] + (int)param_1 * 4), piVar1 != (int *)0x0)) {
    bVar2 = (int *)piVar1[1] != param_3;
    param_3 = piVar1;
    if (bVar2) {
      (**(code **)(*piVar1 + 0xc))(0);
      piVar1[2] = 0;
    }
  }
  else {
    param_3 = piVar1;
    piVar1 = (int *)(**(code **)(*in_ECX + 0x50))();
    param_3 = piVar1;
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  if (piVar1[2] == 0) {
    if (param_4 != '\0') {
      *(bool *)((int)piVar1 + 0xd) = *(ushort *)(in_ECX + 3) < 0x40;
      param_2 = (void *)(**(code **)*piVar1)(_Size);
      if (param_1 != (void *)0x0) {
        _memcpy(param_2,param_1,(size_t)_Size);
      }
      (**(code **)(*piVar1 + 4))(param_2,0);
    }
    piVar1[1] = (int)_Size;
    piVar1[2] = (int)param_2;
  }
  if ((void *)(uint)*(ushort *)(in_ECX + 9) <= param_1) {
    FUN_004e4a10((uint)*(ushort *)((int)in_ECX + 0x2a) + (int)param_1);
  }
  FUN_0042bb90(param_1,&param_3);
  *(char *)(piVar1 + 3) = param_4;
  return 1;
}



int FUN_00726190(uint param_1,int *param_2)

{
  int *piVar1;
  int in_ECX;
  
  *param_2 = 0;
  if ((param_1 < *(ushort *)(in_ECX + 0x26)) &&
     (piVar1 = *(int **)(*(int *)(in_ECX + 0x20) + param_1 * 4), piVar1 != (int *)0x0)) {
    *param_2 = piVar1[1];
    (**(code **)(*piVar1 + 4))(0,0);
    return piVar1[2];
  }
  return 0;
}



void FUN_007261d0(uint param_1)

{
  int *piVar1;
  int in_ECX;
  
  if ((param_1 < *(ushort *)(in_ECX + 0x26)) &&
     (piVar1 = *(int **)(*(int *)(in_ECX + 0x20) + param_1 * 4), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 8))(0,0);
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
  }
  return;
}



undefined4 FUN_00726200(uint param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 < *(ushort *)(in_ECX + 0x26)) &&
     (piVar1 = *(int **)(*(int *)(in_ECX + 0x20) + param_1 * 4), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0xc))(0);
    FUN_00401f20(piVar1);
    FUN_0042bb90(param_1,&stack0x00000000);
    if ((char)param_1 != '\0') {
      uVar4 = *(uint *)(in_ECX + 0x10);
      uVar5 = 0;
      if (uVar4 != 0) {
        iVar3 = 0;
        do {
          iVar2 = *(int *)(in_ECX + 0x14);
          if (((param_1 == *(uint *)(iVar3 + 0x14 + iVar2)) && (uVar5 < uVar4)) && (iVar2 != 0)) {
            *(undefined4 *)(iVar3 + 4 + iVar2) = 0;
            *(undefined4 *)(iVar3 + 0xc + iVar2) = 0;
            *(undefined4 *)(iVar3 + 8 + iVar2) = 0;
            *(undefined4 *)(iVar3 + 0x10 + iVar2) = 0;
            *(undefined4 *)(iVar3 + 0x14 + iVar2) = 0;
            *(undefined4 *)(iVar3 + 0x18 + iVar2) = 0;
          }
          uVar4 = *(uint *)(in_ECX + 0x10);
          uVar5 = uVar5 + 1;
          iVar3 = iVar3 + 0x1c;
        } while (uVar5 < uVar4);
      }
    }
    return 1;
  }
  return 0;
}



uint FUN_007262a0(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,ushort param_5,
                 int param_6,undefined4 param_7)

{
  int iVar1;
  uint in_EAX;
  int in_ECX;
  
  if (((param_5 == *(ushort *)(in_ECX + 0xc)) &&
      (in_EAX = param_1, param_1 < *(uint *)(in_ECX + 0x10))) && (*(int *)(in_ECX + 0x14) != 0)) {
    if (*(ushort *)(in_ECX + 0x26) < param_2) {
      return param_1 & 0xffffff00;
    }
    iVar1 = *(int *)(in_ECX + 0x14) + param_1 * 0x1c;
    *(undefined4 *)(iVar1 + 4) = param_4;
    *(uint *)(iVar1 + 0x14) = param_2;
    *(undefined4 *)(iVar1 + 0x18) = param_3;
    *(undefined4 *)(iVar1 + 0x10) = param_7;
    *(int *)(iVar1 + 8) = param_6;
    *(uint *)(iVar1 + 0xc) = (uint)param_5 * param_6;
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}



undefined4
FUN_00726320(uint param_1,int *param_2,int *param_3,undefined2 *param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 0x10) <= param_1) || (iVar1 = *(int *)(in_ECX + 0x14), iVar1 == 0)) {
    return 0;
  }
  iVar2 = *(int *)(iVar1 + 4 + param_1 * 0x1c);
  iVar1 = iVar1 + param_1 * 0x1c;
  *param_3 = iVar2;
  if (iVar2 != 0) {
    *param_4 = *(undefined2 *)(in_ECX + 0xc);
    *param_5 = *(undefined4 *)(iVar1 + 0xc);
    *param_6 = *(undefined4 *)(iVar1 + 8);
    *param_7 = *(undefined4 *)(iVar1 + 0x10);
    if (((*(uint *)(iVar1 + 0x14) <= (uint)*(ushort *)(in_ECX + 0x26)) &&
        (iVar2 = *(int *)(*(int *)(in_ECX + 0x20) + *(uint *)(iVar1 + 0x14) * 4), iVar2 != 0)) &&
       (*(uint *)(iVar1 + 0x18) <= *(uint *)(iVar2 + 4))) {
      *param_2 = *(int *)(iVar2 + 8) + *(uint *)(iVar1 + 0x18);
      return 1;
    }
  }
  return 0;
}



void FUN_007263b0(void)

{
  FUN_004e4a10();
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
  local_10 = FUN_00401f00(0x2c,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_00726010();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined1 FUN_00726430(int param_1)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  cVar3 = FUN_00700670(param_1);
  if (cVar3 == '\0') {
    return 0;
  }
  if ((*(short *)(in_ECX + 0xc) != *(short *)(param_1 + 0xc)) ||
     (uVar8 = *(uint *)(in_ECX + 0x10), uVar8 != *(uint *)(param_1 + 0x10))) {
    return 0;
  }
  uVar7 = 0;
  if (uVar8 != 0) {
    pcVar4 = *(char **)(in_ECX + 0x14);
    piVar5 = (int *)(*(int *)(param_1 + 0x14) + 8);
    iVar6 = *(int *)(param_1 + 0x14) - (int)pcVar4;
    do {
      if (*(int *)(pcVar4 + 4) != piVar5[-1]) {
        return 0;
      }
      if (*(int *)(pcVar4 + 8) != *piVar5) {
        return 0;
      }
      if (*(int *)(pcVar4 + 0xc) != piVar5[1]) {
        return 0;
      }
      if (*(int *)(pcVar4 + 0x10) != piVar5[2]) {
        return 0;
      }
      if (*(int *)(pcVar4 + 0x14) != piVar5[3]) {
        return 0;
      }
      if (*(int *)(pcVar4 + 0x18) != piVar5[4]) {
        return 0;
      }
      if (*pcVar4 != pcVar4[iVar6]) {
        return 0;
      }
      uVar7 = uVar7 + 1;
      piVar5 = piVar5 + 7;
      pcVar4 = pcVar4 + 0x1c;
    } while (uVar7 < uVar8);
  }
  uVar1 = *(ushort *)(in_ECX + 0x26);
  uVar8 = 0;
  if (uVar1 != 0) {
    piVar5 = *(int **)(param_1 + 0x20);
    iVar6 = *(int *)(in_ECX + 0x20) - (int)piVar5;
    do {
      iVar2 = *(int *)(iVar6 + (int)piVar5);
      if (*piVar5 == 0) {
        if (iVar2 != 0) {
          return 0;
        }
      }
      else {
        if (iVar2 == 0) {
          return 0;
        }
        cVar3 = FUN_00725ef0(*piVar5);
        if (cVar3 == '\0') {
          return 0;
        }
      }
      uVar8 = uVar8 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar8 < uVar1);
  }
  return 1;
}



void FUN_00726510(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  piVar1 = (int *)(param_1 + 0x21c);
  param_1 = 4;
  (**(code **)(*piVar1 + 4))(*piVar1,in_ECX + 4,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 8,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0xc,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x10,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x14,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x18,4,&param_1,1);
  param_1 = 1;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c));
  return;
}



void FUN_007265f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  piVar1 = (int *)(param_1 + 0x220);
  param_1 = 4;
  (**(code **)(*piVar1 + 8))(*piVar1,in_ECX + 4,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 8,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 0xc,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 0x10,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 0x14,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 0x18,4,&param_1,1);
  param_1 = 1;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220));
  return;
}



void FUN_007266d0(int param_1,undefined4 param_2,undefined4 param_3,ushort param_4,ushort param_5)

{
  code *pcVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  uint uVar4;
  undefined4 local_110;
  uint uStack_10c;
  uint uStack_108;
  int aiStack_104 [32];
  int aiStack_84 [33];
  
  local_110 = 4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),in_ECX + 1,4,&local_110,1);
  pcVar1 = *(code **)*in_ECX;
  *(bool *)((int)in_ECX + 0xd) = param_5 < 0x40;
  iVar2 = (*pcVar1)(in_ECX[1]);
  in_ECX[2] = iVar2;
  *(undefined1 *)(in_ECX + 3) = 1;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))
            (*(int *)(param_1 + 0x21c),&uStack_10c,4,&stack0xfffffeec,1);
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))
            (*(int *)(param_1 + 0x21c),aiStack_84,uStack_10c * 4,&stack0xfffffeec,1);
  uVar4 = 0;
  if (uStack_10c != 0) {
    uStack_108 = (uint)param_4;
    do {
      local_110 = 4;
      (**(code **)(*(int *)(param_1 + 0x21c) + 4))
                (*(int *)(param_1 + 0x21c),&stack0xfffffeec,4,&local_110,1);
      local_110 = 4;
      (**(code **)(*(int *)(param_1 + 0x21c) + 4))
                (*(int *)(param_1 + 0x21c),aiStack_104,0x10,&local_110,1);
      iVar2 = 0;
      uVar3 = 0;
      do {
        iVar2 = iVar2 + aiStack_104[uVar3];
        uVar3 = uVar3 + 1;
      } while (uVar3 < 4);
      (**(code **)(*(int *)(param_1 + 0x21c) + 4))
                (*(int *)(param_1 + 0x21c),aiStack_84[uVar4] + in_ECX[2],uStack_108 * iVar2,
                 aiStack_104,4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uStack_10c);
  }
  (**(code **)(*in_ECX + 4))(0,0);
  return;
}



void FUN_00726850(int param_1,int param_2,int param_3,int param_4,ushort param_5)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  int local_208;
  uint uStack_204;
  int aiStack_200 [32];
  uint auStack_180 [32];
  int aiStack_100 [32];
  uint auStack_80 [32];
  
  local_218 = 4;
  local_208 = in_ECX;
  (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220),in_ECX + 4,4,&local_218,1);
  uStack_214 = 0;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (*(int *)(param_3 + 0x14) == param_2) {
      aiStack_200[uStack_214] = param_3;
      uStack_214 = uStack_214 + 1;
    }
    param_3 = param_3 + 0x1c;
  }
  uVar5 = 0;
  if (uStack_214 != 0) {
    do {
      iVar4 = aiStack_200[uVar5];
      uVar3 = 0;
      if (uVar5 != 0) {
        do {
          iVar1 = aiStack_200[uVar3];
          if (*(uint *)(iVar4 + 0x18) < *(uint *)(iVar1 + 0x18)) {
            aiStack_200[uVar3] = iVar4;
            iVar4 = iVar1;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar5);
      }
      aiStack_200[uVar5] = iVar4;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uStack_214);
  }
  uVar5 = 1;
  auStack_180[0] = 0;
  auStack_80[0] = 0;
  uStack_210 = 1;
  uVar3 = 1;
  if (1 < uStack_214) {
    do {
      iVar4 = aiStack_200[uVar3];
      uVar6 = *(uint *)(iVar4 + 0x18);
      if (*(int *)(aiStack_200[0] + 0x10) * (uint)param_5 + *(int *)(aiStack_200[0] + 0x18) < uVar6)
      {
        auStack_180[uVar5] = uVar3;
        auStack_80[uVar5] = uVar6;
        uVar5 = uVar5 + 1;
        aiStack_200[0] = iVar4;
        uStack_210 = uVar5;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uStack_214);
  }
  auStack_180[uVar5] = uStack_214;
  local_218 = 4;
  (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220),&uStack_210,4,&local_218,1)
  ;
  local_218 = 4;
  (**(code **)(*(int *)(param_1 + 0x220) + 8))
            (*(int *)(param_1 + 0x220),auStack_80,uStack_210 * 4,&local_218,1);
  uStack_214 = 0;
  if (uStack_210 != 0) {
    uStack_204 = (uint)param_5;
    do {
      uVar5 = auStack_180[uStack_214];
      uVar3 = auStack_180[uStack_214 + 1];
      local_218 = 0;
      uVar2 = local_218;
      for (uVar6 = uVar5; uVar6 < uVar3; uVar6 = uVar6 + 1) {
        local_218 = uVar2;
        FUN_00725de0(aiStack_100,&local_218,0x20);
        uVar2 = local_218;
      }
      local_218 = 4;
      uStack_20c = uVar2;
      (**(code **)(*(int *)(param_1 + 0x220) + 8))
                (*(int *)(param_1 + 0x220),&uStack_20c,4,&local_218,1);
      local_218 = 4;
      (**(code **)(*(int *)(param_1 + 0x220) + 8))
                (*(int *)(param_1 + 0x220),aiStack_100,uStack_20c * 4,&local_218,1);
      iVar4 = 0;
      uVar3 = 0;
      if (uStack_20c != 0) {
        do {
          iVar4 = iVar4 + aiStack_100[uVar3];
          uVar3 = uVar3 + 1;
        } while (uVar3 < uStack_20c);
      }
      (**(code **)(*(int *)(param_1 + 0x220) + 8))
                (*(int *)(param_1 + 0x220),
                 *(int *)(aiStack_200[uVar5] + 0x18) + *(int *)(local_208 + 8),uStack_204 * iVar4,
                 aiStack_100,uStack_20c);
      uStack_214 = uStack_214 + 1;
    } while (uStack_214 < uStack_210);
  }
  return;
}



void FUN_00726ae0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca4f3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a45ec4;
  uVar2 = 0;
  local_4 = 1;
  if (*(short *)((int)in_ECX + 0x26) != 0) {
    do {
      FUN_00726200(uVar2,1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)((int)in_ECX + 0x26));
  }
  if (in_ECX[5] != 0) {
    FUN_00401f20(in_ECX[5],uVar1);
  }
  in_ECX[7] = &PTR__scalar_deleting_destructor__00a45e70;
  FUN_00401f20(in_ECX[8],uVar1);
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00726b80(uint param_1)

{
  void *_Src;
  uint uVar1;
  void *_Dst;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c620b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  _Src = *(void **)(in_ECX + 0x14);
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 0x1c >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 0x1c),uVar1);
  local_4 = 0;
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(_Dst,0x1c,param_1,FUN_0053d910);
  }
  *(void **)(in_ECX + 0x14) = _Dst;
  if (_Src != (void *)0x0) {
    _memcpy(_Dst,_Src,*(int *)(in_ECX + 0x10) * 0x1c);
    FUN_00401f20(_Src);
  }
  *(uint *)(in_ECX + 0x10) = param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00726c30(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  char cStack_19;
  uint uStack_18;
  void *local_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca51b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007008a0(param_1);
  local_14 = (void *)0x2;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))
            (*(int *)(param_1 + 0x21c),in_ECX + 3,2,&local_14,1,uVar2);
  puVar1 = (uint *)(in_ECX + 4);
  local_14 = (void *)0x4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),puVar1,4,&local_14,1);
  uVar2 = *puVar1;
  if (uVar2 != 0) {
    local_14 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)uVar2 * 0x1c >> 0x20) != 0) |
                                    (uint)((ulonglong)uVar2 * 0x1c));
    uStack_4 = 0;
    if (local_14 == (void *)0x0) {
      local_14 = (void *)0x0;
    }
    else {
      _vector_constructor_iterator_(local_14,0x1c,uVar2,FUN_0053d910);
    }
    uVar2 = 0;
    uStack_4 = 0xffffffff;
    in_ECX[5] = (int)local_14;
    if (*puVar1 != 0) {
      local_14 = (void *)0x0;
      do {
        FUN_00726510(param_1);
        local_14 = (void *)((int)local_14 + 0x1c);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *puVar1);
    }
  }
  uStack_18 = 0;
  local_14 = (void *)0x4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),&uStack_18,4,&local_14,1);
  FUN_004e4a10(uStack_18);
  uVar2 = 0;
  if (uStack_18 != 0) {
    do {
      uStack_10 = 1;
      (**(code **)(*(int *)(param_1 + 0x21c) + 4))
                (*(int *)(param_1 + 0x21c),&cStack_19,1,&uStack_10,1);
      if (cStack_19 == '\0') {
        if (uVar2 < *(ushort *)((int)in_ECX + 0x26)) {
          if (*(int *)(in_ECX[8] + uVar2 * 4) != 0) {
            *(short *)(in_ECX + 10) = (short)in_ECX[10] + -1;
          }
        }
        else {
          *(short *)((int)in_ECX + 0x26) = (short)uVar2 + 1;
        }
        *(undefined4 *)(in_ECX[8] + uVar2 * 4) = 0;
      }
      else {
        iVar3 = (**(code **)(*in_ECX + 0x50))();
        FUN_007266d0(param_1,uVar2,in_ECX[5],in_ECX[4],(short)in_ECX[3]);
        if (uVar2 < *(ushort *)((int)in_ECX + 0x26)) {
          if (iVar3 == 0) {
            if (*(int *)(in_ECX[8] + uVar2 * 4) != 0) {
              *(short *)(in_ECX + 10) = (short)in_ECX[10] + -1;
            }
          }
          else if (*(int *)(in_ECX[8] + uVar2 * 4) == 0) {
            *(short *)(in_ECX + 10) = (short)in_ECX[10] + 1;
            *(int *)(in_ECX[8] + uVar2 * 4) = iVar3;
            goto LAB_00726e4c;
          }
        }
        else {
          *(short *)((int)in_ECX + 0x26) = (short)uVar2 + 1;
          if (iVar3 != 0) {
            *(short *)(in_ECX + 10) = (short)in_ECX[10] + 1;
            *(int *)(in_ECX[8] + uVar2 * 4) = iVar3;
            goto LAB_00726e4c;
          }
        }
        *(int *)(in_ECX[8] + uVar2 * 4) = iVar3;
      }
LAB_00726e4c:
      uVar2 = uVar2 + 1;
    } while (uVar2 < uStack_18);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00726e70(int param_1)

{
  uint *puVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uStack_8;
  int iStack_4;
  
  iVar2 = param_1;
  FUN_0068f970(param_1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 0xc,2,&param_1,1);
  puVar1 = (uint *)(in_ECX + 0x10);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),puVar1,4,&param_1,1);
  uVar3 = 0;
  if (*puVar1 != 0) {
    param_1 = 0;
    do {
      FUN_007265f0(iVar2);
      param_1 = param_1 + 0x1c;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *puVar1);
  }
  uStack_8 = (uint)*(ushort *)(in_ECX + 0x26);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),&uStack_8,4,&param_1,1);
  uVar3 = 0;
  if (*(short *)(in_ECX + 0x26) != 0) {
    do {
      iStack_4 = *(int *)(*(int *)(in_ECX + 0x20) + uVar3 * 4);
      param_1 = CONCAT31(param_1._1_3_,iStack_4 != 0);
      uStack_8 = 1;
      (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),&param_1,1,&uStack_8,1);
      if ((char)param_1 != '\0') {
        FUN_00726850(iVar2,uVar3,*(undefined4 *)(in_ECX + 0x14),*puVar1,
                     *(undefined2 *)(in_ECX + 0xc));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(in_ECX + 0x26));
  }
  return;
}



void FUN_00726f90(uint param_1)

{
  byte bVar1;
  byte *in_ECX;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 local_4;
  
  switch(*(undefined4 *)(in_ECX + 4)) {
  case 0:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_INVALID");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 1:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_FLOAT1");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 2:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_FLOAT2");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 3:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_FLOAT3");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 4:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_FLOAT4");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 5:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_LONG1");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 6:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_LONG2");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 7:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_LONG3");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 8:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_LONG4");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 9:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_ULONG1");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 10:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_ULONG2");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0xb:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_ULONG3");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0xc:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_ULONG4");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0xd:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_SHORT1");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0xe:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_SHORT2");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0xf:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_SHORT3");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0x10:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_SHORT4");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0x11:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_USHORT1");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0x12:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_USHORT2");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0x13:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_USHORT3");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0x14:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_USHORT4");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0x15:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_BYTE1");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0x16:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_BYTE2");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0x17:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_BYTE3");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0x18:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_BYTE4");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0x19:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_UBYTE1");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0x1a:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_UBYTE2");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0x1b:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_UBYTE3");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0x1c:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_UBYTE4");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0x1d:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_BLEND1");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0x1e:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_BLEND2");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0x1f:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_BLEND3");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0x20:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_BLEND4");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  case 0x21:
    local_4 = FUN_0070fc30("        m_uiType","AGD_NITYPE_COUNT");
    iVar2 = param_1;
    FUN_0042d800(&local_4);
    break;
  default:
    local_4 = FUN_0070fc30("        m_uiType","UNKNOWN!!!");
    iVar2 = param_1;
    uVar3 = (uint)*(ushort *)(param_1 + 10);
    if (*(ushort *)(param_1 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&local_4);
  }
  param_1 = FUN_0070fb40("        m_uiUnitSize",*(undefined4 *)(in_ECX + 8));
  uVar3 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070fb40("        m_uiTotalSize",*(undefined4 *)(in_ECX + 0xc));
  uVar3 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070fb40("        m_uiStride",*(undefined4 *)(in_ECX + 0x10));
  uVar3 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070fb40("        m_uiBlockIndex",*(undefined4 *)(in_ECX + 0x14));
  uVar3 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070fb40("        m_uiBlockOffset",*(undefined4 *)(in_ECX + 0x18));
  uVar3 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = CONCAT31(param_1._1_3_,*in_ECX) & 0xffffff01;
  param_1 = FUN_0070f950("        Keep",param_1);
  uVar3 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  bVar1 = *in_ECX & 6;
  if (bVar1 == 2) {
    pcVar4 = "MUTABLE";
  }
  else {
    if ((bVar1 != 3) && (bVar1 == 4)) {
      param_1 = FUN_0070fc30("        Consistency","VOLATILE");
      FUN_0042d800(&param_1);
      return;
    }
    pcVar4 = "STATIC";
  }
  param_1 = FUN_0070fc30("        Consistency",pcVar4);
  uVar3 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  return;
}



void FUN_00727820(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  undefined4 local_4;
  
  local_4 = FUN_0070fb40("        m_uiDataBlockSize",*(undefined4 *)(in_ECX + 4));
  iVar1 = param_1;
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_4);
  param_1 = FUN_0070fbe0("        m_pucDataBlock",*(undefined4 *)(in_ECX + 8));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_007278b0(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  
  iVar2 = param_1;
  FUN_007009a0(param_1);
  param_1 = FUN_0070f910(DAT_00b3fd90);
  uVar5 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar5) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar5);
  }
  FUN_0042bb90(uVar5,&param_1);
  param_1 = FUN_0070faa0("m_usVertexCount",*(undefined2 *)(in_ECX + 0xc));
  uVar5 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar5) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar5);
  }
  FUN_0042bb90(uVar5,&param_1);
  param_1 = FUN_0070fb40("m_uiDataStreamCount",*(undefined4 *)(in_ECX + 0x10));
  uVar5 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar5) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar5);
  }
  FUN_0042bb90(uVar5,&param_1);
  uVar5 = 0;
  if (*(int *)(in_ECX + 0x10) != 0) {
    param_1 = 0;
    do {
      iVar4 = FUN_0070fb40("    DataStream Index",uVar5);
      uVar1 = *(ushort *)(iVar2 + 10);
      uVar6 = (uint)uVar1;
      if (*(ushort *)(iVar2 + 8) <= uVar6) {
        FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar6);
      }
      iVar3 = param_1;
      if (uVar6 < *(ushort *)(iVar2 + 10)) {
        if (iVar4 == 0) {
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
        if (iVar4 != 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      *(int *)(*(int *)(iVar2 + 4) + uVar6 * 4) = iVar4;
      FUN_00726f90(iVar2);
      uVar5 = uVar5 + 1;
      param_1 = iVar3 + 0x1c;
    } while (uVar5 < *(uint *)(in_ECX + 0x10));
  }
  iVar4 = FUN_0070fb40("m_aDataBlocks.GetSize()",*(undefined2 *)(in_ECX + 0x26));
  uVar1 = *(ushort *)(iVar2 + 10);
  uVar5 = (uint)uVar1;
  if (*(ushort *)(iVar2 + 8) <= uVar5) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar5);
  }
  if (uVar5 < *(ushort *)(iVar2 + 10)) {
    if (iVar4 == 0) {
      if (*(int *)(*(int *)(iVar2 + 4) + uVar5 * 4) != 0) {
        *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(iVar2 + 4) + uVar5 * 4) == 0) {
      *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
    }
  }
  else {
    *(ushort *)(iVar2 + 10) = uVar1 + 1;
    if (iVar4 != 0) {
      *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
    }
  }
  uVar6 = 0;
  *(int *)(*(int *)(iVar2 + 4) + uVar5 * 4) = iVar4;
  if (*(short *)(in_ECX + 0x26) != 0) {
    do {
      iVar4 = FUN_0070fb40("    DataBlock Index",uVar6);
      uVar1 = *(ushort *)(iVar2 + 10);
      uVar5 = (uint)uVar1;
      if (*(ushort *)(iVar2 + 8) <= uVar5) {
        FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar5);
      }
      if (uVar5 < *(ushort *)(iVar2 + 10)) {
        if (iVar4 == 0) {
          if (*(int *)(*(int *)(iVar2 + 4) + uVar5 * 4) != 0) {
            *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(iVar2 + 4) + uVar5 * 4) == 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(iVar2 + 10) = uVar1 + 1;
        if (iVar4 != 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      *(int *)(*(int *)(iVar2 + 4) + uVar5 * 4) = iVar4;
      if (*(int *)(*(int *)(in_ECX + 0x20) + uVar6 * 4) == 0) {
        iVar4 = FUN_0070faf0("        m_uiDataBlockSize",0);
        uVar1 = *(ushort *)(iVar2 + 10);
        uVar5 = (uint)uVar1;
        if (*(ushort *)(iVar2 + 8) <= uVar5) {
          FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar5);
        }
        if (uVar5 < *(ushort *)(iVar2 + 10)) {
          if (iVar4 == 0) {
            if (*(int *)(*(int *)(iVar2 + 4) + uVar5 * 4) != 0) {
              *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
            }
          }
          else if (*(int *)(*(int *)(iVar2 + 4) + uVar5 * 4) == 0) {
            *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
          }
        }
        else {
          *(ushort *)(iVar2 + 10) = uVar1 + 1;
          if (iVar4 != 0) {
            *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
          }
        }
        *(int *)(*(int *)(iVar2 + 4) + uVar5 * 4) = iVar4;
        iVar4 = FUN_0070fc30("        m_pucDataBlock",&DAT_00a3d014);
        uVar1 = *(ushort *)(iVar2 + 10);
        uVar5 = (uint)uVar1;
        if (*(ushort *)(iVar2 + 8) <= uVar5) {
          FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar5);
        }
        if (uVar5 < *(ushort *)(iVar2 + 10)) {
          if (iVar4 == 0) {
            if (*(int *)(*(int *)(iVar2 + 4) + uVar5 * 4) != 0) {
              *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
            }
          }
          else if (*(int *)(*(int *)(iVar2 + 4) + uVar5 * 4) == 0) {
            *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
          }
        }
        else {
          *(ushort *)(iVar2 + 10) = uVar1 + 1;
          if (iVar4 != 0) {
            *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
          }
        }
        *(int *)(*(int *)(iVar2 + 4) + uVar5 * 4) = iVar4;
      }
      else {
        FUN_00727820(iVar2);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(in_ECX + 0x26));
  }
  return;
}



undefined4 * FUN_00727d50(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x34,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00726010();
    *puVar2 = &PTR_FUN_00a45f1c;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 * FUN_00727f20(void)

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
    *puVar2 = &PTR_FUN_00a45f74;
    puVar2[4] = 0;
    puVar2[3] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 * FUN_00728050(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *_Dst;
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
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00721350();
    *puVar2 = &PTR_FUN_00a45f74;
    puVar2[4] = 0;
    puVar2[3] = 0;
  }
  local_4 = 0xffffffff;
  FUN_007214a0(puVar2,param_1);
  if (*(int *)(in_ECX + 0x10) == 0) {
    puVar2[4] = 0;
    puVar2[3] = 0;
  }
  else {
    _Dst = (void *)FUN_00401f00(*(int *)(in_ECX + 0x10),uVar1);
    puVar2[3] = _Dst;
    _memcpy(_Dst,*(void **)(in_ECX + 0xc),*(size_t *)(in_ECX + 0x10));
    puVar2[4] = *(undefined4 *)(in_ECX + 0x10);
  }
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_00728110(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  
  iVar3 = param_1;
  FUN_00721610(param_1);
  iVar2 = *(int *)(iVar3 + 0x21c);
  piVar1 = (int *)(in_ECX + 0x10);
  param_1 = 4;
  (**(code **)(iVar2 + 4))(iVar2,piVar1,4,&param_1,1);
  if (*piVar1 != 0) {
    uVar4 = FUN_00401f00(*piVar1);
    *(undefined4 *)(in_ECX + 0xc) = uVar4;
    iVar2 = *(int *)(iVar3 + 0x21c);
    param_1 = 1;
    (**(code **)(iVar2 + 4))(iVar2,uVar4,*piVar1,&param_1,1);
  }
  return;
}



void FUN_00728180(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_006fe000(param_1);
  iVar1 = *(int *)(iVar2 + 0x220);
  param_1 = 4;
  (**(code **)(iVar1 + 8))(iVar1,(int *)(in_ECX + 0x10),4,&param_1,1);
  iVar1 = *(int *)(in_ECX + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar2 + 0x220);
    param_1 = 1;
    (**(code **)(iVar2 + 8))(iVar2,*(undefined4 *)(in_ECX + 0xc),iVar1,&param_1,1);
  }
  return;
}



void FUN_00728280(char param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 1;
  if ((*(ushort *)(in_ECX + 0x2c) & 0xf000) != 0) {
    iVar2 = 3;
  }
  if (*(int *)(in_ECX + 0x20) == 0) {
    uVar1 = FUN_00401f00((uint)*(ushort *)(in_ECX + 8) * iVar2 * 0xc);
    *(undefined4 *)(in_ECX + 0x20) = uVar1;
  }
  if (param_1 != '\0') {
    _memset(*(void **)(in_ECX + 0x20),0,(uint)*(ushort *)(in_ECX + 8) * iVar2 * 0xc);
  }
  return;
}



int FUN_007282f0(ushort param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x28) != 0) && (param_1 < (*(byte *)(in_ECX + 0x2c) & 0x3f))) {
    return *(int *)(in_ECX + 0x28) + (uint)*(ushort *)(in_ECX + 8) * (uint)param_1 * 8;
  }
  return 0;
}



void FUN_00728320(undefined2 param_1,int param_2,int param_3,int param_4,int param_5,byte param_6,
                 ushort param_7)

{
  short sVar1;
  int *in_ECX;
  
  *(undefined2 *)(in_ECX + 2) = param_1;
  in_ECX[7] = param_2;
  in_ECX[8] = param_3;
  sVar1 = (**(code **)(*in_ECX + 0x50))();
  if ((sVar1 != 0) && (in_ECX[7] != 0)) {
    FUN_0072a0f0(sVar1,in_ECX[7]);
  }
  in_ECX[9] = param_4;
  in_ECX[10] = param_5;
  *(ushort *)(in_ECX + 0xb) = *(ushort *)(in_ECX + 0xb) & 0xfc0 | param_6 & 0x3f | param_7;
  return;
}



void FUN_00728390(undefined2 param_1,int param_2,int param_3,int param_4,int param_5,byte param_6,
                 ushort param_7)

{
  int *in_ECX;
  
  *(undefined2 *)(in_ECX + 2) = param_1;
  in_ECX[7] = param_2;
  in_ECX[8] = param_3;
  (**(code **)(*in_ECX + 0x50))();
  in_ECX[9] = param_4;
  in_ECX[10] = param_5;
  *(ushort *)(in_ECX + 0xb) = *(ushort *)(in_ECX + 0xb) & 0xfc0 | param_6 & 0x3f | param_7;
  return;
}



undefined4 FUN_007283f0(void)

{
  int in_EAX;
  float *in_ECX;
  uint uVar1;
  int iVar2;
  uint unaff_EDI;
  
  uVar1 = 0;
  if (unaff_EDI != 0) {
    iVar2 = in_EAX - (int)in_ECX;
    do {
      if (*(float *)(iVar2 + (int)in_ECX) < *in_ECX) {
        return 0xffffffff;
      }
      if (*in_ECX < *(float *)(iVar2 + (int)in_ECX)) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      in_ECX = in_ECX + 1;
    } while (uVar1 < unaff_EDI);
  }
  return 0;
}



int FUN_00728440(ushort param_1,ushort param_2,uint param_3)

{
  ushort uVar1;
  int in_ECX;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if ((param_3 & 1) != 0) {
    pfVar2 = (float *)(*(int *)(in_ECX + 0x1c) + (uint)param_2 * 0xc);
    uVar3 = 0;
    iVar5 = (*(int *)(in_ECX + 0x1c) + (uint)param_1 * 0xc) - (int)pfVar2;
    do {
      if (*(float *)(iVar5 + (int)pfVar2) < *pfVar2) {
        return -1;
      }
      if (*pfVar2 < *(float *)(iVar5 + (int)pfVar2)) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      pfVar2 = pfVar2 + 1;
    } while (uVar3 < 3);
  }
  if (((*(int *)(in_ECX + 0x20) != 0) && ((param_3 & 2) != 0)) &&
     (iVar5 = FUN_007283f0(), iVar5 != 0)) {
    return iVar5;
  }
  if (((*(int *)(in_ECX + 0x24) != 0) && ((param_3 & 4) != 0)) &&
     (iVar5 = FUN_007283f0(), iVar5 != 0)) {
    return iVar5;
  }
  iVar5 = *(int *)(in_ECX + 0x28);
  if ((iVar5 != 0) && ((param_3 & 8) != 0)) {
    uVar3 = 0;
    uVar1 = 0;
    if ((*(byte *)(in_ECX + 0x2c) & 0x3f) != 0) {
      do {
        pfVar2 = (float *)(iVar5 + ((uVar3 & 0xffff) + (uint)param_2) * 8);
        uVar4 = 0;
        iVar6 = (iVar5 + ((uVar3 & 0xffff) + (uint)param_1) * 8) - (int)pfVar2;
        do {
          if (*(float *)(iVar6 + (int)pfVar2) < *pfVar2) {
            return -1;
          }
          if (*pfVar2 < *(float *)(iVar6 + (int)pfVar2)) {
            return 1;
          }
          uVar4 = uVar4 + 1;
          pfVar2 = pfVar2 + 1;
        } while (uVar4 < 2);
        uVar3 = uVar3 + *(ushort *)(in_ECX + 8);
        uVar1 = uVar1 + 1;
      } while (uVar1 < (*(byte *)(in_ECX + 0x2c) & 0x3f));
    }
  }
  return 0;
}



int FUN_007285e0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  if (*(int *)(in_ECX + 0x1c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (uint)*(ushort *)(in_ECX + 8) * 0xc;
  }
  if (*(int *)(in_ECX + 0x20) != 0) {
    iVar2 = iVar2 + ((-(uint)((*(ushort *)(in_ECX + 0x2c) & 0xf000) != 0) & 2) + 1) *
                    (uint)*(ushort *)(in_ECX + 8) * 0xc;
  }
  if (*(int *)(in_ECX + 0x24) != 0) {
    iVar2 = iVar2 + (uint)*(ushort *)(in_ECX + 8) * 0x10;
  }
  if (*(int *)(in_ECX + 0x28) != 0) {
    iVar2 = iVar2 + (*(byte *)(in_ECX + 0x2c) & 0x3f) * (uint)*(ushort *)(in_ECX + 8) * 8;
  }
  iVar1 = FUN_006f7070();
  return iVar1 + iVar2;
}



undefined4 FUN_00728650(void)

{
  return DAT_00b3fe00;
}



void FUN_00728670(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,byte param_6,ushort param_7)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca553;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar1);
  *(undefined2 *)(in_ECX + 2) = param_1;
  in_ECX[7] = param_2;
  *in_ECX = &PTR_FUN_00a800bc;
  in_ECX[8] = param_3;
  in_ECX[9] = param_4;
  in_ECX[10] = param_5;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  *(undefined1 *)(in_ECX + 0xc) = 0;
  *(undefined1 *)((int)in_ECX + 0x31) = 0;
  in_ECX[0xd] = 0;
  local_4 = 1;
  *(undefined1 *)(in_ECX + 0xf) = 0;
  *(undefined1 *)((int)in_ECX + 0x3d) = 0;
  *(ushort *)(in_ECX + 0xb) = *(ushort *)(in_ECX + 0xb) & 0xfc0 | param_6 & 0x3f | param_7;
  if ((*(short *)(in_ECX + 2) != 0) && (in_ECX[7] != 0)) {
    FUN_0072a0f0(*(short *)(in_ECX + 2),in_ECX[7]);
  }
  in_ECX[0xe] = 0;
  *(short *)((int)in_ECX + 10) = DAT_00b27504;
  DAT_00b27504 = DAT_00b27504 + 1;
  *(ushort *)((int)in_ECX + 0x2e) = *(ushort *)((int)in_ECX + 0x2e) & 0xfff;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00728770(void)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  *(undefined2 *)(in_ECX + 2) = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  *(undefined1 *)(in_ECX + 0xc) = 0;
  *(undefined1 *)((int)in_ECX + 0x31) = 0;
  *in_ECX = &PTR_FUN_00a800bc;
  in_ECX[0xd] = 0;
  *(ushort *)((int)in_ECX + 0x2e) = *(ushort *)((int)in_ECX + 0x2e) & 0xfff;
  *(undefined1 *)(in_ECX + 0xf) = 0;
  *(undefined1 *)((int)in_ECX + 0x3d) = 0;
  in_ECX[0xe] = 0;
  return;
}



void FUN_007287c0(char param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  ushort uVar4;
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
  if (*(int *)(in_ECX + 0x24) == 0) {
    uVar4 = *(ushort *)(in_ECX + 8);
    pvVar2 = (void *)FUN_00401f00((uint)uVar4 * 0x10,uVar1);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      _vector_constructor_iterator_(pvVar2,0x10,(uint)uVar4,FUN_0047ea50);
    }
    *(void **)(in_ECX + 0x24) = pvVar2;
  }
  if (param_1 != '\0') {
    uVar4 = 0;
    if (*(short *)(in_ECX + 8) != 0) {
      do {
        puVar3 = (undefined4 *)((uint)uVar4 * 0x10 + *(int *)(in_ECX + 0x24));
        uVar4 = uVar4 + 1;
        *puVar3 = DAT_00b25ad0;
        puVar3[1] = DAT_00b25ad4;
        puVar3[2] = DAT_00b25ad8;
        puVar3[3] = DAT_00b25adc;
      } while (uVar4 < *(ushort *)(in_ECX + 8));
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00728890(undefined2 param_1,int param_2,int param_3,int param_4,int param_5,byte param_6,
                 ushort param_7)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int *in_ECX;
  
  iVar3 = (**(code **)(*in_ECX + 0x44))();
  if (iVar3 == 0) {
    if (param_2 != in_ECX[7]) {
      FUN_00401f20(in_ECX[7]);
    }
    if (param_3 != in_ECX[8]) {
      FUN_00401f20(in_ECX[8]);
    }
    if (param_4 != in_ECX[9]) {
      FUN_00401f20(in_ECX[9]);
    }
    if (param_5 != in_ECX[10]) {
      FUN_00401f20(in_ECX[10]);
    }
  }
  else {
    if (param_2 != in_ECX[7]) {
      iVar3 = (**(code **)(*in_ECX + 0x44))();
      piVar1 = (int *)(iVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00732a20();
        FUN_00401f20(iVar3);
      }
    }
    if (param_3 != in_ECX[8]) {
      iVar3 = (**(code **)(*in_ECX + 0x44))();
      piVar1 = (int *)(iVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00732a20();
        FUN_00401f20(iVar3);
      }
    }
    if (param_4 != in_ECX[9]) {
      iVar3 = (**(code **)(*in_ECX + 0x44))();
      piVar1 = (int *)(iVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00732a20();
        FUN_00401f20(iVar3);
      }
    }
    if (param_5 != in_ECX[10]) {
      iVar3 = (**(code **)(*in_ECX + 0x44))();
      piVar1 = (int *)(iVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00732a20();
        FUN_00401f20(iVar3);
      }
    }
  }
  in_ECX[7] = param_2;
  *(undefined2 *)(in_ECX + 2) = param_1;
  in_ECX[8] = param_3;
  sVar2 = (**(code **)(*in_ECX + 0x50))();
  if ((sVar2 != 0) && (in_ECX[7] != 0)) {
    FUN_0072a0f0(sVar2,in_ECX[7]);
  }
  in_ECX[10] = param_5;
  in_ECX[9] = param_4;
  *(ushort *)(in_ECX + 0xb) = *(ushort *)(in_ECX + 0xb) & 0xfc0 | param_6 & 0x3f | param_7;
  return;
}



undefined2 FUN_00728a00(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  
  uVar1 = *(undefined2 *)(param_1 + (param_4 + param_3 >> 1) * 2);
  uVar2 = *(undefined2 *)(param_1 + param_3 * 2);
  iVar4 = FUN_00728440(uVar2,uVar1,param_2);
  if (iVar4 < 0) {
    uVar3 = *(undefined2 *)(param_1 + param_4 * 2);
    iVar4 = FUN_00728440(uVar1,uVar3,param_2);
    if (-1 < iVar4) {
      iVar4 = FUN_00728440(uVar2,uVar3,param_2);
      if (-1 < iVar4) {
        return uVar2;
      }
      return uVar3;
    }
  }
  else {
    uVar3 = *(undefined2 *)(param_1 + param_4 * 2);
    iVar4 = FUN_00728440(uVar2,uVar3,param_2);
    if (iVar4 < 0) {
      return uVar2;
    }
    iVar4 = FUN_00728440(uVar1,uVar3,param_2);
    if (iVar4 < 0) {
      return uVar3;
    }
  }
  return uVar1;
}



undefined4 FUN_00728ab0(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x3c) != '\0') {
    return 0;
  }
  cVar1 = (char)param_1;
  if (*(int **)(in_ECX + 0x34) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x4c))();
    if (cVar2 != '\0') {
      if (cVar1 != '\0') {
        FUN_007261d0(0);
        *(char *)(in_ECX + 0x3d) = cVar1;
        *(undefined1 *)(in_ECX + 0x3c) = 1;
        return 1;
      }
      param_1 = 0;
      FUN_00726190(0,&param_1);
    }
  }
  *(char *)(in_ECX + 0x3d) = cVar1;
  *(undefined1 *)(in_ECX + 0x3c) = 1;
  return 1;
}



void FUN_00728b20(void)

{
  char cVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x3c) != '\0') {
    if (*(int **)(in_ECX + 0x34) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x4c))();
      if ((cVar1 != '\0') && (*(char *)(in_ECX + 0x3d) == '\0')) {
        FUN_007261d0(0);
      }
    }
    *(undefined1 *)(in_ECX + 0x3c) = 0;
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_00728b60(int *param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int local_18;
  int local_14 [3];
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (*(char *)(in_ECX + 0x3c) == '\0') {
    return;
  }
  local_14[0] = 0;
  local_14[2] = 0;
  local_18 = 0;
  if (*(int **)(in_ECX + 0x34) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x4c))();
    if (cVar2 != '\0') {
      local_14[1] = 0;
      FUN_00726320(0,&local_18,auStack_4,local_14 + 2,auStack_8,local_14 + 1,local_14);
    }
    if (local_18 != 0) {
      *param_1 = local_18;
      param_1[1] = local_14[0];
      *(undefined1 *)(param_1 + 2) = 0;
      return;
    }
  }
  iVar1 = *(int *)(in_ECX + 0x1c);
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = iVar1;
  param_1[1] = 0xc;
  return;
}



void FUN_00728c00(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (*(char *)(in_ECX + 0x3c) != '\0') {
    piVar1 = *(int **)(in_ECX + 0x34);
    local_14 = 0;
    local_c = 0;
    local_18 = 0;
    if (piVar1 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar1 + 0x4c))();
      if ((cVar2 != '\0') && ((*(byte *)(piVar1 + 0xb) & 1) != 0)) {
        uStack_10 = 0;
        FUN_00726320(1,&local_18,auStack_4,&local_c,auStack_8,&uStack_10,&local_14);
      }
    }
    *param_1 = local_18;
    param_1[1] = local_14;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



void FUN_00728c80(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (*(char *)(in_ECX + 0x3c) != '\0') {
    piVar1 = *(int **)(in_ECX + 0x34);
    local_14 = 0;
    local_c = 0;
    local_18 = 0;
    if (piVar1 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar1 + 0x4c))();
      if ((cVar2 != '\0') && ((*(byte *)(piVar1 + 0xb) & 1) != 0)) {
        uStack_10 = 0;
        FUN_00726320(2,&local_18,auStack_4,&local_c,auStack_8,&uStack_10,&local_14);
      }
    }
    *param_1 = local_18;
    param_1[1] = local_14;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



void FUN_00728d00(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (*(char *)(in_ECX + 0x3c) != '\0') {
    piVar1 = *(int **)(in_ECX + 0x34);
    local_18 = 0;
    local_c = 0;
    local_14 = 0;
    if (piVar1 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar1 + 0x4c))();
      if (cVar2 != '\0') {
        uStack_10 = 0;
        FUN_00726320((piVar1[0xb] & 1U) * 2 | 1,&local_14,auStack_4,&local_c,auStack_8,&uStack_10,
                     &local_18);
        *param_1 = local_14;
        *(undefined1 *)(param_1 + 2) = 0;
        param_1[1] = local_18;
        return;
      }
    }
    *param_1 = *(undefined4 *)(in_ECX + 0x20);
    param_1[1] = 0xc;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



void FUN_00728db0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int in_ECX;
  undefined1 local_19;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (*(char *)(in_ECX + 0x3c) != '\0') {
    piVar1 = *(int **)(in_ECX + 0x34);
    local_19 = 0;
    local_14 = 0;
    local_c = 0;
    local_18 = 0;
    if ((piVar1 == (int *)0x0) || (cVar3 = (**(code **)(*piVar1 + 0x4c))(), cVar3 == '\0')) {
      local_18 = *(undefined4 *)(in_ECX + 0x24);
      local_14 = 0x10;
    }
    else {
      uVar2 = piVar1[0xb];
      if ((uVar2 & 2) == 0) {
        return;
      }
      uStack_10 = 0;
      FUN_00726320((-((uVar2 & 1) != 0) & 2U) + 2,&local_18,auStack_4,&local_c,auStack_8,&uStack_10,
                   &local_14);
      if ((uVar2 & 0x20) != 0) {
        local_19 = 1;
      }
    }
    *param_1 = local_18;
    param_1[1] = local_14;
    *(undefined1 *)(param_1 + 2) = local_19;
  }
  return;
}



void FUN_00728e70(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (*(char *)(in_ECX + 0x3c) != '\0') {
    piVar1 = *(int **)(in_ECX + 0x34);
    local_18 = 0;
    local_c = 0;
    local_14 = 0;
    if (piVar1 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar1 + 0x4c))();
      if (cVar2 != '\0') {
        uStack_10 = 0;
        FUN_00726320((-(uint)((piVar1[0xb] & 1U) != 0) & 2) + 2 + ((uint)piVar1[0xb] >> 1 & 1),
                     &local_14,auStack_4,&local_c,auStack_8,&uStack_10,&local_18);
        *param_2 = local_14;
        *(undefined1 *)(param_2 + 2) = 0;
        param_2[1] = local_18;
        return;
      }
    }
    *param_2 = *(undefined4 *)(in_ECX + 0x28);
    param_2[1] = 8;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



void FUN_00728f20(int param_1)

{
  undefined4 uVar1;
  
  FUN_0068f970(param_1);
  if (0xa030006 < *(uint *)(param_1 + 0xd8)) {
    uVar1 = FUN_007124a0();
    FUN_0075fa90(uVar1);
  }
  return;
}



undefined4 FUN_00728f50(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_00700650(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((*(int **)(in_ECX + 0x34) != (int *)0x0) &&
     (cVar1 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x24))(param_1), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00728f90(int param_1)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  cVar2 = FUN_00700670(param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = *(ushort *)(in_ECX + 8);
  if (uVar3 != *(ushort *)(param_1 + 8)) {
    return 0;
  }
  iVar5 = *(int *)(in_ECX + 0x1c);
  if (iVar5 == 0) {
LAB_00728fcf:
    if (*(int *)(param_1 + 0x1c) != 0) {
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) {
      return 0;
    }
    if (iVar5 == 0) goto LAB_00728fcf;
  }
  if ((*(char *)(in_ECX + 0x30) != *(char *)(param_1 + 0x30)) ||
     (*(char *)(in_ECX + 0x31) != *(char *)(param_1 + 0x31))) {
    return 0;
  }
  if (iVar5 != 0) {
    uVar6 = 0;
    if (uVar3 != 0) {
      iVar4 = *(int *)(param_1 + 0x1c) - iVar5;
      do {
        cVar2 = FUN_008aa390(iVar4 + iVar5);
        if (cVar2 != '\0') {
          return 0;
        }
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0xc;
      } while (uVar6 < uVar3);
    }
  }
  iVar5 = *(int *)(in_ECX + 0x20);
  if (iVar5 == 0) {
LAB_00729049:
    if (*(int *)(param_1 + 0x20) != 0) {
      return 0;
    }
    if (iVar5 != 0) goto LAB_00729057;
  }
  else {
    if (*(int *)(param_1 + 0x20) == 0) {
      return 0;
    }
    if (iVar5 == 0) goto LAB_00729049;
LAB_00729057:
    uVar3 = *(ushort *)(in_ECX + 0x2c) & 0xf000;
    if (uVar3 != (*(ushort *)(param_1 + 0x2c) & 0xf000)) {
      return 0;
    }
    if (uVar3 == 0) {
      uVar6 = (uint)*(ushort *)(in_ECX + 8);
    }
    else {
      uVar6 = (uint)*(ushort *)(in_ECX + 8) * 3;
    }
    uVar7 = 0;
    if (uVar6 != 0) {
      iVar4 = *(int *)(param_1 + 0x20) - iVar5;
      do {
        cVar2 = FUN_008aa390(iVar5 + iVar4);
        if (cVar2 != '\0') {
          return 0;
        }
        uVar7 = uVar7 + 1;
        iVar5 = iVar5 + 0xc;
      } while (uVar7 < uVar6);
    }
  }
  cVar2 = FUN_0072a0a0(param_1 + 0xc);
  if (cVar2 == '\0') {
    return 0;
  }
  iVar5 = *(int *)(in_ECX + 0x24);
  if ((iVar5 != 0) && (*(int *)(param_1 + 0x24) == 0)) {
    return 0;
  }
  if ((*(int *)(in_ECX + 0x28) == 0) && (*(int *)(param_1 + 0x28) != 0)) {
    return 0;
  }
  if (iVar5 != 0) {
    uVar3 = *(ushort *)(in_ECX + 8);
    uVar6 = 0;
    if (uVar3 != 0) {
      iVar4 = *(int *)(param_1 + 0x24) - iVar5;
      do {
        cVar2 = FUN_00632310(iVar4 + iVar5);
        if (cVar2 != '\0') {
          return 0;
        }
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0x10;
      } while (uVar6 < uVar3);
    }
  }
  iVar5 = *(int *)(in_ECX + 0x28);
  if (iVar5 == 0) {
LAB_0072913c:
    if (*(int *)(param_1 + 0x28) != 0) {
      return 0;
    }
    if (iVar5 != 0) goto LAB_0072914a;
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
      return 0;
    }
    if (iVar5 == 0) goto LAB_0072913c;
LAB_0072914a:
    if (((*(byte *)(param_1 + 0x2c) ^ (byte)*(ushort *)(in_ECX + 0x2c)) & 0x3f) != 0) {
      return 0;
    }
    uVar6 = (*(ushort *)(in_ECX + 0x2c) & 0x3f) * (uint)*(ushort *)(in_ECX + 8);
    uVar7 = 0;
    if (uVar6 != 0) {
      iVar4 = *(int *)(param_1 + 0x28) - iVar5;
      do {
        cVar2 = FUN_004b9d10(iVar4 + iVar5);
        if (cVar2 != '\0') {
          return 0;
        }
        uVar7 = uVar7 + 1;
        iVar5 = iVar5 + 8;
      } while (uVar7 < uVar6);
    }
  }
  piVar1 = *(int **)(in_ECX + 0x34);
  if (piVar1 != (int *)0x0) {
    if (*(int *)(param_1 + 0x34) == 0) {
      return 0;
    }
    if (piVar1 != (int *)0x0) goto LAB_007291b2;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    return 0;
  }
  if (piVar1 == (int *)0x0) {
    return 1;
  }
LAB_007291b2:
  if ((*(int *)(param_1 + 0x34) != 0) &&
     (cVar2 = (**(code **)(*piVar1 + 0x2c))(*(int *)(param_1 + 0x34)), cVar2 == '\0')) {
    return 0;
  }
  return 1;
}



void FUN_007291e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c9ec3;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a800bc;
  local_4 = 1;
  FUN_007014a0();
  puVar1 = (undefined4 *)in_ECX[0xd];
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar3);
    }
    in_ECX[0xd] = 0;
  }
  iVar2 = DAT_00b3fe00;
  if (DAT_00b3fe00 == 0) {
    FUN_00401f20(in_ECX[7]);
    FUN_00401f20(in_ECX[8]);
    FUN_00401f20(in_ECX[9]);
    FUN_00401f20(in_ECX[10]);
  }
  else {
    if ((in_ECX[7] != 0) &&
       (*(int *)(DAT_00b3fe00 + 0xc) = *(int *)(DAT_00b3fe00 + 0xc) + -1, *(int *)(iVar2 + 0xc) == 0
       )) {
      FUN_00732a20();
      FUN_00401f20(iVar2);
    }
    iVar2 = DAT_00b3fe00;
    if ((in_ECX[8] != 0) &&
       (*(int *)(DAT_00b3fe00 + 0xc) = *(int *)(DAT_00b3fe00 + 0xc) + -1, *(int *)(iVar2 + 0xc) == 0
       )) {
      FUN_00732a20();
      FUN_00401f20(iVar2);
    }
    iVar2 = DAT_00b3fe00;
    if ((in_ECX[9] != 0) &&
       (*(int *)(DAT_00b3fe00 + 0xc) = *(int *)(DAT_00b3fe00 + 0xc) + -1, *(int *)(iVar2 + 0xc) == 0
       )) {
      FUN_00732a20();
      FUN_00401f20(iVar2);
    }
    iVar2 = DAT_00b3fe00;
    if ((in_ECX[10] != 0) &&
       (*(int *)(DAT_00b3fe00 + 0xc) = *(int *)(DAT_00b3fe00 + 0xc) + -1, *(int *)(iVar2 + 0xc) == 0
       )) {
      FUN_00732a20();
      FUN_00401f20(iVar2);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0xd];
  local_4 = local_4 & 0xffffff00;
  if (((puVar1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar1 + 1), LVar4 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00729370(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 < param_4) {
    do {
      iVar4 = param_3 + -1;
      uVar2 = FUN_00728a00(param_1,param_2,param_3,param_4);
      iVar6 = param_4 + 1;
      while( true ) {
        do {
          iVar5 = iVar6;
          iVar6 = iVar5 + -1;
          iVar3 = FUN_00728440(uVar2,*(undefined2 *)(param_1 + -2 + iVar5 * 2),param_2);
        } while (iVar3 < 0);
        do {
          iVar3 = iVar4 * 2;
          iVar4 = iVar4 + 1;
          iVar3 = FUN_00728440(*(undefined2 *)(param_1 + 2 + iVar3),uVar2,param_2);
        } while (iVar3 < 0);
        if (iVar6 <= iVar4) break;
        uVar1 = *(undefined2 *)(param_1 + iVar4 * 2);
        *(undefined2 *)(param_1 + iVar4 * 2) = *(undefined2 *)(param_1 + iVar6 * 2);
        *(undefined2 *)(param_1 + iVar6 * 2) = uVar1;
      }
      if (iVar6 == param_4) {
        param_4 = iVar5 + -2;
      }
      else {
        FUN_00729370(param_1,param_2,param_3,iVar6);
        param_3 = iVar5;
      }
    } while (param_3 < param_4);
  }
  return;
}



void FUN_00729450(int param_1)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  char cStack_1a;
  char cStack_19;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar3 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c33eb;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007008a0(param_1);
  if (0xa010071 < *(uint *)(iVar3 + 0xd8)) {
    local_18 = 4;
    (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
              (*(int *)(iVar3 + 0x21c),&local_14,4,&local_18,1,uVar4);
    DAT_00b3fe00 = FUN_00712550(local_14);
  }
  puVar1 = (ushort *)(in_ECX + 2);
  local_14 = 2;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),puVar1,2,&local_14,1);
  if (0xa00010f < *(uint *)(iVar3 + 0xd8)) {
    local_14 = 1;
    (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),in_ECX + 0xc,1,&local_14,1);
    local_14 = 1;
    (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
              (*(int *)(iVar3 + 0x21c),(int)in_ECX + 0x31,1,&local_14,1);
  }
  iVar5 = *(int *)(iVar3 + 0x21c);
  if (*(uint *)(iVar3 + 0xd8) < 0x4010000) {
    local_14 = 4;
    (**(code **)(iVar5 + 4))(iVar5,in_ECX + 7,4,&local_14,1);
    param_1 = CONCAT31(param_1._1_3_,in_ECX[7] != 0);
  }
  else {
    local_14 = 1;
    (**(code **)(iVar5 + 4))(iVar5,&param_1,1,&local_14,1);
  }
  if ((char)param_1 != '\0') {
    iVar5 = (**(code **)(*in_ECX + 0x44))();
    if (iVar5 == 0) {
      iVar5 = FUN_00401f00((uint)*puVar1 * 0xc);
      in_ECX[7] = iVar5;
    }
    else {
      uVar2 = *puVar1;
      iVar6 = (**(code **)(*in_ECX + 0x44))();
      iVar5 = *(int *)(iVar6 + 8);
      *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + 1;
      *(uint *)(iVar6 + 8) = iVar5 + (uint)uVar2 * 0xc;
      in_ECX[7] = iVar5;
    }
    local_14 = 4;
    (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
              (*(int *)(iVar3 + 0x21c),in_ECX[7],(uint)*(ushort *)(in_ECX + 2) * 0xc,&local_14,1);
  }
  uVar4 = (uint)*(ushort *)(in_ECX + 2);
  if (0xa000001 < *(uint *)(iVar3 + 0xd8)) {
    local_14 = 2;
    (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),in_ECX + 0xb,2,&local_14,1);
    if ((*(ushort *)(in_ECX + 0xb) & 0xf000) != 0) {
      uVar4 = uVar4 * 3;
    }
  }
  iVar5 = *(int *)(iVar3 + 0x21c);
  if (*(uint *)(iVar3 + 0xd8) < 0x4010000) {
    local_14 = 4;
    (**(code **)(iVar5 + 4))(iVar5,in_ECX + 8,4,&local_14,1);
    cStack_1a = in_ECX[8] != 0;
  }
  else {
    local_14 = 1;
    (**(code **)(iVar5 + 4))(iVar5,&cStack_1a,1,&local_14,1);
  }
  if (cStack_1a != '\0') {
    iVar5 = (**(code **)(*in_ECX + 0x44))();
    if (iVar5 == 0) {
      iVar5 = FUN_00401f00(uVar4 * 0xc);
      in_ECX[8] = iVar5;
    }
    else {
      iVar6 = (**(code **)(*in_ECX + 0x44))();
      iVar5 = *(int *)(iVar6 + 8);
      *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + 1;
      *(uint *)(iVar6 + 8) = iVar5 + uVar4 * 0xc;
      in_ECX[8] = iVar5;
    }
    local_14 = 4;
    (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
              (*(int *)(iVar3 + 0x21c),in_ECX[8],uVar4 * 0xc,&local_14,1);
  }
  FUN_00716ea0(iVar3);
  iVar5 = *(int *)(iVar3 + 0x21c);
  if (*(uint *)(iVar3 + 0xd8) < 0x4010000) {
    local_14 = 4;
    (**(code **)(iVar5 + 4))(iVar5,in_ECX + 9,4);
    cStack_19 = in_ECX[9] != 0;
  }
  else {
    local_14 = 1;
    (**(code **)(iVar5 + 4))(iVar5,&cStack_19,1,&local_14,1);
  }
  if (cStack_19 != '\0') {
    iVar5 = (**(code **)(*in_ECX + 0x44))();
    if (iVar5 == 0) {
      uVar2 = *(ushort *)(in_ECX + 2);
      puVar7 = (undefined1 *)FUN_00401f00((uint)uVar2 * 0x10);
      uStack_4 = 0;
      puStack_10 = puVar7;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = (undefined1 *)0x0;
      }
      else {
        _vector_constructor_iterator_(puVar7,0x10,(uint)uVar2,FUN_0047ea50);
      }
      uStack_4 = 0xffffffff;
      in_ECX[9] = (int)puVar7;
    }
    else {
      uVar2 = *(ushort *)(in_ECX + 2);
      iVar6 = (**(code **)(*in_ECX + 0x44))();
      iVar5 = *(int *)(iVar6 + 8);
      *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + 1;
      *(uint *)(iVar6 + 8) = iVar5 + (uint)uVar2 * 0x10;
      in_ECX[9] = iVar5;
    }
    local_14 = 4;
    (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
              (*(int *)(iVar3 + 0x21c),in_ECX[9],(uint)*(ushort *)(in_ECX + 2) << 4,&local_14,1);
  }
  if (*(uint *)(iVar3 + 0xd8) < 0x500000a) {
    local_14 = 2;
    (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),&local_18,2,&local_14,1);
    *(ushort *)(in_ECX + 0xb) =
         *(ushort *)(in_ECX + 0xb) ^ (*(byte *)(in_ECX + 0xb) ^ (byte)local_18) & 0x3f;
  }
  else if (*(uint *)(iVar3 + 0xd8) < 0xa000002) {
    local_14 = 2;
    (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),in_ECX + 0xb,2,&local_14,1);
  }
  if (*(uint *)(iVar3 + 0xd8) < 0x4010000) {
    local_14 = 4;
    (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),in_ECX + 10,4,&local_14,1);
  }
  if ((*(ushort *)(in_ECX + 0xb) & 0x3f) != 0) {
    iVar5 = (*(ushort *)(in_ECX + 0xb) & 0x3f) * (uint)*(ushort *)(in_ECX + 2);
    iVar6 = (**(code **)(*in_ECX + 0x44))();
    if (iVar6 == 0) {
      iVar6 = FUN_00401f00(iVar5 * 8);
      in_ECX[10] = iVar6;
    }
    else {
      iVar8 = (**(code **)(*in_ECX + 0x44))();
      iVar6 = *(int *)(iVar8 + 8);
      *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + 1;
      *(int *)(iVar8 + 8) = iVar6 + iVar5 * 8;
      in_ECX[10] = iVar6;
    }
    local_14 = 4;
    (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
              (*(int *)(iVar3 + 0x21c),in_ECX[10],iVar5 * 8,&local_14,1);
  }
  if (0x5000009 < *(uint *)(iVar3 + 0xd8)) {
    puStack_10 = &DAT_00000002;
    (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
              (*(int *)(iVar3 + 0x21c),(int)in_ECX + 0x2e,2,&puStack_10,1);
  }
  if (0xa030006 < *(uint *)(iVar3 + 0xd8)) {
    FUN_00712a20();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007299a0(int *param_1)

{
  ushort *puVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  char cStack_e;
  char cStack_d;
  undefined4 local_c;
  undefined4 local_8;
  uint uStack_4;
  
  piVar2 = param_1;
  FUN_0068f970(param_1);
  local_8 = FUN_00712560(DAT_00b3fe00);
  local_c = 4;
  (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],&local_8,4,&local_c,1);
  puVar1 = (ushort *)(in_ECX + 8);
  local_c = 2;
  (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],puVar1,2,&local_c,1);
  local_c = 1;
  (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],in_ECX + 0x30,1,&local_c,1);
  local_c = 1;
  (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],in_ECX + 0x31,1,&local_c,1);
  param_1 = (int *)CONCAT31(param_1._1_3_,*(int *)(in_ECX + 0x1c) != 0);
  local_c = 1;
  (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],&param_1,1,&local_c,1);
  if ((char)param_1 != '\0') {
    local_c = 4;
    (**(code **)(piVar2[0x88] + 8))
              (piVar2[0x88],*(undefined4 *)(in_ECX + 0x1c),(uint)*puVar1 * 0xc,&local_c,1);
  }
  local_c = 2;
  (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],in_ECX + 0x2c,2,&local_c,1);
  uVar4 = (uint)*puVar1;
  if ((*(ushort *)(in_ECX + 0x2c) & 0xf000) != 0) {
    uVar4 = uVar4 * 3;
  }
  cStack_e = *(int *)(in_ECX + 0x20) != 0;
  local_c = 1;
  (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],&cStack_e,1,&local_c,1);
  if (cStack_e != '\0') {
    local_c = 4;
    (**(code **)(piVar2[0x88] + 8))
              (piVar2[0x88],*(undefined4 *)(in_ECX + 0x20),uVar4 * 0xc,&local_c,1);
  }
  FUN_00716ee0(piVar2);
  cStack_d = *(int *)(in_ECX + 0x24) != 0;
  local_c = 1;
  (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],&cStack_d,1,&local_c,1);
  if (cStack_d != '\0') {
    local_c = 4;
    (**(code **)(piVar2[0x88] + 8))
              (piVar2[0x88],*(undefined4 *)(in_ECX + 0x24),(uint)*puVar1 << 4,&local_c,1);
  }
  iVar3 = (*(byte *)(in_ECX + 0x2c) & 0x3f) * (uint)*puVar1;
  if (iVar3 != 0) {
    local_c = 4;
    (**(code **)(piVar2[0x88] + 8))
              (piVar2[0x88],*(undefined4 *)(in_ECX + 0x28),iVar3 * 8,&local_c,1);
  }
  uStack_4 = (uint)(*(ushort *)(in_ECX + 0x2e) & 0xf000);
  local_c = 2;
  (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],&uStack_4,2,&local_c,1);
  (**(code **)(*piVar2 + 0x2c))(*(undefined4 *)(in_ECX + 0x34));
  return;
}



void FUN_00729c30(byte param_1)

{
  FUN_007291e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00729c50(int *param_1,int *param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  
  uVar1 = *(ushort *)(in_ECX + 8);
  uVar4 = (uint)uVar1;
  iVar3 = FUN_00401f00(uVar4 * 2);
  *param_1 = iVar3;
  iVar3 = FUN_00401f00(uVar4 * 2);
  *param_2 = iVar3;
  uVar2 = 0;
  if (uVar1 != 0) {
    iVar3 = 0;
    do {
      *(ushort *)(iVar3 + *param_1) = uVar2;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 2;
    } while (uVar2 < uVar1);
  }
  FUN_00729370(*param_1,param_3,0,uVar4 - 1);
  uVar2 = 0;
  if (uVar1 != 0) {
    iVar3 = 0;
    do {
      *(ushort *)(*param_2 + (uint)*(ushort *)(*param_1 + iVar3) * 2) = uVar2;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 2;
    } while (uVar2 < uVar1);
  }
  return;
}



void FUN_00729d00(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007009a0(param_1);
  param_1 = FUN_0070f910(DAT_00b3fe04);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070faa0("m_usVertices",*(undefined2 *)(in_ECX + 8));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fbe0("m_pkVertex",*(undefined4 *)(in_ECX + 0x1c));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fbe0("m_pkNormal",*(undefined4 *)(in_ECX + 0x20));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070faf0("NormalBinormalTangent",*(ushort *)(in_ECX + 0x2c) & 0xf000);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0072a040("m_kBound");
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fbe0("m_pkColor",*(undefined4 *)(in_ECX + 0x24));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070faa0("Num Texture Sets",*(byte *)(in_ECX + 0x2c) & 0x3f);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fbe0("m_pkTexture",*(undefined4 *)(in_ECX + 0x28));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070faa0("m_usDirtyFlags",*(undefined2 *)(in_ECX + 0x2e));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fa00("m_ucKeepFlags",*(undefined1 *)(in_ECX + 0x30));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fa00("m_ucCompressFlags",*(undefined1 *)(in_ECX + 0x31));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  if (*(int **)(in_ECX + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x30))(iVar1);
    return;
  }
  param_1 = FUN_0070faf0("m_spAdditionalGeomData",0);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined4 FUN_0072a040(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  float *in_ECX;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_00401f00();
  FUN_006c5d40(uVar3,pcVar2 + (0x41 - (int)(param_1 + 1)),"%s = (%g, %g, %g) , %g",param_1,
               (double)*in_ECX,(double)in_ECX[1],(double)in_ECX[2],(double)in_ECX[3]);
  return uVar3;
}



undefined4 FUN_0072a0a0(float *param_1)

{
  float *in_ECX;
  
  if ((((param_1[3] == in_ECX[3]) && (*param_1 == *in_ECX)) && (param_1[1] == in_ECX[1])) &&
     (param_1[2] == in_ECX[2])) {
    return 1;
  }
  return 0;
}



void FUN_0072a0f0(float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_ECX;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  iVar7 = (int)param_1;
  if (0 < (int)param_1) {
    local_24 = *param_2;
    local_20 = param_2[1];
    local_1c = param_2[2];
    iVar8 = 1;
    local_18 = local_24;
    local_14 = local_20;
    local_10 = local_1c;
    if (3 < (int)param_1 + -1) {
      iVar6 = ((int)param_1 - 5U >> 2) + 1;
      pfVar5 = param_2 + 5;
      iVar8 = iVar6 * 4 + 1;
      do {
        if (pfVar5[-2] < local_18) {
          local_18 = pfVar5[-2];
        }
        if (pfVar5[-1] < local_14) {
          local_14 = pfVar5[-1];
        }
        if (*pfVar5 < local_10) {
          local_10 = *pfVar5;
        }
        if (local_24 < pfVar5[-2]) {
          local_24 = pfVar5[-2];
        }
        if (local_20 < pfVar5[-1]) {
          local_20 = pfVar5[-1];
        }
        if (local_1c < *pfVar5) {
          local_1c = *pfVar5;
        }
        if (pfVar5[1] < local_18) {
          local_18 = pfVar5[1];
        }
        if (pfVar5[2] < local_14) {
          local_14 = pfVar5[2];
        }
        if (pfVar5[3] < local_10) {
          local_10 = pfVar5[3];
        }
        if (local_24 < pfVar5[1]) {
          local_24 = pfVar5[1];
        }
        if (local_20 < pfVar5[2]) {
          local_20 = pfVar5[2];
        }
        if (local_1c < pfVar5[3]) {
          local_1c = pfVar5[3];
        }
        if (pfVar5[4] < local_18) {
          local_18 = pfVar5[4];
        }
        if (pfVar5[5] < local_14) {
          local_14 = pfVar5[5];
        }
        if (pfVar5[6] < local_10) {
          local_10 = pfVar5[6];
        }
        if (local_24 < pfVar5[4]) {
          local_24 = pfVar5[4];
        }
        if (local_20 < pfVar5[5]) {
          local_20 = pfVar5[5];
        }
        if (local_1c < pfVar5[6]) {
          local_1c = pfVar5[6];
        }
        if (pfVar5[7] < local_18) {
          local_18 = pfVar5[7];
        }
        if (pfVar5[8] < local_14) {
          local_14 = pfVar5[8];
        }
        if (pfVar5[9] < local_10) {
          local_10 = pfVar5[9];
        }
        if (local_24 < pfVar5[7]) {
          local_24 = pfVar5[7];
        }
        if (local_20 < pfVar5[8]) {
          local_20 = pfVar5[8];
        }
        if (local_1c < pfVar5[9]) {
          local_1c = pfVar5[9];
        }
        pfVar5 = pfVar5 + 0xc;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (iVar8 < (int)param_1) {
      pfVar5 = param_2 + iVar8 * 3 + 2;
      iVar8 = (int)param_1 - iVar8;
      do {
        if (pfVar5[-2] < local_18) {
          local_18 = pfVar5[-2];
        }
        if (pfVar5[-1] < local_14) {
          local_14 = pfVar5[-1];
        }
        if (*pfVar5 < local_10) {
          local_10 = *pfVar5;
        }
        if (local_24 < pfVar5[-2]) {
          local_24 = pfVar5[-2];
        }
        if (local_20 < pfVar5[-1]) {
          local_20 = pfVar5[-1];
        }
        if (local_1c < *pfVar5) {
          local_1c = *pfVar5;
        }
        pfVar5 = pfVar5 + 3;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = 0;
    *in_ECX = (local_24 + local_18) * 0.5;
    in_ECX[1] = (local_20 + local_14) * 0.5;
    in_ECX[2] = (local_1c + local_10) * 0.5;
    param_1 = 0.0;
    if (3 < iVar7) {
      fVar1 = *in_ECX;
      fVar2 = in_ECX[1];
      fVar3 = in_ECX[2];
      iVar6 = (iVar7 - 4U >> 2) + 1;
      pfVar5 = param_2 + 5;
      iVar8 = iVar6 * 4;
      do {
        fVar4 = (pfVar5[-3] - fVar3) * (pfVar5[-3] - fVar3) +
                (pfVar5[-5] - fVar1) * (pfVar5[-5] - fVar1) +
                (pfVar5[-4] - fVar2) * (pfVar5[-4] - fVar2);
        if (param_1 < fVar4) {
          param_1 = fVar4;
        }
        fVar4 = (*pfVar5 - fVar3) * (*pfVar5 - fVar3) +
                (pfVar5[-2] - fVar1) * (pfVar5[-2] - fVar1) +
                (pfVar5[-1] - fVar2) * (pfVar5[-1] - fVar2);
        if (param_1 < fVar4) {
          param_1 = fVar4;
        }
        fVar4 = (pfVar5[3] - fVar3) * (pfVar5[3] - fVar3) +
                (pfVar5[1] - fVar1) * (pfVar5[1] - fVar1) +
                (pfVar5[2] - fVar2) * (pfVar5[2] - fVar2);
        if (param_1 < fVar4) {
          param_1 = fVar4;
        }
        fVar4 = (pfVar5[6] - fVar3) * (pfVar5[6] - fVar3) +
                (pfVar5[4] - fVar1) * (pfVar5[4] - fVar1) +
                (pfVar5[5] - fVar2) * (pfVar5[5] - fVar2);
        if (param_1 < fVar4) {
          param_1 = fVar4;
        }
        pfVar5 = pfVar5 + 0xc;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (iVar8 < iVar7) {
      iVar7 = iVar7 - iVar8;
      param_2 = param_2 + iVar8 * 3 + 2;
      do {
        fVar1 = (*param_2 - in_ECX[2]) * (*param_2 - in_ECX[2]) +
                (param_2[-2] - *in_ECX) * (param_2[-2] - *in_ECX) +
                (param_2[-1] - in_ECX[1]) * (param_2[-1] - in_ECX[1]);
        if (param_1 < fVar1) {
          param_1 = fVar1;
        }
        param_2 = param_2 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    fVar9 = (float10)FUN_00982c30();
    in_ECX[3] = (float)fVar9;
    return;
  }
  *in_ECX = DAT_00b3f9a8;
  in_ECX[1] = DAT_00b3f9ac;
  fVar1 = DAT_00b3f9b0;
  in_ECX[3] = 0.0;
  in_ECX[2] = fVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0072a6b0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *in_ECX;
  float10 fVar8;
  
  fVar3 = *in_ECX - *param_1;
  fVar4 = in_ECX[1] - param_1[1];
  fVar5 = in_ECX[2] - param_1[2];
  fVar6 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
  fVar1 = param_1[3] - in_ECX[3];
  fVar2 = fVar1 * fVar1;
  if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
    if (fVar6 <= fVar2) {
      return;
    }
    fVar8 = (float10)FUN_00982c30();
  }
  else {
    if (fVar6 < fVar2 != (fVar6 == fVar2)) {
      *in_ECX = *param_1;
      in_ECX[1] = param_1[1];
      in_ECX[2] = param_1[2];
      in_ECX[3] = param_1[3];
      return;
    }
    fVar8 = (float10)FUN_00982c30();
  }
  fVar6 = (float)fVar8;
  if (_DAT_00b27520 < fVar6) {
    fVar7 = (fVar6 - fVar1) / (fVar6 + fVar6);
    fVar1 = param_1[1];
    fVar2 = param_1[2];
    *in_ECX = *param_1 + fVar7 * fVar3;
    in_ECX[1] = fVar4 * fVar7 + fVar1;
    in_ECX[2] = fVar2 + fVar7 * fVar5;
  }
  in_ECX[3] = (fVar6 + param_1[3] + in_ECX[3]) * 0.5;
  return;
}



void FUN_0072a820(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *in_ECX;
  undefined1 local_c [12];
  
  pfVar6 = (float *)FUN_007101f0(local_c,param_1);
  fVar1 = *(float *)(param_2 + 0x30);
  fVar2 = pfVar6[1];
  fVar3 = pfVar6[2];
  fVar4 = *(float *)(param_2 + 0x28);
  fVar5 = *(float *)(param_2 + 0x2c);
  *in_ECX = *(float *)(param_2 + 0x24) + fVar1 * *pfVar6;
  in_ECX[1] = fVar4 + fVar2 * fVar1;
  in_ECX[2] = fVar5 + fVar1 * fVar3;
  in_ECX[3] = *(float *)(param_1 + 0xc) * *(float *)(param_2 + 0x30);
  return;
}



void FUN_0072a8b0(void)

{
  undefined4 *in_ECX;
  
  FUN_006ffd30();
  *in_ECX = &PTR_FUN_00a7d874;
  in_ECX[6] = 6;
  in_ECX[7] = 3;
  in_ECX[8] = 2;
  in_ECX[9] = 0;
  FUN_00701b00();
  *in_ECX = &PTR_FUN_00a80204;
  in_ECX[0xc] = 0;
  return;
}



void FUN_0072a910(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca578;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x30);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00701c60(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_0072a9b0(uint param_1,uint param_2,int *param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBX;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca5ab;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = (undefined4 *)0x0;
  if (param_3 != (int *)0x0) {
    if ((((param_1 == 0) || ((param_1 & param_1 - 1) != 0)) || (param_2 == 0)) ||
       ((param_2 & param_2 - 1) != 0)) {
      uVar2 = (**(code **)(*param_3 + 0x54))(uVar2);
      if ((uVar2 & 8) == 0) {
        uVar2 = (**(code **)(*param_3 + 0x54))();
        if ((uVar2 & 4) == 0) goto LAB_0072aaaf;
      }
    }
    iVar3 = FUN_00401f00(0x40);
    uStack_4 = 0;
    if (iVar3 != 0) {
      puVar5 = (undefined4 *)FUN_0072a8b0();
    }
    puVar5[6] = *param_4;
    puVar5[7] = param_4[1];
    uStack_4 = 0xffffffff;
    puVar5[8] = param_4[2];
    uVar4 = FUN_00732050(param_1,param_2);
    FUN_0075fa90(uVar4);
    *(undefined1 *)(puVar5 + 0xd) = DAT_00b3ff00;
    puVar5[0xe] = DAT_00b2752c;
    *(undefined1 *)(puVar5 + 0xf) = DAT_00b27530;
    cVar1 = (**(code **)(*param_3 + 0x108))(puVar5);
    if (cVar1 != '\0') {
      *unaff_FS_OFFSET = unaff_EBX;
      return puVar5;
    }
    (**(code **)*puVar5)(1);
  }
LAB_0072aaaf:
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_0072aae0(byte param_1)

{
  FUN_0072a910();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0072ab00(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,ushort param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined4 *in_ECX;
  
  FUN_0071fb40(param_10,param_2,param_3,param_4,param_5,param_6,param_7,param_11,param_9);
  *(ushort *)(in_ECX + 0x10) = param_8;
  *(short *)((int)in_ECX + 0x5a) = (short)param_11;
  *(short *)(in_ECX + 0x16) = (short)param_10;
  *in_ECX = &PTR_FUN_00a80274;
  *(undefined2 *)(in_ECX + 2) = param_1;
  in_ECX[0x11] = (uint)param_8 * 3;
  return;
}



undefined4 * FUN_0072abf0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x5c,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0071fbb0();
    *puVar2 = &PTR_FUN_00a80274;
    *(undefined2 *)(puVar2 + 0x16) = 0;
    *(undefined2 *)((int)puVar2 + 0x5a) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_0072ae50(void)

{
  return;
}



void FUN_0072ae60(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ca5ee;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a684cc;
  local_4 = 2;
  FUN_00401f20(in_ECX[5],uVar2);
  FUN_00701520();
  puVar1 = (undefined4 *)in_ECX[3];
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
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0072af20(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
                 undefined4 *param_6,undefined4 *param_7,int param_8)

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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ushort uVar21;
  uint uVar22;
  size_t _Size;
  undefined4 *puVar23;
  int iVar24;
  float *pfVar25;
  uint uVar26;
  int in_ECX;
  int iVar27;
  undefined4 *puVar28;
  int *piVar29;
  int iVar30;
  int iVar31;
  float *pfVar32;
  undefined4 *puVar33;
  uint uVar34;
  undefined4 *puVar35;
  undefined1 *puVar36;
  int *piVar37;
  int local_1b4;
  uint local_1b0;
  float local_160 [4];
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined4 local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float *local_108;
  float local_104;
  float local_100;
  float local_fc;
  int local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0 [13];
  undefined1 local_9c [52];
  undefined1 local_68 [52];
  undefined1 local_34 [52];
  
  FUN_00718a80(local_9c);
  puVar23 = (undefined4 *)FUN_0053d7a0(local_160,local_9c);
  iVar31 = *(int *)(in_ECX + 8);
  puVar28 = local_d0;
  for (iVar27 = 0xd; iVar27 != 0; iVar27 = iVar27 + -1) {
    *puVar28 = *puVar23;
    puVar23 = puVar23 + 1;
    puVar28 = puVar28 + 1;
  }
  iVar27 = *(int *)(iVar31 + 0x44);
  uVar22 = *(uint *)(iVar31 + 0x40);
  if ((param_2 != 0) && (param_5 != (undefined4 *)0x0)) {
    if ((param_6 != (undefined4 *)0x0) && (param_7 != (undefined4 *)0x0)) {
      _Size = param_3 * 0xc;
      iVar31 = _Size + param_2;
      iVar24 = iVar31 + _Size;
      if (param_8 == 0xc) {
        _memset(param_4,0,_Size);
        _memset(param_5,0,_Size);
        _memset(param_6,0,_Size);
        _memset(param_7,0,_Size);
      }
      else if (param_3 != 0) {
        local_1b4 = param_3;
        puVar23 = param_4;
        puVar28 = param_5;
        puVar33 = param_6;
        puVar35 = param_7;
        do {
          *puVar23 = DAT_00b3f9a8;
          puVar23[1] = DAT_00b3f9ac;
          puVar23[2] = DAT_00b3f9b0;
          *puVar28 = DAT_00b3f9a8;
          puVar28[1] = DAT_00b3f9ac;
          puVar23 = (undefined4 *)((int)puVar23 + param_8);
          puVar28[2] = DAT_00b3f9b0;
          puVar28 = (undefined4 *)((int)puVar28 + param_8);
          *puVar33 = DAT_00b3f9a8;
          puVar33[1] = DAT_00b3f9ac;
          puVar33[2] = DAT_00b3f9b0;
          puVar33 = (undefined4 *)((int)puVar33 + param_8);
          *puVar35 = DAT_00b3f9a8;
          puVar35[1] = DAT_00b3f9ac;
          puVar35[2] = DAT_00b3f9b0;
          puVar35 = (undefined4 *)((int)puVar35 + param_8);
          local_1b4 = local_1b4 + -1;
        } while (local_1b4 != 0);
      }
      local_1b0 = 0;
      if (uVar22 != 0) {
        piVar29 = (int *)(iVar27 + 0x44);
        do {
          uVar21 = *(ushort *)(piVar29 + 1);
          piVar37 = piVar29 + -0x11;
          puVar36 = local_68;
          FUN_0053d7a0(local_34,*(int *)(*(int *)(in_ECX + 0x14) + local_1b0 * 4) + 100);
          pfVar25 = (float *)FUN_0053d7a0(puVar36,piVar37);
          pfVar32 = local_160;
          for (iVar27 = 0xd; iVar27 != 0; iVar27 = iVar27 + -1) {
            *pfVar32 = *pfVar25;
            pfVar25 = pfVar25 + 1;
            pfVar32 = pfVar32 + 1;
          }
          iVar27 = *piVar29;
          local_f8 = iVar27;
          FUN_00710190(&local_12c,local_130);
          uVar34 = 0;
          if (uVar21 != 0) {
            do {
              fVar2 = *(float *)(iVar27 + 4 + uVar34 * 8);
              uVar26 = (uint)*(ushort *)(iVar27 + uVar34 * 8);
              iVar30 = uVar26 * param_8;
              iVar27 = uVar26 * 0xc;
              pfVar25 = (float *)(iVar27 + 8 + param_1);
              local_f4 = local_124 * *pfVar25 +
                         local_12c * *(float *)(iVar27 + param_1) +
                         local_128 * *(float *)(iVar27 + 4 + param_1) + local_13c;
              local_f0 = local_118 * *pfVar25 +
                         local_120 * *(float *)(iVar27 + param_1) +
                         local_11c * *(float *)(iVar27 + 4 + param_1) + local_138;
              pfVar32 = (float *)(iVar31 + 8 + iVar27);
              local_ec = local_10c * *pfVar25 +
                         local_114 * *(float *)(iVar27 + param_1) +
                         local_110 * *(float *)(iVar27 + 4 + param_1) + local_134;
              local_dc = local_160[2] * *(float *)(iVar27 + 8 + param_2) +
                         local_160[1] * *(float *)(iVar27 + 4 + param_2) +
                         local_160[0] * *(float *)(iVar27 + param_2);
              local_d8 = local_14c * *(float *)(iVar27 + 8 + param_2) +
                         local_150 * *(float *)(iVar27 + 4 + param_2) +
                         local_160[3] * *(float *)(iVar27 + param_2);
              local_d4 = local_140 * *(float *)(iVar27 + 8 + param_2) +
                         local_144 * *(float *)(iVar27 + 4 + param_2) +
                         local_148 * *(float *)(iVar27 + param_2);
              fVar3 = *(float *)(iVar31 + 4 + iVar27);
              fVar4 = *(float *)(iVar31 + iVar27);
              fVar5 = *pfVar32;
              fVar6 = *(float *)(iVar31 + 4 + iVar27);
              fVar7 = *(float *)(iVar31 + iVar27);
              fVar8 = *pfVar32;
              fVar9 = *(float *)(iVar31 + 4 + iVar27);
              fVar10 = *(float *)(iVar31 + iVar27);
              fVar11 = *pfVar32;
              pfVar25 = (float *)(iVar24 + 4 + iVar27);
              local_108 = (float *)(iVar24 + 8 + iVar27);
              fVar12 = *(float *)(iVar24 + iVar27);
              fVar13 = *pfVar25;
              fVar14 = *local_108;
              fVar15 = *(float *)(iVar24 + iVar27);
              fVar16 = *pfVar25;
              fVar17 = *local_108;
              fVar18 = *(float *)(iVar24 + iVar27);
              fVar19 = *pfVar25;
              fVar20 = *local_108;
              local_104 = fVar2 * local_f4;
              local_100 = local_f0 * fVar2;
              local_fc = local_ec * fVar2;
              *(float *)(iVar30 + (int)param_4) = local_104 + *(float *)(iVar30 + (int)param_4);
              uVar34 = uVar34 + 1;
              *(float *)(iVar30 + 4 + (int)param_4) =
                   local_100 + *(float *)(iVar30 + 4 + (int)param_4);
              pfVar25 = (float *)(iVar30 + 8 + (int)param_4);
              *pfVar25 = *pfVar25 + local_fc;
              local_e8 = local_dc * fVar2;
              local_e4 = local_d8 * fVar2;
              local_e0 = local_d4 * fVar2;
              *(float *)(iVar30 + (int)param_5) = local_e8 + *(float *)(iVar30 + (int)param_5);
              *(float *)(iVar30 + 4 + (int)param_5) =
                   local_e4 + *(float *)(iVar30 + 4 + (int)param_5);
              *(float *)(iVar30 + 8 + (int)param_5) =
                   local_e0 + *(float *)(iVar30 + 8 + (int)param_5);
              *(float *)(iVar30 + (int)param_6) =
                   *(float *)(iVar30 + (int)param_6) +
                   (local_160[2] * fVar5 + local_160[0] * fVar4 + local_160[1] * fVar3) * fVar2;
              *(float *)(iVar30 + 4 + (int)param_6) =
                   (local_14c * fVar8 + local_160[3] * fVar7 + local_150 * fVar6) * fVar2 +
                   *(float *)(iVar30 + 4 + (int)param_6);
              pfVar25 = (float *)(iVar30 + 8 + (int)param_6);
              *pfVar25 = (local_140 * fVar11 + local_148 * fVar10 + local_144 * fVar9) * fVar2 +
                         *pfVar25;
              *(float *)(iVar30 + (int)param_7) =
                   *(float *)(iVar30 + (int)param_7) +
                   (fVar12 * local_160[0] + fVar13 * local_160[1] + fVar14 * local_160[2]) * fVar2;
              *(float *)(iVar30 + 4 + (int)param_7) =
                   (local_14c * fVar17 + local_160[3] * fVar15 + fVar16 * local_150) * fVar2 +
                   *(float *)(iVar30 + 4 + (int)param_7);
              pfVar25 = (float *)(iVar30 + 8 + (int)param_7);
              *pfVar25 = fVar2 * (local_140 * fVar20 + local_144 * fVar19 + local_148 * fVar18) +
                         *pfVar25;
              iVar27 = local_f8;
            } while (uVar34 < uVar21);
          }
          piVar29 = piVar29 + 0x13;
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < uVar22);
      }
      FUN_00725890(param_5,param_3,param_8);
      FUN_00725890(param_6,param_3,param_8);
      FUN_00725890(param_7,param_3,param_8);
      return;
    }
    iVar31 = param_3;
    puVar23 = param_4;
    puVar28 = param_5;
    if (param_8 == 0xc) {
      _memset(param_4,0,param_3 * 0xc);
      _memset(param_5,0,param_3 * 0xc);
    }
    else {
      for (; iVar31 != 0; iVar31 = iVar31 + -1) {
        *puVar23 = DAT_00b3f9a8;
        puVar23[1] = DAT_00b3f9ac;
        puVar23[2] = DAT_00b3f9b0;
        *puVar28 = DAT_00b3f9a8;
        puVar28[1] = DAT_00b3f9ac;
        puVar28[2] = DAT_00b3f9b0;
        puVar23 = (undefined4 *)((int)puVar23 + param_8);
        puVar28 = (undefined4 *)((int)puVar28 + param_8);
      }
    }
    local_1b0 = 0;
    if (uVar22 != 0) {
      piVar29 = (int *)(iVar27 + 0x44);
      do {
        uVar21 = *(ushort *)(piVar29 + 1);
        piVar37 = piVar29 + -0x11;
        puVar36 = local_34;
        FUN_0053d7a0(local_68,*(int *)(*(int *)(in_ECX + 0x14) + local_1b0 * 4) + 100);
        pfVar25 = (float *)FUN_0053d7a0(puVar36,piVar37);
        pfVar32 = local_160;
        for (iVar31 = 0xd; iVar31 != 0; iVar31 = iVar31 + -1) {
          *pfVar32 = *pfVar25;
          pfVar25 = pfVar25 + 1;
          pfVar32 = pfVar32 + 1;
        }
        iVar31 = *piVar29;
        FUN_00710190(&local_12c,local_130);
        uVar34 = 0;
        if (uVar21 != 0) {
          do {
            fVar2 = *(float *)(iVar31 + 4 + uVar34 * 8);
            uVar26 = (uint)*(ushort *)(iVar31 + uVar34 * 8);
            iVar24 = uVar26 * param_8;
            iVar27 = uVar26 * 0xc;
            pfVar25 = (float *)(iVar27 + 8 + param_1);
            fVar3 = *(float *)(iVar27 + 4 + param_1);
            fVar4 = *(float *)(iVar27 + param_1);
            fVar5 = *pfVar25;
            fVar6 = *(float *)(iVar27 + 4 + param_1);
            fVar7 = *(float *)(iVar27 + param_1);
            pfVar32 = (float *)(iVar27 + 4 + param_2);
            fVar8 = *pfVar25;
            pfVar1 = (float *)(iVar27 + 8 + param_2);
            fVar9 = *(float *)(iVar27 + param_2);
            fVar10 = *pfVar32;
            fVar11 = *pfVar1;
            fVar12 = *(float *)(iVar27 + param_2);
            fVar13 = *pfVar32;
            fVar14 = *pfVar1;
            fVar15 = *(float *)(iVar27 + param_2);
            fVar16 = *pfVar32;
            fVar17 = *pfVar1;
            uVar34 = uVar34 + 1;
            *(float *)(iVar24 + (int)param_4) =
                 fVar2 * (local_124 * *pfVar25 +
                          local_12c * *(float *)(iVar27 + param_1) +
                          local_128 * *(float *)(iVar27 + 4 + param_1) + local_13c) +
                 *(float *)(iVar24 + (int)param_4);
            *(float *)(iVar24 + 4 + (int)param_4) =
                 (local_118 * fVar5 + local_120 * fVar4 + local_11c * fVar3 + local_138) * fVar2 +
                 *(float *)(iVar24 + 4 + (int)param_4);
            pfVar25 = (float *)(iVar24 + 8 + (int)param_4);
            *pfVar25 = (local_10c * fVar8 + local_114 * fVar7 + local_110 * fVar6 + local_134) *
                       fVar2 + *pfVar25;
            *(float *)(iVar24 + (int)param_5) =
                 (local_160[2] * fVar11 + local_160[1] * fVar10 + local_160[0] * fVar9) * fVar2 +
                 *(float *)(iVar24 + (int)param_5);
            *(float *)(iVar24 + 4 + (int)param_5) =
                 *(float *)(iVar24 + 4 + (int)param_5) +
                 (local_14c * fVar14 + local_150 * fVar13 + local_160[3] * fVar12) * fVar2;
            pfVar25 = (float *)(iVar24 + 8 + (int)param_5);
            *pfVar25 = fVar2 * (local_140 * fVar17 + local_144 * fVar16 + local_148 * fVar15) +
                       *pfVar25;
          } while (uVar34 < uVar21);
        }
        piVar29 = piVar29 + 0x13;
        local_1b0 = local_1b0 + 1;
      } while (local_1b0 < uVar22);
    }
    FUN_00725890(param_5,param_3,param_8);
    return;
  }
  puVar23 = param_4;
  if (param_8 == 0xc) {
    _memset(param_4,0,param_3 * 0xc);
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *puVar23 = DAT_00b3f9a8;
      puVar23[1] = DAT_00b3f9ac;
      puVar23[2] = DAT_00b3f9b0;
      puVar23 = (undefined4 *)((int)puVar23 + param_8);
    }
  }
  local_1b0 = 0;
  if (uVar22 != 0) {
    piVar29 = (int *)(iVar27 + 0x44);
    do {
      uVar21 = *(ushort *)(piVar29 + 1);
      piVar37 = piVar29 + -0x11;
      puVar36 = local_34;
      FUN_0053d7a0(local_68,*(int *)(*(int *)(in_ECX + 0x14) + local_1b0 * 4) + 100);
      pfVar25 = (float *)FUN_0053d7a0(puVar36,piVar37);
      pfVar32 = local_160;
      for (iVar31 = 0xd; iVar31 != 0; iVar31 = iVar31 + -1) {
        *pfVar32 = *pfVar25;
        pfVar25 = pfVar25 + 1;
        pfVar32 = pfVar32 + 1;
      }
      FUN_00710190(&local_12c,local_130);
      iVar31 = *piVar29;
      uVar34 = 0;
      if (uVar21 != 0) {
        do {
          fVar2 = *(float *)(iVar31 + 4 + uVar34 * 8);
          uVar26 = (uint)*(ushort *)(iVar31 + uVar34 * 8);
          pfVar32 = (float *)(uVar26 * param_8 + (int)param_4);
          pfVar25 = (float *)(param_1 + uVar26 * 0xc);
          fVar3 = pfVar25[1];
          fVar4 = *pfVar25;
          fVar5 = pfVar25[2];
          fVar6 = pfVar25[1];
          fVar7 = *pfVar25;
          fVar8 = pfVar25[2];
          *pfVar32 = (local_124 * pfVar25[2] + local_12c * *pfVar25 + local_128 * pfVar25[1] +
                     local_13c) * fVar2 + *pfVar32;
          pfVar32[1] = (local_118 * fVar5 + local_120 * fVar4 + local_11c * fVar3 + local_138) *
                       fVar2 + pfVar32[1];
          pfVar32[2] = (local_10c * fVar8 + local_114 * fVar7 + local_110 * fVar6 + local_134) *
                       fVar2 + pfVar32[2];
          uVar34 = uVar34 + 1;
        } while (uVar34 < uVar21);
      }
      local_1b0 = local_1b0 + 1;
      piVar29 = piVar29 + 0x13;
    } while (local_1b0 < uVar22);
  }
  return;
}



void FUN_0072baa0(int param_1)

{
  FUN_007008a0(param_1);
  FUN_00712a20();
  if (0xa010064 < *(uint *)(param_1 + 0xd8)) {
    FUN_00712a20();
  }
  FUN_00712a20();
  FUN_00712ae0();
  return;
}



int FUN_0072bae0(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    return 1;
  }
  if (param_2 == (undefined4 *)0x0) {
    return -1;
  }
  pbVar3 = (byte *)*param_2;
  pbVar2 = (byte *)*param_1;
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar4) - (uint)(bVar4 != 0);
}



void FUN_0072bb30(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 local_bc [16];
  undefined1 local_ac [16];
  undefined1 local_9c [52];
  undefined4 local_68 [13];
  undefined1 local_34 [52];
  
  iVar3 = *(int *)(*(int *)(in_ECX + 8) + 0x44);
  FUN_0072a820(iVar3 + 0x34,**(int **)(in_ECX + 0x14) + 100);
  uVar1 = *(uint *)(*(int *)(in_ECX + 8) + 0x40);
  uVar4 = 1;
  if (1 < uVar1) {
    iVar3 = iVar3 + 0x80;
    do {
      FUN_0072a820(iVar3,*(int *)(*(int *)(in_ECX + 0x14) + uVar4 * 4) + 100);
      FUN_0072a6b0(local_ac);
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x4c;
    } while (uVar4 < uVar1);
  }
  FUN_00718a80(local_9c);
  puVar2 = (undefined4 *)FUN_0053d7a0(local_34,local_9c);
  puVar5 = local_68;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_0072a820(local_bc,local_68);
  return;
}



void FUN_0072bc00(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int in_ECX;
  
  FUN_00700770(param_1,param_2);
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != *(undefined4 **)(in_ECX + 8)) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *(int *)(in_ECX + 8);
    *(int *)(param_1 + 8) = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  if (puVar1 != *(undefined4 **)(in_ECX + 0xc)) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *(int *)(in_ECX + 0xc);
    *(int *)(param_1 + 0xc) = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  return;
}



undefined4 FUN_0072bca0(void)

{
  uint uVar1;
  char cVar2;
  int in_ECX;
  uint uVar3;
  
  cVar2 = FUN_0055e000(*(undefined4 *)(in_ECX + 0x10),&stack0x00000004);
  if (cVar2 != '\0') {
    return 1;
  }
  uVar1 = *(uint *)(*(int *)(in_ECX + 8) + 0x40);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      cVar2 = FUN_0055e000(*(undefined4 *)(*(int *)(in_ECX + 0x14) + uVar3 * 4),&stack0x00000004);
      if (cVar2 != '\0') {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}



undefined4 * FUN_0072bd10(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x2c,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a684cc;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0xffffffff;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined1 FUN_0072bed0(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  int in_ECX;
  uint uVar3;
  
  cVar2 = FUN_00700650(param_1);
  if (cVar2 != '\0') {
    (**(code **)(**(int **)(in_ECX + 8) + 0x24))(param_1);
    if (*(int **)(in_ECX + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0xc) + 0x24))(param_1);
    }
    (**(code **)(**(int **)(in_ECX + 0x10) + 0x24))(param_1);
    uVar1 = *(uint *)(*(int *)(in_ECX + 8) + 0x40);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        (**(code **)(**(int **)(*(int *)(in_ECX + 0x14) + uVar3 * 4) + 0x24))(param_1);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    return 1;
  }
  return 0;
}



void FUN_0072bfa0(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar2 = FUN_0072bca0(param_1);
  if (cVar2 != '\0') {
    puVar4 = (undefined4 *)FUN_00401f00(0x2c,uVar3);
    uVar3 = 0;
    local_4 = 0;
    local_10 = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_007005d0();
      *puVar4 = &PTR_FUN_00a684cc;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0xffffffff;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
    }
    local_4 = 0xffffffff;
    FUN_0072bc00(puVar4,param_1);
    cVar2 = FUN_0055e000(*(undefined4 *)(in_ECX + 0x10),&local_10);
    puVar6 = local_10;
    if (cVar2 == '\0') {
      puVar6 = *(undefined4 **)(in_ECX + 0x10);
    }
    puVar4[4] = puVar6;
    uVar1 = *(uint *)(*(int *)(in_ECX + 8) + 0x40);
    uVar5 = FUN_00401f00(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar1 * 4));
    puVar4[5] = uVar5;
    if (uVar1 != 0) {
      do {
        cVar2 = FUN_0055e000(*(undefined4 *)(*(int *)(in_ECX + 0x14) + uVar3 * 4),&local_10);
        puVar6 = local_10;
        if (cVar2 == '\0') {
          puVar6 = *(undefined4 **)(*(int *)(in_ECX + 0x14) + uVar3 * 4);
        }
        *(undefined4 **)(puVar4[5] + uVar3 * 4) = puVar6;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0072c160(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  void *_Base;
  char *pcVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *local_18;
  int local_14;
  undefined1 local_10 [12];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_18;
  FUN_007009a0(param_1);
  local_18 = (void *)FUN_0070f910(DAT_00b3ff1c);
  uVar5 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar5) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar5);
  }
  FUN_0042bb90(uVar5,&local_18);
  if (*(int *)(in_ECX + 0x10) != 0) {
    local_18 = (void *)FUN_0070fc30("Root Parent",*(undefined4 *)(*(int *)(in_ECX + 0x10) + 8));
    uVar5 = (uint)*(ushort *)(param_1 + 10);
    if (*(ushort *)(param_1 + 8) <= uVar5) {
      FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar5);
    }
    FUN_0042bb90(uVar5,&local_18);
  }
  iVar2 = *(int *)(in_ECX + 8);
  if (iVar2 != 0) {
    uVar3 = 0;
    if (*(int *)(in_ECX + 0xc) != 0) {
      uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + 8);
    }
    local_18 = (void *)FUN_0070fb40("Hardware partitions",uVar3);
    uVar5 = (uint)*(ushort *)(param_1 + 10);
    if (*(ushort *)(param_1 + 8) <= uVar5) {
      FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar5);
    }
    FUN_0042bb90(uVar5,&local_18);
    uVar5 = *(uint *)(iVar2 + 0x40);
    local_18 = (void *)FUN_0070fb40("Bone Count",uVar5);
    uVar6 = (uint)*(ushort *)(param_1 + 10);
    if (*(ushort *)(param_1 + 8) <= uVar6) {
      FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar6);
    }
    FUN_0042bb90(uVar6,&local_18);
    _Base = (void *)FUN_00401f00(-(uint)((int)((ulonglong)uVar5 * 4 >> 0x20) != 0) |
                                 (uint)((ulonglong)uVar5 * 4));
    uVar6 = 0;
    if (uVar5 != 0) {
      do {
        *(undefined4 *)((int)_Base + uVar6 * 4) =
             *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x14) + uVar6 * 4) + 8);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
    }
    local_18 = _Base;
    _qsort(_Base,uVar5,4,FUN_0072bae0);
    uVar6 = 0;
    if (uVar5 != 0) {
      do {
        FUN_006c5d40(local_10,10,"  %3d",uVar6);
        pcVar4 = *(char **)((int)_Base + uVar6 * 4);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = "<noname>";
        }
        local_14 = FUN_0070fc30(local_10,pcVar4);
        uVar1 = *(ushort *)(param_1 + 10);
        uVar7 = (uint)uVar1;
        if (*(ushort *)(param_1 + 8) <= uVar7) {
          FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar7);
        }
        if (uVar7 < *(ushort *)(param_1 + 10)) {
          if (local_14 == 0) {
            if (*(int *)(*(int *)(param_1 + 4) + uVar7 * 4) != 0) {
              *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
            }
          }
          else if (*(int *)(*(int *)(param_1 + 4) + uVar7 * 4) == 0) {
            *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
          }
        }
        else {
          *(ushort *)(param_1 + 10) = uVar1 + 1;
          if (local_14 != 0) {
            *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
          }
        }
        uVar6 = uVar6 + 1;
        *(int *)(*(int *)(param_1 + 4) + uVar7 * 4) = local_14;
        _Base = local_18;
      } while (uVar6 < uVar5);
    }
    FUN_00401f20(_Base);
  }
  return;
}



undefined4 FUN_0072c3b0(int param_1,int param_2)

{
  if (*(float *)(param_2 + 4) < *(float *)(param_1 + 4)) {
    return 0xffffffff;
  }
  if (*(float *)(param_1 + 4) < *(float *)(param_2 + 4)) {
    return 1;
  }
  return 0;
}



uint FUN_0072c400(ushort *param_1,ushort *param_2)

{
  if (*param_1 < *param_2) {
    return 0xffffffff;
  }
  return (uint)(*param_2 < *param_1);
}



void FUN_0072c420(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a80378;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  in_ECX[10] = 0;
  return;
}



void FUN_0072c450(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a80378;
  FUN_00401f20(in_ECX[1]);
  FUN_00401f20(in_ECX[2]);
  FUN_00401f20(in_ECX[3]);
  FUN_00401f20(in_ECX[4]);
  FUN_00401f20(in_ECX[5]);
  FUN_00401f20(in_ECX[6]);
  return;
}



int FUN_0072c4a0(void)

{
  int iVar1;
  int in_ECX;
  ushort *puVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(in_ECX + 0x22);
  iVar1 = 0;
  if (uVar3 != 0) {
    puVar2 = *(ushort **)(in_ECX + 0x18);
    do {
      iVar1 = iVar1 + (uint)*puVar2;
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return iVar1;
}



uint FUN_0072c4c0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  
  uVar1 = *(ushort *)(in_ECX + 0x1c);
  if ((uVar1 != *(ushort *)(param_1 + 0x1c)) ||
     (in_EAX = (uint)*(ushort *)(in_ECX + 0x1e),
     *(ushort *)(in_ECX + 0x1e) != *(ushort *)(param_1 + 0x1e))) {
LAB_0072c4d7:
    return in_EAX & 0xffffff00;
  }
  uVar2 = *(ushort *)(in_ECX + 0x20);
  in_EAX = (uint)uVar2;
  if ((uVar2 != *(ushort *)(param_1 + 0x20)) ||
     (*(short *)(in_ECX + 0x22) != *(short *)(param_1 + 0x22))) goto LAB_0072c4d7;
  if (*(ushort *)(in_ECX + 0x24) != *(ushort *)(param_1 + 0x24)) {
    return (uint)(byte)(uVar2 >> 8) << 8;
  }
  pbVar5 = *(byte **)(param_1 + 4);
  pbVar6 = *(byte **)(in_ECX + 4);
  for (uVar3 = (uint)uVar2 * 2; 3 < uVar3; uVar3 = uVar3 - 4) {
    if (*(int *)pbVar6 != *(int *)pbVar5) goto LAB_0072c53a;
    pbVar5 = pbVar5 + 4;
    pbVar6 = pbVar6 + 4;
  }
  if (uVar3 == 0) {
LAB_0072c59f:
    uVar3 = 0;
  }
  else {
LAB_0072c53a:
    iVar7 = (uint)*pbVar6 - (uint)*pbVar5;
    if (iVar7 == 0) {
      if (uVar3 == 1) goto LAB_0072c59f;
      iVar7 = (uint)pbVar6[1] - (uint)pbVar5[1];
      if (iVar7 == 0) {
        if (uVar3 == 2) goto LAB_0072c59f;
        iVar7 = (uint)pbVar6[2] - (uint)pbVar5[2];
        if (iVar7 == 0) {
          if ((uVar3 == 3) || (iVar7 = (uint)pbVar6[3] - (uint)pbVar5[3], iVar7 == 0))
          goto LAB_0072c59f;
        }
      }
    }
    uVar3 = 1;
    if (iVar7 < 1) {
      uVar3 = 0xffffffff;
    }
  }
  if (uVar3 != 0) goto LAB_0072c78f;
  pbVar5 = *(byte **)(param_1 + 0xc);
  pbVar6 = *(byte **)(in_ECX + 0xc);
  for (uVar3 = (uint)uVar1 * 2; 3 < uVar3; uVar3 = uVar3 - 4) {
    if (*(int *)pbVar6 != *(int *)pbVar5) goto LAB_0072c5d8;
    pbVar5 = pbVar5 + 4;
    pbVar6 = pbVar6 + 4;
  }
  if (uVar3 == 0) {
LAB_0072c63d:
    uVar3 = 0;
  }
  else {
LAB_0072c5d8:
    iVar7 = (uint)*pbVar6 - (uint)*pbVar5;
    if (iVar7 == 0) {
      if (uVar3 == 1) goto LAB_0072c63d;
      iVar7 = (uint)pbVar6[1] - (uint)pbVar5[1];
      if (iVar7 == 0) {
        if (uVar3 == 2) goto LAB_0072c63d;
        iVar7 = (uint)pbVar6[2] - (uint)pbVar5[2];
        if (iVar7 == 0) {
          if ((uVar3 == 3) || (iVar7 = (uint)pbVar6[3] - (uint)pbVar5[3], iVar7 == 0))
          goto LAB_0072c63d;
        }
      }
    }
    uVar3 = 1;
    if (iVar7 < 1) {
      uVar3 = 0xffffffff;
    }
  }
  if (uVar3 != 0) goto LAB_0072c78f;
  pbVar5 = *(byte **)(param_1 + 8);
  pbVar6 = *(byte **)(in_ECX + 8);
  uVar4 = (uint)*(ushort *)(in_ECX + 0x24) * (uint)uVar1;
  for (uVar3 = uVar4 * 4; 3 < uVar3; uVar3 = uVar3 - 4) {
    if (*(int *)pbVar6 != *(int *)pbVar5) goto LAB_0072c67c;
    pbVar5 = pbVar5 + 4;
    pbVar6 = pbVar6 + 4;
  }
  if (uVar3 == 0) {
LAB_0072c6d9:
    uVar3 = 0;
  }
  else {
LAB_0072c67c:
    iVar7 = (uint)*pbVar6 - (uint)*pbVar5;
    if (iVar7 == 0) {
      if (uVar3 == 1) goto LAB_0072c6d9;
      iVar7 = (uint)pbVar6[1] - (uint)pbVar5[1];
      if (iVar7 == 0) {
        if (uVar3 == 2) goto LAB_0072c6d9;
        iVar7 = (uint)pbVar6[2] - (uint)pbVar5[2];
        if (iVar7 == 0) {
          if ((uVar3 == 3) || (iVar7 = (uint)pbVar6[3] - (uint)pbVar5[3], iVar7 == 0))
          goto LAB_0072c6d9;
        }
      }
    }
    uVar3 = 1;
    if (iVar7 < 1) {
      uVar3 = 0xffffffff;
    }
  }
  if (uVar3 != 0) goto LAB_0072c78f;
  if (*(ushort *)(in_ECX + 0x22) == 0) {
    pbVar5 = *(byte **)(param_1 + 0x14);
    pbVar6 = *(byte **)(in_ECX + 0x14);
    for (uVar3 = (uint)*(ushort *)(in_ECX + 0x1e) * 6; 3 < uVar3; uVar3 = uVar3 - 4) {
      if (*(int *)pbVar6 != *(int *)pbVar5) goto LAB_0072c728;
      pbVar5 = pbVar5 + 4;
      pbVar6 = pbVar6 + 4;
    }
    if (uVar3 == 0) {
LAB_0072c785:
      uVar3 = 0;
    }
    else {
LAB_0072c728:
      iVar7 = (uint)*pbVar6 - (uint)*pbVar5;
      if (iVar7 == 0) {
        if (uVar3 == 1) goto LAB_0072c785;
        iVar7 = (uint)pbVar6[1] - (uint)pbVar5[1];
        if (iVar7 == 0) {
          if (uVar3 == 2) goto LAB_0072c785;
          iVar7 = (uint)pbVar6[2] - (uint)pbVar5[2];
          if (iVar7 == 0) {
            if ((uVar3 == 3) || (iVar7 = (uint)pbVar6[3] - (uint)pbVar5[3], iVar7 == 0))
            goto LAB_0072c785;
          }
        }
      }
      uVar3 = 1;
      if (iVar7 < 1) {
        uVar3 = 0xffffffff;
      }
    }
  }
  else {
    pbVar5 = *(byte **)(param_1 + 0x18);
    pbVar6 = *(byte **)(in_ECX + 0x18);
    for (uVar3 = (uint)*(ushort *)(in_ECX + 0x22) * 2; 3 < uVar3; uVar3 = uVar3 - 4) {
      if (*(int *)pbVar6 != *(int *)pbVar5) goto LAB_0072c7c8;
      pbVar5 = pbVar5 + 4;
      pbVar6 = pbVar6 + 4;
    }
    if (uVar3 == 0) {
LAB_0072c825:
      uVar3 = 0;
    }
    else {
LAB_0072c7c8:
      iVar7 = (uint)*pbVar6 - (uint)*pbVar5;
      if (iVar7 == 0) {
        if (uVar3 == 1) goto LAB_0072c825;
        iVar7 = (uint)pbVar6[1] - (uint)pbVar5[1];
        if (iVar7 == 0) {
          if (uVar3 == 2) goto LAB_0072c825;
          iVar7 = (uint)pbVar6[2] - (uint)pbVar5[2];
          if (iVar7 == 0) {
            if ((uVar3 == 3) || (iVar7 = (uint)pbVar6[3] - (uint)pbVar5[3], iVar7 == 0))
            goto LAB_0072c825;
          }
        }
      }
      uVar3 = 1;
      if (iVar7 < 1) {
        uVar3 = 0xffffffff;
      }
    }
    if (uVar3 != 0) goto LAB_0072c78f;
    iVar7 = FUN_0072c4a0();
    pbVar5 = *(byte **)(param_1 + 0x14);
    pbVar6 = *(byte **)(in_ECX + 0x14);
    for (uVar3 = iVar7 * 2; 3 < uVar3; uVar3 = uVar3 - 4) {
      if (*(int *)pbVar6 != *(int *)pbVar5) goto LAB_0072c85b;
      pbVar5 = pbVar5 + 4;
      pbVar6 = pbVar6 + 4;
    }
    if (uVar3 == 0) {
LAB_0072c8b8:
      uVar3 = 0;
    }
    else {
LAB_0072c85b:
      iVar7 = (uint)*pbVar6 - (uint)*pbVar5;
      if (iVar7 == 0) {
        if (uVar3 == 1) goto LAB_0072c8b8;
        iVar7 = (uint)pbVar6[1] - (uint)pbVar5[1];
        if (iVar7 == 0) {
          if (uVar3 == 2) goto LAB_0072c8b8;
          iVar7 = (uint)pbVar6[2] - (uint)pbVar5[2];
          if (iVar7 == 0) {
            if ((uVar3 == 3) || (iVar7 = (uint)pbVar6[3] - (uint)pbVar5[3], iVar7 == 0))
            goto LAB_0072c8b8;
          }
        }
      }
      uVar3 = 1;
      if (iVar7 < 1) {
        uVar3 = 0xffffffff;
      }
    }
  }
  if (uVar3 != 0) goto LAB_0072c78f;
  pbVar5 = *(byte **)(in_ECX + 0x10);
  pbVar6 = *(byte **)(param_1 + 0x10);
  uVar3 = (uint)(pbVar5 == (byte *)0x0);
  if (uVar3 != (pbVar6 == (byte *)0x0)) goto LAB_0072c78f;
  if (pbVar5 == (byte *)0x0) {
    return 1;
  }
  for (; 3 < uVar4; uVar4 = uVar4 - 4) {
    if (*(int *)pbVar5 != *(int *)pbVar6) goto LAB_0072c909;
    pbVar6 = pbVar6 + 4;
    pbVar5 = pbVar5 + 4;
  }
  if (uVar4 == 0) {
LAB_0072c966:
    uVar3 = 0;
  }
  else {
LAB_0072c909:
    iVar7 = (uint)*pbVar5 - (uint)*pbVar6;
    if (iVar7 == 0) {
      if (uVar4 == 1) goto LAB_0072c966;
      iVar7 = (uint)pbVar5[1] - (uint)pbVar6[1];
      if (iVar7 == 0) {
        if (uVar4 == 2) goto LAB_0072c966;
        iVar7 = (uint)pbVar5[2] - (uint)pbVar6[2];
        if (iVar7 == 0) {
          if ((uVar4 == 3) || (iVar7 = (uint)pbVar5[3] - (uint)pbVar6[3], iVar7 == 0))
          goto LAB_0072c966;
        }
      }
    }
    uVar3 = 1;
    if (iVar7 < 1) {
      uVar3 = 0xffffffff;
    }
  }
  if (uVar3 == 0) {
    return 1;
  }
LAB_0072c78f:
  return uVar3 & 0xffffff00;
}



void FUN_0072c980(void)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  *in_ECX = &PTR_FUN_00a80384;
  in_ECX[3] = 0;
  return;
}



void FUN_0072c9b0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cfdd8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a80384;
  local_4 = 0;
  FUN_00701500();
  puVar1 = (undefined4 *)in_ECX[3];
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      FUN_00401f20(puVar1 + -1,uVar2);
    }
    else {
      (**(code **)*puVar1)(3);
    }
  }
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_0072caa0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a80384;
    puVar2[3] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined1 FUN_0072cb20(int param_1)

{
  uint uVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  cVar2 = FUN_00700670(param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar1 = *(uint *)(in_ECX + 8);
  if (uVar1 != *(uint *)(param_1 + 8)) {
    return 0;
  }
  uVar5 = 0;
  if (uVar1 != 0) {
    iVar4 = *(int *)(in_ECX + 0xc);
    iVar3 = *(int *)(param_1 + 0xc) - iVar4;
    do {
      cVar2 = FUN_0072c4c0(iVar4 + iVar3);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x2c;
    } while (uVar5 < uVar1);
  }
  return 1;
}



void FUN_0072cb90(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  undefined4 unaff_retaddr;
  
  iVar2 = (**(code **)(*in_ECX + 4))(param_1);
  puVar3 = *(undefined4 **)(in_ECX[2] + iVar2 * 4);
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x14))();
      (**(code **)(*in_ECX + 0xc))(puVar3,param_1,param_1);
      *puVar3 = *(undefined4 *)(in_ECX[2] + iVar2 * 4);
      *(undefined4 **)(in_ECX[2] + iVar2 * 4) = puVar3;
      in_ECX[3] = in_ECX[3] + 1;
      return;
    }
    cVar1 = (**(code **)(*in_ECX + 8))(param_1,puVar3[1]);
    if (cVar1 != '\0') break;
    puVar3 = (undefined4 *)*puVar3;
  }
  (**(code **)(*in_ECX + 0x10))(puVar3);
  (**(code **)(*in_ECX + 0xc))(puVar3,param_1,unaff_retaddr);
  return;
}



void FUN_0072cc50(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  
  if (param_1 != in_ECX[1]) {
    if (param_1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 8 >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 8));
      uVar3 = 0;
      if (in_ECX[2] != 0) {
        do {
          iVar1 = *in_ECX;
          *(undefined4 *)(iVar2 + uVar3 * 8) = *(undefined4 *)(iVar1 + uVar3 * 8);
          *(undefined4 *)(iVar2 + 4 + uVar3 * 8) = *(undefined4 *)(iVar1 + 4 + uVar3 * 8);
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)in_ECX[2]);
      }
    }
    FUN_00401f20(*in_ECX);
    *in_ECX = iVar2;
    in_ECX[1] = param_1;
  }
  return;
}



void FUN_0072ccc0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  
  if (param_1 != in_ECX[1]) {
    if (param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 2 >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 2));
      uVar2 = 0;
      if (in_ECX[2] != 0) {
        do {
          *(undefined2 *)(iVar1 + uVar2 * 2) = *(undefined2 *)(*in_ECX + uVar2 * 2);
          uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)in_ECX[2]);
      }
    }
    FUN_00401f20(*in_ECX);
    *in_ECX = iVar1;
    in_ECX[1] = param_1;
  }
  return;
}



void FUN_0072cd30(void)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  int *in_ECX;
  int iVar5;
  uint uVar6;
  float local_4;
  
  local_4 = 0.0;
  uVar3 = in_ECX[2];
  uVar6 = 0;
  if (3 < (int)uVar3) {
    iVar5 = (uVar3 - 4 >> 2) + 1;
    uVar6 = iVar5 * 4;
    pfVar4 = (float *)(*in_ECX + 0xc);
    do {
      iVar5 = iVar5 + -1;
      local_4 = pfVar4[-2] + local_4 + *pfVar4 + pfVar4[2] + pfVar4[4];
      pfVar4 = pfVar4 + 8;
    } while (iVar5 != 0);
  }
  if (uVar6 < uVar3) {
    pfVar4 = (float *)(*in_ECX + 4 + uVar6 * 8);
    iVar5 = uVar3 - uVar6;
    do {
      fVar2 = *pfVar4;
      pfVar4 = pfVar4 + 2;
      iVar5 = iVar5 + -1;
      local_4 = fVar2 + local_4;
    } while (iVar5 != 0);
  }
  uVar6 = 0;
  if (uVar3 != 0) {
    do {
      iVar5 = uVar6 * 8;
      iVar1 = uVar6 * 8;
      uVar6 = uVar6 + 1;
      *(float *)(*in_ECX + 4 + iVar1) = *(float *)(*in_ECX + 4 + iVar5) * (1.0 / local_4);
    } while (uVar6 < (uint)in_ECX[2]);
  }
  return;
}



uint FUN_0072cdf0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int *in_ECX;
  ushort *puVar3;
  uint uVar4;
  
  uVar2 = 0;
  uVar4 = 0;
  if (param_1[2] != 0) {
    uVar1 = in_ECX[2];
    do {
      if (uVar2 < uVar1) {
        puVar3 = (ushort *)(*in_ECX + uVar2 * 2);
        do {
          if (*(ushort *)(*param_1 + uVar4 * 2) <= *puVar3) break;
          uVar2 = uVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar2 < uVar1);
      }
      if ((uVar2 == uVar1) || (*(short *)(*in_ECX + uVar2 * 2) != *(short *)(*param_1 + uVar4 * 2)))
      {
        return uVar2 & 0xffffff00;
      }
      uVar4 = uVar4 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar4 < (uint)param_1[2]);
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}



undefined4 FUN_0072ce60(int *param_1)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *in_ECX;
  uint uVar4;
  
  piVar2 = param_1;
  uVar1 = param_1[2];
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      param_1 = (int *)(uint)*(ushort *)(*piVar2 + uVar4 * 8);
      pvVar3 = _bsearch(&param_1,(void *)*in_ECX,in_ECX[2],2,FUN_0072c400);
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 1;
}



ushort FUN_0072cec0(void)

{
  ushort uVar1;
  ushort uVar2;
  uint *in_ECX;
  undefined2 uVar3;
  
  uVar1 = *(ushort *)((int)in_ECX + 10);
  uVar2 = (ushort)in_ECX[2];
  if (uVar1 < uVar2) {
    in_ECX[1] = in_ECX[1] + 1;
    if (in_ECX[1] < (uint)((int *)in_ECX[4])[2]) {
      *(undefined2 *)((int)in_ECX + 10) = *(undefined2 *)(*(int *)in_ECX[4] + in_ECX[1] * 2);
      return uVar1;
    }
    *(undefined2 *)((int)in_ECX + 10) = 0xffff;
    return uVar1;
  }
  if (uVar1 == uVar2) {
    in_ECX[1] = in_ECX[1] + 1;
    if (in_ECX[1] < (uint)((int *)in_ECX[4])[2]) {
      uVar3 = *(undefined2 *)(*(int *)in_ECX[4] + in_ECX[1] * 2);
    }
    else {
      uVar3 = 0xffff;
    }
    *(undefined2 *)((int)in_ECX + 10) = uVar3;
  }
  *in_ECX = *in_ECX + 1;
  if (*in_ECX < (uint)((int *)in_ECX[3])[2]) {
    *(undefined2 *)(in_ECX + 2) = *(undefined2 *)(*(int *)in_ECX[3] + *in_ECX * 2);
    return uVar2;
  }
  *(undefined2 *)(in_ECX + 2) = 0xffff;
  return uVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_0072cf50(int *param_1,int *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int local_18;
  uint local_14;
  int *local_10;
  ushort local_c;
  undefined1 local_a [2];
  undefined1 local_8 [4];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_18;
  uVar1 = *(ushort *)(param_2 + 2);
  uVar5 = (uint)uVar1;
  local_10 = param_1;
  local_14 = uVar5;
  puVar2 = (undefined4 *)FUN_00401f00(uVar5 * 2);
  if (uVar5 != 0) {
    puVar6 = puVar2;
    for (uVar5 = (uint)(uVar1 >> 1); uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = (uint)((uVar1 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined2 *)puVar6 = 0xffff;
      puVar6 = (undefined4 *)((int)puVar6 + 2);
    }
  }
  uVar5 = 0;
  uVar7 = 0;
  if (*(short *)(local_18 + 0x1e) != 0) {
    do {
      (**(code **)(*param_2 + 0x60))
                (*(undefined2 *)(*local_10 + uVar7 * 2),&local_c,local_a,local_8);
      uVar4 = 0;
      do {
        if (*(short *)((int)puVar2 + (uint)*(ushort *)(local_a + uVar4 * 2 + -2) * 2) == -1) {
          *(short *)((int)puVar2 + (uint)*(ushort *)(local_a + uVar4 * 2 + -2) * 2) = (short)uVar5;
          uVar5 = uVar5 + 1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 3);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ushort *)(local_18 + 0x1e));
  }
  uVar3 = FUN_00401f00(-(uint)((int)((ulonglong)uVar5 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar5 * 2));
  *(short *)(local_18 + 0x1c) = (short)uVar5;
  *(undefined4 *)(local_18 + 0xc) = uVar3;
  uVar5 = 0;
  if (local_14 != 0) {
    do {
      uVar1 = *(ushort *)((int)puVar2 + uVar5 * 2);
      if (uVar1 != 0xffff) {
        *(short *)(*(int *)(local_18 + 0xc) + (uint)uVar1 * 2) = (short)uVar5;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_14);
  }
  return puVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0072d090(int *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int in_ECX;
  uint uVar3;
  int local_14;
  int *local_10;
  ushort local_c;
  ushort local_a;
  ushort local_8 [2];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_14;
  local_10 = param_1;
  uVar1 = FUN_00401f00((uint)*(ushort *)(in_ECX + 0x1e) * 6);
  uVar3 = 0;
  *(undefined4 *)(in_ECX + 0x14) = uVar1;
  if (*(short *)(in_ECX + 0x1e) != 0) {
    local_14 = 0;
    do {
      (**(code **)(*param_2 + 0x60))
                (*(undefined2 *)(*local_10 + uVar3 * 2),&local_c,&local_a,local_8);
      puVar2 = (undefined2 *)(*(int *)(in_ECX + 0x14) + local_14);
      *puVar2 = *(undefined2 *)(param_3 + (uint)local_c * 2);
      puVar2[1] = *(undefined2 *)(param_3 + (uint)local_a * 2);
      puVar2[2] = *(undefined2 *)(param_3 + (uint)local_8[0] * 2);
      uVar3 = uVar3 + 1;
      local_14 = local_14 + 6;
    } while (uVar3 < *(ushort *)(in_ECX + 0x1e));
  }
  return;
}



void FUN_0072d160(byte param_1)

{
  FUN_0072c9b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0072d180(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}



void FUN_0072d190(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint local_c;
  
  local_c = 0;
  do {
    piVar1 = (int *)(param_3 + (uint)*(ushort *)(param_2 + local_c * 2) * 0xc);
    uVar2 = piVar1[2];
    uVar7 = 0;
    if (uVar2 != 0) {
      do {
        uVar3 = *(undefined4 *)(*piVar1 + uVar7 * 8);
        iVar6 = (**(code **)(*param_1 + 4))(uVar3);
        for (puVar4 = *(undefined4 **)(param_1[2] + iVar6 * 4); puVar4 != (undefined4 *)0x0;
            puVar4 = (undefined4 *)*puVar4) {
          cVar5 = (**(code **)(*param_1 + 8))(uVar3,puVar4[1]);
          if (cVar5 != '\0') {
            if (*(float *)(*piVar1 + 4 + uVar7 * 8) <= (float)puVar4[2]) goto LAB_0072d231;
            break;
          }
        }
        FUN_0072cb90(uVar3,*(undefined4 *)(*piVar1 + 4 + uVar7 * 8));
LAB_0072d231:
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar2);
    }
    local_c = local_c + 1;
    if (2 < local_c) {
      return;
    }
  } while( true );
}



void FUN_0072d260(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a803d4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_0072d280(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a803d4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0072d2b0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  short local_10;
  short local_e;
  undefined4 *local_8;
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_18;
  local_10 = *(short *)*in_ECX;
  local_8 = param_1;
  local_e = *(short *)*param_1;
  iVar1 = 0;
  local_14 = 0;
  local_18 = 0;
  while ((local_10 != -1 || (local_e != -1))) {
    FUN_0072cec0();
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0072d330(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined2 uVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  undefined4 local_18;
  undefined4 local_14;
  short local_10;
  short local_e;
  undefined4 *local_8;
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_18;
  local_10 = *(short *)*in_ECX;
  local_e = *(short *)*param_1;
  iVar1 = param_1[2];
  iVar2 = in_ECX[2];
  local_8 = param_1;
  iVar6 = 0;
  lVar3 = (ulonglong)(uint)(iVar1 + iVar2) * 2;
  local_14 = 0;
  local_18 = 0;
  iVar5 = FUN_00401f00(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
  while ((local_10 != -1 || (local_e != -1))) {
    uVar4 = FUN_0072cec0();
    *(undefined2 *)(iVar5 + iVar6 * 2) = uVar4;
    iVar6 = iVar6 + 1;
  }
  FUN_00401f20(*in_ECX);
  in_ECX[1] = iVar1 + iVar2;
  *in_ECX = iVar5;
  in_ECX[2] = iVar6;
  return;
}



undefined4 FUN_0072d3e0(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    cVar1 = FUN_0072ce60(param_2 + (uint)*(ushort *)(param_1 + uVar2 * 2) * 0xc);
    if (cVar1 == '\0') {
      return 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return 1;
}



void FUN_0072d420(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      if (*(int *)(param_2 + uVar2 * 4) == param_1) {
        iVar1 = in_ECX[1];
        if (in_ECX[2] == iVar1) {
          if (iVar1 == 0) {
            iVar1 = 1;
          }
          else {
            iVar1 = iVar1 * 2;
          }
          FUN_0072ccc0(iVar1);
        }
        *(short *)(*in_ECX + in_ECX[2] * 2) = (short)uVar2;
        in_ECX[2] = in_ECX[2] + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  return;
}



void FUN_0072d480(undefined1 *param_1,float *param_2,undefined4 param_3,int param_4,char param_5,
                 char param_6,byte param_7,uint param_8)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  float *pfVar7;
  undefined1 *puVar8;
  uint *puVar9;
  undefined2 uVar10;
  int in_ECX;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  undefined1 *puVar16;
  uint uVar17;
  
  uVar6 = (uint)param_2[2];
  if ((int)param_2[2] <= (int)(uint)param_7) {
    uVar6 = (uint)param_7;
  }
  *(short *)(in_ECX + 0x20) = (short)uVar6;
  *(undefined2 *)(in_ECX + 0x1e) = *(undefined2 *)((int)param_1 + 8);
  uVar5 = FUN_00401f00((uVar6 & 0xffff) * 2);
  *(undefined4 *)(in_ECX + 4) = uVar5;
  uVar6 = 0;
  if (*(short *)(in_ECX + 0x20) != 0) {
    do {
      if (uVar6 < (uint)param_2[2]) {
        uVar10 = *(undefined2 *)((int)*param_2 + uVar6 * 2);
      }
      else {
        uVar10 = 0;
      }
      *(undefined2 *)(*(int *)(in_ECX + 4) + uVar6 * 2) = uVar10;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(in_ECX + 0x20));
  }
  uVar5 = FUN_0072cf50(param_1,param_3);
  FUN_0072d090(param_1,param_3,uVar5);
  FUN_00401f20(uVar5);
  if (param_5 != '\0') {
    *(ushort *)(in_ECX + 0x24) = (ushort)param_7;
    iVar15 = (uint)*(ushort *)(in_ECX + 0x1c) * (uint)(ushort)param_7;
    uVar5 = FUN_00401f00(iVar15 * 4);
    *(undefined4 *)(in_ECX + 8) = uVar5;
    uVar5 = FUN_00401f00(iVar15);
    *(undefined4 *)(in_ECX + 0x10) = uVar5;
    iVar15 = FUN_00401f00(-(uint)((int)((ulonglong)param_8 * 4 >> 0x20) != 0) |
                          (uint)((ulonglong)param_8 * 4));
    uVar6 = 0;
    if (param_2[2] != 0.0) {
      do {
        *(uint *)(iVar15 + (uint)*(ushort *)(*(int *)(in_ECX + 4) + uVar6 * 2) * 4) = uVar6;
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)param_2[2]);
    }
    param_2 = *(float **)(in_ECX + 8);
    param_1 = *(undefined1 **)(in_ECX + 0x10);
    pfVar7 = (float *)FUN_00401f00((uint)*(ushort *)(in_ECX + 0x24) * 4);
    puVar8 = (undefined1 *)FUN_00401f00(*(undefined2 *)(in_ECX + 0x24));
    _param_7 = 0;
    if (*(short *)(in_ECX + 0x1c) != 0) {
      do {
        piVar1 = (int *)(param_4 + (uint)*(ushort *)(*(int *)(in_ECX + 0xc) + _param_7 * 2) * 0xc);
        uVar6 = 0;
        pfVar11 = pfVar7;
        puVar16 = puVar8;
        if (piVar1[2] != 0) {
          do {
            iVar2 = *piVar1;
            *pfVar11 = *(float *)(iVar2 + 4 + uVar6 * 8);
            *puVar16 = *(undefined1 *)(iVar15 + *(int *)(iVar2 + uVar6 * 8) * 4);
            uVar6 = uVar6 + 1;
            pfVar11 = pfVar11 + 1;
            puVar16 = puVar16 + 1;
          } while (uVar6 < (uint)piVar1[2]);
        }
        if (uVar6 < *(ushort *)(in_ECX + 0x24)) {
          do {
            uVar6 = uVar6 + 1;
            *pfVar11 = 0.0;
            *puVar16 = 0;
            pfVar11 = pfVar11 + 1;
            puVar16 = puVar16 + 1;
          } while (uVar6 < *(ushort *)(in_ECX + 0x24));
        }
        uVar6 = 0;
        if (*(short *)(in_ECX + 0x24) != 0) {
          uVar17 = (uint)*(ushort *)(in_ECX + 0x24);
          do {
            _param_6 = *pfVar7;
            uVar13 = 1;
            uVar12 = 0;
            if (1 < *(ushort *)(in_ECX + 0x24)) {
              do {
                if (_param_6 < pfVar7[uVar13]) {
                  _param_6 = pfVar7[uVar13];
                  uVar12 = uVar13;
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar17);
            }
            *param_2 = pfVar7[uVar12];
            param_2 = param_2 + 1;
            *param_1 = puVar8[uVar12];
            pfVar7[uVar12] = -3.4028235e+38;
            param_1 = param_1 + 1;
            uVar17 = (uint)*(ushort *)(in_ECX + 0x24);
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar17);
        }
        _param_7 = _param_7 + 1;
      } while (_param_7 < *(ushort *)(in_ECX + 0x1c));
    }
    FUN_00401f20(pfVar7);
    FUN_00401f20(puVar8);
    FUN_00401f20(iVar15);
    return;
  }
  *(ushort *)(in_ECX + 0x24) = *(ushort *)(in_ECX + 0x20);
  uVar6 = (uint)*(ushort *)(in_ECX + 0x1c) * (uint)*(ushort *)(in_ECX + 0x20);
  lVar4 = (ulonglong)uVar6 * 4;
  puVar9 = (uint *)FUN_00401f00(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4);
  *(uint **)(in_ECX + 8) = puVar9;
  _param_7 = 0;
  _param_5 = puVar9;
  if (*(short *)(in_ECX + 0x1c) != 0) {
    do {
      piVar1 = (int *)(param_4 + (uint)*(ushort *)(*(int *)(in_ECX + 0xc) + _param_7 * 2) * 0xc);
      uVar17 = 0;
      if (param_2[2] != 0.0) {
        do {
          uVar12 = piVar1[2];
          uVar13 = 0;
          if (uVar12 != 0) {
            puVar3 = (uint *)*piVar1;
            puVar14 = puVar3;
            do {
              if (*puVar14 == (uint)*(ushort *)((int)*param_2 + uVar17 * 2)) {
                param_1 = (undefined1 *)puVar3[uVar13 * 2 + 1];
                goto LAB_0072d7a2;
              }
              uVar13 = uVar13 + 1;
              puVar14 = puVar14 + 2;
              puVar9 = _param_5;
            } while (uVar13 < uVar12);
          }
          param_1 = (undefined1 *)0x0;
          _param_5 = puVar9;
LAB_0072d7a2:
          puVar9 = _param_5 + 1;
          *_param_5 = (uint)param_1;
          uVar17 = uVar17 + 1;
          _param_5 = puVar9;
        } while (uVar17 < (uint)param_2[2]);
      }
      if (uVar17 < *(ushort *)(in_ECX + 0x20)) {
        do {
          *puVar9 = 0;
          uVar17 = uVar17 + 1;
          puVar9 = puVar9 + 1;
          _param_5 = puVar9;
        } while (uVar17 < *(ushort *)(in_ECX + 0x20));
      }
      _param_7 = _param_7 + 1;
    } while (_param_7 < *(ushort *)(in_ECX + 0x1c));
  }
  if (param_6 != '\0') {
    puVar8 = (undefined1 *)FUN_00401f00(uVar6);
    uVar6 = 0;
    *(undefined1 **)(in_ECX + 0x10) = puVar8;
    if (*(short *)(in_ECX + 0x1c) != 0) {
      do {
        uVar17 = 0;
        if (*(short *)(in_ECX + 0x20) != 0) {
          do {
            *puVar8 = (char)uVar17;
            uVar17 = uVar17 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar17 < *(ushort *)(in_ECX + 0x20));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(in_ECX + 0x1c));
    }
  }
  return;
}



void FUN_0072d860(int param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  char cStack_b;
  char cStack_a;
  char cStack_9;
  undefined4 local_8;
  uint uStack_4;
  
  iVar2 = param_1;
  puVar4 = (ushort *)(in_ECX + 0x1c);
  local_8 = 2;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),puVar4,2,&local_8,1);
  local_8 = 2;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x1e,2,&local_8,1);
  local_8 = 2;
  puVar1 = (ushort *)(in_ECX + 0x20);
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),puVar1,2,&local_8,1);
  local_8 = 2;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x22,2,&local_8,1);
  local_8 = 2;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x24,2,&local_8,1);
  uVar3 = FUN_00401f00((uint)*puVar1 * 2);
  *(undefined4 *)(in_ECX + 4) = uVar3;
  local_8 = 2;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))
            (*(int *)(iVar2 + 0x21c),uVar3,(uint)*puVar1 * 2,&local_8,1);
  if (*(uint *)(iVar2 + 0xd8) < 0xa000112) {
    param_1 = CONCAT31(param_1._1_3_,1);
LAB_0072d98b:
    uVar3 = FUN_00401f00((uint)*puVar4 * 2);
    *(undefined4 *)(in_ECX + 0xc) = uVar3;
    local_8 = 2;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))
              (*(int *)(iVar2 + 0x21c),uVar3,(uint)*puVar4 * 2,&local_8,1);
  }
  else {
    local_8 = 1;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&param_1,1,&local_8,1);
    if ((char)param_1 != '\0') goto LAB_0072d98b;
  }
  uVar6 = (uint)*(ushort *)(in_ECX + 0x24) * (uint)*puVar4;
  uStack_4 = uVar6;
  if (*(uint *)(iVar2 + 0xd8) < 0xa000112) {
    cStack_b = '\x01';
LAB_0072da16:
    uVar3 = FUN_00401f00(-(uint)((int)((ulonglong)uVar6 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar6 * 4));
    *(undefined4 *)(in_ECX + 8) = uVar3;
    local_8 = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),uVar3,uVar6 * 4,&local_8,1);
  }
  else {
    local_8 = 1;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&cStack_b,1,&local_8,1);
    if (cStack_b != '\0') goto LAB_0072da16;
  }
  if (*(ushort *)(in_ECX + 0x22) == 0) {
    uVar6 = (uint)*(ushort *)(in_ECX + 0x1e) * 3;
  }
  else {
    uVar3 = FUN_00401f00((uint)*(ushort *)(in_ECX + 0x22) * 2);
    *(undefined4 *)(in_ECX + 0x18) = uVar3;
    local_8 = 2;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))
              (*(int *)(iVar2 + 0x21c),uVar3,(uint)*(ushort *)(in_ECX + 0x22) * 2,&local_8,1);
    uVar6 = 0;
    if (*(short *)(in_ECX + 0x22) != 0) {
      puVar4 = *(ushort **)(in_ECX + 0x18);
      uVar5 = (uint)*(ushort *)(in_ECX + 0x22);
      do {
        uVar6 = uVar6 + *puVar4;
        puVar4 = puVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  if (*(uint *)(iVar2 + 0xd8) < 0xa000112) {
    cStack_a = '\x01';
  }
  else {
    local_8 = 1;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&cStack_a,1,&local_8,1);
    if (cStack_a == '\0') goto LAB_0072db58;
  }
  uVar3 = FUN_00401f00(-(uint)((int)((ulonglong)uVar6 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar6 * 2));
  *(undefined4 *)(in_ECX + 0x14) = uVar3;
  local_8 = 2;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),uVar3,uVar6 * 2,&local_8,1);
LAB_0072db58:
  local_8 = 1;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&cStack_9,1,&local_8,1);
  uVar6 = uStack_4;
  if (cStack_9 != '\0') {
    uVar3 = FUN_00401f00(uStack_4);
    *(undefined4 *)(in_ECX + 0x10) = uVar3;
    uStack_4 = 1;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),uVar3,uVar6,&uStack_4,1);
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_0072dbc0(int param_1)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  char cStack_b;
  char cStack_a;
  char cStack_9;
  int local_8 [2];
  
  iVar1 = param_1;
  puVar2 = (ushort *)(in_ECX + 0x1c);
  local_8[0] = 2;
  (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220),puVar2,2,local_8,1);
  local_8[0] = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x1e,2,local_8,1);
  local_8[0] = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))
            (*(int *)(iVar1 + 0x220),(ushort *)(in_ECX + 0x20),2,local_8,1);
  local_8[0] = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x22,2,local_8,1);
  local_8[0] = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x24,2,local_8,1);
  local_8[0] = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))
            (*(int *)(iVar1 + 0x220),*(undefined4 *)(in_ECX + 4),
             (uint)*(ushort *)(in_ECX + 0x20) * 2,local_8,1);
  param_1 = CONCAT31(param_1._1_3_,*(int *)(in_ECX + 0xc) != 0);
  local_8[0] = 1;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&param_1,1,local_8,1);
  if ((char)param_1 != '\0') {
    local_8[0] = 2;
    (**(code **)(*(int *)(iVar1 + 0x220) + 8))
              (*(int *)(iVar1 + 0x220),*(undefined4 *)(in_ECX + 0xc),(uint)*puVar2 * 2,local_8,1);
  }
  local_8[0] = (uint)*(ushort *)(in_ECX + 0x24) * (uint)*puVar2;
  cStack_b = *(int *)(in_ECX + 8) != 0;
  local_8[1] = 1;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&cStack_b,1,local_8 + 1,1);
  if (cStack_b != '\0') {
    local_8[1] = 4;
    (**(code **)(*(int *)(iVar1 + 0x220) + 8))
              (*(int *)(iVar1 + 0x220),*(undefined4 *)(in_ECX + 8),local_8[0] * 4,local_8 + 1,1);
  }
  if (*(ushort *)(in_ECX + 0x22) == 0) {
    iVar4 = (uint)*(ushort *)(in_ECX + 0x1e) * 3;
  }
  else {
    local_8[1] = 2;
    (**(code **)(*(int *)(iVar1 + 0x220) + 8))
              (*(int *)(iVar1 + 0x220),*(undefined4 *)(in_ECX + 0x18),
               (uint)*(ushort *)(in_ECX + 0x22) * 2,local_8 + 1,1);
    uVar3 = (uint)*(ushort *)(in_ECX + 0x22);
    iVar4 = 0;
    if (uVar3 != 0) {
      puVar2 = *(ushort **)(in_ECX + 0x18);
      do {
        iVar4 = iVar4 + (uint)*puVar2;
        puVar2 = puVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  cStack_a = *(int *)(in_ECX + 0x14) != 0;
  local_8[1] = 1;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&cStack_a,1,local_8 + 1,1);
  if (cStack_a != '\0') {
    local_8[1] = 2;
    (**(code **)(*(int *)(iVar1 + 0x220) + 8))
              (*(int *)(iVar1 + 0x220),*(undefined4 *)(in_ECX + 0x14),iVar4 * 2,local_8 + 1,1);
  }
  cStack_9 = *(int *)(in_ECX + 0x10) != 0;
  local_8[1] = 1;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&cStack_9,1,local_8 + 1,1);
  if (cStack_9 != '\0') {
    local_8[1] = 1;
    (**(code **)(*(int *)(iVar1 + 0x220) + 8))
              (*(int *)(iVar1 + 0x220),*(undefined4 *)(in_ECX + 0x10),local_8[0],local_8 + 1,1);
  }
  return;
}



void FUN_0072de70(byte param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_14;
  uint local_8;
  uint local_4;
  
  piVar4 = param_2;
  while( true ) {
    local_14 = -1;
    param_2 = (int *)0x0;
    if (piVar4[2] == 0) {
      return;
    }
    do {
      iVar1 = *(int *)(*piVar4 + (int)param_2 * 4);
      uVar9 = (int)param_2 + 1;
      if (uVar9 < (uint)piVar4[2]) {
        uVar8 = uVar9;
        do {
          iVar7 = *(int *)(*piVar4 + uVar8 * 4);
          uVar6 = FUN_0072d2b0(iVar7);
          if ((uVar6 <= param_1) &&
             (iVar7 = (*(int *)(iVar7 + 8) + *(int *)(iVar1 + 8)) - uVar6, local_14 < iVar7)) {
            local_8 = (uint)param_2;
            local_14 = iVar7;
            local_4 = uVar8;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)piVar4[2]);
      }
      param_2 = (int *)uVar9;
    } while (uVar9 < (uint)piVar4[2]);
    if (local_14 < 0) break;
    FUN_0072d330(*(undefined4 *)(*piVar4 + local_4 * 4));
    puVar2 = *(undefined4 **)(*piVar4 + local_4 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00401f20(*puVar2);
      FUN_00401f20(puVar2);
    }
    piVar4[2] = piVar4[2] + -1;
    *(undefined4 *)(*piVar4 + local_4 * 4) = *(undefined4 *)(*piVar4 + piVar4[2] * 4);
    puVar2 = *(undefined4 **)(*piVar4 + local_8 * 4);
    uVar9 = 0;
    if (piVar4[2] != 0) {
      do {
        puVar3 = *(undefined4 **)(*piVar4 + uVar9 * 4);
        if ((puVar3 == puVar2) || (cVar5 = FUN_0072cdf0(puVar3), cVar5 == '\0')) {
          uVar9 = uVar9 + 1;
        }
        else {
          if (puVar3 != (undefined4 *)0x0) {
            FUN_00401f20(*puVar3);
            FUN_00401f20(puVar3);
          }
          piVar4[2] = piVar4[2] + -1;
          *(undefined4 *)(*piVar4 + uVar9 * 4) = *(undefined4 *)(*piVar4 + piVar4[2] * 4);
        }
      } while (uVar9 < (uint)piVar4[2]);
    }
  }
  return;
}



uint FUN_0072dfb0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,char param_5)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      if ((*(char *)(uVar2 + param_4) == param_5) &&
         (cVar1 = FUN_0072d3e0(param_2,param_3), cVar1 != '\0')) {
        *(undefined1 *)(uVar2 + param_4) = 1;
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  return 0xffffffff;
}



void FUN_0072e010(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  uint *puVar4;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  uint *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009afaab;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007008a0(param_1);
  puVar1 = (uint *)(in_ECX + 8);
  local_14 = 4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),puVar1,4,&local_14,1,uVar2)
  ;
  uVar2 = *puVar1;
  uVar3 = -(uint)((int)((ulonglong)uVar2 * 0x2c >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 0x2c);
  puStack_10 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  puVar4 = (uint *)0x0;
  uStack_4 = 0;
  if (puStack_10 != (uint *)0x0) {
    puVar4 = puStack_10 + 1;
    *puStack_10 = uVar2;
    _eh_vector_constructor_iterator_(puVar4,0x2c,uVar2,FUN_0072c420,FUN_0072c450);
  }
  *(uint **)(in_ECX + 0xc) = puVar4;
  uVar2 = 0;
  uStack_4 = 0xffffffff;
  if (*puVar1 != 0) {
    do {
      FUN_0072d860(param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *puVar1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0072e190(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca618;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a803f4;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a803d4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



uint * FUN_0072e200(uint param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  uint *local_20;
  int local_1c;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca64b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar7 = -(uint)((int)((ulonglong)param_1 * 0xc >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0xc);
  puVar4 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar7) | uVar7 + 4,uVar3);
  local_4 = 0;
  if (puVar4 == (uint *)0x0) {
    local_20 = (uint *)0x0;
  }
  else {
    local_20 = puVar4 + 1;
    *puVar4 = param_1;
    _eh_vector_constructor_iterator_(local_20,0xc,param_1,FUN_0072d180,FUN_006c4090);
  }
  uVar3 = *(uint *)(param_2 + 0x40);
  uVar7 = 0;
  local_4 = 0xffffffff;
  if (uVar3 != 0) {
    local_1c = 0;
    do {
      iVar9 = *(int *)(param_2 + 0x44) + local_1c;
      uVar8 = 0;
      if (*(short *)(iVar9 + 0x48) != 0) {
        do {
          uVar1 = *(undefined4 *)(*(int *)(iVar9 + 0x44) + 4 + uVar8 * 8);
          uVar5 = (uint)*(ushort *)(*(int *)(iVar9 + 0x44) + uVar8 * 8);
          uVar2 = local_20[uVar5 * 3 + 1];
          puVar4 = local_20 + uVar5 * 3;
          if (local_20[uVar5 * 3 + 2] == uVar2) {
            if (uVar2 == 0) {
              iVar6 = 1;
            }
            else {
              iVar6 = uVar2 * 2;
            }
            FUN_0072cc50(iVar6);
          }
          uVar2 = *puVar4;
          uVar5 = puVar4[2];
          *(uint *)(uVar2 + uVar5 * 8) = uVar7;
          *(undefined4 *)(uVar2 + 4 + uVar5 * 8) = uVar1;
          puVar4[2] = puVar4[2] + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ushort *)(iVar9 + 0x48));
      }
      local_1c = local_1c + 0x4c;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  uVar3 = 0;
  puVar4 = local_20;
  if (param_1 != 0) {
    do {
      if (puVar4[2] == 0) {
        if (local_20 != (uint *)0x0) {
          _eh_vector_destructor_iterator_(local_20,0xc,local_20[-1],FUN_006c4090);
          FUN_00401f20(local_20 + -1);
        }
        local_20 = (uint *)0x0;
        break;
      }
      FUN_0072cd30();
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 3;
    } while (uVar3 < param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return local_20;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0072e390(int *param_1,byte param_2,byte param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int *unaff_FS_OFFSET;
  int local_70;
  uint local_6c;
  uint local_68;
  int *piStack_64;
  int local_60;
  undefined **local_5c;
  uint local_58;
  void *local_54;
  uint local_50;
  uint uStack_4c;
  int *piStack_48;
  int local_44;
  int local_40;
  uint local_3c;
  int *local_38;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  uint local_20;
  uint uStack_1c;
  ushort local_18 [4];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca690;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_70;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff80;
  *unaff_FS_OFFSET = (int)&local_c;
  local_3c = (uint)*(ushort *)(param_1 + 2);
  uVar10 = (uint)*(ushort *)(param_1 + 0x10);
  local_58 = 0x25;
  local_38 = param_1;
  local_60 = param_4;
  local_5c = &PTR_FUN_00a803d4;
  local_50 = 0;
  local_20 = uVar10;
  local_54 = (void *)FUN_00401f00(0x94,uVar3);
  _memset(local_54,0,local_58 * 4);
  local_5c = &PTR_FUN_00a803f4;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_4 = 1;
  FUN_00729c50(&local_44,&local_40,1);
  local_30 = 0;
  if (uVar10 != 0) {
    do {
      uVar3 = local_30;
      (**(code **)(*param_1 + 0x60))(local_30,local_18,local_18 + 1,local_18 + 2);
      if (((local_18[0] != local_18[1]) && (local_18[1] != local_18[2])) &&
         (local_18[2] != local_18[0])) {
        FUN_0072d190(&local_5c,local_18,param_4);
        uStack_1c = (uint)param_2;
        uStack_28 = local_50;
        if (uStack_1c < local_50) {
          do {
            uVar10 = 0;
            if (local_58 != 0) {
              do {
                if (*(int *)((int)local_54 + uVar10 * 4) != 0) {
                  piVar4 = *(int **)((int)local_54 + uVar10 * 4);
                  goto LAB_0072e511;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < local_58);
            }
            piVar4 = (int *)0x0;
LAB_0072e511:
            piStack_64 = (int *)0x7f7fffff;
            iStack_24 = 0;
            do {
              piStack_48 = (int *)piVar4[2];
              iVar5 = piVar4[1];
              piVar4 = (int *)*piVar4;
              if (piVar4 == (int *)0x0) {
                uVar10 = (*(code *)local_5c[1])(iVar5);
                do {
                  uVar10 = uVar10 + 1;
                  if (local_58 <= uVar10) {
                    piVar4 = (int *)0x0;
                    break;
                  }
                  piVar4 = *(int **)((int)local_54 + uVar10 * 4);
                } while (piVar4 == (int *)0x0);
              }
              if ((float)piStack_48 < (float)piStack_64) {
                piStack_64 = piStack_48;
                iStack_24 = iVar5;
              }
            } while (piVar4 != (int *)0x0);
            piStack_64 = (int *)0x0;
            do {
              uVar10 = (uint)local_18[(int)piStack_64];
              uStack_2c = uVar10;
              if (local_6c == 0) {
                FUN_006e8ca0(1);
              }
              *(uint *)(local_70 + local_68 * 4) = uVar10;
              local_68 = local_68 + 1;
              uVar3 = (uint)*(ushort *)(local_40 + uVar10 * 2);
              uStack_4c = uVar3;
              piVar4 = (int *)(local_60 + uVar10 * 0xc);
              for (; piStack_48 = piVar4, uVar3 != 0; uVar3 = uVar3 - 1) {
                uVar11 = (uint)*(ushort *)(local_44 + -2 + uVar3 * 2);
                iVar5 = FUN_00728440(uVar11,uVar10,1);
                if (iVar5 != 0) break;
                puVar1 = (undefined4 *)(local_60 + uVar11 * 0xc);
                uVar9 = piVar4[2];
                if (uVar9 == puVar1[2]) {
                  uVar8 = 0;
                  if (uVar9 != 0) {
                    piVar6 = (int *)*puVar1;
                    iVar5 = *piVar4 - (int)piVar6;
                    do {
                      uVar10 = uStack_2c;
                      if (*(int *)((int)piVar6 + iVar5) != *piVar6) goto LAB_0072e66e;
                      uVar8 = uVar8 + 1;
                      piVar6 = piVar6 + 2;
                    } while (uVar8 < uVar9);
                  }
                  if (local_68 == local_6c) {
                    if (local_6c == 0) {
                      iVar5 = 1;
                    }
                    else {
                      iVar5 = local_6c * 2;
                    }
                    FUN_006e8ca0(iVar5);
                  }
                  *(uint *)(local_70 + local_68 * 4) = uVar11;
                  local_68 = local_68 + 1;
                }
LAB_0072e66e:
                piVar4 = piStack_48;
              }
              if (uStack_4c < local_3c - 1) {
                do {
                  uVar3 = (uint)*(ushort *)(local_44 + 2 + uStack_4c * 2);
                  iVar5 = FUN_00728440(uVar3,uVar10,1);
                  if (iVar5 != 0) break;
                  piVar4 = (int *)(local_60 + uVar3 * 0xc);
                  uVar11 = piStack_48[2];
                  if (uVar11 == piVar4[2]) {
                    uVar9 = 0;
                    if (uVar11 != 0) {
                      piVar6 = (int *)*piStack_48;
                      iVar5 = *piVar4 - (int)piVar6;
                      do {
                        if (*piVar6 != *(int *)(iVar5 + (int)piVar6)) goto LAB_0072e714;
                        uVar9 = uVar9 + 1;
                        piVar6 = piVar6 + 2;
                      } while (uVar9 < uVar11);
                    }
                    if (local_68 == local_6c) {
                      if (local_6c == 0) {
                        iVar5 = 1;
                      }
                      else {
                        iVar5 = local_6c * 2;
                      }
                      FUN_006e8ca0(iVar5);
                    }
                    *(uint *)(local_70 + local_68 * 4) = uVar3;
                    local_68 = local_68 + 1;
                  }
LAB_0072e714:
                  uStack_4c = uStack_4c + 1;
                } while (uStack_4c < local_3c - 1);
              }
              uVar10 = 0;
              if (local_68 != 0) {
                do {
                  iVar2 = local_70;
                  iVar5 = *(int *)(local_70 + uVar10 * 4);
                  uVar3 = *(uint *)(local_60 + 8 + iVar5 * 0xc);
                  piVar4 = (int *)(local_60 + iVar5 * 0xc);
                  uVar11 = 0;
                  if (uVar3 != 0) {
                    piVar6 = (int *)*piVar4;
LAB_0072e753:
                    if (*piVar6 != iStack_24) goto code_r0x0072e75b;
                    if (uVar11 < uVar3 - 1) {
                      do {
                        puVar1 = (undefined4 *)(*piVar4 + uVar11 * 8);
                        *puVar1 = *(undefined4 *)(*piVar4 + 8 + uVar11 * 8);
                        puVar1[1] = puVar1[3];
                        uVar11 = uVar11 + 1;
                      } while (uVar11 < piVar4[2] - 1U);
                    }
                    piVar4[2] = piVar4[2] + -1;
                    if (piVar4[2] == 0) {
                      FUN_00401f20(local_44);
                      FUN_00401f20(local_40);
                      FUN_00401f20(iVar2);
                      local_5c = &PTR_FUN_00a803f4;
                      local_4 = 2;
                      FUN_007c2a40();
                      local_4 = 0xffffffff;
                      local_5c = &PTR_FUN_00a803d4;
                      FUN_007c2a40();
                      FUN_00401f20(local_54);
                      uVar7 = 0;
                      goto LAB_0072e8d6;
                    }
                    FUN_0072cd30();
                  }
LAB_0072e7a3:
                  uVar10 = uVar10 + 1;
                } while (uVar10 < local_68);
              }
              piStack_64 = (int *)((int)piStack_64 + 1);
              local_68 = 0;
            } while (piStack_64 < 3);
            uStack_28 = uStack_28 - 1;
            uVar3 = local_30;
            param_4 = local_60;
            uVar10 = local_20;
            param_1 = local_38;
            if (uStack_28 == uStack_1c) break;
            FUN_007c2a40();
            FUN_0072d190(&local_5c,local_18,local_60);
          } while( true );
        }
        FUN_007c2a40();
      }
      local_30 = uVar3 + 1;
    } while (local_30 < uVar10);
  }
  if (local_3c != 0) {
    puVar12 = (uint *)(param_4 + 8);
    uVar10 = local_3c;
    do {
      if ((uint)param_3 < *puVar12) {
        _qsort((void *)puVar12[-2],*puVar12,8,FUN_0072c3b0);
        *puVar12 = (uint)param_3;
        FUN_0072cd30();
      }
      puVar12 = puVar12 + 3;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_00401f20(local_44);
  FUN_00401f20(local_40);
  FUN_00401f20(local_70);
  local_5c = &PTR_FUN_00a803f4;
  local_4 = 3;
  FUN_007c2a40();
  local_4 = 0xffffffff;
  local_5c = &PTR_FUN_00a803d4;
  FUN_007c2a40();
  FUN_00401f20(local_54);
  uVar7 = 1;
LAB_0072e8d6:
  *unaff_FS_OFFSET = local_c;
  return uVar7;
code_r0x0072e75b:
  uVar11 = uVar11 + 1;
  piVar6 = piVar6 + 2;
  if (uVar3 <= uVar11) goto LAB_0072e7a3;
  goto LAB_0072e753;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_0072e960(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  short sVar2;
  uint uVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  uint uVar11;
  int *unaff_FS_OFFSET;
  undefined1 auStack_34 [4];
  uint local_30;
  uint uStack_2c;
  int *local_28;
  int *local_24;
  uint uStack_20;
  uint local_1c;
  ushort local_18 [4];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca6cb;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_34;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_24 = param_3;
  local_1c = (uint)*(ushort *)(param_1 + 0x10);
  local_28 = param_1;
  local_30 = 0;
  if (local_1c != 0) {
    do {
      (**(code **)(*param_1 + 0x60))(local_30,local_18,local_18 + 1,local_18 + 2,uVar6);
      if (((local_18[0] != local_18[1]) && (local_18[1] != local_18[2])) &&
         (local_18[2] != local_18[0])) {
        piVar7 = (int *)FUN_00401f00(0xc);
        if (piVar7 == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          *piVar7 = 0;
          piVar7[1] = 0;
          piVar7[2] = 0;
        }
        uStack_4 = 0xffffffff;
        uStack_2c = 0;
        do {
          piVar1 = (int *)(param_2 + (uint)local_18[uStack_2c] * 0xc);
          uStack_20 = piVar1[2];
          uVar11 = 0;
          if (uStack_20 != 0) {
            do {
              sVar2 = *(short *)(*piVar1 + uVar11 * 8);
              uVar3 = piVar7[2];
              uVar8 = 0;
              if (uVar3 != 0) {
                psVar10 = (short *)*piVar7;
                do {
                  if (*psVar10 == sVar2) {
                    if (uVar8 != 0xffffffff) goto LAB_0072ea95;
                    break;
                  }
                  uVar8 = uVar8 + 1;
                  psVar10 = psVar10 + 1;
                } while (uVar8 < uVar3);
              }
              uVar8 = piVar7[1];
              if (uVar3 == uVar8) {
                if (uVar8 == 0) {
                  iVar9 = 1;
                }
                else {
                  iVar9 = uVar8 * 2;
                }
                FUN_0072ccc0(iVar9);
              }
              *(short *)(*piVar7 + piVar7[2] * 2) = sVar2;
              piVar7[2] = piVar7[2] + 1;
LAB_0072ea95:
              uVar11 = uVar11 + 1;
            } while (uVar11 < uStack_20);
          }
          uStack_2c = uStack_2c + 1;
        } while (uStack_2c < 3);
        _qsort((void *)*piVar7,piVar7[2],2,FUN_0072c400);
        piVar1 = local_24;
        uVar11 = 0;
        if (local_24[2] != 0) {
          do {
            puVar4 = *(undefined4 **)(*piVar1 + uVar11 * 4);
            cVar5 = FUN_0072cdf0(piVar7);
            if (cVar5 != '\0') {
              FUN_00401f20(*piVar7);
              FUN_00401f20(piVar7);
              break;
            }
            cVar5 = FUN_0072cdf0(puVar4);
            if (cVar5 == '\0') {
              uVar11 = uVar11 + 1;
            }
            else {
              if (puVar4 != (undefined4 *)0x0) {
                FUN_00401f20(*puVar4);
                FUN_00401f20(puVar4);
              }
              piVar1[2] = piVar1[2] + -1;
              *(undefined4 *)(*piVar1 + uVar11 * 4) = *(undefined4 *)(*piVar1 + piVar1[2] * 4);
            }
          } while (uVar11 < (uint)piVar1[2]);
        }
        param_1 = local_28;
        if (uVar11 == piVar1[2]) {
          uVar11 = piVar1[1];
          if (piVar1[2] == uVar11) {
            if (uVar11 == 0) {
              iVar9 = 1;
            }
            else {
              iVar9 = uVar11 * 2;
            }
            FUN_006e8ca0(iVar9);
          }
          *(int **)(*piVar1 + piVar1[2] * 4) = piVar7;
          piVar1[2] = piVar1[2] + 1;
          param_1 = local_28;
        }
      }
      local_30 = local_30 + 1;
    } while (local_30 < local_1c);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0072eba0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5
                 ,int *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_1c;
  int local_18;
  int *local_14;
  int local_10;
  short local_c;
  short local_a;
  short local_8 [2];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_1c;
  local_1c = (uint)*(ushort *)(param_1 + 0x10);
  local_14 = param_6;
  FUN_0072e960(param_1,param_4,param_5);
  FUN_0072de70(param_3,param_5);
  iVar1 = FUN_00401f00(-(uint)((int)((ulonglong)local_1c * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)local_1c * 4));
  *local_14 = iVar1;
  local_18 = FUN_00401f00(param_5[2]);
  uVar2 = 0;
  if (param_5[2] != 0) {
    do {
      *(undefined1 *)(uVar2 + local_18) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_5[2]);
  }
  uVar2 = 0;
  if (local_1c != 0) {
    do {
      (**(code **)(*param_1 + 0x60))(uVar2,&local_c,&local_a,local_8);
      if (((local_c == local_a) || (local_a == local_8[0])) || (local_8[0] == local_c)) {
        *(undefined4 *)(*local_14 + uVar2 * 4) = 0xffffffff;
      }
      else {
        iVar1 = FUN_0072dfb0(param_5,&local_c,param_4,local_18,1);
        if (iVar1 < 0) {
          iVar1 = FUN_0072dfb0(param_5,&local_c,param_4,local_18,0);
        }
        *(int *)(*local_14 + uVar2 * 4) = iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < local_1c);
  }
  uVar2 = 0;
  if (param_5[2] != 0) {
    do {
      if (*(char *)(uVar2 + local_18) == '\0') {
        param_5[2] = param_5[2] + -1;
        *(undefined4 *)(*param_5 + uVar2 * 4) = *(undefined4 *)(*param_5 + param_5[2] * 4);
        iVar1 = param_5[2];
        uVar3 = 0;
        if (local_1c != 0) {
          do {
            if (*(int *)(*local_14 + uVar3 * 4) == iVar1) {
              *(uint *)(*local_14 + uVar3 * 4) = uVar2;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < local_1c);
        }
      }
      else {
        uVar2 = uVar2 + 1;
      }
    } while (uVar2 < (uint)param_5[2]);
  }
  *(int *)(local_10 + 8) = param_5[2];
  FUN_00401f20(local_18);
  return;
}



char FUN_0072ed50(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  int in_ECX;
  uint uVar6;
  int *unaff_FS_OFFSET;
  uint *local_34;
  undefined4 local_2c;
  uint *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18 [4];
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ca71b;
  local_18[3] = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)(local_18 + 3);
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_4 = 0;
  pvVar5 = (void *)FUN_0072e200(*(undefined2 *)(param_1 + 8),param_2);
  if (pvVar5 == (void *)0x0) {
    FUN_00401f20(0);
    cVar3 = '\0';
  }
  else {
    cVar3 = FUN_0072e390(param_1,param_3,param_4,pvVar5);
    if (cVar3 != '\0') {
      FUN_0072eba0(param_1,param_2,param_3,pvVar5,local_18,&local_2c);
      uVar1 = *(uint *)(in_ECX + 8);
      uVar6 = -(uint)((int)((ulonglong)uVar1 * 0x2c >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 0x2c)
      ;
      local_28 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar6) | uVar6 + 4,uVar4);
      local_4._0_1_ = 1;
      if (local_28 == (uint *)0x0) {
        local_34 = (uint *)0x0;
      }
      else {
        local_34 = local_28 + 1;
        *local_28 = uVar1;
        _eh_vector_constructor_iterator_(local_34,0x2c,uVar1,FUN_0072c420,FUN_0072c450);
      }
      uVar4 = 0;
      local_24 = 0;
      local_28 = (uint *)CONCAT31(local_28._1_3_,(char)param_3 != (char)param_4);
      local_20 = 0;
      local_1c = 0;
      local_4._0_1_ = 2;
      if (*(int *)(in_ECX + 8) != 0) {
        do {
          FUN_0072d420(uVar4,local_2c,*(undefined2 *)(param_1 + 0x40));
          puVar2 = *(undefined4 **)(local_18[0] + uVar4 * 4);
          FUN_0072d480(&local_24,puVar2,param_1,pvVar5,local_28,param_5,param_4,
                       *(undefined4 *)(param_2 + 0x40));
          local_1c = 0;
          if (puVar2 != (undefined4 *)0x0) {
            FUN_00401f20(*puVar2);
            FUN_00401f20(puVar2);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(in_ECX + 8));
      }
      FUN_00401f20(local_2c);
      *(uint **)(in_ECX + 0xc) = local_34;
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00401f20(local_24);
    }
    _eh_vector_destructor_iterator_(pvVar5,0xc,*(int *)((int)pvVar5 + -4),FUN_006c4090);
    FUN_00401f20((int)pvVar5 + -4);
    FUN_00401f20(local_18[0]);
  }
  *unaff_FS_OFFSET = local_18[3];
  return cVar3;
}



void FUN_0072ef70(byte param_1)

{
  FUN_0072e190();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0072ef90(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined2 *)(in_ECX + 0x48) = 0;
  return;
}



void FUN_0072efa0(void)

{
  undefined2 *in_ECX;
  
  *in_ECX = 0;
  return;
}



void FUN_0072efb0(void)

{
  int in_ECX;
  uint uVar1;
  int iVar2;
  
  if ((*(int *)(in_ECX + 0x44) != 0) && (uVar1 = 0, *(int *)(in_ECX + 0x40) != 0)) {
    iVar2 = 0;
    do {
      FUN_00401f20(*(undefined4 *)(iVar2 + 0x44 + *(int *)(in_ECX + 0x44)));
      *(undefined4 *)(iVar2 + 0x44 + *(int *)(in_ECX + 0x44)) = 0;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x4c;
    } while (uVar1 < *(uint *)(in_ECX + 0x40));
  }
  return;
}



uint FUN_0072eff0(int param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int in_ECX;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  uint local_8;
  
  uVar5 = FUN_00700670(param_1);
  if ((((char)uVar5 == '\0') || (uVar5 = FUN_00718b20(param_1 + 0xc), (char)uVar5 != '\0')) ||
     (uVar5 = *(uint *)(in_ECX + 0x40), uVar5 != *(uint *)(param_1 + 0x40))) {
    return uVar5 & 0xffffff00;
  }
  iVar8 = 0;
  local_8 = 0;
  if (uVar5 == 0) {
    return 1;
  }
  while( true ) {
    iVar9 = *(int *)(in_ECX + 0x44) + iVar8;
    iVar10 = *(int *)(param_1 + 0x44) + iVar8;
    uVar5 = FUN_00718b20(iVar10);
    if (((char)uVar5 != '\0') || (uVar5 = FUN_0072a0a0(iVar10 + 0x34), (char)uVar5 == '\0')) break;
    uVar3 = *(ushort *)(iVar9 + 0x48);
    uVar5 = (uint)uVar3;
    if (uVar3 != *(ushort *)(iVar10 + 0x48)) break;
    uVar7 = 0;
    if (uVar3 != 0) {
      iVar9 = *(int *)(iVar9 + 0x44);
      puVar6 = *(ushort **)(iVar10 + 0x44);
      pfVar11 = (float *)(iVar9 + 4);
      iVar9 = iVar9 - (int)puVar6;
      do {
        uVar4 = *(ushort *)(iVar9 + (int)puVar6);
        uVar5 = (uint)uVar4;
        if (uVar4 != *puVar6) goto LAB_0072f0db;
        fVar1 = *pfVar11;
        fVar2 = *(float *)(puVar6 + 2);
        uVar5 = (uint)(ushort)((ushort)(fVar2 < fVar1) << 8 |
                               (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                              (ushort)(fVar2 == fVar1) << 0xe);
        if (fVar2 != fVar1) goto LAB_0072f0db;
        uVar7 = uVar7 + 1;
        pfVar11 = pfVar11 + 2;
        puVar6 = puVar6 + 4;
      } while (uVar7 < uVar3);
    }
    local_8 = local_8 + 1;
    iVar8 = iVar8 + 0x4c;
    if (*(uint *)(in_ECX + 0x40) <= local_8) {
      return CONCAT31((int3)(local_8 >> 8),1);
    }
  }
LAB_0072f0db:
  return uVar5 & 0xffffff00;
}



void FUN_0072f0f0(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  uint uVar4;
  
  if (param_1 != in_ECX[1]) {
    if (param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 0xc >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 0xc));
      uVar4 = 0;
      if (in_ECX[2] != 0) {
        iVar3 = 0;
        do {
          iVar2 = *in_ECX + iVar3;
          *(undefined4 *)(iVar3 + iVar1) = *(undefined4 *)(*in_ECX + iVar3);
          *(undefined4 *)(iVar3 + 4 + iVar1) = *(undefined4 *)(iVar2 + 4);
          *(undefined4 *)(iVar3 + 8 + iVar1) = *(undefined4 *)(iVar2 + 8);
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0xc;
        } while (uVar4 < (uint)in_ECX[2]);
      }
    }
    FUN_00401f20(*in_ECX);
    *in_ECX = iVar1;
    in_ECX[1] = param_1;
  }
  return;
}



void FUN_0072f180(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca4b8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a80424;
  local_4 = 0;
  FUN_0072efb0(uVar2);
  FUN_00401f20(in_ECX[0x11]);
  puVar1 = (undefined4 *)in_ECX[2];
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



undefined4 * FUN_0072f210(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x48,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007005d0();
    *puVar2 = &PTR_FUN_00a80424;
    puVar2[2] = 0;
    puVar2[0x11] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_0072f2d0(byte param_1)

{
  FUN_0072f180();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0072f2f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  uint local_1c;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca748;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  local_1c = 0;
  if (*(int *)(in_ECX + 0x40) != 0) {
    iVar7 = 0;
    do {
      local_10 = 0;
      iVar4 = 0;
      iVar5 = *(int *)(in_ECX + 0x44);
      uVar6 = 0;
      if (*(short *)(iVar7 + 0x48 + iVar5) != 0) {
        do {
          puVar2 = (undefined4 *)
                   (param_1 + (uint)*(ushort *)(*(int *)(iVar7 + 0x44 + iVar5) + uVar6 * 8) * 0xc);
          if (local_10 == 0) {
            FUN_0072f0f0(1);
          }
          puVar1 = (undefined4 *)(local_10 * 0xc);
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          puVar1[2] = puVar2[2];
          iVar5 = *(int *)(in_ECX + 0x44);
          iVar4 = local_10 + 1;
          uVar6 = uVar6 + 1;
          local_10 = iVar4;
        } while (uVar6 < *(ushort *)(iVar7 + 0x48 + iVar5));
      }
      FUN_0072a0f0(iVar4,0);
      iVar5 = iVar7 + *(int *)(in_ECX + 0x44);
      FUN_0072a820(iVar5 + 0x34,iVar5);
      local_1c = local_1c + 1;
      iVar7 = iVar7 + 0x4c;
    } while (local_1c < *(uint *)(in_ECX + 0x40));
  }
  FUN_00401f20(0,uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0072f420(int param_1)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_228 [3];
  char cStack_225;
  uint local_224;
  undefined1 *puStack_220;
  int iStack_21c;
  undefined1 uStack_215;
  int local_214;
  char acStack_210 [512];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca77e;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_228;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffdc8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_214 = in_ECX;
  FUN_007008a0(param_1);
  FUN_00718b70(param_1);
  local_224 = 4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))
            (*(int *)(param_1 + 0x21c),(uint *)(in_ECX + 0x40),4,&local_224,1,uVar4);
  uVar4 = *(uint *)(in_ECX + 0x40);
  lVar2 = (ulonglong)uVar4 * 0x4c;
  puVar5 = (undefined1 *)FUN_00401f00(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  uStack_4 = 0;
  puStack_220 = puVar5;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    _vector_constructor_iterator_(puVar5,0x4c,uVar4,FUN_0072ef90);
  }
  *(undefined1 **)(in_ECX + 0x44) = puVar5;
  uStack_4 = 0xffffffff;
  if ((0x4000000 < *(uint *)(param_1 + 0xd8)) && (*(uint *)(param_1 + 0xd8) < 0xa010065)) {
    FUN_00712a20();
  }
  if (*(uint *)(param_1 + 0xd8) < 0x401000d) {
    cStack_225 = '\x01';
  }
  else {
    local_224 = 1;
    (**(code **)(*(int *)(param_1 + 0x21c) + 4))
              (*(int *)(param_1 + 0x21c),&cStack_225,1,&local_224,1);
  }
  if (((*(uint *)(param_1 + 0xdc) < 0xb) && (*(int *)(param_1 + 0x380) == 0)) &&
     (*(int *)(in_ECX + 0x40) != 0)) {
    iVar6 = __stricmp((char *)(param_1 + 0xe0),"Meshes\\Creatures\\Rat\\mange.NIF");
    if (iVar6 != 0) {
      FUN_00711fb0(3);
      if (*(char *)(param_1 + 8) == '\0') {
        _sprintf(acStack_210,"%s contains old skin info and needs to be re-exported.",
                 (char *)(param_1 + 0xe0));
      }
      else {
        _sprintf(acStack_210,"%s: %s contains old skin info and needs to be re-exported.",
                 param_1 + 8);
      }
      if (PTR_FUN_00b27e60 != (undefined *)0x0) {
        (*(code *)PTR_FUN_00b27e60)(acStack_210,"Old Version",0);
      }
    }
  }
  local_224 = 0;
  if (*(int *)(in_ECX + 0x40) != 0) {
    iStack_21c = 0;
    do {
      iVar6 = *(int *)(in_ECX + 0x44) + iStack_21c;
      FUN_00718b70(param_1);
      FUN_00716ea0(param_1);
      puStack_220 = &DAT_00000002;
      (**(code **)(*(int *)(param_1 + 0x21c) + 4))
                (*(int *)(param_1 + 0x21c),(ushort *)(iVar6 + 0x48),2,&puStack_220,1);
      if (cStack_225 == '\0') {
        *(undefined4 *)(iVar6 + 0x44) = 0;
      }
      else {
        uVar4 = (uint)*(ushort *)(iVar6 + 0x48);
        puVar7 = (undefined2 *)FUN_00401f00(uVar4 * 8);
        puVar3 = puVar7;
        if (puVar7 == (undefined2 *)0x0) {
          puVar7 = (undefined2 *)0x0;
        }
        else {
          while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
            *puVar3 = 0;
            puVar3 = puVar3 + 4;
          }
        }
        uVar4 = 0;
        *(undefined2 **)(iVar6 + 0x44) = puVar7;
        if (*(short *)(iVar6 + 0x48) != 0) {
          do {
            iVar1 = *(int *)(iVar6 + 0x44) + uVar4 * 8;
            puStack_220 = (undefined1 *)0x2;
            (**(code **)(*(int *)(param_1 + 0x21c) + 4))
                      (*(int *)(param_1 + 0x21c),iVar1,2,&puStack_220,1);
            puStack_220 = &DAT_00000004;
            (**(code **)(*(int *)(param_1 + 0x21c) + 4))
                      (*(int *)(param_1 + 0x21c),iVar1 + 4,4,&puStack_220,1);
            uVar4 = uVar4 + 1;
            in_ECX = local_214;
          } while (uVar4 < *(ushort *)(iVar6 + 0x48));
        }
      }
      iStack_21c = iStack_21c + 0x4c;
      local_224 = local_224 + 1;
    } while (local_224 < *(uint *)(in_ECX + 0x40));
  }
  if (*(int *)(param_1 + 0xd8) == 0x4010009) {
    iStack_21c = 1;
    (**(code **)(*(int *)(param_1 + 0x21c) + 4))
              (*(int *)(param_1 + 0x21c),&uStack_215,1,&iStack_21c,1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_0072f750(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_ECX;
  uint uVar3;
  int iVar4;
  int iStack_10;
  uint local_c [3];
  
  iVar2 = param_1;
  local_c[2] = in_ECX;
  FUN_0068f970(param_1);
  FUN_00718bb0(iVar2);
  local_c[0] = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))
            (*(int *)(iVar2 + 0x220),(int *)(in_ECX + 0x40),4,local_c,1);
  param_1 = CONCAT31(param_1._1_3_,*(int *)(*(int *)(in_ECX + 0x44) + 0x44) != 0);
  local_c[0] = 1;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),&param_1,1,local_c,1);
  local_c[0] = 0;
  if (*(int *)(in_ECX + 0x40) != 0) {
    iStack_10 = 0;
    do {
      iVar4 = *(int *)(in_ECX + 0x44) + iStack_10;
      FUN_00718bb0(iVar2);
      FUN_00716ee0(iVar2);
      local_c[1] = 2;
      (**(code **)(*(int *)(iVar2 + 0x220) + 8))
                (*(int *)(iVar2 + 0x220),iVar4 + 0x48,2,local_c + 1,1);
      if (((char)param_1 != '\0') && (uVar3 = 0, *(short *)(iVar4 + 0x48) != 0)) {
        do {
          iVar1 = *(int *)(iVar4 + 0x44) + uVar3 * 8;
          local_c[1] = 2;
          (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar1,2,local_c + 1,1);
          local_c[1] = 4;
          (**(code **)(*(int *)(iVar2 + 0x220) + 8))
                    (*(int *)(iVar2 + 0x220),iVar1 + 4,4,local_c + 1,1);
          uVar3 = uVar3 + 1;
          in_ECX = local_c[2];
        } while (uVar3 < *(ushort *)(iVar4 + 0x48));
      }
      iStack_10 = iStack_10 + 0x4c;
      local_c[0] = local_c[0] + 1;
    } while (local_c[0] < *(uint *)(in_ECX + 0x40));
  }
  return;
}



void FUN_0072f8a0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7c3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar1);
  *in_ECX = &PTR_FUN_00a80424;
  in_ECX[2] = 0;
  puVar3 = in_ECX + 3;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0x11] = param_2;
  local_4 = 1;
  in_ECX[0x10] = param_1;
  FUN_0072f2f0(param_4);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0072f930(undefined4 param_1,float param_2)

{
  float *in_ECX;
  
  FUN_00714c40(param_2 * *in_ECX,in_ECX[1] * param_2,in_ECX[2] * param_2,param_2 * in_ECX[3]);
  return param_1;
}



undefined4 FUN_0072f990(undefined4 param_1,float param_2,float *param_3)

{
  FUN_00714c40(param_2 * *param_3,param_3[1] * param_2,param_3[2] * param_2,param_2 * param_3[3]);
  return param_1;
}



undefined4 FUN_0072f9f0(undefined4 param_1,int param_2)

{
  float10 fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)FUN_00982c30();
  fVar4 = (float10)(float)fVar3;
  fVar1 = (float10)fcos(fVar4);
  fVar4 = (float10)fsin(fVar4);
  if (0.001 <= ABS((float)fVar4)) {
    fVar2 = (float)fVar4 / (float)fVar3;
  }
  else {
    fVar2 = 1.0;
  }
  FUN_00714c40((float)fVar1,fVar2 * *(float *)(param_2 + 4),fVar2 * *(float *)(param_2 + 8),
               fVar2 * *(float *)(param_2 + 0xc));
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0072fac0(void)

{
  float fVar1;
  float *in_ECX;
  float local_4;
  
  fVar1 = *in_ECX * *in_ECX + in_ECX[3] * in_ECX[3] + in_ECX[1] * in_ECX[1] + in_ECX[2] * in_ECX[2];
  local_4 = _DAT_00b3ff38 + _DAT_00b3ff34 * (fVar1 - 0.959066);
  if ((fVar1 < 0.915212 != (fVar1 == 0.915212)) &&
     (local_4 = local_4 * ((local_4 * local_4 * fVar1 - 0.959066) * _DAT_00b3ff34 + _DAT_00b3ff38),
     fVar1 <= 0.6521197)) {
    local_4 = local_4 * ((local_4 * local_4 * fVar1 - 0.959066) * _DAT_00b3ff34 + _DAT_00b3ff38);
  }
  in_ECX[1] = local_4 * in_ECX[1];
  in_ECX[2] = local_4 * in_ECX[2];
  in_ECX[3] = in_ECX[3] * local_4;
  *in_ECX = local_4 * *in_ECX;
  return;
}



float10 FUN_0072fba0(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = 1.0 - param_2 * 0.8227969;
  fVar1 = fVar1 * fVar1 * 0.5854922;
  return (float10)((((param_1 + param_1) - 3.0) * param_1 * fVar1 + 1.0 + fVar1) * param_1);
}



undefined4 FUN_0072fc00(undefined4 param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = param_3[3] * param_4[3] +
          param_3[2] * param_4[2] + param_3[1] * param_4[1] + *param_3 * *param_4;
  if (param_2 < 0.5 == (param_2 == 0.5)) {
    fVar2 = (float10)FUN_0072fba0(1.0 - param_2,fVar1);
    fVar2 = (float10)1 - fVar2;
  }
  else {
    fVar2 = (float10)FUN_0072fba0(param_2,fVar1);
  }
  fVar1 = (float)fVar2;
  FUN_00714c40(*param_3 + (*param_4 - *param_3) * fVar1,
               param_3[1] + fVar1 * (param_4[1] - param_3[1]),
               param_3[2] + fVar1 * (param_4[2] - param_3[2]),
               fVar1 * (param_4[3] - param_3[3]) + param_3[3]);
  FUN_0072fac0();
  return param_1;
}



void FUN_0072fd30(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007009a0(param_1);
  param_1 = FUN_0070f910(DAT_00b3ff3c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined4 FUN_0072fd80(float *param_1)

{
  char cVar1;
  float *in_ECX;
  
  if (((param_1[2] == in_ECX[2]) && (*param_1 == *in_ECX)) && (param_1[1] == in_ECX[1])) {
    cVar1 = FUN_004b9d10(param_1 + 3);
    if ((cVar1 == '\0') && (in_ECX[0x11] == param_1[0x11])) {
      cVar1 = FUN_004b9d10(param_1 + 5);
      if (cVar1 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



void FUN_0072fdf0(void)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  float10 fVar3;
  float local_4;
  
  fVar3 = (float10)FUN_00986000();
  fVar1 = (float)fVar3;
  fVar3 = (float10)FUN_00986300();
  fVar2 = (float)fVar3;
  if (in_ECX[0x11] == 0.0) {
    in_ECX[8] = fVar1 * in_ECX[3];
    in_ECX[0xb] = fVar2 * in_ECX[3];
    in_ECX[0xe] = 0.0;
    in_ECX[9] = -fVar2 * in_ECX[4];
    in_ECX[0xc] = in_ECX[4] * fVar1;
    in_ECX[0xf] = 0.0;
    local_4 = in_ECX[6] + fVar2 * (*in_ECX - in_ECX[5]) + fVar1 * (in_ECX[1] - in_ECX[6]);
    fVar1 = (in_ECX[1] - in_ECX[6]) * -fVar2 + fVar1 * (*in_ECX - in_ECX[5]);
  }
  else {
    if (in_ECX[0x11] != 1.4013e-45) goto LAB_0072ff32;
    in_ECX[8] = fVar1 * in_ECX[3];
    in_ECX[0xb] = -fVar2 * in_ECX[4];
    in_ECX[0xe] = 0.0;
    in_ECX[9] = in_ECX[3] * fVar2;
    in_ECX[0xc] = in_ECX[4] * fVar1;
    in_ECX[0xf] = 0.0;
    local_4 = (fVar1 * (in_ECX[1] - in_ECX[6]) - fVar2 * (-in_ECX[5] - *in_ECX)) * in_ECX[4] +
              in_ECX[6];
    fVar1 = ((-in_ECX[5] - *in_ECX) * fVar1 + (in_ECX[1] - in_ECX[6]) * fVar2) * in_ECX[3];
  }
  in_ECX[10] = fVar1 + in_ECX[5];
  in_ECX[0xd] = local_4;
  in_ECX[0x10] = 1.0;
LAB_0072ff32:
  *(undefined1 *)(in_ECX + 7) = 0;
  return;
}



void FUN_0072ff40(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  uVar1 = param_1[1];
  in_ECX[2] = param_2;
  in_ECX[1] = uVar1;
  in_ECX[3] = *param_3;
  in_ECX[4] = param_3[1];
  in_ECX[5] = *param_4;
  in_ECX[6] = param_4[1];
  in_ECX[0x11] = param_5;
  FUN_0072fdf0();
  return;
}



void FUN_0072ff90(int param_1)

{
  int iVar1;
  int in_ECX;
  int iStack_4;
  
  iVar1 = param_1;
  iStack_4 = in_ECX;
  FUN_00714ba0(param_1);
  FUN_00714ba0(iVar1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 8,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&iStack_4,4,&param_1,1);
  *(int *)(in_ECX + 0x44) = iStack_4;
  FUN_00714ba0(iVar1);
  *(undefined1 *)(in_ECX + 0x1c) = 1;
  return;
}


