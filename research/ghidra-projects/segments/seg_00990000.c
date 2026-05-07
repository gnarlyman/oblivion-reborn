
/* Library Function - Single Match
    __cftoe
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t eVar1;
  
  eVar1 = __cftoe_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,0);
  return eVar1;
}



/* Library Function - Single Match
    __cftoa_l
   
   Library: Visual Studio 2005 Release */

int __cftoa_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
             localeinfo_struct *param_6)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  int *piVar4;
  size_t _SizeInBytes;
  errno_t eVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  short sVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  int iVar14;
  int local_28 [2];
  int local_20;
  char local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_18 = 0x3ff;
  local_8 = 0x30;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_6);
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar4 = __errno();
    iVar14 = 0x16;
LAB_009900cf:
    *piVar4 = iVar14;
    __invalid_parameter(0,0,0,0,0);
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return iVar14;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    piVar4 = __errno();
    iVar14 = 0x22;
    goto LAB_009900cf;
  }
  local_10 = *(uint *)param_1;
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - 2;
    }
    eVar5 = __cftoe(param_1,param_2 + 2,_SizeInBytes,param_4,0);
    if (eVar5 != 0) {
      *param_2 = 0;
      if (local_1c == '\0') {
        return eVar5;
      }
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      return eVar5;
    }
    if (param_2[2] == '-') {
      *param_2 = 0x2d;
      param_2 = param_2 + 1;
    }
    *param_2 = 0x30;
    param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
    pcVar6 = _strrchr(param_2 + 2,0x65);
    if (pcVar6 != (char *)0x0) {
      *pcVar6 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      pcVar6[3] = '\0';
    }
    goto LAB_009903f3;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  *param_2 = 0x30;
  param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
  sVar10 = (-(ushort)(param_5 != 0) & 0xffe0) + 0x27;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    param_2[2] = 0x30;
    if (*(int *)param_1 == 0 && ((ulonglong)*param_1 & 0xfffff00000000) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = 0x3fe;
    }
  }
  else {
    param_2[2] = 0x31;
  }
  pcVar12 = param_2 + 3;
  pcVar6 = param_2 + 4;
  if (param_4 == 0) {
    *pcVar12 = '\0';
  }
  else {
    *pcVar12 = *(char *)**(undefined4 **)(local_28[0] + 0xbc);
  }
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (local_c = 0, *(int *)param_1 != 0)) {
    local_10 = 0;
    local_c = 0xf0000;
    do {
      if ((int)param_4 < 1) break;
      sVar2 = __aullshr();
      uVar3 = sVar2 + 0x30;
      if (0x39 < uVar3) {
        uVar3 = uVar3 + sVar10;
      }
      local_8 = local_8 + -4;
      *pcVar6 = (char)uVar3;
      local_10 = local_10 >> 4 | local_c << 0x1c;
      local_c = local_c >> 4;
      pcVar6 = pcVar6 + 1;
      param_4 = param_4 - 1;
    } while (-1 < (short)local_8);
    if ((-1 < (short)local_8) && (uVar3 = __aullshr(), pcVar11 = pcVar6, 8 < uVar3)) {
      while( true ) {
        pcVar7 = pcVar11 + -1;
        if ((*pcVar7 != 'f') && (*pcVar7 != 'F')) break;
        *pcVar7 = '0';
        pcVar11 = pcVar7;
      }
      if (pcVar7 == pcVar12) {
        pcVar11[-2] = pcVar11[-2] + '\x01';
      }
      else if (*pcVar7 == '9') {
        *pcVar7 = (char)sVar10 + ':';
      }
      else {
        *pcVar7 = *pcVar7 + '\x01';
      }
    }
  }
  if (0 < (int)param_4) {
    _memset(pcVar6,0x30,param_4);
    pcVar6 = pcVar6 + param_4;
  }
  if (*pcVar12 == '\0') {
    pcVar6 = pcVar12;
  }
  *pcVar6 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
  uVar8 = __aullshr();
  uVar9 = (uVar8 & 0x7ff) - local_18;
  iVar14 = -(uint)((uVar8 & 0x7ff) < local_18);
  if (iVar14 < 0) {
    pcVar6[1] = '-';
    bVar13 = uVar9 != 0;
    uVar9 = -uVar9;
    iVar14 = -(iVar14 + (uint)bVar13);
  }
  else {
    pcVar6[1] = '+';
  }
  pcVar11 = pcVar6 + 2;
  *pcVar11 = '0';
  pcVar12 = pcVar11;
  if ((iVar14 < 0) || ((iVar14 < 1 && (uVar9 < 1000)))) {
LAB_009903a2:
    if ((-1 < iVar14) && ((0 < iVar14 || (99 < uVar9)))) goto LAB_009903ad;
  }
  else {
    cVar1 = __alldvrm(uVar9,iVar14,1000,0);
    *pcVar11 = cVar1 + '0';
    pcVar12 = pcVar6 + 3;
    iVar14 = 0;
    uVar9 = extraout_ECX;
    local_14 = extraout_EDX;
    if (pcVar12 == pcVar11) goto LAB_009903a2;
LAB_009903ad:
    cVar1 = __alldvrm(uVar9,iVar14,100,0);
    *pcVar12 = cVar1 + '0';
    pcVar12 = pcVar12 + 1;
    iVar14 = 0;
    uVar9 = extraout_ECX_00;
    local_14 = extraout_EDX_00;
  }
  if ((pcVar12 != pcVar11) || ((-1 < iVar14 && ((0 < iVar14 || (9 < uVar9)))))) {
    cVar1 = __alldvrm(uVar9,iVar14,10,0);
    *pcVar12 = cVar1 + '0';
    pcVar12 = pcVar12 + 1;
    uVar9 = extraout_ECX_01;
  }
  *pcVar12 = (char)uVar9 + '0';
  pcVar12[1] = '\0';
LAB_009903f3:
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
  return 0;
}



/* Library Function - Single Match
    __cftof2_l
   
   Library: Visual Studio 2005 Release */

undefined4 __cftof2_l(int param_1,size_t param_2,char param_3,localeinfo_struct *param_4)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *in_ECX;
  size_t sVar5;
  undefined1 *puVar6;
  int local_14 [2];
  int local_c;
  char local_8;
  
  iVar1 = in_EAX[1];
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_4);
  if ((in_ECX == (undefined1 *)0x0) || (param_1 == 0)) {
    piVar3 = __errno();
    uVar4 = 0x16;
    *piVar3 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    if ((param_3 != '\0') && (iVar1 - 1U == param_2)) {
      iVar2 = *in_EAX;
      in_ECX[(uint)(iVar2 == 0x2d) + (iVar1 - 1U)] = 0x30;
      (in_ECX + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = 0;
    }
    if (*in_EAX == 0x2d) {
      *in_ECX = 0x2d;
      in_ECX = in_ECX + 1;
    }
    if (in_EAX[1] < 1) {
      __shift();
      *in_ECX = 0x30;
      puVar6 = in_ECX + 1;
    }
    else {
      puVar6 = in_ECX + in_EAX[1];
    }
    if (0 < (int)param_2) {
      __shift();
      *puVar6 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      if (in_EAX[1] < 0) {
        sVar5 = -in_EAX[1];
        if ((param_3 != '\0') || ((int)sVar5 <= (int)param_2)) {
          param_2 = sVar5;
        }
        __shift();
        _memset(puVar6 + 1,0x30,param_2);
      }
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    uVar4 = 0;
  }
  return uVar4;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __cftof_l
   
   Library: Visual Studio 2005 Release */

errno_t __cftof_l(double *param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  eVar2 = 0x16;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else {
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (uint)(local_30.sign == 0x2d);
    }
    eVar2 = __fptostr(param_2 + (local_30.sign == 0x2d),_SizeInBytes,local_30.decpt + param_4,
                      &local_30);
    if (eVar2 == 0) {
      eVar2 = __cftof2_l(param_3,param_4,0,param_5);
    }
    else {
      *param_2 = 0;
    }
  }
  return eVar2;
}



/* Library Function - Single Match
    __cftof
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __cftof(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec)

{
  errno_t eVar1;
  
  eVar1 = __cftof_l(_Value,_Buf,_SizeInBytes,_Dec,0);
  return eVar1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __cftog_l
   
   Library: Visual Studio 2005 Release */

errno_t __cftog_l(double *param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  int *piVar2;
  errno_t eVar3;
  size_t _SizeInBytes;
  char *pcVar4;
  _strflt local_34;
  int local_24;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  eVar3 = 0x16;
  __fltout2((_CRT_DOUBLE)*param_1,&local_34,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else {
    local_24 = local_34.decpt + -1;
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (uint)(local_34.sign == 0x2d);
    }
    eVar3 = __fptostr(param_2 + (local_34.sign == 0x2d),_SizeInBytes,param_4,&local_34);
    if (eVar3 == 0) {
      local_34.decpt = local_34.decpt + -1;
      if ((local_34.decpt < -4) || (param_4 <= local_34.decpt)) {
        eVar3 = __cftoe2_l(param_3,param_4,param_5,&local_34,1,param_6);
      }
      else {
        pcVar1 = param_2 + (local_34.sign == 0x2d);
        if (local_24 < local_34.decpt) {
          do {
            pcVar4 = pcVar1;
            pcVar1 = pcVar4 + 1;
          } while (*pcVar4 != '\0');
          pcVar4[-1] = '\0';
        }
        eVar3 = __cftof2_l(param_3,param_4,1,param_6);
      }
    }
    else {
      *param_2 = 0;
    }
  }
  return eVar3;
}



/* Library Function - Single Match
    __cfltcvt_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__cfltcvt_l(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps,
           _locale_t plocinfo)

{
  errno_t eVar1;
  
  if ((format == 0x65) || (format == 0x45)) {
    eVar1 = __cftoe_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
  }
  else {
    if (format == 0x66) {
      eVar1 = __cftof_l(arg,buffer,sizeInBytes,precision,plocinfo);
      return eVar1;
    }
    if ((format == 0x61) || (format == 0x41)) {
      eVar1 = __cftoa_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
    }
    else {
      eVar1 = __cftog_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
    }
  }
  return eVar1;
}



/* Library Function - Single Match
    __cfltcvt
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  errno_t eVar1;
  
  eVar1 = __cfltcvt_l(arg,buffer,sizeInBytes,format,precision,caps,(_locale_t)0x0);
  return eVar1;
}



/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2010 Release */

void __setdefaultprecision(void)

{
  errno_t eVar1;
  
  eVar1 = __controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x009907cb) */
/* Library Function - Single Match
    __ms_p5_test_fdiv
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __ms_p5_test_fdiv(void)

{
  return 0;
}



/* Library Function - Single Match
    __ms_p5_mp_test_fdiv
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __ms_p5_mp_test_fdiv(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  __ms_p5_test_fdiv();
  return;
}



/* Library Function - Single Match
    __isctype_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale)

{
  int iVar1;
  BOOL BVar2;
  CHAR CVar3;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  CHAR local_c;
  CHAR local_b;
  undefined1 local_a;
  ushort local_8 [2];
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if (_C + 1U < 0x101) {
    local_8[0] = *(ushort *)(local_1c.locinfo[1].lc_category[0].locale + _C * 2);
  }
  else {
    iVar1 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c);
    CVar3 = (CHAR)_C;
    if (iVar1 == 0) {
      local_b = '\0';
      iVar1 = 1;
      local_c = CVar3;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_c = (CHAR)_C;
      local_a = 0;
      iVar1 = 2;
      local_b = CVar3;
    }
    BVar2 = ___crtGetStringTypeA
                      (&local_1c,1,&local_c,iVar1,local_8,(local_1c.locinfo)->lc_codepage,
                       (BOOL)(local_1c.locinfo)->lc_category[0].wlocale);
    if (BVar2 == 0) {
      if (local_10 != '\0') {
        *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return (uint)local_8[0] & _Type;
}



/* Library Function - Single Match
    __cintrindisp2
   
   Library: Visual Studio */

void __cintrindisp2(void)

{
  __trandisp2();
  FUN_0099098a();
  return;
}



/* Library Function - Single Match
    __cintrindisp1
   
   Library: Visual Studio */

void __cintrindisp1(void)

{
  __trandisp1();
  FUN_0099098a();
  return;
}



/* Library Function - Single Match
    __ctrandisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

void __ctrandisp2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __fload(param_1,param_2);
  __fload(param_3,param_4);
  __trandisp2();
  FUN_00990983();
  return;
}



void FUN_00990983(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  *(byte *)(unaff_EBP + -0x2c8) = *(byte *)(unaff_EBP + -0x2c8) & 0xfe;
  if (DAT_00ba9ddc != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if (cVar1 == -1) {
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    }
    else {
      if (cVar1 != -2) {
        if (cVar1 == '\0') {
          return;
        }
        *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
        goto LAB_00990a6f;
      }
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
      if (uVar2 == 0) {
        *(undefined4 *)(unaff_EBP + -0x8e) = 4;
        in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
        if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
          in_ST0 = in_ST0 * (float10)0.0;
        }
        goto LAB_00990a6f;
      }
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.7976931348623157e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_00990a6f;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_00990a6f:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  __87except((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),unaff_EBP + -0x8e,unaff_EBP + -0xa4);
  return;
}



void FUN_0099098a(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  if (DAT_00ba9ddc != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if (cVar1 == -1) {
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    }
    else {
      if (cVar1 != -2) {
        if (cVar1 == '\0') {
          return;
        }
        *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
        goto LAB_00990a6f;
      }
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
      if (uVar2 == 0) {
        *(undefined4 *)(unaff_EBP + -0x8e) = 4;
        in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
        if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
          in_ST0 = in_ST0 * (float10)0.0;
        }
        goto LAB_00990a6f;
      }
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.7976931348623157e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_00990a6f;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_00990a6f:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  __87except((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),unaff_EBP + -0x8e,unaff_EBP + -0xa4);
  return;
}



/* Library Function - Single Match
    __ctrandisp1
   
   Library: Visual Studio */

void __ctrandisp1(undefined4 param_1,undefined4 param_2)

{
  __fload(param_1,param_2);
  __trandisp1();
  FUN_00990983();
  return;
}



/* Library Function - Single Match
    __fload
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

float10 __fload(uint param_1,int param_2)

{
  float10 fVar1;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    fVar1 = (float10)CONCAT28(param_2._2_2_ | 0x7fff,
                              CONCAT44(param_2 << 0xb | param_1 >> 0x15,param_1));
  }
  else {
    fVar1 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  return fVar1;
}



/* Library Function - Single Match
    __trandisp1
   
   Library: Visual Studio */

void __trandisp1(void)

{
  float10 fVar1;
  byte bVar2;
  int in_EDX;
  undefined2 uVar3;
  int unaff_EBP;
  float10 in_ST0;
  
  if (*(char *)(in_EDX + 0xe) == '\x05') {
    uVar3 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar3 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar3;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = in_EDX;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  bVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x00990ba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_EDX + (char)(&DAT_00b319cc)[(byte)((bVar2 & 7) << 1 | (char)bVar2 < '\0')] + 0x10)
  )();
  return;
}



/* Library Function - Single Match
    __trandisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

void __trandisp2(void)

{
  float10 fVar1;
  char cVar2;
  byte bVar3;
  int in_EDX;
  undefined2 uVar4;
  int unaff_EBP;
  float10 in_ST0;
  float10 in_ST1;
  
  if (*(char *)(in_EDX + 0xe) == '\x05') {
    uVar4 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar4 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar4;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = in_EDX;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  fVar1 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST1) << 8 | (ushort)(in_ST1 < fVar1) << 9 | (ushort)(in_ST1 != fVar1) << 10 |
       (ushort)(in_ST1 == fVar1) << 0xe;
  bVar3 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
  cVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x00990c31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_EDX + (char)((&DAT_00b319cc)[(byte)(cVar2 << 1 | cVar2 < '\0') & 0xf] |
                              (&DAT_00b319cc)[(byte)((bVar3 & 7) << 1 | (char)bVar3 < '\0')] << 2) +
              0x10))();
  return;
}



void FUN_00990d03(void)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00991516(undefined4 param_1,uint param_2,ushort param_3)

{
  undefined4 in_EAX;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 in_stack_0000001c;
  undefined2 uStack00000020;
  undefined2 uStack00000022;
  ushort in_stack_00000024;
  
  if ((((((CONCAT22(param_3,param_2._2_2_) ^ 0x700) & 0x700) == 0) &&
       ((&DAT_00b319fc)[(param_2._2_2_ & 0x7800) >> 0xb] != '\0')) && ((param_3 & 0x7fff) != 0x7fff)
      ) && ((((in_stack_00000024 & 0x7fff) != 0 && ((in_stack_00000024 & 0x7fff) != 0x7fff)) &&
            (((_uStack00000020 & 0x7fffffff) == 0 && ((param_2 & 0x7fffffff) == 0)))))) {
    if ((ushort)((param_3 & 0x7fff) + 0x3f) < (in_stack_00000024 & 0x7fff)) {
      iVar1 = ((in_stack_00000024 & 0x7fff) - (param_3 & 0x7fff) & 0x3f | 0x20) + 1;
      fVar3 = ABS((float10)CONCAT28(in_stack_00000024 & 0x7fff | param_3 & 0x8000,
                                    CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))));
      fVar2 = ABS((float10)CONCAT28(in_stack_00000024,
                                    CONCAT26(uStack00000022,
                                             CONCAT24(uStack00000020,in_stack_0000001c))));
      do {
        if (fVar3 <= fVar2) {
          fVar2 = fVar2 - fVar3;
        }
        fVar3 = fVar3 * (float10)_DAT_00b31a2c;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else {
      while (-1 < (int)((in_stack_00000024 & 0x7fff) - ((param_3 & 0x7fff) + 10))) {
        fVar2 = (float10)CONCAT28(in_stack_00000024,
                                  CONCAT26(uStack00000022,CONCAT24(uStack00000020,in_stack_0000001c)
                                          ));
        fVar3 = (float10)CONCAT28((in_stack_00000024 & 0x7fff) -
                                  ((in_stack_00000024 & 0x7fff) - param_3 & 7 | 4) |
                                  param_3 & 0x8000,
                                  CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)));
        fVar2 = fVar2 - (fVar2 / fVar3) * fVar3;
        in_stack_0000001c = SUB104(fVar2,0);
        uStack00000020 = (undefined2)((unkuint10)fVar2 >> 0x20);
        uStack00000022 = (undefined2)((unkuint10)fVar2 >> 0x30);
        in_stack_00000024 = (ushort)((unkuint10)fVar2 >> 0x40);
      }
    }
  }
  return in_EAX;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0099171c(void)

{
  float10 in_ST0;
  float10 fVar1;
  float10 in_ST1;
  
  if (((uint)((unkuint10)in_ST1 >> 0x30) & 0x7fff0000) != 0) {
    fVar1 = (float10)FUN_00991516();
    return fVar1;
  }
  if (SUB104(in_ST1,0) != 0 || (int)((unkuint10)in_ST1 >> 0x20) != 0) {
    fVar1 = (float10)FUN_00991516(in_ST1 * (float10)_DAT_00b31a14);
    return fVar1;
  }
  return in_ST0 - (in_ST0 / in_ST1) * in_ST1;
}



float10 FUN_00991aa0(void)

{
  float10 in_ST0;
  
  __87except();
  return (float10)(double)in_ST0;
}



/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Library: Visual Studio 2005 Release */

float10 __startOneArgErrorHandling(void)

{
  float10 in_ST0;
  
  __87except();
  return (float10)(double)in_ST0;
}



void FUN_00991b15(void)

{
  return;
}



undefined4 FUN_00991b2c(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 7;
  }
  return 1;
}



/* Library Function - Single Match
    __fload_withFB
   
   Library: Visual Studio */

uint __fload_withFB(void)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = *(uint *)(in_EDX + 4) & 0x7ff00000;
  if (uVar1 != 0x7ff00000) {
    return uVar1;
  }
  return *(uint *)(in_EDX + 4);
}



uint FUN_00991b88(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}



/* Library Function - Single Match
    __math_exit
   
   Library: Visual Studio */

void __math_exit(void)

{
  ushort in_FPUStatusWord;
  ushort unaff_retaddr;
  
  if (((unaff_retaddr != 0x27f) && ((unaff_retaddr & 0x20) != 0)) &&
     ((in_FPUStatusWord & 0x20) != 0)) {
    __startOneArgErrorHandling();
    return;
  }
  return;
}



/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio 2005 Release */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



/* Library Function - Single Match
    __mbstok_s_l
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbstok_s_l(uchar *_Str,uchar *_Delim,uchar **_Context,_locale_t _Locale)

{
  byte bVar1;
  int *piVar2;
  uchar *puVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  byte *local_c;
  int local_8;
  byte *pbVar7;
  
  if ((_Context == (uchar **)0x0) || (_Delim == (uchar *)0x0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return (uchar *)0x0;
  }
  if ((_Str == (uchar *)0x0) && (*_Context == (uchar *)0x0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return (uchar *)0x0;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if ((local_1c.mbcinfo)->ismbcodepage == 0) {
    puVar3 = (uchar *)_strtok_s((char *)_Str,(char *)_Delim,(char **)_Context);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return puVar3;
    }
    return puVar3;
  }
  if (_Str == (uchar *)0x0) {
    _Str = *_Context;
  }
  for (; local_c = _Str, *_Str != 0; _Str = _Str + 1) {
    bVar1 = *_Delim;
    pbVar5 = _Delim;
    while (bVar1 != 0) {
      iVar4 = __ismbblead_l((uint)*pbVar5,&local_1c);
      if (iVar4 == 0) {
        pbVar6 = pbVar5;
        if (*pbVar5 == *_Str) break;
      }
      else {
        pbVar6 = pbVar5 + 1;
        if (*pbVar6 == 0) {
          pbVar5 = pbVar5 + 1;
          piVar2 = __errno();
          *piVar2 = 0x2a;
          break;
        }
        if ((*pbVar5 == *_Str) && (*pbVar6 == _Str[1])) break;
      }
      pbVar5 = pbVar6 + 1;
      bVar1 = *pbVar5;
    }
    if (*pbVar5 == 0) break;
    iVar4 = __ismbblead_l((uint)*_Str,&local_1c);
    if ((iVar4 != 0) && (_Str = _Str + 1, *_Str == 0)) {
      piVar2 = __errno();
      *piVar2 = 0x2a;
      local_c = _Str;
      break;
    }
  }
  do {
    pbVar5 = _Str;
    if (*_Str == 0) {
LAB_00991ec4:
      *_Context = pbVar5;
      if (local_c != pbVar5) {
        if (local_10 != '\0') {
          *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
          return local_c;
        }
        return local_c;
      }
      if (local_10 == '\0') {
        return (uchar *)0x0;
      }
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return (uchar *)0x0;
    }
    bVar1 = *_Delim;
    local_8 = 0;
    pbVar6 = _Delim;
    while (bVar1 != 0) {
      iVar4 = __ismbblead_l((uint)*pbVar6,&local_1c);
      if (iVar4 == 0) {
        pbVar7 = pbVar6;
        if (*pbVar6 == *_Str) break;
      }
      else {
        pbVar7 = pbVar6 + 1;
        if (*pbVar7 == 0) {
          pbVar6 = pbVar6 + 1;
          break;
        }
        if ((*pbVar6 == *_Str) && (*pbVar7 == _Str[1])) {
          local_8 = 1;
          break;
        }
      }
      pbVar6 = pbVar7 + 1;
      bVar1 = *pbVar6;
    }
    if (*pbVar6 != 0) {
      *_Str = 0;
      pbVar5 = _Str + 1;
      if (local_8 != 0) {
        _Str[1] = 0;
        pbVar5 = _Str + 2;
      }
      goto LAB_00991ec4;
    }
    iVar4 = __ismbblead_l((uint)*_Str,&local_1c);
    pbVar6 = _Str;
    if ((iVar4 != 0) && (pbVar6 = _Str + 1, *pbVar6 == 0)) {
      *_Str = 0;
      goto LAB_00991ec4;
    }
    _Str = pbVar6 + 1;
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x00991f45) */
/* Library Function - Single Match
    __fullpath
   
   Library: Visual Studio 2005 Release */

char * __cdecl __fullpath(char *_FullPath,char *_Path,size_t _SizeInBytes)

{
  DWORD DVar1;
  int *piVar2;
  char *pcVar3;
  LPSTR local_c;
  char *local_8;
  
  if ((_Path == (char *)0x0) || (*_Path == '\0')) {
    pcVar3 = __getcwd(_FullPath,_SizeInBytes);
    return pcVar3;
  }
  if (_FullPath == (char *)0x0) {
    DVar1 = GetFullPathNameA(_Path,0,(LPSTR)0x0,(LPSTR *)0x0);
    if (DVar1 == 0) goto LAB_00991f24;
    if (_SizeInBytes <= DVar1) {
      _SizeInBytes = DVar1;
    }
    local_8 = _calloc(_SizeInBytes,1);
    if (local_8 == (LPSTR)0x0) {
      piVar2 = __errno();
      *piVar2 = 0xc;
      return (char *)0x0;
    }
  }
  else {
    if (_SizeInBytes == 0) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      __invalid_parameter(0,0,0,0,0);
      return (char *)0x0;
    }
    local_8 = _FullPath;
  }
  DVar1 = GetFullPathNameA(_Path,_SizeInBytes,local_8,&local_c);
  if (_SizeInBytes <= DVar1) {
    if (_FullPath == (char *)0x0) {
      _free(local_8);
    }
    piVar2 = __errno();
    *piVar2 = 0x22;
    return (char *)0x0;
  }
  if (DVar1 != 0) {
    return local_8;
  }
  if (_FullPath == (char *)0x0) {
    _free(local_8);
  }
LAB_00991f24:
  DVar1 = GetLastError();
  __dosmaperr(DVar1);
  return (char *)0x0;
}



/* Library Function - Single Match
    ___dtoxmode
   
   Library: Visual Studio 2005 Release */

uint ___dtoxmode(byte param_1,uchar *param_2)

{
  uchar uVar1;
  uchar *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar2 = param_2;
  if (param_2[1] == ':') {
    puVar2 = param_2 + 2;
  }
  uVar1 = *puVar2;
  if ((((uVar1 == '\\') || (uVar1 == '/')) && (puVar2[1] == '\0')) ||
     (((param_1 & 0x10) != 0 || (uVar4 = 0x8000, uVar1 == '\0')))) {
    uVar4 = 0x4040;
  }
  uVar4 = uVar4 | (byte)~(param_1 << 7) & 0xffff0080 | 0x100;
  puVar2 = __mbsrchr(param_2,0x2e);
  if (puVar2 != (uchar *)0x0) {
    iVar3 = __mbsicmp(puVar2,".exe");
    if (iVar3 != 0) {
      iVar3 = __mbsicmp(puVar2,".cmd");
      if (iVar3 != 0) {
        iVar3 = __mbsicmp(puVar2,".bat");
        if (iVar3 != 0) {
          iVar3 = __mbsicmp(puVar2,".com");
          if (iVar3 != 0) goto LAB_0099209c;
        }
      }
    }
    uVar4 = uVar4 | 0x40;
  }
LAB_0099209c:
  return (uVar4 & 0x1c0) >> 6 | uVar4 | uVar4 >> 3 & 0x38;
}



/* Library Function - Single Match
    ___loctotime64_t
   
   Library: Visual Studio 2005 Release */

__time64_t __cdecl
___loctotime64_t(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                )

{
  int *piVar1;
  uint uVar2;
  errno_t eVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  undefined8 uVar10;
  tm local_38;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  iVar4 = param_1;
  local_14 = param_1 - 0x76c;
  local_c = 0;
  local_10 = 0;
  local_8 = 0;
  if (((int)local_14 < 0x46) || (0x44c < (int)local_14)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    uVar2 = 0xffffffff;
    iVar4 = -1;
    goto LAB_0099233e;
  }
  if ((((0xb < param_2 - 1U) || (0x17 < (uint)param_4)) || (0x3b < (uint)param_5)) ||
     (0x3b < (uint)param_6)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    uVar2 = 0xffffffff;
    iVar4 = -1;
    goto LAB_0099233e;
  }
  if (param_3 < 1) {
LAB_00992198:
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    uVar2 = 0xffffffff;
    iVar4 = -1;
  }
  else {
    if (*(int *)(&DAT_00b320b4 + param_2 * 4) - *(int *)(&DAT_00b320b0 + param_2 * 4) < param_3) {
      uVar2 = local_14 & 0x80000003;
      bVar8 = uVar2 == 0;
      if ((int)uVar2 < 0) {
        bVar8 = (uVar2 - 1 | 0xfffffffc) == 0xffffffff;
      }
      if ((((!bVar8) || ((int)local_14 % 100 == 0)) && (param_1 % 400 != 0)) ||
         ((param_2 != 2 || (0x1d < param_3)))) goto LAB_00992198;
    }
    iVar6 = *(int *)(&DAT_00b320b0 + param_2 * 4) + param_3;
    uVar2 = local_14 & 0x80000003;
    bVar8 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar8 = (uVar2 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if ((((bVar8) && ((int)local_14 % 100 != 0)) ||
        (iVar5 = param_1 % 400, param_1 = iVar6, iVar5 == 0)) && (param_1 = iVar6, 2 < param_2)) {
      param_1 = iVar6 + 1;
    }
    lVar9 = __allmul(iVar4 + -0x7b2,((int)local_14 >> 0x1f) - (uint)(local_14 < 0x46),0x16d,0);
    uVar10 = __allmul(lVar9 + (((iVar4 + -0x641) / 400 - (iVar4 + -0x76d) / 100) + -0x11 +
                              ((int)(iVar4 + -0x76d + (iVar4 + -0x76d >> 0x1f & 3U)) >> 2)) +
                      (longlong)param_1,0x18,0);
    uVar10 = __allmul((uint)uVar10 + param_4,
                      (int)((ulonglong)uVar10 >> 0x20) + (param_4 >> 0x1f) +
                      (uint)CARRY4((uint)uVar10,param_4),0x3c,0);
    uVar10 = __allmul((uint)uVar10 + param_5,
                      (int)((ulonglong)uVar10 >> 0x20) + (param_5 >> 0x1f) +
                      (uint)CARRY4((uint)uVar10,param_5),0x3c,0);
    uVar7 = (uint)uVar10 + param_6;
    ___tzset();
    eVar3 = __get_daylight(&local_c);
    if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    eVar3 = __get_dstbias((long *)&local_10);
    if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    eVar3 = __get_timezone((long *)&local_8);
    if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar2 = uVar7 + local_8;
    local_38.tm_yday = param_1;
    local_38.tm_year = local_14;
    iVar4 = (int)((ulonglong)uVar10 >> 0x20) + (param_6 >> 0x1f) +
            (uint)CARRY4((uint)uVar10,param_6) + ((int)local_8 >> 0x1f) +
            (uint)CARRY4(uVar7,local_8);
    local_38.tm_mon = param_2 + -1;
    local_38.tm_hour = param_4;
    local_38.tm_min = param_5;
    local_38.tm_sec = param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (local_c != 0)) && (iVar6 = __isindst(&local_38), iVar6 != 0)))) {
      bVar8 = CARRY4(uVar2,local_10);
      uVar2 = uVar2 + local_10;
      iVar4 = iVar4 + ((int)local_10 >> 0x1f) + (uint)bVar8;
    }
  }
LAB_0099233e:
  return CONCAT44(iVar4,uVar2);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __getdrive
   
   Library: Visual Studio 2005 Release */

int __cdecl __getdrive(void)

{
  bool bVar1;
  DWORD DVar2;
  byte *lpBuffer;
  int *piVar3;
  int iVar4;
  byte local_110 [120];
  undefined1 local_98 [144];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)local_98;
  bVar1 = false;
  lpBuffer = local_110;
  DVar2 = GetCurrentDirectoryA(0x105,(LPSTR)lpBuffer);
  if (0x104 < (int)DVar2) {
    lpBuffer = __calloc_crt(DVar2 + 1,1);
    if (lpBuffer == (byte *)0x0) {
      piVar3 = __errno();
      *piVar3 = 0xc;
      DVar2 = 0;
    }
    else {
      bVar1 = true;
      if (DVar2 != 0) {
        DVar2 = GetCurrentDirectoryA(DVar2 + 1,(LPSTR)lpBuffer);
      }
    }
  }
  iVar4 = 0;
  if (DVar2 == 0) {
    piVar3 = __errno();
    *piVar3 = 0xc;
  }
  else if (lpBuffer[1] == 0x3a) {
    iVar4 = _toupper((uint)*lpBuffer);
    iVar4 = iVar4 + -0x40;
  }
  if (bVar1) {
    _free(lpBuffer);
  }
  return iVar4;
}



/* Library Function - Single Match
    __mbctolower_l
   
   Library: Visual Studio 2005 Release */

uint __cdecl __mbctolower_l(uint _Ch,_locale_t _Locale)

{
  int iVar1;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  CHAR local_c;
  undefined1 local_b;
  CHAR local_8;
  undefined1 local_7;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if (_Ch < 0x100) {
    if (((local_1c.mbcinfo)->mbctype[_Ch + 5] & 0x10) != 0) {
      _Ch = (uint)(local_1c.mbcinfo)->mbcasemap[_Ch + 4];
    }
  }
  else {
    local_8 = (CHAR)(_Ch >> 8);
    local_7 = (undefined1)_Ch;
    if ((((local_1c.mbcinfo)->mbctype[(_Ch >> 8 & 0xff) + 5] & 4) == 0) ||
       (iVar1 = ___crtLCMapStringA(&local_1c,*(LPCWSTR *)(local_1c.mbcinfo)->mbulinfo,0x100,&local_8
                                   ,2,&local_c,2,(local_1c.mbcinfo)->mbcodepage,1), iVar1 == 0)) {
      if (local_10 == '\0') {
        return _Ch;
      }
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return _Ch;
    }
    _Ch = (uint)CONCAT11(local_c,local_b);
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return _Ch;
}



/* Library Function - Single Match
    __mbctolower
   
   Library: Visual Studio 2005 Release */

uint __cdecl __mbctolower(uint _Ch)

{
  uint uVar1;
  
  uVar1 = __mbctolower_l(_Ch,(_locale_t)0x0);
  return uVar1;
}



/* Library Function - Single Match
    __mbspbrk_l
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbspbrk_l(uchar *_Str,uchar *_Control,_locale_t _Locale)

{
  byte bVar1;
  uchar *puVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (*(int *)(local_10 + 8) == 0) {
    puVar2 = (uchar *)_strpbrk((char *)_Str,(char *)_Control);
  }
  else {
    if ((_Str == (uchar *)0x0) || (_Control == (uchar *)0x0)) {
      piVar3 = __errno();
      *piVar3 = 0x16;
      __invalid_parameter(0,0,0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return (uchar *)0x0;
    }
    pbVar5 = _Control;
    if (*_Str != '\0') {
LAB_0099254e:
      do {
        if (*pbVar5 != 0) {
          bVar1 = *pbVar5;
          if ((*(byte *)(bVar1 + 0x1d + local_10) & 4) == 0) {
            pbVar4 = pbVar5;
            if (bVar1 != *_Str) goto LAB_0099254d;
          }
          else if (((bVar1 != *_Str) || (pbVar5[1] != _Str[1])) &&
                  (pbVar4 = pbVar5 + 1, *pbVar4 != 0)) {
LAB_0099254d:
            pbVar5 = pbVar4 + 1;
            goto LAB_0099254e;
          }
        }
        if (((*pbVar5 != 0) ||
            (((*(byte *)(*_Str + 0x1d + local_10) & 4) != 0 && (_Str = _Str + 1, *_Str == 0)))) ||
           (_Str = _Str + 1, pbVar5 = _Control, *_Str == 0)) break;
      } while( true );
    }
    puVar2 = (uchar *)(-(uint)(*_Str != 0) & (uint)_Str);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return puVar2;
}



/* Library Function - Single Match
    __mbspbrk
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbspbrk(uchar *_Str,uchar *_Control)

{
  uchar *puVar1;
  
  puVar1 = __mbspbrk_l(_Str,_Control,(_locale_t)0x0);
  return puVar1;
}



void FUN_009925a0(void)

{
  float10 in_ST0;
  
  FUN_009925be((double)in_ST0);
  return;
}



float10 FUN_009925be(void)

{
  int iVar1;
  ushort uVar2;
  float10 fVar3;
  double in_XMM0_Qa;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar2 = ((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff) + 0xc7e0;
  if (uVar2 < 0x8a9) {
    dVar11 = (in_XMM0_Qa * 10.185916357881302 + 1.080863910568919e+17) - 1.080863910568919e+17;
    dVar12 = (in_XMM0_Qa * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    dVar4 = in_XMM0_Qa - dVar11 * 0.0981747704247482;
    dVar8 = in_XMM0_Qa - dVar12 * 0.09817477042452083;
    dVar5 = dVar4 - dVar11 * -6.716466596861444e-14;
    dVar9 = dVar8 - dVar12 * 1.6020900947399724e-13;
    iVar1 = ((int)ROUND(in_XMM0_Qa * 10.185916357881302) + 0x72900U & 0x1f) * 0xb0;
    dVar16 = (double)((ulonglong)(dVar11 * 6.716466596857464e-14 + dVar4) & 0xfffffffffffc0000);
    dVar17 = 1.0 / dVar16;
    dVar6 = dVar9 * dVar9;
    dVar10 = dVar9 * dVar9;
    dVar7 = dVar6 * dVar6;
    dVar14 = dVar9 * *(double *)(&DAT_00aa5190 + iVar1) + dVar9 * *(double *)(&DAT_00aa5198 + iVar1)
    ;
    dVar13 = (double)(*(ulonglong *)(&DAT_00aa51a8 + iVar1) & (ulonglong)dVar17) -
             *(double *)(&DAT_00aa5180 + iVar1);
    dVar15 = dVar14 - dVar13;
    return (float10)(((dVar7 * dVar7 *
                       (*(double *)(&DAT_00aa5110 + iVar1) * dVar9 +
                        *(double *)(&DAT_00aa5100 + iVar1) +
                        (*(double *)(&DAT_00aa5130 + iVar1) * dVar9 +
                        *(double *)(&DAT_00aa5120 + iVar1)) * dVar6 +
                        *(double *)(&DAT_00aa5140 + iVar1) * dVar7 +
                       (*(double *)(&DAT_00aa5160 + iVar1) * dVar9 +
                        *(double *)(&DAT_00aa5150 + iVar1) +
                       *(double *)(&DAT_00aa5170 + iVar1) * dVar6) * dVar9 * dVar7) +
                       *(double *)(&UNK_00aa5118 + iVar1) * dVar9 +
                       *(double *)(&DAT_00aa5108 + iVar1) +
                       (*(double *)(&UNK_00aa5138 + iVar1) * dVar9 +
                       *(double *)(&DAT_00aa5128 + iVar1)) * dVar10 +
                       *(double *)(&UNK_00aa5148 + iVar1) * dVar10 * dVar10 +
                       (*(double *)(&UNK_00aa5168 + iVar1) * dVar9 +
                        *(double *)(&DAT_00aa5158 + iVar1) +
                       *(double *)(&UNK_00aa5178 + iVar1) * dVar10) * dVar9 * dVar10 * dVar10 +
                       (*(double *)(&DAT_00aa5190 + iVar1) + *(double *)(&DAT_00aa5198 + iVar1)) *
                       (((dVar8 - dVar9) - dVar12 * 1.6020900947399724e-13) -
                       dVar12 * 6.601874416867142e-25) + *(double *)(&DAT_00aa5188 + iVar1) +
                       dVar9 * *(double *)(&DAT_00aa5198 + iVar1) +
                       (dVar9 * *(double *)(&DAT_00aa5190 + iVar1) - dVar14) +
                      (dVar14 - (dVar13 + dVar15))) -
                     ((1.0 - dVar16 * (double)(*(ulonglong *)(&DAT_00aa51a8 + iVar1) &
                                              (ulonglong)dVar17)) -
                     ((((dVar4 - dVar5) - dVar11 * -6.716466596861444e-14) -
                      dVar11 * 3.9801982271943437e-26) + (dVar5 - dVar16)) * dVar17) *
                     dVar17 * *(double *)(&DAT_00aa51a0 + iVar1)) + dVar15);
  }
  if ((short)uVar2 < 0x8a9) {
    return (float10)((in_XMM0_Qa * 3.602879701896397e+16 + in_XMM0_Qa) * 2.7755575615628914e-17);
  }
  fVar3 = (float10)FUN_00983b3f();
  return fVar3;
}



/* Library Function - Single Match
    long __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *)
   
   Library: Visual Studio 2005 Release */

long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *param_1)

{
  PEXCEPTION_RECORD pEVar1;
  ULONG_PTR UVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  uint unaff_ESI;
  
  pEVar1 = param_1->ExceptionRecord;
  if (((pEVar1->ExceptionCode == 0xe06d7363) && (pEVar1->NumberParameters == 3)) &&
     ((UVar2 = pEVar1->ExceptionInformation[0], UVar2 == 0x19930520 ||
      (((UVar2 == 0x19930521 || (UVar2 == 0x19930522)) || (UVar2 == 0x1994000)))))) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  if (((DAT_00baa644 != '\0') &&
      (pcVar3 = (code *)__decode_pointer(DAT_00baa640), pcVar3 != (code *)0x0)) &&
     (iVar4 = _ValidateRead(pcVar3,unaff_ESI), iVar4 != 0)) {
    lVar5 = (*pcVar3)(param_1);
    return lVar5;
  }
  return 0;
}



/* Library Function - Single Match
    __set_exp
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

float10 __set_exp(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(undefined6)param_1);
  return (float10)local_c;
}



/* Library Function - Single Match
    __sptype
   
   Library: Visual Studio 2005 Release */

undefined4 __sptype(int param_1,uint param_2)

{
  undefined4 uStack_8;
  
  if (param_2 == 0x7ff00000) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    uStack_8 = 3;
  }
  else {
    if (((param_2._2_2_ & 0x7ff8) != 0x7ff0) || (((param_2 & 0x7ffff) == 0 && (param_1 == 0)))) {
      return 0;
    }
    uStack_8 = 4;
  }
  return uStack_8;
}



void FUN_00992936(uint param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int extraout_EDX;
  
  if ((double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))) ==
      0.0) {
    iVar3 = 0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    if (0.0 <= (double)CONCAT17(param_2._3_1_,
                                CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    while ((param_2._2_1_ & 0x10) == 0) {
      iVar3 = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,(ushort)param_2)) << 1;
      param_2._0_2_ = (ushort)iVar3;
      param_2._2_1_ = (byte)((uint)iVar3 >> 0x10);
      param_2._3_1_ = (byte)((uint)iVar3 >> 0x18);
      if ((param_1 & 0x80000000) != 0) {
        param_2._0_2_ = (ushort)param_2 | 1;
      }
      param_1 = param_1 << 1;
    }
    uVar1 = CONCAT11(param_2._3_1_,param_2._2_1_) & 0xffef;
    param_2._2_1_ = (byte)uVar1;
    param_2._3_1_ = (byte)(uVar1 >> 8);
    if (bVar2) {
      param_2._3_1_ = param_2._3_1_ | 0x80;
    }
    __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    iVar3 = extraout_EDX;
  }
  else {
    __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    iVar3 = ((param_2 >> 0x10 & 0x7ff0) >> 4) - 0x3fe;
  }
  *param_3 = iVar3;
  return;
}



/* Library Function - Single Match
    __raise_exc_ex
   
   Library: Visual Studio 2005 Release */

void __raise_exc_ex(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6
                   ,int param_7)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = param_3;
  puVar1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    param_1[1] = param_1[1] | 1;
    param_3 = 0xc000008f;
  }
  if ((uVar4 & 2) != 0) {
    param_1[1] = param_1[1] | 2;
    param_3 = 0xc0000093;
  }
  if ((uVar4 & 1) != 0) {
    param_1[1] = param_1[1] | 4;
    param_3 = 0xc0000091;
  }
  if ((uVar4 & 4) != 0) {
    param_1[1] = param_1[1] | 8;
    param_3 = 0xc000008e;
  }
  if ((uVar4 & 8) != 0) {
    param_1[1] = param_1[1] | 0x10;
    param_3 = 0xc0000090;
  }
  param_1[2] = param_1[2] ^ (~(*param_2 << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~(*param_2 * 2) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 1) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 3) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 5) ^ param_1[2]) & 1;
  bVar3 = __statfp();
  puVar2 = param_6;
  if ((bVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((bVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((bVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((bVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((bVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar4 = *puVar1 & 0xc00;
  if (uVar4 == 0) {
    *param_1 = *param_1 & 0xfffffffc;
  }
  else {
    if (uVar4 == 0x400) {
      uVar4 = *param_1 & 0xfffffffd | 1;
    }
    else {
      if (uVar4 != 0x800) {
        if (uVar4 == 0xc00) {
          *param_1 = *param_1 | 3;
        }
        goto LAB_00992b42;
      }
      uVar4 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar4;
  }
LAB_00992b42:
  uVar4 = *puVar1 & 0x300;
  if (uVar4 == 0) {
    uVar4 = *param_1 & 0xffffffeb | 8;
LAB_00992b78:
    *param_1 = uVar4;
  }
  else {
    if (uVar4 == 0x200) {
      uVar4 = *param_1 & 0xffffffe7 | 4;
      goto LAB_00992b78;
    }
    if (uVar4 == 0x300) {
      *param_1 = *param_1 & 0xffffffe3;
    }
  }
  *param_1 = *param_1 ^ (param_4 << 5 ^ *param_1) & 0x1ffe0;
  param_1[8] = param_1[8] | 1;
  if (param_7 == 0) {
    param_1[8] = param_1[8] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)param_6;
  }
  else {
    param_1[8] = param_1[8] & 0xffffffe1;
    param_1[4] = *param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe1;
    param_1[0x14] = *param_6;
  }
  __clrfp();
  RaiseException(param_3,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar4 = *param_1 & 3;
  if (uVar4 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar4 == 1) {
      uVar4 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar4 != 2) {
        if (uVar4 == 3) {
          *puVar1 = *puVar1 | 0xc00;
        }
        goto LAB_00992c7d;
      }
      uVar4 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar4;
  }
LAB_00992c7d:
  uVar4 = *param_1 >> 2 & 7;
  if (uVar4 == 0) {
    uVar4 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar4 != 1) {
      if (uVar4 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_00992ca9;
    }
    uVar4 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar4;
LAB_00992ca9:
  if (param_7 == 0) {
    *(undefined8 *)puVar2 = *(undefined8 *)(param_1 + 0x14);
  }
  else {
    *puVar2 = param_1[0x14];
  }
  return;
}



/* Library Function - Single Match
    __raise_exc
   
   Library: Visual Studio 2005 Release */

void __raise_exc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  __raise_exc_ex(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __handle_exc
   
   Library: Visual Studio 2005 Release */

bool __handle_exc(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  ulonglong uVar4;
  double dVar5;
  uint uVar6;
  bool bVar7;
  float10 fVar8;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  uVar6 = param_1 & 0x1f;
  bVar3 = true;
  local_8 = uVar6;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_009930ff(1);
    uVar6 = param_1 & 0x17;
    goto LAB_00992e9f;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_009930ff(4);
    uVar6 = param_1 & 0x1b;
    goto LAB_00992e9f;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar7 = (param_1 & 0x10) != 0;
      if (*param_2 != 0.0) {
        fVar8 = (float10)FUN_00992936(*param_2,&local_c);
        dVar2 = (double)fVar8;
        local_c = local_c + -0x600;
        if (local_c < -0x432) {
          local_14 = dVar2 * 0.0;
          bVar7 = bVar3;
        }
        else {
          local_14 = (double)((ulonglong)dVar2 & 0xfffffffffffff | 0x10000000000000);
          if (local_c < -0x3fd) {
            local_c = -0x3fd - local_c;
            do {
              if ((((ulonglong)local_14 & 1) != 0) && (!bVar7)) {
                bVar7 = bVar3;
              }
              uVar6 = (uint)local_14 >> 1;
              uVar4 = (ulonglong)local_14 & 0x100000000;
              local_14._0_4_ = uVar6;
              if (uVar4 != 0) {
                local_14._0_4_ = uVar6 | 0x80000000;
              }
              local_14 = (double)CONCAT44(local_14._4_4_ >> 1,(uint)local_14);
              local_c = local_c + -1;
            } while (local_c != 0);
          }
          if (dVar2 < 0.0) {
            local_14 = -local_14;
          }
        }
        *param_2 = local_14;
        bVar3 = bVar7;
      }
      if (bVar3) {
        FUN_009930ff(0x10);
      }
      uVar6 = local_8 & 0xfffffffd;
      local_8 = uVar6;
    }
    goto LAB_00992e9f;
  }
  FUN_009930ff(8);
  uVar6 = param_3 & 0xc00;
  dVar2 = _DAT_00b31b40;
  dVar5 = _DAT_00b31b40;
  if (uVar6 == 0) {
    dVar1 = *param_2;
joined_r0x00992d82:
    if (dVar1 <= 0.0) {
      dVar2 = -dVar5;
    }
    *param_2 = dVar2;
  }
  else {
    if (uVar6 == 0x400) {
      dVar1 = *param_2;
      dVar2 = _DAT_00b31b50;
      goto joined_r0x00992d82;
    }
    dVar5 = _DAT_00b31b50;
    if (uVar6 == 0x800) {
      dVar1 = *param_2;
      goto joined_r0x00992d82;
    }
    if (uVar6 == 0xc00) {
      dVar1 = *param_2;
      dVar2 = _DAT_00b31b50;
      goto joined_r0x00992d82;
    }
  }
  uVar6 = param_1 & 0x1e;
LAB_00992e9f:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_009930ff(0x20);
    uVar6 = uVar6 & 0xffffffef;
  }
  return uVar6 == 0;
}



/* Library Function - Single Match
    __set_errno_from_matherr
   
   Library: Visual Studio 2005 Release */

void __set_errno_from_matherr(int param_1)

{
  int *piVar1;
  
  if (param_1 == 1) {
    piVar1 = __errno();
    *piVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    piVar1 = __errno();
    *piVar1 = 0x22;
    return;
  }
  return;
}



/* Library Function - Single Match
    __errcode
   
   Library: Visual Studio 2005 Release */

char __errcode(byte param_1)

{
  char cVar1;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) != 0) {
      return '\x01';
    }
    if ((param_1 & 4) == 0) {
      if ((param_1 & 1) == 0) {
        return (param_1 & 2) * '\x02';
      }
      cVar1 = '\x03';
    }
    else {
      cVar1 = '\x02';
    }
  }
  else {
    cVar1 = '\x05';
  }
  return cVar1;
}



/* Library Function - Single Match
    __umatherr
   
   Library: Visual Studio 2005 Release */

float10 __umatherr(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  int iVar1;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  iVar1 = 0;
  do {
    if ((&DAT_00b31b68)[iVar1 * 2] == param_2) {
      local_20 = *(int *)(iVar1 * 8 + 0xb31b6c);
      goto LAB_00992f32;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  local_20 = 0;
LAB_00992f32:
  if (local_20 != 0) {
    local_1c = param_3;
    local_18 = param_4;
    local_14 = param_5;
    local_10 = param_6;
    local_c = param_7;
    local_24 = param_1;
    uStack_8 = param_8;
    __ctrlfp(param_9,0xffff);
    iVar1 = FUN_0098a318(&local_24);
    if (iVar1 == 0) {
      __set_errno_from_matherr(param_1);
    }
    return (float10)(double)CONCAT44(uStack_8,local_c);
  }
  __ctrlfp(param_9,0xffff);
  __set_errno_from_matherr(param_1);
  return (float10)(double)CONCAT44(param_8,param_7);
}



/* Library Function - Single Match
    __handle_qnan1
   
   Library: Visual Studio 2005 Release */

float10 __handle_qnan1(undefined4 param_1,double param_2,undefined4 param_3)

{
  int *piVar1;
  float10 fVar2;
  
  if (DAT_00b320e8 == 0) {
    fVar2 = (float10)__umatherr(1,param_1,param_2,0,param_2,param_3);
    return fVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x21;
  __ctrlfp();
  return (float10)param_2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __except1
   
   Library: Visual Studio 2005 Release */

float10 __except1(undefined4 param_1,undefined4 param_2,undefined8 param_3,double param_4,
                 undefined4 param_5)

{
  int iVar1;
  float10 fVar2;
  undefined1 local_90 [64];
  uint local_50;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)local_90;
  iVar1 = __handle_exc(param_1,&param_4,param_5);
  if (iVar1 == 0) {
    local_50 = local_50 & 0xfffffffe;
    __raise_exc_ex(local_90,&param_5,param_1,param_2,&param_3,&param_4,0);
  }
  iVar1 = __errcode(param_1);
  if ((DAT_00b320e8 == 0) && (iVar1 != 0)) {
    fVar2 = (float10)__umatherr(iVar1,param_2,param_3,0,param_4,param_5);
  }
  else {
    __set_errno_from_matherr(iVar1);
    __ctrlfp();
    fVar2 = (float10)param_4;
  }
  return fVar2;
}



/* Library Function - Single Match
    __statfp
   
   Library: Visual Studio 2005 Release */

int __statfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



/* Library Function - Single Match
    __clrfp
   
   Library: Visual Studio 2005 Release */

int __clrfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



/* Library Function - Single Match
    __ctrlfp
   
   Library: Visual Studio 2005 Release */

int __ctrlfp(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009930ff(void)

{
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2005 Release */

void ___set_fpsr_sse2(uint param_1)

{
  if (DAT_00baabe0 != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_00b31c68 == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}



/* Library Function - Single Match
    int __cdecl x_ismbbtype_l(struct localeinfo_struct *,unsigned int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  if ((*(byte *)(local_10 + 0x1d + (param_2 & 0xff)) & (byte)param_4) == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(*(int *)(local_14 + 200) + (param_2 & 0xff) * 2) & param_3;
    }
    iVar2 = 0;
    if (uVar1 == 0) goto LAB_00993209;
  }
  iVar2 = 1;
LAB_00993209:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}



/* Library Function - Single Match
    __ismbblead_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __ismbblead_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0,4);
  return iVar1;
}



/* Library Function - Single Match
    __ismbblead
   
   Library: Visual Studio 2005 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,4);
  return iVar1;
}



/* Library Function - Single Match
    __mbsnbcpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __mbsnbcpy_s(uchar *_Dst,size_t _SizeInBytes,uchar *_Src,size_t _MaxCount)

{
  errno_t eVar1;
  
  eVar1 = __mbsnbcpy_s_l(_Dst,_SizeInBytes,_Src,_MaxCount,(_locale_t)0x0);
  return eVar1;
}



/* Library Function - Single Match
    __lseek_nolock
   
   Library: Visual Studio 2005 Release */

long __cdecl __lseek_nolock(int _FileHandle,long _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  ulong uVar4;
  
  hFile = (HANDLE)__get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = __errno();
    *piVar2 = 9;
    return -1;
  }
  DVar3 = SetFilePointer(hFile,_Offset,(PLONG)0x0,_Origin);
  if (DVar3 == 0xffffffff) {
    uVar4 = GetLastError();
  }
  else {
    uVar4 = 0;
  }
  if (uVar4 == 0) {
    pbVar1 = (byte *)((&DAT_00baaac0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x28);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  else {
    __dosmaperr(uVar4);
    DVar3 = 0xffffffff;
  }
  return DVar3;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseek
   
   Library: Visual Studio 2005 Release */

long __cdecl __lseek(int _FileHandle,long _Offset,int _Origin)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  long local_20;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_00baaaa0)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x28;
      if ((*(byte *)((&DAT_00baaac0)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_00baaac0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __lseek_nolock(_FileHandle,_Offset,_Origin);
        }
        FUN_0099339f();
        return local_20;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    __invalid_parameter(0,0,0,0,0);
  }
  return -1;
}



void FUN_0099339f(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009933a9(void)

{
  _DAT_00baaa9c = 0;
  return;
}



/* Library Function - Single Match
    __isleadbyte_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isleadbyte_l(int _C,_locale_t _Locale)

{
  ushort uVar1;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  uVar1 = *(ushort *)(*(int *)(local_14[0] + 200) + (_C & 0xffU) * 2);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}



/* Library Function - Single Match
    _isleadbyte
   
   Library: Visual Studio 2005 Release */

int __cdecl _isleadbyte(int _C)

{
  int iVar1;
  
  iVar1 = __isleadbyte_l(_C,(_locale_t)0x0);
  return iVar1;
}



/* Library Function - Single Match
    __aulldiv
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



/* Library Function - Single Match
    __makepath_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__makepath_s(char *_PathResult,size_t _SizeInWords,char *_Drive,char *_Dir,char *_Filename,
            char *_Ext)

{
  int *piVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if ((_PathResult == (char *)0x0) || (_SizeInWords == 0)) {
    piVar1 = __errno();
    iVar7 = 0x16;
    goto LAB_00993484;
  }
  uVar5 = 0;
  puVar3 = (uchar *)_PathResult;
  if ((_Drive == (char *)0x0) || (*_Drive == '\0')) {
LAB_009934bf:
    if ((_Dir != (char *)0x0) && (puVar2 = (uchar *)_Dir, *_Dir != '\0')) {
      do {
        uVar6 = uVar5;
        puVar4 = puVar3;
        uVar5 = uVar6 + 1;
        if (_SizeInWords <= uVar5) goto LAB_00993555;
        *puVar4 = *puVar2;
        puVar3 = puVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (*puVar2 != '\0');
      puVar2 = __mbsdec((uchar *)_Dir,puVar2);
      if ((*puVar2 != '/') && (*puVar2 != '\\')) {
        uVar5 = uVar6 + 2;
        if (_SizeInWords <= uVar5) goto LAB_00993555;
        *puVar3 = '\\';
        puVar3 = puVar4 + 2;
      }
    }
    if (_Filename != (char *)0x0) {
      for (; *_Filename != '\0'; _Filename = _Filename + 1) {
        uVar5 = uVar5 + 1;
        if (_SizeInWords <= uVar5) goto LAB_00993555;
        *puVar3 = *_Filename;
        puVar3 = puVar3 + 1;
      }
    }
    if ((_Ext != (char *)0x0) && (*_Ext != '\0')) {
      if (*_Ext != '.') {
        uVar5 = uVar5 + 1;
        if (_SizeInWords <= uVar5) goto LAB_00993555;
        *puVar3 = '.';
        puVar3 = puVar3 + 1;
      }
      for (; *_Ext != '\0'; _Ext = _Ext + 1) {
        uVar5 = uVar5 + 1;
        if (_SizeInWords <= uVar5) goto LAB_00993555;
        *puVar3 = *_Ext;
        puVar3 = puVar3 + 1;
      }
    }
    if (uVar5 + 1 <= _SizeInWords) {
      *puVar3 = '\0';
      return 0;
    }
  }
  else {
    uVar5 = 2;
    if (2 < _SizeInWords) {
      *_PathResult = *_Drive;
      _PathResult[1] = ':';
      puVar3 = (uchar *)(_PathResult + 2);
      goto LAB_009934bf;
    }
  }
LAB_00993555:
  *_PathResult = '\0';
  piVar1 = __errno();
  iVar7 = 0x22;
LAB_00993484:
  *piVar1 = iVar7;
  __invalid_parameter(0,0,0,0,0);
  return iVar7;
}



void FUN_00993570(void)

{
  float10 in_ST0;
  
  FUN_0099358e((double)in_ST0);
  return;
}



float10 FUN_0099358e(double param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  double dVar9;
  undefined1 in_XMM0 [16];
  uint uVar12;
  ulonglong in_XMM2_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined4 in_XMM7_Dc;
  undefined4 in_XMM7_Dd;
  double local_c;
  
  dVar9 = in_XMM0._0_8_;
  uVar12 = in_XMM0._4_4_;
  uVar5 = uVar12 >> 0xc & 0x7ffff;
  if (uVar5 - 0x3fb00 < 0x3bb) {
    auVar10._0_8_ = ((ulonglong)uVar12 & 0xffffc000) << 0x20;
    auVar10._8_8_ = in_XMM2_Qb & CONCAT44(in_XMM7_Dd,in_XMM7_Dc);
    iVar6 = (uVar12 >> 0xc & 0xfffc) - 0xfb00;
    iVar7 = iVar6 * 4;
    dVar14 = SUB168(auVar10 | ZEXT816(0x200000000000),0);
    dVar13 = SQRT(1.0 - dVar9 * dVar9) * dVar14;
    dVar1 = dVar9 * *(double *)(&DAT_00aa7770 + iVar6 * 2) - dVar13;
    uVar12 = SUB164(auVar10 | ZEXT816(0x200000000000),4) & 0x80000000;
    dVar2 = dVar1 * dVar1;
    auVar4._4_8_ = 0;
    auVar4._0_4_ = uVar12;
    auVar11._0_12_ = auVar4 << 0x20;
    auVar11._12_4_ = uVar12;
    return (float10)(((dVar9 - dVar14) * (dVar9 + dVar14)) /
                     (dVar9 * *(double *)(&DAT_00aa7770 + iVar6 * 2) + dVar13) +
                     (dVar2 * 0.044642857142857144 + 0.075) * dVar1 * dVar2 * dVar2 +
                     dVar1 * dVar2 * 0.16666666666666666 +
                     (double)(*(ulonglong *)(&DAT_00aa6870 + iVar7) ^ (ulonglong)uVar12 << 0x20) +
                    (double)(*(ulonglong *)(&UNK_00aa6878 + iVar7) ^ auVar11._8_8_));
  }
  if (uVar5 - 0x3febb < 0x43) {
    dVar14 = SQRT(1.0 - dVar9 * dVar9);
    auVar3._8_4_ = in_XMM7_Dc;
    auVar3._0_8_ = dVar9;
    auVar3._12_4_ = in_XMM7_Dd;
    dVar2 = (double)((ulonglong)dVar9 & 0x7fffffc000000000);
    dVar1 = ABS(dVar9) - dVar2;
    dVar13 = (double)((ulonglong)dVar14 & 0xffffc00000000000 | 0x200000000000);
    iVar7 = (ushort)((ulonglong)((longlong)dVar14 << 2) >> 0x30) - 0xfec0;
    dVar14 = dVar14 * *(double *)(&DAT_00aa7770 + iVar7 * 8);
    dVar15 = (dVar2 * dVar13 - dVar14) + dVar1 * dVar13;
    iVar7 = iVar7 * 0x10;
    dVar16 = dVar15 * dVar15;
    return (float10)(double)((ulonglong)
                             ((((dVar16 * 0.044642857142857144 + 0.075) * dVar15 * dVar16 * dVar16 +
                               dVar15 * dVar16 * 0.16666666666666666 +
                               (6.123233995736766e-17 - *(double *)(&DAT_00aa6870 + iVar7))) -
                              (((1.0 - dVar2 * dVar2) - dVar13 * dVar13) -
                              (ABS(dVar9) + dVar2) * dVar1) / (dVar14 + dVar14 + dVar15)) +
                             (1.5707963267948966 - *(double *)(&UNK_00aa6878 + iVar7))) |
                            (ulonglong)(ushort)((ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 0xf) <<
                            0x30);
  }
  if (uVar5 - 0x3c300 < 0x3800) {
    dVar2 = dVar9 * dVar9;
    dVar14 = dVar9 * dVar9;
    dVar1 = dVar9 * dVar2;
    return (float10)(dVar9 + dVar1 * dVar1 * dVar1 *
                             (dVar2 * 0.022372159090909092 + 0.030381944444444444 +
                             dVar2 * dVar2 * 0.017352764423076924) +
                             dVar9 * dVar14 *
                             (dVar14 * 0.075 + 0.16666666666666666 +
                             dVar14 * dVar14 * 0.044642857142857144));
  }
  if (uVar5 - 0x3fefe < 2) {
    dVar15 = SQRT(1.0 - dVar9 * dVar9);
    dVar1 = (double)((ulonglong)dVar9 & 0xfffffffff8000000);
    dVar16 = (double)((ulonglong)dVar15 & 0xfffffffff8000000);
    dVar9 = dVar9 - dVar1;
    auVar18._8_4_ = SUB84(dVar15,0);
    auVar18._0_8_ = dVar15;
    auVar18._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    dVar2 = dVar15 * dVar15;
    dVar14 = dVar15 * dVar15;
    dVar17 = dVar15 * dVar2;
    dVar13 = dVar17 * dVar17 * dVar17;
    return (float10)(double)((ulonglong)
                             (((((dVar2 * 0.011551800896136895 + 0.01396484375) *
                                 dVar17 * dVar17 * dVar13 + 6.123233995736766e-17) -
                               ((dVar2 * dVar2 * 0.017352764423076924 +
                                dVar2 * 0.022372159090909092 + 0.030381944444444444) * dVar13 +
                                (dVar14 * dVar14 * 0.044642857142857144 +
                                dVar14 * 0.075 + 0.16666666666666666) * auVar18._8_8_ * dVar14 +
                               (((((1.0 - dVar1 * dVar1) - (dVar1 + dVar1) * dVar9) -
                                 dVar16 * dVar16) - dVar9 * dVar9) +
                               (dVar15 + dVar15 + (dVar16 - dVar15)) * (dVar16 - dVar15)) /
                               (dVar15 + dVar15))) -
                              (dVar15 - ((dVar15 - 1.5707963267948966) + 1.5707963267948966))) -
                             (dVar15 - 1.5707963267948966)) |
                            (ulonglong)(in_XMM0._6_2_ & 0x8000) << 0x30);
  }
  if (uVar5 < 0x3ff00) {
    if (0x7fdf < ((ushort)((ulonglong)param_1 >> 0x30) & 0x7ff0) - 0x10) {
      param_1 = (double)((ulonglong)param_1 | (ulonglong)(param_1 + 0.0));
    }
    return (float10)param_1;
  }
  if ((uVar12 & 0x7fffffff) != 0x3ff00000 || in_XMM0._0_4_ != 0) {
    if ((int)((((uint)((ulonglong)param_1 >> 0x20) & 0x7fffffff) + 0x80100000) -
             (uint)(SUB84(param_1,0) == 0)) < 0) {
      local_c = -NAN;
      uVar8 = 0x3d;
    }
    else {
      local_c = param_1 + 0.0;
      uVar8 = 0x3f1;
    }
    ___libm_error_support(&param_1,&param_1,&local_c,uVar8);
    return (float10)local_c;
  }
  return (float10)(double)((ulonglong)dVar9 & 0x8000000000000000 | 0x3ff921fb54442d18);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unkbyte10 FUN_00993b5c(void)

{
  return _DAT_00b319ba;
}



/* Library Function - Single Match
    ___libm_error_support
   
   Library: Visual Studio 2005 Release */

void ___libm_error_support(double *param_1,undefined8 *param_2,double *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_2c;
  char *local_28;
  double local_24;
  undefined8 local_1c;
  double local_14;
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined1 uStack_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  local_c = 0;
  uStack_b = 0;
  uStack_a = 0;
  uStack_9 = 0;
  uStack_8 = 0;
  uStack_7 = 0;
  uStack_6 = 0;
  uStack_5 = 0;
  if (DAT_00baa648 == 0) {
    pcVar1 = FUN_0098a318;
  }
  else {
    pcVar1 = (code *)__decode_pointer(DAT_00baaa98);
  }
  if (param_4 < 0xa7) {
    if (param_4 == 0xa6) {
      local_2c = 3;
      local_28 = "exp10";
LAB_00993c47:
      local_24 = *param_1;
      local_1c = *param_2;
      local_14 = *param_3;
      iVar2 = (*pcVar1)(&local_2c);
      if (iVar2 == 0) {
        piVar3 = __errno();
        *piVar3 = 0x22;
      }
    }
    else if (param_4 < 0x1a) {
      if (param_4 != 0x19) {
        local_2c = 2;
        if (param_4 == 2) {
          local_2c = 2;
          local_28 = "log";
        }
        else {
          if (param_4 == 3) {
            local_28 = "log";
            goto LAB_00993cb5;
          }
          if (param_4 == 8) {
            local_28 = "log10";
          }
          else {
            if (param_4 == 9) {
              local_28 = "log10";
              goto LAB_00993cb5;
            }
            if (param_4 != 0xe) {
              if (param_4 != 0xf) {
                if (param_4 != 0x18) {
                  return;
                }
                local_2c = 3;
                goto LAB_00993c40;
              }
              local_28 = "exp";
              goto LAB_00993c7c;
            }
            local_2c = 3;
            local_28 = "exp";
          }
        }
        goto LAB_00993c47;
      }
      local_28 = "pow";
LAB_00993c7c:
      local_24 = *param_1;
      local_1c = *param_2;
      local_2c = 4;
      local_14 = *param_3;
      (*pcVar1)(&local_2c);
    }
    else {
      if (param_4 != 0x1a) {
        if (param_4 != 0x1b) {
          if (param_4 == 0x1c) goto switchD_00993d72_caseD_3ee;
          if (param_4 != 0x1d) {
            if (param_4 != 0x3a) {
              if (param_4 != 0x3d) {
                return;
              }
              goto switchD_00993d72_caseD_3f1;
            }
            goto switchD_00993d72_caseD_3f0;
          }
          local_28 = "pow";
          goto LAB_00993d2b;
        }
        local_2c = 2;
LAB_00993c40:
        local_28 = "pow";
        goto LAB_00993c47;
      }
      local_14 = 1.0;
    }
    goto LAB_00993e0b;
  }
  switch(param_4) {
  case 1000:
    local_28 = "log";
    break;
  case 0x3e9:
    local_28 = "log10";
    break;
  case 0x3ea:
    local_28 = "exp";
    break;
  case 0x3eb:
    local_28 = "atan";
    break;
  case 0x3ec:
    local_28 = "ceil";
    break;
  case 0x3ed:
    local_28 = "floor";
    break;
  case 0x3ee:
switchD_00993d72_caseD_3ee:
    local_28 = "pow";
    goto LAB_00993cb5;
  case 0x3ef:
    local_28 = "modf";
    break;
  case 0x3f0:
switchD_00993d72_caseD_3f0:
    local_28 = "acos";
    goto LAB_00993cb5;
  case 0x3f1:
switchD_00993d72_caseD_3f1:
    local_28 = "asin";
    goto LAB_00993cb5;
  case 0x3f2:
    local_28 = "sin";
    goto LAB_00993dd7;
  case 0x3f3:
    local_28 = "cos";
    goto LAB_00993dd7;
  case 0x3f4:
    local_28 = "tan";
LAB_00993dd7:
    local_14 = *param_1 *
               (double)CONCAT17(uStack_5,CONCAT16(uStack_6,CONCAT15(uStack_7,CONCAT14(uStack_8,
                                                  CONCAT13(uStack_9,CONCAT12(uStack_a,CONCAT11(
                                                  uStack_b,local_c)))))));
    *param_3 = local_14;
    local_24 = *param_1;
    local_1c = *param_2;
    goto LAB_00993de8;
  default:
    goto switchD_00993d72_default;
  }
LAB_00993d2b:
  *param_3 = *param_1;
LAB_00993cb5:
  local_24 = *param_1;
  local_1c = *param_2;
  local_14 = *param_3;
LAB_00993de8:
  local_2c = 1;
  iVar2 = (*pcVar1)(&local_2c);
  if (iVar2 == 0) {
    piVar3 = __errno();
    *piVar3 = 0x21;
  }
LAB_00993e0b:
  *param_3 = local_14;
switchD_00993d72_default:
  return;
}



void FUN_00993f20(void)

{
  float10 in_ST0;
  float10 in_ST1;
  
  FUN_00993f39((double)in_ST1,(double)in_ST0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00993f39(double param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  ushort uVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ushort uVar20;
  ushort in_XMM1_Wh;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lVar21;
  ulonglong in_XMM2_Qb;
  undefined1 auVar22 [16];
  longlong lVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 local_c [4];
  
  dVar12 = (double)((ulonglong)param_1 >> 0x2c);
  uVar10 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar2 = (SUB82(dVar12,0) & 0xff) + 1 & 0x1fe;
  dVar35 = (double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) *
           *(double *)((int)&DAT_00aa80b0 + uVar2 * 4);
  dVar31 = *(double *)((int)&DAT_00aa80b0 + uVar2 * 4);
  dVar13 = *(double *)(&DAT_00aa84c0 + uVar2 * 8);
  dVar33 = *(double *)(&UNK_00aa84c8 + uVar2 * 8);
  uVar6 = 0x7fef - uVar10;
  uVar2 = SUB84(param_1,0);
  uVar8 = (uint)((ulonglong)param_1 >> 0x20);
  dVar32 = param_1;
  if (0x7fffffff < (uVar10 - 0x10 | uVar6)) {
    auVar22._4_4_ = param_3;
    auVar22._0_4_ = param_2;
    auVar27._8_8_ = in_XMM3._8_8_;
    auVar27._0_8_ = 0x7fffffffffffffff;
    auVar22._8_8_ = in_XMM2_Qb;
    uVar7 = param_3 & 0x7fffffff;
    if (uVar7 < 0x7ff00000) {
      if (param_2 == 0 && uVar7 == 0) {
        _local_c = 1.0;
        uVar9 = 0x1a;
        if (uVar2 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          uVar9 = 0x1d;
          if (((uVar8 & 0x7fffffff) < 0x7ff00001) &&
             (((uVar8 & 0x7fffffff) < 0x7ff00000 || (uVar2 == 0)))) {
            return (float10)1.0;
          }
        }
        goto LAB_00994740;
      }
      if ((int)uVar6 < 0) {
        auVar26._8_8_ = auVar27._8_8_ << 0x34;
        auVar26._0_8_ = 0xfff0000000000000;
        iVar5 = (uVar7 >> 0x14) - 0x3f3;
        auVar27 = (undefined1  [16])0x0;
        uVar20 = (in_XMM1_Wh & in_XMM3._14_2_) >> 4;
        lVar21 = SUB168(auVar22 | auVar26,0) <<
                 (ulonglong)
                 CONCAT22((ushort)(-1 < iVar5) * (short)((uint)iVar5 >> 0x10),
                          (ushort)(-1 < (short)iVar5) * (short)iVar5);
        lVar25 = SUB168(auVar22 | auVar26,8) << (ulonglong)(ushort)((-1 < (short)uVar20) * uVar20);
        auVar23._0_4_ = -(uint)((int)lVar21 == 0);
        auVar23._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == 0);
        auVar23._8_4_ = -(uint)((int)lVar25 == 0);
        auVar23._12_4_ = -(uint)((int)((ulonglong)lVar25 >> 0x20) == 0);
        bVar1 = SUB161(auVar23 >> 7,0) & 1 | (SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                (SUB161(auVar23 >> 0x17,0) & 1) << 2 | (SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                (SUB161(auVar23 >> 0x27,0) & 1) << 4 | (SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                (SUB161(auVar23 >> 0x37,0) & 1) << 6 | SUB161(auVar23 >> 0x3f,0) << 7;
        uVar7 = 0x7fef - uVar6 & 0x7fff;
        if (0x7fef < uVar7) {
          auVar16._0_4_ = -(uint)((int)((ulonglong)param_1 & 0xfffffffffffff) == 0);
          auVar16._4_4_ = -(uint)((int)(((ulonglong)param_1 & 0xfffffffffffff) >> 0x20) == 0);
          auVar16._8_4_ = 0xffffffff;
          auVar16._12_4_ = 0xffffffff;
          if ((byte)(SUB161(auVar16 >> 7,0) & 1 | (SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar16 >> 0x17,0) & 1) << 2 | (SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar16 >> 0x27,0) & 1) << 4 | (SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar16 >> 0x37,0) & 1) << 6 | SUB161(auVar16 >> 0x3f,0) << 7) == 0xff)
          {
            if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
              if ((bVar1 != 0xff) ||
                 (lVar21 = CONCAT44(param_3,param_2) <<
                           (ulonglong)(((param_3 & 0x7fffffff) >> 0x14) - 0x3f4),
                 auVar24._0_4_ = -(uint)((int)lVar21 == 0),
                 auVar24._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == 0),
                 auVar24._8_4_ = 0xffffffff, auVar24._12_4_ = 0xffffffff,
                 (byte)(SUB161(auVar24 >> 7,0) & 1 | (SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                        (SUB161(auVar24 >> 0x17,0) & 1) << 2 | (SUB161(auVar24 >> 0x1f,0) & 1) << 3
                        | (SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                        (SUB161(auVar24 >> 0x2f,0) & 1) << 5 | (SUB161(auVar24 >> 0x37,0) & 1) << 6
                       | SUB161(auVar24 >> 0x3f,0) << 7) == 0xff)) {
                if ((param_3 & 0x80000000) != 0) {
                  return (float10)0;
                }
                goto LAB_009946c7;
              }
              if ((param_3 & 0x80000000) == 0) {
                return (float10)-INFINITY;
              }
              goto LAB_00994559;
            }
            if ((param_3 & 0x80000000) != 0) {
              return (float10)0;
            }
            goto LAB_009946c7;
          }
          goto LAB_0099459f;
        }
        if (bVar1 == 0xff) {
          auVar27 = ZEXT816(0x8000000000000000);
          lVar21 = CONCAT44(param_3,param_2) <<
                   (ulonglong)(((param_3 & 0x7fffffff) >> 0x14) - 0x3f4);
          auVar22._0_4_ = -(uint)((int)lVar21 == 0);
          auVar22._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == auVar27._4_4_);
          auVar22._8_4_ = -(uint)(auVar23._8_4_ == 0);
          auVar22._12_4_ = -(uint)(auVar23._12_4_ == 0);
          uVar6 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7) + 0x3ff01 & 0x40000;
          if (0xf < uVar7) {
            uVar7 = 0xbfe7f;
            in_XMM3 = ZEXT816(0xfffffffffffff);
            in_XMM2_Qb = auVar22._8_8_;
            goto LAB_00993fb6;
          }
          goto LAB_009943d4;
        }
        uVar28 = (ulonglong)param_1 >> 0x20;
        in_XMM2_Qb = auVar23._8_8_ >> 0x20;
        uVar6 = 0;
        uVar7 = 0;
        if (uVar2 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          _local_c = -NAN;
          uVar9 = 0x1c;
          goto LAB_00994740;
        }
LAB_0099445a:
        in_XMM3 = auVar27;
        dVar32 = dVar12;
        if ((uVar7 & 0x7fffffff) == 0) {
          if ((param_3 & 0x80000000) == 0) {
            if ((uVar7 & uVar6 << 0xd) == 0) {
              return (float10)0;
            }
LAB_00994559:
            return (float10)-0.0;
          }
          _local_c = (double)((ulonglong)(uVar7 & uVar6 << 0xd | 0x7ff00000) << 0x20);
          uVar9 = 0x1b;
          goto LAB_00994740;
        }
      }
      else {
        uVar6 = 0;
LAB_009943d4:
        dVar35 = 2.225073858507201e-308;
        in_XMM2_Qb = auVar22._8_8_;
        uVar28 = 0x3ff0000000000000;
        dVar12 = param_1 * 1.8446744073709552e+19;
        uVar7 = uVar8;
        in_XMM3 = auVar27;
        dVar32 = dVar12;
        if (uVar2 == 0) goto LAB_0099445a;
      }
      dVar12 = (double)((ulonglong)ABS(dVar32) >> 0x2c);
      uVar7 = (SUB82(dVar12,0) & 0xff) + 1 & 0x1fe;
      dVar35 = (double)((ulonglong)dVar35 & (ulonglong)dVar32 | uVar28) *
               *(double *)((int)&DAT_00aa80b0 + uVar7 * 4);
      dVar31 = *(double *)((int)&DAT_00aa80b0 + uVar7 * 4);
      dVar13 = *(double *)(&DAT_00aa84c0 + uVar7 * 8);
      dVar33 = *(double *)(&UNK_00aa84c8 + uVar7 * 8);
      uVar7 = 0x43e7f;
      goto LAB_00993fb6;
    }
    uVar6 = uVar8;
    if ((0x7fefffff < (uVar8 & 0x7fffffff)) && ((0x7ff00000 < (uVar8 & 0x7fffffff) || (uVar2 != 0)))
       ) {
LAB_0099459f:
      _local_c = param_1 + param_1;
      uVar9 = 0x3ee;
      goto LAB_00994740;
    }
    goto LAB_00994655;
  }
  uVar6 = 0;
  uVar7 = 0x3fe7f;
LAB_00993fb6:
  uVar3 = ((ushort)((ulonglong)dVar35 >> 0x26) & 0xff) + 1 & 0x1fe;
  dVar29 = (double)((ulonglong)dVar32 & 0xfffffffffffff | DAT_00aab950);
  dVar14 = (double)((ulonglong)dVar29 & 0xfffffffff8000000);
  dVar29 = dVar29 - dVar14;
  uVar4 = ((ushort)((ulonglong)(dVar35 * *(double *)(&DAT_00aa8cd0 + uVar3 * 4)) >> 0x1f) & 0x1ff) +
          1 & 0x3fe;
  dVar30 = dVar31 * *(double *)(&DAT_00aa8cd0 + uVar3 * 4) * *(double *)(&DAT_00aa98f0 + uVar4 * 4);
  dVar35 = dVar35 * *(double *)(&DAT_00aa8cd0 + uVar3 * 4) * *(double *)(&DAT_00aa98f0 + uVar4 * 4);
  dVar32 = dVar13 + *(double *)(&DAT_00aa90e0 + uVar3 * 8) +
           (double)(int)((longlong)dVar12 - (ulonglong)uVar7 >> 8) +
           *(double *)(&DAT_00aaa100 + uVar4 * 8);
  dVar34 = dVar33 + *(double *)(&DAT_00aa90e8 + uVar3 * 8) + *(double *)(&DAT_00aaa108 + uVar4 * 8);
  dVar13 = (double)((ulonglong)dVar30 & 0xfffffffff8000000);
  dVar30 = dVar30 - dVar13;
  dVar36 = dVar35 + -1.442694902420044;
  dVar33 = dVar32 + dVar36;
  dVar31 = (double)CONCAT44(param_3,param_2);
  uVar20 = (ushort)(param_3 >> 0x10);
  dVar32 = dVar32 - dVar33;
  uVar3 = (uint)(ushort)((ulonglong)dVar33 >> 0x30);
  dVar13 = (((dVar35 - dVar13 * dVar14) - dVar14 * dVar30) - dVar13 * dVar29) - dVar29 * dVar30;
  dVar35 = dVar36 - dVar13;
  dVar12 = dVar33 - dVar13;
  uVar7 = uVar20 & 0x7ff0;
  if (0x7fef < uVar7) {
    _local_c = (double)CONCAT44(param_3,param_2);
    auVar22._8_8_ = in_XMM2_Qb;
    auVar22._0_8_ = _local_c;
    auVar27._0_8_ = (ulonglong)_local_c & 0xfffffffffffff;
    auVar27._8_8_ = in_XMM3._8_8_ >> 0x1f & in_XMM2_Qb;
    auVar17._0_4_ = -(uint)((int)auVar27._0_8_ == 0);
    auVar17._4_4_ = -(uint)((int)(auVar27._0_8_ >> 0x20) == 0);
    auVar17._8_4_ = -(uint)((int)auVar27._8_8_ == 0);
    auVar17._12_4_ = -(uint)((int)(auVar27._8_8_ >> 0x20) == 0);
    if ((byte)(SUB161(auVar17 >> 7,0) & 1 | (SUB161(auVar17 >> 0xf,0) & 1) << 1 |
               (SUB161(auVar17 >> 0x17,0) & 1) << 2 | (SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
               (SUB161(auVar17 >> 0x27,0) & 1) << 4 | (SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
               (SUB161(auVar17 >> 0x37,0) & 1) << 6 | SUB161(auVar17 >> 0x3f,0) << 7) == 0xff) {
      bVar11 = uVar2 == 0;
      uVar2 = uVar3;
      if (bVar11) {
        if (uVar8 != 0x3ff00000) {
          uVar2 = uVar8;
          if (uVar8 == 0xbff00000) {
            return (float10)1;
          }
          goto LAB_00994655;
        }
      }
      else {
LAB_00994655:
        _local_c = auVar22._0_8_;
        uVar28 = auVar27._8_8_ & auVar22._8_8_;
        auVar18._0_4_ = -(uint)((int)((ulonglong)_local_c & 0xfffffffffffff) == 0);
        auVar18._4_4_ = -(uint)((int)(((ulonglong)_local_c & 0xfffffffffffff) >> 0x20) == 0);
        auVar18._8_4_ = -(uint)((int)uVar28 == 0);
        auVar18._12_4_ = -(uint)((int)(uVar28 >> 0x20) == 0);
        if ((byte)(SUB161(auVar18 >> 7,0) & 1 | (SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                   (SUB161(auVar18 >> 0x17,0) & 1) << 2 | (SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                   (SUB161(auVar18 >> 0x27,0) & 1) << 4 | (SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                   (SUB161(auVar18 >> 0x37,0) & 1) << 6 | SUB161(auVar18 >> 0x3f,0) << 7) != 0xff)
        goto LAB_009946ce;
        if (uVar2 != 0 || uVar6 != 0xbff00000) {
          if ((auVar22._6_2_ & 0x8000) == 0) {
            if ((uVar10 & 0x7ff0) < 0x3ff0) {
              return (float10)0;
            }
          }
          else if (0x3fef < (uVar10 & 0x7ff0)) {
            return (float10)0;
          }
LAB_009946c7:
          return (float10)INFINITY;
        }
      }
      _local_c = 1.0;
      uVar9 = 0x1c;
    }
    else {
LAB_009946ce:
      _local_c = _local_c + _local_c;
      uVar9 = 0x3ee;
    }
    goto LAB_00994740;
  }
  iVar5 = (uVar7 - 0x3ff0) + (uVar3 & 0x7ff0);
  if ((0x40a0U - iVar5 | iVar5 - 0x3c70U) < 0x80000000) {
LAB_00994108:
    dVar14 = (double)((ulonglong)dVar31 & 0xfffffffff8000000);
    dVar29 = (double)((ulonglong)dVar12 & 0xfffffffff8000000);
    dVar13 = (dVar32 + dVar36) - (dVar13 - (dVar33 - dVar12));
    dVar33 = dVar14 * dVar29 * 128.0;
    uVar2 = (uint)ROUND(dVar33);
    dVar31 = dVar14 * (dVar12 - dVar29) + dVar29 * (dVar31 - dVar14) +
             (dVar12 - dVar29) * (dVar31 - dVar14);
    if (0 < (int)(0x1ff7f - uVar2 | uVar2 + 0x1e1ff)) {
      iVar5 = (uVar2 & 0x7f) * 0x10;
      auVar15._0_8_ = (double)((ulonglong)((uVar6 + uVar2 & 0xffffff80) + 0x1ff80) << 0x2d);
      auVar15._8_4_ = 0;
      auVar15._12_4_ = (int)((ulonglong)auVar15._0_8_ >> 0x20);
      dVar32 = *(double *)(&DAT_00aab130 + iVar5) * auVar15._0_8_;
      dVar31 = (dVar33 - ((dVar33 + 6755399441055744.0) - 6755399441055744.0)) * 0.0078125 +
               dVar31 + ((dVar35 * 0.16015105075297303 + dVar35 * dVar35 * -0.08325619496072671) *
                         dVar35 * dVar35 +
                         dVar35 * 9.597935033233511e-08 + dVar35 * dVar35 * -0.3465736568077919 +
                        dVar34 + dVar13) * (double)CONCAT44(param_3,param_2);
      return (float10)(dVar31 * dVar31 * dVar32 *
                       (dVar31 * 0.0013333558146428443 + 0.009618129107628477) * dVar31 * dVar31 +
                       *(double *)(&UNK_00aab138 + iVar5) * auVar15._8_8_ +
                       (dVar31 * 0.055504108664821576 + 0.2402265069591007) * dVar31 * dVar31 *
                       dVar32 + dVar31 * 0.6931471805599453 * dVar32 + dVar32);
    }
    if ((int)uVar2 < 1) {
      if ((int)uVar2 < -0x3fdff) {
LAB_00994999:
        _local_c = (double)((ulonglong)uVar6 << 0x2d);
        uVar9 = 0x19;
        goto LAB_00994740;
      }
      uVar6 = uVar6 + 0x80;
      uVar8 = (uVar2 & 0xffffff80) + 0x3fe80;
      uVar10 = 0;
    }
    else {
      if (0x3ffff < uVar2) goto LAB_009949bc;
      uVar6 = uVar6 + 0x3ff00;
      uVar8 = uVar2 - 0x80 & 0xffffff80;
      uVar10 = 0x3ff0;
    }
    iVar5 = (uVar2 & 0x7f) * 0x10;
    uVar2 = ((int)-(uVar8 - 0x1ff80) >> 7) + 2;
    auVar19._0_8_ = (double)((ulonglong)uVar8 << 0x2d);
    auVar19._8_4_ = 0;
    auVar19._12_4_ = (int)((ulonglong)auVar19._0_8_ >> 0x20);
    dVar32 = *(double *)(&DAT_00aab130 + iVar5) * auVar19._0_8_;
    dVar31 = (dVar33 - ((dVar33 + 6755399441055744.0) - 6755399441055744.0)) * 0.0078125 +
             dVar31 + ((dVar35 * 0.16015105075297303 + dVar35 * dVar35 * -0.08325619496072671) *
                       dVar35 * dVar35 +
                       dVar35 * 9.597935033233511e-08 + dVar35 * dVar35 * -0.3465736568077919 +
                      dVar34 + dVar13) * (double)CONCAT44(param_3,param_2);
    _local_c = (double)((ulonglong)uVar6 << 0x2d);
    uVar28 = (ulonglong)(uVar2 + (uVar2 & 0x20));
    dVar13 = (double)(-1L << uVar28 & (ulonglong)dVar32);
    dVar31 = dVar31 * dVar31 * dVar32 *
             (dVar31 * 0.0013333558146428443 + 0.009618129107628477) * dVar31 * dVar31 +
             *(double *)(&UNK_00aab138 + iVar5) * auVar19._8_8_ +
             (dVar31 * 0.055504108664821576 + 0.2402265069591007) * dVar31 * dVar31 * dVar32 +
             dVar31 * 0.6931471805599453 * dVar32;
    dVar33 = (double)((ulonglong)(dVar13 + dVar31) & -1L << uVar28);
    dVar31 = dVar31 + (dVar13 - dVar33) + (dVar32 - dVar13);
    if ((int)(uVar8 - 0x1ff80) < 1) {
      _local_c = dVar31 * _local_c + dVar33 * _local_c;
      _local_c = _local_c + (double)((ulonglong)uVar10 << 0x30) * _local_c;
      uVar9 = 0x18;
      if ((((ushort)((ulonglong)_local_c >> 0x30) & 0x7ff0) != 0x7ff0) &&
         (uVar9 = 0x19, ((ulonglong)_local_c & 0x7ff0000000000000) != 0)) {
        return (float10)_local_c;
      }
    }
    else {
      _local_c = (dVar31 + dVar33) * _local_c;
      _local_c = _local_c + (double)((ulonglong)uVar10 << 0x30) * _local_c;
      uVar9 = 0x18;
      if ((((ushort)((ulonglong)_local_c >> 0x30) & 0x7ff0) != 0x7ff0) &&
         (uVar9 = 0x19, ((ulonglong)_local_c & 0x7ff0000000000000) != 0)) {
        return (float10)_local_c;
      }
    }
  }
  else {
    dVar33 = dVar31 * dVar12;
    uVar2 = (ushort)((ulonglong)dVar33 >> 0x30) & 0x7ff0;
    uVar8 = uVar2 - 0x3c70;
    if ((0x40a0 - uVar2 | uVar8) < 0x80000000) goto LAB_00994108;
    if (0x7fffffff < uVar8) {
      return (float10)(double)((ulonglong)(uVar6 | 0x1ff80) << 0x2d);
    }
    if (((uVar20 ^ (uVar10 & 0x7ff0) + 0xc010) & 0x8000) != 0) goto LAB_00994999;
LAB_009949bc:
    uVar9 = 0x18;
    if (uVar6 == 0) {
      _local_c = INFINITY;
    }
    else {
      _local_c = -INFINITY;
    }
  }
LAB_00994740:
  ___libm_error_support(&param_1,&param_2,local_c,uVar9);
  return (float10)_local_c;
}



/* Library Function - Single Match
    __d_inttype
   
   Library: Visual Studio 2005 Release */

undefined4 __d_inttype(double param_1)

{
  uint uVar1;
  float10 fVar2;
  undefined8 extraout_var;
  
  uVar1 = __fpclass(param_1);
  if ((uVar1 & 0x90) == 0) {
    fVar2 = (float10)__frnd(param_1,extraout_var);
    if (fVar2 == (float10)param_1) {
      param_1 = param_1 * 0.5;
      fVar2 = (float10)__frnd();
      if (fVar2 == (float10)param_1) {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00994ceb(int param_1,int param_2,int param_3,int param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  
  dVar2 = 0.0;
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = -dVar1;
  }
  dVar3 = _DAT_00b31b40;
  if (param_4 == 0x7ff00000) {
    if (param_3 == 0) {
      if ((dVar1 <= 1.0) && (dVar3 = 1.0, dVar1 < 1.0)) {
        dVar3 = dVar2;
      }
      goto LAB_00994e18;
    }
  }
  else if ((param_4 == -0x100000) && (param_3 == 0)) {
    dVar3 = dVar2;
    if ((dVar1 <= 1.0) && (dVar3 = _DAT_00b31b40, 1.0 <= dVar1)) {
      *param_5 = _DAT_00b31b48;
      return 1;
    }
    goto LAB_00994e18;
  }
  if (param_2 == 0x7ff00000) {
    if (param_1 != 0) {
      return 0;
    }
    if (((double)CONCAT44(param_4,param_3) <= 0.0) &&
       (dVar3 = dVar2, 0.0 <= (double)CONCAT44(param_4,param_3))) {
      dVar3 = 1.0;
    }
  }
  else {
    if (param_2 != -0x100000) {
      return 0;
    }
    if (param_1 != 0) {
      return 0;
    }
    iVar4 = __d_inttype(CONCAT44(param_4,param_3));
    if ((double)CONCAT44(param_4,param_3) <= 0.0) {
      if (0.0 <= (double)CONCAT44(param_4,param_3)) {
        dVar3 = 1.0;
      }
      else {
        dVar3 = 0.0;
        if (iVar4 == 1) {
          dVar3 = _DAT_00b31b60;
        }
      }
    }
    else {
      dVar3 = _DAT_00b31b40;
      if (iVar4 == 1) {
        dVar3 = -_DAT_00b31b40;
      }
    }
  }
LAB_00994e18:
  *param_5 = dVar3;
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __fltin2
   
   Library: Visual Studio 2005 Release */

FLT __cdecl __fltin2(FLT _Flt,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  uint uVar2;
  _locale_t in_stack_00000018;
  char *local_28;
  char *local_24;
  _CRT_DOUBLE local_20;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_24 = _Str;
  uVar2 = 0;
  local_18 = ___strgtold12_l(&local_14,&local_28,_Str,0,0,0,0,in_stack_00000018);
  if ((local_18 & 4) == 0) {
    IVar1 = __ld12tod(&local_14,&local_20);
    if (((local_18 & 2) != 0) || (IVar1 == INTRNCVT_OVERFLOW)) {
      uVar2 = 0x80;
    }
    if (((local_18 & 1) != 0) || (IVar1 == INTRNCVT_UNDERFLOW)) {
      uVar2 = uVar2 | 0x100;
    }
  }
  else {
    uVar2 = 0x200;
    local_20.x._0_4_ = 0;
    local_20.x._4_4_ = 0;
  }
  _Flt->nbytes = (int)local_28 - (int)local_24;
  *(undefined4 *)&_Flt->dval = local_20.x._0_4_;
  *(undefined4 *)((int)&_Flt->dval + 4) = local_20.x._4_4_;
  _Flt->flags = uVar2;
  return _Flt;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___strgtold12_l
   
   Library: Visual Studio 2005 Release */

uint __cdecl
___strgtold12_l(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,
               int implicit_E,_locale_t _Locale)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  char cVar6;
  ushort uVar7;
  int *piVar8;
  uint uVar9;
  ushort *puVar10;
  int iVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  ushort uVar15;
  char *pcVar16;
  undefined4 uVar17;
  undefined *puVar18;
  ushort *puVar19;
  uint uVar20;
  undefined4 uVar21;
  ushort uVar22;
  char *pcVar23;
  uint local_70;
  int local_6c;
  int local_68;
  ushort *local_64;
  ushort *local_60;
  int local_5c;
  char *local_58;
  int local_54;
  uint local_50;
  ushort local_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ushort uStack_38;
  ushort local_36;
  byte local_30;
  undefined1 uStack_2f;
  ushort uStack_2e;
  ushort local_2c [4];
  char local_24 [23];
  char local_d;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  iVar13 = 0;
  pcVar23 = local_24;
  uVar5 = 0;
  local_6c = 1;
  local_50 = 0;
  bVar2 = false;
  bVar4 = false;
  bVar3 = false;
  local_68 = 0;
  local_54 = 0;
  local_70 = 0;
  if (_Locale == (_locale_t)0x0) {
    piVar8 = __errno();
    *piVar8 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return 0;
  }
  local_58 = str;
  for (; (((cVar6 = *str, cVar6 == ' ' || (cVar6 == '\t')) || (cVar6 == '\n')) || (cVar6 == '\r'));
      str = str + 1) {
  }
LAB_00994f53:
  cVar6 = *str;
  pcVar16 = str + 1;
  switch(iVar13) {
  case 0:
    if ((byte)(cVar6 - 0x31U) < 9) {
LAB_00994f70:
      iVar13 = 3;
      goto LAB_00994f72;
    }
    if (cVar6 == **(char **)_Locale->locinfo[1].lc_codepage) {
LAB_00994f87:
      iVar13 = 5;
      str = pcVar16;
    }
    else if (cVar6 == '+') {
      uVar5 = 0;
      iVar13 = 2;
      str = pcVar16;
    }
    else {
      if (cVar6 != '-') {
        if (cVar6 == '0') goto LAB_00994fa1;
        goto LAB_0099512c;
      }
      iVar13 = 2;
      uVar5 = 0x8000;
      str = pcVar16;
    }
    goto LAB_00994f53;
  case 1:
    bVar2 = true;
    if ((byte)(cVar6 - 0x31U) < 9) goto LAB_00994f70;
    if (cVar6 == **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_00994fd8;
    if ((cVar6 == '+') || (cVar6 == '-')) goto LAB_00995008;
    if (cVar6 == '0') goto LAB_00994fa1;
    goto LAB_00994fe8;
  case 2:
    if ((byte)(cVar6 - 0x31U) < 9) goto LAB_00994f70;
    if (cVar6 == **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_00994f87;
    str = local_58;
    if (cVar6 != '0') goto LAB_00995157;
LAB_00994fa1:
    iVar13 = 1;
    str = pcVar16;
    goto LAB_00994f53;
  case 3:
    while (('/' < cVar6 && (cVar6 < ':'))) {
      if (local_50 < 0x19) {
        local_50 = local_50 + 1;
        *pcVar23 = cVar6 + -0x30;
        pcVar23 = pcVar23 + 1;
      }
      else {
        local_54 = local_54 + 1;
      }
      cVar6 = *pcVar16;
      pcVar16 = pcVar16 + 1;
    }
    if (cVar6 != **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_0099507b;
LAB_00994fd8:
    bVar2 = true;
    iVar13 = 4;
    str = pcVar16;
    goto LAB_00994f53;
  case 4:
    bVar4 = true;
    if (local_50 == 0) {
      while (cVar6 == '0') {
        local_54 = local_54 + -1;
        cVar6 = *pcVar16;
        pcVar16 = pcVar16 + 1;
      }
    }
    while (('/' < cVar6 && (cVar6 < ':'))) {
      if (local_50 < 0x19) {
        local_50 = local_50 + 1;
        *pcVar23 = cVar6 + -0x30;
        pcVar23 = pcVar23 + 1;
        local_54 = local_54 + -1;
      }
      cVar6 = *pcVar16;
      pcVar16 = pcVar16 + 1;
    }
LAB_0099507b:
    if ((cVar6 == '+') || (cVar6 == '-')) {
LAB_00995008:
      bVar2 = true;
      iVar13 = 0xb;
      str = pcVar16 + -1;
    }
    else {
LAB_00994fe8:
      bVar2 = true;
      if ((cVar6 < 'D') || (('E' < cVar6 && ((cVar6 < 'd' || ('e' < cVar6)))))) goto LAB_0099512c;
      iVar13 = 6;
      str = pcVar16;
    }
    goto LAB_00994f53;
  case 5:
    bVar4 = true;
    str = local_58;
    if ((byte)(cVar6 - 0x30U) < 10) {
      iVar13 = 4;
      goto LAB_00994f72;
    }
    goto LAB_00995157;
  case 6:
    local_58 = str + -1;
    if (8 < (byte)(cVar6 - 0x31U)) {
      if (cVar6 == '+') goto LAB_00995113;
      if (cVar6 == '-') goto LAB_00995107;
LAB_009950fa:
      str = local_58;
      if (cVar6 != '0') goto LAB_00995157;
      iVar13 = 8;
      str = pcVar16;
      goto LAB_00994f53;
    }
    break;
  case 7:
    if (8 < (byte)(cVar6 - 0x31U)) goto LAB_009950fa;
    break;
  case 8:
    bVar3 = true;
    while (cVar6 == '0') {
      cVar6 = *pcVar16;
      pcVar16 = pcVar16 + 1;
    }
    if (8 < (byte)(cVar6 - 0x31U)) goto LAB_0099512c;
    break;
  case 9:
    bVar3 = true;
    local_68 = 0;
    goto LAB_009951b9;
  default:
    goto switchD_00994f5f_caseD_a;
  case 0xb:
    if (implicit_E != 0) {
      local_58 = str;
      if (cVar6 == '+') {
LAB_00995113:
        iVar13 = 7;
        str = pcVar16;
      }
      else {
        if (cVar6 != '-') goto LAB_00995157;
LAB_00995107:
        local_6c = -1;
        iVar13 = 7;
        str = pcVar16;
      }
      goto LAB_00994f53;
    }
    iVar13 = 10;
    pcVar16 = str;
switchD_00994f5f_caseD_a:
    str = pcVar16;
    if (iVar13 != 10) goto LAB_00994f53;
    goto LAB_00995157;
  }
  iVar13 = 9;
LAB_00994f72:
  str = pcVar16 + -1;
  goto LAB_00994f53;
LAB_009951b9:
  if ((cVar6 < '0') || ('9' < cVar6)) goto LAB_009951d4;
  local_68 = local_68 * 10 + -0x30 + (int)cVar6;
  if (local_68 < 0x1451) {
    cVar6 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    goto LAB_009951b9;
  }
  local_68 = 0x1451;
LAB_009951d4:
  while (('/' < cVar6 && (cVar6 < ':'))) {
    cVar6 = *pcVar16;
    pcVar16 = pcVar16 + 1;
  }
LAB_0099512c:
  str = pcVar16 + -1;
LAB_00995157:
  *p_end_ptr = str;
  if (bVar2) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      pcVar23 = pcVar23 + -1;
      local_54 = local_54 + 1;
      local_50 = 0x18;
    }
    if (local_50 != 0) {
      while (pcVar23 = pcVar23 + -1, *pcVar23 == '\0') {
        local_50 = local_50 - 1;
        local_54 = local_54 + 1;
      }
      ___mtold12(local_24,local_50,&local_40);
      iVar13 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
      iVar1 = CONCAT22(local_40._2_2_,(undefined2)local_40);
      if (local_6c < 0) {
        local_68 = -local_68;
      }
      local_58 = (char *)(local_68 + local_54);
      if (!bVar3) {
        local_58 = (char *)((int)local_58 + scale);
      }
      if (!bVar4) {
        local_58 = (char *)((int)local_58 - decpt);
      }
      if (0x1450 < (int)local_58) {
        uVar21 = 0;
        local_36 = 0x7fff;
        uVar17 = 0x80000000;
        local_40._0_2_ = 0;
        local_70 = 2;
        goto LAB_0099553a;
      }
      if (-0x1451 < (int)local_58) {
        puVar18 = &DAT_00b320c0;
        if (local_58 != (char *)0x0) {
          if ((int)local_58 < 0) {
            local_58 = (char *)-(int)local_58;
            puVar18 = &DAT_00b32220;
          }
          if (mult12 == 0) {
            local_40._0_2_ = 0;
          }
          iVar1 = CONCAT22(local_40._2_2_,(undefined2)local_40);
          iVar13 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
joined_r0x0099525f:
          if (local_58 != (char *)0x0) {
            uVar20 = (int)local_58 >> 3;
            puVar18 = puVar18 + 0x54;
            uVar9 = (uint)local_58 & 7;
            local_58 = (char *)uVar20;
            if (uVar9 != 0) {
              puVar10 = (ushort *)(puVar18 + uVar9 * 0xc);
              if (0x7fff < *puVar10) {
                local_4c = (ushort)*(undefined4 *)puVar10;
                uStack_4a = (undefined2)((uint)*(undefined4 *)puVar10 >> 0x10);
                uStack_48 = (undefined2)*(undefined4 *)(puVar10 + 2);
                uStack_46 = (undefined2)((uint)*(undefined4 *)(puVar10 + 2) >> 0x10);
                local_44 = *(undefined4 *)(puVar10 + 4);
                iVar11 = CONCAT22(uStack_48,uStack_4a) + -1;
                uStack_4a = (undefined2)iVar11;
                uStack_48 = (undefined2)((uint)iVar11 >> 0x10);
                puVar10 = &local_4c;
              }
              local_54 = 0;
              local_30 = 0;
              uStack_2f = 0;
              uStack_2e = 0;
              local_2c[0] = 0;
              local_2c[1] = 0;
              local_2c[2] = 0;
              local_2c[3] = 0;
              uVar12 = local_36 & 0x7fff;
              uVar15 = puVar10[5] & 0x7fff;
              uVar7 = (puVar10[5] ^ local_36) & 0x8000;
              uVar22 = uVar15 + uVar12;
              if (((uVar12 < 0x7fff) && (uVar15 < 0x7fff)) && (uVar22 < 0xbffe)) {
                if (0x3fbf < uVar22) {
                  if (((uVar12 == 0) &&
                      (uVar22 = uVar22 + 1, (CONCAT22(local_36,uStack_38) & 0x7fffffff) == 0)) &&
                     ((iVar13 == 0 && (iVar1 == 0)))) {
                    local_36 = 0;
                  }
                  else if (((uVar15 == 0) &&
                           (uVar22 = uVar22 + 1, (*(uint *)(puVar10 + 4) & 0x7fffffff) == 0)) &&
                          ((*(int *)(puVar10 + 2) == 0 && (*(int *)puVar10 == 0)))) {
                    uStack_38 = 0;
                    local_36 = 0;
                    local_3c._0_2_ = 0;
                    local_3c._2_2_ = 0;
                    iVar13 = 0;
                    local_40._0_2_ = 0;
                    local_40._2_2_ = 0;
                    iVar1 = 0;
                  }
                  else {
                    local_6c = 0;
                    puVar19 = local_2c;
                    local_5c = 5;
                    do {
                      local_68 = local_5c;
                      if (0 < local_5c) {
                        local_60 = (ushort *)((int)&local_40 + local_6c * 2);
                        local_64 = puVar10 + 4;
                        do {
                          bVar2 = false;
                          uVar20 = *(uint *)(puVar19 + -2) + (uint)*local_64 * (uint)*local_60;
                          if ((uVar20 < *(uint *)(puVar19 + -2)) ||
                             (uVar20 < (uint)*local_64 * (uint)*local_60)) {
                            bVar2 = true;
                          }
                          *(uint *)(puVar19 + -2) = uVar20;
                          if (bVar2) {
                            *puVar19 = *puVar19 + 1;
                          }
                          local_60 = local_60 + 1;
                          local_64 = local_64 + -1;
                          local_68 = local_68 + -1;
                        } while (0 < local_68);
                      }
                      puVar19 = puVar19 + 1;
                      local_6c = local_6c + 1;
                      local_5c = local_5c + -1;
                    } while (0 < local_5c);
                    uVar22 = uVar22 + 0xc002;
                    if ((short)uVar22 < 1) {
LAB_00995415:
                      uVar22 = uVar22 - 1;
                      if ((short)uVar22 < 0) {
                        uVar20 = (uint)(ushort)-uVar22;
                        uVar22 = 0;
                        do {
                          if ((local_30 & 1) != 0) {
                            local_54 = local_54 + 1;
                          }
                          iVar1 = CONCAT22(local_2c[3],local_2c[2]);
                          uVar9 = CONCAT22(local_2c[1],local_2c[0]);
                          iVar13 = CONCAT22(local_2c[1],local_2c[0]);
                          local_2c[2] = (ushort)(CONCAT22(local_2c[3],local_2c[2]) >> 1);
                          local_2c[3] = local_2c[3] >> 1;
                          local_2c[1] = local_2c[1] >> 1 | (ushort)((uint)(iVar1 << 0x1f) >> 0x10);
                          uVar14 = CONCAT22(uStack_2e,CONCAT11(uStack_2f,local_30)) >> 1;
                          uStack_2e = uStack_2e >> 1 | (ushort)((uint)(iVar13 << 0x1f) >> 0x10);
                          uVar20 = uVar20 - 1;
                          local_2c[0] = (ushort)(uVar9 >> 1);
                          local_30 = (byte)uVar14;
                          uStack_2f = (undefined1)(uVar14 >> 8);
                        } while (uVar20 != 0);
                        if (local_54 != 0) {
                          local_30 = local_30 | 1;
                        }
                      }
                    }
                    else {
                      do {
                        uVar12 = uStack_2e;
                        if ((local_2c[3] & 0x8000) != 0) break;
                        iVar13 = CONCAT22(uStack_2e,CONCAT11(uStack_2f,local_30)) << 1;
                        local_30 = (byte)iVar13;
                        uStack_2f = (undefined1)((uint)iVar13 >> 8);
                        uStack_2e = (ushort)((uint)iVar13 >> 0x10);
                        iVar13 = CONCAT22(local_2c[1],local_2c[0]) * 2;
                        local_2c[0] = (ushort)iVar13 | uVar12 >> 0xf;
                        iVar1 = CONCAT22(local_2c[3],local_2c[2]) * 2;
                        local_2c[2] = (ushort)iVar1 | local_2c[1] >> 0xf;
                        uVar22 = uVar22 - 1;
                        local_2c[1] = (ushort)((uint)iVar13 >> 0x10);
                        local_2c[3] = (ushort)((uint)iVar1 >> 0x10);
                      } while (0 < (short)uVar22);
                      if ((short)uVar22 < 1) goto LAB_00995415;
                    }
                    if ((0x8000 < CONCAT11(uStack_2f,local_30)) ||
                       (iVar13 = CONCAT22(local_2c[2],local_2c[1]),
                       iVar1 = CONCAT22(local_2c[0],uStack_2e),
                       (CONCAT22(uStack_2e,CONCAT11(uStack_2f,local_30)) & 0x1ffff) == 0x18000)) {
                      if (CONCAT22(local_2c[0],uStack_2e) == -1) {
                        uStack_2e = 0;
                        local_2c[0] = 0;
                        iVar1 = 0;
                        if (CONCAT22(local_2c[2],local_2c[1]) == -1) {
                          local_2c[1] = 0;
                          local_2c[2] = 0;
                          if (local_2c[3] == 0xffff) {
                            local_2c[3] = 0x8000;
                            uVar22 = uVar22 + 1;
                            iVar13 = 0;
                            iVar1 = 0;
                          }
                          else {
                            local_2c[3] = local_2c[3] + 1;
                            iVar13 = 0;
                            iVar1 = 0;
                          }
                        }
                        else {
                          iVar13 = CONCAT22(local_2c[2],local_2c[1]) + 1;
                          local_2c[1] = (ushort)iVar13;
                          local_2c[2] = (ushort)((uint)iVar13 >> 0x10);
                        }
                      }
                      else {
                        iVar1 = CONCAT22(local_2c[0],uStack_2e) + 1;
                        uStack_2e = (ushort)iVar1;
                        local_2c[0] = (ushort)((uint)iVar1 >> 0x10);
                        iVar13 = CONCAT22(local_2c[2],local_2c[1]);
                      }
                    }
                    if (0x7ffe < uVar22) goto LAB_009954d5;
                    local_40 = iVar1;
                    local_3c = iVar13;
                    uStack_38 = local_2c[3];
                    local_36 = uVar22 | uVar7;
                  }
                  goto joined_r0x0099525f;
                }
                iVar11 = 0;
                local_3c._0_2_ = 0;
                local_3c._2_2_ = 0;
                local_40._0_2_ = 0;
                local_40._2_2_ = 0;
              }
              else {
LAB_009954d5:
                local_3c._0_2_ = 0;
                local_3c._2_2_ = 0;
                iVar11 = (-(uint)(uVar7 != 0) & 0x80000000) + 0x7fff8000;
                local_40._0_2_ = 0;
                local_40._2_2_ = 0;
              }
              iVar13 = 0;
              iVar1 = 0;
              uStack_38 = (ushort)iVar11;
              local_36 = (ushort)((uint)iVar11 >> 0x10);
            }
            goto joined_r0x0099525f;
          }
        }
        local_3c._2_2_ = (undefined2)((uint)iVar13 >> 0x10);
        local_3c._0_2_ = (undefined2)iVar13;
        local_40._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
        local_40._0_2_ = (undefined2)iVar1;
        uVar21 = CONCAT22((undefined2)local_3c,local_40._2_2_);
        uVar17 = CONCAT22(uStack_38,local_3c._2_2_);
        goto LAB_0099553a;
      }
      local_70 = 1;
    }
  }
  else {
    local_70 = 4;
  }
  local_40._0_2_ = 0;
  local_36 = 0;
  uVar17 = 0;
  uVar21 = 0;
LAB_0099553a:
  *(undefined2 *)pld12->ld12 = (undefined2)local_40;
  *(ushort *)(pld12->ld12 + 10) = local_36 | uVar5;
  *(undefined4 *)(pld12->ld12 + 2) = uVar21;
  *(undefined4 *)(pld12->ld12 + 6) = uVar17;
  return local_70;
}



void FUN_009955a0(void)

{
  float10 in_ST0;
  
  FUN_009955be((double)in_ST0);
  return;
}



float10 FUN_009955be(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float10 fVar4;
  double in_XMM0_Qa;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  uVar1 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30);
  uVar2 = (uVar1 & 0x7fff) + 0xcfd0;
  if (uVar2 < 0x10c6) {
    dVar10 = (in_XMM0_Qa * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    iVar3 = ((int)ROUND(in_XMM0_Qa * 10.185916357881302) + 0x1c7610U & 0x3f) * 0x20;
    dVar11 = dVar10 * 3.798187816439979e-12;
    dVar5 = in_XMM0_Qa - dVar10 * 0.09817477042088285;
    dVar15 = in_XMM0_Qa - dVar10 * 0.09817477042088285;
    dVar16 = dVar15 - dVar11;
    dVar6 = dVar5 - dVar11;
    dVar8 = dVar5 - dVar10 * 3.798187816439979e-12;
    dVar7 = dVar6 * dVar6;
    dVar9 = dVar8 * dVar8;
    dVar12 = *(double *)(&DAT_00aab9f0 + iVar3) + *(double *)(&DAT_00aaba08 + iVar3);
    dVar13 = *(double *)(&DAT_00aaba08 + iVar3) * dVar16;
    dVar17 = dVar16 * *(double *)(&DAT_00aab9f0 + iVar3);
    dVar14 = dVar13 + *(double *)(&DAT_00aab9f8 + iVar3);
    dVar18 = dVar17 + dVar14;
    return (float10)(dVar18 + (dVar10 * 1.2639164054974691e-22 - ((dVar15 - dVar16) - dVar11)) *
                              (*(double *)(&DAT_00aab9f8 + iVar3) * dVar16 - dVar12) +
                              *(double *)(&DAT_00aaba00 + iVar3) +
                              (*(double *)(&DAT_00aab9f8 + iVar3) - dVar14) + dVar13 +
                              (dVar14 - dVar18) + dVar17 +
                              (dVar7 * 0.008333333333333333 + -0.16666666666666666 +
                              (dVar5 * 2.7557319223985893e-06 * dVar6 + -0.0001984126984126984) *
                              dVar7 * dVar7) * dVar12 * dVar16 * dVar7 +
                              (dVar9 * 0.041666666666666664 + -0.5 +
                              (dVar5 * 2.48015873015873e-05 * dVar8 + -0.001388888888888889) *
                              dVar9 * dVar9) * *(double *)(&DAT_00aab9f8 + iVar3) * dVar9);
  }
  if ((short)uVar2 < 0x10c6) {
    return (float10)(1.0 - (double)((ulonglong)in_XMM0_Qa & 0xffffffffffff |
                                   (ulonglong)(uVar1 & 0x7fff) << 0x30));
  }
  fVar4 = (float10)FUN_0098604f();
  return fVar4;
}



void FUN_00995750(void)

{
  float10 in_ST0;
  
  FUN_0099576e((double)in_ST0);
  return;
}



float10 FUN_0099576e(undefined8 param_1)

{
  undefined1 auVar1 [12];
  double dVar2;
  undefined1 auVar3 [12];
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  int in_XMM0_Da;
  uint in_XMM0_Db;
  uint in_XMM0_Dd;
  double dVar9;
  double dVar10;
  ulonglong in_XMM2_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  ulonglong in_XMM7_Qb;
  undefined1 auVar19 [16];
  double local_c;
  
  dVar2 = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
  uVar4 = in_XMM0_Db >> 0xc & 0x7ffff;
  if (uVar4 - 0x3fb00 < 0x3bb) {
    auVar11._0_8_ = ((ulonglong)in_XMM0_Db & 0xffffc000) << 0x20;
    auVar11._8_8_ = in_XMM2_Qb & in_XMM7_Qb;
    iVar5 = (in_XMM0_Db >> 0xc & 0xfffc) - 0xfb00;
    iVar6 = iVar5 * 4;
    dVar14 = SUB168(auVar11 | ZEXT816(0x200000000000),0);
    dVar13 = SQRT(1.0 - dVar2 * dVar2) * dVar14;
    dVar9 = dVar2 * *(double *)(&DAT_00aad1b0 + iVar5 * 2) - dVar13;
    uVar4 = SUB164(auVar11 | ZEXT816(0x200000000000),4) & 0x80000000;
    dVar10 = dVar9 * dVar9;
    auVar3._4_8_ = 0;
    auVar3._0_4_ = uVar4;
    auVar12._0_12_ = auVar3 << 0x20;
    auVar12._12_4_ = uVar4;
    return (float10)((((dVar10 * -0.044642857142857144 + -0.075) * dVar9 * dVar10 * dVar10 +
                      (dVar9 * dVar10 * -0.16666666666666666 -
                      ((double)(*(ulonglong *)(&DAT_00aac2b0 + iVar6) ^ (ulonglong)uVar4 << 0x20) -
                      6.123233995736766e-17))) -
                     ((dVar2 + dVar14) * ((double)CONCAT44(in_XMM0_Db,in_XMM0_Da) - dVar14)) /
                     (dVar2 * *(double *)(&DAT_00aad1b0 + iVar5 * 2) + dVar13)) -
                    ((double)(*(ulonglong *)(&DAT_00aac2b8 + iVar6) ^ auVar12._8_8_) -
                    1.5707963267948966));
  }
  if (uVar4 - 0x3febb < 0x41) {
    dVar18 = (double)((ulonglong)(in_XMM0_Db >> 6) << 0x26);
    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = in_XMM0_Da;
    auVar1._8_4_ = in_XMM0_Dd >> 0xc;
    dVar14 = 1.0 - dVar18 * dVar18;
    dVar9 = ((double)CONCAT44(in_XMM0_Db,in_XMM0_Da) + dVar18) * (dVar2 - dVar18);
    dVar13 = SQRT(dVar14 - dVar9);
    iVar5 = -(uint)(SUB121(auVar1 >> 0x3f,0) & 1);
    dVar10 = (double)((ulonglong)dVar13 & 0xffffc00000000000 |
                     ((ulonglong)in_XMM0_Db & 0x80000000) << 0x20 | 0x200000000000);
    auVar15._0_8_ = CONCAT44(iVar5,iVar5);
    auVar15._8_4_ = iVar5;
    auVar15._12_4_ = iVar5;
    iVar6 = (ushort)((ulonglong)((longlong)dVar13 << 2) >> 0x30) - 0xfec0;
    dVar13 = dVar13 * *(double *)(&DAT_00aad1b0 + iVar6 * 8);
    dVar18 = (dVar18 * dVar10 - dVar13) + (dVar2 - dVar18) * dVar10;
    dVar2 = ((dVar14 - dVar10 * dVar10) - dVar9) / (dVar13 + dVar13 + dVar18);
    iVar6 = iVar6 * 0x10;
    dVar10 = (double)(auVar15._8_8_ & 0xc00921fb54442d18) + *(double *)(&DAT_00aac2b8 + iVar6);
    dVar14 = dVar18 * dVar18;
    dVar9 = dVar2 + dVar10;
    return (float10)(double)((ulonglong)
                             ((dVar14 * -0.044642857142857144 + -0.075) * dVar18 * dVar14 * dVar14 +
                              dVar18 * dVar14 * -0.16666666666666666 +
                              (double)(auVar15._0_8_ & 0xbca1a62633145c07) +
                              *(double *)(&DAT_00aac2b0 + iVar6) + dVar2 + (dVar10 - dVar9) + dVar9)
                            ^ (ulonglong)((ushort)iVar5 & 0x8000) << 0x30);
  }
  if (uVar4 - 0x3c300 < 0x3800) {
    dVar9 = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) * (double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
    dVar10 = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) * (double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
    dVar14 = dVar2 * dVar9;
    return (float10)((1.5707963267948966 - dVar2) +
                    (((6.123233995736766e-17 -
                      dVar14 * dVar14 * dVar14 *
                      (dVar9 * 0.022372159090909092 + 0.030381944444444444 +
                      dVar9 * dVar9 * 0.017352764423076924)) -
                     (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) * dVar10 *
                     (dVar10 * 0.075 + 0.16666666666666666 + dVar10 * dVar10 * 0.044642857142857144)
                     ) - (dVar2 - (1.5707963267948966 - (1.5707963267948966 - dVar2)))));
  }
  if (uVar4 - 0x3fefc < 4) {
    dVar2 = 0.5 - ABS(dVar2) * 0.5;
    uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar19._8_4_ = SUB84(dVar2,0);
    auVar19._0_8_ = dVar2;
    auVar19._12_4_ = uVar7;
    dVar9 = SQRT(dVar2);
    dVar14 = auVar19._8_8_;
    auVar17._8_4_ = SUB84(dVar2,0);
    auVar17._0_8_ = dVar2;
    auVar17._12_4_ = uVar7;
    uVar8 = -(ulonglong)((double)CONCAT44(in_XMM0_Db,in_XMM0_Da) < 0.0);
    dVar10 = (double)((ulonglong)dVar9 & 0xfffffffff8000000);
    auVar16._8_4_ = SUB84(dVar9,0);
    auVar16._0_8_ = dVar9;
    auVar16._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    return (float10)(double)((ulonglong)
                             ((double)(uVar8 & 0xc00921fb54442d18) +
                             (dVar2 * 0.022372159090909092 + 0.030381944444444444 +
                             dVar2 * dVar2 * 0.017352764423076924) * dVar2 * dVar2 * dVar2 * dVar2 *
                             (dVar9 + dVar9) + (double)(uVar8 & 0xbca1a62633145c07) +
                             (dVar14 * 0.075 + 0.16666666666666666 +
                             dVar14 * dVar14 * 0.044642857142857144) * auVar17._8_8_ *
                             (auVar16._8_8_ + auVar16._8_8_) +
                             ((dVar2 - dVar10 * dVar10) -
                             (dVar9 - dVar10) * ((dVar9 + dVar9) - (dVar9 - dVar10))) / dVar9 +
                             dVar9 + dVar9) ^
                            (ulonglong)((ushort)(in_XMM0_Db >> 0x10) & 0x8000) << 0x30);
  }
  if (uVar4 < 0x3ff00) {
    return (float10)1.5707963267948966;
  }
  if ((in_XMM0_Db & 0x7fffffff) != 0x3ff00000 || in_XMM0_Da != 0) {
    if ((int)((((uint)((ulonglong)param_1 >> 0x20) & 0x7fffffff) + 0x80100000) -
             (uint)((int)param_1 == 0)) < 0) {
      local_c = -NAN;
      uVar7 = 0x3a;
    }
    else {
      local_c = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) + 0.0;
      uVar7 = 0x3f0;
    }
    ___libm_error_support(&param_1,&param_1,&local_c,uVar7);
    return (float10)local_c;
  }
  uVar8 = CONCAT44((int)in_XMM0_Db >> 0x1f,(int)in_XMM0_Db >> 0x1f);
  return (float10)((double)(uVar8 & 0x400921fb54442d18) + (double)(uVar8 & 0x3ca1a62633145c07));
}



void FUN_00996980(void)

{
  float10 in_ST0;
  
  FUN_0099699e((double)in_ST0);
  return;
}



float10 FUN_0099699e(void)

{
  ushort uVar1;
  int iVar2;
  float10 fVar3;
  double in_XMM0_Qa;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar1 = ((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff) + 0xcfd0;
  if (uVar1 < 0x10c6) {
    dVar9 = (in_XMM0_Qa * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    iVar2 = ((int)ROUND(in_XMM0_Qa * 10.185916357881302) + 0x1c7600U & 0x3f) * 0x20;
    dVar10 = dVar9 * 3.798187816439979e-12;
    dVar4 = in_XMM0_Qa - dVar9 * 0.09817477042088285;
    dVar14 = in_XMM0_Qa - dVar9 * 0.09817477042088285;
    dVar15 = dVar14 - dVar10;
    dVar5 = dVar4 - dVar10;
    dVar7 = dVar4 - dVar9 * 3.798187816439979e-12;
    dVar6 = dVar5 * dVar5;
    dVar8 = dVar7 * dVar7;
    dVar11 = *(double *)(&DAT_00aadac0 + iVar2) + *(double *)(&DAT_00aadad8 + iVar2);
    dVar12 = *(double *)(&DAT_00aadad8 + iVar2) * dVar15;
    dVar16 = dVar15 * *(double *)(&DAT_00aadac0 + iVar2);
    dVar13 = dVar12 + *(double *)(&DAT_00aadac8 + iVar2);
    dVar17 = dVar16 + dVar13;
    return (float10)(dVar17 + (dVar9 * 1.2639164054974691e-22 - ((dVar14 - dVar15) - dVar10)) *
                              (*(double *)(&DAT_00aadac8 + iVar2) * dVar15 - dVar11) +
                              *(double *)(&DAT_00aadad0 + iVar2) +
                              (*(double *)(&DAT_00aadac8 + iVar2) - dVar13) + dVar12 +
                              (dVar13 - dVar17) + dVar16 +
                              (dVar6 * 0.008333333333333333 + -0.16666666666666666 +
                              (dVar4 * 2.7557319223985893e-06 * dVar5 + -0.0001984126984126984) *
                              dVar6 * dVar6) * dVar11 * dVar15 * dVar6 +
                              (dVar8 * 0.041666666666666664 + -0.5 +
                              (dVar4 * 2.48015873015873e-05 * dVar7 + -0.001388888888888889) *
                              dVar8 * dVar8) * *(double *)(&DAT_00aadac8 + iVar2) * dVar8);
  }
  if ((short)uVar1 < 0x10c6) {
    if (uVar1 >> 4 == 0xcfd) {
      return (float10)(in_XMM0_Qa * 0.9999999999999999);
    }
    return (float10)in_XMM0_Qa;
  }
  fVar3 = (float10)FUN_0098634f();
  return fVar3;
}



/* Library Function - Single Match
    ___ascii_strnicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      cVar1 = *_Str2;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar6 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_00996ba1;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_00996ba1:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}



void FUN_00996bc0(void)

{
  float10 in_ST0;
  
  FUN_00996bde((double)in_ST0);
  return;
}



float10 FUN_00996bde(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  double in_XMM0_Qa;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined2 uStack_c;
  undefined6 uStack_a;
  undefined2 uStack_4;
  
  uVar1 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff;
  if ((0x408f - uVar1 | uVar1 - 0x3c90) < 0x80000000) {
    dVar5 = in_XMM0_Qa * 92.33248261689366 + 6755399441055744.0;
    dVar6 = (in_XMM0_Qa * 92.33248261689366 + 6755399441055744.0) - 6755399441055744.0;
    uVar1 = SUB84(dVar5,0);
    iVar2 = (uVar1 & 0x3f) * 0x10;
    dVar4 = (in_XMM0_Qa - (dVar5 - 6755399441055744.0) * 0.010830424696223417) -
            (dVar5 - 6755399441055744.0) * 2.572804622327669e-14;
    dVar6 = (in_XMM0_Qa - dVar6 * 0.010830424696223417) - dVar6 * 2.572804622327669e-14;
    dVar5 = (double)(*(ulonglong *)(&UNK_00aae418 + iVar2) |
                    ((ulonglong)dVar5 & 0xffffffc0) + 0xffc0 << 0x2e);
    dVar4 = dVar6 * dVar6 * (dVar6 * 0.16666666669815094 + 0.4999999999995663) +
            dVar4 + *(double *)(&DAT_00aae410 + iVar2) +
            dVar4 * dVar4 * dVar4 * dVar4 * (dVar4 * 0.008332168270616733 + 0.04166672086872847);
    if (((int)uVar1 >> 6) + 0x37eU < 0x77d) {
      return (float10)(dVar4 * dVar5 + dVar5);
    }
    dVar6 = (double)(*(ulonglong *)(&UNK_00aae418 + iVar2) & 0xfffffffffffff |
                    (ulonglong)(((int)uVar1 >> 7) + 0x3ff) << 0x34);
    uStack_4 = (undefined2)((ulonglong)dVar6 >> 0x30);
    in_XMM0_Qa = (double)((ulonglong)((((int)uVar1 >> 6) - ((int)uVar1 >> 7)) + 0x3ff) << 0x34) *
                 (dVar6 + dVar4 * dVar6);
    if (((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7ff0) < 0x7ff0) {
      if (((ulonglong)in_XMM0_Qa & 0x7ff0000000000000) != 0) goto LAB_00996dd2;
      uVar3 = 0xf;
    }
    else {
      uVar3 = 0xe;
    }
  }
  else {
    uVar1 = param_2 & 0x7fffffff;
    if (uVar1 < 0x40900000) {
      return (float10)((double)CONCAT44(param_2,param_1) + 1.0);
    }
    if (uVar1 < 0x7ff00000) {
      if (param_2 < 0x80000000) {
        in_XMM0_Qa = INFINITY;
        uVar3 = 0xe;
      }
      else {
        in_XMM0_Qa = 0.0;
        uVar3 = 0xf;
      }
    }
    else {
      if ((uVar1 < 0x7ff00001) && (param_1 == 0)) {
        if (param_2 != 0x7ff00000) {
          return (float10)0.0;
        }
        return (float10)INFINITY;
      }
      uVar3 = 0x3ea;
    }
  }
  uStack_c = SUB82(in_XMM0_Qa,0);
  uStack_a = (undefined6)((ulonglong)in_XMM0_Qa >> 0x10);
  ___libm_error_support(&param_1,&param_1,(short)&uStack_c,uVar3);
  in_XMM0_Qa = (double)CONCAT62(uStack_a,uStack_c);
LAB_00996dd2:
  return (float10)in_XMM0_Qa;
}



void FUN_00996e80(void)

{
  float10 in_ST0;
  
  FUN_00996e9e((double)in_ST0);
  return;
}



float10 FUN_00996e9e(double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 in_XMM0 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_c;
  
  iVar4 = 0;
  while( true ) {
    uVar7 = in_XMM0._0_8_;
    uVar2 = (uint)(ushort)(in_XMM0._6_2_ >> 4);
    dVar8 = (double)(uVar7 & 0xfffffffffffff | 0x3ff0000000000000);
    uVar1 = SUB82(dVar8 + 4398046511103.0073,0) & 0x7f0;
    dVar10 = (double)(uVar7 & 0xfffffffe00000 | 0x3ff0000000000000);
    dVar12 = (double)(uVar7 & 0xfffffffe00000 | 0x3ff0000000000000);
    dVar11 = dVar10 * *(double *)(&DAT_00aae940 + uVar1) - 1.0;
    dVar8 = (dVar8 - dVar10) * *(double *)(&DAT_00aae940 + uVar1);
    dVar9 = ((double)(uVar7 & 0xfffffffffffff | 0x3ff0000000000000) - dVar12) *
            *(double *)(&UNK_00aae948 + uVar1);
    dVar10 = dVar8 + dVar11;
    in_XMM0._8_8_ = dVar9 + (dVar12 * *(double *)(&UNK_00aae948 + uVar1) - 1.0);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar12 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((dVar10 * 0.1428709072311373 + -0.1666800146149218) * dVar10 +
                       0.1999999994995557) * dVar10 * dVar10 * dVar10 * dVar10 * dVar10 +
                       ((in_XMM0._8_8_ * -0.24999999959276006 + 0.33333333333333787) * in_XMM0._8_8_
                       + -0.5000000000000031) * in_XMM0._8_8_ * in_XMM0._8_8_ +
                       *(double *)(&UNK_00aaed58 + uVar1) + dVar12 * 5.497923018708371e-14 +
                       (double)((ulonglong)dVar9 & *(ulonglong *)(&UNK_00aae8a8 + iVar5)) +
                      *(double *)(&DAT_00aaed50 + uVar1) + dVar11 + dVar12 * 0.6931471805598903 +
                      (double)((ulonglong)dVar8 & *(ulonglong *)(&DAT_00aae8a0 + iVar5)));
    }
    local_c = (double)-(ulonglong)(param_1 == 0.0);
    if (SUB82(local_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        local_c = 2.225073858507201e-308;
        if ((double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) == 1.0) {
          return (float10)INFINITY;
        }
        uVar6 = 1000;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        local_c = -NAN;
        uVar6 = 3;
      }
      else {
        uVar6 = 1000;
      }
      goto LAB_00997092;
    }
    in_XMM0._0_8_ = param_1 * 4503599627370496.0;
    iVar4 = -0x34;
  }
  local_c = -INFINITY;
  uVar6 = 2;
LAB_00997092:
  ___libm_error_support(&param_1,&param_1,&local_c,uVar6);
  return (float10)local_c;
}



void FUN_009970f0(void)

{
  float10 in_ST0;
  
  FUN_0099710e((double)in_ST0);
  return;
}



float10 FUN_0099710e(double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 in_XMM0 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_c;
  
  iVar4 = 0;
  while( true ) {
    uVar7 = in_XMM0._0_8_;
    uVar2 = (uint)(ushort)(in_XMM0._6_2_ >> 4);
    dVar8 = (double)(uVar7 & 0xfffffffffffff | 0x3ff0000000000000);
    uVar1 = SUB82(dVar8 + 4398046511103.008,0) & 0x7f0;
    dVar10 = (double)(uVar7 & 0xfffff80000000 | 0x3ff0000000000000);
    dVar12 = (double)(uVar7 & 0xfffff80000000 | 0x3ff0000000000000);
    dVar11 = dVar10 * *(double *)(&DAT_00aaf670 + uVar1) - 0.43359375;
    dVar8 = (dVar8 - dVar10) * *(double *)(&DAT_00aaf670 + uVar1);
    dVar9 = ((double)(uVar7 & 0xfffffffffffff | 0x3ff0000000000000) - dVar12) *
            *(double *)(&UNK_00aaf678 + uVar1);
    dVar10 = dVar8 + dVar11;
    in_XMM0._8_8_ = dVar9 + (dVar12 * *(double *)(&UNK_00aaf678 + uVar1) - 0.43359375);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar12 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((in_XMM0._8_8_ * -3.0717952561537047 + 1.775881635348345) * in_XMM0._8_8_ +
                       -1.155016766740187) * in_XMM0._8_8_ * in_XMM0._8_8_ +
                       ((dVar10 * 21.535473262846583 + -10.893557852776363) * dVar10 +
                       5.667600603343536) * dVar10 * dVar10 * dVar10 * dVar10 * dVar10 +
                       dVar10 * 0.0016161024074997105 +
                       *(double *)(&UNK_00aaf268 + uVar1) + dVar12 * 2.8363394551044964e-14 +
                       (double)((ulonglong)dVar9 & *(ulonglong *)(&UNK_00aaf1b8 + iVar5)) +
                      *(double *)(&DAT_00aaf260 + uVar1) + dVar11 + dVar12 * 0.30102999566395283 +
                      (double)((ulonglong)dVar8 & *(ulonglong *)(&DAT_00aaf1b0 + iVar5)));
    }
    local_c = (double)-(ulonglong)(param_1 == 0.0);
    if (SUB82(local_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        local_c = 2.225073858507201e-308;
        if ((double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) == 1.0) {
          return (float10)INFINITY;
        }
        uVar6 = 0x3e9;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        local_c = -NAN;
        uVar6 = 9;
      }
      else {
        uVar6 = 0x3e9;
      }
      goto LAB_0099731a;
    }
    in_XMM0._0_8_ = param_1 * 4503599627370496.0;
    iVar4 = -0x34;
  }
  local_c = -INFINITY;
  uVar6 = 8;
LAB_0099731a:
  ___libm_error_support(&param_1,&param_1,&local_c,uVar6);
  return (float10)local_c;
}



/* Library Function - Single Match
    _strnlen
   
   Library: Visual Studio 2005 Release */

size_t __cdecl _strnlen(char *_Str,size_t _MaxCount)

{
  uint uVar1;
  
  uVar1 = 0;
  if (_MaxCount != 0) {
    do {
      if (*_Str == '\0') {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      _Str = _Str + 1;
    } while (uVar1 < _MaxCount);
  }
  return uVar1;
}



void FUN_009973a0(void)

{
  float10 in_ST0;
  
  FUN_009973be((double)in_ST0);
  return;
}



float10 FUN_009973be(double param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double in_XMM7_Qa;
  
  dVar2 = ABS(in_XMM7_Qa);
  dVar3 = ABS(in_XMM7_Qa);
  if (!NAN(dVar2)) {
    if (dVar2 < 1.633123935319537e+16) {
      if (0.03125 <= dVar2) {
        if (dVar2 < 0.375) {
          dVar2 = dVar2 * dVar2;
          dVar5 = dVar2 * dVar2;
          dVar3 = dVar3 * dVar3 * dVar3 * dVar3;
          return (float10)(in_XMM7_Qa -
                          ((((((((dVar5 * 0.0026934075931626827 + 0.022732276941641268) * dVar5 +
                                0.04125694610825324) * dVar5 + 0.05252293309770195) * dVar5 +
                              0.06666504934349429) * dVar5 + 0.09090908458517269) * dVar5 +
                            0.14285714285263723) * dVar5 + 0.33333333333333315) * dVar2 +
                          ((((((dVar3 * -0.010952639006211013 + -0.033483926618350056) * dVar3 +
                              -0.047051350333818964) * dVar3 + -0.0588080589751801) * dVar3 +
                            -0.07692295551132346) * dVar3 + -0.11111111089426066) * dVar3 +
                          -0.19999999999995077) * dVar3 + 0.0) * in_XMM7_Qa);
        }
        if (8.0 <= dVar2) {
          iVar1 = 0x300;
          dVar3 = -1.0 / dVar2;
        }
        else {
          iVar4 = (uint)((ulonglong)(dVar2 + 8.0) >> 0x2c) - 0x40201;
          iVar1 = iVar4 * 3;
          dVar3 = (dVar2 - *(double *)(&DAT_00ab0fc0 + iVar4 * 0x18)) /
                  (dVar2 * *(double *)(&DAT_00ab0fc0 + iVar4 * 0x18) + 1.0);
        }
        dVar5 = dVar3 * dVar3;
        dVar6 = dVar5 * dVar5;
        dVar7 = dVar3 * dVar3 * dVar3 * dVar3;
        return (float10)(double)((ulonglong)
                                 (*(double *)(&DAT_00ab0fb0 + iVar1 * 8) -
                                 ((((((dVar6 * 0.0597832644196164 + 0.09090016113103182) * dVar6 +
                                     0.14285714182967618) * dVar6 + 0.33333333333332743) * dVar5 +
                                   ((dVar7 * -0.07658138963640501 + -0.11111098126247418) * dVar7 +
                                   -0.19999999999600315) * dVar7 + 0.0) * dVar3 -
                                  *(double *)(&DAT_00ab0fb8 + iVar1 * 8)) - dVar3)) |
                                (ulonglong)in_XMM7_Qa ^ (ulonglong)dVar2);
      }
      if (7.450580596923828e-09 <= dVar2) {
        dVar2 = dVar2 * dVar2;
        dVar5 = dVar2 * dVar2;
        dVar3 = dVar3 * dVar3 * dVar3 * dVar3;
        return (float10)(in_XMM7_Qa -
                        ((((dVar5 * 0.0597832644196164 + 0.09090016113103182) * dVar5 +
                          0.14285714182967618) * dVar5 + 0.33333333333332743) * dVar2 +
                        ((dVar3 * -0.07658138963640501 + -0.11111098126247418) * dVar3 +
                        -0.19999999999600315) * dVar3 + 0.0) * in_XMM7_Qa);
      }
      if (dVar2 == 0.0) {
        return (float10)param_1;
      }
      if (dVar2 < 2.2250738585072014e-308) {
        return (float10)0.0 + (float10)param_1;
      }
      return (float10)4.778309726736481e-299 * (float10)4.778309726736481e-299 + (float10)param_1;
    }
    if (!NAN((double)((ulonglong)dVar2 & 0x7ff0000000000000))) {
      return (float10)4.778309726736481e-299 +
             (float10)*(double *)(&DAT_00aafaa0 + (param_1._4_4_ >> 0x1f) * -8);
    }
  }
  ___libm_error_support(&param_1,&param_1,&param_1,0x3eb);
  return (float10)param_1;
}



/* Library Function - Single Match
    __mbsbtype_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsbtype_l(uchar *_Str,size_t _Pos,_locale_t _Locale)

{
  int *piVar1;
  int _CType;
  bool bVar2;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_Str == (uchar *)0x0) {
LAB_009976a8:
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
LAB_009976c0:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    _CType = -1;
  }
  else if ((local_14.mbcinfo)->ismbcodepage == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    _CType = 0;
  }
  else {
    _CType = -1;
    do {
      if ((_Pos == 0) && (*_Str == '\0')) goto LAB_009976c0;
      if (*_Str == '\0') goto LAB_009976a8;
      _CType = __mbbtype_l(*_Str,_CType,&local_14);
      _Str = _Str + 1;
      bVar2 = _Pos != 0;
      _Pos = _Pos - 1;
    } while (bVar2);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return _CType;
}



/* Library Function - Single Match
    _parse_cmdline
   
   Library: Visual Studio 2005 Release */

void __cdecl parse_cmdline(undefined4 *param_1,byte *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *in_EDX;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *unaff_EDI;
  
  *unaff_EDI = 0;
  *param_3 = 1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  bVar2 = false;
  pbVar5 = param_2;
  do {
    if (*in_EDX == 0x22) {
      bVar2 = !bVar2;
      bVar6 = 0x22;
      pbVar7 = in_EDX + 1;
    }
    else {
      *unaff_EDI = *unaff_EDI + 1;
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = *in_EDX;
        param_2 = pbVar5 + 1;
      }
      bVar6 = *in_EDX;
      pbVar7 = in_EDX + 1;
      iVar3 = __ismbblead((uint)bVar6);
      if (iVar3 != 0) {
        *unaff_EDI = *unaff_EDI + 1;
        if (param_2 != (byte *)0x0) {
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        pbVar7 = in_EDX + 2;
      }
      pbVar5 = param_2;
      if (bVar6 == 0) {
        pbVar7 = pbVar7 + -1;
        goto LAB_009978ef;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_009978ef:
  bVar2 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = pbVar5;
      param_1 = param_1 + 1;
    }
    *param_3 = *param_3 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      for (; *pbVar7 == 0x5c; pbVar7 = pbVar7 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*pbVar7 == 0x22) {
        pbVar8 = pbVar7;
        if (((uVar4 & 1) == 0) && ((!bVar2 || (pbVar8 = pbVar7 + 1, *pbVar8 != 0x22)))) {
          bVar1 = false;
          bVar2 = !bVar2;
          pbVar8 = pbVar7;
        }
        uVar4 = uVar4 >> 1;
        pbVar7 = pbVar8;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (pbVar5 != (byte *)0x0) {
          *pbVar5 = 0x5c;
          pbVar5 = pbVar5 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        param_2 = pbVar5;
      }
      bVar6 = *pbVar7;
      if ((bVar6 == 0) || ((!bVar2 && ((bVar6 == 0x20 || (bVar6 == 9)))))) break;
      if (bVar1) {
        if (pbVar5 == (byte *)0x0) {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
          }
        }
        else {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            *param_2 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
            param_2 = param_2 + 1;
          }
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        pbVar5 = param_2;
      }
      pbVar7 = pbVar7 + 1;
    }
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      param_2 = pbVar5;
    }
    *unaff_EDI = *unaff_EDI + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  *param_3 = *param_3 + 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2005 Release */

int __cdecl __setargv(void)

{
  uint _Size;
  void *pvVar1;
  int iVar2;
  uint local_10;
  uint local_c;
  char *local_8;
  
  if (DAT_00babc14 == 0) {
    ___initmbctable();
  }
  DAT_00baa754 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_00baa650,0x104);
  _DAT_00ba9dc4 = &DAT_00baa650;
  if ((DAT_00babc04 == (char *)0x0) || (local_8 = DAT_00babc04, *DAT_00babc04 == '\0')) {
    local_8 = &DAT_00baa650;
  }
  parse_cmdline(0,0,&local_c);
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    iVar2 = local_c * 4;
    _Size = iVar2 + local_10;
    if ((local_10 <= _Size) && (pvVar1 = __malloc_crt(_Size), pvVar1 != (void *)0x0)) {
      parse_cmdline(pvVar1,(void *)(iVar2 + (int)pvVar1),&local_c);
      _DAT_00ba9da8 = local_c - 1;
      _DAT_00ba9dac = pvVar1;
      return 0;
    }
  }
  return -1;
}



/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2005 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_00b30aac == 0xbb40e64e) || ((DAT_00b30aac & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_00b30aac = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_00b30aac == 0xbb40e64e) {
      DAT_00b30aac = 0xbb40e64f;
    }
    else if ((DAT_00b30aac & 0xffff0000) == 0) {
      DAT_00b30aac = DAT_00b30aac | DAT_00b30aac << 0x10;
    }
  }
  DAT_00b30ab0 = ~DAT_00b30aac;
  return;
}



/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2005 Release */

void __cdecl write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  FILE *in_ECX;
  int *unaff_ESI;
  
  if (((in_ECX->_flag & 0x40) == 0) || (in_ECX->_base != (char *)0x0)) {
    piVar1 = &in_ECX->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,in_ECX);
    }
    else {
      *in_ECX->_ptr = in_AL;
      in_ECX->_ptr = in_ECX->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}



/* Library Function - Single Match
    _write_multi_char
   
   Library: Visual Studio 2005 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*in_EAX != -1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __write_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  WCHAR *pWVar1;
  char cVar2;
  wchar_t *pwVar3;
  WCHAR WVar4;
  wchar_t wVar5;
  ulong *puVar6;
  int *piVar7;
  int iVar8;
  _ptiddata p_Var9;
  BOOL BVar10;
  DWORD nNumberOfBytesToWrite;
  uint uVar11;
  int iVar12;
  WCHAR *pWVar13;
  uint uVar14;
  char *pcVar15;
  ulong uVar16;
  int unaff_EDI;
  UINT local_598;
  uint local_594;
  WCHAR *local_590;
  int *local_58c;
  char *local_588;
  int local_584;
  WCHAR *local_580;
  char *local_57c;
  WCHAR *local_578;
  char local_571;
  DWORD local_570;
  WCHAR *local_56c;
  WCHAR local_568 [38];
  undefined1 local_51c [264];
  CHAR local_414 [688];
  WCHAR local_164 [170];
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)local_51c;
  local_580 = _Buf;
  local_57c = (char *)0x0;
  local_584 = 0;
  if (_MaxCharCount == 0) {
    return 0;
  }
  if (_Buf == (void *)0x0) {
    puVar6 = ___doserrno();
    *puVar6 = 0;
    piVar7 = __errno();
    *piVar7 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return -1;
  }
  iVar12 = (_FileHandle & 0x1fU) * 0x28;
  piVar7 = &DAT_00baaac0 + (_FileHandle >> 5);
  local_571 = (char)(*(char *)(*piVar7 + iVar12 + 0x24) * '\x02') >> 1;
  local_58c = piVar7;
  if (((local_571 == '\x02') || (local_571 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    puVar6 = ___doserrno();
    *puVar6 = 0;
    piVar7 = __errno();
    *piVar7 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return -1;
  }
  if ((*(byte *)(*piVar7 + iVar12 + 4) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  }
  iVar8 = __isatty(_FileHandle);
  if ((iVar8 == 0) || ((*(byte *)(iVar12 + 4 + *piVar7) & 0x80) == 0)) {
LAB_00998a3a:
    if ((*(byte *)((undefined4 *)(*piVar7 + iVar12) + 1) & 0x80) == 0) {
      BVar10 = WriteFile(*(HANDLE *)(*piVar7 + iVar12),local_580,_MaxCharCount,(LPDWORD)&local_588,
                         (LPOVERLAPPED)0x0);
      if (BVar10 == 0) {
LAB_00998c94:
        local_570 = GetLastError();
      }
      else {
        local_570 = 0;
        local_57c = local_588;
      }
LAB_00998c9d:
      piVar7 = local_58c;
      if (local_57c != (char *)0x0) {
        return (int)local_57c - local_584;
      }
      goto LAB_00998ca7;
    }
    local_570 = 0;
    if (local_571 == '\0') {
      local_56c = local_580;
      if (_MaxCharCount == 0) goto LAB_00998cce;
      do {
        local_578 = (WCHAR *)0x0;
        uVar11 = (int)local_56c - (int)local_580;
        pWVar13 = local_568;
        do {
          if (_MaxCharCount <= uVar11) break;
          pWVar1 = (WCHAR *)((int)local_56c + 1);
          WVar4 = *local_56c;
          uVar11 = uVar11 + 1;
          if ((char)WVar4 == '\n') {
            local_584 = local_584 + 1;
            *(char *)pWVar13 = '\r';
            pWVar13 = (WCHAR *)((int)pWVar13 + 1);
            local_578 = (WCHAR *)((int)local_578 + 1);
          }
          *(char *)pWVar13 = (char)WVar4;
          pWVar13 = (WCHAR *)((int)pWVar13 + 1);
          local_578 = (WCHAR *)((int)local_578 + 1);
          local_56c = pWVar1;
        } while (local_578 < (WCHAR *)0x400);
        BVar10 = WriteFile(*(HANDLE *)(iVar12 + *piVar7),local_568,(int)pWVar13 - (int)local_568,
                           (LPDWORD)&local_588,(LPOVERLAPPED)0x0);
        if (BVar10 == 0) goto LAB_00998c94;
        local_57c = local_57c + (int)local_588;
      } while (((int)pWVar13 - (int)local_568 <= (int)local_588) &&
              ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
      goto LAB_00998c9d;
    }
    if (local_571 == '\x02') {
      local_56c = local_580;
      if (_MaxCharCount != 0) {
        do {
          uVar14 = 0;
          uVar11 = (int)local_56c - (int)local_580;
          pWVar13 = local_568;
          do {
            if (_MaxCharCount <= uVar11) break;
            pWVar1 = local_56c + 1;
            WVar4 = *local_56c;
            uVar11 = uVar11 + 2;
            if (WVar4 == L'\n') {
              local_584 = local_584 + 2;
              *pWVar13 = L'\r';
              pWVar13 = pWVar13 + 1;
              uVar14 = uVar14 + 2;
            }
            *pWVar13 = WVar4;
            pWVar13 = pWVar13 + 1;
            uVar14 = uVar14 + 2;
            piVar7 = local_58c;
            local_56c = pWVar1;
          } while (uVar14 < 0x3ff);
          BVar10 = WriteFile(*(HANDLE *)(iVar12 + *piVar7),local_568,(int)pWVar13 - (int)local_568,
                             (LPDWORD)&local_588,(LPOVERLAPPED)0x0);
          if (BVar10 == 0) goto LAB_00998c94;
          local_57c = local_57c + (int)local_588;
        } while (((int)pWVar13 - (int)local_568 <= (int)local_588) &&
                ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
        goto LAB_00998c9d;
      }
    }
    else {
      local_578 = local_580;
      if (_MaxCharCount != 0) {
        do {
          local_56c = (WCHAR *)0x0;
          uVar11 = (int)local_578 - (int)local_580;
          pWVar13 = local_164;
          do {
            if (_MaxCharCount <= uVar11) break;
            WVar4 = *local_578;
            local_578 = local_578 + 1;
            uVar11 = uVar11 + 2;
            if (WVar4 == L'\n') {
              *pWVar13 = L'\r';
              pWVar13 = pWVar13 + 1;
              local_56c = local_56c + 1;
            }
            local_56c = local_56c + 1;
            *pWVar13 = WVar4;
            pWVar13 = pWVar13 + 1;
          } while (local_56c < (WCHAR *)0x152);
          pcVar15 = (char *)0x0;
          iVar8 = WideCharToMultiByte(0xfde9,0,local_164,((int)pWVar13 - (int)local_164) / 2,
                                      local_414,0x2ab,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar8 == 0) goto LAB_00998c94;
          do {
            BVar10 = WriteFile(*(HANDLE *)(iVar12 + *local_58c),local_414 + (int)pcVar15,
                               iVar8 - (int)pcVar15,(LPDWORD)&local_588,(LPOVERLAPPED)0x0);
            if (BVar10 == 0) {
              local_570 = GetLastError();
              break;
            }
            pcVar15 = pcVar15 + (int)local_588;
          } while ((int)pcVar15 < iVar8);
        } while ((iVar8 <= (int)pcVar15) &&
                (local_57c = (char *)((int)local_578 - (int)local_580), local_57c < _MaxCharCount));
        goto LAB_00998c9d;
      }
    }
  }
  else {
    p_Var9 = __getptd();
    pwVar3 = p_Var9->ptlocinfo->lc_category[0].wlocale;
    BVar10 = GetConsoleMode(*(HANDLE *)(iVar12 + *piVar7),&local_598);
    if ((BVar10 == 0) || ((pwVar3 == (wchar_t *)0x0 && (local_571 == '\0')))) goto LAB_00998a3a;
    local_598 = GetConsoleCP();
    local_56c = (WCHAR *)0x0;
    local_590 = local_580;
    if (_MaxCharCount != 0) {
      local_578 = (WCHAR *)0x0;
      do {
        pWVar13 = local_590;
        if (local_571 == '\0') {
          cVar2 = (char)*local_590;
          local_594 = (uint)(cVar2 == '\n');
          iVar8 = _isleadbyte(CONCAT22(cVar2 >> 7,(short)cVar2));
          if (iVar8 == 0) {
            iVar8 = _mbtowc((wchar_t *)&local_570,(char *)pWVar13,1);
            if (iVar8 == -1) break;
          }
          else {
            if (((char *)((int)local_580 + (_MaxCharCount - (int)pWVar13)) < (char *)0x2) ||
               (iVar8 = _mbtowc((wchar_t *)&local_570,(char *)pWVar13,2), iVar8 == -1)) break;
            pWVar13 = (WCHAR *)((int)pWVar13 + 1);
            local_578 = (WCHAR *)((int)local_578 + 1);
          }
          local_590 = (WCHAR *)((int)pWVar13 + 1);
          local_578 = (WCHAR *)((int)local_578 + 1);
          nNumberOfBytesToWrite =
               WideCharToMultiByte(local_598,0,(LPCWSTR)&local_570,1,local_10,5,(LPCSTR)0x0,
                                   (LPBOOL)0x0);
          if (nNumberOfBytesToWrite == 0) break;
          BVar10 = WriteFile(*(HANDLE *)(iVar12 + *piVar7),local_10,nNumberOfBytesToWrite,
                             (LPDWORD)&local_56c,(LPOVERLAPPED)0x0);
          if (BVar10 == 0) goto LAB_00998c94;
          local_57c = local_57c + (int)local_56c;
          if ((int)local_56c < (int)nNumberOfBytesToWrite) break;
          if (local_594 != 0) {
            local_10[0] = '\r';
            BVar10 = WriteFile(*(HANDLE *)(iVar12 + *piVar7),local_10,1,(LPDWORD)&local_56c,
                               (LPOVERLAPPED)0x0);
            if (BVar10 == 0) goto LAB_00998c94;
            if ((int)local_56c < 1) break;
            local_584 = local_584 + 1;
            local_57c = local_57c + 1;
          }
        }
        else {
          if ((local_571 == '\x01') || (local_571 == '\x02')) {
            local_570 = (DWORD)(ushort)*local_590;
            local_594 = (uint)(*local_590 == L'\n');
            local_590 = local_590 + 1;
            local_578 = local_578 + 1;
          }
          if ((local_571 == '\x01') || (local_571 == '\x02')) {
            wVar5 = __putwch_nolock((wchar_t)local_570);
            if (wVar5 != (wchar_t)local_570) goto LAB_00998c94;
            local_57c = local_57c + 1;
            if (local_594 != 0) {
              local_570 = 0xd;
              wVar5 = __putwch_nolock(L'\r');
              if (wVar5 != (wchar_t)local_570) goto LAB_00998c94;
              local_57c = local_57c + 1;
              local_584 = local_584 + 1;
            }
          }
        }
      } while (local_578 < _MaxCharCount);
      goto LAB_00998c9d;
    }
LAB_00998ca7:
    if (local_570 != 0) {
      uVar16 = 5;
      if (local_570 != 5) {
        __dosmaperr(local_570);
        return -1;
      }
      piVar7 = __errno();
      *piVar7 = 9;
      goto LAB_00998cee;
    }
  }
LAB_00998cce:
  uVar16 = 0;
  if (((*(byte *)(iVar12 + 4 + *piVar7) & 0x40) != 0) && ((char)*local_580 == '\x1a')) {
    return 0;
  }
  piVar7 = __errno();
  *piVar7 = 0x1c;
LAB_00998cee:
  puVar6 = ___doserrno();
  *puVar6 = uVar16;
  return -1;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2005 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int local_20;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_00baaaa0)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x28;
      if ((*(byte *)((&DAT_00baaac0)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_00baaac0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_00998de7();
        return local_20;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    __invalid_parameter(0,0,0,0,0);
  }
  return -1;
}



void FUN_00998de7(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/* Library Function - Single Match
    __read_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __read_nolock(int _FileHandle,void *_DstBuf,uint _MaxCharCount)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  ulong *puVar4;
  int *piVar5;
  byte *pbVar6;
  BOOL BVar7;
  uint uVar8;
  DWORD DVar9;
  int iVar10;
  ulong uVar11;
  int unaff_EBX;
  int iVar12;
  byte *pbVar13;
  uint local_1c;
  int local_18;
  byte *local_14;
  byte *local_10;
  undefined2 local_c;
  char local_6;
  char local_5;
  
  uVar1 = _MaxCharCount;
  local_18 = -2;
  if (_FileHandle == -2) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    return -1;
  }
  if ((_FileHandle < 0) || (DAT_00baaaa0 <= (uint)_FileHandle)) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    __invalid_parameter(0,0,0,0,0);
    return -1;
  }
  iVar12 = (_FileHandle & 0x1fU) * 0x28;
  piVar5 = &DAT_00baaac0 + (_FileHandle >> 5);
  bVar2 = *(byte *)(*piVar5 + iVar12 + 4);
  if ((bVar2 & 1) == 0) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    goto LAB_00998fd9;
  }
  local_14 = (byte *)0x0;
  if ((_MaxCharCount == 0) || ((bVar2 & 2) != 0)) {
    return 0;
  }
  if (_DstBuf == (void *)0x0) {
LAB_00998fc7:
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 0x16;
LAB_00998fd9:
    __invalid_parameter(0,0,0,0,0);
    return -1;
  }
  local_6 = (char)(*(char *)(*piVar5 + iVar12 + 0x24) * '\x02') >> 1;
  if (local_6 == '\x01') {
    if ((~_MaxCharCount & 1) == 0) goto LAB_00998fc7;
    uVar8 = _MaxCharCount >> 1;
    _MaxCharCount = 4;
    if (3 < uVar8) {
      _MaxCharCount = uVar8;
    }
    local_10 = __malloc_crt(_MaxCharCount);
    if (local_10 == (byte *)0x0) {
      piVar5 = __errno();
      *piVar5 = 0xc;
      puVar4 = ___doserrno();
      *puVar4 = 8;
      return -1;
    }
  }
  else {
    if (local_6 == '\x02') {
      if ((~_MaxCharCount & 1) == 0) goto LAB_00998fc7;
      _MaxCharCount = _MaxCharCount & 0xfffffffe;
    }
    local_10 = _DstBuf;
  }
  pbVar6 = local_10;
  uVar8 = _MaxCharCount;
  if ((((*(byte *)(iVar12 + *piVar5 + 4) & 0x48) != 0) &&
      (bVar2 = *(byte *)(iVar12 + *piVar5 + 5), bVar2 != 10)) && (_MaxCharCount != 0)) {
    *local_10 = bVar2;
    pbVar6 = local_10 + 1;
    uVar8 = _MaxCharCount - 1;
    local_14 = (byte *)0x1;
    *(undefined1 *)(iVar12 + 5 + *piVar5) = 10;
    if (((local_6 != '\0') && (bVar2 = *(byte *)(iVar12 + 0x25 + *piVar5), bVar2 != 10)) &&
       (uVar8 != 0)) {
      *pbVar6 = bVar2;
      pbVar6 = local_10 + 2;
      uVar8 = _MaxCharCount - 2;
      local_14 = (byte *)0x2;
      *(undefined1 *)(iVar12 + 0x25 + *piVar5) = 10;
      if (((local_6 == '\x01') && (bVar2 = *(byte *)(iVar12 + 0x26 + *piVar5), bVar2 != 10)) &&
         (uVar8 != 0)) {
        *pbVar6 = bVar2;
        pbVar6 = local_10 + 3;
        local_14 = (byte *)0x3;
        *(undefined1 *)(iVar12 + 0x26 + *piVar5) = 10;
        uVar8 = _MaxCharCount - 3;
      }
    }
  }
  _MaxCharCount = uVar8;
  BVar7 = ReadFile(*(HANDLE *)(iVar12 + *piVar5),pbVar6,_MaxCharCount,&local_1c,(LPOVERLAPPED)0x0);
  if (((BVar7 == 0) || ((int)local_1c < 0)) || (_MaxCharCount < local_1c)) {
    uVar11 = GetLastError();
    if (uVar11 != 5) {
      if (uVar11 == 0x6d) {
        local_18 = 0;
        goto LAB_009991f6;
      }
      goto LAB_009991eb;
    }
    piVar5 = __errno();
    *piVar5 = 9;
    puVar4 = ___doserrno();
    *puVar4 = 5;
  }
  else {
    local_14 = (byte *)((int)local_14 + local_1c);
    pbVar6 = (byte *)(iVar12 + 4 + *piVar5);
    if ((*pbVar6 & 0x80) == 0) goto LAB_009991f6;
    if (local_6 == '\x02') {
      if ((local_1c == 0) || (*(short *)local_10 != 10)) {
        *pbVar6 = *pbVar6 & 0xfb;
      }
      else {
        *pbVar6 = *pbVar6 | 4;
      }
      local_14 = local_10 + (int)local_14;
      _MaxCharCount = (uint)local_10;
      pbVar6 = local_10;
      if (local_10 < local_14) {
        do {
          sVar3 = *(short *)_MaxCharCount;
          if (sVar3 == 0x1a) {
            pbVar13 = (byte *)(iVar12 + 4 + *piVar5);
            if ((*pbVar13 & 0x40) == 0) {
              *pbVar13 = *pbVar13 | 2;
            }
            else {
              *(undefined2 *)pbVar6 = *(undefined2 *)_MaxCharCount;
              pbVar6 = pbVar6 + 2;
            }
            break;
          }
          if (sVar3 == 0xd) {
            if (_MaxCharCount < local_14 + -2) {
              if (*(short *)(_MaxCharCount + 2) == 10) {
                uVar1 = _MaxCharCount + 4;
                goto LAB_00999289;
              }
LAB_0099931e:
              _MaxCharCount = _MaxCharCount + 2;
              pbVar6[0] = 0xd;
              pbVar6[1] = 0;
            }
            else {
              uVar1 = _MaxCharCount + 2;
              BVar7 = ReadFile(*(HANDLE *)(iVar12 + *piVar5),&local_c,2,&local_1c,(LPOVERLAPPED)0x0)
              ;
              if (((BVar7 == 0) && (DVar9 = GetLastError(), DVar9 != 0)) || (local_1c == 0))
              goto LAB_0099931e;
              if ((*(byte *)(iVar12 + 4 + *piVar5) & 0x48) == 0) {
                if ((pbVar6 == local_10) && (local_c == 10)) goto LAB_00999289;
                __lseeki64_nolock(_FileHandle,0x1ffffffff,unaff_EBX);
                if (local_c == 10) goto LAB_00999325;
                goto LAB_0099931e;
              }
              if (local_c == 10) {
LAB_00999289:
                _MaxCharCount = uVar1;
                pbVar6[0] = 10;
                pbVar6[1] = 0;
              }
              else {
                pbVar6[0] = 0xd;
                pbVar6[1] = 0;
                *(undefined1 *)(iVar12 + 5 + *piVar5) = (undefined1)local_c;
                *(undefined1 *)(iVar12 + 0x25 + *piVar5) = local_c._1_1_;
                *(undefined1 *)(iVar12 + 0x26 + *piVar5) = 10;
                _MaxCharCount = uVar1;
              }
            }
            pbVar6 = pbVar6 + 2;
            uVar1 = _MaxCharCount;
          }
          else {
            *(short *)pbVar6 = sVar3;
            pbVar6 = pbVar6 + 2;
            uVar1 = _MaxCharCount + 2;
          }
LAB_00999325:
          _MaxCharCount = uVar1;
        } while (_MaxCharCount < local_14);
      }
      local_14 = (byte *)((int)pbVar6 - (int)local_10);
      goto LAB_009991f6;
    }
    if ((local_1c == 0) || (*local_10 != 10)) {
      *pbVar6 = *pbVar6 & 0xfb;
    }
    else {
      *pbVar6 = *pbVar6 | 4;
    }
    local_14 = local_10 + (int)local_14;
    _MaxCharCount = (uint)local_10;
    pbVar6 = local_10;
    if (local_10 < local_14) {
      do {
        bVar2 = *(byte *)_MaxCharCount;
        if (bVar2 == 0x1a) {
          pbVar13 = (byte *)(iVar12 + 4 + *piVar5);
          if ((*pbVar13 & 0x40) == 0) {
            *pbVar13 = *pbVar13 | 2;
          }
          else {
            *pbVar6 = *(byte *)_MaxCharCount;
            pbVar6 = pbVar6 + 1;
          }
          break;
        }
        if (bVar2 == 0xd) {
          if (_MaxCharCount < local_14 + -1) {
            if (*(char *)(_MaxCharCount + 1) == '\n') {
              uVar8 = _MaxCharCount + 2;
              goto LAB_00999076;
            }
LAB_009990ed:
            _MaxCharCount = _MaxCharCount + 1;
            *pbVar6 = 0xd;
          }
          else {
            uVar8 = _MaxCharCount + 1;
            BVar7 = ReadFile(*(HANDLE *)(iVar12 + *piVar5),&local_5,1,&local_1c,(LPOVERLAPPED)0x0);
            if (((BVar7 == 0) && (DVar9 = GetLastError(), DVar9 != 0)) || (local_1c == 0))
            goto LAB_009990ed;
            if ((*(byte *)(iVar12 + 4 + *piVar5) & 0x48) == 0) {
              if ((pbVar6 == local_10) && (local_5 == '\n')) goto LAB_00999076;
              __lseeki64_nolock(_FileHandle,0x1ffffffff,unaff_EBX);
              if (local_5 == '\n') goto LAB_009990f1;
              goto LAB_009990ed;
            }
            if (local_5 == '\n') {
LAB_00999076:
              _MaxCharCount = uVar8;
              *pbVar6 = 10;
            }
            else {
              *pbVar6 = 0xd;
              *(char *)(iVar12 + 5 + *piVar5) = local_5;
              _MaxCharCount = uVar8;
            }
          }
          pbVar6 = pbVar6 + 1;
          uVar8 = _MaxCharCount;
        }
        else {
          *pbVar6 = bVar2;
          pbVar6 = pbVar6 + 1;
          uVar8 = _MaxCharCount + 1;
        }
LAB_009990f1:
        _MaxCharCount = uVar8;
      } while (_MaxCharCount < local_14);
    }
    local_14 = (byte *)((int)pbVar6 - (int)local_10);
    if ((local_6 != '\x01') || (local_14 == (byte *)0x0)) goto LAB_009991f6;
    bVar2 = pbVar6[-1];
    if ((char)bVar2 < '\0') {
      iVar10 = 1;
      pbVar6 = pbVar6 + -1;
      while ((((&DAT_00b31d38)[bVar2] == '\0' && (iVar10 < 5)) && (local_10 <= pbVar6))) {
        pbVar6 = pbVar6 + -1;
        bVar2 = *pbVar6;
        iVar10 = iVar10 + 1;
      }
      if ((char)(&DAT_00b31d38)[*pbVar6] == 0) {
        piVar5 = __errno();
        *piVar5 = 0x2a;
        goto LAB_009991f2;
      }
      if ((char)(&DAT_00b31d38)[*pbVar6] + 1 == iVar10) {
        pbVar6 = pbVar6 + iVar10;
      }
      else if ((*(byte *)(*piVar5 + iVar12 + 4) & 0x48) == 0) {
        __lseeki64_nolock(_FileHandle,CONCAT44(1,-iVar10 >> 0x1f),unaff_EBX);
      }
      else {
        pbVar13 = pbVar6 + 1;
        *(byte *)(*piVar5 + iVar12 + 5) = *pbVar6;
        if (1 < iVar10) {
          *(byte *)(iVar12 + 0x25 + *piVar5) = *pbVar13;
          pbVar13 = pbVar6 + 2;
        }
        if (iVar10 == 3) {
          *(byte *)(iVar12 + 0x26 + *piVar5) = *pbVar13;
          pbVar13 = pbVar13 + 1;
        }
        pbVar6 = pbVar13 + -iVar10;
      }
    }
    local_14 = (byte *)MultiByteToWideChar(0xfde9,0,(LPCSTR)local_10,(int)pbVar6 - (int)local_10,
                                           _DstBuf,uVar1 >> 1);
    if (local_14 != (byte *)0x0) {
      local_14 = (byte *)((int)local_14 * 2);
      goto LAB_009991f6;
    }
    uVar11 = GetLastError();
LAB_009991eb:
    __dosmaperr(uVar11);
  }
LAB_009991f2:
  local_18 = -1;
LAB_009991f6:
  if (local_10 != _DstBuf) {
    _free(local_10);
  }
  if (local_18 == -2) {
    return (int)local_14;
  }
  return local_18;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __read
   
   Library: Visual Studio 2005 Release */

int __cdecl __read(int _FileHandle,void *_DstBuf,uint _MaxCharCount)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int local_20;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_00baaaa0)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x28;
      if ((*(byte *)((&DAT_00baaac0)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_00baaac0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __read_nolock(_FileHandle,_DstBuf,_MaxCharCount);
        }
        FUN_00999465();
        return local_20;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    __invalid_parameter(0,0,0,0,0);
  }
  return -1;
}



void FUN_00999465(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2005 Release */

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_00ba9e14 = _DAT_00ba9e14 + 1;
  pcVar1 = __malloc_crt(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2005 Release */

int __cdecl __commit(int _FileHandle)

{
  int *piVar1;
  HANDLE hFile;
  BOOL BVar2;
  ulong *puVar3;
  int iVar4;
  DWORD local_20;
  
  if (_FileHandle == -2) {
    piVar1 = __errno();
    *piVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_00baaaa0)) {
      iVar4 = (_FileHandle & 0x1fU) * 0x28;
      if ((*(byte *)(iVar4 + 4 + (&DAT_00baaac0)[_FileHandle >> 5]) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)(iVar4 + 4 + (&DAT_00baaac0)[_FileHandle >> 5]) & 1) != 0) {
          hFile = (HANDLE)__get_osfhandle(_FileHandle);
          BVar2 = FlushFileBuffers(hFile);
          if (BVar2 == 0) {
            local_20 = GetLastError();
          }
          else {
            local_20 = 0;
          }
          if (local_20 == 0) goto LAB_00999575;
          puVar3 = ___doserrno();
          *puVar3 = local_20;
        }
        piVar1 = __errno();
        *piVar1 = 9;
        local_20 = 0xffffffff;
LAB_00999575:
        FUN_0099958a();
        return local_20;
      }
    }
    piVar1 = __errno();
    *piVar1 = 9;
    __invalid_parameter(0,0,0,0,0);
  }
  return -1;
}



void FUN_0099958a(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/* Library Function - Single Match
    __ftelli64_nolock
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __ftelli64_nolock(FILE *_File)

{
  uint uVar1;
  uint _FileHandle;
  int *piVar2;
  FILE *pFVar3;
  char *pcVar4;
  FILE *pFVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int unaff_EDI;
  bool bVar10;
  longlong lVar11;
  undefined8 local_14;
  uint local_c;
  
  pFVar5 = _File;
  _FileHandle = __fileno(_File);
  if (_File->_cnt < 0) {
    _File->_cnt = 0;
  }
  local_14 = __lseeki64(_FileHandle,0x100000000,unaff_EDI);
  uVar7 = (uint)((ulonglong)local_14 >> 0x20);
  if ((local_14 < 0x100000000) && (local_14 < 0)) {
LAB_009995d5:
    lVar11 = -1;
  }
  else {
    uVar1 = _File->_flag;
    if ((uVar1 & 0x108) == 0) {
      return local_14 - _File->_cnt;
    }
    pcVar4 = _File->_ptr;
    pcVar6 = _File->_base;
    local_c = (int)pcVar4 - (int)pcVar6;
    if ((uVar1 & 3) == 0) {
      if (-1 < (char)uVar1) {
        piVar2 = __errno();
        *piVar2 = 0x16;
        goto LAB_009995d5;
      }
    }
    else {
      pcVar8 = pcVar6;
      if ((*(byte *)((&DAT_00baaac0)[(int)_FileHandle >> 5] + 4 + (_FileHandle & 0x1f) * 0x28) &
          0x80) != 0) {
        for (; pcVar8 < pcVar4; pcVar8 = pcVar8 + 1) {
          if (*pcVar8 == '\n') {
            local_c = local_c + 1;
          }
        }
      }
    }
    if (local_14 == 0) {
      return (ulonglong)local_c;
    }
    if ((_File->_flag & 1) != 0) {
      if (_File->_cnt == 0) {
        local_c = 0;
      }
      else {
        iVar9 = (_FileHandle & 0x1f) * 0x28;
        pFVar3 = (FILE *)(pcVar4 + (_File->_cnt - (int)pcVar6));
        if ((*(byte *)((&DAT_00baaac0)[(int)_FileHandle >> 5] + 4 + iVar9) & 0x80) != 0) {
          lVar11 = __lseeki64(_FileHandle,0x200000000,unaff_EDI);
          if (lVar11 == local_14) {
            pcVar4 = _File->_base;
            pcVar6 = pcVar4 + (int)&pFVar3->_ptr;
            _File = pFVar3;
            for (; pcVar4 < pcVar6; pcVar4 = pcVar4 + 1) {
              if (*pcVar4 == '\n') {
                _File = (FILE *)((int)&_File->_ptr + 1);
              }
            }
            bVar10 = (pFVar5->_flag & 0x2000) == 0;
          }
          else {
            lVar11 = __lseeki64(_FileHandle,(ulonglong)uVar7,unaff_EDI);
            if (((int)((ulonglong)lVar11 >> 0x20) == 0 || lVar11 < 0) && (lVar11 < 0))
            goto LAB_009995d5;
            pFVar5 = (FILE *)0x200;
            if (((FILE *)0x200 < pFVar3) ||
               (((_File->_flag & 8U) == 0 || ((_File->_flag & 0x400U) != 0)))) {
              pFVar5 = (FILE *)_File->_bufsiz;
            }
            bVar10 = (*(byte *)((&DAT_00baaac0)[(int)_FileHandle >> 5] + 4 + iVar9) & 4) == 0;
            _File = pFVar5;
          }
          pFVar3 = _File;
          if (!bVar10) {
            pFVar3 = (FILE *)((int)&_File->_ptr + 1);
          }
        }
        _File = pFVar3;
        uVar7 = uVar7 - ((FILE *)local_14 < _File);
        local_14 = CONCAT44(uVar7,(int)(FILE *)local_14 - (int)_File);
      }
    }
    lVar11 = CONCAT44(uVar7 + CARRY4(local_c,(uint)(FILE *)local_14),local_c + (int)(FILE *)local_14
                     );
  }
  return lVar11;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __ftelli64
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __ftelli64(FILE *_File)

{
  longlong lVar1;
  
  __lock_file(_File);
  lVar1 = __ftelli64_nolock(_File);
  FUN_00999788();
  return lVar1;
}



void FUN_00999788(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}



/* Library Function - Single Match
    __fseeki64_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __fseeki64_nolock(FILE *_File,longlong _Offset,int _Origin)

{
  uint uVar1;
  int _FileHandle;
  int *piVar2;
  int unaff_EDI;
  longlong lVar3;
  undefined4 in_stack_00000008;
  
  if (((_File->_flag & 0x83U) == 0) ||
     (((_Offset._4_4_ != 0 && (_Offset._4_4_ != 1)) && (_Offset._4_4_ != 2)))) {
    piVar2 = __errno();
    *piVar2 = 0x16;
  }
  else {
    _File->_flag = _File->_flag & 0xffffffef;
    lVar3 = _Offset;
    if (_Offset._4_4_ == 1) {
      lVar3 = __ftelli64_nolock(_File);
      lVar3 = lVar3 + CONCAT44((undefined4)_Offset,in_stack_00000008);
      in_stack_00000008 = (undefined4)lVar3;
      lVar3 = CONCAT44(1,(int)((ulonglong)lVar3 >> 0x20));
      _Offset._4_4_ = 0;
    }
    __flush(_File);
    _Offset._0_4_ = (undefined4)lVar3;
    uVar1 = _File->_flag;
    if ((char)uVar1 < '\0') {
      _File->_flag = uVar1 & 0xfffffffc;
    }
    else if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
      _File->_bufsiz = 0x200;
    }
    _FileHandle = __fileno(_File);
    lVar3 = __lseeki64(_FileHandle,CONCAT44(_Offset._4_4_,(undefined4)_Offset),unaff_EDI);
    if (lVar3 != -1) {
      return 0;
    }
  }
  return -1;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __fseeki64
   
   Library: Visual Studio 2005 Release */

int __cdecl __fseeki64(FILE *_File,longlong _Offset,int _Origin)

{
  int iVar1;
  int in_stack_ffffffd0;
  
  __lock_file(_File);
  iVar1 = __fseeki64_nolock(_File,_Offset,in_stack_ffffffd0);
  FUN_00999870();
  return iVar1;
}



void FUN_00999870(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}



undefined * FUN_0099987a(void)

{
  return &DAT_00b31ee8;
}



undefined ** FUN_00999880(void)

{
  return &PTR_s_No_error_00b31e38;
}



/* Library Function - Single Match
    ___dtold
   
   Library: Visual Studio 2005 Release */

void ___dtold(uint *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint local_8;
  
  uVar2 = *(ushort *)((int)param_2 + 6) >> 4;
  uVar4 = *(ushort *)((int)param_2 + 6) & 0x8000;
  uVar3 = uVar2 & 0x7ff;
  uVar1 = *param_2;
  local_8 = 0x80000000;
  if ((uVar2 & 0x7ff) == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar1 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      goto LAB_00999938;
    }
    uVar3 = uVar3 + 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    uVar3 = 0x7fff;
  }
  else {
    uVar3 = uVar3 + 0x3c00;
  }
  param_1[1] = uVar1 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  *param_1 = uVar1 << 0xb;
  while (local_8 == 0) {
    uVar1 = param_1[1];
    uVar3 = uVar3 - 1;
    param_1[1] = uVar1 * 2 | *param_1 >> 0x1f;
    *param_1 = *param_1 * 2;
    local_8 = uVar1 * 2 & 0x80000000;
  }
  uVar4 = uVar4 | uVar3;
LAB_00999938:
  *(ushort *)(param_1 + 2) = uVar4;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __fltout2
   
   Library: Visual Studio 2005 Release */

STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

{
  int iVar1;
  errno_t eVar2;
  undefined4 in_stack_ffffffb0;
  undefined2 uVar3;
  short local_30;
  char local_2e;
  char local_2c [24];
  undefined4 local_14;
  undefined4 uStack_10;
  undefined2 uStack_c;
  uint local_8;
  
  uVar3 = (undefined2)((uint)in_stack_ffffffb0 >> 0x10);
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  ___dtold(&local_14,&_Dbl);
  iVar1 = _I10_OUTPUT(local_14,uStack_10,CONCAT22(uVar3,uStack_c),0x11,0,&local_30);
  _Flt->flag = iVar1;
  _Flt->sign = (int)local_2e;
  _Flt->decpt = (int)local_30;
  eVar2 = _strcpy_s(_ResultStr,_SizeInBytes,local_2c);
  if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  _Flt->mantissa = _ResultStr;
  return _Flt;
}



/* Library Function - Multiple Matches With Different Base Names
    __time32
    _time
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

__time32_t __cdecl FID_conflict___time32(__time32_t *_Time)

{
  __time32_t _Var1;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  _Var1 = __aulldiv(local_c.dwLowDateTime + 0x2ac18000,
                    local_c.dwHighDateTime + 0xfe624e21 + (uint)(0xd53e7fff < local_c.dwLowDateTime)
                    ,10000000,0);
  if (_Time != (__time32_t *)0x0) {
    *_Time = _Var1;
  }
  return _Var1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

long ___ansicp(LCID param_1)

{
  int iVar1;
  long lVar2;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 == 0) {
    lVar2 = -1;
  }
  else {
    lVar2 = _atol(local_10);
  }
  return lVar2;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___convertcp
   
   Library: Visual Studio 2005 Release */

LPSTR ___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6)

{
  uint _Size;
  uint cbMultiByte;
  bool bVar1;
  BOOL BVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  LPSTR local_24;
  LPCWSTR local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  local_24 = (LPSTR)0x0;
  bVar1 = false;
  if (param_1 == param_2) {
    return (LPSTR)0x0;
  }
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) {
      return (LPSTR)0x0;
    }
  }
  else {
    bVar1 = true;
    uVar6 = cbMultiByte;
    if (cbMultiByte == 0xffffffff) {
      sVar3 = _strlen(param_3);
      uVar6 = sVar3 + 1;
    }
    bVar7 = uVar6 == 0;
  }
  if ((bVar7 || (int)uVar6 < 0) || (0x7ffffff0 < uVar6)) {
    local_20 = (LPCWSTR)0x0;
  }
  else {
    _Size = uVar6 * 2 + 8;
    if (_Size < 0x401) {
      puVar4 = (undefined4 *)&stack0xffffffbc;
      local_20 = (LPCWSTR)&stack0xffffffbc;
      if (&stack0x00000000 == (undefined1 *)0x44) goto LAB_00999b3a;
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 == (undefined4 *)0x0) goto LAB_00999b3a;
      *puVar4 = 0xdddd;
    }
    local_20 = (LPCWSTR)(puVar4 + 2);
  }
LAB_00999b3a:
  if (local_20 == (LPCWSTR)0x0) {
    return (LPSTR)0x0;
  }
  _memset(local_20,0,uVar6 * 2);
  iVar5 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,local_20,uVar6);
  if (iVar5 != 0) {
    if (param_5 == (LPSTR)0x0) {
      if (((bVar1) ||
          (uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                      ), uVar6 != 0)) &&
         (local_24 = __calloc_crt(1,uVar6), local_24 != (LPSTR)0x0)) {
        uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,local_24,uVar6,(LPCSTR)0x0,(LPBOOL)0x0)
        ;
        if (uVar6 == 0) {
          _free(local_24);
          local_24 = (LPSTR)0x0;
        }
        else if (cbMultiByte != 0xffffffff) {
          *param_4 = uVar6;
        }
      }
    }
    else {
      iVar5 = WideCharToMultiByte(param_2,0,local_20,uVar6,param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar5 != 0) {
        local_24 = param_5;
      }
    }
  }
  __freea(local_20);
  return local_24;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeA_stat(struct localeinfo_struct *,unsigned long,char const
   *,int,unsigned short *,int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetStringTypeA_stat
          (localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,
          int param_6,int param_7,int param_8)

{
  uint _Size;
  BOOL BVar1;
  DWORD DVar2;
  uint cchWideChar;
  undefined4 *puVar3;
  int cchSrc;
  ushort *puVar4;
  int *in_ECX;
  LPCWSTR lpWideCharStr;
  void *_Memory;
  BOOL local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  if (DAT_00baa75c == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_00baa75c = 2;
      }
      goto LAB_00999c5a;
    }
    DAT_00baa75c = 1;
  }
  else {
LAB_00999c5a:
    if ((DAT_00baa75c == 2) || (DAT_00baa75c == 0)) {
      _Memory = (void *)0x0;
      if (param_6 == 0) {
        param_6 = *(int *)(*in_ECX + 0x14);
      }
      if (param_5 == (ushort *)0x0) {
        param_5 = *(ushort **)(*in_ECX + 4);
      }
      puVar4 = (ushort *)___ansicp(param_6);
      if (puVar4 == (ushort *)0xffffffff) {
        return 0;
      }
      if ((puVar4 != param_5) &&
         (_Memory = (void *)___convertcp(param_5,puVar4,param_2,&param_3,0,0),
         param_2 = (ulong)_Memory, _Memory == (void *)0x0)) {
        return 0;
      }
      BVar1 = GetStringTypeA(param_6,(DWORD)param_1,(LPCSTR)param_2,(int)param_3,(LPWORD)param_4);
      if (_Memory != (void *)0x0) {
        _free(_Memory);
        return BVar1;
      }
      return BVar1;
    }
    if (DAT_00baa75c != 1) {
      return 0;
    }
  }
  local_c = 0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) {
    return 0;
  }
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 == (undefined1 *)0x18) goto LAB_00999cef;
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 == (undefined4 *)0x0) goto LAB_00999cef;
      *puVar3 = 0xdddd;
    }
    lpWideCharStr = (LPCWSTR)(puVar3 + 2);
  }
LAB_00999cef:
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  _memset(lpWideCharStr,0,cchWideChar * 2);
  cchSrc = MultiByteToWideChar((UINT)param_5,1,(LPCSTR)param_2,(int)param_3,lpWideCharStr,
                               cchWideChar);
  if (cchSrc != 0) {
    local_c = GetStringTypeW((DWORD)param_1,lpWideCharStr,cchSrc,(LPWORD)param_4);
  }
  __freea(lpWideCharStr);
  return local_c;
}



/* Library Function - Single Match
    ___crtGetStringTypeA
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_00000020;
  int in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtGetStringTypeA_stat
                    ((localeinfo_struct *)_DWInfoType,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpCharType,(ushort *)_Code_page,_BError,in_stack_00000020,
                     in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __calloc_impl
   
   Library: Visual Studio 2005 Release */

void * __calloc_impl(uint param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  void *_Dst;
  uint dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    param_1 = param_1 * param_2;
    dwBytes = param_1;
    if (param_1 == 0) {
      dwBytes = 1;
    }
    do {
      _Dst = (void *)0x0;
      if (dwBytes < 0xffffffe1) {
        if ((DAT_00baabc0 == 3) && (dwBytes = dwBytes + 0xf & 0xfffffff0, param_1 <= DAT_00baabcc))
        {
          __lock(4);
          _Dst = (void *)___sbh_alloc_block(param_1);
          FUN_00999ef5();
          if (_Dst != (void *)0x0) {
            _memset(_Dst,0,param_1);
            goto LAB_00999eaa;
          }
        }
        else {
LAB_00999eaa:
          if (_Dst != (void *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_00baa2ac,8,dwBytes);
      }
      if (_Dst != (void *)0x0) {
        return _Dst;
      }
      if (DAT_00baa5c8 == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return (void *)0x0;
        }
        *param_3 = 0xc;
        return (void *)0x0;
      }
      iVar2 = __callnewh(dwBytes);
    } while (iVar2 != 0);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xc;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0xc;
    __invalid_parameter(0,0,0,0,0);
  }
  return (void *)0x0;
}



void FUN_00999ef5(void)

{
  FUN_0098c8fb(4);
  return;
}



/* Library Function - Single Match
    _calloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int local_8;
  
  local_8 = 0;
  pvVar2 = (void *)__calloc_impl(_Count,_Size,&local_8);
  iVar1 = local_8;
  if (((pvVar2 == (void *)0x0) && (local_8 != 0)) && (piVar3 = __errno(), piVar3 != (int *)0x0)) {
    piVar3 = __errno();
    *piVar3 = iVar1;
  }
  return pvVar2;
}



/* Library Function - Single Match
    __get_lc_time
   
   Library: Visual Studio 2005 Release */

uint __get_lc_time(void)

{
  LPCWSTR pWVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  void *unaff_ESI;
  localeinfo_struct local_14;
  LPCWSTR local_c;
  LPCWSTR local_8;
  
  local_8 = (LPCWSTR)(uint)*(ushort *)(in_EAX + 0x42);
  local_c = (LPCWSTR)(uint)*(ushort *)(in_EAX + 0x44);
  if (unaff_ESI == (void *)0x0) {
    return 0xffffffff;
  }
  local_14.mbcinfo = (pthreadmbcinfo)0x0;
  uVar2 = ___getlocaleinfo(&local_14,1,local_8,0x31,(void *)((int)unaff_ESI + 4));
  uVar3 = ___getlocaleinfo(&local_14,1,local_8,0x32,(void *)((int)unaff_ESI + 8));
  uVar4 = ___getlocaleinfo(&local_14,1,local_8,0x33,(void *)((int)unaff_ESI + 0xc));
  uVar5 = ___getlocaleinfo(&local_14,1,local_8,0x34,(void *)((int)unaff_ESI + 0x10));
  uVar6 = ___getlocaleinfo(&local_14,1,local_8,0x35,(void *)((int)unaff_ESI + 0x14));
  uVar7 = ___getlocaleinfo(&local_14,1,local_8,0x36,(void *)((int)unaff_ESI + 0x18));
  uVar8 = ___getlocaleinfo(&local_14,1,local_8,0x37,unaff_ESI);
  uVar9 = ___getlocaleinfo(&local_14,1,local_8,0x2a,(void *)((int)unaff_ESI + 0x20));
  uVar10 = ___getlocaleinfo(&local_14,1,local_8,0x2b,(void *)((int)unaff_ESI + 0x24));
  uVar11 = ___getlocaleinfo(&local_14,1,local_8,0x2c,(void *)((int)unaff_ESI + 0x28));
  uVar12 = ___getlocaleinfo(&local_14,1,local_8,0x2d,(void *)((int)unaff_ESI + 0x2c));
  uVar13 = ___getlocaleinfo(&local_14,1,local_8,0x2e,(void *)((int)unaff_ESI + 0x30));
  uVar14 = ___getlocaleinfo(&local_14,1,local_8,0x2f,(void *)((int)unaff_ESI + 0x34));
  uVar15 = ___getlocaleinfo(&local_14,1,local_8,0x30,(void *)((int)unaff_ESI + 0x1c));
  uVar16 = ___getlocaleinfo(&local_14,1,local_8,0x44,(void *)((int)unaff_ESI + 0x38));
  uVar17 = ___getlocaleinfo(&local_14,1,local_8,0x45,(void *)((int)unaff_ESI + 0x3c));
  uVar18 = ___getlocaleinfo(&local_14,1,local_8,0x46,(void *)((int)unaff_ESI + 0x40));
  uVar19 = ___getlocaleinfo(&local_14,1,local_8,0x47,(void *)((int)unaff_ESI + 0x44));
  uVar20 = ___getlocaleinfo(&local_14,1,local_8,0x48,(void *)((int)unaff_ESI + 0x48));
  uVar21 = ___getlocaleinfo(&local_14,1,local_8,0x49,(void *)((int)unaff_ESI + 0x4c));
  uVar22 = ___getlocaleinfo(&local_14,1,local_8,0x4a,(void *)((int)unaff_ESI + 0x50));
  uVar23 = ___getlocaleinfo(&local_14,1,local_8,0x4b,(void *)((int)unaff_ESI + 0x54));
  uVar24 = ___getlocaleinfo(&local_14,1,local_8,0x4c,(void *)((int)unaff_ESI + 0x58));
  uVar25 = ___getlocaleinfo(&local_14,1,local_8,0x4d,(void *)((int)unaff_ESI + 0x5c));
  uVar26 = ___getlocaleinfo(&local_14,1,local_8,0x4e,(void *)((int)unaff_ESI + 0x60));
  uVar27 = ___getlocaleinfo(&local_14,1,local_8,0x4f,(void *)((int)unaff_ESI + 100));
  uVar28 = ___getlocaleinfo(&local_14,1,local_8,0x38,(void *)((int)unaff_ESI + 0x68));
  uVar29 = ___getlocaleinfo(&local_14,1,local_8,0x39,(void *)((int)unaff_ESI + 0x6c));
  uVar30 = ___getlocaleinfo(&local_14,1,local_8,0x3a,(void *)((int)unaff_ESI + 0x70));
  uVar31 = ___getlocaleinfo(&local_14,1,local_8,0x3b,(void *)((int)unaff_ESI + 0x74));
  uVar32 = ___getlocaleinfo(&local_14,1,local_8,0x3c,(void *)((int)unaff_ESI + 0x78));
  uVar33 = ___getlocaleinfo(&local_14,1,local_8,0x3d,(void *)((int)unaff_ESI + 0x7c));
  uVar34 = ___getlocaleinfo(&local_14,1,local_8,0x3e,(void *)((int)unaff_ESI + 0x80));
  uVar35 = ___getlocaleinfo(&local_14,1,local_8,0x3f,(void *)((int)unaff_ESI + 0x84));
  uVar36 = ___getlocaleinfo(&local_14,1,local_8,0x40,(void *)((int)unaff_ESI + 0x88));
  uVar37 = ___getlocaleinfo(&local_14,1,local_8,0x41,(void *)((int)unaff_ESI + 0x8c));
  uVar38 = ___getlocaleinfo(&local_14,1,local_8,0x42,(void *)((int)unaff_ESI + 0x90));
  uVar39 = ___getlocaleinfo(&local_14,1,local_8,0x43,(void *)((int)unaff_ESI + 0x94));
  uVar40 = ___getlocaleinfo(&local_14,1,local_8,0x28,(void *)((int)unaff_ESI + 0x98));
  uVar41 = ___getlocaleinfo(&local_14,1,local_8,0x29,(void *)((int)unaff_ESI + 0x9c));
  uVar42 = ___getlocaleinfo(&local_14,1,local_c,0x1f,(void *)((int)unaff_ESI + 0xa0));
  uVar43 = ___getlocaleinfo(&local_14,1,local_c,0x20,(void *)((int)unaff_ESI + 0xa4));
  uVar44 = ___getlocaleinfo(&local_14,1,local_c,0x1003,(void *)((int)unaff_ESI + 0xa8));
  pWVar1 = local_c;
  uVar45 = ___getlocaleinfo(&local_14,0,local_c,0x1009,(void *)((int)unaff_ESI + 0xb0));
  *(LPCWSTR *)((int)unaff_ESI + 0xac) = pWVar1;
  return uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 |
         uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 | uVar22 |
         uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 | uVar32 |
         uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 | uVar41 | uVar42 |
         uVar43 | uVar44 | uVar45;
}



/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2005 Release */

void ___free_lc_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    _free((void *)param_1[1]);
    _free((void *)param_1[2]);
    _free((void *)param_1[3]);
    _free((void *)param_1[4]);
    _free((void *)param_1[5]);
    _free((void *)param_1[6]);
    _free((void *)*param_1);
    _free((void *)param_1[8]);
    _free((void *)param_1[9]);
    _free((void *)param_1[10]);
    _free((void *)param_1[0xb]);
    _free((void *)param_1[0xc]);
    _free((void *)param_1[0xd]);
    _free((void *)param_1[7]);
    _free((void *)param_1[0xe]);
    _free((void *)param_1[0xf]);
    _free((void *)param_1[0x10]);
    _free((void *)param_1[0x11]);
    _free((void *)param_1[0x12]);
    _free((void *)param_1[0x13]);
    _free((void *)param_1[0x14]);
    _free((void *)param_1[0x15]);
    _free((void *)param_1[0x16]);
    _free((void *)param_1[0x17]);
    _free((void *)param_1[0x18]);
    _free((void *)param_1[0x19]);
    _free((void *)param_1[0x1a]);
    _free((void *)param_1[0x1b]);
    _free((void *)param_1[0x1c]);
    _free((void *)param_1[0x1d]);
    _free((void *)param_1[0x1e]);
    _free((void *)param_1[0x1f]);
    _free((void *)param_1[0x20]);
    _free((void *)param_1[0x21]);
    _free((void *)param_1[0x22]);
    _free((void *)param_1[0x23]);
    _free((void *)param_1[0x24]);
    _free((void *)param_1[0x25]);
    _free((void *)param_1[0x26]);
    _free((void *)param_1[0x27]);
    _free((void *)param_1[0x28]);
    _free((void *)param_1[0x29]);
    _free((void *)param_1[0x2a]);
  }
  return;
}



/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  undefined **ppuVar1;
  undefined **_Memory;
  int iVar2;
  int **ppiVar3;
  
  if (_LocInfo->lc_category[1].locale == (char *)0x0) {
    _Memory = &PTR_DAT_00b31ef0;
  }
  else {
    _Memory = __calloc_crt(1,0xb8);
    if (_Memory == (undefined **)0x0) {
      return 1;
    }
    iVar2 = __get_lc_time();
    if (iVar2 != 0) {
      ___free_lc_time(_Memory);
      _free(_Memory);
      return 1;
    }
    _Memory[0x2d] = (undefined *)0x1;
  }
  ppiVar3 = &_LocInfo[1].lc_category[0].wrefcount;
  ppuVar1 = (undefined **)*ppiVar3;
  if (ppuVar1 != &PTR_DAT_00b31ef0) {
    InterlockedDecrement((LONG *)(ppuVar1 + 0x2d));
  }
  *ppiVar3 = (int *)_Memory;
  return 0;
}



/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_00b30db4) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_00b30db8) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_00b30dbc) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}



/* Library Function - Single Match
    ___init_numeric
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_numeric(threadlocinfo *_LocInfo)

{
  char *pcVar1;
  char cVar2;
  threadlocinfo *ptVar3;
  threadlocinfo *_Address;
  uint uVar4;
  char *pcVar5;
  LONG LVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  threadlocinfo *ptVar10;
  LPCWSTR _LocaleName;
  localeinfo_struct local_1c;
  uint *local_14;
  uint local_10;
  wchar_t *local_c;
  wchar_t *local_8;
  
  ptVar3 = _LocInfo;
  local_1c.locinfo = _LocInfo;
  local_1c.mbcinfo = (pthreadmbcinfo)0x0;
  if ((_LocInfo->lc_category[0].wrefcount == (int *)0x0) &&
     (_LocInfo->lc_category[0].refcount == (int *)0x0)) {
    local_8 = (wchar_t *)0x0;
    local_c = (wchar_t *)0x0;
    _LocInfo = (threadlocinfo *)&PTR_DAT_00b30db4;
LAB_0099a71c:
    if (ptVar3->locale_name[5] != (wchar_t *)0x0) {
      InterlockedDecrement((LONG *)ptVar3->locale_name[5]);
    }
    if ((ptVar3->locale_name[4] != (wchar_t *)0x0) &&
       (LVar6 = InterlockedDecrement((LONG *)ptVar3->locale_name[4]), LVar6 == 0)) {
      _free(ptVar3->locale_name[4]);
      _free((void *)ptVar3[1].lc_codepage);
    }
    ptVar3->locale_name[5] = local_8;
    ptVar3->locale_name[4] = local_c;
    ptVar3[1].lc_codepage = (uint)_LocInfo;
    iVar7 = 0;
  }
  else {
    _Address = __calloc_crt(1,0x30);
    if (_Address != (threadlocinfo *)0x0) {
      piVar8 = (int *)_LocInfo[1].lc_codepage;
      ptVar10 = _Address;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        ptVar10->refcount = *piVar8;
        piVar8 = piVar8 + 1;
        ptVar10 = (threadlocinfo *)&ptVar10->lc_codepage;
      }
      local_c = __malloc_crt(4);
      if (local_c != (wchar_t *)0x0) {
        local_c[0] = L'\0';
        local_c[1] = L'\0';
        if (_LocInfo->lc_category[0].wrefcount == (int *)0x0) {
          _Address->refcount = (int)PTR_DAT_00b30db4;
          _Address->lc_codepage = (uint)PTR_DAT_00b30db8;
          local_8 = (wchar_t *)0x0;
          _Address->lc_collate_cp = (uint)PTR_DAT_00b30dbc;
        }
        else {
          local_8 = __malloc_crt(4);
          if (local_8 == (wchar_t *)0x0) {
            iVar7 = 1;
LAB_0099a642:
            _free(_Address);
            _free(local_c);
            return iVar7;
          }
          local_8[0] = L'\0';
          local_8[1] = L'\0';
          _LocaleName = (LPCWSTR)(uint)*(ushort *)((int)&_LocInfo->lc_category[2].wrefcount + 2);
          local_10 = ___getlocaleinfo(&local_1c,1,_LocaleName,0xe,_Address);
          uVar4 = ___getlocaleinfo(&local_1c,1,_LocaleName,0xf,&_Address->lc_codepage);
          local_10 = local_10 | uVar4;
          local_14 = &_Address->lc_collate_cp;
          iVar7 = ___getlocaleinfo(&local_1c,1,_LocaleName,0x10,local_14);
          if (iVar7 != 0 || local_10 != 0) {
            ___free_lconv_num(_Address);
            iVar7 = -1;
            goto LAB_0099a642;
          }
          pcVar5 = (char *)*local_14;
          while (*pcVar5 != '\0') {
            cVar2 = *pcVar5;
            if ((cVar2 < '0') || ('9' < cVar2)) {
              pcVar9 = pcVar5;
              if (cVar2 != ';') goto LAB_0099a6cc;
              do {
                pcVar1 = pcVar9 + 1;
                *pcVar9 = *pcVar1;
                pcVar9 = pcVar1;
              } while (*pcVar1 != '\0');
            }
            else {
              *pcVar5 = cVar2 + -0x30;
LAB_0099a6cc:
              pcVar5 = pcVar5 + 1;
            }
          }
        }
        local_c[0] = L'\x01';
        local_c[1] = L'\0';
        _LocInfo = _Address;
        if (local_8 != (wchar_t *)0x0) {
          local_8[0] = L'\x01';
          local_8[1] = L'\0';
        }
        goto LAB_0099a71c;
      }
      _free(_Address);
    }
    iVar7 = 1;
  }
  return iVar7;
}



/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_00b30dc0) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_00b30dc4) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_00b30dc8) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_00b30dcc) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_00b30dd0) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_00b30dd4) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_00b30dd8) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}



/* Library Function - Single Match
    ___init_monetary
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_monetary(threadlocinfo *_LocInfo)

{
  char *pcVar1;
  char cVar2;
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
  char *pcVar17;
  uint *puVar18;
  LONG LVar19;
  int iVar20;
  undefined **_Memory;
  LPCWSTR _LocaleName;
  char *pcVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  localeinfo_struct local_14;
  wchar_t *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_14.locinfo = _LocInfo;
  local_14.mbcinfo = (pthreadmbcinfo)0x0;
  if ((_LocInfo->lc_category[0].refcount == (int *)0x0) &&
     (_LocInfo->lc_category[0].wrefcount == (int *)0x0)) {
    local_8 = (undefined4 *)0x0;
    local_c = (wchar_t *)0x0;
    _Memory = &PTR_DAT_00b30db4;
LAB_0099aa6a:
    if ((LONG *)_LocInfo[1].refcount != (LONG *)0x0) {
      InterlockedDecrement((LONG *)_LocInfo[1].refcount);
    }
    if ((_LocInfo->locale_name[4] != (wchar_t *)0x0) &&
       (LVar19 = InterlockedDecrement((LONG *)_LocInfo->locale_name[4]), LVar19 == 0)) {
      _free((void *)_LocInfo[1].lc_codepage);
      _free(_LocInfo->locale_name[4]);
    }
    _LocInfo[1].refcount = (int)local_8;
    _LocInfo->locale_name[4] = local_c;
    _LocInfo[1].lc_codepage = (uint)_Memory;
    iVar20 = 0;
  }
  else {
    _Memory = __calloc_crt(1,0x30);
    if (_Memory != (undefined **)0x0) {
      local_c = __malloc_crt(4);
      if (local_c == (wchar_t *)0x0) {
        _free(_Memory);
      }
      else {
        local_c[0] = L'\0';
        local_c[1] = L'\0';
        if (_LocInfo->lc_category[0].refcount == (int *)0x0) {
          ppuVar22 = &PTR_DAT_00b30db4;
          ppuVar23 = _Memory;
          for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
            *ppuVar23 = *ppuVar22;
            ppuVar22 = ppuVar22 + 1;
            ppuVar23 = ppuVar23 + 1;
          }
LAB_0099aa35:
          puVar18 = &_LocInfo[1].lc_codepage;
          *_Memory = *(undefined **)*puVar18;
          _Memory[1] = *(undefined **)(*puVar18 + 4);
          _Memory[2] = *(undefined **)(*puVar18 + 8);
          local_c[0] = L'\x01';
          local_c[1] = L'\0';
          if (local_8 != (undefined4 *)0x0) {
            *local_8 = 1;
          }
          goto LAB_0099aa6a;
        }
        local_8 = __malloc_crt(4);
        if (local_8 == (undefined4 *)0x0) {
          _free(_Memory);
          _free(local_c);
        }
        else {
          *local_8 = 0;
          _LocaleName = (LPCWSTR)(uint)*(ushort *)&_LocInfo->lc_category[2].refcount;
          iVar20 = ___getlocaleinfo(&local_14,1,_LocaleName,0x15,_Memory + 3);
          iVar3 = ___getlocaleinfo(&local_14,1,_LocaleName,0x14,_Memory + 4);
          iVar4 = ___getlocaleinfo(&local_14,1,_LocaleName,0x16,_Memory + 5);
          iVar5 = ___getlocaleinfo(&local_14,1,_LocaleName,0x17,_Memory + 6);
          iVar6 = ___getlocaleinfo(&local_14,1,_LocaleName,0x18,_Memory + 7);
          iVar7 = ___getlocaleinfo(&local_14,1,_LocaleName,0x50,_Memory + 8);
          iVar8 = ___getlocaleinfo(&local_14,1,_LocaleName,0x51,_Memory + 9);
          iVar9 = ___getlocaleinfo(&local_14,0,_LocaleName,0x1a,_Memory + 10);
          iVar10 = ___getlocaleinfo(&local_14,0,_LocaleName,0x19,(void *)((int)_Memory + 0x29));
          iVar11 = ___getlocaleinfo(&local_14,0,_LocaleName,0x54,(void *)((int)_Memory + 0x2a));
          iVar12 = ___getlocaleinfo(&local_14,0,_LocaleName,0x55,(void *)((int)_Memory + 0x2b));
          iVar13 = ___getlocaleinfo(&local_14,0,_LocaleName,0x56,_Memory + 0xb);
          iVar14 = ___getlocaleinfo(&local_14,0,_LocaleName,0x57,(void *)((int)_Memory + 0x2d));
          iVar15 = ___getlocaleinfo(&local_14,0,_LocaleName,0x52,(void *)((int)_Memory + 0x2e));
          iVar16 = ___getlocaleinfo(&local_14,0,_LocaleName,0x53,(void *)((int)_Memory + 0x2f));
          if (iVar16 == 0 &&
              (((((((((((((iVar20 == 0 && iVar3 == 0) && iVar4 == 0) && iVar5 == 0) && iVar6 == 0)
                      && iVar7 == 0) && iVar8 == 0) && iVar9 == 0) && iVar10 == 0) && iVar11 == 0)
                 && iVar12 == 0) && iVar13 == 0) && iVar14 == 0) && iVar15 == 0)) {
            pcVar17 = _Memory[7];
            while (*pcVar17 != '\0') {
              cVar2 = *pcVar17;
              if ((cVar2 < '0') || ('9' < cVar2)) {
                pcVar21 = pcVar17;
                if (cVar2 != ';') goto LAB_0099aa0a;
                do {
                  pcVar1 = pcVar21 + 1;
                  *pcVar21 = *pcVar1;
                  pcVar21 = pcVar1;
                } while (*pcVar1 != '\0');
              }
              else {
                *pcVar17 = cVar2 + -0x30;
LAB_0099aa0a:
                pcVar17 = pcVar17 + 1;
              }
            }
            goto LAB_0099aa35;
          }
          ___free_lconv_mon(_Memory);
          _free(_Memory);
          _free(local_c);
          _free(local_8);
        }
      }
    }
    iVar20 = 1;
  }
  return iVar20;
}



/* Library Function - Single Match
    _TranslateName
   
   Library: Visual Studio 2005 Release */

bool _TranslateName(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = 0;
  iVar2 = 1;
  if (-1 < param_2) {
    do {
      bVar5 = iVar2 == 0;
      iVar2 = 0;
      if (bVar5) break;
      iVar4 = (param_2 + iVar3) / 2;
      puVar1 = (undefined4 *)(param_1 + iVar4 * 8);
      iVar2 = __stricmp((char *)*param_3,(char *)*puVar1);
      if (iVar2 == 0) {
        *param_3 = puVar1 + 1;
      }
      else if (iVar2 < 0) {
        param_2 = iVar4 + -1;
      }
      else {
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= param_2);
  }
  return iVar2 == 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _ProcessCodePage
   
   Library: Visual Studio 2005 Release */

void _ProcessCodePage(void)

{
  int iVar1;
  CHAR *in_ECX;
  int unaff_EDI;
  LCTYPE LCType;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  if (((in_ECX == (char *)0x0) || (*in_ECX == '\0')) || (iVar1 = _strcmp(in_ECX,"ACP"), iVar1 == 0))
  {
    LCType = 0x1004;
  }
  else {
    iVar1 = _strcmp(in_ECX,"OCP");
    if (iVar1 != 0) goto LAB_0099ab8a;
    LCType = 0xb;
  }
  iVar1 = GetLocaleInfoA(*(LCID *)(unaff_EDI + 0x1c),LCType,local_10,8);
  if (iVar1 == 0) {
    return;
  }
  in_ECX = local_10;
LAB_0099ab8a:
  _atol(in_ECX);
  return;
}



/* Library Function - Single Match
    _TestDefaultCountry
   
   Library: Visual Studio 2005 Release */

undefined4 _TestDefaultCountry(short param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == *(short *)((int)&DAT_00ab07a8 + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}



/* Library Function - Single Match
    _LcidFromHexString
   
   Library: Visual Studio 2005 Release */

int _LcidFromHexString(void)

{
  char cVar1;
  char *in_EDX;
  int iVar2;
  
  iVar2 = 0;
  while (cVar1 = *in_EDX, cVar1 != '\0') {
    in_EDX = in_EDX + 1;
    if ((byte)(cVar1 + 0x9fU) < 6) {
      cVar1 = cVar1 + -0x27;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      cVar1 = cVar1 + -7;
    }
    iVar2 = iVar2 * 0x10 + -0x30 + (int)cVar1;
  }
  return iVar2;
}



/* Library Function - Single Match
    _GetPrimaryLen
   
   Library: Visual Studio 2005 Release */

int _GetPrimaryLen(void)

{
  char cVar1;
  int iVar2;
  char *in_EDX;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = *in_EDX;
    in_EDX = in_EDX + 1;
    if (((cVar1 < 'A') || ('Z' < cVar1)) && (0x19 < (byte)(cVar1 + 0x9fU))) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _CountryEnumProc@4
   
   Library: Visual Studio 2005 Release */

uint _CountryEnumProc_4(void)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  uint uVar4;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  Locale = _LcidFromHexString();
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
    uVar4 = 1;
  }
  else {
    iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
    if (iVar3 == 0) {
      iVar3 = _TestDefaultCountry(Locale);
      if (iVar3 != 0) {
        piVar1 = &(p_Var2->_setloc_data).iLocState;
        *piVar1 = *piVar1 | 4;
        *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
        (p_Var2->_setloc_data)._cachecp = Locale;
      }
    }
    uVar4 = ~((uint)(p_Var2->_setloc_data).iLocState >> 2) & 1;
  }
  return uVar4;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _TestDefaultLanguage
   
   Library: Visual Studio 2005 Release */

undefined4 _TestDefaultLanguage(uint param_1,int param_2)

{
  char *_Str;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  size_t sVar4;
  size_t sVar5;
  undefined4 *in_ECX;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  iVar1 = GetLocaleInfoA(param_1 & 0x3ff | 0x400,1,local_80,0x78);
  if (iVar1 == 0) {
LAB_0099acd2:
    uVar2 = 0;
  }
  else {
    uVar3 = _LcidFromHexString();
    if ((param_1 != uVar3) && (param_2 != 0)) {
      _Str = (char *)*in_ECX;
      sVar4 = _GetPrimaryLen();
      sVar5 = _strlen(_Str);
      if (sVar4 == sVar5) goto LAB_0099acd2;
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _LangCountryEnumProc@4
   
   Library: Visual Studio 2005 Release */

uint _LangCountryEnumProc_4(void)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  size_t sVar4;
  _setloc_struct *p_Var5;
  undefined8 uVar6;
  undefined4 uVar7;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  p_Var5 = &p_Var2->_setloc_data;
  Locale = _LcidFromHexString();
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) goto LAB_0099ad62;
  iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
  if (iVar3 == 0) {
    iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002
                                  ) + 0x1001,local_80,0x78);
    if (iVar3 == 0) goto LAB_0099ad62;
    iVar3 = __stricmp((char *)p_Var5->pchLanguage,local_80);
    if (iVar3 == 0) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 0x304;
      (p_Var2->_setloc_data)._cachecp = Locale;
LAB_0099ae12:
      *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
    }
    else if (((p_Var2->_setloc_data).iLocState & 2) == 0) {
      sVar4 = (p_Var2->_setloc_data).iPrimaryLen;
      if ((sVar4 == 0) ||
         (iVar3 = __strnicmp((char *)p_Var5->pchLanguage,local_80,sVar4), iVar3 != 0)) {
        if (((p_Var2->_setloc_data).iLocState & 1U) == 0) {
          uVar6 = _TestDefaultCountry(Locale);
          if ((int)uVar6 != 0) {
            (p_Var2->_setloc_data).iLocState = (uint)((ulonglong)uVar6 >> 0x20) | 1;
            goto LAB_0099ae12;
          }
        }
      }
      else {
        piVar1 = &(p_Var2->_setloc_data).iLocState;
        *piVar1 = *piVar1 | 2;
        *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
        sVar4 = _strlen((char *)p_Var5->pchLanguage);
        if (sVar4 == (p_Var2->_setloc_data).iPrimaryLen) {
          (p_Var2->_setloc_data)._cachecp = Locale;
        }
      }
    }
  }
  if (((p_Var2->_setloc_data).iLocState & 0x300U) == 0x300) goto LAB_0099aec5;
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) {
LAB_0099ad62:
    (p_Var2->_setloc_data).iLocState = 0;
    return 1;
  }
  iVar3 = __stricmp((char *)p_Var5->pchLanguage,local_80);
  if (iVar3 == 0) {
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x200;
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      if (((p_Var2->_setloc_data).iPrimaryLen != 0) &&
         (sVar4 = _strlen((char *)p_Var5->pchLanguage), sVar4 == (p_Var2->_setloc_data).iPrimaryLen)
         ) {
        uVar7 = 1;
        goto LAB_0099aea8;
      }
      goto LAB_0099aeb6;
    }
    (p_Var2->_setloc_data).iLocState = (p_Var2->_setloc_data).iLocState | 0x100;
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)p_Var5->pchLanguage,local_80), iVar3 != 0)) goto LAB_0099aec5;
    uVar7 = 0;
LAB_0099aea8:
    iVar3 = _TestDefaultLanguage(Locale,uVar7);
    if (iVar3 == 0) goto LAB_0099aec5;
LAB_0099aeb6:
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x100;
  }
  if ((p_Var2->_setloc_data)._cachecp == 0) {
    (p_Var2->_setloc_data)._cachecp = Locale;
  }
LAB_0099aec5:
  return ~((uint)(p_Var2->_setloc_data).iLocState >> 2) & 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _LanguageEnumProc@4
   
   Library: Visual Studio 2005 Release */

uint _LanguageEnumProc_4(void)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  undefined4 uVar4;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  Locale = _LcidFromHexString();
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
    return 1;
  }
  iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchLanguage,local_80);
  if (iVar3 == 0) {
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      uVar4 = 1;
      goto LAB_0099af6d;
    }
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchLanguage,local_80), iVar3 != 0))
    goto LAB_0099af85;
    uVar4 = 0;
LAB_0099af6d:
    iVar3 = _TestDefaultLanguage(Locale,uVar4);
    if (iVar3 == 0) goto LAB_0099af85;
  }
  piVar1 = &(p_Var2->_setloc_data).iLocState;
  *piVar1 = *piVar1 | 4;
  (p_Var2->_setloc_data)._cachecp = Locale;
  *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
LAB_0099af85:
  return ~((uint)(p_Var2->_setloc_data).iLocState >> 2) & 1;
}



/* Library Function - Single Match
    _GetLcidFromLangCountry
   
   Library: Visual Studio 2005 Release */

void _GetLcidFromLangCountry(void)

{
  uint uVar1;
  size_t sVar2;
  undefined4 uVar3;
  undefined4 *unaff_ESI;
  
  sVar2 = _strlen((char *)*unaff_ESI);
  unaff_ESI[4] = (uint)(sVar2 == 3);
  sVar2 = _strlen((char *)unaff_ESI[1]);
  unaff_ESI[6] = 0;
  unaff_ESI[5] = (uint)(sVar2 == 3);
  if (unaff_ESI[4] == 0) {
    uVar3 = _GetPrimaryLen();
  }
  else {
    uVar3 = 2;
  }
  unaff_ESI[3] = uVar3;
  EnumSystemLocalesA(_LangCountryEnumProc_4,1);
  uVar1 = unaff_ESI[2];
  if ((((uVar1 & 0x100) == 0) || ((uVar1 & 0x200) == 0)) || ((uVar1 & 7) == 0)) {
    unaff_ESI[2] = 0;
  }
  return;
}



/* Library Function - Single Match
    _GetLcidFromLanguage
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _GetLcidFromLanguage(void)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined4 *unaff_ESI;
  
  sVar1 = _strlen((char *)*unaff_ESI);
  unaff_ESI[4] = (uint)(sVar1 == 3);
  if ((sVar1 == 3) == 0) {
    uVar2 = _GetPrimaryLen();
  }
  else {
    uVar2 = 2;
  }
  unaff_ESI[3] = uVar2;
  EnumSystemLocalesA(_LanguageEnumProc_4,1);
  if ((*(byte *)(unaff_ESI + 2) & 4) == 0) {
    unaff_ESI[2] = 0;
  }
  return;
}



/* Library Function - Single Match
    ___get_qualified_locale
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl ___get_qualified_locale(LPLC_STRINGS _LpInStr,UINT *_LpCodePage,LPLC_STRINGS _LpOutStr)

{
  int *piVar1;
  wchar_t **ppwVar2;
  wchar_t *pwVar3;
  _ptiddata p_Var4;
  size_t sVar5;
  LCID LVar6;
  uint _Value;
  BOOL BVar7;
  errno_t eVar8;
  int iVar9;
  _setloc_struct *p_Var10;
  
  p_Var4 = __getptd();
  p_Var10 = &p_Var4->_setloc_data;
  if (_LpInStr == (LPLC_STRINGS)0x0) {
    piVar1 = &(p_Var4->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x104;
LAB_0099b119:
    LVar6 = GetUserDefaultLCID();
    (p_Var4->_setloc_data)._cachecp = LVar6;
    *(LCID *)(p_Var4->_setloc_data)._cachein = LVar6;
  }
  else {
    pwVar3 = _LpInStr->szLanguage + 0x20;
    ppwVar2 = &(p_Var4->_setloc_data).pchCountry;
    p_Var10->pchLanguage = _LpInStr->szLanguage;
    *ppwVar2 = pwVar3;
    if ((pwVar3 != (wchar_t *)0x0) && ((char)*pwVar3 != '\0')) {
      _TranslateName(&PTR_s_america_00ab06f0,0x16,ppwVar2);
    }
    (p_Var4->_setloc_data).iLocState = 0;
    if ((p_Var10->pchLanguage == (wchar_t *)0x0) || ((char)*p_Var10->pchLanguage == '\0')) {
      pwVar3 = *ppwVar2;
      if ((pwVar3 == (wchar_t *)0x0) || ((char)*pwVar3 == '\0')) {
        (p_Var4->_setloc_data).iLocState = 0x104;
        goto LAB_0099b119;
      }
      sVar5 = _strlen((char *)pwVar3);
      (p_Var4->_setloc_data).bAbbrevCountry = (uint)(sVar5 == 3);
      EnumSystemLocalesA(_CountryEnumProc_4,1);
      if (((p_Var4->_setloc_data).iLocState & 4) == 0) {
        (p_Var4->_setloc_data).iLocState = 0;
      }
    }
    else {
      if ((*ppwVar2 == (wchar_t *)0x0) || ((char)**ppwVar2 == '\0')) {
        _GetLcidFromLanguage();
      }
      else {
        _GetLcidFromLangCountry();
      }
      if ((p_Var4->_setloc_data).iLocState != 0) goto LAB_0099b12e;
      iVar9 = _TranslateName(&PTR_s_american_00ab04e8,0x40,p_Var10);
      if (iVar9 != 0) {
        if ((*ppwVar2 == (wchar_t *)0x0) || ((char)**ppwVar2 == '\0')) {
          _GetLcidFromLanguage();
        }
        else {
          _GetLcidFromLangCountry();
        }
      }
    }
  }
  if ((p_Var4->_setloc_data).iLocState == 0) {
    return 0;
  }
LAB_0099b12e:
  _Value = _ProcessCodePage();
  if ((((_Value == 0) || (_Value == 65000)) || (_Value == 0xfde9)) ||
     ((BVar7 = IsValidCodePage(_Value & 0xffff), BVar7 == 0 ||
      (BVar7 = IsValidLocale((p_Var4->_setloc_data)._cachecp,1), BVar7 == 0)))) {
    return 0;
  }
  if (_LpCodePage != (UINT *)0x0) {
    *(short *)_LpCodePage = (short)(p_Var4->_setloc_data)._cachecp;
    *(wchar_t *)((int)_LpCodePage + 2) = (p_Var4->_setloc_data)._cachein[0];
    *(short *)(_LpCodePage + 1) = (short)_Value;
  }
  if (_LpOutStr != (LPLC_STRINGS)0x0) {
    if ((short)*_LpCodePage == 0x814) {
      eVar8 = _strcpy_s((char *)_LpOutStr,0x40,"Norwegian-Nynorsk");
      if (eVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    else {
      iVar9 = GetLocaleInfoA((p_Var4->_setloc_data)._cachecp,0x1001,(LPSTR)_LpOutStr,0x40);
      if (iVar9 == 0) {
        return 0;
      }
    }
    iVar9 = GetLocaleInfoA(*(LCID *)(p_Var4->_setloc_data)._cachein,0x1002,
                           (LPSTR)(_LpOutStr->szLanguage + 0x20),0x40);
    if (iVar9 == 0) {
      return 0;
    }
    __itoa_s(_Value,(char *)_LpOutStr->szCountry,0x10,10);
  }
  return 1;
}



/* Library Function - Single Match
    _memcmp
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2019 Release */

int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (_Size == 0) {
    return 0;
  }
  if (_Size == 1) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
LAB_0099c77b:
    if (uVar2 == uVar3) {
      return 0;
    }
    return (uint)(0 < (int)(uVar2 - uVar3)) * 2 + -1;
  }
  if (_Size == 2) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    goto LAB_0099c77b;
  }
  if (_Size == 3) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 2);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 2);
    goto LAB_0099c77b;
  }
  if (_Size == 4) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 2);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 2);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 3);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 3);
    goto LAB_0099c77b;
  }
  for (; 0x1f < _Size; _Size = _Size - 0x20) {
    if (*(int *)_Buf1 == *(int *)_Buf2) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)_Buf1;
      uVar2 = (uint)*(byte *)_Buf2;
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 1);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 1);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 2);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 2);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 3) != (uint)*(byte *)((int)_Buf2 + 3)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 3) - (uint)*(byte *)((int)_Buf2 + 3)))
                * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 4) == *(int *)((int)_Buf2 + 4)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 4);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 4);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 5);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 5);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 6);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 6);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 7) != (uint)*(byte *)((int)_Buf2 + 7)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 7) - (uint)*(byte *)((int)_Buf2 + 7)))
                * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 8) == *(int *)((int)_Buf2 + 8)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 8);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 8);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 9);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 9);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 10);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 10);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0xb) != (uint)*(byte *)((int)_Buf2 + 0xb)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0xb) -
                                (uint)*(byte *)((int)_Buf2 + 0xb))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0xc) == *(int *)((int)_Buf2 + 0xc)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xc);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xc);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xd);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xd);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xe);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xe);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0xf) != (uint)*(byte *)((int)_Buf2 + 0xf)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0xf) -
                                (uint)*(byte *)((int)_Buf2 + 0xf))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x10) == *(int *)((int)_Buf2 + 0x10)) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x10);
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x10);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x11);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x11);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x12);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x12);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x13) != (uint)*(byte *)((int)_Buf2 + 0x13)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x13) -
                                (uint)*(byte *)((int)_Buf2 + 0x13))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x14) == *(int *)((int)_Buf2 + 0x14)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x14);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x14);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x15);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x15);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x16);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x16);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x17) != (uint)*(byte *)((int)_Buf2 + 0x17)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x17) -
                                (uint)*(byte *)((int)_Buf2 + 0x17))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x18) == *(int *)((int)_Buf2 + 0x18)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x18);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x18);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x19);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x19);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1a);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1a);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x1b) != (uint)*(byte *)((int)_Buf2 + 0x1b)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x1b) -
                                (uint)*(byte *)((int)_Buf2 + 0x1b))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x1c) == *(int *)((int)_Buf2 + 0x1c)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1c);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1c);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1d);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1d);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1e);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1e);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x1f) != (uint)*(byte *)((int)_Buf2 + 0x1f)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x1f) -
                                (uint)*(byte *)((int)_Buf2 + 0x1f))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    _Buf1 = (void *)((int)_Buf1 + 0x20);
    _Buf2 = (void *)((int)_Buf2 + 0x20);
  }
  switch(_Size) {
  default:
    goto switchD_0099b6e9_caseD_0;
  case 1:
    goto switchD_0099b6e9_caseD_1;
  case 2:
    goto switchD_0099b6e9_caseD_2;
  case 3:
    goto switchD_0099b6e9_caseD_3;
  case 4:
    goto switchD_0099b6e9_caseD_4;
  case 5:
    goto switchD_0099b6e9_caseD_5;
  case 6:
    goto switchD_0099b6e9_caseD_6;
  case 7:
    goto switchD_0099b6e9_caseD_7;
  case 8:
    goto switchD_0099b6e9_caseD_8;
  case 9:
    goto switchD_0099b6e9_caseD_9;
  case 10:
    goto switchD_0099b6e9_caseD_a;
  case 0xb:
    goto switchD_0099b6e9_caseD_b;
  case 0xc:
    goto switchD_0099b6e9_caseD_c;
  case 0xd:
    goto switchD_0099b6e9_caseD_d;
  case 0xe:
    goto switchD_0099b6e9_caseD_e;
  case 0xf:
    goto switchD_0099b6e9_caseD_f;
  case 0x10:
    goto switchD_0099b6e9_caseD_10;
  case 0x11:
    goto switchD_0099b6e9_caseD_11;
  case 0x12:
    goto switchD_0099b6e9_caseD_12;
  case 0x13:
    goto switchD_0099b6e9_caseD_13;
  case 0x14:
    goto switchD_0099b6e9_caseD_14;
  case 0x15:
    goto switchD_0099b6e9_caseD_15;
  case 0x16:
    goto switchD_0099b6e9_caseD_16;
  case 0x17:
    goto switchD_0099b6e9_caseD_17;
  case 0x18:
    goto switchD_0099b6e9_caseD_18;
  case 0x1a:
    goto switchD_0099b6e9_caseD_1a;
  case 0x1b:
    goto switchD_0099b6e9_caseD_1b;
  case 0x1c:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1c)) == *(uint *)((int)_Buf2 + (_Size - 0x1c))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1c)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1b));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1a));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x19)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x19))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x19)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x19)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_18:
    if (*(uint *)((int)_Buf1 + (_Size - 0x18)) == *(uint *)((int)_Buf2 + (_Size - 0x18))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x18)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x17));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x16));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x15)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x15))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x15)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x15)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_14:
    if (*(uint *)((int)_Buf1 + (_Size - 0x14)) == *(uint *)((int)_Buf2 + (_Size - 0x14))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x14)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x13));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x12));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x11)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x11))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x11)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x11)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_10:
    if (*(uint *)((int)_Buf1 + (_Size - 0x10)) == *(uint *)((int)_Buf2 + (_Size - 0x10))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x10)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xe));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xd)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xd))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xd)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xd)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_c:
    if (*(int *)((int)_Buf1 + (_Size - 0xc)) == *(int *)((int)_Buf2 + (_Size - 0xc))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xb));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 9)) != (uint)*(byte *)((int)_Buf2 + (_Size - 9))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 9)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 9)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_8:
    if (*(uint *)((int)_Buf1 + (_Size - 8)) == *(uint *)((int)_Buf2 + (_Size - 8))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 8)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 7));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 6));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 5)) != (uint)*(byte *)((int)_Buf2 + (_Size - 5))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 5)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 5)))) * 2 + -1;
      }
    }
    if (iVar1 == 0) {
switchD_0099b6e9_caseD_4:
      if (*(uint *)((int)_Buf1 + (_Size - 4)) == *(uint *)((int)_Buf2 + (_Size - 4))) {
        iVar1 = 0;
      }
      else {
        uVar3 = *(uint *)((int)_Buf1 + (_Size - 4)) & 0xff;
        uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
        if ((uVar3 == uVar2) ||
           (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
          uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
          uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
          if ((uVar3 == uVar2) ||
             (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
            uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 2));
            uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 2));
            if ((uVar3 == uVar2) ||
               (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
              iVar1 = 0;
              if ((uint)*(byte *)((int)_Buf1 + (_Size - 1)) !=
                  (uint)*(byte *)((int)_Buf2 + (_Size - 1))) {
                iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 1)) -
                                        (uint)*(byte *)((int)_Buf2 + (_Size - 1)))) * 2 + -1;
              }
            }
          }
        }
      }
      if (iVar1 == 0) {
switchD_0099b6e9_caseD_0:
        iVar1 = 0;
      }
    }
    return iVar1;
  case 0x1d:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1d)) == *(uint *)((int)_Buf2 + (_Size - 0x1d))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1d)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1c));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1b));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x1a)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x1a)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
  case 0x19:
    if (*(uint *)((int)_Buf1 + (_Size - 0x19)) == *(uint *)((int)_Buf2 + (_Size - 0x19))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x19)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x18));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x17));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x16)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x16))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x16)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x16)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_15:
    if (*(uint *)((int)_Buf1 + (_Size - 0x15)) == *(uint *)((int)_Buf2 + (_Size - 0x15))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x15)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x14));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x13));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x12)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x12))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x12)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x12)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_11:
    if (*(uint *)((int)_Buf1 + (_Size - 0x11)) == *(uint *)((int)_Buf2 + (_Size - 0x11))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x11)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xe)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xe))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xe)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xe)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_d:
    if (*(uint *)((int)_Buf1 + (_Size - 0xd)) == *(uint *)((int)_Buf2 + (_Size - 0xd))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xd)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xb));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 10)) != (uint)*(byte *)((int)_Buf2 + (_Size - 10)))
      {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 10)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 10)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_9:
    if (*(int *)((int)_Buf1 + (_Size - 9)) == *(int *)((int)_Buf2 + (_Size - 9))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 8));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 7));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 6)) != (uint)*(byte *)((int)_Buf2 + (_Size - 6))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 6)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 6)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_5:
    if (*(uint *)((int)_Buf1 + (_Size - 5)) == *(uint *)((int)_Buf2 + (_Size - 5))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 5)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 4));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 2)) != (uint)*(byte *)((int)_Buf2 + (_Size - 2))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 2)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 2)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_1:
    if ((uint)*(byte *)((int)_Buf1 + (_Size - 1)) == (uint)*(byte *)((int)_Buf2 + (_Size - 1))) {
      return 0;
    }
    return (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 1)) -
                           (uint)*(byte *)((int)_Buf2 + (_Size - 1)))) * 2 + -1;
  case 0x1e:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1e)) == *(uint *)((int)_Buf2 + (_Size - 0x1e))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1e)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1e));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1d));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1c));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x1b)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x1b)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_1a:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1a)) == *(uint *)((int)_Buf2 + (_Size - 0x1a))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1a)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x19));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x18));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x17)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x17))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x17)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x17)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_16:
    if (*(uint *)((int)_Buf1 + (_Size - 0x16)) == *(uint *)((int)_Buf2 + (_Size - 0x16))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x16)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x15));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x14));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x13)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x13))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x13)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x13)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_12:
    if (*(uint *)((int)_Buf1 + (_Size - 0x12)) == *(uint *)((int)_Buf2 + (_Size - 0x12))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x12)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x11));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xf)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xf))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xf)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xf)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_e:
    if (*(uint *)((int)_Buf1 + (_Size - 0xe)) == *(uint *)((int)_Buf2 + (_Size - 0xe))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xe)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xd));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xb)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xb))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xb)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xb)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_a:
    if (*(int *)((int)_Buf1 + (_Size - 10)) == *(int *)((int)_Buf2 + (_Size - 10))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 7)) != (uint)*(byte *)((int)_Buf2 + (_Size - 7))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 7)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 7)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_6:
    if (*(uint *)((int)_Buf1 + (_Size - 6)) == *(uint *)((int)_Buf2 + (_Size - 6))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 6)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 5));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 4));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 3)) != (uint)*(byte *)((int)_Buf2 + (_Size - 3))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 3)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 3)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_2:
    if (*(short *)((int)_Buf1 + (_Size - 2)) != *(short *)((int)_Buf2 + (_Size - 2))) {
LAB_0099c2cf:
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 2));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 2));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      goto switchD_0099b6e9_caseD_1;
    }
    goto switchD_0099b6e9_caseD_0;
  case 0x1f:
    if (*(int *)((int)_Buf1 + (_Size - 0x1f)) == *(int *)((int)_Buf2 + (_Size - 0x1f))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1f));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1f));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1e));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1e));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1d));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x1c)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x1c)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_1b:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1b)) == *(uint *)((int)_Buf2 + (_Size - 0x1b))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1b)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1a));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x19));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x18)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x18))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x18)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x18)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_17:
    if (*(uint *)((int)_Buf1 + (_Size - 0x17)) == *(uint *)((int)_Buf2 + (_Size - 0x17))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x17)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x16));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x15));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x14)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x14))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x14)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x14)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_13:
    if (*(uint *)((int)_Buf1 + (_Size - 0x13)) == *(uint *)((int)_Buf2 + (_Size - 0x13))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x13)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x12));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x11));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x10)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x10))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x10)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x10)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_f:
    if (*(int *)((int)_Buf1 + (_Size - 0xf)) == *(int *)((int)_Buf2 + (_Size - 0xf))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xe));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xd));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xc)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xc))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xc)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xc)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_b:
    if (*(uint *)((int)_Buf1 + (_Size - 0xb)) == *(uint *)((int)_Buf2 + (_Size - 0xb))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xb)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 8)) != (uint)*(byte *)((int)_Buf2 + (_Size - 8))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 8)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 8)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_7:
    if (*(uint *)((int)_Buf1 + (_Size - 7)) == *(uint *)((int)_Buf2 + (_Size - 7))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 7)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 6));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 5));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 4)) != (uint)*(byte *)((int)_Buf2 + (_Size - 4))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 4)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 4)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_0099b6e9_caseD_3:
    uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
    uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
    if ((uVar3 != uVar2) &&
       (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    goto LAB_0099c2cf;
  }
}



/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}



/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x99c968,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __local_unwind2(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  int iStack_14;
  
  iStack_14 = param_1;
  puStack_1c = &LAB_0099c970;
  local_20 = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&local_20;
  *unaff_FS_OFFSET = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_0099ca84(uVar2);
    }
  }
  *unaff_FS_OFFSET = local_20;
  return;
}



/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __NLG_Notify1(void)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined4 unaff_EBP;
  
  DAT_00b31fc0 = in_ECX;
  DAT_00b31fbc = in_EAX;
  DAT_00b31fc4 = unaff_EBP;
  return in_EAX;
}



/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_00b31fc0 = param_1;
  DAT_00b31fbc = in_EAX;
  DAT_00b31fc4 = unaff_EBP;
  return;
}



void FUN_0099ca84(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_0099ca87(void)

{
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x0099cb12) */
/* WARNING: Removing unreachable block (ram,0x0099caff) */
/* Library Function - Single Match
    __get_sse2_info
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __get_sse2_info(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar4;
  undefined4 local_8;
  
  local_8 = 0;
  uVar4 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | 0x40
          | (uint)(in_AF & 1) * 0x10 | 4 | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar1 = uVar4 ^ 0x200000;
  if (((uint)((uVar1 & 0x4000) != 0) * 0x4000 | (uint)((uVar1 & 0x200) != 0) * 0x200 |
       (uint)((uVar1 & 0x100) != 0) * 0x100 | (uint)((uVar1 & 0x40) != 0) * 0x40 |
       (uint)((uVar1 & 0x10) != 0) * 0x10 | (uint)((uVar1 & 4) != 0) * 4 |
       (uint)((uVar1 & 0x200000) != 0) * 0x200000 | (uint)((uVar1 & 0x40000) != 0) * 0x40000) !=
      uVar4) {
    cpuid_basic_info(0);
    iVar2 = cpuid_Version_info(1);
    local_8 = *(uint *)(iVar2 + 8);
  }
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_0099ca87(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Library Function - Single Match
    ___crtMessageBoxA
   
   Library: Visual Studio 2005 Release */

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined1 local_24 [8];
  byte local_1c;
  undefined1 local_18 [4];
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_14 = __encoded_null();
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  if (DAT_00baa760 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if ((hModule == (HMODULE)0x0) ||
       (pFVar1 = GetProcAddress(hModule,"MessageBoxA"), pFVar1 == (FARPROC)0x0)) {
      return 0;
    }
    DAT_00baa760 = __encode_pointer(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_00baa764 = __encode_pointer(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_00baa768 = __encode_pointer(pFVar1);
    iVar2 = __get_osplatform(&local_c);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_c == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_00baa770 = __encode_pointer(pFVar1);
      if (DAT_00baa770 != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_00baa76c = __encode_pointer(pFVar1);
      }
    }
  }
  iVar2 = local_14;
  if ((DAT_00baa76c == local_14) || (DAT_00baa770 == local_14)) {
LAB_0099cc92:
    if (DAT_00baa764 != iVar2) {
      pcVar3 = (code *)__decode_pointer(DAT_00baa764);
      local_8 = (*pcVar3)();
      if ((local_8 != 0) && (DAT_00baa768 != iVar2)) {
        pcVar3 = (code *)__decode_pointer(DAT_00baa768,local_8);
        local_8 = (*pcVar3)();
      }
    }
  }
  else {
    pcVar3 = (code *)__decode_pointer(DAT_00baa76c);
    iVar4 = (*pcVar3)();
    if (iVar4 != 0) {
      pcVar3 = (code *)__decode_pointer(DAT_00baa770,iVar4,1,local_24,0xc,local_18);
      iVar4 = (*pcVar3)();
      if ((iVar4 != 0) && ((local_1c & 1) != 0)) goto LAB_0099cc92;
    }
    iVar2 = __get_winmajor(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 < 4) {
      _UType = _UType | 0x40000;
    }
    else {
      _UType = _UType | 0x200000;
    }
  }
  pcVar3 = (code *)__decode_pointer(DAT_00baa760,local_8,_LpText,_LpCaption,_UType);
  iVar2 = (*pcVar3)();
  return iVar2;
}



/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  int *piVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_00ba9e00;
      DAT_00ba9e00 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_00ba9e00;
    }
  }
  piVar2 = __errno();
  *piVar2 = 0x16;
  __invalid_parameter(0,0,0,0,0);
  return -1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetLocaleInfoW_stat(struct localeinfo_struct *,unsigned long,unsigned
   long,wchar_t *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetLocaleInfoW_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,wchar_t *param_4,int param_5,
          int param_6)

{
  int iVar1;
  DWORD DVar2;
  uint cchData;
  LPSTR lpLCData;
  int local_c;
  
  if (DAT_00baa774 == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 != 0) {
      DAT_00baa774 = 1;
      goto LAB_0099cd88;
    }
    DVar2 = GetLastError();
    if (DVar2 == 0x78) {
      DAT_00baa774 = 2;
    }
  }
  if (DAT_00baa774 != 1) {
    if ((DAT_00baa774 == 2) || (DAT_00baa774 == 0)) {
      local_c = 0;
      if (param_6 == 0) {
        param_6 = param_1->locinfo->lc_codepage;
      }
      cchData = GetLocaleInfoA(param_2,param_3,(LPSTR)0x0,0);
      if (cchData != 0) {
        if (((int)cchData < 1) || (0xffffffe0 / cchData == 0)) {
          lpLCData = (LPSTR)0x0;
        }
        else if (cchData + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x18) {
            return 0;
          }
          lpLCData = &stack0xfffffff0;
        }
        else {
          lpLCData = _malloc(cchData + 8);
          if (lpLCData != (LPSTR)0x0) {
            lpLCData[0] = -0x23;
            lpLCData[1] = -0x23;
            lpLCData[2] = '\0';
            lpLCData[3] = '\0';
            lpLCData = lpLCData + 8;
          }
        }
        if (lpLCData != (LPSTR)0x0) {
          iVar1 = GetLocaleInfoA(param_2,param_3,lpLCData,cchData);
          if (iVar1 != 0) {
            if (param_5 == 0) {
              param_5 = 0;
              param_4 = (LPWSTR)0x0;
            }
            local_c = MultiByteToWideChar(param_6,1,lpLCData,-1,param_4,param_5);
          }
          __freea(lpLCData);
          return local_c;
        }
      }
    }
    return 0;
  }
LAB_0099cd88:
  iVar1 = GetLocaleInfoW(param_2,param_3,param_4,param_5);
  return iVar1;
}



/* Library Function - Single Match
    ___crtGetLocaleInfoW
   
   Library: Visual Studio 2005 Release */

void ___crtGetLocaleInfoW
               (localeinfo_struct *param_1,ulong param_2,ulong param_3,wchar_t *param_4,int param_5,
               int param_6)

{
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  __crtGetLocaleInfoW_stat(&local_14,param_2,param_3,param_4,param_5,param_6);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetLocaleInfoA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetLocaleInfoA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          int param_6)

{
  uint _Size;
  int iVar1;
  DWORD DVar2;
  uint cchData;
  LPWSTR lpLCData;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_00baa778 == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 != 0) {
      DAT_00baa778 = 1;
      goto LAB_0099cf0e;
    }
    DVar2 = GetLastError();
    if (DVar2 == 0x78) {
      DAT_00baa778 = 2;
    }
  }
  if ((DAT_00baa778 == 2) || (DAT_00baa778 == 0)) {
    iVar3 = GetLocaleInfoA(param_2,param_3,param_4,param_5);
    return iVar3;
  }
  if (DAT_00baa778 != 1) {
    return 0;
  }
LAB_0099cf0e:
  if (param_6 == 0) {
    param_6 = param_1->locinfo->lc_codepage;
  }
  cchData = GetLocaleInfoW(param_2,param_3,(LPWSTR)0x0,0);
  if (cchData != 0) {
    if (((int)cchData < 1) || (0xffffffe0 / cchData < 2)) {
      lpLCData = (LPWSTR)0x0;
    }
    else {
      _Size = cchData * 2 + 8;
      if (_Size < 0x401) {
        if (&stack0x00000000 == (undefined1 *)0x18) {
          return 0;
        }
        lpLCData = (LPWSTR)&stack0xfffffff0;
      }
      else {
        lpLCData = _malloc(_Size);
        if (lpLCData != (LPWSTR)0x0) {
          lpLCData[0] = L'\xdddd';
          lpLCData[1] = L'\0';
          lpLCData = lpLCData + 4;
        }
      }
    }
    if (lpLCData != (LPWSTR)0x0) {
      iVar1 = GetLocaleInfoW(param_2,param_3,lpLCData,cchData);
      if (iVar1 != 0) {
        if (param_5 == 0) {
          param_5 = 0;
          param_4 = (LPSTR)0x0;
        }
        iVar3 = WideCharToMultiByte(param_6,0,lpLCData,-1,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      __freea(lpLCData);
      return iVar3;
    }
  }
  return 0;
}



/* Library Function - Single Match
    ___crtGetLocaleInfoA
   
   Library: Visual Studio 2005 Release */

int __cdecl
___crtGetLocaleInfoA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,LCTYPE _LCType,LPSTR _LpLCData,int _CchData)

{
  int iVar1;
  int in_stack_00000018;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Plocinfo);
  iVar1 = __crtGetLocaleInfoA_stat
                    (&local_14,(ulong)_LocaleName,_LCType,_LpLCData,_CchData,in_stack_00000018);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2005 Release */

int __cdecl __isatty(int _FileHandle)

{
  int *piVar1;
  
  if (_FileHandle == -2) {
    piVar1 = __errno();
    *piVar1 = 9;
    return 0;
  }
  if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_00baaaa0)) {
    return *(byte *)((&DAT_00baaac0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x28) & 0x40;
  }
  piVar1 = __errno();
  *piVar1 = 9;
  __invalid_parameter(0,0,0,0,0);
  return 0;
}



/* Library Function - Single Match
    __wctomb_s_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale)

{
  char *lpMultiByteStr;
  size_t _Size;
  int iVar1;
  int *piVar2;
  DWORD DVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _Size = _SizeInBytes;
  lpMultiByteStr = _MbCh;
  if ((_MbCh == (char *)0x0) && (_SizeInBytes != 0)) {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = 0;
    }
LAB_0099d09f:
    iVar1 = 0;
  }
  else {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = -1;
    }
    if (0x7fffffff < _SizeInBytes) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      __invalid_parameter(0,0,0,0,0);
      return 0x16;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
    if (*(int *)(local_14[0] + 0x14) == 0) {
      if ((ushort)_WCh < 0x100) {
        if (lpMultiByteStr != (char *)0x0) {
          if (_Size == 0) goto LAB_0099d12f;
          *lpMultiByteStr = (char)_WCh;
        }
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = 1;
        }
LAB_0099d166:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        goto LAB_0099d09f;
      }
      if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
        _memset(lpMultiByteStr,0,_Size);
      }
    }
    else {
      _MbCh = (char *)0x0;
      iVar1 = WideCharToMultiByte(*(UINT *)(local_14[0] + 4),0,&_WCh,1,lpMultiByteStr,_Size,
                                  (LPCSTR)0x0,(LPBOOL)&_MbCh);
      if (iVar1 == 0) {
        DVar3 = GetLastError();
        if (DVar3 == 0x7a) {
          if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
            _memset(lpMultiByteStr,0,_Size);
          }
LAB_0099d12f:
          piVar2 = __errno();
          *piVar2 = 0x22;
          __invalid_parameter(0,0,0,0,0);
          if (local_8 == '\0') {
            return 0x22;
          }
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
          return 0x22;
        }
      }
      else if (_MbCh == (char *)0x0) {
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = iVar1;
        }
        goto LAB_0099d166;
      }
    }
    piVar2 = __errno();
    *piVar2 = 0x2a;
    piVar2 = __errno();
    iVar1 = *piVar2;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar1;
}



/* Library Function - Single Match
    _wctomb_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh)

{
  errno_t eVar1;
  
  eVar1 = __wctomb_s_l(_SizeConverted,_MbCh,_SizeInBytes,_WCh,(_locale_t)0x0);
  return eVar1;
}



/* Library Function - Single Match
    __lseeki64_nolock
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG in_stack_00000008;
  LONG local_8;
  
  local_8 = (LONG)_Offset;
  hFile = (HANDLE)__get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = __errno();
    *piVar2 = 9;
LAB_0099d226:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        __dosmaperr(DVar4);
        goto LAB_0099d226;
      }
    }
    pbVar1 = (byte *)((&DAT_00baaac0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x28);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseeki64
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int in_stack_ffffffc8;
  undefined8 local_28;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_00baaaa0)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x28;
      if ((*(byte *)((&DAT_00baaac0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        puVar1 = ___doserrno();
        *puVar1 = 0;
        piVar2 = __errno();
        *piVar2 = 9;
        __invalid_parameter(0,0,0,0,0);
        local_28._4_4_ = 0xffffffff;
        local_28._0_4_ = 0xffffffff;
      }
      else {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_00baaac0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_28 = -1;
        }
        else {
          local_28 = __lseeki64_nolock(_FileHandle,_Offset,in_stack_ffffffc8);
        }
        FUN_0099d389();
      }
      goto LAB_0099d383;
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    __invalid_parameter(0,0,0,0,0);
  }
  local_28._0_4_ = 0xffffffff;
  local_28._4_4_ = 0xffffffff;
LAB_0099d383:
  return CONCAT44(local_28._4_4_,(undefined4)local_28);
}



void FUN_0099d389(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_00baaaa0)) {
    iVar3 = (param_1 & 0x1fU) * 0x28;
    if (*(int *)(iVar3 + (&DAT_00baaac0)[param_1 >> 5]) == -1) {
      if (DAT_00b30da8 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0099d3ed;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)param_2);
      }
LAB_0099d3ed:
      *(intptr_t *)(iVar3 + (&DAT_00baaac0)[param_1 >> 5]) = param_2;
      return 0;
    }
  }
  piVar1 = __errno();
  *piVar1 = 9;
  puVar2 = ___doserrno();
  *puVar2 = 0;
  return -1;
}



/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_00baaaa0)) {
    iVar3 = (param_1 & 0x1fU) * 0x28;
    piVar1 = (int *)((&DAT_00baaac0)[param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_00b30da8 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0099d46e;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_0099d46e:
      *(undefined4 *)(iVar3 + (&DAT_00baaac0)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  piVar1 = __errno();
  *piVar1 = 9;
  puVar2 = ___doserrno();
  *puVar2 = 0;
  return -1;
}



/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  ulong *puVar1;
  int *piVar2;
  intptr_t *piVar3;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    return -1;
  }
  if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_00baaaa0)) &&
     (piVar3 = (intptr_t *)((_FileHandle & 0x1fU) * 0x28 + (&DAT_00baaac0)[_FileHandle >> 5]),
     (*(byte *)(piVar3 + 1) & 1) != 0)) {
    return *piVar3;
  }
  puVar1 = ___doserrno();
  *puVar1 = 0;
  piVar2 = __errno();
  *piVar2 = 9;
  __invalid_parameter(0,0,0,0,0);
  return -1;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___lock_fhandle
   
   Library: Visual Studio 2005 Release */

int __cdecl ___lock_fhandle(int _Filehandle)

{
  int iVar1;
  int iVar2;
  uint local_20;
  
  iVar2 = (_Filehandle & 0x1fU) * 0x28 + (&DAT_00baaac0)[_Filehandle >> 5];
  local_20 = 1;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      iVar1 = ___crtInitCritSecAndSpinCount(iVar2 + 0xc,4000);
      local_20 = (uint)(iVar1 != 0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_0099d599();
  }
  if (local_20 != 0) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_00baaac0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x28));
  }
  return local_20;
}



void FUN_0099d599(void)

{
  FUN_0098c8fb(10);
  return;
}



/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2005 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_00baaac0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x28));
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __alloc_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __alloc_osfhnd(void)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_20;
  
  local_20 = -1;
  iVar4 = 0;
  bVar1 = false;
  iVar2 = __mtinitlocknum(0xb);
  if (iVar2 == 0) {
    local_20 = -1;
  }
  else {
    __lock(0xb);
    for (; iVar4 < 0x40; iVar4 = iVar4 + 1) {
      puVar3 = (undefined4 *)(&DAT_00baaac0)[iVar4];
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = __calloc_crt(0x20,0x28);
        if (puVar3 != (undefined4 *)0x0) {
          (&DAT_00baaac0)[iVar4] = puVar3;
          DAT_00baaaa0 = DAT_00baaaa0 + 0x20;
          for (; puVar3 < (undefined4 *)((&DAT_00baaac0)[iVar4] + 0x500); puVar3 = puVar3 + 10) {
            *(undefined1 *)(puVar3 + 1) = 0;
            *puVar3 = 0xffffffff;
            *(undefined1 *)((int)puVar3 + 5) = 10;
            puVar3[2] = 0;
          }
          local_20 = iVar4 << 5;
          *(undefined1 *)((&DAT_00baaac0)[local_20 >> 5] + 4) = 1;
          iVar2 = ___lock_fhandle(local_20);
          if (iVar2 == 0) {
            local_20 = -1;
          }
        }
        break;
      }
      for (; puVar3 < (undefined4 *)((&DAT_00baaac0)[iVar4] + 0x500); puVar3 = puVar3 + 10) {
        if ((*(byte *)(puVar3 + 1) & 1) == 0) {
          if (puVar3[2] == 0) {
            __lock(10);
            if (puVar3[2] == 0) {
              iVar2 = ___crtInitCritSecAndSpinCount(puVar3 + 3,4000);
              if (iVar2 == 0) {
                bVar1 = true;
              }
              else {
                puVar3[2] = puVar3[2] + 1;
              }
            }
            FUN_0099d697();
          }
          if (!bVar1) {
            EnterCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
            if ((*(byte *)(puVar3 + 1) & 1) == 0) {
              *(undefined1 *)(puVar3 + 1) = 1;
              *puVar3 = 0xffffffff;
              local_20 = ((int)puVar3 - (&DAT_00baaac0)[iVar4]) / 0x28 + iVar4 * 0x20;
              break;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
          }
        }
      }
      if (local_20 != -1) break;
    }
    FUN_0099d75a();
  }
  return local_20;
}



void FUN_0099d697(void)

{
  FUN_0098c8fb(10);
  return;
}



void FUN_0099d75a(void)

{
  FUN_0098c8fb(0xb);
  return;
}



/* Library Function - Single Match
    __tsopen_nolock
   
   Library: Visual Studio 2005 Release */

int __tsopen_nolock(undefined4 *param_1,LPCSTR param_2,uint param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  uint *in_EAX;
  errno_t eVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  int *piVar6;
  HANDLE hFile;
  long lVar7;
  int iVar8;
  byte bVar9;
  int unaff_EDI;
  DWORD DVar10;
  bool bVar11;
  longlong lVar12;
  _SECURITY_ATTRIBUTES local_2c;
  int local_1c;
  uint local_18;
  DWORD local_14;
  uint local_10;
  undefined *local_c;
  char local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  
  bVar11 = (param_3 & 0x80) == 0;
  local_18 = 0;
  local_1c = 0;
  local_6 = 0;
  local_2c.nLength = 0xc;
  local_2c.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar11) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_2c.bInheritHandle = (BOOL)bVar11;
  eVar2 = __get_fmode((int *)&local_18);
  if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  iVar3 = __get_osplatform(&local_1c);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (((param_3 & 0x8000) == 0) && (((param_3 & 0x74000) != 0 || (local_18 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar4 = param_3 & 3;
  if (uVar4 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar4 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar4 != 2) goto LAB_0099d808;
    local_10 = 0xc0000000;
  }
  if (param_4 == 0x10) {
    local_c = (undefined *)0x0;
  }
  else if (param_4 == 0x20) {
    local_c = (undefined *)0x1;
  }
  else if (param_4 == 0x30) {
    local_c = (undefined *)0x2;
  }
  else if (param_4 == 0x40) {
    local_c = (undefined *)0x3;
  }
  else {
    if (param_4 != 0x80) goto LAB_0099d808;
    local_c = (undefined *)(uint)(local_10 == 0x80000000);
  }
  uVar4 = param_3 & 0x700;
  if (uVar4 < 0x401) {
    if ((uVar4 == 0x400) || (uVar4 == 0)) {
      local_14 = 3;
    }
    else if (uVar4 == 0x100) {
      local_14 = 4;
    }
    else {
      if (uVar4 == 0x200) goto LAB_0099d945;
      if (uVar4 != 0x300) goto LAB_0099d808;
      local_14 = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_0099d945:
        local_14 = 5;
        goto LAB_0099d8f0;
      }
      if (uVar4 != 0x700) {
LAB_0099d808:
        puVar5 = ___doserrno();
        *puVar5 = 0;
        *in_EAX = 0xffffffff;
        piVar6 = __errno();
        *piVar6 = 0x16;
        __invalid_parameter(0,0,0,0,0);
        return 0x16;
      }
    }
    local_14 = 1;
  }
LAB_0099d8f0:
  DVar10 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_00ba9d90 & param_5))) {
    DVar10 = 1;
  }
  if ((param_3 & 0x40) != 0) {
    local_10 = local_10 | 0x10000;
    DVar10 = DVar10 | 0x4000000;
    if (local_1c == 2) {
      local_c = (undefined *)((uint)local_c | 4);
    }
  }
  if ((param_3 & 0x1000) != 0) {
    DVar10 = DVar10 | 0x100;
  }
  if ((param_3 & 0x20) == 0) {
    if ((param_3 & 0x10) != 0) {
      DVar10 = DVar10 | 0x10000000;
    }
  }
  else {
    DVar10 = DVar10 | 0x8000000;
  }
  uVar4 = __alloc_osfhnd();
  *in_EAX = uVar4;
  if (uVar4 == 0xffffffff) {
    puVar5 = ___doserrno();
    *puVar5 = 0;
    *in_EAX = 0xffffffff;
    piVar6 = __errno();
    *piVar6 = 0x18;
    goto LAB_0099d9cc;
  }
  *param_1 = 1;
  hFile = CreateFileA(param_2,local_10,(DWORD)local_c,&local_2c,local_14,DVar10,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    pbVar1 = (byte *)((&DAT_00baaac0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x28);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  else {
    DVar10 = GetFileType(hFile);
    if (DVar10 != 0) {
      if (DVar10 == 2) {
        local_5 = local_5 | 0x40;
      }
      else if (DVar10 == 3) {
        local_5 = local_5 | 8;
      }
      __set_osfhnd(*in_EAX,(intptr_t)hFile);
      bVar9 = local_5 | 1;
      *(byte *)((&DAT_00baaac0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x28) = bVar9;
      pbVar1 = (byte *)((&DAT_00baaac0)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x28);
      *pbVar1 = *pbVar1 & 0x80;
      local_7 = local_5 & 0x48;
      if (local_7 == 0) {
        if ((local_5 & 0x80) == 0) goto LAB_0099dd28;
        if ((param_3 & 2) == 0) goto LAB_0099daee;
        local_5 = bVar9;
        local_c = (undefined *)__lseek_nolock(*in_EAX,-1,2);
        if (local_c == (undefined *)0xffffffff) {
          puVar5 = ___doserrno();
          bVar9 = local_5;
          if (*puVar5 == 0x83) goto LAB_0099daee;
        }
        else {
          local_8 = '\0';
          iVar3 = __read_nolock(*in_EAX,&local_8,1);
          if ((((iVar3 != 0) || (local_8 != '\x1a')) ||
              (iVar3 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,(int)local_c >> 0x1f)),
              iVar3 != -1)) && (lVar7 = __lseek_nolock(*in_EAX,0,0), bVar9 = local_5, lVar7 != -1))
          goto LAB_0099daee;
        }
      }
      else {
LAB_0099daee:
        local_5 = bVar9;
        if ((local_5 & 0x80) == 0) goto LAB_0099dd28;
        if ((param_3 & 0x74000) == 0) {
          if ((local_18 & 0x74000) == 0) {
            param_3 = param_3 | 0x4000;
          }
          else {
            param_3 = param_3 | local_18 & 0x74000;
          }
        }
        uVar4 = param_3 & 0x74000;
        if (uVar4 == 0x4000) {
          local_6 = 0;
        }
        else if ((uVar4 == 0x10000) || (uVar4 == 0x14000)) {
          if ((param_3 & 0x301) == 0x301) goto LAB_0099db5d;
        }
        else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_0099db5d:
          local_6 = 2;
        }
        else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
          local_6 = 1;
        }
        if (((param_3 & 0x70000) == 0) || (local_c = (undefined *)0x0, (local_5 & 0x40) != 0))
        goto LAB_0099dd28;
        uVar4 = local_10 & 0xc0000000;
        if (uVar4 == 0x40000000) {
          if (local_14 == 0) goto LAB_0099dd28;
          if (2 < local_14) {
            if (local_14 < 5) {
              lVar12 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
              if (lVar12 == 0) goto LAB_0099dbc2;
              lVar12 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
              uVar4 = (uint)lVar12 & (uint)((ulonglong)lVar12 >> 0x20);
              goto LAB_0099dc8e;
            }
LAB_0099dbb9:
            if (local_14 != 5) goto LAB_0099dd28;
          }
LAB_0099dbc2:
          iVar3 = 0;
          if (local_6 == 1) {
            local_c = &DAT_00bfbbef;
            local_14 = 3;
          }
          else {
            if (local_6 != 2) goto LAB_0099dd28;
            local_c = (undefined *)0xfeff;
            local_14 = 2;
          }
          do {
            iVar8 = __write(*in_EAX,(void *)((int)&local_c + iVar3),local_14 - iVar3);
            if (iVar8 == -1) goto LAB_0099daa1;
            iVar3 = iVar3 + iVar8;
          } while (iVar3 < (int)local_14);
LAB_0099dd28:
          pbVar1 = (byte *)((&DAT_00baaac0)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x28);
          *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
          pbVar1 = (byte *)((&DAT_00baaac0)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x28);
          *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
          if ((local_7 == 0) && ((param_3 & 8) != 0)) {
            pbVar1 = (byte *)((&DAT_00baaac0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x28);
            *pbVar1 = *pbVar1 | 0x20;
          }
          return 0;
        }
        if (uVar4 != 0x80000000) {
          if ((uVar4 != 0xc0000000) || (local_14 == 0)) goto LAB_0099dd28;
          if (2 < local_14) {
            if (4 < local_14) goto LAB_0099dbb9;
            lVar12 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
            if (lVar12 != 0) {
              lVar12 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
              if (lVar12 == -1) goto LAB_0099daa1;
              goto LAB_0099dc13;
            }
          }
          goto LAB_0099dbc2;
        }
LAB_0099dc13:
        iVar3 = __read_nolock(*in_EAX,&local_c,3);
        if (iVar3 == -1) goto LAB_0099daa1;
        if (iVar3 == 2) {
LAB_0099dc9c:
          if (((uint)local_c & 0xffff) == 0xfffe) {
            __close_nolock(*in_EAX);
            piVar6 = __errno();
            *piVar6 = 0x16;
            return 0x16;
          }
          if (((uint)local_c & 0xffff) == 0xfeff) {
            lVar7 = __lseek_nolock(*in_EAX,2,0);
            if (lVar7 != -1) {
              local_6 = 2;
              goto LAB_0099dd28;
            }
            goto LAB_0099daa1;
          }
        }
        else if (iVar3 == 3) {
          if (local_c == &DAT_00bfbbef) {
            local_6 = 1;
            goto LAB_0099dd28;
          }
          goto LAB_0099dc9c;
        }
        uVar4 = __lseek_nolock(*in_EAX,0,0);
LAB_0099dc8e:
        if (uVar4 != 0xffffffff) goto LAB_0099dd28;
      }
LAB_0099daa1:
      __close_nolock(*in_EAX);
      goto LAB_0099d9cc;
    }
    pbVar1 = (byte *)((&DAT_00baaac0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x28);
    *pbVar1 = *pbVar1 & 0xfe;
    CloseHandle(hFile);
  }
  DVar10 = GetLastError();
  __dosmaperr(DVar10);
LAB_0099d9cc:
  piVar6 = __errno();
  return *piVar6;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    __open
    __wopen
   
   Library: Visual Studio 2005 Release */

int __cdecl __open(char *_Filename,int _OpenFlag,...)

{
  int *piVar1;
  int iVar2;
  undefined4 in_stack_0000000c;
  undefined4 local_24;
  int local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00b00130;
  uStack_c = 0x99ddad;
  local_20 = -1;
  local_24 = 0;
  if (_Filename == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else {
    local_8 = (undefined *)0x0;
    iVar2 = __tsopen_nolock(&local_24,_Filename,_OpenFlag,0x40,in_stack_0000000c);
    local_8 = (undefined *)0xfffffffe;
    FUN_0099de1d();
    if (iVar2 == 0) {
      return local_20;
    }
    piVar1 = __errno();
    *piVar1 = iVar2;
  }
  return -1;
}



void FUN_0099de1d(void)

{
  byte *pbVar1;
  int unaff_EBP;
  int unaff_ESI;
  
  if (*(int *)(unaff_EBP + -0x20) != unaff_ESI) {
    if (*(int *)(unaff_EBP + -0x24) != unaff_ESI) {
      pbVar1 = (byte *)((&DAT_00baaac0)[*(int *)(unaff_EBP + -0x1c) >> 5] + 4 +
                       (*(uint *)(unaff_EBP + -0x1c) & 0x1f) * 0x28);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    __unlock_fhandle(*(int *)(unaff_EBP + -0x1c));
  }
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    __sopen_helper
    __wsopen_helper
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__sopen_helper(char *_Filename,int _OFlag,int _ShFlag,int _PMode,int *_PFileHandle,int _BSecure)

{
  int *piVar1;
  errno_t eVar2;
  undefined4 local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00b00150;
  uStack_c = 0x99de63;
  local_20[0] = 0;
  if (((_PFileHandle == (int *)0x0) || (*_PFileHandle = -1, _Filename == (char *)0x0)) ||
     ((_BSecure != 0 && ((_PMode & 0xfffffe7fU) != 0)))) {
    piVar1 = __errno();
    eVar2 = 0x16;
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else {
    local_8 = (undefined *)0x0;
    eVar2 = __tsopen_nolock(local_20,_Filename,_OFlag,_ShFlag,_PMode);
    local_8 = (undefined *)0xfffffffe;
    FUN_0099def5();
    if (eVar2 != 0) {
      *_PFileHandle = -1;
    }
  }
  return eVar2;
}



void FUN_0099def5(void)

{
  byte *pbVar1;
  int unaff_EBP;
  int unaff_ESI;
  uint *unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x1c) != unaff_ESI) {
    if (*(int *)(unaff_EBP + -0x20) != unaff_ESI) {
      pbVar1 = (byte *)((&DAT_00baaac0)[(int)*unaff_EDI >> 5] + 4 + (*unaff_EDI & 0x1f) * 0x28);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    __unlock_fhandle(*unaff_EDI);
  }
  return;
}



/* Library Function - Single Match
    __sopen_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__sopen_s(int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode)

{
  errno_t eVar1;
  
  eVar1 = __sopen_helper(_Filename,_OpenFlag,_ShareFlag,_PermissionMode,_FileHandle,1);
  return eVar1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  char *local_2c;
  localeinfo_struct local_28;
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,_Locale);
  local_18 = ___strgtold12_l(&local_14,&local_2c,_Str,0,0,0,0,&local_28);
  IVar1 = __ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_0099df98:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      return 3;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_0099dfca:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_0099dfca;
    goto LAB_0099df98;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
  return 4;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  char *local_2c;
  localeinfo_struct local_28;
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,_Locale);
  local_18 = ___strgtold12_l(&local_14,&local_2c,_Str,0,0,0,0,&local_28);
  IVar1 = __ld12tof(&local_14,_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_0099e03e:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      return 3;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_0099e070:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_0099e070;
    goto LAB_0099e03e;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
  return 4;
}



/* Library Function - Single Match
    __fptostr
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char cVar5;
  char *pcVar6;
  errno_t eVar7;
  
  pcVar6 = _PtFlt->mantissa;
  if ((_Buf == (char *)0x0) || (_SizeInBytes == 0)) {
    piVar1 = __errno();
    eVar7 = 0x16;
    *piVar1 = 0x16;
  }
  else {
    *_Buf = '\0';
    iVar2 = _Digits;
    if (_Digits < 1) {
      iVar2 = 0;
    }
    if (iVar2 + 1U < _SizeInBytes) {
      *_Buf = '0';
      pcVar3 = _Buf;
      for (; pcVar3 = pcVar3 + 1, 0 < _Digits; _Digits = _Digits + -1) {
        cVar5 = *pcVar6;
        if (cVar5 == '\0') {
          cVar5 = '0';
        }
        else {
          pcVar6 = pcVar6 + 1;
        }
        *pcVar3 = cVar5;
      }
      *pcVar3 = '\0';
      if ((-1 < _Digits) && ('4' < *pcVar6)) {
        while (pcVar3 = pcVar3 + -1, *pcVar3 == '9') {
          *pcVar3 = '0';
        }
        *pcVar3 = *pcVar3 + '\x01';
      }
      if (*_Buf == '1') {
        _PtFlt->decpt = _PtFlt->decpt + 1;
      }
      else {
        sVar4 = _strlen(_Buf + 1);
        _memmove(_Buf,_Buf + 1,sVar4 + 1);
      }
      return 0;
    }
    piVar1 = __errno();
    eVar7 = 0x22;
    *piVar1 = 0x22;
  }
  __invalid_parameter(0,0,0,0,0);
  return eVar7;
}



/* Library Function - Single Match
    __alldvrm
   
   Library: Visual Studio 2005 Release */

undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}



/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio 2005 Release */

ulonglong __aullshr(void)

{
  uint in_EAX;
  byte in_CL;
  uint in_EDX;
  
  if (0x3f < in_CL) {
    return 0;
  }
  if (in_CL < 0x20) {
    return CONCAT44(in_EDX >> (in_CL & 0x1f),
                    in_EAX >> (in_CL & 0x1f) | in_EDX << 0x20 - (in_CL & 0x1f));
  }
  return (ulonglong)(in_EDX >> (in_CL & 0x1f));
}



/* Library Function - Single Match
    __controlfp_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  uint uVar1;
  int *piVar2;
  errno_t eVar3;
  
  uVar1 = _Mask & 0xfff7ffff;
  if ((_NewValue & uVar1 & 0xfcf0fce0) == 0) {
    if (_CurrentState == (uint *)0x0) {
      __control87(_NewValue,uVar1);
    }
    else {
      uVar1 = __control87(_NewValue,uVar1);
      *_CurrentState = uVar1;
    }
    eVar3 = 0;
  }
  else {
    if (_CurrentState != (uint *)0x0) {
      uVar1 = __control87(0,0);
      *_CurrentState = uVar1;
    }
    piVar2 = __errno();
    eVar3 = 0x16;
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  return eVar3;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __87except
   
   Library: Visual Studio 2005 Release */

void __87except(int param_1,int *param_2,ushort *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_94;
  undefined1 local_90 [48];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_94;
  local_94 = (uint)*param_3;
  iVar1 = *param_2;
  if (iVar1 == 1) {
LAB_0099e313:
    uVar2 = 8;
  }
  else if (iVar1 == 2) {
    uVar2 = 4;
  }
  else if (iVar1 == 3) {
    uVar2 = 0x11;
  }
  else if (iVar1 == 4) {
    uVar2 = 0x12;
  }
  else {
    if (iVar1 == 5) goto LAB_0099e313;
    if (iVar1 == 7) {
      *param_2 = 1;
      goto LAB_0099e36f;
    }
    if (iVar1 != 8) goto LAB_0099e36f;
    uVar2 = 0x10;
  }
  iVar1 = __handle_exc(uVar2,param_2 + 6,local_94);
  if (iVar1 == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_60 = *(undefined8 *)(param_2 + 4);
      local_50 = local_50 & 0xffffffe3 | 3;
    }
    else {
      local_50 = local_50 & 0xfffffffe;
    }
    __raise_exc(local_90,&local_94,uVar2,param_1,param_2 + 2,param_2 + 6);
  }
LAB_0099e36f:
  __ctrlfp(local_94,0xffff);
  if (((*param_2 != 8) && (DAT_00b320e8 == 0)) && (iVar1 = FUN_0098a318(param_2), iVar1 != 0)) {
    return;
  }
  __set_errno_from_matherr(*param_2);
  return;
}



/* Library Function - Single Match
    __validdrive
   
   Library: Visual Studio 2005 Release */

int __cdecl __validdrive(uint param_1)

{
  char cVar1;
  UINT UVar2;
  
  if (param_1 != 0) {
    cVar1 = (char)param_1;
    param_1 = (uint)CONCAT12(0x5c,CONCAT11(0x3a,cVar1 + '@'));
    UVar2 = GetDriveTypeA((LPCSTR)&param_1);
    if ((UVar2 == 0) || (UVar2 == 1)) {
      return 0;
    }
  }
  return 1;
}



/* Library Function - Single Match
    __getdcwd_nolock
   
   Library: Visual Studio 2005 Release */

LPSTR __getdcwd_nolock(uint param_1,LPSTR param_2,DWORD param_3)

{
  int iVar1;
  ulong *puVar2;
  int *piVar3;
  uint uVar4;
  DWORD DVar5;
  LPSTR lpBuffer;
  LPSTR local_c;
  undefined4 local_8;
  
  if (param_1 == 0) {
    uVar4 = __getdrive();
  }
  else {
    iVar1 = __validdrive(param_1);
    uVar4 = param_1;
    if (iVar1 == 0) {
      puVar2 = ___doserrno();
      *puVar2 = 0xf;
      piVar3 = __errno();
      *piVar3 = 0xd;
      __invalid_parameter(0,0,0,0,0);
      return (LPSTR)0x0;
    }
  }
  if (param_2 == (LPSTR)0x0) {
    param_1 = 0;
  }
  else {
    if ((int)param_3 < 1) {
      piVar3 = __errno();
      *piVar3 = 0x16;
      __invalid_parameter(0,0,0,0,0);
      return (LPSTR)0x0;
    }
    param_1 = param_3;
    *param_2 = '\0';
  }
  if (uVar4 == 0) {
    local_8 = CONCAT22(local_8._2_2_,0x2e);
  }
  else {
    local_8 = (uint)CONCAT12(0x2e,CONCAT11(0x3a,(char)uVar4 + '@'));
  }
  DVar5 = GetFullPathNameA((LPCSTR)&local_8,param_1,param_2,&local_c);
  if (DVar5 != 0) {
    if (param_2 != (LPSTR)0x0) {
      if ((int)param_1 <= (int)DVar5) {
        piVar3 = __errno();
        *piVar3 = 0x22;
        *param_2 = '\0';
        return (LPSTR)0x0;
      }
      return param_2;
    }
    if ((int)param_3 < (int)DVar5) {
      param_3 = DVar5;
    }
    lpBuffer = _calloc(param_3,1);
    if (lpBuffer == (LPSTR)0x0) {
      piVar3 = __errno();
      *piVar3 = 0xc;
      puVar2 = ___doserrno();
      *puVar2 = 8;
      return (LPSTR)0x0;
    }
    DVar5 = GetFullPathNameA((LPCSTR)&local_8,param_3,lpBuffer,&local_c);
    if ((DVar5 != 0) && ((int)DVar5 < (int)param_3)) {
      return lpBuffer;
    }
  }
  DVar5 = GetLastError();
  __dosmaperr(DVar5);
  return (LPSTR)0x0;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __getcwd
   
   Library: Visual Studio 2005 Release */

char * __cdecl __getcwd(char *_DstBuf,int _SizeInBytes)

{
  char *pcVar1;
  
  __lock(7);
  pcVar1 = (char *)__getdcwd_nolock(0,_DstBuf,_SizeInBytes);
  FUN_0099e561();
  return pcVar1;
}



void FUN_0099e561(void)

{
  FUN_0098c8fb(7);
  return;
}



/* Library Function - Single Match
    __mbsrchr_l
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbsrchr_l(uchar *_Str,uint _Ch,_locale_t _Locale)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  byte *pbVar4;
  byte bVar5;
  bool bVar6;
  _LocaleUpdate local_18 [4];
  int local_14;
  int local_10;
  char local_c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  _LocaleUpdate::_LocaleUpdate(local_18,_Locale);
  if (*(int *)(local_14 + 8) == 0) {
    local_8 = (byte *)_strrchr((char *)_Str,_Ch);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  else if (_Str == (uchar *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    local_8 = (byte *)0x0;
  }
  else {
    do {
      bVar5 = *_Str;
      if ((*(byte *)(bVar5 + 0x1d + local_14) & 4) == 0) {
        bVar6 = _Ch == bVar5;
LAB_0099e60c:
        pbVar4 = _Str;
        if (bVar6) {
          local_8 = _Str;
        }
      }
      else {
        pbVar4 = _Str + 1;
        bVar1 = *pbVar4;
        if (bVar1 == 0) {
          bVar6 = local_8 == (byte *)0x0;
          _Str = pbVar4;
          bVar5 = bVar1;
          goto LAB_0099e60c;
        }
        uVar2 = CONCAT11(bVar5,bVar1);
        bVar5 = bVar1;
        if (_Ch == uVar2) {
          local_8 = _Str;
        }
      }
      _Str = pbVar4 + 1;
    } while (bVar5 != 0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  return local_8;
}



/* Library Function - Single Match
    __mbsrchr
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbsrchr(uchar *_Str,uint _Ch)

{
  uchar *puVar1;
  
  puVar1 = __mbsrchr_l(_Str,_Ch,(_locale_t)0x0);
  return puVar1;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __tzset_nolock
   
   Library: Visual Studio 2005 Release */

void __tzset_nolock(void)

{
  char cVar1;
  char cVar2;
  errno_t eVar3;
  UINT CodePage;
  char *_Str1;
  int iVar4;
  size_t sVar5;
  DWORD DVar6;
  int *piVar7;
  long lVar8;
  char *pcVar9;
  int local_34;
  int local_30;
  long local_2c;
  int local_28;
  int *local_24;
  long local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00b00190;
  uStack_c = 0x99e649;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_2c = 0;
  local_24 = (int *)0x0;
  __lock(7);
  local_8 = (undefined *)0x0;
  local_24 = (int *)FUN_0099ee5d();
  eVar3 = __get_timezone(local_20);
  if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar3 = __get_daylight(&local_28);
  if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar3 = __get_dstbias(&local_2c);
  if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  CodePage = ____lc_codepage_func();
  DAT_00baa86c = 0;
  DAT_00b31fdc = 0xffffffff;
  DAT_00b31fd0 = 0xffffffff;
  _Str1 = __getenv_helper_nolock("TZ");
  if ((_Str1 == (char *)0x0) || (*_Str1 == '\0')) {
    if (DAT_00baa870 != (char *)0x0) {
      _free(DAT_00baa870);
      DAT_00baa870 = (char *)0x0;
    }
    DVar6 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_00baa7c0);
    if (DVar6 != 0xffffffff) {
      DAT_00baa86c = 1;
      local_20[0] = DAT_00baa7c0 * 0x3c;
      if (DAT_00baa806 != 0) {
        local_20[0] = local_20[0] + DAT_00baa814 * 0x3c;
      }
      if ((DAT_00baa85a == 0) || (DAT_00baa868 == 0)) {
        local_28 = 0;
        local_2c = 0;
      }
      else {
        local_28 = 1;
        local_2c = (DAT_00baa868 - DAT_00baa814) * 0x3c;
      }
      iVar4 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_00baa7c4,-1,(LPSTR)*local_24,0x3f,
                                  (LPCSTR)0x0,&local_34);
      if ((iVar4 == 0) || (local_34 != 0)) {
        *(undefined1 *)*local_24 = 0;
      }
      else {
        *(undefined1 *)(*local_24 + 0x3f) = 0;
      }
      iVar4 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_00baa818,-1,(LPSTR)local_24[1],0x3f,
                                  (LPCSTR)0x0,&local_34);
      if ((iVar4 == 0) || (local_34 != 0)) {
        *(undefined1 *)local_24[1] = 0;
      }
      else {
        *(undefined1 *)(local_24[1] + 0x3f) = 0;
      }
    }
  }
  else {
    if (DAT_00baa870 != (char *)0x0) {
      iVar4 = _strcmp(_Str1,DAT_00baa870);
      if (iVar4 == 0) goto LAB_0099e859;
      if (DAT_00baa870 != (char *)0x0) {
        _free(DAT_00baa870);
      }
    }
    sVar5 = _strlen(_Str1);
    DAT_00baa870 = __malloc_crt(sVar5 + 1);
    if (DAT_00baa870 != (char *)0x0) {
      pcVar9 = _Str1;
      sVar5 = _strlen(_Str1);
      eVar3 = _strcpy_s(DAT_00baa870,sVar5 + 1,pcVar9);
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_0099e860;
    }
  }
LAB_0099e859:
  local_30 = 1;
LAB_0099e860:
  lVar8 = local_20[0];
  piVar7 = (int *)FUN_0099ee57();
  iVar4 = local_28;
  *piVar7 = lVar8;
  piVar7 = (int *)FUN_0099ee4b();
  lVar8 = local_2c;
  *piVar7 = iVar4;
  piVar7 = (int *)FUN_0099ee51();
  *piVar7 = lVar8;
  local_8 = (undefined *)0xfffffffe;
  FUN_0099e8ec();
  piVar7 = local_24;
  if (local_30 == 0) {
    eVar3 = _strncpy_s((char *)*local_24,0x40,_Str1,3);
    if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    pcVar9 = _Str1 + 3;
    cVar1 = *pcVar9;
    if (cVar1 == '-') {
      pcVar9 = _Str1 + 4;
    }
    lVar8 = _atol(pcVar9);
    local_20[0] = lVar8 * 0xe10;
    for (; (cVar2 = *pcVar9, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':')))); pcVar9 = pcVar9 + 1)
    {
    }
    if (*pcVar9 == ':') {
      pcVar9 = pcVar9 + 1;
      lVar8 = _atol(pcVar9);
      local_20[0] = local_20[0] + lVar8 * 0x3c;
      for (; ('/' < *pcVar9 && (*pcVar9 < ':')); pcVar9 = pcVar9 + 1) {
      }
      if (*pcVar9 == ':') {
        pcVar9 = pcVar9 + 1;
        lVar8 = _atol(pcVar9);
        local_20[0] = local_20[0] + lVar8;
        for (; ('/' < *pcVar9 && (*pcVar9 < ':')); pcVar9 = pcVar9 + 1) {
        }
      }
    }
    if (cVar1 == '-') {
      local_20[0] = -local_20[0];
    }
    local_28 = (int)*pcVar9;
    if (local_28 == 0) {
      *(undefined1 *)piVar7[1] = 0;
    }
    else {
      eVar3 = _strncpy_s((char *)piVar7[1],0x40,pcVar9,3);
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    lVar8 = local_20[0];
    piVar7 = (int *)FUN_0099ee57();
    *piVar7 = lVar8;
  }
  return;
}



void FUN_0099e8ec(void)

{
  FUN_0098c8fb(7);
  return;
}



/* Library Function - Single Match
    _cvtdate
   
   Library: Visual Studio 2005 Release */

int __cdecl
cvtdate(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
       int param_8,int param_9)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  errno_t eVar3;
  int in_ECX;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long local_8;
  
  local_8 = 0;
  if (param_2 == 1) {
    uVar1 = param_3 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
      puVar4 = (&PTR_DAT_00b3207c)[in_EAX];
    }
    else {
      puVar4 = *(undefined **)(&DAT_00b320b0 + in_EAX * 4);
    }
    puVar5 = puVar4 + 1;
    iVar2 = (param_4 * 7 -
            (int)(puVar5 + param_3 * 0x16d + -0x63db +
                           ((int)(param_3 + 299) / 400 - (int)(param_3 - 1) / 100) +
                           ((int)((param_3 - 1) + ((int)(param_3 - 1) >> 0x1f & 3U)) >> 2)) % 7) +
            param_5;
    if ((int)(puVar5 + param_3 * 0x16d + -0x63db +
                       ((int)(param_3 + 299) / 400 - (int)(param_3 - 1) / 100) +
                       ((int)((param_3 - 1) + ((int)(param_3 - 1) >> 0x1f & 3U)) >> 2)) % 7 <=
        param_5) {
      puVar5 = puVar4 + -6;
    }
    puVar5 = puVar5 + iVar2;
    if (param_4 == 5) {
      if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
        iVar2 = *(int *)(&DAT_00b32080 + in_EAX * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_00b320b4 + in_EAX * 4);
      }
      if (iVar2 < (int)puVar5) {
        puVar5 = puVar5 + -7;
      }
    }
  }
  else {
    uVar1 = param_3 & 0x80000003;
    bVar6 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar6 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (((bVar6) && (iVar2 = (int)param_3 / 100, (int)param_3 % 100 != 0)) ||
       (iVar2 = (int)(param_3 + 0x76c) / 400, (int)(param_3 + 0x76c) % 400 == 0)) {
      puVar5 = (&PTR_DAT_00b3207c)[in_EAX];
    }
    else {
      puVar5 = *(undefined **)(&DAT_00b320b0 + in_EAX * 4);
    }
    puVar5 = puVar5 + param_6;
  }
  param_9 = ((in_ECX * 0x3c + param_7) * 0x3c + param_8) * 1000 + param_9;
  if (param_1 == 1) {
    DAT_00b31fd0 = param_3;
    DAT_00b31fd4 = puVar5;
    DAT_00b31fd8 = param_9;
  }
  else {
    DAT_00b31fe0 = puVar5;
    DAT_00b31fe4 = param_9;
    eVar3 = __get_dstbias(&local_8);
    if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar2 = local_8 * 1000;
    DAT_00b31fe4 = DAT_00b31fe4 + iVar2;
    if (DAT_00b31fe4 < 0) {
      DAT_00b31fe4 = DAT_00b31fe4 + 86400000;
      DAT_00b31fe0 = DAT_00b31fe0 + -1;
    }
    else {
      iVar2 = 86400000;
      if (86399999 < DAT_00b31fe4) {
        DAT_00b31fe4 = DAT_00b31fe4 + -86400000;
        DAT_00b31fe0 = DAT_00b31fe0 + 1;
      }
    }
    DAT_00b31fdc = param_3;
  }
  return iVar2;
}



/* Library Function - Single Match
    __isindst_nolock
   
   Library: Visual Studio 2005 Release */

bool __isindst_nolock(void)

{
  bool bVar1;
  errno_t eVar2;
  int iVar3;
  int *unaff_EDI;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int local_8;
  
  local_8 = 0;
  eVar2 = __get_daylight(&local_8);
  if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_8 == 0) {
    return false;
  }
  iVar4 = unaff_EDI[5];
  if ((iVar4 != DAT_00b31fd0) || (iVar4 != DAT_00b31fdc)) {
    if (DAT_00baa86c == 0) {
      cvtdate(1,1,iVar4,1,0,0,0,0,0);
      cvtdate(0,1,unaff_EDI[5],5,0,0,0,0,0);
    }
    else {
      if (DAT_00baa858 != 0) {
        uVar6 = 0;
        uVar5 = 0;
        uVar7 = DAT_00baa85e;
      }
      else {
        uVar6 = DAT_00baa85c;
        uVar5 = DAT_00baa85e;
        uVar7 = 0;
      }
      cvtdate(1,DAT_00baa858 == 0,iVar4,uVar5,uVar6,uVar7,DAT_00baa862,DAT_00baa864,DAT_00baa866);
      if (DAT_00baa804 != 0) {
        uVar6 = 0;
        uVar5 = 0;
        iVar4 = unaff_EDI[5];
        uVar7 = DAT_00baa80a;
      }
      else {
        iVar4 = unaff_EDI[5];
        uVar6 = DAT_00baa808;
        uVar5 = DAT_00baa80a;
        uVar7 = 0;
      }
      cvtdate(0,DAT_00baa804 == 0,iVar4,uVar5,uVar6,uVar7,DAT_00baa80e,DAT_00baa810,DAT_00baa812);
    }
  }
  iVar4 = unaff_EDI[7];
  if (DAT_00b31fd4 < DAT_00b31fe0) {
    if ((iVar4 < DAT_00b31fd4) || (DAT_00b31fe0 < iVar4)) {
      return false;
    }
    if ((DAT_00b31fd4 < iVar4) && (iVar4 < DAT_00b31fe0)) {
      return true;
    }
  }
  else {
    if (iVar4 < DAT_00b31fe0) {
      return true;
    }
    if (DAT_00b31fd4 < iVar4) {
      return true;
    }
    if ((DAT_00b31fe0 < iVar4) && (iVar4 < DAT_00b31fd4)) {
      return false;
    }
  }
  iVar3 = ((unaff_EDI[2] * 0x3c + unaff_EDI[1]) * 0x3c + *unaff_EDI) * 1000;
  if (iVar4 == DAT_00b31fd4) {
    bVar1 = DAT_00b31fd8 <= iVar3;
  }
  else {
    bVar1 = iVar3 < DAT_00b31fe4;
  }
  return bVar1;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tzset
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___tzset(void)

{
  if (DAT_00baa874 == 0) {
    __lock(6);
    if (DAT_00baa874 == 0) {
      __tzset_nolock();
      DAT_00baa874 = DAT_00baa874 + 1;
    }
    FUN_0099ed65();
  }
  return;
}



void FUN_0099ed65(void)

{
  FUN_0098c8fb(6);
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __isindst
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isindst(tm *_Time)

{
  int iVar1;
  
  __lock(6);
  iVar1 = __isindst_nolock();
  FUN_0099eda6();
  return iVar1;
}



void FUN_0099eda6(void)

{
  FUN_0098c8fb(6);
  return;
}



/* Library Function - Single Match
    __get_daylight
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __get_daylight(int *_Daylight)

{
  int *piVar1;
  
  if (_Daylight == (int *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return 0x16;
  }
  *_Daylight = DAT_00b31fec;
  return 0;
}



/* Library Function - Single Match
    __get_dstbias
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __get_dstbias(long *_Daylight_savings_bias)

{
  int *piVar1;
  
  if (_Daylight_savings_bias == (long *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return 0x16;
  }
  *_Daylight_savings_bias = DAT_00b31ff0;
  return 0;
}



/* Library Function - Multiple Matches With Different Base Names
    __get_daylight
    __get_dstbias
    __get_timezone
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __get_timezone(long *_Timezone)

{
  int *piVar1;
  
  if (_Timezone == (long *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return 0x16;
  }
  *_Timezone = DAT_00b31fe8;
  return 0;
}



undefined4 * FUN_0099ee4b(void)

{
  return &DAT_00b31fec;
}



undefined4 * FUN_0099ee51(void)

{
  return &DAT_00b31ff0;
}



undefined4 * FUN_0099ee57(void)

{
  return &DAT_00b31fe8;
}



undefined ** FUN_0099ee5d(void)

{
  return &PTR_DAT_00b32078;
}



/* Library Function - Single Match
    __mbsnbcpy_s_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__mbsnbcpy_s_l(uchar *_Dst,size_t _DstSizeInBytes,uchar *_Src,size_t _MaxCount,_locale_t _Locale)

{
  byte *pbVar1;
  uchar uVar2;
  int *piVar3;
  errno_t eVar4;
  uchar *puVar5;
  uchar *puVar6;
  int iVar7;
  size_t sVar8;
  byte *pbVar9;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  byte *local_8;
  
  if (_MaxCount == 0) {
    if (_Dst == (uchar *)0x0) {
      if (_DstSizeInBytes == 0) {
        return 0;
      }
      goto LAB_0099ee8e;
    }
  }
  else if (_Dst == (uchar *)0x0) goto LAB_0099ee8e;
  if (_DstSizeInBytes == 0) {
LAB_0099ee8e:
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return 0x16;
  }
  if (_MaxCount == 0) {
    *_Dst = '\0';
    return 0;
  }
  if (_Src == (uchar *)0x0) {
    *_Dst = '\0';
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return 0x16;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
  if ((local_18.mbcinfo)->ismbcodepage == 0) {
    eVar4 = _strncpy_s((char *)_Dst,_DstSizeInBytes,(char *)_Src,_MaxCount);
    goto LAB_0099f04f;
  }
  puVar5 = _Dst;
  sVar8 = _DstSizeInBytes;
  if (_MaxCount == 0xffffffff) {
    do {
      uVar2 = *_Src;
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      _Src = _Src + 1;
      if (uVar2 == '\0') break;
      sVar8 = sVar8 - 1;
    } while (sVar8 != 0);
  }
  else {
    do {
      puVar6 = puVar5;
      uVar2 = *_Src;
      *puVar6 = uVar2;
      puVar5 = puVar6 + 1;
      _Src = _Src + 1;
      if ((uVar2 == '\0') || (sVar8 = sVar8 - 1, sVar8 == 0)) break;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    if (_MaxCount == 0) {
      *puVar5 = '\0';
      puVar5 = puVar6 + 2;
    }
  }
  if (sVar8 != 0) {
    if ((int)puVar5 - (int)_Dst < 2) {
LAB_0099f05d:
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
    pbVar9 = puVar5 + -2;
    pbVar1 = pbVar9;
    while ((_Dst <= pbVar1 && (iVar7 = __ismbblead_l((uint)*pbVar1,&local_18), iVar7 != 0))) {
      pbVar1 = pbVar1 + -1;
    }
    if (((int)pbVar9 - (int)pbVar1 & 1U) == 0) goto LAB_0099f05d;
LAB_0099f041:
    *pbVar9 = 0;
    piVar3 = __errno();
    eVar4 = 0x2a;
    *piVar3 = 0x2a;
LAB_0099f04f:
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      return eVar4;
    }
    return eVar4;
  }
  if ((*_Src == '\0') || (_MaxCount == 1)) {
    pbVar9 = puVar5 + -1;
    local_8 = pbVar9;
    while ((_Dst <= local_8 && (iVar7 = __ismbblead_l((uint)*local_8,&local_18), iVar7 != 0))) {
      local_8 = local_8 + -1;
    }
    if (((int)pbVar9 - (int)local_8 & 1U) != 0) goto LAB_0099f041;
  }
  if (_MaxCount != 0xffffffff) {
    *_Dst = '\0';
    piVar3 = __errno();
    *piVar3 = 0x22;
    __invalid_parameter(0,0,0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      return 0x22;
    }
    return 0x22;
  }
  if (1 < _DstSizeInBytes) {
    pbVar9 = _Dst + (_DstSizeInBytes - 2);
    pbVar1 = pbVar9;
    while ((_Dst <= pbVar1 && (iVar7 = __ismbblead_l((uint)*pbVar1,&local_18), iVar7 != 0))) {
      pbVar1 = pbVar1 + -1;
    }
    if (((int)pbVar9 - (int)pbVar1 & 1U) != 0) {
      *pbVar9 = 0;
      goto LAB_0099efca;
    }
  }
  _Dst[_DstSizeInBytes - 1] = '\0';
LAB_0099efca:
  if (local_c != '\0') {
    *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
  }
  return 0x50;
}



/* Library Function - Single Match
    __mbsdec_l
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbsdec_l(uchar *_Start,uchar *_Pos,_locale_t _Locale)

{
  int *piVar1;
  byte *pbVar2;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  if (_Start == (uchar *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else if (_Pos == (uchar *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else if (_Start < _Pos) {
    _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
    pbVar2 = _Pos + -1;
    if (*(int *)(local_10 + 8) != 0) {
      do {
        pbVar2 = pbVar2 + -1;
        if (pbVar2 < _Start) break;
      } while ((*(byte *)(*pbVar2 + 0x1d + local_10) & 4) != 0);
      pbVar2 = _Pos + (-1 - ((int)_Pos - (int)pbVar2 & 1U));
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return pbVar2;
    }
    return pbVar2;
  }
  return (uchar *)0x0;
}



/* Library Function - Single Match
    __mbsdec
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbsdec(uchar *_Start,uchar *_Pos)

{
  uchar *puVar1;
  
  puVar1 = __mbsdec_l(_Start,_Pos,(_locale_t)0x0);
  return puVar1;
}



/* Library Function - Single Match
    __frnd
   
   Library: Visual Studio 2005 Release */

float10 __frnd(double param_1)

{
  return (float10)ROUND(param_1);
}



/* Library Function - Single Match
    __ld12tod
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl __ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  undefined4 uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  _LDBL12 *p_Var9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  _LDBL12 *local_8;
  
  local_24[3] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar10 = *(uint *)(_Ifp->ld12 + 6);
  local_24[0] = uVar10;
  uVar1 = *(undefined4 *)(_Ifp->ld12 + 2);
  uVar11 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar12 = uVar11 - 0x3fff;
  iVar2 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_24[1] = uVar1;
  local_24[2] = iVar2;
  if (iVar12 == -0x3fff) {
    iVar12 = 0;
    iVar2 = 0;
    do {
      if (local_24[iVar2] != 0) {
        local_24[0] = 0;
        local_24[1] = 0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_0099f62a;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_00b320f4 - 1;
    iVar4 = (int)(DAT_00b320f4 + ((int)DAT_00b320f4 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_00b320f4 & 0x8000001f;
    local_14 = iVar12;
    local_10 = iVar4;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    puVar7 = local_24 + iVar4;
    bVar5 = (byte)(0x1f - uVar8);
    local_c = 0x1f - uVar8;
    if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
      uVar8 = local_24[iVar4] & ~(-1 << (bVar5 & 0x1f));
      while( true ) {
        if (uVar8 != 0) {
          iVar4 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var9 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar6 = local_24 + iVar4;
          _Ifp = (_LDBL12 *)(p_Var9->ld12 + *puVar6);
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_0099f25e;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_0099f265;
LAB_0099f25e:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_0099f265:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_0099f273;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar6 = local_24 + iVar4;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar6)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar6);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar4 = iVar4 + 1;
        if (2 < iVar4) break;
        uVar8 = local_24[iVar4];
      }
    }
LAB_0099f273:
    *puVar7 = *puVar7 & -1 << ((byte)local_c & 0x1f);
    iVar4 = local_10 + 1;
    if (iVar4 < 3) {
      puVar7 = local_24 + iVar4;
      for (iVar13 = 3 - iVar4; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar12 = uVar11 - 0x3ffe;
    }
    if (iVar12 < (int)(DAT_00b320f0 - DAT_00b320f4)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_00b320f0 < iVar12) {
        if (iVar12 < DAT_00b320ec) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_00b32100;
          iVar2 = (int)(DAT_00b320f8 + ((int)DAT_00b320f8 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_00b320f8 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            local_14 = local_24[(int)_Ifp] & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = local_24[(int)_Ifp] >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar4 = 2;
          puVar7 = local_24 + (2 - iVar2);
          do {
            if (iVar4 < iVar2) {
              local_24[iVar4] = 0;
            }
            else {
              local_24[iVar4] = *puVar7;
            }
            iVar4 = iVar4 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar4);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[0] = 0x80000000;
          iVar12 = (int)(DAT_00b320f8 + ((int)DAT_00b320f8 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_00b320f8 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            uVar11 = local_24[(int)_Ifp];
            local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar7 = local_24 + (2 - iVar12);
          do {
            if (iVar2 < iVar12) {
              local_24[iVar2] = 0;
            }
            else {
              local_24[iVar2] = *puVar7;
            }
            iVar2 = iVar2 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar2);
          iVar12 = DAT_00b32100 + DAT_00b320ec;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_0099f62a;
      }
      local_14 = DAT_00b320f0 - local_14;
      local_24[0] = uVar10;
      local_24[1] = uVar1;
      iVar12 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = local_14 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_00b320f4 - 1;
      iVar12 = (int)(DAT_00b320f4 + ((int)DAT_00b320f4 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_00b320f4 & 0x8000001f;
      local_10 = iVar12;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      bVar5 = (byte)(0x1f - uVar10);
      puVar7 = local_24 + iVar12;
      local_14 = 0x1f - uVar10;
      if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
        uVar10 = local_24[iVar12] & ~(-1 << (bVar5 & 0x1f));
        while (uVar10 == 0) {
          iVar12 = iVar12 + 1;
          if (2 < iVar12) goto LAB_0099f416;
          uVar10 = local_24[iVar12];
        }
        iVar12 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar8 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar11 = local_24[iVar12];
        uVar10 = uVar11 + uVar8;
        if ((uVar10 < uVar11) || (uVar10 < uVar8)) {
          bVar14 = true;
        }
        local_24[iVar12] = uVar10;
        while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar14))) {
          uVar11 = local_24[iVar12];
          uVar10 = uVar11 + 1;
          bVar14 = false;
          if ((uVar10 < uVar11) || (uVar10 == 0)) {
            bVar14 = true;
          }
          local_24[iVar12] = uVar10;
        }
      }
LAB_0099f416:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_00b320f8 + 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
    }
    iVar12 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_0099f62a:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_00b320f8 & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_00b320fc == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_00b320fc == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}



/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl __ld12tof(_LDBL12 *_Ifp,_CRT_FLOAT *_F)

{
  uint uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  byte bVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  _LDBL12 *p_Var8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  bool bVar14;
  uint local_24;
  float local_20;
  uint local_1c [5];
  _LDBL12 *local_8;
  
  local_1c[1] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar9 = *(uint *)(_Ifp->ld12 + 6);
  local_24 = uVar9;
  fVar12 = *(float *)(_Ifp->ld12 + 2);
  uVar10 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar11 = uVar10 - 0x3fff;
  uVar1 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_20 = fVar12;
  local_1c[0] = uVar1;
  if (iVar11 == -0x3fff) {
    iVar11 = 0;
    iVar2 = 0;
    do {
      if ((&local_24)[iVar2] != 0) {
        local_24 = 0;
        local_20 = 0.0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_0099fb6c;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_00b3210c - 1;
    iVar2 = (int)(DAT_00b3210c + ((int)DAT_00b3210c >> 0x1f & 0x1fU)) >> 5;
    uVar7 = DAT_00b3210c & 0x8000001f;
    local_1c[2] = iVar11;
    local_1c[3] = iVar2;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
    }
    puVar6 = &local_24 + iVar2;
    bVar4 = (byte)(0x1f - uVar7);
    local_1c[4] = 0x1f - uVar7;
    if ((*puVar6 & 1 << (bVar4 & 0x1f)) != 0) {
      uVar7 = (&local_24)[iVar2] & ~(-1 << (bVar4 & 0x1f));
      while( true ) {
        if (uVar7 != 0) {
          iVar2 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var8 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar5 = &local_24 + iVar2;
          _Ifp = (_LDBL12 *)(p_Var8->ld12 + *puVar5);
          if (_Ifp < (_LDBL12 *)*puVar5) goto LAB_0099f7a0;
          bVar14 = _Ifp < p_Var8;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_0099f7a7;
LAB_0099f7a0:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_0099f7a7:
              iVar2 = iVar2 + -1;
              *puVar5 = (uint)_Ifp;
              if ((iVar2 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_0099f7b5;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar5 = &local_24 + iVar2;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar5)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar5);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar2 = iVar2 + 1;
        if (2 < iVar2) break;
        uVar7 = (&local_24)[iVar2];
      }
    }
LAB_0099f7b5:
    *puVar6 = *puVar6 & -1 << ((byte)local_1c[4] & 0x1f);
    iVar2 = local_1c[3] + 1;
    if (iVar2 < 3) {
      puVar6 = &local_24 + iVar2;
      for (iVar13 = 3 - iVar2; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar11 = uVar10 - 0x3ffe;
    }
    if (iVar11 < (int)(DAT_00b32108 - DAT_00b3210c)) {
      local_24 = 0;
      local_20 = 0.0;
    }
    else {
      if (DAT_00b32108 < iVar11) {
        if (iVar11 < DAT_00b32104) {
          local_24 = local_24 & 0x7fffffff;
          iVar11 = iVar11 + DAT_00b32118;
          iVar2 = (int)(DAT_00b32110 + ((int)DAT_00b32110 >> 0x1f & 0x1fU)) >> 5;
          uVar9 = DAT_00b32110 & 0x8000001f;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
          }
          local_1c[3] = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar9);
          do {
            local_1c[2] = (&local_24)[(int)_Ifp] & ~(-1 << ((byte)uVar9 & 0x1f));
            (&local_24)[(int)_Ifp] = (&local_24)[(int)_Ifp] >> ((byte)uVar9 & 0x1f) | local_1c[3];
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar13 = 2;
          puVar6 = local_1c + -iVar2;
          do {
            if (iVar13 < iVar2) {
              (&local_24)[iVar13] = 0;
            }
            else {
              (&local_24)[iVar13] = *puVar6;
            }
            iVar13 = iVar13 + -1;
            puVar6 = puVar6 + -1;
          } while (-1 < iVar13);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_20 = 0.0;
          local_1c[0] = 0;
          local_24 = 0x80000000;
          iVar11 = (int)(DAT_00b32110 + ((int)DAT_00b32110 >> 0x1f & 0x1fU)) >> 5;
          uVar9 = DAT_00b32110 & 0x8000001f;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
          }
          local_1c[3] = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar9);
          do {
            uVar1 = (&local_24)[(int)_Ifp];
            local_1c[2] = uVar1 & ~(-1 << ((byte)uVar9 & 0x1f));
            (&local_24)[(int)_Ifp] = uVar1 >> ((byte)uVar9 & 0x1f) | local_1c[3];
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar6 = local_1c + -iVar11;
          do {
            if (iVar2 < iVar11) {
              (&local_24)[iVar2] = 0;
            }
            else {
              (&local_24)[iVar2] = *puVar6;
            }
            iVar2 = iVar2 + -1;
            puVar6 = puVar6 + -1;
          } while (-1 < iVar2);
          iVar11 = DAT_00b32118 + DAT_00b32104;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_0099fb6c;
      }
      local_1c[2] = DAT_00b32108 - local_1c[2];
      local_24 = uVar9;
      local_20 = fVar12;
      iVar11 = (int)(local_1c[2] + ((int)local_1c[2] >> 0x1f & 0x1fU)) >> 5;
      uVar9 = local_1c[2] & 0x8000001f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      local_1c[3] = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar9);
      do {
        uVar1 = (&local_24)[(int)_Ifp];
        local_1c[2] = uVar1 & ~(-1 << ((byte)uVar9 & 0x1f));
        (&local_24)[(int)_Ifp] = uVar1 >> ((byte)uVar9 & 0x1f) | local_1c[3];
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar6 = local_1c + -iVar11;
      do {
        if (iVar2 < iVar11) {
          (&local_24)[iVar2] = 0;
        }
        else {
          (&local_24)[iVar2] = *puVar6;
        }
        iVar2 = iVar2 + -1;
        puVar6 = puVar6 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_00b3210c - 1;
      iVar11 = (int)(DAT_00b3210c + ((int)DAT_00b3210c >> 0x1f & 0x1fU)) >> 5;
      uVar9 = DAT_00b3210c & 0x8000001f;
      local_1c[3] = iVar11;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      bVar4 = (byte)(0x1f - uVar9);
      puVar6 = &local_24 + iVar11;
      local_1c[2] = 0x1f - uVar9;
      if ((*puVar6 & 1 << (bVar4 & 0x1f)) != 0) {
        uVar9 = (&local_24)[iVar11] & ~(-1 << (bVar4 & 0x1f));
        while (uVar9 == 0) {
          iVar11 = iVar11 + 1;
          if (2 < iVar11) goto LAB_0099f958;
          uVar9 = (&local_24)[iVar11];
        }
        iVar11 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar10 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar1 = (&local_24)[iVar11];
        uVar9 = uVar1 + uVar10;
        if ((uVar9 < uVar1) || (uVar9 < uVar10)) {
          bVar14 = true;
        }
        (&local_24)[iVar11] = uVar9;
        while ((iVar11 = iVar11 + -1, -1 < iVar11 && (bVar14))) {
          uVar1 = (&local_24)[iVar11];
          uVar9 = uVar1 + 1;
          bVar14 = false;
          if ((uVar9 < uVar1) || (uVar9 == 0)) {
            bVar14 = true;
          }
          (&local_24)[iVar11] = uVar9;
        }
      }
LAB_0099f958:
      *puVar6 = *puVar6 & -1 << ((byte)local_1c[2] & 0x1f);
      iVar11 = local_1c[3] + 1;
      if (iVar11 < 3) {
        puVar6 = &local_24 + iVar11;
        for (iVar2 = 3 - iVar11; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      uVar9 = DAT_00b32110 + 1;
      iVar11 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5;
      uVar9 = uVar9 & 0x8000001f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      local_1c[3] = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar9);
      do {
        uVar1 = (&local_24)[(int)_Ifp];
        local_1c[2] = uVar1 & ~(-1 << ((byte)uVar9 & 0x1f));
        (&local_24)[(int)_Ifp] = uVar1 >> ((byte)uVar9 & 0x1f) | local_1c[3];
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar6 = local_1c + -iVar11;
      do {
        if (iVar2 < iVar11) {
          (&local_24)[iVar2] = 0;
        }
        else {
          (&local_24)[iVar2] = *puVar6;
        }
        iVar2 = iVar2 + -1;
        puVar6 = puVar6 + -1;
      } while (-1 < iVar2);
    }
    iVar11 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_0099fb6c:
  fVar12 = (float)(iVar11 << (0x1fU - (char)DAT_00b32110 & 0x1f) |
                   -(uint)(local_1c[1] != 0) & 0x80000000 | local_24);
  if (DAT_00b32114 == 0x40) {
    _F[1].f = fVar12;
    _F->f = local_20;
  }
  else if (DAT_00b32114 == 0x20) {
    _F->f = fVar12;
  }
  return IVar3;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___mtold12
   
   Library: Visual Studio 2005 Release */

void ___mtold12(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  sVar6 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar2 = *param_3;
    uVar9 = *param_3;
    uVar1 = param_3[1];
    uVar10 = param_3[2];
    uVar8 = param_3[1] * 2;
    bVar4 = false;
    uVar7 = (param_3[2] * 2 | param_3[1] >> 0x1f) * 2 | uVar8 >> 0x1f;
    uVar3 = uVar2 * 4;
    uVar8 = (uVar8 | uVar2 >> 0x1f) * 2 | uVar2 * 2 >> 0x1f;
    uVar2 = uVar3 + uVar9;
    *param_3 = uVar3;
    param_3[1] = uVar8;
    param_3[2] = uVar7;
    if ((uVar2 < uVar3) || (uVar2 < uVar9)) {
      bVar4 = true;
    }
    bVar5 = false;
    *param_3 = uVar2;
    if (bVar4) {
      uVar9 = uVar8 + 1;
      if ((uVar9 < uVar8) || (uVar9 == 0)) {
        bVar5 = true;
      }
      param_3[1] = uVar9;
      if (bVar5) {
        param_3[2] = uVar7 + 1;
      }
    }
    uVar9 = param_3[1] + uVar1;
    bVar4 = false;
    if ((uVar9 < param_3[1]) || (uVar9 < uVar1)) {
      bVar4 = true;
    }
    param_3[1] = uVar9;
    if (bVar4) {
      param_3[2] = param_3[2] + 1;
    }
    param_3[2] = param_3[2] + uVar10;
    bVar4 = false;
    uVar1 = uVar2 * 2;
    uVar10 = uVar9 * 2 | uVar2 >> 0x1f;
    uVar9 = param_3[2] * 2 | uVar9 >> 0x1f;
    *param_3 = uVar1;
    param_3[1] = uVar10;
    param_3[2] = uVar9;
    uVar2 = uVar1 + (int)*param_1;
    if ((uVar2 < uVar1) || (uVar2 < (uint)(int)*param_1)) {
      bVar4 = true;
    }
    *param_3 = uVar2;
    if (bVar4) {
      uVar2 = uVar10 + 1;
      bVar4 = false;
      if ((uVar2 < uVar10) || (uVar2 == 0)) {
        bVar4 = true;
      }
      param_3[1] = uVar2;
      if (bVar4) {
        param_3[2] = uVar9 + 1;
      }
    }
    param_1 = param_1 + 1;
  }
  while (param_3[2] == 0) {
    param_3[2] = param_3[1] >> 0x10;
    sVar6 = sVar6 + -0x10;
    param_3[1] = param_3[1] << 0x10 | *param_3 >> 0x10;
    *param_3 = *param_3 << 0x10;
  }
  uVar2 = param_3[2];
  while ((uVar2 & 0x8000) == 0) {
    uVar9 = *param_3;
    uVar1 = param_3[1];
    sVar6 = sVar6 + -1;
    *param_3 = uVar9 * 2;
    uVar2 = param_3[2] * 2;
    param_3[1] = uVar1 * 2 | uVar9 >> 0x1f;
    param_3[2] = uVar2 | uVar1 >> 0x1f;
  }
  *(short *)((int)param_3 + 10) = sVar6;
  return;
}



/* Library Function - Single Match
    __mbtowc_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale)

{
  wchar_t *pwVar1;
  int iVar2;
  int *piVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  if ((_SrcCh != (char *)0x0) && (_SrcSizeInBytes != 0)) {
    if (*_SrcCh != '\0') {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
      if ((local_14.locinfo)->lc_category[0].wlocale != (wchar_t *)0x0) {
        iVar2 = __isleadbyte_l((uint)(byte)*_SrcCh,&local_14);
        if (iVar2 == 0) {
          iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,1,_DstCh,
                                      (uint)(_DstCh != (wchar_t *)0x0));
          if (iVar2 != 0) goto LAB_0099fdc6;
        }
        else {
          pwVar1 = (local_14.locinfo)->locale_name[3];
          if ((((1 < (int)pwVar1) && ((int)pwVar1 <= (int)_SrcSizeInBytes)) &&
              (iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,(int)pwVar1,
                                           _DstCh,(uint)(_DstCh != (wchar_t *)0x0)), iVar2 != 0)) ||
             (((local_14.locinfo)->locale_name[3] <= _SrcSizeInBytes && (_SrcCh[1] != '\0')))) {
            pwVar1 = (local_14.locinfo)->locale_name[3];
            if (local_8 == '\0') {
              return (int)pwVar1;
            }
            *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
            return (int)pwVar1;
          }
        }
        piVar3 = __errno();
        *piVar3 = 0x2a;
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return -1;
      }
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = (ushort)(byte)*_SrcCh;
      }
LAB_0099fdc6:
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return 1;
    }
    if (_DstCh != (wchar_t *)0x0) {
      *_DstCh = L'\0';
    }
  }
  return 0;
}



/* Library Function - Single Match
    _mbtowc
   
   Library: Visual Studio 2005 Release */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  int iVar1;
  
  iVar1 = __mbtowc_l(_DstCh,_SrcCh,_SrcSizeInBytes,(_locale_t)0x0);
  return iVar1;
}



/* Library Function - Single Match
    __mbbtype_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbbtype_l(uchar _Ch,int _CType,_locale_t _Locale)

{
  byte bVar1;
  uint uVar2;
  int local_14;
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  uVar2 = (uint)_Ch;
  if (_CType == 1) {
    if ((*(byte *)(uVar2 + 0x1d + local_10) & 8) != 0) {
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return 2;
    }
  }
  else {
    bVar1 = *(byte *)(uVar2 + 0x1d + local_10);
    if ((bVar1 & 4) != 0) {
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return 1;
    }
    if (((*(ushort *)(*(int *)(local_14 + 200) + uVar2 * 2) & 0x157) != 0) || ((bVar1 & 3) != 0)) {
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return -1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __putwch_nolock
   
   Library: Visual Studio 2005 Release */

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  BOOL BVar1;
  DWORD DVar2;
  UINT CodePage;
  wchar_t *lpWideCharStr;
  int cchWideChar;
  CHAR *lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  DWORD local_14;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  if (DAT_00b323dc != 0) {
    if (DAT_00b323e4 == (HANDLE)0xfffffffe) {
      ___initconout();
    }
    if (DAT_00b323e4 == (HANDLE)0xffffffff) {
      return 0xffff;
    }
    BVar1 = WriteConsoleW(DAT_00b323e4,&_WCh,1,&local_14,(LPVOID)0x0);
    if (BVar1 != 0) {
      DAT_00b323dc = 1;
      return _WCh;
    }
    if (DAT_00b323dc != 2) {
      return 0xffff;
    }
    DVar2 = GetLastError();
    if (DVar2 != 0x78) {
      return 0xffff;
    }
    DAT_00b323dc = 0;
  }
  lpUsedDefaultChar = (LPBOOL)0x0;
  lpDefaultChar = (LPCSTR)0x0;
  cbMultiByte = 5;
  lpMultiByteStr = local_10;
  cchWideChar = 1;
  lpWideCharStr = &_WCh;
  DVar2 = 0;
  CodePage = GetConsoleOutputCP();
  DVar2 = WideCharToMultiByte(CodePage,DVar2,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  if ((DAT_00b323e4 != (HANDLE)0xffffffff) &&
     (BVar1 = WriteConsoleA(DAT_00b323e4,local_10,DVar2,&local_14,(LPVOID)0x0), BVar1 != 0)) {
    return _WCh;
  }
  return 0xffff;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x009a04e3) */
/* WARNING: Removing unreachable block (ram,0x009a04ed) */
/* WARNING: Removing unreachable block (ram,0x009a04f2) */
/* Library Function - Single Match
    _$I10_OUTPUT
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl
_I10_OUTPUT(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  int iVar2;
  bool bVar3;
  errno_t eVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort uVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  short *psVar13;
  short *psVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort *puVar20;
  uint uVar21;
  uint uVar22;
  char *pcVar23;
  undefined *local_6c;
  ushort *local_60;
  ushort *local_5c;
  ushort *local_58;
  int local_54;
  short local_50;
  ushort *local_4c;
  uint local_48;
  int local_44;
  ushort local_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined4 local_24;
  undefined4 uStack_20;
  ushort uStack_1c;
  undefined1 local_1a;
  byte bStack_19;
  byte local_14;
  undefined1 uStack_13;
  ushort uStack_12;
  ushort local_10 [4];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (byte)param_1;
  uStack_13 = (undefined1)((uint)param_1 >> 8);
  uStack_12 = (ushort)((uint)param_1 >> 0x10);
  local_10[0] = (ushort)param_2;
  uStack_20 = CONCAT22(local_10[0],uStack_12);
  local_10[1] = (ushort)(param_2 >> 0x10);
  local_10[2] = param_3;
  uVar5 = param_3 & 0x8000;
  uVar9 = param_3 & 0x7fff;
  local_34 = 0xcccccccc;
  local_30 = 0xcccccccc;
  local_2c._0_1_ = 0xcc;
  local_2c._1_1_ = 0xcc;
  uStack_2a = 0xfb;
  uStack_29 = 0x3f;
  if (uVar5 == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar9 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
    *(byte *)(param_6 + 1) = ((uVar5 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
    return 1;
  }
  if ((short)uVar9 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((uVar5 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_009a0121;
        pcVar23 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_009a0121:
          pcVar23 = "1#QNAN";
          goto LAB_009a0126;
        }
        pcVar23 = "1#IND";
      }
      eVar4 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar23);
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 5;
    }
    else {
      pcVar23 = "1#SNAN";
LAB_009a0126:
      eVar4 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar23);
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 6;
    }
    return 0;
  }
  local_50 = (short)(((uVar9 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar9 * 0x4d10 >>
                    0x10);
  uVar11 = (uint)local_50;
  local_1a = (undefined1)uVar9;
  bStack_19 = (byte)(uVar9 >> 8);
  local_24._2_2_ = (ushort)param_1;
  local_24._0_2_ = 0;
  local_24 = param_1 << 0x10;
  local_6c = &DAT_00b320c0;
  uStack_1c = local_10[1];
  if (uVar11 != 0) {
    uVar9 = -uVar11;
    local_24 = param_1 << 0x10;
    uStack_20 = CONCAT22(local_10[0],uStack_12);
    if ((int)-uVar11 < 0) {
      local_6c = &DAT_00b32220;
      uVar9 = uVar11;
    }
joined_r0x009a01b4:
    do {
      if (uVar9 == 0) break;
      local_6c = local_6c + 0x54;
      uVar11 = uVar9 & 7;
      uVar9 = (int)uVar9 >> 3;
      if (uVar11 != 0) {
        puVar7 = (ushort *)(local_6c + uVar11 * 0xc);
        if (0x7fff < *puVar7) {
          local_40 = (ushort)*(undefined4 *)puVar7;
          uStack_3e = (undefined2)((uint)*(undefined4 *)puVar7 >> 0x10);
          puVar20 = puVar7 + 4;
          uStack_3c = (undefined2)*(undefined4 *)(puVar7 + 2);
          uStack_3a = (undefined2)((uint)*(undefined4 *)(puVar7 + 2) >> 0x10);
          puVar7 = &local_40;
          local_38 = *(undefined4 *)puVar20;
          iVar12 = CONCAT22(uStack_3c,uStack_3e) + -1;
          uStack_3e = (undefined2)iVar12;
          uStack_3c = (undefined2)((uint)iVar12 >> 0x10);
        }
        uVar8 = CONCAT11(bStack_19,local_1a) & 0x7fff;
        uVar18 = puVar7[5] & 0x7fff;
        local_4c = (ushort *)0x0;
        local_14 = 0;
        uStack_13 = 0;
        uStack_12 = 0;
        local_10[0] = 0;
        local_10[1] = 0;
        local_10[2] = 0;
        local_10[3] = 0;
        uVar6 = (puVar7[5] ^ CONCAT11(bStack_19,local_1a)) & 0x8000;
        uVar19 = uVar18 + uVar8;
        if (((uVar8 < 0x7fff) && (uVar18 < 0x7fff)) && (uVar19 < 0xbffe)) {
          if (uVar19 < 0x3fc0) {
            uStack_1c = 0;
            local_1a = 0;
            bStack_19 = 0;
            uStack_20._0_2_ = 0;
            uStack_20._2_2_ = 0;
            uStack_20 = 0;
            local_24._0_2_ = 0;
            local_24._2_2_ = 0;
            local_24 = 0;
            goto joined_r0x009a01b4;
          }
          if (((uVar8 == 0) &&
              (uVar19 = uVar19 + 1,
              (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
             ((uStack_20 == 0 && (local_24 == 0)))) {
            local_1a = 0;
            bStack_19 = 0;
            goto joined_r0x009a01b4;
          }
          if (((uVar18 == 0) && (uVar19 = uVar19 + 1, (*(uint *)(puVar7 + 4) & 0x7fffffff) == 0)) &&
             ((*(int *)(puVar7 + 2) == 0 && (*(int *)puVar7 == 0)))) {
            uStack_1c = 0;
            local_1a = 0;
            bStack_19 = 0;
            uStack_20._0_2_ = 0;
            uStack_20._2_2_ = 0;
            uStack_20 = 0;
            local_24._0_2_ = 0;
            local_24._2_2_ = 0;
            local_24 = 0;
            goto joined_r0x009a01b4;
          }
          puVar20 = local_10;
          local_60 = (ushort *)0x0;
          local_44 = 5;
          do {
            local_54 = local_44;
            if (0 < local_44) {
              local_5c = (ushort *)((int)&local_24 + (int)local_60 * 2);
              local_58 = puVar7 + 4;
              do {
                bVar3 = false;
                uVar11 = *(uint *)(puVar20 + -2) + (uint)*local_5c * (uint)*local_58;
                if ((uVar11 < *(uint *)(puVar20 + -2)) ||
                   (uVar11 < (uint)*local_5c * (uint)*local_58)) {
                  bVar3 = true;
                }
                *(uint *)(puVar20 + -2) = uVar11;
                if (bVar3) {
                  *puVar20 = *puVar20 + 1;
                }
                local_5c = local_5c + 1;
                local_58 = local_58 + -1;
                local_54 = local_54 + -1;
              } while (0 < local_54);
            }
            puVar20 = puVar20 + 1;
            local_60 = (ushort *)((int)local_60 + 1);
            local_44 = local_44 + -1;
          } while (0 < local_44);
          uVar19 = uVar19 + 0xc002;
          if ((short)uVar19 < 1) {
LAB_009a036b:
            uVar19 = uVar19 - 1;
            if ((short)uVar19 < 0) {
              local_48 = (uint)(ushort)-uVar19;
              uVar19 = 0;
              do {
                if ((local_14 & 1) != 0) {
                  local_4c = (ushort *)((int)local_4c + 1);
                }
                iVar15 = CONCAT22(local_10[3],local_10[2]);
                uVar11 = CONCAT22(local_10[1],local_10[0]);
                iVar12 = CONCAT22(local_10[1],local_10[0]);
                local_10[2] = (ushort)(CONCAT22(local_10[3],local_10[2]) >> 1);
                local_10[3] = local_10[3] >> 1;
                local_10[1] = local_10[1] >> 1 | (ushort)((uint)(iVar15 << 0x1f) >> 0x10);
                uVar21 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar12 << 0x1f) >> 0x10);
                local_48 = local_48 - 1;
                local_10[0] = (ushort)(uVar11 >> 1);
                local_14 = (byte)uVar21;
                uStack_13 = (undefined1)(uVar21 >> 8);
              } while (local_48 != 0);
              if (local_4c != (ushort *)0x0) {
                local_14 = local_14 | 1;
              }
            }
          }
          else {
            do {
              uVar8 = uStack_12;
              if ((local_10[3] & 0x8000) != 0) break;
              iVar12 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
              local_14 = (byte)iVar12;
              uStack_13 = (undefined1)((uint)iVar12 >> 8);
              uStack_12 = (ushort)((uint)iVar12 >> 0x10);
              iVar12 = CONCAT22(local_10[1],local_10[0]) * 2;
              local_10[0] = (ushort)iVar12 | uVar8 >> 0xf;
              iVar15 = CONCAT22(local_10[3],local_10[2]) * 2;
              local_10[2] = (ushort)iVar15 | local_10[1] >> 0xf;
              uVar19 = uVar19 - 1;
              local_10[1] = (ushort)((uint)iVar12 >> 0x10);
              local_10[3] = (ushort)((uint)iVar15 >> 0x10);
            } while (0 < (short)uVar19);
            if ((short)uVar19 < 1) goto LAB_009a036b;
          }
          if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
             (uStack_20 = CONCAT22(local_10[2],local_10[1]),
             local_24 = CONCAT22(local_10[0],uStack_12),
             (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
            if (CONCAT22(local_10[0],uStack_12) == -1) {
              uStack_12 = 0;
              local_10[0] = 0;
              local_24 = 0;
              if (CONCAT22(local_10[2],local_10[1]) == -1) {
                local_10[1] = 0;
                local_10[2] = 0;
                if (local_10[3] == 0xffff) {
                  local_10[3] = 0x8000;
                  uVar19 = uVar19 + 1;
                  uStack_20 = 0;
                  local_24 = 0;
                }
                else {
                  local_10[3] = local_10[3] + 1;
                  uStack_20 = 0;
                  local_24 = 0;
                }
              }
              else {
                uStack_20 = CONCAT22(local_10[2],local_10[1]) + 1;
                local_10[1] = (ushort)uStack_20;
                local_10[2] = (ushort)(uStack_20 >> 0x10);
              }
            }
            else {
              local_24 = CONCAT22(local_10[0],uStack_12) + 1;
              uStack_12 = (ushort)local_24;
              local_10[0] = (ushort)(local_24 >> 0x10);
              uStack_20 = CONCAT22(local_10[2],local_10[1]);
            }
          }
          if (uVar19 < 0x7fff) {
            bStack_19 = (byte)(uVar19 >> 8) | (byte)(uVar6 >> 8);
            uStack_1c = local_10[3];
            local_1a = (undefined1)uVar19;
            goto joined_r0x009a01b4;
          }
        }
        uStack_20._0_2_ = 0;
        uStack_20._2_2_ = 0;
        uStack_20 = 0;
        iVar12 = (-(uint)(uVar6 != 0) & 0x80000000) + 0x7fff8000;
        local_24._0_2_ = 0;
        local_24._2_2_ = 0;
        local_24 = 0;
        uStack_1c = (ushort)iVar12;
        local_1a = (undefined1)((uint)iVar12 >> 0x10);
        bStack_19 = (byte)((uint)iVar12 >> 0x18);
      }
    } while( true );
  }
  uVar9 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
  if ((ushort)(uVar9 >> 0x10) < 0x3fff) goto LAB_009a06b1;
  local_50 = local_50 + 1;
  uVar9 = uVar9 >> 0x10 & 0x7fff;
  iVar12 = uVar9 + 0x3ffb;
  local_5c = (ushort *)0x0;
  local_14 = 0;
  uStack_13 = 0;
  uStack_12 = 0;
  local_10[0] = 0;
  local_10[1] = 0;
  local_10[2] = 0;
  local_10[3] = 0;
  if (((ushort)uVar9 < 0x7fff) && ((ushort)iVar12 < 0xbffe)) {
    if (0x3fbf < (ushort)iVar12) {
      if (((((ushort)uVar9 == 0) &&
           (iVar12 = uVar9 + 0x3ffc,
           (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
          (uStack_20 == 0)) && (local_24 == 0)) {
        local_1a = 0;
        bStack_19 = 0;
        goto LAB_009a06b1;
      }
      local_58 = (ushort *)0x0;
      puVar7 = local_10;
      local_44 = 5;
      do {
        local_54 = local_44;
        if (0 < local_44) {
          local_60 = &local_2c;
          local_4c = (ushort *)((int)&local_24 + (int)local_58 * 2);
          do {
            bVar3 = false;
            uVar9 = *(uint *)(puVar7 + -2) + (uint)*local_60 * (uint)*local_4c;
            if ((uVar9 < *(uint *)(puVar7 + -2)) || (uVar9 < (uint)*local_60 * (uint)*local_4c)) {
              bVar3 = true;
            }
            *(uint *)(puVar7 + -2) = uVar9;
            if (bVar3) {
              *puVar7 = *puVar7 + 1;
            }
            local_4c = local_4c + 1;
            local_60 = local_60 + -1;
            local_54 = local_54 + -1;
          } while (0 < local_54);
        }
        puVar7 = puVar7 + 1;
        local_58 = (ushort *)((int)local_58 + 1);
        local_44 = local_44 + -1;
      } while (0 < local_44);
      iVar12 = iVar12 + 0xc002;
      if ((short)iVar12 < 1) {
LAB_009a05bd:
        uVar19 = (ushort)(iVar12 + 0xffff);
        if ((short)uVar19 < 0) {
          uVar9 = -(iVar12 + 0xffff);
          uVar11 = uVar9 & 0xffff;
          uVar19 = uVar19 + (short)uVar9;
          do {
            if ((local_14 & 1) != 0) {
              local_5c = (ushort *)((int)local_5c + 1);
            }
            iVar15 = CONCAT22(local_10[3],local_10[2]);
            uVar9 = CONCAT22(local_10[1],local_10[0]);
            iVar12 = CONCAT22(local_10[1],local_10[0]);
            local_10[2] = (ushort)(CONCAT22(local_10[3],local_10[2]) >> 1);
            local_10[3] = local_10[3] >> 1;
            local_10[1] = local_10[1] >> 1 | (ushort)((uint)(iVar15 << 0x1f) >> 0x10);
            uVar21 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
            uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar12 << 0x1f) >> 0x10);
            uVar11 = uVar11 - 1;
            local_10[0] = (ushort)(uVar9 >> 1);
            local_14 = (byte)uVar21;
            uStack_13 = (undefined1)(uVar21 >> 8);
          } while (uVar11 != 0);
          if (local_5c != (ushort *)0x0) {
            local_14 = local_14 | 1;
          }
        }
      }
      else {
        do {
          uVar19 = uStack_12;
          if ((local_10[3] & 0x8000) != 0) break;
          iVar15 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
          local_14 = (byte)iVar15;
          uStack_13 = (undefined1)((uint)iVar15 >> 8);
          uStack_12 = (ushort)((uint)iVar15 >> 0x10);
          iVar15 = CONCAT22(local_10[1],local_10[0]) * 2;
          local_10[0] = (ushort)iVar15 | uVar19 >> 0xf;
          iVar2 = CONCAT22(local_10[3],local_10[2]) * 2;
          local_10[2] = (ushort)iVar2 | local_10[1] >> 0xf;
          iVar12 = iVar12 + 0xffff;
          local_10[1] = (ushort)((uint)iVar15 >> 0x10);
          local_10[3] = (ushort)((uint)iVar2 >> 0x10);
        } while (0 < (short)iVar12);
        uVar19 = (ushort)iVar12;
        if ((short)uVar19 < 1) goto LAB_009a05bd;
      }
      if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
         (uStack_20 = CONCAT22(local_10[2],local_10[1]), iVar12 = CONCAT22(local_10[0],uStack_12),
         (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_10[0],uStack_12) == -1) {
          iVar12 = 0;
          if (CONCAT22(local_10[2],local_10[1]) == -1) {
            if (local_10[3] == 0xffff) {
              local_10[3] = 0x8000;
              uVar19 = uVar19 + 1;
              uStack_20 = 0;
              iVar12 = 0;
            }
            else {
              local_10[3] = local_10[3] + 1;
              uStack_20 = 0;
              iVar12 = 0;
            }
          }
          else {
            uStack_20 = CONCAT22(local_10[2],local_10[1]) + 1;
          }
        }
        else {
          iVar12 = CONCAT22(local_10[0],uStack_12) + 1;
          uStack_20 = CONCAT22(local_10[2],local_10[1]);
        }
      }
      local_10[0] = (ushort)((uint)iVar12 >> 0x10);
      uStack_12 = (ushort)iVar12;
      if (uVar19 < 0x7fff) {
        local_24._0_2_ = uStack_12;
        local_24._2_2_ = local_10[0];
        bStack_19 = (byte)(uVar19 >> 8) | bStack_19 & 0x80;
        uStack_1c = local_10[3];
        local_1a = (undefined1)uVar19;
      }
      else {
        uStack_20 = 0;
        local_24._0_2_ = 0;
        local_24._2_2_ = 0;
        iVar12 = (-(uint)((bStack_19 & 0x80) != 0) & 0x80000000) + 0x7fff8000;
        uStack_1c = (ushort)iVar12;
        local_1a = (undefined1)((uint)iVar12 >> 0x10);
        bStack_19 = (byte)((uint)iVar12 >> 0x18);
      }
      goto LAB_009a06b1;
    }
    uStack_1c = 0;
    local_1a = 0;
    bStack_19 = 0;
  }
  else {
    iVar12 = (-(uint)((bStack_19 & 0x80) != 0) & 0x80000000) + 0x7fff8000;
    uStack_1c = (ushort)iVar12;
    local_1a = (undefined1)((uint)iVar12 >> 0x10);
    bStack_19 = (byte)((uint)iVar12 >> 0x18);
  }
  uStack_20 = 0;
  local_24 = 0;
LAB_009a06b1:
  *param_6 = local_50;
  if (((param_5 & 1) != 0) && (param_4 = param_4 + local_50, param_4 < 1)) {
    *param_6 = 0;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(byte *)(param_6 + 1) = ((uVar5 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
    return 1;
  }
  if (0x15 < param_4) {
    param_4 = 0x15;
  }
  iVar15 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 0x10) - 0x3ffe;
  local_1a = 0;
  bStack_19 = 0;
  iVar12 = 8;
  uVar9 = uStack_20;
  do {
    uVar11 = local_24 << 1;
    uVar21 = uVar9 * 2 | local_24 >> 0x1f;
    iVar2 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2;
    uStack_1c = (ushort)iVar2 | (ushort)(uVar9 >> 0x1f);
    iVar12 = iVar12 + -1;
    uStack_20._0_2_ = (undefined2)uVar21;
    uStack_20._2_2_ = (undefined2)(uVar9 * 2 >> 0x10);
    local_1a = (undefined1)((uint)iVar2 >> 0x10);
    bStack_19 = (byte)((uint)iVar2 >> 0x18);
    uVar9 = uVar21;
    local_24 = uVar11;
  } while (iVar12 != 0);
  if ((iVar15 < 0) && (uVar9 = -iVar15 & 0xff, uVar9 != 0)) {
    do {
      iVar12 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
      uVar21 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 1;
      uStack_1c = (ushort)uVar21;
      local_1a = (undefined1)(uVar21 >> 0x10);
      bStack_19 = bStack_19 >> 1;
      uVar22 = CONCAT22(uStack_20._2_2_,(undefined2)uStack_20) >> 1;
      uVar21 = uVar22 | iVar12 << 0x1f;
      local_24._2_2_ =
           (ushort)(uVar11 >> 0x11) |
           (ushort)((uint)(CONCAT22(uStack_20._2_2_,(undefined2)uStack_20) << 0x1f) >> 0x10);
      uVar9 = uVar9 - 1;
      uStack_20._0_2_ = (undefined2)uVar22;
      uStack_20._2_2_ = (undefined2)(uVar21 >> 0x10);
      local_24._0_2_ = (undefined2)(uVar11 >> 1);
      uVar11 = CONCAT22(local_24._2_2_,(undefined2)local_24);
    } while (0 < (int)uVar9);
  }
  psVar1 = param_6 + 2;
  psVar13 = psVar1;
  for (param_4 = param_4 + 1; 0 < param_4; param_4 = param_4 + -1) {
    uVar22 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2 | uVar21 >> 0x1f) * 2 |
             uVar21 * 2 >> 0x1f;
    uVar16 = (uVar21 * 2 | uVar11 >> 0x1f) * 2 | (uVar11 << 1) >> 0x1f;
    uVar9 = uVar11 * 5;
    if ((uVar9 < uVar11 * 4) || (uVar17 = uVar16, uVar9 < uVar11)) {
      uVar17 = uVar16 + 1;
      bVar3 = false;
      if ((uVar17 < uVar16) || (uVar17 == 0)) {
        bVar3 = true;
      }
      if (bVar3) {
        uVar22 = uVar22 + 1;
      }
    }
    uVar16 = uVar21 + uVar17;
    if ((uVar16 < uVar17) || (uVar16 < uVar21)) {
      uVar22 = uVar22 + 1;
    }
    iVar12 = (uVar22 + CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c))) * 2;
    uStack_1c = (ushort)iVar12 | (ushort)(uVar16 >> 0x1f);
    uVar11 = uVar11 * 10;
    local_1a = (undefined1)((uint)iVar12 >> 0x10);
    uVar21 = uVar16 * 2 | uVar9 >> 0x1f;
    *(char *)psVar13 = (char)((uint)iVar12 >> 0x18) + '0';
    psVar13 = (short *)((int)psVar13 + 1);
    bStack_19 = 0;
  }
  psVar14 = psVar13 + -1;
  if (*(char *)((int)psVar13 + -1) < '5') {
    for (; (psVar1 <= psVar14 && ((char)*psVar14 == '0')); psVar14 = (short *)((int)psVar14 + -1)) {
    }
    if (psVar14 < psVar1) {
      *param_6 = 0;
      *(undefined1 *)((int)param_6 + 3) = 1;
      *(byte *)(param_6 + 1) = ((uVar5 != 0x8000) - 1U & 0xd) + 0x20;
      *(char *)psVar1 = '0';
      *(undefined1 *)((int)param_6 + 5) = 0;
      return 1;
    }
  }
  else {
    for (; (psVar1 <= psVar14 && ((char)*psVar14 == '9')); psVar14 = (short *)((int)psVar14 + -1)) {
      *(char *)psVar14 = '0';
    }
    if (psVar14 < psVar1) {
      psVar14 = (short *)((int)psVar14 + 1);
      *param_6 = *param_6 + 1;
    }
    *(char *)psVar14 = (char)*psVar14 + '\x01';
  }
  cVar10 = ((char)psVar14 - (char)param_6) + -3;
  *(char *)((int)param_6 + 3) = cVar10;
  *(undefined1 *)(cVar10 + 4 + (int)param_6) = 0;
  return 1;
}


