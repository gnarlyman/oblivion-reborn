
int * FUN_00700010(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xc);
  do {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    for (iVar2 = (**(code **)(*piVar1 + 4))(); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      if (iVar2 == param_1) {
        return piVar1;
      }
    }
    piVar1 = (int *)piVar1[0xd];
  } while( true );
}



void FUN_00700050(int param_1)

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



undefined1 FUN_007000f0(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  ushort uVar3;
  
  cVar2 = FUN_00700650(param_1);
  if (cVar2 != '\0') {
    uVar3 = 0;
    if (*(short *)(in_ECX + 0x14) != 0) {
      do {
        piVar1 = *(int **)(*(int *)(in_ECX + 0x10) + (uint)uVar3 * 4);
        if ((piVar1 != (int *)0x0) && (cVar2 = (**(code **)(*piVar1 + 0x4c))(), cVar2 != '\0')) {
          (**(code **)(*piVar1 + 0x24))(param_1);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(in_ECX + 0x14));
    }
    if (*(int **)(in_ECX + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0xc) + 0x24))(param_1);
    }
    return 1;
  }
  return 0;
}



void FUN_00700160(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  
  FUN_0068f970(param_1);
  if ((*(uint *)(param_1 + 0xd8) < 0x500000b) && (iVar4 = *(int *)(in_ECX + 0x10), iVar4 != 0)) {
    *(undefined4 *)(in_ECX + 0x10) = 0;
    do {
      iVar2 = FUN_00452a60();
      FUN_00733830();
      FUN_006ff8a0(iVar4);
      iVar4 = iVar2;
    } while (iVar2 != 0);
  }
  uVar5 = 0;
  if (*(short *)(in_ECX + 0x14) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x10) + (uVar5 & 0xffff) * 4);
      if ((piVar1 != (int *)0x0) &&
         (puVar3 = (undefined4 *)(**(code **)(*piVar1 + 4))(), puVar3 == &DAT_00b3ffa8)) {
        FUN_006ffbe0(uVar5);
        uVar5 = 0xffffffff;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(in_ECX + 0x14));
  }
  return;
}



undefined4 FUN_00700200(int param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00700300(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int in_ECX;
  ushort uVar9;
  int unaff_retaddr;
  
  FUN_00700770(param_1,param_2);
  if (*(int *)(param_2 + 8) == 1) {
    FUN_006ff420(*(undefined4 *)(in_ECX + 8));
  }
  else if ((*(int *)(param_2 + 8) == 2) && (pcVar4 = *(char **)(in_ECX + 8), pcVar4 != (char *)0x0))
  {
    pcVar5 = pcVar4 + 1;
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    pcVar4 = pcVar4 + (2 - (int)pcVar5);
    pcVar5 = (char *)FUN_00401f00(pcVar4);
    _strcpy_s(pcVar5,(rsize_t)pcVar4,*(char **)(in_ECX + 8));
    pcVar5[(int)(pcVar4 + -2)] = *(char *)(param_2 + 0xc);
    pcVar5[(int)(pcVar4 + -1)] = '\0';
    FUN_006ff420(pcVar5);
    FUN_00401f20(pcVar5);
  }
  if (*(short *)(in_ECX + 0x14) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
    _DAT_00b3f678 = GetCurrentThreadId();
    _DAT_00b3f67c = _DAT_00b3f67c + 1;
    uVar9 = 0;
    if (*(short *)(in_ECX + 0x14) != 0) {
      do {
        piVar1 = *(int **)(*(int *)(in_ECX + 0x10) + (uint)uVar9 * 4);
        if (piVar1 != (int *)0x0) {
          cVar3 = (**(code **)(*piVar1 + 0x50))();
          if (cVar3 != '\0') {
            uVar6 = (**(code **)(*piVar1 + 0x18))(param_2);
            FUN_006ff8a0(uVar6);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ushort *)(in_ECX + 0x14));
    }
    _DAT_00b3f67c = _DAT_00b3f67c + -1;
    if (_DAT_00b3f67c == 0) {
      _DAT_00b3f678 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
  }
  if (*(int **)(in_ECX + 0xc) != (int *)0x0) {
    puVar7 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0xc) + 0x18))(param_2);
    puVar2 = *(undefined4 **)(unaff_retaddr + 0xc);
    if (puVar2 != puVar7) {
      if (puVar2 != (undefined4 *)0x0) {
        LVar8 = InterlockedDecrement(puVar2 + 1);
        if ((LVar8 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
      }
      *(undefined4 **)(unaff_retaddr + 0xc) = puVar7;
      if (puVar7 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar7 + 1);
      }
    }
  }
  return;
}



void FUN_00700460(int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  ushort uVar4;
  undefined4 local_4;
  
  piVar2 = param_1;
  FUN_0068f970(param_1);
  FUN_00713720(*(undefined4 *)(in_ECX + 8));
  uVar4 = 0;
  param_1 = (int *)0x0;
  if (*(short *)(in_ECX + 0x14) != 0) {
    do {
      cVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x10) + (uint)uVar4 * 4) + 0x4c))();
      if (cVar3 != '\0') {
        param_1 = (int *)((int)param_1 + 1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(in_ECX + 0x14));
  }
  local_4 = 4;
  (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],&param_1,4,&local_4,1);
  uVar4 = 0;
  if (*(short *)(in_ECX + 0x14) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x10) + (uint)uVar4 * 4);
      cVar3 = (**(code **)(*piVar1 + 0x4c))();
      if (cVar3 != '\0') {
        (**(code **)(*piVar2 + 0x2c))(piVar1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(in_ECX + 0x14));
  }
  piVar1 = *(int **)(in_ECX + 0xc);
  while ((piVar1 != (int *)0x0 && (cVar3 = (**(code **)(*piVar1 + 0x6c))(), cVar3 == '\0'))) {
    piVar1 = (int *)piVar1[0xd];
  }
  (**(code **)(*piVar2 + 0x2c))(piVar1);
  return;
}



void FUN_00700540(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007009a0(param_1);
  param_1 = FUN_0070f910(DAT_00b3f584);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fc30("m_pcName",*(undefined4 *)(in_ECX + 8));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_007005d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a7d61c;
  return;
}



undefined4 FUN_00700610(undefined4 param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  
  uVar1 = (**(code **)(*in_ECX + 0x18))(param_1);
  (**(code **)(*in_ECX + 0x38))(param_1);
  return uVar1;
}



void FUN_00700650(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0070065f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



uint FUN_00700670(int *param_1)

{
  byte bVar1;
  uint in_EAX;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  int *in_ECX;
  byte *pbVar5;
  bool bVar6;
  
  if (param_1 == (int *)0x0) {
    return in_EAX & 0xffffff00;
  }
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 4))();
  pbVar5 = (byte *)*puVar2;
  puVar2 = (undefined4 *)(**(code **)(*in_ECX + 4))();
  pbVar3 = (byte *)*puVar2;
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



void FUN_007006e0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00700710(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  uVar2 = param_1;
  cVar1 = FUN_0055e000(in_ECX,&param_1);
  if (cVar1 != '\0') {
    return param_1;
  }
  uVar2 = (**(code **)(*in_ECX + 0x18))(uVar2);
  return uVar2;
}



void FUN_00700750(void)

{
  undefined4 in_ECX;
  
  FUN_00452570(in_ECX,1);
  return;
}



void FUN_00700770(undefined4 param_1)

{
  undefined4 in_ECX;
  
  FUN_00452570(in_ECX,param_1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_00700790(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  int *local_49c;
  int *local_290;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c93ad;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_4a8;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffb4c;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  local_49c = param_1;
  local_4a0 = 0;
  FUN_00713a30(uVar2);
  local_4 = 1;
  FUN_00713e50(in_ECX);
  local_4a8 = 0;
  local_4a4 = 0;
  FUN_007121d0(&local_4a8,&local_4a4);
  FUN_00712070(local_4a8,local_4a4);
  iVar1 = *local_290;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  local_4a0 = 1;
  FUN_00401f20(local_4a8);
  local_4 = local_4 & 0xffffff00;
  FUN_00713c60();
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_007008a0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int *local_4;
  
  if ((0x5000005 < *(uint *)(param_1 + 0xd8)) && (*(uint *)(param_1 + 0xd8) < 0xa010072)) {
    piVar1 = (int *)(param_1 + 0x21c);
    param_1 = 4;
    local_4 = in_ECX;
    (**(code **)(*piVar1 + 4))(*piVar1,&local_4,4,&param_1,1);
    iVar2 = *in_ECX;
    uVar3 = FUN_00712550(local_4);
    (**(code **)(iVar2 + 0x48))(uVar3);
  }
  return;
}



undefined4 FUN_00700900(void)

{
  uint uVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined1 local_1c [8];
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c93e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00478b90(uVar1);
  local_4 = 0;
  uVar2 = (**(code **)(*in_ECX + 0x18))(local_1c);
  (**(code **)(*in_ECX + 0x38))(&stack0xffffffe0);
  local_c = -1;
  if (unaff_EDI != (undefined4 *)0x0) {
    (**(code **)*unaff_EDI)(1);
  }
  if (unaff_ESI != (undefined4 *)0x0) {
    (**(code **)*unaff_ESI)(1);
  }
  *unaff_FS_OFFSET = iStack_14;
  return uVar2;
}



void FUN_007009a0(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  undefined4 local_4;
  
  local_4 = FUN_0070f910(DAT_00b3f684);
  iVar1 = param_1;
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_4);
  param_1 = FUN_0070fbe0(&DAT_00a4ee60);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("m_uiRefCount",*(undefined4 *)(in_ECX + 4));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00700300(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int in_ECX;
  ushort uVar9;
  int unaff_retaddr;
  
  FUN_00700770(param_1,param_2);
  if (*(int *)(param_2 + 8) == 1) {
    FUN_006ff420(*(undefined4 *)(in_ECX + 8));
  }
  else if ((*(int *)(param_2 + 8) == 2) && (pcVar4 = *(char **)(in_ECX + 8), pcVar4 != (char *)0x0))
  {
    pcVar5 = pcVar4 + 1;
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    pcVar4 = pcVar4 + (2 - (int)pcVar5);
    pcVar5 = (char *)FUN_00401f00(pcVar4);
    _strcpy_s(pcVar5,(rsize_t)pcVar4,*(char **)(in_ECX + 8));
    pcVar5[(int)(pcVar4 + -2)] = *(char *)(param_2 + 0xc);
    pcVar5[(int)(pcVar4 + -1)] = '\0';
    FUN_006ff420(pcVar5);
    FUN_00401f20(pcVar5);
  }
  if (*(short *)(in_ECX + 0x14) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
    _DAT_00b3f678 = GetCurrentThreadId();
    _DAT_00b3f67c = _DAT_00b3f67c + 1;
    uVar9 = 0;
    if (*(short *)(in_ECX + 0x14) != 0) {
      do {
        piVar1 = *(int **)(*(int *)(in_ECX + 0x10) + (uint)uVar9 * 4);
        if (piVar1 != (int *)0x0) {
          cVar3 = (**(code **)(*piVar1 + 0x50))();
          if (cVar3 != '\0') {
            uVar6 = (**(code **)(*piVar1 + 0x18))(param_2);
            FUN_006ff8a0(uVar6);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ushort *)(in_ECX + 0x14));
    }
    _DAT_00b3f67c = _DAT_00b3f67c + -1;
    if (_DAT_00b3f67c == 0) {
      _DAT_00b3f678 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
  }
  if (*(int **)(in_ECX + 0xc) != (int *)0x0) {
    puVar7 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0xc) + 0x18))(param_2);
    puVar2 = *(undefined4 **)(unaff_retaddr + 0xc);
    if (puVar2 != puVar7) {
      if (puVar2 != (undefined4 *)0x0) {
        LVar8 = InterlockedDecrement(puVar2 + 1);
        if ((LVar8 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
      }
      *(undefined4 **)(unaff_retaddr + 0xc) = puVar7;
      if (puVar7 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar7 + 1);
      }
    }
  }
  return;
}



undefined1 thunk_FUN_007000f0(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  ushort uVar3;
  
  cVar2 = FUN_00700650(param_1);
  if (cVar2 != '\0') {
    uVar3 = 0;
    if (*(short *)(in_ECX + 0x14) != 0) {
      do {
        piVar1 = *(int **)(*(int *)(in_ECX + 0x10) + (uint)uVar3 * 4);
        if ((piVar1 != (int *)0x0) && (cVar2 = (**(code **)(*piVar1 + 0x4c))(), cVar2 != '\0')) {
          (**(code **)(*piVar1 + 0x24))(param_1);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(in_ECX + 0x14));
    }
    if (*(int **)(in_ECX + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0xc) + 0x24))(param_1);
    }
    return 1;
  }
  return 0;
}



void thunk_FUN_00700460(int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  ushort uVar4;
  undefined4 uStack_4;
  
  piVar2 = param_1;
  FUN_0068f970(param_1);
  FUN_00713720(*(undefined4 *)(in_ECX + 8));
  uVar4 = 0;
  param_1 = (int *)0x0;
  if (*(short *)(in_ECX + 0x14) != 0) {
    do {
      cVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x10) + (uint)uVar4 * 4) + 0x4c))();
      if (cVar3 != '\0') {
        param_1 = (int *)((int)param_1 + 1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(in_ECX + 0x14));
  }
  uStack_4 = 4;
  (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],&param_1,4,&uStack_4,1);
  uVar4 = 0;
  if (*(short *)(in_ECX + 0x14) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x10) + (uint)uVar4 * 4);
      cVar3 = (**(code **)(*piVar1 + 0x4c))();
      if (cVar3 != '\0') {
        (**(code **)(*piVar2 + 0x2c))(piVar1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(in_ECX + 0x14));
  }
  piVar1 = *(int **)(in_ECX + 0xc);
  while ((piVar1 != (int *)0x0 && (cVar3 = (**(code **)(*piVar1 + 0x6c))(), cVar3 == '\0'))) {
    piVar1 = (int *)piVar1[0xd];
  }
  (**(code **)(*piVar2 + 0x2c))(piVar1);
  return;
}



void FUN_00700ac0(int param_1)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = param_1;
  FUN_006ffce0(param_1);
  if (*(uint *)(iVar1 + 0xd8) < 0xa000102) {
    local_4 = 2;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,2,&local_4,1);
    *(undefined2 *)(iVar1 + 0x25c) = (undefined2)param_1;
  }
  return;
}



void FUN_00700b10(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00700540(param_1);
  param_1 = FUN_0070f910(DAT_00b3f68c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



uint FUN_00700b60(uint param_1)

{
  undefined2 uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *in_ECX;
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  
  bVar7 = 0;
  uVar4 = 0;
  pbVar5 = in_ECX + 0x1c;
  while (*(int *)(pbVar5 + -8) != param_1) {
    uVar4 = uVar4 + 1;
    bVar7 = bVar7 + *pbVar5;
    pbVar5 = pbVar5 + 0xc;
    if (3 < uVar4) {
      return 0;
    }
  }
  iVar6 = 0;
  bVar3 = in_ECX[uVar4 * 0xc + 0x1c] - 1;
  bVar2 = bVar3;
  if (in_ECX[uVar4 * 0xc + 0x1c] == 0) {
    return 0;
  }
  for (; bVar3 != 0; bVar3 = bVar3 - 1) {
    iVar6 = iVar6 + (1 << (bVar2 & 0x1f));
    bVar2 = bVar2 - 1;
  }
  uVar4 = iVar6 + 1 << (bVar7 & 0x1f);
  if ((*in_ECX & 1) == 0) {
    param_1._3_1_ = (undefined1)(uVar4 >> 0x18);
    param_1._2_1_ = (undefined1)(uVar4 >> 0x10);
    param_1._1_1_ = (undefined1)(uVar4 >> 8);
    uVar1 = CONCAT11((char)uVar4,param_1._1_1_);
    param_1 = CONCAT22(uVar1,CONCAT11(param_1._2_1_,param_1._3_1_));
    return param_1 >> (0x20 - in_ECX[1] & 0x1f);
  }
  return uVar4;
}



uint FUN_00700c00(int param_1)

{
  uint in_EAX;
  uint uVar1;
  uint3 uVar2;
  byte *in_ECX;
  byte *pbVar3;
  uint uVar4;
  
  uVar1 = in_EAX & 0xffffff00;
  uVar4 = 0;
  pbVar3 = in_ECX + 0x1c;
  do {
    if (*(int *)(pbVar3 + -8) == param_1) {
      if ((*in_ECX & 1) != 0) {
        return uVar1;
      }
      return (uint)in_ECX[1] - (uint)(byte)(in_ECX[uVar4 * 0xc + 0x1c] + (char)uVar1);
    }
    uVar2 = (uint3)(uVar1 >> 8);
    uVar1 = CONCAT31(uVar2,(char)uVar1 + *pbVar3);
    uVar4 = uVar4 + 1;
    pbVar3 = pbVar3 + 0xc;
  } while (uVar4 < 4);
  return (uint)uVar2 << 8;
}



void FUN_00700c50(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_00b25e00;
  puVar3 = &DAT_00b3f718;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



int FUN_00700c70(float *param_1,float *param_2,int param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  void *_Dst;
  int *unaff_FS_OFFSET;
  int local_20;
  int local_1c;
  undefined8 local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c285b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(0x70,uVar2);
  local_4 = 0;
  if (iVar3 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_0070e560(0x20,0x20,param_3,1,param_4);
  }
  bVar1 = FUN_00700c00(0);
  local_14 = (longlong)ROUND(*param_1 * 255.0);
  uVar8 = (int)local_14 << (bVar1 & 0x1f);
  uVar2 = FUN_00700b60(0);
  bVar1 = FUN_00700c00(1);
  local_14 = (longlong)ROUND(param_1[1] * 255.0);
  uVar9 = (int)local_14 << (bVar1 & 0x1f);
  uVar4 = FUN_00700b60(1);
  bVar1 = FUN_00700c00(2);
  local_14 = (longlong)ROUND(param_1[2] * 255.0);
  uVar10 = (int)local_14 << (bVar1 & 0x1f);
  uVar5 = FUN_00700b60(2);
  bVar1 = FUN_00700c00(3);
  local_14 = (longlong)ROUND(param_1[3] * 255.0);
  uVar7 = (int)local_14 << (bVar1 & 0x1f);
  uVar6 = FUN_00700b60(3);
  local_14 = CONCAT44(local_14._4_4_,uVar2 & uVar8 | uVar4 & uVar9 | uVar5 & uVar10 | uVar6 & uVar7)
  ;
  bVar1 = FUN_00700c00(0);
  local_1c = (int)(longlong)ROUND(*param_2 * 255.0);
  uVar7 = local_1c << (bVar1 & 0x1f);
  uVar2 = FUN_00700b60(0);
  bVar1 = FUN_00700c00(1);
  local_1c = (int)(longlong)ROUND(param_2[1] * 255.0);
  uVar8 = local_1c << (bVar1 & 0x1f);
  uVar4 = FUN_00700b60(1);
  bVar1 = FUN_00700c00(2);
  local_1c = (int)(longlong)ROUND(param_2[2] * 255.0);
  uVar9 = local_1c << (bVar1 & 0x1f);
  uVar5 = FUN_00700b60(2);
  bVar1 = FUN_00700c00(3);
  local_1c = (int)(longlong)ROUND(param_2[3] * 255.0);
  uVar6 = FUN_00700b60(3);
  local_14 = CONCAT44(uVar2 & uVar7 | uVar4 & uVar8 | uVar5 & uVar9 |
                      uVar6 & local_1c << (bVar1 & 0x1f),(int)local_14);
  param_2 = (float *)0x0;
  if (param_4 != 0) {
    do {
      _Dst = (void *)((*(int **)(local_20 + 0x5c))[*(int *)(local_20 + 0x60)] * (int)param_2 +
                      **(int **)(local_20 + 0x5c) + *(int *)(local_20 + 0x50));
      param_1 = (float *)0x0;
      uVar2 = (uint)(*(byte *)(param_3 + 1) >> 3);
      do {
        uVar4 = 0;
        do {
          _memcpy(_Dst,(void *)((int)&local_14 + (uint)((uint)param_1 >> 4 != uVar4 >> 4) * 4),uVar2
                 );
          uVar4 = uVar4 + 1;
          _Dst = (void *)((int)_Dst + uVar2);
        } while (uVar4 < 0x20);
        param_1 = (float *)((int)param_1 + 1);
      } while (param_1 < 0x20);
      param_2 = (float *)((int)param_2 + 1);
    } while (param_2 < param_4);
  }
  *unaff_FS_OFFSET = local_c;
  return local_20;
}



void thunk_FUN_006ffce0(int param_1)

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



void FUN_00700fd0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    puVar1 = *(undefined4 **)((int)&DAT_00b3f800 + uVar3);
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)((int)&DAT_00b3f800 + uVar3) = 0;
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x28);
  return;
}



undefined4 FUN_00701020(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = param_2 & 0x7fffffff;
  if (9 < uVar1) {
    return 0;
  }
  uVar2 = 1;
  if ((&DAT_00b3f800)[uVar1] != 0) goto LAB_00701373;
  switch(param_2) {
  case 0x80000001:
    local_20 = 0;
    local_1c = 0;
    local_10 = 0x3f800000;
    local_c = 0x3f800000;
    local_18 = 0x3f800000;
    local_8 = 0;
    break;
  case 0x80000002:
    local_8 = 0;
    goto LAB_0070110f;
  case 0x80000003:
    local_10 = 0;
    local_c = 0x3f800000;
    local_8 = 0x3f800000;
    goto LAB_00701155;
  case 0x80000004:
    local_10 = 0x3f800000;
    local_c = 0;
    local_8 = 0;
LAB_00701155:
    local_18 = local_8;
    local_1c = local_c;
    local_20 = local_10;
    local_10 = 0x3f800000;
    local_c = 0x3f800000;
    local_8 = 0;
    break;
  default:
    local_20 = 0x3f800000;
    local_1c = 0;
    local_18 = 0x3f800000;
    local_10 = 0x3f800000;
    local_8 = 0x3f800000;
    local_c = 0;
    break;
  case 0x80000006:
    local_20 = 0;
    local_18 = 0x3f800000;
    local_10 = 0;
    local_1c = 0x3f800000;
    local_c = 0x3f800000;
    local_8 = 0x3f800000;
    break;
  case 0x80000007:
    local_20 = 0;
    local_1c = 0x3f800000;
    local_10 = 0x3f800000;
    local_c = 0x3f800000;
    local_18 = 0;
    local_8 = 0;
    uVar2 = 6;
    break;
  case 0x80000008:
    local_8 = 0x3f800000;
LAB_0070110f:
    local_20 = 0;
    local_18 = 0;
    local_1c = 0x3f800000;
    local_c = 0;
    local_10 = 0x3f800000;
    uVar2 = 6;
    break;
  case 0x80000009:
    local_20 = 0;
    local_10 = 0;
    local_1c = 0x3f800000;
    local_18 = 0;
    local_c = 0x3f800000;
    local_8 = 0x3f800000;
    uVar2 = 6;
  }
  local_14 = 0x3f800000;
  local_4 = 0x3f800000;
  local_24 = 0x3f800000;
  local_30 = local_10;
  local_2c = local_c;
  local_28 = local_8;
  uVar2 = FUN_00700c70(&local_20,&local_30,&DAT_00b3f718,uVar2);
  FUN_0075fa90(uVar2);
LAB_00701373:
  return (&DAT_00b3f800)[uVar1];
}



void FUN_007013a0(undefined4 *param_1)

{
  LONG LVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  puVar3 = &DAT_00b3f718;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  uVar4 = 0;
  do {
    puVar3 = *(undefined4 **)((int)&DAT_00b3f800 + uVar4);
    if (puVar3 != (undefined4 *)0x0) {
      LVar1 = InterlockedDecrement(puVar3 + 1);
      if ((LVar1 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 *)((int)&DAT_00b3f800 + uVar4) = 0;
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0x28);
  return;
}



undefined4 FUN_00701400(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (-1 < param_2) {
    return 0;
  }
  if (PTR_FUN_00b256a0 == (undefined *)0x0) {
    PTR_FUN_00b256a0 = FUN_00701020;
  }
  uVar1 = (*(code *)PTR_FUN_00b256a0)(param_1,param_2);
  return uVar1;
}



void FUN_00701430(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00700540(param_1);
  param_1 = FUN_0070f910(DAT_00b3f70c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00701480(undefined4 param_1)

{
  if (DAT_00b3f928 != (int *)0x0) {
    (**(code **)(*DAT_00b3f928 + 0xbc))(param_1);
  }
  return;
}



void FUN_007014a0(undefined4 param_1)

{
  if (DAT_00b3f928 != (int *)0x0) {
    (**(code **)(*DAT_00b3f928 + 0xb4))(param_1);
  }
  return;
}



void FUN_007014c0(undefined4 param_1)

{
  if (DAT_00b3f928 != (int *)0x0) {
    (**(code **)(*DAT_00b3f928 + 0xb8))(param_1);
  }
  return;
}



void FUN_007014e0(undefined4 param_1)

{
  if (DAT_00b3f928 != (int *)0x0) {
    (**(code **)(*DAT_00b3f928 + 0xc0))(param_1);
  }
  return;
}



void FUN_00701500(undefined4 param_1)

{
  if (DAT_00b3f928 != (int *)0x0) {
    (**(code **)(*DAT_00b3f928 + 0xc4))(param_1);
  }
  return;
}



void FUN_00701520(undefined4 param_1)

{
  if (DAT_00b3f928 != (int *)0x0) {
    (**(code **)(*DAT_00b3f928 + 200))(param_1);
  }
  return;
}



undefined4 FUN_00701540(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  code *pcVar6;
  int unaff_ESI;
  int unaff_retaddr;
  
  if ((char)in_ECX[0x83] == '\0') {
    pcVar6 = *(code **)(*in_ECX + 0x7c);
  }
  else {
    pcVar6 = *(code **)(*in_ECX + 0x80);
  }
  piVar3 = (int *)(*pcVar6)();
  iVar4 = (**(code **)(*piVar3 + 0x4c))(0);
  iVar5 = (**(code **)(*piVar3 + 0x50))(0);
  if ((iVar4 != 0) && (iVar5 != 0)) {
    fVar1 = (float)unaff_ESI;
    if (unaff_ESI < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar2 = (float)iVar4;
    if (iVar4 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    *param_1 = fVar1 / fVar2;
    fVar1 = (float)unaff_retaddr;
    if (unaff_retaddr < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar2 = (float)iVar5;
    if (iVar5 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    *param_2 = 1.0 - fVar1 / fVar2;
    return 1;
  }
  return 0;
}



void FUN_00701630(void)

{
  DAT_00b3f928 = 0;
  return;
}



undefined4 FUN_00701640(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x7c))();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x70))(0);
    if (iVar2 != 0) {
      return *(undefined4 *)(iVar2 + 8);
    }
  }
  return 0;
}



undefined4 FUN_00701670(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x7c))();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x70))(0);
    if (iVar2 != 0) {
      return *(undefined4 *)(iVar2 + 0xc);
    }
  }
  return 0;
}



void FUN_007016a0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



int * FUN_007016d0(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xb0);
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  return param_1;
}



void FUN_00701700(void)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  *in_ECX = &PTR_FUN_00a7d6a4;
  in_ECX[2] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x20));
  in_ECX[0x5e] = 0;
  in_ECX[0x5f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x40));
  in_ECX[0x7e] = 0;
  in_ECX[0x7f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x60));
  in_ECX[0x80] = 0;
  in_ECX[0x81] = 0;
  in_ECX[0x82] = 0;
  *(undefined1 *)(in_ECX + 0x83) = 0;
  *(undefined1 *)((int)in_ECX + 0x20d) = 0;
  DAT_00b3f928 = in_ECX;
  return;
}



void FUN_00701790(void)

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
  *in_ECX = &PTR_FUN_00a7d6a4;
  local_4 = 0;
  DAT_00b3f928 = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x60));
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x40));
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x20));
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007018f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  LONG LVar4;
  int *in_ECX;
  
  puVar1 = param_1;
  in_ECX[3] = param_1[0x2b];
  piVar3 = (int *)FUN_007016d0(&param_1);
  puVar2 = param_1;
  in_ECX[4] = *piVar3;
  if (((param_1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_1 + 1), LVar4 == 0)) &&
     (puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  if (((in_ECX[0x80] == 1) || (in_ECX[0x81] == 1)) && ((char)in_ECX[0x83] == '\x01')) {
    (**(code **)(*in_ECX + 0x164))(puVar1);
  }
  return;
}



void FUN_00701970(int param_1)

{
  int *in_ECX;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_24 = *(undefined4 *)(param_1 + 0x6c);
  local_20 = *(undefined4 *)(param_1 + 0x78);
  local_1c = *(undefined4 *)(param_1 + 0x84);
  local_18 = *(undefined4 *)(param_1 + 0x68);
  local_14 = *(undefined4 *)(param_1 + 0x74);
  local_10 = *(undefined4 *)(param_1 + 0x80);
  local_c = *(undefined4 *)(param_1 + 100);
  local_8 = *(undefined4 *)(param_1 + 0x70);
  local_4 = *(undefined4 *)(param_1 + 0x7c);
  if (((in_ECX[0x80] == 1) || (in_ECX[0x81] == 1)) && ((char)in_ECX[0x83] == '\x01')) {
    (**(code **)(*in_ECX + 0x140))
              (param_1 + 0x88,&local_c,&local_18,&local_24,param_1 + 0xec,param_1 + 0x110);
  }
  return;
}



void FUN_00701a10(byte param_1)

{
  FUN_00701790();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00701a30(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007009a0(param_1);
  param_1 = FUN_0070f910(DAT_00b3f938);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00701ad0(void)

{
  if (DAT_00b3f940 != (int *)0x0) {
    (**(code **)(*DAT_00b3f940 + 0x60))(1,DAT_00b3f940 + 0x67,0,0);
    *(undefined1 *)(DAT_00b3f940 + 0x6c) = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00701b00(void)

{
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f780);
  _DAT_00b3f7f8 = GetCurrentThreadId();
  _DAT_00b3f7fc = _DAT_00b3f7fc + 1;
  if (DAT_00b3f700 == 0) {
    DAT_00b3f700 = in_ECX;
  }
  if (DAT_00b3f704 == 0) {
    *(undefined4 *)(in_ECX + 0x28) = 0;
  }
  else {
    *(int *)(DAT_00b3f704 + 0x2c) = in_ECX;
    *(int *)(in_ECX + 0x28) = DAT_00b3f704;
  }
  DAT_00b3f704 = in_ECX;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  _DAT_00b3f7fc = _DAT_00b3f7fc + -1;
  if (_DAT_00b3f7fc == 0) {
    _DAT_00b3f7f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f780);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00701b80(void)

{
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f780);
  _DAT_00b3f7f8 = GetCurrentThreadId();
  _DAT_00b3f7fc = _DAT_00b3f7fc + 1;
  if (DAT_00b3f700 == in_ECX) {
    DAT_00b3f700 = *(int *)(in_ECX + 0x2c);
  }
  if (DAT_00b3f704 == in_ECX) {
    DAT_00b3f704 = *(int *)(in_ECX + 0x28);
  }
  if (*(int *)(in_ECX + 0x28) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x28) + 0x2c) = *(undefined4 *)(in_ECX + 0x2c);
  }
  if (*(int *)(in_ECX + 0x2c) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x2c) + 0x28) = *(undefined4 *)(in_ECX + 0x28);
  }
  _DAT_00b3f7fc = _DAT_00b3f7fc + -1;
  if (_DAT_00b3f7fc == 0) {
    _DAT_00b3f7f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f780);
  return;
}



undefined4 FUN_00701c00(void)

{
  char cVar1;
  int *in_ECX;
  
  if (DAT_00b3f928 == (int *)0x0) {
    return 0;
  }
  if (in_ECX[9] == 0) {
    cVar1 = (**(code **)(*DAT_00b3f928 + 0x104))();
    if (cVar1 == '\0') {
      return 0;
    }
    if (((DAT_00b3f958 != '\0') && (in_ECX[9] != 0)) && ((char)in_ECX[0x10] != '\0')) {
      (**(code **)(*in_ECX + 0x58))();
    }
  }
  return 1;
}



void FUN_00701c60(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c9418;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7d874;
  local_4 = 0;
  if ((undefined4 *)in_ECX[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[9])(1,uVar1);
  }
  FUN_00701b80();
  local_4 = 0xffffffff;
  FUN_006ffd70();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00701cd0(void)

{
  undefined4 *in_ECX;
  
  FUN_006ffd30();
  *in_ECX = &PTR_FUN_00a7d874;
  in_ECX[6] = 6;
  in_ECX[7] = 3;
  in_ECX[8] = 2;
  in_ECX[9] = 0;
  FUN_00701b00();
  *(undefined1 *)(in_ECX + 0xc) = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  *in_ECX = &PTR_FUN_00a7d8cc;
  in_ECX[0xf] = 0;
  *(undefined1 *)(in_ECX + 0x10) = 1;
  *(undefined1 *)((int)in_ECX + 0x41) = 1;
  in_ECX[0x11] = 0;
  return;
}



void FUN_00701d40(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c9453;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7d8cc;
  local_4 = 1;
  FUN_00401f20(in_ECX[0xd],uVar2);
  FUN_00401f20(in_ECX[0xe]);
  puVar1 = (undefined4 *)in_ECX[0xf];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0xf] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0xf];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00701c60();
  *unaff_FS_OFFSET = local_c;
  return;
}



int * FUN_00701e00(char *param_1,int *param_2,undefined1 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *_Dst;
  int iVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(0x48,uVar2);
  piVar6 = (int *)0x0;
  local_4 = 0;
  if (iVar3 != 0) {
    piVar6 = (int *)FUN_00701cd0();
  }
  piVar6[6] = *param_2;
  piVar6[7] = param_2[1];
  piVar6[8] = param_2[2];
  local_4 = 0xffffffff;
  *(undefined1 *)((int)piVar6 + 0x41) = param_3;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _Dst = (char *)FUN_00401f00(pcVar4 + (1 - (int)(param_1 + 1)),uVar2);
  piVar6[0xd] = (int)_Dst;
  _strcpy_s(_Dst,(rsize_t)(pcVar4 + (1 - (int)(param_1 + 1))),param_1);
  FUN_0060d0a0(piVar6[0xd]);
  iVar5 = FUN_0071b090(piVar6[0xd]);
  piVar6[0xe] = iVar5;
  if (DAT_00b256cc != '\0') {
    cVar1 = (**(code **)(*piVar6 + 0x5c))();
    if (cVar1 == '\0') {
      (**(code **)*piVar6)(1);
      *unaff_FS_OFFSET = iVar3;
      return (int *)0x0;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return piVar6;
}



int * FUN_00701f00(int param_1,int *param_2,undefined1 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(0x48,uVar2);
  local_4 = 0;
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00701cd0();
  }
  piVar4[6] = *param_2;
  piVar4[7] = param_2[1];
  piVar4[8] = param_2[2];
  *(undefined1 *)((int)piVar4 + 0x41) = param_3;
  piVar4[0x11] = param_1;
  local_4 = 0xffffffff;
  if (DAT_00b256cc != '\0') {
    cVar1 = (**(code **)(*piVar4 + 0x5c))();
    if (cVar1 == '\0') {
      (**(code **)*piVar4)(1);
      *unaff_FS_OFFSET = iVar3;
      return (int *)0x0;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return piVar4;
}



int * FUN_00701fc0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  LONG LVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = FUN_00401f00(0x48,uVar3);
  local_4 = 0;
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00701cd0();
  }
  piVar5[6] = *param_2;
  piVar5[7] = param_2[1];
  piVar5[8] = param_2[2];
  puVar1 = (undefined4 *)piVar5[0xf];
  local_4 = 0xffffffff;
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar1 + 1);
      if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    piVar5[0xf] = (int)param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  if (DAT_00b256cc != '\0') {
    cVar2 = (**(code **)(*piVar5 + 0x5c))();
    if (cVar2 == '\0') {
      (**(code **)*piVar5)(1);
      *unaff_FS_OFFSET = iVar4;
      return (int *)0x0;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return piVar5;
}



void FUN_007020f0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bd558;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*(int *)(in_ECX + 0x34) != 0) && (*(int *)(in_ECX + 0x3c) == 0)) {
    piVar3 = (int *)FUN_0071b280(uVar2);
    puVar4 = (undefined4 *)
             (**(code **)(*piVar3 + 8))(*(undefined4 *)(in_ECX + 0x38),*(int *)(in_ECX + 0x3c));
    puStack_10 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
    puVar1 = *(undefined4 **)(in_ECX + 0x3c);
    uStack_4 = 0;
    if ((puVar1 == (undefined4 *)0x0) || (puVar4 != puVar1)) {
      FUN_0055e2a0(&puStack_10);
    }
    uStack_4 = 0xffffffff;
    if ((puVar4 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar4 + 1), LVar5 == 0)) {
      (**(code **)*puVar4)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007021b0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
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
  local_10 = FUN_00401f00(0x48,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_00701cd0();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_00702260(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  thunk_FUN_00700050(param_1);
  iVar1 = FUN_007124d0();
  if (iVar1 != 0) {
    uVar2 = FUN_007124a0();
    FUN_0075fa90(uVar2);
  }
  return;
}



undefined1 FUN_00702290(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int in_ECX;
  
  cVar1 = thunk_FUN_007000f0(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(int **)(in_ECX + 0x3c) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x24))(param_1);
    return uVar2;
  }
  return 1;
}



uint FUN_007022d0(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int in_ECX;
  byte *pbVar4;
  bool bVar5;
  
  pbVar3 = (byte *)thunk_FUN_00700200(param_1);
  if ((char)pbVar3 == '\0') goto LAB_00702392;
  pbVar3 = *(byte **)(in_ECX + 0x34);
  if (pbVar3 == (byte *)0x0) {
LAB_007022fb:
    if (*(int *)(param_1 + 0x34) != 0) goto LAB_00702392;
    if (pbVar3 != (byte *)0x0) goto LAB_00702309;
  }
  else {
    if (*(int *)(param_1 + 0x34) == 0) goto LAB_00702392;
    if (pbVar3 == (byte *)0x0) goto LAB_007022fb;
LAB_00702309:
    pbVar4 = *(byte **)(param_1 + 0x34);
    do {
      bVar1 = *pbVar3;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00702330:
        pbVar3 = (byte *)((1 - (uint)bVar5) - (uint)(bVar5 != 0));
        goto LAB_00702335;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00702330;
      pbVar3 = pbVar3 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    pbVar3 = (byte *)0x0;
LAB_00702335:
    if (pbVar3 != (byte *)0x0) goto LAB_00702392;
  }
  piVar2 = *(int **)(in_ECX + 0x3c);
  if (piVar2 == (int *)0x0) {
LAB_0070234a:
    if (*(int *)(param_1 + 0x3c) != 0) goto LAB_00702392;
    if (piVar2 != (int *)0x0) goto LAB_00702354;
  }
  else {
    if (*(int *)(param_1 + 0x3c) == 0) goto LAB_00702392;
    if (piVar2 == (int *)0x0) goto LAB_0070234a;
LAB_00702354:
    pbVar3 = (byte *)(**(code **)(*piVar2 + 0x2c))(*(undefined4 *)(param_1 + 0x3c));
    if ((char)pbVar3 == '\0') goto LAB_00702392;
  }
  if ((((*(int *)(in_ECX + 0x18) == *(int *)(param_1 + 0x18)) &&
       (*(int *)(in_ECX + 0x20) == *(int *)(param_1 + 0x20))) &&
      (pbVar3 = *(byte **)(in_ECX + 0x1c), pbVar3 == *(byte **)(param_1 + 0x1c))) &&
     ((*(char *)(in_ECX + 0x40) == *(char *)(param_1 + 0x40) &&
      (*(char *)(in_ECX + 0x41) == *(char *)(param_1 + 0x41))))) {
    return CONCAT31((int3)((uint)pbVar3 >> 8),1);
  }
LAB_00702392:
  return (uint)pbVar3 & 0xffffff00;
}



void FUN_007023a0(byte param_1)

{
  FUN_00701c60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007023c0(byte param_1)

{
  FUN_00701d40();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_007023e0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  LONG LVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *in_ECX;
  int iVar7;
  bool bVar8;
  undefined1 auStack_118 [2];
  char cStack_116;
  char local_115;
  undefined4 local_114;
  undefined4 uStack_110;
  char cStack_10a;
  char local_109;
  char acStack_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_118;
  thunk_FUN_006ffce0(param_1);
  InterlockedIncrement(in_ECX + 1);
  iVar7 = param_1[0x87];
  local_115 = '\0';
  if ((uint)param_1[0x36] < 0xa000104) {
    local_114 = 1;
    (**(code **)(iVar7 + 4))(iVar7,&local_109,1,&local_114,1);
    if (local_109 == '\0') {
      in_ECX[0xd] = 0;
      local_114 = 1;
      (**(code **)(param_1[0x87] + 4))(param_1[0x87],&cStack_116,1,&local_114,1);
      if (cStack_116 != '\0') goto LAB_007024fb;
      FUN_00712bc0(0);
    }
    else {
      FUN_00713620(in_ECX + 0xd);
      puVar1 = (undefined4 *)in_ECX[0xf];
      if (puVar1 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(puVar1 + 1);
        if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        in_ECX[0xf] = 0;
      }
      local_115 = '\x01';
      FUN_00712bc0(0);
    }
  }
  else {
    local_114 = 1;
    (**(code **)(iVar7 + 4))(iVar7,&local_115,1,&local_114,1);
    FUN_00713620(in_ECX + 0xd);
LAB_007024fb:
    FUN_00712bc0(1);
    FUN_00712a20();
  }
  if (in_ECX[0xd] != 0) {
    uVar5 = FUN_0071b090(in_ECX[0xd]);
    in_ECX[0xe] = uVar5;
  }
  if (local_115 == '\0') {
    if (in_ECX[0xe] != 0) {
      iVar7 = FUN_00712750(in_ECX[0xe],in_ECX);
      if (iVar7 == 0) {
        (**(code **)(*param_1 + 0x30))(in_ECX[0xe]);
      }
      else {
        (**(code **)(*param_1 + 0x24))(iVar7);
      }
    }
  }
  else {
    piVar2 = (int *)param_1[0x7a];
    FUN_007478f0(in_ECX[0xe]);
    (**(code **)(*piVar2 + 4))();
    iVar7 = 0;
    do {
      cVar3 = (**(code **)(*piVar2 + 8))(acStack_108,0x104);
      if (cVar3 == '\0') {
        if (iVar7 == 0) {
          (**(code **)(*piVar2 + 4))();
          cVar3 = (**(code **)(*piVar2 + 8))(acStack_108,0x104);
          if (cVar3 == '\0') goto LAB_00702665;
          goto LAB_007025d1;
        }
        break;
      }
      iVar7 = FUN_00712750(acStack_108,in_ECX);
    } while (iVar7 == 0);
    FUN_00401f20(in_ECX[0xe]);
    pcVar6 = (char *)FUN_00401f00(0x104);
    in_ECX[0xe] = pcVar6;
    _strcpy_s(pcVar6,0x104,acStack_108);
    (**(code **)(*param_1 + 0x24))(iVar7);
  }
  goto LAB_00702665;
  while (cVar3 = (**(code **)(*piVar2 + 8))(acStack_108,0x104), cVar3 != '\0') {
LAB_007025d1:
    cVar3 = thunk_FUN_00748170(acStack_108,0);
    if (cVar3 != '\0') {
      FUN_00401f20(in_ECX[0xe]);
      pcVar6 = (char *)FUN_00401f00(0x104);
      in_ECX[0xe] = pcVar6;
      _strcpy_s(pcVar6,0x104,acStack_108);
      (**(code **)(*param_1 + 0x30))(in_ECX[0xe]);
      break;
    }
  }
LAB_00702665:
  local_114 = 4;
  (**(code **)(param_1[0x87] + 4))(param_1[0x87],&uStack_110,4,&local_114,1);
  in_ECX[6] = uStack_110;
  uStack_110 = 4;
  (**(code **)(param_1[0x87] + 4))(param_1[0x87],&local_114,4,&uStack_110,1);
  in_ECX[8] = local_114;
  uStack_110 = 4;
  (**(code **)(param_1[0x87] + 4))(param_1[0x87],&local_114,4,&uStack_110,1);
  in_ECX[7] = local_114;
  if ((uint)param_1[0x36] < 0x303000c) {
    bVar8 = in_ECX[6] == 4;
  }
  else {
    if (0x5000000 < (uint)param_1[0x36]) goto LAB_00702701;
    bVar8 = in_ECX[6] == 5;
  }
  if (bVar8) {
    in_ECX[6] = 6;
  }
LAB_00702701:
  uStack_110 = 1;
  (**(code **)(param_1[0x87] + 4))(param_1[0x87],&cStack_10a,1,&uStack_110,1);
  *(bool *)(in_ECX + 0x10) = cStack_10a != '\0';
  if (0xa010066 < (uint)param_1[0x36]) {
    uStack_110 = 1;
    (**(code **)(param_1[0x87] + 4))(param_1[0x87],&cStack_116,1,&uStack_110,1);
    *(bool *)((int)in_ECX + 0x41) = cStack_116 != '\0';
  }
  LVar4 = InterlockedDecrement(in_ECX + 1);
  if (LVar4 == 0) {
    (**(code **)*in_ECX)(1);
  }
  return;
}



void FUN_007027a0(int *param_1)

{
  int *piVar1;
  int in_ECX;
  undefined4 uStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  thunk_FUN_00700460(param_1);
  param_1 = (int *)CONCAT31(param_1._1_3_,*(int *)(in_ECX + 0x3c) == 0);
  local_4 = 1;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],&param_1,1,&local_4,1);
  FUN_00713720(*(undefined4 *)(in_ECX + 0x34));
  (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(in_ECX + 0x3c));
  uStack_8 = 4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x18,4,&uStack_8,1);
  uStack_8 = 4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x20,4,&uStack_8,1);
  uStack_8 = 4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x1c,4,&uStack_8,1);
  uStack_8 = 1;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],&stack0xfffffff6,1,&uStack_8,1);
  uStack_8 = 1;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],&stack0xfffffff7,1,&uStack_8,1);
  return;
}



void FUN_007028c0(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00701430(param_1);
  param_1 = FUN_0070f910(DAT_00b3f95c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fc30("File:",*(undefined4 *)(in_ECX + 0x38));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



uint FUN_00702970(ushort param_1,ushort param_2,void *param_3)

{
  ushort *puVar1;
  size_t _Size;
  int iVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  float *pfVar9;
  ushort *_Dst;
  int in_ECX;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  int *unaff_FS_OFFSET;
  uint local_2c;
  short local_28;
  short local_1c;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c947b;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 < 3) || ((param_2 != 0 && (param_3 == (void *)0x0)))) {
    local_2c = 0xffffffff;
  }
  else {
    if (param_2 == 0) {
      param_2 = param_1 - 2;
    }
    uVar5 = *(ushort *)(in_ECX + 100);
    local_2c = (uint)uVar5;
    *(ushort *)(in_ECX + 100) = uVar5 + 1;
    if (*(ushort *)(in_ECX + 0x60) < (ushort)(uVar5 + 1)) {
      uVar11 = *(short *)(in_ECX + 0x62) + *(ushort *)(in_ECX + 0x60);
      uVar12 = (uint)uVar11;
      pvVar7 = (void *)FUN_00401f00(uVar12 * 8,uVar6);
      _memcpy(pvVar7,*(void **)(in_ECX + 0x58),(uint)*(ushort *)(in_ECX + 0x60) * 8);
      FUN_00401f20(*(undefined4 *)(in_ECX + 0x58));
      *(void **)(in_ECX + 0x58) = pvVar7;
      pvVar7 = (void *)FUN_00401f00(uVar12 * 2);
      _memcpy(pvVar7,*(void **)(in_ECX + 0x5c),(uint)*(ushort *)(in_ECX + 0x60) * 2);
      _memset((void *)((int)pvVar7 + (uint)*(ushort *)(in_ECX + 0x60) * 2),0xff,
              (uVar12 - *(ushort *)(in_ECX + 0x60)) * 2);
      FUN_00401f20(*(undefined4 *)(in_ECX + 0x5c));
      *(void **)(in_ECX + 0x5c) = pvVar7;
      *(ushort *)(in_ECX + 0x60) = uVar11;
    }
    puVar1 = (ushort *)(*(int *)(in_ECX + 0x58) + local_2c * 8);
    *puVar1 = param_1;
    puVar1[1] = *(ushort *)(in_ECX + 8);
    puVar1[2] = param_2;
    uVar11 = 0;
    puVar1[3] = *(short *)(in_ECX + 0x40) * 3;
    if (*(short *)(in_ECX + 100) != 0) {
      do {
        if (*(short *)(*(int *)(in_ECX + 0x5c) + (uint)uVar11 * 2) == -1) {
          *(ushort *)(*(int *)(in_ECX + 0x5c) + (uint)uVar11 * 2) = uVar5;
          local_2c = (uint)uVar11;
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(in_ECX + 100));
    }
    *(short *)(in_ECX + 8) = *(short *)(in_ECX + 8) + *puVar1;
    iVar8 = (uint)*(ushort *)(in_ECX + 8) - (uint)*(ushort *)(in_ECX + 0x66);
    if (0 < iVar8) {
      local_28 = (short)(int)ROUND((float)iVar8 / (float)*(ushort *)(in_ECX + 0x68) + 0.5);
      uVar10 = (uint)*(ushort *)(in_ECX + 0x68) * (uint)(ushort)(local_28 + 1) +
               (uint)*(ushort *)(in_ECX + 0x66);
      uVar12 = uVar10 & 0xffff;
      pvVar7 = (void *)FUN_00401f00(uVar12 * 0xc,uVar6);
      _Size = (uint)*(ushort *)(in_ECX + 0x66) * 0xc;
      _memcpy(pvVar7,*(void **)(in_ECX + 0x1c),_Size);
      FUN_00401f20(*(undefined4 *)(in_ECX + 0x1c));
      *(void **)(in_ECX + 0x1c) = pvVar7;
      uVar5 = (ushort)uVar10;
      if (*(int *)(in_ECX + 0x20) != 0) {
        pvVar7 = (void *)FUN_00401f00(uVar12 * 0xc,uVar6);
        _memcpy(pvVar7,*(void **)(in_ECX + 0x20),_Size);
        FUN_00401f20(*(undefined4 *)(in_ECX + 0x20));
        uVar11 = *(ushort *)(in_ECX + 0x66);
        *(void **)(in_ECX + 0x20) = pvVar7;
        if (uVar11 < uVar5) {
          iVar8 = (uint)uVar11 * 0xc;
          uVar10 = uVar12 - uVar11 & 0xffff;
          do {
            pfVar9 = (float *)(*(int *)(in_ECX + 0x20) + iVar8);
            iVar8 = iVar8 + 0xc;
            uVar10 = uVar10 - 1;
            fVar3 = -DAT_00b258ec;
            fVar4 = -DAT_00b258f0;
            *pfVar9 = -DAT_00b258e8;
            pfVar9[1] = fVar3;
            pfVar9[2] = fVar4;
          } while (uVar10 != 0);
        }
      }
      if (*(int *)(in_ECX + 0x24) != 0) {
        pvVar7 = (void *)FUN_00401f00(uVar12 * 0x10);
        local_4 = 0;
        if (pvVar7 == (void *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          _vector_constructor_iterator_(pvVar7,0x10,uVar12,FUN_0047ea50);
        }
        local_4 = 0xffffffff;
        _memcpy(pvVar7,*(void **)(in_ECX + 0x24),(uint)*(ushort *)(in_ECX + 0x66) << 4);
        FUN_00401f20(*(undefined4 *)(in_ECX + 0x24));
        *(void **)(in_ECX + 0x24) = pvVar7;
      }
      _param_1 = *(byte *)(in_ECX + 0x2c) & 0x3f;
      if ((short)_param_1 != 0) {
        iVar8 = FUN_00401f00(_param_1 * uVar12 * 8);
        uVar11 = *(ushort *)(in_ECX + 0x66);
        if ((short)_param_1 != 0) {
          iVar13 = 0;
          do {
            iVar2 = (uint)*(ushort *)(in_ECX + 8) * iVar13 * 8;
            _memcpy((void *)(iVar2 + iVar8),(void *)(*(int *)(in_ECX + 0x28) + iVar2),
                    (uint)uVar11 * 8);
            iVar13 = iVar13 + 1;
            _param_1 = _param_1 - 1;
          } while (_param_1 != 0);
        }
        FUN_00401f20(*(undefined4 *)(in_ECX + 0x28));
        *(int *)(in_ECX + 0x28) = iVar8;
      }
      *(ushort *)(in_ECX + 0x66) = uVar5;
    }
    *(short *)(in_ECX + 0x40) = *(short *)(in_ECX + 0x40) + param_2;
    *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x44) + (uint)param_2 * 3;
    iVar8 = (uint)*(ushort *)(in_ECX + 0x40) * 3 - (uint)*(ushort *)(in_ECX + 0x6a);
    if (0 < iVar8) {
      local_1c = (short)(int)ROUND((float)iVar8 / (float)*(ushort *)(in_ECX + 0x6c) + 0.5);
      uVar5 = (local_1c + 1) * *(ushort *)(in_ECX + 0x6c) + *(ushort *)(in_ECX + 0x6a);
      pvVar7 = (void *)FUN_00401f00((uint)uVar5 * 2,uVar6);
      _memcpy(pvVar7,*(void **)(in_ECX + 0x48),(uint)*(ushort *)(in_ECX + 0x6a) * 2);
      FUN_00401f20(*(undefined4 *)(in_ECX + 0x48));
      *(void **)(in_ECX + 0x48) = pvVar7;
      *(ushort *)(in_ECX + 0x6a) = uVar5;
    }
    _Dst = (ushort *)(*(int *)(in_ECX + 0x48) + (uint)puVar1[3] * 2);
    if (param_3 == (void *)0x0) {
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          *_Dst = puVar1[1];
          _Dst[1] = puVar1[1] + uVar5 + 1;
          _Dst[2] = puVar1[1] + uVar5 + 2;
          uVar5 = uVar5 + 1;
          _Dst = _Dst + 3;
        } while (uVar5 < param_2);
      }
    }
    else {
      _memcpy(_Dst,param_3,(uint)param_2 * 6);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return local_2c;
}



uint FUN_00702ec0(uint param_1,float param_2,float param_3,float param_4,float param_5)

{
  ushort uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(uint)*(ushort *)(in_ECX + 0x60))) {
    uVar1 = *(ushort *)(*(int *)(in_ECX + 0x5c) + param_1 * 2);
    param_1 = (uint)uVar1;
    if ((uVar1 != 0xffff) &&
       (param_1 = *(int *)(in_ECX + 0x58) + (uint)uVar1 * 8,
       *(short *)(*(int *)(in_ECX + 0x58) + (uint)uVar1 * 8) == 4)) {
      uVar3 = (uint)*(ushort *)(param_1 + 2);
      iVar2 = uVar3 * 0xc;
      *(float *)(iVar2 + *(int *)(in_ECX + 0x1c)) = param_2;
      *(float *)(*(int *)(in_ECX + 0x1c) + 4 + iVar2) = param_3;
      *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 8 + iVar2) = 0;
      iVar2 = (uVar3 + 1) * 0xc;
      *(float *)(iVar2 + *(int *)(in_ECX + 0x1c)) = param_2;
      *(float *)(*(int *)(in_ECX + 0x1c) + 4 + iVar2) = param_3 + param_5;
      *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 8 + iVar2) = 0;
      iVar2 = (uVar3 + 2) * 0xc;
      *(float *)(iVar2 + *(int *)(in_ECX + 0x1c)) = param_2 + param_4;
      *(float *)(*(int *)(in_ECX + 0x1c) + 4 + iVar2) = param_3 + param_5;
      *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 8 + iVar2) = 0;
      iVar2 = (uVar3 + 3) * 0xc;
      *(float *)(iVar2 + *(int *)(in_ECX + 0x1c)) = param_2 + param_4;
      *(float *)(*(int *)(in_ECX + 0x1c) + 4 + iVar2) = param_3;
      *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 8 + iVar2) = 0;
      *(ushort *)(in_ECX + 0x2e) = *(ushort *)(in_ECX + 0x2e) | 1;
      *(undefined1 *)(in_ECX + 0x6e) = 1;
      return 1;
    }
  }
  return param_1 & 0xffffff00;
}



uint FUN_00702fc0(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint in_EAX;
  int iVar4;
  int in_ECX;
  uint uVar5;
  
  if (((*(int *)(in_ECX + 0x28) != 0) && (in_EAX = param_1, -1 < (int)param_1)) &&
     ((int)param_1 < (int)(uint)*(ushort *)(in_ECX + 0x60))) {
    uVar2 = *(ushort *)(*(int *)(in_ECX + 0x5c) + param_1 * 2);
    in_EAX = (uint)uVar2;
    if (uVar2 != 0xffff) {
      iVar3 = *(int *)(in_ECX + 0x58);
      in_EAX = (uint)uVar2;
      iVar1 = in_EAX * 8;
      if ((*(short *)(iVar3 + in_EAX * 8) == 4) &&
         (in_EAX = param_2, (ushort)param_2 < (*(byte *)(in_ECX + 0x2c) & 0x3f))) {
        iVar4 = FUN_007282f0(param_2);
        uVar5 = (uint)*(ushort *)(iVar3 + iVar1 + 2);
        *(undefined4 *)(iVar4 + uVar5 * 8) = param_3;
        iVar4 = iVar4 + uVar5 * 8;
        *(undefined4 *)(iVar4 + 4) = param_4;
        *(undefined4 *)(iVar4 + 8) = param_3;
        *(undefined4 *)(iVar4 + 0xc) = param_6;
        *(undefined4 *)(iVar4 + 0x10) = param_5;
        *(undefined4 *)(iVar4 + 0x18) = param_5;
        *(undefined4 *)(iVar4 + 0x14) = param_6;
        *(undefined4 *)(iVar4 + 0x1c) = param_4;
        return CONCAT31((int3)((uint)iVar4 >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}



void FUN_00703050(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x6e) = 0;
  if (*(short *)(in_ECX + 8) != 0) {
    FUN_0072a0f0(*(short *)(in_ECX + 8),*(undefined4 *)(in_ECX + 0x1c));
  }
  return;
}



uint FUN_00703080(int param_1)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int in_ECX;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  
  uVar3 = FUN_0071fde0(param_1);
  if ((char)uVar3 == '\0') {
LAB_00703092:
    return uVar3 & 0xffffff00;
  }
  uVar1 = *(ushort *)(in_ECX + 0x60);
  uVar3 = (uint)uVar1;
  if (((((uVar1 != *(ushort *)(param_1 + 0x60)) ||
        (*(short *)(in_ECX + 0x62) != *(short *)(param_1 + 0x62))) ||
       (*(short *)(in_ECX + 100) != *(short *)(param_1 + 100))) ||
      ((*(short *)(in_ECX + 0x66) != *(short *)(param_1 + 0x66) ||
       (*(short *)(in_ECX + 0x68) != *(short *)(param_1 + 0x68))))) ||
     ((*(short *)(in_ECX + 0x6a) != *(short *)(param_1 + 0x6a) ||
      (*(short *)(in_ECX + 0x6c) != *(short *)(param_1 + 0x6c))))) goto LAB_00703092;
  pbVar4 = *(byte **)(param_1 + 0x58);
  pbVar5 = *(byte **)(in_ECX + 0x58);
  for (uVar3 = (uint)uVar1 * 8; 3 < uVar3; uVar3 = uVar3 - 4) {
    if (*(int *)pbVar5 != *(int *)pbVar4) goto LAB_00703118;
    pbVar4 = pbVar4 + 4;
    pbVar5 = pbVar5 + 4;
  }
  if (uVar3 == 0) {
LAB_00703175:
    uVar3 = 0;
  }
  else {
LAB_00703118:
    iVar6 = (uint)*pbVar5 - (uint)*pbVar4;
    if (iVar6 == 0) {
      if (uVar3 == 1) goto LAB_00703175;
      iVar6 = (uint)pbVar5[1] - (uint)pbVar4[1];
      if (iVar6 == 0) {
        if (uVar3 == 2) goto LAB_00703175;
        iVar6 = (uint)pbVar5[2] - (uint)pbVar4[2];
        if (iVar6 == 0) {
          if ((uVar3 == 3) || (iVar6 = (uint)pbVar5[3] - (uint)pbVar4[3], iVar6 == 0))
          goto LAB_00703175;
        }
      }
    }
    uVar3 = 1;
    if (iVar6 < 1) {
      uVar3 = 0xffffffff;
    }
  }
  if (uVar3 != 0) {
    return uVar3 & 0xffffff00;
  }
  pbVar4 = *(byte **)(param_1 + 0x5c);
  pbVar5 = *(byte **)(in_ECX + 0x5c);
  for (uVar3 = (uint)uVar1 * 2; 3 < uVar3; uVar3 = uVar3 - 4) {
    if (*(int *)pbVar5 != *(int *)pbVar4) goto LAB_007031ad;
    pbVar4 = pbVar4 + 4;
    pbVar5 = pbVar5 + 4;
  }
  if (uVar3 == 0) {
LAB_00703214:
    bVar2 = false;
  }
  else {
LAB_007031ad:
    iVar6 = (uint)*pbVar5 - (uint)*pbVar4;
    if (iVar6 == 0) {
      if (uVar3 == 1) goto LAB_00703214;
      iVar6 = (uint)pbVar5[1] - (uint)pbVar4[1];
      if (iVar6 == 0) {
        if (uVar3 == 2) goto LAB_00703214;
        iVar6 = (uint)pbVar5[2] - (uint)pbVar4[2];
        if (iVar6 == 0) {
          if ((uVar3 == 3) || (iVar6 = (uint)pbVar5[3] - (uint)pbVar4[3], iVar6 == 0))
          goto LAB_00703214;
        }
      }
    }
    bVar2 = true;
    if (iVar6 < 1) {
      return 0xffffff00;
    }
  }
  return (uint)!bVar2;
}



void FUN_00703230(char param_1,char param_2,ushort param_3,uint param_4,int param_5,uint param_6,
                 int param_7,int param_8,int param_9)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 uVar7;
  void *_Dst;
  int iVar8;
  short sVar9;
  undefined4 *in_ECX;
  undefined4 *puVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c94a8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0071fbb0(uVar6);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a7d94c;
  if ((int)param_4 < 1) {
    param_4 = 1;
  }
  *(short *)(in_ECX + 0x18) = (short)param_4;
  if (param_5 < 1) {
    param_5 = 1;
  }
  *(short *)((int)in_ECX + 0x62) = (short)param_5;
  *(undefined2 *)(in_ECX + 0x19) = 0;
  uVar7 = FUN_00401f00((param_4 & 0xffff) * 8);
  in_ECX[0x16] = uVar7;
  _Dst = (void *)FUN_00401f00((uint)*(ushort *)(in_ECX + 0x18) * 2);
  in_ECX[0x17] = _Dst;
  _memset(_Dst,0xff,(uint)*(ushort *)(in_ECX + 0x18) * 2);
  if ((int)param_6 < 1) {
    param_6 = 1;
  }
  *(short *)((int)in_ECX + 0x66) = (short)param_6;
  if (param_7 < 1) {
    param_7 = 1;
  }
  *(short *)(in_ECX + 0x1a) = (short)param_7;
  *(undefined2 *)(in_ECX + 2) = 0;
  uVar7 = FUN_00401f00((param_6 & 0xffff) * 0xc);
  in_ECX[7] = uVar7;
  if (param_1 == '\0') {
    in_ECX[8] = 0;
  }
  else {
    uVar7 = FUN_00401f00((uint)*(ushort *)((int)in_ECX + 0x66) * 0xc);
    uVar5 = 0;
    in_ECX[8] = uVar7;
    if (*(short *)((int)in_ECX + 0x66) != 0) {
      do {
        fVar4 = DAT_00b258f0;
        pfVar1 = (float *)(in_ECX[8] + (uint)uVar5 * 0xc);
        fVar3 = -DAT_00b258ec;
        uVar5 = uVar5 + 1;
        *pfVar1 = -DAT_00b258e8;
        pfVar1[1] = fVar3;
        pfVar1[2] = -fVar4;
      } while (uVar5 < *(ushort *)((int)in_ECX + 0x66));
    }
  }
  if (param_2 != '\0') {
    uVar5 = *(ushort *)((int)in_ECX + 0x66);
    iVar8 = FUN_00401f00((uint)uVar5 * 0x10);
    if (iVar8 != 0) {
      iVar11 = uVar5 - 1;
      if (-1 < iVar11) {
        puVar10 = (undefined4 *)(iVar8 + 8);
        do {
          puVar10[-2] = 0;
          iVar11 = iVar11 + -1;
          puVar10[-1] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10 = puVar10 + 4;
        } while (-1 < iVar11);
      }
      goto LAB_00703402;
    }
  }
  iVar8 = 0;
LAB_00703402:
  in_ECX[9] = iVar8;
  if (param_3 == 0) {
    in_ECX[10] = 0;
  }
  else {
    lVar2 = (ulonglong)((uint)*(ushort *)((int)in_ECX + 0x66) * (uint)param_3) * 8;
    uVar7 = FUN_00401f00(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
    in_ECX[10] = uVar7;
    *(ushort *)(in_ECX + 0xb) =
         *(ushort *)(in_ECX + 0xb) ^ (byte)(*(byte *)(in_ECX + 0xb) ^ (byte)param_3) & 0x3f;
  }
  uVar5 = (short)param_8 * 3;
  if (param_8 < 1) {
    uVar5 = 3;
  }
  *(ushort *)((int)in_ECX + 0x6a) = uVar5;
  sVar9 = (short)param_9 * 3;
  if (param_9 < 1) {
    sVar9 = 3;
  }
  *(short *)(in_ECX + 0x1b) = sVar9;
  *(undefined2 *)(in_ECX + 0x10) = 0;
  in_ECX[0x11] = 0;
  uVar7 = FUN_00401f00((uint)uVar5 * 2);
  in_ECX[0x12] = uVar7;
  *(undefined1 *)((int)in_ECX + 0x6e) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007034c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7d94c;
  FUN_00401f20(in_ECX[0x16]);
  FUN_00401f20(in_ECX[0x17]);
  FUN_0071fbe0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00703500(int param_1)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  
  iVar3 = param_1;
  FUN_0071fec0(param_1);
  puVar1 = (ushort *)(in_ECX + 0x60);
  param_1 = 2;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),puVar1,2,&param_1,1);
  uVar4 = FUN_00401f00((uint)*puVar1 * 8);
  *(undefined4 *)(in_ECX + 0x58) = uVar4;
  uVar4 = FUN_00401f00((uint)*puVar1 * 2);
  uVar2 = *puVar1;
  *(undefined4 *)(in_ECX + 0x5c) = uVar4;
  param_1 = 8;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
            (*(int *)(iVar3 + 0x21c),*(undefined4 *)(in_ECX + 0x58),(uint)uVar2 * 8,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
            (*(int *)(iVar3 + 0x21c),*(undefined4 *)(in_ECX + 0x5c),(uint)uVar2 * 2,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),in_ECX + 0x62,2,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),in_ECX + 100,2,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),in_ECX + 0x66,2,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),in_ECX + 0x68,2,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),in_ECX + 0x6a,2,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),in_ECX + 0x6c,2,&param_1,1);
  return;
}



void FUN_00703670(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007201b0(param_1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))
            (*(int *)(iVar1 + 0x220),(ushort *)(in_ECX + 0x60),2,&param_1,1);
  uVar2 = (uint)*(ushort *)(in_ECX + 0x60);
  param_1 = 8;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))
            (*(int *)(iVar1 + 0x220),*(undefined4 *)(in_ECX + 0x58),uVar2 * 8,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))
            (*(int *)(iVar1 + 0x220),*(undefined4 *)(in_ECX + 0x5c),uVar2 * 2,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x62,2,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 100,2,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x66,2,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x68,2,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x6a,2,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x6c,2,&param_1,1);
  return;
}



void FUN_00703a30(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = DAT_00b3fc80;
  uVar1 = DAT_00b3fc84;
  in_ECX[2] = 0;
  in_ECX[1] = uVar1;
  in_ECX[3] = 0x3f800000;
  in_ECX[4] = 0x3f800000;
  in_ECX[5] = 0x3f000000;
  in_ECX[6] = 0x3f000000;
  *(undefined1 *)(in_ECX + 7) = 1;
  in_ECX[0x11] = 0;
  return;
}



undefined4 FUN_00703a70(char *param_1,undefined4 param_2)

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
  switch(param_2) {
  case 0:
    FUN_006c5d40(uVar3,pcVar2,"%s = CLAMP_S_CLAMP_T",param_1);
    return uVar3;
  case 1:
    FUN_006c5d40(uVar3,pcVar2,"%s = CLAMP_S_WRAP_T",param_1);
    return uVar3;
  case 2:
    FUN_006c5d40(uVar3,pcVar2,"%s = WRAP_S_CLAMP_T",param_1);
    return uVar3;
  case 3:
    FUN_006c5d40(uVar3,pcVar2,"%s = WRAP_S_WRAP_T",param_1);
  }
  return uVar3;
}



undefined4 FUN_00703b20(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (0x1e - (int)(param_1 + 1));
  uVar3 = FUN_00401f00(pcVar2);
  switch(param_2) {
  case 0:
    FUN_006c5d40(uVar3,pcVar2,"%s = FILTER_NEAREST",param_1);
    return uVar3;
  case 1:
    FUN_006c5d40(uVar3,pcVar2,"%s = FILTER_BILERP",param_1);
    return uVar3;
  case 2:
    FUN_006c5d40(uVar3,pcVar2,"%s = FILTER_TRILERP",param_1);
    return uVar3;
  case 3:
    FUN_006c5d40(uVar3,pcVar2,"%s = FILTER_NEAREST_MIPNEAREST",param_1);
    return uVar3;
  case 4:
    FUN_006c5d40(uVar3,pcVar2,"%s = FILTER_NEAREST_MIPLERP",param_1);
    return uVar3;
  case 5:
    FUN_006c5d40(uVar3,pcVar2,"%s = FILTER_BILERP_MIPNEAREST",param_1);
  }
  return uVar3;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a7db48;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a7db50;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_00703c80(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_ECX;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c94e3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7db5c;
  uVar3 = 0;
  local_4 = 1;
  if (*(short *)((int)in_ECX + 0x26) != 0) {
    do {
      puVar1 = *(undefined4 **)(in_ECX[8] + uVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1,uVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)((int)in_ECX + 0x26));
  }
  if (in_ECX[0xb] != 0) {
    uVar2 = 0;
    if (*(short *)(in_ECX[0xb] + 10) != 0) {
      do {
        puVar1 = *(undefined4 **)(*(int *)(in_ECX[0xb] + 4) + uVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(in_ECX[0xb] + 10));
    }
    if ((undefined4 *)in_ECX[0xb] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)in_ECX[0xb])(1);
    }
  }
  in_ECX[7] = &PTR__scalar_deleting_destructor__00a7db48;
  FUN_00401f20(in_ECX[8]);
  local_4 = 0xffffffff;
  FUN_006ffd70();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00703d70(int param_1)

{
  int *piVar1;
  int in_ECX;
  uint uVar2;
  
  if (param_1 == 0) {
    uVar2 = 1;
    if (1 < *(ushort *)(in_ECX + 0x26)) {
      piVar1 = *(int **)(in_ECX + 0x20);
      do {
        piVar1 = piVar1 + 1;
        if (*piVar1 != 0) goto LAB_00703da9;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(in_ECX + 0x26));
    }
    *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) & 0xfffe;
    return;
  }
LAB_00703da9:
  *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) | 1;
  return;
}



void FUN_00703dc0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_2;
  uVar3 = param_1 + 6;
  if (uVar3 < *(ushort *)(in_ECX + 0x26)) {
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x20) + uVar3 * 4);
    if (param_2 == 0) {
      if (puVar1 != (undefined4 *)0x0) {
        *(ushort *)(in_ECX + 0x18) =
             ((*(ushort *)(in_ECX + 0x18) >> 4 & 0xff) - 1) * 0x10 |
             *(ushort *)(in_ECX + 0x18) & 0xf00f;
      }
    }
    else if (puVar1 == (undefined4 *)0x0) {
      *(ushort *)(in_ECX + 0x18) =
           ((*(ushort *)(in_ECX + 0x18) >> 4 & 0xff) + 1) * 0x10 |
           *(ushort *)(in_ECX + 0x18) & 0xf00f;
    }
    FUN_0042bb90(uVar3,&param_2);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
      FUN_00703d70(iVar2);
      return;
    }
  }
  else {
    if (*(ushort *)(in_ECX + 0x24) <= uVar3) {
      FUN_004e4a10(*(ushort *)(in_ECX + 0x2a) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_2);
    iVar2 = param_2;
    if (param_2 != 0) {
      *(ushort *)(in_ECX + 0x18) =
           ((*(ushort *)(in_ECX + 0x18) >> 4 & 0xff) + 1) * 0x10 |
           *(ushort *)(in_ECX + 0x18) & 0xf00f;
    }
  }
  FUN_00703d70(iVar2);
  return;
}



void FUN_00703ec0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int in_ECX;
  uint local_8;
  
  thunk_FUN_00700050(param_1);
  uVar2 = FUN_007124d0();
  *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) & 0xf00f;
  local_8 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = FUN_007124d0();
      if (iVar3 != 0) {
        iVar3 = *(int *)(in_ECX + 0x20);
        puVar4 = (undefined4 *)FUN_007124a0();
        iVar3 = *(int *)(iVar3 + local_8 * 4);
        puVar1 = *(undefined4 **)(iVar3 + 8);
        if (puVar1 != puVar4) {
          if (((puVar1 != (undefined4 *)0x0) &&
              (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
             (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          *(undefined4 **)(iVar3 + 8) = puVar4;
          if (puVar4 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar4 + 1);
          }
        }
        if (5 < local_8) {
          *(ushort *)(in_ECX + 0x18) =
               ((*(ushort *)(in_ECX + 0x18) >> 4 & 0xff) + 1) * 0x10 |
               *(ushort *)(in_ECX + 0x18) & 0xf00f;
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar2);
  }
  if (0x5000010 < *(uint *)(param_1 + 0xd8)) {
    uVar2 = FUN_007124d0();
    local_8 = 0;
    if (uVar2 != 0) {
      do {
        iVar3 = FUN_007124d0();
        if (iVar3 != 0) {
          iVar3 = *(int *)(*(int *)(in_ECX + 0x2c) + 4);
          puVar4 = (undefined4 *)FUN_007124a0();
          iVar3 = *(int *)(iVar3 + local_8 * 4);
          puVar1 = *(undefined4 **)(iVar3 + 8);
          if (puVar1 != puVar4) {
            if (((puVar1 != (undefined4 *)0x0) &&
                (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
               (puVar1 != (undefined4 *)0x0)) {
              (**(code **)*puVar1)(1);
            }
            *(undefined4 **)(iVar3 + 8) = puVar4;
            if (puVar4 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar4 + 1);
            }
          }
        }
        local_8 = local_8 + 1;
      } while (local_8 < uVar2);
    }
  }
  return;
}



undefined4 FUN_00704030(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  
  uVar2 = thunk_FUN_007000f0(param_1);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  uVar4 = 0;
  if (*(short *)(in_ECX + 0x26) != 0) {
    do {
      iVar3 = *(int *)(*(int *)(in_ECX + 0x20) + uVar4 * 4);
      if ((iVar3 != 0) && (piVar1 = *(int **)(iVar3 + 8), piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x24))(param_1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(in_ECX + 0x26));
  }
  iVar3 = *(int *)(in_ECX + 0x2c);
  if ((iVar3 != 0) && (uVar4 = 0, *(short *)(iVar3 + 10) != 0)) {
    do {
      iVar3 = *(int *)(*(int *)(iVar3 + 4) + uVar4 * 4);
      if ((iVar3 != 0) && (piVar1 = *(int **)(iVar3 + 8), piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x24))(param_1);
      }
      iVar3 = *(int *)(in_ECX + 0x2c);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(iVar3 + 10));
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



void FUN_007040c0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b3f974;
  if (DAT_00b3f974 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b3f974 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b3f974 = (undefined4 *)0x0;
  }
  return;
}



void FUN_00704100(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)(in_ECX + 1) = 0;
  *in_ECX = &PTR_FUN_00a7dbb4;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *(ushort *)(in_ECX + 1) = *(ushort *)(in_ECX + 1) & 0xf100 | 0x3100;
  return;
}



void FUN_00704130(int param_1,ushort param_2,char param_3,byte param_4,undefined4 param_5)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7dbb4;
  *(undefined2 *)(in_ECX + 1) = 0;
  in_ECX[2] = param_1;
  if (param_1 != 0) {
    InterlockedIncrement((LONG *)(param_1 + 4));
  }
  in_ECX[3] = param_5;
  *(ushort *)(in_ECX + 1) =
       (ushort)(byte)(param_3 << 4 | param_4) << 8 | *(ushort *)(in_ECX + 1) & 0xc000 | param_2;
  return;
}



void FUN_00704190(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
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
  puStack_8 = &LAB_009c9516;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7dbb4;
  *(undefined2 *)(in_ECX + 1) = *(undefined2 *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8);
  in_ECX[2] = iVar3;
  if (iVar3 != 0) {
    InterlockedIncrement((LONG *)(iVar3 + 4));
  }
  local_4 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    in_ECX[3] = 0;
  }
  else {
    iVar3 = FUN_00401f00(0x48,uVar2);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (iVar3 == 0) {
      in_ECX[3] = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xc);
      local_24 = *(undefined4 *)(iVar3 + 0x14);
      local_20 = *(undefined4 *)(iVar3 + 0x18);
      local_1c = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc);
      puVar1 = *(undefined4 **)(param_1 + 0xc);
      local_18 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10);
      local_14 = *puVar1;
      local_10 = puVar1[1];
      uVar4 = FUN_0072ff40(&local_14,puVar1[2],&local_1c,&local_24,*(undefined4 *)(iVar3 + 0x44));
      in_ECX[3] = uVar4;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00704290(int param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  if (*(int **)(in_ECX + 8) == (int *)0x0) {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
  }
  else {
    cVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x2c))(*(undefined4 *)(param_1 + 8));
    if (cVar2 == '\0') {
      return 0;
    }
  }
  if (*(short *)(in_ECX + 4) != *(short *)(param_1 + 4)) {
    return 0;
  }
  iVar1 = *(int *)(in_ECX + 0xc);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      cVar2 = FUN_0072fd80(*(int *)(param_1 + 0xc));
      if (cVar2 == '\0') {
        return 1;
      }
      return 0;
    }
    if (iVar1 != 0) goto LAB_007042ef;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    return 0;
  }
  if (iVar1 == 0) {
    return 1;
  }
LAB_007042ef:
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  return 1;
}



ushort FUN_00704300(int param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  int in_ECX;
  
  uVar3 = FUN_00704290(param_1);
  if ((char)uVar3 != '\0') {
    fVar1 = *(float *)(in_ECX + 0x10);
    fVar2 = *(float *)(param_1 + 0x10);
    uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 == fVar1) {
      fVar1 = *(float *)(in_ECX + 0x14);
      fVar2 = *(float *)(param_1 + 0x14);
      uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
              (ushort)(fVar2 == fVar1) << 0xe;
      if (fVar2 == fVar1) {
        fVar1 = *(float *)(in_ECX + 0x18);
        fVar2 = *(float *)(param_1 + 0x18);
        uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                (ushort)(fVar2 == fVar1) << 0xe;
        if (fVar2 == fVar1) {
          fVar1 = *(float *)(in_ECX + 0x1c);
          fVar2 = *(float *)(param_1 + 0x1c);
          uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                  (ushort)(fVar2 == fVar1) << 0xe;
          if (fVar2 == fVar1) {
            fVar1 = *(float *)(in_ECX + 0x20);
            fVar2 = *(float *)(param_1 + 0x20);
            uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                    (ushort)(fVar2 == fVar1) << 0xe;
            if (fVar2 == fVar1) {
              fVar1 = *(float *)(in_ECX + 0x24);
              fVar2 = *(float *)(param_1 + 0x24);
              uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                      (ushort)(fVar2 == fVar1) << 0xe;
              if (fVar2 == fVar1) {
                return CONCAT11((char)(uVar3 >> 8),1);
              }
            }
          }
        }
      }
    }
  }
  return uVar3 & 0xff00;
}



undefined4 FUN_00704380(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = FUN_00704290(param_1);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  return CONCAT31((int3)((uint)*(int *)(in_ECX + 0x10) >> 8),
                  *(int *)(in_ECX + 0x10) == *(int *)(param_1 + 0x10));
}



void FUN_007043b0(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int *piVar3;
  ushort uVar4;
  int *unaff_FS_OFFSET;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9548;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006ffd30(uVar1);
  *in_ECX = &PTR_FUN_00a7db5c;
  *(undefined2 *)(in_ECX + 6) = 0;
  *(undefined2 *)(in_ECX + 9) = 7;
  local_4 = 0;
  in_ECX[7] = &PTR__scalar_deleting_destructor__00a7db48;
  *(undefined2 *)((int)in_ECX + 0x2a) = 1;
  *(undefined2 *)((int)in_ECX + 0x26) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  uVar2 = FUN_00401f00(0x1c);
  in_ECX[8] = uVar2;
  in_ECX[0xb] = 0;
  local_10 = 0;
  FUN_0042bb90(0,&local_10);
  local_10 = 0;
  FUN_0042bb90(1,&local_10);
  local_10 = 0;
  FUN_0042bb90(2,&local_10);
  local_10 = 0;
  FUN_0042bb90(3,&local_10);
  local_10 = 0;
  FUN_0042bb90(4,&local_10);
  local_10 = 0;
  FUN_0042bb90(5,&local_10);
  local_10 = 0;
  FUN_0042bb90(6,&local_10);
  *(ushort *)(in_ECX + 6) = *(ushort *)(in_ECX + 6) & 0xf00f;
  uVar1 = 1;
  if (1 < *(ushort *)((int)in_ECX + 0x26)) {
    piVar3 = (int *)in_ECX[8];
    do {
      piVar3 = piVar3 + 1;
      if (*piVar3 != 0) {
        uVar4 = *(ushort *)(in_ECX + 6) | 1;
        goto LAB_007044dc;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)((int)in_ECX + 0x26));
  }
  uVar4 = *(ushort *)(in_ECX + 6) & 0xfffe;
LAB_007044dc:
  *(ushort *)(in_ECX + 6) = uVar4;
  *(ushort *)(in_ECX + 6) = uVar4 & 0xfff5 | 4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00704510(byte param_1)

{
  FUN_00703c80();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00704530(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *piVar5;
  ushort uVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c958b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006ffd30(uVar1);
  *in_ECX = &PTR_FUN_00a7db5c;
  *(undefined2 *)(in_ECX + 6) = 0;
  *(undefined2 *)(in_ECX + 9) = 7;
  local_4 = 0;
  in_ECX[7] = &PTR__scalar_deleting_destructor__00a7db48;
  *(undefined2 *)((int)in_ECX + 0x2a) = 1;
  *(undefined2 *)((int)in_ECX + 0x26) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  uVar2 = FUN_00401f00(0x1c);
  in_ECX[8] = uVar2;
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[0xb] = 0;
  if (param_2 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)FUN_00701e00(param_1,&DAT_00b256d0,1);
  }
  else {
    puVar3 = (undefined4 *)FUN_00701f00(param_2);
    param_2 = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
    local_4._0_1_ = 2;
    param_1 = (undefined4 *)(**(code **)(*DAT_00b3fac8 + 4))(param_1,0);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if (LVar4 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  puVar3 = (undefined4 *)FUN_00401f00(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_00a7dbb4;
    *(undefined2 *)(puVar3 + 1) = 0;
    puVar3[2] = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement((LONG *)((int)param_1 + 4));
    }
    puVar3[3] = 0;
    *(ushort *)(puVar3 + 1) = *(ushort *)(puVar3 + 1) & 0xf100 | 0x3100;
  }
  param_1 = puVar3;
  if (*(short *)(in_ECX + 9) == 0) {
    FUN_004e4a10(*(undefined2 *)((int)in_ECX + 0x2a));
  }
  FUN_0042bb90(0,&param_1);
  param_1 = (undefined4 *)0x0;
  if (*(ushort *)(in_ECX + 9) < 2) {
    FUN_004e4a10(*(ushort *)((int)in_ECX + 0x2a) + 1);
  }
  FUN_0042bb90(1,&param_1);
  param_1 = (undefined4 *)0x0;
  if (*(ushort *)(in_ECX + 9) < 3) {
    FUN_004e4a10(*(ushort *)((int)in_ECX + 0x2a) + 2);
  }
  FUN_0042bb90(2,&param_1);
  param_1 = (undefined4 *)0x0;
  if (*(ushort *)(in_ECX + 9) < 4) {
    FUN_004e4a10(*(ushort *)((int)in_ECX + 0x2a) + 3);
  }
  FUN_0042bb90(3,&param_1);
  param_1 = (undefined4 *)0x0;
  if (*(ushort *)(in_ECX + 9) < 5) {
    FUN_004e4a10(*(ushort *)((int)in_ECX + 0x2a) + 4);
  }
  FUN_0042bb90(4,&param_1);
  param_1 = (undefined4 *)0x0;
  if (*(ushort *)(in_ECX + 9) < 6) {
    FUN_004e4a10(*(ushort *)((int)in_ECX + 0x2a) + 5);
  }
  FUN_0042bb90(5,&param_1);
  param_1 = (undefined4 *)0x0;
  if (*(ushort *)(in_ECX + 9) < 7) {
    FUN_004e4a10(*(ushort *)((int)in_ECX + 0x2a) + 6);
  }
  FUN_0042bb90(6,&param_1);
  *(ushort *)(in_ECX + 6) = *(ushort *)(in_ECX + 6) & 0xf00f;
  uVar1 = 1;
  if (1 < *(ushort *)((int)in_ECX + 0x26)) {
    piVar5 = (int *)in_ECX[8];
    do {
      piVar5 = piVar5 + 1;
      if (*piVar5 != 0) {
        uVar6 = *(ushort *)(in_ECX + 6) | 1;
        goto LAB_007047c4;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)((int)in_ECX + 0x26));
  }
  uVar6 = *(ushort *)(in_ECX + 6) & 0xfffe;
LAB_007047c4:
  *(ushort *)(in_ECX + 6) = uVar6;
  *(ushort *)(in_ECX + 6) = uVar6 & 0xfff5 | 4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00704800(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int *piVar4;
  ushort uVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c95c3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006ffd30(uVar1);
  *in_ECX = &PTR_FUN_00a7db5c;
  *(undefined2 *)(in_ECX + 6) = 0;
  *(undefined2 *)(in_ECX + 9) = 7;
  local_4 = 0;
  in_ECX[7] = &PTR__scalar_deleting_destructor__00a7db48;
  *(undefined2 *)((int)in_ECX + 0x2a) = 1;
  *(undefined2 *)((int)in_ECX + 0x26) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  uVar2 = FUN_00401f00(0x1c);
  in_ECX[8] = uVar2;
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[0xb] = 0;
  param_1 = (undefined4 *)FUN_00701fc0(param_1,&DAT_00b256d0);
  puVar3 = (undefined4 *)FUN_00401f00(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_00a7dbb4;
    *(undefined2 *)(puVar3 + 1) = 0;
    puVar3[2] = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement((LONG *)((int)param_1 + 4));
    }
    puVar3[3] = 0;
    *(ushort *)(puVar3 + 1) = *(ushort *)(puVar3 + 1) & 0xf100 | 0x3100;
  }
  param_1 = puVar3;
  if (*(short *)(in_ECX + 9) == 0) {
    FUN_004e4a10(*(undefined2 *)((int)in_ECX + 0x2a));
  }
  FUN_0042bb90(0,&param_1);
  param_1 = (undefined4 *)0x0;
  if (*(ushort *)(in_ECX + 9) < 2) {
    FUN_004e4a10(*(ushort *)((int)in_ECX + 0x2a) + 1);
  }
  FUN_0042bb90(1,&param_1);
  param_1 = (undefined4 *)0x0;
  if (*(ushort *)(in_ECX + 9) < 3) {
    FUN_004e4a10(*(ushort *)((int)in_ECX + 0x2a) + 2);
  }
  FUN_0042bb90(2,&param_1);
  param_1 = (undefined4 *)0x0;
  if (*(ushort *)(in_ECX + 9) < 4) {
    FUN_004e4a10(*(ushort *)((int)in_ECX + 0x2a) + 3);
  }
  FUN_0042bb90(3,&param_1);
  param_1 = (undefined4 *)0x0;
  if (*(ushort *)(in_ECX + 9) < 5) {
    FUN_004e4a10(*(ushort *)((int)in_ECX + 0x2a) + 4);
  }
  FUN_0042bb90(4,&param_1);
  param_1 = (undefined4 *)0x0;
  if (*(ushort *)(in_ECX + 9) < 6) {
    FUN_004e4a10(*(ushort *)((int)in_ECX + 0x2a) + 5);
  }
  FUN_0042bb90(5,&param_1);
  param_1 = (undefined4 *)0x0;
  if (*(ushort *)(in_ECX + 9) < 7) {
    FUN_004e4a10(*(ushort *)((int)in_ECX + 0x2a) + 6);
  }
  FUN_0042bb90(6,&param_1);
  *(ushort *)(in_ECX + 6) = *(ushort *)(in_ECX + 6) & 0xf00f;
  uVar1 = 1;
  if (1 < *(ushort *)((int)in_ECX + 0x26)) {
    piVar4 = (int *)in_ECX[8];
    do {
      piVar4 = piVar4 + 1;
      if (*piVar4 != 0) {
        uVar5 = *(ushort *)(in_ECX + 6) | 1;
        goto LAB_00704a24;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)((int)in_ECX + 0x26));
  }
  uVar5 = *(ushort *)(in_ECX + 6) & 0xfffe;
LAB_00704a24:
  *(ushort *)(in_ECX + 6) = uVar5;
  *(ushort *)(in_ECX + 6) = uVar5 & 0xfff5 | 4;
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
  local_10 = FUN_00401f00(0x30,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_007043b0();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_00704ad0(uint param_1)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  int *unaff_FS_OFFSET;
  char cStack_29;
  uint uStack_28;
  int *piStack_24;
  uint local_20;
  int local_1c;
  ushort *local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar2 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c95eb;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c = in_ECX;
  FUN_00700ac0(param_1);
  iVar6 = *(int *)(iVar2 + 0x21c);
  if (*(uint *)(iVar2 + 0xd8) < 0x14010002) {
    param_1 = 4;
    (**(code **)(iVar6 + 4))(iVar6,&local_20,4);
    local_18 = (ushort *)(in_ECX + 0x18);
    *local_18 = *(ushort *)(in_ECX + 0x18) & 0xfff1 | (short)local_20 * 2;
  }
  else {
    puVar1 = (ushort *)(in_ECX + 0x18);
    param_1 = 2;
    local_18 = puVar1;
    (**(code **)(iVar6 + 4))(iVar6,puVar1,2,&param_1,1,uVar3);
    *puVar1 = *puVar1 & 0xf00f;
  }
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&uStack_28,4,&param_1,1);
  FUN_004e4a10(uStack_28);
  uVar3 = uStack_28;
  if (*(uint *)(iVar2 + 0xd8) < 0x303000d) {
    uVar3 = uStack_28 + 1;
  }
  FUN_00712bc0(uVar3);
  local_20 = 0;
  iVar6 = in_ECX;
  if (uStack_28 != 0) {
    do {
      uVar3 = local_20;
      iVar6 = *(int *)(iVar2 + 0x21c);
      piStack_24 = (int *)0x0;
      if (*(uint *)(iVar2 + 0xd8) < 0x4010000) {
        uStack_14 = 4;
        (**(code **)(iVar6 + 4))(iVar6,&piStack_24,4);
        param_1 = CONCAT31(param_1._1_3_,piStack_24 != (int *)0x0);
      }
      else {
        uStack_14 = 1;
        (**(code **)(iVar6 + 4))(iVar6,&param_1,1,&uStack_14,1);
      }
      if (*(uint *)(iVar2 + 0xd8) < 0x303000d) {
        if (4 < local_20) {
          FUN_00712bc0(0);
          uVar3 = local_20 + 1;
        }
LAB_00704c5c:
        FUN_00712bc0(param_1 & 0xff);
        if ((char)param_1 != '\0') {
          piStack_24 = (int *)FUN_00401f00(0x10);
          if (piStack_24 == (int *)0x0) {
            piStack_24 = (int *)0x0;
          }
          else {
            *(undefined2 *)(piStack_24 + 1) = 0;
            *piStack_24 = (int)&PTR_FUN_00a7dbb4;
            piStack_24[2] = 0;
            piStack_24[3] = 0;
            *(ushort *)(piStack_24 + 1) = *(ushort *)(piStack_24 + 1) & 0xf100 | 0x3100;
          }
          (**(code **)(*piStack_24 + 4))(iVar2);
        }
        if (*(ushort *)(in_ECX + 0x24) <= uVar3) {
          FUN_004e4a10(*(ushort *)(in_ECX + 0x2a) + uVar3);
        }
        if (uVar3 < *(ushort *)(in_ECX + 0x26)) {
          if (piStack_24 == (int *)0x0) {
            if (*(int *)(*(int *)(in_ECX + 0x20) + uVar3 * 4) != 0) {
              *(short *)(in_ECX + 0x28) = *(short *)(in_ECX + 0x28) + -1;
            }
          }
          else if (*(int *)(*(int *)(in_ECX + 0x20) + uVar3 * 4) == 0) {
            *(short *)(in_ECX + 0x28) = *(short *)(in_ECX + 0x28) + 1;
          }
        }
        else {
          *(short *)(in_ECX + 0x26) = (short)uVar3 + 1;
          if (piStack_24 != (int *)0x0) {
            *(short *)(in_ECX + 0x28) = *(short *)(in_ECX + 0x28) + 1;
          }
        }
        *(int **)(*(int *)(in_ECX + 0x20) + uVar3 * 4) = piStack_24;
      }
      else {
        if (local_20 != 5) goto LAB_00704c5c;
        FUN_00712bc0(param_1 & 0xff);
        if ((char)param_1 != '\0') {
          piStack_24 = (int *)FUN_00401f00(0x28);
          if (piStack_24 == (int *)0x0) {
            piStack_24 = (int *)0x0;
          }
          else {
            *(undefined2 *)(piStack_24 + 1) = 0;
            piStack_24[2] = 0;
            piStack_24[4] = 0x3f800000;
            piStack_24[5] = 0;
            piStack_24[6] = 0x3f000000;
            piStack_24[3] = 0;
            piStack_24[9] = 0x3f000000;
            *(ushort *)(piStack_24 + 1) = *(ushort *)(piStack_24 + 1) & 0xf100 | 0x3100;
            *piStack_24 = (int)&PTR_FUN_00a7dbc4;
            piStack_24[7] = 0;
            piStack_24[8] = 0;
          }
          (**(code **)(*piStack_24 + 4))(iVar2);
        }
        if (*(ushort *)(in_ECX + 0x24) < 6) {
          FUN_004e4a10(*(ushort *)(in_ECX + 0x2a) + 5);
        }
        FUN_0042bb90(5,&piStack_24);
      }
      local_20 = local_20 + 1;
      iVar6 = local_1c;
    } while (local_20 < uStack_28);
  }
  if (0x5000010 < *(uint *)(iVar2 + 0xd8)) {
    param_1 = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&uStack_28,4,&param_1,1);
    FUN_00712bc0(uStack_28);
    if (uStack_28 != 0) {
      puVar4 = (undefined4 *)FUN_00401f00(0x10);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = &PTR__scalar_deleting_destructor__00a7db50;
        *(undefined2 *)(puVar4 + 2) = 0;
        *(undefined2 *)((int)puVar4 + 0xe) = 1;
        *(undefined2 *)((int)puVar4 + 10) = 0;
        *(undefined2 *)(puVar4 + 3) = 0;
        puVar4[1] = 0;
      }
      *(undefined4 **)(iVar6 + 0x2c) = puVar4;
      uVar3 = 0;
      uStack_4 = 0xffffffff;
      iVar6 = local_1c;
      if (uStack_28 != 0) {
        do {
          piVar5 = (int *)0x0;
          uStack_10 = 1;
          (**(code **)(*(int *)(iVar2 + 0x21c) + 4))
                    (*(int *)(iVar2 + 0x21c),&cStack_29,1,&uStack_10,1);
          FUN_00712bc0(cStack_29);
          if (cStack_29 != '\0') {
            piVar5 = (int *)FUN_00401f00(0x14);
            if (piVar5 == (int *)0x0) {
              piVar5 = (int *)0x0;
            }
            else {
              *(undefined2 *)(piVar5 + 1) = 0;
              piVar5[2] = 0;
              piVar5[3] = 0;
              *(ushort *)(piVar5 + 1) = *(ushort *)(piVar5 + 1) & 0xf100 | 0x3100;
              *piVar5 = (int)&PTR_FUN_00a7dbd4;
              piVar5[4] = 0;
            }
            (**(code **)(*piVar5 + 4))(iVar2);
          }
          iVar6 = *(int *)(local_1c + 0x2c);
          if (*(ushort *)(iVar6 + 8) <= uVar3) {
            FUN_004e4a10(*(ushort *)(iVar6 + 0xe) + uVar3);
          }
          if (uVar3 < *(ushort *)(iVar6 + 10)) {
            if (piVar5 == (int *)0x0) {
              if (*(int *)(*(int *)(iVar6 + 4) + uVar3 * 4) != 0) {
                *(short *)(iVar6 + 0xc) = *(short *)(iVar6 + 0xc) + -1;
              }
            }
            else if (*(int *)(*(int *)(iVar6 + 4) + uVar3 * 4) == 0) {
              *(short *)(iVar6 + 0xc) = *(short *)(iVar6 + 0xc) + 1;
            }
          }
          else {
            *(short *)(iVar6 + 10) = (short)uVar3 + 1;
            if (piVar5 != (int *)0x0) {
              *(short *)(iVar6 + 0xc) = *(short *)(iVar6 + 0xc) + 1;
            }
          }
          *(int **)(*(int *)(iVar6 + 4) + uVar3 * 4) = piVar5;
          uVar3 = uVar3 + 1;
          iVar6 = local_1c;
        } while (uVar3 < uStack_28);
      }
    }
  }
  uVar3 = 1;
  if (1 < *(ushort *)(iVar6 + 0x26)) {
    piVar5 = *(int **)(iVar6 + 0x20);
    do {
      piVar5 = piVar5 + 1;
      if (*piVar5 != 0) {
        *local_18 = *local_18 | 1;
        goto LAB_00704f7b;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(iVar6 + 0x26));
  }
  *local_18 = *local_18 & 0xfffe;
LAB_00704f7b:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00704fa0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uStack_8;
  uint local_4;
  
  iVar2 = param_1;
  thunk_FUN_00700460(param_1);
  if (*(uint *)(iVar2 + 0xd8) < 0x14010002) {
    local_4 = *(byte *)(in_ECX + 0x18) >> 1 & 7;
    param_1 = 4;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),&local_4,4);
  }
  else {
    param_1 = 2;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 0x18,2,&param_1,1);
  }
  uStack_8 = (uint)*(ushort *)(in_ECX + 0x26);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),&uStack_8,4,&param_1,1);
  uVar3 = 0;
  if (uStack_8 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x20) + uVar3 * 4);
      param_1 = CONCAT31(param_1._1_3_,piVar1 != (int *)0x0);
      local_4 = 1;
      (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),&param_1,1,&local_4,1);
      if ((char)param_1 != '\0') {
        (**(code **)(*piVar1 + 8))(iVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uStack_8);
  }
  uVar3 = 0;
  param_1 = 4;
  if (*(int *)(in_ECX + 0x2c) == 0) {
    uStack_8 = 0;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),&uStack_8,4,&param_1,1);
  }
  else {
    uStack_8 = (uint)*(ushort *)(*(int *)(in_ECX + 0x2c) + 10);
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220));
    if (uStack_8 != 0) {
      do {
        piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0x2c) + 4) + uVar3 * 4);
        param_1 = CONCAT31(param_1._1_3_,piVar1 != (int *)0x0);
        local_4 = 1;
        (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),&param_1,1,&local_4,1);
        if ((char)param_1 != '\0') {
          (**(code **)(*piVar1 + 8))(iVar2);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uStack_8);
      return;
    }
  }
  return;
}



undefined4 FUN_00705150(int param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  
  cVar2 = thunk_FUN_00700200(param_1);
  if ((cVar2 == '\0') || (*(short *)(in_ECX + 0x18) != *(short *)(param_1 + 0x18))) {
    return 0;
  }
  uVar3 = (uint)*(ushort *)(in_ECX + 0x26);
  if (uVar3 != *(ushort *)(param_1 + 0x26)) {
    return 0;
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x20) + uVar4 * 4);
      if (*(int *)(*(int *)(in_ECX + 0x20) + uVar4 * 4) == 0) {
        if (iVar1 != 0) {
          return 0;
        }
      }
      else {
        if (iVar1 == 0) {
          return 0;
        }
        if (uVar4 == 5) {
          cVar2 = FUN_00704300(iVar1);
        }
        else {
          cVar2 = FUN_00704290(iVar1);
        }
        if (cVar2 == '\0') {
          return 0;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (*(int *)(in_ECX + 0x2c) == 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      return 0;
    }
  }
  else {
    if ((*(int *)(param_1 + 0x2c) == 0) ||
       (uVar3 = (uint)*(ushort *)(*(int *)(in_ECX + 0x2c) + 10),
       uVar3 != *(ushort *)(*(int *)(param_1 + 0x2c) + 10))) {
      return 0;
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 4) + uVar4 * 4);
        if (*(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + 4) + uVar4 * 4) == 0) {
          if (iVar1 != 0) {
            return 0;
          }
        }
        else {
          if (iVar1 == 0) {
            return 0;
          }
          cVar2 = FUN_00704380(iVar1);
          if (cVar2 == '\0') {
            return 0;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
  }
  return 1;
}



void FUN_00705240(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(0x30,uVar2);
  local_4 = 0;
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_007043b0();
  }
  puVar1 = DAT_00b3f974;
  local_4 = 0xffffffff;
  if (DAT_00b3f974 != puVar4) {
    if (DAT_00b3f974 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(DAT_00b3f974 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    DAT_00b3f974 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007052f0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int local_8;
  undefined4 uStack_4;
  
  iVar1 = param_1;
  FUN_00712a20();
  iVar2 = *(int *)(iVar1 + 0x21c);
  if (*(uint *)(iVar1 + 0xd8) < 0x14010002) {
    param_1 = 4;
    (**(code **)(iVar2 + 4))(iVar2,&local_8,4,&param_1);
    *(ushort *)(in_ECX + 4) = *(ushort *)(in_ECX + 4) & 0xcfff | (ushort)(local_8 << 0xc);
    param_1 = 4;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&local_8,4,&param_1,1);
    param_1 = 4;
    *(ushort *)(in_ECX + 4) = *(ushort *)(in_ECX + 4) & 0xf0ff | (ushort)(byte)local_8 << 8;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&uStack_4,4,&param_1,1);
    *(ushort *)(in_ECX + 4) = *(ushort *)(in_ECX + 4) & 0xff00 | (ushort)uStack_4;
  }
  else {
    param_1 = 2;
    (**(code **)(iVar2 + 4))(iVar2,in_ECX + 4,2,&param_1,1);
  }
  if (*(uint *)(iVar1 + 0xd8) < 0xa030004) {
    uStack_4 = 2;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,2,&uStack_4,1);
    uStack_4 = 2;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,2,&uStack_4,1);
  }
  if (*(uint *)(iVar1 + 0xd8) < 0x4010010) {
    uStack_4 = 2;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,2,&uStack_4,1);
  }
  if (0xa000109 < *(uint *)(iVar1 + 0xd8)) {
    *(undefined4 *)(in_ECX + 0xc) = 0;
    uStack_4 = 1;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,1,&uStack_4,1);
    if ((char)param_1 == '\x01') {
      iVar2 = FUN_00401f00(0x48);
      if (iVar2 != 0) {
        uVar3 = FUN_00703a30();
        *(undefined4 *)(in_ECX + 0xc) = uVar3;
        FUN_0072ff90(iVar1);
        return;
      }
      *(undefined4 *)(in_ECX + 0xc) = 0;
      FUN_0072ff90(iVar1);
    }
  }
  return;
}



void FUN_007054d0(int *param_1)

{
  int in_ECX;
  uint uStack_10;
  uint uStack_c;
  uint auStack_8 [2];
  
  (**(code **)(*param_1 + 0x2c))(*(undefined4 *)(in_ECX + 8));
  if ((uint)param_1[0x36] < 0x14010002) {
    uStack_10 = *(ushort *)(in_ECX + 4) >> 0xc & 3;
    (**(code **)(param_1[0x88] + 8))(param_1[0x88],&uStack_10,4,&stack0xffffffec);
    uStack_c = *(byte *)(in_ECX + 5) & 0xf;
    (**(code **)(param_1[0x88] + 8))(param_1[0x88],&uStack_c,4,&stack0xffffffec,1);
    auStack_8[0] = (uint)*(byte *)(in_ECX + 4);
    (**(code **)(param_1[0x88] + 8))(param_1[0x88],auStack_8,4,&stack0xffffffec,1);
  }
  else {
    auStack_8[0] = 2;
    (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 4,2,auStack_8,1);
  }
  auStack_8[0] = 1;
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],&stack0x00000000,1,auStack_8,1);
  if (*(int *)(in_ECX + 0xc) != 0) {
    FUN_00730010(param_1);
  }
  return;
}



void FUN_007055f0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_007052f0(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x10,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x14,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x18,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x1c,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x20,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x24,4,&param_1,1);
  return;
}



void FUN_007056c0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_007054d0(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x10,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x14,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x18,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x1c,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x20,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x24,4,&param_1,1);
  return;
}



void FUN_00705790(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_007052f0(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x10,4,&param_1,1);
  return;
}



void FUN_00705810(byte param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7dbb4;
  FUN_00401f20(in_ECX[3]);
  puVar1 = (undefined4 *)in_ECX[2];
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



void FUN_00705860(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c963c;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  thunk_FUN_00700300(param_1,param_2);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(in_ECX + 0x18);
  uVar1 = *(ushort *)(in_ECX + 0x26);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      if (*(int *)(uVar6 * 4 + *(int *)(in_ECX + 0x20)) != 0) {
        if (uVar6 == 5) {
          puVar5 = (undefined4 *)FUN_00401f00(0x28,uVar4);
          local_4 = 0;
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            iVar2 = *(int *)(*(int *)(in_ECX + 0x20) + 0x14);
            local_10 = puVar5;
            FUN_00704190(iVar2);
            *puVar5 = &PTR_FUN_00a7dbc4;
            puVar5[4] = *(undefined4 *)(iVar2 + 0x10);
            puVar5[5] = *(undefined4 *)(iVar2 + 0x14);
            puVar5[6] = *(undefined4 *)(iVar2 + 0x18);
            puVar5[7] = *(undefined4 *)(iVar2 + 0x1c);
            puVar5[8] = *(undefined4 *)(iVar2 + 0x20);
            puVar5[9] = *(undefined4 *)(iVar2 + 0x24);
          }
          local_4 = 0xffffffff;
          local_10 = puVar5;
          if (*(ushort *)(param_1 + 0x24) < 6) {
            FUN_004e4a10(*(ushort *)(param_1 + 0x2a) + 5);
          }
          uVar7 = 5;
        }
        else {
          local_10 = (undefined4 *)FUN_00401f00(0x10,uVar4);
          local_4 = 1;
          if (local_10 == (undefined4 *)0x0) {
            local_10 = (undefined4 *)0x0;
          }
          else {
            local_10 = (undefined4 *)
                       FUN_00704190(*(undefined4 *)(*(int *)(in_ECX + 0x20) + uVar6 * 4));
          }
          local_4 = 0xffffffff;
          uVar7 = uVar6;
          if (*(ushort *)(param_1 + 0x24) <= uVar6) {
            FUN_004e4a10(*(ushort *)(param_1 + 0x2a) + uVar6);
          }
        }
        FUN_0042bb90(uVar7,&local_10);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  if (*(int *)(in_ECX + 0x2c) != 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      puVar5 = (undefined4 *)FUN_00401f00(0x10,uVar4);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = &PTR__scalar_deleting_destructor__00a7db50;
        *(undefined2 *)(puVar5 + 2) = 0;
        *(undefined2 *)((int)puVar5 + 0xe) = 1;
        *(undefined2 *)((int)puVar5 + 10) = 0;
        *(undefined2 *)(puVar5 + 3) = 0;
        puVar5[1] = 0;
      }
      local_4 = 0xffffffff;
      *(undefined4 **)(param_1 + 0x2c) = puVar5;
    }
    uVar6 = (uint)*(ushort *)(*(int *)(in_ECX + 0x2c) + 10);
    uVar7 = 0;
    if (uVar6 != 0) {
      do {
        iVar2 = uVar7 * 4;
        if (*(int *)(iVar2 + *(int *)(*(int *)(in_ECX + 0x2c) + 4)) != 0) {
          puVar5 = (undefined4 *)FUN_00401f00(0x14,uVar4);
          local_4 = 3;
          local_10 = puVar5;
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + 4) + iVar2);
            FUN_00704190(iVar3);
            *puVar5 = &PTR_FUN_00a7dbd4;
            puVar5[4] = *(undefined4 *)(iVar3 + 0x10);
          }
          iVar3 = *(int *)(param_1 + 0x2c);
          local_4 = 0xffffffff;
          if (*(ushort *)(iVar3 + 8) <= uVar7) {
            FUN_004e4a10(*(ushort *)(iVar3 + 0xe) + uVar7);
          }
          if (uVar7 < *(ushort *)(iVar3 + 10)) {
            if (puVar5 == (undefined4 *)0x0) {
              if (*(int *)(iVar2 + *(int *)(iVar3 + 4)) != 0) {
                *(short *)(iVar3 + 0xc) = *(short *)(iVar3 + 0xc) + -1;
              }
            }
            else if (*(int *)(iVar2 + *(int *)(iVar3 + 4)) == 0) {
              *(short *)(iVar3 + 0xc) = *(short *)(iVar3 + 0xc) + 1;
            }
          }
          else {
            *(short *)(iVar3 + 10) = (short)uVar7 + 1;
            if (puVar5 != (undefined4 *)0x0) {
              *(short *)(iVar3 + 0xc) = *(short *)(iVar3 + 0xc) + 1;
            }
          }
          *(undefined4 **)(iVar2 + *(int *)(iVar3 + 4)) = puVar5;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_007063b0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (0x1a - (int)(param_1 + 1));
  uVar3 = FUN_00401f00(pcVar2);
  if (param_2 == 0) {
    FUN_006c5d40(uVar3,pcVar2,"%s = SOURCE_IGNORE",param_1);
  }
  else {
    if (param_2 == 1) {
      FUN_006c5d40(uVar3,pcVar2,"%s = SOURCE_EMISSIVE",param_1);
      return uVar3;
    }
    if (param_2 == 2) {
      FUN_006c5d40(uVar3,pcVar2,"%s = SOURCE_AMB_DIFF",param_1);
      return uVar3;
    }
  }
  return uVar3;
}



undefined4 FUN_00706430(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (0x1a - (int)(param_1 + 1));
  uVar3 = FUN_00401f00(pcVar2);
  if (param_2 == 0) {
    FUN_006c5d40(uVar3,pcVar2,"%s = LIGHTING_E",param_1);
  }
  else if (param_2 == 1) {
    FUN_006c5d40(uVar3,pcVar2,"%s = LIGHTING_E_A_D",param_1);
    return uVar3;
  }
  return uVar3;
}



undefined4 * FUN_007064a0(undefined4 param_1)

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
    *puVar2 = &PTR_FUN_00a2fd04;
    *(undefined2 *)(puVar2 + 6) = 8;
  }
  local_4 = 0xffffffff;
  thunk_FUN_00700300(puVar2,param_1);
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(in_ECX + 0x18);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_00706530(void)

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
    FUN_006ffd30();
    *puVar2 = &PTR_FUN_00a2fd04;
    *(undefined2 *)(puVar2 + 6) = 8;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_007065a0(void)

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
  puVar3 = (undefined4 *)FUN_00401f00(0x1c,uVar2);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar3 = &PTR_FUN_00a2fd04;
    *(undefined2 *)(puVar3 + 6) = 8;
  }
  puVar1 = DAT_00b3f980;
  local_4 = 0xffffffff;
  if (DAT_00b3f980 != puVar3) {
    if (DAT_00b3f980 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(DAT_00b3f980 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    DAT_00b3f980 = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00706650(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b3f980;
  if (DAT_00b3f980 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b3f980 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b3f980 = (undefined4 *)0x0;
  }
  return;
}



void FUN_00706770(int param_1)

{
  ushort uVar1;
  int iVar2;
  int in_ECX;
  uint uStack_8;
  uint uStack_4;
  
  iVar2 = param_1;
  thunk_FUN_00700460(param_1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))
            (*(int *)(iVar2 + 0x220),(ushort *)(in_ECX + 0x18),2,&param_1,1);
  if (*(uint *)(iVar2 + 0xd8) < 0x14010002) {
    uVar1 = *(ushort *)(in_ECX + 0x18);
    uStack_8 = uVar1 >> 4 & 3;
    uStack_4 = uVar1 >> 3 & 1;
    param_1 = 4;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),&uStack_8,4,&param_1,1);
    param_1 = 4;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),&uStack_4,4,&param_1,1);
  }
  return;
}



undefined4 * FUN_00706930(undefined4 param_1)

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
    *puVar2 = &PTR_FUN_00a2fd5c;
    *(undefined2 *)(puVar2 + 6) = 0;
  }
  local_4 = 0xffffffff;
  thunk_FUN_00700300(puVar2,param_1);
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(in_ECX + 0x18);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_007069c0(void)

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
    *puVar2 = &PTR_FUN_00a2fd5c;
    *(undefined2 *)(puVar2 + 6) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_00706a40(void)

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
  puVar3 = (undefined4 *)FUN_00401f00(0x1c,uVar2);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar3 = &PTR_FUN_00a2fd5c;
    *(undefined2 *)(puVar3 + 6) = 0;
  }
  puVar1 = DAT_00b3f984;
  local_4 = 0xffffffff;
  if (DAT_00b3f984 != puVar3) {
    if (DAT_00b3f984 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(DAT_00b3f984 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    DAT_00b3f984 = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00706af0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b3f984;
  if (DAT_00b3f984 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b3f984 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b3f984 = (undefined4 *)0x0;
  }
  return;
}



undefined4 * FUN_00706c20(undefined4 param_1)

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
    *puVar2 = &PTR_FUN_00a2fdb4;
    *(undefined2 *)(puVar2 + 6) = 0xf;
  }
  local_4 = 0xffffffff;
  thunk_FUN_00700300(puVar2,param_1);
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(in_ECX + 0x18);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_00706cb0(void)

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
    FUN_006ffd30();
    *puVar2 = &PTR_FUN_00a2fdb4;
    *(undefined2 *)(puVar2 + 6) = 0xf;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_00706d20(void)

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
  puVar3 = (undefined4 *)FUN_00401f00(0x1c,uVar2);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar3 = &PTR_FUN_00a2fdb4;
    *(undefined2 *)(puVar3 + 6) = 0xf;
  }
  puVar1 = DAT_00b3f998;
  local_4 = 0xffffffff;
  if (DAT_00b3f998 != puVar3) {
    if (DAT_00b3f998 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(DAT_00b3f998 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    DAT_00b3f998 = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00706dd0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b3f998;
  if (DAT_00b3f998 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b3f998 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b3f998 = (undefined4 *)0x0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007070b0(float param_1,float param_2)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_4;
  
  fVar5 = (float10)0;
  fVar2 = (float10)param_2;
  fVar3 = (float10)param_1;
  if ((fVar2 == fVar5) && (fVar5 == fVar3)) {
    return fVar5;
  }
  local_4 = (float)fVar5;
  if ((float)ABS(fVar3) <= (float)ABS(fVar2)) {
    fVar4 = (float10)(float)(fVar3 / fVar2);
    if (fVar4 == fVar5) {
      if (fVar2 <= fVar5) {
        fVar5 = (float10)_DAT_00b3f9a4;
      }
      return (float10)(float)fVar5;
    }
  }
  else {
    fVar4 = (float10)(float)(fVar2 / fVar3);
    local_4 = _DAT_00b3f99c;
    if (fVar4 <= fVar5) {
      if (fVar5 <= fVar4) {
        fVar1 = _DAT_00b3f99c;
        if (fVar3 <= fVar5) {
          fVar1 = -_DAT_00b3f99c;
        }
        return (float10)fVar1;
      }
      local_4 = -_DAT_00b3f99c;
    }
  }
  fVar1 = (float)(fVar4 * fVar4);
  param_2 = (float)(fVar4 * (float10)(fVar1 * (((fVar1 * 0.0208351 - 0.085133) * fVar1 + 0.180141) *
                                               fVar1 - 0.3302995) + 0.999866));
  if ((float10)local_4 != fVar5) {
    param_2 = (float)((float10)local_4 - (float10)param_2);
  }
  if ((fVar3 < fVar5) && (fVar2 < fVar5)) {
    param_2 = param_2 - _DAT_00b3f9a4;
  }
  if ((fVar5 < fVar3) && (fVar2 < fVar5)) {
    return (float10)(_DAT_00b3f9a4 + param_2);
  }
  return (float10)param_2;
}



undefined4 FUN_00707280(char *param_1)

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
  FUN_006c5d40(uVar3,pcVar2 + (0x40 - (int)(param_1 + 1)),"%s = (%g,%g,%g)",param_1,(double)*in_ECX,
               (double)in_ECX[1],(double)in_ECX[2]);
  return uVar3;
}



int FUN_007072e0(void)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00401f00(0x400);
  uVar2 = 0;
  do {
    fVar3 = (float10)FUN_00982c30();
    *(uint *)(iVar1 + uVar2 * 4) = (uint)(float)fVar3 & 0x7fffff;
    fVar3 = (float10)FUN_00982c30();
    uVar2 = uVar2 + 1;
    *(uint *)(iVar1 + 0x1fc + uVar2 * 4) = (uint)(float)fVar3 & 0x7fffff;
  } while (uVar2 < 0x80);
  return iVar1;
}



void FUN_00707370(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x60))(param_1,param_2);
  if (in_ECX[7] != 0) {
    (**(code **)(*(int *)in_ECX[7] + 0x94))();
  }
  return;
}



void FUN_007073a0(undefined4 param_1)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 100))(param_1);
  if (in_ECX[7] != 0) {
    (**(code **)(*(int *)in_ECX[7] + 0x94))();
  }
  return;
}



void FUN_007073d0(int *param_1)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x18) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x007073e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}



uint FUN_007073f0(byte *param_1)

{
  byte bVar1;
  uint in_ECX;
  byte *pbVar2;
  bool bVar3;
  
  if ((param_1 == (byte *)0x0) || (pbVar2 = *(byte **)(in_ECX + 8), pbVar2 == (byte *)0x0)) {
    return 0;
  }
  while( true ) {
    bVar1 = *param_1;
    bVar3 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) break;
    if (bVar1 == 0) {
      return in_ECX;
    }
    bVar1 = param_1[1];
    bVar3 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) break;
    param_1 = param_1 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) {
      return in_ECX;
    }
  }
  return ~-(uint)(1 - bVar3 != (uint)(bVar3 != 0)) & in_ECX;
}



void FUN_00707470(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x4c))();
    if (iVar1 < 0xb) {
      (**(code **)(*param_1 + 0x4c))(param_1);
      FUN_0075fa90(param_1);
    }
  }
  return;
}



void FUN_007074b0(undefined4 param_1)

{
  LONG LVar1;
  int in_ECX;
  undefined4 *unaff_EDI;
  int local_4;
  
  if (*(int **)(in_ECX + 0x1c) == (int *)0x0) {
    *(undefined4 *)(in_ECX + 0x1c) = param_1;
    return;
  }
  local_4 = in_ECX;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x88))(&local_4);
  if (unaff_EDI != (undefined4 *)0x0) {
    LVar1 = InterlockedDecrement(unaff_EDI + 1);
    if (LVar1 != 0) {
      *(int *)(in_ECX + 0x1c) = local_4;
      return;
    }
    if (unaff_EDI == (undefined4 *)0x0) {
      *(int *)(in_ECX + 0x1c) = local_4;
      return;
    }
    (**(code **)*unaff_EDI)(1);
  }
  *(int *)(in_ECX + 0x1c) = local_4;
  return;
}



int * FUN_00707530(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  if (9 < param_1) {
    return (int *)0x0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x9c);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    piVar2 = (int *)puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
  } while ((piVar2 == (int *)0x0) || (iVar3 = (**(code **)(*piVar2 + 0x4c))(), iVar3 != param_1));
  return piVar2;
}



void FUN_00707580(undefined4 param_1,char param_2)

{
  int *in_ECX;
  
  if (param_2 != '\0') {
    FUN_0047c930(param_1,1);
  }
  (**(code **)(*in_ECX + 0x74))();
  (**(code **)(*in_ECX + 0x78))();
  return;
}



void FUN_007075b0(undefined4 param_1)

{
  int *in_ECX;
  
  FUN_0047c930(param_1,*(byte *)(in_ECX + 6) >> 3 & 1);
  if ((*(byte *)(in_ECX + 6) >> 2 & 1) != 0) {
    (**(code **)(*in_ECX + 0x74))();
    (**(code **)(*in_ECX + 0x78))();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x007076fe) */
/* WARNING: Removing unreachable block (ram,0x00707708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00707610(void)

{
  uint uVar1;
  undefined4 uVar2;
  LONG LVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c967b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_14 = (undefined4 *)0x0;
  local_4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fa00);
  _DAT_00b3fa78 = GetCurrentThreadId();
  _DAT_00b3fa7c = _DAT_00b3fa7c + 1;
  if (in_ECX[7] == 0) {
    local_10 = (undefined4 *)FUN_00401f00(0x30,uVar1);
    local_4._0_1_ = 2;
    if (local_10 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_007319e0();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    local_14 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
      local_14 = puVar4;
    }
  }
  else {
    uVar2 = FUN_0070a3e0(&local_10);
    local_4._0_1_ = 1;
    FUN_0055e2a0(uVar2);
    puVar4 = local_10;
    local_4 = (uint)local_4._1_3_ << 8;
    if (((local_10 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(local_10 + 1), LVar3 == 0)
        ) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
  }
  (**(code **)(*in_ECX + 0x6c))(local_14);
  if ((local_14 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(local_14 + 1), LVar3 == 0)) {
    (**(code **)*local_14)(1);
  }
  _DAT_00b3fa7c = _DAT_00b3fa7c + -1;
  if (_DAT_00b3fa7c == 0) {
    _DAT_00b3fa78 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fa00);
  *unaff_FS_OFFSET = (int)local_10;
  return;
}



undefined4 FUN_00707770(void)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xc);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    cVar2 = (**(code **)(*piVar1 + 0x5c))();
    if (cVar2 != '\0') break;
    piVar1 = (int *)piVar1[0xd];
  }
  return 1;
}



undefined4 FUN_007077a0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  puVar2 = *(undefined4 **)(in_ECX + 0x9c);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
  } while ((*piVar1 == 0) || (*(int *)(*piVar1 + 0xc) == 0));
  return CONCAT31((int3)((uint)puVar2 >> 8),1);
}



/* WARNING: Removing unreachable block (ram,0x00707936) */
/* WARNING: Removing unreachable block (ram,0x0070794d) */
/* WARNING: Removing unreachable block (ram,0x0070795b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_007077d0(int *param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  LONG LVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c96cc;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0xa4) == 0) {
    *param_1 = param_2;
    if (param_2 != 0) {
      InterlockedIncrement((LONG *)(param_2 + 4));
    }
  }
  else {
    local_4 = 1;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fa00);
    _DAT_00b3fa78 = GetCurrentThreadId();
    _DAT_00b3fa7c = _DAT_00b3fa7c + 1;
    if (param_3 != '\0') {
      iVar5 = FUN_00401f00(0x30,uVar4);
      local_4._0_1_ = 2;
      if (iVar5 == 0) {
        local_4 = CONCAT31(local_4._1_3_,1);
        param_2 = 0;
      }
      else {
        param_2 = FUN_00731620(param_2);
        local_4 = CONCAT31(local_4._1_3_,1);
      }
    }
    FUN_0075fa90(param_2);
    puVar1 = *(undefined4 **)(in_ECX + 0x9c);
    while (puVar1 != (undefined4 *)0x0) {
      piVar2 = (int *)puVar1[2];
      puVar1 = (undefined4 *)*puVar1;
      if ((piVar2 != (int *)0x0) && (iVar5 = (**(code **)(*piVar2 + 0x4c))(), iVar5 < 0xb)) {
        iVar5 = (**(code **)(*piVar2 + 0x4c))();
        piVar3 = *(int **)(iVar5 * 4 + 8);
        if (piVar3 != piVar2) {
          if (((piVar3 != (int *)0x0) && (LVar6 = InterlockedDecrement(piVar3 + 1), LVar6 == 0)) &&
             (piVar3 != (int *)0x0)) {
            (**(code **)*piVar3)(1);
          }
          *(int **)(iVar5 * 4 + 8) = piVar2;
          InterlockedIncrement(piVar2 + 1);
        }
      }
    }
    _DAT_00b3fa7c = _DAT_00b3fa7c + -1;
    if (_DAT_00b3fa7c == 0) {
      _DAT_00b3fa78 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fa00);
    *param_1 = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00707a17) */
/* WARNING: Removing unreachable block (ram,0x00707a21) */

void FUN_00707980(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  LONG LVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ce1f0;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (in_ECX[7] != 0) {
    uVar3 = FUN_0070b400(&local_10);
    local_4._0_1_ = 1;
    FUN_0055e2a0(uVar3);
    puVar1 = local_10;
    local_4 = (uint)local_4._1_3_ << 8;
    if (((local_10 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(local_10 + 1), LVar4 == 0)
        ) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  (**(code **)(*in_ECX + 0x70))(0,uVar2);
  *unaff_FS_OFFSET = (int)local_10;
  return;
}



void FUN_00707a40(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00707530(2);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00707a5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))();
    return;
  }
  return;
}



void FUN_00707a60(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  
  uVar3 = param_2;
  iVar1 = *(int *)(param_1 + 8);
  while (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 8);
    iVar1 = *(int *)(iVar1 + 4);
    cVar4 = FUN_004d6760(piVar2,&param_1);
    if (cVar4 == '\0') {
      (**(code **)(*piVar2 + 0x38))(uVar3);
    }
  }
  return;
}



void FUN_00707ab0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_006ffe10(param_1);
  if (*(int *)(in_ECX + 0xa4) != 0) {
    FUN_00707a60(in_ECX + 0x98,param_1);
  }
  if (*(int **)(in_ECX + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xa8) + 0x38))(param_1);
  }
  return;
}



undefined1 FUN_00707af0(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int in_ECX;
  
  cVar3 = FUN_007000f0(param_1);
  if (cVar3 == '\0') {
    return 0;
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x9c);
  while (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x24))(param_1);
    }
  }
  if (*(int **)(in_ECX + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xa8) + 0x24))(param_1);
  }
  return 1;
}



undefined4 FUN_00707b50(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  int in_ECX;
  
  cVar6 = FUN_00700200(param_1);
  if ((((cVar6 == '\0') || (((*(byte *)(param_1 + 0x18) ^ *(byte *)(in_ECX + 0x18)) & 1) != 0)) ||
      (cVar6 = FUN_00718b20(param_1 + 0x30), cVar6 != '\0')) ||
     (*(int *)(in_ECX + 0xa4) != *(int *)(param_1 + 0xa4))) {
    return 0;
  }
  if (*(int *)(in_ECX + 0xa4) == 0) {
LAB_00707bce:
    piVar4 = *(int **)(in_ECX + 0xa8);
    piVar5 = *(int **)(param_1 + 0xa8);
    if ((piVar4 == (int *)0x0) || (piVar5 == (int *)0x0)) {
      if (piVar4 == piVar5) {
        return 1;
      }
    }
    else {
      cVar6 = (**(code **)(*piVar4 + 0x2c))(piVar5);
      if (cVar6 != '\0') {
        return 1;
      }
    }
  }
  else {
    puVar1 = *(undefined4 **)(in_ECX + 0x9c);
    puVar2 = *(undefined4 **)(param_1 + 0x9c);
    do {
      while( true ) {
        if (puVar1 == (undefined4 *)0x0) goto LAB_00707bce;
        piVar4 = puVar1 + 2;
        puVar1 = (undefined4 *)*puVar1;
        piVar5 = puVar2 + 2;
        puVar2 = (undefined4 *)*puVar2;
        iVar3 = *piVar5;
        if ((int *)*piVar4 == (int *)0x0) break;
        if (iVar3 == 0) {
          return 0;
        }
        cVar6 = (**(code **)(*(int *)*piVar4 + 0x2c))(iVar3);
        if (cVar6 == '\0') {
          return 0;
        }
      }
    } while (iVar3 == 0);
  }
  return 0;
}



void FUN_00707c10(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c96f8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7df04;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a7def4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00707c80(byte param_1)

{
  FUN_00707c10();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00707ca0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c9744;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7df24;
  local_4 = 2;
  FUN_00573880(uVar2);
  puVar1 = (undefined4 *)in_ECX[0x2a];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x2a] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x2a];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00707c10();
  local_4 = 0xffffffff;
  FUN_006ffd70();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00707d80(undefined1 *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  int in_ECX;
  
  for (piVar1 = *(int **)(in_ECX + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0xd]) {
    cVar4 = (**(code **)(*piVar1 + 0x5c))();
    if (cVar4 != '\0') {
      bVar3 = true;
      goto LAB_00707da6;
    }
  }
  bVar3 = false;
LAB_00707da6:
  *(bool *)param_3 = !bVar3;
  if (param_2 == '\0') {
    param_2 = bVar3;
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x9c);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      bVar3 = false;
      if ((param_2 != '\0') || (*(int *)(in_ECX + 0xc) != 0)) goto LAB_00707e0f;
      *param_1 = 0;
      *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) & 0xfffd;
      goto LAB_00707df5;
    }
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
  } while ((*piVar1 == 0) || (*(int *)(*piVar1 + 0xc) == 0));
  bVar3 = true;
LAB_00707e0f:
  *param_1 = 1;
  *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) | 2;
  if (param_2 == '\0') {
LAB_00707df5:
    *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) & 0xfffb;
  }
  else {
    *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) | 4;
  }
  if (!bVar3) {
    *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) & 0xfff7;
    *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) | 0x10;
    return;
  }
  *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) | 0x18;
  return;
}



void FUN_00707e40(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_2 + 8);
  while (iVar2 != 0) {
    puVar1 = (undefined4 *)(iVar2 + 8);
    iVar2 = *(int *)(iVar2 + 4);
    iVar3 = (**(code **)(*(int *)*puVar1 + 0x4c))();
    if (iVar3 < 10) {
      uVar4 = FUN_00700710(param_3);
      FUN_00405680(uVar4);
    }
  }
  return;
}



void FUN_00707e90(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_00700300(param_1,param_2);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(in_ECX + 0x18);
  puVar3 = (undefined4 *)(in_ECX + 0x30);
  puVar4 = (undefined4 *)(param_1 + 0x30);
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (*(int *)(in_ECX + 0xa4) != 0) {
    FUN_00707e40(param_1,in_ECX + 0x98,param_2);
  }
  if (*(int **)(in_ECX + 0xa8) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0xa8) + 0x18))(param_2);
    FUN_00435ce0(uVar1);
  }
  return;
}



void FUN_00707f00(uint param_1)

{
  ushort *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  int in_ECX;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  undefined4 uStack_24;
  int aiStack_20 [4];
  undefined1 auStack_10 [4];
  uint uStack_c;
  uint uStack_8;
  int iStack_4;
  
  iVar2 = param_1;
  FUN_006ffce0(param_1);
  puVar1 = (ushort *)(in_ECX + 0x18);
  param_1 = 2;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),puVar1,2,&param_1,1);
  if (*(uint *)(iVar2 + 0xd8) < 0x401000b) {
    *puVar1 = (*puVar1 & 0xfff8) * 2 | *puVar1 & 7;
  }
  if (*(uint *)(iVar2 + 0xd8) < 0x401000c) {
    *puVar1 = (*puVar1 & 0xfff7 | 7) << 4 | *puVar1 & 0xf;
  }
  if (*(uint *)(iVar2 + 0xd8) < 0x5000001) {
    *puVar1 = (*puVar1 & 0xff00) * 2 | *puVar1 & 0xff;
  }
  FUN_00709430(iVar2);
  FUN_00711b90(iVar2);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x60,4,&param_1,1);
  if (*(uint *)(iVar2 + 0xd8) < 0x5000013) {
    bVar3 = (byte)*puVar1;
    aiStack_20[1] = 0;
    aiStack_20[2] = 0;
    aiStack_20[3] = 0;
    uVar5 = bVar3 >> 1 & 7;
    *puVar1 = (byte)(bVar3 >> 3 ^ bVar3) & 1 ^ *puVar1 >> 3;
    FUN_00709430(iVar2);
    FUN_00712ae0();
    iVar6 = *(int *)(iVar2 + 0x21c);
    if (*(uint *)(iVar2 + 0xd8) < 0x4010000) {
      uStack_24 = 4;
      (**(code **)(iVar6 + 4))(iVar6,aiStack_20,4);
      param_1 = CONCAT31(param_1._1_3_,aiStack_20[0] != 0);
    }
    else {
      uStack_24 = 1;
      (**(code **)(iVar6 + 4))(iVar6,&param_1,1,&uStack_24,1);
    }
    iVar6 = 0x12;
    bVar9 = true;
    pcVar7 = (char *)(iVar2 + 900);
    pcVar8 = "NiCollisionSwitch";
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar9 = *pcVar7 == *pcVar8;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar9);
    if ((bVar9) && ((*(byte *)puVar1 >> 3 & 1) == 0)) {
      uVar5 = 4;
    }
    if (((((char)param_1 != '\0') || (cVar4 = FUN_008aa390(&DAT_00b3f9a8), cVar4 != '\0')) ||
        (uVar5 != 2)) && (iVar6 = FUN_00712520("NiCollisionData"), iVar6 != 0)) {
      FUN_0075fa90(iVar6);
      uStack_c = (uint)uVar5;
      uStack_8 = param_1 & 0xff;
      iStack_4 = iVar2;
      (**(code **)(**(int **)(in_ECX + 0xa8) + 0x58))(auStack_10);
    }
  }
  else {
    FUN_00712ae0();
    FUN_00712a20();
  }
  if (*(uint *)(iVar2 + 0xd8) < 0xa000102) {
    *(ushort *)(iVar2 + 600) = *puVar1;
    *puVar1 = *puVar1 & 0x3f;
  }
  if ((*(uint *)(iVar2 + 0xd8) < 0xa000106) && (*(int **)(in_ECX + 0xa8) != (int *)0x0)) {
    (**(code **)(**(int **)(in_ECX + 0xa8) + 0x5c))(*(uint *)(iVar2 + 0xd8),0);
  }
  if (*(uint *)(iVar2 + 0xd8) < 0x14000004) {
    *puVar1 = *puVar1 & 0xffbf;
  }
  *puVar1 = *puVar1 & 0xffef | 0xe;
  return;
}



void FUN_007081b0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9770;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00700050(param_1);
  iVar2 = FUN_007124d0(uVar1);
  if ((uint)puVar3[0x36] < 0x4010008) {
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      puVar3 = (undefined4 *)FUN_007124a0();
      param_1 = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar3 + 1);
      }
      local_4 = 0;
      FUN_007c16b0(&param_1);
      local_4 = 0xffffffff;
      if ((puVar3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0)) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  else {
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      puVar5 = (undefined4 *)FUN_007124a0();
      param_1 = puVar5;
      if (puVar5 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar5 + 1);
      }
      local_4 = 1;
      FUN_00749800(&param_1);
      local_4 = 0xffffffff;
      if ((puVar5 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar5 + 1), LVar4 == 0)) {
        (**(code **)*puVar5)(1);
      }
    }
    if (0x5000012 < (uint)puVar3[0x36]) {
      uVar6 = FUN_007124a0();
      FUN_0075fa90(uVar6);
      if (*(int **)(in_ECX + 0xa8) != (int *)0x0) {
        (**(code **)(**(int **)(in_ECX + 0xa8) + 0x5c))(puVar3[0x36],0);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00708330(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  undefined4 local_4;
  
  piVar4 = param_1;
  FUN_00700460(param_1);
  local_4 = 2;
  (**(code **)(piVar4[0x88] + 8))(piVar4[0x88],in_ECX + 0x18,2,&local_4,1);
  FUN_007094a0(piVar4);
  FUN_00711bf0(piVar4);
  local_4 = 4;
  (**(code **)(piVar4[0x88] + 8))(piVar4[0x88],in_ECX + 0x60,4,&local_4,1);
  param_1 = *(int **)(in_ECX + 0xa4);
  local_4 = 4;
  (**(code **)(piVar4[0x88] + 8))(piVar4[0x88],&param_1,4,&local_4,1);
  if (0 < (int)param_1) {
    puVar5 = (undefined4 *)
             FUN_00401f00(-(uint)((int)(ZEXT48(param_1) * 4 >> 0x20) != 0) |
                          (uint)(ZEXT48(param_1) * 4));
    puVar2 = *(undefined4 **)(in_ECX + 0x9c);
    puVar6 = puVar5;
    while (uVar3 = (uint)param_1, puVar2 != (undefined4 *)0x0) {
      puVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      *puVar6 = *puVar1;
      puVar6 = puVar6 + 1;
    }
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      (**(code **)(*piVar4 + 0x2c))(puVar5[uVar3]);
    }
    FUN_00401f20(puVar5);
  }
  (**(code **)(*piVar4 + 0x2c))(*(undefined4 *)(in_ECX + 0xa8));
  return;
}



void FUN_00708450(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c97b4;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006ffd30(uVar3);
  *in_ECX = &PTR_FUN_00a7df24;
  in_ECX[0x29] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x26] = &PTR_FUN_00a7df14;
  in_ECX[0x2a] = 0;
  local_4 = 2;
  in_ECX[7] = 0;
  *(undefined2 *)(in_ECX + 6) = 0;
  FUN_00718a50();
  FUN_00718a50();
  in_ECX[8] = DAT_00b3f9a8;
  in_ECX[9] = DAT_00b3f9ac;
  uVar2 = DAT_00b3f9b0;
  in_ECX[0xb] = 0;
  in_ECX[10] = uVar2;
  *(ushort *)(in_ECX + 6) = *(ushort *)(in_ECX + 6) & 0xffef | 0xe;
  puVar1 = (undefined4 *)in_ECX[0x2a];
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x2a] = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00708540(byte param_1)

{
  FUN_00707ca0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_00708560(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca9b8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((int)param_2 < 10) {
    puVar1 = *(undefined4 **)(in_ECX + 0x9c);
    while (puVar1 != (undefined4 *)0x0) {
      piVar2 = (int *)puVar1[2];
      puVar1 = (undefined4 *)*puVar1;
      local_10 = piVar2;
      if (piVar2 != (int *)0x0) {
        InterlockedIncrement(piVar2 + 1);
      }
      local_4 = 0;
      if ((piVar2 != (int *)0x0) &&
         (puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x4c))(uVar3), puVar4 == param_2)) {
        FUN_004a0e50(&param_2,&local_10);
        puVar1 = param_2;
        if ((param_2 != (undefined4 *)0x0) &&
           ((LVar5 = InterlockedDecrement(param_2 + 1), LVar5 == 0 && (puVar1 != (undefined4 *)0x0))
           )) {
          (**(code **)*puVar1)(1);
        }
        piVar2 = local_10;
        *param_1 = local_10;
        if (local_10 != (int *)0x0) {
          InterlockedIncrement(local_10 + 1);
        }
        local_4 = 0xffffffff;
        if ((piVar2 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar2 + 1), LVar5 == 0)) {
          (**(code **)*piVar2)(1);
        }
        *unaff_FS_OFFSET = local_c;
        return param_1;
      }
      local_4 = 0xffffffff;
      if ((piVar2 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar2 + 1), LVar5 == 0)) {
        (**(code **)*piVar2)(1);
      }
    }
  }
  *param_1 = 0;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_007086b0(uint param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  
  iVar4 = param_1;
  FUN_00700540(param_1);
  param_1 = FUN_0070f910(DAT_00b3fa80);
  uVar7 = (uint)*(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar7) {
    FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar7);
  }
  FUN_0042bb90(uVar7,&param_1);
  param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(in_ECX + 0x18)) & 0xffffff01;
  param_1 = FUN_0070f950("m_bAppCulled",param_1);
  uVar7 = (uint)*(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar7) {
    FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar7);
  }
  FUN_0042bb90(uVar7,&param_1);
  param_1 = FUN_00707280("m_localTranslate");
  uVar7 = (uint)*(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar7) {
    FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar7);
  }
  FUN_0042bb90(uVar7,&param_1);
  param_1 = FUN_00711a50("m_localRotate");
  uVar7 = (uint)*(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar7) {
    FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar7);
  }
  FUN_0042bb90(uVar7,&param_1);
  param_1 = FUN_0070fb90("m_fLocalScale",*(undefined4 *)(in_ECX + 0x60));
  uVar7 = (uint)*(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar7) {
    FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar7);
  }
  FUN_0042bb90(uVar7,&param_1);
  param_1 = FUN_00707280("m_worldTranslate");
  uVar7 = (uint)*(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar7) {
    FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar7);
  }
  FUN_0042bb90(uVar7,&param_1);
  param_1 = FUN_00711a50("m_worldRotate");
  uVar7 = (uint)*(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar7) {
    FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar7);
  }
  FUN_0042bb90(uVar7,&param_1);
  param_1 = FUN_0070fb90("m_worldScale",*(undefined4 *)(in_ECX + 0x94));
  uVar7 = (uint)*(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar7) {
    FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar7);
  }
  FUN_0042bb90(uVar7,&param_1);
  param_1 = FUN_0072a040("m_kWorldBound");
  uVar7 = (uint)*(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar7) {
    FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar7);
  }
  FUN_0042bb90(uVar7,&param_1);
  param_1 = CONCAT31(param_1._1_3_,*(byte *)(in_ECX + 0x18) >> 1) & 0xffffff01;
  param_1 = FUN_0070f950("SelUpdate",param_1);
  uVar7 = (uint)*(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar7) {
    FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar7);
  }
  FUN_0042bb90(uVar7,&param_1);
  param_1 = CONCAT31(param_1._1_3_,*(byte *)(in_ECX + 0x18) >> 2) & 0xffffff01;
  param_1 = FUN_0070f950("SelUpdateTransforms",param_1);
  uVar7 = (uint)*(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar7) {
    FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar7);
  }
  FUN_0042bb90(uVar7,&param_1);
  param_1 = CONCAT31(param_1._1_3_,*(byte *)(in_ECX + 0x18) >> 4) & 0xffffff01;
  param_1 = FUN_0070f950("SelUpdateRigid",param_1);
  uVar7 = (uint)*(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar7) {
    FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar7);
  }
  FUN_0042bb90(uVar7,&param_1);
  param_1 = CONCAT31(param_1._1_3_,*(byte *)(in_ECX + 0x18) >> 3) & 0xffffff01;
  param_1 = FUN_0070f950("SelUpdatePropControllers",param_1);
  uVar7 = (uint)*(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar7) {
    FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar7);
  }
  FUN_0042bb90(uVar7,&param_1);
  if (*(int *)(in_ECX + 0xa4) != 0) {
    puVar2 = *(undefined4 **)(in_ECX + 0x9c);
    while (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)puVar2[2];
      puVar2 = (undefined4 *)*puVar2;
      puVar5 = (undefined4 *)(**(code **)(*piVar3 + 4))();
      iVar6 = FUN_0070fbe0(*puVar5,piVar3);
      uVar1 = *(ushort *)(iVar4 + 10);
      uVar7 = (uint)uVar1;
      if (*(ushort *)(iVar4 + 8) <= uVar7) {
        FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar7);
      }
      if (uVar7 < *(ushort *)(iVar4 + 10)) {
        if (iVar6 == 0) {
          if (*(int *)(*(int *)(iVar4 + 4) + uVar7 * 4) != 0) {
            *(short *)(iVar4 + 0xc) = *(short *)(iVar4 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(iVar4 + 4) + uVar7 * 4) == 0) {
          *(short *)(iVar4 + 0xc) = *(short *)(iVar4 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(iVar4 + 10) = uVar1 + 1;
        if (iVar6 != 0) {
          *(short *)(iVar4 + 0xc) = *(short *)(iVar4 + 0xc) + 1;
        }
      }
      *(int *)(*(int *)(iVar4 + 4) + uVar7 * 4) = iVar6;
    }
  }
  if (*(int *)(in_ECX + 0xa8) != 0) {
    param_1 = FUN_0070fbe0("m_spCollisionObject",*(int *)(in_ECX + 0xa8));
    uVar7 = (uint)*(ushort *)(iVar4 + 10);
    if (*(ushort *)(iVar4 + 8) <= uVar7) {
      FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar7);
    }
    FUN_0042bb90(uVar7,&param_1);
  }
  return;
}



void FUN_00708b00(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_00707e90(param_1,param_2);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(in_ECX + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(in_ECX + 0xb8);
  *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(in_ECX + 0xac);
  return;
}



undefined1 thunk_FUN_00707af0(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int in_ECX;
  
  cVar3 = FUN_007000f0(param_1);
  if (cVar3 == '\0') {
    return 0;
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x9c);
  while (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x24))(param_1);
    }
  }
  if (*(int **)(in_ECX + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xa8) + 0x24))(param_1);
  }
  return 1;
}



void FUN_00708b80(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 200) != 0) {
    do {
      piVar1 = *(int **)(in_ECX + 0xc0);
      iVar2 = *piVar1;
      *(int *)(in_ECX + 0xc0) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(in_ECX + 0xc4) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      (**(code **)(*(int *)(in_ECX + 0xbc) + 8))(piVar1);
      *(int *)(in_ECX + 200) = *(int *)(in_ECX + 200) + -1;
      FUN_0070b930(in_ECX);
    } while (*(int *)(in_ECX + 200) != 0);
  }
  return;
}



void FUN_00708be0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xd8) != 0) {
    do {
      piVar1 = *(int **)(in_ECX + 0xd0);
      iVar2 = *piVar1;
      *(int *)(in_ECX + 0xd0) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(in_ECX + 0xd4) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      (**(code **)(*(int *)(in_ECX + 0xcc) + 8))(piVar1);
      *(int *)(in_ECX + 0xd8) = *(int *)(in_ECX + 0xd8) + -1;
    } while (*(int *)(in_ECX + 0xd8) != 0);
  }
  return;
}



uint FUN_00708c30(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_ECX;
  
  uVar4 = FUN_00707b50(param_1);
  if (((char)uVar4 == '\0') || (uVar4 = *(uint *)(in_ECX + 200), uVar4 != *(uint *)(param_1 + 200)))
  {
    return uVar4 & 0xffffff00;
  }
  if (uVar4 == 0) {
LAB_00708c96:
    puVar5 = *(undefined4 **)(in_ECX + 0xd8);
    if (puVar5 == (undefined4 *)*(uint *)(param_1 + 0xd8)) {
      if (puVar5 == (undefined4 *)0x0) {
        return 1;
      }
      puVar5 = *(undefined4 **)(in_ECX + 0xd0);
      puVar3 = *(undefined4 **)(param_1 + 0xd0);
      do {
        while( true ) {
          if (puVar5 == (undefined4 *)0x0) {
            return 1;
          }
          piVar1 = puVar5 + 2;
          puVar5 = (undefined4 *)*puVar5;
          piVar2 = puVar3 + 2;
          puVar3 = (undefined4 *)*puVar3;
          if (*piVar1 == 0) break;
          if (*piVar2 == 0) goto LAB_00708c86;
        }
      } while (*piVar2 == 0);
    }
  }
  else {
    puVar5 = *(undefined4 **)(in_ECX + 0xc0);
    puVar3 = *(undefined4 **)(param_1 + 0xc0);
    do {
      while( true ) {
        if (puVar5 == (undefined4 *)0x0) goto LAB_00708c96;
        piVar1 = puVar5 + 2;
        puVar5 = (undefined4 *)*puVar5;
        piVar2 = puVar3 + 2;
        puVar3 = (undefined4 *)*puVar3;
        if (*piVar1 == 0) break;
        if (*piVar2 == 0) goto LAB_00708c86;
      }
    } while (*piVar2 == 0);
  }
LAB_00708c86:
  return (uint)puVar5 & 0xffffff00;
}



undefined4 FUN_00708ce0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  puVar2 = *(undefined4 **)(in_ECX + 0xd0);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
  } while (*piVar1 != param_1);
  return CONCAT31((int3)((uint)puVar2 >> 8),1);
}



void FUN_00708d10(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c97d8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7e0d4;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a7e0c4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00708d80(byte param_1)

{
  FUN_00708d10();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00708da0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c9824;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7e0f4;
  local_4 = 2;
  FUN_00708b80(uVar1);
  FUN_00708be0();
  local_4._0_1_ = 1;
  FUN_00708d10();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00708d10();
  local_4 = 0xffffffff;
  FUN_00707ca0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00708e40(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  puVar2 = *(undefined4 **)(in_ECX + 0xc0);
  do {
    puVar1 = puVar2;
    if (puVar1 == (undefined4 *)0x0) goto LAB_00708e68;
    puVar2 = (undefined4 *)*puVar1;
  } while (param_1 != puVar1[2]);
  if (puVar1 == (undefined4 *)0x0) {
LAB_00708e68:
    puVar2 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0xbc) + 4))();
    puVar2[2] = param_1;
    puVar2[1] = 0;
    *puVar2 = *(undefined4 *)(in_ECX + 0xc0);
    if (*(int *)(in_ECX + 0xc0) == 0) {
      *(undefined4 **)(in_ECX + 0xc4) = puVar2;
    }
    else {
      *(undefined4 **)(*(int *)(in_ECX + 0xc0) + 4) = puVar2;
    }
    *(int *)(in_ECX + 200) = *(int *)(in_ECX + 200) + 1;
    *(undefined4 **)(in_ECX + 0xc0) = puVar2;
    FUN_00708e40(in_ECX);
  }
  return;
}



void FUN_00708eb0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 local_8;
  undefined1 auStack_4 [4];
  
  iVar1 = param_1;
  FUN_00707f00(param_1);
  if (0xa010065 < *(uint *)(iVar1 + 0xd8)) {
    local_8 = 1;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,1,&local_8,1);
    *(bool *)(in_ECX + 0xac) = (char)param_1 != '\0';
  }
  if (*(uint *)(iVar1 + 0xd8) < 0x4010000) {
    local_8 = 4;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,4,&local_8,1);
    iVar2 = 0;
    if (0 < param_1) {
      do {
        local_8 = 4;
        (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),auStack_4,4,&local_8,1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1);
    }
  }
  if (0xa00010d < *(uint *)(iVar1 + 0xd8)) {
    FUN_00712ae0();
  }
  return;
}



void FUN_00708f90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  FUN_007081b0(param_1);
  if (0xa00010d < *(uint *)(param_1 + 0xd8)) {
    iVar1 = FUN_007124d0();
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      iVar2 = FUN_007124a0();
      if (iVar2 != 0) {
        puVar3 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0xcc) + 4))();
        puVar3[2] = iVar2;
        puVar3[1] = 0;
        *puVar3 = *(undefined4 *)(in_ECX + 0xd0);
        if (*(int *)(in_ECX + 0xd0) == 0) {
          *(undefined4 **)(in_ECX + 0xd4) = puVar3;
        }
        else {
          *(undefined4 **)(*(int *)(in_ECX + 0xd0) + 4) = puVar3;
        }
        *(int *)(in_ECX + 0xd8) = *(int *)(in_ECX + 0xd8) + 1;
        *(undefined4 **)(in_ECX + 0xd0) = puVar3;
      }
    }
  }
  return;
}



void FUN_00709020(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int iStack_8;
  undefined4 local_4;
  
  piVar3 = param_1;
  FUN_00708330(param_1);
  param_1 = (int *)CONCAT31(param_1._1_3_,*(undefined1 *)(in_ECX + 0xac));
  local_4 = 1;
  (**(code **)(piVar3[0x88] + 8))(piVar3[0x88],&param_1,1,&local_4,1);
  iStack_8 = *(int *)(in_ECX + 0xd8);
  local_4 = 4;
  (**(code **)(piVar3[0x88] + 8))(piVar3[0x88],&iStack_8,4,&local_4,1);
  if (0 < iStack_8) {
    iVar2 = *(int *)(in_ECX + 0xd4);
    while (iVar2 != 0) {
      puVar1 = (undefined4 *)(iVar2 + 8);
      iVar2 = *(int *)(iVar2 + 4);
      (**(code **)(*piVar3 + 0x2c))(*puVar1);
    }
  }
  return;
}



void FUN_007090c0(void)

{
  LONG LVar1;
  undefined4 *in_ECX;
  
  FUN_00708450();
  *in_ECX = &PTR_FUN_00a7e0f4;
  in_ECX[0x2d] = 0;
  *(undefined1 *)(in_ECX + 0x2b) = 1;
  in_ECX[0x2e] = 1;
  in_ECX[0x32] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x2f] = &PTR_FUN_00a7e0e4;
  in_ECX[0x36] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x33] = &PTR_FUN_00a7e0e4;
  LVar1 = InterlockedIncrement((LONG *)&DAT_00b259fc);
  in_ECX[0x2c] = LVar1;
  return;
}



void FUN_00709140(byte param_1)

{
  FUN_00708da0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00709160(int param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  int local_4c;
  int local_48;
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_4c;
  local_48 = in_ECX;
  FUN_007086b0(param_1);
  local_4c = FUN_0070f910(DAT_00b3fa88);
  uVar5 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar5) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar5);
  }
  FUN_0042bb90(uVar5,&local_4c);
  if (*(int *)(in_ECX + 200) != 0) {
    puVar2 = *(undefined4 **)(in_ECX + 0xc0);
    local_4c = 0;
    while (puVar2 != (undefined4 *)0x0) {
      uVar3 = puVar2[2];
      puVar2 = (undefined4 *)*puVar2;
      FUN_006c5d40(local_44,0x40,"affected node[%d]",local_4c);
      iVar4 = FUN_0070fbe0(local_44,uVar3);
      uVar1 = *(ushort *)(param_1 + 10);
      uVar5 = (uint)uVar1;
      if (*(ushort *)(param_1 + 8) <= uVar5) {
        FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar5);
      }
      if (uVar5 < *(ushort *)(param_1 + 10)) {
        if (iVar4 == 0) {
          if (*(int *)(*(int *)(param_1 + 4) + uVar5 * 4) != 0) {
            *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(param_1 + 4) + uVar5 * 4) == 0) {
          *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(param_1 + 10) = uVar1 + 1;
        if (iVar4 != 0) {
          *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
        }
      }
      local_4c = local_4c + 1;
      *(int *)(*(int *)(param_1 + 4) + uVar5 * 4) = iVar4;
      in_ECX = local_48;
    }
    puVar2 = *(undefined4 **)(in_ECX + 0xd0);
    while (puVar2 != (undefined4 *)0x0) {
      uVar3 = puVar2[2];
      puVar2 = (undefined4 *)*puVar2;
      FUN_006c5d40(local_44,0x40,"unaffected node[%d]",local_4c);
      iVar4 = FUN_0070fbe0(local_44,uVar3);
      uVar1 = *(ushort *)(param_1 + 10);
      uVar5 = (uint)uVar1;
      if (*(ushort *)(param_1 + 8) <= uVar5) {
        FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar5);
      }
      if (uVar5 < *(ushort *)(param_1 + 10)) {
        if (iVar4 == 0) {
          if (*(int *)(*(int *)(param_1 + 4) + uVar5 * 4) != 0) {
            *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(param_1 + 4) + uVar5 * 4) == 0) {
          *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(param_1 + 10) = uVar1 + 1;
        if (iVar4 != 0) {
          *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
        }
      }
      local_4c = local_4c + 1;
      *(int *)(*(int *)(param_1 + 4) + uVar5 * 4) = iVar4;
    }
  }
  return;
}



void FUN_00709340(void)

{
  float *in_ECX;
  
  if (1.0 < *in_ECX) {
    *in_ECX = 1.0;
  }
  if (1.0 < in_ECX[1]) {
    in_ECX[1] = 1.0;
  }
  if (1.0 < in_ECX[2]) {
    in_ECX[2] = 1.0;
    return;
  }
  return;
}



undefined4 FUN_00709370(char *param_1)

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
  FUN_006c5d40(uVar3,pcVar2 + (100 - (int)(param_1 + 1)),"%s = (%5.3f,%5.3f,%5.3f)",param_1,
               (double)*in_ECX,(double)in_ECX[1],(double)in_ECX[2]);
  return uVar3;
}



undefined4 FUN_007093d0(char *param_1)

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
  FUN_006c5d40(uVar3,pcVar2 + (0x24 - (int)(param_1 + 1)),"%s = (%5.3f,%5.3f,%5.3f,%5.3f)",param_1,
               (double)*in_ECX,(double)in_ECX[1],(double)in_ECX[2],(double)in_ECX[3]);
  return uVar3;
}



void FUN_00709430(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = param_1;
  piVar1 = (int *)(param_1 + 0x21c);
  param_1 = 4;
  (**(code **)(*piVar1 + 4))(*piVar1);
  iVar2 = *(int *)(iVar3 + 0x21c);
  param_1 = 4;
  (**(code **)(iVar2 + 4))(iVar2,in_ECX + 4,4,&param_1,1);
  iVar2 = *(int *)(iVar3 + 0x21c);
  param_1 = 4;
  (**(code **)(iVar2 + 4))(iVar2,in_ECX + 8,4,&param_1,1);
  return;
}



void FUN_007094a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = param_1;
  piVar1 = (int *)(param_1 + 0x220);
  param_1 = 4;
  (**(code **)(*piVar1 + 8))(*piVar1);
  iVar2 = *(int *)(iVar3 + 0x220);
  param_1 = 4;
  (**(code **)(iVar2 + 8))(iVar2,in_ECX + 4,4,&param_1,1);
  iVar2 = *(int *)(iVar3 + 0x220);
  param_1 = 4;
  (**(code **)(iVar2 + 8))(iVar2,in_ECX + 8,4,&param_1,1);
  return;
}



void FUN_00709510(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  piVar1 = (int *)(param_1 + 0x220);
  param_1 = 4;
  (**(code **)(*piVar1 + 8))(*piVar1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 4,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 8,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 0xc,4,&param_1,1);
  return;
}



void FUN_007095a0(void)

{
  LONG LVar1;
  undefined4 *in_ECX;
  
  FUN_006ffd30();
  *in_ECX = &PTR_FUN_00a7e1f4;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[9] = 0x3f000000;
  in_ECX[8] = 0x3f000000;
  in_ECX[7] = 0x3f000000;
  in_ECX[0xc] = 0x3f000000;
  in_ECX[0xb] = 0x3f000000;
  in_ECX[10] = 0x3f000000;
  in_ECX[0xf] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x13] = 0x40800000;
  in_ECX[0x14] = 0x3f800000;
  LVar1 = InterlockedIncrement((LONG *)&DAT_00b25af4);
  in_ECX[6] = LVar1;
  in_ECX[0x15] = 1;
  in_ECX[0x16] = 0;
  return;
}



void FUN_00709640(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c9848;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7e1f4;
  local_4 = 0;
  FUN_007014c0();
  local_4 = 0xffffffff;
  FUN_006ffd70(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007096a0(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  thunk_FUN_00700300(param_1,param_2);
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
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(in_ECX + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(in_ECX + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(in_ECX + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(in_ECX + 0x50);
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
  local_10 = FUN_00401f00(0x5c,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_007095a0();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_00709790(byte param_1)

{
  FUN_00709640();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_007097b0(undefined4 param_1)

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
    uVar3 = FUN_007095a0();
  }
  local_4 = 0xffffffff;
  FUN_007096a0(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_007098b0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(0x5c,uVar2);
  local_4 = 0;
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_007095a0();
  }
  puVar1 = DAT_00b3faa4;
  local_4 = 0xffffffff;
  if (DAT_00b3faa4 != puVar4) {
    if (DAT_00b3faa4 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(DAT_00b3faa4 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    DAT_00b3faa4 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00709960(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b3faa4;
  if (DAT_00b3faa4 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b3faa4 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b3faa4 = (undefined4 *)0x0;
  }
  return;
}



void FUN_00709c60(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x00709c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x84))();
  return;
}



undefined4 * FUN_00709c70(void)

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
    FUN_00717590();
    *puVar2 = &PTR_FUN_00a7e29c;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_00709d10(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_00717570(param_1);
  *in_ECX = &PTR_FUN_00a7e29c;
  return;
}



void FUN_00709d30(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7e29c;
  FUN_007226e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_00709d60(undefined4 param_1)

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
    FUN_00717590();
    *puVar2 = &PTR_FUN_00a7e29c;
  }
  local_4 = 0xffffffff;
  thunk_FUN_00723020(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_00709de0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00717790(param_1);
  param_1 = FUN_0070f910(DAT_00b3faa8);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00709e30(undefined4 param_1)

{
  byte bVar1;
  int *in_ECX;
  
  bVar1 = (byte)(short)in_ECX[6];
  if ((bVar1 >> 1 & 1) != 0) {
    if ((bVar1 >> 4 & 1) != 0) {
      (**(code **)(*in_ECX + 0x68))();
      return;
    }
    (**(code **)(*in_ECX + 100))(param_1);
  }
  return;
}



void FUN_00709e60(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *(undefined1 *)(in_ECX + 2) = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *in_ECX = &PTR_FUN_00a7e350;
  return;
}



void FUN_00709ea0(byte param_1)

{
  FUN_00731ae0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00709ee0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00707f00(param_1);
  FUN_00712ae0();
  FUN_00712ae0();
  *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) & 0xffbf;
  return;
}



void FUN_0070a0d0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  uint uVar2;
  
  if ((char)param_2 != '\0') {
    FUN_0047c930(param_1,1);
  }
  (**(code **)(*in_ECX + 0x74))();
  uVar2 = 0;
  in_ECX[0xb] = 0;
  if (*(short *)((int)in_ECX + 0xb6) != 0) {
    do {
      piVar1 = *(int **)(in_ECX[0x2c] + uVar2 * 4);
      if ((piVar1 != (int *)0x0) &&
         ((**(code **)(*piVar1 + 0x60))(param_1,param_2), (float)piVar1[0xb] != 0.0)) {
        if ((float)in_ECX[0xb] == 0.0) {
          in_ECX[8] = piVar1[8];
          in_ECX[9] = piVar1[9];
          in_ECX[10] = piVar1[10];
          in_ECX[0xb] = piVar1[0xb];
        }
        else {
          FUN_0072a6b0(piVar1 + 8);
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)((int)in_ECX + 0xb6));
  }
  return;
}



void FUN_0070a190(undefined4 param_1)

{
  int *piVar1;
  byte bVar2;
  int *in_ECX;
  code *pcVar3;
  uint uVar4;
  
  FUN_0047c930(param_1,*(byte *)(in_ECX + 6) >> 3 & 1);
  if ((*(byte *)(in_ECX + 6) >> 2 & 1) != 0) {
    (**(code **)(*in_ECX + 0x74))();
  }
  uVar4 = 0;
  in_ECX[0xb] = 0;
  if (*(short *)((int)in_ECX + 0xb6) != 0) {
    do {
      piVar1 = *(int **)(in_ECX[0x2c] + uVar4 * 4);
      if (piVar1 != (int *)0x0) {
        bVar2 = (byte)(short)piVar1[6];
        if ((bVar2 >> 1 & 1) != 0) {
          if ((bVar2 >> 4 & 1) == 0) {
            pcVar3 = *(code **)(*piVar1 + 100);
          }
          else {
            pcVar3 = *(code **)(*piVar1 + 0x68);
          }
          (*pcVar3)(param_1);
        }
        if ((float)piVar1[0xb] != 0.0) {
          if ((float)in_ECX[0xb] == 0.0) {
            in_ECX[8] = piVar1[8];
            in_ECX[9] = piVar1[9];
            in_ECX[10] = piVar1[10];
            in_ECX[0xb] = piVar1[0xb];
          }
          else {
            FUN_0072a6b0(piVar1 + 8);
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)((int)in_ECX + 0xb6));
  }
  return;
}



void FUN_0070a280(undefined4 param_1)

{
  int *piVar1;
  int *in_ECX;
  uint uVar2;
  
  FUN_0047c930(param_1,*(byte *)(in_ECX + 6) >> 3 & 1);
  if ((*(byte *)(in_ECX + 6) >> 2 & 1) != 0) {
    (**(code **)(*in_ECX + 0x74))();
    FUN_0072a820(in_ECX + 0x33,in_ECX + 0x19);
  }
  uVar2 = 0;
  if (*(short *)((int)in_ECX + 0xb6) != 0) {
    do {
      piVar1 = *(int **)(in_ECX[0x2c] + uVar2 * 4);
      if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 6) >> 1 & 1) != 0)) {
        (**(code **)(*piVar1 + 0x68))(param_1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)((int)in_ECX + 0xb6));
  }
  return;
}



void FUN_0070a310(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  uint uVar2;
  
  FUN_0047c930(param_1,1);
  if (*(short *)(in_ECX + 0xb6) != 0) {
    uVar2 = 0;
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0xb0) + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x4c))(param_1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 0xb6));
  }
  return;
}



void FUN_0070a360(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  if (*(short *)(in_ECX + 0xb6) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0xb0) + uVar2 * 4);
      if ((iVar1 != 0) && (*(float *)(iVar1 + 0x2c) != 0.0)) {
        if (*(float *)(in_ECX + 0x2c) == 0.0) {
          *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(iVar1 + 0x20);
          *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(iVar1 + 0x24);
          *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(iVar1 + 0x28);
          *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(iVar1 + 0x2c);
        }
        else {
          FUN_0072a6b0(iVar1 + 0x20);
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 0xb6));
  }
  return;
}



undefined4 FUN_0070a3e0(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  LONG LVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c98a4;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = 0;
  local_18 = (undefined4 *)0x0;
  local_4 = 1;
  if (*(int *)(in_ECX + 0x1c) == 0) {
    local_14 = (undefined4 *)FUN_00401f00(0x30,uVar1);
    local_4._0_1_ = 3;
    if (local_14 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_007319e0();
    }
    local_4._0_1_ = 1;
    local_18 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
      local_18 = puVar4;
    }
  }
  else {
    uVar2 = FUN_0070a3e0(&local_14);
    local_4._0_1_ = 2;
    FUN_0055e2a0(uVar2);
    puVar4 = local_14;
    local_4._0_1_ = 1;
    if (((local_14 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(local_14 + 1), LVar3 == 0)
        ) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
  }
  FUN_007077d0(param_1,local_18,0);
  local_10 = 1;
  local_4 = (uint)local_4._1_3_ << 8;
  if ((local_18 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(local_18 + 1), LVar3 == 0)) {
    (**(code **)*local_18)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



undefined4 * FUN_0070a500(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  int in_ECX;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  bool bVar10;
  undefined4 *local_1c;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c98e1;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c = param_2;
  if (param_2 != (undefined4 *)0x0) {
    InterlockedIncrement(param_2 + 1);
  }
  bVar10 = false;
  local_4 = 1;
  puVar9 = param_2;
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)param_2[3];
    while (puVar1 != (undefined4 *)0x0) {
      iVar8 = puVar1[1];
      puVar1 = (undefined4 *)*puVar1;
      if ((iVar8 != 0) && (cVar3 = FUN_00708ce0(in_ECX), cVar3 != '\0')) {
        if (!bVar10) {
          puVar5 = (undefined4 *)FUN_00731b60();
          if (puVar9 != puVar5) {
            if ((puVar9 != (undefined4 *)0x0) &&
               (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) {
              (**(code **)*puVar9)(1);
            }
            puVar9 = puVar5;
            local_1c = puVar5;
            if (puVar5 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar5 + 1);
            }
          }
          bVar10 = true;
        }
        FUN_00731d80(iVar8);
      }
    }
    puVar1 = (undefined4 *)param_2[4];
    while (puVar1 != (undefined4 *)0x0) {
      iVar8 = puVar1[1];
      puVar1 = (undefined4 *)*puVar1;
      if ((iVar8 != 0) && (cVar3 = FUN_00708ce0(in_ECX), cVar3 != '\0')) {
        if (!bVar10) {
          puVar5 = (undefined4 *)FUN_00731b60();
          if (puVar9 != puVar5) {
            if ((puVar9 != (undefined4 *)0x0) &&
               (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) {
              (**(code **)*puVar9)(1);
            }
            puVar9 = puVar5;
            local_1c = puVar5;
            if (puVar5 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar5 + 1);
            }
          }
          bVar10 = true;
        }
        FUN_00731d80(iVar8);
      }
    }
    puVar1 = (undefined4 *)param_2[5];
    while (puVar1 != (undefined4 *)0x0) {
      iVar8 = puVar1[1];
      puVar1 = (undefined4 *)*puVar1;
      if ((iVar8 != 0) && (cVar3 = FUN_00708ce0(in_ECX), cVar3 != '\0')) {
        if (!bVar10) {
          puVar5 = (undefined4 *)FUN_00731b60();
          if (puVar9 != puVar5) {
            if ((puVar9 != (undefined4 *)0x0) &&
               (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) {
              (**(code **)*puVar9)(1);
            }
            puVar9 = puVar5;
            local_1c = puVar5;
            if (puVar5 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar5 + 1);
            }
          }
          bVar10 = true;
        }
        FUN_00731d80(iVar8);
      }
    }
    iVar8 = param_2[6];
    iVar2 = param_2[7];
    if ((iVar8 != 0) && (cVar3 = FUN_00708ce0(in_ECX), cVar3 != '\0')) {
      if (!bVar10) {
        uVar7 = FUN_00731b60();
        FUN_0075fa90(uVar7);
        bVar10 = true;
        puVar9 = local_1c;
      }
      FUN_00731d80(iVar8);
    }
    if ((iVar2 != 0) && (cVar3 = FUN_00708ce0(in_ECX), cVar3 != '\0')) {
      if (!bVar10) {
        uVar7 = FUN_00731b60();
        FUN_0075fa90(uVar7);
        bVar10 = true;
        puVar9 = local_1c;
      }
      FUN_00731d80(iVar2);
    }
  }
  if (*(int *)(in_ECX + 200) == 0) {
    *param_1 = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  else {
    if (param_2 == (undefined4 *)0x0) {
      iVar8 = FUN_00401f00(0x20);
      if (iVar8 == 0) {
        param_2 = (undefined4 *)0x0;
      }
      else {
        param_2 = (undefined4 *)FUN_00709e60();
      }
LAB_0070a7b8:
      FUN_0075fa90(param_2);
      puVar9 = local_1c;
    }
    else if (param_3 == '\0') {
      if (!bVar10) goto LAB_0070a7b8;
    }
    else if (!bVar10) {
      param_2 = (undefined4 *)FUN_00731b60(uVar4);
      goto LAB_0070a7b8;
    }
    puVar1 = *(undefined4 **)(in_ECX + 0xc0);
    while (puVar1 != (undefined4 *)0x0) {
      puVar5 = puVar1 + 2;
      puVar1 = (undefined4 *)*puVar1;
      FUN_00731ce0(*puVar5);
    }
    *param_1 = puVar9;
    bVar10 = true;
    if (puVar9 == (undefined4 *)0x0) goto LAB_0070a7f9;
    InterlockedIncrement(puVar9 + 1);
  }
  bVar10 = puVar9 == (undefined4 *)0x0;
LAB_0070a7f9:
  local_4 = local_4 & 0xffffff00;
  if ((!bVar10) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) {
    (**(code **)*puVar9)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_0070a840(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9ba8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007077d0(&param_1,param_1,1);
  uVar5 = 0;
  local_4 = 0;
  if (*(short *)(in_ECX + 0xb6) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0xb0) + uVar5 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x6c))(param_1,uVar3);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(in_ECX + 0xb6));
  }
  puVar2 = param_1;
  local_4 = 0xffffffff;
  if (((param_1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_1 + 1), LVar4 == 0)) &&
     (puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0070a900(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9ba8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0070a500(&param_1,param_1,1);
  uVar5 = 0;
  local_4 = 0;
  if (*(short *)(in_ECX + 0xb6) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0xb0) + uVar5 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x70))(param_1,uVar3);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(in_ECX + 0xb6));
  }
  puVar2 = param_1;
  local_4 = 0xffffffff;
  if (((param_1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_1 + 1), LVar4 == 0)) &&
     (puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0070a9c0(void)

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
        (**(code **)(*piVar1 + 0x50))();
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 0xb6));
  }
  FUN_00718a80(local_34);
  FUN_0072a820(in_ECX + 0x20,local_34);
  return;
}



void FUN_0070ab40(undefined4 param_1)

{
  int in_ECX;
  uint uVar1;
  
  if ((*(float *)(in_ECX + 0x2c) != 0.0) && (uVar1 = 0, *(short *)(in_ECX + 0xb6) != 0)) {
    do {
      if (*(int *)(*(int *)(in_ECX + 0xb0) + uVar1 * 4) != 0) {
        FUN_007073d0(param_1);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(in_ECX + 0xb6));
  }
  return;
}



void FUN_0070ab90(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_ECX;
  uint uVar4;
  
  FUN_00707a40(param_1);
  puVar2 = *(undefined4 **)(in_ECX + 0xc0);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    (**(code **)(*param_1 + 0xbc))(*puVar1);
  }
  uVar4 = 0;
  if (*(short *)(in_ECX + 0xb6) != 0) {
    do {
      piVar3 = *(int **)(*(int *)(in_ECX + 0xb0) + uVar4 * 4);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x80))(param_1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(in_ECX + 0xb6));
  }
  return;
}



int FUN_0070ac00(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  iVar2 = FUN_007073f0(param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
    if (*(short *)(in_ECX + 0xb6) != 0) {
      if (*(short *)(in_ECX + 0xb6) == 0) goto LAB_0070ac3d;
      do {
        piVar1 = *(int **)(*(int *)(in_ECX + 0xb0) + uVar3 * 4);
        if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x58))(param_1), iVar2 != 0))
        {
          return iVar2;
        }
LAB_0070ac3d:
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(in_ECX + 0xb6));
    }
    iVar2 = 0;
  }
  return iVar2;
}



void FUN_0070ac60(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  LONG LVar3;
  int in_ECX;
  uint uVar4;
  
  FUN_00707e90(param_1,param_2);
  uVar4 = 0;
  if (*(short *)(in_ECX + 0xb6) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0xb0) + uVar4 * 4);
      if (piVar1 != (int *)0x0) {
        uVar2 = (**(code **)(*piVar1 + 0x18))(param_2);
        (**(code **)(*param_1 + 0x90))(&stack0x00000000,uVar4,uVar2);
        if (((param_1 != (int *)0x0) && (LVar3 = InterlockedDecrement(param_1 + 1), LVar3 == 0)) &&
           (param_1 != (int *)0x0)) {
          (**(code **)*param_1)(1);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(in_ECX + 0xb6));
  }
  return;
}



undefined1 FUN_0070acf0(undefined4 param_1)

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



undefined1 FUN_0070ad70(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  
  cVar4 = FUN_00707b50(param_1);
  if (cVar4 == '\0') {
    return 0;
  }
  uVar7 = (uint)*(ushort *)(in_ECX + 0xb6);
  if (uVar7 != *(ushort *)(param_1 + 0xb6)) {
    return 0;
  }
  uVar8 = 0;
  if (uVar7 != 0) {
    do {
      if (uVar8 < *(ushort *)(in_ECX + 0xb6)) {
        piVar6 = *(int **)(*(int *)(in_ECX + 0xb0) + uVar8 * 4);
      }
      else {
        piVar6 = (int *)0x0;
      }
      if (uVar8 < *(ushort *)(param_1 + 0xb6)) {
        iVar5 = *(int *)(*(int *)(param_1 + 0xb0) + uVar8 * 4);
      }
      else {
        iVar5 = 0;
      }
      if (piVar6 == (int *)0x0) {
        if (iVar5 != 0) {
          return 0;
        }
      }
      else {
        if (iVar5 == 0) {
          return 0;
        }
        cVar4 = (**(code **)(*piVar6 + 0x2c))(iVar5);
        if (cVar4 == '\0') {
          return 0;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  if (*(int *)(in_ECX + 200) == *(int *)(param_1 + 200)) {
    if (*(int *)(in_ECX + 200) == 0) {
      return 1;
    }
    puVar2 = *(undefined4 **)(in_ECX + 0xc0);
    puVar3 = *(undefined4 **)(param_1 + 0xc0);
    do {
      while( true ) {
        if (puVar2 == (undefined4 *)0x0) {
          return 1;
        }
        piVar6 = puVar2 + 2;
        puVar2 = (undefined4 *)*puVar2;
        piVar1 = puVar3 + 2;
        puVar3 = (undefined4 *)*puVar3;
        iVar5 = *piVar1;
        if ((int *)*piVar6 == (int *)0x0) break;
        if (iVar5 == 0) {
          return 0;
        }
        cVar4 = (**(code **)(*(int *)*piVar6 + 0x2c))(iVar5);
        if (cVar4 == '\0') {
          return 0;
        }
      }
    } while (iVar5 == 0);
  }
  return 0;
}



void FUN_0070ae70(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c9908;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7e368;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a7e358;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0070aee0(byte param_1)

{
  FUN_0070ae70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0070af00(undefined4 *param_1,undefined4 *param_2)

{
  LONG *lpAddend;
  LONG LVar1;
  int in_ECX;
  uint uVar2;
  int *unaff_FS_OFFSET;
  bool bVar3;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9940;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (undefined4 *)0x0) {
    lpAddend = param_1 + 1;
    InterlockedIncrement(lpAddend);
    FUN_007074b0(in_ECX);
    bVar3 = (char)param_2 == '\0';
    param_2 = param_1;
    if (bVar3) {
      InterlockedIncrement(lpAddend);
      uVar2 = (uint)*(ushort *)(in_ECX + 0xb6);
      local_4 = 1;
      if (*(ushort *)(in_ECX + 0xb4) <= uVar2) {
        FUN_00523b10(*(ushort *)(in_ECX + 0xba) + uVar2);
      }
      FUN_004b34e0(uVar2,&param_2);
    }
    else {
      InterlockedIncrement(lpAddend);
      local_4 = 0;
      FUN_004b3680(&param_2);
    }
    local_4 = 0xffffffff;
    LVar1 = InterlockedDecrement(lpAddend);
    if (LVar1 == 0) {
      (**(code **)*param_1)(1);
    }
    LVar1 = InterlockedDecrement(lpAddend);
    if (LVar1 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int * FUN_0070b000(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca9b8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 < (undefined4 *)(uint)*(ushort *)(in_ECX + 0xb6)) {
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0xb0) + (int)param_2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[7] = 0;
      FUN_006d7f60(&param_2,puVar2);
      puVar2 = param_2;
      if (param_2 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(param_2 + 1);
        if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1,uVar3);
        }
      }
    }
    *param_1 = (int)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
    local_4 = 0xffffffff;
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if (LVar4 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *unaff_FS_OFFSET = local_c;
    return param_1;
  }
  *param_1 = 0;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



int * FUN_0070b120(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7c98;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = 0;
  if (*(short *)(in_ECX + 0xb6) != 0) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0xb0) + uVar5 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar1 + 1);
      }
      local_4 = 0;
      if ((puVar1 != (undefined4 *)0x0) && (puVar1 == param_2)) {
        puVar1[7] = 0;
        FUN_006d7f60(&param_2,uVar5);
        puVar2 = param_2;
        if ((param_2 != (undefined4 *)0x0) &&
           ((LVar4 = InterlockedDecrement(param_2 + 1), LVar4 == 0 && (puVar2 != (undefined4 *)0x0))
           )) {
          (**(code **)*puVar2)(1,uVar3);
        }
        *param_1 = (int)puVar1;
        InterlockedIncrement(puVar1 + 1);
        local_4 = 0xffffffff;
        LVar4 = InterlockedDecrement(puVar1 + 1);
        if (LVar4 == 0) {
          (**(code **)*puVar1)(1);
        }
        goto LAB_0070b1c4;
      }
      local_4 = 0xffffffff;
      if ((puVar1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar1 + 1), LVar4 == 0)) {
        (**(code **)*puVar1)(1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(in_ECX + 0xb6));
  }
  *param_1 = 0;
LAB_0070b1c4:
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



int * FUN_0070b250(int *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puVar1 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9991;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 < *(ushort *)(in_ECX + 0xb6)) {
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0xb0) + param_2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
    puVar2 = param_3;
    local_4 = 2;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[7] = 0;
    }
    if (param_3 != (undefined4 *)0x0) {
      FUN_007074b0(in_ECX);
      param_3 = puVar2;
      InterlockedIncrement(puVar2 + 1);
    }
    local_4._0_1_ = 3;
    FUN_004b34e0(param_2,&param_3);
    local_4 = CONCAT31(local_4._1_3_,2);
    if ((puVar2 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar2 + 1), LVar3 == 0)) {
      (**(code **)*puVar2)(1);
    }
    *param_1 = (int)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
    local_4 = local_4 & 0xffffff00;
    if ((puVar1 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar1 + 1), LVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      FUN_007074b0(in_ECX);
      param_3 = puVar1;
      InterlockedIncrement(puVar1 + 1);
    }
    local_4 = 1;
    if (*(ushort *)(in_ECX + 0xb4) <= param_2) {
      FUN_00523b10(*(ushort *)(in_ECX + 0xba) + param_2);
    }
    FUN_004b34e0(param_2,&param_3);
    local_4 = local_4 & 0xffffff00;
    if ((puVar1 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar1 + 1), LVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    *param_1 = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0070b4ab) */
/* WARNING: Removing unreachable block (ram,0x0070b4b9) */

undefined4 FUN_0070b400(undefined4 param_1)

{
  undefined4 uVar1;
  LONG LVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c99d9;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = 0;
  local_4 = 1;
  if (*(int *)(in_ECX + 0x1c) != 0) {
    uVar1 = FUN_0070b400(&local_14);
    local_4._0_1_ = 2;
    FUN_0055e2a0(uVar1);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (((local_14 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(local_14 + 1), LVar2 == 0)
        ) && (local_14 != (undefined4 *)0x0)) {
      (**(code **)*local_14)(1);
    }
  }
  FUN_0070a500(param_1,0,0);
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_0070b4e0(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
    iVar1 = *(int *)(iVar1 + 4);
    cVar3 = FUN_0055e000(iVar2,&param_1);
    if (cVar3 == '\0') {
      param_1 = iVar2;
    }
    FUN_00708e40(param_1);
  }
  return;
}



void FUN_0070b530(int param_1)

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
  int *local_4;
  
  local_4 = in_ECX;
  FUN_007081b0(param_1);
  uVar1 = FUN_007124d0();
  if (uVar1 != 0) {
    FUN_00523b10(uVar1);
    uVar8 = 0;
    if (uVar1 != 0) {
      do {
        uVar2 = FUN_007124a0();
        (**(code **)(*in_ECX + 0x90))(&local_4,uVar8,uVar2);
        piVar7 = local_4;
        if (((local_4 != (int *)0x0) && (LVar3 = InterlockedDecrement(local_4 + 1), LVar3 == 0)) &&
           (piVar7 != (int *)0x0)) {
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



void FUN_0070b6a0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  int iStack_8;
  undefined4 local_4;
  
  piVar3 = param_1;
  FUN_00708330(param_1);
  param_1 = (int *)(uint)*(ushort *)(in_ECX + 0xb6);
  local_4 = 4;
  (**(code **)(piVar3[0x88] + 8))(piVar3[0x88],&param_1,4,&local_4,1);
  if (param_1 != (int *)0x0) {
    uVar5 = 0;
    do {
      if (uVar5 < *(ushort *)(in_ECX + 0xb6)) {
        uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0xb0) + uVar5 * 4);
      }
      else {
        uVar4 = 0;
      }
      (**(code **)(*piVar3 + 0x2c))(uVar4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_1);
  }
  iStack_8 = *(int *)(in_ECX + 200);
  local_4 = 4;
  (**(code **)(piVar3[0x88] + 8))(piVar3[0x88],&iStack_8,4,&local_4,1);
  if (0 < iStack_8) {
    iVar2 = *(int *)(in_ECX + 0xc4);
    while (iVar2 != 0) {
      puVar1 = (undefined4 *)(iVar2 + 8);
      iVar2 = *(int *)(iVar2 + 4);
      (**(code **)(*piVar3 + 0x2c))(*puVar1);
    }
  }
  return;
}



void FUN_0070b780(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9a08;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00708450(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a7e38c;
  FUN_004b2d30(param_1,1);
  in_ECX[0x32] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x2f] = &PTR_FUN_00a7e378;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0070b810(void)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  LONG LVar6;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int *local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c9a5c;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7e38c;
  local_4 = 2;
  FUN_00708b80(uVar5);
  if (*(short *)((int)in_ECX + 0xb6) != 0) {
    uVar5 = 0;
    do {
      FUN_0070b000(local_14,uVar5);
      piVar1 = local_14[0];
      if ((local_14[0] != (int *)0x0) && (LVar6 = InterlockedDecrement(local_14[0] + 1), LVar6 == 0)
         ) {
        (**(code **)*piVar1)(1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)((int)in_ECX + 0xb6));
  }
  piVar1 = in_ECX + 0x2f;
  *piVar1 = (int)&PTR_FUN_00a7e368;
  local_4._0_1_ = 3;
  local_14[0] = piVar1;
  puVar4 = (undefined4 *)in_ECX[0x30];
  while (puVar4 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar4;
    (**(code **)(*piVar1 + 8))(puVar4);
    puVar4 = puVar2;
  }
  in_ECX[0x32] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  *piVar1 = (int)&PTR_LAB_00a7e358;
  pvVar3 = (void *)in_ECX[0x2c];
  local_4 = (uint)local_4._1_3_ << 8;
  in_ECX[0x2b] = &PTR_FUN_00a43850;
  if (pvVar3 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar3,4,*(int *)((int)pvVar3 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar3 + -4);
  }
  local_4 = 0xffffffff;
  FUN_00707ca0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0070b930(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = *(int **)(in_ECX + 0xc0);
  if (piVar2 != (int *)0x0) {
    while (piVar1 = (int *)*piVar2, param_1 != piVar2[2]) {
      piVar2 = piVar1;
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    if (piVar2 != (int *)0x0) {
      FUN_00776690(&param_1);
      FUN_0070b930(in_ECX);
    }
  }
  return;
}



undefined4 FUN_0070b980(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
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
  iVar2 = FUN_00401f00(0xdc,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_0070b780(*(undefined2 *)(in_ECX + 0xb6));
  }
  local_4 = 0xffffffff;
  FUN_0070ac60(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_0070ba00(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  
  uVar2 = param_1;
  FUN_00707ab0(param_1);
  FUN_0055e000(in_ECX,&param_1);
  if (*(int *)(in_ECX + 200) != 0) {
    FUN_0070b4e0(in_ECX + 0xbc,uVar2);
  }
  uVar3 = 0;
  if (*(short *)(in_ECX + 0xb6) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0xb0) + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x38))(uVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(in_ECX + 0xb6));
  }
  return;
}



undefined4 FUN_0070ba70(void)

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
  local_10 = FUN_00401f00(0xdc,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_0070b780(0);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0070bae0(int param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  int local_48;
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_48;
  FUN_007086b0(param_1);
  local_48 = FUN_0070f910(DAT_00b3fab0);
  uVar5 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar5) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar5);
  }
  FUN_0042bb90(uVar5,&local_48);
  local_48 = FUN_0070f950("m_bVisual",*(float *)(in_ECX + 0x2c) != 0.0);
  uVar5 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar5) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar5);
  }
  FUN_0042bb90(uVar5,&local_48);
  if (*(int *)(in_ECX + 200) != 0) {
    puVar2 = *(undefined4 **)(in_ECX + 0xc0);
    local_48 = 0;
    while (puVar2 != (undefined4 *)0x0) {
      uVar3 = puVar2[2];
      puVar2 = (undefined4 *)*puVar2;
      FUN_006c5d40(local_44,0x40,"effect[%d]",local_48);
      iVar4 = FUN_0070fbe0(local_44,uVar3);
      uVar1 = *(ushort *)(param_1 + 10);
      uVar5 = (uint)uVar1;
      if (*(ushort *)(param_1 + 8) <= uVar5) {
        FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar5);
      }
      if (uVar5 < *(ushort *)(param_1 + 10)) {
        if (iVar4 == 0) {
          if (*(int *)(*(int *)(param_1 + 4) + uVar5 * 4) != 0) {
            *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(param_1 + 4) + uVar5 * 4) == 0) {
          *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(param_1 + 10) = uVar1 + 1;
        if (iVar4 != 0) {
          *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
        }
      }
      local_48 = local_48 + 1;
      *(int *)(*(int *)(param_1 + 4) + uVar5 * 4) = iVar4;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0070bc70(int param_1,int param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9a8b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(param_4 + 4) == 0xf) {
    piVar4 = (int *)FUN_00401f00(0x18,uVar3);
    local_4 = 0;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      FUN_00731ea0();
      *piVar4 = (int)&PTR_FUN_00a7e44c;
      piVar4[5] = 0;
    }
    piVar4[2] = param_1;
    pcVar1 = *(code **)(*piVar4 + 0x54);
    piVar4[3] = param_2;
    local_4 = 0xffffffff;
    cVar2 = (*pcVar1)(param_4);
    if (cVar2 != '\0') {
      iVar5 = (uint)(*(byte *)(param_4 + 1) >> 3) * piVar4[3] * piVar4[2];
      piVar4[5] = iVar5;
      DAT_00b3fab8 = DAT_00b3fab8 + iVar5;
      uVar3 = piVar4[5];
      iVar5 = 0;
      if ((uVar3 & 0xfffff000) != uVar3) {
        iVar5 = ((uVar3 & 0xfffff000) - uVar3) + 0x1000;
      }
      _DAT_00b3fabc = _DAT_00b3fabc + iVar5;
      *unaff_FS_OFFSET = unaff_ESI;
      return piVar4;
    }
    (**(code **)*piVar4)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return (int *)0x0;
}



void FUN_0070bd60(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x10);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x10) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070bdb0(byte param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  *in_ECX = &PTR_FUN_00a7e44c;
  DAT_00b3fab8 = DAT_00b3fab8 - in_ECX[5];
  uVar1 = in_ECX[5];
  iVar2 = 0;
  if ((uVar1 & 0xfffff000) != uVar1) {
    iVar2 = ((uVar1 & 0xfffff000) - uVar1) + 0x1000;
  }
  _DAT_00b3fabc = _DAT_00b3fabc - iVar2;
  FUN_00731ed0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_0070be00(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    return 0;
  }
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
  }
  iVar2 = (**(code **)(*param_2 + 0x98))(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_0070bc70(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_2,iVar2);
  FUN_00401f20(iVar2);
  return uVar1;
}



undefined4 * FUN_0070be70(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar3 = (undefined4 *)FUN_00401f00(0x18,uVar2);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00731ea0();
    *puVar3 = &PTR_FUN_00a7e44c;
    puVar3[5] = 0;
  }
  puVar3[2] = param_1;
  puVar3[3] = param_2;
  puVar1 = (undefined4 *)puVar3[4];
  local_4 = 0xffffffff;
  if (puVar1 != param_3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    puVar3[4] = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_0070bf30(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  LONG LVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7c98;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = DAT_00b3f928;
  if (DAT_00b3f928 != 0) {
    piVar1 = *(int **)(DAT_00b3f928 + 8);
    if (piVar1 != (int *)0x0) {
      InterlockedIncrement(piVar1 + 1);
    }
    local_4 = 0;
    if (piVar1 == (int *)0x0) {
      uVar2 = param_1[1];
      uVar6 = 0;
      if (uVar2 != 0) {
        do {
          (**(code **)(**(int **)(*param_1 + uVar6 * 4) + 0x84))(iVar3,uVar4);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
    }
    else {
      (**(code **)(*piVar1 + 0x54))(param_1);
    }
    local_4 = 0xffffffff;
    if ((piVar1 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar1 + 1), LVar5 == 0)) {
      (**(code **)*piVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0070c000(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  LONG LVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd558;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((DAT_00b3f928 != 0) && (param_1 != 0)) {
    piVar1 = *(int **)(DAT_00b3f928 + 8);
    if (piVar1 != (int *)0x0) {
      InterlockedIncrement(piVar1 + 1);
    }
    local_4 = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x4c))(param_1,uVar2);
    }
    FUN_0070bf30(param_2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x50))();
    }
    local_4 = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      LVar3 = InterlockedDecrement(piVar1 + 1);
      if (LVar3 == 0) {
        (**(code **)*piVar1)(1);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0070c0b0(int param_1,int param_2,int *param_3,int param_4)

{
  if (((DAT_00b3f928 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    if (param_4 == 0) {
      param_4 = param_3[2];
    }
    FUN_00701970(param_1);
    if (param_4 != 0) {
      *(undefined4 *)(param_4 + 4) = 0;
      (**(code **)(*param_3 + 8))(param_1,param_2,param_4);
      FUN_0070c000(param_1,param_4);
      return;
    }
    (**(code **)(*param_3 + 8))(param_1,param_2,0);
  }
  return;
}



void FUN_0070c120(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_34 [52];
  
  if (*(int *)(in_ECX + 0x1c) == 0) {
    puVar1 = (undefined4 *)(in_ECX + 0x30);
  }
  else {
    puVar1 = (undefined4 *)FUN_0053d7a0(local_34,in_ECX + 0x30);
  }
  puVar3 = (undefined4 *)(in_ECX + 100);
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  if (*(int **)(in_ECX + 0xa8) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0070c166. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0xa8) + 0x50))();
    return;
  }
  return;
}



void FUN_0070c170(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7e4c4;
  FUN_00707ca0();
  return;
}



void FUN_0070c190(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  
  fVar1 = (float)param_1[4];
  *(float *)(in_ECX + 0xfc) = fVar1;
  fVar2 = (float)param_1[5] / *(float *)(in_ECX + 0x10c);
  if (fVar1 < fVar2) {
    *(float *)(in_ECX + 0xfc) = fVar2;
  }
  if (*(float *)(in_ECX + 0xfc) < *(float *)(in_ECX + 0x108)) {
    *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(in_ECX + 0x108);
  }
  *(undefined4 *)(in_ECX + 0xec) = *param_1;
  *(undefined4 *)(in_ECX + 0xf0) = param_1[1];
  *(undefined4 *)(in_ECX + 0xf4) = param_1[2];
  *(undefined4 *)(in_ECX + 0xf8) = param_1[3];
  *(undefined4 *)(in_ECX + 0x100) = param_1[5];
  *(undefined1 *)(in_ECX + 0x104) = *(undefined1 *)(param_1 + 6);
  return;
}



undefined4 FUN_0070c230(float *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int *in_ECX;
  
  fVar2 = (param_1[2] - (float)in_ECX[0x24]) * (float)in_ECX[0x1f] +
          (param_1[1] - (float)in_ECX[0x23]) * (float)in_ECX[0x1c] +
          (*param_1 - (float)in_ECX[0x22]) * (float)in_ECX[0x19];
  fVar3 = fVar2 - param_1[3];
  fVar2 = fVar2 + param_1[3];
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    param_1 = (float *)fVar3;
    if (fVar3 < fVar2 / (float)in_ECX[0x43]) {
      param_1 = (float *)(fVar2 / (float)in_ECX[0x43]);
    }
    if ((float)param_1 < (float)in_ECX[0x42]) {
      param_1 = (float *)in_ECX[0x42];
    }
    pcVar1 = *(code **)(*in_ECX + 0x74);
    in_ECX[0x3f] = (int)param_1;
    in_ECX[0x40] = (int)fVar2;
    (*pcVar1)();
    (**(code **)(*in_ECX + 0x78))();
    return 1;
  }
  return 0;
}



undefined4 FUN_0070c340(float *param_1)

{
  code *pcVar1;
  int *piVar2;
  int *in_ECX;
  int iVar3;
  int *piVar4;
  float local_78;
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
  int local_48 [9];
  undefined1 local_24 [36];
  
  local_78 = (float)in_ECX[0x22] - *param_1;
  local_74 = (float)in_ECX[0x23] - param_1[1];
  local_70 = (float)in_ECX[0x24] - param_1[2];
  if (1e-10 <= local_70 * local_70 + local_74 * local_74 + local_78 * local_78) {
    FUN_0043f350();
    FUN_004bf9e0(&local_6c,&local_78);
    if (0.5 <= local_64 * local_64 + local_6c * local_6c + local_68 * local_68) {
      FUN_004bf9e0(&local_60,&local_6c);
      if (0.5 <= local_58 * local_58 + local_60 * local_60 + local_5c * local_5c) {
        local_54 = -local_78;
        local_50 = -local_74;
        local_4c = -local_70;
        FUN_0070fcc0(&local_54,&local_60,&local_6c);
        if (in_ECX[7] != 0) {
          piVar2 = (int *)FUN_00710490(local_24,local_48);
          piVar4 = local_48;
          for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar4 = *piVar2;
            piVar2 = piVar2 + 1;
            piVar4 = piVar4 + 1;
          }
        }
        pcVar1 = *(code **)(*in_ECX + 0x74);
        piVar2 = local_48;
        piVar4 = in_ECX + 0xc;
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar4 = *piVar2;
          piVar2 = piVar2 + 1;
          piVar4 = piVar4 + 1;
        }
        (*pcVar1)();
        (**(code **)(*in_ECX + 0x78))();
        return 1;
      }
    }
  }
  return 0;
}



void FUN_0070c4d0(float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x104) != '\0') {
    fVar1 = *(float *)(in_ECX + 0x70);
    fVar2 = *(float *)(in_ECX + 0x7c);
    *param_4 = *(float *)(in_ECX + 100);
    param_4[1] = fVar1;
    param_4[2] = fVar2;
    FUN_0043f350();
    fVar1 = *(float *)(in_ECX + 0x74);
    fVar2 = *(float *)(in_ECX + 0x80);
    fVar3 = *(float *)(in_ECX + 0x78);
    fVar4 = *(float *)(in_ECX + 0x84);
    fVar5 = *(float *)(in_ECX + 0x8c);
    fVar6 = *(float *)(in_ECX + 0x90);
    *param_3 = *(float *)(in_ECX + 0x88) + param_1 * *(float *)(in_ECX + 0x6c) +
               param_2 * *(float *)(in_ECX + 0x68);
    param_3[1] = fVar5 + fVar3 * param_1 + fVar1 * param_2;
    param_3[2] = fVar6 + param_1 * fVar4 + param_2 * fVar2;
    return;
  }
  fVar1 = *(float *)(in_ECX + 0x74);
  fVar2 = *(float *)(in_ECX + 0x80);
  fVar3 = *(float *)(in_ECX + 0x78);
  fVar4 = *(float *)(in_ECX + 0x84);
  fVar5 = *(float *)(in_ECX + 0x70);
  fVar6 = *(float *)(in_ECX + 0x7c);
  *param_4 = *(float *)(in_ECX + 100) + param_1 * *(float *)(in_ECX + 0x6c) +
             param_2 * *(float *)(in_ECX + 0x68);
  param_4[1] = fVar5 + fVar3 * param_1 + fVar1 * param_2;
  param_4[2] = fVar6 + param_1 * fVar4 + param_2 * fVar2;
  FUN_0043f350();
  *param_3 = *(float *)(in_ECX + 0x88);
  param_3[1] = *(float *)(in_ECX + 0x8c);
  param_3[2] = *(float *)(in_ECX + 0x90);
  return;
}



void FUN_0070c720(float *param_1,float *param_2,float *param_3,float param_4)

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
  float *pfVar12;
  int in_ECX;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  fVar1 = param_1[3];
  fVar5 = param_1[1];
  fVar6 = *param_1;
  local_24 = fVar6 - *(float *)(in_ECX + 0x88);
  fVar7 = param_1[2];
  local_20 = fVar5 - *(float *)(in_ECX + 0x8c);
  local_1c = fVar7 - *(float *)(in_ECX + 0x90);
  fVar2 = 1.0 / (*(float *)(in_ECX + 0x100) - *(float *)(in_ECX + 0xfc));
  local_18 = *(float *)(in_ECX + 100);
  local_14 = *(float *)(in_ECX + 0x70);
  local_10 = *(float *)(in_ECX + 0x7c);
  fVar3 = (local_10 * local_1c + local_18 * local_24 + local_14 * local_20) -
          *(float *)(in_ECX + 0xfc);
  fVar4 = 0.0;
  if (*(char *)(in_ECX + 0x104) == '\0') {
    param_2[2] = fVar2 * (fVar3 - fVar1);
    fVar4 = fVar2 * (fVar3 + fVar1);
  }
  else {
    param_2[2] = 0.0;
  }
  param_3[2] = fVar4;
  local_c = *(undefined4 *)(in_ECX + 0x68);
  local_8 = *(undefined4 *)(in_ECX + 0x74);
  local_4 = *(undefined4 *)(in_ECX + 0x80);
  pfVar12 = (float *)FUN_004bf9e0(&local_18,&local_c);
  fVar2 = *pfVar12;
  fVar3 = pfVar12[1];
  fVar4 = pfVar12[2];
  local_18 = fVar6 - fVar1 * fVar2;
  local_14 = fVar5 - fVar3 * fVar1;
  local_10 = fVar7 - fVar1 * fVar4;
  fVar8 = local_10 * *(float *)(in_ECX + 0xe4) +
          local_14 * *(float *)(in_ECX + 0xe0) + local_18 * *(float *)(in_ECX + 0xdc) +
          *(float *)(in_ECX + 0xe8);
  if (param_4 < fVar8) {
    *param_2 = (*(float *)(in_ECX + 0xb4) * local_10 +
                *(float *)(in_ECX + 0xac) * local_18 + *(float *)(in_ECX + 0xb0) * local_14 +
               *(float *)(in_ECX + 0xb8)) / fVar8;
    fVar2 = fVar6 + fVar1 * fVar2;
    fVar3 = fVar3 * fVar1 + fVar5;
    fVar4 = fVar1 * fVar4 + fVar7;
    fVar8 = *(float *)(in_ECX + 0xe8) +
            fVar4 * *(float *)(in_ECX + 0xe4) +
            fVar2 * *(float *)(in_ECX + 0xdc) + fVar3 * *(float *)(in_ECX + 0xe0);
    if (param_4 < fVar8) {
      *param_3 = (fVar4 * *(float *)(in_ECX + 0xb4) +
                  *(float *)(in_ECX + 0xac) * fVar2 + *(float *)(in_ECX + 0xb0) * fVar3 +
                 *(float *)(in_ECX + 0xb8)) / fVar8;
      local_c = *(undefined4 *)(in_ECX + 0x6c);
      local_8 = *(undefined4 *)(in_ECX + 0x78);
      local_4 = *(undefined4 *)(in_ECX + 0x84);
      pfVar12 = (float *)FUN_004bf9e0(&local_18,&local_24);
      fVar2 = *pfVar12;
      fVar3 = pfVar12[1];
      fVar4 = pfVar12[2];
      fVar8 = fVar6 - fVar1 * fVar2;
      fVar9 = fVar5 - fVar3 * fVar1;
      fVar10 = fVar7 - fVar1 * fVar4;
      fVar11 = fVar10 * *(float *)(in_ECX + 0xe4) +
               fVar8 * *(float *)(in_ECX + 0xdc) + fVar9 * *(float *)(in_ECX + 0xe0) +
               *(float *)(in_ECX + 0xe8);
      if (fVar11 <= param_4) {
        param_2[1] = -1.0;
        *param_2 = -1.0;
        param_3[1] = 1.0;
        *param_3 = 1.0;
        goto LAB_0070cbb6;
      }
      param_2[1] = (*(float *)(in_ECX + 0xc4) * fVar10 +
                    *(float *)(in_ECX + 0xbc) * fVar8 + *(float *)(in_ECX + 0xc0) * fVar9 +
                   *(float *)(in_ECX + 200)) / fVar11;
      fVar6 = fVar6 + fVar1 * fVar2;
      fVar5 = fVar3 * fVar1 + fVar5;
      fVar7 = fVar1 * fVar4 + fVar7;
      fVar1 = *(float *)(in_ECX + 0xe8) +
              fVar7 * *(float *)(in_ECX + 0xe4) +
              fVar6 * *(float *)(in_ECX + 0xdc) + fVar5 * *(float *)(in_ECX + 0xe0);
      if (param_4 < fVar1) {
        param_3[1] = (fVar7 * *(float *)(in_ECX + 0xc4) +
                      *(float *)(in_ECX + 0xbc) * fVar6 + *(float *)(in_ECX + 0xc0) * fVar5 +
                     *(float *)(in_ECX + 200)) / fVar1;
        if (-1.0 <= *param_2) {
          if ((1.0 < *param_3) && (*param_3 = 1.0, 1.0 < *param_2)) {
            *param_2 = 1.0;
          }
        }
        else {
          *param_2 = -1.0;
          if (-1.0 <= *param_3) {
            if (1.0 < *param_3) {
              *param_3 = 1.0;
            }
          }
          else {
            *param_3 = -1.0;
          }
        }
        if (-1.0 <= param_2[1]) {
          if ((1.0 < param_3[1]) && (param_3[1] = 1.0, 1.0 < param_2[1])) {
            param_2[1] = 1.0;
          }
        }
        else {
          param_2[1] = -1.0;
          if (-1.0 <= param_3[1]) {
            if (1.0 < param_3[1]) {
              param_3[1] = 1.0;
            }
          }
          else {
            param_3[1] = -1.0;
          }
        }
        goto LAB_0070cbb6;
      }
    }
  }
  param_2[1] = -1.0;
  *param_2 = -1.0;
  param_3[1] = 1.0;
  *param_3 = 1.0;
LAB_0070cbb6:
  fVar1 = 0.0;
  if (param_2[2] < 0.0) {
    param_2[2] = 0.0;
    if ((param_3[2] < 0.0) || (fVar1 = 1.0, 1.0 < param_3[2])) {
      param_3[2] = fVar1;
      return;
    }
  }
  else if ((1.0 < param_3[2]) && (param_3[2] = 1.0, 1.0 < param_2[2])) {
    param_2[2] = 1.0;
    return;
  }
  return;
}



void FUN_0070cc70(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(in_ECX + 0x88);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(in_ECX + 0x8c);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(in_ECX + 0x90);
  return;
}



void FUN_0070cc90(void)

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
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 100);
  fVar10 = *(float *)(in_ECX + 0x88);
  fVar11 = *(float *)(in_ECX + 0x8c);
  fVar2 = *(float *)(in_ECX + 0x70);
  fVar12 = *(float *)(in_ECX + 0x90);
  fVar3 = *(float *)(in_ECX + 0x7c);
  fVar4 = *(float *)(in_ECX + 0x68);
  fVar5 = *(float *)(in_ECX + 0x74);
  fVar6 = *(float *)(in_ECX + 0x80);
  fVar7 = *(float *)(in_ECX + 0x6c);
  fVar8 = *(float *)(in_ECX + 0x78);
  fVar9 = *(float *)(in_ECX + 0x84);
  fVar13 = -(fVar12 * fVar9 + fVar11 * fVar8 + fVar7 * fVar10);
  fVar14 = -(fVar12 * fVar6 + fVar11 * fVar5 + fVar10 * fVar4);
  fVar10 = -(fVar2 * fVar11 + fVar1 * fVar10 + fVar3 * fVar12);
  fVar11 = *(float *)(in_ECX + 0xf0) + *(float *)(in_ECX + 0xec);
  fVar12 = *(float *)(in_ECX + 0xf8) + *(float *)(in_ECX + 0xf4);
  fVar15 = 1.0 / (*(float *)(in_ECX + 0xf0) - *(float *)(in_ECX + 0xec));
  fVar16 = 1.0 / (*(float *)(in_ECX + 0xf4) - *(float *)(in_ECX + 0xf8));
  fVar17 = 1.0 / (*(float *)(in_ECX + 0x100) - *(float *)(in_ECX + 0xfc));
  if (*(char *)(in_ECX + 0x104) != '\0') {
    fVar18 = fVar15 * 2.0;
    fVar19 = fVar16 * 2.0;
    fVar17 = 1.0 / fVar17;
    *(float *)(in_ECX + 0xac) = fVar18 * fVar7;
    *(float *)(in_ECX + 0xb0) = fVar8 * fVar18;
    *(float *)(in_ECX + 0xb4) = fVar9 * fVar18;
    *(float *)(in_ECX + 0xb8) = fVar11 / fVar15 + fVar13 * fVar18;
    *(float *)(in_ECX + 0xbc) = fVar19 * fVar4;
    *(float *)(in_ECX + 0xc0) = fVar5 * fVar19;
    *(float *)(in_ECX + 0xc4) = fVar6 * fVar19;
    *(float *)(in_ECX + 200) = fVar14 * fVar19 + fVar12 / fVar16;
    *(float *)(in_ECX + 0xcc) = fVar17 * fVar1;
    *(float *)(in_ECX + 0xd0) = fVar17 * fVar2;
    *(float *)(in_ECX + 0xd4) = fVar17 * fVar3;
    *(float *)(in_ECX + 0xd8) = fVar10 * fVar17 + -*(float *)(in_ECX + 0xfc) * fVar17;
    *(undefined4 *)(in_ECX + 0xdc) = 0;
    *(undefined4 *)(in_ECX + 0xe0) = 0;
    *(undefined4 *)(in_ECX + 0xe4) = 0;
    *(undefined4 *)(in_ECX + 0xe8) = 0x3f800000;
    return;
  }
  fVar18 = fVar15 * 2.0;
  fVar15 = -fVar11 * fVar15;
  fVar11 = fVar16 * 2.0;
  fVar16 = -fVar12 * fVar16;
  fVar17 = *(float *)(in_ECX + 0x100) * fVar17;
  *(float *)(in_ECX + 0xac) = fVar15 * fVar1 + fVar18 * fVar7;
  *(float *)(in_ECX + 0xb0) = fVar18 * fVar8 + fVar15 * fVar2;
  *(float *)(in_ECX + 0xb4) = fVar18 * fVar9 + fVar15 * fVar3;
  *(float *)(in_ECX + 0xb8) = fVar10 * fVar15 + fVar13 * fVar18;
  *(float *)(in_ECX + 0xbc) = fVar11 * fVar4 + fVar16 * fVar1;
  *(float *)(in_ECX + 0xc0) = fVar11 * fVar5 + fVar16 * fVar2;
  *(float *)(in_ECX + 0xc4) = fVar11 * fVar6 + fVar16 * fVar3;
  *(float *)(in_ECX + 200) = fVar11 * fVar14 + fVar16 * fVar10;
  *(float *)(in_ECX + 0xcc) = fVar17 * fVar1;
  *(float *)(in_ECX + 0xd0) = fVar17 * fVar2;
  *(float *)(in_ECX + 0xd4) = fVar17 * fVar3;
  *(float *)(in_ECX + 0xd8) = fVar10 * fVar17 + -*(float *)(in_ECX + 0xfc) * fVar17;
  *(float *)(in_ECX + 0xdc) = fVar1;
  *(float *)(in_ECX + 0xe0) = fVar2;
  *(float *)(in_ECX + 0xe4) = fVar3;
  *(float *)(in_ECX + 0xe8) = fVar10;
  return;
}



void FUN_0070d050(int param_1,undefined4 param_2)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_00707e90(param_1,param_2);
  _memcpy((void *)(param_1 + 0xac),(void *)(in_ECX + 0xac),0x40);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(in_ECX + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(in_ECX + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(in_ECX + 0x90);
  puVar2 = (undefined4 *)(in_ECX + 0xec);
  puVar3 = (undefined4 *)(param_1 + 0xec);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(in_ECX + 0x110);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(in_ECX + 0x114);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(in_ECX + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(in_ECX + 0x11c);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(in_ECX + 0x120);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(in_ECX + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(in_ECX + 0x10c);
  return;
}



ushort FUN_0070d110(int param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  int in_ECX;
  
  uVar3 = FUN_00707b50(param_1);
  if ((char)uVar3 != '\0') {
    fVar1 = *(float *)(in_ECX + 0xec);
    fVar2 = *(float *)(param_1 + 0xec);
    uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 == fVar1) {
      fVar1 = *(float *)(in_ECX + 0xf0);
      fVar2 = *(float *)(param_1 + 0xf0);
      uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
              (ushort)(fVar2 == fVar1) << 0xe;
      if (fVar2 == fVar1) {
        fVar1 = *(float *)(in_ECX + 0xf4);
        fVar2 = *(float *)(param_1 + 0xf4);
        uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                (ushort)(fVar2 == fVar1) << 0xe;
        if (fVar2 == fVar1) {
          fVar1 = *(float *)(in_ECX + 0xf8);
          fVar2 = *(float *)(param_1 + 0xf8);
          uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                  (ushort)(fVar2 == fVar1) << 0xe;
          if (fVar2 == fVar1) {
            fVar1 = *(float *)(in_ECX + 0xfc);
            fVar2 = *(float *)(param_1 + 0xfc);
            uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                    (ushort)(fVar2 == fVar1) << 0xe;
            if (fVar2 == fVar1) {
              fVar1 = *(float *)(in_ECX + 0x100);
              fVar2 = *(float *)(param_1 + 0x100);
              uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                      (ushort)(fVar2 == fVar1) << 0xe;
              if (fVar2 == fVar1) {
                fVar1 = *(float *)(in_ECX + 0x110);
                fVar2 = *(float *)(param_1 + 0x110);
                uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                        (ushort)(fVar2 == fVar1) << 0xe;
                if (fVar2 == fVar1) {
                  fVar1 = *(float *)(in_ECX + 0x114);
                  fVar2 = *(float *)(param_1 + 0x114);
                  uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                          (ushort)(fVar2 == fVar1) << 0xe;
                  if (fVar2 == fVar1) {
                    fVar1 = *(float *)(in_ECX + 0x118);
                    fVar2 = *(float *)(param_1 + 0x118);
                    uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                            | (ushort)(fVar2 == fVar1) << 0xe;
                    if (fVar2 == fVar1) {
                      fVar1 = *(float *)(in_ECX + 0x11c);
                      fVar2 = *(float *)(param_1 + 0x11c);
                      uVar3 = (ushort)(fVar2 < fVar1) << 8 |
                              (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                              (ushort)(fVar2 == fVar1) << 0xe;
                      if (fVar2 == fVar1) {
                        fVar1 = *(float *)(in_ECX + 0x108);
                        fVar2 = *(float *)(param_1 + 0x108);
                        uVar3 = (ushort)(fVar2 < fVar1) << 8 |
                                (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                (ushort)(fVar2 == fVar1) << 0xe;
                        if (fVar2 == fVar1) {
                          fVar1 = *(float *)(in_ECX + 0x10c);
                          fVar2 = *(float *)(param_1 + 0x10c);
                          uVar3 = (ushort)(fVar2 < fVar1) << 8 |
                                  (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                  (ushort)(fVar2 == fVar1) << 0xe;
                          if (fVar2 == fVar1) {
                            fVar1 = *(float *)(in_ECX + 0x120);
                            fVar2 = *(float *)(param_1 + 0x120);
                            uVar3 = (ushort)(fVar2 < fVar1) << 8 |
                                    (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                    (ushort)(fVar2 == fVar1) << 0xe;
                            if (fVar2 == fVar1) {
                              return CONCAT11((char)(uVar3 >> 8),1);
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
    }
  }
  return uVar3 & 0xff00;
}



undefined4 FUN_0070d270(char *param_1)

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
  FUN_006c5d40(uVar3,pcVar2 + (0x40 - (int)(param_1 + 1)),"%s = (L=%g,R=%g,T=%g,B=%g)",param_1,
               (double)*in_ECX,(double)in_ECX[1],(double)in_ECX[2],(double)in_ECX[3]);
  return uVar3;
}



void FUN_0070d2d0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7e4c4;
  FUN_00707ca0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_0070d300(float param_1,float param_2,undefined4 param_3,float param_4)

{
  undefined4 uVar1;
  char cVar2;
  int in_ECX;
  
  if ((((DAT_00b3f928 != 0) &&
       (cVar2 = FUN_00701540(param_1,param_2,&param_2,&param_1), uVar1 = param_4, cVar2 != '\0')) &&
      (param_2 <= *(float *)(in_ECX + 0x114))) &&
     (((*(float *)(in_ECX + 0x110) <= param_2 && (param_1 <= *(float *)(in_ECX + 0x118))) &&
      (*(float *)(in_ECX + 0x11c) <= param_1)))) {
    param_4 = (*(float *)(in_ECX + 0xf0) - *(float *)(in_ECX + 0xec)) *
              ((param_2 - *(float *)(in_ECX + 0x110)) /
              (*(float *)(in_ECX + 0x114) - *(float *)(in_ECX + 0x110))) + *(float *)(in_ECX + 0xec)
    ;
    FUN_0070c4d0(param_4,(*(float *)(in_ECX + 0xf4) - *(float *)(in_ECX + 0xf8)) *
                         ((param_1 - *(float *)(in_ECX + 0x11c)) /
                         (*(float *)(in_ECX + 0x118) - *(float *)(in_ECX + 0x11c))) +
                         *(float *)(in_ECX + 0xf8),param_3,uVar1);
    return 1;
  }
  return 0;
}



void FUN_0070d430(void)

{
  FUN_0070c120();
  FUN_0070cc90();
  return;
}



void FUN_0070d440(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf808;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007081b0(param_1);
  puVar2 = (undefined4 *)FUN_007124a0(uVar1);
  if (puVar2 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar2 + 1);
  }
  local_4 = 0;
  for (iVar3 = FUN_007124d0(); iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar4 = (undefined4 *)FUN_007124a0();
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
      LVar5 = InterlockedDecrement(puVar4 + 1);
      if (LVar5 == 0) {
        (**(code **)*puVar4)(1);
      }
    }
  }
  if (0x4010003 < *(uint *)(param_1 + 0xd8)) {
    for (iVar3 = FUN_007124d0(); iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar4 = (undefined4 *)FUN_007124a0();
      if (puVar4 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar4 + 1);
        LVar5 = InterlockedDecrement(puVar4 + 1);
        if (LVar5 == 0) {
          (**(code **)*puVar4)(1);
        }
      }
    }
    if ((0xa000106 < *(uint *)(param_1 + 0xd8)) && (*(uint *)(param_1 + 0xd8) < 0xa00010f)) {
      for (iVar3 = FUN_007124d0(); iVar3 != 0; iVar3 = iVar3 + -1) {
        FUN_007124a0();
      }
    }
  }
  local_4 = 0xffffffff;
  if ((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) {
    (**(code **)*puVar2)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0070d590(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9a08;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00708450(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a7e4c4;
  FUN_0070de60(0);
  in_ECX[0x44] = 0;
  in_ECX[0x45] = 0;
  in_ECX[0x46] = 0;
  in_ECX[0x47] = 0;
  *(undefined1 *)(in_ECX + 0x41) = 0;
  in_ECX[0x3f] = 0x3f800000;
  in_ECX[0x40] = 0x40000000;
  in_ECX[0x3d] = 0x3f000000;
  in_ECX[0x3e] = 0xbf000000;
  in_ECX[0x3b] = 0xbf000000;
  in_ECX[0x3c] = 0x3f000000;
  in_ECX[0x42] = 0x3dcccccd;
  in_ECX[0x43] = 0x461c4000;
  in_ECX[0x46] = 0x3f800000;
  in_ECX[0x45] = 0x3f800000;
  in_ECX[0x48] = 0x3f800000;
  in_ECX[0x47] = 0;
  in_ECX[0x44] = 0;
  FUN_0070c120();
  FUN_0070cc90();
  in_ECX[8] = in_ECX[0x22];
  in_ECX[9] = in_ECX[0x23];
  in_ECX[10] = in_ECX[0x24];
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0070d6b0(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x124,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_0070d590();
  }
  local_4 = 0xffffffff;
  FUN_0070d050(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
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
  local_10 = FUN_00401f00(0x124,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_0070d590();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_0070d7a0(int param_1)

{
  int iVar1;
  int in_ECX;
  uint local_8 [2];
  
  iVar1 = param_1;
  FUN_00707f00(param_1);
  if (*(uint *)(iVar1 + 0xd8) < 0xa000102) {
    local_8[0] = (uint)*(ushort *)(iVar1 + 600);
  }
  else {
    param_1 = 2;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),local_8,2,&param_1,1);
  }
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0xec,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0xf0,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0xf4,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0xf8,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0xfc,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x100,4,&param_1,1);
  if (*(uint *)(iVar1 + 0xd8) < 0xa000105) {
    *(undefined1 *)(in_ECX + 0x104) = 0;
  }
  else {
    local_8[1] = 1;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,1,local_8 + 1,1);
    *(bool *)(in_ECX + 0x104) = (char)param_1 != '\0';
  }
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x110,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x114,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x118,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x11c,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x120,4,&param_1,1);
  FUN_00712a20();
  FUN_00712ae0();
  if (0x4010003 < *(uint *)(iVar1 + 0xd8)) {
    FUN_00712ae0();
    if ((0xa000106 < *(uint *)(iVar1 + 0xd8)) && (*(uint *)(iVar1 + 0xd8) < 0xa00010f)) {
      FUN_00712ae0();
    }
  }
  return;
}



void FUN_0070d9f0(int *param_1)

{
  int *piVar1;
  int in_ECX;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  FUN_00708330(param_1);
  local_4 = 0;
  local_8 = 2;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],&local_4,2,&local_8,1);
  local_8 = 4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0xec,4,&local_8,1);
  local_8 = 4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0xf0,4,&local_8,1);
  local_8 = 4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0xf4,4,&local_8,1);
  local_8 = 4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0xf8,4,&local_8,1);
  local_8 = 4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0xfc,4,&local_8,1);
  local_8 = 4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x100,4,&local_8,1);
  param_1 = (int *)CONCAT31(param_1._1_3_,*(undefined1 *)(in_ECX + 0x104));
  local_8 = 1;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],&param_1,1,&local_8,1);
  local_8 = 4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x110,4,&local_8,1);
  local_8 = 4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x114,4,&local_8,1);
  local_8 = 4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x118,4,&local_8,1);
  local_8 = 4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x11c,4,&local_8,1);
  local_8 = 4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x120,4,&local_8,1);
  (**(code **)(*piVar1 + 0x2c))(0);
  uStack_c = 4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],&stack0xfffffff0,4,&uStack_c,1);
  uStack_c = 4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],&stack0xfffffff0,4,&uStack_c,1);
  return;
}



void FUN_0070dc20(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007086b0(param_1);
  param_1 = FUN_0070f910(DAT_00b3facc);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070deb0("m_kViewFrustum");
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070d270("m_kPort");
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_00707280("m_kWorldDir");
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_00707280("m_kWorldUp");
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_00707280("m_kWorldRight");
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("m_fMinNearPlaneDist",*(undefined4 *)(in_ECX + 0x108));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("m_fMaxFarNearRatio",*(undefined4 *)(in_ECX + 0x10c));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_0070de60(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x18) = param_1;
  return;
}



void FUN_0070de70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  *(undefined1 *)(in_ECX + 6) = param_7;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  in_ECX[4] = param_5;
  in_ECX[5] = param_6;
  return;
}



undefined4 FUN_0070deb0(char *param_1)

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
  uVar3 = FUN_00401f00(pcVar2 + (0x50 - (int)(param_1 + 1)));
  FUN_006c5d40(uVar3,pcVar2 + (0x50 - (int)(param_1 + 1)),
               "%s = (N=%g,F=%g,L=%g,R=%g,T=%g,B=%g,O=%u)",param_1,(double)in_ECX[4],
               (double)in_ECX[5],(double)*in_ECX,(double)in_ECX[1],(double)in_ECX[2],
               (double)in_ECX[3],*(undefined1 *)(in_ECX + 6));
  return uVar3;
}



void FUN_0070df30(undefined4 param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  *in_ECX = &PTR_LAB_00a7e610;
  *(undefined1 *)(in_ECX + 1) = 0;
  FUN_0070de70(0,0,0,0,0,0,0);
  iVar1 = 5;
  do {
    FUN_00716db0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  in_ECX[0x23] = 0x3f;
  in_ECX[2] = param_1;
  in_ECX[3] = 0;
  return;
}



void FUN_0070dfa0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a7e610;
  return;
}



void FUN_0070dfb0(int *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(in_ECX + 0x8c);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x7c))();
    return;
  }
  uVar5 = 0;
  iVar3 = in_ECX + 0x2c;
  do {
    uVar4 = 1 << ((byte)uVar5 & 0x1f);
    if ((*(uint *)(in_ECX + 0x8c) & uVar4) != 0) {
      iVar2 = FUN_0047da70(iVar3);
      if (iVar2 == 2) break;
      if (iVar2 == 1) {
        *(uint *)(in_ECX + 0x8c) = *(uint *)(in_ECX + 0x8c) & ~uVar4;
      }
    }
    uVar5 = uVar5 + 1;
    iVar3 = iVar3 + 0x10;
  } while (uVar5 < 6);
  if (uVar5 == 6) {
    (**(code **)(*param_1 + 0x7c))();
  }
  *(int *)(in_ECX + 0x8c) = iVar1;
  return;
}



void FUN_0070dfd3(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = unaff_EBP + 0x2c;
  do {
    uVar3 = 1 << ((byte)uVar4 & 0x1f);
    if ((*(uint *)(unaff_EBP + 0x8c) & uVar3) != 0) {
      iVar1 = FUN_0047da70(iVar2);
      if (iVar1 == 2) break;
      if (iVar1 == 1) {
        *(uint *)(unaff_EBP + 0x8c) = *(uint *)(unaff_EBP + 0x8c) & ~uVar3;
      }
    }
    uVar4 = uVar4 + 1;
    iVar2 = iVar2 + 0x10;
  } while (uVar4 < 6);
  if (uVar4 == 6) {
    (**(code **)(*param_3 + 0x7c))();
  }
  *(undefined4 *)(unaff_EBP + 0x8c) = param_1;
  return;
}



void FUN_0070e040(undefined4 *param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(in_ECX + 0xc);
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)(in_ECX + 0x10);
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00717a40((undefined4 *)(in_ECX + 0x10),iVar1 + 100);
    *(undefined4 *)(in_ECX + 0x8c) = 0x3f;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0070e149) */
/* WARNING: Removing unreachable block (ram,0x0070e131) */
/* WARNING: Removing unreachable block (ram,0x0070e170) */
/* WARNING: Removing unreachable block (ram,0x0070e17e) */

void FUN_0070e0a0(int param_1,int param_2,int param_3)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009aefa8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 != 0) && (param_2 != 0)) {
    *(int *)(in_ECX + 0xc) = param_1;
    FUN_0070e040(param_1 + 0xec);
    local_10 = 0;
    if (param_3 != 0) {
      local_10 = *(undefined4 *)(in_ECX + 8);
      *(int *)(in_ECX + 8) = param_3;
    }
    local_4 = 0;
    if (*(int *)(in_ECX + 8) == 0) {
      FUN_0075fa90(*(undefined4 *)(DAT_00b3f928 + 8));
    }
    FUN_007073d0(in_ECX);
    if (param_3 != 0) {
      *(undefined4 *)(in_ECX + 8) = local_10;
    }
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0070e1a0(int *param_1)

{
  int *piVar1;
  char cVar2;
  int *in_ECX;
  
  piVar1 = (int *)in_ECX[2];
  if (piVar1 != (int *)0x0) {
    if ((char)in_ECX[1] == '\0') {
      if (piVar1[1] == piVar1[2]) {
        FUN_00732200(piVar1[3] + piVar1[2]);
      }
      *(int **)(*piVar1 + piVar1[1] * 4) = param_1;
      piVar1[1] = piVar1[1] + 1;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0070e1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_ECX + 0xc))();
    return;
  }
  if ((*(int **)(DAT_00b3f928 + 8) != (int *)0x0) &&
     (cVar2 = (**(code **)(**(int **)(DAT_00b3f928 + 8) + 0x58))(param_1), cVar2 != '\0')) {
    return;
  }
  (**(code **)(*param_1 + 0x84))(DAT_00b3f928);
  return;
}



void FUN_0070e220(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return;
}



undefined4 FUN_0070e240(void)

{
  int in_ECX;
  
  if ((3 < *(int *)(in_ECX + 4)) && (*(int *)(in_ECX + 4) < 7)) {
    return 1;
  }
  return 0;
}



uint FUN_0070e260(char *param_1)

{
  int *piVar1;
  char *in_ECX;
  char *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  if ((((iVar3 == *(int *)(in_ECX + 4)) && (*param_1 == *in_ECX)) &&
      (iVar3 = *(int *)(param_1 + 8), iVar3 == *(int *)(in_ECX + 8))) && (param_1[1] == in_ECX[1]))
  {
    iVar3 = *(int *)(in_ECX + 0xc);
    if (((*(int *)(param_1 + 0xc) == iVar3) || (iVar3 == -1)) || (*(int *)(param_1 + 0xc) == -1)) {
      iVar3 = 0;
      pcVar2 = param_1 + 0x1c;
      piVar1 = (int *)(in_ECX + 0x14);
      while (((*(int *)(((int)param_1 - (int)in_ECX) + (int)piVar1) == *piVar1 &&
              (*(int *)(pcVar2 + -4) == piVar1[1])) &&
             ((*pcVar2 == (char)piVar1[2] && (pcVar2[1] == *(char *)((int)piVar1 + 9)))))) {
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 0xc;
        piVar1 = piVar1 + 3;
        if (3 < iVar3) {
          return (uint)piVar1 & 0xffffff00;
        }
      }
      return CONCAT31((int3)((uint)piVar1 >> 8),1);
    }
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



uint FUN_0070e2f0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    while (param_1 = param_1 >> 1, param_1 != 0) {
      uVar2 = uVar2 + 1;
    }
    uVar1 = 1;
    while (param_2 = param_2 >> 1, param_2 != 0) {
      uVar1 = uVar1 + 1;
    }
    if (uVar2 <= uVar1) {
      return uVar1;
    }
  }
  return uVar2;
}



void FUN_0070e340(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca4b8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a7e624;
  FUN_0070f2e0();
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0070e3d0(int param_1)

{
  size_t _Size;
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int iVar3;
  uint uVar4;
  size_t *psVar5;
  undefined4 *puVar6;
  size_t *psVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  size_t local_cc [16];
  undefined4 local_8c [16];
  undefined4 local_4c [16];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9ad7;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff1c;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a7e624;
  FUN_0070f2e0();
  in_ECX[0x13] = 0;
  puVar6 = (undefined4 *)(param_1 + 8);
  puVar8 = in_ECX + 2;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  local_4._0_1_ = 1;
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar3 = FUN_00401f00(0x24);
    local_4._0_1_ = 2;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00732690(*(undefined4 *)(param_1 + 0x4c));
    }
    local_4._0_1_ = 1;
    FUN_0075fa90(uVar2);
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  in_ECX[0x18] = uVar1;
  in_ECX[0x1b] = *(undefined4 *)(param_1 + 0x6c);
  in_ECX[0x19] = *(undefined4 *)(param_1 + 100);
  if (uVar1 != 0) {
    psVar5 = *(size_t **)(param_1 + 0x5c);
    psVar7 = local_cc;
    for (uVar4 = uVar1 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *psVar7 = *psVar5;
      psVar5 = psVar5 + 1;
      psVar7 = psVar7 + 1;
    }
    puVar6 = *(undefined4 **)(param_1 + 0x58);
    puVar8 = local_4c;
    for (uVar4 = uVar1 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar6 = *(undefined4 **)(param_1 + 0x54);
    puVar8 = local_8c;
    for (uVar4 = uVar1 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  _Size = *(size_t *)(*(int *)(param_1 + 0x5c) + uVar1 * 4);
  uVar2 = in_ECX[0x1b];
  local_cc[uVar1] = _Size;
  FUN_00732280(uVar1,uVar2,_Size);
  iVar3 = in_ECX[0x18];
  _memcpy((void *)in_ECX[0x15],local_8c,iVar3 * 4);
  _memcpy((void *)in_ECX[0x16],local_4c,iVar3 * 4);
  _memcpy((void *)in_ECX[0x17],local_cc,in_ECX[0x18] * 4 + 4);
  _memcpy((void *)in_ECX[0x14],*(void **)(param_1 + 0x50),_Size);
  in_ECX[0x1a] = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0070e560(uint param_1,uint param_2,undefined4 *param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  int local_cc [16];
  uint local_8c [16];
  uint local_4c [16];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9b19;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff1c;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar2);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a7e624;
  FUN_0070f2e0();
  in_ECX[0x13] = 0;
  puVar7 = param_3;
  puVar8 = in_ECX + 2;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if (param_4 == 0) {
    param_4 = FUN_0070e2f0(param_1,param_2);
  }
  in_ECX[0x18] = param_4;
  in_ECX[0x1b] = param_5;
  uVar2 = 0;
  local_cc[0] = 0;
  if (((int)param_3[1] < 4) || (6 < (int)param_3[1])) {
    uVar6 = (uint)(*(byte *)((int)param_3 + 1) >> 3);
    in_ECX[0x19] = uVar6;
    if (uVar6 == 0) {
      if (in_ECX[0x18] != 0) {
        uVar6 = in_ECX[0x18];
        do {
          uVar5 = param_1;
          if (param_1 == 0) {
            uVar5 = 1;
          }
          local_8c[uVar2] = uVar5;
          uVar4 = param_2;
          if (param_2 == 0) {
            uVar4 = 1;
          }
          local_4c[uVar2] = uVar4;
          piVar1 = local_cc + uVar2;
          uVar2 = uVar2 + 1;
          local_cc[uVar2] = (uVar4 * uVar5 >> 1) + *piVar1;
          param_1 = param_1 >> 1;
          param_2 = param_2 >> 1;
        } while (uVar2 < uVar6);
      }
    }
    else {
      uVar2 = 0;
      if (in_ECX[0x18] != 0) {
        do {
          uVar5 = param_1;
          if (param_1 == 0) {
            uVar5 = 1;
          }
          local_8c[uVar2] = uVar5;
          uVar4 = param_2;
          if (param_2 == 0) {
            uVar4 = 1;
          }
          local_4c[uVar2] = uVar4;
          local_cc[uVar2 + 1] = uVar6 * uVar4 * uVar5 + local_cc[uVar2];
          uVar2 = uVar2 + 1;
          param_1 = param_1 >> 1;
          param_2 = param_2 >> 1;
        } while (uVar2 < (uint)in_ECX[0x18]);
      }
    }
  }
  else {
    in_ECX[0x19] = 0;
    iVar3 = param_3[1];
    uVar2 = 0;
    if (in_ECX[0x18] != 0) {
      do {
        uVar6 = param_1;
        if (param_1 == 0) {
          uVar6 = 1;
        }
        local_8c[uVar2] = uVar6;
        uVar5 = param_2;
        if (param_2 == 0) {
          uVar5 = 1;
        }
        local_4c[uVar2] = uVar5;
        piVar1 = local_cc + uVar2;
        uVar2 = uVar2 + 1;
        local_cc[uVar2] =
             ((uVar5 + 3 & 0xfffffffc) * (uVar6 + 3 & 0xfffffffc) >> 4) *
             ((uint)(iVar3 != 4) * 8 + 8) + *piVar1;
        param_1 = param_1 >> 1;
        param_2 = param_2 >> 1;
      } while (uVar2 < (uint)in_ECX[0x18]);
    }
  }
  FUN_00732280(in_ECX[0x18],param_5,local_cc[in_ECX[0x18]]);
  iVar3 = in_ECX[0x18];
  _memcpy((void *)in_ECX[0x15],local_8c,iVar3 * 4);
  _memcpy((void *)in_ECX[0x16],local_4c,iVar3 * 4);
  _memcpy((void *)in_ECX[0x17],local_cc,in_ECX[0x18] * 4 + 4);
  in_ECX[0x1a] = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0070e7b0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c9b53;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7e624;
  puVar1 = (undefined4 *)in_ECX[0x13];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x13] = 0;
  }
  FUN_007322d0(uVar2);
  puVar1 = (undefined4 *)in_ECX[0x13];
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
  local_10 = FUN_00401f00(0x70,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_0070e340();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_0070ead0(byte param_1)

{
  FUN_0070e7b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0070ecd0(int *param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  FUN_0068f970(param_1);
  FUN_0070f7b0(param_1);
  (**(code **)(*param_1 + 0x2c))(*(undefined4 *)(in_ECX + 0x4c));
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 0x60,4,&stack0x00000000,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 100,4,&stack0x00000000,1);
  uVar2 = 0;
  if (*(int *)(in_ECX + 0x60) != 0) {
    do {
      iVar1 = uVar2 * 4;
      (**(code **)(param_1[0x88] + 8))
                (param_1[0x88],*(int *)(in_ECX + 0x54) + iVar1,4,&stack0x00000000,1);
      (**(code **)(param_1[0x88] + 8))
                (param_1[0x88],*(int *)(in_ECX + 0x58) + iVar1,4,&stack0x00000000,1);
      (**(code **)(param_1[0x88] + 8))
                (param_1[0x88],*(int *)(in_ECX + 0x5c) + iVar1,4,&stack0x00000000,1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(in_ECX + 0x60));
  }
  (**(code **)(param_1[0x88] + 8))
            (param_1[0x88],*(int *)(in_ECX + 0x5c) + *(int *)(in_ECX + 0x60) * 4,4,&stack0x00000000,
             1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],(int *)(in_ECX + 0x6c),4,&stack0x00000000,1);
  (**(code **)(param_1[0x88] + 8))
            (param_1[0x88],*(undefined4 *)(in_ECX + 0x50),
             *(int *)(*(int *)(in_ECX + 0x5c) + *(int *)(in_ECX + 0x60) * 4) *
             *(int *)(in_ECX + 0x6c),&stack0x00000000,1);
  return;
}



void FUN_0070f010(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}



void FUN_0070f030(undefined4 param_1,char param_2,int *param_3)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  *(char *)((int)in_ECX + 1) = param_2;
  in_ECX[1] = param_1;
  in_ECX[3] = 0xffffffff;
  in_ECX[4] = 0;
  *(undefined1 *)in_ECX = 1;
  in_ECX[2] = 0;
  switch(param_1) {
  case 0:
    if (param_2 == '\x10') {
      if (((*param_3 == 0xf800) && (param_3[1] == 0x7e0)) &&
         ((param_3[2] == 0x1f && (param_3[3] == 0)))) {
        puVar2 = &DAT_00b263e8;
        for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
          *in_ECX = *puVar2;
          puVar2 = puVar2 + 1;
          in_ECX = in_ECX + 1;
        }
        return;
      }
    }
    else if (param_2 == '\x18') {
      if (((*param_3 == 0xff) && (param_3[1] == 0xff00)) &&
         ((param_3[2] == 0xff0000 && (param_3[3] == 0)))) {
        puVar2 = &DAT_00b25e48;
        for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
          *in_ECX = *puVar2;
          puVar2 = puVar2 + 1;
          in_ECX = in_ECX + 1;
        }
        return;
      }
      if ((((*param_3 == 0xff0000) && (param_3[1] == 0xff00)) && (param_3[2] == 0xff)) &&
         (param_3[3] == 0)) {
        puVar2 = &DAT_00b26598;
        for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
          *in_ECX = *puVar2;
          puVar2 = puVar2 + 1;
          in_ECX = in_ECX + 1;
        }
        return;
      }
    }
    goto LAB_0070f10d;
  case 1:
    if (param_2 == '\x10') {
      iVar1 = *param_3;
      if ((((iVar1 == 0x1f) && (param_3[1] == 0x3e0)) && (param_3[2] == 0x7c00)) &&
         (param_3[3] == 0x8000)) {
        puVar2 = &DAT_00b25e90;
        for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
          *in_ECX = *puVar2;
          puVar2 = puVar2 + 1;
          in_ECX = in_ECX + 1;
        }
        return;
      }
      if (((iVar1 == 0x7c00) && (param_3[1] == 0x3e0)) &&
         ((param_3[2] == 0x1f && (param_3[3] == 0x8000)))) {
        puVar2 = &DAT_00b25ed8;
        for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
          *in_ECX = *puVar2;
          puVar2 = puVar2 + 1;
          in_ECX = in_ECX + 1;
        }
        return;
      }
      if (((iVar1 == 0xf00) && (param_3[1] == 0xf0)) &&
         ((param_3[2] == 0xf && (param_3[3] == 0xf000)))) {
        puVar2 = &DAT_00b26508;
        for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
          *in_ECX = *puVar2;
          puVar2 = puVar2 + 1;
          in_ECX = in_ECX + 1;
        }
        return;
      }
    }
    else if (param_2 == ' ') {
      if ((((*param_3 == 0xff0000) && (param_3[1] == 0xff00)) && (param_3[2] == 0xff)) &&
         (param_3[3] == -0x1000000)) {
        puVar2 = &DAT_00b265e0;
        for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
          *in_ECX = *puVar2;
          puVar2 = puVar2 + 1;
          in_ECX = in_ECX + 1;
        }
        return;
      }
      puVar2 = &DAT_00b25e00;
      for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
        *in_ECX = *puVar2;
        puVar2 = puVar2 + 1;
        in_ECX = in_ECX + 1;
      }
      return;
    }
LAB_0070f10d:
    in_ECX[1] = 0x10;
    return;
  case 2:
    if (param_2 == '\b') {
      puVar2 = &DAT_00b25d70;
      for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
        *in_ECX = *puVar2;
        puVar2 = puVar2 + 1;
        in_ECX = in_ECX + 1;
      }
      return;
    }
    break;
  case 3:
    if (param_2 == '\b') {
      puVar2 = &DAT_00b25db8;
      for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
        *in_ECX = *puVar2;
        puVar2 = puVar2 + 1;
        in_ECX = in_ECX + 1;
      }
      return;
    }
    break;
  case 4:
    puVar2 = &DAT_00b25fb0;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *in_ECX = *puVar2;
      puVar2 = puVar2 + 1;
      in_ECX = in_ECX + 1;
    }
    return;
  case 5:
    puVar2 = &DAT_00b25ff8;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *in_ECX = *puVar2;
      puVar2 = puVar2 + 1;
      in_ECX = in_ECX + 1;
    }
    return;
  case 6:
    puVar2 = &DAT_00b26040;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *in_ECX = *puVar2;
      puVar2 = puVar2 + 1;
      in_ECX = in_ECX + 1;
    }
    return;
  case 8:
    puVar2 = &DAT_00b25f20;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *in_ECX = *puVar2;
      puVar2 = puVar2 + 1;
      in_ECX = in_ECX + 1;
    }
    return;
  case 9:
    puVar2 = &DAT_00b25f68;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *in_ECX = *puVar2;
      puVar2 = puVar2 + 1;
      in_ECX = in_ECX + 1;
    }
    return;
  }
  in_ECX[1] = 0x10;
  return;
}



void FUN_0070f2e0(void)

{
  undefined1 *in_ECX;
  
  in_ECX[1] = 8;
  *(undefined4 *)(in_ECX + 4) = 2;
  *(undefined4 *)(in_ECX + 0xc) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *in_ECX = 1;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0x10;
  *(undefined4 *)(in_ECX + 0x18) = 3;
  in_ECX[0x1c] = 8;
  in_ECX[0x1d] = 1;
  *(undefined4 *)(in_ECX + 0x20) = 0x13;
  *(undefined4 *)(in_ECX + 0x24) = 5;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 1;
  *(undefined4 *)(in_ECX + 0x2c) = 0x13;
  *(undefined4 *)(in_ECX + 0x30) = 5;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 1;
  *(undefined4 *)(in_ECX + 0x38) = 0x13;
  *(undefined4 *)(in_ECX + 0x3c) = 5;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 1;
  return;
}



byte * FUN_0070f360(byte *param_1,byte param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  undefined1 uStack00000009;
  undefined1 uStack0000000a;
  undefined1 uStack0000000b;
  uint local_20 [4];
  undefined4 local_10 [4];
  
  FUN_0070f2e0();
  *param_1 = *param_1 | 1;
  param_1[1] = param_2;
  param_1[0xc] = 0xff;
  param_1[0xd] = 0xff;
  param_1[0xe] = 0xff;
  param_1[0xf] = 0xff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_20[0] = param_3;
  *(uint *)(param_1 + 4) = (uint)(param_6 != 0);
  iVar5 = 0;
  param_2 = 0;
  local_10[0] = 0;
  for (; param_3 != 0; param_3 = param_3 >> 1) {
    iVar5 = iVar5 + (param_3 & 1);
    param_2 = (byte)iVar5;
  }
  iVar5 = 0;
  uStack00000009 = 0;
  local_20[1] = param_4;
  local_10[1] = 1;
  for (; param_4 != 0; param_4 = param_4 >> 1) {
    iVar5 = iVar5 + (param_4 & 1);
    uStack00000009 = (undefined1)iVar5;
  }
  iVar5 = 0;
  uStack0000000a = 0;
  local_20[2] = param_5;
  local_10[2] = 2;
  for (; param_5 != 0; param_5 = param_5 >> 1) {
    iVar5 = iVar5 + (param_5 & 1);
    uStack0000000a = (undefined1)iVar5;
  }
  iVar5 = 0;
  uStack0000000b = 0;
  local_20[3] = param_6;
  local_10[3] = 3;
  for (; param_6 != 0; param_6 = param_6 >> 1) {
    iVar5 = iVar5 + (param_6 & 1);
    uStack0000000b = (undefined1)iVar5;
  }
  iVar7 = 0;
  iVar5 = 4 - (int)local_20;
  param_6 = iVar5;
  do {
    if ((local_20[iVar7] != 0) && (iVar7 < 2)) {
      puVar6 = &stack0x00000009 + iVar7;
      iVar3 = (int)local_20 + iVar5 + iVar7 * 4;
      do {
        uVar8 = *(uint *)((int)local_20 + iVar3);
        if (uVar8 < local_20[iVar7]) {
          uVar1 = *puVar6;
          uVar2 = *(undefined4 *)((int)local_10 + iVar3);
          *(uint *)((int)local_20 + iVar3) = local_20[iVar7];
          *puVar6 = (&param_2)[iVar7];
          *(undefined4 *)((int)local_10 + iVar3) = local_10[iVar7];
          local_10[iVar7] = uVar2;
          local_20[iVar7] = uVar8;
          (&param_2)[iVar7] = uVar1;
        }
        iVar3 = iVar3 + 4;
        puVar6 = puVar6 + 1;
        iVar5 = param_6;
      } while (iVar3 < 0xc);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  uVar8 = 0;
  iVar5 = 0;
  pbVar4 = param_1 + 0x1c;
  do {
    if (local_20[iVar5] != 0) {
      *pbVar4 = (&param_2)[iVar5];
      uVar2 = local_10[iVar5];
      pbVar4[1] = 1;
      pbVar4[-0xffffffff00000004] = 0;
      pbVar4[-0xffffffff00000003] = 0;
      pbVar4[-0xffffffff00000002] = 0;
      pbVar4[-0xffffffff00000001] = 0;
      *(undefined4 *)(pbVar4 + -8) = uVar2;
      uVar8 = uVar8 + 1;
      pbVar4 = pbVar4 + 0xc;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  if (uVar8 < 4) {
    iVar5 = 4 - uVar8;
    pbVar4 = param_1 + uVar8 * 0xc + 0x1c;
    do {
      pbVar4[1] = 1;
      *pbVar4 = 0;
      pbVar4[-0xffffffff00000004] = 5;
      pbVar4[-0xffffffff00000003] = 0;
      pbVar4[-0xffffffff00000002] = 0;
      pbVar4[-0xffffffff00000001] = 0;
      pbVar4[-0xffffffff00000008] = 0x13;
      pbVar4[-0xffffffff00000007] = 0;
      pbVar4[-0xffffffff00000006] = 0;
      pbVar4[-0xffffffff00000005] = 0;
      pbVar4 = pbVar4 + 0xc;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return param_1;
}



void FUN_0070f520(int param_1)

{
  uint *puVar1;
  int iVar2;
  int in_ECX;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined1 auStack_10 [16];
  
  iVar2 = param_1;
  puVar1 = (uint *)(param_1 + 0xd8);
  iVar4 = *(int *)(param_1 + 0x21c);
  param_1 = 4;
  if (*puVar1 < 0xa030003) {
    (**(code **)(iVar4 + 4))(iVar4,&local_1c,4,&param_1,1);
    *(undefined4 *)(in_ECX + 4) = local_1c;
    puVar3 = auStack_10;
    param_1 = 4;
    do {
      local_1c = 4;
      (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),puVar3,4,&local_1c,1);
      puVar3 = puVar3 + 4;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    param_1 = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&uStack_18,4,&param_1,1);
    *(undefined1 *)(in_ECX + 1) = (undefined1)uStack_18;
    param_1 = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&local_14,4,&param_1,1);
    param_1 = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&local_14,4,&param_1,1);
    if (0xa00010a < *(uint *)(iVar2 + 0xd8)) {
      param_1 = 4;
      (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&local_1c,4,&param_1,1);
    }
    FUN_0070f030(*(undefined4 *)(in_ECX + 4),*(undefined1 *)(in_ECX + 1),auStack_10);
    return;
  }
  (**(code **)(iVar4 + 4))(iVar4,&local_14,4,&param_1,1);
  *(undefined4 *)(in_ECX + 4) = local_14;
  param_1 = 1;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 1,1,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0xc,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x10,4,&param_1,1);
  param_1 = 1;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c));
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&local_14,4,&param_1,1);
  *(undefined4 *)(in_ECX + 8) = local_14;
  puVar5 = (undefined4 *)(in_ECX + 0x18);
  iVar4 = 4;
  do {
    local_14 = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&uStack_18,4,&local_14,1);
    puVar5[-1] = uStack_18;
    local_14 = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&local_1c,4,&local_14,1);
    *puVar5 = local_1c;
    local_14 = 1;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),puVar5 + 1,1,&local_14,1);
    local_14 = 1;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&param_1,1,&local_14,1);
    *(bool *)((int)puVar5 + 5) = (char)param_1 != '\0';
    puVar5 = puVar5 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}



void FUN_0070f7b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 uStack_4;
  
  iVar2 = param_1;
  piVar1 = (int *)(param_1 + 0x220);
  param_1 = 4;
  (**(code **)(*piVar1 + 8))(*piVar1,in_ECX + 4,4,&param_1,1);
  param_1 = 1;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 1,1,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 0xc,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 0x10,4,&param_1,1);
  param_1 = 1;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220));
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 8,4,&param_1,1);
  iVar4 = in_ECX + 0x18;
  iVar3 = 4;
  do {
    uStack_4 = 4;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar4 + -4,4,&uStack_4,1);
    uStack_4 = 4;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar4,4,&uStack_4,1);
    uStack_4 = 1;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),iVar4 + 4,1,&uStack_4,1);
    param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(iVar4 + 5));
    uStack_4 = 1;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),&param_1,1,&uStack_4,1);
    iVar4 = iVar4 + 0xc;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



undefined4 FUN_0070f910(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_00401f00(pcVar2 + (9 - (int)(param_1 + 1)));
  FUN_006c5d40(uVar3,pcVar2 + (9 - (int)(param_1 + 1)),"--- %s ---",param_1);
  return uVar3;
}



undefined4 FUN_0070f950(char *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (9 - (int)(param_1 + 1));
  uVar3 = FUN_00401f00(pcVar2);
  if (param_2 != '\0') {
    FUN_006c5d40(uVar3,pcVar2,"%s = true",param_1);
    return uVar3;
  }
  FUN_006c5d40(uVar3,pcVar2,"%s = false",param_1);
  return uVar3;
}



undefined4 FUN_0070f9b0(char *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_00401f00(pcVar2 + (5 - (int)(param_1 + 1)));
  FUN_006c5d40(uVar3,pcVar2 + (5 - (int)(param_1 + 1)),"%s = %c",param_1,(int)param_2);
  return uVar3;
}



undefined4 FUN_0070fa00(char *param_1,undefined1 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_00401f00(pcVar2 + (7 - (int)(param_1 + 1)));
  FUN_006c5d40(uVar3,pcVar2 + (7 - (int)(param_1 + 1)),"%s = %u",param_1,param_2);
  return uVar3;
}



undefined4 FUN_0070fa50(char *param_1,short param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_00401f00(pcVar2 + (10 - (int)(param_1 + 1)));
  FUN_006c5d40(uVar3,pcVar2 + (10 - (int)(param_1 + 1)),"%s = %hd",param_1,(int)param_2);
  return uVar3;
}



undefined4 FUN_0070faa0(char *param_1,undefined2 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_00401f00(pcVar2 + (9 - (int)(param_1 + 1)));
  FUN_006c5d40(uVar3,pcVar2 + (9 - (int)(param_1 + 1)),"%s = %hu",param_1,param_2);
  return uVar3;
}



undefined4 FUN_0070faf0(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_00401f00(pcVar2 + (0xf - (int)(param_1 + 1)));
  FUN_006c5d40(uVar3,pcVar2 + (0xf - (int)(param_1 + 1)),"%s = %d",param_1,param_2);
  return uVar3;
}



undefined4 FUN_0070fb40(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_00401f00(pcVar2 + (0xe - (int)(param_1 + 1)));
  FUN_006c5d40(uVar3,pcVar2 + (0xe - (int)(param_1 + 1)),"%s = %u",param_1,param_2);
  return uVar3;
}



undefined4 FUN_0070fb90(char *param_1,float param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_00401f00();
  FUN_006c5d40(uVar3,pcVar2 + (0x14 - (int)(param_1 + 1)),"%s = %g",param_1,(double)param_2);
  return uVar3;
}



undefined4 FUN_0070fbe0(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_00401f00(pcVar2 + (0x10 - (int)(param_1 + 1)));
  FUN_006c5d40(uVar3,pcVar2 + (0x10 - (int)(param_1 + 1)),"%s = %p",param_1,param_2);
  return uVar3;
}



undefined4 FUN_0070fc30(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  if (param_2 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = FUN_00401f00(pcVar2 + (int)(pcVar3 + ((4 - (int)(param_2 + 1)) - (int)(param_1 + 1))));
    FUN_006c5d40(uVar4,pcVar2 + (int)(pcVar3 + ((4 - (int)(param_2 + 1)) - (int)(param_1 + 1))),
                 "%s = %s",param_1,param_2);
    return uVar4;
  }
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar4 = FUN_00401f00(pcVar2 + (8 - (int)(param_1 + 1)));
  FUN_006c5d40(uVar4,pcVar2 + (8 - (int)(param_1 + 1)),"%s = NULL",param_1);
  return uVar4;
}



void FUN_0070fcc0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[3] = param_1[1];
  in_ECX[6] = param_1[2];
  in_ECX[1] = *param_2;
  in_ECX[4] = param_2[1];
  in_ECX[7] = param_2[2];
  in_ECX[2] = *param_3;
  in_ECX[5] = param_3[1];
  in_ECX[8] = param_3[2];
  return;
}



void FUN_0070fd10(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0x3f800000;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[4] = 0x3f800000;
  in_ECX[8] = 0x3f800000;
  return;
}



void FUN_0070fd30(float param_1)

{
  float10 fVar1;
  undefined4 *in_ECX;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1);
  fVar2 = (float10)fsin((float10)param_1);
  *in_ECX = 0x3f800000;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = (float)fVar1;
  in_ECX[5] = (float)fVar2;
  in_ECX[6] = 0;
  in_ECX[7] = -(float)fVar2;
  in_ECX[8] = (float)fVar1;
  return;
}



void FUN_0070fd80(float param_1)

{
  float10 fVar1;
  float *in_ECX;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1);
  fVar2 = (float10)fsin((float10)param_1);
  *in_ECX = (float)fVar1;
  in_ECX[1] = 0.0;
  in_ECX[2] = -(float)fVar2;
  in_ECX[3] = 0.0;
  in_ECX[4] = 1.0;
  in_ECX[5] = 0.0;
  in_ECX[7] = 0.0;
  in_ECX[6] = (float)fVar2;
  in_ECX[8] = (float)fVar1;
  return;
}



void FUN_0070fdd0(float param_1)

{
  float10 fVar1;
  float *in_ECX;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1);
  fVar2 = (float10)fsin((float10)param_1);
  *in_ECX = (float)fVar1;
  in_ECX[1] = (float)fVar2;
  in_ECX[2] = 0.0;
  in_ECX[3] = -(float)fVar2;
  in_ECX[4] = (float)fVar1;
  in_ECX[5] = 0.0;
  in_ECX[6] = 0.0;
  in_ECX[7] = 0.0;
  in_ECX[8] = 1.0;
  return;
}



void FUN_0070fe20(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *in_ECX;
  float10 fVar8;
  
  fVar3 = (float10)fcos((float10)param_1);
  fVar8 = (float10)fsin((float10)param_1);
  fVar1 = (float)fVar3;
  fVar2 = (float)fVar8;
  fVar7 = 1.0 - fVar1;
  fVar5 = fVar7 * param_3 * param_2;
  fVar6 = fVar7 * param_4 * param_2;
  fVar4 = param_3 * param_4 * fVar7;
  *in_ECX = param_2 * param_2 * fVar7 + fVar1;
  in_ECX[1] = fVar5 + fVar2 * param_4;
  in_ECX[2] = fVar6 - fVar2 * param_3;
  in_ECX[3] = fVar5 - fVar2 * param_4;
  in_ECX[4] = param_3 * param_3 * fVar7 + fVar1;
  in_ECX[5] = fVar4 + fVar2 * param_2;
  in_ECX[6] = fVar2 * param_3 + fVar6;
  in_ECX[7] = fVar4 - fVar2 * param_2;
  in_ECX[8] = fVar7 * param_4 * param_4 + fVar1;
  return;
}



undefined4 FUN_0070ff20(float *param_1)

{
  float *in_ECX;
  
  if ((((((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) &&
       ((param_1[3] == in_ECX[3] && (param_1[4] == in_ECX[4])))) &&
      ((param_1[5] == in_ECX[5] && ((param_1[6] == in_ECX[6] && (param_1[7] == in_ECX[7])))))) &&
     (param_1[8] == in_ECX[8])) {
    return 1;
  }
  return 0;
}



void FUN_0070ffc0(float *param_1,float *param_2)

{
  float *in_ECX;
  int iVar1;
  float *pfVar2;
  
  pfVar2 = param_1;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar2 = *in_ECX;
    in_ECX = in_ECX + 1;
    pfVar2 = pfVar2 + 1;
  }
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_2[1] + param_1[1];
  param_1[2] = param_2[2] + param_1[2];
  param_1[3] = param_2[3] + param_1[3];
  param_1[4] = param_2[4] + param_1[4];
  param_1[5] = param_2[5] + param_1[5];
  param_1[6] = param_2[6] + param_1[6];
  param_1[7] = param_2[7] + param_1[7];
  param_1[8] = param_2[8] + param_1[8];
  return;
}


