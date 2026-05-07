
void FUN_00980240(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0x6c);
  fVar2 = *(float *)(in_ECX + 0x70);
  fVar3 = *(float *)(in_ECX + 0x74);
  FUN_0043f350();
  if (fVar1 <= 0.0001) {
    *param_2 = *(float *)(in_ECX + 0x48);
    param_2[1] = *(float *)(in_ECX + 0x4c);
    param_2[2] = *(float *)(in_ECX + 0x50);
    return;
  }
  if (fVar2 < 0.0001 != (fVar2 == 0.0001)) {
    *param_2 = *(float *)(in_ECX + 0x54);
    param_2[1] = *(float *)(in_ECX + 0x58);
    param_2[2] = *(float *)(in_ECX + 0x5c);
    return;
  }
  if (fVar3 < 0.0001 != (fVar3 == 0.0001)) {
    *param_2 = *(float *)(in_ECX + 0x60);
    param_2[1] = *(float *)(in_ECX + 100);
    param_2[2] = *(float *)(in_ECX + 0x68);
    return;
  }
  fVar1 = *param_1 - *(float *)(in_ECX + 0x3c);
  fVar2 = param_1[1] - *(float *)(in_ECX + 0x40);
  fVar3 = param_1[2] - *(float *)(in_ECX + 0x44);
  *param_2 = (fVar2 * *(float *)(in_ECX + 0x4c) + fVar1 * *(float *)(in_ECX + 0x48) +
             fVar3 * *(float *)(in_ECX + 0x50)) /
             (*(float *)(in_ECX + 0x6c) * *(float *)(in_ECX + 0x6c));
  param_2[1] = (*(float *)(in_ECX + 0x5c) * fVar3 +
               *(float *)(in_ECX + 0x54) * fVar1 + *(float *)(in_ECX + 0x58) * fVar2) /
               (*(float *)(in_ECX + 0x70) * *(float *)(in_ECX + 0x70));
  param_2[2] = (*(float *)(in_ECX + 100) * fVar2 + *(float *)(in_ECX + 0x60) * fVar1 +
               *(float *)(in_ECX + 0x68) * fVar3) /
               (*(float *)(in_ECX + 0x74) * *(float *)(in_ECX + 0x74));
  FUN_0043f350();
  return;
}



undefined4 FUN_009803b0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  float *pfVar5;
  int iVar6;
  float local_20;
  float local_c [3];
  
  local_20 = -3.4028235e+38;
  iVar6 = 0;
  pfVar5 = (float *)(in_ECX + 0x50);
  local_c[0] = ABS(*(float *)(in_ECX + 0x6c));
  local_c[1] = ABS(*(float *)(in_ECX + 0x70));
  local_c[2] = ABS(*(float *)(in_ECX + 0x74));
  fVar1 = 3.4028235e+38;
  do {
    fVar2 = (*(float *)(in_ECX + 0x44) - param_1[2]) * *pfVar5 +
            (*(float *)(in_ECX + 0x3c) - *param_1) * pfVar5[-2] +
            (*(float *)(in_ECX + 0x40) - param_1[1]) * pfVar5[-1];
    fVar4 = param_2[2] * *pfVar5 + pfVar5[-1] * param_2[1] + *param_2 * pfVar5[-2];
    if (ABS(fVar4) <= 1e-07) {
      if (local_c[iVar6] < ABS(fVar2)) {
        return 0;
      }
    }
    else {
      fVar4 = 1.0 / fVar4;
      fVar3 = fVar4 * (fVar2 + local_c[iVar6]);
      fVar4 = (fVar2 - local_c[iVar6]) * fVar4;
      fVar2 = fVar4;
      if (fVar4 < fVar3) {
        fVar2 = fVar3;
        fVar3 = fVar4;
      }
      if (local_20 < fVar3) {
        local_20 = fVar3;
      }
      if (fVar2 < fVar1) {
        fVar1 = fVar2;
      }
      if ((fVar1 < local_20) || (fVar1 < 0.0)) {
        return 0;
      }
    }
    iVar6 = iVar6 + 1;
    pfVar5 = pfVar5 + 3;
    if (2 < iVar6) {
      return 1;
    }
  } while( true );
}



/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_00980570(void)

{
  undefined **local_54 [10];
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x98057c;
  FUN_00414750("string too long");
  local_8 = 0;
  FUN_004146e0(local_2c);
  local_54[0] = &PTR_FUN_00a370b8;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_54,&DAT_00ad9930);
}



/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_009805af(void)

{
  undefined **local_54 [10];
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x9805bb;
  FUN_00414750("invalid string position");
  local_8 = 0;
  FUN_004146e0(local_2c);
  local_54[0] = &PTR_FUN_00a8ba0c;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_54,&DAT_00af35a4);
}



/* Library Function - Single Match
    __Tolower
   
   Library: Visual Studio 2005 Release */

int __cdecl __Tolower(int param_1,_Ctypevec *param_2)

{
  _Ctypevec *p_Var1;
  ushort uVar2;
  int iVar3;
  short *_Code_page;
  ushort *puVar4;
  LPCWSTR local_10;
  undefined1 local_c;
  byte local_8;
  undefined1 local_7;
  
  p_Var1 = param_2;
  if (param_2 == (_Ctypevec *)0x0) {
    iVar3 = ____lc_handle_func();
    local_10 = *(LPCWSTR *)(iVar3 + 8);
    _Code_page = (short *)____lc_codepage_func();
  }
  else {
    local_10 = (LPCWSTR)param_2->_Page;
    _Code_page = param_2->_Table;
  }
  if (local_10 == (LPCWSTR)0x0) {
    if (0x19 < param_1 - 0x41U) {
      return param_1;
    }
    return param_1 + 0x20;
  }
  if ((uint)param_1 < 0x100) {
    if (p_Var1 != (_Ctypevec *)0x0) {
      if ((*(byte *)(p_Var1->_Delfl + param_1 * 2) & 1) == 0) {
        return param_1;
      }
      goto LAB_00980661;
    }
    iVar3 = _isupper(param_1);
    if (iVar3 == 0) {
      return param_1;
    }
  }
  else {
LAB_00980661:
    if (p_Var1 != (_Ctypevec *)0x0) {
      uVar2 = *(ushort *)(p_Var1->_Delfl + (param_1 >> 8 & 0xffU) * 2) >> 0xf;
      goto LAB_0098069c;
    }
  }
  puVar4 = ___pctype_func();
  uVar2 = puVar4[param_1 >> 8 & 0xff] & 0x8000;
LAB_0098069c:
  p_Var1 = param_2;
  if (uVar2 == 0) {
    param_2._0_2_ = (ushort)(byte)param_1;
    iVar3 = 1;
  }
  else {
    local_c = (undefined1)((uint)param_1 >> 8);
    param_2._0_2_ = CONCAT11((byte)param_1,local_c);
    param_2._3_1_ = SUB41(p_Var1,3);
    param_2._0_3_ = (uint3)(ushort)param_2;
    iVar3 = 2;
  }
  iVar3 = ___crtLCMapStringA((_locale_t)0x0,local_10,0x100,(LPCSTR)&param_2,iVar3,(LPSTR)&local_8,3,
                             (int)_Code_page,1);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      param_1 = (int)local_8;
    }
    else {
      param_1 = (int)CONCAT11(local_8,local_7);
    }
  }
  return param_1;
}



/* Library Function - Single Match
    __Getctype
   
   Library: Visual Studio 2005 Release */

_Ctypevec * __cdecl __Getctype(_Ctypevec *__return_storage_ptr__)

{
  int iVar1;
  short *psVar2;
  void *pvVar3;
  ushort *puVar4;
  size_t _Size;
  
  iVar1 = ____lc_handle_func();
  __return_storage_ptr__->_Page = *(uint *)(iVar1 + 4);
  psVar2 = (short *)____lc_codepage_func();
  __return_storage_ptr__->_Table = psVar2;
  pvVar3 = __calloc_crt(0x100,2);
  __return_storage_ptr__->_Delfl = (int)pvVar3;
  if (pvVar3 == (void *)0x0) {
    puVar4 = ___pctype_func();
    __return_storage_ptr__->_LocaleName = (wchar_t *)0x0;
    __return_storage_ptr__->_Delfl = (int)puVar4;
  }
  else {
    _Size = 0x200;
    puVar4 = ___pctype_func();
    _memcpy((void *)__return_storage_ptr__->_Delfl,puVar4,_Size);
    __return_storage_ptr__->_LocaleName = (wchar_t *)0x1;
  }
  return __return_storage_ptr__;
}



/* Library Function - Single Match
    public: __thiscall std::_Init_locks::_Init_locks(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

_Init_locks * __thiscall std::_Init_locks::_Init_locks(_Init_locks *this)

{
  LONG LVar1;
  undefined *puVar2;
  
  LVar1 = InterlockedIncrement((LONG *)&DAT_00b30a08);
  if (LVar1 == 0) {
    puVar2 = &DAT_00ba9af0;
    do {
      FUN_00980d59(puVar2);
      puVar2 = puVar2 + 0x18;
    } while ((int)puVar2 < 0xba9b50);
  }
  return this;
}



void FUN_00980787(void)

{
  LONG LVar1;
  undefined *puVar2;
  
  LVar1 = InterlockedDecrement((LONG *)&DAT_00b30a08);
  if (LVar1 < 0) {
    puVar2 = &DAT_00ba9af0;
    do {
      FUN_00980d64(puVar2);
      puVar2 = puVar2 + 0x18;
    } while ((int)puVar2 < 0xba9b50);
  }
  return;
}



/* Library Function - Single Match
    public: __thiscall std::_Lockit::_Lockit(int)
   
   Library: Visual Studio 2005 Release */

_Lockit * __thiscall std::_Lockit::_Lockit(_Lockit *this,int param_1)

{
  *(uint *)this = param_1 & 3U;
  FUN_00980d6f(&DAT_00ba9af0 + (param_1 & 3U) * 0x18);
  return this;
}



void FUN_009807d1(void)

{
  int *in_ECX;
  
  FUN_00980d7a(&DAT_00ba9af0 + *in_ECX * 0x18);
  return;
}



/* Library Function - Single Match
    public: __thiscall std::_Fac_node::~_Fac_node(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall std::_Fac_node::~_Fac_node(_Fac_node *this)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_006f6dc0();
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}



/* Library Function - Single Match
    __Deletegloballocale
   
   Library: Visual Studio 2005 Release */

void __Deletegloballocale(int *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)FUN_006f6dc0();
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



/* Library Function - Single Match
    _tidy_global
   
   Library: Visual Studio 2005 Release */

void __cdecl tidy_global(void)

{
  _Lockit local_8 [4];
  
  std::_Lockit::_Lockit(local_8,0);
  __Deletegloballocale(&DAT_00ba9b58);
  DAT_00ba9b58 = 0;
  FUN_009807d1();
  return;
}



undefined4 FUN_0098083e(void)

{
  return DAT_00ba9b58;
}



/* Library Function - Single Match
    private: static void __cdecl std::locale::_Setgloballocale(void *)
   
   Library: Visual Studio 2005 Release */

void __cdecl std::locale::_Setgloballocale(void *param_1)

{
  if (DAT_00ba9b7c == '\0') {
    DAT_00ba9b7c = '\x01';
    _Atexit(tidy_global);
  }
  DAT_00ba9b58 = param_1;
  return;
}



/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl std::locale::_Locimp::_Locimp_dtor(class std::locale::_Locimp *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl std::locale::_Locimp::_Locimp_dtor(_Locimp *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  _Lockit local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x980875;
  _Lockit::_Lockit(local_14,0);
  local_8 = 0;
  iVar2 = *(int *)(param_1 + 0xc);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*(int *)(*(int *)(param_1 + 8) + iVar2 * 4) != 0) {
      puVar1 = (undefined4 *)FUN_006f6dc0();
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  _free(*(void **)(param_1 + 8));
  local_8 = 0xffffffff;
  FUN_009807d1();
  return;
}



/* Library Function - Single Match
    __Fac_tidy
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __Fac_tidy(void)

{
  _Fac_node *this;
  _Lockit local_8 [4];
  
  std::_Lockit::_Lockit(local_8,0);
  this = DAT_00ba9b54;
  while (this != (_Fac_node *)0x0) {
    DAT_00ba9b54 = *(_Fac_node **)this;
    std::_Fac_node::~_Fac_node(this);
    FUN_00401f20(this);
    this = DAT_00ba9b54;
  }
  DAT_00ba9b54 = this;
  FUN_009807d1();
  return;
}



/* Library Function - Single Match
    private: static void __cdecl std::locale::facet::facet_Register(class std::locale::facet *)
   
   Library: Visual Studio 2005 Release */

void __cdecl std::locale::facet::facet_Register(facet *param_1)

{
  int *piVar1;
  
  if (DAT_00ba9b54 == (int *)0x0) {
    _Atexit(__Fac_tidy);
  }
  piVar1 = (int *)FUN_00401f00(8);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)DAT_00ba9b54;
    piVar1[1] = (int)param_1;
  }
  DAT_00ba9b54 = piVar1;
  return;
}



/* Library Function - Single Match
    public: static void __cdecl std::_Locinfo::_Locinfo_dtor(class std::_Locinfo *)
   
   Library: Visual Studio 2005 Release */

void __cdecl std::_Locinfo::_Locinfo_dtor(_Locinfo *param_1)

{
  _Locinfo *_Locale;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    if (*(uint *)(param_1 + 0x54) < 0x10) {
      _Locale = param_1 + 0x40;
    }
    else {
      _Locale = *(_Locinfo **)(param_1 + 0x40);
    }
    _setlocale(0,(char *)_Locale);
  }
  return;
}



/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: __thiscall std::locale::_Locimp::_Locimp(bool)
   
   Library: Visual Studio 2005 Release */

_Locimp * __thiscall std::locale::_Locimp::_Locimp(_Locimp *this,bool param_1)

{
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00aa3e58;
  this[0x14] = (_Locimp)param_1;
  FUN_00414750(&DAT_00a3642c);
  return this;
}



/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual __thiscall std::locale::_Locimp::~_Locimp(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall std::locale::_Locimp::~_Locimp(_Locimp *this)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00aa3e58;
  _Locimp_dtor(this);
  FUN_00413570(1,0);
  *(undefined ***)this = &PTR_LAB_00a7ce04;
  return;
}



/* Library Function - Single Match
    protected: virtual void * __thiscall std::locale::_Locimp::`scalar deleting destructor'(unsigned
   int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall std::locale::_Locimp::_scalar_deleting_destructor_(_Locimp *this,uint param_1)

{
  ~_Locimp(this);
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    private: static class std::locale::_Locimp * __cdecl std::locale::_Init(void)
   
   Library: Visual Studio 2005 Release */

_Locimp * __cdecl std::locale::_Init(void)

{
  _Locimp *p_Var1;
  _Lockit local_14 [12];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x980a16;
  p_Var1 = DAT_00ba9b58;
  if (DAT_00ba9b58 == (_Locimp *)0x0) {
    _Lockit::_Lockit(local_14,0);
    local_8 = 0;
    p_Var1 = DAT_00ba9b58;
    if (DAT_00ba9b58 == (_Locimp *)0x0) {
      p_Var1 = (_Locimp *)FUN_00401f00(0x34);
      local_8._0_1_ = 1;
      if (p_Var1 == (_Locimp *)0x0) {
        p_Var1 = (_Locimp *)0x0;
      }
      else {
        p_Var1 = (_Locimp *)_Locimp::_Locimp(p_Var1,false);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      _Setgloballocale(p_Var1);
      *(undefined4 *)(p_Var1 + 0x10) = 0x3f;
      FUN_004146b0(&DAT_00a61d9c);
      DAT_00ba9b5c = p_Var1;
      FUN_006f6d90();
      _DAT_00ba9b74 = DAT_00ba9b5c;
    }
    local_8 = 0xffffffff;
    FUN_009807d1();
  }
  return p_Var1;
}



/* Library Function - Single Match
    public: static void __cdecl std::_Locinfo::_Locinfo_ctor(class std::_Locinfo *,char const *)
   
   Library: Visual Studio 2005 Release */

void __cdecl std::_Locinfo::_Locinfo_ctor(_Locinfo *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = _setlocale(0,(char *)0x0);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  FUN_004146b0(pcVar1);
  if (param_2 != (char *)0x0) {
    pcVar1 = _setlocale(0,param_2);
    if (pcVar1 != (char *)0x0) goto LAB_00980ae3;
  }
  pcVar1 = "*";
LAB_00980ae3:
  FUN_004146b0(pcVar1);
  return;
}



/* Library Function - Single Match
    private: void __thiscall std::ios_base::_Callfns(enum std::ios_base::event)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release */

void __thiscall std::ios_base::_Callfns(ios_base *this,event param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(this + 0x20); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    (*(code *)puVar1[2])(param_1,this,puVar1[1]);
  }
  return;
}



/* Library Function - Single Match
    private: void __cdecl std::ios_base::_Tidy(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall std::ios_base::_Tidy(ios_base *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ios_base *in_stack_00000004;
  
  _Callfns(in_stack_00000004,0);
  puVar2 = *(undefined4 **)(in_stack_00000004 + 0x1c);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_00401f20(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(in_stack_00000004 + 0x1c) = 0;
  puVar2 = *(undefined4 **)(in_stack_00000004 + 0x20);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_00401f20(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(in_stack_00000004 + 0x20) = 0;
  return;
}



/* Library Function - Single Match
    public: static void __cdecl std::ios_base::_Addstd(class std::ios_base *)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void __cdecl std::ios_base::_Addstd(ios_base *param_1)

{
  ios_base *piVar1;
  _Lockit local_8 [4];
  
  _Lockit::_Lockit(local_8,2);
  *(undefined4 *)(param_1 + 4) = 1;
  do {
    piVar1 = *(ios_base **)(*(int *)(param_1 + 4) * 4 + 0xba9b8c);
    if ((piVar1 == (ios_base *)0x0) || (piVar1 == param_1)) break;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  } while (*(uint *)(param_1 + 4) < 8);
  *(ios_base **)(*(int *)(param_1 + 4) * 4 + 0xba9b8c) = param_1;
  (&DAT_00ba9bb4)[*(int *)(param_1 + 4)] = (&DAT_00ba9bb4)[*(int *)(param_1 + 4)] + '\x01';
  FUN_009807d1();
  return;
}



/* Library Function - Single Match
    private: static void __cdecl std::ios_base::_Ios_base_dtor(class std::ios_base *)
   
   Library: Visual Studio 2005 Release */

void __cdecl std::ios_base::_Ios_base_dtor(ios_base *param_1)

{
  int iVar1;
  ios_base *in_ECX;
  
  if ((*(int *)(param_1 + 4) == 0) ||
     ((&DAT_00ba9bb4)[*(int *)(param_1 + 4)] = (&DAT_00ba9bb4)[*(int *)(param_1 + 4)] + -1,
     (char)(&DAT_00ba9bb4)[*(int *)(param_1 + 4)] < '\x01')) {
    _Tidy(in_ECX);
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 != 0) {
      FUN_006f6e10();
      FUN_00401f20(iVar1);
    }
  }
  return;
}



void FUN_00980be4(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = FUN_00401f00(0x18);
  *in_ECX = uVar1;
  FUN_00980d59(uVar1);
  return;
}



void FUN_00980bfc(void)

{
  undefined4 *in_ECX;
  
  FUN_00980d64(*in_ECX);
  FUN_00401f20(*in_ECX);
  return;
}



/* Library Function - Single Match
    __Toupper
   
   Library: Visual Studio 2005 Release */

int __cdecl __Toupper(int param_1,_Ctypevec *param_2)

{
  _Ctypevec *p_Var1;
  ushort uVar2;
  int iVar3;
  short *_Code_page;
  ushort *puVar4;
  LPCWSTR local_10;
  undefined1 local_c;
  byte local_8;
  undefined1 local_7;
  
  p_Var1 = param_2;
  if (param_2 == (_Ctypevec *)0x0) {
    iVar3 = ____lc_handle_func();
    local_10 = *(LPCWSTR *)(iVar3 + 8);
    _Code_page = (short *)____lc_codepage_func();
  }
  else {
    local_10 = (LPCWSTR)param_2->_Page;
    _Code_page = param_2->_Table;
  }
  if (local_10 == (LPCWSTR)0x0) {
    if (0x19 < param_1 - 0x61U) {
      return param_1;
    }
    return param_1 + -0x20;
  }
  if ((uint)param_1 < 0x100) {
    if (p_Var1 != (_Ctypevec *)0x0) {
      if ((*(byte *)(p_Var1->_Delfl + param_1 * 2) & 2) == 0) {
        return param_1;
      }
      goto LAB_00980c86;
    }
    iVar3 = _islower(param_1);
    if (iVar3 == 0) {
      return param_1;
    }
  }
  else {
LAB_00980c86:
    if (p_Var1 != (_Ctypevec *)0x0) {
      uVar2 = *(ushort *)(p_Var1->_Delfl + (param_1 >> 8 & 0xffU) * 2) >> 0xf;
      goto LAB_00980cc1;
    }
  }
  puVar4 = ___pctype_func();
  uVar2 = puVar4[param_1 >> 8 & 0xff] & 0x8000;
LAB_00980cc1:
  p_Var1 = param_2;
  if (uVar2 == 0) {
    param_2._0_2_ = (ushort)(byte)param_1;
    iVar3 = 1;
  }
  else {
    local_c = (undefined1)((uint)param_1 >> 8);
    param_2._0_2_ = CONCAT11((byte)param_1,local_c);
    param_2._3_1_ = SUB41(p_Var1,3);
    param_2._0_3_ = (uint3)(ushort)param_2;
    iVar3 = 2;
  }
  iVar3 = ___crtLCMapStringA((_locale_t)0x0,local_10,0x200,(LPCSTR)&param_2,iVar3,(LPSTR)&local_8,3,
                             (int)_Code_page,1);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      param_1 = (int)local_8;
    }
    else {
      param_1 = (int)CONCAT11(local_8,local_7);
    }
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00980d25(void)

{
  _DAT_00ba9c54 = &DAT_00ba9c10;
  *(undefined4 *)(&DAT_00ba9c3c + *(int *)(DAT_00ba9c10 + 4)) = DAT_00ba9c50;
  *(uint *)(&DAT_00ba9c20 + *(int *)(DAT_00ba9c10 + 4)) =
       *(uint *)(&DAT_00ba9c20 + *(int *)(DAT_00ba9c10 + 4)) | 2;
  return;
}



void FUN_00980d59(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return;
}



void FUN_00980d64(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}



void FUN_00980d6f(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return;
}



void FUN_00980d7a(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
}



/* Library Function - Single Match
    void __cdecl _Atexit(void (__cdecl*)(void))
   
   Library: Visual Studio 2005 Release */

void __cdecl _Atexit(_func_void *param_1)

{
  if (DAT_00b30a4c == 0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  DAT_00b30a4c = DAT_00b30a4c + -1;
  *(_func_void **)(DAT_00b30a4c * 4 + 0xba9c6c) = param_1;
  return;
}



void thunk_FUN_00980dbf(void)

{
  int iVar1;
  
  while (DAT_00b30a4c < 10) {
    iVar1 = DAT_00b30a4c * 4;
    DAT_00b30a4c = DAT_00b30a4c + 1;
    if (*(int *)(iVar1 + 0xba9c6c) != 0) {
      (**(code **)(DAT_00b30a4c * 4 + 0xba9c68))();
    }
  }
  return;
}



void FUN_00980dbf(void)

{
  int iVar1;
  
  while (DAT_00b30a4c < 10) {
    iVar1 = DAT_00b30a4c * 4;
    DAT_00b30a4c = DAT_00b30a4c + 1;
    if (*(int *)(iVar1 + 0xba9c6c) != 0) {
      (**(code **)(DAT_00b30a4c * 4 + 0xba9c68))();
    }
  }
  return;
}



void FUN_00980dca(void)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  LONG *Target;
  
  Target = (LONG *)&DAT_00ba9c98;
  do {
    _Memory = (undefined4 *)InterlockedExchange(Target,0);
    while (_Memory != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*_Memory;
      __free_locale((_locale_t)_Memory[2]);
      _free(_Memory);
      _Memory = puVar1;
    }
    Target = Target + 1;
  } while ((int)Target < 0xba9d90);
  return;
}



/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  undefined4 *unaff_FS_OFFSET;
  
  *unaff_FS_OFFSET = *(undefined4 *)*unaff_FS_OFFSET;
                    /* WARNING: Could not recover jumptable at 0x00980e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}



/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,code *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00980e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2005 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  
  puVar1 = (undefined4 *)*unaff_FS_OFFSET;
  RtlUnwind(param_1,(PVOID)0x980e7b,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *puVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = puVar1;
  return;
}



/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4
FID_conflict____CxxFrameHandler3
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* Library Function - Single Match
    int __cdecl _CallSETranslator(struct EHExceptionRecord *,struct EHRegistrationNode *,void *,void
   *,struct _s_FuncInfo const *,int,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl
_CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4
                 ,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7)

{
  _ptiddata p_Var1;
  int *unaff_FS_OFFSET;
  int local_3c;
  EHExceptionRecord *local_38;
  void *local_34;
  code *local_30;
  undefined4 *local_2c;
  code *local_28;
  uint local_24;
  _s_FuncInfo *local_20;
  EHRegistrationNode *local_1c;
  int local_18;
  EHRegistrationNode *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffc0;
  if (param_1 == (EHExceptionRecord *)0x123) {
    *(undefined4 *)param_2 = 0x980fb3;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_00b30aac ^ (uint)&local_2c;
    local_20 = param_5;
    local_1c = param_2;
    local_18 = param_6;
    local_14 = param_7;
    local_8 = 0;
    local_2c = (undefined4 *)*unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)&local_2c;
    local_38 = param_1;
    local_34 = param_3;
    p_Var1 = __getptd();
    local_30 = p_Var1->_translator;
    (*local_30)(*(undefined4 *)param_1,&local_38);
    local_3c = 0;
    if (local_8 == 0) {
      *unaff_FS_OFFSET = (int)local_2c;
    }
    else {
      *local_2c = *(undefined4 *)*unaff_FS_OFFSET;
      *unaff_FS_OFFSET = (int)local_2c;
    }
  }
  return local_3c;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(struct EHExceptionRecord *,struct
   TranslatorGuardRN *,void *,void *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

_EXCEPTION_DISPOSITION __cdecl
TranslatorGuardHandler
          (EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  code *local_8;
  
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 1;
  }
  ___InternalCxxFrameHandler
            (param_1,*(undefined4 *)(param_2 + 0x10),param_3,0,*(undefined4 *)(param_2 + 0xc),
             *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),1,0x980ff3);
  if (*(int *)(param_2 + 0x24) == 0) {
    _UnwindNestedFrames((EHRegistrationNode *)param_2,param_1);
  }
  _CallSETranslator((EHExceptionRecord *)0x123,(EHRegistrationNode *)&local_8,(void *)0x0,
                    (void *)0x0,(_s_FuncInfo *)0x0,0,(EHRegistrationNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00981074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}



/* Library Function - Single Match
    struct _s_TryBlockMapEntry const * __cdecl _GetRangeOfTrysToCheck(struct _s_FuncInfo const
   *,int,int,unsigned int *,unsigned int *)
   
   Library: Visual Studio 2005 Release */

_s_TryBlockMapEntry * __cdecl
_GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar6 = *(uint *)(param_1 + 0xc);
  uVar2 = uVar6;
  uVar4 = uVar6;
  while (uVar5 = uVar2, -1 < param_2) {
    if (uVar6 == 0xffffffff) {
      _inconsistency();
    }
    uVar6 = uVar6 - 1;
    iVar3 = uVar6 * 0x14 + iVar1;
    if (((*(int *)(iVar3 + 4) < param_3) && (param_3 <= *(int *)(iVar3 + 8))) ||
       (uVar2 = uVar5, uVar6 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar2 = uVar6;
      uVar4 = uVar5;
    }
  }
  uVar6 = uVar6 + 1;
  *param_4 = uVar6;
  *param_5 = uVar4;
  if ((*(uint *)(param_1 + 0xc) < uVar4) || (uVar4 < uVar6)) {
    _inconsistency();
  }
  return (_s_TryBlockMapEntry *)(uVar6 * 0x14 + iVar1);
}



/* Library Function - Single Match
    __CreateFrameInfo
   
   Library: Visual Studio 2005 Release */

undefined4 * __CreateFrameInfo(undefined4 *param_1,undefined4 param_2)

{
  _ptiddata p_Var1;
  
  *param_1 = param_2;
  p_Var1 = __getptd();
  param_1[1] = p_Var1->_pFrameInfoChain;
  p_Var1 = __getptd();
  p_Var1->_pFrameInfoChain = param_1;
  return param_1;
}



/* Library Function - Single Match
    __IsExceptionObjectToBeDestroyed
   
   Library: Visual Studio 2005 Release */

undefined4 __IsExceptionObjectToBeDestroyed(int param_1)

{
  _ptiddata p_Var1;
  int *piVar2;
  
  p_Var1 = __getptd();
  piVar2 = p_Var1->_pFrameInfoChain;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    if (*piVar2 == param_1) break;
    piVar2 = (int *)piVar2[1];
  }
  return 0;
}



/* Library Function - Single Match
    __FindAndUnlinkFrame
   
   Library: Visual Studio 2005 Release */

void __FindAndUnlinkFrame(void *param_1)

{
  void *pvVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  
  p_Var2 = __getptd();
  if (param_1 == p_Var2->_pFrameInfoChain) {
    p_Var2 = __getptd();
    p_Var2->_pFrameInfoChain = *(void **)((int)param_1 + 4);
    return;
  }
  p_Var2 = __getptd();
  pvVar1 = p_Var2->_pFrameInfoChain;
  do {
    pvVar3 = pvVar1;
    if (*(int *)((int)pvVar3 + 4) == 0) {
      _inconsistency();
      return;
    }
    pvVar1 = *(void **)((int)pvVar3 + 4);
  } while (param_1 != *(void **)((int)pvVar3 + 4));
  *(undefined4 *)((int)pvVar3 + 4) = *(undefined4 *)((int)param_1 + 4);
  return;
}



/* Library Function - Single Match
    void * __cdecl _CallCatchBlock2(struct EHRegistrationNode *,struct _s_FuncInfo const *,void
   *,int,unsigned long)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __cdecl
_CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,
                ulong param_5)

{
  void *pvVar1;
  int *unaff_FS_OFFSET;
  int local_1c;
  undefined1 *local_18;
  uint local_14;
  _s_FuncInfo *local_10;
  EHRegistrationNode *local_c;
  int local_8;
  
  local_14 = DAT_00b30aac ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_00980eda;
  local_c = param_1;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  *unaff_FS_OFFSET = local_1c;
  return pvVar1;
}



/* WARNING: This is an inlined function */
/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __fastcall __security_check_cookie(uintptr_t _StackCookie)

{
  if (_StackCookie == DAT_00b30aac) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffc8;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffc8);
  }
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffd0;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffd0);
  }
  FUN_0098129a();
  return;
}



void FUN_0098129a(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}



/* Library Function - Single Match
    _memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar5 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar5 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + -1;
          puVar5 = puVar5 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_009814a3_caseD_2;
        case 3:
          goto switchD_009814a3_caseD_3;
        }
        goto switchD_009814a3_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_009814a3_caseD_0;
      case 1:
        goto switchD_009814a3_caseD_1;
      case 2:
        goto switchD_009814a3_caseD_2;
      case 3:
        goto switchD_009814a3_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar5 & 3);
        switch((uint)puVar5 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
          uVar2 = uVar2 >> 2;
          puVar5 = (undefined4 *)((int)puVar5 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_009814a3_caseD_2;
            case 3:
              goto switchD_009814a3_caseD_3;
            }
            goto switchD_009814a3_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
          puVar4 = (undefined4 *)((int)puVar4 + -2);
          puVar5 = (undefined4 *)((int)puVar5 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_009814a3_caseD_2;
            case 3:
              goto switchD_009814a3_caseD_3;
            }
            goto switchD_009814a3_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + -3);
          puVar5 = (undefined4 *)((int)puVar5 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_009814a3_caseD_2;
            case 3:
              goto switchD_009814a3_caseD_3;
            }
            goto switchD_009814a3_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar5[7 - uVar2] = puVar4[7 - uVar2];
    case 6:
      puVar5[6 - uVar2] = puVar4[6 - uVar2];
    case 5:
      puVar5[5 - uVar2] = puVar4[5 - uVar2];
    case 4:
      puVar5[4 - uVar2] = puVar4[4 - uVar2];
    case 3:
      puVar5[3 - uVar2] = puVar4[3 - uVar2];
    case 2:
      puVar5[2 - uVar2] = puVar4[2 - uVar2];
    case 1:
      puVar5[1 - uVar2] = puVar4[1 - uVar2];
      puVar4 = puVar4 + -uVar2;
      puVar5 = puVar5 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_009814a3_caseD_1:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      return _Dst;
    case 2:
switchD_009814a3_caseD_2:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      return _Dst;
    case 3:
switchD_009814a3_caseD_3:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
      return _Dst;
    }
switchD_009814a3_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_00baabe0 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    pvVar1 = (void *)__VEC_memcpy();
    return pvVar1;
  }
  puVar4 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar4 = puVar4 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_0098131c_caseD_2;
      case 3:
        goto switchD_0098131c_caseD_3;
      }
      goto switchD_0098131c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_0098131c_caseD_0;
    case 1:
      goto switchD_0098131c_caseD_1;
    case 2:
      goto switchD_0098131c_caseD_2;
    case 3:
      goto switchD_0098131c_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar4 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0098131c_caseD_2;
          case 3:
            goto switchD_0098131c_caseD_3;
          }
          goto switchD_0098131c_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar4 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0098131c_caseD_2;
          case 3:
            goto switchD_0098131c_caseD_3;
          }
          goto switchD_0098131c_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar4 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0098131c_caseD_2;
          case 3:
            goto switchD_0098131c_caseD_3;
          }
          goto switchD_0098131c_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar4[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar4[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar4[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar4[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar4[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar4[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar4[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar4 = puVar4 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_0098131c_caseD_1:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_0098131c_caseD_2:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_0098131c_caseD_3:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_0098131c_caseD_0:
  return _Dst;
}



/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  size_t sVar4;
  uint *puVar5;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_00baabe0 != 0)) {
    pvVar2 = (void *)__VEC_memzero();
    return pvVar2;
  }
  puVar5 = _Dst;
  if (3 < _Size) {
    uVar3 = -(int)_Dst & 3;
    sVar4 = _Size;
    if (uVar3 != 0) {
      sVar4 = _Size - uVar3;
      do {
        *(char *)puVar5 = (char)_Val;
        puVar5 = (uint *)((int)puVar5 + 1);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar4 & 3;
    uVar3 = sVar4 >> 2;
    if (uVar3 != 0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar5 = (char)uVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

undefined4 _V6_HeapAlloc(uint param_1)

{
  undefined4 local_20;
  
  local_20 = 0;
  if (param_1 <= DAT_00baabcc) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_009816f0();
  }
  return local_20;
}



void FUN_009816f0(void)

{
  FUN_0098c8fb(4);
  return;
}



/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _malloc(size_t _Size)

{
  LPVOID pvVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  uint dwBytes;
  
  if (0xffffffe0 < _Size) {
    __callnewh(_Size);
    piVar3 = __errno();
    *piVar3 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_00baa2ac == (HANDLE)0x0) {
      __FF_MSGBANNER();
      __NMSG_WRITE(0x1e);
                    /* WARNING: Subroutine does not return */
      ___crtExitProcess(0xff);
    }
    if (DAT_00baabc0 == 1) {
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
LAB_0098176a:
      pvVar1 = HeapAlloc(DAT_00baa2ac,0,dwBytes);
    }
    else if ((DAT_00baabc0 != 3) || (pvVar1 = (LPVOID)_V6_HeapAlloc(_Size), pvVar1 == (LPVOID)0x0))
    {
      sVar4 = _Size;
      if (_Size == 0) {
        sVar4 = 1;
      }
      dwBytes = sVar4 + 0xf & 0xfffffff0;
      goto LAB_0098176a;
    }
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    if (DAT_00baa5c8 == 0) {
      piVar3 = __errno();
      *piVar3 = 0xc;
      goto LAB_00981798;
    }
    iVar2 = __callnewh(_Size);
    if (iVar2 == 0) {
LAB_00981798:
      piVar3 = __errno();
      *piVar3 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2005 Release */

void __cdecl _free(void *_Memory)

{
  int iVar1;
  BOOL BVar2;
  int *piVar3;
  DWORD DVar4;
  
  if (_Memory != (void *)0x0) {
    if (DAT_00baabc0 == 3) {
      __lock(4);
      iVar1 = thunk_FUN_0098ca70(_Memory);
      if (iVar1 != 0) {
        ___sbh_free_block(iVar1,_Memory);
      }
      FUN_00981812();
      if (iVar1 != 0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_00baa2ac,0,_Memory);
    if (BVar2 == 0) {
      piVar3 = __errno();
      DVar4 = GetLastError();
      iVar1 = __get_errno_from_oserr(DVar4);
      *piVar3 = iVar1;
    }
  }
  return;
}



void FUN_00981812(void)

{
  FUN_0098c8fb(4);
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  DWORD DVar5;
  LPVOID pvVar6;
  int local_24;
  void *local_20;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
    return (void *)0x0;
  }
  if (DAT_00baabc0 == 3) {
    do {
      local_20 = (void *)0x0;
      if (0xffffffe0 < _NewSize) goto LAB_00981a23;
      __lock(4);
      local_24 = thunk_FUN_0098ca70(_Memory);
      if (local_24 != 0) {
        if (_NewSize <= DAT_00baabcc) {
          iVar2 = ___sbh_resize_block(local_24,_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = (void *)___sbh_alloc_block(_NewSize);
            if (local_20 != (void *)0x0) {
              uVar3 = *(int *)((int)_Memory + -4) - 1;
              if (_NewSize <= uVar3) {
                uVar3 = _NewSize;
              }
              _memcpy(local_20,_Memory,uVar3);
              local_24 = thunk_FUN_0098ca70(_Memory);
              ___sbh_free_block(local_24,_Memory);
            }
          }
          else {
            local_20 = _Memory;
          }
        }
        if (local_20 == (void *)0x0) {
          if (_NewSize == 0) {
            _NewSize = 1;
          }
          _NewSize = _NewSize + 0xf & 0xfffffff0;
          local_20 = HeapAlloc(DAT_00baa2ac,0,_NewSize);
          if (local_20 != (LPVOID)0x0) {
            uVar3 = *(int *)((int)_Memory + -4) - 1;
            if (_NewSize <= uVar3) {
              uVar3 = _NewSize;
            }
            _memcpy(local_20,_Memory,uVar3);
            ___sbh_free_block(local_24,_Memory);
          }
        }
      }
      FUN_0098198e();
      if (local_24 == 0) {
        if (_NewSize == 0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_00baa2ac,0,_Memory,_NewSize);
      }
      if (local_20 != (void *)0x0) {
        return local_20;
      }
      if (DAT_00baa5c8 == 0) {
        piVar4 = __errno();
        if (local_24 != 0) {
          *piVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_00981a50;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = __errno();
    if (local_24 != 0) goto LAB_00981a2f;
  }
  else {
    do {
      if (0xffffffe0 < _NewSize) goto LAB_00981a23;
      if (_NewSize == 0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_00baa2ac,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_00baa5c8 == 0) {
        piVar4 = __errno();
LAB_00981a50:
        DVar5 = GetLastError();
        iVar2 = __get_errno_from_oserr(DVar5);
        *piVar4 = iVar2;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = __errno();
  }
  DVar5 = GetLastError();
  iVar2 = __get_errno_from_oserr(DVar5);
  *piVar4 = iVar2;
  return (void *)0x0;
LAB_00981a23:
  __callnewh(_NewSize);
  piVar4 = __errno();
LAB_00981a2f:
  *piVar4 = 0xc;
  return (void *)0x0;
}



void FUN_0098198e(void)

{
  FUN_0098c8fb(4);
  return;
}



/* Library Function - Single Match
    __recalloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl __recalloc(void *_Memory,size_t _Count,size_t _Size)

{
  int *piVar1;
  void *pvVar2;
  
  if ((_Count != 0) && (0xffffffe0 / _Count < _Size)) {
    piVar1 = __errno();
    *piVar1 = 0xc;
    __invalid_parameter(0,0,0,0,0);
    return (void *)0x0;
  }
  pvVar2 = _realloc(_Memory,_Count * _Size);
  return pvVar2;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __msize
   
   Library: Visual Studio 2005 Release */

size_t __cdecl __msize(void *_Memory)

{
  int *piVar1;
  size_t sVar2;
  int iVar3;
  size_t local_20;
  
  if (_Memory == (void *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    sVar2 = 0xffffffff;
  }
  else {
    if (DAT_00baabc0 == 3) {
      __lock(4);
      iVar3 = thunk_FUN_0098ca70(_Memory);
      if (iVar3 != 0) {
        local_20 = *(int *)((int)_Memory + -4) - 9;
      }
      FUN_00981b46();
      if (iVar3 != 0) {
        return local_20;
      }
    }
    sVar2 = HeapSize(DAT_00baa2ac,0,_Memory);
  }
  return sVar2;
}



void FUN_00981b46(void)

{
  FUN_0098c8fb(4);
  return;
}



/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  __NMSG_WRITE(param_1);
  pcVar1 = (code *)__decode_pointer(PTR___exit_00b30ac0);
  (*pcVar1)(0xff);
  return;
}



void FUN_00981b73(undefined4 param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
  return;
}



/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2005 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_00981b73(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



void FUN_00981bae(void)

{
  __lock(8);
  return;
}



void FUN_00981bb7(void)

{
  FUN_0098c8fb(8);
  return;
}



/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 2005 Release */

void __initterm(undefined4 *param_1)

{
  undefined4 *in_EAX;
  
  for (; in_EAX < param_1; in_EAX = in_EAX + 1) {
    if ((code *)*in_EAX != (code *)0x0) {
      (*(code *)*in_EAX)();
    }
  }
  return;
}



/* Library Function - Single Match
    __initterm_e
   
   Library: Visual Studio 2005 Release */

void __initterm_e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((param_1 < param_2 && (iVar1 == 0))) {
    if ((code *)*param_1 != (code *)0x0) {
      iVar1 = (*(code *)*param_1)();
    }
    param_1 = param_1 + 1;
  }
  return;
}



/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __get_osplatform(int *param_1)

{
  int *piVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_00ba9d94 != 0)) {
    *param_1 = DAT_00ba9d94;
    return 0;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  __invalid_parameter(0,0,0,0,0);
  return 0x16;
}



/* Library Function - Single Match
    __get_winmajor
   
   Library: Visual Studio 2005 Release */

undefined4 __get_winmajor(undefined4 *param_1)

{
  int *piVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (DAT_00ba9d94 != 0)) {
    *param_1 = DAT_00ba9da0;
    return 0;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  __invalid_parameter(0,0,0,0,0);
  return 0x16;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _doexit
   
   Library: Visual Studio 2005 Release */

void __cdecl doexit(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *local_20;
  
  __lock(8);
  if (DAT_00ba9dd4 != 1) {
    _DAT_00ba9dd0 = 1;
    DAT_00ba9dcc = (undefined1)param_3;
    if (param_2 == 0) {
      puVar1 = (undefined4 *)__decode_pointer(DAT_00babc10);
      local_20 = (undefined4 *)__decode_pointer(DAT_00babc0c);
      if (puVar1 != (undefined4 *)0x0) {
        while (local_20 = local_20 + -1, puVar1 <= local_20) {
          if ((code *)*local_20 != (code *)0x0) {
            (*(code *)*local_20)();
          }
        }
      }
      __initterm(&DAT_00a2f7bc);
    }
    __initterm(&DAT_00a2f7c8);
  }
  FUN_00981db6();
  if (param_3 == 0) {
    DAT_00ba9dd4 = 1;
    FUN_0098c8fb(8);
                    /* WARNING: Subroutine does not return */
    ___crtExitProcess(param_1);
  }
  return;
}



void FUN_00981db6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_0098c8fb(8);
  }
  return;
}



/* Library Function - Single Match
    _exit
   
   Library: Visual Studio 2005 Release */

void __cdecl _exit(int _Code)

{
  doexit(_Code,0,0);
  return;
}



/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2005 Release */

void __exit(undefined4 param_1)

{
  doexit(param_1,1,0);
  return;
}



/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00aa3e80;
  _Type_info_dtor(this);
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall type_info::_scalar_deleting_destructor_(type_info *this,uint param_1)

{
  ~type_info(this);
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Library: Visual Studio 2005 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (bool)('\x01' - (iVar1 != 0));
}



/* Library Function - Single Match
    __onexit_nolock
   
   Library: Visual Studio 2005 Release */

undefined4 __onexit_nolock(undefined4 param_1)

{
  uint uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  
  _Memory = (undefined4 *)__decode_pointer(DAT_00babc10);
  puVar2 = (undefined4 *)__decode_pointer(DAT_00babc0c);
  if (_Memory <= puVar2) {
    uVar1 = ((int)puVar2 - (int)_Memory) + 4;
    if (3 < uVar1) {
      sVar3 = __msize(_Memory);
      if (sVar3 < uVar1) {
        sVar4 = 0x800;
        if (sVar3 < 0x800) {
          sVar4 = sVar3;
        }
        if ((sVar4 + sVar3 < sVar3) ||
           (pvVar5 = __realloc_crt(_Memory,sVar4 + sVar3), pvVar5 == (void *)0x0)) {
          if (sVar3 + 0x10 < sVar3) {
            return 0;
          }
          pvVar5 = __realloc_crt(_Memory,sVar3 + 0x10);
          if (pvVar5 == (void *)0x0) {
            return 0;
          }
        }
        puVar2 = (undefined4 *)((int)pvVar5 + ((int)puVar2 - (int)_Memory >> 2) * 4);
        DAT_00babc10 = __encode_pointer(pvVar5);
      }
      *puVar2 = param_1;
      DAT_00babc0c = __encode_pointer(puVar2 + 1);
      return param_1;
    }
  }
  return 0;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2005 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_00981bae();
  p_Var1 = (_onexit_t)__onexit_nolock(_Func);
  FUN_00981fae();
  return p_Var1;
}



void FUN_00981fae(void)

{
  FUN_00981bb7();
  return;
}



/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2005 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _printf
   
   Library: Visual Studio 2005 Release */

int __cdecl _printf(char *_Format,...)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _locale_t _Locale;
  va_list _ArgList;
  
  if (_Format == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    iVar2 = -1;
  }
  else {
    iVar3 = FUN_0098baf0();
    __lock_file2(1,(void *)(iVar3 + 0x20));
    iVar3 = FUN_0098baf0();
    iVar3 = __stbuf((FILE *)(iVar3 + 0x20));
    _ArgList = &stack0x00000008;
    _Locale = (_locale_t)0x0;
    iVar4 = FUN_0098baf0();
    iVar2 = __output_l((FILE *)(iVar4 + 0x20),_Format,_Locale,_ArgList);
    iVar4 = FUN_0098baf0();
    __ftbuf(iVar3,(FILE *)(iVar4 + 0x20));
    FUN_00982062();
  }
  return iVar2;
}



void FUN_00982062(void)

{
  int iVar1;
  
  iVar1 = FUN_0098baf0();
  __unlock_file2(1,(void *)(iVar1 + 0x20));
  return;
}



/* Library Function - Single Match
    __get_printf_count_output
   
   Library: Visual Studio 2005 Release */

int __cdecl __get_printf_count_output(void)

{
  return (uint)(DAT_00ba9dd8 == (DAT_00b30aac | 1));
}



/* Library Function - Single Match
    _sprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  int *piVar1;
  int iVar2;
  FILE local_24;
  
  if ((_Format == (char *)0x0) || (_Dest == (char *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    iVar2 = -1;
  }
  else {
    local_24._base = _Dest;
    local_24._ptr = _Dest;
    local_24._cnt = 0x7fffffff;
    local_24._flag = 0x42;
    iVar2 = __output_l(&local_24,_Format,(_locale_t)0x0,&stack0x0000000c);
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar2;
}



/* Library Function - Single Match
    __fclose_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __fclose_nolock(FILE *_File)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    iVar3 = -1;
  }
  else {
    if ((_File->_flag & 0x83) != 0) {
      iVar3 = __flush(_File);
      __freebuf(_File);
      iVar2 = __fileno(_File);
      iVar2 = __close(iVar2);
      if (iVar2 < 0) {
        iVar3 = -1;
      }
      else if (_File->_tmpfname != (char *)0x0) {
        _free(_File->_tmpfname);
        _File->_tmpfname = (char *)0x0;
      }
    }
    _File->_flag = 0;
  }
  return iVar3;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fclose
   
   Library: Visual Studio 2005 Release */

int __cdecl _fclose(FILE *_File)

{
  int *piVar1;
  int local_20;
  
  local_20 = -1;
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    local_20 = -1;
  }
  else if ((_File->_flag & 0x40) == 0) {
    __lock_file(_File);
    local_20 = __fclose_nolock(_File);
    FUN_009821ed();
  }
  else {
    _File->_flag = 0;
  }
  return local_20;
}



void FUN_009821ed(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fgets
   
   Library: Visual Studio 2005 Release */

char * __cdecl _fgets(char *_Buf,int _MaxCount,FILE *_File)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  char *local_24;
  char *local_20;
  
  local_20 = _Buf;
  local_24 = _Buf;
  if ((((_Buf == (char *)0x0) && (_MaxCount != 0)) || (_MaxCount < 0)) || (_File == (FILE *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else if (_MaxCount != 0) {
    __lock_file(_File);
    if ((_File->_flag & 0x40) == 0) {
      iVar2 = __fileno(_File);
      if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
        puVar4 = &DAT_00b31368;
      }
      else {
        iVar2 = __fileno(_File);
        uVar3 = __fileno(_File);
        puVar4 = (undefined *)((uVar3 & 0x1f) * 0x28 + (&DAT_00baaac0)[iVar2 >> 5]);
      }
      if ((puVar4[0x24] & 0x7f) == 0) {
        iVar2 = __fileno(_File);
        if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
          puVar4 = &DAT_00b31368;
        }
        else {
          iVar2 = __fileno(_File);
          uVar3 = __fileno(_File);
          puVar4 = (undefined *)((uVar3 & 0x1f) * 0x28 + (&DAT_00baaac0)[iVar2 >> 5]);
        }
        if ((puVar4[0x24] & 0x80) == 0) goto LAB_00982316;
      }
      piVar1 = __errno();
      *piVar1 = 0x16;
      __invalid_parameter(0,0,0,0,0);
      local_24 = (char *)0x0;
    }
LAB_00982316:
    if (local_24 != (char *)0x0) {
      do {
        _MaxCount = _MaxCount + -1;
        if (_MaxCount == 0) break;
        piVar1 = &_File->_cnt;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          uVar3 = __filbuf(_File);
        }
        else {
          uVar3 = (uint)(byte)*_File->_ptr;
          _File->_ptr = _File->_ptr + 1;
        }
        if (uVar3 == 0xffffffff) {
          if (local_20 == _Buf) {
            local_24 = (char *)0x0;
            goto LAB_0098235c;
          }
          break;
        }
        *local_20 = (char)uVar3;
        local_20 = local_20 + 1;
      } while ((char)uVar3 != '\n');
      *local_20 = '\0';
    }
LAB_0098235c:
    FUN_00982374();
    return local_24;
  }
  return (char *)0x0;
}



void FUN_00982374(void)

{
  FILE *unaff_EDI;
  
  __unlock_file(unaff_EDI);
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __fsopen
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag)

{
  int *piVar1;
  FILE *pFVar2;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00aff9a0;
  uStack_c = 0x982388;
  if (((_Filename == (char *)0x0) || (_Mode == (char *)0x0)) || (*_Mode == '\0')) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else {
    pFVar2 = __getstream();
    if (pFVar2 == (FILE *)0x0) {
      piVar1 = __errno();
      *piVar1 = 0x18;
    }
    else {
      local_8 = (undefined *)0x0;
      if (*_Filename != '\0') {
        pFVar2 = __openfile(_Filename,_Mode,_ShFlag,pFVar2);
        local_8 = (undefined *)0xfffffffe;
        FUN_00982436();
        return pFVar2;
      }
      piVar1 = __errno();
      *piVar1 = 0x16;
      __local_unwind4(&DAT_00b30aac,local_14,0xfffffffe);
    }
  }
  return (FILE *)0x0;
}



void FUN_00982436(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}



/* Library Function - Single Match
    _fopen
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl _fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
  pFVar1 = __fsopen(_Filename,_Mode,0x40);
  return pFVar1;
}



/* Library Function - Single Match
    _fopen_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _fopen_s(FILE **_File,char *_Filename,char *_Mode)

{
  int *piVar1;
  FILE *pFVar2;
  int iVar3;
  
  if (_File == (FILE **)0x0) {
    piVar1 = __errno();
    iVar3 = 0x16;
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else {
    pFVar2 = __fsopen(_Filename,_Mode,0x80);
    *_File = pFVar2;
    if (pFVar2 == (FILE *)0x0) {
      piVar1 = __errno();
      iVar3 = *piVar1;
    }
    else {
      iVar3 = 0;
    }
  }
  return iVar3;
}



/* Library Function - Single Match
    public: __thiscall _LocaleUpdate::_LocaleUpdate(struct localeinfo_struct *)
   
   Library: Visual Studio 2005 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1)

{
  uint *puVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  pthreadmbcinfo ptVar4;
  
  this[0xc] = (_LocaleUpdate)0x0;
  if (param_1 == (localeinfo_struct *)0x0) {
    p_Var2 = __getptd();
    *(_ptiddata *)(this + 8) = p_Var2;
    *(pthreadlocinfo *)this = p_Var2->ptlocinfo;
    *(pthreadmbcinfo *)(this + 4) = p_Var2->ptmbcinfo;
    if ((*(undefined **)this != PTR_DAT_00b31998) && ((p_Var2->_ownlocale & DAT_00b318b0) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_00b317b8) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_00b318b0) == 0)) {
      ptVar4 = ___updatetmbcinfo();
      *(pthreadmbcinfo *)(this + 4) = ptVar4;
    }
    if ((*(byte *)(*(int *)(this + 8) + 0x70) & 2) == 0) {
      puVar1 = (uint *)(*(int *)(this + 8) + 0x70);
      *puVar1 = *puVar1 | 2;
      this[0xc] = (_LocaleUpdate)0x1;
    }
  }
  else {
    *(pthreadlocinfo *)this = param_1->locinfo;
    *(pthreadmbcinfo *)(this + 4) = param_1->mbcinfo;
  }
  return this;
}



/* Library Function - Single Match
    ___ascii_stricmp
   
   Library: Visual Studio 2005 Release */

int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = (uint)(byte)*_Str1;
    _Str1 = _Str1 + 1;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
    }
    uVar2 = (uint)(byte)*_Str2;
    _Str2 = _Str2 + 1;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 + 0x20;
    }
  } while ((uVar1 != 0) && (uVar1 == uVar2));
  return uVar1 - uVar2;
}



/* Library Function - Single Match
    __stricmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __stricmp_l(char *_Str1,char *_Str2,_locale_t _Locale)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_Str1 == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else if (_Str2 == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else {
    if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
      iVar2 = ___ascii_stricmp(_Str1,_Str2);
    }
    else {
      do {
        iVar2 = __tolower_l((uint)(byte)*_Str1,&local_14);
        _Str1 = _Str1 + 1;
        iVar3 = __tolower_l((uint)(byte)*_Str2,&local_14);
        _Str2 = _Str2 + 1;
        if (iVar2 == 0) break;
      } while (iVar2 == iVar3);
      iVar2 = iVar2 - iVar3;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar2;
}



/* Library Function - Single Match
    __stricmp
   
   Library: Visual Studio 2005 Release */

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



/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x009826cc;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_00982713;
        goto LAB_00982789;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x00982785:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_00982789:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_00982713;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x00982785;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x00982785;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x00982785;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x009826cc:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_00982713:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



/* Library Function - Single Match
    __vsprintf_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __vsprintf_l(char *_DstBuf,char *_Format,_locale_t param_3,va_list _ArgList)

{
  int *piVar1;
  int iVar2;
  FILE local_24;
  
  if ((_Format == (char *)0x0) || (_DstBuf == (char *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    iVar2 = -1;
  }
  else {
    local_24._base = _DstBuf;
    local_24._ptr = _DstBuf;
    local_24._cnt = 0x7fffffff;
    local_24._flag = 0x42;
    iVar2 = __output_l(&local_24,_Format,param_3,_ArgList);
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar2;
}



/* Library Function - Single Match
    _vsprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl _vsprintf(char *_Dest,char *_Format,va_list _Args)

{
  int iVar1;
  
  iVar1 = __vsprintf_l(_Dest,_Format,(_locale_t)0x0,_Args);
  return iVar1;
}



void FUN_00982837(void)

{
  PTR_LAB_00b312a0 = __cfltcvt;
  PTR_LAB_00b312a4 = &LAB_0098fe2f;
  PTR_LAB_00b312a8 = &LAB_0098fded;
  PTR_LAB_00b312ac = &LAB_0098fe21;
  PTR_LAB_00b312b0 = &LAB_0098fd97;
  PTR_LAB_00b312b4 = __cfltcvt;
  PTR_LAB_00b312b8 = __cfltcvt_l;
  PTR_LAB_00b312bc = __fassign_l;
  PTR_LAB_00b312c0 = __cropzeros_l;
  PTR_LAB_00b312c4 = __forcdecpt_l;
  return;
}



ulonglong FUN_009828c0(void)

{
  ulonglong uVar1;
  uint uVar2;
  undefined4 in_EDX;
  float fVar3;
  float10 in_ST0;
  uint uStack_20;
  float fStack_1c;
  
  if (DAT_00baabe0 == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    uStack_20 = (uint)uVar1;
    fStack_1c = (float)(uVar1 >> 0x20);
    fVar3 = (float)in_ST0;
    if ((uStack_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar3 < 0) {
        uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
        uVar1 = CONCAT44((int)fStack_1c - (uint)(uStack_20 < uVar2),uStack_20 - uVar2);
      }
    }
    return uVar1;
  }
  return CONCAT44(in_EDX,(int)in_ST0);
}



ulonglong FUN_009828f6(void)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = (ulonglong)ROUND(in_ST0);
  local_20 = (uint)uVar1;
  uStack_1c = (float)(uVar1 >> 0x20);
  fVar3 = (float)in_ST0;
  if ((local_20 != 0) || (fVar3 = uStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
    if ((int)fVar3 < 0) {
      uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
    }
    else {
      uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
      uVar1 = CONCAT44((int)uStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
    }
  }
  return uVar1;
}



/* Library Function - Single Match
    unsigned long __cdecl strtoxl(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2005 Release */

ulong __cdecl
strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  pthreadlocinfo ptVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  uint local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  bVar8 = *param_2;
  local_8 = 0;
  ptVar5 = local_18.locinfo;
  pbVar2 = (byte *)param_2;
  while( true ) {
    pbVar9 = pbVar2 + 1;
    if ((int)ptVar5->locale_name[3] < 2) {
      uVar4 = (byte)ptVar5[1].lc_category[0].locale[(uint)bVar8 * 2] & 8;
    }
    else {
      uVar4 = __isctype_l((uint)bVar8,8,&local_18);
      ptVar5 = local_18.locinfo;
    }
    if (uVar4 == 0) break;
    bVar8 = *pbVar9;
    pbVar2 = pbVar9;
  }
  if (bVar8 == 0x2d) {
    param_5 = param_5 | 2;
LAB_00982a22:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_00982a22;
  if (((param_4 < 0) || (param_4 == 1)) || (0x24 < param_4)) {
    if (param_3 != (char **)0x0) {
      *param_3 = param_2;
    }
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_4 == 0) {
    if (bVar8 != 0x30) {
      param_4 = 10;
      goto LAB_00982a88;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_00982a88;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_00982a88;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_00982a88:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_00982ae2:
        pbVar9 = pbVar9 + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (char **)0x0) {
            pbVar9 = (byte *)param_2;
          }
          local_8 = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                (((param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x80000000 < local_8)) ||
                  (((param_5 & 2U) == 0 && (0x7fffffff < local_8)))))))) {
          piVar3 = __errno();
          *piVar3 = 0x22;
          if ((param_5 & 1U) == 0) {
            local_8 = ((param_5 & 2U) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_3 != (char **)0x0) {
          *param_3 = (char *)pbVar9;
        }
        if ((param_5 & 2U) != 0) {
          local_8 = -local_8;
        }
        if (local_c == '\0') {
          return local_8;
        }
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
        return local_8;
      }
      iVar7 = (int)(char)bVar8;
      if ((byte)(bVar8 + 0x9f) < 0x1a) {
        iVar7 = iVar7 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar8 - 0x30;
    }
    if ((uint)param_4 <= uVar6) goto LAB_00982ae2;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_00982ae2;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_00ba9e10 == 0) {
    ppuVar2 = &PTR_DAT_00b319a0;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}



/* Library Function - Single Match
    _strtoul
   
   Library: Visual Studio 2005 Release */

ulong __cdecl _strtoul(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_00ba9e10 == 0) {
    ppuVar2 = &PTR_DAT_00b319a0;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,1);
  return uVar1;
}



void FUN_00982bfa(void)

{
  __cintrindisp2();
  return;
}



void FUN_00982c30(void)

{
  float10 in_ST0;
  
  FUN_00991b88((double)in_ST0);
  FUN_00982c4d();
  return;
}



uint FUN_00982c4d(uint param_1,uint param_2)

{
  uint uVar1;
  bool in_ZF;
  short in_FPUControlWord;
  
  if (in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_00991b2c();
      goto LAB_00982ccb;
    }
    param_1 = param_2 & 0x80000000;
    param_2 = 0;
joined_r0x00982cbc:
    if (param_1 == 0) {
LAB_00982c6e:
      if (DAT_00ba9ddc != 0) {
        return param_2;
      }
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      param_2 = FUN_00991b15();
    }
    if ((param_2 & 0x80000000) == 0) goto LAB_00982c6e;
    if (((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) goto joined_r0x00982cbc;
  }
  uVar1 = 1;
LAB_00982ccb:
  if (DAT_00ba9ddc != 0) {
    return uVar1;
  }
  uVar1 = __startOneArgErrorHandling();
  return uVar1;
}



/* Library Function - Multiple Matches With Different Base Names
    __access_s
    __waccess_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl FID_conflict___waccess_s(wchar_t *_Filename,int _AccessMode)

{
  ulong *puVar1;
  int *piVar2;
  DWORD DVar3;
  
  if ((_Filename == (wchar_t *)0x0) || ((_AccessMode & 0xfffffff9U) != 0)) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return 0x16;
  }
  DVar3 = GetFileAttributesA((LPCSTR)_Filename);
  if (DVar3 == 0xffffffff) {
    DVar3 = GetLastError();
    __dosmaperr(DVar3);
  }
  else {
    if ((((DVar3 & 0x10) != 0) || ((DVar3 & 1) == 0)) || ((_AccessMode & 2U) == 0)) {
      return 0;
    }
    puVar1 = ___doserrno();
    *puVar1 = 5;
    piVar2 = __errno();
    *piVar2 = 0xd;
  }
  piVar2 = __errno();
  return *piVar2;
}



/* Library Function - Multiple Matches With Different Base Names
    __access
    __waccess
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___access(wchar_t *_Filename,int _AccessMode)

{
  errno_t eVar1;
  
  eVar1 = FID_conflict___waccess_s(_Filename,_AccessMode);
  return -(uint)(eVar1 != 0);
}



/* Library Function - Single Match
    __mbsnbcpy_l
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbsnbcpy_l(uchar *_Dest,uchar *_Source,size_t _Count,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  size_t sVar4;
  int *piVar5;
  byte *_Dst;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (((_Dest == (uchar *)0x0) && (_Count != 0)) || ((_Source == (uchar *)0x0 && (_Count != 0)))) {
    piVar5 = __errno();
    *piVar5 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    _Dest = (uchar *)0x0;
  }
  else {
    _Dst = _Dest;
    sVar4 = _Count;
    if (*(int *)(local_10 + 8) == 0) {
      _Dest = (uchar *)_strncpy((char *)_Dest,(char *)_Source,_Count);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
    }
    else {
      do {
        while( true ) {
          pbVar3 = _Dst;
          if (sVar4 == 0) goto LAB_00982e6b;
          bVar1 = *_Source;
          _Count = sVar4 - 1;
          bVar2 = *(byte *)(bVar1 + 0x1d + local_10);
          *pbVar3 = bVar1;
          if ((bVar2 & 4) != 0) break;
          _Dst = pbVar3 + 1;
          _Source = _Source + 1;
          sVar4 = _Count;
          if (bVar1 == 0) goto LAB_00982e58;
        }
        if (_Count == 0) {
          *pbVar3 = 0;
          goto LAB_00982e6b;
        }
        bVar1 = _Source[1];
        _Count = sVar4 - 2;
        pbVar3[1] = bVar1;
        _Dst = pbVar3 + 2;
        _Source = _Source + 2;
        sVar4 = _Count;
      } while (bVar1 != 0);
      *pbVar3 = 0;
LAB_00982e58:
      if (_Count != 0) {
        _memset(_Dst,0,_Count);
      }
LAB_00982e6b:
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
    }
  }
  return _Dest;
}



/* Library Function - Single Match
    __mbsnbcpy
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbsnbcpy(uchar *_Dest,uchar *_Source,size_t _Count)

{
  uchar *puVar1;
  
  puVar1 = __mbsnbcpy_l(_Dest,_Source,_Count,(_locale_t)0x0);
  return puVar1;
}



/* Library Function - Single Match
    _strchr
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)_Str & 3) != 0) {
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    _Str = (char *)((int)_Str + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}



/* Library Function - Single Match
    _xtoa@16
   
   Library: Visual Studio 2005 Release */

void xtoa(uint param_1,int param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  uint in_EAX;
  char *in_ECX;
  char *pcVar3;
  char cVar4;
  
  pcVar2 = in_ECX;
  if (param_2 != 0) {
    *in_ECX = '-';
    in_ECX = in_ECX + 1;
    in_EAX = -in_EAX;
    pcVar2 = in_ECX;
  }
  do {
    pcVar3 = pcVar2;
    uVar1 = (ulonglong)in_EAX;
    in_EAX = in_EAX / param_1;
    cVar4 = (char)(uVar1 % (ulonglong)param_1);
    if ((uint)(uVar1 % (ulonglong)param_1) < 10) {
      cVar4 = cVar4 + '0';
    }
    else {
      cVar4 = cVar4 + 'W';
    }
    *pcVar3 = cVar4;
    pcVar2 = pcVar3 + 1;
  } while (in_EAX != 0);
  pcVar3[1] = '\0';
  do {
    cVar4 = *pcVar3;
    *pcVar3 = *in_ECX;
    pcVar3 = pcVar3 + -1;
    *in_ECX = cVar4;
    in_ECX = in_ECX + 1;
  } while (in_ECX < pcVar3);
  return;
}



/* Library Function - Single Match
    __itoa
   
   Library: Visual Studio 2005 Release */

char * __cdecl __itoa(int _Value,char *_Dest,int _Radix)

{
  undefined4 uVar1;
  
  if ((_Radix == 10) && (_Value < 0)) {
    uVar1 = 1;
    _Radix = 10;
  }
  else {
    uVar1 = 0;
  }
  xtoa(_Radix,uVar1);
  return _Dest;
}



int FUN_00982fe6(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = (int)in_ECX - *(int *)(*(int *)(*in_ECX + -4) + 4);
  iVar1 = *(int *)(*(int *)(*in_ECX + -4) + 8);
  if (iVar1 != 0) {
    iVar2 = iVar2 - *(int *)((int)in_ECX - iVar1);
  }
  return iVar2;
}



/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindSITargetTypeInstance(struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,struct TypeDescriptor *)
   
   Library: Visual Studio 2005 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindSITargetTypeInstance
          (_s_RTTICompleteObjectLocator *param_1,TypeDescriptor *param_2,TypeDescriptor *param_3)

{
  uint uVar1;
  int iVar2;
  _s_RTTIBaseClassDescriptor *p_Var3;
  int *piVar4;
  _s_RTTICompleteObjectLocator *p_Var5;
  int in_EAX;
  int iVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(*(int *)(in_EAX + 0x10) + 8);
  uVar7 = 0;
  iVar2 = *(int *)(*(int *)(in_EAX + 0x10) + 0xc);
  if (uVar1 != 0) {
    do {
      p_Var3 = *(_s_RTTIBaseClassDescriptor **)(iVar2 + uVar7 * 4);
      if ((*(TypeDescriptor **)p_Var3 == param_2) ||
         (iVar6 = _strcmp((char *)(*(TypeDescriptor **)p_Var3 + 8),(char *)(param_2 + 8)),
         iVar6 == 0)) {
        do {
          uVar7 = uVar7 + 1;
          if (uVar1 <= uVar7) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
          piVar4 = *(int **)(iVar2 + uVar7 * 4);
          if ((*(byte *)(piVar4 + 5) & 4) != 0) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
          p_Var5 = (_s_RTTICompleteObjectLocator *)*piVar4;
          if (p_Var5 == param_1) {
            return p_Var3;
          }
          iVar6 = _strcmp((char *)(p_Var5 + 8),(char *)(param_1 + 8));
        } while (iVar6 != 0);
        return p_Var3;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  return (_s_RTTIBaseClassDescriptor *)0x0;
}



/* Library Function - Single Match
    int __cdecl PMDtoOffset(void *,struct PMD const &)
   
   Library: Visual Studio 2005 Release */

int __cdecl PMDtoOffset(void *param_1,PMD *param_2)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  
  iVar1 = in_EAX[1];
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar2 = iVar1 + *(int *)(*(int *)(iVar1 + (int)param_1) + in_EAX[2]);
  }
  return *in_EAX + iVar2;
}



/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindMITargetTypeInstance(void *,struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,int,struct TypeDescriptor *)
   
   Library: Visual Studio 2005 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindMITargetTypeInstance
          (void *param_1,_s_RTTICompleteObjectLocator *param_2,TypeDescriptor *param_3,int param_4,
          TypeDescriptor *param_5)

{
  _s_RTTIBaseClassDescriptor _Var1;
  uint uVar2;
  int iVar3;
  _s_RTTIBaseClassDescriptor *p_Var4;
  int in_EAX;
  int iVar5;
  TypeDescriptor *pTVar6;
  PMD *unaff_EDI;
  _s_RTTIBaseClassDescriptor *local_18;
  _s_RTTIBaseClassDescriptor *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_c = 0xffffffff;
  uVar2 = *(uint *)(*(int *)(in_EAX + 0x10) + 8);
  iVar3 = *(int *)(*(int *)(in_EAX + 0x10) + 0xc);
  local_14 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_18 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_10 = 0;
  local_8 = 0;
  if (uVar2 != 0) {
    do {
      p_Var4 = *(_s_RTTIBaseClassDescriptor **)(iVar3 + local_8 * 4);
      if ((local_10 < local_8 - local_c) &&
         ((*(int *)p_Var4 == param_4 ||
          (iVar5 = _strcmp((char *)(*(int *)p_Var4 + 8),(char *)(param_4 + 8)), iVar5 == 0)))) {
        local_14 = p_Var4;
        if (local_18 != (_s_RTTIBaseClassDescriptor *)0x0) {
          if (((byte)p_Var4[0x14] & 3) != 0) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
          _Var1 = local_18[0x14];
          goto joined_r0x00983147;
        }
        local_c = local_8;
        local_10 = *(uint *)(p_Var4 + 4);
      }
      if ((((*(_s_RTTICompleteObjectLocator **)p_Var4 == param_2) ||
           (iVar5 = _strcmp((char *)(*(_s_RTTICompleteObjectLocator **)p_Var4 + 8),
                            (char *)(param_2 + 8)), iVar5 == 0)) &&
          (pTVar6 = (TypeDescriptor *)PMDtoOffset(param_1,unaff_EDI), pTVar6 == param_3)) &&
         (local_18 = p_Var4, local_14 != (_s_RTTIBaseClassDescriptor *)0x0)) {
        if (local_10 < local_8 - local_c) {
          if (((byte)local_14[0x14] & 3) != 0) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
        }
        else {
          if (((byte)local_14[0x14] & 0x40) != 0) {
            return (_s_RTTIBaseClassDescriptor *)
                   ((uint)local_14 &
                   ~-(uint)((*(byte *)(*(int *)(*(int *)(*(int *)(local_14 + 0x18) + 0xc) +
                                               (local_8 - local_c) * 4) + 0x14) & 1) != 0));
          }
          if (local_c != 0) {
            return local_14;
          }
        }
        _Var1 = p_Var4[0x14];
joined_r0x00983147:
        if (((byte)_Var1 & 1) != 0) {
          return (_s_RTTIBaseClassDescriptor *)0x0;
        }
        return local_14;
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar2);
  }
  return (_s_RTTIBaseClassDescriptor *)0x0;
}



/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindVITargetTypeInstance(void *,struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,int,struct TypeDescriptor *)
   
   Library: Visual Studio 2005 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindVITargetTypeInstance
          (void *param_1,_s_RTTICompleteObjectLocator *param_2,TypeDescriptor *param_3,int param_4,
          TypeDescriptor *param_5)

{
  int iVar1;
  uint uVar2;
  _s_RTTIBaseClassDescriptor *p_Var3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  TypeDescriptor *pTVar9;
  PMD *unaff_EDI;
  _s_RTTIBaseClassDescriptor *p_Var10;
  bool bVar11;
  _s_RTTIBaseClassDescriptor *local_24;
  _s_RTTIBaseClassDescriptor *local_20;
  int local_1c;
  _s_RTTIBaseClassDescriptor *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  iVar1 = *(int *)(*(int *)(in_EAX + 0x10) + 0xc);
  local_10 = 0xffffffff;
  local_1c = -1;
  uVar2 = *(uint *)(*(int *)(in_EAX + 0x10) + 8);
  p_Var10 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_18 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_20 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_24 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_14 = 0;
  bVar5 = true;
  local_c = 0;
  if (uVar2 != 0) {
    do {
      p_Var3 = *(_s_RTTIBaseClassDescriptor **)(iVar1 + local_c * 4);
      if ((local_14 < local_c - local_10) &&
         ((*(int *)p_Var3 == param_4 ||
          (iVar7 = _strcmp((char *)(*(int *)p_Var3 + 8),(char *)(param_4 + 8)), iVar7 == 0)))) {
        if (((byte)p_Var3[0x14] & 3) == 0) {
          local_24 = p_Var3;
        }
        local_10 = local_c;
        local_14 = *(uint *)(p_Var3 + 4);
        p_Var10 = p_Var3;
      }
      iVar7 = local_1c;
      if (((*(_s_RTTICompleteObjectLocator **)p_Var3 == param_2) ||
          (iVar8 = _strcmp((char *)(*(_s_RTTICompleteObjectLocator **)p_Var3 + 8),
                           (char *)(param_2 + 8)), iVar8 == 0)) &&
         (pTVar9 = (TypeDescriptor *)PMDtoOffset(param_1,unaff_EDI), pTVar9 == param_3)) {
        if (local_14 < local_c - local_10) {
          if (((byte)p_Var3[0x14] & 5) == 0) {
            local_20 = p_Var3;
          }
        }
        else if (bVar5) {
          if (((byte)p_Var10[0x14] & 0x40) == 0) {
            if ((local_10 == 0) && (((byte)p_Var3[0x14] & 1) != 0)) {
              bVar5 = false;
            }
            bVar6 = 1;
          }
          else {
            uVar4 = *(uint *)(*(int *)(*(int *)(*(int *)(p_Var10 + 0x18) + 0xc) +
                                      (local_c - local_10) * 4) + 0x14);
            if ((uVar4 & 1) != 0) {
              bVar5 = false;
            }
            bVar6 = ~(byte)(uVar4 >> 2) & 1;
          }
          if (((bVar5) && (bVar6 != 0)) &&
             ((iVar7 = PMDtoOffset(param_1,unaff_EDI),
              bVar11 = local_18 != (_s_RTTIBaseClassDescriptor *)0x0, local_18 = p_Var10, bVar11 &&
              (local_1c != iVar7)))) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
        }
      }
      local_1c = iVar7;
      local_c = local_c + 1;
    } while (local_c < uVar2);
    if ((bVar5) && (local_18 != (_s_RTTIBaseClassDescriptor *)0x0)) {
      return local_18;
    }
    if ((local_20 != (_s_RTTIBaseClassDescriptor *)0x0) &&
       (local_24 != (_s_RTTIBaseClassDescriptor *)0x0)) {
      return local_24;
    }
  }
  return (_s_RTTIBaseClassDescriptor *)0x0;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int FUN_009832e6(int *param_1,int param_2,_s_RTTICompleteObjectLocator *param_3,
                TypeDescriptor *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  _s_RTTIBaseClassDescriptor *p_Var4;
  TypeDescriptor *pTVar5;
  PMD *in_stack_ffffffc4;
  undefined1 local_2c [12];
  undefined4 local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x9832f2;
  if (param_1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    local_8 = 0;
    pvVar3 = (void *)FUN_00982fe6();
    pTVar5 = (TypeDescriptor *)((int)param_1 + (-(int)pvVar3 - param_2));
    uVar1 = *(uint *)(*(int *)(*(int *)(*param_1 + -4) + 0x10) + 4);
    if ((uVar1 & 1) == 0) {
      p_Var4 = FindSITargetTypeInstance(param_3,param_4,(TypeDescriptor *)in_stack_ffffffc4);
    }
    else if ((uVar1 & 2) == 0) {
      p_Var4 = FindMITargetTypeInstance
                         (pvVar3,param_3,pTVar5,(int)param_4,(TypeDescriptor *)in_stack_ffffffc4);
    }
    else {
      p_Var4 = FindVITargetTypeInstance
                         (pvVar3,param_3,pTVar5,(int)param_4,(TypeDescriptor *)in_stack_ffffffc4);
    }
    if (p_Var4 == (_s_RTTIBaseClassDescriptor *)0x0) {
      iVar2 = 0;
      local_20 = 0;
      if (param_5 != 0) {
        FUN_00983d6e("Bad dynamic_cast!");
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_2c,&DAT_00af1944);
      }
    }
    else {
      iVar2 = PMDtoOffset(pvVar3,in_stack_ffffffc4);
      iVar2 = iVar2 + (int)pvVar3;
    }
  }
  return iVar2;
}



/* Library Function - Single Match
    __snprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl __snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  int *piVar1;
  int iVar2;
  FILE local_24;
  
  if (_Format == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    iVar2 = -1;
  }
  else if ((_Count == 0) || (_Dest != (char *)0x0)) {
    local_24._cnt = 0x7fffffff;
    if (_Count < 0x80000000) {
      local_24._cnt = _Count;
    }
    local_24._flag = 0x42;
    local_24._base = _Dest;
    local_24._ptr = _Dest;
    iVar2 = __output_l(&local_24,_Format,(_locale_t)0x0,&stack0x00000010);
    if (_Dest != (char *)0x0) {
      local_24._cnt = local_24._cnt - 1;
      if (local_24._cnt < 0) {
        __flsbuf(0,&local_24);
      }
      else {
        *local_24._ptr = '\0';
      }
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    iVar2 = -1;
  }
  return iVar2;
}



/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2005 Release */

long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}



long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}



/* Library Function - Single Match
    __mbsicmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsicmp_l(uchar *_Str1,uchar *_Str2,_locale_t _Locale)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  pthreadmbcinfo ptVar6;
  byte *pbVar7;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  byte local_8;
  byte local_7;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
  if (_Str1 == (uchar *)0x0) {
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar5 = 0x7fffffff;
  }
  else if (_Str2 == (uchar *)0x0) {
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar5 = 0x7fffffff;
  }
  else {
    ptVar6 = local_18.mbcinfo;
    if ((local_18.mbcinfo)->ismbcodepage == 0) {
      iVar5 = __stricmp_l((char *)_Str1,(char *)_Str2,&local_18);
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
    }
    else {
      do {
        bVar1 = *_Str1;
        pbVar7 = _Str1 + 1;
        if ((ptVar6->mbctype[bVar1 + 5] & 4) == 0) {
          if ((ptVar6->mbctype[bVar1 + 5] & 0x10) == 0) {
            uVar2 = (ushort)bVar1;
            _Str1 = pbVar7;
          }
          else {
            uVar2 = (ushort)ptVar6->mbcasemap[bVar1 + 4];
            _Str1 = pbVar7;
          }
        }
        else if (*pbVar7 == 0) {
          uVar2 = 0;
          _Str1 = pbVar7;
        }
        else {
          iVar5 = ___crtLCMapStringA(&local_18,*(LPCWSTR *)ptVar6->mbulinfo,0x200,(LPCSTR)_Str1,2,
                                     (LPSTR)&local_8,2,ptVar6->mbcodepage,1);
          if (iVar5 == 1) {
            uVar2 = (ushort)local_8;
          }
          else {
            if (iVar5 != 2) goto LAB_00983681;
            uVar2 = (ushort)local_8 * 0x100 + (ushort)local_7;
          }
          ptVar6 = local_18.mbcinfo;
          _Str1 = _Str1 + 2;
        }
        bVar1 = *_Str2;
        pbVar7 = _Str2 + 1;
        if ((ptVar6->mbctype[bVar1 + 5] & 4) == 0) {
          if ((ptVar6->mbctype[bVar1 + 5] & 0x10) == 0) {
            uVar3 = (ushort)bVar1;
          }
          else {
            uVar3 = (ushort)ptVar6->mbcasemap[bVar1 + 4];
          }
        }
        else if (*pbVar7 == 0) {
          uVar3 = 0;
        }
        else {
          iVar5 = ___crtLCMapStringA(&local_18,*(LPCWSTR *)ptVar6->mbulinfo,0x200,(LPCSTR)_Str2,2,
                                     (LPSTR)&local_8,2,ptVar6->mbcodepage,1);
          if (iVar5 == 1) {
            uVar3 = (ushort)local_8;
          }
          else {
            if (iVar5 != 2) {
LAB_00983681:
              piVar4 = __errno();
              *piVar4 = 0x16;
              if (local_c != '\0') {
                *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
              }
              return 0x7fffffff;
            }
            uVar3 = (ushort)local_8 * 0x100 + (ushort)local_7;
          }
          pbVar7 = _Str2 + 2;
          ptVar6 = local_18.mbcinfo;
        }
        if (uVar3 != uVar2) {
          iVar5 = (-(uint)(uVar3 < uVar2) & 2) - 1;
          if (local_c == '\0') {
            return iVar5;
          }
          *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
          return iVar5;
        }
        _Str2 = pbVar7;
      } while (uVar2 != 0);
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
      iVar5 = 0;
    }
  }
  return iVar5;
}



/* Library Function - Single Match
    __mbsicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsicmp(uchar *_Str1,uchar *_Str2)

{
  int iVar1;
  
  iVar1 = __mbsicmp_l(_Str1,_Str2,(_locale_t)0x0);
  return iVar1;
}



/* Library Function - Single Match
    _IsRootUNCName
   
   Library: Visual Studio 2005 Release */

undefined4 _IsRootUNCName(void)

{
  size_t sVar1;
  char *pcVar2;
  char cVar3;
  char *unaff_ESI;
  
  sVar1 = _strlen(unaff_ESI);
  if ((((4 < sVar1) && ((*unaff_ESI == '\\' || (*unaff_ESI == '/')))) &&
      ((unaff_ESI[1] == '\\' || (unaff_ESI[1] == '/')))) &&
     ((unaff_ESI[2] != '\\' && (unaff_ESI[2] != '/')))) {
    pcVar2 = unaff_ESI + 3;
    cVar3 = *pcVar2;
    if (cVar3 != '\0') {
      do {
        if ((cVar3 == '\\') || (cVar3 == '/')) break;
        pcVar2 = pcVar2 + 1;
        cVar3 = *pcVar2;
      } while (cVar3 != '\0');
      if ((*pcVar2 != '\0') && (pcVar2 = pcVar2 + 1, *pcVar2 != '\0')) {
        cVar3 = *pcVar2;
        if (cVar3 != '\0') {
          do {
            if ((cVar3 == '\\') || (cVar3 == '/')) break;
            pcVar2 = pcVar2 + 1;
            cVar3 = *pcVar2;
          } while (cVar3 != '\0');
          if ((*pcVar2 != '\0') && (pcVar2[1] != '\0')) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __stat64i32
   
   Library: Visual Studio 2005 Release */

undefined4 __stat64i32(uchar *param_1,int *param_2)

{
  undefined2 uVar1;
  ulong *puVar2;
  int *piVar3;
  uchar *puVar4;
  uint uVar5;
  int iVar6;
  char *_Str;
  size_t sVar7;
  int iVar8;
  UINT UVar9;
  BOOL BVar10;
  DWORD DVar11;
  __time64_t _Var12;
  _FILETIME local_268;
  _SYSTEMTIME local_260;
  char *local_250;
  _WIN32_FIND_DATAA local_24c;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)(local_24c.cFileName + 0x34);
  local_268.dwHighDateTime = (DWORD)param_1;
  if ((param_1 == (uchar *)0x0) || (param_2 == (int *)0x0)) {
    puVar2 = ___doserrno();
    *puVar2 = 0;
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return 0xffffffff;
  }
  puVar4 = __mbspbrk(param_1,"?*");
  if (puVar4 != (uchar *)0x0) goto LAB_009837c0;
  if (param_1[1] == ':') {
    if ((*param_1 != '\0') && (param_1[2] == '\0')) goto LAB_009837c0;
    uVar5 = __mbctolower((int)(char)*param_1);
    iVar6 = uVar5 - 0x60;
  }
  else {
    iVar6 = __getdrive();
  }
  local_250 = FindFirstFileA((LPCSTR)param_1,&local_24c);
  if (local_250 == (char *)0xffffffff) {
    local_250 = (char *)0x0;
    puVar4 = __mbspbrk(param_1,"./\\");
    if (puVar4 == (uchar *)0x0) {
LAB_009837c0:
      piVar3 = __errno();
      *piVar3 = 2;
      puVar2 = ___doserrno();
      *puVar2 = 2;
      return 0xffffffff;
    }
    _Str = __fullpath(local_10c,(char *)param_1,0x104);
    if (_Str == (char *)0x0) {
      piVar3 = __errno();
      if (*piVar3 != 0x22) goto LAB_009837c0;
      _Str = __fullpath((char *)0x0,(char *)param_1,0);
      local_250 = _Str;
    }
    if ((_Str == (char *)0x0) ||
       (((sVar7 = _strlen(_Str), sVar7 != 3 && (iVar8 = _IsRootUNCName(), iVar8 == 0)) ||
        (UVar9 = GetDriveTypeA(_Str), UVar9 < 2)))) {
      if (local_250 != (char *)0x0) {
        _free(local_250);
      }
      goto LAB_009837c0;
    }
    if (local_250 != (char *)0x0) {
      _free(local_250);
    }
    local_24c.dwFileAttributes = 0x10;
    local_24c.nFileSizeHigh = 0;
    local_24c.nFileSizeLow = 0;
    local_24c.cFileName[0] = '\0';
    _Var12 = ___loctotime64_t(0x7bc,1,1,0,0,0,-1);
    *(__time64_t *)(param_2 + 8) = _Var12;
    *(__time64_t *)(param_2 + 6) = _Var12;
    *(__time64_t *)(param_2 + 10) = _Var12;
    param_1 = (uchar *)local_268.dwHighDateTime;
  }
  else {
    if ((local_24c.ftLastWriteTime.dwLowDateTime == 0) &&
       (local_24c.ftLastWriteTime.dwHighDateTime == 0)) {
      param_2[8] = 0;
      param_2[9] = 0;
    }
    else {
      BVar10 = FileTimeToLocalFileTime(&local_24c.ftLastWriteTime,&local_268);
      if ((BVar10 == 0) || (BVar10 = FileTimeToSystemTime(&local_268,&local_260), BVar10 == 0))
      goto LAB_00983a71;
      _Var12 = ___loctotime64_t((uint)local_260.wYear,(uint)local_260.wMonth,(uint)local_260.wDay,
                                (uint)local_260.wHour,(uint)local_260.wMinute,
                                (uint)local_260.wSecond,-1);
      *(__time64_t *)(param_2 + 8) = _Var12;
    }
    if ((local_24c.ftLastAccessTime.dwLowDateTime == 0) &&
       (local_24c.ftLastAccessTime.dwHighDateTime == 0)) {
      param_2[6] = param_2[8];
      param_2[7] = param_2[9];
    }
    else {
      BVar10 = FileTimeToLocalFileTime(&local_24c.ftLastAccessTime,&local_268);
      if ((BVar10 == 0) || (BVar10 = FileTimeToSystemTime(&local_268,&local_260), BVar10 == 0))
      goto LAB_00983a71;
      _Var12 = ___loctotime64_t((uint)local_260.wYear,(uint)local_260.wMonth,(uint)local_260.wDay,
                                (uint)local_260.wHour,(uint)local_260.wMinute,
                                (uint)local_260.wSecond,-1);
      *(__time64_t *)(param_2 + 6) = _Var12;
    }
    if ((local_24c.ftCreationTime.dwLowDateTime == 0) &&
       (local_24c.ftCreationTime.dwHighDateTime == 0)) {
      param_2[10] = param_2[8];
      param_2[0xb] = param_2[9];
    }
    else {
      BVar10 = FileTimeToLocalFileTime(&local_24c.ftCreationTime,&local_268);
      if ((BVar10 == 0) || (BVar10 = FileTimeToSystemTime(&local_268,&local_260), BVar10 == 0)) {
LAB_00983a71:
        DVar11 = GetLastError();
        __dosmaperr(DVar11);
        FindClose(local_250);
        return 0xffffffff;
      }
      _Var12 = ___loctotime64_t((uint)local_260.wYear,(uint)local_260.wMonth,(uint)local_260.wDay,
                                (uint)local_260.wHour,(uint)local_260.wMinute,
                                (uint)local_260.wSecond,-1);
      *(__time64_t *)(param_2 + 10) = _Var12;
    }
    FindClose(local_250);
  }
  uVar1 = ___dtoxmode(local_24c.dwFileAttributes,param_1);
  *(undefined2 *)((int)param_2 + 6) = uVar1;
  param_2[5] = local_24c.nFileSizeLow;
  *param_2 = iVar6 + -1;
  param_2[4] = iVar6 + -1;
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined2 *)(param_2 + 1) = 0;
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined2 *)((int)param_2 + 10) = 0;
  return 0;
}



void FUN_00983af0(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  
  if ((DAT_00baabdc != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_009925a0();
    return;
  }
  FUN_00991b88((double)in_ST0);
  FUN_00983b48();
  return;
}



void FUN_00983b3f(void)

{
                    /* WARNING: Subroutine does not return */
  __fload_withFB();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_00983b48(int param_1)

{
  ushort uVar1;
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  float10 fVar2;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
      in_FPUStatusWord = 1;
    }
    else {
      in_FPUStatusWord = FUN_00991b2c();
    }
    if (DAT_00ba9ddc == 0) {
      uVar1 = __startOneArgErrorHandling();
      return uVar1;
    }
  }
  else {
    fptan(in_ST0);
    fVar2 = (float10)1;
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - (fVar2 / _DAT_00aa509a) * _DAT_00aa509a;
      } while ((in_FPUStatusWord & 0x400) != 0);
      fptan(fVar2);
    }
    if (DAT_00ba9ddc == 0) {
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  return in_FPUStatusWord;
}



/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio */

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&stack0x00000000 - (int)in_EAX & ~-(uint)(&stack0x00000000 < in_EAX))
  ;
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = unaff_retaddr;
  return;
}



/* Library Function - Single Match
    __strdup
   
   Library: Visual Studio 2005 Release */

char * __cdecl __strdup(char *_Src)

{
  char *_Dst;
  size_t sVar1;
  errno_t eVar2;
  
  if (_Src == (char *)0x0) {
    _Dst = (char *)0x0;
  }
  else {
    sVar1 = _strlen(_Src);
    _Dst = _malloc(sVar1 + 1);
    if (_Dst == (char *)0x0) {
      _Dst = (char *)0x0;
    }
    else {
      eVar2 = _strcpy_s(_Dst,sVar1 + 1,_Src);
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  return _Dst;
}



/* Library Function - Single Match
    __allmul
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}



void FUN_00983c94(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00aa3ed4;
  return;
}



/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &)
   
   Library: Visual Studio 2005 Release */

exception * __thiscall std::exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  char *_Dst;
  
  *(undefined ***)this = &PTR_FUN_00aa3ed4;
  if (*param_1 == (char *)0x0) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    sVar1 = _strlen(*param_1);
    _Dst = _malloc(sVar1 + 1);
    *(char **)(this + 4) = _Dst;
    if (_Dst != (char *)0x0) {
      _strcpy_s(_Dst,sVar1 + 1,*param_1);
    }
  }
  *(undefined4 *)(this + 8) = 1;
  return this;
}



/* Library Function - Single Match
    public: __thiscall std::exception::exception(class std::exception const &)
   
   Library: Visual Studio 2005 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  *(undefined ***)this = &PTR_FUN_00aa3ed4;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(this + 8) = iVar1;
  pcVar3 = *(char **)(param_1 + 4);
  if (iVar1 == 0) {
    *(char **)(this + 4) = pcVar3;
  }
  else if (pcVar3 == (char *)0x0) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    sVar2 = _strlen(pcVar3);
    pcVar3 = _malloc(sVar2 + 1);
    *(char **)(this + 4) = pcVar3;
    if (pcVar3 != (char *)0x0) {
      _strcpy_s(pcVar3,sVar2 + 1,*(char **)(param_1 + 4));
    }
  }
  return this;
}



/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = &PTR_FUN_00aa3ed4;
  if (*(int *)(this + 8) != 0) {
    _free(*(void **)(this + 4));
  }
  return;
}



void FUN_00983d6e(void)

{
  exception *in_ECX;
  
  std::exception::exception(in_ECX,(char **)&stack0x00000004);
  *(undefined ***)in_ECX = &PTR_FUN_00aa3ef4;
  return;
}



void FUN_00983e16(byte param_1)

{
  exception *in_ECX;
  
  exception::~exception(in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00983e32(byte param_1)

{
  exception *in_ECX;
  
  *(undefined ***)in_ECX = &PTR_FUN_00aa3ef4;
  exception::~exception(in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00983e54(byte param_1)

{
  exception *in_ECX;
  
  *(undefined ***)in_ECX = &PTR_FUN_00aa3f00;
  exception::~exception(in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* Library Function - Single Match
    _memcpy_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  int *piVar2;
  
  if (_MaxCount == 0) {
LAB_00983e84:
    eVar1 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_00983e8d:
      piVar2 = __errno();
      eVar1 = 0x16;
      *piVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        _memcpy(_Dst,_Src,_MaxCount);
        goto LAB_00983e84;
      }
      _memset(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_00983e8d;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      piVar2 = __errno();
      eVar1 = 0x22;
      *piVar2 = 0x22;
    }
    __invalid_parameter(0,0,0,0,0);
  }
  return eVar1;
}



/* Library Function - Single Match
    _memmove_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  int *piVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_00983f46:
    eVar2 = 0;
  }
  else {
    if ((_Dst == (void *)0x0) || (_Src == (void *)0x0)) {
      piVar1 = __errno();
      eVar2 = 0x16;
      *piVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        _memmove(_Dst,_Src,_MaxCount);
        goto LAB_00983f46;
      }
      piVar1 = __errno();
      eVar2 = 0x22;
      *piVar1 = 0x22;
    }
    __invalid_parameter(0,0,0,0,0);
  }
  return eVar2;
}



/* Library Function - Single Match
    __CxxThrowException@8
   
   Library: Visual Studio 2005 Release */

void __CxxThrowException_8(undefined4 param_1,byte *param_2)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_24 [4];
  DWORD local_14;
  ULONG_PTR local_10;
  undefined4 local_c;
  byte *local_8;
  
  pDVar2 = &DAT_00aa3f14;
  pDVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  local_c = param_1;
  local_8 = param_2;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 8) != 0)) {
    local_10 = 0x1994000;
  }
  RaiseException(local_24[0],local_24[1],local_14,&local_10);
  return;
}



/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_16
   
   Library: Visual Studio 2005 Release */

uint __alloca_probe_16(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_8
   
   Library: Visual Studio */

uint __alloca_probe_8(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



/* Library Function - Single Match
    _strrchr
   
   Library: Visual Studio 2005 Release */

char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  do {
    pcVar4 = _Str;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)_Ch != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)_Ch) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}



bool FUN_00983ffd(undefined4 param_1,undefined4 param_2)

{
  return (param_2._2_2_ & 0x7ff0) != 0x7ff0;
}



/* Library Function - Single Match
    __isnan
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __cdecl __isnan(double _X)

{
  if ((((_X._6_2_ & 0x7ff8) != 0x7ff0) ||
      ((((ulonglong)_X & 0x7ffff00000000) == 0 && (_X._0_4_ == 0)))) &&
     ((_X._6_2_ & 0x7ff8) != 0x7ff8)) {
    return 0;
  }
  return 1;
}



/* Library Function - Single Match
    __fpclass
   
   Library: Visual Studio 2005 Release */

int __cdecl __fpclass(double _X)

{
  int iVar1;
  undefined4 uStack_8;
  
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = __sptype();
    if (iVar1 == 1) {
      return 0x200;
    }
    if (iVar1 == 2) {
      uStack_8 = 4;
    }
    else {
      if (iVar1 != 3) {
        return 1;
      }
      uStack_8 = 2;
    }
    return uStack_8;
  }
  if ((((ulonglong)_X & 0x7ff0000000000000) == 0) &&
     ((((ulonglong)_X & 0xfffff00000000) != 0 || (_X._0_4_ != 0)))) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff90) + 0x80;
  }
  if (_X == 0.0) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffffe0) + 0x40;
  }
  return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff08) + 0x100;
}



/* Library Function - Single Match
    _strstr
   
   Library: Visual Studio 2005 Release */

char * __cdecl _strstr(char *_Str,char *_SubStr)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  
  cVar3 = *_SubStr;
  if (cVar3 == '\0') {
    return _Str;
  }
  if (_SubStr[1] == '\0') {
    while (((uint)_Str & 3) != 0) {
      uVar4 = *(uint *)_Str;
      if ((char)uVar4 == cVar3) {
        return (char *)(uint *)_Str;
      }
      _Str = (char *)((int)_Str + 1);
      if ((char)uVar4 == '\0') {
        return (char *)0x0;
      }
    }
    while( true ) {
      while( true ) {
        uVar4 = *(uint *)_Str;
        uVar7 = uVar4 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar6 = uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff;
        puVar9 = (uint *)((int)_Str + 4);
        if (((uVar7 ^ 0xffffffff ^ uVar7 + 0x7efefeff) & 0x81010100) != 0) break;
        _Str = (char *)puVar9;
        if ((uVar6 & 0x81010100) != 0) {
          if ((uVar6 & 0x1010100) != 0) {
            return (char *)0x0;
          }
          if ((uVar4 + 0x7efefeff & 0x80000000) == 0) {
            return (char *)0x0;
          }
        }
      }
      uVar4 = *(uint *)_Str;
      if ((char)uVar4 == cVar3) {
        return (char *)(uint *)_Str;
      }
      if ((char)uVar4 == '\0') {
        return (char *)0x0;
      }
      cVar5 = (char)(uVar4 >> 8);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 1);
      }
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
      cVar5 = (char)(uVar4 >> 0x10);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 2);
      }
      if (cVar5 == '\0') break;
      cVar5 = (char)(uVar4 >> 0x18);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 3);
      }
      _Str = (char *)puVar9;
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
    }
    return (char *)0x0;
  }
  do {
    cVar5 = *_Str;
    do {
      while (_Str = _Str + 1, cVar5 != cVar3) {
        if (cVar5 == '\0') {
          return (char *)0x0;
        }
        cVar5 = *_Str;
      }
      cVar5 = *_Str;
      pcVar10 = _Str + 1;
      pcVar8 = _SubStr;
    } while (cVar5 != _SubStr[1]);
    do {
      if (pcVar8[2] == '\0') {
LAB_00984159:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_00984159;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



/* Library Function - Single Match
    _strncmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  if (_MaxCount != 0) {
    if ((3 < _MaxCount) && (pbVar1 = (byte *)_Str1, pbVar3 = (byte *)_Str2, _MaxCount != 4)) {
      do {
        _Str1 = (char *)(pbVar1 + 4);
        _Str2 = (char *)(pbVar3 + 4);
        if ((*pbVar1 == 0) || (*pbVar1 != *pbVar3)) {
          uVar2 = (uint)*pbVar1;
          uVar4 = (uint)*pbVar3;
          goto LAB_00984220;
        }
        if ((pbVar1[1] == 0) || (pbVar1[1] != pbVar3[1])) {
          uVar2 = (uint)pbVar1[1];
          uVar4 = (uint)pbVar3[1];
          goto LAB_00984220;
        }
        if ((pbVar1[2] == 0) || (pbVar1[2] != pbVar3[2])) {
          uVar2 = (uint)pbVar1[2];
          uVar4 = (uint)pbVar3[2];
          goto LAB_00984220;
        }
        if ((pbVar1[3] == 0) || (pbVar1[3] != pbVar3[3])) {
          uVar2 = (uint)pbVar1[3];
          uVar4 = (uint)pbVar3[3];
          goto LAB_00984220;
        }
        local_8 = local_8 + 4;
        pbVar1 = (byte *)_Str1;
        pbVar3 = (byte *)_Str2;
      } while (local_8 < _MaxCount - 4);
    }
    for (; local_8 < _MaxCount; local_8 = local_8 + 1) {
      if ((*_Str1 == 0) || (*_Str1 != *_Str2)) {
        uVar2 = (uint)(byte)*_Str1;
        uVar4 = (uint)(byte)*_Str2;
LAB_00984220:
        return uVar2 - uVar4;
      }
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
    }
  }
  return 0;
}



/* Library Function - Single Match
    __splitpath_helper
   
   Library: Visual Studio 2005 Release */

undefined4
__splitpath_helper(uchar *param_1,uint param_2,uchar *param_3,uint param_4,uchar *param_5,
                  uint param_6,uchar *param_7,uint param_8)

{
  uchar uVar1;
  bool bVar2;
  uchar *in_EAX;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uchar *puVar6;
  uchar *_Src;
  uchar *local_8;
  
  _Src = (uchar *)0x0;
  bVar2 = false;
  if (in_EAX != (uchar *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (param_2 == 0) {
LAB_00984256:
        if (param_3 == (uchar *)0x0) {
          if (param_4 == 0) {
LAB_00984267:
            if (param_5 == (uchar *)0x0) {
              if (param_6 == 0) {
LAB_00984278:
                if (param_7 == (uchar *)0x0) {
                  if (param_8 == 0) {
LAB_00984282:
                    if ((((*in_EAX == '\\') && (in_EAX[1] == '\\')) && (in_EAX[2] == '?')) &&
                       (in_EAX[3] == '\\')) {
                      in_EAX = in_EAX + 4;
                    }
                    iVar3 = 1;
                    puVar6 = in_EAX;
                    do {
                      if (*puVar6 == '\0') break;
                      iVar3 = iVar3 + -1;
                      puVar6 = puVar6 + 1;
                    } while (iVar3 != 0);
                    if (*puVar6 == ':') {
                      if (param_1 != (uchar *)0x0) {
                        if (param_2 < 3) goto LAB_009843b3;
                        __mbsnbcpy_s(param_1,0xffffffff,in_EAX,2);
                      }
                      in_EAX = puVar6 + 1;
                    }
                    else if (param_1 != (uchar *)0x0) {
                      *param_1 = '\0';
                    }
                    local_8 = (uchar *)0x0;
                    puVar6 = in_EAX;
                    if (*in_EAX == '\0') {
LAB_00984347:
                      _Src = in_EAX;
                      if (param_3 != (uchar *)0x0) {
                        *param_3 = '\0';
                      }
                    }
                    else {
                      do {
                        iVar3 = __ismbblead((int)(char)*puVar6);
                        if (iVar3 == 0) {
                          uVar1 = *puVar6;
                          if ((uVar1 == '/') || (uVar1 == '\\')) {
                            _Src = puVar6 + 1;
                          }
                          else if (uVar1 == '.') {
                            local_8 = puVar6;
                          }
                        }
                        else {
                          puVar6 = puVar6 + 1;
                        }
                        puVar6 = puVar6 + 1;
                      } while (*puVar6 != '\0');
                      if (_Src == (uchar *)0x0) goto LAB_00984347;
                      if (param_3 != (uchar *)0x0) {
                        if (param_4 <= (uint)((int)_Src - (int)in_EAX)) goto LAB_009843b3;
                        __mbsnbcpy_s(param_3,0xffffffff,in_EAX,(int)_Src - (int)in_EAX);
                      }
                    }
                    in_EAX = _Src;
                    if ((local_8 == (uchar *)0x0) || (local_8 < _Src)) {
                      if (param_5 != (uchar *)0x0) {
                        if (param_6 <= (uint)((int)puVar6 - (int)_Src)) goto LAB_009843b3;
                        __mbsnbcpy_s(param_5,0xffffffff,_Src,(int)puVar6 - (int)_Src);
                      }
                      if (param_7 != (uchar *)0x0) {
                        *param_7 = '\0';
                      }
                      return 0;
                    }
                    if (param_5 != (uchar *)0x0) {
                      if (param_6 <= (uint)((int)local_8 - (int)_Src)) goto LAB_009843b3;
                      __mbsnbcpy_s(param_5,0xffffffff,_Src,(int)local_8 - (int)_Src);
                    }
                    if (param_7 == (uchar *)0x0) {
                      return 0;
                    }
                    if ((uint)((int)puVar6 - (int)local_8) < param_8) {
                      __mbsnbcpy_s(param_7,0xffffffff,local_8,(int)puVar6 - (int)local_8);
                      return 0;
                    }
                    goto LAB_009843b3;
                  }
                }
                else if (param_8 != 0) goto LAB_00984282;
              }
            }
            else if (param_6 != 0) goto LAB_00984278;
          }
        }
        else if (param_4 != 0) goto LAB_00984267;
      }
    }
    else if (param_2 != 0) goto LAB_00984256;
  }
  bVar2 = true;
LAB_009843b3:
  if ((param_1 != (uchar *)0x0) && (param_2 != 0)) {
    *param_1 = '\0';
  }
  if ((param_3 != (uchar *)0x0) && (param_4 != 0)) {
    *param_3 = '\0';
  }
  if ((param_5 != (uchar *)0x0) && (param_6 != 0)) {
    *param_5 = '\0';
  }
  if ((param_7 != (uchar *)0x0) && (param_8 != 0)) {
    *param_7 = '\0';
  }
  piVar4 = __errno();
  if ((in_EAX == (uchar *)0x0) || (bVar2)) {
    uVar5 = 0x16;
    *piVar4 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else {
    uVar5 = 0x22;
    *piVar4 = 0x22;
  }
  return uVar5;
}



/* Library Function - Single Match
    __splitpath
   
   Library: Visual Studio 2005 Release */

void __cdecl __splitpath(char *_FullPath,char *_Drive,char *_Dir,char *_Filename,char *_Ext)

{
  __splitpath_helper(_Drive,-(_Drive != (char *)0x0) & 3,_Dir,-(uint)(_Dir != (char *)0x0) & 0x100,
                     _Filename,-(uint)(_Filename != (char *)0x0) & 0x100,_Ext,
                     -(uint)(_Ext != (char *)0x0) & 0x100);
  return;
}



/* Library Function - Single Match
    ___time64_t_from_ft
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

__time64_t ___time64_t_from_ft(FILETIME *param_1)

{
  BOOL BVar1;
  __time64_t _Var2;
  _SYSTEMTIME local_1c;
  _FILETIME local_c;
  
  if ((param_1->dwLowDateTime != 0) || (param_1->dwHighDateTime != 0)) {
    BVar1 = FileTimeToLocalFileTime(param_1,&local_c);
    if (BVar1 != 0) {
      BVar1 = FileTimeToSystemTime(&local_c,&local_1c);
      if (BVar1 != 0) {
        _Var2 = ___loctotime64_t((uint)local_1c.wYear,(uint)local_1c.wMonth,(uint)local_1c.wDay,
                                 (uint)local_1c.wHour,(uint)local_1c.wMinute,(uint)local_1c.wSecond,
                                 -1);
        return _Var2;
      }
    }
  }
  return -1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __findfirst64i32
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl __findfirst64i32(char *_Filename,_finddata64i32_t *_FindData)

{
  int *piVar1;
  HANDLE pvVar2;
  DWORD DVar3;
  errno_t eVar4;
  __time64_t _Var5;
  undefined8 uVar6;
  _WIN32_FIND_DATAA local_148;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  if ((_FindData == (_finddata64i32_t *)0x0) || (_Filename == (char *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return -1;
  }
  pvVar2 = FindFirstFileA(_Filename,&local_148);
  if (pvVar2 != (HANDLE)0xffffffff) {
    _FindData->attrib = -(uint)(local_148.dwFileAttributes != 0x80) & local_148.dwFileAttributes;
    _Var5 = ___time64_t_from_ft(&local_148.ftCreationTime);
    _FindData->time_create = _Var5;
    _Var5 = ___time64_t_from_ft(&local_148.ftLastAccessTime);
    _FindData->time_access = _Var5;
    uVar6 = ___time64_t_from_ft(&local_148.ftLastWriteTime);
    *(int *)&_FindData->time_write = (int)uVar6;
    _FindData->size = local_148.nFileSizeLow;
    *(int *)((int)&_FindData->time_write + 4) = (int)((ulonglong)uVar6 >> 0x20);
    eVar4 = _strcpy_s(_FindData->name,0x104,local_148.cFileName);
    if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    return (intptr_t)pvVar2;
  }
  DVar3 = GetLastError();
  if (DVar3 < 2) {
LAB_00984563:
    piVar1 = __errno();
    *piVar1 = 0x16;
  }
  else {
    if (3 < DVar3) {
      if (DVar3 == 8) {
        piVar1 = __errno();
        *piVar1 = 0xc;
        return -1;
      }
      if (DVar3 != 0x12) goto LAB_00984563;
    }
    piVar1 = __errno();
    *piVar1 = 2;
  }
  return -1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __findnext64i32
   
   Library: Visual Studio 2005 Release */

int __cdecl __findnext64i32(intptr_t _FindHandle,_finddata64i32_t *_FindData)

{
  int *piVar1;
  BOOL BVar2;
  DWORD DVar3;
  errno_t eVar4;
  __time64_t _Var5;
  undefined8 uVar6;
  _WIN32_FIND_DATAA local_148;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  if (_FindHandle == -1) {
    piVar1 = __errno();
  }
  else {
    if (_FindData != (_finddata64i32_t *)0x0) {
      BVar2 = FindNextFileA((HANDLE)_FindHandle,&local_148);
      if (BVar2 != 0) {
        _FindData->attrib = -(uint)(local_148.dwFileAttributes != 0x80) & local_148.dwFileAttributes
        ;
        _Var5 = ___time64_t_from_ft(&local_148.ftCreationTime);
        _FindData->time_create = _Var5;
        _Var5 = ___time64_t_from_ft(&local_148.ftLastAccessTime);
        _FindData->time_access = _Var5;
        uVar6 = ___time64_t_from_ft(&local_148.ftLastWriteTime);
        *(int *)&_FindData->time_write = (int)uVar6;
        _FindData->size = local_148.nFileSizeLow;
        *(int *)((int)&_FindData->time_write + 4) = (int)((ulonglong)uVar6 >> 0x20);
        eVar4 = _strcpy_s(_FindData->name,0x104,local_148.cFileName);
        if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        return 0;
      }
      DVar3 = GetLastError();
      if (1 < DVar3) {
        if (3 < DVar3) {
          if (DVar3 == 8) {
            piVar1 = __errno();
            *piVar1 = 0xc;
            return -1;
          }
          if (DVar3 != 0x12) goto LAB_00984699;
        }
        piVar1 = __errno();
        *piVar1 = 2;
        return -1;
      }
LAB_00984699:
      piVar1 = __errno();
      *piVar1 = 0x16;
      return -1;
    }
    piVar1 = __errno();
  }
  *piVar1 = 0x16;
  __invalid_parameter(0,0,0,0,0);
  return -1;
}



/* Library Function - Single Match
    __fseek_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __fseek_nolock(FILE *_File,long _Offset,int _Origin)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  
  if ((_File->_flag & 0x83U) == 0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    iVar3 = -1;
  }
  else {
    _File->_flag = _File->_flag & 0xffffffef;
    if (_Origin == 1) {
      lVar4 = __ftell_nolock(_File);
      _Offset = _Offset + lVar4;
      _Origin = 0;
    }
    __flush(_File);
    uVar1 = _File->_flag;
    if ((char)uVar1 < '\0') {
      _File->_flag = uVar1 & 0xfffffffc;
    }
    else if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
      _File->_bufsiz = 0x200;
    }
    iVar3 = __fileno(_File);
    lVar4 = __lseek(iVar3,_Offset,_Origin);
    iVar3 = (lVar4 != -1) - 1;
  }
  return iVar3;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fseek
   
   Library: Visual Studio 2005 Release */

int __cdecl _fseek(FILE *_File,long _Offset,int _Origin)

{
  int *piVar1;
  int iVar2;
  
  if ((_File == (FILE *)0x0) || (((_Origin != 0 && (_Origin != 1)) && (_Origin != 2)))) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    iVar2 = -1;
  }
  else {
    __lock_file(_File);
    iVar2 = __fseek_nolock(_File,_Offset,_Origin);
    FUN_0098487c();
  }
  return iVar2;
}



void FUN_0098487c(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}



/* Library Function - Single Match
    __ftell_nolock
   
   Library: Visual Studio 2005 Release */

long __cdecl __ftell_nolock(FILE *_File)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  uint _FileHandle;
  FILE *pFVar4;
  long lVar5;
  char *pcVar6;
  FILE *pFVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  int local_10;
  int local_c;
  
  pFVar7 = _File;
  if (_File == (FILE *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return -1;
  }
  _FileHandle = __fileno(_File);
  if (_File->_cnt < 0) {
    _File->_cnt = 0;
  }
  local_c = __lseek(_FileHandle,0,1);
  if (local_c < 0) {
    return -1;
  }
  uVar1 = _File->_flag;
  if ((uVar1 & 0x108) == 0) {
    return local_c - _File->_cnt;
  }
  pcVar6 = _File->_ptr;
  pcVar8 = _File->_base;
  local_10 = (int)pcVar6 - (int)pcVar8;
  if ((uVar1 & 3) == 0) {
    if (-1 < (char)uVar1) {
      piVar3 = __errno();
      *piVar3 = 0x16;
      return -1;
    }
  }
  else {
    pcVar2 = pcVar8;
    if ((*(byte *)((&DAT_00baaac0)[(int)_FileHandle >> 5] + 4 + (_FileHandle & 0x1f) * 0x28) & 0x80)
        != 0) {
      for (; pcVar2 < pcVar6; pcVar2 = pcVar2 + 1) {
        if (*pcVar2 == '\n') {
          local_10 = local_10 + 1;
        }
      }
    }
  }
  if (local_c != 0) {
    if ((_File->_flag & 1) != 0) {
      if (_File->_cnt == 0) {
        local_10 = 0;
      }
      else {
        iVar9 = (_FileHandle & 0x1f) * 0x28;
        pFVar4 = (FILE *)(pcVar6 + (_File->_cnt - (int)pcVar8));
        if ((*(byte *)((&DAT_00baaac0)[(int)_FileHandle >> 5] + 4 + iVar9) & 0x80) != 0) {
          lVar5 = __lseek(_FileHandle,0,2);
          if (lVar5 == local_c) {
            pcVar6 = _File->_base;
            pcVar8 = pcVar6 + (int)&pFVar4->_ptr;
            _File = pFVar4;
            for (; pcVar6 < pcVar8; pcVar6 = pcVar6 + 1) {
              if (*pcVar6 == '\n') {
                _File = (FILE *)((int)&_File->_ptr + 1);
              }
            }
            bVar10 = (pFVar7->_flag & 0x2000) == 0;
          }
          else {
            lVar5 = __lseek(_FileHandle,local_c,0);
            if (lVar5 < 0) {
              return -1;
            }
            pFVar7 = (FILE *)0x200;
            if ((((FILE *)0x200 < pFVar4) || ((_File->_flag & 8U) == 0)) ||
               ((_File->_flag & 0x400U) != 0)) {
              pFVar7 = (FILE *)_File->_bufsiz;
            }
            bVar10 = (*(byte *)((&DAT_00baaac0)[(int)_FileHandle >> 5] + 4 + iVar9) & 4) == 0;
            _File = pFVar7;
          }
          pFVar4 = _File;
          if (!bVar10) {
            pFVar4 = (FILE *)((int)&_File->_ptr + 1);
          }
        }
        _File = pFVar4;
        local_c = local_c - (int)_File;
      }
    }
    return local_10 + local_c;
  }
  return local_10;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _ftell
   
   Library: Visual Studio 2005 Release */

long __cdecl _ftell(FILE *_File)

{
  int *piVar1;
  long lVar2;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    lVar2 = -1;
  }
  else {
    __lock_file(_File);
    lVar2 = __ftell_nolock(_File);
    FUN_00984a82();
  }
  return lVar2;
}



void FUN_00984a82(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}



/* Library Function - Single Match
    __allshr
   
   Library: Visual Studio */

undefined8 __allshr(void)

{
  uint in_EAX;
  byte in_CL;
  int in_EDX;
  int iVar1;
  
  iVar1 = in_EDX >> 0x1f;
  if (0x3f < in_CL) {
    return CONCAT44(iVar1,iVar1);
  }
  if (in_CL < 0x20) {
    return CONCAT44(in_EDX >> (in_CL & 0x1f),
                    in_EAX >> (in_CL & 0x1f) | in_EDX << 0x20 - (in_CL & 0x1f));
  }
  return CONCAT44(iVar1,in_EDX >> (in_CL & 0x1f));
}



/* Library Function - Single Match
    __alldiv
   
   Library: Visual Studio */

undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4)

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
    _strcpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        cVar1 = *_Src;
        *pcVar3 = cVar1;
        _Src = _Src + 1;
        if (cVar1 == '\0') break;
        _SizeInBytes = _SizeInBytes - 1;
        pcVar3 = pcVar3 + 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        return 0;
      }
      *_Dst = '\0';
      piVar2 = __errno();
      eVar4 = 0x22;
      *piVar2 = 0x22;
      goto LAB_00984b89;
    }
    *_Dst = '\0';
  }
  piVar2 = __errno();
  eVar4 = 0x16;
  *piVar2 = 0x16;
LAB_00984b89:
  __invalid_parameter(0,0,0,0,0);
  return eVar4;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  void *in_stack_ffffffcc;
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*param_4)(in_stack_ffffffcc);
  }
  FUN_00984c1c();
  return;
}



void FUN_00984c1c(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x1c),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x18));
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2005 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  BOOL BVar1;
  LONG LVar2;
  HANDLE hProcess;
  UINT uExitCode;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  local_2d4 = 0x10001;
  _memset(&local_32c,0,0x50);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
  local_32c.ExceptionCode = 0xc000000d;
  BVar1 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar2 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar2 == 0) && (BVar1 == 0)) {
    FUN_009933a9(2);
  }
  uExitCode = 0xc000000d;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* Library Function - Single Match
    __invalid_parameter
   
   Library: Visual Studio 2005 Release */

void __invalid_parameter(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,
                        uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__decode_pointer(DAT_00ba9de8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00984d4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_009933a9(2);
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}



void FUN_00984d5e(void)

{
  __invalid_parameter(0,0,0,0,0);
  return;
}



/* Library Function - Single Match
    __tolower_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __tolower_l(int _C,_locale_t _Locale)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  CHAR CVar5;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  byte local_c;
  undefined1 local_b;
  CHAR local_8;
  CHAR local_7;
  undefined1 local_6;
  
  iVar1 = _C;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if ((uint)_C < 0x100) {
    if ((int)(local_1c.locinfo)->locale_name[3] < 2) {
      uVar2 = (byte)local_1c.locinfo[1].lc_category[0].locale[_C * 2] & 1;
    }
    else {
      uVar2 = __isctype_l(_C,1,&local_1c);
    }
    if (uVar2 == 0) {
LAB_00984dcd:
      if (local_10 == '\0') {
        return iVar1;
      }
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)local_1c.locinfo[1].lc_category[0].wlocale + _C);
  }
  else {
    CVar5 = (CHAR)_C;
    if (((int)(local_1c.locinfo)->locale_name[3] < 2) ||
       (iVar3 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c), iVar3 == 0)) {
      piVar4 = __errno();
      *piVar4 = 0x2a;
      local_7 = '\0';
      iVar3 = 1;
      local_8 = CVar5;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_8 = (CHAR)_C;
      local_6 = 0;
      iVar3 = 2;
      local_7 = CVar5;
    }
    iVar3 = ___crtLCMapStringA(&local_1c,(local_1c.locinfo)->lc_category[0].wlocale,0x100,&local_8,
                               iVar3,(LPSTR)&local_c,3,(local_1c.locinfo)->lc_codepage,1);
    if (iVar3 == 0) goto LAB_00984dcd;
    if (iVar3 == 1) {
      uVar2 = (uint)local_c;
    }
    else {
      uVar2 = (uint)CONCAT11(local_c,local_b);
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return uVar2;
}



/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2005 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_00ba9e10 == 0) {
    if (_C - 0x41U < 0x1a) {
      return _C + 0x20;
    }
  }
  else {
    _C = __tolower_l(_C,(_locale_t)0x0);
  }
  return _C;
}



/* Library Function - Single Match
    __isalpha_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isalpha_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x103;
  }
  else {
    uVar1 = __isctype_l(_C,0x103,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



/* Library Function - Single Match
    _isalpha
   
   Library: Visual Studio 2005 Release */

int __cdecl _isalpha(int _C)

{
  int iVar1;
  
  if (DAT_00ba9e10 == 0) {
    return *(ushort *)(PTR_DAT_00b31988 + _C * 2) & 0x103;
  }
  iVar1 = __isalpha_l(_C,(_locale_t)0x0);
  return iVar1;
}



/* Library Function - Single Match
    __isupper_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isupper_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 1;
  }
  else {
    uVar1 = __isctype_l(_C,1,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



/* Library Function - Single Match
    _isupper
   
   Library: Visual Studio 2005 Release */

int __cdecl _isupper(int _C)

{
  int iVar1;
  
  if (DAT_00ba9e10 == 0) {
    return (byte)PTR_DAT_00b31988[_C * 2] & 1;
  }
  iVar1 = __isupper_l(_C,(_locale_t)0x0);
  return iVar1;
}



/* Library Function - Single Match
    __islower_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __islower_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 2;
  }
  else {
    uVar1 = __isctype_l(_C,2,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



/* Library Function - Single Match
    _islower
   
   Library: Visual Studio 2005 Release */

int __cdecl _islower(int _C)

{
  int iVar1;
  
  if (DAT_00ba9e10 == 0) {
    return (byte)PTR_DAT_00b31988[_C * 2] & 2;
  }
  iVar1 = __islower_l(_C,(_locale_t)0x0);
  return iVar1;
}



/* Library Function - Single Match
    __isdigit_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isdigit_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 4;
  }
  else {
    uVar1 = __isctype_l(_C,4,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_00ba9e10 == 0) {
    return (byte)PTR_DAT_00b31988[_C * 2] & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}



/* Library Function - Single Match
    __isxdigit_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isxdigit_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 0x80;
  }
  else {
    uVar1 = __isctype_l(_C,0x80,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



/* Library Function - Single Match
    __isspace_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isspace_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 8;
  }
  else {
    uVar1 = __isctype_l(_C,8,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



/* Library Function - Single Match
    _isspace
   
   Library: Visual Studio 2005 Release */

int __cdecl _isspace(int _C)

{
  int iVar1;
  
  if (DAT_00ba9e10 == 0) {
    return (byte)PTR_DAT_00b31988[_C * 2] & 8;
  }
  iVar1 = __isspace_l(_C,(_locale_t)0x0);
  return iVar1;
}



/* Library Function - Single Match
    __isalnum_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isalnum_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x107;
  }
  else {
    uVar1 = __isctype_l(_C,0x107,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



/* Library Function - Single Match
    _isalnum
   
   Library: Visual Studio 2005 Release */

int __cdecl _isalnum(int _C)

{
  int iVar1;
  
  if (DAT_00ba9e10 == 0) {
    return *(ushort *)(PTR_DAT_00b31988 + _C * 2) & 0x107;
  }
  iVar1 = __isalnum_l(_C,(_locale_t)0x0);
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _clock
   
   Library: Visual Studio 2003 Release */

clock_t __cdecl _clock(void)

{
  clock_t cVar1;
  longlong lVar2;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  lVar2 = __allmul(local_c.dwHighDateTime,0,0,1);
  cVar1 = __aulldiv((lVar2 - CONCAT44(_DAT_00ba9df4,_DAT_00ba9df0)) +
                    (ulonglong)local_c.dwLowDateTime,10000,0);
  return cVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___inittime
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 ___inittime(void)

{
  longlong lVar1;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  lVar1 = __allmul(local_c.dwHighDateTime,0,0,1);
  _DAT_00ba9df0 = lVar1 + (ulonglong)local_c.dwLowDateTime;
  return 0;
}



/* Library Function - Single Match
    __mbscmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbscmp_l(uchar *_Str1,uchar *_Str2,_locale_t _Locale)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uchar *puVar4;
  uint uVar5;
  ushort uVar6;
  byte *pbVar7;
  _LocaleUpdate local_18 [4];
  int local_14;
  int local_10;
  char local_c;
  
  _LocaleUpdate::_LocaleUpdate(local_18,_Locale);
  if (_Str1 == (uchar *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar3 = 0x7fffffff;
  }
  else if (_Str2 == (uchar *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar3 = 0x7fffffff;
  }
  else if (*(int *)(local_14 + 8) == 0) {
    iVar3 = _strcmp((char *)_Str1,(char *)_Str2);
LAB_00985391:
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  else {
    do {
      bVar1 = *_Str1;
      uVar6 = (ushort)bVar1;
      puVar4 = _Str1 + 1;
      if ((*(byte *)(bVar1 + 0x1d + local_14) & 4) != 0) {
        if (*puVar4 == '\0') {
          uVar6 = 0;
        }
        else {
          uVar6 = CONCAT11(bVar1,*puVar4);
          puVar4 = _Str1 + 2;
        }
      }
      _Str1 = puVar4;
      uVar5 = (uint)*_Str2;
      pbVar7 = _Str2 + 1;
      if ((*(byte *)(uVar5 + 0x1d + local_14) & 4) != 0) {
        bVar1 = *pbVar7;
        if (bVar1 == 0) {
          uVar5 = 0;
        }
        else {
          pbVar7 = _Str2 + 2;
          uVar5 = (uint)CONCAT11(*_Str2,bVar1);
        }
      }
      if ((ushort)uVar5 != uVar6) {
        iVar3 = (-(uint)((ushort)uVar5 < uVar6) & 2) - 1;
        goto LAB_00985391;
      }
      _Str2 = pbVar7;
    } while (uVar6 != 0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar3 = 0;
  }
  return iVar3;
}



/* Library Function - Single Match
    __mbscmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbscmp(uchar *_Str1,uchar *_Str2)

{
  int iVar1;
  
  iVar1 = __mbscmp_l(_Str1,_Str2,(_locale_t)0x0);
  return iVar1;
}



/* Library Function - Single Match
    __makepath
   
   Library: Visual Studio 2005 Release */

void __cdecl __makepath(char *_Path,char *_Drive,char *_Dir,char *_Filename,char *_Ext)

{
  __makepath_s(_Path,0xffffffff,_Drive,_Dir,_Filename,_Ext);
  return;
}



/* Library Function - Single Match
    __get_errno_from_oserr
   
   Library: Visual Studio 2005 Release */

int __cdecl __get_errno_from_oserr(ulong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_1 == (&DAT_00b30bc0)[iVar1 * 2]) {
      return *(int *)(iVar1 * 8 + 0xb30bc4);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x2d);
  if (param_1 - 0x13 < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbc) & 0xe) + 8;
}



/* Library Function - Single Match
    __errno
   
   Library: Visual Studio 2005 Release */

int * __cdecl __errno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (int *)&DAT_00b30d28;
  }
  return &p_Var1->_terrno;
}



/* Library Function - Single Match
    ___doserrno
   
   Library: Visual Studio 2005 Release */

ulong * __cdecl ___doserrno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (ulong *)&DAT_00b30d2c;
  }
  return &p_Var1->_tdoserrno;
}



/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 2005 Release */

void __cdecl __dosmaperr(ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = ___doserrno();
  *puVar1 = param_1;
  iVar2 = __get_errno_from_oserr(param_1);
  piVar3 = __errno();
  *piVar3 = iVar2;
  return;
}



undefined4 FUN_0098544f(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  ulong uVar2;
  
  BVar1 = MoveFileA(param_1,param_2);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    __dosmaperr(uVar2);
    return 0xffffffff;
  }
  return 0;
}



/* Library Function - Single Match
    _strpbrk
   
   Library: Visual Studio 2005 Release */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}



/* Library Function - Single Match
    _memmove
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar5 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar5 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + -1;
          puVar5 = puVar5 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_009856a3_caseD_2;
        case 3:
          goto switchD_009856a3_caseD_3;
        }
        goto switchD_009856a3_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_009856a3_caseD_0;
      case 1:
        goto switchD_009856a3_caseD_1;
      case 2:
        goto switchD_009856a3_caseD_2;
      case 3:
        goto switchD_009856a3_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar5 & 3);
        switch((uint)puVar5 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
          uVar2 = uVar2 >> 2;
          puVar5 = (undefined4 *)((int)puVar5 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_009856a3_caseD_2;
            case 3:
              goto switchD_009856a3_caseD_3;
            }
            goto switchD_009856a3_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
          puVar4 = (undefined4 *)((int)puVar4 + -2);
          puVar5 = (undefined4 *)((int)puVar5 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_009856a3_caseD_2;
            case 3:
              goto switchD_009856a3_caseD_3;
            }
            goto switchD_009856a3_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + -3);
          puVar5 = (undefined4 *)((int)puVar5 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_009856a3_caseD_2;
            case 3:
              goto switchD_009856a3_caseD_3;
            }
            goto switchD_009856a3_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar5[7 - uVar2] = puVar4[7 - uVar2];
    case 6:
      puVar5[6 - uVar2] = puVar4[6 - uVar2];
    case 5:
      puVar5[5 - uVar2] = puVar4[5 - uVar2];
    case 4:
      puVar5[4 - uVar2] = puVar4[4 - uVar2];
    case 3:
      puVar5[3 - uVar2] = puVar4[3 - uVar2];
    case 2:
      puVar5[2 - uVar2] = puVar4[2 - uVar2];
    case 1:
      puVar5[1 - uVar2] = puVar4[1 - uVar2];
      puVar4 = puVar4 + -uVar2;
      puVar5 = puVar5 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_009856a3_caseD_1:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      return _Dst;
    case 2:
switchD_009856a3_caseD_2:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      return _Dst;
    case 3:
switchD_009856a3_caseD_3:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
      return _Dst;
    }
switchD_009856a3_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_00baabe0 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    pvVar1 = (void *)__VEC_memcpy();
    return pvVar1;
  }
  puVar4 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar4 = puVar4 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_0098551c_caseD_2;
      case 3:
        goto switchD_0098551c_caseD_3;
      }
      goto switchD_0098551c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_0098551c_caseD_0;
    case 1:
      goto switchD_0098551c_caseD_1;
    case 2:
      goto switchD_0098551c_caseD_2;
    case 3:
      goto switchD_0098551c_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar4 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0098551c_caseD_2;
          case 3:
            goto switchD_0098551c_caseD_3;
          }
          goto switchD_0098551c_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar4 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0098551c_caseD_2;
          case 3:
            goto switchD_0098551c_caseD_3;
          }
          goto switchD_0098551c_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar4 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0098551c_caseD_2;
          case 3:
            goto switchD_0098551c_caseD_3;
          }
          goto switchD_0098551c_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar4[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar4[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar4[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar4[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar4[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar4[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar4[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar4 = puVar4 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_0098551c_caseD_1:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_0098551c_caseD_2:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_0098551c_caseD_3:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_0098551c_caseD_0:
  return _Dst;
}



void FUN_00985870(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  
  if ((DAT_00baabdc != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00993570();
    return;
  }
  FUN_00991b88((double)in_ST0);
  FUN_009858c8();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_009858c8(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  short in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (fVar1 = _DAT_00b319b0, param_1 != 0)) {
      fVar1 = (float10)FUN_00991b2c();
    }
LAB_00985957:
    if (DAT_00ba9ddc == 0) {
      fVar1 = (float10)__startOneArgErrorHandling();
      return fVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_00991b15();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fVar1 = (float10)fpatan(in_ST0,SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)));
    }
    else {
      fVar1 = _DAT_00b319b0;
      if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_00985957;
      fVar1 = _DAT_00b319ba;
      if ((param_2 & 0x80000000) != 0) {
        fVar1 = -_DAT_00b319ba;
      }
    }
    if (DAT_00ba9ddc == 0) {
      fVar1 = (float10)__math_exit();
      return fVar1;
    }
  }
  return fVar1;
}



void FUN_0098598a(void)

{
  __cintrindisp2();
  return;
}



/* Library Function - Single Match
    __time64
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

__time64_t __cdecl __time64(__time64_t *_Time)

{
  __time64_t _Var1;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  _Var1 = __aulldiv(local_c.dwLowDateTime + 0x2ac18000,
                    local_c.dwHighDateTime + 0xfe624e21 + (uint)(0xd53e7fff < local_c.dwLowDateTime)
                    ,10000000,0);
  if (_Time != (__time64_t *)0x0) {
    *_Time = _Var1;
  }
  return _Var1;
}



void FUN_009859d0(ulong param_1)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  p_Var1->_holdrand = param_1;
  return;
}



/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _rand(void)

{
  _ptiddata p_Var1;
  uint uVar2;
  
  p_Var1 = __getptd();
  uVar2 = p_Var1->_holdrand * 0x343fd + 0x269ec3;
  p_Var1->_holdrand = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00985a00(double param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  if ((DAT_00baabdc != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x20);
    uVar1 = uVar2 >> 0x14;
    uVar6 = (ulonglong)(0x433 - (uVar2 >> 0x14 & 0x7ff));
    if ((uVar1 & 0x800) == 0) {
      if (uVar1 < 0x3ff) {
        return (float10)0;
      }
      if (uVar1 < 0x433) {
        return (float10)(double)(((ulonglong)param_1 >> uVar6) << uVar6);
      }
    }
    else {
      dVar5 = (double)(((ulonglong)param_1 >> uVar6) << uVar6);
      if (uVar1 < 0xbff) {
        return (float10)(double)((-(ulonglong)(param_1 < -0.0) | (ulonglong)DAT_00aa3f70) &
                                0xbff0000000000000);
      }
      if (uVar1 < 0xc33) {
        return (float10)(dVar5 - (double)(-(ulonglong)(param_1 < dVar5) & 0x3ff0000000000000));
      }
    }
    if (NAN(param_1)) {
      ___libm_error_support(&param_1,&param_1,&param_1,0x3ed);
    }
    return (float10)(double)CONCAT26(param_1._6_2_,param_1._0_6_);
  }
  uVar2 = __ctrlfp(DAT_00b31cc0,0xffff);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype();
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp(uVar2,0xffff);
        return (float10)(double)CONCAT26(param_1._6_2_,param_1._0_6_);
      }
      if (iVar3 == 3) {
        fVar4 = (float10)__handle_qnan1();
        return fVar4;
      }
    }
    dVar5 = (double)CONCAT26(param_1._6_2_,param_1._0_6_) + 1.0;
    uVar8 = CONCAT26(param_1._6_2_,param_1._0_6_);
    uVar7 = 8;
  }
  else {
    fVar4 = (float10)__frnd((int)param_1._0_6_,(int)(CONCAT26(param_1._6_2_,param_1._0_6_) >> 0x20))
    ;
    dVar5 = (double)fVar4;
    if (((double)CONCAT26(param_1._6_2_,param_1._0_6_) == dVar5) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp(uVar2,0xffff);
      return (float10)dVar5;
    }
    uVar8 = CONCAT26(param_1._6_2_,param_1._0_6_);
    uVar7 = 0x10;
  }
  fVar4 = (float10)__except1(uVar7,0xb,uVar8,dVar5,uVar2);
                    /* WARNING: Read-only address (ram,0x00aa3f70) is written */
  return fVar4;
}



void FUN_00985b70(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 in_ST1;
  
  if ((DAT_00baabdc != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00993f20();
    return;
  }
  FUN_00985bcd((double)in_ST1,(double)in_ST0);
  return;
}



void FUN_00985bcd(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint in_EAX;
  uint extraout_ECX;
  uint uVar1;
  short in_FPUControlWord;
  
  uVar1 = in_EAX;
  if (in_FPUControlWord != 0x27f) {
    in_EAX = FUN_00991b15();
    uVar1 = extraout_ECX;
  }
  if ((uVar1 & 0x7ff00000) != 0x7ff00000) {
                    /* WARNING: Subroutine does not return */
    __fload_withFB();
  }
  if ((in_EAX & 0xfffff) == 0 && param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    __fload_withFB();
  }
                    /* WARNING: Subroutine does not return */
  __fload_withFB();
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl _fprintf(FILE *_File,char *_Format,...)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int local_20;
  
  local_20 = 0;
  if ((_File == (FILE *)0x0) || (_Format == (char *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return -1;
  }
  __lock_file(_File);
  if ((_File->_flag & 0x40) == 0) {
    iVar2 = __fileno(_File);
    if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
      puVar4 = &DAT_00b31368;
    }
    else {
      iVar2 = __fileno(_File);
      uVar3 = __fileno(_File);
      puVar4 = (undefined *)((uVar3 & 0x1f) * 0x28 + (&DAT_00baaac0)[iVar2 >> 5]);
    }
    if ((puVar4[0x24] & 0x7f) == 0) {
      iVar2 = __fileno(_File);
      if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
        puVar4 = &DAT_00b31368;
      }
      else {
        iVar2 = __fileno(_File);
        uVar3 = __fileno(_File);
        puVar4 = (undefined *)((uVar3 & 0x1f) * 0x28 + (&DAT_00baaac0)[iVar2 >> 5]);
      }
      if ((puVar4[0x24] & 0x80) == 0) goto LAB_00985ec2;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    local_20 = -1;
  }
LAB_00985ec2:
  if (local_20 == 0) {
    iVar2 = __stbuf(_File);
    local_20 = __output_l(_File,_Format,(_locale_t)0x0,&stack0x0000000c);
    __ftbuf(iVar2,_File);
  }
  FUN_00985eff();
  return local_20;
}



void FUN_00985eff(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}



/* Library Function - Single Match
    __atof_l
   
   Library: Visual Studio 2005 Release */

double __cdecl __atof_l(char *_String,_locale_t _Locale)

{
  double dVar1;
  int *piVar2;
  uint uVar3;
  _locale_t _Locale_00;
  FLT p_Var4;
  _flt local_2c;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_String == (char *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    dVar1 = 0.0;
  }
  else {
    while( true ) {
      if ((int)(local_14.locinfo)->locale_name[3] < 2) {
        uVar3 = (byte)local_14.locinfo[1].lc_category[0].locale[(uint)(byte)*_String * 2] & 8;
      }
      else {
        uVar3 = __isctype_l((uint)(byte)*_String,8,&local_14);
      }
      if (uVar3 == 0) break;
      _String = _String + 1;
    }
    _Locale_00 = (_locale_t)_strlen(_String);
    p_Var4 = __fltin2(&local_2c,_String,_Locale_00);
    dVar1 = p_Var4->dval;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return dVar1;
}



/* Library Function - Single Match
    _atof
   
   Library: Visual Studio 2005 Release */

double __cdecl _atof(char *_String)

{
  double dVar1;
  
  dVar1 = __atof_l(_String,(_locale_t)0x0);
  return dVar1;
}



void FUN_00986000(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  
  if ((DAT_00baabdc != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_009955a0();
    return;
  }
  FUN_00991b88((double)in_ST0);
  FUN_00986058();
  return;
}



void FUN_0098604f(void)

{
                    /* WARNING: Subroutine does not return */
  __fload_withFB();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_00986058(int param_1)

{
  ushort uVar1;
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  float10 fVar2;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
      in_FPUStatusWord = 1;
    }
    else {
      in_FPUStatusWord = FUN_00991b2c();
    }
    if (DAT_00ba9ddc == 0) {
      uVar1 = __startOneArgErrorHandling();
      return uVar1;
    }
  }
  else {
    fVar2 = (float10)fcos(in_ST0);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - (fVar2 / _DAT_00aa509a) * _DAT_00aa509a;
      } while ((in_FPUStatusWord & 0x400) != 0);
      fcos(fVar2);
    }
    if (DAT_00ba9ddc == 0) {
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  return in_FPUStatusWord;
}



void FUN_00986130(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  
  if ((DAT_00baabdc != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00995750();
    return;
  }
  FUN_00991b88((double)in_ST0);
  FUN_00986188();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00986188(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  short in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (fVar1 = _DAT_00b319b0, param_1 != 0)) {
      fVar1 = (float10)FUN_00991b2c();
    }
LAB_00986217:
    if (DAT_00ba9ddc == 0) {
      fVar1 = (float10)__startOneArgErrorHandling();
      return fVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_00991b15();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fVar1 = (float10)fpatan(SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)),in_ST0);
    }
    else {
      fVar1 = _DAT_00b319b0;
      if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_00986217;
      if ((param_2 & 0x80000000) == 0) {
        fVar1 = (float10)0;
      }
      else {
        fVar1 = (float10)3.141592653589793;
      }
    }
    if (DAT_00ba9ddc == 0) {
      fVar1 = (float10)__math_exit();
      return fVar1;
    }
  }
  return fVar1;
}



/* Library Function - Single Match
    _vscan_fn
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl vscan_fn(code *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  char *unaff_ESI;
  
  _strlen(unaff_ESI);
  if ((unaff_ESI == (char *)0x0) || (param_2 == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (*param_1)(&stack0xffffffdc,param_2,param_3,param_4);
  }
  return uVar2;
}



/* Library Function - Multiple Matches With Different Base Names
    _sscanf
    _sscanf_s
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict__sscanf(char *_Src,char *_Format,...)

{
  int iVar1;
  
  iVar1 = vscan_fn(&DAT_00995d33,_Format,0,&stack0x0000000c);
  return iVar1;
}



void FUN_00986300(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  
  if ((DAT_00baabdc != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00996980();
    return;
  }
  FUN_00991b88((double)in_ST0);
  FUN_00986358();
  return;
}



void FUN_0098634f(void)

{
                    /* WARNING: Subroutine does not return */
  __fload_withFB();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_00986358(int param_1)

{
  ushort uVar1;
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  float10 fVar2;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
      in_FPUStatusWord = 1;
    }
    else {
      in_FPUStatusWord = FUN_00991b2c();
    }
    if (DAT_00ba9ddc == 0) {
      uVar1 = __startOneArgErrorHandling();
      return uVar1;
    }
  }
  else {
    fVar2 = (float10)fsin(in_ST0);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - (fVar2 / _DAT_00aa509a) * _DAT_00aa509a;
      } while ((in_FPUStatusWord & 0x400) != 0);
      fsin(fVar2);
    }
    if (DAT_00ba9ddc == 0) {
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  return in_FPUStatusWord;
}



/* Library Function - Single Match
    __strnicmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicmp_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  if (_MaxCount == 0) {
    iVar2 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
    if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
      piVar1 = __errno();
      *piVar1 = 0x16;
      __invalid_parameter(0,0,0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
    else if (_MaxCount < 0x80000000) {
      if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
        iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
      }
      else {
        do {
          iVar2 = __tolower_l((uint)(byte)*_Str1,&local_14);
          _Str1 = _Str1 + 1;
          iVar3 = __tolower_l((uint)(byte)*_Str2,&local_14);
          _Str2 = _Str2 + 1;
          _MaxCount = _MaxCount - 1;
          if ((_MaxCount == 0) || (iVar2 == 0)) break;
        } while (iVar2 == iVar3);
        iVar2 = iVar2 - iVar3;
      }
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
    }
    else {
      piVar1 = __errno();
      *piVar1 = 0x16;
      __invalid_parameter(0,0,0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
  }
  return iVar2;
}



/* Library Function - Single Match
    __strnicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_00ba9e10 == 0) {
    if (((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) && (_MaxCount < 0x80000000)) {
      iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
      return iVar2;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __strnicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  }
  return iVar2;
}



/* Library Function - Single Match
    __toupper_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __toupper_l(int _C,_locale_t _Locale)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  CHAR CVar5;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  byte local_c;
  undefined1 local_b;
  CHAR local_8;
  CHAR local_7;
  undefined1 local_6;
  
  iVar1 = _C;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if ((uint)_C < 0x100) {
    if ((int)(local_1c.locinfo)->locale_name[3] < 2) {
      uVar2 = (byte)local_1c.locinfo[1].lc_category[0].locale[_C * 2] & 2;
    }
    else {
      uVar2 = __isctype_l(_C,2,&local_1c);
    }
    if (uVar2 == 0) {
LAB_00986592:
      if (local_10 == '\0') {
        return iVar1;
      }
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)local_1c.locinfo[1].lc_category[0].refcount + _C);
  }
  else {
    CVar5 = (CHAR)_C;
    if (((int)(local_1c.locinfo)->locale_name[3] < 2) ||
       (iVar3 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c), iVar3 == 0)) {
      piVar4 = __errno();
      *piVar4 = 0x2a;
      local_7 = '\0';
      iVar3 = 1;
      local_8 = CVar5;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_8 = (CHAR)_C;
      local_6 = 0;
      iVar3 = 2;
      local_7 = CVar5;
    }
    iVar3 = ___crtLCMapStringA(&local_1c,(local_1c.locinfo)->lc_category[0].wlocale,0x200,&local_8,
                               iVar3,(LPSTR)&local_c,3,(local_1c.locinfo)->lc_codepage,1);
    if (iVar3 == 0) goto LAB_00986592;
    if (iVar3 == 1) {
      uVar2 = (uint)local_c;
    }
    else {
      uVar2 = (uint)CONCAT11(local_c,local_b);
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return uVar2;
}



/* Library Function - Single Match
    _toupper
   
   Library: Visual Studio 2005 Release */

int __cdecl _toupper(int _C)

{
  if (DAT_00ba9e10 == 0) {
    if (_C - 0x61U < 0x1a) {
      return _C + -0x20;
    }
  }
  else {
    _C = __toupper_l(_C,(_locale_t)0x0);
  }
  return _C;
}



void FUN_009866bc(void)

{
  ushort in_FPUControlWord;
  
  if ((DAT_00baabdc != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00996bc0();
    return;
  }
  __cintrindisp1();
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector copy constructor iterator'(void *,void *,unsigned int,int,void
   (__thiscall*)(void *,void *),void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_copy_constructor_iterator_
               (void *param_1,void *param_2,uint param_3,int param_4,
               _func_void_void_ptr_void_ptr *param_5,_func_void_void_ptr *param_6)

{
  void *in_stack_ffffffcc;
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < param_4; local_20 = local_20 + 1) {
    (*param_5)(param_2,in_stack_ffffffcc);
    param_2 = (void *)((int)param_2 + param_3);
  }
  FUN_0098675c();
  return;
}



void FUN_0098675c(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0x10),*(int *)(unaff_EBP + -0x1c),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x1c));
  }
  return;
}



/* Library Function - Single Match
    __mbsnbcmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbcmp_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  size_t sVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uchar *puVar5;
  uint uVar6;
  ushort uVar7;
  byte *pbVar8;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  if (_MaxCount == 0) {
    iVar3 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
    if (*(int *)(local_10 + 8) == 0) {
      iVar3 = _strncmp((char *)_Str1,(char *)_Str2,_MaxCount);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
    }
    else if (_Str1 == (uchar *)0x0) {
      piVar4 = __errno();
      *piVar4 = 0x16;
      __invalid_parameter(0,0,0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar3 = 0x7fffffff;
    }
    else {
      if (_Str2 != (uchar *)0x0) {
        do {
          bVar2 = *_Str1;
          uVar7 = (ushort)bVar2;
          sVar1 = _MaxCount - 1;
          puVar5 = _Str1 + 1;
          if ((*(byte *)(bVar2 + 0x1d + local_10) & 4) == 0) {
LAB_00986873:
            _Str1 = puVar5;
            uVar6 = (uint)*_Str2;
            pbVar8 = _Str2 + 1;
            if ((*(byte *)(uVar6 + 0x1d + local_10) & 4) != 0) {
              if (sVar1 != 0) {
                sVar1 = _MaxCount - 2;
                if (*pbVar8 != 0) {
                  uVar6 = (uint)CONCAT11(*_Str2,*pbVar8);
                  pbVar8 = _Str2 + 2;
                  goto LAB_009868a3;
                }
              }
              _MaxCount = sVar1;
              uVar6 = 0;
              sVar1 = _MaxCount;
            }
          }
          else {
            if (sVar1 != 0) {
              if (*puVar5 == '\0') {
                uVar7 = 0;
              }
              else {
                uVar7 = CONCAT11(bVar2,*puVar5);
                puVar5 = _Str1 + 2;
              }
              goto LAB_00986873;
            }
            uVar6 = (uint)*_Str2;
            uVar7 = 0;
            pbVar8 = _Str2;
            _Str1 = puVar5;
            if ((*(byte *)(uVar6 + 0x1d + local_10) & 4) != 0) {
LAB_009868b6:
              if (local_8 != '\0') {
                *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
              }
              return 0;
            }
          }
LAB_009868a3:
          _MaxCount = sVar1;
          if ((ushort)uVar6 != uVar7) {
            iVar3 = (-(uint)((ushort)uVar6 < uVar7) & 2) - 1;
            if (local_8 == '\0') {
              return iVar3;
            }
            *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
            return iVar3;
          }
          if ((uVar7 == 0) || (_Str2 = pbVar8, _MaxCount == 0)) goto LAB_009868b6;
        } while( true );
      }
      piVar4 = __errno();
      *piVar4 = 0x16;
      __invalid_parameter(0,0,0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar3 = 0x7fffffff;
    }
  }
  return iVar3;
}



/* Library Function - Single Match
    __mbsnbcmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbcmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbcmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}



/* Library Function - Single Match
    __mbsnbicmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbicmp_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  size_t sVar1;
  uchar *puVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  byte *pbVar7;
  _LocaleUpdate local_1c [4];
  int local_18;
  int local_14;
  char local_10;
  ushort local_c;
  ushort local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_1c,_Locale);
  if (_MaxCount == 0) {
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    iVar4 = 0;
  }
  else if (*(int *)(local_18 + 8) == 0) {
    iVar4 = __strnicmp((char *)_Str1,(char *)_Str2,_MaxCount);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
  }
  else if (_Str1 == (uchar *)0x0) {
    piVar5 = __errno();
    *piVar5 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    iVar4 = 0x7fffffff;
  }
  else {
    if (_Str2 != (uchar *)0x0) {
      do {
        bVar3 = *_Str1;
        uVar6 = (uint)bVar3;
        sVar1 = _MaxCount - 1;
        puVar2 = _Str1 + 1;
        if ((*(byte *)(uVar6 + 0x1d + local_18) & 4) == 0) {
          if ((*(byte *)(uVar6 + local_18 + 0x1d) & 0x10) != 0) {
            uVar6 = (uint)*(byte *)(uVar6 + local_18 + 0x11d);
          }
          local_c = (ushort)uVar6;
          _Str1 = puVar2;
LAB_00986a34:
          uVar6 = (uint)*_Str2;
          pbVar7 = _Str2 + 1;
          if ((*(byte *)(uVar6 + 0x1d + local_18) & 4) == 0) {
            if ((*(byte *)(uVar6 + local_18 + 0x1d) & 0x10) != 0) {
              uVar6 = (uint)*(byte *)(uVar6 + local_18 + 0x11d);
            }
            goto LAB_009869f5;
          }
          if (sVar1 == 0) {
LAB_00986a52:
            _MaxCount = sVar1;
            local_8 = 0;
          }
          else {
            bVar3 = *pbVar7;
            sVar1 = _MaxCount - 2;
            if (bVar3 == 0) goto LAB_00986a52;
            pbVar7 = _Str2 + 2;
            local_8 = CONCAT11(*_Str2,bVar3);
            _MaxCount = sVar1;
            if ((local_8 < *(ushort *)(local_18 + 0x10)) || (*(ushort *)(local_18 + 0x12) < local_8)
               ) {
              if ((*(ushort *)(local_18 + 0x16) <= local_8) &&
                 (local_8 <= *(ushort *)(local_18 + 0x18))) {
                local_8 = local_8 + *(short *)(local_18 + 0x1a);
              }
            }
            else {
              local_8 = local_8 + *(short *)(local_18 + 0x14);
            }
          }
        }
        else {
          if (sVar1 != 0) {
            if (*puVar2 == '\0') {
              local_c = 0;
              _Str1 = puVar2;
            }
            else {
              _Str1 = _Str1 + 2;
              local_c = CONCAT11(bVar3,*puVar2);
              if ((local_c < *(ushort *)(local_18 + 0x10)) ||
                 (*(ushort *)(local_18 + 0x12) < local_c)) {
                if ((*(ushort *)(local_18 + 0x16) <= local_c) &&
                   (local_c <= *(ushort *)(local_18 + 0x18))) {
                  local_c = local_c + *(short *)(local_18 + 0x1a);
                }
              }
              else {
                local_c = local_c + *(short *)(local_18 + 0x14);
              }
            }
            goto LAB_00986a34;
          }
          uVar6 = (uint)*_Str2;
          if ((*(byte *)(uVar6 + 0x1d + local_18) & 4) != 0) {
LAB_00986acb:
            if (local_10 != '\0') {
              *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
            }
            return 0;
          }
          local_c = 0;
          pbVar7 = _Str2;
          _Str1 = puVar2;
LAB_009869f5:
          local_8 = (ushort)uVar6;
          _MaxCount = sVar1;
        }
        if (local_8 != local_c) {
          iVar4 = (-(uint)(local_8 < local_c) & 2) - 1;
          if (local_10 == '\0') {
            return iVar4;
          }
          *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
          return iVar4;
        }
        if ((local_c == 0) || (_Str2 = pbVar7, _MaxCount == 0)) goto LAB_00986acb;
      } while( true );
    }
    piVar5 = __errno();
    *piVar5 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    iVar4 = 0x7fffffff;
  }
  return iVar4;
}



/* Library Function - Single Match
    __mbsnbicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbicmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}



void FUN_00986b80(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  
  if ((DAT_00baabdc != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00996e80();
    return;
  }
  FUN_00991b88((double)in_ST0);
  FUN_00986bd8();
  return;
}



uint FUN_00986bd8(int param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  bool in_ZF;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_00991b2c();
      goto LAB_00986c71;
    }
    param_2 = 0;
    uVar1 = in_EAX;
  }
  else {
    uVar1 = param_2;
    if ((((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) && (param_1 == 0)) {
      uVar1 = 2;
      goto LAB_00986c71;
    }
  }
  if ((uVar1 & 0x80000000) == 0) {
    if (DAT_00ba9ddc != 0) {
      return param_2;
    }
    uVar1 = __math_exit();
    return uVar1;
  }
  uVar1 = 1;
LAB_00986c71:
  if (DAT_00ba9ddc != 0) {
    return uVar1;
  }
  uVar1 = __startOneArgErrorHandling();
  return uVar1;
}



void FUN_00986cd0(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  
  if ((DAT_00baabdc != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_009970f0();
    return;
  }
  FUN_00991b88((double)in_ST0);
  FUN_00986d28();
  return;
}



uint FUN_00986d28(int param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  bool in_ZF;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_00991b2c();
      goto LAB_00986dc1;
    }
    param_2 = 0;
    uVar1 = in_EAX;
  }
  else {
    uVar1 = param_2;
    if ((((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) && (param_1 == 0)) {
      uVar1 = 2;
      goto LAB_00986dc1;
    }
  }
  if ((uVar1 & 0x80000000) == 0) {
    if (DAT_00ba9ddc != 0) {
      return param_2;
    }
    uVar1 = __math_exit();
    return uVar1;
  }
  uVar1 = 1;
LAB_00986dc1:
  if (DAT_00ba9ddc != 0) {
    return uVar1;
  }
  uVar1 = __startOneArgErrorHandling();
  return uVar1;
}



/* Library Function - Single Match
    __mbsstr_l
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbsstr_l(uchar *_Str,uchar *_Substr,_locale_t _Locale)

{
  byte bVar1;
  int *piVar2;
  size_t sVar3;
  uchar *puVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  _LocaleUpdate local_1c [4];
  int local_18;
  int local_14;
  char local_10;
  int local_c;
  
  _LocaleUpdate::_LocaleUpdate(local_1c,_Locale);
  if (*(int *)(local_18 + 8) == 0) {
    _Str = (uchar *)_strstr((char *)_Str,(char *)_Substr);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
  }
  else if (_Substr == (uchar *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    _Str = (uchar *)0x0;
  }
  else if (*_Substr == '\0') {
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
  }
  else if (_Str == (uchar *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    _Str = (uchar *)0x0;
  }
  else {
    sVar3 = _strlen((char *)_Substr);
    local_c = (int)_Str - sVar3;
    sVar3 = _strlen((char *)_Str);
    if (*_Str != '\0') {
      iVar5 = (int)_Str - (int)_Substr;
      do {
        if ((byte *)(sVar3 + local_c) < _Str) break;
        puVar4 = _Substr;
        bVar1 = *_Str;
        while (bVar1 != 0) {
          if (*puVar4 == '\0') goto LAB_00986f0f;
          if (puVar4[iVar5] != *puVar4) break;
          puVar4 = puVar4 + 1;
          bVar1 = puVar4[iVar5];
        }
        if (*puVar4 == '\0') {
LAB_00986f0f:
          if (local_10 == '\0') {
            return _Str;
          }
          *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
          return _Str;
        }
        pbVar7 = _Str + 1;
        iVar6 = iVar5 + 1;
        if ((*(byte *)(*_Str + 0x1d + local_18) & 4) != 0) {
          if (*pbVar7 == 0) break;
          pbVar7 = _Str + 2;
          iVar6 = iVar5 + 2;
        }
        iVar5 = iVar6;
        _Str = pbVar7;
      } while (*pbVar7 != 0);
    }
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    _Str = (uchar *)0x0;
  }
  return _Str;
}



/* Library Function - Single Match
    __mbsstr
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbsstr(uchar *_Str,uchar *_Substr)

{
  uchar *puVar1;
  
  puVar1 = __mbsstr_l(_Str,_Substr,(_locale_t)0x0);
  return puVar1;
}



/* Library Function - Single Match
    __mbslwr_s_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __mbslwr_s_l(uchar *_Str,size_t _SizeInBytes,_locale_t _Locale)

{
  byte bVar1;
  errno_t eVar2;
  size_t sVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  byte *_LpSrcStr;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  undefined4 local_8;
  
  if (_Str == (uchar *)0x0) {
    if (_SizeInBytes != 0) goto LAB_00986f6a;
  }
  else if (_SizeInBytes == 0) goto LAB_00986f6a;
  if (_Str != (uchar *)0x0) {
    sVar3 = _strnlen((char *)_Str,_SizeInBytes);
    if (_SizeInBytes <= sVar3) {
      *_Str = '\0';
LAB_00986f6a:
      piVar4 = __errno();
      *piVar4 = 0x16;
      __invalid_parameter(0,0,0,0,0);
      return 0x16;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
    bVar1 = *_Str;
    _LpSrcStr = _Str;
    pbVar6 = _Str;
    while (bVar1 != 0) {
      bVar1 = *_LpSrcStr;
      if (((local_18.mbcinfo)->mbctype[bVar1 + 5] & 4) == 0) {
        if (((local_18.mbcinfo)->mbctype[bVar1 + 5] & 0x10) != 0) {
          bVar1 = (local_18.mbcinfo)->mbcasemap[bVar1 + 4];
        }
        *pbVar6 = bVar1;
LAB_00986ff5:
        pbVar6 = pbVar6 + 1;
      }
      else {
        iVar5 = ___crtLCMapStringA(&local_18,*(LPCWSTR *)(local_18.mbcinfo)->mbulinfo,0x100,
                                   (LPCSTR)_LpSrcStr,2,(LPSTR)&local_8,2,
                                   (local_18.mbcinfo)->mbcodepage,1);
        if (iVar5 == 0) {
          piVar4 = __errno();
          *piVar4 = 0x2a;
          *_Str = '\0';
          piVar4 = __errno();
          eVar2 = *piVar4;
          if (local_c == '\0') {
            return eVar2;
          }
          *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
          return eVar2;
        }
        *pbVar6 = (byte)local_8;
        pbVar6 = pbVar6 + 1;
        _LpSrcStr = _LpSrcStr + 1;
        if (1 < iVar5) {
          *pbVar6 = (byte)((uint)local_8 >> 8);
          goto LAB_00986ff5;
        }
      }
      _LpSrcStr = _LpSrcStr + 1;
      bVar1 = *_LpSrcStr;
    }
    *pbVar6 = 0;
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  return 0;
}



/* Library Function - Multiple Matches With Different Base Names
    __mbslwr
    __mbsupr
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl FID_conflict___mbslwr(uchar *_String)

{
  errno_t eVar1;
  
  eVar1 = __mbslwr_s_l(_String,-(uint)(_String != (uchar *)0x0),(_locale_t)0x0);
  return (uchar *)(~-(uint)(eVar1 != 0) & (uint)_String);
}



void FUN_009870a0(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  
  if ((DAT_00baabdc != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_009973a0();
    return;
  }
  FUN_00991b88((double)in_ST0);
  FUN_009870f8();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_009870f8(int param_1)

{
  uint in_EAX;
  bool in_ZF;
  unkbyte10 in_ST0;
  float10 fVar1;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      fVar1 = (float10)FUN_00991b2c();
      if (DAT_00ba9ddc != 0) {
        return fVar1;
      }
      fVar1 = (float10)__startOneArgErrorHandling();
      return fVar1;
    }
    fVar1 = _DAT_00b319ba;
    if ((in_EAX & 0x80000000) != 0) {
      fVar1 = -_DAT_00b319ba;
    }
  }
  else {
    fVar1 = (float10)fpatan(in_ST0,(float10)1);
  }
  if (DAT_00ba9ddc != 0) {
    return fVar1;
  }
  fVar1 = (float10)__math_exit();
  return fVar1;
}



/* Library Function - Single Match
    __mbsnbcat_l
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbsnbcat_l(uchar *_Dest,uchar *_Source,size_t _Count,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  byte *local_8;
  
  if (_Count != 0) {
    if (_Dest == (uchar *)0x0) {
      piVar3 = __errno();
      *piVar3 = 0x16;
      __invalid_parameter(0,0,0,0,0);
      _Dest = (byte *)0x0;
    }
    else if (_Source == (uchar *)0x0) {
      piVar3 = __errno();
      *piVar3 = 0x16;
      __invalid_parameter(0,0,0,0,0);
      _Dest = (byte *)0x0;
    }
    else {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
      if ((local_18.mbcinfo)->ismbcodepage == 0) {
        _Dest = (uchar *)_strncat((char *)_Dest,(char *)_Source,_Count);
        if (local_c != '\0') {
          *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
        }
      }
      else {
        local_8 = _Dest;
        pbVar6 = _Dest;
        do {
          pbVar5 = pbVar6;
          pbVar6 = pbVar5 + 1;
        } while (*pbVar5 != 0);
        if ((pbVar5 != _Dest) &&
           (iVar4 = __mbsbtype_l(_Dest,(size_t)(pbVar5 + (-1 - (int)_Dest)),&local_18), iVar4 == 1))
        {
          pbVar5 = pbVar5 + -1;
        }
        do {
          _Dest = local_8;
          bVar1 = *_Source;
          bVar2 = (local_18.mbcinfo)->mbctype[bVar1 + 5];
          *pbVar5 = bVar1;
          if ((bVar2 & 4) == 0) {
            pbVar6 = pbVar5 + 1;
            _Source = _Source + 1;
            _Count = _Count - 1;
            if (bVar1 == 0) break;
          }
          else {
            pbVar6 = pbVar5 + 1;
            if (_Count - 1 == 0) {
              *pbVar5 = 0;
              break;
            }
            bVar1 = _Source[1];
            *pbVar6 = bVar1;
            pbVar6 = pbVar5 + 2;
            _Source = _Source + 2;
            _Count = _Count - 2;
            if (bVar1 == 0) {
              *pbVar5 = 0;
              break;
            }
          }
          pbVar5 = pbVar6;
        } while (_Count != 0);
        if ((pbVar6 == local_8) ||
           (iVar4 = __mbsbtype_l(local_8,(size_t)(pbVar6 + (-1 - (int)local_8)),&local_18),
           iVar4 != 1)) {
          *pbVar6 = 0;
        }
        else {
          pbVar6[-1] = 0;
        }
        if (local_c != '\0') {
          *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
        }
      }
    }
  }
  return _Dest;
}



/* Library Function - Single Match
    __mbsnbcat
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbsnbcat(uchar *_Dest,uchar *_Source,size_t _Count)

{
  uchar *puVar1;
  
  puVar1 = __mbsnbcat_l(_Dest,_Source,_Count,(_locale_t)0x0);
  return puVar1;
}



/* Library Function - Single Match
    _swap
   
   Library: Visual Studio 2005 Release */

void __cdecl swap(void)

{
  undefined1 uVar1;
  undefined1 *in_EAX;
  undefined1 *in_ECX;
  int in_EDX;
  
  if (in_EAX != in_ECX) {
    for (; in_EDX != 0; in_EDX = in_EDX + -1) {
      uVar1 = *in_EAX;
      *in_EAX = *in_ECX;
      *in_ECX = uVar1;
      in_EAX = in_EAX + 1;
      in_ECX = in_ECX + 1;
    }
  }
  return;
}



/* Library Function - Single Match
    _shortsort
   
   Library: Visual Studio 2005 Release */

void __cdecl shortsort(undefined1 *param_1,undefined1 *param_2,int param_3,code *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  
  for (; puVar2 = param_1, puVar4 = param_1, param_1 < param_2; param_2 = param_2 + -param_3) {
    while (puVar4 = puVar4 + param_3, puVar4 <= param_2) {
      iVar3 = (*param_4)(puVar4,puVar2);
      if (0 < iVar3) {
        puVar2 = puVar4;
      }
    }
    if ((puVar2 != param_2) && (param_3 != 0)) {
      puVar4 = param_2;
      iVar3 = param_3;
      do {
        uVar1 = puVar4[(int)puVar2 - (int)param_2];
        puVar4[(int)puVar2 - (int)param_2] = *puVar4;
        iVar3 = iVar3 + -1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while (iVar3 != 0);
    }
  }
  return;
}



/* Library Function - Single Match
    _qsort
   
   Library: Visual Studio 2005 Release */

void __cdecl
_qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,_PtFuncCompare *_PtFuncCompare)

{
  undefined1 uVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  size_t sVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *local_100;
  undefined1 *local_fc;
  int local_f4;
  undefined4 auStack_f0 [30];
  undefined4 auStack_78 [30];
  
  if ((_Base == (void *)0x0) && (_NumOfElements != 0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return;
  }
  if ((_SizeOfElements == 0) || (_PtFuncCompare == (_PtFuncCompare *)0x0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return;
  }
  if (_NumOfElements < 2) {
    return;
  }
  local_f4 = 0;
  local_100 = _Base;
  local_fc = (undefined1 *)((_NumOfElements - 1) * _SizeOfElements + (int)_Base);
LAB_00987433:
  while (uVar3 = (uint)((int)local_fc - (int)local_100) / _SizeOfElements + 1, 8 < uVar3) {
    puVar4 = local_100 + (uVar3 >> 1) * _SizeOfElements;
    iVar5 = (*_PtFuncCompare)(local_100,puVar4);
    if (0 < iVar5) {
      swap();
    }
    iVar5 = (*_PtFuncCompare)(local_100,local_fc);
    if (0 < iVar5) {
      swap();
    }
    iVar5 = (*_PtFuncCompare)(puVar4,local_fc);
    puVar8 = local_100;
    puVar9 = local_fc;
    if (0 < iVar5) {
      swap();
    }
LAB_009874e0:
    if (puVar8 < puVar4) {
      do {
        puVar8 = puVar8 + _SizeOfElements;
        if (puVar4 <= puVar8) goto LAB_00987500;
        iVar5 = (*_PtFuncCompare)(puVar8,puVar4);
      } while (iVar5 < 1);
      if (puVar4 <= puVar8) goto LAB_00987500;
    }
    else {
LAB_00987500:
      do {
        puVar8 = puVar8 + _SizeOfElements;
        if (local_fc < puVar8) break;
        iVar5 = (*_PtFuncCompare)(puVar8,puVar4);
      } while (iVar5 < 1);
    }
    do {
      puVar9 = puVar9 + -_SizeOfElements;
      if (puVar9 <= puVar4) break;
      iVar5 = (*_PtFuncCompare)(puVar9,puVar4);
    } while (0 < iVar5);
    if (puVar8 <= puVar9) {
      if (puVar8 != puVar9) {
        puVar6 = puVar9;
        sVar7 = _SizeOfElements;
        do {
          uVar1 = puVar6[(int)puVar8 - (int)puVar9];
          puVar6[(int)puVar8 - (int)puVar9] = *puVar6;
          sVar7 = sVar7 - 1;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
        } while (sVar7 != 0);
      }
      if (puVar4 == puVar9) {
        puVar4 = puVar8;
      }
      goto LAB_009874e0;
    }
    puVar9 = puVar9 + _SizeOfElements;
    if (puVar4 < puVar9) {
      do {
        puVar9 = puVar9 + -_SizeOfElements;
        if (puVar9 <= puVar4) goto LAB_009875a0;
        iVar5 = (*_PtFuncCompare)(puVar9,puVar4);
      } while (iVar5 == 0);
      if (puVar9 <= puVar4) goto LAB_009875a0;
    }
    else {
LAB_009875a0:
      do {
        puVar9 = puVar9 + -_SizeOfElements;
        if (puVar9 <= local_100) break;
        iVar5 = (*_PtFuncCompare)(puVar9,puVar4);
      } while (iVar5 == 0);
    }
    if ((int)puVar9 - (int)local_100 < (int)local_fc - (int)puVar8) goto LAB_009875fd;
    if (local_100 < puVar9) {
      auStack_f0[local_f4] = local_100;
      auStack_78[local_f4] = puVar9;
      local_f4 = local_f4 + 1;
    }
    local_100 = puVar8;
    if (local_fc <= puVar8) goto LAB_00987456;
  }
  shortsort(local_100,local_fc,_SizeOfElements,_PtFuncCompare);
  goto LAB_00987456;
LAB_009875fd:
  if (puVar8 < local_fc) {
    auStack_f0[local_f4] = puVar8;
    auStack_78[local_f4] = local_fc;
    local_f4 = local_f4 + 1;
  }
  local_fc = puVar9;
  if (puVar9 <= local_100) {
LAB_00987456:
    local_f4 = local_f4 + -1;
    if (local_f4 < 0) {
      return;
    }
    local_100 = (undefined1 *)auStack_f0[local_f4];
    local_fc = (undefined1 *)auStack_78[local_f4];
  }
  goto LAB_00987433;
}



/* Library Function - Single Match
    __vsnprintf_helper
   
   Library: Visual Studio 2005 Release */

int __vsnprintf_helper(code *param_1,char *param_2,uint param_3,int param_4,undefined4 param_5,
                      undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FILE local_24;
  
  if (param_4 == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    iVar2 = -1;
  }
  else if ((param_3 == 0) || (param_2 != (char *)0x0)) {
    local_24._cnt = 0x7fffffff;
    if (param_3 < 0x80000000) {
      local_24._cnt = param_3;
    }
    local_24._flag = 0x42;
    local_24._base = param_2;
    local_24._ptr = param_2;
    iVar2 = (*param_1)(&local_24,param_4,param_5,param_6);
    if (param_2 != (char *)0x0) {
      if (-1 < iVar2) {
        local_24._cnt = local_24._cnt - 1;
        if (-1 < local_24._cnt) {
          *local_24._ptr = '\0';
          return iVar2;
        }
        iVar3 = __flsbuf(0,&local_24);
        if (iVar3 != -1) {
          return iVar2;
        }
      }
      param_2[param_3 - 1] = '\0';
      iVar2 = (-1 < local_24._cnt) - 2;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    iVar2 = -1;
  }
  return iVar2;
}



/* Library Function - Single Match
    __vsprintf_s_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  int *piVar1;
  int iVar2;
  
  if (_Format == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else {
    if ((_DstBuf == (char *)0x0) || (_DstSize == 0)) {
      piVar1 = __errno();
      *piVar1 = 0x16;
    }
    else {
      iVar2 = __vsnprintf_helper(&DAT_00997cce,_DstBuf,_DstSize,_Format,_Locale,_ArgList);
      if (iVar2 < 0) {
        *_DstBuf = '\0';
      }
      if (iVar2 != -2) {
        return iVar2;
      }
      piVar1 = __errno();
      *piVar1 = 0x22;
    }
    __invalid_parameter(0,0,0,0,0);
  }
  return -1;
}



/* Library Function - Single Match
    _vsprintf_s
   
   Library: Visual Studio 2005 Release */

int __cdecl _vsprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsprintf_s_l(_DstBuf,_SizeInBytes,_Format,(_locale_t)0x0,_ArgList);
  return iVar1;
}



/* Library Function - Single Match
    __vsnprintf_s_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsnprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,char *_Format,_locale_t _Locale,
               va_list _ArgList)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (_Format == (char *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return -1;
  }
  if (_MaxCount == 0) {
    if (_DstBuf == (char *)0x0) {
      if (_DstSize == 0) {
        return 0;
      }
    }
    else {
LAB_00987a3b:
      if (_DstSize != 0) {
        piVar2 = __errno();
        if (_MaxCount < _DstSize) {
          iVar1 = *piVar2;
          iVar3 = __vsnprintf_helper(&DAT_00997cce,_DstBuf,_MaxCount + 1,_Format,_Locale,_ArgList);
          if (iVar3 == -2) {
            piVar2 = __errno();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = __errno();
            *piVar2 = iVar1;
            return -1;
          }
LAB_00987acb:
          if (-1 < iVar3) {
            return iVar3;
          }
        }
        else {
          iVar1 = *piVar2;
          iVar3 = __vsnprintf_helper(&DAT_00997cce,_DstBuf,_DstSize,_Format,_Locale,_ArgList);
          _DstBuf[_DstSize - 1] = '\0';
          if (iVar3 != -2) goto LAB_00987acb;
          if (_MaxCount == 0xffffffff) {
            piVar2 = __errno();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = __errno();
            *piVar2 = iVar1;
            return -1;
          }
        }
        *_DstBuf = '\0';
        if (iVar3 != -2) {
          return -1;
        }
        piVar2 = __errno();
        *piVar2 = 0x22;
        goto LAB_00987ae1;
      }
    }
  }
  else if (_DstBuf != (char *)0x0) goto LAB_00987a3b;
  piVar2 = __errno();
  *piVar2 = 0x16;
LAB_00987ae1:
  __invalid_parameter(0,0,0,0,0);
  return -1;
}



/* Library Function - Single Match
    __vsnprintf_s
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsnprintf_s(char *_DstBuf,size_t _SizeInBytes,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_s_l(_DstBuf,_SizeInBytes,_MaxCount,_Format,(_locale_t)0x0,_ArgList);
  return iVar1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _strtok_s
   
   Library: Visual Studio 2005 Release */

char * __cdecl _strtok_s(char *_Str,char *_Delim,char **_Context)

{
  byte bVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  byte local_28 [32];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  if (((_Context == (char **)0x0) || (_Delim == (char *)0x0)) ||
     ((_Str == (char *)0x0 && (*_Context == (char *)0x0)))) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    pcVar3 = (char *)0x0;
  }
  else {
    pbVar5 = local_28;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5 = pbVar5 + 4;
    }
    do {
      bVar1 = *_Delim;
      local_28[bVar1 >> 3] = local_28[bVar1 >> 3] | '\x01' << (bVar1 & 7);
      _Delim = _Delim + 1;
    } while (bVar1 != 0);
    if (_Str == (char *)0x0) {
      _Str = *_Context;
    }
    for (; (bVar1 = *_Str, pbVar5 = (byte *)_Str,
           (local_28[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0 && (bVar1 != 0)); _Str = _Str + 1)
    {
    }
    for (; *pbVar5 != 0; pbVar5 = pbVar5 + 1) {
      if ((local_28[*pbVar5 >> 3] & (byte)(1 << (*pbVar5 & 7))) != 0) {
        *pbVar5 = 0;
        pbVar5 = pbVar5 + 1;
        break;
      }
    }
    *_Context = (char *)pbVar5;
    pcVar3 = (char *)(-(uint)((byte *)_Str != pbVar5) & (uint)_Str);
  }
  return pcVar3;
}



float10 FUN_00987c00(double param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  if ((DAT_00baabdc != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x20);
    uVar1 = uVar2 >> 0x14;
    uVar6 = (ulonglong)(0x433 - (uVar2 >> 0x14 & 0x7ff));
    if ((uVar1 & 0x800) == 0) {
      dVar5 = (double)(((ulonglong)param_1 >> uVar6) << uVar6);
      if (uVar1 < 0x3ff) {
        return (float10)(double)(-(ulonglong)(0.0 < param_1) & 0x3ff0000000000000);
      }
      if (uVar1 < 0x433) {
        return (float10)(dVar5 + (double)(-(ulonglong)(dVar5 < param_1) & 0x3ff0000000000000));
      }
    }
    else {
      if (uVar1 < 0xbff) {
        return (float10)-0.0;
      }
      if (uVar1 < 0xc33) {
        return (float10)(double)(((ulonglong)param_1 >> uVar6) << uVar6);
      }
    }
    if (NAN(param_1)) {
      ___libm_error_support(&param_1,&param_1,&param_1,0x3ec);
    }
    return (float10)(double)CONCAT26(param_1._6_2_,param_1._0_6_);
  }
  uVar2 = __ctrlfp(DAT_00b31d30,0xffff);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype();
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp(uVar2,0xffff);
        return (float10)(double)CONCAT26(param_1._6_2_,param_1._0_6_);
      }
      if (iVar3 == 3) {
        fVar4 = (float10)__handle_qnan1();
        return fVar4;
      }
    }
    dVar5 = (double)CONCAT26(param_1._6_2_,param_1._0_6_) + 1.0;
    uVar8 = CONCAT26(param_1._6_2_,param_1._0_6_);
    uVar7 = 8;
  }
  else {
    fVar4 = (float10)__frnd((int)param_1._0_6_,(int)(CONCAT26(param_1._6_2_,param_1._0_6_) >> 0x20))
    ;
    dVar5 = (double)fVar4;
    if (((double)CONCAT26(param_1._6_2_,param_1._0_6_) == dVar5) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp(uVar2,0xffff);
      return (float10)dVar5;
    }
    uVar8 = CONCAT26(param_1._6_2_,param_1._0_6_);
    uVar7 = 0x10;
  }
  fVar4 = (float10)__except1(uVar7,0xc,uVar8,dVar5,uVar2);
  return fVar4;
}



/* Library Function - Single Match
    _strncpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  rsize_t rVar4;
  errno_t eVar5;
  
  if (_MaxCount == 0) {
    if (_Dst == (char *)0x0) {
      if (_SizeInBytes == 0) {
        return 0;
      }
    }
    else {
LAB_00987d41:
      if (_SizeInBytes != 0) {
        if (_MaxCount == 0) {
          *_Dst = '\0';
          return 0;
        }
        if (_Src != (char *)0x0) {
          pcVar3 = _Dst;
          rVar4 = _SizeInBytes;
          if (_MaxCount == 0xffffffff) {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if (cVar1 == '\0') break;
              rVar4 = rVar4 - 1;
            } while (rVar4 != 0);
          }
          else {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if ((cVar1 == '\0') || (rVar4 = rVar4 - 1, rVar4 == 0)) break;
              _MaxCount = _MaxCount - 1;
            } while (_MaxCount != 0);
            if (_MaxCount == 0) {
              *pcVar3 = '\0';
            }
          }
          if (rVar4 != 0) {
            return 0;
          }
          if (_MaxCount == 0xffffffff) {
            _Dst[_SizeInBytes - 1] = '\0';
            return 0x50;
          }
          *_Dst = '\0';
          piVar2 = __errno();
          eVar5 = 0x22;
          *piVar2 = 0x22;
          goto LAB_00987d52;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_00987d41;
  piVar2 = __errno();
  eVar5 = 0x16;
  *piVar2 = 0x16;
LAB_00987d52:
  __invalid_parameter(0,0,0,0,0);
  return eVar5;
}



/* Library Function - Single Match
    _strcat_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        if (*pcVar3 == '\0') break;
        pcVar3 = pcVar3 + 1;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        do {
          cVar1 = *_Src;
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
          _Src = _Src + 1;
          if (cVar1 == '\0') break;
          _SizeInBytes = _SizeInBytes - 1;
        } while (_SizeInBytes != 0);
        if (_SizeInBytes != 0) {
          return 0;
        }
        *_Dst = '\0';
        piVar2 = __errno();
        eVar4 = 0x22;
        *piVar2 = 0x22;
        goto LAB_00987def;
      }
    }
    *_Dst = '\0';
  }
  piVar2 = __errno();
  eVar4 = 0x16;
  *piVar2 = 0x16;
LAB_00987def:
  __invalid_parameter(0,0,0,0,0);
  return eVar4;
}



/* Library Function - Single Match
    __fwrite_nolock
   
   Library: Visual Studio 2005 Release */

size_t __cdecl __fwrite_nolock(void *_DstBuf,size_t _Size,size_t _Count,FILE *_File)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *_Buf;
  uint local_8;
  
  uVar1 = _Size * _Count;
  sVar4 = 0;
  if (uVar1 != 0) {
    uVar7 = uVar1;
    if ((_File->_flag & 0x10c) == 0) {
      local_8 = 0x1000;
    }
    else {
      local_8 = _File->_bufsiz;
    }
    do {
      uVar5 = _File->_flag & 0x108;
      if (uVar5 == 0) {
LAB_00987ebd:
        if (local_8 <= uVar7) {
          if ((uVar5 != 0) && (iVar2 = __flush(_File), iVar2 != 0)) goto LAB_00987f13;
          uVar5 = uVar7;
          if (local_8 != 0) {
            uVar5 = uVar7 - uVar7 % local_8;
          }
          _Buf = _DstBuf;
          uVar3 = uVar5;
          iVar2 = __fileno(_File);
          uVar3 = __write(iVar2,_Buf,uVar3);
          if (uVar3 != 0xffffffff) {
            uVar6 = uVar5;
            if (uVar3 <= uVar5) {
              uVar6 = uVar3;
            }
            _DstBuf = (void *)((int)_DstBuf + uVar6);
            uVar7 = uVar7 - uVar6;
            if (uVar5 <= uVar3) goto LAB_00987f45;
          }
          _File->_flag = _File->_flag | 0x20;
LAB_00987f13:
          return (uVar1 - uVar7) / _Size;
        }
        iVar2 = __flsbuf((int)*(char *)_DstBuf,_File);
        if (iVar2 == -1) goto LAB_00987f13;
        _DstBuf = (void *)((int)_DstBuf + 1);
        local_8 = _File->_bufsiz;
        uVar7 = uVar7 - 1;
        if ((int)local_8 < 1) {
          local_8 = 1;
        }
      }
      else {
        uVar3 = _File->_cnt;
        if (uVar3 == 0) goto LAB_00987ebd;
        if ((int)uVar3 < 0) {
          _File->_flag = _File->_flag | 0x20;
          goto LAB_00987f13;
        }
        if (uVar7 < uVar3) {
          uVar3 = uVar7;
        }
        _memcpy(_File->_ptr,_DstBuf,uVar3);
        _File->_cnt = _File->_cnt - uVar3;
        _File->_ptr = _File->_ptr + uVar3;
        uVar7 = uVar7 - uVar3;
        _DstBuf = (void *)((int)_DstBuf + uVar3);
      }
LAB_00987f45:
      sVar4 = _Count;
    } while (uVar7 != 0);
  }
  return sVar4;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fwrite
   
   Library: Visual Studio 2005 Release */

size_t __cdecl _fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  int *piVar1;
  size_t sVar2;
  
  if (_Size * _Count != 0) {
    if ((_File != (FILE *)0x0) && (_Str != (void *)0x0)) {
      __lock_file(_File);
      sVar2 = __fwrite_nolock(_Str,_Size,_Count,_File);
      FUN_00987fde();
      return sVar2;
    }
    piVar1 = __errno();
    *piVar1 = 0;
    __invalid_parameter(0,0,0,0,0);
  }
  return 0;
}



void FUN_00987fde(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 0x14));
  return;
}



/* Library Function - Single Match
    __fread_nolock_s
   
   Library: Visual Studio 2005 Release */

size_t __cdecl
__fread_nolock_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint _MaxCount;
  undefined1 *_DstBuf_00;
  uint local_10;
  
  if ((_ElementSize == 0) || (_Count == 0)) {
    return 0;
  }
  uVar7 = _ElementSize * _Count;
  uVar6 = uVar7;
  puVar2 = _DstBuf;
  uVar1 = _DstSize;
  if ((_File->_flag & 0x10c) == 0) {
    local_10 = 0x1000;
  }
  else {
    local_10 = _File->_bufsiz;
  }
joined_r0x00988037:
  while( true ) {
    if (uVar6 == 0) {
      return _Count;
    }
    if ((_File->_flag & 0x10c) == 0) break;
    uVar3 = _File->_cnt;
    if (uVar3 == 0) break;
    if ((int)uVar3 < 0) goto LAB_00988169;
    _MaxCount = uVar6;
    if (uVar3 <= uVar6) {
      _MaxCount = uVar3;
    }
    if (uVar1 < _MaxCount) {
      if (_DstSize != 0xffffffff) {
        _memset(_DstBuf,0,_DstSize);
      }
      piVar5 = __errno();
      *piVar5 = 0x22;
      goto LAB_00988130;
    }
    _memcpy_s(puVar2,uVar1,_File->_ptr,_MaxCount);
    _File->_cnt = _File->_cnt - _MaxCount;
    _File->_ptr = _File->_ptr + _MaxCount;
    uVar6 = uVar6 - _MaxCount;
    uVar1 = uVar1 - _MaxCount;
    puVar2 = puVar2 + _MaxCount;
  }
  if (uVar6 < local_10) {
    iVar4 = __filbuf(_File);
    if (iVar4 == -1) goto LAB_0098816d;
    if (uVar1 != 0) {
      *puVar2 = (char)iVar4;
      local_10 = _File->_bufsiz;
      uVar6 = uVar6 - 1;
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 1;
      goto joined_r0x00988037;
    }
  }
  else {
    uVar3 = uVar6;
    if (local_10 != 0) {
      uVar3 = uVar6 - uVar6 % local_10;
    }
    if (uVar3 <= uVar1) {
      _DstBuf_00 = puVar2;
      iVar4 = __fileno(_File);
      iVar4 = __read(iVar4,_DstBuf_00,uVar3);
      if (iVar4 == 0) {
        _File->_flag = _File->_flag | 0x10;
        goto LAB_0098816d;
      }
      if (iVar4 == -1) {
LAB_00988169:
        _File->_flag = _File->_flag | 0x20;
LAB_0098816d:
        return (uVar7 - uVar6) / _ElementSize;
      }
      uVar6 = uVar6 - iVar4;
      uVar1 = uVar1 - iVar4;
      puVar2 = puVar2 + iVar4;
      goto joined_r0x00988037;
    }
  }
  if (_DstSize != 0xffffffff) {
    _memset(_DstBuf,0,_DstSize);
  }
  piVar5 = __errno();
  *piVar5 = 0x22;
LAB_00988130:
  __invalid_parameter(0,0,0,0,0);
  return 0;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fread_s
   
   Library: Visual Studio 2005 Release */

size_t __cdecl _fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  int *piVar1;
  size_t sVar2;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_DstBuf != (void *)0x0) {
      if ((_File != (FILE *)0x0) && (_Count <= (uint)(0xffffffff / (ulonglong)_ElementSize))) {
LAB_00988208:
        __lock_file(_File);
        sVar2 = __fread_nolock_s(_DstBuf,_DstSize,_ElementSize,_Count,_File);
        FUN_0098823b();
        return sVar2;
      }
      if (_DstSize != 0xffffffff) {
        _memset(_DstBuf,0,_DstSize);
      }
      if ((_File != (FILE *)0x0) && (_Count <= (uint)(0xffffffff / (ulonglong)_ElementSize)))
      goto LAB_00988208;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  return 0;
}



void FUN_0098823b(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 0x18));
  return;
}



/* Library Function - Single Match
    _fread
   
   Library: Visual Studio 2005 Release */

size_t __cdecl _fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
  sVar1 = _fread_s(_DstBuf,0xffffffff,_ElementSize,_Count,_File);
  return sVar1;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    _fgetc
    _getc
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict__getc(FILE *_File)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint local_20;
  
  local_20 = 0;
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return -1;
  }
  __lock_file(_File);
  if ((_File->_flag & 0x40) == 0) {
    iVar2 = __fileno(_File);
    if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
      puVar4 = &DAT_00b31368;
    }
    else {
      iVar2 = __fileno(_File);
      uVar3 = __fileno(_File);
      puVar4 = (undefined *)((uVar3 & 0x1f) * 0x28 + (&DAT_00baaac0)[iVar2 >> 5]);
    }
    if ((puVar4[0x24] & 0x7f) == 0) {
      iVar2 = __fileno(_File);
      if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
        puVar4 = &DAT_00b31368;
      }
      else {
        iVar2 = __fileno(_File);
        uVar3 = __fileno(_File);
        puVar4 = (undefined *)((uVar3 & 0x1f) * 0x28 + (&DAT_00baaac0)[iVar2 >> 5]);
      }
      if ((puVar4[0x24] & 0x80) == 0) goto LAB_00988359;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    local_20 = 0xffffffff;
  }
LAB_00988359:
  if (local_20 == 0) {
    piVar1 = &_File->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      local_20 = __filbuf(_File);
    }
    else {
      local_20 = (uint)(byte)*_File->_ptr;
      _File->_ptr = _File->_ptr + 1;
    }
  }
  FUN_0098838f();
  return local_20;
}



void FUN_0098838f(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    _fputc
    _putc
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict__fputc(int _Ch,FILE *_File)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint local_20;
  
  local_20 = 0;
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return -1;
  }
  __lock_file(_File);
  if ((_File->_flag & 0x40) == 0) {
    iVar2 = __fileno(_File);
    if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
      puVar4 = &DAT_00b31368;
    }
    else {
      iVar2 = __fileno(_File);
      uVar3 = __fileno(_File);
      puVar4 = (undefined *)((uVar3 & 0x1f) * 0x28 + (&DAT_00baaac0)[iVar2 >> 5]);
    }
    if ((puVar4[0x24] & 0x7f) == 0) {
      iVar2 = __fileno(_File);
      if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
        puVar4 = &DAT_00b31368;
      }
      else {
        iVar2 = __fileno(_File);
        uVar3 = __fileno(_File);
        puVar4 = (undefined *)((uVar3 & 0x1f) * 0x28 + (&DAT_00baaac0)[iVar2 >> 5]);
      }
      if ((puVar4[0x24] & 0x80) == 0) goto LAB_00988490;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    local_20 = 0xffffffff;
  }
LAB_00988490:
  if (local_20 == 0) {
    piVar1 = &_File->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      local_20 = __flsbuf(_Ch,_File);
    }
    else {
      *_File->_ptr = (char)_Ch;
      local_20 = _Ch & 0xff;
      _File->_ptr = _File->_ptr + 1;
    }
  }
  FUN_009884ce();
  return local_20;
}



void FUN_009884ce(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}



/* Library Function - Single Match
    __ungetc_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __ungetc_nolock(int _Ch,FILE *_File)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int *piVar5;
  
  if ((_File->_flag & 0x40) == 0) {
    iVar2 = __fileno(_File);
    if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
      puVar4 = &DAT_00b31368;
    }
    else {
      iVar2 = __fileno(_File);
      uVar3 = __fileno(_File);
      puVar4 = (undefined *)((uVar3 & 0x1f) * 0x28 + (&DAT_00baaac0)[iVar2 >> 5]);
    }
    if ((puVar4[0x24] & 0x7f) == 0) {
      iVar2 = __fileno(_File);
      if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
        puVar4 = &DAT_00b31368;
      }
      else {
        iVar2 = __fileno(_File);
        uVar3 = __fileno(_File);
        puVar4 = (undefined *)((uVar3 & 0x1f) * 0x28 + (&DAT_00baaac0)[iVar2 >> 5]);
      }
      if ((puVar4[0x24] & 0x80) == 0) goto LAB_00988593;
    }
    piVar5 = __errno();
    *piVar5 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else {
LAB_00988593:
    if (_Ch != -1) {
      uVar3 = _File->_flag;
      if (((uVar3 & 1) != 0) || (((char)uVar3 < '\0' && ((uVar3 & 2) == 0)))) {
        if (_File->_base == (char *)0x0) {
          __getbuf(_File);
        }
        if (_File->_ptr == _File->_base) {
          if (_File->_cnt != 0) {
            return -1;
          }
          _File->_ptr = _File->_ptr + 1;
        }
        _File->_ptr = _File->_ptr + -1;
        pcVar1 = _File->_ptr;
        if ((_File->_flag & 0x40) == 0) {
          *pcVar1 = (char)_Ch;
        }
        else if (*pcVar1 != (char)_Ch) {
          _File->_ptr = pcVar1 + 1;
          return -1;
        }
        _File->_cnt = _File->_cnt + 1;
        _File->_flag = _File->_flag & 0xffffffefU | 1;
        return _Ch & 0xff;
      }
    }
  }
  return -1;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _ungetc
   
   Library: Visual Studio 2005 Release */

int __cdecl _ungetc(int _Ch,FILE *_File)

{
  int *piVar1;
  int iVar2;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    iVar2 = -1;
  }
  else {
    __lock_file(_File);
    iVar2 = __ungetc_nolock(_Ch,_File);
    FUN_0098865c();
  }
  return iVar2;
}



void FUN_0098865c(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 0xc));
  return;
}



/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 2005 Release */

int __cdecl __flush(FILE *_File)

{
  int _FileHandle;
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *_Buf;
  
  iVar2 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    _Buf = _File->_base;
    uVar3 = (int)_File->_ptr - (int)_Buf;
    if (0 < (int)uVar3) {
      uVar1 = uVar3;
      _FileHandle = __fileno(_File);
      uVar1 = __write(_FileHandle,_Buf,uVar1);
      if (uVar1 == uVar3) {
        if ((char)_File->_flag < '\0') {
          _File->_flag = _File->_flag & 0xfffffffd;
        }
      }
      else {
        _File->_flag = _File->_flag | 0x20;
        iVar2 = -1;
      }
    }
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return iVar2;
}



/* Library Function - Single Match
    __fflush_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __fflush_nolock(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = flsall(0);
    return iVar1;
  }
  iVar1 = __flush(_File);
  if (iVar1 != 0) {
    return -1;
  }
  if ((_File->_flag & 0x4000) != 0) {
    iVar1 = __fileno(_File);
    iVar1 = __commit(iVar1);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _flsall
   
   Library: Visual Studio 2005 Release */

int __cdecl flsall(int param_1)

{
  int *piVar1;
  void *_File;
  FILE *_File_00;
  int iVar2;
  int _Index;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (_Index = 0; _Index < DAT_00babc00; _Index = _Index + 1) {
    piVar1 = (int *)(DAT_00baabe4 + _Index * 4);
    if ((*piVar1 != 0) && (_File = (void *)*piVar1, (*(byte *)((int)_File + 0xc) & 0x83) != 0)) {
      __lock_file2(_Index,_File);
      _File_00 = *(FILE **)(DAT_00baabe4 + _Index * 4);
      if ((_File_00->_flag & 0x83U) != 0) {
        if (param_1 == 1) {
          iVar2 = __fflush_nolock(_File_00);
          if (iVar2 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((_File_00->_flag & 2U) != 0)) {
          iVar2 = __fflush_nolock(_File_00);
          if (iVar2 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_009887ac();
    }
  }
  FUN_009887db();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}



void FUN_009887ac(void)

{
  int unaff_ESI;
  
  __unlock_file2(unaff_ESI,*(void **)(DAT_00baabe4 + unaff_ESI * 4));
  return;
}



void FUN_009887db(void)

{
  FUN_0098c8fb(1);
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fflush
   
   Library: Visual Studio 2005 Release */

int __cdecl _fflush(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = flsall(0);
  }
  else {
    __lock_file(_File);
    iVar1 = __fflush_nolock(_File);
    FUN_0098882d();
  }
  return iVar1;
}



void FUN_0098882d(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _setvbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl _setvbuf(FILE *_File,char *_Buf,int _Mode,size_t _Size)

{
  int *piVar1;
  uint uVar2;
  uint _Size_00;
  int local_20;
  
  local_20 = 0;
  if (_File == (FILE *)0x0) goto LAB_0098885f;
  if (_Mode == 4) {
LAB_00988890:
    if ((_Mode == 0) || (_Mode == 0x40)) goto LAB_00988899;
  }
  else {
    if (_Mode != 0) {
      if (_Mode != 0x40) goto LAB_0098885f;
      goto LAB_00988890;
    }
LAB_00988899:
    if (0x7ffffffd < _Size - 2) {
LAB_0098885f:
      piVar1 = __errno();
      *piVar1 = 0x16;
      __invalid_parameter(0,0,0,0,0);
      return -1;
    }
  }
  _Size_00 = _Size & 0xfffffffe;
  __lock_file(_File);
  __flush(_File);
  __freebuf(_File);
  _File->_flag = _File->_flag & 0xffffc2f3;
  if ((_Mode & 4U) == 0) {
    if (_Buf != (char *)0x0) {
      uVar2 = _File->_flag | 0x500;
      goto LAB_00988911;
    }
    _Buf = __malloc_crt(_Size_00);
    if ((int *)_Buf == (int *)0x0) {
      _DAT_00ba9e14 = _DAT_00ba9e14 + 1;
      local_20 = -1;
      goto LAB_0098891f;
    }
    _File->_flag = _File->_flag | 0x408;
  }
  else {
    uVar2 = _File->_flag | 4;
    _Buf = (char *)&_File->_charbuf;
    _Size_00 = 2;
LAB_00988911:
    _File->_flag = uVar2;
  }
  _File->_bufsiz = _Size_00;
  _File->_base = _Buf;
  _File->_ptr = _Buf;
  _File->_cnt = 0;
LAB_0098891f:
  FUN_00988934();
  return local_20;
}



void FUN_00988934(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}



/* Library Function - Single Match
    _fgetpos
   
   Library: Visual Studio 2005 Release */

int __cdecl _fgetpos(FILE *_File,fpos_t *_Pos)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return -1;
  }
  if (_Pos == (fpos_t *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    iVar2 = -1;
  }
  else {
    lVar3 = __ftelli64(_File);
    iVar2 = -1;
    *_Pos = lVar3;
    if (lVar3 != -1) {
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* Library Function - Single Match
    _fsetpos
   
   Library: Visual Studio 2005 Release */

int __cdecl _fsetpos(FILE *_File,fpos_t *_Pos)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  if ((_File != (FILE *)0x0) && (_Pos != (fpos_t *)0x0)) {
    iVar2 = __fseeki64(_File,(ulonglong)*(uint *)((int)_Pos + 4),unaff_ESI);
    return iVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  __invalid_parameter(0,0,0,0,0);
  return -1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _strtok
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

char * __cdecl _strtok(char *_Str,char *_Delim)

{
  byte bVar1;
  _ptiddata p_Var2;
  int iVar3;
  byte *pbVar4;
  byte local_28 [32];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  pbVar4 = local_28;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4 = pbVar4 + 4;
  }
  do {
    bVar1 = *_Delim;
    local_28[bVar1 >> 3] = local_28[bVar1 >> 3] | '\x01' << (bVar1 & 7);
    _Delim = _Delim + 1;
  } while (bVar1 != 0);
  if (_Str == (char *)0x0) {
    _Str = p_Var2->_token;
  }
  for (; (bVar1 = *_Str, pbVar4 = (byte *)_Str,
         (local_28[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0 && (bVar1 != 0)); _Str = _Str + 1) {
  }
  do {
    if (*pbVar4 == 0) {
LAB_00988a8b:
      p_Var2->_token = (char *)pbVar4;
      return (char *)(-(uint)((byte *)_Str != pbVar4) & (uint)_Str);
    }
    if ((local_28[*pbVar4 >> 3] & (byte)(1 << (*pbVar4 & 7))) != 0) {
      *pbVar4 = 0;
      pbVar4 = pbVar4 + 1;
      goto LAB_00988a8b;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2005 Release */

undefined4 __except_handler4(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BOOL BVar6;
  undefined4 unaff_EBP;
  uint uVar7;
  int unaff_retaddr;
  undefined4 uVar8;
  undefined1 local_10 [4];
  undefined4 local_c;
  int *local_4;
  
  uVar7 = *(uint *)(param_2 + 8) ^ DAT_00b30aac;
  local_c = 1;
  iVar1 = param_2 + 0x10;
  uVar8 = 0x988af8;
  if ((*(byte *)(local_4 + 1) & 0x66) == 0) {
    *(undefined1 **)(param_2 + -4) = local_10;
    iVar3 = *(int *)(param_2 + 0xc);
    local_c = param_1;
    while (iVar4 = iVar3, iVar4 != -2) {
      iVar5 = *(int *)(uVar7 + (iVar4 * 3 + 5) * 4);
      piVar2 = (int *)(uVar7 + (iVar4 * 3 + 4) * 4);
      iVar3 = *piVar2;
      if (iVar5 != 0) {
        iVar5 = _EH4_CallFilterFunc(iVar5,iVar1,uVar8);
        unaff_EBP = CONCAT13(1,(int3)unaff_EBP);
        if (iVar5 < 0) {
          return unaff_EBP;
        }
        if (0 < iVar5) {
          if ((*local_4 == -0x1f928c9d) &&
             (BVar6 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_00aa4930)
             , BVar6 != 0)) {
            ___DestructExceptionObject(local_4,1);
          }
          _EH4_GlobalUnwind(unaff_retaddr);
          if (*(int *)(unaff_retaddr + 0xc) != iVar4) {
            _EH4_LocalUnwind(unaff_retaddr,iVar4,iVar1,&DAT_00b30aac);
          }
          *(int *)(unaff_retaddr + 0xc) = iVar3;
          uVar8 = _EH4_TransferToHandler(piVar2[2],iVar1);
          return uVar8;
        }
      }
    }
  }
  else if (*(int *)(param_2 + 0xc) != -2) {
    _EH4_LocalUnwind(param_2,0xfffffffe,iVar1,&DAT_00b30aac);
  }
  return unaff_EBP;
}



/* Library Function - Single Match
    _bsearch
   
   Library: Visual Studio 2005 Release */

void * __cdecl
_bsearch(void *_Key,void *_Base,size_t _NumOfElements,size_t _SizeOfElements,
        _PtFuncCompare *_PtFuncCompare)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  
  pvVar6 = (void *)((_NumOfElements - 1) * _SizeOfElements + (int)_Base);
  if ((((_Base == (void *)0x0) && (_NumOfElements != 0)) || (_SizeOfElements == 0)) ||
     (_PtFuncCompare == (_PtFuncCompare *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else if (_Base <= pvVar6) {
    do {
      uVar5 = _NumOfElements >> 1;
      if (uVar5 == 0) {
        if (_NumOfElements == 0) {
          return (void *)0x0;
        }
        iVar4 = (*_PtFuncCompare)(_Key,_Base);
        return (void *)(~-(uint)(iVar4 != 0) & (uint)_Base);
      }
      uVar2 = uVar5;
      if ((_NumOfElements & 1) == 0) {
        uVar2 = uVar5 - 1;
      }
      pvVar3 = (void *)(uVar2 * _SizeOfElements + (int)_Base);
      iVar4 = (*_PtFuncCompare)(_Key,pvVar3);
      if (iVar4 == 0) {
        return pvVar3;
      }
      if (iVar4 < 0) {
        pvVar6 = (void *)((int)pvVar3 - _SizeOfElements);
        if ((_NumOfElements & 1) == 0) {
          uVar5 = uVar5 - 1;
        }
      }
      else {
        _Base = (void *)((int)pvVar3 + _SizeOfElements);
      }
      _NumOfElements = uVar5;
    } while (_Base <= pvVar6);
  }
  return (void *)0x0;
}



/* Library Function - Single Match
    __splitpath_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__splitpath_s(char *_FullPath,char *_Drive,size_t _DriveSize,char *_Dir,size_t _DirSize,
             char *_Filename,size_t _FilenameSize,char *_Ext,size_t _ExtSize)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  errno_t eVar5;
  char *pcVar6;
  char *pcVar7;
  char *_Src;
  
  _Src = (char *)0x0;
  bVar2 = false;
  pcVar6 = _FullPath;
  if (_FullPath != (char *)0x0) {
    if (_Drive == (char *)0x0) {
      if (_DriveSize == 0) {
LAB_00988d38:
        if (_Dir == (char *)0x0) {
          if (_DirSize == 0) {
LAB_00988d49:
            if (_Filename == (char *)0x0) {
              if (_FilenameSize == 0) {
LAB_00988d5a:
                if (_Ext == (char *)0x0) {
                  if (_ExtSize == 0) {
LAB_00988d64:
                    if ((((*_FullPath == '\\') && (_FullPath[1] == '\\')) && (_FullPath[2] == '?'))
                       && (_FullPath[3] == '\\')) {
                      pcVar6 = _FullPath + 4;
                    }
                    iVar3 = 1;
                    pcVar7 = pcVar6;
                    do {
                      if (*pcVar7 == '\0') break;
                      iVar3 = iVar3 + -1;
                      pcVar7 = pcVar7 + 1;
                    } while (iVar3 != 0);
                    if (*pcVar7 == ':') {
                      if (_Drive != (char *)0x0) {
                        if (_DriveSize < 3) goto LAB_00988e9d;
                        _strncpy_s(_Drive,_DriveSize,pcVar6,2);
                      }
                      pcVar6 = pcVar7 + 1;
                    }
                    else if (_Drive != (char *)0x0) {
                      *_Drive = '\0';
                    }
                    _FullPath = (char *)0x0;
                    pcVar7 = pcVar6;
                    if (*pcVar6 == '\0') {
LAB_00988e2f:
                      _Src = pcVar6;
                      if (_Dir != (char *)0x0) {
                        *_Dir = '\0';
                      }
                    }
                    else {
                      do {
                        iVar3 = __ismbblead((int)*pcVar7);
                        if (iVar3 == 0) {
                          cVar1 = *pcVar7;
                          if ((cVar1 == '/') || (cVar1 == '\\')) {
                            _Src = pcVar7 + 1;
                          }
                          else if (cVar1 == '.') {
                            _FullPath = pcVar7;
                          }
                        }
                        else {
                          pcVar7 = pcVar7 + 1;
                        }
                        pcVar7 = pcVar7 + 1;
                      } while (*pcVar7 != '\0');
                      if (_Src == (char *)0x0) goto LAB_00988e2f;
                      if (_Dir != (char *)0x0) {
                        if (_DirSize <= (uint)((int)_Src - (int)pcVar6)) goto LAB_00988e9d;
                        _strncpy_s(_Dir,_DirSize,pcVar6,(int)_Src - (int)pcVar6);
                      }
                    }
                    pcVar6 = _Src;
                    if ((_FullPath == (char *)0x0) || (_FullPath < _Src)) {
                      if (_Filename != (char *)0x0) {
                        if (_FilenameSize <= (uint)((int)pcVar7 - (int)_Src)) goto LAB_00988e9d;
                        _strncpy_s(_Filename,_FilenameSize,_Src,(int)pcVar7 - (int)_Src);
                      }
                      if (_Ext != (char *)0x0) {
                        *_Ext = '\0';
                      }
                      return 0;
                    }
                    if (_Filename != (char *)0x0) {
                      if (_FilenameSize <= (uint)((int)_FullPath - (int)_Src)) goto LAB_00988e9d;
                      _strncpy_s(_Filename,_FilenameSize,_Src,(int)_FullPath - (int)_Src);
                    }
                    if (_Ext == (char *)0x0) {
                      return 0;
                    }
                    if ((uint)((int)pcVar7 - (int)_FullPath) < _ExtSize) {
                      _strncpy_s(_Ext,_ExtSize,_FullPath,(int)pcVar7 - (int)_FullPath);
                      return 0;
                    }
                    goto LAB_00988e9d;
                  }
                }
                else if (_ExtSize != 0) goto LAB_00988d64;
              }
            }
            else if (_FilenameSize != 0) goto LAB_00988d5a;
          }
        }
        else if (_DirSize != 0) goto LAB_00988d49;
      }
    }
    else if (_DriveSize != 0) goto LAB_00988d38;
  }
  bVar2 = true;
LAB_00988e9d:
  if ((_Drive != (char *)0x0) && (_DriveSize != 0)) {
    *_Drive = '\0';
  }
  if ((_Dir != (char *)0x0) && (_DirSize != 0)) {
    *_Dir = '\0';
  }
  if ((_Filename != (char *)0x0) && (_FilenameSize != 0)) {
    *_Filename = '\0';
  }
  if ((_Ext != (char *)0x0) && (_ExtSize != 0)) {
    *_Ext = '\0';
  }
  piVar4 = __errno();
  if ((pcVar6 == (char *)0x0) || (bVar2)) {
    eVar5 = 0x16;
    *piVar4 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else {
    eVar5 = 0x22;
    *piVar4 = 0x22;
  }
  return eVar5;
}



/* Library Function - Single Match
    __get_sys_err_msg
   
   Library: Visual Studio 2005 Release */

char * __cdecl __get_sys_err_msg(int m)

{
  int *piVar1;
  int iVar2;
  
  if (-1 < m) {
    piVar1 = (int *)FUN_0099987a();
    if (m < *piVar1) goto LAB_00988f40;
  }
  piVar1 = (int *)FUN_0099987a();
  m = *piVar1;
LAB_00988f40:
  iVar2 = FUN_00999880();
  return *(char **)(iVar2 + m * 4);
}



/* Library Function - Single Match
    _strerror
   
   Library: Visual Studio 2005 Release */

char * __cdecl _strerror(char *_ErrMsg)

{
  _ptiddata p_Var1;
  char *pcVar2;
  char *_Src;
  errno_t eVar3;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    pcVar2 = "Visual C++ CRT: Not enough memory to complete call to strerror.";
  }
  else {
    if (p_Var1->_errmsg == (char *)0x0) {
      pcVar2 = __calloc_crt(0x86,1);
      p_Var1->_errmsg = pcVar2;
      if (pcVar2 == (char *)0x0) {
        return "Visual C++ CRT: Not enough memory to complete call to strerror.";
      }
    }
    pcVar2 = p_Var1->_errmsg;
    _Src = __get_sys_err_msg((int)_ErrMsg);
    eVar3 = _strcpy_s(pcVar2,0x86,_Src);
    if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return pcVar2;
}



/* Library Function - Single Match
    _strcspn
   
   Library: Visual Studio */

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  size_t sVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = _Str + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return sVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __gcvt_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __gcvt_s(char *_DstBuf,size_t _Size,double _Val,int _NumOfDigits)

{
  int iVar1;
  int *piVar2;
  STRFLT p_Var3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  _strflt local_40;
  int local_30 [2];
  int local_28;
  char local_24;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_30,(localeinfo_struct *)0x0);
  iVar6 = _NumOfDigits;
  if ((_DstBuf == (char *)0x0) || (_Size == 0)) {
    piVar2 = __errno();
    iVar6 = 0x16;
  }
  else {
    *_DstBuf = '\0';
    if ((uint)_NumOfDigits < _Size) {
      p_Var3 = __fltout2((_CRT_DOUBLE)_Val,&local_40,local_20,0x16);
      iVar1 = p_Var3->decpt + -1;
      if ((iVar1 < -1) || (iVar6 + -1 < iVar1)) {
        iVar6 = __cftoe(&_Val,_DstBuf,_Size,iVar6 + -1,0);
      }
      else {
        iVar6 = __cftof(&_Val,_DstBuf,_Size,iVar6 - p_Var3->decpt);
      }
      if (iVar6 == 0) {
        cVar5 = *_DstBuf;
        if (cVar5 != '\0') {
          do {
            if (cVar5 == *(char *)**(undefined4 **)(local_30[0] + 0xbc)) break;
            _DstBuf = _DstBuf + 1;
            cVar5 = *_DstBuf;
          } while (cVar5 != '\0');
        }
        if (*_DstBuf != '\0') {
          do {
            _DstBuf = _DstBuf + 1;
            pcVar4 = _DstBuf;
            if (*_DstBuf == '\0') break;
          } while (*_DstBuf != 'e');
          do {
            pcVar4 = pcVar4 + -1;
          } while (*pcVar4 == '0');
          do {
            cVar5 = *_DstBuf;
            pcVar4 = pcVar4 + 1;
            _DstBuf = _DstBuf + 1;
            *pcVar4 = cVar5;
          } while (cVar5 != '\0');
        }
      }
      else {
        piVar2 = __errno();
        *piVar2 = iVar6;
      }
      goto LAB_009891b7;
    }
    piVar2 = __errno();
    iVar6 = 0x22;
  }
  *piVar2 = iVar6;
  __invalid_parameter(0,0,0,0,0);
LAB_009891b7:
  if (local_24 != '\0') {
    *(uint *)(local_28 + 0x70) = *(uint *)(local_28 + 0x70) & 0xfffffffd;
  }
  return iVar6;
}



/* Library Function - Single Match
    __gcvt
   
   Library: Visual Studio 2005 Release */

char * __cdecl __gcvt(double _Val,int _NumOfDigits,char *_DstBuf)

{
  errno_t eVar1;
  
  eVar1 = __gcvt_s(_DstBuf,0xffffffff,_Val,_NumOfDigits);
  return (char *)(~-(uint)(eVar1 != 0) & (uint)_DstBuf);
}



/* Library Function - Single Match
    __aligned_offset_malloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl __aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  
  if ((_Alignment & _Alignment - 1) == 0) {
    if ((_Offset == 0) || (_Offset < _Size)) {
      if (_Alignment < 5) {
        _Alignment = 4;
      }
      uVar1 = _Alignment - 1;
      uVar5 = -_Offset & 3;
      pvVar4 = _malloc(uVar5 + _Size + 4 + uVar1);
      pvVar3 = (void *)0x0;
      if (pvVar4 != (void *)0x0) {
        pvVar3 = (void *)(((int)pvVar4 + _Offset + uVar1 + uVar5 + 4 & ~uVar1) - _Offset);
        *(void **)((int)pvVar3 + (-4 - uVar5)) = pvVar4;
      }
    }
    else {
      piVar2 = __errno();
      *piVar2 = 0x16;
      __invalid_parameter(0,0,0,0,0);
      pvVar3 = (void *)0x0;
    }
    return pvVar3;
  }
  piVar2 = __errno();
  *piVar2 = 0x16;
  __invalid_parameter(0,0,0,0,0);
  return (void *)0x0;
}



void FUN_00989293(uint param_1)

{
  if (param_1 != 0) {
    _free(*(void **)((param_1 & 0xfffffffc) - 4));
  }
  return;
}



/* Library Function - Single Match
    __aligned_malloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl __aligned_malloc(size_t _Size,size_t _Alignment)

{
  void *pvVar1;
  
  pvVar1 = __aligned_offset_malloc(_Size,_Alignment,0);
  return pvVar1;
}



/* Library Function - Single Match
    __vsnprintf_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsnprintf_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  int *piVar1;
  int iVar2;
  FILE local_24;
  
  if (_Format == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    iVar2 = -1;
  }
  else if ((_MaxCount == 0) || (_DstBuf != (char *)0x0)) {
    local_24._cnt = 0x7fffffff;
    if (_MaxCount < 0x80000000) {
      local_24._cnt = _MaxCount;
    }
    local_24._flag = 0x42;
    local_24._base = _DstBuf;
    local_24._ptr = _DstBuf;
    iVar2 = __output_l(&local_24,_Format,_Locale,_ArgList);
    if (_DstBuf != (char *)0x0) {
      local_24._cnt = local_24._cnt - 1;
      if (local_24._cnt < 0) {
        __flsbuf(0,&local_24);
      }
      else {
        *local_24._ptr = '\0';
      }
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    iVar2 = -1;
  }
  return iVar2;
}



/* Library Function - Single Match
    __vsnprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl __vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  int iVar1;
  
  iVar1 = __vsnprintf_l(_Dest,_Count,_Format,(_locale_t)0x0,_Args);
  return iVar1;
}



/* Library Function - Single Match
    _strncat
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

char * __cdecl _strncat(char *_Dest,char *_Source,size_t _Count)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = (uint *)_Dest;
  if (_Count == 0) {
    return _Dest;
  }
  do {
    if (((uint)puVar5 & 3) == 0) goto LAB_009893bc;
    uVar4 = *puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_009893ed;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar6 = (uint *)((int)puVar6 + 2);
      goto LAB_009893ff;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_009893bc:
    do {
      puVar6 = puVar5;
      puVar5 = puVar6 + 1;
    } while (((*puVar6 ^ 0xffffffff ^ *puVar6 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar6;
    if ((char)uVar4 == '\0') goto LAB_009893ff;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar6 = (uint *)((int)puVar6 + 1);
      goto LAB_009893ff;
    }
  }
LAB_009893ed:
  puVar6 = (uint *)((int)puVar5 + -1);
LAB_009893ff:
  if (((uint)_Source & 3) == 0) {
    uVar3 = _Count >> 2;
  }
  else {
    do {
      bVar1 = (byte)*(uint *)_Source;
      uVar4 = (uint)bVar1;
      _Source = (char *)((int)_Source + 1);
      if (bVar1 == 0) goto LAB_0098945a;
      *(byte *)puVar6 = bVar1;
      puVar6 = (uint *)((int)puVar6 + 1);
      _Count = _Count - 1;
      if (_Count == 0) goto LAB_00989450;
    } while (((uint)_Source & 3) != 0);
    uVar3 = _Count >> 2;
  }
  do {
    if (uVar3 == 0) {
      for (uVar4 = _Count & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        uVar3 = *(uint *)_Source;
        _Source = (char *)((int)_Source + 1);
        *(byte *)puVar6 = (byte)uVar3;
        puVar6 = (uint *)((int)puVar6 + 1);
        if ((byte)uVar3 == 0) {
          return _Dest;
        }
      }
LAB_00989450:
      *(byte *)puVar6 = 0;
      return _Dest;
    }
    uVar2 = *(uint *)_Source;
    uVar4 = *(uint *)_Source;
    _Source = (char *)((int)_Source + 4);
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar4 == '\0') {
LAB_0098945a:
        *(byte *)puVar6 = (byte)uVar4;
        return _Dest;
      }
      if ((char)(uVar4 >> 8) == '\0') {
        *(short *)puVar6 = (short)uVar4;
        return _Dest;
      }
      if ((uVar4 & 0xff0000) == 0) {
        *(short *)puVar6 = (short)uVar4;
        *(byte *)((int)puVar6 + 2) = 0;
        return _Dest;
      }
      if ((uVar4 & 0xff000000) == 0) {
        *puVar6 = uVar4;
        return _Dest;
      }
    }
    *puVar6 = uVar4;
    puVar6 = puVar6 + 1;
    uVar3 = uVar3 - 1;
  } while( true );
}



/* Library Function - Single Match
    _strlen
   
   Library: Visual Studio */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_00989500;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_00989533:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_00989500:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_00989533;
}



/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __EH_prolog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_prolog3(int param_1)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  param_1 = -param_1;
  *(undefined4 *)((int)auStack_1c + param_1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + param_1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + param_1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + param_1 + 4) = DAT_00b30aac ^ (uint)&stack0x00000004;
  *(undefined4 *)((int)auStack_1c + param_1) = unaff_retaddr;
  *unaff_FS_OFFSET = (int)local_8;
  return;
}



/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __EH_prolog3_catch
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_prolog3_catch(int param_1)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  param_1 = -param_1;
  *(undefined4 *)((int)auStack_1c + param_1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + param_1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + param_1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + param_1 + 4) = DAT_00b30aac ^ (uint)&stack0x00000004;
  *(undefined4 *)((int)auStack_1c + param_1) = unaff_retaddr;
  *unaff_FS_OFFSET = (int)local_8;
  return;
}



/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __EH_epilog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_epilog3(void)

{
  undefined4 *unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  
  *unaff_FS_OFFSET = unaff_EBP[-3];
  *unaff_EBP = unaff_retaddr;
  return;
}



/* Library Function - Single Match
    __freea
   
   Library: Visual Studio 2005 Release */

void __cdecl __freea(void *_Memory)

{
  if ((_Memory != (void *)0x0) && (*(int *)((int)_Memory + -8) == 0xdddd)) {
    _free((int *)((int)_Memory + -8));
  }
  return;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    int __cdecl __crtLCMapStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char *,int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtLCMapStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  LPCWSTR lpDestStr;
  LPSTR pCVar8;
  int *in_ECX;
  char *pcVar9;
  void *local_14;
  LPCWSTR local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  if (DAT_00ba9e08 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_00ba9e08 = 2;
      }
    }
    else {
      DAT_00ba9e08 = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar9 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar9 = pcVar9 + -1;
      if (*pcVar5 == '\0') goto LAB_00989662;
      pcVar5 = pcVar5 + 1;
    } while (pcVar9 != (char *)0x0);
    pcVar9 = (char *)0xffffffff;
LAB_00989662:
    pcVar5 = param_4 + -(int)pcVar9;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_00ba9e08 == 2) || (DAT_00ba9e08 == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    iVar3 = ___ansicp(param_1);
    if (iVar3 == -1) {
      return 0;
    }
    if (iVar3 == param_7) {
      uVar6 = LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,
                           (int)param_6);
      goto LAB_00989960;
    }
    local_10 = (LPCWSTR)___convertcp(param_7,iVar3,param_3,&param_4,0,0);
    if (local_10 == (LPCWSTR)0x0) {
      return 0;
    }
    local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
    if (local_c != 0) {
      if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
        pCVar8 = (LPSTR)0x0;
      }
      else if (local_c + 8 < 0x401) {
        if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_009898a2;
        pCVar8 = &stack0xffffffe4;
      }
      else {
        pCVar8 = _malloc(local_c + 8);
        if (pCVar8 != (LPSTR)0x0) {
          pCVar8[0] = -0x23;
          pCVar8[1] = -0x23;
          pCVar8[2] = '\0';
          pCVar8[3] = '\0';
          pCVar8 = pCVar8 + 8;
        }
      }
      if (pCVar8 != (LPSTR)0x0) {
        _memset(pCVar8,0,local_c);
        local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,pCVar8,local_c);
        if (local_c == 0) {
          uVar6 = 0;
        }
        else {
          local_14 = (void *)___convertcp(iVar3,param_7,pCVar8,&local_c,param_5,param_6);
          uVar6 = -(uint)(local_14 != (void *)0x0) & local_c;
        }
        __freea(pCVar8);
        goto LAB_00989960;
      }
    }
LAB_009898a2:
    uVar6 = 0;
LAB_00989960:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if (local_14 != (void *)0x0) {
      if ((void *)param_5 != local_14) {
        _free(local_14);
        return uVar6;
      }
      return uVar6;
    }
    return uVar6;
  }
  if (DAT_00ba9e08 != 1) {
    return 0;
  }
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  uVar6 = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,(int)param_4,
                              (LPWSTR)0x0,0);
  if (uVar6 == 0) {
    return 0;
  }
  if (((int)uVar6 < 1) || (0xffffffe0 / uVar6 < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = uVar6 * 2 + 8;
    if (uVar1 < 0x401) {
      puVar7 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_0098970a:
        local_10 = (LPCWSTR)(puVar7 + 2);
      }
    }
    else {
      puVar7 = _malloc(uVar1);
      local_10 = (LPCWSTR)0x0;
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0xdddd;
        goto LAB_0098970a;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) {
    return 0;
  }
  iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,(int)param_4,local_10,uVar6);
  if ((iVar3 != 0) &&
     (local_c = LCMapStringW((LCID)param_1,param_2,local_10,uVar6,(LPWSTR)0x0,0), local_c != 0)) {
    if ((param_2 & 0x400) == 0) {
      if (((int)local_c < 1) || (0xffffffe0 / local_c < 2)) {
        lpDestStr = (LPCWSTR)0x0;
      }
      else {
        uVar1 = local_c * 2 + 8;
        if (uVar1 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_00989819;
          lpDestStr = (LPCWSTR)&stack0xffffffe4;
        }
        else {
          lpDestStr = _malloc(uVar1);
          if (lpDestStr != (LPCWSTR)0x0) {
            lpDestStr[0] = L'\xdddd';
            lpDestStr[1] = L'\0';
            lpDestStr = lpDestStr + 4;
          }
        }
      }
      if (lpDestStr != (LPCWSTR)0x0) {
        iVar3 = LCMapStringW((LCID)param_1,param_2,local_10,uVar6,lpDestStr,local_c);
        if (iVar3 != 0) {
          pCVar8 = (LPSTR)param_5;
          pcVar5 = param_6;
          if (param_6 == (char *)0x0) {
            pCVar8 = (LPSTR)0x0;
            pcVar5 = (char *)0x0;
          }
          local_c = WideCharToMultiByte(param_7,0,lpDestStr,local_c,pCVar8,(int)pcVar5,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
        }
        __freea(lpDestStr);
      }
    }
    else if ((param_6 != (char *)0x0) && ((int)local_c <= (int)param_6)) {
      LCMapStringW((LCID)param_1,param_2,local_10,uVar6,(LPWSTR)param_5,(int)param_6);
    }
  }
LAB_00989819:
  __freea(local_10);
  return local_c;
}



/* Library Function - Single Match
    ___crtLCMapStringA
   
   Library: Visual Studio 2005 Release */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtLCMapStringA_stat
                    ((localeinfo_struct *)_LocaleName,_DwMapFlag,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpDestStr,(char *)_CchDest,_Code_page,_BError,in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/* Library Function - Single Match
    ___pctype_func
   
   Library: Visual Studio 2005 Release */

ushort * __cdecl ___pctype_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_00b31998) && ((p_Var1->_ownlocale & DAT_00b318b0) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return (ushort *)ptVar2[1].lc_category[0].locale;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___init_ctype
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_ctype(threadlocinfo *_LocInfo)

{
  BYTE *pBVar1;
  byte bVar2;
  LONG *lpAddend;
  undefined2 *_Dst;
  int iVar3;
  BOOL BVar4;
  BYTE *pBVar5;
  LONG LVar6;
  BYTE *pBVar7;
  int iVar8;
  uint uVar9;
  localeinfo_struct local_4c;
  wchar_t *local_44;
  LPWORD local_40;
  undefined2 *local_3c;
  int *local_38;
  wchar_t *local_34;
  undefined4 *local_30;
  void *local_2c;
  undefined2 *local_28;
  LPCSTR local_24;
  BYTE *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  iVar8 = 0;
  local_30 = (undefined4 *)0x0;
  local_28 = (undefined2 *)0x0;
  local_20 = (BYTE *)0x0;
  local_2c = (void *)0x0;
  local_24 = (LPCSTR)0x0;
  local_4c.locinfo = _LocInfo;
  local_4c.mbcinfo = (pthreadmbcinfo)0x0;
  if (_LocInfo->lc_category[0].wlocale == (wchar_t *)0x0) {
    lpAddend = (LONG *)_LocInfo[1].lc_collate_cp;
    if (lpAddend != (LONG *)0x0) {
      InterlockedDecrement(lpAddend);
    }
    _LocInfo[1].lc_collate_cp = 0;
    _LocInfo[1].lc_time_cp = 0;
    _LocInfo[1].lc_category[0].locale = " ";
    _LocInfo[1].lc_category[0].wlocale = (wchar_t *)&DAT_00aa45a0;
    _LocInfo[1].lc_category[0].refcount = (int *)&DAT_00aa4720;
    _LocInfo->locale_name[3] = (wchar_t *)0x1;
    return 0;
  }
  if ((_LocInfo->lc_codepage != 0) ||
     (iVar3 = ___getlocaleinfo(&local_4c,0,
                               (LPCWSTR)(uint)*(ushort *)&_LocInfo->lc_category[2].locale,0x1004,
                               &_LocInfo->lc_codepage), iVar3 == 0)) {
    local_30 = __malloc_crt(4);
    local_28 = __calloc_crt(0x180,2);
    local_20 = __calloc_crt(0x180,1);
    local_2c = __calloc_crt(0x180,1);
    local_24 = __calloc_crt(0x101,1);
    if ((local_30 != (undefined4 *)0x0) &&
       ((((local_28 != (undefined2 *)0x0 && (local_24 != (LPCSTR)0x0)) && (local_20 != (BYTE *)0x0))
        && (local_2c != (void *)0x0)))) {
      *local_30 = 0;
      iVar3 = 0;
      do {
        local_24[iVar3] = (CHAR)iVar3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x100);
      BVar4 = GetCPInfo(_LocInfo->lc_codepage,&local_1c);
      if ((BVar4 != 0) && (local_1c.MaxCharSize < 6)) {
        local_34 = (wchar_t *)(local_1c.MaxCharSize & 0xffff);
        if (((wchar_t *)0x1 < local_34) && (local_1c.LeadByte[0] != '\0')) {
          pBVar5 = local_1c.LeadByte + 1;
          do {
            bVar2 = *pBVar5;
            if (bVar2 == 0) break;
            for (uVar9 = (uint)pBVar5[-1]; (int)uVar9 <= (int)(uint)bVar2; uVar9 = uVar9 + 1) {
              local_24[uVar9] = ' ';
              bVar2 = *pBVar5;
            }
            pBVar7 = pBVar5 + 1;
            pBVar5 = pBVar5 + 2;
          } while (*pBVar7 != 0);
        }
        local_40 = local_28 + 0x80;
        BVar4 = ___crtGetStringTypeA
                          ((_locale_t)0x0,1,local_24,0x100,local_40,_LocInfo->lc_codepage,0);
        if (((BVar4 != 0) &&
            (iVar3 = ___crtLCMapStringA((_locale_t)0x0,_LocInfo->lc_category[0].wlocale,0x100,
                                        local_24 + 1,0xff,(LPSTR)(local_20 + 0x81),0xff,
                                        _LocInfo->lc_codepage,0), iVar3 != 0)) &&
           (iVar3 = ___crtLCMapStringA((_locale_t)0x0,_LocInfo->lc_category[0].wlocale,0x200,
                                       local_24 + 1,0xff,(LPSTR)((int)local_2c + 0x81),0xff,
                                       _LocInfo->lc_codepage,0), pBVar5 = local_20, _Dst = local_28,
           iVar3 != 0)) {
          local_3c = local_28 + 0x7f;
          *local_3c = 0;
          local_44 = (wchar_t *)(local_20 + 0x80);
          local_20[0x7f] = 0;
          *(undefined1 *)((int)local_2c + 0x7f) = 0;
          *(byte *)local_44 = 0;
          local_38 = (int *)((int)local_2c + 0x80);
          *(undefined1 *)local_38 = 0;
          if ((1 < (int)local_34) && (local_1c.LeadByte[0] != '\0')) {
            pBVar7 = local_1c.LeadByte + 1;
            do {
              local_20 = pBVar7;
              if (*pBVar7 == 0) break;
              uVar9 = (uint)pBVar7[-1];
              if (uVar9 <= *pBVar7) {
                local_28 = _Dst + uVar9 + 0x80;
                do {
                  *local_28 = 0x8000;
                  uVar9 = uVar9 + 1;
                  local_28 = local_28 + 1;
                } while ((int)uVar9 <= (int)(uint)*pBVar7);
              }
              local_20 = pBVar7 + 2;
              pBVar1 = pBVar7 + 1;
              pBVar7 = local_20;
            } while (*pBVar1 != 0);
          }
          _memcpy(_Dst,_Dst + 0x100,0xfe);
          _memcpy(pBVar5,pBVar5 + 0x100,0x7f);
          _memcpy(local_2c,(void *)((int)local_2c + 0x100),0x7f);
          if (((LONG *)_LocInfo[1].lc_collate_cp != (LONG *)0x0) &&
             (LVar6 = InterlockedDecrement((LONG *)_LocInfo[1].lc_collate_cp), LVar6 == 0)) {
            _free((void *)(_LocInfo[1].lc_time_cp - 0xfe));
            _free(_LocInfo[1].lc_category[0].wlocale + -0x40);
            _free(_LocInfo[1].lc_category[0].refcount + -0x20);
            _free((void *)_LocInfo[1].lc_collate_cp);
          }
          *local_30 = 1;
          _LocInfo[1].lc_collate_cp = (uint)local_30;
          _LocInfo[1].lc_category[0].locale = (char *)local_40;
          _LocInfo[1].lc_time_cp = (uint)local_3c;
          _LocInfo[1].lc_category[0].wlocale = local_44;
          _LocInfo[1].lc_category[0].refcount = local_38;
          _LocInfo->locale_name[3] = local_34;
          goto LAB_00989d0d;
        }
      }
    }
  }
  _free(local_30);
  _free(local_28);
  _free(local_20);
  _free(local_2c);
  iVar8 = 1;
LAB_00989d0d:
  _free(local_24);
  return iVar8;
}



/* Library Function - Single Match
    ____lc_codepage_func
   
   Library: Visual Studio 2005 Release */

UINT __cdecl ____lc_codepage_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_00b31998) && ((p_Var1->_ownlocale & DAT_00b318b0) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return ptVar2->lc_codepage;
}



/* Library Function - Single Match
    ____lc_handle_func
   
   Library: Visual Studio 2005 Release */

uint * ____lc_handle_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_00b31998) && ((p_Var1->_ownlocale & DAT_00b318b0) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return &ptVar2->lc_time_cp;
}



/* Library Function - Single Match
    __malloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __malloc_crt(size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = _malloc(_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (DAT_00ba9e0c == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_00ba9e0c < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/* Library Function - Single Match
    __calloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __calloc_crt(size_t _Count,size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = (void *)__calloc_impl(_Count,_Size,0);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (DAT_00ba9e0c == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_00ba9e0c < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/* Library Function - Single Match
    __realloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = _realloc(_Ptr,_NewSize);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (_NewSize == 0) {
      return (void *)0x0;
    }
    if (DAT_00ba9e0c == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_00ba9e0c < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}



/* Library Function - Single Match
    __recalloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __recalloc_crt(void *_Ptr,size_t _Count,size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = __recalloc(_Ptr,_Count,_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (_Size == 0) {
      return (void *)0x0;
    }
    if (DAT_00ba9e0c == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_00ba9e0c < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}



/* Library Function - Single Match
    ___freetlocinfo
   
   Library: Visual Studio 2005 Release */

void ___freetlocinfo(void *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((((*(undefined ***)((int)param_1 + 0xbc) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_00b30db4)) &&
      (*(int **)((int)param_1 + 0xb0) != (int *)0x0)) && (**(int **)((int)param_1 + 0xb0) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0xb8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_mon(*(undefined4 *)((int)param_1 + 0xbc));
    }
    piVar1 = *(int **)((int)param_1 + 0xb4);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_num(*(undefined4 *)((int)param_1 + 0xbc));
    }
    _free(*(void **)((int)param_1 + 0xb0));
    _free(*(void **)((int)param_1 + 0xbc));
  }
  if ((*(int **)((int)param_1 + 0xc0) != (int *)0x0) && (**(int **)((int)param_1 + 0xc0) == 0)) {
    _free((void *)(*(int *)((int)param_1 + 0xc4) + -0xfe));
    _free((void *)(*(int *)((int)param_1 + 0xcc) + -0x80));
    _free((void *)(*(int *)((int)param_1 + 0xd0) + -0x80));
    _free(*(void **)((int)param_1 + 0xc0));
  }
  ppuVar2 = *(undefined ***)((int)param_1 + 0xd4);
  if ((ppuVar2 != &PTR_DAT_00b31ef0) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x50);
  iVar3 = 6;
  do {
    if ((((undefined *)puVar4[-2] != &DAT_00b318b8) &&
        (piVar1 = (int *)*puVar4, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      _free(piVar1);
    }
    if (((puVar4[-1] != 0) && (piVar1 = (int *)puVar4[1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      _free(piVar1);
    }
    puVar4 = puVar4 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  _free(param_1);
  return;
}



/* Library Function - Single Match
    ___addlocaleref
   
   Library: Visual Studio 2005 Release */

void ___addlocaleref(LONG *param_1)

{
  LONG *pLVar1;
  int iVar2;
  
  InterlockedIncrement(param_1);
  if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2c]);
  }
  if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2e]);
  }
  if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2d]);
  }
  if ((LONG *)param_1[0x30] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x30]);
  }
  pLVar1 = param_1 + 0x14;
  iVar2 = 6;
  do {
    if (((undefined *)pLVar1[-2] != &DAT_00b318b8) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)*pLVar1);
    }
    if ((pLVar1[-1] != 0) && ((LONG *)pLVar1[1] != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)pLVar1[1]);
    }
    pLVar1 = pLVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  InterlockedIncrement((LONG *)(param_1[0x35] + 0xb4));
  return;
}



/* Library Function - Single Match
    ___removelocaleref
   
   Library: Visual Studio 2005 Release */

LONG * ___removelocaleref(LONG *param_1)

{
  LONG *pLVar1;
  int iVar2;
  
  if (param_1 != (LONG *)0x0) {
    InterlockedDecrement(param_1);
    if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2c]);
    }
    if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2e]);
    }
    if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2d]);
    }
    if ((LONG *)param_1[0x30] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x30]);
    }
    pLVar1 = param_1 + 0x14;
    iVar2 = 6;
    do {
      if (((undefined *)pLVar1[-2] != &DAT_00b318b8) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)*pLVar1);
      }
      if ((pLVar1[-1] != 0) && ((LONG *)pLVar1[1] != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)pLVar1[1]);
      }
      pLVar1 = pLVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    InterlockedDecrement((LONG *)(param_1[0x35] + 0xb4));
  }
  return param_1;
}



/* Library Function - Single Match
    __copytlocinfo_nolock
   
   Library: Visual Studio 2005 Release */

void __copytlocinfo_nolock(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  if (((in_ECX != (undefined4 *)0x0) && (in_EAX != (undefined4 *)0x0)) && (in_EAX != in_ECX)) {
    puVar2 = in_EAX;
    for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *in_ECX;
      in_ECX = in_ECX + 1;
      puVar2 = puVar2 + 1;
    }
    *in_EAX = 0;
    ___addlocaleref();
  }
  return;
}



/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Library: Visual Studio 2005 Release */

int * __updatetlocinfoEx_nolock(void)

{
  int *piVar1;
  undefined4 *in_EAX;
  int *unaff_EDI;
  
  if ((unaff_EDI != (int *)0x0) && (in_EAX != (undefined4 *)0x0)) {
    piVar1 = (int *)*in_EAX;
    if (piVar1 != unaff_EDI) {
      *in_EAX = unaff_EDI;
      ___addlocaleref();
      if (piVar1 != (int *)0x0) {
        ___removelocaleref(piVar1);
        if ((*piVar1 == 0) && (piVar1 != (int *)&DAT_00b318c0)) {
          ___freetlocinfo(piVar1);
        }
      }
    }
    return unaff_EDI;
  }
  return (int *)0x0;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_00b318b0) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_0098a223();
  }
  else {
    p_Var1 = __getptd();
    p_Var1 = (_ptiddata)p_Var1->ptlocinfo;
  }
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x20);
  }
  return (pthreadlocinfo)p_Var1;
}



void FUN_0098a223(void)

{
  FUN_0098c8fb(0xc);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _sync_legacy_variables_lk
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl sync_legacy_variables_lk(void)

{
  _DAT_00baa638 = *(undefined4 *)(PTR_DAT_00b31998 + 4);
  _DAT_00baa63c = *(undefined4 *)(PTR_DAT_00b31998 + 8);
  _DAT_00b3199c = *(undefined4 *)(PTR_DAT_00b31998 + 0xa8);
  PTR_PTR_00b31fa8 = *(undefined **)(PTR_DAT_00b31998 + 0xd4);
  PTR_PTR_00b30de4 = *(undefined **)(PTR_DAT_00b31998 + 0xbc);
  PTR_DAT_00b30df0 = *(undefined **)(PTR_DAT_00b31998 + 200);
  _DAT_00b31fac = *(undefined4 *)(PTR_DAT_00b31998 + 0xac);
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __free_locale
   
   Library: Visual Studio 2005 Release */

void __cdecl __free_locale(_locale_t _Locale)

{
  pthreadlocinfo ptVar1;
  LONG LVar2;
  
  if (_Locale != (_locale_t)0x0) {
    if (_Locale->mbcinfo != (pthreadmbcinfo)0x0) {
      LVar2 = InterlockedDecrement(&_Locale->mbcinfo->refcount);
      if ((LVar2 == 0) && (_Locale->mbcinfo != (pthreadmbcinfo)&DAT_00b31390)) {
        _free(_Locale->mbcinfo);
      }
    }
    if (_Locale->locinfo != (pthreadlocinfo)0x0) {
      __lock(0xc);
      ___removelocaleref(_Locale->locinfo);
      ptVar1 = _Locale->locinfo;
      if (((ptVar1 != (pthreadlocinfo)0x0) && (ptVar1->refcount == 0)) &&
         (ptVar1 != (pthreadlocinfo)&DAT_00b318c0)) {
        ___freetlocinfo(ptVar1);
      }
      FUN_0098a30f();
    }
    _Locale->locinfo = (pthreadlocinfo)0xbaadf00d;
    _Locale->mbcinfo = (pthreadmbcinfo)0xbaadf00d;
    _free(_Locale);
  }
  return;
}



void FUN_0098a30f(void)

{
  FUN_0098c8fb(0xc);
  return;
}



undefined4 FUN_0098a318(void)

{
  return 0;
}



/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2005 Release */

void __strcats(char *param_1,rsize_t param_2,int param_3)

{
  errno_t eVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (0 < param_3) {
    puVar2 = &param_3;
    iVar3 = param_3;
    do {
      puVar2 = puVar2 + 1;
      eVar1 = _strcat_s(param_1,param_2,(char *)*puVar2);
      if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



/* Library Function - Single Match
    ___lc_strtolc
   
   Library: Visual Studio 2005 Release */

undefined4 ___lc_strtolc(char *param_1,char *param_2)

{
  char cVar1;
  errno_t eVar2;
  uint _MaxCount;
  char *_Dst;
  char *_Str;
  rsize_t _SizeInBytes;
  
  _Str = param_2;
  _memset(param_1,0,0x90);
  if (*param_2 != '\0') {
    if ((*param_2 != '.') || (param_2[1] == '\0')) {
      param_2 = (char *)0x0;
      _MaxCount = _strcspn(_Str,"_.,");
      while( true ) {
        if (_MaxCount == 0) {
          return 0xffffffff;
        }
        cVar1 = _Str[_MaxCount];
        if (param_2 == (char *)0x0) {
          if (0x3f < _MaxCount) {
            return 0xffffffff;
          }
          if (cVar1 == '.') {
            return 0xffffffff;
          }
          _SizeInBytes = 0x40;
          _Dst = param_1;
        }
        else if (param_2 == (char *)0x1) {
          if (0x3f < _MaxCount) {
            return 0xffffffff;
          }
          if (cVar1 == '_') {
            return 0xffffffff;
          }
          _SizeInBytes = 0x40;
          _Dst = param_1 + 0x40;
        }
        else {
          if (param_2 != (char *)0x2) {
            return 0xffffffff;
          }
          if (0xf < _MaxCount) {
            return 0xffffffff;
          }
          if ((cVar1 != '\0') && (cVar1 != ',')) {
            return 0xffffffff;
          }
          _SizeInBytes = 0x10;
          _Dst = param_1 + 0x80;
        }
        eVar2 = _strncpy_s(_Dst,_SizeInBytes,_Str,_MaxCount);
        if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        if (cVar1 == ',') break;
        if (cVar1 == '\0') {
          return 0;
        }
        param_2 = (char *)((int)param_2 + 1);
        _Str = _Str + _MaxCount + 1;
        _MaxCount = _strcspn(_Str,"_.,");
      }
      return 0;
    }
    eVar2 = _strncpy_s(param_1 + 0x80,0x10,param_2 + 1,0xf);
    if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    param_1[0x8f] = '\0';
  }
  return 0;
}



/* Library Function - Single Match
    ___lc_lctostr
   
   Library: Visual Studio 2005 Release */

void ___lc_lctostr(char *param_1,rsize_t param_2,char *param_3)

{
  errno_t eVar1;
  
  eVar1 = _strcpy_s(param_1,param_2,param_3);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_3[0x40] != '\0') {
    __strcats(param_1,param_2,2,&DAT_00a61a98,param_3 + 0x40);
  }
  if (param_3[0x80] != '\0') {
    __strcats(param_1,param_2,2,&DAT_00a51bb0,param_3 + 0x80);
  }
  return;
}



/* Library Function - Single Match
    __setlocale_get_all
   
   Library: Visual Studio 2005 Release */

char * __setlocale_get_all(void)

{
  bool bVar1;
  char *_Memory;
  errno_t eVar2;
  int iVar3;
  LONG LVar4;
  char *_Dst;
  undefined4 *puVar5;
  int unaff_ESI;
  undefined **local_10;
  int local_c;
  
  bVar1 = true;
  _Memory = __malloc_crt(0x355);
  _Dst = _Memory;
  if (_Memory != (char *)0x0) {
    _Dst = _Memory + 4;
    *_Dst = '\0';
    _Memory[0] = '\x01';
    _Memory[1] = '\0';
    _Memory[2] = '\0';
    _Memory[3] = '\0';
    iVar3 = unaff_ESI + 0x10;
    local_c = 1;
    puVar5 = (undefined4 *)(unaff_ESI + 0x58);
    __strcats(_Dst,0x351,3,"LC_COLLATE",&DAT_00a61f44,*puVar5);
    local_10 = &PTR_s_LC_COLLATE_00aa486c;
    do {
      eVar2 = _strcat_s(_Dst,0x351,";");
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar3 = _strcmp((char *)*puVar5,*(char **)(iVar3 + 0x58));
      if (iVar3 != 0) {
        bVar1 = false;
      }
      local_c = local_c + 1;
      local_10 = local_10 + 3;
      iVar3 = local_c * 0x10 + unaff_ESI;
      puVar5 = (undefined4 *)(iVar3 + 0x48);
      __strcats(_Dst,0x351,3,*local_10,&DAT_00a61f44,*puVar5);
    } while ((int)local_10 < 0xaa489c);
    if (bVar1) {
      _free(_Memory);
      if (*(LONG **)(unaff_ESI + 0x50) != (LONG *)0x0) {
        LVar4 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x50));
        if (LVar4 == 0) {
          _free(*(void **)(unaff_ESI + 0x50));
        }
      }
      if (*(LONG **)(unaff_ESI + 0x54) != (LONG *)0x0) {
        LVar4 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x54));
        if (LVar4 == 0) {
          _free(*(void **)(unaff_ESI + 0x54));
        }
      }
      _Dst = *(char **)(unaff_ESI + 0x68);
      *(undefined4 *)(unaff_ESI + 0x50) = 0;
      *(undefined4 *)(unaff_ESI + 0x48) = 0;
    }
    else {
      if (*(LONG **)(unaff_ESI + 0x50) != (LONG *)0x0) {
        LVar4 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x50));
        if (LVar4 == 0) {
          _free(*(void **)(unaff_ESI + 0x50));
        }
      }
      if (*(LONG **)(unaff_ESI + 0x54) != (LONG *)0x0) {
        LVar4 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x54));
        if (LVar4 == 0) {
          _free(*(void **)(unaff_ESI + 0x54));
        }
      }
      *(char **)(unaff_ESI + 0x50) = _Memory;
      *(char **)(unaff_ESI + 0x48) = _Dst;
    }
    *(undefined4 *)(unaff_ESI + 0x4c) = 0;
    *(undefined4 *)(unaff_ESI + 0x54) = 0;
  }
  return _Dst;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __expandlocale
   
   Library: Visual Studio 2005 Release */

char * __expandlocale(char *param_1,char *param_2,rsize_t param_3,undefined2 *param_4,
                     undefined4 *param_5)

{
  wchar_t *_Src;
  wchar_t *_Str1;
  wchar_t *_LpCodePage;
  _ptiddata p_Var1;
  errno_t eVar2;
  size_t sVar3;
  int iVar4;
  BOOL BVar5;
  char *_Str1_00;
  undefined1 local_98 [52];
  undefined1 local_64 [92];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)local_64;
  p_Var1 = __getptd();
  _Src = (p_Var1->_setloc_data)._cachein + 6;
  _Str1 = (p_Var1->_setloc_data)._cachein + 8;
  _LpCodePage = (p_Var1->_setloc_data)._cachein + 2;
  _Str1_00 = (char *)((int)(p_Var1->_setloc_data)._cachein + 0x93);
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (param_3 == 0)) {
LAB_0098a81e:
    _Str1_00 = (char *)0x0;
  }
  else {
    if ((*param_1 == 'C') && (param_1[1] == '\0')) {
      eVar2 = _strcpy_s(param_2,param_3,"C");
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (param_4 != (undefined2 *)0x0) {
        *param_4 = 0;
        param_4[1] = 0;
        param_4[2] = 0;
      }
      if (param_5 == (undefined4 *)0x0) {
        return param_2;
      }
      *param_5 = 0;
      return param_2;
    }
    sVar3 = _strlen(param_1);
    if ((0x82 < sVar3) ||
       ((iVar4 = _strcmp(_Str1_00,param_1), iVar4 != 0 &&
        (iVar4 = _strcmp((char *)_Str1,param_1), iVar4 != 0)))) {
      iVar4 = ___lc_strtolc(local_98,param_1);
      if ((iVar4 != 0) ||
         (BVar5 = ___get_qualified_locale
                            ((LPLC_STRINGS)local_98,(UINT *)_LpCodePage,(LPLC_STRINGS)local_98),
         BVar5 == 0)) goto LAB_0098a81e;
      *(uint *)_Src = (uint)(ushort)(p_Var1->_setloc_data)._cachein[4];
      ___lc_lctostr(_Str1_00,0x83,local_98);
      if ((*param_1 == '\0') || (0x82 < sVar3)) {
        sVar3 = 0;
        param_1 = "";
      }
      eVar2 = _strncpy_s((char *)_Str1,0x83,param_1,sVar3 + 1);
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    if (param_4 != (undefined2 *)0x0) {
      _memcpy(param_4,_LpCodePage,6);
    }
    if (param_5 != (undefined4 *)0x0) {
      _memcpy(param_5,_Src,4);
    }
    eVar2 = _strcpy_s(param_2,param_3,_Str1_00);
    if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return _Str1_00;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __setlocale_set_cat
   
   Library: Visual Studio 2005 Release */

undefined4 __setlocale_set_cat(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  _ptiddata p_Var3;
  int iVar4;
  int iVar5;
  errno_t eVar6;
  wchar_t *pwVar7;
  BOOL BVar8;
  uint uVar9;
  LONG LVar10;
  int unaff_ESI;
  wchar_t *pwVar11;
  undefined1 local_1c8 [8];
  int local_1c0;
  undefined4 local_1b8;
  ushort local_1b4 [4];
  uint local_1ac;
  undefined *local_1a8;
  void *local_1a0;
  undefined4 local_19c;
  uint *local_198;
  undefined4 *local_194;
  size_t local_190;
  WORD local_18c [128];
  char local_8c [20];
  undefined1 local_78 [112];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)local_78;
  p_Var3 = __getptd();
  pwVar11 = (p_Var3->_setloc_data)._cacheout + 9;
  iVar4 = __expandlocale();
  if (iVar4 != 0) {
    iVar4 = param_1 * 0x10 + unaff_ESI;
    iVar5 = _strcmp(local_8c,*(char **)(iVar4 + 0x48));
    if (iVar5 == 0) {
LAB_0098ab14:
      return *(undefined4 *)(iVar4 + 0x48);
    }
    local_190 = _strlen(local_8c);
    local_190 = local_190 + 5;
    local_194 = __malloc_crt(local_190);
    if (local_194 != (undefined4 *)0x0) {
      local_1a8 = *(undefined **)(iVar4 + 0x48);
      local_198 = (uint *)(unaff_ESI + 0xc + param_1 * 4);
      local_1ac = *local_198;
      local_1a0 = (void *)((param_1 + 6) * 6 + unaff_ESI);
      _memcpy(local_1c8,local_1a0,6);
      local_1b8 = *(undefined4 *)(unaff_ESI + 4);
      eVar6 = _strcpy_s((char *)(local_194 + 1),local_190 - 4,local_8c);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined4 **)(iVar4 + 0x48) = local_194 + 1;
      *local_198 = (uint)local_1b4[0];
      _memcpy(local_1a0,local_1b4,6);
      if (param_1 == 2) {
        local_190 = 0;
        *(undefined4 *)(unaff_ESI + 4) = local_19c;
        pwVar7 = pwVar11;
        iVar5 = *(int *)((p_Var3->_setloc_data)._cacheout + 0x19);
        local_1a0 = *(void **)((p_Var3->_setloc_data)._cacheout + 0x1b);
        do {
          if (*(int *)(unaff_ESI + 4) == *(int *)pwVar7) {
            if (local_190 != 0) {
              pwVar7 = pwVar11 + local_190 * 4;
              *(int *)pwVar11 = *(int *)pwVar7;
              *(int *)((p_Var3->_setloc_data)._cacheout + 0xb) = *(int *)(pwVar7 + 2);
              *(int *)pwVar7 = iVar5;
              *(void **)(pwVar7 + 2) = local_1a0;
            }
            break;
          }
          local_1c0 = *(int *)pwVar7;
          local_190 = local_190 + 1;
          *(int *)pwVar7 = iVar5;
          pvVar2 = *(void **)(pwVar7 + 2);
          *(void **)(pwVar7 + 2) = local_1a0;
          pwVar7 = pwVar7 + 4;
          iVar5 = local_1c0;
          local_1a0 = pvVar2;
        } while ((int)local_190 < 5);
        if (local_190 == 5) {
          BVar8 = ___crtGetStringTypeA
                            ((_locale_t)0x0,1,
                             "\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f"
                             ,0x7f,local_18c,*(int *)(unaff_ESI + 4),*(BOOL *)(unaff_ESI + 0x14));
          if (BVar8 == 0) {
            (p_Var3->_setloc_data)._cacheout[0xb] = L'\0';
            (p_Var3->_setloc_data)._cacheout[0xc] = L'\0';
          }
          else {
            uVar9 = 0;
            do {
              local_18c[uVar9] = local_18c[uVar9] & 0x1ff;
              uVar9 = uVar9 + 1;
            } while (uVar9 < 0x7f);
            iVar5 = _memcmp(local_18c,PTR_DAT_00b30df8,0xfe);
            *(uint *)((p_Var3->_setloc_data)._cacheout + 0xb) = (uint)(iVar5 == 0);
          }
          *(int *)pwVar11 = *(int *)(unaff_ESI + 4);
        }
        *(undefined4 *)(unaff_ESI + 0xa8) = *(undefined4 *)((p_Var3->_setloc_data)._cacheout + 0xb);
      }
      if (param_1 == 1) {
        *(undefined4 *)(unaff_ESI + 8) = local_19c;
      }
      iVar5 = (**(code **)(&DAT_00aa4868 + param_1 * 0xc))();
      if (iVar5 == 0) {
        if (local_1a8 != &DAT_00b318b8) {
          puVar1 = (undefined4 *)((param_1 + 5) * 0x10 + unaff_ESI);
          LVar10 = InterlockedDecrement((LONG *)*puVar1);
          if (LVar10 == 0) {
            _free((void *)*puVar1);
            _free(*(void **)(iVar4 + 0x54));
            *(undefined4 *)(iVar4 + 0x4c) = 0;
          }
        }
        *local_194 = 1;
        *(undefined4 **)((param_1 + 5) * 0x10 + unaff_ESI) = local_194;
        goto LAB_0098ab14;
      }
      *(undefined **)(iVar4 + 0x48) = local_1a8;
      _free(local_194);
      *local_198 = local_1ac;
      *(undefined4 *)(unaff_ESI + 4) = local_1b8;
    }
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __setlocale_nolock
   
   Library: Visual Studio 2005 Release */

undefined4 __setlocale_nolock(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  char *pcVar3;
  size_t sVar4;
  size_t sVar5;
  errno_t eVar6;
  int iVar7;
  char *in_ECX;
  int in_EDX;
  int iVar8;
  undefined **ppuVar9;
  undefined4 *puVar10;
  int local_98;
  int local_90;
  char local_8c [20];
  undefined1 local_78 [112];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)local_78;
  iVar8 = 0;
  if (param_1 != 0) {
    if (in_ECX == (char *)0x0) {
      return *(undefined4 *)(param_1 * 0x10 + 0x48 + in_EDX);
    }
    uVar2 = __setlocale_set_cat(param_1);
    return uVar2;
  }
  bVar1 = true;
  local_90 = 0;
  if (in_ECX != (char *)0x0) {
    if (((*in_ECX == 'L') && (in_ECX[1] == 'C')) && (in_ECX[2] == '_')) {
      do {
        pcVar3 = _strpbrk(in_ECX,"=;");
        if (((pcVar3 == (char *)0x0) || (sVar4 = (int)pcVar3 - (int)in_ECX, sVar4 == 0)) ||
           (*pcVar3 == ';')) {
          return 0;
        }
        local_98 = 1;
        ppuVar9 = &PTR_s_LC_COLLATE_00aa486c;
        do {
          iVar8 = _strncmp(*ppuVar9,in_ECX,sVar4);
          if ((iVar8 == 0) && (sVar5 = _strlen(*ppuVar9), sVar4 == sVar5)) break;
          local_98 = local_98 + 1;
          ppuVar9 = ppuVar9 + 3;
        } while ((int)ppuVar9 < 0xaa489d);
        pcVar3 = pcVar3 + 1;
        sVar4 = _strcspn(pcVar3,";");
        if ((sVar4 == 0) && (*pcVar3 != ';')) {
          return 0;
        }
        if (local_98 < 6) {
          eVar6 = _strncpy_s(local_8c,0x83,pcVar3,sVar4);
          if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          local_8c[sVar4] = '\0';
          iVar8 = __setlocale_set_cat(local_98);
          if (iVar8 != 0) {
            local_90 = local_90 + 1;
          }
        }
      } while ((pcVar3[sVar4] != '\0') && (in_ECX = pcVar3 + sVar4 + 1, *in_ECX != '\0'));
    }
    else {
      iVar7 = __expandlocale();
      if (iVar7 == 0) {
        return 0;
      }
      puVar10 = (undefined4 *)(in_EDX + 0x48);
      do {
        if (iVar8 != 0) {
          iVar7 = _strcmp(local_8c,(char *)*puVar10);
          if ((iVar7 == 0) || (iVar7 = __setlocale_set_cat(iVar8), iVar7 != 0)) {
            local_90 = local_90 + 1;
          }
          else {
            bVar1 = false;
          }
        }
        iVar8 = iVar8 + 1;
        puVar10 = puVar10 + 4;
      } while (iVar8 < 6);
      if (bVar1) goto LAB_0098acdf;
    }
    if (local_90 == 0) {
      return 0;
    }
  }
LAB_0098acdf:
  uVar2 = __setlocale_get_all();
  return uVar2;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _setlocale
   
   Library: Visual Studio 2005 Release */

char * __cdecl _setlocale(int _Category,char *_Locale)

{
  int *piVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  int iVar4;
  char *local_24;
  
  local_24 = (char *)0x0;
  if ((uint)_Category < 6) {
    p_Var2 = __getptd();
    ___updatetlocinfo();
    p_Var2->_ownlocale = p_Var2->_ownlocale | 0x10;
    pvVar3 = __calloc_crt(0xd8,1);
    if (pvVar3 != (void *)0x0) {
      __lock(0xc);
      __copytlocinfo_nolock();
      FUN_0098ae24();
      local_24 = (char *)__setlocale_nolock(_Category);
      if (local_24 == (char *)0x0) {
        ___removelocaleref(pvVar3);
        ___freetlocinfo(pvVar3);
      }
      else {
        if (_Locale != (char *)0x0) {
          iVar4 = _strcmp(_Locale,&DAT_00b318b8);
          if (iVar4 != 0) {
            DAT_00ba9e10 = 1;
          }
        }
        __lock(0xc);
        __updatetlocinfoEx_nolock();
        ___removelocaleref(pvVar3);
        if (((p_Var2->_ownlocale & 2) == 0) && (((byte)DAT_00b318b0 & 1) == 0)) {
          __updatetlocinfoEx_nolock();
          _memcpy(&DAT_00baa620,PTR_DAT_00b31998 + 0xc,0x18);
          sync_legacy_variables_lk();
        }
        FUN_0098ae30();
      }
    }
    FUN_0098ae61();
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    local_24 = (char *)0x0;
  }
  return local_24;
}



void FUN_0098ae24(void)

{
  FUN_0098c8fb(0xc);
  return;
}



void FUN_0098ae30(void)

{
  FUN_0098c8fb(0xc);
  return;
}



void FUN_0098ae61(void)

{
  int unaff_ESI;
  
  *(uint *)(unaff_ESI + 0x70) = *(uint *)(unaff_ESI + 0x70) & 0xffffffef;
  return;
}



void FUN_0098ae71(byte param_1)

{
  exception *in_ECX;
  
  *(undefined ***)in_ECX = &PTR_FUN_00aa4938;
  exception::~exception(in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2005 Release */

undefined4 ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_0098aee9:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_0098aec7:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_0098aee9;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_0098aec7;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___FrameUnwindToState
   
   Library: Visual Studio 2005 Release */

void ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4)

{
  _ptiddata p_Var1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_3 + 4) < 0x81) {
    iVar4 = (int)*(char *)(param_1 + 8);
  }
  else {
    iVar4 = *(int *)(param_1 + 8);
  }
  p_Var1 = __getptd();
  p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + 1;
  while (iVar4 != param_4) {
    if ((iVar4 < 0) || (*(int *)(param_3 + 4) <= iVar4)) {
      _inconsistency();
    }
    iVar2 = iVar4 * 8;
    piVar3 = (int *)(*(int *)(param_3 + 8) + iVar2);
    iVar4 = *piVar3;
    if (piVar3[1] != 0) {
      *(int *)(param_1 + 8) = iVar4;
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + iVar2),param_1,0x103);
    }
  }
  FUN_0098aff9();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}



void FUN_0098aff9(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < p_Var1->_ProcessingThrow) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
  }
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2005 Release */

void ___DestructExceptionObject(int *param_1)

{
  int iVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[7] != 0)) &&
     (iVar1 = *(int *)(param_1[7] + 4), iVar1 != 0)) {
    FID_conflict__CallMemberFunction1(param_1[6],iVar1);
  }
  return;
}



/* Library Function - Single Match
    ___AdjustPointer
   
   Library: Visual Studio 2005 Release */

int ___AdjustPointer(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    iVar1 = iVar1 + *(int *)(*(int *)(param_2[1] + param_1) + param_2[2]) + param_2[1];
  }
  return iVar1;
}



/* Library Function - Single Match
    unsigned char __cdecl IsInExceptionSpec(struct EHExceptionRecord *,struct _s_ESTypeList const *)
   
   Library: Visual Studio 2005 Release */

uchar __cdecl IsInExceptionSpec(EHExceptionRecord *param_1,_s_ESTypeList *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EDI;
  int local_c;
  uchar local_5;
  
  if (unaff_EDI == (int *)0x0) {
    _inconsistency();
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  local_c = 0;
  local_5 = '\0';
  if (0 < *unaff_EDI) {
    do {
      piVar3 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
      iVar2 = *piVar3;
      if (0 < iVar2) {
        do {
          piVar3 = piVar3 + 1;
          iVar1 = ___TypeMatch(unaff_EDI[1] + local_c * 0x10,*piVar3,*(undefined4 *)(param_1 + 0x1c)
                              );
          if (iVar1 != 0) {
            local_5 = '\x01';
            break;
          }
          iVar2 = iVar2 + -1;
        } while (0 < iVar2);
      }
      local_c = local_c + 1;
    } while (local_c < *unaff_EDI);
  }
  return local_5;
}



/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    void __cdecl CallUnexpected(struct _s_ESTypeList const *)
   
   Library: Visual Studio 2005 Release */

void __cdecl CallUnexpected(_s_ESTypeList *param_1)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  unexpected();
                    /* WARNING: Subroutine does not return */
  terminate();
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct
   _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)
   
   Library: Visual Studio 2005 Release */

void * __cdecl
CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
              _s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7)

{
  _ptiddata p_Var1;
  void *in_ECX;
  undefined1 local_40 [8];
  undefined4 local_38;
  void *local_34;
  void *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00affd20;
  uStack_c = 0x98b1a0;
  local_38 = 0;
  local_28 = *(undefined4 *)(param_2 + -4);
  local_2c = __CreateFrameInfo(local_40,*(undefined4 *)(param_1 + 0x18));
  p_Var1 = __getptd();
  local_30 = p_Var1->_curexception;
  p_Var1 = __getptd();
  local_34 = p_Var1->_curcontext;
  p_Var1 = __getptd();
  p_Var1->_curexception = param_1;
  p_Var1 = __getptd();
  p_Var1->_curcontext = param_3;
  local_8 = (undefined *)0x1;
  local_20 = _CallCatchBlock2(param_2,param_4,in_ECX,(int)param_5,param_6);
  local_8 = (undefined *)0xfffffffe;
  FUN_0098b2ba();
  return local_20;
}



void FUN_0098b2ba(void)

{
  _ptiddata p_Var1;
  int iVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -4) = *(undefined4 *)(unaff_EBP + -0x24);
  __FindAndUnlinkFrame(*(undefined4 *)(unaff_EBP + -0x28));
  p_Var1 = __getptd();
  p_Var1->_curexception = *(void **)(unaff_EBP + -0x2c);
  p_Var1 = __getptd();
  p_Var1->_curcontext = *(void **)(unaff_EBP + -0x30);
  if ((((*unaff_ESI == -0x1f928c9d) && (unaff_ESI[4] == 3)) &&
      ((iVar2 = unaff_ESI[5], iVar2 == 0x19930520 ||
       ((iVar2 == 0x19930521 || (iVar2 == 0x19930522)))))) &&
     ((*(int *)(unaff_EBP + -0x34) == 0 && (*(int *)(unaff_EBP + -0x1c) != 0)))) {
    iVar2 = __IsExceptionObjectToBeDestroyed(unaff_ESI[6]);
    if (iVar2 != 0) {
      ___DestructExceptionObject();
    }
  }
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObjectHelper
   
   Library: Visual Studio 2005 Release */

char ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  int iVar1;
  void *pvVar2;
  size_t _Size;
  uint in_stack_ffffffd0;
  
  if (((param_3[1] == 0) || (*(char *)(param_3[1] + 8) == '\0')) ||
     ((param_3[2] == 0 && ((*param_3 & 0x80000000) == 0)))) {
    return '\0';
  }
  if (-1 < (int)*param_3) {
    param_2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  if ((*param_3 & 8) == 0) {
    pvVar2 = *(void **)(param_1 + 0x18);
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        iVar1 = _ValidateRead(pvVar2,1);
        if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
          _Size = *(size_t *)(param_4 + 0x14);
          pvVar2 = (void *)___AdjustPointer(*(undefined4 *)(param_1 + 0x18),param_4 + 8);
          _memmove(param_2,pvVar2,_Size);
          return '\0';
        }
      }
      else {
        iVar1 = _ValidateRead(pvVar2,1);
        if (((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) &&
           (iVar1 = _ValidateRead(*(void **)(param_4 + 0x18),in_stack_ffffffd0), iVar1 != 0)) {
          return ((*param_4 & 4) != 0) + '\x01';
        }
      }
    }
    else {
      iVar1 = _ValidateRead(pvVar2,1);
      if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
        _memmove(param_2,*(void **)(param_1 + 0x18),*(size_t *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          return '\0';
        }
        iVar1 = *param_2;
        if (iVar1 == 0) {
          return '\0';
        }
        goto LAB_0098b3b5;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x18);
      *param_2 = iVar1;
LAB_0098b3b5:
      iVar1 = ___AdjustPointer(iVar1,param_4 + 8);
      *param_2 = iVar1;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObject
   
   Library: Visual Studio 2005 Release */

void ___BuildCatchObject(int param_1,int param_2,uint *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_2;
  if ((*param_3 & 0x80000000) == 0) {
    iVar3 = param_3[2] + 0xc + param_2;
  }
  iVar1 = ___BuildCatchObjectHelper(param_1,param_2,param_3,param_4);
  if (iVar1 == 1) {
    uVar2 = ___AdjustPointer(*(undefined4 *)(param_1 + 0x18),param_4 + 8);
    FID_conflict__CallMemberFunction1(iVar3,*(undefined4 *)(param_4 + 0x18),uVar2);
  }
  else if (iVar1 == 2) {
    uVar2 = ___AdjustPointer(*(undefined4 *)(param_1 + 0x18),param_4 + 8,1);
    FID_conflict__CallMemberFunction1(iVar3,*(undefined4 *)(param_4 + 0x18),uVar2);
  }
  return;
}



/* Library Function - Single Match
    void __cdecl CatchIt(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct _s_CatchableType const
   *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode *,unsigned char)
   
   Library: Visual Studio 2005 Release */

void __cdecl
CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
       _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
       _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11)

{
  void *pvVar1;
  EHRegistrationNode *unaff_ESI;
  int unaff_EDI;
  EHRegistrationNode *pEVar2;
  
  if (param_5 != (_s_FuncInfo *)0x0) {
    ___BuildCatchObject(param_1);
  }
  if (param_7 == (_s_CatchableType *)0x0) {
    param_7 = (_s_CatchableType *)unaff_ESI;
  }
  _UnwindNestedFrames((EHRegistrationNode *)param_7,param_1);
  pEVar2 = unaff_ESI;
  ___FrameUnwindToState();
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_EDI + 4) + 1;
  pvVar1 = CallCatchBlock(param_1,unaff_ESI,(_CONTEXT *)param_2,param_4,param_6,0x100,(ulong)pEVar2)
  ;
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,unaff_ESI);
  }
  return;
}



/* Library Function - Single Match
    void __cdecl FindHandlerForForeignException(struct EHExceptionRecord *,struct EHRegistrationNode
   *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,int,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2005 Release */

void __cdecl
FindHandlerForForeignException
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  _ptiddata p_Var1;
  void *pvVar2;
  int iVar3;
  _s_TryBlockMapEntry *p_Var4;
  int iVar5;
  _s_TryBlockMapEntry *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int unaff_EDI;
  uint extraout_var;
  uint uVar6;
  uint local_8;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    p_Var1 = __getptd();
    uVar6 = extraout_var;
    if (p_Var1->_translator != (void *)0x0) {
      p_Var1 = __getptd();
      pvVar2 = (void *)__encoded_null();
      if (((p_Var1->_translator != pvVar2) && (*(int *)param_1 != -0x1fbcb0b3)) &&
         (iVar3 = _CallSETranslator(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
         iVar3 != 0)) {
        return;
      }
    }
    if (*(int *)(param_5 + 0xc) == 0) {
      _inconsistency();
    }
    p_Var4 = _GetRangeOfTrysToCheck(param_5,param_7,param_6,&local_8,(uint *)&stack0xfffffff4);
    if (local_8 < uVar6) {
      do {
        if ((*(int *)p_Var4 <= param_6) && (param_6 <= *(int *)(p_Var4 + 4))) {
          iVar5 = *(int *)(p_Var4 + 0xc) * 0x10 + *(int *)(p_Var4 + 0x10);
          iVar3 = *(int *)(iVar5 + -0xc);
          if (((iVar3 == 0) || (*(char *)(iVar3 + 8) == '\0')) &&
             ((*(byte *)(iVar5 + -0x10) & 0x40) == 0)) {
            CatchIt(param_1,(EHRegistrationNode *)param_3,param_4,param_5,(_s_FuncInfo *)0x0,
                    (_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EBX,unaff_EDI,
                    unaff_ESI,(uchar)uVar6);
          }
        }
        local_8 = local_8 + 1;
        p_Var4 = p_Var4 + 0x14;
      } while (local_8 < uVar6);
    }
  }
  return;
}



/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2005 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  uchar uVar1;
  bool bVar2;
  _ptiddata p_Var3;
  int iVar4;
  _s_TryBlockMapEntry *p_Var5;
  EHRegistrationNode *unaff_EBX;
  int iVar6;
  int *piVar7;
  _s_FuncInfo *p_Var8;
  int unaff_ESI;
  EHExceptionRecord *pEVar9;
  _s_ESTypeList *unaff_EDI;
  EHRegistrationNode *pEVar10;
  undefined4 in_stack_ffffffd0;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  char local_5;
  
  p_Var8 = param_5;
  local_5 = '\0';
  if (*(int *)(param_5 + 4) < 0x81) {
    local_c = (int)(char)param_2[8];
  }
  else {
    local_c = *(int *)(param_2 + 8);
  }
  if ((local_c < -1) || (*(int *)(param_5 + 4) <= local_c)) {
    _inconsistency();
  }
  pEVar9 = param_1;
  if (*(int *)param_1 == -0x1f928c9d) {
    if (((*(int *)(param_1 + 0x10) == 3) &&
        (((iVar4 = *(int *)(param_1 + 0x14), iVar4 == 0x19930520 || (iVar4 == 0x19930521)) ||
         (iVar4 == 0x19930522)))) && (*(int *)(param_1 + 0x1c) == 0)) {
      p_Var3 = __getptd();
      if (p_Var3->_curexception == (void *)0x0) {
        return;
      }
      p_Var3 = __getptd();
      pEVar9 = p_Var3->_curexception;
      param_1 = pEVar9;
      p_Var3 = __getptd();
      param_3 = p_Var3->_curcontext;
      iVar4 = _ValidateRead(pEVar9,1);
      if (iVar4 == 0) {
        _inconsistency();
      }
      if ((((*(int *)pEVar9 == -0x1f928c9d) && (*(int *)(pEVar9 + 0x10) == 3)) &&
          ((iVar4 = *(int *)(pEVar9 + 0x14), iVar4 == 0x19930520 ||
           ((iVar4 == 0x19930521 || (iVar4 == 0x19930522)))))) && (*(int *)(pEVar9 + 0x1c) == 0)) {
        _inconsistency();
      }
      p_Var3 = __getptd();
      if (p_Var3->_curexcspec != (void *)0x0) {
        p_Var3 = __getptd();
        piVar7 = p_Var3->_curexcspec;
        p_Var3 = __getptd();
        iVar4 = 0;
        p_Var3->_curexcspec = (void *)0x0;
        uVar1 = IsInExceptionSpec(param_1,unaff_EDI);
        pEVar9 = param_1;
        if (uVar1 == '\0') {
          iVar6 = 0;
          if (0 < *piVar7) {
            do {
              bVar2 = type_info::operator==
                                (*(type_info **)(iVar6 + 4 + piVar7[1]),
                                 (type_info *)&PTR_PTR_00b30e04);
              if (bVar2) {
                ___DestructExceptionObject(param_1,1);
                param_1 = (EHExceptionRecord *)s_bad_exception_00aa4940;
                std::exception::exception((exception *)&stack0xffffffd0,(char **)&param_1);
                    /* WARNING: Subroutine does not return */
                __CxxThrowException_8(&stack0xffffffd0,&DAT_00affd84);
              }
              iVar4 = iVar4 + 1;
              iVar6 = iVar6 + 0x10;
            } while (iVar4 < *piVar7);
          }
          goto LAB_0098b7dc;
        }
      }
    }
    p_Var8 = param_5;
    if (((*(int *)pEVar9 == -0x1f928c9d) && (*(int *)(pEVar9 + 0x10) == 3)) &&
       ((iVar4 = *(int *)(pEVar9 + 0x14), iVar4 == 0x19930520 ||
        ((iVar4 == 0x19930521 || (iVar4 == 0x19930522)))))) {
      if (*(int *)(param_5 + 0xc) != 0) {
        p_Var5 = _GetRangeOfTrysToCheck(param_5,param_7,local_c,&local_14,&local_20);
        for (; local_14 < local_20; local_14 = local_14 + 1) {
          if ((*(int *)p_Var5 <= local_c) && (local_c <= *(int *)(p_Var5 + 4))) {
            local_10 = *(int *)(p_Var5 + 0x10);
            for (local_1c = *(int *)(p_Var5 + 0xc); 0 < local_1c; local_1c = local_1c + -1) {
              piVar7 = *(int **)(*(int *)(pEVar9 + 0x1c) + 0xc);
              for (local_18 = *piVar7; 0 < local_18; local_18 = local_18 + -1) {
                piVar7 = piVar7 + 1;
                p_Var8 = (_s_FuncInfo *)*piVar7;
                iVar4 = ___TypeMatch(local_10,p_Var8,*(undefined4 *)(pEVar9 + 0x1c));
                if (iVar4 != 0) {
                  local_5 = '\x01';
                  CatchIt(pEVar9,(EHRegistrationNode *)param_3,param_4,param_5,p_Var8,
                          (_s_HandlerType *)param_7,(_s_CatchableType *)param_8,
                          (_s_TryBlockMapEntry *)unaff_EDI,unaff_ESI,unaff_EBX,
                          (uchar)SUB41(in_stack_ffffffd0,0));
                  pEVar9 = param_1;
                  goto LAB_0098b906;
                }
              }
              local_10 = local_10 + 0x10;
            }
          }
LAB_0098b906:
          p_Var5 = p_Var5 + 0x14;
        }
      }
      p_Var8 = param_5;
      if (param_6 != '\0') {
        ___DestructExceptionObject(pEVar9,1);
      }
      if ((((local_5 != '\0') || ((*(uint *)p_Var8 & 0x1fffffff) < 0x19930521)) ||
          (*(int *)(p_Var8 + 0x1c) == 0)) ||
         (uVar1 = IsInExceptionSpec(pEVar9,unaff_EDI), uVar1 != '\0')) goto LAB_0098b9dc;
      __getptd();
      __getptd();
      p_Var3 = __getptd();
      p_Var3->_curexception = pEVar9;
      p_Var3 = __getptd();
      p_Var3->_curcontext = param_3;
      pEVar10 = param_8;
      if (param_8 == (EHRegistrationNode *)0x0) {
        pEVar10 = param_2;
      }
      _UnwindNestedFrames(pEVar10,pEVar9);
      pEVar9 = (EHExceptionRecord *)param_5;
      ___FrameUnwindToState(param_2,param_4,param_5,0xffffffff);
      CallUnexpected(*(_s_ESTypeList **)(pEVar9 + 0x1c));
      p_Var8 = param_5;
    }
  }
  if (*(int *)(p_Var8 + 0xc) != 0) {
    if (param_6 != '\0') {
LAB_0098b7dc:
                    /* WARNING: Subroutine does not return */
      terminate();
    }
    FindHandlerForForeignException(pEVar9,param_2,param_3,param_4,p_Var8,local_c,param_7,param_8);
  }
LAB_0098b9dc:
  p_Var3 = __getptd();
  if (p_Var3->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}



/* Library Function - Single Match
    ___InternalCxxFrameHandler
   
   Library: Visual Studio 2005 Release */

undefined4
___InternalCxxFrameHandler
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8)

{
  _ptiddata p_Var1;
  undefined4 uVar2;
  
  p_Var1 = __getptd();
  if ((((*(int *)((p_Var1->_setloc_data)._cacheout + 0x27) != 0) || (*(int *)param_1 == -0x1f928c9d)
       ) || (*(int *)param_1 == -0x7fffffda)) ||
     (((*(uint *)param_5 & 0x1fffffff) < 0x19930522 || (((byte)param_5[0x20] & 1) == 0)))) {
    if (((byte)param_1[4] & 0x66) == 0) {
      if ((*(int *)(param_5 + 0xc) != 0) ||
         ((0x19930520 < (*(uint *)param_5 & 0x1fffffff) && (*(int *)(param_5 + 0x1c) != 0)))) {
        if ((*(int *)param_1 == -0x1f928c9d) &&
           (((2 < *(uint *)(param_1 + 0x10) && (0x19930522 < *(uint *)(param_1 + 0x14))) &&
            (*(code **)(*(int *)(param_1 + 0x1c) + 8) != (code *)0x0)))) {
          uVar2 = (**(code **)(*(int *)(param_1 + 0x1c) + 8))
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return uVar2;
        }
        FindHandler(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
      }
    }
    else if ((*(int *)(param_5 + 4) != 0) && (param_6 == 0)) {
      ___FrameUnwindToState(param_2,param_4,param_5,0xffffffff);
    }
  }
  return 1;
}



undefined ** FUN_0098baf0(void)

{
  return &PTR_DAT_00b30e28;
}



/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock_file(FILE *_File)

{
  if (((FILE *)0xb30e27 < _File) && (_File < (FILE *)0xb31089)) {
    __lock(((int)&_File[-0x59872]._bufsiz >> 5) + 0x10);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}



/* Library Function - Single Match
    __lock_file2
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    __lock(_Index + 0x10);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



/* Library Function - Single Match
    __unlock_file
   
   Library: Visual Studio 2005 Release */

void __cdecl __unlock_file(FILE *_File)

{
  if (((FILE *)0xb30e27 < _File) && (_File < (FILE *)0xb31089)) {
    FUN_0098c8fb(((int)&_File[-0x59872]._bufsiz >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}



/* Library Function - Single Match
    __unlock_file2
   
   Library: Visual Studio 2005 Release */

void __cdecl __unlock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    FUN_0098c8fb(_Index + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2005 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if (((byte)DAT_00b310a8 & 1) != 0) {
    __NMSG_WRITE(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if (((byte)DAT_00b310a8 & 2) != 0) {
    local_2d4 = 0x10001;
    _memset(&local_32c,0,0x50);
    local_2dc.ExceptionRecord = &local_32c;
    local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
    local_32c.ExceptionCode = 0x40000015;
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    UnhandledExceptionFilter(&local_2dc);
  }
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



void FUN_0098bd5e(uint param_1,uint param_2)

{
  DAT_00b310a8 = ~param_2 & DAT_00b310a8 | param_1 & param_2;
  return;
}



/* Library Function - Single Match
    _xtoa_s@20
   
   Library: Visual Studio 2005 Release */

int xtoa_s(uint param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  uint in_EAX;
  int *piVar3;
  char *in_ECX;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  uint local_8;
  
  if (in_ECX == (char *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return 0x16;
  }
  if (param_1 == 0) {
LAB_0098bdae:
    piVar3 = __errno();
    iVar7 = 0x16;
  }
  else {
    *in_ECX = '\0';
    if ((param_3 != 0) + 1 < param_1) {
      if (0x22 < param_2 - 2) goto LAB_0098bdae;
      pcVar6 = in_ECX;
      if (param_3 != 0) {
        *in_ECX = '-';
        pcVar6 = in_ECX + 1;
        in_EAX = -in_EAX;
      }
      local_8 = (uint)(param_3 != 0);
      pcVar2 = pcVar6;
      do {
        pcVar4 = pcVar2;
        uVar1 = (ulonglong)in_EAX;
        in_EAX = in_EAX / param_2;
        cVar5 = (char)(uVar1 % (ulonglong)param_2);
        if ((uint)(uVar1 % (ulonglong)param_2) < 10) {
          cVar5 = cVar5 + '0';
        }
        else {
          cVar5 = cVar5 + 'W';
        }
        *pcVar4 = cVar5;
        local_8 = local_8 + 1;
      } while ((in_EAX != 0) && (pcVar2 = pcVar4 + 1, local_8 < param_1));
      if (local_8 < param_1) {
        pcVar4[1] = '\0';
        do {
          cVar5 = *pcVar4;
          *pcVar4 = *pcVar6;
          pcVar4 = pcVar4 + -1;
          *pcVar6 = cVar5;
          pcVar6 = pcVar6 + 1;
        } while (pcVar6 < pcVar4);
        return 0;
      }
      *in_ECX = '\0';
    }
    piVar3 = __errno();
    iVar7 = 0x22;
  }
  *piVar3 = iVar7;
  __invalid_parameter(0,0,0,0,0);
  return iVar7;
}



/* Library Function - Single Match
    __itoa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix)

{
  errno_t eVar1;
  undefined4 uVar2;
  
  if ((_Radix == 10) && (_Value < 0)) {
    uVar2 = 1;
    _Radix = 10;
  }
  else {
    uVar2 = 0;
  }
  eVar1 = xtoa_s(_Size,_Radix,uVar2);
  return eVar1;
}



/* Library Function - Single Match
    __encode_pointer
   
   Library: Visual Studio 2005 Release */

int __encode_pointer(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_00b310b0);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_00b310ac != -1)) {
    iVar3 = DAT_00b310ac;
    pcVar2 = TlsGetValue(DAT_00b310b0);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_0098bece;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_0098bece:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/* Library Function - Single Match
    __encoded_null
   
   Library: Visual Studio 2005 Release */

void __encoded_null(void)

{
  __encode_pointer(0);
  return;
}



/* Library Function - Single Match
    __decode_pointer
   
   Library: Visual Studio 2005 Release */

int __decode_pointer(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_00b310b0);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_00b310ac != -1)) {
    iVar3 = DAT_00b310ac;
    pcVar2 = TlsGetValue(DAT_00b310b0);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_0098bf3a;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_0098bf3a:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/* Library Function - Single Match
    ___set_flsgetvalue
   
   Library: Visual Studio 2005 Release */

void ___set_flsgetvalue(void)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_00b310b0);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = (LPVOID)__decode_pointer(DAT_00ba9e1c);
    TlsSetValue(DAT_00b310b0,pvVar1);
  }
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __initptd
   
   Library: Visual Studio 2005 Release */

void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  _Ptd->_pxcptacttab = &DAT_00b312c8;
  _Ptd->_holdrand = 1;
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"EncodePointer");
    *(FARPROC *)((_Ptd->_setloc_data)._cacheout + 0x1d) = pFVar1;
    pFVar1 = GetProcAddress(hModule,"DecodePointer");
    *(FARPROC *)((_Ptd->_setloc_data)._cacheout + 0x1f) = pFVar1;
  }
  _Ptd->_ownlocale = 1;
  *(undefined1 *)((_Ptd->_setloc_data)._cachein + 8) = 0x43;
  *(undefined1 *)((int)(_Ptd->_setloc_data)._cachein + 0x93) = 0x43;
  _Ptd->ptmbcinfo = (pthreadmbcinfo)&DAT_00b31390;
  InterlockedIncrement((LONG *)&DAT_00b31390);
  __lock(0xc);
  _Ptd->ptlocinfo = _Locale;
  if (_Locale == (pthreadlocinfo)0x0) {
    _Ptd->ptlocinfo = (pthreadlocinfo)PTR_DAT_00b31998;
  }
  ___addlocaleref(_Ptd->ptlocinfo);
  FUN_0098c069();
  return;
}



void FUN_0098c069(void)

{
  FUN_0098c8fb(0xc);
  return;
}



/* Library Function - Single Match
    __getptd_noexit
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd_noexit(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  _ptiddata _Ptd;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  dwErrCode = GetLastError();
  ___set_flsgetvalue();
  uVar4 = DAT_00b310ac;
  pcVar1 = TlsGetValue(DAT_00b310b0);
  _Ptd = (_ptiddata)(*pcVar1)(uVar4);
  if (_Ptd == (_ptiddata)0x0) {
    _Ptd = __calloc_crt(1,0x214);
    if (_Ptd != (_ptiddata)0x0) {
      pcVar1 = (code *)__decode_pointer(DAT_00ba9e20,DAT_00b310ac,_Ptd);
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        _free(_Ptd);
        _Ptd = (_ptiddata)0x0;
      }
      else {
        __initptd(_Ptd,(pthreadlocinfo)0x0);
        DVar3 = GetCurrentThreadId();
        _Ptd->_thandle = 0xffffffff;
        _Ptd->_tid = DVar3;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Ptd;
}



/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl terminate(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl terminate(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_terminate != (code *)0x0) {
    (*p_Var1->_terminate)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}



/* Library Function - Single Match
    void __cdecl unexpected(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl unexpected(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_unexpected != (code *)0x0) {
    (*p_Var1->_unexpected)();
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__decode_pointer(DAT_00ba9e28);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___report_gsfailure(void)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 unaff_retaddr;
  UINT uExitCode;
  undefined4 local_32c;
  undefined4 local_328;
  
  _DAT_00ba9f48 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_00ba9f4c = &stack0x00000004;
  _DAT_00ba9e88 = 0x10001;
  _DAT_00ba9e30 = 0xc0000409;
  _DAT_00ba9e34 = 1;
  local_32c = DAT_00b30aac;
  local_328 = DAT_00b30ab0;
  _DAT_00ba9e3c = unaff_retaddr;
  _DAT_00ba9f14 = in_GS;
  _DAT_00ba9f18 = in_FS;
  _DAT_00ba9f1c = in_ES;
  _DAT_00ba9f20 = in_DS;
  _DAT_00ba9f24 = unaff_EDI;
  _DAT_00ba9f28 = unaff_ESI;
  _DAT_00ba9f2c = unaff_EBX;
  _DAT_00ba9f30 = in_EDX;
  _DAT_00ba9f34 = in_ECX;
  _DAT_00ba9f38 = in_EAX;
  _DAT_00ba9f3c = unaff_EBP;
  DAT_00ba9f40 = unaff_retaddr;
  _DAT_00ba9f44 = in_CS;
  _DAT_00ba9f50 = in_SS;
  DAT_00ba9e80 = IsDebuggerPresent();
  FUN_009933a9(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_00aa49ac);
  if (DAT_00ba9e80 == 0) {
    FUN_009933a9(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __SEH_prolog4
   
   Library: Visual Studio */

void __SEH_prolog4(undefined4 param_1,int param_2)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  param_2 = -param_2;
  *(undefined4 *)((int)auStack_1c + param_2 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + param_2 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + param_2 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + param_2 + 4) = DAT_00b30aac ^ (uint)&stack0x00000008;
  *(undefined4 *)((int)auStack_1c + param_2) = unaff_retaddr;
  *unaff_FS_OFFSET = (int)local_8;
  return;
}



/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog4
   
   Library: Visual Studio */

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  
  *unaff_FS_OFFSET = unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}



void FUN_0098c5f9(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  param_3 = param_3 >> 7;
  do {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    uVar8 = param_2[8];
    uVar9 = param_2[9];
    uVar10 = param_2[10];
    uVar11 = param_2[0xb];
    uVar12 = param_2[0xc];
    uVar13 = param_2[0xd];
    uVar14 = param_2[0xe];
    uVar15 = param_2[0xf];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
    param_1[8] = uVar8;
    param_1[9] = uVar9;
    param_1[10] = uVar10;
    param_1[0xb] = uVar11;
    param_1[0xc] = uVar12;
    param_1[0xd] = uVar13;
    param_1[0xe] = uVar14;
    param_1[0xf] = uVar15;
    uVar1 = param_2[0x11];
    uVar2 = param_2[0x12];
    uVar3 = param_2[0x13];
    uVar4 = param_2[0x14];
    uVar5 = param_2[0x15];
    uVar6 = param_2[0x16];
    uVar7 = param_2[0x17];
    uVar8 = param_2[0x18];
    uVar9 = param_2[0x19];
    uVar10 = param_2[0x1a];
    uVar11 = param_2[0x1b];
    uVar12 = param_2[0x1c];
    uVar13 = param_2[0x1d];
    uVar14 = param_2[0x1e];
    uVar15 = param_2[0x1f];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar4;
    param_1[0x15] = uVar5;
    param_1[0x16] = uVar6;
    param_1[0x17] = uVar7;
    param_1[0x18] = uVar8;
    param_1[0x19] = uVar9;
    param_1[0x1a] = uVar10;
    param_1[0x1b] = uVar11;
    param_1[0x1c] = uVar12;
    param_1[0x1d] = uVar13;
    param_1[0x1e] = uVar14;
    param_1[0x1f] = uVar15;
    param_2 = param_2 + 0x20;
    param_1 = param_1 + 0x20;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return;
}



/* Library Function - Single Match
    __VEC_memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined4 * __VEC_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  
  uVar3 = (int)param_2 >> 0x1f;
  iVar1 = (((uint)param_2 ^ uVar3) - uVar3 & 0xf ^ uVar3) - uVar3;
  uVar3 = (int)param_1 >> 0x1f;
  uVar6 = ((uint)param_1 ^ uVar3) - uVar3 & 0xf ^ uVar3;
  if (iVar1 == 0 && uVar6 == uVar3) {
    uVar3 = param_3 & 0x7f;
    if (param_3 != uVar3) {
      FUN_0098c5f9(param_1,param_2,param_3 - uVar3);
    }
    if (uVar3 != 0) {
      puVar4 = (undefined1 *)((int)param_2 + (param_3 - uVar3));
      puVar7 = (undefined1 *)((int)param_1 + (param_3 - uVar3));
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
    }
  }
  else if (iVar1 == uVar6 - uVar3) {
    iVar1 = 0x10 - iVar1;
    puVar5 = param_2;
    puVar8 = param_1;
    for (iVar2 = iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    __VEC_memcpy((undefined1 *)((int)param_1 + iVar1),(undefined1 *)((int)param_2 + iVar1),
                 param_3 - iVar1);
  }
  else {
    puVar5 = param_1;
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  return param_1;
}



/* Library Function - Single Match
    _fastzero_I
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2019 */

void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2)

{
  param_2 = param_2 >> 7;
  do {
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    param_1[3] = (undefined1  [16])0x0;
    param_1[4] = (undefined1  [16])0x0;
    param_1[5] = (undefined1  [16])0x0;
    param_1[6] = (undefined1  [16])0x0;
    param_1[7] = (undefined1  [16])0x0;
    param_1 = param_1 + 8;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return;
}



/* Library Function - Single Match
    __VEC_memzero
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined1 * __VEC_memzero(undefined1 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  uVar2 = (int)param_1 >> 0x1f;
  iVar3 = (((uint)param_1 ^ uVar2) - uVar2 & 0xf ^ uVar2) - uVar2;
  if (iVar3 == 0) {
    uVar2 = param_3 & 0x7f;
    if (param_3 != uVar2) {
      fastzero_I(param_1,param_3 - uVar2);
    }
    if (uVar2 != 0) {
      puVar4 = param_1 + (param_3 - uVar2);
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else {
    iVar3 = 0x10 - iVar3;
    puVar4 = param_1;
    for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    __VEC_memzero(param_1 + iVar3,0,param_3 - iVar3);
  }
  return param_1;
}



void FUN_0098c8fb(int param_1)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_00b310c0 + param_1 * 8));
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  void *_Memory;
  int *piVar1;
  int iVar2;
  int local_20;
  
  iVar2 = 1;
  local_20 = 1;
  if (DAT_00baa2ac != 0) {
    piVar1 = (int *)(&DAT_00b310c0 + _LockNum * 8);
    if (*piVar1 == 0) {
      _Memory = __malloc_crt(0x18);
      if (_Memory == (void *)0x0) {
        piVar1 = __errno();
        *piVar1 = 0xc;
        iVar2 = 0;
      }
      else {
        __lock(10);
        if (*piVar1 == 0) {
          iVar2 = ___crtInitCritSecAndSpinCount(_Memory,4000);
          if (iVar2 == 0) {
            _free(_Memory);
            piVar1 = __errno();
            *piVar1 = 0xc;
            local_20 = 0;
          }
          else {
            *piVar1 = (int)_Memory;
          }
        }
        else {
          _free(_Memory);
        }
        FUN_0098c9ca();
        iVar2 = local_20;
      }
    }
    return iVar2;
  }
  __FF_MSGBANNER();
  __NMSG_WRITE(0x1e);
                    /* WARNING: Subroutine does not return */
  ___crtExitProcess(0xff);
}



void FUN_0098c9ca(void)

{
  FUN_0098c8fb(10);
  return;
}



/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if (*(int *)(&DAT_00b310c0 + _File * 8) == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_00b310c0 + _File * 8));
  return;
}



void thunk_FUN_0098ca70(void)

{
  FUN_0098ca70();
  return;
}



void FUN_0098ca70(int param_1)

{
  uint in_EAX;
  uint in_ECX;
  
  for (; (in_EAX < in_ECX && (0xfffff < (uint)(param_1 - *(int *)(in_EAX + 0xc))));
      in_EAX = in_EAX + 0x14) {
  }
  return;
}



/* Library Function - Single Match
    ___sbh_free_block
   
   Library: Visual Studio 2005 Release */

void ___sbh_free_block(uint *param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar6 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar4 = (int *)(uVar14 * 0x204 + 0x144 + uVar6);
  local_8 = *puVar12 - 1;
  if ((local_8 & 1) == 0) {
    puVar10 = (uint *)(local_8 + (int)puVar12);
    uVar13 = *puVar10;
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar13 & 1) == 0) {
      uVar9 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (puVar10[1] == puVar10[2]) {
        if (uVar9 < 0x20) {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar13;
      *(uint *)(puVar10[2] + 4) = puVar10[1];
      *(uint *)(puVar10[1] + 8) = puVar10[2];
    }
    puVar10 = (uint *)(((int)local_8 >> 4) + -1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) + -1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) + -1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      piVar1 = piVar4 + (int)puVar10 * 2;
      uVar13 = piVar1[1];
      puVar12[2] = (uint)piVar1;
      puVar12[1] = uVar13;
      piVar1[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar5 = *(char *)((int)puVar10 + uVar6 + 4);
        *(char *)((int)puVar10 + uVar6 + 4) = cVar5 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar5 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar5 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      if (DAT_00baa2a8 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_00baabd8 * 0x8000 + DAT_00baa2a8[3]),0x8000,0x4000);
        DAT_00baa2a8[2] = DAT_00baa2a8[2] | 0x80000000U >> ((byte)DAT_00baabd8 & 0x1f);
        *(undefined4 *)(DAT_00baa2a8[4] + 0xc4 + DAT_00baabd8 * 4) = 0;
        *(char *)(DAT_00baa2a8[4] + 0x43) = *(char *)(DAT_00baa2a8[4] + 0x43) + -1;
        if (*(char *)(DAT_00baa2a8[4] + 0x43) == '\0') {
          DAT_00baa2a8[1] = DAT_00baa2a8[1] & 0xfffffffe;
        }
        if (DAT_00baa2a8[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_00baa2a8[3],0,0x8000);
          HeapFree(DAT_00baa2ac,0,(LPVOID)DAT_00baa2a8[4]);
          _memmove(DAT_00baa2a8,DAT_00baa2a8 + 5,
                   (DAT_00baabc4 * 0x14 - (int)DAT_00baa2a8) + -0x14 + DAT_00baabc8);
          DAT_00baabc4 = DAT_00baabc4 + -1;
          if (DAT_00baa2a8 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_00baabd0 = DAT_00baabc8;
        }
      }
      DAT_00baa2a8 = param_1;
      DAT_00baabd8 = uVar14;
    }
  }
  return;
}



/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_00baabc4 == DAT_00baabd4) {
    pvVar1 = HeapReAlloc(DAT_00baa2ac,0,DAT_00baabc8,(DAT_00baabd4 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_00baabd4 = DAT_00baabd4 + 0x10;
    DAT_00baabc8 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_00baabc4 * 0x14 + (int)DAT_00baabc8);
  pvVar1 = HeapAlloc(DAT_00baa2ac,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_00baabc4 = DAT_00baabc4 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_00baa2ac,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}



/* Library Function - Single Match
    ___sbh_alloc_new_group
   
   Library: Visual Studio 2005 Release */

int ___sbh_alloc_new_group(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPVOID pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  LPVOID lpAddress;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar8 = 0;
  for (iVar3 = *(int *)(param_1 + 8); -1 < iVar3; iVar3 = iVar3 * 2) {
    iVar8 = iVar8 + 1;
  }
  iVar3 = iVar8 * 0x204 + 0x144 + iVar2;
  iVar7 = 0x3f;
  iVar4 = iVar3;
  do {
    *(int *)(iVar4 + 8) = iVar4;
    *(int *)(iVar4 + 4) = iVar4;
    iVar4 = iVar4 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  lpAddress = (LPVOID)(iVar8 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    iVar8 = -1;
  }
  else {
    if (lpAddress <= (LPVOID)((int)lpAddress + 0x7000U)) {
      piVar6 = (int *)((int)lpAddress + 0x10);
      iVar7 = ((uint)((int)((int)lpAddress + 0x7000U) - (int)lpAddress) >> 0xc) + 1;
      do {
        piVar6[-2] = -1;
        piVar6[0x3fb] = -1;
        *piVar6 = (int)(piVar6 + 0x3ff);
        piVar6[-1] = 0xff0;
        piVar6[1] = (int)(piVar6 + -0x401);
        piVar6[0x3fa] = 0xff0;
        piVar6 = piVar6 + 0x400;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(int *)(iVar3 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)((int)lpAddress + 0x14) = iVar3 + 0x1f8;
    *(int *)(iVar3 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)((int)lpAddress + 0x7010) = iVar3 + 0x1f8;
    *(undefined4 *)(iVar2 + 0x44 + iVar8 * 4) = 0;
    *(undefined4 *)(iVar2 + 0xc4 + iVar8 * 4) = 1;
    cVar1 = *(char *)(iVar2 + 0x43);
    *(char *)(iVar2 + 0x43) = cVar1 + '\x01';
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar8 & 0x1f));
  }
  return iVar8;
}



/* Library Function - Single Match
    ___sbh_resize_block
   
   Library: Visual Studio 2005 Release */

undefined4 ___sbh_resize_block(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar8 = param_1[4];
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar5 = uVar10 * 0x204 + 0x144 + uVar8;
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  param_3 = *(int *)(param_2 + -4) + -1;
  puVar9 = (uint *)(*(int *)(param_2 + -4) + -5 + param_2);
  uVar13 = *puVar9;
  if (param_3 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + param_3) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (puVar9[1] == puVar9[2]) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar8);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar2 = (uint *)(uVar8 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar8);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar8 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(uint *)(puVar9[2] + 4) = puVar9[1];
    *(uint *)(puVar9[1] + 8) = puVar9[2];
    iVar6 = uVar13 + (param_3 - uVar12);
    if (0 < iVar6) {
      uVar13 = (iVar6 >> 4) - 1;
      iVar3 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar5 = iVar5 + uVar13 * 8;
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
      *(int *)(iVar3 + 8) = iVar5;
      *(int *)(iVar5 + 4) = iVar3;
      *(int *)(*(int *)(iVar3 + 4) + 8) = iVar3;
      if (*(int *)(iVar3 + 4) == *(int *)(iVar3 + 8)) {
        cVar7 = *(char *)(uVar13 + 4 + uVar8);
        *(char *)(uVar13 + 4 + uVar8) = cVar7 + '\x01';
        if (uVar13 < 0x20) {
          if (cVar7 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> ((byte)uVar13 & 0x1f);
          }
          puVar9 = (uint *)(uVar8 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar7 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar13 - 0x20 & 0x1f);
          }
          puVar9 = (uint *)(uVar8 + 0xc4 + uVar10 * 4);
          uVar13 = uVar13 - 0x20;
        }
        *puVar9 = *puVar9 | 0x80000000U >> ((byte)uVar13 & 0x1f);
      }
      piVar4 = (int *)(param_2 + -4 + uVar12);
      *piVar4 = iVar6;
      *(int *)(iVar6 + -4 + (int)piVar4) = iVar6;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < param_3) {
    param_3 = param_3 - uVar12;
    *(uint *)(param_2 + -4) = uVar12 + 1;
    piVar4 = (int *)(param_2 + -4 + uVar12);
    uVar11 = (param_3 >> 4) - 1;
    piVar4[-1] = uVar12 + 1;
    if (0x3f < uVar11) {
      uVar11 = 0x3f;
    }
    if ((uVar13 & 1) == 0) {
      uVar12 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      if (puVar9[1] == puVar9[2]) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar8);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar2 = (uint *)(uVar8 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar8);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar8 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(uint *)(puVar9[2] + 4) = puVar9[1];
      *(uint *)(puVar9[1] + 8) = puVar9[2];
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar5 = iVar5 + uVar11 * 8;
    iVar6 = *(int *)(iVar5 + 4);
    piVar4[2] = iVar5;
    piVar4[1] = iVar6;
    *(int **)(iVar5 + 4) = piVar4;
    *(int **)(piVar4[1] + 8) = piVar4;
    if (piVar4[1] == piVar4[2]) {
      cVar7 = *(char *)(uVar11 + 4 + uVar8);
      *(char *)(uVar11 + 4 + uVar8) = cVar7 + '\x01';
      if (uVar11 < 0x20) {
        if (cVar7 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> ((byte)uVar11 & 0x1f);
        }
        puVar9 = (uint *)(uVar8 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar7 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar11 - 0x20 & 0x1f);
        }
        puVar9 = (uint *)(uVar8 + 0xc4 + uVar10 * 4);
        uVar11 = uVar11 - 0x20;
      }
      *puVar9 = *puVar9 | 0x80000000U >> ((byte)uVar11 & 0x1f);
    }
    *piVar4 = param_3;
    *(int *)(param_3 + -4 + (int)piVar4) = param_3;
  }
  return 1;
}



/* Library Function - Single Match
    ___sbh_alloc_block
   
   Library: Visual Studio 2005 Release */

int * ___sbh_alloc_block(uint *param_1)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint local_c;
  int local_8;
  
  puVar10 = DAT_00baabc8 + DAT_00baabc4 * 5;
  uVar8 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar9 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar7 = (byte)iVar9;
  param_1 = DAT_00baabd0;
  if (iVar9 < 0x20) {
    uVar16 = 0xffffffff >> (bVar7 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    uVar16 = 0;
    local_c = 0xffffffff >> (bVar7 - 0x20 & 0x1f);
  }
  for (; (param_1 < puVar10 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar16) == 0));
      param_1 = param_1 + 5) {
  }
  puVar14 = DAT_00baabc8;
  if (param_1 == puVar10) {
    for (; (puVar14 < DAT_00baabd0 && ((puVar14[1] & local_c) == 0 && (*puVar14 & uVar16) == 0));
        puVar14 = puVar14 + 5) {
    }
    param_1 = puVar14;
    if (puVar14 == DAT_00baabd0) {
      for (; (puVar14 < puVar10 && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
      }
      puVar15 = DAT_00baabc8;
      param_1 = puVar14;
      if (puVar14 == puVar10) {
        for (; (puVar15 < DAT_00baabd0 && (puVar15[2] == 0)); puVar15 = puVar15 + 5) {
        }
        param_1 = puVar15;
        if ((puVar15 == DAT_00baabd0) &&
           (param_1 = (uint *)___sbh_alloc_new_region(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      uVar6 = ___sbh_alloc_new_group(param_1);
      *(undefined4 *)param_1[4] = uVar6;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar5 = (int *)param_1[4];
  local_8 = *piVar5;
  if ((local_8 == -1) ||
     ((piVar5[local_8 + 0x31] & local_c) == 0 && (piVar5[local_8 + 0x11] & uVar16) == 0)) {
    local_8 = 0;
    puVar10 = (uint *)(piVar5 + 0x11);
    uVar12 = piVar5[0x31];
    while ((uVar12 & local_c) == 0 && (*puVar10 & uVar16) == 0) {
      local_8 = local_8 + 1;
      puVar14 = puVar10 + 0x21;
      puVar10 = puVar10 + 1;
      uVar12 = *puVar14;
    }
  }
  piVar3 = piVar5 + local_8 * 0x81 + 0x51;
  iVar9 = 0;
  uVar16 = piVar5[local_8 + 0x11] & uVar16;
  if (uVar16 == 0) {
    uVar16 = piVar5[local_8 + 0x31] & local_c;
    iVar9 = 0x20;
  }
  for (; -1 < (int)uVar16; uVar16 = uVar16 * 2) {
    iVar9 = iVar9 + 1;
  }
  piVar13 = (int *)piVar3[iVar9 * 2 + 1];
  iVar11 = *piVar13 - uVar8;
  iVar17 = (iVar11 >> 4) + -1;
  if (0x3f < iVar17) {
    iVar17 = 0x3f;
  }
  DAT_00baabd0 = param_1;
  if (iVar17 != iVar9) {
    if (piVar13[1] == piVar13[2]) {
      if (iVar9 < 0x20) {
        pcVar2 = (char *)((int)piVar5 + iVar9 + 4);
        uVar16 = ~(0x80000000U >> ((byte)iVar9 & 0x1f));
        piVar5[local_8 + 0x11] = uVar16 & piVar5[local_8 + 0x11];
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          *param_1 = *param_1 & uVar16;
        }
      }
      else {
        pcVar2 = (char *)((int)piVar5 + iVar9 + 4);
        uVar16 = ~(0x80000000U >> ((byte)iVar9 - 0x20 & 0x1f));
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] & uVar16;
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          param_1[1] = param_1[1] & uVar16;
        }
      }
    }
    *(int *)(piVar13[2] + 4) = piVar13[1];
    *(int *)(piVar13[1] + 8) = piVar13[2];
    if (iVar11 == 0) goto LAB_0098d4c0;
    piVar1 = piVar3 + iVar17 * 2;
    iVar9 = piVar1[1];
    piVar13[2] = (int)piVar1;
    piVar13[1] = iVar9;
    piVar1[1] = (int)piVar13;
    *(int **)(piVar13[1] + 8) = piVar13;
    if (piVar13[1] == piVar13[2]) {
      cVar4 = *(char *)(iVar17 + 4 + (int)piVar5);
      *(char *)(iVar17 + 4 + (int)piVar5) = cVar4 + '\x01';
      bVar7 = (byte)iVar17;
      if (iVar17 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar7 & 0x1f);
        }
        piVar5[local_8 + 0x11] = piVar5[local_8 + 0x11] | 0x80000000U >> (bVar7 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar7 - 0x20 & 0x1f);
        }
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] | 0x80000000U >> (bVar7 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar11 != 0) {
    *piVar13 = iVar11;
    *(int *)(iVar11 + -4 + (int)piVar13) = iVar11;
  }
LAB_0098d4c0:
  piVar13 = (int *)((int)piVar13 + iVar11);
  *piVar13 = uVar8 + 1;
  *(uint *)((int)piVar13 + (uVar8 - 4)) = uVar8 + 1;
  iVar9 = *piVar3;
  *piVar3 = iVar9 + 1;
  if (((iVar9 == 0) && (param_1 == DAT_00baa2a8)) && (local_8 == DAT_00baabd8)) {
    DAT_00baa2a8 = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar13 + 1;
}



/* Library Function - Single Match
    ___heap_select
   
   Library: Visual Studio 2005 Release */

undefined4 ___heap_select(void)

{
  int iVar1;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  iVar1 = __get_osplatform(&local_8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  iVar1 = __get_winmajor(&local_c);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if ((local_8 == 2) && (4 < local_c)) {
    return 1;
  }
  return 3;
}



/* Library Function - Single Match
    __NMSG_WRITE
   
   Library: Visual Studio 2005 Release */

void __cdecl __NMSG_WRITE(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  errno_t eVar3;
  DWORD DVar4;
  size_t sVar5;
  HANDLE hFile;
  uint uVar6;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_4;
  
  uVar6 = 0;
  do {
    if (param_1 == (&DAT_00b311e8)[uVar6 * 2]) break;
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x17);
  if (uVar6 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_00b30da8 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_4;
        puVar1 = (undefined4 *)(uVar6 * 8 + 0xb311ec);
        sVar5 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar5,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _strcpy_s(&DAT_00baa2b0,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_00baa3cd = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_00baa2c9,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_00baa2c9,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_00baa2c9);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_00baa2c9);
        eVar3 = _strncpy_s((char *)(sVar5 + 0xbaa28e),(int)&DAT_00baa5c4 - (int)(sVar5 + 0xbaa28e),
                           "...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_00baa2b0,0x314,"\n\n");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = _strcat_s(&DAT_00baa2b0,0x314,*(char **)(uVar6 * 8 + 0xb311ec));
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      ___crtMessageBoxA(&DAT_00baa2b0,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2005 Release */

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_00b30da8 != 1) {
      return;
    }
  }
  __NMSG_WRITE(0xfc);
  __NMSG_WRITE(0xff);
  return;
}



/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)__decode_pointer(DAT_00baa5c4);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



/* Library Function - Single Match
    __ValidateImageBase
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    return (uint)((short)*(int *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b);
  }
  return 0;
}



/* Library Function - Single Match
    __FindPESection
   
   Library: Visual Studio 2005 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  PBYTE pImageBase;
  
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if ((BVar1 != 0) &&
     (p_Var2 = __FindPESection(pImageBase,(int)pTarget - (int)pImageBase),
     p_Var2 != (PIMAGE_SECTION_HEADER)0x0)) {
    return ~(p_Var2->Characteristics >> 0x1f) & 1;
  }
  return 0;
}



/* Library Function - Single Match
    __XcptFilter
   
   Library: Visual Studio 2005 Release */

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  ulong *puVar1;
  code *pcVar2;
  void *pvVar3;
  ulong uVar4;
  _ptiddata p_Var5;
  int iVar6;
  ulong *puVar7;
  int iVar8;
  
  p_Var5 = __getptd_noexit();
  if (p_Var5 == (_ptiddata)0x0) {
    iVar6 = UnhandledExceptionFilter(_ExceptionPtr);
  }
  else {
    puVar1 = p_Var5->_pxcptacttab;
    puVar7 = puVar1;
    do {
      if (*puVar7 == _ExceptionNum) break;
      puVar7 = puVar7 + 3;
    } while (puVar7 < puVar1 + DAT_00b3134c * 3);
    if ((puVar1 + DAT_00b3134c * 3 <= puVar7) || (*puVar7 != _ExceptionNum)) {
      puVar7 = (ulong *)0x0;
    }
    if ((puVar7 == (ulong *)0x0) || (pcVar2 = (code *)puVar7[2], pcVar2 == (code *)0x0)) {
      iVar6 = UnhandledExceptionFilter(_ExceptionPtr);
    }
    else if (pcVar2 == (code *)0x5) {
      puVar7[2] = 0;
      iVar6 = 1;
    }
    else {
      if (pcVar2 != (code *)0x1) {
        pvVar3 = p_Var5->_tpxcptinfoptrs;
        p_Var5->_tpxcptinfoptrs = _ExceptionPtr;
        if (puVar7[1] == 8) {
          if (DAT_00b31340 < DAT_00b31344 + DAT_00b31340) {
            iVar8 = DAT_00b31340 * 0xc;
            iVar6 = DAT_00b31340;
            do {
              *(undefined4 *)(iVar8 + 8 + (int)p_Var5->_pxcptacttab) = 0;
              iVar6 = iVar6 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar6 < DAT_00b31344 + DAT_00b31340);
          }
          uVar4 = *puVar7;
          iVar6 = p_Var5->_tfpecode;
          if (uVar4 == 0xc000008e) {
            p_Var5->_tfpecode = 0x83;
          }
          else if (uVar4 == 0xc0000090) {
            p_Var5->_tfpecode = 0x81;
          }
          else if (uVar4 == 0xc0000091) {
            p_Var5->_tfpecode = 0x84;
          }
          else if (uVar4 == 0xc0000093) {
            p_Var5->_tfpecode = 0x85;
          }
          else if (uVar4 == 0xc000008d) {
            p_Var5->_tfpecode = 0x82;
          }
          else if (uVar4 == 0xc000008f) {
            p_Var5->_tfpecode = 0x86;
          }
          else if (uVar4 == 0xc0000092) {
            p_Var5->_tfpecode = 0x8a;
          }
          (*pcVar2)(8,p_Var5->_tfpecode);
          p_Var5->_tfpecode = iVar6;
        }
        else {
          puVar7[2] = 0;
          (*pcVar2)(puVar7[1]);
        }
        p_Var5->_tpxcptinfoptrs = pvVar3;
      }
      iVar6 = -1;
    }
  }
  return iVar6;
}



/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2005 Release */

uint __cdecl siglookup(uint param_1)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = param_1;
  do {
    if (*(int *)(uVar1 + 4) == in_EDX) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < DAT_00b3134c * 0xc + param_1);
  if ((DAT_00b3134c * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)__decode_pointer(DAT_00baa5d4);
  return p_Var1;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2005 Release */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  _ptiddata p_Var7;
  int local_34;
  void *local_30;
  int local_28;
  
  p_Var7 = (_ptiddata)0x0;
  bVar1 = false;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar6 = &DAT_00baa5cc;
        uVar5 = DAT_00baa5cc;
        goto LAB_0098db8d;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_0098db6b;
        if (_SigNum != 8) goto LAB_0098db4f;
      }
    }
    p_Var7 = __getptd_noexit();
    if (p_Var7 == (_ptiddata)0x0) {
      return -1;
    }
    iVar2 = siglookup(p_Var7->_pxcptacttab);
    puVar6 = (undefined4 *)(iVar2 + 8);
    pcVar4 = (code *)*puVar6;
  }
  else {
    if (_SigNum == 0xf) {
      puVar6 = &DAT_00baa5d8;
      uVar5 = DAT_00baa5d8;
    }
    else if (_SigNum == 0x15) {
      puVar6 = &DAT_00baa5d0;
      uVar5 = DAT_00baa5d0;
    }
    else {
      if (_SigNum != 0x16) {
LAB_0098db4f:
        piVar3 = __errno();
        *piVar3 = 0x16;
        __invalid_parameter(0,0,0,0,0);
        return -1;
      }
LAB_0098db6b:
      puVar6 = &DAT_00baa5d4;
      uVar5 = DAT_00baa5d4;
    }
LAB_0098db8d:
    bVar1 = true;
    pcVar4 = (code *)__decode_pointer(uVar5);
  }
  if (pcVar4 == (code *)0x1) {
    return 0;
  }
  if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (bVar1) {
    __lock(0);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = p_Var7->_tpxcptinfoptrs;
    p_Var7->_tpxcptinfoptrs = (void *)0x0;
    if (_SigNum == 8) {
      local_34 = p_Var7->_tfpecode;
      p_Var7->_tfpecode = 0x8c;
      goto LAB_0098dbf1;
    }
  }
  else {
LAB_0098dbf1:
    if (_SigNum == 8) {
      for (local_28 = DAT_00b31340; local_28 < DAT_00b31344 + DAT_00b31340; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + (int)p_Var7->_pxcptacttab) = 0;
      }
      goto LAB_0098dc2b;
    }
  }
  uVar5 = __encoded_null();
  *puVar6 = uVar5;
LAB_0098dc2b:
  FUN_0098dc4c();
  if (_SigNum == 8) {
    (*pcVar4)(8,p_Var7->_tfpecode);
  }
  else {
    (*pcVar4)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  p_Var7->_tpxcptinfoptrs = local_30;
  if (_SigNum == 8) {
    p_Var7->_tfpecode = local_34;
  }
  return 0;
}



void FUN_0098dc4c(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_0098c8fb(0);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___getlocaleinfo
   
   Library: Visual Studio 2005 Release */

int __cdecl
___getlocaleinfo(_locale_t _Locale,int _Lc_type,LPCWSTR _LocaleName,LCTYPE _FieldType,void *_Address
                )

{
  byte bVar1;
  bool bVar2;
  size_t sVar3;
  DWORD DVar4;
  LPSTR _LpLCData;
  char *_Dst;
  errno_t eVar5;
  int iVar6;
  byte *pbVar7;
  CHAR local_88 [32];
  undefined1 local_68 [96];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)local_68;
  if (_Lc_type != 1) {
    if (_Lc_type != 0) {
      return -1;
    }
    pbVar7 = &DAT_00baa5e4;
    iVar6 = ___crtGetLocaleInfoW(_Locale,_LocaleName,_FieldType,&DAT_00baa5e4,4,0);
    if (iVar6 != 0) {
      *(undefined1 *)_Address = 0;
      do {
        bVar1 = *pbVar7;
        iVar6 = _isdigit((uint)bVar1);
        if (iVar6 == 0) {
          return 0;
        }
        pbVar7 = pbVar7 + 2;
        *(byte *)_Address = *(char *)_Address * '\n' + bVar1 + -0x30;
      } while ((int)pbVar7 < 0xbaa5ec);
      return 0;
    }
    return -1;
  }
  _LpLCData = local_88;
  bVar2 = false;
  sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,_LpLCData,0x80);
  if (sVar3 == 0) {
    DVar4 = GetLastError();
    if (DVar4 != 0x7a) {
      return -1;
    }
    sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,(LPSTR)0x0,0);
    if (sVar3 == 0) {
      return -1;
    }
    _LpLCData = __calloc_crt(sVar3,1);
    if (_LpLCData == (LPSTR)0x0) {
      return -1;
    }
    bVar2 = true;
    sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,_LpLCData,sVar3);
    if (sVar3 == 0) goto LAB_0098dd55;
  }
  _Dst = __calloc_crt(sVar3,1);
  *(char **)_Address = _Dst;
  if (_Dst != (char *)0x0) {
    eVar5 = _strncpy_s(_Dst,sVar3,_LpLCData,sVar3 - 1);
    if (eVar5 == 0) {
      if (bVar2) {
        _free(_LpLCData);
      }
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (!bVar2) {
    return -1;
  }
LAB_0098dd55:
  _free(_LpLCData);
  return -1;
}



/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___crtInitCritSecAndSpinCount
   
   Library: Visual Studio 2005 Release */

int ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  HMODULE hModule;
  int local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00affea8;
  uStack_c = 0x98de1c;
  local_20[0] = 0;
  pcVar1 = (code *)__decode_pointer(DAT_00baa5f0);
  if (pcVar1 != (FARPROC)0x0) goto LAB_0098de86;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_0098de75:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_0098de75;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_0098de75;
  }
  DAT_00baa5f0 = __encode_pointer(pcVar1);
LAB_0098de86:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl type_info::_Type_info_dtor(class type_info *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl type_info::_Type_info_dtor(type_info *param_1)

{
  int *_Memory;
  int *piVar1;
  int *piVar2;
  
  __lock(0xe);
  _Memory = DAT_00baa5f8;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_00baa5f4;
    do {
      piVar2 = piVar1;
      if (DAT_00baa5f8 == (int *)0x0) goto LAB_0098df19;
      piVar1 = DAT_00baa5f8;
    } while (*DAT_00baa5f8 != *(int *)(param_1 + 4));
    piVar2[1] = DAT_00baa5f8[1];
    _free(_Memory);
LAB_0098df19:
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_0098df3c();
  return;
}



void FUN_0098df3c(void)

{
  FUN_0098c8fb(0xe);
  return;
}



/* Library Function - Single Match
    _strcmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_0098df94;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_0098df60;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_0098df94;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_0098df94;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_0098df60:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_0098df94:
  return (uint)bVar5 * -2 + 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __stbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __stbuf(FILE *_File)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  
  iVar3 = __fileno(_File);
  iVar3 = __isatty(iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_0098baf0();
  if (_File == (FILE *)(iVar3 + 0x20)) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0098baf0();
    if (_File != (FILE *)(iVar3 + 0x40)) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_00ba9e14 = _DAT_00ba9e14 + 1;
  if ((_File->_flag & 0x10c) != 0) {
    return 0;
  }
  piVar1 = &DAT_00baa5fc + iVar3;
  if (*piVar1 == 0) {
    pvVar4 = __malloc_crt(0x1000);
    *piVar1 = (int)pvVar4;
    if (pvVar4 == (void *)0x0) {
      _File->_base = (char *)&_File->_charbuf;
      _File->_ptr = (char *)&_File->_charbuf;
      _File->_bufsiz = 2;
      _File->_cnt = 2;
      goto LAB_0098e05c;
    }
  }
  pcVar2 = (char *)*piVar1;
  _File->_base = pcVar2;
  _File->_ptr = pcVar2;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
LAB_0098e05c:
  _File->_flag = _File->_flag | 0x1102;
  return 1;
}



/* Library Function - Single Match
    __ftbuf
   
   Library: Visual Studio 2005 Release */

void __cdecl __ftbuf(int _Flag,FILE *_File)

{
  if ((_Flag != 0) && ((_File->_flag & 0x1000) != 0)) {
    __flush(_File);
    _File->_flag = _File->_flag & 0xffffeeff;
    _File->_bufsiz = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
  }
  return;
}



/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2005 Release */

void __cdecl write_string(int param_1)

{
  int *in_EAX;
  int *piVar1;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    while (0 < param_1) {
      param_1 = param_1 + -1;
      write_char();
      if (*in_EAX == -1) {
        piVar1 = __errno();
        if (*piVar1 != 0x2a) {
          return;
        }
        write_char();
      }
    }
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __output_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __output_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  byte bVar1;
  wchar_t _WCh;
  short *psVar2;
  wchar_t *pwVar3;
  ulonglong uVar4;
  FILE *pFVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  code *pcVar10;
  errno_t eVar11;
  int extraout_ECX;
  byte *pbVar12;
  size_t sVar13;
  wchar_t *pwVar14;
  bool bVar15;
  longlong lVar16;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  int local_270;
  int local_26c [2];
  size_t local_264;
  localeinfo_struct local_260;
  int local_258;
  char local_254;
  wchar_t *local_250;
  int local_24c;
  int local_248;
  byte *local_244;
  int local_240;
  int local_23c;
  int local_238;
  undefined1 local_234;
  char local_233;
  int local_230;
  FILE *local_22c;
  wchar_t *local_228;
  size_t local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  wchar_t local_210 [10];
  undefined1 local_1fc [491];
  undefined2 local_11;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)local_1fc;
  local_22c = _File;
  local_228 = (wchar_t *)_ArgList;
  local_248 = 0;
  local_214 = 0;
  local_23c = 0;
  local_21c = 0;
  local_238 = 0;
  local_24c = 0;
  local_240 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_260,_Locale);
  if (local_22c == (FILE *)0x0) goto LAB_0098e147;
  if ((local_22c->_flag & 0x40) == 0) {
    iVar7 = __fileno(local_22c);
    if ((iVar7 == -1) || (iVar7 = __fileno(local_22c), iVar7 == -2)) {
      puVar9 = &DAT_00b31368;
    }
    else {
      iVar7 = __fileno(local_22c);
      uVar8 = __fileno(local_22c);
      puVar9 = (undefined *)((uVar8 & 0x1f) * 0x28 + (&DAT_00baaac0)[iVar7 >> 5]);
    }
    if ((puVar9[0x24] & 0x7f) != 0) goto LAB_0098e147;
    iVar7 = __fileno(local_22c);
    if ((iVar7 == -1) || (iVar7 = __fileno(local_22c), iVar7 == -2)) {
      puVar9 = &DAT_00b31368;
    }
    else {
      iVar7 = __fileno(local_22c);
      uVar8 = __fileno(local_22c);
      puVar9 = (undefined *)((uVar8 & 0x1f) * 0x28 + (&DAT_00baaac0)[iVar7 >> 5]);
    }
    if ((puVar9[0x24] & 0x80) != 0) goto LAB_0098e147;
  }
  if (_Format != (char *)0x0) {
    local_215 = *_Format;
    local_270 = 0;
    local_230 = 0;
    local_224 = 0;
    local_250 = (wchar_t *)0x0;
    do {
      if ((local_215 == 0) || (pbVar12 = (byte *)(_Format + 1), local_230 < 0)) {
        if (local_254 == '\0') {
          return local_230;
        }
        *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
        return local_230;
      }
      if ((byte)(local_215 - 0x20) < 0x59) {
        uVar8 = (byte)"InitializeCriticalSectionAndSpinCount"[(char)local_215 + 0x18] & 0xf;
      }
      else {
        uVar8 = 0;
      }
      local_270 = (int)(char)(&DAT_00aa4fa0)[uVar8 * 8 + local_270] >> 4;
      local_244 = pbVar12;
      switch(local_270) {
      case 0:
switchD_0098e289_caseD_0:
        local_240 = 0;
        iVar7 = __isleadbyte_l((uint)local_215,&local_260);
        if (iVar7 != 0) {
          write_char();
          local_244 = (byte *)(_Format + 2);
          if (*pbVar12 == 0) {
LAB_0098ea1d:
            piVar6 = __errno();
            *piVar6 = 0x16;
            goto LAB_0098e157;
          }
        }
        write_char();
        break;
      case 1:
        local_21c = -1;
        local_274 = 0;
        local_24c = 0;
        local_23c = 0;
        local_238 = 0;
        local_214 = 0;
        local_240 = 0;
        break;
      case 2:
        if (local_215 == 0x20) {
          local_214 = local_214 | 2;
        }
        else if (local_215 == 0x23) {
          local_214 = local_214 | 0x80;
        }
        else if (local_215 == 0x2b) {
          local_214 = local_214 | 1;
        }
        else if (local_215 == 0x2d) {
          local_214 = local_214 | 4;
        }
        else if (local_215 == 0x30) {
          local_214 = local_214 | 8;
        }
        break;
      case 3:
        if (local_215 == 0x2a) {
          local_228 = (wchar_t *)((int)_ArgList + 4);
          local_23c = *(int *)_ArgList;
          if (local_23c < 0) {
            local_214 = local_214 | 4;
            local_23c = -local_23c;
          }
        }
        else {
          local_23c = local_23c * 10 + -0x30 + (int)(char)local_215;
        }
        break;
      case 4:
        local_21c = 0;
        break;
      case 5:
        if (local_215 == 0x2a) {
          local_228 = (wchar_t *)((int)_ArgList + 4);
          local_21c = *(int *)_ArgList;
          if (local_21c < 0) {
            local_21c = -1;
          }
        }
        else {
          local_21c = local_21c * 10 + -0x30 + (int)(char)local_215;
        }
        break;
      case 6:
        if (local_215 == 0x49) {
          bVar1 = *pbVar12;
          if ((bVar1 == 0x36) && (_Format[2] == 0x34)) {
            local_214 = local_214 | 0x8000;
            local_244 = (byte *)(_Format + 3);
          }
          else if ((bVar1 == 0x33) && (_Format[2] == 0x32)) {
            local_214 = local_214 & 0xffff7fff;
            local_244 = (byte *)(_Format + 3);
          }
          else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                   ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
            local_270 = 0;
            goto switchD_0098e289_caseD_0;
          }
        }
        else if (local_215 == 0x68) {
          local_214 = local_214 | 0x20;
        }
        else if (local_215 == 0x6c) {
          if (*pbVar12 == 0x6c) {
            local_214 = local_214 | 0x1000;
            local_244 = (byte *)(_Format + 2);
          }
          else {
            local_214 = local_214 | 0x10;
          }
        }
        else if (local_215 == 0x77) {
          local_214 = local_214 | 0x800;
        }
        break;
      case 7:
        if ((char)local_215 < 'e') {
          if (local_215 == 100) {
LAB_0098e668:
            local_214 = local_214 | 0x40;
LAB_0098e66c:
            local_224 = 10;
LAB_0098e673:
            if (((short)local_214 < 0) || ((local_214 & 0x1000) != 0)) {
              uVar8 = *(uint *)_ArgList;
              iVar7 = *(int *)((int)_ArgList + 4);
              local_228 = (wchar_t *)((int)_ArgList + 8);
            }
            else {
              local_228 = (wchar_t *)((int)_ArgList + 4);
              if ((local_214 & 0x20) == 0) {
                uVar8 = *(uint *)_ArgList;
                if ((local_214 & 0x40) == 0) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = (int)uVar8 >> 0x1f;
                }
              }
              else {
                if ((local_214 & 0x40) == 0) {
                  uVar8 = (uint)(ushort)*(wchar_t *)_ArgList;
                }
                else {
                  uVar8 = (uint)*(wchar_t *)_ArgList;
                }
                iVar7 = (int)uVar8 >> 0x1f;
              }
            }
            if ((((local_214 & 0x40) != 0) && (iVar7 < 1)) && (iVar7 < 0)) {
              bVar15 = uVar8 != 0;
              uVar8 = -uVar8;
              iVar7 = -(iVar7 + (uint)bVar15);
              local_214 = local_214 | 0x100;
            }
            if ((local_214 & 0x9000) == 0) {
              iVar7 = 0;
            }
            lVar16 = CONCAT44(iVar7,uVar8);
            if (local_21c < 0) {
              local_21c = 1;
            }
            else {
              local_214 = local_214 & 0xfffffff7;
              if (0x200 < local_21c) {
                local_21c = 0x200;
              }
            }
            if (uVar8 == 0 && iVar7 == 0) {
              local_238 = 0;
            }
            pwVar14 = &local_11;
            while( true ) {
              uVar4 = (ulonglong)lVar16 >> 0x20;
              iVar7 = local_21c + -1;
              if ((local_21c < 1) && (lVar16 == 0)) break;
              local_21c = iVar7;
              lVar16 = __aulldvrm(lVar16,local_224,(int)local_224 >> 0x1f);
              iVar7 = extraout_ECX + 0x30;
              if (0x39 < iVar7) {
                iVar7 = iVar7 + local_248;
              }
              *(char *)pwVar14 = (char)iVar7;
              pwVar14 = (wchar_t *)((int)pwVar14 + -1);
              local_264 = (size_t)uVar4;
            }
            local_224 = (int)&local_11 + -(int)pwVar14;
            local_220 = (wchar_t *)((int)pwVar14 + 1);
            local_21c = iVar7;
            if (((local_214 & 0x200) != 0) && ((local_224 == 0 || (*(char *)local_220 != '0')))) {
              *(char *)pwVar14 = '0';
              local_224 = (int)&local_11 + -(int)pwVar14 + 1;
              local_220 = pwVar14;
            }
          }
          else if ((char)local_215 < 'T') {
            if (local_215 == 0x53) {
              if ((local_214 & 0x830) == 0) {
                local_214 = local_214 | 0x800;
              }
              goto LAB_0098e4f1;
            }
            if (local_215 == 0x41) {
LAB_0098e49d:
              local_215 = local_215 + 0x20;
              local_274 = 1;
LAB_0098e4aa:
              local_214 = local_214 | 0x40;
              local_264 = 0x200;
              pwVar14 = local_210;
              sVar13 = local_264;
              pwVar3 = local_210;
              if (local_21c < 0) {
                local_21c = 6;
              }
              else if (local_21c == 0) {
                if (local_215 == 0x67) {
                  local_21c = 1;
                }
              }
              else {
                if (0x200 < local_21c) {
                  local_21c = 0x200;
                }
                if (0xa3 < local_21c) {
                  sVar13 = local_21c + 0x15d;
                  local_220 = local_210;
                  local_250 = __malloc_crt(sVar13);
                  pwVar14 = local_250;
                  pwVar3 = local_250;
                  if (local_250 == (wchar_t *)0x0) {
                    local_21c = 0xa3;
                    pwVar14 = local_210;
                    sVar13 = local_264;
                    pwVar3 = local_220;
                  }
                }
              }
              local_220 = pwVar3;
              local_264 = sVar13;
              local_27c = *(undefined4 *)_ArgList;
              local_228 = (wchar_t *)((int)_ArgList + 8);
              local_278 = *(undefined4 *)((int)_ArgList + 4);
              pcVar10 = (code *)__decode_pointer(PTR_LAB_00b312b8,&local_27c,pwVar14,local_264,
                                                 (int)(char)local_215,local_21c,local_274,&local_260
                                                );
              (*pcVar10)();
              uVar8 = local_214 & 0x80;
              if ((uVar8 != 0) && (local_21c == 0)) {
                pcVar10 = (code *)__decode_pointer(PTR_LAB_00b312c4,pwVar14,&local_260);
                (*pcVar10)();
              }
              if ((local_215 == 0x67) && (uVar8 == 0)) {
                pcVar10 = (code *)__decode_pointer(PTR_LAB_00b312c0,pwVar14,&local_260);
                (*pcVar10)();
              }
              if ((char)*pwVar14 == '-') {
                local_214 = local_214 | 0x100;
                local_220 = (wchar_t *)((int)pwVar14 + 1);
                pwVar14 = local_220;
              }
LAB_0098e5de:
              local_224 = _strlen((char *)pwVar14);
            }
            else if (local_215 == 0x43) {
              if ((local_214 & 0x830) == 0) {
                local_214 = local_214 | 0x800;
              }
LAB_0098e54e:
              local_228 = (wchar_t *)((int)_ArgList + 4);
              if ((local_214 & 0x810) == 0) {
                local_210[0]._0_1_ = (char)*(wchar_t *)_ArgList;
                local_224 = 1;
              }
              else {
                eVar11 = _wctomb_s((int *)&local_224,(char *)local_210,0x200,*(wchar_t *)_ArgList);
                if (eVar11 != 0) {
                  local_24c = 1;
                }
              }
              local_220 = local_210;
            }
            else if ((local_215 == 0x45) || (local_215 == 0x47)) goto LAB_0098e49d;
          }
          else {
            if (local_215 == 0x58) goto LAB_0098e773;
            if (local_215 == 0x5a) {
              psVar2 = *(short **)_ArgList;
              local_228 = (wchar_t *)((int)_ArgList + 4);
              pwVar14 = (wchar_t *)PTR_s__null__00b31360;
              local_220 = (wchar_t *)PTR_s__null__00b31360;
              if ((psVar2 == (short *)0x0) ||
                 (pwVar3 = *(wchar_t **)(psVar2 + 2), pwVar3 == (wchar_t *)0x0)) goto LAB_0098e5de;
              local_224 = (size_t)*psVar2;
              local_220 = pwVar3;
              if ((local_214 & 0x800) == 0) {
                local_240 = 0;
              }
              else {
                local_224 = (int)local_224 / 2;
                local_240 = 1;
              }
            }
            else {
              if (local_215 == 0x61) goto LAB_0098e4aa;
              if (local_215 == 99) goto LAB_0098e54e;
            }
          }
LAB_0098e8ec:
          if (local_24c == 0) {
            if ((local_214 & 0x40) != 0) {
              if ((local_214 & 0x100) == 0) {
                if ((local_214 & 1) == 0) {
                  if ((local_214 & 2) == 0) goto LAB_0098e922;
                  local_234 = 0x20;
                }
                else {
                  local_234 = 0x2b;
                }
              }
              else {
                local_234 = 0x2d;
              }
              local_238 = 1;
            }
LAB_0098e922:
            iVar7 = (local_23c - local_224) - local_238;
            if ((local_214 & 0xc) == 0) {
              write_multi_char(0x20,iVar7,local_22c);
            }
            pFVar5 = local_22c;
            write_string(local_238);
            if (((local_214 & 8) != 0) && ((local_214 & 4) == 0)) {
              write_multi_char(0x30,iVar7,pFVar5);
            }
            if ((local_240 == 0) || ((int)local_224 < 1)) {
              write_string(local_224);
            }
            else {
              local_264 = local_224;
              pwVar14 = local_220;
              do {
                _WCh = *pwVar14;
                local_264 = local_264 - 1;
                pwVar14 = pwVar14 + 1;
                eVar11 = _wctomb_s(local_26c,(char *)((int)&local_11 + 1),6,_WCh);
                if ((eVar11 != 0) || (local_26c[0] == 0)) {
                  local_230 = -1;
                  break;
                }
                write_string(local_26c[0]);
              } while (local_264 != 0);
            }
            if ((-1 < local_230) && ((local_214 & 4) != 0)) {
              write_multi_char(0x20,iVar7,pFVar5);
            }
          }
        }
        else {
          if ('p' < (char)local_215) {
            if (local_215 == 0x73) {
LAB_0098e4f1:
              iVar7 = local_21c;
              if (local_21c == -1) {
                iVar7 = 0x7fffffff;
              }
              local_228 = (wchar_t *)((int)_ArgList + 4);
              local_220 = *(wchar_t **)_ArgList;
              if ((local_214 & 0x810) == 0) {
                pwVar14 = local_220;
                if (local_220 == (wchar_t *)0x0) {
                  pwVar14 = (wchar_t *)PTR_s__null__00b31360;
                  local_220 = (wchar_t *)PTR_s__null__00b31360;
                }
                for (; (iVar7 != 0 && (iVar7 = iVar7 + -1, (char)*pwVar14 != '\0'));
                    pwVar14 = (wchar_t *)((int)pwVar14 + 1)) {
                }
                local_224 = (int)pwVar14 - (int)local_220;
              }
              else {
                if (local_220 == (wchar_t *)0x0) {
                  local_220 = (wchar_t *)PTR_u__null__00b31364;
                }
                local_240 = 1;
                for (pwVar14 = local_220; (iVar7 != 0 && (iVar7 = iVar7 + -1, *pwVar14 != L'\0'));
                    pwVar14 = pwVar14 + 1) {
                }
                local_224 = (int)pwVar14 - (int)local_220 >> 1;
              }
              goto LAB_0098e8ec;
            }
            if (local_215 == 0x75) goto LAB_0098e66c;
            if (local_215 != 0x78) goto LAB_0098e8ec;
            local_248 = 0x27;
LAB_0098e799:
            local_224 = 0x10;
            if ((local_214 & 0x80) != 0) {
              local_233 = (char)local_248 + 'Q';
              local_234 = 0x30;
              local_238 = 2;
            }
            goto LAB_0098e673;
          }
          if (local_215 == 0x70) {
            local_21c = 8;
LAB_0098e773:
            local_248 = 7;
            goto LAB_0098e799;
          }
          if ((char)local_215 < 'e') goto LAB_0098e8ec;
          if ((char)local_215 < 'h') goto LAB_0098e4aa;
          if (local_215 == 0x69) goto LAB_0098e668;
          if (local_215 != 0x6e) {
            if (local_215 != 0x6f) goto LAB_0098e8ec;
            local_224 = 8;
            if ((local_214 & 0x80) != 0) {
              local_214 = local_214 | 0x200;
            }
            goto LAB_0098e673;
          }
          piVar6 = *(int **)_ArgList;
          local_228 = (wchar_t *)((int)_ArgList + 4);
          iVar7 = __get_printf_count_output();
          if (iVar7 == 0) goto LAB_0098ea1d;
          if ((local_214 & 0x20) == 0) {
            *piVar6 = local_230;
          }
          else {
            *(undefined2 *)piVar6 = (undefined2)local_230;
          }
          local_24c = 1;
        }
        if (local_250 != (wchar_t *)0x0) {
          _free(local_250);
          local_250 = (wchar_t *)0x0;
        }
      }
      local_215 = *local_244;
      _Format = (char *)local_244;
      _ArgList = (va_list)local_228;
    } while( true );
  }
LAB_0098e147:
  piVar6 = __errno();
  *piVar6 = 0x16;
LAB_0098e157:
  __invalid_parameter(0,0,0,0,0);
  if (local_254 != '\0') {
    *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
  }
  return -1;
}



/* Library Function - Single Match
    __flsbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  char *_Buf;
  char *pcVar1;
  FILE *_File_00;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int unaff_EDI;
  uint uVar5;
  longlong lVar6;
  uint local_8;
  
  _File_00 = _File;
  _File = (FILE *)__fileno(_File);
  uVar5 = _File_00->_flag;
  if ((uVar5 & 0x82) == 0) {
    piVar2 = __errno();
    *piVar2 = 9;
LAB_0098eaa3:
    _File_00->_flag = _File_00->_flag | 0x20;
    return -1;
  }
  if ((uVar5 & 0x40) != 0) {
    piVar2 = __errno();
    *piVar2 = 0x22;
    goto LAB_0098eaa3;
  }
  if ((uVar5 & 1) != 0) {
    _File_00->_cnt = 0;
    if ((uVar5 & 0x10) == 0) {
      _File_00->_flag = uVar5 | 0x20;
      return -1;
    }
    _File_00->_ptr = _File_00->_base;
    _File_00->_flag = uVar5 & 0xfffffffe;
  }
  uVar5 = _File_00->_flag;
  _File_00->_flag = uVar5 & 0xffffffef | 2;
  _File_00->_cnt = 0;
  local_8 = 0;
  if (((uVar5 & 0x10c) == 0) &&
     (((iVar3 = FUN_0098baf0(), _File_00 != (FILE *)(iVar3 + 0x20) &&
       (iVar3 = FUN_0098baf0(), _File_00 != (FILE *)(iVar3 + 0x40))) ||
      (iVar3 = __isatty((int)_File), iVar3 == 0)))) {
    __getbuf(_File_00);
  }
  if ((_File_00->_flag & 0x108) == 0) {
    uVar5 = 1;
    local_8 = __write((int)_File,&_Ch,1);
  }
  else {
    _Buf = _File_00->_base;
    pcVar1 = _File_00->_ptr;
    _File_00->_ptr = _Buf + 1;
    uVar5 = (int)pcVar1 - (int)_Buf;
    _File_00->_cnt = _File_00->_bufsiz + -1;
    if ((int)uVar5 < 1) {
      if ((_File == (FILE *)0xffffffff) || (_File == (FILE *)0xfffffffe)) {
        puVar4 = &DAT_00b31368;
      }
      else {
        puVar4 = (undefined *)(((uint)_File & 0x1f) * 0x28 + (&DAT_00baaac0)[(int)_File >> 5]);
      }
      if (((puVar4[4] & 0x20) != 0) &&
         (lVar6 = __lseeki64((int)_File,0x200000000,unaff_EDI), lVar6 == -1)) goto LAB_0098ebc9;
    }
    else {
      local_8 = __write((int)_File,_Buf,uVar5);
    }
    *_File_00->_base = (char)_Ch;
  }
  if (local_8 == uVar5) {
    return _Ch & 0xff;
  }
LAB_0098ebc9:
  _File_00->_flag = _File_00->_flag | 0x20;
  return -1;
}



/* Library Function - Single Match
    __close_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __close_nolock(int _FileHandle)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  iVar1 = __get_osfhandle(_FileHandle);
  if (iVar1 != -1) {
    if (((_FileHandle == 1) && ((*(byte *)(DAT_00baaac0 + 0x54) & 1) != 0)) ||
       ((_FileHandle == 2 && ((*(byte *)(DAT_00baaac0 + 0x2c) & 1) != 0)))) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_0098ec3e;
    }
    hObject = (HANDLE)__get_osfhandle(_FileHandle);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_0098ec40;
    }
  }
LAB_0098ec3e:
  DVar4 = 0;
LAB_0098ec40:
  __free_osfhnd(_FileHandle);
  *(undefined1 *)((&DAT_00baaac0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x28) = 0;
  if (DVar4 == 0) {
    iVar5 = 0;
  }
  else {
    __dosmaperr(DVar4);
    iVar5 = -1;
  }
  return iVar5;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __close
   
   Library: Visual Studio 2005 Release */

int __cdecl __close(int _FileHandle)

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
          local_20 = -1;
        }
        else {
          local_20 = __close_nolock(_FileHandle);
        }
        FUN_0098ed36();
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



void FUN_0098ed36(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2005 Release */

int __cdecl __fileno(FILE *_File)

{
  int *piVar1;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return -1;
  }
  return _File->_file;
}



/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2005 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    _free(_File->_base);
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



/* Library Function - Single Match
    __filbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __filbuf(FILE *_File)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  char *_DstBuf;
  
  if (_File == (FILE *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else {
    uVar4 = _File->_flag;
    if (((uVar4 & 0x83) != 0) && ((uVar4 & 0x40) == 0)) {
      if ((uVar4 & 2) == 0) {
        _File->_flag = uVar4 | 1;
        if ((uVar4 & 0x10c) == 0) {
          __getbuf(_File);
        }
        else {
          _File->_ptr = _File->_base;
        }
        uVar4 = _File->_bufsiz;
        _DstBuf = _File->_base;
        iVar3 = __fileno(_File);
        iVar3 = __read(iVar3,_DstBuf,uVar4);
        _File->_cnt = iVar3;
        if ((iVar3 != 0) && (iVar3 != -1)) {
          if ((_File->_flag & 0x82) == 0) {
            iVar3 = __fileno(_File);
            if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
              puVar5 = &DAT_00b31368;
            }
            else {
              iVar3 = __fileno(_File);
              uVar4 = __fileno(_File);
              puVar5 = (undefined *)((uVar4 & 0x1f) * 0x28 + (&DAT_00baaac0)[iVar3 >> 5]);
            }
            if ((puVar5[4] & 0x82) == 0x82) {
              _File->_flag = _File->_flag | 0x2000;
            }
          }
          if (((_File->_bufsiz == 0x200) && ((_File->_flag & 8U) != 0)) &&
             ((_File->_flag & 0x400U) == 0)) {
            _File->_bufsiz = 0x1000;
          }
          _File->_cnt = _File->_cnt + -1;
          bVar1 = *_File->_ptr;
          _File->_ptr = _File->_ptr + 1;
          return (uint)bVar1;
        }
        _File->_flag = _File->_flag | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
        _File->_cnt = 0;
      }
      else {
        _File->_flag = uVar4 | 0x20;
      }
    }
  }
  return -1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __openfile
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl __openfile(char *_Filename,char *_Mode,int _ShFlag,FILE *_File)

{
  char cVar1;
  bool bVar2;
  uchar uVar3;
  int *piVar4;
  int iVar5;
  errno_t eVar6;
  char *pcVar7;
  uchar *_Str2;
  uchar *_Str1;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00baa7b8;
  local_10 = 0;
  local_c = 0;
  local_14 = 0;
  for (pcVar7 = _Mode; *pcVar7 == ' '; pcVar7 = pcVar7 + 1) {
  }
  cVar1 = *pcVar7;
  if (cVar1 == 'a') {
    _Mode = (char *)0x109;
LAB_0098f165:
    local_8 = DAT_00baa7b8 | 2;
  }
  else {
    if (cVar1 != 'r') {
      if (cVar1 != 'w') {
        piVar4 = __errno();
        *piVar4 = 0x16;
        __invalid_parameter(0,0,0,0,0);
        return (FILE *)0x0;
      }
      _Mode = (char *)0x301;
      goto LAB_0098f165;
    }
    local_8 = DAT_00baa7b8 | 1;
    _Mode = (char *)0x0;
  }
  bVar2 = true;
  _Str2 = (uchar *)(pcVar7 + 1);
  uVar3 = *_Str2;
  if (uVar3 != '\0') {
    do {
      if (!bVar2) break;
      if ((char)uVar3 < 'T') {
        if (uVar3 == 'S') {
          if (local_c != 0) goto LAB_0098f29f;
          _Mode = (char *)((uint)_Mode | 0x20);
          local_c = 1;
        }
        else if (uVar3 != ' ') {
          if (uVar3 == '+') {
            if (((uint)_Mode & 2) != 0) goto LAB_0098f29f;
            _Mode = (char *)((uint)_Mode & 0xfffffffe | 2);
            local_8 = local_8 & 0xfffffffc | 0x80;
          }
          else if (uVar3 == ',') {
            local_14 = 1;
LAB_0098f29f:
            bVar2 = false;
          }
          else if (uVar3 == 'D') {
            if (((uint)_Mode & 0x40) != 0) goto LAB_0098f29f;
            _Mode = (char *)((uint)_Mode | 0x40);
          }
          else if (uVar3 == 'N') {
            _Mode = (char *)((uint)_Mode | 0x80);
          }
          else {
            if (uVar3 != 'R') goto LAB_0098f33a;
            if (local_c != 0) goto LAB_0098f29f;
            _Mode = (char *)((uint)_Mode | 0x10);
            local_c = 1;
          }
        }
      }
      else if (uVar3 == 'T') {
        if (((uint)_Mode & 0x1000) != 0) goto LAB_0098f29f;
        _Mode = (char *)((uint)_Mode | 0x1000);
      }
      else if (uVar3 == 'b') {
        if (((uint)_Mode & 0xc000) != 0) goto LAB_0098f29f;
        _Mode = (char *)((uint)_Mode | 0x8000);
      }
      else if (uVar3 == 'c') {
        if (local_10 != 0) goto LAB_0098f29f;
        local_8 = local_8 | 0x4000;
        local_10 = 1;
      }
      else if (uVar3 == 'n') {
        if (local_10 != 0) goto LAB_0098f29f;
        local_8 = local_8 & 0xffffbfff;
        local_10 = 1;
      }
      else {
        if (uVar3 != 't') goto LAB_0098f33a;
        if (((uint)_Mode & 0xc000) != 0) goto LAB_0098f29f;
        _Mode = (char *)((uint)_Mode | 0x4000);
      }
      _Str2 = _Str2 + 1;
      uVar3 = *_Str2;
    } while (uVar3 != '\0');
    if (local_14 != 0) {
      for (; *_Str2 == ' '; _Str2 = _Str2 + 1) {
      }
      iVar5 = __mbsnbcmp("ccs=",_Str2,4);
      if (iVar5 != 0) goto LAB_0098f33a;
      _Str1 = _Str2 + 4;
      iVar5 = __mbsicmp(_Str1,(uchar *)"UTF-8");
      if (iVar5 == 0) {
        _Str2 = _Str2 + 9;
        _Mode = (char *)((uint)_Mode | 0x40000);
      }
      else {
        iVar5 = __mbsicmp(_Str1,(uchar *)"UTF-16LE");
        if (iVar5 == 0) {
          _Str2 = _Str2 + 0xc;
          _Mode = (char *)((uint)_Mode | 0x20000);
        }
        else {
          iVar5 = __mbsicmp(_Str1,(uchar *)"UNICODE");
          if (iVar5 != 0) goto LAB_0098f33a;
          _Str2 = _Str2 + 0xb;
          _Mode = (char *)((uint)_Mode | 0x10000);
        }
      }
    }
  }
  for (; *_Str2 == ' '; _Str2 = _Str2 + 1) {
  }
  if (*_Str2 == '\0') {
    eVar6 = __sopen_s(&local_14,_Filename,(int)_Mode,_ShFlag,0x180);
    if (eVar6 != 0) {
      return (FILE *)0x0;
    }
    _DAT_00ba9e14 = _DAT_00ba9e14 + 1;
    _File->_flag = local_8;
    _File->_cnt = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_tmpfname = (char *)0x0;
    _File->_file = local_14;
    return _File;
  }
LAB_0098f33a:
  piVar4 = __errno();
  *piVar4 = 0x16;
  __invalid_parameter(0,0,0,0,0);
  return (FILE *)0x0;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __getstream
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl __getstream(void)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  FILE *pFVar5;
  FILE *_File;
  
  pFVar5 = (FILE *)0x0;
  __lock(1);
  iVar4 = 0;
  do {
    _File = pFVar5;
    if (DAT_00babc00 <= iVar4) {
LAB_0098f48b:
      if (_File != (FILE *)0x0) {
        _File->_cnt = 0;
        _File->_flag = 0;
        _File->_base = (char *)0x0;
        _File->_ptr = (char *)0x0;
        _File->_tmpfname = (char *)0x0;
        _File->_file = -1;
      }
      FUN_0098f4b8();
      return _File;
    }
    piVar1 = (int *)(DAT_00baabe4 + iVar4 * 4);
    if (*piVar1 == 0) {
      iVar4 = iVar4 * 4;
      pvVar3 = __malloc_crt(0x38);
      *(void **)(iVar4 + DAT_00baabe4) = pvVar3;
      if (*(int *)(DAT_00baabe4 + iVar4) != 0) {
        iVar2 = ___crtInitCritSecAndSpinCount(*(int *)(DAT_00baabe4 + iVar4) + 0x20,4000);
        if (iVar2 == 0) {
          _free(*(void **)(iVar4 + DAT_00baabe4));
          *(undefined4 *)(iVar4 + DAT_00baabe4) = 0;
        }
        else {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar4 + DAT_00baabe4) + 0x20));
          _File = *(FILE **)(iVar4 + DAT_00baabe4);
        }
      }
      goto LAB_0098f48b;
    }
    if ((*(byte *)(*piVar1 + 0xc) & 0x83) == 0) {
      if ((iVar4 - 3U < 0x11) && (iVar2 = __mtinitlocknum(iVar4 + 0x10), iVar2 == 0))
      goto LAB_0098f48b;
      __lock_file2(iVar4,*(void **)(DAT_00baabe4 + iVar4 * 4));
      _File = *(FILE **)(DAT_00baabe4 + iVar4 * 4);
      if ((_File->_flag & 0x83) == 0) goto LAB_0098f48b;
      __unlock_file2(iVar4,_File);
    }
    iVar4 = iVar4 + 1;
  } while( true );
}



void FUN_0098f4b8(void)

{
  FUN_0098c8fb(1);
  return;
}



/* Library Function - Single Match
    __local_unwind4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __local_unwind4(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  uint local_20;
  uint uStack_1c;
  int iStack_18;
  uint *puStack_14;
  
  puStack_14 = param_1;
  iStack_18 = param_2;
  uStack_1c = param_3;
  puStack_24 = &LAB_0098f554;
  uStack_28 = *unaff_FS_OFFSET;
  local_20 = DAT_00b30aac ^ (uint)&uStack_28;
  *unaff_FS_OFFSET = &uStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_0099ca84();
    }
  }
  *unaff_FS_OFFSET = uStack_28;
  return;
}



/* Library Function - Single Match
    __seh_longjmp_unwind4@4
   
   Library: Visual Studio */

void __seh_longjmp_unwind4_4(int param_1)

{
  __local_unwind4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x18),
                  *(undefined4 *)(param_1 + 0x1c));
  return;
}



/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2005 Release */

void __fastcall _EH4_CallFilterFunc(code *param_1)

{
  (*param_1)();
  return;
}



/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2005 Release */

void __fastcall _EH4_TransferToHandler(code *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x0098f5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2005 Release */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x98f5fb,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2005 Release */

void __fastcall
_EH4_LocalUnwind(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}



/* Library Function - Single Match
    int __cdecl CPtoLCID(int)
   
   Library: Visual Studio 2005 Release */

int __cdecl CPtoLCID(int param_1)

{
  int in_EAX;
  
  if (in_EAX == 0x3a4) {
    return 0x411;
  }
  if (in_EAX == 0x3a8) {
    return 0x804;
  }
  if (in_EAX == 0x3b5) {
    return 0x412;
  }
  if (in_EAX != 0x3b6) {
    return 0;
  }
  return 0x404;
}



/* Library Function - Single Match
    void __cdecl setSBCS(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2005 Release */

void __cdecl setSBCS(threadmbcinfostruct *param_1)

{
  int in_EAX;
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0x101;
  puVar1 = (undefined1 *)(in_EAX + 0x1c);
  _memset(puVar1,0,0x101);
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  do {
    *puVar1 = puVar1[(int)&DAT_00b31390 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_00b31390 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    void __cdecl setSBUpLow(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2005 Release */

void __cdecl setSBUpLow(threadmbcinfostruct *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  BOOL BVar3;
  uint uVar4;
  CHAR CVar5;
  char cVar6;
  BYTE *pBVar7;
  int unaff_ESI;
  _cpinfo local_51c;
  WORD local_508 [52];
  undefined1 local_4a0 [408];
  CHAR local_308 [256];
  CHAR local_208 [256];
  CHAR local_108 [256];
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)local_4a0;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_0098f802:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_0098f802;
        }
        *pcVar2 = '\0';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    do {
      local_108[uVar4] = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    local_108[0] = ' ';
    if (local_51c.LeadByte[0] != 0) {
      pBVar7 = local_51c.LeadByte + 1;
      do {
        uVar4 = (uint)local_51c.LeadByte[0];
        if (uVar4 <= *pBVar7) {
          _memset(local_108 + uVar4,0x20,(*pBVar7 - uVar4) + 1);
        }
        local_51c.LeadByte[0] = pBVar7[1];
        pBVar7 = pBVar7 + 2;
      } while (local_51c.LeadByte[0] != 0);
    }
    ___crtGetStringTypeA
              ((_locale_t)0x0,1,local_108,0x100,local_508,*(int *)(unaff_ESI + 4),
               *(BOOL *)(unaff_ESI + 0xc));
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x100,local_108,0x100,local_208,
                       0x100,*(int *)(unaff_ESI + 4),0);
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x200,local_108,0x100,local_308,
                       0x100,*(int *)(unaff_ESI + 4),0);
    uVar4 = 0;
    do {
      if ((local_508[uVar4] & 1) == 0) {
        if ((local_508[uVar4] & 2) != 0) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          CVar5 = local_308[uVar4];
          goto LAB_0098f7a9;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_0098f7a9:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  return;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetmbcinfo
   
   Library: Visual Studio 2005 Release */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  LONG LVar2;
  pthreadmbcinfo lpAddend;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_00b318b0) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_00b317b8) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_00b31390)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_00b317b8;
      lpAddend = (pthreadmbcinfo)PTR_DAT_00b317b8;
      InterlockedIncrement((LONG *)PTR_DAT_00b317b8);
    }
    FUN_0098f8c0();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}



void FUN_0098f8c0(void)

{
  FUN_0098c8fb(0xd);
  return;
}



/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2005 Release */

int __cdecl getSystemCP(int param_1)

{
  UINT UVar1;
  int unaff_ESI;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,(localeinfo_struct *)0x0);
  DAT_00baa604 = 0;
  if (unaff_ESI == -2) {
    DAT_00baa604 = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_00baa604 = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_00baa604 = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_00baa604 = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __setmbcp_nolock
   
   Library: Visual Studio 2005 Release */

undefined4 __setmbcp_nolock(undefined4 param_1,int param_2)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  UINT CodePage;
  uint uVar4;
  BOOL BVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  int extraout_ECX;
  undefined2 *puVar8;
  int iVar9;
  undefined4 extraout_EDX;
  BYTE *pBVar10;
  threadmbcinfostruct *unaff_EDI;
  uint local_24;
  byte *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  CodePage = getSystemCP((int)unaff_EDI);
  if (CodePage != 0) {
    local_20 = (byte *)0x0;
    uVar4 = 0;
    do {
      if (*(UINT *)((int)&DAT_00b317c0 + uVar4) == CodePage) {
        _memset((void *)(param_2 + 0x1c),0,0x101);
        local_24 = 0;
        pbVar7 = &DAT_00b317d0 + (int)local_20 * 0x30;
        local_20 = pbVar7;
        do {
          for (; (*pbVar7 != 0 && (bVar3 = pbVar7[1], bVar3 != 0)); pbVar7 = pbVar7 + 2) {
            for (uVar4 = (uint)*pbVar7; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
              pbVar2 = (byte *)(param_2 + 0x1d + uVar4);
              *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0xb317bc);
              bVar3 = pbVar7[1];
            }
          }
          local_24 = local_24 + 1;
          pbVar7 = local_20 + 8;
          local_20 = pbVar7;
        } while (local_24 < 4);
        *(UINT *)(param_2 + 4) = CodePage;
        *(undefined4 *)(param_2 + 8) = 1;
        iVar9 = CPtoLCID((int)unaff_EDI);
        *(int *)(param_2 + 0xc) = iVar9;
        puVar6 = (undefined2 *)(param_2 + 0x10);
        puVar8 = (undefined2 *)(&DAT_00b317c4 + extraout_ECX);
        iVar9 = 6;
        do {
          *puVar6 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar6 = puVar6 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        goto LAB_0098fa82;
      }
      local_20 = (byte *)((int)local_20 + 1);
      uVar4 = uVar4 + 0x30;
    } while (uVar4 < 0xf0);
    BVar5 = GetCPInfo(CodePage,&local_1c);
    if (BVar5 != 0) {
      _memset((void *)(param_2 + 0x1c),0,0x101);
      *(UINT *)(param_2 + 4) = CodePage;
      *(undefined4 *)(param_2 + 0xc) = 0;
      if (local_1c.MaxCharSize < 2) {
        *(undefined4 *)(param_2 + 8) = 0;
      }
      else {
        if (local_1c.LeadByte[0] != '\0') {
          pBVar10 = local_1c.LeadByte + 1;
          do {
            bVar3 = *pBVar10;
            if (bVar3 == 0) break;
            for (uVar4 = (uint)pBVar10[-1]; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
              pbVar7 = (byte *)(param_2 + 0x1d + uVar4);
              *pbVar7 = *pbVar7 | 4;
            }
            pBVar1 = pBVar10 + 1;
            pBVar10 = pBVar10 + 2;
          } while (*pBVar1 != 0);
        }
        pbVar7 = (byte *)(param_2 + 0x1e);
        iVar9 = 0xfe;
        do {
          *pbVar7 = *pbVar7 | 8;
          pbVar7 = pbVar7 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        iVar9 = CPtoLCID((int)unaff_EDI);
        *(int *)(param_2 + 0xc) = iVar9;
        *(undefined4 *)(param_2 + 8) = extraout_EDX;
      }
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x14) = 0;
      *(undefined4 *)(param_2 + 0x18) = 0;
LAB_0098fa82:
      setSBUpLow(unaff_EDI);
      return 0;
    }
    if (DAT_00baa604 == 0) {
      return 0xffffffff;
    }
  }
  setSBCS(unaff_EDI);
  return 0;
}



/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 2005 Release */

int __cdecl __setmbcp(int _CodePage)

{
  _ptiddata p_Var1;
  int iVar2;
  pthreadmbcinfo ptVar3;
  LONG LVar4;
  int *piVar5;
  int iVar6;
  pthreadmbcinfo ptVar7;
  pthreadmbcinfo ptVar8;
  int in_stack_ffffffc8;
  int local_24;
  
  local_24 = -1;
  p_Var1 = __getptd();
  ___updatetmbcinfo();
  ptVar3 = p_Var1->ptmbcinfo;
  iVar2 = getSystemCP(in_stack_ffffffc8);
  if (iVar2 == ptVar3->mbcodepage) {
    local_24 = 0;
  }
  else {
    ptVar3 = __malloc_crt(0x220);
    if (ptVar3 != (pthreadmbcinfo)0x0) {
      ptVar7 = p_Var1->ptmbcinfo;
      ptVar8 = ptVar3;
      for (iVar6 = 0x88; iVar6 != 0; iVar6 = iVar6 + -1) {
        ptVar8->refcount = ptVar7->refcount;
        ptVar7 = (pthreadmbcinfo)&ptVar7->mbcodepage;
        ptVar8 = (pthreadmbcinfo)&ptVar8->mbcodepage;
      }
      ptVar3->refcount = 0;
      local_24 = __setmbcp_nolock(iVar2,ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_00b31390)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_00b318b0 & 1) == 0)) {
          __lock(0xd);
          _DAT_00baa614 = ptVar3->mbcodepage;
          _DAT_00baa618 = ptVar3->ismbcodepage;
          _DAT_00baa61c = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_00baa608)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_00b315b0)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_00b316b8)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_00b317b8);
          if ((LVar4 == 0) && (PTR_DAT_00b317b8 != &DAT_00b31390)) {
            _free(PTR_DAT_00b317b8);
          }
          PTR_DAT_00b317b8 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_0098fc4f();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_00b31390) {
          _free(ptVar3);
        }
        piVar5 = __errno();
        *piVar5 = 0x16;
      }
    }
  }
  return local_24;
}



void FUN_0098fc4f(void)

{
  FUN_0098c8fb(0xd);
  return;
}



/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2005 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_00babc14 == 0) {
    __setmbcp(-3);
    DAT_00babc14 = 1;
  }
  return 0;
}



/* Library Function - Single Match
    __forcdecpt_l
   
   Library: Visual Studio 2005 Release */

void __cdecl __forcdecpt_l(char *_Buf,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  iVar3 = _tolower((int)*_Buf);
  bVar4 = iVar3 == 0x65;
  while (!bVar4) {
    _Buf = _Buf + 1;
    iVar3 = _isdigit((uint)(byte)*_Buf);
    bVar4 = iVar3 == 0;
  }
  iVar3 = _tolower((int)*_Buf);
  if (iVar3 == 0x78) {
    _Buf = _Buf + 2;
  }
  bVar2 = *_Buf;
  *_Buf = *(byte *)**(undefined4 **)(local_14[0] + 0xbc);
  do {
    _Buf = _Buf + 1;
    bVar1 = *_Buf;
    *_Buf = bVar2;
    bVar2 = bVar1;
  } while (*_Buf != 0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}



/* Library Function - Single Match
    __cropzeros_l
   
   Library: Visual Studio 2005 Release */

void __cdecl __cropzeros_l(char *_Buf,_locale_t _Locale)

{
  char *pcVar1;
  char cVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  char *pcVar2;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  cVar3 = *_Buf;
  if (cVar3 != '\0') {
    do {
      if (cVar3 == *(char *)**(undefined4 **)(local_14[0] + 0xbc)) break;
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
    } while (cVar3 != '\0');
  }
  if (*_Buf != '\0') {
    do {
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
      pcVar1 = _Buf;
      if ((cVar3 == '\0') || (cVar3 == 'e')) break;
    } while (cVar3 != 'E');
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + -1;
    } while (*pcVar1 == '0');
    if (*pcVar1 == *(char *)**(undefined4 **)(local_14[0] + 0xbc)) {
      pcVar1 = pcVar2 + -2;
    }
    do {
      cVar3 = *_Buf;
      pcVar1 = pcVar1 + 1;
      _Buf = _Buf + 1;
      *pcVar1 = cVar3;
    } while (cVar3 != '\0');
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}



/* Library Function - Single Match
    __fassign_l
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __fassign_l(int flag,char *argument,char *number,_locale_t param_4)

{
  _CRT_FLOAT local_c;
  undefined4 local_8;
  
  if (flag == 0) {
    FID_conflict___atoflt_l((_CRT_FLOAT *)&flag,number,param_4);
    *(int *)argument = flag;
  }
  else {
    FID_conflict___atoflt_l(&local_c,number,param_4);
    *(float *)argument = local_c.f;
    *(undefined4 *)(argument + 4) = local_8;
  }
  return;
}



/* Library Function - Single Match
    __shift
   
   Library: Visual Studio 2005 Release */

void __shift(void)

{
  char *in_EAX;
  size_t sVar1;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    sVar1 = _strlen(in_EAX);
    _memmove(in_EAX + unaff_EDI,in_EAX,sVar1 + 1);
  }
  return;
}



/* Library Function - Single Match
    __cftoe2_l
   
   Library: Visual Studio 2005 Release */

int __cftoe2_l(uint param_1,int param_2,int param_3,int *param_4,char param_5,
              localeinfo_struct *param_6)

{
  undefined1 *in_EAX;
  int *piVar1;
  errno_t eVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *_Dst;
  int iVar6;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_6);
  if ((in_EAX == (undefined1 *)0x0) || (param_1 == 0)) {
    piVar1 = __errno();
    iVar6 = 0x16;
  }
  else {
    iVar6 = param_2;
    if (param_2 < 1) {
      iVar6 = 0;
    }
    if (iVar6 + 9U < param_1) {
      if (param_5 != '\0') {
        __shift();
      }
      puVar4 = in_EAX;
      if (*param_4 == 0x2d) {
        *in_EAX = 0x2d;
        puVar4 = in_EAX + 1;
      }
      puVar5 = puVar4;
      if (0 < param_2) {
        puVar5 = puVar4 + 1;
        *puVar4 = *puVar5;
        *puVar5 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      }
      _Dst = puVar5 + (uint)(param_5 == '\0') + param_2;
      if (param_1 == 0xffffffff) {
        puVar4 = (undefined1 *)0xffffffff;
      }
      else {
        puVar4 = in_EAX + (param_1 - (int)_Dst);
      }
      eVar2 = _strcpy_s(_Dst,(rsize_t)puVar4,"e+000");
      if (eVar2 == 0) {
        if (param_3 != 0) {
          *_Dst = 'E';
        }
        if (*(char *)param_4[3] != '0') {
          iVar6 = param_4[1] + -1;
          if (iVar6 < 0) {
            iVar6 = -iVar6;
            _Dst[1] = '-';
          }
          if (99 < iVar6) {
            iVar3 = iVar6 / 100;
            iVar6 = iVar6 % 100;
            _Dst[2] = _Dst[2] + (char)iVar3;
          }
          if (9 < iVar6) {
            iVar3 = iVar6 / 10;
            iVar6 = iVar6 % 10;
            _Dst[3] = _Dst[3] + (char)iVar3;
          }
          _Dst[4] = _Dst[4] + (char)iVar6;
        }
        if (((DAT_00baa7bc & 1) != 0) && (_Dst[2] == '0')) {
          _memmove(_Dst + 2,_Dst + 3,3);
        }
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    piVar1 = __errno();
    iVar6 = 0x22;
  }
  *piVar1 = iVar6;
  __invalid_parameter(0,0,0,0,0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar6;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __cftoe_l
   
   Library: Visual Studio 2005 Release */

errno_t __cftoe_l(double *param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

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
      _SizeInBytes = (param_3 - (uint)(local_30.sign == 0x2d)) - (uint)(0 < param_4);
    }
    eVar2 = __fptostr(param_2 + (uint)(0 < param_4) + (uint)(local_30.sign == 0x2d),_SizeInBytes,
                      param_4 + 1,&local_30);
    if (eVar2 == 0) {
      eVar2 = __cftoe2_l(param_3,param_4,param_5,&local_30,0,param_6);
    }
    else {
      *param_2 = 0;
    }
  }
  return eVar2;
}


