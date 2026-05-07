
int FUN_00430010(void)

{
  int *in_ECX;
  
  if (in_ECX[0x54] == 0) {
    (**(code **)(*in_ECX + 0x1c))();
  }
  return in_ECX[0x54];
}



undefined4 FUN_00430090(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(*param_1 + 0x38))(param_2,param_3);
  if (param_2 != 0) {
    FUN_00748260(param_2,param_3,param_2,param_3);
  }
  return uVar1;
}



void FUN_004300f0(byte param_1)

{
  FUN_00747de0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00430110(int param_1,short *param_2)

{
  short sVar1;
  
  param_1 = param_1 - (int)param_2;
  do {
    sVar1 = *param_2;
    *(short *)(param_1 + (int)param_2) = sVar1;
    param_2 = param_2 + 1;
  } while (sVar1 != 0);
  return;
}



void FUN_00430140(void)

{
  undefined4 *in_ECX;
  
  FUN_00748220();
  in_ECX[8] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *(undefined1 *)(in_ECX + 0xf) = 0;
  in_ECX[0x51] = 0;
  in_ECX[0x50] = 0;
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  *(undefined1 *)(in_ECX + 9) = 0;
  *in_ECX = &PTR_FUN_00a3636c;
  in_ECX[0xc] = 0xffffffff;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

LPSYSTEMTIME FUN_004301a0(LPSYSTEMTIME param_1)

{
  HANDLE hFindFile;
  int in_ECX;
  FILETIME local_15c;
  _SYSTEMTIME local_154;
  _WIN32_FIND_DATAA local_144;
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_15c;
  if (*(int *)(in_ECX + 0x1c) == 0) {
    param_1->wYear = 0;
    param_1->wMonth = 0;
    param_1->wDayOfWeek = 0;
    param_1->wDay = 0;
    param_1->wHour = 0;
    param_1->wMinute = 0;
    param_1->wSecond = 0;
    param_1->wMilliseconds = 0;
  }
  else {
    hFindFile = FindFirstFileA((LPCSTR)(in_ECX + 0x3c),&local_144);
    if (hFindFile != (HANDLE)0xffffffff) {
      local_15c.dwLowDateTime = local_144.ftLastWriteTime.dwLowDateTime;
      local_15c.dwHighDateTime = local_144.ftLastWriteTime.dwHighDateTime;
    }
    FindClose(hFindFile);
    FileTimeToSystemTime(&local_15c,&local_154);
    SystemTimeToTzSpecificLocalTime((TIME_ZONE_INFORMATION *)0x0,&local_154,param_1);
  }
  return param_1;
}



int FUN_00430240(void)

{
  long _Offset;
  long lVar1;
  int *in_ECX;
  
  in_ECX[0x54] = 0;
  if (in_ECX[8] == 1) {
    FUN_00747d30();
  }
  (**(code **)(*in_ECX + 0x18))(0,0);
  if ((FILE *)in_ECX[7] != (FILE *)0x0) {
    _Offset = _ftell((FILE *)in_ECX[7]);
    _fseek((FILE *)in_ECX[7],0,2);
    lVar1 = _ftell((FILE *)in_ECX[7]);
    in_ECX[0x54] = lVar1;
    _fseek((FILE *)in_ECX[7],_Offset,0);
  }
  return in_ECX[0x54];
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004302b0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009abdee;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((_DAT_00b33a00 & 1) == 0) {
    _DAT_00b33a00 = _DAT_00b33a00 | 1;
    local_4 = 0;
    FUN_00401000(uVar1);
    _atexit(FUN_00a17b60);
  }
  local_4 = 0xffffffff;
  if (in_ECX[7] == 0) {
    (**(code **)(*in_ECX + 0x18))(0,0);
  }
  iVar2 = FUN_00747e80(param_1,param_2);
  in_ECX[0x52] = in_ECX[0x52] + iVar2;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00430350(int *param_1,void *param_2,size_t param_3,int param_4,undefined4 param_5)

{
  void *_Dst;
  undefined4 uVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  _Dst = (void *)FUN_00401f00(param_3);
  _memcpy(_Dst,param_2,param_3);
  if (param_4 != 0) {
    FUN_00748260(_Dst,param_3,param_4,param_5);
  }
  uVar1 = (**(code **)(*param_1 + 0x3c))(_Dst,param_3);
  FUN_00401f20(_Dst);
  return uVar1;
}



void FUN_004303b0(void)

{
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x24) != '\0') && (*(int *)(in_ECX + 0x1c) != 0)) {
    FUN_00747d30();
    _fclose(*(FILE **)(in_ECX + 0x1c));
  }
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x18));
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  return;
}



bool FUN_004303f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (param_1 == *(int *)(in_ECX + 0xc)) {
    return true;
  }
  FUN_00747e20(0,0);
  FUN_00747d30();
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x18));
  *(int *)(in_ECX + 0xc) = param_1;
  iVar1 = FUN_00401e30(param_1);
  *(int *)(in_ECX + 0x18) = iVar1;
  uVar2 = DAT_00b045d0;
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0xc) = DAT_00b045d0;
    uVar2 = FUN_00401f00(uVar2);
    *(undefined4 *)(in_ECX + 0x18) = uVar2;
  }
  *(undefined4 *)(in_ECX + 0x148) = 0;
  *(undefined4 *)(in_ECX + 0x14c) = 0;
  return iVar1 != 0;
}



bool FUN_00430480(short *param_1,uint param_2)

{
  short sVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined2 uVar4;
  short *psVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined4 *in_ECX;
  
  if (param_1 != (short *)0x0) {
    psVar5 = param_1;
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    uVar6 = (int)psVar5 - (int)(param_1 + 1) >> 1;
    if (param_2 < uVar6) goto LAB_004304ae;
  }
  uVar6 = param_2;
LAB_004304ae:
  if (*(ushort *)((int)in_ECX + 6) < uVar6) {
    uVar2 = *in_ECX;
    lVar3 = (ulonglong)(uVar6 + 1) * 2;
    puVar7 = (undefined2 *)FUN_00401f00(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3)
    ;
    *in_ECX = puVar7;
    if (puVar7 == (undefined2 *)0x0) {
      uVar6 = 0;
    }
    else if (param_1 == (short *)0x0) {
      *puVar7 = 0;
    }
    else {
      FUN_00430110(puVar7,param_1);
    }
    FUN_00401f20(uVar2);
    uVar4 = (undefined2)uVar6;
    if (0xffff < uVar6) {
      uVar4 = 0xffff;
    }
    *(undefined2 *)((int)in_ECX + 6) = uVar4;
  }
  else {
    if (uVar6 == 0) {
      FUN_00401f20(*in_ECX);
      *(undefined2 *)(in_ECX + 1) = 0;
      *in_ECX = 0;
      *(undefined2 *)((int)in_ECX + 6) = 0;
      return false;
    }
    if (param_1 == (short *)0x0) {
      *(undefined2 *)*in_ECX = 0;
    }
    else {
      FUN_00430110(*in_ECX,param_1);
    }
  }
  if (uVar6 < 0x10000) {
    *(short *)(in_ECX + 1) = (short)uVar6;
    return uVar6 != 0;
  }
  *(undefined2 *)(in_ECX + 1) = 0xffff;
  return uVar6 != 0;
}



void FUN_004305a0(short *param_1)

{
  short sVar1;
  short *psVar2;
  undefined2 uVar3;
  short *psVar4;
  int *in_ECX;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  if (param_1 == (short *)0x0) {
    return;
  }
  psVar2 = (short *)*in_ECX;
  if (psVar2 == (short *)0x0) {
    FUN_00430480(param_1,0);
    return;
  }
  psVar4 = param_1;
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  if (*(ushort *)(in_ECX + 1) == 0xffff) {
    psVar5 = psVar2;
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    uVar6 = (int)psVar5 - (int)(psVar2 + 1) >> 1;
  }
  else {
    uVar6 = (uint)*(ushort *)(in_ECX + 1);
  }
  uVar6 = ((int)psVar4 - (int)(param_1 + 1) >> 1) + uVar6;
  psVar4 = param_1;
  if (*(ushort *)((int)in_ECX + 6) < uVar6) {
    FUN_00430480(psVar2,uVar6);
  }
  else {
    uVar3 = (undefined2)uVar6;
    if (0xffff < uVar6) {
      uVar3 = 0xffff;
    }
    *(undefined2 *)(in_ECX + 1) = uVar3;
  }
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  uVar6 = (int)psVar4 - (int)param_1;
  puVar8 = (undefined4 *)(*in_ECX + -2);
  do {
    psVar2 = (short *)((int)puVar8 + 2);
    puVar8 = (undefined4 *)((int)puVar8 + 2);
  } while (*psVar2 != 0);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar8 = *(undefined4 *)param_1;
    param_1 = param_1 + 2;
    puVar8 = puVar8 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(char *)puVar8 = (char)*param_1;
    param_1 = (short *)((int)param_1 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  return;
}



void FUN_00430670(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009abe18;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3636c;
  local_4 = 0;
  if ((*(char *)(in_ECX + 9) != '\0') && (in_ECX[7] != 0)) {
    FUN_00747d30(uVar1);
    _fclose((FILE *)in_ECX[7]);
  }
  FUN_00401f20(in_ECX[6]);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  local_4 = 0xffffffff;
  FUN_00747de0();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_00430700(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_114 [3];
  char local_111;
  undefined4 local_110;
  undefined4 local_10c;
  char acStack_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_114;
  local_110 = param_1;
  if (in_ECX[7] == 0) {
    (**(code **)(*in_ECX + 0x18))(0,0);
  }
  iVar2 = 0;
  uVar3 = 0;
  iVar1 = 0;
  while( true ) {
    do {
      iVar4 = iVar1;
      local_10c = 1;
      iVar1 = (*(code *)in_ECX[1])();
      uVar3 = uVar3 + iVar1;
      if (iVar1 != 1) {
        local_111 = '\0';
      }
      if (param_2 < uVar3) {
        local_111 = '\0';
      }
      acStack_108[iVar4] = local_111;
      iVar1 = iVar4 + 1;
    } while ((iVar1 != 0x103) && (local_111 != '\0'));
    acStack_108[iVar4 + 1] = '\0';
    if (iVar2 == 0) {
      FUN_004028d0(acStack_108,0);
    }
    else {
      FUN_00412fa0(acStack_108);
    }
    iVar2 = iVar2 + iVar1;
    if (local_111 == '\0') break;
    iVar1 = 0;
  }
  return uVar3;
}



void FUN_004307f0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(code **)(in_ECX + 4) = FUN_00430090;
    *(code **)(in_ECX + 8) = FUN_00430350;
    return;
  }
  *(undefined1 **)(in_ECX + 4) = &LAB_00430050;
  *(undefined1 **)(in_ECX + 8) = &LAB_00430070;
  return;
}



int FUN_004308e0(undefined1 *param_1,uint param_2,ushort param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_4;
  
  puVar1 = param_1;
  uVar4 = 1;
  iVar3 = 0;
  iVar5 = 0;
  if (param_2 < 2) {
    *param_1 = 0;
    return 0;
  }
  do {
    local_4 = 1;
    iVar2 = (**(code **)(in_ECX + 4))(in_ECX,&param_1,1,&local_4,1);
    iVar3 = iVar3 + iVar2;
    if ((iVar2 != 1) || ((int)(char)param_1 == (uint)param_3)) break;
    puVar1[uVar4 - 1] = (char)param_1;
    uVar4 = uVar4 + 1;
    iVar5 = iVar5 + 1;
  } while (uVar4 < param_2);
  puVar1[iVar5] = 0;
  return iVar3;
}



void FUN_00430970(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  wchar_t *_Filename;
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  char *pcVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009abe48;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00748220(uVar2);
  in_ECX[8] = param_2;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a3636c;
  in_ECX[1] = &LAB_00430050;
  in_ECX[2] = &LAB_00430070;
  in_ECX[3] = param_3;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[0x52] = 0;
  in_ECX[0x51] = 0;
  in_ECX[0x50] = 0;
  in_ECX[0x54] = 0;
  in_ECX[0x53] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0xffffffff;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _Filename = (wchar_t *)(in_ECX + 0xf);
  if ((uint)((int)pcVar4 - (int)(param_1 + 1)) < 0x104) {
    iVar3 = (int)_Filename - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar3] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    if (param_2 == 1) {
      FUN_0042fe80(0,param_4);
      goto LAB_00430a41;
    }
  }
  else {
    *(undefined1 *)_Filename = 0;
  }
  if (param_2 == 0) {
    iVar3 = FID_conflict___access(_Filename,0);
    *(bool *)(in_ECX + 9) = iVar3 != -1;
  }
LAB_00430a41:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00430a90(byte param_1)

{
  FUN_00430670();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00430ba0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  uint uVar4;
  undefined4 local_4;
  
  local_4 = FUN_0070f910("BSFile");
  iVar1 = param_1;
  uVar4 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&local_4);
  param_1 = FUN_0070fc30(&DAT_00a363d4,in_ECX + 0xf);
  uVar4 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  param_1 = CONCAT31(param_1._1_3_,(char)in_ECX[9]);
  param_1 = FUN_0070f950(&DAT_00a363cc,param_1);
  uVar4 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  iVar2 = in_ECX[0xc];
  if (iVar2 == -1) {
    iVar2 = in_ECX[0x52];
  }
  param_1 = FUN_0070fb40("Position",iVar2);
  uVar4 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  uVar3 = (**(code **)(*in_ECX + 0x1c))();
  param_1 = FUN_0070fb40(&DAT_00a363b8,uVar3);
  uVar4 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  param_1 = FUN_0070fb40("BufferSize",in_ECX[3]);
  uVar4 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  return;
}



undefined4 * FUN_00430d60(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x210,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007478c0();
    *puVar2 = &PTR_FUN_00a363e8;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_00430dc0(byte param_1)

{
  FUN_007478e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 BSTaskThread_Runnable(int *param_1)

{
  (**(code **)(*param_1 + 4))();
  return 0;
}



void FUN_00430df0(void)

{
  int in_ECX;
  
  ResumeThread(*(HANDLE *)(in_ECX + 4));
  return;
}



void FUN_00430e00(void)

{
  HANDLE pvVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a363fc;
  in_ECX[3] = 0;
  in_ECX[4] = 1;
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,in_ECX[3],1,(LPCSTR)0x0);
  in_ECX[5] = pvVar1;
  in_ECX[6] = 1;
  in_ECX[7] = 1;
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,in_ECX[6],1,(LPCSTR)0x0);
  in_ECX[8] = pvVar1;
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,BSTaskThread_Runnable,in_ECX,4,in_ECX + 2);
  in_ECX[1] = pvVar1;
  return;
}



void FUN_00430e70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a363fc;
  SuspendThread((HANDLE)in_ECX[1]);
  CloseHandle((HANDLE)in_ECX[1]);
  CloseHandle((HANDLE)in_ECX[8]);
  CloseHandle((HANDLE)in_ECX[5]);
  return;
}



void FUN_00430ea0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a363fc;
  SuspendThread((HANDLE)in_ECX[1]);
  CloseHandle((HANDLE)in_ECX[1]);
  CloseHandle((HANDLE)in_ECX[8]);
  CloseHandle((HANDLE)in_ECX[5]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00430ef0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_320;
  undefined1 local_31c [780];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009abe8c;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_320;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffcd4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b33a04 == (int *)0x0) {
LAB_00430ff1:
    uVar2 = 0;
  }
  else {
    if (param_2 == 1) {
      local_320 = FUN_00401f00(0x154);
      local_4 = 0;
      if (local_320 != 0) {
        uVar2 = FUN_00430970(param_1,1,param_3,0);
        goto LAB_00430ff3;
      }
    }
    else {
      iVar3 = (**(code **)(*DAT_00b33a04 + 4))(param_1,local_31c,0,0xffffffff,uVar1);
      if (iVar3 == 0) goto LAB_00430ff1;
      if (iVar3 == 2) {
        uVar2 = FUN_0042e8e0(local_31c,param_3,param_4);
        goto LAB_00430ff3;
      }
      local_320 = FUN_00401f00(0x154);
      local_4 = 1;
      if (local_320 != 0) {
        uVar2 = FUN_00430970(local_31c,param_2,param_3,0);
        goto LAB_00430ff3;
      }
    }
    uVar2 = 0;
  }
LAB_00430ff3:
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}



int FUN_00431130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00430ef0(param_1,param_2,param_3,param_4);
  iVar2 = FUN_009832e6(puVar1,0,&PTR_PTR_00b044f8,&PTR_PTR_00b044e0,0);
  if (iVar2 == 0) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00431180(char *param_1,char *param_2,undefined1 *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  undefined2 *puVar8;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_108;
  *param_3 = 0;
  __splitpath(param_1,(char *)0x0,local_108,(char *)0x0,(char *)0x0);
  pcVar5 = local_108;
  pcVar2 = pcVar5;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2[(int)(local_108 + (-1 - (int)(local_108 + 1)))] == '\\') {
    pcVar2[(int)(local_108 + (-1 - (int)(local_108 + 1)))] = '\0';
  }
  iVar3 = _strncmp(param_2,"..\\",3);
  if (iVar3 != 0) {
    iVar3 = (int)param_3 - (int)param_2;
    do {
      cVar1 = *param_2;
      param_2[iVar3] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    return;
  }
  do {
    pcVar2 = pcVar5;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    for (pcVar2 = pcVar2 + (-1 - (int)(pcVar5 + 1)); pcVar7 = pcVar5, 0 < (int)pcVar2;
        pcVar2 = pcVar2 + -1) {
      if (pcVar5[(int)pcVar2] == '\\') {
        pcVar7 = pcVar5 + (int)pcVar2;
        break;
      }
    }
    if (pcVar7 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      *pcVar7 = '\0';
      param_2 = param_2 + 3;
    }
    iVar3 = _strncmp(param_2,"..\\",3);
    pcVar2 = pcVar5;
    if (iVar3 != 0) {
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar4 = (int)pcVar2 - (int)pcVar5;
      pcVar2 = param_3 + -1;
      do {
        pcVar7 = pcVar2 + 1;
        pcVar2 = pcVar2 + 1;
      } while (*pcVar7 != '\0');
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar2 = pcVar2 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar2 = pcVar2 + 1;
      }
      puVar8 = (undefined2 *)(param_3 + -1);
      do {
        pcVar5 = (char *)((int)puVar8 + 1);
        puVar8 = (undefined2 *)((int)puVar8 + 1);
      } while (*pcVar5 != '\0');
      *puVar8 = 0x5c;
      pcVar5 = param_2;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar2 = param_3 + -1;
      do {
        pcVar7 = pcVar2 + 1;
        pcVar2 = pcVar2 + 1;
      } while (*pcVar7 != '\0');
      pcVar7 = param_2;
      for (uVar4 = (uint)((int)pcVar5 - (int)param_2) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar2 = pcVar2 + 4;
      }
      for (uVar4 = (int)pcVar5 - (int)param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar2 = pcVar2 + 1;
      }
      return;
    }
  } while( true );
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a3640c;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



bool FUN_00431370(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_34;
  int iStack_1c;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009abec8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 != 0) {
    FUN_00747c70(param_1,param_2,0);
    local_4 = 0;
    uVar1 = (**(code **)(local_34 + 4))();
    local_4 = 0xffffffff;
    FUN_00747de0();
    *unaff_FS_OFFSET = local_c;
    return (bool)uVar1;
  }
  if (DAT_00b33a04 != (int *)0x0) {
    iVar3 = (**(code **)(*DAT_00b33a04 + 4))(param_1,0,0,0xffffffff,uVar2);
    *unaff_FS_OFFSET = iStack_1c;
    return iVar3 != 0;
  }
  *unaff_FS_OFFSET = local_c;
  return false;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_00431460(LPCSTR param_1,char *param_2,undefined4 param_3,int *param_4)

{
  char *pcVar1;
  char cVar2;
  HANDLE hFindFile;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  void *_Dst;
  char *pcVar6;
  uint uVar7;
  int *local_148;
  _WIN32_FIND_DATAA local_144;
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_148;
  local_148 = param_4;
  if (param_4 == (int *)0x0) {
    param_4 = (int *)FUN_00401f00(8);
    if (param_4 == (int *)0x0) {
      param_4 = (int *)0x0;
    }
    else {
      *param_4 = 0;
      param_4[1] = 0;
    }
  }
  local_148 = param_4;
  if ((DAT_00b04460 == '\0') ||
     (hFindFile = FindFirstFileA(param_1,&local_144), hFindFile == (HANDLE)0xffffffff)) {
    cVar2 = FUN_0042eba0(param_1,param_3);
    if (cVar2 == '\0') goto LAB_004315a7;
  }
  else {
    FindClose(hFindFile);
  }
  pcVar3 = param_2;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  pcVar4 = _strrchr(param_2,0x5c);
  pcVar5 = _strrchr(param_1,0x5c);
  param_4 = local_148;
  if ((pcVar4 != (char *)0x0) && (pcVar5 != (char *)0x0)) {
    pcVar6 = pcVar4 + 1;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    pcVar1 = pcVar5 + 1;
    pcVar3 = pcVar3 + (-((int)pcVar6 - (int)(pcVar4 + 2)) - (int)(param_2 + 1));
    pcVar4 = pcVar1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    _Dst = (void *)FUN_00401f00(pcVar4 + (int)(pcVar3 + (1 - (int)(pcVar5 + 2))));
    _memcpy(_Dst,param_2,(size_t)pcVar3);
    *(char *)((int)_Dst + (int)pcVar3) = '\0';
    pcVar3 = pcVar1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    pcVar4 = (char *)((int)_Dst + -1);
    do {
      pcVar5 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar5 != '\0');
    pcVar5 = pcVar1;
    for (uVar7 = (uint)((int)pcVar3 - (int)pcVar1) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar7 = (int)pcVar3 - (int)pcVar1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar4 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_00446cb0(_Dst);
    param_4 = local_148;
  }
LAB_004315a7:
  if ((param_4[1] == 0) && (*param_4 == 0)) {
    FUN_00401f20(param_4);
    return (int *)0x0;
  }
  return param_4;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004315f0(LPCSTR param_1,DWORD *param_2,undefined4 param_3)

{
  int iVar1;
  HANDLE hFindFile;
  _WIN32_FIND_DATAA local_144;
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_144;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = FUN_0042ea60(param_1,param_3);
  if (iVar1 != 0) {
    param_1 = (LPCSTR)(iVar1 + 0x3c);
  }
  hFindFile = FindFirstFileA(param_1,&local_144);
  if (hFindFile != (HANDLE)0xffffffff) {
    *param_2 = local_144.ftLastWriteTime.dwLowDateTime;
    param_2[1] = local_144.ftLastWriteTime.dwHighDateTime;
    FindClose(hFindFile);
    return 1;
  }
  return 0;
}



int FUN_00431690(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00430ef0(param_1,param_2,param_3,0xffff);
  iVar2 = FUN_009832e6(puVar1,0,&PTR_PTR_00b044f8,&PTR_PTR_00b044e0,0);
  if (iVar2 == 0) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



void FUN_004316e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009abefb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a36414;
  in_ECX[1] = &PTR__scalar_deleting_destructor__00a3640c;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0x12) = 1;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  in_ECX[2] = 0;
  local_4 = 0;
  if (DAT_00b33a04 == (undefined4 *)0x0) {
    DAT_00b33a04 = in_ECX;
  }
  FUN_00748140(&LAB_00431440,uVar1);
  FUN_007481a0(FUN_00431370);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00431770(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(in_ECX + 4);
  *in_ECX = &PTR_FUN_00a36414;
  while (uVar4 != 0) {
    iVar2 = uVar4 * 4;
    uVar4 = uVar4 - 1;
    FUN_00401f20(*(undefined4 *)(in_ECX[2] + -4 + iVar2));
    if (uVar4 < *(ushort *)((int)in_ECX + 0xe)) {
      uVar1 = *(ushort *)((int)in_ECX + 0xe) - 1;
      iVar2 = in_ECX[2];
      *(ushort *)((int)in_ECX + 0xe) = uVar1;
      iVar3 = *(int *)(iVar2 + uVar4 * 4);
      *(undefined4 *)(iVar2 + uVar4 * 4) = *(undefined4 *)(iVar2 + (uint)uVar1 * 4);
      *(undefined4 *)(in_ECX[2] + (uint)*(ushort *)((int)in_ECX + 0xe) * 4) = 0;
      if (iVar3 != 0) {
        *(short *)(in_ECX + 4) = *(short *)(in_ECX + 4) + -1;
      }
    }
  }
  if (DAT_00b33a04 == in_ECX) {
    DAT_00b33a04 = (undefined4 *)0x0;
  }
  in_ECX[1] = &PTR__scalar_deleting_destructor__00a3640c;
  FUN_00401f20(in_ECX[2]);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_00431970(char *param_1,char *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  size_t _Size;
  char *pcVar5;
  CHAR *pCVar6;
  BOOL BVar7;
  HANDLE local_14c;
  char *local_148;
  _WIN32_FIND_DATAA local_144;
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_14c;
  local_148 = param_1;
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    return (int *)0x0;
  }
  pcVar3 = _strstr(param_1,"*");
  if ((pcVar3 == (char *)0x0) && (pcVar3 = _strstr(param_1,"?"), pcVar3 == (char *)0x0)) {
    piVar4 = (int *)FUN_00431460(param_1,param_2,param_3,param_4);
    return piVar4;
  }
  if (param_4 == (int *)0x0) {
    param_4 = (int *)FUN_00401f00(8);
    if (param_4 == (int *)0x0) {
      param_4 = (int *)0x0;
    }
    else {
      *param_4 = 0;
      param_4[1] = 0;
    }
  }
  if ((DAT_00b04460 != '\0') &&
     (local_14c = FindFirstFileA(param_1,&local_144), local_14c != (HANDLE)0xffffffff)) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    _Size = (int)pcVar3 - (int)(param_2 + 1);
    pcVar3 = _strrchr(param_2,0x5c);
    if (pcVar3 != (char *)0x0) {
      pcVar5 = pcVar3 + 1;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      _Size = _Size - ((int)pcVar5 - (int)(pcVar3 + 2));
    }
    do {
      pCVar6 = local_144.cFileName;
      do {
        cVar1 = *pCVar6;
        pCVar6 = pCVar6 + 1;
      } while (cVar1 != '\0');
      pcVar3 = (char *)FUN_00401f00(pCVar6 + ((_Size + 1) - (int)(local_144.cFileName + 1)));
      _memcpy(pcVar3,param_2,_Size);
      pcVar3[_Size] = '\0';
      pcVar5 = _strrchr(pcVar3,0x5c);
      if (pcVar5 != (char *)0x0) {
        pCVar6 = local_144.cFileName;
        iVar2 = 1 - (int)pCVar6;
        do {
          cVar1 = *pCVar6;
          pCVar6[(int)(pcVar5 + iVar2)] = cVar1;
          pCVar6 = pCVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00446cb0(pcVar3);
      }
      BVar7 = FindNextFileA(local_14c,&local_144);
    } while (BVar7 != 0);
    FindClose(local_14c);
    param_1 = local_148;
  }
  FUN_0042ec70(param_4,param_1,param_2,param_3);
  if ((param_4[1] == 0) && (*param_4 == 0)) {
    FUN_00401f20(param_4);
    param_4 = (int *)0x0;
  }
  return param_4;
}



void FUN_00431c10(int param_1)

{
  ushort uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  undefined4 local_4;
  
  local_4 = FUN_0070fb40("FileFinder Paths",*(undefined2 *)(in_ECX + 0x10));
  uVar3 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&local_4);
  uVar3 = 0;
  if (*(short *)(in_ECX + 0x10) != 0) {
    do {
      iVar2 = FUN_0070fc30(&DAT_00a36430,*(undefined4 *)(*(int *)(in_ECX + 8) + uVar3 * 4));
      uVar1 = *(ushort *)(param_1 + 10);
      uVar4 = (uint)uVar1;
      if (*(ushort *)(param_1 + 8) <= uVar4) {
        FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar4);
      }
      if (uVar4 < *(ushort *)(param_1 + 10)) {
        if (iVar2 == 0) {
          if (*(int *)(*(int *)(param_1 + 4) + uVar4 * 4) != 0) {
            *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(param_1 + 4) + uVar4 * 4) == 0) {
          *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(param_1 + 10) = uVar1 + 1;
        if (iVar2 != 0) {
          *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
        }
      }
      *(int *)(*(int *)(param_1 + 4) + uVar4 * 4) = iVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(in_ECX + 0x10));
  }
  return;
}



undefined4 LockFreeMap_DispatchVtblFn(int param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x10))
                    (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*in_ECX + 0x1c))
                      (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    InterlockedDecrement((LONG *)(in_ECX[0xb] + iVar2 * 4));
    return 1;
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

LPVOID ThreadSpecificInterfaceManager_AddInterface(undefined4 *param_1)

{
  LONG LVar1;
  LPVOID lpTlsValue;
  DWORD DVar2;
  uint *in_ECX;
  uint uVar3;
  uint uVar4;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_108;
  LVar1 = InterlockedIncrement((LONG *)(in_ECX + 3));
  uVar4 = *in_ECX;
  uVar3 = LVar1 - 1;
  if (uVar3 < uVar4) {
    lpTlsValue = (LPVOID)(**(code **)*param_1)(uVar3);
    *(LPVOID *)(in_ECX[2] + 4 + uVar3 * 8) = lpTlsValue;
    DVar2 = GetCurrentThreadId();
    *(DWORD *)(in_ECX[2] + uVar3 * 8) = DVar2;
    TlsSetValue(in_ECX[1],lpTlsValue);
  }
  else {
    DVar2 = GetCurrentThreadId();
    _sprintf(local_108,
             "Could not add new interface for thread %08X in ThreadSpecificInterfaceManager::AddInterface.  Max threads is: %i\n"
             ,DVar2,uVar4);
    OutputDebugStringA(local_108);
    DebugBreak();
    lpTlsValue = (LPVOID)0x0;
  }
  return lpTlsValue;
}



undefined4 LockFreeMap_TraversalHelper(int param_1,undefined8 *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  LONG LVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined8 uVar6;
  
  do {
    do {
      piVar3 = (int *)(*(int *)(*in_ECX + 0xc) + param_1 * 4);
      in_ECX[4] = (int)piVar3;
      in_ECX[5] = *piVar3;
      *(uint *)in_ECX[2] = in_ECX[5] & 0xfffffffe;
    } while (*(uint *)in_ECX[4] != (in_ECX[5] & 0xfffffffeU));
    if ((in_ECX[5] & 0xfffffffeU) == 0) {
      uVar5 = 0;
      break;
    }
    (**(code **)(*(int *)*in_ECX + 0x20))(*(undefined4 *)param_2,*(undefined4 *)((int)param_2 + 4));
    uVar6 = (**(code **)(*(int *)*in_ECX + 0x24))
                      (*(undefined4 *)(in_ECX[5] & 0xfffffffeU),
                       ((undefined4 *)(in_ECX[5] & 0xfffffffeU))[1]);
    *param_2 = uVar6;
    puVar1 = (undefined4 *)*param_3;
    piVar3 = (int *)((in_ECX[5] & 0xfffffffeU) + 8);
    if (puVar1 != (undefined4 *)*piVar3) {
      if (((puVar1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar1 + 2), LVar4 == 0))
         && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = *piVar3;
      *param_3 = iVar2;
      if (iVar2 != 0) {
        InterlockedIncrement((LONG *)(iVar2 + 8));
      }
    }
    uVar5 = 1;
  } while ((*(uint *)((in_ECX[5] & 0xfffffffeU) + 0xc) & 1) != 0);
  *(undefined4 *)in_ECX[1] = 0;
  *(undefined4 *)in_ECX[2] = 0;
  *(undefined4 *)in_ECX[3] = 0;
  return uVar5;
}



void BSTaskManagerThread_dtor(byte param_1)

{
  FUN_00430e70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00431f50(void)

{
  DWORD DVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    InterlockedIncrement((LONG *)(in_ECX + 0xc));
    ReleaseSemaphore(*(HANDLE *)(in_ECX + 0x14),1,(LPLONG)0x0);
  }
  DVar1 = WaitForSingleObject(*(HANDLE *)(in_ECX + 0x20),0xffffffff);
  if (DVar1 != 0x102) {
    InterlockedDecrement((LONG *)(in_ECX + 0x18));
  }
  return;
}



void FUN_00431fa0(void)

{
  DWORD DVar1;
  DWORD DVar2;
  int in_ECX;
  
  DVar1 = *(DWORD *)(in_ECX + 8);
  DVar2 = GetCurrentThreadId();
  if (DVar1 != DVar2) {
    if (*(int *)(in_ECX + 0xc) == 0) {
      InterlockedIncrement((LONG *)(in_ECX + 0xc));
      ReleaseSemaphore(*(HANDLE *)(in_ECX + 0x14),1,(LPLONG)0x0);
    }
    InterlockedIncrement((LONG *)(in_ECX + 0x18));
    ReleaseSemaphore(*(HANDLE *)(in_ECX + 0x20),1,(LPLONG)0x0);
  }
  return;
}



undefined4 FUN_00431ff0(int param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  InterlockedIncrement((LONG *)(param_1 + 8));
  cVar1 = (**(code **)(*in_ECX + 0xc))
                    (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*in_ECX + 0x1c))
                      (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    InterlockedIncrement((LONG *)(in_ECX[0xb] + iVar2 * 4));
    iVar2 = (**(code **)(*in_ECX + 0x4c))(param_1);
    iVar2 = *(int *)(in_ECX[10] + iVar2 * 4);
    if (*(int *)(iVar2 + 0xc) == 0) {
      InterlockedIncrement((LONG *)(iVar2 + 0xc));
      ReleaseSemaphore(*(HANDLE *)(iVar2 + 0x14),1,(LPLONG)0x0);
    }
    return 1;
  }
  return 0;
}



undefined4 FUN_004320a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x38) != 6) {
    uVar1 = param_1[4];
    iVar2 = param_1[5];
    uVar4 = __allshr();
    if ((int)(uVar4 & 0xff) <= *(int *)(in_ECX + 0x38)) {
      param_1[4] = uVar1 & 0xff00ffff;
      param_1[5] = iVar2;
    }
  }
  (**(code **)(*param_1 + 0x18))();
  cVar3 = FUN_00431ff0(param_1);
  while (cVar3 == '\0') {
    uVar4 = InterlockedIncrement((LONG *)&DAT_00b33a14);
    uVar1 = param_1[4];
    param_1[4] = (uVar1 & 0xffff0000) + (uVar4 & 0xffff);
    param_1[5] = param_1[5] + (uint)CARRY4(uVar1 & 0xffff0000,uVar4 & 0xffff);
    cVar3 = FUN_00431ff0(param_1);
  }
  return 1;
}



void IOManager_TaskStateTransition(int *param_1)

{
  uint uVar1;
  uint Comperand;
  uint *Destination;
  
  Comperand = param_1[3];
  Destination = (uint *)(param_1 + 3);
  if (5 < Comperand) {
    return;
  }
  do {
    switch(Comperand) {
    case 0:
      uVar1 = InterlockedCompareExchange((LONG *)Destination,6,Comperand);
      if (uVar1 == Comperand) {
                    /* WARNING: Could not recover jumptable at 0x0043217d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xc))();
        return;
      }
      break;
    default:
      uVar1 = InterlockedCompareExchange((LONG *)Destination,6,Comperand);
      if (uVar1 == Comperand) {
        (**(code **)(*param_1 + 0xc))(0);
        LockFreeMap_DispatchVtblFn(param_1);
        return;
      }
      break;
    case 3:
      while (Comperand == 3) {
        Sleep(1);
        Comperand = *Destination;
      }
      break;
    case 4:
      while (Comperand == 4) {
        Sleep(1);
        Comperand = *Destination;
      }
      break;
    case 5:
      uVar1 = InterlockedCompareExchange((LONG *)Destination,6,Comperand);
      if (uVar1 == Comperand) {
                    /* WARNING: Could not recover jumptable at 0x00432200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xc))();
        return;
      }
    }
    Comperand = *Destination;
  } while (Comperand < 6);
  return;
}



undefined4 FUN_00432220(int param_1,undefined4 param_2,undefined4 param_3)

{
  int Comperand;
  LONG LVar1;
  int *in_ECX;
  
  Comperand = *(int *)(param_1 + 0xc);
  if (Comperand == 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 0x14) = param_3;
    return 1;
  }
  if (Comperand < 3) {
    LVar1 = InterlockedCompareExchange((LONG *)(param_1 + 0xc),2,Comperand);
    if (LVar1 == Comperand) {
      LockFreeMap_DispatchVtblFn(param_1);
      *(undefined4 *)(param_1 + 0x10) = param_2;
      *(undefined4 *)(param_1 + 0x14) = param_3;
      LVar1 = InterlockedCompareExchange((LONG *)(param_1 + 0xc),0,2);
      if (LVar1 == 2) {
        (**(code **)(*in_ECX + 0x3c))(param_1);
      }
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_004322b0(void)

{
  int iVar1;
  LONG LVar2;
  DWORD DVar3;
  int in_ECX;
  uint uVar4;
  
  LVar2 = InterlockedIncrement((LONG *)(in_ECX + 0x20));
  if (LVar2 == 1) {
    iVar1 = *(int *)(in_ECX + 0x1c);
    while (iVar1 != 0) {
      Sleep(1);
      iVar1 = *(int *)(in_ECX + 0x1c);
    }
    uVar4 = 0;
    if (*(int *)(in_ECX + 0x24) != 0) {
      do {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x28) + uVar4 * 4);
        if (*(int *)(iVar1 + 0xc) == 0) {
          InterlockedIncrement((LONG *)(iVar1 + 0xc));
          ReleaseSemaphore(*(HANDLE *)(iVar1 + 0x14),1,(LPLONG)0x0);
        }
        DVar3 = WaitForSingleObject(*(HANDLE *)(iVar1 + 0x20),0xffffffff);
        if (DVar3 != 0x102) {
          InterlockedDecrement((LONG *)(iVar1 + 0x18));
        }
        InterlockedIncrement((LONG *)(in_ECX + 0x1c));
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(in_ECX + 0x24));
    }
    return 1;
  }
  return 0;
}



undefined4 FUN_00432350(void)

{
  int iVar1;
  LONG LVar2;
  int in_ECX;
  uint uVar3;
  
  if ((*(int *)(in_ECX + 0x20) != 0) &&
     (LVar2 = InterlockedDecrement((LONG *)(in_ECX + 0x20)), LVar2 == 0)) {
    if (*(int *)(in_ECX + 0x1c) != *(int *)(in_ECX + 0x24)) {
      do {
        Sleep(1);
      } while (*(int *)(in_ECX + 0x1c) != *(int *)(in_ECX + 0x24));
    }
    uVar3 = 0;
    if (*(int *)(in_ECX + 0x24) != 0) {
      do {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x28) + uVar3 * 4);
        if (*(int *)(iVar1 + 0xc) == 0) {
          InterlockedIncrement((LONG *)(iVar1 + 0xc));
          ReleaseSemaphore(*(HANDLE *)(iVar1 + 0x14),1,(LPLONG)0x0);
        }
        InterlockedIncrement((LONG *)(iVar1 + 0x18));
        ReleaseSemaphore(*(HANDLE *)(iVar1 + 0x20),1,(LPLONG)0x0);
        InterlockedDecrement((LONG *)(in_ECX + 0x1c));
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(in_ECX + 0x24));
    }
    return 1;
  }
  return 0;
}



void LockFreeQueue_IOTask_ctor(int param_1,undefined4 param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d7deb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a36500;
  in_ECX[6] = 0;
  puVar3 = (undefined4 *)FUN_00401f00(8,uVar2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  in_ECX[1] = puVar3;
  in_ECX[2] = puVar3;
  in_ECX[3] = param_2;
  lVar1 = (ulonglong)(uint)(param_1 * 2) * 4;
  uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  in_ECX[4] = uVar4;
  iVar5 = FUN_00401f00(0x10);
  local_4 = 0;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ThreadSpecificInterfaceManager_ctor(param_1);
  }
  in_ECX[5] = uVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00432520(int param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b44b6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a36514;
  in_ECX[6] = 0;
  in_ECX[2] = param_2;
  pvVar3 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)param_2 * 4),uVar2);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar3,4,param_2,FUN_004bddb0);
  }
  in_ECX[3] = pvVar3;
  lVar1 = (ulonglong)(uint)(param_1 * 3) * 4;
  local_4 = 0xffffffff;
  uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  in_ECX[1] = uVar4;
  in_ECX[4] = param_3;
  iVar5 = FUN_00401f00(0x10);
  local_4 = 1;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ThreadSpecificInterfaceManager_ctor(param_1);
  }
  in_ECX[5] = uVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00432690(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009abf5b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = 0;
  if (puVar1 != (undefined4 *)*param_3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 2);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar3);
      }
    }
    iVar2 = *param_3;
    in_ECX[2] = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 8));
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x004327ba) */
/* WARNING: Removing unreachable block (ram,0x004327c8) */
/* WARNING: Removing unreachable block (ram,0x004327cc) */

void FUN_00432740(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  int *in_ECX;
  int local_c;
  int local_8;
  
  iVar1 = **(int **)(*in_ECX + 0x14);
  uVar2 = iVar1 * 2;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)uVar2 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar2 * 4));
  _memcpy(_Dst,*(void **)(*in_ECX + 0x10),iVar1 * 8);
  iVar1 = in_ECX[4];
  local_c = 0;
  local_8 = 0;
  iVar3 = local_c;
  do {
    if (iVar1 == 0) {
      FUN_00401f20(_Dst);
      in_ECX[4] = iVar3;
      in_ECX[3] = local_8;
      return;
    }
    local_c = in_ECX[4];
    in_ECX[4] = *(int *)(local_c + 4);
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        if (local_c == *(int *)((int)_Dst + uVar4 * 4)) {
          local_8 = local_8 + 1;
          *(int *)(local_c + 4) = iVar3;
          goto LAB_004327e5;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
    *(undefined4 *)(local_c + 4) = 0;
    FUN_00401f20(local_c);
    local_c = iVar3;
LAB_004327e5:
    iVar1 = in_ECX[4];
    iVar3 = local_c;
  } while( true );
}



void IOManager_sub_432820(int param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  lVar2 = __allmul(param_2,param_2 >> 0x1f,0x10000,0);
  FUN_00432220(param_1,lVar2 + (uVar1 & 0xffffffffff00ffff));
  return;
}



void FUN_00432860(void)

{
  DWORD DVar1;
  char cVar2;
  DWORD DVar3;
  
  cVar2 = FUN_004322b0();
  if ((cVar2 != '\0') &&
     (DVar1 = *(DWORD *)(*(int *)(g_ModelLoader_singleton + 0x18) + 8), DVar3 = GetCurrentThreadId()
     , DVar1 != DVar3)) {
    FUN_00431f50();
    return;
  }
  return;
}



void FUN_00432890(void)

{
  char cVar1;
  
  cVar1 = FUN_00432350();
  if (cVar1 != '\0') {
    FUN_00431fa0();
    return;
  }
  return;
}



void LockFreeMap_CollectDeferredFrees(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *_Dst;
  uint uVar5;
  LONG LVar6;
  int *in_ECX;
  undefined4 *local_c;
  int local_8;
  
  iVar1 = **(int **)(*in_ECX + 0x14);
  uVar3 = iVar1 * 3;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar3 * 4));
  _memcpy(_Dst,*(void **)(*in_ECX + 4),iVar1 * 0xc);
  iVar1 = in_ECX[7];
  local_c = (undefined4 *)0x0;
  local_8 = 0;
  puVar4 = local_c;
  do {
    if (iVar1 == 0) {
      FUN_00401f20(_Dst);
      in_ECX[7] = (int)puVar4;
      in_ECX[8] = local_8;
      return;
    }
    local_c = (undefined4 *)in_ECX[7];
    in_ECX[7] = local_c[2];
    uVar5 = 0;
    if (uVar3 != 0) {
      do {
        if (local_c == *(undefined4 **)((int)_Dst + uVar5 * 4)) {
          local_8 = local_8 + 1;
          local_c[2] = puVar4;
          goto LAB_00432967;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
    }
    local_c[2] = 0;
    (**(code **)(*(int *)*in_ECX + 0x20))(*local_c,local_c[1]);
    puVar2 = (undefined4 *)local_c[2];
    if (((puVar2 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar2 + 2), LVar6 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    FUN_00401f20(local_c);
    local_c = puVar4;
LAB_00432967:
    iVar1 = in_ECX[7];
    puVar4 = local_c;
  } while( true );
}



void FUN_004329a0(int param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *in_ECX;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 2);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(int *)(param_1 + 4) = in_ECX[4];
  in_ECX[3] = in_ECX[3] + 1;
  in_ECX[4] = param_1;
  if (in_ECX[3] == *(int *)(*in_ECX + 0xc)) {
    FUN_00432740();
  }
  return;
}



void LockFreeMap_DeferredListWalkHelper(int param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *in_ECX;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 2);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(int *)(param_1 + 8) = in_ECX[7];
  in_ECX[8] = in_ECX[8] + 1;
  in_ECX[7] = param_1;
  if (in_ECX[8] == *(int *)(*in_ECX + 0x10)) {
    LockFreeMap_CollectDeferredFrees();
  }
  return;
}



uint FUN_00432a60(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  LONG LVar8;
  int *in_ECX;
  
  piVar1 = (int *)(*(int *)(*in_ECX + 0xc) + param_1 * 4);
  do {
    do {
      in_ECX[4] = (int)piVar1;
      in_ECX[5] = *piVar1;
      *(uint *)in_ECX[2] = in_ECX[5] & 0xfffffffe;
      uVar6 = *(uint *)in_ECX[4];
    } while (uVar6 != (in_ECX[5] & 0xfffffffeU));
    while( true ) {
      if ((in_ECX[5] & 0xfffffffeU) == 0) {
        return uVar6 & 0xffffff00;
      }
      in_ECX[6] = *(int *)((in_ECX[5] & 0xfffffffeU) + 0xc);
      *(uint *)in_ECX[1] = in_ECX[6] & 0xfffffffe;
      if (in_ECX[6] != *(int *)((in_ECX[5] & 0xfffffffeU) + 0xc)) break;
      uVar2 = *(undefined4 *)(in_ECX[5] & 0xfffffffeU);
      uVar3 = ((undefined4 *)(in_ECX[5] & 0xfffffffeU))[1];
      uVar6 = in_ECX[5] & 0xfffffffe;
      if (*(uint *)in_ECX[4] != uVar6) break;
      if ((in_ECX[6] & 1U) == 0) {
        cVar5 = (**(code **)(*(int *)*in_ECX + 0x28))(uVar2,uVar3,param_2,param_3);
        if (cVar5 != '\0') {
          uVar6 = (**(code **)(*(int *)*in_ECX + 0x2c))(uVar2,uVar3,param_2,param_3);
          return uVar6;
        }
        in_ECX[4] = (in_ECX[5] & 0xfffffffeU) + 0xc;
        *(uint *)in_ECX[3] = in_ECX[5] & 0xfffffffe;
      }
      else {
        uVar7 = InterlockedCompareExchange((LONG *)in_ECX[4],in_ECX[6] & 0xfffffffe,uVar6);
        if (uVar7 != uVar6) break;
        uVar6 = in_ECX[5] & 0xfffffffe;
        puVar4 = *(undefined4 **)(uVar6 + 8);
        if (puVar4 != (undefined4 *)0x0) {
          LVar8 = InterlockedDecrement(puVar4 + 2);
          if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
            (**(code **)*puVar4)(1);
          }
          *(undefined4 *)(uVar6 + 8) = 0;
        }
        *(int *)(uVar6 + 8) = in_ECX[7];
        in_ECX[8] = in_ECX[8] + 1;
        in_ECX[7] = uVar6;
        if (in_ECX[8] == *(int *)(*in_ECX + 0x10)) {
          LockFreeMap_CollectDeferredFrees();
        }
      }
      in_ECX[5] = in_ECX[6];
      uVar6 = in_ECX[6] & 0xfffffffe;
      *(uint *)in_ECX[2] = uVar6;
    }
  } while( true );
}



undefined4 LockFreeMap_IteratorAdvance(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 uVar8;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009acc28;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = (int *)(*(int *)(*in_ECX + 0xc) + param_1 * 4);
LAB_00432c6b:
  do {
    in_ECX[4] = (int)piVar1;
    in_ECX[5] = *piVar1;
    *(uint *)in_ECX[2] = in_ECX[5] & 0xfffffffe;
  } while (*(uint *)in_ECX[4] != (in_ECX[5] & 0xfffffffeU));
LAB_00432ca6:
  if ((in_ECX[5] & 0xfffffffeU) == 0) {
    uVar8 = 0;
LAB_00432eb0:
    *unaff_FS_OFFSET = local_c;
    return uVar8;
  }
  in_ECX[6] = *(int *)((in_ECX[5] & 0xfffffffeU) + 0xc);
  *(uint *)in_ECX[1] = in_ECX[6] & 0xfffffffe;
  if (in_ECX[6] != *(int *)((in_ECX[5] & 0xfffffffeU) + 0xc)) goto LAB_00432c6b;
  puVar2 = *(undefined4 **)((in_ECX[5] & 0xfffffffeU) + 8);
  if (puVar2 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar2 + 2);
  }
  uVar5 = in_ECX[5] & 0xfffffffe;
  local_4 = 0;
  if (*(uint *)in_ECX[4] != uVar5) {
    local_4 = 0xffffffff;
    if (puVar2 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar2 + 2);
      if (LVar7 == 0) {
        (**(code **)*puVar2)(1,uVar4);
      }
    }
    goto LAB_00432c6b;
  }
  if ((in_ECX[6] & 1U) == 0) {
    if (puVar2 == (undefined4 *)*param_2) {
      local_4 = 0xffffffff;
      if (puVar2 != (undefined4 *)0x0) {
        LVar7 = InterlockedDecrement(puVar2 + 2);
        if (LVar7 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      uVar8 = 1;
      goto LAB_00432eb0;
    }
    in_ECX[4] = (in_ECX[5] & 0xfffffffeU) + 0xc;
    *(uint *)in_ECX[3] = in_ECX[5] & 0xfffffffe;
  }
  else {
    uVar6 = InterlockedCompareExchange((LONG *)in_ECX[4],in_ECX[6] & 0xfffffffe,uVar5);
    if (uVar6 != uVar5) goto LAB_00432e51;
    uVar5 = in_ECX[5] & 0xfffffffe;
    puVar3 = *(undefined4 **)(uVar5 + 8);
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 2);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 *)(uVar5 + 8) = 0;
    }
    *(int *)(uVar5 + 8) = in_ECX[7];
    in_ECX[8] = in_ECX[8] + 1;
    in_ECX[7] = uVar5;
    if (in_ECX[8] == *(int *)(*in_ECX + 0x10)) {
      LockFreeMap_CollectDeferredFrees();
    }
  }
  in_ECX[5] = in_ECX[6];
  *(uint *)in_ECX[2] = in_ECX[6] & 0xfffffffe;
  local_4 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(puVar2 + 2);
    if (LVar7 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  goto LAB_00432ca6;
LAB_00432e51:
  local_4 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(puVar2 + 2);
    if (LVar7 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  goto LAB_00432c6b;
}



undefined4 FUN_00432ed0(undefined4 param_1,undefined8 *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  LONG LVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  uint uVar6;
  int *piVar7;
  undefined8 uVar8;
  
LAB_00432ee0:
  while( true ) {
    cVar3 = FUN_00432a60(param_1,*(undefined4 *)param_2,*(undefined4 *)((int)param_2 + 4));
    if (cVar3 == '\0') {
      if ((in_ECX[5] & 0xfffffffe) != 0) goto code_r0x00432fa3;
      break;
    }
    if ((in_ECX[6] & 0xfffffffe) == 0) break;
    if ((*(uint *)((in_ECX[6] & 0xfffffffe) + 0xc) & 1) == 0) {
      (**(code **)(*(int *)*in_ECX + 0x20))
                (*(undefined4 *)param_2,*(undefined4 *)((int)param_2 + 4));
      uVar8 = (**(code **)(*(int *)*in_ECX + 0x24))
                        (*(undefined4 *)(in_ECX[6] & 0xfffffffe),
                         ((undefined4 *)(in_ECX[6] & 0xfffffffe))[1]);
      *param_2 = uVar8;
      puVar1 = (undefined4 *)*param_3;
      piVar7 = (int *)((in_ECX[6] & 0xfffffffe) + 8);
      if (puVar1 != (undefined4 *)*piVar7) {
        if (puVar1 != (undefined4 *)0x0) {
          LVar4 = InterlockedDecrement(puVar1 + 2);
          if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
        }
        iVar2 = *piVar7;
        *param_3 = iVar2;
        if (iVar2 != 0) {
          InterlockedIncrement((LONG *)(iVar2 + 8));
        }
      }
      uVar6 = in_ECX[6];
      goto LAB_0043302c;
    }
  }
  uVar5 = 0;
LAB_00433073:
  *(undefined4 *)in_ECX[1] = 0;
  *(undefined4 *)in_ECX[2] = 0;
  *(undefined4 *)in_ECX[3] = 0;
  return uVar5;
code_r0x00432fa3:
  if ((*(uint *)((in_ECX[5] & 0xfffffffe) + 0xc) & 1) == 0) {
    (**(code **)(*(int *)*in_ECX + 0x20))(*(undefined4 *)param_2,*(undefined4 *)((int)param_2 + 4));
    uVar8 = (**(code **)(*(int *)*in_ECX + 0x24))
                      (*(undefined4 *)(in_ECX[5] & 0xfffffffe),
                       ((undefined4 *)(in_ECX[5] & 0xfffffffe))[1]);
    *param_2 = uVar8;
    puVar1 = (undefined4 *)*param_3;
    piVar7 = (int *)((in_ECX[5] & 0xfffffffe) + 8);
    if (puVar1 != (undefined4 *)*piVar7) {
      if (puVar1 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(puVar1 + 2);
        if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
      }
      iVar2 = *piVar7;
      *param_3 = iVar2;
      if (iVar2 != 0) {
        InterlockedIncrement((LONG *)(iVar2 + 8));
      }
    }
    uVar6 = in_ECX[5];
LAB_0043302c:
    uVar5 = 1;
    if ((*(uint *)((uVar6 & 0xfffffffe) + 0xc) & 1) == 0) goto LAB_00433073;
    puVar1 = (undefined4 *)*param_3;
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 2);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *param_3 = 0;
    }
  }
  goto LAB_00432ee0;
}



void FUN_004330a0(void)

{
  int iVar1;
  int iVar2;
  uint *in_ECX;
  uint uVar3;
  
  uVar3 = 0;
  if (*in_ECX != 0) {
    do {
      iVar1 = *(int *)(in_ECX[2] + 4 + uVar3 * 8);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0xc);
        while (iVar2 != 0) {
          FUN_00432740();
          iVar2 = *(int *)(iVar1 + 0xc);
        }
        FUN_00401f20(iVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *in_ECX);
  }
  FUN_00401f20(in_ECX[2]);
  TlsFree(in_ECX[1]);
  return;
}



void FUN_00433110(void)

{
  int iVar1;
  int iVar2;
  uint *in_ECX;
  uint uVar3;
  
  uVar3 = 0;
  if (*in_ECX != 0) {
    do {
      iVar1 = *(int *)(in_ECX[2] + 4 + uVar3 * 8);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0x20);
        while (iVar2 != 0) {
          LockFreeMap_CollectDeferredFrees();
          iVar2 = *(int *)(iVar1 + 0x20);
        }
        FUN_00401f20(iVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *in_ECX);
  }
  FUN_00401f20(in_ECX[2]);
  TlsFree(in_ECX[1]);
  return;
}



undefined4 FUN_00433180(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int in_ECX;
  
  cVar2 = FUN_00432a60(param_1,param_2,param_3);
  if (cVar2 != '\0') {
    LFM_DoublyLinkedQueueInsert((*(uint *)(in_ECX + 0x14) & 0xfffffffe) + 8);
    if ((*(uint *)((*(uint *)(in_ECX + 0x14) & 0xfffffffe) + 0xc) & 1) != 0) {
      cVar2 = '\0';
    }
  }
  **(undefined4 **)(in_ECX + 4) = 0;
  puVar1 = *(undefined4 **)(in_ECX + 8);
  *puVar1 = 0;
  **(undefined4 **)(in_ECX + 0xc) = 0;
  return CONCAT31((int3)((uint)puVar1 >> 8),cVar2);
}



undefined4
FUN_004331f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char param_5)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint Comperand;
  uint uVar5;
  LONG LVar6;
  undefined4 *in_ECX;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined1 local_19;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c33eb;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_19 = 1;
  uVar7 = 0;
  cVar2 = FUN_00432a60(param_1,param_2,param_3);
  if (cVar2 == '\0') {
    do {
      if (uVar7 == 0) {
        iVar4 = FUN_00401f00(0x10,uVar3);
        local_4 = 0;
        if (iVar4 == 0) {
          uVar7 = 0;
        }
        else {
          uVar9 = param_4;
          uVar8 = (**(code **)(*(int *)*in_ECX + 0x24))(param_2,param_3,param_4);
          uVar7 = FUN_00432690(uVar8,uVar9);
        }
        local_4 = 0xffffffff;
      }
      Comperand = in_ECX[5] & 0xfffffffe;
      *(uint *)(uVar7 + 0xc) = Comperand;
      uVar5 = InterlockedCompareExchange((LONG *)in_ECX[4],uVar7 & 0xfffffffe,Comperand);
      if (uVar5 == Comperand) {
        (**(code **)(*(int *)*in_ECX + 0x30))();
        goto LAB_00433343;
      }
      cVar2 = FUN_00432a60(param_1,param_2,param_3);
    } while (cVar2 == '\0');
    if (uVar7 != 0) {
      puVar1 = *(undefined4 **)(uVar7 + 8);
      if (puVar1 != (undefined4 *)0x0) {
        LVar6 = InterlockedDecrement(puVar1 + 2);
        if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
      }
      FUN_00401f20(uVar7);
    }
  }
  if (param_5 == '\0') {
    local_19 = 0;
  }
  else {
    LFM_DoublyLinkedQueueInsert(param_4);
  }
LAB_00433343:
  *(undefined4 *)in_ECX[1] = 0;
  *(undefined4 *)in_ECX[2] = 0;
  puVar1 = (undefined4 *)in_ECX[3];
  *puVar1 = 0;
  *unaff_FS_OFFSET = local_c;
  return CONCAT31((int3)((uint)puVar1 >> 8),local_19);
}



undefined4 LockFreeMap_IterHelper1(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  int *piVar7;
  
  do {
    cVar2 = FUN_00432a60(param_1,param_2,param_3);
    if (cVar2 == '\0') {
      uVar6 = 0;
      goto LAB_00433483;
    }
    uVar3 = in_ECX[6] & 0xfffffffe;
    uVar4 = InterlockedCompareExchange
                      ((LONG *)((in_ECX[5] & 0xfffffffe) + 0xc),in_ECX[6] & 0xfffffffe | 1,uVar3);
  } while (uVar4 != uVar3);
  piVar7 = (int *)((in_ECX[5] & 0xfffffffe) + 8);
  puVar1 = (undefined4 *)*piVar7;
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 2);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *piVar7 = 0;
  }
  uVar4 = in_ECX[5];
  uVar3 = InterlockedCompareExchange((LONG *)in_ECX[4],uVar3,uVar4 & 0xfffffffe);
  if (uVar3 == (uVar4 & 0xfffffffe)) {
    LockFreeMap_DeferredListWalkHelper(in_ECX[5] & 0xfffffffe);
  }
  else {
    FUN_00432a60(param_1,param_2,param_3);
  }
  (**(code **)(*(int *)*in_ECX + 0x34))();
  uVar6 = 1;
LAB_00433483:
  *(undefined4 *)in_ECX[1] = 0;
  *(undefined4 *)in_ECX[2] = 0;
  *(undefined4 *)in_ECX[3] = 0;
  return uVar6;
}



undefined4 FUN_004334b0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  
  do {
    cVar1 = LockFreeMap_IteratorAdvance(param_1,param_2);
    if (cVar1 == '\0') {
      uVar4 = 0;
      goto LAB_00433564;
    }
    uVar2 = *(uint *)(in_ECX + 0x18) & 0xfffffffe;
    uVar3 = InterlockedCompareExchange
                      ((LONG *)((*(uint *)(in_ECX + 0x14) & 0xfffffffe) + 0xc),
                       *(uint *)(in_ECX + 0x18) & 0xfffffffe | 1,uVar2);
  } while (uVar3 != uVar2);
  uVar3 = *(uint *)(in_ECX + 0x14) & 0xfffffffe;
  uVar2 = InterlockedCompareExchange(*(LONG **)(in_ECX + 0x10),uVar2,uVar3);
  if (uVar2 == uVar3) {
    LockFreeMap_DeferredListWalkHelper(*(uint *)(in_ECX + 0x14) & 0xfffffffe);
  }
  else {
    LockFreeMap_IteratorAdvance(param_1,param_2);
  }
  uVar4 = 1;
LAB_00433564:
  **(undefined4 **)(in_ECX + 4) = 0;
  **(undefined4 **)(in_ECX + 8) = 0;
  **(undefined4 **)(in_ECX + 0xc) = 0;
  return uVar4;
}



/* WARNING: Removing unreachable block (ram,0x0043365f) */

void FUN_00433590(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  LONG LVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined8 uVar7;
  longlong lVar8;
  int *local_24;
  undefined4 *puStack_20;
  LARGE_INTEGER local_1c;
  LARGE_INTEGER LStack_14;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009abf90;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  QueryPerformanceCounter(&local_1c);
  uVar4 = DAT_00b048e4;
  if (*(int *)(in_ECX + 0x38) != 6) {
    uVar4 = DAT_00b048ec;
  }
  uVar7 = __allmul(uVar4,0,DAT_00b33a08,DAT_00b33a0c);
  lVar8 = __alldiv(uVar7,1000,0);
  local_1c = (LARGE_INTEGER)(lVar8 + CONCAT44(local_1c.s.HighPart,local_1c.s.LowPart));
  FUN_0043d3f0(uVar3);
  FUN_0043c030(&local_24);
  local_4 = 0;
  do {
    if (local_24 == (int *)0x0) {
LAB_0043371a:
      piVar1 = local_24;
      local_4 = 0xffffffff;
      if (local_24 != (int *)0x0) {
        LVar6 = InterlockedDecrement(local_24 + 2);
        if ((LVar6 == 0) && (piVar1 != (int *)0x0)) {
          (**(code **)*piVar1)(1);
        }
      }
      *unaff_FS_OFFSET = local_c;
      return;
    }
    (**(code **)(*local_24 + 0x14))();
    FUN_0060d0a0();
    QueryPerformanceCounter(&LStack_14);
    piVar1 = local_24;
    if ((longlong)local_1c <= CONCAT44(LStack_14.s.HighPart,LStack_14.s.LowPart)) {
      if (local_24 != (int *)0x0) {
        LVar6 = InterlockedDecrement(local_24 + 2);
        if ((LVar6 == 0) && (piVar1 != (int *)0x0)) {
          (**(code **)*piVar1)(1);
        }
        local_24 = (int *)0x0;
      }
      goto LAB_0043371a;
    }
    piVar5 = (int *)FUN_0043c030(&puStack_20);
    piVar1 = local_24;
    local_4._0_1_ = 1;
    if (local_24 != (int *)*piVar5) {
      if (local_24 != (int *)0x0) {
        LVar6 = InterlockedDecrement(local_24 + 2);
        if ((LVar6 == 0) && (piVar1 != (int *)0x0)) {
          (**(code **)*piVar1)(1);
        }
      }
      local_24 = (int *)*piVar5;
      if (local_24 != (int *)0x0) {
        InterlockedIncrement(local_24 + 2);
      }
    }
    puVar2 = puStack_20;
    local_4 = (uint)local_4._1_3_ << 8;
    if (puStack_20 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puStack_20 + 2);
      if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
  } while( true );
}



uint FUN_00433760(int param_1,undefined4 *param_2,undefined4 param_3,char param_4)

{
  uint in_EAX;
  LPVOID pvVar1;
  uint uVar2;
  int in_ECX;
  
  if ((*(byte *)(param_1 + 0x18) & 2) != 0) {
    return in_EAX & 0xffffff00;
  }
  while( true ) {
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      pvVar1 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
      if (pvVar1 == (LPVOID)0x0) {
        ThreadSpecificInterfaceManager_AddInterface(in_ECX);
      }
      uVar2 = LockFreeMap_TraversalHelper(*(undefined4 *)(param_1 + 8),param_1 + 0x10,param_3);
      *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
    }
    else {
      pvVar1 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
      if (pvVar1 == (LPVOID)0x0) {
        ThreadSpecificInterfaceManager_AddInterface(in_ECX);
      }
      uVar2 = FUN_00432ed0(*(undefined4 *)(param_1 + 8),param_1 + 0x10,param_3);
    }
    if ((char)uVar2 != '\0') {
      *param_2 = *(undefined4 *)(param_1 + 0x10);
      param_2[1] = *(undefined4 *)(param_1 + 0x14);
      return uVar2;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    if (*(uint *)(in_ECX + 8) <= *(uint *)(param_1 + 8)) {
      *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
      return uVar2;
    }
    if (param_4 == '\0') break;
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  }
  return uVar2;
}



undefined1 FUN_00433820(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  LPVOID pvVar4;
  LONG LVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009abfb8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  pvVar4 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
  if (pvVar4 == (LPVOID)0x0) {
    ThreadSpecificInterfaceManager_AddInterface(in_ECX);
  }
  uVar2 = FUN_004334b0(param_1,&param_2);
  puVar1 = param_2;
  local_4 = 0xffffffff;
  if (param_2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(param_2 + 2);
    if (LVar5 == 0) {
      (**(code **)*puVar1)(1,uVar3);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}



undefined1
FUN_004338c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  LPVOID pvVar4;
  LONG LVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009abfe8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  pvVar4 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
  if (pvVar4 == (LPVOID)0x0) {
    ThreadSpecificInterfaceManager_AddInterface(in_ECX);
  }
  uVar2 = FUN_004331f0(param_1,param_2,param_3,&param_4,param_5);
  puVar1 = param_4;
  local_4 = 0xffffffff;
  if (param_4 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(param_4 + 2);
    if (LVar5 == 0) {
      (**(code **)*puVar1)(1,uVar3);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}



void FUN_00433970(void)

{
  bool bVar1;
  undefined4 *puVar2;
  char cVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  undefined4 *local_38;
  undefined1 local_34 [8];
  undefined **local_2c [2];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  byte local_14;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ac050;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  do {
    bVar1 = false;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_2c[0] = &PTR_FUN_00a364f8;
    local_4 = 0;
    do {
      local_38 = (undefined4 *)0x0;
      local_4 = CONCAT31(local_4._1_3_,1);
      cVar3 = FUN_00433760(local_2c,local_34,&local_38,1);
      puVar2 = local_38;
      if (cVar3 != '\0') {
        IOManager_TaskStateTransition(local_38);
        bVar1 = true;
      }
      local_4 = local_4 & 0xffffff00;
      if (puVar2 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(puVar2 + 2);
        if (LVar4 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
    } while ((local_14 & 2) == 0);
  } while (bVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00433a40(int param_1,int *param_2)

{
  DWORD DVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  DWORD DVar7;
  LONG LVar8;
  int *unaff_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_30;
  undefined **local_2c [2];
  int local_24;
  undefined4 local_1c;
  undefined4 local_18;
  byte local_14;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar2 = (int)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ac020;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((int)param_2 < param_1) {
    cVar5 = FUN_004322b0(uVar6);
    if ((cVar5 != '\0') &&
       (DVar1 = *(DWORD *)(*(int *)(g_ModelLoader_singleton + 0x18) + 8),
       DVar7 = GetCurrentThreadId(), DVar1 != DVar7)) {
      FUN_00431f50();
    }
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_2c[0] = &PTR_FUN_00a364f8;
    local_4 = 0;
    FUN_0060cf60(0,0);
    local_14 = local_14 & 0xfc;
    local_24 = iVar2 * 3 + 3;
    local_1c = 0;
    local_18 = 0;
    do {
      local_34 = 0;
      local_30 = 0;
      param_2 = (int *)0x0;
      local_4._0_1_ = 1;
      cVar5 = FUN_00433760(local_2c,&local_34,&param_2,1);
      piVar3 = param_2;
      if (cVar5 != '\0') {
        uVar6 = __allshr();
        piVar4 = param_2;
        if (param_1 < (int)(uVar6 & 0xff)) {
          local_4 = (uint)local_4._1_3_ << 8;
          if ((param_2 != (int *)0x0) && (LVar8 = InterlockedDecrement(param_2 + 2), LVar8 == 0)) {
            (**(code **)*piVar4)(1);
          }
          break;
        }
        (**(code **)(*piVar3 + 0x1c))(iVar2);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if ((piVar3 != (int *)0x0) && (LVar8 = InterlockedDecrement(piVar3 + 2), LVar8 == 0)) {
        (**(code **)*piVar3)(1);
      }
    } while ((local_14 & 2) == 0);
    cVar5 = FUN_00432350();
    if (cVar5 != '\0') {
      FUN_00431fa0();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void LockFreeMap_IterHelper2(void)

{
  bool bVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  DWORD DVar5;
  int iVar6;
  LONG LVar7;
  int in_ECX;
  code *pcVar8;
  int *unaff_FS_OFFSET;
  undefined4 *local_38;
  undefined4 *local_34 [2];
  undefined **local_2c [2];
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  byte local_14;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ac050;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  do {
    pcVar8 = WaitForSingleObject_exref;
    DVar5 = WaitForSingleObject(*(HANDLE *)(in_ECX + 0x14),0xffffffff);
    if (DVar5 != 0x102) {
      InterlockedDecrement((LONG *)(in_ECX + 0xc));
    }
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_2c[0] = &PTR_FUN_00a364f8;
    local_4 = 0;
    bVar1 = false;
    do {
      iVar6 = (*pcVar8)(*(undefined4 *)(in_ECX + 0x20),0,uVar4);
      if (iVar6 == 0x102) {
        iVar6 = (*pcVar8)(*(undefined4 *)(in_ECX + 0x20),0xffffffff);
        if (iVar6 != 0x102) {
          InterlockedDecrement((LONG *)(in_ECX + 0x18));
        }
        (*(code *)*local_34[0])(local_24,uStack_20);
        local_14 = local_14 & 0xfc;
        local_1c = 0;
        local_18 = 0;
        local_24 = 0;
      }
      local_38 = (undefined4 *)0x0;
      local_4 = CONCAT31(local_4._1_3_,1);
      cVar3 = FUN_00433760(local_2c,local_34,&local_38,!bVar1);
      puVar2 = local_38;
      if (cVar3 == '\0') {
        if ((local_14 & 2) == 0) {
          (*(code *)*local_2c[0])(local_1c,local_18);
          local_14 = local_14 & 0xfc;
          local_1c = 0;
          local_18 = 0;
          local_24 = 0;
          bVar1 = false;
        }
      }
      else if ((local_38[3] == 1) &&
              (LVar7 = InterlockedCompareExchange(local_38 + 3,3,1), LVar7 == 1)) {
        bVar1 = true;
        (**(code **)(**(int **)(in_ECX + 0x24) + 0x40))(puVar2);
        (**(code **)(**(int **)(in_ECX + 0x24) + 0x44))(puVar2);
      }
      InterlockedIncrement((LONG *)(in_ECX + 0x18));
      ReleaseSemaphore(*(HANDLE *)(in_ECX + 0x20),1,(LPLONG)0x0);
      puVar2 = local_38;
      local_4 = local_4 & 0xffffff00;
      if ((local_38 != (undefined4 *)0x0) &&
         (LVar7 = InterlockedDecrement(local_38 + 2), LVar7 == 0)) {
        (**(code **)*puVar2)(1);
      }
      pcVar8 = WaitForSingleObject_exref;
    } while ((local_14 & 2) == 0);
  } while( true );
}



void FUN_00433d70(char param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  LONG LVar5;
  int iVar6;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  uint local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c392b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)in_ECX[5];
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
    FUN_00433110(uVar4);
    FUN_00401f20(puVar1);
    in_ECX[5] = 0;
    in_ECX[6] = 0;
    local_14 = 0;
    if (in_ECX[2] != 0) {
      do {
        uVar4 = *(uint *)(in_ECX[3] + local_14 * 4);
        *(undefined4 *)(in_ECX[3] + local_14 * 4) = 0;
        while (puVar1 = (undefined4 *)(uVar4 & 0xfffffffe), puVar1 != (undefined4 *)0x0) {
          uVar4 = puVar1[3];
          puVar1[3] = 0;
          puVar3 = (undefined4 *)puVar1[2];
          if (puVar3 != (undefined4 *)0x0) {
            LVar5 = InterlockedDecrement(puVar3 + 2);
            if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
              (**(code **)*puVar3)(1);
            }
            puVar1[2] = 0;
          }
          (**(code **)(*in_ECX + 0x20))(*puVar1,puVar1[1]);
          puVar3 = (undefined4 *)puVar1[2];
          if (((puVar3 != (undefined4 *)0x0) &&
              (LVar5 = InterlockedDecrement(puVar3 + 2), LVar5 == 0)) &&
             (puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(1);
          }
          FUN_00401f20(puVar1);
        }
        local_14 = local_14 + 1;
      } while (local_14 < (uint)in_ECX[2]);
    }
    if (param_1 == '\0') {
      iVar6 = FUN_00401f00(0x10);
      uStack_4 = 0;
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = ThreadSpecificInterfaceManager_ctor(uVar2);
      }
      in_ECX[5] = iVar6;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00433ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  
  puVar1 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)ThreadSpecificInterfaceManager_AddInterface(in_ECX);
  }
  uVar3 = param_1;
  uVar2 = (**(code **)(*(int *)*puVar1 + 0x1c))(param_1,param_2,param_1,param_2,param_3);
  FUN_00433180(uVar2,param_1,param_2,uVar3);
  return;
}



undefined1
FUN_00433f20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  LONG LVar5;
  int in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c3958;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  puVar3 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)ThreadSpecificInterfaceManager_AddInterface(in_ECX);
  }
  puVar6 = param_1;
  puVar7 = param_1;
  uVar8 = param_2;
  uVar4 = (**(code **)(*(int *)*puVar3 + 0x1c))
                    (param_1,param_2,param_1,param_2,&param_3,param_4,uVar2);
  uVar1 = FUN_004331f0(uVar4,puVar6,param_2,puVar7,uVar8);
  local_c = -1;
  if (param_1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(param_1 + 2);
    if (LVar5 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  *unaff_FS_OFFSET = unaff_ESI;
  return uVar1;
}



void LockFreeMap_IterHelper3(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  
  puVar1 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)ThreadSpecificInterfaceManager_AddInterface(in_ECX);
  }
  uVar2 = (**(code **)(*(int *)*puVar1 + 0x1c))(param_1,param_2,param_1,param_2);
  LockFreeMap_IterHelper1(uVar2,param_1,param_2);
  return;
}



void FUN_00434020(int param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *in_ECX;
  
  iVar5 = (**(code **)(*in_ECX + 0x38))();
  if (((iVar5 != 0) || (iVar5 = (**(code **)(*(int *)in_ECX[0xd] + 0xc))(), iVar5 != 0)) ||
     (iVar5 = *(int *)(g_ModelLoader_singleton + 0x18),
     iVar6 = (**(code **)(**(int **)(iVar5 + 0x28) + 0xc))(), iVar6 + *(int *)(iVar5 + 0x24) != 0))
  {
    in_ECX[0xe] = param_1;
    FUN_00433a40(param_1,0);
    uVar1 = param_1 * 3 + 2;
    iVar5 = 0;
    uVar7 = 0;
    do {
      iVar6 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + *(int *)(in_ECX[0xb] + iVar6);
    } while (uVar7 <= uVar1);
    iVar8 = (**(code **)(*(int *)in_ECX[0xd] + 0xc))();
    iVar6 = *(int *)(g_ModelLoader_singleton + 0x18);
    iVar9 = (**(code **)(**(int **)(iVar6 + 0x28) + 0xc))();
    iVar8 = *(int *)(iVar6 + 0x24) + iVar9 + iVar5 + iVar8;
    if (iVar8 != 0) {
      fVar2 = (float)iVar8;
      iVar5 = iVar8;
      if (iVar8 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      do {
        fVar3 = (float)(iVar8 - iVar5);
        if (iVar8 - iVar5 < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        fVar3 = (fVar3 / fVar2) * 100.0;
        cVar4 = FUN_0045a500();
        if ((cVar4 == '\0') || ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xb & 1) == 0)) {
          FUN_0057b950(2,fVar3);
        }
        else {
          FUN_004523a0(2,fVar3);
        }
        uVar7 = (**(code **)(*in_ECX + 0x38))();
        uVar10 = (**(code **)(*(int *)in_ECX[0xd] + 0xc))();
        if (uVar10 < uVar7) {
          Sleep(0x32);
        }
        FUN_00433590();
        iVar6 = 0;
        uVar7 = 0;
        do {
          iVar5 = uVar7 * 4;
          uVar7 = uVar7 + 1;
          iVar6 = iVar6 + *(int *)(in_ECX[0xb] + iVar5);
        } while (uVar7 <= uVar1);
        iVar5 = (**(code **)(*(int *)in_ECX[0xd] + 0xc))();
        iVar9 = *(int *)(g_ModelLoader_singleton + 0x18);
        iVar11 = (**(code **)(**(int **)(iVar9 + 0x28) + 0xc))();
        iVar5 = *(int *)(iVar9 + 0x24) + iVar11 + iVar6 + iVar5;
      } while (iVar5 != 0);
    }
  }
  in_ECX[0xe] = 6;
  return;
}



void FUN_004341d0(void)

{
  FUN_00433970();
  FUN_0043d510(0);
  return;
}



void FUN_00434230(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  void *_Dst;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ac083;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00432520(param_1 + param_2,param_3,0xc);
  *in_ECX = &PTR_LAB_00a36554;
  in_ECX[7] = 0;
  local_4 = 0;
  in_ECX[8] = 0;
  in_ECX[9] = param_2;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_3 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_3 * 4),uVar1);
  in_ECX[0xb] = _Dst;
  _memset(_Dst,0,param_3 * 4);
  uVar2 = FUN_00401f00(-(uint)((int)((ulonglong)(uint)in_ECX[9] * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)(uint)in_ECX[9] * 4));
  uVar1 = 0;
  in_ECX[10] = uVar2;
  if (in_ECX[9] != 0) {
    do {
      puVar3 = (undefined4 *)FUN_00401f00(0x28);
      local_4._0_1_ = 1;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        FUN_00430e00(uVar1 + 2,"BSTaskManagerThread");
        *puVar3 = &PTR_BSTaskManagerThread_dtor_00a36460;
        puVar3[9] = in_ECX;
      }
      *(undefined4 **)(in_ECX[10] + uVar1 * 4) = puVar3;
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00430df0();
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)in_ECX[9]);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void BSTask_RunDispatcher(int *param_1)

{
  (**(code **)(*param_1 + 4))();
  return;
}



void FUN_00434360(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  
  pcVar1 = *(code **)(*param_1 + 8);
  param_1[3] = 4;
  (*pcVar1)();
  param_1[3] = 5;
  cVar2 = (**(code **)(*in_ECX + 0x10))(param_1[4],param_1[5]);
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*in_ECX + 0x1c))(param_1[4],param_1[5]);
                    /* WARNING: Could not recover jumptable at 0x004343b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    InterlockedDecrement((LONG *)(in_ECX[0xb] + iVar3 * 4));
    return;
  }
  return;
}



void FUN_004343c0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_ECX;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ac0a8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a36554;
  local_4 = 0;
  if (in_ECX[9] != 0) {
    uVar3 = 0;
    do {
      puVar1 = *(undefined4 **)(in_ECX[10] + uVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1,uVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)in_ECX[9]);
  }
  FUN_00401f20(in_ECX[10]);
  FUN_00401f20(in_ECX[0xb]);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_LAB_00a36514;
  FUN_00433d70(1);
  FUN_00401f20(in_ECX[3]);
  FUN_00401f20(in_ECX[1]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void IOManager_ctor(void)

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
  puStack_8 = &LAB_009ac0e3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00434230(2,1,0x12);
  local_4 = 0;
  *in_ECX = &PTR_LAB_00a365ac;
  in_ECX[0xe] = 6;
  iVar2 = FUN_00401f00(0x1c,uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = LockFreeQueue_IOTask_ctor(3,8);
  }
  in_ECX[0xd] = uVar3;
  QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_00b33a08);
  in_ECX[0xc] = *(undefined4 *)(*(int *)in_ECX[10] + 8);
  *unaff_FS_OFFSET = local_c;
  return;
}



void IOManager_dtor(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ac108;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a365ac;
  puVar1 = (undefined4 *)in_ECX[0xd];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_LAB_00a36500;
    FUN_0043d510(1);
    FUN_00401f20(puVar1[4]);
    FUN_00401f20(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_004343c0(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004345e0(byte param_1)

{
  IOManager_dtor();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00434600(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)FUN_00401f00(pcVar2 + (1 - (int)(param_1 + 1)));
    *(char **)(in_ECX + 0x20) = pcVar2;
    do {
      cVar1 = *param_1;
      *pcVar2 = cVar1;
      param_1 = param_1 + 1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  return;
}



undefined4 FUN_00434650(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    uVar1 = FUN_0042ebc0(param_1,*(int *)(in_ECX + 0x24),0xffffffff,0);
    return uVar1;
  }
  if (*(int *)(in_ECX + 0x20) != 0) {
    uVar1 = FUN_0042e8e0(*(int *)(in_ECX + 0x20),0xffffffff,param_2);
    return uVar1;
  }
  return 0;
}



void FUN_004346a0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = FUN_0055f800(*(undefined4 *)(in_ECX + 0x38),*(undefined4 *)(in_ECX + 0x3c));
  FUN_0055df70(*(undefined4 *)(in_ECX + 0x38),uVar1);
  return;
}



void FUN_004346d0(void)

{
  (**(code **)(*g_IOManager_singleton + 0x3c))();
  return;
}



void FUN_00434710(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (((uint)((int)pcVar2 - (int)(param_1 + 1)) < 4) ||
     (iVar3 = __stricmp(param_1 + (((int)pcVar2 - (int)(param_1 + 1)) - 3),"spt"), iVar3 != 0)) {
    iVar3 = __strnicmp(param_1,"Meshes\\",7);
    if (iVar3 == 0) {
      iVar3 = (int)param_2 - (int)param_1;
      do {
        cVar1 = *param_1;
        param_1[iVar3] = cVar1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
      return;
    }
    builtin_strncpy(param_2,"Meshes\\",8);
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar4 = (int)pcVar2 - (int)param_1;
    param_2 = param_2 + -1;
    do {
      pcVar2 = param_2 + 1;
      param_2 = param_2 + 1;
    } while (*pcVar2 != '\0');
  }
  else {
    builtin_strncpy(param_2,"Trees",6);
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar4 = (int)pcVar2 - (int)param_1;
    param_2 = param_2 + -1;
    do {
      pcVar2 = param_2 + 1;
      param_2 = param_2 + 1;
    } while (*pcVar2 != '\0');
  }
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



void FUN_00434800(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  (**(code **)(*(int *)*in_ECX + 0xc))(param_1,param_2,0);
  return;
}



uint ModelLoader_IsModelLoaded(uint param_1)

{
  char cVar1;
  undefined4 *in_ECX;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = (**(code **)(*(int *)*in_ECX + 4))(param_1,&local_4);
  return -(uint)(cVar1 != '\0') & param_1;
}



void FUN_00434850(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00431970(param_1,param_2,1,param_3);
  return;
}



uint FUN_00434870(uint param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = (**(code **)(**(int **)(in_ECX + 4) + 4))(param_1,&local_4);
  return -(uint)(cVar1 != '\0') & param_1;
}



void LFM_DoublyLinkedQueueInsert(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != (undefined4 *)*param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 2);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *param_1;
    *in_ECX = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 8));
    }
  }
  return;
}



char * FUN_00434900(char *param_1,rsize_t param_2,char *param_3)

{
  _strcpy_s(param_1,param_2,param_3);
  return param_1;
}



void FUN_00434920(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  return;
}



void FUN_00434930(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *_Dst;
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 8));
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



void FUN_00434980(uint param_1,char param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x24) = 0;
  if (param_2 != '\0') {
    *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | param_1;
    return;
  }
  *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & ~param_1;
  return;
}



void FUN_004349b0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ac1cb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_00977c50(3,uVar2);
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[2] = 0;
  }
  FUN_00977c50(2,uVar2);
  FUN_00401f20(*in_ECX);
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00434a70(char *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ac1fb;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[2] = 0;
  local_4 = 0;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = (char *)FUN_00401f00(pcVar4 + (1 - (int)(param_1 + 1)),uVar3);
  *in_ECX = pcVar4;
  do {
    cVar1 = *param_1;
    *pcVar4 = cVar1;
    param_1 = param_1 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  puVar2 = (undefined4 *)in_ECX[2];
  if (puVar2 != param_2) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 1);
      if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    in_ECX[2] = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  in_ECX[1] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00434b40(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = (int *)(in_ECX + 8);
  if ((int *)*piVar1 == (int *)0x0) {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  cVar2 = (**(code **)(*(int *)*piVar1 + 0x98))(uVar3);
  if (cVar2 != '\0') {
    iVar4 = *piVar1;
    *unaff_FS_OFFSET = local_c;
    return iVar4;
  }
  iVar4 = FUN_00401f00(0xf0);
  uStack_4 = 0;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_004a12e0(*piVar1);
  }
  uStack_4 = 0xffffffff;
  FUN_0075fa90(iVar4);
  *unaff_FS_OFFSET = local_c;
  return iVar4;
}



void FUN_00434c00(short param_1)

{
  int in_ECX;
  
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      InterlockedIncrement((LONG *)(in_ECX + 4));
    } while (param_1 != 0);
    return;
  }
  if ((param_1 < 0) && (param_1 = -param_1, param_1 != 0)) {
    do {
      param_1 = param_1 + -1;
      InterlockedDecrement((LONG *)(in_ECX + 4));
    } while (param_1 != 0);
  }
  return;
}



void FUN_00434c60(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(in_ECX + 0x1c) != 0) {
    uVar2 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1c) + 10);
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0x1c) + 4) + uVar3 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x1c))(param_1);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
  }
  IOManager_sub_432820(in_ECX,param_1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00434cb0(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 *puVar2;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_118;
  puVar2 = *(undefined1 **)(in_ECX + 0x20);
  if (puVar2 != (undefined1 *)0x0) {
    if (param_2 != '\0') {
      FUN_00434710(puVar2,local_108);
      puVar2 = local_108;
    }
    FUN_006fa1b0(puVar2,local_118,local_110);
    uVar1 = FUN_0042db10(param_1,local_118,local_110,puVar2);
    *(undefined4 *)(in_ECX + 0x24) = uVar1;
  }
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00434d40(char *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int in_ECX;
  uint uVar6;
  char *pcVar7;
  uint local_32d0;
  char local_32cc [13000];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_32d0;
  iVar3 = *(int *)(in_ECX + 0x24);
  if (iVar3 != 0) {
    if (*(int *)(in_ECX + 0x20) != 0) {
      _sprintf(param_1,"Queued %s %s with file entry offset %i and size %i",param_2,
               *(int *)(in_ECX + 0x20),*(uint *)(iVar3 + 0xc) & 0x7fffffff,
               *(uint *)(iVar3 + 8) & 0x3fffffff);
      goto LAB_00434ddb;
    }
    if (iVar3 != 0) {
      _sprintf(param_1,"Queued %s with file entry offset %i and size %i",param_2,
               *(uint *)(iVar3 + 0xc) & 0x7fffffff,*(uint *)(iVar3 + 8) & 0x3fffffff);
      goto LAB_00434ddb;
    }
  }
  _sprintf(param_1,"Queued %s %s",param_2,*(undefined4 *)(in_ECX + 0x20));
LAB_00434ddb:
  iVar3 = *(int *)(in_ECX + 0x1c);
  if ((iVar3 != 0) && (local_32d0 = 0, *(short *)(iVar3 + 10) != 0)) {
    do {
      uVar6 = local_32d0;
      piVar1 = *(int **)(*(int *)(iVar3 + 4) + local_32d0 * 4);
      if ((piVar1 != (int *)0x0) &&
         (cVar2 = (**(code **)(*piVar1 + 0x10))(local_32cc), cVar2 != '\0')) {
        pcVar4 = param_1 + -1;
        do {
          pcVar7 = pcVar4;
          pcVar4 = pcVar7 + 1;
        } while (pcVar7[1] != '\0');
        builtin_strncpy(pcVar7 + 1,"\n * ",5);
        pcVar4 = local_32cc;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        uVar5 = (int)pcVar4 - (int)local_32cc;
        pcVar4 = param_1 + -1;
        do {
          pcVar7 = pcVar4 + 1;
          pcVar4 = pcVar4 + 1;
        } while (*pcVar7 != '\0');
        pcVar7 = local_32cc;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar6 = local_32d0, uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar4 = pcVar4 + 1;
        }
      }
      iVar3 = *(int *)(in_ECX + 0x1c);
      local_32d0 = uVar6 + 1;
    } while (local_32d0 < *(ushort *)(iVar3 + 10));
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



void FUN_00434ea0(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) goto LAB_00434edb;
    uVar1 = (**(code **)(*DAT_00b35300 + 4))(*(int *)(in_ECX + 0x20),0);
  }
  else {
    uVar1 = FUN_004a1ed0(*(int *)(in_ECX + 0x24),0);
  }
  FUN_0075fa90(uVar1);
LAB_00434edb:
  if (*(int *)(in_ECX + 0x28) == 0) {
    if (*(int *)(in_ECX + 0x20) != 0) {
      uVar1 = FUN_00701e00(*(int *)(in_ECX + 0x20),&DAT_00b256d0,1);
      FUN_0075fa90(uVar1);
      return;
    }
    if (*(int *)(in_ECX + 0x24) != 0) {
      iVar2 = FUN_0042ebc0(1,*(int *)(in_ECX + 0x24),0xffffffff,0);
      if (iVar2 != 0) {
        uVar1 = FUN_00701f00(iVar2,&DAT_00b256d0,1);
        FUN_0075fa90(uVar1);
        return;
      }
    }
    if (*(int *)(in_ECX + 0x24) != 0) {
      FUN_004a7a60("Could not get file for texture with file entry offset %i and size %i.",
                   *(uint *)(*(int *)(in_ECX + 0x24) + 0xc) & 0x7fffffff,
                   *(uint *)(*(int *)(in_ECX + 0x24) + 8) & 0x3fffffff);
      return;
    }
    if (*(int *)(in_ECX + 0x20) != 0) {
      FUN_004a7a60("Could not get file for texture %s.",*(int *)(in_ECX + 0x20));
    }
  }
  return;
}



void FUN_00434f90(void)

{
  int *in_ECX;
  
  if (in_ECX[9] == 0) {
    if (in_ECX[8] != 0) {
      (**(code **)(*DAT_00b35300 + 8))(in_ECX[8],in_ECX[10]);
    }
  }
  else {
    FUN_004a1f90(in_ECX[9],in_ECX[10]);
  }
                    /* WARNING: Could not recover jumptable at 0x00434fcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x28))();
  return;
}



void FUN_00435060(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  undefined4 local_6c [9];
  undefined1 auStack_48 [36];
  undefined1 auStack_24 [36];
  
  FUN_00434b40();
  puVar2 = (undefined4 *)FUN_00700900();
  FUN_00483590(puVar2);
  puVar4 = *(undefined4 **)(in_ECX + 0x3c);
  if (puVar4 != puVar2) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar4 + 1);
      if ((LVar3 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x3c) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  iVar5 = *(int *)(in_ECX + 0x3c);
  *(float *)(iVar5 + 0x60) = ABS((float)param_2[6]);
  *(undefined4 *)(iVar5 + 0x54) = *param_2;
  *(undefined4 *)(iVar5 + 0x58) = param_2[1];
  *(undefined4 *)(iVar5 + 0x5c) = param_2[2];
  uVar1 = param_2[3];
  puVar4 = &DAT_00b26dc4;
  puVar2 = local_6c;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_0070fd30(uVar1);
  puVar4 = (undefined4 *)FUN_007100a0(auStack_24,auStack_48);
  uVar1 = param_2[4];
  puVar2 = local_6c;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_0070fd80(uVar1);
  puVar4 = (undefined4 *)FUN_007100a0(auStack_24,auStack_48);
  uVar1 = param_2[5];
  puVar2 = local_6c;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_0070fdd0(uVar1);
  puVar4 = (undefined4 *)FUN_007100a0(auStack_24,auStack_48);
  puVar2 = local_6c;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar4 = local_6c;
  puVar2 = (undefined4 *)(*(int *)(in_ECX + 0x3c) + 0x30);
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_007b8940(*(undefined4 *)(in_ECX + 0x3c),1,1,0);
  FUN_007d93e0(*(undefined4 *)(in_ECX + 0x3c),0x2000,1);
  InterlockedIncrement((LONG *)(param_1 + 4));
  return;
}



void FUN_004351e0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x3c) != 0) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x38) + 0x1c) + 0x84))(*(int *)(in_ECX + 0x3c),1);
    FUN_00707370(0,0);
    FUN_00707610();
    return;
  }
  return;
}



void FUN_004352b0(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x28) != 0) && (*(int *)(in_ECX + 0xc) != 6)) {
    FUN_00477c40(*(int *)(in_ECX + 0x28));
  }
  (**(code **)(**(int **)(g_ModelLoader_singleton + 0xc) + 0x10))(*(undefined4 *)(in_ECX + 0x34));
  return;
}



/* WARNING: Removing unreachable block (ram,0x0043536d) */

void QueuedHead_Run(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  undefined4 *apuStack_8 [2];
  
  FUN_00401020("QueuedHead::Run()");
  apuStack_8[0] = (undefined4 *)0x0;
  FaceGen_GatingFunction(&stack0xfffffff4,apuStack_8);
  puVar1 = *(undefined4 **)(in_ECX + 0x24);
  if (puVar1 != (undefined4 *)0x0) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar1 + 1), LVar3 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x24) = 0;
  }
  puVar2 = apuStack_8[0];
  puVar1 = *(undefined4 **)(in_ECX + 0x28);
  if (puVar1 != apuStack_8[0]) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar1 + 1), LVar3 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 **)(in_ECX + 0x28) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  FUN_00401040();
  return;
}



void FUN_004353d0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x170))();
  FUN_00528a10(param_1,param_2,*(undefined4 *)(in_ECX + 0x24),*(undefined4 *)(in_ECX + 0x28));
  iVar2 = (**(code **)(*piVar1 + 0x128))(0x45);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*piVar1 + 0x128))(0x45);
    FUN_00529530((float)iVar2);
    if ((int *)param_1[0x16] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x16] + 0x31c))(1);
    }
  }
  if (param_1 != DAT_00b333c4) {
    FUN_00481410(*(undefined4 *)(in_ECX + 0x24),param_1[3]);
    if (*(int *)(in_ECX + 0x28) != 0) {
      FUN_00481410(*(int *)(in_ECX + 0x28),param_1[3]);
    }
  }
  if (*(int **)(in_ECX + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x50))();
  }
  if (*(int *)(in_ECX + 0x28) != 0) {
    *(int **)(*(int *)(in_ECX + 0x28) + 0x114) = param_1;
  }
  if (*(int *)(in_ECX + 0x24) != 0) {
    *(int **)(*(int *)(in_ECX + 0x24) + 0x114) = param_1;
  }
  return;
}



void FUN_004354a0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  if (in_ECX[8] != 0) {
    cVar1 = FUN_004d6fd0();
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*(int *)in_ECX[8] + 0x154))();
      if (iVar2 == 0) {
        cVar1 = FUN_0057bac0();
        if (cVar1 == '\0') {
          (**(code **)(*in_ECX + 0x30))();
        }
      }
    }
  }
  (**(code **)(*in_ECX + 0x2c))();
  UNRECOVERED_JUMPTABLE = *(code **)(*in_ECX + 0x28);
  in_ECX[3] = 5;
                    /* WARNING: Could not recover jumptable at 0x004354ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



undefined1 FUN_004354f0(undefined4 param_1)

{
  undefined1 uVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int unaff_EBX;
  undefined4 *unaff_ESI;
  int *unaff_FS_OFFSET;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ac618;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = 0;
  local_4 = 0;
  uVar1 = (**(code **)(**(int **)(in_ECX + 8) + 4))(param_1,&local_10,uVar2);
  local_c = -1;
  if (unaff_ESI != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(unaff_ESI + 2);
    if ((LVar3 == 0) && (unaff_ESI != (undefined4 *)0x0)) {
      (**(code **)*unaff_ESI)(1);
    }
  }
  *unaff_FS_OFFSET = unaff_EBX;
  return uVar1;
}



int FUN_00435580(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b03248,&PTR_PTR_00b03304,0);
  if ((iVar1 == 0) &&
     (iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0), iVar2 != 0)) {
    uVar3 = 0;
    if ((param_2 != 0) && ((iVar1 = FUN_004db6b0(), iVar1 != 0 && (*(char *)(iVar1 + 4) == '#')))) {
      uVar3 = FUN_00519d20();
    }
    iVar1 = FUN_00469240(uVar3);
    return iVar1;
  }
  return iVar1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00435600(int param_1,int *param_2,int *param_3,char param_4)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_400;
  int local_3fc;
  int local_3f8;
  int *local_3f4;
  int *local_3f0;
  char acStack_3ec [1000];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_400;
  iVar3 = *param_3;
  local_3f8 = *param_2;
  local_3f4 = param_2;
  local_3f0 = param_3;
  local_3fc = iVar3;
  uVar2 = (**(code **)(*g_IOManager_singleton + 0x38))();
  _sprintf(acStack_3ec,"Queued IO Task Count: %d",uVar2);
  fVar1 = (float)local_3fc;
  local_3fc = 0x500 - DAT_00b02e24;
  FUN_0057b8e0(acStack_3ec,(float)local_3fc,fVar1,3,0xffffffff);
  iVar3 = iVar3 + param_1;
  local_3fc = iVar3;
  uVar2 = (**(code **)(**(int **)(local_400 + 8) + 0x38))();
  _sprintf(acStack_3ec,"Queued Reference Count: %d",uVar2);
  local_400 = 0x500 - DAT_00b02e24;
  FUN_0057b8e0(acStack_3ec,(float)local_400,(float)local_3fc,3,0xffffffff);
  iVar3 = iVar3 + param_1;
  local_3fc = iVar3;
  _sprintf(acStack_3ec,"Total BSTask Count: %d",DAT_00b33a20);
  local_400 = 0x500 - DAT_00b02e24;
  FUN_0057b8e0(acStack_3ec,(float)local_400,(float)local_3fc,3,0xffffffff);
  iVar3 = iVar3 + param_1;
  if (param_4 == '\0') {
    *param_2 = local_3f8;
    *param_3 = iVar3;
  }
  else {
    iVar4 = param_1 * 5 + local_3f8;
    iVar6 = 0;
    local_3f8 = iVar4;
    local_400 = FUN_009828c0();
    uVar5 = 0;
    do {
      _sprintf(acStack_3ec,"Priority %i - Textures: %3i Meshes: %3i Misc: %3i",iVar6,
               *(undefined4 *)(g_IOManager_singleton[0xb] + uVar5),
               *(undefined4 *)(g_IOManager_singleton[0xb] + 4 + uVar5),
               *(undefined4 *)(g_IOManager_singleton[0xb] + 8 + uVar5));
      FUN_0057b8e0(acStack_3ec,(float)DAT_00b02e24,(float)local_3f8,1,0xffffffff);
      iVar4 = iVar4 - local_400;
      uVar5 = uVar5 + 0xc;
      iVar6 = iVar6 + 1;
      local_3f8 = iVar4;
    } while (uVar5 < 0x48);
    *local_3f4 = iVar4;
    *local_3f0 = iVar3;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_00435830(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_10c;
  if ((DAT_00b362c0 == 0) || (iVar2 = FUN_00521190(param_1), iVar2 == 0)) {
    builtin_strncpy(local_108,"Data\\Mes",8);
    builtin_strncpy(local_108 + 8,"hes\\",5);
    pcVar6 = param_1;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar5 = (char *)((int)&local_10c + 3);
    do {
      pcVar10 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar10 != '\0');
    pcVar10 = param_1;
    for (uVar8 = (uint)((int)pcVar6 - (int)param_1) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar8 = (int)pcVar6 - (int)param_1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar5 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcVar6 = _strrchr(local_108,0x5c);
    piVar4 = (int *)0x0;
    if (pcVar6 != (char *)0x0) {
      builtin_strncpy(pcVar6,"\\*.KF",6);
      piVar4 = (int *)FUN_00431970(local_108,param_1,1,0);
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_00521190(param_1);
    local_10c = puVar3;
    piVar4 = (int *)FUN_00401f00(8);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *piVar4 = 0;
      piVar4[1] = 0;
    }
    while (puVar3 != (undefined4 *)0x0) {
      pcVar6 = (char *)*puVar3;
      pcVar5 = pcVar6;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar2 = FUN_00401f00(pcVar5 + (1 - (int)(pcVar6 + 1)));
      iVar9 = iVar2 - (int)pcVar6;
      do {
        cVar1 = *pcVar6;
        pcVar6[iVar9] = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (iVar2 != 0) {
        if (*piVar4 != 0) {
          piVar7 = (int *)FUN_00401f00(8);
          if (piVar7 == (int *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            *piVar7 = *piVar4;
            piVar7[1] = 0;
          }
          piVar7[1] = piVar4[1];
          piVar4[1] = (int)piVar7;
        }
        *piVar4 = iVar2;
      }
      puVar3 = (undefined4 *)local_10c[1];
      local_10c = puVar3;
    }
  }
  return piVar4;
}



uint FUN_004359d0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int in_ECX;
  uint unaff_ESI;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)(param_1 + 8);
    param_1 = 0;
    cVar2 = (**(code **)(**(int **)(in_ECX + 4) + 4))(*puVar1,&param_1);
    return -(uint)(cVar2 != '\0') & unaff_ESI;
  }
  return 0;
}



void FUN_00435a10(int param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  if ((*(short *)(param_1 + 4) == 0) &&
     (((DAT_00b33b00 == 0 || ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xb & 1) == 0)) ||
      ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xe & 1) != 0)))) {
    (**(code **)(*(int *)*in_ECX + 0x10))(param_2);
    FUN_004349b0();
    FUN_00401f20(param_1);
  }
  return;
}



void FUN_00435ab0(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (iVar1 != param_1) {
    if (iVar1 != 0) {
      InterlockedDecrement((LONG *)(iVar1 + 4));
    }
    *in_ECX = param_1;
    if (param_1 != 0) {
      InterlockedIncrement((LONG *)(param_1 + 4));
    }
  }
  return;
}



void FUN_00435b10(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (iVar1 != param_1) {
    if (iVar1 != 0) {
      InterlockedDecrement((LONG *)(iVar1 + 0xc));
    }
    *in_ECX = param_1;
    if (param_1 != 0) {
      InterlockedIncrement((LONG *)(param_1 + 0xc));
    }
  }
  return;
}



void FUN_00435b50(ushort param_1,undefined2 param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c620b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a36904;
  *(ushort *)(in_ECX + 2) = param_1;
  *(undefined2 *)((int)in_ECX + 0xe) = param_2;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  if (param_1 == 0) {
    in_ECX[1] = 0;
  }
  else {
    uVar3 = (uint)param_1;
    puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3 * 4) | uVar3 * 4 + 4,uVar1);
    local_4 = 0;
    if (puVar2 == (uint *)0x0) {
      in_ECX[1] = 0;
    }
    else {
      *puVar2 = uVar3;
      _eh_vector_constructor_iterator_(puVar2 + 1,4,uVar3,FUN_007c88a0,FUN_004bddc0);
      in_ECX[1] = puVar2 + 1;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00435c20(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  ushort uVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009acc58;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = 0;
  if (*(short *)(in_ECX + 10) != 0) {
    do {
      iVar1 = *(int *)(in_ECX + 4);
      puVar2 = *(undefined4 **)(iVar1 + (uint)uVar5 * 4);
      local_4 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(puVar2 + 2);
        if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1,uVar3);
        }
        *(undefined4 *)(iVar1 + (uint)uVar5 * 4) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(in_ECX + 10));
  }
  *(undefined2 *)(in_ECX + 0xc) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



bool FUN_00435cc0(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*param_2 + 4))();
  return iVar1 == param_1;
}



void FUN_00435ce0(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int iVar3;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xa8);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xa8) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  if (*(int *)(in_ECX + 0xa8) != 0) {
    iVar3 = FUN_00452a60();
    if (iVar3 != in_ECX) {
      (**(code **)(**(int **)(in_ECX + 0xa8) + 0x4c))();
    }
  }
  return;
}



undefined4 FUN_00435d50(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  LONG LVar5;
  int *in_ECX;
  
  do {
    do {
      piVar3 = (int *)(*(int *)(*in_ECX + 0xc) + param_1 * 4);
      in_ECX[4] = (int)piVar3;
      in_ECX[5] = *piVar3;
      *(uint *)in_ECX[2] = in_ECX[5] & 0xfffffffe;
    } while (*(uint *)in_ECX[4] != (in_ECX[5] & 0xfffffffeU));
    if ((in_ECX[5] & 0xfffffffeU) == 0) {
      uVar4 = 0;
      break;
    }
    (**(code **)(*(int *)*in_ECX + 0x20))(*param_2);
    uVar4 = (**(code **)(*(int *)*in_ECX + 0x24))(*(undefined4 *)(in_ECX[5] & 0xfffffffe));
    *param_2 = uVar4;
    puVar1 = (undefined4 *)*param_3;
    piVar3 = (int *)((in_ECX[5] & 0xfffffffeU) + 4);
    if (puVar1 != (undefined4 *)*piVar3) {
      if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 2), LVar5 == 0))
         && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = *piVar3;
      *param_3 = iVar2;
      if (iVar2 != 0) {
        InterlockedIncrement((LONG *)(iVar2 + 8));
      }
    }
    uVar4 = 1;
  } while ((*(uint *)((in_ECX[5] & 0xfffffffeU) + 8) & 1) != 0);
  *(undefined4 *)in_ECX[1] = 0;
  *(undefined4 *)in_ECX[2] = 0;
  *(undefined4 *)in_ECX[3] = 0;
  return uVar4;
}



void ThreadSpecificInterfaceManager_ctor(uint param_1)

{
  uint uVar1;
  void *pvVar2;
  DWORD DVar3;
  uint *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[3] = 0;
  *in_ECX = param_1;
  pvVar2 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 8 >> 0x20) != 0) |
                                (uint)((ulonglong)param_1 * 8),uVar1);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar2,8,param_1,FUN_00434920);
  }
  in_ECX[2] = (uint)pvVar2;
  DVar3 = TlsAlloc();
  in_ECX[1] = DVar3;
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_00435f10(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  
  while( true ) {
    do {
      piVar3 = (int *)(*(int *)(*in_ECX + 0xc) + param_1 * 4);
      in_ECX[4] = (int)piVar3;
      in_ECX[5] = *piVar3;
      *(uint *)in_ECX[2] = in_ECX[5] & 0xfffffffe;
    } while (*(uint *)in_ECX[4] != (in_ECX[5] & 0xfffffffeU));
    if ((in_ECX[5] & 0xfffffffeU) == 0) break;
    (**(code **)(*(int *)*in_ECX + 0x20))(*param_2);
    uVar1 = (**(code **)(*(int *)*in_ECX + 0x24))(*(undefined4 *)(in_ECX[5] & 0xfffffffe));
    *param_2 = uVar1;
    uVar2 = in_ECX[5];
    *param_3 = *(undefined4 *)((uVar2 & 0xfffffffe) + 4);
    uVar2 = CONCAT31((int3)((uVar2 & 0xfffffffe) >> 8),1);
    if ((*(uint *)((in_ECX[5] & 0xfffffffeU) + 8) & 1) == 0) {
LAB_00435fb1:
      *(undefined4 *)in_ECX[1] = 0;
      *(undefined4 *)in_ECX[2] = 0;
      *(undefined4 *)in_ECX[3] = 0;
      return uVar2;
    }
  }
  uVar2 = *(uint *)in_ECX[4] & 0xffffff00;
  goto LAB_00435fb1;
}



void FUN_00435fe0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *_Dst;
  uint uVar4;
  int *in_ECX;
  undefined4 *local_8;
  int local_4;
  
  iVar1 = **(int **)(*in_ECX + 0x14);
  uVar2 = iVar1 * 3;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)uVar2 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar2 * 4));
  _memcpy(_Dst,*(void **)(*in_ECX + 4),iVar1 * 0xc);
  iVar1 = in_ECX[7];
  local_8 = (undefined4 *)0x0;
  local_4 = 0;
  puVar3 = local_8;
  do {
    if (iVar1 == 0) {
      FUN_00401f20(_Dst);
      in_ECX[7] = (int)puVar3;
      in_ECX[8] = local_4;
      return;
    }
    local_8 = (undefined4 *)in_ECX[7];
    in_ECX[7] = local_8[1];
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        if (local_8 == *(undefined4 **)((int)_Dst + uVar4 * 4)) {
          local_4 = local_4 + 1;
          local_8[1] = puVar3;
          goto LAB_00436068;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
    local_8[1] = 0;
    (**(code **)(*(int *)*in_ECX + 0x20))(*local_8);
    FUN_00401f20(local_8);
    local_8 = puVar3;
LAB_00436068:
    iVar1 = in_ECX[7];
    puVar3 = local_8;
  } while( true );
}



void FUN_004360a0(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  LONG LVar8;
  uint *puVar9;
  int in_ECX;
  uint uVar10;
  uint *puVar11;
  ushort uVar12;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ac23b;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != *(ushort *)(in_ECX + 8)) {
    uVar12 = (ushort)param_1;
    if (param_1 < *(ushort *)(in_ECX + 10)) {
      uVar10 = param_1 & 0xffff;
      if (uVar12 < *(ushort *)(in_ECX + 10)) {
        do {
          piVar1 = (int *)(*(int *)(in_ECX + 4) + (uVar10 & 0xffff) * 4);
          if (*piVar1 != 0) {
            puVar2 = (undefined4 *)*piVar1;
            local_4 = 0;
            if (puVar2 != (undefined4 *)0x0) {
              LVar8 = InterlockedDecrement(puVar2 + 2);
              if ((LVar8 == 0) && (puVar2 != (undefined4 *)0x0)) {
                (**(code **)*puVar2)(1);
              }
              *piVar1 = 0;
            }
            *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
          }
          uVar10 = uVar10 + 1;
        } while ((ushort)uVar10 < *(ushort *)(in_ECX + 10));
      }
      *(ushort *)(in_ECX + 10) = uVar12;
    }
    local_4 = 0xffffffff;
    pvVar3 = *(void **)(in_ECX + 4);
    *(ushort *)(in_ECX + 8) = uVar12;
    if (param_1 == 0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      param_1 = param_1 & 0xffff;
      puVar9 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < param_1 * 4) | param_1 * 4 + 4,uVar7);
      local_4 = 1;
      if (puVar9 == (uint *)0x0) {
        puVar11 = (uint *)0x0;
      }
      else {
        puVar11 = puVar9 + 1;
        *puVar9 = param_1;
        _eh_vector_constructor_iterator_(puVar11,4,param_1,FUN_007c88a0,FUN_004bddc0);
      }
      local_4 = 0xffffffff;
      *(uint **)(in_ECX + 4) = puVar11;
      uVar12 = 0;
      if (*(short *)(in_ECX + 10) != 0) {
        do {
          iVar4 = *(int *)(in_ECX + 4);
          iVar6 = (uint)uVar12 * 4;
          puVar2 = *(undefined4 **)(iVar4 + iVar6);
          if (puVar2 != *(undefined4 **)(iVar6 + (int)pvVar3)) {
            if (((puVar2 != (undefined4 *)0x0) &&
                (LVar8 = InterlockedDecrement(puVar2 + 2), LVar8 == 0)) &&
               (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
            iVar5 = *(int *)(iVar6 + (int)pvVar3);
            *(int *)(iVar4 + iVar6) = iVar5;
            if (iVar5 != 0) {
              InterlockedIncrement((LONG *)(iVar5 + 8));
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ushort *)(in_ECX + 10));
      }
      uVar12 = *(ushort *)(in_ECX + 10);
      if (uVar12 < *(ushort *)(in_ECX + 8)) {
        do {
          iVar4 = *(int *)(in_ECX + 4);
          puVar2 = *(undefined4 **)(iVar4 + (uint)uVar12 * 4);
          local_4 = 2;
          if (puVar2 != (undefined4 *)0x0) {
            LVar8 = InterlockedDecrement(puVar2 + 2);
            if ((LVar8 == 0) && (puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
            *(undefined4 *)(iVar4 + (uint)uVar12 * 4) = 0;
          }
          uVar12 = uVar12 + 1;
          local_4 = 0xffffffff;
        } while (uVar12 < *(ushort *)(in_ECX + 8));
      }
    }
    if (pvVar3 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar3,4,*(int *)((int)pvVar3 + -4),FUN_004bddc0);
      FUN_00401f20((int)pvVar3 + -4);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004362f0(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  
  if ((_DAT_00b33a28 & 1) == 0) {
    _DAT_00b33a28 = _DAT_00b33a28 | 1;
    DAT_00b33a24 = 0;
    _atexit(FUN_00a17c30);
  }
  if (param_1 < *(ushort *)(in_ECX + 10)) {
    if (*param_2 == DAT_00b33a24) {
      if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) != DAT_00b33a24) {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) == DAT_00b33a24) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  else {
    *(short *)(in_ECX + 10) = (short)param_1 + 1;
    if (*param_2 != DAT_00b33a24) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  iVar1 = *(int *)(in_ECX + 4);
  puVar2 = *(undefined4 **)(iVar1 + param_1 * 4);
  if (puVar2 != (undefined4 *)*param_2) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 2);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    iVar3 = *param_2;
    *(int *)(iVar1 + param_1 * 4) = iVar3;
    if (iVar3 != 0) {
      InterlockedIncrement((LONG *)(iVar3 + 8));
    }
  }
  return;
}



void FUN_004363c0(void)

{
  undefined4 *in_ECX;
  
  FUN_00713a30();
  *in_ECX = &PTR_FUN_00a3690c;
  in_ECX[0x123] = 0;
  in_ECX[0x122] = 0;
  return;
}



void FUN_00436420(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ac276;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3690c;
  local_4 = 1;
  if ((undefined4 *)in_ECX[0x122] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x122])(1,uVar2);
  }
  in_ECX[0x122] = 0;
  puVar1 = (undefined4 *)in_ECX[0x123];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00713c60();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004364c0(byte param_1)

{
  FUN_00436420();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint FUN_004364e0(void)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  if (*(int **)(in_ECX + 0x1c) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004364ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0xf4))();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}



void FUN_00436500(undefined1 param_1)

{
  undefined4 *in_ECX;
  longlong lVar1;
  
  *in_ECX = &PTR_FUN_00a36710;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  InterlockedIncrement(&DAT_00b33a20);
  *in_ECX = &PTR_FUN_00a36968;
  lVar1 = __allmul(param_1,0,0x10000,0);
  *(ulonglong *)(in_ECX + 4) = lVar1 + (*(ulonglong *)(in_ECX + 4) & 0xffffffffff00ffff);
  return;
}



void FUN_00436560(char param_1,uint param_2,byte param_3,ushort param_4)

{
  int in_ECX;
  longlong lVar1;
  
  lVar1 = __allmul((int)param_1,(int)param_1 >> 0x1f,0,1);
  lVar1 = __allmul(lVar1 + (ulonglong)param_2,0x100,0);
  lVar1 = __allmul(lVar1 + (ulonglong)param_3,0x10000,0);
  *(ulonglong *)(in_ECX + 0x10) = lVar1 + (ulonglong)param_4;
  return;
}



void FUN_004365f0(void)

{
  byte bVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  longlong lVar4;
  
  uVar2 = InterlockedIncrement((LONG *)&DAT_00b33a14);
  bVar1 = __allshr();
  LVar3 = InterlockedIncrement((LONG *)&DAT_00b33a18);
  lVar4 = __allmul(LVar3,2,0x100,0);
  lVar4 = __allmul(lVar4 + (ulonglong)bVar1,0x10000,0);
  *(ulonglong *)(in_ECX + 0x10) = lVar4 + (ulonglong)(uVar2 & 0xffff);
  return;
}



void FUN_00436690(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ac2a8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)in_ECX[7];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  *in_ECX = &PTR_FUN_00a36710;
  InterlockedDecrement(&DAT_00b33a20);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00436710(int *param_1)

{
  int iVar1;
  LONG *Destination;
  undefined4 *puVar2;
  LONG LVar3;
  int *in_ECX;
  undefined4 *Exchange;
  
  puVar2 = (undefined4 *)FUN_00401f00(8);
  Exchange = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    Exchange = puVar2;
  }
  puVar2 = (undefined4 *)Exchange[1];
  if (puVar2 != (undefined4 *)*param_1) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar2 + 2), LVar3 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar1 = *param_1;
    Exchange[1] = iVar1;
    if (iVar1 != 0) {
      InterlockedIncrement((LONG *)(iVar1 + 8));
    }
  }
  do {
    while( true ) {
      do {
        do {
          Destination = *(LONG **)(*in_ECX + 8);
          *(LONG **)in_ECX[1] = Destination;
        } while (Destination != *(LONG **)(*in_ECX + 8));
      } while (Destination != *(LONG **)(*in_ECX + 8));
      if (*Destination == 0) break;
      InterlockedCompareExchange((LONG *)(*in_ECX + 8),*Destination,(LONG)Destination);
    }
    LVar3 = InterlockedCompareExchange(Destination,(LONG)Exchange,0);
  } while (LVar3 != 0);
  (**(code **)(*(int *)*in_ECX + 4))();
  InterlockedCompareExchange((LONG *)(*in_ECX + 8),(LONG)Exchange,(LONG)Destination);
  *(undefined4 *)in_ECX[1] = 0;
  return;
}



void FUN_00436830(byte param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  pvVar1 = (void *)in_ECX[1];
  *in_ECX = &PTR_FUN_00a36904;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_004bddc0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00436880(char *param_1,int *param_2,char param_3)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  LONG LVar12;
  undefined4 *in_ECX;
  int *piVar13;
  char *pcVar14;
  int *unaff_FS_OFFSET;
  undefined1 auStack_130 [3];
  undefined1 uStack_12d;
  undefined4 *local_12c;
  undefined4 *puStack_128;
  uint uStack_124;
  char *local_120;
  int *local_11c;
  undefined4 uStack_118;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ac2ec;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_130;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xfffffec0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_120 = param_1;
  local_11c = param_2;
  in_ECX[1] = 0;
  pcVar7 = param_1;
  do {
    cVar5 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar5 != '\0');
  local_12c = in_ECX;
  pcVar8 = (char *)FUN_00401f00(pcVar7 + (1 - (int)(param_1 + 1)),uVar6);
  *in_ECX = pcVar8;
  pcVar7 = param_1;
  do {
    cVar5 = *pcVar7;
    *pcVar8 = cVar5;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar5 != '\0');
  if (param_2[0x84] == 0) {
    FUN_004a7a60("Model Load Error: %s in %s.\r\nWill use the default object Marker_Error.NIF.\r\n",
                 param_2 + 0xe1,param_1);
    FUN_006f9e60();
    cVar5 = (**(code **)(*param_2 + 0x54))("Meshes\\Marker_Error.NIF",0);
    if (cVar5 == '\0') {
      *in_ECX = 0;
      goto LAB_00436c84;
    }
  }
  piVar1 = *(int **)param_2[0x82];
  bVar2 = false;
  if ((piVar1 == (int *)0x0) || (iVar9 = (**(code **)(*piVar1 + 8))(), iVar9 == 0)) {
    iVar9 = 0;
    uStack_124 = 0;
    if (param_2[0x84] == 0) goto LAB_00436c84;
    do {
      uVar6 = uStack_124;
      piVar1 = *(int **)(param_2[0x82] + uStack_124 * 4);
      if ((piVar1 != (int *)0x0) &&
         ((iVar11 = (**(code **)(*piVar1 + 8))(), iVar11 != 0 ||
          (iVar11 = (**(code **)(*piVar1 + 0xc))(), iVar11 != 0)))) {
        piVar13 = local_12c + 2;
        if (*piVar13 == 0) {
          uStack_118 = FUN_00401f00(0xdc);
          uStack_4 = 1;
          if (uStack_118 == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = FUN_0070b780(0);
          }
          uStack_4 = 0xffffffff;
          FUN_0075fa90(uVar10);
        }
        (**(code **)(*(int *)*piVar13 + 0x90))(&puStack_128,iVar9,piVar1);
        puVar3 = puStack_128;
        iVar9 = iVar9 + 1;
        if (((puStack_128 != (undefined4 *)0x0) &&
            (LVar12 = InterlockedDecrement(puStack_128 + 1), LVar12 == 0)) &&
           (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
        bVar2 = true;
        uVar6 = uStack_124;
      }
      uStack_124 = uVar6 + 1;
      param_2 = local_11c;
    } while (uStack_124 < (uint)local_11c[0x84]);
    in_ECX = local_12c;
    if (!bVar2) goto LAB_00436c84;
  }
  else if ((piVar1[2] == 0) || (cVar5 = FUN_006fa6f0(piVar1[2],"Bip[0-9][0-9]"), cVar5 == '\0')) {
    FUN_0075fa90(piVar1);
  }
  else {
    puStack_128 = (undefined4 *)FUN_00401f00(0xdc,uVar6);
    uStack_4 = 0;
    if (puStack_128 == (undefined4 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_0070b780(0);
    }
    uStack_4 = 0xffffffff;
    FUN_0075fa90(uVar10);
    (**(code **)(*(int *)in_ECX[2] + 0x90))(&uStack_124,0,piVar1);
    FUN_007016a0();
    in_ECX = local_12c;
  }
  FUN_004809a0(in_ECX[2]);
  puVar3 = local_12c;
  builtin_strncpy(acStack_114,"BASE ",6);
  pcVar7 = local_120;
  do {
    cVar5 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar5 != '\0');
  pcVar8 = (char *)((int)&uStack_118 + 3);
  do {
    pcVar14 = pcVar8 + 1;
    pcVar8 = pcVar8 + 1;
  } while (*pcVar14 != '\0');
  pcVar14 = local_120;
  for (uVar6 = (uint)((int)pcVar7 - (int)local_120) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar14;
    pcVar14 = pcVar14 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar6 = (int)pcVar7 - (int)local_120 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar8 = *pcVar14;
    pcVar14 = pcVar14 + 1;
    pcVar8 = pcVar8 + 1;
  }
  FUN_006ff420(acStack_114);
  uStack_12d = DAT_00b06b18;
  DAT_00b06b18 = 1;
  bVar2 = false;
  iVar9 = FUN_00707530(9);
  if ((iVar9 != 0) && (*(short *)(iVar9 + 0x18) == *(short *)(DAT_00b3f998 + 0x18))) {
    FUN_00708560(&puStack_128,9);
    puVar4 = puStack_128;
    if ((puStack_128 != (undefined4 *)0x0) &&
       ((LVar12 = InterlockedDecrement(puStack_128 + 1), LVar12 == 0 &&
        (puVar4 != (undefined4 *)0x0)))) {
      (**(code **)*puVar4)(1);
    }
    bVar2 = true;
  }
  iVar9 = FUN_00707530(7);
  if ((iVar9 == 0) || (*(short *)(iVar9 + 0x18) != *(short *)(DAT_00b3f980 + 0x18))) {
    if (bVar2) goto LAB_00436c2c;
  }
  else {
    FUN_00708560(&local_12c,7);
    if (((local_12c != (undefined4 *)0x0) &&
        (LVar12 = InterlockedDecrement(local_12c + 1), LVar12 == 0)) &&
       (local_12c != (undefined4 *)0x0)) {
      (**(code **)*local_12c)(1);
    }
LAB_00436c2c:
    if ((char)local_11c[2] == '\0') {
      FUN_004a7a60("Reexport \'%s\' to get rid of the ZBuffer and/or VertextColor property.",
                   local_120);
    }
    else {
      FUN_004a7a60("%s: Reexport \'%s\' to get rid of the ZBuffer and/or VertextColor property.",
                   local_11c + 2,local_120);
    }
  }
  DAT_00b06b18 = uStack_12d;
  if (param_3 != '\0') {
    FUN_007b8940(puVar3[2],1,0,1);
  }
LAB_00436c84:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00436cb0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ac336;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  FUN_00401f20(*in_ECX,uVar2);
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[1] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[2] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[1];
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00436da0(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    pcVar1 = *(char **)(*(int *)(in_ECX + 4) + 8);
    if (pcVar1 != (char *)0x0) {
      pcVar1 = _strchr(pcVar1,0x5f);
      if (pcVar1 != (char *)0x0) {
        *pcVar1 = '\0';
      }
    }
    uVar2 = FUN_0051b490(*(undefined4 *)(in_ECX + 4),param_1);
    FUN_0075fa90(uVar2);
    FUN_00434930(param_1);
  }
  return;
}



void FUN_00436df0(void)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ac368;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a36acc;
  local_4 = 0;
  FUN_00435c20(uVar2);
  *in_ECX = &PTR_FUN_00a36904;
  pvVar1 = (void *)in_ECX[1];
  local_4 = 0xffffffff;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_004bddc0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00436e70(void)

{
  int *in_ECX;
  
  InterlockedIncrement((LONG *)(in_ECX[7] + 0x10));
  (**(code **)(*in_ECX + 0x28))();
  return;
}



void FUN_00436e90(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ac3a3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a36ad4;
  local_4 = 1;
  if ((undefined4 *)in_ECX[7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[7])(1,uVar2);
  }
  puVar1 = (undefined4 *)in_ECX[6];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 2);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *in_ECX = &PTR_FUN_00a36710;
  InterlockedDecrement(&DAT_00b33a20);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00436f30(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  if (((*(int *)(in_ECX + 0x18) != 0) && (3 < *(int *)(in_ECX + 0xc))) &&
     ((*(int *)(in_ECX + 0x1c) == 0 ||
      ((uint)*(ushort *)(*(int *)(in_ECX + 0x1c) + 0xc) == *(uint *)(*(int *)(in_ECX + 0x1c) + 0x10)
      )))) {
    (**(code **)(**(int **)(in_ECX + 0x18) + 0x24))();
    puVar1 = *(undefined4 **)(in_ECX + 0x18);
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 2);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(in_ECX + 0x18) = 0;
    }
  }
  return;
}



void FUN_00436fa0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_00436500(param_1);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *in_ECX = &PTR_FUN_00a36b04;
  return;
}



void FUN_00436fd0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a36b04;
  FUN_00401f20(in_ECX[8]);
  FUN_00436e90();
  return;
}



void FUN_00436ff0(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *in_ECX;
  uint local_4;
  
  if (in_ECX[9] != 0) {
    uVar2 = InterlockedIncrement((LONG *)&DAT_00b33a14);
    uVar2 = uVar2 & 0xffff;
    bVar1 = __allshr();
    local_4 = (uint)bVar1;
    uVar3 = *(uint *)(in_ECX[9] + 0xc) & 0x7fffffff;
    uVar4 = (**(code **)(*in_ECX + 0x2c))(uVar3,local_4,uVar2);
    FUN_00436560(uVar4,uVar3,local_4,uVar2);
    return;
  }
  FUN_004365f0();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00437050(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_24 [12];
  undefined1 local_18 [8];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ac3d3;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)local_24;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00436500(param_2);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *in_ECX = &PTR_FUN_00a36b38;
  in_ECX[10] = 0;
  local_4 = 1;
  FUN_00434600(param_1);
  iVar1 = in_ECX[8];
  if (iVar1 != 0) {
    FUN_006fa1b0(iVar1,local_18,local_24,uVar2);
    uVar3 = FUN_0042db10(1,local_18,local_24,iVar1);
    in_ECX[9] = uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00437110(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ac408;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)in_ECX[10];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a36b04;
  FUN_00401f20(in_ECX[8],uVar2);
  FUN_00436e90();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00437203) */
/* WARNING: Removing unreachable block (ram,0x00437211) */
/* WARNING: Removing unreachable block (ram,0x00437215) */

void FUN_004371a0(int param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ac443;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00436500(param_2);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *in_ECX = &PTR_FUN_00a36b38;
  in_ECX[10] = 0;
  local_4 = 1;
  if ((param_1 != 0) && (in_ECX[10] = param_1, param_1 != 0)) {
    InterlockedIncrement((LONG *)(param_1 + 4));
  }
  in_ECX[3] = 5;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00437250(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4,char param_5
                 ,char param_6)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ac473;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00436500(param_2);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *in_ECX = &PTR_FUN_00a36b6c;
  in_ECX[10] = 0;
  in_ECX[0xc] = param_3;
  local_4 = 1;
  in_ECX[0xb] = 0;
  *(undefined1 *)(in_ECX + 0xd) = 0;
  FUN_00434600(param_1);
  FUN_00434cb0(0,1);
  if (param_4 == '\0') {
    *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) & 0xfb;
  }
  else {
    *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) | 4;
  }
  if (param_5 == '\0') {
    *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) & 0xfe;
  }
  else {
    *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) | 1;
  }
  if (param_6 != '\0') {
    *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) | 2;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) & 0xfd;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00437320(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[10] != 0) {
    InterlockedDecrement((LONG *)(in_ECX[10] + 4));
  }
  *in_ECX = &PTR_FUN_00a36b04;
  FUN_00401f20(in_ECX[8]);
  FUN_00436e90();
  return;
}



void FUN_00437350(int *param_1,undefined4 param_2,undefined4 param_3,char param_4,char param_5,
                 char param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ac473;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00436500(param_2);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *in_ECX = &PTR_FUN_00a36b6c;
  in_ECX[10] = 0;
  in_ECX[0xc] = param_3;
  in_ECX[0xb] = param_1;
  *(undefined1 *)(in_ECX + 0xd) = 0;
  local_4 = 1;
  uVar2 = (**(code **)(*param_1 + 0x14))(uVar1);
  FUN_00434600(uVar2);
  FUN_00434cb0(0,1);
  if (param_4 == '\0') {
    *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) & 0xfb;
  }
  else {
    *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) | 4;
  }
  if (param_5 == '\0') {
    *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) & 0xfe;
  }
  else {
    *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) | 1;
  }
  if (param_6 != '\0') {
    *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) | 2;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) & 0xfd;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00437464) */

void FUN_00437430(int param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_00436500(param_2);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *in_ECX = &PTR_FUN_00a36b6c;
  in_ECX[10] = 0;
  if ((param_1 != 0) && (in_ECX[10] = param_1, param_1 != 0)) {
    InterlockedIncrement((LONG *)(param_1 + 4));
  }
  in_ECX[3] = 5;
  return;
}



void FUN_004374e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ac473;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00436500(param_2);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *in_ECX = &PTR_FUN_00a36b6c;
  in_ECX[10] = 0;
  local_4 = 1;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  *(undefined1 *)(in_ECX + 0xd) = 0;
  FUN_00434600(param_1);
  FUN_00434cb0(0,1);
  in_ECX[0xe] = param_3;
  *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) & 0xf9 | 1;
  *in_ECX = &PTR_FUN_00a36ba4;
  in_ECX[0xf] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00437590(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ac498;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a36bdc;
  iVar1 = in_ECX[0xc];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_004b9cf0(uVar2);
    FUN_00401f20(iVar1);
  }
  local_4 = 0xffffffff;
  FUN_00437110();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004376a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int *piVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ac4d3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(param_2 + 0x24);
  }
  FUN_00436500(param_3);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *in_ECX = &PTR_FUN_00a36b6c;
  in_ECX[10] = 0;
  in_ECX[0xc] = param_4;
  in_ECX[0xb] = piVar3;
  *(undefined1 *)(in_ECX + 0xd) = 0;
  local_4 = 1;
  uVar2 = (**(code **)(*piVar3 + 0x14))(uVar1);
  FUN_00434600(uVar2);
  FUN_00434cb0(0,1);
  *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) & 0xf9 | 1;
  *in_ECX = &PTR_FUN_00a36c14;
  in_ECX[0xe] = param_1;
  in_ECX[0xf] = param_2;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00437760(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_00436500(param_3);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *in_ECX = &PTR_FUN_00a36c4c;
  in_ECX[8] = param_1;
  in_ECX[9] = param_2;
  return;
}



void FUN_00437790(void)

{
  undefined4 *in_ECX;
  
  if ((3 < (int)in_ECX[3]) &&
     ((in_ECX[7] == 0 || ((uint)*(ushort *)(in_ECX[7] + 0xc) == *(uint *)(in_ECX[7] + 0x10))))) {
    FUN_0041ab90();
    if (in_ECX[2] == 0) {
      (**(code **)*in_ECX)(1);
    }
  }
  return;
}



void FUN_004377d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ac503;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00436500(param_2);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *in_ECX = &PTR_FUN_00a36c7c;
  in_ECX[10] = 0;
  local_4 = 1;
  *(undefined1 *)(in_ECX + 0xb) = 0;
  FUN_00434600(param_1);
  FUN_00434cb0(0,1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00437860(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[10] != 0) {
    InterlockedDecrement((LONG *)(in_ECX[10] + 0xc));
  }
  *in_ECX = &PTR_FUN_00a36b04;
  FUN_00401f20(in_ECX[8]);
  FUN_00436e90();
  return;
}



/* WARNING: Removing unreachable block (ram,0x004378c4) */

void FUN_00437890(int param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_00436500(param_2);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *in_ECX = &PTR_FUN_00a36c7c;
  in_ECX[10] = 0;
  if ((param_1 != 0) && (in_ECX[10] = param_1, param_1 != 0)) {
    InterlockedIncrement((LONG *)(param_1 + 0xc));
  }
  in_ECX[3] = 5;
  return;
}



void FUN_004378f0(void)

{
  char cVar1;
  int *in_ECX;
  int *piStack_4;
  
  piStack_4 = in_ECX;
  if (((in_ECX[10] != 0) && ((*(byte *)(in_ECX + 0xb) & 1) == 0)) &&
     (cVar1 = (**(code **)(**(int **)(g_ModelLoader_singleton + 4) + 0xc))(in_ECX[8],in_ECX[10],0),
     cVar1 == '\0')) {
    piStack_4 = (int *)0x0;
    cVar1 = (**(code **)(**(int **)(g_ModelLoader_singleton + 4) + 4))(in_ECX[8],&piStack_4);
    FUN_00435b10(-(uint)(cVar1 != '\0') & (uint)piStack_4);
  }
                    /* WARNING: Could not recover jumptable at 0x0043795f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x28))();
  return;
}



void FUN_00437970(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_00436500(param_2);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *in_ECX = &PTR_FUN_00a36ce4;
  in_ECX[8] = param_1;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  return;
}



void QueuedHead_dtor(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ac533;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x28);
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x24);
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00436e90(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void QueuedHelmet_dtor(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ac56e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x2c);
  local_4 = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x28);
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x24);
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 2);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00436e90(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00437b40(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 6) {
    uVar1 = FUN_00478a40();
    FUN_0075fa90(uVar1);
  }
  return;
}



void FUN_00437b60(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x24) + 0x28);
  if (((iVar1 != 0) && (*(int *)(in_ECX + 0xc) != 6)) && (*(int *)(in_ECX + 0x2c) != 0)) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
    FUN_0047b7d0(*(undefined4 *)(in_ECX + 0x28),*(undefined4 *)(in_ECX + 0x2c));
  }
  (**(code **)(**(int **)(g_ModelLoader_singleton + 0x10) + 0x10))(*(undefined4 *)(in_ECX + 0x30));
  return;
}



void FUN_00437bb0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  LONG LVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (((*(int *)(in_ECX + 0xc) != 6) && (*(int *)(in_ECX + 0x18) != 0)) &&
     (*(int *)(*(int *)(in_ECX + 0x18) + 0x3c) == 0)) {
    FUN_004d7d10(*(undefined4 *)(in_ECX + 0x1c));
    uVar5 = 0;
    uVar4 = 0;
    uVar2 = FUN_006ecc80(0,0);
    FUN_00441ef0(*(undefined4 *)(in_ECX + 0x18),uVar2,uVar4,uVar5);
    FUN_004d7010(1);
    return;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  return;
}



void FUN_00437c30(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_00436500(param_2);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *in_ECX = &PTR_FUN_00a36d5c;
  in_ECX[8] = param_1;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  return;
}



void FUN_00437c70(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ac5b9;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x30);
  local_4 = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 2);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x2c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  if (*(int *)(in_ECX + 0x28) != 0) {
    InterlockedDecrement((LONG *)(*(int *)(in_ECX + 0x28) + 4));
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x24);
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 2);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00436e90(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00437e20(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_00436500(param_2);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = param_1;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  *in_ECX = &PTR_FUN_00a36d9c;
  return;
}



void FUN_00437e60(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  (**(code **)(*(int *)in_ECX[8] + 0x170))();
  iVar2 = FUN_004ba780(0);
  if (iVar2 != 0) {
    if (*(short *)(iVar2 + 0xb6) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int **)(iVar2 + 0xb0);
    }
    iVar1 = *(int *)(iVar3 + 0xb4);
    *(ushort *)(iVar1 + 0x2e) = *(ushort *)(iVar1 + 0x2e) & 0xfff | 0x4000;
    *(undefined1 *)(iVar1 + 0x30) = 0x11;
    *(undefined1 *)(iVar1 + 0x31) = 0x1f;
    FUN_007b8940(iVar3,1,1,1);
    iVar3 = FUN_00707530(4);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x402000;
      *(undefined4 *)(iVar3 + 0x24) = 0;
    }
    (**(code **)(*in_ECX + 0x34))(iVar2);
  }
  return;
}



void FUN_00437f00(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_00436500(param_2);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = param_1;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  *in_ECX = &PTR_FUN_00a36ddc;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  return;
}



void FUN_00437f40(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ac5f3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x3c);
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 2);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x38);
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 2);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00437c70(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00437fe0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_00436500(param_2);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = param_1;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  *in_ECX = &PTR_FUN_00a36e1c;
  return;
}



void FUN_00438020(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = DAT_00b333c4;
  FUN_00436500(param_1);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = uVar1;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  *in_ECX = &PTR_FUN_00a36e5c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x004382d1) */
/* WARNING: Removing unreachable block (ram,0x004382a5) */
/* WARNING: Removing unreachable block (ram,0x004382b1) */
/* WARNING: Removing unreachable block (ram,0x0043817f) */
/* WARNING: Removing unreachable block (ram,0x004382d9) */
/* WARNING: Removing unreachable block (ram,0x004382dd) */
/* WARNING: Removing unreachable block (ram,0x0043826d) */
/* WARNING: Removing unreachable block (ram,0x004382b5) */
/* WARNING: Removing unreachable block (ram,0x004382bf) */
/* WARNING: Removing unreachable block (ram,0x004382e1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ModelLoader_QueueReference(int *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ac618;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar1 = FUN_0045a500();
  if ((((cVar1 == '\0') || ((*(uint *)(DAT_00b33b00 + 0x18) >> 1 & 1) != 0)) &&
      (((int *)param_1[7] == (int *)0x0 ||
       ((cVar1 = (**(code **)(*(int *)param_1[7] + 0xf4))(), cVar1 == '\0' ||
        (iVar2 = (**(code **)(*param_1 + 0x170))(), *(char *)(iVar2 + 4) == '\x1a')))))) &&
     (iVar2 = (**(code **)(*param_1 + 0x170))(), *(char *)(iVar2 + 4) != '\n')) {
    cVar1 = (**(code **)(*param_1 + 400))();
    if ((cVar1 != '\0') && (iVar2 = (**(code **)(*param_1 + 0x330))(), iVar2 != 0)) {
      (**(code **)(*param_1 + 0x330))();
      FUN_00612de0();
    }
    uStack_4 = 0;
    cVar1 = (**(code **)(**(int **)(in_ECX + 8) + 4))();
    if (cVar1 == '\0') {
      if (param_1 == DAT_00b333c4) {
        iVar2 = FUN_00401f00();
        if (iVar2 != 0) {
          FUN_00438020();
        }
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x170))();
        cVar1 = *(char *)(iVar2 + 4);
        if (cVar1 == '\x1e') {
          iVar2 = FUN_00401f00();
          if (iVar2 != 0) {
            FUN_00437e20();
          }
        }
        else if (cVar1 == '#') {
          iVar2 = FUN_00401f00();
          if (iVar2 != 0) {
            FUN_00437f00();
          }
        }
        else if (cVar1 == '$') {
          iVar2 = FUN_00401f00();
          if (iVar2 != 0) {
            FUN_00437fe0();
          }
        }
        else {
          iVar2 = FUN_00401f00();
          if (iVar2 != 0) {
            FUN_00437c30();
          }
        }
      }
      FUN_004bcb70();
      cVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0xc))(param_1);
      if (cVar1 != '\0') {
        (**(code **)(_DAT_00000000 + 0x20))();
      }
    }
    else {
      uVar3 = __allshr();
      if ((uVar3 & 0xff) != param_2) {
        (**(code **)(_DAT_00000000 + 0x1c))();
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00438300(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ac968;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar2 = FUN_00401f00(0x28,uVar1);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_00437760(param_1,param_2,param_3);
    }
    if (piVar3 != (int *)0x0) {
      InterlockedIncrement(piVar3 + 2);
    }
    local_4 = 0;
    (**(code **)(*piVar3 + 0x20))();
    local_4 = 0xffffffff;
    LVar4 = InterlockedDecrement(piVar3 + 2);
    if (LVar4 == 0) {
      (**(code **)*piVar3)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_004383b0(undefined4 param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  LONG LVar3;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ac653;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar1 = (**(code **)(**(int **)(in_ECX + 4) + 4))();
  if (cVar1 == '\0') {
    piVar2 = (int *)FUN_00401f00();
    local_c = 0;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      FUN_004377d0();
      *piVar2 = (int)&PTR_FUN_00a36cb0;
      piVar2[0xc] = param_2;
      piVar2[0xd] = unaff_retaddr;
    }
    if (piVar2 != (int *)0x0) {
      InterlockedIncrement(piVar2 + 2);
    }
    local_c = 1;
    if (piVar2 != (int *)0x0) {
      InterlockedIncrement(piVar2 + 2);
    }
    cVar1 = (**(code **)(**(int **)(in_ECX + 0xc) + 0xc))(unaff_retaddr);
    if (cVar1 == '\0') {
      if (piVar2 != (int *)0x0) {
        LVar3 = InterlockedDecrement(piVar2 + 2);
        if (LVar3 == 0) {
          (**(code **)*piVar2)();
        }
        piVar2 = (int *)0x0;
      }
    }
    else {
      (**(code **)(*piVar2 + 0x20))();
    }
    local_c = -1;
    if ((piVar2 != (int *)0x0) && (LVar3 = InterlockedDecrement(piVar2 + 2), LVar3 == 0)) {
      (**(code **)*piVar2)();
    }
    uStack_4 = 0;
  }
  *unaff_FS_OFFSET = unaff_EBX;
  return uStack_4;
}



void FUN_004384e0(int param_1)

{
  char cVar1;
  undefined4 *in_ECX;
  int unaff_EDI;
  char unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = (**(code **)(*(int *)*in_ECX + 4))(param_1,&local_4);
  if (cVar1 != '\0') {
    if (param_1 == 1) {
      InterlockedDecrement((LONG *)(unaff_EDI + 4));
    }
    else {
      FUN_00434c00(-param_1);
    }
    if (unaff_retaddr != '\0') {
      FUN_00435a10(unaff_EDI,param_1);
    }
  }
  return;
}



void FUN_00438540(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  int unaff_EDI;
  char unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = (**(code **)(**(int **)(in_ECX + 4) + 4))(param_1);
  if (cVar1 != '\0') {
    InterlockedDecrement((LONG *)(unaff_EDI + 0xc));
    if ((unaff_retaddr != '\0') && (*(int *)(unaff_EDI + 0xc) == 0)) {
      (**(code **)(**(int **)(in_ECX + 4) + 0x10))(param_1);
      if (&local_4 != (undefined4 *)0x0) {
        FUN_00436cb0();
        FUN_00401f20(&local_4);
      }
    }
  }
  return;
}



void FUN_004385b0(char *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ac683;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((((param_1 != (char *)0x0) && (*param_1 != '\0')) && (param_2 != 0)) &&
     (*(int *)(param_2 + 0x1c) != 0)) {
    iVar2 = FUN_00401f00(0x40,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_004374e0(param_1,5,param_2);
    }
    if (piVar3 != (int *)0x0) {
      InterlockedIncrement(piVar3 + 2);
    }
    local_4 = 1;
    (**(code **)(*piVar3 + 0x30))(param_3);
    local_4 = 0xffffffff;
    FUN_004bddc0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00438670(undefined4 param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  LONG LVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ac6b3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar2 = (int *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_00437050(param_1,4);
    *piVar2 = (int)&PTR_FUN_00a36bdc;
    piVar2[0xc] = param_2;
  }
  if (piVar2 != (int *)0x0) {
    InterlockedIncrement(piVar2 + 2);
  }
  local_4 = 1;
  (**(code **)(*piVar2 + 0x20))();
  local_4 = 0xffffffff;
  LVar3 = InterlockedDecrement(piVar2 + 2);
  if (LVar3 == 0) {
    (**(code **)*piVar2)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00438730(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  char *local_18 [3];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ac6db;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (int *)0x0) {
    local_18[0] = "Bip01 Spine2";
    local_18[1] = "Bip01 Spine1";
    local_18[2] = "Bip01 Spine";
    iVar4 = 0;
    do {
      iVar2 = (**(code **)(*param_1 + 0x58))(local_18[iVar4],uVar1);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0xa8) != 0)) {
        iVar2 = FUN_00560920(&DAT_00ba7a20,*(int *)(iVar2 + 0xa8));
        if (iVar2 != 0) {
          iVar3 = FUN_00401f00(0x4c);
          uVar5 = 0;
          uStack_4 = 0;
          if (iVar3 != 0) {
            uVar5 = FUN_0088e7c0();
          }
          uStack_4 = 0xffffffff;
          FUN_0088e880(iVar2);
          FUN_00435ce0(uVar5);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00438810(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a36e9c;
  FUN_00401f20(in_ECX[2]);
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a366e8;
  return;
}



void FUN_00438840(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a36ea8;
  FUN_00401f20(in_ECX[2]);
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a366f0;
  return;
}



void LockFreeQueue_QueuedReference_ctor(int param_1,undefined4 param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d7deb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a36ee0;
  in_ECX[6] = 0;
  puVar3 = (undefined4 *)FUN_00401f00(8,uVar2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  in_ECX[1] = puVar3;
  in_ECX[2] = puVar3;
  in_ECX[3] = param_2;
  lVar1 = (ulonglong)(uint)(param_1 * 2) * 4;
  uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  in_ECX[4] = uVar4;
  iVar5 = FUN_00401f00(0x10);
  local_4 = 0;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ThreadSpecificInterfaceManager_ctor(param_1);
  }
  in_ECX[5] = uVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00438930(int param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b44b6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a36ef4;
  in_ECX[6] = 0;
  in_ECX[2] = param_2;
  pvVar3 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)param_2 * 4),uVar2);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar3,4,param_2,FUN_004bddb0);
  }
  in_ECX[3] = pvVar3;
  lVar1 = (ulonglong)(uint)(param_1 * 3) * 4;
  local_4 = 0xffffffff;
  uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  in_ECX[1] = uVar4;
  in_ECX[4] = param_3;
  iVar5 = FUN_00401f00(0x10);
  local_4 = 1;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ThreadSpecificInterfaceManager_ctor(param_1);
  }
  in_ECX[5] = uVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00438a30(int param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b44b6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a36f34;
  in_ECX[6] = 0;
  in_ECX[2] = param_2;
  pvVar3 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)param_2 * 4),uVar2);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar3,4,param_2,FUN_004bddb0);
  }
  in_ECX[3] = pvVar3;
  lVar1 = (ulonglong)(uint)(param_1 * 3) * 4;
  local_4 = 0xffffffff;
  uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  in_ECX[1] = uVar4;
  in_ECX[4] = param_3;
  iVar5 = FUN_00401f00(0x10);
  local_4 = 1;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ThreadSpecificInterfaceManager_ctor(param_1);
  }
  in_ECX[5] = uVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00438b20(int param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b44b6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a36f74;
  in_ECX[6] = 0;
  in_ECX[2] = param_2;
  pvVar3 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)param_2 * 4),uVar2);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar3,4,param_2,FUN_004bddb0);
  }
  in_ECX[3] = pvVar3;
  lVar1 = (ulonglong)(uint)(param_1 * 3) * 4;
  local_4 = 0xffffffff;
  uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  in_ECX[1] = uVar4;
  in_ECX[4] = param_3;
  iVar5 = FUN_00401f00(0x10);
  local_4 = 1;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ThreadSpecificInterfaceManager_ctor(param_1);
  }
  in_ECX[5] = uVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00438c20(undefined4 *param_1)

{
  char cVar1;
  LONG LVar2;
  undefined4 uVar3;
  int *in_ECX;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ac708;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar4 = 0;
  local_4 = 0;
  if (in_ECX[2] != 0) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        InterlockedIncrement(param_1 + 2);
      }
      cVar1 = (**(code **)(*in_ECX + 0x14))(uVar4);
      if (cVar1 != '\0') {
        local_4 = 0xffffffff;
        if ((param_1 != (undefined4 *)0x0) &&
           (LVar2 = InterlockedDecrement(param_1 + 2), LVar2 == 0)) {
          (**(code **)*param_1)();
        }
        uVar3 = 1;
        goto LAB_00438cab;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)in_ECX[2]);
  }
  local_4 = 0xffffffff;
  if ((param_1 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(param_1 + 2), LVar2 == 0)) {
    (**(code **)*param_1)();
  }
  uVar3 = 0;
LAB_00438cab:
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_00438cf0(int param_1,undefined4 param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d7deb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a36fb4;
  in_ECX[6] = 0;
  puVar3 = (undefined4 *)FUN_00401f00(8,uVar2);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  in_ECX[1] = puVar3;
  in_ECX[2] = puVar3;
  in_ECX[3] = param_2;
  lVar1 = (ulonglong)(uint)(param_1 * 2) * 4;
  uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  in_ECX[4] = uVar4;
  iVar5 = FUN_00401f00(0x10);
  local_4 = 0;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ThreadSpecificInterfaceManager_ctor(param_1);
  }
  in_ECX[5] = uVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00438db0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}



void LockFreeMap_Model_ctor(int param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b44b6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a36fcc;
  in_ECX[6] = 0;
  in_ECX[2] = param_2;
  pvVar3 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)param_2 * 4),uVar2);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar3,4,param_2,FUN_004bddb0);
  }
  in_ECX[3] = pvVar3;
  lVar1 = (ulonglong)(uint)(param_1 * 3) * 4;
  local_4 = 0xffffffff;
  uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  in_ECX[1] = uVar4;
  in_ECX[4] = param_3;
  iVar5 = FUN_00401f00(0x10);
  local_4 = 1;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ThreadSpecificInterfaceManager_ctor(param_1);
  }
  in_ECX[5] = uVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void LockFreeMap_KFModel_ctor(int param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b44b6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a3700c;
  in_ECX[6] = 0;
  in_ECX[2] = param_2;
  pvVar3 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)param_2 * 4),uVar2);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar3,4,param_2,FUN_004bddb0);
  }
  in_ECX[3] = pvVar3;
  lVar1 = (ulonglong)(uint)(param_1 * 3) * 4;
  local_4 = 0xffffffff;
  uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  in_ECX[1] = uVar4;
  in_ECX[4] = param_3;
  iVar5 = FUN_00401f00(0x10);
  local_4 = 1;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ThreadSpecificInterfaceManager_ctor(param_1);
  }
  in_ECX[5] = uVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00439000(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a36710;
  InterlockedDecrement(&DAT_00b33a20);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00439030(byte param_1)

{
  FUN_00436690();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00439050(int *param_1,int param_2,void *param_3,int param_4,void *param_5)

{
  rsize_t _DstSize;
  int iVar1;
  int in_ECX;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00984d5e();
  }
  if (param_3 != param_5) {
    iVar1 = *(int *)(in_ECX + 8) - (int)param_5 >> 2;
    _DstSize = iVar1 * 4;
    if (0 < iVar1) {
      _memmove_s(param_3,_DstSize,param_5,_DstSize);
    }
    *(void **)(in_ECX + 8) = (void *)(_DstSize + (int)param_3);
  }
  param_1[1] = (int)param_3;
  *param_1 = param_2;
  return;
}



void FUN_004390b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ac73b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined4 *)(in_ECX + 8) = 0;
  puVar1 = *(undefined4 **)(in_ECX + 8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  FUN_00436880(param_1,param_2,param_3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00439140(char *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  LONG LVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_009ac77e;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  puVar2 = (undefined4 *)in_ECX[2];
  local_4 = 1;
  uStack_3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 1);
    if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[2] = 0;
  }
  pcVar6 = param_1;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  pcVar7 = (char *)FUN_00401f00(pcVar6 + (1 - (int)(param_1 + 1)),uVar4);
  *in_ECX = pcVar7;
  pcVar6 = param_1;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  piVar8 = (int *)FUN_006cb240(&param_2,param_2,0);
  puVar2 = (undefined4 *)in_ECX[1];
  local_4 = 2;
  if (puVar2 != (undefined4 *)*piVar8) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 1);
      if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    iVar3 = *piVar8;
    in_ECX[1] = iVar3;
    if (iVar3 != 0) {
      InterlockedIncrement((LONG *)(iVar3 + 4));
    }
  }
  puVar2 = param_2;
  _local_4 = CONCAT31(uStack_3,1);
  if (param_2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(param_2 + 1);
    if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  if (in_ECX[1] == 0) {
    FUN_004a7a60("Could not create ControllerManager Sequence for \"%s\".\r\n",*in_ECX);
  }
  else {
    FUN_00436da0(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004392a0(byte param_1)

{
  FUN_00436df0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004392c0(byte param_1)

{
  FUN_00436e90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void ModelLoader_CancelPending_helper2(void)

{
  int iVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(in_ECX + 0x1c) != 0) {
    uVar4 = (uint)*(ushort *)(*(int *)(in_ECX + 0x1c) + 10);
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0x1c) + 4) + uVar5 * 4);
        if (iVar1 != 0) {
          IOManager_TaskStateTransition(iVar1);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 2);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(in_ECX + 0x18) = 0;
  }
  return;
}



void FUN_00439350(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a36b04;
  FUN_00401f20(in_ECX[8]);
  FUN_00436e90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00439390(byte param_1)

{
  FUN_00437110();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004393b0(byte param_1)

{
  undefined4 *in_ECX;
  
  if (in_ECX[10] != 0) {
    InterlockedDecrement((LONG *)(in_ECX[10] + 4));
  }
  *in_ECX = &PTR_FUN_00a36b04;
  FUN_00401f20(in_ECX[8]);
  FUN_00436e90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00439400(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  undefined4 unaff_EBX;
  uint unaff_EBP;
  int *unaff_FS_OFFSET;
  int local_5b0;
  undefined **appuStack_5ac [290];
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 auStack_11c [264];
  int iStack_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ac7b9;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_5b0;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffa40;
  *unaff_FS_OFFSET = (int)&local_c;
  local_5b0 = 0;
  cVar2 = (**(code **)(*(int *)*g_ModelLoader_singleton + 4))
                    (*(undefined4 *)(in_ECX + 0x20),&local_5b0,uVar3);
  uVar4 = -(uint)(cVar2 != '\0') & unaff_EBP;
  uVar3 = *(uint *)(in_ECX + 0x28);
  if (uVar3 != uVar4) {
    if (uVar3 != 0) {
      InterlockedDecrement((LONG *)(uVar3 + 4));
    }
    *(uint *)(in_ECX + 0x28) = uVar4;
    if (uVar4 != 0) {
      InterlockedIncrement((LONG *)(uVar4 + 4));
    }
  }
  if (*(int *)(in_ECX + 0x28) == 0) {
    FUN_00434710(*(undefined4 *)(in_ECX + 0x20),auStack_11c);
    if (*(int *)(in_ECX + 0x24) == 0) {
      if (*(int *)(in_ECX + 0x20) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0042e8e0(*(int *)(in_ECX + 0x20),0xffffffff,1);
      }
    }
    else {
      uVar5 = FUN_0042ebc0(0,*(int *)(in_ECX + 0x24),0xffffffff,0);
    }
    FUN_00713a30();
    appuStack_5ac[0] = &PTR_FUN_00a3690c;
    uStack_120 = 0;
    uStack_124 = 0;
    local_c = 0;
    cVar2 = FUN_006f9980(auStack_11c,uVar5);
    if ((cVar2 != '\0') || ((*(byte *)(in_ECX + 0x34) & 0x20) != 0)) {
      local_5b0 = FUN_00401f00(0xc);
      local_c = CONCAT31(local_c._1_3_,1);
      if (local_5b0 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_004390b0(*(undefined4 *)(in_ECX + 0x20),appuStack_5ac,
                             CONCAT31((int3)((uint)unaff_EBX >> 8),*(undefined1 *)(in_ECX + 0x34)) &
                             0xffffff01);
      }
      iVar1 = *(int *)(in_ECX + 0x28);
      if (iVar1 != iVar6) {
        if (iVar1 != 0) {
          InterlockedDecrement((LONG *)(iVar1 + 4));
        }
        *(int *)(in_ECX + 0x28) = iVar6;
        if (iVar6 != 0) {
          InterlockedIncrement((LONG *)(iVar6 + 4));
        }
      }
    }
    local_c = -1;
    FUN_00436420();
  }
  else {
    *(byte *)(in_ECX + 0x34) = *(byte *)(in_ECX + 0x34) | 0x10;
  }
  *unaff_FS_OFFSET = iStack_14;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004395d0(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  int *in_ECX;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  piVar1 = in_ECX + 10;
  if (in_ECX[10] != 0) {
    if ((*(byte *)(in_ECX + 0xd) & 2) != 0) {
      InterlockedIncrement((LONG *)(in_ECX[10] + 4));
    }
    if ((*(byte *)(in_ECX + 0xd) & 0x10) == 0) {
      if (((*(byte *)(in_ECX + 0xd) & 4) != 0) && (in_ECX[0xc] != 0)) {
        iVar5 = FUN_00434b40();
        FUN_00707370(0,0);
        local_14 = *(float *)(iVar5 + 0x2c);
        if (local_14 < 0.001) {
          iVar5 = FUN_004dc4b0(local_c,*(undefined4 *)(*piVar1 + 8));
          local_14 = *(float *)(iVar5 + 8) * 0.5;
        }
        fVar2 = (float)(DAT_00b06a2c << 0xc);
        if (DAT_00b06a2c << 0xc < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        local_10 = fVar2 * 0.5 - (local_14 + 2048.0);
        if ((local_14 != 0.0) && (pfVar6 = (float *)FUN_00403c00(), *pfVar6 * local_14 < local_10))
        {
          pfVar6 = (float *)FUN_00403c00();
          local_10 = *pfVar6 * local_14;
        }
        fVar2 = local_10 * _DAT_00b05150;
        fVar3 = local_10;
        local_10 = fVar2;
        FUN_004a02a0(fVar2,fVar3);
        FUN_004a01b0(in_ECX[0xc]);
      }
      FUN_00438730(*(undefined4 *)(*piVar1 + 8));
      cVar4 = (**(code **)(*(int *)*g_ModelLoader_singleton + 0xc))(in_ECX[8],*piVar1,0);
      if (cVar4 == '\0') {
        local_10 = 0.0;
        cVar4 = (**(code **)(*(int *)*g_ModelLoader_singleton + 4))(in_ECX[8],&local_10);
        FUN_00435ab0(-(uint)(cVar4 != '\0') & (uint)local_10);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00439776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x28))();
  return;
}



void FUN_00439780(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ac803;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a36ba4;
  iVar1 = in_ECX[0xe];
  local_4 = 1;
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1c);
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    FUN_00401f20(iVar1,uVar3);
  }
  puVar2 = (undefined4 *)in_ECX[0xf];
  local_4 = local_4 & 0xffffff00;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4 = 0xffffffff;
  if (in_ECX[10] != 0) {
    InterlockedDecrement((LONG *)(in_ECX[10] + 4));
  }
  *in_ECX = &PTR_FUN_00a36b04;
  FUN_00401f20(in_ECX[8],uVar3);
  FUN_00436e90();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00439860(byte param_1)

{
  FUN_00437590();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00439880(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a36c14;
  if (in_ECX[10] != 0) {
    InterlockedDecrement((LONG *)(in_ECX[10] + 4));
  }
  *in_ECX = &PTR_FUN_00a36b04;
  FUN_00401f20(in_ECX[8]);
  FUN_00436e90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004398f0(byte param_1)

{
  undefined4 *in_ECX;
  
  if (in_ECX[10] != 0) {
    InterlockedDecrement((LONG *)(in_ECX[10] + 0xc));
  }
  *in_ECX = &PTR_FUN_00a36b04;
  FUN_00401f20(in_ECX[8]);
  FUN_00436e90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00439940(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  uint unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined **local_5ac [290];
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 auStack_11c [264];
  int iStack_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ac839;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)local_5ac;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffa44;
  *unaff_FS_OFFSET = (int)&local_c;
  local_5ac[0] = (undefined **)0x0;
  cVar2 = (**(code **)(**(int **)(g_ModelLoader_singleton + 4) + 4))
                    (*(undefined4 *)(in_ECX + 0x20),local_5ac,uVar3);
  uVar4 = -(uint)(cVar2 != '\0') & unaff_EBP;
  uVar3 = *(uint *)(in_ECX + 0x28);
  if (uVar3 != uVar4) {
    if (uVar3 != 0) {
      InterlockedDecrement((LONG *)(uVar3 + 0xc));
    }
    *(uint *)(in_ECX + 0x28) = uVar4;
    if (uVar4 != 0) {
      InterlockedIncrement((LONG *)(uVar4 + 0xc));
    }
  }
  if (*(int *)(in_ECX + 0x28) == 0) {
    FUN_00434710(*(undefined4 *)(in_ECX + 0x20),auStack_11c);
    if (*(int *)(in_ECX + 0x24) == 0) {
      if (*(int *)(in_ECX + 0x20) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0042e8e0(*(int *)(in_ECX + 0x20),0xffffffff,1);
      }
    }
    else {
      uVar5 = FUN_0042ebc0(0,*(int *)(in_ECX + 0x24),0xffffffff,0);
    }
    FUN_00713a30();
    local_5ac[0] = &PTR_FUN_00a3690c;
    uStack_120 = 0;
    uStack_124 = 0;
    local_c = 0;
    cVar2 = FUN_006f9980(auStack_11c,uVar5);
    if (cVar2 != '\0') {
      iVar6 = FUN_00401f00(0x10);
      local_c = CONCAT31(local_c._1_3_,1);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_00439140(*(undefined4 *)(in_ECX + 0x20),local_5ac);
      }
      iVar1 = *(int *)(in_ECX + 0x28);
      if (iVar1 != iVar6) {
        if (iVar1 != 0) {
          InterlockedDecrement((LONG *)(iVar1 + 0xc));
        }
        *(int *)(in_ECX + 0x28) = iVar6;
        if (iVar6 != 0) {
          InterlockedIncrement((LONG *)(iVar6 + 0xc));
        }
      }
    }
    local_c = -1;
    FUN_00436420();
  }
  else {
    *(byte *)(in_ECX + 0x2c) = *(byte *)(in_ECX + 0x2c) | 1;
  }
  *unaff_FS_OFFSET = iStack_14;
  return;
}



void FUN_00439b20(byte param_1)

{
  QueuedHead_dtor();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00439b40(byte param_1)

{
  QueuedHelmet_dtor();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void ModelLoader_CancelPending_helper(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x30) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x30) + 0xc) = 6;
  }
  ModelLoader_CancelPending_helper2(param_1);
                    /* WARNING: Could not recover jumptable at 0x00439bc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(g_ModelLoader_singleton + 8) + 0x10))();
  return;
}



void FUN_00439bd0(byte param_1)

{
  FUN_00437f40();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00439bf0(byte param_1)

{
  FUN_00437c70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00439c10(undefined4 param_1)

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
  puStack_8 = &LAB_009ac883;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00430e00(3,"BackgroundCloneThread");
  *in_ECX = &PTR_FUN_00a37088;
  local_4 = 0;
  in_ECX[9] = 0;
  iVar2 = FUN_00401f00(0x1c,uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = LockFreeQueue_QueuedReference_ctor(param_1,8);
  }
  in_ECX[10] = uVar3;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00439ca0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a36e9c;
  FUN_00401f20(in_ECX[2]);
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a366e8;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00439ce0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a36ea8;
  FUN_00401f20(in_ECX[2]);
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a366f0;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00439d20(undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ac8a8;
  local_c = *unaff_FS_OFFSET;
  puVar2 = (undefined4 *)(DAT_00b30aac ^ (uint)&stack0xffffffec);
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = 0;
  local_4 = 0;
  cVar1 = (**(code **)(**(int **)(in_ECX + 0xc) + 4))(param_1,&local_10);
  if (cVar1 != '\0') {
    IOManager_TaskStateTransition(puVar2);
  }
  local_c = -1;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 2);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



void ModelLoader_CancelPendingForRefr(undefined4 param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int in_ECX;
  undefined4 unaff_ESI;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ac8e0;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  puVar3 = (undefined4 *)(DAT_00b30aac ^ (uint)&stack0xffffffe4);
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = 0;
  local_4 = 0;
  cVar2 = (**(code **)(**(int **)(in_ECX + 8) + 4))(param_1,&local_10);
  if (cVar2 != '\0') {
    IOManager_TaskStateTransition(unaff_ESI);
  }
  local_4 = 0;
  local_c = (undefined4 *)CONCAT31(local_c._1_3_,1);
  cVar2 = (**(code **)(**(int **)(in_ECX + 0x10) + 4))(param_1,&local_4);
  if (cVar2 != '\0') {
    IOManager_TaskStateTransition(local_c);
  }
  puVar1 = local_c;
  if (local_c != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(local_c + 2);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 2);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
  }
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



undefined4 FUN_00439eb0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  DWORD DVar5;
  undefined4 *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  bool bVar6;
  char unaff_retaddr;
  undefined4 local_48 [7];
  undefined4 uStack_2c;
  int iStack_24;
  byte bStack_18;
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ac908;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffac;
  *unaff_FS_OFFSET = (int)&local_c;
  local_48[0] = 0;
  cVar3 = (**(code **)(*(int *)*in_ECX + 4))(param_1,local_48,uVar4);
  iVar2 = g_IOManager_singleton;
  if (cVar3 == '\0') {
    DVar5 = GetCurrentThreadId();
    bVar6 = DVar5 != *(DWORD *)(iVar2 + 0x30);
    if (bVar6) {
      FUN_00432860();
    }
    FUN_00437250(param_1,0,param_1,unaff_retaddr == '\0',param_2,0);
    bStack_18 = bStack_18 | 0x20;
    local_c = 0;
    FUN_00439400();
    FUN_004395d0();
    if (bVar6) {
      FUN_00432890();
    }
    local_c = -1;
    if (iStack_24 != 0) {
      InterlockedDecrement((LONG *)(iStack_24 + 4));
    }
    FUN_00401f20(uStack_2c);
    FUN_00436e90();
    unaff_ESI = iStack_24;
  }
  if (unaff_ESI == 0) {
    *unaff_FS_OFFSET = iStack_14;
    return 0;
  }
  InterlockedIncrement((LONG *)(unaff_ESI + 4));
  uVar1 = *(undefined4 *)(unaff_ESI + 8);
  *unaff_FS_OFFSET = iStack_14;
  return uVar1;
}



int FUN_00439ff0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  DWORD DVar4;
  int in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  bool bVar5;
  undefined4 local_40 [7];
  undefined4 uStack_24;
  int iStack_1c;
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ac938;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_40[0] = 0;
  cVar2 = (**(code **)(**(int **)(in_ECX + 4) + 4))(param_1,local_40,uVar3);
  iVar1 = g_IOManager_singleton;
  if (cVar2 == '\0') {
    DVar4 = GetCurrentThreadId();
    bVar5 = DVar4 != *(DWORD *)(iVar1 + 0x30);
    if (bVar5) {
      FUN_00432860();
    }
    FUN_004377d0(param_1,0);
    local_c = 0;
    FUN_00439940();
    FUN_004378f0();
    if (bVar5) {
      FUN_00432890();
    }
    local_c = -1;
    if (iStack_1c != 0) {
      InterlockedDecrement((LONG *)(iStack_1c + 0xc));
    }
    FUN_00401f20(uStack_24);
    FUN_00436e90();
    unaff_ESI = iStack_1c;
  }
  if (unaff_ESI != 0) {
    InterlockedIncrement((LONG *)(unaff_ESI + 0xc));
  }
  *unaff_FS_OFFSET = iStack_14;
  return unaff_ESI;
}



void FUN_0043a100(int param_1)

{
  char *_Str1;
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *local_4;
  
  if (param_1 != 0) {
    _Str1 = *(char **)(param_1 + 8);
    local_4 = in_ECX;
    if ((_Str1 != (char *)0x0) && (iVar3 = __strnicmp(_Str1,"FlameNode",9), iVar3 == 0)) {
      iVar6 = 0;
      iVar3 = _isdigit((int)_Str1[9]);
      if (iVar3 == 0) {
        iVar3 = _isalpha((int)_Str1[9]);
        if (iVar3 != 0) {
          iVar3 = _tolower((int)_Str1[9]);
          iVar6 = FUN_0046b250(iVar3 + -0x39);
        }
      }
      else {
        iVar6 = FUN_0046b250(_Str1[9] + -0x12);
      }
      local_4 = (undefined4 *)0x0;
      iVar3 = *(int *)*in_ECX;
      uVar4 = (**(code **)(*(int *)(iVar6 + 0x24) + 0x14))(&local_4);
      cVar2 = (**(code **)(iVar3 + 4))(uVar4);
      if (cVar2 == '\0') {
        uVar10 = 1;
        uVar9 = 0;
        uVar8 = 0;
        uVar4 = (**(code **)(*(int *)(iVar6 + 0x24) + 0x14))(0,0,1);
        iVar3 = FUN_00439eb0(uVar4,uVar8,uVar9,uVar10);
        if (iVar3 != 0) {
          iVar3 = *(int *)*in_ECX;
          uVar4 = (**(code **)(*(int *)(iVar6 + 0x24) + 0x14))(&local_4);
          cVar2 = (**(code **)(iVar3 + 4))(uVar4);
          if (cVar2 != '\0') {
            InterlockedDecrement(local_4 + 1);
          }
        }
      }
    }
    uVar7 = 0;
    if (*(short *)(param_1 + 0xb6) != 0) {
      if (*(short *)(param_1 + 0xb6) == 0) goto LAB_0043a23c;
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0xb0) + uVar7 * 4);
        if ((piVar1 != (int *)0x0) &&
           (puVar5 = (undefined4 *)(**(code **)(*piVar1 + 4))(), puVar5 == &DAT_00b3fab0)) {
          FUN_0043a100(piVar1);
        }
LAB_0043a23c:
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(param_1 + 0xb6));
    }
  }
  return;
}



uint FUN_0043a260(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int *in_ECX;
  
  piVar1 = (int *)(*(int *)(*in_ECX + 0xc) + param_1 * 4);
  do {
    do {
      in_ECX[4] = (int)piVar1;
      in_ECX[5] = *piVar1;
      *(uint *)in_ECX[2] = in_ECX[5] & 0xfffffffe;
      uVar4 = *(uint *)in_ECX[4];
    } while (uVar4 != (in_ECX[5] & 0xfffffffeU));
    while( true ) {
      if ((in_ECX[5] & 0xfffffffeU) == 0) {
        return uVar4 & 0xffffff00;
      }
      in_ECX[6] = *(int *)((in_ECX[5] & 0xfffffffeU) + 8);
      *(uint *)in_ECX[1] = in_ECX[6] & 0xfffffffe;
      if (in_ECX[6] != *(int *)((in_ECX[5] & 0xfffffffeU) + 8)) break;
      uVar2 = *(undefined4 *)(in_ECX[5] & 0xfffffffe);
      uVar4 = in_ECX[5] & 0xfffffffe;
      if (*(uint *)in_ECX[4] != uVar4) break;
      if ((in_ECX[6] & 1U) == 0) {
        cVar3 = (**(code **)(*(int *)*in_ECX + 0x28))(uVar2,param_2);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*(int *)*in_ECX + 0x2c))(uVar2,param_2);
          return uVar4;
        }
        in_ECX[4] = (in_ECX[5] & 0xfffffffeU) + 8;
        *(uint *)in_ECX[3] = in_ECX[5] & 0xfffffffe;
      }
      else {
        uVar5 = InterlockedCompareExchange((LONG *)in_ECX[4],in_ECX[6] & 0xfffffffe,uVar4);
        if (uVar5 != uVar4) break;
        uVar4 = in_ECX[5] & 0xfffffffe;
        *(undefined4 *)(uVar4 + 4) = 0;
        *(int *)(uVar4 + 4) = in_ECX[7];
        in_ECX[8] = in_ECX[8] + 1;
        in_ECX[7] = uVar4;
        if (in_ECX[8] == *(int *)(*in_ECX + 0x10)) {
          FUN_00435fe0();
        }
      }
      in_ECX[5] = in_ECX[6];
      uVar4 = in_ECX[6] & 0xfffffffe;
      *(uint *)in_ECX[2] = uVar4;
    }
  } while( true );
}



void FUN_0043a3f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *_Dst;
  uint uVar5;
  LONG LVar6;
  int *in_ECX;
  undefined4 *local_c;
  int local_8;
  
  iVar1 = **(int **)(*in_ECX + 0x14);
  uVar3 = iVar1 * 3;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar3 * 4));
  _memcpy(_Dst,*(void **)(*in_ECX + 4),iVar1 * 0xc);
  iVar1 = in_ECX[7];
  local_c = (undefined4 *)0x0;
  local_8 = 0;
  puVar4 = local_c;
  do {
    if (iVar1 == 0) {
      FUN_00401f20(_Dst);
      in_ECX[7] = (int)puVar4;
      in_ECX[8] = local_8;
      return;
    }
    local_c = (undefined4 *)in_ECX[7];
    in_ECX[7] = local_c[1];
    uVar5 = 0;
    if (uVar3 != 0) {
      do {
        if (local_c == *(undefined4 **)((int)_Dst + uVar5 * 4)) {
          local_8 = local_8 + 1;
          local_c[1] = puVar4;
          goto LAB_0043a4a3;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
    }
    local_c[1] = 0;
    (**(code **)(*(int *)*in_ECX + 0x20))(*local_c);
    puVar2 = (undefined4 *)local_c[1];
    if (((puVar2 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar2 + 2), LVar6 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    FUN_00401f20(local_c);
    local_c = puVar4;
LAB_0043a4a3:
    iVar1 = in_ECX[7];
    puVar4 = local_c;
  } while( true );
}



uint FUN_0043a4e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  
  while( true ) {
    while( true ) {
      uVar1 = FUN_0043a260(param_1,*param_2);
      if ((char)uVar1 != '\0') break;
      uVar1 = in_ECX[5];
      if ((uVar1 & 0xfffffffe) == 0) goto LAB_0043a5c1;
      if ((*(uint *)((in_ECX[5] & 0xfffffffe) + 8) & 1) == 0) {
        (**(code **)(*(int *)*in_ECX + 0x20))(*param_2);
        uVar2 = (**(code **)(*(int *)*in_ECX + 0x24))(*(undefined4 *)(in_ECX[5] & 0xfffffffe));
        *param_2 = uVar2;
        uVar1 = in_ECX[5];
        *param_3 = *(undefined4 *)((uVar1 & 0xfffffffe) + 4);
        uVar1 = CONCAT31((int3)((uVar1 & 0xfffffffe) >> 8),1);
        if ((*(uint *)((in_ECX[5] & 0xfffffffe) + 8) & 1) == 0) goto LAB_0043a5c3;
        *param_3 = 0;
      }
    }
    if ((in_ECX[6] & 0xfffffffe) == 0) break;
    if ((*(uint *)((in_ECX[6] & 0xfffffffe) + 8) & 1) == 0) {
      (**(code **)(*(int *)*in_ECX + 0x20))(*param_2);
      uVar2 = (**(code **)(*(int *)*in_ECX + 0x24))(*(undefined4 *)(in_ECX[6] & 0xfffffffe));
      *param_2 = uVar2;
      uVar1 = in_ECX[6];
      *param_3 = *(undefined4 *)((uVar1 & 0xfffffffe) + 4);
      uVar1 = CONCAT31((int3)((uVar1 & 0xfffffffe) >> 8),1);
      if ((*(uint *)((in_ECX[6] & 0xfffffffe) + 8) & 1) == 0) goto LAB_0043a5c3;
      *param_3 = 0;
    }
  }
LAB_0043a5c1:
  uVar1 = uVar1 & 0xffffff00;
LAB_0043a5c3:
  *(undefined4 *)in_ECX[1] = 0;
  *(undefined4 *)in_ECX[2] = 0;
  *(undefined4 *)in_ECX[3] = 0;
  return uVar1;
}



void FUN_0043a5f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LPVOID pvVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ac968;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  pvVar3 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
  if (pvVar3 == (LPVOID)0x0) {
    ThreadSpecificInterfaceManager_AddInterface(in_ECX);
  }
  FUN_00436710(&param_1);
  puVar1 = param_1;
  local_4 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(param_1 + 2);
    if (LVar4 == 0) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0043a680(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *in_ECX;
  
  do {
    cVar1 = FUN_0055ef30(param_1,param_2);
    if (cVar1 == '\0') {
      uVar4 = 0;
      goto LAB_0043a755;
    }
    uVar2 = in_ECX[6] & 0xfffffffe;
    uVar3 = InterlockedCompareExchange
                      ((LONG *)((in_ECX[5] & 0xfffffffeU) + 8),in_ECX[6] & 0xfffffffeU | 1,uVar2);
  } while (uVar3 != uVar2);
  uVar3 = in_ECX[5];
  uVar2 = InterlockedCompareExchange((LONG *)in_ECX[4],uVar2,uVar3 & 0xfffffffe);
  if (uVar2 == (uVar3 & 0xfffffffe)) {
    uVar2 = in_ECX[5] & 0xfffffffe;
    *(undefined4 *)(uVar2 + 4) = 0;
    *(int *)(uVar2 + 4) = in_ECX[7];
    in_ECX[8] = in_ECX[8] + 1;
    in_ECX[7] = uVar2;
    if (in_ECX[8] == *(int *)(*in_ECX + 0x10)) {
      FUN_00435fe0();
    }
  }
  else {
    FUN_0055ef30(param_1,param_2);
  }
  uVar4 = 1;
LAB_0043a755:
  *(undefined4 *)in_ECX[1] = 0;
  *(undefined4 *)in_ECX[2] = 0;
  *(undefined4 *)in_ECX[3] = 0;
  return uVar4;
}



uint FUN_0043a780(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = FUN_0043a260(param_1,param_2);
  if (((char)uVar1 != '\0') &&
     (*param_3 = *(undefined4 *)((*(uint *)(in_ECX + 0x14) & 0xfffffffe) + 4),
     (*(uint *)((*(uint *)(in_ECX + 0x14) & 0xfffffffe) + 8) & 1) != 0)) {
    uVar1 = uVar1 & 0xffffff00;
  }
  **(undefined4 **)(in_ECX + 4) = 0;
  **(undefined4 **)(in_ECX + 8) = 0;
  **(undefined4 **)(in_ECX + 0xc) = 0;
  return uVar1;
}



void FUN_0043a7e0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ac9a3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x1c) == 0) {
    puVar3 = (undefined4 *)FUN_00401f00(0x14,uVar2);
    local_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      local_10 = puVar3;
      FUN_00435b50(5,10);
      *puVar3 = &PTR_FUN_00a36acc;
      puVar3[4] = 0;
    }
    *(undefined4 **)(in_ECX + 0x1c) = puVar3;
  }
  local_10 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    InterlockedIncrement(param_1 + 2);
  }
  iVar1 = *(int *)(in_ECX + 0x1c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  local_4 = 1;
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004360a0(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_004362f0(uVar2,&local_10);
  local_4 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(param_1 + 2);
    if (LVar4 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0043a8d0(byte param_1)

{
  FUN_00439780();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0043a8f0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_006ff9c0(&DAT_00a7d0ec);
    if ((((iVar1 != 0) && (param_1 != 0)) && ((*(uint *)(iVar1 + 0xc) >> 4 & 1) != 0)) &&
       ((*(uint *)(param_1 + 8) >> 7 & 1) == 0)) {
      FUN_0043a100(param_2);
    }
  }
  return;
}



undefined4 * FUN_0043a940(undefined4 *param_1)

{
  int *Comperand;
  int Exchange;
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int *piVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  bool bVar5;
  undefined4 *local_14;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ac9e1;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_14 = (undefined4 *)0x0;
  local_4 = 1;
  do {
    while( true ) {
      do {
        do {
          Comperand = *(int **)(*in_ECX + 4);
          *(int **)in_ECX[1] = Comperand;
        } while (Comperand != *(int **)(*in_ECX + 4));
        piVar4 = *(int **)(*in_ECX + 8);
        Exchange = *Comperand;
        *(int *)in_ECX[2] = Exchange;
      } while (Comperand != *(int **)(*in_ECX + 4));
      if (Exchange == 0) {
        *(undefined4 *)in_ECX[1] = 0;
        *param_1 = 0;
        goto LAB_0043aabc;
      }
      if (Comperand != piVar4) break;
      InterlockedCompareExchange((LONG *)(*in_ECX + 8),Exchange,(LONG)piVar4);
    }
    if (local_14 != *(undefined4 **)(Exchange + 4)) {
      if (local_14 != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(local_14 + 2);
        if (LVar3 == 0) {
          (**(code **)*local_14)(1,uVar2);
        }
      }
      local_14 = *(undefined4 **)(Exchange + 4);
      if (local_14 != (undefined4 *)0x0) {
        InterlockedIncrement(local_14 + 2);
      }
    }
    piVar4 = (int *)InterlockedCompareExchange((LONG *)(*in_ECX + 4),Exchange,(LONG)Comperand);
  } while (piVar4 != Comperand);
  (**(code **)(*(int *)*in_ECX + 8))();
  puVar1 = *(undefined4 **)(Exchange + 4);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 2);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(Exchange + 4) = 0;
  }
  *(undefined4 *)in_ECX[1] = 0;
  *(undefined4 *)in_ECX[2] = 0;
  FUN_004329a0(Comperand);
  bVar5 = local_14 == (undefined4 *)0x0;
  *param_1 = local_14;
  if (!bVar5) {
    InterlockedIncrement(local_14 + 2);
LAB_0043aabc:
    bVar5 = local_14 == (undefined4 *)0x0;
  }
  local_4 = local_4 & 0xffffff00;
  if (!bVar5) {
    LVar3 = InterlockedDecrement(local_14 + 2);
    if (LVar3 == 0) {
      (**(code **)*local_14)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_0043ab20(int param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *in_ECX;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 2);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(int *)(param_1 + 4) = in_ECX[7];
  in_ECX[8] = in_ECX[8] + 1;
  in_ECX[7] = param_1;
  if (in_ECX[8] == *(int *)(*in_ECX + 0x10)) {
    FUN_0043a3f0();
  }
  return;
}



uint FUN_0043ab80(int param_1,undefined4 *param_2,undefined4 param_3,char param_4)

{
  uint in_EAX;
  LPVOID pvVar1;
  uint uVar2;
  int in_ECX;
  
  if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
    return in_EAX & 0xffffff00;
  }
  while( true ) {
    if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
      pvVar1 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
      if (pvVar1 == (LPVOID)0x0) {
        ThreadSpecificInterfaceManager_AddInterface(in_ECX);
      }
      uVar2 = FUN_00435f10(*(undefined4 *)(param_1 + 4),param_1 + 8,param_3);
      *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 1;
    }
    else {
      pvVar1 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
      if (pvVar1 == (LPVOID)0x0) {
        ThreadSpecificInterfaceManager_AddInterface(in_ECX);
      }
      uVar2 = FUN_0043a4e0(*(undefined4 *)(param_1 + 4),param_1 + 8,param_3);
    }
    if ((char)uVar2 != '\0') {
      *param_2 = *(undefined4 *)(param_1 + 8);
      return uVar2;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    if (*(uint *)(in_ECX + 8) <= *(uint *)(param_1 + 4)) {
      *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 2;
      return uVar2;
    }
    if (param_4 == '\0') break;
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfe;
  }
  return uVar2;
}



void FUN_0043ac40(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x18);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 2);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x18) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 2);
    }
  }
  if (*(int *)(in_ECX + 0x18) != 0) {
    FUN_0043a7e0(in_ECX);
  }
  return;
}



void FUN_0043aca0(undefined4 param_1)

{
  LPVOID pvVar1;
  int in_ECX;
  
  pvVar1 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
  if (pvVar1 == (LPVOID)0x0) {
    ThreadSpecificInterfaceManager_AddInterface(in_ECX);
  }
  FUN_0043a680(param_1,&stack0x00000008);
  return;
}



void FUN_0043ace0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  return;
}



void FUN_0043ae10(int param_1)

{
  DWORD DVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 uVar8;
  
  puVar2 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x174))();
  *(undefined4 *)(param_1 + 0x54) = *puVar2;
  *(undefined4 *)(param_1 + 0x58) = puVar2[1];
  *(undefined4 *)(param_1 + 0x5c) = puVar2[2];
  puVar2 = (undefined4 *)FUN_004d7af0();
  puVar6 = (undefined4 *)(param_1 + 0x30);
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  fVar7 = (float10)(**(code **)(**(int **)(in_ECX + 0x20) + 0xec))();
  *(float *)(param_1 + 0x60) = (float)ABS(fVar7);
  DVar1 = *(DWORD *)(DAT_00b33398 + 0x10);
  DVar3 = GetCurrentThreadId();
  if (DVar1 != DVar3) {
    puVar2 = (undefined4 *)FUN_00401f00();
    if (puVar2 != (undefined4 *)0x0) {
      uVar4 = *(undefined4 *)(in_ECX + 0x20);
      FUN_00436500();
      *puVar2 = &PTR_FUN_00a3698c;
      puVar2[6] = uVar4;
      puVar2[7] = param_1;
      InterlockedIncrement((LONG *)(param_1 + 4));
    }
    FUN_004bcb70();
    if (*(int *)(in_ECX + 0x30) != 0) {
      InterlockedIncrement((LONG *)(*(int *)(in_ECX + 0x30) + 8));
    }
    FUN_0043a5f0();
    return;
  }
  FUN_004d7d10();
  uVar8 = 0;
  uVar4 = FUN_006ecc80(0);
  FUN_00441ef0(*(undefined4 *)(in_ECX + 0x20),uVar4,uVar8);
  FUN_004d7010();
  return;
}



void FUN_0043af30(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  
  uVar2 = FUN_006ecc80();
  cVar1 = FUN_0043f8c0(uVar2);
  if (cVar1 != '\0') {
    iVar3 = 0;
    if (DAT_00b350d5 != '\0') {
      cVar1 = FUN_00977c50();
      while (cVar1 == '\0') {
        if (2 < iVar3) goto LAB_0043afce;
        Sleep(5);
        iVar3 = iVar3 + 1;
        if (DAT_00b350d5 == '\0') break;
        cVar1 = FUN_00977c50();
      }
    }
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 400))();
    if (((cVar1 == '\0') && (cVar1 = FUN_00441e90(), cVar1 != '\0')) &&
       ((*(int **)(in_ECX + 0x20))[0xf] == 0)) {
      (**(code **)(**(int **)(in_ECX + 0x20) + 0x14c))();
      FUN_0075fa90();
    }
LAB_0043afce:
    InterlockedIncrement((LONG *)(in_ECX + 8));
    FUN_0043a5f0();
  }
  return;
}



void FUN_0043b000(void)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(int *)(in_ECX + 0xc) != 6) {
    uVar1 = *(uint *)(*(int *)(in_ECX + 0x20) + 8);
    if (((uVar1 >> 0xb & 1) == 0) && ((uVar1 >> 5 & 1) == 0)) {
      uVar4 = 0;
      uVar3 = FUN_006ecc80(0);
      cVar2 = FUN_0043f8c0(uVar3,uVar4);
      if (cVar2 != '\0') {
        if (*(int *)(in_ECX + 0x28) != 0) {
          FUN_0043a8f0(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(*(int *)(in_ECX + 0x28) + 8));
        }
        uVar3 = *(undefined4 *)(in_ECX + 0x2c);
        uVar5 = 0;
        uVar4 = FUN_006ecc80(uVar3,0);
        FUN_00441ef0(*(undefined4 *)(in_ECX + 0x20),uVar4,uVar3,uVar5);
      }
    }
    (**(code **)(**(int **)(g_ModelLoader_singleton + 8) + 0x10))(*(undefined4 *)(in_ECX + 0x20));
  }
  return;
}



void FUN_0043b090(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 6) {
    FUN_0043b000();
    if (*(int *)(in_ECX + 0x38) != 0) {
      FUN_004353d0(*(int *)(in_ECX + 0x20),*(undefined4 *)(*(int *)(in_ECX + 0x20) + 0x104));
    }
    if (*(int *)(in_ECX + 0x3c) != 0) {
      FUN_00437b60();
      return;
    }
  }
  return;
}



undefined4 FUN_0043b0d0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  LONG LVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  int *piStack_4;
  
  piStack_4 = (int *)0xffffffff;
  puStack_8 = &LAB_009aca2e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar2 = (int *)(**(code **)(*DAT_00b35300 + 4))(param_1,0,uVar1);
  piStack_4 = piVar2;
  if (piVar2 != (int *)0x0) {
    InterlockedIncrement(piVar2 + 1);
  }
  local_c = 0;
  if (piVar2 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x30);
    local_c = CONCAT31(local_c._1_3_,3);
    if (iVar3 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_00437050(param_1,unaff_retaddr);
    }
    if (piVar2 != (int *)0x0) {
      InterlockedIncrement(piVar2 + 2);
    }
    local_c._0_1_ = 4;
    FUN_0043ac40(param_1);
    (**(code **)(*piVar2 + 0x20))();
    local_c = (uint)local_c._1_3_ << 8;
    LVar5 = InterlockedDecrement(piVar2 + 2);
    if (LVar5 == 0) {
      puVar7 = (undefined4 *)*piVar2;
LAB_0043b255:
      (*(code *)*puVar7)(1);
    }
  }
  else {
    if (param_1 == 0) {
      local_c = -1;
      LVar5 = InterlockedDecrement(piVar2 + 1);
      if (LVar5 == 0) {
        (**(code **)*piVar2)(1);
      }
      uVar6 = 0;
      goto LAB_0043b25d;
    }
    iVar3 = FUN_00401f00(0x30);
    local_c = CONCAT31(local_c._1_3_,1);
    if (iVar3 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_004371a0(piVar2,unaff_retaddr);
    }
    if (piVar4 != (int *)0x0) {
      InterlockedIncrement(piVar4 + 2);
    }
    local_c._0_1_ = 2;
    FUN_0043ac40(param_1);
    (**(code **)(*piVar4 + 0x28))();
    local_c = (uint)local_c._1_3_ << 8;
    LVar5 = InterlockedDecrement(piVar4 + 2);
    if (LVar5 == 0) {
      (**(code **)*piVar4)(1);
    }
    local_c = -1;
    LVar5 = InterlockedDecrement(piVar2 + 1);
    if (LVar5 == 0) {
      puVar7 = (undefined4 *)*piVar2;
      goto LAB_0043b255;
    }
  }
  uVar6 = 1;
LAB_0043b25d:
  *unaff_FS_OFFSET = unaff_EBX;
  return uVar6;
}



undefined4 *
FUN_0043b280(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  LONG LVar6;
  undefined4 *puVar7;
  undefined4 *in_ECX;
  int unaff_EBP;
  LONG *lpAddend;
  int *unaff_FS_OFFSET;
  int local_14 [3];
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009aca84;
  local_14[2] = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)(local_14 + 2);
  local_14[1] = 0;
  local_14[0] = 0;
  iVar4 = *(int *)*in_ECX;
  uVar3 = (**(code **)(*param_2 + 0x14))(local_14,uVar2);
  cVar1 = (**(code **)(iVar4 + 4))(uVar3);
  if (cVar1 == '\0') {
    iVar4 = FUN_00401f00(0x38);
    local_14[2] = 2;
    if (iVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_00437350(param_2,param_1,param_3,param_4,param_5,param_6);
    }
    if (piVar5 != (int *)0x0) {
      InterlockedIncrement(piVar5 + 2);
    }
    local_14[2] = 3;
    FUN_0043ac40(param_2);
    (**(code **)(*piVar5 + 0x20))();
    puVar7 = puStack_4;
    lpAddend = piVar5 + 2;
    *puStack_4 = piVar5;
    InterlockedIncrement(lpAddend);
  }
  else {
    if ((char)param_6 != '\0') {
      InterlockedIncrement((LONG *)(unaff_EBP + 4));
    }
    if (param_2 == (int *)0x0) {
      *puStack_4 = 0;
      puVar7 = puStack_4;
      goto LAB_0043b408;
    }
    iVar4 = FUN_00401f00(0x38);
    if (iVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_00437430(unaff_EBP,param_1);
    }
    if (piVar5 != (int *)0x0) {
      InterlockedIncrement(piVar5 + 2);
    }
    local_14[2] = 1;
    FUN_0043ac40(param_2);
    (**(code **)(*piVar5 + 0x28))();
    puVar7 = puStack_4;
    lpAddend = piVar5 + 2;
    *puStack_4 = piVar5;
    InterlockedIncrement(lpAddend);
  }
  local_14[2] = local_14[2] & 0xffffff00;
  LVar6 = InterlockedDecrement(lpAddend);
  if (LVar6 == 0) {
    (**(code **)*piVar5)(1);
  }
LAB_0043b408:
  *unaff_FS_OFFSET = local_14[0];
  return puVar7;
}



undefined4 *
FUN_0043b420(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  LONG LVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int local_14 [3];
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009aca84;
  local_14[2] = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)(local_14 + 2);
  local_14[1] = 0;
  local_14[0] = 0;
  cVar1 = (**(code **)(*(int *)*in_ECX + 4))(param_2,local_14,uVar2);
  if (cVar1 == '\0') {
    iVar3 = FUN_00401f00(0x38);
    local_14[2] = 2;
    if (iVar3 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_00437250(param_2,param_1,param_3,param_4,param_5,param_6);
    }
    if (piVar4 != (int *)0x0) {
      InterlockedIncrement(piVar4 + 2);
    }
    local_14[2] = 3;
    FUN_0043ac40(param_2);
    (**(code **)(*piVar4 + 0x20))();
    puVar6 = puStack_4;
    *puStack_4 = piVar4;
    InterlockedIncrement(piVar4 + 2);
    local_14[2] = local_14[2] & 0xffffff00;
    LVar5 = InterlockedDecrement(piVar4 + 2);
    if (LVar5 == 0) {
      (**(code **)*piVar4)(1);
    }
  }
  else {
    if ((char)param_6 != '\0') {
      InterlockedIncrement((LONG *)(unaff_EBP + 4));
    }
    if (param_2 == 0) {
      *puStack_4 = 0;
      puVar6 = puStack_4;
    }
    else {
      iVar3 = FUN_00401f00(0x38);
      if (iVar3 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_00437430(unaff_EBP,param_1);
      }
      if (piVar4 != (int *)0x0) {
        InterlockedIncrement(piVar4 + 2);
      }
      local_14[2] = 1;
      FUN_0043ac40(param_2);
      (**(code **)(*piVar4 + 0x28))();
      puVar6 = puStack_4;
      *puStack_4 = piVar4;
      InterlockedIncrement(piVar4 + 2);
      local_14[2] = local_14[2] & 0xffffff00;
      LVar5 = InterlockedDecrement(piVar4 + 2);
      if (LVar5 == 0) {
        (**(code **)*piVar4)(1);
      }
    }
  }
  *unaff_FS_OFFSET = local_14[0];
  return puVar6;
}



undefined4 *
FUN_0043b5e0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  LONG LVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  int unaff_EBP;
  LONG *lpAddend;
  int *unaff_FS_OFFSET;
  int local_14 [3];
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009acad4;
  local_14[2] = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)(local_14 + 2);
  local_14[1] = 0;
  local_14[0] = 0;
  cVar1 = (**(code **)(*(int *)*in_ECX + 4))(param_2,local_14,uVar2);
  if (cVar1 == '\0') {
    iVar3 = FUN_00401f00(0x38);
    local_14[2] = 2;
    if (iVar3 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_00437250(param_2,param_2,param_4,param_5,param_6,param_7);
    }
    if (piVar4 != (int *)0x0) {
      InterlockedIncrement(piVar4 + 2);
    }
    local_14[2] = 3;
    FUN_0043ac40(param_3);
    (**(code **)(*piVar4 + 0x30))(param_1);
    puVar6 = puStack_4;
    lpAddend = piVar4 + 2;
    *puStack_4 = piVar4;
    InterlockedIncrement(lpAddend);
  }
  else {
    if ((char)param_7 != '\0') {
      InterlockedIncrement((LONG *)(unaff_EBP + 4));
    }
    if (param_3 == 0) {
      *puStack_4 = 0;
      puVar6 = puStack_4;
      goto LAB_0043b760;
    }
    iVar3 = FUN_00401f00(0x38);
    if (iVar3 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_00437430(unaff_EBP,param_2);
    }
    if (piVar4 != (int *)0x0) {
      InterlockedIncrement(piVar4 + 2);
    }
    local_14[2] = 1;
    FUN_0043ac40(param_3);
    (**(code **)(*piVar4 + 0x28))();
    puVar6 = puStack_4;
    lpAddend = piVar4 + 2;
    *puStack_4 = piVar4;
    InterlockedIncrement(lpAddend);
  }
  local_14[2] = local_14[2] & 0xffffff00;
  LVar5 = InterlockedDecrement(lpAddend);
  if (LVar5 == 0) {
    (**(code **)*piVar4)(1);
  }
LAB_0043b760:
  *unaff_FS_OFFSET = local_14[0];
  return puVar6;
}



int * FUN_0043b780(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009acb14;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  iVar2 = FUN_00401f00(0x40,uVar1);
  local_4 = 1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004376a0(param_2,param_3,param_4,param_6);
  }
  *param_1 = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 8));
  }
  local_4 = 0;
  FUN_0043ac40(param_5);
  (**(code **)(*(int *)*param_1 + 0x20))();
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



undefined4 FUN_0043b840(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  LONG LVar6;
  int in_ECX;
  int unaff_ESI;
  undefined4 unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009acb4b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = 0;
  cVar1 = (**(code **)(**(int **)(in_ECX + 4) + 4))(param_1,&local_10,uVar2);
  if (cVar1 == '\0') {
    iStack_4 = FUN_00401f00(0x30);
    local_c = 1;
    if (iStack_4 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_004377d0(param_1,unaff_retaddr);
    }
    if (piVar4 != (int *)0x0) {
      InterlockedIncrement(piVar4 + 2);
    }
    local_c = 2;
    FUN_0043ac40(param_1);
    pcVar5 = *(code **)(*piVar4 + 0x20);
  }
  else {
    if (param_1 == 0) {
      *unaff_FS_OFFSET = unaff_ESI;
      return 0;
    }
    iVar3 = FUN_00401f00(0x30);
    if (iVar3 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_00437890(unaff_EDI,unaff_retaddr);
    }
    if (piVar4 != (int *)0x0) {
      InterlockedIncrement(piVar4 + 2);
    }
    local_c = 0;
    FUN_0043ac40(param_1);
    pcVar5 = *(code **)(*piVar4 + 0x28);
  }
  (*pcVar5)();
  local_c = -1;
  LVar6 = InterlockedDecrement(piVar4 + 2);
  if (LVar6 == 0) {
    (**(code **)*piVar4)(1);
  }
  *unaff_FS_OFFSET = unaff_ESI;
  return 1;
}



undefined4
FUN_0043b990(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  uVar2 = FUN_00435580(param_2,param_5);
  uVar3 = FUN_004a2a30(param_2);
  if (param_5 == 0) {
    bVar4 = false;
  }
  else {
    cVar1 = FUN_004d6fd0();
    if (cVar1 != '\0') {
      uVar3 = 6;
    }
    if (*(int **)(param_5 + 0x1c) == (int *)0x0) {
      bVar4 = true;
    }
    else {
      cVar1 = (**(code **)(**(int **)(param_5 + 0x1c) + 0xf4))();
      bVar4 = cVar1 == '\0';
    }
  }
  FUN_0043b280(param_1,uVar2,param_3,param_4,uVar3,bVar4,1,0);
  return param_1;
}



undefined4 *
FUN_0043ba30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009acb89;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  puVar2 = (undefined4 *)FUN_00401f00(0x30,uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00436500(param_3);
    puVar2[6] = 0;
    puVar2[7] = 0;
    *puVar2 = &PTR_FUN_00a36ce4;
    puVar2[8] = param_2;
    puVar2[9] = 0;
    puVar2[10] = 0;
  }
  *param_1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar2 + 2);
  }
  local_4 = 0;
  FUN_0043ac40(param_4);
  (**(code **)(*(int *)*param_1 + 0x20))();
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



int * FUN_0043baf0(int *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009acbc9;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  puVar2 = (undefined4 *)FUN_00401f00();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00436500();
    puVar2[6] = 0;
    puVar2[8] = param_2;
    puVar2[7] = 0;
    *puVar2 = &PTR_FUN_00a36d2c;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = *(undefined4 *)(puVar2[8] + 0x150);
  }
  *param_1 = (int)puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar2 + 2);
  }
  local_4 = 0;
  if (*param_1 != 0) {
    InterlockedIncrement((LONG *)(*param_1 + 8));
  }
  cVar1 = (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))(*(undefined4 *)(param_2 + 0x150));
  if (cVar1 == '\0') {
    puVar2 = (undefined4 *)*param_1;
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 2);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *param_1 = 0;
    }
  }
  else {
    FUN_0043ac40(param_1);
    (**(code **)(*(int *)*param_1 + 0x20))();
  }
  *unaff_FS_OFFSET = unaff_EBX;
  return param_1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0043bc20(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                 char *param_5)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  LONG LVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *local_11c;
  uint local_118;
  uint *local_114;
  undefined4 *puStack_110;
  undefined4 local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_11c;
  local_118 = 0;
  local_114 = param_2;
  uVar10 = local_118;
  for (local_11c = param_1; local_11c != (undefined4 *)0x0; local_11c = (undefined4 *)local_11c[1])
  {
    pcVar5 = (char *)*local_11c;
    if (pcVar5 != (char *)0x0) {
      if (param_5 != (char *)0x0) {
        pcVar7 = param_5;
        do {
          cVar1 = *pcVar7;
          pcVar7[(int)(local_108 + -(int)param_5)] = cVar1;
          pcVar7 = pcVar7 + 1;
          pcVar3 = pcVar5;
        } while (cVar1 != '\0');
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        uVar4 = (int)pcVar3 - (int)pcVar5;
        pcVar7 = (char *)((int)&local_10c + 3);
        do {
          pcVar3 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar3 != '\0');
        for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar7 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar7 = pcVar7 + 1;
        }
        pcVar5 = local_108;
      }
      local_118 = uVar10;
      if (local_114 == (uint *)0x0) {
        FUN_0043b420(&puStack_110,pcVar5,param_3,param_4,0,0,1,0);
        puVar2 = puStack_110;
        if (((puStack_110 != (undefined4 *)0x0) &&
            (LVar6 = InterlockedDecrement(puStack_110 + 2), LVar6 == 0)) &&
           (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
      }
      else {
        if (uVar10 < *local_114) {
          uVar9 = *(undefined4 *)(local_114[1] + uVar10 * 4);
        }
        else {
          uVar9 = 0;
        }
        FUN_0043b5e0(&local_10c,pcVar5,uVar9,param_3,param_4,0,0,1,0);
        puVar2 = local_10c;
        if (((local_10c != (undefined4 *)0x0) &&
            (LVar6 = InterlockedDecrement(local_10c + 2), LVar6 == 0)) &&
           (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
      }
    }
    uVar10 = uVar10 + 1;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0043bda0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_110 [4];
  undefined4 local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_110;
  local_10c = param_3;
  while (param_1 != (undefined4 *)0x0) {
    pcVar2 = (char *)*param_1;
    if (pcVar2 == (char *)0x0) {
      param_1 = (undefined4 *)param_1[1];
    }
    else {
      pcVar4 = pcVar2;
      if (param_4 != (char *)0x0) {
        pcVar4 = param_4;
        do {
          cVar1 = *pcVar4;
          pcVar4[(int)(local_108 + -(int)param_4)] = cVar1;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar2;
        } while (cVar1 != '\0');
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        uVar6 = (int)pcVar5 - (int)pcVar2;
        pcVar4 = (char *)((int)&local_10c + 3);
        do {
          pcVar5 = pcVar4 + 1;
          pcVar4 = pcVar4 + 1;
        } while (*pcVar5 != '\0');
        pcVar5 = pcVar2;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar4 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar4 = pcVar4 + 1;
        }
        pcVar4 = local_108;
      }
      FUN_0043b840(pcVar4,param_2,local_10c);
      FUN_00401f20(pcVar2);
      puVar3 = (undefined4 *)param_1[1];
      if (puVar3 == (undefined4 *)0x0) {
        *param_1 = 0;
      }
      else {
        param_1[1] = puVar3[1];
        *param_1 = *puVar3;
        FUN_00401f20(puVar3);
      }
    }
  }
  return;
}



void FUN_0043beb0(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_24;
  int local_20;
  undefined **local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009acc00;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*in_ECX != 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_1c = &PTR_LAB_00a36e9c;
    local_4 = 0;
    do {
      local_24 = 0;
      local_20 = 0;
      cVar2 = FUN_0043ab80(&local_1c,&local_20,&local_24,1);
      iVar1 = local_24;
      if (((cVar2 != '\0') && (local_24 != 0)) && (*(short *)(local_24 + 4) == 0)) {
        (**(code **)(*(int *)*in_ECX + 0x10))(local_20);
        FUN_004349b0();
        FUN_00401f20(iVar1);
      }
    } while ((local_10 & 2) == 0);
    local_4 = 0xffffffff;
    FUN_00401f20(local_14);
  }
  if (in_ECX[1] != 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_1c = &PTR_LAB_00a36ea8;
    local_4 = 1;
    do {
      local_20 = 0;
      local_24 = 0;
      cVar2 = FUN_0043ab80(&local_1c,&local_24,&local_20,1);
      iVar1 = local_20;
      if (((cVar2 != '\0') && (local_20 != 0)) && (*(int *)(local_20 + 0xc) == 0)) {
        if (*(int *)(local_20 + 8) != 0) {
          iVar4 = FUN_0051ac70(uVar3);
          if (0x15 < iVar4) {
            iVar4 = FUN_0051ac70(uVar3);
            if (iVar4 < 0x1b) goto LAB_0043c003;
          }
        }
        (**(code **)(*(int *)in_ECX[1] + 0x10))(local_24);
        FUN_00436cb0();
        FUN_00401f20(iVar1);
      }
LAB_0043c003:
    } while ((local_10 & 2) == 0);
    FUN_00401f20(local_14);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0043c030(undefined4 param_1)

{
  LPVOID pvVar1;
  int in_ECX;
  
  pvVar1 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
  if (pvVar1 == (LPVOID)0x0) {
    ThreadSpecificInterfaceManager_AddInterface(in_ECX);
  }
  FUN_0043a940(param_1);
  return param_1;
}



uint FUN_0043c070(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  
  piVar1 = (int *)(*(int *)(*in_ECX + 0xc) + param_1 * 4);
  do {
    do {
      in_ECX[4] = (int)piVar1;
      in_ECX[5] = *piVar1;
      *(uint *)in_ECX[2] = in_ECX[5] & 0xfffffffe;
      uVar5 = *(uint *)in_ECX[4];
    } while (uVar5 != (in_ECX[5] & 0xfffffffeU));
    while( true ) {
      if ((in_ECX[5] & 0xfffffffeU) == 0) {
        return uVar5 & 0xffffff00;
      }
      in_ECX[6] = *(int *)((in_ECX[5] & 0xfffffffeU) + 8);
      *(uint *)in_ECX[1] = in_ECX[6] & 0xfffffffe;
      if (in_ECX[6] != *(int *)((in_ECX[5] & 0xfffffffeU) + 8)) break;
      uVar2 = *(undefined4 *)(in_ECX[5] & 0xfffffffe);
      uVar5 = in_ECX[5] & 0xfffffffe;
      if (*(uint *)in_ECX[4] != uVar5) break;
      if ((in_ECX[6] & 1U) == 0) {
        cVar4 = (**(code **)(*(int *)*in_ECX + 0x28))(uVar2,param_2);
        if (cVar4 != '\0') {
          uVar5 = (**(code **)(*(int *)*in_ECX + 0x2c))(uVar2,param_2);
          return uVar5;
        }
        in_ECX[4] = (in_ECX[5] & 0xfffffffeU) + 8;
        *(uint *)in_ECX[3] = in_ECX[5] & 0xfffffffe;
      }
      else {
        uVar6 = InterlockedCompareExchange((LONG *)in_ECX[4],in_ECX[6] & 0xfffffffe,uVar5);
        if (uVar6 != uVar5) break;
        uVar5 = in_ECX[5] & 0xfffffffe;
        puVar3 = *(undefined4 **)(uVar5 + 4);
        if (puVar3 != (undefined4 *)0x0) {
          LVar7 = InterlockedDecrement(puVar3 + 2);
          if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(1);
          }
          *(undefined4 *)(uVar5 + 4) = 0;
        }
        *(int *)(uVar5 + 4) = in_ECX[7];
        in_ECX[8] = in_ECX[8] + 1;
        in_ECX[7] = uVar5;
        if (in_ECX[8] == *(int *)(*in_ECX + 0x10)) {
          FUN_0043a3f0();
        }
      }
      in_ECX[5] = in_ECX[6];
      uVar5 = in_ECX[6] & 0xfffffffe;
      *(uint *)in_ECX[2] = uVar5;
    }
  } while( true );
}



undefined4 FUN_0043c220(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 uVar8;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009acc28;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = (int *)(*(int *)(*in_ECX + 0xc) + param_1 * 4);
LAB_0043c25b:
  do {
    in_ECX[4] = (int)piVar1;
    in_ECX[5] = *piVar1;
    *(uint *)in_ECX[2] = in_ECX[5] & 0xfffffffe;
  } while (*(uint *)in_ECX[4] != (in_ECX[5] & 0xfffffffeU));
LAB_0043c296:
  if ((in_ECX[5] & 0xfffffffeU) == 0) {
    uVar8 = 0;
LAB_0043c4a0:
    *unaff_FS_OFFSET = local_c;
    return uVar8;
  }
  in_ECX[6] = *(int *)((in_ECX[5] & 0xfffffffeU) + 8);
  *(uint *)in_ECX[1] = in_ECX[6] & 0xfffffffe;
  if (in_ECX[6] != *(int *)((in_ECX[5] & 0xfffffffeU) + 8)) goto LAB_0043c25b;
  puVar2 = *(undefined4 **)((in_ECX[5] & 0xfffffffeU) + 4);
  if (puVar2 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar2 + 2);
  }
  uVar5 = in_ECX[5] & 0xfffffffe;
  local_4 = 0;
  if (*(uint *)in_ECX[4] != uVar5) {
    local_4 = 0xffffffff;
    if (puVar2 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar2 + 2);
      if (LVar7 == 0) {
        (**(code **)*puVar2)(1,uVar4);
      }
    }
    goto LAB_0043c25b;
  }
  if ((in_ECX[6] & 1U) == 0) {
    if (puVar2 == (undefined4 *)*param_2) {
      local_4 = 0xffffffff;
      if (puVar2 != (undefined4 *)0x0) {
        LVar7 = InterlockedDecrement(puVar2 + 2);
        if (LVar7 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      uVar8 = 1;
      goto LAB_0043c4a0;
    }
    in_ECX[4] = (in_ECX[5] & 0xfffffffeU) + 8;
    *(uint *)in_ECX[3] = in_ECX[5] & 0xfffffffe;
  }
  else {
    uVar6 = InterlockedCompareExchange((LONG *)in_ECX[4],in_ECX[6] & 0xfffffffe,uVar5);
    if (uVar6 != uVar5) goto LAB_0043c441;
    uVar5 = in_ECX[5] & 0xfffffffe;
    puVar3 = *(undefined4 **)(uVar5 + 4);
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 2);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 *)(uVar5 + 4) = 0;
    }
    *(int *)(uVar5 + 4) = in_ECX[7];
    in_ECX[8] = in_ECX[8] + 1;
    in_ECX[7] = uVar5;
    if (in_ECX[8] == *(int *)(*in_ECX + 0x10)) {
      FUN_0043a3f0();
    }
  }
  in_ECX[5] = in_ECX[6];
  *(uint *)in_ECX[2] = in_ECX[6] & 0xfffffffe;
  local_4 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(puVar2 + 2);
    if (LVar7 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  goto LAB_0043c296;
LAB_0043c441:
  local_4 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(puVar2 + 2);
    if (LVar7 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  goto LAB_0043c25b;
}



void FUN_0043c4c0(void)

{
  int iVar1;
  int iVar2;
  uint *in_ECX;
  uint uVar3;
  
  uVar3 = 0;
  if (*in_ECX != 0) {
    do {
      iVar1 = *(int *)(in_ECX[2] + 4 + uVar3 * 8);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0x20);
        while (iVar2 != 0) {
          FUN_0043a3f0();
          iVar2 = *(int *)(iVar1 + 0x20);
        }
        FUN_00401f20(iVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *in_ECX);
  }
  FUN_00401f20(in_ECX[2]);
  TlsFree(in_ECX[1]);
  return;
}



void FUN_0043c530(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x18);
  if (param_1 != 0) {
    InterlockedIncrement((LONG *)(param_1 + 8));
  }
  FUN_0043a5f0();
  if (*(int *)(iVar1 + 0xc) == 0) {
    InterlockedIncrement((LONG *)(iVar1 + 0xc));
    ReleaseSemaphore(*(HANDLE *)(iVar1 + 0x14),1,(LPLONG)0x0);
  }
  return;
}



void FUN_0043c580(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  
  puVar1 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)ThreadSpecificInterfaceManager_AddInterface(in_ECX);
  }
  uVar3 = param_1;
  uVar2 = (**(code **)(*(int *)*puVar1 + 0x1c))(param_1,param_1,param_2);
  FUN_0043a780(uVar2,param_1,uVar3);
  return;
}



undefined4 FUN_0043c5d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int in_ECX;
  
  cVar2 = FUN_0043c070(param_1,param_2);
  if (cVar2 != '\0') {
    LFM_DoublyLinkedQueueInsert((*(uint *)(in_ECX + 0x14) & 0xfffffffe) + 4);
    if ((*(uint *)((*(uint *)(in_ECX + 0x14) & 0xfffffffe) + 8) & 1) != 0) {
      cVar2 = '\0';
    }
  }
  **(undefined4 **)(in_ECX + 4) = 0;
  **(undefined4 **)(in_ECX + 8) = 0;
  puVar1 = *(undefined4 **)(in_ECX + 0xc);
  *puVar1 = 0;
  return CONCAT31((int3)((uint)puVar1 >> 8),cVar2);
}



undefined4 FUN_0043c630(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  
  do {
    cVar1 = FUN_0043c220(param_1,param_2);
    if (cVar1 == '\0') {
      uVar4 = 0;
      goto LAB_0043c6e4;
    }
    uVar2 = *(uint *)(in_ECX + 0x18) & 0xfffffffe;
    uVar3 = InterlockedCompareExchange
                      ((LONG *)((*(uint *)(in_ECX + 0x14) & 0xfffffffe) + 8),
                       *(uint *)(in_ECX + 0x18) & 0xfffffffe | 1,uVar2);
  } while (uVar3 != uVar2);
  uVar3 = *(uint *)(in_ECX + 0x14) & 0xfffffffe;
  uVar2 = InterlockedCompareExchange(*(LONG **)(in_ECX + 0x10),uVar2,uVar3);
  if (uVar2 == uVar3) {
    FUN_0043ab20(*(uint *)(in_ECX + 0x14) & 0xfffffffe);
  }
  else {
    FUN_0043c220(param_1,param_2);
  }
  uVar4 = 1;
LAB_0043c6e4:
  **(undefined4 **)(in_ECX + 4) = 0;
  **(undefined4 **)(in_ECX + 8) = 0;
  **(undefined4 **)(in_ECX + 0xc) = 0;
  return uVar4;
}



void FUN_0043c820(void)

{
  undefined1 uVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *local_4;
  
  if (in_ECX[0xd] != 0) {
    iVar3 = 0x14;
    local_4 = in_ECX;
    do {
      if (*(int *)(in_ECX[0xd] + iVar3) != 0) {
        iVar4 = *(int *)(in_ECX[0xd] + iVar3);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = iVar4 + 0x18;
        }
        uVar9 = 0;
        uVar8 = 1;
        uVar7 = 0;
        uVar6 = 2;
        puVar5 = in_ECX;
        uVar1 = __allshr();
        FUN_0043b280(&local_4,iVar4,uVar1,puVar5,uVar6,uVar7,uVar8,uVar9);
        puVar5 = local_4;
        if (((local_4 != (undefined4 *)0x0) &&
            (LVar2 = InterlockedDecrement(local_4 + 2), LVar2 == 0)) &&
           (puVar5 != (undefined4 *)0x0)) {
          (**(code **)*puVar5)(1);
        }
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x1c);
  }
  (**(code **)(*g_IOManager_singleton + 0x3c))();
  return;
}



void FUN_0043c8c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  LONG LVar6;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009acc58;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = in_ECX;
  uVar3 = __allshr(uVar4);
  piVar5 = (int *)FUN_0043b280(&local_10,*(undefined4 *)(in_ECX[8] + 0x60),uVar3,in_ECX,3,0,1,0);
  puVar1 = (undefined4 *)in_ECX[9];
  local_4 = 0;
  if (puVar1 != (undefined4 *)*piVar5) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar1 + 2);
      if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *piVar5;
    in_ECX[9] = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 8));
    }
  }
  puVar1 = local_10;
  local_4 = 0xffffffff;
  if (local_10 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(local_10 + 2);
    if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  (**(code **)(*g_IOManager_singleton + 0x3c))();
  *unaff_FS_OFFSET = (int)local_10;
  return;
}



void FUN_0043c9b0(void)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  LONG LVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  uint uStack_14;
  undefined4 *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009acc88;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x170))(uVar4);
  piVar6 = (int *)FUN_00435580(uVar5,*(undefined4 *)(in_ECX + 0x20));
  if (piVar6 != (int *)0x0) {
    pcVar7 = (char *)(**(code **)(*piVar6 + 0x14))();
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    if (pcVar7 != pcVar1) {
      uVar2 = __allshr();
      uVar5 = FUN_0043b990(&puStack_10,uVar5,uVar2,in_ECX,*(undefined4 *)(in_ECX + 0x20));
      uStack_4 = 0;
      LFM_DoublyLinkedQueueInsert(uVar5);
      uStack_4 = 0xffffffff;
      if (puStack_10 != (undefined4 *)0x0) {
        LVar8 = InterlockedDecrement(puStack_10 + 2);
        if ((LVar8 == 0) && (puStack_10 != (undefined4 *)0x0)) {
          (**(code **)*puStack_10)(1);
        }
      }
      if (*(int *)(in_ECX + 0x24) == 0) {
        uVar5 = (**(code **)(*piVar6 + 0x14))();
        uStack_14 = 0;
        cVar3 = (**(code **)(*(int *)*g_ModelLoader_singleton + 4))(uVar5,&uStack_14);
        FUN_00435ab0(-(uint)(cVar3 != '\0') & uStack_14);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0043cae0(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  
  if ((*(int *)(in_ECX + 0xc) < 4) ||
     (((*(int *)(in_ECX + 0x1c) != 0 &&
       ((uint)*(ushort *)(*(int *)(in_ECX + 0x1c) + 0xc) !=
        *(uint *)(*(int *)(in_ECX + 0x1c) + 0x10))) || (*(int *)(in_ECX + 0xc) == 6)))) {
    return;
  }
  if ((*(int *)(in_ECX + 0x24) != 0) && (*(int *)(in_ECX + 0x28) == 0)) {
    FUN_00435ab0(*(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x28));
  }
  if ((*(int *)(in_ECX + 0x28) != 0) &&
     (cVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 400))(), cVar1 == '\0')) {
    uVar3 = 0;
    uVar2 = FUN_006ecc80(0);
    cVar1 = FUN_0043f8c0(uVar2,uVar3);
    if ((cVar1 != '\0') &&
       ((cVar1 = FUN_00441e90(*(undefined4 *)(in_ECX + 0x20)), cVar1 != '\0' &&
        (*(int *)(*(int *)(in_ECX + 0x20) + 0x3c) == 0)))) {
      FUN_0043c530(in_ECX);
      return;
    }
  }
  FUN_004bd750();
  return;
}



void FUN_0043cc20(void)

{
  LONG *lpAddend;
  undefined4 *puVar1;
  DWORD DVar2;
  LONG LVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  LONG *lpAddend_00;
  code *pcVar6;
  int *unaff_FS_OFFSET;
  undefined4 *local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009accc0;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  lpAddend = (LONG *)(in_ECX + 0x18);
  local_14 = in_ECX;
  do {
    pcVar6 = WaitForSingleObject_exref;
    lpAddend_00 = (LONG *)(local_14 + 0xc);
    DVar2 = WaitForSingleObject(*(HANDLE *)(local_14 + 0x14),0xffffffff);
    if (DVar2 != 0x102) {
      InterlockedDecrement(lpAddend_00);
    }
    iVar4 = local_14;
    InterlockedIncrement((LONG *)(local_14 + 0x24));
    FUN_0043c030(&local_18);
    local_4 = 0;
    if (local_18 == (undefined4 *)0x0) {
      DVar2 = WaitForSingleObject(*(HANDLE *)(in_ECX + 0x20),0xffffffff);
      if (DVar2 != 0x102) {
        InterlockedDecrement(lpAddend);
      }
      InterlockedIncrement(lpAddend);
      ReleaseSemaphore(*(HANDLE *)(in_ECX + 0x20),1,(LPLONG)0x0);
    }
    else {
      do {
        iVar4 = (*pcVar6)(*(undefined4 *)(in_ECX + 0x20),0xffffffff);
        if (iVar4 != 0x102) {
          InterlockedDecrement(lpAddend);
        }
        if (local_18[3] != 6) {
          FUN_0043af30();
        }
        piVar5 = (int *)FUN_0043c030(&local_10);
        puVar1 = local_18;
        local_4._0_1_ = 1;
        if (local_18 != (undefined4 *)*piVar5) {
          if (((local_18 != (undefined4 *)0x0) &&
              (LVar3 = InterlockedDecrement(local_18 + 2), LVar3 == 0)) &&
             (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          local_18 = (undefined4 *)*piVar5;
          if (local_18 != (undefined4 *)0x0) {
            InterlockedIncrement(local_18 + 2);
          }
        }
        puVar1 = local_10;
        local_4 = (uint)local_4._1_3_ << 8;
        if (((local_10 != (undefined4 *)0x0) &&
            (LVar3 = InterlockedDecrement(local_10 + 2), LVar3 == 0)) &&
           (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        InterlockedIncrement(lpAddend);
        ReleaseSemaphore(*(HANDLE *)(in_ECX + 0x20),1,(LPLONG)0x0);
        iVar4 = local_14;
        pcVar6 = WaitForSingleObject_exref;
      } while (local_18 != (undefined4 *)0x0);
    }
    InterlockedDecrement((LONG *)(iVar4 + 0x24));
    puVar1 = local_18;
    local_4 = 0xffffffff;
    if (((local_18 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(local_18 + 2), LVar3 == 0)
        ) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  } while( true );
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0043cde0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  LONG LVar6;
  char *pcVar7;
  undefined4 *puStack_120;
  undefined4 local_11c;
  undefined4 *puStack_114;
  undefined4 local_110;
  undefined1 auStack_10c [4];
  char acStack_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&puStack_120;
  local_110 = param_3;
  iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b03304,&PTR_PTR_00b0375c,0);
  if (iVar3 != 0) {
    local_11c = FUN_006899c0();
    pcVar4 = (char *)(**(code **)(*param_1 + 0x14))();
    pcVar7 = acStack_108;
    do {
      cVar1 = *pcVar4;
      *pcVar7 = cVar1;
      pcVar4 = pcVar4 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    pcVar7 = _strrchr(acStack_108,0x5c);
    if (pcVar7 != (char *)0x0) {
      pcVar7[1] = '\0';
    }
    FUN_0043bc20(local_11c,iVar3 + 0xf8,param_2,param_3,acStack_108);
    if (param_4 != 0) {
      local_11c = FUN_00485e00(param_4,iVar3 + 0x44);
      iVar5 = FUN_0048c870(iVar3,0xd,0);
      if (iVar5 != 0) {
        FUN_0043b990(&puStack_114,*(undefined4 *)(iVar5 + 8),param_2,local_110,param_4);
        if (puStack_114 != (undefined4 *)0x0) {
          puStack_120 = puStack_114;
          LVar6 = InterlockedDecrement(puStack_114 + 2);
          if ((LVar6 == 0) && (puStack_120 != (undefined4 *)0x0)) {
            (**(code **)*puStack_120)(1);
          }
        }
        FUN_00484470();
        FUN_00401f20(iVar5);
      }
      iVar5 = FUN_0048bda0(iVar3,auStack_10c,0xffffffff,0);
      if (iVar5 != 0) {
        FUN_0043b990(&puStack_120,*(undefined4 *)(iVar5 + 8),param_2,local_110,param_4);
        if (puStack_120 != (undefined4 *)0x0) {
          puStack_114 = puStack_120;
          LVar6 = InterlockedDecrement(puStack_120 + 2);
          if ((LVar6 == 0) && (puStack_114 != (undefined4 *)0x0)) {
            (**(code **)*puStack_114)(1);
          }
        }
        FUN_00484470();
        FUN_00401f20(iVar5);
      }
      iVar3 = FUN_0048b9c0(iVar3,0);
      if (iVar3 != 0) {
        FUN_0043b990(&puStack_120,*(undefined4 *)(iVar3 + 8),param_2,local_110,param_4);
        puVar2 = puStack_120;
        if (puStack_120 != (undefined4 *)0x0) {
          LVar6 = InterlockedDecrement(puStack_120 + 2);
          if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
        }
        FUN_00484470();
        FUN_00401f20(iVar3);
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0043d000(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,char param_5,
                 char param_6)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *in_ECX;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 local_21c;
  int *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined2 uStack_208;
  char acStack_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_21c;
  local_21c = param_3;
  local_218 = param_1;
  pcVar2 = (char *)(**(code **)(*param_1 + 0x14))();
  pcVar10 = acStack_108;
  do {
    cVar1 = *pcVar2;
    *pcVar10 = cVar1;
    pcVar2 = pcVar2 + 1;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  pcVar10 = _strrchr(acStack_108,0x5c);
  if ((param_4 == (int *)0x0) || (cVar1 = (**(code **)(*param_4 + 0x198))(0), cVar1 == '\0')) {
    pcVar10 = _strrchr(acStack_108,0x5c);
    uStack_210 = 0;
    cVar1 = (**(code **)(*(int *)*in_ECX + 4))(acStack_108,&uStack_210);
    if ((((cVar1 == '\0') &&
         ((pcVar10 != (char *)0x0 && (iVar3 = __strnicmp(pcVar10 + 1,"Skeleton",8), iVar3 == 0))))
        || (param_6 != '\0')) && (param_5 != '\0')) {
      uVar5 = FUN_00435830(acStack_108,1);
      FUN_0043bda0(uVar5,param_2,local_21c,0);
      FUN_00401f20(uVar5);
    }
    iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b03304,&PTR_PTR_00b05050,0);
    if (iVar3 == 0) {
      return;
    }
    cVar1 = FUN_004688b0();
    if (cVar1 == '\0') {
      return;
    }
    piVar6 = (int *)FUN_00401f00(8);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      *piVar6 = 0;
      piVar6[1] = 0;
    }
    for (puVar7 = (undefined4 *)FUN_006899c0(); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[1]) {
      pcVar10 = (char *)*puVar7;
      pcVar2 = pcVar10;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      iVar3 = FUN_00401f00(pcVar2 + (1 - (int)(pcVar10 + 1)));
      iVar11 = iVar3 - (int)pcVar10;
      do {
        cVar1 = *pcVar10;
        pcVar10[iVar11] = cVar1;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      if (iVar3 != 0) {
        if (*piVar6 != 0) {
          piVar8 = (int *)FUN_00401f00(8);
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            *piVar8 = *piVar6;
            piVar8[1] = 0;
          }
          piVar8[1] = piVar6[1];
          piVar6[1] = (int)piVar8;
        }
        *piVar6 = iVar3;
      }
    }
    pcVar2 = (char *)(**(code **)(*local_218 + 0x14))();
    pcVar10 = (char *)&uStack_20c;
    do {
      cVar1 = *pcVar2;
      *pcVar10 = cVar1;
      pcVar2 = pcVar2 + 1;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    pcVar10 = _strrchr((char *)&uStack_20c,0x5c);
    if (pcVar10 != (char *)0x0) {
      builtin_strncpy(pcVar10,"\\SpecialAnims\\",0xf);
    }
    FUN_0043bda0(piVar6,param_2,local_21c,&uStack_20c);
  }
  else {
    if (pcVar10 == (char *)0x0) {
      return;
    }
    iVar3 = __strnicmp(pcVar10 + 1,"Skeleton",8);
    if (iVar3 != 0) {
      return;
    }
    uStack_20c = 0x61746144;
    uStack_208 = 0x5c;
    iVar3 = __strnicmp(acStack_108,"Meshes\\",7);
    if (iVar3 != 0) {
      pcVar10 = (char *)((int)&uStack_210 + 3);
      do {
        pcVar2 = pcVar10;
        pcVar10 = pcVar2 + 1;
      } while (pcVar2[1] != '\0');
      builtin_strncpy(pcVar2 + 1,"Meshes\\",8);
    }
    pcVar10 = acStack_108;
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar4 = (int)pcVar10 - (int)acStack_108;
    pcVar10 = (char *)((int)&uStack_210 + 3);
    do {
      pcVar2 = pcVar10 + 1;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar2 != '\0');
    pcVar2 = acStack_108;
    for (uVar9 = uVar4 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcVar10 = _strrchr((char *)&uStack_20c,0x5c);
    builtin_strncpy(pcVar10,"\\Idle.KF",9);
    uVar5 = FUN_00431970(&uStack_20c,acStack_108,1,0);
    FUN_0043bda0(uVar5,param_2,local_21c,0);
    FUN_00401f20(uVar5);
    builtin_strncpy(pcVar10,"\\Death.KF",10);
    piVar6 = (int *)FUN_00431970(&uStack_20c,acStack_108,1,0);
    FUN_0043bda0(piVar6,param_2,local_21c,0);
  }
  FUN_00401f20(piVar6);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0043d4d6) */
/* WARNING: Removing unreachable block (ram,0x0043d4e2) */
/* WARNING: Removing unreachable block (ram,0x0043d4e6) */

void FUN_0043d3f0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  LONG LVar5;
  int *unaff_FS_OFFSET;
  int *local_14;
  undefined4 *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009accf0;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0043c030(&local_14);
  local_4 = 0;
  while (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 0x14))(uVar3);
    piVar4 = (int *)FUN_0043c030(&puStack_10);
    piVar1 = local_14;
    local_4._0_1_ = 1;
    if (local_14 != (int *)*piVar4) {
      if (((local_14 != (int *)0x0) && (LVar5 = InterlockedDecrement(local_14 + 2), LVar5 == 0)) &&
         (piVar1 != (int *)0x0)) {
        (**(code **)*piVar1)(1);
      }
      local_14 = (int *)*piVar4;
      if (local_14 != (int *)0x0) {
        InterlockedIncrement(local_14 + 2);
      }
    }
    puVar2 = puStack_10;
    local_4 = (uint)local_4._1_3_ << 8;
    if (((puStack_10 != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(puStack_10 + 2), LVar5 == 0)) && (puVar2 != (undefined4 *)0x0)
       ) {
      (**(code **)*puVar2)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0043d510(char param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c392b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = *(undefined4 **)(in_ECX + 0x14);
  uVar7 = *puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    FUN_004330a0(uVar3);
    FUN_00401f20(puVar5);
  }
  iVar6 = *(int *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 0x18) = 0;
  while (iVar6 != 0) {
    piVar1 = *(int **)(in_ECX + 4);
    puVar5 = (undefined4 *)piVar1[1];
    iVar6 = *piVar1;
    if (puVar5 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar5 + 2);
      if ((LVar4 == 0) && (puVar5 != (undefined4 *)0x0)) {
        (**(code **)*puVar5)(1);
      }
      piVar1[1] = 0;
    }
    iVar2 = *(int *)(in_ECX + 4);
    if (iVar2 != 0) {
      puVar5 = *(undefined4 **)(iVar2 + 4);
      if (((puVar5 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar5 + 2), LVar4 == 0))
         && (puVar5 != (undefined4 *)0x0)) {
        (**(code **)*puVar5)(1);
      }
      FUN_00401f20(iVar2);
    }
    *(int *)(in_ECX + 4) = iVar6;
  }
  if (param_1 == '\0') {
    puVar5 = (undefined4 *)FUN_00401f00(8);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0;
    }
    *(undefined4 **)(in_ECX + 4) = puVar5;
    *(undefined4 **)(in_ECX + 8) = puVar5;
    iVar6 = FUN_00401f00(0x10);
    uStack_4 = 0;
    if (iVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = ThreadSpecificInterfaceManager_ctor(uVar7);
    }
    *(undefined4 *)(in_ECX + 0x14) = uVar7;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_0043d630(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  LPVOID pvVar4;
  LONG LVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009abfb8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  pvVar4 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
  if (pvVar4 == (LPVOID)0x0) {
    ThreadSpecificInterfaceManager_AddInterface(in_ECX);
  }
  uVar2 = FUN_0043c630(param_1,&param_2);
  puVar1 = param_2;
  local_4 = 0xffffffff;
  if (param_2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(param_2 + 2);
    if (LVar5 == 0) {
      (**(code **)*puVar1)(1,uVar3);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}



void FUN_0043d770(void)

{
  char *pcVar1;
  int iVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 *puVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  LONG LVar12;
  int iVar13;
  undefined4 uVar14;
  int *in_ECX;
  undefined4 *puVar15;
  int *unaff_FS_OFFSET;
  int *piVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 *puVar21;
  int local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *puStack_24;
  undefined1 local_20 [4];
  undefined1 local_1c [16];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009acd18;
  local_c = *unaff_FS_OFFSET;
  uVar9 = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = *(ushort *)(in_ECX[9] + 0x20);
  bVar5 = false;
  if (uVar3 == 0xffff) {
    pcVar10 = *(char **)(in_ECX[9] + 0x1c);
    pcVar1 = pcVar10 + 1;
    do {
      cVar7 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar7 != '\0');
    uVar11 = (int)pcVar10 - (int)pcVar1;
  }
  else {
    uVar11 = (uint)uVar3;
  }
  if ((uVar11 != 0) && (cVar7 = FUN_004157f0(uVar9), cVar7 == '\0')) {
    if (in_ECX[9] == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = in_ECX[9] + 0x18;
    }
    uVar8 = __allshr();
    FUN_0043b280(&local_30,iVar13,uVar8,in_ECX,0,0,1,0);
    puVar15 = local_30;
    if (((local_30 != (undefined4 *)0x0) &&
        (LVar12 = InterlockedDecrement(local_30 + 2), LVar12 == 0)) &&
       (puVar15 != (undefined4 *)0x0)) {
      (**(code **)*puVar15)(1);
    }
    bVar5 = true;
  }
  FUN_00415eb0();
  if (in_ECX[8] == 0) {
    local_34 = 0;
  }
  else {
    local_34 = in_ECX[8] + 0xc;
  }
  if ((*(int *)(local_34 + 8) != 0) || (*(int *)(local_34 + 4) != 0)) {
    for (; local_34 != 0; local_34 = *(int *)(local_34 + 8) + -4) {
      puVar15 = *(undefined4 **)(*(int *)(local_34 + 4) + 0x1c);
      local_30 = puVar15;
      if (((puVar15[0x16] & 0x70000) != 0) && ((!bVar5 || (cVar7 = FUN_00415790(), cVar7 == '\0'))))
      {
        iVar13 = FUN_0046b250(puVar15[0x18]);
        if (iVar13 != 0) {
          uVar9 = puVar15[0x16];
          if ((uVar9 >> 0x10 & 1) == 0) {
            if ((uVar9 >> 0x11 & 1) == 0) {
              if ((uVar9 >> 0x12 & 1) != 0) {
                if (*(char *)(iVar13 + 4) == '%') {
                  FUN_00469690();
                  puVar21 = local_1c;
                  uVar17 = 1;
                  local_4 = 0;
                  uVar14 = FUN_005e1fd0(1,puVar21);
                  FUN_0046cde0(uVar14,uVar17,puVar21);
                  iVar13 = FUN_00469c70(0);
                  local_4 = 0xffffffff;
                  FUN_0046a010();
                }
                if (iVar13 != 0) {
                  if (*(char *)(iVar13 + 4) == '#') {
                    uVar14 = FUN_005234f0(1,1);
                    uVar17 = 0;
                    piVar16 = in_ECX;
                    uVar8 = __allshr();
                    FUN_0043bc20(uVar14,0,uVar8,piVar16,uVar17);
                    FUN_004526e0();
                    FUN_00401f20(uVar14);
                  }
                  else if (*(char *)(iVar13 + 4) == '$') {
                    uVar18 = 1;
                    uVar17 = 1;
                    uVar14 = 0;
                    iVar2 = iVar13 + 0xac;
                    piVar16 = in_ECX;
                    uVar8 = __allshr();
                    FUN_0043d000(iVar2,uVar8,piVar16,uVar14,uVar17,uVar18);
                    uVar8 = __allshr();
                    uVar19 = 0;
                    uVar18 = 1;
                    uVar17 = 1;
                    uVar14 = FUN_004a2a30(iVar13,1,1,0);
                    FUN_0043b280(local_20,iVar2,uVar8,in_ECX,uVar14,uVar17,uVar18,uVar19);
                    FUN_004bddc0();
                    uVar14 = 0;
                    piVar16 = in_ECX;
                    uVar8 = __allshr();
                    FUN_0043cde0(iVar2,uVar8,piVar16,uVar14);
                    puVar15 = local_30;
                  }
                }
              }
            }
            else if (*(char *)(iVar13 + 4) == '\x14') {
              uVar9 = __allshr();
              uVar20 = 0;
              uVar19 = 1;
              uVar18 = 0;
              uVar9 = uVar9 & 0xff;
              uVar14 = FUN_004a2a30(iVar13,0,1,0);
              piVar16 = in_ECX;
              uVar17 = FUN_00469290(0);
              FUN_0043b280(&local_28,uVar17,uVar9,piVar16,uVar14,uVar18,uVar19,uVar20);
              puVar15 = local_28;
              if (((local_28 != (undefined4 *)0x0) &&
                  (LVar12 = InterlockedDecrement(local_28 + 2), LVar12 == 0)) &&
                 (puVar15 != (undefined4 *)0x0)) {
                (**(code **)*puVar15)(1);
              }
              uVar9 = __allshr();
              uVar20 = 0;
              uVar19 = 1;
              uVar18 = 0;
              uVar9 = uVar9 & 0xff;
              uVar14 = FUN_004a2a30(iVar13,0,1,0);
              piVar16 = in_ECX;
              uVar17 = FUN_00469290(1);
              FUN_0043b280(&puStack_24,uVar17,uVar9,piVar16,uVar14,uVar18,uVar19,uVar20);
              puVar6 = puStack_24;
              puVar15 = local_30;
              if (((puStack_24 != (undefined4 *)0x0) &&
                  (LVar12 = InterlockedDecrement(puStack_24 + 2), puVar15 = local_30, LVar12 == 0))
                 && (puVar6 != (undefined4 *)0x0)) {
                (**(code **)*puVar6)(1);
                puVar15 = local_30;
              }
            }
          }
          else if (*(char *)(iVar13 + 4) == '!') {
            if (*(ushort *)(iVar13 + 0x38) == 0xffff) {
              pcVar10 = *(char **)(iVar13 + 0x34);
              pcVar1 = pcVar10 + 1;
              do {
                cVar7 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (cVar7 != '\0');
              uVar9 = (int)pcVar10 - (int)pcVar1;
            }
            else {
              uVar9 = (uint)*(ushort *)(iVar13 + 0x38);
            }
            if (uVar9 != 0) {
              uVar8 = __allshr();
              uVar19 = 0;
              uVar18 = 1;
              uVar17 = 0;
              uVar14 = FUN_004a2a30(iVar13,0,1,0);
              FUN_0043b280(&local_2c,iVar13 + 0x30,uVar8,in_ECX,uVar14,uVar17,uVar18,uVar19);
              puVar6 = local_2c;
              if (((local_2c != (undefined4 *)0x0) &&
                  (LVar12 = InterlockedDecrement(local_2c + 2), LVar12 == 0)) &&
                 (puVar6 != (undefined4 *)0x0)) {
                (**(code **)*puVar6)(1);
              }
            }
          }
        }
        cVar7 = FUN_00415780();
        if (((cVar7 == '\0') && (cVar7 = FUN_00415790(), cVar7 == '\0')) &&
           (((uint)puVar15[0x16] >> 0x12 & 1) != 0)) {
          DAT_00b33518 = DAT_00b33518 + 1;
        }
        FUN_00415e50();
      }
      if (*(int *)(local_34 + 8) == 0) break;
    }
  }
  pcVar4 = *(code **)(*in_ECX + 0x28);
  in_ECX[3] = 5;
  (*pcVar4)();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0043dc00(void)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  LONG LVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puStack_14;
  undefined4 *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009acd50;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x170))(uVar2);
  iVar4 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x168))();
  if (iVar4 == 0) {
    iVar4 = FUN_00523170(*(undefined4 *)(in_ECX + 0x20));
    if (iVar4 == 0) goto LAB_0043dd2a;
  }
  FUN_005268d0(*(undefined4 *)(in_ECX + 0x20),iVar4);
  uVar1 = __allshr();
  uVar5 = FUN_004788e0(&puStack_14,uVar1,in_ECX);
  uStack_4 = 0;
  LFM_DoublyLinkedQueueInsert(uVar5);
  uStack_4 = 0xffffffff;
  if (puStack_14 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puStack_14 + 2);
    if ((LVar6 == 0) && (puStack_14 != (undefined4 *)0x0)) {
      (**(code **)*puStack_14)(1);
    }
  }
  uVar1 = __allshr();
  uVar5 = FUN_0043ba30(&puStack_10,iVar3,uVar1,in_ECX);
  uStack_4 = 1;
  LFM_DoublyLinkedQueueInsert(uVar5);
  uStack_4 = 0xffffffff;
  if (puStack_10 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puStack_10 + 2);
    if ((LVar6 == 0) && (puStack_10 != (undefined4 *)0x0)) {
      (**(code **)*puStack_10)(1);
    }
  }
LAB_0043dd2a:
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + 0xac;
  }
  uVar5 = *(undefined4 *)(in_ECX + 0x20);
  uVar8 = 0;
  uVar7 = 0;
  uVar1 = __allshr();
  FUN_0043d000(iVar3,uVar1,in_ECX,uVar5,uVar7,uVar8);
  FUN_005e4dd0();
  FUN_0043c9b0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0043dd80(void)

{
  undefined1 uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x170))();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + 0xac;
  }
  uVar4 = *(undefined4 *)(in_ECX + 0x20);
  uVar6 = 0;
  uVar5 = 1;
  iVar3 = in_ECX;
  uVar1 = __allshr();
  FUN_0043d000(iVar2,uVar1,iVar3,uVar4,uVar5,uVar6);
  uVar4 = *(undefined4 *)(in_ECX + 0x20);
  uVar1 = __allshr();
  FUN_0043cde0(iVar2,uVar1,in_ECX,uVar4);
  FUN_005e4dd0();
  FUN_0043c9b0();
  return;
}



void FUN_0043de00(void)

{
  undefined1 uVar1;
  undefined4 extraout_var;
  
  uVar1 = __allshr();
  FUN_00662f60(uVar1,extraout_var);
  FUN_0043dc00();
  return;
}



void FUN_0043de30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  LONG LVar7;
  int *unaff_FS_OFFSET;
  undefined4 *local_20;
  undefined **local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  iVar1 = param_1;
  puStack_8 = &LAB_009acd80;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c = &PTR_FUN_00a366f8;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  do {
    param_1 = 0;
    local_20 = (undefined4 *)0x0;
    local_4 = CONCAT31(local_4._1_3_,1);
    cVar4 = FUN_00642d90(&local_1c,&param_1,&local_20,1);
    uVar2 = param_1;
    if (cVar4 != '\0') {
      iVar6 = FUN_006ecc80(uVar5);
      if (iVar6 == iVar1) {
        ModelLoader_CancelPendingForRefr(uVar2);
      }
    }
    puVar3 = local_20;
    local_4 = local_4 & 0xffffff00;
    if (local_20 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(local_20 + 2);
      if (LVar7 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  } while ((local_10 & 2) == 0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0043df10(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  LONG LVar7;
  int *unaff_FS_OFFSET;
  int *local_28;
  undefined4 local_24 [2];
  undefined **local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009acdb0;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c = &PTR_FUN_00a366f8;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  do {
    local_24[0] = 0;
    local_28 = (int *)0x0;
    local_4 = CONCAT31(local_4._1_3_,1);
    cVar2 = FUN_00642d90(&local_1c,local_24,&local_28,1);
    piVar1 = local_28;
    if (cVar2 != '\0') {
      iVar4 = FUN_006ecc80(uVar3);
      if (iVar4 != 0) {
        uVar5 = __allshr();
        uVar6 = FUN_00440c80(iVar4,0);
        if ((uVar5 & 0xff) != uVar6) {
          (**(code **)(*piVar1 + 0x1c))(uVar6);
        }
      }
    }
    local_4 = local_4 & 0xffffff00;
    if (piVar1 != (int *)0x0) {
      LVar7 = InterlockedDecrement(piVar1 + 2);
      if (LVar7 == 0) {
        (**(code **)*piVar1)(1);
      }
    }
  } while ((local_10 & 2) == 0);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0043e000(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  LONG LVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined4 *local_24;
  undefined4 local_20;
  undefined **local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009acde0;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c = &PTR_FUN_00a366f8;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  do {
    local_20 = 0;
    local_24 = (undefined4 *)0x0;
    local_4._0_1_ = 1;
    cVar2 = FUN_00642d90(&local_1c,&local_20,&local_24,1);
    if (cVar2 != '\0') {
      iVar4 = FUN_006ecc80(uVar3);
      puVar1 = local_24;
      if (iVar4 == param_1) {
        local_4 = (uint)local_4._1_3_ << 8;
        if (local_24 != (undefined4 *)0x0) {
          LVar5 = InterlockedDecrement(local_24 + 2);
          if (LVar5 == 0) {
            (**(code **)*puVar1)(1);
          }
        }
        uVar6 = 1;
        goto LAB_0043e0b2;
      }
    }
    puVar1 = local_24;
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_24 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(local_24 + 2);
      if (LVar5 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  } while ((local_10 & 2) == 0);
  uVar6 = 0;
LAB_0043e0b2:
  *unaff_FS_OFFSET = local_c;
  return uVar6;
}



void FUN_0043e0f0(void)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  undefined4 *local_44;
  undefined1 local_40 [4];
  undefined **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  byte local_30;
  undefined **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  byte local_20;
  undefined **ppuStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  byte bStack_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ace30;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffac;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00432860(uVar3);
  local_3c = &PTR_FUN_00a366f8;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_4 = 0;
  do {
    local_44 = (undefined4 *)0x0;
    local_4 = CONCAT31(local_4._1_3_,1);
    cVar2 = FUN_00642d90(&local_3c,local_40,&local_44,1);
    puVar1 = local_44;
    if (cVar2 != '\0') {
      IOManager_TaskStateTransition(local_44);
    }
    local_4 = local_4 & 0xffffff00;
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  } while ((local_30 & 2) == 0);
  local_2c = &PTR_FUN_00a36700;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  do {
    local_44 = (undefined4 *)0x0;
    local_4 = CONCAT31(local_4._1_3_,3);
    cVar2 = FUN_00642d90(&local_2c,local_40,&local_44,1);
    puVar1 = local_44;
    if (cVar2 != '\0') {
      IOManager_TaskStateTransition(local_44);
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  } while ((local_20 & 2) == 0);
  ppuStack_1c = &PTR_FUN_00a36708;
  uStack_18 = 0;
  uStack_14 = 0;
  bStack_10 = 0;
  do {
    local_44 = (undefined4 *)0x0;
    local_4 = CONCAT31(local_4._1_3_,5);
    cVar2 = FUN_00642d90(&ppuStack_1c,local_40,&local_44,1);
    puVar1 = local_44;
    if (cVar2 != '\0') {
      IOManager_TaskStateTransition(local_44);
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  } while ((bStack_10 & 2) == 0);
  (**(code **)(*g_IOManager_singleton + 0x48))();
  FUN_00432890();
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_0043e300(char *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int in_ECX;
  
  uVar3 = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    uVar3 = (int)cVar2 + uVar3 * 0x21;
    cVar2 = *pcVar1;
  }
  return uVar3 % *(uint *)(in_ECX + 8);
}



void FUN_0043e3e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  
  puVar1 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)ThreadSpecificInterfaceManager_AddInterface(in_ECX);
  }
  uVar3 = param_1;
  uVar2 = (**(code **)(*(int *)*puVar1 + 0x1c))(param_1,param_1,param_2);
  FUN_0043c5d0(uVar2,param_1,uVar3);
  return;
}



undefined1 FUN_0043e430(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  LONG LVar5;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009abfb8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  puVar3 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)ThreadSpecificInterfaceManager_AddInterface(in_ECX);
  }
  puVar8 = (undefined1 *)&param_2;
  puVar6 = param_1;
  puVar7 = param_1;
  uVar4 = (**(code **)(*(int *)*puVar3 + 0x1c))(param_1,param_1,puVar8,param_3,uVar2);
  uVar1 = FUN_00643000(uVar4,puVar6,puVar7,puVar8);
  puStack_8 = (undefined1 *)0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(param_1 + 2);
    if (LVar5 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  *unaff_FS_OFFSET = unaff_EBX;
  return uVar1;
}



void FUN_0043e4e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ace58;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a37104;
  local_4 = 0;
  FUN_0055f3c0(1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_LAB_00a36fcc;
  FUN_0055f3c0(1);
  FUN_00401f20(in_ECX[3],uVar1);
  FUN_00401f20(in_ECX[1]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0043e570(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ace88;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a3714c;
  local_4 = 0;
  FUN_0055f3c0(1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_LAB_00a3700c;
  FUN_0055f3c0(1);
  FUN_00401f20(in_ECX[3],uVar1);
  FUN_00401f20(in_ECX[1]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0043e600(byte param_1)

{
  FUN_0043e4e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined1 * FUN_0043e620(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  puVar3 = (undefined1 *)FUN_00401f00(pcVar2 + (1 - (int)(param_1 + 1)));
  cVar1 = *param_1;
  puVar5 = puVar3;
  while (cVar1 != '\0') {
    iVar4 = _tolower((int)cVar1);
    param_1 = param_1 + 1;
    *puVar5 = (char)iVar4;
    puVar5 = puVar5 + 1;
    cVar1 = *param_1;
  }
  *puVar5 = 0;
  return puVar3;
}



uint FUN_0043e720(char *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  uVar3 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    iVar2 = _tolower((int)cVar1);
    uVar3 = iVar2 + uVar3 * 0x21;
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return uVar3 % *(uint *)(in_ECX + 8);
}



void FUN_0043e8c0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aceb8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a37088;
  puVar1 = (undefined4 *)in_ECX[10];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_LAB_00a36ee0;
    FUN_0043d510(1);
    FUN_00401f20(puVar1[4]);
    FUN_00401f20(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_00430e70(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0043e950(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009acf2d;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    LockFreeMap_Model_ctor(4,0x3f1,0xc);
    *puVar2 = &PTR_LAB_00a37194;
  }
  local_4 = 0xffffffff;
  *in_ECX = puVar2;
  puVar2 = (undefined4 *)FUN_00401f00(0x1c,uVar1);
  local_4 = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    LockFreeMap_KFModel_ctor(4,0x3f1,0xc);
    *puVar2 = &PTR_LAB_00a371dc;
  }
  local_4 = 0xffffffff;
  in_ECX[1] = puVar2;
  iVar3 = FUN_00401f00(0x1c,uVar1);
  local_4 = 2;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00438930(3,0x25,0xc);
  }
  local_4 = 0xffffffff;
  in_ECX[2] = uVar4;
  iVar3 = FUN_00401f00(0x1c);
  local_4 = 3;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00438a30(3,0x25,0xc);
  }
  local_4 = 0xffffffff;
  in_ECX[3] = uVar4;
  iVar3 = FUN_00401f00(0x1c);
  local_4 = 4;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00438b20(3,0x25,0xc);
  }
  local_4 = 0xffffffff;
  in_ECX[4] = uVar4;
  iVar3 = FUN_00401f00(0x1c);
  local_4 = 5;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00438cf0(3,8);
  }
  local_4 = 0xffffffff;
  in_ECX[5] = uVar4;
  iVar3 = FUN_00401f00(0x2c);
  local_4 = 6;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00439c10(3);
  }
  local_4 = 0xffffffff;
  in_ECX[6] = uVar4;
  FUN_00430df0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0043eb10(byte param_1)

{
  FUN_0043e570();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0043eb52) */

void FUN_0043eb30(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  undefined1 local_8 [8];
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  uVar1 = in_ECX[3];
  if ((uint)in_ECX[4] < uVar1) {
    FUN_00984d5e();
  }
  FUN_00439050(local_8,in_ECX + 2,uVar1,in_ECX + 2,0);
  return;
}



void FUN_0043eb80(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int in_ECX;
  uint uVar9;
  int *unaff_FS_OFFSET;
  undefined4 uStack_c0;
  undefined1 auStack_bc [8];
  undefined1 auStack_b4 [32];
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [96];
  undefined1 auStack_30 [36];
  int local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009acf71;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff2c;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar9 = 0;
  if ((3 < *(int *)(in_ECX + 0xc)) &&
     (((*(int *)(in_ECX + 0x1c) == 0 ||
       ((uint)*(ushort *)(*(int *)(in_ECX + 0x1c) + 0xc) ==
        *(uint *)(*(int *)(in_ECX + 0x1c) + 0x10))) && (*(int *)(in_ECX + 0xc) != 6)))) {
    if ((((*(int *)(in_ECX + 0x30) != DAT_00b333c4) && (iVar6 = *(int *)(in_ECX + 0x24), iVar6 != 0)
         ) && (*(int *)(iVar6 + 0x28) != 0)) && (*(int *)(*(int *)(iVar6 + 0x28) + 8) != 0)) {
      piVar7 = (int *)(in_ECX + 0x28);
      uVar4 = FUN_004792f0(*(undefined4 *)(in_ECX + 0x28),
                           *(undefined4 *)(*(int *)(iVar6 + 0x28) + 8));
      FUN_0075fa90(uVar4);
      if (*(int *)(in_ECX + 0x2c) != 0) {
        if (*(short *)(*(int *)(in_ECX + 0x2c) + 0xb6) != 0) {
          do {
            piVar5 = (int *)FUN_00405790(uVar9);
            if (((piVar5 != (int *)0x0) && (iVar6 = (**(code **)(*piVar5 + 0xc))(), iVar6 != 0)) &&
               (piVar5[0x2e] != 0)) goto LAB_0043ee73;
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(ushort *)(*(int *)(in_ECX + 0x2c) + 0xb6));
        }
        iVar6 = *piVar7;
        if (iVar6 == 0) {
          uVar4 = FUN_00478a40();
          piVar7 = (int *)FUN_00405070(uVar4);
        }
        iVar1 = *piVar7;
        if (iVar6 == 0) {
          FUN_007016a0();
        }
        if ((iVar1 != 0) && (uVar9 = 0, *(short *)(*(int *)(in_ECX + 0x2c) + 0xb6) != 0)) {
          do {
            piVar7 = (int *)FUN_00405790(uVar9);
            if ((piVar7 != (int *)0x0) &&
               ((((piVar7[0x2d] != 0 &&
                  (piVar5 = *(int **)(*(int *)(in_ECX + 0x20) + 0x150), piVar5 != (int *)0x0)) &&
                 (iVar6 = (**(code **)(*piVar5 + 0x170))(), iVar6 != 0)) &&
                (iVar6 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x20) + 0x150) + 0x170))(),
                *(char *)(iVar6 + 4) == '#')))) {
              (**(code **)(**(int **)(*(int *)(in_ECX + 0x20) + 0x150) + 0x170))();
              _eh_vector_constructor_iterator_(auStack_90,0x18,4,FUN_0043eb30,FUN_0043ace0);
              uStack_4 = 0;
              puVar8 = (undefined4 *)FUN_00700790(auStack_bc);
              FUN_00405070(*puVar8);
              uStack_4 = CONCAT31(uStack_4._1_3_,1);
              FUN_007016a0();
              (**(code **)(*piVar7 + 0x8c))(uStack_c0);
              TESNPC_FaceGenFiller(auStack_94);
              FUN_00401020("QueuedHelmet::CheckFinished()");
              if ((DAT_00b120b4 == '\0') ||
                 (cVar2 = FUN_00558840(auStack_90,piVar7,0x3f800000,0), cVar2 != '\0')) {
                FUN_0070fd80(0xbfc90fdb);
                piVar5 = (int *)FUN_007100a0(auStack_30,auStack_b4);
                piVar7 = piVar7 + 0xc;
                for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *piVar7 = *piVar5;
                  piVar5 = piVar5 + 1;
                  piVar7 = piVar7 + 1;
                }
              }
              FUN_00401040();
              uStack_4 = uStack_4 & 0xffffff00;
              FUN_007016a0();
              uStack_4 = 0xffffffff;
              _eh_vector_destructor_iterator_(auStack_90,0x18,4,FUN_0043ace0);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(ushort *)(*(int *)(in_ECX + 0x2c) + 0xb6));
        }
      }
    }
LAB_0043ee73:
    if (*(int *)(in_ECX + 0x18) == 0) {
      FUN_004bd750(uVar3);
    }
  }
  FUN_00436f30();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0043eeb0(byte param_1)

{
  FUN_0043e8c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0043eed0(void)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int iStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined **ppuStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  byte bStack_30;
  undefined **ppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  byte bStack_20;
  undefined **ppuStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  byte bStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009acfb8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff9c;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b26d0(uVar3);
  iVar4 = (**(code **)(*(int *)*in_ECX + 0x38))();
  if (iVar4 != 0) {
    uVar5 = (**(code **)(*(int *)*in_ECX + 0x38))();
    FUN_004a7a60("ModelLoader still has %d NIF files.\r\n",uVar5);
    uStack_38 = 0;
    uStack_34 = 0;
    bStack_30 = 0;
    ppuStack_3c = &PTR_LAB_00a36e9c;
    uStack_4 = 0;
    do {
      uStack_54 = 0;
      iStack_58 = 0;
      cVar2 = FUN_0043ab80(&ppuStack_3c,&uStack_54,&iStack_58,1);
      iVar4 = iStack_58;
      if (cVar2 != '\0') {
        FUN_004a7a60("%3d - %s\r\n",*(undefined2 *)(iStack_58 + 4),uStack_54);
        FUN_004349b0();
        FUN_00401f20(iVar4);
      }
    } while ((bStack_30 & 2) == 0);
    FUN_00401f20(uStack_34);
    uStack_34 = 0;
    ppuStack_3c = &PTR_FUN_00a366e8;
  }
  uStack_18 = 0;
  uStack_14 = 0;
  bStack_10 = 0;
  ppuStack_1c = &PTR_LAB_00a36ea8;
  uStack_4 = 1;
  do {
    uStack_4c = 0;
    iStack_50 = 0;
    cVar2 = FUN_0043ab80(&ppuStack_1c,&uStack_4c,&iStack_50,1);
    iVar4 = iStack_50;
    if ((cVar2 != '\0') && (iStack_50 != 0)) {
      if (*(int *)(iStack_50 + 8) != 0) {
        cVar2 = FUN_0051aaa0();
        if (cVar2 == '\0') goto LAB_0043f02a;
      }
      (**(code **)(*(int *)in_ECX[1] + 0x10))(uStack_4c);
      FUN_00436cb0();
      FUN_00401f20(iVar4);
    }
LAB_0043f02a:
    if ((bStack_10 & 2) != 0) {
      iVar4 = (**(code **)(*(int *)in_ECX[1] + 0x38))();
      if (iVar4 != 0) {
        uVar5 = (**(code **)(*(int *)in_ECX[1] + 0x38))();
        FUN_004a7a60("ModelLoader still has %d KF files.\r\n",uVar5);
        uStack_28 = 0;
        uStack_24 = 0;
        bStack_20 = 0;
        ppuStack_2c = &PTR_LAB_00a36ea8;
        uStack_4 = CONCAT31(uStack_4._1_3_,2);
        do {
          uStack_44 = 0;
          iStack_48 = 0;
          cVar2 = FUN_0043ab80(&ppuStack_2c,&uStack_44,&iStack_48,1);
          iVar4 = iStack_48;
          if (cVar2 != '\0') {
            FUN_004a7a60("%3d - %s\r\n",*(undefined4 *)(iStack_48 + 0xc),uStack_44);
            FUN_00436cb0();
            FUN_00401f20(iVar4);
          }
        } while ((bStack_20 & 2) == 0);
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        FUN_00401f20(uStack_24);
        uStack_24 = 0;
        ppuStack_2c = &PTR_FUN_00a366f0;
      }
      if ((int *)*in_ECX != (int *)0x0) {
        (**(code **)(*(int *)*in_ECX + 0x3c))(1);
      }
      if ((int *)in_ECX[1] != (int *)0x0) {
        (**(code **)(*(int *)in_ECX[1] + 0x3c))(1);
      }
      puVar1 = (undefined4 *)in_ECX[5];
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &PTR_LAB_00a36fb4;
        FUN_0043d510(1);
        uStack_40 = puVar1[4];
        FUN_00401f20(uStack_40);
        FUN_00401f20(puVar1);
      }
      puVar1 = (undefined4 *)in_ECX[4];
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &PTR_LAB_00a36f74;
        FUN_00642e50(1);
        FUN_00401f20(puVar1[3]);
        uStack_40 = puVar1[1];
        FUN_00401f20(uStack_40);
        FUN_00401f20(puVar1);
      }
      puVar1 = (undefined4 *)in_ECX[3];
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &PTR_LAB_00a36f34;
        FUN_00642e50(1);
        FUN_00401f20(puVar1[3]);
        uStack_40 = puVar1[1];
        FUN_00401f20(uStack_40);
        FUN_00401f20(puVar1);
      }
      puVar1 = (undefined4 *)in_ECX[2];
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &PTR_LAB_00a36ef4;
        FUN_00642e50(1);
        FUN_00401f20(puVar1[3]);
        uStack_40 = puVar1[1];
        FUN_00401f20(uStack_40);
        FUN_00401f20(puVar1);
      }
      if ((undefined4 *)in_ECX[6] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)in_ECX[6])(1);
      }
      FUN_00401f20(uStack_14);
      *unaff_FS_OFFSET = local_c;
      return;
    }
  } while( true );
}



void FUN_0043f220(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x20) = 0x7fffffff;
  *(undefined4 *)(in_ECX + 0x24) = 0x7fffffff;
  *(undefined4 *)(in_ECX + 0x28) = 0x7fffffff;
  *(undefined4 *)(in_ECX + 0x2c) = 0x7fffffff;
  *(undefined4 *)(in_ECX + 0x48) = 0x7fffffff;
  *(undefined4 *)(in_ECX + 0x4c) = 0x7fffffff;
  return;
}



void FUN_0043f240(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 400))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x1c4))();
    FUN_00674e10(param_1);
  }
  return;
}



undefined4 FUN_0043f270(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x74);
}



void FUN_0043f2d0(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0xa9) = param_1;
  return;
}



void FUN_0043f2e0(void)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  LPCRITICAL_SECTION in_ECX;
  
  EnterCriticalSection(in_ECX);
  p_Var1 = (PRTL_CRITICAL_SECTION_DEBUG)GetCurrentThreadId();
  in_ECX[5].LockCount = in_ECX[5].LockCount + 1;
  in_ECX[5].DebugInfo = p_Var1;
  return;
}



void FUN_0043f300(void)

{
  LONG *pLVar1;
  LPCRITICAL_SECTION in_ECX;
  
  pLVar1 = &in_ECX[5].LockCount;
  *pLVar1 = *pLVar1 + -1;
  if (*pLVar1 == 0) {
    in_ECX[5].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  }
  LeaveCriticalSection(in_ECX);
  return;
}



void FUN_0043f320(float *param_1)

{
  float *in_ECX;
  
  *in_ECX = *in_ECX - *param_1;
  in_ECX[1] = in_ECX[1] - param_1[1];
  in_ECX[2] = in_ECX[2] - param_1[2];
  return;
}



float10 FUN_0043f350(void)

{
  float fVar1;
  float *in_ECX;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00982c30();
  fVar2 = (float10)(float)fVar2;
  if ((float10)1e-06 < fVar2) {
    fVar1 = (float)((float10)1 / fVar2);
    *in_ECX = fVar1 * *in_ECX;
    in_ECX[1] = fVar1 * in_ECX[1];
    in_ECX[2] = fVar1 * in_ECX[2];
    return fVar2;
  }
  *in_ECX = 0.0;
  in_ECX[1] = 0.0;
  in_ECX[2] = 0.0;
  return (float10)0.0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0043f3e0(float *param_1,float *param_2)

{
  *param_1 = *param_2 * 6.99904;
  param_1[1] = param_2[1] * 6.99904;
  param_1[2] = param_2[2] * 6.99904;
  return;
}



void FUN_0043f450(void)

{
  undefined1 auVar1 [16];
  float *in_ECX;
  uint uVar2;
  
  auVar1._4_4_ = -(uint)(0.001 < ABS(in_ECX[0x19] - DAT_00ba7a44));
  auVar1._0_4_ = -(uint)(0.001 < ABS(in_ECX[0x18] - DAT_00ba7a40));
  auVar1._8_4_ = -(uint)(0.001 < ABS(in_ECX[0x1a] - DAT_00ba7a48));
  auVar1._12_4_ = -(uint)(0.001 < ABS(in_ECX[0x1b] - fRam00ba7a4c));
  uVar2 = movmskps(in_ECX,auVar1);
  if ((uVar2 & 7) != 0) {
    in_ECX[4] = in_ECX[0x18] + *in_ECX;
    in_ECX[5] = in_ECX[0x19] + in_ECX[1];
    in_ECX[6] = in_ECX[0x1a] + in_ECX[2];
    in_ECX[7] = in_ECX[0x1b] + in_ECX[3];
  }
  return;
}



float10 FUN_0043f490(undefined4 param_1,undefined4 param_2)

{
  float10 fVar1;
  
  if (DAT_00b42d78 != (code *)0x0) {
    fVar1 = (float10)(*DAT_00b42d78)(param_1,param_2);
    return (float10)(float)fVar1;
  }
  return (float10)0.0;
}



undefined4 FUN_0043f4d0(void)

{
  if ((DAT_00b07050 != '\0') && (DAT_00b42f3e != '\0')) {
    return 1;
  }
  return 0;
}



void FUN_0043f500(byte param_1)

{
  FUN_0047ccd0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0043f530(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3738c;
  FUN_0070b810();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0043f560(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ad061;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(0x4c,uVar2);
  uVar7 = 0;
  local_4 = 0;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0049cd10();
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x54) = uVar4;
  uVar5 = DAT_00b06a2c;
  if (*(int *)(in_ECX + 0x58) == 0) {
    iVar3 = FUN_00401f00(0x38,uVar2);
    local_4 = 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0049d140();
    }
    *(undefined4 *)(in_ECX + 0x58) = uVar4;
    fVar1 = (float)(int)(DAT_00b06a2c << 0xb);
    local_4 = 0xffffffff;
    if ((int)(DAT_00b06a2c << 0xb) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    FUN_0049e610(fVar1,"Interior Water Node");
    FUN_00499ff0();
    uVar5 = DAT_00b06a2c;
  }
  for (; uVar7 < uVar5; uVar7 = uVar7 + 1) {
    for (uVar2 = 0; uVar2 < uVar5; uVar2 = uVar2 + 1) {
      iVar3 = FUN_00482150(uVar7,uVar2);
      if (*(int *)(iVar3 + 4) == 0) {
        iVar6 = FUN_00401f00(0x38);
        local_4 = 2;
        if (iVar6 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0049d140();
        }
        local_4 = 0xffffffff;
        *(undefined4 *)(iVar3 + 4) = uVar4;
        FUN_0049e610(0x45000000,"Water Node");
        FUN_00499ff0();
      }
      uVar5 = DAT_00b06a2c;
    }
  }
  if (((DAT_00b07050 != '\0') && (DAT_00b42f3e != '\0')) && (1 < DAT_00b42f48)) {
    uVar4 = FUN_0049a140(0x11,0,1);
    FUN_007b8940(uVar4);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0043f6e0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x54);
  if (iVar1 != 0) {
    FUN_0049cfb0();
    FUN_00401f20(iVar1);
  }
  iVar1 = *(int *)(in_ECX + 0x58);
  if (iVar1 != 0) {
    FUN_0049e500();
    FUN_00401f20(iVar1);
  }
  *(undefined4 *)(in_ECX + 0x58) = 0;
  return;
}



void FUN_0043f720(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_009828c0();
  *param_1 = uVar1;
  uVar1 = FUN_009828c0();
  param_1[3] = uVar1;
  uVar1 = FUN_009828c0();
  param_1[2] = uVar1;
  uVar1 = FUN_009828c0();
  param_1[1] = uVar1;
  return;
}



undefined4
FUN_0043f7c0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined1 local_10 [16];
  
  if (*(int *)(DAT_00b333a0 + 0x34) != 0) {
    return 0;
  }
  uVar2 = 0;
  FUN_0043f720(local_10,param_4);
  cVar1 = FUN_0047e320(local_10,param_1,param_2,param_3);
  if (cVar1 != '\0') {
    uVar2 = FUN_0044a270(*param_3,param_3[1],*(undefined4 *)(in_ECX + 0x74),0);
  }
  return uVar2;
}



undefined4 FUN_0043f840(float *param_1)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  if (*(int *)(in_ECX + 0x34) != 0) {
    return 1;
  }
  iVar2 = *(int *)(in_ECX + 0x20) - (DAT_00b06a2c >> 1);
  iVar1 = *(int *)(in_ECX + 0x24) - (DAT_00b06a2c >> 1);
  if ((((iVar2 <= (int)ROUND(*param_1) >> 0xc) &&
       ((int)ROUND(*param_1) >> 0xc < (int)(iVar2 + DAT_00b06a2c))) &&
      (iVar1 <= (int)ROUND(param_1[1]) >> 0xc)) &&
     ((int)ROUND(param_1[1]) >> 0xc < (int)(DAT_00b06a2c + iVar1))) {
    return 1;
  }
  return 0;
}



uint FUN_0043f8c0(int param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (int)*(char *)(param_1 + 0x26) - 2;
    switch(uVar1) {
    case 0:
    case 1:
    case 2:
      if (param_2 == '\0') goto switchD_0043f8d4_caseD_3;
      break;
    case 3:
    case 4:
switchD_0043f8d4_caseD_3:
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}



int * FUN_0043f900(void)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *local_c;
  uint local_4;
  
  uVar3 = DAT_00b06a2c >> 1;
  local_c = (int *)0x0;
  local_4 = 0;
  piVar2 = (int *)0x0;
  if (uVar3 != 0) {
    do {
      if (local_4 == 0) {
        piVar2 = (int *)FUN_00482150(uVar3,uVar3);
        if (((piVar2 != (int *)0x0) && (*piVar2 != 0)) &&
           ((*(byte *)(*piVar2 + 0x24) >> 1 & 1) != 0)) goto LAB_0043fa2c;
      }
      else {
        uVar1 = local_4 + uVar3;
        uVar4 = uVar3 - local_4;
        uVar5 = uVar4;
        while (((piVar2 = local_c, uVar5 <= uVar1 &&
                (((piVar2 = (int *)FUN_00482150(uVar5,uVar1), piVar2 == (int *)0x0 || (*piVar2 == 0)
                  ) || ((*(byte *)(*piVar2 + 0x24) >> 1 & 1) == 0)))) &&
               (((piVar2 = (int *)FUN_00482150(uVar5,uVar4), piVar2 == (int *)0x0 || (*piVar2 == 0))
                || ((*(byte *)(*piVar2 + 0x24) >> 1 & 1) == 0))))) {
          uVar5 = uVar5 + 1;
        }
        local_c = piVar2;
        uVar5 = uVar4;
        if (local_c != (int *)0x0) {
          return local_c;
        }
        do {
          uVar5 = uVar5 + 1;
          if (uVar1 <= uVar5) goto LAB_0043fa09;
          piVar2 = (int *)FUN_00482150(uVar4,uVar5);
        } while ((((piVar2 == (int *)0x0) || (*piVar2 == 0)) ||
                 ((*(byte *)(*piVar2 + 0x24) >> 1 & 1) == 0)) &&
                (((piVar2 = (int *)FUN_00482150(uVar1,uVar5), piVar2 == (int *)0x0 || (*piVar2 == 0)
                  ) || ((*(byte *)(*piVar2 + 0x24) >> 1 & 1) == 0))));
LAB_0043fa2c:
        local_c = piVar2;
      }
      if (local_c != (int *)0x0) {
        return local_c;
      }
LAB_0043fa09:
      local_4 = local_4 + 1;
      piVar2 = local_c;
    } while (local_4 < uVar3);
  }
  return piVar2;
}



int FUN_0043fa40(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  
  uVar1 = ((DAT_00b06a2c >> 1) - *(int *)(in_ECX + 0x24)) + param_2;
  uVar4 = ((DAT_00b06a2c >> 1) - *(int *)(in_ECX + 0x20)) + param_1;
  if ((((uVar4 < DAT_00b06a2c) && (uVar1 < DAT_00b06a2c)) && (-1 < (int)uVar4)) && (-1 < (int)uVar1)
     ) {
    piVar2 = (int *)FUN_00482150(uVar4,uVar1);
    if (*piVar2 != 0) {
      return *piVar2;
    }
  }
  iVar3 = 0;
  if (*(int *)(in_ECX + 0x74) != 0) {
    iVar3 = FUN_00447740(param_1,param_2,*(int *)(in_ECX + 0x74),0);
  }
  return iVar3;
}



int * FUN_0043fab0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  int *local_4;
  
  local_4 = (int *)0x0;
  if ((param_1 != 0) && (cVar1 = FUN_004c97f0(), cVar1 == '\0')) {
    iVar2 = FUN_004c9a80();
    iVar3 = FUN_004c9aa0();
    uVar5 = ((DAT_00b06a2c >> 1) - *(int *)(in_ECX + 0x20)) + iVar2;
    uVar4 = ((DAT_00b06a2c >> 1) - *(int *)(in_ECX + 0x24)) + iVar3;
    if (((uVar5 < DAT_00b06a2c) &&
        (((uVar4 < DAT_00b06a2c && (-1 < (int)uVar5)) && (-1 < (int)uVar4)))) &&
       ((local_4 = (int *)FUN_00482150(uVar5,uVar4), local_4 != (int *)0x0 && (*local_4 != param_1))
       )) {
      local_4 = (int *)0x0;
    }
  }
  return local_4;
}



void FUN_0043fb40(void)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = DAT_00b06a2c;
  for (uVar4 = 0; uVar4 < uVar1; uVar4 = uVar4 + 1) {
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      piVar2 = (int *)FUN_00482150(uVar4,uVar3);
      if ((*piVar2 != 0) && (*(char *)(*piVar2 + 0x26) == '\x06')) {
        FUN_004cb670(1);
      }
      uVar1 = DAT_00b06a2c;
    }
  }
  uVar6 = 1;
  uVar5 = 1;
  FUN_007b4280(0,1,1);
  FUN_007c7eb0(uVar5,uVar6);
  return;
}



void FUN_0043fba0(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = param_1;
  cVar2 = FUN_004d6fd0();
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*piVar1 + 0x154))();
    if (iVar3 != 0) {
      cVar2 = FUN_004d7000();
      if (cVar2 != '\0') {
        iVar3 = (**(code **)(*piVar1 + 0x154))();
        if (*(int **)(iVar3 + 0x1c) != (int *)0x0) {
          iVar3 = **(int **)(iVar3 + 0x1c);
          uVar4 = (**(code **)(*piVar1 + 0x154))();
          (**(code **)(iVar3 + 0x88))(&param_1,uVar4);
          FUN_007016a0();
        }
        FUN_004d7d10(0);
        FUN_004d7010(0);
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043fc20(char param_1)

{
  char cVar1;
  int in_ECX;
  
  if ((DAT_00b350d5 != '\0') && (cVar1 = FUN_00977c50(), cVar1 == '\0')) {
    return;
  }
  FUN_00977c50(3);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b35380);
  _DAT_00b353f8 = GetCurrentThreadId();
  _DAT_00b353fc = _DAT_00b353fc + 1;
  FUN_0055e390(1);
  FUN_007b84e0();
  if ((DAT_00b35300 != 0) && ((*(char *)(in_ECX + 0xa9) != '\0' || (param_1 != '\0')))) {
    FUN_004a25f0();
  }
  FUN_00402740();
  FUN_0055e390(1);
  _DAT_00b353fc = _DAT_00b353fc + -1;
  if (_DAT_00b353fc == 0) {
    _DAT_00b353f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b35380);
  FUN_00977c50(2);
  return;
}



void FUN_0043fcd0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = DAT_00b06a2c;
  for (uVar4 = 0; uVar4 < uVar1; uVar4 = uVar4 + 1) {
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      iVar2 = FUN_00482150(uVar4,uVar3);
      if (iVar2 != 0) {
        iVar2 = FUN_004ce3c0();
        if (iVar2 != 0) {
          FUN_004c2300();
        }
      }
      uVar1 = DAT_00b06a2c;
    }
  }
  return;
}



undefined4 FUN_0043fd20(void)

{
  return DAT_00b051dc;
}



undefined4 FUN_0043fd30(void)

{
  return DAT_00b051d4;
}



int FUN_0043fd40(int param_1)

{
  uint uVar1;
  uint3 uVar2;
  int in_ECX;
  
  uVar1 = 0;
  while( true ) {
    uVar2 = (uint3)(uVar1 >> 8);
    if (DAT_00b051d4 <= uVar1) {
      return (uint)uVar2 << 8;
    }
    if (*(int *)(*(int *)(in_ECX + 0x38) + uVar1 * 4) == param_1) break;
    uVar1 = uVar1 + 1;
  }
  return CONCAT31(uVar2,1);
}



void FUN_0043fd70(int param_1)

{
  char cVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  
  cVar1 = FUN_0043fd40(param_1);
  if (cVar1 == '\0') {
    iVar3 = DAT_00b051d4 - 1;
    for (iVar4 = iVar3; -1 < iVar4; iVar4 = iVar4 + -1) {
      if ((iVar4 == iVar3) && (*(int *)(*(int *)(in_ECX + 0x38) + iVar4 * 4) != 0)) {
        FUN_00447ba0(*(undefined4 *)(*(int *)(in_ECX + 0x38) + iVar4 * 4));
      }
      if (iVar4 == 0) {
        **(undefined4 **)(in_ECX + 0x38) = 0;
      }
      else {
        *(undefined4 *)(*(int *)(in_ECX + 0x38) + iVar4 * 4) =
             *(undefined4 *)(*(int *)(in_ECX + 0x38) + -4 + iVar4 * 4);
      }
    }
LAB_0043fe20:
    **(int **)(in_ECX + 0x38) = param_1;
  }
  else {
    for (uVar2 = 0; uVar2 < DAT_00b051d4; uVar2 = uVar2 + 1) {
      if (*(int *)(*(int *)(in_ECX + 0x38) + uVar2 * 4) == param_1) {
        if (uVar2 != 0) {
          do {
            iVar3 = uVar2 * 4;
            iVar4 = uVar2 * 4;
            uVar2 = uVar2 - 1;
            *(undefined4 *)(*(int *)(in_ECX + 0x38) + iVar4) =
                 *(undefined4 *)(*(int *)(in_ECX + 0x38) + -4 + iVar3);
          } while (uVar2 != 0);
          **(int **)(in_ECX + 0x38) = param_1;
          return;
        }
        goto LAB_0043fe20;
      }
    }
  }
  return;
}



int FUN_0043fe30(char param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  for (uVar3 = 0; uVar3 < DAT_00b051d4; uVar3 = uVar3 + 1) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x38) + uVar3 * 4);
    if ((iVar1 != 0) &&
       (((param_1 == '\0' || (*(int *)(in_ECX + 0x34) == 0)) || (iVar1 != *(int *)(in_ECX + 0x34))))
       ) {
      iVar1 = FUN_004ca030();
      if (iVar1 == 0) {
        FUN_00447ba0(*(undefined4 *)(*(int *)(in_ECX + 0x38) + uVar3 * 4));
        *(undefined4 *)(*(int *)(in_ECX + 0x38) + uVar3 * 4) = 0;
        iVar2 = iVar2 + 1;
      }
    }
  }
  return iVar2;
}



int FUN_0043fea0(int param_1)

{
  uint uVar1;
  uint3 uVar2;
  int in_ECX;
  
  uVar1 = 0;
  while( true ) {
    uVar2 = (uint3)(uVar1 >> 8);
    if (DAT_00b051dc <= uVar1) {
      return (uint)uVar2 << 8;
    }
    if (*(int *)(*(int *)(in_ECX + 0x3c) + uVar1 * 4) == param_1) break;
    uVar1 = uVar1 + 1;
  }
  return CONCAT31(uVar2,1);
}



void FUN_0043fed0(int param_1)

{
  bool bVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 0x26) == '\x06') || (*(char *)(param_1 + 0x26) == '\x05')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  uVar3 = DAT_00b06a2c * DAT_00b06a2c;
  if (*(int *)(*(int *)(in_ECX + 0x3c) + -4 + uVar3 * 4) == 0) {
    bVar1 = true;
  }
  if ((!bVar1) && (iVar2 = param_1, uVar3 < DAT_00b051dc)) goto LAB_0043ff18;
  uVar3 = 0;
  iVar4 = param_1;
  while( true ) {
    iVar2 = iVar4;
    if (DAT_00b051dc <= uVar3) {
      if (iVar4 != 0) {
        iVar2 = FUN_004ca790();
        if (iVar2 != 0) {
          FUN_004ca790();
        }
        for (uVar3 = 0;
            (uVar3 < DAT_00b051dc && (*(int *)(*(int *)(in_ECX + 0x3c) + uVar3 * 4) != iVar4));
            uVar3 = uVar3 + 1) {
        }
        FUN_00447ba0(iVar4);
        *(undefined1 *)(in_ECX + 0x69) = 1;
      }
      return;
    }
LAB_0043ff18:
    iVar4 = *(int *)(*(int *)(in_ECX + 0x3c) + uVar3 * 4);
    *(int *)(*(int *)(in_ECX + 0x3c) + uVar3 * 4) = iVar2;
    if (iVar4 == param_1) break;
    uVar3 = uVar3 + 1;
  }
  return;
}



void FUN_0043ff80(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar4 = DAT_00b051dc + -1;
    iVar2 = 0;
    if (0 < iVar4) {
      piVar3 = *(int **)(in_ECX + 0x3c);
      while (param_1 != *piVar3) {
        if (*piVar3 == 0) {
          return;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
        if (iVar4 <= iVar2) {
          return;
        }
      }
      for (; iVar2 < iVar4; iVar2 = iVar2 + 1) {
        piVar3 = (int *)(*(int *)(in_ECX + 0x3c) + iVar2 * 4);
        iVar1 = piVar3[1];
        if ((iVar1 == 0) || (*(char *)(iVar1 + 0x26) != '\x06')) break;
        *piVar3 = iVar1;
      }
      *(int *)(*(int *)(in_ECX + 0x3c) + iVar2 * 4) = param_1;
    }
  }
  return;
}



int FUN_0043fff0(char param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  do {
    if (DAT_00b051dc <= uVar3) {
      return iVar2;
    }
    if (*(int *)(*(int *)(in_ECX + 0x3c) + uVar3 * 4) != 0) {
      if ((param_1 != '\0') && (iVar1 = *(int *)(*(int *)(in_ECX + 0x3c) + uVar3 * 4), iVar1 != 0))
      {
        switch(*(undefined1 *)(iVar1 + 0x26)) {
        case 5:
        case 6:
          goto switchD_0044002d_caseD_5;
        }
      }
      iVar1 = FUN_004ca030();
      if ((iVar1 == 0) && ((param_2 == 0 || (iVar1 = FUN_004c9cf0(), iVar1 == param_2)))) {
        FUN_00447ba0(*(undefined4 *)(*(int *)(in_ECX + 0x3c) + uVar3 * 4));
        *(undefined4 *)(*(int *)(in_ECX + 0x3c) + uVar3 * 4) = 0;
        iVar2 = iVar2 + 1;
      }
    }
switchD_0044002d_caseD_5:
    uVar3 = uVar3 + 1;
  } while( true );
}


