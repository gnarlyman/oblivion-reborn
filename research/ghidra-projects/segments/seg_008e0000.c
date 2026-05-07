
void FUN_008e00f0(int *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *param_1;
  if (*(char *)(iVar3 + 4) == '\x02') {
    cVar1 = *(char *)(iVar3 + 5);
    iVar4 = *(int *)(cVar1 + 0x10 + iVar3);
    iVar5 = param_1[1];
    cVar2 = *(char *)(iVar5 + 5);
    FUN_008df540();
    (**(code **)(*(int *)(iVar4 + cVar1 + iVar3) + 0x18))(cVar2 + iVar5);
    FUN_008df540();
  }
  iVar3 = param_1[1];
  if (*(char *)(iVar3 + 4) == '\x02') {
    iVar4 = *param_1;
    cVar1 = *(char *)(iVar4 + 5);
    cVar2 = *(char *)(iVar3 + 5);
    iVar5 = *(int *)(cVar2 + 0x10 + iVar3);
    FUN_008df540();
    (**(code **)(*(int *)(iVar5 + cVar2 + iVar3) + 0x18))(cVar1 + iVar4);
    FUN_008df540();
  }
  return;
}



void FUN_008e0170(int *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *param_1;
  if (*(char *)(iVar3 + 4) == '\x02') {
    cVar1 = *(char *)(iVar3 + 5);
    iVar4 = *(int *)(cVar1 + 0x10 + iVar3);
    iVar5 = param_1[1];
    cVar2 = *(char *)(iVar5 + 5);
    FUN_008df540();
    (**(code **)(*(int *)(iVar4 + cVar1 + iVar3) + 0x20))(cVar2 + iVar5);
    FUN_008df540();
  }
  iVar3 = param_1[1];
  if (*(char *)(iVar3 + 4) == '\x02') {
    iVar4 = *param_1;
    cVar1 = *(char *)(iVar4 + 5);
    cVar2 = *(char *)(iVar3 + 5);
    iVar5 = *(int *)(cVar2 + 0x10 + iVar3);
    FUN_008df540();
    (**(code **)(*(int *)(iVar5 + cVar2 + iVar3) + 0x20))(cVar1 + iVar4);
    FUN_008df540();
  }
  return;
}



void FUN_008e01f0(void)

{
  LPCRITICAL_SECTION in_ECX;
  int iVar1;
  LPCRITICAL_SECTION p_Var2;
  
  FUN_008f5890();
  iVar1 = 2;
  p_Var2 = in_ECX + 5;
  do {
    if (p_Var2[-1].LockCount != 0) {
      (**(code **)(*DAT_00ba7d98 + 0x14))(p_Var2[-1].DebugInfo,p_Var2[-1].LockCount * 0xc,0x14);
    }
    iVar1 = iVar1 + -1;
    p_Var2 = (LPCRITICAL_SECTION)&p_Var2[-1].LockCount;
  } while (iVar1 != 0);
  DeleteCriticalSection(in_ECX);
  return;
}



void FUN_008e0240(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9a5a8;
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x70));
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x60));
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x50));
  FUN_008e01f0();
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1e));
  if (-1 < (int)in_ECX[0x1d]) {
    FUN_008a75d0(in_ECX[0x1b],in_ECX[0x1d] << 3,0x14);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x15));
  if (-1 < (int)in_ECX[0x14]) {
    FUN_008a75d0(in_ECX[0x12],in_ECX[0x14] << 3,0x14);
  }
  in_ECX[0xe] = &PTR_LAB_00a45e5c;
  in_ECX[0xb] = &PTR_LAB_00a45e5c;
  FUN_008d3390();
  return;
}



void FUN_008e0300(int param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  FUN_008d3330(0);
  *in_ECX = &PTR_FUN_00a9a5a8;
  in_ECX[0xd] = 0;
  in_ECX[0xb] = &PTR_LAB_00a9a588;
  *(undefined2 *)((int)in_ECX + 0x32) = 1;
  puVar1 = in_ECX + 0xe;
  *(undefined2 *)((int)in_ECX + 0x3e) = 1;
  in_ECX[0x10] = 0;
  *puVar1 = &PTR_LAB_00a9a598;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0x80000000;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(in_ECX + 0x15),4000);
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0x80000000;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(in_ECX + 0x1e),4000);
  FUN_00926390();
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(in_ECX + 0x50),4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(in_ECX + 0x60),100000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(in_ECX + 0x70),4000);
  in_ECX[10] = param_1;
  in_ECX[0x24] = 0;
  *(undefined1 *)(in_ECX + 0x11) = 0;
  in_ECX[0xd] = in_ECX;
  in_ECX[0x10] = in_ECX + 0x70;
  *(undefined4 **)(*(int *)(param_1 + 0x68) + 0x24) = in_ECX + 0xb;
  *(undefined4 **)(*(int *)(param_1 + 0x68) + 0x44) = puVar1;
  *(undefined4 **)(*(int *)(param_1 + 0x68) + 0x28) = puVar1;
  *(undefined4 **)(*(int *)(param_1 + 0x68) + 0x48) = puVar1;
  return;
}



void FUN_008e03f0(byte param_1)

{
  FUN_008e0240();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



longlong FUN_008e0500(int param_1,float param_2,float param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  undefined4 extraout_EDX;
  uint uVar9;
  int unaff_FS_OFFSET;
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
  
  iVar5 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar8 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar8 + 0x1a4);
    *puVar2 = "TtSimulate";
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar8 + 0x1a4) = puVar2 + 3;
  }
  fVar4 = param_3 + param_3;
  *(float *)(in_ECX + 8) = param_3;
  *(float *)(param_1 + 0x10) = param_2 + *(float *)(param_1 + 0x10);
  while( true ) {
    while( true ) {
      if ((ABS(*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x18)) < fVar4 * 0.01) &&
         (0.1 < param_2 / fVar4)) {
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x18);
      }
      local_2c = *(float *)(param_1 + 0x18);
      local_30 = *(float *)(param_1 + 0x14);
      local_28 = local_2c - local_30;
      if (local_28 == 0.0) {
        local_24 = 0.0;
      }
      else {
        local_24 = 1.0 / local_28;
      }
      if (*(int *)(in_ECX + 0xc) == 0) break;
      if (*(float *)(param_1 + 0x10) <=
          (*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x14)) * 0.5) goto LAB_008e083c;
      local_2c = *(float *)(param_1 + 0x18);
      local_30 = *(float *)(param_1 + 0x14);
      local_28 = local_2c - local_30;
      if (local_28 == 0.0) {
        local_4 = 0.0;
      }
      else {
        local_4 = 1.0 / local_28;
      }
      local_24 = local_4;
      local_10 = local_30;
      local_c = local_2c;
      local_8 = local_28;
      FUN_008d7920(param_1,&local_30);
      if (*(int *)(DAT_00ba7d98 + 4) == 1) {
        iVar1 = *(int *)(iVar1 + iVar5 * 4);
        uVar7 = extraout_EDX;
        if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
          puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
          *puVar2 = &DAT_00a9610c;
          uVar3 = rdtsc();
          uVar7 = (undefined4)uVar3;
          puVar2[1] = uVar7;
          *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
        }
        return CONCAT44(uVar7,2);
      }
      *(undefined4 *)(in_ECX + 0xc) = 0;
      *(float *)(param_1 + 0xc) = (*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x14)) * 0.5;
    }
    if (*(float *)(param_1 + 0x10) <= *(float *)(param_1 + 0x18)) break;
    iVar6 = FUN_008992b0();
    iVar8 = *(int *)(*(int *)(iVar1 + iVar5 * 4) + 0x19c);
    if (iVar8 == 0) {
      iVar8 = DAT_00ba7d9c;
    }
    if ((*(int *)(iVar8 + 0x2c) - *(int *)(iVar8 + 0x20)) + -0x10 < iVar6) {
      iVar8 = *(int *)(DAT_00ba7d98 + 0x28) + *(int *)(DAT_00ba7d98 + 0x14);
      if (iVar8 < *(int *)(DAT_00ba7d98 + 8)) {
        iVar8 = *(int *)(DAT_00ba7d98 + 8) - iVar8;
      }
      else {
        iVar8 = 0;
      }
      if (iVar8 < iVar6) {
        *(undefined4 *)(DAT_00ba7d98 + 4) = 1;
        iVar1 = *(int *)(iVar1 + iVar5 * 4);
        uVar9 = *(uint *)(iVar1 + 0x1a4);
        if (uVar9 < *(uint *)(iVar1 + 0x1a8)) {
          puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
          *puVar2 = &DAT_00a9610c;
          uVar3 = rdtsc();
          uVar9 = (uint)((ulonglong)uVar3 >> 0x20);
          puVar2[1] = (int)uVar3;
          *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
        }
        return CONCAT44(uVar9,1);
      }
    }
    local_2c = fVar4 + *(float *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
    *(float *)(param_1 + 0x18) = local_2c;
    local_30 = *(float *)(param_1 + 0x14);
    local_28 = local_2c - local_30;
    if (local_28 == 0.0) {
      local_14 = 0.0;
    }
    else {
      local_14 = 1.0 / local_28;
    }
    local_24 = local_14;
    local_20 = local_30;
    local_1c = local_2c;
    local_18 = local_28;
    (**(code **)(**(int **)(param_1 + 0x5c) + 0xc))(param_1,&local_30);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14);
    FUN_008d6e40(param_1,&local_30);
    *(undefined4 *)(in_ECX + 0xc) = 1;
  }
LAB_008e083c:
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  iVar8 = *(int *)(iVar1 + iVar5 * 4);
  if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar8 + 0x1a4);
    *puVar2 = "TtPostSimulateCb";
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar8 + 0x1a4) = puVar2 + 3;
  }
  local_2c = *(float *)(param_1 + 0x10);
  local_30 = *(float *)(param_1 + 0x10) - param_2;
  local_28 = local_2c - local_30;
  if (local_28 == 0.0) {
    local_24 = 0.0;
  }
  else {
    local_24 = 1.0 / local_28;
  }
  FUN_008dcd60(param_1,&local_30);
  iVar8 = *(int *)(iVar1 + iVar5 * 4);
  uVar9 = *(uint *)(iVar8 + 0x1a8);
  if (*(uint *)(iVar8 + 0x1a4) < uVar9) {
    puVar2 = *(undefined4 **)(iVar8 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar3 = rdtsc();
    uVar9 = (uint)uVar3;
    puVar2[1] = uVar9;
    *(undefined4 **)(iVar8 + 0x1a4) = puVar2 + 3;
  }
  iVar1 = *(int *)(iVar1 + iVar5 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar3 = rdtsc();
    uVar9 = (uint)uVar3;
    puVar2[1] = uVar9;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return (ulonglong)uVar9 << 0x20;
}



void FUN_008e0950(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00a9a5d8;
  in_ECX[3] = 0;
  return;
}



undefined ** FUN_008e0970(void)

{
  return &PTR_PTR_00b2fc48;
}



void FUN_008e0980(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00a9a638;
  in_ECX[2] = param_1;
  return;
}



void FUN_008e0a30(undefined8 *param_1,int param_2,short *param_3)

{
  undefined8 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined8 *puVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  
  sVar2 = param_3[4];
  sVar3 = *param_3;
  sVar4 = param_3[1];
  sVar5 = param_3[5];
  sVar6 = param_3[2];
  sVar7 = param_3[3];
  puVar8 = param_1 + param_2 * 2;
  for (; param_1 < puVar8; param_1 = param_1 + 2) {
    sVar9 = (short)param_1[1];
    sVar10 = (short)((ulonglong)param_1[1] >> 0x10);
    uVar1 = *param_1;
    sVar11 = (short)uVar1;
    sVar12 = (short)((ulonglong)uVar1 >> 0x10);
    sVar13 = (short)((ulonglong)uVar1 >> 0x20);
    sVar14 = (short)((ulonglong)uVar1 >> 0x30);
    *param_1 = CONCAT26(sVar14 - (-(ushort)((short)(sVar4 + -1) < sVar14) -
                                 (ushort)((short)(sVar7 + -2) < sVar14)),
                        CONCAT24(sVar13 - (-(ushort)((short)(sVar3 + -1) < sVar13) -
                                          (ushort)((short)(sVar6 + -2) < sVar13)),
                                 CONCAT22(sVar12 - (-(ushort)((short)(sVar4 + -1) < sVar12) -
                                                   (ushort)((short)(sVar7 + -2) < sVar12)),
                                          sVar11 - (-(ushort)((short)(sVar3 + -1) < sVar11) -
                                                   (ushort)((short)(sVar6 + -2) < sVar11)))));
    uVar1 = param_1[1];
    param_1[1] = CONCAT26((short)((ulonglong)uVar1 >> 0x30),
                          CONCAT24((short)((ulonglong)uVar1 >> 0x20),
                                   CONCAT22((short)((ulonglong)uVar1 >> 0x10) -
                                            (-(ushort)((short)(sVar2 + -1) < sVar10) -
                                            (ushort)((short)(sVar5 + -2) < sVar10)),
                                            (short)uVar1 -
                                            (-(ushort)((short)(sVar2 + -1) < sVar9) -
                                            (ushort)((short)(sVar5 + -2) < sVar9)))));
  }
  return;
}



void FUN_008e0b30(undefined8 *param_1,int param_2,short *param_3)

{
  undefined8 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  
  sVar2 = param_3[4];
  sVar3 = *param_3;
  sVar4 = param_3[1];
  uVar8 = *(undefined4 *)param_3;
  sVar5 = param_3[5];
  sVar6 = param_3[2];
  sVar7 = param_3[3];
  uVar9 = *(undefined4 *)(param_3 + 2);
  puVar10 = param_1 + param_2 * 2;
  for (; param_1 < puVar10; param_1 = param_1 + 2) {
    sVar11 = (short)param_1[1];
    sVar12 = (short)((ulonglong)param_1[1] >> 0x10);
    uVar1 = *param_1;
    sVar13 = (short)uVar1;
    sVar14 = (short)((ulonglong)uVar1 >> 0x10);
    sVar15 = (short)((ulonglong)uVar1 >> 0x20);
    sVar16 = (short)((ulonglong)uVar1 >> 0x30);
    *param_1 = CONCAT26(sVar16 + (-(ushort)(sVar4 < sVar16) - (ushort)(sVar7 < sVar16)),
                        CONCAT24(sVar15 + (-(ushort)(sVar3 < sVar15) - (ushort)(sVar6 < sVar15)),
                                 CONCAT22(sVar14 + (-(ushort)((short)((uint)uVar8 >> 0x10) < sVar14)
                                                   - (ushort)((short)((uint)uVar9 >> 0x10) < sVar14)
                                                   ),
                                          sVar13 + (-(ushort)((short)uVar8 < sVar13) -
                                                   (ushort)((short)uVar9 < sVar13)))));
    uVar1 = param_1[1];
    param_1[1] = CONCAT26((short)((ulonglong)uVar1 >> 0x30),
                          CONCAT24((short)((ulonglong)uVar1 >> 0x20),
                                   CONCAT22((short)((ulonglong)uVar1 >> 0x10) +
                                            (-(ushort)(sVar2 < sVar12) - (ushort)(sVar5 < sVar12)),
                                            (short)uVar1 +
                                            (-(ushort)(sVar2 < sVar11) - (ushort)(sVar5 < sVar11))))
                         );
  }
  return;
}



void FUN_008e0c30(ushort *param_1,ushort *param_2,ushort param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  
  uVar2 = (int)param_2 - (int)param_1;
  while (0x40 < (int)(uVar2 & 0xfffffffc)) {
    puVar3 = param_1 + ((int)uVar2 >> 3) * 2;
    if (param_1[((int)uVar2 >> 3) * 2] < param_3) {
      param_1 = puVar3;
      puVar3 = param_2;
    }
    param_2 = puVar3;
    uVar2 = (int)puVar3 - (int)param_1;
  }
  uVar1 = *param_1;
  while (uVar1 < param_3) {
    param_1 = param_1 + 2;
    uVar1 = *param_1;
  }
  return;
}



void FUN_008e0c90(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  byte *pbVar7;
  int *in_ECX;
  ushort *puVar8;
  ushort *puVar9;
  
  iVar6 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_5 + iVar6 * 4) = *(undefined4 *)(*in_ECX + iVar6 * 4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2);
  }
  iVar6 = *in_ECX;
  puVar8 = (ushort *)(param_5 + 4);
  puVar3 = (ushort *)(param_5 + -4 + param_2 * 4);
  puVar9 = (ushort *)(iVar6 + param_2 * 4);
  pbVar7 = (byte *)(iVar6 + 4);
  puVar2 = (ushort *)(iVar6 + (param_2 + param_3) * 4);
  uVar5 = *puVar8;
  while (uVar5 < *puVar9) {
    puVar8 = puVar8 + 2;
    pbVar7 = pbVar7 + 4;
    uVar5 = *puVar8;
  }
  if (puVar8 < puVar3) {
    for (; puVar9 < puVar2; puVar9 = puVar9 + 2) {
      while (*puVar8 < *puVar9) {
        *(undefined4 *)pbVar7 = *(undefined4 *)puVar8;
        bVar4 = *pbVar7;
        iVar6 = (int)pbVar7 - *in_ECX;
        puVar8 = puVar8 + 2;
        puVar1 = (ushort *)(pbVar7 + 2);
        pbVar7 = pbVar7 + 4;
        *(short *)((uint)*puVar1 * 0x10 + *(int *)(&DAT_00b2fc84 + ((bVar4 & 1) + param_4 * 2) * 4)
                  + param_1) = (short)(iVar6 >> 2);
        if (puVar3 <= puVar8) goto joined_r0x008e0d51;
      }
      *(undefined4 *)pbVar7 = *(undefined4 *)puVar9;
      *(short *)((uint)*(ushort *)(pbVar7 + 2) * 0x10 +
                 *(int *)(&DAT_00b2fc84 + ((*pbVar7 & 1) + param_4 * 2) * 4) + param_1) =
           (short)((int)pbVar7 - *in_ECX >> 2);
      pbVar7 = pbVar7 + 4;
    }
  }
  else {
joined_r0x008e0d51:
    for (; puVar9 < puVar2; puVar9 = puVar9 + 2) {
      *(undefined4 *)pbVar7 = *(undefined4 *)puVar9;
      bVar4 = *pbVar7;
      iVar6 = (int)pbVar7 - *in_ECX;
      puVar1 = (ushort *)(pbVar7 + 2);
      pbVar7 = pbVar7 + 4;
      *(short *)((uint)*puVar1 * 0x10 + *(int *)(&DAT_00b2fc84 + ((bVar4 & 1) + param_4 * 2) * 4) +
                param_1) = (short)(iVar6 >> 2);
    }
  }
  if (puVar8 <= puVar3) {
    do {
      *(undefined4 *)pbVar7 = *(undefined4 *)puVar8;
      puVar8 = puVar8 + 2;
      *(short *)((uint)*(ushort *)(pbVar7 + 2) * 0x10 +
                 *(int *)(&DAT_00b2fc84 + ((*pbVar7 & 1) + param_4 * 2) * 4) + param_1) =
           (short)((int)pbVar7 - *in_ECX >> 2);
      pbVar7 = pbVar7 + 4;
    } while (puVar8 <= puVar3);
  }
  return;
}



void FUN_008e0e30(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)(*in_ECX + param_1 * 4);
  puVar4 = (undefined4 *)(*in_ECX + -4 + param_2 * 4);
  puVar1 = puVar3;
  if (puVar3 < puVar4) {
    iVar2 = ((uint)((int)puVar4 + (-1 - (int)puVar3)) >> 2) + 1;
    puVar1 = puVar3 + iVar2;
    puVar4 = puVar3;
    for (; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar4 = puVar4 + 1;
    }
  }
  puVar3 = (undefined4 *)(*in_ECX + (in_ECX[1] + -2) * 4);
  in_ECX[1] = in_ECX[1] + -2;
  if (puVar1 < puVar3) {
    iVar2 = ((uint)((int)puVar3 + (-1 - (int)puVar1)) >> 2) + 1;
    puVar3 = puVar1 + 2;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = puVar1 + 1;
    }
  }
  return;
}



void FUN_008e0e90(int param_1,int param_2,int param_3,ushort param_4,undefined4 *param_5)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int in_ECX;
  undefined4 *puVar9;
  int iVar10;
  ushort *local_24;
  int local_20;
  
  uVar2 = *(ushort *)(param_3 + 10);
  uVar3 = *(ushort *)(param_3 + 8);
  if (-1 < param_1 >> 7) {
    iVar6 = (param_1 >> 7) + 1;
    puVar9 = param_5;
    do {
      iVar6 = iVar6 + -1;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9 = puVar9 + 4;
    } while (iVar6 != 0);
  }
  pbVar7 = (byte *)(*(int *)(in_ECX + 0x4c) + 4);
  if ((*(int *)(in_ECX + 0x70) != 0) &&
     (param_2 = param_2 >> (0x10U - (char)*(undefined4 *)(in_ECX + 0x74) & 0x1f), 0 < param_2)) {
    param_2 = param_2 * 0x10;
    uVar4 = *(ushort *)(param_2 + -0x10 + *(int *)(in_ECX + 0x78));
    puVar1 = (ushort *)(param_2 + -0x10 + *(int *)(in_ECX + 0x78));
    param_5[(int)(uint)uVar4 >> 5] = param_5[(int)(uint)uVar4 >> 5] ^ 1 << ((byte)uVar4 & 0x1f);
    local_20 = *(int *)(puVar1 + 4);
    local_24 = *(ushort **)(puVar1 + 2);
    if (-1 < local_20 + -1) {
      do {
        uVar4 = *local_24;
        if (uVar4 != param_4) {
          param_5[(int)(uint)uVar4 >> 5] =
               param_5[(int)(uint)uVar4 >> 5] ^ 1 << ((byte)uVar4 & 0x1f);
        }
        local_24 = local_24 + 1;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
    iVar6 = *(int *)(in_ECX + 0x4c);
    iVar10 = (uint)*puVar1 * 0x10 + *(int *)(in_ECX + 0x40);
    uVar4 = *(ushort *)(iVar10 + 10);
    for (pbVar7 = (byte *)(iVar6 + 4 +
                          (uint)*(ushort *)((uint)*puVar1 * 0x10 + 8 + *(int *)(in_ECX + 0x40)) * 4)
        ; pbVar7 < (byte *)(iVar6 + (uint)uVar4 * 4); pbVar7 = pbVar7 + 4) {
      if ((*pbVar7 & 1) == 0) {
        iVar8 = (int)(uint)*(ushort *)(pbVar7 + 2) >> 5;
        param_5[iVar8] = param_5[iVar8] & ~(1 << ((byte)*(ushort *)(pbVar7 + 2) & 0x1f));
      }
    }
    pbVar7 = (byte *)(*(int *)(in_ECX + 0x4c) + 4 + (uint)*(ushort *)(iVar10 + 8) * 4);
  }
  iVar6 = *(int *)(in_ECX + 0x4c);
  for (; pbVar7 < (byte *)(iVar6 + (uint)uVar3 * 4); pbVar7 = pbVar7 + 4) {
    iVar10 = (int)(uint)*(ushort *)(pbVar7 + 2) >> 5;
    param_5[iVar10] = param_5[iVar10] ^ 1 << ((byte)*(ushort *)(pbVar7 + 2) & 0x1f);
  }
  iVar6 = *(int *)(in_ECX + 0x4c);
  while (pbVar5 = pbVar7, pbVar7 = pbVar5 + 4, pbVar7 < (byte *)(iVar6 + (uint)uVar2 * 4)) {
    if ((*pbVar7 & 1) == 0) {
      uVar3 = *(ushort *)(pbVar5 + 6);
      param_5[(int)(uint)uVar3 >> 5] = param_5[(int)(uint)uVar3 >> 5] ^ 1 << ((byte)uVar3 & 0x1f);
    }
  }
  return;
}



void FUN_008e1060(ushort *param_1,float *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int in_ECX;
  
  fVar6 = 1.0 / *(float *)(in_ECX + 0x30);
  uVar1 = *(ushort *)(*(int *)(in_ECX + 0x58) + (uint)*param_1 * 4);
  fVar9 = *(float *)(in_ECX + 0x10);
  fVar10 = *(float *)(in_ECX + 0x14);
  fVar11 = *(float *)(in_ECX + 0x18);
  fVar12 = *(float *)(in_ECX + 0x1c);
  uVar2 = *(ushort *)(*(int *)(in_ECX + 100) + (uint)param_1[1] * 4);
  fVar7 = 1.0 / *(float *)(in_ECX + 0x34);
  fVar8 = 1.0 / *(float *)(in_ECX + 0x38);
  uVar3 = *(ushort *)(*(int *)(in_ECX + 0x4c) + (uint)param_1[5] * 4);
  uVar4 = *(ushort *)(*(int *)(in_ECX + 0x58) + (uint)param_1[2] * 4);
  uVar5 = *(ushort *)(*(int *)(in_ECX + 100) + (uint)param_1[3] * 4);
  *param_2 = (float)*(ushort *)(*(int *)(in_ECX + 0x4c) + (uint)param_1[4] * 4) * fVar6 - fVar9;
  param_2[1] = (float)uVar1 * fVar7 - fVar10;
  param_2[2] = (float)uVar2 * fVar8 - fVar11;
  param_2[3] = 0.0 - fVar12;
  param_2[4] = (float)uVar3 * fVar6 - fVar9;
  param_2[5] = (float)uVar4 * fVar7 - fVar10;
  param_2[6] = (float)uVar5 * fVar8 - fVar11;
  param_2[7] = 0.0 - fVar12;
  return;
}



void FUN_008e1160(uint *param_1,float *param_2,undefined4 param_3)

{
  int *in_ECX;
  uint local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20 [7];
  
  local_30 = *param_1 ^ 0x80000000;
  fStack_2c = -(float)param_1[1];
  fStack_28 = -(float)param_1[2];
  fStack_24 = -(float)param_1[3];
  (**(code **)(*in_ECX + 0x30))(&local_30,local_20,param_3);
  in_ECX[4] = (int)((float)in_ECX[4] + fStack_2c);
  in_ECX[5] = (int)((float)in_ECX[5] + fStack_28);
  in_ECX[6] = (int)((float)in_ECX[6] + fStack_24);
  in_ECX[7] = (int)((float)in_ECX[7] + local_20[0]);
  in_ECX[8] = (int)((float)in_ECX[4] + 1.0 / (float)in_ECX[0xc]);
  in_ECX[9] = (int)((float)in_ECX[5] + 1.0 / (float)in_ECX[0xd]);
  in_ECX[10] = (int)((float)in_ECX[6] + 1.0 / (float)in_ECX[0xe]);
  in_ECX[0xb] = (int)((float)in_ECX[7] + 0.0);
  *param_2 = -fStack_2c;
  param_2[1] = -fStack_28;
  param_2[2] = -fStack_24;
  param_2[3] = -local_20[0];
  return;
}



void FUN_008e1200(int param_1,int param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  
  do {
    uVar2 = *(undefined4 *)(param_1 + (param_2 + param_3 >> 1) * 4);
    iVar4 = param_3;
    iVar6 = param_2;
    do {
      uVar5 = (ushort)uVar2;
      uVar1 = *(ushort *)(param_1 + iVar6 * 4);
      while (uVar1 < uVar5) {
        iVar6 = iVar6 + 1;
        uVar1 = *(ushort *)(param_1 + iVar6 * 4);
      }
      uVar1 = *(ushort *)(param_1 + iVar4 * 4);
      while (uVar5 < uVar1) {
        iVar4 = iVar4 + -1;
        uVar1 = *(ushort *)(param_1 + iVar4 * 4);
      }
      if (iVar4 < iVar6) break;
      if (iVar4 != iVar6) {
        uVar3 = *(undefined4 *)(param_1 + iVar4 * 4);
        *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + iVar6 * 4);
        *(undefined4 *)(param_1 + iVar6 * 4) = uVar3;
      }
      iVar4 = iVar4 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar6 <= iVar4);
    if (param_2 < iVar4) {
      FUN_008e1200(param_1,param_2,iVar4,param_4);
    }
    param_2 = iVar6;
    if (param_3 <= iVar6) {
      return;
    }
  } while( true );
}



void FUN_008e1280(undefined2 param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  int in_EDX;
  
  if ((*(uint *)(param_2 + 0xc) & 1) == 0) {
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
      FUN_008a6ee0(param_3,8);
    }
    puVar1 = (undefined4 *)(*param_3 + param_3[1] * 8);
    param_3[1] = param_3[1] + 1;
    *puVar1 = *(undefined4 *)(in_EDX + 0xc);
    puVar1[1] = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  piVar2 = (int *)((*(uint *)(param_2 + 0xc) & 0xfffffffe) + 4 + in_ECX);
  if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
    FUN_008a6ee0(piVar2,2);
  }
  *(undefined2 *)(*piVar2 + piVar2[1] * 2) = param_1;
  piVar2[1] = piVar2[1] + 1;
  return;
}



void FUN_008e1310(short param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int in_EDX;
  int iVar5;
  short *psVar6;
  
  if ((*(uint *)(param_2 + 0xc) & 1) == 0) {
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
      FUN_008a6ee0(param_3,8);
    }
    puVar1 = (undefined4 *)(*param_3 + param_3[1] * 8);
    param_3[1] = param_3[1] + 1;
    *puVar1 = *(undefined4 *)(in_EDX + 0xc);
    puVar1[1] = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  uVar2 = *(uint *)(param_2 + 0xc) & 0xfffffffe;
  iVar5 = *(int *)(uVar2 + 8 + in_ECX);
  iVar3 = uVar2 + in_ECX;
  iVar4 = 0;
  if (0 < iVar5) {
    psVar6 = *(short **)(iVar3 + 4);
    do {
      if (*psVar6 == param_1) goto LAB_008e1381;
      iVar4 = iVar4 + 1;
      psVar6 = psVar6 + 1;
    } while (iVar4 < iVar5);
  }
  iVar4 = -1;
LAB_008e1381:
  iVar5 = *(int *)(iVar3 + 8) + -1;
  *(int *)(iVar3 + 8) = iVar5;
  *(undefined2 *)(*(int *)(iVar3 + 4) + iVar4 * 2) =
       *(undefined2 *)(*(int *)(iVar3 + 4) + iVar5 * 2);
  return;
}



void FUN_008e13a0(int param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 *in_ECX;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  
  pbVar5 = (byte *)*in_ECX;
  pbVar1 = pbVar5 + in_ECX[1] * 4;
  iVar6 = 0;
  pbVar4 = pbVar5;
  for (; pbVar5 < pbVar1; pbVar5 = pbVar5 + 4) {
    iVar3 = *(int *)(*param_3 + (uint)*(ushort *)(pbVar5 + 2) * 4);
    if (-1 < iVar3) {
      *(undefined4 *)pbVar4 = *(undefined4 *)pbVar5;
      bVar2 = *pbVar4;
      *(short *)(pbVar4 + 2) = (short)iVar3;
      pbVar4 = pbVar4 + 4;
      *(short *)(iVar3 * 0x10 + *(int *)(&DAT_00b2fc84 + ((bVar2 & 1) + param_2 * 2) * 4) + param_1)
           = (short)iVar6;
      iVar6 = iVar6 + 1;
    }
  }
  if ((int)(in_ECX[2] & 0x3fffffff) < iVar6) {
    FUN_008a6e40();
  }
  in_ECX[1] = iVar6;
  return;
}



void FUN_008e1440(undefined4 param_1,ushort param_2,ushort param_3,ushort param_4,short *param_5,
                 short *param_6)

{
  ushort uVar1;
  ushort *puVar2;
  int *in_ECX;
  int iVar3;
  
  iVar3 = in_ECX[1] + 2;
  if ((int)(in_ECX[2] & 0x3fffffffU) < iVar3) {
    FUN_008a6e40();
  }
  puVar2 = (ushort *)(*in_ECX + -0xc + iVar3 * 4);
  in_ECX[1] = iVar3;
  uVar1 = *puVar2;
  while (param_4 <= uVar1) {
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)puVar2;
    puVar2 = puVar2 + -2;
    uVar1 = *puVar2;
  }
  puVar2[4] = param_4;
  puVar2[5] = param_2;
  *param_6 = (short)((int)puVar2 - *in_ECX >> 2) + 2;
  uVar1 = *puVar2;
  while (param_3 < uVar1) {
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)puVar2;
    puVar2 = puVar2 + -2;
    uVar1 = *puVar2;
  }
  puVar2[3] = param_2;
  puVar2[2] = param_3;
  *param_5 = (short)((int)puVar2 - *in_ECX >> 2) + 1;
  return;
}



void FUN_008e14e0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int in_ECX;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(in_ECX + 0x44);
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  piVar9 = *(int **)(iVar2 + 0x19c);
  puVar6 = (uint *)piVar9[8];
  uVar5 = (iVar1 >> 5) * 4 + 0x30U & 0xfffffff0;
  uVar8 = (int)puVar6 + uVar5;
  if ((uint)piVar9[0xb] < uVar8) {
    puVar6 = (uint *)(**(code **)(*piVar9 + 0xc))(uVar5);
  }
  else {
    piVar9[8] = uVar8;
  }
  piVar10 = (int *)(*param_1 * 0x10 + *(int *)(in_ECX + 0x40));
  FUN_008e0e90(iVar1,*(undefined2 *)(*(int *)(in_ECX + 0x4c) + (uint)*(ushort *)(piVar10 + 2) * 4),
               piVar10,*param_1,puVar6);
  piVar9 = *(int **)(in_ECX + 0x40);
  iVar1 = *(int *)(in_ECX + 0x44);
  for (puVar7 = puVar6; puVar7 < puVar6 + (iVar1 >> 5) + 1; puVar7 = puVar7 + 1) {
    uVar8 = *puVar7;
    piVar11 = piVar9;
    while (uVar8 != 0) {
      if ((char)uVar8 == '\0') {
        piVar11 = piVar11 + 0x20;
        uVar8 = uVar8 >> 8;
      }
      else {
        if ((((uVar8 & 1) != 0) &&
            (((piVar10[1] - *piVar11 | piVar11[1] - *piVar10) & 0x80008000U) == 0)) &&
           (uVar5 = piVar11[3], (uVar5 & 1) == 0)) {
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
            FUN_008a6ee0(param_2,8);
          }
          iVar3 = param_2[1];
          iVar4 = *param_2;
          *(int **)(iVar4 + iVar3 * 8) = param_1;
          *(uint *)(iVar4 + 4 + iVar3 * 8) = uVar5;
          param_2[1] = param_2[1] + 1;
        }
        piVar11 = piVar11 + 4;
        uVar8 = uVar8 >> 1;
      }
    }
    piVar9 = piVar9 + 0x80;
  }
  piVar9 = *(int **)(iVar2 + 0x19c);
  piVar9[8] = (int)puVar6;
  if (puVar6 == (uint *)piVar9[10]) {
    (**(code **)(*piVar9 + 0x10))(puVar6);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e1660(undefined4 *param_1,float *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  uint *puVar11;
  int in_ECX;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  int unaff_FS_OFFSET;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined2 local_54;
  
  auVar15._0_4_ = (*param_2 + *(float *)(in_ECX + 0x10)) * *(float *)(in_ECX + 0x30);
  auVar15._4_4_ = (param_2[1] + *(float *)(in_ECX + 0x14)) * *(float *)(in_ECX + 0x34);
  auVar15._8_4_ = (param_2[2] + *(float *)(in_ECX + 0x18)) * *(float *)(in_ECX + 0x38);
  auVar15._12_4_ = (param_2[3] + *(float *)(in_ECX + 0x1c)) * *(float *)(in_ECX + 0x3c);
  auVar15 = minps(auVar15,_DAT_00b2fc70);
  auVar15 = maxps(auVar15,_DAT_00a9a660);
  auVar16._0_4_ = (param_2[4] + *(float *)(in_ECX + 0x20)) * *(float *)(in_ECX + 0x30);
  auVar16._4_4_ = (param_2[5] + *(float *)(in_ECX + 0x24)) * *(float *)(in_ECX + 0x34);
  auVar16._8_4_ = (param_2[6] + *(float *)(in_ECX + 0x28)) * *(float *)(in_ECX + 0x38);
  auVar16._12_4_ = (param_2[7] + *(float *)(in_ECX + 0x2c)) * *(float *)(in_ECX + 0x3c);
  auVar16 = minps(auVar16,_DAT_00b2fc70);
  auVar16 = maxps(auVar16,_DAT_00a9a660);
  uVar13 = (uint)(auVar15._0_4_ + 65536.0) >> 7 & 0xfffe;
  uVar3 = *(undefined4 *)(in_ECX + 0x44);
  piVar1 = (int *)(in_ECX + 0x40);
  if (*(uint *)(in_ECX + 0x44) == (*(uint *)(in_ECX + 0x48) & 0x3fffffff)) {
    FUN_008a6ee0(piVar1,0x10);
  }
  iVar4 = *piVar1;
  piVar14 = (int *)(*(int *)(in_ECX + 0x44) * 0x10 + iVar4);
  *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x44) + 1;
  FUN_008e1440(iVar4,uVar3,uVar13,(uint)(auVar16._0_4_ + 65536.0) >> 7 & 0xffff | 1,piVar14 + 2,
               (int)piVar14 + 10);
  FUN_008e1440(iVar4,uVar3,(uint)(auVar15._4_4_ + 65536.0) >> 7 & 0xfffe,
               (uint)(auVar16._4_4_ + 65536.0) >> 7 & 0xffff | 1,piVar14,piVar14 + 1);
  FUN_008e1440(iVar4,uVar3,(uint)(auVar15._8_4_ + 65536.0) >> 7 & 0xfffe,
               (uint)(auVar16._8_4_ + 65536.0) >> 7 & 0xffff | 1,(int)piVar14 + 2,(int)piVar14 + 6);
  FUN_008e0a30(iVar4,uVar3,piVar14);
  iVar4 = _tls_index;
  piVar14[3] = (int)param_1;
  *param_1 = uVar3;
  iVar4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + iVar4 * 4);
  iVar5 = *(int *)(in_ECX + 0x44);
  piVar10 = *(int **)(iVar4 + 0x19c);
  puVar9 = (uint *)piVar10[8];
  uVar8 = (iVar5 >> 5) * 4 + 0x30U & 0xfffffff0;
  uVar12 = (int)puVar9 + uVar8;
  if ((uint)piVar10[0xb] < uVar12) {
    puVar9 = (uint *)(**(code **)(*piVar10 + 0xc))(uVar8);
  }
  else {
    piVar10[8] = uVar12;
  }
  FUN_008e0e90(iVar5,uVar13,piVar14,uVar3,puVar9);
  iVar5 = *(int *)(in_ECX + 0x44);
  piVar1 = (int *)*piVar1;
  for (puVar11 = puVar9; puVar11 < puVar9 + (iVar5 >> 5) + 1; puVar11 = puVar11 + 1) {
    uVar13 = *puVar11;
    piVar10 = piVar1;
    while (uVar13 != 0) {
      if ((char)uVar13 == '\0') {
        piVar10 = piVar10 + 0x20;
        uVar13 = uVar13 >> 8;
      }
      else {
        if (((uVar13 & 1) != 0) &&
           (((piVar10[1] - *piVar14 | piVar14[1] - *piVar10) & 0x80008000U) == 0)) {
          uVar8 = piVar10[3];
          if ((uVar8 & 1) == 0) {
            if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
              FUN_008a6ee0(param_3,8);
            }
            iVar6 = param_3[1];
            iVar7 = *param_3;
            *(undefined4 **)(iVar7 + iVar6 * 8) = param_1;
            *(uint *)(iVar7 + 4 + iVar6 * 8) = uVar8;
            param_3[1] = param_3[1] + 1;
          }
          else {
            iVar6 = *(int *)(in_ECX + 0x78);
            uVar8 = uVar8 & 0xfffffffe;
            piVar2 = (int *)(uVar8 + 4 + iVar6);
            if (*(uint *)(uVar8 + 8 + iVar6) == (*(uint *)(uVar8 + 0xc + iVar6) & 0x3fffffff)) {
              FUN_008a6ee0(piVar2,2);
            }
            local_54 = (undefined2)uVar3;
            *(undefined2 *)(*piVar2 + piVar2[1] * 2) = local_54;
            piVar2[1] = piVar2[1] + 1;
          }
        }
        piVar10 = piVar10 + 4;
        uVar13 = uVar13 >> 1;
      }
    }
    piVar1 = piVar1 + 0x80;
  }
  piVar1 = *(int **)(iVar4 + 0x19c);
  piVar1[8] = (int)puVar9;
  if (puVar9 == (uint *)piVar1[10]) {
    (**(code **)(*piVar1 + 0x10))(puVar9);
  }
  return;
}



void FUN_008e19c0(uint *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int in_ECX;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  short *psVar17;
  int unaff_FS_OFFSET;
  short local_28;
  uint *local_18;
  
  uVar3 = *(uint *)(in_ECX + 0x44);
  uVar4 = *param_1;
  piVar1 = (int *)(in_ECX + 0x40);
  puVar16 = (ushort *)(uVar4 * 0x10 + *(int *)(in_ECX + 0x40));
  iVar12 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  piVar7 = *(int **)(iVar12 + 0x19c);
  local_18 = (uint *)piVar7[8];
  uVar5 = (uVar3 >> 5) * 4 + 0x30 & 0xfffffff0;
  uVar11 = (int)local_18 + uVar5;
  if ((uint)piVar7[0xb] < uVar11) {
    local_18 = (uint *)(**(code **)(*piVar7 + 0xc))(uVar5);
  }
  else {
    piVar7[8] = uVar11;
  }
  FUN_008e0e90(uVar3,*(undefined2 *)(*(int *)(in_ECX + 0x4c) + (uint)puVar16[4] * 4),puVar16,uVar4,
               local_18);
  piVar7 = (int *)*piVar1;
  iVar15 = *(int *)(in_ECX + 0x44);
  local_28 = (short)uVar4;
  for (puVar9 = local_18; puVar9 < local_18 + (iVar15 >> 5) + 1; puVar9 = puVar9 + 1) {
    uVar11 = *puVar9;
    piVar6 = piVar7;
    while (uVar11 != 0) {
      if ((char)uVar11 == '\0') {
        piVar6 = piVar6 + 0x20;
        uVar11 = uVar11 >> 8;
      }
      else {
        if (((uVar11 & 1) != 0) &&
           (((*(int *)(puVar16 + 2) - *piVar6 | piVar6[1] - *(int *)puVar16) & 0x80008000U) == 0)) {
          uVar5 = piVar6[3];
          if ((uVar5 & 1) == 0) {
            if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
              FUN_008a6ee0(param_2,8);
            }
            iVar8 = param_2[1];
            iVar10 = *param_2;
            *(uint **)(iVar10 + iVar8 * 8) = param_1;
            *(uint *)(iVar10 + 4 + iVar8 * 8) = uVar5;
            param_2[1] = param_2[1] + 1;
          }
          else {
            iVar8 = *(int *)((uVar5 & 0xfffffffe) + 8 + *(int *)(in_ECX + 0x78));
            iVar14 = (uVar5 & 0xfffffffe) + *(int *)(in_ECX + 0x78);
            iVar10 = 0;
            if (0 < iVar8) {
              psVar17 = *(short **)(iVar14 + 4);
              do {
                if (*psVar17 == local_28) goto LAB_008e1b3d;
                iVar10 = iVar10 + 1;
                psVar17 = psVar17 + 1;
              } while (iVar10 < iVar8);
            }
            iVar10 = -1;
LAB_008e1b3d:
            iVar8 = *(int *)(iVar14 + 8) + -1;
            *(int *)(iVar14 + 8) = iVar8;
            *(undefined2 *)(*(int *)(iVar14 + 4) + iVar10 * 2) =
                 *(undefined2 *)(*(int *)(iVar14 + 4) + iVar8 * 2);
          }
        }
        piVar6 = piVar6 + 4;
        uVar11 = uVar11 >> 1;
      }
    }
    piVar7 = piVar7 + 0x80;
  }
  piVar7 = *(int **)(iVar12 + 0x19c);
  piVar7[8] = (int)local_18;
  if (local_18 == (uint *)piVar7[10]) {
    (**(code **)(*piVar7 + 0x10))(local_18);
  }
  iVar12 = *piVar1;
  FUN_008e0e30(puVar16[4],puVar16[5]);
  FUN_008e0e30(*puVar16,puVar16[2]);
  FUN_008e0e30(puVar16[1],puVar16[3]);
  FUN_008e0b30(iVar12,uVar3,puVar16);
  if (uVar4 < uVar3 - 1) {
    puVar2 = (undefined4 *)(uVar3 * 0x10 + -0x10 + *piVar1);
    *(undefined4 *)puVar16 = *puVar2;
    *(undefined4 *)(puVar16 + 2) = puVar2[1];
    *(undefined4 *)(puVar16 + 4) = puVar2[2];
    *(undefined4 *)(puVar16 + 6) = puVar2[3];
    *(short *)(*(int *)(in_ECX + 0x4c) + 2 + (uint)puVar16[4] * 4) = local_28;
    *(short *)(*(int *)(in_ECX + 0x4c) + 2 + (uint)puVar16[5] * 4) = local_28;
    if ((*(uint *)(puVar16 + 6) & 1) == 0) {
      *(short *)(*(int *)(in_ECX + 0x58) + 2 + (uint)*puVar16 * 4) = local_28;
      *(short *)(*(int *)(in_ECX + 0x58) + 2 + (uint)puVar16[2] * 4) = local_28;
      *(short *)(*(int *)(in_ECX + 100) + 2 + (uint)puVar16[1] * 4) = local_28;
      *(short *)(*(int *)(in_ECX + 100) + 2 + (uint)puVar16[3] * 4) = local_28;
      **(uint **)(puVar16 + 6) = uVar4;
    }
    else {
      *(short *)((*(uint *)(puVar16 + 6) & 0xfffffffe) + *(int *)(in_ECX + 0x78)) = local_28;
    }
    if ((*(int *)(in_ECX + 0x70) != 0) && ((puVar16[6] & 1) == 0)) {
      bVar13 = 0x10 - (char)*(undefined2 *)(in_ECX + 0x74);
      uVar11 = (uint)(*(ushort *)(*(int *)(in_ECX + 0x4c) + (uint)puVar16[4] * 4) >> (bVar13 & 0x1f)
                     );
      if ((uVar11 != 0) &&
         (puVar16[4] <
          *(ushort *)
           ((uint)*(ushort *)(uVar11 * 0x10 + -0x10 + *(int *)(in_ECX + 0x78)) * 0x10 + 10 + *piVar1
           ))) {
        uVar11 = uVar11 - 1;
      }
      iVar12 = (*(ushort *)(*(int *)(in_ECX + 0x4c) + (uint)puVar16[5] * 4) >> (bVar13 & 0x1f)) - 1;
      if ((int)uVar11 <= iVar12) {
        iVar15 = uVar11 << 4;
        param_1 = (uint *)((iVar12 - uVar11) + 1);
        do {
          iVar12 = *(int *)(*(int *)(in_ECX + 0x78) + 8 + iVar15);
          iVar8 = *(int *)(in_ECX + 0x78) + iVar15;
          iVar10 = 0;
          if (0 < iVar12) {
            psVar17 = *(short **)(iVar8 + 4);
            do {
              if (*psVar17 == (short)((short)uVar3 + -1)) goto LAB_008e1d3a;
              iVar10 = iVar10 + 1;
              psVar17 = psVar17 + 1;
            } while (iVar10 < iVar12);
          }
          iVar10 = -1;
LAB_008e1d3a:
          *(short *)(*(int *)(iVar8 + 4) + iVar10 * 2) = local_28;
          iVar15 = iVar15 + 0x10;
          param_1 = (uint *)((int)param_1 + -1);
        } while (param_1 != (uint *)0x0);
      }
    }
  }
  iVar12 = uVar3 - 1;
  uVar11 = *(uint *)(in_ECX + 0x48) & 0x3fffffff;
  if ((int)uVar11 < iVar12) {
    iVar15 = uVar11 * 2;
    if (iVar15 <= iVar12) {
      iVar15 = iVar12;
    }
    FUN_008a6e40(piVar1,iVar15,0x10);
  }
  *(int *)(in_ECX + 0x44) = iVar12;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e1e20(float *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int in_ECX;
  uint uVar14;
  int iVar15;
  ushort *puVar16;
  byte *pbVar17;
  int *piVar18;
  int unaff_FS_OFFSET;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int *local_54;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  iVar2 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar15 = *(int *)(iVar2 + _tls_index * 4);
  if (*(uint *)(iVar15 + 0x1a4) < *(uint *)(iVar15 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar15 + 0x1a4);
    *puVar3 = "LtquerySingleAabb";
    puVar3[3] = "marker";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar15 + 0x1a4) = puVar3 + 4;
  }
  iVar15 = *(int *)(in_ECX + 0x44);
  iVar2 = *(int *)(iVar2 + _tls_index * 4);
  piVar18 = *(int **)(iVar2 + 0x19c);
  puVar7 = (uint *)piVar18[8];
  uVar6 = (iVar15 >> 5) * 4 + 0x30U & 0xfffffff0;
  uVar14 = (int)puVar7 + uVar6;
  if ((uint)piVar18[0xb] < uVar14) {
    puVar7 = (uint *)(**(code **)(*piVar18 + 0xc))(uVar6);
  }
  else {
    piVar18[8] = uVar14;
  }
  iVar15 = iVar15 >> 7;
  if (-1 < iVar15) {
    iVar15 = iVar15 + 1;
    puVar8 = puVar7;
    do {
      iVar15 = iVar15 + -1;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8 = puVar8 + 4;
    } while (iVar15 != 0);
  }
  auVar19._0_4_ = (*param_1 + *(float *)(in_ECX + 0x10)) * *(float *)(in_ECX + 0x30);
  auVar19._4_4_ = (param_1[1] + *(float *)(in_ECX + 0x14)) * *(float *)(in_ECX + 0x34);
  auVar19._8_4_ = (param_1[2] + *(float *)(in_ECX + 0x18)) * *(float *)(in_ECX + 0x38);
  auVar19._12_4_ = (param_1[3] + *(float *)(in_ECX + 0x1c)) * *(float *)(in_ECX + 0x3c);
  auVar19 = minps(auVar19,_DAT_00b2fc70);
  auVar19 = maxps(auVar19,_DAT_00a9a660);
  uVar14 = (uint)(auVar19._0_4_ + 65536.0) >> 7 & 0xfffe;
  auVar20._0_4_ = (param_1[4] + *(float *)(in_ECX + 0x20)) * *(float *)(in_ECX + 0x30);
  auVar20._4_4_ = (param_1[5] + *(float *)(in_ECX + 0x24)) * *(float *)(in_ECX + 0x34);
  auVar20._8_4_ = (param_1[6] + *(float *)(in_ECX + 0x28)) * *(float *)(in_ECX + 0x38);
  auVar20._12_4_ = (param_1[7] + *(float *)(in_ECX + 0x2c)) * *(float *)(in_ECX + 0x3c);
  auVar20 = minps(auVar20,_DAT_00b2fc70);
  auVar20 = maxps(auVar20,_DAT_00a9a660);
  puVar9 = (ushort *)(*(int *)(in_ECX + 0x4c) + 4);
  if ((*(int *)(in_ECX + 0x70) != 0) &&
     (iVar15 = (int)uVar14 >> (0x10U - (char)*(undefined4 *)(in_ECX + 0x74) & 0x1f), 0 < iVar15)) {
    iVar15 = iVar15 * 0x10;
    uVar1 = *(ushort *)(iVar15 + -0x10 + *(int *)(in_ECX + 0x78));
    puVar9 = (ushort *)(iVar15 + -0x10 + *(int *)(in_ECX + 0x78));
    iVar15 = (int)(uint)uVar1 >> 5;
    puVar7[iVar15] = puVar7[iVar15] ^ 1 << ((byte)uVar1 & 0x1f);
    local_54 = *(int **)(puVar9 + 4);
    puVar16 = *(ushort **)(puVar9 + 2);
    if (-1 < (int)local_54 + -1) {
      do {
        uVar1 = *puVar16;
        iVar15 = (int)(uint)uVar1 >> 5;
        puVar16 = puVar16 + 1;
        puVar7[iVar15] = puVar7[iVar15] ^ 1 << ((byte)uVar1 & 0x1f);
        local_54 = (int *)((int)local_54 + -1);
      } while (local_54 != (int *)0x0);
    }
    iVar15 = *(int *)(in_ECX + 0x40);
    iVar10 = (uint)*puVar9 * 0x10;
    uVar1 = *(ushort *)(iVar10 + 10 + iVar15);
    iVar4 = *(int *)(in_ECX + 0x4c);
    for (pbVar17 = (byte *)(iVar4 + 4 + (uint)*(ushort *)(iVar10 + 8 + iVar15) * 4);
        pbVar17 < (byte *)(iVar4 + (uint)uVar1 * 4); pbVar17 = pbVar17 + 4) {
                    /* WARNING: Read-only address (ram,0x00a9a660) is written */
      if ((*pbVar17 & 1) == 0) {
        iVar11 = (int)(uint)*(ushort *)(pbVar17 + 2) >> 5;
        puVar7[iVar11] = puVar7[iVar11] & ~(1 << ((byte)*(ushort *)(pbVar17 + 2) & 0x1f));
      }
    }
                    /* WARNING: Read-only address (ram,0x00a9a660) is written */
    puVar9 = (ushort *)(*(int *)(in_ECX + 0x4c) + 4 + (uint)*(ushort *)(iVar10 + iVar15 + 8) * 4);
  }
  uVar1 = *puVar9;
  while (uVar1 < uVar14) {
    puVar16 = puVar9 + 1;
    iVar15 = (int)(uint)*puVar16 >> 5;
    puVar9 = puVar9 + 2;
    puVar7[iVar15] = puVar7[iVar15] ^ 1 << ((byte)*puVar16 & 0x1f);
    uVar1 = *puVar9;
  }
  uVar1 = *puVar9;
  while ((uint)uVar1 < ((uint)(auVar20._0_4_ + 65536.0) >> 7 & 0xffff | 1)) {
    if ((uVar1 & 1) == 0) {
      iVar15 = (int)(uint)puVar9[1] >> 5;
      puVar7[iVar15] = puVar7[iVar15] ^ 1 << ((byte)puVar9[1] & 0x1f);
    }
    puVar16 = puVar9 + 2;
    puVar9 = puVar9 + 2;
    uVar1 = *puVar16;
  }
  iVar15 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar15 + 0x1a4) < *(uint *)(iVar15 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "Styz-Axis";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar4 = *(int *)(in_ECX + 0x58);
  iVar15 = iVar4 + -8 + *(int *)(in_ECX + 0x5c) * 4;
  iVar11 = FUN_008e0c30(iVar4 + 4,iVar15,(uint)(auVar19._4_4_ + 65536.0) >> 7 & 0xfffe);
  iVar12 = FUN_008e0c30(iVar4 + 4,iVar15,(uint)(auVar20._4_4_ + 65536.0) >> 7 & 0xffff | 1);
  iVar10 = *(int *)(in_ECX + 100);
  iVar15 = iVar10 + -8 + *(int *)(in_ECX + 0x68) * 4;
  iVar13 = FUN_008e0c30(iVar10 + 4,iVar15,(uint)(auVar19._8_4_ + 65536.0) >> 7 & 0xfffe);
  local_40 = CONCAT22((short)(iVar13 - iVar10 >> 2),(short)(iVar11 - iVar4 >> 2));
  iVar15 = FUN_008e0c30(iVar10 + 4,iVar15,(uint)(auVar20._8_4_ + 65536.0) >> 7 & 0xffff | 1);
  uStack_3c = CONCAT22((short)(iVar15 + (-4 - iVar10) >> 2),(short)(iVar12 + (-4 - iVar4) >> 2));
  iVar15 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar15 + 0x1a4) < *(uint *)(iVar15 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "StScanBitfield";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar15 = *(int *)(in_ECX + 0x44);
  if (puVar7 < puVar7 + (iVar15 >> 5) + 1) {
    local_54 = (int *)(*(int *)(in_ECX + 0x40) + 0x24);
    puVar8 = puVar7;
    do {
      piVar18 = local_54;
      for (uVar14 = *puVar8; uVar14 != 0; uVar14 = uVar14 >> 4) {
        if ((uVar14 & 0xf) != 0) {
          if ((((uVar14 & 1) != 0) &&
              (((uStack_3c - piVar18[-9] | piVar18[-8] - local_40) & 0x80008000U) == 0)) &&
             (uVar6 = piVar18[-6], (uVar6 & 1) == 0)) {
            if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
              FUN_008a6ee0(param_2,8);
            }
            iVar4 = param_2[1];
            iVar10 = *param_2;
            *(undefined4 *)(iVar10 + iVar4 * 8) = 0;
            *(uint *)(iVar10 + 4 + iVar4 * 8) = uVar6;
            param_2[1] = param_2[1] + 1;
          }
          if ((((uVar14 & 2) != 0) &&
              (((uStack_3c - piVar18[-5] | piVar18[-4] - local_40) & 0x80008000U) == 0)) &&
             (uVar6 = piVar18[-2], (uVar6 & 1) == 0)) {
            if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
              FUN_008a6ee0(param_2,8);
            }
            iVar4 = param_2[1];
            iVar10 = *param_2;
            *(undefined4 *)(iVar10 + iVar4 * 8) = 0;
            *(uint *)(iVar10 + 4 + iVar4 * 8) = uVar6;
            param_2[1] = param_2[1] + 1;
          }
          if ((((uVar14 & 4) != 0) &&
              (((uStack_3c - piVar18[-1] | *piVar18 - local_40) & 0x80008000U) == 0)) &&
             (uVar6 = piVar18[2], (uVar6 & 1) == 0)) {
            if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
              FUN_008a6ee0(param_2,8);
            }
            iVar4 = param_2[1];
            iVar10 = *param_2;
            *(undefined4 *)(iVar10 + iVar4 * 8) = 0;
            *(uint *)(iVar10 + 4 + iVar4 * 8) = uVar6;
            param_2[1] = param_2[1] + 1;
          }
          if ((((uVar14 & 8) != 0) &&
              (((uStack_3c - piVar18[3] | piVar18[4] - local_40) & 0x80008000U) == 0)) &&
             (uVar6 = piVar18[6], (uVar6 & 1) == 0)) {
            if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
              FUN_008a6ee0(param_2,8);
            }
            iVar4 = param_2[1];
            iVar10 = *param_2;
            *(undefined4 *)(iVar10 + iVar4 * 8) = 0;
            *(uint *)(iVar10 + 4 + iVar4 * 8) = uVar6;
            param_2[1] = param_2[1] + 1;
          }
        }
        piVar18 = piVar18 + 0x10;
      }
      puVar8 = puVar8 + 1;
      local_54 = local_54 + 0x80;
    } while (puVar8 < puVar7 + (iVar15 >> 5) + 1);
  }
  piVar18 = *(int **)(iVar2 + 0x19c);
  piVar18[8] = (int)puVar7;
  if (puVar7 == (uint *)piVar18[10]) {
    (**(code **)(*piVar18 + 0x10))(puVar7);
  }
  iVar15 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar15 + 0x1a4) < *(uint *)(iVar15 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = &DAT_00a6a630;
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e24a0(float *param_1,int *param_2,int param_3)

{
  ushort *puVar1;
  char *pcVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  float fVar10;
  uint *puVar11;
  int iVar12;
  ushort *puVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  int in_ECX;
  uint *puVar17;
  float *pfVar18;
  float *pfVar19;
  uint uVar20;
  int iVar21;
  int unaff_FS_OFFSET;
  float10 fVar22;
  undefined1 auVar23 [16];
  int local_d0;
  int *local_cc;
  byte *local_c8;
  uint *local_c4;
  byte *local_c0;
  byte *local_bc;
  byte *local_b8;
  float local_a0 [5];
  float local_8c [3];
  int local_80;
  undefined2 local_7a;
  ushort *local_78 [3];
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  ushort *local_5c [3];
  float local_50 [4];
  float local_40 [5];
  int local_2c [3];
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar15 = *(int *)(unaff_FS_OFFSET + 0x2c);
  auVar23._0_4_ = (*param_1 + *(float *)(in_ECX + 0x10)) * *(float *)(in_ECX + 0x30);
  auVar23._4_4_ = (param_1[1] + *(float *)(in_ECX + 0x14)) * *(float *)(in_ECX + 0x34);
  auVar23._8_4_ = (param_1[2] + *(float *)(in_ECX + 0x18)) * *(float *)(in_ECX + 0x38);
  auVar23._12_4_ = (param_1[3] + *(float *)(in_ECX + 0x1c)) * *(float *)(in_ECX + 0x3c);
  auVar23 = minps(auVar23,_DAT_00b2fc70);
  auVar23 = maxps(auVar23,_DAT_00a9a660);
  uVar20 = (uint)(auVar23._12_4_ + 65536.0) >> 7;
  local_a0[0] = (float)((uint)(auVar23._0_4_ + 65536.0) >> 7 & 0xffff);
  local_a0[1] = (float)((uint)(auVar23._4_4_ + 65536.0) >> 7 & 0xffff);
  local_a0[3] = (float)(uVar20 & 0xffff);
  iVar6 = *(int *)(iVar15 + _tls_index * 4);
  local_7a = (short)uVar20;
  local_a0[2] = (float)((uint)(auVar23._8_4_ + 65536.0) >> 7 & 0xffff);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar7 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar7 = "Lthk3AxisSweep";
    puVar7[3] = "memory";
    uVar9 = rdtsc();
    puVar7[1] = (int)uVar9;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar7 + 4;
  }
  iVar6 = *(int *)(iVar15 + _tls_index * 4);
  piVar8 = *(int **)(iVar6 + 0x19c);
  puVar11 = (uint *)piVar8[8];
  uVar20 = *(int *)(in_ECX + 0x44) + 0x20U & 0xfffffff0;
  pcVar2 = (char *)((int)puVar11 + uVar20);
  if ((char *)piVar8[0xb] < pcVar2) {
    puVar11 = (uint *)(**(code **)(*piVar8 + 0xc))(uVar20);
  }
  else {
    piVar8[8] = (int)pcVar2;
  }
  iVar12 = *(int *)(in_ECX + 0x44) >> 4;
  if (-1 < iVar12) {
    iVar12 = iVar12 + 1;
    puVar17 = puVar11;
    do {
      iVar12 = iVar12 + -1;
      *puVar17 = 0;
      puVar17[1] = 0;
      puVar17[2] = 0;
      puVar17[3] = 0;
      puVar17 = puVar17 + 4;
    } while (iVar12 != 0);
  }
  iVar15 = *(int *)(iVar15 + _tls_index * 4);
  if (*(uint *)(iVar15 + 0x1a4) < *(uint *)(iVar15 + 0x1a8)) {
    puVar7 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar7 = "Stbitfield";
    uVar9 = rdtsc();
    puVar7[1] = (int)uVar9;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar7 + 3;
  }
  local_c4 = (uint *)param_1[7];
  if (local_c4 == (uint *)0x0) {
    local_c4 = (uint *)(in_ECX + 0x4c);
  }
  bVar16 = 0x11;
  local_c8 = (byte *)0x0;
  do {
    iVar15 = local_c4[1];
    iVar12 = *local_c4;
    uVar20 = *(uint *)((int)local_a0 + (int)local_c8);
    if (uVar20 < *(ushort *)(iVar12 + (iVar15 >> 1) * 4)) {
                    /* WARNING: Read-only address (ram,0x00a9a660) is written */
      for (puVar13 = (ushort *)(iVar12 + 4);
          (puVar13 < (ushort *)(iVar12 + -0x10 + iVar15 * 4) && (puVar13[6] <= uVar20));
          puVar13 = puVar13 + 8) {
        *(byte *)((uint)puVar13[1] + (int)puVar11) =
             *(byte *)((uint)puVar13[1] + (int)puVar11) ^ bVar16;
        *(byte *)((uint)puVar13[3] + (int)puVar11) =
             *(byte *)((uint)puVar13[3] + (int)puVar11) ^ bVar16;
        *(byte *)((uint)puVar13[5] + (int)puVar11) =
             *(byte *)((uint)puVar13[5] + (int)puVar11) ^ bVar16;
        *(byte *)((uint)puVar13[7] + (int)puVar11) =
             *(byte *)((uint)puVar13[7] + (int)puVar11) ^ bVar16;
      }
      uVar4 = *puVar13;
      while (uVar4 <= uVar20) {
        puVar1 = puVar13 + 1;
        puVar13 = puVar13 + 2;
        *(byte *)((uint)*puVar1 + (int)puVar11) = *(byte *)((uint)*puVar1 + (int)puVar11) ^ bVar16;
        uVar4 = *puVar13;
      }
    }
    else {
                    /* WARNING: Read-only address (ram,0x00a9a660) is written */
      for (puVar13 = (ushort *)(iVar12 + -8 + iVar15 * 4);
          ((ushort *)(iVar12 + 0x10U) <= puVar13 && (uVar20 < puVar13[-6])); puVar13 = puVar13 + -8)
      {
        *(byte *)((uint)puVar13[1] + (int)puVar11) =
             *(byte *)((uint)puVar13[1] + (int)puVar11) ^ bVar16;
        *(byte *)((uint)puVar13[-1] + (int)puVar11) =
             *(byte *)((uint)puVar13[-1] + (int)puVar11) ^ bVar16;
        *(byte *)((uint)puVar13[-3] + (int)puVar11) =
             *(byte *)((uint)puVar13[-3] + (int)puVar11) ^ bVar16;
        *(byte *)((uint)puVar13[-5] + (int)puVar11) =
             *(byte *)((uint)puVar13[-5] + (int)puVar11) ^ bVar16;
      }
      uVar4 = *puVar13;
      while (uVar20 < uVar4) {
        puVar1 = puVar13 + 1;
                    /* WARNING: Read-only address (ram,0x00a9a660) is written */
        puVar13 = puVar13 + -2;
        *(byte *)((uint)*puVar1 + (int)puVar11) = *(byte *)((uint)*puVar1 + (int)puVar11) ^ bVar16;
        uVar4 = *puVar13;
      }
                    /* WARNING: Read-only address (ram,0x00a9a660) is written */
      puVar13 = puVar13 + 2;
    }
    *(ushort **)((int)local_5c + (int)local_c8) = puVar13;
    local_c8 = (byte *)((int)local_c8 + 4);
    local_c4 = local_c4 + 3;
    bVar16 = bVar16 << 1;
  } while ((int)local_c8 < 0xc);
  iVar15 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar15 + 0x1a4) < *(uint *)(iVar15 + 0x1a8)) {
    puVar7 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar7 = "StStartOverlaps";
    uVar9 = rdtsc();
    puVar7[1] = (int)uVar9;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar7 + 3;
  }
  piVar8 = *(int **)(iVar6 + 0x19c);
  iVar15 = piVar8[8];
  uVar14 = (int)param_1[4] * 4 + 0x10U & 0xfffffff0;
  uVar20 = iVar15 + uVar14;
  if ((uint)piVar8[0xb] < uVar20) {
    iVar15 = (**(code **)(*piVar8 + 0xc))(uVar14);
  }
  else {
    piVar8[8] = uVar20;
  }
  iVar12 = 0;
  if (0 < (int)param_1[4]) {
    do {
      *(undefined4 *)(iVar15 + iVar12 * 4) = 0x3f800000;
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)param_1[4]);
  }
  iVar12 = *(int *)(in_ECX + 0x44);
  iVar21 = *(int *)(in_ECX + 0x40);
  if (puVar11 < puVar11 + (iVar12 >> 2) + 1) {
    local_c8 = (byte *)(iVar21 + 0x3c);
    local_c0 = (byte *)(iVar21 + 0x2c);
    local_b8 = (byte *)(iVar21 + 0x1c);
    local_bc = (byte *)(iVar21 + 0xc);
    local_c4 = puVar11;
    do {
      if ((*local_c4 + 0x1010101 & 0x8080808) == 0) {
        if ((local_c4[1] + 0x1010101 & 0x8080808) == 0) {
          if ((local_c4[2] + 0x1010101 & 0x8080808) == 0) {
            local_bc = local_bc + 0xc0;
            local_b8 = local_b8 + 0xc0;
            local_c0 = local_c0 + 0xc0;
            local_c8 = local_c8 + 0xc0;
            local_c4 = local_c4 + 3;
          }
          else {
            local_bc = local_bc + 0x80;
            local_b8 = local_b8 + 0x80;
            local_c0 = local_c0 + 0x80;
            local_c8 = local_c8 + 0x80;
            local_c4 = local_c4 + 2;
          }
        }
        else {
          local_bc = local_bc + 0x40;
          local_b8 = local_b8 + 0x40;
          local_c0 = local_c0 + 0x40;
          local_c8 = local_c8 + 0x40;
          local_c4 = local_c4 + 1;
        }
      }
      else {
        if (((char)*local_c4 == 'w') && ((*local_bc & 1) == 0)) {
          iVar21 = 0;
          local_cc = param_2;
          if (0 < (int)param_1[4]) {
            do {
              fVar22 = (float10)(**(code **)(*local_cc + 4))(*(undefined4 *)local_bc,iVar21);
              fVar3 = *(float *)(iVar15 + iVar21 * 4);
              if ((float10)fVar3 < fVar22) {
                fVar22 = (float10)fVar3;
              }
              *(float *)(iVar15 + iVar21 * 4) = (float)fVar22;
              local_cc = (int *)((int)local_cc + param_3);
              iVar21 = iVar21 + 1;
            } while (iVar21 < (int)param_1[4]);
          }
        }
        if ((*(char *)((int)local_c4 + 1) == 'w') && ((*local_b8 & 1) == 0)) {
          iVar21 = 0;
          local_cc = param_2;
          if (0 < (int)param_1[4]) {
            do {
              fVar22 = (float10)(**(code **)(*local_cc + 4))(*(undefined4 *)local_b8,iVar21);
              fVar3 = *(float *)(iVar15 + iVar21 * 4);
              if ((float10)fVar3 < fVar22) {
                fVar22 = (float10)fVar3;
              }
              *(float *)(iVar15 + iVar21 * 4) = (float)fVar22;
              local_cc = (int *)((int)local_cc + param_3);
              iVar21 = iVar21 + 1;
            } while (iVar21 < (int)param_1[4]);
          }
        }
        if ((*(char *)((int)local_c4 + 2) == 'w') && ((*local_c0 & 1) == 0)) {
          iVar21 = 0;
          local_cc = param_2;
          if (0 < (int)param_1[4]) {
            do {
              fVar22 = (float10)(**(code **)(*local_cc + 4))(*(undefined4 *)local_c0,iVar21);
              fVar3 = *(float *)(iVar15 + iVar21 * 4);
              if ((float10)fVar3 < fVar22) {
                fVar22 = (float10)fVar3;
              }
              *(float *)(iVar15 + iVar21 * 4) = (float)fVar22;
              local_cc = (int *)((int)local_cc + param_3);
              iVar21 = iVar21 + 1;
            } while (iVar21 < (int)param_1[4]);
          }
        }
        if ((*(char *)((int)local_c4 + 3) == 'w') && ((*local_c8 & 1) == 0)) {
          iVar21 = 0;
          local_cc = param_2;
          if (0 < (int)param_1[4]) {
            do {
              fVar22 = (float10)(**(code **)(*local_cc + 4))(*(undefined4 *)local_c8,iVar21);
              fVar3 = *(float *)(iVar15 + iVar21 * 4);
              if ((float10)fVar3 < fVar22) {
                fVar22 = (float10)fVar3;
              }
              *(float *)(iVar15 + iVar21 * 4) = (float)fVar22;
              local_cc = (int *)((int)local_cc + param_3);
              iVar21 = iVar21 + 1;
            } while (iVar21 < (int)param_1[4]);
          }
        }
        local_bc = local_bc + 0x40;
        local_c0 = local_c0 + 0x40;
        local_c8 = local_c8 + 0x40;
        local_b8 = local_b8 + 0x40;
        local_c4 = local_c4 + 1;
      }
    } while (local_c4 < puVar11 + (iVar12 >> 2) + 1);
  }
  iVar12 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  *(char *)puVar11 = -0x78;
  if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
    puVar7 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar7 = "StWalk";
    uVar9 = rdtsc();
    puVar7[1] = (int)uVar9;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar7 + 3;
  }
  local_c8 = (byte *)param_2;
  local_80 = *(int *)(in_ECX + 0x44);
  local_c4 = (uint *)0x0;
  if (0 < (int)param_1[4]) {
    local_60 = (int)&local_20 - (int)param_1;
    local_68 = (int)local_a0 - (int)param_1;
    local_64 = (int)local_2c - (int)param_1;
    local_6c = (int)local_78 - (int)param_1;
    do {
      local_c0 = *(byte **)(iVar15 + (int)local_c4 * 4);
      local_78[0] = local_5c[0];
      local_78[2] = local_5c[2];
      local_78[1] = local_5c[1];
      pfVar18 = (float *)((int)param_1[6] * (int)local_c4 + (int)param_1[5]);
      local_a0[0] = *pfVar18;
      local_a0[1] = pfVar18[1];
      local_a0[3] = pfVar18[3];
      local_a0[2] = pfVar18[2];
      local_20 = *pfVar18 - *param_1;
      fStack_1c = pfVar18[1] - param_1[1];
      fStack_18 = pfVar18[2] - param_1[2];
      fStack_14 = pfVar18[3] - param_1[3];
      pfVar19 = (float *)(in_ECX + 0x30);
      local_d0 = 3;
      pfVar18 = param_1;
      do {
        fVar3 = *(float *)(local_60 + (int)pfVar18) * *pfVar19;
        fVar10 = (pfVar19[-8] + *pfVar18) * *pfVar19;
        if ((ABS(fVar3) < fVar10 * 1.1920929e-07) ||
           (ABS(fVar3) <
            (*(float *)(local_68 + (int)pfVar18) + pfVar19[-8]) * *pfVar19 * 1.1920929e-07)) {
          *(undefined4 *)(((int)local_40 - (int)param_1) + (int)pfVar18) = 0;
          *(undefined4 *)(((int)local_50 - (int)param_1) + (int)pfVar18) = 0xc0000000;
        }
        else {
          *(undefined4 *)(local_64 + (int)pfVar18) = 4;
          if (fVar3 < 0.0) {
            iVar12 = *(int *)(local_6c + (int)pfVar18);
            *(undefined4 *)(local_64 + (int)pfVar18) = 0xfffffffc;
            *(int *)(local_6c + (int)pfVar18) = iVar12 + -4;
          }
          *(float *)(((int)local_40 - (int)param_1) + (int)pfVar18) = 1.0 / fVar3;
          *(float *)(((int)local_50 - (int)param_1) + (int)pfVar18) =
               (fVar10 - *(float *)(in_ECX + 0x7c)) * (1.0 / fVar3);
        }
        pfVar18 = pfVar18 + 1;
        pfVar19 = pfVar19 + 1;
        local_d0 = local_d0 + -1;
      } while (local_d0 != 0);
      local_8c[0] = (float)*local_5c[0] * local_40[0] - local_50[0];
      local_8c[1] = (float)*local_5c[1] * local_40[1] - local_50[1];
      local_8c[2] = (float)*local_5c[2] * local_40[2] - local_50[2];
LAB_008e2d30:
      if (local_8c[1] <= local_8c[0]) {
        iVar12 = 1;
        if (local_8c[2] <= local_8c[1]) goto LAB_008e2d66;
      }
      else if (local_8c[2] <= local_8c[0]) {
LAB_008e2d66:
        iVar12 = 2;
      }
      else {
        iVar12 = 0;
      }
      if (local_8c[iVar12] <= (float)local_c0) {
        do {
          puVar13 = local_78[iVar12];
          uVar20 = (uint)puVar13[1];
          bVar16 = *(byte *)((int)puVar11 + uVar20) ^ '\x10' << (sbyte)iVar12;
          *(byte *)((int)puVar11 + uVar20) = bVar16;
          if (0x6f < bVar16) {
            if (uVar20 == 0) {
              local_8c[iVar12] = 2.0;
              goto LAB_008e2d30;
            }
            uVar20 = *(uint *)(uVar20 * 0x10 + *(int *)(in_ECX + 0x40) + 0xc);
            if (((uVar20 & 1) == 0) &&
               (fVar22 = (float10)(**(code **)(*(int *)local_c8 + 4))(uVar20,local_c4),
               fVar22 <= (float10)(float)local_c0)) {
              local_c0 = (byte *)(float)fVar22;
            }
          }
          uVar4 = *puVar13;
          uVar5 = *(ushort *)(local_2c[iVar12] + (int)puVar13);
          puVar13 = (ushort *)(local_2c[iVar12] + (int)puVar13);
          local_78[iVar12] = puVar13;
        } while (uVar4 == uVar5);
        local_8c[iVar12] = (float)*puVar13 * local_40[iVar12] - local_50[iVar12];
        goto LAB_008e2d30;
      }
      if ((int)local_c4 < (int)param_1[4] + -1) {
        for (puVar17 = puVar11; puVar17 < puVar11 + (local_80 >> 2) + 1; puVar17 = puVar17 + 2) {
                    /* WARNING: Read-only address (ram,0x00a9a660) is written */
          *puVar17 = (*puVar17 & 0xf0f0f0f) << 4 | *puVar17 & 0xf0f0f0f;
          puVar17[1] = (puVar17[1] & 0xf0f0f0f) << 4 | puVar17[1] & 0xf0f0f0f;
        }
      }
      local_c8 = (byte *)((int)local_c8 + param_3);
      local_c4 = (uint *)((int)local_c4 + 1);
    } while ((int)local_c4 < (int)param_1[4]);
  }
  iVar12 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
    puVar7 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar7 = &DAT_00a6a630;
    uVar9 = rdtsc();
    local_80 = (int)uVar9;
    puVar7[1] = local_80;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar7 + 3;
  }
  piVar8 = *(int **)(iVar6 + 0x19c);
  piVar8[8] = iVar15;
  if (iVar15 == piVar8[10]) {
    (**(code **)(*piVar8 + 0x10))(iVar15);
  }
  piVar8 = *(int **)(iVar6 + 0x19c);
  piVar8[8] = (int)puVar11;
  if (puVar11 == (uint *)piVar8[10]) {
    (**(code **)(*piVar8 + 0x10))(puVar11);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e2f20(float *param_1,int *param_2)

{
  ushort *puVar1;
  char *pcVar2;
  float *pfVar3;
  byte *pbVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  float fVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  ushort *puVar20;
  byte bVar21;
  byte bVar22;
  int in_ECX;
  int *piVar23;
  float *pfVar24;
  int unaff_FS_OFFSET;
  float10 fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint *local_108;
  float local_104;
  int *local_f8;
  float local_f0 [3];
  uint local_e4;
  float local_e0 [3];
  uint local_d4;
  int local_c4;
  float local_c0 [5];
  int local_ac;
  ushort *apuStack_a8 [6];
  float afStack_90 [4];
  float afStack_80 [5];
  int aiStack_6c [3];
  float local_60 [5];
  byte abStack_4c [12];
  float local_40 [5];
  byte abStack_2c [12];
  float afStack_20 [7];
  
  iVar16 = _tls_index;
  local_60[0] = *param_1 - param_1[8];
  local_60[1] = param_1[1] - param_1[9];
  local_60[2] = param_1[2] - param_1[10];
  local_60[3] = param_1[3] - param_1[0xb];
  local_40[0] = *param_1 + param_1[8];
  local_40[1] = param_1[1] + param_1[9];
  local_40[2] = param_1[2] + param_1[10];
  local_40[3] = param_1[3] + param_1[0xb];
  auVar26._0_4_ = (local_60[0] + *(float *)(in_ECX + 0x10)) * *(float *)(in_ECX + 0x30);
  auVar26._4_4_ = (local_60[1] + *(float *)(in_ECX + 0x14)) * *(float *)(in_ECX + 0x34);
  auVar26._8_4_ = (local_60[2] + *(float *)(in_ECX + 0x18)) * *(float *)(in_ECX + 0x38);
  auVar26._12_4_ = (local_60[3] + *(float *)(in_ECX + 0x1c)) * *(float *)(in_ECX + 0x3c);
  auVar26 = minps(auVar26,_DAT_00b2fc70);
  auVar26 = maxps(auVar26,_DAT_00a9a660);
  local_e0[0] = (float)((uint)(auVar26._0_4_ + 65536.0) >> 7 & 0xffff);
  auVar27._0_4_ = (local_40[0] + *(float *)(in_ECX + 0x10)) * *(float *)(in_ECX + 0x30);
  auVar27._4_4_ = (local_40[1] + *(float *)(in_ECX + 0x14)) * *(float *)(in_ECX + 0x34);
  auVar27._8_4_ = (local_40[2] + *(float *)(in_ECX + 0x18)) * *(float *)(in_ECX + 0x38);
  auVar27._12_4_ = (local_40[3] + *(float *)(in_ECX + 0x1c)) * *(float *)(in_ECX + 0x3c);
  local_d4 = (uint)(auVar26._12_4_ + 65536.0) >> 7 & 0xffff;
  auVar27 = minps(auVar27,_DAT_00b2fc70);
  auVar27 = maxps(auVar27,_DAT_00a9a660);
  local_c0[0] = auVar27._0_4_ + 65536.0;
  local_c0[1] = auVar27._4_4_ + 65536.0;
  local_c0[2] = auVar27._8_4_ + 65536.0;
  local_c0[3] = auVar27._12_4_ + 65536.0;
  local_e0[1] = (float)((uint)(auVar26._4_4_ + 65536.0) >> 7 & 0xffff);
  local_e0[2] = (float)((uint)(auVar26._8_4_ + 65536.0) >> 7 & 0xffff);
  local_f0[0] = (float)((uint)local_c0[0] >> 7 & 0xffff);
  local_f0[1] = (float)((uint)local_c0[1] >> 7 & 0xffff);
  iVar19 = *(int *)(unaff_FS_OFFSET + 0x2c);
  local_e4 = (uint)local_c0[3] >> 7 & 0xffff;
  iVar9 = *(int *)(iVar19 + _tls_index * 4);
  local_f0[2] = (float)((uint)local_c0[2] >> 7 & 0xffff);
  if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
    puVar10 = *(undefined4 **)(iVar9 + 0x1a4);
    *puVar10 = "Lthk3AxisSweep";
    puVar10[3] = "bitfield";
    uVar14 = rdtsc();
    puVar10[1] = (int)uVar14;
    *(undefined4 **)(*(int *)(iVar19 + iVar16 * 4) + 0x1a4) = puVar10 + 4;
  }
  local_c4 = *(int *)(iVar19 + iVar16 * 4);
  piVar23 = *(int **)(local_c4 + 0x19c);
  piVar18 = (int *)piVar23[8];
  uVar17 = *(int *)(in_ECX + 0x44) + 0x20U & 0xfffffff0;
  pcVar2 = (char *)((int)piVar18 + uVar17);
  local_ac = in_ECX;
  if ((char *)piVar23[0xb] < pcVar2) {
    piVar18 = (int *)(**(code **)(*piVar23 + 0xc))(uVar17);
  }
  else {
    piVar23[8] = (int)pcVar2;
  }
  iVar19 = *(int *)(in_ECX + 0x44) >> 4;
  if (-1 < iVar19) {
    iVar19 = iVar19 + 1;
    piVar23 = piVar18;
    do {
      iVar19 = iVar19 + -1;
      *piVar23 = 0;
      piVar23[1] = 0;
      piVar23[2] = 0;
      piVar23[3] = 0;
      piVar23 = piVar23 + 4;
    } while (iVar19 != 0);
  }
  local_f8 = (int *)param_1[0xc];
  if (local_f8 == (int *)0x0) {
    local_f8 = (int *)(in_ECX + 0x4c);
  }
  bVar21 = 1;
  local_104 = 0.0;
  do {
    iVar19 = local_f8[1];
    iVar9 = *local_f8;
    uVar17 = *(uint *)((int)local_e0 + (int)local_104);
    if (uVar17 < *(ushort *)(iVar9 + (iVar19 >> 1) * 4)) {
      for (puVar20 = (ushort *)(iVar9 + 4);
          (puVar20 < (ushort *)(iVar9 + -0x10 + iVar19 * 4) && (puVar20[6] <= uVar17));
          puVar20 = puVar20 + 8) {
        *(byte *)((uint)puVar20[1] + (int)piVar18) =
             *(byte *)((uint)puVar20[1] + (int)piVar18) ^ bVar21;
        *(byte *)((uint)puVar20[3] + (int)piVar18) =
             *(byte *)((uint)puVar20[3] + (int)piVar18) ^ bVar21;
        *(byte *)((uint)puVar20[5] + (int)piVar18) =
             *(byte *)((uint)puVar20[5] + (int)piVar18) ^ bVar21;
        *(byte *)((uint)puVar20[7] + (int)piVar18) =
             *(byte *)((uint)puVar20[7] + (int)piVar18) ^ bVar21;
      }
      uVar5 = *puVar20;
      while (uVar5 <= uVar17) {
                    /* WARNING: Read-only address (ram,0x00a9a660) is written */
        *(byte *)((uint)puVar20[1] + (int)piVar18) =
             *(byte *)((uint)puVar20[1] + (int)piVar18) ^ bVar21;
        puVar1 = puVar20 + 2;
        puVar20 = puVar20 + 2;
        uVar5 = *puVar1;
      }
                    /* WARNING: Read-only address (ram,0x00a9a660) is written */
      uVar5 = *puVar20;
      uVar17 = *(uint *)((int)local_f0 + (int)local_104);
      *(ushort **)((int)apuStack_a8 + (int)local_104 + 0xc) = puVar20;
      while (uVar5 <= uVar17) {
        *(byte *)((uint)puVar20[1] + (int)piVar18) =
             *(byte *)((uint)puVar20[1] + (int)piVar18) ^ ((byte)*puVar20 & 1) - 1 & bVar21;
        puVar1 = puVar20 + 2;
        puVar20 = puVar20 + 2;
        uVar5 = *puVar1;
      }
      *(ushort **)((int)apuStack_a8 + (int)local_104) = puVar20;
    }
    else {
      puVar20 = (ushort *)(iVar9 + -8 + iVar19 * 4);
      if ((ushort *)(iVar9 + 0x10U) <= puVar20) {
        uVar11 = *(uint *)((int)local_f0 + (int)local_104);
        do {
          if (puVar20[-6] <= uVar11) break;
          *(byte *)((uint)puVar20[1] + (int)piVar18) =
               *(byte *)((uint)puVar20[1] + (int)piVar18) ^ bVar21;
          *(byte *)((uint)puVar20[-1] + (int)piVar18) =
               *(byte *)((uint)puVar20[-1] + (int)piVar18) ^ bVar21;
          *(byte *)((uint)puVar20[-3] + (int)piVar18) =
               *(byte *)((uint)puVar20[-3] + (int)piVar18) ^ bVar21;
          *(byte *)((uint)puVar20[-5] + (int)piVar18) =
               *(byte *)((uint)puVar20[-5] + (int)piVar18) ^ bVar21;
          puVar20 = puVar20 + -8;
        } while ((ushort *)(iVar9 + 0x10U) <= puVar20);
      }
      uVar11 = *(uint *)((int)local_f0 + (int)local_104);
      uVar5 = *puVar20;
      while (uVar11 < uVar5) {
                    /* WARNING: Read-only address (ram,0x00a9a660) is written */
        *(byte *)((uint)puVar20[1] + (int)piVar18) =
             *(byte *)((uint)puVar20[1] + (int)piVar18) ^ bVar21;
        puVar1 = puVar20 + -2;
        puVar20 = puVar20 + -2;
        uVar5 = *puVar1;
      }
                    /* WARNING: Read-only address (ram,0x00a9a660) is written */
      *(ushort **)((int)apuStack_a8 + (int)local_104) = puVar20 + 2;
      uVar5 = *puVar20;
      while (uVar17 < uVar5) {
        *(byte *)((uint)puVar20[1] + (int)piVar18) =
             *(byte *)((uint)puVar20[1] + (int)piVar18) ^ -((byte)*puVar20 & 1) & bVar21;
        puVar1 = puVar20 + -2;
        puVar20 = puVar20 + -2;
        uVar5 = *puVar1;
      }
      *(ushort **)((int)apuStack_a8 + (int)local_104 + 0xc) = puVar20 + 2;
    }
    local_104 = (float)((int)local_104 + 4);
    local_f8 = local_f8 + 3;
    bVar21 = bVar21 << 1;
  } while ((int)local_104 < 0xc);
  iVar19 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar19 + 0x1a4) < *(uint *)(iVar19 + 0x1a8)) {
    puVar10 = *(undefined4 **)(local_c4 + 0x1a4);
    *puVar10 = "StStartOverlaps";
    uVar14 = rdtsc();
    puVar10[1] = (int)uVar14;
    *(undefined4 **)(local_c4 + 0x1a4) = puVar10 + 3;
  }
  iVar19 = *(int *)(local_ac + 0x44);
  local_104 = 1.0;
  if (piVar18 < piVar18 + (iVar19 >> 2) + 1) {
    local_108 = (uint *)(*(int *)(local_ac + 0x40) + 0x1c);
    piVar23 = piVar18;
    do {
      if ((*piVar23 + 0x1010101U & 0x8080808) != 0) {
        if ((((char)*piVar23 == '\a') && ((local_108[-4] & 1) == 0)) &&
           (fVar25 = (float10)(**(code **)(*param_2 + 4))(local_108[-4],0),
           fVar25 <= (float10)local_104)) {
          local_104 = (float)fVar25;
        }
        if (((*(char *)((int)piVar23 + 1) == '\a') && ((*local_108 & 1) == 0)) &&
           (fVar25 = (float10)(**(code **)(*param_2 + 4))(*local_108,0),
           fVar25 <= (float10)local_104)) {
          local_104 = (float)fVar25;
        }
        if (((*(char *)((int)piVar23 + 2) == '\a') && ((local_108[4] & 1) == 0)) &&
           (fVar25 = (float10)(**(code **)(*param_2 + 4))(local_108[4],0),
           fVar25 <= (float10)local_104)) {
          local_104 = (float)fVar25;
        }
        if (((*(char *)((int)piVar23 + 3) == '\a') && ((local_108[8] & 1) == 0)) &&
           (fVar25 = (float10)(**(code **)(*param_2 + 4))(local_108[8],0),
           fVar25 <= (float10)local_104)) {
          local_104 = (float)fVar25;
        }
      }
      local_108 = local_108 + 0x10;
      piVar23 = piVar23 + 1;
    } while (piVar23 < piVar18 + (iVar19 >> 2) + 1);
  }
  iVar19 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar19 + 0x1a4) < *(uint *)(iVar19 + 0x1a8)) {
    puVar10 = *(undefined4 **)(local_c4 + 0x1a4);
    *puVar10 = "StWalk";
    uVar14 = rdtsc();
    puVar10[1] = (int)uVar14;
    *(undefined4 **)(local_c4 + 0x1a4) = puVar10 + 3;
  }
  afStack_20[0] = param_1[4] - *param_1;
  afStack_20[1] = param_1[5] - param_1[1];
  afStack_20[2] = param_1[6] - param_1[2];
  afStack_20[3] = param_1[7] - param_1[3];
  pfVar24 = (float *)(local_ac + 0x30);
  iVar19 = 0;
  do {
    fVar15 = *(float *)((int)afStack_20 + iVar19) * *pfVar24;
    if (fVar15 <= 0.0) {
      uVar12 = *(undefined4 *)((int)apuStack_a8 + iVar19 + 0xc);
      *(undefined4 *)((int)aiStack_6c + iVar19) = 0xfffffffc;
      uVar13 = *(undefined4 *)((int)apuStack_a8 + iVar19);
      *(undefined4 *)((int)apuStack_a8 + iVar19) = uVar12;
      uVar12 = *(undefined4 *)((int)local_40 + iVar19);
      *(undefined4 *)((int)local_40 + iVar19) = *(undefined4 *)((int)local_60 + iVar19);
      *(undefined4 *)((int)local_60 + iVar19) = uVar12;
      uVar12 = *(undefined4 *)((int)local_e0 + iVar19);
      *(undefined4 *)((int)apuStack_a8 + iVar19 + 0xc) = uVar13;
      uVar13 = *(undefined4 *)((int)local_f0 + iVar19);
      *(undefined4 *)((int)local_f0 + iVar19) = uVar12;
      iVar9 = *(int *)((int)apuStack_a8 + iVar19 + 0xc);
      *(undefined4 *)((int)local_e0 + iVar19) = uVar13;
      *(int *)((int)apuStack_a8 + iVar19 + 0xc) = iVar9 + -4;
      *(int *)((int)apuStack_a8 + iVar19) = *(int *)((int)apuStack_a8 + iVar19) + -4;
      pbVar4 = abStack_4c + iVar19;
      pbVar4[0] = 1;
      pbVar4[1] = 0;
      pbVar4[2] = 0;
      pbVar4[3] = 0;
      pbVar4 = abStack_2c + iVar19;
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      pbVar4[2] = 0;
      pbVar4[3] = 0;
    }
    else {
      *(undefined4 *)((int)aiStack_6c + iVar19) = 4;
      pbVar4 = abStack_4c + iVar19;
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      pbVar4[2] = 0;
      pbVar4[3] = 0;
      pbVar4 = abStack_2c + iVar19;
      pbVar4[0] = 1;
      pbVar4[1] = 0;
      pbVar4[2] = 0;
      pbVar4[3] = 0;
    }
    if ((ABS(fVar15) < (pfVar24[-8] + *(float *)((int)local_60 + iVar19)) * *pfVar24 * 1.1920929e-07
        ) || (ABS(fVar15) <
              (*(float *)((int)pfVar24 + (int)param_1 + (-0x20 - local_ac)) + pfVar24[-8]) *
              *pfVar24 * 1.1920929e-07)) {
      *(undefined4 *)((int)afStack_90 + iVar19) = 0;
      *(undefined4 *)((int)local_c0 + iVar19) = 0xc0000000;
      *(undefined4 *)((int)afStack_80 + iVar19) = 0xc0000000;
    }
    else {
      fVar15 = 1.0 / fVar15;
      *(float *)((int)afStack_90 + iVar19) = fVar15;
      *(float *)((int)local_c0 + iVar19) =
           ((pfVar24[-8] + *(float *)((int)local_60 + iVar19)) * *pfVar24 -
           *(float *)(local_ac + 0x7c)) * fVar15;
      *(float *)((int)afStack_80 + iVar19) =
           ((*(float *)((int)local_40 + iVar19) + pfVar24[-8]) * *pfVar24 -
           *(float *)(local_ac + 0x7c)) * fVar15;
    }
    iVar19 = iVar19 + 4;
    pfVar24 = pfVar24 + 1;
  } while (iVar19 < 0xc);
  uVar5 = *apuStack_a8[5];
  uVar6 = *apuStack_a8[0];
  local_f0[0] = (float)*apuStack_a8[3] * afStack_90[0] - local_c0[0];
  uVar7 = *apuStack_a8[1];
  local_f0[1] = (float)*apuStack_a8[4] * afStack_90[1] - local_c0[1];
  uVar8 = *apuStack_a8[2];
  *(char *)piVar18 = '\b';
  local_f0[2] = (float)uVar5 * afStack_90[2] - local_c0[2];
  local_e0[0] = (float)uVar6 * afStack_90[0] - afStack_80[0];
  local_e0[1] = (float)uVar7 * afStack_90[1] - afStack_80[1];
  local_e0[2] = (float)uVar8 * afStack_90[2] - afStack_80[2];
  if (local_f0[1] <= local_f0[0]) {
    local_108 = (uint *)0x1;
    if (local_f0[1] < local_f0[2]) goto LAB_008e36a8;
  }
  else if (local_f0[0] < local_f0[2]) {
    local_108 = (uint *)0x0;
    goto LAB_008e36a8;
  }
  local_108 = (uint *)0x2;
LAB_008e36a8:
  if (local_e0[1] <= local_e0[0]) {
    iVar19 = 1;
    if (local_e0[2] <= local_e0[1]) goto LAB_008e36de;
  }
  else {
    if (local_e0[2] <= local_e0[0]) goto LAB_008e36de;
    iVar19 = 0;
  }
LAB_008e36e3:
  while( true ) {
    pfVar24 = local_e0 + iVar19;
    pfVar3 = local_f0 + (int)local_108;
    if (local_f0[(int)local_108] <= local_e0[iVar19]) break;
    if (local_104 < *pfVar24) goto LAB_008e38f5;
    do {
      puVar20 = apuStack_a8[iVar19];
      uVar17 = (uint)puVar20[1];
      bVar21 = *(byte *)((int)piVar18 + uVar17) ^
               ((byte)*puVar20 & 1 ^ abStack_2c[iVar19 * 4]) << (sbyte)iVar19;
      *(byte *)((int)piVar18 + uVar17) = bVar21;
      if (6 < bVar21) {
        if (uVar17 == 0) {
          *pfVar24 = 2.0;
          goto LAB_008e37b6;
        }
        uVar17 = *(uint *)(uVar17 * 0x10 + *(int *)(local_ac + 0x40) + 0xc);
        if (((uVar17 & 1) == 0) &&
           (fVar25 = (float10)(**(code **)(*param_2 + 4))(uVar17,0), fVar25 <= (float10)local_104))
        {
          local_104 = (float)fVar25;
        }
      }
      uVar5 = *puVar20;
      puVar20 = (ushort *)(aiStack_6c[iVar19] + (int)puVar20);
      uVar6 = *puVar20;
      apuStack_a8[iVar19] = puVar20;
    } while (uVar5 == uVar6);
    *pfVar24 = (float)*puVar20 * afStack_90[iVar19] - afStack_80[iVar19];
LAB_008e37b6:
    if (local_e0[1] <= local_e0[0]) {
      if (local_e0[2] <= local_e0[1]) goto LAB_008e36de;
      iVar19 = 1;
    }
    else if (local_e0[0] < local_e0[2]) {
      iVar19 = 0;
    }
    else {
LAB_008e36de:
      iVar19 = 2;
    }
  }
  if (local_104 < *pfVar3) {
LAB_008e38f5:
    iVar19 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar19 + 0x1a4) < *(uint *)(iVar19 + 0x1a8)) {
      puVar10 = *(undefined4 **)(local_c4 + 0x1a4);
      *puVar10 = &DAT_00a6a630;
      uVar14 = rdtsc();
      puVar10[1] = (int)uVar14;
      *(undefined4 **)(local_c4 + 0x1a4) = puVar10 + 3;
    }
    piVar23 = *(int **)(local_c4 + 0x19c);
    piVar23[8] = (int)piVar18;
    if (piVar18 == (int *)piVar23[10]) {
      (**(code **)(*piVar23 + 0x10))(piVar18);
    }
    return;
  }
  bVar21 = abStack_4c[(int)local_108 * 4];
  do {
    puVar20 = apuStack_a8[(int)local_108 + 3];
    bVar22 = *(byte *)((int)piVar18 + (uint)puVar20[1]) ^
             ((byte)*puVar20 & 1 ^ bVar21) << (sbyte)local_108;
    *(byte *)((int)piVar18 + (uint)puVar20[1]) = bVar22;
    if (8 < bVar22) {
      *pfVar3 = 2.0;
      goto LAB_008e38a1;
    }
    uVar5 = *puVar20;
    puVar20 = (ushort *)((int)puVar20 + aiStack_6c[(int)local_108]);
    uVar6 = *puVar20;
    apuStack_a8[(int)local_108 + 3] = puVar20;
  } while (uVar5 == uVar6);
  *pfVar3 = (float)*puVar20 * afStack_90[(int)local_108] - local_c0[(int)local_108];
LAB_008e38a1:
  if (local_f0[1] <= local_f0[0]) {
    if (local_f0[1] < local_f0[2]) {
      local_108 = (uint *)0x1;
      goto LAB_008e36e3;
    }
  }
  else if (local_f0[0] < local_f0[2]) {
    local_108 = (uint *)0x0;
    goto LAB_008e36e3;
  }
  local_108 = (uint *)0x2;
  goto LAB_008e36e3;
}



void FUN_008e3a90(float *param_1,float *param_2,int *param_3)

{
  ushort *puVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int in_ECX;
  float *pfVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int local_3c;
  int local_38;
  uint auStack_2c [3];
  float local_20 [7];
  
  local_20[0] = *param_1;
  local_20[1] = param_1[1];
  local_20[3] = param_1[3];
  local_20[2] = param_1[2];
  pfVar7 = (float *)(in_ECX + 0x30);
  iVar4 = 0;
  do {
    uVar9 = (int)ROUND(*pfVar7 * *(float *)((int)local_20 + iVar4)) & 0xfffffffe;
    *(uint *)((int)auStack_2c + iVar4) = uVar9;
    iVar5 = iVar4 + 4;
    fVar2 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    *(float *)((int)local_20 + iVar4) = (float)(int)uVar9 / fVar2;
    iVar4 = iVar5;
  } while (iVar5 < 0xc);
  *param_2 = local_20[0];
  param_2[1] = local_20[1];
  param_2[2] = local_20[2];
  param_2[3] = local_20[3];
  piVar8 = (int *)(in_ECX + 0x50);
  local_38 = 0;
  do {
    uVar9 = auStack_2c[local_38];
    local_3c = 1;
    if (1 < *piVar8 + -1) {
      do {
        puVar1 = (ushort *)(piVar8[-1] + local_3c * 4);
        uVar6 = (uint)*puVar1;
        if ((1 < uVar6) && (uVar6 < 0xfffc)) {
          uVar10 = uVar9 + uVar6;
          if ((int)uVar10 < 0) {
            uVar3 = puVar1[1];
            uVar10 = uVar6 & 1;
            iVar4 = *(int *)(in_ECX + 0x40);
            if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
              FUN_008a6ee0(param_3,4);
            }
            *(undefined4 *)(*param_3 + param_3[1] * 4) =
                 *(undefined4 *)((uint)uVar3 * 0x10 + 0xc + iVar4);
LAB_008e3be3:
            param_3[1] = param_3[1] + 1;
          }
          else if (0xfffb < (int)uVar10) {
            iVar4 = *(int *)(in_ECX + 0x40);
            uVar10 = uVar6 & 1 | 0xfffc;
            uVar3 = puVar1[1];
            if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
              FUN_008a6ee0(param_3,4);
            }
            *(undefined4 *)(*param_3 + param_3[1] * 4) =
                 *(undefined4 *)((uint)uVar3 * 0x10 + 0xc + iVar4);
            goto LAB_008e3be3;
          }
          *puVar1 = (ushort)uVar10;
        }
        local_3c = local_3c + 1;
      } while (local_3c < *piVar8 + -1);
    }
    local_38 = local_38 + 1;
    piVar8 = piVar8 + 3;
    if (2 < local_38) {
      return;
    }
  } while( true );
}



void FUN_008e3c30(int param_1,int param_2,int *param_3,undefined4 param_4,uint param_5,uint param_6,
                 undefined4 param_7,undefined4 param_8)

{
  ushort *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ushort *puVar7;
  ushort uVar8;
  short sVar9;
  uint uVar10;
  ushort uVar11;
  
  uVar8 = *(ushort *)(param_3 + 2);
  uVar10 = (uint)uVar8;
  puVar1 = (ushort *)(*(int *)(param_1 + 0x4c) + uVar10 * 4);
  uVar11 = (ushort)param_4;
  uVar3 = puVar1[-2];
  while (param_5 < uVar3) {
    piVar6 = (int *)((uint)puVar1[-1] * 0x10 + param_2);
    *puVar1 = uVar3;
    puVar1[1] = puVar1[-1];
    if ((uVar3 & 1) == 0) {
      *(short *)(piVar6 + 2) = (short)uVar10;
    }
    else {
      iVar4 = *param_3;
      iVar5 = param_3[1];
      *(short *)((int)piVar6 + 10) = (short)uVar10;
      if (((piVar6[1] - iVar4 | iVar5 - *piVar6) & 0x80008000U) == 0) {
        FUN_008e1280(param_4,piVar6,param_7);
      }
    }
    puVar1[-1] = uVar11;
    uVar10 = uVar10 - 1;
    uVar8 = (ushort)uVar10;
    uVar3 = puVar1[-4];
    puVar1 = puVar1 + -2;
  }
  *(ushort *)(param_3 + 2) = uVar8;
  *puVar1 = (ushort)param_5;
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x4c) + (uint)*(ushort *)((int)param_3 + 10) * 4);
  sVar9 = 0;
  uVar8 = *(ushort *)(puVar2 + 1);
  while (uVar8 < param_6) {
    sVar9 = sVar9 + 1;
    piVar6 = (int *)((uint)*(ushort *)((int)puVar2 + 6) * 0x10 + param_2);
    *puVar2 = puVar2[1];
    *(ushort *)((int)puVar2 + 6) = uVar11;
    if ((uVar8 & 1) == 0) {
      iVar4 = *param_3;
      iVar5 = param_3[1];
      *(short *)(piVar6 + 2) = (short)piVar6[2] + -1;
      if (((piVar6[1] - iVar4 | iVar5 - *piVar6) & 0x80008000U) == 0) {
        FUN_008e1280(param_4,piVar6,param_7);
      }
    }
    else {
      *(short *)((int)piVar6 + 10) = *(short *)((int)piVar6 + 10) + -1;
    }
    uVar8 = *(ushort *)(puVar2 + 2);
    puVar2 = puVar2 + 1;
  }
  *(short *)((int)param_3 + 10) = *(short *)((int)param_3 + 10) + sVar9;
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x4c) + (uint)*(ushort *)((int)param_3 + 10) * 4);
  sVar9 = 0;
  uVar8 = *(ushort *)(puVar2 + -1);
  while (param_6 < uVar8) {
    piVar6 = (int *)((uint)*(ushort *)((int)puVar2 + -2) * 0x10 + param_2);
    sVar9 = sVar9 + -1;
    *puVar2 = puVar2[-1];
    *(ushort *)((int)puVar2 + -2) = uVar11;
    if ((uVar8 & 1) == 0) {
      iVar4 = *param_3;
      iVar5 = param_3[1];
      *(short *)(piVar6 + 2) = (short)piVar6[2] + 1;
      if (((piVar6[1] - iVar4 | iVar5 - *piVar6) & 0x80008000U) == 0) {
        FUN_008e1310(param_4,piVar6,param_8);
      }
    }
    else {
      *(short *)((int)piVar6 + 10) = *(short *)((int)piVar6 + 10) + 1;
    }
    uVar8 = *(ushort *)(puVar2 + -2);
    puVar2 = puVar2 + -1;
  }
  *(short *)((int)param_3 + 10) = *(short *)((int)param_3 + 10) + sVar9;
  *(short *)puVar2 = (short)param_6;
  puVar1 = (ushort *)(*(int *)(param_1 + 0x4c) + (uint)*(ushort *)(param_3 + 2) * 4);
  uVar10 = (uint)puVar1[2];
  sVar9 = 0;
  if (param_5 <= uVar10) {
    *(short *)(param_3 + 2) = (short)param_3[2];
    *puVar1 = (ushort)param_5;
    return;
  }
  do {
    puVar7 = puVar1 + 2;
    piVar6 = (int *)((uint)puVar1[3] * 0x10 + param_2);
    sVar9 = sVar9 + 1;
    *(undefined4 *)puVar1 = *(undefined4 *)puVar7;
    puVar1[3] = uVar11;
    if ((uVar10 & 1) == 0) {
      *(short *)(piVar6 + 2) = (short)piVar6[2] + -1;
    }
    else {
      iVar4 = param_3[1];
      iVar5 = *param_3;
      *(short *)((int)piVar6 + 10) = *(short *)((int)piVar6 + 10) + -1;
      if (((iVar4 - *piVar6 | piVar6[1] - iVar5) & 0x80008000U) == 0) {
        FUN_008e1310(param_4,piVar6,param_8);
      }
    }
    uVar10 = (uint)puVar1[4];
    puVar1 = puVar7;
  } while (uVar10 < param_5);
  *(short *)(param_3 + 2) = (short)param_3[2] + sVar9;
  *puVar7 = (ushort)param_5;
  return;
}



void FUN_008e3e90(int param_1,int param_2,ushort *param_3,ushort param_4,uint param_5,uint param_6,
                 int *param_7,int *param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort uVar8;
  uint uVar9;
  short sVar10;
  undefined2 *puVar11;
  short *psVar12;
  
  uVar8 = *param_3;
  uVar9 = (uint)uVar8;
  uVar4 = *(ushort *)(*(int *)(param_1 + 0x58) + -4 + uVar9 * 4);
  puVar3 = (ushort *)(*(int *)(param_1 + 0x58) + uVar9 * 4);
  while (param_5 < uVar4) {
    puVar11 = (undefined2 *)((uint)puVar3[-1] * 0x10 + param_2);
    *puVar3 = uVar4;
    puVar3[1] = puVar3[-1];
    if ((uVar4 & 1) == 0) {
      *puVar11 = (short)uVar9;
    }
    else {
      uVar8 = param_3[3];
      uVar4 = param_3[5];
      uVar5 = param_3[4];
      uVar6 = param_3[1];
      puVar11[2] = (short)uVar9;
      if (-1 < (short)(uVar4 - puVar11[4] | uVar8 - puVar11[1] | puVar11[5] - uVar5 |
                      puVar11[3] - uVar6)) {
        if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_7,8);
        }
        puVar1 = (undefined4 *)(*param_7 + param_7[1] * 8);
        param_7[1] = param_7[1] + 1;
        *puVar1 = *(undefined4 *)(param_3 + 6);
        puVar1[1] = *(undefined4 *)(puVar11 + 6);
      }
    }
    puVar3[-1] = param_4;
    uVar9 = uVar9 - 1;
    uVar8 = (ushort)uVar9;
    uVar4 = puVar3[-4];
    puVar3 = puVar3 + -2;
  }
  *param_3 = uVar8;
  *puVar3 = (ushort)param_5;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x58) + (uint)param_3[2] * 4);
  sVar10 = 0;
  uVar8 = *(ushort *)(puVar1 + 1);
  while (uVar8 < param_6) {
    sVar10 = sVar10 + 1;
    *puVar1 = puVar1[1];
    psVar12 = (short *)((uint)*(ushort *)((int)puVar1 + 6) * 0x10 + param_2);
    *(ushort *)((int)puVar1 + 6) = param_4;
    if ((uVar8 & 1) == 0) {
      uVar8 = param_3[3];
      uVar4 = param_3[5];
      uVar5 = param_3[4];
      uVar6 = param_3[1];
      *psVar12 = *psVar12 + -1;
      if (-1 < (short)(uVar4 - psVar12[4] | uVar8 - psVar12[1] | psVar12[5] - uVar5 |
                      psVar12[3] - uVar6)) {
        if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_7,8);
        }
        puVar2 = (undefined4 *)(*param_7 + param_7[1] * 8);
        param_7[1] = param_7[1] + 1;
        *puVar2 = *(undefined4 *)(param_3 + 6);
        puVar2[1] = *(undefined4 *)(psVar12 + 6);
      }
    }
    else {
      psVar12[2] = psVar12[2] + -1;
    }
    uVar8 = *(ushort *)(puVar1 + 2);
    puVar1 = puVar1 + 1;
  }
  param_3[2] = param_3[2] + sVar10;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x58) + (uint)param_3[2] * 4);
  sVar10 = 0;
  uVar8 = *(ushort *)(puVar1 + -1);
  while (param_6 < uVar8) {
    sVar10 = sVar10 + -1;
    psVar12 = (short *)((uint)*(ushort *)((int)puVar1 + -2) * 0x10 + param_2);
    *puVar1 = puVar1[-1];
    *(ushort *)((int)puVar1 + -2) = param_4;
    if ((uVar8 & 1) == 0) {
      uVar8 = param_3[3];
      uVar4 = param_3[5];
      uVar5 = param_3[4];
      uVar6 = param_3[1];
      *psVar12 = *psVar12 + 1;
      if (-1 < (short)(uVar4 - psVar12[4] | uVar8 - psVar12[1] | psVar12[5] - uVar5 |
                      psVar12[3] - uVar6)) {
        if (param_8[1] == (param_8[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_8,8);
        }
        puVar2 = (undefined4 *)(*param_8 + param_8[1] * 8);
        param_8[1] = param_8[1] + 1;
        *puVar2 = *(undefined4 *)(param_3 + 6);
        puVar2[1] = *(undefined4 *)(psVar12 + 6);
      }
    }
    else {
      psVar12[2] = psVar12[2] + 1;
    }
    uVar8 = *(ushort *)(puVar1 + -2);
    puVar1 = puVar1 + -1;
  }
  param_3[2] = param_3[2] + sVar10;
  *(short *)puVar1 = (short)param_6;
  puVar3 = (ushort *)(*(int *)(param_1 + 0x58) + (uint)*param_3 * 4);
  uVar9 = (uint)puVar3[2];
  sVar10 = 0;
  if (param_5 <= uVar9) {
    *param_3 = *param_3;
    *puVar3 = (ushort)param_5;
    return;
  }
  do {
    puVar7 = puVar3 + 2;
    psVar12 = (short *)((uint)puVar3[3] * 0x10 + param_2);
    sVar10 = sVar10 + 1;
    *(undefined4 *)puVar3 = *(undefined4 *)puVar7;
    puVar3[3] = param_4;
    if ((uVar9 & 1) == 0) {
      *psVar12 = *psVar12 + -1;
    }
    else {
      uVar8 = param_3[3];
      uVar4 = param_3[5];
      uVar5 = param_3[4];
      uVar6 = param_3[1];
      psVar12[2] = psVar12[2] + -1;
      if (-1 < (short)(uVar4 - psVar12[4] | uVar8 - psVar12[1] | psVar12[5] - uVar5 |
                      psVar12[3] - uVar6)) {
        if (param_8[1] == (param_8[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_8,8);
        }
        puVar1 = (undefined4 *)(*param_8 + param_8[1] * 8);
        param_8[1] = param_8[1] + 1;
        *puVar1 = *(undefined4 *)(param_3 + 6);
        puVar1[1] = *(undefined4 *)(psVar12 + 6);
      }
    }
    uVar9 = (uint)puVar3[4];
    puVar3 = puVar7;
  } while (uVar9 < param_5);
  *param_3 = *param_3 + sVar10;
  *puVar7 = (ushort)param_5;
  return;
}



void FUN_008e4210(int param_1,int param_2,short *param_3,ushort param_4,uint param_5,uint param_6,
                 int *param_7,int *param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  ushort *puVar9;
  ushort uVar10;
  uint uVar11;
  short sVar12;
  short *psVar13;
  
  uVar10 = param_3[1];
  uVar11 = (uint)uVar10;
  uVar4 = *(ushort *)(*(int *)(param_1 + 100) + -4 + uVar11 * 4);
  puVar3 = (ushort *)(*(int *)(param_1 + 100) + uVar11 * 4);
  while (param_5 < uVar4) {
    psVar13 = (short *)((uint)puVar3[-1] * 0x10 + param_2);
    *puVar3 = uVar4;
    puVar3[1] = puVar3[-1];
    if ((uVar4 & 1) == 0) {
      psVar13[1] = (short)uVar11;
    }
    else {
      sVar12 = param_3[4];
      sVar5 = param_3[5];
      sVar6 = *param_3;
      sVar7 = param_3[2];
      psVar13[3] = (short)uVar11;
      if (-1 < (short)(sVar5 - psVar13[4] | psVar13[5] - sVar12 | psVar13[2] - sVar6 |
                      sVar7 - *psVar13)) {
        if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_7,8);
        }
        puVar1 = (undefined4 *)(*param_7 + param_7[1] * 8);
        param_7[1] = param_7[1] + 1;
        *puVar1 = *(undefined4 *)(param_3 + 6);
        puVar1[1] = *(undefined4 *)(psVar13 + 6);
      }
    }
    puVar3[-1] = param_4;
    uVar11 = uVar11 - 1;
    uVar10 = (ushort)uVar11;
    uVar4 = puVar3[-4];
    puVar3 = puVar3 + -2;
  }
  param_3[1] = uVar10;
  *puVar3 = (ushort)param_5;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 100) + (uint)(ushort)param_3[3] * 4);
  sVar12 = 0;
  uVar10 = *(ushort *)(puVar1 + 1);
  while (uVar10 < param_6) {
    sVar12 = sVar12 + 1;
    *puVar1 = puVar1[1];
    psVar13 = (short *)((uint)*(ushort *)((int)puVar1 + 6) * 0x10 + param_2);
    *(ushort *)((int)puVar1 + 6) = param_4;
    if ((uVar10 & 1) == 0) {
      sVar5 = param_3[4];
      sVar6 = param_3[5];
      sVar7 = *param_3;
      sVar8 = param_3[2];
      psVar13[1] = psVar13[1] + -1;
      if (-1 < (short)(sVar6 - psVar13[4] | psVar13[5] - sVar5 | psVar13[2] - sVar7 |
                      sVar8 - *psVar13)) {
        if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_7,8);
        }
        puVar2 = (undefined4 *)(*param_7 + param_7[1] * 8);
        param_7[1] = param_7[1] + 1;
        *puVar2 = *(undefined4 *)(param_3 + 6);
        puVar2[1] = *(undefined4 *)(psVar13 + 6);
      }
    }
    else {
      psVar13[3] = psVar13[3] + -1;
    }
    uVar10 = *(ushort *)(puVar1 + 2);
    puVar1 = puVar1 + 1;
  }
  param_3[3] = param_3[3] + sVar12;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 100) + (uint)(ushort)param_3[3] * 4);
  sVar12 = 0;
  uVar10 = *(ushort *)(puVar1 + -1);
  while (param_6 < uVar10) {
    sVar12 = sVar12 + -1;
    psVar13 = (short *)((uint)*(ushort *)((int)puVar1 + -2) * 0x10 + param_2);
    *puVar1 = puVar1[-1];
    *(ushort *)((int)puVar1 + -2) = param_4;
    if ((uVar10 & 1) == 0) {
      sVar5 = param_3[4];
      sVar6 = param_3[5];
      sVar7 = *param_3;
      sVar8 = param_3[2];
      psVar13[1] = psVar13[1] + 1;
      if (-1 < (short)(sVar6 - psVar13[4] | psVar13[5] - sVar5 | psVar13[2] - sVar7 |
                      sVar8 - *psVar13)) {
        if (param_8[1] == (param_8[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_8,8);
        }
        puVar2 = (undefined4 *)(*param_8 + param_8[1] * 8);
        param_8[1] = param_8[1] + 1;
        *puVar2 = *(undefined4 *)(param_3 + 6);
        puVar2[1] = *(undefined4 *)(psVar13 + 6);
      }
    }
    else {
      psVar13[3] = psVar13[3] + 1;
    }
    uVar10 = *(ushort *)(puVar1 + -2);
    puVar1 = puVar1 + -1;
  }
  param_3[3] = param_3[3] + sVar12;
  *(short *)puVar1 = (short)param_6;
  puVar3 = (ushort *)(*(int *)(param_1 + 100) + (uint)(ushort)param_3[1] * 4);
  uVar11 = (uint)puVar3[2];
  sVar12 = 0;
  if (param_5 <= uVar11) {
    param_3[1] = param_3[1];
    *puVar3 = (ushort)param_5;
    return;
  }
  do {
    puVar9 = puVar3 + 2;
    psVar13 = (short *)((uint)puVar3[3] * 0x10 + param_2);
    sVar12 = sVar12 + 1;
    *(undefined4 *)puVar3 = *(undefined4 *)puVar9;
    puVar3[3] = param_4;
    if ((uVar11 & 1) == 0) {
      psVar13[1] = psVar13[1] + -1;
    }
    else {
      sVar5 = param_3[4];
      sVar6 = param_3[5];
      sVar7 = param_3[2];
      sVar8 = *param_3;
      psVar13[3] = psVar13[3] + -1;
      if (-1 < (short)(sVar6 - psVar13[4] | psVar13[5] - sVar5 | sVar7 - *psVar13 |
                      psVar13[2] - sVar8)) {
        if (param_8[1] == (param_8[2] & 0x3fffffffU)) {
          FUN_008a6ee0(param_8,8);
        }
        puVar1 = (undefined4 *)(*param_8 + param_8[1] * 8);
        param_8[1] = param_8[1] + 1;
        *puVar1 = *(undefined4 *)(param_3 + 6);
        puVar1[1] = *(undefined4 *)(psVar13 + 6);
      }
    }
    uVar11 = (uint)puVar3[4];
    puVar3 = puVar9;
  } while (uVar11 < param_5);
  param_3[1] = param_3[1] + sVar12;
  *puVar9 = (ushort)param_5;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4590(uint param_1,float *param_2,int param_3)

{
  uint uVar1;
  int in_ECX;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = param_1 + param_3 * 4;
  for (; param_1 < uVar1; param_1 = param_1 + 4) {
    auVar2._0_4_ = (*param_2 + *(float *)(in_ECX + 0x10)) * *(float *)(in_ECX + 0x30);
    auVar2._4_4_ = (param_2[1] + *(float *)(in_ECX + 0x14)) * *(float *)(in_ECX + 0x34);
    auVar2._8_4_ = (param_2[2] + *(float *)(in_ECX + 0x18)) * *(float *)(in_ECX + 0x38);
    auVar2._12_4_ = (param_2[3] + *(float *)(in_ECX + 0x1c)) * *(float *)(in_ECX + 0x3c);
    auVar2 = minps(auVar2,_DAT_00b2fc70);
    maxps(auVar2,_DAT_00a9a660);
    auVar3._0_4_ = (param_2[4] + *(float *)(in_ECX + 0x20)) * *(float *)(in_ECX + 0x30);
    auVar3._4_4_ = (param_2[5] + *(float *)(in_ECX + 0x24)) * *(float *)(in_ECX + 0x34);
    auVar3._8_4_ = (param_2[6] + *(float *)(in_ECX + 0x28)) * *(float *)(in_ECX + 0x38);
    auVar3._12_4_ = (param_2[7] + *(float *)(in_ECX + 0x2c)) * *(float *)(in_ECX + 0x3c);
    auVar2 = minps(auVar3,_DAT_00b2fc70);
    maxps(auVar2,_DAT_00a9a660);
    FUN_008e3c30();
    FUN_008e3e90();
    FUN_008e4210();
    param_2 = param_2 + 8;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4730(float *param_1,float *param_2,int param_3)

{
  int *piVar1;
  undefined2 uVar2;
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
  undefined2 uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 *in_ECX;
  int iVar21;
  int iVar22;
  undefined2 *puVar23;
  undefined2 *puVar24;
  undefined1 auVar25 [16];
  undefined4 local_44;
  float local_40;
  int local_3c;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9a710;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0x80000000;
  piVar1 = in_ECX + 0x13;
  *piVar1 = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0x80000000;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0x80000000;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0x80000000;
  if (param_3 == 0) {
    param_3 = 1;
  }
  iVar21 = -1;
  for (; 0 < param_3; param_3 = param_3 >> 1) {
    iVar21 = iVar21 + 1;
  }
  if ((in_ECX[0x12] & 0x3fffffff) < 0xff) {
    uVar16 = (in_ECX[0x12] & 0x3fffffff) * 2;
    if (uVar16 < 0x100) {
      uVar16 = 0xff;
    }
    FUN_008a6e40(in_ECX + 0x10,uVar16,0x10);
  }
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0x3f800000;
  in_ECX[0xd] = 0x3f800000;
  in_ECX[0xe] = 0x3f800000;
  in_ECX[0xf] = 0x3f800000;
  local_40 = 10.0;
  local_44 = 11.0;
  iVar22 = 0x17;
  do {
    fVar3 = (local_44 + local_40) * 0.5;
    fVar4 = fVar3 + 1.0;
    auVar25._0_4_ = (fVar4 + 0.0) * 1.0;
    auVar25._4_4_ = (fVar4 + 0.0) * 1.0;
    auVar25._8_4_ = (fVar4 + 0.0) * 1.0;
    auVar25._12_4_ = (fVar4 + 0.0) * 1.0;
    auVar25 = minps(auVar25,_DAT_00b2fc70);
    auVar25 = maxps(auVar25,_DAT_00a9a660);
    fVar4 = fVar3;
    if (((uint)(auVar25._0_4_ + 65536.0) >> 7 & 0xffff | 1) < 0xc) {
      fVar4 = local_44;
      local_40 = fVar3;
    }
    local_44 = fVar4;
    iVar22 = iVar22 + -1;
  } while (iVar22 != 0);
  in_ECX[0x1f] = (local_44 + local_40) * 0.5 - 11.0;
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar7 = *param_2;
  fVar8 = param_2[1];
  fVar9 = param_2[2];
  fVar10 = param_2[3];
  in_ECX[0xc] = 0x477ffc00;
  in_ECX[0xd] = 0x477ffc00;
  in_ECX[0xe] = 0x477ffc00;
  in_ECX[0xf] = 0x477ffc00;
  in_ECX[0xc] = (float)in_ECX[0xc] * (1.0 / (fVar7 - fVar3));
  in_ECX[0xd] = (float)in_ECX[0xd] * (1.0 / (fVar8 - fVar4));
  in_ECX[0xe] = (float)in_ECX[0xe] * (1.0 / (fVar9 - fVar5));
  in_ECX[0xf] = (float)in_ECX[0xf] * 0.0;
  fVar11 = *param_1;
  fVar12 = param_1[1];
  fVar13 = param_1[2];
  fVar14 = param_1[3];
  in_ECX[4] = -fVar11;
  in_ECX[5] = -fVar12;
  in_ECX[6] = -fVar13;
  in_ECX[7] = -fVar14;
  in_ECX[8] = -fVar11 + (fVar7 - fVar3) * 1.525972e-05;
  in_ECX[9] = -fVar12 + (fVar8 - fVar4) * 1.525972e-05;
  in_ECX[10] = -fVar13 + (fVar9 - fVar5) * 1.525972e-05;
  in_ECX[0xb] = -fVar14 + (fVar10 - fVar6) * 1.525972e-05;
  in_ECX[0xf] = 0;
  in_ECX[7] = 0;
  in_ECX[0xb] = 0;
  if (in_ECX[0x11] == (in_ECX[0x12] & 0x3fffffff)) {
    FUN_008a6ee0(in_ECX + 0x10,0x10);
  }
  puVar23 = (undefined2 *)(in_ECX[0x11] * 0x10 + in_ECX[0x10]);
  in_ECX[0x11] = in_ECX[0x11] + 1;
  puVar23[1] = 0;
  *puVar23 = 0;
  puVar23[4] = 0;
  iVar17 = 1 << ((byte)iVar21 & 0x1f);
  iVar22 = iVar17 * 2 + 0x1fe;
  if ((int)(in_ECX[0x15] & 0x3fffffff) < iVar22) {
    iVar18 = (in_ECX[0x15] & 0x3fffffff) * 2;
    if (iVar18 <= iVar22) {
      iVar18 = iVar22;
    }
    FUN_008a6e40(piVar1,iVar18,4);
  }
  uVar16 = in_ECX[0x18] & 0x3fffffff;
  if (uVar16 < 0x200) {
    uVar19 = uVar16 * 2;
    if (uVar16 == 0x100 || uVar19 < 0x200) {
      uVar19 = 0x200;
    }
    FUN_008a6e40(in_ECX + 0x16,uVar19,4);
  }
  uVar16 = in_ECX[0x1b] & 0x3fffffff;
  if (uVar16 < 0x200) {
    uVar19 = uVar16 * 2;
    if (uVar16 == 0x100 || uVar19 < 0x200) {
      uVar19 = 0x200;
    }
    FUN_008a6e40(in_ECX + 0x19,uVar19,4);
  }
  *(undefined4 *)(*piVar1 + in_ECX[0x14] * 4) = 0;
  in_ECX[0x14] = in_ECX[0x14] + 1;
  *(undefined4 *)(in_ECX[0x16] + in_ECX[0x17] * 4) = 0;
  in_ECX[0x17] = in_ECX[0x17] + 1;
  *(undefined4 *)(in_ECX[0x19] + in_ECX[0x1a] * 4) = 0;
  in_ECX[0x1a] = in_ECX[0x1a] + 1;
  in_ECX[0x1d] = iVar21;
  iVar17 = iVar17 + -1;
  in_ECX[0x1c] = iVar17;
  in_ECX[0x1e] = 0;
  if (iVar17 != 0) {
    uVar20 = (**(code **)*DAT_00ba7d98)(iVar17 * 0x10,0x1e);
    in_ECX[0x1e] = uVar20;
  }
  local_3c = 0;
  if (0 < (int)in_ECX[0x1c]) {
    local_40 = 0.0;
    do {
      puVar24 = (undefined2 *)(in_ECX[0x1e] + (int)local_40);
      if (puVar24 == (undefined2 *)0x0) {
        puVar24 = (undefined2 *)0x0;
      }
      else {
        *(undefined4 *)(puVar24 + 2) = 0;
        *(undefined4 *)(puVar24 + 4) = 0;
        *(undefined4 *)(puVar24 + 6) = 0x80000000;
      }
      uVar2 = *(undefined2 *)(in_ECX + 0x11);
      iVar21 = local_3c + 1 << (0x10U - (char)in_ECX[0x1d] & 0x1f);
      *puVar24 = uVar2;
      uVar15 = (undefined2)iVar21;
      puVar24[1] = uVar15;
      local_44 = (float)CONCAT22(uVar2,uVar15);
      uVar20 = local_44;
      if (in_ECX[0x11] == (in_ECX[0x12] & 0x3fffffff)) {
        FUN_008a6ee0(in_ECX + 0x10,0x10);
      }
      puVar24 = (undefined2 *)(in_ECX[0x11] * 0x10 + in_ECX[0x10]);
      in_ECX[0x11] = in_ECX[0x11] + 1;
      local_44._0_1_ = (undefined1)iVar21;
      local_44._1_3_ = SUB43(uVar20,1);
      local_44 = (float)(CONCAT31(local_44._1_3_,(undefined1)local_44) | 1);
      puVar24[4] = *(undefined2 *)(in_ECX + 0x14);
      *(undefined4 *)(*piVar1 + in_ECX[0x14] * 4) = uVar20;
      in_ECX[0x14] = in_ECX[0x14] + 1;
      puVar24[5] = *(undefined2 *)(in_ECX + 0x14);
      *(float *)(*piVar1 + in_ECX[0x14] * 4) = local_44;
      in_ECX[0x14] = in_ECX[0x14] + 1;
      *(uint *)(puVar24 + 6) = (uint)local_40 | 1;
      puVar24[1] = 0;
      *puVar24 = 0;
      puVar24[3] = 1;
      puVar24[2] = 1;
      local_3c = local_3c + 1;
      local_40 = (float)((int)local_40 + 0x10);
    } while (local_3c < (int)in_ECX[0x1c]);
  }
  puVar23[5] = *(undefined2 *)(in_ECX + 0x14);
  puVar23[2] = *(undefined2 *)(in_ECX + 0x17);
  puVar23[3] = *(undefined2 *)(in_ECX + 0x1a);
  *(undefined4 *)(*piVar1 + in_ECX[0x14] * 4) = 0xfffd;
  in_ECX[0x14] = in_ECX[0x14] + 1;
  *(undefined4 *)(in_ECX[0x16] + in_ECX[0x17] * 4) = 0xfffd;
  in_ECX[0x17] = in_ECX[0x17] + 1;
  *(undefined4 *)(in_ECX[0x19] + in_ECX[0x1a] * 4) = 0xfffd;
  in_ECX[0x1a] = in_ECX[0x1a] + 1;
  return;
}



void FUN_008e4bc0(int param_1,int *param_2,char param_3)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 **ppuVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  int *piVar9;
  ushort *puVar10;
  short *psVar11;
  int iVar12;
  int *piVar13;
  short sVar14;
  int *piVar15;
  int *piVar16;
  byte *pbVar17;
  int local_430;
  undefined1 *local_418;
  uint local_414;
  uint local_410;
  undefined1 local_40c [512];
  undefined1 *local_20c;
  uint local_208;
  uint local_204;
  undefined1 local_200 [512];
  
  local_20c = local_200;
  local_204 = 0x80000100;
  local_410 = 0x80000100;
  iVar3 = *(int *)(in_ECX + 0x50);
  local_208 = 0;
  local_414 = 0;
  iVar4 = *(int *)(in_ECX + 0x4c);
  local_418 = local_40c;
  pbVar17 = (byte *)(iVar4 + 4);
  do {
    if ((byte *)(iVar4 + -4 + iVar3 * 4) <= pbVar17) {
      if (-1 < (int)local_410) {
        FUN_008a75d0(local_418,(local_410 & 0x3fffffff) << 1,0x14);
      }
      if (-1 < (int)local_204) {
        FUN_008a75d0(local_20c,(local_204 & 0x3fffffff) << 1,0x14);
      }
      return;
    }
    uVar2 = *(ushort *)(pbVar17 + 2);
    uVar5 = 1 << ((byte)uVar2 & 0x1f) & *(uint *)(param_1 + ((int)(uint)uVar2 >> 5) * 4);
    if ((*pbVar17 & 1) == 0) {
      piVar13 = (int *)((uint)uVar2 * 0x10 + *(int *)(in_ECX + 0x40));
      local_430 = 0;
      if (0 < (int)local_208) {
        do {
          iVar8 = *(int *)(in_ECX + 0x40);
          piVar15 = (int *)((uint)*(ushort *)(local_20c + local_430 * 2) * 0x10 + iVar8);
          if (((*(int *)((uint)*(ushort *)(local_20c + local_430 * 2) * 0x10 + 4 + iVar8) - *piVar13
               | piVar13[1] - *piVar15) & 0x80008000U) == 0) {
            piVar9 = piVar13;
            piVar16 = piVar15;
            if (((*(byte *)(piVar13 + 3) & 1) == 0) &&
               (piVar9 = piVar15, piVar16 = piVar13, (*(byte *)(piVar15 + 3) & 1) == 0)) {
              if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                FUN_008a6ee0(param_2,8);
              }
              piVar9 = (int *)(*param_2 + param_2[1] * 8);
              param_2[1] = param_2[1] + 1;
              *piVar9 = piVar15[3];
              piVar9[1] = piVar13[3];
            }
            else {
              iVar7 = (piVar9[3] & 0xfffffffeU) + *(int *)(in_ECX + 0x78);
              sVar14 = (short)((int)piVar16 - iVar8 >> 4);
              if (param_3 == '\0') {
                iVar8 = 0;
                if (0 < *(int *)(iVar7 + 8)) {
                  psVar11 = *(short **)(iVar7 + 4);
                  do {
                    if (*psVar11 == sVar14) goto LAB_008e4dba;
                    iVar8 = iVar8 + 1;
                    psVar11 = psVar11 + 1;
                  } while (iVar8 < *(int *)(iVar7 + 8));
                }
                iVar8 = -1;
LAB_008e4dba:
                iVar12 = *(int *)(iVar7 + 8) + -1;
                *(int *)(iVar7 + 8) = iVar12;
                *(undefined2 *)(*(int *)(iVar7 + 4) + iVar8 * 2) =
                     *(undefined2 *)(*(int *)(iVar7 + 4) + iVar12 * 2);
              }
              else {
                if (*(uint *)(iVar7 + 8) == (*(uint *)(iVar7 + 0xc) & 0x3fffffff)) {
                  FUN_008a6ee0((int *)(iVar7 + 4),2);
                }
                *(short *)(*(int *)(iVar7 + 4) + *(int *)(iVar7 + 8) * 2) = sVar14;
                *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
              }
            }
          }
          local_430 = local_430 + 1;
        } while (local_430 < (int)local_208);
      }
      if (uVar5 == 0) {
        if (local_414 == (local_410 & 0x3fffffff)) {
          FUN_008a6ee0(&local_418,2);
        }
        *(ushort *)(local_418 + local_414 * 2) = uVar2;
        local_414 = local_414 + 1;
      }
      else {
        local_430 = 0;
        if (0 < (int)local_414) {
          do {
            iVar8 = *(int *)(in_ECX + 0x40);
            piVar15 = (int *)((uint)*(ushort *)(local_418 + local_430 * 2) * 0x10 + iVar8);
            if (((*(int *)((uint)*(ushort *)(local_418 + local_430 * 2) * 0x10 + 4 + iVar8) -
                  *piVar13 | piVar13[1] - *piVar15) & 0x80008000U) == 0) {
              piVar9 = piVar13;
              piVar16 = piVar15;
              if (((*(byte *)(piVar13 + 3) & 1) == 0) &&
                 (piVar9 = piVar15, piVar16 = piVar13, (*(byte *)(piVar15 + 3) & 1) == 0)) {
                if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                  FUN_008a6ee0(param_2,8);
                }
                piVar9 = (int *)(*param_2 + param_2[1] * 8);
                param_2[1] = param_2[1] + 1;
                *piVar9 = piVar15[3];
                piVar9[1] = piVar13[3];
              }
              else {
                iVar7 = (piVar9[3] & 0xfffffffeU) + *(int *)(in_ECX + 0x78);
                sVar14 = (short)((int)piVar16 - iVar8 >> 4);
                if (param_3 == '\0') {
                  iVar8 = 0;
                  if (0 < *(int *)(iVar7 + 8)) {
                    psVar11 = *(short **)(iVar7 + 4);
                    do {
                      if (*psVar11 == sVar14) goto LAB_008e4f00;
                      iVar8 = iVar8 + 1;
                      psVar11 = psVar11 + 1;
                    } while (iVar8 < *(int *)(iVar7 + 8));
                  }
                  iVar8 = -1;
LAB_008e4f00:
                  iVar12 = *(int *)(iVar7 + 8) + -1;
                  *(int *)(iVar7 + 8) = iVar12;
                  *(undefined2 *)(*(int *)(iVar7 + 4) + iVar8 * 2) =
                       *(undefined2 *)(*(int *)(iVar7 + 4) + iVar12 * 2);
                }
                else {
                  if (*(uint *)(iVar7 + 8) == (*(uint *)(iVar7 + 0xc) & 0x3fffffff)) {
                    FUN_008a6ee0((int *)(iVar7 + 4),2);
                  }
                  *(short *)(*(int *)(iVar7 + 4) + *(int *)(iVar7 + 8) * 2) = sVar14;
                  *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
                }
              }
            }
            local_430 = local_430 + 1;
          } while (local_430 < (int)local_414);
        }
        if (local_208 == (local_204 & 0x3fffffff)) {
          FUN_008a6ee0(&local_20c,2);
        }
        *(ushort *)(local_20c + local_208 * 2) = uVar2;
        local_208 = local_208 + 1;
      }
    }
    else {
      ppuVar6 = &local_20c;
      if (uVar5 == 0) {
        ppuVar6 = &local_418;
      }
      iVar8 = 0;
      if (0 < (int)ppuVar6[1]) {
        puVar10 = (ushort *)*ppuVar6;
        do {
          if (*puVar10 == uVar2) goto LAB_008e4c8a;
          iVar8 = iVar8 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar8 < (int)ppuVar6[1]);
      }
      iVar8 = -1;
LAB_008e4c8a:
      puVar1 = ppuVar6[1] + -1;
      ppuVar6[1] = puVar1;
      *(undefined2 *)(*ppuVar6 + iVar8 * 2) = *(undefined2 *)(*ppuVar6 + (int)puVar1 * 2);
    }
    pbVar17 = pbVar17 + 4;
  } while( true );
}



void FUN_008e5020(undefined4 param_1)

{
  int iVar1;
  undefined4 unaff_retaddr;
  undefined4 uVar2;
  
  uVar2 = 0x1e;
  iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x80,0x1e);
  *(undefined2 *)(iVar1 + 4) = 0x80;
  FUN_008e4730(uVar2,unaff_retaddr,param_1);
  return;
}



void FUN_008e5050(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar3 = 0;
  *in_ECX = &PTR_FUN_00a9a710;
  if (0 < (int)in_ECX[0x1c]) {
    iVar4 = 0;
    do {
      puVar5 = (undefined4 *)(iVar4 + 4 + in_ECX[0x1e]);
      uVar2 = puVar5[2];
      if (-1 < (int)uVar2) {
        FUN_008a75d0(*puVar5,(uVar2 & 0x3fffffff) << 1,0x14);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < (int)in_ECX[0x1c]);
  }
  (**(code **)(*DAT_00ba7d98 + 4))(in_ECX[0x1e]);
  puVar5 = in_ECX + 0x1c;
  iVar3 = 3;
  do {
    piVar1 = puVar5 + -1;
    puVar5 = puVar5 + -3;
    if (-1 < *piVar1) {
      FUN_008a75d0(*puVar5,*piVar1 << 2,0x14);
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (-1 < (int)in_ECX[0x12]) {
    FUN_008a75d0(in_ECX[0x10],in_ECX[0x12] << 4,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e5130(int *param_1,int *param_2,undefined4 param_3)

{
  short *psVar1;
  float *pfVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int in_ECX;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int unaff_FS_OFFSET;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int local_9c;
  int local_98;
  int local_8c;
  int local_84;
  uint local_80;
  int local_7c [3];
  undefined2 local_70;
  undefined2 uStack_6e;
  undefined2 local_6c;
  undefined2 local_66;
  undefined2 local_64;
  int local_60;
  int local_5c [3];
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (0 < param_2[1]) {
    iVar14 = *(int *)(in_ECX + 0x44);
    local_8c = param_1[1];
    iVar15 = *(int *)(in_ECX + 0x44) + local_8c;
    uVar6 = *(uint *)(in_ECX + 0x48) & 0x3fffffff;
    if ((int)uVar6 < iVar15) {
      iVar16 = uVar6 * 2;
      if (iVar16 <= iVar15) {
        iVar16 = iVar15;
      }
      FUN_008a6e40(in_ECX + 0x40,iVar16,0x10);
    }
    *(int *)(in_ECX + 0x44) = iVar15;
    local_5c[0] = *(int *)(in_ECX + 0x50);
    local_5c[2] = *(undefined4 *)(in_ECX + 0x68);
    iVar16 = local_8c * 2;
    local_5c[1] = *(undefined4 *)(in_ECX + 0x5c);
    iVar17 = *(int *)(in_ECX + 0x50);
    iVar15 = iVar16 + iVar17;
    uVar6 = *(uint *)(in_ECX + 0x54) & 0x3fffffff;
    if ((int)uVar6 < iVar15) {
      iVar13 = uVar6 * 2;
      if (iVar13 <= iVar15) {
        iVar13 = iVar15;
      }
      FUN_008a6e40((int *)(in_ECX + 0x4c),iVar13,4);
    }
    *(int *)(in_ECX + 0x50) = iVar15;
    local_7c[0] = *(int *)(in_ECX + 0x4c) + iVar17 * 4;
    iVar17 = *(int *)(in_ECX + 0x5c);
    iVar15 = iVar16 + iVar17;
    uVar6 = *(uint *)(in_ECX + 0x60) & 0x3fffffff;
    if ((int)uVar6 < iVar15) {
      iVar13 = uVar6 * 2;
      if (iVar13 <= iVar15) {
        iVar13 = iVar15;
      }
      FUN_008a6e40((int *)(in_ECX + 0x58),iVar13,4);
    }
    *(int *)(in_ECX + 0x5c) = iVar15;
    local_7c[1] = *(int *)(in_ECX + 0x58) + iVar17 * 4;
    iVar15 = *(int *)(in_ECX + 0x68);
    iVar16 = iVar16 + iVar15;
    uVar6 = *(uint *)(in_ECX + 0x6c) & 0x3fffffff;
    if ((int)uVar6 < iVar16) {
      iVar17 = uVar6 * 2;
      if (iVar17 <= iVar16) {
        iVar17 = iVar16;
      }
      FUN_008a6e40((int *)(in_ECX + 100),iVar17,4);
    }
    local_7c[2] = *(int *)(in_ECX + 100) + iVar15 * 4;
    *(int *)(in_ECX + 0x68) = iVar16;
    local_84 = 0;
    if (0 < local_8c) {
      local_60 = local_7c[1] - local_7c[0];
      local_9c = 0;
      local_98 = iVar14 << 4;
      puVar11 = (undefined2 *)(local_7c[0] + 4);
      puVar12 = (undefined2 *)(local_7c[1] + 6);
      local_80 = local_7c[2] - local_7c[1];
      iVar15 = iVar14;
      do {
        pfVar2 = (float *)(*param_2 + local_9c);
        iVar16 = *param_2 + local_9c;
        auVar18._0_4_ = (*pfVar2 + *(float *)(in_ECX + 0x10)) * *(float *)(in_ECX + 0x30);
        auVar18._4_4_ = (pfVar2[1] + *(float *)(in_ECX + 0x14)) * *(float *)(in_ECX + 0x34);
        auVar18._8_4_ = (pfVar2[2] + *(float *)(in_ECX + 0x18)) * *(float *)(in_ECX + 0x38);
        auVar18._12_4_ = (pfVar2[3] + *(float *)(in_ECX + 0x1c)) * *(float *)(in_ECX + 0x3c);
        auVar18 = minps(auVar18,_DAT_00b2fc70);
        auVar18 = maxps(auVar18,_DAT_00a9a660);
        local_30 = auVar18._0_4_ + 65536.0;
        fStack_2c = auVar18._4_4_ + 65536.0;
        fStack_28 = auVar18._8_4_ + 65536.0;
        fStack_24 = auVar18._12_4_ + 65536.0;
        local_70 = (undefined2)((uint)local_30 >> 7);
        uStack_6e = (undefined2)((uint)fStack_2c >> 7);
        local_6c = (undefined2)((uint)fStack_28 >> 7);
        auVar19._0_4_ =
             (*(float *)(iVar16 + 0x10) + *(float *)(in_ECX + 0x20)) * *(float *)(in_ECX + 0x30);
        auVar19._4_4_ =
             (*(float *)(iVar16 + 0x14) + *(float *)(in_ECX + 0x24)) * *(float *)(in_ECX + 0x34);
        auVar19._8_4_ =
             (*(float *)(iVar16 + 0x18) + *(float *)(in_ECX + 0x28)) * *(float *)(in_ECX + 0x38);
        auVar19._12_4_ =
             (*(float *)(iVar16 + 0x1c) + *(float *)(in_ECX + 0x2c)) * *(float *)(in_ECX + 0x3c);
        auVar18 = minps(auVar19,_DAT_00b2fc70);
        auVar18 = maxps(auVar18,_DAT_00a9a660);
        local_20 = auVar18._0_4_ + 65536.0;
        fStack_1c = auVar18._4_4_ + 65536.0;
        fStack_18 = auVar18._8_4_ + 65536.0;
        fStack_14 = auVar18._12_4_ + 65536.0;
        local_66 = (undefined2)((uint)fStack_1c >> 7);
        local_40 = (uint)local_20 >> 7 & 0xffff | 1;
        local_64 = (undefined2)((uint)fStack_18 >> 7);
        local_3c = (uint)fStack_1c >> 7 & 0xffff | 1;
        local_50 = (uint)local_30 >> 7 & 0xfffe;
        local_4c = (uint)fStack_2c >> 7 & 0xfffe;
        local_38 = (uint)fStack_18 >> 7 & 0xffff | 1;
        local_48 = (uint)fStack_28 >> 7 & 0xfffe;
        piVar3 = *(int **)(*param_1 + local_84 * 4);
        *(int **)(*(int *)(in_ECX + 0x40) + 0xc + local_98) = piVar3;
        *piVar3 = iVar15;
        puVar11[-2] = (undefined2)local_50;
        uVar5 = (undefined2)iVar15;
        puVar11[-1] = uVar5;
        *puVar11 = (undefined2)local_40;
        puVar11[1] = uVar5;
        puVar12[-3] = (undefined2)local_4c;
        puVar12[-2] = uVar5;
        *(undefined2 *)(local_60 + (int)puVar11) = (undefined2)local_3c;
        *puVar12 = uVar5;
        *(undefined2 *)(local_7c[2] + local_84 * 8) = (undefined2)local_48;
        *(undefined2 *)(local_7c[2] + 2 + local_84 * 8) = uVar5;
        *(undefined2 *)((local_7c[2] - local_7c[0]) + (int)puVar11) = (undefined2)local_38;
        *(undefined2 *)(local_80 + (int)puVar12) = uVar5;
        local_9c = local_9c + 0x20;
        local_84 = local_84 + 1;
        local_98 = local_98 + 0x10;
        iVar15 = iVar15 + 1;
        puVar11 = puVar11 + 4;
        puVar12 = puVar12 + 4;
      } while (local_84 < local_8c);
    }
    uVar4 = *(undefined4 *)(in_ECX + 0x40);
    iVar15 = 0;
    do {
      iVar16 = local_8c * 2;
      local_80 = local_80 & 0xffffff00;
      if (1 < iVar16) {
        FUN_008e1200(local_7c[iVar15],0,iVar16 + -1,local_80);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < 3);
    iVar15 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    piVar3 = *(int **)(iVar15 + 0x19c);
    local_98 = piVar3[8];
    uVar7 = local_5c[0] * 4 + 0x10U & 0xfffffff0;
    uVar6 = local_98 + uVar7;
    if ((uint)piVar3[0xb] < uVar6) {
      local_98 = (**(code **)(*piVar3 + 0xc))(uVar7);
    }
    else {
      piVar3[8] = uVar6;
    }
    iVar17 = 0;
    do {
      FUN_008e0c90(uVar4,local_5c[iVar17],iVar16,iVar17,local_98);
      iVar17 = iVar17 + 1;
    } while (iVar17 < 3);
    piVar3 = *(int **)(iVar15 + 0x19c);
    piVar3[8] = local_98;
    if (local_98 == piVar3[10]) {
      (**(code **)(*piVar3 + 0x10))(local_98);
    }
    if ((*(int *)(in_ECX + 0x70) != 0) && (iVar17 = 0, 0 < *(int *)(in_ECX + 0x70))) {
      iVar13 = 0;
      do {
        iVar8 = (uint)*(ushort *)(*(int *)(in_ECX + 0x78) + iVar13) * 0x10 + *(int *)(in_ECX + 0x40)
        ;
        iVar13 = iVar13 + 0x10;
        psVar1 = (short *)(iVar8 + 4);
        *psVar1 = *psVar1 + (short)iVar16;
        psVar1 = (short *)(iVar8 + 6);
        *psVar1 = *psVar1 + (short)iVar16;
        iVar17 = iVar17 + 1;
      } while (iVar17 < *(int *)(in_ECX + 0x70));
    }
    iVar16 = *(int *)(in_ECX + 0x44);
    piVar3 = *(int **)(iVar15 + 0x19c);
    puVar9 = (undefined4 *)piVar3[8];
    uVar7 = (iVar16 >> 5) * 4 + 0x30U & 0xfffffff0;
    uVar6 = (int)puVar9 + uVar7;
    if ((uint)piVar3[0xb] < uVar6) {
      puVar9 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(uVar7);
    }
    else {
      piVar3[8] = uVar6;
    }
    iVar16 = iVar16 >> 7;
    if (-1 < iVar16) {
      iVar16 = iVar16 + 1;
      puVar10 = puVar9;
      do {
        iVar16 = iVar16 + -1;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10 = puVar10 + 4;
      } while (iVar16 != 0);
    }
    if (0 < local_8c) {
      do {
        puVar9[iVar14 >> 5] = puVar9[iVar14 >> 5] ^ 1 << ((byte)iVar14 & 0x1f);
        iVar14 = iVar14 + 1;
        local_8c = local_8c + -1;
      } while (local_8c != 0);
    }
    FUN_008e4bc0(puVar9,param_3,1);
    piVar3 = *(int **)(iVar15 + 0x19c);
    piVar3[8] = (int)puVar9;
    if (puVar9 == (undefined4 *)piVar3[10]) {
      (**(code **)(*piVar3 + 0x10))(puVar9);
    }
  }
  return;
}



void FUN_008e5630(int *param_1,undefined4 param_2)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int in_ECX;
  int *extraout_ECX;
  int *piVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int unaff_FS_OFFSET;
  int iStack_34;
  undefined4 local_2c;
  int iStack_28;
  int local_24;
  int local_20;
  int local_1c;
  int aiStack_18 [5];
  
  iVar2 = param_1[1];
  iVar12 = *(int *)(in_ECX + 0x44);
  local_1c = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  piVar9 = *(int **)(local_1c + 0x19c);
  piVar5 = (int *)piVar9[8];
  uVar4 = (iVar12 >> 5) * 4 + 0x30U & 0xfffffff0;
  uVar8 = (int)piVar5 + uVar4;
  local_24 = iVar12;
  local_20 = in_ECX;
  if ((uint)piVar9[0xb] < uVar8) {
    piVar5 = (int *)(**(code **)(*piVar9 + 0xc))(uVar4);
    piVar9 = extraout_ECX;
  }
  else {
    piVar9[8] = uVar8;
  }
  if (-1 < iVar12 >> 7) {
    iVar12 = (iVar12 >> 7) + 1;
    piVar3 = piVar5;
    do {
      piVar9 = piVar3;
      iVar12 = iVar12 + -1;
      *piVar9 = 0;
      piVar9[1] = 0;
      piVar9[2] = 0;
      piVar9[3] = 0;
      piVar3 = piVar9 + 4;
    } while (iVar12 != 0);
  }
  iVar12 = 0;
  if (0 < iVar2) {
    do {
      uVar8 = **(uint **)(*param_1 + iVar12 * 4);
      piVar9 = (int *)(uVar8 & 0x1f);
      piVar5[(int)uVar8 >> 5] = piVar5[(int)uVar8 >> 5] ^ 1 << (sbyte)piVar9;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar2);
  }
  FUN_008e4bc0(piVar5,param_2,(uint)piVar9 & 0xffffff00);
  piVar9 = *(int **)(local_1c + 0x19c);
  piVar9[8] = (int)piVar5;
  if (piVar5 == (int *)piVar9[10]) {
    (**(code **)(*piVar9 + 0x10))(piVar5);
  }
  iVar12 = local_24;
  iVar6 = 0;
  local_2c = 0;
  if (0 < iVar2) {
    do {
      *(undefined4 **)(**(int **)(*param_1 + iVar6 * 4) * 0x10 + 0xc + *(int *)(in_ECX + 0x40)) =
           &local_2c;
      iVar10 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      **(undefined4 **)(*param_1 + iVar10) = 0;
    } while (iVar6 < iVar2);
  }
  piVar9 = *(int **)(local_1c + 0x19c);
  iVar6 = piVar9[8];
  uVar4 = local_24 * 4 + 0x10U & 0xfffffff0;
  uVar8 = iVar6 + uVar4;
  if ((uint)piVar9[0xb] < uVar8) {
    iVar6 = (**(code **)(*piVar9 + 0xc))(uVar4);
  }
  else {
    piVar9[8] = uVar8;
  }
  iVar12 = iVar12 + -1;
  iVar10 = 0;
  if (-1 < iVar12) {
    iStack_34 = iVar12 * 0x10;
    local_24 = 0;
    do {
      puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x40) + iStack_34);
      if ((undefined4 *)puVar7[3] == &local_2c) {
        *(undefined4 *)(iVar6 + iVar12 * 4) = 0xffffffff;
        iVar12 = iVar12 + -1;
        iStack_34 = iStack_34 + -0x10;
      }
      else {
        puVar13 = (undefined4 *)(*(int *)(in_ECX + 0x40) + local_24);
        if ((undefined4 *)puVar13[3] == &local_2c) {
          *puVar13 = *puVar7;
          puVar13[1] = puVar7[1];
          puVar13[2] = puVar7[2];
          puVar13[3] = puVar7[3];
          *(int *)(iVar6 + iVar12 * 4) = iVar10;
          *(undefined4 *)(iVar6 + iVar10 * 4) = 0xffffffff;
          piVar9 = (int *)puVar13[3];
          in_ECX = local_20;
          if (((uint)piVar9 & 1) == 0) {
            *piVar9 = iVar10;
            iVar12 = iVar12 + -1;
            iStack_34 = iStack_34 + -0x10;
          }
          else {
            *(short *)(((uint)piVar9 & 0xfffffffe) + *(int *)(local_20 + 0x78)) = (short)iVar10;
            iVar12 = iVar12 + -1;
            iStack_34 = iStack_34 + -0x10;
          }
        }
        else {
          *(int *)(iVar6 + iVar10 * 4) = iVar10;
        }
        iVar10 = iVar10 + 1;
        local_24 = local_24 + 0x10;
      }
    } while (iVar10 <= iVar12);
  }
  piVar9 = (int *)(in_ECX + 0x40);
  local_24 = iVar12 + 1;
  uVar8 = *(uint *)(in_ECX + 0x48) & 0x3fffffff;
  iStack_28 = iVar6;
  aiStack_18[0] = iVar6;
  if ((int)uVar8 < local_24) {
    iVar12 = uVar8 * 2;
    if (iVar12 <= local_24) {
      iVar12 = local_24;
    }
    FUN_008a6e40(piVar9,iVar12,0x10);
  }
  *(int *)(in_ECX + 0x44) = local_24;
  FUN_008e13a0(*piVar9,0,aiStack_18);
  FUN_008e13a0(*piVar9,1,aiStack_18);
  FUN_008e13a0(*piVar9,2,aiStack_18);
  if (*(int *)(in_ECX + 0x70) != 0) {
    iStack_28 = 0;
    if (0 < *(int *)(in_ECX + 0x70)) {
      local_24 = 0;
      do {
        puVar11 = (ushort *)(*(int *)(in_ECX + 0x78) + local_24);
        iVar12 = (uint)*puVar11 * 0x10 + *piVar9;
        psVar1 = (short *)(iVar12 + 4);
        *psVar1 = *psVar1 + (short)iVar2 * -2;
        psVar1 = (short *)(iVar12 + 6);
        *psVar1 = *psVar1 + (short)iVar2 * -2;
        iVar12 = 0;
        if (0 < *(int *)(puVar11 + 4)) {
          do {
            *(undefined2 *)(*(int *)(puVar11 + 2) + iVar12 * 2) =
                 *(undefined2 *)(iVar6 + (uint)*(ushort *)(*(int *)(puVar11 + 2) + iVar12 * 2) * 4);
            iVar12 = iVar12 + 1;
            in_ECX = local_20;
          } while (iVar12 < *(int *)(puVar11 + 4));
        }
        local_24 = local_24 + 0x10;
        iStack_28 = iStack_28 + 1;
      } while (iStack_28 < *(int *)(in_ECX + 0x70));
    }
  }
  piVar9 = *(int **)(local_1c + 0x19c);
  piVar9[8] = iVar6;
  if (iVar6 == piVar9[10]) {
    (**(code **)(*piVar9 + 0x10))(iVar6);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e5950(float *param_1,int *param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int in_ECX;
  uint *puVar18;
  ushort *puVar19;
  byte *pbVar20;
  int iVar21;
  uint uVar22;
  int unaff_FS_OFFSET;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int *local_74;
  int *local_64;
  int local_60;
  int local_5c;
  undefined1 uStack_57;
  undefined2 uStack_56;
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_3c;
  
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  piVar16 = *(int **)(iVar3 + 0x19c);
  local_64 = (int *)piVar16[8];
  uVar4 = *(uint *)(in_ECX + 0x44);
  uVar8 = uVar4 * 4 + 0x10 & 0xfffffff0;
  uVar22 = (int)local_64 + uVar8;
  local_3c = 0;
  if ((uint)piVar16[0xb] < uVar22) {
    local_64 = (int *)(**(code **)(*piVar16 + 0xc))(uVar8);
  }
  else {
    piVar16[8] = uVar22;
  }
  iVar21 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar21 + 0x1a4) < *(uint *)(iVar21 + 0x1a8)) {
    puVar5 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar5 = "LtquerySingleAabb";
    puVar5[3] = "marker";
    uVar7 = rdtsc();
    puVar5[1] = (int)uVar7;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar5 + 4;
  }
  iVar21 = *(int *)(in_ECX + 0x44);
  piVar16 = *(int **)(iVar3 + 0x19c);
  puVar9 = (uint *)piVar16[8];
  uVar8 = (iVar21 >> 5) * 4 + 0x30U & 0xfffffff0;
  uVar22 = (int)puVar9 + uVar8;
  if ((uint)piVar16[0xb] < uVar22) {
    puVar9 = (uint *)(**(code **)(*piVar16 + 0xc))(uVar8);
  }
  else {
    piVar16[8] = uVar22;
  }
  iVar21 = iVar21 >> 7;
  if (-1 < iVar21) {
    iVar21 = iVar21 + 1;
    puVar10 = puVar9;
    do {
      iVar21 = iVar21 + -1;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10 = puVar10 + 4;
    } while (iVar21 != 0);
  }
  auVar23._0_4_ = (*param_1 + *(float *)(in_ECX + 0x10)) * *(float *)(in_ECX + 0x30);
  auVar23._4_4_ = (param_1[1] + *(float *)(in_ECX + 0x14)) * *(float *)(in_ECX + 0x34);
  auVar23._8_4_ = (param_1[2] + *(float *)(in_ECX + 0x18)) * *(float *)(in_ECX + 0x38);
  auVar23._12_4_ = (param_1[3] + *(float *)(in_ECX + 0x1c)) * *(float *)(in_ECX + 0x3c);
  auVar23 = minps(auVar23,_DAT_00b2fc70);
  auVar23 = maxps(auVar23,_DAT_00a9a660);
  uVar22 = (uint)(auVar23._0_4_ + 65536.0) >> 7 & 0xfffe;
  auVar24._0_4_ = (param_1[4] + *(float *)(in_ECX + 0x20)) * *(float *)(in_ECX + 0x30);
  auVar24._4_4_ = (param_1[5] + *(float *)(in_ECX + 0x24)) * *(float *)(in_ECX + 0x34);
  auVar24._8_4_ = (param_1[6] + *(float *)(in_ECX + 0x28)) * *(float *)(in_ECX + 0x38);
  auVar24._12_4_ = (param_1[7] + *(float *)(in_ECX + 0x2c)) * *(float *)(in_ECX + 0x3c);
  auVar24 = minps(auVar24,_DAT_00b2fc70);
  auVar24 = maxps(auVar24,_DAT_00a9a660);
  puVar11 = (ushort *)(*(int *)(in_ECX + 0x4c) + 4);
  if ((*(int *)(in_ECX + 0x70) != 0) &&
     (iVar21 = (int)uVar22 >> (0x10U - (char)*(undefined4 *)(in_ECX + 0x74) & 0x1f), 0 < iVar21)) {
    iVar21 = iVar21 * 0x10;
    uVar2 = *(ushort *)(iVar21 + -0x10 + *(int *)(in_ECX + 0x78));
    puVar11 = (ushort *)(iVar21 + -0x10 + *(int *)(in_ECX + 0x78));
    iVar21 = (int)(uint)uVar2 >> 5;
    puVar9[iVar21] = puVar9[iVar21] ^ 1 << ((byte)uVar2 & 0x1f);
    local_60 = *(int *)(puVar11 + 4);
    puVar19 = *(ushort **)(puVar11 + 2);
    if (-1 < local_60 + -1) {
      do {
        uVar2 = *puVar19;
        iVar21 = (int)(uint)uVar2 >> 5;
        puVar19 = puVar19 + 1;
        puVar9[iVar21] = puVar9[iVar21] ^ 1 << ((byte)uVar2 & 0x1f);
        local_60 = local_60 + -1;
      } while (local_60 != 0);
    }
    iVar21 = *(int *)(in_ECX + 0x40);
    iVar12 = (uint)*puVar11 * 0x10;
    uVar2 = *(ushort *)(iVar12 + 10 + iVar21);
    iVar6 = *(int *)(in_ECX + 0x4c);
    for (pbVar20 = (byte *)(iVar6 + 4 + (uint)*(ushort *)(iVar12 + 8 + iVar21) * 4);
        pbVar20 < (byte *)(iVar6 + (uint)uVar2 * 4); pbVar20 = pbVar20 + 4) {
                    /* WARNING: Read-only address (ram,0x00a9a660) is written */
      if ((*pbVar20 & 1) == 0) {
        iVar13 = (int)(uint)*(ushort *)(pbVar20 + 2) >> 5;
        puVar9[iVar13] = puVar9[iVar13] & ~(1 << ((byte)*(ushort *)(pbVar20 + 2) & 0x1f));
      }
    }
                    /* WARNING: Read-only address (ram,0x00a9a660) is written */
    puVar11 = (ushort *)(*(int *)(in_ECX + 0x4c) + 4 + (uint)*(ushort *)(iVar12 + iVar21 + 8) * 4);
  }
  uVar2 = *puVar11;
  while (uVar2 < uVar22) {
    puVar19 = puVar11 + 1;
    iVar21 = (int)(uint)*puVar19 >> 5;
    puVar11 = puVar11 + 2;
    puVar9[iVar21] = puVar9[iVar21] ^ 1 << ((byte)*puVar19 & 0x1f);
    uVar2 = *puVar11;
  }
  uVar2 = *puVar11;
  while ((uint)uVar2 < ((uint)(auVar24._0_4_ + 65536.0) >> 7 & 0xffff | 1)) {
                    /* WARNING: Read-only address (ram,0x00a9a660) is written */
    if ((uVar2 & 1) == 0) {
      iVar21 = (int)(uint)puVar11[1] >> 5;
      puVar9[iVar21] = puVar9[iVar21] ^ 1 << ((byte)puVar11[1] & 0x1f);
    }
    puVar19 = puVar11 + 2;
    puVar11 = puVar11 + 2;
    uVar2 = *puVar19;
  }
                    /* WARNING: Read-only address (ram,0x00a9a660) is written */
  iVar21 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar21 + 0x1a4) < *(uint *)(iVar21 + 0x1a8)) {
    puVar5 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar5 = "Styz-Axis";
    uVar7 = rdtsc();
    puVar5[1] = (int)uVar7;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar5 + 3;
  }
  iVar6 = *(int *)(in_ECX + 0x58);
  iVar21 = iVar6 + -8 + *(int *)(in_ECX + 0x5c) * 4;
  iVar13 = FUN_008e0c30(iVar6 + 4,iVar21,(uint)(auVar23._4_4_ + 65536.0) >> 7 & 0xfffe);
  iVar14 = FUN_008e0c30(iVar6 + 4,iVar21,(uint)(auVar24._4_4_ + 65536.0) >> 7 & 0xffff | 1);
  iVar12 = *(int *)(in_ECX + 100);
  iVar21 = iVar12 + -8 + *(int *)(in_ECX + 0x68) * 4;
  iVar15 = FUN_008e0c30(iVar12 + 4,iVar21,(uint)(auVar23._8_4_ + 65536.0) >> 7 & 0xfffe);
  local_50 = CONCAT22((short)(iVar15 - iVar12 >> 2),(short)(iVar13 - iVar6 >> 2));
  iVar21 = FUN_008e0c30(iVar12 + 4,iVar21,(uint)(auVar24._8_4_ + 65536.0) >> 7 & 0xffff | 1);
  uStack_4c = CONCAT22((short)(iVar21 + (-4 - iVar12) >> 2),(short)(iVar14 + (-4 - iVar6) >> 2));
  iVar21 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar21 + 0x1a4) < *(uint *)(iVar21 + 0x1a8)) {
    puVar5 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar5 = "StScanBitfield";
    uVar7 = rdtsc();
    puVar5[1] = (int)uVar7;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar5 + 3;
  }
  puVar10 = puVar9 + (*(int *)(in_ECX + 0x44) >> 5) + 1;
  uStack_57 = (undefined1)((uint)puVar10 >> 8);
  uStack_56 = (undefined2)((uint)puVar10 >> 0x10);
  if (puVar9 < puVar10) {
    piVar16 = (int *)(*(int *)(in_ECX + 0x40) + 0x24);
    puVar18 = puVar9;
    do {
      piVar17 = piVar16;
      for (uVar22 = *puVar18; uVar22 != 0; uVar22 = uVar22 >> 4) {
        if ((uVar22 & 0xf) != 0) {
          if ((((uVar22 & 1) != 0) &&
              (((piVar17[-8] - local_50 | uStack_4c - piVar17[-9]) & 0x80008000U) == 0)) &&
             ((*(byte *)(piVar17 + -6) & 1) == 0)) {
            local_64[local_3c] = (int)(piVar17 + -9);
            local_3c = local_3c + 1;
          }
          if ((((uVar22 & 2) != 0) &&
              (((piVar17[-4] - local_50 | uStack_4c - piVar17[-5]) & 0x80008000U) == 0)) &&
             ((*(byte *)(piVar17 + -2) & 1) == 0)) {
            local_64[local_3c] = (int)(piVar17 + -5);
            local_3c = local_3c + 1;
          }
          if ((((uVar22 & 4) != 0) &&
              (((*piVar17 - local_50 | uStack_4c - piVar17[-1]) & 0x80008000U) == 0)) &&
             ((*(byte *)(piVar17 + 2) & 1) == 0)) {
            local_64[local_3c] = (int)(piVar17 + -1);
            local_3c = local_3c + 1;
          }
          if ((((uVar22 & 8) != 0) &&
              (((piVar17[4] - local_50 | uStack_4c - piVar17[3]) & 0x80008000U) == 0)) &&
             ((*(byte *)(piVar17 + 6) & 1) == 0)) {
            local_64[local_3c] = (int)(piVar17 + 3);
            local_3c = local_3c + 1;
          }
        }
        piVar17 = piVar17 + 0x10;
      }
      puVar18 = puVar18 + 1;
      piVar16 = piVar16 + 0x80;
    } while (puVar18 < puVar10);
  }
  piVar16 = *(int **)(iVar3 + 0x19c);
  piVar16[8] = (int)puVar9;
  if (puVar9 == (uint *)piVar16[10]) {
    (**(code **)(*piVar16 + 0x10))(puVar9);
  }
  iVar21 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar21 + 0x1a4) < *(uint *)(iVar21 + 0x1a8)) {
    puVar5 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar5 = &DAT_00a6a630;
    uVar7 = rdtsc();
    uStack_57 = (undefined1)((ulonglong)uVar7 >> 8);
    uStack_56 = (undefined2)((ulonglong)uVar7 >> 0x10);
    puVar5[1] = (int)uVar7;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar5 + 3;
  }
  piVar16 = param_2 + 9;
  uVar22 = local_3c * 2 + 2;
  if (param_2 != (int *)0x0) {
    *param_2 = (int)piVar16;
    param_2[1] = 0;
    param_2[2] = uVar22 | 0x80000000;
  }
  piVar17 = param_2 + 3;
  if (piVar17 != (int *)0x0) {
    *piVar17 = (int)(piVar16 + uVar22);
    param_2[4] = 0;
    param_2[5] = uVar22 | 0x80000000;
  }
  piVar1 = param_2 + 6;
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)(piVar16 + uVar22 * 2);
    param_2[7] = 0;
    param_2[8] = uVar22 | 0x80000000;
  }
  *(undefined4 *)(*param_2 + param_2[1] * 4) = 0;
  param_2[1] = param_2[1] + 1;
  *(undefined4 *)(*piVar17 + param_2[4] * 4) = 0;
  param_2[4] = param_2[4] + 1;
  *(undefined4 *)(*piVar1 + param_2[7] * 4) = 0;
  param_2[7] = param_2[7] + 1;
  local_74 = local_64;
  if (-1 < local_3c + -1) {
    local_5c = local_3c;
    do {
      *(undefined4 *)(*param_2 + param_2[1] * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 0x4c) + (uint)*(ushort *)(*local_74 + 8) * 4);
      param_2[1] = param_2[1] + 1;
      *(undefined4 *)(*param_2 + param_2[1] * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 0x4c) + (uint)*(ushort *)(*local_74 + 10) * 4);
      param_2[1] = param_2[1] + 1;
      *(undefined4 *)(*piVar17 + param_2[4] * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 0x58) + (uint)*(ushort *)*local_74 * 4);
      param_2[4] = param_2[4] + 1;
      *(undefined4 *)(*piVar17 + param_2[4] * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 0x58) + (uint)*(ushort *)(*local_74 + 4) * 4);
      param_2[4] = param_2[4] + 1;
      *(undefined4 *)(*piVar1 + param_2[7] * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 100) + (uint)*(ushort *)(*local_74 + 2) * 4);
      iVar21 = param_2[7];
      param_2[7] = iVar21 + 1;
      *(undefined4 *)(*piVar1 + (iVar21 + 1) * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 100) + (uint)*(ushort *)(*local_74 + 6) * 4);
      local_74 = local_74 + 1;
      param_2[7] = param_2[7] + 1;
      local_5c = local_5c + -1;
    } while (local_5c != 0);
  }
  local_60 = 3;
  piVar16 = param_2;
  do {
    if (1 < piVar16[1] + -1) {
      FUN_008e1200(*piVar16 + 4,0,piVar16[1] + -2,(uint)CONCAT21(uStack_56,uStack_57) << 8);
    }
    piVar16 = piVar16 + 3;
    local_60 = local_60 + -1;
  } while (local_60 != 0);
  *(undefined4 *)(*param_2 + param_2[1] * 4) = 0xfffc;
  param_2[1] = param_2[1] + 1;
  *(undefined4 *)(*piVar17 + param_2[4] * 4) = 0xfffc;
  param_2[4] = param_2[4] + 1;
  *(undefined4 *)(*piVar1 + param_2[7] * 4) = 0xfffc;
  param_2[7] = param_2[7] + 1;
  piVar16 = *(int **)(iVar3 + 0x19c);
  piVar16[8] = (int)local_64;
  if (local_64 == (int *)piVar16[10]) {
    (**(code **)(*piVar16 + 0x10))(local_64);
  }
  if (-1 < (int)(uVar4 | 0x80000000)) {
    FUN_008a75d0(local_64,uVar4 << 2,0x14);
  }
  return;
}



void FUN_008e61e0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  int in_ECX;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  int unaff_FS_OFFSET;
  int local_10;
  int local_c;
  uint local_4;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  uVar2 = *(uint *)(in_ECX + 0x44);
  piVar11 = *(int **)(iVar1 + 0x19c);
  local_10 = piVar11[8];
  iVar5 = (uVar2 + 1) * 0x10;
  uVar13 = local_10 + iVar5;
  if ((uint)piVar11[0xb] < uVar13) {
    local_10 = (**(code **)(*piVar11 + 0xc))(iVar5);
  }
  else {
    piVar11[8] = uVar13;
  }
  piVar11 = *(int **)(iVar1 + 0x19c);
  iVar5 = piVar11[8];
  uVar13 = uVar2 * 4 + 0x10 & 0xfffffff0;
  if ((uint)piVar11[0xb] < iVar5 + uVar13) {
    iVar5 = (**(code **)(*piVar11 + 0xc))(uVar13);
  }
  else {
    piVar11[8] = iVar5 + uVar13;
  }
  piVar11 = *(int **)(iVar1 + 0x19c);
  iVar6 = piVar11[8];
  if ((uint)piVar11[0xb] < iVar6 + uVar13) {
    iVar6 = (**(code **)(*piVar11 + 0xc))(uVar13);
  }
  else {
    piVar11[8] = iVar6 + uVar13;
  }
  iVar7 = 0;
  if (0 < *(int *)(in_ECX + 0x44)) {
    iVar9 = 0;
    do {
      puVar10 = (undefined4 *)(*(int *)(in_ECX + 0x40) + iVar9);
      puVar12 = (undefined4 *)(local_10 + iVar9);
      *puVar12 = *puVar10;
      puVar12[1] = puVar10[1];
      puVar12[2] = puVar10[2];
      puVar12[3] = puVar10[3];
      *(undefined2 *)(iVar5 + iVar7 * 4) =
           *(undefined2 *)
            (*(int *)(in_ECX + 0x4c) + (uint)*(ushort *)(iVar9 + 8 + *(int *)(in_ECX + 0x40)) * 4);
      *(short *)(iVar5 + 2 + iVar7 * 4) = (short)iVar7;
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 0x10;
    } while (iVar7 < *(int *)(in_ECX + 0x44));
  }
  local_4 = uVar2 & 0xffffff00;
  if (1 < (int)(uVar2 - 1)) {
    FUN_008e1200(iVar5 + 4,0,uVar2 - 2,local_4);
  }
  if (0 < *(int *)(in_ECX + 0x44)) {
    iVar9 = 0;
    puVar8 = (ushort *)(iVar5 + 2);
    iVar7 = 0;
    do {
      *(int *)(iVar6 + (uint)*puVar8 * 4) = iVar7;
      puVar12 = (undefined4 *)((uint)*puVar8 * 0x10 + local_10);
      puVar10 = (undefined4 *)(*(int *)(in_ECX + 0x40) + iVar9);
      *puVar10 = *puVar12;
      puVar10[1] = puVar12[1];
      puVar10[2] = puVar12[2];
      puVar10[3] = puVar12[3];
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 2;
      iVar9 = iVar9 + 0x10;
    } while (iVar7 < *(int *)(in_ECX + 0x44));
  }
  iVar7 = 1;
  if (1 < *(int *)(in_ECX + 0x44)) {
    iVar9 = 0x10;
    do {
      piVar11 = *(int **)(iVar9 + *(int *)(in_ECX + 0x40) + 0xc);
      if (((uint)piVar11 & 1) == 0) {
        *piVar11 = iVar7;
      }
      else {
        *(short *)(((uint)piVar11 & 0xfffffffe) + *(int *)(in_ECX + 0x78)) = (short)iVar7;
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 0x10;
    } while (iVar7 < *(int *)(in_ECX + 0x44));
  }
  iVar7 = 0;
  local_c = 0;
  if (0 < *(int *)(in_ECX + 0x70)) {
    do {
      iVar9 = *(int *)(in_ECX + 0x78);
      iVar3 = *(int *)(iVar9 + 8 + iVar7);
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        iVar4 = *(int *)(iVar9 + iVar7 + 4);
        *(undefined2 *)(iVar4 + iVar3 * 2) =
             *(undefined2 *)(iVar6 + (uint)*(ushort *)(iVar4 + iVar3 * 2) * 4);
      }
      local_c = local_c + 1;
      iVar7 = iVar7 + 0x10;
    } while (local_c < *(int *)(in_ECX + 0x70));
  }
  piVar11 = (int *)(in_ECX + 0x50);
  iVar7 = 3;
  do {
    iVar9 = 0;
    if (0 < *piVar11) {
      puVar8 = (ushort *)(piVar11[-1] + 2);
      do {
        *puVar8 = *(ushort *)(iVar6 + (uint)*puVar8 * 4);
        iVar9 = iVar9 + 1;
        puVar8 = puVar8 + 2;
      } while (iVar9 < *piVar11);
    }
    piVar11 = piVar11 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  piVar11 = *(int **)(iVar1 + 0x19c);
  piVar11[8] = iVar6;
  if (iVar6 == piVar11[10]) {
    (**(code **)(*piVar11 + 0x10))(iVar6);
  }
  piVar11 = *(int **)(iVar1 + 0x19c);
  piVar11[8] = iVar5;
  if (iVar5 == piVar11[10]) {
    (**(code **)(*piVar11 + 0x10))(iVar5);
  }
  piVar11 = *(int **)(iVar1 + 0x19c);
  piVar11[8] = local_10;
  if (local_10 == piVar11[10]) {
    (**(code **)(*piVar11 + 0x10))(local_10);
  }
  return;
}



void FUN_008e6460(byte param_1)

{
  FUN_008e5050();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008e6490(undefined4 *param_1,undefined4 *param_2,int *param_3,uint *param_4,uint *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  iVar2 = *param_3;
  iVar3 = (**(code **)(*(int *)*param_1 + 8))();
  iVar4 = (**(code **)(*(int *)*param_2 + 8))();
  if ((char)param_3[3] == '\0') {
    iVar5 = iVar3 * 0x20 + iVar4;
    bVar1 = *(byte *)(iVar5 + 0xe94 + iVar2);
  }
  else {
    iVar5 = iVar3 * 0x20 + iVar4;
    bVar1 = *(byte *)(iVar5 + 0x1294 + iVar2);
  }
  uVar6 = (uint)bVar1;
  bVar7 = *(int *)(uVar6 * 0x34 + 0x16c4 + iVar2) == 2;
  if (uVar6 == 1) {
    bVar7 = *(char *)(iVar2 + 0x9a0 + (uint)*(byte *)(iVar5 + iVar2 + 400) * 0x14) != '\0';
  }
  *param_5 = (uint)bVar7;
  if (bVar7 != 0) {
    iVar3 = iVar4 * 0x20 + iVar3;
    if ((char)param_3[3] != '\0') {
      *param_4 = (uint)*(byte *)(iVar3 + 0x1294 + iVar2);
      return;
    }
    *param_4 = (uint)*(byte *)(iVar3 + 0xe94 + iVar2);
    return;
  }
  *param_4 = uVar6;
  return;
}



void FUN_008e6560(char *param_1,int *param_2)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  
  cVar1 = *param_1;
  if (cVar1 != '\x02') {
    if (cVar1 == '\x04') {
      pcVar3 = param_1 + 0x30;
      goto LAB_008e657a;
    }
    if (cVar1 != '\x06') {
      return;
    }
  }
  pcVar3 = param_1 + 0x20;
LAB_008e657a:
  pcVar2 = *(code **)((uint)(byte)param_1[1] * 0x34 + 0x16ac + *param_2);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1,pcVar3,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),param_2
             );
  }
  return;
}



void FUN_008e65b0(char *param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  
  cVar1 = *param_1;
  if (cVar1 != '\x02') {
    if (cVar1 == '\x04') {
      bVar2 = param_1[1];
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = -0x80;
      param_1[0x1f] = -0x41;
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
      param_1[0x28] = '\0';
      param_1[0x29] = '\0';
      param_1[0x2a] = '\0';
      param_1[0x2b] = '\0';
      param_1[0x2c] = '\0';
      param_1[0x2d] = '\0';
      param_1[0x2e] = '\0';
      param_1[0x2f] = '\0';
      pcVar3 = *(code **)((uint)bVar2 * 0x34 + 0x16b0 + *param_2);
      if (pcVar3 == (code *)0x0) {
        return;
      }
      (*pcVar3)(param_1,param_1 + 0x30,param_2);
      return;
    }
    if (cVar1 != '\x06') {
      return;
    }
  }
  pcVar3 = *(code **)((uint)(byte)param_1[1] * 0x34 + 0x16b0 + *param_2);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1,param_1 + 0x20,param_2);
  }
  return;
}



void FUN_008e6630(char *param_1,float param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  code *pcVar2;
  
  cVar1 = *param_1;
  if (cVar1 != '\x02') {
    if (cVar1 == '\x04') {
      if (*(float *)(param_1 + 0x1c) == param_2) {
        *(undefined4 *)(param_1 + 0x1c) = param_3;
      }
      else {
        param_1[0x1c] = '\0';
        param_1[0x1d] = '\0';
        param_1[0x1e] = -0x80;
        param_1[0x1f] = -0x41;
      }
      pcVar2 = *(code **)((uint)(byte)param_1[1] * 0x34 + 0x16b4 + *param_4);
      if (pcVar2 == (code *)0x0) {
        return;
      }
      (*pcVar2)(param_1,param_1 + 0x30,param_2,param_3,param_4);
      return;
    }
    if (cVar1 != '\x06') {
      return;
    }
  }
  pcVar2 = *(code **)((uint)(byte)param_1[1] * 0x34 + 0x16b4 + *param_4);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1,param_1 + 0x20,param_2,param_3,param_4);
  }
  return;
}



undefined4 FUN_008e66d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = param_2;
  if (*(int *)(param_1 + 0x28) <= *(int *)(param_2 + 0x28)) {
    iVar2 = param_1;
    param_1 = param_2;
  }
  iVar1 = 0;
  if (0 < *(int *)(iVar2 + 0x28)) {
    piVar3 = (int *)(*(int *)(iVar2 + 0x24) + 4);
    do {
      if (*piVar3 == param_1) {
        return *(undefined4 *)(*(int *)(iVar2 + 0x24) + iVar1 * 8);
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar1 < *(int *)(iVar2 + 0x28));
  }
  return 0;
}



void FUN_008e6720(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  undefined4 *puVar6;
  
  iVar5 = param_2[1];
  iVar1 = in_ECX[1] + iVar5;
  iVar3 = in_ECX[1] - param_1;
  if ((int)(in_ECX[2] & 0x3fffffffU) < iVar1) {
    FUN_008a6e40();
  }
  iVar2 = *in_ECX;
  iVar4 = iVar2 + (iVar5 + param_1) * 4;
  if (-1 < iVar3 + -1) {
    puVar6 = (undefined4 *)(iVar4 + (iVar3 + -1) * 4);
    do {
      *puVar6 = *(undefined4 *)(((iVar2 + param_1 * 4) - iVar4) + (int)puVar6);
      puVar6 = puVar6 + -1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *param_2;
  iVar4 = *in_ECX + param_1 * 4;
  if (-1 < iVar5 + -1) {
    puVar6 = (undefined4 *)(iVar4 + (iVar5 + -1) * 4);
    do {
      *puVar6 = *(undefined4 *)((iVar3 - iVar4) + (int)puVar6);
      puVar6 = puVar6 + -1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    in_ECX[1] = iVar1;
    return;
  }
  in_ECX[1] = iVar1;
  return;
}



void FUN_008e67f0(int *param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = (*(int *)(*param_1 + -4 + param_1[1] * 4) - (uint)*(ushort *)(param_1 + 5)) + param_1[4];
  if (param_2 != iVar4) {
    FUN_008b1890(param_2,iVar4,(uint)*(ushort *)(param_1 + 5));
    uVar2 = *(ushort *)(param_2 + 0xe);
    *(int *)(*(int *)(*(int *)(param_2 + 0x14) + 0x24) + (uint)*(ushort *)(param_2 + 0xc) * 8) =
         param_2;
    *(int *)(*(int *)(*(int *)(param_2 + 0x18) + 0x24) + (uint)uVar2 * 8) = param_2;
  }
  piVar1 = param_1 + 4;
  *piVar1 = *piVar1 - (uint)*(ushort *)(param_1 + 5);
  if (*piVar1 == 0) {
    iVar4 = param_1[1];
    uVar3 = *(undefined4 *)(*param_1 + -4 + iVar4 * 4);
    param_1[1] = iVar4 + -1;
    if ((-1 < param_1[2]) && ((iVar4 < 1 || (iVar4 * 2 < (int)(param_1[2] & 0x3fffffffU))))) {
      FUN_008a6f90(param_1,4,param_1 + 3,1);
    }
    (**(code **)(*DAT_00ba7d98 + 0x14))(uVar3,*(undefined2 *)((int)param_1 + 0x16),0x24);
    param_1[4] = (uint)*(ushort *)((int)param_1 + 0x16);
  }
  return;
}



int FUN_008e68a0(int *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[4] == (uint)*(ushort *)((int)param_1 + 0x16)) {
    uVar2 = FUN_008a7560((uint)*(ushort *)((int)param_1 + 0x16),0x24);
    if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
      FUN_008a6ee0(param_1,4);
    }
    *(undefined4 *)(*param_1 + param_1[1] * 4) = uVar2;
    param_1[1] = param_1[1] + 1;
    param_1[4] = 0;
  }
  iVar3 = *(int *)(*param_1 + -4 + param_1[1] * 4) + param_1[4];
  param_1[4] = (uint)*(ushort *)(param_1 + 5) + param_1[4];
  FUN_008b1890(iVar3,param_2,(uint)*(ushort *)(param_1 + 5));
  uVar1 = *(ushort *)(iVar3 + 0xe);
  *(int *)(*(int *)(*(int *)(iVar3 + 0x14) + 0x24) + (uint)*(ushort *)(iVar3 + 0xc) * 8) = iVar3;
  *(int *)(*(int *)(*(int *)(iVar3 + 0x18) + 0x24) + (uint)uVar1 * 8) = iVar3;
  return iVar3;
}



undefined1 *
FUN_008e6950(int *param_1,int param_2,int param_3,uint param_4,int *param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int local_60;
  int local_5c;
  int *local_58;
  undefined4 local_54;
  
  iVar4 = *param_5;
  if (param_1[4] == (uint)*(ushort *)((int)param_1 + 0x16)) {
    uVar5 = FUN_008a7560((uint)*(ushort *)((int)param_1 + 0x16),0x24);
    if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
      FUN_008a6ee0(param_1,4);
    }
    *(undefined4 *)(*param_1 + param_1[1] * 4) = uVar5;
    param_1[1] = param_1[1] + 1;
    param_1[4] = 0;
  }
  puVar7 = (undefined1 *)(*(int *)(*param_1 + -4 + param_1[1] * 4) + param_1[4]);
  param_1[4] = (uint)*(ushort *)(param_1 + 5) + param_1[4];
  *(undefined4 *)(puVar7 + 0x10) = param_6;
  *(int *)(puVar7 + 0x14) = param_2;
  *(int *)(puVar7 + 0x18) = param_3;
  *(undefined2 *)(puVar7 + 0xc) = *(undefined2 *)(param_2 + 0x28);
  *(undefined2 *)(puVar7 + 0xe) = *(undefined2 *)(param_3 + 0x28);
  if (*(uint *)(param_2 + 0x28) == (*(uint *)(param_2 + 0x2c) & 0x3fffffff)) {
    FUN_008a6ee0(param_2 + 0x24,8);
  }
  puVar1 = (undefined4 *)(*(int *)(param_2 + 0x24) + *(int *)(param_2 + 0x28) * 8);
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
  if (*(uint *)(param_3 + 0x28) == (*(uint *)(param_3 + 0x2c) & 0x3fffffff)) {
    FUN_008a6ee0(param_3 + 0x24,8);
  }
  puVar2 = (undefined4 *)(*(int *)(param_3 + 0x24) + *(int *)(param_3 + 0x28) * 8);
  *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + 1;
  *puVar1 = puVar7;
  *puVar2 = puVar7;
  puVar1[1] = param_3;
  puVar2[1] = param_2;
  local_54 = *(undefined4 *)(puVar7 + 0x10);
  local_58 = param_5;
  local_60 = param_2;
  local_5c = param_3;
  FUN_008b1ff0(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_3 + 8));
  cVar3 = *(char *)((uint)*(ushort *)(param_3 + 0x1a) + (uint)*(ushort *)(param_2 + 0x1a) * 8 +
                    0x19d4 + *param_5);
  puVar7[8] = cVar3;
  param_5[10] = cVar3 * 0x3c + 0x1a14 + *param_5;
  puVar7[1] = (char)param_4;
  if (*(int *)(param_4 * 0x34 + 0x16b8 + iVar4) == 0) {
    *puVar7 = 2;
    puVar6 = puVar7 + 0x20;
  }
  else {
    *puVar7 = 4;
    *(undefined4 *)(puVar7 + 0x1c) = 0xbf800000;
    *(undefined4 *)(puVar7 + 0x20) = 0;
    *(undefined4 *)(puVar7 + 0x24) = 0;
    *(undefined4 *)(puVar7 + 0x28) = 0;
    *(undefined4 *)(puVar7 + 0x2c) = 0;
    puVar6 = puVar7 + 0x30;
  }
  (**(code **)((param_4 & 0xff) * 0x34 + 0x1694 + iVar4))(&local_60,puVar7,puVar6);
  puVar7[3] = (char)param_1[5];
  return puVar7;
}



void FUN_008e6b20(undefined4 param_1,char *param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  ushort *local_8;
  int local_4;
  
  cVar1 = *param_2;
  if (cVar1 != '\x02') {
    if (cVar1 == '\x04') {
      (**(code **)((uint)(byte)param_2[1] * 0x34 + 0x1698 + param_3))
                (param_2,param_2 + 0x30,*(undefined4 *)(param_2 + 0x10));
      goto LAB_008e6b60;
    }
    if (cVar1 != '\x06') goto LAB_008e6b60;
  }
  (**(code **)((uint)(byte)param_2[1] * 0x34 + 0x1698 + param_3))
            (param_2,param_2 + 0x20,*(undefined4 *)(param_2 + 0x10));
LAB_008e6b60:
  local_8 = (ushort *)(param_2 + 0xc);
  piVar6 = (int *)(param_2 + 0x14);
  local_4 = 2;
  do {
    iVar3 = *piVar6;
    uVar2 = *local_8;
    uVar5 = (uint)uVar2;
    iVar4 = *(int *)(iVar3 + 0x24);
    iVar7 = *(int *)(iVar3 + 0x28) + -1;
    *(int *)(iVar3 + 0x28) = iVar7;
    *(undefined4 *)(iVar4 + uVar5 * 8) = *(undefined4 *)(iVar4 + iVar7 * 8);
    *(undefined4 *)(iVar4 + 4 + uVar5 * 8) = *(undefined4 *)(iVar4 + 4 + iVar7 * 8);
    if ((int)uVar5 < *(int *)(iVar3 + 0x28)) {
      iVar4 = *(int *)(*(int *)(iVar3 + 0x24) + uVar5 * 8);
      *(ushort *)(iVar4 + 0xc + (uint)(*(int *)(iVar4 + 0x14) != iVar3) * 2) = uVar2;
    }
    if (*(int *)(iVar3 + 0x28) * 2 + 8 <= (int)(*(uint *)(iVar3 + 0x2c) & 0x3fffffff)) {
      FUN_008a6f90((int *)(iVar3 + 0x24),8,0,0);
    }
    local_8 = local_8 + 1;
    piVar6 = piVar6 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  FUN_008e67f0(param_1,param_2);
  return;
}



void FUN_008e6c30(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(uint *)(param_1 + 0x10) != (uint)*(ushort *)(param_1 + 0x16)) {
    do {
      if (param_2[1] == 0) break;
      FUN_008e68a0(param_1,(*(int *)(*param_2 + -4 + param_2[1] * 4) -
                           (uint)*(ushort *)(param_2 + 5)) + param_2[4]);
      iVar1 = param_2[4];
      param_2[4] = iVar1 - (uint)*(ushort *)(param_2 + 5);
      if (iVar1 - (uint)*(ushort *)(param_2 + 5) == 0) {
        iVar1 = param_2[1];
        uVar2 = *(undefined4 *)(*param_2 + -4 + iVar1 * 4);
        param_2[1] = iVar1 + -1;
        if ((-1 < param_2[2]) && ((iVar1 < 1 || (iVar1 * 2 < (int)(param_2[2] & 0x3fffffffU))))) {
          FUN_008a6f90(param_2,4,param_2 + 3,1);
        }
        (**(code **)(*DAT_00ba7d98 + 0x14))(uVar2,*(undefined2 *)((int)param_2 + 0x16),0x24);
        param_2[4] = (uint)*(ushort *)((int)param_2 + 0x16);
      }
    } while (*(uint *)(param_1 + 0x10) != (uint)*(ushort *)(param_1 + 0x16));
  }
  if (param_2[1] != 0) {
    FUN_008e6720(*(undefined4 *)(param_1 + 4),param_2);
    *(int *)(param_1 + 0x10) = param_2[4];
    param_2[1] = 0;
    param_2[4] = (uint)*(ushort *)(param_1 + 0x16);
  }
  return;
}



void FUN_008e6d10(char *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  int unaff_FS_OFFSET;
  undefined4 *local_170;
  undefined4 *local_16c;
  int *local_168;
  undefined4 local_164;
  float local_120;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined4 *local_100;
  undefined4 *local_fc;
  int *local_f8;
  undefined4 local_f4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 *local_a8;
  undefined4 *local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined4 *local_94;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  cVar1 = *param_1;
  if (cVar1 == '\x02') {
    local_170 = *(undefined4 **)(param_1 + 0x14);
    local_16c = *(undefined4 **)(param_1 + 0x18);
    local_164 = *(undefined4 *)(param_1 + 0x10);
    local_168 = param_2;
    iVar2 = local_170[2];
    fVar8 = (float)param_2[6] * *(float *)(iVar2 + 0x5c);
    iVar3 = *(int *)((int)local_16c + 8);
    fVar7 = (float)param_2[6] * *(float *)(iVar3 + 0x5c);
    local_110 = fVar8 * (*(float *)(iVar2 + 0x40) - *(float *)(iVar2 + 0x50)) +
                fVar7 * (*(float *)(iVar3 + 0x50) - *(float *)(iVar3 + 0x40));
    fStack_10c = fVar8 * (*(float *)(iVar2 + 0x44) - *(float *)(iVar2 + 0x54)) +
                 fVar7 * (*(float *)(iVar3 + 0x54) - *(float *)(iVar3 + 0x44));
    fStack_108 = fVar8 * (*(float *)(iVar2 + 0x48) - *(float *)(iVar2 + 0x58)) +
                 fVar7 * (*(float *)(iVar3 + 0x58) - *(float *)(iVar3 + 0x48));
    fStack_104 = *(float *)(iVar2 + 0xa0) * *(float *)(iVar2 + 0x9c) * fVar8 +
                 *(float *)(iVar3 + 0xa0) * *(float *)(iVar3 + 0x9c) * fVar7;
    FUN_008b1ff0(iVar2,iVar3);
    (**(code **)((uint)(byte)param_1[1] * 0x34 + 0x16bc + *param_2))
              (&local_170,param_1,param_1 + 0x20,0,param_3);
  }
  else {
    if (cVar1 != '\x04') {
      if (cVar1 != '\x06') {
        return;
      }
      (**(code **)(**(int **)(param_1 + 4) + 0x14))
                (*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),param_2,param_3);
      return;
    }
    local_170 = *(undefined4 **)(param_1 + 0x14);
    iVar2 = local_170[2];
    local_16c = *(undefined4 **)(param_1 + 0x18);
    iVar3 = local_16c[2];
    local_164 = *(undefined4 *)(param_1 + 0x10);
    local_168 = param_2;
    fVar8 = (float)param_2[6] * *(float *)(iVar2 + 0x5c);
    fVar7 = (float)param_2[6] * *(float *)(iVar3 + 0x5c);
    local_110 = fVar8 * (*(float *)(iVar2 + 0x40) - *(float *)(iVar2 + 0x50)) +
                fVar7 * (*(float *)(iVar3 + 0x50) - *(float *)(iVar3 + 0x40));
    fStack_10c = fVar8 * (*(float *)(iVar2 + 0x44) - *(float *)(iVar2 + 0x54)) +
                 fVar7 * (*(float *)(iVar3 + 0x54) - *(float *)(iVar3 + 0x44));
    fStack_108 = fVar8 * (*(float *)(iVar2 + 0x48) - *(float *)(iVar2 + 0x58)) +
                 fVar7 * (*(float *)(iVar3 + 0x58) - *(float *)(iVar3 + 0x48));
    fStack_104 = *(float *)(iVar2 + 0xa0) * *(float *)(iVar2 + 0x9c) * fVar8 +
                 *(float *)(iVar3 + 0xa0) * *(float *)(iVar3 + 0x9c) * fVar7;
    if (*(float *)(param_1 + 0x1c) != (float)param_2[4]) {
      if (*(char *)(param_2[10] + 0x10) == '\0') {
        local_120 = -3.4028235e+38;
        *(int *)(param_1 + 0x1c) = param_2[5];
        param_1[0x20] = '\0';
        param_1[0x21] = '\0';
        param_1[0x22] = '\0';
        param_1[0x23] = '\0';
        param_1[0x24] = '\0';
        param_1[0x25] = '\0';
        param_1[0x26] = '\0';
        param_1[0x27] = '\0';
        param_1[0x28] = '\0';
        param_1[0x29] = '\0';
        param_1[0x2a] = '\0';
        param_1[0x2b] = '\0';
        param_1[0x2c] = '\0';
        param_1[0x2d] = '\0';
        param_1[0x2e] = '\0';
        param_1[0x2f] = '\0';
        param_1[0x2c] = -1;
        param_1[0x2d] = -1;
        param_1[0x2e] = '\x7f';
        param_1[0x2f] = -1;
        goto LAB_008e6e39;
      }
      iVar4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
        iVar4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        puVar5 = *(undefined4 **)(iVar4 + 0x1a4);
        *puVar5 = "TtrecalcT0";
        uVar6 = rdtsc();
        puVar5[1] = (int)uVar6;
        *(undefined4 **)(iVar4 + 0x1a4) = puVar5 + 3;
      }
      FUN_008dd150(local_170[2] + 0x40,param_2[4],local_90);
      FUN_008dd150(local_16c[2] + 0x40,local_168[4],local_50);
      local_f4 = local_164;
      local_100 = &local_b0;
      local_f8 = local_168;
      local_fc = &local_a0;
      local_ac = local_170[1];
      local_b0 = *local_170;
      local_9c = local_16c[1];
      local_a0 = *local_16c;
      local_94 = local_16c;
      local_98 = local_50;
      local_a4 = local_170;
      local_a8 = local_90;
      FUN_008b1ff0(local_a8,local_98);
      (**(code **)((uint)(byte)param_1[1] * 0x34 + 0x16b8 + *param_2))
                (&local_100,param_1 + 0x30,param_1 + 0x20);
      iVar4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
        iVar4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        puVar5 = *(undefined4 **)(iVar4 + 0x1a4);
        *puVar5 = &DAT_00a9610c;
        uVar6 = rdtsc();
        puVar5[1] = (int)uVar6;
        *(undefined4 **)(iVar4 + 0x1a4) = puVar5 + 3;
      }
    }
    *(int *)(param_1 + 0x1c) = param_2[5];
    local_120 = *(float *)(param_1 + 0x2c) -
                (fStack_10c * *(float *)(param_1 + 0x24) + local_110 * *(float *)(param_1 + 0x20) +
                fStack_108 * *(float *)(param_1 + 0x28) + fStack_104);
    if (local_120 < (float)param_2[2]) {
LAB_008e6e39:
      FUN_008b1ff0(iVar2,iVar3);
      (**(code **)((uint)(byte)param_1[1] * 0x34 + 0x16bc + *param_2))
                (&local_170,param_1,param_1 + 0x30,param_1 + 0x20,param_3);
      return;
    }
    *(float *)(param_1 + 0x2c) = local_120;
    if (param_1[2] != '\0') {
      (**(code **)((uint)(byte)param_1[1] * 0x34 + 0x169c + *param_2))
                (param_1,param_1 + 0x30,*(undefined4 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_008e7180(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 **ppuVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  int unaff_FS_OFFSET;
  char *pcVar17;
  char *pcVar18;
  int local_3254;
  undefined4 *puStack_3230;
  undefined4 *puStack_322c;
  int *piStack_3228;
  undefined4 uStack_3224;
  float fStack_31e0;
  float fStack_31d0;
  float fStack_31cc;
  float fStack_31c8;
  float fStack_31c4;
  undefined4 *puStack_31c0;
  undefined4 *puStack_31bc;
  int *piStack_31b8;
  undefined4 uStack_31b4;
  undefined4 uStack_3170;
  undefined4 uStack_316c;
  undefined1 *puStack_3168;
  undefined4 *puStack_3164;
  undefined4 uStack_3160;
  undefined4 uStack_315c;
  undefined1 *puStack_3158;
  undefined4 *puStack_3154;
  undefined1 auStack_3150 [64];
  undefined1 auStack_3110 [64];
  undefined4 *puStack_30d0;
  int iStack_30cc;
  int *piStack_30c8;
  undefined4 uStack_30c4;
  float fStack_3070;
  float fStack_306c;
  float fStack_3068;
  float fStack_3064;
  undefined1 *local_3060 [12];
  undefined1 local_3030 [12292];
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x8e7190;
  iVar14 = param_1[1];
  iVar15 = 0;
  local_3254 = 0;
  if (0 < iVar14) {
    do {
      pcVar16 = *(char **)(*param_1 + iVar15 * 4);
      iVar15 = iVar15 + 1;
      if (iVar15 == iVar14) {
        uVar11 = param_1[4];
      }
      else {
        uVar11 = (uint)*(ushort *)((int)param_1 + 0x16);
      }
      pcVar12 = pcVar16 + uVar11;
      uVar10 = uStack_30c4;
      for (; pcVar16 < pcVar12; pcVar16 = pcVar16 + (byte)pcVar16[3]) {
        uVar2 = *(undefined4 *)(pcVar16 + 0x18);
        uVar3 = *(undefined4 *)(pcVar16 + 0x14);
        local_2c = 0x7f7fffff;
        local_20 = 0;
        local_3060[0] = local_3030;
        cVar1 = *pcVar16;
        uStack_30c4 = *(undefined4 *)(pcVar16 + 0x10);
        if (cVar1 == '\x02') {
          puStack_30d0 = *(undefined4 **)(pcVar16 + 0x14);
          iStack_30cc = *(int *)(pcVar16 + 0x18);
          piStack_30c8 = param_2;
          iVar14 = puStack_30d0[2];
          fVar9 = (float)param_2[6] * *(float *)(iVar14 + 0x5c);
          iVar4 = *(int *)(iStack_30cc + 8);
          fVar8 = (float)param_2[6] * *(float *)(iVar4 + 0x5c);
          fStack_3070 = fVar9 * (*(float *)(iVar14 + 0x40) - *(float *)(iVar14 + 0x50)) +
                        fVar8 * (*(float *)(iVar4 + 0x50) - *(float *)(iVar4 + 0x40));
          fStack_306c = fVar9 * (*(float *)(iVar14 + 0x44) - *(float *)(iVar14 + 0x54)) +
                        fVar8 * (*(float *)(iVar4 + 0x54) - *(float *)(iVar4 + 0x44));
          fStack_3068 = fVar9 * (*(float *)(iVar14 + 0x48) - *(float *)(iVar14 + 0x58)) +
                        fVar8 * (*(float *)(iVar4 + 0x58) - *(float *)(iVar4 + 0x48));
          fStack_3064 = *(float *)(iVar14 + 0xa0) * *(float *)(iVar14 + 0x9c) * fVar9 +
                        *(float *)(iVar4 + 0xa0) * *(float *)(iVar4 + 0x9c) * fVar8;
          FUN_008b1ff0(iVar14,iVar4);
          pcVar17 = pcVar16 + 0x20;
          pcVar18 = (char *)0x0;
          ppuVar13 = &puStack_30d0;
LAB_008e765a:
          (**(code **)((uint)(byte)pcVar16[1] * 0x34 + 0x16bc + *param_2))
                    (ppuVar13,pcVar16,pcVar17,pcVar18,local_3060);
        }
        else {
          if (cVar1 == '\x04') {
            puStack_3230 = *(undefined4 **)(pcVar16 + 0x14);
            iVar14 = puStack_3230[2];
            iVar4 = *(int *)(*(int *)(pcVar16 + 0x18) + 8);
            puStack_322c = *(undefined4 **)(pcVar16 + 0x18);
            piStack_3228 = param_2;
            fVar9 = (float)param_2[6] * *(float *)(iVar14 + 0x5c);
            fVar8 = (float)param_2[6] * *(float *)(iVar4 + 0x5c);
            fStack_31d0 = fVar9 * (*(float *)(iVar14 + 0x40) - *(float *)(iVar14 + 0x50)) +
                          fVar8 * (*(float *)(iVar4 + 0x50) - *(float *)(iVar4 + 0x40));
            fStack_31cc = fVar9 * (*(float *)(iVar14 + 0x44) - *(float *)(iVar14 + 0x54)) +
                          fVar8 * (*(float *)(iVar4 + 0x54) - *(float *)(iVar4 + 0x44));
            fStack_31c8 = fVar9 * (*(float *)(iVar14 + 0x48) - *(float *)(iVar14 + 0x58)) +
                          fVar8 * (*(float *)(iVar4 + 0x58) - *(float *)(iVar4 + 0x48));
            fStack_31c4 = *(float *)(iVar14 + 0xa0) * *(float *)(iVar14 + 0x9c) * fVar9 +
                          *(float *)(iVar4 + 0xa0) * *(float *)(iVar4 + 0x9c) * fVar8;
            uStack_3224 = uStack_30c4;
            if (*(float *)(pcVar16 + 0x1c) == (float)param_2[4]) {
LAB_008e750a:
              uStack_30c4 = uVar10;
              *(int *)(pcVar16 + 0x1c) = param_2[5];
              fVar8 = *(float *)(pcVar16 + 0x2c) -
                      (fStack_31cc * *(float *)(pcVar16 + 0x24) +
                       fStack_31d0 * *(float *)(pcVar16 + 0x20) +
                      fStack_31c8 * *(float *)(pcVar16 + 0x28) + fStack_31c4);
              if ((float)param_2[2] <= fVar8) {
                *(float *)(pcVar16 + 0x2c) = fVar8;
                if (pcVar16[2] != '\0') {
                  (**(code **)((uint)(byte)pcVar16[1] * 0x34 + 0x169c + *param_2))
                            (pcVar16,pcVar16 + 0x30,*(undefined4 *)(pcVar16 + 0x10));
                }
                local_3254 = local_3254 + 1;
                goto LAB_008e766f;
              }
            }
            else {
              if (*(char *)(param_2[10] + 0x10) != '\0') {
                iVar5 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
                if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
                  iVar5 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
                  puVar6 = *(undefined4 **)(iVar5 + 0x1a4);
                  *puVar6 = "TtrecalcT0";
                  uVar7 = rdtsc();
                  puVar6[1] = (int)uVar7;
                  *(undefined4 **)(iVar5 + 0x1a4) = puVar6 + 3;
                }
                uStack_30c4 = uVar10;
                FUN_008dd150(puStack_3230[2] + 0x40,param_2[4],auStack_3150);
                FUN_008dd150(puStack_322c[2] + 0x40,piStack_3228[4],auStack_3110);
                uStack_31b4 = uStack_3224;
                puStack_31c0 = &uStack_3170;
                piStack_31b8 = piStack_3228;
                puStack_31bc = &uStack_3160;
                uStack_316c = puStack_3230[1];
                uStack_3170 = *puStack_3230;
                uStack_315c = puStack_322c[1];
                uStack_3160 = *puStack_322c;
                puStack_3154 = puStack_322c;
                puStack_3158 = auStack_3110;
                puStack_3164 = puStack_3230;
                puStack_3168 = auStack_3150;
                FUN_008b1ff0(puStack_3168,puStack_3158);
                (**(code **)((uint)(byte)pcVar16[1] * 0x34 + 0x16b8 + *param_2))
                          (&puStack_31c0,pcVar16 + 0x30,pcVar16 + 0x20);
                iVar5 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
                uVar10 = uStack_30c4;
                if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
                  iVar5 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
                  puVar6 = *(undefined4 **)(iVar5 + 0x1a4);
                  *puVar6 = &DAT_00a9610c;
                  uVar7 = rdtsc();
                  puVar6[1] = (int)uVar7;
                  *(undefined4 **)(iVar5 + 0x1a4) = puVar6 + 3;
                }
                goto LAB_008e750a;
              }
              fVar8 = -3.4028235e+38;
              *(int *)(pcVar16 + 0x1c) = param_2[5];
              pcVar16[0x20] = '\0';
              pcVar16[0x21] = '\0';
              pcVar16[0x22] = '\0';
              pcVar16[0x23] = '\0';
              pcVar16[0x24] = '\0';
              pcVar16[0x25] = '\0';
              pcVar16[0x26] = '\0';
              pcVar16[0x27] = '\0';
              pcVar16[0x28] = '\0';
              pcVar16[0x29] = '\0';
              pcVar16[0x2a] = '\0';
              pcVar16[0x2b] = '\0';
              pcVar16[0x2c] = '\0';
              pcVar16[0x2d] = '\0';
              pcVar16[0x2e] = '\0';
              pcVar16[0x2f] = '\0';
              pcVar16[0x2c] = -1;
              pcVar16[0x2d] = -1;
              pcVar16[0x2e] = '\x7f';
              pcVar16[0x2f] = -1;
              uStack_30c4 = uVar10;
            }
            fStack_31e0 = fVar8;
            FUN_008b1ff0(iVar14,iVar4);
            pcVar18 = pcVar16 + 0x20;
            pcVar17 = pcVar16 + 0x30;
            ppuVar13 = &puStack_3230;
            goto LAB_008e765a;
          }
          uStack_30c4 = uVar10;
          if (cVar1 == '\x06') {
            (**(code **)(**(int **)(pcVar16 + 4) + 0x14))
                      (*(undefined4 *)(pcVar16 + 0x14),*(undefined4 *)(pcVar16 + 0x18),param_2,
                       local_3060);
          }
        }
LAB_008e766f:
        iVar14 = *(int *)(DAT_00ba7d98 + 0x28) + *(int *)(DAT_00ba7d98 + 0x14);
        if ((*(int *)(DAT_00ba7d98 + 8) <= iVar14) || (*(int *)(DAT_00ba7d98 + 8) == iVar14)) {
          *(undefined4 *)(DAT_00ba7d98 + 4) = 1;
        }
        if (*(int *)(DAT_00ba7d98 + 4) == 1) {
          return;
        }
        if (local_3060[0] != local_3030) {
          (**(code **)(**(int **)(pcVar16 + 0x10) + 0x14))(uVar3,uVar2,param_2,local_3060);
        }
        uVar10 = uStack_30c4;
      }
      iVar14 = param_1[1];
      uStack_30c4 = uVar10;
    } while (iVar15 < iVar14);
  }
  iVar14 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar14 + 0x1a4) < *(uint *)(iVar14 + 0x1a8)) {
    puVar6 = *(undefined4 **)(iVar14 + 0x1a4);
    *puVar6 = "MinumTim";
    puVar6[1] = (float)local_3254;
    *(undefined4 **)(iVar14 + 0x1a4) = puVar6 + 2;
  }
  return;
}



int FUN_008e7740(uint param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  bVar1 = *(int *)(param_2 + 0x48) <= *(int *)(param_3 + 0x48);
  iVar4 = param_3;
  if (bVar1) {
    iVar4 = param_2;
  }
  bVar2 = false;
  iVar3 = 0;
  if (0 < *(int *)(iVar4 + 0x48)) {
    puVar5 = *(uint **)(iVar4 + 0x44);
    do {
      if ((*puVar5 <= param_1) && (param_1 < (uint)*(ushort *)(iVar4 + 0x5a) + *puVar5)) {
        bVar2 = true;
        goto LAB_008e7799;
      }
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar3 < *(int *)(iVar4 + 0x48));
    bVar2 = false;
  }
LAB_008e7799:
  if (bVar2 == bVar1) {
    param_3 = param_2;
  }
  return param_3;
}



void FUN_008e77c0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      FUN_008e65b0(*(undefined4 *)(*(int *)(param_1 + 0x38) + iVar1 * 8),param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x3c));
  }
  return;
}



void FUN_008e77f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x48);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      uVar3 = *(uint *)(*(int *)(param_1 + 0x44) + iVar2 * 4);
      iVar2 = iVar2 + 1;
      if (iVar2 == iVar1) {
        uVar4 = *(uint *)(param_1 + 0x54);
      }
      else {
        uVar4 = (uint)*(ushort *)(param_1 + 0x5a);
      }
      uVar4 = uVar4 + uVar3;
      for (; uVar3 < uVar4; uVar3 = uVar3 + *(byte *)(uVar3 + 3)) {
        FUN_008e6630(uVar3,param_2,param_3,param_4);
      }
      iVar1 = *(int *)(param_1 + 0x48);
    } while (iVar2 < iVar1);
  }
  return;
}



void FUN_008e7850(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int iVar5;
  int iVar6;
  undefined1 local_4 [4];
  
  iVar4 = param_2;
  iVar5 = *(int *)(param_1 + 0x10) + param_1;
  iVar6 = *(int *)(param_2 + 0x10) + param_2;
  if (((*(char *)(*(int *)(param_1 + 0x10) + 0x91 + param_1) == '\0') &&
      (*(char *)(iVar6 + 0x91) == '\0')) && (*(int *)(iVar5 + 0x54) != *(int *)(iVar6 + 0x54))) {
    FUN_008cd320(*(undefined4 *)(iVar5 + 8),iVar5,iVar6);
  }
  FUN_008e6490(param_1,iVar4,param_3,local_4,&param_2);
  piVar1 = param_3;
  iVar3 = param_1;
  if (param_2 != 0) {
    iVar3 = iVar4;
    iVar4 = param_1;
  }
  uVar2 = (**(code **)(**(int **)(*param_3 + 0xc +
                                 ((int)*(char *)(iVar6 + 0x58) + *(char *)(iVar5 + 0x58) * 8) * 4) +
                      8))(iVar3,iVar4,param_3);
  FUN_008e6950(unaff_EBX + 0x44,iVar3,iVar4,unaff_ESI,piVar1,uVar2);
  return;
}



void FUN_008e7920(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 0x10) + *(int *)(param_1 + 0x14);
  iVar6 = *(int *)(*(int *)(param_1 + 0x18) + 0x10) + *(int *)(param_1 + 0x18);
  iVar1 = *(int *)(iVar6 + 0x54);
  iVar2 = *(int *)(iVar4 + 0x54);
  if (iVar2 == iVar1) {
    *(undefined1 *)(iVar2 + 0x26) = 1;
    iVar5 = iVar2;
  }
  else {
    iVar5 = iVar1;
    if ((*(char *)(iVar4 + 0x91) == '\0') && (iVar5 = iVar2, *(char *)(iVar6 + 0x91) == '\0')) {
      iVar5 = FUN_008e7740(param_1,iVar2,iVar1);
      *(undefined1 *)(iVar2 + 0x26) = 1;
      *(undefined1 *)(*(int *)(iVar6 + 0x54) + 0x26) = 1;
    }
  }
  piVar3 = *(int **)(param_1 + 0x10);
  FUN_008e6b20(iVar5 + 0x44,param_1,*(undefined4 *)(*(int *)(iVar5 + 0x1c) + 0x7c));
                    /* WARNING: Could not recover jumptable at 0x008e7999. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x18))();
  return;
}



void FUN_008e79a0(undefined4 *param_1,undefined4 *param_2)

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
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  in_ECX[4] = *param_1;
  in_ECX[5] = uVar1;
  in_ECX[6] = uVar2;
  in_ECX[7] = uVar3;
  in_ECX[3] = 0;
  in_ECX[7] = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  in_ECX[8] = *param_2;
  in_ECX[9] = uVar1;
  in_ECX[10] = uVar2;
  in_ECX[0xb] = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  in_ECX[0xc] = *param_2;
  in_ECX[0xd] = uVar1;
  in_ECX[0xe] = uVar2;
  in_ECX[0xf] = uVar3;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  return;
}



void FUN_008e79e0(float param_1,float *param_2)

{
  float fVar1;
  float *in_ECX;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = (param_1 - in_ECX[3]) * in_ECX[7];
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  local_30 = (1.0 - local_20) * in_ECX[8] + local_20 * in_ECX[0xc];
  fStack_2c = (1.0 - local_20) * in_ECX[9] + local_20 * in_ECX[0xd];
  fStack_28 = (1.0 - local_20) * in_ECX[10] + local_20 * in_ECX[0xe];
  fVar6 = (1.0 - local_20) * in_ECX[0xb] + local_20 * in_ECX[0xf];
  fVar2 = fStack_28 * fStack_28 + local_30 * local_30;
  fVar3 = fVar6 * fVar6 + fStack_2c * fStack_2c;
  fVar4 = local_30 * local_30 + fStack_28 * fStack_28;
  fVar5 = fStack_2c * fStack_2c + fVar6 * fVar6;
  auVar7._4_4_ = fVar2;
  auVar7._0_4_ = fVar3;
  auVar7._8_4_ = fVar5;
  auVar7._12_4_ = fVar4;
  auVar8._4_4_ = fVar3 + fVar2;
  auVar8._0_4_ = fVar2 + fVar3;
  auVar8._8_4_ = fVar4 + fVar5;
  auVar8._12_4_ = fVar5 + fVar4;
  auVar8 = rsqrtss(auVar7,auVar8);
  fVar4 = auVar8._0_4_;
  fStack_24 = fVar4 * 0.5 * (3.0 - (fVar2 + fVar3) * fVar4 * fVar4);
  local_30 = fStack_24 * local_30;
  fStack_2c = fStack_24 * fStack_2c;
  fStack_28 = fStack_24 * fStack_28;
  fStack_24 = fStack_24 * fVar6;
  FUN_008b1dd0(&local_30);
  fVar2 = in_ECX[5];
  fVar3 = in_ECX[6];
  fVar4 = in_ECX[7];
  fVar5 = in_ECX[1];
  fVar6 = in_ECX[2];
  fVar1 = in_ECX[3];
  param_2[0xc] = (1.0 - local_20) * *in_ECX + local_20 * in_ECX[4];
  param_2[0xd] = (1.0 - local_20) * fVar5 + local_20 * fVar2;
  param_2[0xe] = (1.0 - local_20) * fVar6 + local_20 * fVar3;
  param_2[0xf] = (1.0 - local_20) * fVar1 + local_20 * fVar4;
  fVar2 = in_ECX[0x10];
  fVar3 = in_ECX[0x11];
  fVar4 = in_ECX[0x12];
  param_2[0xc] = param_2[0xc] - (*param_2 * fVar2 + param_2[4] * fVar3 + param_2[8] * fVar4);
  param_2[0xd] = param_2[0xd] - (param_2[1] * fVar2 + param_2[5] * fVar3 + param_2[9] * fVar4);
  param_2[0xe] = param_2[0xe] - (param_2[2] * fVar2 + param_2[6] * fVar3 + param_2[10] * fVar4);
  param_2[0xf] = param_2[0xf] - (param_2[3] * fVar2 + param_2[7] * fVar3 + param_2[0xb] * fVar4);
  return;
}



void FUN_008e7b20(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  FUN_008e79a0(param_1,param_2);
  FUN_008b1dd0(param_2);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(in_ECX + 0x30) = *param_1;
  *(undefined4 *)(in_ECX + 0x34) = uVar1;
  *(undefined4 *)(in_ECX + 0x38) = uVar2;
  *(undefined4 *)(in_ECX + 0x3c) = uVar3;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0x3f800000;
  return;
}



void FUN_008e7b70(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  in_ECX[4] = param_3;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[5] = 0;
  *in_ECX = &PTR_FUN_00a9a77c;
  in_ECX[6] = param_1;
  in_ECX[7] = param_2;
  if (param_2 == 0) {
    if (param_1 == 0) {
      return;
    }
  }
  else if (param_1 == 0) goto LAB_008e7bbc;
  FUN_008bc720();
LAB_008e7bbc:
  if (in_ECX[7] != 0) {
    FUN_008bc720();
  }
  return;
}



void FUN_008e7bd0(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x18) != 0) {
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_0089be60(in_ECX,*(int *)(in_ECX + 0x18));
    }
    FUN_008bc730();
    *(undefined4 *)(in_ECX + 0x18) = 0;
  }
  *(undefined4 *)(in_ECX + 0x18) = param_1;
  FUN_008bc720();
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_00899990(in_ECX,*(undefined4 *)(in_ECX + 0x18));
  }
  return;
}



void FUN_008e7c20(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1c) != 0) {
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_0089be60(in_ECX,*(int *)(in_ECX + 0x1c));
    }
    FUN_008bc730();
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  *(undefined4 *)(in_ECX + 0x1c) = param_1;
  FUN_008bc720();
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_00899990(in_ECX,*(undefined4 *)(in_ECX + 0x1c));
  }
  return;
}



void FUN_008e7c70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9a77c;
  if (in_ECX[6] != 0) {
    FUN_008bc730();
    in_ECX[6] = 0;
  }
  if (in_ECX[7] != 0) {
    FUN_008bc730();
    in_ECX[7] = 0;
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008e7cb0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9a77c;
  if (in_ECX[6] != 0) {
    FUN_008bc730();
    in_ECX[6] = 0;
  }
  if (in_ECX[7] != 0) {
    FUN_008bc730();
    in_ECX[7] = 0;
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008e7d10(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_008a6ee0(param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *(undefined4 *)(in_ECX + 0x18);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1U;
  if (iVar1 + 1U == (param_1[2] & 0x3fffffffU)) {
    FUN_008a6ee0(param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *(undefined4 *)(in_ECX + 0x1c);
  param_1[1] = param_1[1] + 1;
  return;
}



char * FUN_008e7d80(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "hkBallAndSocketConstraint";
  case 1:
    return "hkHingeConstraint";
  case 2:
    return "hkLimitedHingeConstraint";
  case 3:
    return "hkPointToPathConstraint";
  case 4:
    return "hkPoweredHingeConstraint";
  default:
    return "Unknown";
  case 6:
    return "hkPrismaticConstraint";
  case 7:
    return "hkRagdollConstraint";
  case 8:
    return "hkStiffSpringConstraintC";
  case 9:
    return "hkWheelConstraint";
  case 10:
    return "hkGenericConstraint";
  case 0xc:
    return "hkBreakableConstraint";
  case 0xd:
    return "hkMalleableConstraint";
  }
}



undefined4 * FUN_008e7e60(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  switch(param_1) {
  case 0:
    iVar1 = FUN_00401f00(0x14);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_008c3290();
      return puVar2;
    }
    break;
  case 1:
    iVar1 = FUN_00401f00(0x14);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_008c2b20();
      return puVar2;
    }
    break;
  case 2:
    iVar1 = FUN_00401f00(0x14);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_00539b60();
      return puVar2;
    }
    break;
  case 3:
    puVar2 = (undefined4 *)FUN_00401f00(0x14);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[2] = 1;
      *puVar2 = &PTR_FUN_00a9a8c8;
      return puVar2;
    }
    break;
  case 4:
    puVar2 = (undefined4 *)FUN_00401f00(0x14);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[2] = 1;
      *puVar2 = &PTR_FUN_00a9a8e4;
      return puVar2;
    }
    break;
  case 6:
    iVar1 = FUN_00401f00(0x14);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_008c1c90();
      return puVar2;
    }
    break;
  case 7:
    iVar1 = FUN_00401f00(0x14);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_008c1250();
      return puVar2;
    }
    break;
  case 8:
    iVar1 = FUN_00401f00(0x14);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_008c0840();
      return puVar2;
    }
    break;
  case 9:
    iVar1 = FUN_00401f00(0x14);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_008c0330();
      return puVar2;
    }
    break;
  case 10:
    iVar1 = FUN_00401f00(0x14);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_008c22d0();
      return puVar2;
    }
    break;
  case 0xc:
    iVar1 = FUN_00401f00(0x14);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_008bfa80();
      return puVar2;
    }
    break;
  case 0xd:
    iVar1 = FUN_00401f00(0x14);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_008bf360();
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



int FUN_008e7fd0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar2 = (**(code **)(*param_1 + 0xc))();
  puVar3 = (undefined4 *)FUN_008e7e60(uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_008a0200(param_1);
    (**(code **)*puVar3)(0,param_2);
    iVar1 = puVar3[1];
    if (*(short *)(iVar1 + 4) != 0) {
      *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    }
    *puVar3 = &PTR_FUN_00a56484;
    FUN_008a0200(0);
    FUN_00401f20(puVar3);
    return iVar1;
  }
  return 0;
}



int FUN_008e8040(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  iVar1 = param_1;
  piVar2 = (int *)(param_1 + 0x21c);
  param_1 = 4;
  (**(code **)(*piVar2 + 4))(*piVar2,&local_4,4,&param_1,1);
  piVar2 = (int *)FUN_008e7e60(local_4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(iVar1);
    iVar1 = piVar2[1];
    if (*(short *)(iVar1 + 4) != 0) {
      *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    }
    *piVar2 = (int)&PTR_FUN_00a56484;
    FUN_008a0200(0);
    FUN_00401f20(piVar2);
    return iVar1;
  }
  return 0;
}



void FUN_008e80c0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uStack_4;
  
  piVar1 = param_2;
  uStack_4 = (**(code **)(*param_2 + 0xc))();
  piVar2 = (int *)FUN_008e7e60(uStack_4);
  FUN_008a0200(piVar1);
  param_2 = (int *)0x4;
  (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220),&uStack_4,4,&param_2,1);
  (**(code **)(*piVar2 + 8))(param_1);
  *piVar2 = (int)&PTR_FUN_00a56484;
  FUN_008a0200(0);
  FUN_00401f20(piVar2);
  return;
}



void FUN_008e8140(int *param_1,int *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar3 = param_1[1];
  if ((iVar3 == param_2[1]) && (iVar7 = 0, 0 < iVar3)) {
    iVar6 = 0;
    bVar8 = true;
    do {
      if (!bVar8) {
        return;
      }
      pfVar1 = (float *)(*param_1 + iVar6);
      pfVar2 = (float *)(*param_2 + iVar6);
      auVar4._4_4_ = -(uint)(0.001 < ABS(pfVar1[1] - pfVar2[1]));
      auVar4._0_4_ = -(uint)(0.001 < ABS(*pfVar1 - *pfVar2));
      auVar4._8_4_ = -(uint)(0.001 < ABS(pfVar1[2] - pfVar2[2]));
      auVar4._12_4_ = -(uint)(0.001 < ABS(pfVar1[3] - pfVar2[3]));
      iVar5 = movmskps(*param_2,auVar4);
      bVar8 = iVar5 == 0;
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x10;
    } while (iVar7 < iVar3);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int FUN_008e81b0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_54 [4];
  int local_50 [5];
  int local_3c [3];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_54;
  local_3c[0] = param_2[1];
  local_50[0] = 4;
  (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220),local_3c,4,local_50,1);
  local_3c[2] = local_3c[0] << 4;
  iVar2 = 0;
  if (0 < local_3c[0]) {
    local_50[0] = 0;
    do {
      puVar1 = (undefined4 *)(*param_2 + local_50[0]);
      uStack_30 = *puVar1;
      uStack_2c = puVar1[1];
      uStack_28 = puVar1[2];
      uStack_24 = puVar1[3];
      local_3c[1] = 0x10;
      (**(code **)(*(int *)(param_1 + 0x220) + 8))
                (*(int *)(param_1 + 0x220),&uStack_30,0x10,local_3c + 1,1);
      local_50[0] = local_50[0] + 0x10;
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_3c[0]);
  }
  return local_3c[2];
}



int FUN_008e8270(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  iVar1 = param_2;
  iVar2 = 0;
  if (param_2 != 0) {
    param_2 = *(int *)(param_2 + 0x24);
    local_4 = 4;
    (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220),&param_2,4,&local_4,1);
    local_4 = 0x10;
    (**(code **)(*(int *)(param_1 + 0x220) + 8))
              (*(int *)(param_1 + 0x220),iVar1 + 0x10,0x10,&local_4,1);
    iVar2 = param_2;
    if (param_2 != 0) {
      local_4 = 1;
      (**(code **)(*(int *)(param_1 + 0x220) + 8))
                (*(int *)(param_1 + 0x220),*(undefined4 *)(iVar1 + 0x20),param_2,&local_4,1);
      iVar2 = param_2;
    }
  }
  return iVar2;
}



int FUN_008e8310(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uStack_8;
  int iStack_4;
  
  piVar3 = param_2;
  iVar2 = param_1;
  param_2 = (int *)param_2[1];
  piVar1 = (int *)(param_1 + 0x220);
  param_1 = 4;
  (**(code **)(*piVar1 + 8))(*piVar1,&param_2,4,&param_1,1);
  iStack_4 = (int)param_2 * 4;
  iVar4 = 0;
  if (0 < (int)param_2) {
    do {
      uStack_8 = *(undefined4 *)(*piVar3 + iVar4 * 4);
      param_1 = 4;
      (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),&uStack_8,4,&param_1,1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_2);
    return iStack_4;
  }
  return iStack_4;
}



/* WARNING: Type propagation algorithm not settling */

int FUN_008e83b0(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_8 [2];
  
  local_8[0] = 0;
  local_8[1] = 4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),local_8,4,local_8 + 1,1);
  if (-1 < param_2[2]) {
    FUN_008a75d0(*param_2,param_2[2] << 4,0x14);
  }
  uVar4 = local_8[0];
  param_2[2] = param_2[2] & 0xc0000000U | 0x80000000;
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < (int)local_8[0]) {
    uVar1 = local_8[0];
    if ((int)local_8[0] < 0) {
      uVar1 = 0;
    }
    FUN_008a6e40(param_2,uVar1,0x10);
  }
  param_2[1] = uVar4;
  iVar3 = local_8[0] << 4;
  if (local_8[0] != 0) {
    iVar2 = 0;
    uVar4 = 0;
    do {
      (**(code **)(*(int *)(param_1 + 0x21c) + 4))
                (*(int *)(param_1 + 0x21c),*param_2 + iVar2,0x10,0,0);
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar4 < local_8[0]);
  }
  return iVar3;
}



int FUN_008e84b0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iStack_40;
  int iStack_3c;
  undefined1 auStack_38 [52];
  
  puVar3 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x30,0x25);
  *(undefined2 *)(puVar3 + 1) = 0x30;
  *(undefined2 *)((int)puVar3 + 6) = 1;
  *puVar3 = &PTR_FUN_00a45fec;
  puVar3[10] = 0x80000000;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *param_2 = (int)puVar3;
  iStack_40 = 0;
  iStack_3c = 4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),&iStack_40,4,&iStack_3c,1);
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),*param_2 + 0x10,0x10,0,0);
  if (*(uint *)(param_1 + 4) < 6) {
    if (iStack_40 == 0) {
      return 0;
    }
    iStack_40 = iStack_40 + -0x30;
    iStack_3c = 4;
    (**(code **)(*(int *)(param_1 + 0x21c) + 4))
              (*(int *)(param_1 + 0x21c),auStack_38,0x20,&iStack_3c,1);
  }
  if (iStack_40 != 0) {
    iVar1 = *param_2;
    uVar5 = *(uint *)(iVar1 + 0x28) & 0x3fffffff;
    iStack_3c = iStack_40;
    if ((int)uVar5 < iStack_40) {
      iVar2 = uVar5 * 2;
      iVar4 = iStack_40;
      if (iStack_40 < iVar2) {
        iVar4 = iVar2;
      }
      FUN_008a6e40(iVar1 + 0x20,iVar4,1);
    }
    *(int *)(iVar1 + 0x24) = iStack_3c;
    (**(code **)(*(int *)(param_1 + 0x21c) + 4))
              (*(int *)(param_1 + 0x21c),*(undefined4 *)(*param_2 + 0x20),iStack_40,0,0);
  }
  return iStack_40;
}



int FUN_008e85e0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  iVar3 = param_1;
  piVar1 = (int *)(param_1 + 0x21c);
  iVar5 = 0;
  local_4 = 0;
  param_1 = 4;
  (**(code **)(*piVar1 + 4))(*piVar1,&local_4,4,&param_1,1);
  piVar1 = param_2;
  if (-1 < param_2[2]) {
    FUN_008a75d0(*param_2,param_2[2] * 4,0x14);
  }
  iVar2 = local_4;
  piVar1[2] = piVar1[2] & 0xc0000000U | 0x80000000;
  *piVar1 = 0;
  piVar1[1] = 0;
  if (0 < local_4) {
    iVar4 = local_4;
    if (local_4 < 0) {
      iVar4 = 0;
    }
    FUN_008a6e40(piVar1,iVar4,4);
  }
  piVar1[1] = iVar2;
  iVar2 = local_4 * 4;
  if (0 < local_4) {
    do {
      param_1 = 4;
      (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
                (*(int *)(iVar3 + 0x21c),*piVar1 + iVar5 * 4,4,&param_1,1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_4);
  }
  return iVar2;
}



void FUN_008e86e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_008e89d0(param_1,param_2);
  *in_ECX = &PTR_FUN_00a9abc4;
  in_ECX[7] = 0x3f800000;
  return;
}



void FUN_008e8720(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9abc4;
  FUN_008e8a10();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008e8750(byte param_1)

{
  FUN_008e8a10();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008e87b0(undefined4 param_1,undefined4 param_2,undefined1 (*param_3) [16])

{
  int in_ECX;
  undefined4 unaff_EBX;
  int iVar1;
  undefined4 unaff_ESI;
  undefined1 auVar2 [16];
  undefined8 uStack_34;
  undefined1 auStack_2c [16];
  
  (**(code **)(*(int *)**(undefined4 **)(in_ECX + 0x10) + 0xc))(param_1,param_2,param_3);
  iVar1 = 1;
  if (1 < *(int *)(in_ECX + 0x14)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x10) + iVar1 * 8) + 0xc))
                (param_1,param_2,&stack0xffffffc4);
      auVar2._4_4_ = unaff_EBX;
      auVar2._0_4_ = unaff_ESI;
      auVar2._8_8_ = uStack_34;
      auVar2 = minps(*param_3,auVar2);
      *param_3 = auVar2;
      auVar2 = maxps(param_3[1],auStack_2c);
      param_3[1] = auVar2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x14));
  }
  return;
}



void FUN_008e8880(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(*(int *)(in_ECX + 0x10) + 4 + param_1 * 8) = param_2;
  return;
}



void FUN_008e88a0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  undefined4 uVar6;
  
  piVar1 = (int *)(in_ECX + 0x10);
  uVar3 = *(uint *)(in_ECX + 0x18) & 0x3fffffff;
  if ((int)uVar3 < param_2) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= param_2) {
      iVar4 = param_2;
    }
    FUN_008a6e40(piVar1,iVar4,8);
  }
  iVar4 = 0;
  *(int *)(in_ECX + 0x14) = param_2;
  if (0 < param_2) {
    iVar5 = param_3 - (int)param_1;
    do {
      if (*param_1 != 0) {
        *(int *)(*piVar1 + iVar4 * 8) = *param_1;
        if (param_3 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(iVar5 + (int)param_1);
        }
        *(undefined4 *)(*piVar1 + 4 + iVar4 * 8) = uVar6;
        if (*(short *)(*param_1 + 4) != 0) {
          psVar2 = (short *)(*param_1 + 6);
          *psVar2 = *psVar2 + 1;
        }
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 1;
    } while (iVar4 < param_2);
  }
  return;
}



void FUN_008e8930(int *param_1)

{
  int in_ECX;
  int iVar1;
  
  (**(code **)*param_1)("ListShape",1);
  if (-1 < *(int *)(in_ECX + 0x18)) {
    (**(code **)(*param_1 + 4))
              ("ChildPtrs",1,*(undefined4 *)(in_ECX + 0x10),*(int *)(in_ECX + 0x14) << 3,
               *(int *)(in_ECX + 0x18) << 3);
  }
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      (**(code **)(*param_1 + 8))("Child",1,*(undefined4 *)(*(int *)(in_ECX + 0x10) + iVar1 * 8));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x14));
  }
  (**(code **)(*param_1 + 0x14))();
  return;
}



void FUN_008e89d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_009156c0();
  *in_ECX = &PTR_FUN_00a9ac24;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0x80000000;
  FUN_008e88a0(param_1,param_2,0);
  return;
}



void FUN_008e8a10(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  iVar2 = 0;
  *in_ECX = &PTR_FUN_00a9ac24;
  if (0 < (int)in_ECX[5]) {
    do {
      puVar1 = *(undefined4 **)(in_ECX[4] + iVar2 * 8);
      if ((*(short *)(puVar1 + 1) != 0) &&
         (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
         *(short *)((int)puVar1 + 6) == 0)) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)in_ECX[5]);
  }
  if (-1 < (int)in_ECX[6]) {
    FUN_008a75d0(in_ECX[4],in_ECX[6] << 3,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008e8aa0(int *param_1)

{
  int in_ECX;
  
  (**(code **)*param_1)("TransformShp",1);
  (**(code **)(*param_1 + 8))("ChildShape",1,*(undefined4 *)(in_ECX + 0xc));
  (**(code **)(*param_1 + 0x14))();
  return;
}



void FUN_008e8ae0(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[3];
  *in_ECX = &PTR_FUN_00a9acb0;
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008e8b50(undefined4 param_1,undefined4 *param_2)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  
  in_ECX[3] = param_1;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a9acb0;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  in_ECX[8] = *param_2;
  in_ECX[9] = uVar2;
  in_ECX[10] = uVar3;
  in_ECX[0xb] = uVar4;
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  in_ECX[0xc] = param_2[4];
  in_ECX[0xd] = uVar2;
  in_ECX[0xe] = uVar3;
  in_ECX[0xf] = uVar4;
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  in_ECX[0x10] = param_2[8];
  in_ECX[0x11] = uVar2;
  in_ECX[0x12] = uVar3;
  in_ECX[0x13] = uVar4;
  uVar2 = param_2[0xd];
  uVar3 = param_2[0xe];
  uVar4 = param_2[0xf];
  in_ECX[0x14] = param_2[0xc];
  in_ECX[0x15] = uVar2;
  in_ECX[0x16] = uVar3;
  in_ECX[0x17] = uVar4;
  FUN_008b1b40(in_ECX + 8);
  if (*(short *)(in_ECX[3] + 4) != 0) {
    psVar1 = (short *)(in_ECX[3] + 6);
    *psVar1 = *psVar1 + 1;
  }
  return;
}



void FUN_008e8bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  undefined1 local_50 [76];
  
  FUN_008b1f70(param_1,in_ECX + 0x20);
  (**(code **)(**(int **)(in_ECX + 0xc) + 0xc))(local_50,param_2,param_3);
  return;
}



float10 FUN_008e8bf0(float *param_1)

{
  float fVar1;
  int in_ECX;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar4 = *param_1;
  fVar3 = param_1[1];
  fVar1 = param_1[2];
  local_20 = *(float *)(in_ECX + 0x20) * fVar4 + *(float *)(in_ECX + 0x24) * fVar3 +
             *(float *)(in_ECX + 0x28) * fVar1;
  fStack_1c = *(float *)(in_ECX + 0x30) * fVar4 + *(float *)(in_ECX + 0x34) * fVar3 +
              *(float *)(in_ECX + 0x38) * fVar1;
  fStack_18 = *(float *)(in_ECX + 0x40) * fVar4 + *(float *)(in_ECX + 0x44) * fVar3 +
              *(float *)(in_ECX + 0x48) * fVar1;
  fStack_14 = *(float *)(in_ECX + 0x40) * fVar4 + *(float *)(in_ECX + 0x44) * fVar3 +
              *(float *)(in_ECX + 0x48) * fVar1;
  fVar2 = (float10)(**(code **)(**(int **)(in_ECX + 0xc) + 0x10))(&local_20);
  fVar4 = (float)fVar2;
  fVar3 = fVar4 * fStack_24;
  local_20 = fVar4 * local_20;
  fVar4 = fVar4 * fStack_1c;
  return (float10)((*(float *)(in_ECX + 0x28) * fVar3 + *(float *)(in_ECX + 0x38) * local_20 +
                   *(float *)(in_ECX + 0x48) * fVar4 + *(float *)(in_ECX + 0x58)) * param_1[2] +
                  (*(float *)(in_ECX + 0x24) * fVar3 + *(float *)(in_ECX + 0x34) * local_20 +
                  *(float *)(in_ECX + 0x44) * fVar4 + *(float *)(in_ECX + 0x54)) * param_1[1] +
                  (*(float *)(in_ECX + 0x20) * fVar3 + *(float *)(in_ECX + 0x30) * local_20 +
                  *(float *)(in_ECX + 0x40) * fVar4 + *(float *)(in_ECX + 0x50)) * *param_1);
}



void FUN_008e8cf0(char *param_1,float *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int in_ECX;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  int unaff_FS_OFFSET;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  char cStack_64;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  float local_40 [4];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  iVar9 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar9 + 0x1a4);
    *puVar1 = "TtrcTransform";
    uVar2 = rdtsc();
    local_54 = (undefined4)uVar2;
    puVar1[1] = local_54;
    *(undefined4 **)(iVar9 + 0x1a4) = puVar1 + 3;
  }
  fVar13 = *(float *)(in_ECX + 0x40);
  fVar15 = *(float *)(in_ECX + 0x44);
  fVar17 = *(float *)(in_ECX + 0x48);
  fVar3 = *(float *)(in_ECX + 0x20);
  fVar4 = *(float *)(in_ECX + 0x24);
  fVar5 = *(float *)(in_ECX + 0x28);
  fVar6 = *(float *)(in_ECX + 0x30);
  fVar7 = *(float *)(in_ECX + 0x34);
  fVar8 = *(float *)(in_ECX + 0x38);
  fVar12 = *param_2 - *(float *)(in_ECX + 0x50);
  fVar14 = param_2[1] - *(float *)(in_ECX + 0x54);
  fVar16 = param_2[2] - *(float *)(in_ECX + 0x58);
  pfVar10 = param_2;
  pfVar11 = local_40;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar11 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    pfVar11 = pfVar11 + 1;
  }
  local_40[0] = fVar3 * fVar12 + fVar4 * fVar14 + fVar5 * fVar16;
  local_40[1] = fVar6 * fVar12 + fVar7 * fVar14 + fVar8 * fVar16;
  local_40[2] = fVar13 * fVar12 + fVar15 * fVar14 + fVar17 * fVar16;
  local_40[3] = fVar13 * fVar12 + fVar15 * fVar14 + fVar17 * fVar16;
  fVar13 = param_2[4] - *(float *)(in_ECX + 0x50);
  fVar15 = param_2[5] - *(float *)(in_ECX + 0x54);
  fVar17 = param_2[6] - *(float *)(in_ECX + 0x58);
  local_30 = *(float *)(in_ECX + 0x20) * fVar13 + *(float *)(in_ECX + 0x24) * fVar15 +
             *(float *)(in_ECX + 0x28) * fVar17;
  fStack_2c = *(float *)(in_ECX + 0x30) * fVar13 + *(float *)(in_ECX + 0x34) * fVar15 +
              *(float *)(in_ECX + 0x38) * fVar17;
  fStack_28 = *(float *)(in_ECX + 0x40) * fVar13 + *(float *)(in_ECX + 0x44) * fVar15 +
              *(float *)(in_ECX + 0x48) * fVar17;
  fStack_24 = *(float *)(in_ECX + 0x40) * fVar13 + *(float *)(in_ECX + 0x44) * fVar15 +
              *(float *)(in_ECX + 0x48) * fVar17;
  (**(code **)(**(int **)(in_ECX + 0xc) + 0x14))(&local_58,local_40,param_3);
  if (cStack_64 != '\0') {
    uStack_5c = *param_3;
    local_58 = param_3[1];
    local_54 = param_3[2];
    uStack_50 = param_3[3];
    FUN_0088fe00((float *)(in_ECX + 0x20),&uStack_5c);
  }
  iVar9 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar9 + 0x1a4);
    *puVar1 = &DAT_00a9610c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar9 + 0x1a4) = puVar1 + 3;
    *param_1 = cStack_64;
    return;
  }
  *param_1 = cStack_64;
  return;
}



void FUN_008e8ed0(float *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int in_ECX;
  int iVar9;
  float *pfVar10;
  int unaff_FS_OFFSET;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int *local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  int local_84;
  float local_80 [4];
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_50 [76];
  
  iVar9 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar9 + 0x1a4);
    *puVar1 = "TtrcTransform";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar9 + 0x1a4) = puVar1 + 3;
  }
  fVar11 = *param_1 - *(float *)(in_ECX + 0x50);
  fVar13 = param_1[1] - *(float *)(in_ECX + 0x54);
  fVar15 = param_1[2] - *(float *)(in_ECX + 0x58);
  fVar3 = *(float *)(in_ECX + 0x40);
  fVar4 = *(float *)(in_ECX + 0x44);
  fVar5 = *(float *)(in_ECX + 0x48);
  fVar6 = *(float *)(in_ECX + 0x30);
  fVar7 = *(float *)(in_ECX + 0x34);
  fVar8 = *(float *)(in_ECX + 0x38);
  fVar12 = param_1[4];
  fVar14 = param_1[5];
  fVar16 = param_1[6];
  local_80[0] = *(float *)(in_ECX + 0x20) * fVar11 + *(float *)(in_ECX + 0x24) * fVar13 +
                *(float *)(in_ECX + 0x28) * fVar15;
  local_80[1] = *(float *)(in_ECX + 0x30) * fVar11 + *(float *)(in_ECX + 0x34) * fVar13 +
                *(float *)(in_ECX + 0x38) * fVar15;
  local_80[2] = *(float *)(in_ECX + 0x40) * fVar11 + *(float *)(in_ECX + 0x44) * fVar13 +
                *(float *)(in_ECX + 0x48) * fVar15;
  local_80[3] = *(float *)(in_ECX + 0x40) * fVar11 + *(float *)(in_ECX + 0x44) * fVar13 +
                *(float *)(in_ECX + 0x48) * fVar15;
  fVar11 = *(float *)(in_ECX + 0x20);
  fVar13 = *(float *)(in_ECX + 0x24);
  fVar15 = *(float *)(in_ECX + 0x28);
  pfVar10 = local_80;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar10 = *param_1;
    param_1 = param_1 + 1;
    pfVar10 = pfVar10 + 1;
  }
  fVar12 = fVar12 - *(float *)(in_ECX + 0x50);
  fVar14 = fVar14 - *(float *)(in_ECX + 0x54);
  fVar16 = fVar16 - *(float *)(in_ECX + 0x58);
  local_70 = fVar11 * fVar12 + fVar13 * fVar14 + fVar15 * fVar16;
  fStack_6c = fVar6 * fVar12 + fVar7 * fVar14 + fVar8 * fVar16;
  fStack_68 = fVar3 * fVar12 + fVar4 * fVar14 + fVar5 * fVar16;
  fStack_64 = fVar3 * fVar12 + fVar4 * fVar14 + fVar5 * fVar16;
  FUN_008b1f70(*(undefined4 *)(param_2 + 8),(float *)(in_ECX + 0x20));
  local_90 = *(int **)(in_ECX + 0xc);
  local_88 = local_50;
  local_84 = param_2;
  local_8c = *(undefined4 *)(param_2 + 4);
  (**(code **)(*local_90 + 0x18))(local_80,&local_90,param_3);
  iVar9 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar9 + 0x1a4) < *(uint *)(iVar9 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar9 + 0x1a4);
    *puVar1 = &DAT_00a9610c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar9 + 0x1a4) = puVar1 + 3;
  }
  return;
}



void FUN_008e90a0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00a9acf4;
  in_ECX[0x14] = 0xbf800000;
  in_ECX[0x15] = DAT_00b2fd20;
  in_ECX[0x16] = DAT_00b2fd24;
  in_ECX[0x17] = DAT_00b2fd28;
  uVar1 = DAT_00b2fd2c;
  in_ECX[4] = 0x7f7fffff;
  in_ECX[5] = 0x7f7fffff;
  in_ECX[6] = 0x7f7fffff;
  in_ECX[7] = 0x7f7fffff;
  in_ECX[0xc] = 0x7f7fffff;
  in_ECX[0xd] = 0x7f7fffff;
  in_ECX[0xe] = 0x7f7fffff;
  in_ECX[0xf] = 0x7f7fffff;
  in_ECX[0x18] = uVar1;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xb] = 0x3f800000;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x13] = 0x3f800000;
  return;
}



void FUN_008e9120(undefined1 *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar1 = *(int *)(param_2 + 0x50);
  fVar2 = *(float *)(iVar1 + 100);
  fVar3 = *(float *)(iVar1 + 0x68);
  uVar4 = *(undefined4 *)(iVar1 + 0x6c);
  fVar7 = *(float *)(in_ECX + 0x10) - *(float *)(iVar1 + 0x60);
  fVar8 = *(float *)(in_ECX + 0x14) - fVar2;
  fVar9 = *(float *)(in_ECX + 0x18) - fVar3;
  fVar10 = *(float *)(in_ECX + 0x20) - *(float *)(iVar1 + 0x80);
  fVar11 = *(float *)(in_ECX + 0x24) - *(float *)(iVar1 + 0x84);
  fVar12 = *(float *)(in_ECX + 0x28) - *(float *)(iVar1 + 0x88);
  fVar13 = *(float *)(in_ECX + 0x2c) - *(float *)(iVar1 + 0x8c);
  if ((fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7 <
       *(float *)(in_ECX + 0x54) * *(float *)(in_ECX + 0x54)) &&
     ((fVar12 * fVar12 + fVar10 * fVar10 + fVar13 * fVar13 + fVar11 * fVar11) *
      *(float *)(iVar1 + 0xb0) * *(float *)(iVar1 + 0xb0) <
      *(float *)(in_ECX + 0x58) * *(float *)(in_ECX + 0x58))) {
    *param_1 = 1;
    return;
  }
  *(float *)(in_ECX + 0x10) = *(float *)(iVar1 + 0x60);
  *(float *)(in_ECX + 0x14) = fVar2;
  *(float *)(in_ECX + 0x18) = fVar3;
  *(undefined4 *)(in_ECX + 0x1c) = uVar4;
  uVar4 = *(undefined4 *)(iVar1 + 0x84);
  uVar5 = *(undefined4 *)(iVar1 + 0x88);
  uVar6 = *(undefined4 *)(iVar1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(iVar1 + 0x80);
  *(undefined4 *)(in_ECX + 0x24) = uVar4;
  *(undefined4 *)(in_ECX + 0x28) = uVar5;
  *(undefined4 *)(in_ECX + 0x2c) = uVar6;
  *param_1 = 0;
  return;
}



void FUN_008e91f0(undefined1 *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar1 = *(int *)(param_2 + 0x50);
  fVar2 = *(float *)(iVar1 + 100);
  fVar3 = *(float *)(iVar1 + 0x68);
  uVar4 = *(undefined4 *)(iVar1 + 0x6c);
  fVar7 = *(float *)(in_ECX + 0x30) - *(float *)(iVar1 + 0x60);
  fVar8 = *(float *)(in_ECX + 0x34) - fVar2;
  fVar9 = *(float *)(in_ECX + 0x38) - fVar3;
  fVar10 = *(float *)(in_ECX + 0x40) - *(float *)(iVar1 + 0x80);
  fVar11 = *(float *)(in_ECX + 0x44) - *(float *)(iVar1 + 0x84);
  fVar12 = *(float *)(in_ECX + 0x48) - *(float *)(iVar1 + 0x88);
  fVar13 = *(float *)(in_ECX + 0x4c) - *(float *)(iVar1 + 0x8c);
  if ((fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7 <
       *(float *)(in_ECX + 0x5c) * *(float *)(in_ECX + 0x5c)) &&
     ((fVar12 * fVar12 + fVar10 * fVar10 + fVar13 * fVar13 + fVar11 * fVar11) *
      *(float *)(iVar1 + 0xb0) * *(float *)(iVar1 + 0xb0) <
      *(float *)(in_ECX + 0x60) * *(float *)(in_ECX + 0x60))) {
    *param_1 = 1;
    return;
  }
  *(float *)(in_ECX + 0x30) = *(float *)(iVar1 + 0x60);
  *(float *)(in_ECX + 0x34) = fVar2;
  *(float *)(in_ECX + 0x38) = fVar3;
  *(undefined4 *)(in_ECX + 0x3c) = uVar4;
  uVar4 = *(undefined4 *)(iVar1 + 0x84);
  uVar5 = *(undefined4 *)(iVar1 + 0x88);
  uVar6 = *(undefined4 *)(iVar1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(iVar1 + 0x80);
  *(undefined4 *)(in_ECX + 0x44) = uVar4;
  *(undefined4 *)(in_ECX + 0x48) = uVar5;
  *(undefined4 *)(in_ECX + 0x4c) = uVar6;
  *param_1 = 0;
  return;
}



void FUN_008e92e0(float *param_1)

{
  float fVar1;
  int in_ECX;
  
  fVar1 = 1.0 / *(float *)(in_ECX + 0xc4);
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  *param_1 = fVar1;
  param_1[5] = fVar1;
  param_1[10] = fVar1;
  return;
}



void FUN_008e93e0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0xc4);
  uVar2 = *(undefined4 *)(in_ECX + 0xc4);
  uVar3 = *(undefined4 *)(in_ECX + 0xc4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = uVar3;
  param_1[5] = uVar2;
  param_1[10] = uVar1;
  return;
}



void FUN_008e9420(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_ECX;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *(float *)(in_ECX + 0xc0);
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  *(float *)(in_ECX + 0xd0) = *(float *)(in_ECX + 0xd0) + fVar1 * *param_1;
  *(float *)(in_ECX + 0xd4) = *(float *)(in_ECX + 0xd4) + fVar1 * fVar2;
  *(float *)(in_ECX + 0xd8) = *(float *)(in_ECX + 0xd8) + fVar1 * fVar3;
  *(float *)(in_ECX + 0xdc) = *(float *)(in_ECX + 0xdc) + fVar1 * fVar4;
  fVar1 = *(float *)(in_ECX + 0xc4);
  fVar6 = *param_2 - *(float *)(in_ECX + 0x60);
  fVar7 = param_2[1] - *(float *)(in_ECX + 100);
  fVar8 = param_2[2] - *(float *)(in_ECX + 0x68);
  fVar9 = param_2[3] - *(float *)(in_ECX + 0x6c);
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  *(float *)(in_ECX + 0xe0) = *(float *)(in_ECX + 0xe0) + fVar1 * (fVar7 * fVar4 - fVar8 * fVar3);
  *(float *)(in_ECX + 0xe4) = *(float *)(in_ECX + 0xe4) + fVar1 * (fVar8 * fVar2 - fVar6 * fVar4);
  *(float *)(in_ECX + 0xe8) = *(float *)(in_ECX + 0xe8) + fVar1 * (fVar6 * fVar3 - fVar7 * fVar2);
  *(float *)(in_ECX + 0xec) = *(float *)(in_ECX + 0xec) + fVar1 * (fVar9 * fVar5 - fVar9 * fVar5);
  return;
}



void FUN_008e94c0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0xc4);
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  *(float *)(in_ECX + 0xe0) = *(float *)(in_ECX + 0xe0) + fVar1 * *param_1;
  *(float *)(in_ECX + 0xe4) = *(float *)(in_ECX + 0xe4) + fVar1 * fVar2;
  *(float *)(in_ECX + 0xe8) = *(float *)(in_ECX + 0xe8) + fVar1 * fVar3;
  *(float *)(in_ECX + 0xec) = *(float *)(in_ECX + 0xec) + fVar1 * fVar4;
  return;
}



void FUN_008e9500(float param_1,float *param_2)

{
  int *in_ECX;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_20 = param_1 * *param_2;
  fStack_1c = param_1 * param_2[1];
  fStack_18 = param_1 * param_2[2];
  fStack_14 = param_1 * param_2[3];
  (**(code **)(*in_ECX + 100))(&local_20);
  return;
}



void FUN_008e9540(float *param_1,undefined1 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int in_ECX;
  
  fVar1 = param_1[2];
  fVar3 = 1.0 - fVar1 * *(float *)(in_ECX + 200);
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  *(float *)(in_ECX + 0xd0) = fVar3 * *(float *)(in_ECX + 0xd0);
  *(float *)(in_ECX + 0xd4) = fVar3 * *(float *)(in_ECX + 0xd4);
  *(float *)(in_ECX + 0xd8) = fVar3 * *(float *)(in_ECX + 0xd8);
  *(float *)(in_ECX + 0xdc) = fVar3 * *(float *)(in_ECX + 0xdc);
  fVar1 = 1.0 - fVar1 * *(float *)(in_ECX + 0xcc);
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(in_ECX + 0xe0) = fVar1 * *(float *)(in_ECX + 0xe0);
  *(float *)(in_ECX + 0xe4) = fVar1 * *(float *)(in_ECX + 0xe4);
  *(float *)(in_ECX + 0xe8) = fVar1 * *(float *)(in_ECX + 0xe8);
  *(float *)(in_ECX + 0xec) = fVar1 * *(float *)(in_ECX + 0xec);
  *param_2 = 0;
  uVar2 = *(undefined4 *)(in_ECX + 0xc4);
  *(undefined4 *)(param_2 + 0x30) = uVar2;
  *(undefined4 *)(param_2 + 0x34) = uVar2;
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(in_ECX + 0xc0);
  fVar3 = *(float *)(in_ECX + 100);
  fVar4 = *(float *)(in_ECX + 0x68);
  fVar5 = *(float *)(in_ECX + 0x6c);
  fVar1 = (*param_1 - *(float *)(in_ECX + 0x5c)) * *(float *)(in_ECX + 0x6c);
  fVar6 = *(float *)(in_ECX + 0x54);
  fVar7 = *(float *)(in_ECX + 0x58);
  fVar8 = *(float *)(in_ECX + 0x5c);
  *(float *)(param_2 + 0x40) =
       (1.0 - fVar1) * *(float *)(in_ECX + 0x50) + fVar1 * *(float *)(in_ECX + 0x60);
  *(float *)(param_2 + 0x44) = (1.0 - fVar1) * fVar6 + fVar1 * fVar3;
  *(float *)(param_2 + 0x48) = (1.0 - fVar1) * fVar7 + fVar1 * fVar4;
  *(float *)(param_2 + 0x4c) = (1.0 - fVar1) * fVar8 + fVar1 * fVar5;
  uVar2 = *(undefined4 *)(in_ECX + 0xe4);
  uVar9 = *(undefined4 *)(in_ECX + 0xe8);
  uVar10 = *(undefined4 *)(in_ECX + 0xec);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(in_ECX + 0xe0);
  *(undefined4 *)(param_2 + 0x24) = uVar2;
  *(undefined4 *)(param_2 + 0x28) = uVar9;
  *(undefined4 *)(param_2 + 0x2c) = uVar10;
  uVar2 = *(undefined4 *)(in_ECX + 0xd4);
  uVar9 = *(undefined4 *)(in_ECX + 0xd8);
  uVar10 = *(undefined4 *)(in_ECX + 0xdc);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(in_ECX + 0xd0);
  *(undefined4 *)(param_2 + 0x14) = uVar2;
  *(undefined4 *)(param_2 + 0x18) = uVar9;
  *(undefined4 *)(param_2 + 0x1c) = uVar10;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  *(undefined4 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined4 *)(param_2 + 0x68) = 0;
  *(undefined4 *)(param_2 + 0x6c) = 0;
  *(undefined4 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x74) = 0;
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_2 + 0x7c) = 0;
  *(undefined4 *)(param_2 + 0x50) = 0x3f800000;
  *(undefined4 *)(param_2 + 100) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x78) = 0x3f800000;
  param_2[0xc] = 1;
  *(uint *)(param_2 + 8) = (uint)*(ushort *)(in_ECX + 0xbc);
  *(uint *)(param_2 + 4) = (uint)*(ushort *)(in_ECX + 0xbe);
  return;
}



void FUN_008e96c0(undefined4 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  float fVar4;
  float local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(in_ECX + 0xd0) = *(float *)(in_ECX + 0xd0) + *param_2;
  *(float *)(in_ECX + 0xd4) = *(float *)(in_ECX + 0xd4) + fVar1;
  *(float *)(in_ECX + 0xd8) = *(float *)(in_ECX + 0xd8) + fVar2;
  *(float *)(in_ECX + 0xdc) = *(float *)(in_ECX + 0xdc) + fVar3;
  fVar1 = (float)param_1[2];
  fVar2 = 1.0 - fVar1 * *(float *)(in_ECX + 200);
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(in_ECX + 0xd0) = fVar2 * *(float *)(in_ECX + 0xd0);
  *(float *)(in_ECX + 0xd4) = fVar2 * *(float *)(in_ECX + 0xd4);
  *(float *)(in_ECX + 0xd8) = fVar2 * *(float *)(in_ECX + 0xd8);
  *(float *)(in_ECX + 0xdc) = fVar2 * *(float *)(in_ECX + 0xdc);
  fVar1 = 1.0 - fVar1 * *(float *)(in_ECX + 0xcc);
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(in_ECX + 0xe0) = fVar1 * *(float *)(in_ECX + 0xe0);
  *(float *)(in_ECX + 0xe4) = fVar1 * *(float *)(in_ECX + 0xe4);
  *(float *)(in_ECX + 0xe8) = fVar1 * *(float *)(in_ECX + 0xe8);
  *(float *)(in_ECX + 0xec) = fVar1 * *(float *)(in_ECX + 0xec);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(in_ECX + 0x60);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(in_ECX + 100);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(in_ECX + 0x68);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0x6c);
  *(undefined4 *)(in_ECX + 0x5c) = *param_1;
  fVar1 = *(float *)(in_ECX + 0xd0);
  fVar2 = *(float *)(in_ECX + 0xd4);
  fVar3 = *(float *)(in_ECX + 0xd8);
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (*(float *)(in_ECX + 0xb4) * *(float *)(in_ECX + 0xb4) < fVar4) {
    fVar4 = *(float *)(in_ECX + 0xb4) / SQRT(fVar4);
    *(float *)(in_ECX + 0xd0) = fVar4 * fVar1;
    *(float *)(in_ECX + 0xd4) = fVar4 * fVar2;
    *(float *)(in_ECX + 0xd8) = fVar4 * fVar3;
    *(float *)(in_ECX + 0xdc) = fVar4 * *(float *)(in_ECX + 0xdc);
  }
  fVar1 = (float)param_1[2];
  *(float *)(in_ECX + 0x60) = *(float *)(in_ECX + 0x60) + fVar1 * *(float *)(in_ECX + 0xd0);
  *(float *)(in_ECX + 100) = *(float *)(in_ECX + 100) + fVar1 * *(float *)(in_ECX + 0xd4);
  *(float *)(in_ECX + 0x68) = *(float *)(in_ECX + 0x68) + fVar1 * *(float *)(in_ECX + 0xd8);
  *(float *)(in_ECX + 0x6c) = *(float *)(in_ECX + 0x6c) + fVar1 * *(float *)(in_ECX + 0xdc);
  *(undefined4 *)(in_ECX + 0x6c) = param_1[3];
  local_30 = *(undefined4 *)(in_ECX + 0x80);
  uStack_2c = *(undefined4 *)(in_ECX + 0x84);
  uStack_28 = *(undefined4 *)(in_ECX + 0x88);
  uStack_24 = *(undefined4 *)(in_ECX + 0x8c);
  *(undefined4 *)(in_ECX + 0x70) = local_30;
  *(undefined4 *)(in_ECX + 0x74) = uStack_2c;
  *(undefined4 *)(in_ECX + 0x78) = uStack_28;
  *(undefined4 *)(in_ECX + 0x7c) = uStack_24;
  fStack_18 = (float)param_1[2] * 0.5;
  local_20 = fStack_18 * *(float *)(in_ECX + 0xe0);
  fStack_1c = fStack_18 * *(float *)(in_ECX + 0xe4);
  fStack_18 = fStack_18 * *(float *)(in_ECX + 0xe8);
  local_3c = (fStack_18 * fStack_18 + fStack_1c * fStack_1c + local_20 * local_20) * 0.4052847;
  fVar1 = *(float *)(in_ECX + 0xb8) * (float)param_1[2];
  if (0.9 < fVar1) {
    fVar1 = 0.9;
  }
  fVar2 = fVar1 * fVar1;
  if (local_3c < fVar2 == (local_3c == fVar2)) {
    fVar1 = fVar1 / SQRT(local_3c);
    *(float *)(in_ECX + 0xe0) = fVar1 * *(float *)(in_ECX + 0xe0);
    *(float *)(in_ECX + 0xe4) = fVar1 * *(float *)(in_ECX + 0xe4);
    *(float *)(in_ECX + 0xe8) = fVar1 * *(float *)(in_ECX + 0xe8);
    *(float *)(in_ECX + 0xec) = fVar1 * *(float *)(in_ECX + 0xec);
    local_20 = fVar1 * local_20;
    fStack_1c = fVar1 * fStack_1c;
    fStack_18 = fVar1 * fStack_18;
    local_3c = fVar2;
  }
  fStack_14 = ((1.0 - local_3c * 0.822948) - local_3c * local_3c * 0.130529) -
              local_3c * local_3c * local_3c * 0.044408;
  FUN_00889470(&local_20,&local_30);
  FUN_004d6830();
  *(float *)(in_ECX + 0xa0) = local_20 + local_20;
  *(float *)(in_ECX + 0xa4) = fStack_1c + fStack_1c;
  *(float *)(in_ECX + 0xa8) = fStack_18 + fStack_18;
  *(float *)(in_ECX + 0xac) = fStack_14 + fStack_14;
  *(float *)(in_ECX + 0xac) = SQRT(local_3c) * 3.1415927;
  *(undefined4 *)(in_ECX + 0x80) = local_30;
  *(undefined4 *)(in_ECX + 0x84) = uStack_2c;
  *(undefined4 *)(in_ECX + 0x88) = uStack_28;
  *(undefined4 *)(in_ECX + 0x8c) = uStack_24;
  FUN_008b1dd0(in_ECX + 0x80);
  fVar1 = *(float *)(in_ECX + 0x90);
  fVar2 = *(float *)(in_ECX + 0x94);
  fVar3 = *(float *)(in_ECX + 0x98);
  *(float *)(in_ECX + 0x40) =
       *(float *)(in_ECX + 0x60) -
       (*(float *)(in_ECX + 0x10) * fVar1 + *(float *)(in_ECX + 0x20) * fVar2 +
       *(float *)(in_ECX + 0x30) * fVar3);
  *(float *)(in_ECX + 0x44) =
       *(float *)(in_ECX + 100) -
       (*(float *)(in_ECX + 0x14) * fVar1 + *(float *)(in_ECX + 0x24) * fVar2 +
       *(float *)(in_ECX + 0x34) * fVar3);
  *(float *)(in_ECX + 0x48) =
       *(float *)(in_ECX + 0x68) -
       (*(float *)(in_ECX + 0x18) * fVar1 + *(float *)(in_ECX + 0x28) * fVar2 +
       *(float *)(in_ECX + 0x38) * fVar3);
  *(float *)(in_ECX + 0x4c) =
       *(float *)(in_ECX + 0x6c) -
       (*(float *)(in_ECX + 0x1c) * fVar1 + *(float *)(in_ECX + 0x2c) * fVar2 +
       *(float *)(in_ECX + 0x3c) * fVar3);
  return;
}



int FUN_008e99f0(undefined4 *param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  float fVar7;
  float local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar1 = *(float *)(param_3 + 0x44);
  fVar2 = *(float *)(param_3 + 0x48);
  fVar3 = *(float *)(param_3 + 0x4c);
  *(float *)(in_ECX + 0xd0) = param_2 * *(float *)(param_3 + 0x40);
  *(float *)(in_ECX + 0xd4) = param_2 * fVar1;
  *(float *)(in_ECX + 0xd8) = param_2 * fVar2;
  *(float *)(in_ECX + 0xdc) = param_2 * fVar3;
  fVar1 = *(float *)(param_3 + 0x54);
  fVar2 = *(float *)(param_3 + 0x58);
  fVar3 = *(float *)(param_3 + 0x5c);
  *(float *)(in_ECX + 0xe0) = param_2 * *(float *)(param_3 + 0x50);
  *(float *)(in_ECX + 0xe4) = param_2 * fVar1;
  *(float *)(in_ECX + 0xe8) = param_2 * fVar2;
  *(float *)(in_ECX + 0xec) = param_2 * fVar3;
  *(undefined2 *)(in_ECX + 0xbe) = *(undefined2 *)(param_3 + 4);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(in_ECX + 0x60);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(in_ECX + 100);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(in_ECX + 0x68);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0x6c);
  *(undefined4 *)(in_ECX + 0x5c) = *param_1;
  fVar1 = *(float *)(in_ECX + 0xd0);
  fVar2 = *(float *)(in_ECX + 0xd4);
  fVar3 = *(float *)(in_ECX + 0xd8);
  fVar7 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (*(float *)(in_ECX + 0xb4) * *(float *)(in_ECX + 0xb4) < fVar7) {
    fVar7 = *(float *)(in_ECX + 0xb4) / SQRT(fVar7);
    *(float *)(in_ECX + 0xd0) = fVar7 * fVar1;
    *(float *)(in_ECX + 0xd4) = fVar7 * fVar2;
    *(float *)(in_ECX + 0xd8) = fVar7 * fVar3;
    *(float *)(in_ECX + 0xdc) = fVar7 * *(float *)(in_ECX + 0xdc);
  }
  fVar1 = (float)param_1[2];
  *(float *)(in_ECX + 0x60) = *(float *)(in_ECX + 0x60) + fVar1 * *(float *)(in_ECX + 0xd0);
  *(float *)(in_ECX + 100) = *(float *)(in_ECX + 100) + fVar1 * *(float *)(in_ECX + 0xd4);
  *(float *)(in_ECX + 0x68) = *(float *)(in_ECX + 0x68) + fVar1 * *(float *)(in_ECX + 0xd8);
  *(float *)(in_ECX + 0x6c) = *(float *)(in_ECX + 0x6c) + fVar1 * *(float *)(in_ECX + 0xdc);
  *(undefined4 *)(in_ECX + 0x6c) = param_1[3];
  local_30 = *(undefined4 *)(in_ECX + 0x80);
  uStack_2c = *(undefined4 *)(in_ECX + 0x84);
  uStack_28 = *(undefined4 *)(in_ECX + 0x88);
  uStack_24 = *(undefined4 *)(in_ECX + 0x8c);
  *(undefined4 *)(in_ECX + 0x70) = local_30;
  *(undefined4 *)(in_ECX + 0x74) = uStack_2c;
  *(undefined4 *)(in_ECX + 0x78) = uStack_28;
  *(undefined4 *)(in_ECX + 0x7c) = uStack_24;
  fStack_18 = (float)param_1[2] * 0.5;
  local_20 = fStack_18 * *(float *)(in_ECX + 0xe0);
  fStack_1c = fStack_18 * *(float *)(in_ECX + 0xe4);
  fStack_18 = fStack_18 * *(float *)(in_ECX + 0xe8);
  local_3c = (fStack_18 * fStack_18 + fStack_1c * fStack_1c + local_20 * local_20) * 0.4052847;
  fVar1 = *(float *)(in_ECX + 0xb8) * (float)param_1[2];
  if (0.9 < fVar1) {
    fVar1 = 0.9;
  }
  fVar2 = fVar1 * fVar1;
  if (local_3c < fVar2 == (local_3c == fVar2)) {
    fVar1 = fVar1 / SQRT(local_3c);
    local_20 = fVar1 * local_20;
    fStack_1c = fVar1 * fStack_1c;
    fStack_18 = fVar1 * fStack_18;
    *(float *)(in_ECX + 0xe0) = fVar1 * *(float *)(in_ECX + 0xe0);
    *(float *)(in_ECX + 0xe4) = fVar1 * *(float *)(in_ECX + 0xe4);
    *(float *)(in_ECX + 0xe8) = fVar1 * *(float *)(in_ECX + 0xe8);
    *(float *)(in_ECX + 0xec) = fVar1 * *(float *)(in_ECX + 0xec);
    local_3c = fVar2;
  }
  fStack_14 = ((1.0 - local_3c * 0.822948) - local_3c * local_3c * 0.130529) -
              local_3c * local_3c * local_3c * 0.044408;
  FUN_00889470(&local_20,&local_30);
  FUN_004d6830();
  *(float *)(in_ECX + 0xa0) = local_20 + local_20;
  *(float *)(in_ECX + 0xa4) = fStack_1c + fStack_1c;
  *(float *)(in_ECX + 0xa8) = fStack_18 + fStack_18;
  *(float *)(in_ECX + 0xac) = fStack_14 + fStack_14;
  *(float *)(in_ECX + 0xac) = SQRT(local_3c) * 3.1415927;
  *(undefined4 *)(in_ECX + 0x80) = local_30;
  *(undefined4 *)(in_ECX + 0x84) = uStack_2c;
  *(undefined4 *)(in_ECX + 0x88) = uStack_28;
  *(undefined4 *)(in_ECX + 0x8c) = uStack_24;
  FUN_008b1dd0(in_ECX + 0x80);
  fVar1 = *(float *)(in_ECX + 0x90);
  fVar2 = *(float *)(in_ECX + 0x94);
  fVar3 = *(float *)(in_ECX + 0x98);
  *(float *)(in_ECX + 0x40) =
       *(float *)(in_ECX + 0x60) -
       (*(float *)(in_ECX + 0x10) * fVar1 + *(float *)(in_ECX + 0x20) * fVar2 +
       *(float *)(in_ECX + 0x30) * fVar3);
  *(float *)(in_ECX + 0x44) =
       *(float *)(in_ECX + 100) -
       (*(float *)(in_ECX + 0x14) * fVar1 + *(float *)(in_ECX + 0x24) * fVar2 +
       *(float *)(in_ECX + 0x34) * fVar3);
  *(float *)(in_ECX + 0x48) =
       *(float *)(in_ECX + 0x68) -
       (*(float *)(in_ECX + 0x18) * fVar1 + *(float *)(in_ECX + 0x28) * fVar2 +
       *(float *)(in_ECX + 0x38) * fVar3);
  *(float *)(in_ECX + 0x4c) =
       *(float *)(in_ECX + 0x6c) -
       (*(float *)(in_ECX + 0x1c) * fVar1 + *(float *)(in_ECX + 0x2c) * fVar2 +
       *(float *)(in_ECX + 0x3c) * fVar3);
  uVar4 = *(undefined4 *)(param_3 + 0x14);
  uVar5 = *(undefined4 *)(param_3 + 0x18);
  uVar6 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(in_ECX + 0xd4) = uVar4;
  *(undefined4 *)(in_ECX + 0xd8) = uVar5;
  *(undefined4 *)(in_ECX + 0xdc) = uVar6;
  uVar4 = *(undefined4 *)(param_3 + 0x24);
  uVar5 = *(undefined4 *)(param_3 + 0x28);
  uVar6 = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(in_ECX + 0xe4) = uVar4;
  *(undefined4 *)(in_ECX + 0xe8) = uVar5;
  *(undefined4 *)(in_ECX + 0xec) = uVar6;
  return param_3 + 0x80;
}



int FUN_008e9d00(undefined4 *param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  float fVar4;
  float local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar1 = *(float *)(param_3 + 0x44);
  fVar2 = *(float *)(param_3 + 0x48);
  fVar3 = *(float *)(param_3 + 0x4c);
  *(float *)(in_ECX + 0xd0) = param_2 * *(float *)(param_3 + 0x40);
  *(float *)(in_ECX + 0xd4) = param_2 * fVar1;
  *(float *)(in_ECX + 0xd8) = param_2 * fVar2;
  *(float *)(in_ECX + 0xdc) = param_2 * fVar3;
  fVar1 = *(float *)(param_3 + 0x54);
  fVar2 = *(float *)(param_3 + 0x58);
  fVar3 = *(float *)(param_3 + 0x5c);
  *(float *)(in_ECX + 0xe0) = param_2 * *(float *)(param_3 + 0x50);
  *(float *)(in_ECX + 0xe4) = param_2 * fVar1;
  *(float *)(in_ECX + 0xe8) = param_2 * fVar2;
  *(float *)(in_ECX + 0xec) = param_2 * fVar3;
  *(undefined2 *)(in_ECX + 0xbe) = *(undefined2 *)(param_3 + 4);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(in_ECX + 0x60);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(in_ECX + 100);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(in_ECX + 0x68);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0x6c);
  *(undefined4 *)(in_ECX + 0x5c) = *param_1;
  fVar1 = *(float *)(in_ECX + 0xd0);
  fVar2 = *(float *)(in_ECX + 0xd4);
  fVar3 = *(float *)(in_ECX + 0xd8);
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (*(float *)(in_ECX + 0xb4) * *(float *)(in_ECX + 0xb4) < fVar4) {
    fVar4 = *(float *)(in_ECX + 0xb4) / SQRT(fVar4);
    *(float *)(in_ECX + 0xd0) = fVar4 * fVar1;
    *(float *)(in_ECX + 0xd4) = fVar4 * fVar2;
    *(float *)(in_ECX + 0xd8) = fVar4 * fVar3;
    *(float *)(in_ECX + 0xdc) = fVar4 * *(float *)(in_ECX + 0xdc);
  }
  fVar1 = (float)param_1[2];
  *(float *)(in_ECX + 0x60) = *(float *)(in_ECX + 0x60) + fVar1 * *(float *)(in_ECX + 0xd0);
  *(float *)(in_ECX + 100) = *(float *)(in_ECX + 100) + fVar1 * *(float *)(in_ECX + 0xd4);
  *(float *)(in_ECX + 0x68) = *(float *)(in_ECX + 0x68) + fVar1 * *(float *)(in_ECX + 0xd8);
  *(float *)(in_ECX + 0x6c) = *(float *)(in_ECX + 0x6c) + fVar1 * *(float *)(in_ECX + 0xdc);
  *(undefined4 *)(in_ECX + 0x6c) = param_1[3];
  local_30 = *(undefined4 *)(in_ECX + 0x80);
  uStack_2c = *(undefined4 *)(in_ECX + 0x84);
  uStack_28 = *(undefined4 *)(in_ECX + 0x88);
  uStack_24 = *(undefined4 *)(in_ECX + 0x8c);
  *(undefined4 *)(in_ECX + 0x70) = local_30;
  *(undefined4 *)(in_ECX + 0x74) = uStack_2c;
  *(undefined4 *)(in_ECX + 0x78) = uStack_28;
  *(undefined4 *)(in_ECX + 0x7c) = uStack_24;
  fStack_18 = (float)param_1[2] * 0.5;
  local_20 = fStack_18 * *(float *)(in_ECX + 0xe0);
  fStack_1c = fStack_18 * *(float *)(in_ECX + 0xe4);
  fStack_18 = fStack_18 * *(float *)(in_ECX + 0xe8);
  local_3c = (fStack_18 * fStack_18 + fStack_1c * fStack_1c + local_20 * local_20) * 0.4052847;
  fVar1 = *(float *)(in_ECX + 0xb8) * (float)param_1[2];
  if (0.9 < fVar1) {
    fVar1 = 0.9;
  }
  fVar2 = fVar1 * fVar1;
  if (local_3c < fVar2 == (local_3c == fVar2)) {
    fVar1 = fVar1 / SQRT(local_3c);
    *(float *)(in_ECX + 0xe0) = fVar1 * *(float *)(in_ECX + 0xe0);
    *(float *)(in_ECX + 0xe4) = fVar1 * *(float *)(in_ECX + 0xe4);
    *(float *)(in_ECX + 0xe8) = fVar1 * *(float *)(in_ECX + 0xe8);
    *(float *)(in_ECX + 0xec) = fVar1 * *(float *)(in_ECX + 0xec);
    local_20 = fVar1 * local_20;
    fStack_1c = fVar1 * fStack_1c;
    fStack_18 = fVar1 * fStack_18;
    local_3c = fVar2;
  }
  fStack_14 = ((1.0 - local_3c * 0.822948) - local_3c * local_3c * 0.130529) -
              local_3c * local_3c * local_3c * 0.044408;
  FUN_00889470(&local_20,&local_30);
  FUN_004d6830();
  *(float *)(in_ECX + 0xa0) = local_20 + local_20;
  *(float *)(in_ECX + 0xa4) = fStack_1c + fStack_1c;
  *(float *)(in_ECX + 0xa8) = fStack_18 + fStack_18;
  *(float *)(in_ECX + 0xac) = fStack_14 + fStack_14;
  *(float *)(in_ECX + 0xac) = SQRT(local_3c) * 3.1415927;
  *(undefined4 *)(in_ECX + 0x80) = local_30;
  *(undefined4 *)(in_ECX + 0x84) = uStack_2c;
  *(undefined4 *)(in_ECX + 0x88) = uStack_28;
  *(undefined4 *)(in_ECX + 0x8c) = uStack_24;
  FUN_008b1dd0(in_ECX + 0x80);
  fVar1 = *(float *)(in_ECX + 0x90);
  fVar2 = *(float *)(in_ECX + 0x94);
  fVar3 = *(float *)(in_ECX + 0x98);
  *(float *)(in_ECX + 0x40) =
       *(float *)(in_ECX + 0x60) -
       (*(float *)(in_ECX + 0x10) * fVar1 + *(float *)(in_ECX + 0x20) * fVar2 +
       *(float *)(in_ECX + 0x30) * fVar3);
  *(float *)(in_ECX + 0x44) =
       *(float *)(in_ECX + 100) -
       (*(float *)(in_ECX + 0x14) * fVar1 + *(float *)(in_ECX + 0x24) * fVar2 +
       *(float *)(in_ECX + 0x34) * fVar3);
  *(float *)(in_ECX + 0x48) =
       *(float *)(in_ECX + 0x68) -
       (*(float *)(in_ECX + 0x18) * fVar1 + *(float *)(in_ECX + 0x28) * fVar2 +
       *(float *)(in_ECX + 0x38) * fVar3);
  *(float *)(in_ECX + 0x4c) =
       *(float *)(in_ECX + 0x6c) -
       (*(float *)(in_ECX + 0x1c) * fVar1 + *(float *)(in_ECX + 0x2c) * fVar2 +
       *(float *)(in_ECX + 0x3c) * fVar3);
  return param_3 + 0x80;
}



void FUN_008ea030(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_008ea140(param_1,param_2);
  *in_ECX = &PTR_FUN_00a9ad90;
  return;
}



undefined1 * FUN_008ea070(undefined4 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  *(undefined4 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined4 *)(param_2 + 0x68) = 0;
  *(undefined4 *)(param_2 + 0x6c) = 0;
  *(undefined4 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x74) = 0;
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_2 + 0x7c) = 0;
  return param_2 + 0x80;
}



void FUN_008ea0b0(byte param_1)

{
  FUN_008b3540();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008ea100(int param_1)

{
  int in_ECX;
  
  FUN_0089df00(in_ECX + 0x10);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  return;
}



void FUN_008ea140(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_0089dc10(param_1,param_2);
  in_ECX[0x3c] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x30] = 0;
  *in_ECX = &PTR_FUN_00a9ae10;
  return;
}



void FUN_008ea180(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}



undefined1 * FUN_008ea1a0(undefined4 param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  *param_2 = 1;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  uVar1 = *(undefined4 *)(in_ECX + 100);
  uVar2 = *(undefined4 *)(in_ECX + 0x68);
  uVar3 = *(undefined4 *)(in_ECX + 0x6c);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(in_ECX + 0x60);
  *(undefined4 *)(param_2 + 0x44) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = uVar2;
  *(undefined4 *)(param_2 + 0x4c) = uVar3;
  uVar1 = *(undefined4 *)(in_ECX + 0xe4);
  uVar2 = *(undefined4 *)(in_ECX + 0xe8);
  uVar3 = *(undefined4 *)(in_ECX + 0xec);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(in_ECX + 0xe0);
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  *(undefined4 *)(param_2 + 0x28) = uVar2;
  *(undefined4 *)(param_2 + 0x2c) = uVar3;
  uVar1 = *(undefined4 *)(in_ECX + 0xd4);
  uVar2 = *(undefined4 *)(in_ECX + 0xd8);
  uVar3 = *(undefined4 *)(in_ECX + 0xdc);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(in_ECX + 0xd0);
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  *(undefined4 *)(param_2 + 0x1c) = uVar3;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  *(undefined4 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined4 *)(param_2 + 0x68) = 0;
  *(undefined4 *)(param_2 + 0x6c) = 0;
  *(undefined4 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x74) = 0;
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_2 + 0x7c) = 0;
  *(undefined4 *)(param_2 + 0x50) = 0x3f800000;
  *(undefined4 *)(param_2 + 100) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x78) = 0x3f800000;
  param_2[0xc] = 1;
  return param_2 + 0x80;
}



int FUN_008ea220(undefined4 *param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  float fVar4;
  float local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(in_ECX + 0x60);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(in_ECX + 100);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(in_ECX + 0x68);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0x6c);
  *(undefined4 *)(in_ECX + 0x5c) = *param_1;
  fVar1 = *(float *)(in_ECX + 0xd0);
  fVar2 = *(float *)(in_ECX + 0xd4);
  fVar3 = *(float *)(in_ECX + 0xd8);
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (*(float *)(in_ECX + 0xb4) * *(float *)(in_ECX + 0xb4) < fVar4) {
    fVar4 = *(float *)(in_ECX + 0xb4) / SQRT(fVar4);
    *(float *)(in_ECX + 0xd0) = fVar4 * fVar1;
    *(float *)(in_ECX + 0xd4) = fVar4 * fVar2;
    *(float *)(in_ECX + 0xd8) = fVar4 * fVar3;
    *(float *)(in_ECX + 0xdc) = fVar4 * *(float *)(in_ECX + 0xdc);
  }
  fVar1 = (float)param_1[2];
  *(float *)(in_ECX + 0x60) = *(float *)(in_ECX + 0x60) + fVar1 * *(float *)(in_ECX + 0xd0);
  *(float *)(in_ECX + 100) = *(float *)(in_ECX + 100) + fVar1 * *(float *)(in_ECX + 0xd4);
  *(float *)(in_ECX + 0x68) = *(float *)(in_ECX + 0x68) + fVar1 * *(float *)(in_ECX + 0xd8);
  *(float *)(in_ECX + 0x6c) = *(float *)(in_ECX + 0x6c) + fVar1 * *(float *)(in_ECX + 0xdc);
  *(undefined4 *)(in_ECX + 0x6c) = param_1[3];
  local_30 = *(undefined4 *)(in_ECX + 0x80);
  uStack_2c = *(undefined4 *)(in_ECX + 0x84);
  uStack_28 = *(undefined4 *)(in_ECX + 0x88);
  uStack_24 = *(undefined4 *)(in_ECX + 0x8c);
  *(undefined4 *)(in_ECX + 0x70) = local_30;
  *(undefined4 *)(in_ECX + 0x74) = uStack_2c;
  *(undefined4 *)(in_ECX + 0x78) = uStack_28;
  *(undefined4 *)(in_ECX + 0x7c) = uStack_24;
  fStack_18 = (float)param_1[2] * 0.5;
  local_20 = fStack_18 * *(float *)(in_ECX + 0xe0);
  fStack_1c = fStack_18 * *(float *)(in_ECX + 0xe4);
  fStack_18 = fStack_18 * *(float *)(in_ECX + 0xe8);
  local_3c = (fStack_18 * fStack_18 + fStack_1c * fStack_1c + local_20 * local_20) * 0.4052847;
  fVar1 = *(float *)(in_ECX + 0xb8) * (float)param_1[2];
  if (0.9 < fVar1) {
    fVar1 = 0.9;
  }
  fVar2 = fVar1 * fVar1;
  if (local_3c < fVar2 == (local_3c == fVar2)) {
    fVar1 = fVar1 / SQRT(local_3c);
    *(float *)(in_ECX + 0xe0) = fVar1 * *(float *)(in_ECX + 0xe0);
    *(float *)(in_ECX + 0xe4) = fVar1 * *(float *)(in_ECX + 0xe4);
    *(float *)(in_ECX + 0xe8) = fVar1 * *(float *)(in_ECX + 0xe8);
    *(float *)(in_ECX + 0xec) = fVar1 * *(float *)(in_ECX + 0xec);
    local_20 = fVar1 * local_20;
    fStack_1c = fVar1 * fStack_1c;
    fStack_18 = fVar1 * fStack_18;
    local_3c = fVar2;
  }
  fStack_14 = ((1.0 - local_3c * 0.822948) - local_3c * local_3c * 0.130529) -
              local_3c * local_3c * local_3c * 0.044408;
  FUN_00889470(&local_20,&local_30);
  FUN_004d6830();
  *(float *)(in_ECX + 0xa0) = local_20 + local_20;
  *(float *)(in_ECX + 0xa4) = fStack_1c + fStack_1c;
  *(float *)(in_ECX + 0xa8) = fStack_18 + fStack_18;
  *(float *)(in_ECX + 0xac) = fStack_14 + fStack_14;
  *(float *)(in_ECX + 0xac) = SQRT(local_3c) * 3.1415927;
  *(undefined4 *)(in_ECX + 0x80) = local_30;
  *(undefined4 *)(in_ECX + 0x84) = uStack_2c;
  *(undefined4 *)(in_ECX + 0x88) = uStack_28;
  *(undefined4 *)(in_ECX + 0x8c) = uStack_24;
  FUN_008b1dd0(in_ECX + 0x80);
  fVar1 = *(float *)(in_ECX + 0x90);
  fVar2 = *(float *)(in_ECX + 0x94);
  fVar3 = *(float *)(in_ECX + 0x98);
  *(float *)(in_ECX + 0x40) =
       *(float *)(in_ECX + 0x60) -
       (*(float *)(in_ECX + 0x10) * fVar1 + *(float *)(in_ECX + 0x20) * fVar2 +
       *(float *)(in_ECX + 0x30) * fVar3);
  *(float *)(in_ECX + 0x44) =
       *(float *)(in_ECX + 100) -
       (*(float *)(in_ECX + 0x14) * fVar1 + *(float *)(in_ECX + 0x24) * fVar2 +
       *(float *)(in_ECX + 0x34) * fVar3);
  *(float *)(in_ECX + 0x48) =
       *(float *)(in_ECX + 0x68) -
       (*(float *)(in_ECX + 0x18) * fVar1 + *(float *)(in_ECX + 0x28) * fVar2 +
       *(float *)(in_ECX + 0x38) * fVar3);
  *(float *)(in_ECX + 0x4c) =
       *(float *)(in_ECX + 0x6c) -
       (*(float *)(in_ECX + 0x1c) * fVar1 + *(float *)(in_ECX + 0x2c) * fVar2 +
       *(float *)(in_ECX + 0x3c) * fVar3);
  return param_3 + 0x80;
}



void FUN_008ea4b0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  float fVar4;
  float local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(in_ECX + 0x60);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(in_ECX + 100);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(in_ECX + 0x68);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0x6c);
  *(undefined4 *)(in_ECX + 0x5c) = *param_1;
  fVar1 = *(float *)(in_ECX + 0xd0);
  fVar2 = *(float *)(in_ECX + 0xd4);
  fVar3 = *(float *)(in_ECX + 0xd8);
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (*(float *)(in_ECX + 0xb4) * *(float *)(in_ECX + 0xb4) < fVar4) {
    fVar4 = *(float *)(in_ECX + 0xb4) / SQRT(fVar4);
    *(float *)(in_ECX + 0xd0) = fVar4 * fVar1;
    *(float *)(in_ECX + 0xd4) = fVar4 * fVar2;
    *(float *)(in_ECX + 0xd8) = fVar4 * fVar3;
    *(float *)(in_ECX + 0xdc) = fVar4 * *(float *)(in_ECX + 0xdc);
  }
  fVar1 = (float)param_1[2];
  *(float *)(in_ECX + 0x60) = *(float *)(in_ECX + 0x60) + fVar1 * *(float *)(in_ECX + 0xd0);
  *(float *)(in_ECX + 100) = *(float *)(in_ECX + 100) + fVar1 * *(float *)(in_ECX + 0xd4);
  *(float *)(in_ECX + 0x68) = *(float *)(in_ECX + 0x68) + fVar1 * *(float *)(in_ECX + 0xd8);
  *(float *)(in_ECX + 0x6c) = *(float *)(in_ECX + 0x6c) + fVar1 * *(float *)(in_ECX + 0xdc);
  *(undefined4 *)(in_ECX + 0x6c) = param_1[3];
  local_30 = *(undefined4 *)(in_ECX + 0x80);
  uStack_2c = *(undefined4 *)(in_ECX + 0x84);
  uStack_28 = *(undefined4 *)(in_ECX + 0x88);
  uStack_24 = *(undefined4 *)(in_ECX + 0x8c);
  *(undefined4 *)(in_ECX + 0x70) = local_30;
  *(undefined4 *)(in_ECX + 0x74) = uStack_2c;
  *(undefined4 *)(in_ECX + 0x78) = uStack_28;
  *(undefined4 *)(in_ECX + 0x7c) = uStack_24;
  fStack_18 = (float)param_1[2] * 0.5;
  local_20 = fStack_18 * *(float *)(in_ECX + 0xe0);
  fStack_1c = fStack_18 * *(float *)(in_ECX + 0xe4);
  fStack_18 = fStack_18 * *(float *)(in_ECX + 0xe8);
  local_3c = (fStack_18 * fStack_18 + fStack_1c * fStack_1c + local_20 * local_20) * 0.4052847;
  fVar1 = *(float *)(in_ECX + 0xb8) * (float)param_1[2];
  if (0.9 < fVar1) {
    fVar1 = 0.9;
  }
  fVar2 = fVar1 * fVar1;
  if (local_3c < fVar2 == (local_3c == fVar2)) {
    fVar1 = fVar1 / SQRT(local_3c);
    *(float *)(in_ECX + 0xe0) = fVar1 * *(float *)(in_ECX + 0xe0);
    *(float *)(in_ECX + 0xe4) = fVar1 * *(float *)(in_ECX + 0xe4);
    *(float *)(in_ECX + 0xe8) = fVar1 * *(float *)(in_ECX + 0xe8);
    *(float *)(in_ECX + 0xec) = fVar1 * *(float *)(in_ECX + 0xec);
    local_20 = fVar1 * local_20;
    fStack_1c = fVar1 * fStack_1c;
    fStack_18 = fVar1 * fStack_18;
    local_3c = fVar2;
  }
  fStack_14 = ((1.0 - local_3c * 0.822948) - local_3c * local_3c * 0.130529) -
              local_3c * local_3c * local_3c * 0.044408;
  FUN_00889470(&local_20,&local_30);
  FUN_004d6830();
  *(float *)(in_ECX + 0xa0) = local_20 + local_20;
  *(float *)(in_ECX + 0xa4) = fStack_1c + fStack_1c;
  *(float *)(in_ECX + 0xa8) = fStack_18 + fStack_18;
  *(float *)(in_ECX + 0xac) = fStack_14 + fStack_14;
  *(float *)(in_ECX + 0xac) = SQRT(local_3c) * 3.1415927;
  *(undefined4 *)(in_ECX + 0x80) = local_30;
  *(undefined4 *)(in_ECX + 0x84) = uStack_2c;
  *(undefined4 *)(in_ECX + 0x88) = uStack_28;
  *(undefined4 *)(in_ECX + 0x8c) = uStack_24;
  FUN_008b1dd0(in_ECX + 0x80);
  fVar1 = *(float *)(in_ECX + 0x90);
  fVar2 = *(float *)(in_ECX + 0x94);
  fVar3 = *(float *)(in_ECX + 0x98);
  *(float *)(in_ECX + 0x40) =
       *(float *)(in_ECX + 0x60) -
       (*(float *)(in_ECX + 0x10) * fVar1 + *(float *)(in_ECX + 0x20) * fVar2 +
       *(float *)(in_ECX + 0x30) * fVar3);
  *(float *)(in_ECX + 0x44) =
       *(float *)(in_ECX + 100) -
       (*(float *)(in_ECX + 0x14) * fVar1 + *(float *)(in_ECX + 0x24) * fVar2 +
       *(float *)(in_ECX + 0x34) * fVar3);
  *(float *)(in_ECX + 0x48) =
       *(float *)(in_ECX + 0x68) -
       (*(float *)(in_ECX + 0x18) * fVar1 + *(float *)(in_ECX + 0x28) * fVar2 +
       *(float *)(in_ECX + 0x38) * fVar3);
  *(float *)(in_ECX + 0x4c) =
       *(float *)(in_ECX + 0x6c) -
       (*(float *)(in_ECX + 0x1c) * fVar1 + *(float *)(in_ECX + 0x2c) * fVar2 +
       *(float *)(in_ECX + 0x3c) * fVar3);
  return;
}



void FUN_008ea750(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_008ead40(param_1,param_2);
  *in_ECX = &PTR_LAB_00a9aec0;
  return;
}



int FUN_008ea790(undefined4 *param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  float fVar4;
  float local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar1 = *(float *)(param_3 + 0x44);
  fVar2 = *(float *)(param_3 + 0x48);
  fVar3 = *(float *)(param_3 + 0x4c);
  *(float *)(in_ECX + 0xd0) = param_2 * *(float *)(param_3 + 0x40);
  *(float *)(in_ECX + 0xd4) = param_2 * fVar1;
  *(float *)(in_ECX + 0xd8) = param_2 * fVar2;
  *(float *)(in_ECX + 0xdc) = param_2 * fVar3;
  fVar1 = *(float *)(param_3 + 0x50);
  fVar2 = *(float *)(param_3 + 0x54);
  fVar3 = *(float *)(param_3 + 0x58);
  *(float *)(in_ECX + 0xe0) =
       param_2 * (*(float *)(in_ECX + 0x10) * fVar1 + *(float *)(in_ECX + 0x20) * fVar2 +
                 *(float *)(in_ECX + 0x30) * fVar3);
  *(float *)(in_ECX + 0xe4) =
       param_2 * (*(float *)(in_ECX + 0x14) * fVar1 + *(float *)(in_ECX + 0x24) * fVar2 +
                 *(float *)(in_ECX + 0x34) * fVar3);
  *(float *)(in_ECX + 0xe8) =
       param_2 * (*(float *)(in_ECX + 0x18) * fVar1 + *(float *)(in_ECX + 0x28) * fVar2 +
                 *(float *)(in_ECX + 0x38) * fVar3);
  *(float *)(in_ECX + 0xec) =
       param_2 * (*(float *)(in_ECX + 0x1c) * fVar1 + *(float *)(in_ECX + 0x2c) * fVar2 +
                 *(float *)(in_ECX + 0x3c) * fVar3);
  *(undefined2 *)(in_ECX + 0xbe) = *(undefined2 *)(param_3 + 4);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(in_ECX + 0x60);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(in_ECX + 100);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(in_ECX + 0x68);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0x6c);
  *(undefined4 *)(in_ECX + 0x5c) = *param_1;
  fVar1 = *(float *)(in_ECX + 0xd0);
  fVar2 = *(float *)(in_ECX + 0xd4);
  fVar3 = *(float *)(in_ECX + 0xd8);
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (*(float *)(in_ECX + 0xb4) * *(float *)(in_ECX + 0xb4) < fVar4) {
    fVar4 = *(float *)(in_ECX + 0xb4) / SQRT(fVar4);
    *(float *)(in_ECX + 0xd0) = fVar4 * fVar1;
    *(float *)(in_ECX + 0xd4) = fVar4 * fVar2;
    *(float *)(in_ECX + 0xd8) = fVar4 * fVar3;
    *(float *)(in_ECX + 0xdc) = fVar4 * *(float *)(in_ECX + 0xdc);
  }
  fVar1 = (float)param_1[2];
  *(float *)(in_ECX + 0x60) = *(float *)(in_ECX + 0x60) + fVar1 * *(float *)(in_ECX + 0xd0);
  *(float *)(in_ECX + 100) = *(float *)(in_ECX + 100) + fVar1 * *(float *)(in_ECX + 0xd4);
  *(float *)(in_ECX + 0x68) = *(float *)(in_ECX + 0x68) + fVar1 * *(float *)(in_ECX + 0xd8);
  *(float *)(in_ECX + 0x6c) = *(float *)(in_ECX + 0x6c) + fVar1 * *(float *)(in_ECX + 0xdc);
  *(undefined4 *)(in_ECX + 0x6c) = param_1[3];
  local_30 = *(undefined4 *)(in_ECX + 0x80);
  uStack_2c = *(undefined4 *)(in_ECX + 0x84);
  uStack_28 = *(undefined4 *)(in_ECX + 0x88);
  uStack_24 = *(undefined4 *)(in_ECX + 0x8c);
  *(undefined4 *)(in_ECX + 0x70) = local_30;
  *(undefined4 *)(in_ECX + 0x74) = uStack_2c;
  *(undefined4 *)(in_ECX + 0x78) = uStack_28;
  *(undefined4 *)(in_ECX + 0x7c) = uStack_24;
  fStack_18 = (float)param_1[2] * 0.5;
  local_20 = fStack_18 * *(float *)(in_ECX + 0xe0);
  fStack_1c = fStack_18 * *(float *)(in_ECX + 0xe4);
  fStack_18 = fStack_18 * *(float *)(in_ECX + 0xe8);
  local_3c = (fStack_18 * fStack_18 + fStack_1c * fStack_1c + local_20 * local_20) * 0.4052847;
  fVar1 = *(float *)(in_ECX + 0xb8) * (float)param_1[2];
  if (0.9 < fVar1) {
    fVar1 = 0.9;
  }
  fVar2 = fVar1 * fVar1;
  if (local_3c < fVar2 == (local_3c == fVar2)) {
    fVar1 = fVar1 / SQRT(local_3c);
    *(float *)(in_ECX + 0xe0) = fVar1 * *(float *)(in_ECX + 0xe0);
    *(float *)(in_ECX + 0xe4) = fVar1 * *(float *)(in_ECX + 0xe4);
    *(float *)(in_ECX + 0xe8) = fVar1 * *(float *)(in_ECX + 0xe8);
    *(float *)(in_ECX + 0xec) = fVar1 * *(float *)(in_ECX + 0xec);
    local_20 = fVar1 * local_20;
    fStack_1c = fVar1 * fStack_1c;
    fStack_18 = fVar1 * fStack_18;
    local_3c = fVar2;
  }
  fStack_14 = ((1.0 - local_3c * 0.822948) - local_3c * local_3c * 0.130529) -
              local_3c * local_3c * local_3c * 0.044408;
  FUN_00889470(&local_20,&local_30);
  FUN_004d6830();
  *(float *)(in_ECX + 0xa0) = local_20 + local_20;
  *(float *)(in_ECX + 0xa4) = fStack_1c + fStack_1c;
  *(float *)(in_ECX + 0xa8) = fStack_18 + fStack_18;
  *(float *)(in_ECX + 0xac) = fStack_14 + fStack_14;
  *(float *)(in_ECX + 0xac) = SQRT(local_3c) * 3.1415927;
  *(undefined4 *)(in_ECX + 0x80) = local_30;
  *(undefined4 *)(in_ECX + 0x84) = uStack_2c;
  *(undefined4 *)(in_ECX + 0x88) = uStack_28;
  *(undefined4 *)(in_ECX + 0x8c) = uStack_24;
  FUN_008b1dd0(in_ECX + 0x80);
  fVar1 = *(float *)(in_ECX + 0x90);
  fVar2 = *(float *)(in_ECX + 0x94);
  fVar3 = *(float *)(in_ECX + 0x98);
  *(float *)(in_ECX + 0x40) =
       *(float *)(in_ECX + 0x60) -
       (*(float *)(in_ECX + 0x10) * fVar1 + *(float *)(in_ECX + 0x20) * fVar2 +
       *(float *)(in_ECX + 0x30) * fVar3);
  *(float *)(in_ECX + 0x44) =
       *(float *)(in_ECX + 100) -
       (*(float *)(in_ECX + 0x14) * fVar1 + *(float *)(in_ECX + 0x24) * fVar2 +
       *(float *)(in_ECX + 0x34) * fVar3);
  *(float *)(in_ECX + 0x48) =
       *(float *)(in_ECX + 0x68) -
       (*(float *)(in_ECX + 0x18) * fVar1 + *(float *)(in_ECX + 0x28) * fVar2 +
       *(float *)(in_ECX + 0x38) * fVar3);
  *(float *)(in_ECX + 0x4c) =
       *(float *)(in_ECX + 0x6c) -
       (*(float *)(in_ECX + 0x1c) * fVar1 + *(float *)(in_ECX + 0x2c) * fVar2 +
       *(float *)(in_ECX + 0x3c) * fVar3);
  return param_3 + 0x80;
}



undefined4 FUN_008eaac0(void)

{
  return 4;
}



void FUN_008eaad0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0xf0);
  fVar2 = *(float *)(in_ECX + 0xf4);
  fVar3 = *(float *)(in_ECX + 0xf8);
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  *param_1 = 1.0 / fVar1;
  param_1[5] = 1.0 / fVar2;
  param_1[10] = 1.0 / fVar3;
  return;
}



void FUN_008eab30(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar3 = *(undefined4 *)(in_ECX + 0xf8);
  uVar1 = *(undefined4 *)(in_ECX + 0xf0);
  uVar2 = *(undefined4 *)(in_ECX + 0xf4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = uVar1;
  param_1[5] = uVar2;
  param_1[10] = uVar3;
  return;
}



void FUN_008eab80(void)

{
  int in_ECX;
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
  
  fStack_34 = *(float *)(in_ECX + 0xf0);
  fStack_24 = *(float *)(in_ECX + 0xf4);
  local_40 = fStack_34 * *(float *)(in_ECX + 0x10);
  fStack_3c = fStack_34 * *(float *)(in_ECX + 0x14);
  fStack_38 = fStack_34 * *(float *)(in_ECX + 0x18);
  fStack_34 = fStack_34 * *(float *)(in_ECX + 0x1c);
  fStack_14 = *(float *)(in_ECX + 0xf8);
  local_30 = fStack_24 * *(float *)(in_ECX + 0x20);
  fStack_2c = fStack_24 * *(float *)(in_ECX + 0x24);
  fStack_28 = fStack_24 * *(float *)(in_ECX + 0x28);
  fStack_24 = fStack_24 * *(float *)(in_ECX + 0x2c);
  local_20 = fStack_14 * *(float *)(in_ECX + 0x30);
  fStack_1c = fStack_14 * *(float *)(in_ECX + 0x34);
  fStack_18 = fStack_14 * *(float *)(in_ECX + 0x38);
  fStack_14 = fStack_14 * *(float *)(in_ECX + 0x3c);
  FUN_008d2b10(&local_40,in_ECX + 0x10);
  return;
}



void FUN_008eabf0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0xf0);
  fVar2 = *(float *)(in_ECX + 0xf4);
  fVar3 = *(float *)(in_ECX + 0xf8);
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  *param_1 = 1.0 / fVar1;
  param_1[5] = 1.0 / fVar2;
  param_1[10] = 1.0 / fVar3;
  FUN_008d2c60(in_ECX + 0x10);
  return;
}



void FUN_008eac80(float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0xc0);
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *(float *)(in_ECX + 0xd0) = *(float *)(in_ECX + 0xd0) + fVar1 * param_1 * *param_2;
  *(float *)(in_ECX + 0xd4) = *(float *)(in_ECX + 0xd4) + fVar1 * param_1 * fVar2;
  *(float *)(in_ECX + 0xd8) = *(float *)(in_ECX + 0xd8) + fVar1 * param_1 * fVar3;
  *(float *)(in_ECX + 0xdc) = *(float *)(in_ECX + 0xdc) + fVar1 * param_1 * fVar4;
  return;
}



void FUN_008eace0(float param_1,float *param_2,undefined4 param_3)

{
  int *in_ECX;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_20 = param_1 * *param_2;
  fStack_1c = param_1 * param_2[1];
  fStack_18 = param_1 * param_2[2];
  fStack_14 = param_1 * param_2[3];
  (**(code **)(*in_ECX + 0x60))(&local_20,param_3);
  return;
}



void FUN_008ead40(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_0089dc10(param_1,param_2);
  *in_ECX = &PTR_LAB_00a9af38;
  in_ECX[0x3c] = 0x3f800000;
  in_ECX[0x3d] = 0x3f800000;
  in_ECX[0x3e] = 0x3f800000;
  in_ECX[0x3f] = 0x3f800000;
  in_ECX[0x31] = 0xbf800000;
  return;
}



void FUN_008eae10(float *param_1,float *param_2)

{
  int in_ECX;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(in_ECX + 0xc0);
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  *(float *)(in_ECX + 0xd0) = *(float *)(in_ECX + 0xd0) + fVar1 * *param_1;
  *(float *)(in_ECX + 0xd4) = *(float *)(in_ECX + 0xd4) + fVar1 * fVar2;
  *(float *)(in_ECX + 0xd8) = *(float *)(in_ECX + 0xd8) + fVar1 * fVar3;
  *(float *)(in_ECX + 0xdc) = *(float *)(in_ECX + 0xdc) + fVar1 * fVar4;
  fVar1 = *param_2 - *(float *)(in_ECX + 0x60);
  fVar3 = param_2[1] - *(float *)(in_ECX + 100);
  fVar4 = param_2[2] - *(float *)(in_ECX + 0x68);
  fVar2 = fVar3 * param_1[2] - fVar4 * param_1[1];
  fVar4 = fVar4 * *param_1 - fVar1 * param_1[2];
  fVar5 = fVar1 * param_1[1] - fVar3 * *param_1;
  fVar1 = *(float *)(in_ECX + 0xf0) *
          (*(float *)(in_ECX + 0x10) * fVar2 + *(float *)(in_ECX + 0x14) * fVar4 +
          *(float *)(in_ECX + 0x18) * fVar5);
  fVar3 = *(float *)(in_ECX + 0xf4) *
          (*(float *)(in_ECX + 0x20) * fVar2 + *(float *)(in_ECX + 0x24) * fVar4 +
          *(float *)(in_ECX + 0x28) * fVar5);
  fVar2 = *(float *)(in_ECX + 0xf8) *
          (*(float *)(in_ECX + 0x30) * fVar2 + *(float *)(in_ECX + 0x34) * fVar4 +
          *(float *)(in_ECX + 0x38) * fVar5);
  *(float *)(in_ECX + 0xe0) =
       *(float *)(in_ECX + 0xe0) +
       *(float *)(in_ECX + 0x10) * fVar1 + *(float *)(in_ECX + 0x20) * fVar3 +
       *(float *)(in_ECX + 0x30) * fVar2;
  *(float *)(in_ECX + 0xe4) =
       *(float *)(in_ECX + 0xe4) +
       *(float *)(in_ECX + 0x14) * fVar1 + *(float *)(in_ECX + 0x24) * fVar3 +
       *(float *)(in_ECX + 0x34) * fVar2;
  *(float *)(in_ECX + 0xe8) =
       *(float *)(in_ECX + 0xe8) +
       *(float *)(in_ECX + 0x18) * fVar1 + *(float *)(in_ECX + 0x28) * fVar3 +
       *(float *)(in_ECX + 0x38) * fVar2;
  *(float *)(in_ECX + 0xec) =
       *(float *)(in_ECX + 0xec) +
       *(float *)(in_ECX + 0x1c) * fVar1 + *(float *)(in_ECX + 0x2c) * fVar3 +
       *(float *)(in_ECX + 0x3c) * fVar2;
  return;
}



void FUN_008eaf30(float *param_1)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *param_1;
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = *(float *)(in_ECX + 0xf0) *
          (*(float *)(in_ECX + 0x10) * fVar5 + *(float *)(in_ECX + 0x14) * fVar1 +
          *(float *)(in_ECX + 0x18) * fVar2);
  fVar4 = *(float *)(in_ECX + 0xf4) *
          (*(float *)(in_ECX + 0x20) * fVar5 + *(float *)(in_ECX + 0x24) * fVar1 +
          *(float *)(in_ECX + 0x28) * fVar2);
  fVar5 = *(float *)(in_ECX + 0xf8) *
          (*(float *)(in_ECX + 0x30) * fVar5 + *(float *)(in_ECX + 0x34) * fVar1 +
          *(float *)(in_ECX + 0x38) * fVar2);
  *(float *)(in_ECX + 0xe0) =
       *(float *)(in_ECX + 0xe0) +
       *(float *)(in_ECX + 0x10) * fVar3 + *(float *)(in_ECX + 0x20) * fVar4 +
       *(float *)(in_ECX + 0x30) * fVar5;
  *(float *)(in_ECX + 0xe4) =
       *(float *)(in_ECX + 0xe4) +
       *(float *)(in_ECX + 0x14) * fVar3 + *(float *)(in_ECX + 0x24) * fVar4 +
       *(float *)(in_ECX + 0x34) * fVar5;
  *(float *)(in_ECX + 0xe8) =
       *(float *)(in_ECX + 0xe8) +
       *(float *)(in_ECX + 0x18) * fVar3 + *(float *)(in_ECX + 0x28) * fVar4 +
       *(float *)(in_ECX + 0x38) * fVar5;
  *(float *)(in_ECX + 0xec) =
       *(float *)(in_ECX + 0xec) +
       *(float *)(in_ECX + 0x1c) * fVar3 + *(float *)(in_ECX + 0x2c) * fVar4 +
       *(float *)(in_ECX + 0x3c) * fVar5;
  return;
}



void FUN_008eaff0(undefined4 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  float fVar4;
  float local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(in_ECX + 0xd0) = *(float *)(in_ECX + 0xd0) + *param_2;
  *(float *)(in_ECX + 0xd4) = *(float *)(in_ECX + 0xd4) + fVar1;
  *(float *)(in_ECX + 0xd8) = *(float *)(in_ECX + 0xd8) + fVar2;
  *(float *)(in_ECX + 0xdc) = *(float *)(in_ECX + 0xdc) + fVar3;
  fVar1 = (float)param_1[2];
  fVar2 = 1.0 - fVar1 * *(float *)(in_ECX + 200);
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(in_ECX + 0xd0) = fVar2 * *(float *)(in_ECX + 0xd0);
  *(float *)(in_ECX + 0xd4) = fVar2 * *(float *)(in_ECX + 0xd4);
  *(float *)(in_ECX + 0xd8) = fVar2 * *(float *)(in_ECX + 0xd8);
  *(float *)(in_ECX + 0xdc) = fVar2 * *(float *)(in_ECX + 0xdc);
  fVar1 = 1.0 - fVar1 * *(float *)(in_ECX + 0xcc);
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(in_ECX + 0xe0) = fVar1 * *(float *)(in_ECX + 0xe0);
  *(float *)(in_ECX + 0xe4) = fVar1 * *(float *)(in_ECX + 0xe4);
  *(float *)(in_ECX + 0xe8) = fVar1 * *(float *)(in_ECX + 0xe8);
  *(float *)(in_ECX + 0xec) = fVar1 * *(float *)(in_ECX + 0xec);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(in_ECX + 0x60);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(in_ECX + 100);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(in_ECX + 0x68);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0x6c);
  *(undefined4 *)(in_ECX + 0x5c) = *param_1;
  fVar1 = *(float *)(in_ECX + 0xd0);
  fVar2 = *(float *)(in_ECX + 0xd4);
  fVar3 = *(float *)(in_ECX + 0xd8);
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (*(float *)(in_ECX + 0xb4) * *(float *)(in_ECX + 0xb4) < fVar4) {
    fVar4 = *(float *)(in_ECX + 0xb4) / SQRT(fVar4);
    *(float *)(in_ECX + 0xd0) = fVar4 * fVar1;
    *(float *)(in_ECX + 0xd4) = fVar4 * fVar2;
    *(float *)(in_ECX + 0xd8) = fVar4 * fVar3;
    *(float *)(in_ECX + 0xdc) = fVar4 * *(float *)(in_ECX + 0xdc);
  }
  fVar1 = (float)param_1[2];
  *(float *)(in_ECX + 0x60) = *(float *)(in_ECX + 0x60) + fVar1 * *(float *)(in_ECX + 0xd0);
  *(float *)(in_ECX + 100) = *(float *)(in_ECX + 100) + fVar1 * *(float *)(in_ECX + 0xd4);
  *(float *)(in_ECX + 0x68) = *(float *)(in_ECX + 0x68) + fVar1 * *(float *)(in_ECX + 0xd8);
  *(float *)(in_ECX + 0x6c) = *(float *)(in_ECX + 0x6c) + fVar1 * *(float *)(in_ECX + 0xdc);
  *(undefined4 *)(in_ECX + 0x6c) = param_1[3];
  local_30 = *(undefined4 *)(in_ECX + 0x80);
  uStack_2c = *(undefined4 *)(in_ECX + 0x84);
  uStack_28 = *(undefined4 *)(in_ECX + 0x88);
  uStack_24 = *(undefined4 *)(in_ECX + 0x8c);
  *(undefined4 *)(in_ECX + 0x70) = local_30;
  *(undefined4 *)(in_ECX + 0x74) = uStack_2c;
  *(undefined4 *)(in_ECX + 0x78) = uStack_28;
  *(undefined4 *)(in_ECX + 0x7c) = uStack_24;
  fStack_18 = (float)param_1[2] * 0.5;
  local_20 = fStack_18 * *(float *)(in_ECX + 0xe0);
  fStack_1c = fStack_18 * *(float *)(in_ECX + 0xe4);
  fStack_18 = fStack_18 * *(float *)(in_ECX + 0xe8);
  local_3c = (fStack_18 * fStack_18 + fStack_1c * fStack_1c + local_20 * local_20) * 0.4052847;
  fVar1 = *(float *)(in_ECX + 0xb8) * (float)param_1[2];
  if (0.9 < fVar1) {
    fVar1 = 0.9;
  }
  fVar2 = fVar1 * fVar1;
  if (local_3c < fVar2 == (local_3c == fVar2)) {
    fVar1 = fVar1 / SQRT(local_3c);
    *(float *)(in_ECX + 0xe0) = fVar1 * *(float *)(in_ECX + 0xe0);
    *(float *)(in_ECX + 0xe4) = fVar1 * *(float *)(in_ECX + 0xe4);
    *(float *)(in_ECX + 0xe8) = fVar1 * *(float *)(in_ECX + 0xe8);
    *(float *)(in_ECX + 0xec) = fVar1 * *(float *)(in_ECX + 0xec);
    local_20 = fVar1 * local_20;
    fStack_1c = fVar1 * fStack_1c;
    fStack_18 = fVar1 * fStack_18;
    local_3c = fVar2;
  }
  fStack_14 = ((1.0 - local_3c * 0.822948) - local_3c * local_3c * 0.130529) -
              local_3c * local_3c * local_3c * 0.044408;
  FUN_00889470(&local_20,&local_30);
  FUN_004d6830();
  *(float *)(in_ECX + 0xa0) = local_20 + local_20;
  *(float *)(in_ECX + 0xa4) = fStack_1c + fStack_1c;
  *(float *)(in_ECX + 0xa8) = fStack_18 + fStack_18;
  *(float *)(in_ECX + 0xac) = fStack_14 + fStack_14;
  *(float *)(in_ECX + 0xac) = SQRT(local_3c) * 3.1415927;
  *(undefined4 *)(in_ECX + 0x80) = local_30;
  *(undefined4 *)(in_ECX + 0x84) = uStack_2c;
  *(undefined4 *)(in_ECX + 0x88) = uStack_28;
  *(undefined4 *)(in_ECX + 0x8c) = uStack_24;
  FUN_008b1dd0(in_ECX + 0x80);
  fVar1 = *(float *)(in_ECX + 0x90);
  fVar2 = *(float *)(in_ECX + 0x94);
  fVar3 = *(float *)(in_ECX + 0x98);
  *(float *)(in_ECX + 0x40) =
       *(float *)(in_ECX + 0x60) -
       (*(float *)(in_ECX + 0x10) * fVar1 + *(float *)(in_ECX + 0x20) * fVar2 +
       *(float *)(in_ECX + 0x30) * fVar3);
  *(float *)(in_ECX + 0x44) =
       *(float *)(in_ECX + 100) -
       (*(float *)(in_ECX + 0x14) * fVar1 + *(float *)(in_ECX + 0x24) * fVar2 +
       *(float *)(in_ECX + 0x34) * fVar3);
  *(float *)(in_ECX + 0x48) =
       *(float *)(in_ECX + 0x68) -
       (*(float *)(in_ECX + 0x18) * fVar1 + *(float *)(in_ECX + 0x28) * fVar2 +
       *(float *)(in_ECX + 0x38) * fVar3);
  *(float *)(in_ECX + 0x4c) =
       *(float *)(in_ECX + 0x6c) -
       (*(float *)(in_ECX + 0x1c) * fVar1 + *(float *)(in_ECX + 0x2c) * fVar2 +
       *(float *)(in_ECX + 0x3c) * fVar3);
  return;
}



undefined1 * FUN_008eb320(float *param_1,undefined1 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int in_ECX;
  
  fVar1 = param_1[2];
  fVar2 = 1.0 - fVar1 * *(float *)(in_ECX + 200);
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(in_ECX + 0xd0) = fVar2 * *(float *)(in_ECX + 0xd0);
  *(float *)(in_ECX + 0xd4) = fVar2 * *(float *)(in_ECX + 0xd4);
  *(float *)(in_ECX + 0xd8) = fVar2 * *(float *)(in_ECX + 0xd8);
  *(float *)(in_ECX + 0xdc) = fVar2 * *(float *)(in_ECX + 0xdc);
  fVar1 = 1.0 - fVar1 * *(float *)(in_ECX + 0xcc);
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(in_ECX + 0xe0) = fVar1 * *(float *)(in_ECX + 0xe0);
  *(float *)(in_ECX + 0xe4) = fVar1 * *(float *)(in_ECX + 0xe4);
  *(float *)(in_ECX + 0xe8) = fVar1 * *(float *)(in_ECX + 0xe8);
  *(float *)(in_ECX + 0xec) = fVar1 * *(float *)(in_ECX + 0xec);
  FUN_008d2860(in_ECX + 0x10);
  *param_2 = 0;
  uVar8 = *(undefined4 *)(in_ECX + 0xf4);
  uVar9 = *(undefined4 *)(in_ECX + 0xf8);
  uVar10 = *(undefined4 *)(in_ECX + 0xfc);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(in_ECX + 0xf0);
  *(undefined4 *)(param_2 + 0x34) = uVar8;
  *(undefined4 *)(param_2 + 0x38) = uVar9;
  *(undefined4 *)(param_2 + 0x3c) = uVar10;
  uVar8 = *(undefined4 *)(in_ECX + 0xd4);
  uVar9 = *(undefined4 *)(in_ECX + 0xd8);
  uVar10 = *(undefined4 *)(in_ECX + 0xdc);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(in_ECX + 0xd0);
  *(undefined4 *)(param_2 + 0x14) = uVar8;
  *(undefined4 *)(param_2 + 0x18) = uVar9;
  *(undefined4 *)(param_2 + 0x1c) = uVar10;
  fVar2 = *(float *)(in_ECX + 100);
  fVar3 = *(float *)(in_ECX + 0x68);
  fVar4 = *(float *)(in_ECX + 0x6c);
  fVar1 = (*param_1 - *(float *)(in_ECX + 0x5c)) * *(float *)(in_ECX + 0x6c);
  fVar5 = *(float *)(in_ECX + 0x54);
  fVar6 = *(float *)(in_ECX + 0x58);
  fVar7 = *(float *)(in_ECX + 0x5c);
  *(float *)(param_2 + 0x40) =
       (1.0 - fVar1) * *(float *)(in_ECX + 0x50) + fVar1 * *(float *)(in_ECX + 0x60);
  *(float *)(param_2 + 0x44) = (1.0 - fVar1) * fVar5 + fVar1 * fVar2;
  *(float *)(param_2 + 0x48) = (1.0 - fVar1) * fVar6 + fVar1 * fVar3;
  *(float *)(param_2 + 0x4c) = (1.0 - fVar1) * fVar7 + fVar1 * fVar4;
  fVar1 = *(float *)(in_ECX + 0xe0);
  fVar2 = *(float *)(in_ECX + 0xe4);
  fVar3 = *(float *)(in_ECX + 0xe8);
  *(float *)(param_2 + 0x20) =
       *(float *)(param_2 + 0x50) * fVar1 + *(float *)(param_2 + 0x60) * fVar2 +
       *(float *)(param_2 + 0x70) * fVar3;
  *(float *)(param_2 + 0x24) =
       *(float *)(param_2 + 0x54) * fVar1 + *(float *)(param_2 + 100) * fVar2 +
       *(float *)(param_2 + 0x74) * fVar3;
  *(float *)(param_2 + 0x28) =
       *(float *)(param_2 + 0x58) * fVar1 + *(float *)(param_2 + 0x68) * fVar2 +
       *(float *)(param_2 + 0x78) * fVar3;
  *(float *)(param_2 + 0x2c) =
       *(float *)(param_2 + 0x5c) * fVar1 + *(float *)(param_2 + 0x6c) * fVar2 +
       *(float *)(param_2 + 0x7c) * fVar3;
  param_2[0xc] = 0;
  *(uint *)(param_2 + 8) = (uint)*(ushort *)(in_ECX + 0xbc);
  *(uint *)(param_2 + 4) = (uint)*(ushort *)(in_ECX + 0xbe);
  return param_2 + 0x80;
}



int FUN_008eb490(undefined4 *param_1,float param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_ECX;
  float fVar8;
  float local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar2 = *(float *)(param_3 + 0x44);
  fVar3 = *(float *)(param_3 + 0x48);
  fVar4 = *(float *)(param_3 + 0x4c);
  *(float *)(in_ECX + 0xd0) = param_2 * *(float *)(param_3 + 0x40);
  *(float *)(in_ECX + 0xd4) = param_2 * fVar2;
  *(float *)(in_ECX + 0xd8) = param_2 * fVar3;
  *(float *)(in_ECX + 0xdc) = param_2 * fVar4;
  fVar2 = *(float *)(param_3 + 0x50);
  fVar3 = *(float *)(param_3 + 0x54);
  fVar4 = *(float *)(param_3 + 0x58);
  pfVar1 = (float *)(in_ECX + 0x10);
  *(float *)(in_ECX + 0xe0) =
       param_2 * (*pfVar1 * fVar2 + *(float *)(in_ECX + 0x20) * fVar3 +
                 *(float *)(in_ECX + 0x30) * fVar4);
  *(float *)(in_ECX + 0xe4) =
       param_2 * (*(float *)(in_ECX + 0x14) * fVar2 + *(float *)(in_ECX + 0x24) * fVar3 +
                 *(float *)(in_ECX + 0x34) * fVar4);
  *(float *)(in_ECX + 0xe8) =
       param_2 * (*(float *)(in_ECX + 0x18) * fVar2 + *(float *)(in_ECX + 0x28) * fVar3 +
                 *(float *)(in_ECX + 0x38) * fVar4);
  *(float *)(in_ECX + 0xec) =
       param_2 * (*(float *)(in_ECX + 0x1c) * fVar2 + *(float *)(in_ECX + 0x2c) * fVar3 +
                 *(float *)(in_ECX + 0x3c) * fVar4);
  *(undefined2 *)(in_ECX + 0xbe) = *(undefined2 *)(param_3 + 4);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(in_ECX + 0x60);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(in_ECX + 100);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(in_ECX + 0x68);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0x6c);
  *(undefined4 *)(in_ECX + 0x5c) = *param_1;
  fVar2 = *(float *)(in_ECX + 0xd0);
  fVar3 = *(float *)(in_ECX + 0xd4);
  fVar4 = *(float *)(in_ECX + 0xd8);
  fVar8 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
  if (*(float *)(in_ECX + 0xb4) * *(float *)(in_ECX + 0xb4) < fVar8) {
    fVar8 = *(float *)(in_ECX + 0xb4) / SQRT(fVar8);
    *(float *)(in_ECX + 0xd0) = fVar8 * fVar2;
    *(float *)(in_ECX + 0xd4) = fVar8 * fVar3;
    *(float *)(in_ECX + 0xd8) = fVar8 * fVar4;
    *(float *)(in_ECX + 0xdc) = fVar8 * *(float *)(in_ECX + 0xdc);
  }
  fVar2 = (float)param_1[2];
  *(float *)(in_ECX + 0x60) = *(float *)(in_ECX + 0x60) + fVar2 * *(float *)(in_ECX + 0xd0);
  *(float *)(in_ECX + 100) = *(float *)(in_ECX + 100) + fVar2 * *(float *)(in_ECX + 0xd4);
  *(float *)(in_ECX + 0x68) = *(float *)(in_ECX + 0x68) + fVar2 * *(float *)(in_ECX + 0xd8);
  *(float *)(in_ECX + 0x6c) = *(float *)(in_ECX + 0x6c) + fVar2 * *(float *)(in_ECX + 0xdc);
  *(undefined4 *)(in_ECX + 0x6c) = param_1[3];
  local_30 = *(undefined4 *)(in_ECX + 0x80);
  uStack_2c = *(undefined4 *)(in_ECX + 0x84);
  uStack_28 = *(undefined4 *)(in_ECX + 0x88);
  uStack_24 = *(undefined4 *)(in_ECX + 0x8c);
  *(undefined4 *)(in_ECX + 0x70) = local_30;
  *(undefined4 *)(in_ECX + 0x74) = uStack_2c;
  *(undefined4 *)(in_ECX + 0x78) = uStack_28;
  *(undefined4 *)(in_ECX + 0x7c) = uStack_24;
  fStack_18 = (float)param_1[2] * 0.5;
  local_20 = fStack_18 * *(float *)(in_ECX + 0xe0);
  fStack_1c = fStack_18 * *(float *)(in_ECX + 0xe4);
  fStack_18 = fStack_18 * *(float *)(in_ECX + 0xe8);
  local_3c = (fStack_18 * fStack_18 + fStack_1c * fStack_1c + local_20 * local_20) * 0.4052847;
  fVar2 = *(float *)(in_ECX + 0xb8) * (float)param_1[2];
  if (0.9 < fVar2) {
    fVar2 = 0.9;
  }
  fVar3 = fVar2 * fVar2;
  if (local_3c < fVar3 == (local_3c == fVar3)) {
    fVar2 = fVar2 / SQRT(local_3c);
    local_20 = fVar2 * local_20;
    fStack_1c = fVar2 * fStack_1c;
    fStack_18 = fVar2 * fStack_18;
    *(float *)(in_ECX + 0xe0) = fVar2 * *(float *)(in_ECX + 0xe0);
    *(float *)(in_ECX + 0xe4) = fVar2 * *(float *)(in_ECX + 0xe4);
    *(float *)(in_ECX + 0xe8) = fVar2 * *(float *)(in_ECX + 0xe8);
    *(float *)(in_ECX + 0xec) = fVar2 * *(float *)(in_ECX + 0xec);
    local_3c = fVar3;
  }
  fStack_14 = ((1.0 - local_3c * 0.822948) - local_3c * local_3c * 0.130529) -
              local_3c * local_3c * local_3c * 0.044408;
  FUN_00889470(&local_20,&local_30);
  FUN_004d6830();
  *(float *)(in_ECX + 0xa0) = local_20 + local_20;
  *(float *)(in_ECX + 0xa4) = fStack_1c + fStack_1c;
  *(float *)(in_ECX + 0xa8) = fStack_18 + fStack_18;
  *(float *)(in_ECX + 0xac) = fStack_14 + fStack_14;
  *(float *)(in_ECX + 0xac) = SQRT(local_3c) * 3.1415927;
  *(undefined4 *)(in_ECX + 0x80) = local_30;
  *(undefined4 *)(in_ECX + 0x84) = uStack_2c;
  *(undefined4 *)(in_ECX + 0x88) = uStack_28;
  *(undefined4 *)(in_ECX + 0x8c) = uStack_24;
  FUN_008b1dd0(in_ECX + 0x80);
  fVar2 = *(float *)(in_ECX + 0x90);
  fVar3 = *(float *)(in_ECX + 0x94);
  fVar4 = *(float *)(in_ECX + 0x98);
  *(float *)(in_ECX + 0x40) =
       *(float *)(in_ECX + 0x60) -
       (*pfVar1 * fVar2 + *(float *)(in_ECX + 0x20) * fVar3 + *(float *)(in_ECX + 0x30) * fVar4);
  *(float *)(in_ECX + 0x44) =
       *(float *)(in_ECX + 100) -
       (*(float *)(in_ECX + 0x14) * fVar2 + *(float *)(in_ECX + 0x24) * fVar3 +
       *(float *)(in_ECX + 0x34) * fVar4);
  *(float *)(in_ECX + 0x48) =
       *(float *)(in_ECX + 0x68) -
       (*(float *)(in_ECX + 0x18) * fVar2 + *(float *)(in_ECX + 0x28) * fVar3 +
       *(float *)(in_ECX + 0x38) * fVar4);
  *(float *)(in_ECX + 0x4c) =
       *(float *)(in_ECX + 0x6c) -
       (*(float *)(in_ECX + 0x1c) * fVar2 + *(float *)(in_ECX + 0x2c) * fVar3 +
       *(float *)(in_ECX + 0x3c) * fVar4);
  uVar5 = *(undefined4 *)(param_3 + 0x14);
  uVar6 = *(undefined4 *)(param_3 + 0x18);
  uVar7 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(in_ECX + 0xd4) = uVar5;
  *(undefined4 *)(in_ECX + 0xd8) = uVar6;
  *(undefined4 *)(in_ECX + 0xdc) = uVar7;
  fVar2 = *(float *)(param_3 + 0x20);
  fVar3 = *(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 0x28);
  *(float *)(in_ECX + 0xe0) =
       *pfVar1 * fVar2 + *(float *)(in_ECX + 0x20) * fVar3 + *(float *)(in_ECX + 0x30) * fVar4;
  *(float *)(in_ECX + 0xe4) =
       *(float *)(in_ECX + 0x14) * fVar2 + *(float *)(in_ECX + 0x24) * fVar3 +
       *(float *)(in_ECX + 0x34) * fVar4;
  *(float *)(in_ECX + 0xe8) =
       *(float *)(in_ECX + 0x18) * fVar2 + *(float *)(in_ECX + 0x28) * fVar3 +
       *(float *)(in_ECX + 0x38) * fVar4;
  *(float *)(in_ECX + 0xec) =
       *(float *)(in_ECX + 0x1c) * fVar2 + *(float *)(in_ECX + 0x2c) * fVar3 +
       *(float *)(in_ECX + 0x3c) * fVar4;
  return param_3 + 0x80;
}



void FUN_008eb7e0(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int local_30;
  int local_2c;
  
  iVar5 = *(int *)(param_1 + 0x30);
  if (iVar5 != 1 && -1 < iVar5 + -1) {
    piVar6 = (int *)(param_1 + 4);
    local_2c = 1;
    do {
      piVar4 = piVar6;
      local_30 = local_2c;
      if (local_2c < iVar5) {
        do {
          iVar5 = piVar4[3];
          iVar1 = *piVar6;
          if ((*(int *)(iVar5 + 0x30) <= *(int *)(iVar1 + 0x30)) &&
             ((*(int *)(iVar1 + 0x30) != *(int *)(iVar5 + 0x30) ||
              (*(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18) +
               *(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14) +
               *(float *)(iVar5 + 0x10) * *(float *)(iVar5 + 0x10) <=
               *(float *)(iVar1 + 0x18) * *(float *)(iVar1 + 0x18) +
               *(float *)(iVar1 + 0x14) * *(float *)(iVar1 + 0x14) +
               *(float *)(iVar1 + 0x10) * *(float *)(iVar1 + 0x10))))) {
            iVar5 = piVar6[-1];
            iVar1 = *piVar6;
            iVar2 = piVar6[1];
            piVar6[-1] = piVar4[2];
            *piVar6 = piVar4[3];
            piVar6[1] = piVar4[4];
            piVar4[2] = iVar5;
            piVar4[3] = iVar1;
            piVar4[4] = iVar2;
          }
          local_30 = local_30 + 1;
          piVar4 = piVar4 + 3;
        } while (local_30 < *(int *)(param_1 + 0x30));
      }
      iVar5 = *(int *)(param_1 + 0x30);
      piVar6 = piVar6 + 3;
      bVar3 = local_2c < iVar5 + -1;
      local_2c = local_2c + 1;
    } while (bVar3);
  }
  return;
}



void FUN_008eb910(float *param_1)

{
  float *in_EAX;
  undefined1 *in_ECX;
  
  if (-0.001 <= (param_1[2] - in_EAX[6]) * in_EAX[2] +
                (param_1[1] - in_EAX[5]) * in_EAX[1] + (*param_1 - in_EAX[4]) * *in_EAX) {
    *in_ECX = 0;
    return;
  }
  *in_ECX = 1;
  return;
}



void FUN_008eb970(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *in_ECX;
  float *unaff_ESI;
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
  
  fVar22 = in_ECX[8];
  fVar4 = in_ECX[4];
  fVar5 = in_ECX[5];
  fVar6 = in_ECX[6];
  fVar7 = in_ECX[7];
  fVar8 = *in_ECX;
  fVar9 = in_ECX[1];
  fVar10 = in_ECX[2];
  fVar11 = in_ECX[3];
  fVar2 = in_ECX[0xb];
  fVar12 = *param_2 - fVar4;
  fVar13 = param_2[1] - fVar5;
  fVar14 = param_2[2] - fVar6;
  fVar20 = fVar14 * fVar10 + fVar13 * fVar9 + fVar12 * fVar8;
  fVar15 = -fVar20;
  iVar3 = *(int *)(param_1 + 0x38);
  fVar20 = fVar20 * fVar20;
  fVar21 = fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12;
  fVar12 = fVar12 + fVar15 * fVar8;
  fVar13 = fVar13 + fVar15 * fVar9;
  fVar14 = fVar14 + fVar15 * fVar10;
  fVar15 = (param_2[3] - fVar7) + fVar15 * fVar11;
  if (fVar14 * *(float *)(iVar3 + 0x38) +
      fVar13 * *(float *)(iVar3 + 0x34) + fVar12 * *(float *)(iVar3 + 0x30) <= 0.0) {
    fVar1 = in_ECX[10];
  }
  else {
    fVar1 = in_ECX[9];
  }
  if (fVar1 <= 0.0) {
    if (fVar21 <= (fVar22 * fVar22 + 1.0) * fVar20) {
      *unaff_ESI = fVar4;
      unaff_ESI[1] = fVar5;
      unaff_ESI[2] = fVar6;
      unaff_ESI[3] = fVar7;
      return;
    }
  }
  else {
    fVar16 = *(float *)(iVar3 + 0x34) * fVar10 - *(float *)(iVar3 + 0x38) * fVar9;
    fVar17 = *(float *)(iVar3 + 0x38) * fVar8 - *(float *)(iVar3 + 0x30) * fVar10;
    fVar18 = *(float *)(iVar3 + 0x30) * fVar9 - *(float *)(iVar3 + 0x34) * fVar8;
    fVar19 = *(float *)(iVar3 + 0x3c) * fVar11 - *(float *)(iVar3 + 0x3c) * fVar11;
    fVar23 = fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16;
    fVar24 = 0.0;
    if (1.1920929e-07 < fVar23) {
      fVar24 = 1.0 / SQRT(fVar23);
      fVar16 = fVar24 * fVar16;
      fVar17 = fVar24 * fVar17;
      fVar18 = fVar24 * fVar18;
      fVar19 = fVar24 * fVar19;
      fVar24 = fVar14 * fVar18 + fVar13 * fVar17 + fVar12 * fVar16;
      fVar23 = fVar22 * fVar22 * fVar20;
      if (fVar24 * fVar24 < fVar23 != (fVar24 * fVar24 == fVar23)) {
        fVar23 = -fVar24;
        fVar24 = 0.0;
        fVar12 = fVar12 + fVar23 * fVar16;
        fVar13 = fVar13 + fVar23 * fVar17;
        fVar14 = fVar14 + fVar23 * fVar18;
        fVar15 = fVar15 + fVar23 * fVar19;
      }
    }
    fVar22 = (fVar1 + fVar22) * (fVar1 + fVar22) * fVar20;
    fVar20 = (fVar21 - fVar24 * fVar24) - fVar20;
    if (fVar20 < fVar22 != (fVar20 == fVar22)) {
      if (fVar24 == 0.0) {
        *unaff_ESI = fVar4;
        unaff_ESI[1] = fVar5;
        unaff_ESI[2] = fVar6;
        unaff_ESI[3] = fVar7;
        return;
      }
      fVar12 = fVar24 * fVar16;
      fVar13 = fVar24 * fVar17;
      fVar14 = fVar24 * fVar18;
      fVar15 = fVar24 * fVar19;
    }
  }
  if (((fVar2 < 1.0) &&
      (fVar22 = fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12, 1.1920929e-07 <= fVar22)) &&
     (fVar21 * 0.001 < fVar22)) {
    fVar2 = (1.0 - fVar2) * SQRT(fVar21 / fVar22) + fVar2;
    fVar22 = -(fVar10 * fVar2 * fVar14 + fVar9 * fVar2 * fVar13 + fVar8 * fVar2 * fVar12);
    fVar12 = fVar2 * fVar12 + fVar22 * fVar8;
    fVar13 = fVar2 * fVar13 + fVar22 * fVar9;
    fVar14 = fVar2 * fVar14 + fVar22 * fVar10;
    fVar15 = fVar2 * fVar15 + fVar22 * fVar11;
  }
  *unaff_ESI = fVar12 + fVar4;
  unaff_ESI[1] = fVar13 + fVar5;
  unaff_ESI[2] = fVar14 + fVar6;
  unaff_ESI[3] = fVar15 + fVar7;
  return;
}



void FUN_008ebcd0(undefined1 (*param_1) [16],float *param_2,float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int unaff_EDI;
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
  
  fVar15 = *param_2;
  fVar20 = param_2[1];
  fVar21 = param_2[2];
  fVar4 = param_2[3];
  auVar1 = *param_1;
  fVar11 = auVar1._0_4_;
  fVar13 = auVar1._4_4_;
  fVar10 = auVar1._8_4_;
  fVar14 = auVar1._12_4_;
  fVar16 = fVar13 * fVar21 - fVar10 * fVar20;
  fVar17 = fVar10 * fVar15 - fVar11 * fVar21;
  fVar18 = fVar11 * fVar20 - fVar13 * fVar15;
  fVar19 = fVar14 * fVar4 - fVar14 * fVar4;
  fVar12 = fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16;
  if (fVar12 < 1.1920929e-07 == (fVar12 == 1.1920929e-07)) {
    fVar12 = 1.0 / SQRT(fVar12);
    fVar6 = fVar12 * fVar16;
    fVar7 = fVar12 * fVar17;
    fVar8 = fVar12 * fVar18;
    fVar9 = fVar12 * fVar19;
    fVar22 = fVar21 * param_2[6] + fVar20 * param_2[5] + fVar15 * param_2[4];
    fVar23 = fVar10 * *(float *)(param_1[1] + 8) +
             fVar13 * *(float *)(param_1[1] + 4) + fVar11 * *(float *)param_1[1];
    fVar3 = (fVar8 * (*(float *)(param_1[1] + 8) + param_2[6]) +
            fVar7 * (*(float *)(param_1[1] + 4) + param_2[5]) +
            fVar6 * (*(float *)param_1[1] + param_2[4])) * 0.5;
    iVar2 = *(int *)(unaff_EDI + 0x38);
    fVar16 = fVar12 * (fVar16 * fVar3 + (fVar20 * fVar8 - fVar21 * fVar7) * fVar23 +
                      (fVar7 * fVar10 - fVar8 * fVar13) * fVar22);
    fVar10 = fVar12 * (fVar17 * fVar3 + (fVar21 * fVar6 - fVar15 * fVar8) * fVar23 +
                      (fVar8 * fVar11 - fVar6 * fVar10) * fVar22);
    fVar11 = fVar12 * (fVar18 * fVar3 + (fVar15 * fVar7 - fVar20 * fVar6) * fVar23 +
                      (fVar6 * fVar13 - fVar7 * fVar11) * fVar22);
    fVar12 = fVar12 * (fVar19 * fVar3 + (fVar4 * fVar9 - fVar4 * fVar9) * fVar23 +
                      (fVar9 * fVar14 - fVar9 * fVar14) * fVar22);
    auVar1._4_4_ = -(uint)(ABS(fVar10) < *(float *)(iVar2 + 0x24));
    auVar1._0_4_ = -(uint)(ABS(fVar16) < *(float *)(iVar2 + 0x20));
    auVar1._8_4_ = -(uint)(ABS(fVar11) < *(float *)(iVar2 + 0x28));
    auVar1._12_4_ = -(uint)(ABS(fVar12) < *(float *)(iVar2 + 0x2c));
    uVar5 = movmskps(fVar23,auVar1);
    if (((byte)uVar5 & 7) == 7) {
      fVar13 = *param_3 - fVar16;
      fVar14 = param_3[1] - fVar10;
      fVar15 = param_3[2] - fVar11;
      fVar20 = fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13;
      fVar21 = *(float *)(iVar2 + 0x38) * fVar8 +
               *(float *)(iVar2 + 0x34) * fVar7 + *(float *)(iVar2 + 0x30) * fVar6;
      fVar13 = fVar15 * fVar8 + fVar14 * fVar7 + fVar13 * fVar6;
      if (fVar13 * fVar21 <= 0.0) {
        fVar14 = *(float *)(param_1[2] + 8) + param_2[10];
      }
      else {
        fVar14 = *(float *)(param_1[2] + 4) + param_2[9];
      }
      fVar14 = (fVar14 * fVar21 + *(float *)param_1[2] + param_2[8]) * 0.5;
      fVar21 = (*(float *)(param_1[2] + 0xc) + param_2[0xb]) * 0.5;
      fVar15 = fVar13 * fVar13;
      if (fVar15 <= fVar14 * fVar14 * (fVar20 - fVar15)) {
        *param_4 = fVar16;
        param_4[1] = fVar10;
        param_4[2] = fVar11;
        param_4[3] = fVar12;
        return;
      }
      if ((fVar21 < 1.0) && (fVar20 * 0.001 < fVar15)) {
        fVar13 = ((1.0 - fVar21) * SQRT(fVar20) * ABS(1.0 / fVar13) + fVar21) * fVar13;
      }
      *param_4 = fVar16 + fVar13 * fVar6;
      param_4[1] = fVar10 + fVar13 * fVar7;
      param_4[2] = fVar11 + fVar13 * fVar8;
      param_4[3] = fVar12 + fVar13 * fVar9;
      return;
    }
  }
  FUN_008eb7e0();
  *(undefined4 *)
   (((int)param_1 - *(int *)(*(int *)(unaff_EDI + 0x38) + 0x48) >> 6) * 0x10 + 0xc +
   *(int *)(*(int *)(unaff_EDI + 0x3c) + 0x24)) = 2;
  *(undefined4 *)
   (((int)param_2 - *(int *)(*(int *)(unaff_EDI + 0x38) + 0x48) >> 6) * 0x10 + 0xc +
   *(int *)(*(int *)(unaff_EDI + 0x3c) + 0x24)) = 2;
  if ((int)param_2[0xc] < *(int *)param_1[3]) {
    FUN_008eb970();
    FUN_008eb970();
    return;
  }
  FUN_008eb970();
  FUN_008eb970();
  return;
}



void FUN_008ec0a0(float *param_1,int param_2,undefined4 param_3,float *param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
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
  undefined1 (*in_EAX) [16];
  undefined4 uVar13;
  float *in_ECX;
  int in_EDX;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  auVar1 = *in_EAX;
  fVar15 = auVar1._0_4_;
  fVar3 = auVar1._4_4_;
  fVar14 = auVar1._8_4_;
  fVar4 = auVar1._12_4_;
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  fVar20 = fVar3 * fVar7 - fVar14 * fVar6;
  fVar21 = fVar14 * fVar5 - fVar15 * fVar7;
  fVar22 = fVar15 * fVar6 - fVar3 * fVar5;
  fVar9 = *in_ECX;
  fVar10 = in_ECX[1];
  fVar11 = in_ECX[2];
  fVar12 = in_ECX[3];
  fVar19 = fVar22 * fVar11 + fVar21 * fVar10 + fVar20 * fVar9;
  if (1.1920929e-07 <= ABS(fVar19)) {
    fVar19 = 1.0 / fVar19;
    fVar18 = fVar7 * param_1[6] + fVar6 * param_1[5] + fVar5 * param_1[4];
    fVar16 = fVar14 * *(float *)(in_EAX[1] + 8) +
             fVar3 * *(float *)(in_EAX[1] + 4) + fVar15 * *(float *)in_EAX[1];
    fVar17 = fVar11 * in_ECX[6] + fVar10 * in_ECX[5] + fVar9 * in_ECX[4];
    iVar2 = *(int *)(in_EDX + 0x38);
    fVar20 = fVar19 * (fVar20 * fVar17 + (fVar6 * fVar11 - fVar7 * fVar10) * fVar16 +
                      (fVar10 * fVar14 - fVar11 * fVar3) * fVar18);
    fVar14 = fVar19 * (fVar21 * fVar17 + (fVar7 * fVar9 - fVar5 * fVar11) * fVar16 +
                      (fVar11 * fVar15 - fVar9 * fVar14) * fVar18);
    fVar15 = fVar19 * (fVar22 * fVar17 + (fVar5 * fVar10 - fVar6 * fVar9) * fVar16 +
                      (fVar9 * fVar3 - fVar10 * fVar15) * fVar18);
    fVar19 = fVar19 * ((fVar4 * fVar8 - fVar4 * fVar8) * fVar17 +
                       (fVar8 * fVar12 - fVar8 * fVar12) * fVar16 +
                      (fVar12 * fVar4 - fVar12 * fVar4) * fVar18);
    auVar1._4_4_ = -(uint)(ABS(fVar14) < *(float *)(iVar2 + 0x24));
    auVar1._0_4_ = -(uint)(ABS(fVar20) < *(float *)(iVar2 + 0x20));
    auVar1._8_4_ = -(uint)(ABS(fVar15) < *(float *)(iVar2 + 0x28));
    auVar1._12_4_ = -(uint)(ABS(fVar19) < *(float *)(iVar2 + 0x2c));
    uVar13 = movmskps(fVar18,auVar1);
    if (((byte)uVar13 & 7) == 7) {
      *param_4 = fVar20;
      param_4[1] = fVar14;
      param_4[2] = fVar15;
      param_4[3] = fVar19;
      return;
    }
  }
  if (param_2 != 0) {
    FUN_008eb7e0();
    param_1 = *(float **)(in_EDX + 0x1c);
    in_ECX = *(float **)(in_EDX + 4);
    in_EAX = *(undefined1 (**) [16])(in_EDX + 0x10);
  }
  *(undefined4 *)
   (((int)in_ECX - *(int *)(*(int *)(in_EDX + 0x38) + 0x48) >> 6) * 0x10 + 0xc +
   *(int *)(*(int *)(in_EDX + 0x3c) + 0x24)) = 1;
  *(undefined4 *)
   (((int)in_EAX - *(int *)(*(int *)(in_EDX + 0x38) + 0x48) >> 6) * 0x10 + 0xc +
   *(int *)(*(int *)(in_EDX + 0x3c) + 0x24)) = 1;
  *(undefined4 *)
   (((int)param_1 - *(int *)(*(int *)(in_EDX + 0x38) + 0x48) >> 6) * 0x10 + 0xc +
   *(int *)(*(int *)(in_EDX + 0x3c) + 0x24)) = 1;
  iVar2 = *(int *)(in_EDX + 0x30);
  FUN_008ebcd0(in_ECX,in_EAX,param_3,param_4);
  if (iVar2 == *(int *)(in_EDX + 0x30)) {
    FUN_008ebcd0(in_ECX,param_1,param_4,param_4);
  }
  if (iVar2 != *(int *)(in_EDX + 0x30)) {
    return;
  }
  FUN_008ebcd0(in_EAX,param_1,param_4,param_4);
  return;
}



void FUN_008ec340(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  char local_50;
  char local_4c;
  char local_48;
  char local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
LAB_008ec350:
  switch(in_EAX[0xc]) {
  case 1:
    FUN_008eb970();
    return;
  case 2:
    FUN_008eb970();
    uVar1 = in_EAX[1];
    FUN_008eb910(&local_40);
    if (local_44 != '\0') {
      FUN_008ebcd0(uVar1,in_EAX[4],in_EAX[0xe] + 0x10,in_EAX[0xf] + 0x10);
      return;
    }
    iVar5 = in_EAX[0xf];
    *(undefined4 *)(iVar5 + 0x10) = local_40;
    *(undefined4 *)(iVar5 + 0x14) = uStack_3c;
    *(undefined4 *)(iVar5 + 0x18) = uStack_38;
    *(undefined4 *)(iVar5 + 0x1c) = uStack_34;
    *in_EAX = in_EAX[3];
    in_EAX[1] = in_EAX[4];
    in_EAX[2] = in_EAX[5];
    in_EAX[0xc] = 1;
    return;
  case 3:
    FUN_008eb970();
    puVar4 = in_EAX + 1;
    FUN_008eb910(&local_40);
    if ((local_4c == '\0') && (FUN_008eb910(&local_40), local_50 == '\0')) {
      iVar5 = in_EAX[0xf];
      *(undefined4 *)(iVar5 + 0x10) = local_40;
      *(undefined4 *)(iVar5 + 0x14) = uStack_3c;
      *(undefined4 *)(iVar5 + 0x18) = uStack_38;
      *(undefined4 *)(iVar5 + 0x1c) = uStack_34;
      *in_EAX = in_EAX[6];
      in_EAX[1] = in_EAX[7];
      in_EAX[2] = in_EAX[8];
      in_EAX[0xc] = 1;
      return;
    }
    iVar5 = 0;
    do {
      if ((int)in_EAX[0xc] < 3) goto LAB_008ec350;
      FUN_008ebcd0(*puVar4,in_EAX[7],in_EAX[0xe] + 0x10,local_30);
      FUN_008eb910(local_30);
      if (local_48 == '\0') {
        in_EAX[iVar5 * -3 + 3] = in_EAX[3];
        in_EAX[iVar5 * -3 + 4] = in_EAX[4];
        in_EAX[iVar5 * -3 + 5] = in_EAX[5];
        in_EAX[3] = in_EAX[6];
        in_EAX[4] = in_EAX[7];
        in_EAX[5] = in_EAX[8];
        in_EAX[0xc] = 2;
        goto LAB_008ec350;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 3;
    } while (iVar5 < 2);
    if (2 < (int)in_EAX[0xc]) {
      FUN_008ec0a0(in_EAX[7],1,in_EAX[0xe] + 0x10,in_EAX[0xf] + 0x10);
      return;
    }
    goto LAB_008ec350;
  case 4:
    break;
  default:
    goto switchD_008ec35d_default;
  }
  FUN_008eb7e0();
  iVar5 = 0;
  do {
    FUN_008ec0a0(in_EAX[10],0,in_EAX[0xe] + 0x10,local_20);
    puVar4 = in_EAX + iVar5 * 3;
    FUN_008eb910(local_20);
    if (local_44 == '\0') {
      *puVar4 = in_EAX[6];
      puVar4[1] = in_EAX[7];
      puVar4[2] = in_EAX[8];
      in_EAX[6] = in_EAX[9];
      in_EAX[7] = in_EAX[10];
      in_EAX[8] = in_EAX[0xb];
      in_EAX[0xc] = 3;
      iVar5 = 10;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  if (iVar5 < 10) goto code_r0x008ec538;
  goto LAB_008ec350;
code_r0x008ec538:
  iVar5 = in_EAX[0xe];
  local_40 = *(undefined4 *)(iVar5 + 0x10);
  uStack_3c = *(undefined4 *)(iVar5 + 0x14);
  uStack_38 = *(undefined4 *)(iVar5 + 0x18);
  uStack_34 = *(undefined4 *)(iVar5 + 0x1c);
  uVar1 = in_EAX[10];
  iVar5 = in_EAX[0xc];
  FUN_008ec0a0(in_EAX[7],0,&local_40,&local_40);
  if (iVar5 == in_EAX[0xc]) {
    FUN_008ec0a0(uVar1,0,&local_40,&local_40);
  }
  if (iVar5 == in_EAX[0xc]) {
    FUN_008ec0a0(uVar1,0,&local_40,&local_40);
  }
  if (iVar5 == in_EAX[0xc]) {
    FUN_008ec0a0(uVar1,0,&local_40,&local_40);
  }
  iVar5 = in_EAX[0xf];
  *(undefined4 *)(iVar5 + 0x10) = local_40;
  *(undefined4 *)(iVar5 + 0x14) = uStack_3c;
  *(undefined4 *)(iVar5 + 0x18) = uStack_38;
  *(undefined4 *)(iVar5 + 0x1c) = uStack_34;
  iVar5 = 0;
  if (-1 < *(int *)(in_EAX[2] + 0xc)) {
    iVar5 = *(int *)(in_EAX[2] + 0xc);
  }
  if (iVar5 <= *(int *)(in_EAX[5] + 0xc)) {
    iVar5 = *(int *)(in_EAX[5] + 0xc);
  }
  if (iVar5 <= *(int *)(in_EAX[8] + 0xc)) {
    iVar5 = *(int *)(in_EAX[8] + 0xc);
  }
  if (iVar5 <= *(int *)(in_EAX[0xb] + 0xc)) {
    iVar5 = *(int *)(in_EAX[0xb] + 0xc);
  }
  iVar2 = 0;
  piVar3 = in_EAX + 2;
  do {
    if (iVar5 == *(int *)(*piVar3 + 0xc)) {
      puVar4 = in_EAX + iVar2 * 3;
      *puVar4 = in_EAX[9];
      puVar4[1] = in_EAX[10];
      puVar4[2] = in_EAX[0xb];
      break;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 3;
  } while (iVar2 < 4);
  in_EAX[0xc] = in_EAX[0xc] + -1;
  *(undefined4 *)(in_EAX[2] + 0xc) = 0;
  *(undefined4 *)(in_EAX[5] + 0xc) = 0;
  *(undefined4 *)(in_EAX[8] + 0xc) = 0;
switchD_008ec35d_default:
  return;
}



void FUN_008ec790(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float local_74;
  float local_70;
  int local_68;
  int local_64;
  int local_50 [6];
  int local_38;
  int local_20;
  float local_1c;
  float *local_18;
  float *local_14;
  
  local_70 = param_1[0x10];
  fVar3 = param_1[5];
  fVar10 = param_1[6];
  fVar4 = param_1[7];
  param_2[4] = param_1[4];
  param_2[5] = fVar3;
  param_2[6] = fVar10;
  param_2[7] = fVar4;
  fVar3 = param_1[1];
  fVar10 = param_1[2];
  fVar4 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = fVar3;
  param_2[2] = fVar10;
  param_2[3] = fVar4;
  iVar6 = 0;
  local_20 = 0;
  local_1c = 0.0;
  local_18 = param_1;
  local_14 = param_2;
  if (0 < (int)param_1[0x13]) {
    iVar8 = 0;
    do {
      puVar5 = (undefined1 *)((int)param_2[9] + iVar8);
      puVar5[1] = 0;
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 4) = 0;
      *(undefined4 *)(puVar5 + 8) = 0;
      *(undefined4 *)(puVar5 + 0xc) = 0;
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x10;
    } while (iVar6 < (int)param_1[0x13]);
  }
  if (0.0 <= local_70) {
    while( true ) {
      iVar6 = local_20;
      local_74 = local_70;
      iVar8 = 0;
      local_64 = -1;
      if (0 < (int)param_1[0x13]) {
        iVar9 = 0;
        local_68 = 0;
        do {
          if ((((local_20 < 1) || (local_50[0] != iVar8)) &&
              ((local_20 < 2 || (local_50[3] != iVar8)))) &&
             (((local_20 < 3 || (local_38 != iVar8)) &&
              (*(int *)((int)param_2[9] + 0xc + iVar9) == 0)))) {
            pfVar2 = (float *)((int)param_1[0x12] + 0x10 + local_68);
            pfVar1 = (float *)((int)param_1[0x12] + local_68);
            fVar3 = -((param_2[6] - pfVar2[2]) * pfVar1[2] +
                     (param_2[5] - pfVar2[1]) * pfVar1[1] + (param_2[4] - *pfVar2) * *pfVar1);
            if (fVar3 < 0.0 == (fVar3 == 0.0)) {
              fVar10 = -local_1c;
              fVar10 = pfVar1[1] * (param_2[1] + fVar10 * pfVar2[1]) +
                       *pfVar1 * (*param_2 + fVar10 * *pfVar2) +
                       pfVar1[2] * (param_2[2] + fVar10 * pfVar2[2]) + pfVar1[3];
              if (fVar10 < 1.1920929e-07 != (fVar10 == 1.1920929e-07)) {
                fVar10 = 0.0;
              }
              fVar10 = fVar10 + *(float *)((int)local_14[9] + 8 + iVar9);
              if (fVar10 < fVar3 * local_74) {
                local_74 = fVar10 / fVar3;
                local_64 = iVar8;
              }
            }
          }
          local_68 = local_68 + 0x40;
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 0x10;
        } while (iVar8 < (int)param_1[0x13]);
      }
      if (0.0001 < local_74) {
        local_1c = local_74 + local_1c;
        local_70 = local_70 - local_74;
        *param_2 = *param_2 + local_74 * param_2[4];
        param_2[1] = param_2[1] + local_74 * param_2[5];
        param_2[2] = param_2[2] + local_74 * param_2[6];
        param_2[3] = param_2[3] + local_74 * param_2[7];
        if (0 < local_20) {
          piVar7 = local_50 + 2;
          iVar8 = local_20;
          do {
            puVar5 = (undefined1 *)*piVar7;
            piVar7 = piVar7 + 3;
            iVar8 = iVar8 + -1;
            *(float *)(puVar5 + 4) = local_74 + *(float *)(puVar5 + 4);
            *puVar5 = 1;
          } while (iVar8 != 0);
        }
        param_2[8] = local_1c;
        if (local_18[0x11] < local_1c) {
          return;
        }
      }
      if (local_64 < 0) break;
      fVar3 = param_2[9];
      iVar8 = local_20 * 3;
      iVar9 = local_20 * 3;
      local_20 = local_20 + 1;
      local_50[iVar9 + 1] = local_64 * 0x40 + (int)param_1[0x12];
      iVar9 = local_64 * 0x10 + (int)fVar3;
      fVar3 = *(float *)(local_64 * 0x10 + 8 + (int)fVar3) + 1.1920929e-07;
      local_50[iVar6 * 3 + 2] = iVar9;
      local_50[iVar8] = local_64;
      *(float *)(iVar9 + 8) = fVar3 + fVar3;
      FUN_008ec340();
      if (local_70 < 0.0) {
        return;
      }
    }
    param_2[8] = param_1[0x10];
  }
  return;
}



float10 FUN_008eca90(uint param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (param_1 >> 0x17 & 0xff) - 0x7f;
  iVar2 = 0x17 - uVar3;
  param_1 = param_1 & ~((int)((param_1 & 0x7fffffff) - 1) >> 0x1f);
  bVar1 = ~(byte)(iVar2 >> 0x1f);
  uVar4 = -0x800000 >> ((bVar1 & 0x17) - (bVar1 & (byte)iVar2) & 0x1f) | iVar2 >> 0x1f;
  return (float10)(float)((~((~uVar4 & param_1) - 1) & 0x800000 >> ((byte)uVar3 & 0x1f) &
                          (int)param_1 >> 0x1f) + param_1 & ~((int)uVar3 >> 0x1f) & uVar4 |
                         (int)(uVar3 & param_1) >> 0x1f & 0xbf800000U);
}



int FUN_008ecb30(uint param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar5 = param_1 >> 0x17 & 0xff;
  iVar6 = uVar5 - 0x7f;
  iVar1 = uVar5 - 0x97;
  uVar7 = ~(iVar1 >> 0x1f);
  bVar3 = (byte)(iVar1 >> 0x1f);
  bVar2 = 0x17U - (char)iVar6 & bVar3;
  uVar5 = param_1 & ~((int)((param_1 & 0x7fffffff) - 1) >> 0x1f);
  uVar4 = (uVar5 & 0x7fffff | 0x800000) & (-0x800000 >> ((bVar3 & 0x17) - bVar2 & 0x1f) | uVar7);
  return ((int)(((uVar4 * 2 - 1 | (int)uVar5 >> 0x1f) - uVar4) + 1 & ~(iVar6 >> 0x1f)) >>
         (bVar2 & 0x1f)) << ((char)(param_1 >> 0x17) + 0x6aU & (byte)uVar7 & 0x1f);
}



float10 FUN_008ecbb0(float param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = ABS((float10)param_1);
  fVar2 = ABS((float10)param_2);
  if (fVar1 < fVar2 == (fVar1 == fVar2)) {
    fVar2 = fVar2 / (fVar1 + (float10)1.1920929e-07);
    fVar1 = (float10)1.5707964 -
            ((fVar2 - (float10)0.121079 * fVar2 * fVar2) -
            fVar2 * fVar2 * fVar2 * (float10)0.09352282);
  }
  else {
    fVar1 = fVar1 / (fVar2 + (float10)1.1920929e-07);
    fVar1 = (fVar1 - (float10)0.121079 * fVar1 * fVar1) -
            fVar1 * fVar1 * fVar1 * (float10)0.09352282;
  }
  if (param_2 < 0.0) {
    fVar1 = (float10)3.1415927 - fVar1;
  }
  if (param_1 < 0.0) {
    fVar1 = -fVar1;
  }
  return fVar1;
}



void FUN_008ecc60(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int in_ECX;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_2c;
  undefined4 uStack_24;
  
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  *(float *)(in_ECX + 0xa0) = *param_1;
  *(float *)(in_ECX + 0xa4) = fVar6;
  *(float *)(in_ECX + 0xa8) = fVar7;
  *(float *)(in_ECX + 0xac) = fVar8;
  (**(code **)(**(int **)(in_ECX + 0x14) + 0xc))
            (in_ECX + 0x70,*(float *)(*(int *)(*(int *)(in_ECX + 8) + 0x74) + 8) * 0.5 + param_2[5],
             &local_60);
  fStack_7c = *param_2 - *param_1;
  fStack_78 = param_2[1] - param_1[1];
  fStack_74 = param_2[2] - param_1[2];
  fStack_70 = param_2[3] - param_1[3];
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0;
  auVar12._4_4_ = fStack_78;
  auVar12._0_4_ = fStack_7c;
  auVar12._8_4_ = fStack_74;
  auVar12._12_4_ = fStack_70;
  auVar13 = minps(ZEXT816(0),auVar12);
  auVar5._4_4_ = fStack_78;
  auVar5._0_4_ = fStack_7c;
  auVar5._8_4_ = fStack_74;
  auVar5._12_4_ = fStack_70;
  auVar12 = maxps(auVar11,auVar5);
  fStack_6c = fStack_6c + auVar13._0_4_;
  fStack_68 = fStack_68 + auVar13._4_4_;
  fStack_64 = fStack_64 + auVar13._8_4_;
  local_60 = local_60 + auVar13._12_4_;
  fStack_5c = fStack_5c + auVar12._0_4_;
  fStack_58 = fStack_58 + auVar12._4_4_;
  fStack_54 = fStack_54 + auVar12._8_4_;
  fStack_50 = fStack_50 + auVar12._12_4_;
  FUN_008de950(&fStack_6c);
  fStack_2c = 1.1920929e-07;
  puVar2 = *(undefined4 **)(*(int *)(in_ECX + 8) + 0x74);
  uStack_4c = *puVar2;
  uStack_48 = puVar2[1];
  uStack_44 = puVar2[2];
  uStack_40 = puVar2[3];
  uStack_24 = puVar2[8];
  FUN_008d9870(&fStack_7c,param_2[5]);
  fStack_2c = param_2[4];
  iVar3 = *(int *)(in_ECX + 0x124);
  iVar4 = *(int *)(*(int *)(in_ECX + 8) + 0x7c);
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    piVar1 = (int *)(*(int *)(in_ECX + 0x120) + iVar3 * 4);
    iVar9 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(in_ECX + 0x120) + iVar3 * 4) + 8))();
    if ((iVar9 == 0x18) && ((*(uint *)(*piVar1 + 0x1c) & 0x2000) != 0)) {
      iVar9 = 3;
    }
    iVar10 = (**(code **)(**(int **)(in_ECX + 0x14) + 8))();
    (**(code **)(iVar4 + (*(byte *)(iVar10 * 0x20 + iVar9 + 400 + iVar4) + 0x7b) * 0x14))
              ((undefined4 *)(in_ECX + 0x14),*piVar1,&uStack_4c,param_3,param_4);
  }
  return;
}



void FUN_008ece60(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(in_ECX + 8) + 0x74);
  iVar2 = *piVar1;
  iVar4 = *(int *)(in_ECX + 0x124) + -1;
  if (-1 < iVar4) {
    do {
      iVar3 = *(int *)(in_ECX + 0x120);
      iVar5 = (**(code **)(*(int *)**(undefined4 **)(iVar3 + iVar4 * 4) + 8))();
      iVar6 = (**(code **)(**(int **)(in_ECX + 0x14) + 8))();
      (**(code **)(iVar2 + 0x994 + (uint)*(byte *)(iVar6 * 0x20 + iVar5 + 400 + iVar2) * 0x14))
                ((undefined4 *)(in_ECX + 0x14),*(undefined4 *)(iVar3 + iVar4 * 4),piVar1,param_1);
      if (*(char *)(param_1 + 4) != '\0') {
        return;
      }
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return;
}



void FUN_008ecf30(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  undefined1 local_c [4];
  int *local_8;
  undefined1 local_4;
  
  if (*param_1 != 0) {
    iVar4 = *(int *)(in_ECX + 0x124) + -1;
    if (-1 < iVar4) {
      puVar2 = (undefined4 *)(*(int *)(in_ECX + 0x120) + iVar4 * 4);
      do {
        if ((int *)*puVar2 == param_1) {
          FUN_0088d7d0(param_1,1);
          iVar3 = *(int *)(in_ECX + 0x124) + -1;
          *(int *)(in_ECX + 0x124) = iVar3;
          *(undefined4 *)(*(int *)(in_ECX + 0x120) + iVar4 * 4) =
               *(undefined4 *)(*(int *)(in_ECX + 0x120) + iVar3 * 4);
          return;
        }
        iVar4 = iVar4 + -1;
        puVar2 = puVar2 + -1;
      } while (-1 < iVar4);
    }
    iVar4 = *(int *)(in_ECX + 0x54);
    local_4 = 0;
    local_8 = param_1;
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x50) + iVar4 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(local_c);
      }
    }
  }
  return;
}



void FUN_008ecfc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_008abc40(param_1,param_2);
  *in_ECX = &PTR_FUN_00a9affc;
  in_ECX[0x48] = 0;
  in_ECX[0x49] = 0;
  in_ECX[0x4a] = 0x80000000;
  in_ECX[0xc] = param_3;
  return;
}



void FUN_008ed000(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9affc;
  if (-1 < (int)in_ECX[0x4a]) {
    FUN_008a75d0(in_ECX[0x48],in_ECX[0x4a] << 2,0x14);
  }
  FUN_008de8b0();
  return;
}



undefined4 * FUN_008ed060(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x130,0x2e);
  *(undefined2 *)(puVar1 + 1) = 0x130;
  uVar3 = *(undefined4 *)(in_ECX + 0x30);
  FUN_008abc40(*(undefined4 *)(in_ECX + 0x14),in_ECX + 0x70);
  *puVar1 = &PTR_FUN_00a9affc;
  puVar1[0x48] = 0;
  puVar1[0x49] = 0;
  puVar1[0x4a] = 0x80000000;
  puVar1[0xc] = uVar3;
  uVar2 = puVar1[0x16] & 0x3fffffff;
  if ((int)uVar2 < *(int *)(in_ECX + 0x54)) {
    if (-1 < (int)puVar1[0x16]) {
      FUN_008a75d0(puVar1[0x14],uVar2 * 4,0x14);
    }
    uVar3 = FUN_008a7560(*(int *)(in_ECX + 0x54) << 2,0x14);
    puVar1[0x14] = uVar3;
    puVar1[0x16] = puVar1[0x16] & 0x40000000 | *(uint *)(in_ECX + 0x54);
  }
  iVar5 = *(int *)(in_ECX + 0x54);
  puVar4 = (undefined4 *)puVar1[0x14];
  puVar1[0x15] = iVar5;
  if (0 < iVar5) {
    iVar6 = *(int *)(in_ECX + 0x50) - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar2 = puVar1[0x19] & 0x3fffffff;
  if ((int)uVar2 < *(int *)(in_ECX + 0x60)) {
    if (-1 < (int)puVar1[0x19]) {
      FUN_008a75d0(puVar1[0x17],uVar2 * 4,0x14);
    }
    uVar3 = FUN_008a7560(*(int *)(in_ECX + 0x60) << 2,0x14);
    puVar1[0x17] = uVar3;
    puVar1[0x19] = puVar1[0x19] & 0x40000000 | *(uint *)(in_ECX + 0x60);
  }
  iVar5 = *(int *)(in_ECX + 0x60);
  puVar4 = (undefined4 *)puVar1[0x17];
  puVar1[0x18] = iVar5;
  if (0 < iVar5) {
    iVar6 = *(int *)(in_ECX + 0x5c) - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_008a9e50(in_ECX);
  return puVar1;
}



void FUN_008ed2b0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x124) == 0) {
    if (-1 < *(int *)(in_ECX + 0x128)) {
      FUN_008a75d0(*(undefined4 *)(in_ECX + 0x120),*(int *)(in_ECX + 0x128) << 2,0x14);
    }
    *(undefined4 *)(in_ECX + 0x120) = 0;
    *(undefined4 *)(in_ECX + 0x124) = 0;
    *(uint *)(in_ECX + 0x128) = *(uint *)(in_ECX + 0x128) & 0xc0000000 | 0x80000000;
  }
  thunk_FUN_008de800();
  return;
}



void FUN_008ed330(byte param_1)

{
  FUN_008ed000();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008ed3d0(int *param_1)

{
  (**(code **)*param_1)("SphereShape",1);
  (**(code **)(*param_1 + 0x14))();
  return;
}



void FUN_008ed410(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = 0;
  in_ECX[3] = param_1;
  *in_ECX = &PTR_LAB_00a9b078;
  return;
}



void FUN_008ed430(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



void FUN_008ed450(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (-1 < (int)(param_2 - 1U)) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    puVar2 = param_3 + 4;
    for (iVar1 = (param_2 - 1U & 0xfffffff) << 2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}



void FUN_008ed480(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



void FUN_008ed4a0(int param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  
  param_2 = param_2 + *(float *)(in_ECX + 0xc);
  fVar1 = *(float *)(param_1 + 0x34);
  fVar2 = *(float *)(param_1 + 0x38);
  fVar3 = *(float *)(param_1 + 0x3c);
  *param_3 = *(float *)(param_1 + 0x30) - param_2;
  param_3[1] = fVar1 - param_2;
  param_3[2] = fVar2 - param_2;
  param_3[3] = fVar3 - param_2;
  fVar1 = *(float *)(param_1 + 0x34);
  fVar2 = *(float *)(param_1 + 0x38);
  fVar3 = *(float *)(param_1 + 0x3c);
  param_3[4] = *(float *)(param_1 + 0x30) + param_2;
  param_3[5] = fVar1 + param_2;
  param_3[6] = fVar2 + param_2;
  param_3[7] = fVar3 + param_2;
  return;
}



void FUN_008ed4e0(undefined1 *param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  float fVar5;
  int iVar6;
  int in_ECX;
  int unaff_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_1c;
  
  iVar6 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtrcSphere";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  fVar7 = *param_2;
  fVar8 = param_2[1];
  fVar9 = param_2[2];
  fVar5 = *(float *)(in_ECX + 0xc) * *(float *)(in_ECX + 0xc);
  fVar10 = param_2[4] - fVar7;
  fVar11 = param_2[5] - fVar8;
  fVar12 = param_2[6] - fVar9;
  fVar13 = fVar12 * fVar9 + fVar11 * fVar8 + fVar10 * fVar7;
  if (fVar13 < 0.0) {
    fVar10 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
    if (fVar13 * fVar13 <= fVar10 * fVar5 * 100.0) {
      local_1c = 0.0;
    }
    else {
      if (fVar10 < fVar5) goto LAB_008ed75f;
      local_1c = -fVar13;
      fVar11 = local_1c / fVar10;
      fVar13 = 0.0;
      fVar7 = (1.0 - fVar11) * fVar7 + fVar11 * param_2[4];
      fVar8 = (1.0 - fVar11) * fVar8 + fVar11 * param_2[5];
      fVar9 = (1.0 - fVar11) * fVar9 + fVar11 * param_2[6];
    }
    fVar5 = fVar13 * fVar13 - ((fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7) - fVar5) * fVar10;
    if (((fVar5 < 0.0 == (fVar5 == 0.0)) &&
        (local_1c = (-fVar13 - SQRT(fVar5)) + local_1c,
        fVar10 * param_3[5] < local_1c == (fVar10 * param_3[5] == local_1c))) && (0.0 <= local_1c))
    {
      iVar1 = *(int *)(iVar1 + iVar6 * 4);
      local_1c = local_1c / fVar10;
      param_3[5] = local_1c;
      fVar13 = (1.0 - local_1c) * *param_2 + local_1c * param_2[4];
      fVar7 = (1.0 - local_1c) * param_2[1] + local_1c * param_2[5];
      fVar8 = (1.0 - local_1c) * param_2[2] + local_1c * param_2[6];
      fVar9 = (1.0 - local_1c) * param_2[3] + local_1c * param_2[7];
      *param_3 = fVar13;
      param_3[1] = fVar7;
      param_3[2] = fVar8;
      param_3[3] = fVar9;
      fVar5 = 1.0 / *(float *)(in_ECX + 0xc);
      param_3[4] = -NAN;
      *param_3 = fVar5 * fVar13;
      param_3[1] = fVar5 * fVar7;
      param_3[2] = fVar5 * fVar8;
      param_3[3] = fVar5 * fVar9;
      if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
        puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
        *puVar3 = &DAT_00a9610c;
        uVar4 = rdtsc();
        puVar3[1] = (int)uVar4;
        *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
      }
      *param_1 = 1;
      return;
    }
  }
LAB_008ed75f:
  iVar1 = *(int *)(iVar1 + iVar6 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  *param_1 = 0;
  return;
}



void FUN_008ed7b0(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0xc);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = uVar1;
  return;
}



void FUN_008ed800(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  undefined1 *local_8;
  
  local_8 = (undefined1 *)((uint)local_8 & 0xffffff00);
  (**(code **)(*in_ECX + 0x18))(param_2,0);
  *local_8 = 0xf0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008ed840(float *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *in_ECX;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  int unaff_EBX;
  float fVar11;
  float fVar12;
  float fVar13;
  int unaff_FS_OFFSET;
  bool bVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  char cVar25;
  float *pfStack_154;
  float fStack_144;
  int local_140;
  float local_13c;
  float fStack_138;
  float *pfStack_134;
  float afStack_130 [4];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  uint auStack_110 [3];
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float afStack_f4 [4];
  float afStack_e4 [4];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  bool bStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined1 uStack_95;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  int iStack_74;
  float fStack_70;
  float fStack_64;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  float fStack_48;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
    puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
    *puVar9 = "TtrcHeightFild";
    uVar1 = rdtsc();
    local_140 = (int)uVar1;
    puVar9[1] = local_140;
    *(undefined4 **)(iVar8 + 0x1a4) = puVar9 + 3;
  }
  local_b0 = (float)in_ECX[0xc];
  fStack_ac = (float)in_ECX[0xd];
  fStack_a8 = (float)in_ECX[0xe];
  fStack_a4 = (float)in_ECX[0xf];
  local_90 = (*param_1 + (float)in_ECX[0x10]) * local_b0 + 196608.0;
  fStack_8c = (param_1[1] + (float)in_ECX[0x11]) * fStack_ac + 196608.0;
  fStack_88 = (param_1[2] + (float)in_ECX[0x12]) * fStack_a8 + 196608.0;
  fStack_84 = (param_1[3] + (float)in_ECX[0x13]) * fStack_a4 + 196608.0;
  afStack_130[3] = (float)(int)(short)((uint)fStack_88 >> 6);
  local_100 = *param_1 * local_b0;
  fStack_fc = param_1[1] * fStack_ac;
  fStack_f8 = param_1[2] * fStack_a8;
  afStack_f4[0] = param_1[3] * fStack_a4;
  fVar12 = (float)(int)(short)((uint)local_90 >> 6);
  pfStack_154 = &local_13c;
  local_b0 = param_1[4] * local_b0;
  fStack_ac = param_1[5] * fStack_ac;
  fStack_a8 = param_1[6] * fStack_a8;
  fStack_a4 = param_1[7] * fStack_a4;
  afStack_130[1] = fVar12;
  (**(code **)(*in_ECX + 0x28))();
  fVar18 = local_b0;
  fVar11 = local_100;
  fStack_f8 = local_100;
  fStack_a8 = local_b0;
  if ((char)local_140 == '\0') {
    local_100 = fStack_fc + fStack_104;
    local_b0 = fStack_ac + fStack_b4;
  }
  else {
    local_100 = fStack_104 - fStack_fc;
    local_b0 = fStack_b4 - fStack_ac;
  }
  fVar13 = fStack_b4 - fStack_104;
  fStack_54 = ABS(fVar13);
  if (3.0517578e-05 <= fStack_54) {
    fStack_94 = 1.0 / fVar13;
    if (0.0 <= fVar13) {
      fVar12 = (float)((int)fVar12 + 1);
      afStack_e4[0] = fStack_94;
      auStack_110[0] = 1;
      afStack_130[0] = fVar12;
    }
    else {
      auStack_110[0] = 0xffffffff;
      afStack_e4[0] = -fStack_94;
    }
    afStack_f4[0] = ((float)(int)afStack_130[0] - fStack_104) * fStack_94;
  }
  else {
    afStack_e4[0] = 0.0;
    auStack_110[0] = 0xffffffff;
    afStack_f4[0] = 3.4028235e+38;
  }
  fVar13 = local_b0 - local_100;
  if (3.0517578e-05 <= ABS(fVar13)) {
    afStack_f4[1] = 1.0 / fVar13;
    if (0.0 <= fVar13) {
      afStack_e4[1] = afStack_f4[1];
      afStack_130[1] = (float)((int)afStack_130[1] + 1);
      auStack_110[1] = 1;
    }
    else {
      auStack_110[1] = -1;
      afStack_e4[1] = -afStack_f4[1];
    }
    afStack_f4[1] = ((float)(int)afStack_130[1] - local_100) * afStack_f4[1];
  }
  else {
    afStack_e4[1] = 0.0;
    auStack_110[1] = -1;
    afStack_f4[1] = 3.4028235e+38;
  }
  fStack_138 = fStack_ac - fStack_fc;
  fStack_c4 = ABS(fStack_138);
  if (3.0517578e-05 <= fStack_c4) {
    fStack_8c = 1.0 / fStack_138;
    if (0.0 <= fStack_138) {
      afStack_e4[2] = fStack_8c;
      auStack_110[2] = 1;
      afStack_130[2] = (float)((int)afStack_130[2] + 1);
    }
    else {
      auStack_110[2] = 0xffffffff;
      afStack_e4[2] = -fStack_8c;
    }
    afStack_f4[2] = ((float)(int)afStack_130[2] - fStack_fc) * fStack_8c;
  }
  else {
    afStack_e4[2] = 0.0;
    auStack_110[2] = 0xffffffff;
    afStack_f4[2] = 3.4028235e+38;
  }
  fVar13 = afStack_130[2];
  if (((afStack_e4[2] + afStack_e4[0] == 0.0) || (afStack_e4[1] + afStack_e4[0] == 0.0)) ||
     (afStack_e4[1] + afStack_e4[2] == 0.0)) {
    if (((uint)fVar12 < (uint)(in_ECX[3] + -1)) && ((uint)afStack_130[2] < (uint)(in_ECX[4] + -1)))
    {
      pfStack_134 = (float *)0x3f800000;
      fStack_11c = fStack_fc - (float)(int)afStack_130[2];
      fStack_70 = 1.0;
      fStack_84 = 1.0;
      fStack_80 = 1.0;
      fStack_7c = 1.0;
      fStack_78 = 1.0;
      fStack_120 = fStack_104 - (float)(int)afStack_130[0];
      pcVar7 = (char *)(**(code **)(*in_ECX + 0x28))(&uStack_95);
      if (*pcVar7 == '\0') {
        fVar15 = (float10)(**(code **)(*in_ECX + 0x24))((int)fVar12 + 1,fVar13);
        afStack_130[0] = (float)fVar15;
        (**(code **)(*in_ECX + 0x24))(fVar12,(int)fVar13 + 1);
        if ((float)pfStack_134 + afStack_130[0] <= 1.0) {
          fVar15 = (float10)(**(code **)(*in_ECX + 0x24))(fVar12,fVar13);
          local_13c = (float)((float10)afStack_130[3] - fVar15);
          fVar11 = (float)((float10)fStack_144 - fVar15);
          fVar15 = (float10)fVar11 * (float10)fStack_11c + (float10)local_13c * (float10)fStack_120
                   + fVar15;
          fStack_144 = local_13c;
          goto LAB_008ee97a;
        }
        fVar15 = (float10)(**(code **)(*in_ECX + 0x24))((int)fVar12 + 1,(int)fVar13 + 1);
        fStack_144 = (float)(fVar15 - (float10)fStack_144);
        local_13c = (float)(fVar15 - (float10)afStack_130[3]);
        fVar15 = (float10)local_13c * (float10)fStack_11c +
                 ((float10)fStack_120 - (float10)1.0) * (float10)fStack_144 +
                 (float10)afStack_130[3];
LAB_008ee922:
        iStack_74 = 1;
        fVar11 = local_13c;
      }
      else {
        fVar15 = (float10)(**(code **)(*in_ECX + 0x24))(fVar12);
        afStack_130[3] = (float)fVar15;
        (**(code **)(*in_ECX + 0x24))((int)fVar12 + 1,(int)fVar13 + 1);
        if (afStack_130[0] < (float)pfStack_134) {
          fVar15 = (float10)(**(code **)(*in_ECX + 0x24))((int)fVar12 + 1,fVar13);
          fStack_144 = (float)(fVar15 - (float10)fStack_118);
          local_13c = (float)((float10)local_13c - fVar15);
          fVar15 = (float10)local_13c * (float10)fStack_11c +
                   (float10)fStack_144 * (float10)fStack_120 + (float10)fStack_118;
          goto LAB_008ee922;
        }
        fVar17 = (float10)(**(code **)(*in_ECX + 0x24))(fVar12,(int)fVar13 + 1);
        fVar16 = (float10)local_13c;
        fVar11 = (float)(fVar17 - (float10)fStack_118);
        fVar15 = (float10)fVar11 * (float10)fStack_11c +
                 (float10)(float)(fVar16 - fVar17) * (float10)fStack_120 + (float10)fStack_118;
        local_13c = fVar11;
        fStack_144 = (float)(fVar16 - fVar17);
LAB_008ee97a:
        iStack_74 = 0;
      }
      fStack_84 = -fStack_144;
      fStack_118 = (float)((float10)fStack_f8 - fVar15);
      afStack_130[3] = (float)((float10)fStack_a8 - fVar15);
      if (afStack_130[3] <= fStack_118) {
        if ((fStack_118 < 0.0) || (0.0 <= afStack_130[3])) {
          iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
          if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
            return;
          }
          puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
          *puVar9 = &DAT_00a9610c;
          uVar1 = rdtsc();
          puVar9[1] = (int)uVar1;
          goto LAB_008eeb94;
        }
        fStack_70 = fStack_118 / (fStack_118 - afStack_130[3]);
        if (fStack_70 < (float)param_3[1]) {
          fStack_84 = fStack_84 * (float)in_ECX[0xc];
          fStack_80 = fStack_80 * (float)in_ECX[0xd];
          fStack_7c = -fVar11 * (float)in_ECX[0xe];
          fVar11 = fStack_80 * fStack_80;
          local_90 = fStack_7c * fStack_7c;
          auVar22._4_4_ = fVar11;
          auVar22._0_4_ = fVar11;
          auVar22._8_4_ = fVar11;
          auVar22._12_4_ = fVar11;
          auVar23._4_12_ = auVar22._4_12_;
          auVar23._0_4_ = fVar11 + fStack_84 * fStack_84;
          auVar21._4_4_ = local_90;
          auVar21._0_4_ = local_90 + auVar23._0_4_;
          auVar21._8_4_ = local_90;
          auVar21._12_4_ = local_90;
          auVar21 = rsqrtss(auVar23,auVar21);
          fStack_94 = auVar21._0_4_;
          iStack_74 = iStack_74 + ((int)fVar13 * 0x8000 + (int)fVar12) * 2;
          pfStack_134 = (float *)0x3f000000;
          fVar11 = fStack_94 * 0.5 * (3.0 - (local_90 + auVar23._0_4_) * fStack_94 * fStack_94);
          fStack_84 = fVar11 * fStack_84;
          fStack_80 = fVar11 * fStack_80;
          fStack_7c = fVar11 * fStack_7c;
          fStack_78 = fVar11 * fStack_78 * (float)in_ECX[0xf];
          fStack_8c = local_90;
          fStack_88 = local_90;
          (**(code **)*param_3)(param_2,&fStack_84);
        }
        iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
          return;
        }
        puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
        *puVar9 = &DAT_00a9610c;
        uVar1 = rdtsc();
        uVar6 = (undefined4)uVar1;
      }
      else {
        iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
          return;
        }
        puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
        *puVar9 = &DAT_00a9610c;
        uVar1 = rdtsc();
        uVar6 = (undefined4)uVar1;
      }
    }
    else {
      iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
        return;
      }
      puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
      *puVar9 = &DAT_00a9610c;
      uVar1 = rdtsc();
      uVar6 = (undefined4)uVar1;
    }
  }
  else {
    fStack_d4 = fStack_104;
    fStack_d0 = local_100;
    fStack_c8 = fVar11;
    afStack_f4[3] = fVar12;
    afStack_130[1] = fVar12;
    if ((int)auStack_110[0] < 1) {
      fVar13 = (float)(in_ECX[3] + -2);
      if ((int)fVar13 < (int)fVar12) {
        fVar3 = (float)(in_ECX[3] + -1);
        if (fVar3 < fStack_b4) {
          iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
          if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
            return;
          }
          puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
          *puVar9 = &DAT_00a9610c;
          uVar1 = rdtsc();
          puVar9[1] = (int)uVar1;
          goto LAB_008eeb94;
        }
        fVar3 = (fStack_104 - fVar3) * afStack_e4[0];
LAB_008edc6e:
        afStack_130[0] = fVar13;
        afStack_f4[0] = afStack_e4[0] + fVar3;
        fStack_144 = fVar3 * fStack_c4;
        fStack_d0 = (1.0 - fVar3) * local_100 + fVar3 * local_b0;
        fVar24 = (1.0 - fVar3) * fStack_fc + fVar3 * fStack_ac;
        fStack_d4 = (1.0 - fVar3) * fStack_104 + fVar3 * fStack_b4;
        fStack_c8 = (1.0 - fVar3) * fVar11 + fVar3 * fVar18;
        local_13c = (float)(int)ROUND(fStack_144);
        iVar8 = (int)afStack_130[2] + -2 + (int)local_13c * auStack_110[2];
        if ((float)iVar8 < fVar24 != ((float)iVar8 == fVar24)) {
          do {
            iVar8 = iVar8 + 1;
          } while ((float)iVar8 < fVar24 != ((float)iVar8 == fVar24));
        }
        afStack_130[2] = (float)(iVar8 + ((int)auStack_110[2] >> 1));
        afStack_f4[2] = ((float)(int)afStack_130[2] - fStack_fc) * fStack_8c;
        afStack_130[1] = fVar13;
      }
    }
    else if ((int)fVar12 < 1) {
      if (fStack_b4 < 0.0) {
        iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
          return;
        }
        puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
        *puVar9 = &DAT_00a9610c;
        uVar1 = rdtsc();
        uVar6 = (undefined4)uVar1;
        goto LAB_008eeb91;
      }
      fVar13 = 1.4013e-45;
      fVar3 = -(afStack_e4[0] * fStack_104);
      goto LAB_008edc6e;
    }
    if ((int)auStack_110[2] < 1) {
      fVar13 = (float)(in_ECX[4] + -2);
      if ((int)fVar13 < (int)afStack_130[2]) {
        fVar3 = (float)(in_ECX[4] + -1);
        if (fVar3 < fStack_ac) {
          iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
          if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
            return;
          }
          puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
          *puVar9 = &DAT_00a9610c;
          uVar1 = rdtsc();
          puVar9[1] = (int)uVar1;
          goto LAB_008eeb94;
        }
        fVar3 = (fStack_fc - fVar3) * afStack_e4[2];
        goto LAB_008ede11;
      }
    }
    else if ((int)afStack_130[2] < 1) {
      if (fStack_ac < 0.0) {
        iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
          return;
        }
        puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
        *puVar9 = &DAT_00a9610c;
        uVar1 = rdtsc();
        uVar6 = (undefined4)uVar1;
        goto LAB_008eeb91;
      }
      fVar13 = 1.4013e-45;
      fVar3 = -(afStack_e4[2] * fStack_fc);
LAB_008ede11:
      afStack_130[2] = fVar13;
      afStack_f4[2] = afStack_e4[2] + fVar3;
      fStack_144 = fVar3 * fStack_54;
      fStack_d4 = (1.0 - fVar3) * fStack_104 + fVar3 * fStack_b4;
      fStack_d0 = (1.0 - fVar3) * local_100 + fVar3 * local_b0;
      fStack_c8 = (1.0 - fVar3) * fVar11 + fVar3 * fVar18;
      local_13c = (float)(int)ROUND(fStack_144);
      iVar8 = (int)local_13c * auStack_110[0] + -2 + (int)fVar12;
      if ((float)iVar8 < fStack_d4 != ((float)iVar8 == fStack_d4)) {
        do {
          iVar8 = iVar8 + 1;
        } while ((float)iVar8 < fStack_d4 != ((float)iVar8 == fStack_d4));
      }
      afStack_130[1] = (float)(iVar8 + ((int)auStack_110[0] >> 1));
      afStack_130[0] = afStack_130[1];
      afStack_f4[0] = ((float)(int)afStack_130[1] - fStack_104) * fStack_94;
    }
    if ((uint)afStack_130[1] < (uint)in_ECX[3]) {
      if ((uint)in_ECX[3] <= (int)afStack_130[1] - auStack_110[0]) {
        iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
          return;
        }
        puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
        *puVar9 = &DAT_00a9610c;
        uVar1 = rdtsc();
        puVar9[1] = (int)uVar1;
        goto LAB_008eeb94;
      }
      bVar14 = afStack_e4[1] == 0.0;
      bVar10 = -1 < (int)(auStack_110[2] ^ auStack_110[0]) != ((char)local_140 != '\0');
      bStack_bc = bVar10;
      if (bVar14) {
        bStack_bc = false;
      }
      bVar5 = true;
      fStack_118 = 2.8026e-45;
      fVar11 = afStack_130[2];
      if ((char)local_140 != '\0') {
        fVar11 = (float)-(int)afStack_130[2];
      }
      afStack_130[1] = (float)((int)afStack_130[1] + (int)fVar11);
      if (bVar14 || !bVar10) {
        if (0.0 < (float)(int)auStack_110[1] * (fStack_d0 - (float)(int)afStack_130[1])) {
          bVar5 = false;
          fStack_118 = 0.0;
          uVar4 = auStack_110[1];
          goto LAB_008edfff;
        }
      }
      else if (ABS(fStack_d0 - (float)(int)afStack_130[1]) <= 1.0) {
        bVar5 = false;
        fStack_118 = 0.0;
      }
      else {
        uVar4 = -auStack_110[1];
LAB_008edfff:
        afStack_130[1] = (float)((int)afStack_130[1] + uVar4);
      }
      if (afStack_e4[1] == 0.0) {
        afStack_f4[1] = 3.4028235e+38;
      }
      else {
        afStack_f4[1] =
             ((float)(int)afStack_130[1] - local_100) * (float)(int)auStack_110[1] * afStack_e4[1];
      }
      if (afStack_e4[0] == 0.0) {
        fVar11 = -3.4028235e+38;
      }
      else {
        fVar11 = afStack_f4[0] - afStack_e4[0];
      }
      if (afStack_e4[1] == 0.0) {
        fStack_d0 = -3.4028235e+38;
      }
      else {
        fStack_d0 = afStack_f4[1] - afStack_e4[1];
      }
      if (afStack_e4[2] == 0.0) {
        fStack_cc = -3.4028235e+38;
      }
      else {
        fStack_cc = afStack_f4[2] - afStack_e4[2];
      }
      if (bVar14 || !bVar10) {
        if (fStack_c4 <= fStack_54) {
          if (bVar5) {
            fStack_138 = 0.0;
          }
          else {
            fStack_138 = 1.4013e-45;
            if (fStack_d0 <= fStack_cc) goto LAB_008ee12b;
          }
        }
        else if (bVar5) {
LAB_008ee12b:
          fStack_138 = 2.8026e-45;
        }
        else {
          if (fVar11 <= fStack_d0) goto LAB_008ee0bf;
          fStack_138 = 0.0;
        }
      }
      else if (bVar5) {
        if (fVar11 <= fStack_cc) goto LAB_008ee12b;
        fStack_138 = 0.0;
      }
      else {
LAB_008ee0bf:
        fStack_138 = 1.4013e-45;
      }
      afStack_130[(int)fStack_138] =
           (float)((int)afStack_130[(int)fStack_138] - auStack_110[(int)fStack_138]);
      afStack_f4[(int)fStack_138] = afStack_f4[(int)fStack_138] - afStack_e4[(int)fStack_138];
      fStack_c0 = 3.4028235e+38;
      fStack_b8 = 0.0;
      fStack_120 = -1.0;
      if ((uint)afStack_130[0] < (uint)in_ECX[3]) {
        do {
          fVar11 = fStack_138;
          if ((uint)in_ECX[4] <= (uint)afStack_130[2]) break;
          if ((float)param_3[1] < fStack_120) {
            iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
            if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
              return;
            }
            puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
            *puVar9 = &DAT_00a9610c;
            uVar1 = rdtsc();
            uVar6 = (undefined4)uVar1;
            goto LAB_008eeb91;
          }
          fStack_11c = afStack_f4[(int)fStack_138];
          pfStack_134 = afStack_f4 + (int)fStack_138;
          FUN_00535aa0(fStack_11c);
          fVar12 = afStack_130[2];
          fVar18 = afStack_130[0];
          fStack_114 = (float)((int)afStack_130[0] - auStack_110[0]);
          fStack_d4 = (1.0 - fStack_84) * fStack_104 + fStack_84 * fStack_b4;
          fStack_d0 = (1.0 - fStack_84) * local_100 + fStack_84 * local_b0;
          fStack_cc = (1.0 - fStack_84) * fStack_fc + fStack_84 * fStack_ac;
          fStack_c8 = (1.0 - fStack_84) * fStack_f8 + fStack_84 * fStack_a8;
          if (fVar11 == 0.0) {
            (**(code **)(*in_ECX + 0x24))(afStack_130[0],(int)afStack_130[2] - auStack_110[2]);
            fVar12 = afStack_130[0];
            fVar15 = (float10)(**(code **)(*in_ECX + 0x24))(fVar18,afStack_130[0]);
            fVar17 = ((float10)fStack_144 - fVar15) *
                     ABS((float10)fStack_cc - (float10)(int)afStack_130[2]);
          }
          else if (fVar11 == 2.8026e-45) {
            (**(code **)(*in_ECX + 0x24))(fStack_114,afStack_130[2]);
            fVar15 = (float10)(**(code **)(*in_ECX + 0x24))(fVar18,fVar12);
            fVar17 = ((float10)fStack_144 - fVar15) *
                     ABS((float10)fStack_d4 - (float10)(int)afStack_130[0]);
          }
          else {
            afStack_130[3] = afStack_130[2];
            local_13c = ABS(fStack_d4 - (float)(int)afStack_130[0]);
            if (bStack_bc == false) {
              fVar11 = (float)((int)afStack_130[2] - auStack_110[2]);
            }
            else {
              afStack_130[3] = (float)((int)afStack_130[2] - auStack_110[2]);
              fVar11 = afStack_130[2];
            }
            (**(code **)(*in_ECX + 0x24))(fStack_114,fVar11);
            fVar15 = (float10)(**(code **)(*in_ECX + 0x24))(fVar18,afStack_130[1]);
            fVar17 = ((float10)fStack_144 - fVar15) * (float10)local_13c;
          }
          fVar17 = fVar17 + fVar15;
          if ((fVar17 <= (float10)fStack_c8) || (fStack_b8 < fStack_c0)) {
LAB_008ee5fd:
            fStack_c0 = (float)fVar17;
            fStack_b8 = fStack_c8;
            fStack_120 = fStack_11c;
          }
          else {
            if (fStack_120 < 0.0) {
              fVar15 = (float10)fStack_11c / ((float10)fStack_11c - (float10)fStack_120);
              fVar15 = (float10)fStack_f8 -
                       (fVar15 * (float10)fStack_c0 + ((float10)1.0 - fVar15) * fVar17);
              if (fVar15 < (float10)0.0) goto LAB_008ee5fd;
              fVar15 = (fVar15 / (fVar15 - ((float10)fStack_c8 - fVar17))) * (float10)fStack_11c;
            }
            else {
              fVar15 = ((float10)fStack_11c - (float10)fStack_120) *
                       (((float10)fStack_b8 - (float10)fStack_c0) /
                       (((float10)fStack_b8 - (float10)fStack_c0) - ((float10)fStack_c8 - fVar17)))
                       + (float10)fStack_120;
            }
            afStack_130[3] = (float)fVar15;
            fStack_120 = fStack_11c;
            fStack_c0 = (float)fVar17;
            fStack_b8 = fStack_c8;
            if ((float)param_3[1] < afStack_130[3]) {
              iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
              if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
                return;
              }
              puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
              *puVar9 = &DAT_00a9610c;
              uVar1 = rdtsc();
              puVar9[1] = (int)uVar1;
              goto LAB_008eeb94;
            }
            fVar11 = (float)((int)afStack_130[2] - auStack_110[2]);
            uStack_30 = 0x3f800000;
            uStack_38 = 0;
            uStack_40 = 0x3f800000;
            if (bStack_bc == false) {
              fVar18 = fStack_114;
              fVar13 = fVar11;
              fVar15 = (float10)(**(code **)(*in_ECX + 0x24))(fStack_114,fVar11);
              cVar25 = SUB41(fVar13,0);
              afStack_f4[1] = (float)fVar15;
              (**(code **)(*in_ECX + 0x24))(fStack_138,fVar12);
              if ((unaff_EBX == 0) || ((unaff_EBX == 1 && (fStack_64 < fStack_d4)))) {
                fVar15 = (float10)(**(code **)(*in_ECX + 0x24))(local_140,fVar11);
                pfStack_154 = (float *)(float)fVar15;
                fVar15 = (float10)local_100 - (float10)(float)pfStack_154;
                fVar18 = (float)pfStack_154 - fVar18;
                goto LAB_008ee4e3;
              }
              fVar15 = (float10)(**(code **)(*in_ECX + 0x24))(afStack_130[3],fVar12);
              pfStack_154 = (float *)(float)fVar15;
              fVar15 = fVar15 - (float10)fVar18;
              bVar10 = SBORROW4((int)fVar12,(int)fVar11);
              bVar14 = (int)fVar12 - (int)fVar11 < 0;
              fVar18 = local_100 - (float)pfStack_154;
            }
            else {
              fVar18 = fVar11;
              fVar15 = (float10)(**(code **)(*in_ECX + 0x24))(afStack_130[0]);
              cVar25 = SUB41(fVar18,0);
              fStack_144 = (float)fVar15;
              fVar15 = (float10)(**(code **)(*in_ECX + 0x24))(fStack_11c,fVar12);
              fStack_f8 = (float)fVar15;
              if (unaff_EBX == 1) {
                fVar15 = (float10)(**(code **)(*in_ECX + 0x24))(afStack_130[3],fVar11);
                afStack_130[1] = (float)fVar15;
                fVar15 = fVar15 - (float10)(float)pfStack_154;
                fVar18 = afStack_130[1] - local_100;
LAB_008ee4e3:
                bVar10 = SBORROW4((int)fVar11,(int)fVar12);
                bVar14 = (int)fVar11 - (int)fVar12 < 0;
              }
              else {
                fVar15 = (float10)(**(code **)(*in_ECX + 0x24))(local_140,fVar12);
                afStack_130[1] = (float)fVar15;
                bVar10 = SBORROW4((int)fVar12,(int)fVar11);
                bVar14 = (int)fVar12 - (int)fVar11 < 0;
                fVar15 = (float10)local_100 - (float10)afStack_130[1];
                fVar18 = (float)pfStack_154 - afStack_130[1];
              }
            }
            fStack_48 = local_13c;
            fStack_5c = (float)((float10)(int)afStack_130[2] * fVar15) * (float)in_ECX[0xc];
            fStack_58 = fStack_58 * (float)in_ECX[0xd];
            fStack_54 = (float)(int)fStack_120 * fVar18 * (float)in_ECX[0xe];
            fVar18 = fStack_58 * fStack_58;
            fStack_a8 = fStack_54 * fStack_54;
            auVar19._4_4_ = fVar18;
            auVar19._0_4_ = fVar18;
            auVar19._8_4_ = fVar18;
            auVar19._12_4_ = fVar18;
            auVar20._4_12_ = auVar19._4_12_;
            auVar20._0_4_ = fVar18 + fStack_5c * fStack_5c;
            auVar2._4_4_ = fStack_a8;
            auVar2._0_4_ = fStack_a8 + auVar20._0_4_;
            auVar2._8_4_ = fStack_a8;
            auVar2._12_4_ = fStack_a8;
            auVar21 = rsqrtss(auVar20,auVar2);
            fStack_ac = auVar21._0_4_;
            iStack_4c = (((fVar11 != fVar12 && bVar10 == bVar14) != (cVar25 != '\0')) - 2) +
                        ((((local_140 - ((int)fStack_120 >> 1)) + -1) * 0x8000 -
                         ((int)afStack_130[2] >> 1)) + unaff_EBX) * 2;
            fStack_70 = 3.0;
            iStack_74 = 0x3f000000;
            fVar11 = fStack_ac * 0.5 * (3.0 - (fStack_a8 + auVar20._0_4_) * fStack_ac * fStack_ac);
            fStack_5c = fVar11 * fStack_5c;
            fStack_58 = fVar11 * fStack_58;
            fStack_54 = fVar11 * fStack_54;
            fStack_50 = fVar11 * fStack_50 * (float)in_ECX[0xf];
            fStack_a4 = fStack_a8;
            fStack_a0 = fStack_a8;
            (**(code **)*param_3)(param_2,&fStack_5c);
          }
          afStack_130[(int)fStack_138] =
               (float)((int)afStack_130[(int)fStack_138] + auStack_110[(int)fStack_138]);
          fStack_118 = (float)((uint)fStack_118 ^ 2);
          *pfStack_134 = afStack_e4[(int)fStack_138] + *pfStack_134;
          if (bStack_bc == false) {
            if (fStack_c4 <= fStack_54) {
              if (fStack_118 == 0.0) {
                fStack_138 = 1.4013e-45;
                if (afStack_f4[2] <= afStack_f4[1]) goto LAB_008ee6cc;
              }
              else {
                fStack_138 = 0.0;
              }
            }
            else if (fStack_118 == 0.0) {
              if (afStack_f4[1] <= afStack_f4[0]) goto LAB_008ee656;
              fStack_138 = 0.0;
            }
            else {
LAB_008ee6cc:
              fStack_138 = 2.8026e-45;
            }
          }
          else if (fStack_118 == 0.0) {
LAB_008ee656:
            fStack_138 = 1.4013e-45;
          }
          else {
            if (afStack_f4[2] <= afStack_f4[0]) goto LAB_008ee6cc;
            fStack_138 = 0.0;
          }
        } while ((uint)afStack_130[0] < (uint)in_ECX[3]);
      }
      iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
        return;
      }
      puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
      *puVar9 = &DAT_00a9610c;
      uVar1 = rdtsc();
      uVar6 = (undefined4)uVar1;
    }
    else {
      iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
        return;
      }
      puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
      *puVar9 = &DAT_00a9610c;
      uVar1 = rdtsc();
      uVar6 = (undefined4)uVar1;
    }
  }
LAB_008eeb91:
  puVar9[1] = uVar6;
LAB_008eeb94:
  *(undefined4 **)(iVar8 + 0x1a4) = puVar9 + 3;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008eebc0(float *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *in_ECX;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float *pfVar15;
  int unaff_FS_OFFSET;
  bool bVar16;
  float10 fVar17;
  float10 fVar18;
  float fVar19;
  float fVar25;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  char cVar26;
  float fStack_154;
  float local_150;
  float local_14c;
  float fStack_148;
  float *pfStack_144;
  float fStack_140;
  char cStack_139;
  undefined4 uStack_138;
  float local_134;
  float fStack_130;
  float local_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  int iStack_118;
  float fStack_114;
  uint auStack_110 [3];
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float afStack_f0 [7];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c0;
  bool bStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  int iStack_6c;
  int iStack_68;
  float local_60 [4];
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_34;
  undefined4 local_14;
  
  fVar19 = param_1[0xc];
  fVar14 = (float)in_ECX[9];
  local_14 = DAT_00b30aac;
  pfVar11 = param_1;
  pfVar15 = local_60;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar15 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar15 = pfVar15 + 1;
  }
  if (0.0 < fVar14) {
    fVar19 = -fVar19;
  }
  local_120 = param_1[0xd];
  local_60[1] = local_60[1] + fVar19;
  iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  fStack_4c = fStack_4c + fVar19;
  uStack_138 = (float)CONCAT13(1,(undefined3)uStack_138);
  if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
    puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
    *puVar9 = "TtrcHeightFild";
    uVar1 = rdtsc();
    local_14c = (float)uVar1;
    puVar9[1] = local_14c;
    *(undefined4 **)(iVar8 + 0x1a4) = puVar9 + 3;
  }
  local_b0 = (float)in_ECX[0xc];
  fStack_ac = (float)in_ECX[0xd];
  fStack_a8 = (float)in_ECX[0xe];
  fStack_a4 = (float)in_ECX[0xf];
  local_80 = (local_60[0] + (float)in_ECX[0x10]) * local_b0 + 196608.0;
  fStack_7c = (local_60[1] + (float)in_ECX[0x11]) * fStack_ac + 196608.0;
  fStack_78 = (local_60[2] + (float)in_ECX[0x12]) * fStack_a8 + 196608.0;
  fStack_74 = (local_60[3] + (float)in_ECX[0x13]) * fStack_a4 + 196608.0;
  fVar12 = (float)(int)(short)((uint)local_80 >> 6);
  local_12c = (float)(int)(short)((uint)fStack_78 >> 6);
  local_100 = local_60[0] * local_b0;
  fStack_fc = local_60[1] * fStack_ac;
  fStack_f8 = local_60[2] * fStack_a8;
  fStack_f4 = local_60[3] * fStack_a4;
  pfVar11 = &local_150;
  local_b0 = local_50 * local_b0;
  fStack_ac = fStack_4c * fStack_ac;
  fStack_a8 = fStack_48 * fStack_a8;
  fStack_a4 = fStack_44 * fStack_a4;
  local_134 = fVar12;
  (**(code **)(*in_ECX + 0x28))(pfVar11);
  fVar14 = local_b0;
  fVar19 = local_100;
  fStack_f8 = local_100;
  fStack_a8 = local_b0;
  if (fStack_154._0_1_ == '\0') {
    local_100 = fStack_fc + fStack_104;
    local_b0 = fStack_ac + fStack_b4;
  }
  else {
    local_100 = fStack_104 - fStack_fc;
    local_b0 = fStack_b4 - fStack_ac;
  }
  fVar13 = fStack_b4 - fStack_104;
  fStack_34 = ABS(fVar13);
  if (3.0517578e-05 <= fStack_34) {
    fStack_84 = 1.0 / fVar13;
    if (0.0 <= fVar13) {
      fVar12 = (float)((int)fVar12 + 1);
      afStack_f0[3] = fStack_84;
      auStack_110[0] = 1;
      uStack_138 = fVar12;
    }
    else {
      auStack_110[0] = 0xffffffff;
      afStack_f0[3] = -fStack_84;
    }
    afStack_f0[0] = ((float)(int)uStack_138 - fStack_104) * fStack_84;
  }
  else {
    afStack_f0[3] = 0.0;
    auStack_110[0] = 0xffffffff;
    afStack_f0[0] = 3.4028235e+38;
  }
  fVar13 = local_b0 - local_100;
  if (3.0517578e-05 <= ABS(fVar13)) {
    afStack_f0[1] = 1.0 / fVar13;
    if (0.0 <= fVar13) {
      afStack_f0[4] = afStack_f0[1];
      local_134 = (float)((int)local_134 + 1);
      auStack_110[1] = 1;
    }
    else {
      auStack_110[1] = -1;
      afStack_f0[4] = -afStack_f0[1];
    }
    afStack_f0[1] = ((float)(int)local_134 - local_100) * afStack_f0[1];
  }
  else {
    afStack_f0[4] = 0.0;
    auStack_110[1] = -1;
    afStack_f0[1] = 3.4028235e+38;
  }
  fStack_148 = fStack_ac - fStack_fc;
  fStack_b8 = ABS(fStack_148);
  if (3.0517578e-05 <= fStack_b8) {
    fStack_7c = 1.0 / fStack_148;
    if (0.0 <= fStack_148) {
      afStack_f0[5] = fStack_7c;
      auStack_110[2] = 1;
      fStack_130 = (float)((int)fStack_130 + 1);
    }
    else {
      auStack_110[2] = 0xffffffff;
      afStack_f0[5] = -fStack_7c;
    }
    afStack_f0[2] = ((float)(int)fStack_130 - fStack_fc) * fStack_7c;
  }
  else {
    afStack_f0[5] = 0.0;
    auStack_110[2] = 0xffffffff;
    afStack_f0[2] = 3.4028235e+38;
  }
  fVar13 = fStack_130;
  if (((afStack_f0[5] + afStack_f0[3] != 0.0) && (afStack_f0[4] + afStack_f0[3] != 0.0)) &&
     (afStack_f0[4] + afStack_f0[5] != 0.0)) {
    fStack_d4 = fStack_104;
    fStack_d0 = local_100;
    fStack_c8 = fVar19;
    fStack_11c = fVar12;
    local_134 = fVar12;
    if ((int)auStack_110[0] < 1) {
      fVar13 = (float)(in_ECX[3] + -2);
      if ((int)fVar13 < (int)fVar12) {
        fVar3 = (float)(in_ECX[3] + -1);
        if (fVar3 < fStack_b4) {
          iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
          if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
            return;
          }
          puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
          *puVar9 = &DAT_00a9610c;
          uVar1 = rdtsc();
          uVar6 = (undefined4)uVar1;
          goto LAB_008f00b3;
        }
        fVar3 = (fStack_104 - fVar3) * afStack_f0[3];
        goto LAB_008ef07d;
      }
    }
    else if ((int)fVar12 < 1) {
      if (fStack_b4 < 0.0) {
        iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
          return;
        }
        puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
        *puVar9 = &DAT_00a9610c;
        uVar1 = rdtsc();
        puVar9[1] = (int)uVar1;
        goto LAB_008f00b6;
      }
      fVar13 = 1.4013e-45;
      fVar3 = -(afStack_f0[3] * fStack_104);
LAB_008ef07d:
      uStack_138 = fVar13;
      afStack_f0[0] = afStack_f0[3] + fVar3;
      local_150 = fVar3 * fStack_b8;
      fStack_d0 = (1.0 - fVar3) * local_100 + fVar3 * local_b0;
      fVar25 = (1.0 - fVar3) * fStack_fc + fVar3 * fStack_ac;
      fStack_d4 = (1.0 - fVar3) * fStack_104 + fVar3 * fStack_b4;
      fStack_c8 = (1.0 - fVar3) * fVar19 + fVar3 * fVar14;
      local_14c = (float)(int)ROUND(local_150);
      iVar8 = (int)fStack_130 + -2 + (int)local_14c * auStack_110[2];
      if ((float)iVar8 < fVar25 != ((float)iVar8 == fVar25)) {
        do {
          iVar8 = iVar8 + 1;
        } while ((float)iVar8 < fVar25 != ((float)iVar8 == fVar25));
      }
      fStack_130 = (float)(iVar8 + ((int)auStack_110[2] >> 1));
      afStack_f0[2] = ((float)(int)fStack_130 - fStack_fc) * fStack_7c;
      local_134 = fVar13;
    }
    if ((int)auStack_110[2] < 1) {
      fVar13 = (float)(in_ECX[4] + -2);
      if ((int)fVar13 < (int)fStack_130) {
        fVar3 = (float)(in_ECX[4] + -1);
        if (fVar3 < fStack_ac) {
          iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
          if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
            return;
          }
          puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
          *puVar9 = &DAT_00a9610c;
          uVar1 = rdtsc();
          uVar6 = (undefined4)uVar1;
          goto LAB_008f00b3;
        }
        fVar3 = (fStack_fc - fVar3) * afStack_f0[5];
        goto LAB_008ef227;
      }
    }
    else if ((int)fStack_130 < 1) {
      if (fStack_ac < 0.0) {
        iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
          return;
        }
        puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
        *puVar9 = &DAT_00a9610c;
        uVar1 = rdtsc();
        puVar9[1] = (int)uVar1;
        goto LAB_008f00b6;
      }
      fVar13 = 1.4013e-45;
      fVar3 = -(afStack_f0[5] * fStack_fc);
LAB_008ef227:
      fStack_130 = fVar13;
      afStack_f0[2] = afStack_f0[5] + fVar3;
      local_150 = fVar3 * fStack_34;
      fStack_d4 = (1.0 - fVar3) * fStack_104 + fVar3 * fStack_b4;
      fStack_d0 = (1.0 - fVar3) * local_100 + fVar3 * local_b0;
      fStack_c8 = (1.0 - fVar3) * fVar19 + fVar3 * fVar14;
      local_14c = (float)(int)ROUND(local_150);
      iVar8 = (int)local_14c * auStack_110[0] + -2 + (int)fVar12;
      if ((float)iVar8 < fStack_d4 != ((float)iVar8 == fStack_d4)) {
        do {
          iVar8 = iVar8 + 1;
        } while ((float)iVar8 < fStack_d4 != ((float)iVar8 == fStack_d4));
      }
      local_134 = (float)(iVar8 + ((int)auStack_110[0] >> 1));
      uStack_138 = local_134;
      afStack_f0[0] = ((float)(int)local_134 - fStack_104) * fStack_84;
    }
    if ((uint)in_ECX[3] <= (uint)local_134) {
      iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
        return;
      }
      puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
      *puVar9 = &DAT_00a9610c;
      uVar1 = rdtsc();
      puVar9[1] = (int)uVar1;
      goto LAB_008f00b6;
    }
    if ((uint)in_ECX[3] <= (int)local_134 - auStack_110[0]) {
      iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
        return;
      }
      puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
      *puVar9 = &DAT_00a9610c;
      uVar1 = rdtsc();
      puVar9[1] = (int)uVar1;
      goto LAB_008f00b6;
    }
    bVar16 = afStack_f0[4] == 0.0;
    bVar10 = -1 < (int)(auStack_110[2] ^ auStack_110[0]) != (fStack_154._0_1_ != '\0');
    bStack_bc = bVar10;
    if (bVar16) {
      bStack_bc = false;
    }
    bVar5 = true;
    local_120 = 2.8026e-45;
    fVar19 = fStack_130;
    if (fStack_154._0_1_ != '\0') {
      fVar19 = (float)-(int)fStack_130;
    }
    local_134 = (float)((int)local_134 + (int)fVar19);
    if (bVar16 || !bVar10) {
      if (0.0 < (float)(int)auStack_110[1] * (fStack_d0 - (float)(int)local_134)) {
        bVar5 = false;
        local_120 = 0.0;
        uVar4 = auStack_110[1];
        goto LAB_008ef418;
      }
    }
    else if (ABS(fStack_d0 - (float)(int)local_134) <= 1.0) {
      bVar5 = false;
      local_120 = 0.0;
    }
    else {
      uVar4 = -auStack_110[1];
LAB_008ef418:
      local_134 = (float)((int)local_134 + uVar4);
    }
    if (afStack_f0[4] == 0.0) {
      afStack_f0[1] = 3.4028235e+38;
    }
    else {
      afStack_f0[1] =
           ((float)(int)local_134 - local_100) * (float)(int)auStack_110[1] * afStack_f0[4];
    }
    if (afStack_f0[3] == 0.0) {
      fVar19 = -3.4028235e+38;
    }
    else {
      fVar19 = afStack_f0[0] - afStack_f0[3];
    }
    if (afStack_f0[4] == 0.0) {
      fStack_d0 = -3.4028235e+38;
    }
    else {
      fStack_d0 = afStack_f0[1] - afStack_f0[4];
    }
    if (afStack_f0[5] == 0.0) {
      fStack_cc = -3.4028235e+38;
    }
    else {
      fStack_cc = afStack_f0[2] - afStack_f0[5];
    }
    if (bVar16 || !bVar10) {
      if (fStack_b8 <= fStack_34) {
        if (bVar5) {
          fStack_148 = 0.0;
        }
        else {
          fStack_148 = 1.4013e-45;
          if (fStack_d0 <= fStack_cc) goto LAB_008ef55c;
        }
      }
      else if (bVar5) {
LAB_008ef55c:
        fStack_148 = 2.8026e-45;
      }
      else {
        if (fVar19 <= fStack_d0) goto LAB_008ef4f0;
        fStack_148 = 0.0;
      }
    }
    else if (bVar5) {
      if (fVar19 <= fStack_cc) goto LAB_008ef55c;
      fStack_148 = 0.0;
    }
    else {
LAB_008ef4f0:
      fStack_148 = 1.4013e-45;
    }
    fVar19 = afStack_f0[(int)fStack_148 + 3];
    (&uStack_138)[(int)fStack_148] = (&uStack_138)[(int)fStack_148] - auStack_110[(int)fStack_148];
    afStack_f0[(int)fStack_148] = afStack_f0[(int)fStack_148] - fVar19;
    fStack_140 = 3.4028235e+38;
    fStack_c0 = 0.0;
    fStack_114 = -1.0;
    if ((uint)uStack_138 < (uint)in_ECX[3]) {
      do {
        fVar19 = fStack_148;
        if ((uint)in_ECX[4] <= (uint)fStack_130) break;
        if ((float)param_3[1] < fStack_114) {
          iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
          if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
            return;
          }
          puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
          *puVar9 = &DAT_00a9610c;
          uVar1 = rdtsc();
          puVar9[1] = (int)uVar1;
          goto LAB_008f00b6;
        }
        local_12c = afStack_f0[(int)fStack_148];
        pfStack_144 = afStack_f0 + (int)fStack_148;
        FUN_00535aa0(local_12c);
        fVar12 = fStack_130;
        fVar14 = uStack_138;
        iStack_118 = (int)uStack_138 - auStack_110[0];
        fStack_d4 = (1.0 - fStack_a4) * fStack_104 + fStack_a4 * fStack_b4;
        fStack_d0 = (1.0 - fStack_a4) * local_100 + fStack_a4 * local_b0;
        fStack_cc = (1.0 - fStack_a4) * fStack_fc + fStack_a4 * fStack_ac;
        fStack_c8 = (1.0 - fStack_a4) * fStack_f8 + fStack_a4 * fStack_a8;
        if (fVar19 == 0.0) {
          fVar17 = (float10)(**(code **)(*in_ECX + 0x24))
                                      (uStack_138,(int)fStack_130 - auStack_110[2]);
          fVar12 = uStack_138;
          fVar19 = (float)fVar17;
          fVar17 = (float10)(**(code **)(*in_ECX + 0x24))(fVar14,uStack_138);
          fVar18 = ((float10)local_150 - fVar17) *
                   ABS((float10)fStack_cc - (float10)(int)fStack_130);
        }
        else if (fVar19 == 2.8026e-45) {
          fVar17 = (float10)(**(code **)(*in_ECX + 0x24))(iStack_118,fStack_130);
          fVar19 = (float)fVar17;
          fVar17 = (float10)(**(code **)(*in_ECX + 0x24))(fVar14,fVar12);
          fVar18 = ((float10)local_150 - fVar17) *
                   ABS((float10)fStack_d4 - (float10)(int)uStack_138);
        }
        else {
          fStack_11c = fStack_130;
          local_14c = ABS(fStack_d4 - (float)(int)uStack_138);
          if (bStack_bc == false) {
            fVar19 = (float)((int)fStack_130 - auStack_110[2]);
          }
          else {
            fStack_11c = (float)((int)fStack_130 - auStack_110[2]);
            fVar19 = fStack_130;
          }
          fVar17 = (float10)(**(code **)(*in_ECX + 0x24))(iStack_118,fVar19);
          fVar19 = (float)fVar17;
          fVar17 = (float10)(**(code **)(*in_ECX + 0x24))(fVar14,fStack_124);
          fVar18 = ((float10)local_150 - fVar17) * (float10)local_14c;
        }
        fStack_128 = (float)(fVar18 + fVar17);
        if (cStack_139 == '\0') {
          if ((fStack_c8 >= fStack_128) || (fStack_c0 < fStack_140)) goto LAB_008efaad;
LAB_008ef7a1:
          if (fStack_114 < 0.0) {
            fVar17 = (float10)local_12c / ((float10)local_12c - (float10)fStack_114);
            fVar17 = (float10)fStack_f8 -
                     (fVar17 * (float10)fStack_140 + ((float10)1.0 - fVar17) * (float10)fStack_128);
            if (fVar17 < (float10)0.0) {
              if (cStack_139 == '\0') goto LAB_008efaad;
              fVar17 = (float10)0.0;
            }
            fVar17 = (fVar17 / (fVar17 - ((float10)fStack_c8 - (float10)fStack_128))) *
                     (float10)local_12c;
          }
          else {
            fVar17 = ((float10)local_12c - (float10)fStack_114) *
                     (((float10)fStack_c0 - (float10)fStack_140) /
                     (((float10)fStack_c0 - (float10)fStack_140) -
                     ((float10)fStack_c8 - (float10)fStack_128))) + (float10)fStack_114;
          }
LAB_008ef833:
          fStack_11c = (float)fVar17;
          fStack_140 = fStack_128;
          fStack_c0 = fStack_c8;
          fStack_114 = local_12c;
          if ((float10)(float)param_3[1] < fVar17) {
            iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
            if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
              return;
            }
            puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
            *puVar9 = &DAT_00a9610c;
            uVar1 = rdtsc();
            uVar6 = (undefined4)uVar1;
            goto LAB_008f00b3;
          }
          fVar14 = (float)((int)fStack_130 - auStack_110[2]);
          local_50 = 1.0;
          local_60[2] = 0.0;
          local_60[0] = 1.0;
          if (bStack_bc == false) {
            iVar8 = iStack_118;
            fVar13 = fVar14;
            fVar17 = (float10)(**(code **)(*in_ECX + 0x24))(iStack_118,fVar14);
            cVar26 = (char)iVar8;
            fStack_130 = (float)fVar17;
            (**(code **)(*in_ECX + 0x24))(fStack_140,fVar12);
            if ((fVar19 == 0.0) || ((fVar19 == 1.4013e-45 && (fStack_44 < fStack_c8)))) {
              fVar17 = (float10)(**(code **)(*in_ECX + 0x24))(fStack_148,fVar14);
              pfVar11 = (float *)(float)fVar17;
              fVar17 = (float10)fStack_140 - (float10)(float)pfVar11;
              fVar13 = (float)pfVar11 - fVar13;
              goto LAB_008ef988;
            }
            fVar17 = (float10)(**(code **)(*in_ECX + 0x24))(fStack_128,fVar12);
            pfVar11 = (float *)(float)fVar17;
            fVar17 = fVar17 - (float10)fVar13;
            bVar10 = SBORROW4((int)fVar12,(int)fVar14);
            bVar16 = (int)fVar12 - (int)fVar14 < 0;
            fVar13 = fStack_140 - (float)pfVar11;
          }
          else {
            fVar13 = uStack_138;
            (**(code **)(*in_ECX + 0x24))(uStack_138);
            cVar26 = SUB41(fVar13,0);
            fVar17 = (float10)(**(code **)(*in_ECX + 0x24))(local_120,fVar12);
            uStack_138 = (float)fVar17;
            if (fVar19 == 1.4013e-45) {
              fVar17 = (float10)(**(code **)(*in_ECX + 0x24))(fStack_128,fVar14);
              fStack_130 = (float)fVar17;
              fVar17 = fVar17 - (float10)(float)pfVar11;
              fVar13 = fStack_130 - fStack_140;
LAB_008ef988:
              bVar10 = SBORROW4((int)fVar14,(int)fVar12);
              bVar16 = (int)fVar14 - (int)fVar12 < 0;
            }
            else {
              fVar17 = (float10)(**(code **)(*in_ECX + 0x24))(fStack_148,fVar12);
              fStack_130 = (float)fVar17;
              bVar10 = SBORROW4((int)fVar12,(int)fVar14);
              bVar16 = (int)fVar12 - (int)fVar14 < 0;
              fVar17 = (float10)fStack_140 - (float10)fStack_130;
              fVar13 = (float)pfVar11 - fStack_130;
            }
          }
          iStack_68 = (int)local_134;
          fStack_7c = (float)((float10)(int)fStack_128 * fVar17) * (float)in_ECX[0xc];
          fStack_78 = fStack_78 * (float)in_ECX[0xd];
          fStack_74 = (float)(int)local_120 * fVar13 * (float)in_ECX[0xe];
          fVar19 = fStack_78 * fStack_78;
          fStack_98 = fStack_74 * fStack_74;
          auVar20._4_4_ = fVar19;
          auVar20._0_4_ = fVar19;
          auVar20._8_4_ = fVar19;
          auVar20._12_4_ = fVar19;
          auVar21._4_12_ = auVar20._4_12_;
          auVar21._0_4_ = fVar19 + fStack_7c * fStack_7c;
          auVar2._4_4_ = fStack_98;
          auVar2._0_4_ = fStack_98 + auVar21._0_4_;
          auVar2._8_4_ = fStack_98;
          auVar2._12_4_ = fStack_98;
          auVar22 = rsqrtss(auVar21,auVar2);
          fStack_9c = auVar22._0_4_;
          iStack_6c = (((fVar14 != fVar12 && bVar10 == bVar16) != (cVar26 != '\0')) - 2) +
                      (((((int)fStack_148 - ((int)local_120 >> 1)) + -1) * 0x8000 -
                       ((int)fStack_128 >> 1)) + (int)local_150) * 2;
          fStack_84 = 3.0;
          local_80 = 0.5;
          fVar19 = fStack_9c * 0.5 * (3.0 - (fStack_98 + auVar21._0_4_) * fStack_9c * fStack_9c);
          fStack_7c = fVar19 * fStack_7c;
          fStack_78 = fVar19 * fStack_78;
          fStack_74 = fVar19 * fStack_74;
          fStack_70 = fVar19 * fStack_70 * (float)in_ECX[0xf];
          fStack_94 = fStack_98;
          fStack_90 = fStack_98;
          (**(code **)*param_3)(param_2,&fStack_7c);
          if (cStack_139 != '\0') {
            cStack_139 = '\0';
          }
        }
        else {
          if ((fStack_c8 < fStack_128) &&
             (fVar14 = fStack_c0 - fStack_140,
             fVar13 = fVar14 - (local_12c - fStack_114) * fStack_124,
             fVar13 < fStack_c8 - fStack_128 == (fVar13 == fStack_c8 - fStack_128))) {
            if (fVar14 < 0.0 == (fVar14 == 0.0)) goto LAB_008ef7a1;
            fVar17 = (float10)FUN_008ac0d0(0,fStack_114);
            goto LAB_008ef833;
          }
LAB_008efaad:
          fStack_c0 = fStack_c8;
          fStack_114 = local_12c;
          fStack_140 = fStack_128;
        }
        fVar19 = afStack_f0[(int)fStack_148 + 3];
        (&uStack_138)[(int)fStack_148] =
             (&uStack_138)[(int)fStack_148] + auStack_110[(int)fStack_148];
        local_120 = (float)((uint)local_120 ^ 2);
        *pfStack_144 = fVar19 + *pfStack_144;
        if (bStack_bc == false) {
          if (fStack_b8 <= fStack_34) {
            if (local_120 == 0.0) {
              fStack_148 = 1.4013e-45;
              if (afStack_f0[2] <= afStack_f0[1]) goto LAB_008efb80;
            }
            else {
              fStack_148 = 0.0;
            }
          }
          else if (local_120 == 0.0) {
            if (afStack_f0[1] <= afStack_f0[0]) goto LAB_008efb0a;
            fStack_148 = 0.0;
          }
          else {
LAB_008efb80:
            fStack_148 = 2.8026e-45;
          }
        }
        else if (local_120 == 0.0) {
LAB_008efb0a:
          fStack_148 = 1.4013e-45;
        }
        else {
          if (afStack_f0[2] <= afStack_f0[0]) goto LAB_008efb80;
          fStack_148 = 0.0;
        }
      } while ((uint)uStack_138 < (uint)in_ECX[3]);
    }
    iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
      return;
    }
    puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
    *puVar9 = &DAT_00a9610c;
    uVar1 = rdtsc();
    puVar9[1] = (int)uVar1;
    goto LAB_008f00b6;
  }
  if (((uint)fVar12 < (uint)(in_ECX[3] + -1)) && ((uint)fStack_130 < (uint)(in_ECX[4] + -1))) {
    pfStack_144 = (float *)0x3f800000;
    local_12c = fStack_fc - (float)(int)fStack_130;
    fStack_90 = 1.0;
    fStack_a4 = 1.0;
    fStack_a0 = 1.0;
    fStack_9c = 1.0;
    fStack_98 = 1.0;
    fStack_140 = fStack_104 - (float)(int)uStack_138;
    pcVar7 = (char *)(**(code **)(*in_ECX + 0x28))(&cStack_139);
    if (*pcVar7 == '\0') {
      fVar17 = (float10)(**(code **)(*in_ECX + 0x24))((int)fVar12 + 1,fVar13);
      fStack_128 = (float)fVar17;
      fVar17 = (float10)(**(code **)(*in_ECX + 0x24))(fVar12,(int)fVar13 + 1);
      pfVar11 = (float *)(float)fVar17;
      if (fStack_154 + fStack_140 <= 1.0) {
        fVar17 = (float10)(**(code **)(*in_ECX + 0x24))(fVar12,fVar13);
        local_14c = (float)((float10)fStack_11c - fVar17);
        fVar19 = (float)((float10)local_150 - fVar17);
        fVar17 = (float10)fVar19 * (float10)local_12c + (float10)local_14c * (float10)fStack_140 +
                 fVar17;
        local_150 = fVar19;
        fStack_a4 = local_14c;
        goto LAB_008efe32;
      }
      fVar17 = (float10)(**(code **)(*in_ECX + 0x24))((int)fVar12 + 1,(int)fVar13 + 1);
      local_150 = (float)(fVar17 - (float10)local_150);
      local_14c = (float)(fVar17 - (float10)fStack_11c);
      fVar17 = (float10)local_14c * (float10)local_12c +
               ((float10)fStack_140 - (float10)1.0) * (float10)local_150 + (float10)fStack_11c;
LAB_008efdda:
      iVar8 = 1;
      fVar19 = local_14c;
      fStack_a4 = local_150;
    }
    else {
      fVar17 = (float10)(**(code **)(*in_ECX + 0x24))(fVar12);
      local_12c = (float)fVar17;
      (**(code **)(*in_ECX + 0x24))((int)fVar12 + 1,(int)fVar13 + 1);
      if (fStack_140 < fStack_154) {
        fVar17 = (float10)(**(code **)(*in_ECX + 0x24))((int)fVar12 + 1,fVar13);
        local_150 = (float)(fVar17 - (float10)local_120);
        local_14c = (float)((float10)local_14c - fVar17);
        fVar17 = (float10)local_14c * (float10)local_12c + (float10)local_150 * (float10)fStack_140
                 + (float10)local_120;
        goto LAB_008efdda;
      }
      fVar17 = (float10)(**(code **)(*in_ECX + 0x24))(fVar12,(int)fVar13 + 1);
      local_150 = (float)((float10)local_14c - fVar17);
      fVar19 = (float)(fVar17 - (float10)local_120);
      fVar17 = (float10)fVar19 * (float10)local_12c + (float10)local_150 * (float10)fStack_140 +
               (float10)local_120;
      local_14c = fVar19;
      fStack_a4 = local_150;
LAB_008efe32:
      iVar8 = 0;
    }
    fStack_a4 = -fStack_a4;
    fStack_140 = (float)((float10)fStack_f8 - fVar17);
    local_120 = (float)((float10)fStack_a8 - fVar17);
    if (fStack_140 < local_120) {
      iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
        return;
      }
      puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
      *puVar9 = &DAT_00a9610c;
      uVar1 = rdtsc();
      puVar9[1] = (int)uVar1;
      goto LAB_008f00b6;
    }
    if (0.0 <= fStack_140) {
      if ((fStack_140 < 0.0) || (0.0 <= local_120)) {
        iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
          return;
        }
        puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
        *puVar9 = &DAT_00a9610c;
        uVar1 = rdtsc();
        puVar9[1] = (int)uVar1;
        goto LAB_008f00b6;
      }
      fStack_90 = fStack_140 / (fStack_140 - local_120);
    }
    else {
      if (fStack_140 - fStack_124 < local_120) {
        iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
          return;
        }
        puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
        *puVar9 = &DAT_00a9610c;
        uVar1 = rdtsc();
        uVar6 = (undefined4)uVar1;
        goto LAB_008f00b3;
      }
      fStack_90 = 0.0;
    }
    if (fStack_90 < (float)param_3[1]) {
      fStack_a4 = fStack_a4 * (float)in_ECX[0xc];
      fStack_a0 = fStack_a0 * (float)in_ECX[0xd];
      fStack_9c = -fVar19 * (float)in_ECX[0xe];
      fVar19 = fStack_a0 * fStack_a0;
      local_80 = fStack_9c * fStack_9c;
      auVar23._4_4_ = fVar19;
      auVar23._0_4_ = fVar19;
      auVar23._8_4_ = fVar19;
      auVar23._12_4_ = fVar19;
      auVar24._4_12_ = auVar23._4_12_;
      auVar24._0_4_ = fVar19 + fStack_a4 * fStack_a4;
      auVar22._4_4_ = local_80;
      auVar22._0_4_ = local_80 + auVar24._0_4_;
      auVar22._8_4_ = local_80;
      auVar22._12_4_ = local_80;
      auVar22 = rsqrtss(auVar24,auVar22);
      fStack_84 = auVar22._0_4_;
      fStack_94 = (float)(iVar8 + ((int)fVar13 * 0x8000 + (int)fVar12) * 2);
      pfStack_144 = (float *)0x3f000000;
      fVar19 = fStack_84 * 0.5 * (3.0 - (local_80 + auVar24._0_4_) * fStack_84 * fStack_84);
      fStack_a4 = fVar19 * fStack_a4;
      fStack_a0 = fVar19 * fStack_a0;
      fStack_9c = fVar19 * fStack_9c;
      fStack_98 = fVar19 * fStack_98 * (float)in_ECX[0xf];
      fStack_7c = local_80;
      fStack_78 = local_80;
      (**(code **)*param_3)(param_2,&fStack_a4,pfVar11);
    }
    iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
      return;
    }
    puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
    *puVar9 = &DAT_00a9610c;
    uVar1 = rdtsc();
    uVar6 = (undefined4)uVar1;
  }
  else {
    iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar8 + 0x1a8) <= *(uint *)(iVar8 + 0x1a4)) {
      return;
    }
    puVar9 = *(undefined4 **)(iVar8 + 0x1a4);
    *puVar9 = &DAT_00a9610c;
    uVar1 = rdtsc();
    uVar6 = (undefined4)uVar1;
  }
LAB_008f00b3:
  puVar9[1] = uVar6;
LAB_008f00b6:
  *(undefined4 **)(iVar8 + 0x1a4) = puVar9 + 3;
  return;
}


