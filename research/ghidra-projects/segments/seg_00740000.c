
void FUN_00740010(undefined4 param_1)

{
  FUN_0073f460(param_1);
  FUN_00712a20();
  return;
}



void FUN_00740040(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cae2e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0073ee80(uVar2);
  *in_ECX = &PTR_FUN_00a817dc;
  in_ECX[0x17] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar3 = FUN_00401f00(0xdc);
  local_4._0_1_ = 2;
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_0070b780(0);
  }
  puVar1 = (undefined4 *)in_ECX[0x17];
  local_4 = CONCAT31(local_4._1_3_,1);
  if (puVar1 != puVar4) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0x17] = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  *(undefined1 *)(in_ECX + 0x18) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00740110(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009cae63;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a817dc;
  puVar1 = (undefined4 *)in_ECX[0x17];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x17] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x17];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0073eec0(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0074036b) */

void FUN_00740240(short param_1)

{
  code *pcVar1;
  short sVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  undefined4 *unaff_EBX;
  undefined4 *unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_18;
  int local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b23e8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  pcVar1 = *(code **)(**(int **)(in_ECX + 0x5c) + 0x8c);
  sVar2 = *(short *)(in_ECX + 0x48) + -1;
  if (param_1 == sVar2) {
    (*pcVar1)(local_14,sVar2,uVar3);
    if (((unaff_EBX != (undefined4 *)0x0) &&
        (LVar4 = InterlockedDecrement(unaff_EBX + 1), LVar4 == 0)) &&
       (unaff_EBX != (undefined4 *)0x0)) {
      (**(code **)*unaff_EBX)(1);
    }
  }
  else {
    (*pcVar1)(&local_18,sVar2,uVar3);
    local_c = 0;
    (**(code **)(**(int **)(in_ECX + 0x5c) + 0x8c))(&stack0xffffffe4,param_1);
    if (((unaff_ESI != (undefined4 *)0x0) &&
        (LVar4 = InterlockedDecrement(unaff_ESI + 1), LVar4 == 0)) &&
       (unaff_ESI != (undefined4 *)0x0)) {
      (**(code **)*unaff_ESI)(1);
    }
    (**(code **)(**(int **)(in_ECX + 0x5c) + 0x90))(&stack0xffffffe0,param_1,unaff_EDI);
    if (((local_18 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(local_18 + 1), LVar4 == 0)
        ) && (local_18 != (undefined4 *)0x0)) {
      (**(code **)*local_18)(1);
    }
    if (((unaff_EBP != (undefined4 *)0x0) &&
        (LVar4 = InterlockedDecrement(unaff_EBP + 1), LVar4 == 0)) &&
       (unaff_EBP != (undefined4 *)0x0)) {
      (**(code **)*unaff_EBP)(1);
    }
    local_c = -1;
  }
  FUN_0073efb0(uStack_4);
  *unaff_FS_OFFSET = local_14[0];
  return;
}



void FUN_007403b0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  uVar4 = 0;
  if (*(short *)(in_ECX + 0x48) != 0) {
    do {
      if ((uVar4 < *(ushort *)(*(int *)(in_ECX + 0x5c) + 0xb6)) &&
         (iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0x5c) + 0xb0) + uVar4 * 4), iVar1 != 0)) {
        iVar2 = *(int *)(in_ECX + 0x1c) + iVar3;
        *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(*(int *)(in_ECX + 0x1c) + iVar3);
        *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar2 + 4);
        *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(iVar2 + 8);
        if (*(int *)(in_ECX + 0x50) != 0) {
          FUN_0047c600(iVar1 + 0x30);
        }
        *(float *)(iVar1 + 0x60) =
             ABS(*(float *)(*(int *)(in_ECX + 0x4c) + uVar4 * 4) *
                 *(float *)(*(int *)(in_ECX + 0x44) + uVar4 * 4));
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar4 < *(ushort *)(in_ECX + 0x48));
  }
  return;
}



void FUN_00740460(void)

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
  local_10 = FUN_00401f00(100,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    iVar2 = FUN_00740040();
    *(undefined1 *)(iVar2 + 0x40) = 1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  uRam00000040 = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007405b0(byte param_1)

{
  FUN_00740110();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007405d0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0073fb80(param_1);
  param_1 = FUN_0070f910(DAT_00b401dc);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined4 * FUN_00740680(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(200,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00741fa0();
    *puVar2 = &PTR_FUN_00a8183c;
    *(undefined1 *)(puVar2 + 0x31) = 1;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void thunk_FUN_00723440(void)

{
  thunk_FUN_00723440();
  return;
}



void FUN_00740700(byte param_1)

{
  FUN_00722850();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00740720(void)

{
  int *piVar1;
  code *pcVar2;
  int in_ECX;
  int iVar3;
  int unaff_EBX;
  int *piVar4;
  int *piVar5;
  
  FUN_0070c120();
  piVar1 = *(int **)(*(int *)(in_ECX + 0xb4) + 0x5c);
  FUN_007403b0();
  piVar4 = (int *)(in_ECX + 100);
  piVar5 = piVar1 + 0xc;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  piVar1[0x15] = *(int *)(in_ECX + 0x88);
  piVar1[0x16] = *(int *)(in_ECX + 0x8c);
  piVar1[0x17] = *(int *)(in_ECX + 0x90);
  pcVar2 = *(code **)(*piVar1 + 0x60);
  piVar1[0x18] = (int)ABS(*(float *)(in_ECX + 0x94));
  (*pcVar2)(*(undefined4 *)(in_ECX + 0xc0),0);
  if (*(char *)(unaff_EBX + 0x60) != '\0') {
    FUN_00707610();
    FUN_00707980();
    *(undefined1 *)(unaff_EBX + 0x60) = 0;
  }
  return;
}



void FUN_007407c0(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  ushort *puVar1;
  int *piVar2;
  int in_ECX;
  
  FUN_00722f00(param_1,1,param_3);
  piVar2 = *(int **)(*(int *)(in_ECX + 0xb4) + 0x5c);
  (**(code **)(*piVar2 + 0x5c))(param_1,1,param_3);
  *param_3 = 0;
  puVar1 = (ushort *)(piVar2 + 6);
  *puVar1 = *puVar1 & 0xffef;
  return;
}



undefined4 * FUN_007408a0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(200,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00741fa0();
    *puVar2 = &PTR_FUN_00a8183c;
    *(undefined1 *)(puVar2 + 0x31) = 1;
  }
  local_4 = 0xffffffff;
  thunk_FUN_00723020(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_00740930(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007421b0(param_1);
  param_1 = FUN_0070f910(DAT_00b4021c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00740990(int param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ECX;
  
  FUN_007214a0(param_1,param_2);
  if ((*(int *)(in_ECX + 0x10) == 0) || (*(int *)(in_ECX + 0xc) == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
    lVar1 = (ulonglong)*(uint *)(in_ECX + 0xc) * 4;
    uVar2 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    uVar3 = 0;
    if (*(int *)(in_ECX + 0xc) != 0) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar3 * 4) =
             *(undefined4 *)(*(int *)(in_ECX + 0x10) + uVar3 * 4);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(in_ECX + 0xc));
      return;
    }
  }
  return;
}



undefined4 * FUN_00740a10(void)

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
    *puVar2 = &PTR_FUN_00a818dc;
    puVar2[4] = 0;
    puVar2[3] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



uint FUN_00740a90(int param_1)

{
  uint uVar1;
  int *in_EAX;
  int in_ECX;
  uint uVar2;
  int iVar3;
  
  if ((param_1 != 0) && (uVar1 = *(uint *)(in_ECX + 0xc), uVar1 == *(uint *)(param_1 + 0xc))) {
    in_EAX = *(int **)(in_ECX + 0x10);
    if (in_EAX != (int *)0x0) {
      if (*(int *)(param_1 + 0x10) == 0) goto LAB_00740a99;
      if (in_EAX != (int *)0x0) goto LAB_00740abe;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
LAB_00740abe:
      if ((in_EAX != (int *)0x0) && (uVar2 = 0, uVar1 != 0)) {
        iVar3 = *(int *)(param_1 + 0x10) - (int)in_EAX;
        do {
          if (*in_EAX != *(int *)(iVar3 + (int)in_EAX)) {
            return (uint)in_EAX & 0xffffff00;
          }
          uVar2 = uVar2 + 1;
          in_EAX = in_EAX + 1;
        } while (uVar2 < uVar1);
      }
      return CONCAT31((int3)((uint)in_EAX >> 8),1);
    }
  }
LAB_00740a99:
  return (uint)in_EAX & 0xffffff00;
}



void FUN_00740af0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a818dc;
  FUN_00401f20(in_ECX[4]);
  in_ECX[4] = 0;
  FUN_00721410();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_00740b30(undefined4 param_1)

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
    *puVar2 = &PTR_FUN_00a818dc;
    puVar2[4] = 0;
    puVar2[3] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00740990(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_00740cf0(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  thunk_FUN_00700300(param_1,param_2);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(in_ECX + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(in_ECX + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(in_ECX + 0x28);
  return;
}



undefined4 FUN_00740d30(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (0x14 - (int)(param_1 + 1));
  uVar3 = FUN_00401f00(pcVar2);
  if (param_2 == 0) {
    FUN_006c5d40(uVar3,pcVar2,"%s = FOG_Z_LINEAR",param_1);
  }
  else {
    if (param_2 == 1) {
      FUN_006c5d40(uVar3,pcVar2,"%s = FOG_RANGE_SQ",param_1);
      return uVar3;
    }
    if (param_2 == 2) {
      FUN_006c5d40(uVar3,pcVar2,"%s = FOG_VERTEX_ALPHA",param_1);
      return uVar3;
    }
  }
  return uVar3;
}



undefined4 * FUN_00740dc0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x2c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar2 = &PTR_FUN_00a81984;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    *(undefined2 *)(puVar2 + 6) = 0;
    puVar2[7] = 0x3f800000;
    puVar2[8] = DAT_00b3fa90;
    puVar2[9] = DAT_00b3fa94;
    puVar2[10] = DAT_00b3fa98;
  }
  local_4 = 0xffffffff;
  thunk_FUN_00700300(puVar2,param_1);
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(in_ECX + 0x18);
  puVar2[7] = *(undefined4 *)(in_ECX + 0x1c);
  puVar2[8] = *(undefined4 *)(in_ECX + 0x20);
  puVar2[9] = *(undefined4 *)(in_ECX + 0x24);
  puVar2[10] = *(undefined4 *)(in_ECX + 0x28);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_00740e90(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x2c,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ffd30();
    *puVar2 = &PTR_FUN_00a81984;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    *(undefined2 *)(puVar2 + 6) = 0;
    puVar2[7] = 0x3f800000;
    puVar2[8] = DAT_00b3fa90;
    puVar2[9] = DAT_00b3fa94;
    puVar2[10] = DAT_00b3fa98;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_00740fa0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar3 = (undefined4 *)FUN_00401f00(0x2c,uVar2);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar3 = &PTR_FUN_00a81984;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *(undefined2 *)(puVar3 + 6) = 0;
    puVar3[7] = 0x3f800000;
    puVar3[8] = DAT_00b3fa90;
    puVar3[9] = DAT_00b3fa94;
    puVar3[10] = DAT_00b3fa98;
  }
  puVar1 = DAT_00b401fc;
  local_4 = 0xffffffff;
  if (DAT_00b401fc != puVar3) {
    if (DAT_00b401fc != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(DAT_00b401fc + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    DAT_00b401fc = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00741080(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b401fc;
  if (DAT_00b401fc != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b401fc + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b401fc = (undefined4 *)0x0;
  }
  return;
}



void FUN_007411f0(uint param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00700b10(param_1);
  param_1 = FUN_0070f910(DAT_00b401f4);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(in_ECX + 0x18)) & 0xffffff01;
  param_1 = FUN_0070f950("Enable",param_1);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("Depth",*(undefined4 *)(in_ECX + 0x1c));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_00740d30("Function",*(byte *)(in_ECX + 0x18) >> 1 & 3);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_00709370("Color");
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00741370(byte param_1)

{
  FUN_006ffd70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_00741390(undefined4 param_1)

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
    FUN_006ffd30();
    *puVar2 = &PTR_FUN_00a819fc;
    *(undefined2 *)(puVar2 + 6) = 0;
  }
  local_4 = 0xffffffff;
  thunk_FUN_00700300(puVar2,param_1);
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(in_ECX + 0x18);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_00741420(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ffd30();
    *puVar2 = &PTR_FUN_00a819fc;
    *(undefined2 *)(puVar2 + 6) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



undefined4 FUN_007415e0(float *param_1)

{
  float fVar1;
  float *in_ECX;
  
  fVar1 = (param_1[2] * in_ECX[2] + *param_1 * *in_ECX + param_1[1] * in_ECX[1]) - in_ECX[3];
  if (fVar1 < 0.0) {
    return 2;
  }
  if (0.0 < fVar1) {
    return 1;
  }
  return 0;
}



void FUN_00741630(void)

{
  int in_ECX;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_007101f0(&local_c,in_ECX + 0xdc);
  *(float *)(in_ECX + 0xec) = local_c;
  *(float *)(in_ECX + 0xf0) = local_8;
  *(float *)(in_ECX + 0xf4) = local_4;
  *(float *)(in_ECX + 0xf8) =
       *(float *)(in_ECX + 0xe8) * *(float *)(in_ECX + 0x94) +
       *(float *)(in_ECX + 0x90) * local_4 +
       *(float *)(in_ECX + 0x88) * local_c + *(float *)(in_ECX + 0x8c) * local_8;
  return;
}



void FUN_007416c0(void)

{
  FUN_0070c120();
  FUN_00741630();
  return;
}



void thunk_FUN_0070b530(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  LONG LVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *in_ECX;
  uint uVar8;
  int *piStack_4;
  
  piStack_4 = in_ECX;
  FUN_007081b0(param_1);
  uVar1 = FUN_007124d0();
  if (uVar1 != 0) {
    FUN_00523b10(uVar1);
    uVar8 = 0;
    if (uVar1 != 0) {
      do {
        uVar2 = FUN_007124a0();
        (**(code **)(*in_ECX + 0x90))(&piStack_4,uVar8,uVar2);
        piVar7 = piStack_4;
        if (((piStack_4 != (int *)0x0) && (LVar3 = InterlockedDecrement(piStack_4 + 1), LVar3 == 0))
           && (piVar7 != (int *)0x0)) {
          (**(code **)*piVar7)(1);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar1);
    }
  }
  iVar4 = FUN_007124d0();
  if (*(uint *)(param_1 + 0xd8) < 0x4010008) {
    if (iVar4 != 0) {
      do {
        iVar4 = iVar4 + -1;
        iVar5 = FUN_007124a0();
        if (iVar5 != 0) {
          puVar6 = (undefined4 *)(**(code **)(in_ECX[0x2f] + 4))();
          puVar6[2] = iVar5;
          *puVar6 = 0;
          puVar6[1] = in_ECX[0x31];
          if ((undefined4 *)in_ECX[0x31] == (undefined4 *)0x0) {
            in_ECX[0x30] = (int)puVar6;
          }
          else {
            *(undefined4 *)in_ECX[0x31] = puVar6;
          }
          in_ECX[0x32] = in_ECX[0x32] + 1;
          in_ECX[0x31] = (int)puVar6;
          FUN_00708e40(in_ECX);
        }
      } while (iVar4 != 0);
      return;
    }
  }
  else {
    while (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      iVar5 = FUN_007124a0();
      if (iVar5 != 0) {
        piVar7 = (int *)(**(code **)(in_ECX[0x2f] + 4))();
        piVar7[2] = iVar5;
        piVar7[1] = 0;
        *piVar7 = in_ECX[0x30];
        if (in_ECX[0x30] == 0) {
          in_ECX[0x31] = (int)piVar7;
        }
        else {
          *(int **)(in_ECX[0x30] + 4) = piVar7;
        }
        in_ECX[0x32] = in_ECX[0x32] + 1;
        in_ECX[0x30] = (int)piVar7;
        FUN_00708e40(in_ECX);
      }
    }
  }
  return;
}



void FUN_007419b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar3 = FUN_007415e0(iVar1 + 0x88);
  if (iVar3 == 0) {
    local_c = *(undefined4 *)(iVar1 + 100);
    local_8 = *(undefined4 *)(iVar1 + 0x70);
    local_4 = *(undefined4 *)(iVar1 + 0x7c);
    iVar3 = FUN_007415e0(&local_c);
  }
  iVar1 = **(int **)(in_ECX + 0xb0);
  iVar2 = (*(int **)(in_ECX + 0xb0))[1];
  if (iVar3 == 2) {
    if (iVar2 != 0) {
      FUN_007073d0(param_1);
    }
    if (iVar1 != 0) {
      FUN_007073d0(param_1);
      return;
    }
  }
  else {
    if (iVar1 != 0) {
      FUN_007073d0(param_1);
    }
    if (iVar2 != 0) {
      FUN_007073d0(param_1);
    }
  }
  return;
}



void FUN_00741a50(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cae88;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0070b780(0);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a81a64;
  FUN_00716db0(uVar1);
  FUN_00716db0();
  FUN_00523b10(2);
  *(undefined2 *)((int)in_ECX + 0xba) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00741ae0(byte param_1)

{
  FUN_0070b810();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_00741b00(undefined4 param_1)

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
    iVar3 = FUN_00741a50();
  }
  local_4 = 0xffffffff;
  FUN_0070ac60(iVar3,param_1);
  *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(in_ECX + 0xdc);
  *(undefined4 *)(iVar3 + 0xe0) = *(undefined4 *)(in_ECX + 0xe0);
  *(undefined4 *)(iVar3 + 0xe4) = *(undefined4 *)(in_ECX + 0xe4);
  *(undefined4 *)(iVar3 + 0xe8) = *(undefined4 *)(in_ECX + 0xe8);
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
    uVar2 = FUN_00741a50();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 * FUN_00741d00(void)

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
    FUN_00721350();
    *puVar2 = &PTR_FUN_00a81b14;
    *(undefined1 *)(puVar2 + 3) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_00741da0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a81b14;
  FUN_00721410();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_00741dd0(undefined4 param_1)

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
    *puVar2 = &PTR_FUN_00a81b14;
    *(undefined1 *)(puVar2 + 3) = 0;
  }
  local_4 = 0xffffffff;
  FUN_007214a0(puVar2,param_1);
  *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(in_ECX + 0xc);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_00741fa0(void)

{
  undefined4 *in_ECX;
  
  FUN_00722810();
  *in_ECX = &PTR_FUN_00a81b7c;
  return;
}



undefined4 * FUN_00741fc0(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0xc0,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00722810();
    *puVar2 = &PTR_FUN_00a81b7c;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_00742020(int *param_1)

{
  FUN_00722a10(param_1);
  if (((param_1[0x80] == 1) || (param_1[0x81] == 1)) && ((char)param_1[0x83] == '\x01')) {
    (**(code **)(*param_1 + 0x170))();
  }
  return;
}



void FUN_00742060(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  LONG LVar5;
  int in_ECX;
  int *piVar6;
  
  if (param_1 == 0) {
    puVar2 = *(undefined4 **)(in_ECX + 0xb0);
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 1);
      if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)(in_ECX + 0xb0) = 0;
    }
  }
  else {
    if ((((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x14) == 0)) &&
        (*(int *)(param_1 + 0x18) == 0)) && (*(int *)(param_1 + 0x1c) == 0)) {
      FUN_0075fa90(param_1);
      return;
    }
    iVar3 = FUN_00401f00(0x20);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00709e60();
    }
    FUN_0075fa90(uVar4);
    piVar6 = *(int **)(param_1 + 0xc);
    if (piVar6 != (int *)0x0) {
      do {
        piVar1 = piVar6 + 1;
        piVar6 = (int *)*piVar6;
        FUN_00731ce0(*piVar1);
      } while (piVar6 != (int *)0x0);
      return;
    }
  }
  return;
}



undefined4 * FUN_00742130(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0xc0,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00722810();
    *puVar2 = &PTR_FUN_00a81b7c;
  }
  local_4 = 0xffffffff;
  FUN_00723020(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_007421b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00723620(param_1);
  param_1 = FUN_0070f910(DAT_00b4021c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined4 * FUN_00742210(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x108,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0071a490();
    *puVar2 = &PTR_FUN_00a81c1c;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void thunk_FUN_00708f90(void)

{
  FUN_00708f90();
  return;
}



undefined4 * FUN_007422a0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x108,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0071a490();
    *puVar2 = &PTR_FUN_00a81c1c;
  }
  local_4 = 0xffffffff;
  FUN_0071a5a0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_00742320(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0071a790(param_1);
  param_1 = FUN_0070f910(DAT_00b40224);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined4 FUN_00742370(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((param_1 != 0) && (puVar2 = *(undefined4 **)(param_1 + 0x1c), puVar2 != (undefined4 *)0x0)) {
    puVar2[6] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[3] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar1 = puVar2 + 0x14a;
    puVar2[0x19] = puVar1;
    puVar2[0x12] = puVar1;
    puVar2[0x11] = puVar1;
    return 0;
  }
  return 0xfffffffe;
}



undefined4 FUN_007423c0(int param_1,uint param_2,char *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_3 == (char *)0x0) || (*param_3 != '1')) || (param_4 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(code **)(param_1 + 0x20) = FUN_00744fe0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(code **)(param_1 + 0x24) = FUN_00745000;
    }
    iVar1 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x1ba8);
    if (iVar1 == 0) {
      return 0xfffffffc;
    }
    *(int *)(param_1 + 0x1c) = iVar1;
    if ((int)param_2 < 0) {
      *(undefined4 *)(iVar1 + 8) = 0;
      param_2 = -param_2;
    }
    else {
      *(int *)(iVar1 + 8) = ((int)param_2 >> 4) + 1;
      if ((int)param_2 < 0x30) {
        param_2 = param_2 & 0xf;
      }
    }
    if (param_2 - 8 < 8) {
      *(uint *)(iVar1 + 0x1c) = param_2;
      *(undefined4 *)(iVar1 + 0x2c) = 0;
      uVar2 = FUN_00742370(param_1);
      return uVar2;
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return 0xfffffffe;
}



void FUN_00742490(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_007423c0(param_1,0xf,param_2,param_3);
  return;
}



undefined4 FUN_007424b0(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  int unaff_EBX;
  uint uVar4;
  size_t _Size;
  
  iVar1 = *(int *)(unaff_EBX + 0x1c);
  if (*(int *)(iVar1 + 0x2c) == 0) {
    iVar2 = (**(code **)(unaff_EBX + 0x20))
                      (*(undefined4 *)(unaff_EBX + 0x28),
                       1 << ((byte)*(undefined4 *)(iVar1 + 0x1c) & 0x1f),1);
    *(int *)(iVar1 + 0x2c) = iVar2;
    if (iVar2 == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar1 + 0x20) == 0) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(int *)(iVar1 + 0x20) = 1 << ((byte)*(undefined4 *)(iVar1 + 0x1c) & 0x1f);
  }
  uVar4 = in_EAX - *(int *)(unaff_EBX + 0x10);
  uVar3 = *(uint *)(iVar1 + 0x20);
  if (uVar3 <= uVar4) {
    _memcpy(*(void **)(iVar1 + 0x2c),(void *)(*(int *)(unaff_EBX + 0xc) - uVar3),uVar3);
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 0x20);
    return 0;
  }
  uVar3 = uVar3 - *(int *)(iVar1 + 0x28);
  if (uVar4 < uVar3) {
    uVar3 = uVar4;
  }
  _memcpy((void *)(*(int *)(iVar1 + 0x2c) + *(int *)(iVar1 + 0x28)),
          (void *)(*(int *)(unaff_EBX + 0xc) - uVar4),uVar3);
  _Size = uVar4 - uVar3;
  if (_Size != 0) {
    _memcpy(*(void **)(iVar1 + 0x2c),(void *)(*(int *)(unaff_EBX + 0xc) - _Size),_Size);
    *(size_t *)(iVar1 + 0x28) = _Size;
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 0x20);
    return 0;
  }
  *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + uVar3;
  if (*(uint *)(iVar1 + 0x28) == *(uint *)(iVar1 + 0x20)) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
  }
  if (*(uint *)(iVar1 + 0x24) < *(uint *)(iVar1 + 0x20)) {
    *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) + uVar3;
  }
  return 0;
}



int FUN_007425a0(int *param_1,int param_2)

{
  undefined1 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *_Src;
  undefined1 *puVar12;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  char local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 *local_18;
  undefined1 *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  uint local_4;
  
  if ((((param_1 == (int *)0x0) || (puVar2 = (uint *)param_1[7], puVar2 == (uint *)0x0)) ||
      (param_1[3] == 0)) || ((*param_1 == 0 && (param_1[1] != 0)))) {
    return -2;
  }
  if (*puVar2 == 0xb) {
    *puVar2 = 0xc;
  }
  local_18 = (undefined1 *)param_1[3];
  uVar11 = puVar2[0xc];
  local_20 = param_1[4];
  _Src = (byte *)*param_1;
  local_2c = param_1[1];
  uVar9 = *puVar2;
  puVar12 = (undefined1 *)puVar2[0xd];
  local_c = 0;
  local_24 = uVar11;
  local_10 = local_20;
  uVar10 = local_2c;
  local_4 = local_2c;
  do {
    if (0x1c < uVar9) {
      return -2;
    }
    uVar3 = uVar10;
    switch(uVar9) {
    case 0:
      uVar9 = uVar10;
      uVar3 = local_2c;
      if (puVar2[2] == 0) {
        *puVar2 = 0xc;
        uVar3 = uVar10;
      }
      else {
        for (; puVar12 < (undefined1 *)0x10; puVar12 = puVar12 + 8) {
          uVar10 = 0;
          if (uVar9 == 0) goto LAB_00743801;
          bVar6 = *_Src;
          uVar9 = uVar9 - 1;
          _Src = _Src + 1;
          uVar11 = uVar11 + ((uint)bVar6 << ((byte)puVar12 & 0x1f));
          uVar3 = uVar9;
          local_24 = uVar11;
        }
        local_2c = uVar3;
        if (((puVar2[2] & 2) == 0) || (uVar11 != 0x8b1f)) {
          puVar2[4] = 0;
          if (((puVar2[2] & 1) == 0) || (((uVar11 & 0xff) * 0x100 + (uVar11 >> 8)) % 0x1f != 0)) {
            param_1[6] = (int)"incorrect header check";
          }
          else if (((byte)uVar11 & 0xf) == 8) {
            local_24 = uVar11 >> 4;
            puVar12 = puVar12 + -4;
            if ((local_24 & 0xf) + 8 <= puVar2[7]) {
              uVar9 = FUN_007459b0(0,0,0);
              puVar2[5] = uVar9;
              param_1[0xc] = uVar9;
              *puVar2 = ~(uVar11 >> 0xc) & 2 | 9;
              uVar11 = 0;
              local_24 = 0;
              puVar12 = (undefined1 *)0x0;
              goto LAB_007437a3;
            }
            param_1[6] = (int)"invalid window size";
            uVar11 = local_24;
          }
          else {
            param_1[6] = (int)"unknown compression method";
          }
          break;
        }
        uVar9 = FUN_00745d90(0,0,0);
        puVar2[5] = uVar9;
        local_1c = '\x1f';
        local_1b = 0x8b;
        uVar9 = FUN_00745d90(puVar2[5],&local_1c,2);
        uVar11 = 0;
        puVar2[5] = uVar9;
        local_24 = 0;
        puVar12 = (undefined1 *)0x0;
        *puVar2 = 1;
      }
      goto LAB_007437a3;
    case 1:
      for (; puVar12 < (undefined1 *)0x10; puVar12 = puVar12 + 8) {
        uVar10 = 0;
        if (uVar3 == 0) goto LAB_00743801;
        bVar6 = *_Src;
        uVar3 = uVar3 - 1;
        _Src = _Src + 1;
        uVar11 = uVar11 + ((uint)bVar6 << ((byte)puVar12 & 0x1f));
        local_2c = uVar3;
        local_24 = uVar11;
      }
      puVar2[4] = uVar11;
      if ((char)uVar11 == '\b') {
        if ((uVar11 & 0xe000) == 0) {
          if ((uVar11 & 0x200) != 0) {
            local_1b = (undefined1)(uVar11 >> 8);
            local_1c = (char)uVar11;
            uVar9 = FUN_00745d90(puVar2[5],&local_1c,2);
            puVar2[5] = uVar9;
            uVar3 = local_2c;
          }
          uVar11 = 0;
          puVar12 = (undefined1 *)0x0;
          *puVar2 = 2;
          do {
            uVar10 = 0;
            if (uVar3 == 0) goto LAB_00743801;
            bVar6 = *_Src;
            bVar5 = (byte)puVar12;
            uVar3 = uVar3 - 1;
            puVar12 = puVar12 + 8;
            _Src = _Src + 1;
            uVar11 = uVar11 + ((uint)bVar6 << (bVar5 & 0x1f));
            local_2c = uVar3;
joined_r0x00742814:
          } while (puVar12 < (undefined1 *)0x20);
          if ((puVar2[4] & 0x200) != 0) {
            local_1c = (char)uVar11;
            local_1b = (undefined1)(uVar11 >> 8);
            local_1a = (undefined1)(uVar11 >> 0x10);
            local_19 = (undefined1)(uVar11 >> 0x18);
            uVar9 = FUN_00745d90(puVar2[5],&local_1c,4);
            puVar2[5] = uVar9;
            uVar3 = local_2c;
          }
          uVar11 = 0;
          puVar12 = (undefined1 *)0x0;
          *puVar2 = 3;
          do {
            uVar10 = 0;
            if (uVar3 == 0) goto LAB_00743801;
            bVar6 = *_Src;
            bVar5 = (byte)puVar12;
            uVar3 = uVar3 - 1;
            puVar12 = puVar12 + 8;
            _Src = _Src + 1;
            uVar11 = uVar11 + ((uint)bVar6 << (bVar5 & 0x1f));
            local_2c = uVar3;
joined_r0x00742889:
          } while (puVar12 < (undefined1 *)0x10);
          uVar10 = uVar3;
          if ((puVar2[4] & 0x200) != 0) {
            local_1c = (char)uVar11;
            local_1b = (undefined1)(uVar11 >> 8);
            uVar9 = FUN_00745d90(puVar2[5],&local_1c,2);
            puVar2[5] = uVar9;
            uVar10 = local_2c;
          }
          uVar11 = 0;
          local_24 = 0;
          puVar12 = (undefined1 *)0x0;
          *puVar2 = 4;
          goto switchD_00742620_caseD_4;
        }
        param_1[6] = (int)"unknown header flags set";
      }
      else {
        param_1[6] = (int)"unknown compression method";
      }
      break;
    case 2:
      goto joined_r0x00742814;
    case 3:
      goto joined_r0x00742889;
    case 4:
switchD_00742620_caseD_4:
      uVar9 = uVar10;
      if ((puVar2[4] & 0x400) != 0) {
        for (; puVar12 < (undefined1 *)0x10; puVar12 = puVar12 + 8) {
          uVar10 = 0;
          if (uVar9 == 0) goto LAB_00743801;
          bVar6 = *_Src;
          local_2c = uVar9 - 1;
          _Src = _Src + 1;
          uVar11 = uVar11 + ((uint)bVar6 << ((byte)puVar12 & 0x1f));
          uVar9 = local_2c;
        }
        puVar2[0xe] = uVar11;
        uVar10 = uVar9;
        if ((puVar2[4] & 0x200) != 0) {
          local_1c = (char)uVar11;
          local_1b = (undefined1)(uVar11 >> 8);
          uVar9 = FUN_00745d90(puVar2[5],&local_1c,2);
          puVar2[5] = uVar9;
          uVar10 = local_2c;
        }
        uVar11 = 0;
        local_24 = 0;
        puVar12 = (undefined1 *)0x0;
      }
      *puVar2 = 5;
    case 5:
      if ((puVar2[4] & 0x400) == 0) {
LAB_007429bd:
        *puVar2 = 6;
switchD_00742620_caseD_6:
        if ((puVar2[4] & 0x800) == 0) {
LAB_00742a22:
          *puVar2 = 7;
switchD_00742620_caseD_7:
          if ((puVar2[4] & 0x1000) == 0) {
LAB_00742a8e:
            *puVar2 = 8;
switchD_00742620_caseD_8:
            uVar3 = uVar10;
            if ((puVar2[4] & 0x200) != 0) {
              for (; puVar12 < (undefined1 *)0x10; puVar12 = puVar12 + 8) {
                uVar10 = 0;
                if (uVar3 == 0) goto LAB_00743801;
                bVar6 = *_Src;
                local_2c = uVar3 - 1;
                _Src = _Src + 1;
                uVar11 = uVar11 + ((uint)bVar6 << ((byte)puVar12 & 0x1f));
                uVar3 = local_2c;
                local_24 = uVar11;
              }
              if (uVar11 != (ushort)puVar2[5]) {
                param_1[6] = (int)"header crc mismatch";
                break;
              }
              uVar11 = 0;
              local_24 = 0;
              puVar12 = (undefined1 *)0x0;
            }
            uVar9 = FUN_00745d90(0,0,0);
            puVar2[5] = uVar9;
            param_1[0xc] = uVar9;
            *puVar2 = 0xb;
            uVar3 = local_2c;
            goto LAB_007437a3;
          }
          if (uVar10 != 0) {
            uVar9 = 0;
            do {
              local_14 = (undefined1 *)(uint)_Src[uVar9];
              uVar9 = uVar9 + 1;
              if (local_14 == (undefined1 *)0x0) break;
            } while (uVar9 < uVar10);
            if ((puVar2[4] & 0x2000) != 0) {
              uVar10 = FUN_00745d90(puVar2[5],_Src,uVar9);
              puVar2[5] = uVar10;
              uVar10 = local_2c;
            }
            uVar10 = uVar10 - uVar9;
            _Src = _Src + uVar9;
            local_2c = uVar10;
            if (local_14 == (undefined1 *)0x0) goto LAB_00742a8e;
          }
        }
        else if (uVar10 != 0) {
          uVar9 = 0;
          do {
            local_14 = (undefined1 *)(uint)_Src[uVar9];
            uVar9 = uVar9 + 1;
            if (local_14 == (undefined1 *)0x0) break;
          } while (uVar9 < uVar10);
          if ((puVar2[4] & 0x2000) != 0) {
            uVar10 = FUN_00745d90(puVar2[5],_Src,uVar9);
            puVar2[5] = uVar10;
            uVar10 = local_2c;
          }
          uVar10 = uVar10 - uVar9;
          _Src = _Src + uVar9;
          local_2c = uVar10;
          if (local_14 == (undefined1 *)0x0) goto LAB_00742a22;
        }
      }
      else {
        uVar9 = puVar2[0xe];
        if (uVar10 < puVar2[0xe]) {
          uVar9 = uVar10;
        }
        if (uVar9 != 0) {
          if ((puVar2[4] & 0x200) != 0) {
            uVar10 = FUN_00745d90(puVar2[5],_Src,uVar9);
            puVar2[5] = uVar10;
            uVar10 = local_2c;
          }
          uVar10 = uVar10 - uVar9;
          _Src = _Src + uVar9;
          puVar2[0xe] = puVar2[0xe] - uVar9;
          local_2c = uVar10;
        }
        if (puVar2[0xe] == 0) goto LAB_007429bd;
      }
LAB_00743801:
      param_1[3] = (int)local_18;
      param_1[4] = local_20;
      *param_1 = (int)_Src;
      param_1[1] = uVar10;
      puVar2[0xc] = uVar11;
      puVar2[0xd] = (uint)puVar12;
      if (((puVar2[8] == 0) && ((0x17 < (int)*puVar2 || (local_10 == param_1[4])))) ||
         (iVar4 = FUN_007424b0(), iVar4 == 0)) {
        iVar4 = param_1[1];
        iVar7 = local_10 - param_1[4];
        param_1[2] = param_1[2] + (local_4 - iVar4);
        param_1[5] = param_1[5] + iVar7;
        puVar2[6] = puVar2[6] + iVar7;
        if ((puVar2[2] != 0) && (iVar7 != 0)) {
          puVar2[5] = 0;
          param_1[0xc] = 0;
        }
        param_1[0xb] = (-(uint)(puVar2[1] != 0) & 0x40) + ((*puVar2 != 0xb) - 1 & 0x80) +
                       puVar2[0xd];
        if (((local_4 - iVar4 != 0) || (iVar7 != 0)) && (param_2 != 4)) {
          return local_c;
        }
        if (local_c != 0) {
          return local_c;
        }
        return -5;
      }
      *puVar2 = 0x1c;
switchD_00742620_caseD_1c:
      return -4;
    case 6:
      goto switchD_00742620_caseD_6;
    case 7:
      goto switchD_00742620_caseD_7;
    case 8:
      goto switchD_00742620_caseD_8;
    case 9:
      for (; puVar12 < (undefined1 *)0x20; puVar12 = puVar12 + 8) {
        uVar10 = 0;
        if (uVar3 == 0) goto LAB_00743801;
        bVar6 = *_Src;
        uVar3 = uVar3 - 1;
        _Src = _Src + 1;
        uVar11 = uVar11 + ((uint)bVar6 << ((byte)puVar12 & 0x1f));
        local_2c = uVar3;
        local_24 = uVar11;
      }
      uVar9 = ((uVar11 & 0xff00) + uVar11 * 0x10000) * 0x100 + (local_24 >> 0x10 & 0xff) * 0x100 +
              (uVar11 >> 0x18);
      puVar2[5] = uVar9;
      param_1[0xc] = uVar9;
      uVar11 = 0;
      puVar12 = (undefined1 *)0x0;
      *puVar2 = 10;
    case 10:
      if (puVar2[3] == 0) {
        param_1[3] = (int)local_18;
        *param_1 = (int)_Src;
        param_1[1] = uVar3;
        param_1[4] = local_20;
        puVar2[0xd] = (uint)puVar12;
        puVar2[0xc] = uVar11;
        return 2;
      }
      uVar9 = FUN_007459b0(0,0,0);
      puVar2[5] = uVar9;
      param_1[0xc] = uVar9;
      *puVar2 = 0xb;
      uVar10 = local_2c;
switchD_00742620_caseD_b:
      if (param_2 != 5) {
switchD_00742620_caseD_c:
        uVar3 = uVar10;
        if (puVar2[1] == 0) {
          for (; puVar12 < (undefined1 *)0x3; puVar12 = puVar12 + 8) {
            uVar10 = 0;
            if (uVar3 == 0) goto LAB_00743801;
            bVar6 = *_Src;
            local_2c = uVar3 - 1;
            _Src = _Src + 1;
            uVar11 = uVar11 + ((uint)bVar6 << ((byte)puVar12 & 0x1f));
            uVar3 = local_2c;
          }
          puVar2[1] = uVar11 & 1;
          switch(uVar11 >> 1 & 3) {
          case 0:
            uVar11 = uVar11 >> 3;
            *puVar2 = 0xd;
            puVar12 = puVar12 + -3;
            local_24 = uVar11;
            break;
          case 1:
            uVar11 = uVar11 >> 3;
            puVar2[0x11] = (uint)&DAT_00a81ca8;
            puVar2[0x13] = 9;
            puVar2[0x12] = (uint)&DAT_00a824a8;
            puVar2[0x14] = 5;
            *puVar2 = 0x12;
            puVar12 = puVar12 + -3;
            local_24 = uVar11;
            break;
          case 2:
            uVar11 = uVar11 >> 3;
            *puVar2 = 0xf;
            puVar12 = puVar12 + -3;
            local_24 = uVar11;
            break;
          case 3:
            param_1[6] = (int)"invalid block type";
            *puVar2 = 0x1b;
          default:
            uVar11 = uVar11 >> 3;
            puVar12 = puVar12 + -3;
            local_24 = uVar11;
          }
        }
        else {
          uVar11 = uVar11 >> (sbyte)((uint)puVar12 & 7);
          puVar12 = puVar12 + -((uint)puVar12 & 7);
          *puVar2 = 0x18;
          local_24 = uVar11;
        }
        goto LAB_007437a3;
      }
      goto LAB_00743801;
    case 0xb:
      goto switchD_00742620_caseD_b;
    case 0xc:
      goto switchD_00742620_caseD_c;
    case 0xd:
      uVar11 = uVar11 >> (sbyte)((uint)puVar12 & 7);
      for (puVar12 = puVar12 + -((uint)puVar12 & 7); puVar12 < (undefined1 *)0x20;
          puVar12 = puVar12 + 8) {
        uVar10 = 0;
        if (uVar3 == 0) goto LAB_00743801;
        bVar6 = *_Src;
        uVar3 = uVar3 - 1;
        _Src = _Src + 1;
        uVar11 = uVar11 + ((uint)bVar6 << ((byte)puVar12 & 0x1f));
        local_2c = uVar3;
      }
      uVar9 = uVar11 & 0xffff;
      if (uVar9 == ~uVar11 >> 0x10) {
        uVar11 = 0;
        puVar2[0xe] = uVar9;
        local_24 = 0;
        puVar12 = (undefined1 *)0x0;
        *puVar2 = 0xe;
        uVar10 = uVar3;
        goto switchD_00742620_caseD_e;
      }
      param_1[6] = (int)"invalid stored block lengths";
      local_24 = uVar11;
      break;
    case 0xe:
switchD_00742620_caseD_e:
      local_28 = puVar2[0xe];
      if (local_28 == 0) {
LAB_007433b0:
        *puVar2 = 0xb;
        uVar3 = uVar10;
      }
      else {
        if (uVar10 < local_28) {
          local_28 = uVar10;
        }
        if (local_20 < local_28) {
          local_28 = local_20;
        }
        if (local_28 == 0) goto LAB_00743801;
        _memcpy(local_18,_Src,local_28);
        local_20 = local_20 - local_28;
        local_18 = local_18 + local_28;
        _Src = _Src + local_28;
        puVar2[0xe] = puVar2[0xe] - local_28;
        uVar3 = local_2c - local_28;
        local_2c = local_2c - local_28;
      }
      goto LAB_007437a3;
    case 0xf:
      for (; puVar12 < (undefined1 *)0xe; puVar12 = puVar12 + 8) {
        uVar10 = 0;
        if (uVar3 == 0) goto LAB_00743801;
        bVar6 = *_Src;
        uVar3 = uVar3 - 1;
        _Src = _Src + 1;
        uVar11 = uVar11 + ((uint)bVar6 << ((byte)puVar12 & 0x1f));
        local_2c = uVar3;
      }
      puVar2[0x16] = (uVar11 & 0x1f) + 0x101;
      uVar10 = uVar11 >> 10;
      uVar9 = (uVar11 >> 5 & 0x1f) + 1;
      uVar11 = uVar11 >> 0xe;
      puVar12 = puVar12 + -0xe;
      puVar2[0x17] = uVar9;
      puVar2[0x15] = (uVar10 & 0xf) + 4;
      local_24 = uVar11;
      if ((puVar2[0x16] < 0x11f) && (uVar9 < 0x1f)) {
        puVar2[0x18] = 0;
        *puVar2 = 0x10;
        goto switchD_00742620_caseD_10;
      }
      param_1[6] = (int)"too many length or distance symbols";
      break;
    case 0x10:
switchD_00742620_caseD_10:
      if (puVar2[0x18] < puVar2[0x15]) {
        do {
          for (; puVar12 < (undefined1 *)0x3; puVar12 = puVar12 + 8) {
            uVar10 = 0;
            if (uVar3 == 0) goto LAB_00743801;
            bVar6 = *_Src;
            uVar3 = uVar3 - 1;
            _Src = _Src + 1;
            uVar11 = uVar11 + ((uint)bVar6 << ((byte)puVar12 & 0x1f));
            local_2c = uVar3;
          }
          *(ushort *)((int)puVar2 + (uint)*(ushort *)(&DAT_00a82528 + puVar2[0x18] * 2) * 2 + 0x68)
               = (ushort)uVar11 & 7;
          puVar2[0x18] = puVar2[0x18] + 1;
          uVar11 = uVar11 >> 3;
          puVar12 = puVar12 + -3;
          local_24 = uVar11;
        } while (puVar2[0x18] < puVar2[0x15]);
      }
      uVar9 = puVar2[0x18];
      while (uVar9 < 0x13) {
        *(undefined2 *)
         ((int)puVar2 + (uint)*(ushort *)(&DAT_00a82528 + puVar2[0x18] * 2) * 2 + 0x68) = 0;
        puVar2[0x18] = puVar2[0x18] + 1;
        uVar9 = puVar2[0x18];
      }
      puVar2[0x19] = (uint)(puVar2 + 0x14a);
      puVar2[0x11] = (uint)(puVar2 + 0x14a);
      puVar2[0x13] = 7;
      local_c = FUN_007454d0(0,puVar2 + 0x1a,0x13,puVar2 + 0x19,puVar2 + 0x13,puVar2 + 0xba);
      if (local_c == 0) {
        puVar2[0x18] = 0;
        *puVar2 = 0x11;
        uVar3 = local_2c;
        goto switchD_00742620_caseD_11;
      }
      param_1[6] = (int)"invalid code lengths set";
      uVar3 = local_2c;
      break;
    case 0x11:
switchD_00742620_caseD_11:
      if (puVar2[0x18] < puVar2[0x17] + puVar2[0x16]) {
        do {
          uVar9 = *(uint *)(puVar2[0x11] + ((1 << ((byte)puVar2[0x13] & 0x1f)) - 1U & uVar11) * 4);
          if (puVar12 < (undefined1 *)(uVar9 >> 8 & 0xff)) {
            do {
              uVar10 = 0;
              if (uVar3 == 0) goto LAB_00743801;
              bVar6 = (byte)puVar12;
              uVar3 = uVar3 - 1;
              puVar12 = puVar12 + 8;
              uVar11 = uVar11 + ((uint)*_Src << (bVar6 & 0x1f));
              _Src = _Src + 1;
              uVar9 = *(uint *)(puVar2[0x11] +
                               ((1 << ((byte)puVar2[0x13] & 0x1f)) - 1U & uVar11) * 4);
              local_2c = uVar3;
            } while (puVar12 < (undefined1 *)(uVar9 >> 8 & 0xff));
          }
          local_28._2_2_ = (short)(uVar9 >> 0x10);
          bVar6 = (byte)(uVar9 >> 8);
          if (0xf < uVar9 >> 0x10) {
            local_14 = (undefined1 *)(uVar9 >> 8 & 0xff);
            if (local_28._2_2_ == 0x10) {
              if (puVar12 < local_14 + 2) {
                do {
                  uVar10 = 0;
                  if (uVar3 == 0) goto LAB_00743801;
                  bVar5 = (byte)puVar12;
                  uVar3 = uVar3 - 1;
                  puVar12 = puVar12 + 8;
                  uVar11 = uVar11 + ((uint)*_Src << (bVar5 & 0x1f));
                  _Src = _Src + 1;
                  local_2c = uVar3;
                } while (puVar12 < local_14 + 2);
              }
              local_24 = uVar11 >> (bVar6 & 0x1f);
              puVar12 = puVar12 + -(int)local_14;
              if (puVar2[0x18] != 0) {
                local_14 = (undefined1 *)(uint)*(ushort *)((int)puVar2 + puVar2[0x18] * 2 + 0x66);
                local_28 = (local_24 & 3) + 3;
                local_24 = local_24 >> 2;
                puVar12 = puVar12 + -2;
                goto LAB_007430d0;
              }
              param_1[6] = (int)"invalid bit length repeat";
            }
            else {
              if (local_28._2_2_ == 0x11) {
                if (puVar12 < local_14 + 3) {
                  do {
                    uVar10 = 0;
                    if (uVar3 == 0) goto LAB_00743801;
                    bVar5 = (byte)puVar12;
                    uVar3 = uVar3 - 1;
                    puVar12 = puVar12 + 8;
                    uVar11 = uVar11 + ((uint)*_Src << (bVar5 & 0x1f));
                    _Src = _Src + 1;
                    local_2c = uVar3;
                  } while (puVar12 < local_14 + 3);
                }
                uVar11 = uVar11 >> (bVar6 & 0x1f);
                local_28 = (uVar11 & 7) + 3;
                local_24 = uVar11 >> 3;
                iVar4 = -3;
              }
              else {
                if (puVar12 < local_14 + 7) {
                  do {
                    uVar10 = 0;
                    if (uVar3 == 0) goto LAB_00743801;
                    bVar5 = (byte)puVar12;
                    uVar3 = uVar3 - 1;
                    puVar12 = puVar12 + 8;
                    uVar11 = uVar11 + ((uint)*_Src << (bVar5 & 0x1f));
                    _Src = _Src + 1;
                    local_2c = uVar3;
                  } while (puVar12 < local_14 + 7);
                }
                uVar11 = uVar11 >> (bVar6 & 0x1f);
                local_28 = (uVar11 & 0x7f) + 0xb;
                local_24 = uVar11 >> 7;
                iVar4 = -7;
              }
              puVar12 = puVar12 + (iVar4 - (int)local_14);
              local_14 = (undefined1 *)0x0;
LAB_007430d0:
              if (puVar2[0x18] + local_28 <= puVar2[0x17] + puVar2[0x16]) {
                for (; local_28 != 0; local_28 = local_28 + -1) {
                  *(short *)((int)puVar2 + puVar2[0x18] * 2 + 0x68) = (short)local_14;
                  puVar2[0x18] = puVar2[0x18] + 1;
                }
                goto LAB_00743108;
              }
              param_1[6] = (int)"invalid bit length repeat";
            }
            *puVar2 = 0x1b;
            uVar11 = local_24;
            break;
          }
          if (puVar12 < (undefined1 *)(uVar9 >> 8 & 0xff)) {
            do {
              uVar10 = 0;
              if (uVar3 == 0) goto LAB_00743801;
              bVar5 = (byte)puVar12;
              uVar3 = uVar3 - 1;
              puVar12 = puVar12 + 8;
              uVar11 = uVar11 + ((uint)*_Src << (bVar5 & 0x1f));
              _Src = _Src + 1;
              local_2c = uVar3;
            } while (puVar12 < (undefined1 *)(uVar9 >> 8 & 0xff));
          }
          local_24 = uVar11 >> (bVar6 & 0x1f);
          puVar12 = puVar12 + -(uVar9 >> 8 & 0xff);
          *(short *)((int)puVar2 + puVar2[0x18] * 2 + 0x68) = local_28._2_2_;
          puVar2[0x18] = puVar2[0x18] + 1;
LAB_00743108:
          uVar11 = local_24;
        } while (puVar2[0x18] < puVar2[0x17] + puVar2[0x16]);
      }
      puVar2[0x19] = (uint)(puVar2 + 0x14a);
      puVar2[0x11] = (uint)(puVar2 + 0x14a);
      puVar2[0x13] = 9;
      local_c = FUN_007454d0(1,puVar2 + 0x1a,puVar2[0x16],puVar2 + 0x19,puVar2 + 0x13,puVar2 + 0xba)
      ;
      uVar3 = local_2c;
      if (local_c == 0) {
        puVar2[0x12] = puVar2[0x19];
        puVar2[0x14] = 6;
        local_c = FUN_007454d0(2,(int)puVar2 + puVar2[0x16] * 2 + 0x68,puVar2[0x17],puVar2 + 0x19,
                               puVar2 + 0x14,puVar2 + 0xba);
        if (local_c == 0) {
          *puVar2 = 0x12;
          goto switchD_00742620_caseD_12;
        }
        param_1[6] = (int)"invalid distances set";
      }
      else {
        param_1[6] = (int)"invalid literal/lengths set";
      }
      break;
    case 0x12:
switchD_00742620_caseD_12:
      if ((uVar3 < 6) || (local_20 < 0x102)) {
        uVar9 = *(uint *)(puVar2[0x11] + ((1 << ((byte)puVar2[0x13] & 0x1f)) - 1U & uVar11) * 4);
        if (puVar12 < (undefined1 *)(uVar9 >> 8 & 0xff)) {
          do {
            uVar10 = 0;
            if (uVar3 == 0) goto LAB_00743801;
            bVar6 = (byte)puVar12;
            uVar3 = uVar3 - 1;
            puVar12 = puVar12 + 8;
            uVar11 = uVar11 + ((uint)*_Src << (bVar6 & 0x1f));
            _Src = _Src + 1;
            uVar9 = *(uint *)(puVar2[0x11] + ((1 << ((byte)puVar2[0x13] & 0x1f)) - 1U & uVar11) * 4)
            ;
            local_2c = uVar3;
          } while (puVar12 < (undefined1 *)(uVar9 >> 8 & 0xff));
        }
        cVar8 = (char)uVar9;
        local_28 = uVar9;
        if ((cVar8 != '\0') && ((uVar9 & 0xf0) == 0)) {
          local_8 = uVar9 >> 8;
          local_14 = (undefined1 *)(local_8 & 0xff);
          bVar6 = (byte)(uVar9 >> 8);
          local_28 = *(uint *)(puVar2[0x11] +
                              ((((1 << (cVar8 + bVar6 & 0x1f)) - 1U & uVar11) >> (bVar6 & 0x1f)) +
                              (uVar9 >> 0x10)) * 4);
          if (puVar12 < (undefined1 *)((local_28 >> 8 & 0xff) + (local_8 & 0xff))) {
            do {
              uVar10 = 0;
              if (uVar3 == 0) goto LAB_00743801;
              bVar5 = (byte)puVar12;
              uVar3 = uVar3 - 1;
              puVar12 = puVar12 + 8;
              uVar11 = uVar11 + ((uint)*_Src << (bVar5 & 0x1f));
              local_14 = (undefined1 *)(uVar9 >> 8 & 0xff);
              _Src = _Src + 1;
              local_28 = *(uint *)(puVar2[0x11] +
                                  ((((1 << (cVar8 + bVar6 & 0x1f)) - 1U & uVar11) >> (bVar6 & 0x1f))
                                  + (uVar9 >> 0x10)) * 4);
              local_2c = uVar3;
            } while (puVar12 < local_14 + (local_28 >> 8 & 0xff));
          }
          uVar11 = uVar11 >> (bVar6 & 0x1f);
          puVar12 = puVar12 + -(uint)bVar6;
        }
        local_14 = (undefined1 *)(local_28 >> 8 & 0xff);
        uVar11 = uVar11 >> ((byte)(local_28 >> 8) & 0x1f);
        puVar12 = puVar12 + -(int)local_14;
        puVar2[0xe] = local_28 >> 0x10;
        local_24 = uVar11;
        if ((char)local_28 == '\0') {
          *puVar2 = 0x17;
          goto LAB_007437a3;
        }
        uVar10 = uVar3;
        if ((local_28 & 0x20) == 0) {
          if ((local_28 & 0x40) == 0) {
            puVar2[0x10] = local_28 & 0xf;
            *puVar2 = 0x13;
            goto switchD_00742620_caseD_13;
          }
          param_1[6] = (int)"invalid literal/length code";
          break;
        }
        goto LAB_007433b0;
      }
      param_1[4] = local_20;
      param_1[3] = (int)local_18;
      *param_1 = (int)_Src;
      param_1[1] = local_2c;
      puVar2[0xc] = uVar11;
      puVar2[0xd] = (uint)puVar12;
      FUN_00745010(param_1,local_10);
      local_18 = (undefined1 *)param_1[3];
      local_20 = param_1[4];
      _Src = (byte *)*param_1;
      uVar11 = puVar2[0xc];
      puVar12 = (undefined1 *)puVar2[0xd];
      uVar3 = param_1[1];
      local_2c = param_1[1];
      local_24 = uVar11;
      goto LAB_007437a3;
    case 0x13:
switchD_00742620_caseD_13:
      if ((undefined1 *)puVar2[0x10] != (undefined1 *)0x0) {
        if (puVar12 < (undefined1 *)puVar2[0x10]) {
          do {
            uVar10 = 0;
            if (uVar3 == 0) goto LAB_00743801;
            bVar6 = *_Src;
            bVar5 = (byte)puVar12;
            uVar3 = uVar3 - 1;
            puVar12 = puVar12 + 8;
            _Src = _Src + 1;
            uVar11 = uVar11 + ((uint)bVar6 << (bVar5 & 0x1f));
            local_2c = uVar3;
          } while (puVar12 < (undefined1 *)puVar2[0x10]);
        }
        bVar6 = (byte)puVar2[0x10];
        puVar2[0xe] = puVar2[0xe] + ((1 << (bVar6 & 0x1f)) - 1U & uVar11);
        uVar11 = uVar11 >> (bVar6 & 0x1f);
        puVar12 = puVar12 + -puVar2[0x10];
      }
      *puVar2 = 0x14;
    case 0x14:
      uVar9 = *(uint *)(puVar2[0x12] + ((1 << ((byte)puVar2[0x14] & 0x1f)) - 1U & uVar11) * 4);
      if (puVar12 < (undefined1 *)(uVar9 >> 8 & 0xff)) {
        do {
          uVar10 = 0;
          if (uVar3 == 0) goto LAB_00743801;
          bVar6 = (byte)puVar12;
          uVar3 = uVar3 - 1;
          puVar12 = puVar12 + 8;
          uVar11 = uVar11 + ((uint)*_Src << (bVar6 & 0x1f));
          _Src = _Src + 1;
          uVar9 = *(uint *)(puVar2[0x12] + ((1 << ((byte)puVar2[0x14] & 0x1f)) - 1U & uVar11) * 4);
          local_2c = uVar3;
        } while (puVar12 < (undefined1 *)(uVar9 >> 8 & 0xff));
      }
      local_28 = uVar9;
      if ((uVar9 & 0xf0) == 0) {
        local_8 = uVar9 >> 8;
        local_14 = (undefined1 *)(local_8 & 0xff);
        bVar6 = (byte)(uVar9 >> 8);
        local_28 = *(uint *)(puVar2[0x12] +
                            ((((1 << ((char)uVar9 + bVar6 & 0x1f)) - 1U & uVar11) >> (bVar6 & 0x1f))
                            + (uVar9 >> 0x10)) * 4);
        if (puVar12 < (undefined1 *)((local_28 >> 8 & 0xff) + (local_8 & 0xff))) {
          do {
            uVar10 = 0;
            if (uVar3 == 0) goto LAB_00743801;
            bVar5 = (byte)puVar12;
            uVar3 = uVar3 - 1;
            puVar12 = puVar12 + 8;
            uVar11 = uVar11 + ((uint)*_Src << (bVar5 & 0x1f));
            local_14 = (undefined1 *)(uVar9 >> 8 & 0xff);
            _Src = _Src + 1;
            local_28 = *(uint *)(puVar2[0x12] +
                                ((((1 << ((char)uVar9 + bVar6 & 0x1f)) - 1U & uVar11) >>
                                 (bVar6 & 0x1f)) + (uVar9 >> 0x10)) * 4);
            local_2c = uVar3;
          } while (puVar12 < local_14 + (local_28 >> 8 & 0xff));
        }
        uVar11 = uVar11 >> (bVar6 & 0x1f);
        puVar12 = puVar12 + -(uint)bVar6;
      }
      local_14 = (undefined1 *)(local_28 >> 8 & 0xff);
      uVar11 = uVar11 >> ((byte)(local_28 >> 8) & 0x1f);
      puVar12 = puVar12 + -(int)local_14;
      local_24 = uVar11;
      if ((local_28 & 0x40) != 0) {
        param_1[6] = (int)"invalid distance code";
        break;
      }
      puVar2[0xf] = local_28 >> 0x10;
      puVar2[0x10] = local_28 & 0xf;
      *puVar2 = 0x15;
switchD_00742620_caseD_15:
      if ((undefined1 *)puVar2[0x10] != (undefined1 *)0x0) {
        if (puVar12 < (undefined1 *)puVar2[0x10]) {
          do {
            uVar10 = 0;
            if (uVar3 == 0) goto LAB_00743801;
            bVar6 = *_Src;
            bVar5 = (byte)puVar12;
            uVar3 = uVar3 - 1;
            puVar12 = puVar12 + 8;
            _Src = _Src + 1;
            uVar11 = uVar11 + ((uint)bVar6 << (bVar5 & 0x1f));
            local_2c = uVar3;
          } while (puVar12 < (undefined1 *)puVar2[0x10]);
        }
        bVar6 = (byte)puVar2[0x10];
        puVar2[0xf] = puVar2[0xf] + ((1 << (bVar6 & 0x1f)) - 1U & uVar11);
        uVar11 = uVar11 >> (bVar6 & 0x1f);
        puVar12 = puVar12 + -puVar2[0x10];
        local_24 = uVar11;
      }
      if ((puVar2[9] - local_20) + local_10 < puVar2[0xf]) {
        param_1[6] = (int)"invalid distance too far back";
        break;
      }
      *puVar2 = 0x16;
      uVar10 = uVar3;
switchD_00742620_caseD_16:
      if (local_20 != 0) {
        local_28 = puVar2[0xf];
        if (local_10 - local_20 < local_28) {
          local_28 = local_28 - (local_10 - local_20);
          if (puVar2[10] < local_28) {
            local_28 = local_28 - puVar2[10];
            local_14 = (undefined1 *)((puVar2[0xb] + puVar2[8]) - local_28);
          }
          else {
            local_14 = (undefined1 *)((puVar2[0xb] - local_28) + puVar2[10]);
          }
          local_8 = puVar2[0xe];
          if (local_8 < local_28) goto LAB_0074366d;
        }
        else {
          local_14 = local_18 + -local_28;
          local_8 = puVar2[0xe];
LAB_0074366d:
          local_28 = local_8;
        }
        if (local_20 < local_28) {
          local_28 = local_20;
        }
        local_20 = local_20 - local_28;
        puVar2[0xe] = local_8 - local_28;
        do {
          uVar1 = *local_14;
          local_14 = local_14 + 1;
          *local_18 = uVar1;
          local_18 = local_18 + 1;
          local_28 = local_28 - 1;
        } while (local_28 != 0);
        uVar3 = uVar10;
        if (puVar2[0xe] == 0) {
          *puVar2 = 0x12;
        }
        goto LAB_007437a3;
      }
      goto LAB_00743801;
    case 0x15:
      goto switchD_00742620_caseD_15;
    case 0x16:
      goto switchD_00742620_caseD_16;
    case 0x17:
      if (local_20 == 0) goto LAB_00743801;
      *local_18 = (char)puVar2[0xe];
      local_18 = local_18 + 1;
      local_20 = local_20 - 1;
      *puVar2 = 0x12;
      goto LAB_007437a3;
    case 0x18:
      if (puVar2[2] != 0) {
        for (; puVar12 < (undefined1 *)0x20; puVar12 = puVar12 + 8) {
          uVar10 = 0;
          if (uVar3 == 0) goto LAB_00743801;
          bVar6 = *_Src;
          local_2c = uVar3 - 1;
          _Src = _Src + 1;
          uVar11 = uVar11 + ((uint)bVar6 << ((byte)puVar12 & 0x1f));
          uVar3 = local_2c;
        }
        iVar4 = local_10 - local_20;
        param_1[5] = param_1[5] + iVar4;
        puVar2[6] = puVar2[6] + iVar4;
        uVar11 = 0;
        if (iVar4 != 0) {
          puVar2[5] = 0;
          param_1[0xc] = 0;
        }
        local_24 = 0;
        puVar12 = (undefined1 *)0x0;
        local_10 = local_20;
      }
      *puVar2 = 0x19;
    case 0x19:
      if ((puVar2[2] != 0) && (puVar2[4] != 0)) {
        for (; puVar12 < (undefined1 *)0x20; puVar12 = puVar12 + 8) {
          uVar10 = 0;
          if (uVar3 == 0) goto LAB_00743801;
          bVar6 = *_Src;
          uVar3 = uVar3 - 1;
          _Src = _Src + 1;
          uVar11 = uVar11 + ((uint)bVar6 << ((byte)puVar12 & 0x1f));
          local_2c = uVar3;
          local_24 = uVar11;
        }
        if (uVar11 != puVar2[6]) {
          param_1[6] = (int)"incorrect length check";
          break;
        }
        uVar11 = 0;
        puVar12 = (undefined1 *)0x0;
      }
      *puVar2 = 0x1a;
      uVar10 = uVar3;
switchD_00742620_caseD_1a:
      local_c = 1;
      goto LAB_00743801;
    case 0x1a:
      goto switchD_00742620_caseD_1a;
    case 0x1b:
      local_c = -3;
      goto LAB_00743801;
    case 0x1c:
      goto switchD_00742620_caseD_1c;
    }
    *puVar2 = 0x1b;
LAB_007437a3:
    uVar9 = *puVar2;
    uVar10 = uVar3;
  } while( true );
}



undefined4 FUN_00743970(int param_1)

{
  int iVar1;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
     (*(code **)(param_1 + 0x24) != (code *)0x0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2c);
    if (iVar1 != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}



void FUN_007439c0(void)

{
  int in_EAX;
  undefined4 in_ECX;
  
  *(char *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) = (char)((uint)in_ECX >> 8);
  *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
  *(char *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) = (char)in_ECX;
  *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
  return;
}



void FUN_007439f0(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  uint _Size;
  
  _Size = *(uint *)(*(int *)(in_EAX + 0x1c) + 0x14);
  if (*(uint *)(in_EAX + 0x10) < _Size) {
    _Size = *(uint *)(in_EAX + 0x10);
  }
  if (_Size != 0) {
    _memcpy(*(void **)(in_EAX + 0xc),*(void **)(*(int *)(in_EAX + 0x1c) + 0x10),_Size);
    *(int *)(in_EAX + 0xc) = *(int *)(in_EAX + 0xc) + _Size;
    piVar1 = (int *)(*(int *)(in_EAX + 0x1c) + 0x10);
    *piVar1 = *piVar1 + _Size;
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + _Size;
    *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) - _Size;
    piVar1 = (int *)(*(int *)(in_EAX + 0x1c) + 0x14);
    *piVar1 = *piVar1 - _Size;
    iVar2 = *(int *)(in_EAX + 0x1c);
    if (*(int *)(iVar2 + 0x14) == 0) {
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 8);
    }
  }
  return;
}



uint FUN_00743a40(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  if (((param_1 == (int *)0x0) || (puVar1 = (undefined4 *)param_1[7], puVar1 == (undefined4 *)0x0))
     || (4 < param_2)) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || ((*param_1 == 0 && (param_1[1] != 0)))) ||
     ((puVar1[1] == 0x29a && (param_2 != 4)))) {
    param_1[6] = (int)"stream error";
    return 0xfffffffe;
  }
  if (param_1[4] == 0) {
    param_1[6] = (int)"buffer error";
    return 0xfffffffb;
  }
  iVar4 = puVar1[8];
  *puVar1 = param_1;
  puVar1[8] = param_2;
  if (puVar1[1] == 0x2a) {
    if (puVar1[6] == 2) {
      *(undefined1 *)(puVar1[2] + puVar1[5]) = 0x1f;
      puVar1[5] = puVar1[5] + 1;
      *(undefined1 *)(puVar1[5] + puVar1[2]) = 0x8b;
      puVar1[5] = puVar1[5] + 1;
      *(undefined1 *)(puVar1[5] + puVar1[2]) = 8;
      puVar1[5] = puVar1[5] + 1;
      *(undefined1 *)(puVar1[5] + puVar1[2]) = 0;
      puVar1[5] = puVar1[5] + 1;
      *(undefined1 *)(puVar1[5] + puVar1[2]) = 0;
      puVar1[5] = puVar1[5] + 1;
      *(undefined1 *)(puVar1[5] + puVar1[2]) = 0;
      puVar1[5] = puVar1[5] + 1;
      *(undefined1 *)(puVar1[5] + puVar1[2]) = 0;
      puVar1[5] = puVar1[5] + 1;
      *(undefined1 *)(puVar1[5] + puVar1[2]) = 0;
      puVar1[5] = puVar1[5] + 1;
      if (puVar1[0x1f] == 9) {
        uVar2 = 2;
      }
      else if (((int)puVar1[0x20] < 2) && (1 < (int)puVar1[0x1f])) {
        uVar2 = 0;
      }
      else {
        uVar2 = 4;
      }
      *(undefined1 *)(puVar1[5] + puVar1[2]) = uVar2;
      puVar1[5] = puVar1[5] + 1;
      *(undefined1 *)(puVar1[5] + puVar1[2]) = 0xff;
      puVar1[5] = puVar1[5] + 1;
      puVar1[1] = 0x71;
      iVar3 = FUN_00745d90(0,0,0);
    }
    else {
      puVar1[1] = 0x71;
      FUN_007439c0();
      if (puVar1[0x19] != 0) {
        FUN_007439c0();
        FUN_007439c0();
      }
      iVar3 = FUN_007459b0(0,0,0);
    }
    param_1[0xc] = iVar3;
  }
  if (puVar1[5] == 0) {
    if (((param_1[1] == 0) && ((int)param_2 <= iVar4)) && (param_2 != 4)) {
      param_1[6] = (int)"buffer error";
      return 0xfffffffb;
    }
LAB_00743c70:
    if (puVar1[1] == 0x29a) {
      if (param_1[1] != 0) {
        param_1[6] = (int)"buffer error";
        return 0xfffffffb;
      }
LAB_00743c98:
      if ((puVar1[0x1b] != 0) || ((param_2 != 0 && (puVar1[1] != 0x29a)))) goto LAB_00743cb1;
    }
    else {
      if (param_1[1] == 0) goto LAB_00743c98;
LAB_00743cb1:
      iVar4 = (*(code *)(&PTR_LAB_00a82738)[puVar1[0x1f] * 3])(puVar1,param_2);
      if ((iVar4 == 2) || (iVar4 == 3)) {
        puVar1[1] = 0x29a;
      }
      if ((iVar4 == 0) || (iVar4 == 2)) {
        if (param_1[4] != 0) {
          return 0;
        }
        puVar1[8] = 0xffffffff;
        return 0;
      }
      if (iVar4 == 1) {
        if (param_2 == 1) {
          FUN_00747420(puVar1);
        }
        else {
          FUN_00747380(puVar1,0,0,0);
          if (param_2 == 3) {
            *(undefined2 *)(puVar1[0xf] + -2 + puVar1[0x11] * 2) = 0;
            _memset((void *)puVar1[0xf],0,puVar1[0x11] * 2 - 2);
          }
        }
        FUN_007439f0();
        if (param_1[4] == 0) goto LAB_00743c3e;
      }
    }
    if (param_2 == 4) {
      if ((int)puVar1[6] < 1) {
        return 1;
      }
      if (puVar1[6] == 2) {
        *(char *)(puVar1[2] + puVar1[5]) = (char)param_1[0xc];
        puVar1[5] = puVar1[5] + 1;
        *(undefined1 *)(puVar1[5] + puVar1[2]) = *(undefined1 *)((int)param_1 + 0x31);
        puVar1[5] = puVar1[5] + 1;
        *(undefined1 *)(puVar1[5] + puVar1[2]) = *(undefined1 *)((int)param_1 + 0x32);
        puVar1[5] = puVar1[5] + 1;
        *(undefined1 *)(puVar1[5] + puVar1[2]) = *(undefined1 *)((int)param_1 + 0x33);
        puVar1[5] = puVar1[5] + 1;
        *(char *)(puVar1[5] + puVar1[2]) = (char)param_1[2];
        puVar1[5] = puVar1[5] + 1;
        *(undefined1 *)(puVar1[5] + puVar1[2]) = *(undefined1 *)((int)param_1 + 9);
        puVar1[5] = puVar1[5] + 1;
        *(undefined1 *)(puVar1[5] + puVar1[2]) = *(undefined1 *)((int)param_1 + 10);
        puVar1[5] = puVar1[5] + 1;
        *(undefined1 *)(puVar1[5] + puVar1[2]) = *(undefined1 *)((int)param_1 + 0xb);
        puVar1[5] = puVar1[5] + 1;
      }
      else {
        FUN_007439c0();
        FUN_007439c0();
      }
      FUN_007439f0();
      if (0 < (int)puVar1[6]) {
        puVar1[6] = -puVar1[6];
      }
      return (uint)(puVar1[5] == 0);
    }
  }
  else {
    FUN_007439f0();
    if (param_1[4] != 0) goto LAB_00743c70;
LAB_00743c3e:
    puVar1[8] = 0xffffffff;
  }
  return 0;
}



uint FUN_00743e50(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) {
    return 0xfffffffe;
  }
  iVar2 = *(int *)(iVar1 + 4);
  if (((iVar2 != 0x2a) && (iVar2 != 0x71)) && (iVar2 != 0x29a)) {
    return 0xfffffffe;
  }
  if (*(int *)(iVar1 + 8) != 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(int *)(iVar1 + 8));
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x3c);
  if (iVar1 != 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
  if (iVar1 != 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
  if (iVar1 != 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
  }
  (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return (iVar2 != 0x71) - 1 & 0xfffffffd;
}



void FUN_00743f10(void)

{
  ushort uVar1;
  int iVar2;
  int unaff_ESI;
  
  *(int *)(unaff_ESI + 0x34) = *(int *)(unaff_ESI + 0x24) * 2;
  *(undefined2 *)(*(int *)(unaff_ESI + 0x3c) + -2 + *(int *)(unaff_ESI + 0x44) * 2) = 0;
  _memset(*(void **)(unaff_ESI + 0x3c),0,*(int *)(unaff_ESI + 0x44) * 2 - 2);
  iVar2 = *(int *)(unaff_ESI + 0x7c) * 0xc;
  *(uint *)(unaff_ESI + 0x78) = (uint)*(ushort *)(&DAT_00a82732 + *(int *)(unaff_ESI + 0x7c) * 0xc);
  *(uint *)(unaff_ESI + 0x84) = (uint)*(ushort *)(&DAT_00a82730 + iVar2);
  *(uint *)(unaff_ESI + 0x88) = (uint)*(ushort *)(&DAT_00a82734 + iVar2);
  uVar1 = *(ushort *)(&DAT_00a82736 + iVar2);
  *(undefined4 *)(unaff_ESI + 100) = 0;
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  *(undefined4 *)(unaff_ESI + 0x6c) = 0;
  *(undefined4 *)(unaff_ESI + 0x60) = 0;
  *(undefined4 *)(unaff_ESI + 0x40) = 0;
  *(uint *)(unaff_ESI + 0x74) = (uint)uVar1;
  *(undefined4 *)(unaff_ESI + 0x70) = 2;
  *(undefined4 *)(unaff_ESI + 0x58) = 2;
  return;
}



char * FUN_00743f90(void)

{
  char *pcVar1;
  uint uVar2;
  uint in_EAX;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int unaff_EDI;
  char local_12;
  char local_11;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_10 = *(uint *)(unaff_EDI + 0x74);
  uVar2 = *(uint *)(unaff_EDI + 100);
  pcVar3 = *(char **)(unaff_EDI + 0x70);
  pcVar4 = (char *)(*(int *)(unaff_EDI + 0x30) + uVar2);
  if (*(int *)(unaff_EDI + 0x24) - 0x106U < uVar2) {
    local_8 = (uVar2 - *(int *)(unaff_EDI + 0x24)) + 0x106;
  }
  else {
    local_8 = 0;
  }
  local_12 = pcVar4[(int)(pcVar3 + -1)];
  local_11 = pcVar4[(int)pcVar3];
  pcVar1 = pcVar4 + 0x102;
  if (*(char **)(unaff_EDI + 0x84) <= pcVar3) {
    local_10 = local_10 >> 2;
  }
  local_c = *(uint *)(unaff_EDI + 0x88);
  if (*(uint *)(unaff_EDI + 0x6c) < *(uint *)(unaff_EDI + 0x88)) {
    local_c = *(uint *)(unaff_EDI + 0x6c);
  }
  do {
    pcVar7 = (char *)(*(int *)(unaff_EDI + 0x30) + in_EAX);
    if ((((pcVar7[(int)pcVar3] == local_11) && (pcVar7[(int)(pcVar3 + -1)] == local_12)) &&
        (*pcVar7 == *pcVar4)) && (pcVar7[1] == pcVar4[1])) {
      pcVar7 = pcVar7 + 2;
      pcVar5 = pcVar4 + 2;
      while (((((pcVar6 = pcVar5 + 1, pcVar5[1] == pcVar7[1] &&
                (pcVar6 = pcVar5 + 2, pcVar5[2] == pcVar7[2])) &&
               ((pcVar6 = pcVar5 + 3, pcVar5[3] == pcVar7[3] &&
                ((pcVar6 = pcVar5 + 4, pcVar5[4] == pcVar7[4] &&
                 (pcVar6 = pcVar5 + 5, pcVar5[5] == pcVar7[5])))))) &&
              (pcVar6 = pcVar5 + 6, pcVar5[6] == pcVar7[6])) &&
             (pcVar6 = pcVar5 + 7, pcVar5[7] == pcVar7[7]))) {
        pcVar6 = pcVar5 + 8;
        pcVar7 = pcVar7 + 8;
        if ((pcVar5[8] != *pcVar7) || (pcVar5 = pcVar6, pcVar1 <= pcVar6)) break;
      }
      pcVar7 = pcVar6 + (0x102 - (int)pcVar1);
      if ((int)pcVar3 < (int)pcVar7) {
        *(uint *)(unaff_EDI + 0x68) = in_EAX;
        if ((int)local_c <= (int)pcVar7) break;
        local_12 = pcVar4[(int)(pcVar6 + (0x101 - (int)pcVar1))];
        local_11 = pcVar4[(int)pcVar7];
        pcVar3 = pcVar7;
      }
    }
    pcVar7 = pcVar3;
    in_EAX = (uint)*(ushort *)
                    (*(int *)(unaff_EDI + 0x38) + (*(uint *)(unaff_EDI + 0x2c) & in_EAX) * 2);
    if (in_EAX <= local_8) break;
    local_10 = local_10 - 1;
    pcVar3 = pcVar7;
  } while (local_10 != 0);
  pcVar3 = *(char **)(unaff_EDI + 0x6c);
  if (pcVar7 <= *(char **)(unaff_EDI + 0x6c)) {
    pcVar3 = pcVar7;
  }
  return pcVar3;
}



char * FUN_00744110(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x30);
  pcVar2 = (char *)(*(int *)(unaff_ESI + 100) + iVar1);
  if ((*(char *)(iVar1 + param_1) == *pcVar2) && (*(char *)(iVar1 + param_1 + 1) == pcVar2[1])) {
    pcVar5 = (char *)(iVar1 + param_1 + 2);
    pcVar3 = pcVar2 + 2;
    while (((((pcVar4 = pcVar3 + 1, pcVar3[1] == pcVar5[1] &&
              (pcVar4 = pcVar3 + 2, pcVar3[2] == pcVar5[2])) &&
             (pcVar4 = pcVar3 + 3, pcVar3[3] == pcVar5[3])) &&
            ((pcVar4 = pcVar3 + 4, pcVar3[4] == pcVar5[4] &&
             (pcVar4 = pcVar3 + 5, pcVar3[5] == pcVar5[5])))) &&
           ((pcVar4 = pcVar3 + 6, pcVar3[6] == pcVar5[6] &&
            (pcVar4 = pcVar3 + 7, pcVar3[7] == pcVar5[7]))))) {
      pcVar4 = pcVar3 + 8;
      pcVar5 = pcVar5 + 8;
      if ((pcVar3[8] != *pcVar5) || (pcVar3 = pcVar4, pcVar2 + 0x102 <= pcVar4)) break;
    }
    pcVar4 = pcVar4 + (0x102 - (int)(pcVar2 + 0x102));
    if (2 < (int)pcVar4) {
      *(int *)(unaff_ESI + 0x68) = param_1;
      if (pcVar4 <= *(char **)(unaff_ESI + 0x6c)) {
        return pcVar4;
      }
      return *(char **)(unaff_ESI + 0x6c);
    }
  }
  return (char *)0x2;
}



void FUN_007441e0(void)

{
  ushort *puVar1;
  uint _Size;
  int *piVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  uint _Size_00;
  int *unaff_ESI;
  uint local_8;
  
  _Size = unaff_ESI[9];
  do {
    local_8 = (unaff_ESI[0xd] - unaff_ESI[0x1b]) - unaff_ESI[0x19];
    if (unaff_ESI[9] + -0x106 + _Size <= (uint)unaff_ESI[0x19]) {
      _memcpy((void *)unaff_ESI[0xc],(void *)(unaff_ESI[0xc] + _Size),_Size);
      iVar8 = unaff_ESI[0x11];
      unaff_ESI[0x1a] = unaff_ESI[0x1a] - _Size;
      unaff_ESI[0x19] = unaff_ESI[0x19] - _Size;
      unaff_ESI[0x15] = unaff_ESI[0x15] - _Size;
      psVar7 = (short *)(unaff_ESI[0xf] + iVar8 * 2);
      do {
        puVar1 = (ushort *)(psVar7 + -1);
        psVar7 = psVar7 + -1;
        if (*puVar1 < _Size) {
          sVar5 = 0;
        }
        else {
          sVar5 = *puVar1 - (short)_Size;
        }
        iVar8 = iVar8 + -1;
        *psVar7 = sVar5;
      } while (iVar8 != 0);
      psVar7 = (short *)(unaff_ESI[0xe] + _Size * 2);
      uVar9 = _Size;
      do {
        puVar1 = (ushort *)(psVar7 + -1);
        psVar7 = psVar7 + -1;
        if (*puVar1 < _Size) {
          sVar5 = 0;
        }
        else {
          sVar5 = *puVar1 - (short)_Size;
        }
        uVar9 = uVar9 - 1;
        *psVar7 = sVar5;
      } while (uVar9 != 0);
      local_8 = local_8 + _Size;
    }
    piVar2 = (int *)*unaff_ESI;
    if (piVar2[1] == 0) {
      return;
    }
    iVar8 = unaff_ESI[0x1b];
    iVar3 = unaff_ESI[0x19];
    uVar9 = piVar2[1];
    iVar4 = unaff_ESI[0xc];
    _Size_00 = uVar9;
    if (local_8 < uVar9) {
      _Size_00 = local_8;
    }
    if (_Size_00 != 0) {
      piVar2[1] = uVar9 - _Size_00;
      if (*(int *)(piVar2[7] + 0x18) == 1) {
        iVar6 = FUN_007459b0(piVar2[0xc],*piVar2,_Size_00);
LAB_007442cd:
        piVar2[0xc] = iVar6;
      }
      else if (*(int *)(piVar2[7] + 0x18) == 2) {
        iVar6 = FUN_00745d90(piVar2[0xc],*piVar2,_Size_00);
        goto LAB_007442cd;
      }
      _memcpy((void *)(iVar8 + iVar3 + iVar4),(void *)*piVar2,_Size_00);
      *piVar2 = *piVar2 + _Size_00;
      piVar2[2] = piVar2[2] + _Size_00;
    }
    unaff_ESI[0x1b] = unaff_ESI[0x1b] + _Size_00;
    if (2 < (uint)unaff_ESI[0x1b]) {
      uVar9 = (uint)*(byte *)(unaff_ESI[0x19] + unaff_ESI[0xc]);
      unaff_ESI[0x10] = uVar9;
      unaff_ESI[0x10] =
           (uVar9 << ((byte)unaff_ESI[0x14] & 0x1f) ^
           (uint)((byte *)(unaff_ESI[0x19] + unaff_ESI[0xc]))[1]) & unaff_ESI[0x13];
    }
    if (0x105 < (uint)unaff_ESI[0x1b]) {
      return;
    }
    if (*(int *)(*unaff_ESI + 4) == 0) {
      return;
    }
  } while( true );
}



byte FUN_00744510(int *param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  bool bVar9;
  
  uVar8 = 0;
  do {
    uVar4 = param_1[0x1b];
    if (uVar4 < 0x106) {
      FUN_007441e0();
      uVar4 = param_1[0x1b];
      if ((uVar4 < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (uVar4 == 0) {
        iVar3 = param_1[0x15];
        if (iVar3 < 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = param_1[0xc] + iVar3;
        }
        FUN_00747610(param_1,iVar5,param_1[0x19] - iVar3,param_2 == 4);
        param_1[0x15] = param_1[0x19];
        FUN_007439f0();
        if (*(int *)(*param_1 + 0x10) == 0) {
          return (param_2 != 4) - 1U & 2;
        }
        return (param_2 == 4) * '\x02' + 1;
      }
    }
    if (2 < uVar4) {
      uVar8 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
              (uint)*(byte *)(param_1[0xc] + 2 + param_1[0x19])) & param_1[0x13];
      param_1[0x10] = uVar8;
      *(undefined2 *)(param_1[0xe] + (param_1[0xb] & param_1[0x19]) * 2) =
           *(undefined2 *)(param_1[0xf] + uVar8 * 2);
      uVar8 = (uint)*(ushort *)(param_1[0xe] + (param_1[0x19] & param_1[0xb]) * 2);
      *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
    }
    if ((uVar8 != 0) && (param_1[0x19] - uVar8 <= param_1[9] - 0x106U)) {
      if (param_1[0x20] < 2) {
        iVar3 = FUN_00743f90();
        param_1[0x16] = iVar3;
      }
      else if ((param_1[0x20] == 3) && (param_1[0x19] - uVar8 == 1)) {
        iVar3 = FUN_00744110(uVar8);
        param_1[0x16] = iVar3;
      }
    }
    if ((uint)param_1[0x16] < 3) {
      bVar2 = *(byte *)(param_1[0x19] + param_1[0xc]);
      *(undefined2 *)(param_1[0x5a7] + param_1[0x5a6] * 2) = 0;
      *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar2;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      *(short *)(param_1 + bVar2 + 0x23) = (short)param_1[bVar2 + 0x23] + 1;
      bVar9 = param_1[0x5a6] == param_1[0x5a5] + -1;
      param_1[0x1b] = param_1[0x1b] + -1;
LAB_00744782:
      param_1[0x19] = param_1[0x19] + 1;
    }
    else {
      sVar7 = (short)param_1[0x19] - (short)param_1[0x1a];
      iVar3 = param_1[0x16];
      *(short *)(param_1[0x5a7] + param_1[0x5a6] * 2) = sVar7;
      bVar2 = (char)iVar3 - 3;
      *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar2;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      *(short *)(param_1 + (byte)(&DAT_00a851d0)[bVar2] + 0x124) =
           (short)param_1[(byte)(&DAT_00a851d0)[bVar2] + 0x124] + 1;
      uVar6 = sVar7 - 1;
      if (uVar6 < 0x100) {
        bVar2 = (&DAT_00a84fd0)[uVar6];
      }
      else {
        bVar2 = (&DAT_00a850d0)[uVar6 >> 7];
      }
      *(short *)(param_1 + bVar2 + 0x260) = (short)param_1[bVar2 + 0x260] + 1;
      bVar9 = param_1[0x5a6] == param_1[0x5a5] + -1;
      uVar4 = param_1[0x16];
      param_1[0x1b] = param_1[0x1b] - uVar4;
      if ((uVar4 <= (uint)param_1[0x1e]) && (2 < (uint)param_1[0x1b])) {
        param_1[0x16] = uVar4 - 1;
        do {
          param_1[0x19] = param_1[0x19] + 1;
          uVar8 = ((uint)*(byte *)(param_1[0x19] + 2U + param_1[0xc]) ^
                  param_1[0x10] << ((byte)param_1[0x14] & 0x1f)) & param_1[0x13];
          param_1[0x10] = uVar8;
          *(undefined2 *)(param_1[0xe] + (param_1[0xb] & param_1[0x19]) * 2) =
               *(undefined2 *)(param_1[0xf] + uVar8 * 2);
          uVar8 = (uint)*(ushort *)(param_1[0xe] + (param_1[0x19] & param_1[0xb]) * 2);
          *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
          piVar1 = param_1 + 0x16;
          *piVar1 = *piVar1 + -1;
        } while (*piVar1 != 0);
        goto LAB_00744782;
      }
      param_1[0x19] = param_1[0x19] + uVar4;
      param_1[0x16] = 0;
      uVar4 = (uint)*(byte *)(param_1[0x19] + param_1[0xc]);
      param_1[0x10] = uVar4;
      param_1[0x10] =
           (uVar4 << ((byte)param_1[0x14] & 0x1f) ^
           (uint)((byte *)(param_1[0x19] + param_1[0xc]))[1]) & param_1[0x13];
    }
    if (bVar9) {
      iVar3 = param_1[0x15];
      if (iVar3 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = param_1[0xc] + iVar3;
      }
      FUN_00747610(param_1,iVar5,param_1[0x19] - iVar3,0);
      iVar3 = *param_1;
      param_1[0x15] = param_1[0x19];
      uVar4 = *(uint *)(*(int *)(iVar3 + 0x1c) + 0x14);
      if (*(uint *)(iVar3 + 0x10) < uVar4) {
        uVar4 = *(uint *)(iVar3 + 0x10);
      }
      if (uVar4 != 0) {
        _memcpy(*(void **)(iVar3 + 0xc),*(void **)(*(int *)(iVar3 + 0x1c) + 0x10),uVar4);
        *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + uVar4;
        piVar1 = (int *)(*(int *)(iVar3 + 0x1c) + 0x10);
        *piVar1 = *piVar1 + uVar4;
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + uVar4;
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) - uVar4;
        piVar1 = (int *)(*(int *)(iVar3 + 0x1c) + 0x14);
        *piVar1 = *piVar1 - uVar4;
        iVar3 = *(int *)(iVar3 + 0x1c);
        if (*(int *)(iVar3 + 0x14) == 0) {
          *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar3 + 8);
        }
      }
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}



undefined4 FUN_00744d00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) &&
      (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 2;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 0x14) = 0;
    if (*(int *)(iVar1 + 0x18) < 0) {
      *(int *)(iVar1 + 0x18) = -*(int *)(iVar1 + 0x18);
    }
    *(uint *)(iVar1 + 4) = (-(uint)(*(int *)(iVar1 + 0x18) != 0) & 0xffffffb9) + 0x71;
    if (*(int *)(iVar1 + 0x18) == 2) {
      uVar2 = FUN_00745d90();
    }
    else {
      uVar2 = FUN_007459b0(0,0,0);
    }
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    FUN_00746fb0(iVar1);
    FUN_00743f10();
    return 0;
  }
  return 0xfffffffe;
}



undefined4
FUN_00744d90(int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,char *param_7
            ,int param_8)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 1;
  if (((param_7 == (char *)0x0) || (*param_7 != '1')) || (param_8 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(code **)(param_1 + 0x20) = FUN_00744fe0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(code **)(param_1 + 0x24) = FUN_00745000;
  }
  if (param_2 == 0xffffffff) {
    param_2 = 6;
  }
  if (param_4 < 0) {
    iVar4 = 0;
    param_4 = -param_4;
  }
  else if (0xf < param_4) {
    iVar4 = 2;
    param_4 = param_4 + -0x10;
  }
  if (((param_5 - 1U < 9) && (param_3 == 8)) &&
     ((param_4 - 8U < 8 && ((param_2 < 10 && (param_6 < 4)))))) {
    if (param_4 == 8) {
      param_4 = 9;
    }
    piVar2 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x16b8);
    if (piVar2 != (int *)0x0) {
      *(int **)(param_1 + 0x1c) = piVar2;
      piVar2[6] = iVar4;
      iVar5 = 1 << ((byte)param_4 & 0x1f);
      piVar2[10] = param_4;
      piVar2[0xb] = iVar5 + -1;
      iVar4 = 1 << ((byte)(param_5 + 7) & 0x1f);
      piVar2[0x12] = param_5 + 7;
      *piVar2 = param_1;
      piVar2[0x11] = iVar4;
      piVar2[0x13] = iVar4 + -1;
      piVar2[9] = iVar5;
      piVar2[0x14] = (param_5 + 9U) / 3;
      iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar5,2);
      piVar2[0xc] = iVar4;
      iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar2[9],2);
      piVar2[0xe] = iVar4;
      iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar2[0x11],2);
      piVar2[0xf] = iVar4;
      iVar4 = 1 << ((char)param_5 + 6U & 0x1f);
      piVar2[0x5a5] = iVar4;
      iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar4,4);
      uVar1 = piVar2[0x5a5];
      piVar2[2] = iVar4;
      piVar2[3] = uVar1 * 4;
      if ((((piVar2[0xc] != 0) && (piVar2[0xe] != 0)) && (piVar2[0xf] != 0)) && (iVar4 != 0)) {
        piVar2[0x5a7] = iVar4 + (uVar1 & 0xfffffffe);
        piVar2[0x5a4] = iVar4 + uVar1 * 3;
        piVar2[0x1f] = param_2;
        piVar2[0x20] = param_6;
        *(undefined1 *)((int)piVar2 + 0x1d) = 8;
        uVar3 = FUN_00744d00(param_1);
        return uVar3;
      }
      piVar2[1] = 0x29a;
      *(char **)(param_1 + 0x18) = "insufficient memory";
      FUN_00743e50(param_1);
    }
    return 0xfffffffc;
  }
  return 0xfffffffe;
}



void FUN_00744fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00744d90(param_1,param_2,8,0xf,8,0,param_3,param_4);
  return;
}



void FUN_00744fe0(undefined4 param_1,int param_2,int param_3)

{
  _malloc(param_2 * param_3);
  return;
}



void FUN_00745000(undefined4 param_1,void *param_2)

{
  _free(param_2);
  return;
}



void FUN_00745010(int *param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  byte *local_3c;
  uint local_30;
  
  puVar3 = (undefined4 *)param_1[7];
  uVar15 = puVar3[0xc];
  pbVar16 = (byte *)(*param_1 + -1);
  pbVar2 = pbVar16 + param_1[1] + -5;
  iVar4 = param_1[4];
  iVar13 = iVar4 - param_2;
  puVar20 = (undefined1 *)(param_1[3] + -1);
  iVar19 = puVar3[8];
  uVar5 = puVar3[9];
  uVar6 = puVar3[10];
  iVar26 = puVar3[0xb];
  iVar7 = puVar3[0x11];
  iVar8 = puVar3[0x12];
  uVar9 = puVar3[0x13];
  uVar10 = puVar3[0x14];
  uVar24 = puVar3[0xd];
  puVar21 = puVar20;
  local_3c = pbVar16;
LAB_007450b0:
  if (uVar24 < 0xf) {
    pbVar17 = pbVar16 + 1;
    pbVar16 = pbVar16 + 2;
    uVar15 = uVar15 + ((uint)*pbVar17 << ((byte)uVar24 & 0x1f)) +
             ((uint)*pbVar16 << ((byte)uVar24 + 8 & 0x1f));
    uVar24 = uVar24 + 0x10;
    local_3c = pbVar16;
  }
  uVar14 = *(uint *)(iVar7 + ((1 << ((byte)uVar9 & 0x1f)) - 1U & uVar15) * 4);
  uVar15 = uVar15 >> ((byte)(uVar14 >> 8) & 0x1f);
  uVar24 = uVar24 - (uVar14 >> 8 & 0xff);
  while ((uVar14 & 0xff) != 0) {
    if ((uVar14 & 0x10) != 0) {
      param_2 = uVar14 >> 0x10;
      uVar14 = uVar14 & 0xf;
      if (uVar14 != 0) {
        if (uVar24 < uVar14) {
          pbVar17 = pbVar16 + 1;
          pbVar16 = pbVar16 + 1;
          uVar15 = uVar15 + ((uint)*pbVar17 << ((byte)uVar24 & 0x1f));
          uVar24 = uVar24 + 8;
          local_3c = pbVar16;
        }
        param_2 = param_2 + ((1 << (sbyte)uVar14) - 1U & uVar15);
        uVar15 = uVar15 >> (sbyte)uVar14;
        uVar24 = uVar24 - uVar14;
      }
      if (uVar24 < 0xf) {
        pbVar17 = pbVar16 + 1;
        pbVar1 = pbVar16 + 2;
        pbVar16 = pbVar16 + 2;
        uVar15 = uVar15 + ((uint)*pbVar17 << ((byte)uVar24 & 0x1f)) +
                 ((uint)*pbVar1 << ((byte)uVar24 + 8 & 0x1f));
        uVar24 = uVar24 + 0x10;
        local_3c = pbVar16;
      }
      local_30 = *(uint *)(iVar8 + ((1 << ((byte)uVar10 & 0x1f)) - 1U & uVar15) * 4);
      uVar14 = local_30 & 0xff;
      uVar15 = uVar15 >> ((byte)(local_30 >> 8) & 0x1f);
      uVar24 = uVar24 - (local_30 >> 8 & 0xff);
      if ((local_30 & 0x10) == 0) goto LAB_007451d0;
      goto LAB_0074520b;
    }
    if ((uVar14 & 0x40) != 0) {
      if ((uVar14 & 0x20) != 0) {
        *puVar3 = 0xb;
        goto LAB_00745474;
      }
      param_1[6] = (int)"invalid literal/length code";
      goto LAB_00745466;
    }
    uVar14 = *(uint *)(iVar7 + (((1 << ((byte)uVar14 & 0x1f)) - 1U & uVar15) + (uVar14 >> 0x10)) * 4
                      );
    uVar15 = uVar15 >> ((byte)(uVar14 >> 8) & 0x1f);
    uVar24 = uVar24 - (uVar14 >> 8 & 0xff);
  }
  puVar21[1] = (char)(uVar14 >> 0x10);
  puVar22 = puVar21 + 1;
  goto LAB_007453a5;
  while( true ) {
    local_30 = *(uint *)(iVar8 + (((1 << ((byte)uVar14 & 0x1f)) - 1U & uVar15) + (local_30 >> 0x10))
                                 * 4);
    uVar14 = local_30 & 0xff;
    uVar15 = uVar15 >> ((byte)(local_30 >> 8) & 0x1f);
    uVar24 = uVar24 - (local_30 >> 8 & 0xff);
    if ((local_30 & 0x10) != 0) break;
LAB_007451d0:
    if ((uVar14 & 0x40) != 0) {
      param_1[6] = (int)"invalid distance code";
LAB_00745466:
      *puVar3 = 0x1b;
      goto LAB_00745474;
    }
  }
LAB_0074520b:
  uVar14 = uVar14 & 0xf;
  pbVar17 = pbVar16;
  uVar25 = uVar24;
  if (uVar24 < uVar14) {
    pbVar17 = pbVar16 + 1;
    uVar25 = uVar24 + 8;
    uVar15 = uVar15 + ((uint)pbVar16[1] << ((byte)uVar24 & 0x1f));
    local_3c = pbVar17;
    if (uVar25 < uVar14) {
      pbVar17 = pbVar16 + 2;
      uVar15 = uVar15 + ((uint)pbVar16[2] << ((byte)uVar25 & 0x1f));
      uVar25 = uVar24 + 0x10;
      local_3c = pbVar17;
    }
  }
  uVar24 = uVar25 - uVar14;
  uVar25 = (local_30 >> 0x10) + ((1 << (sbyte)uVar14) - 1U & uVar15);
  uVar15 = uVar15 >> (sbyte)uVar14;
  if (uVar25 <= (uint)((int)puVar21 - (int)(puVar20 + iVar13))) {
    iVar11 = (int)puVar21 - uVar25;
    do {
      puVar23 = puVar21;
      iVar12 = iVar11;
      puVar23[1] = *(undefined1 *)(iVar12 + 1);
      puVar23[2] = *(undefined1 *)(iVar12 + 2);
      puVar21 = puVar23 + 3;
      *puVar21 = *(undefined1 *)(iVar12 + 3);
      param_2 = param_2 - 3;
      iVar11 = iVar12 + 3;
    } while (2 < param_2);
    pbVar16 = pbVar17;
    puVar22 = puVar21;
    if (param_2 != 0) {
      puVar23[4] = *(undefined1 *)(iVar12 + 4);
      puVar22 = puVar23 + 4;
      if (1 < param_2) {
        puVar23[5] = *(undefined1 *)(iVar12 + 5);
        puVar22 = puVar23 + 5;
      }
    }
    goto LAB_007453a5;
  }
  uVar14 = uVar25 - ((int)puVar21 - (int)(puVar20 + iVar13));
  pbVar16 = local_3c;
  if (uVar5 < uVar14) {
    param_1[6] = (int)"invalid distance too far back";
    *puVar3 = 0x1b;
LAB_00745474:
    iVar19 = (int)pbVar16 - (uVar24 >> 3);
    iVar26 = uVar24 + (uVar24 >> 3) * -8;
    *param_1 = iVar19 + 1;
    param_1[3] = (int)(puVar21 + 1);
    param_1[4] = (int)(puVar20 + iVar4 + -0x101 + (0x101 - (int)puVar21));
    param_1[1] = (int)(pbVar2 + (5 - iVar19));
    puVar3[0xd] = iVar26;
    puVar3[0xc] = uVar15 & (1 << ((byte)iVar26 & 0x1f)) - 1U;
    return;
  }
  iVar11 = iVar26 + -1;
  if (uVar6 == 0) {
    iVar12 = iVar11 + (iVar19 - uVar14);
    uVar18 = uVar14;
    if (uVar14 < param_2) {
      do {
        puVar23 = (undefined1 *)(iVar12 + 1);
        iVar12 = iVar12 + 1;
        puVar21 = puVar21 + 1;
        uVar18 = uVar18 - 1;
        *puVar21 = *puVar23;
      } while (uVar18 != 0);
LAB_00745336:
      param_2 = param_2 - uVar14;
      iVar12 = (int)puVar21 - uVar25;
    }
  }
  else if (uVar6 < uVar14) {
    uVar18 = uVar14 - uVar6;
    iVar12 = iVar11 + (uVar6 - uVar14) + iVar19;
    if (uVar18 < param_2) {
      param_2 = param_2 - uVar18;
      do {
        puVar23 = (undefined1 *)(iVar12 + 1);
        iVar12 = iVar12 + 1;
        puVar21 = puVar21 + 1;
        uVar18 = uVar18 - 1;
        *puVar21 = *puVar23;
      } while (uVar18 != 0);
      iVar12 = iVar11;
      if (uVar6 < param_2) {
        param_2 = param_2 - uVar6;
        uVar14 = uVar6;
        do {
          puVar23 = (undefined1 *)(iVar11 + 1);
          iVar11 = iVar11 + 1;
          puVar21 = puVar21 + 1;
          uVar14 = uVar14 - 1;
          *puVar21 = *puVar23;
        } while (uVar14 != 0);
        iVar12 = (int)puVar21 - uVar25;
      }
    }
  }
  else {
    iVar12 = iVar11 + (uVar6 - uVar14);
    uVar18 = uVar14;
    if (uVar14 < param_2) {
      do {
        puVar23 = (undefined1 *)(iVar12 + 1);
        iVar12 = iVar12 + 1;
        puVar21 = puVar21 + 1;
        uVar18 = uVar18 - 1;
        *puVar21 = *puVar23;
      } while (uVar18 != 0);
      goto LAB_00745336;
    }
  }
  if (2 < param_2) {
    iVar11 = (param_2 - 3) / 3 + 1;
    do {
      param_2 = param_2 - 3;
      puVar21[1] = *(undefined1 *)(iVar12 + 1);
      puVar21[2] = *(undefined1 *)(iVar12 + 2);
      puVar23 = (undefined1 *)(iVar12 + 3);
      iVar12 = iVar12 + 3;
      puVar21 = puVar21 + 3;
      iVar11 = iVar11 + -1;
      *puVar21 = *puVar23;
    } while (iVar11 != 0);
  }
  puVar22 = puVar21;
  if (param_2 != 0) {
    puVar22 = puVar21 + 1;
    *puVar22 = *(undefined1 *)(iVar12 + 1);
    if (1 < param_2) {
      puVar22 = puVar21 + 2;
      *puVar22 = *(undefined1 *)(iVar12 + 2);
    }
  }
LAB_007453a5:
  puVar21 = puVar22;
  if ((pbVar2 <= pbVar16) || (puVar20 + iVar4 + -0x101 <= puVar22)) goto LAB_00745474;
  goto LAB_007450b0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_007454d0(int param_1,int param_2,uint param_3,int *param_4,uint *param_5,ushort *param_6)

{
  short *psVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  ushort *puVar16;
  undefined4 local_88;
  uint local_84;
  uint local_80;
  ushort *local_7c;
  int local_74;
  uint local_6c;
  ushort *local_68;
  ushort *local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  undefined4 local_44;
  ushort local_40 [30];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_88;
  uVar3 = 0;
  local_7c = param_6;
  local_44 = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  local_40[0xb] = 0;
  local_40[0xc] = 0;
  local_40[0xd] = 0;
  if (param_3 != 0) {
    do {
      psVar1 = (short *)((int)&local_44 + (uint)*(ushort *)(param_2 + uVar3 * 2) * 2);
      *psVar1 = *psVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  uVar3 = 0xf;
  do {
    if (*(short *)((int)&local_44 + uVar3 * 2) != 0) break;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  local_84 = *param_5;
  if (uVar3 < *param_5) {
    local_84 = uVar3;
  }
  if (uVar3 == 0) {
    return 0xffffffff;
  }
  local_80 = 1;
  do {
    if (*(short *)((int)&local_44 + local_80 * 2) != 0) break;
    if (*(short *)((int)&local_44 + local_80 * 2 + 2) != 0) {
      local_80 = local_80 + 1;
      break;
    }
    if (local_40[local_80] != 0) {
      local_80 = local_80 + 2;
      break;
    }
    if (local_40[local_80 + 1] != 0) {
      local_80 = local_80 + 3;
      break;
    }
    if (local_40[local_80 + 2] != 0) {
      local_80 = local_80 + 4;
      break;
    }
    local_80 = local_80 + 5;
  } while (local_80 < 0x10);
  if (local_84 < local_80) {
    local_84 = local_80;
  }
  iVar11 = 1;
  uVar4 = 1;
  do {
    iVar11 = iVar11 * 2 - (uint)*(ushort *)((int)&local_44 + uVar4 * 2);
    if (iVar11 < 0) {
      return 0xffffffff;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  if ((iVar11 < 1) || ((param_1 != 0 && (param_3 - (local_44 & 0xffff) == 1)))) {
    local_40[0xf] = 0;
    uVar4 = 2;
    do {
      uVar6 = uVar4 + 2;
      *(short *)((int)local_40 + uVar4 + 0x1e) =
           *(short *)((int)local_40 + uVar4 + 0x1c) + *(short *)((int)&local_44 + uVar4);
      uVar4 = uVar6;
    } while (uVar6 < 0x1e);
    uVar4 = 0;
    if (param_3 != 0) {
      do {
        if (*(short *)(param_2 + uVar4 * 2) != 0) {
          param_6[local_40[*(ushort *)(param_2 + uVar4 * 2) + 0xe]] = (ushort)uVar4;
          local_40[*(ushort *)(param_2 + uVar4 * 2) + 0xe] =
               local_40[*(ushort *)(param_2 + uVar4 * 2) + 0xe] + 1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_3);
    }
    if (param_1 == 0) {
      local_68 = param_6;
      local_64 = param_6;
      local_5c = 0x13;
    }
    else if (param_1 == 1) {
      local_64 = (ushort *)0xa82686;
      local_68 = (ushort *)0xa826c6;
      local_5c = 0x100;
    }
    else {
      local_64 = (ushort *)&DAT_00a82908;
      local_68 = (ushort *)&DAT_00a82948;
      local_5c = -1;
    }
    local_74 = *param_4;
    bVar7 = (byte)local_84;
    local_6c = 1 << (bVar7 & 0x1f);
    local_58 = 0xffffffff;
    uVar15 = 0;
    uVar6 = 0;
    uVar4 = local_6c - 1;
    local_60 = local_6c;
    if ((param_1 != 1) || (local_6c < 0x506)) {
LAB_00745750:
      do {
        uVar2 = *local_7c;
        bVar14 = (byte)uVar6;
        bVar8 = (char)local_80 - bVar14;
        if ((int)(uint)uVar2 < local_5c) {
          local_88 = (uint)CONCAT21(uVar2,bVar8) << 8;
        }
        else if (local_5c < (int)(uint)uVar2) {
          local_88 = CONCAT22(local_64[*local_7c],CONCAT11(bVar8,(char)local_68[*local_7c]));
        }
        else {
          local_88 = CONCAT31((uint3)bVar8,0x60);
        }
        iVar11 = 1 << ((char)local_80 - bVar14 & 0x1f);
        piVar9 = (int *)(local_74 + ((uVar15 >> (bVar14 & 0x1f)) + local_60) * 4);
        uVar12 = local_60;
        do {
          uVar12 = uVar12 - iVar11;
          piVar9 = piVar9 + -iVar11;
          *piVar9 = local_88;
        } while (uVar12 != 0);
        for (uVar12 = 1 << ((char)local_80 - 1U & 0x1f); (uVar15 & uVar12) != 0;
            uVar12 = uVar12 >> 1) {
        }
        if (uVar12 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = (uVar12 - 1 & uVar15) + uVar12;
        }
        psVar1 = (short *)((int)&local_44 + local_80 * 2);
        *psVar1 = *psVar1 + -1;
        local_7c = local_7c + 1;
        if (*(short *)((int)&local_44 + local_80 * 2) == 0) {
          if (local_80 == uVar3) {
            local_88._0_2_ = CONCAT11((char)local_80 - bVar14,0x40);
            local_88 = (uint)(ushort)local_88;
            goto joined_r0x0074591d;
          }
          local_80 = (uint)*(ushort *)(param_2 + (uint)*local_7c * 2);
        }
      } while ((local_80 <= local_84) || (uVar12 = uVar4 & uVar15, uVar12 == local_58));
      if (uVar6 == 0) {
        uVar6 = local_84;
      }
      local_74 = local_74 + local_60 * 4;
      iVar10 = local_80 - uVar6;
      uVar13 = uVar6 + iVar10;
      iVar11 = 1 << ((byte)iVar10 & 0x1f);
      if (uVar13 < uVar3) {
        puVar16 = (ushort *)((int)&local_44 + uVar13 * 2);
        do {
          uVar2 = *puVar16;
          if ((int)(iVar11 - (uint)uVar2) < 1) break;
          uVar13 = uVar13 + 1;
          iVar10 = iVar10 + 1;
          puVar16 = puVar16 + 1;
          iVar11 = (iVar11 - (uint)uVar2) * 2;
        } while (uVar13 < uVar3);
      }
      local_60 = 1 << ((byte)iVar10 & 0x1f);
      local_6c = local_6c + local_60;
      if ((param_1 != 1) || (local_6c < 0x506)) {
        *(byte *)(*param_4 + uVar12 * 4) = (byte)iVar10;
        *(byte *)(*param_4 + 1 + uVar12 * 4) = bVar7;
        *(short *)(*param_4 + 2 + uVar12 * 4) = (short)(local_74 - *param_4 >> 2);
        local_58 = uVar12;
        goto LAB_00745750;
      }
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0xffffffff;
  }
  return uVar5;
joined_r0x0074591d:
  if (uVar15 == 0) {
LAB_00745975:
    *param_4 = *param_4 + local_6c * 4;
    *param_5 = local_84;
    return 0;
  }
  if ((uVar6 != 0) && ((uVar4 & uVar15) != local_58)) {
    local_74 = *param_4;
    uVar6 = 0;
    local_88._0_2_ = CONCAT11(bVar7,(undefined1)local_88);
    local_88 = (uint)(ushort)local_88;
    local_80 = local_84;
  }
  *(uint *)(local_74 + (uVar15 >> ((byte)uVar6 & 0x1f)) * 4) = local_88;
  for (uVar3 = 1 << ((char)local_80 - 1U & 0x1f); (uVar15 & uVar3) != 0; uVar3 = uVar3 >> 1) {
  }
  if (uVar3 == 0) goto LAB_00745975;
  uVar15 = (uVar3 - 1 & uVar15) + uVar3;
  goto joined_r0x0074591d;
}



uint FUN_007459b0(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  
  uVar2 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  while (param_3 != 0) {
    uVar1 = param_3;
    if (0x15af < param_3) {
      uVar1 = 0x15b0;
    }
    param_3 = param_3 - uVar1;
    if (0xf < (int)uVar1) {
      uVar18 = uVar1 >> 4;
      uVar1 = uVar1 + uVar18 * -0x10;
      do {
        iVar3 = uVar2 + *param_2;
        iVar4 = iVar3 + (uint)param_2[1];
        iVar5 = iVar4 + (uint)param_2[2];
        iVar6 = iVar5 + (uint)param_2[3];
        iVar7 = iVar6 + (uint)param_2[4];
        iVar8 = iVar7 + (uint)param_2[5];
        iVar9 = iVar8 + (uint)param_2[6];
        iVar10 = iVar9 + (uint)param_2[7];
        iVar11 = iVar10 + (uint)param_2[8];
        iVar12 = iVar11 + (uint)param_2[9];
        iVar13 = iVar12 + (uint)param_2[10];
        iVar14 = iVar13 + (uint)param_2[0xb];
        iVar15 = iVar14 + (uint)param_2[0xc];
        iVar16 = iVar15 + (uint)param_2[0xd];
        iVar17 = iVar16 + (uint)param_2[0xe];
        uVar2 = iVar17 + (uint)param_2[0xf];
        param_1 = param_1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11
                  + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar2;
        param_2 = param_2 + 0x10;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      uVar2 = uVar2 + *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + uVar2;
    }
    uVar2 = uVar2 % 0xfff1;
    param_1 = param_1 % 0xfff1;
  }
  return param_1 << 0x10 | uVar2;
}



uint FUN_00745af0(void)

{
  uint in_EAX;
  uint uVar1;
  uint *in_ECX;
  uint *puVar2;
  uint in_EDX;
  uint uVar3;
  
  uVar1 = ~in_EAX;
  for (; (in_EDX != 0 && (((uint)in_ECX & 3) != 0)); in_ECX = (uint *)((int)in_ECX + 1)) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00a82988 + (((byte)*in_ECX ^ uVar1) & 0xff) * 4);
    in_EDX = in_EDX - 1;
  }
  if (0x1f < in_EDX) {
    uVar3 = in_EDX >> 5;
    puVar2 = in_ECX;
    do {
      uVar1 = uVar1 ^ *puVar2;
      uVar1 = *(uint *)(&DAT_00a82d88 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00a83188 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00a82988 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00a83588 + (uVar1 & 0xff) * 4) ^ puVar2[1];
      uVar1 = *(uint *)(&DAT_00a82d88 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00a83188 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00a82988 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00a83588 + (uVar1 & 0xff) * 4) ^ puVar2[2];
      uVar1 = *(uint *)(&DAT_00a82d88 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00a83188 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00a82988 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00a83588 + (uVar1 & 0xff) * 4) ^ puVar2[3];
      uVar1 = *(uint *)(&DAT_00a82d88 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00a83188 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00a82988 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00a83588 + (uVar1 & 0xff) * 4) ^ puVar2[4];
      uVar1 = *(uint *)(&DAT_00a82d88 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00a83188 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00a82988 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00a83588 + (uVar1 & 0xff) * 4) ^ puVar2[5];
      uVar1 = *(uint *)(&DAT_00a82d88 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00a83188 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00a82988 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00a83588 + (uVar1 & 0xff) * 4) ^ puVar2[6];
      in_ECX = puVar2 + 8;
      in_EDX = in_EDX - 0x20;
      uVar1 = *(uint *)(&DAT_00a82d88 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00a83188 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00a82988 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00a83588 + (uVar1 & 0xff) * 4) ^ puVar2[7];
      uVar1 = *(uint *)(&DAT_00a82d88 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00a83188 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00a82988 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00a83588 + (uVar1 & 0xff) * 4);
      uVar3 = uVar3 - 1;
      puVar2 = in_ECX;
    } while (uVar3 != 0);
  }
  if (3 < in_EDX) {
    uVar3 = in_EDX >> 2;
    do {
      uVar1 = uVar1 ^ *in_ECX;
      in_ECX = in_ECX + 1;
      uVar1 = *(uint *)(&DAT_00a82d88 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00a83188 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00a82988 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00a83588 + (uVar1 & 0xff) * 4);
      in_EDX = in_EDX - 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  for (; in_EDX != 0; in_EDX = in_EDX - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00a82988 + (((byte)*in_ECX ^ uVar1) & 0xff) * 4);
    in_ECX = (uint *)((int)in_ECX + 1);
  }
  return ~uVar1;
}



undefined4 FUN_00745d90(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = FUN_00745af0();
  return uVar1;
}



void FUN_00745db0(void)

{
  undefined2 *puVar1;
  int iVar2;
  int in_EDX;
  
  puVar1 = (undefined2 *)(in_EDX + 0x8c);
  iVar2 = 0x11e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(in_EDX + 0x980);
  iVar2 = 0x1e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(in_EDX + 0xa74);
  iVar2 = 0x13;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_EDX + 0x16a4) = 0;
  *(undefined4 *)(in_EDX + 0x16a0) = 0;
  *(undefined4 *)(in_EDX + 0x16a8) = 0;
  *(undefined4 *)(in_EDX + 0x1698) = 0;
  *(undefined2 *)(in_EDX + 0x48c) = 1;
  return;
}



void FUN_00745e20(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_EAX;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  bool bVar8;
  
  iVar7 = *(int *)(in_EAX + 0x1448);
  iVar3 = *(int *)(in_EAX + 0xb54 + param_1 * 4);
  iVar6 = param_1 * 2;
  bVar8 = SBORROW4(iVar6,iVar7);
  iVar5 = iVar6 - iVar7;
  if (iVar7 < iVar6) {
    *(int *)(in_EAX + 0xb54 + param_1 * 4) = iVar3;
    return;
  }
  do {
    iVar7 = iVar6;
    if (bVar8 != iVar5 < 0) {
      iVar5 = *(int *)(in_EAX + 0xb58 + iVar6 * 4);
      iVar4 = *(int *)(in_EAX + 0xb54 + iVar6 * 4);
      uVar1 = *(ushort *)(unaff_EDI + iVar5 * 4);
      uVar2 = *(ushort *)(unaff_EDI + iVar4 * 4);
      if ((uVar1 < uVar2) ||
         ((uVar1 == uVar2 &&
          (*(byte *)(iVar5 + 0x1450 + in_EAX) <= *(byte *)(in_EAX + 0x1450 + iVar4))))) {
        iVar7 = iVar6 + 1;
      }
    }
    iVar5 = *(int *)(in_EAX + 0xb54 + iVar7 * 4);
    uVar1 = *(ushort *)(unaff_EDI + iVar3 * 4);
    uVar2 = *(ushort *)(unaff_EDI + iVar5 * 4);
    if (uVar1 < uVar2) break;
    if ((uVar1 == uVar2) &&
       (*(byte *)(in_EAX + 0x1450 + iVar3) <= *(byte *)(iVar5 + 0x1450 + in_EAX))) {
      *(int *)(in_EAX + 0xb54 + param_1 * 4) = iVar3;
      return;
    }
    *(int *)(in_EAX + 0xb54 + param_1 * 4) = iVar5;
    iVar4 = *(int *)(in_EAX + 0x1448);
    iVar6 = iVar7 * 2;
    bVar8 = SBORROW4(iVar6,iVar4);
    iVar5 = iVar6 - iVar4;
    param_1 = iVar7;
  } while (iVar6 <= iVar4);
  *(int *)(in_EAX + 0xb54 + param_1 * 4) = iVar3;
  return;
}



void FUN_00745ef0(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int in_EAX;
  int *in_ECX;
  uint uVar7;
  int iVar8;
  short *psVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  int iVar14;
  uint uVar15;
  int local_20;
  int *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  
  iVar2 = in_ECX[1];
  iVar3 = *in_ECX;
  piVar4 = (int *)in_ECX[2];
  iVar11 = piVar4[1];
  iVar8 = *piVar4;
  iVar5 = piVar4[2];
  uVar10 = piVar4[4];
  *(undefined4 *)(in_EAX + 0xb34) = 0;
  *(undefined4 *)(in_EAX + 0xb38) = 0;
  *(undefined4 *)(in_EAX + 0xb3c) = 0;
  *(undefined4 *)(in_EAX + 0xb40) = 0;
  *(undefined4 *)(in_EAX + 0xb44) = 0;
  *(undefined4 *)(in_EAX + 0xb48) = 0;
  *(undefined4 *)(in_EAX + 0xb4c) = 0;
  *(undefined4 *)(in_EAX + 0xb50) = 0;
  *(undefined2 *)(iVar3 + 2 + *(int *)(in_EAX + 0xb54 + *(int *)(in_EAX + 0x144c) * 4) * 4) = 0;
  iVar14 = *(int *)(in_EAX + 0x144c) + 1;
  local_18 = 0;
  if (iVar14 < 0x23d) {
    local_1c = (int *)(in_EAX + 0xb54 + iVar14 * 4);
    local_10 = 0x23d - iVar14;
    iVar14 = iVar14 + local_10;
    do {
      iVar6 = *local_1c;
      uVar7 = *(ushort *)(iVar3 + 2 + (uint)*(ushort *)(iVar3 + 2 + iVar6 * 4) * 4) + 1;
      if ((int)uVar10 < (int)uVar7) {
        local_18 = local_18 + 1;
        uVar7 = uVar10;
      }
      *(short *)(iVar3 + 2 + iVar6 * 4) = (short)uVar7;
      if (iVar6 <= iVar2) {
        psVar9 = (short *)(in_EAX + 0xb34 + uVar7 * 2);
        *psVar9 = *psVar9 + 1;
        iVar12 = 0;
        if (iVar5 <= iVar6) {
          iVar12 = *(int *)(iVar11 + (iVar6 - iVar5) * 4);
        }
        uVar15 = (uint)*(ushort *)(iVar3 + iVar6 * 4);
        *(int *)(in_EAX + 0x16a0) = *(int *)(in_EAX + 0x16a0) + (uVar7 + iVar12) * uVar15;
        if (iVar8 != 0) {
          *(int *)(in_EAX + 0x16a4) =
               *(int *)(in_EAX + 0x16a4) +
               ((uint)*(ushort *)(iVar8 + 2 + iVar6 * 4) + iVar12) * uVar15;
        }
      }
      local_1c = local_1c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    if (local_18 != 0) {
      iVar11 = uVar10 - 1;
      puVar13 = (ushort *)(in_EAX + 0xb34 + uVar10 * 2);
      do {
        psVar9 = (short *)(in_EAX + 0xb34 + iVar11 * 2);
        sVar1 = *(short *)(in_EAX + 0xb34 + iVar11 * 2);
        iVar8 = iVar11;
        while (sVar1 == 0) {
          psVar9 = psVar9 + -1;
          iVar8 = iVar8 + -1;
          sVar1 = *psVar9;
        }
        psVar9 = (short *)(in_EAX + 0xb34 + iVar8 * 2);
        *psVar9 = *psVar9 + -1;
        psVar9 = (short *)(in_EAX + 0xb36 + iVar8 * 2);
        *psVar9 = *psVar9 + 2;
        *puVar13 = *puVar13 - 1;
        local_18 = local_18 + -2;
        local_20 = iVar14;
      } while (0 < local_18);
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        uVar7 = (uint)*puVar13;
        if (uVar7 != 0) {
          iVar11 = in_EAX + 0xb54 + iVar14 * 4;
          local_14 = uVar7;
          do {
            iVar8 = *(int *)(iVar11 + -4);
            iVar14 = local_20 + -1;
            iVar11 = iVar11 + -4;
            if (iVar8 <= iVar2) {
              uVar7 = (uint)*(ushort *)(iVar3 + 2 + iVar8 * 4);
              if (uVar7 != uVar10) {
                *(int *)(in_EAX + 0x16a0) =
                     *(int *)(in_EAX + 0x16a0) +
                     (uVar10 - uVar7) * (uint)*(ushort *)(iVar3 + iVar8 * 4);
                *(short *)(iVar3 + 2 + iVar8 * 4) = (short)uVar10;
              }
              uVar7 = local_14 - 1;
              local_14 = uVar7;
            }
            local_20 = iVar14;
          } while (uVar7 != 0);
        }
        puVar13 = puVar13 + -1;
      }
    }
  }
  return;
}



void FUN_00746110(int param_1)

{
  short *psVar1;
  ushort uVar2;
  int in_EAX;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort *local_c;
  uint local_8;
  int local_4;
  
  uVar2 = *(ushort *)(in_EAX + 2);
  iVar4 = 0;
  local_8 = 0xffffffff;
  iVar3 = 7;
  iVar5 = 4;
  if (uVar2 == 0) {
    iVar3 = 0x8a;
    iVar5 = 3;
  }
  *(undefined2 *)(in_EAX + 6 + in_ECX * 4) = 0xffff;
  if (-1 < in_ECX) {
    local_c = (ushort *)(in_EAX + 6);
    local_4 = in_ECX + 1;
    uVar6 = (uint)uVar2;
    do {
      uVar7 = (uint)*local_c;
      iVar4 = iVar4 + 1;
      if ((iVar3 <= iVar4) || (uVar6 != uVar7)) {
        if (iVar4 < iVar5) {
          psVar1 = (short *)(param_1 + 0xa74 + uVar6 * 4);
          *psVar1 = *psVar1 + (short)iVar4;
        }
        else if (uVar6 == 0) {
          if (iVar4 < 0xb) {
            *(short *)(param_1 + 0xab8) = *(short *)(param_1 + 0xab8) + 1;
          }
          else {
            *(short *)(param_1 + 0xabc) = *(short *)(param_1 + 0xabc) + 1;
          }
        }
        else {
          if (uVar6 != local_8) {
            psVar1 = (short *)(param_1 + 0xa74 + uVar6 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(param_1 + 0xab4) = *(short *)(param_1 + 0xab4) + 1;
        }
        iVar4 = 0;
        local_8 = uVar6;
        if (uVar7 == 0) {
          iVar3 = 0x8a;
          iVar5 = 3;
        }
        else if (uVar6 == uVar7) {
          iVar3 = 6;
          iVar5 = 3;
        }
        else {
          iVar3 = 7;
          iVar5 = 4;
        }
      }
      local_c = local_c + 2;
      local_4 = local_4 + -1;
      uVar6 = uVar7;
    } while (local_4 != 0);
  }
  return;
}



void FUN_00746200(void)

{
  ushort uVar1;
  ushort uVar2;
  int in_EAX;
  byte bVar3;
  int in_ECX;
  int iVar4;
  int in_EDX;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint local_14;
  ushort *local_10;
  uint local_c;
  int local_8;
  
  local_c = 0xffffffff;
  iVar4 = 7;
  iVar8 = 4;
  if (*(ushort *)(in_EDX + 2) == 0) {
    iVar4 = 0x8a;
    iVar8 = 3;
  }
  if (-1 < in_ECX) {
    local_10 = (ushort *)(in_EDX + 6);
    local_8 = in_ECX + 1;
    iVar7 = 0;
    local_14 = (uint)*(ushort *)(in_EDX + 2);
    do {
      uVar5 = (uint)*local_10;
      iVar6 = iVar7 + 1;
      if ((iVar4 <= iVar6) || (local_14 != uVar5)) {
        if (iVar6 < iVar8) {
          do {
            uVar9 = (uint)*(ushort *)(in_EAX + 0xa76 + local_14 * 4);
            iVar4 = *(int *)(in_EAX + 0x16b4);
            if ((int)(0x10 - uVar9) < iVar4) {
              uVar1 = *(ushort *)(in_EAX + 0xa74 + local_14 * 4);
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | uVar1 << ((byte)iVar4 & 0x1f);
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b0);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                   *(undefined1 *)(in_EAX + 0x16b1);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              iVar4 = *(int *)(in_EAX + 0x16b4) + -0x10;
              *(ushort *)(in_EAX + 0x16b0) =
                   uVar1 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
            }
            else {
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) |
                   *(short *)(in_EAX + 0xa74 + local_14 * 4) << ((byte)iVar4 & 0x1f);
            }
            iVar6 = iVar6 + -1;
            *(uint *)(in_EAX + 0x16b4) = iVar4 + uVar9;
          } while (iVar6 != 0);
        }
        else if (local_14 == 0) {
          iVar4 = *(int *)(in_EAX + 0x16b4);
          bVar3 = (byte)iVar4;
          if (iVar6 < 0xb) {
            uVar1 = *(ushort *)(in_EAX + 0xaba);
            if ((int)(0x10 - (uint)uVar1) < iVar4) {
              uVar2 = *(ushort *)(in_EAX + 0xab8);
              *(ushort *)(in_EAX + 0x16b0) = *(ushort *)(in_EAX + 0x16b0) | uVar2 << (bVar3 & 0x1f);
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b0);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                   *(undefined1 *)(in_EAX + 0x16b1);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              iVar4 = *(int *)(in_EAX + 0x16b4) + -0x10;
              *(ushort *)(in_EAX + 0x16b0) =
                   uVar2 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
            }
            else {
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | *(short *)(in_EAX + 0xab8) << (bVar3 & 0x1f);
            }
            iVar4 = iVar4 + (uint)uVar1;
            iVar7 = iVar7 + -2;
            *(int *)(in_EAX + 0x16b4) = iVar4;
            if (iVar4 < 0xe) {
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar7 << ((byte)iVar4 & 0x1f));
              iVar4 = iVar4 + 3;
LAB_007466c0:
              *(int *)(in_EAX + 0x16b4) = iVar4;
            }
            else {
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar7 << ((byte)iVar4 & 0x1f));
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b0);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                   *(undefined1 *)(in_EAX + 0x16b1);
              iVar4 = *(int *)(in_EAX + 0x16b4);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(int *)(in_EAX + 0x16b4) = iVar4 + -0xd;
              *(ushort *)(in_EAX + 0x16b0) = (ushort)iVar7 >> (0x10U - (char)iVar4 & 0x1f);
            }
          }
          else {
            uVar1 = *(ushort *)(in_EAX + 0xabe);
            if ((int)(0x10 - (uint)uVar1) < iVar4) {
              uVar2 = *(ushort *)(in_EAX + 0xabc);
              *(ushort *)(in_EAX + 0x16b0) = *(ushort *)(in_EAX + 0x16b0) | uVar2 << (bVar3 & 0x1f);
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b0);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                   *(undefined1 *)(in_EAX + 0x16b1);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              iVar4 = *(int *)(in_EAX + 0x16b4) + -0x10;
              *(ushort *)(in_EAX + 0x16b0) =
                   uVar2 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
            }
            else {
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | *(short *)(in_EAX + 0xabc) << (bVar3 & 0x1f);
            }
            iVar4 = iVar4 + (uint)uVar1;
            iVar7 = iVar7 + -10;
            *(int *)(in_EAX + 0x16b4) = iVar4;
            if (iVar4 < 10) {
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar7 << ((byte)iVar4 & 0x1f));
              iVar4 = iVar4 + 7;
              goto LAB_007466c0;
            }
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar7 << ((byte)iVar4 & 0x1f));
            *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                 *(undefined1 *)(in_EAX + 0x16b0);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                 *(undefined1 *)(in_EAX + 0x16b1);
            iVar4 = *(int *)(in_EAX + 0x16b4);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            *(int *)(in_EAX + 0x16b4) = iVar4 + -9;
            *(ushort *)(in_EAX + 0x16b0) = (ushort)iVar7 >> (0x10U - (char)iVar4 & 0x1f);
          }
        }
        else {
          if (local_14 != local_c) {
            uVar9 = (uint)*(ushort *)(in_EAX + 0xa76 + local_14 * 4);
            iVar4 = *(int *)(in_EAX + 0x16b4);
            if ((int)(0x10 - uVar9) < iVar4) {
              uVar1 = *(ushort *)(in_EAX + 0xa74 + local_14 * 4);
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | uVar1 << ((byte)iVar4 & 0x1f);
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b0);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                   *(undefined1 *)(in_EAX + 0x16b1);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              iVar4 = *(int *)(in_EAX + 0x16b4) + -0x10;
              *(ushort *)(in_EAX + 0x16b0) =
                   uVar1 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
            }
            else {
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) |
                   *(short *)(in_EAX + 0xa74 + local_14 * 4) << ((byte)iVar4 & 0x1f);
            }
            *(uint *)(in_EAX + 0x16b4) = iVar4 + uVar9;
            iVar6 = iVar7;
          }
          uVar1 = *(ushort *)(in_EAX + 0xab6);
          iVar4 = *(int *)(in_EAX + 0x16b4);
          if ((int)(0x10 - (uint)uVar1) < iVar4) {
            uVar2 = *(ushort *)(in_EAX + 0xab4);
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | uVar2 << ((byte)iVar4 & 0x1f);
            *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                 *(undefined1 *)(in_EAX + 0x16b0);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                 *(undefined1 *)(in_EAX + 0x16b1);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            iVar4 = *(int *)(in_EAX + 0x16b4) + -0x10;
            *(ushort *)(in_EAX + 0x16b0) = uVar2 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f)
            ;
          }
          else {
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | *(short *)(in_EAX + 0xab4) << ((byte)iVar4 & 0x1f);
          }
          iVar4 = iVar4 + (uint)uVar1;
          iVar6 = iVar6 + -3;
          *(int *)(in_EAX + 0x16b4) = iVar4;
          if (iVar4 < 0xf) {
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar6 << ((byte)iVar4 & 0x1f));
            iVar4 = iVar4 + 2;
            goto LAB_007466c0;
          }
          *(ushort *)(in_EAX + 0x16b0) =
               *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar6 << ((byte)iVar4 & 0x1f));
          *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
               *(undefined1 *)(in_EAX + 0x16b0);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
               *(undefined1 *)(in_EAX + 0x16b1);
          iVar4 = *(int *)(in_EAX + 0x16b4);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(int *)(in_EAX + 0x16b4) = iVar4 + -0xe;
          *(ushort *)(in_EAX + 0x16b0) = (ushort)iVar6 >> (0x10U - (char)iVar4 & 0x1f);
        }
        iVar6 = 0;
        local_c = local_14;
        if (uVar5 == 0) {
          iVar4 = 0x8a;
          iVar8 = 3;
        }
        else if (local_14 == uVar5) {
          iVar4 = 6;
          iVar8 = 3;
        }
        else {
          iVar4 = 7;
          iVar8 = 4;
        }
      }
      local_10 = local_10 + 2;
      local_8 = local_8 + -1;
      iVar7 = iVar6;
      local_14 = uVar5;
    } while (local_8 != 0);
  }
  return;
}



void FUN_00746720(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  
  iVar3 = *(int *)(in_EAX + 0x16b4);
  if (iVar3 < 0xc) {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_1 + -0x101 << ((byte)iVar3 & 0x1f));
    *(int *)(in_EAX + 0x16b4) = iVar3 + 5;
  }
  else {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_1 + -0x101 << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b1);
    iVar3 = *(int *)(in_EAX + 0x16b4);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16b4) = iVar3 + -0xb;
    *(ushort *)(in_EAX + 0x16b0) = (ushort)(param_1 + -0x101) >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = *(int *)(in_EAX + 0x16b4);
  if (iVar3 < 0xc) {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_2 + -1 << ((byte)iVar3 & 0x1f));
    *(int *)(in_EAX + 0x16b4) = iVar3 + 5;
  }
  else {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_2 + -1 << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b1);
    iVar3 = *(int *)(in_EAX + 0x16b4);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16b4) = iVar3 + -0xb;
    *(ushort *)(in_EAX + 0x16b0) = (ushort)(param_2 + -1) >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = *(int *)(in_EAX + 0x16b4);
  if (iVar3 < 0xd) {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_3 + -4 << ((byte)iVar3 & 0x1f));
    *(int *)(in_EAX + 0x16b4) = iVar3 + 4;
  }
  else {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_3 + -4 << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b1);
    iVar3 = *(int *)(in_EAX + 0x16b4);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16b4) = iVar3 + -0xc;
    *(ushort *)(in_EAX + 0x16b0) = (ushort)(param_3 + -4) >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar2 = *(int *)(in_EAX + 0x16b4);
      if (iVar2 < 0xe) {
        *(ushort *)(in_EAX + 0x16b0) =
             *(ushort *)(in_EAX + 0x16b0) |
             *(short *)(in_EAX + 0xa76 + (uint)(byte)(&DAT_00a849fc)[iVar3] * 4) <<
             ((byte)iVar2 & 0x1f);
        *(int *)(in_EAX + 0x16b4) = iVar2 + 3;
      }
      else {
        uVar1 = *(ushort *)(in_EAX + 0xa76 + (uint)(byte)(&DAT_00a849fc)[iVar3] * 4);
        *(ushort *)(in_EAX + 0x16b0) = *(ushort *)(in_EAX + 0x16b0) | uVar1 << ((byte)iVar2 & 0x1f);
        *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
             *(undefined1 *)(in_EAX + 0x16b0);
        *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
        *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
             *(undefined1 *)(in_EAX + 0x16b1);
        iVar2 = *(int *)(in_EAX + 0x16b4);
        *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
        *(int *)(in_EAX + 0x16b4) = iVar2 + -0xd;
        *(ushort *)(in_EAX + 0x16b0) = uVar1 >> (0x10U - (char)iVar2 & 0x1f);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  FUN_00746200();
  FUN_00746200();
  return;
}



void FUN_00746980(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int in_EAX;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar4 = 0;
  if (*(int *)(in_EAX + 0x1698) != 0) {
    do {
      uVar7 = (uint)*(ushort *)(*(int *)(in_EAX + 0x169c) + uVar4 * 2);
      uVar8 = (uint)*(byte *)(uVar4 + *(int *)(in_EAX + 0x1690));
      uVar4 = uVar4 + 1;
      iVar5 = *(int *)(in_EAX + 0x16b4);
      bVar3 = (byte)iVar5;
      if (uVar7 == 0) {
        uVar7 = (uint)*(ushort *)(param_1 + 2 + uVar8 * 4);
        if ((int)(0x10 - uVar7) < iVar5) {
          uVar1 = *(ushort *)(param_1 + uVar8 * 4);
          *(ushort *)(in_EAX + 0x16b0) = *(ushort *)(in_EAX + 0x16b0) | uVar1 << (bVar3 & 0x1f);
          *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
               *(undefined1 *)(in_EAX + 0x16b0);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
               *(undefined1 *)(in_EAX + 0x16b1);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          iVar5 = *(int *)(in_EAX + 0x16b4) + -0x10 + uVar7;
          *(ushort *)(in_EAX + 0x16b0) = uVar1 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
        }
        else {
          *(ushort *)(in_EAX + 0x16b0) =
               *(ushort *)(in_EAX + 0x16b0) | *(short *)(param_1 + uVar8 * 4) << (bVar3 & 0x1f);
          iVar5 = iVar5 + uVar7;
        }
LAB_00746cbc:
        *(int *)(in_EAX + 0x16b4) = iVar5;
      }
      else {
        uVar6 = (uint)(byte)(&DAT_00a851d0)[uVar8];
        uVar10 = (uint)*(ushort *)(param_1 + 0x406 + uVar6 * 4);
        if ((int)(0x10 - uVar10) < iVar5) {
          uVar1 = *(ushort *)(param_1 + 0x404 + uVar6 * 4);
          *(ushort *)(in_EAX + 0x16b0) = *(ushort *)(in_EAX + 0x16b0) | uVar1 << (bVar3 & 0x1f);
          *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
               *(undefined1 *)(in_EAX + 0x16b0);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
               *(undefined1 *)(in_EAX + 0x16b1);
          iVar5 = *(int *)(in_EAX + 0x16b4);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(uint *)(in_EAX + 0x16b4) = iVar5 + -0x10 + uVar10;
          *(ushort *)(in_EAX + 0x16b0) = uVar1 >> (0x10U - (char)iVar5 & 0x1f);
        }
        else {
          *(ushort *)(in_EAX + 0x16b0) =
               *(ushort *)(in_EAX + 0x16b0) |
               *(short *)(param_1 + 0x404 + uVar6 * 4) << (bVar3 & 0x1f);
          *(uint *)(in_EAX + 0x16b4) = iVar5 + uVar10;
        }
        iVar5 = *(int *)(&DAT_00a84988 + uVar6 * 4);
        if (iVar5 != 0) {
          iVar9 = uVar8 - *(int *)(&DAT_00a852d0 + uVar6 * 4);
          iVar2 = *(int *)(in_EAX + 0x16b4);
          if (0x10 - iVar5 < iVar2) {
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar9 << ((byte)iVar2 & 0x1f));
            *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                 *(undefined1 *)(in_EAX + 0x16b0);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                 *(undefined1 *)(in_EAX + 0x16b1);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            iVar2 = *(int *)(in_EAX + 0x16b4) + -0x10;
            *(ushort *)(in_EAX + 0x16b0) =
                 (ushort)iVar9 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
          }
          else {
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar9 << ((byte)iVar2 & 0x1f));
          }
          *(int *)(in_EAX + 0x16b4) = iVar2 + iVar5;
        }
        uVar8 = uVar7 - 1;
        if (uVar8 < 0x100) {
          bVar3 = (&DAT_00a84fcf)[uVar7];
        }
        else {
          bVar3 = (&DAT_00a850d0)[uVar8 >> 7];
        }
        uVar6 = (uint)bVar3;
        uVar7 = (uint)*(ushort *)(param_2 + 2 + uVar6 * 4);
        iVar5 = *(int *)(in_EAX + 0x16b4);
        if ((int)(0x10 - uVar7) < iVar5) {
          uVar1 = *(ushort *)(param_2 + uVar6 * 4);
          *(ushort *)(in_EAX + 0x16b0) =
               *(ushort *)(in_EAX + 0x16b0) | uVar1 << ((byte)iVar5 & 0x1f);
          *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
               *(undefined1 *)(in_EAX + 0x16b0);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
               *(undefined1 *)(in_EAX + 0x16b1);
          iVar5 = *(int *)(in_EAX + 0x16b4);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(uint *)(in_EAX + 0x16b4) = iVar5 + -0x10 + uVar7;
          *(ushort *)(in_EAX + 0x16b0) = uVar1 >> (0x10U - (char)iVar5 & 0x1f);
        }
        else {
          *(ushort *)(in_EAX + 0x16b0) =
               *(ushort *)(in_EAX + 0x16b0) |
               *(short *)(param_2 + uVar6 * 4) << ((byte)iVar5 & 0x1f);
          *(uint *)(in_EAX + 0x16b4) = iVar5 + uVar7;
        }
        iVar5 = *(int *)(&DAT_00a84a10 + uVar6 * 4);
        if (iVar5 != 0) {
          iVar2 = *(int *)(in_EAX + 0x16b4);
          iVar9 = uVar8 - *(int *)(&DAT_00a85348 + uVar6 * 4);
          if (0x10 - iVar5 < iVar2) {
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar9 << ((byte)iVar2 & 0x1f));
            *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                 *(undefined1 *)(in_EAX + 0x16b0);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                 *(undefined1 *)(in_EAX + 0x16b1);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            iVar5 = *(int *)(in_EAX + 0x16b4) + -0x10 + iVar5;
            *(ushort *)(in_EAX + 0x16b0) =
                 (ushort)iVar9 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
          }
          else {
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar9 << ((byte)iVar2 & 0x1f));
            iVar5 = iVar2 + iVar5;
          }
          goto LAB_00746cbc;
        }
      }
    } while (uVar4 < *(uint *)(in_EAX + 0x1698));
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0x402);
  iVar5 = *(int *)(in_EAX + 0x16b4);
  if (iVar5 <= (int)(0x10 - uVar4)) {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | *(short *)(param_1 + 0x400) << ((byte)iVar5 & 0x1f);
    *(uint *)(in_EAX + 0x16b4) = iVar5 + uVar4;
    *(uint *)(in_EAX + 0x16ac) = (uint)*(ushort *)(param_1 + 0x402);
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x400);
  *(ushort *)(in_EAX + 0x16b0) = *(ushort *)(in_EAX + 0x16b0) | uVar1 << ((byte)iVar5 & 0x1f);
  *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) = *(undefined1 *)(in_EAX + 0x16b0)
  ;
  *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
  *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) = *(undefined1 *)(in_EAX + 0x16b1)
  ;
  iVar5 = *(int *)(in_EAX + 0x16b4);
  *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
  *(uint *)(in_EAX + 0x16b4) = iVar5 + -0x10 + uVar4;
  *(ushort *)(in_EAX + 0x16b0) = uVar1 >> (0x10U - (char)iVar5 & 0x1f);
  *(uint *)(in_EAX + 0x16ac) = (uint)*(ushort *)(param_1 + 0x402);
  return;
}



void FUN_00746d90(void)

{
  uint uVar1;
  int in_ECX;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  uVar1 = (uint)*(ushort *)(in_ECX + 0xa4) + (uint)*(ushort *)(in_ECX + 0xa0) +
          (uint)*(ushort *)(in_ECX + 0x9c) + (uint)*(ushort *)(in_ECX + 0x98) +
          (uint)*(ushort *)(in_ECX + 0x94) + (uint)*(ushort *)(in_ECX + 0x90) +
          (uint)*(ushort *)(in_ECX + 0x8c);
  puVar2 = (ushort *)(in_ECX + 0xa8);
  iVar4 = 0x79;
  do {
    uVar3 = uVar3 + *puVar2;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = (ushort *)(in_ECX + 0x28c);
  iVar4 = 0x80;
  do {
    uVar1 = uVar1 + *puVar2;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(bool *)(in_ECX + 0x1c) = uVar1 <= uVar3 >> 2;
  return;
}



void FUN_00746e20(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x16b4) == 0x10) {
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b1);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined4 *)(in_EAX + 0x16b4) = 0;
    *(undefined2 *)(in_EAX + 0x16b0) = 0;
    return;
  }
  if (7 < *(int *)(in_EAX + 0x16b4)) {
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16b4) = *(int *)(in_EAX + 0x16b4) + -8;
    *(ushort *)(in_EAX + 0x16b0) = (ushort)*(byte *)(in_EAX + 0x16b1);
  }
  return;
}



void FUN_00746ea0(void)

{
  int in_EAX;
  
  if (8 < *(int *)(in_EAX + 0x16b4)) {
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b1);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined2 *)(in_EAX + 0x16b0) = 0;
    *(undefined4 *)(in_EAX + 0x16b4) = 0;
    return;
  }
  if (0 < *(int *)(in_EAX + 0x16b4)) {
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
  }
  *(undefined2 *)(in_EAX + 0x16b0) = 0;
  *(undefined4 *)(in_EAX + 0x16b4) = 0;
  return;
}



void FUN_00746f20(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined1 *in_EDX;
  byte bVar2;
  
  iVar1 = FUN_00746ea0();
  *(undefined4 *)(iVar1 + 0x16ac) = 8;
  if (param_1 != 0) {
    *(byte *)(*(int *)(iVar1 + 0x14) + *(int *)(iVar1 + 8)) = (byte)in_ECX;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    bVar2 = (byte)((uint)in_ECX >> 8);
    *(byte *)(*(int *)(iVar1 + 0x14) + *(int *)(iVar1 + 8)) = bVar2;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    *(byte *)(*(int *)(iVar1 + 8) + *(int *)(iVar1 + 0x14)) = ~(byte)in_ECX;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    *(byte *)(*(int *)(iVar1 + 8) + *(int *)(iVar1 + 0x14)) = ~bVar2;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    *(undefined1 *)(*(int *)(iVar1 + 0x14) + *(int *)(iVar1 + 8)) = *in_EDX;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    in_EDX = in_EDX + 1;
  }
  return;
}



void FUN_00746fb0(int param_1)

{
  *(int *)(param_1 + 0xb10) = param_1 + 0x8c;
  *(int *)(param_1 + 0xb28) = param_1 + 0xa74;
  *(undefined ***)(param_1 + 0xb18) = &PTR_DAT_00b27dfc;
  *(int *)(param_1 + 0xb1c) = param_1 + 0x980;
  *(undefined ***)(param_1 + 0xb24) = &PTR_DAT_00b27e10;
  *(undefined **)(param_1 + 0xb30) = &DAT_00b27e24;
  *(undefined2 *)(param_1 + 0x16b0) = 0;
  *(undefined4 *)(param_1 + 0x16b4) = 0;
  *(undefined4 *)(param_1 + 0x16ac) = 8;
  FUN_00745db0();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00747020(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int in_EDX;
  uint uVar6;
  int unaff_EBX;
  uint uVar7;
  int unaff_EDI;
  ushort auStack_24 [16];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_24;
  uVar5 = 0;
  iVar2 = 1;
  do {
    uVar5 = (*(short *)(in_EDX + iVar2 * 2 + -2) + uVar5) * 2;
    auStack_24[iVar2] = uVar5;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  iVar2 = 0;
  if (-1 < unaff_EBX) {
    do {
      uVar6 = (uint)*(ushort *)(unaff_EDI + 2 + iVar2 * 4);
      if (uVar6 != 0) {
        uVar3 = (uint)auStack_24[uVar6];
        auStack_24[uVar6] = auStack_24[uVar6] + 1;
        uVar1 = 0;
        do {
          uVar4 = uVar1;
          uVar7 = uVar3 & 1;
          uVar6 = uVar6 - 1;
          uVar3 = uVar3 >> 1;
          uVar1 = (uVar4 | uVar7) * 2;
        } while (0 < (int)uVar6);
        *(ushort *)(unaff_EDI + iVar2 * 4) = (ushort)uVar4 | (ushort)uVar7;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= unaff_EBX);
  }
  return;
}



void FUN_007470b0(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_ESI;
  
  iVar2 = *param_1;
  iVar7 = ((int *)param_1[2])[3];
  iVar8 = *(int *)param_1[2];
  iVar6 = -1;
  iVar4 = 0;
  *(undefined4 *)(unaff_ESI + 0x1448) = 0;
  *(undefined4 *)(unaff_ESI + 0x144c) = 0x23d;
  if (0 < iVar7) {
    do {
      if (*(short *)(iVar2 + iVar4 * 4) == 0) {
        *(undefined2 *)(iVar2 + 2 + iVar4 * 4) = 0;
      }
      else {
        *(int *)(unaff_ESI + 0x1448) = *(int *)(unaff_ESI + 0x1448) + 1;
        *(int *)(unaff_ESI + 0xb54 + *(int *)(unaff_ESI + 0x1448) * 4) = iVar4;
        *(undefined1 *)(iVar4 + 0x1450 + unaff_ESI) = 0;
        iVar6 = iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar7);
  }
  iVar4 = *(int *)(unaff_ESI + 0x1448);
  while (iVar4 < 2) {
    if (iVar6 < 2) {
      iVar4 = iVar6 + 1;
      iVar6 = iVar4;
    }
    else {
      iVar4 = 0;
    }
    *(int *)(unaff_ESI + 0x1448) = *(int *)(unaff_ESI + 0x1448) + 1;
    *(int *)(unaff_ESI + 0xb54 + *(int *)(unaff_ESI + 0x1448) * 4) = iVar4;
    *(undefined2 *)(iVar2 + iVar4 * 4) = 1;
    *(undefined1 *)(unaff_ESI + 0x1450 + iVar4) = 0;
    *(int *)(unaff_ESI + 0x16a0) = *(int *)(unaff_ESI + 0x16a0) + -1;
    if (iVar8 != 0) {
      *(int *)(unaff_ESI + 0x16a4) =
           *(int *)(unaff_ESI + 0x16a4) - (uint)*(ushort *)(iVar8 + 2 + iVar4 * 4);
    }
    iVar4 = *(int *)(unaff_ESI + 0x1448);
  }
  param_1[1] = iVar6;
  for (iVar8 = *(int *)(unaff_ESI + 0x1448) / 2; 0 < iVar8; iVar8 = iVar8 + -1) {
    FUN_00745e20(iVar8);
  }
  do {
    uVar3 = *(undefined4 *)(unaff_ESI + 0xb54 + *(int *)(unaff_ESI + 0x1448) * 4);
    iVar8 = *(int *)(unaff_ESI + 0xb58);
    *(int *)(unaff_ESI + 0x1448) = *(int *)(unaff_ESI + 0x1448) + -1;
    *(undefined4 *)(unaff_ESI + 0xb58) = uVar3;
    FUN_00745e20(1);
    iVar6 = *(int *)(unaff_ESI + 0xb58);
    *(int *)(unaff_ESI + 0x144c) = *(int *)(unaff_ESI + 0x144c) + -1;
    *(int *)(unaff_ESI + 0xb54 + *(int *)(unaff_ESI + 0x144c) * 4) = iVar8;
    *(int *)(unaff_ESI + 0x144c) = *(int *)(unaff_ESI + 0x144c) + -1;
    *(int *)(unaff_ESI + 0xb54 + *(int *)(unaff_ESI + 0x144c) * 4) = iVar6;
    *(short *)(iVar2 + iVar7 * 4) = *(short *)(iVar2 + iVar6 * 4) + *(short *)(iVar2 + iVar8 * 4);
    bVar5 = *(byte *)(unaff_ESI + 0x1450 + iVar6);
    bVar1 = *(byte *)(unaff_ESI + 0x1450 + iVar8);
    if (bVar5 <= bVar1) {
      bVar5 = bVar1;
    }
    *(byte *)(unaff_ESI + 0x1450 + iVar7) = bVar5 + 1;
    *(short *)(iVar2 + 2 + iVar6 * 4) = (short)iVar7;
    *(short *)(iVar2 + 2 + iVar8 * 4) = (short)iVar7;
    *(int *)(unaff_ESI + 0xb58) = iVar7;
    iVar7 = iVar7 + 1;
    FUN_00745e20(1);
  } while (1 < *(int *)(unaff_ESI + 0x1448));
  *(int *)(unaff_ESI + 0x144c) = *(int *)(unaff_ESI + 0x144c) + -1;
  *(undefined4 *)(unaff_ESI + 0xb54 + *(int *)(unaff_ESI + 0x144c) * 4) =
       *(undefined4 *)(unaff_ESI + 0xb58);
  FUN_00745ef0();
  FUN_00747020();
  return;
}



void FUN_007472b0(void)

{
  int in_EAX;
  int iVar1;
  
  FUN_00746110();
  FUN_00746110();
  FUN_007470b0(in_EAX + 0xb28);
  iVar1 = 0x12;
  do {
    if (*(short *)(in_EAX + 0xa76 + (uint)(byte)(&DAT_00a849fc)[iVar1] * 4) != 0) {
LAB_0074736d:
      *(int *)(in_EAX + 0x16a0) = *(int *)(in_EAX + 0x16a0) + iVar1 * 3 + 0x11;
      return;
    }
    if (*(short *)(in_EAX + 0xa76 + (uint)(byte)(&UNK_00a849fb)[iVar1] * 4) != 0) {
      *(int *)(in_EAX + 0x16a0) = *(int *)(in_EAX + 0x16a0) + (iVar1 + -1) * 3 + 0x11;
      return;
    }
    if (*(short *)(in_EAX + 0xa76 + (uint)(byte)(&UNK_00a849fa)[iVar1] * 4) != 0) {
      *(int *)(in_EAX + 0x16a0) = *(int *)(in_EAX + 0x16a0) + (iVar1 + -2) * 3 + 0x11;
      return;
    }
    if (*(short *)(in_EAX + 0xa76 + (uint)(byte)(&UNK_00a849f9)[iVar1] * 4) != 0) {
      iVar1 = iVar1 + -3;
      goto LAB_0074736d;
    }
    iVar1 = iVar1 + -4;
    if (iVar1 < 3) {
      *(int *)(in_EAX + 0x16a0) = *(int *)(in_EAX + 0x16a0) + iVar1 * 3 + 0x11;
      return;
    }
  } while( true );
}



void FUN_00747380(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x16b4);
  if (0xd < iVar1) {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(param_4 << ((byte)iVar1 & 0x1f));
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b0);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b1);
    iVar1 = *(int *)(param_1 + 0x16b4);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16b4) = iVar1 + -0xd;
    *(ushort *)(param_1 + 0x16b0) = (ushort)param_4 >> (0x10U - (char)iVar1 & 0x1f);
    FUN_00746f20(1);
    return;
  }
  *(int *)(param_1 + 0x16b4) = iVar1 + 3;
  *(ushort *)(param_1 + 0x16b0) =
       *(ushort *)(param_1 + 0x16b0) | (ushort)(param_4 << ((byte)iVar1 & 0x1f));
  FUN_00746f20(1);
  return;
}



void FUN_00747420(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x16b4);
  *(ushort *)(param_1 + 0x16b0) =
       *(ushort *)(param_1 + 0x16b0) | (ushort)(2 << ((byte)iVar2 & 0x1f));
  if (iVar2 < 0xe) {
    *(int *)(param_1 + 0x16b4) = iVar2 + 3;
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b0);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b1);
    iVar2 = *(int *)(param_1 + 0x16b4);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16b4) = iVar2 + -0xd;
    *(ushort *)(param_1 + 0x16b0) = 2 >> (0x10U - (char)iVar2 & 0x1f);
  }
  iVar2 = *(int *)(param_1 + 0x16b4);
  *(ushort *)(param_1 + 0x16b0) =
       *(ushort *)(param_1 + 0x16b0) | (ushort)(0 << ((byte)iVar2 & 0x1f));
  if (iVar2 < 10) {
    *(int *)(param_1 + 0x16b4) = iVar2 + 7;
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b0);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b1);
    iVar2 = *(int *)(param_1 + 0x16b4);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16b4) = iVar2 + -9;
    *(ushort *)(param_1 + 0x16b0) = 0 >> (0x10U - (char)iVar2 & 0x1f);
  }
  iVar1 = FUN_00746e20();
  iVar2 = *(int *)(iVar1 + 0x16b4);
  if ((*(int *)(iVar1 + 0x16ac) - iVar2) + 0xb < 9) {
    *(ushort *)(iVar1 + 0x16b0) = *(ushort *)(iVar1 + 0x16b0) | (ushort)(2 << ((byte)iVar2 & 0x1f));
    if (iVar2 < 0xe) {
      *(int *)(iVar1 + 0x16b4) = iVar2 + 3;
    }
    else {
      *(undefined1 *)(*(int *)(iVar1 + 8) + *(int *)(iVar1 + 0x14)) =
           *(undefined1 *)(iVar1 + 0x16b0);
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
      *(undefined1 *)(*(int *)(iVar1 + 0x14) + *(int *)(iVar1 + 8)) =
           *(undefined1 *)(iVar1 + 0x16b1);
      iVar2 = *(int *)(iVar1 + 0x16b4);
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
      *(int *)(iVar1 + 0x16b4) = iVar2 + -0xd;
      *(ushort *)(iVar1 + 0x16b0) = 2 >> (0x10U - (char)iVar2 & 0x1f);
    }
    iVar2 = *(int *)(iVar1 + 0x16b4);
    *(ushort *)(iVar1 + 0x16b0) = *(ushort *)(iVar1 + 0x16b0) | (ushort)(0 << ((byte)iVar2 & 0x1f));
    if (9 < iVar2) {
      *(undefined1 *)(*(int *)(iVar1 + 8) + *(int *)(iVar1 + 0x14)) =
           *(undefined1 *)(iVar1 + 0x16b0);
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
      *(undefined1 *)(*(int *)(iVar1 + 0x14) + *(int *)(iVar1 + 8)) =
           *(undefined1 *)(iVar1 + 0x16b1);
      iVar2 = *(int *)(iVar1 + 0x16b4);
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
      *(int *)(iVar1 + 0x16b4) = iVar2 + -9;
      *(ushort *)(iVar1 + 0x16b0) = 0 >> (0x10U - (char)iVar2 & 0x1f);
      iVar2 = FUN_00746e20();
      *(undefined4 *)(iVar2 + 0x16ac) = 7;
      return;
    }
    *(int *)(iVar1 + 0x16b4) = iVar2 + 7;
    iVar1 = FUN_00746e20();
  }
  *(undefined4 *)(iVar1 + 0x16ac) = 7;
  return;
}



void FUN_00747610(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int local_4;
  
  local_4 = 0;
  if (*(int *)(param_1 + 0x7c) < 1) {
    uVar4 = param_3 + 5;
  }
  else {
    if (*(char *)(param_1 + 0x1c) == '\x02') {
      FUN_00746d90();
    }
    FUN_007470b0(param_1 + 0xb10);
    FUN_007470b0(param_1 + 0xb1c);
    local_4 = FUN_007472b0();
    uVar5 = *(int *)(param_1 + 0x16a0) + 10U >> 3;
    uVar4 = *(int *)(param_1 + 0x16a4) + 10U >> 3;
    if (uVar5 < uVar4) goto LAB_00747680;
  }
  uVar5 = uVar4;
LAB_00747680:
  if ((uVar5 < param_3 + 4U) || (param_2 == 0)) {
    iVar2 = *(int *)(param_1 + 0x16b4);
    bVar3 = (byte)iVar2;
    if (uVar4 == uVar5) {
      iVar1 = param_4 + 2;
      if (iVar2 < 0xe) {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar1 << (bVar3 & 0x1f));
        *(int *)(param_1 + 0x16b4) = iVar2 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar1 << (bVar3 & 0x1f));
        *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
             *(undefined1 *)(param_1 + 0x16b0);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
             *(undefined1 *)(param_1 + 0x16b1);
        iVar2 = *(int *)(param_1 + 0x16b4);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x16b4) = iVar2 + -0xd;
        *(ushort *)(param_1 + 0x16b0) = (ushort)iVar1 >> (0x10U - (char)iVar2 & 0x1f);
      }
      FUN_00746980(&DAT_00a84ad8,&DAT_00a84f58);
    }
    else {
      iVar1 = param_4 + 4;
      if (iVar2 < 0xe) {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar1 << (bVar3 & 0x1f));
        *(int *)(param_1 + 0x16b4) = iVar2 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar1 << (bVar3 & 0x1f));
        *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
             *(undefined1 *)(param_1 + 0x16b0);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
             *(undefined1 *)(param_1 + 0x16b1);
        iVar2 = *(int *)(param_1 + 0x16b4);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x16b4) = iVar2 + -0xd;
        *(ushort *)(param_1 + 0x16b0) = (ushort)iVar1 >> (0x10U - (char)iVar2 & 0x1f);
      }
      FUN_00746720(*(int *)(param_1 + 0xb14) + 1,*(int *)(param_1 + 0xb20) + 1,local_4 + 1);
      FUN_00746980(param_1 + 0x8c,param_1 + 0x980);
    }
  }
  else {
    FUN_00747380(param_1,param_2,param_3,param_4);
  }
  FUN_00745db0();
  if (param_4 == 0) {
    return;
  }
  FUN_00746ea0();
  return;
}



DWORD FUN_00747800(void)

{
  DWORD DVar1;
  int in_ECX;
  
  if (*(HANDLE *)(in_ECX + 0x24) == (HANDLE)0x0) {
    return 0xffffffff;
  }
  DVar1 = SuspendThread(*(HANDLE *)(in_ECX + 0x24));
  if (DVar1 != 0xffffffff) {
    *(undefined4 *)(in_ECX + 0x1c) = 1;
  }
  return DVar1;
}



void FUN_00747830(undefined4 param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  uint uStack_3c;
  ULONG_PTR local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  int local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = *unaff_FS_OFFSET;
  local_c = DAT_00b30aac ^ 0xaf34c0;
  uStack_3c = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_1c = (undefined1 *)&uStack_3c;
  *unaff_FS_OFFSET = (int)&local_14;
  local_2c = 0x1000;
  local_28 = param_2;
  local_24 = param_1;
  local_20 = 0;
  local_8 = 0;
  RaiseException(0x406d1388,0,4,&local_2c);
  *unaff_FS_OFFSET = local_14;
  return;
}



void FUN_007478c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a853c4;
  in_ECX[1] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  *(undefined1 *)(in_ECX + 0x43) = 0;
  return;
}



void FUN_007478e0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a853c4;
  return;
}



void FUN_007478f0(char *param_1)

{
  int in_ECX;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    _strncpy_s((char *)(in_ECX + 8),0x104,param_1,0x103);
    FUN_0060d0a0((char *)(in_ECX + 8));
    return;
  }
  *(undefined1 *)(in_ECX + 8) = 0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00747930(char *param_1)

{
  int in_ECX;
  undefined1 local_408 [259];
  char local_305 [256];
  char local_205 [513];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_408;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    FUN_00748760(param_1);
    _strcpy_s(local_205,0x100,"");
    _strcpy_s(local_305,0x100,"");
    thunk_FUN_00748670(in_ECX + 0x10c,0x104);
    FUN_0060d0a0(in_ECX + 0x10c);
    return;
  }
  *(undefined1 *)(in_ECX + 0x10c) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00747c20(undefined4 param_1,undefined4 param_2)

{
  _DAT_00b403bc = param_1;
  _DAT_00b403c0 = param_2;
  return;
}



void FUN_00747c40(undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)(&DAT_00b40378 + DAT_00b403b8 * 4) = param_1;
  *(undefined4 *)(&DAT_00b40338 + DAT_00b403b8 * 4) = param_2;
  DAT_00b403b8 = DAT_00b403b8 + 1;
  return;
}



void FUN_00747c70(char *param_1,int param_2,int param_3)

{
  char cVar1;
  char *_Mode;
  errno_t eVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  FUN_00748220();
  *in_ECX = &PTR_FUN_00a36354;
  FUN_007480d0(0);
  in_ECX[8] = param_2;
  if (param_2 == 0) {
    _Mode = "rb";
  }
  else {
    _Mode = "wb";
    if (param_2 != 1) {
      _Mode = "ab";
    }
  }
  eVar2 = _fopen_s((FILE **)(in_ECX + 7),param_1,_Mode);
  if ((eVar2 == 0) && ((FILE *)in_ECX[7] != (FILE *)0x0)) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  *(char *)(in_ECX + 9) = cVar1;
  in_ECX[3] = param_3;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  if ((cVar1 != '\0') && (param_3 != 0)) {
    uVar3 = FUN_00401f00(param_3);
    in_ECX[6] = uVar3;
    return;
  }
  in_ECX[6] = 0;
  return;
}



void FUN_00747d10(void *param_1,size_t param_2)

{
  int in_ECX;
  
  _fread(param_1,1,param_2,*(FILE **)(in_ECX + 0x1c));
  return;
}



undefined4 FUN_00747d30(void)

{
  size_t sVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) == 0) {
    *(undefined4 *)(in_ECX + 0x10) = 0;
  }
  else if (*(size_t *)(in_ECX + 0x14) != 0) {
    sVar1 = _fwrite(*(void **)(in_ECX + 0x18),1,*(size_t *)(in_ECX + 0x14),*(FILE **)(in_ECX + 0x1c)
                   );
    if (sVar1 != *(size_t *)(in_ECX + 0x14)) {
      *(undefined1 *)(in_ECX + 0x24) = 0;
      return 0;
    }
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  return 1;
}



uint FUN_00747d80(void)

{
  long _Offset;
  uint uVar1;
  int in_ECX;
  
  _Offset = _ftell(*(FILE **)(in_ECX + 0x1c));
  if (_Offset < 0) {
    return 0;
  }
  _fseek(*(FILE **)(in_ECX + 0x1c),0,2);
  uVar1 = _ftell(*(FILE **)(in_ECX + 0x1c));
  _fseek(*(FILE **)(in_ECX + 0x1c),_Offset,0);
  return ((int)uVar1 < 0) - 1 & uVar1;
}



void FUN_00747de0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a36354;
  if ((*(char *)(in_ECX + 9) != '\0') && (in_ECX[7] != 0)) {
    FUN_00747d30();
    _fclose((FILE *)in_ECX[7]);
  }
  FUN_00401f20(in_ECX[6]);
  FUN_00748240();
  return;
}



void FUN_00747e20(long param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x24) != '\0') {
    if (param_2 == 1) {
      iVar1 = *(int *)(in_ECX + 0x14) + param_1;
      if ((-1 < iVar1) && (iVar1 < *(int *)(in_ECX + 0x10))) {
        *(int *)(in_ECX + 0x14) = iVar1;
        return;
      }
      param_1 = param_1 + (*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10));
    }
    FUN_00747d30();
    iVar1 = _fseek(*(FILE **)(in_ECX + 0x1c),param_1,param_2);
    *(bool *)(in_ECX + 0x24) = iVar1 == 0;
  }
  return;
}



int FUN_00747e80(void *param_1,uint param_2)

{
  size_t sVar1;
  int in_ECX;
  uint _Size;
  undefined4 local_4;
  
  if (*(char *)(in_ECX + 0x24) == '\0') {
    return 0;
  }
  _Size = *(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0x14);
  local_4 = 0;
  if (_Size < param_2) {
    if (_Size != 0) {
      _memcpy(param_1,(void *)(*(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 0x14)),_Size);
      param_1 = (void *)((int)param_1 + _Size);
      param_2 = param_2 - _Size;
      local_4 = _Size;
    }
    FUN_00747d30();
    if (*(uint *)(in_ECX + 0xc) < param_2) {
      sVar1 = _fread(param_1,1,param_2,*(FILE **)(in_ECX + 0x1c));
      return sVar1 + local_4;
    }
    sVar1 = _fread(*(void **)(in_ECX + 0x18),1,*(uint *)(in_ECX + 0xc),*(FILE **)(in_ECX + 0x1c));
    *(size_t *)(in_ECX + 0x10) = sVar1;
    if (sVar1 < param_2) {
      param_2 = sVar1;
    }
  }
  _memcpy(param_1,(void *)(*(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 0x14)),param_2);
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + param_2;
  return local_4 + param_2;
}



int FUN_00747f40(void *param_1,size_t param_2)

{
  char cVar1;
  size_t sVar2;
  int in_ECX;
  uint _Size;
  undefined4 local_4;
  
  if (*(char *)(in_ECX + 0x24) == '\0') {
    return 0;
  }
  _Size = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 0x14);
  local_4 = 0;
  if (_Size < param_2) {
    if (_Size != 0) {
      _memcpy((void *)(*(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 0x14)),param_1,_Size);
      param_1 = (void *)((int)param_1 + _Size);
      param_2 = param_2 - _Size;
      *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(in_ECX + 0xc);
      local_4 = _Size;
    }
    cVar1 = FUN_00747d30();
    if (cVar1 == '\0') {
      return 0;
    }
    if (*(uint *)(in_ECX + 0xc) <= param_2) {
      sVar2 = _fwrite(param_1,1,param_2,*(FILE **)(in_ECX + 0x1c));
      return sVar2 + local_4;
    }
  }
  _memcpy((void *)(*(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 0x14)),param_1,param_2);
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + param_2;
  return local_4 + param_2;
}



undefined4
FUN_00748030(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = FUN_00747e80(param_2,param_3);
  FUN_00748260(param_2,param_3,param_4,param_5);
  return uVar1;
}



undefined4
FUN_00748070(undefined4 param_1,void *param_2,size_t param_3,undefined4 param_4,undefined4 param_5)

{
  void *_Dst;
  undefined4 uVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  _Dst = (void *)FUN_00401f00(param_3);
  _memcpy(_Dst,param_2,param_3);
  FUN_00748260(_Dst,param_3,param_4,param_5);
  uVar1 = FUN_00747f40(_Dst,param_3);
  FUN_00401f20(_Dst);
  return uVar1;
}



void FUN_007480d0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(code **)(in_ECX + 4) = FUN_00748030;
    *(code **)(in_ECX + 8) = FUN_00748070;
    return;
  }
  *(undefined1 **)(in_ECX + 4) = &LAB_00747ff0;
  *(undefined1 **)(in_ECX + 8) = &LAB_00748010;
  return;
}



void thunk_FUN_00748110(void)

{
                    /* WARNING: Could not recover jumptable at 0x00748100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_00b27e4c)();
  return;
}



undefined4 FUN_00748110(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00401f00(0x28);
  if (iVar1 != 0) {
    uVar2 = FUN_00747c70(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



void FUN_00748140(undefined *param_1)

{
  PTR_FUN_00b27e4c = FUN_00748110;
  if (param_1 != (undefined *)0x0) {
    PTR_FUN_00b27e4c = param_1;
  }
  return;
}



void thunk_FUN_00748170(void)

{
                    /* WARNING: Could not recover jumptable at 0x00748160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_00b27e50)();
  return;
}



undefined1 FUN_00748170(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_4;
  
  FUN_00747c70(param_1,param_2,0);
  FUN_00747de0();
  return local_4;
}



void FUN_007481a0(undefined *param_1)

{
  PTR_FUN_00b27e50 = FUN_00748170;
  if (param_1 != (undefined *)0x0) {
    PTR_FUN_00b27e50 = param_1;
  }
  return;
}



void FUN_007481d0(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = *param_1;
    *param_1 = param_1[7];
    param_1[7] = uVar1;
    uVar1 = param_1[1];
    param_1[1] = param_1[6];
    param_1[6] = uVar1;
    uVar1 = param_1[2];
    param_1[2] = param_1[5];
    param_1[5] = uVar1;
    uVar1 = param_1[3];
    param_1[3] = param_1[4];
    param_1[4] = uVar1;
    param_1 = param_1 + 8;
  }
  return;
}



void FUN_00748220(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a853e4;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}



void FUN_00748240(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a853e4;
  return;
}



undefined1 FUN_00748250(void)

{
  return DAT_00b403c4;
}



void FUN_00748260(undefined1 *param_1,uint param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  puVar4 = param_1;
  param_1 = (undefined1 *)0x0;
  if (param_2 != 0) {
    do {
      uVar3 = 0;
      if (param_4 != 0) {
        do {
          iVar2 = *(int *)(param_3 + uVar3 * 4);
          switch(iVar2) {
          case 1:
            if (param_4 == 1) {
              return;
            }
            break;
          case 2:
            uVar1 = *puVar4;
            *puVar4 = puVar4[1];
            puVar4[1] = uVar1;
            break;
          case 4:
            uVar1 = *puVar4;
            *puVar4 = puVar4[3];
            puVar4[3] = uVar1;
            uVar1 = puVar4[1];
            puVar4[1] = puVar4[2];
            puVar4[2] = uVar1;
            break;
          case 8:
            FUN_007481d0(puVar4,1);
          }
          param_1 = (undefined1 *)((int)param_1 + iVar2);
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + iVar2;
        } while (uVar3 < param_4);
      }
    } while (param_1 < param_2);
  }
  return;
}



int FUN_00748330(undefined1 *param_1,uint param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_4;
  
  puVar1 = param_1;
  uVar3 = 1;
  iVar5 = 0;
  iVar4 = 0;
  if (param_2 < 2) {
    *param_1 = 0;
    return 0;
  }
  do {
    local_4 = 1;
    iVar2 = (**(code **)(in_ECX + 4))(in_ECX,&param_1,1,&local_4,1);
    iVar5 = iVar5 + iVar2;
    if ((iVar2 != 1) || ((char)param_1 == '\n')) break;
    if ((char)param_1 != '\r') {
      puVar1[uVar3 - 1] = (char)param_1;
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 + 1;
    }
  } while (uVar3 < param_2);
  puVar1[iVar4] = 0;
  return iVar5;
}



int FUN_007483c0(char *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0;
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return iVar3;
    }
    iVar2 = (**(code **)(in_ECX + 8))();
    param_1 = param_1 + 1;
    if (iVar2 != 1) break;
    iVar3 = iVar3 + 1;
    cVar1 = *param_1;
  }
  return iVar3;
}



void FUN_00748410(char *param_1,va_list param_2)

{
  char *pcVar1;
  int *in_ECX;
  size_t _SizeInBytes;
  char *_DstBuf;
  float10 fVar2;
  
  _DstBuf = &DAT_00b40408;
  _SizeInBytes = 0x200;
  if ((&DAT_00b40618)[*in_ECX * 0xc] != '\0') {
    fVar2 = (float10)FUN_007485f0();
    FUN_006c5d40(&DAT_00b40408,0x200,&DAT_00a853f0,(double)fVar2);
    pcVar1 = &DAT_00b40408;
    do {
      _DstBuf = pcVar1;
      pcVar1 = _DstBuf + 1;
    } while (*_DstBuf != '\0');
    _SizeInBytes = 0x200 - (int)(_DstBuf + -0xb40408);
  }
  __vsnprintf_s(_DstBuf,_SizeInBytes,_SizeInBytes,param_1,param_2);
  _DstBuf[_SizeInBytes - 1] = '\0';
  return;
}



int * FUN_00748530(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2;
  if ((((-1 < param_2) && (param_2 < 0x20)) &&
      (((&DAT_00b40610)[param_2 * 0xc] != '\0' || ((&DAT_00b40614)[param_2 * 3] != -1)))) &&
     (param_3 != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b40790);
    FUN_00748410(param_3,&stack0x00000010);
    if (((&DAT_00b40610)[*param_1 * 0xc] != '\0') && (DAT_00b40608 != (code *)0x0)) {
      (*DAT_00b40608)(*param_1,&DAT_00b40408);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b40790);
  }
  return param_1;
}



undefined4 FUN_007485d0(LPCSTR param_1,LPCSTR param_2)

{
  MessageBoxA((HWND)0x0,param_1,param_2,0x40000);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007485f0(void)

{
  LARGE_INTEGER local_8;
  
  if (DAT_00b27eb2 != '\0') {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_00b407b0);
    QueryPerformanceCounter((LARGE_INTEGER *)&DAT_00b407a8);
    DAT_00b27eb2 = '\0';
  }
  QueryPerformanceCounter(&local_8);
  return (float10)(float)((float10)CONCAT44((local_8.s.HighPart - _DAT_00b407ac) -
                                            (uint)(local_8.s.LowPart < _DAT_00b407a8),
                                            local_8.s.LowPart - _DAT_00b407a8) /
                         (float10)_DAT_00b407b0);
}



int __cdecl __stricmp(char *_Str1,char *_Str2)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_00ba9e10 == 0) {
    if ((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) {
      iVar2 = ___ascii_stricmp(_Str1,_Str2);
      return iVar2;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __stricmp_l(_Str1,_Str2,(_locale_t)0x0);
  }
  return iVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00748670(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *in_ECX;
  char local_104 [256];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_104;
  if (in_ECX[0x303] == '\0') {
    __makepath(param_1,in_ECX + 0x100,in_ECX,in_ECX + 0x203,in_ECX + 0x103);
  }
  else {
    local_104[0] = '\0';
    _strcat_s(local_104,0x100,in_ECX);
    pcVar2 = local_104;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar2 - (int)(local_104 + 1);
    if (iVar3 != 0) {
      if ((local_104[iVar3 + -1] != '\\') && (local_104[iVar3 + -1] != '/')) {
        local_104[iVar3 + 1] = '\0';
        local_104[iVar3] = '\\';
      }
    }
    _strcat_s(local_104,0x100,in_ECX + 0x303);
    __makepath(param_1,in_ECX + 0x100,local_104,in_ECX + 0x203,in_ECX + 0x103);
  }
  return;
}



void FUN_00748760(char *param_1)

{
  char *in_ECX;
  
  in_ECX[0x303] = '\0';
  __splitpath_s(param_1,in_ECX + 0x100,3,in_ECX,0x100,in_ECX + 0x203,0x100,in_ECX + 0x103,0x100);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_00748670(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *in_ECX;
  char acStack_104 [256];
  uint uStack_4;
  
  uStack_4 = DAT_00b30aac ^ (uint)acStack_104;
  if (in_ECX[0x303] == '\0') {
    __makepath(param_1,in_ECX + 0x100,in_ECX,in_ECX + 0x203,in_ECX + 0x103);
  }
  else {
    acStack_104[0] = '\0';
    _strcat_s(acStack_104,0x100,in_ECX);
    pcVar2 = acStack_104;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar2 - (int)(acStack_104 + 1);
    if (iVar3 != 0) {
      if ((acStack_104[iVar3 + -1] != '\\') && (acStack_104[iVar3 + -1] != '/')) {
        acStack_104[iVar3 + 1] = '\0';
        acStack_104[iVar3] = '\\';
      }
    }
    _strcat_s(acStack_104,0x100,in_ECX + 0x303);
    __makepath(param_1,in_ECX + 0x100,acStack_104,in_ECX + 0x203,in_ECX + 0x103);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007487d0(void)

{
  DWORD *pDVar1;
  _SYSTEM_INFO local_24;
  
  pDVar1 = (DWORD *)FUN_00401f00(4);
  if (pDVar1 != (DWORD *)0x0) {
    GetSystemInfo(&local_24);
    *pDVar1 = local_24.dwNumberOfProcessors;
    _DAT_00b407b8 = pDVar1;
    return;
  }
  _DAT_00b407b8 = (DWORD *)0x0;
  return;
}



DWORD thunk_FUN_00747800(void)

{
  DWORD DVar1;
  int in_ECX;
  
  if (*(HANDLE *)(in_ECX + 0x24) == (HANDLE)0x0) {
    return 0xffffffff;
  }
  DVar1 = SuspendThread(*(HANDLE *)(in_ECX + 0x24));
  if (DVar1 != 0xffffffff) {
    *(undefined4 *)(in_ECX + 0x1c) = 1;
  }
  return DVar1;
}



void FUN_00748820(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_00748220();
  in_ECX[3] = param_1;
  in_ECX[5] = param_2;
  *in_ECX = &PTR_FUN_00a853fc;
  in_ECX[4] = 0;
  in_ECX[6] = 0;
  *(undefined1 *)((int)in_ECX + 0x1d) = 0;
  FUN_00748cf0(0);
  return;
}



void FUN_00748860(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  FUN_00748220();
  *in_ECX = &PTR_FUN_00a853fc;
  in_ECX[6] = 0x400;
  uVar1 = FUN_00401f00(0x400);
  in_ECX[3] = uVar1;
  in_ECX[5] = 0;
  in_ECX[4] = 0;
  *(undefined1 *)((int)in_ECX + 0x1d) = 0;
  FUN_00748cf0(0);
  return;
}



void FUN_007488b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a853fc;
  if ((in_ECX[6] != 0) && (*(char *)((int)in_ECX + 0x1d) == '\0')) {
    FUN_00401f20(in_ECX[3]);
  }
  FUN_00748240();
  return;
}



size_t FUN_007488e0(void *param_1,uint param_2)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10);
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  _memcpy(param_1,(void *)(*(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 0x10)),param_2);
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + param_2;
  return param_2;
}



uint FUN_00748920(void *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  int in_ECX;
  uint uVar2;
  
  iVar1 = *(int *)(in_ECX + 0x18);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = iVar1 - *(int *)(in_ECX + 0x14);
  if (uVar2 < param_2) {
    if (iVar1 + uVar2 < param_2) {
      iVar1 = (iVar1 - uVar2) + param_2;
    }
    else {
      iVar1 = iVar1 * 2;
    }
    _Dst = (void *)FUN_00401f00(iVar1);
    _memcpy(_Dst,*(void **)(in_ECX + 0xc),*(size_t *)(in_ECX + 0x14));
    FUN_00401f20(*(undefined4 *)(in_ECX + 0xc));
    *(void **)(in_ECX + 0xc) = _Dst;
    *(int *)(in_ECX + 0x18) = iVar1;
  }
  _memcpy((void *)(*(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 0x14)),param_1,param_2);
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + param_2;
  return param_2;
}



undefined4 FUN_007489a0(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x1d) = 1;
  return *(undefined4 *)(in_ECX + 0xc);
}



void FUN_007489b0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a853fc;
  if ((in_ECX[6] != 0) && (*(char *)((int)in_ECX + 0x1d) == '\0')) {
    FUN_00401f20(in_ECX[3]);
  }
  FUN_00748240();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00748ab0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  
  if (*(FILE **)(in_ECX + 0x100) != (FILE *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    _fwrite(param_1,1,(int)pcVar2 - (int)(param_1 + 1),*(FILE **)(in_ECX + 0x100));
    if (*(char *)(in_ECX + 0x104) != '\0') {
      _fflush(*(FILE **)(in_ECX + 0x100));
    }
  }
  return;
}



undefined4
FUN_00748c50(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = FUN_007488e0(param_2,param_3);
  FUN_00748260(param_2,param_3,param_4,param_5);
  return uVar1;
}



undefined4
FUN_00748c90(undefined4 param_1,void *param_2,size_t param_3,undefined4 param_4,undefined4 param_5)

{
  void *_Dst;
  undefined4 uVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  _Dst = (void *)FUN_00401f00(param_3);
  _memcpy(_Dst,param_2,param_3);
  FUN_00748260(_Dst,param_3,param_4,param_5);
  uVar1 = FUN_00748920(_Dst,param_3);
  FUN_00401f20(_Dst);
  return uVar1;
}



void FUN_00748cf0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(code **)(in_ECX + 4) = FUN_00748c50;
    *(code **)(in_ECX + 8) = FUN_00748c90;
    return;
  }
  *(undefined1 **)(in_ECX + 4) = &LAB_00748c10;
  *(undefined1 **)(in_ECX + 8) = &LAB_00748c30;
  return;
}



void FUN_00749280(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_00b40818 + 1;
  bVar2 = DAT_00b40818 == 0;
  DAT_00b40818 = iVar1;
  if (bVar2) {
    FUN_00747c40(&LAB_00748d20,&LAB_00749060);
  }
  return;
}



void FUN_007492b0(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x74))();
  FUN_00707580(param_1,param_2);
  return;
}



void FUN_007492e0(undefined4 param_1)

{
  int *in_ECX;
  
  if ((*(byte *)(in_ECX + 6) >> 2 & 1) != 0) {
    (**(code **)(*in_ECX + 0x74))();
  }
  FUN_007075b0(param_1);
  return;
}



void FUN_00749310(void)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_0070c120();
  if (*(char *)(in_ECX + 0xc0) != '\0') {
    *(undefined4 *)(in_ECX + 0x88) = DAT_00b3f9a8;
    *(undefined4 *)(in_ECX + 0x8c) = DAT_00b3f9ac;
    *(undefined4 *)(in_ECX + 0x90) = DAT_00b3f9b0;
    puVar2 = &DAT_00b26dc4;
    puVar3 = (undefined4 *)(in_ECX + 100);
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}



void FUN_00749360(char *param_1,undefined4 param_2,char *param_3)

{
  int in_ECX;
  
  *param_1 = '\x01';
  *param_3 = '\0';
  if (*param_1 == '\0') {
    *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) & 0xfffd;
  }
  else {
    *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) | 2;
  }
  *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) | 0xc;
  if (*param_3 != '\0') {
    *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) | 0x10;
    return;
  }
  *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) & 0xffef;
  return;
}



void FUN_00749470(void)

{
  undefined4 *puVar1;
  int *piVar2;
  byte bVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  piVar2 = *(int **)(in_ECX + 0xb4);
  (**(code **)(*piVar2 + 0x4c))(0);
  *(undefined2 *)(piVar2 + 0x19) = 0;
  *(undefined2 *)((int)piVar2 + 0x66) = 0;
  puVar4 = *(undefined4 **)(in_ECX + 200);
  *(undefined4 *)(in_ECX + 0xe8) = 0xff7fffff;
  while (puVar4 != (undefined4 *)0x0) {
    puVar1 = puVar4 + 2;
    puVar4 = (undefined4 *)*puVar4;
    (**(code **)(*(int *)*puVar1 + 0x54))();
  }
  piVar2 = *(int **)(in_ECX + 0xc);
  do {
    if (piVar2 == (int *)0x0) {
      return;
    }
    for (puVar4 = (undefined4 *)(**(code **)(*piVar2 + 4))(); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      if (puVar4 == &DAT_00b41e14) {
        bVar3 = 1;
        goto LAB_007494e7;
      }
    }
    bVar3 = 0;
LAB_007494e7:
    if ((int *)(-(uint)bVar3 & (uint)piVar2) != (int *)0x0) {
      (**(code **)(*(int *)(-(uint)bVar3 & (uint)piVar2) + 0xa8))();
    }
    piVar2 = (int *)piVar2[0xd];
  } while( true );
}



void FUN_00749510(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  
  puVar2 = *(undefined4 **)(in_ECX + 200);
  uVar3 = *(undefined4 *)(in_ECX + 0xb4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    (**(code **)(*(int *)*puVar1 + 0x50))(uVar3,param_1);
  }
  return;
}



void FUN_00749550(void)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  
  FUN_00722aa0();
  if (*(char *)(in_ECX + 0xc0) != '\0') {
    iVar2 = *(int *)(in_ECX + 0xb4);
    fVar1 = *(float *)(in_ECX + 0x94);
    *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(iVar2 + 0x14);
    *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(iVar2 + 0x18);
    *(float *)(in_ECX + 0x20) = fVar1 * *(float *)(in_ECX + 0x20);
    *(float *)(in_ECX + 0x24) = *(float *)(in_ECX + 0x24) * fVar1;
    *(float *)(in_ECX + 0x28) = fVar1 * *(float *)(in_ECX + 0x28);
    *(float *)(in_ECX + 0x2c) = *(float *)(in_ECX + 0x2c) * *(float *)(in_ECX + 0x94);
  }
  return;
}



void FUN_007495e0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_ECX;
  int *piVar5;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar3 = param_1;
  FUN_00723050(param_1);
  FUN_0055e000(in_ECX,&param_1);
  uVar4 = 0;
  if (*(uint *)(in_ECX + 0xd8) != 0) {
    piVar5 = *(int **)(in_ECX + 0xdc);
    do {
      if (*piVar5 != 0) {
        local_c = (*(int **)(in_ECX + 0xdc))[uVar4];
        goto joined_r0x00749632;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar4 < *(uint *)(in_ECX + 0xd8));
  }
  local_c = 0;
joined_r0x00749632:
  while (local_c != 0) {
    FUN_00452600(&local_c,&local_4,&local_8);
    FUN_0055e000(local_8,&param_1);
    FUN_00412d30(local_4,param_1);
  }
  puVar2 = *(undefined4 **)(in_ECX + 200);
  local_c = 0;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    (**(code **)(*(int *)*puVar1 + 0x38))(uVar3);
  }
  (**(code **)(**(int **)(in_ECX + 0xb4) + 0x38))(uVar3);
  return;
}



undefined1 FUN_007496d0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int in_ECX;
  
  cVar3 = thunk_FUN_00723400(param_1);
  if (cVar3 != '\0') {
    puVar2 = *(undefined4 **)(in_ECX + 200);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      (**(code **)(*(int *)*puVar1 + 0x24))(param_1);
    }
    return 1;
  }
  return 0;
}



undefined4 FUN_00749710(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char extraout_AL;
  char cVar4;
  int in_ECX;
  uint local_c;
  int *piStack_8;
  undefined4 uStack_4;
  
  iVar3 = param_1;
  thunk_FUN_00723440(param_1);
  if ((extraout_AL != '\0') && (*(char *)(in_ECX + 0xc0) == *(char *)(iVar3 + 0xc0))) {
    puVar1 = *(undefined4 **)(in_ECX + 200);
    while (puVar1 != (undefined4 *)0x0) {
      piVar2 = (int *)puVar1[2];
      puVar1 = (undefined4 *)*puVar1;
      cVar4 = FUN_0055e000(piVar2[2],&local_c);
      cVar4 = (**(code **)(*piVar2 + 0x2c))(-(uint)(cVar4 != '\0') & local_c);
      if (cVar4 == '\0') {
        return 0;
      }
    }
    local_c = FUN_006a9030();
    do {
      if (local_c == 0) {
        return 1;
      }
      FUN_00452600(&local_c,&param_1,&piStack_8);
      cVar4 = FUN_0055e000(param_1,&uStack_4);
    } while ((cVar4 != '\0') && (cVar4 = (**(code **)(*piStack_8 + 0x2c))(uStack_4), cVar4 != '\0'))
    ;
    return 0;
  }
  return 0;
}



void FUN_00749800(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  LONG LVar4;
  int *in_ECX;
  
  piVar3 = (int *)(**(code **)(*in_ECX + 4))();
  puVar1 = (undefined4 *)piVar3[2];
  if (puVar1 != (undefined4 *)*param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *param_1;
    piVar3[2] = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  piVar3[1] = 0;
  *piVar3 = in_ECX[1];
  if (in_ECX[1] != 0) {
    *(int **)(in_ECX[1] + 4) = piVar3;
    in_ECX[3] = in_ECX[3] + 1;
    in_ECX[1] = (int)piVar3;
    return;
  }
  in_ECX[3] = in_ECX[3] + 1;
  in_ECX[2] = (int)piVar3;
  in_ECX[1] = (int)piVar3;
  return;
}



void FUN_00749890(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a85a44;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007498c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a85a64;
  FUN_00573880();
  *in_ECX = &PTR_LAB_00a85a34;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_007498f0(float param_1)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar6;
  undefined4 *puVar5;
  int in_ECX;
  
  piVar3 = *(int **)(in_ECX + 0xb4);
  (**(code **)(*piVar3 + 0x5c))();
  if ((*(char *)(in_ECX + 0xec) != '\0') ||
     (uVar6 = extraout_var, param_1 < *(float *)(in_ECX + 0xe8))) {
    FUN_00749470();
    *(undefined1 *)(in_ECX + 0xec) = 0;
    uVar6 = extraout_var_00;
  }
  fVar2 = *(float *)(in_ECX + 0xe8);
  puVar5 = (undefined4 *)
           CONCAT22(uVar6,(ushort)(-3.4028235e+38 < fVar2) << 8 | (ushort)NAN(fVar2) << 10 |
                          (ushort)(fVar2 == -3.4028235e+38) << 0xe);
  if (fVar2 == -3.4028235e+38) {
    *(float *)(in_ECX + 0xe8) = param_1;
  }
  puVar4 = *(undefined4 **)(in_ECX + 200);
  while (puVar4 != (undefined4 *)0x0) {
    piVar1 = puVar4 + 2;
    puVar5 = puVar4 + 2;
    puVar4 = (undefined4 *)*puVar4;
    if ((char)((int *)*piVar1)[5] != '\0') {
      puVar5 = (undefined4 *)(**(code **)(*(int *)*piVar1 + 0x4c))(param_1,piVar3);
    }
  }
  *(ushort *)((int)piVar3 + 0x2e) = *(ushort *)((int)piVar3 + 0x2e) | 7;
  *(float *)(in_ECX + 0xe8) = param_1;
  return puVar5;
}



void FUN_00749990(undefined4 *param_1)

{
  LONG *pLVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  int *piVar5;
  
  puVar2 = param_1;
  piVar5 = *(int **)(in_ECX + 200);
  if (piVar5 == (int *)0x0) {
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
    FUN_00749800(&param_1);
    if (puVar2 != (undefined4 *)0x0) {
      iVar3 = InterlockedDecrement(puVar2 + 1);
LAB_007499d3:
      if (iVar3 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  else {
    do {
      if ((uint)param_1[3] < *(uint *)(piVar5[2] + 0xc)) {
        pLVar1 = param_1 + 1;
        InterlockedIncrement(pLVar1);
        FUN_007c6a20(piVar5,&param_1);
        iVar3 = InterlockedDecrement(pLVar1);
        goto LAB_007499d3;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
    pLVar1 = param_1 + 1;
    InterlockedIncrement(pLVar1);
    FUN_007c16b0(&param_1);
    LVar4 = InterlockedDecrement(pLVar1);
    if (LVar4 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  FUN_00412d30(puVar2[2],puVar2);
  puVar2[4] = in_ECX;
  return;
}



void FUN_00749a70(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *puVar4;
  int in_ECX;
  int unaff_retaddr;
  
  puVar4 = param_2;
  thunk_FUN_00723020(param_1,param_2);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(in_ECX + 0xc0);
  puVar1 = *(undefined4 **)(in_ECX + 200);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1 + 2;
    puVar1 = (undefined4 *)*puVar1;
    puVar2 = (undefined4 *)(**(code **)(*(int *)*puVar2 + 0x18))(puVar4);
    param_2 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
    FUN_007c16b0(&param_2);
    if ((puVar2 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar2 + 1), LVar3 == 0)) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(in_ECX + 0xe8);
  puVar4 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0xb4) + 0x18))(puVar4);
  puVar1 = *(undefined4 **)(unaff_retaddr + 0xb4);
  if (puVar1 != puVar4) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar1 + 1), LVar3 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 **)(unaff_retaddr + 0xb4) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  return;
}



void FUN_00749b70(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 local_4;
  
  iVar1 = param_1;
  thunk_FUN_007234b0(param_1);
  local_4 = 1;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,1,&local_4,1);
  *(bool *)(in_ECX + 0xc0) = (char)param_1 != '\0';
  FUN_00712ae0();
  return;
}



void FUN_00749bc0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  thunk_FUN_00723350(param_1);
  for (iVar1 = FUN_007124d0(); iVar1 != 0; iVar1 = iVar1 + -1) {
    uVar2 = FUN_007124a0();
    FUN_00749990(uVar2);
  }
  return;
}



void FUN_00749c00(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_ECX;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar3 = param_1;
  thunk_FUN_00723590(param_1);
  param_1 = (int *)CONCAT31(param_1._1_3_,*(undefined1 *)(in_ECX + 0xc0));
  local_8 = 1;
  (**(code **)(piVar3[0x88] + 8))(piVar3[0x88],&param_1,1,&local_8,1);
  uStack_4 = *(undefined4 *)(in_ECX + 0xd0);
  local_8 = 4;
  (**(code **)(piVar3[0x88] + 8))(piVar3[0x88],&uStack_4,4,&local_8,1);
  puVar2 = *(undefined4 **)(in_ECX + 200);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    (**(code **)(*piVar3 + 0x2c))(*puVar1);
  }
  return;
}



void FUN_00749ca0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a85aa4;
  if ((*(char *)(in_ECX + 4) != '\0') && (uVar3 = 0, in_ECX[1] != 0)) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[2] + uVar3 * 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = puVar2 + 1;
        puVar2 = (undefined4 *)*puVar2;
        FUN_00401f20(*puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)in_ECX[1]);
  }
  *in_ECX = &PTR_FUN_00a85a74;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a85a44;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00749d10(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a85a74;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a85a44;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00749d50(byte param_1)

{
  FUN_00749ca0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00749d70(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007421b0(param_1);
  param_1 = FUN_0070f910(DAT_00b40864);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070f950("World Space",*(undefined1 *)(in_ECX + 0xc0));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("NumMods",*(undefined4 *)(in_ECX + 0xd0));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070faa0("NumParticles",*(undefined2 *)(*(int *)(in_ECX + 0xb4) + 0x48));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070faa0("MaxParticles",*(undefined2 *)(*(int *)(in_ECX + 0xb4) + 8));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00749ee0(void)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  FUN_00741fa0();
  *in_ECX = &PTR_FUN_00a85b0c;
  *(undefined1 *)(in_ECX + 0x30) = 1;
  in_ECX[0x34] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x31] = &PTR_FUN_00a85a94;
  in_ECX[0x36] = 0x25;
  in_ECX[0x35] = &PTR_FUN_00a85a44;
  in_ECX[0x38] = 0;
  _Dst = (void *)FUN_00401f00(0x94);
  in_ECX[0x37] = _Dst;
  _memset(_Dst,0,in_ECX[0x36] * 4);
  *(undefined1 *)(in_ECX + 0x39) = 1;
  in_ECX[0x35] = &PTR_FUN_00a85aec;
  *(undefined1 *)(in_ECX + 0x3b) = 0;
  in_ECX[0x3a] = 0xff7fffff;
  return;
}



int * FUN_0074a000(byte param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int *in_ECX;
  int *piVar5;
  
  if ((param_1 & 2) == 0) {
    puVar3 = (undefined4 *)*in_ECX;
    if (((puVar3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    if ((param_1 & 1) != 0) {
      FUN_00401f20();
    }
    return in_ECX;
  }
  piVar1 = in_ECX + -1;
  iVar2 = *piVar1;
  piVar5 = in_ECX + iVar2;
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    puVar3 = (undefined4 *)piVar5[-1];
    piVar5 = piVar5 + -1;
    if (((puVar3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20(piVar1);
  }
  return piVar1;
}



void FUN_0074a0a0(int param_1,undefined4 *param_2,float *param_3)

{
  float fVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_e8 [12];
  float local_dc;
  float local_d8;
  float local_d4;
  undefined1 local_d0 [52];
  undefined4 local_9c [13];
  undefined4 local_68 [13];
  undefined1 local_34 [52];
  
  if (param_1 != 0) {
    puVar2 = (undefined4 *)(param_1 + 100);
    puVar5 = local_9c;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = (undefined4 *)(*(int *)(in_ECX + 0x10) + 100);
    puVar5 = local_68;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_00718a80(local_34);
    FUN_0053d7a0(local_d0,local_9c);
    puVar2 = (undefined4 *)FUN_0053d4b0(&local_dc,param_2);
    *param_2 = *puVar2;
    param_2[1] = puVar2[1];
    param_2[2] = puVar2[2];
    iVar4 = *(int *)(in_ECX + 0x70);
    if (iVar4 == 0) {
      pfVar3 = (float *)FUN_007101f0(local_e8,param_3);
      *param_3 = *pfVar3;
      param_3[1] = pfVar3[1];
      param_3[2] = pfVar3[2];
    }
    else {
      if (iVar4 == 1) {
        iVar4 = _rand();
        *param_3 = ((float)iVar4 + (float)iVar4) / 32767.0 - 1.0;
        iVar4 = _rand();
        param_3[1] = ((float)iVar4 + (float)iVar4) / 32767.0 - 1.0;
        iVar4 = _rand();
        param_3[2] = ((float)iVar4 + (float)iVar4) / 32767.0 - 1.0;
        FUN_0043f350();
        iVar4 = _rand();
        fVar1 = ((float)iVar4 / 32767.0 - 0.5) * *(float *)(in_ECX + 0x1c) +
                *(float *)(in_ECX + 0x18);
        *param_3 = fVar1 * *param_3;
        param_3[1] = fVar1 * param_3[1];
        param_3[2] = fVar1 * param_3[2];
        return;
      }
      if (iVar4 == 2) {
        FUN_007101f0(&local_dc,in_ECX + 0x78);
        iVar4 = _rand();
        fVar1 = ((float)iVar4 / 32767.0 - 0.5) * *(float *)(in_ECX + 0x1c) +
                *(float *)(in_ECX + 0x18);
        FUN_0043f350();
        *param_3 = fVar1 * local_dc;
        param_3[1] = local_d8 * fVar1;
        param_3[2] = fVar1 * local_d4;
        return;
      }
    }
  }
  return;
}



undefined4 FUN_0074a2d0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0x10))();
    if (iVar2 != 0) {
      iVar2 = param_1[0x2e];
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = *(int *)(iVar2 + 0xc);
      if (iVar3 == 0) {
        if (*(int *)(iVar2 + 8) != 0) {
          uVar4 = *(uint *)(*(int *)(iVar2 + 8) + 0x40);
          if (uVar4 < 4) {
            uVar4 = 4;
          }
          iVar3 = FUN_00401f00(0x10);
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_0072c980();
          }
          cVar1 = FUN_0072ed50(param_1[0x2d],*(undefined4 *)(iVar2 + 8),uVar4,4,0);
          if (cVar1 != '\0') goto LAB_0074a35c;
        }
        return 0;
      }
LAB_0074a35c:
      FUN_0075fa90(iVar3);
      return 1;
    }
  }
  return 0;
}



void FUN_0074a390(float *param_1,float *param_2,int param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ushort uVar8;
  undefined4 *puVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  undefined4 *puVar16;
  float *pfVar17;
  undefined1 *puVar18;
  int local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_168;
  float local_128 [4];
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
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
  
  iVar2 = *(int *)(param_4 + 8);
  FUN_00718a80(local_9c);
  puVar9 = (undefined4 *)FUN_0053d7a0(local_128,local_9c);
  puVar16 = local_d0;
  for (iVar12 = 0xd; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar16 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar16 = puVar16 + 1;
  }
  iVar2 = *(int *)(iVar2 + 0x44);
  local_180 = DAT_00b3f9a8;
  local_18c = DAT_00b3f9a8;
  local_178 = DAT_00b3f9b0;
  local_184 = DAT_00b3f9b0;
  iVar12 = *(int *)(*(int *)(param_3 + 0xb4) + 0x20);
  local_17c = DAT_00b3f9ac;
  local_188 = DAT_00b3f9ac;
  iVar3 = *(int *)(*(int *)(param_3 + 0xb4) + 0x1c);
  iVar7 = (uint)*(ushort *)(*(int *)(param_5 + 0xc) + param_6 * 2) * 0xc;
  fVar4 = *(float *)(iVar7 + iVar3);
  fVar5 = *(float *)(iVar7 + 4 + iVar3);
  fVar6 = *(float *)(iVar7 + 8 + iVar3);
  if (iVar12 == 0) {
    local_168 = 1.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
  }
  else {
    local_168 = *(float *)(iVar7 + iVar12);
    fVar13 = *(float *)(iVar7 + 4 + iVar12);
    fVar14 = *(float *)(iVar7 + 8 + iVar12);
  }
  uVar10 = (uint)*(ushort *)(param_5 + 0x24);
  uVar15 = 0;
  if (uVar10 != 0) {
    local_190 = param_6 << 4;
    do {
      if (*(int *)(param_5 + 0x10) == 0) {
        uVar8 = *(ushort *)(*(int *)(param_5 + 4) + uVar15 * 2);
      }
      else {
        uVar8 = *(ushort *)
                 (*(int *)(param_5 + 4) +
                 (uint)*(byte *)(uVar10 * param_6 + *(int *)(param_5 + 0x10) + uVar15) * 2);
      }
      iVar12 = (uint)uVar8 * 0x4c + iVar2;
      puVar18 = local_68;
      FUN_0053d7a0(local_34,*(int *)(*(int *)(param_4 + 0x14) + (uint)uVar8 * 4) + 100);
      pfVar11 = (float *)FUN_0053d7a0(puVar18,iVar12);
      pfVar17 = local_128;
      for (iVar12 = 0xd; iVar12 != 0; iVar12 = iVar12 + -1) {
        *pfVar17 = *pfVar11;
        pfVar11 = pfVar11 + 1;
        pfVar17 = pfVar17 + 1;
      }
      FUN_00710190(&local_f4,local_f8);
      fVar1 = *(float *)(local_190 + *(int *)(param_5 + 8));
      local_190 = local_190 + 4;
      uVar15 = uVar15 + 1;
      uVar10 = (uint)*(ushort *)(param_5 + 0x24);
      local_180 = fVar1 * (fVar5 * local_f0 + fVar4 * local_f4 + fVar6 * local_ec + local_104) +
                  local_180;
      local_17c = local_17c +
                  (local_e0 * fVar6 + local_e8 * fVar4 + local_e4 * fVar5 + local_100) * fVar1;
      local_178 = local_178 +
                  (fVar6 * local_d4 + local_d8 * fVar5 + local_dc * fVar4 + local_fc) * fVar1;
      local_18c = (fVar13 * local_128[1] + local_168 * local_128[0] + fVar14 * local_128[2]) * fVar1
                  + local_18c;
      local_188 = local_188 +
                  (local_114 * fVar14 + local_128[3] * local_168 + local_118 * fVar13) * fVar1;
      local_184 = local_184 +
                  fVar1 * (fVar14 * local_108 + local_10c * fVar13 + local_110 * local_168);
    } while (uVar15 < uVar10);
  }
  FUN_0043f350();
  *param_1 = local_180;
  param_1[1] = local_17c;
  param_1[2] = local_178;
  *param_2 = local_18c;
  param_2[1] = local_188;
  param_2[2] = local_184;
  return;
}



void FUN_0074a750(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_LAB_00a85bb0;
  in_ECX[2] = 0;
  return;
}



bool FUN_0074a780(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  
  cVar3 = FUN_0074f160(param_1);
  if (cVar3 == '\0') {
    return false;
  }
  uVar4 = (uint)*(ushort *)(in_ECX + 0x5a);
  if (uVar4 != *(ushort *)(param_1 + 0x5a)) {
    return false;
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x54) + uVar5 * 4);
      iVar2 = *(int *)(*(int *)(param_1 + 0x54) + uVar5 * 4);
      if (piVar1 == (int *)0x0) {
        if (iVar2 != 0) {
          return false;
        }
      }
      else {
        if (iVar2 == 0) {
          return false;
        }
        cVar3 = (**(code **)(*piVar1 + 0x2c))(iVar2);
        if (cVar3 == '\0') {
          return false;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if ((*(int *)(in_ECX + 0x70) == *(int *)(param_1 + 0x70)) &&
     (*(int *)(in_ECX + 0x74) == *(int *)(param_1 + 0x74))) {
    cVar3 = FUN_008aa390(param_1 + 0x78);
    return cVar3 == '\0';
  }
  return false;
}



void FUN_0074a820(ushort param_1,undefined2 param_2)

{
  uint *puVar1;
  undefined4 *in_ECX;
  uint uVar2;
  
  *in_ECX = &PTR_FUN_00a85bb8;
  *(ushort *)(in_ECX + 2) = param_1;
  *(undefined2 *)((int)in_ECX + 0xe) = param_2;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  if (param_1 == 0) {
    in_ECX[1] = 0;
    return;
  }
  uVar2 = (uint)param_1;
  puVar1 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2 * 4) | uVar2 * 4 + 4);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = uVar2;
    _vector_constructor_iterator_(puVar1 + 1,4,uVar2,FUN_007c88a0);
    in_ECX[1] = puVar1 + 1;
    return;
  }
  in_ECX[1] = 0;
  return;
}



void FUN_0074a8c0(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LONG LVar6;
  uint *puVar7;
  int in_ECX;
  ushort uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  
  if (param_1 != *(ushort *)(in_ECX + 8)) {
    uVar8 = (ushort)param_1;
    if (param_1 < *(ushort *)(in_ECX + 10)) {
      uVar10 = param_1 & 0xffff;
      if (uVar8 < *(ushort *)(in_ECX + 10)) {
        do {
          piVar1 = (int *)(*(int *)(in_ECX + 4) + (uVar10 & 0xffff) * 4);
          if (*(int *)(*(int *)(in_ECX + 4) + (uVar10 & 0xffff) * 4) != 0) {
            puVar2 = (undefined4 *)*piVar1;
            if (puVar2 != (undefined4 *)0x0) {
              LVar6 = InterlockedDecrement(puVar2 + 1);
              if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
                (**(code **)*puVar2)(1);
              }
              *piVar1 = 0;
            }
            *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
          }
          uVar10 = uVar10 + 1;
        } while ((ushort)uVar10 < *(ushort *)(in_ECX + 10));
      }
      *(ushort *)(in_ECX + 10) = uVar8;
    }
    iVar3 = *(int *)(in_ECX + 4);
    *(ushort *)(in_ECX + 8) = uVar8;
    if (param_1 == 0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      param_1 = param_1 & 0xffff;
      puVar7 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < param_1 * 4) | param_1 * 4 + 4);
      if (puVar7 == (uint *)0x0) {
        puVar9 = (uint *)0x0;
      }
      else {
        puVar9 = puVar7 + 1;
        *puVar7 = param_1;
        _vector_constructor_iterator_(puVar9,4,param_1,FUN_007c88a0);
      }
      *(uint **)(in_ECX + 4) = puVar9;
      uVar8 = 0;
      if (*(short *)(in_ECX + 10) != 0) {
        do {
          iVar11 = *(int *)(in_ECX + 4);
          iVar5 = (uint)uVar8 * 4;
          puVar2 = *(undefined4 **)(iVar11 + iVar5);
          if (puVar2 != *(undefined4 **)(iVar5 + iVar3)) {
            if (((puVar2 != (undefined4 *)0x0) &&
                (LVar6 = InterlockedDecrement(puVar2 + 1), LVar6 == 0)) &&
               (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
            iVar4 = *(int *)(iVar5 + iVar3);
            *(int *)(iVar11 + iVar5) = iVar4;
            if (iVar4 != 0) {
              InterlockedIncrement((LONG *)(iVar4 + 4));
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ushort *)(in_ECX + 10));
      }
      uVar8 = *(ushort *)(in_ECX + 10);
      if (uVar8 < *(ushort *)(in_ECX + 8)) {
        do {
          iVar11 = *(int *)(in_ECX + 4);
          puVar2 = *(undefined4 **)(iVar11 + (uint)uVar8 * 4);
          if (puVar2 != (undefined4 *)0x0) {
            LVar6 = InterlockedDecrement(puVar2 + 1);
            if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
            *(undefined4 *)(iVar11 + (uint)uVar8 * 4) = 0;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ushort *)(in_ECX + 8));
      }
    }
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + -4);
      iVar11 = iVar3 + iVar5 * 4;
      while (iVar5 = iVar5 + -1, -1 < iVar5) {
        puVar2 = *(undefined4 **)(iVar11 + -4);
        iVar11 = iVar11 + -4;
        if (((puVar2 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar2 + 1), LVar6 == 0)
            ) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
      }
      FUN_00401f20(iVar3 + -4);
    }
  }
  return;
}



void FUN_0074aac0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a85bb8;
  if (in_ECX[1] != 0) {
    FUN_0074a000(3);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0074aaf0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a85bc0;
  if (in_ECX[1] != 0) {
    FUN_0074a000(3);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0074ab20(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  
  if ((_DAT_00b40888 & 1) == 0) {
    _DAT_00b40888 = _DAT_00b40888 | 1;
    DAT_00b40884 = 0;
    _atexit(FUN_00a26cf0);
  }
  if (param_1 < *(ushort *)(in_ECX + 10)) {
    if (*param_2 == DAT_00b40884) {
      if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) != DAT_00b40884) {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) == DAT_00b40884) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  else {
    *(short *)(in_ECX + 10) = (short)param_1 + 1;
    if (*param_2 != DAT_00b40884) {
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

void FUN_0074abf0(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  
  if ((_DAT_00b40890 & 1) == 0) {
    _DAT_00b40890 = _DAT_00b40890 | 1;
    DAT_00b4088c = 0;
    _atexit(FUN_00a26cc0);
  }
  if (param_1 < *(ushort *)(in_ECX + 10)) {
    if (*param_2 == DAT_00b4088c) {
      if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) != DAT_00b4088c) {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) == DAT_00b4088c) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  else {
    *(short *)(in_ECX + 10) = (short)param_1 + 1;
    if (*param_2 != DAT_00b4088c) {
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



void FUN_0074acc0(void)

{
  undefined4 *in_ECX;
  
  FUN_0074eda0();
  *in_ECX = &PTR_FUN_00a85bcc;
  FUN_0074a820(1,2);
  *(undefined2 *)(in_ECX + 0x1a) = 0;
  *(undefined2 *)((int)in_ECX + 0x6a) = 0;
  *(undefined2 *)(in_ECX + 0x1b) = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x18] = &PTR_FUN_00a85bc0;
  *(undefined2 *)((int)in_ECX + 0x6e) = 1;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = DAT_00b258d0;
  in_ECX[0x1f] = DAT_00b258d4;
  in_ECX[0x20] = DAT_00b258d8;
  return;
}



undefined4 FUN_0074ad30(int param_1,undefined4 *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int in_ECX;
  float10 fVar9;
  
  iVar8 = _rand();
  iVar2 = *(int *)(param_1 + 0xb4);
  iVar3 = *(int *)(iVar2 + 0x1c);
  iVar4 = *(int *)(iVar2 + 0x20);
  if (iVar3 == 0) {
    return 0;
  }
  iVar2 = (iVar8 % (int)(uint)*(ushort *)(iVar2 + 8)) * 0xc;
  *param_2 = *(undefined4 *)(iVar2 + iVar3);
  param_2[1] = *(undefined4 *)(iVar2 + 4 + iVar3);
  param_2[2] = *(undefined4 *)(iVar2 + 8 + iVar3);
  fVar5 = *(float *)(iVar2 + iVar4);
  fVar6 = *(float *)(iVar2 + 4 + iVar4);
  fVar7 = *(float *)(iVar2 + 8 + iVar4);
  if ((*(int *)(in_ECX + 0x70) == 0) && (*(int *)(*(int *)(param_1 + 0xb4) + 0x20) != 0)) {
    fVar9 = (float10)FUN_00982c30();
    fVar1 = (float)fVar9;
    *param_3 = fVar1 * fVar5;
    param_3[1] = fVar6 * fVar1;
    param_3[2] = fVar1 * fVar7;
  }
  FUN_0074a0a0(param_1,param_2,param_3);
  return 1;
}



undefined4 FUN_0074ae30(int *param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined2 in_FPUControlWord;
  float10 fVar12;
  uint local_48;
  uint local_44;
  int local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar4 = param_1;
  iVar11 = 0;
  local_44 = 0;
  local_48 = 0;
  if (param_1 != (int *)0x0) {
    iVar7 = (**(code **)(*param_1 + 0x10))();
    if (iVar7 == 0) {
      for (puVar10 = (undefined4 *)(**(code **)(*piVar4 + 4))(); puVar10 != (undefined4 *)0x0;
          puVar10 = (undefined4 *)puVar10[1]) {
        if (puVar10 == &DAT_00b3fcdc) {
          iVar11 = _rand();
          iVar7 = *(ushort *)(piVar4[0x2d] + 8) - 1;
          param_1 = (int *)CONCAT22((short)((uint)iVar7 >> 0x10),in_FPUControlWord);
          fStack_3c = (float)(longlong)ROUND((float)iVar7 * ((float)iVar11 / 32767.0));
          local_44 = (uint)fStack_3c & 0xffff;
          fVar3 = (float)((int)fStack_3c + 1);
          goto LAB_0074af8e;
        }
      }
    }
    else {
      param_1 = (int *)0x0;
      uVar8 = (**(code **)(*(int *)piVar4[0x2d] + 0x5c))();
      uVar9 = _rand();
      uVar9 = uVar9 % (uVar8 & 0xffff);
      do {
        (**(code **)(*(int *)piVar4[0x2d] + 0x60))(uVar9,&local_44,&local_48,&param_1);
        if ((((short)local_44 != (short)local_48) && ((short)local_44 != (short)param_1)) &&
           ((short)local_48 != (short)param_1)) break;
        uVar9 = uVar9 + 1;
        if ((uVar8 & 0xffff) <= uVar9) {
          uVar9 = 0;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 6);
      iVar11 = _rand();
      if (iVar11 % 3 == 1) {
        local_44 = local_48 & 0xffff;
        local_48 = (uint)param_1 & 0xffff;
      }
      else {
        fVar3 = (float)param_1;
        if (iVar11 % 3 == 2) {
LAB_0074af8e:
          local_48 = (uint)fVar3 & 0xffff;
        }
      }
      pfVar6 = param_3;
      pfVar5 = param_2;
      iVar11 = *(int *)(piVar4[0x2d] + 0x1c);
      iVar7 = *(int *)(piVar4[0x2d] + 0x20);
      if (iVar11 != 0) {
        iVar1 = (local_44 & 0xffff) * 0xc;
        fStack_30 = *(float *)(iVar1 + iVar11);
        fStack_2c = *(float *)(iVar1 + 4 + iVar11);
        fStack_28 = *(float *)(iVar1 + 8 + iVar11);
        iVar2 = (local_48 & 0xffff) * 0xc;
        fStack_3c = *(float *)(iVar2 + iVar11);
        fStack_38 = *(float *)(iVar2 + 4 + iVar11);
        fStack_34 = *(float *)(iVar2 + 8 + iVar11);
        fStack_24 = fStack_3c + fStack_30;
        fStack_20 = fStack_2c + fStack_38;
        fStack_1c = fStack_28 + fStack_34;
        fStack_18 = fStack_24 * 0.5;
        *param_2 = fStack_18;
        fStack_14 = fStack_20 * 0.5;
        param_2[1] = fStack_14;
        fStack_10 = fStack_1c * 0.5;
        param_2[2] = fStack_10;
        if ((*(int *)(local_40 + 0x70) == 0) && (iVar7 != 0)) {
          fStack_18 = *(float *)(iVar1 + iVar7);
          fStack_14 = *(float *)(iVar1 + 4 + iVar7);
          fStack_10 = *(float *)(iVar1 + 8 + iVar7);
          fStack_c = *(float *)(iVar2 + iVar7) + fStack_18;
          fStack_8 = fStack_14 + *(float *)(iVar2 + 4 + iVar7);
          fStack_4 = fStack_10 + *(float *)(iVar2 + 8 + iVar7);
          fStack_24 = fStack_c * 0.5;
          fStack_20 = fStack_8 * 0.5;
          fStack_1c = fStack_4 * 0.5;
          FUN_004bfaa0(&fStack_24);
          param_1 = (int *)(pfVar6[2] * pfVar6[2] + *pfVar6 * *pfVar6 + pfVar6[1] * pfVar6[1]);
          fVar12 = (float10)FUN_00982c30();
          param_1 = (int *)(float)fVar12;
          fStack_c = (float)param_1 * fStack_24;
          *pfVar6 = fStack_c;
          fStack_8 = fStack_20 * (float)param_1;
          pfVar6[1] = fStack_8;
          fStack_4 = (float)param_1 * fStack_1c;
          pfVar6[2] = fStack_4;
        }
        if (*(int *)(local_40 + 0x74) == 4) {
          iVar11 = _rand();
          param_1 = (int *)((float)iVar11 / 32767.0);
          fStack_18 = (float)param_1 * (fStack_3c - fStack_30);
          fStack_14 = (fStack_38 - fStack_2c) * (float)param_1;
          fStack_10 = (float)param_1 * (fStack_34 - fStack_28);
          fStack_c = fStack_18 + fStack_30;
          *pfVar5 = fStack_c;
          fStack_8 = fStack_2c + fStack_14;
          pfVar5[1] = fStack_8;
          fStack_4 = fStack_28 + fStack_10;
          pfVar5[2] = fStack_4;
        }
        FUN_0074a0a0(piVar4,pfVar5,pfVar6);
        return 1;
      }
    }
  }
  return 0;
}



undefined4 FUN_0074b220(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint uVar4;
  float10 fVar5;
  undefined8 uStack_18;
  undefined4 uStack_10;
  undefined1 auStack_c [12];
  
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x10))();
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 8) == 0) {
        return 0;
      }
      uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 8) + 8);
      iVar2 = _rand();
      iVar1 = uVar4 - 1;
      uStack_18 = (longlong)ROUND(((float)iVar2 / 32767.0) * (float)uVar4);
      iVar2 = (int)uStack_18;
      if (iVar1 <= (int)uStack_18) {
        iVar2 = iVar1;
      }
      iVar1 = iVar2 * 0x2c + *(int *)(*(int *)(param_1 + 8) + 0xc);
      iVar2 = _rand();
      if (param_2[0x2e] == 0) {
        return 0;
      }
      uStack_18 = (longlong)
                  ROUND((float)(int)(*(ushort *)(iVar1 + 0x1c) - 1) * ((float)iVar2 / 32767.0));
      FUN_0074a390(&uStack_18,auStack_c,param_2,param_2[0x2e],iVar1,(int)uStack_18);
      *param_3 = (int)uStack_18;
      param_3[1] = uStack_18._4_4_;
      param_3[2] = uStack_10;
      if ((*(int *)(in_ECX + 0x70) == 0) && (*(int *)(param_2[0x2d] + 0x20) != 0)) {
        fVar5 = (float10)FUN_00404c90();
        puVar3 = (undefined4 *)FUN_0047da10(&uStack_18,(float)fVar5,auStack_c);
        *param_4 = *puVar3;
        param_4[1] = puVar3[1];
        param_4[2] = puVar3[2];
      }
      FUN_0074a0a0(param_2,param_3,param_4);
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_0074b3c0(int param_1,int *param_2,float *param_3,undefined4 *param_4)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int in_ECX;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  undefined8 uStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (param_2 != (int *)0x0) {
    iVar5 = (**(code **)(*param_2 + 0x10))();
    if ((iVar5 != 0) && (*(int *)(param_1 + 8) != 0)) {
      uVar10 = (uint)*(ushort *)(*(int *)(param_1 + 8) + 8);
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar10);
      iVar6 = _rand();
      iVar5 = uVar10 - 1;
      uStack_60 = (longlong)ROUND(((float)iVar6 / 32767.0) * (float)(int)(float)uStack_60);
      iVar6 = (int)(float)uStack_60;
      if (iVar5 <= (int)(float)uStack_60) {
        iVar6 = iVar5;
      }
      iVar5 = iVar6 * 0x2c + *(int *)(*(int *)(param_1 + 8) + 0xc);
      if (*(short *)(iVar5 + 0x1e) == 0) {
        uVar7 = FUN_0074b220(param_1,param_2,param_3,param_4);
        return uVar7;
      }
      uVar2 = *(ushort *)(iVar5 + 0x1e);
      fVar11 = (float10)FUN_0053d460();
      iVar6 = uVar2 - 1;
      uStack_60 = (longlong)ROUND(fVar11 * (float10)uVar2);
      iVar8 = (int)(float)uStack_60;
      if (iVar6 <= (int)(float)uStack_60) {
        iVar8 = iVar6;
      }
      iVar6 = param_2[0x2e];
      if (iVar6 == 0) {
        return 0;
      }
      if (*(short *)(iVar5 + 0x22) == 0) {
        puVar1 = (ushort *)(*(int *)(iVar5 + 0x14) + iVar8 * 6);
        uVar10 = (uint)*puVar1;
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
      }
      else {
        iVar4 = *(int *)(iVar5 + 0x14);
        uVar10 = (uint)*(ushort *)(iVar4 + iVar8 * 2);
        uStack_60._4_4_ = (float)((ulonglong)uStack_60 >> 0x20);
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar10);
        uVar2 = *(ushort *)(iVar4 + 2 + iVar8 * 2);
        uVar3 = *(ushort *)(iVar4 + 4 + iVar8 * 2);
      }
      FUN_0074a390(&uStack_60,&fStack_24,param_2,iVar6,iVar5,uVar10);
      FUN_0074a390(&fStack_54,&fStack_18,param_2,iVar6,iVar5,uVar2);
      FUN_0074a390(&fStack_48,&fStack_c,param_2,iVar6,iVar5,uVar3);
      fStack_3c = fStack_54 + (float)uStack_60;
      fStack_38 = fStack_50 + uStack_60._4_4_;
      fStack_34 = fStack_58 + fStack_4c;
      fStack_30 = fStack_3c + fStack_48;
      fStack_2c = fStack_44 + fStack_38;
      fStack_28 = fStack_40 + fStack_34;
      FUN_004bf9b0(&fStack_3c,0x40400000);
      *param_3 = fStack_3c;
      param_3[1] = fStack_38;
      param_3[2] = fStack_34;
      if (*(int *)(in_ECX + 0x70) == 0) {
        fStack_3c = fStack_18 + fStack_24;
        fStack_38 = fStack_20 + fStack_14;
        fStack_34 = fStack_1c + fStack_10;
        fStack_18 = fStack_3c + fStack_c;
        fStack_14 = fStack_8 + fStack_38;
        fStack_10 = fStack_4 + fStack_34;
        FUN_004bf9b0(&fStack_c,0x40400000);
        FUN_004bfaa0(&fStack_c);
        fVar11 = (float10)FUN_00404c90();
        puVar9 = (undefined4 *)FUN_0047da10(&fStack_18,(float)fVar11,&fStack_c);
        *param_4 = *puVar9;
        param_4[1] = puVar9[1];
        param_4[2] = puVar9[2];
      }
      if (*(int *)(in_ECX + 0x74) == 3) {
        fStack_3c = fStack_54 - (float)uStack_60;
        fStack_38 = fStack_50 - uStack_60._4_4_;
        fStack_34 = fStack_4c - fStack_58;
        fStack_54 = fStack_48 - (float)uStack_60;
        fStack_50 = fStack_44 - uStack_60._4_4_;
        fStack_4c = fStack_40 - fStack_58;
        fVar11 = (float10)FUN_0053d460();
        FUN_0069dd70((float)fVar11);
        fVar12 = (float10)FUN_0053d460();
        FUN_0069dd70((float)(((float10)1 - (float10)(float)fVar11) * fVar12));
        fStack_48 = fStack_3c + (float)uStack_60;
        fStack_44 = fStack_38 + uStack_60._4_4_;
        fStack_40 = fStack_34 + fStack_58;
        fStack_3c = fStack_48 + fStack_54;
        *param_3 = fStack_3c;
        fStack_38 = fStack_44 + fStack_50;
        param_3[1] = fStack_38;
        fStack_34 = fStack_40 + fStack_4c;
        param_3[2] = fStack_34;
      }
      FUN_0074a0a0(param_2,param_3,param_4);
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_0074b7a0(int param_1,int *param_2,float *param_3,undefined4 *param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int in_ECX;
  undefined2 uVar10;
  undefined2 uVar11;
  uint uVar12;
  float10 fVar13;
  undefined8 uStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (param_2 != (int *)0x0) {
    iVar5 = (**(code **)(*param_2 + 0x10))();
    if (iVar5 != 0) {
      if (*(int *)(param_1 + 8) == 0) {
        return 0;
      }
      uVar12 = (uint)*(ushort *)(*(int *)(param_1 + 8) + 8);
      uStack_48 = CONCAT44(uStack_48._4_4_,uVar12);
      iVar6 = _rand();
      iVar5 = uVar12 - 1;
      uStack_48 = (longlong)ROUND(((float)iVar6 / 32767.0) * (float)(int)(float)uStack_48);
      iVar6 = (int)(float)uStack_48;
      if (iVar5 <= (int)(float)uStack_48) {
        iVar6 = iVar5;
      }
      iVar5 = iVar6 * 0x2c + *(int *)(*(int *)(param_1 + 8) + 0xc);
      if (*(short *)(iVar5 + 0x1e) != 0) {
        uVar1 = *(ushort *)(iVar5 + 0x1e);
        fVar13 = (float10)FUN_0053d460();
        iVar6 = uVar1 - 1;
        uStack_48 = (longlong)ROUND(fVar13 * (float10)uVar1);
        iVar8 = (int)(float)uStack_48;
        if (iVar6 <= (int)(float)uStack_48) {
          iVar8 = iVar6;
        }
        iVar6 = param_2[0x2e];
        if (iVar6 != 0) {
          iVar3 = *(int *)(iVar5 + 0x14);
          if (*(short *)(iVar5 + 0x22) == 0) {
            uVar10 = *(undefined2 *)(iVar3 + iVar8 * 6);
            uVar11 = *(undefined2 *)(iVar3 + 2 + iVar8 * 6);
            uVar2 = *(undefined2 *)(iVar3 + 4 + iVar8 * 6);
          }
          else {
            uVar10 = *(undefined2 *)(iVar3 + iVar8 * 2);
            uVar11 = *(undefined2 *)(iVar3 + 2 + iVar8 * 2);
            uVar2 = *(undefined2 *)(iVar3 + 4 + iVar8 * 2);
          }
          iVar8 = _rand();
          uVar4 = uVar11;
          if ((iVar8 % 3 == 1) || (uVar4 = uVar10, iVar8 % 3 == 2)) {
            uVar10 = uVar4;
            uVar11 = uVar2;
          }
          FUN_0074a390(&uStack_48,&fStack_18,param_2,iVar6,iVar5,uVar10);
          FUN_0074a390(&fStack_3c,&fStack_c,param_2,iVar6,iVar5,uVar11);
          fStack_30 = fStack_3c + (float)uStack_48;
          fStack_2c = uStack_48._4_4_ + fStack_38;
          fStack_28 = fStack_40 + fStack_34;
          FUN_004bf9b0(&fStack_24,0x40000000);
          *param_3 = fStack_24;
          param_3[1] = fStack_20;
          param_3[2] = fStack_1c;
          if (*(int *)(in_ECX + 0x70) == 0) {
            fStack_24 = fStack_c + fStack_18;
            fStack_20 = fStack_14 + fStack_8;
            fStack_1c = fStack_10 + fStack_4;
            FUN_004bf9b0(&fStack_c,0x40000000);
            FUN_004bfaa0(&fStack_c);
            fVar13 = (float10)FUN_00404c90();
            puVar9 = (undefined4 *)FUN_0047da10(&fStack_18,(float)fVar13,&fStack_c);
            *param_4 = *puVar9;
            param_4[1] = puVar9[1];
            param_4[2] = puVar9[2];
          }
          if (*(int *)(in_ECX + 0x74) == 4) {
            fStack_30 = fStack_3c - (float)uStack_48;
            fStack_2c = fStack_38 - uStack_48._4_4_;
            fStack_28 = fStack_34 - fStack_40;
            fVar13 = (float10)FUN_0053d460();
            fStack_34 = (float)fVar13;
            fStack_3c = fStack_34 * fStack_30;
            fStack_38 = fStack_2c * fStack_34;
            fStack_34 = fStack_34 * fStack_28;
            fStack_30 = fStack_3c + (float)uStack_48;
            *param_3 = fStack_30;
            fStack_2c = fStack_38 + uStack_48._4_4_;
            param_3[1] = fStack_2c;
            fStack_28 = fStack_34 + fStack_40;
            param_3[2] = fStack_28;
          }
          FUN_0074a0a0(param_2,param_3,param_4);
          return 1;
        }
        return 0;
      }
      uVar7 = FUN_0074b220(param_1,param_2,param_3,param_4);
      return uVar7;
    }
  }
  return 0;
}



void FUN_0074bc80(byte param_1)

{
  int in_ECX;
  
  *(undefined ***)(in_ECX + 0x60) = &PTR_FUN_00a85bc0;
  if (*(int *)(in_ECX + 100) != 0) {
    FUN_0074a000(3);
  }
  *(undefined ***)(in_ECX + 0x50) = &PTR_FUN_00a85bb8;
  if (*(int *)(in_ECX + 0x54) != 0) {
    FUN_0074a000(3);
  }
  FUN_00752c20();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_0074bcd0(int *param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  float10 fVar11;
  uint local_68;
  uint local_64;
  uint local_60;
  int iStack_5c;
  int local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  if (param_1 != (int *)0x0) {
    iVar6 = (**(code **)(*param_1 + 0x10))();
    if (iVar6 != 0) {
      uVar7 = (**(code **)(*(int *)param_1[0x2d] + 0x5c))();
      uVar7 = uVar7 & 0xffff;
      uVar8 = _rand();
      uVar8 = uVar8 % uVar7;
      if (uVar8 == uVar7) {
        uVar8 = uVar7 - 1;
      }
      iStack_5c = 0;
      do {
        (**(code **)(*(int *)param_1[0x2d] + 0x60))(uVar8,&local_68,&local_64,&local_60);
        if ((((short)local_68 != (short)local_64) && ((short)local_68 != (short)local_60)) &&
           ((short)local_64 != (short)local_60)) break;
        uVar8 = uVar8 + 1;
        if (uVar7 <= uVar8) {
          uVar8 = 0;
        }
        iStack_5c = iStack_5c + 1;
      } while (iStack_5c < 6);
      iVar6 = *(int *)(param_1[0x2d] + 0x1c);
      iVar1 = *(int *)(param_1[0x2d] + 0x20);
      if (iVar6 == 0) {
        return 0;
      }
      iVar2 = (local_68 & 0xffff) * 0xc;
      fStack_48 = *(float *)(iVar2 + iVar6);
      fStack_44 = *(float *)(iVar2 + 4 + iVar6);
      fStack_40 = *(float *)(iVar2 + 8 + iVar6);
      iVar3 = (local_64 & 0xffff) * 0xc;
      fStack_3c = *(float *)(iVar3 + iVar6);
      fStack_38 = *(float *)(iVar3 + 4 + iVar6);
      fStack_34 = *(float *)(iVar3 + 8 + iVar6);
      iVar4 = (local_60 & 0xffff) * 0xc;
      fStack_30 = *(float *)(iVar4 + iVar6);
      fStack_2c = *(float *)(iVar4 + 4 + iVar6);
      fStack_28 = *(float *)(iVar4 + 8 + iVar6);
      fStack_24 = fStack_48 + fStack_3c + fStack_30;
      fStack_20 = fStack_2c + fStack_44 + fStack_38;
      fStack_1c = fStack_28 + fStack_40 + fStack_34;
      fStack_54 = fStack_24 * 0.33333334;
      *param_2 = fStack_54;
      fStack_50 = fStack_20 * 0.33333334;
      param_2[1] = fStack_50;
      fStack_4c = fStack_1c * 0.33333334;
      param_2[2] = fStack_4c;
      if ((*(int *)(local_58 + 0x70) == 0) && (iVar1 != 0)) {
        fStack_c = *(float *)(iVar3 + iVar1) + *(float *)(iVar2 + iVar1);
        fStack_18 = *(float *)(iVar4 + iVar1);
        fStack_8 = *(float *)(iVar2 + 4 + iVar1) + *(float *)(iVar3 + 4 + iVar1);
        fStack_14 = *(float *)(iVar4 + 4 + iVar1);
        fStack_10 = *(float *)(iVar4 + 8 + iVar1);
        fStack_4 = *(float *)(iVar2 + 8 + iVar1) + *(float *)(iVar3 + 8 + iVar1);
        fStack_24 = fStack_c + fStack_18;
        fStack_20 = fStack_14 + fStack_8;
        fStack_1c = fStack_10 + fStack_4;
        fStack_54 = fStack_24 * 0.33333334;
        fStack_50 = fStack_20 * 0.33333334;
        fStack_4c = fStack_1c * 0.33333334;
        FUN_004bfaa0(&fStack_54);
        fVar11 = (float10)FUN_00982c30();
        fStack_4 = (float)fVar11;
        fStack_c = fStack_4 * fStack_54;
        *param_3 = fStack_c;
        fStack_8 = fStack_50 * fStack_4;
        fStack_4 = fStack_4 * fStack_4c;
        param_3[1] = fStack_8;
        param_3[2] = fStack_4;
      }
      if (*(int *)(local_58 + 0x74) == 3) {
        fStack_54 = fStack_3c - fStack_48;
        fStack_50 = fStack_38 - fStack_44;
        fStack_4c = fStack_34 - fStack_40;
        fStack_3c = fStack_30 - fStack_48;
        fStack_38 = fStack_2c - fStack_44;
        fStack_34 = fStack_28 - fStack_40;
        iVar6 = _rand();
        fVar5 = (float)iVar6 / 32767.0;
        fStack_54 = fVar5 * fStack_54;
        fStack_50 = fStack_50 * fVar5;
        fStack_4c = fVar5 * fStack_4c;
        iVar6 = _rand();
        fVar5 = (1.0 - fVar5) * ((float)iVar6 / 32767.0);
        fStack_3c = fVar5 * fStack_3c;
        fStack_38 = fStack_38 * fVar5;
        fStack_34 = fVar5 * fStack_34;
        fStack_c = fStack_54 + fStack_48;
        fStack_8 = fStack_50 + fStack_44;
        fStack_4 = fStack_4c + fStack_40;
        fStack_18 = fStack_c + fStack_3c;
        *param_2 = fStack_18;
        fStack_14 = fStack_8 + fStack_38;
        param_2[1] = fStack_14;
        fStack_10 = fStack_4 + fStack_34;
        param_2[2] = fStack_10;
        FUN_0074a0a0(param_1,param_2,param_3);
        return 1;
      }
      FUN_0074a0a0(param_1,param_2,param_3);
      return 1;
    }
    for (puVar9 = (undefined4 *)(**(code **)(*param_1 + 4))(); puVar9 != (undefined4 *)0x0;
        puVar9 = (undefined4 *)puVar9[1]) {
      if (puVar9 == &DAT_00b3fcdc) {
        uVar10 = FUN_0074ae30(param_1,param_2,param_3);
        return uVar10;
      }
    }
  }
  return 0;
}



void FUN_0074c250(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  iVar2 = param_1;
  FUN_0074f4f0(param_1);
  param_1 = FUN_0070f910(DAT_00b408c8);
  uVar4 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  uVar4 = 0;
  if (*(short *)(in_ECX + 0x5c) != 0) {
    if (*(short *)(in_ECX + 0x5c) == 0) goto LAB_0074c2ed;
    do {
      iVar3 = *(int *)(*(int *)(in_ECX + 0x54) + uVar4 * 4);
      if (iVar3 != 0) {
        param_1 = FUN_0070fc30("Emitter Object",*(undefined4 *)(iVar3 + 8));
        uVar5 = (uint)*(ushort *)(iVar2 + 10);
        if (*(ushort *)(iVar2 + 8) <= uVar5) {
          FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar5);
        }
        FUN_0042bb90(uVar5,&param_1);
      }
LAB_0074c2ed:
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(in_ECX + 0x5c));
  }
  switch(*(undefined4 *)(in_ECX + 0x74)) {
  case 0:
    pcVar6 = "NI_EMIT_FROM_VERTICES";
    break;
  case 1:
    pcVar6 = "NI_EMIT_FROM_FACE_CENTER";
    break;
  case 2:
    pcVar6 = "NI_EMIT_FROM_EDGE_CENTER";
    break;
  case 3:
    pcVar6 = "NI_EMIT_FROM_FACE_SURFACE";
    break;
  case 4:
    pcVar6 = "NI_EMIT_FROM_EDGE_SURFACE";
    break;
  default:
    iVar3 = FUN_0070fc30("m_eEmissionType","UNKNOWN!!!");
    uVar1 = *(ushort *)(iVar2 + 10);
    uVar4 = (uint)uVar1;
    if (*(ushort *)(iVar2 + 8) <= uVar4) {
      FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar4);
    }
    if (uVar4 < *(ushort *)(iVar2 + 10)) {
      if (iVar3 == 0) {
        if (*(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) != 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
        }
      }
      else if (*(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) == 0) {
        *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
      }
    }
    else {
      *(ushort *)(iVar2 + 10) = uVar1 + 1;
      if (iVar3 != 0) {
        *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
      }
    }
    *(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) = iVar3;
    goto LAB_0074c3d6;
  }
  param_1 = FUN_0070fc30("m_eEmissionType",pcVar6);
  uVar4 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
LAB_0074c3d6:
  iVar3 = *(int *)(in_ECX + 0x70);
  if (iVar3 == 0) {
    pcVar6 = "NI_VELOCITY_USE_NORMALS";
  }
  else if (iVar3 == 1) {
    pcVar6 = "NI_VELOCITY_USE_RANDOM";
  }
  else if (iVar3 == 2) {
    pcVar6 = "NI_VELOCITY_USE_DIRECTION";
  }
  else {
    pcVar6 = "UNKNOWN!!!";
  }
  param_1 = FUN_0070fc30("m_eInitVelocityType",pcVar6);
  uVar4 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  iVar3 = FUN_0070fb90("m_kEmissionAxis.x",*(undefined4 *)(in_ECX + 0x78));
  uVar1 = *(ushort *)(iVar2 + 10);
  uVar4 = (uint)uVar1;
  if (*(ushort *)(iVar2 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar4);
  }
  if (uVar4 < *(ushort *)(iVar2 + 10)) {
    if (iVar3 == 0) {
      if (*(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) != 0) {
        *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) == 0) {
      *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
    }
  }
  else {
    *(ushort *)(iVar2 + 10) = uVar1 + 1;
    if (iVar3 != 0) {
      *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
    }
  }
  *(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) = iVar3;
  iVar3 = FUN_0070fb90("m_kEmissionAxis.y",*(undefined4 *)(in_ECX + 0x7c));
  uVar1 = *(ushort *)(iVar2 + 10);
  uVar4 = (uint)uVar1;
  if (*(ushort *)(iVar2 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar4);
  }
  if (uVar4 < *(ushort *)(iVar2 + 10)) {
    if (iVar3 == 0) {
      if (*(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) != 0) {
        *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) == 0) {
      *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
    }
  }
  else {
    *(ushort *)(iVar2 + 10) = uVar1 + 1;
    if (iVar3 != 0) {
      *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
    }
  }
  *(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) = iVar3;
  iVar3 = FUN_0070fb90("m_kEmissionAxis.z",*(undefined4 *)(in_ECX + 0x80));
  uVar1 = *(ushort *)(iVar2 + 10);
  uVar4 = (uint)uVar1;
  if (*(ushort *)(iVar2 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar4);
  }
  if (uVar4 < *(ushort *)(iVar2 + 10)) {
    if (iVar3 == 0) {
      if (*(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) != 0) {
        *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) == 0) {
      *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
      *(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) = iVar3;
      return;
    }
  }
  else {
    *(ushort *)(iVar2 + 10) = uVar1 + 1;
    if (iVar3 != 0) {
      *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
      *(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) = iVar3;
      return;
    }
  }
  *(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) = iVar3;
  return;
}



uint FUN_0074c5d0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  ushort uVar4;
  LONG LVar5;
  int in_ECX;
  uint uVar6;
  
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  uVar4 = 0;
  if (*(ushort *)(in_ECX + 10) != 0) {
    iVar1 = *(int *)(in_ECX + 4);
    do {
      if (*(int *)(iVar1 + (uint)uVar4 * 4) == 0) {
        uVar6 = (uint)uVar4;
        puVar2 = *(undefined4 **)(iVar1 + uVar6 * 4);
        if (puVar2 != (undefined4 *)*param_1) {
          if (puVar2 != (undefined4 *)0x0) {
            LVar5 = InterlockedDecrement(puVar2 + 1);
            if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
          }
          iVar3 = *param_1;
          *(int *)(iVar1 + uVar6 * 4) = iVar3;
          if (iVar3 != 0) {
            InterlockedIncrement((LONG *)(iVar3 + 4));
          }
        }
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
        return uVar6;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(in_ECX + 10));
  }
  uVar6 = (uint)*(ushort *)(in_ECX + 10);
  if (*(ushort *)(in_ECX + 8) <= uVar6) {
    FUN_0074a8c0(*(ushort *)(in_ECX + 0xe) + uVar6);
  }
  FUN_0074ab20(uVar6,param_1);
  return uVar6;
}



uint FUN_0074c6a0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  ushort uVar4;
  LONG LVar5;
  int in_ECX;
  uint uVar6;
  
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  uVar4 = 0;
  if (*(ushort *)(in_ECX + 10) != 0) {
    iVar1 = *(int *)(in_ECX + 4);
    do {
      if (*(int *)(iVar1 + (uint)uVar4 * 4) == 0) {
        uVar6 = (uint)uVar4;
        puVar2 = *(undefined4 **)(iVar1 + uVar6 * 4);
        if (puVar2 != (undefined4 *)*param_1) {
          if (puVar2 != (undefined4 *)0x0) {
            LVar5 = InterlockedDecrement(puVar2 + 1);
            if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
          }
          iVar3 = *param_1;
          *(int *)(iVar1 + uVar6 * 4) = iVar3;
          if (iVar3 != 0) {
            InterlockedIncrement((LONG *)(iVar3 + 4));
          }
        }
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
        return uVar6;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(in_ECX + 10));
  }
  uVar6 = (uint)*(ushort *)(in_ECX + 10);
  if (*(ushort *)(in_ECX + 8) <= uVar6) {
    FUN_0074a8c0(*(ushort *)(in_ECX + 0xe) + uVar6);
  }
  FUN_0074abf0(uVar6,param_1);
  return uVar6;
}



/* WARNING: Removing unreachable block (ram,0x0074c7ac) */

void FUN_0074c770(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = (uint)*(ushort *)(in_ECX + 0x5c);
  if (uVar4 != 0) {
    iVar2 = _rand();
    local_8 = (uint)(longlong)ROUND((float)uVar4 * ((float)iVar2 / 32767.0));
    if (local_8 == uVar4) {
      local_8 = uVar4 - 1;
    }
    if ((local_8 < *(ushort *)(in_ECX + 0x5c)) &&
       (iVar2 = *(int *)(*(int *)(in_ECX + 0x54) + local_8 * 4), iVar2 != 0)) {
      iVar1 = *(int *)(iVar2 + 0xb8);
      if (local_8 < *(ushort *)(in_ECX + 0x6c)) {
        iVar3 = *(int *)(*(int *)(in_ECX + 100) + local_8 * 4);
      }
      else {
        iVar3 = 0;
      }
      if (((iVar1 != 0) && (iVar3 != 0)) && (*(int *)(iVar3 + 8) == 0)) {
        FUN_0074a2d0(iVar2);
      }
      switch(*(undefined4 *)(in_ECX + 0x74)) {
      case 1:
      case 3:
        if (iVar1 != 0) {
          FUN_0074b3c0(iVar3,iVar2,param_1,param_2);
          return;
        }
        FUN_0074bcd0(iVar2,param_1,param_2);
        return;
      case 2:
      case 4:
        if (iVar1 != 0) {
          FUN_0074b7a0(iVar3,iVar2,param_1,param_2);
          return;
        }
        FUN_0074ae30(iVar2,param_1,param_2);
        return;
      default:
        if (iVar1 != 0) {
          FUN_0074b220(iVar3,iVar2,param_1,param_2);
          return;
        }
        FUN_0074ad30(iVar2,param_1,param_2);
      }
    }
  }
  return;
}



void FUN_0074c910(undefined4 *param_1)

{
  LONG *lpAddend;
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar3 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  lpAddend = param_1 + 1;
  InterlockedIncrement(lpAddend);
  FUN_0074c5d0(&param_1);
  LVar4 = InterlockedDecrement(lpAddend);
  if (LVar4 == 0) {
    (**(code **)*puVar3)(1);
  }
  if (puVar3[0x2e] == 0) {
    iVar5 = FUN_00401f00(0xc);
  }
  else {
    iVar2 = *(int *)(puVar3[0x2e] + 0xc);
    iVar5 = FUN_00401f00(0xc);
    if (iVar2 != 0) {
      if (iVar5 == 0) {
        puVar6 = (undefined4 *)0x0;
        FUN_0075fa90(iVar2);
      }
      else {
        puVar6 = (undefined4 *)FUN_0074a750();
        FUN_0075fa90(iVar2);
      }
      goto LAB_0074c9ab;
    }
  }
  if (iVar5 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)FUN_0074a750();
  }
LAB_0074c9ab:
  param_1 = puVar6;
  if (puVar6 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar6 + 1);
  }
  FUN_0074c6a0(&param_1);
  if ((puVar6 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar6 + 1), LVar4 == 0)) {
    (**(code **)*puVar6)(1);
  }
  if (puVar3[0x2d] != 0) {
    pbVar1 = (byte *)(puVar3[0x2d] + 0x30);
    *pbVar1 = *pbVar1 | 0x33;
  }
  return;
}



void FUN_0074ca80(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  thunk_FUN_00752cb0(param_1);
  iVar1 = FUN_007124d0();
  if (iVar1 != 0) {
    FUN_0074a8c0(iVar1);
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      uVar2 = FUN_007124a0();
      FUN_0074c910(uVar2);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0074cad0(undefined4 param_1,float *param_2,undefined4 *param_3)

{
  float10 fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int in_ECX;
  float10 fVar6;
  undefined1 local_c [12];
  
  iVar3 = _rand();
  fVar2 = *(float *)(in_ECX + 0x54) * ((float)iVar3 / 32767.0);
  iVar3 = _rand();
  fVar6 = (float10)(_DAT_00b3f9a0 * ((float)iVar3 / 32767.0));
  fVar1 = (float10)fcos(fVar6);
  fVar6 = (float10)fsin(fVar6);
  *param_2 = fVar2 * (float)fVar1;
  param_2[1] = fVar2 * (float)fVar6;
  iVar3 = _rand();
  param_2[2] = ((float)iVar3 / 32767.0 - 0.5) * *(float *)(in_ECX + 0x58);
  pfVar4 = (float *)FUN_0053d4b0(local_c,param_2);
  *param_2 = *pfVar4;
  param_2[1] = pfVar4[1];
  param_2[2] = pfVar4[2];
  puVar5 = (undefined4 *)FUN_007101f0(local_c,param_3);
  *param_3 = *puVar5;
  param_3[1] = puVar5[1];
  param_3[2] = puVar5[2];
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0074ce30(undefined4 param_1,float *param_2,undefined4 *param_3)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int in_ECX;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  undefined1 local_c [12];
  
  iVar4 = _rand();
  fVar2 = *(float *)(in_ECX + 0x54) * ((float)iVar4 / 32767.0);
  iVar4 = _rand();
  fVar3 = _DAT_00b3f9a0 * ((float)iVar4 / 32767.0);
  iVar4 = _rand();
  fVar7 = (float10)fVar3;
  fVar1 = (float10)fcos(fVar7);
  fVar8 = (float10)fsin(fVar7);
  fVar9 = (float10)(_DAT_00b3f9a0 * ((float)iVar4 / 32767.0));
  fVar7 = (float10)fcos(fVar9);
  fVar9 = (float10)fsin(fVar9);
  fVar3 = fVar2 * (float)fVar9;
  *param_2 = (float)fVar1 * fVar3;
  param_2[1] = (float)fVar8 * fVar3;
  param_2[2] = fVar2 * (float)fVar7;
  pfVar5 = (float *)FUN_0053d4b0(local_c,param_2);
  *param_2 = *pfVar5;
  param_2[1] = pfVar5[1];
  param_2[2] = pfVar5[2];
  puVar6 = (undefined4 *)FUN_007101f0(local_c,param_3);
  *param_3 = *puVar6;
  param_3[1] = puVar6[1];
  param_3[2] = puVar6[2];
  return;
}



void FUN_0074d120(undefined4 param_1,float *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int in_ECX;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = _rand();
  iVar2 = _rand();
  iVar3 = _rand();
  local_c = *(float *)(in_ECX + 0x54) * ((float)iVar3 / 32767.0 - 0.5);
  local_8 = ((float)iVar2 / 32767.0 - 0.5) * *(float *)(in_ECX + 0x58);
  local_4 = ((float)iVar1 / 32767.0 - 0.5) * *(float *)(in_ECX + 0x5c);
  *param_2 = local_c;
  param_2[1] = local_8;
  param_2[2] = local_4;
  pfVar4 = (float *)FUN_0053d4b0(&local_c,param_2);
  *param_2 = *pfVar4;
  param_2[1] = pfVar4[1];
  param_2[2] = pfVar4[2];
  puVar5 = (undefined4 *)FUN_007101f0(&local_c,param_3);
  *param_3 = *puVar5;
  param_3[1] = puVar5[1];
  param_3[2] = puVar5[2];
  return;
}



void FUN_0074d550(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int local_24 [9];
  
  iVar5 = (int)param_2;
  iVar1 = *(int *)((int)param_2 + 0x54);
  iVar2 = *(int *)((int)param_2 + 0x58);
  uVar6 = 0;
  if (*(short *)((int)param_2 + 0x48) != 0) {
    do {
      uVar9 = (uint)uVar6;
      iVar3 = *(int *)(iVar5 + 0x5c);
      if (uVar9 < *(ushort *)(*(int *)(iVar5 + 0x68) + 0xb6)) {
        param_2 = *(int **)(*(int *)(*(int *)(iVar5 + 0x68) + 0xb0) + uVar9 * 4);
      }
      else {
        param_2 = (int *)0x0;
      }
      iVar8 = uVar9 * 0xc;
      iVar7 = *(int *)(iVar5 + 0x1c) + iVar8;
      param_2[0x15] = *(int *)(*(int *)(iVar5 + 0x1c) + iVar8);
      param_2[0x16] = *(int *)(iVar7 + 4);
      param_2[0x17] = *(int *)(iVar7 + 8);
      if ((iVar1 != 0) && (iVar2 != 0)) {
        FUN_0070fe20(*(undefined4 *)(iVar1 + uVar9 * 4),*(undefined4 *)(iVar8 + iVar2),
                     *(undefined4 *)(iVar8 + 4 + iVar2),*(undefined4 *)(iVar8 + 8 + iVar2));
        piVar10 = local_24;
        piVar11 = param_2 + 0xc;
        for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar11 = *piVar10;
          piVar10 = piVar10 + 1;
          piVar11 = piVar11 + 1;
        }
      }
      pcVar4 = *(code **)(*param_2 + 0x60);
      param_2[0x18] =
           (int)ABS(*(float *)(*(int *)(iVar5 + 0x4c) + uVar9 * 4) *
                    *(float *)(*(int *)(iVar5 + 0x44) + uVar9 * 4));
      (*pcVar4)(*(undefined4 *)(iVar3 + uVar9 * 0x1c + 0xc),1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(iVar5 + 0x48));
  }
  return;
}



void FUN_0074d680(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  uint uVar2;
  
  FUN_00752d80(param_1);
  uVar2 = 0;
  if (*(short *)(in_ECX + 0x22) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1c) + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x38))(param_1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 0x22));
  }
  return;
}



undefined1 FUN_0074d6c0(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  uint uVar3;
  
  cVar2 = thunk_FUN_00700650(param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = 0;
  if (*(short *)(in_ECX + 0x22) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1c) + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x24))(param_1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(in_ECX + 0x22));
  }
  return 1;
}



undefined4 FUN_0074d710(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  
  cVar2 = FUN_00752cd0(param_1);
  if ((cVar2 == '\0') || (*(short *)(in_ECX + 0x22) != *(short *)(param_1 + 0x22))) {
    return 0;
  }
  uVar4 = 0;
  if (*(short *)(in_ECX + 0x22) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1c) + uVar4 * 4);
      if (uVar4 < *(ushort *)(param_1 + 0x22)) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + uVar4 * 4);
      }
      else {
        iVar3 = 0;
      }
      if (piVar1 == (int *)0x0) {
        if (iVar3 != 0) {
          return 0;
        }
      }
      else if ((iVar3 == 0) || (cVar2 = (**(code **)(*piVar1 + 0x2c))(iVar3), cVar2 == '\0')) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(in_ECX + 0x22));
  }
  return 1;
}



int * FUN_0074d790(int *param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  LONG LVar3;
  int in_ECX;
  undefined4 local_4;
  
  if (*(short *)(in_ECX + 10) == 0) {
    *param_1 = 0;
    return param_1;
  }
  uVar2 = *(short *)(in_ECX + 10) - 1;
  *(ushort *)(in_ECX + 10) = uVar2;
  puVar1 = *(undefined4 **)(*(int *)(in_ECX + 4) + (uint)uVar2 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 1);
  }
  local_4 = 0;
  FUN_0055e2a0(&local_4);
  if (puVar1 != (undefined4 *)0x0) {
    *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
  }
  *param_1 = (int)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 1);
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if (LVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  return param_1;
}



void FUN_0074d830(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  uint uVar4;
  
  if ((param_1 < (undefined4 *)(uint)*(ushort *)(in_ECX + 0x7e)) &&
     (*(int *)(*(int *)(in_ECX + 0x78) + (int)param_1 * 4) != 0)) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + (int)param_1 * 4);
    uVar4 = 0;
    if (*(short *)(iVar1 + 8) != 0) {
      do {
        puVar2 = (undefined4 *)FUN_00700900();
        param_1 = puVar2;
        if (puVar2 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar2 + 1);
        }
        FUN_004b34e0(uVar4,&param_1);
        if ((puVar2 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar2 + 1), LVar3 == 0))
        {
          (**(code **)*puVar2)(1);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)(iVar1 + 8));
    }
  }
  return;
}



int * FUN_0074d8c0(int *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  
  puVar1 = param_3;
  if (param_2 < *(ushort *)(in_ECX + 0x22)) {
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x1c) + param_2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
    puVar2 = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
    FUN_004b34e0(param_2,&param_3);
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if (LVar3 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *param_1 = (int)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if (LVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    return param_1;
  }
  if (param_3 != (undefined4 *)0x0) {
    InterlockedIncrement(param_3 + 1);
  }
  if (*(ushort *)(in_ECX + 0x20) <= param_2) {
    FUN_00523b10(*(ushort *)(in_ECX + 0x26) + param_2);
  }
  FUN_004b34e0(param_2,&param_3);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if (LVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = 0;
  return param_1;
}



void FUN_0074db50(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  LONG LVar5;
  int in_ECX;
  uint uVar6;
  
  puVar2 = param_2;
  FUN_00752c40(param_1,param_2);
  uVar6 = 0;
  if (*(short *)(in_ECX + 0x22) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1c) + uVar6 * 4);
      if (piVar1 != (int *)0x0) {
        uVar4 = (**(code **)(*piVar1 + 0x18))(puVar2);
        FUN_0074d8c0(&param_2,uVar6,uVar4);
        puVar3 = param_2;
        if ((param_2 != (undefined4 *)0x0) &&
           (LVar5 = InterlockedDecrement(param_2 + 1), LVar5 == 0)) {
          (**(code **)*puVar3)(1);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(in_ECX + 0x22));
  }
  return;
}



void FUN_0074dda0(byte param_1)

{
  int in_ECX;
  
  *(undefined ***)(in_ECX + 0x18) = &PTR_FUN_00a43850;
  if (*(int *)(in_ECX + 0x1c) != 0) {
    FUN_004027f0(3);
  }
  FUN_00752c20();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_0074dde0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00401f00(0x28);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00752bf0();
    *puVar1 = &PTR_FUN_00a85ed4;
    puVar1[6] = &PTR_FUN_00a43850;
    *(undefined2 *)(puVar1 + 8) = 0;
    *(undefined2 *)((int)puVar1 + 0x26) = 1;
    *(undefined2 *)((int)puVar1 + 0x22) = 0;
    *(undefined2 *)(puVar1 + 9) = 0;
    puVar1[7] = 0;
    FUN_0074db50(puVar1,param_1);
    return puVar1;
  }
  FUN_0074db50(0,param_1);
  return (undefined4 *)0x0;
}



void FUN_0074de50(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00752ec0(param_1);
  param_1 = FUN_0070f910(DAT_00b40a28);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0074dfa0(int param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    pfVar1 = (float *)(*(int *)(param_1 + 0x58) + ((uint)param_2 & 0xffff) * 0xc);
    if (*(char *)(in_ECX + 0x34) == '\0') {
      *pfVar1 = *(float *)(in_ECX + 0x28);
      pfVar1[1] = *(float *)(in_ECX + 0x2c);
      pfVar1[2] = *(float *)(in_ECX + 0x30);
    }
    else {
      _rand();
      fVar4 = (float10)FUN_00986000();
      fVar5 = (float10)FUN_00982c30();
      _rand();
      fVar6 = (float10)FUN_00986000();
      *pfVar1 = (float)fVar6 * (float)fVar5;
      fVar6 = (float10)FUN_00986300();
      pfVar1[1] = (float)fVar6 * (float)fVar5;
      pfVar1[2] = (float)fVar4;
    }
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar3 = _rand();
    iVar2 = ((uint)param_2 & 0xffff) * 4;
    *(float *)(iVar2 + *(int *)(param_1 + 0x54)) =
         *(float *)(in_ECX + 0x24) * (((float)iVar3 + (float)iVar3) / 32767.0 - 1.0) +
         *(float *)(in_ECX + 0x20);
    iVar3 = _rand();
    param_2 = *(float *)(in_ECX + 0x1c) * (((float)iVar3 + (float)iVar3) / 32767.0 - 1.0) +
              *(float *)(in_ECX + 0x18);
    if (*(char *)(in_ECX + 0x35) != '\0') {
      iVar3 = _rand();
      if ((float)iVar3 / 32767.0 <= 0.5) {
        param_2 = -param_2;
      }
    }
    *(float *)(iVar2 + *(int *)(param_1 + 0x60)) = param_2;
  }
  return;
}



void FUN_0074e160(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_00752c40(param_1,param_2);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(in_ECX + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(in_ECX + 0x35);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(in_ECX + 0x24);
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(in_ECX + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(in_ECX + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(in_ECX + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(in_ECX + 0x30);
  return;
}



void thunk_FUN_00752cb0(undefined4 param_1)

{
  FUN_0068f970(param_1);
  FUN_007124a0();
  return;
}



void FUN_0074e390(int param_1)

{
  int iVar1;
  int in_ECX;
  char cStack_5;
  undefined4 uStack_4;
  
  iVar1 = param_1;
  FUN_00752dc0(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x18,4,&param_1,1);
  if (0x14000001 < *(uint *)(iVar1 + 0xd8)) {
    uStack_4 = 4;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x1c,4,&uStack_4,1);
    uStack_4 = 4;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x20,4,&uStack_4,1);
    uStack_4 = 4;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x24,4,&uStack_4,1);
    uStack_4 = 1;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,1,&uStack_4,1);
    *(bool *)(in_ECX + 0x35) = (char)param_1 != '\0';
  }
  param_1 = 1;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&cStack_5,1,&param_1,1);
  *(bool *)(in_ECX + 0x34) = cStack_5 != '\0';
  FUN_00709430(iVar1);
  return;
}



void FUN_0074eaa0(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_00749550();
  iVar1 = *(int *)(*(int *)(in_ECX + 0xb4) + 0x68);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(iVar1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(iVar1 + 0x2c);
  return;
}



void FUN_0074ebe0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00749d70(param_1);
  param_1 = FUN_0070f910(DAT_00b40b1c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_0074ecf0(byte param_1)

{
  int in_ECX;
  
  FUN_00749ca0();
  *(undefined4 *)(in_ECX + 0xc4) = &PTR_FUN_00a85a64;
  FUN_00573880();
  *(undefined4 *)(in_ECX + 0xc4) = &PTR_LAB_00a85a34;
  FUN_00722850();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint FUN_0074ed40(void)

{
  ushort uVar1;
  int in_ECX;
  
  uVar1 = *(ushort *)(in_ECX + 100);
  if (uVar1 == 0) {
    uVar1 = *(ushort *)(in_ECX + 0x48);
    *(ushort *)(in_ECX + 0x66) = uVar1;
    if (uVar1 < *(ushort *)(in_ECX + 8)) {
      *(undefined2 *)(in_ECX + 100) = 1;
      return (uint)uVar1;
    }
  }
  else if ((uint)*(ushort *)(in_ECX + 0x66) + (uint)uVar1 < (uint)*(ushort *)(in_ECX + 8)) {
    *(ushort *)(in_ECX + 100) = uVar1 + 1;
    return (uint)*(ushort *)(in_ECX + 0x66) + (uint)uVar1 & 0xffff;
  }
  return 0xffff;
}



void FUN_0074eda0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  FUN_00752bf0();
  in_ECX[6] = 0;
  *in_ECX = &PTR_FUN_00a8617c;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = DAT_00b25ae0;
  in_ECX[0xd] = DAT_00b25ae4;
  in_ECX[0xe] = DAT_00b25ae8;
  uVar1 = DAT_00b25aec;
  in_ECX[0x10] = 0x3f800000;
  in_ECX[0xf] = uVar1;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  return;
}



void FUN_0074ee00(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_00752c40(param_1,param_2);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(in_ECX + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(in_ECX + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(in_ECX + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(in_ECX + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(in_ECX + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(in_ECX + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(in_ECX + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(in_ECX + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(in_ECX + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(in_ECX + 0x4c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(in_ECX + 0x44);
  return;
}



void FUN_0074ee70(float param_1,ushort param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int *piVar12;
  ushort uVar13;
  int *in_ECX;
  uint uVar14;
  ushort uVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  
  iVar4 = *(int *)(in_ECX[4] + 0xb4);
  iVar5 = *(int *)(iVar4 + 0x1c);
  iVar6 = *(int *)(iVar4 + 0x24);
  iVar7 = *(int *)(iVar4 + 0x44);
  iVar8 = *(int *)(iVar4 + 0x4c);
  uVar15 = 0;
  if (param_2 != 0) {
    do {
      fVar2 = *(float *)(param_3 + (uint)uVar15 * 4);
      iVar11 = _rand();
      fVar9 = ((float)iVar11 / 32767.0 - 0.5) * (float)in_ECX[0x13] + (float)in_ECX[0x12];
      if (fVar2 <= fVar9) {
        uVar3 = *(ushort *)(iVar4 + 100);
        if (uVar3 == 0) {
          uVar13 = *(ushort *)(iVar4 + 0x48);
          *(ushort *)(iVar4 + 0x66) = uVar13;
          if (*(ushort *)(iVar4 + 8) <= uVar13) {
            return;
          }
          *(undefined2 *)(iVar4 + 100) = 1;
        }
        else {
          if ((uint)*(ushort *)(iVar4 + 8) <= (uint)*(ushort *)(iVar4 + 0x66) + (uint)uVar3) {
            return;
          }
          uVar13 = *(ushort *)(iVar4 + 0x66) + uVar3;
          *(ushort *)(iVar4 + 100) = uVar3 + 1;
        }
        if (uVar13 == 0xffff) {
          return;
        }
        uVar14 = (uint)uVar13;
        pfVar1 = (float *)(*(int *)(iVar4 + 0x5c) + uVar14 * 0x1c);
        iVar11 = _rand();
        fVar10 = ((float)iVar11 / 32767.0 - 0.5) * (float)in_ECX[7] + (float)in_ECX[6];
        _rand();
        _rand();
        fVar16 = (float10)FUN_00986300();
        fVar17 = (float10)FUN_00986000();
        fVar18 = (float10)FUN_00986300();
        fVar19 = (float10)FUN_00986000();
        *(undefined2 *)(pfVar1 + 6) = 0;
        *pfVar1 = fVar10 * (float)fVar17 * (float)fVar16;
        pfVar1[1] = (float)fVar18 * (float)fVar16 * fVar10;
        pfVar1[2] = fVar10 * (float)fVar19;
        pfVar1[3] = fVar2;
        pfVar1[4] = fVar9;
        (**(code **)(*in_ECX + 0x60))(iVar5 + uVar14 * 0xc,pfVar1);
        if (iVar6 != 0) {
          piVar12 = (int *)(uVar14 * 0x10 + iVar6);
          *piVar12 = in_ECX[0xc];
          piVar12[1] = in_ECX[0xd];
          piVar12[2] = in_ECX[0xe];
          piVar12[3] = in_ECX[0xf];
        }
        if (iVar7 != 0) {
          iVar11 = _rand();
          *(float *)(iVar7 + uVar14 * 4) =
               (float)in_ECX[0x11] * (((float)iVar11 + (float)iVar11) / 32767.0 - 1.0) +
               (float)in_ECX[0x10];
        }
        if (iVar8 != 0) {
          *(undefined4 *)(iVar8 + uVar14 * 4) = 0x3f800000;
        }
        pfVar1[5] = param_1 - pfVar1[3];
        FUN_00749510(uVar13);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < param_2);
  }
  return;
}



uint FUN_0074f160(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined2 uVar4;
  int in_ECX;
  
  uVar3 = FUN_00752cd0(param_1);
  if ((char)uVar3 != '\0') {
    fVar1 = *(float *)(param_1 + 0x18);
    fVar2 = *(float *)(in_ECX + 0x18);
    uVar4 = (undefined2)(uVar3 >> 0x10);
    uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                           (ushort)(fVar2 == fVar1) << 0xe);
    if (fVar2 == fVar1) {
      fVar1 = *(float *)(param_1 + 0x1c);
      fVar2 = *(float *)(in_ECX + 0x1c);
      uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                             | (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 == fVar1) {
        fVar1 = *(float *)(param_1 + 0x20);
        fVar2 = *(float *)(in_ECX + 0x20);
        uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < fVar1) << 8 |
                               (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                               (ushort)(fVar2 == fVar1) << 0xe);
        if (fVar2 == fVar1) {
          fVar1 = *(float *)(param_1 + 0x24);
          fVar2 = *(float *)(in_ECX + 0x24);
          uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < fVar1) << 8 |
                                 (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                 (ushort)(fVar2 == fVar1) << 0xe);
          if (fVar2 == fVar1) {
            fVar1 = *(float *)(param_1 + 0x28);
            fVar2 = *(float *)(in_ECX + 0x28);
            uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < fVar1) << 8 |
                                   (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                   (ushort)(fVar2 == fVar1) << 0xe);
            if (fVar2 == fVar1) {
              fVar1 = *(float *)(param_1 + 0x2c);
              fVar2 = *(float *)(in_ECX + 0x2c);
              uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < fVar1) << 8 |
                                     (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                     (ushort)(fVar2 == fVar1) << 0xe);
              if (fVar2 == fVar1) {
                uVar3 = FUN_00632310(in_ECX + 0x30);
                if ((char)uVar3 == '\0') {
                  fVar1 = *(float *)(param_1 + 0x40);
                  fVar2 = *(float *)(in_ECX + 0x40);
                  uVar4 = (undefined2)(uVar3 >> 0x10);
                  uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < fVar1) << 8 |
                                         (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                         (ushort)(fVar2 == fVar1) << 0xe);
                  if (fVar2 == fVar1) {
                    fVar1 = *(float *)(param_1 + 0x44);
                    fVar2 = *(float *)(in_ECX + 0x44);
                    uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < fVar1) << 8 |
                                           (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                           (ushort)(fVar2 == fVar1) << 0xe);
                    if (fVar2 == fVar1) {
                      fVar1 = *(float *)(param_1 + 0x48);
                      fVar2 = *(float *)(in_ECX + 0x48);
                      uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < fVar1) << 8 |
                                             (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                             (ushort)(fVar2 == fVar1) << 0xe);
                      if (fVar2 == fVar1) {
                        fVar1 = *(float *)(param_1 + 0x4c);
                        fVar2 = *(float *)(in_ECX + 0x4c);
                        uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < fVar1) << 8 |
                                               (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                               (ushort)(fVar2 == fVar1) << 0xe);
                        if (fVar2 == fVar1) {
                          return CONCAT31((int3)(uVar3 >> 8),1);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar3 & 0xffffff00;
}



void FUN_0074f240(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00752dc0(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x18,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x1c,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x20,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x24,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x28,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x2c,4,&param_1,1);
  FUN_00715420(iVar1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x40,4,&param_1,1);
  if (0xa030001 < *(uint *)(iVar1 + 0xd8)) {
    param_1 = 4;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x44,4,&param_1,1);
  }
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x48,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x4c,4,&param_1,1);
  return;
}



void FUN_0074f3a0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00752e40(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x18,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x1c,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x20,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x24,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x28,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x2c,4,&param_1,1);
  FUN_00709510(iVar1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x40,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x44,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x48,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x4c,4,&param_1,1);
  return;
}



void FUN_0074f4f0(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00752ec0(param_1);
  param_1 = FUN_0070f910(DAT_00b40b50);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("Speed",*(undefined4 *)(in_ECX + 0x18));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("Speed Variation",*(undefined4 *)(in_ECX + 0x1c));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("Declination",*(undefined4 *)(in_ECX + 0x20));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("Declination Variation",*(undefined4 *)(in_ECX + 0x24));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("Planar Angle",*(undefined4 *)(in_ECX + 0x28));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("Planar Angle Variation",*(undefined4 *)(in_ECX + 0x2c));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_007093d0("Initial Color");
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("Initial Radius",*(undefined4 *)(in_ECX + 0x40));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("Radius Variation",*(undefined4 *)(in_ECX + 0x44));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("Life Span",*(undefined4 *)(in_ECX + 0x48));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("Life Span Variation",*(undefined4 *)(in_ECX + 0x4c));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



float10 FUN_0074f7f0(byte param_1)

{
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0xe) == '\x01') && (param_1 == *(byte *)(in_ECX + 0xf))) {
    return (float10)*(float *)(in_ECX + 0x20);
  }
  return (float10)*(float *)(*(int *)(in_ECX + 0x14) + 0x14 + (uint)param_1 * 0x18);
}



void FUN_0074f980(undefined4 param_1)

{
  FUN_0075e460(param_1);
  FUN_00712a20();
  return;
}



void FUN_0074f9a0(uint param_1)

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
      iVar2 = FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 4));
      uVar3 = 0;
      if (in_ECX[2] != 0) {
        do {
          iVar1 = uVar3 * 4;
          uVar3 = uVar3 + 1;
          *(undefined4 *)(iVar2 + -4 + uVar3 * 4) = *(undefined4 *)(*in_ECX + iVar1);
        } while (uVar3 < (uint)in_ECX[2]);
      }
    }
    FUN_00401f20(*in_ECX);
    *in_ECX = iVar2;
    in_ECX[1] = param_1;
  }
  return;
}



void FUN_0074fa10(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (param_3 != 0) {
    if (*(int *)(in_ECX + 0x10) == 0) {
      puVar1 = (undefined4 *)FUN_00401f00(0x18);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        FUN_007005d0();
        *puVar1 = &PTR_FUN_00a7c2ac;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        *(undefined1 *)(puVar1 + 5) = 0;
      }
      FUN_0075fa90(puVar1);
    }
    FUN_006e88c0(param_1,param_3,param_2);
    *(undefined4 *)(in_ECX + 0x14) = 0;
    return;
  }
  if (*(int *)(in_ECX + 0x10) != 0) {
    FUN_006e88c0(0,0,0);
  }
  return;
}



uint FUN_0074fa90(void)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x48);
  if (piVar1 != (int *)0x0) {
    for (puVar3 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[1]) {
      if (puVar3 == &DAT_00b3e7e8) {
        bVar2 = 1;
        goto LAB_0074fab8;
      }
    }
    bVar2 = 0;
LAB_0074fab8:
    if ((-(uint)bVar2 & (uint)piVar1) != 0) {
      return -(uint)bVar2 & (uint)piVar1;
    }
  }
  iVar4 = FUN_00560920(&DAT_00b3ea50,*(undefined4 *)(in_ECX + 0x48));
  if ((iVar4 == 0) || (bVar2 = FUN_006cc550(), bVar2 == 0xff)) {
    return 0;
  }
  if ((*(char *)(iVar4 + 0xe) == '\x01') && (bVar2 == *(byte *)(iVar4 + 0xf))) {
    return *(uint *)(iVar4 + 0x18);
  }
  return *(uint *)(*(int *)(iVar4 + 0x14) + (uint)bVar2 * 0x18);
}



void FUN_0074fc70(void)

{
  float *pfVar1;
  float *pfVar2;
  int in_ECX;
  float unaff_EDI;
  
  if ((*(byte *)(in_ECX + 8) >> 5 & 1) == 0) {
    pfVar1 = (float *)(in_ECX + 0x18);
    pfVar2 = (float *)(in_ECX + 0x14);
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x80))(pfVar2);
    (**(code **)(**(int **)(in_ECX + 0x48) + 0x80))(&stack0xfffffff0,&stack0xfffffff4);
    if ((float)pfVar1 < *pfVar2) {
      *pfVar2 = (float)pfVar1;
    }
    if (*pfVar1 < unaff_EDI) {
      *pfVar1 = unaff_EDI;
      return;
    }
  }
  return;
}



void FUN_0074fd50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  FUN_0075e410(param_1,param_2);
  if (*(int **)(in_ECX + 0x48) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x48) + 0x18))(param_2);
    FUN_0075fa90(uVar1);
  }
  if (((*(byte *)(param_1 + 8) & 6) == 0) && (*(float *)(param_1 + 0x10) == 0.0)) {
    iVar2 = _rand();
    *(float *)(param_1 + 0x10) = ((float)iVar2 / 32767.0) * 100.0;
  }
  return;
}



void FUN_0074fe30(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  LONG LVar4;
  int *in_ECX;
  
  thunk_FUN_00715e70(param_1);
  if (*(uint *)(param_1 + 0xd8) < 0xa010068) {
    puVar1 = (undefined4 *)FUN_007124a0();
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
      iVar2 = FUN_00401f00(0x18);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006d2990(0);
      }
      FUN_006de010(puVar1[3],puVar1[2],puVar1[4]);
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *(undefined1 *)(puVar1 + 5) = 0;
      (**(code **)(*in_ECX + 0x84))(uVar3,0);
      iVar2 = FUN_00401f00(0x18);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006e7f50(0);
      }
      FUN_0074fa10(puVar1[7],puVar1[8],puVar1[6]);
      puVar1[6] = 0;
      puVar1[7] = 0;
      *(undefined1 *)(puVar1 + 9) = 0;
      (**(code **)(*in_ECX + 0x84))(uVar3,1);
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if (LVar4 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    return;
  }
  if (((*(byte *)(in_ECX + 2) & 6) == 0) && ((float)in_ECX[4] == 0.0)) {
    iVar2 = _rand();
    in_ECX[4] = (int)(((float)iVar2 / 32767.0) * 100.0);
  }
  uVar3 = FUN_007124a0();
  FUN_0075fa90(uVar3);
  return;
}



void FUN_0074ffe0(byte param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x58));
  puVar1 = *(undefined4 **)(in_ECX + 0x48);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_0075e570();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}


