
/* Library Function - Single Match
    __chsize_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __chsize_nolock(int _FileHandle,longlong _Size)

{
  int iVar1;
  HANDLE pvVar2;
  LPVOID _Buf;
  int *piVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  BOOL BVar7;
  uint uVar8;
  int unaff_EDI;
  int iVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint in_stack_00000008;
  DWORD DVar14;
  SIZE_T dwBytes;
  uint local_14;
  uint local_10;
  
  local_14 = 0;
  local_10 = 0;
  uVar12 = __lseeki64_nolock(_FileHandle,0x100000000,unaff_EDI);
  if (uVar12 == 0xffffffffffffffff) goto LAB_009a0940;
  lVar13 = __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  iVar4 = (int)((ulonglong)lVar13 >> 0x20);
  if (lVar13 == -1) goto LAB_009a0940;
  uVar8 = in_stack_00000008 - (uint)lVar13;
  uVar5 = (uint)(in_stack_00000008 < (uint)lVar13);
  iVar1 = (int)_Size - iVar4;
  iVar9 = iVar1 - uVar5;
  if ((iVar9 < 0) ||
     ((iVar9 == 0 || SBORROW4((int)_Size,iVar4) != SBORROW4(iVar1,uVar5) && (uVar8 == 0)))) {
    if ((iVar9 < 1) && (iVar9 < 0)) {
      lVar13 = __lseeki64_nolock(_FileHandle,_Size & 0xffffffff,unaff_EDI);
      if (lVar13 == -1) goto LAB_009a0940;
      pvVar2 = (HANDLE)__get_osfhandle(_FileHandle);
      BVar7 = SetEndOfFile(pvVar2);
      local_14 = (BVar7 != 0) - 1;
      local_10 = (int)local_14 >> 0x1f;
      if ((local_14 & local_10) == 0xffffffff) {
        piVar3 = __errno();
        *piVar3 = 0xd;
        puVar6 = ___doserrno();
        DVar14 = GetLastError();
        *puVar6 = DVar14;
        goto LAB_009a0a3e;
      }
    }
  }
  else {
    dwBytes = 0x1000;
    DVar14 = 8;
    pvVar2 = GetProcessHeap();
    _Buf = HeapAlloc(pvVar2,DVar14,dwBytes);
    if (_Buf == (LPVOID)0x0) {
      piVar3 = __errno();
      *piVar3 = 0xc;
      goto LAB_009a0940;
    }
    iVar4 = __setmode_nolock(_FileHandle,0x8000);
    while( true ) {
      uVar5 = uVar8;
      if ((-1 < iVar9) && ((0 < iVar9 || (0xfff < uVar8)))) {
        uVar5 = 0x1000;
      }
      uVar5 = __write_nolock(_FileHandle,_Buf,uVar5);
      if (uVar5 == 0xffffffff) break;
      bVar10 = uVar8 < uVar5;
      uVar8 = uVar8 - uVar5;
      bVar11 = SBORROW4(iVar9,(int)uVar5 >> 0x1f);
      iVar1 = iVar9 - ((int)uVar5 >> 0x1f);
      iVar9 = iVar1 - (uint)bVar10;
      if ((iVar9 < 0) || ((iVar9 == 0 || bVar11 != SBORROW4(iVar1,(uint)bVar10) && (uVar8 == 0))))
      goto LAB_009a0992;
    }
    puVar6 = ___doserrno();
    if (*puVar6 == 5) {
      piVar3 = __errno();
      *piVar3 = 0xd;
    }
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
LAB_009a0992:
    __setmode_nolock(_FileHandle,iVar4);
    DVar14 = 0;
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,DVar14,_Buf);
LAB_009a0a3e:
    if ((local_14 & local_10) == 0xffffffff) goto LAB_009a0940;
  }
  lVar13 = __lseeki64_nolock(_FileHandle,uVar12 >> 0x20,unaff_EDI);
  if (lVar13 != -1) {
    return 0;
  }
LAB_009a0940:
  piVar3 = __errno();
  return *piVar3;
}



/* Library Function - Single Match
    __setmode_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __setmode_nolock(int _FileHandle,int _Mode)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  
  iVar7 = (_FileHandle & 0x1fU) * 0x28;
  piVar1 = &DAT_00baaac0 + (_FileHandle >> 5);
  iVar4 = *piVar1 + iVar7;
  bVar2 = *(byte *)(iVar4 + 4);
  cVar3 = *(char *)(iVar4 + 0x24);
  if (_Mode == 0x4000) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
    pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
    *pbVar5 = *pbVar5 & 0x80;
  }
  else if (_Mode == 0x8000) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) & 0x7f;
  }
  else {
    if ((_Mode == 0x10000) || (_Mode == 0x20000)) {
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
      pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
      bVar6 = *pbVar5 & 0x82 | 2;
    }
    else {
      if (_Mode != 0x40000) goto LAB_009a0b0d;
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
      pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
      bVar6 = *pbVar5 & 0x81 | 1;
    }
    *pbVar5 = bVar6;
  }
LAB_009a0b0d:
  if ((bVar2 & 0x80) == 0) {
    iVar4 = 0x8000;
  }
  else {
    iVar4 = (-(uint)((char)(cVar3 * '\x02') >> 1 != '\0') & 0xc000) + 0x4000;
  }
  return iVar4;
}



/* Library Function - Single Match
    __get_fmode
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __get_fmode(int *_PMode)

{
  int *piVar1;
  
  if (_PMode == (int *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return 0x16;
  }
  *_PMode = DAT_00baa878;
  return 0;
}



/* Library Function - Single Match
    __hw_cw
   
   Library: Visual Studio 2005 Release */

uint __hw_cw(void)

{
  uint uVar1;
  uint uVar2;
  uint unaff_EBX;
  
  uVar1 = (uint)((unaff_EBX & 0x10) != 0);
  if ((unaff_EBX & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((unaff_EBX & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((unaff_EBX & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((unaff_EBX & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((unaff_EBX & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = unaff_EBX & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((unaff_EBX & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((unaff_EBX & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((unaff_EBX & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}



/* Library Function - Single Match
    ___hw_cw_sse2
   
   Library: Visual Studio 2005 Release */

uint ___hw_cw_sse2(void)

{
  uint uVar1;
  uint uVar2;
  uint in_EDX;
  
  uVar1 = 0;
  if ((in_EDX & 0x10) != 0) {
    uVar1 = 0x80;
  }
  if ((in_EDX & 8) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((in_EDX & 4) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((in_EDX & 2) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((in_EDX & 1) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((in_EDX & 0x80000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  uVar2 = in_EDX & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x2000;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x4000;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0x6000;
    }
  }
  uVar2 = in_EDX & 0x3000000;
  if (uVar2 == 0x1000000) {
    uVar1 = uVar1 | 0x8040;
  }
  else {
    if (uVar2 == 0x2000000) {
      return uVar1 | 0x40;
    }
    if (uVar2 == 0x3000000) {
      return uVar1 | 0x8000;
    }
  }
  return uVar1;
}



/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2005 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort in_FPUControlWord;
  
  uVar5 = 0;
  if ((in_FPUControlWord & 1) != 0) {
    uVar5 = 0x10;
  }
  if ((in_FPUControlWord & 4) != 0) {
    uVar5 = uVar5 | 8;
  }
  if ((in_FPUControlWord & 8) != 0) {
    uVar5 = uVar5 | 4;
  }
  if ((in_FPUControlWord & 0x10) != 0) {
    uVar5 = uVar5 | 2;
  }
  if ((in_FPUControlWord & 0x20) != 0) {
    uVar5 = uVar5 | 1;
  }
  if ((in_FPUControlWord & 2) != 0) {
    uVar5 = uVar5 | 0x80000;
  }
  uVar1 = in_FPUControlWord & 0xc00;
  if ((in_FPUControlWord & 0xc00) != 0) {
    if (uVar1 == 0x400) {
      uVar5 = uVar5 | 0x100;
    }
    else if (uVar1 == 0x800) {
      uVar5 = uVar5 | 0x200;
    }
    else if (uVar1 == 0xc00) {
      uVar5 = uVar5 | 0x300;
    }
  }
  if ((in_FPUControlWord & 0x300) == 0) {
    uVar5 = uVar5 | 0x20000;
  }
  else if ((in_FPUControlWord & 0x300) == 0x200) {
    uVar5 = uVar5 | 0x10000;
  }
  if ((in_FPUControlWord & 0x1000) != 0) {
    uVar5 = uVar5 | 0x40000;
  }
  uVar2 = ~_Mask & uVar5 | _NewValue & _Mask;
  if (uVar2 != uVar5) {
    uVar5 = __hw_cw();
    uVar2 = 0;
    if ((uVar5 & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((uVar5 & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
    uVar3 = uVar5 & 0xc00;
    if (uVar3 != 0) {
      if (uVar3 == 0x400) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar3 == 0x800) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar3 == 0xc00) {
        uVar2 = uVar2 | 0x300;
      }
    }
    if ((uVar5 & 0x300) == 0) {
      uVar2 = uVar2 | 0x20000;
    }
    else if ((uVar5 & 0x300) == 0x200) {
      uVar2 = uVar2 | 0x10000;
    }
    if ((uVar5 & 0x1000) != 0) {
      uVar2 = uVar2 | 0x40000;
    }
  }
  if (DAT_00baabe0 != 0) {
    uVar5 = 0;
    if ((char)MXCSR < '\0') {
      uVar5 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar5 = uVar5 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar5 = uVar5 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar5 = uVar5 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar5 = uVar5 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar5 = uVar5 | 0x80000;
    }
    uVar3 = MXCSR & 0x6000;
    if (uVar3 != 0) {
      if (uVar3 == 0x2000) {
        uVar5 = uVar5 | 0x100;
      }
      else if (uVar3 == 0x4000) {
        uVar5 = uVar5 | 0x200;
      }
      else if (uVar3 == 0x6000) {
        uVar5 = uVar5 | 0x300;
      }
    }
    uVar3 = MXCSR & 0x8040;
    if (uVar3 == 0x40) {
      uVar5 = uVar5 | 0x2000000;
    }
    else if (uVar3 == 0x8000) {
      uVar5 = uVar5 | 0x3000000;
    }
    else if (uVar3 == 0x8040) {
      uVar5 = uVar5 | 0x1000000;
    }
    if ((~(_Mask & 0x308031f) & uVar5 | _Mask & 0x308031f & _NewValue) != uVar5) {
      uVar4 = ___hw_cw_sse2();
      ___set_fpsr_sse2(uVar4);
      uVar5 = 0;
      if ((char)MXCSR < '\0') {
        uVar5 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar5 = uVar5 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar5 = uVar5 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar5 = uVar5 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar5 = uVar5 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar5 = uVar5 | 0x80000;
      }
      uVar3 = MXCSR & 0x6000;
      if (uVar3 != 0) {
        if (uVar3 == 0x2000) {
          uVar5 = uVar5 | 0x100;
        }
        else if (uVar3 == 0x4000) {
          uVar5 = uVar5 | 0x200;
        }
        else if (uVar3 == 0x6000) {
          uVar5 = uVar5 | 0x300;
        }
      }
      uVar3 = MXCSR & 0x8040;
      if (uVar3 == 0x40) {
        uVar5 = uVar5 | 0x2000000;
      }
      else if (uVar3 == 0x8000) {
        uVar5 = uVar5 | 0x3000000;
      }
      else if (uVar3 == 0x8040) {
        uVar5 = uVar5 | 0x1000000;
      }
    }
    uVar3 = uVar5 ^ uVar2;
    uVar2 = uVar5 | uVar2;
    if ((uVar3 & 0x8031f) != 0) {
      uVar2 = uVar2 | 0x80000000;
    }
  }
  return uVar2;
}



/* Library Function - Single Match
    __getenv_helper_nolock
   
   Library: Visual Studio 2005 Release */

char * __cdecl __getenv_helper_nolock(char *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (DAT_00babc08 == 0) {
    return (char *)0x0;
  }
  if (((DAT_00ba9db4 != (int *)0x0) ||
      (((DAT_00ba9dbc != 0 && (iVar1 = ___wtomb_environ(), iVar1 == 0)) &&
       (DAT_00ba9db4 != (int *)0x0)))) && (piVar3 = DAT_00ba9db4, param_1 != (char *)0x0)) {
    _MaxCount = _strlen(param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = _strlen((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = __mbsnbicoll((uchar *)*piVar3,(uchar *)param_1,_MaxCount), iVar1 == 0)) {
        return (char *)(*piVar3 + 1 + _MaxCount);
      }
    }
  }
  return (char *)0x0;
}



/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2005 Release */

void __cdecl ___initconout(void)

{
  DAT_00b323e4 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}



/* Library Function - Single Match
    __mbsnbicoll_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbicoll_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  int *piVar1;
  int iVar2;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_MaxCount == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if ((_Str1 == (uchar *)0x0) || (_Str2 == (uchar *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    if ((local_14.mbcinfo)->ismbcodepage == 0) {
      iVar2 = __strnicoll_l((char *)_Str1,(char *)_Str2,_MaxCount,_Locale);
    }
    else {
      iVar2 = ___crtCompareStringA
                        (&local_14,*(LPCWSTR *)(local_14.mbcinfo)->mbulinfo,0x1001,(LPCSTR)_Str1,
                         _MaxCount,(LPCSTR)_Str2,_MaxCount,(local_14.mbcinfo)->mbcodepage);
      if (iVar2 == 0) goto LAB_009a1125;
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
LAB_009a1125:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}



/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}



/* Library Function - Single Match
    ___wtomb_environ
   
   Library: Visual Studio 2005 Release */

int __cdecl ___wtomb_environ(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Count;
  int iVar1;
  undefined4 *puVar2;
  char *local_8;
  
  local_8 = (LPSTR)0x0;
  lpWideCharStr = (LPCWSTR)*DAT_00ba9dbc;
  puVar2 = DAT_00ba9dbc;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Count = WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((_Count == 0) || (local_8 = __calloc_crt(_Count,1), local_8 == (LPSTR)0x0)) break;
    iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)*puVar2,-1,local_8,_Count,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) {
      _free(local_8);
      return -1;
    }
    iVar1 = ___crtsetenv(&local_8,0);
    if ((iVar1 < 0) && (local_8 != (LPSTR)0x0)) {
      _free(local_8);
      local_8 = (LPSTR)0x0;
    }
    puVar2 = puVar2 + 1;
    lpWideCharStr = (LPCWSTR)*puVar2;
  }
  return -1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtCompareStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char const *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtCompareStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8)

{
  uint _Size;
  char *lpMultiByteStr;
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  uint cchWideChar;
  undefined4 *puVar5;
  uint uVar6;
  LPWSTR lpWideCharStr;
  char *pcVar7;
  int *in_ECX;
  ulong uVar8;
  byte *in_EDX;
  byte *pbVar9;
  PCNZCH _Memory;
  int local_2c;
  byte *local_28;
  PCNZWCH local_24;
  char *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  lpMultiByteStr = param_4;
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_20 = param_4;
  if (DAT_00baa87c == 0) {
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_00baa87c = 2;
      }
    }
    else {
      DAT_00baa87c = 1;
    }
  }
  pbVar9 = in_EDX;
  uVar8 = param_3;
  if ((int)param_3 < 1) {
    if ((int)param_3 < -1) {
      return 0;
    }
  }
  else {
    do {
      uVar8 = uVar8 - 1;
      if (*pbVar9 == 0) goto LAB_009a126e;
      pbVar9 = pbVar9 + 1;
    } while (uVar8 != 0);
    uVar8 = 0xffffffff;
LAB_009a126e:
    param_3 = param_3 + (-1 - uVar8);
  }
  pcVar7 = lpMultiByteStr;
  iVar1 = param_5;
  if (param_5 < 1) {
    if (param_5 < -1) {
      return 0;
    }
  }
  else {
    do {
      iVar1 = iVar1 + -1;
      if (*pcVar7 == '\0') goto LAB_009a1290;
      pcVar7 = pcVar7 + 1;
    } while (iVar1 != 0);
    iVar1 = -1;
LAB_009a1290:
    param_5 = param_5 + (-1 - iVar1);
  }
  if ((DAT_00baa87c == 2) || (DAT_00baa87c == 0)) {
    _Memory = (PCNZCH)0x0;
    pbVar9 = (byte *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_6 == (char *)0x0) {
      param_6 = *(char **)(*in_ECX + 4);
    }
    pcVar7 = (char *)___ansicp(param_1);
    if (pcVar7 == (char *)0xffffffff) {
      return 0;
    }
    local_28 = in_EDX;
    if (pcVar7 != param_6) {
      pbVar9 = (byte *)___convertcp(param_6,pcVar7,in_EDX,&param_3,0,0);
      if (pbVar9 == (byte *)0x0) {
        return 0;
      }
      _Memory = (PCNZCH)___convertcp(param_6,pcVar7,lpMultiByteStr,&param_5,0,0);
      local_28 = pbVar9;
      local_20 = _Memory;
      if (_Memory == (PCNZCH)0x0) {
        _free(pbVar9);
        return 0;
      }
    }
    iVar1 = CompareStringA((LCID)param_1,param_2,(PCNZCH)local_28,param_3,local_20,param_5);
    if (pbVar9 != (byte *)0x0) {
      _free(pbVar9);
      _free(_Memory);
      return iVar1;
    }
    return iVar1;
  }
  if (DAT_00baa87c != 1) {
    return 0;
  }
  local_2c = 0;
  if (param_6 == (char *)0x0) {
    param_6 = *(char **)(*in_ECX + 4);
  }
  if ((param_3 == 0) || (param_5 == 0)) {
    if (param_3 == param_5) {
      return 2;
    }
    if (1 < param_5) {
      return 1;
    }
    if (1 < (int)param_3) {
      return 3;
    }
    BVar3 = GetCPInfo((UINT)param_6,&local_1c);
    if (BVar3 == 0) {
      return 0;
    }
    if (0 < (int)param_3) {
      if (local_1c.MaxCharSize < 2) {
        return 3;
      }
      pBVar4 = local_1c.LeadByte;
      while( true ) {
        if (local_1c.LeadByte[0] == 0) {
          return 3;
        }
        if (pBVar4[1] == 0) break;
        if ((*pBVar4 <= *in_EDX) && (*in_EDX <= pBVar4[1])) {
          return 2;
        }
        pBVar4 = pBVar4 + 2;
        local_1c.LeadByte[0] = *pBVar4;
      }
      return 3;
    }
    if (0 < param_5) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while ((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0))) {
          if ((*pBVar4 <= (byte)*lpMultiByteStr) && ((byte)*lpMultiByteStr <= pBVar4[1])) {
            return 2;
          }
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      return 1;
    }
  }
  cchWideChar = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)in_EDX,param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) {
    return 0;
  }
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_24 = (PCNZWCH)0x0;
  }
  else {
    uVar6 = cchWideChar * 2 + 8;
    if (uVar6 < 0x401) {
      puVar5 = (undefined4 *)&stack0xffffffc4;
      local_24 = (PCNZWCH)&stack0xffffffc4;
      if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_009a13e4:
        local_24 = (PCNZWCH)(puVar5 + 2);
      }
    }
    else {
      puVar5 = _malloc(uVar6);
      local_24 = (PCNZWCH)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_009a13e4;
      }
    }
  }
  if (local_24 == (PCNZWCH)0x0) {
    return 0;
  }
  iVar1 = MultiByteToWideChar((UINT)param_6,1,(LPCSTR)in_EDX,param_3,local_24,cchWideChar);
  if ((iVar1 != 0) &&
     (uVar6 = MultiByteToWideChar((UINT)param_6,9,lpMultiByteStr,param_5,(LPWSTR)0x0,0), uVar6 != 0)
     ) {
    if (((int)uVar6 < 1) || (0xffffffe0 / uVar6 < 2)) {
      lpWideCharStr = (LPWSTR)0x0;
    }
    else {
      _Size = uVar6 * 2 + 8;
      if (_Size < 0x401) {
        if (&stack0x00000000 == (undefined1 *)0x3c) goto LAB_009a14a5;
        lpWideCharStr = (LPWSTR)&stack0xffffffcc;
      }
      else {
        lpWideCharStr = _malloc(_Size);
        if (lpWideCharStr != (LPWSTR)0x0) {
          lpWideCharStr[0] = L'\xdddd';
          lpWideCharStr[1] = L'\0';
          lpWideCharStr = lpWideCharStr + 4;
        }
      }
    }
    if (lpWideCharStr != (LPWSTR)0x0) {
      iVar1 = MultiByteToWideChar((UINT)param_6,1,lpMultiByteStr,param_5,lpWideCharStr,uVar6);
      if (iVar1 != 0) {
        local_2c = CompareStringW((LCID)param_1,param_2,local_24,cchWideChar,lpWideCharStr,uVar6);
      }
      __freea(lpWideCharStr);
    }
  }
LAB_009a14a5:
  __freea(local_24);
  return local_2c;
}



/* Library Function - Single Match
    ___crtCompareStringA
   
   Library: Visual Studio 2005 Release */

int __cdecl
___crtCompareStringA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwCmpFlags,LPCSTR _LpString1,
          int _CchCount1,LPCSTR _LpString2,int _CchCount2,int _Code_page)

{
  int iVar1;
  int in_stack_ffffffec;
  int in_stack_fffffff0;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtCompareStringA_stat
                    ((localeinfo_struct *)_LocaleName,_DwCmpFlags,_CchCount1,_LpString2,_CchCount2,
                     (char *)_Code_page,in_stack_ffffffec,in_stack_fffffff0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/* Library Function - Single Match
    __strnicoll_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicoll_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  LPCWSTR _LocaleName;
  int *piVar1;
  int iVar2;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_MaxCount == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    _LocaleName = (LPCWSTR)(local_14.locinfo)->lc_category[0].locale;
    if (_LocaleName == (LPCWSTR)0x0) {
      iVar2 = __strnicmp_l(_Str1,_Str2,_MaxCount,&local_14);
    }
    else {
      iVar2 = ___crtCompareStringA
                        (&local_14,_LocaleName,0x1001,_Str1,_MaxCount,_Str2,_MaxCount,
                         (local_14.locinfo)->lc_collate_cp);
      if (iVar2 == 0) {
        piVar1 = __errno();
        *piVar1 = 0x16;
        goto LAB_009a1692;
      }
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
LAB_009a1692:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}



/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2005 Release */

int __cdecl findenv(uchar *param_1)

{
  int iVar1;
  int *piVar2;
  size_t unaff_EDI;
  
  piVar2 = DAT_00ba9db4;
  while( true ) {
    if ((uchar *)*piVar2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_00ba9db4 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*piVar2,unaff_EDI);
    if ((iVar1 == 0) &&
       ((*(char *)(unaff_EDI + *piVar2) == '=' || (*(char *)(unaff_EDI + *piVar2) == '\0')))) break;
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_00ba9db4 >> 2;
}



/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 2005 Release */

undefined4 * __cdecl copy_environ(void)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *unaff_EDI;
  
  puVar2 = (undefined4 *)0x0;
  if (unaff_EDI != (int *)0x0) {
    iVar1 = *unaff_EDI;
    piVar4 = unaff_EDI;
    while (iVar1 != 0) {
      piVar4 = piVar4 + 1;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      iVar1 = *piVar4;
    }
    puVar2 = __calloc_crt((int)puVar2 + 1,4);
    if (puVar2 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    pcVar3 = (char *)*unaff_EDI;
    puVar5 = puVar2;
    while (pcVar3 != (char *)0x0) {
      pcVar3 = __strdup(pcVar3);
      *puVar5 = pcVar3;
      puVar5 = puVar5 + 1;
      unaff_EDI = unaff_EDI + 1;
      pcVar3 = (char *)*unaff_EDI;
    }
    *puVar5 = 0;
    return puVar2;
  }
  return puVar2;
}



/* Library Function - Single Match
    ___crtsetenv
   
   Library: Visual Studio 2005 Release */

int __cdecl ___crtsetenv(char **_POption,int _Primary)

{
  uint _Size;
  uchar *_Str;
  int *piVar1;
  uchar *puVar2;
  int iVar3;
  uint _Count;
  size_t sVar4;
  char *_Dst;
  errno_t eVar5;
  BOOL BVar6;
  int *piVar7;
  bool bVar8;
  size_t _Size_00;
  uchar *_Src;
  int local_14;
  
  local_14 = 0;
  if (_POption == (char **)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return -1;
  }
  _Str = (uchar *)*_POption;
  if (((_Str == (uchar *)0x0) || (puVar2 = __mbschr(_Str,0x3d), puVar2 == (uchar *)0x0)) ||
     (_Str == puVar2)) {
LAB_009a17ed:
    piVar1 = __errno();
    *piVar1 = 0x16;
    return -1;
  }
  bVar8 = puVar2[1] == '\0';
  if (DAT_00ba9db4 == DAT_00ba9db8) {
    DAT_00ba9db4 = (int *)copy_environ();
  }
  if (DAT_00ba9db4 == (int *)0x0) {
    if ((_Primary == 0) || (DAT_00ba9dbc == (undefined4 *)0x0)) {
      if (bVar8) {
        return 0;
      }
      DAT_00ba9db4 = __malloc_crt(4);
      if (DAT_00ba9db4 == (int *)0x0) {
        return -1;
      }
      *DAT_00ba9db4 = 0;
      if (DAT_00ba9dbc == (undefined4 *)0x0) {
        DAT_00ba9dbc = __malloc_crt(4);
        if (DAT_00ba9dbc == (undefined4 *)0x0) {
          return -1;
        }
        *DAT_00ba9dbc = 0;
      }
    }
    else {
      iVar3 = ___wtomb_environ();
      if (iVar3 != 0) goto LAB_009a17ed;
    }
  }
  piVar1 = DAT_00ba9db4;
  if (DAT_00ba9db4 == (int *)0x0) {
    return -1;
  }
  _Count = findenv(_Str);
  if (((int)_Count < 0) || (*piVar1 == 0)) {
    if (bVar8) {
      _free(_Str);
      *_POption = (char *)0x0;
      return 0;
    }
    if ((int)_Count < 0) {
      _Count = -_Count;
    }
    _Size = _Count + 2;
    if ((int)_Size < (int)_Count) {
      return -1;
    }
    if (0x3ffffffe < _Size) {
      return -1;
    }
    piVar1 = __recalloc_crt(DAT_00ba9db4,4,_Size);
    if (piVar1 == (int *)0x0) {
      return -1;
    }
    piVar1[_Count] = (int)_Str;
    (piVar1 + _Count)[1] = 0;
    *_POption = (char *)0x0;
  }
  else {
    piVar7 = piVar1 + _Count;
    _free((void *)*piVar7);
    if (!bVar8) {
      *piVar7 = (int)_Str;
      *_POption = (char *)0x0;
      goto LAB_009a18fe;
    }
    while (*piVar7 != 0) {
      *piVar7 = piVar7[1];
      _Count = _Count + 1;
      piVar7 = piVar1 + _Count;
    }
    if ((0x3ffffffe < _Count) ||
       (piVar1 = __recalloc_crt(DAT_00ba9db4,_Count,4), piVar1 == (int *)0x0)) goto LAB_009a18fe;
  }
  DAT_00ba9db4 = piVar1;
LAB_009a18fe:
  if (_Primary != 0) {
    _Size_00 = 1;
    sVar4 = _strlen((char *)_Str);
    _Dst = __calloc_crt(sVar4 + 2,_Size_00);
    if (_Dst != (char *)0x0) {
      _Src = _Str;
      sVar4 = _strlen((char *)_Str);
      eVar5 = _strcpy_s(_Dst,sVar4 + 2,(char *)_Src);
      if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      puVar2[(int)_Dst - (int)_Str] = '\0';
      BVar6 = SetEnvironmentVariableA
                        (_Dst,(LPCSTR)(~-(uint)bVar8 & (uint)(puVar2 + ((int)_Dst - (int)_Str) + 1))
                        );
      if (BVar6 == 0) {
        local_14 = -1;
        piVar1 = __errno();
        *piVar1 = 0x2a;
      }
      _free(_Dst);
    }
  }
  if (bVar8) {
    _free(_Str);
    return local_14;
  }
  return local_14;
}



/* Library Function - Single Match
    __mbschr_l
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbschr_l(uchar *_Str,uint _Ch,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  byte *pbVar4;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (_Str == (uchar *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    _Str = (byte *)0x0;
  }
  else {
    if (*(int *)(local_10 + 8) == 0) {
      _Str = (uchar *)_strchr((char *)_Str,_Ch);
    }
    else {
      while( true ) {
        bVar2 = *_Str;
        if (bVar2 == 0) break;
        if ((*(byte *)(bVar2 + 0x1d + local_10) & 4) == 0) {
          pbVar4 = _Str;
          if (_Ch == bVar2) break;
        }
        else {
          bVar1 = _Str[1];
          if (bVar1 == 0) goto LAB_009a1a4e;
          pbVar4 = _Str + 1;
          if (_Ch == CONCAT11(bVar2,bVar1)) goto LAB_009a1a40;
        }
        _Str = pbVar4 + 1;
      }
      if (_Ch != (ushort)bVar2) {
LAB_009a1a4e:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return (uchar *)0x0;
      }
    }
LAB_009a1a40:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return _Str;
}



/* Library Function - Single Match
    __mbschr
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbschr(uchar *_Str,uint _Ch)

{
  uchar *puVar1;
  
  puVar1 = __mbschr_l(_Str,_Ch,(_locale_t)0x0);
  return puVar1;
}



BOOL VerQueryValueA(LPCVOID pBlock,LPCSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VerQueryValueA(pBlock,lpSubBlock,lplpBuffer,puLen);
  return BVar1;
}



BOOL GetFileVersionInfoA(LPCSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1a7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileVersionInfoA(lptstrFilename,dwHandle,dwLen,lpData);
  return BVar1;
}



DWORD GetFileVersionInfoSizeA(LPCSTR lptstrFilename,LPDWORD lpdwHandle)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileVersionInfoSizeA(lptstrFilename,lpdwHandle);
  return DVar1;
}



void D3DXSaveTextureToFileA(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXSaveTextureToFileA();
  return;
}



void D3DXLoadSurfaceFromSurface(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXLoadSurfaceFromSurface();
  return;
}



void D3DXMatrixMultiply(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXMatrixMultiply();
  return;
}



void D3DXPlaneTransform(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1a9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXPlaneTransform();
  return;
}



void D3DXPlaneNormalize(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXPlaneNormalize();
  return;
}



void D3DXMatrixTranspose(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1aaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXMatrixTranspose();
  return;
}



void D3DXMatrixInverse(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXMatrixInverse();
  return;
}



void D3DXCreateTexture(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1ab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXCreateTexture();
  return;
}



void D3DXCreateVolumeTextureFromFileInMemory(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXCreateVolumeTextureFromFileInMemory();
  return;
}



void D3DXCreateCubeTextureFromFileInMemory(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1ac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXCreateCubeTextureFromFileInMemory();
  return;
}



void D3DXCreateTextureFromFileInMemory(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXCreateTextureFromFileInMemory();
  return;
}



void D3DXGetImageInfoFromFileInMemory(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1ace. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXGetImageInfoFromFileInMemory();
  return;
}



void D3DXGetShaderConstantTable(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXGetShaderConstantTable();
  return;
}



void D3DXCompileShaderFromFileA(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1ada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXCompileShaderFromFileA();
  return;
}



void D3DXCompileShader(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXCompileShader();
  return;
}



void D3DXGetVertexShaderProfile(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXGetVertexShaderProfile();
  return;
}



void D3DXGetPixelShaderProfile(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXGetPixelShaderProfile();
  return;
}



void D3DXAssembleShaderFromFileA(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXAssembleShaderFromFileA();
  return;
}



void D3DXAssembleShader(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXAssembleShader();
  return;
}



void D3DXVec3Normalize(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1afe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXVec3Normalize();
  return;
}



void D3DXVec3TransformNormal(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXVec3TransformNormal();
  return;
}



void D3DXVec3TransformCoord(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1b0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXVec3TransformCoord();
  return;
}



void D3DXMatrixRotationYawPitchRoll(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a1b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXMatrixRotationYawPitchRoll();
  return;
}



int closesocket(SOCKET s)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = closesocket(s);
  return iVar1;
}



SOCKET socket(int af,int type,int protocol)

{
  SOCKET SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = socket(af,type,protocol);
  return SVar1;
}



int WSAGetLastError(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSAGetLastError();
  return iVar1;
}



int recv(SOCKET s,char *buf,int len,int flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = recv(s,buf,len,flags);
  return iVar1;
}



int send(SOCKET s,char *buf,int len,int flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1b2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = send(s,buf,len,flags);
  return iVar1;
}



int connect(SOCKET s,sockaddr *name,int namelen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = connect(s,name,namelen);
  return iVar1;
}



hostent * gethostbyname(char *name)

{
  hostent *phVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1b3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  phVar1 = gethostbyname(name);
  return phVar1;
}



ulong inet_addr(char *cp)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = inet_addr(cp);
  return uVar1;
}



u_short htons(u_short hostshort)

{
  u_short uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1b46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = htons(hostshort);
  return uVar1;
}



int WSAAsyncSelect(SOCKET s,HWND hWnd,u_int wMsg,long lEvent)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSAAsyncSelect(s,hWnd,wMsg,lEvent);
  return iVar1;
}



int listen(SOCKET s,int backlog)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = listen(s,backlog);
  return iVar1;
}



int bind(SOCKET s,sockaddr *addr,int namelen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = bind(s,addr,namelen);
  return iVar1;
}



int setsockopt(SOCKET s,int level,int optname,char *optval,int optlen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1b5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = setsockopt(s,level,optname,optval,optlen);
  return iVar1;
}



int WSAStartup(WORD wVersionRequired,LPWSADATA lpWSAData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSAStartup(wVersionRequired,lpWSAData);
  return iVar1;
}



SOCKET accept(SOCKET s,sockaddr *addr,int *addrlen)

{
  SOCKET SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1b6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = accept(s,addr,addrlen);
  return SVar1;
}



int __WSAFDIsSet(SOCKET param_1,fd_set *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = __WSAFDIsSet(param_1,param_2);
  return iVar1;
}



int select(int nfds,fd_set *readfds,fd_set *writefds,fd_set *exceptfds,timeval *timeout)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x009a1b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = select(nfds,readfds,writefds,exceptfds,timeout);
  return iVar1;
}



void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x009a1b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



void FUN_009a1bb0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d7d08;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006ffd30(uVar1);
  *in_ECX = &PTR_FUN_00a7d874;
  in_ECX[6] = 6;
  in_ECX[7] = 3;
  in_ECX[8] = 2;
  in_ECX[9] = 0;
  FUN_00701b00();
  in_ECX[0xc] = 0;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00ab27fc;
  _eh_vector_constructor_iterator_(in_ECX + 0x11,4,6,FUN_007c88a0,FUN_007016a0);
  in_ECX[0x10] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009a1c50(void)

{
  uint uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7d38;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  _eh_vector_destructor_iterator_((void *)(in_ECX + 0x44),4,6,FUN_007016a0);
  local_4 = 0xffffffff;
  FUN_0072a910(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009a1cc0(byte param_1)

{
  FUN_009a1c50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_009a1ce0(uint param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  LONG LVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar8 = (undefined4 *)0x0;
  if (((param_2 != (int *)0x0) && (param_1 != 0)) && ((param_1 & param_1 - 1) == 0)) {
    iVar4 = FUN_00401f00(0x5c,uVar3);
    local_4 = 0;
    if (iVar4 != 0) {
      puVar8 = (undefined4 *)FUN_009a1bb0();
    }
    puVar8[6] = *param_3;
    puVar8[7] = param_3[1];
    local_4 = 0xffffffff;
    puVar8[8] = param_3[2];
    piVar7 = puVar8 + 0x11;
    local_10 = 6;
    do {
      puVar5 = (undefined4 *)FUN_00732050(param_1,param_1);
      puVar1 = (undefined4 *)*piVar7;
      if (puVar1 != puVar5) {
        if (((puVar1 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar1 + 1), LVar6 == 0)
            ) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        *piVar7 = (int)puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar5 + 1);
        }
      }
      piVar7 = piVar7 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    *(undefined1 *)(puVar8 + 0xd) = DAT_00b3ff00;
    puVar8[0xe] = DAT_00b2752c;
    *(undefined1 *)(puVar8 + 0xf) = DAT_00b27530;
    cVar2 = (**(code **)(*param_2 + 0x110))(puVar8);
    if (cVar2 != '\0') {
      *unaff_FS_OFFSET = 0;
      return puVar8;
    }
    (**(code **)*puVar8)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_009a1e30(undefined4 param_1)

{
  int in_ECX;
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)(in_ECX + 0x20) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x20))(1);
    *(undefined4 *)(in_ECX + 0x20) = unaff_retaddr;
    return;
  }
  *(undefined4 *)(in_ECX + 0x20) = param_1;
  return;
}



void FUN_009a1e60(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d7d89;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00ab286c;
  local_4 = 2;
  if ((undefined4 *)in_ECX[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[8])(1,uVar2);
  }
  puVar1 = (undefined4 *)in_ECX[7];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 2,4,4,FUN_007016a0);
  local_4 = 0xffffffff;
  FUN_0055ace0();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_009a1fd0(uint param_1)

{
  int *in_ECX;
  undefined4 unaff_retaddr;
  
  (**(code **)(*in_ECX + 0x7c))(0);
  if (param_1 < (uint)in_ECX[6]) {
    FUN_0075fa90(unaff_retaddr);
    return 1;
  }
  return 0;
}



undefined4 FUN_009a2000(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *in_ECX;
  undefined4 *unaff_retaddr;
  
  (**(code **)(*in_ECX + 0x7c))(0);
  puVar1 = (undefined4 *)in_ECX[7];
  if (puVar1 != unaff_retaddr) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[7] = (int)unaff_retaddr;
    if (unaff_retaddr != (undefined4 *)0x0) {
      InterlockedIncrement(unaff_retaddr + 1);
    }
  }
  return 1;
}



void FUN_009a20a0(void)

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
  *in_ECX = &PTR_FUN_00ab286c;
  _eh_vector_constructor_iterator_(in_ECX + 2,4,4,FUN_007c88a0,FUN_007016a0);
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009a2110(byte param_1)

{
  FUN_009a1e60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_009a2130(uint param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d7dbb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 != (int *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x9c))(uVar1);
    if ((param_1 <= uVar1) && (param_1 < 5)) {
      iVar2 = FUN_00401f00(0x24);
      uStack_4 = 0;
      if (iVar2 != 0) {
        iVar2 = FUN_009a20a0();
        *(uint *)(iVar2 + 0x18) = param_1;
        *unaff_FS_OFFSET = local_c;
        return iVar2;
      }
      uRam00000018 = param_1;
      *unaff_FS_OFFSET = local_c;
      return 0;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



int * FUN_009a21d0(int param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d7deb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_2 != (int *)0x0) && (param_1 != 0)) {
    iVar3 = (**(code **)(*param_2 + 0x9c))(uVar2);
    if (iVar3 != 0) {
      iVar3 = FUN_00401f00(0x24);
      uStack_4 = 0;
      if (iVar3 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_009a20a0();
      }
      pcVar1 = *(code **)(*piVar4 + 0x68);
      uStack_4 = 0xffffffff;
      piVar4[6] = 1;
      (*pcVar1)(param_1,0);
      if (param_1 != 0) {
        (**(code **)(*piVar4 + 0x6c))(param_1);
      }
      *unaff_FS_OFFSET = unaff_EDI;
      return piVar4;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return (int *)0x0;
}



void FUN_009a2290(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007009a0(param_1);
  param_1 = FUN_0070f910(DAT_00baa888);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_009a22e0(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d7e18;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00721350(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00ab2914;
  FUN_00721440(param_1);
  in_ECX[3] = param_2;
  in_ECX[5] = 0;
  if (param_2 == 0) {
    in_ECX[7] = 0;
  }
  else {
    uVar2 = FUN_00401f00(-(uint)((int)((ulonglong)param_2 * 8 >> 0x20) != 0) |
                         (uint)((ulonglong)param_2 * 8));
    in_ECX[7] = uVar2;
  }
  in_ECX[4] = param_3;
  in_ECX[6] = 0;
  if (param_3 == 0) {
    in_ECX[8] = 0;
  }
  else {
    uVar2 = FUN_00401f00(-(uint)((int)((ulonglong)param_3 * 8 >> 0x20) != 0) |
                         (uint)((ulonglong)param_3 * 8));
    in_ECX[8] = uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_009a23b0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00ab2914;
  FUN_00401f20(in_ECX[7]);
  FUN_00401f20(in_ECX[8]);
  FUN_00721410();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_009a23f0(size_t param_1,undefined4 param_2,void *param_3,char param_4)

{
  void *_Dst;
  int in_ECX;
  
  *(size_t *)(in_ECX + 0x28) = param_1;
  *(undefined4 *)(in_ECX + 0x2c) = param_2;
  if (param_4 != '\0') {
    *(undefined1 *)(in_ECX + 0x34) = 1;
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x30));
    _Dst = (void *)FUN_00401f00(param_1);
    *(void **)(in_ECX + 0x30) = _Dst;
    _memcpy(_Dst,param_3,param_1);
    return;
  }
  *(undefined1 *)(in_ECX + 0x34) = 0;
  *(void **)(in_ECX + 0x30) = param_3;
  return;
}



undefined4 FUN_009a2450(uint param_1)

{
  if (DAT_00b4295c == '\0') {
    FUN_00783d70();
  }
  return *(undefined4 *)(&DAT_00b42914 + (param_1 >> 8 & 0xff) * 4);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_009a2480(char *param_1,char *param_2,int param_3,long *param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  char *_Str;
  long lVar4;
  char *local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_10c;
  if (param_3 + 1U < 0x104) {
    uVar1 = 0;
  }
  else {
    _strcpy_s(local_108,0x104,param_1);
    _strcpy_s(param_2,0x104,param_1);
    pcVar2 = _strchr(local_108,0x5f);
    if (pcVar2 != (char *)0x0) {
      iVar3 = _isdigit((int)pcVar2[1]);
      if ((iVar3 != 0) && (pcVar2[2] == '\0')) {
        pcVar2 = _strtok_s(local_108,"_",&local_10c);
        _Str = _strtok_s((char *)0x0,"_",&local_10c);
        if (_Str != (char *)0x0) {
          lVar4 = _atol(_Str);
          *param_4 = lVar4;
          FUN_00434900(param_2,param_3,pcVar2);
        }
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_009a2570(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_108;
  cVar1 = FUN_009a2480(param_1,local_108,0x104,param_3);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar3 = 0;
  if (DAT_00b3245c != 0) {
    puVar4 = &DAT_00b32460;
    do {
      iVar2 = __stricmp(local_108,(char *)puVar4[1]);
      if (iVar2 == 0) {
        *param_2 = *puVar4;
        return 1;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
    } while (uVar3 < DAT_00b3245c);
  }
  return 0;
}



undefined4 FUN_009a2640(char *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  if (DAT_00b3245c != 0) {
    puVar3 = &DAT_00b32460;
    do {
      iVar1 = __stricmp(param_1,(char *)puVar3[1]);
      if (iVar1 == 0) {
        return *puVar3;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 2;
    } while (uVar2 < DAT_00b3245c);
  }
  return 0;
}



undefined4 FUN_009a2690(undefined4 param_1)

{
  char cVar1;
  int local_8;
  undefined1 local_4 [4];
  
  cVar1 = FUN_009a2570(param_1,&local_8,local_4);
  if (cVar1 != '\0') {
    switch(local_8) {
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
      return 7;
    }
  }
  return 0;
}



undefined4 FUN_009a26f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_009a2640(*(undefined4 *)(param_1 + 0xc));
  if (iVar1 == 0) {
    return 0x80000040;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  switch(iVar1) {
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
    iVar2 = 7;
    break;
  default:
    iVar2 = 0;
  }
  *(uint *)(param_1 + 0x14) =
       (uint)(byte)(&DAT_00b4294c)[iVar2] | *(uint *)(param_1 + 0x14) & 0xffffff00;
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x28) = 0x10;
    *(undefined4 *)(param_1 + 0x2c) = 0x10;
    *(undefined1 *)(param_1 + 0x34) = 0;
    *(undefined **)(param_1 + 0x30) = &DAT_00b329c4;
    return 0;
  }
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x28) = 0x10;
    *(undefined4 *)(param_1 + 0x2c) = 0x10;
    *(undefined1 *)(param_1 + 0x34) = 0;
    *(undefined **)(param_1 + 0x30) = &DAT_00b329d4;
  }
  return 0;
}



int FUN_009a27a0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_009a92e0(param_2);
  if (iVar2 == 0) {
    return 1;
  }
  cVar1 = (**(code **)(*param_1 + 0x30))(param_2,iVar2,0);
  return (-(uint)(cVar1 != '\0') & 0x7fffffb0) + 0x80000050;
}



undefined4 FUN_009a27e0(int param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  char *_Dst;
  char *pcVar4;
  int iVar5;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  iVar1 = param_1;
  pcVar3 = *(char **)(param_1 + 0xc);
  pcVar4 = pcVar3 + 1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  _Dst = (char *)FUN_00401f00(pcVar3 + (1 - (int)pcVar4));
  _strcpy_s(_Dst,(rsize_t)(pcVar3 + (1 - (int)pcVar4)),*(char **)(iVar1 + 0xc));
  pcVar4 = _strstr(_Dst,"@@");
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
    local_8 = 0;
    cVar2 = FUN_009a55c0(_Dst,&param_1);
    if (cVar2 != '\0') {
      FUN_00401f20(_Dst);
      iVar5 = FUN_009a5610(param_1,&local_8,local_4);
      *(uint *)(iVar1 + 0x14) =
           (uint)(byte)(&DAT_00b4294c)[iVar5] | *(uint *)(iVar1 + 0x14) & 0xffffff00;
      if (param_1 != 0) {
        *(int *)(iVar1 + 0x10) = param_1;
        *(undefined4 *)(iVar1 + 0x20) = local_8;
        return 0;
      }
    }
  }
  return 0x80000040;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_009a28a0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,char param_5,
                char param_6)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float local_40 [4];
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
  
  if (param_3 != 7) {
    if (param_3 == 9) {
      switch(param_4) {
      case 3:
      case 4:
        local_40[0] = _DAT_00baaa80 * _DAT_00baa9e0;
        local_40[1] = _DAT_00baa9e4 * _DAT_00baaa80;
        local_40[2] = _DAT_00baa9e8 * _DAT_00baaa80;
        local_40[3] = _DAT_00baa9ec * _DAT_00baaa80;
        local_30 = _DAT_00baa9f0 * _DAT_00baaa80;
        local_2c = _DAT_00baa9f4 * _DAT_00baaa80;
        local_28 = _DAT_00baa9f8 * _DAT_00baaa80;
        local_24 = _DAT_00baa9fc * _DAT_00baaa80;
        local_20 = _DAT_00baaa00 * _DAT_00baaa80;
        local_1c = _DAT_00baaa04 * _DAT_00baaa80;
        local_18 = _DAT_00baaa08 * _DAT_00baaa80;
        local_14 = _DAT_00baaa0c * _DAT_00baaa80;
        local_10 = _DAT_00baaa10 * _DAT_00baaa80;
        local_c = _DAT_00baaa14 * _DAT_00baaa80;
        local_8 = _DAT_00baaa18 * _DAT_00baaa80;
        local_4 = _DAT_00baaa80 * _DAT_00baaa1c;
        pfVar3 = local_40;
        pfVar4 = (float *)&DAT_00baa950;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar4 = *pfVar3;
          pfVar3 = pfVar3 + 1;
          pfVar4 = pfVar4 + 1;
        }
        if (param_5 != '\0') {
          D3DXMatrixInverse(&DAT_00baa950,0,&DAT_00baa950);
        }
        if (param_6 != '\0') {
          D3DXMatrixTranspose(&DAT_00baa950,&DAT_00baa950);
        }
        cVar1 = (**(code **)(*param_1 + 0x30))(param_2,&DAT_00baa950,0);
        return (-(uint)(cVar1 != '\0') & 0x7fffffb0) + 0x80000050;
      default:
        goto switchD_009a2aae_caseD_5;
      case 7:
      case 10:
        D3DXVec4Transform(&DAT_00baaa60,&DAT_00baaa80,&DAT_00baa9e0);
        puVar5 = (undefined4 *)&DAT_00baaa60;
        break;
      case 9:
        D3DXMatrixMultiply(&DAT_00baa950,&DAT_00baa9e0,&DAT_00baaa20);
        if (param_5 != '\0') {
          D3DXMatrixInverse(&DAT_00baa950,0,&DAT_00baa950);
        }
        if (param_6 != '\0') {
          D3DXMatrixTranspose(&DAT_00baa950,&DAT_00baa950);
        }
        puVar5 = &DAT_00baa950;
      }
      goto LAB_009a2925;
    }
    if (param_3 != 10) {
      return 1;
    }
  }
  switch(param_4) {
  case 3:
  case 4:
    puVar5 = (undefined4 *)&DAT_00baaa60;
    _DAT_00baaa60 = _DAT_00baaa80 * _DAT_00baaa70;
    _DAT_00baaa64 = _DAT_00baaa74 * _DAT_00baaa80;
    _DAT_00baaa68 = _DAT_00baaa78 * _DAT_00baaa80;
    _DAT_00baaa6c = _DAT_00baaa80 * _DAT_00baaa7c;
LAB_009a2925:
    cVar1 = (**(code **)(*param_1 + 0x30))(param_2,puVar5,0);
    return (-(uint)(cVar1 != '\0') & 0x7fffffb0) + 0x80000050;
  default:
switchD_009a2aae_caseD_5:
    return 1;
  case 7:
  case 10:
    _DAT_00baaa60 = _DAT_00baaa70 * _DAT_00baaa80;
    _DAT_00baaa64 = _DAT_00baaa84 * _DAT_00baaa74;
    _DAT_00baaa68 = _DAT_00baaa88 * _DAT_00baaa78;
    _DAT_00baaa6c = _DAT_00baaa8c * _DAT_00baaa7c;
    break;
  case 9:
    D3DXVec4Transform(&DAT_00baaa60,&DAT_00baaa70,&DAT_00baaa20);
  }
  cVar1 = (**(code **)(*param_1 + 0x30))(param_2,&DAT_00baaa60,0);
  return (-(uint)(cVar1 != '\0') & 0x7fffffb0) + 0x80000050;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_009a2bd0(int *param_1,undefined4 param_2,int param_3,int param_4,char param_5,char param_6)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float local_40 [4];
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
  
  if (param_3 != 7) {
    if (param_3 == 9) {
      if (param_4 < 3) {
        return 1;
      }
      if (4 < param_4) {
        return 1;
      }
      fVar1 = 1.0 / _DAT_00baaa80;
      local_40[0] = fVar1 * _DAT_00baa9e0;
      local_40[1] = _DAT_00baa9e4 * fVar1;
      local_40[2] = _DAT_00baa9e8 * fVar1;
      local_40[3] = _DAT_00baa9ec * fVar1;
      local_30 = _DAT_00baa9f0 * fVar1;
      local_2c = _DAT_00baa9f4 * fVar1;
      local_28 = _DAT_00baa9f8 * fVar1;
      local_24 = _DAT_00baa9fc * fVar1;
      local_20 = _DAT_00baaa00 * fVar1;
      local_1c = _DAT_00baaa04 * fVar1;
      local_18 = _DAT_00baaa08 * fVar1;
      local_14 = _DAT_00baaa0c * fVar1;
      local_10 = _DAT_00baaa10 * fVar1;
      local_c = _DAT_00baaa14 * fVar1;
      local_8 = _DAT_00baaa18 * fVar1;
      local_4 = fVar1 * _DAT_00baaa1c;
      pfVar4 = local_40;
      pfVar5 = (float *)&DAT_00baa950;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar5 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar5 = pfVar5 + 1;
      }
      if (param_5 != '\0') {
        D3DXMatrixInverse(&DAT_00baa950,0,&DAT_00baa950);
      }
      if (param_6 != '\0') {
        D3DXMatrixTranspose(&DAT_00baa950,&DAT_00baa950);
      }
      puVar6 = &DAT_00baa950;
      goto LAB_009a2d24;
    }
    if (param_3 != 10) {
      return 1;
    }
  }
  switch(param_4) {
  case 3:
  case 4:
    _DAT_00baaa6c = 1.0 / _DAT_00baaa80;
    _DAT_00baaa60 = _DAT_00baaa6c * _DAT_00baaa70;
    _DAT_00baaa64 = _DAT_00baaa74 * _DAT_00baaa6c;
    _DAT_00baaa68 = _DAT_00baaa78 * _DAT_00baaa6c;
    _DAT_00baaa6c = _DAT_00baaa6c * _DAT_00baaa7c;
    cVar2 = (**(code **)(*param_1 + 0x30))(param_2,&DAT_00baaa60,0);
    return (-(uint)(cVar2 != '\0') & 0x7fffffb0) + 0x80000050;
  default:
    return 1;
  case 7:
  case 10:
    _DAT_00baaa60 = _DAT_00baaa70 / _DAT_00baaa80;
    puVar6 = (undefined4 *)&DAT_00baaa60;
    _DAT_00baaa64 = _DAT_00baaa74 / _DAT_00baaa84;
    _DAT_00baaa68 = _DAT_00baaa78 / _DAT_00baaa88;
    _DAT_00baaa6c = _DAT_00baaa7c / _DAT_00baaa8c;
  }
LAB_009a2d24:
  cVar2 = (**(code **)(*param_1 + 0x30))(param_2,puVar6,0);
  return (-(uint)(cVar2 != '\0') & 0x7fffffb0) + 0x80000050;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_009a2e50(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  switch(param_3) {
  case 3:
  case 4:
    switch(param_4) {
    case 3:
    case 4:
LAB_009a2ef4:
      _DAT_00baaa6c = _DAT_00baaa7c + _DAT_00baaa8c;
      _DAT_00baaa68 = _DAT_00baaa78 + _DAT_00baaa88;
      _DAT_00baaa64 = _DAT_00baaa74 + _DAT_00baaa84;
      _DAT_00baaa60 = _DAT_00baaa70 + _DAT_00baaa80;
      cVar1 = (**(code **)(*param_1 + 0x30))(param_2,&DAT_00baaa60,0);
      return (-(uint)(cVar1 != '\0') & 0x7fffffb0) + 0x80000050;
    case 7:
    case 10:
      _DAT_00baaa64 = _DAT_00baaa84 + _DAT_00baaa70;
      _DAT_00baaa68 = _DAT_00baaa88 + _DAT_00baaa70;
      _DAT_00baaa6c = _DAT_00baaa70 + _DAT_00baaa8c;
LAB_009a2f55:
      _DAT_00baaa60 = _DAT_00baaa80 + _DAT_00baaa70;
      cVar1 = (**(code **)(*param_1 + 0x30))(param_2,&DAT_00baaa60,0);
      return (-(uint)(cVar1 != '\0') & 0x7fffffb0) + 0x80000050;
    }
    break;
  case 7:
  case 10:
    switch(param_4) {
    case 3:
    case 4:
      _DAT_00baaa64 = _DAT_00baaa74 + _DAT_00baaa80;
      _DAT_00baaa68 = _DAT_00baaa78 + _DAT_00baaa80;
      _DAT_00baaa6c = _DAT_00baaa80 + _DAT_00baaa7c;
      goto LAB_009a2f55;
    case 7:
    case 10:
      goto LAB_009a2ef4;
    }
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_009a3080(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  switch(param_3) {
  case 3:
  case 4:
    switch(param_4) {
    case 3:
    case 4:
LAB_009a3124:
      _DAT_00baaa6c = _DAT_00baaa7c - _DAT_00baaa8c;
      _DAT_00baaa68 = _DAT_00baaa78 - _DAT_00baaa88;
      _DAT_00baaa64 = _DAT_00baaa74 - _DAT_00baaa84;
      _DAT_00baaa60 = _DAT_00baaa70 - _DAT_00baaa80;
      cVar1 = (**(code **)(*param_1 + 0x30))(param_2,&DAT_00baaa60,0);
      return (-(uint)(cVar1 != '\0') & 0x7fffffb0) + 0x80000050;
    case 7:
    case 10:
      _DAT_00baaa64 = _DAT_00baaa70 - _DAT_00baaa84;
      _DAT_00baaa68 = _DAT_00baaa70 - _DAT_00baaa88;
      _DAT_00baaa6c = _DAT_00baaa70 - _DAT_00baaa8c;
LAB_009a3185:
      _DAT_00baaa60 = _DAT_00baaa70 - _DAT_00baaa80;
      cVar1 = (**(code **)(*param_1 + 0x30))(param_2,&DAT_00baaa60,0);
      return (-(uint)(cVar1 != '\0') & 0x7fffffb0) + 0x80000050;
    }
    break;
  case 7:
  case 10:
    switch(param_4) {
    case 3:
    case 4:
      _DAT_00baaa64 = _DAT_00baaa74 - _DAT_00baaa80;
      _DAT_00baaa68 = _DAT_00baaa78 - _DAT_00baaa80;
      _DAT_00baaa6c = _DAT_00baaa7c - _DAT_00baaa80;
      goto LAB_009a3185;
    case 7:
    case 10:
      goto LAB_009a3124;
    }
  }
  return 1;
}



bool FUN_009a32b0(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  return *(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 0xb;
}



void FUN_009a32e0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00ab297c;
  FUN_009a9900();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_009a3310(int *param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  float10 fVar7;
  int in_stack_0000001c;
  float *pfVar8;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar6 = 0;
  switch(uVar2) {
  case 1:
  case 2:
    pcVar5 = *(code **)(*param_1 + 0x30);
    pfVar8 = (float *)0x0;
    goto LAB_009a353a;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    iVar4 = FUN_006ff9c0(PTR_s_NDL_UpdateTime_00b329e4);
    if (iVar4 == 0) {
      return 0x80000010;
    }
    fVar1 = *(float *)(iVar4 + 0xc);
    switch(uVar2) {
    case 3:
      local_10 = fVar1;
      local_c = fVar1;
      local_8 = fVar1;
      local_4 = fVar1;
      break;
    case 4:
      fVar7 = (float10)FUN_00986300();
      local_10 = (float)fVar7;
      local_c = local_10;
      local_8 = local_10;
      local_4 = local_10;
      break;
    case 5:
      fVar7 = (float10)FUN_00986000();
      local_10 = (float)fVar7;
      local_c = local_10;
      local_8 = local_10;
      local_4 = local_10;
      break;
    case 6:
      fVar7 = (float10)FUN_00983af0();
      local_10 = (float)fVar7;
      local_c = local_10;
      local_8 = local_10;
      local_4 = local_10;
      break;
    case 7:
      local_10 = fVar1;
      fVar7 = (float10)FUN_00986300();
      local_c = (float)fVar7;
      fVar7 = (float10)FUN_00986000();
      local_8 = (float)fVar7;
      fVar7 = (float10)FUN_00983af0();
      local_4 = (float)fVar7;
      break;
    default:
      uVar6 = 0x80000010;
    }
    break;
  case 8:
    iVar4 = *(int *)(in_stack_0000001c + 0x10);
    if (iVar4 == 0) {
      return 0;
    }
    local_10 = *(float *)(iVar4 + 0x28);
    local_c = *(float *)(iVar4 + 0x2c);
    local_8 = *(float *)(iVar4 + 0x30);
    local_4 = *(float *)(iVar4 + 0x50);
    break;
  case 9:
    iVar4 = *(int *)(in_stack_0000001c + 0x10);
    if (iVar4 == 0) {
      return 0;
    }
    local_10 = *(float *)(iVar4 + 0x1c);
    local_c = *(float *)(iVar4 + 0x20);
    local_8 = *(float *)(iVar4 + 0x24);
    local_4 = *(float *)(iVar4 + 0x50);
    break;
  case 10:
    iVar4 = *(int *)(in_stack_0000001c + 0x10);
    if (iVar4 == 0) {
      return 0;
    }
    local_10 = *(float *)(iVar4 + 0x34);
    local_c = *(float *)(iVar4 + 0x38);
    local_8 = *(float *)(iVar4 + 0x3c);
    local_4 = *(float *)(iVar4 + 0x50);
    break;
  case 0xb:
    iVar4 = *(int *)(in_stack_0000001c + 0x10);
    if (iVar4 == 0) {
      return 0;
    }
    local_10 = *(float *)(iVar4 + 0x40);
    local_c = *(float *)(iVar4 + 0x44);
    local_8 = *(float *)(iVar4 + 0x48);
    local_4 = *(float *)(iVar4 + 0x50);
    break;
  case 0xc:
    iVar4 = *(int *)(in_stack_0000001c + 0x10);
    if (iVar4 == 0) {
      return 0;
    }
    local_10 = *(float *)(iVar4 + 0x4c);
    local_c = *(float *)(iVar4 + 0x4c);
    local_8 = *(float *)(iVar4 + 0x4c);
    local_4 = *(float *)(iVar4 + 0x4c);
    break;
  default:
    goto switchD_009a332b_default;
  }
  pcVar5 = *(code **)(*param_1 + 0x30);
  pfVar8 = &local_10;
LAB_009a353a:
  cVar3 = (*pcVar5)(param_2,pfVar8,0);
  if (cVar3 == '\0') {
    uVar6 = 0x80000050;
  }
switchD_009a332b_default:
  return uVar6;
}



undefined4
FUN_009a3970(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  undefined1 local_4 [4];
  
  iVar3 = param_2;
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  bVar1 = *(byte *)(param_2 + 0x15);
  if (DAT_00b4295c == '\0') {
    FUN_00783d70();
  }
  uVar4 = param_8;
  uVar6 = FUN_009a8290(param_8,*(undefined4 *)(&DAT_00b42914 + (uint)bVar1 * 4),uVar2);
  uVar2 = *(undefined4 *)(iVar3 + 0x10);
  iVar7 = FUN_009a5610(uVar2,&param_2,local_4);
  if (iVar7 == 0) {
    return 0x80000010;
  }
  FUN_009a66f0(&DAT_00baa898,param_2 * 0x10,uVar2,uVar6,param_3,param_4,param_5,param_6,param_7,
               uVar4,param_9,param_10,param_11);
  cVar5 = (**(code **)(*param_1 + 0x30))(iVar3,&DAT_00baa898,0);
  if (cVar5 == '\0') {
    unaff_ESI = 0x80000050;
  }
  return unaff_ESI;
}



undefined4 FUN_009a3a60(int param_1,int param_2,undefined4 param_3,undefined4 param_4,float param_5)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  switch(uVar1) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    iVar2 = FUN_006ff9c0(PTR_s_NDL_UpdateTime_00b329e4);
    if (iVar2 == 0) {
      return 0x80000010;
    }
    param_5 = *(float *)(iVar2 + 0xc);
    switch(uVar1) {
    case 3:
      break;
    case 4:
      fVar3 = (float10)FUN_00986300();
      param_5 = (float)fVar3;
      break;
    case 5:
      fVar3 = (float10)FUN_00986000();
      param_5 = (float)fVar3;
      break;
    case 6:
      fVar3 = (float10)FUN_00983af0();
      param_5 = (float)fVar3;
      break;
    case 7:
      param_1 = param_1 * 0x10;
      *(float *)(&DAT_00baaa70 + param_1) = param_5;
      fVar3 = (float10)FUN_00986300();
      *(float *)(&DAT_00baaa74 + param_1) = (float)fVar3;
      fVar3 = (float10)FUN_00986000();
      *(float *)(&DAT_00baaa78 + param_1) = (float)fVar3;
      fVar3 = (float10)FUN_00983af0();
      *(float *)(&DAT_00baaa7c + param_1) = (float)fVar3;
      return 7;
    default:
      goto switchD_009a3a74_caseD_1;
    }
    param_1 = param_1 * 0x10;
    *(float *)(&DAT_00baaa70 + param_1) = param_5;
    *(float *)(&DAT_00baaa74 + param_1) = param_5;
    *(float *)(&DAT_00baaa78 + param_1) = param_5;
    *(float *)(&DAT_00baaa7c + param_1) = param_5;
    return 7;
  case 8:
    iVar2 = *(int *)((int)param_5 + 0x10);
    if (iVar2 != 0) {
      param_1 = param_1 * 0x10;
      *(undefined4 *)(&DAT_00baaa70 + param_1) = *(undefined4 *)(iVar2 + 0x28);
      *(undefined4 *)(&DAT_00baaa74 + param_1) = *(undefined4 *)(iVar2 + 0x2c);
      *(undefined4 *)(&DAT_00baaa78 + param_1) = *(undefined4 *)(iVar2 + 0x30);
      *(undefined4 *)(&DAT_00baaa7c + param_1) = *(undefined4 *)(iVar2 + 0x50);
      return 10;
    }
    break;
  case 9:
    iVar2 = *(int *)((int)param_5 + 0x10);
    if (iVar2 != 0) {
      param_1 = param_1 * 0x10;
      *(undefined4 *)(&DAT_00baaa70 + param_1) = *(undefined4 *)(iVar2 + 0x1c);
      *(undefined4 *)(&DAT_00baaa74 + param_1) = *(undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)(&DAT_00baaa78 + param_1) = *(undefined4 *)(iVar2 + 0x24);
      *(undefined4 *)(&DAT_00baaa7c + param_1) = *(undefined4 *)(iVar2 + 0x50);
      return 10;
    }
    break;
  case 10:
    iVar2 = *(int *)((int)param_5 + 0x10);
    if (iVar2 != 0) {
      param_1 = param_1 * 0x10;
      *(undefined4 *)(&DAT_00baaa70 + param_1) = *(undefined4 *)(iVar2 + 0x34);
      *(undefined4 *)(&DAT_00baaa74 + param_1) = *(undefined4 *)(iVar2 + 0x38);
      *(undefined4 *)(&DAT_00baaa78 + param_1) = *(undefined4 *)(iVar2 + 0x3c);
      *(undefined4 *)(&DAT_00baaa7c + param_1) = *(undefined4 *)(iVar2 + 0x50);
      return 10;
    }
    break;
  case 0xb:
    iVar2 = *(int *)((int)param_5 + 0x10);
    if (iVar2 != 0) {
      param_1 = param_1 * 0x10;
      *(undefined4 *)(&DAT_00baaa70 + param_1) = *(undefined4 *)(iVar2 + 0x40);
      *(undefined4 *)(&DAT_00baaa74 + param_1) = *(undefined4 *)(iVar2 + 0x44);
      *(undefined4 *)(&DAT_00baaa78 + param_1) = *(undefined4 *)(iVar2 + 0x48);
      *(undefined4 *)(&DAT_00baaa7c + param_1) = *(undefined4 *)(iVar2 + 0x50);
      return 10;
    }
    break;
  case 0xc:
    iVar2 = *(int *)((int)param_5 + 0x10);
    if (iVar2 != 0) {
      param_1 = param_1 * 0x10;
      *(undefined4 *)(&DAT_00baaa70 + param_1) = *(undefined4 *)(iVar2 + 0x4c);
      *(undefined4 *)(&DAT_00baaa74 + param_1) = *(undefined4 *)(iVar2 + 0x4c);
      *(undefined4 *)(&DAT_00baaa78 + param_1) = *(undefined4 *)(iVar2 + 0x4c);
      *(undefined4 *)(&DAT_00baaa7c + param_1) = *(undefined4 *)(iVar2 + 0x4c);
      return 10;
    }
  }
switchD_009a3a74_caseD_1:
  return 0;
}



undefined4 FUN_009a3d20(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  
  puVar1 = *(undefined4 **)(param_2 + 0x30);
  uVar2 = *(uint *)(param_2 + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  if (*(int *)(&DAT_00b428d8 + (uVar2 & 0xff) * 4) == 3) {
    *(undefined4 *)(&DAT_00baaa70 + param_1 * 0x10) = *puVar1;
    return 3;
  }
  uVar2 = *(uint *)(param_2 + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  if (*(int *)(&DAT_00b428d8 + (uVar2 & 0xff) * 4) == 4) {
    *(undefined4 *)(&DAT_00baaa70 + param_1 * 0x10) = *puVar1;
    return 4;
  }
  uVar2 = *(uint *)(param_2 + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  if (*(int *)(&DAT_00b428d8 + (uVar2 & 0xff) * 4) == 5) {
    *(undefined4 *)(&DAT_00baaa70 + param_1 * 0x10) = *puVar1;
    *(undefined4 *)(&DAT_00baaa74 + param_1 * 0x10) = puVar1[1];
    return 5;
  }
  uVar2 = *(uint *)(param_2 + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  if (*(int *)(&DAT_00b428d8 + (uVar2 & 0xff) * 4) == 6) {
    param_1 = param_1 * 0x10;
    *(undefined4 *)(&DAT_00baaa70 + param_1) = *puVar1;
    *(undefined4 *)(&DAT_00baaa74 + param_1) = puVar1[1];
    *(undefined4 *)(&DAT_00baaa78 + param_1) = puVar1[2];
    return 6;
  }
  cVar3 = FUN_007833a0();
  if (cVar3 != '\0') {
    param_1 = param_1 * 0x10;
    *(undefined4 *)(&DAT_00baaa70 + param_1) = *puVar1;
    *(undefined4 *)(&DAT_00baaa74 + param_1) = puVar1[1];
    *(undefined4 *)(&DAT_00baaa78 + param_1) = puVar1[2];
    *(undefined4 *)(&DAT_00baaa7c + param_1) = puVar1[3];
    return 7;
  }
  cVar3 = FUN_00782de0();
  if (cVar3 != '\0') {
    param_1 = param_1 * 0x40;
    *(undefined4 *)(&DAT_00baa9e0 + param_1) = *puVar1;
    *(undefined4 *)(&DAT_00baa9e4 + param_1) = puVar1[1];
    *(undefined4 *)(&DAT_00baa9e8 + param_1) = puVar1[2];
    *(undefined4 *)(&DAT_00baa9ec + param_1) = 0;
    *(undefined4 *)(&DAT_00baa9f0 + param_1) = puVar1[3];
    *(undefined4 *)(&DAT_00baa9f4 + param_1) = puVar1[4];
    *(undefined4 *)(&DAT_00baa9f8 + param_1) = puVar1[5];
    *(undefined4 *)(&DAT_00baa9fc + param_1) = 0;
    *(undefined4 *)(&DAT_00baaa00 + param_1) = puVar1[6];
    *(undefined4 *)(&DAT_00baaa04 + param_1) = puVar1[7];
    *(undefined4 *)(&DAT_00baaa08 + param_1) = puVar1[8];
    *(undefined4 *)(&DAT_00baaa0c + param_1) = 0;
    *(undefined4 *)(&DAT_00baaa10 + param_1) = 0;
    *(undefined4 *)(&DAT_00baaa14 + param_1) = 0;
    *(undefined4 *)(&DAT_00baaa18 + param_1) = 0;
    *(undefined4 *)(&DAT_00baaa1c + param_1) = 0x3f800000;
    return 8;
  }
  cVar3 = FUN_00782e10();
  if (cVar3 != '\0') {
    param_1 = param_1 * 0x40;
    *(undefined4 *)(&DAT_00baa9e0 + param_1) = *puVar1;
    *(undefined4 *)(&DAT_00baa9e4 + param_1) = puVar1[1];
    *(undefined4 *)(&DAT_00baa9e8 + param_1) = puVar1[2];
    *(undefined4 *)(&DAT_00baa9ec + param_1) = puVar1[3];
    *(undefined4 *)(&DAT_00baa9f0 + param_1) = puVar1[4];
    *(undefined4 *)(&DAT_00baa9f4 + param_1) = puVar1[5];
    *(undefined4 *)(&DAT_00baa9f8 + param_1) = puVar1[6];
    *(undefined4 *)(&DAT_00baa9fc + param_1) = puVar1[7];
    *(undefined4 *)(&DAT_00baaa00 + param_1) = puVar1[8];
    *(undefined4 *)(&DAT_00baaa04 + param_1) = puVar1[9];
    *(undefined4 *)(&DAT_00baaa08 + param_1) = puVar1[10];
    *(undefined4 *)(&DAT_00baaa0c + param_1) = puVar1[0xb];
    *(undefined4 *)(&DAT_00baaa10 + param_1) = puVar1[0xc];
    *(undefined4 *)(&DAT_00baaa14 + param_1) = puVar1[0xd];
    *(undefined4 *)(&DAT_00baaa18 + param_1) = puVar1[0xe];
    *(undefined4 *)(&DAT_00baaa1c + param_1) = puVar1[0xf];
    return 9;
  }
  cVar3 = FUN_007833d0();
  if (cVar3 != '\0') {
    param_1 = param_1 * 0x10;
    *(undefined4 *)(&DAT_00baaa70 + param_1) = *puVar1;
    *(undefined4 *)(&DAT_00baaa74 + param_1) = puVar1[1];
    *(undefined4 *)(&DAT_00baaa78 + param_1) = puVar1[2];
    *(undefined4 *)(&DAT_00baaa7c + param_1) = puVar1[3];
    return 10;
  }
  return 0;
}



undefined4 FUN_009a4010(int param_1,int param_2,int param_3)

{
  uint uVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  
  if (param_3 == 0) {
    return 1;
  }
  iVar4 = FUN_006ff9c0(*(undefined4 *)(param_2 + 0xc));
  if (iVar4 == 0) {
    return 0x80000010;
  }
  piVar5 = (int *)FUN_009a9040(param_2,iVar4);
  uVar1 = *(uint *)(param_2 + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  if (*(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 3) {
    fVar2 = (float)*piVar5;
    if (*piVar5 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    *(float *)(&DAT_00baaa70 + param_1 * 0x10) = fVar2;
    return 3;
  }
  uVar1 = *(uint *)(param_2 + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  if (*(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 4) {
    *(int *)(&DAT_00baaa70 + param_1 * 0x10) = *piVar5;
    return 4;
  }
  cVar3 = FUN_00783340();
  if (cVar3 != '\0') {
    *(int *)(&DAT_00baaa70 + param_1 * 0x10) = *piVar5;
    *(int *)(&DAT_00baaa74 + param_1 * 0x10) = piVar5[1];
    return 5;
  }
  cVar3 = FUN_00783370();
  if (cVar3 != '\0') {
    param_1 = param_1 * 0x10;
    *(int *)(&DAT_00baaa70 + param_1) = *piVar5;
    *(int *)(&DAT_00baaa74 + param_1) = piVar5[1];
    *(int *)(&DAT_00baaa78 + param_1) = piVar5[2];
    return 6;
  }
  cVar3 = FUN_007833a0();
  if (cVar3 != '\0') {
    param_1 = param_1 * 0x10;
    *(int *)(&DAT_00baaa70 + param_1) = *piVar5;
    *(int *)(&DAT_00baaa74 + param_1) = piVar5[1];
    *(int *)(&DAT_00baaa78 + param_1) = piVar5[2];
    *(int *)(&DAT_00baaa7c + param_1) = piVar5[3];
    return 7;
  }
  cVar3 = FUN_00782de0();
  if (cVar3 != '\0') {
    param_1 = param_1 * 0x40;
    *(int *)(&DAT_00baa9e0 + param_1) = *piVar5;
    *(int *)(&DAT_00baa9e4 + param_1) = piVar5[1];
    *(int *)(&DAT_00baa9e8 + param_1) = piVar5[2];
    *(undefined4 *)(&DAT_00baa9ec + param_1) = 0;
    *(int *)(&DAT_00baa9f0 + param_1) = piVar5[3];
    *(int *)(&DAT_00baa9f4 + param_1) = piVar5[4];
    *(int *)(&DAT_00baa9f8 + param_1) = piVar5[5];
    *(undefined4 *)(&DAT_00baa9fc + param_1) = 0;
    *(int *)(&DAT_00baaa00 + param_1) = piVar5[6];
    *(int *)(&DAT_00baaa04 + param_1) = piVar5[7];
    *(int *)(&DAT_00baaa08 + param_1) = piVar5[8];
    *(undefined4 *)(&DAT_00baaa0c + param_1) = 0;
    *(undefined4 *)(&DAT_00baaa10 + param_1) = 0;
    *(undefined4 *)(&DAT_00baaa14 + param_1) = 0;
    *(undefined4 *)(&DAT_00baaa18 + param_1) = 0;
    *(undefined4 *)(&DAT_00baaa1c + param_1) = 0x3f800000;
    return 8;
  }
  cVar3 = FUN_00782e10();
  if (cVar3 != '\0') {
    param_1 = param_1 * 0x40;
    *(int *)(&DAT_00baa9e0 + param_1) = *piVar5;
    *(int *)(&DAT_00baa9e4 + param_1) = piVar5[1];
    *(int *)(&DAT_00baa9e8 + param_1) = piVar5[2];
    *(int *)(&DAT_00baa9ec + param_1) = piVar5[3];
    *(int *)(&DAT_00baa9f0 + param_1) = piVar5[4];
    *(int *)(&DAT_00baa9f4 + param_1) = piVar5[5];
    *(int *)(&DAT_00baa9f8 + param_1) = piVar5[6];
    *(int *)(&DAT_00baa9fc + param_1) = piVar5[7];
    *(int *)(&DAT_00baaa00 + param_1) = piVar5[8];
    *(int *)(&DAT_00baaa04 + param_1) = piVar5[9];
    *(int *)(&DAT_00baaa08 + param_1) = piVar5[10];
    *(int *)(&DAT_00baaa0c + param_1) = piVar5[0xb];
    *(int *)(&DAT_00baaa10 + param_1) = piVar5[0xc];
    *(int *)(&DAT_00baaa14 + param_1) = piVar5[0xd];
    *(int *)(&DAT_00baaa18 + param_1) = piVar5[0xe];
    *(int *)(&DAT_00baaa1c + param_1) = piVar5[0xf];
    return 9;
  }
  cVar3 = FUN_007833d0();
  if (cVar3 != '\0') {
    param_1 = param_1 * 0x10;
    *(int *)(&DAT_00baaa70 + param_1) = *piVar5;
    *(int *)(&DAT_00baaa74 + param_1) = piVar5[1];
    *(int *)(&DAT_00baaa78 + param_1) = piVar5[2];
    *(int *)(&DAT_00baaa7c + param_1) = piVar5[3];
    return 10;
  }
  return 0;
}



void FUN_009a4310(void)

{
  int iVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  ushort uVar4;
  
  uVar4 = 0;
  if (*(short *)(in_ECX + 10) != 0) {
    do {
      iVar1 = *(int *)(in_ECX + 4);
      puVar2 = *(undefined4 **)(iVar1 + (uint)uVar4 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(puVar2 + 1);
        if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        *(undefined4 *)(iVar1 + (uint)uVar4 * 4) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(in_ECX + 10));
  }
  *(undefined2 *)(in_ECX + 0xc) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  return;
}



undefined4
FUN_009a4370(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_retaddr;
  char *pcVar6;
  int local_18;
  int local_14;
  uint uStack_c;
  
  uVar4 = *(uint *)(param_2 + 0x18);
  uVar1 = uVar4 & 0xf0000000;
  iVar2 = (**(code **)(*in_ECX + 0x3c))(uVar4 & 0xfff);
  iVar3 = (**(code **)(*in_ECX + 0x3c))(uVar4 >> 0xc & 0xfff);
  if ((iVar2 == 0) || (iVar3 == 0)) {
    pcVar6 = "Invalid entries in OperatorConstant\n";
  }
  else {
    uVar4 = *(uint *)(iVar2 + 0x14);
    if (DAT_00b4295b == '\0') {
      FUN_00783c70();
    }
    local_18 = *(int *)(&DAT_00b428d8 + (uVar4 & 0xff) * 4);
    uVar4 = *(uint *)(iVar3 + 0x14);
    if (DAT_00b4295b == '\0') {
      FUN_00783c70();
    }
    local_14 = *(int *)(&DAT_00b428d8 + (uVar4 & 0xff) * 4);
    uVar4 = *(uint *)(iVar2 + 0x14) & 0xf0000000;
    if (uVar4 == 0x20000000) {
      local_18 = FUN_009a2690(*(undefined4 *)(iVar2 + 0xc));
      FUN_009a3a60(0,iVar2,param_1,param_2,param_3,param_4,param_5,param_6);
    }
    else if (uVar4 == 0x40000000) {
      FUN_009a3d20(0,iVar2,param_7);
    }
    else if ((uVar4 == 0x30000000) || (uVar4 == 0x10000000)) {
      FUN_009a4010(0,iVar2,param_1,param_2,param_3,param_5,param_6,param_7);
    }
    uVar4 = *(uint *)(iVar3 + 0x14) & 0xf0000000;
    if (uVar4 == 0x20000000) {
      local_14 = FUN_009a2690(*(undefined4 *)(iVar3 + 0xc));
      FUN_009a3a60(1,iVar3,param_1,param_2,param_3,param_4,param_5,param_6);
    }
    else if (uVar4 == 0x30000000) {
      FUN_009a4010(1,iVar3,param_1,param_2,param_3,param_5,param_6,param_7);
    }
    else if ((uVar4 == 0x40000000) || (uVar4 == 0x10000000)) {
      FUN_009a3d20(1,iVar3,param_7);
    }
    if ((local_18 != 0) && (local_14 != 0)) {
      if (0x30000000 < uStack_c) {
        if (uStack_c != 0x40000000) {
          return 1;
        }
        uVar5 = FUN_009a3080(uVar1,unaff_retaddr,local_18,local_14,unaff_EBX,unaff_EBP);
        return uVar5;
      }
      if (uStack_c == 0x30000000) {
        uVar5 = FUN_009a2e50(uVar1,unaff_retaddr,local_18,local_14,unaff_EBX,unaff_EBP);
        return uVar5;
      }
      if (uStack_c == 0x10000000) {
        uVar5 = FUN_009a28a0(uVar1,unaff_retaddr,local_18,local_14,unaff_EBX,unaff_EBP);
        return uVar5;
      }
      if (uStack_c != 0x20000000) {
        return 1;
      }
      uVar5 = FUN_009a2bd0(uVar1,unaff_retaddr,local_18,local_14,unaff_EBX,unaff_EBP);
      return uVar5;
    }
    pcVar6 = "Invalid operands in OperatorConstant\n";
  }
  FUN_00738460(1,0,pcVar6);
  return 1;
}



void FUN_009a4670(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00ab2a44;
  if (in_ECX[1] != 0) {
    FUN_004027f0(3);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_009a46a0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00ab2a4c;
  in_ECX[2] = 2;
  in_ECX[3] = &PTR_FUN_00ab2a44;
  *(undefined2 *)(in_ECX + 5) = 0;
  *(undefined2 *)((int)in_ECX + 0x16) = 0;
  *(undefined2 *)(in_ECX + 6) = 0;
  in_ECX[4] = 0;
  *(undefined2 *)((int)in_ECX + 0x1a) = 1;
  *(undefined1 *)(in_ECX + 7) = 1;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  FUN_009a8bd0(param_1);
  FUN_009a4310();
  return;
}



void FUN_009a4730(byte param_1)

{
  FUN_009a9900();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_009a4750(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_009a46a0(param_1);
  *in_ECX = &PTR_FUN_00ab297c;
  return;
}



void FUN_009a4770(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  *in_ECX = *in_EAX;
  in_ECX[1] = in_EAX[1];
  in_ECX[2] = in_EAX[2];
  in_ECX[3] = in_EAX[3];
  in_ECX[4] = in_EAX[4];
  in_ECX[5] = in_EAX[5];
  in_ECX[6] = in_EAX[6];
  in_ECX[7] = in_EAX[7];
  in_ECX[8] = in_EAX[8];
  in_ECX[9] = in_EAX[9];
  in_ECX[10] = in_EAX[10];
  in_ECX[0xb] = in_EAX[0xb];
  in_ECX[0xc] = in_EAX[0xc];
  in_ECX[0xd] = in_EAX[0xd];
  in_ECX[0xe] = in_EAX[0xe];
  in_ECX[0xf] = in_EAX[0xf];
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_009a47e0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_108;
  cVar1 = FUN_009a2480(param_1,local_108,0x104,param_3);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar3 = 0;
  if (DAT_00b32584 != 0) {
    puVar4 = &DAT_00b32590;
    do {
      iVar2 = __stricmp(local_108,(char *)puVar4[1]);
      if (iVar2 == 0) {
        *param_2 = *puVar4;
        return 1;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
    } while (uVar3 < DAT_00b32584);
  }
  return 0;
}



char FUN_009a48b0(undefined4 param_1,int param_2)

{
  switch(param_1) {
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
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
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
    return (param_2 != 3) + '\b';
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x22:
  case 0x24:
    return '\t';
  case 0x21:
  case 0x23:
    return '\b';
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
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
    return '\a';
  default:
    return '\0';
  }
}



undefined4 FUN_009a4960(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_8;
  undefined4 local_4;
  
  cVar1 = FUN_009a47e0(param_1,&local_8,&local_4);
  if ((cVar1 != '\0') && (local_8 != 0)) {
    uVar2 = FUN_009a48b0(local_8,local_4);
    return uVar2;
  }
  return 0;
}



int FUN_009a4ac0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_009a92e0(param_2);
  if (iVar2 == 0) {
    return 1;
  }
  cVar1 = (**(code **)(*param_1 + 0x28))(param_2,iVar2,0);
  return (-(uint)(cVar1 != '\0') & 0x7fffffb0) + 0x80000050;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_009a4b00(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,char param_5,
                char param_6)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float local_40 [4];
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
  
  if (param_3 != 7) {
    if (param_3 == 9) {
      switch(param_4) {
      case 3:
      case 4:
        local_40[0] = _DAT_00baaa80 * _DAT_00baa9e0;
        local_40[1] = _DAT_00baa9e4 * _DAT_00baaa80;
        local_40[2] = _DAT_00baa9e8 * _DAT_00baaa80;
        local_40[3] = _DAT_00baa9ec * _DAT_00baaa80;
        local_30 = _DAT_00baa9f0 * _DAT_00baaa80;
        local_2c = _DAT_00baa9f4 * _DAT_00baaa80;
        local_28 = _DAT_00baa9f8 * _DAT_00baaa80;
        local_24 = _DAT_00baa9fc * _DAT_00baaa80;
        local_20 = _DAT_00baaa00 * _DAT_00baaa80;
        local_1c = _DAT_00baaa04 * _DAT_00baaa80;
        local_18 = _DAT_00baaa08 * _DAT_00baaa80;
        local_14 = _DAT_00baaa0c * _DAT_00baaa80;
        local_10 = _DAT_00baaa10 * _DAT_00baaa80;
        local_c = _DAT_00baaa14 * _DAT_00baaa80;
        local_8 = _DAT_00baaa18 * _DAT_00baaa80;
        local_4 = _DAT_00baaa80 * _DAT_00baaa1c;
        pfVar3 = local_40;
        pfVar4 = (float *)&DAT_00baa950;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar4 = *pfVar3;
          pfVar3 = pfVar3 + 1;
          pfVar4 = pfVar4 + 1;
        }
        if (param_5 != '\0') {
          D3DXMatrixInverse(&DAT_00baa950,0,&DAT_00baa950);
        }
        if (param_6 != '\0') {
          D3DXMatrixTranspose(&DAT_00baa950,&DAT_00baa950);
        }
        cVar1 = (**(code **)(*param_1 + 0x28))(param_2,&DAT_00baa950,0);
        return (-(uint)(cVar1 != '\0') & 0x7fffffb0) + 0x80000050;
      default:
        goto switchD_009a4d0e_caseD_5;
      case 7:
      case 10:
        D3DXVec4Transform(&DAT_00baaa60,&DAT_00baaa80,&DAT_00baa9e0);
        puVar5 = (undefined4 *)&DAT_00baaa60;
        break;
      case 9:
        D3DXMatrixMultiply(&DAT_00baa950,&DAT_00baa9e0,&DAT_00baaa20);
        if (param_5 != '\0') {
          D3DXMatrixInverse(&DAT_00baa950,0,&DAT_00baa950);
        }
        if (param_6 != '\0') {
          D3DXMatrixTranspose(&DAT_00baa950,&DAT_00baa950);
        }
        puVar5 = &DAT_00baa950;
      }
      goto LAB_009a4b85;
    }
    if (param_3 != 10) {
      return 1;
    }
  }
  switch(param_4) {
  case 3:
  case 4:
    puVar5 = (undefined4 *)&DAT_00baaa60;
    _DAT_00baaa60 = _DAT_00baaa80 * _DAT_00baaa70;
    _DAT_00baaa64 = _DAT_00baaa74 * _DAT_00baaa80;
    _DAT_00baaa68 = _DAT_00baaa78 * _DAT_00baaa80;
    _DAT_00baaa6c = _DAT_00baaa80 * _DAT_00baaa7c;
LAB_009a4b85:
    cVar1 = (**(code **)(*param_1 + 0x28))(param_2,puVar5,0);
    return (-(uint)(cVar1 != '\0') & 0x7fffffb0) + 0x80000050;
  default:
switchD_009a4d0e_caseD_5:
    return 1;
  case 7:
  case 10:
    _DAT_00baaa60 = _DAT_00baaa70 * _DAT_00baaa80;
    _DAT_00baaa64 = _DAT_00baaa84 * _DAT_00baaa74;
    _DAT_00baaa68 = _DAT_00baaa88 * _DAT_00baaa78;
    _DAT_00baaa6c = _DAT_00baaa8c * _DAT_00baaa7c;
    break;
  case 9:
    D3DXVec4Transform(&DAT_00baaa60,&DAT_00baaa70,&DAT_00baaa20);
  }
  cVar1 = (**(code **)(*param_1 + 0x28))(param_2,&DAT_00baaa60,0);
  return (-(uint)(cVar1 != '\0') & 0x7fffffb0) + 0x80000050;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_009a4e30(int *param_1,undefined4 param_2,int param_3,int param_4,char param_5,char param_6)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float local_40 [4];
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
  
  if (param_3 != 7) {
    if (param_3 == 9) {
      if (param_4 < 3) {
        return 1;
      }
      if (4 < param_4) {
        return 1;
      }
      fVar1 = 1.0 / _DAT_00baaa80;
      local_40[0] = fVar1 * _DAT_00baa9e0;
      local_40[1] = _DAT_00baa9e4 * fVar1;
      local_40[2] = _DAT_00baa9e8 * fVar1;
      local_40[3] = _DAT_00baa9ec * fVar1;
      local_30 = _DAT_00baa9f0 * fVar1;
      local_2c = _DAT_00baa9f4 * fVar1;
      local_28 = _DAT_00baa9f8 * fVar1;
      local_24 = _DAT_00baa9fc * fVar1;
      local_20 = _DAT_00baaa00 * fVar1;
      local_1c = _DAT_00baaa04 * fVar1;
      local_18 = _DAT_00baaa08 * fVar1;
      local_14 = _DAT_00baaa0c * fVar1;
      local_10 = _DAT_00baaa10 * fVar1;
      local_c = _DAT_00baaa14 * fVar1;
      local_8 = _DAT_00baaa18 * fVar1;
      local_4 = fVar1 * _DAT_00baaa1c;
      pfVar4 = local_40;
      pfVar5 = (float *)&DAT_00baa950;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar5 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar5 = pfVar5 + 1;
      }
      if (param_5 != '\0') {
        D3DXMatrixInverse(&DAT_00baa950,0,&DAT_00baa950);
      }
      if (param_6 != '\0') {
        D3DXMatrixTranspose(&DAT_00baa950,&DAT_00baa950);
      }
      puVar6 = &DAT_00baa950;
      goto LAB_009a4f84;
    }
    if (param_3 != 10) {
      return 1;
    }
  }
  switch(param_4) {
  case 3:
  case 4:
    _DAT_00baaa6c = 1.0 / _DAT_00baaa80;
    _DAT_00baaa60 = _DAT_00baaa6c * _DAT_00baaa70;
    _DAT_00baaa64 = _DAT_00baaa74 * _DAT_00baaa6c;
    _DAT_00baaa68 = _DAT_00baaa78 * _DAT_00baaa6c;
    _DAT_00baaa6c = _DAT_00baaa6c * _DAT_00baaa7c;
    cVar2 = (**(code **)(*param_1 + 0x28))(param_2,&DAT_00baaa60,0);
    return (-(uint)(cVar2 != '\0') & 0x7fffffb0) + 0x80000050;
  default:
    return 1;
  case 7:
  case 10:
    _DAT_00baaa60 = _DAT_00baaa70 / _DAT_00baaa80;
    puVar6 = (undefined4 *)&DAT_00baaa60;
    _DAT_00baaa64 = _DAT_00baaa74 / _DAT_00baaa84;
    _DAT_00baaa68 = _DAT_00baaa78 / _DAT_00baaa88;
    _DAT_00baaa6c = _DAT_00baaa7c / _DAT_00baaa8c;
  }
LAB_009a4f84:
  cVar2 = (**(code **)(*param_1 + 0x28))(param_2,puVar6,0);
  return (-(uint)(cVar2 != '\0') & 0x7fffffb0) + 0x80000050;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_009a50b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  switch(param_3) {
  case 3:
  case 4:
    switch(param_4) {
    case 3:
    case 4:
LAB_009a5154:
      _DAT_00baaa6c = _DAT_00baaa7c + _DAT_00baaa8c;
      _DAT_00baaa68 = _DAT_00baaa78 + _DAT_00baaa88;
      _DAT_00baaa64 = _DAT_00baaa74 + _DAT_00baaa84;
      _DAT_00baaa60 = _DAT_00baaa70 + _DAT_00baaa80;
      cVar1 = (**(code **)(*param_1 + 0x28))(param_2,&DAT_00baaa60,0);
      return (-(uint)(cVar1 != '\0') & 0x7fffffb0) + 0x80000050;
    case 7:
    case 10:
      _DAT_00baaa64 = _DAT_00baaa84 + _DAT_00baaa70;
      _DAT_00baaa68 = _DAT_00baaa88 + _DAT_00baaa70;
      _DAT_00baaa6c = _DAT_00baaa70 + _DAT_00baaa8c;
LAB_009a51b5:
      _DAT_00baaa60 = _DAT_00baaa80 + _DAT_00baaa70;
      cVar1 = (**(code **)(*param_1 + 0x28))(param_2,&DAT_00baaa60,0);
      return (-(uint)(cVar1 != '\0') & 0x7fffffb0) + 0x80000050;
    }
    break;
  case 7:
  case 10:
    switch(param_4) {
    case 3:
    case 4:
      _DAT_00baaa64 = _DAT_00baaa74 + _DAT_00baaa80;
      _DAT_00baaa68 = _DAT_00baaa78 + _DAT_00baaa80;
      _DAT_00baaa6c = _DAT_00baaa80 + _DAT_00baaa7c;
      goto LAB_009a51b5;
    case 7:
    case 10:
      goto LAB_009a5154;
    }
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_009a52e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  switch(param_3) {
  case 3:
  case 4:
    switch(param_4) {
    case 3:
    case 4:
LAB_009a5384:
      _DAT_00baaa6c = _DAT_00baaa7c - _DAT_00baaa8c;
      _DAT_00baaa68 = _DAT_00baaa78 - _DAT_00baaa88;
      _DAT_00baaa64 = _DAT_00baaa74 - _DAT_00baaa84;
      _DAT_00baaa60 = _DAT_00baaa70 - _DAT_00baaa80;
      cVar1 = (**(code **)(*param_1 + 0x28))(param_2,&DAT_00baaa60,0);
      return (-(uint)(cVar1 != '\0') & 0x7fffffb0) + 0x80000050;
    case 7:
    case 10:
      _DAT_00baaa64 = _DAT_00baaa70 - _DAT_00baaa84;
      _DAT_00baaa68 = _DAT_00baaa70 - _DAT_00baaa88;
      _DAT_00baaa6c = _DAT_00baaa70 - _DAT_00baaa8c;
LAB_009a53e5:
      _DAT_00baaa60 = _DAT_00baaa70 - _DAT_00baaa80;
      cVar1 = (**(code **)(*param_1 + 0x28))(param_2,&DAT_00baaa60,0);
      return (-(uint)(cVar1 != '\0') & 0x7fffffb0) + 0x80000050;
    }
    break;
  case 7:
  case 10:
    switch(param_4) {
    case 3:
    case 4:
      _DAT_00baaa64 = _DAT_00baaa74 - _DAT_00baaa80;
      _DAT_00baaa68 = _DAT_00baaa78 - _DAT_00baaa80;
      _DAT_00baaa6c = _DAT_00baaa7c - _DAT_00baaa80;
      goto LAB_009a53e5;
    case 7:
    case 10:
      goto LAB_009a5384;
    }
  }
  return 1;
}



void FUN_009a5510(undefined4 *param_1,undefined4 *param_2,char param_3,char param_4)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[4] = param_2[1];
    param_1[8] = 0;
    param_1[0xc] = param_2[2];
    param_1[1] = param_2[3];
    param_1[5] = param_2[4];
    param_1[9] = 0;
    param_1[0xd] = param_2[5];
    param_1[0xe] = 0;
    param_1[10] = 0;
    param_1[6] = 0;
    param_1[2] = 0;
    param_1[0xf] = 0;
    param_1[0xb] = 0;
    param_1[7] = 0;
    param_1[3] = 0;
    if (param_3 != '\0') {
      D3DXMatrixInverse(param_1,0,param_1);
    }
    if (param_4 != '\0') {
      D3DXMatrixTranspose(param_1,param_1);
    }
    return;
  }
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  return;
}



undefined4 FUN_009a55c0(char *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  if (DAT_00b32588 != 0) {
    puVar3 = &DAT_00b328f0;
    do {
      iVar1 = __stricmp(param_1,(char *)puVar3[1]);
      if (iVar1 == 0) {
        *param_2 = *puVar3;
        return 1;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 2;
    } while (uVar2 < DAT_00b32588);
  }
  return 0;
}



undefined4 FUN_009a5610(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = 1;
  *param_3 = 4;
  switch(param_1) {
  case 1:
  case 0x16:
    *param_3 = 1;
    return 4;
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
  case 0xe:
  case 0xf:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    return 7;
  case 0xc:
  case 0xd:
    *param_2 = 4;
    *param_3 = 0x10;
    return 9;
  case 0x10:
  case 0x11:
    *param_2 = 3;
    *param_3 = 0xc;
    return 8;
  default:
    return 0;
  }
}



void FUN_009a56a0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00ab2bac;
  FUN_009a9900();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4
FUN_009a56d0(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,undefined4 param_6,
            int param_7,int param_8)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  float *pfVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  float *pfVar12;
  bool bVar13;
  float10 fVar14;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150 [13];
  undefined1 auStack_11c [12];
  float local_110 [16];
  undefined4 local_d0 [16];
  undefined4 local_90 [13];
  undefined1 auStack_5c [12];
  float local_50 [19];
  
  iVar7 = *(int *)(param_2 + 0x10);
  local_174 = 0;
  switch(iVar7) {
  case 1:
  case 2:
  case 0xd:
  case 0xe:
    bVar13 = false;
    bVar2 = false;
    if ((iVar7 == 2) || (iVar7 == 0xe)) {
      bVar13 = true;
    }
    if ((iVar7 == 0xd) || (iVar7 == 0xe)) {
      bVar2 = true;
    }
    pfVar4 = (float *)(*(int *)(in_ECX + 0x2c) + 0x9c0);
    pfVar12 = local_150;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar12 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar12 = pfVar12 + 1;
    }
    if (bVar13) {
      D3DXMatrixInverse(local_150,0,local_150);
    }
    if (bVar2) {
      D3DXMatrixTranspose(local_150,local_150);
    }
    cVar3 = (**(code **)(*param_1 + 0x28))(param_2,local_150,0);
    goto LAB_009a60e4;
  case 3:
  case 4:
  case 0xf:
  case 0x10:
    bVar13 = false;
    bVar2 = false;
    if ((iVar7 == 4) || (iVar7 == 0x10)) {
      bVar13 = true;
    }
    if ((iVar7 == 0xf) || (iVar7 == 0x10)) {
      bVar2 = true;
    }
    pfVar4 = (float *)(*(int *)(in_ECX + 0x2c) + 0x980);
    pfVar12 = local_150;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar12 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar12 = pfVar12 + 1;
    }
    if (bVar13) {
      D3DXMatrixInverse(local_150,0,local_150);
    }
    if (bVar2) {
      D3DXMatrixTranspose(local_150,local_150);
    }
    pfVar4 = local_150;
    goto LAB_009a60d3;
  case 5:
  case 6:
  case 0x11:
  case 0x12:
    bVar13 = false;
    bVar2 = false;
    if ((iVar7 == 6) || (iVar7 == 0x12)) {
      bVar13 = true;
    }
    if ((iVar7 == 0x11) || (iVar7 == 0x12)) {
      bVar2 = true;
    }
    pfVar4 = (float *)(*(int *)(in_ECX + 0x2c) + 0x940);
    pfVar12 = local_150;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar12 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar12 = pfVar12 + 1;
    }
    bVar13 = !bVar13;
    goto LAB_009a581b;
  case 7:
  case 8:
  case 0x13:
  case 0x14:
    bVar13 = false;
    bVar2 = false;
    if ((iVar7 == 8) || (iVar7 == 0x14)) {
      bVar13 = true;
    }
    if ((iVar7 == 0x13) || (iVar7 == 0x14)) {
      bVar2 = true;
    }
    iVar7 = *(int *)(in_ECX + 0x2c);
    puVar9 = (undefined4 *)(iVar7 + 0x940);
    puVar11 = local_d0;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar9 = (undefined4 *)(iVar7 + 0x980);
    puVar11 = local_90;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    D3DXMatrixMultiply(local_150,local_d0,local_90);
    if (bVar13) {
      D3DXMatrixInverse(local_150,0,local_150);
    }
    goto LAB_009a5831;
  case 9:
  case 10:
  case 0x15:
  case 0x16:
    bVar13 = false;
    bVar2 = false;
    if ((iVar7 == 10) || (iVar7 == 0x16)) {
      bVar13 = true;
    }
    if ((iVar7 == 0x15) || (iVar7 == 0x16)) {
      bVar2 = true;
    }
    iVar7 = *(int *)(in_ECX + 0x2c);
    puVar9 = (undefined4 *)(iVar7 + 0x980);
    puVar11 = local_90;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar9 = (undefined4 *)(iVar7 + 0x9c0);
    puVar11 = local_d0;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    D3DXMatrixMultiply(local_150,local_90,local_d0);
    bVar13 = !bVar13;
    goto LAB_009a581b;
  case 0xb:
  case 0xc:
  case 0x17:
  case 0x18:
    bVar13 = false;
    bVar2 = false;
    if ((iVar7 == 0xc) || (iVar7 == 0x18)) {
      bVar13 = true;
    }
    if ((iVar7 == 0x17) || (iVar7 == 0x18)) {
      bVar2 = true;
    }
    iVar7 = *(int *)(in_ECX + 0x2c);
    puVar9 = (undefined4 *)(iVar7 + 0x940);
    puVar11 = local_90;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar9 = (undefined4 *)(iVar7 + 0x980);
    puVar11 = local_d0;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    pfVar4 = (float *)(iVar7 + 0x9c0);
    pfVar12 = local_50;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar12 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar12 = pfVar12 + 1;
    }
    D3DXMatrixMultiply(local_110,local_90,local_d0);
    D3DXMatrixMultiply(&local_15c,auStack_11c,auStack_5c);
    bVar13 = !bVar13;
    goto LAB_009a581b;
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x58:
    if (param_4 == 0) {
      return 0;
    }
    pfVar4 = *(float **)(param_4 + 0x28);
    pfVar12 = local_150;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar12 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar12 = pfVar12 + 1;
    }
    bVar13 = false;
    bVar2 = false;
    bVar1 = true;
    if (iVar7 == 0x58) {
      bVar1 = false;
    }
    else {
      if ((iVar7 == 0x1a) || (iVar7 == 0x1c)) {
        bVar13 = true;
      }
      if ((iVar7 == 0x1b) || (iVar7 == 0x1c)) {
        bVar2 = true;
      }
    }
    pfVar4 = (float *)(*(int *)(in_ECX + 0x2c) + 0x980);
    pfVar12 = local_110;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar12 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar12 = pfVar12 + 1;
    }
    if (bVar1) {
      pfVar4 = local_110;
      goto LAB_009a5a63;
    }
    goto LAB_009a5a71;
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
    if (param_4 == 0) {
      return 0;
    }
    pfVar4 = *(float **)(param_4 + 0x28);
    pfVar12 = local_150;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar12 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar12 = pfVar12 + 1;
    }
    bVar13 = false;
    bVar2 = false;
    if ((iVar7 == 0x1e) || (iVar7 == 0x20)) {
      bVar13 = true;
    }
    if ((iVar7 == 0x1f) || (iVar7 == 0x20)) {
      bVar2 = true;
    }
    iVar7 = *(int *)(in_ECX + 0x2c);
    pfVar4 = (float *)(iVar7 + 0x980);
    pfVar12 = local_110;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar12 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar12 = pfVar12 + 1;
    }
    pfVar4 = (float *)(iVar7 + 0x9c0);
    pfVar12 = local_50;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar12 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar12 = pfVar12 + 1;
    }
    D3DXMatrixMultiply(local_150,local_150,local_110);
    pfVar4 = local_50;
LAB_009a5a63:
    D3DXMatrixMultiply(local_150,local_150,pfVar4);
LAB_009a5a71:
    bVar13 = !bVar13;
LAB_009a581b:
    if (!bVar13) {
      D3DXMatrixInverse(local_150,0,local_150);
    }
LAB_009a5831:
    if (bVar2) {
      D3DXMatrixTranspose(local_150,local_150);
    }
    pfVar4 = local_150;
    goto LAB_009a60d3;
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    if (param_4 == 0) {
      return 0;
    }
    cVar3 = (**(code **)(*param_1 + 0x2c))
                      (param_2,*(undefined4 *)(param_4 + 0x20),*(undefined2 *)(param_5 + 0x20),
                       *(undefined4 *)(param_4 + 0x24),*(undefined4 *)(param_5 + 4));
    goto LAB_009a60e4;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
    uVar5 = 0;
    local_17c = 0;
    local_178 = 0;
    uVar10 = local_178;
    uVar8 = local_17c;
    if (((*(int *)(param_7 + 0x20) != 0) &&
        (iVar6 = **(int **)(*(int *)(param_7 + 0x20) + 0x20), iVar6 != 0)) &&
       (*(int *)(iVar6 + 0xc) != 0)) {
      uVar5 = FUN_0076c710();
      if ((iVar7 == 0x26) || (iVar7 == 0x28)) {
        local_17c = 1;
      }
      uVar8 = local_17c;
      if ((iVar7 == 0x27) || (iVar7 == 0x28)) {
        local_178 = 1;
        uVar10 = local_178;
      }
    }
    break;
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
    uVar5 = 0;
    local_178 = 0;
    local_17c = 0;
    uVar10 = local_17c;
    uVar8 = local_178;
    if (((*(int *)(param_7 + 0x20) != 0) &&
        (iVar6 = *(int *)(*(int *)(*(int *)(param_7 + 0x20) + 0x20) + 0x14), iVar6 != 0)) &&
       (*(int *)(iVar6 + 0xc) != 0)) {
      uVar5 = FUN_0076c710();
      if ((iVar7 == 0x2a) || (iVar7 == 0x2c)) {
        local_178 = 1;
      }
      uVar8 = local_178;
      if ((iVar7 == 0x2b) || (iVar7 == 0x2c)) {
        local_17c = 1;
        uVar10 = local_17c;
      }
    }
    break;
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
    uVar5 = 0;
    local_178 = 0;
    local_17c = 0;
    uVar10 = local_17c;
    uVar8 = local_178;
    if (((*(int *)(param_7 + 0x20) != 0) &&
        (iVar6 = *(int *)(*(int *)(*(int *)(param_7 + 0x20) + 0x20) + 8), iVar6 != 0)) &&
       (*(int *)(iVar6 + 0xc) != 0)) {
      uVar5 = FUN_0076c710();
      if ((iVar7 == 0x2e) || (iVar7 == 0x30)) {
        local_178 = 1;
      }
      uVar8 = local_178;
      if ((iVar7 == 0x2f) || (iVar7 == 0x30)) {
        local_17c = 1;
        uVar10 = local_17c;
      }
    }
    break;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
    uVar5 = 0;
    local_178 = 0;
    local_17c = 0;
    uVar10 = local_17c;
    uVar8 = local_178;
    if (((*(int *)(param_7 + 0x20) != 0) &&
        (iVar6 = *(int *)(*(int *)(*(int *)(param_7 + 0x20) + 0x20) + 0xc), iVar6 != 0)) &&
       (*(int *)(iVar6 + 0xc) != 0)) {
      uVar5 = FUN_0076c710();
      if ((iVar7 == 0x32) || (iVar7 == 0x34)) {
        local_178 = 1;
      }
      uVar8 = local_178;
      if ((iVar7 == 0x33) || (iVar7 == 0x34)) {
        local_17c = 1;
        uVar10 = local_17c;
      }
    }
    break;
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
    uVar5 = 0;
    local_178 = 0;
    local_17c = 0;
    uVar10 = local_17c;
    uVar8 = local_178;
    if (((*(int *)(param_7 + 0x20) != 0) &&
        (iVar6 = *(int *)(*(int *)(*(int *)(param_7 + 0x20) + 0x20) + 0x10), iVar6 != 0)) &&
       (*(int *)(iVar6 + 0xc) != 0)) {
      uVar5 = FUN_0076c710();
      if ((iVar7 == 0x36) || (iVar7 == 0x38)) {
        local_178 = 1;
      }
      uVar8 = local_178;
      if ((iVar7 == 0x37) || (iVar7 == 0x38)) {
        local_17c = 1;
        uVar10 = local_17c;
      }
    }
    break;
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
    uVar5 = 0;
    local_178 = 0;
    local_17c = 0;
    uVar10 = local_17c;
    uVar8 = local_178;
    if (((*(int *)(param_7 + 0x20) != 0) &&
        (iVar6 = *(int *)(*(int *)(*(int *)(param_7 + 0x20) + 0x20) + 0x14), iVar6 != 0)) &&
       (*(int *)(iVar6 + 0xc) != 0)) {
      uVar5 = FUN_0076c710();
      if ((iVar7 == 0x3a) || (iVar7 == 0x3c)) {
        local_178 = 1;
      }
      uVar8 = local_178;
      if ((iVar7 == 0x3b) || (iVar7 == 0x3c)) {
        local_17c = 1;
        uVar10 = local_17c;
      }
    }
    break;
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
    uVar10 = 0;
    local_178 = 0;
    local_17c = 0;
    if (((*(int *)(param_7 + 0x20) != 0) &&
        (iVar6 = *(int *)(*(int *)(*(int *)(param_7 + 0x20) + 0x20) + 0x18 +
                         *(int *)(param_2 + 0x18) * 4), iVar6 != 0)) && (*(int *)(iVar6 + 0xc) != 0)
       ) {
      uVar10 = FUN_0076c710();
      if ((iVar7 == 0x3e) || (iVar7 == 0x40)) {
        local_178 = 1;
      }
      if ((iVar7 == 0x3f) || (iVar7 == 0x40)) {
        local_17c = 1;
      }
    }
    FUN_009a5510(local_110,uVar10,local_178,local_17c);
    cVar3 = (**(code **)(*param_1 + 0x28))(param_2,local_110,0);
    goto LAB_009a60e4;
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
    uVar10 = 0;
    local_178 = 0;
    local_17c = 0;
    if (((*(int *)(param_7 + 0x20) != 0) &&
        (iVar6 = FUN_006d1920(*(undefined4 *)(param_2 + 0x18)), iVar6 != 0)) &&
       (*(int *)(iVar6 + 0xc) != 0)) {
      uVar10 = FUN_0076c710();
      if ((iVar7 == 0x42) || (iVar7 == 0x44)) {
        local_178 = 1;
      }
      if ((iVar7 == 0x43) || (iVar7 == 0x44)) {
        local_17c = 1;
      }
    }
    FUN_009a5510(local_110,uVar10,local_178,local_17c);
    pfVar4 = local_110;
    goto LAB_009a60d3;
  default:
    goto switchD_009a5702_caseD_45;
  case 0x49:
    iVar7 = *(int *)(param_7 + 0x10);
    if (iVar7 == 0) {
      return 0;
    }
    local_170 = *(float *)(iVar7 + 0x28);
    local_16c = *(float *)(iVar7 + 0x2c);
    local_168 = *(float *)(iVar7 + 0x30);
    local_164 = *(undefined4 *)(iVar7 + 0x50);
    goto LAB_009a60cf;
  case 0x4a:
    iVar7 = *(int *)(param_7 + 0x10);
    if (iVar7 == 0) {
      return 0;
    }
    local_170 = *(float *)(iVar7 + 0x1c);
    local_16c = *(float *)(iVar7 + 0x20);
    local_168 = *(float *)(iVar7 + 0x24);
    local_164 = *(undefined4 *)(iVar7 + 0x50);
    goto LAB_009a60cf;
  case 0x4b:
    iVar7 = *(int *)(param_7 + 0x10);
    if (iVar7 == 0) {
      return 0;
    }
    local_170 = *(float *)(iVar7 + 0x34);
    local_16c = *(float *)(iVar7 + 0x38);
    local_168 = *(float *)(iVar7 + 0x3c);
    local_164 = *(undefined4 *)(iVar7 + 0x50);
    goto LAB_009a60cf;
  case 0x4c:
    iVar7 = *(int *)(param_7 + 0x10);
    if (iVar7 == 0) {
      return 0;
    }
    local_170 = *(float *)(iVar7 + 0x40);
    local_16c = *(float *)(iVar7 + 0x44);
    local_168 = *(float *)(iVar7 + 0x48);
    local_164 = *(undefined4 *)(iVar7 + 0x50);
    goto LAB_009a60cf;
  case 0x4d:
    iVar7 = *(int *)(param_7 + 0x10);
    if (iVar7 == 0) {
      return 0;
    }
    local_170 = *(float *)(iVar7 + 0x4c);
    local_16c = *(float *)(iVar7 + 0x4c);
    local_168 = *(float *)(iVar7 + 0x4c);
    local_164 = *(undefined4 *)(iVar7 + 0x4c);
    goto LAB_009a60cf;
  case 0x50:
  case 0x51:
    cVar3 = (**(code **)(*param_1 + 0x28))(param_2,0,0);
    goto LAB_009a60e4;
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
    iVar6 = FUN_006ff9c0(PTR_s_NDL_UpdateTime_00b329e4);
    if (iVar6 == 0) {
      local_174 = 0x80000010;
    }
    local_160 = *(float *)(iVar6 + 0xc);
    switch(iVar7) {
    case 0x52:
      pfVar4 = &local_160;
      local_15c = local_160;
      local_158 = local_160;
      local_154 = local_160;
      goto LAB_009a60d3;
    case 0x53:
      fVar14 = (float10)FUN_00986300();
      local_160 = (float)fVar14;
      break;
    case 0x54:
      fVar14 = (float10)FUN_00986000();
      local_160 = (float)fVar14;
      break;
    case 0x55:
      fVar14 = (float10)FUN_00983af0();
      local_160 = (float)fVar14;
      break;
    case 0x56:
      fVar14 = (float10)FUN_00986300();
      local_15c = (float)fVar14;
      fVar14 = (float10)FUN_00986000();
      local_158 = (float)fVar14;
      fVar14 = (float10)FUN_00983af0();
      local_154 = (float)fVar14;
      pfVar4 = &local_160;
      goto LAB_009a60d3;
    default:
      return 0x80000010;
    }
    pfVar4 = &local_160;
    local_15c = local_160;
    local_158 = local_160;
    local_154 = local_160;
    goto LAB_009a60d3;
  case 0x57:
    local_170 = 0.0;
    local_16c = 0.0;
    local_168 = 0.0;
    local_164 = 0x3f800000;
    if (param_8 != 0) {
      puVar9 = *(undefined4 **)(param_8 + 0xc);
      while (puVar9 != (undefined4 *)0x0) {
        puVar11 = puVar9 + 1;
        puVar9 = (undefined4 *)*puVar9;
        iVar7 = FUN_00560920(&DAT_00b40224,*puVar11);
        if (iVar7 != 0) {
          FUN_00775f60(&local_160,*(undefined4 *)(iVar7 + 0xdc));
          local_170 = local_170 + local_160;
          local_16c = local_16c + local_15c;
          local_168 = local_168 + local_158;
        }
      }
    }
LAB_009a60cf:
    pfVar4 = &local_170;
    goto LAB_009a60d3;
  }
  FUN_009a5510(local_110,uVar5,uVar8,uVar10);
  pfVar4 = local_110;
LAB_009a60d3:
  cVar3 = (**(code **)(*param_1 + 0x28))(param_2,pfVar4,0);
LAB_009a60e4:
  if (cVar3 == '\0') {
    local_174 = 0x80000050;
  }
switchD_009a5702_caseD_45:
  return local_174;
}



uint FUN_009a6670(int param_1,int param_2)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  
  if (*(char *)(param_1 + 0xac) != '\0') {
    in_EAX = param_2 - 1;
    switch(in_EAX) {
    case 0:
      cVar1 = FUN_00435cc0(&DAT_00b40224,param_1);
      return (uint)(cVar1 == '\0');
    case 1:
      uVar2 = FUN_00435cc0();
      return uVar2;
    case 2:
      uVar2 = FUN_00435cc0();
      return uVar2;
    case 3:
      uVar2 = FUN_00435cc0();
      return uVar2;
    }
  }
  return in_EAX & 0xffffff00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_009a66f0(float *param_1,size_t param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  undefined1 local_1e8 [12];
  undefined4 local_1dc;
  undefined4 local_1cc;
  undefined4 local_1bc;
  undefined4 local_1ac;
  undefined1 local_1a8 [12];
  undefined4 local_19c;
  undefined4 local_18c;
  undefined4 local_17c;
  undefined4 local_16c;
  undefined1 local_168 [12];
  undefined4 local_15c [5];
  undefined4 local_148;
  undefined4 local_134;
  undefined4 local_120;
  undefined4 local_11c [9];
  float local_f8;
  float local_f4;
  float local_f0;
  undefined1 local_e8 [12];
  undefined1 local_dc [12];
  undefined1 local_d0 [12];
  undefined1 local_c4 [12];
  undefined1 local_b8 [12];
  undefined1 local_ac [12];
  undefined1 local_a0 [36];
  undefined1 local_7c [36];
  undefined1 local_58 [36];
  undefined1 local_34 [52];
  
  _memset(local_15c,0,0x40);
  local_120 = 0x3f800000;
  local_134 = 0x3f800000;
  local_148 = 0x3f800000;
  local_15c[0] = 0x3f800000;
  switch(param_3) {
  case 1:
    if (param_4 != 0) {
      *param_1 = *(float *)(param_4 + 0xdc);
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      return 1;
    }
    goto LAB_009a72ff;
  case 2:
    if (param_4 != 0) {
      *param_1 = *(float *)(param_4 + 0xe0);
      param_1[1] = *(float *)(param_4 + 0xe4);
      param_1[2] = *(float *)(param_4 + 0xe8);
      param_1[3] = 1.0;
      return 1;
    }
    goto LAB_009a67b4;
  case 3:
    if (param_4 != 0) {
      *param_1 = *(float *)(param_4 + 0xec);
      param_1[1] = *(float *)(param_4 + 0xf0);
      param_1[2] = *(float *)(param_4 + 0xf4);
      param_1[3] = 1.0;
      return 1;
    }
    goto LAB_009a67b4;
  case 4:
    if (param_4 != 0) {
      *param_1 = *(float *)(param_4 + 0xf8);
      param_1[1] = *(float *)(param_4 + 0xfc);
      param_1[2] = *(float *)(param_4 + 0x100);
      param_1[3] = 1.0;
      return 1;
    }
    goto LAB_009a67b4;
  case 5:
    if (param_4 == 0) {
LAB_009a68a9:
      *param_1 = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 1.0;
      return 0;
    }
    local_220 = *(float *)(param_4 + 0xe0);
    local_21c = *(float *)(param_4 + 0xe4);
    local_218 = *(float *)(param_4 + 0xe8);
    goto LAB_009a6869;
  case 6:
    if (param_4 == 0) goto LAB_009a68a9;
    local_220 = *(float *)(param_4 + 0xec);
    local_21c = *(float *)(param_4 + 0xf0);
    local_218 = *(float *)(param_4 + 0xf4);
    goto LAB_009a6869;
  case 7:
    if (param_4 == 0) goto LAB_009a68a9;
    local_220 = *(float *)(param_4 + 0xf8);
    local_21c = *(float *)(param_4 + 0xfc);
    local_218 = *(float *)(param_4 + 0x100);
LAB_009a6869:
    FUN_0069dd70(*(undefined4 *)(param_4 + 0xdc));
    break;
  case 8:
    if (param_4 == 0) goto LAB_009a68a9;
    cVar1 = FUN_00435cc0(&DAT_00b3fcfc,param_4);
    if (cVar1 == '\0') {
      *param_1 = *(float *)(param_4 + 0x88);
      param_1[1] = *(float *)(param_4 + 0x8c);
      param_1[2] = *(float *)(param_4 + 0x90);
      param_1[3] = 1.0;
      return 1;
    }
    local_220 = *(float *)(param_4 + 0x108) * -1048576.0;
    local_21c = *(float *)(param_4 + 0x10c) * -1048576.0;
    local_218 = *(float *)(param_4 + 0x110) * -1048576.0;
    break;
  case 9:
    if (param_4 == 0) goto LAB_009a68a9;
    FUN_00718a80(local_11c);
    cVar1 = FUN_00435cc0(&DAT_00b3fcfc,param_4);
    if (cVar1 != '\0') {
      local_210 = *(float *)(param_4 + 0x108) * -1048576.0;
      local_20c = *(float *)(param_4 + 0x10c) * -1048576.0;
      local_208 = *(float *)(param_4 + 0x110) * -1048576.0;
      pfVar2 = (float *)FUN_0053d4b0(local_ac,&local_210);
      local_220 = *pfVar2;
      local_21c = pfVar2[1];
      local_218 = pfVar2[2];
      break;
    }
    pfVar2 = (float *)FUN_0053d4b0(local_d0,param_4 + 0x88);
    goto LAB_009a6a49;
  case 10:
    if (param_4 == 0) {
LAB_009a6b1c:
      *param_1 = 1.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 1.0;
      return 0;
    }
    cVar1 = FUN_00435cc0(&DAT_00b3fd80,param_4);
    if (cVar1 == '\0') {
      cVar1 = FUN_00435cc0(&DAT_00b3fcfc,param_4);
      if (cVar1 == '\0') {
        local_220 = *(float *)(param_4 + 0x114);
        local_21c = *(float *)(param_4 + 0x118);
        local_218 = *(float *)(param_4 + 0x11c);
      }
      else {
        local_220 = *(float *)(param_4 + 0x108);
        local_21c = *(float *)(param_4 + 0x10c);
        local_218 = *(float *)(param_4 + 0x110);
      }
    }
    else {
      pfVar2 = (float *)FUN_004121a0(local_dc,param_4 + 0x88);
      local_220 = *pfVar2;
      local_21c = pfVar2[1];
      local_218 = pfVar2[2];
      FUN_0043f350();
    }
    break;
  case 0xb:
    if (param_4 == 0) goto LAB_009a6b1c;
    cVar1 = FUN_00435cc0(&DAT_00b3fd80,param_4);
    if (cVar1 == '\0') {
      cVar1 = FUN_00435cc0(&DAT_00b3fcfc,param_4);
      if (cVar1 == '\0') {
        local_220 = *(float *)(param_4 + 0x114);
        local_21c = *(float *)(param_4 + 0x118);
        local_218 = *(float *)(param_4 + 0x11c);
      }
      else {
        local_220 = *(float *)(param_4 + 0x108);
        local_21c = *(float *)(param_4 + 0x10c);
        local_218 = *(float *)(param_4 + 0x110);
      }
    }
    else {
      pfVar2 = (float *)FUN_004121a0(local_c4,param_4 + 0x88);
      local_220 = *pfVar2;
      local_21c = pfVar2[1];
      local_218 = pfVar2[2];
      FUN_0043f350();
    }
    pfVar2 = &local_220;
    puVar6 = local_e8;
    FUN_00710400(local_7c);
    pfVar2 = (float *)FUN_007101f0(puVar6,pfVar2);
LAB_009a6a49:
    local_220 = *pfVar2;
    local_21c = pfVar2[1];
    local_218 = pfVar2[2];
    break;
  case 0xc:
    if (param_4 != 0) {
      local_17c = 0;
      local_18c = 0;
      local_19c = 0;
      local_16c = 0x3f800000;
      cVar1 = FUN_00435cc0(&DAT_00b3fcfc,param_4);
      if (cVar1 == '\0') {
        FUN_007640a0(local_1a8,param_4 + 100);
        FUN_009a4770();
        return 1;
      }
      local_210 = *(float *)(param_4 + 0x108) * -1048576.0;
      local_20c = *(float *)(param_4 + 0x10c) * -1048576.0;
      local_208 = *(float *)(param_4 + 0x110) * -1048576.0;
      FUN_00761ae0(local_1a8,param_4 + 100,&local_210,*(undefined4 *)(param_4 + 0x94));
      FUN_009a4770();
      return 1;
    }
    goto LAB_009a6ce0;
  case 0xd:
    if (param_4 == 0) {
      FUN_009a4770();
      return 0;
    }
    FUN_00718a80(local_1a8);
    local_1bc = 0;
    local_1cc = 0;
    local_1dc = 0;
    local_1ac = 0x3f800000;
    cVar1 = FUN_00435cc0(&DAT_00b3fcfc,param_4);
    if (cVar1 == '\0') {
      uVar8 = FUN_0053d7a0(local_15c,param_4 + 100);
    }
    else {
      local_220 = *(float *)(param_4 + 0x108) * -1048576.0;
      puVar7 = (undefined4 *)(param_4 + 100);
      puVar4 = local_11c;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
      }
      local_21c = *(float *)(param_4 + 0x10c) * -1048576.0;
      local_218 = *(float *)(param_4 + 0x110) * -1048576.0;
      local_f8 = local_220;
      local_f4 = local_21c;
      local_f0 = local_218;
      uVar8 = FUN_0053d7a0(local_34,local_11c);
    }
    FUN_007640a0(local_1e8,uVar8);
    FUN_009a4770();
    return 1;
  case 0xe:
    if (param_4 == 0) {
      *param_1 = -1.0;
      param_1[1] = -1.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      return 0;
    }
    cVar1 = FUN_00435cc0(&DAT_00b40190,param_4);
    if (cVar1 == '\0') {
      *param_1 = -1.0;
      param_1[1] = -1.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      return 1;
    }
    *param_1 = 1.0;
    local_214 = (*(float *)(param_4 + 0x120) * _DAT_00b3f9a4) / 180.0;
    fVar5 = (float10)FUN_00986000();
    param_1[1] = (float)fVar5;
    param_1[2] = *(float *)(param_4 + 0x124);
    param_1[3] = 0.0;
    return 1;
  case 0xf:
    if (param_4 != 0) {
      cVar1 = FUN_00405650(&DAT_00b3fd80,param_4);
      if (cVar1 == '\0') {
        *param_1 = 1.0;
        param_1[1] = 0.0;
        param_1[2] = 0.0;
        param_1[3] = 0.0;
        return 1;
      }
      *param_1 = *(float *)(param_4 + 0x108);
      param_1[1] = *(float *)(param_4 + 0x10c);
      param_1[2] = *(float *)(param_4 + 0x110);
      param_1[3] = 0.0;
      return 1;
    }
    goto LAB_009a6f59;
  case 0x10:
    if (param_4 != 0) {
      local_1bc = 0;
      param_4 = param_4 + 0x10c;
      local_1cc = 0;
      local_1dc = 0;
      local_1ac = 0x3f800000;
      uVar8 = 0x3f800000;
      puVar7 = &DAT_00b3f9a8;
LAB_009a6faa:
      FUN_00761ae0(local_1e8,param_4,puVar7,uVar8);
      FUN_009a4770();
      return 1;
    }
    goto LAB_009a6ce0;
  case 0x11:
    if (param_4 != 0) {
      local_1bc = 0;
      local_1cc = 0;
      param_4 = param_4 + 0x10c;
      local_1dc = 0;
      puVar6 = local_a0;
      local_1ac = 0x3f800000;
      uVar8 = 0x3f800000;
      puVar7 = &DAT_00b3f9a8;
      FUN_00710400(local_58);
      param_4 = FUN_007100a0(puVar6,param_4);
      goto LAB_009a6faa;
    }
LAB_009a6ce0:
    FUN_009a4770();
    return 0;
  case 0x12:
    if (param_4 != 0) {
      *param_1 = *(float *)(param_4 + 0x130);
      param_1[1] = *(float *)(param_4 + 0x134);
      param_1[2] = *(float *)(param_4 + 0x138);
      param_1[3] = 1.0;
      return 1;
    }
LAB_009a67b4:
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 1.0;
    return 0;
  case 0x13:
    if (param_4 == 0) goto LAB_009a68a9;
    FUN_00718a80(local_1a8);
    local_220 = *(float *)(param_4 + 0x130);
    local_21c = *(float *)(param_4 + 0x134);
    local_218 = *(float *)(param_4 + 0x138);
    pfVar2 = (float *)FUN_0053d4b0(local_b8,&local_220);
    local_220 = *pfVar2;
    local_21c = pfVar2[1];
    local_218 = pfVar2[2];
    break;
  case 0x14:
    if (param_4 != 0) {
      if (*(char *)(param_4 + 0x150) != '\0') {
        *param_1 = *(float *)(param_4 + 0x164);
        param_1[1] = *(float *)(param_4 + 0x168);
        param_1[2] = *(float *)(param_4 + 0x16c);
        param_1[3] = *(float *)(param_4 + 0x170);
        return 1;
      }
LAB_009a7130:
      *param_1 = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      return 1;
    }
    goto LAB_009a6f59;
  case 0x15:
    if (param_4 != 0) {
      if (*(char *)(param_4 + 0x150) != '\0') {
        FUN_00718a80(local_1a8);
        local_200 = *(float *)(param_4 + 0x168);
        local_204 = *(float *)(param_4 + 0x164);
        local_1fc = *(float *)(param_4 + 0x16c);
        local_1f8 = *(float *)(param_4 + 0x170);
        FUN_007101f0(&local_220,&local_204);
        local_1f4 = local_1f8 * local_204;
        local_1f0 = local_200 * local_1f8;
        local_1ec = local_1f8 * local_1fc;
        FUN_0053d4b0(local_168,&local_1f4);
        *param_1 = local_220;
        param_1[1] = local_21c;
        param_1[2] = local_218;
        fVar5 = (float10)FUN_0047d9e0(local_168);
        param_1[3] = (float)fVar5;
        return 1;
      }
      goto LAB_009a7130;
    }
LAB_009a6f59:
    *param_1 = 1.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    return 0;
  case 0x16:
    if (param_4 != 0) {
      switch(*(undefined4 *)(param_4 + 0x14c)) {
      case 0:
      case 1:
        *param_1 = 2.0;
        param_1[1] = 0.0;
        param_1[2] = 0.0;
        param_1[3] = 0.0;
        return 1;
      case 2:
      case 3:
        *param_1 = 3.0;
        param_1[1] = 0.0;
        param_1[2] = 0.0;
        param_1[3] = 0.0;
        return 1;
      case 4:
        *param_1 = 1.0;
        param_1[1] = 0.0;
        param_1[2] = 0.0;
        param_1[3] = 0.0;
        return 1;
      default:
        *param_1 = 0.0;
        param_1[1] = 0.0;
        param_1[2] = 0.0;
        param_1[3] = 0.0;
        return 1;
      }
    }
LAB_009a72ff:
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    return 0;
  default:
    _memset(param_1,0,param_2);
    return 0;
  }
  *param_1 = local_220;
  param_1[1] = local_21c;
  param_1[2] = local_218;
  param_1[3] = 1.0;
  return 1;
}



undefined4
FUN_009a73c0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 unaff_EDI;
  undefined4 *puVar10;
  undefined4 uVar11;
  bool bVar12;
  float10 fVar13;
  char cStack_1f2;
  char cStack_1f1;
  undefined4 local_1e4;
  undefined4 local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  undefined4 local_1d0 [13];
  undefined1 auStack_19c [12];
  undefined4 local_190 [13];
  undefined1 auStack_15c [12];
  undefined4 local_150 [13];
  undefined1 auStack_11c [12];
  undefined4 local_110 [16];
  undefined4 local_d0 [16];
  undefined4 local_90 [13];
  undefined1 auStack_5c [12];
  undefined4 auStack_50 [19];
  
  iVar4 = *(int *)(param_2 + 0x10);
  switch(iVar4) {
  case 1:
  case 2:
  case 0xd:
  case 0xe:
    bVar2 = false;
    if ((iVar4 == 2) || (bVar12 = false, iVar4 == 0xe)) {
      bVar12 = true;
    }
    if ((iVar4 == 0xd) || (iVar4 == 0xe)) {
      bVar2 = true;
    }
    puVar9 = (undefined4 *)(*(int *)(in_ECX + 0x2c) + 0x9c0);
    puVar8 = local_1d0;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar9 = local_1d0;
    bVar12 = !bVar12;
    goto LAB_009a7433;
  case 3:
  case 4:
  case 0xf:
  case 0x10:
    bVar12 = false;
    if ((iVar4 == 4) || (bVar2 = false, iVar4 == 0x10)) {
      bVar2 = true;
    }
    if ((iVar4 == 0xf) || (iVar4 == 0x10)) {
      bVar12 = true;
    }
    puVar9 = (undefined4 *)(*(int *)(in_ECX + 0x2c) + 0x980);
    puVar8 = local_1d0;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar9 = (undefined4 *)(&DAT_00baa9e0 + param_1 * 0x40);
    puVar8 = local_1d0;
    puVar10 = puVar9;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    if (bVar2) {
      D3DXMatrixInverse(puVar9,0,puVar9);
    }
    if (bVar12) {
      D3DXMatrixTranspose(puVar9,puVar9);
      return 9;
    }
    return 9;
  case 5:
  case 6:
  case 0x11:
  case 0x12:
    bVar12 = false;
    if ((iVar4 == 6) || (bVar2 = false, iVar4 == 0x12)) {
      bVar2 = true;
    }
    if ((iVar4 == 0x11) || (iVar4 == 0x12)) {
      bVar12 = true;
    }
    puVar9 = (undefined4 *)(&DAT_00baa9e0 + param_1 * 0x40);
    puVar8 = (undefined4 *)(*(int *)(in_ECX + 0x2c) + 0x940);
    puVar10 = puVar9;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    if (bVar2) {
      D3DXMatrixInverse(puVar9,0,puVar9);
    }
    if (bVar12) {
      D3DXMatrixTranspose(puVar9,puVar9);
      return 9;
    }
    return 9;
  case 7:
  case 8:
  case 0x13:
  case 0x14:
    bVar12 = false;
    bVar2 = false;
    if ((iVar4 == 8) || (iVar4 == 0x14)) {
      bVar12 = true;
    }
    if ((iVar4 == 0x13) || (iVar4 == 0x14)) {
      bVar2 = true;
    }
    iVar4 = *(int *)(in_ECX + 0x2c);
    puVar9 = (undefined4 *)(iVar4 + 0x940);
    puVar8 = local_190;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar9 = (undefined4 *)(iVar4 + 0x980);
    puVar8 = local_1d0;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    }
    D3DXMatrixMultiply(local_90,local_190,local_1d0);
    puVar8 = (undefined4 *)(&DAT_00baa9e0 + param_1 * 0x40);
    puVar9 = local_90;
    puVar10 = puVar8;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    if (bVar12) {
      D3DXMatrixInverse(puVar8,0,puVar8);
    }
    goto LAB_009a7452;
  case 9:
  case 10:
  case 0x15:
  case 0x16:
    bVar12 = false;
    bVar2 = false;
    if ((iVar4 == 10) || (iVar4 == 0x16)) {
      bVar12 = true;
    }
    if ((iVar4 == 0x15) || (iVar4 == 0x16)) {
      bVar2 = true;
    }
    iVar4 = *(int *)(in_ECX + 0x2c);
    puVar9 = (undefined4 *)(iVar4 + 0x980);
    puVar8 = local_1d0;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar9 = (undefined4 *)(iVar4 + 0x9c0);
    puVar8 = local_190;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    }
    D3DXMatrixMultiply(local_d0,local_1d0,local_190);
    bVar12 = !bVar12;
    puVar9 = local_d0;
    goto LAB_009a7433;
  case 0xb:
  case 0xc:
  case 0x17:
  case 0x18:
    bVar12 = false;
    bVar2 = false;
    if ((iVar4 == 0xc) || (iVar4 == 0x18)) {
      bVar12 = true;
    }
    if ((iVar4 == 0x17) || (iVar4 == 0x18)) {
      bVar2 = true;
    }
    iVar4 = *(int *)(in_ECX + 0x2c);
    puVar9 = (undefined4 *)(iVar4 + 0x940);
    puVar8 = local_1d0;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar9 = (undefined4 *)(iVar4 + 0x980);
    puVar8 = local_190;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar9 = (undefined4 *)(iVar4 + 0x9c0);
    puVar8 = local_110;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    }
    D3DXMatrixMultiply(local_150,local_1d0,local_190);
    D3DXMatrixMultiply(auStack_5c,auStack_15c,auStack_11c);
    bVar12 = !bVar12;
    puVar9 = auStack_50;
LAB_009a7433:
    puVar8 = (undefined4 *)(&DAT_00baa9e0 + param_1 * 0x40);
    puVar10 = puVar8;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    if (!bVar12) {
      D3DXMatrixInverse(puVar8,0,puVar8);
    }
LAB_009a7452:
    if (bVar2) {
      D3DXMatrixTranspose(puVar8,puVar8);
      return 9;
    }
    return 9;
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    if (param_4 == 0) {
      return 0;
    }
    puVar9 = *(undefined4 **)(param_4 + 0x28);
    puVar8 = local_150;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar9 = (undefined4 *)(&DAT_00baa9e0 + param_1 * 0x40);
    puVar8 = local_150;
    puVar10 = puVar9;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar8 = (undefined4 *)(*(int *)(in_ECX + 0x2c) + 0x980);
    puVar10 = local_110;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    D3DXMatrixMultiply(puVar9,puVar9,local_110);
    if (cStack_1f1 != '\0') {
      D3DXMatrixInverse(puVar9,0,puVar9);
    }
    if (cStack_1f2 != '\0') {
      D3DXMatrixTranspose(puVar9,puVar9);
      return 9;
    }
    return 9;
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
    if (param_4 == 0) {
      return 0;
    }
    puVar9 = *(undefined4 **)(param_4 + 0x28);
    puVar8 = local_150;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar9 = (undefined4 *)(&DAT_00baa9e0 + param_1 * 0x40);
    puVar8 = local_150;
    puVar10 = puVar9;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar4 = *(int *)(in_ECX + 0x2c);
    puVar8 = (undefined4 *)(iVar4 + 0x980);
    puVar10 = local_110;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar8 = (undefined4 *)(iVar4 + 0x9c0);
    puVar10 = local_190;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    D3DXMatrixMultiply(puVar9,puVar9,local_110);
    D3DXMatrixMultiply(puVar9,puVar9,auStack_19c);
    if ((char)((uint)unaff_EDI >> 0x18) != '\0') {
      D3DXMatrixInverse(puVar9,0,puVar9);
    }
    if ((char)((uint)unaff_EDI >> 0x10) != '\0') {
      D3DXMatrixTranspose(puVar9,puVar9);
      return 9;
    }
    return 9;
  default:
switchD_009a73ea_caseD_21:
    return 0;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
    uVar11 = 0;
    local_1e4 = 0;
    local_1e0 = 0;
    uVar5 = local_1e0;
    uVar6 = local_1e4;
    if (((*(int *)(param_5 + 0x20) != 0) &&
        (iVar3 = **(int **)(*(int *)(param_5 + 0x20) + 0x20), iVar3 != 0)) &&
       (*(int *)(iVar3 + 0xc) != 0)) {
      uVar11 = FUN_0076c710();
      if ((iVar4 == 0x26) || (iVar4 == 0x28)) {
        local_1e4 = 1;
      }
      uVar6 = local_1e4;
      if ((iVar4 == 0x27) || (iVar4 == 0x28)) {
        local_1e0 = 1;
        uVar5 = local_1e0;
      }
    }
    break;
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
    uVar11 = 0;
    local_1e0 = 0;
    local_1e4 = 0;
    uVar5 = local_1e4;
    uVar6 = local_1e0;
    if (((*(int *)(param_5 + 0x20) != 0) &&
        (iVar3 = *(int *)(*(int *)(*(int *)(param_5 + 0x20) + 0x20) + 0x14), iVar3 != 0)) &&
       (*(int *)(iVar3 + 0xc) != 0)) {
      uVar11 = FUN_0076c710();
      if ((iVar4 == 0x2a) || (iVar4 == 0x2c)) {
        local_1e0 = 1;
      }
      uVar6 = local_1e0;
      if ((iVar4 == 0x2b) || (iVar4 == 0x2c)) {
        local_1e4 = 1;
        uVar5 = local_1e4;
      }
    }
    break;
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
    uVar11 = 0;
    local_1e0 = 0;
    local_1e4 = 0;
    uVar5 = local_1e4;
    uVar6 = local_1e0;
    if (((*(int *)(param_5 + 0x20) != 0) &&
        (iVar3 = *(int *)(*(int *)(*(int *)(param_5 + 0x20) + 0x20) + 8), iVar3 != 0)) &&
       (*(int *)(iVar3 + 0xc) != 0)) {
      uVar11 = FUN_0076c710();
      if ((iVar4 == 0x2e) || (iVar4 == 0x30)) {
        local_1e0 = 1;
      }
      uVar6 = local_1e0;
      if ((iVar4 == 0x2f) || (iVar4 == 0x30)) {
        local_1e4 = 1;
        uVar5 = local_1e4;
      }
    }
    break;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
    uVar11 = 0;
    local_1e0 = 0;
    local_1e4 = 0;
    uVar5 = local_1e4;
    uVar6 = local_1e0;
    if (((*(int *)(param_5 + 0x20) != 0) &&
        (iVar3 = *(int *)(*(int *)(*(int *)(param_5 + 0x20) + 0x20) + 0xc), iVar3 != 0)) &&
       (*(int *)(iVar3 + 0xc) != 0)) {
      uVar11 = FUN_0076c710();
      if ((iVar4 == 0x32) || (iVar4 == 0x34)) {
        local_1e0 = 1;
      }
      uVar6 = local_1e0;
      if ((iVar4 == 0x33) || (iVar4 == 0x34)) {
        local_1e4 = 1;
        uVar5 = local_1e4;
      }
    }
    break;
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
    uVar11 = 0;
    local_1e0 = 0;
    local_1e4 = 0;
    uVar5 = local_1e4;
    uVar6 = local_1e0;
    if (((*(int *)(param_5 + 0x20) != 0) &&
        (iVar3 = *(int *)(*(int *)(*(int *)(param_5 + 0x20) + 0x20) + 0x10), iVar3 != 0)) &&
       (*(int *)(iVar3 + 0xc) != 0)) {
      uVar11 = FUN_0076c710();
      if ((iVar4 == 0x36) || (iVar4 == 0x38)) {
        local_1e0 = 1;
      }
      uVar6 = local_1e0;
      if ((iVar4 == 0x37) || (iVar4 == 0x38)) {
        local_1e4 = 1;
        uVar5 = local_1e4;
      }
    }
    break;
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
    uVar11 = 0;
    local_1e0 = 0;
    local_1e4 = 0;
    uVar5 = local_1e4;
    uVar6 = local_1e0;
    if (((*(int *)(param_5 + 0x20) != 0) &&
        (iVar3 = *(int *)(*(int *)(*(int *)(param_5 + 0x20) + 0x20) + 0x14), iVar3 != 0)) &&
       (*(int *)(iVar3 + 0xc) != 0)) {
      uVar11 = FUN_0076c710();
      if ((iVar4 == 0x3a) || (iVar4 == 0x3c)) {
        local_1e0 = 1;
      }
      uVar6 = local_1e0;
      if ((iVar4 == 0x3b) || (iVar4 == 0x3c)) {
        local_1e4 = 1;
        uVar5 = local_1e4;
      }
    }
    break;
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
    uVar11 = 0;
    local_1e0 = 0;
    local_1e4 = 0;
    if (((*(int *)(param_5 + 0x20) != 0) &&
        (iVar3 = *(int *)(*(int *)(*(int *)(param_5 + 0x20) + 0x20) + 0x18 +
                         *(int *)(param_2 + 0x18) * 4), iVar3 != 0)) && (*(int *)(iVar3 + 0xc) != 0)
       ) {
      uVar11 = FUN_0076c710();
      if ((iVar4 == 0x3e) || (iVar4 == 0x40)) {
        local_1e0 = 1;
      }
      if ((iVar4 == 0x3f) || (iVar4 == 0x40)) {
        local_1e4 = 1;
      }
    }
    puVar7 = &DAT_00baa9e0 + param_1 * 0x40;
    uVar6 = local_1e0;
    uVar5 = local_1e4;
    goto LAB_009a7905;
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
    uVar11 = 0;
    local_1e0 = 0;
    local_1e4 = 0;
    if (((*(int *)(param_5 + 0x20) != 0) &&
        (iVar3 = FUN_006d1920(*(undefined4 *)(param_2 + 0x18)), iVar3 != 0)) &&
       (*(int *)(iVar3 + 0xc) != 0)) {
      uVar11 = FUN_0076c710();
      if ((iVar4 == 0x42) || (iVar4 == 0x44)) {
        local_1e0 = 1;
      }
      if ((iVar4 == 0x43) || (iVar4 == 0x44)) {
        local_1e4 = 1;
      }
    }
    puVar7 = &DAT_00baa9e0 + param_1 * 0x40;
    uVar6 = local_1e0;
    uVar5 = local_1e4;
    goto LAB_009a7905;
  case 0x49:
    iVar4 = *(int *)(param_5 + 0x10);
    if (iVar4 != 0) {
      param_1 = param_1 * 0x10;
      *(undefined4 *)(&DAT_00baaa70 + param_1) = *(undefined4 *)(iVar4 + 0x28);
      *(undefined4 *)(&DAT_00baaa74 + param_1) = *(undefined4 *)(iVar4 + 0x2c);
      *(undefined4 *)(&DAT_00baaa78 + param_1) = *(undefined4 *)(iVar4 + 0x30);
      *(undefined4 *)(&DAT_00baaa7c + param_1) = *(undefined4 *)(iVar4 + 0x50);
      return 10;
    }
    return 0;
  case 0x4a:
    iVar4 = *(int *)(param_5 + 0x10);
    if (iVar4 != 0) {
      param_1 = param_1 * 0x10;
      *(undefined4 *)(&DAT_00baaa70 + param_1) = *(undefined4 *)(iVar4 + 0x1c);
      *(undefined4 *)(&DAT_00baaa74 + param_1) = *(undefined4 *)(iVar4 + 0x20);
      *(undefined4 *)(&DAT_00baaa78 + param_1) = *(undefined4 *)(iVar4 + 0x24);
      *(undefined4 *)(&DAT_00baaa7c + param_1) = *(undefined4 *)(iVar4 + 0x50);
      return 10;
    }
    return 0;
  case 0x4b:
    iVar4 = *(int *)(param_5 + 0x10);
    if (iVar4 != 0) {
      param_1 = param_1 * 0x10;
      *(undefined4 *)(&DAT_00baaa70 + param_1) = *(undefined4 *)(iVar4 + 0x34);
      *(undefined4 *)(&DAT_00baaa74 + param_1) = *(undefined4 *)(iVar4 + 0x38);
      *(undefined4 *)(&DAT_00baaa78 + param_1) = *(undefined4 *)(iVar4 + 0x3c);
      *(undefined4 *)(&DAT_00baaa7c + param_1) = *(undefined4 *)(iVar4 + 0x50);
      return 10;
    }
    return 0;
  case 0x4c:
    iVar4 = *(int *)(param_5 + 0x10);
    if (iVar4 != 0) {
      param_1 = param_1 * 0x10;
      *(undefined4 *)(&DAT_00baaa70 + param_1) = *(undefined4 *)(iVar4 + 0x40);
      *(undefined4 *)(&DAT_00baaa74 + param_1) = *(undefined4 *)(iVar4 + 0x44);
      *(undefined4 *)(&DAT_00baaa78 + param_1) = *(undefined4 *)(iVar4 + 0x48);
      *(undefined4 *)(&DAT_00baaa7c + param_1) = *(undefined4 *)(iVar4 + 0x50);
      return 10;
    }
    return 0;
  case 0x4d:
    iVar4 = *(int *)(param_5 + 0x10);
    if (iVar4 == 0) {
      return 0;
    }
    param_1 = param_1 * 0x10;
    *(undefined4 *)(&DAT_00baaa70 + param_1) = *(undefined4 *)(iVar4 + 0x4c);
    *(undefined4 *)(&DAT_00baaa74 + param_1) = *(undefined4 *)(iVar4 + 0x4c);
    *(undefined4 *)(&DAT_00baaa78 + param_1) = *(undefined4 *)(iVar4 + 0x4c);
    *(undefined4 *)(&DAT_00baaa7c + param_1) = *(undefined4 *)(iVar4 + 0x4c);
    return 10;
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
    iVar3 = FUN_006ff9c0(PTR_s_NDL_UpdateTime_00b329e4);
    if (iVar3 == 0) {
      return 0x80000010;
    }
    fVar1 = *(float *)(iVar3 + 0xc);
    switch(iVar4) {
    case 0x52:
      break;
    case 0x53:
      fVar13 = (float10)FUN_00986300();
      fVar1 = (float)fVar13;
      break;
    case 0x54:
      fVar13 = (float10)FUN_00986000();
      fVar1 = (float)fVar13;
      break;
    case 0x55:
      fVar13 = (float10)FUN_00983af0();
      fVar1 = (float)fVar13;
      break;
    case 0x56:
      param_1 = param_1 * 0x10;
      *(float *)(&DAT_00baaa70 + param_1) = fVar1;
      fVar13 = (float10)FUN_00986300();
      *(float *)(&DAT_00baaa74 + param_1) = (float)fVar13;
      fVar13 = (float10)FUN_00986000();
      *(float *)(&DAT_00baaa78 + param_1) = (float)fVar13;
      fVar13 = (float10)FUN_00983af0();
      *(float *)(&DAT_00baaa7c + param_1) = (float)fVar13;
      return 7;
    default:
      goto switchD_009a73ea_caseD_21;
    }
    param_1 = param_1 * 0x10;
    *(float *)(&DAT_00baaa70 + param_1) = fVar1;
    *(float *)(&DAT_00baaa74 + param_1) = fVar1;
    *(float *)(&DAT_00baaa78 + param_1) = fVar1;
    *(float *)(&DAT_00baaa7c + param_1) = fVar1;
    return 7;
  case 0x57:
    param_1 = param_1 * 0x10;
    *(undefined4 *)(&DAT_00baaa70 + param_1) = 0;
    *(undefined4 *)(&DAT_00baaa74 + param_1) = 0;
    *(undefined4 *)(&DAT_00baaa78 + param_1) = 0;
    *(undefined4 *)(&DAT_00baaa7c + param_1) = 0x3f800000;
    if (param_6 != 0) {
      puVar9 = *(undefined4 **)(param_6 + 0xc);
      while (puVar9 != (undefined4 *)0x0) {
        puVar8 = puVar9 + 1;
        puVar9 = (undefined4 *)*puVar9;
        iVar4 = FUN_00560920(&DAT_00b40224,*puVar8);
        if (iVar4 != 0) {
          FUN_00775f60(&local_1dc,*(undefined4 *)(iVar4 + 0xdc));
          *(float *)(&DAT_00baaa70 + param_1) = local_1dc + *(float *)(&DAT_00baaa70 + param_1);
          *(float *)(&DAT_00baaa74 + param_1) = local_1d8 + *(float *)(&DAT_00baaa74 + param_1);
          *(float *)(&DAT_00baaa78 + param_1) = *(float *)(&DAT_00baaa78 + param_1) + local_1d4;
        }
      }
    }
    return 7;
  }
  puVar7 = &DAT_00baa9e0 + param_1 * 0x40;
LAB_009a7905:
  FUN_009a5510(puVar7,uVar11,uVar6,uVar5);
  return 9;
}



undefined4
FUN_009a7f90(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_retaddr;
  char *pcVar6;
  int local_18;
  int local_14;
  uint uStack_c;
  
  uVar4 = *(uint *)(param_2 + 0x18);
  uVar1 = uVar4 & 0xf0000000;
  iVar2 = (**(code **)(*in_ECX + 0x3c))(uVar4 & 0xfff);
  iVar3 = (**(code **)(*in_ECX + 0x3c))(uVar4 >> 0xc & 0xfff);
  if ((iVar2 == 0) || (iVar3 == 0)) {
    pcVar6 = "Invalid entries in OperatorConstant\n";
  }
  else {
    uVar4 = *(uint *)(iVar2 + 0x14);
    if (DAT_00b4295b == '\0') {
      FUN_00783c70();
    }
    local_18 = *(int *)(&DAT_00b428d8 + (uVar4 & 0xff) * 4);
    uVar4 = *(uint *)(iVar3 + 0x14);
    if (DAT_00b4295b == '\0') {
      FUN_00783c70();
    }
    local_14 = *(int *)(&DAT_00b428d8 + (uVar4 & 0xff) * 4);
    uVar4 = *(uint *)(iVar2 + 0x14) & 0xf0000000;
    if (uVar4 == 0x20000000) {
      local_18 = FUN_009a4960(*(undefined4 *)(iVar2 + 0xc));
      FUN_009a73c0(0,iVar2,param_1,param_2,param_3,param_4,param_5,param_6);
    }
    else if (uVar4 == 0x40000000) {
      FUN_009a3d20(0,iVar2,param_7);
    }
    else if ((uVar4 == 0x30000000) || (uVar4 == 0x10000000)) {
      FUN_009a4010(0,iVar2,param_1,param_2,param_3,param_5,param_6,param_7);
    }
    uVar4 = *(uint *)(iVar3 + 0x14) & 0xf0000000;
    if (uVar4 == 0x20000000) {
      local_14 = FUN_009a4960(*(undefined4 *)(iVar3 + 0xc));
      FUN_009a73c0(1,iVar3,param_1,param_2,param_3,param_4,param_5,param_6);
    }
    else if (uVar4 == 0x30000000) {
      FUN_009a4010(1,iVar3,param_1,param_2,param_3,param_5,param_6,param_7);
    }
    else if ((uVar4 == 0x40000000) || (uVar4 == 0x10000000)) {
      FUN_009a3d20(1,iVar3,param_7);
    }
    if ((local_18 != 0) && (local_14 != 0)) {
      if (0x30000000 < uStack_c) {
        if (uStack_c != 0x40000000) {
          return 1;
        }
        uVar5 = FUN_009a52e0(uVar1,unaff_retaddr,local_18,local_14,unaff_EBX,unaff_EBP);
        return uVar5;
      }
      if (uStack_c == 0x30000000) {
        uVar5 = FUN_009a50b0(uVar1,unaff_retaddr,local_18,local_14,unaff_EBX,unaff_EBP);
        return uVar5;
      }
      if (uStack_c == 0x10000000) {
        uVar5 = FUN_009a4b00(uVar1,unaff_retaddr,local_18,local_14,unaff_EBX,unaff_EBP);
        return uVar5;
      }
      if (uStack_c != 0x20000000) {
        return 1;
      }
      uVar5 = FUN_009a4e30(uVar1,unaff_retaddr,local_18,local_14,unaff_EBX,unaff_EBP);
      return uVar5;
    }
    pcVar6 = "Invalid operands in OperatorConstant\n";
  }
  FUN_00738460(1,0,pcVar6);
  return 1;
}



int FUN_009a8290(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_4;
  
  iVar4 = 0;
  local_4 = 0;
  if (param_1 != 0) {
    switch(param_2) {
    case 1:
    case 2:
    case 3:
    case 4:
      puVar6 = *(undefined4 **)(param_1 + 0xc);
      if (puVar6 != (undefined4 *)0x0) {
        if (puVar6 != (undefined4 *)0x0) goto LAB_009a82d5;
        iVar7 = 0;
        iVar5 = iVar4;
        while ((cVar2 = FUN_009a6670(iVar7,param_2), iVar4 = iVar5, cVar2 == '\0' ||
               (iVar4 = iVar5 + 1, iVar5 != param_3))) {
          if (puVar6 == (undefined4 *)0x0) {
            return 0;
          }
LAB_009a82d5:
          iVar7 = puVar6[1];
          puVar6 = (undefined4 *)*puVar6;
          iVar5 = iVar4;
        }
        return iVar7;
      }
      break;
    case 5:
      return *(int *)(param_1 + 0x18);
    case 6:
      piVar3 = *(int **)(param_1 + 0x14);
      iVar4 = 0;
      if (piVar3 != (int *)0x0) {
        do {
          piVar1 = piVar3 + 1;
          piVar3 = (int *)*piVar3;
          if (iVar4 == param_3) {
            return *piVar1;
          }
          iVar4 = iVar4 + 1;
        } while (piVar3 != (int *)0x0);
        return 0;
      }
      break;
    case 7:
      piVar3 = *(int **)(param_1 + 0x10);
      iVar4 = 0;
      if (piVar3 != (int *)0x0) {
        do {
          piVar1 = piVar3 + 1;
          piVar3 = (int *)*piVar3;
          if (iVar4 == param_3) {
            return *piVar1;
          }
          iVar4 = iVar4 + 1;
        } while (piVar3 != (int *)0x0);
        return 0;
      }
      break;
    case 8:
      local_4 = *(int *)(param_1 + 0x1c);
    }
  }
  return local_4;
}



void FUN_009a8490(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_009a46a0(param_1);
  *in_ECX = &PTR_FUN_00ab2bac;
  return;
}



void FUN_009a84b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00ab348c;
  *(undefined1 *)(in_ECX + 2) = 1;
  in_ECX[3] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  *(undefined1 *)(in_ECX + 0xd) = 0;
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  if (DAT_00b4295c == '\0') {
    FUN_00783d70();
  }
  return;
}



void FUN_009a8520(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  int in_ECX;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar2 = *(char **)(in_ECX + 0xc);
    pcVar3 = pcVar3 + (1 - (int)(param_1 + 1));
    if (pcVar2 != (char *)0x0) {
      pcVar4 = pcVar2;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (pcVar4 + -(int)(pcVar2 + 1) < pcVar3) {
        FUN_00401f20(pcVar2);
        *(undefined4 *)(in_ECX + 0xc) = 0;
      }
    }
    if (*(int *)(in_ECX + 0xc) == 0) {
      uVar5 = FUN_00401f00(pcVar3);
      *(undefined4 *)(in_ECX + 0xc) = uVar5;
    }
    _strcpy_s(*(char **)(in_ECX + 0xc),(rsize_t)pcVar3,param_1);
    return;
  }
  FUN_00401f20(*(undefined4 *)(in_ECX + 0xc));
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}



void FUN_009a85c0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  int in_ECX;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar2 = *(char **)(in_ECX + 0x24);
    pcVar3 = pcVar3 + (1 - (int)(param_1 + 1));
    if (pcVar2 != (char *)0x0) {
      pcVar4 = pcVar2;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (pcVar4 + -(int)(pcVar2 + 1) < pcVar3) {
        FUN_00401f20(pcVar2);
        *(undefined4 *)(in_ECX + 0x24) = 0;
      }
    }
    if (*(int *)(in_ECX + 0x24) == 0) {
      uVar5 = FUN_00401f00(pcVar3);
      *(undefined4 *)(in_ECX + 0x24) = uVar5;
    }
    _strcpy_s(*(char **)(in_ECX + 0x24),(rsize_t)pcVar3,param_1);
    return;
  }
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x24));
  *(undefined4 *)(in_ECX + 0x24) = 0;
  return;
}



int FUN_009a8660(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  uint uVar4;
  
  pcVar1 = *(code **)(*in_ECX + 0x38);
  in_ECX[9] = 0;
  iVar2 = (*pcVar1)(param_1);
  if (iVar2 != 0) {
    in_ECX[9] = -0x7fffffe0;
    return -0x7fffffe0;
  }
  uVar4 = param_1 & 0xf0000000;
  if (uVar4 == 0x30000000) {
    iVar2 = (**(code **)(*in_ECX + 0x20))
                      (param_1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9);
    in_ECX[9] = iVar2;
    return iVar2;
  }
  if (uVar4 == 0x10000000) {
    iVar2 = (**(code **)(*in_ECX + 0x24))
                      (param_1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9);
    in_ECX[9] = iVar2;
    return iVar2;
  }
  if (uVar4 == 0x20000000) {
    iVar2 = (**(code **)(*in_ECX + 0x1c))(param_1,param_2,param_3,param_5);
    in_ECX[9] = iVar2;
    return iVar2;
  }
  if (uVar4 == 0x40000000) {
    iVar2 = (**(code **)(*in_ECX + 0x28))
                      (param_1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9);
    in_ECX[9] = iVar2;
    return iVar2;
  }
  if (uVar4 == 0x50000000) {
    iVar2 = (**(code **)(*in_ECX + 0x2c))(param_1,param_1,param_2,param_3,param_4,param_5);
    in_ECX[9] = iVar2;
    return iVar2;
  }
  if (uVar4 == 0x60000000) {
    iVar2 = *in_ECX;
    uVar3 = FUN_009a2450(param_1);
    iVar2 = (**(code **)(iVar2 + 0x30))(param_1,param_3,param_5,param_2,uVar3);
    in_ECX[9] = iVar2;
    return iVar2;
  }
  in_ECX[9] = -0x7fffffc0;
  return in_ECX[9];
}



int FUN_009a8940(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,size_t param_7,undefined4 param_8,
                void *param_9,char param_10)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Dst;
  int *in_ECX;
  undefined4 unaff_retaddr;
  
  iVar1 = FUN_00401f00(0x38);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_009a84b0();
  }
  FUN_009a8520(param_1);
  puVar2[6] = param_3;
  puVar2[5] = param_2 & 0xfffffff | 0x40000000;
  puVar2[7] = param_4;
  puVar2[8] = param_5;
  FUN_009a85c0(param_6);
  puVar2[10] = param_7;
  puVar2[0xb] = param_8;
  if (param_10 == '\0') {
    *(undefined1 *)(puVar2 + 0xd) = 0;
    puVar2[0xc] = param_9;
  }
  else {
    *(undefined1 *)(puVar2 + 0xd) = 1;
    FUN_00401f20(puVar2[0xc]);
    _Dst = (void *)FUN_00401f00(param_7);
    puVar2[0xc] = _Dst;
    _memcpy(_Dst,param_9,param_7);
  }
  iVar1 = (**(code **)(*in_ECX + 0x4c))(puVar2);
  in_ECX[9] = iVar1;
  if (iVar1 != 0) {
    (**(code **)*puVar2)(1);
    return in_ECX[9];
  }
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  FUN_0077cab0(unaff_retaddr,*(undefined4 *)(&DAT_00b428d8 + (param_2 & 0xff) * 4),param_7,param_8);
  return in_ECX[9];
}



void FUN_009a8b70(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00ab348c;
  FUN_00401f20(in_ECX[3]);
  FUN_00401f20(in_ECX[9]);
  if (*(char *)(in_ECX + 0xd) != '\0') {
    FUN_00401f20(in_ECX[0xc]);
  }
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_009a8bd0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  *(int *)(in_ECX + 0x2c) = param_1;
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0x280);
    piVar2 = *(int **)(in_ECX + 0x28);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    *(int **)(in_ECX + 0x28) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(*(int *)(in_ECX + 0x2c) + 0x8ac);
    return;
  }
  piVar1 = *(int **)(in_ECX + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  return;
}



bool FUN_009a8e30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  code *pcVar6;
  uint local_8;
  
  in_ECX[8] = param_1;
  bVar2 = true;
  uVar3 = FUN_006ff9c0(PTR_s___NDL_SCMData_00b29f84);
  local_8 = 0;
  if (*(short *)((int)in_ECX + 0x16) != 0) {
    do {
      iVar4 = *(int *)(in_ECX[4] + local_8 * 4);
      if (iVar4 != 0) {
        if (*(char *)(iVar4 + 8) == '\0') break;
        iVar1 = *(int *)(iVar4 + 0x1c);
        if ((iVar1 != -1) || (*(int *)(iVar4 + 0x24) != 0)) {
          uVar5 = *(uint *)(iVar4 + 0x14) & 0xf0000000;
          if (uVar5 == 0x20000000) {
            pcVar6 = *(code **)(*in_ECX + 0x54);
LAB_009a8fdf:
            uVar5 = (*pcVar6)(param_1,iVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_9,param_10);
LAB_009a900a:
            if (uVar5 == 0) goto LAB_009a9013;
          }
          else {
            if (uVar5 == 0x10000000) {
              if (*(int *)(iVar4 + 0x18) == 1) {
                iVar4 = (**(code **)(*(int *)in_ECX[10] + 0x178))
                                  ((int *)in_ECX[10],iVar1,*(undefined4 *)(iVar4 + 0x30),
                                   *(undefined4 *)(iVar4 + 0x20));
                uVar5 = (uint)(iVar4 < 0);
              }
              else if (*(int *)(iVar4 + 0x18) == 2) {
                iVar4 = (**(code **)(*(int *)in_ECX[10] + 0x1b4))
                                  ((int *)in_ECX[10],iVar1,*(undefined4 *)(iVar4 + 0x30),
                                   *(undefined4 *)(iVar4 + 0x20));
                uVar5 = (uint)(iVar4 < 0);
              }
              else {
                uVar5 = (**(code **)(*in_ECX + 0x58))(param_1,iVar4,param_10);
              }
              goto LAB_009a900a;
            }
            if (uVar5 == 0x30000000) {
              uVar5 = (**(code **)(*in_ECX + 0x5c))
                                (param_1,iVar4,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9,param_10,param_11,uVar3);
              goto LAB_009a900a;
            }
            if (uVar5 == 0x40000000) {
              uVar5 = (**(code **)(*in_ECX + 0x60))(param_1,iVar4,param_10);
              goto LAB_009a900a;
            }
            if (uVar5 == 0x50000000) {
              uVar5 = (**(code **)(*in_ECX + 100))
                                (param_1,iVar4,param_2,param_3,param_6,param_7,param_8,param_9,
                                 param_10);
              goto LAB_009a900a;
            }
            if (uVar5 == 0x60000000) {
              pcVar6 = *(code **)(*in_ECX + 0x6c);
              goto LAB_009a8fdf;
            }
          }
          bVar2 = false;
        }
      }
LAB_009a9013:
      local_8 = local_8 + 1;
    } while (local_8 < *(ushort *)((int)in_ECX + 0x16));
  }
  return !bVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_009a9040(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  char cVar3;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  if (*(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 1) {
    _DAT_00baa930 = (uint)*(byte *)(param_2 + 0xc);
    return &DAT_00baa930;
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  if (*(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) != 2) {
    uVar1 = *(uint *)(param_1 + 0x14);
    if (DAT_00b4295b == '\0') {
      FUN_00783c70();
    }
    if (*(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 3) {
      _DAT_00baa934 = *(undefined4 *)(param_2 + 0xc);
      _DAT_00baa938 = _DAT_00baa934;
      _DAT_00baa93c = _DAT_00baa934;
      _DAT_00baa940 = _DAT_00baa934;
      return &DAT_00baa934;
    }
    uVar1 = *(uint *)(param_1 + 0x14);
    if (DAT_00b4295b == '\0') {
      FUN_00783c70();
    }
    if (*(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 4) {
      _DAT_00baa990 = *(undefined4 *)(param_2 + 0xc);
      _DAT_00baa994 = _DAT_00baa990;
      _DAT_00baa998 = _DAT_00baa990;
      _DAT_00baa99c = _DAT_00baa990;
      return &DAT_00baa990;
    }
    cVar3 = FUN_00783340();
    if (cVar3 != '\0') {
      puVar2 = *(undefined4 **)(param_2 + 0x10);
      _DAT_00baa990 = *puVar2;
      _DAT_00baa994 = puVar2[1];
      _DAT_00baa998 = *puVar2;
      _DAT_00baa99c = puVar2[1];
      return &DAT_00baa990;
    }
    cVar3 = FUN_00783370();
    if (cVar3 != '\0') {
      puVar2 = *(undefined4 **)(param_2 + 0x10);
      _DAT_00baa990 = *puVar2;
      _DAT_00baa994 = puVar2[1];
      _DAT_00baa998 = puVar2[2];
      _DAT_00baa99c = 0x3f800000;
      return &DAT_00baa990;
    }
    cVar3 = FUN_007833a0();
    if (cVar3 != '\0') {
      puVar2 = *(undefined4 **)(param_2 + 0x10);
      _DAT_00baa990 = *puVar2;
      _DAT_00baa994 = puVar2[1];
      _DAT_00baa998 = puVar2[2];
      _DAT_00baa99c = puVar2[3];
      return &DAT_00baa990;
    }
    cVar3 = FUN_00782de0();
    if (cVar3 != '\0') {
      puVar2 = *(undefined4 **)(param_2 + 0x10);
      _DAT_00baa9a0 = *puVar2;
      _DAT_00baa9a4 = puVar2[1];
      _DAT_00baa9a8 = puVar2[2];
      _DAT_00baa9ac = 0;
      _DAT_00baa9b0 = puVar2[3];
      _DAT_00baa9b4 = puVar2[4];
      _DAT_00baa9b8 = puVar2[5];
      _DAT_00baa9bc = 0;
      _DAT_00baa9c0 = puVar2[6];
      _DAT_00baa9c4 = puVar2[7];
      _DAT_00baa9c8 = puVar2[8];
      _DAT_00baa9cc = 0;
      return &DAT_00baa9a0;
    }
    cVar3 = FUN_00782e10();
    if (cVar3 != '\0') {
      return *(undefined **)(param_2 + 0x10);
    }
    cVar3 = FUN_007833d0();
    if (cVar3 != '\0') {
      _DAT_00baa990 = *(undefined4 *)(param_2 + 0xc);
      _DAT_00baa994 = *(undefined4 *)(param_2 + 0x10);
      _DAT_00baa998 = *(undefined4 *)(param_2 + 0x14);
      _DAT_00baa99c = *(undefined4 *)(param_2 + 0x18);
      return &DAT_00baa990;
    }
    FUN_009a32b0();
  }
  return (undefined *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_009a92e0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x28) / (ulonglong)*(uint *)(param_1 + 0x2c);
  uVar1 = *(uint *)(param_1 + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  iVar2 = *(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4);
  switch((int)uVar4) {
  case 1:
    if (iVar2 == 1) {
      _DAT_00baa930 = (uint)**(byte **)(param_1 + 0x30);
      return &DAT_00baa930;
    }
    if (iVar2 == 3) {
      _DAT_00baa934 = **(undefined4 **)(param_1 + 0x30);
      _DAT_00baa938 = _DAT_00baa934;
      _DAT_00baa93c = _DAT_00baa934;
      _DAT_00baa940 = _DAT_00baa934;
      return &DAT_00baa934;
    }
    _DAT_00baa990 = **(undefined4 **)(param_1 + 0x30);
    _DAT_00baa994 = _DAT_00baa990;
    _DAT_00baa998 = _DAT_00baa990;
    _DAT_00baa99c = _DAT_00baa990;
    return &DAT_00baa990;
  case 2:
    puVar3 = *(undefined4 **)(param_1 + 0x30);
    if (iVar2 == 3) {
      _DAT_00baa934 = *puVar3;
      _DAT_00baa938 = puVar3[1];
      _DAT_00baa940 = puVar3[1];
      _DAT_00baa93c = *puVar3;
      return &DAT_00baa934;
    }
    _DAT_00baa990 = *puVar3;
    _DAT_00baa994 = puVar3[1];
    _DAT_00baa998 = *puVar3;
    _DAT_00baa99c = puVar3[1];
    return &DAT_00baa990;
  case 3:
    puVar3 = *(undefined4 **)(param_1 + 0x30);
    if (iVar2 == 3) {
      _DAT_00baa934 = *puVar3;
      _DAT_00baa938 = puVar3[1];
      _DAT_00baa93c = puVar3[2];
      _DAT_00baa940 = 1;
      return &DAT_00baa934;
    }
    _DAT_00baa990 = *puVar3;
    _DAT_00baa994 = puVar3[1];
    _DAT_00baa998 = puVar3[2];
    _DAT_00baa99c = 0x3f800000;
    return &DAT_00baa990;
  default:
    if ((*(int *)(param_1 + 0x2c) != 4) || ((uVar4 & 3) != 0)) {
      return (undefined *)0x0;
    }
  case 4:
  case 0x10:
    return *(undefined **)(param_1 + 0x30);
  case 8:
    puVar3 = *(undefined4 **)(param_1 + 0x30);
    _DAT_00baa9a0 = *puVar3;
    _DAT_00baa9a4 = puVar3[1];
    _DAT_00baa9a8 = puVar3[2];
    _DAT_00baa9ac = puVar3[3];
    _DAT_00baa9b0 = puVar3[4];
    _DAT_00baa9b4 = puVar3[5];
    _DAT_00baa9b8 = puVar3[6];
    _DAT_00baa9bc = puVar3[7];
    _DAT_00baa9c0 = 0;
    _DAT_00baa9c4 = 0;
    _DAT_00baa9c8 = 0;
    break;
  case 9:
    puVar3 = *(undefined4 **)(param_1 + 0x30);
    _DAT_00baa9a0 = *puVar3;
    _DAT_00baa9a4 = puVar3[1];
    _DAT_00baa9a8 = puVar3[2];
    _DAT_00baa9ac = 0;
    _DAT_00baa9b0 = puVar3[3];
    _DAT_00baa9b4 = puVar3[4];
    _DAT_00baa9b8 = puVar3[5];
    _DAT_00baa9bc = 0;
    _DAT_00baa9c0 = puVar3[6];
    _DAT_00baa9c4 = puVar3[7];
    _DAT_00baa9c8 = puVar3[8];
    break;
  case 0xc:
    puVar3 = *(undefined4 **)(param_1 + 0x30);
    _DAT_00baa9a0 = *puVar3;
    _DAT_00baa9a4 = puVar3[1];
    _DAT_00baa9a8 = puVar3[2];
    _DAT_00baa9ac = puVar3[3];
    _DAT_00baa9b0 = puVar3[4];
    _DAT_00baa9b4 = puVar3[5];
    _DAT_00baa9b8 = puVar3[6];
    _DAT_00baa9bc = puVar3[7];
    _DAT_00baa9c0 = puVar3[8];
    _DAT_00baa9c4 = puVar3[9];
    _DAT_00baa9c8 = puVar3[10];
    _DAT_00baa9cc = puVar3[0xb];
    goto LAB_009a94ce;
  }
  _DAT_00baa9cc = 0;
LAB_009a94ce:
  _DAT_00baa9d0 = 0;
  _DAT_00baa9d4 = 0;
  _DAT_00baa9d8 = 0;
  _DAT_00baa9dc = 0;
  return &DAT_00baa9a0;
}



uint FUN_009a9620(char *param_1)

{
  ushort uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  uVar1 = *(ushort *)(in_ECX + 0x16);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x10) + uVar3 * 4);
      if ((iVar2 != 0) && (iVar2 = __stricmp(param_1,*(char **)(iVar2 + 0xc)), iVar2 == 0)) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0xffffffff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009a9670(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  
  if ((_DAT_00baaa94 & 1) == 0) {
    _DAT_00baaa94 = _DAT_00baaa94 | 1;
    DAT_00baaa90 = 0;
    _atexit(FUN_00a27c10);
  }
  if (param_1 < *(ushort *)(in_ECX + 10)) {
    if (*param_2 == DAT_00baaa90) {
      if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) != DAT_00baaa90) {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) == DAT_00baaa90) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  else {
    *(short *)(in_ECX + 10) = (short)param_1 + 1;
    if (*param_2 != DAT_00baaa90) {
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



int FUN_009a9740(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x44))(param_1);
  if (iVar2 != -1) {
    iVar1 = *(int *)(in_ECX[4] + iVar2 * 4);
    if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x14) & 0xf0000000) == 0x40000000)) {
      FUN_0077cb50(param_1);
    }
    FUN_009a9670(iVar2,&stack0x00000000);
    return in_ECX[9];
  }
  in_ECX[9] = -0x7ffffff0;
  return in_ECX[9];
}



void FUN_009a97b0(void)

{
  int iVar1;
  LONG LVar2;
  int in_ECX;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint local_c;
  undefined4 *local_4;
  
  uVar3 = (uint)*(ushort *)(in_ECX + 0x16);
  puVar4 = (undefined4 *)0x0;
  uVar5 = 0xffffffff;
  local_4 = (undefined4 *)0x0;
  if ((1 < uVar3) && (local_c = 0, uVar3 != 0)) {
    do {
      iVar1 = *(int *)(in_ECX + 0x10);
      if (puVar4 == *(undefined4 **)(iVar1 + local_c * 4)) {
LAB_009a9829:
        if (puVar4 != (undefined4 *)0x0) {
          if (*(char *)(puVar4 + 2) == '\x01') {
            if (uVar5 < local_c) {
              FUN_009a9670(local_c,*(int *)(in_ECX + 0x10) + uVar5 * 4);
              FUN_009a9670(uVar5,&local_4);
              do {
                uVar5 = uVar5 + 1;
                if (uVar3 <= uVar5) goto LAB_009a98e0;
                iVar1 = *(int *)(in_ECX + 0x10);
                if (puVar4 != *(undefined4 **)(iVar1 + uVar5 * 4)) {
                  LVar2 = InterlockedDecrement(puVar4 + 1);
                  if (LVar2 == 0) {
                    (**(code **)*puVar4)(1);
                  }
                  puVar4 = *(undefined4 **)(iVar1 + uVar5 * 4);
                  local_4 = puVar4;
                  if (puVar4 != (undefined4 *)0x0) {
                    InterlockedIncrement(puVar4 + 1);
                  }
                }
              } while (*(char *)(puVar4 + 2) != '\0');
              if (uVar3 <= uVar5) goto LAB_009a98e0;
            }
          }
          else if (local_c < uVar5) {
            uVar5 = local_c;
          }
        }
      }
      else {
        if ((puVar4 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(puVar4 + 1), LVar2 == 0))
        {
          (**(code **)*puVar4)(1);
        }
        puVar4 = *(undefined4 **)(iVar1 + local_c * 4);
        local_4 = puVar4;
        if (puVar4 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar4 + 1);
          goto LAB_009a9829;
        }
      }
      local_c = local_c + 1;
    } while (local_c < uVar3);
    if (puVar4 != (undefined4 *)0x0) {
LAB_009a98e0:
      LVar2 = InterlockedDecrement(puVar4 + 1);
      if (LVar2 == 0) {
        (**(code **)*puVar4)(1);
      }
    }
  }
  return;
}



void FUN_009a9900(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  int iVar6;
  uint uVar7;
  
  uVar7 = 0;
  *in_ECX = &PTR_FUN_00ab2a4c;
  if (*(short *)(in_ECX + 5) != 0) {
    do {
      puVar1 = *(undefined4 **)(in_ECX[4] + uVar7 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar1 + 1);
        if ((puVar1[5] & 0xf0000000) == 0x40000000) {
          FUN_0077cb50(puVar1[3]);
        }
        LVar5 = InterlockedDecrement(puVar1 + 1);
        if (LVar5 == 0) {
          (**(code **)*puVar1)(1);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ushort *)(in_ECX + 5));
  }
  FUN_009a4310();
  piVar2 = (int *)in_ECX[10];
  in_ECX[0xb] = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  in_ECX[10] = 0;
  in_ECX[0xc] = 0;
  iVar3 = in_ECX[4];
  in_ECX[3] = &PTR_FUN_00ab2a44;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4);
    iVar6 = iVar3 + iVar4 * 4;
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      puVar1 = *(undefined4 **)(iVar6 + -4);
      iVar6 = iVar6 + -4;
      if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0))
         && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    FUN_00401f20(iVar3 + -4);
  }
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  return;
}



uint FUN_009a9a00(int *param_1)

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
  FUN_009a9670(uVar6,param_1);
  return uVar6;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl _strlwr_s_l_stat(char *,unsigned int,struct localeinfo_struct *)
   
   Library: Visual Studio 2005 Release */

int __cdecl _strlwr_s_l_stat(char *param_1,uint param_2,localeinfo_struct *param_3)

{
  char cVar1;
  LPCWSTR _LocaleName;
  int *piVar2;
  size_t sVar3;
  uint _CchDest;
  undefined4 *puVar4;
  errno_t eVar5;
  int iVar6;
  char *local_c;
  
  if (param_1 != (char *)0x0) {
    sVar3 = _strnlen(param_1,param_2);
    if (sVar3 < param_2) {
      _LocaleName = param_3->locinfo->lc_category[0].wlocale;
      if (_LocaleName == (LPCWSTR)0x0) {
        cVar1 = *param_1;
        while (cVar1 != '\0') {
          cVar1 = *param_1;
          if (('@' < cVar1) && (cVar1 < '[')) {
            *param_1 = cVar1 + ' ';
          }
          param_1 = param_1 + 1;
          cVar1 = *param_1;
        }
        return 0;
      }
      _CchDest = ___crtLCMapStringA(param_3,_LocaleName,0x100,param_1,-1,(LPSTR)0x0,0,
                                    param_3->locinfo->lc_codepage,1);
      if (_CchDest == 0) {
        piVar2 = __errno();
        *piVar2 = 0x2a;
        goto LAB_009a9bd4;
      }
      if (param_2 < _CchDest) {
        *param_1 = '\0';
        piVar2 = __errno();
        iVar6 = 0x22;
        goto LAB_009a9b51;
      }
      if (((int)_CchDest < 1) || (0xffffffe0 / _CchDest == 0)) {
        local_c = (char *)0x0;
      }
      else if (_CchDest + 8 < 0x401) {
        puVar4 = (undefined4 *)&stack0xffffffe4;
        local_c = &stack0xffffffe4;
        if (&stack0x00000000 != (undefined1 *)0x1c) {
LAB_009a9c31:
          local_c = (char *)(puVar4 + 2);
        }
      }
      else {
        puVar4 = _malloc(_CchDest + 8);
        local_c = (char *)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xdddd;
          goto LAB_009a9c31;
        }
      }
      if (local_c != (char *)0x0) {
        iVar6 = ___crtLCMapStringA(param_3,param_3->locinfo->lc_category[0].wlocale,0x100,param_1,-1
                                   ,local_c,_CchDest,param_3->locinfo->lc_codepage,1);
        if (iVar6 == 0) {
          piVar2 = __errno();
          eVar5 = 0x2a;
          *piVar2 = 0x2a;
        }
        else {
          eVar5 = _strcpy_s(param_1,param_2,local_c);
        }
        __freea(local_c);
        return eVar5;
      }
      piVar2 = __errno();
      *piVar2 = 0xc;
LAB_009a9bd4:
      piVar2 = __errno();
      return *piVar2;
    }
    *param_1 = '\0';
  }
  piVar2 = __errno();
  iVar6 = 0x16;
LAB_009a9b51:
  *piVar2 = iVar6;
  __invalid_parameter(0,0,0,0,0);
  return iVar6;
}



/* Library Function - Single Match
    __strlwr_s_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __strlwr_s_l(char *_Str,size_t _Size,_locale_t _Locale)

{
  int iVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  iVar1 = _strlwr_s_l_stat(_Str,_Size,&local_14);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/* Library Function - Single Match
    __strlwr
   
   Library: Visual Studio 2005 Release */

char * __cdecl __strlwr(char *_String)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  
  if (DAT_00ba9e10 == 0) {
    pcVar2 = _String;
    if (_String == (char *)0x0) {
      piVar3 = __errno();
      *piVar3 = 0x16;
      __invalid_parameter(0,0,0,0,0);
      return (char *)0x0;
    }
    if (*_String != '\0') {
      do {
        cVar1 = *_String;
        if (('@' < cVar1) && (cVar1 < '[')) {
          *_String = cVar1 + ' ';
        }
        _String = _String + 1;
      } while (*_String != '\0');
      return pcVar2;
    }
  }
  else {
    __strlwr_s_l(_String,0xffffffff,(_locale_t)0x0);
  }
  return _String;
}



void D3DXVec4Transform(void)

{
                    /* WARNING: Could not recover jumptable at 0x009a9d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DXVec4Transform();
  return;
}


