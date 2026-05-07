
void FUN_00401000(void)

{
  LPCRITICAL_SECTION in_ECX;
  
  InitializeCriticalSection(in_ECX);
  return;
}



void FUN_00401010(void)

{
  LPCRITICAL_SECTION in_ECX;
  
  DeleteCriticalSection(in_ECX);
  return;
}



void FUN_00401020(void)

{
  LPCRITICAL_SECTION in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x00401024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(in_ECX);
  return;
}



bool FUN_00401030(void)

{
  BOOL BVar1;
  LPCRITICAL_SECTION in_ECX;
  
  BVar1 = TryEnterCriticalSection(in_ECX);
  return BVar1 != 0;
}



void FUN_00401040(void)

{
  LPCRITICAL_SECTION in_ECX;
  
  LeaveCriticalSection(in_ECX);
  return;
}



void FUN_00401050(void)

{
  LONG LVar1;
  undefined4 *in_ECX;
  
  LVar1 = InterlockedDecrement(in_ECX + 1);
  if ((LVar1 == 0) && (in_ECX != (undefined4 *)0x0)) {
    (**(code **)*in_ECX)(1);
  }
  return;
}



/* Library Function - Single Match
    void __stdcall `vector constructor iterator'(void *,unsigned int,int,void * (__thiscall*)(void
   *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void _vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_ptr_void_ptr *param_4)

{
  void *unaff_ESI;
  
  while (param_3 = param_3 + -1, -1 < param_3) {
    (*param_4)(unaff_ESI);
  }
  return;
}



void FUN_004010c0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009a9d5b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0xc);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xc);
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



void FUN_00401160(void)

{
  FUN_004010c0();
  return;
}



void FUN_00401170(SIZE_T param_1)

{
  VirtualAlloc((LPVOID)0x0,param_1,0x1000,4);
  return;
}



undefined4 FUN_004011b0(uint param_1)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 0x40) <= param_1) &&
     (param_1 < *(int *)(in_ECX + 0x110) + *(uint *)(in_ECX + 0x40))) {
    return 1;
  }
  return 0;
}



void FUN_004011e0(char param_1)

{
  DAT_00b32b00 = 0;
  DAT_00b32b01 = 0;
  FUN_00401040();
  if (param_1 != '\0') {
    FUN_00977c50();
    return;
  }
  return;
}



SIZE_T FUN_00401210(void)

{
  _MEMORYSTATUS local_20;
  
  GlobalMemoryStatus(&local_20);
  return local_20.dwAvailPhys;
}



int FUN_00401230(int param_1)

{
  int in_ECX;
  
  if (0x1000 < param_1) {
    return -1;
  }
  param_1 = param_1 - *(int *)(in_ECX + 4);
  return (int)(param_1 + (param_1 >> 0x1f & 0xffU)) >> 8;
}



void FUN_00401260(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int iVar6;
  undefined1 local_40 [32];
  int iStack_20;
  int iStack_8;
  char cStack_4;
  
  *(undefined1 *)((int)in_ECX + 0x16d) = 0;
  GlobalMemoryStatus((LPMEMORYSTATUS)local_40);
  in_ECX[0x5a] = local_40._8_4_ - local_40._12_4_;
  in_ECX[3] = param_1;
  pcVar1 = *(code **)(*in_ECX + 4);
  in_ECX[1] = 4;
  in_ECX[0x59] = 0;
  in_ECX[2] = 0x10;
  in_ECX[0x17] = 0;
  in_ECX[0x16] = 0;
  iVar3 = (*pcVar1)(param_1);
  in_ECX[6] = iVar3;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    _exit(0);
  }
  pcVar1 = *(code **)(*in_ECX + 0xc);
  in_ECX[0xc] = 0x400;
  iVar3 = (*pcVar1)(0x2000);
  in_ECX[0xd] = iVar3;
  in_ECX[0xe] = iVar3 + -8 + in_ECX[0xc] * 8;
  iVar3 = (**(code **)(*in_ECX + 0xc))(0x80);
  in_ECX[0x11] = iVar3;
  iVar3 = 0;
  iVar6 = 2;
  iStack_8 = 4;
  do {
    *(undefined4 *)(iVar3 + in_ECX[0x11]) = 0;
    uVar2 = in_ECX[1];
    iVar4 = (((int)(uVar2 * 0x400 + ((int)(uVar2 * 0x400) >> 0x1f & 0xfU)) >> 4) * (iVar6 + -2) +
            uVar2) / uVar2 - 1;
    if (iVar4 < in_ECX[0xc]) {
      piVar5 = (int *)(in_ECX[0xd] + iVar4 * 8);
    }
    else {
      piVar5 = in_ECX + 0xf;
    }
    *(int **)(iVar3 + 4 + in_ECX[0x11]) = piVar5;
    *(undefined4 *)(iVar3 + 8 + in_ECX[0x11]) = 0;
    uVar2 = in_ECX[1];
    iVar4 = (((int)(uVar2 * 0x400 + ((int)(uVar2 * 0x400) >> 0x1f & 0xfU)) >> 4) * (iVar6 + -1) +
            uVar2) / uVar2 - 1;
    if (iVar4 < in_ECX[0xc]) {
      piVar5 = (int *)(in_ECX[0xd] + iVar4 * 8);
    }
    else {
      piVar5 = in_ECX + 0xf;
    }
    *(int **)(iVar3 + 0xc + in_ECX[0x11]) = piVar5;
    *(undefined4 *)(iVar3 + 0x10 + in_ECX[0x11]) = 0;
    uVar2 = in_ECX[1];
    iVar4 = (((int)(uVar2 * 0x400 + ((int)(uVar2 * 0x400) >> 0x1f & 0xfU)) >> 4) * iVar6 + uVar2) /
            uVar2 - 1;
    if (iVar4 < in_ECX[0xc]) {
      piVar5 = (int *)(in_ECX[0xd] + iVar4 * 8);
    }
    else {
      piVar5 = in_ECX + 0xf;
    }
    *(int **)(iVar3 + 0x14 + in_ECX[0x11]) = piVar5;
    *(undefined4 *)(iVar3 + 0x18 + in_ECX[0x11]) = 0;
    uVar2 = in_ECX[1];
    iVar4 = (((int)(uVar2 * 0x400 + ((int)(uVar2 * 0x400) >> 0x1f & 0xfU)) >> 4) * (iVar6 + 1) +
            uVar2) / uVar2 - 1;
    if (iVar4 < in_ECX[0xc]) {
      piVar5 = (int *)(in_ECX[0xd] + iVar4 * 8);
    }
    else {
      piVar5 = in_ECX + 0xf;
    }
    *(int **)(iVar3 + 0x1c + in_ECX[0x11]) = piVar5;
    iVar6 = iVar6 + 4;
    iVar3 = iVar3 + 0x20;
    iStack_8 = iStack_8 + -1;
  } while (iStack_8 != 0);
  _memset((void *)in_ECX[0xd],0,in_ECX[0xc] * 8);
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  GlobalMemoryStatus((LPMEMORYSTATUS)(local_40 + 0x14));
  in_ECX[0x15] = iStack_20;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0x18] = 0;
  *(undefined1 *)(in_ECX + 0x19) = 0;
  *(char *)(in_ECX + 0x5b) = cStack_4;
  if (cStack_4 == '\0') {
    FUN_00402170();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_004014a0(undefined4 param_1)

{
  DWORD DVar1;
  char cVar2;
  undefined1 uVar3;
  DWORD DVar4;
  
  _DAT_00b32b08 = param_1;
  DVar1 = *(DWORD *)(DAT_00b33398 + 0x10);
  DVar4 = GetCurrentThreadId();
  if (DAT_00b32b04 == 0) {
    DAT_00b32b01 = 1;
  }
  uVar3 = 0;
  if ((DVar1 != DVar4) && (DAT_00b350d5 != '\0')) {
    cVar2 = FUN_00977c50();
    if (cVar2 == '\0') goto LAB_004014f3;
  }
  uVar3 = FUN_00977c50(3);
LAB_004014f3:
  FUN_00401020("MemoryHeap::MemoryProblem");
  DAT_00b32b00 = 1;
  if (DAT_00b02184 != (code *)0x0) {
    DAT_00b32b04 = (*DAT_00b02184)(0,param_1,DAT_00b32b04);
    return uVar3;
  }
  DAT_00b32b04 = 0;
  return uVar3;
}



uint FUN_00401580(void *param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  if ((((*(char *)(in_ECX + 0x16c) == '\0') &&
       (iVar1 = (&DAT_00b32c80)[(uint)param_1 >> 0x18], iVar1 != 0)) &&
      (*(void **)(iVar1 + 0x40) <= param_1)) &&
     (param_1 < (void *)(*(int *)(iVar1 + 0x110) + (int)*(void **)(iVar1 + 0x40)))) {
    return *(uint *)(iVar1 + 0x100);
  }
  if ((*(void **)(in_ECX + 0x18) <= param_1) &&
     (param_1 < (void *)(*(int *)(in_ECX + 0xc) + (int)*(void **)(in_ECX + 0x18)))) {
    return *(uint *)((int)param_1 + -4) & 0xfffffff;
  }
  uVar2 = __msize(param_1);
  return uVar2;
}



uint FUN_004015f0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x40000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar2 = (*(uint *)(param_1 + 4) & 0xfffffff) / *(uint *)(in_ECX + 4) - 1;
  if (iVar2 < *(int *)(in_ECX + 0x30)) {
    piVar4 = (int *)(*(int *)(in_ECX + 0x34) + iVar2 * 8);
  }
  else {
    piVar4 = (int *)(in_ECX + 0x3c);
  }
  iVar2 = piVar4[1];
  if (iVar2 == 0) {
    *piVar4 = param_1;
  }
  else {
    *(int *)(param_1 + 8) = iVar2;
    iVar1 = *(int *)(iVar2 + 0xc);
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = param_1;
    }
    *(int *)(iVar2 + 0xc) = param_1;
  }
  piVar4[1] = param_1;
  *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + 1;
  if (*(int *)(in_ECX + 0x2c) < *(int *)(in_ECX + 0x28)) {
    *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x28);
  }
  uVar3 = *(uint *)(param_1 + 4) & 0xfffffff;
  if ((uVar3 < 0x1001) &&
     (iVar2 = uVar3 - *(int *)(in_ECX + 4), uVar3 = (int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8,
     uVar3 != 0xffffffff)) {
    iVar2 = *(int *)(in_ECX + 0x44);
    piVar4 = (int *)(iVar2 + uVar3 * 8);
    *piVar4 = *piVar4 + 1;
    uVar3 = iVar2 + uVar3 * 8;
  }
  return uVar3;
}



uint FUN_00401690(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  
  iVar4 = *(int *)(param_2 + 0xc);
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xc) = iVar4;
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0xc) + 8) = *(undefined4 *)(param_2 + 8);
  }
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xbfffffff;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  if (param_2 == *param_1) {
    *param_1 = iVar4;
  }
  if (param_2 == param_1[1]) {
    param_1[1] = iVar2;
  }
  uVar3 = *(uint *)(param_2 + 4) & 0xfffffff;
  if (uVar3 < 0x1001) {
    iVar4 = uVar3 - *(int *)(in_ECX + 4);
    uVar3 = (int)(iVar4 + (iVar4 >> 0x1f & 0xffU)) >> 8;
    if (uVar3 != 0xffffffff) {
      iVar4 = *(int *)(in_ECX + 0x44);
      piVar1 = (int *)(iVar4 + uVar3 * 8);
      *piVar1 = *piVar1 + -1;
      uVar3 = iVar4 + uVar3 * 8;
    }
    *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + -1;
    return uVar3;
  }
  *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + -1;
  return uVar3;
}



void FUN_00401750(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *in_ECX;
  int iVar4;
  
  *(undefined1 *)((int)in_ECX + 0x16d) = 1;
  if ((char)in_ECX[0x5b] == '\0') {
    FUN_004027a0();
  }
  iVar4 = in_ECX[0x17];
  while (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 0x140);
    (**(code **)(*in_ECX + 0x18))(iVar4);
    iVar4 = iVar1;
  }
  in_ECX[0x17] = 0;
  iVar4 = in_ECX[0x18];
  while (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 0x208);
    (**(code **)(*in_ECX + 0x18))(iVar4);
    iVar4 = iVar1;
  }
  iVar4 = 0;
  in_ECX[0x18] = 0;
  if (0 < in_ECX[0xc]) {
    do {
      iVar1 = in_ECX[0xd] + iVar4 * 8;
      iVar2 = *(int *)(in_ECX[0xd] + 4 + iVar4 * 8);
      while (iVar2 != 0) {
        FUN_00401690(iVar1,iVar2);
        iVar2 = *(int *)(iVar1 + 4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < in_ECX[0xc]);
  }
  in_ECX[0xc] = 0;
  if (in_ECX[0x10] != 0) {
    do {
      FUN_00401690(in_ECX + 0xf,in_ECX[0x10]);
    } while (in_ECX[0x10] != 0);
  }
  (**(code **)(*in_ECX + 0x18))(in_ECX[0xd]);
  pcVar3 = *(code **)(*in_ECX + 0x18);
  in_ECX[0xd] = 0;
  (*pcVar3)(in_ECX[0x11]);
  pcVar3 = *(code **)(*in_ECX + 0x10);
  in_ECX[0x11] = 0;
  (*pcVar3)(in_ECX[6]);
  in_ECX[6] = 0;
  in_ECX[3] = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00401830(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int *in_ECX;
  
  iVar3 = (**(code **)(*in_ECX + 8))(param_1);
  uVar1 = DAT_00b32b88;
  if (iVar3 != 0) {
    (**(code **)*in_ECX)(param_1);
    return iVar3;
  }
  if ((in_ECX[0x59] != 0) && (param_2 != '\0')) {
    DAT_00b32b88 = 1;
    FUN_00401040();
    _DAT_00b0201c = DAT_00b32b04;
    uVar2 = FUN_004014a0(param_1);
    _DAT_00b0201c = 0xffffffff;
    iVar3 = FUN_00401aa0(param_1,1);
    FUN_004011e0(uVar2);
    FUN_00401020(&DAT_00a2f830);
    DAT_00b32b88 = uVar1;
    return iVar3;
  }
  return 0;
}



void FUN_004018f0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  
  iVar1 = (*(uint *)(param_1 + 4) & 0xfffffff) / *(uint *)(in_ECX + 4) - 1;
  if (iVar1 < *(int *)(in_ECX + 0x30)) {
    iVar1 = *(int *)(in_ECX + 0x34) + iVar1 * 8;
  }
  else {
    iVar1 = in_ECX + 0x3c;
  }
  FUN_00401690(iVar1,param_1);
  iVar1 = (*(uint *)(param_2 + 4) & 0xfffffff) / *(uint *)(extraout_ECX + 4) - 1;
  if (iVar1 < *(int *)(extraout_ECX + 0x30)) {
    iVar1 = *(int *)(extraout_ECX + 0x34) + iVar1 * 8;
  }
  else {
    iVar1 = extraout_ECX + 0x3c;
  }
  FUN_00401690(iVar1,param_2);
  *(uint *)(param_1 + 4) =
       (*(uint *)(param_2 + 4) & 0xfffffff) + 8 + (*(uint *)(param_1 + 4) & 0xfffffff) |
       *(uint *)(param_1 + 4) & 0xf0000000;
  if (param_2 == *(int *)(extraout_ECX_00 + 0x24)) {
    *(int *)(extraout_ECX_00 + 0x1c) = *(int *)(extraout_ECX_00 + 0x1c) + -1;
    *(int *)(extraout_ECX_00 + 0x24) = param_1;
    FUN_004015f0(param_1);
    return;
  }
  *(int *)((*(uint *)(param_2 + 4) & 0xfffffff) + 8 + param_2) = param_1;
  *(int *)(extraout_ECX_00 + 0x1c) = *(int *)(extraout_ECX_00 + 0x1c) + -1;
  FUN_004015f0(param_1);
  return;
}



void FUN_004019a0(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int extraout_ECX;
  int *piVar3;
  
  piVar3 = *(int **)(in_ECX + 0x24);
  if (piVar3 != (int *)0x0) {
    while( true ) {
      if (((uint)piVar3[1] >> 0x1e & 1) == 0) {
        return;
      }
      uVar1 = piVar3[1] & 0xfffffff;
      if (uVar1 + 8 + (int)piVar3 != *(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 0x10)) {
        return;
      }
      iVar2 = uVar1 / *(uint *)(in_ECX + 4) - 1;
      if (iVar2 < *(int *)(in_ECX + 0x30)) {
        iVar2 = *(int *)(in_ECX + 0x34) + iVar2 * 8;
      }
      else {
        iVar2 = in_ECX + 0x3c;
      }
      FUN_00401690(iVar2,piVar3);
      uVar1 = piVar3[1];
      *(int *)(extraout_ECX + 0x1c) = *(int *)(extraout_ECX + 0x1c) + -1;
      *(int *)(extraout_ECX + 0x10) = *(int *)(extraout_ECX + 0x10) + (-8 - (uVar1 & 0xfffffff));
      if (*(int *)(extraout_ECX + 0x20) == *(int *)(extraout_ECX + 0x24)) break;
      piVar3 = (int *)*piVar3;
      *(int **)(extraout_ECX + 0x24) = piVar3;
      in_ECX = extraout_ECX;
      if (piVar3 == (int *)0x0) {
        return;
      }
    }
    *(undefined4 *)(extraout_ECX + 0x24) = 0;
    *(undefined4 *)(extraout_ECX + 0x20) = 0;
  }
  return;
}



void FUN_00401a30(int *param_1)

{
  int *piVar1;
  int in_ECX;
  
  while (param_1 != (int *)0x0) {
    piVar1 = (int *)*param_1;
    if ((piVar1 == (int *)0x0) || (((uint)piVar1[1] >> 0x1e & 1) == 0)) goto LAB_00401a70;
    FUN_004018f0(piVar1,param_1);
    param_1 = piVar1;
  }
LAB_00401a60:
  FUN_004019a0();
  return;
LAB_00401a70:
  while ((param_1 != *(int **)(in_ECX + 0x24) &&
         ((*(uint *)((param_1[1] & 0xfffffffU) + 0xc + (int)param_1) >> 0x1e & 1) != 0))) {
    FUN_004018f0(param_1,(int)param_1 + (param_1[1] & 0xfffffffU) + 8);
  }
  goto LAB_00401a60;
}



int * FUN_00401aa0(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  uint uVar6;
  uint unaff_retaddr;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    piVar3 = _malloc(param_1);
    return piVar3;
  }
  if (param_1 < 8) {
    param_1 = 8;
  }
  uVar6 = *(int *)(in_ECX + 4) - 1;
  if ((param_1 & uVar6) != 0) {
    param_1 = *(int *)(in_ECX + 4) + param_1 & ~uVar6;
  }
  FUN_00401020("MemoryHeap::Allocate");
  if ((((*(char *)(in_ECX + 0x16c) == '\0') && (param_1 < 0x201)) &&
      (*(int *)((int)&DAT_00b33080 + (param_1 & 0xfffffffc)) != 0)) &&
     (piVar3 = (int *)FUN_00402480(), piVar3 != (int *)0x0)) {
    FUN_00401040();
    return piVar3;
  }
  iVar4 = param_1 / *(uint *)(in_ECX + 4) - 1;
  if (iVar4 < *(int *)(in_ECX + 0x30)) {
    piVar3 = (int *)(*(int *)(in_ECX + 0x34) + iVar4 * 8);
  }
  else {
    piVar3 = (int *)(in_ECX + 0x3c);
  }
  uVar6 = param_1;
  if (piVar3[1] == 0) {
    if (piVar3 != (int *)(in_ECX + 0x3cU)) {
      piVar1 = *(int **)(in_ECX + 0x38);
      piVar3 = piVar3 + (*(uint *)(in_ECX + 8) / *(uint *)(in_ECX + 4)) * 2;
      if (piVar1 < piVar3) {
LAB_00401c06:
        piVar3 = (int *)(in_ECX + 0x3c);
      }
      else {
        iVar4 = FUN_00401230(*(uint *)(in_ECX + 8) + param_1);
        if (iVar4 < 0x10) {
          piVar5 = (int *)(*(int *)(in_ECX + 0x44) + iVar4 * 8);
          do {
            if (*piVar5 != 0) {
              piVar5 = *(int **)(*(int *)(in_ECX + 0x44) + 4 + iVar4 * 8);
              if (piVar3 < piVar5) {
                piVar3 = piVar5;
              }
              break;
            }
            iVar4 = iVar4 + 1;
            piVar5 = piVar5 + 2;
          } while (iVar4 < 0x10);
        }
        if (iVar4 == 0x10) {
          piVar3 = (int *)(in_ECX + 0x3c);
        }
        if (piVar3 != (int *)(in_ECX + 0x3cU)) {
          if (piVar3[1] != 0) goto LAB_00401c0f;
          do {
            if (piVar3 == piVar1) goto LAB_00401c06;
            if ((iVar4 < 0xf) &&
               (iVar2 = *(int *)(in_ECX + 0x44), piVar3 == *(int **)(iVar2 + 0xc + iVar4 * 8))) {
              iVar4 = iVar4 + 1;
              piVar3 = piVar1;
              if (iVar4 < 0x10) {
                piVar5 = (int *)(iVar2 + iVar4 * 8);
                do {
                  if (*piVar5 != 0) {
                    piVar3 = *(int **)(iVar2 + 4 + iVar4 * 8);
                    break;
                  }
                  iVar4 = iVar4 + 1;
                  piVar5 = piVar5 + 2;
                } while (iVar4 < 0x10);
              }
            }
            else {
              piVar3 = piVar3 + 2;
            }
          } while (piVar3[1] == 0);
        }
      }
    }
    if (piVar3[1] == 0) goto LAB_00401c41;
  }
LAB_00401c0f:
  for (iVar4 = *piVar3; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
    uVar6 = *(uint *)(iVar4 + 4) & 0xfffffff;
    if ((uVar6 == unaff_retaddr) || (*(int *)(in_ECX + 8) <= (int)(uVar6 - unaff_retaddr))) {
      FUN_00401690(piVar3,iVar4);
      if (uVar6 - unaff_retaddr != 0) {
        piVar3 = (int *)(iVar4 + 8 + unaff_retaddr);
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[1] = (uVar6 - unaff_retaddr) + -8;
        *piVar3 = iVar4;
        if (iVar4 == *(int *)(in_ECX + 0x24)) {
          *(int **)(in_ECX + 0x24) = piVar3;
        }
        else {
          *(int **)((*(uint *)(iVar4 + 4) & 0xfffffff) + 8 + iVar4) = piVar3;
        }
        *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + 1;
        FUN_004015f0(piVar3);
        FUN_00401a30(piVar3);
      }
      *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) & 0xf0000000 | unaff_retaddr;
      FUN_00401040();
      return (int *)(iVar4 + 8);
    }
    uVar6 = unaff_retaddr;
  }
LAB_00401c41:
  if (*(uint *)(in_ECX + 0xc) < *(int *)(in_ECX + 0x10) + 8 + uVar6) {
    piVar3 = (int *)FUN_00401830(uVar6,0,param_1);
    FUN_00401040();
    return piVar3;
  }
  piVar3 = (int *)(*(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 0x10));
  piVar3[1] = uVar6;
  *piVar3 = 0;
  if (*(int *)(in_ECX + 0x24) == 0) {
    *(int **)(in_ECX + 0x20) = piVar3;
  }
  else {
    *piVar3 = *(int *)(in_ECX + 0x24);
  }
  *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + 1;
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + uVar6 + 8;
  *(int **)(in_ECX + 0x24) = piVar3;
  if (*(int *)(in_ECX + 0x14) < *(int *)(in_ECX + 0x10)) {
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x10);
  }
  FUN_00401040();
  return piVar3 + 2;
}



void FUN_00401d40(uint param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  
  if (param_1 != 0) {
    if (in_ECX[3] == 0) {
      (**(code **)(*in_ECX + 0x14))(param_1);
      return;
    }
    if ((param_1 < (uint)in_ECX[6]) || ((uint)(in_ECX[6] + in_ECX[3]) <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(char *)((int)in_ECX + 0x16d) == '\0') {
      FUN_00401020("MemoryHeap::Free");
    }
    if (bVar1) {
      FUN_004015f0(param_1 - 8);
      FUN_00401a30(param_1 - 8);
    }
    else if ((((char)in_ECX[0x5b] == '\0') && ((&DAT_00b32c80)[param_1 >> 0x18] != 0)) &&
            (cVar2 = FUN_004011b0(param_1), cVar2 != '\0')) {
      FUN_00402600(param_1);
    }
    else {
      iVar3 = (**(code **)(*in_ECX + 0x1c))(param_1);
      (**(code **)(*in_ECX + 0x14))(param_1);
      (**(code **)*in_ECX)(-iVar3);
    }
    if (*(char *)((int)in_ECX + 0x16d) == '\0') {
      FUN_00401040();
    }
  }
  return;
}



int * thunk_FUN_00401aa0(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  uint uVar6;
  uint unaff_retaddr;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    piVar3 = _malloc(param_1);
    return piVar3;
  }
  if (param_1 < 8) {
    param_1 = 8;
  }
  uVar6 = *(int *)(in_ECX + 4) - 1;
  if ((param_1 & uVar6) != 0) {
    param_1 = *(int *)(in_ECX + 4) + param_1 & ~uVar6;
  }
  FUN_00401020("MemoryHeap::Allocate");
  if ((((*(char *)(in_ECX + 0x16c) == '\0') && (param_1 < 0x201)) &&
      (*(int *)((int)&DAT_00b33080 + (param_1 & 0xfffffffc)) != 0)) &&
     (piVar3 = (int *)FUN_00402480(), piVar3 != (int *)0x0)) {
    FUN_00401040();
    return piVar3;
  }
  iVar4 = param_1 / *(uint *)(in_ECX + 4) - 1;
  if (iVar4 < *(int *)(in_ECX + 0x30)) {
    piVar3 = (int *)(*(int *)(in_ECX + 0x34) + iVar4 * 8);
  }
  else {
    piVar3 = (int *)(in_ECX + 0x3c);
  }
  uVar6 = param_1;
  if (piVar3[1] == 0) {
    if (piVar3 != (int *)(in_ECX + 0x3cU)) {
      piVar1 = *(int **)(in_ECX + 0x38);
      piVar3 = piVar3 + (*(uint *)(in_ECX + 8) / *(uint *)(in_ECX + 4)) * 2;
      if (piVar1 < piVar3) {
LAB_00401c06:
        piVar3 = (int *)(in_ECX + 0x3c);
      }
      else {
        iVar4 = FUN_00401230(*(uint *)(in_ECX + 8) + param_1);
        if (iVar4 < 0x10) {
          piVar5 = (int *)(*(int *)(in_ECX + 0x44) + iVar4 * 8);
          do {
            if (*piVar5 != 0) {
              piVar5 = *(int **)(*(int *)(in_ECX + 0x44) + 4 + iVar4 * 8);
              if (piVar3 < piVar5) {
                piVar3 = piVar5;
              }
              break;
            }
            iVar4 = iVar4 + 1;
            piVar5 = piVar5 + 2;
          } while (iVar4 < 0x10);
        }
        if (iVar4 == 0x10) {
          piVar3 = (int *)(in_ECX + 0x3c);
        }
        if (piVar3 != (int *)(in_ECX + 0x3cU)) {
          if (piVar3[1] != 0) goto LAB_00401c0f;
          do {
            if (piVar3 == piVar1) goto LAB_00401c06;
            if ((iVar4 < 0xf) &&
               (iVar2 = *(int *)(in_ECX + 0x44), piVar3 == *(int **)(iVar2 + 0xc + iVar4 * 8))) {
              iVar4 = iVar4 + 1;
              piVar3 = piVar1;
              if (iVar4 < 0x10) {
                piVar5 = (int *)(iVar2 + iVar4 * 8);
                do {
                  if (*piVar5 != 0) {
                    piVar3 = *(int **)(iVar2 + 4 + iVar4 * 8);
                    break;
                  }
                  iVar4 = iVar4 + 1;
                  piVar5 = piVar5 + 2;
                } while (iVar4 < 0x10);
              }
            }
            else {
              piVar3 = piVar3 + 2;
            }
          } while (piVar3[1] == 0);
        }
      }
    }
    if (piVar3[1] == 0) goto LAB_00401c41;
  }
LAB_00401c0f:
  for (iVar4 = *piVar3; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
    uVar6 = *(uint *)(iVar4 + 4) & 0xfffffff;
    if ((uVar6 == unaff_retaddr) || (*(int *)(in_ECX + 8) <= (int)(uVar6 - unaff_retaddr))) {
      FUN_00401690(piVar3,iVar4);
      if (uVar6 - unaff_retaddr != 0) {
        piVar3 = (int *)(iVar4 + 8 + unaff_retaddr);
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[1] = (uVar6 - unaff_retaddr) + -8;
        *piVar3 = iVar4;
        if (iVar4 == *(int *)(in_ECX + 0x24)) {
          *(int **)(in_ECX + 0x24) = piVar3;
        }
        else {
          *(int **)((*(uint *)(iVar4 + 4) & 0xfffffff) + 8 + iVar4) = piVar3;
        }
        *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + 1;
        FUN_004015f0(piVar3);
        FUN_00401a30(piVar3);
      }
      *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) & 0xf0000000 | unaff_retaddr;
      FUN_00401040();
      return (int *)(iVar4 + 8);
    }
    uVar6 = unaff_retaddr;
  }
LAB_00401c41:
  if (*(uint *)(in_ECX + 0xc) < *(int *)(in_ECX + 0x10) + 8 + uVar6) {
    piVar3 = (int *)FUN_00401830(uVar6,0,param_1);
    FUN_00401040();
    return piVar3;
  }
  piVar3 = (int *)(*(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 0x10));
  piVar3[1] = uVar6;
  *piVar3 = 0;
  if (*(int *)(in_ECX + 0x24) == 0) {
    *(int **)(in_ECX + 0x20) = piVar3;
  }
  else {
    *piVar3 = *(int *)(in_ECX + 0x24);
  }
  *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + 1;
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + uVar6 + 8;
  *(int **)(in_ECX + 0x24) = piVar3;
  if (*(int *)(in_ECX + 0x14) < *(int *)(in_ECX + 0x10)) {
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x10);
  }
  FUN_00401040();
  return piVar3 + 2;
}



void FUN_00401e30(undefined4 param_1)

{
  FUN_00401aa0(param_1,0);
  return;
}



void FUN_00401e40(int param_1)

{
  if (param_1 != 0) {
    FUN_00401d40();
    return;
  }
  return;
}



void * FUN_00401e60(void *param_1,size_t param_2)

{
  uint uVar1;
  size_t sVar2;
  void *pvVar3;
  undefined4 *in_ECX;
  
  sVar2 = FUN_00401580(param_1);
  if (sVar2 != 0) {
    if (param_2 < 8) {
      param_2 = 8;
    }
    uVar1 = in_ECX[1] - 1;
    if ((param_2 & uVar1) != 0) {
      param_2 = param_2 + in_ECX[1] & ~uVar1;
    }
    pvVar3 = (void *)FUN_00401aa0(param_2,1);
    if ((int)param_2 < (int)sVar2) {
      sVar2 = param_2;
    }
    _memcpy(pvVar3,param_1,sVar2);
    if (param_1 != (void *)0x0) {
      FUN_00401d40(param_1);
    }
    return pvVar3;
  }
  sVar2 = __msize(param_1);
  (**(code **)*in_ECX)(-sVar2);
  (**(code **)*in_ECX)(param_1);
  pvVar3 = _realloc(param_1,(size_t)param_1);
  return pvVar3;
}



void FUN_00401f00(undefined4 param_1)

{
  FUN_00401aa0(param_1,1);
  return;
}



void FUN_00401f20(int param_1)

{
  if (param_1 != 0) {
    FUN_00401d40(param_1);
  }
  return;
}



void FUN_00401f40(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afadb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (7 < param_1) {
    uVar1 = *(int *)(in_ECX + 4) - 1;
    if ((param_1 & uVar1) != 0) {
      param_1 = param_1 + *(int *)(in_ECX + 4) & ~uVar1;
    }
    iVar3 = FUN_00401aa0(0x180,1);
    local_4 = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00402280(param_1,param_2,param_3);
    }
    local_4 = 0xffffffff;
    if (*(int *)(iVar3 + 0x40) == 0) {
      FUN_00402400(uVar2);
      FUN_00401d40(iVar3);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_00401ff0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  SIZE_T SStack_1c;
  uint uStack_18;
  
  _memset(param_1,0,0x54);
  FUN_00401020("MemoryHeap::GetStats");
  if ((char)param_1 == '\0') {
    uVar3 = *(undefined4 *)(in_ECX + 0x1c);
    param_1[4] = *(undefined4 *)(in_ECX + 0x28);
    param_1[3] = uVar3;
  }
  else {
    iVar7 = *(int *)(in_ECX + 0x20);
    if (iVar7 != 0) {
      iVar2 = *(int *)(in_ECX + 0x24);
      do {
        uVar6 = *(uint *)(iVar7 + 4) & 0xfffffff;
        if (((byte)(*(uint *)(iVar7 + 4) >> 0x1e) & 1) == 0) {
          param_1[10] = param_1[10] + uVar6 + 8;
          if ((int)param_1[0xc] < (int)uVar6) {
            param_1[0xc] = uVar6;
          }
        }
        else {
          param_1[9] = param_1[9] + uVar6 + 8;
          if ((int)param_1[0xb] < (int)uVar6) {
            param_1[0xb] = uVar6;
          }
          param_1[4] = param_1[4] + 1;
        }
        param_1[3] = param_1[3] + 1;
      } while ((iVar7 != iVar2) && (iVar7 = iVar7 + 8 + uVar6, iVar7 != 0));
    }
    param_1[0xf] = 0;
  }
  uVar3 = *(undefined4 *)(in_ECX + 0xc);
  param_1[5] = *(undefined4 *)(in_ECX + 0x2c);
  uVar4 = *(undefined4 *)(in_ECX + 0x10);
  *param_1 = uVar3;
  uVar3 = *(undefined4 *)(in_ECX + 0x4c);
  param_1[0xd] = param_1[3] * 8;
  uVar5 = *(undefined4 *)(in_ECX + 0x14);
  param_1[1] = uVar4;
  uVar4 = *(undefined4 *)(in_ECX + 0x50);
  param_1[7] = uVar3;
  iVar7 = *(int *)(in_ECX + 0x30);
  param_1[2] = uVar5;
  uVar3 = *(undefined4 *)(in_ECX + 0x48);
  param_1[8] = uVar4;
  param_1[6] = uVar3;
  param_1[0xe] = iVar7 * 8 + 0x80;
  FUN_00401040();
  GlobalMemoryStatus((LPMEMORYSTATUS)&stack0xffffffdc);
  if (uStack_18 < *(uint *)(in_ECX + 0x54)) {
    *(uint *)(in_ECX + 0x54) = uStack_18;
  }
  param_1[0x11] = SStack_1c;
  iVar7 = *(int *)(in_ECX + 0x54);
  cVar1 = *(char *)(in_ECX + 0x16c);
  param_1[0x10] = SStack_1c - uStack_18;
  param_1[0x12] = SStack_1c - iVar7;
  if (cVar1 == '\0') {
    uVar6 = 0;
    do {
      if (*(int *)((int)&DAT_00b33080 + uVar6) != 0) {
        param_1[0x13] =
             param_1[0x13] + *(int *)(*(int *)((int)&DAT_00b33080 + uVar6) + 0x118) * 0x1000;
      }
      if (*(int *)((int)&DAT_00b33084 + uVar6) != 0) {
        param_1[0x13] =
             param_1[0x13] + *(int *)(*(int *)((int)&DAT_00b33084 + uVar6) + 0x118) * 0x1000;
      }
      if (*(int *)((int)&DAT_00b33088 + uVar6) != 0) {
        param_1[0x13] =
             param_1[0x13] + *(int *)(*(int *)((int)&DAT_00b33088 + uVar6) + 0x118) * 0x1000;
      }
      uVar6 = uVar6 + 0xc;
    } while (uVar6 < 0x204);
  }
  return param_1;
}



void FUN_00402170(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00b33080;
  for (iVar1 = 0x81; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00b32c80;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



int * FUN_00402190(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  int iStack_8;
  int *piStack_4;
  
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  uVar6 = 1;
  while( true ) {
    piVar7 = param_1;
    piVar1 = (int *)0x0;
    bVar10 = param_1 != (int *)0x0;
    param_1 = (int *)0x0;
    piStack_4 = (int *)0x0;
    iStack_8 = 0;
    if (bVar10) break;
LAB_00402258:
    uVar6 = uVar6 * 2;
    piVar1[1] = 0;
    if (iStack_8 == 1) {
      return param_1;
    }
  }
LAB_004021d0:
  iStack_8 = iStack_8 + 1;
  iVar9 = 0;
  uVar3 = 0;
  piVar2 = piVar7;
  uVar5 = uVar6;
  if (uVar6 != 0) {
    do {
      piVar2 = (int *)piVar2[1];
      iVar9 = iVar9 + 1;
      if (piVar2 == (int *)0x0) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar6);
  }
  do {
    piVar4 = piVar2;
    piVar8 = piVar7;
    if (iVar9 < 1) {
      if (((int)uVar5 < 1) || (piVar2 == (int *)0x0)) break;
      if (iVar9 != 0) goto LAB_0040220d;
      uVar5 = uVar5 - 1;
      piVar2 = (int *)piVar2[1];
    }
    else {
LAB_0040220d:
      if (((uVar5 == 0) || (piVar2 == (int *)0x0)) || (piVar7 <= piVar2)) {
        piVar8 = (int *)piVar7[1];
        iVar9 = iVar9 + -1;
        piVar4 = piVar7;
      }
      else {
        uVar5 = uVar5 - 1;
        piVar2 = (int *)piVar2[1];
      }
    }
    piVar7 = piVar8;
    if (piVar1 == (int *)0x0) {
      *piVar4 = (int)piStack_4;
      piVar1 = piVar4;
      param_1 = piVar4;
      piStack_4 = piVar4;
    }
    else {
      piVar1[1] = (int)piVar4;
      *piVar4 = (int)piVar1;
      piVar1 = piVar4;
      piStack_4 = piVar4;
    }
  } while( true );
  piVar7 = piVar2;
  if (piVar2 == (int *)0x0) goto LAB_00402258;
  goto LAB_004021d0;
}



int * FUN_004021a3(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *in_ECX;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  int *piVar11;
  
  uVar6 = 1;
  while( true ) {
    piVar1 = (int *)0x0;
    bVar10 = param_3 != in_ECX;
    param_1 = (int *)0x0;
    piVar7 = param_3;
    piVar11 = in_ECX;
    param_3 = in_ECX;
    if (bVar10) break;
LAB_00402258:
    in_ECX = (int *)0x0;
    uVar6 = uVar6 * 2;
    piVar1[1] = 0;
    if (piVar11 == (int *)0x1) {
      return param_3;
    }
  }
LAB_004021d0:
  piVar11 = (int *)((int)in_ECX + 1);
  iVar9 = 0;
  uVar3 = 0;
  piVar2 = piVar7;
  uVar5 = uVar6;
  if (uVar6 != 0) {
    do {
      piVar2 = (int *)piVar2[1];
      iVar9 = iVar9 + 1;
      if (piVar2 == (int *)0x0) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar6);
  }
  do {
    piVar4 = piVar2;
    piVar8 = piVar7;
    if (iVar9 < 1) {
      if (((int)uVar5 < 1) || (piVar2 == (int *)0x0)) break;
      if (iVar9 != 0) goto LAB_0040220d;
      uVar5 = uVar5 - 1;
      piVar2 = (int *)piVar2[1];
    }
    else {
LAB_0040220d:
      if (((uVar5 == 0) || (piVar2 == (int *)0x0)) || (piVar7 <= piVar2)) {
        piVar8 = (int *)piVar7[1];
        iVar9 = iVar9 + -1;
        piVar4 = piVar7;
      }
      else {
        uVar5 = uVar5 - 1;
        piVar2 = (int *)piVar2[1];
      }
    }
    piVar7 = piVar8;
    if (piVar1 == (int *)0x0) {
      *piVar4 = (int)param_1;
      piVar1 = piVar4;
      param_1 = piVar4;
      param_3 = piVar4;
    }
    else {
      piVar1[1] = (int)piVar4;
      *piVar4 = (int)piVar1;
      piVar1 = piVar4;
      param_1 = piVar4;
    }
  } while( true );
  piVar7 = piVar2;
  in_ECX = piVar11;
  if (piVar2 == (int *)0x0) goto LAB_00402258;
  goto LAB_004021d0;
}



void FUN_00402280(int param_1,uint param_2,char *param_3)

{
  uint uVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  char *in_ECX;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009a9d8e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00401000(uVar1);
  *(uint *)(in_ECX + 0x110) = param_2;
  local_4 = 0;
  in_ECX[0x44] = '\0';
  in_ECX[0x45] = '\0';
  in_ECX[0x46] = '\0';
  in_ECX[0x47] = '\0';
  in_ECX[0x114] = '\0';
  in_ECX[0x115] = '\0';
  in_ECX[0x116] = '\0';
  in_ECX[0x117] = '\0';
  in_ECX[0x118] = '\0';
  in_ECX[0x119] = '\0';
  in_ECX[0x11a] = '\0';
  in_ECX[0x11b] = '\0';
  in_ECX[0x104] = '\0';
  in_ECX[0x105] = '\0';
  in_ECX[0x106] = '\0';
  in_ECX[0x107] = '\0';
  *(uint *)(in_ECX + 0x10c) = param_2 >> 0xc;
  *(int *)(in_ECX + 0x100) = param_1;
  if (param_1 != 0) {
    *(uint *)(in_ECX + 0x100) = param_1 + 3U & 0xfffffffc;
  }
  in_ECX[0x40] = '\0';
  in_ECX[0x41] = '\0';
  in_ECX[0x42] = '\0';
  in_ECX[0x43] = '\0';
  uVar1 = 1;
  do {
    pvVar2 = VirtualAlloc((LPVOID)(uVar1 << 0x18),*(SIZE_T *)(in_ECX + 0x110),0x2000,4);
    *(LPVOID *)(in_ECX + 0x40) = pvVar2;
    if (0xfe < uVar1) break;
    uVar1 = uVar1 + 1;
  } while (pvVar2 == (LPVOID)0x0);
  if (pvVar2 != (LPVOID)0x0) {
    uVar3 = FUN_00401f00((param_2 >> 0xc) * 2);
    *(undefined4 *)(in_ECX + 0x108) = uVar3;
    uVar1 = 0;
    if (*(int *)(in_ECX + 0x10c) != 0) {
      do {
        *(undefined2 *)(*(int *)(in_ECX + 0x108) + uVar1 * 2) = 0xffff;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(in_ECX + 0x10c));
    }
    *(char **)((int)&DAT_00b33080 + (*(uint *)(in_ECX + 0x100) & 0xfffffffc)) = in_ECX;
    uVar1 = *(uint *)(in_ECX + 0x110) >> 0x18;
    if ((*(uint *)(in_ECX + 0x110) & 0xffffff) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (uVar1 != 0) {
      puVar4 = &DAT_00b32c80 + (byte)in_ECX[0x43];
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = in_ECX;
        puVar4 = puVar4 + 1;
      }
    }
    if (param_3 == (char *)0x0) {
      param_3 = "Unknown Memory Pool";
    }
    _strncpy(in_ECX,param_3,0x40);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00402400(void)

{
  int in_ECX;
  uint uVar1;
  undefined4 *puVar2;
  
  if (*(LPVOID *)(in_ECX + 0x40) != (LPVOID)0x0) {
    VirtualFree(*(LPVOID *)(in_ECX + 0x40),0,0x8000);
    *(undefined4 *)((int)&DAT_00b33080 + (*(uint *)(in_ECX + 0x100) & 0xfffffffc)) = 0;
    uVar1 = *(uint *)(in_ECX + 0x110) >> 0x18;
    if ((*(uint *)(in_ECX + 0x110) & 0xffffff) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (uVar1 != 0) {
      puVar2 = &DAT_00b32c80 + *(byte *)(in_ECX + 0x43);
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
  }
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x108));
  FUN_00401010();
  return;
}



int * FUN_00402480(void)

{
  int *piVar1;
  short *psVar2;
  uint uVar3;
  LPVOID pvVar4;
  undefined4 *puVar5;
  int *piVar6;
  int in_ECX;
  uint uVar7;
  LPVOID lpAddress;
  uint uVar8;
  _MEMORYSTATUS local_20;
  
  if (*(int *)(in_ECX + 0x44) != 0) {
LAB_004025ac:
    piVar1 = *(int **)(in_ECX + 0x44);
    piVar6 = (int *)0x0;
    if (piVar1 != (int *)0x0) {
      *(int *)(in_ECX + 0x44) = piVar1[1];
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + 4) = piVar1[1];
      }
      if ((int *)piVar1[1] != (int *)0x0) {
        *(int *)piVar1[1] = *piVar1;
      }
      *(int *)(in_ECX + 0x114) = *(int *)(in_ECX + 0x114) + -1;
      psVar2 = (short *)(*(int *)(in_ECX + 0x108) +
                        ((uint)((int)piVar1 - *(int *)(in_ECX + 0x40)) >> 0xc) * 2);
      *psVar2 = *psVar2 + 1;
      piVar6 = piVar1;
    }
    return piVar6;
  }
  uVar8 = 0;
  if (*(int *)(in_ECX + 0x10c) != 0) {
    psVar2 = *(short **)(in_ECX + 0x108);
    while (*psVar2 != -1) {
      uVar8 = uVar8 + 1;
      psVar2 = psVar2 + 1;
      if (*(uint *)(in_ECX + 0x10c) <= uVar8) {
        return (int *)0x0;
      }
    }
    if (uVar8 != 0xffffffff) {
      uVar3 = (uint)(0x1000 / (ulonglong)*(uint *)(in_ECX + 0x100));
      lpAddress = (LPVOID)(uVar8 * 0x1000 + *(int *)(in_ECX + 0x40));
      GlobalMemoryStatus(&local_20);
      if (local_20.dwAvailPhys < 0x4000) {
        FUN_00401020("MemoryHeap::MemoryProblem");
        if (DAT_00b02184 != (code *)0x0) {
          (*DAT_00b02184)(0,0x4000,DAT_00b32b04);
        }
        FUN_00401040();
      }
      pvVar4 = VirtualAlloc(lpAddress,0x1000,0x1000,4);
      if (pvVar4 != (LPVOID)0x0) {
        uVar7 = 0;
        *(undefined2 *)(*(int *)(in_ECX + 0x108) + uVar8 * 2) = 0;
        if (uVar3 != 0) {
          do {
            puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x100) * uVar7 + (int)lpAddress);
            *puVar5 = 0;
            puVar5[1] = *(undefined4 *)(in_ECX + 0x44);
            if (*(undefined4 **)(in_ECX + 0x44) != (undefined4 *)0x0) {
              **(undefined4 **)(in_ECX + 0x44) = puVar5;
            }
            *(int *)(in_ECX + 0x114) = *(int *)(in_ECX + 0x114) + 1;
            uVar7 = uVar7 + 1;
            *(undefined4 **)(in_ECX + 0x44) = puVar5;
          } while (uVar7 < uVar3);
        }
        *(int *)(in_ECX + 0x118) = *(int *)(in_ECX + 0x118) + 1;
        if (*(uint *)(in_ECX + 0x104) < *(uint *)(in_ECX + 0x118)) {
          *(uint *)(in_ECX + 0x104) = *(uint *)(in_ECX + 0x118);
        }
        goto LAB_004025ac;
      }
    }
  }
  return (int *)0x0;
}



int FUN_00402600(undefined4 *param_1)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = *(undefined4 *)(in_ECX + 0x44);
    if (*(undefined4 **)(in_ECX + 0x44) != (undefined4 *)0x0) {
      **(undefined4 **)(in_ECX + 0x44) = param_1;
    }
    *(int *)(in_ECX + 0x114) = *(int *)(in_ECX + 0x114) + 1;
    *(undefined4 **)(in_ECX + 0x44) = param_1;
    iVar3 = *(int *)(in_ECX + 0x108);
    uVar2 = (uint)((int)param_1 - *(int *)(in_ECX + 0x40)) >> 0xc;
    psVar1 = (short *)(iVar3 + uVar2 * 2);
    *psVar1 = *psVar1 + -1;
    iVar3 = iVar3 + uVar2 * 2;
  }
  return iVar3;
}



void FUN_00402640(void)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int *lpAddress;
  int iVar5;
  uint uVar6;
  int iStack_8;
  
  FUN_00401020("MemoryPool::FreeUnusedPagesForAllPools()");
  uVar6 = 0;
  bVar2 = false;
  if (*(int *)(in_ECX + 0x10c) != 0) {
    iStack_8 = 0;
    do {
      if (*(short *)(*(int *)(in_ECX + 0x108) + uVar6 * 2) == 0) {
        if (!bVar2) {
          if (1 < *(uint *)(in_ECX + 0x114)) {
            uVar3 = FUN_00402190(*(undefined4 *)(in_ECX + 0x44));
            *(undefined4 *)(in_ECX + 0x44) = uVar3;
          }
          bVar2 = true;
        }
        iVar4 = (int)(0x1000 / (ulonglong)*(uint *)(in_ECX + 0x100));
        lpAddress = (int *)(*(int *)(in_ECX + 0x40) + iStack_8);
        iVar5 = (iVar4 + -1) * *(uint *)(in_ECX + 0x100);
        if (*lpAddress == 0) {
          *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)((int)lpAddress + iVar5 + 4);
        }
        else {
          *(undefined4 *)(*lpAddress + 4) = *(undefined4 *)((int)lpAddress + iVar5 + 4);
        }
        piVar1 = *(int **)((int)lpAddress + iVar5 + 4);
        if (piVar1 != (int *)0x0) {
          *piVar1 = *lpAddress;
        }
        *(int *)(in_ECX + 0x114) = *(int *)(in_ECX + 0x114) - iVar4;
        VirtualFree(lpAddress,0x1000,0x4000);
        *(undefined2 *)(*(int *)(in_ECX + 0x108) + uVar6 * 2) = 0xffff;
        *(int *)(in_ECX + 0x118) = *(int *)(in_ECX + 0x118) + -1;
      }
      iStack_8 = iStack_8 + 0x1000;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(in_ECX + 0x10c));
  }
  FUN_00401040();
  return;
}



void FUN_00402740(void)

{
  uint uVar1;
  
  FUN_00401020("MemoryPool::FreeUnusedPagesForAllPools()");
  uVar1 = 0;
  do {
    if (*(int *)((int)&DAT_00b33080 + uVar1) != 0) {
      FUN_00401020("FreeUnusedPagesForAllPools()");
      FUN_00402640();
      FUN_00401040();
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x204);
  FUN_00401040();
  return;
}



void FUN_004027a0(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)((int)&DAT_00b33080 + uVar2);
    if (iVar1 != 0) {
      FUN_00402400();
      FUN_00401f20(iVar1);
    }
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x204);
  return;
}



void FUN_004027d0(void)

{
  int *piVar1;
  int *in_ECX;
  
  if (*in_ECX != 0) {
    piVar1 = (int *)(*in_ECX + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
      return;
    }
  }
  return;
}



int * FUN_004027f0(byte param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,4,in_ECX[-1],FUN_007016a0);
    if ((param_1 & 1) != 0) {
      FUN_00401f20(in_ECX + -1);
    }
    return in_ECX + -1;
  }
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return in_ECX;
}



void FUN_00402860(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = FUN_0046b250(0x35);
  *in_ECX = uVar1;
  uVar1 = FUN_0046b250(0x36);
  in_ECX[1] = uVar1;
  uVar1 = FUN_0046b250(0x37);
  in_ECX[2] = uVar1;
  uVar1 = FUN_0046b250(0x38);
  in_ECX[3] = uVar1;
  uVar1 = FUN_0046b250(0x39);
  in_ECX[4] = uVar1;
  uVar1 = FUN_0046b250(0x3a);
  in_ECX[5] = uVar1;
  return;
}



void FUN_004028b0(int param_1,char *param_2)

{
  char cVar1;
  
  param_1 = param_1 - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[param_1] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return;
}



bool FUN_004028d0(char *param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined4 *in_ECX;
  uint uVar6;
  
  if (param_1 != (char *)0x0) {
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar4 - (int)(param_1 + 1);
    if (param_2 < (uint)((int)pcVar4 - (int)(param_1 + 1))) goto LAB_004028fa;
  }
  uVar6 = param_2;
LAB_004028fa:
  if (*(ushort *)((int)in_ECX + 6) < uVar6) {
    uVar2 = *in_ECX;
    puVar5 = (undefined1 *)FUN_00401f00(uVar6 + 1);
    *in_ECX = puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      uVar6 = 0;
    }
    else if (param_1 == (char *)0x0) {
      *puVar5 = 0;
    }
    else {
      FUN_004028b0(puVar5,param_1);
    }
    FUN_00401f20(uVar2);
    uVar3 = (undefined2)uVar6;
    if (0xffff < uVar6) {
      uVar3 = 0xffff;
    }
    *(undefined2 *)((int)in_ECX + 6) = uVar3;
  }
  else {
    if (uVar6 == 0) {
      FUN_00401f20(*in_ECX);
      *(undefined2 *)(in_ECX + 1) = 0;
      *in_ECX = 0;
      *(undefined2 *)((int)in_ECX + 6) = 0;
      return false;
    }
    if (param_1 == (char *)0x0) {
      *(undefined1 *)*in_ECX = 0;
    }
    else {
      FUN_004028b0(*in_ECX,param_1);
    }
  }
  if (uVar6 < 0x10000) {
    *(short *)(in_ECX + 1) = (short)uVar6;
    return uVar6 != 0;
  }
  *(undefined2 *)(in_ECX + 1) = 0xffff;
  return uVar6 != 0;
}



float10 FUN_004029d0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(*(int *)(in_ECX + 0x14) + 0x24);
}



void FUN_004029e0(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  ushort uVar5;
  int *in_ECX;
  float local_c;
  
  fVar3 = (*(float *)(in_ECX[5] + 0x24) * param_1) / 3600.0 + *(float *)(in_ECX[3] + 0x24);
  if (24.0 < fVar3) {
    local_c = *(float *)(in_ECX[2] + 0x24);
    fVar1 = *(float *)(in_ECX[1] + 0x24);
    fVar2 = *(float *)(*in_ECX + 0x24);
    cVar4 = FUN_009828c0();
    uVar5 = FUN_0047d2b0((int)cVar4);
    do {
      fVar3 = fVar3 - 24.0;
      local_c = local_c + 1.0;
      if ((DAT_00b333c4 != 0) && (cVar4 = FUN_005e04c0(), cVar4 != '\0')) {
        *(int *)(DAT_00b333c4 + 0x6b0) = *(int *)(DAT_00b333c4 + 0x6b0) + 1;
      }
      *(float *)(in_ECX[4] + 0x24) = *(float *)(in_ECX[4] + 0x24) + 1.0;
    } while (24.0 < fVar3);
    if ((float)uVar5 < local_c) {
      local_c = local_c - (float)uVar5;
      fVar1 = fVar1 + 1.0;
      if (12.0 <= fVar1) {
        fVar1 = fVar1 - 12.0;
        *(float *)(*in_ECX + 0x24) = fVar2 + 1.0;
      }
      *(float *)(in_ECX[1] + 0x24) = fVar1;
    }
    *(float *)(in_ECX[2] + 0x24) = local_c;
  }
  *(float *)(in_ECX[3] + 0x24) = fVar3;
  return;
}



undefined4 FUN_00402b40(void)

{
  float fVar1;
  int *in_ECX;
  undefined4 local_8;
  
  if (*in_ECX == 0) {
    fVar1 = 427.0;
  }
  else {
    fVar1 = *(float *)(*in_ECX + 0x24);
  }
  local_8 = (undefined4)(longlong)ROUND(fVar1);
  return local_8;
}



int FUN_00402b80(void)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    cVar1 = FUN_009828c0();
    return (int)cVar1;
  }
  return 7;
}



void FUN_00402ba0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_009828c0();
    return;
  }
  FUN_009828c0();
  return;
}



float10 FUN_00402bd0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    return (float10)*(float *)(*(int *)(in_ECX + 0xc) + 0x24);
  }
  return (float10)12.0;
}



undefined4 FUN_00402c00(void)

{
  float fVar1;
  int in_ECX;
  undefined4 local_8;
  
  if (*(int *)(in_ECX + 0x10) == 0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = *(float *)(*(int *)(in_ECX + 0x10) + 0x24);
  }
  local_8 = (undefined4)(longlong)ROUND(fVar1);
  return local_8;
}



uint FUN_00402c40(void)

{
  float fVar1;
  int in_ECX;
  undefined4 local_8;
  
  if (*(int *)(in_ECX + 0x10) == 0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = *(float *)(*(int *)(in_ECX + 0x10) + 0x24);
  }
  local_8 = (uint)(longlong)ROUND(fVar1);
  return local_8 % 7;
}



char * FUN_00402c90(void)

{
  float fVar1;
  int in_ECX;
  uint local_8;
  
  if (*(int *)(in_ECX + 0x10) == 0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = *(float *)(*(int *)(in_ECX + 0x10) + 0x24);
  }
  local_8 = (uint)(longlong)ROUND(fVar1);
  local_8 = local_8 % 7;
  if ((local_8 != 0xffffffff) && (local_8 < 7)) {
    if ((undefined4 *)(&PTR_DAT_00b06fd4)[local_8] != (undefined4 *)0x0) {
      return *(char **)(&PTR_DAT_00b06fd4)[local_8];
    }
    return (char *)0x0;
  }
  return "Bad Day";
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_00402d00(char *param_1,va_list param_2)

{
  int iVar1;
  char local_404 [1024];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_404;
  iVar1 = _vsprintf(local_404,param_1,param_2);
  FUN_004028d0(local_404,0);
  return iVar1;
}



void FUN_00402d60(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  return;
}



void FUN_00402d70(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  FUN_004028d0(*param_1,0);
  return;
}



void FUN_00402da0(void)

{
  undefined4 *in_ECX;
  
  FUN_00401f20(*in_ECX);
  *in_ECX = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  return;
}



undefined4 FUN_00402dc0(void)

{
  char cVar1;
  uint uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    uVar2 = 7;
  }
  else {
    cVar1 = FUN_009828c0();
    uVar2 = (uint)cVar1;
    if (0xb < uVar2) {
      return 0;
    }
  }
  switch(uVar2) {
  case 0:
  case 1:
  case 0xb:
    return 3;
  case 2:
  case 3:
  case 4:
    return 0;
  default:
    return 1;
  case 8:
  case 9:
  case 10:
    return 2;
  }
}



void FUN_00402e30(undefined4 param_1,undefined4 param_2)

{
  FUN_00402d00(param_2,&stack0x0000000c);
  return;
}



undefined4 * FUN_00402e50(undefined4 *param_1)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009a9dc9;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  local_4 = 0;
  if (*in_ECX == 0) {
    fVar1 = 427.0;
  }
  else {
    fVar1 = *(float *)(*in_ECX + 0x24);
  }
  if (in_ECX[1] == 0) {
    iVar4 = 7;
  }
  else {
    cVar2 = FUN_009828c0(uVar3);
    iVar4 = (int)cVar2;
  }
  if ((undefined4 *)(&PTR_DAT_00b06fa4)[iVar4] != (undefined4 *)0x0) {
    uVar5 = *(undefined4 *)(&PTR_DAT_00b06fa4)[iVar4];
  }
  local_14 = (undefined4)(longlong)ROUND(fVar1);
  cVar2 = FUN_009828c0(local_14);
  FUN_00402e30(param_1,"%s %d, 3E%d",uVar5,(int)cVar2);
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



undefined4 FUN_00402f50(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)(param_1 * 0xa0 + 0x30 + in_ECX);
  switch(param_2) {
  case 1:
    return *puVar1;
  case 2:
    return puVar1[1];
  case 3:
    return puVar1[2];
  case 4:
    return puVar1[3];
  case 5:
    return puVar1[4];
  case 6:
    return puVar1[5];
  default:
    return 0;
  }
}



undefined4 FUN_00402fc0(int param_1,int param_2,undefined4 param_3)

{
  int in_ECX;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = in_ECX + param_1 * 0xa0;
  uVar2 = 0;
  switch(param_3) {
  case 0:
    if ((*(byte *)(iVar1 + 0x60 + param_2) & 0x80) != 0) {
      return 1;
    }
    break;
  case 1:
    if (((*(byte *)(iVar1 + 0xb0 + param_2) & 0x80) == 0) &&
       ((*(byte *)(iVar1 + 0x60 + param_2) & 0x80) != 0)) {
      return 1;
    }
    break;
  case 2:
    if (((*(byte *)(iVar1 + 0x60 + param_2) & 0x80) == 0) &&
       ((*(byte *)(iVar1 + 0xb0 + param_2) & 0x80) != 0)) {
      return 1;
    }
    break;
  case 3:
    if ((char)(*(byte *)(iVar1 + 0xb0 + param_2) ^ *(byte *)(iVar1 + 0x60 + param_2)) < '\0') {
      uVar2 = 1;
    }
  }
  return uVar2;
}



int FUN_00403070(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x50 + (param_2 + param_1 * 0x28) * 4);
  if ((short)iVar1 == -1) {
    return -1;
  }
  return iVar1 / 0x1194 + 0x20;
}



undefined4 FUN_004030b0(int param_1)

{
  int in_ECX;
  
  return *(undefined4 *)((param_1 + 0x88) * 0x2c + in_ECX);
}



undefined4 FUN_004030d0(int param_1)

{
  int in_ECX;
  
  return *(undefined4 *)(param_1 * 0x2c + 0x1764 + in_ECX);
}



void FUN_004030f0(int param_1,float param_2)

{
  int *piVar1;
  int in_ECX;
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = *(int **)(in_ECX + 8 + param_1 * 4);
  local_8 = 0;
  local_c = 0;
  local_14 = 0x14;
  local_10 = 0x10;
  local_1c = (undefined4)(longlong)ROUND(param_2 * 10000.0);
  local_4 = local_1c;
  (**(code **)(*piVar1 + 0x18))(piVar1,5,&local_14);
  return;
}



void FUN_00403160(void)

{
  int in_ECX;
  undefined4 local_4;
  
  if (*(int *)(in_ECX + 0x28) != 0) {
    local_4 = 0xffffffff;
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x28))(*(int **)(in_ECX + 0x28),0x14,0,&local_4,0);
  }
  return;
}



undefined4 FUN_00403190(int param_1)

{
  int in_ECX;
  
  if (param_1 == 1) {
    return *(undefined4 *)(in_ECX + 0x1b20);
  }
  if (param_1 != 2) {
    if (param_1 != 3) {
      return 0;
    }
    return *(undefined4 *)(in_ECX + 0x1b28);
  }
  return *(undefined4 *)(in_ECX + 0x1b24);
}



undefined4 FUN_004031d0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x1b04);
}



undefined4 FUN_004031e0(uint param_1,undefined4 param_2)

{
  int in_ECX;
  undefined4 uVar1;
  bool bVar2;
  
  uVar1 = 0;
  if (param_1 == 8) {
    if (*(int *)(in_ECX + 0x1b28) < 1) {
      return 0;
    }
    return 1;
  }
  if (param_1 == 9) {
    if (-1 < *(int *)(in_ECX + 0x1b28)) {
      return 0;
    }
    return 1;
  }
  if (param_1 == 0) {
    if (*(int *)(in_ECX + 0x1b48) != 0) {
      param_1 = 1;
    }
  }
  else if ((param_1 == 1) && (*(int *)(in_ECX + 0x1b48) != 0)) {
    param_1 = 0;
  }
  switch(param_2) {
  case 0:
    bVar2 = (*(byte *)(param_1 + 0x1b2c + in_ECX) & 0x80) == 0;
    break;
  case 1:
    if ((*(byte *)(param_1 + 0x1b40 + in_ECX) & 0x80) != 0) {
      return 0;
    }
    bVar2 = (*(byte *)(param_1 + 0x1b2c + in_ECX) & 0x80) == 0;
    break;
  case 2:
    if ((*(byte *)(param_1 + 0x1b2c + in_ECX) & 0x80) != 0) {
      return 0;
    }
    bVar2 = (*(byte *)(param_1 + 0x1b40 + in_ECX) & 0x80) == 0;
    break;
  case 3:
    if (-1 < (char)(*(byte *)(param_1 + 0x1b40 + in_ECX) ^ *(byte *)(param_1 + 0x1b2c + in_ECX))) {
      return 0;
    }
    return 1;
  case 4:
    if (7 < param_1) {
      return 0;
    }
    bVar2 = *(char *)(param_1 + 0x1b50 + in_ECX) == '\0';
    break;
  default:
    goto switchD_00403225_default;
  }
  if (!bVar2) {
    uVar1 = 1;
  }
switchD_00403225_default:
  return uVar1;
}



undefined4 FUN_004032d0(int param_1,undefined4 param_2)

{
  int in_ECX;
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    if ((*(byte *)(param_1 + 0x18f4 + in_ECX) & 0x80) != 0) {
      return 1;
    }
    break;
  case 1:
    if (((*(byte *)(param_1 + 0x19f4 + in_ECX) & 0x80) == 0) &&
       ((*(byte *)(param_1 + 0x18f4 + in_ECX) & 0x80) != 0)) {
      return 1;
    }
    break;
  case 2:
    if (((*(byte *)(param_1 + 0x18f4 + in_ECX) & 0x80) == 0) &&
       ((*(byte *)(param_1 + 0x19f4 + in_ECX) & 0x80) != 0)) {
      return 1;
    }
    break;
  case 3:
    if ((char)(*(byte *)(param_1 + 0x19f4 + in_ECX) ^ *(byte *)(param_1 + 0x18f4 + in_ECX)) < '\0')
    {
      uVar1 = 1;
    }
  }
  return uVar1;
}



uint FUN_00403380(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint in_EAX;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if (param_1 < 0xe) {
    in_EAX = (uint)(*(char *)(param_1 + 0x1b7e + in_ECX) == -1);
    if (*(char *)(in_EAX * 0x1d + param_1 + 0x1b7e + in_ECX) == -1) {
      in_EAX = in_EAX + 1;
    }
    pbVar1 = (byte *)(in_EAX * 0x1d + param_1 + 0x1b7e + in_ECX);
    bVar2 = *pbVar1;
    if (bVar2 != 0xff) {
      if (in_EAX == 0) {
        uVar3 = (uint)*(byte *)(param_1 + 0x1b7e + in_ECX);
        pbVar1 = (byte *)(uVar3 + 0x18f4 + in_ECX);
        *pbVar1 = *pbVar1 | 0x80;
        in_EAX = uVar3 + 0x18f4 + in_ECX;
      }
      else {
        if (in_EAX == 1) {
          uVar3 = (uint)*(byte *)(param_1 + 0x1b9b + in_ECX);
          pbVar1 = (byte *)(uVar3 + 0x1b2c + in_ECX);
          *pbVar1 = *pbVar1 | 0x80;
          return uVar3 + 0x1b2c + in_ECX;
        }
        bVar7 = in_EAX != 0xff;
        in_EAX = 0;
        if (bVar7) {
          if (bVar2 < 0x20) {
            pbVar1 = (byte *)(bVar2 + 0x60 + in_ECX);
            *pbVar1 = *pbVar1 | 0x80;
            return bVar2 + 0x60 + in_ECX;
          }
          uVar3 = *(uint *)(in_ECX + 0x50);
          iVar5 = *pbVar1 - 0x20;
          iVar6 = iVar5 * 0x1194;
          if (uVar3 != 0xffffffff) {
            uVar3 = uVar3 + iVar5 * -0x1194;
            uVar4 = (int)uVar3 >> 0x1f;
            uVar3 = (uVar3 ^ uVar4) - uVar4;
            if (uVar3 == 9000) {
              uVar3 = FUN_009828c0();
              *(uint *)(in_ECX + 0x50) = iVar6 + uVar3;
              return uVar3;
            }
            if (uVar3 == 27000) {
              iVar6 = 0x7b0c;
            }
          }
          *(int *)(in_ECX + 0x50) = iVar6;
          return uVar3;
        }
      }
    }
  }
  return in_EAX;
}



uint FUN_00403490(int param_1,byte param_2,undefined4 param_3)

{
  uint uVar1;
  int in_ECX;
  
  if (param_1 == 0) {
    uVar1 = FUN_004032d0(param_2,param_3);
    return uVar1;
  }
  if (param_1 != 1) {
    if ((param_1 != 0xff) && (param_1 = param_1 + -2, param_1 < *(int *)(in_ECX + 0x18f0))) {
      if (param_2 < 0x20) {
        uVar1 = FUN_00402fc0(param_1,param_2,param_3);
        return uVar1;
      }
      uVar1 = FUN_00403070(param_1,0);
      return (uint)(uVar1 == param_2);
    }
    return 0;
  }
  uVar1 = FUN_004031e0(param_2,param_3);
  return uVar1;
}



uint FUN_00403520(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  if (param_1 < 0x1d) {
    uVar3 = 0;
    iVar4 = 0;
    pcVar2 = (char *)(param_1 + 0x1b7e + in_ECX);
    do {
      if (*pcVar2 != -1) {
        iVar1 = FUN_00403490(iVar4,*pcVar2,param_2);
        uVar3 = uVar3 + iVar1;
      }
      iVar4 = iVar4 + 1;
      pcVar2 = pcVar2 + 0x1d;
    } while (iVar4 < 3);
    return uVar3;
  }
  if (param_1 == 0x1d) {
    if ((*(byte *)(in_ECX + 0x19f5) & 0x80) != 0) {
      return 0;
    }
    bVar5 = (*(byte *)(in_ECX + 0x18f5) & 0x80) == 0;
  }
  else if (param_1 == 0x1e) {
    if ((*(byte *)(in_ECX + 0x1a1d) & 0x80) != 0) {
      return 0;
    }
    bVar5 = (*(byte *)(in_ECX + 0x191d) & 0x80) == 0;
  }
  else {
    if (param_1 != 0x1f) {
      return 0;
    }
    if ((*(byte *)(in_ECX + 0x1aab) & 0x80) != 0) {
      return 0;
    }
    bVar5 = (*(byte *)(in_ECX + 0x19ab) & 0x80) == 0;
  }
  return (uint)!bVar5;
}



undefined4 FUN_004035d0(int param_1,uint *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  pbVar6 = (byte *)(param_1 + 4);
  uVar4 = 0x10;
  pbVar1 = (byte *)&DAT_00a78f44;
  pbVar3 = pbVar6;
  do {
    if (*(int *)pbVar3 != *(int *)pbVar1) goto LAB_004035fe;
    uVar4 = uVar4 - 4;
    pbVar1 = pbVar1 + 4;
    pbVar3 = pbVar3 + 4;
  } while (3 < uVar4);
  if (uVar4 == 0) {
LAB_0040365b:
    iVar2 = 0;
  }
  else {
LAB_004035fe:
    iVar5 = (uint)*pbVar3 - (uint)*pbVar1;
    if (iVar5 == 0) {
      if (uVar4 == 1) goto LAB_0040365b;
      iVar5 = (uint)pbVar3[1] - (uint)pbVar1[1];
      if (iVar5 == 0) {
        if (uVar4 == 2) goto LAB_0040365b;
        iVar5 = (uint)pbVar3[2] - (uint)pbVar1[2];
        if (iVar5 == 0) {
          if ((uVar4 == 3) || (iVar5 = (uint)pbVar3[3] - (uint)pbVar1[3], iVar5 == 0))
          goto LAB_0040365b;
        }
      }
    }
    iVar2 = 1;
    if (iVar5 < 1) {
      iVar2 = -1;
    }
  }
  if (iVar2 == 0) {
    *param_2 = *param_2 | 1;
  }
  uVar4 = 0x10;
  pbVar1 = (byte *)&DAT_00a78f34;
  pbVar3 = pbVar6;
  do {
    if (*(int *)pbVar3 != *(int *)pbVar1) goto LAB_0040368d;
    uVar4 = uVar4 - 4;
    pbVar1 = pbVar1 + 4;
    pbVar3 = pbVar3 + 4;
  } while (3 < uVar4);
  if (uVar4 == 0) {
LAB_004036ea:
    iVar2 = 0;
  }
  else {
LAB_0040368d:
    iVar5 = (uint)*pbVar3 - (uint)*pbVar1;
    if (iVar5 == 0) {
      if (uVar4 == 1) goto LAB_004036ea;
      iVar5 = (uint)pbVar3[1] - (uint)pbVar1[1];
      if (iVar5 == 0) {
        if (uVar4 == 2) goto LAB_004036ea;
        iVar5 = (uint)pbVar3[2] - (uint)pbVar1[2];
        if (iVar5 == 0) {
          if ((uVar4 == 3) || (iVar5 = (uint)pbVar3[3] - (uint)pbVar1[3], iVar5 == 0))
          goto LAB_004036ea;
        }
      }
    }
    iVar2 = 1;
    if (iVar5 < 1) {
      iVar2 = -1;
    }
  }
  if (iVar2 == 0) {
    *param_2 = *param_2 | 2;
  }
  uVar4 = 0x10;
  pbVar1 = (byte *)&DAT_00a78f24;
  pbVar3 = pbVar6;
  do {
    if (*(int *)pbVar3 != *(int *)pbVar1) goto LAB_00403718;
    uVar4 = uVar4 - 4;
    pbVar1 = pbVar1 + 4;
    pbVar3 = pbVar3 + 4;
  } while (3 < uVar4);
  if (uVar4 == 0) {
LAB_00403775:
    iVar2 = 0;
  }
  else {
LAB_00403718:
    iVar5 = (uint)*pbVar3 - (uint)*pbVar1;
    if (iVar5 == 0) {
      if (uVar4 == 1) goto LAB_00403775;
      iVar5 = (uint)pbVar3[1] - (uint)pbVar1[1];
      if (iVar5 == 0) {
        if (uVar4 == 2) goto LAB_00403775;
        iVar5 = (uint)pbVar3[2] - (uint)pbVar1[2];
        if (iVar5 == 0) {
          if ((uVar4 == 3) || (iVar5 = (uint)pbVar3[3] - (uint)pbVar1[3], iVar5 == 0))
          goto LAB_00403775;
        }
      }
    }
    iVar2 = 1;
    if (iVar5 < 1) {
      iVar2 = -1;
    }
  }
  if (iVar2 == 0) {
    *param_2 = *param_2 | 4;
  }
  uVar4 = 0x10;
  pbVar1 = (byte *)&DAT_00a78f14;
  pbVar3 = pbVar6;
  do {
    if (*(int *)pbVar3 != *(int *)pbVar1) goto LAB_004037a8;
    uVar4 = uVar4 - 4;
    pbVar1 = pbVar1 + 4;
    pbVar3 = pbVar3 + 4;
  } while (3 < uVar4);
  if (uVar4 == 0) {
LAB_00403805:
    iVar2 = 0;
  }
  else {
LAB_004037a8:
    iVar5 = (uint)*pbVar3 - (uint)*pbVar1;
    if (iVar5 == 0) {
      if (uVar4 == 1) goto LAB_00403805;
      iVar5 = (uint)pbVar3[1] - (uint)pbVar1[1];
      if (iVar5 == 0) {
        if (uVar4 == 2) goto LAB_00403805;
        iVar5 = (uint)pbVar3[2] - (uint)pbVar1[2];
        if (iVar5 == 0) {
          if ((uVar4 == 3) || (iVar5 = (uint)pbVar3[3] - (uint)pbVar1[3], iVar5 == 0))
          goto LAB_00403805;
        }
      }
    }
    iVar2 = 1;
    if (iVar5 < 1) {
      iVar2 = -1;
    }
  }
  if (iVar2 == 0) {
    *param_2 = *param_2 | 8;
  }
  uVar4 = 0x10;
  pbVar1 = (byte *)&DAT_00a78f04;
  pbVar3 = pbVar6;
  do {
    if (*(int *)pbVar3 != *(int *)pbVar1) goto LAB_00403838;
    uVar4 = uVar4 - 4;
    pbVar1 = pbVar1 + 4;
    pbVar3 = pbVar3 + 4;
  } while (3 < uVar4);
  if (uVar4 == 0) {
LAB_00403895:
    iVar2 = 0;
  }
  else {
LAB_00403838:
    iVar5 = (uint)*pbVar3 - (uint)*pbVar1;
    if (iVar5 == 0) {
      if (uVar4 == 1) goto LAB_00403895;
      iVar5 = (uint)pbVar3[1] - (uint)pbVar1[1];
      if (iVar5 == 0) {
        if (uVar4 == 2) goto LAB_00403895;
        iVar5 = (uint)pbVar3[2] - (uint)pbVar1[2];
        if (iVar5 == 0) {
          if ((uVar4 == 3) || (iVar5 = (uint)pbVar3[3] - (uint)pbVar1[3], iVar5 == 0))
          goto LAB_00403895;
        }
      }
    }
    iVar2 = 1;
    if (iVar5 < 1) {
      iVar2 = -1;
    }
  }
  if (iVar2 == 0) {
    *param_2 = *param_2 | 0x10;
  }
  uVar4 = 0x10;
  pbVar3 = (byte *)&DAT_00a78ef4;
  do {
    if (*(int *)pbVar6 != *(int *)pbVar3) goto LAB_004038c8;
    uVar4 = uVar4 - 4;
    pbVar3 = pbVar3 + 4;
    pbVar6 = pbVar6 + 4;
  } while (3 < uVar4);
  if (uVar4 == 0) {
LAB_00403925:
    iVar2 = 0;
  }
  else {
LAB_004038c8:
    iVar5 = (uint)*pbVar6 - (uint)*pbVar3;
    if (iVar5 == 0) {
      if (uVar4 == 1) goto LAB_00403925;
      iVar5 = (uint)pbVar6[1] - (uint)pbVar3[1];
      if (iVar5 == 0) {
        if (uVar4 == 2) goto LAB_00403925;
        iVar5 = (uint)pbVar6[2] - (uint)pbVar3[2];
        if (iVar5 == 0) {
          if ((uVar4 == 3) || (iVar5 = (uint)pbVar6[3] - (uint)pbVar3[3], iVar5 == 0))
          goto LAB_00403925;
        }
      }
    }
    iVar2 = 1;
    if (iVar5 < 1) {
      iVar2 = -1;
    }
  }
  if (iVar2 == 0) {
    *param_2 = *param_2 | 0x20;
  }
  if ((*(byte *)(param_1 + 0x18) & 0xc) != 0) {
    param_2[1] = param_2[1] | 1 << ((byte)((uint)*(undefined4 *)(param_1 + 0x18) >> 8) & 0x1f);
  }
  return 1;
}



void FUN_00403960(int param_1)

{
  int iVar1;
  byte *in_ECX;
  
  iVar1 = 0;
  do {
    if (-1 < param_1) {
      if (param_1 < 3) {
        in_ECX[param_1 * 0x1d + iVar1 + 0x1b7e] = 0xff;
      }
      else if (param_1 == 3) {
        in_ECX[iVar1 + 0x1b7e] = 0xff;
        in_ECX[iVar1 + 0x1b9b] = 0xff;
        in_ECX[iVar1 + 0x1bb8] = 0xff;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  if ((param_1 == 0) || (param_1 == 3)) {
    in_ECX[0x1b7e] = 0x11;
    in_ECX[0x1b7f] = 0x1f;
    in_ECX[0x1b80] = 0x1e;
    in_ECX[0x1b81] = 0x20;
    in_ECX[0x1b83] = 0x39;
    in_ECX[0x1b84] = 0x38;
    in_ECX[0x1b85] = 0x2e;
    in_ECX[0x1b86] = 0x21;
    in_ECX[0x1b87] = 0x1d;
    in_ECX[0x1b88] = 0x2a;
    in_ECX[0x1b89] = 0x3a;
    in_ECX[0x1b8a] = 0x10;
    in_ECX[0x1b8b] = 0x12;
    in_ECX[0x1b8c] = 0x13;
    in_ECX[0x1b8e] = 0x14;
    in_ECX[0x1b8d] = 0xf;
    in_ECX[0x1b8f] = 0x3b;
    in_ECX[0x1b90] = 2;
    in_ECX[0x1b91] = 3;
    in_ECX[0x1b92] = 4;
    in_ECX[0x1b93] = 5;
    in_ECX[0x1b94] = 6;
    in_ECX[0x1b95] = 7;
    in_ECX[0x1b96] = 8;
    in_ECX[0x1b97] = 9;
    in_ECX[0x1b98] = 0x3f;
    in_ECX[0x1b99] = 0x43;
    in_ECX[0x1b9a] = 0x2c;
  }
  if ((param_1 == 1) || (param_1 == 3)) {
    in_ECX[0x1b9f] = 0;
    in_ECX[0x1ba1] = 1;
    in_ECX[0x1ba9] = 2;
  }
  if (((param_1 == 2) || (param_1 == 3)) && ((*in_ECX & 1) != 0)) {
    in_ECX[0x1bc1] = 0;
    in_ECX[0x1bc5] = 1;
    in_ECX[0x1bc0] = 2;
    in_ECX[0x1bbd] = 3;
    in_ECX[0x1bc7] = 4;
    in_ECX[0x1bc6] = 5;
    in_ECX[0x1bbf] = 6;
    in_ECX[0x1bd4] = 7;
    in_ECX[0x1bbe] = 8;
    in_ECX[0x1bbc] = 9;
    in_ECX[0x1bc8] = 10;
    in_ECX[0x1bd5] = 0xb;
    in_ECX[0x1bca] = 0x20;
    in_ECX[0x1bcb] = 0x21;
    in_ECX[0x1bcc] = 0x22;
    in_ECX[0x1bcd] = 0x23;
    in_ECX[0x1bce] = 0x24;
    in_ECX[0x1bcf] = 0x25;
    in_ECX[0x1bd0] = 0x26;
    in_ECX[0x1bd1] = 0x27;
  }
  return;
}



void FUN_00403b50(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = 0;
  iVar1 = param_1 * 0x1d + 0x1b7e + in_ECX;
  do {
    if (*(byte *)(iVar1 + iVar2) == param_2) {
      *(undefined1 *)(iVar1 + iVar2) = 0xff;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1d);
  return;
}



void FUN_00403b80(int param_1,int param_2,char param_3)

{
  int in_ECX;
  
  if ((param_2 != 0) || (((param_3 != -0x49 && (param_3 != '\x01')) && (param_3 != ')')))) {
    FUN_00403b50(param_2,param_3);
    *(char *)(param_2 * 0x1d + param_1 + 0x1b7e + in_ECX) = param_3;
  }
  return;
}



void FUN_00403be0(void)

{
  int in_ECX;
  
  if (in_ECX == 0) {
    DAT_00b35464 = 0;
  }
  return;
}



void FUN_00403c00(void)

{
  int in_ECX;
  
  if (in_ECX == 0) {
    DAT_00b35464 = 0;
  }
  return;
}



undefined4 FUN_00403c90(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined4 uStack_10;
  
  if (*(int *)(in_ECX + 0x28) != 0) {
    piVar1 = *(int **)(in_ECX + 0x28);
    iVar2 = (**(code **)(*piVar1 + 0x28))();
    if ((iVar2 == 0) && (piVar1 != (int *)0x0)) {
      *uStack_10 = 0x14;
      return 1;
    }
  }
  return 0;
}



uint FUN_00403cf0(uint param_1,int param_2)

{
  if (0xff < param_1) {
    return 0xffffffff;
  }
  switch(DAT_00b02c44) {
  case 1:
    break;
  case 2:
    if (param_2 == 0) {
      return (uint)(byte)(&DAT_00b02598)[param_1];
    }
    return (uint)(byte)(&DAT_00b02698)[param_1];
  case 3:
    if (param_2 == 0) {
      return (uint)(byte)(&DAT_00b02798)[param_1];
    }
    return (uint)(byte)(&DAT_00b02898)[param_1];
  case 4:
    if (param_2 == 0) {
      return (uint)(byte)(&DAT_00b02998)[param_1];
    }
    return (uint)(byte)(&DAT_00b02a98)[param_1];
  default:
    if (param_2 == 0) {
      return (uint)(byte)(&DAT_00b02198)[param_1];
    }
    return (uint)(byte)(&DAT_00b02298)[param_1];
  }
  if (param_2 == 0) {
    return (uint)(byte)(&DAT_00b02398)[param_1];
  }
  return (uint)(byte)(&DAT_00b02498)[param_1];
}



undefined4 FUN_00403f50(int param_1,int param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  
  if ((param_2 == 0) &&
     (((((param_3 == '\x01' || (param_3 == ')')) || (param_3 == -0x49)) ||
       (((param_3 == '\x02' || (param_3 == '\x03')) ||
        ((param_3 == '\x04' || ((param_3 == '\x05' || (param_3 == '\x06')))))))) ||
      ((param_3 == '\a' ||
       (((((param_3 == '\b' || (param_3 == '\t')) || (param_3 == ';')) ||
         ((param_3 == '<' || (param_3 == '=')))) || (param_3 == '>')))))))) {
    return 0;
  }
  iVar1 = 0;
  param_2 = param_2 * 0x1d;
  do {
    if (*(char *)(param_2 + 0x1b7e + in_ECX + iVar1) == param_3) {
      *(undefined1 *)(iVar1 + param_2 + 0x1b7e + in_ECX) =
           *(undefined1 *)(param_1 + param_2 + 0x1b7e + in_ECX);
      *(char *)(param_2 + param_1 + 0x1b7e + in_ECX) = param_3;
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  *(char *)(param_2 + param_1 + 0x1b7e + in_ECX) = param_3;
  return 1;
}



void FUN_00404010(char param_1)

{
  uint *in_ECX;
  int iVar1;
  uint *puVar2;
  
  if (param_1 == '\0') {
    iVar1 = 0;
    if (0 < (int)in_ECX[0x63c]) {
      puVar2 = in_ECX + 2;
      do {
        (**(code **)(*(int *)*puVar2 + 0x20))((int *)*puVar2);
        (**(code **)(*(int *)*puVar2 + 8))((int *)*puVar2);
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar1 < (int)in_ECX[0x63c]);
    }
    *in_ECX = *in_ECX & 0xfffffffe;
    in_ECX[0x63c] = 0;
    _memset(in_ECX + 0xc,0,0x500);
  }
  else {
    *in_ECX = *in_ECX | 1;
    (**(code **)(*(int *)in_ECX[1] + 0x10))((int *)in_ECX[1],0,&LAB_00403dd0);
    if (in_ECX[0x63c] == 0) {
      *in_ECX = *in_ECX & 0xfffffffe;
      return;
    }
  }
  return;
}



void FUN_004040e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x10c);
  if ((*(int *)(in_ECX + 0x110) != 0) || (*piVar1 != 0)) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      iVar2 = __stricmp(*(char **)(*piVar1 + 4),*(char **)(param_1 + 4));
      if (iVar2 == 0) {
        FUN_004a7a60("Setting key \'%s\' already used in list.\nSetting keys must be unique.\n",
                     *(undefined4 *)(param_1 + 4));
        return;
      }
    }
  }
  FUN_00446cb0(param_1);
  return;
}



void FUN_00404150(void)

{
  uint *puVar1;
  uint *_Dst;
  int iVar2;
  HWND pHVar3;
  uint fSwap;
  UINT UVar4;
  uint *in_ECX;
  int *unaff_EBP;
  undefined4 uVar5;
  int *apiStack_c [3];
  
  puVar1 = in_ECX + 1;
  in_ECX[0x63c] = 0;
  *in_ECX = 0;
  DirectInput8Create();
  if (DAT_00b02c2c == '\x01') {
    *in_ECX = *in_ECX | 1;
    (**(code **)(*(int *)*puVar1 + 0x10))();
    if (in_ECX[0x63c] == 0) {
      *in_ECX = *in_ECX & 0xfffffffe;
    }
  }
  in_ECX[10] = 0;
  iVar2 = (**(code **)(*(int *)*puVar1 + 0xc))();
  if (iVar2 == 0) {
    *in_ECX = *in_ECX | 4;
    in_ECX[10] = (uint)apiStack_c[0];
    iVar2 = *apiStack_c[0];
    if (DAT_00b02c34 == '\x01') {
      pHVar3 = GetActiveWindow();
      (**(code **)(iVar2 + 0x34))(in_ECX[10],pHVar3);
    }
    else {
      pHVar3 = GetActiveWindow();
      (**(code **)(iVar2 + 0x34))(in_ECX[10],pHVar3);
    }
    (**(code **)(*(int *)in_ECX[10] + 0x2c))((int *)in_ECX[10],&DAT_00a78e5c);
    (**(code **)(*(int *)in_ECX[10] + 0x18))((int *)in_ECX[10],1,&stack0xffffffc8);
  }
  in_ECX[0xb] = 0;
  fSwap = SwapMouseButton(0);
  in_ECX[0x6d2] = fSwap;
  SwapMouseButton(fSwap);
  UVar4 = GetDoubleClickTime();
  in_ECX[0x6d3] = UVar4;
  in_ECX[0x6d6] = 0;
  in_ECX[0x6d7] = 0;
  in_ECX[0x6d8] = 0;
  in_ECX[0x6d9] = 0;
  in_ECX[0x6da] = 0;
  in_ECX[0x6db] = 0;
  _Dst = in_ECX + 0x6bd;
  in_ECX[0x6dc] = 0;
  in_ECX[0x6dd] = 0;
  _memset(_Dst,0,0x2c);
  *_Dst = 0x2c;
  if (DAT_00b02c3c == '\x01') {
    *in_ECX = *in_ECX | 8;
  }
  iVar2 = (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1,&DAT_00a78eb4,apiStack_c);
  if (iVar2 == 0) {
    *in_ECX = *in_ECX | 2;
    in_ECX[0xb] = (uint)unaff_EBP;
    (**(code **)(*unaff_EBP + 0xc))(unaff_EBP,_Dst);
    iVar2 = *(int *)in_ECX[0xb];
    if ((*in_ECX & 8) == 0) {
      uVar5 = 5;
    }
    else {
      uVar5 = 6;
    }
    pHVar3 = GetActiveWindow();
    (**(code **)(iVar2 + 0x34))(in_ECX[0xb],pHVar3,uVar5);
    (**(code **)(*(int *)in_ECX[0xb] + 0x2c))((int *)in_ECX[0xb],&DAT_00a78a4c);
  }
  _memset(in_ECX + 0xc,0,0x500);
  _memset(in_ECX + 0x63d,0,0x200);
  in_ECX[0x6c8] = 0;
  in_ECX[0x6c9] = 0;
  in_ECX[0x6ca] = 0;
  in_ECX[0x6cb] = 0;
  in_ECX[0x6cc] = 0;
  in_ECX[0x6cd] = 0;
  in_ECX[0x6ce] = 0;
  in_ECX[0x6cf] = 0;
  in_ECX[0x6d0] = 0;
  in_ECX[0x6d1] = 0;
  *(undefined1 *)(in_ECX + 0x6df) = 0;
  *(undefined1 *)((int)in_ECX + 0x1b7d) = 0;
  FUN_00403960(3);
  return;
}



void FUN_004043a0(void)

{
  byte *in_ECX;
  
  if ((*in_ECX & 1) != 0) {
    FUN_00404010(0);
  }
  if (*(int *)(in_ECX + 0x28) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x20))(*(int **)(in_ECX + 0x28));
    (**(code **)(**(int **)(in_ECX + 0x28) + 8))(*(int **)(in_ECX + 0x28));
  }
  if (*(int *)(in_ECX + 0x2c) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x2c) + 0x20))(*(int **)(in_ECX + 0x2c));
    (**(code **)(**(int **)(in_ECX + 0x2c) + 8))(*(int **)(in_ECX + 0x2c));
  }
  (**(code **)(**(int **)(in_ECX + 4) + 8))(*(int **)(in_ECX + 4));
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404400(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int in_ECX;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined **ppuVar9;
  undefined1 auStack_148 [56];
  CHAR aCStack_110 [7];
  undefined4 uStack_109;
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_148;
  iVar2 = 0;
  do {
    cVar1 = (&DAT_00b3f280)[iVar2];
    *(char *)((int)&uStack_109 + iVar2 + 1) = cVar1;
    iVar2 = iVar2 + 1;
    pcVar3 = PTR_s_Oblivion_ini_00b02c84;
  } while (cVar1 != '\0');
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = (int)pcVar3 - (int)PTR_s_Oblivion_ini_00b02c84;
  puVar8 = &uStack_109;
  do {
    pcVar3 = (char *)((int)puVar8 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  } while (*pcVar3 != '\0');
  puVar6 = (undefined4 *)PTR_s_Oblivion_ini_00b02c84;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  iVar2 = 0;
  do {
    cVar1 = *(char *)((int)&uStack_109 + iVar2 + 1);
    (&DAT_00b07bf4)[iVar2] = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = (**(code **)(PTR_PTR_00b07bf0 + 0x14))(1);
  if (cVar1 != '\0') {
    _DAT_00b02c4c = 0x3fe66666;
    (**(code **)(PTR_PTR_00b07bf0 + 0xc))(&DAT_00b02c4c);
    puVar7 = (undefined1 *)(in_ECX + 0x1b9b);
    ppuVar9 = &PTR_s_Forward_00b02bb8;
    iVar2 = 0x1d;
    do {
      _sprintf(&stack0xfffffeb0,"%08X",(uint)CONCAT21(CONCAT11(puVar7[-0x1d],*puVar7),puVar7[0x1d]))
      ;
      WritePrivateProfileStringA("Controls",*ppuVar9,&stack0xfffffeb0,aCStack_110);
      puVar7 = puVar7 + 1;
      ppuVar9 = ppuVar9 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    (**(code **)(PTR_PTR_00b07bf0 + 0x18))();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404540(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  DWORD DVar5;
  long lVar6;
  int in_ECX;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_14c [60];
  CHAR aCStack_110 [7];
  undefined4 uStack_109;
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_14c;
  iVar2 = 0;
  do {
    cVar1 = (&DAT_00b3f280)[iVar2];
    *(char *)((int)&uStack_109 + iVar2 + 1) = cVar1;
    iVar2 = iVar2 + 1;
    pcVar3 = PTR_s_Oblivion_ini_00b02c84;
  } while (cVar1 != '\0');
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = (int)pcVar3 - (int)PTR_s_Oblivion_ini_00b02c84;
  puVar9 = &uStack_109;
  do {
    pcVar3 = (char *)((int)puVar9 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  } while (*pcVar3 != '\0');
  puVar8 = (undefined4 *)PTR_s_Oblivion_ini_00b02c84;
  for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  iVar2 = 0;
  do {
    cVar1 = *(char *)((int)&uStack_109 + iVar2 + 1);
    (&DAT_00b07bf4)[iVar2] = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = (**(code **)(PTR_PTR_00b07bf0 + 0x14))(0);
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_00b07bf0 + 0x10))(&DAT_00b02c4c);
    if (_DAT_00b02c4c == 1.8) {
      iVar2 = 0;
      do {
        DVar5 = GetPrivateProfileStringA
                          ("Controls",(&PTR_s_Forward_00b02bb8)[iVar2],(LPCSTR)0x0,&stack0xfffffeb0,
                           0x40,aCStack_110);
        if (DVar5 != 0) {
          lVar6 = _strtol(&stack0xfffffeb0,(char **)&stack0xfffffeac,0x10);
          *(char *)(in_ECX + 0x1b7e + iVar2) = (char)((uint)lVar6 >> 0x10);
          *(char *)(in_ECX + 0x1b9b + iVar2) = (char)((uint)lVar6 >> 8);
          *(char *)(in_ECX + 0x1bb8 + iVar2) = (char)lVar6;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x1d);
    }
    (**(code **)(PTR_PTR_00b07bf0 + 0x18))();
  }
  return;
}



void FUN_004046a0(void)

{
  int in_ECX;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *local_8;
  int local_4;
  
  local_4 = 0;
  if (0 < *(int *)(in_ECX + 0x18f0)) {
    local_8 = (undefined4 *)(in_ECX + 8);
    puVar3 = (undefined4 *)(in_ECX + 0x30);
    do {
      puVar4 = puVar3;
      puVar5 = puVar3 + 0x14;
      for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      iVar1 = (**(code **)(*(int *)*local_8 + 0x1c))((int *)*local_8);
      if ((iVar1 == 0) || (iVar1 == 1)) {
        (**(code **)(*(int *)*local_8 + 100))((int *)*local_8);
        (**(code **)(*(int *)*local_8 + 0x24))((int *)*local_8,0x50,puVar3);
      }
      else {
        _memset(puVar3,0,0x50);
      }
      local_8 = local_8 + 1;
      local_4 = local_4 + 1;
      puVar3 = puVar3 + 0x28;
    } while (local_4 < *(int *)(in_ECX + 0x18f0));
  }
  piVar2 = *(int **)(in_ECX + 0x28);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(in_ECX + 0x18f4);
    puVar4 = puVar3;
    puVar5 = (undefined4 *)(in_ECX + 0x19f4);
    for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar1 = (**(code **)(*piVar2 + 0x1c))(piVar2);
    if ((iVar1 == 0) || (iVar1 == 1)) {
      (**(code **)(**(int **)(in_ECX + 0x28) + 100))(*(int **)(in_ECX + 0x28));
      (**(code **)(**(int **)(in_ECX + 0x28) + 0x24))(*(int **)(in_ECX + 0x28),0x100,puVar3);
    }
    else {
      _memset(puVar3,0,0x100);
    }
  }
  if (*(int *)(in_ECX + 0x2c) != 0) {
    *(undefined4 *)(in_ECX + 0x1b34) = *(undefined4 *)(in_ECX + 0x1b20);
    *(undefined4 *)(in_ECX + 0x1b38) = *(undefined4 *)(in_ECX + 0x1b24);
    *(undefined4 *)(in_ECX + 0x1b3c) = *(undefined4 *)(in_ECX + 0x1b28);
    *(undefined4 *)(in_ECX + 0x1b40) = *(undefined4 *)(in_ECX + 0x1b2c);
    *(undefined4 *)(in_ECX + 0x1b44) = *(undefined4 *)(in_ECX + 0x1b30);
    *(undefined4 *)(in_ECX + 0x1b50) = 0;
    *(undefined4 *)(in_ECX + 0x1b54) = 0;
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x1c))(*(int **)(in_ECX + 0x2c));
    if ((iVar1 == 0) || (iVar1 == 1)) {
      (**(code **)(**(int **)(in_ECX + 0x2c) + 100))(*(int **)(in_ECX + 0x2c));
      (**(code **)(**(int **)(in_ECX + 0x2c) + 0x24))
                (*(int **)(in_ECX + 0x2c),0x14,(undefined4 *)(in_ECX + 0x1b20));
    }
    else {
      *(undefined4 *)(in_ECX + 0x1b20) = 0;
      *(undefined4 *)(in_ECX + 0x1b24) = 0;
      *(undefined4 *)(in_ECX + 0x1b28) = 0;
      *(undefined4 *)(in_ECX + 0x1b2c) = 0;
      *(undefined4 *)(in_ECX + 0x1b30) = 0;
    }
    iVar1 = 0;
    piVar2 = (int *)(in_ECX + 7000);
    do {
      if (((*(byte *)(in_ECX + 0x1b2c + iVar1) & 0x80) != 0) &&
         ((*(byte *)(iVar1 + 0x1b40 + in_ECX) & 0x80) == 0)) {
        if (*(uint *)(in_ECX + 0x1b4c) < (uint)(DAT_00b33ea0 - *piVar2)) {
          *piVar2 = DAT_00b33ea0;
        }
        else {
          *(undefined1 *)(iVar1 + 0x1b50 + in_ECX) = 1;
          *piVar2 = 0;
        }
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 8);
    return;
  }
  return;
}



void FUN_00404850(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ab578;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = param_2;
  in_ECX[1] = param_1;
  local_4 = 0;
  FUN_004040e0(in_ECX);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004048b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 *param_9,undefined4 *param_10,undefined4 *param_11)

{
  *param_1 = DAT_00b42cd0;
  *param_2 = DAT_00b42cb8;
  *param_3 = DAT_00b42cc4;
  *param_4 = DAT_00b42cbc;
  *param_5 = DAT_00b42cb4;
  *param_6 = DAT_00b42cb0;
  *param_7 = DAT_00b42ccc;
  *param_8 = DAT_00b42cc8;
  *param_9 = DAT_00b42ca8;
  *param_10 = DAT_00b42cac;
  *param_11 = DAT_00b42cc0;
  return;
}



void FUN_00404a00(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  DWORD DVar2;
  HANDLE hSourceHandle;
  int iVar3;
  undefined4 uVar4;
  undefined1 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009a9ef6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  *(undefined4 *)(in_ECX + 0xc) = param_2;
  DVar2 = GetCurrentThreadId();
  *(DWORD *)(in_ECX + 0x10) = DVar2;
  *(HANDLE *)(in_ECX + 0x14) = (HANDLE)0x0;
  hSourceHandle = GetCurrentThread();
  DuplicateHandle((HANDLE)0x0,hSourceHandle,(HANDLE)0x0,(LPHANDLE)(in_ECX + 0x14),0,0,0);
  FUN_00747830(*(undefined4 *)(in_ECX + 0x10),&DAT_00a2fc44,uVar1);
  iVar3 = FUN_00401f00(0x1bd8);
  local_4 = 0;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00404150(param_2);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x20) = uVar4;
  FUN_00404540();
  iVar3 = FUN_00401f00(0x328);
  local_4 = 1;
  if (iVar3 == 0) {
    *(undefined4 *)(in_ECX + 0x24) = 0;
  }
  else {
    uVar4 = FUN_006abc80(*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 0x24) = uVar4;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_00404b00(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  FILE *_File;
  int iVar5;
  uint uVar6;
  char cVar7;
  undefined1 auStack_30c [3];
  char local_309;
  char local_308 [260];
  char local_204 [512];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_30c;
  cVar7 = '\0';
  local_309 = '\0';
  iVar5 = -(int)param_1;
  do {
    cVar2 = *param_1;
    param_1[(int)(local_308 + iVar5)] = cVar2;
    param_1 = param_1 + 1;
    pcVar3 = param_2;
  } while (cVar2 != '\0');
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  uVar4 = (int)pcVar3 - (int)param_2;
  pcVar3 = &local_309;
  do {
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar3 = *param_2;
    param_2 = param_2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  _File = _fopen(local_308,"r");
  if (_File != (FILE *)0x0) {
    pcVar3 = _fgets(local_204,0x200,_File);
    while (pcVar3 != (char *)0x0) {
      pcVar3 = local_204;
      do {
        cVar7 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar7 != '\0');
      uVar4 = (int)pcVar3 - (int)(local_204 + 1);
      if ((local_204[0] != '#') && (1 < uVar4)) {
        if (local_308[uVar4 + 0x103] == '\n') {
          local_308[uVar4 + 0x103] = '\0';
        }
        iVar5 = FUN_00447c50(local_204);
        if (iVar5 != 0) {
          FUN_0044fad0(1);
          local_309 = '\x01';
        }
      }
      pcVar3 = _fgets(local_204,0x200,_File);
      cVar7 = local_309;
    }
    _fclose(_File);
  }
  return cVar7;
}



void FUN_00404c60(char param_1)

{
  if (param_1 != '\0') {
    FUN_0054fe70();
  }
  FUN_0043beb0();
  FUN_0043fc20();
  return;
}



float10 FUN_00404c90(void)

{
  float *in_ECX;
  float10 fVar1;
  
  fVar1 = (float10)FUN_00982c30(in_ECX[2] * in_ECX[2] + *in_ECX * *in_ECX + in_ECX[1] * in_ECX[1]);
  return (float10)(float)fVar1;
}



void FUN_00404cd0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) | 1;
    return;
  }
  *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) & 0xfffe;
  return;
}



void FUN_00404cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x54) = param_1;
  *(undefined4 *)(in_ECX + 0x58) = param_2;
  *(undefined4 *)(in_ECX + 0x5c) = param_3;
  return;
}



void FUN_00404d30(undefined4 *param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x110) = *param_1;
  *(undefined4 *)(in_ECX + 0x114) = param_1[1];
  *(undefined4 *)(in_ECX + 0x118) = param_1[2];
  *(undefined4 *)(in_ECX + 0x11c) = param_1[3];
  return;
}



undefined4 FUN_00404d60(DWORD param_1)

{
  DWORD DVar1;
  LONG LVar2;
  LONG *pLVar3;
  
  if (DAT_00b3f940 != 0) {
    pLVar3 = (LONG *)(DAT_00b3f940 + 400);
    DVar1 = WaitForSingleObject(*(HANDLE *)(DAT_00b3f940 + 0x198),param_1);
    if ((DVar1 == 0x102) || (LVar2 = InterlockedDecrement(pLVar3), LVar2 == 1)) {
      DAT_00b3f944 = 1;
      pLVar3 = (LONG *)(DAT_00b3f940 + 400);
      DVar1 = WaitForSingleObject(*(HANDLE *)(DAT_00b3f940 + 0x198),0xffffffff);
      if (DVar1 != 0x102) {
        InterlockedDecrement(pLVar3);
      }
    }
  }
  return 0;
}



undefined4 FUN_00404dd0(void)

{
  if ((DAT_00b3f940 != 0) && (*(char *)(DAT_00b3f940 + 0x1b0) != '\0')) {
    return 1;
  }
  return 0;
}



void FUN_00404df0(void)

{
  int in_ECX;
  
  if (in_ECX == 0) {
    DAT_00b35464._0_1_ = 0;
  }
  return;
}



undefined1 FUN_00404e10(void)

{
  undefined1 *in_ECX;
  
  if (in_ECX != (undefined1 *)0x0) {
    return *in_ECX;
  }
  DAT_00b35464._0_1_ = 0;
  return 0;
}



float10 FUN_00404e30(void)

{
  float *in_ECX;
  
  if (in_ECX != (float *)0x0) {
    return (float10)*in_ECX;
  }
  DAT_00b35464 = 0;
  return (float10)0.0;
}



int FUN_00404e50(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int *in_ECX;
  
  if (DAT_00b333f4 == '\0') {
    DAT_00b333f4 = 1;
    pcVar3 = (char *)(**(code **)(*in_ECX + 0xd4))();
    DAT_00b333f4 = '\0';
    if (pcVar3 != (char *)0x0) {
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      return (int)pcVar3 - (int)pcVar1;
    }
  }
  return 0;
}



float10 FUN_00404e90(byte param_1)

{
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0xe) == '\x01') && (param_1 == *(byte *)(in_ECX + 0xf))) {
    return (float10)1;
  }
  return (float10)*(float *)(*(int *)(in_ECX + 0x14) + 0x10 + (uint)param_1 * 0x18);
}



void FUN_00404ec0(undefined4 param_1)

{
  FUN_004941a0(0,param_1,&stack0x00000008);
  return;
}



void FUN_00404ee0(undefined4 param_1)

{
  FUN_004941a0(3,param_1,&stack0x00000008);
  return;
}



undefined4 FUN_00404f00(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00b42d74;
  if (param_1 == '\0') {
    uVar1 = DAT_00b42f48;
  }
  return uVar1;
}



undefined4 FUN_00404f20(void)

{
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x51) == '\0') && (*(char *)(in_ECX + 0x52) == '\0')) {
    return 0;
  }
  return 1;
}



float10 FUN_00404f70(void)

{
  int iVar1;
  float10 extraout_ST0;
  float10 fVar2;
  
  iVar1 = FUN_009828c0();
  fVar2 = (float10)iVar1;
  if (extraout_ST0 - fVar2 < (float10)0.0) {
    fVar2 = fVar2 - (float10)1.0;
  }
  return (float10)(float)fVar2;
}



float10 FUN_00404fb0(void)

{
  int in_ECX;
  
  if (*(float **)(in_ECX + 0x38) != (float *)0x0) {
    return (float10)**(float **)(in_ECX + 0x38);
  }
  return (float10)0.0;
}



uint FUN_00404fd0(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined4 *in_ECX;
  
  if (*(ushort *)(in_ECX + 1) == 0xffff) {
    pcVar3 = (char *)*in_ECX;
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    return (int)pcVar3 - (int)pcVar1;
  }
  return (uint)*(ushort *)(in_ECX + 1);
}



int FUN_00405020(uint param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(ushort *)(in_ECX + 10) <= param_1) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 4) + param_1 * 4);
  *(undefined4 *)(*(int *)(in_ECX + 4) + param_1 * 4) = 0;
  if (iVar1 != 0) {
    *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
  }
  if (param_1 == *(ushort *)(in_ECX + 10) - 1) {
    *(ushort *)(in_ECX + 10) = *(ushort *)(in_ECX + 10) - 1;
  }
  return iVar1;
}



void FUN_00405070(int param_1)

{
  int *in_ECX;
  
  *in_ECX = param_1;
  if (param_1 != 0) {
    InterlockedIncrement((LONG *)(param_1 + 4));
  }
  return;
}



void FUN_00405090(char param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_4;
  
  local_4 = FUN_0043fd20();
  if (*(int *)(DAT_00b333a0 + 0x34) != 0) {
    local_4 = 1;
  }
  uVar5 = 0;
  iVar1 = DAT_00b333a0;
  if (local_4 != 0) {
    do {
      if ((*(int *)(iVar1 + 0x34) != 0) || (*(int *)(*(int *)(iVar1 + 0x3c) + uVar5 * 4) != 0)) {
        if (param_1 != '\0') {
          iVar1 = FUN_004c9a80();
          iVar2 = FUN_004c9aa0();
          uVar3 = *(int *)(DAT_00b333a0 + 0x20) - iVar1;
          uVar4 = (int)uVar3 >> 0x1f;
          if (((int)((uVar3 ^ uVar4) - uVar4) < 2) &&
             (uVar3 = *(int *)(DAT_00b333a0 + 0x24) - iVar2, uVar4 = (int)uVar3 >> 0x1f,
             iVar1 = DAT_00b333a0, (int)((uVar3 ^ uVar4) - uVar4) < 2)) goto LAB_0040512d;
        }
        FUN_004d1a90(param_2,param_3);
        iVar1 = DAT_00b333a0;
      }
LAB_0040512d:
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_4);
  }
  FUN_0043fc20(1);
  return;
}



undefined4 FUN_00405370(int param_1,int param_2)

{
  char cVar1;
  HWND pHVar2;
  int in_ECX;
  
  pHVar2 = GetActiveWindow();
  if (pHVar2 == *(HWND *)(in_ECX + 8)) {
    cVar1 = FUN_00578f60();
    if ((((cVar1 != '\0') && (*(byte **)(in_ECX + 0x20) != (byte *)0x0)) &&
        ((**(byte **)(in_ECX + 0x20) & 8) != 0)) && (DAT_00b06c74 == '\0')) {
      FUN_00579320((float)param_1 / (float)DAT_00b06c4c,(float)param_2 / (float)DAT_00b06c50);
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_004053e0(int param_1)

{
  char *_Str1;
  int iVar1;
  
  if ((param_1 != 0) && (*(char **)(param_1 + 0x34) != (char *)0x0)) {
    _Str1 = _strchr(*(char **)(param_1 + 0x34),0x5c);
    while( true ) {
      if (_Str1 == (char *)0x0) {
        return 0;
      }
      iVar1 = __strnicmp(_Str1,"\\menus",6);
      if (iVar1 == 0) break;
      _Str1 = _strchr(_Str1 + 1,0x5c);
    }
    return 1;
  }
  return 0;
}



void FUN_004055e0(void)

{
  char *pcVar1;
  uint uVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ab578;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if ((in_ECX != 0) && (*(int *)(in_ECX + 4) != 0)) {
    FUN_004524c0(*(int *)(in_ECX + 4));
  }
  pcVar1 = *(char **)(in_ECX + 4);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == 'S')) {
    FUN_00401f20(pcVar1,uVar2);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00405650(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    for (iVar1 = (**(code **)(*param_2 + 4))(); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      if (iVar1 == param_1) {
        return 1;
      }
    }
  }
  return 0;
}



void FUN_00405680(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009a9f28;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = (**(code **)(*param_1 + 0x4c))(uVar2);
  if (iVar3 < 10) {
    param_1 = piVar1;
    InterlockedIncrement(piVar1 + 1);
    uStack_4 = 0;
    FUN_00749800(&param_1);
    uStack_4 = 0xffffffff;
    LVar4 = InterlockedDecrement(piVar1 + 1);
    if (LVar4 == 0) {
      (**(code **)*piVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00405710(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 8);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 8) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



int * FUN_00405760(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xac);
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  return param_1;
}



undefined4 FUN_00405790(uint param_1)

{
  int in_ECX;
  
  if (*(ushort *)(in_ECX + 0xb6) <= param_1) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(in_ECX + 0xb0) + param_1 * 4);
}



void FUN_004057b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = **(int **)(in_ECX + 0x20);
  local_10 = in_ECX;
  if (iVar3 == 0) {
    local_10 = FUN_00401f00(0x10,uVar2);
    if (local_10 == 0) {
      iVar3 = 0;
    }
    else {
      local_4 = iVar3;
      iVar3 = FUN_00704100();
    }
    local_4 = 0xffffffff;
    local_10 = iVar3;
    FUN_0042bb90(0,&local_10);
  }
  puVar1 = *(undefined4 **)(iVar3 + 8);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(iVar3 + 8) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00405870(short param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = **(int **)(in_ECX + 0x20);
  if (iVar2 == 0) {
    local_10 = FUN_00401f00(0x10,uVar1);
    local_4 = iVar2;
    if (local_10 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00704100();
    }
    local_10 = iVar2;
    FUN_0042bb90(0,&local_10);
  }
  *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) & 0xcfff | param_1 << 0xc;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00405900(byte param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = **(int **)(in_ECX + 0x20);
  if (iVar2 == 0) {
    local_10 = FUN_00401f00(0x10,uVar1);
    local_4 = iVar2;
    if (local_10 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00704100();
    }
    local_10 = iVar2;
    FUN_0042bb90(0,&local_10);
  }
  *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) & 0xf0ff | (ushort)param_1 << 8;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00405990(void)

{
  undefined4 *in_ECX;
  
  FUN_006ffd30();
  *in_ECX = &PTR_FUN_00a2fd04;
  *(undefined2 *)(in_ECX + 6) = 8;
  return;
}



void FUN_004059d0(void)

{
  undefined4 *in_ECX;
  
  FUN_006ffd30();
  *in_ECX = &PTR_FUN_00a2fd5c;
  *(undefined2 *)(in_ECX + 6) = 0;
  return;
}



void FUN_00405a00(void)

{
  undefined4 *in_ECX;
  
  FUN_006ffd30();
  *in_ECX = &PTR_FUN_00a2fdb4;
  *(undefined2 *)(in_ECX + 6) = 0xf;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00405a60) */
/* WARNING: Removing unreachable block (ram,0x00405a6e) */

undefined4 FUN_00405a30(void)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 local_4;
  
  local_4 = 0;
  if (in_ECX == 0) {
    local_4 = 0;
    puVar1 = &local_4;
  }
  else {
    puVar1 = (undefined4 *)(in_ECX + 0x20);
  }
  return *puVar1;
}



bool FUN_00405a80(void)

{
  if (2 < DAT_00b42f48) {
    return ((byte)DAT_00b42f40 & 0x10) != 0;
  }
  return false;
}



int * FUN_00405ad0(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x100);
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  return param_1;
}



void FUN_00405b00(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b333d0;
  if (DAT_00b333d0 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b333d0 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b333d0 = (undefined4 *)0x0;
  }
  return;
}



void FUN_00405b40(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b333d4;
  if (DAT_00b333d4 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b333d4 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b333d4 = (undefined4 *)0x0;
  }
  return;
}



void FUN_00405b80(void)

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
  iVar3 = FUN_00401f00(0xf0,uVar2);
  local_4 = 0;
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_004114e0(&DAT_00a2fe20,1,0);
  }
  puVar1 = DAT_00b333d0;
  local_4 = 0xffffffff;
  if (DAT_00b333d0 != puVar4) {
    if (DAT_00b333d0 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(DAT_00b333d0 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    DAT_00b333d0 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00405c30(void)

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
  iVar3 = FUN_00401f00(0xf0,uVar2);
  local_4 = 0;
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_004114e0("3DMenu",0,0);
  }
  puVar1 = DAT_00b333d4;
  local_4 = 0xffffffff;
  if (DAT_00b333d4 != puVar4) {
    if (DAT_00b333d4 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(DAT_00b333d4 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    DAT_00b333d4 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00405ce0(void)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x1d4);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x1d4) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x1d8);
  if (puVar1 != *(undefined4 **)(in_ECX + 0x1d4)) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *(int *)(in_ECX + 0x1d4);
    *(int *)(in_ECX + 0x1d8) = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406360(void)

{
  char *pcVar1;
  undefined **ppuVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined *puVar14;
  int iVar15;
  int *unaff_FS_OFFSET;
  int iVar16;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined **appuStack_3c [12];
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009a9f66;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffa8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00404ee0("Initializing Sky...",uVar6);
  DAT_00b333b0 = FUN_00542ea0();
  FUN_005411d0(DAT_00b333d8,DAT_00b333e4);
  uVar6 = 0;
  (**(code **)(*DAT_00b333dc + 0x84))(*(undefined4 *)(*(int *)(DAT_00b333b0 + 0x28) + 0xc),0);
  uVar13 = DAT_00b333ac;
  uVar7 = DAT_00b333ac;
  FUN_005411c0(DAT_00b333ac);
  FUN_00708e40(uVar7);
  uVar7 = FUN_005411c0();
  FUN_007b4280(0,uVar7);
  FUN_007c5850(uVar7);
  FUN_00707610();
  FUN_00707980();
  FUN_00707370(0,1);
  FUN_00707610();
  FUN_00707980();
  FUN_00707370(0,1);
  FUN_007b8940(DAT_00b333d8,10,0,1);
  FUN_007b8940(DAT_00b333dc,10,0,1);
  iVar8 = FUN_00452a60();
  if (iVar8 != 0) {
    uVar7 = FUN_00707530(4);
    iVar8 = FUN_00560920(&DAT_00b4335c,uVar7);
    if (iVar8 != 0) {
      *(undefined4 *)(iVar8 + 0x88) = 2;
    }
  }
  iVar8 = FUN_0095f870();
  if (iVar8 != 0) {
    uVar7 = FUN_00707530(4);
    iVar8 = FUN_00560920(&DAT_00b4335c,uVar7);
    if (iVar8 != 0) {
      *(undefined4 *)(iVar8 + 0x88) = 4;
    }
  }
  if (*(int *)(*(int *)(DAT_00b333b0 + 0x28) + 0x10) != 0) {
    uVar7 = FUN_00707530(4);
    iVar8 = FUN_00560920(&DAT_00b4335c,uVar7);
    if (iVar8 != 0) {
      *(undefined4 *)(iVar8 + 0x88) = 0;
    }
  }
  if (*(int *)(*(int *)(DAT_00b333b0 + 0x28) + 0x14) != 0) {
    uVar7 = FUN_00707530(4);
    iVar8 = FUN_00560920(&DAT_00b4335c,uVar7);
    if (iVar8 != 0) {
      *(undefined4 *)(iVar8 + 0x88) = 1;
    }
  }
  do {
    if ((*(int *)(*(int *)(DAT_00b333b0 + 0x2c) + 8 + uVar6 * 4) != 0) &&
       (piVar9 = (int *)FUN_00707530(4), piVar9 != (int *)0x0)) {
      for (puVar10 = (undefined4 *)(**(code **)(*piVar9 + 4))(); puVar10 != (undefined4 *)0x0;
          puVar10 = (undefined4 *)puVar10[1]) {
        if (puVar10 == &DAT_00b4335c) {
          bVar3 = 1;
          goto LAB_00406590;
        }
      }
      bVar3 = 0;
LAB_00406590:
      uVar11 = -(uint)bVar3 & (uint)piVar9;
      if (uVar11 != 0) {
        *(undefined4 *)(uVar11 + 0x88) = 3;
        *(short *)(uVar11 + 0x84) = (short)uVar6;
      }
    }
    iVar8 = DAT_00b333a8;
    uVar6 = (uVar6 + 1) % 3;
    if (1 < uVar6) {
      iVar15 = 0;
      uVar7 = 0;
      if (DAT_00b333a8 != 0) {
        iVar16 = DAT_00b333a8;
        FUN_005411c0(DAT_00b333a8);
        FUN_00708e40(iVar16);
        if ((*(short *)(iVar8 + 0xb6) == 0) ||
           (piVar9 = (int *)**(int **)(iVar8 + 0xb0), piVar9 == (int *)0x0)) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)(*piVar9 + 8))();
        }
      }
      FUN_00404ee0("Initializing TES...");
      iVar8 = FUN_00401f00(0xac);
      local_c = 0;
      if (iVar8 == 0) {
        DAT_00b333a0 = 0;
      }
      else {
        DAT_00b333a0 = FUN_00441970(&DAT_00a2ffb8,uVar13,uVar7,DAT_00b333b0);
      }
      local_c = -1;
      FUN_0043f560();
      FUN_00404ee0("Initializing TreeManager...");
      FUN_0055f750(0);
      FUN_00404ee0("Initializing Menus...");
      FUN_00707610();
      FUN_00707980();
      FUN_00707370(0,1);
      bVar4 = false;
      appuStack_3c[0] = &PTR_DAT_00b02c90;
      appuStack_3c[1] = &PTR_DAT_00b02c98;
      appuStack_3c[2] = &PTR_DAT_00b02ca0;
      appuStack_3c[3] = &PTR_DAT_00b02ca8;
      appuStack_3c[4] = &PTR_DAT_00b02cb0;
      appuStack_3c[5] = &PTR_DAT_00b02cb8;
      appuStack_3c[6] = &PTR_DAT_00b02cc0;
      appuStack_3c[7] = &PTR_DAT_00b02cc8;
      appuStack_3c[8] = &PTR_DAT_00b02cd0;
      appuStack_3c[9] = &PTR_DAT_00b02cd8;
      do {
        ppuVar2 = appuStack_3c[iVar15];
        if ((ppuVar2 != (undefined **)0x0) && (*ppuVar2 != (undefined *)0x0)) {
          if (ppuVar2 == (undefined **)0x0) {
            pcVar12 = (char *)0x0;
          }
          else {
            pcVar12 = *ppuVar2;
          }
          pcVar1 = pcVar12 + 1;
          do {
            cVar5 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar5 != '\0');
          if (pcVar12 != pcVar1) {
            if (ppuVar2 == (undefined **)0x0) {
              puVar14 = (undefined *)0x0;
            }
            else {
              puVar14 = *ppuVar2;
            }
            iVar8 = FUN_00447c50(puVar14);
            if (iVar8 != 0) {
              FUN_0044fad0(1);
              bVar4 = true;
            }
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < 10);
      cVar5 = FUN_00404b00(&DAT_00b3f178,PTR_s___Plugins_txt_00b02c88);
      if (((cVar5 == '\0') && (!bVar4)) && (iVar8 = FUN_00447c50("Oblivion.esm"), iVar8 != 0)) {
        FUN_0044fad0(1);
      }
      iStack_4 = FUN_00401f00(0x804);
      local_c = 1;
      if (iStack_4 == 0) {
        DAT_00b333c4 = (int *)0x0;
      }
      else {
        DAT_00b333c4 = (int *)FUN_0066a740();
      }
      local_c = -1;
      FUN_0046c300(0x14,1);
      FUN_00404ee0("Loading Files...");
      FUN_0044f3d0(0,0);
      FUN_00443550();
      FUN_00404ee0("Initializing Player...");
      uVar13 = FUN_0046b250(7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b02fb4,0);
      uVar13 = FUN_009832e6(uVar13);
      FUN_006c5420(uVar13);
      local_48 = 0x45000000;
      uStack_44 = 0x45000000;
      uStack_40 = 0;
      (**(code **)(*DAT_00b333c4 + 0x1cc))(&local_48);
      FUN_004d89a0(DAT_00b3f9a8,DAT_00b3f9ac,DAT_00b3f9b0);
      (**(code **)(*DAT_00b333c4 + 0x6c))();
      iVar8 = (**(code **)(*DAT_00b333c4 + 0x284))(10);
      if (iVar8 == 0) {
        iVar8 = FUN_0046b680(0);
        FUN_00404ec0("ERROR: Fatigue value is 0 on the Player. Fix \'%s\' with the editor.",
                     iVar8 + 0x1c);
      }
      iVar8 = (**(code **)(*DAT_00b333c4 + 0x284))(8);
      if (iVar8 == 0) {
        iVar8 = FUN_0046b680(0);
        FUN_00404ec0("ERROR: Health value is 0 on the Player. Fix \'%s\' with the editor.",
                     iVar8 + 0x1c);
      }
      FUN_00404ee0("Initializing Scripts...");
      FUN_00447d80();
      FUN_00404ee0("Initializing Sound System...");
      FUN_006af850(0);
      if (DAT_00b02d10 - 1U < 199) {
        if (DAT_00b02d10 == 0) {
          _DAT_00b33e94 = 0.0;
        }
        else {
          _DAT_00b33e94 = (float)DAT_00b02d10;
          if (DAT_00b02d10 < 0) {
            _DAT_00b33e94 = _DAT_00b33e94 + 4.2949673e+09;
          }
          _DAT_00b33e94 = 1000.0 / _DAT_00b33e94;
        }
      }
      *unaff_FS_OFFSET = (int)appuStack_3c[7];
      return;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406950(void)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  LONG LVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009aa06c;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = FUN_00401f00(0xf0,uVar3);
  local_4 = 0;
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_004114e0("World",0,0);
  }
  piVar9 = DAT_00b333cc;
  local_4 = 0xffffffff;
  if (DAT_00b333cc != piVar5) {
    if (DAT_00b333cc != (int *)0x0) {
      LVar6 = InterlockedDecrement(DAT_00b333cc + 1);
      if ((LVar6 == 0) && (piVar9 != (int *)0x0)) {
        (**(code **)*piVar9)(1);
      }
    }
    DAT_00b333cc = piVar5;
    if (piVar5 != (int *)0x0) {
      InterlockedIncrement(piVar5 + 1);
    }
  }
  iVar4 = FUN_00401f00(0x130,uVar3);
  local_4 = 1;
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_007c7340();
  }
  puVar8 = DAT_00b43104;
  puVar7 = DAT_00b350d8;
  local_4 = 0xffffffff;
  if (DAT_00b43104 != DAT_00b350d8) {
    if (DAT_00b43104 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(DAT_00b43104 + 1);
      if ((LVar6 == 0) && (puVar8 != (undefined4 *)0x0)) {
        (**(code **)*puVar8)(1);
      }
    }
    DAT_00b43104 = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar4 = 0;
  do {
    cVar1 = "data\\shaders\\"[iVar4];
    (&DAT_00b42f68)[iVar4] = cVar1;
    iVar4 = iVar4 + 1;
  } while (cVar1 != '\0');
  FUN_007ba0f0();
  *(undefined1 *)(piVar5 + 0x47) = 0;
  FUN_007b4270(0,piVar5);
  FUN_007b4270(0,piVar5);
  DAT_00b42ea7 = 0;
  DAT_00b42e85 = 0;
  if ((DAT_00b06cbc == '\0') || (DAT_00b42f48 < 2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x20;
  }
  DAT_00b42f40 = uVar3 | (-(uint)(DAT_00b06cdc != '\x01') & 0xfffffff8) + 8 |
                         (-(uint)(DAT_00b06ce4 != '\x01') & 0xfffffffc) + 4 |
                         (-(uint)(DAT_00b06cd4 != '\x01') & 0xfffffffe) + 2 |
                         (uint)(DAT_00b06ccc == '\x01') | 0x10;
  DAT_00b2c678 = -(uint)(DAT_00b06cf4 != '\0') & 2 | -(uint)(DAT_00b06cec != '\0') & 8;
  FUN_007c2450(DAT_00b43104);
  FUN_004814c0();
  _DAT_00b44ee4 = 0;
  DAT_00b42eb4 = &LAB_004e0cf0;
  (**(code **)(*DAT_00b333cc + 0x84))(piVar5,0);
  puVar7 = (undefined4 *)FUN_00401f00(0x1c);
  local_c = 2;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar7 = &PTR_FUN_00a2fd04;
    *(undefined2 *)(puVar7 + 6) = 8;
  }
  local_c = -1;
  *(ushort *)(puVar7 + 6) = *(ushort *)(puVar7 + 6) & 0xffef | 0x28;
  FUN_00405680(puVar7);
  puVar7 = (undefined4 *)FUN_00401f00(0x1c);
  local_c = 3;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar7 = &PTR_FUN_00a2fdb4;
    *(undefined2 *)(puVar7 + 6) = 0xf;
  }
  *(ushort *)(puVar7 + 6) = *(ushort *)(puVar7 + 6) | 3;
  local_c = -1;
  FUN_00405680(puVar7);
  puVar8 = (undefined4 *)FUN_00401f00(0x1c);
  local_c = 4;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar8 = &PTR_FUN_00a2fd5c;
    *(undefined2 *)(puVar8 + 6) = 0;
  }
  puVar2 = DAT_00b333e0;
  local_c = -1;
  if (DAT_00b333e0 != puVar8) {
    if (DAT_00b333e0 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(DAT_00b333e0 + 1);
      if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    DAT_00b333e0 = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(ushort *)(DAT_00b333e0 + 6) = *(ushort *)(DAT_00b333e0 + 6) & 0xfffe;
  FUN_00405680(DAT_00b333e0);
  iVar4 = FUN_00401f00(0x34);
  local_c = 5;
  if (iVar4 == 0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = (undefined4 *)FUN_007c82a0();
  }
  puVar2 = DAT_00b333e4;
  local_c = -1;
  if (DAT_00b333e4 != puVar8) {
    if (DAT_00b333e4 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(DAT_00b333e4 + 1);
      if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    DAT_00b333e4 = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(ushort *)(DAT_00b333e4 + 6) = *(ushort *)(DAT_00b333e4 + 6) | 1;
  FUN_007c8270(0x3f800000);
  FUN_00405680(DAT_00b333e4);
  iVar4 = FUN_00401f00(0xdc);
  local_c = 6;
  if (iVar4 == 0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = (undefined4 *)FUN_0070b780(0);
  }
  puVar2 = DAT_00b333d8;
  local_c = -1;
  if (DAT_00b333d8 != puVar8) {
    if (DAT_00b333d8 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(DAT_00b333d8 + 1);
      if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    DAT_00b333d8 = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_006ff420(&DAT_00a30044);
  (**(code **)(*piVar5 + 0x84))(DAT_00b333d8,0);
  iVar4 = FUN_00401f00(0xdc);
  if (iVar4 == 0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = (undefined4 *)FUN_0070b780(0);
  }
  puVar2 = DAT_00b333dc;
  if (DAT_00b333dc != puVar8) {
    if (DAT_00b333dc != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(DAT_00b333dc + 1);
      if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    DAT_00b333dc = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_006ff420("Weather");
  FUN_00405680(puVar7);
  FUN_00405680(DAT_00b333e0);
  FUN_00405680(unaff_EDI);
  (**(code **)(*piVar5 + 0x84))(DAT_00b333dc,0);
  FUN_00405b80();
  FUN_00405c30();
  iVar4 = FUN_00401f00(0xe8);
  if (iVar4 == 0) {
    DAT_00b333a8 = (int *)0x0;
  }
  else {
    DAT_00b333a8 = (int *)FUN_0049ffe0();
  }
  FUN_006ff420("LODRoot");
  (**(code **)(*piVar5 + 0x84))(DAT_00b333a8,0);
  iVar4 = FUN_00401f00(0xdc);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0070b780(0);
  }
  FUN_006ff420("LandLOD");
  (**(code **)(*DAT_00b333a8 + 0x84))(iVar4,0);
  uVar10 = _DAT_00b02d68;
  *(undefined4 *)(iVar4 + 0x54) = 0;
  *(undefined4 *)(iVar4 + 0x58) = 0;
  *(undefined4 *)(iVar4 + 0x5c) = uVar10;
  iVar4 = FUN_00401f00(0xdc);
  if (iVar4 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)FUN_0070b780(0);
  }
  FUN_006ff420("DistantRefLOD");
  (**(code **)(*DAT_00b333a8 + 0x84))(piVar9,0);
  iVar4 = FUN_00401f00(0xdc);
  if (iVar4 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_0070b780(0);
  }
  FUN_006ff420("LOD Trees");
  (**(code **)(*piVar9 + 0x84))(uVar10,0);
  DAT_00b42d64 = uVar10;
  iVar4 = FUN_00401f00(0xdc);
  if (iVar4 == 0) {
    DAT_00b333ac = 0;
  }
  else {
    DAT_00b333ac = FUN_0070b780(0);
  }
  FUN_006ff420("ObjectLODRoot");
  (**(code **)(*piVar5 + 0x84))(DAT_00b333ac,0);
  iVar11 = FUN_00401f00(0xdc);
  if (iVar11 == 0) {
    DAT_00b333a4 = 0;
  }
  else {
    DAT_00b333a4 = FUN_0070b780(0);
  }
  FUN_006ff420("MagicProjectileRoot");
  (**(code **)(*piVar5 + 0x84))(DAT_00b333a4,0);
  if (*(short *)((int)DAT_00b333cc + 0xb6) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)DAT_00b333cc[0x2c];
  }
  *(undefined4 *)(iVar11 + 0x54) = 0;
  *(undefined4 *)(iVar11 + 0x58) = 0;
  *(undefined4 *)(iVar11 + 0x5c) = 0x43000000;
  FUN_00707610();
  FUN_00707980();
  FUN_00707370(0,1);
  DAT_00b33396 = DAT_00b06dc4;
  if ((DAT_00b333ec == 0) && (DAT_00b42f3e == '\0')) {
    iVar11 = FUN_00401f00(0xc0);
    if (iVar11 == 0) {
      uVar10 = 0;
    }
    else {
      iVar11 = FUN_00401f00(0x70);
      if (iVar11 == 0) {
        uVar10 = FUN_00709d10(0);
      }
      else {
        uVar10 = FUN_00703230(0,0,1,1,1,4,1,2,1);
        uVar10 = FUN_00709d10(uVar10);
      }
    }
    FUN_0075fa90(uVar10);
    FUN_00702970(4,0,0);
    FUN_00702ec0(0,0,0,0x3f800000,0x3f800000);
    FUN_00703050();
    FUN_00702fc0(0,0,0,0,0x3f800000,0x3f800000);
    puVar7 = (undefined4 *)FUN_00401f00(0x1c);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      FUN_006ffd30();
      *puVar7 = &PTR_FUN_00a2fd04;
      *(undefined2 *)(puVar7 + 6) = 8;
    }
    *(ushort *)(puVar7 + 6) = *(ushort *)(puVar7 + 6) & 0xffc7;
    FUN_00405680(puVar7);
    iVar11 = FUN_00401f00(0x5c);
    if (iVar11 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = FUN_007095a0();
    }
    *(undefined4 *)(iVar11 + 0x40) = DAT_00b25ac4;
    *(undefined4 *)(iVar11 + 0x44) = DAT_00b25ac8;
    uVar10 = DAT_00b25acc;
    *(int *)(iVar11 + 0x54) = *(int *)(iVar11 + 0x54) + 1;
    *(undefined4 *)(iVar11 + 0x48) = uVar10;
    FUN_00405680(iVar11);
    puVar7 = (undefined4 *)FUN_00401f00(0x1c);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      FUN_006ffd30();
      *puVar7 = &PTR_FUN_00a2fdb4;
      *(undefined2 *)(puVar7 + 6) = 0xf;
    }
    *(ushort *)(puVar7 + 6) = *(ushort *)(puVar7 + 6) & 0xfffc;
    FUN_00405680(puVar7);
    iVar11 = FUN_00401f00(0x30);
    if (iVar11 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_007043b0();
    }
    uVar12 = FUN_00405a30();
    FUN_004057b0(uVar12);
    FUN_00405900(0);
    FUN_00405870(0);
    FUN_00405680(uVar10);
    FUN_00707610();
    FUN_00707370(0,1);
  }
  *unaff_FS_OFFSET = iVar4;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004073d0(void)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  char cVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  LONG LVar14;
  undefined4 *puVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  bool bVar19;
  float fVar20;
  int iStack_40;
  undefined4 local_38;
  undefined4 *puStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined1 auStack_20 [4];
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  float local_14;
  undefined4 uStack_4;
  
  bVar7 = false;
  bVar6 = false;
  if (((DAT_00b42f48 < 3) || (bVar19 = (DAT_00b42f40 & 0x10) != 0, !bVar19)) ||
     (DAT_00b333b8 == '\0')) {
    if ((DAT_00b333f6 == '\0') || (DAT_00b333b8 != '\0')) goto LAB_00407472;
    DAT_00b42f40 = DAT_00b42f40 | 0x10;
    DAT_00b333f6 = DAT_00b333b8;
    iVar16 = DAT_00b06f04;
    if (*(int *)(DAT_00b333a0 + 0x34) == 0) {
      iVar16 = DAT_00b06efc;
    }
  }
  else {
    DAT_00b42f40 = DAT_00b42f40 & 0xffffffef;
    DAT_00b333f6 = bVar19;
    FUN_007b4280(0);
    FUN_007c5ef0();
    iVar16 = 0;
  }
  FUN_007c2710(DAT_00b3f928,iVar16);
LAB_00407472:
  FUN_007b7650();
  if (((DAT_00b42cdb == '\0') && (2 < DAT_00b42f48)) && ((DAT_00b42f40 & 0x10) != 0)) {
    piVar10 = (int *)FUN_006747c0();
    iVar18 = 0;
    FUN_007b4280(0);
    FUN_007c5be0();
    iVar16 = DAT_00b06f04;
    if (*(int *)(DAT_00b333a0 + 0x34) == 0) {
      iVar16 = DAT_00b06efc;
    }
    FUN_007c2710(DAT_00b3f928,iVar16);
    if (iVar16 == 0) {
      FUN_007c7880();
    }
    else {
      local_38 = 0;
      if (((((char)DAT_00b333c4[0x162] != '\0') || (cVar9 = FUN_0065d650(), cVar9 != '\0')) &&
          ((iVar11 = (**(code **)(*DAT_00b333c4 + 0x380))(), iVar11 == 0 ||
           (((iVar11 = (**(code **)(*DAT_00b333c4 + 0x18c))(), iVar11 != 4 &&
             (iVar11 = (**(code **)(*DAT_00b333c4 + 0x18c))(), iVar11 != 3)) &&
            (iVar11 = (**(code **)(*DAT_00b333c4 + 0x18c))(), iVar11 != 5)))))) &&
         ((cVar9 = FUN_005e9670(), cVar9 == '\0' &&
          (iStack_2c = (**(code **)(*DAT_00b333c4 + 0x284))(0x2f), (float)iStack_2c == 0.0)))) {
        uVar12 = FUN_00660110(0);
        local_38 = FUN_007c6c30(uVar12);
        iVar18 = 1;
      }
      piVar17 = (int *)*piVar10;
      if (piVar17 != (int *)0x0) {
        while (iVar18 < iVar16) {
          iVar11 = (**(code **)(*piVar17 + 0x154))();
          if ((((iVar11 != 0) && (cVar9 = FUN_005ea5e0(), cVar9 != '\0')) &&
              ((iVar11 = (**(code **)(*piVar17 + 0x380))(), iVar11 == 0 ||
               (iVar11 = (**(code **)(*piVar17 + 0x18c))(), iVar11 != 4)))) &&
             ((cVar9 = FUN_005e9670(), cVar9 == '\0' &&
              (iStack_2c = (**(code **)(*piVar17 + 0x284))(0x2f), (float)iStack_2c == 0.0)))) {
            uVar12 = (**(code **)(*piVar17 + 0x154))();
            FUN_007c6c30(uVar12);
            iVar18 = iVar18 + 1;
          }
          piVar10 = (int *)piVar10[1];
          if ((piVar10 == (int *)0x0) || (piVar17 = (int *)*piVar10, piVar17 == (int *)0x0)) break;
        }
      }
      FUN_007c6de0(local_38);
      iVar18 = FUN_00660110(1);
      if (iVar18 != 0) {
        iStack_2c = *(int *)(DAT_00b333cc + 0xe4);
        *(undefined4 *)(iStack_2c + 0xc) = *(undefined4 *)(DAT_00b333cc + 0xdc);
        uVar5 = _DAT_00b35c00 & 1;
        FUN_00442a30(0,0,1);
        uVar13 = _DAT_00b35c00 >> 3;
        FUN_00442a30(3,0,1);
        uVar8 = uStack_30;
        iVar11 = *(int *)(*(int *)(DAT_00b333a0 + 0x5c) + 4);
        bVar2 = *(byte *)(iVar11 + 0x18);
        puVar1 = (ushort *)(iVar11 + 0x18);
        *puVar1 = *puVar1 | 1;
        bVar3 = *(byte *)(iVar18 + 0x18);
        *(ushort *)(iVar18 + 0x18) = *(ushort *)(iVar18 + 0x18) | 1;
        local_14 = (float)DAT_00b36094;
        DAT_00b0727c = 0;
        uStack_30 = uStack_30 & 0xffffff00;
        if (DAT_00b36094 != 0) {
          uStack_30._1_3_ = SUB43(uVar8,1);
          uStack_30 = CONCAT31(uStack_30._1_3_,*(undefined1 *)(DAT_00b36094 + 0x18)) & 0xffffff01;
          if (DAT_00b06f14 == '\0') {
            *(ushort *)(DAT_00b36094 + 0x18) = *(ushort *)(DAT_00b36094 + 0x18) | 1;
          }
        }
        iVar11 = FUN_007c5ab0();
        iStack_40 = 0;
        while (iVar11 != 0) {
          piVar10 = (int *)FUN_00405ad0(&puStack_28);
          puVar15 = puStack_28;
          iVar4 = *piVar10;
          if (((puStack_28 != (undefined4 *)0x0) &&
              (LVar14 = InterlockedDecrement(puStack_28 + 1), LVar14 == 0)) &&
             (puVar15 != (undefined4 *)0x0)) {
            (**(code **)*puVar15)(1);
          }
          if (iVar4 != 0) {
            if ((_DAT_00b2c680 < *(float *)(iVar11 + 0xe0) ==
                 (_DAT_00b2c680 == *(float *)(iVar11 + 0xe0))) ||
               (*(float *)(iVar11 + 0xdc) < 0.1 == (*(float *)(iVar11 + 0xdc) == 0.1))) {
              piVar10 = (int *)FUN_00405ad0(&puStack_24);
              bVar6 = true;
              if ((*(byte *)(*piVar10 + 0x18) & 1) == 0) goto LAB_004077f1;
              bVar19 = true;
            }
            else {
LAB_004077f1:
              bVar19 = false;
            }
            puVar15 = puStack_24;
            if (((bVar6) && (bVar6 = false, puStack_24 != (undefined4 *)0x0)) &&
               ((LVar14 = InterlockedDecrement(puStack_24 + 1), LVar14 == 0 &&
                (puVar15 != (undefined4 *)0x0)))) {
              (**(code **)*puVar15)(1);
            }
            if (bVar19) {
              if ((*(byte *)(*(int *)(iVar11 + 0x130) + 0x18) & 1) == 0) {
                if (iStack_40 < iVar16) {
                  piVar10 = (int *)FUN_00405ad0(auStack_20);
                  *(ushort *)(*piVar10 + 0x18) = *(ushort *)(*piVar10 + 0x18) & 0xfffe;
                  FUN_007016a0();
                }
                uVar12 = 0;
              }
              else {
                uVar12 = 1;
              }
              FUN_007d1ed0(0,uVar12);
            }
            if (iStack_40 < iVar16) {
              piVar10 = (int *)FUN_00405ad0(&puStack_34);
              bVar7 = true;
              if (((*(byte *)(*piVar10 + 0x18) & 1) != 0) ||
                 ((*(byte *)(*(int *)(iVar11 + 0x130) + 0x18) & 1) != 0)) goto LAB_004078a0;
              bVar19 = true;
            }
            else {
LAB_004078a0:
              bVar19 = false;
            }
            puVar15 = puStack_34;
            if ((((bVar7) && (bVar7 = false, puStack_34 != (undefined4 *)0x0)) &&
                (LVar14 = InterlockedDecrement(puStack_34 + 1), LVar14 == 0)) &&
               (puVar15 != (undefined4 *)0x0)) {
              (**(code **)*puVar15)(1);
            }
            if (bVar19) {
              iVar4 = *(int *)(iVar11 + 0x130);
              uStack_4 = *(undefined4 *)(iVar4 + 0x2c);
              FUN_007d2280(0,*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x24),
                           *(undefined4 *)(iVar4 + 0x28));
              FUN_007d6390(iStack_2c);
              if ((*(short *)(iVar11 + 0x118) != 0xff) && (0.05 <= *(float *)(iVar11 + 0xd8))) {
                iStack_40 = iStack_40 + 1;
                FUN_007d5ed0();
                FUN_007d6900(DAT_00b333cc);
                if (DAT_00b06f0c != '\0') {
                  FUN_007d6900(*(undefined4 *)(iVar11 + 0x130));
                }
                FUN_007d6a40();
                goto LAB_004079bc;
              }
              piVar10 = (int *)FUN_00405ad0(&puStack_1c);
              *(ushort *)(*piVar10 + 0x18) = *(ushort *)(*piVar10 + 0x18) | 1;
              puVar15 = puStack_1c;
            }
            else {
              piVar10 = (int *)FUN_00405ad0(&puStack_18);
              *(ushort *)(*piVar10 + 0x18) = *(ushort *)(*piVar10 + 0x18) | 1;
              puVar15 = puStack_18;
            }
            if (((puVar15 != (undefined4 *)0x0) &&
                (LVar14 = InterlockedDecrement(puVar15 + 1), LVar14 == 0)) &&
               (puVar15 != (undefined4 *)0x0)) {
              (**(code **)*puVar15)(1);
            }
          }
LAB_004079bc:
          iVar11 = FUN_007c5b50();
        }
        if (uVar5 == 0) {
          FUN_00442a30(0,1,1);
        }
        if ((uVar13 & 1) == 0) {
          FUN_00442a30(3,1,1);
        }
        iVar16 = *(int *)(*(int *)(DAT_00b333a0 + 0x5c) + 4);
        if ((bVar2 & 1) == 0) {
          puVar1 = (ushort *)(iVar16 + 0x18);
          *puVar1 = *puVar1 & 0xfffe;
        }
        else {
          puVar1 = (ushort *)(iVar16 + 0x18);
          *puVar1 = *puVar1 | 1;
        }
        if (local_14 != 0.0) {
          FUN_00404cd0(uStack_30);
        }
        DAT_00b0727c = 1;
        FUN_00977c50(3);
        FUN_007c6770(iStack_2c);
        FUN_00977c50(2);
        if ((bVar3 & 1) == 0) {
          *(ushort *)(iVar18 + 0x18) = *(ushort *)(iVar18 + 0x18) & 0xfffe;
        }
        else {
          *(ushort *)(iVar18 + 0x18) = *(ushort *)(iVar18 + 0x18) | 1;
        }
      }
    }
  }
  if ((DAT_00b430ad != '\0') &&
     ((((cVar9 = FUN_00578f60(), cVar9 == '\0' || (cVar9 = FUN_0057ab70(), cVar9 != '\0')) ||
       (cVar9 = FUN_00572e30(2), cVar9 != '\0')) ||
      (iVar16 = FUN_00542ea0(), *(char *)(iVar16 + 0x100) != '\0')))) {
    fVar20 = _DAT_00b06530 * _DAT_00b33e9c;
    local_14 = fVar20;
    FUN_00542ea0(fVar20);
    FUN_00543a00(fVar20);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407ae0(void)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined2 uVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  double *pdVar12;
  int *piVar13;
  int *piVar14;
  float *pfVar15;
  char *pcVar16;
  undefined *puVar17;
  int iVar18;
  int in_ECX;
  int iVar19;
  int iVar20;
  char *pcVar21;
  int iVar22;
  undefined1 *puVar23;
  char *pcVar24;
  int *unaff_FS_OFFSET;
  float10 fVar25;
  float10 extraout_ST0;
  undefined4 *puVar26;
  float fVar27;
  char *pcVar28;
  undefined **ppuVar29;
  float fVar30;
  undefined **ppuVar31;
  undefined4 uVar32;
  double dVar33;
  undefined4 uVar34;
  undefined1 auStack_574 [36];
  int local_550;
  int local_54c;
  int *local_548;
  int *local_544;
  int *local_540;
  float local_53c;
  int *local_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  undefined8 local_528;
  float fStack_520;
  float local_514;
  char cStack_50f;
  char cStack_50e;
  char cStack_50d;
  float local_50c;
  float local_508;
  int *local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  char *local_4f4 [4];
  char *local_4e4;
  char *local_4e0;
  char *local_4dc;
  char *pcStack_4d8;
  char *pcStack_4d4;
  char *pcStack_4d0;
  char *pcStack_4cc;
  uint local_4c8;
  int local_4c4;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  int local_4ac;
  int local_4a8;
  int local_49c;
  int local_498;
  int local_494;
  int local_490;
  int local_48c;
  int local_488;
  int local_484;
  int local_480;
  int local_47c;
  int aiStack_474 [200];
  char acStack_154 [3];
  char cStack_151;
  undefined4 local_150;
  char acStack_14c [200];
  uint local_84;
  int local_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_009aa0b4;
  local_4c = *unaff_FS_OFFSET;
  local_84 = DAT_00b30aac ^ (uint)auStack_574;
  uVar9 = DAT_00b30aac ^ (uint)&stack0xfffffa80;
  *unaff_FS_OFFSET = (int)&local_4c;
  if (DAT_00b3bd9a != '\0') goto LAB_0040c0ca;
  iVar10 = FUN_00585c10(1,uVar9);
  if ((*(char *)(iVar10 + 0x31) < '\x01') && (DAT_00b333b4 != (int *)0x0)) {
    DAT_00b33415 = '\0';
  }
  else {
    piVar11 = (int *)FUN_00579440();
    if (piVar11 == (int *)0x0) {
      if (((DAT_00b33415 == '\0') && (DAT_00b333b4 != (int *)0x0)) &&
         ((DAT_00b333b4 != DAT_00b333c4 || (DAT_00b33414 != '\0')))) {
        FUN_0057c980(DAT_00b333b4);
      }
      else {
        DAT_00b333b4 = DAT_00b333c4;
      }
    }
    else {
      DAT_00b33414 = piVar11 == DAT_00b333c4;
      DAT_00b333b4 = piVar11;
    }
    DAT_00b33415 = '\x01';
  }
  cVar4 = FUN_005792e0();
  if (cVar4 == '\0') goto LAB_0040c0ca;
  iVar10 = FUN_004032d0(0x46,1);
  if (iVar10 != 0) {
    FUN_00571f90(1);
    FUN_00571820();
    iVar10 = FUN_004032d0(0x2a,0);
    if ((iVar10 == 0) && (iVar10 = FUN_004032d0(0x36,0), iVar10 == 0)) {
      DAT_00b02e0c = DAT_00b02e0c + 1;
    }
    else {
      DAT_00b02e0c = DAT_00b02e0c + -1;
    }
  }
  if (DAT_00b02e0c < 0) {
    DAT_00b02e0c = 0x20;
  }
  else if (0x20 < DAT_00b02e0c) {
    DAT_00b02e0c = 0;
  }
  local_544 = (int *)FUN_009832e6();
  iVar20 = DAT_00b12db4 + -1;
  iVar10 = FUN_00576a30();
  pfVar15 = *(float **)(*(int *)(iVar10 + iVar20 * 4) + 0x38);
  if (pfVar15 == (float *)0x0) {
    local_540 = (int *)0x0;
  }
  else {
    local_540 = (int *)*pfVar15;
  }
  iVar10 = FUN_009828c0();
  local_550 = DAT_00b02e1c + iVar10;
  if (DAT_00b33410 != DAT_00b33ea4) {
    DAT_00b33410 = DAT_00b33ea4;
    DAT_00b3340c = DAT_00b33ea0;
  }
  iVar20 = DAT_00b33ea0 - DAT_00b3340c;
  local_528 = (double)CONCAT44(local_528._4_4_,iVar20);
  fVar30 = (float)iVar20;
  if (iVar20 < 0) {
    fVar30 = fVar30 + 4.2949673e+09;
  }
  local_548 = (int *)(fVar30 * 0.001);
  DAT_00b33408 = DAT_00b33408 + 1;
  DAT_00b3340c = DAT_00b33ea0;
  _DAT_00b33404 = _DAT_00b33404 + (float)local_548;
  sVar8 = DAT_00b33400;
  local_54c = local_550;
  if (1.0 < _DAT_00b33404 != (_DAT_00b33404 == 1.0)) {
    if (((DAT_00b02e0c == 0x18) || (DAT_00b02e0c == 0x19)) &&
       (iVar20 = FUN_00585c10(1), *(char *)(iVar20 + 0x31) < '\x01')) {
      FUN_00571f90(1);
      FUN_00571820();
    }
    sVar8 = DAT_00b33408;
    local_528 = (double)_DAT_00b33404;
    DAT_00b33400 = DAT_00b33408;
    fVar25 = (float10)FUN_00404f70(_DAT_00b33404);
    DAT_00b33408 = 0;
    _DAT_00b33404 = (float)((float10)local_528 - fVar25);
  }
  if (DAT_00ba7918 == 10) {
    iVar20 = FUN_009828c0();
    pcVar28 = "FPS %d (%d)";
  }
  else {
    pcVar28 = "FPS %d (Type %d)";
    iVar20 = DAT_00ba7918;
  }
  _sprintf((char *)&local_150,pcVar28,(int)sVar8,iVar20);
  local_548 = (int *)(0x500 - DAT_00b02e24);
  FUN_0057b8e0();
  iVar20 = DAT_00b3c21c;
  local_54c = local_54c + iVar10;
  switch(DAT_00b02e0c) {
  case 0:
    local_4f4[0] = "Sunday";
    local_4f4[1] = "Monday";
    local_4f4[2] = "Tuesday";
    local_4f4[3] = "Wednesday";
    local_4e4 = "Thursday";
    local_4e0 = "Friday";
    local_4dc = "Saturday";
    iVar20 = FUN_00402c40();
    _sprintf((char *)&local_150,"Day of the Week %s",local_4f4[iVar20]);
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    uVar32 = FUN_00402b40();
    cVar4 = FUN_00402ba0(uVar32);
    uVar32 = FUN_00402b80((int)cVar4);
    _sprintf((char *)&local_150,"Date %d/%d/%d",uVar32);
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    fVar25 = (float10)FUN_00402bd0();
    local_548 = (int *)(float)fVar25;
    cVar4 = FUN_009828c0();
    local_548 = (int *)(int)cVar4;
    cVar5 = FUN_009828c0();
    local_548 = (int *)(int)cVar5;
    cVar6 = FUN_009828c0();
    _sprintf((char *)&local_150,"Time %d:%02d:%02d",(int *)(int)cVar4,(int *)(int)cVar5,(int)cVar6);
    FUN_0057b8e0();
    fVar30 = (float)DAT_00b33ea0;
    local_550 = local_550 + iVar10;
    if (DAT_00b33ea0 < 0) {
      fVar30 = fVar30 + 4.2949673e+09;
    }
    local_540 = (int *)(fVar30 / 1000.0);
    cStack_50d = FUN_009828c0();
    local_548 = (int *)(float)(extraout_ST0 / (float10)60.0);
    fVar25 = (float10)FUN_00982bfa();
    local_548 = (int *)(float)fVar25;
    cStack_50e = FUN_009828c0();
    fVar25 = (float10)FUN_00982bfa();
    local_548 = (int *)(float)fVar25;
    cStack_50f = FUN_009828c0();
    local_548 = (int *)FUN_009828c0((double)_DAT_00b33e9c);
    uVar32 = FUN_009828c0();
    _sprintf((char *)&local_150,"GamePlay %d:%02d:%02d.%02d (%0.2f)",(int)cStack_50d,(int)cStack_50e
             ,(int)cStack_50f,uVar32);
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    if (DAT_00b333c4 != (int *)0x0) {
      pfVar15 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
      fStack_534 = *pfVar15;
      fStack_530 = pfVar15[1];
      fStack_52c = pfVar15[2];
      piVar11 = *(int **)(DAT_00b333a0 + 0x34);
      piVar13 = (int *)0x0;
      if (piVar11 == (int *)0x0) {
        piVar13 = (int *)FUN_0043f270();
        piVar11 = (int *)FUN_0044a270(fStack_534,fStack_530,piVar13,0);
        if (piVar11 == (int *)0x0) goto LAB_0040903b;
      }
      cVar4 = FUN_004c97f0();
      if (cVar4 == '\0') {
        uVar32 = FUN_004c9aa0();
        uVar32 = FUN_004c9a80(uVar32);
        uVar32 = (**(code **)(*piVar11 + 0xd4))(uVar32);
        _sprintf((char *)&local_150,"PC Cell %s: %d %d ",uVar32);
      }
      else {
        uVar32 = (**(code **)(**(int **)(DAT_00b333a0 + 0x34) + 0xd4))();
        _sprintf((char *)&local_150,"PC Cell %s",uVar32);
      }
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      local_528 = 0.0;
      local_44 = 0;
      if (piVar13 == (int *)0x0) {
        puVar23 = (undefined1 *)piVar11[7];
        if (puVar23 == (undefined1 *)0x0) {
          puVar23 = &DAT_00a2f7ec;
        }
        FUN_004028d0(puVar23,0);
      }
      else {
        (**(code **)(*piVar13 + 0xdc))(&local_528,fStack_534,fStack_530,fStack_52c);
      }
      iVar20 = FUN_00404fd0();
      pcVar28 = "UNKNOWN";
      if (iVar20 != 0) {
        pcVar28 = (char *)local_528;
      }
      _sprintf((char *)&local_150,"Map Name: %s ",pcVar28);
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      local_44 = 0xffffffff;
      FUN_00402da0();
    }
LAB_0040903b:
    piVar11 = DAT_00b333b4;
    if (DAT_00b333b4 != (int *)0x0) {
      pfVar15 = (float *)(**(code **)(*DAT_00b333b4 + 0x174))();
      fStack_534 = *pfVar15;
      fStack_530 = pfVar15[1];
      fStack_52c = pfVar15[2];
      local_548 = (int *)(0x500 - DAT_00b02e24);
      FUN_004da2a0((float)(int)local_548,(float)local_54c,3,0xffffffff);
      FUN_0057b8e0();
      local_54c = local_54c + iVar10;
      cVar4 = (**(code **)(*piVar11 + 400))();
      if (cVar4 != '\0') {
        fVar25 = (float10)(**(code **)(*piVar11 + 0x1e0))();
        _sprintf((char *)&local_150,"Heading %0.2f",
                 SUB84((double)(fVar25 * (float10)57.2957763671875),0),
                 (int)((ulonglong)(double)(fVar25 * (float10)57.2957763671875) >> 0x20));
        local_548 = (int *)(0x500 - DAT_00b02e24);
        FUN_0057b8e0();
        local_54c = local_54c + iVar10;
      }
      _sprintf((char *)&local_150,"Pos: %.0f %.0f %.0f",(double)fStack_534,
               SUB84((double)fStack_530,0),(int)((ulonglong)(double)fStack_530 >> 0x20),
               SUB84((double)fStack_52c,0),(int)((ulonglong)(double)fStack_52c >> 0x20));
      local_548 = (int *)(0x500 - DAT_00b02e24);
      FUN_0057b8e0();
      local_54c = local_54c + iVar10;
      iVar20 = (**(code **)(*piVar11 + 0x154))();
      if (iVar20 != 0) {
        uVar32 = (**(code **)(*piVar11 + 0x154))(&DAT_00a30968);
        uVar32 = FUN_006f94a0(uVar32);
        iVar20 = FUN_00560920(&DAT_00b3fab0,uVar32);
        if (iVar20 != 0) {
          fStack_534 = *(float *)(iVar20 + 0x88);
          fStack_530 = *(float *)(iVar20 + 0x8c);
          fStack_52c = *(float *)(iVar20 + 0x90);
          _sprintf((char *)&local_150,"%s Pos: %.0f %.0f %.0f");
          local_548 = (int *)(0x500 - DAT_00b02e24);
          FUN_0057b8e0();
          local_54c = local_54c + iVar10;
        }
      }
      iVar20 = FUN_005645b0();
      if (iVar20 != 0) {
        fStack_534 = *(float *)(iVar20 + 0x88);
        fStack_530 = *(float *)(iVar20 + 0x8c);
        fStack_52c = *(float *)(iVar20 + 0x90);
        _sprintf((char *)&local_150,"%s: %.0f %.0f %.0f");
        local_548 = (int *)(0x500 - DAT_00b02e24);
        FUN_0057b8e0();
        local_54c = local_54c + iVar10;
      }
      iVar20 = FUN_006ecc80();
      if (iVar20 != 0) {
        piVar11 = (int *)FUN_006ecc80();
        FUN_006ecc80();
        uVar32 = FUN_004c9aa0();
        FUN_006ecc80(uVar32);
        uVar32 = FUN_004c9a80();
        uVar32 = (**(code **)(*piVar11 + 0xd4))(uVar32);
        _sprintf((char *)&local_150,"Cell %s: %d %d",uVar32);
        local_548 = (int *)(0x500 - DAT_00b02e24);
        FUN_0057b8e0();
        local_54c = local_54c + iVar10;
      }
      piVar11 = local_544;
      if (((local_544 != (int *)0x0) && (((uint)local_544[2] >> 0xb & 1) == 0)) &&
         (((uint)local_544[2] >> 5 & 1) == 0)) {
        uVar32 = FUN_00659a00();
        _sprintf((char *)&local_150,"Level %d",uVar32);
        local_548 = (int *)(0x500 - DAT_00b02e24);
        FUN_0057b8e0();
        local_54c = local_54c + iVar10;
        iVar20 = FUN_005e0380();
        if (iVar20 == 0) {
          _sprintf((char *)&local_150,"Package NONE");
        }
        else {
          FUN_005e0380();
          iVar20 = FUN_00404e50();
          if (iVar20 == 0) {
            uVar32 = FUN_005e4080();
            _sprintf((char *)&local_150,"Package %s",uVar32);
          }
          else {
            piVar13 = (int *)FUN_005e0380();
            uVar32 = (**(code **)(*piVar13 + 0xd4))();
            uVar32 = FUN_005e4080(uVar32);
            _sprintf((char *)&local_150,"Package %s (%s)",uVar32);
          }
        }
        local_548 = (int *)(0x500 - DAT_00b02e24);
        FUN_0057b8e0();
        local_54c = local_54c + iVar10;
        iVar20 = (**(code **)(*(int *)piVar11[0x16] + 0x180))();
        iVar22 = FUN_005e0380();
        if ((iVar22 == 0) || (iVar22 = FUN_005e0380(), *(int *)(iVar22 + 0x18) == -1)) {
          puVar17 = &DAT_00a308d0;
        }
        else {
          iVar22 = FUN_005e0380();
          puVar17 = (&PTR_s_PROCEDURE_TRAVEL_00b15020)
                    [*(int *)((&PTR_DAT_00b152b0)[*(int *)(iVar22 + 0x18)] + iVar20 * 4)];
        }
        _sprintf((char *)&local_150,"Procedure Current Pack %s",puVar17);
        local_548 = (int *)(0x500 - DAT_00b02e24);
        FUN_0057b8e0();
        piVar13 = (int *)FUN_005e03a0();
        local_54c = local_54c + iVar10;
        if (((piVar13 == (int *)0x0) || (cVar4 = FUN_005660a0(), cVar4 != '\0')) ||
           (iVar20 = FUN_00404e50(), iVar20 == 0)) {
          iVar20 = FUN_0041fb20();
          if (iVar20 == 0) {
            _sprintf((char *)&local_150,"Current Editor Package NONE");
          }
          else {
            piVar13 = (int *)FUN_0041fb20();
            iVar20 = (**(code **)(*piVar13 + 0xd4))();
            if (iVar20 != 0) goto LAB_004095a0;
          }
        }
        else {
LAB_004095a0:
          uVar32 = (**(code **)(*piVar13 + 0xd4))();
          _sprintf((char *)&local_150,"Current Editor Package %s",uVar32);
        }
        local_548 = (int *)(0x500 - DAT_00b02e24);
        FUN_0057b8e0();
        local_54c = local_54c + iVar10;
        if ((piVar13 == (int *)0x0) || (piVar13[6] == -1)) {
          puVar17 = &DAT_00a308d0;
          pcVar28 = "Procedure Editor Pack  %s";
        }
        else {
          puVar17 = (&PTR_s_PROCEDURE_TRAVEL_00b15020)
                    [*(int *)((&PTR_DAT_00b152b0)[piVar13[6]] + *(int *)(piVar11[0x16] + 4) * 4)];
          pcVar28 = "Procedure Editor Pack %s";
        }
        _sprintf((char *)&local_150,pcVar28,puVar17);
        local_548 = (int *)(0x500 - DAT_00b02e24);
        FUN_0057b8e0();
        local_54c = local_54c + iVar10;
        fVar25 = (float10)(**(code **)(*piVar11 + 0x288))(8);
        _sprintf(acStack_154,"Actor Health %.02f",SUB84((double)fVar25,0),
                 (int)((ulonglong)(double)fVar25 >> 0x20));
        local_54c = 0x500 - DAT_00b02e24;
        FUN_0057b8e0(acStack_154,(float)local_54c,(float)local_550,3,0xffffffff);
        local_550 = local_550 + iVar10;
        iVar20 = FUN_005e6830();
        if (iVar20 == 0) {
          uVar32 = (**(code **)(*(int *)piVar11[0x16] + 0x4d4))();
          _sprintf((char *)&local_150,"Heading Target: (none) (%s)",uVar32);
        }
        else {
          piVar13 = (int *)piVar11[0x16];
          iVar20 = FUN_005e6830();
          local_54c = *(int *)(iVar20 + 0xc);
          uVar32 = (**(code **)(*piVar13 + 0x4d4))();
          FUN_005e6830(local_548,uVar32);
          uVar32 = FUN_004da2a0();
          _sprintf((char *)&local_150,"Heading Target: %s (%08X), (%s)",uVar32);
        }
        local_548 = (int *)(0x500 - DAT_00b02e24);
        FUN_0057b8e0();
        local_54c = local_54c + iVar10;
        if (((int *)piVar11[0x16] != (int *)0x0) &&
           (cVar4 = (**(code **)(*(int *)piVar11[0x16] + 0x34c))(), cVar4 != '\0')) {
          _sprintf((char *)&local_150," Movement is stopped");
          local_548 = (int *)(0x500 - DAT_00b02e24);
          FUN_0057b8e0();
        }
      }
    }
    break;
  case 1:
    if ((DAT_00b333b4 != (int *)0x0) &&
       (iVar20 = (**(code **)(*DAT_00b333b4 + 0x164))(), iVar20 != 0)) {
      FUN_004da2a0((float)DAT_00b02e24,(float)local_550,1,0xffffffff);
      FUN_0057b8e0();
      piVar11 = local_544;
      local_550 = local_550 + iVar10;
      if ((local_544 != (int *)0x0) &&
         (iVar20 = (**(code **)(*(int *)local_544[0x16] + 8))(), iVar20 == 0)) {
        local_150 = local_150 & 0xffffff00;
        uVar9 = (**(code **)(*(int *)piVar11[0x16] + 0x2c0))();
        if ((uVar9 & 0x100) != 0) {
          pcVar28 = &cStack_151;
          do {
            pcVar16 = pcVar28;
            pcVar28 = pcVar16 + 1;
          } while (pcVar16[1] != '\0');
          builtin_strncpy(pcVar16 + 1,"Walk ",6);
        }
        if ((uVar9 & 0x200) != 0) {
          pcVar28 = &cStack_151;
          do {
            pcVar16 = pcVar28;
            pcVar28 = pcVar16 + 1;
          } while (pcVar16[1] != '\0');
          builtin_strncpy(pcVar16 + 1,"Run ",5);
        }
        if ((uVar9 & 0x400) != 0) {
          pcVar28 = &cStack_151;
          do {
            pcVar16 = pcVar28;
            pcVar28 = pcVar16 + 1;
          } while (pcVar16[1] != '\0');
          builtin_strncpy(pcVar16 + 1,"Sneak ",7);
        }
        if ((uVar9 & 0x800) != 0) {
          pcVar28 = &cStack_151;
          do {
            pcVar16 = pcVar28;
            pcVar28 = pcVar16 + 1;
          } while (pcVar16[1] != '\0');
          builtin_strncpy(pcVar16 + 1,"Swim ",6);
        }
        if ((uVar9 & 0x1000) != 0) {
          pcVar28 = &cStack_151;
          do {
            pcVar16 = pcVar28;
            pcVar28 = pcVar16 + 1;
          } while (pcVar16[1] != '\0');
          builtin_strncpy(pcVar16 + 1,"Jump ",6);
        }
        if ((uVar9 & 0x2000) != 0) {
          pcVar28 = &cStack_151;
          do {
            pcVar16 = pcVar28;
            pcVar28 = pcVar16 + 1;
          } while (pcVar16[1] != '\0');
          builtin_strncpy(pcVar16 + 1,"Fly ",5);
        }
        if ((uVar9 & 0x4000) != 0) {
          pcVar28 = &cStack_151;
          do {
            pcVar16 = pcVar28;
            pcVar28 = pcVar16 + 1;
          } while (pcVar16[1] != '\0');
          builtin_strncpy(pcVar16 + 1,"Fall ",6);
        }
        if ((uVar9 & 0x8000) != 0) {
          pcVar28 = &cStack_151;
          do {
            pcVar16 = pcVar28;
            pcVar28 = pcVar16 + 1;
          } while (pcVar16[1] != '\0');
          builtin_strncpy(pcVar16 + 1,"Slide ",7);
        }
        if ((uVar9 & 0x10) != 0) {
          pcVar28 = &cStack_151;
          do {
            pcVar16 = pcVar28;
            pcVar28 = pcVar16 + 1;
          } while (pcVar16[1] != '\0');
          builtin_strncpy(pcVar16 + 1,"TurnLeft ",10);
        }
        if ((uVar9 & 0x20) != 0) {
          pcVar28 = &cStack_151;
          do {
            pcVar16 = pcVar28;
            pcVar28 = pcVar16 + 1;
          } while (pcVar16[1] != '\0');
          builtin_strncpy(pcVar16 + 1,"TurnRight ",0xb);
        }
        if ((uVar9 & 1) != 0) {
          pcVar28 = &cStack_151;
          do {
            pcVar16 = pcVar28;
            pcVar28 = pcVar16 + 1;
          } while (pcVar16[1] != '\0');
          builtin_strncpy(pcVar16 + 1,"Forward ",9);
        }
        if ((uVar9 & 2) != 0) {
          pcVar28 = &cStack_151;
          do {
            pcVar16 = pcVar28;
            pcVar28 = pcVar16 + 1;
          } while (pcVar16[1] != '\0');
          builtin_strncpy(pcVar16 + 1,"Backward ",10);
        }
        if ((uVar9 & 4) != 0) {
          pcVar28 = &cStack_151;
          do {
            pcVar16 = pcVar28;
            pcVar28 = pcVar16 + 1;
          } while (pcVar16[1] != '\0');
          builtin_strncpy(pcVar16 + 1,"Left ",6);
        }
        if ((uVar9 & 8) != 0) {
          pcVar28 = &cStack_151;
          do {
            pcVar16 = pcVar28;
            pcVar28 = pcVar16 + 1;
          } while (pcVar16[1] != '\0');
          builtin_strncpy(pcVar16 + 1,"Right ",7);
        }
        iVar20 = (**(code **)(*piVar11 + 0x380))();
        if (iVar20 != 0) {
          pcVar28 = &cStack_151;
          do {
            pcVar16 = pcVar28;
            pcVar28 = pcVar16 + 1;
          } while (pcVar16[1] != '\0');
          builtin_strncpy(pcVar16 + 1," Horse \'",9);
          (**(code **)(*local_544 + 0x380))();
          pcVar16 = (char *)FUN_004da2a0();
          pcVar28 = pcVar16;
          do {
            cVar4 = *pcVar28;
            pcVar28 = pcVar28 + 1;
          } while (cVar4 != '\0');
          pcVar24 = &cStack_151;
          do {
            pcVar21 = pcVar24 + 1;
            pcVar24 = pcVar24 + 1;
          } while (*pcVar21 != '\0');
          pcVar21 = pcVar16;
          for (uVar9 = (uint)((int)pcVar28 - (int)pcVar16) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
            pcVar21 = pcVar21 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar9 = (int)pcVar28 - (int)pcVar16 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar24 = *pcVar21;
            pcVar21 = pcVar21 + 1;
            pcVar24 = pcVar24 + 1;
          }
          pcVar28 = &cStack_151;
          do {
            pcVar16 = pcVar28;
            pcVar28 = pcVar16 + 1;
          } while (pcVar16[1] != '\0');
          pcVar28[0] = '\'';
          pcVar28[1] = ' ';
          pcVar16[3] = '\0';
          iVar20 = (**(code **)(*local_544 + 0x380))();
          uVar9 = (**(code **)(**(int **)(iVar20 + 0x58) + 0x2c0))();
          if ((uVar9 & 0x100) != 0) {
            pcVar28 = &cStack_151;
            do {
              pcVar16 = pcVar28;
              pcVar28 = pcVar16 + 1;
            } while (pcVar16[1] != '\0');
            builtin_strncpy(pcVar16 + 1,"Walk ",6);
          }
          if ((uVar9 & 0x200) != 0) {
            pcVar28 = &cStack_151;
            do {
              pcVar16 = pcVar28;
              pcVar28 = pcVar16 + 1;
            } while (pcVar16[1] != '\0');
            builtin_strncpy(pcVar16 + 1,"Run ",5);
          }
          if ((uVar9 & 0x400) != 0) {
            pcVar28 = &cStack_151;
            do {
              pcVar16 = pcVar28;
              pcVar28 = pcVar16 + 1;
            } while (pcVar16[1] != '\0');
            builtin_strncpy(pcVar16 + 1,"Sneak ",7);
          }
          if ((uVar9 & 0x800) != 0) {
            pcVar28 = &cStack_151;
            do {
              pcVar16 = pcVar28;
              pcVar28 = pcVar16 + 1;
            } while (pcVar16[1] != '\0');
            builtin_strncpy(pcVar16 + 1,"Swim ",6);
          }
          if ((uVar9 & 0x1000) != 0) {
            pcVar28 = &cStack_151;
            do {
              pcVar16 = pcVar28;
              pcVar28 = pcVar16 + 1;
            } while (pcVar16[1] != '\0');
            builtin_strncpy(pcVar16 + 1,"Jump ",6);
          }
          if ((uVar9 & 0x2000) != 0) {
            pcVar28 = &cStack_151;
            do {
              pcVar16 = pcVar28;
              pcVar28 = pcVar16 + 1;
            } while (pcVar16[1] != '\0');
            builtin_strncpy(pcVar16 + 1,"Fly ",5);
          }
          if ((uVar9 & 0x4000) != 0) {
            pcVar28 = &cStack_151;
            do {
              pcVar16 = pcVar28;
              pcVar28 = pcVar16 + 1;
            } while (pcVar16[1] != '\0');
            builtin_strncpy(pcVar16 + 1,"Fall ",6);
          }
          if ((uVar9 & 0x8000) != 0) {
            pcVar28 = &cStack_151;
            do {
              pcVar16 = pcVar28;
              pcVar28 = pcVar16 + 1;
            } while (pcVar16[1] != '\0');
            builtin_strncpy(pcVar16 + 1,"Slide ",7);
          }
          if ((uVar9 & 0x10) != 0) {
            pcVar28 = &cStack_151;
            do {
              pcVar16 = pcVar28;
              pcVar28 = pcVar16 + 1;
            } while (pcVar16[1] != '\0');
            builtin_strncpy(pcVar16 + 1,"TurnLeft ",10);
          }
          if ((uVar9 & 0x20) != 0) {
            pcVar28 = &cStack_151;
            do {
              pcVar16 = pcVar28;
              pcVar28 = pcVar16 + 1;
            } while (pcVar16[1] != '\0');
            builtin_strncpy(pcVar16 + 1,"TurnRight ",0xb);
          }
          if ((uVar9 & 1) != 0) {
            pcVar28 = &cStack_151;
            do {
              pcVar16 = pcVar28;
              pcVar28 = pcVar16 + 1;
            } while (pcVar16[1] != '\0');
            builtin_strncpy(pcVar16 + 1,"Forward ",9);
          }
          if ((uVar9 & 2) != 0) {
            pcVar28 = &cStack_151;
            do {
              pcVar16 = pcVar28;
              pcVar28 = pcVar16 + 1;
            } while (pcVar16[1] != '\0');
            builtin_strncpy(pcVar16 + 1,"Backward ",10);
          }
          if ((uVar9 & 4) != 0) {
            pcVar28 = &cStack_151;
            do {
              pcVar16 = pcVar28;
              pcVar28 = pcVar16 + 1;
            } while (pcVar16[1] != '\0');
            builtin_strncpy(pcVar16 + 1,"Left ",6);
          }
          if ((uVar9 & 8) != 0) {
            pcVar28 = &cStack_151;
            do {
              pcVar16 = pcVar28;
              pcVar28 = pcVar16 + 1;
            } while (pcVar16[1] != '\0');
            builtin_strncpy(pcVar16 + 1,"Right ",7);
          }
        }
        piVar11 = local_544;
        iVar20 = FUN_005e0ee0();
        if (iVar20 != -1) {
          pcVar28 = &cStack_151;
          do {
            pcVar16 = pcVar28;
            pcVar28 = pcVar16 + 1;
          } while (pcVar16[1] != '\0');
          builtin_strncpy(pcVar16 + 1," ACTION-> ",0xb);
          iVar20 = FUN_005e0ee0();
          pcVar28 = (&PTR_s_Equip_Weapon_00b14c80)[iVar20];
          pcVar16 = pcVar28;
          do {
            cVar4 = *pcVar16;
            pcVar16 = pcVar16 + 1;
          } while (cVar4 != '\0');
          pcVar24 = &cStack_151;
          do {
            pcVar21 = pcVar24 + 1;
            pcVar24 = pcVar24 + 1;
          } while (*pcVar21 != '\0');
          pcVar21 = pcVar28;
          for (uVar9 = (uint)((int)pcVar16 - (int)pcVar28) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
            pcVar21 = pcVar21 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar9 = (int)pcVar16 - (int)pcVar28 & 3; piVar11 = local_544, uVar9 != 0;
              uVar9 = uVar9 - 1) {
            *pcVar24 = *pcVar21;
            pcVar21 = pcVar21 + 1;
            pcVar24 = pcVar24 + 1;
          }
        }
        local_4f4[0] = "OnGround";
        local_4f4[1] = "Jumping";
        local_4f4[2] = "InAir";
        local_4f4[3] = "Climbing";
        local_4e4 = "Flying";
        local_4e0 = "Swimming";
        local_4dc = "Projectile";
        pcStack_4d8 = "UserState2";
        pcStack_4d4 = "UserState3";
        pcStack_4d0 = "UserState4";
        pcStack_4cc = "UserState5";
        iVar20 = FUN_0065a2c0();
        if (iVar20 != 0) {
          pcVar28 = &cStack_151;
          do {
            pcVar16 = pcVar28;
            pcVar28 = pcVar16 + 1;
          } while (pcVar16[1] != '\0');
          builtin_strncpy(pcVar16 + 1," HK_STATE-> ",0xd);
          iVar20 = FUN_0088d370();
          pcVar28 = local_4f4[iVar20];
          pcVar16 = pcVar28;
          do {
            cVar4 = *pcVar16;
            pcVar16 = pcVar16 + 1;
          } while (cVar4 != '\0');
          pcVar24 = &cStack_151;
          do {
            pcVar21 = pcVar24 + 1;
            pcVar24 = pcVar24 + 1;
          } while (*pcVar21 != '\0');
          pcVar21 = pcVar28;
          for (uVar9 = (uint)((int)pcVar16 - (int)pcVar28) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
            pcVar21 = pcVar21 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar9 = (int)pcVar16 - (int)pcVar28 & 3; piVar11 = local_544, uVar9 != 0;
              uVar9 = uVar9 - 1) {
            *pcVar24 = *pcVar21;
            pcVar21 = pcVar21 + 1;
            pcVar24 = pcVar24 + 1;
          }
        }
        FUN_0057b8e0();
        local_550 = local_550 + iVar10;
        iVar20 = *(int *)(piVar11[0x16] + 0x1ec);
        if (iVar20 == 0) {
          _sprintf((char *)&local_150,"BoneLOD NONE");
        }
        else {
          _sprintf((char *)&local_150,"BoneLOD %d of %d",*(undefined4 *)(piVar11[0x16] + 0x1f0),
                   *(undefined4 *)(iVar20 + 0x40));
        }
        FUN_0057b8e0();
        local_550 = local_550 + iVar10;
      }
      local_540 = (int *)0x1;
      if (DAT_00b333b4 != DAT_00b333c4) goto LAB_0040a22d;
      if (DAT_00b333c4[0x176] == 0) {
        local_540 = (int *)0x2;
      }
      do {
        piVar11 = local_540;
        if (DAT_00b333b4 == DAT_00b333c4) {
          if (DAT_00b333c4[0x176] == 0) {
            puVar17 = &DAT_00a3069c;
            if (local_540 != (int *)0x2) {
              puVar17 = &DAT_00a30698;
            }
            _sprintf((char *)&local_150,"%s Person",puVar17);
            iVar20 = FUN_0065d750(piVar11 == (int *)0x2);
          }
          else {
            local_150._0_1_ = 'I';
            local_150._1_1_ = 'n';
            local_150._2_1_ = 'v';
            local_150._3_1_ = 'e';
            builtin_strncpy(acStack_14c,"ntory PC",9);
            iVar20 = DAT_00b333c4[0x177];
          }
          FUN_0057b8e0();
          local_550 = local_550 + iVar10;
        }
        else {
LAB_0040a22d:
          iVar20 = (**(code **)(*DAT_00b333b4 + 0x164))();
        }
        local_538 = (int *)0x0;
        do {
          piVar11 = local_538;
          local_548 = (int *)FUN_004706e0(local_538);
          if (local_548 != (int *)0x0) {
            uVar7 = FUN_00470720(local_538);
            iVar22 = FUN_0051aa00(uVar7,local_548[3]);
            iVar22 = FUN_0051a9e0(uVar7,(&PTR_DAT_00b102e0)[iVar22 * 9]);
            FUN_0051a9d0(uVar7,(&PTR_DAT_00b102c8)[iVar22]);
            _sprintf((char *)&local_150,"%s -> %s/%s/%s, Count: %d");
            FUN_0057b8e0();
            local_550 = local_550 + iVar10;
            piVar11 = local_538;
          }
          local_538 = (int *)((int)piVar11 + 1);
        } while ((int)local_538 < 5);
        uVar32 = 0;
        fStack_534 = DAT_00b3f9a8;
        fStack_530 = DAT_00b3f9ac;
        fStack_52c = DAT_00b3f9b0;
        if (local_544 != (int *)0x0) {
          uVar32 = FUN_00470720(0);
          iVar22 = FUN_0051aa00(uVar32);
          piVar11 = local_544;
          if (iVar22 - 7U < 4) {
            uVar9 = (**(code **)(*(int *)local_544[0x16] + 0x2c0))();
            if ((uVar9 & 0x800) == 0) {
              uVar9 = (**(code **)(*(int *)piVar11[0x16] + 0x2c0))();
              if ((uVar9 & 0x2000) == 0) {
                FUN_005e3750();
              }
              else {
                FUN_005e3c80();
              }
            }
            else {
              FUN_005e3ad0();
            }
          }
          else {
            uVar9 = (**(code **)(*(int *)local_544[0x16] + 0x2c0))();
            if ((uVar9 & 0x800) == 0) {
              uVar9 = (**(code **)(*(int *)piVar11[0x16] + 0x2c0))();
              if ((uVar9 & 0x2000) == 0) {
                FUN_005e3590();
              }
              else {
                FUN_005e3c80();
              }
            }
            else {
              FUN_005e3920();
            }
          }
          uVar32 = FUN_009828c0();
        }
        uVar9 = FUN_00470720(0);
        local_548 = (int *)(uVar9 & 0xffff);
        FUN_004723a0(&fStack_534,DAT_00b333b4,0,0);
        local_538 = *(int **)(iVar20 + 0xc0);
        local_514 = *(float *)(iVar20 + 0xbc);
        local_53c = *(float *)(iVar20 + 0x94);
        fVar25 = (float10)FUN_00404c90();
        dVar33 = (double)fVar25;
        sVar8 = FUN_00472330(local_548);
        _sprintf((char *)&local_150,"time %.2f move %.1f attack %.1f speed %d/%d delta %.1f",
                 (double)local_53c,(double)local_514,(double)(float)local_538,(int)sVar8,uVar32,
                 SUB84(dVar33,0),(int)((ulonglong)dVar33 >> 0x20));
        FUN_0057b8e0();
        local_550 = local_550 + iVar10;
        for (iVar22 = FUN_00474bd0(); iVar22 != 0; iVar22 = FUN_00472690(iVar22)) {
          iVar19 = *(int *)(*(int *)(iVar22 + 0x14) + 8);
          local_538 = (int *)0xbf800000;
          if ((iVar19 != 0) &&
             (bVar1 = *(byte *)(*(int *)(iVar22 + 0x14) + 0xc), bVar1 < *(byte *)(iVar19 + 0xd))) {
            fVar25 = (float10)FUN_00404e90(bVar1);
            local_538 = (int *)(float)fVar25;
          }
          local_53c = *(float *)(iVar20 + 0x94);
          fVar25 = (float10)FUN_0049f4a0(local_53c);
          if (-(float10)3.4028235e+38 == fVar25) {
            local_53c = *(float *)(iVar22 + 8);
            FUN_00470ce0();
            _sprintf((char *)&local_150,"\'%s\' time -INF/%.2f state %s/%s ease %.2f");
          }
          else {
            local_53c = *(float *)(iVar20 + 0x94);
            local_514 = *(float *)(iVar22 + 8);
            FUN_00470ce0();
            FUN_0049f4a0();
            _sprintf((char *)&local_150,"\'%s\' time %.2f/%.2f state %s/%s ease %.2f");
          }
          FUN_0057b8e0();
          local_550 = local_550 + iVar10;
        }
        local_540 = (int *)((int)local_540 + -1);
      } while (local_540 != (int *)0x0);
    }
    if ((local_544 == (int *)0x0) && (local_538 = DAT_00b333b4, DAT_00b333b4 != (int *)0x0)) {
      local_544 = (int *)0x0;
      piVar11 = DAT_00b333b4;
      do {
        if (local_544 == (int *)0x0) {
          iVar20 = (**(code **)(*piVar11 + 0x154))();
          piVar13 = local_538;
          if (iVar20 != 0) {
            uVar32 = 0;
            (**(code **)(*piVar11 + 0x154))(0);
            iVar20 = FUN_00405790(uVar32);
            piVar13 = local_538;
            if (iVar20 != 0) {
              uVar32 = 0;
              (**(code **)(*piVar11 + 0x154))(0);
              iVar20 = FUN_00405790(uVar32);
              piVar13 = local_538;
              if (*(int *)(iVar20 + 0xc) != 0) {
                uVar32 = 0;
                (**(code **)(*local_538 + 0x154))(0);
                iVar20 = FUN_00405790(uVar32);
                piVar11 = (int *)FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(iVar20 + 0xc));
                goto LAB_0040a6b3;
              }
            }
          }
        }
        else {
          piVar13 = piVar11;
          if (local_544 == (int *)0x1) {
            iVar20 = (**(code **)(*piVar11 + 0x154))();
            if (iVar20 == 0) {
              uVar32 = 0;
            }
            else {
              uVar32 = *(undefined4 *)(iVar20 + 0xc);
            }
            piVar11 = (int *)FUN_00560920(&DAT_00b3cac0,uVar32);
LAB_0040a6b3:
            piVar13 = local_538;
            local_548 = piVar11;
            if (piVar11 != (int *)0x0) {
              local_540 = (int *)0x0;
              if (*(short *)((int)piVar11 + 0x46) != 0) {
                do {
                  iVar20 = *(int *)(piVar11[0x10] + (int)local_540 * 4);
                  if ((iVar20 != 0) && (*(int *)(iVar20 + 0x44) != 0)) {
                    fVar25 = (float10)FUN_0049f4a0(_DAT_00b33a30);
                    if (-(float10)3.4028235e+38 == fVar25) {
                      _sprintf((char *)&local_150,"\'%s\' time -INF/%.2f state %s/%s");
                    }
                    else {
                      local_53c = *(float *)(iVar20 + 0x30);
                      local_514 = *(float *)(iVar20 + 0x2c);
                      FUN_0049f4a0();
                      _sprintf((char *)&local_150,"\'%s\' time %.2f/%.2f state %s/%s");
                      piVar11 = local_548;
                    }
                    FUN_0057b8e0();
                    local_550 = local_550 + iVar10;
                  }
                  local_540 = (int *)((int)local_540 + 1);
                } while (local_540 < (int *)(uint)*(ushort *)((int)piVar11 + 0x46));
              }
              FUN_0057b8e0();
              local_550 = local_550 + iVar10;
              piVar13 = local_538;
            }
          }
        }
        local_544 = (int *)((int)local_544 + 1);
        piVar11 = piVar13;
      } while ((int)local_544 < 2);
    }
    break;
  case 2:
    FUN_00435600(iVar10,&local_550,&local_54c,0);
    break;
  case 3:
    FUN_00435600(iVar10,&local_550,&local_54c,1);
    break;
  case 4:
    if (DAT_00b35b90 != 0) {
      FUN_004be5b0(iVar10,&local_550,&local_54c);
    }
    break;
  case 5:
    FUN_004fc360(iVar10,&local_550,&local_54c);
    FUN_004faaf0();
    iVar20 = FUN_00585c10(1);
    if ('\0' < *(char *)(iVar20 + 0x31)) goto LAB_0040c0ca;
    break;
  case 6:
    FUN_0061eb80(DAT_00b333b4,iVar10,&local_550,&local_54c);
    break;
  case 7:
    FUN_004aa1f0(DAT_00b333b4,iVar10,&local_550,&local_54c);
    break;
  case 8:
    FUN_0041cbb0(DAT_00b333b4,iVar10,&local_550,&local_54c);
    break;
  case 9:
    FUN_005f8890(DAT_00b333b4,iVar10,&local_550,&local_54c);
    break;
  case 10:
    FUN_00666bb0(iVar10,&local_550,&local_54c);
    break;
  case 0xb:
    FUN_006a9110(*(undefined4 *)(in_ECX + 0x24),iVar10,&local_550,&local_54c);
    break;
  case 0xd:
    FUN_004048b0(&local_514,&local_53c,&local_548,&local_540,&local_538,&local_544,&local_4fc,
                 &local_4f8,&local_500,&local_528,&local_504);
    iVar20 = FUN_007b7650();
    fVar30 = local_514;
    local_50c = (float)(DAT_00b3fab8 + DAT_00b42064);
    local_508 = (float)DAT_00b42054;
    _sprintf((char *)&local_150,"Geometry %d (%d)",local_514,local_53c);
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    if (fVar30 == 0.0) {
      local_53c = 0.0;
    }
    else {
      local_53c = (float)(int)local_548;
      if ((int)local_548 < 0) {
        local_53c = local_53c + 4.2949673e+09;
      }
      fVar27 = (float)(int)fVar30;
      if ((int)fVar30 < 0) {
        fVar27 = fVar27 + 4.2949673e+09;
      }
      local_53c = local_53c / fVar27;
    }
    _sprintf((char *)&local_150,"Tri %d  : %.2f",local_548,SUB84((double)local_53c,0),
             (int)((ulonglong)(double)local_53c >> 0x20));
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    if (fVar30 == 0.0) {
      local_53c = 0.0;
    }
    else {
      local_53c = (float)(int)local_540;
      if ((int)local_540 < 0) {
        local_53c = local_53c + 4.2949673e+09;
      }
      fVar27 = (float)(int)fVar30;
      if ((int)fVar30 < 0) {
        fVar27 = fVar27 + 4.2949673e+09;
      }
      local_53c = local_53c / fVar27;
    }
    _sprintf((char *)&local_150,"Pass %d  : %.2f",local_540,SUB84((double)local_53c,0),
             (int)((ulonglong)(double)local_53c >> 0x20));
    fVar30 = (float)local_550;
    uVar34 = 0xffffffff;
    uVar32 = 1;
    puVar26 = &local_150;
    fVar27 = (float)DAT_00b02e24;
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    _sprintf((char *)&local_150,"TriPasses %d",local_538,puVar26,fVar27,fVar30,uVar32,uVar34);
    FUN_0057b8e0();
    local_53c = (float)(int)local_544;
    local_550 = local_550 + iVar10;
    if ((int)local_544 < 0) {
      local_53c = local_53c + 4.2949673e+09;
    }
    local_53c = local_53c * 0.0009765625;
    _sprintf((char *)&local_150,"QueueMem %.2f kb",SUB84((double)local_53c,0),
             (int)((ulonglong)(double)local_53c >> 0x20));
    FUN_0057b8e0();
    fVar30 = (float)(int)local_50c;
    local_550 = local_550 + iVar10;
    if ((int)local_50c < 0) {
      fVar30 = fVar30 + 4.2949673e+09;
    }
    local_50c = fVar30 * 9.536743e-07;
    fVar30 = (float)(int)local_508;
    if ((int)local_508 < 0) {
      fVar30 = fVar30 + 4.2949673e+09;
    }
    local_508 = fVar30 * 9.536743e-07;
    _sprintf((char *)&local_150,"TextureMem S %.2f + R %.2f = T %.2f Mb",(double)local_508,
             SUB84((double)local_50c,0),(int)((ulonglong)(double)local_50c >> 0x20),
             SUB84((double)(local_508 + local_50c),0),
             (int)((ulonglong)(double)(local_508 + local_50c) >> 0x20));
    fVar30 = (float)local_550;
    uVar34 = 0xffffffff;
    uVar32 = 1;
    puVar26 = &local_150;
    fVar27 = (float)DAT_00b02e24;
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    _sprintf((char *)&local_150,"Occlusion Geom: %d , %d tri , %d wait loops",local_4fc,local_4f8,
             local_500,puVar26,fVar27,fVar30,uVar32,uVar34);
    fVar30 = (float)local_550;
    uVar34 = 0xffffffff;
    uVar32 = 1;
    puVar26 = &local_150;
    fVar27 = (float)DAT_00b02e24;
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    _sprintf((char *)&local_150,"Sun Occlusion Wait Frames: %d",local_504,puVar26,fVar27,fVar30,
             uVar32,uVar34);
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    if (iVar20 != 0) {
      _sprintf((char *)&local_150,"Sun Occlusion Pixels: %d",*(undefined4 *)(iVar20 + 0xbc));
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
    }
    _sprintf((char *)&local_150,"Bound Volume Occlusion Wait Loops: %d",(char *)local_528);
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    if ((((iVar20 != 0) && (DAT_00b333b4 != (int *)0x0)) &&
        (cVar4 = (**(code **)(*DAT_00b333b4 + 400))(), cVar4 != '\0')) &&
       (DAT_00b333b4 != DAT_00b333c4)) {
      uVar32 = FUN_007aa4a0(DAT_00b333b4[3]);
      _sprintf((char *)&local_150,"Bound Volume Occlusion Pixels: %d",uVar32);
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
    }
    iVar20 = FUN_007b4280(0);
    uVar2 = *(ushort *)(iVar20 + 0xf0);
    FUN_007b4280(0);
    uVar9 = FUN_007c6740();
    _sprintf((char *)&local_150,"Active Lights: %d / %d",uVar9 & 0xffff,(uint)uVar2);
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    _sprintf((char *)&local_150,"Grass : %i g, %i i");
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    _sprintf((char *)&local_150,"DistantLOD : %i g, %i i");
    goto LAB_0040c013;
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
    local_528 = (double)CONCAT44(local_528._4_4_,DAT_00b02e0c + -0xe);
    _sprintf((char *)&local_150,"SOURCE TEXTURES: PAGE %d",DAT_00b02e0c + -0xd);
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    if ((DAT_00b33408 == 0) && (iVar20 = FUN_00585c10(1), *(char *)(iVar20 + 0x31) < '\x01')) {
      _memset(aiStack_474 + 1,0,800);
      for (iVar20 = DAT_00b3f700; iVar20 != 0; iVar20 = *(int *)(iVar20 + 0x2c)) {
        cVar4 = FUN_00405650(&DAT_00b3f95c,iVar20);
        if (((cVar4 != '\0') && (iVar22 = *(int *)(iVar20 + 0x24), iVar22 != 0)) &&
           ((DAT_00b02e14 != '\0' || (cVar4 = FUN_004053e0(iVar20), cVar4 == '\0')))) {
          iVar19 = -1;
          iVar18 = 0;
          do {
            if (iVar19 != -1) goto LAB_0040b070;
            if ((aiStack_474[iVar18 + 1] == 0) ||
               ((iVar3 = *(int *)(aiStack_474[iVar18 + 1] + 0x24), iVar3 != 0 &&
                (*(uint *)(iVar3 + 0x60) < *(uint *)(iVar22 + 0x60))))) {
              iVar19 = iVar18;
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < 200);
          if (iVar19 != -1) {
LAB_0040b070:
            iVar22 = 199;
            if (iVar19 < 199) {
              do {
                aiStack_474[iVar22 + 1] = aiStack_474[iVar22];
                iVar22 = iVar22 + -1;
              } while (iVar19 < iVar22);
            }
            aiStack_474[iVar19 + 1] = iVar20;
          }
        }
      }
      local_540 = (int *)((int)(char *)local_528 * 0x14);
      piVar11 = local_540 + 5;
      local_504 = piVar11;
      if ((int)local_540 < (int)piVar11) {
        do {
          piVar13 = (int *)aiStack_474[(int)local_540 + 1];
          if (piVar13 != (int *)0x0) {
            pcVar28 = (char *)piVar13[0xd];
            if (pcVar28 != (char *)0x0) {
              local_528 = (double)CONCAT44(local_528._4_4_,pcVar28 + 1);
              do {
                cVar4 = *pcVar28;
                pcVar28 = pcVar28 + 1;
              } while (cVar4 != '\0');
            }
            uVar32 = (**(code **)(*piVar13 + 0x50))(*(uint *)(piVar13[9] + 0x60) >> 10);
            (**(code **)(*piVar13 + 0x4c))(uVar32);
            _sprintf((char *)&local_150,"%d: %s, %dx%d, %dkb");
            FUN_0057b8e0();
            local_550 = local_550 + iVar10;
            piVar11 = local_504;
          }
          local_540 = (int *)((int)local_540 + 1);
        } while ((int)local_540 < (int)piVar11);
      }
    }
    break;
  case 0x18:
    if (DAT_00b3c21c == 0) {
      _sprintf((char *)&local_150,"PROFILER NOT ENABLED");
      goto LAB_0040c013;
    }
    _sprintf((char *)&local_150,"PROFILER(AVE/%d FRAMES)",0x3c);
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    if ((DAT_00b33408 == 0) && (iVar22 = FUN_00585c10(1), *(char *)(iVar22 + 0x31) < '\x01')) {
      FUN_006b9520();
      if (*(int *)(iVar20 + 4) != 0) {
        FUN_006b9750(&local_550,iVar10,*(undefined4 *)(*(int *)(iVar20 + 4) + 0x24),&DAT_00a2f7ec);
      }
    }
    break;
  case 0x19:
    if (DAT_00b3c21c == 0) {
      _sprintf((char *)&local_150,"PROFILER(MAX) NOT ENABLED");
      goto LAB_0040c013;
    }
    _sprintf((char *)&local_150,"PROFILER(MAX/%d FRAMES)",300);
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    if ((DAT_00b33408 == 0) && (iVar20 = FUN_00585c10(1), *(char *)(iVar20 + 0x31) < '\x01')) {
      uVar32 = FUN_006b9510();
      iVar20 = FUN_00401f00(0x28);
      local_528 = (double)CONCAT44(local_528._4_4_,iVar20);
      local_44 = 1;
      if (iVar20 == 0) {
        uVar34 = 0;
      }
      else {
        uVar34 = FUN_006b9bd0(&DAT_00a30374,0);
      }
      FUN_00405070(uVar34);
      piVar11 = local_548;
      local_44 = 2;
      FUN_006b9d10(uVar32);
      FUN_006b9930();
      FUN_006b9e10();
      iVar20 = piVar11[9];
      if (iVar20 == 0) {
        iVar20 = 1;
      }
      FUN_006b9750(&local_550,iVar10,iVar20,&DAT_00a2f7ec);
      local_44 = 0xffffffff;
      FUN_007016a0();
    }
    break;
  case 0x1a:
    _sprintf((char *)&local_150,"HEAP STATS");
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    if ((DAT_00b33408 == 0) && (iVar20 = FUN_00585c10(1), *(char *)(iVar20 + 0x31) < '\x01')) {
      FUN_00401ff0(&local_4c8,1);
      local_4c8 = local_4c8 >> 10;
      if (local_4c8 == 0) {
        local_4c8 = 1;
      }
      _sprintf((char *)&local_150,"Mem heap size: %d kb",local_4c8);
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      iVar22 = (int)(local_4c4 + (local_4c4 >> 0x1f & 0x3ffU)) >> 10;
      iVar20 = iVar22;
      if (iVar22 == 0) {
        iVar20 = 1;
      }
      _sprintf((char *)&local_150,"Mem used for blocks: %d kb, %d%%",iVar20,
               (uint)(iVar22 * 100) / local_4c8);
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      _sprintf((char *)&local_150,"High mem allocated: %d kb, %d%%");
      fVar30 = (float)local_550;
      uVar34 = 0xffffffff;
      uVar32 = 1;
      puVar26 = &local_150;
      fVar27 = (float)DAT_00b02e24;
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      _sprintf((char *)&local_150,"Used blocks: %d",local_4bc,puVar26,fVar27,fVar30,uVar32,uVar34);
      fVar30 = (float)local_550;
      uVar34 = 0xffffffff;
      uVar32 = 1;
      puVar26 = &local_150;
      fVar27 = (float)DAT_00b02e24;
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      _sprintf((char *)&local_150,"Free blocks: %d",local_4b8,puVar26,fVar27,fVar30,uVar32,uVar34);
      fVar30 = (float)local_550;
      uVar34 = 0xffffffff;
      uVar32 = 1;
      fVar27 = (float)DAT_00b02e24;
      puVar26 = &local_150;
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      _sprintf((char *)&local_150,"Max free blocks: %d",local_4b4,puVar26,fVar27,fVar30,uVar32,
               uVar34);
      fVar30 = (float)local_550;
      uVar34 = 0xffffffff;
      uVar32 = 1;
      puVar26 = &local_150;
      fVar27 = (float)DAT_00b02e24;
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      _sprintf((char *)&local_150,"Blocks over heap: %d",local_4b0,puVar26,fVar27,fVar30,uVar32,
               uVar34);
      fVar30 = (float)local_550;
      uVar34 = 0xffffffff;
      uVar32 = 1;
      puVar26 = &local_150;
      fVar27 = (float)DAT_00b02e24;
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      _sprintf((char *)&local_150,"Mem over heap: %d kb",
               (int)(local_4ac + (local_4ac >> 0x1f & 0x3ffU)) >> 10,puVar26,fVar27,fVar30,uVar32,
               uVar34);
      fVar30 = (float)local_550;
      uVar34 = 0xffffffff;
      uVar32 = 1;
      puVar26 = &local_150;
      fVar27 = (float)DAT_00b02e24;
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      _sprintf((char *)&local_150,"High mem over heap: %d kb",
               (int)(local_4a8 + (local_4a8 >> 0x1f & 0x3ffU)) >> 10,puVar26,fVar27,fVar30,uVar32,
               uVar34);
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      _sprintf((char *)&local_150,"Free blocks mem: %d kb, %d%%");
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      _sprintf((char *)&local_150,"Used block mem: %d kb, %d%%");
      fVar30 = (float)local_550;
      uVar34 = 0xffffffff;
      uVar32 = 1;
      puVar26 = &local_150;
      fVar27 = (float)DAT_00b02e24;
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      _sprintf((char *)&local_150,"Largest free block size: %d kb",
               (int)(local_49c + (local_49c >> 0x1f & 0x3ffU)) >> 10,puVar26,fVar27,fVar30,uVar32,
               uVar34);
      fVar30 = (float)local_550;
      uVar34 = 0xffffffff;
      uVar32 = 1;
      puVar26 = &local_150;
      fVar27 = (float)DAT_00b02e24;
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      _sprintf((char *)&local_150,"Largest used block size: %d kb",
               (int)(local_498 + (local_498 >> 0x1f & 0x3ffU)) >> 10,puVar26,fVar27,fVar30,uVar32,
               uVar34);
      fVar30 = (float)local_550;
      uVar34 = 0xffffffff;
      uVar32 = 1;
      puVar26 = &local_150;
      fVar27 = (float)DAT_00b02e24;
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      _sprintf((char *)&local_150,"Class overhead: %d kb",
               (int)(local_494 + (local_494 >> 0x1f & 0x3ffU)) >> 10,puVar26,fVar27,fVar30,uVar32,
               uVar34);
      fVar30 = (float)local_550;
      uVar34 = 0xffffffff;
      uVar32 = 1;
      puVar26 = &local_150;
      fVar27 = (float)DAT_00b02e24;
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      _sprintf((char *)&local_150,"Free list overhead: %d kb",
               (int)(local_490 + (local_490 >> 0x1f & 0x3ffU)) >> 10,puVar26,fVar27,fVar30,uVar32,
               uVar34);
      fVar30 = (float)local_550;
      uVar34 = 0xffffffff;
      uVar32 = 1;
      puVar26 = &local_150;
      fVar27 = (float)DAT_00b02e24;
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      _sprintf((char *)&local_150,"Mem debug overhead: %d kb",
               (int)(local_48c + (local_48c >> 0x1f & 0x3ffU)) >> 10,puVar26,fVar27,fVar30,uVar32,
               uVar34);
      fVar30 = (float)local_550;
      uVar34 = 0xffffffff;
      uVar32 = 1;
      puVar26 = &local_150;
      fVar27 = (float)DAT_00b02e24;
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      _sprintf((char *)&local_150,"Mem used (System): %d kb",
               (int)(local_488 + (local_488 >> 0x1f & 0x3ffU)) >> 10,puVar26,fVar27,fVar30,uVar32,
               uVar34);
      fVar30 = (float)local_550;
      uVar34 = 0xffffffff;
      uVar32 = 1;
      puVar26 = &local_150;
      fVar27 = (float)DAT_00b02e24;
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      _sprintf((char *)&local_150,"Mem total (System): %d kb",
               (int)(local_484 + (local_484 >> 0x1f & 0x3ffU)) >> 10,puVar26,fVar27,fVar30,uVar32,
               uVar34);
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      _sprintf((char *)&local_150,"High mem used (System): %d kb",
               (int)(local_480 + (local_480 >> 0x1f & 0x3ffU)) >> 10);
      fVar30 = (float)local_550;
      uVar34 = 0xffffffff;
      uVar32 = 1;
      puVar26 = &local_150;
      fVar27 = (float)DAT_00b02e24;
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
      _sprintf((char *)&local_150,"Mem used by pools: %d kb",
               (int)(local_47c + (local_47c >> 0x1f & 0x3ffU)) >> 10,puVar26,fVar27,fVar30,uVar32,
               uVar34);
      goto LAB_0040c013;
    }
    break;
  case 0x1b:
    _sprintf((char *)&local_150,"MEMCONTEXT");
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    _sprintf((char *)&local_150,"NOT ENABLED");
    goto LAB_0040c013;
  case 0x1c:
    _sprintf((char *)&local_150,"SYSTEM MEMCONTEXT");
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    _sprintf((char *)&local_150,"NOT ENABLED");
    goto LAB_0040c013;
  case 0x1d:
    FUN_0045cc60(DAT_00b333b4,iVar10,&local_550,&local_54c);
    break;
  case 0x1e:
    if (DAT_00b3bf80 != 0) {
      FUN_00682a90(iVar10,&local_550,&local_54c);
    }
    break;
  case 0x1f:
    if ((DAT_00b333b4 == (int *)0x0) ||
       (cVar4 = (**(code **)(*DAT_00b333b4 + 400))(), cVar4 == '\0')) {
      __snprintf((char *)&local_150,200,"NO PATHING DATA FOR REF");
      local_548 = (int *)(0x500 - DAT_00b02e24);
    }
    else {
      piVar11 = (int *)FUN_009832e6();
      pdVar12 = (double *)(**(code **)(*piVar11 + 0x174))();
      local_528 = *pdVar12;
      fStack_520 = *(float *)(pdVar12 + 1);
      local_548 = (int *)(0x500 - DAT_00b02e24);
      FUN_004da2a0((float)(int)local_548,(float)local_54c,3,0xffffffff);
      FUN_0057b8e0();
      local_54c = local_54c + iVar10;
      piVar13 = (int *)FUN_006ecc80();
      local_548 = (int *)FUN_004d6670();
      if ((piVar13 == (int *)0x0) || (cVar4 = FUN_004c97f0(), cVar4 == '\0')) {
        if (local_548 == (int *)0x0) {
          __snprintf((char *)&local_150,200,"Actor Loc: UNKNOWN");
        }
        else {
          fVar30 = ROUND(local_528._4_4_);
          local_540 = (int *)(int)ROUND((float)(char *)local_528);
          iVar20 = *local_548;
          local_548 = local_540;
          local_544 = (int *)(int)fVar30;
          uVar32 = (**(code **)(iVar20 + 0xd4))();
          __snprintf((char *)&local_150,200,"Actor Loc: World \'%s\' (%i, %i)",uVar32,
                     (int)local_548 >> 0xc,(int)fVar30 >> 0xc);
        }
      }
      else {
        uVar32 = (**(code **)(*piVar13 + 0xd4))();
        __snprintf((char *)&local_150,200,"Actor Loc: Interior \'%s\'",uVar32);
      }
      local_548 = (int *)(0x500 - DAT_00b02e24);
      FUN_0057b8e0();
      local_54c = local_54c + iVar10;
      fVar25 = (float10)(**(code **)(*piVar11 + 0x1e0))();
      __snprintf((char *)&local_150,200,"Actor Heading: %0.2f",
                 SUB84((double)(fVar25 * (float10)57.2957763671875),0),
                 (int)((ulonglong)(double)(fVar25 * (float10)57.2957763671875) >> 0x20));
      local_548 = (int *)(0x500 - DAT_00b02e24);
      FUN_0057b8e0();
      local_54c = local_54c + iVar10;
      __snprintf((char *)&local_150,200,"Actor Pos: ( %.0f, %.0f, %.0f )",
                 (double)(float)(char *)local_528,SUB84((double)local_528._4_4_,0),
                 (int)((ulonglong)(double)local_528._4_4_ >> 0x20),SUB84((double)fStack_520,0),
                 (int)((ulonglong)(double)fStack_520 >> 0x20));
      local_548 = (int *)(0x500 - DAT_00b02e24);
      FUN_0057b8e0();
      local_54c = local_54c + iVar10 * 2;
      if ((int *)piVar11[0x16] == (int *)0x0) {
        __snprintf((char *)&local_150,200,"NO BASE PROCESS");
        local_548 = (int *)(0x500 - DAT_00b02e24);
      }
      else {
        piVar11 = (int *)(**(code **)(*(int *)piVar11[0x16] + 0x40c))();
        if (piVar11 == (int *)0x0) {
          __snprintf((char *)&local_150,200,"NO PATHING SYSTEM");
          local_548 = (int *)(0x500 - DAT_00b02e24);
        }
        else {
          __snprintf((char *)&local_150,200,"------------------------");
          local_548 = (int *)(0x500 - DAT_00b02e24);
          FUN_0057b8e0();
          local_54c = local_54c + iVar10;
          cVar4 = (**(code **)(*piVar11 + 0x2c))();
          if (cVar4 == '\0') {
            __snprintf((char *)&local_150,200,"Overall Pathing Status: Active");
          }
          else {
            __snprintf((char *)&local_150,200,"Overall Pathing Status: FAILED");
          }
          local_548 = (int *)(0x500 - DAT_00b02e24);
          FUN_0057b8e0();
          local_54c = local_54c + iVar10;
          cVar4 = FUN_006899e0();
          if (cVar4 == '\0') {
            __snprintf((char *)&local_150,200,"------------------------");
            local_548 = (int *)(0x500 - DAT_00b02e24);
            FUN_0057b8e0();
            local_54c = local_54c + iVar10;
            local_540 = (int *)FUN_0068a1f0();
            if (local_540 == (int *)0x0) {
              local_540 = (int *)FUN_004d8af0();
            }
            uVar34 = 0;
            ppuVar31 = &PTR_PTR_00b03038;
            ppuVar29 = &PTR_PTR_00b02f9c;
            uVar32 = 0;
            piVar13 = local_540;
            piVar14 = (int *)FUN_009832e6();
            piVar13 = (int *)FUN_009832e6(local_540,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0,piVar13,
                                          uVar32,ppuVar29,ppuVar31,uVar34);
            if (piVar14 == (int *)0x0) {
              if (piVar13 == (int *)0x0) {
                __snprintf((char *)&local_150,200,"Final Target Loc: UNKNOWN");
              }
              else {
                uVar32 = (**(code **)(*piVar13 + 0xd4))();
                __snprintf((char *)&local_150,200,"Final Target Loc: World \'%s\'",uVar32);
              }
            }
            else {
              uVar32 = (**(code **)(*piVar14 + 0xd4))();
              __snprintf((char *)&local_150,200,"Final Target Loc: Interior \'%s\'",uVar32);
            }
            local_548 = (int *)(0x500 - DAT_00b02e24);
            FUN_0057b8e0();
            local_54c = local_54c + iVar10;
            pfVar15 = (float *)FUN_0068a250();
            fStack_534 = *pfVar15;
            fStack_530 = pfVar15[1];
            fStack_52c = pfVar15[2];
            __snprintf((char *)&local_150,200,"Final Target Pos: ( %.0f, %.0f, %.0f )",
                       (double)fStack_534,SUB84((double)fStack_530,0),
                       (int)((ulonglong)(double)fStack_530 >> 0x20),SUB84((double)fStack_52c,0),
                       (int)((ulonglong)(double)fStack_52c >> 0x20));
            local_548 = (int *)(0x500 - DAT_00b02e24);
            FUN_0057b8e0();
            local_54c = local_54c + iVar10;
            pfVar15 = (float *)FUN_0068a160();
            fStack_534 = *pfVar15;
            fStack_530 = pfVar15[1];
            fStack_52c = pfVar15[2];
            __snprintf((char *)&local_150,200,"Current Low Target Pos: ( %.0f, %.0f, %.0f )",
                       (double)fStack_534,SUB84((double)fStack_530,0),
                       (int)((ulonglong)(double)fStack_530 >> 0x20),SUB84((double)fStack_52c,0),
                       (int)((ulonglong)(double)fStack_52c >> 0x20));
            fVar30 = (float)local_54c;
            uVar34 = 0xffffffff;
            uVar32 = 3;
            local_548 = (int *)(0x500 - DAT_00b02e24);
            fVar27 = (float)(int)local_548;
            puVar26 = &local_150;
            FUN_0057b8e0();
            local_54c = local_54c + iVar10;
            piVar13 = (int *)FUN_009832e6(piVar11,0,&PTR_PTR_00b02fe4,&PTR_PTR_00b02ffc,0,puVar26,
                                          fVar27,fVar30,uVar32,uVar34);
            if (piVar13 == (int *)0x0) {
              __snprintf((char *)&local_150,200,"LOW PATH SYSTEM ONLY");
              local_548 = (int *)(0x500 - DAT_00b02e24);
            }
            else {
              __snprintf((char *)&local_150,200,"------------------------");
              local_548 = (int *)(0x500 - DAT_00b02e24);
              FUN_0057b8e0();
              local_54c = local_54c + iVar10;
              cVar4 = (**(code **)(*piVar13 + 0xc))();
              if (cVar4 == '\0') {
                pfVar15 = (float *)FUN_0068b3f0();
                fStack_534 = *pfVar15;
                fStack_530 = pfVar15[1];
                fStack_52c = pfVar15[2];
                __snprintf((char *)&local_150,200,"Current High Target Pos: ( %.0f, %.0f, %.0f )",
                           (double)fStack_534,SUB84((double)fStack_530,0),
                           (int)((ulonglong)(double)fStack_530 >> 0x20),SUB84((double)fStack_52c,0),
                           (int)((ulonglong)(double)fStack_52c >> 0x20));
                fVar30 = (float)local_54c;
                uVar34 = 0xffffffff;
                uVar32 = 3;
                local_548 = (int *)(0x500 - DAT_00b02e24);
                fVar27 = (float)(int)local_548;
                puVar26 = &local_150;
                FUN_0057b8e0();
                local_54c = local_54c + iVar10;
                piVar11 = (int *)FUN_009832e6(piVar11,0,&PTR_PTR_00b02fe4,&PTR_PTR_00b02fcc,0,
                                              puVar26,fVar27,fVar30,uVar32,uVar34);
                if (piVar11 == (int *)0x0) {
                  __snprintf((char *)&local_150,200,"MIDDLE HIGH PATH SYSTEM ONLY");
                  local_548 = (int *)(0x500 - DAT_00b02e24);
                }
                else {
                  __snprintf((char *)&local_150,200,"------------------------");
                  local_548 = (int *)(0x500 - DAT_00b02e24);
                  FUN_0057b8e0();
                  local_54c = local_54c + iVar10;
                  cVar4 = (**(code **)(*piVar11 + 0xc))();
                  if (cVar4 != '\0') break;
                  fVar25 = (float10)FUN_004a9720();
                  local_548 = (int *)(float)fVar25;
                  pfVar15 = (float *)FUN_00403c00();
                  __snprintf((char *)&local_150,200,"Failure Time: %.2f / %.2f",
                             SUB84((double)(float)local_548,0),
                             (int)((ulonglong)(double)(float)local_548 >> 0x20),
                             SUB84((double)*pfVar15,0),(int)((ulonglong)(double)*pfVar15 >> 0x20));
                  local_548 = (int *)(0x500 - DAT_00b02e24);
                  FUN_0057b8e0();
                  local_54c = local_54c + iVar10;
                  iVar20 = FUN_00629420();
                  if (iVar20 < 3) {
                    iVar20 = FUN_00629420();
                    __snprintf((char *)&local_150,200,"Failure State: %s",
                               (&PTR_DAT_00b15808)[iVar20]);
                  }
                  else {
                    __snprintf((char *)&local_150,200,"Failure State: FAILED");
                  }
                  local_548 = (int *)(0x500 - DAT_00b02e24);
                  FUN_0057b8e0();
                  local_54c = local_54c + iVar10;
                  cVar4 = FUN_00683a60();
                  if (cVar4 == '\0') {
                    cVar4 = FUN_00684780();
                    if (cVar4 == '\0') {
                      __snprintf((char *)&local_150,200,"High Pathing Status: Pathing");
                      local_548 = (int *)(0x500 - DAT_00b02e24);
                    }
                    else {
                      __snprintf((char *)&local_150,200,"High Pathing Status: Avoiding");
                      local_548 = (int *)(0x500 - DAT_00b02e24);
                    }
                  }
                  else {
                    __snprintf((char *)&local_150,200,"High Pathing Status: Turning");
                    local_548 = (int *)(0x500 - DAT_00b02e24);
                  }
                  FUN_0057b8e0();
                  local_54c = local_54c + iVar10;
                  iVar20 = FUN_00780de0();
                  if (iVar20 == 0) {
                    __snprintf((char *)&local_150,200,"NO AVOIDANCE");
                    local_548 = (int *)(0x500 - DAT_00b02e24);
                  }
                  else {
                    __snprintf((char *)&local_150,200,"------------------------");
                    local_548 = (int *)(0x500 - DAT_00b02e24);
                    FUN_0057b8e0();
                    local_54c = local_54c + iVar10;
                    iVar20 = FUN_00680cb0();
                    __snprintf((char *)&local_150,200,"Avoidance Status: %s",
                               (&PTR_s_NO_AVOIDANCE_00b15728)[iVar20]);
                    local_548 = (int *)(0x500 - DAT_00b02e24);
                    FUN_0057b8e0();
                    local_54c = local_54c + iVar10;
                    fVar25 = (float10)FUN_00680cc0();
                    local_548 = (int *)(float)fVar25;
                    __snprintf((char *)&local_150,200,"Avoidance Wait Time: %.2f",
                               SUB84((double)(float)local_548,0),
                               (int)((ulonglong)(double)(float)local_548 >> 0x20));
                    local_548 = (int *)(0x500 - DAT_00b02e24);
                    FUN_0057b8e0();
                    local_54c = local_54c + iVar10;
                    fVar25 = (float10)FUN_004a9720();
                    local_548 = (int *)(float)fVar25;
                    __snprintf((char *)&local_150,200,"Avoidance Angling Time: %.2f",
                               SUB84((double)(float)local_548,0),
                               (int)((ulonglong)(double)(float)local_548 >> 0x20));
                    local_548 = (int *)(0x500 - DAT_00b02e24);
                    FUN_0057b8e0();
                    local_54c = local_54c + iVar10;
                    fVar25 = (float10)FUN_00680cf0();
                    local_548 = (int *)(float)fVar25;
                    __snprintf((char *)&local_150,200,"Avoidance Avoid Time: %.2f",
                               SUB84((double)(float)local_548,0),
                               (int)((ulonglong)(double)(float)local_548 >> 0x20));
                    local_548 = (int *)(0x500 - DAT_00b02e24);
                  }
                }
              }
              else {
                __snprintf((char *)&local_150,200,"PATHING SYSTEM HAS NO HIGH PATH");
                local_548 = (int *)(0x500 - DAT_00b02e24);
              }
            }
          }
          else {
            __snprintf((char *)&local_150,200,"PATHING SYSTEM HAS NO LOW PATH");
            local_548 = (int *)(0x500 - DAT_00b02e24);
          }
        }
      }
    }
    FUN_0057b8e0();
    local_54c = local_54c + iVar10;
    break;
  case 0x20:
    _sprintf((char *)&local_150,"MEM INFO");
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    _sprintf((char *)&local_150,"Game not compiled with MEM_DEBUG.");
    FUN_0057b8e0();
    local_550 = iVar10 * 10;
    iVar20 = FUN_0043fd20();
    iVar22 = 0;
    if (iVar20 != 0) {
      piVar11 = *(int **)(DAT_00b333a0 + 0x3c);
      do {
        if (*piVar11 != 0) {
          iVar22 = iVar22 + 1;
        }
        piVar11 = piVar11 + 1;
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
    _sprintf((char *)&local_150,"Exterior Cell Buffer");
    fVar30 = (float)local_550;
    uVar34 = 0xffffffff;
    uVar32 = 1;
    puVar26 = &local_150;
    fVar27 = (float)DAT_00b02e24;
    FUN_0057b8e0();
    _sprintf((char *)&local_150,"%i",iVar22,puVar26,fVar27,fVar30,uVar32,uVar34);
    local_528._0_4_ = (char *)(DAT_00b02e24 + 0x1c2);
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    iVar20 = FUN_0043fd30();
    iVar22 = 0;
    if (iVar20 != 0) {
      piVar11 = *(int **)(DAT_00b333a0 + 0x38);
      do {
        if (*piVar11 != 0) {
          iVar22 = iVar22 + 1;
        }
        piVar11 = piVar11 + 1;
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
    _sprintf((char *)&local_150,"Interior Cell Buffer");
    fVar30 = (float)local_550;
    uVar34 = 0xffffffff;
    uVar32 = 1;
    puVar26 = &local_150;
    fVar27 = (float)DAT_00b02e24;
    FUN_0057b8e0();
    _sprintf((char *)&local_150,"%i",iVar22,puVar26,fVar27,fVar30,uVar32,uVar34);
    local_528 = (double)CONCAT44(local_528._4_4_,DAT_00b02e24 + 0x1c2);
    FUN_0057b8e0();
    local_550 = local_550 + iVar10 * 2;
    local_540 = (int *)0x0;
    local_538 = (int *)0x0;
    local_544 = (int *)0x0;
    FUN_00673a50(0);
    for (piVar11 = (int *)FUN_007616d0(); piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
      piVar13 = (int *)*piVar11;
      if (piVar13 != (int *)0x0) {
        cVar4 = (**(code **)(*piVar13 + 400))();
        if (cVar4 == '\0') {
          local_544 = (int *)((int)local_544 + 1);
        }
        else {
          local_540 = (int *)((int)local_540 + 1);
          cVar4 = (**(code **)(*piVar13 + 0x334))(1);
          if (cVar4 != '\0') {
            local_538 = (int *)((int)local_538 + 1);
          }
        }
      }
    }
    _sprintf((char *)&local_150,"High Actors");
    fVar30 = (float)local_550;
    uVar34 = 0xffffffff;
    uVar32 = 1;
    puVar26 = &local_150;
    fVar27 = (float)DAT_00b02e24;
    FUN_0057b8e0();
    _sprintf((char *)&local_150,"%i",local_540,puVar26,fVar27,fVar30,uVar32,uVar34);
    local_528._0_4_ = (char *)(DAT_00b02e24 + 0x1c2);
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    FUN_00673a50(1);
    _sprintf((char *)&local_150,"Middle High Actors");
    FUN_0057b8e0();
    iVar20 = 0;
    for (piVar11 = (int *)FUN_007616d0(); piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
      if (*piVar11 != 0) {
        iVar20 = iVar20 + 1;
      }
    }
    _sprintf((char *)&local_150,"%i",iVar20);
    local_528._0_4_ = (char *)(DAT_00b02e24 + 0x1c2);
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    _sprintf((char *)&local_150,"Combat Actors");
    fVar30 = (float)local_550;
    uVar34 = 0xffffffff;
    uVar32 = 1;
    puVar26 = &local_150;
    fVar27 = (float)DAT_00b02e24;
    FUN_0057b8e0();
    _sprintf((char *)&local_150,"%i",local_538,puVar26,fVar27,fVar30,uVar32,uVar34);
    local_528._0_4_ = (char *)(DAT_00b02e24 + 0x1c2);
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
    _sprintf((char *)&local_150,"Non-Actor Mobile Objects");
    fVar30 = (float)local_550;
    uVar34 = 0xffffffff;
    uVar32 = 1;
    puVar26 = &local_150;
    fVar27 = (float)DAT_00b02e24;
    FUN_0057b8e0();
    _sprintf((char *)&local_150,"%i",local_544,puVar26,fVar27,fVar30,uVar32,uVar34);
    local_528 = (double)CONCAT44(local_528._4_4_,DAT_00b02e24 + 0x1c2);
LAB_0040c013:
    FUN_0057b8e0();
    local_550 = local_550 + iVar10;
  }
  iVar22 = local_54c;
  iVar20 = local_550;
  if (local_550 < DAT_00b333fc) {
    do {
      FUN_0057b8e0();
      local_550 = local_550 + iVar10;
    } while (local_550 < DAT_00b333fc);
  }
  DAT_00b333fc = iVar20;
  if (local_54c < DAT_00b333f8) {
    do {
      local_528 = (double)CONCAT44(local_528._4_4_,0x500 - DAT_00b02e24);
      FUN_0057b8e0();
      local_54c = local_54c + iVar10;
    } while (local_54c < DAT_00b333f8);
  }
  DAT_00b333f8 = iVar22;
LAB_0040c0ca:
  *unaff_FS_OFFSET = local_4c;
  return;
}



undefined4 FUN_0040c220(int param_1)

{
  int *piVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  if (*(ushort *)(in_ECX + 0xaa2) != 0) {
    piVar1 = *(int **)(in_ECX + 0xa9c);
    while (*piVar1 != param_1) {
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 1;
      if (*(ushort *)(in_ECX + 0xaa2) <= uVar2) {
        return 0;
      }
    }
    if (uVar2 != 0xffffffff) {
      FUN_00405020(uVar2);
      FUN_00405020(uVar2);
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_0040c2f0(int param_1)

{
  int *piVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  if (*(ushort *)(in_ECX + 0xac2) != 0) {
    piVar1 = *(int **)(in_ECX + 0xabc);
    while (*piVar1 != param_1) {
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 1;
      if (*(ushort *)(in_ECX + 0xac2) <= uVar2) {
        return 0;
      }
    }
    if (uVar2 != 0xffffffff) {
      FUN_00405020(uVar2);
      FUN_00405020(uVar2);
      return 1;
    }
  }
  return 0;
}



void FUN_0040c350(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  LONG LVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009aa130;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0042be70(uVar4);
  FUN_00404400();
  DAT_00b333a8 = 0;
  DAT_00b333ac = 0;
  DAT_00b333a4 = 0;
  iVar1 = *(int *)(in_ECX + 0x20);
  if (iVar1 != 0) {
    FUN_004043a0();
    FUN_00401f20(iVar1);
  }
  *(undefined4 *)(in_ECX + 0x20) = 0;
  iVar1 = DAT_00b3339c;
  if (DAT_00b3339c != 0) {
    FUN_00494f30();
    FUN_00401f20(iVar1);
  }
  puVar3 = DAT_00b333cc;
  if (DAT_00b333cc != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(DAT_00b333cc + 1);
    if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    DAT_00b333cc = (undefined4 *)0x0;
  }
  puVar3 = DAT_00b333d8;
  if (DAT_00b333d8 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(DAT_00b333d8 + 1);
    if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    DAT_00b333d8 = (undefined4 *)0x0;
  }
  puVar3 = DAT_00b333dc;
  if (DAT_00b333dc != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(DAT_00b333dc + 1);
    if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    DAT_00b333dc = (undefined4 *)0x0;
  }
  puVar3 = DAT_00b333e0;
  if (DAT_00b333e0 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(DAT_00b333e0 + 1);
    if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    DAT_00b333e0 = (undefined4 *)0x0;
  }
  puVar3 = DAT_00b333e4;
  if (DAT_00b333e4 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(DAT_00b333e4 + 1);
    if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    DAT_00b333e4 = (undefined4 *)0x0;
  }
  puVar3 = DAT_00b333e8;
  if (DAT_00b333e8 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(DAT_00b333e8 + 1);
    if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    DAT_00b333e8 = (undefined4 *)0x0;
  }
  puVar3 = DAT_00b333ec;
  if (DAT_00b333ec != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(DAT_00b333ec + 1);
    if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    DAT_00b333ec = (undefined4 *)0x0;
  }
  iVar1 = DAT_00b34d90;
  if ((DAT_00b34d90 != 0) && (*(char *)(DAT_00b34d90 + 4) == '\0')) {
    FUN_004946b0();
    FUN_00401f20(iVar1);
  }
  uVar4 = 0;
  do {
    iVar1 = *(int *)((int)&DAT_00b39548 + uVar4);
    if (iVar1 != 0) {
      FUN_004055e0();
      FUN_00401f20(iVar1);
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0xc);
  uVar4 = 0;
  do {
    iVar1 = *(int *)((int)&DAT_00b39578 + uVar4);
    if (iVar1 != 0) {
      uStack_4 = 0;
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_004524c0(*(int *)(iVar1 + 4));
      }
      pcVar2 = *(char **)(iVar1 + 4);
      uStack_4 = 0xffffffff;
      if ((pcVar2 != (char *)0x0) && (*pcVar2 == 'S')) {
        FUN_00401f20(pcVar2);
      }
      FUN_00401f20(iVar1);
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0x3b8);
  uVar4 = 0;
  do {
    iVar1 = *(int *)((int)&DAT_00b39554 + uVar4);
    if (iVar1 != 0) {
      uStack_4 = 1;
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_004524c0(*(int *)(iVar1 + 4));
      }
      pcVar2 = *(char **)(iVar1 + 4);
      uStack_4 = 0xffffffff;
      if ((pcVar2 != (char *)0x0) && (*pcVar2 == 'S')) {
        FUN_00401f20(pcVar2);
      }
      FUN_00401f20(iVar1);
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0x24);
  uVar4 = 0;
  do {
    iVar1 = *(int *)((int)&DAT_00b39930 + uVar4);
    if (iVar1 != 0) {
      uStack_4 = 2;
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_004524c0(*(int *)(iVar1 + 4));
      }
      pcVar2 = *(char **)(iVar1 + 4);
      uStack_4 = 0xffffffff;
      if ((pcVar2 != (char *)0x0) && (*pcVar2 == 'S')) {
        FUN_00401f20(pcVar2);
      }
      FUN_00401f20(iVar1);
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0x20);
  uVar4 = 0;
  do {
    iVar1 = *(int *)((int)&DAT_00b399d0 + uVar4);
    if (iVar1 != 0) {
      uStack_4 = 3;
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_004524c0(*(int *)(iVar1 + 4));
      }
      pcVar2 = *(char **)(iVar1 + 4);
      uStack_4 = 0xffffffff;
      if ((pcVar2 != (char *)0x0) && (*pcVar2 == 'S')) {
        FUN_00401f20(pcVar2);
      }
      FUN_00401f20(iVar1);
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0x74);
  uVar4 = 0;
  do {
    iVar1 = *(int *)((int)&DAT_00b39a44 + uVar4);
    if (iVar1 != 0) {
      uStack_4 = 4;
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_004524c0(*(int *)(iVar1 + 4));
      }
      pcVar2 = *(char **)(iVar1 + 4);
      uStack_4 = 0xffffffff;
      if ((pcVar2 != (char *)0x0) && (*pcVar2 == 'S')) {
        FUN_00401f20(pcVar2);
      }
      FUN_00401f20(iVar1);
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0x18);
  uVar4 = 0;
  do {
    iVar1 = *(int *)((int)&DAT_00b39a60 + uVar4);
    if (iVar1 != 0) {
      uStack_4 = 5;
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_004524c0(*(int *)(iVar1 + 4));
      }
      pcVar2 = *(char **)(iVar1 + 4);
      uStack_4 = 0xffffffff;
      if ((pcVar2 != (char *)0x0) && (*pcVar2 == 'S')) {
        FUN_00401f20(pcVar2);
      }
      FUN_00401f20(iVar1);
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0x50);
  uVar4 = 0;
  do {
    iVar1 = *(int *)((int)&DAT_00b39950 + uVar4);
    if (iVar1 != 0) {
      uStack_4 = 6;
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_004524c0(*(int *)(iVar1 + 4));
      }
      pcVar2 = *(char **)(iVar1 + 4);
      uStack_4 = 0xffffffff;
      if ((pcVar2 != (char *)0x0) && (*pcVar2 == 'S')) {
        FUN_00401f20(pcVar2);
      }
      FUN_00401f20(iVar1);
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0x7c);
  uVar4 = 0;
  do {
    iVar1 = *(int *)((int)&DAT_00b39530 + uVar4);
    if (iVar1 != 0) {
      uStack_4 = 7;
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_004524c0(*(int *)(iVar1 + 4));
      }
      pcVar2 = *(char **)(iVar1 + 4);
      uStack_4 = 0xffffffff;
      if ((pcVar2 != (char *)0x0) && (*pcVar2 == 'S')) {
        FUN_00401f20(pcVar2);
      }
      FUN_00401f20(iVar1);
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0x18);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0040c830(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  int *piVar18;
  LONG LVar19;
  int *piVar20;
  byte bVar21;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar22;
  int local_38;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009aa163;
  local_c = *unaff_FS_OFFSET;
  uVar11 = DAT_00b30aac ^ (uint)&stack0xffffffb0;
  *unaff_FS_OFFSET = (int)&local_c;
  DAT_00b33395 = 1;
  if (*(int *)(DAT_00b333a0 + 0x34) == 0) {
    FUN_00482150(DAT_00b06a2c >> 1,DAT_00b06a2c >> 1);
    uVar22 = *(undefined4 *)(DAT_00b333cc + 0xdc);
LAB_0040c8b8:
    FUN_0049a100(uVar22,0,0);
    iVar12 = FUN_007b4280(0);
    uVar1 = *(undefined1 *)(iVar12 + 300);
    *(undefined1 *)(iVar12 + 300) = 1;
    FUN_0049e880(*(undefined4 *)(DAT_00b333cc + 0xdc),iVar12);
    *(undefined1 *)(iVar12 + 300) = uVar1;
  }
  else if ((*(byte *)(*(int *)(DAT_00b333a0 + 0x34) + 0x24) >> 1 & 1) != 0) {
    uVar22 = *(undefined4 *)(DAT_00b333cc + 0xdc);
    goto LAB_0040c8b8;
  }
  if (DAT_00b3f940 != 0) {
    if (*(char *)(DAT_00b3f940 + 0x1b0) != '\0') {
      FUN_00701ad0(uVar11);
    }
    FUN_00404d60(3);
  }
  FUN_004073d0();
  piVar20 = DAT_00b3f928;
  iVar12 = DAT_00b333cc;
  uVar22 = *(undefined4 *)(DAT_00b333cc + 0xe4);
  iVar13 = FUN_00660110(1);
  bVar21 = *(byte *)(iVar13 + 0x18) & 1;
  if (bVar21 == 0) {
    *(ushort *)(iVar13 + 0x18) = *(ushort *)(iVar13 + 0x18) | 1;
  }
  iVar16 = DAT_00b333d8;
  if (*(short *)(DAT_00b333cc + 0xb6) == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = **(int **)(DAT_00b333cc + 0xb0);
  }
  *(undefined4 *)(DAT_00b333d8 + 0x54) = *(undefined4 *)(iVar14 + 0x54);
  *(undefined4 *)(iVar16 + 0x58) = *(undefined4 *)(iVar14 + 0x58);
  *(undefined4 *)(iVar16 + 0x5c) = *(undefined4 *)(iVar14 + 0x5c);
  FUN_00707370(0,0);
  iVar16 = DAT_00b333dc;
  if (*(short *)(DAT_00b333cc + 0xb6) == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = **(int **)(DAT_00b333cc + 0xb0);
  }
  *(undefined4 *)(DAT_00b333dc + 0x54) = *(undefined4 *)(iVar14 + 0x54);
  *(undefined4 *)(iVar16 + 0x58) = *(undefined4 *)(iVar14 + 0x58);
  *(undefined4 *)(iVar16 + 0x5c) = *(undefined4 *)(iVar14 + 0x5c);
  FUN_00707370(0,0);
  bVar4 = 1 < DAT_00b34fc0;
  local_38 = 0;
  if (DAT_00b42f3e == '\0') {
    if (param_1 == 0) {
      FUN_007d71c0(7,0);
    }
    else {
      if (bVar4) goto LAB_0040ca36;
      uVar15 = FUN_007d6fe0();
      FUN_007d7280(7,uVar15);
    }
  }
  else {
    local_38 = FUN_007c23c0(piVar20,4);
    if (bVar4) {
LAB_0040ca36:
      uVar15 = (**(code **)(*piVar20 + 0x7c))();
      FUN_007d7280(7,uVar15);
    }
    else {
      if (*(int **)(local_38 + 0x20) == (int *)0x0) {
        iVar16 = 0;
      }
      else {
        iVar16 = (**(code **)(**(int **)(local_38 + 0x20) + 0x4c))();
      }
      iVar14 = FUN_00701640();
      if (iVar14 == iVar16) {
        if (*(int **)(local_38 + 0x20) == (int *)0x0) {
          iVar16 = 0;
        }
        else {
          iVar16 = (**(code **)(**(int **)(local_38 + 0x20) + 0x50))();
        }
        iVar14 = FUN_00701670();
        if (iVar14 != iVar16) goto LAB_0040ca8f;
      }
      else {
LAB_0040ca8f:
        if (*(int **)(local_38 + 0x20) == (int *)0x0) {
          iVar16 = 0;
        }
        else {
          iVar16 = (**(code **)(**(int **)(local_38 + 0x20) + 0x4c))();
        }
        iVar14 = FUN_00701640();
        fVar5 = (float)iVar14;
        if (iVar14 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar7 = (float)iVar16;
        if (iVar16 < 0) {
          fVar7 = fVar7 + 4.2949673e+09;
        }
        fVar6 = 1.0;
        if ((fVar5 * 1.05) / fVar7 < 1.0) {
          if (*(int **)(local_38 + 0x20) == (int *)0x0) {
            iVar16 = 0;
          }
          else {
            iVar16 = (**(code **)(**(int **)(local_38 + 0x20) + 0x4c))();
          }
          iVar14 = FUN_00701640();
          fVar5 = (float)iVar14;
          if (iVar14 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar6 = (float)iVar16;
          if (iVar16 < 0) {
            fVar6 = fVar6 + 4.2949673e+09;
          }
          fVar6 = (fVar5 * 1.05) / fVar6;
        }
        if (*(int **)(local_38 + 0x20) == (int *)0x0) {
          iVar16 = 0;
        }
        else {
          iVar16 = (**(code **)(**(int **)(local_38 + 0x20) + 0x50))();
        }
        iVar14 = FUN_00701670();
        fVar5 = (float)iVar14;
        if (iVar14 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar7 = (float)iVar16;
        if (iVar16 < 0) {
          fVar7 = fVar7 + 4.2949673e+09;
        }
        fVar8 = 1.0;
        if ((fVar5 * 1.05) / fVar7 < 1.0) {
          if (*(int **)(local_38 + 0x20) == (int *)0x0) {
            iVar16 = 0;
          }
          else {
            iVar16 = (**(code **)(**(int **)(local_38 + 0x20) + 0x50))();
          }
          iVar14 = FUN_00701670();
          fVar5 = (float)iVar14;
          if (iVar14 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar8 = (float)iVar16;
          if (iVar16 < 0) {
            fVar8 = fVar8 + 4.2949673e+09;
          }
          fVar8 = (fVar5 * 1.05) / fVar8;
        }
        iVar16 = *(int *)(DAT_00b333cc + 0xdc);
        *(undefined4 *)(iVar16 + 0x110) = 0;
        *(float *)(iVar16 + 0x114) = fVar6;
        *(float *)(iVar16 + 0x118) = fVar8;
        *(undefined4 *)(iVar16 + 0x11c) = 0;
      }
      uVar15 = FUN_007d6fe0();
      FUN_007d7280(7,uVar15);
    }
  }
  if (DAT_00b42cd8 != '\0') {
    DAT_00b42cd8 = '\0';
    DAT_00b42cd9 = 1;
  }
  DAT_00b42cde = DAT_00b02d38;
  DAT_00b42cdf = 1;
  DAT_00b42ce0 = DAT_00b02d30;
  iVar16 = *(int *)(DAT_00b333a0 + 0x5c);
  iVar14 = 0;
  if (((iVar16 != 0) && (*(int *)(iVar16 + 0x28) != 0)) &&
     ((*(int *)(iVar16 + 0xdc) == 3 || (*(int *)(iVar16 + 0xdc) == 2)))) {
    iVar14 = *(int *)(iVar16 + 0x28);
    FUN_00544ad0();
  }
  FUN_0070c0b0(*(undefined4 *)(iVar12 + 0xdc),iVar12,uVar22,0);
  if (iVar14 != 0) {
    FUN_00546120(1);
  }
  DAT_00b42cde = 0;
  DAT_00b42cdf = 0;
  if (((DAT_00b42f3e == '\0') || (DAT_00b42e84 == '\0')) || (DAT_00b42f48 < 2)) {
    bVar9 = false;
LAB_0040cd78:
    if (bVar21 != 0) goto LAB_0040cecc;
  }
  else {
    uVar15 = *(undefined4 *)(DAT_00b333cc + 0xdc);
    bVar9 = true;
    uVar17 = FUN_007d6fe0();
    FUN_007b7650(uVar15,uVar17);
    cVar10 = FUN_007aaa30(uVar15,uVar17);
    if (cVar10 == '\0') goto LAB_0040cd78;
    if (bVar21 != 0) goto LAB_0040cecc;
    FUN_007b7650();
    if (DAT_00b42cdb == '\0') {
      if (bVar4) {
        uVar15 = (**(code **)(*piVar20 + 0x7c))();
        FUN_007d7280(0,uVar15);
      }
      else {
        uVar15 = FUN_007d6fe0();
        FUN_007d7280(0,uVar15);
      }
    }
  }
  FUN_007b7650();
  if (DAT_00b42cdb == '\0') {
    uVar15 = *(undefined4 *)(DAT_00b333cc + 0xdc);
    *(ushort *)(iVar13 + 0x18) = *(ushort *)(iVar13 + 0x18) & 0xfffe;
    FUN_007b4280(0);
    FUN_007c7050(iVar13,0);
    piVar18 = (int *)FUN_007b7650();
    puVar2 = (undefined4 *)piVar20[2];
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
    uStack_4 = 0;
    if (((piVar20[0x80] == 1) || (piVar20[0x81] == 1)) && ((char)piVar20[0x83] == '\x01')) {
      (**(code **)(*piVar20 + 0x13c))(0,4);
    }
    FUN_00405710(piVar18);
    (**(code **)(*piVar18 + 0x4c))(uVar15);
    *(undefined1 *)((int)piVar18 + 0x21e2) = 1;
    FUN_0070c0b0(*(undefined4 *)(local_38 + 0xdc),uVar22,iVar12,0);
    if (iVar14 != 0) {
      FUN_00546120(2);
    }
    pcVar3 = *(code **)(*piVar18 + 0x50);
    *(undefined1 *)((int)piVar18 + 0x21e1) = 1;
    (*pcVar3)();
    *(undefined1 *)((int)piVar18 + 0x21e2) = 0;
    FUN_00405710(puVar2);
    if (bVar9) {
      uVar22 = *(undefined4 *)(DAT_00b333cc + 0xdc);
      uVar15 = FUN_007d6fe0();
      FUN_007b7650(uVar22,uVar15);
      FUN_007aaa30(uVar22,uVar15);
    }
    uStack_4 = 0xffffffff;
    if (puVar2 != (undefined4 *)0x0) {
      LVar19 = InterlockedDecrement(puVar2 + 1);
      if (LVar19 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
LAB_0040cecc:
  if (iVar14 != 0) {
    FUN_00544af0();
  }
  if (DAT_00b42f3e == '\0') {
    if (param_1 != 0) {
      FUN_007d72d0();
      if (bVar4) {
        piVar20 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
        iVar12 = (**(code **)(*piVar20 + 0x80))(0);
        piVar20 = (int *)FUN_00405a30();
        iVar13 = (**(code **)(*piVar20 + 0x54))();
        (**(code **)(*(int *)DAT_00b3f928[0xa0] + 0x88))
                  ((int *)DAT_00b3f928[0xa0],*(undefined4 *)(iVar12 + 0xc),0,
                   *(undefined4 *)(*(int *)(iVar13 + 0x10) + 0xc),0,0);
      }
    }
  }
  else {
    if ((DAT_00b3f928[0x80] != 0) || (DAT_00b3f928[0x81] != 0)) {
      FUN_007d72d0();
    }
    if (bVar4) {
      piVar18 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
      iVar12 = (**(code **)(*piVar18 + 0x80))(0);
      piVar18 = (int *)FUN_00405a30();
      iVar13 = (**(code **)(*piVar18 + 0x54))();
      (**(code **)(*(int *)DAT_00b3f928[0xa0] + 0x88))
                ((int *)DAT_00b3f928[0xa0],*(undefined4 *)(iVar12 + 0xc),0,
                 *(undefined4 *)(*(int *)(iVar13 + 0x10) + 0xc),0,0);
    }
    FUN_007b48e0(piVar20,local_38,param_1);
    iVar12 = *(int *)(DAT_00b333cc + 0xdc);
    *(undefined4 *)(iVar12 + 0x110) = 0;
    *(undefined4 *)(iVar12 + 0x114) = 0x3f800000;
    *(undefined4 *)(iVar12 + 0x118) = 0x3f800000;
    *(undefined4 *)(iVar12 + 0x11c) = 0;
  }
  if (local_38 != 0) {
    FUN_007c1ee0(local_38);
  }
  iVar12 = DAT_00b3f940;
  if (DAT_00b3f940 != 0) {
    InterlockedIncrement((LONG *)(DAT_00b3f940 + 400));
    ReleaseSemaphore(*(HANDLE *)(iVar12 + 0x198),1,(LPLONG)0x0);
  }
  iVar12 = DAT_00b3339c;
  if (DAT_00b42cf4 != (undefined4 *)0x0) {
    if (DAT_00b3339c != 0) {
      FUN_00494f30();
      FUN_00401f20(iVar12);
    }
    iVar12 = FUN_00401f00(0x20);
    uStack_4 = 1;
    if (iVar12 == 0) {
      DAT_00b3339c = 0;
    }
    else {
      DAT_00b3339c = FUN_00496cb0(*(undefined4 *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 8),
                                  DAT_00b42cf4,"Render Passes",0x80000000,0x80000000,800,600);
    }
    puVar2 = DAT_00b42cf4;
    uStack_4 = 0xffffffff;
    if (DAT_00b42cf4 != (undefined4 *)0x0) {
      LVar19 = InterlockedDecrement(DAT_00b42cf4 + 1);
      if ((LVar19 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_00b42cf4 = (undefined4 *)0x0;
    }
  }
  DAT_00b33395 = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0040d160(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  LONG LVar8;
  undefined4 *unaff_EBX;
  
  iVar4 = FUN_006ecc80();
  if (iVar4 == 0) {
    return;
  }
  iVar4 = (**(code **)(*DAT_00b333c4 + 0x154))();
  if (iVar4 == 0) {
    return;
  }
  FUN_00977c50(3);
  if (DAT_00b333e8 != 0) {
    FUN_007c1ee0(DAT_00b333e8);
  }
  uVar5 = FUN_007c23c0(DAT_00b3f928,5);
  FUN_0075fa90(uVar5);
  piVar6 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  if (*(int **)(DAT_00b333e8 + 0x20) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (**(code **)(**(int **)(DAT_00b333e8 + 0x20) + 0x4c))();
  }
  iVar7 = (**(code **)(*piVar6 + 0x4c))(0);
  if (iVar7 == iVar4) {
    piVar6 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
    if (*(int **)(DAT_00b333e8 + 0x20) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (**(code **)(**(int **)(DAT_00b333e8 + 0x20) + 0x50))();
    }
    iVar7 = (**(code **)(*piVar6 + 0x50))(0);
    if (iVar7 == iVar4) goto LAB_0040d412;
  }
  piVar6 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  if (*(int **)(DAT_00b333e8 + 0x20) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (**(code **)(**(int **)(DAT_00b333e8 + 0x20) + 0x4c))();
  }
  iVar7 = (**(code **)(*piVar6 + 0x4c))(0);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)iVar4;
  if (iVar4 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  if (fVar1 / fVar2 < 1.0) {
    piVar6 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
    if (*(int **)(DAT_00b333e8 + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(DAT_00b333e8 + 0x20) + 0x4c))();
    }
    (**(code **)(*piVar6 + 0x4c))(0);
  }
  piVar6 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  if (*(int **)(DAT_00b333e8 + 0x20) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (**(code **)(**(int **)(DAT_00b333e8 + 0x20) + 0x50))();
  }
  iVar7 = (**(code **)(*piVar6 + 0x50))(0);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)iVar4;
  if (iVar4 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar3 = 1.0;
  if (fVar1 / fVar2 < 1.0) {
    piVar6 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
    if (*(int **)(DAT_00b333e8 + 0x20) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (**(code **)(**(int **)(DAT_00b333e8 + 0x20) + 0x50))();
    }
    iVar7 = (**(code **)(*piVar6 + 0x50))(0);
    fVar3 = (float)iVar7;
    if (iVar7 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar1 = (float)iVar4;
    if (iVar4 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar3 = fVar3 / fVar1;
  }
  iVar4 = *(int *)(DAT_00b333cc + 0xdc);
  *(undefined4 *)(iVar4 + 0x110) = 0;
  *(undefined4 **)(iVar4 + 0x114) = unaff_EBX;
  *(float *)(iVar4 + 0x118) = fVar3;
  *(undefined4 *)(iVar4 + 0x11c) = 0;
LAB_0040d412:
  FUN_0040c830(DAT_00b333e8);
  DAT_00b33397 = 1;
  if (DAT_00b42f3e == '\0') {
    FUN_00405760(&stack0xffffffe4);
    if (((unaff_EBX != (undefined4 *)0x0) &&
        (LVar8 = InterlockedDecrement(unaff_EBX + 1), LVar8 == 0)) &&
       (unaff_EBX != (undefined4 *)0x0)) {
      (**(code **)*unaff_EBX)(1);
    }
    uVar5 = FUN_00405a30();
    FUN_004057b0(uVar5);
  }
  iVar4 = *(int *)(DAT_00b333cc + 0xdc);
  *(undefined4 *)(iVar4 + 0x110) = 0;
  *(undefined4 *)(iVar4 + 0x114) = 0x3f800000;
  *(undefined4 *)(iVar4 + 0x118) = 0x3f800000;
  *(undefined4 *)(iVar4 + 0x11c) = 0;
  FUN_00977c50(2);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d4d0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  LONG LVar5;
  undefined4 uVar6;
  int iStack_10c;
  char acStack_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&iStack_10c;
  FUN_00977c50(3);
  FUN_007a99a0();
  piVar2 = DAT_00b3f928;
  if (DAT_00b34fa4 != '\0') {
    FUN_00497c30();
  }
  cVar3 = FUN_00572e30(2);
  if (cVar3 == '\0') {
    DAT_00b33418 = 0;
LAB_0040d5fe:
    if (DAT_00b33397 == '\0') goto LAB_0040d606;
  }
  else {
    iVar4 = DAT_00b33418 + 1;
    if (DAT_00b33418 == 0) {
      DAT_00b33418 = iVar4;
      FUN_00440af0(0,0,0);
      FUN_00674500();
      goto LAB_0040d5fe;
    }
    DAT_00b33418 = iVar4;
    if (iVar4 != 10) goto LAB_0040d5fe;
    FUN_00572ec0(2,0);
    *(uint *)(DAT_00b33b00 + 0x18) = *(uint *)(DAT_00b33b00 + 0x18) & 0xffffdfff;
    if ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xf & 1) != 0) {
      *(uint *)(DAT_00b33b00 + 0x18) = *(uint *)(DAT_00b33b00 + 0x18) & 0xffff7fff;
      FUN_00466b70();
    }
    if (DAT_00b333e8 != (undefined4 *)0x0) {
      FUN_007c1ee0(DAT_00b333e8);
      puVar1 = DAT_00b333e8;
      if (DAT_00b333e8 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(DAT_00b333e8 + 1);
        if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        DAT_00b333e8 = (undefined4 *)0x0;
      }
      if (DAT_00b42d54 != '\0') {
        _DAT_00b42d50 = 0;
      }
      DAT_00b42d54 = '\0';
    }
    DAT_00b33397 = '\0';
LAB_0040d606:
    iVar4 = FUN_00579060();
    if (((iVar4 != 0x414) && (iVar4 = (**(code **)(*DAT_00b333c4 + 0x154))(), iVar4 != 0)) &&
       (cVar3 = FUN_00572df0(2), cVar3 == '\0')) {
      if (((*(int *)(DAT_00b333a0 + 0x34) == 0) && (*(int *)(DAT_00b333a0 + 8) != 0)) &&
         (DAT_00b06a28 != '\0')) {
        FUN_004826f0();
      }
      FUN_0040c830(0);
      goto LAB_0040d6f1;
    }
  }
  if (DAT_00b333e8 != (undefined4 *)0x0) {
    if (DAT_00b42f3e == '\0') {
      FUN_007d71c0(7,0);
      if (((piVar2[0x80] == 1) || (piVar2[0x81] == 1)) && ((char)piVar2[0x83] == '\x01')) {
        (**(code **)(*piVar2 + 0x144))(0);
      }
      FUN_00709c60(piVar2);
    }
    else {
      cVar3 = FUN_00572e70(2);
      if (cVar3 == '\0') {
        uVar6 = 0x19;
      }
      else {
        uVar6 = 0xc;
      }
      iVar4 = FUN_007b4290(uVar6);
      if (iVar4 != 0) {
        FUN_007b4900(*(undefined4 *)(iVar4 + 4),piVar2,DAT_00b333e8,0);
      }
    }
  }
LAB_0040d6f1:
  FUN_007b8400();
  FUN_00579260(0);
  iVar4 = FUN_00403520(0x1f,1);
  if (iVar4 != 0) {
    iVar4 = FUN_004032d0(0x9d,0);
    if ((iVar4 == 0) && (DAT_00b333b9 == '\0')) {
      FUN_00411750(0);
    }
    else {
      DAT_00b333b9 = DAT_00b333b9 == '\0';
      if ((bool)DAT_00b333b9) {
        DAT_00b02d58 = DAT_00b02d58 + 1;
        _DAT_00b333c8 = 0;
        _sprintf(acStack_108,"%s%03d",PTR_s_TestCameraPath_00b02d50,DAT_00b02d58);
        CreateDirectoryA(acStack_108,(LPSECURITY_ATTRIBUTES)0x0);
        if (DAT_00b02d48 == 0) {
          _DAT_00b33e94 = 0.0;
        }
        else {
          iStack_10c = DAT_00b02d48;
          _DAT_00b33e94 = (float)DAT_00b02d48;
          if (DAT_00b02d48 < 0) {
            _DAT_00b33e94 = _DAT_00b33e94 + 4.2949673e+09;
          }
          _DAT_00b33e94 = 1000.0 / _DAT_00b33e94;
        }
      }
      else {
        _DAT_00b33e94 = 0.0;
      }
    }
  }
  cVar3 = FUN_0040fda0();
  if ((cVar3 == '\0') && (piVar2[0x80] != 0)) {
    FUN_007d7210();
  }
  FUN_00411100();
  FUN_00977c50(2);
  return;
}



uint FUN_0040f640(void)

{
  uint in_EAX;
  
  if (in_EAX < 0x11) {
    if (4 < in_EAX) {
      return (-(uint)(8 < in_EAX) & 8) + 8;
    }
    if (2 < in_EAX) {
      in_EAX = 4;
    }
    return in_EAX;
  }
  if (in_EAX < 0x41) {
    return (-(uint)(0x20 < in_EAX) & 0x20) + 0x20;
  }
  if (in_EAX < 0x81) {
    return 0x80;
  }
  if (0x100 < in_EAX) {
    return (-(uint)(0x200 < in_EAX) & 0x200) + 0x200;
  }
  return 0x100;
}



int * FUN_0040f6a0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                  int param_6)

{
  int iVar1;
  int unaff_EBP;
  void *_Dst;
  int *piStack_30;
  int iStack_2c;
  void *pvStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 local_c [3];
  
  uStack_20 = 0;
  puStack_24 = local_c;
  pvStack_28 = (void *)0x0;
  iStack_2c = param_2;
  piStack_30 = (int *)0x200;
  local_c[0] = 0;
  iVar1 = (**(code **)(*param_1 + 0x5c))(param_1,param_5,param_6,1);
  if (((-1 < iVar1) ||
      (iVar1 = (**(code **)(*param_1 + 0x5c))(param_1,param_5,param_6,1,0,param_2,1,&piStack_30,0),
      -1 < iVar1)) &&
     (iVar1 = (**(code **)(*piStack_30 + 0x4c))(piStack_30,0,&iStack_2c,0,0), -1 < iVar1)) {
    _Dst = pvStack_28;
    for (; param_6 != 0; param_6 = param_6 + -1) {
      _memset(_Dst,0,unaff_EBP * param_5);
      _Dst = (void *)((int)_Dst + iStack_2c);
    }
    (**(code **)(*piStack_30 + 0x50))(piStack_30,0);
  }
  return piStack_30;
}



void FUN_0040f760(void)

{
  int *unaff_ESI;
  
  (**(code **)(*unaff_ESI + 0x170))();
  (**(code **)(*unaff_ESI + 0x1ac))();
  (**(code **)(*unaff_ESI + 0x164))();
  (**(code **)(*unaff_ESI + 0x14c))();
  return;
}



undefined4 FUN_0040f880(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_ESI;
  int *unaff_retaddr;
  undefined4 uVar5;
  undefined4 **ppuVar6;
  undefined4 *local_8;
  int *piStack_4;
  
  if ((uint)param_1[5] < (uint)param_1[8]) {
    piVar1 = *(int **)(param_1[0x10] + param_1[5] * 4);
    ppuVar6 = &local_8;
    uVar5 = 0;
    iVar2 = (**(code **)(*piVar1 + 0x4c))(piVar1,0,ppuVar6,0,0);
    if (-1 < iVar2) {
      if (unaff_ESI != (int *)0x0) {
        *unaff_ESI = (int)ppuVar6;
      }
      if (local_8 != (undefined4 *)0x0) {
        *local_8 = uVar5;
      }
      uVar3 = (uint)(param_1[0xb] != 0) + param_1[9];
      uVar4 = (uint)param_1[5] / uVar3;
      uVar3 = param_1[5] - uVar4 * uVar3;
      if (piStack_4 != (int *)0x0) {
        *piStack_4 = param_1[0xf] * uVar3;
      }
      if (unaff_retaddr != (int *)0x0) {
        *unaff_retaddr = param_1[0xf] * uVar4;
      }
      if (param_1 != (undefined4 *)0x0) {
        if (uVar3 < (uint)param_1[9]) {
          uVar5 = param_1[0xf];
        }
        else {
          uVar5 = param_1[0xb];
        }
        *param_1 = uVar5;
      }
      if (param_2 != (undefined4 *)0x0) {
        if ((uint)param_1[10] <= uVar4) {
          *param_2 = param_1[0xc];
          param_1[5] = param_1[5] + 1;
          return 1;
        }
        *param_2 = param_1[0xf];
      }
      param_1[5] = param_1[5] + 1;
      return 1;
    }
  }
  param_1[5] = 0;
  return 0;
}



void FUN_0040f970(void)

{
  int *unaff_ESI;
  
  (**(code **)(*unaff_ESI + 0xe4))();
  (**(code **)(*unaff_ESI + 0x10c))();
  (**(code **)(*unaff_ESI + 0x10c))();
  (**(code **)(*unaff_ESI + 0x10c))();
  (**(code **)(*unaff_ESI + 0x10c))();
  (**(code **)(*unaff_ESI + 0x114))();
  (**(code **)(*unaff_ESI + 0x114))();
  (**(code **)(*unaff_ESI + 0x114))();
  (**(code **)(*unaff_ESI + 0x114))();
  (**(code **)(*unaff_ESI + 0x114))();
  return;
}



void FUN_0040fa20(undefined4 *param_1)

{
  float unaff_EBX;
  undefined4 *puVar1;
  float unaff_EBP;
  uint uVar2;
  float unaff_ESI;
  float unaff_EDI;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_0040f970();
  (**(code **)(*(int *)*param_1 + 0xe4))((int *)*param_1,7,0);
  (**(code **)(*(int *)*param_1 + 0xe4))((int *)*param_1,0xe,0);
  (**(code **)(*(int *)*param_1 + 0xe4))((int *)*param_1,0xa8,0xf);
  fVar5 = (float)(int)param_1[0xf];
  puVar1 = (undefined4 *)param_1[0x10];
  if ((int)param_1[0xf] < 0) {
    fVar5 = fVar5 + 4.2949673e+09;
  }
  uVar3 = 0;
  fVar4 = fVar5 * unaff_EBP;
  fVar5 = fVar5 * unaff_EBX;
  if (param_1[10] != 0) {
    do {
      uVar2 = 0;
      fVar6 = unaff_EDI;
      if (param_1[9] != 0) {
        do {
          (**(code **)(*(int *)*param_1 + 0x104))((int *)*param_1,0,*puVar1);
          puVar1 = puVar1 + 1;
          FUN_0040f760(fVar6,unaff_ESI,unaff_EBP,unaff_EBX,param_1[0xf],param_1[0xf]);
          uVar2 = uVar2 + 1;
          fVar6 = fVar6 + fVar4;
        } while (uVar2 < (uint)param_1[9]);
      }
      if (param_1[0xb] != 0) {
        (**(code **)(*(int *)*param_1 + 0x104))((int *)*param_1,0,*puVar1);
        puVar1 = puVar1 + 1;
        FUN_0040f760(fVar6,unaff_ESI,unaff_EBP,unaff_EBX,param_1[0xb],param_1[0xf]);
      }
      unaff_ESI = unaff_ESI + fVar5;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[10]);
  }
  if (param_1[0xc] != 0) {
    uVar3 = 0;
    if (param_1[9] != 0) {
      do {
        (**(code **)(*(int *)*param_1 + 0x104))((int *)*param_1,0,*puVar1);
        puVar1 = puVar1 + 1;
        FUN_0040f760(unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX,param_1[0xf],param_1[0xc]);
        uVar3 = uVar3 + 1;
        unaff_EDI = unaff_EDI + fVar4;
      } while (uVar3 < (uint)param_1[9]);
    }
    if (param_1[0xb] != 0) {
      (**(code **)(*(int *)*param_1 + 0x104))((int *)*param_1,0,*puVar1);
      FUN_0040f760(unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX,param_1[0xb],param_1[0xc]);
    }
  }
  (**(code **)(*(int *)*param_1 + 0xe4))((int *)*param_1,7,1);
  (**(code **)(*(int *)*param_1 + 0xe4))((int *)*param_1,0xe,1);
  (**(code **)(*(int *)*param_1 + 0xe4))((int *)*param_1,0x1b,1);
  (**(code **)(*(int *)*param_1 + 0x104))((int *)*param_1,0,0);
  return;
}



bool FUN_0040fca0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = 1;
  _BinkDoFrame_4(unaff_EDI);
  iVar2 = FUN_0040f880();
  if (iVar2 != 0) {
    do {
      iVar3 = _BinkCopyToBufferRect_44
                        (unaff_EDI,local_4,local_8,*(undefined4 *)(unaff_EDI + 4),0,0,local_c,
                         local_10,local_14,local_18,-(uint)(param_1 != 0) & 0x80000000 | 3);
      piVar1 = *(int **)(*(int *)(unaff_ESI + 0x40) + -4 + *(int *)(unaff_ESI + 0x14) * 4);
      (**(code **)(*piVar1 + 0x50))(piVar1,0);
      iVar2 = FUN_0040f880();
    } while (iVar2 != 0);
  }
  return iVar3 != 0;
}



void FUN_0040fd70(undefined4 param_1)

{
  thunk_FUN_00401aa0(param_1,1);
  return;
}



bool FUN_0040fda0(void)

{
  DWORD local_4;
  
  if (DAT_00b33434 == (HANDLE)0x0) {
    return false;
  }
  GetExitCodeThread(DAT_00b33434,&local_4);
  return local_4 == 0x103;
}



void FUN_0040fdd0(void)

{
  if (DAT_00b33434 != (HANDLE)0x0) {
    DAT_00b33425 = 1;
    WaitForSingleObject(DAT_00b33434,0xffffffff);
    DAT_00b33434 = (HANDLE)0x0;
    DAT_00b33425 = 0;
  }
  return;
}



void FUN_0040fec0(undefined4 param_1)

{
  FUN_004941a0(2,param_1,&stack0x00000008);
  return;
}



undefined4 *
FUN_0040fee0(undefined4 param_1,uint param_2,uint param_3,int param_4,uint param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *_Dst;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar1 = FUN_0040f640();
  uVar2 = FUN_0040f640();
  iVar5 = (((param_5 - 1) + param_2) / param_5) * (((param_3 - 1) + param_5) / param_5);
  _Dst = (undefined4 *)thunk_FUN_00401aa0(iVar5 * 4 + 0x48,1);
  if (_Dst == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  _memset(_Dst,0,0x48);
  _Dst[3] = param_2;
  _Dst[2] = param_4;
  _Dst[0xb] = uVar1;
  *_Dst = param_1;
  _Dst[0xc] = uVar2;
  _Dst[4] = param_3;
  _Dst[0xd] = param_2 % param_5;
  _Dst[9] = param_2 / param_5;
  puVar7 = _Dst + 0x12;
  _Dst[8] = iVar5;
  _Dst[0xe] = param_3 % param_5;
  uVar6 = 0;
  _Dst[7] = param_2 * param_4 + 0xf & 0xfffffff0;
  _Dst[0x10] = puVar7;
  _Dst[10] = param_3 / param_5;
  _Dst[0xf] = param_5;
  _Dst[1] = param_6;
  if (param_3 / param_5 != 0) {
    do {
      uVar4 = 0;
      if (_Dst[9] != 0) {
        do {
          uVar1 = FUN_0040f6a0(param_1,_Dst[1],_Dst[7],_Dst[2],_Dst[0xf],_Dst[0xf]);
          *puVar7 = uVar1;
          uVar4 = uVar4 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar4 < (uint)_Dst[9]);
      }
      if (_Dst[0xb] != 0) {
        uVar1 = FUN_0040f6a0(param_1,_Dst[1],_Dst[7],_Dst[2],_Dst[0xb],_Dst[0xf]);
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)_Dst[10]);
  }
  if (_Dst[0xc] != 0) {
    if (_Dst[9] != 0) {
      uVar6 = 0;
      do {
        uVar1 = FUN_0040f6a0(param_1,_Dst[1],_Dst[7],_Dst[2],_Dst[0xf],_Dst[0xc]);
        *puVar7 = uVar1;
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar6 < (uint)_Dst[9]);
    }
    if (_Dst[0xb] != 0) {
      uVar1 = FUN_0040f6a0(param_1,_Dst[1],_Dst[7],_Dst[2],_Dst[0xb],_Dst[0xc]);
      *puVar7 = uVar1;
    }
  }
  uVar4 = 0;
  uVar6 = 0;
  if (_Dst[8] != 0) {
    piVar3 = (int *)_Dst[0x10];
    do {
      if (*piVar3 == 0) {
        do {
          if (*(int *)(_Dst[0x10] + uVar4 * 4) != 0) {
            piVar3 = *(int **)(_Dst[0x10] + uVar4 * 4);
            (**(code **)(*piVar3 + 8))(piVar3);
            *(undefined4 *)(_Dst[0x10] + uVar4 * 4) = 0;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)_Dst[8]);
        FUN_00401e40(_Dst);
        return (undefined4 *)0x0;
      }
      uVar6 = uVar6 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar6 < (uint)_Dst[8]);
  }
  _Dst[6] = 0;
  return _Dst;
}


