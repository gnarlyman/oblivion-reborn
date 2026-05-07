
void FUN_004e00f0(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *in_ECX;
  char *pcVar8;
  uint uStack_8;
  int iStack_4;
  
  uVar7 = param_1;
  FUN_0046b600(param_1,param_2);
  cVar2 = (**(code **)(*in_ECX + 400))();
  if ((cVar2 == '\0') && ((param_1 & 0x10000) != 0)) {
    FUN_0046aa00(1);
  }
  uStack_8 = 0;
  param_1 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    FUN_004534d0(&iStack_4,4);
    if (iStack_4 != 0x4b4f4c42) {
      puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,"..\\TES Shared\\TESObjectREFR.cpp",0x722,*(undefined1 *)(DAT_00b33b00 + 0x7c)
                    );
      }
      else {
        piVar3 = (int *)FUN_0046b250(*puVar1);
        uVar4 = (**(code **)(*piVar3 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,"..\\TES Shared\\TESObjectREFR.cpp",0x722,*puVar1,uVar4);
      }
    }
    param_1 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&uStack_8,2);
  }
  if (((*(uint *)(DAT_00b33b00 + 0x18) >> 7 & 1) != 0) && (iVar5 = FUN_00420260(), iVar5 != 0)) {
    cVar2 = FUN_00420340();
    if (cVar2 == '\0') {
      uVar6 = *(uint *)(iVar5 + 8) >> 0xb;
    }
    else {
      uVar6 = CONCAT31((uint3)(*(uint *)(iVar5 + 8) >> 0x13),~(byte)(*(uint *)(iVar5 + 8) >> 0xb));
    }
    FUN_0046aba0(uVar6 & 0xffffff01);
  }
  if (((uVar7 & 1) != 0) &&
     ((((uint)in_ECX[2] >> 0xb & 1) != 0 || (((uint)in_ECX[2] >> 5 & 1) != 0)))) {
    (**(code **)(*in_ECX + 0x150))(0);
  }
  if (((uVar7 & 0x8000000) != 0) && (iVar5 = FUN_004d6d40(), iVar5 != 0)) {
    cVar2 = (**(code **)(*in_ECX + 400))();
    if ((cVar2 != '\0') && (cVar2 = FUN_005e3270(), cVar2 != '\0')) {
      FUN_004dc5b0();
      FUN_004dc8f0(1);
      FUN_004dcab0();
      FUN_004dccf0();
    }
    FUN_0041f5f0();
    cVar2 = (**(code **)(*in_ECX + 400))();
    if (cVar2 != '\0') {
      FUN_005e9690();
    }
    FUN_00485e00();
    FUN_004937e0();
  }
  FUN_00425900(uVar7 | param_2,in_ECX);
  uVar6 = 0x177577e0;
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x43) {
    uVar6 = 0x177577f0;
  }
  if (((uVar7 & uVar6) != 0) || (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
    FUN_00426a90(uVar7,param_2,in_ECX);
  }
  if ((((uVar7 & 0x2000000) != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 == '\0')) &&
     (FUN_0046ac80(&param_2,2), (short)param_2 != 0)) {
    FUN_00459020(in_ECX,param_2);
  }
  if (((uVar7 & 0x808) != 0) && (FUN_0046ac80(&param_2,2), (short)param_2 != 0)) {
    if ((uVar7 & 0x800) == 0) {
      FUN_00459310(in_ECX,param_2);
    }
    else {
      FUN_00452170(param_2 & 0xffff);
    }
  }
  if ((0x42 < *(byte *)(DAT_00b33b00 + 0x7c)) && ((uVar7 & 0x10) != 0)) {
    FUN_0046ac80(in_ECX + 0xe,4);
    FUN_004db520(in_ECX[0xe]);
  }
  if ((uVar7 & 0x40000) != 0) {
    cVar2 = FUN_0041f830(8);
    if (cVar2 == '\0') {
      FUN_00423df0(8);
    }
    else {
      FUN_00423e50(8);
    }
  }
  if ((uVar7 & 0x80000) != 0) {
    FUN_00420ff0();
    if (uVar7 == 0) {
      uVar7 = FUN_004533f0(in_ECX,0);
    }
    if ((uVar7 & 0x40000) == 0) {
      cVar2 = FUN_0041f830(8);
    }
    else {
      cVar2 = FUN_0041f830(8);
      cVar2 = cVar2 == '\0';
    }
    if (cVar2 == '\0') {
      pcVar8 = "Open";
    }
    else {
      pcVar8 = "Close";
    }
    FUN_00424de0(pcVar8);
  }
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar7 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar6 = uStack_8 & 0xffff;
      if (uVar6 + param_1 < uVar7) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar7 - uVar6) - param_1,"..\\TES Shared\\TESObjectREFR.cpp",0x79a,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar7 < uVar6 + param_1) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar6 - uVar7) + param_1,"..\\TES Shared\\TESObjectREFR.cpp",0x79a,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar3 = (int *)FUN_0046b250(*puVar1);
      uVar6 = (uStack_8 & 0xffff) + param_1;
      if (uVar6 < uVar7) {
        uVar4 = (**(code **)(*piVar3 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar7 - (uStack_8 & 0xffff)) - param_1,"..\\TES Shared\\TESObjectREFR.cpp",
                     0x79a,*puVar1,uVar4);
        return;
      }
      if (uVar7 < uVar6) {
        uVar4 = (**(code **)(*piVar3 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((uStack_8 & 0xffff) - uVar7) + param_1,"..\\TES Shared\\TESObjectREFR.cpp",
                     0x79a,*puVar1,uVar4);
        return;
      }
    }
  }
  return;
}



void FUN_004e0580(uint param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  undefined4 uVar5;
  
  FUN_0068f970(param_1);
  cVar2 = (**(code **)(*in_ECX + 400))();
  if ((cVar2 == '\0') && ((param_1 & 0x10000) != 0)) {
    FUN_0046aa00(0);
  }
  if (((*(uint *)(DAT_00b33b00 + 0x18) >> 6 & 1) != 0) && ((param_1 & 0x40000000) != 0)) {
    if ((((uint)in_ECX[2] >> 0xb & 1) == 0) && (((uint)in_ECX[2] >> 5 & 1) == 0)) {
      if (((in_ECX[0xf] == 0) && (in_ECX[0x10] != 0)) &&
         ((cVar2 = *(char *)(in_ECX[0x10] + 0x26), cVar2 == '\x06' || (cVar2 == '\x03')))) {
        cVar2 = FUN_004354f0(in_ECX);
        if (cVar2 == '\0') {
          uVar3 = FUN_00440c80(in_ECX[0x10],0);
          ModelLoader_QueueReference(in_ECX,uVar3);
        }
      }
    }
    else {
      (**(code **)(*in_ECX + 0x150))(0);
    }
  }
  if ((param_1 & 0x2000000) != 0) {
    cVar2 = (**(code **)(*in_ECX + 400))();
    if (cVar2 == '\0') {
      FUN_004da4f0();
    }
  }
  if ((param_1 & 0x177577e0) == 0) {
    cVar2 = (**(code **)(*in_ECX + 400))();
    if (cVar2 == '\0') goto LAB_004e0672;
  }
  FUN_00425650(param_1,in_ECX);
LAB_004e0672:
  if ((param_1 & 0x8000000) != 0) {
    cVar2 = (**(code **)(*in_ECX + 400))();
    if (cVar2 != '\0') {
      cVar2 = FUN_005e3270();
      if (cVar2 != '\0') {
        FUN_004dc5b0();
        FUN_004dc8f0(1);
        FUN_004dcab0();
        FUN_004dccf0();
      }
    }
    if ((*(uint *)(DAT_00b33b00 + 0x18) >> 6 & 1) == 0) {
      FUN_004ddb00(0);
    }
    else {
      (**(code **)(*in_ECX + 0x184))(0);
    }
  }
  iVar4 = (**(code **)(*in_ECX + 0x170))();
  if (iVar4 != 0) {
    iVar4 = (**(code **)(*in_ECX + 0x170))();
    if (*(char *)(iVar4 + 4) == '\x18') {
      if (((param_1 & 0x40000) != 0) && (*(char *)(DAT_00b33b00 + 0xa8) == '\0')) {
        cVar2 = FUN_0041f830(8);
        if (cVar2 == '\0') {
          FUN_00423df0(8);
        }
        else {
          FUN_00423e50(8);
        }
      }
      if ((*(int *)(DAT_00b33b00 + 0x44) == 0x1ffff000) ||
         (*(int *)(DAT_00b33b00 + 0x44) == 0x7ffff000)) {
        uVar5 = 1;
        uVar3 = FUN_0041f830(8);
        FUN_004de460(uVar3,uVar5);
      }
    }
  }
  if ((*(int *)(DAT_00b33b00 + 0x44) == 0x1ffff000) || (*(int *)(DAT_00b33b00 + 0x44) == 0x7ffff000)
     ) {
    cVar2 = (**(code **)(*in_ECX + 0x198))(0);
    if ((cVar2 != '\0') && (in_ECX[0xf] != 0)) {
      iVar4 = FUN_0041ffa0();
      if (iVar4 != 0) {
        FUN_00497830(in_ECX);
      }
      cVar2 = (**(code **)(*in_ECX + 0x198))(0);
      if (cVar2 == '\0') {
        (**(code **)(*in_ECX + 0x164))();
      }
    }
  }
  if ((*(int *)(DAT_00b33b00 + 0x44) == 0x60000000) || (*(int *)(DAT_00b33b00 + 0x44) == 0x7ffff000)
     ) {
    iVar4 = (**(code **)(*in_ECX + 0x170))();
    if (iVar4 != 0) {
      iVar4 = (**(code **)(*in_ECX + 0x170))();
      cVar2 = *(char *)(iVar4 + 4);
      if ((((cVar2 == '\x12') || (cVar2 == '\n')) || (cVar2 == '\x18')) &&
         (((uVar1 = in_ECX[2], (uVar1 >> 0xb & 1) != 0 || ((uVar1 >> 5 & 1) != 0)) ||
          ((cVar2 == '\x18' && ((uVar1 >> 0xd & 1) != 0)))))) {
        FUN_004d9310(0);
      }
    }
  }
  return;
}



short FUN_004e0840(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  
  iVar3 = FUN_004211c0();
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = *(int *)(in_ECX + 0x3c);
  uVar4 = 0;
  if ((((iVar3 != 0) && (*(short *)(iVar3 + 0xb6) != 0)) && (**(int **)(iVar3 + 0xb0) != 0)) &&
     (*(int *)(**(int **)(iVar3 + 0xb0) + 0xc) != 0)) {
    iVar5 = FUN_00405790(0);
    uVar4 = FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(iVar5 + 0xc));
  }
  sVar1 = FUN_004da760(uVar4);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar3 + 0xc);
  }
  uVar4 = FUN_00560920(&DAT_00b3cac0,uVar4);
  sVar2 = FUN_004da760(uVar4);
  return sVar2 + sVar1;
}



void FUN_004e08d0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x3c);
  uVar5 = 0;
  if ((((iVar1 != 0) && (*(short *)(iVar1 + 0xb6) != 0)) &&
      (iVar2 = **(int **)(iVar1 + 0xb0), iVar2 != 0)) && (*(int *)(iVar2 + 0xc) != 0)) {
    uVar5 = FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(iVar2 + 0xc));
  }
  FUN_004da7f0(uVar5,0xbf800000);
  if ((iVar1 == 0) || (piVar3 = *(int **)(iVar1 + 0xc), piVar3 == (int *)0x0)) {
    uVar6 = 0;
  }
  else {
    for (puVar7 = (undefined *)(**(code **)(*piVar3 + 4))(); puVar7 != (undefined *)0x0;
        puVar7 = *(undefined **)(puVar7 + 4)) {
      if (puVar7 == &DAT_00b3cac0) {
        bVar4 = 1;
        goto LAB_004e0944;
      }
    }
    bVar4 = 0;
LAB_004e0944:
    uVar6 = -(uint)bVar4 & (uint)piVar3;
  }
  FUN_004da7f0(uVar6,0xbf800000);
  return;
}



int FUN_004e0970(byte *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  byte local_30 [2];
  undefined2 local_2e;
  undefined2 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined1 local_18;
  undefined4 local_14;
  byte *local_10;
  
  iVar2 = *(int *)(in_ECX + 0x3c);
  if (iVar2 == 0) {
    return 0;
  }
  uVar5 = 3;
  local_30[0] = 0;
  local_2e = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (param_1 == (byte *)0x0) {
    param_1 = local_30;
  }
  *(int *)(param_1 + 8) = in_ECX;
  *(int *)(param_1 + 0xc) = iVar2;
  uVar3 = FUN_004a05e0(iVar2);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  local_14 = 0xf;
  local_18 = 1;
  local_10 = param_1;
  FUN_0088a7d0(iVar2,local_1c,&LAB_004dac00);
  uVar1 = *(ushort *)(param_1 + 2);
  uVar4 = (uint)uVar1 + (uint)*(ushort *)(param_1 + 4) & 0xffff;
  if (uVar1 != 0) {
    if (*(ushort *)(param_1 + 4) == 0) {
      if (uVar1 == 0) goto LAB_004e0a1b;
      *param_1 = *param_1 | 1;
    }
    else {
      *param_1 = *param_1 | 4;
      uVar5 = uVar4 + 3 & 0xffff;
    }
    if (uVar1 != 0) {
      uVar5 = uVar5 + (uint)uVar1 * 0x18;
    }
  }
LAB_004e0a1b:
  if ((*param_1 & 2) != 0) {
    uVar4 = uVar4 - 1 & 0xffff;
  }
  return uVar5 + uVar4 * 0x1c;
}



void FUN_004e0a40(uint param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_1c [4];
  undefined1 local_18;
  undefined4 local_14;
  int local_10;
  
  iVar2 = param_1;
  iVar1 = *(int *)(in_ECX + 0x3c);
  if (iVar1 != 0) {
    FUN_0046ac70(param_1,1);
    param_1 = (uint)(ushort)(*(short *)(iVar2 + 4) + *(short *)(iVar2 + 2));
    FUN_0046ac70(&param_1,2);
    local_14 = 0xf;
    local_18 = 1;
    local_10 = iVar2;
    FUN_0088a7d0(iVar1,local_1c,FUN_004dacf0);
  }
  return;
}



void FUN_004e0ab0(ushort param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  byte local_32;
  char local_31 [3];
  undefined2 local_2e;
  undefined2 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_8;
  undefined4 local_4;
  
  local_32 = 0;
  if ((*(byte *)(DAT_00b33b00 + 0x7c) < 0x16) && (FUN_0046ac80(local_31,1), local_31[0] != '\0')) {
    local_32 = local_32 | 1;
  }
  iVar3 = in_ECX[0xf];
  if (iVar3 == 0) {
    uVar2 = (**(code **)(*in_ECX + 0xd4))(in_ECX[3]);
    FUN_004a7a60("Cannot load Havok data for reference %s %08X because it has no 3D.",uVar2);
    FUN_00452170(param_1);
    return;
  }
  if (0x2a < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(&local_32,1);
  }
  if (((0x15 < *(byte *)(DAT_00b33b00 + 0x7c)) && (*(byte *)(DAT_00b33b00 + 0x7c) < 0x2b)) &&
     (FUN_0046ac80(local_31,1), local_31[0] != '\0')) {
    local_32 = local_32 | 1;
  }
  if (0x17 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(local_31,1);
    local_31[1] = 0;
    local_2e = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_004e0970(local_31 + 1);
    if ((char)((char)local_2e + (char)local_2c) != local_31[0]) {
      uVar2 = (**(code **)(*in_ECX + 0xd4))(in_ECX[3],local_31[0],(char)local_2e + (char)local_2c);
      FUN_004a7a60("Havok data bone count differs on reference %s %08X.  Original count: %i, Current count: %i.  This should only happen with art changes."
                   ,uVar2);
      FUN_00452170(param_1 - 2);
      cVar1 = (**(code **)(*in_ECX + 400))();
      if (cVar1 == '\0') {
        return;
      }
      FUN_008ab440(iVar3,&DAT_00b3f9a8,1,0,0);
      return;
    }
  }
  local_14 = 0xf;
  local_18 = 1;
  local_10 = FUN_004a05e0(iVar3);
  local_8 = (uint)local_32;
  local_4 = 0;
  FUN_0088a7d0(iVar3,local_1c,FUN_004db080);
  cVar1 = (**(code **)(*in_ECX + 400))();
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*in_ECX + 0x1a0))(), cVar1 != '\0')) {
    FUN_008a5580(iVar3,1);
    FUN_0088d070(iVar3,1,1,0);
    iVar3 = (**(code **)(*in_ECX + 0x164))();
    if (iVar3 != 0) {
      FUN_00470fc0(5,0);
      *(undefined4 *)(iVar3 + 0x18) = DAT_00b3f9a8;
      *(undefined4 *)(iVar3 + 0x1c) = DAT_00b3f9ac;
      *(undefined4 *)(iVar3 + 0x20) = DAT_00b3f9b0;
    }
  }
  FUN_00707370(0,0);
  return;
}



void FUN_004e0d90(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  if ((((*(char *)(in_ECX[7] + 4) == '\x12') || (*(char *)(in_ECX[7] + 4) == '\x18')) &&
      (iVar2 = __stricmp(*(char **)(param_1 + 8),PTR_s_Unequip_00b10568), iVar2 == 0)) &&
     (in_ECX[0x10] != 0)) {
    cVar1 = FUN_004c97f0();
    iVar2 = DAT_00b35c24;
    if (cVar1 != '\0') {
      iVar2 = FUN_00424180();
    }
    if (iVar2 != 0) {
      cVar1 = FUN_004c97f0();
      if (cVar1 != '\0') {
        FUN_00424180();
      }
      uVar3 = (**(code **)(*in_ECX + 0x154))(1,1,0);
      FUN_0088d070(uVar3);
    }
  }
  return;
}



void FUN_004e0e20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004dbae0(param_1,1,0,param_2,param_3);
  return;
}



char FUN_004e0e40(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  char local_1e;
  char local_1d;
  undefined **local_1c;
  int local_18;
  void *local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5b28;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_18 = 0x25;
  local_1e = '\x01';
  local_1c = &PTR_FUN_00a46c14;
  local_10 = 0;
  local_14 = (void *)FUN_00401f00(0x94,uVar2);
  _memset(local_14,0,local_18 * 4);
  local_1c = &PTR_FUN_00a46f00;
  local_4 = 0;
  iVar3 = FUN_00420260();
  if (iVar3 != 0) {
    do {
      while( true ) {
        if (local_1e == '\0') goto LAB_004e0f52;
        if (iVar3 != in_ECX) break;
        local_1e = '\0';
      }
      FUN_00452570(iVar3,1);
      if ((*(uint *)(iVar3 + 8) >> 3 & 1) == 0) {
        iVar3 = FUN_00420260();
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          uVar4 = FUN_0046b250(iVar3,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
          iVar3 = FUN_009832e6(uVar4);
        }
      }
      else {
        iVar3 = FUN_00420260();
      }
      local_1d = '\0';
      if (iVar3 == 0) break;
      cVar1 = FUN_004d6760(iVar3,&local_1d);
    } while ((cVar1 == '\0') || (local_1d == '\0'));
  }
LAB_004e0f52:
  local_4 = 0xffffffff;
  FUN_004dee70();
  *unaff_FS_OFFSET = local_c;
  return local_1e;
}



void TESObjectREFR_Set3D(int param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  LONG LVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *in_ECX;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  int *local_50;
  int *local_4c;
  float local_48;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 auStack_30 [9];
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b5b63;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffa0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (in_ECX[0xf] == param_1) {
    if (param_1 == 0) {
      ModelLoader_CancelPendingForRefr(in_ECX);
    }
    goto LAB_004e155c;
  }
  local_38 = in_ECX[0xc];
  local_3c = in_ECX[0xb];
  local_34 = in_ECX[0xd];
  fVar12 = (float10)FUN_004d7260(uVar3);
  local_48 = (float)fVar12;
  local_4c = (int *)0x0;
  local_50 = (int *)0x0;
  cVar2 = (**(code **)(*in_ECX + 400))();
  if (cVar2 != '\0') {
    local_50 = in_ECX;
  }
  if ((((in_ECX[0xf] != 0) && (param_1 != 0)) && (in_ECX[7] != 0)) &&
     (*(char *)(in_ECX[7] + 4) == '\x1e')) goto LAB_004e155c;
  if (((*(char *)(DAT_00b33a98 + 0xcd4) == '\0') && (local_50 != (int *)0x0)) &&
     (iVar4 = (**(code **)(*local_50 + 0x380))(), iVar4 != 0)) {
    piVar5 = (int *)(**(code **)(*local_50 + 0x380))();
    (**(code **)(*piVar5 + 0x164))();
  }
  puVar7 = (undefined4 *)in_ECX[0xf];
  puStack_40 = puVar7;
  if (puVar7 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar7 + 1);
  }
  iStack_4 = 0;
  if (puVar7 == (undefined4 *)0x0) {
    if (param_1 == 0) {
LAB_004e13c0:
      ModelLoader_CancelPendingForRefr(in_ECX);
      goto LAB_004e13cb;
    }
  }
  else {
    local_4c = (int *)puVar7[7];
    if (local_4c != (int *)0x0) {
      if ((((((uint)in_ECX[2] >> 0xe & 1) == 0) || (in_ECX[7] == 0)) ||
          (*(char *)(in_ECX[7] + 4) != '\x1e')) &&
         ((((**(code **)(*local_4c + 0x88))(&puStack_44,puVar7), puVar10 = puStack_44,
           puStack_44 != (undefined4 *)0x0 &&
           (LVar6 = InterlockedDecrement(puStack_44 + 1), LVar6 == 0)) &&
          (puVar10 != (undefined4 *)0x0)))) {
        (**(code **)*puVar10)(1);
      }
      local_3c = puVar7[0x15];
      local_48 = (float)puVar7[0x18];
      local_38 = puVar7[0x16];
      local_34 = puVar7[0x17];
      puVar10 = puVar7 + 0xc;
      puVar11 = auStack_30;
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
    }
    puVar10 = puVar7;
    FUN_007b4280(0,puVar7);
    FUN_007c5e70(puVar10);
    cVar2 = (**(code **)(*in_ECX + 0x188))();
    if (cVar2 != '\0') {
      puVar10 = puVar7;
      FUN_007b4280(0,puVar7);
      FUN_007c76d0(puVar10);
    }
    if (param_1 == 0) {
      FUN_004d7470();
      if (((uint)in_ECX[2] >> 5 & 1) == 0) {
        if (local_50 == (int *)0x0) {
          FUN_0045d220(in_ECX);
          FUN_0045d390(in_ECX);
        }
        else {
          cVar2 = (**(code **)(*in_ECX + 0x198))(0);
          if (cVar2 != '\0') {
            FUN_0045d220(in_ECX);
          }
        }
      }
      piVar5 = (int *)FUN_0041e650();
      if (piVar5 != (int *)0x0) {
        iVar4 = *piVar5;
        if (iVar4 != 0) {
          FUN_007b4280(0,iVar4);
          FUN_007c7dc0(iVar4);
          puVar10 = (undefined4 *)*piVar5;
          if (puVar10 != (undefined4 *)0x0) {
            LVar6 = InterlockedDecrement(puVar10 + 1);
            if ((LVar6 == 0) && (puVar10 != (undefined4 *)0x0)) {
              (**(code **)*puVar10)(1);
            }
            *piVar5 = 0;
          }
        }
        FUN_0041f5b0();
      }
      cVar2 = (**(code **)(*in_ECX + 0x188))();
      if (cVar2 == '\0') {
LAB_004e1244:
        iVar4 = FUN_0041e630();
        if (iVar4 != 0) {
          FUN_0041f590();
        }
      }
      else {
        (**(code **)(*in_ECX + 0x44))(0x2000000);
        if ((((int *)in_ECX[0x16] == (int *)0x0) ||
            (uVar3 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), 1 < uVar3)) || (in_ECX[0x16] == 0))
        goto LAB_004e1244;
        FUN_0064fff0(0);
      }
      if (local_50 != (int *)0x0) {
        FUN_004dc5b0();
        FUN_004dc8f0(0);
        FUN_004dcab0();
        FUN_004dccf0();
      }
      (**(code **)(*in_ECX + 0x16c))(0);
      iVar4 = FUN_006ff9c0(&DAT_00a7d0ec);
      if ((iVar4 != 0) && ((*(uint *)(iVar4 + 0xc) >> 4 & 1) != 0)) {
        FUN_004de1c0(puVar7);
      }
      if (local_50 != (int *)0x0) {
        iVar4 = FUN_0065a2c0();
        if (iVar4 != 0) {
          FUN_004d9a50(0);
        }
        if ((int *)in_ECX[0x16] != (int *)0x0) {
          (**(code **)(*(int *)in_ECX[0x16] + 0x470))(0);
        }
      }
      if (*(int *)(DAT_00b33398 + 0x24) != 0) {
        FUN_006ac420(in_ECX,0);
      }
    }
    if (((in_ECX[0x10] == 0) || (*(char *)(in_ECX[0x10] + 0x26) != '\x01')) &&
       (FUN_00678d90(in_ECX), 0 < DAT_00b3b7d0)) {
      FUN_00607b90();
    }
    FUN_006ffac0(&DAT_00a3ceb0);
    LVar6 = InterlockedDecrement(puVar7 + 1);
    if (LVar6 == 0) {
      (**(code **)*puVar7)(1);
    }
    puStack_40 = (undefined4 *)0x0;
    (**(code **)(*in_ECX + 0x144))();
    FUN_00977c50(3);
    puVar7 = (undefined4 *)in_ECX[0xf];
    if (puVar7 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar7 + 1);
      if ((LVar6 == 0) && (puVar7 != (undefined4 *)0x0)) {
        (**(code **)*puVar7)(1);
      }
      in_ECX[0xf] = 0;
    }
    FUN_00977c50(2);
    if (param_1 == 0) {
      if (in_ECX[7] != 0) {
        if ((in_ECX[2] & 0x80000U) != 0) goto LAB_004e13c0;
        (**(code **)(*(int *)in_ECX[7] + 0xf0))();
      }
LAB_004e13cb:
      FUN_004d9310(0);
    }
  }
  FUN_004d7d10(param_1);
  if (param_1 != 0) {
    if (local_4c != (int *)0x0) {
      puStack_44 = (undefined4 *)ABS(local_48);
      *(int *)(param_1 + 0x54) = local_3c;
      *(undefined4 **)(param_1 + 0x60) = puStack_44;
      puVar7 = auStack_30;
      puVar10 = (undefined4 *)(param_1 + 0x30);
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      }
      *(int *)(param_1 + 0x58) = local_38;
      *(int *)(param_1 + 0x5c) = local_34;
      (**(code **)(*local_4c + 0x84))(param_1,1);
      FUN_00897a20(param_1,1);
      FUN_00707610();
      FUN_00707980();
      FUN_00707370(0,0);
    }
    if ((in_ECX[7] != 0) && (*(char *)(in_ECX[7] + 4) != '\x1e')) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x14);
      piVar5 = (int *)0x0;
      if (uVar3 != 0) {
        do {
          uVar3 = uVar3 - 1;
          piVar9 = piVar5;
          if (piVar5 != (int *)0x0) goto LAB_004e150c;
          piVar1 = *(int **)(*(int *)(param_1 + 0x10) + (uVar3 & 0xffff) * 4);
          if (piVar1 != (int *)0x0) {
            for (puVar7 = (undefined4 *)(**(code **)(*piVar1 + 4))();
                (piVar9 = piVar5, puVar7 != (undefined4 *)0x0 &&
                (piVar9 = piVar1, puVar7 != &DAT_00b35acc)); puVar7 = (undefined4 *)puVar7[1]) {
            }
          }
          piVar5 = piVar9;
        } while (uVar3 != 0);
        if (piVar9 != (int *)0x0) {
LAB_004e150c:
          piVar9[3] = (int)in_ECX;
          goto LAB_004e150f;
        }
      }
      puStack_44 = (undefined4 *)FUN_00401f00(0x10);
      iStack_4._0_1_ = 1;
      if (puStack_44 == (undefined4 *)0x0) {
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        FUN_006ff8a0(0);
      }
      else {
        uVar8 = FUN_004d67c0(in_ECX);
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        FUN_006ff8a0(uVar8);
      }
    }
  }
LAB_004e150f:
  cVar2 = FUN_0045a500();
  if (((cVar2 == '\0') && (param_1 == 0)) && (iVar4 = FUN_0041e6b0(), iVar4 != 0)) {
    FUN_0041e6b0();
    iVar4 = FUN_0042b460();
    if (iVar4 != 0) {
      FUN_0041e6b0();
      uVar8 = 0;
      FUN_0042b460(0);
      FUN_004cca60(uVar8);
    }
  }
LAB_004e155c:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_004e1580(void)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  LONG LVar11;
  int *in_ECX;
  char *pcVar12;
  int iVar13;
  int *unaff_FS_OFFSET;
  float10 fVar14;
  undefined4 *puStack_140;
  int *piStack_13c;
  int iStack_138;
  int local_134;
  undefined4 *puStack_130;
  undefined4 *puStack_12c;
  undefined4 *puStack_120;
  undefined4 *puStack_11c;
  undefined4 *puStack_118;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b5b96;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&puStack_140;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffeb0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar13 = in_ECX[7];
  local_134 = iVar13;
  iVar4 = (**(code **)(*in_ECX + 0x168))(uVar3);
  FUN_0047d120();
  iVar5 = (**(code **)(*in_ECX + 0x164))();
  if (iVar5 != 0) {
    FUN_004728c0();
  }
  iStack_138 = in_ECX[0xf];
  if (*(char *)(in_ECX[7] + 4) == '#') {
    if (iVar4 != 0) {
      FUN_00526db0(in_ECX);
    }
    uVar2 = 1;
  }
  else if (*(char *)(in_ECX[7] + 4) == '$') {
    if (iStack_138 != 0) {
      piStack_13c = (int *)CONCAT31(piStack_13c._1_3_,1);
      puStack_140 = (undefined4 *)CONCAT31(puStack_140._1_3_,1);
      cVar1 = (**(code **)(*in_ECX + 400))();
      if ((cVar1 != '\0') && (iVar4 = FUN_005e0380(), iVar4 != 0)) {
        if ((*(uint *)(iVar4 + 0x1c) >> 0x14 & 1) != 0) {
          piStack_13c = (int *)((uint)piStack_13c & 0xffffff00);
        }
        if ((*(uint *)(iVar4 + 0x1c) >> 0x15 & 1) != 0) {
          puStack_140 = (undefined4 *)((uint)puStack_140 & 0xffffff00);
        }
      }
      if (((*(uint *)(DAT_00b33b00 + 0x18) >> 1 & 1) == 0) ||
         (uVar3 = FUN_004533f0(in_ECX,1), (uVar3 & 0x8000000) == 0)) {
        FUN_0051e240(in_ECX,piStack_13c,puStack_140,0);
      }
      else {
        FUN_0051d460(in_ECX);
      }
      for (piVar6 = (int *)FUN_006899c0();
          (piStack_13c = piVar6, piVar6 != (int *)0x0 && ((piVar6[1] != 0 || (*piVar6 != 0))));
          piVar6 = (int *)piVar6[1]) {
        pcVar7 = (char *)(**(code **)(*(int *)(iVar13 + 0xac) + 0x14))();
        pcVar12 = acStack_114;
        do {
          cVar1 = *pcVar7;
          *pcVar12 = cVar1;
          pcVar7 = pcVar7 + 1;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        pcVar7 = _strrchr(acStack_114,0x5c);
        pcVar12 = (char *)*piVar6;
        do {
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar12;
          *pcVar7 = cVar1;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        iVar4 = FUN_00439eb0(acStack_114,0,3,1);
        if (iVar4 != 0) {
          fVar14 = (float10)(**(code **)(*in_ECX + 0xec))();
          puStack_140 = (undefined4 *)(float)fVar14;
          FUN_00478b90();
          puStack_118 = puStack_140;
          puStack_11c = puStack_140;
          puStack_120 = puStack_140;
          puStack_140 = (undefined4 *)0x0;
          uStack_4 = 1;
          cVar1 = FUN_00480820(iVar4);
          if (cVar1 == '\0') {
            puVar9 = (undefined4 *)FUN_00700610(&puStack_130);
          }
          else {
            uVar8 = FUN_004430c0(iVar4,&puStack_130);
            FUN_0075fa90(uVar8);
            puVar9 = puStack_140;
          }
          cVar1 = FUN_00471b80(puVar9);
          piVar6 = (int *)FUN_004d96f0(iStack_138,&DAT_00a30968);
          if ((cVar1 == '\0') || (piVar6 == (int *)0x0)) {
            FUN_00479140(iStack_138,puVar9,0,0,0xffffffff,0);
          }
          else {
            piVar10 = (int *)(**(code **)(*piVar6 + 0x58))("SkinAttachment");
            if (piVar10 == (int *)0x0) {
              iVar13 = *(int *)piVar6[7];
            }
            else {
              iVar13 = *piVar10;
            }
            (**(code **)(iVar13 + 0x84))(puVar9,1);
            FUN_00478ec0(iStack_138,puVar9,0);
          }
          puVar9 = puStack_140;
          uStack_4 = uStack_4 & 0xffffff00;
          if ((puStack_140 != (undefined4 *)0x0) &&
             (LVar11 = InterlockedDecrement(puStack_140 + 1), LVar11 == 0)) {
            (**(code **)*puVar9)(1);
          }
          uStack_4 = 0xffffffff;
          if (puStack_130 != (undefined4 *)0x0) {
            (**(code **)*puStack_130)(1);
          }
          iVar13 = local_134;
          piVar6 = piStack_13c;
          if (puStack_12c != (undefined4 *)0x0) {
            (**(code **)*puStack_12c)(1);
            iVar13 = local_134;
            piVar6 = piStack_13c;
          }
        }
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)(*(int *)in_ECX[7] + 0xfc))();
  }
  FUN_0047d0f0();
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}



void FUN_004e1900(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c2a48;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (in_ECX[0xf] != 0) {
    iVar3 = (**(code **)(*in_ECX + 0x168))(uVar2);
    cVar1 = (**(code **)(*in_ECX + 400))();
    piVar5 = (int *)0x0;
    if (cVar1 != '\0') {
      piVar5 = in_ECX;
    }
    if (in_ECX == DAT_00b333c4) {
      if (iVar3 != 0) {
        FUN_00479780(param_1);
      }
      iVar3 = FUN_006600d0((char)DAT_00b333c4[0x162]);
    }
    if (iVar3 == 0) {
      if ((param_1 != 0) && ((int *)(param_1 + 0x30) != (int *)0x0)) {
        uVar4 = 9;
        if (*(char *)(param_1 + 0x90) == '\x05') {
          uVar4 = 0xe;
        }
        uVar4 = (**(code **)(*(int *)(param_1 + 0x30) + 0x14))(uVar4);
        FUN_00479450(uVar4);
        if (*(char *)(param_1 + 0x90) == '\x05') {
          FUN_006ff420(&DAT_00a451f8);
        }
        else {
          uStack_14 = 0;
          uStack_10 = 0;
          uStack_e = 0;
          uStack_4 = 0;
          FUN_00402e30(&uStack_14,"%s (%08X)",PTR_s_Weapon_00b065ac,*(undefined4 *)(param_1 + 0xc));
          FUN_006ff420(uStack_14);
          uStack_4 = 0xffffffff;
          FUN_00401f20(uStack_14);
        }
        cVar1 = FUN_0045a500();
        if (cVar1 == '\0') {
          cVar1 = FUN_005e0da0();
          if (cVar1 == '\0') {
            iVar3 = (**(code **)(*(int *)piVar5[0x16] + 0x124))(0);
            if (iVar3 == 0) {
              cVar1 = '\x01';
              (**(code **)(*(int *)piVar5[0x16] + 0x308))(1);
            }
          }
          iVar3 = *(int *)piVar5[0x16];
          uVar4 = (**(code **)(*piVar5 + 0x164))(piVar5);
          (**(code **)(iVar3 + 0x150))(cVar1,0,uVar4);
        }
      }
    }
    else {
      FUN_00479780(param_1);
    }
    if (piVar5 != (int *)0x0) {
      if (*(char *)(param_1 + 0x90) == '\x05') {
        FUN_005e13d0(1);
      }
      piVar5 = (int *)piVar5[0x16];
      if ((piVar5 != (int *)0x0) && (*(char *)(param_1 + 0x90) == '\x05')) {
        if (in_ECX == DAT_00b333c4) {
          iVar3 = *piVar5;
          uVar4 = FUN_0065d750(1);
          (**(code **)(iVar3 + 0x114))(uVar4);
        }
        iVar3 = *piVar5;
        uVar4 = FUN_004d8370();
        (**(code **)(iVar3 + 0x114))(uVar4);
      }
      FUN_005ea1a0(in_ECX[0xf]);
      FUN_005ee1b0();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004e1b40(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b5bd8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (in_ECX[0xf] != 0) {
    iVar3 = (**(code **)(*in_ECX + 0x168))(uVar2);
    if (in_ECX == DAT_00b333c4) {
      if (iVar3 != 0) {
        FUN_00479f80(param_1);
      }
      iVar3 = FUN_006600d0((char)DAT_00b333c4[0x162]);
    }
    if (iVar3 == 0) {
      if ((param_1 != 0) && (param_1 != -100)) {
        uVar5 = 0xd;
        uVar4 = FUN_00469330(0);
        FUN_00479450(uVar4,uVar5);
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_e = 0;
        uStack_4 = 0;
        FUN_00402e30(&uStack_14,"%s (%08X)",PTR_s_Shield_00b065bc,*(undefined4 *)(param_1 + 0xc));
        uVar4 = uStack_14;
        FUN_006ff420(uStack_14);
        uStack_4 = 0xffffffff;
        FUN_00401f20(uVar4);
      }
    }
    else {
      FUN_00479f80(param_1);
    }
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      FUN_005ea1a0(in_ECX[0xf]);
    }
    FUN_005ee1b0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004e1c70(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b5bd8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (in_ECX[0xf] != 0) {
    iVar3 = (**(code **)(*in_ECX + 0x168))(uVar2);
    cVar1 = (**(code **)(*in_ECX + 400))();
    if ((cVar1 != '\0') && ((int *)in_ECX[0x16] != (int *)0x0)) {
      iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x33c))(1);
      if (iVar4 == 0) {
        if (in_ECX == DAT_00b333c4) {
          if (iVar3 != 0) {
            FUN_0047a2c0(param_1);
          }
          iVar3 = FUN_006600d0((char)DAT_00b333c4[0x162]);
        }
        if (iVar3 == 0) {
          iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b03518,&PTR_PTR_00b036dc,0);
          if (iVar3 != 0) {
            uVar6 = 0xe;
            uVar5 = FUN_00469330(0);
            FUN_00479450(uVar5,uVar6);
            uStack_14 = 0;
            uStack_10 = 0;
            uStack_e = 0;
            uStack_4 = 0;
            FUN_00402e30(&uStack_14,"%s (%08X)",PTR_s_Torch_00b065c0,*(undefined4 *)(param_1 + 0xc))
            ;
            FUN_006ff420(uStack_14);
            uStack_4 = 0xffffffff;
            FUN_00402da0();
          }
        }
        else {
          FUN_0047a2c0(param_1);
        }
        (**(code **)(*(int *)in_ECX[0x16] + 0x348))();
        FUN_005ea1a0(in_ECX[0xf]);
        FUN_005ee1b0();
        if (in_ECX == DAT_00b333c4) {
          FUN_006637c0();
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004e1df0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b6958;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (in_ECX[0xf] != 0) {
    iVar3 = (**(code **)(*in_ECX + 0x168))(uVar2);
    iStack_20 = 1;
    iStack_1c = iVar3;
    if (in_ECX != DAT_00b333c4) goto LAB_004e1e7d;
    iStack_20 = 2;
    do {
      if ((in_ECX == DAT_00b333c4) && (iStack_20 == 1)) {
        iVar3 = FUN_006600d0((char)DAT_00b333c4[0x162]);
        iStack_1c = iVar3;
      }
LAB_004e1e7d:
      if (iVar3 == 0) {
        if ((param_1 != 0) && ((int *)(param_1 + 0x30) != (int *)0x0)) {
          uVar4 = (**(code **)(*(int *)(param_1 + 0x30) + 0x14))(0xc);
          FUN_00479450(uVar4);
          uStack_14 = 0;
          uStack_10 = 0;
          uStack_e = 0;
          uStack_4 = 0;
          FUN_00402e30(&uStack_14,"%s (%08X)",PTR_s_Quiver_00b065b8,*(undefined4 *)(param_1 + 0xc));
          uVar4 = uStack_14;
          FUN_006ff420(uStack_14);
          uStack_4 = 0xffffffff;
          FUN_00401f20(uVar4);
          uStack_14 = 0;
          uStack_e = 0;
          uStack_10 = 0;
          iVar3 = iStack_1c;
        }
      }
      else {
        FUN_00479c40(param_1);
      }
      cVar1 = (**(code **)(*in_ECX + 400))();
      if (cVar1 != '\0') {
        FUN_005f8300(iVar3,0);
      }
      iStack_20 = iStack_20 + -1;
    } while (iStack_20 != 0);
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      FUN_005ea1a0(in_ECX[0xf]);
      FUN_005ee1b0();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004e1f80(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x40) != 0) {
    cVar1 = FUN_004c97f0();
    iVar2 = DAT_00b35c24;
    if (cVar1 != '\0') {
      iVar2 = FUN_00424180();
    }
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x24) != 0)) {
      uVar3 = FUN_005369b0(in_ECX);
      FUN_00536d30(uVar3);
      FUN_005374f0(in_ECX);
    }
  }
  return;
}



void FUN_004e1fd0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  int *piVar7;
  int *in_ECX;
  
  if (((in_ECX[0x10] != 0) && (cVar1 = *(char *)(in_ECX[0x10] + 0x26), cVar1 != '\x06')) &&
     (cVar1 != '\x05')) {
    return;
  }
  piVar2 = (int *)(**(code **)(*in_ECX + 0x154))();
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar3 = FUN_00560920(&DAT_00b35408,piVar2);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    cVar1 = (**(code **)(*in_ECX + 400))();
    piVar7 = piVar2;
    if (((cVar1 == '\0') && (iVar4 = FUN_004a05e0(piVar2), iVar4 == 0)) &&
       ((iVar3 != 0 && ((*(short *)(iVar3 + 0xb6) != 0 && (iVar4 = FUN_00405790(0), iVar4 != 0))))))
    {
      piVar7 = (int *)FUN_00405790(0);
      iVar4 = FUN_004a05e0(piVar7);
      if ((iVar4 == 0) && ((1 < *(ushort *)(iVar3 + 0xb6) && (iVar3 = FUN_00405790(1), iVar3 != 0)))
         ) {
        piVar7 = (int *)FUN_00405790(1);
      }
    }
  }
  else {
    if (*(short *)(iVar3 + 0xb6) == 0) goto LAB_004e2112;
    piVar7 = (int *)**(undefined4 **)(iVar3 + 0xb0);
  }
  if (piVar7 != (int *)0x0) {
    if (in_ECX[0x10] == 0) {
      return;
    }
    cVar1 = FUN_004c97f0();
    piVar5 = DAT_00b35c24;
    if (cVar1 != '\0') {
      piVar5 = (int *)FUN_00424180();
    }
    if (piVar5 == (int *)0x0) {
      return;
    }
    (**(code **)(*piVar5 + 0x94))(piVar7,piVar2);
    if ((in_ECX[2] & 0x100U) != 0) {
      FUN_0088cf90(piVar2,1,1,1);
      in_ECX[2] = in_ECX[2] & 0xfffffeff;
    }
    FUN_004d8f20(piVar2);
    return;
  }
LAB_004e2112:
  puVar6 = (undefined *)(**(code **)(*piVar2 + 4))();
  if (puVar6 != (undefined *)0x0) {
    while (puVar6 != &DAT_00b3a02c) {
      puVar6 = *(undefined **)(puVar6 + 4);
      if (puVar6 == (undefined *)0x0) {
        return;
      }
    }
    if ((in_ECX[0x10] != 0) && (piVar7 = (int *)FUN_004440c0(), piVar7 != (int *)0x0)) {
      (**(code **)(*piVar7 + 0x90))(piVar2,0,0,0,0);
    }
  }
  return;
}



void FUN_004e2160(int *param_1,byte param_2)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  byte bVar14;
  float10 fVar15;
  ulonglong uVar16;
  undefined8 local_78;
  float local_70;
  undefined4 uStack_68;
  undefined4 *local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  
  puVar4 = (undefined4 *)FUN_00452a60();
  local_64 = puVar4;
  piVar5 = (int *)FUN_004dc270();
  if (piVar5 == (int *)0x0) {
    return;
  }
  if ((param_2 & 1) == 0) goto LAB_004e2686;
  local_60 = piVar5[0x10];
  if (local_60 == 0) goto LAB_004e249c;
  local_78 = *(double *)(puVar4 + 0x22);
  local_70 = (float)puVar4[0x24];
  iVar6 = FUN_00983ffd((double)(float)puVar4[0x22]);
  if (iVar6 == 0) {
LAB_004e23bb:
    iVar6 = (**(code **)(*piVar5 + 0x154))();
    local_78._0_4_ = (float)iVar6;
    if (iVar6 != 0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar5 + 0xf4))();
      *(undefined4 *)(iVar6 + 0x54) = *puVar4;
      *(undefined4 *)(iVar6 + 0x58) = puVar4[1];
      *(undefined4 *)(iVar6 + 0x5c) = puVar4[2];
      puVar9 = &DAT_00b26dc4;
      puVar13 = (undefined4 *)(iVar6 + 0x30);
      for (iVar12 = 9; puVar4 = local_64, iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar13 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar13 = puVar13 + 1;
      }
    }
    FUN_00897a20((float)local_78,1);
    FUN_00707370(0,1);
    local_78 = (double)CONCAT44(local_78._4_4_,param_1[4]);
    if (param_1[4] != 0) {
      fVar15 = (float10)FUN_004d6a70();
      local_64 = (undefined4 *)(float)(fVar15 * (float10)0.25);
      if ((float)local_64 <= 5.0) {
        (**(code **)(*param_1 + 0x70))(6,0);
        *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xfffb;
        uVar7 = (**(code **)(*piVar5 + 0xd4))(piVar5[3]);
        FUN_004a7a60("Disabling collision on ref \'%s\' (%08X).",uVar7);
      }
      else {
        FUN_004d6b70();
      }
    }
  }
  else {
    iVar6 = FUN_00983ffd((double)local_78._4_4_);
    if ((iVar6 == 0) || (iVar6 = FUN_00983ffd((double)local_70), iVar6 == 0)) goto LAB_004e23bb;
    iVar6 = __isnan((double)(float)local_78);
    if (iVar6 != 0) goto LAB_004e23bb;
    iVar6 = __isnan((double)local_78._4_4_);
    if ((iVar6 != 0) || (iVar6 = __isnan((double)local_70), iVar6 != 0)) goto LAB_004e23bb;
    cVar2 = FUN_004c97f0();
    if (cVar2 == '\0') {
      iVar6 = FUN_004ce3c0();
      if (iVar6 != 0) {
        FUN_004ce3c0();
        pfVar8 = (float *)FUN_004c46b0();
        fVar1 = *pfVar8 - 128.0;
        local_78 = (double)CONCAT44(local_78._4_4_,fVar1);
        if ((float)puVar4[0x24] < fVar1) {
          local_78 = (double)fVar1;
          iVar6 = (**(code **)(*piVar5 + 0xf4))();
          bVar14 = *(float *)(iVar6 + 8) < (float)local_78 |
                   (byte)((ushort)((ushort)(NAN(*(float *)(iVar6 + 8)) || NAN((float)local_78)) <<
                                  10) >> 8);
          goto LAB_004e2361;
        }
      }
    }
    else {
      uVar7 = FUN_004c9be0();
      iVar6 = FUN_00441800(uVar7,2);
      if (iVar6 != 0) {
        local_50 = *(undefined4 *)(iVar6 + 0x20);
        local_4c = *(undefined4 *)(iVar6 + 0x24);
        local_48 = *(float *)(iVar6 + 0x28);
        local_44 = *(float *)(iVar6 + 0x2c);
        cVar2 = FUN_008aa390();
        if ((cVar2 != '\0') && (local_44 < local_48 - (float)puVar4[0x24])) {
          local_78 = (double)local_48;
          iVar6 = (**(code **)(*piVar5 + 0xf4))();
          fVar1 = (float)local_78 - *(float *)(iVar6 + 8);
          bVar14 = local_44 < fVar1 |
                   (byte)((ushort)((ushort)(NAN(local_44) || NAN(fVar1)) << 10) >> 8);
LAB_004e2361:
          if ((POPCOUNT(bVar14) & 1U) != 0) {
            local_78 = (double)CONCAT44(DAT_00b3f9ac,DAT_00b3f9a8);
            local_70 = DAT_00b3f9b0;
            FUN_004d5d70(&local_78,&local_5c);
            (**(code **)(*piVar5 + 0xf8))((float)local_78,local_78._4_4_,local_70);
          }
          goto LAB_004e23bb;
        }
      }
    }
  }
LAB_004e249c:
  puVar9 = (undefined4 *)(**(code **)(*piVar5 + 0x174))();
  local_58 = puVar9[1];
  local_54 = puVar9[2];
  uVar7 = *puVar9;
  uVar3 = FUN_0046b5c0();
  iVar6 = puVar4[0x23];
  iVar12 = puVar4[0x24];
  local_64 = (undefined4 *)CONCAT31(local_64._1_3_,uVar3);
  piVar5[0xb] = puVar4[0x22];
  piVar5[0xc] = iVar6;
  piVar5[0xd] = iVar12;
  (**(code **)(*piVar5 + 0x40))();
  FUN_0046b5c0(uStack_68);
  (**(code **)(*piVar5 + 0x40))(8);
  iVar6 = (**(code **)(*piVar5 + 0x170))();
  if ((*(char *)(iVar6 + 4) == '\x1a') && (((uint)piVar5[2] >> 7 & 1) == 0)) {
    local_64 = (undefined4 *)piVar5[0x10];
    iVar6 = (**(code **)(*piVar5 + 0x174))();
    local_78 = (double)*(float *)(iVar6 + 8);
    fVar15 = (float10)FUN_004cace0();
    if ((float10)local_78 < fVar15) {
      FUN_0046ab60();
      (**(code **)(*piVar5 + 0x154))();
      FUN_004de1c0();
      piVar10 = (int *)FUN_0041e650();
      if ((piVar10 != (int *)0x0) && (*piVar10 != 0)) {
        FUN_007b4280(0,*piVar10);
        FUN_007c7dc0();
      }
    }
  }
  if (*(int *)(DAT_00b333a0 + 0x34) == 0) {
    uVar11 = FUN_0043f270();
    local_78 = (double)CONCAT44(local_78._4_4_,uVar11);
    cVar2 = (**(code **)(*piVar5 + 400))();
    if (cVar2 != '\0') {
      FUN_005e1360();
    }
    local_64 = (undefined4 *)(**(code **)(*piVar5 + 0x174))();
    uVar16 = (ulonglong)local_78 & 0xffffffff;
    iVar6 = (**(code **)(*piVar5 + 0x174))((float)local_78,0);
    iVar6 = FUN_0044a270(*local_64,*(undefined4 *)(iVar6 + 4),uVar16);
    if (iVar6 != local_60) {
      if (iVar6 == 0) {
        uVar3 = FUN_0046b5c0();
        local_60 = CONCAT31(local_60._1_3_,uVar3);
        FUN_004d8a30(uVar7,local_58,local_54);
        FUN_0046b5c0();
        puVar4[0x15] = uVar7;
        puVar4[0x16] = local_58;
        puVar4[0x17] = local_54;
        (**(code **)(*param_1 + 0x70))(6,0);
      }
      else {
        uVar3 = FUN_0046b5c0();
        local_60 = CONCAT31(local_60._1_3_,uVar3);
        FUN_004dd4b0(piVar5,0,(float)local_78);
        FUN_0046b5c0(local_60);
      }
    }
  }
LAB_004e2686:
  if ((param_2 & 2) != 0) {
    FUN_00711300(&local_5c,&local_58,&local_54);
    uVar3 = FUN_0046b5c0();
    local_60 = CONCAT31(local_60._1_3_,uVar3);
    piVar5[8] = local_5c;
    piVar5[9] = local_58;
    piVar5[10] = local_54;
    (**(code **)(*piVar5 + 0x40))();
    FUN_0046b5c0(local_64);
    (**(code **)(*piVar5 + 0x40))(8);
  }
  return;
}



char FUN_004e26f0(int *param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  undefined1 auStack_4 [4];
  
  if (param_1 != (int *)0x0) {
    pcVar1 = (char *)param_1[2];
    cVar3 = '\0';
    if (pcVar1 != (char *)0x0) {
      iVar5 = __strnicmp(pcVar1,"FlameNode",9);
      if (iVar5 == 0) {
        piVar9 = (int *)0x0;
        iVar5 = _isdigit((int)pcVar1[9]);
        if (iVar5 == 0) {
          iVar5 = _isalpha((int)pcVar1[9]);
          if (iVar5 != 0) {
            iVar5 = _tolower((int)pcVar1[9]);
            piVar9 = (int *)FUN_0046b250(iVar5 + -0x39);
          }
        }
        else {
          piVar9 = (int *)FUN_0046b250(pcVar1[9] + -0x12);
        }
        uVar10 = 0;
        if (*(short *)((int)param_1 + 0xb6) != 0) {
          do {
            if ((((uVar10 < *(ushort *)((int)param_1 + 0xb6)) &&
                 (piVar2 = *(int **)(param_1[0x2c] + uVar10 * 4), piVar2 != (int *)0x0)) &&
                (iVar5 = (**(code **)(*piVar2 + 8))(), iVar5 != 0)) &&
               (iVar5 = _strncmp((char *)piVar2[2],"BASE",4), iVar5 == 0)) {
              (**(code **)(*piVar2 + 0x8c))(auStack_4,uVar10);
              FUN_007016a0();
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(ushort *)((int)param_1 + 0xb6));
        }
        if (piVar9 != (int *)0x0) {
          if (*(ushort *)(piVar9 + 0xb) == 0xffff) {
            pcVar6 = (char *)piVar9[10];
            pcVar1 = pcVar6 + 1;
            do {
              cVar4 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar4 != '\0');
            uVar10 = (int)pcVar6 - (int)pcVar1;
          }
          else {
            uVar10 = (uint)*(ushort *)(piVar9 + 0xb);
          }
          if ((uVar10 != 0) && (iVar5 = (**(code **)(*piVar9 + 0x114))(0), iVar5 != 0)) {
            iVar7 = FUN_0047df80(0);
            FUN_004de3c0(iVar5,(float)(iVar7 % 1000) / 100.0);
            (**(code **)(*param_1 + 0x84))(iVar5,1);
            cVar3 = '\x01';
          }
        }
      }
      else {
        iVar5 = __stricmp(pcVar1,"FlameCap");
        if (iVar5 == 0) {
          *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xfffe;
        }
      }
    }
    uVar10 = 0;
    if (*(short *)((int)param_1 + 0xb6) != 0) {
      do {
        if (((uVar10 < *(ushort *)((int)param_1 + 0xb6)) &&
            (piVar9 = *(int **)(param_1[0x2c] + uVar10 * 4), piVar9 != (int *)0x0)) &&
           ((puVar8 = (undefined4 *)(**(code **)(*piVar9 + 4))(), puVar8 == &DAT_00b3fab0 &&
            (cVar4 = FUN_004e26f0(piVar9), cVar4 != '\0')))) {
          cVar3 = '\x01';
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ushort *)((int)param_1 + 0xb6));
    }
    if (cVar3 != '\0') {
      *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xffef | 2;
    }
    return cVar3;
  }
  return '\0';
}



void FUN_004e26ff(undefined4 param_1,undefined4 param_2,float param_3)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  int *unaff_EDI;
  
  pcVar1 = (char *)unaff_EDI[2];
  param_3 = (float)((uint)param_3 & 0xffffff00);
  if (pcVar1 != (char *)0x0) {
    iVar4 = __strnicmp(pcVar1,"FlameNode",9);
    if (iVar4 == 0) {
      piVar8 = (int *)0x0;
      iVar4 = _isdigit((int)pcVar1[9]);
      if (iVar4 == 0) {
        iVar4 = _isalpha((int)pcVar1[9]);
        if (iVar4 != 0) {
          iVar4 = _tolower((int)pcVar1[9]);
          piVar8 = (int *)FUN_0046b250(iVar4 + -0x39);
        }
      }
      else {
        piVar8 = (int *)FUN_0046b250(pcVar1[9] + -0x12);
      }
      uVar9 = 0;
      if (*(short *)((int)unaff_EDI + 0xb6) != 0) {
        do {
          if ((((uVar9 < *(ushort *)((int)unaff_EDI + 0xb6)) &&
               (piVar2 = *(int **)(unaff_EDI[0x2c] + uVar9 * 4), piVar2 != (int *)0x0)) &&
              (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 != 0)) &&
             (iVar4 = _strncmp((char *)piVar2[2],"BASE",4), iVar4 == 0)) {
            (**(code **)(*piVar2 + 0x8c))(&param_1,uVar9);
            FUN_007016a0();
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ushort *)((int)unaff_EDI + 0xb6));
      }
      if (piVar8 != (int *)0x0) {
        if (*(ushort *)(piVar8 + 0xb) == 0xffff) {
          pcVar5 = (char *)piVar8[10];
          pcVar1 = pcVar5 + 1;
          do {
            cVar3 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar3 != '\0');
          uVar9 = (int)pcVar5 - (int)pcVar1;
        }
        else {
          uVar9 = (uint)*(ushort *)(piVar8 + 0xb);
        }
        if ((uVar9 != 0) && (iVar4 = (**(code **)(*piVar8 + 0x114))(0), iVar4 != 0)) {
          iVar6 = FUN_0047df80(0);
          param_3 = (float)(iVar6 % 1000) / 100.0;
          FUN_004de3c0(iVar4,param_3);
          (**(code **)(*unaff_EDI + 0x84))(iVar4,1);
          param_3 = (float)CONCAT31(param_3._1_3_,1);
        }
      }
    }
    else {
      iVar4 = __stricmp(pcVar1,"FlameCap");
      if (iVar4 == 0) {
        *(ushort *)(unaff_EDI + 6) = *(ushort *)(unaff_EDI + 6) & 0xfffe;
      }
    }
  }
  uVar9 = 0;
  if (*(short *)((int)unaff_EDI + 0xb6) != 0) {
    do {
      if (((uVar9 < *(ushort *)((int)unaff_EDI + 0xb6)) &&
          (piVar8 = *(int **)(unaff_EDI[0x2c] + uVar9 * 4), piVar8 != (int *)0x0)) &&
         ((puVar7 = (undefined4 *)(**(code **)(*piVar8 + 4))(), puVar7 == &DAT_00b3fab0 &&
          (cVar3 = FUN_004e26f0(piVar8), cVar3 != '\0')))) {
        param_3 = (float)CONCAT31(param_3._1_3_,1);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(ushort *)((int)unaff_EDI + 0xb6));
  }
  if (param_3._0_1_ != '\0') {
    *(ushort *)(unaff_EDI + 6) = *(ushort *)(unaff_EDI + 6) & 0xffef | 2;
  }
  return;
}



void FUN_004e2900(byte param_1)

{
  FUN_004dee70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004e2920(void)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  LONG LVar7;
  int *in_ECX;
  undefined4 unaff_EBP;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b5c1e;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = (int)&PTR_FUN_00a46c44;
  in_ECX[6] = (int)&PTR_FUN_00a46c38;
  iVar1 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  *(undefined1 *)(iVar1 + 0x185) = 0;
  local_4 = 2;
  if (((uint)in_ECX[2] >> 0xe & 1) == 0) {
    FUN_004e1f80(uVar4);
    FUN_00674f70(in_ECX);
    FUN_0060df00();
    FUN_0045a300(in_ECX);
    iVar5 = FUN_00420260();
    if (iVar5 != 0) {
      FUN_00424b10(in_ECX);
    }
    for (piVar6 = (int *)FUN_004203a0();
        (piVar6 != (int *)0x0 && ((piVar6[1] != 0 || (*piVar6 != 0)))); piVar6 = (int *)piVar6[1]) {
      FUN_00420280(0);
    }
    iVar5 = FUN_004203c0();
    if (iVar5 != 0) {
      FUN_00424c00(in_ECX);
    }
    for (piVar6 = (int *)FUN_00420480();
        (piVar6 != (int *)0x0 && ((piVar6[1] != 0 || (*piVar6 != 0)))); piVar6 = (int *)piVar6[1]) {
      FUN_004203e0(0);
    }
    FUN_004fa540();
    FUN_004416d0(in_ECX);
    if (*(char *)(DAT_00b33a98 + 0xcd4) == '\0') {
      if ((in_ECX[2] & 0x40000U) != 0) {
        FUN_00679c10(in_ECX);
      }
      FUN_00678d90(in_ECX);
    }
    if (((uint)in_ECX[2] >> 0x16 & 1) != 0) {
      FUN_0065c620(in_ECX);
    }
    if (((*(char *)(DAT_00b33a98 + 0xcd4) == '\0') && (in_ECX[7] != 0)) &&
       (iVar5 = (**(code **)(*in_ECX + 0x170))(), *(char *)(iVar5 + 4) == ' ')) {
      FUN_0065c620(in_ECX);
    }
  }
  FUN_0046a9e0(1);
  FUN_004d9b50();
  if (in_ECX[0x10] != 0) {
    FUN_004cecd0(in_ECX);
  }
  cVar3 = FUN_004db4a0();
  if (((cVar3 != '\0') && (DAT_00b33a98 != 0)) &&
     ((*(char *)(DAT_00b33a98 + 0xcd4) == '\0' && (iVar5 = FUN_004ddcb0(), iVar5 != 0)))) {
    FUN_004cecd0(in_ECX);
  }
  iVar5 = FUN_00582160(0,1);
  if (iVar5 != 0) {
    piVar6 = in_ECX;
    FUN_00582160(0,1);
    FUN_0057d1a0(piVar6);
  }
  if (DAT_00b333b4 == in_ECX) {
    DAT_00b333b4 = (int *)0x0;
  }
  if (DAT_00b3b364 == in_ECX) {
    FUN_005a89a0(0);
  }
  if (DAT_00b333c4 != 0) {
    FUN_00663fa0(in_ECX);
  }
  *(char *)(iVar1 + 0x185) = (char)((uint)unaff_EBP >> 0x18);
  puStack_8._0_1_ = 1;
  FUN_00422f00();
  puVar2 = (undefined4 *)in_ECX[0xf];
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  if (((puVar2 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar2 + 1), LVar7 == 0)) &&
     (puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = (int)in_ECX;
  return;
}



uint FUN_004e2bf0(uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *in_ECX;
  ushort uVar8;
  uint uVar9;
  
  uVar2 = param_1;
  uVar5 = FUN_0046ac50(param_1);
  param_1 = uVar5 & 0xffff;
  uVar5 = uVar5 & 0xffff;
  cVar3 = FUN_0045a170();
  uVar9 = uVar5;
  if (cVar3 != '\0') {
    param_1 = param_1 + 6;
    uVar9 = param_1 & 0xffff;
  }
  if ((uVar2 & 0x8000000) != 0) {
    FUN_0041e6f0();
    sVar4 = FUN_00488580();
    uVar8 = (short)uVar9 + sVar4;
    uVar9 = (uint)uVar8;
    param_1 = (uint)uVar8;
  }
  if ((uVar2 & 0x177577e0) == 0) {
    cVar3 = (**(code **)(*in_ECX + 400))();
    if (cVar3 == '\0') goto LAB_004e2c6f;
  }
  sVar4 = FUN_00421340(uVar2,in_ECX);
  uVar8 = (short)uVar9 + sVar4;
  uVar9 = (uint)uVar8;
  param_1 = (uint)uVar8;
LAB_004e2c6f:
  if ((uVar2 & 0x2000000) != 0) {
    cVar3 = (**(code **)(*in_ECX + 400))();
    if (cVar3 == '\0') {
      sVar4 = FUN_004e0840();
      uVar8 = (short)uVar9 + sVar4 + 2;
      uVar9 = (uint)uVar8;
      param_1 = (uint)uVar8;
    }
  }
  if ((uVar2 & 8) != 0) {
    sVar4 = FUN_004e0970(0);
    uVar8 = (short)uVar9 + sVar4 + 2;
    uVar9 = (uint)uVar8;
    param_1 = (uint)uVar8;
  }
  if ((0x42 < *(byte *)(DAT_00b33b00 + 0x7c)) && ((uVar2 & 0x10) != 0)) {
    uVar9 = param_1 + 4 & 0xffff;
  }
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar6 = (int *)FUN_0046b250(*puVar1);
      uVar7 = (**(code **)(*piVar6 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0x6e2,"..\\TES Shared\\TESObjectREFR.cpp")
      ;
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,uVar9 - uVar5,*puVar1,uVar7);
      return uVar9;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",uVar9 - uVar5,0x6e2,
                 "..\\TES Shared\\TESObjectREFR.cpp");
  }
  return uVar9;
}



void FUN_004e2d60(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  int *piVar6;
  undefined4 uVar7;
  int *in_ECX;
  short *local_1c;
  undefined4 local_18;
  undefined1 auStack_14 [2];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar4 = param_1;
  FUN_0046b5e0(param_1);
  local_18 = 0;
  iVar1 = *(int *)(DAT_00b33b00 + 0x14);
  local_1c = (short *)0x0;
  cVar5 = FUN_0045a170();
  if (cVar5 != '\0') {
    param_1 = 0x4b4f4c42;
    FUN_0045b9a0(&param_1,4);
    local_1c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_18,2);
  }
  if ((uVar4 & 0x8000000) != 0) {
    FUN_0041e6f0();
    FUN_00488650();
  }
  if ((uVar4 & 0x177577e0) == 0) {
    cVar5 = (**(code **)(*in_ECX + 400))();
    if (cVar5 == '\0') goto LAB_004e2dfb;
  }
  FUN_00421a00(uVar4,in_ECX);
LAB_004e2dfb:
  if ((uVar4 & 0x2000000) != 0) {
    cVar5 = (**(code **)(*in_ECX + 400))();
    if (cVar5 == '\0') {
      param_1 = FUN_004e0840();
      param_1 = param_1 & 0xffff;
      FUN_0046ac70(&param_1,2);
      if ((short)param_1 != 0) {
        FUN_004e08d0();
      }
    }
  }
  if ((uVar4 & 8) != 0) {
    auStack_14[0] = 0;
    uStack_12 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
    uStack_4 = 0;
    param_1 = FUN_004e0970(auStack_14);
    param_1 = param_1 & 0xffff;
    FUN_0046ac70(&param_1,2);
    if ((short)param_1 != 0) {
      FUN_004e0a40(auStack_14);
    }
  }
  if ((0x42 < *(byte *)(DAT_00b33b00 + 0x7c)) && ((uVar4 & 0x10) != 0)) {
    FUN_0046ac70(in_ECX + 0xe,4);
  }
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar3 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar3 - iVar1,0x713,
                   "..\\TES Shared\\TESObjectREFR.cpp");
    }
    else {
      piVar6 = (int *)FUN_0046b250(*puVar2);
      uVar7 = (**(code **)(*piVar6 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0x713,"..\\TES Shared\\TESObjectREFR.cpp")
      ;
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar3 - iVar1,*puVar2,uVar7);
    }
  }
  cVar5 = FUN_0045a170();
  if (cVar5 != '\0') {
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_1c + 0xffffU < uVar4) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   "..\\TES Shared\\TESObjectREFR.cpp",0x713);
    }
    *local_1c = (short)uVar4 - (short)local_1c;
  }
  return;
}



void FUN_004e2f70(char param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  byte *pbVar5;
  uint uVar6;
  undefined *puVar7;
  int in_ECX;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int *local_10;
  
  iVar2 = *(int *)(in_ECX + 0x3c);
  iVar11 = 0;
  iVar12 = 0;
  if ((((iVar2 != 0) && (*(short *)(iVar2 + 0xb6) != 0)) &&
      (iVar9 = **(int **)(iVar2 + 0xb0), iVar9 != 0)) &&
     (((*(int *)(iVar9 + 0xc) != 0 &&
       (iVar12 = FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(iVar9 + 0xc)), iVar12 != 0)) &&
      ((pbVar5 = (byte *)FUN_00420fd0(), pbVar5 != (byte *)0x0 &&
       (uVar6 = 0, *(short *)(iVar12 + 0x46) != 0)))))) {
    local_10 = *(int **)(iVar12 + 0x40);
    do {
      iVar11 = *local_10;
      if (iVar11 != 0) {
        pbVar8 = *(byte **)(iVar11 + 8);
        pbVar10 = pbVar5;
        do {
          bVar1 = *pbVar8;
          bVar13 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_004e3030:
            iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_004e3035;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar8[1];
          bVar13 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_004e3030;
          pbVar8 = pbVar8 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar1 != 0);
        iVar9 = 0;
LAB_004e3035:
        if (iVar9 == 0) {
          FUN_004715c0(0);
          *(ushort *)(iVar12 + 8) = *(ushort *)(iVar12 + 8) | 8;
          if (*(int *)(iVar11 + 0x44) == 0) {
            FUN_006c9ba0(0,0,0x3f800000,0,0,0);
          }
          *(undefined4 *)(iVar11 + 0x48) = *(undefined4 *)(iVar11 + 0x30);
          FUN_00707370(*(undefined4 *)(iVar11 + 0x30),1);
          FUN_004e0d90(iVar11);
          FUN_006c9cb0(0,0);
          *(ushort *)(iVar12 + 8) = *(ushort *)(iVar12 + 8) & 0xfff7;
          break;
        }
      }
      iVar11 = 0;
      local_10 = local_10 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(iVar12 + 0x46));
  }
  if (param_1 == '\0') {
    if (iVar12 != 0) {
      FUN_004715c0(0);
    }
    FUN_004da8f0(iVar12,iVar2,0xbf800000);
    if ((iVar2 == 0) || (piVar3 = *(int **)(iVar2 + 0xc), piVar3 == (int *)0x0)) {
      uVar6 = 0;
    }
    else {
      for (puVar7 = (undefined *)(**(code **)(*piVar3 + 4))(); puVar7 != (undefined *)0x0;
          puVar7 = *(undefined **)(puVar7 + 4)) {
        if (puVar7 == &DAT_00b3cac0) {
          bVar1 = 1;
          goto LAB_004e3120;
        }
      }
      bVar1 = 0;
LAB_004e3120:
      uVar6 = -(uint)bVar1 & (uint)piVar3;
      if (uVar6 != 0) {
        FUN_004715c0(0);
      }
    }
    FUN_004da8f0(uVar6,iVar2,0xbf800000);
  }
  if (((iVar11 != 0) && (cVar4 = FUN_00480820(iVar2), cVar4 != '\0')) &&
     (*(int *)(iVar11 + 0x44) == 0)) {
    if (*(short *)(iVar2 + 0xb6) == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = **(int **)(iVar2 + 0xb0);
    }
    iVar12 = FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(iVar12 + 0xc));
    FUN_006c9ba0(0,0,0x3f800000,0,0,0);
    *(ushort *)(iVar12 + 8) = *(ushort *)(iVar12 + 8) | 8;
    FUN_00707370(*(undefined4 *)(iVar11 + 0x30),1);
    FUN_00480930(iVar2);
  }
  return;
}



void FUN_004e31e0(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *in_ECX;
  char *pcVar5;
  int *piVar6;
  short local_48 [2];
  byte local_44 [2];
  undefined2 local_42;
  undefined2 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  byte abStack_30 [2];
  short sStack_2e;
  short sStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  undefined1 uStack_18;
  undefined4 uStack_14;
  byte *pbStack_10;
  
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x51) {
    FUN_004e0ab0(param_1);
    return;
  }
  iVar4 = in_ECX[0xf];
  if (iVar4 != 0) {
    local_44[0] = 0;
    local_42 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    FUN_0046ac80(local_44,1);
    FUN_0046ac80(local_48,2);
    cVar1 = (**(code **)(*in_ECX + 400))();
    piVar6 = (int *)0x0;
    if (cVar1 != '\0') {
      FUN_005ef9b0((local_44[0] & 8) != 0);
      piVar6 = in_ECX;
    }
    abStack_30[0] = 0;
    sStack_2e = 0;
    sStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    FUN_004e0970(abStack_30);
    if (local_48[0] == (short)(sStack_2c + sStack_2e)) {
      local_38 = iVar4;
      local_34 = FUN_004a05e0(iVar4);
      pbStack_10 = local_44;
      uStack_14 = 0xf;
      uStack_18 = 1;
      cVar1 = (**(code **)(*in_ECX + 400))();
      if (cVar1 != '\0') {
        FUN_0088d070(iVar4,1,1,0);
        FUN_00707370(0,0);
      }
      FUN_0088a7d0(iVar4,auStack_1c,FUN_004dae60);
      if ((piVar6 != (int *)0x0) && (cVar1 = (**(code **)(*piVar6 + 0x1a0))(), cVar1 != '\0')) {
        FUN_008a5580(iVar4,1);
        FUN_0088d070(iVar4,1,1,0);
        iVar4 = (**(code **)(*piVar6 + 0x164))();
        if (iVar4 != 0) {
          FUN_00470fc0(5,0);
          *(undefined4 *)(iVar4 + 0x18) = DAT_00b3f9a8;
          *(undefined4 *)(iVar4 + 0x1c) = DAT_00b3f9ac;
          *(undefined4 *)(iVar4 + 0x20) = DAT_00b3f9b0;
        }
      }
      cVar1 = (**(code **)(*in_ECX + 400))();
      if (cVar1 == '\0') {
        FUN_00707370(0,0);
        return;
      }
    }
    else {
      uVar2 = (**(code **)(*in_ECX + 0xd4))(in_ECX[3],local_48[0],sStack_2c + sStack_2e);
      FUN_004a7a60("Havok data bone count differs on reference %s %08X.  Original count: %i, Current count: %i.  This should only happen with art changes."
                   ,uVar2);
      if ((local_44[0] & 8) != (abStack_30[0] & 8)) {
        pcVar5 = "true";
        if ((abStack_30[0] & 8) == 0) {
          pcVar5 = "false";
        }
        pcVar3 = "true";
        if ((local_44[0] & 8) == 0) {
          pcVar3 = "false";
        }
        FUN_004a7a60("Bone count difference likely due to weapon bone difference.  Saved: %s Current: %s"
                     ,pcVar3,pcVar5);
      }
      FUN_00452170((param_1 & 0xffff) - 3);
      cVar1 = (**(code **)(*in_ECX + 400))();
      if (cVar1 != '\0') {
        FUN_008ab440(iVar4,&DAT_00b3f9a8,1,0,0);
      }
    }
    return;
  }
  uVar2 = (**(code **)(*in_ECX + 0xd4))(in_ECX[3]);
  FUN_004a7a60("Cannot load Havok data for reference %s %08X because it has no 3D.",uVar2);
  FUN_00452170(param_1 & 0xffff);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004e3490(void)

{
  undefined1 auVar1 [4];
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  int *in_ECX;
  undefined4 unaff_EBX;
  char *pcVar15;
  undefined2 *puVar16;
  char *pcVar17;
  int *unaff_FS_OFFSET;
  float10 fVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined1 auStack_22c [3];
  char cStack_229;
  int *piStack_228;
  int iStack_224;
  int *local_220;
  undefined1 auStack_21c [4];
  undefined4 uStack_218;
  undefined2 uStack_214;
  char acStack_212 [254];
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b5c5c;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_22c;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffdc4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_220 = (int *)0x0;
  if ((int *)in_ECX[0xf] != (int *)0x0) {
    local_220 = (int *)(**(code **)(*(int *)in_ECX[0xf] + 8))(uVar5);
  }
  piVar13 = local_220;
  iVar6 = (**(code **)(*in_ECX + 0x168))();
  iStack_224 = 0;
  auStack_21c = (undefined1  [4])iVar6;
  FUN_004d83b0(0);
  if ((piVar13 == (int *)0x0) || (((uint)in_ECX[2] >> 5 & 1) != 0)) goto LAB_004e3f06;
  piStack_228 = (int *)in_ECX[7];
  if (((char)piStack_228[1] == '#') || ((char)piStack_228[1] == '$')) {
    piVar7 = (int *)FUN_009832e6(in_ECX[7],0,&PTR_PTR_00b03248,&PTR_PTR_00b03304,0);
    pcVar8 = (char *)(**(code **)(*piVar7 + 0x14))();
    pcVar9 = _strrchr(pcVar8,0x5c);
    if ((pcVar9 != (char *)0x0) && (iVar10 = __strnicmp(pcVar9 + 1,"Skeleton",8), iVar10 != 0)) {
      uVar11 = (**(code **)(*(int *)in_ECX[7] + 0xd4))(pcVar8);
      FUN_004a7a60("Actor \'%s\' needs to have a \'skeleton*.nif\' model instead of \'%s\'.",uVar11)
      ;
    }
  }
  piVar7 = piStack_228;
  if (*(char *)(in_ECX[7] + 4) == '#') {
    if (iVar6 == 0) goto LAB_004e3e4b;
    FUN_004796f0();
    local_220 = (int *)FUN_00401f00(0xdc);
    uStack_4 = 1;
    if (local_220 == (int *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_00473eb0();
    }
    uStack_4 = 0xffffffff;
    iStack_224 = FUN_004d83b0(uVar11);
    if (((int *)in_ECX[0xf] == (int *)0x0) ||
       (piVar13 = (int *)(**(code **)(*(int *)in_ECX[0xf] + 8))(), local_220 = piVar13,
       piVar13 == (int *)0x0)) {
      uVar11 = (**(code **)(*piStack_228 + 0xd4))(piStack_228[3]);
      FUN_004a7a60("SetAnimation cleared 3D because %s (%08X) was moved",uVar11);
      goto LAB_004e3f06;
    }
    FUN_004e1580();
    fVar18 = (float10)FUN_004d7570();
    piVar7 = piStack_228;
    if (fVar18 <= (float10)0.0) {
      uStack_218 = 0x61746144;
      uStack_214 = 0x5c;
      pcVar8 = auStack_21c + 3;
      do {
        pcVar9 = pcVar8;
        pcVar8 = pcVar9 + 1;
      } while (pcVar9[1] != '\0');
      builtin_strncpy(pcVar9 + 1,"Meshes",7);
      puVar16 = (undefined2 *)(auStack_21c + 3);
      do {
        pcVar8 = (char *)((int)puVar16 + 1);
        puVar16 = (undefined2 *)((int)puVar16 + 1);
      } while (*pcVar8 != '\0');
      iVar6 = *in_ECX;
      *puVar16 = 0x5c;
      uVar11 = (**(code **)(iVar6 + 0x170))();
      pcVar9 = (char *)FUN_0046d3f0(uVar11);
      pcVar8 = pcVar9;
      do {
        cVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      pcVar17 = auStack_21c + 3;
      do {
        pcVar15 = pcVar17 + 1;
        pcVar17 = pcVar17 + 1;
      } while (*pcVar15 != '\0');
      pcVar15 = pcVar9;
      for (uVar5 = (uint)((int)pcVar8 - (int)pcVar9) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar5 = (int)pcVar8 - (int)pcVar9 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar17 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar17 = pcVar17 + 1;
      }
      pcVar8 = _strrchr((char *)&uStack_218,0x5c);
      builtin_strncpy(pcVar8,"\\Idle.KF",9);
      uVar19 = 0;
      uVar11 = (**(code **)(*in_ECX + 0x170))(0);
      uVar11 = FUN_0046d3f0(uVar11);
      uVar19 = FUN_00434850(&uStack_218,uVar11,uVar19);
      builtin_strncpy(pcVar8,"\\Death.KF",10);
      uVar11 = uVar19;
      uVar14 = (**(code **)(*in_ECX + 0x170))(uVar19);
      uVar14 = FUN_0046d3f0(uVar14);
      FUN_00434850(&uStack_218,uVar14,uVar11);
      piVar7 = piStack_228;
    }
    else {
      uVar19 = 0;
      uVar11 = (**(code **)(piStack_228[0x2b] + 0x14))(0);
      uVar19 = FUN_00435830(uVar11,uVar19);
    }
    cVar4 = FUN_00475d80(uVar19,piVar13,in_ECX);
    if (cVar4 == '\0') {
      uVar11 = (**(code **)(*piVar7 + 0xd4))(piVar7[3]);
      FUN_004a7a60("Bad InitAnimation for NPC \'%s\' (%08X). Missing \'Idle\' animation.",uVar11);
    }
    fVar18 = (float10)FUN_004d7570();
    piVar13 = piStack_228;
    if (((float10)0.0 < fVar18) && (cVar4 = FUN_004688b0(), cVar4 != '\0')) {
      pcVar9 = (char *)(**(code **)(piVar13[0x2b] + 0x14))();
      pcVar8 = acStack_114;
      do {
        cVar4 = *pcVar9;
        *pcVar8 = cVar4;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      pcVar8 = _strrchr(acStack_114,0x5c);
      if (pcVar8 != (char *)0x0) {
        pcVar9 = acStack_114;
        *pcVar8 = '\0';
        uVar11 = FUN_006899c0(pcVar9);
        FUN_00476080(uVar11,pcVar9);
      }
    }
    piVar13 = (int *)in_ECX[0x16];
    iVar6 = iStack_224;
    if (piVar13 != (int *)0x0) {
      cVar4 = (**(code **)(*piVar13 + 0x2fc))();
      if (cVar4 != '\0') {
        (**(code **)(*piVar13 + 0x308))(1);
      }
      if ((in_ECX == DAT_00b333c4) &&
         (iVar6 = FUN_006600d0(1), auVar1 = auStack_21c, auStack_21c == (undefined1  [4])iVar6)) {
        iVar6 = *(int *)in_ECX[0x16];
        uVar11 = FUN_0065d750(1);
        uVar11 = FUN_005e0da0(auVar1,uVar11);
        (**(code **)(iVar6 + 0x150))(uVar11);
        iVar6 = iStack_224;
      }
      else {
        auVar1 = auStack_21c;
        iVar6 = *(int *)in_ECX[0x16];
        uVar11 = FUN_004d8370();
        uVar11 = FUN_005e0da0(auVar1,uVar11);
        (**(code **)(iVar6 + 0x150))(uVar11);
        iVar6 = iStack_224;
      }
    }
joined_r0x004e3e31:
    if (iVar6 != 0) {
      FUN_00476d10(in_ECX,0,0xbf800000);
    }
  }
  else {
    if (*(char *)(in_ECX[7] + 4) == '$') {
      auStack_21c = (undefined1  [4])FUN_00401f00(0xdc);
      uStack_4 = 0;
      if (auStack_21c == (undefined1  [4])0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_00473eb0();
      }
      uStack_4 = 0xffffffff;
      iStack_224 = FUN_004d83b0(uVar11);
      if (((int *)in_ECX[0xf] == (int *)0x0) ||
         (piVar13 = (int *)(**(code **)(*(int *)in_ECX[0xf] + 8))(), local_220 = piVar13,
         piVar13 == (int *)0x0)) {
        uVar11 = (**(code **)(*piVar7 + 0xd4))(piVar7[3]);
        FUN_004a7a60("SetAnimation cleared 3D because %s (%08X) was moved",uVar11);
        goto LAB_004e3f06;
      }
      FUN_004e1580();
      fVar18 = (float10)FUN_004d7570();
      if (fVar18 <= (float10)0.0) {
        uStack_218 = 0x61746144;
        uStack_214 = 0x5c;
        pcVar8 = auStack_21c + 3;
        do {
          pcVar9 = pcVar8;
          pcVar8 = pcVar9 + 1;
        } while (pcVar9[1] != '\0');
        builtin_strncpy(pcVar9 + 1,"Meshes",7);
        puVar16 = (undefined2 *)(auStack_21c + 3);
        do {
          pcVar8 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar8 != '\0');
        iVar6 = *in_ECX;
        *puVar16 = 0x5c;
        uVar11 = (**(code **)(iVar6 + 0x170))();
        pcVar9 = (char *)FUN_0046d3f0(uVar11);
        pcVar8 = pcVar9;
        do {
          cVar4 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar4 != '\0');
        pcVar17 = auStack_21c + 3;
        do {
          pcVar15 = pcVar17 + 1;
          pcVar17 = pcVar17 + 1;
        } while (*pcVar15 != '\0');
        pcVar15 = pcVar9;
        for (uVar5 = (uint)((int)pcVar8 - (int)pcVar9) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar5 = (int)pcVar8 - (int)pcVar9 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar17 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar17 = pcVar17 + 1;
        }
        pcVar8 = _strrchr((char *)&uStack_218,0x5c);
        builtin_strncpy(pcVar8,"\\Idle.KF",9);
        uVar19 = 0;
        uVar11 = (**(code **)(*in_ECX + 0x170))(0);
        uVar11 = FUN_0046d3f0(uVar11);
        uVar19 = FUN_00434850(&uStack_218,uVar11,uVar19);
        builtin_strncpy(pcVar8,"\\Death.KF",10);
        uVar11 = uVar19;
        uVar14 = (**(code **)(*in_ECX + 0x170))(uVar19);
        uVar14 = FUN_0046d3f0(uVar14);
        FUN_00434850(&uStack_218,uVar14,uVar11);
        piVar7 = piStack_228;
      }
      else {
        uVar19 = 0;
        uVar11 = (**(code **)(piVar7[0x2b] + 0x14))(0);
        uVar19 = FUN_00435830(uVar11,uVar19);
      }
      iVar6 = iStack_224;
      cVar4 = FUN_00475d80(uVar19,piVar13,in_ECX);
      if (cVar4 == '\0') {
        uVar11 = (**(code **)(*piVar7 + 0xd4))(piVar7[3]);
        FUN_004a7a60("Bad InitAnimation for Creature \'%s\' (%08X). Missing \'Idle\' animation.",
                     uVar11);
      }
      fVar18 = (float10)FUN_004d7570();
      piVar13 = piStack_228;
      if (((float10)0.0 < fVar18) && (cVar4 = FUN_004688b0(), cVar4 != '\0')) {
        pcVar9 = (char *)(**(code **)(piVar13[0x2b] + 0x14))();
        pcVar8 = (char *)&uStack_218;
        do {
          cVar4 = *pcVar9;
          *pcVar8 = cVar4;
          pcVar9 = pcVar9 + 1;
          pcVar8 = pcVar8 + 1;
        } while (cVar4 != '\0');
        pcVar8 = _strrchr((char *)&uStack_218,0x5c);
        if (pcVar8 != (char *)0x0) {
          puVar20 = &uStack_218;
          *pcVar8 = '\0';
          uVar11 = FUN_006899c0(puVar20);
          FUN_00476080(uVar11,puVar20);
        }
      }
      goto joined_r0x004e3e31;
    }
    if (((*(short *)((int)piVar13 + 0xb6) == 0) || (*(int *)piVar13[0x2c] == 0)) ||
       (iVar6 = FUN_00405790(0), *(int *)(iVar6 + 0xc) == 0)) {
      (**(code **)(*piVar13 + 0x60))(0,0);
    }
    else {
      (**(code **)(*in_ECX + 0x48))(0x2000000);
      iVar6 = FUN_00405790(0);
      iVar6 = FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(iVar6 + 0xc));
      if (iVar6 != 0) {
        if (*(char *)(iVar6 + 0x6c) != '\0') {
          bVar3 = *(byte *)(in_ECX[7] + 4);
          uVar11 = (**(code **)(*in_ECX + 0x170))();
          uVar11 = FUN_0046d3f0(uVar11);
          FUN_004a7a60("%s \'%s\' is cumulative. This is not allowed. Re-export to correct this problem."
                       ,(&PTR_DAT_00b05e04)[(uint)bVar3 * 3],uVar11);
        }
        cStack_229 = '\0';
        iVar10 = (**(code **)(*in_ECX + 0x170))();
        if ((iVar10 != 0) &&
           (iVar10 = (**(code **)(*in_ECX + 0x170))(), *(char *)(iVar10 + 4) == '\x18')) {
          uVar2 = FUN_0045a500();
          auStack_21c[0] = uVar2;
          iVar10 = FUN_00420fd0();
          if (iVar10 != 0) {
            FUN_0045a530(1);
          }
          uVar5 = FUN_004533f0(in_ECX,1);
          bVar3 = FUN_004d6e60(uVar5);
          FUN_004de460(bVar3 != ((byte)(uVar5 >> 0x13) & 1),1);
          cStack_229 = '\x01';
          FUN_0045a530(auStack_21c);
        }
        iVar10 = FUN_004715a0(PTR_DAT_00b102e0);
        iVar12 = FUN_004715a0(PTR_s_SpecialIdle_00b10328);
        if (iVar10 == 0) {
          if (iVar12 == 0) {
            if (cStack_229 == '\0') {
              *(ushort *)(iVar6 + 8) = *(ushort *)(iVar6 + 8) | 8;
              FUN_004715c0(0);
              iVar10 = **(int **)(iVar6 + 0x40);
              FUN_00470b20(iVar10,0,0,0x3f800000,0,0);
              *(undefined4 *)(iVar10 + 0x48) = 0xff7fffff;
              FUN_00707370(*(undefined4 *)(iVar10 + 0x2c),1);
            }
            FUN_004715c0(0);
            *(ushort *)(iVar6 + 8) = *(ushort *)(iVar6 + 8) & 0xfff7;
          }
          else {
LAB_004e37d1:
            FUN_00470b20(iVar12,0,0,0x3f800000,0,0);
            *(undefined4 *)(iVar12 + 0x48) = 0xff7fffff;
          }
        }
        else {
          if (*(int *)(iVar10 + 0x24) == 0) {
            FUN_00470b20(iVar10,0,0,0x3f800000,0,0);
            *(undefined4 *)(iVar10 + 0x48) = 0xff7fffff;
          }
          else {
            uVar11 = FUN_0046d3f0(in_ECX[7]);
            FUN_004a7a60("Idle animation must be looping \'%s\'.",uVar11);
          }
          if (iVar12 != 0) goto LAB_004e37d1;
        }
      }
    }
  }
LAB_004e3e4b:
  cVar4 = (**(code **)(*in_ECX + 400))();
  if (cVar4 != '\0') {
    if ((((int *)in_ECX[0x16] != (int *)0x0) &&
        (uVar5 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), uVar5 < 2)) &&
       (piVar13 = (int *)in_ECX[0x16], piVar13 != (int *)0x0)) {
      iVar6 = *piVar13;
      uVar11 = (**(code **)(iVar6 + 0xec))(1,0);
      (**(code **)(iVar6 + 0x104))(uVar11);
      (**(code **)(*piVar13 + 0x114))(unaff_EBX);
      if (in_ECX == DAT_00b333c4) {
        iVar6 = *piVar13;
        uVar11 = FUN_0065d750(1);
        (**(code **)(iVar6 + 0x114))(uVar11);
      }
    }
    iVar6 = FUN_00700010(&DAT_00b3cd7c);
    if (iVar6 != 0) {
      *(ushort *)(iVar6 + 8) = *(ushort *)(iVar6 + 8) | 0x40;
    }
  }
  iVar6 = FUN_0041e620();
  if ((iVar6 != 0) && (iStack_224 != 0)) {
    FUN_00707370(*(undefined4 *)(iVar6 + 0x10),1);
    FUN_0041f5a0();
  }
LAB_004e3f06:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x004e412d) */
/* WARNING: Removing unreachable block (ram,0x004e4142) */
/* WARNING: Removing unreachable block (ram,0x004e418f) */
/* WARNING: Removing unreachable block (ram,0x004e41ae) */
/* WARNING: Removing unreachable block (ram,0x004e41c0) */
/* WARNING: Removing unreachable block (ram,0x004e41d0) */
/* WARNING: Removing unreachable block (ram,0x004e41fa) */
/* WARNING: Removing unreachable block (ram,0x004e4205) */
/* WARNING: Removing unreachable block (ram,0x004e41da) */
/* WARNING: Removing unreachable block (ram,0x004e41f0) */
/* WARNING: Removing unreachable block (ram,0x004e41e6) */
/* WARNING: Removing unreachable block (ram,0x004e4235) */
/* WARNING: Removing unreachable block (ram,0x004e423b) */
/* WARNING: Removing unreachable block (ram,0x004e4244) */
/* WARNING: Removing unreachable block (ram,0x004e426c) */
/* WARNING: Removing unreachable block (ram,0x004e426e) */
/* WARNING: Removing unreachable block (ram,0x004e4279) */
/* WARNING: Removing unreachable block (ram,0x004e42e5) */
/* WARNING: Removing unreachable block (ram,0x004e4313) */
/* WARNING: Removing unreachable block (ram,0x004e4334) */
/* WARNING: Removing unreachable block (ram,0x004e432a) */
/* WARNING: Removing unreachable block (ram,0x004e4336) */
/* WARNING: Removing unreachable block (ram,0x004e430e) */
/* WARNING: Removing unreachable block (ram,0x004e4343) */
/* WARNING: Removing unreachable block (ram,0x004e4357) */
/* WARNING: Removing unreachable block (ram,0x004e435f) */
/* WARNING: Removing unreachable block (ram,0x004e4364) */
/* WARNING: Removing unreachable block (ram,0x004e4377) */
/* WARNING: Removing unreachable block (ram,0x004e4384) */
/* WARNING: Removing unreachable block (ram,0x004e4396) */
/* WARNING: Removing unreachable block (ram,0x004e43a8) */
/* WARNING: Removing unreachable block (ram,0x004e43bf) */
/* WARNING: Removing unreachable block (ram,0x004e43fc) */
/* WARNING: Removing unreachable block (ram,0x004e4405) */
/* WARNING: Removing unreachable block (ram,0x004e441a) */
/* WARNING: Removing unreachable block (ram,0x004e4438) */
/* WARNING: Removing unreachable block (ram,0x004e4445) */
/* WARNING: Removing unreachable block (ram,0x004e4461) */
/* WARNING: Removing unreachable block (ram,0x004e4473) */
/* WARNING: Removing unreachable block (ram,0x004e447e) */
/* WARNING: Removing unreachable block (ram,0x004e4485) */
/* WARNING: Removing unreachable block (ram,0x004e4496) */
/* WARNING: Removing unreachable block (ram,0x004e449e) */
/* WARNING: Removing unreachable block (ram,0x004e44a3) */
/* WARNING: Removing unreachable block (ram,0x004e44ba) */
/* WARNING: Removing unreachable block (ram,0x004e44cf) */
/* WARNING: Removing unreachable block (ram,0x004e44ed) */
/* WARNING: Removing unreachable block (ram,0x004e4533) */
/* WARNING: Removing unreachable block (ram,0x004e457e) */
/* WARNING: Removing unreachable block (ram,0x004e4544) */
/* WARNING: Removing unreachable block (ram,0x004e4605) */
/* WARNING: Removing unreachable block (ram,0x004e4618) */
/* WARNING: Removing unreachable block (ram,0x004e4629) */
/* WARNING: Removing unreachable block (ram,0x004e4632) */
/* WARNING: Removing unreachable block (ram,0x004e4636) */

undefined4 * FUN_004e4080(void)

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
  puStack_8 = &LAB_009b5cab;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff9c;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((*(uint *)(in_ECX + 8) >> 5 & 1) == 0) && ((*(uint *)(in_ECX + 8) >> 0xb & 1) == 0)) {
    puVar1 = *(undefined4 **)(in_ECX + 0x3c);
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
    local_4 = 0;
    if ((puVar1 == (undefined4 *)0x0) && (*(int **)(in_ECX + 0x1c) != (int *)0x0)) {
      uVar3 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x114))();
      FUN_0075fa90(uVar3);
      FUN_004d7d10(0);
      FUN_004d9800(0,uVar2);
    }
    local_4 = 0xffffffff;
    if ((puVar1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar1 + 1), LVar4 == 0)) {
      (**(code **)*puVar1)(1);
    }
    *unaff_FS_OFFSET = local_c;
    return puVar1;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_004e4690(void)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *in_ECX;
  undefined4 uVar7;
  
  if (((uint)in_ECX[2] >> 0xb & 1) == 0) {
    FUN_004e1f80();
    (**(code **)(*in_ECX + 0x90))(1);
    (**(code **)(*in_ECX + 0x40))(0x40000000);
    FUN_0046aba0(1);
    cVar2 = (**(code **)(*in_ECX + 0x188))();
    if ((cVar2 != '\0') && (in_ECX[0x16] != 0)) {
      cVar2 = (**(code **)(*in_ECX + 400))();
      if (cVar2 != '\0') {
        if (in_ECX == *(int **)(DAT_00b333c4 + 0x1e0)) {
          *(undefined4 *)(DAT_00b333c4 + 0x1e0) = 0;
        }
        FUN_005e4b00();
        FUN_006a2160();
        if (0 < DAT_00b3b7d0) {
          FUN_00607b90();
        }
      }
      uVar3 = FUN_00659a00();
      FUN_00674550(in_ECX,uVar3);
      if ((((in_ECX[0x16] != 0) && (*(int *)(in_ECX[0x16] + 8) != 0)) &&
          (cVar2 = FUN_00567770(), cVar2 != '\0')) &&
         (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
        FUN_005eae70();
      }
      if ((int *)in_ECX[0x16] != (int *)0x0) {
        iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x378))();
        if (iVar4 != 0) {
          piVar5 = (int *)in_ECX[0x16];
          uVar7 = 0;
          uVar3 = (**(code **)(*piVar5 + 0x37c))(0);
          (**(code **)(*piVar5 + 0x378))(uVar3);
          FUN_004d7300(uVar3,uVar7);
        }
        if ((undefined4 *)in_ECX[0x16] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)in_ECX[0x16])(1);
        }
        in_ECX[0x16] = 0;
      }
    }
    (**(code **)(*in_ECX + 0x150))(0);
    FUN_00665260(in_ECX);
    for (piVar5 = (int *)FUN_004203a0();
        (piVar5 != (int *)0x0 && ((piVar5[1] != 0 || (*piVar5 != 0)))); piVar5 = (int *)piVar5[1]) {
      cVar2 = FUN_00420340();
      if (cVar2 == '\0') {
        FUN_004e4690();
      }
      else {
        FUN_004dd850();
      }
    }
    puVar6 = (undefined4 *)FUN_00420480();
    if (puVar6 != (undefined4 *)0x0) {
      while (cVar2 = FUN_0046cb60(), cVar2 == '\0') {
        piVar5 = (int *)*puVar6;
        FUN_004203e0(0);
        (**(code **)(*piVar5 + 0x8c))(1);
        (**(code **)(*piVar5 + 0x90))(1);
        (**(code **)(*piVar5 + 0x150))(0);
        puVar1 = (undefined4 *)puVar6[1];
        if (puVar1 == (undefined4 *)0x0) {
          *puVar6 = 0;
        }
        else {
          puVar6[1] = puVar1[1];
          *puVar6 = *puVar1;
          FUN_00401f20(puVar1);
        }
      }
    }
    FUN_004d9310(0);
  }
  return;
}



bool FUN_004e48b0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x154))();
  if (iVar2 != 0) {
    FUN_0088cd50(iVar2,1,0);
  }
  if (in_ECX[0x10] != 0) {
    cVar1 = FUN_004c97f0();
    iVar3 = DAT_00b35c24;
    if (cVar1 != '\0') {
      iVar3 = FUN_00424180();
    }
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x24) != 0)) {
      uVar4 = FUN_005369b0(in_ECX);
      FUN_00536d30(uVar4);
      FUN_005374f0(in_ECX);
    }
  }
  return iVar2 != 0;
}



void FUN_004e4920(byte param_1)

{
  FUN_004e2920();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined2 FUN_004e4970(void)

{
  int in_ECX;
  
  return *(undefined2 *)(in_ECX + 0x30);
}



undefined1 FUN_004e4980(void)

{
  return DAT_00b35f84;
}



void FUN_004e4990(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0x7f7fffff;
  *in_ECX = 0;
  return;
}



void FUN_004e49b0(int param_1,float param_2,float param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  
  if ((param_1 != 0) && (param_2 != 0.0)) {
    iVar3 = 0;
    pfVar2 = (float *)(param_1 + 4);
    do {
      fVar4 = param_2;
      if (param_3 < *pfVar2) {
        fVar1 = *pfVar2;
        fVar4 = pfVar2[-1];
        pfVar2[-1] = param_2;
        *pfVar2 = param_3;
        param_3 = fVar1;
      }
      if (fVar4 == 0.0) {
        return;
      }
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 2;
      param_2 = fVar4;
    } while (iVar3 < 5);
  }
  return;
}



void FUN_004e4a10(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  ushort uVar4;
  
  if (param_1 != *(ushort *)(in_ECX + 8)) {
    uVar4 = (ushort)param_1;
    if (param_1 < *(ushort *)(in_ECX + 10)) {
      uVar3 = param_1 & 0xffff;
      if (uVar4 < *(ushort *)(in_ECX + 10)) {
        do {
          if (*(int *)(*(int *)(in_ECX + 4) + (uVar3 & 0xffff) * 4) != 0) {
            *(undefined4 *)(*(int *)(in_ECX + 4) + (uVar3 & 0xffff) * 4) = 0;
            *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
          }
          uVar3 = uVar3 + 1;
        } while ((ushort)uVar3 < *(ushort *)(in_ECX + 10));
      }
      *(ushort *)(in_ECX + 10) = uVar4;
    }
    iVar1 = *(int *)(in_ECX + 4);
    *(ushort *)(in_ECX + 8) = uVar4;
    if (param_1 == 0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      uVar2 = FUN_00401f00((param_1 & 0xffff) * 4);
      uVar4 = 0;
      *(undefined4 *)(in_ECX + 4) = uVar2;
      if (*(short *)(in_ECX + 10) != 0) {
        do {
          uVar3 = (uint)uVar4;
          uVar4 = uVar4 + 1;
          *(undefined4 *)(uVar3 * 4 + *(int *)(in_ECX + 4)) = *(undefined4 *)(uVar3 * 4 + iVar1);
        } while (uVar4 < *(ushort *)(in_ECX + 10));
      }
      uVar4 = *(ushort *)(in_ECX + 10);
      if (uVar4 < *(ushort *)(in_ECX + 8)) {
        do {
          uVar3 = (uint)uVar4;
          uVar4 = uVar4 + 1;
          *(undefined4 *)(*(int *)(in_ECX + 4) + uVar3 * 4) = 0;
        } while (uVar4 < *(ushort *)(in_ECX + 8));
        FUN_00401f20(iVar1);
        return;
      }
    }
    FUN_00401f20(iVar1);
  }
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a47590;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_004e4b30(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a47598;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_004e4b50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a475b8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_004e4b70(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a47598;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004e4ba0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a475b8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004e4bd0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined2 *)(in_ECX + 0x30) = 0;
  thunk_FUN_0046b090();
  return;
}



undefined4 FUN_004e4c20(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int in_ECX;
  
  cVar2 = FUN_004ca010(*(undefined1 *)(param_1 + 4));
  if (cVar2 == '\0') {
    piVar6 = (int *)(*(code *)**(undefined4 **)(in_ECX + 0x18))();
    uVar7 = (**(code **)(*piVar6 + 0x34))(param_1);
    return uVar7;
  }
  puVar3 = (undefined4 *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b08968,0);
  iVar4 = (**(code **)*puVar3)();
  iVar5 = (*(code *)**(undefined4 **)(in_ECX + 0x18))();
  if (iVar4 == iVar5) {
    bVar1 = *(byte *)(param_1 + 4);
    if (bVar1 < 0x31) {
      return 0;
    }
    if (bVar1 < 0x34) {
      iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
      if ((iVar4 != 0) && (cVar2 = FUN_004db4a0(), cVar2 == '\0')) {
        return 1;
      }
    }
    else if (bVar1 != 0x36) {
      return 0;
    }
    return 0;
  }
  piVar6 = (int *)(*(code *)**(undefined4 **)(in_ECX + 0x18))();
  uVar7 = (**(code **)(*piVar6 + 0x34))(iVar4);
  return uVar7;
}



int FUN_004e4e90(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  iVar1 = -1;
  iVar3 = iVar1;
  if ((*(int *)(in_ECX + 0x24) != 0) && (param_1 != 0)) {
    if (*(ushort *)(in_ECX + 0x30) != 0) {
      piVar2 = *(int **)(*(int *)(in_ECX + 0x24) + 4);
      iVar3 = 0;
      while (*piVar2 != param_1) {
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
        if ((int)(uint)*(ushort *)(in_ECX + 0x30) <= iVar3) {
          return iVar1;
        }
      }
    }
  }
  return iVar3;
}



void FUN_004e4ed0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  while ((*(int *)(in_ECX + 0x2c) != 0 || (*(int *)(in_ECX + 0x28) != 0))) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x28));
    puVar1 = *(undefined4 **)(in_ECX + 0x2c);
    if (puVar1 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x28) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x2c) = puVar1[1];
      *(undefined4 *)(in_ECX + 0x28) = *puVar1;
      FUN_00401f20(puVar1);
    }
  }
  return;
}



void FUN_004e4f20(void)

{
  int *piVar1;
  ushort uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    for (piVar1 = (int *)(in_ECX + 0x28);
        (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
      uVar2 = *(ushort *)*piVar1;
      if ((uVar2 < *(ushort *)(in_ECX + 0x30)) &&
         (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + (uint)uVar2 * 4) != 0)) {
        FUN_004e7fb0((ushort *)*piVar1 + 2);
      }
    }
  }
  return;
}



undefined4 FUN_004e4f70(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x24) != 0) && (param_1 != 0)) {
    for (piVar1 = (int *)(in_ECX + 0x28);
        (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
      if ((*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + (uint)*(ushort *)*piVar1 * 4) == param_1
          ) && (cVar2 = FUN_0047d810((ushort *)*piVar1 + 2,param_2,0x40000000), cVar2 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



void FUN_004e4fe0(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  
  cVar1 = FUN_004e4f70(param_1,param_2);
  if (cVar1 == '\0') {
    iVar2 = FUN_004e4e90(param_1);
    if (iVar2 != -1) {
      puVar3 = (undefined2 *)FUN_00401f00(0x10);
      *puVar3 = (short)iVar2;
      *(undefined4 *)(puVar3 + 2) = *param_2;
      *(undefined4 *)(puVar3 + 4) = param_2[1];
      *(undefined4 *)(puVar3 + 6) = param_2[2];
      FUN_00446cb0(puVar3);
    }
  }
  return;
}



void FUN_004e5040(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  undefined4 *local_c;
  int local_8;
  undefined1 local_4 [4];
  
  uVar3 = 0;
  if (*(uint *)(in_ECX + 0x38) != 0) {
    piVar4 = *(int **)(in_ECX + 0x3c);
    do {
      if (*piVar4 != 0) {
        local_8 = (*(int **)(in_ECX + 0x3c))[uVar3];
        goto joined_r0x004e506d;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < *(uint *)(in_ECX + 0x38));
  }
  local_8 = 0;
joined_r0x004e506d:
  while (local_8 != 0) {
    local_c = (undefined4 *)0x0;
    FUN_00452600(&local_8,local_4,&local_c);
    puVar2 = local_c;
    if (local_c != (undefined4 *)0x0) {
      iVar1 = local_c[1];
      while (iVar1 != 0) {
        iVar1 = *(int *)(puVar2[1] + 4);
        FUN_00401f20(puVar2[1]);
        puVar2[1] = iVar1;
      }
      *puVar2 = 0;
      FUN_00401f20(puVar2);
    }
  }
  FUN_007c2a40();
  return;
}



void FUN_004e50e0(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  iVar1 = (int)param_1;
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    param_1 = (int *)0x0;
    cVar2 = FUN_0055e000(iVar1,&param_1);
    if ((cVar2 == '\0') || (piVar3 = param_1, param_1 == (int *)0x0)) {
      piVar3 = (int *)FUN_00401f00(8);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        *piVar3 = 0;
        piVar3[1] = 0;
      }
      FUN_00452570(iVar1,piVar3);
    }
    for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
      if (*piVar3 == param_2) {
        return;
      }
    }
    FUN_00446cb0(param_2);
  }
  return;
}



void FUN_004e5170(undefined4 param_1,char param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int in_ECX;
  int *local_4;
  
  local_4 = (int *)0x0;
  cVar4 = FUN_0055e000(param_1,&local_4);
  if (cVar4 != '\0') {
    bVar3 = false;
    bVar2 = false;
    for (piVar1 = local_4;
        (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (bVar2 = bVar3, *piVar1 != 0))));
        piVar1 = (int *)piVar1[1]) {
      FUN_0067ed80(param_2 == '\0');
      bVar3 = true;
      bVar2 = true;
    }
    if ((param_2 == '\0') && (bVar2)) {
      (**(code **)(**(int **)(in_ECX + 0x20) + 0x40))(0x1000000);
    }
  }
  return;
}



void FUN_004e5280(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  undefined4 *local_c;
  int local_8;
  undefined1 local_4 [4];
  
  uVar3 = 0;
  if (*(uint *)(in_ECX + 0x48) != 0) {
    piVar4 = *(int **)(in_ECX + 0x4c);
    do {
      if (*piVar4 != 0) {
        local_8 = (*(int **)(in_ECX + 0x4c))[uVar3];
        goto joined_r0x004e52ad;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < *(uint *)(in_ECX + 0x48));
  }
  local_8 = 0;
joined_r0x004e52ad:
  while (local_8 != 0) {
    local_c = (undefined4 *)0x0;
    FUN_00452600(&local_8,local_4,&local_c);
    puVar2 = local_c;
    if (local_c != (undefined4 *)0x0) {
      iVar1 = local_c[1];
      while (iVar1 != 0) {
        iVar1 = *(int *)(puVar2[1] + 4);
        FUN_00401f20(puVar2[1]);
        puVar2[1] = iVar1;
      }
      *puVar2 = 0;
      FUN_00401f20(puVar2);
    }
  }
  FUN_007c2a40();
  return;
}



uint FUN_004e5320(float *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((((int)ROUND(*param_1) >> 9) + 0x7fffU < 0xfffe) &&
     (((int)ROUND(param_1[1]) >> 9) + 0x7fffU < 0xfffe)) {
    uVar1 = ((int)ROUND(*param_1) >> 9) << 0x10 | (int)ROUND(param_1[1]) >> 9 & 0xffffU;
  }
  return uVar1;
}



void FUN_004e5380(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    uVar2 = FUN_004bef40();
    uVar2 = FUN_004e5320(uVar2);
    param_1 = 0;
    FUN_0055e000(uVar2,&param_1);
    if (param_1 == 0) {
      puVar3 = (undefined4 *)FUN_00401f00(8);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
      }
      FUN_00452570(uVar2,puVar3);
    }
    FUN_00446cb0(iVar1);
  }
  return;
}



void FUN_004e5400(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  int iVar3;
  undefined4 *local_4;
  
  if (in_ECX[7] != 0) {
    iVar3 = 0;
    local_4 = in_ECX;
    if (*(short *)(in_ECX + 0xc) != 0) {
      do {
        if (*(int *)(*(int *)(in_ECX[9] + 4) + iVar3 * 4) != 0) {
          FUN_004e8190();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(ushort *)(in_ECX + 0xc));
    }
    if (DAT_00b35f88 != (int *)0x0) {
      (**(code **)(*DAT_00b35f88 + 0x88))(&local_4,in_ECX[7]);
      if (((local_4 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(local_4 + 1), LVar2 == 0)
          ) && (local_4 != (undefined4 *)0x0)) {
        (**(code **)*local_4)(1);
      }
      FUN_00707610();
      FUN_00707980();
      FUN_00707370(0,0);
    }
    puVar1 = (undefined4 *)in_ECX[7];
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      in_ECX[7] = 0;
    }
  }
  return;
}



void FUN_004e54d0(void)

{
  LONG LVar1;
  int in_ECX;
  undefined4 *puVar2;
  undefined4 local_4;
  
  puVar2 = &local_4;
  if ((*(int *)(in_ECX + 0x1c) != 0) && (DAT_00b35f88 != (int *)0x0)) {
    (**(code **)(*DAT_00b35f88 + 0x88))(&local_4,*(int *)(in_ECX + 0x1c));
    if ((puVar2 != (undefined4 *)0x0) &&
       ((LVar1 = InterlockedDecrement(puVar2 + 1), LVar1 == 0 && (puVar2 != (undefined4 *)0x0)))) {
      (**(code **)*puVar2)(1);
    }
    FUN_00707610();
    FUN_00707980();
    FUN_00707370(0,0);
  }
  return;
}



void FUN_004e5550(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x1c) != 0) && (DAT_00b35f88 != (int *)0x0)) {
    (**(code **)(*DAT_00b35f88 + 0x84))(*(int *)(in_ECX + 0x1c),1);
    FUN_00707610();
    FUN_00707980();
    FUN_00707370(0,0);
  }
  return;
}



void FUN_004e55a0(void)

{
  int in_ECX;
  uint uVar1;
  
  if ((*(int *)(in_ECX + 0x24) != 0) && (uVar1 = 0, *(short *)(in_ECX + 0x30) != 0)) {
    do {
      if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + uVar1 * 4) != 0) {
        FUN_0067eda0();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(in_ECX + 0x30));
  }
  return;
}



int FUN_004e55e0(float *param_1)

{
  float fVar1;
  float fVar2;
  ushort *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int *piVar7;
  int local_1c;
  float local_14;
  
  local_1c = 0;
  if (*(int *)(in_ECX + 0x24) == 0) {
    return 0;
  }
  fVar1 = *param_1;
  fVar2 = param_1[1];
  iVar5 = FUN_004c9a80();
  iVar6 = FUN_004c9aa0();
  if (((int)ROUND(fVar1) >> 0xc != iVar5) || ((int)ROUND(fVar2) >> 0xc != iVar6)) {
    piVar7 = (int *)(in_ECX + 0x28);
    local_14 = 3.4028235e+38;
    if (piVar7 != (int *)0x0) {
      do {
        if ((piVar7[1] == 0) && (*piVar7 == 0)) {
          return local_1c;
        }
        puVar3 = (ushort *)*piVar7;
        iVar5 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + (uint)*puVar3 * 4);
        if (((iVar5 != 0) && (cVar4 = FUN_0067ed70(), cVar4 == '\0')) &&
           (fVar1 = (*(float *)(puVar3 + 6) - param_1[2]) * (*(float *)(puVar3 + 6) - param_1[2]) +
                    (*(float *)(puVar3 + 4) - param_1[1]) * (*(float *)(puVar3 + 4) - param_1[1]) +
                    (*(float *)(puVar3 + 2) - *param_1) * (*(float *)(puVar3 + 2) - *param_1),
           fVar1 < local_14)) {
          local_1c = iVar5;
          local_14 = fVar1;
        }
        piVar7 = (int *)piVar7[1];
      } while (piVar7 != (int *)0x0);
      return local_1c;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004e5730(int param_1,int param_2,char param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  float *pfVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int in_ECX;
  uint uVar11;
  float10 fVar12;
  int local_6c;
  int local_68;
  int *local_64;
  int *local_60;
  uint local_5c;
  int local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30 [11];
  
  local_6c = 0;
  *param_5 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (*(int *)(in_ECX + 0x24) != 0)) {
    local_60 = (int *)0x7f7fffff;
    _vector_constructor_iterator_(local_30,8,5,FUN_004e4990);
    pfVar5 = (float *)FUN_004bef40();
    local_3c = *pfVar5;
    local_38 = pfVar5[1];
    local_34 = pfVar5[2];
    local_54 = (int)ROUND(local_3c) >> 9;
    local_44 = in_ECX + 0x44;
    local_50 = ((int)ROUND(local_38) >> 9) - 1;
    local_68 = -1;
    do {
      local_48 = local_68 + local_54;
      local_4c = local_68 + 0x7fff + local_54;
      local_58 = 3;
      uVar11 = local_50;
      do {
        uVar6 = 0;
        if ((local_4c < 0xfffe) && (uVar11 + 0x7fff < 0xfffe)) {
          uVar6 = local_48 << 0x10 | uVar11 & 0xffff;
        }
        local_64 = (int *)0x0;
        local_5c = uVar11;
        FUN_0055e000(uVar6,&local_64);
        for (piVar1 = local_64; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
          iVar10 = *piVar1;
          if (((iVar10 != 0) && (cVar3 = FUN_0067ed70(), cVar3 == '\0')) &&
             ((piVar7 = (int *)FUN_004e7de0(), piVar2 = param_4, piVar7[1] != 0 || (*piVar7 != 0))))
          {
            for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
              if (*piVar2 == iVar10) goto LAB_004e5926;
            }
            uVar4 = FUN_004e8040();
            local_40 = CONCAT31(local_40._1_3_,uVar4);
            FUN_004e8060(0);
            fVar12 = (float10)FUN_0067ede0(param_1,iVar10,param_2);
            local_64 = (int *)(float)fVar12;
            FUN_004e8060(local_40);
            if ((float)local_64 < (float)local_60) {
              local_60 = local_64;
              local_6c = iVar10;
            }
            if (param_3 != '\0') {
              uVar8 = FUN_004bef40(_DAT_00b3a448);
              uVar8 = FUN_004bef40(uVar8);
              iVar9 = FUN_00480520(uVar8);
              if (iVar9 < 0) {
                FUN_004e49b0(local_30,iVar10,local_64);
              }
            }
          }
LAB_004e5926:
          uVar11 = local_5c;
        }
        uVar11 = uVar11 + 1;
        local_58 = local_58 + -1;
      } while (local_58 != 0);
      local_68 = local_68 + 1;
    } while (local_68 < 2);
    if ((local_6c != 0) && (param_3 != '\0')) {
      local_5c = uVar11;
      uVar8 = FUN_004bef40(_DAT_00b3a448);
      uVar8 = FUN_004bef40(uVar8);
      iVar10 = FUN_00480520(uVar8);
      if (iVar10 < 0) {
        pfVar5 = (float *)FUN_004bef40();
        local_3c = *pfVar5;
        local_38 = pfVar5[1];
        local_34 = pfVar5[2];
        iVar10 = 0;
        while (local_30[iVar10 * 2] != 0) {
          uVar8 = FUN_004bef40();
          cVar3 = FUN_00687c30(param_2,&local_3c,uVar8);
          if (cVar3 != '\0') {
            iVar10 = local_30[iVar10 * 2];
            *param_5 = 1;
            return iVar10;
          }
          iVar10 = iVar10 + 1;
          if (4 < iVar10) {
            return local_6c;
          }
        }
      }
    }
  }
  return local_6c;
}



undefined4 FUN_004e5a10(void)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ECX;
  
  uVar2 = 0;
  if (*(int *)(in_ECX + 0x24) != 0) {
    uVar1 = *(ushort *)(*(int *)(in_ECX + 0x24) + 10);
    uVar3 = FUN_0047df80(0);
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + (uVar3 % (uint)uVar1) * 4);
  }
  return uVar2;
}



short FUN_004e5a40(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  short sVar7;
  
  sVar7 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    sVar7 = 6;
  }
  iVar3 = *(int *)(in_ECX + 0x24);
  sVar7 = sVar7 + 2;
  if ((iVar3 != 0) && (uVar6 = 0, *(short *)(iVar3 + 10) != 0)) {
    do {
      if ((*(int *)(*(int *)(iVar3 + 4) + uVar6 * 4) != 0) &&
         (cVar2 = FUN_0067ed70(), cVar2 != '\0')) {
        sVar7 = sVar7 + 2;
      }
      iVar3 = *(int *)(in_ECX + 0x24);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(iVar3 + 10));
  }
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar4 = (int *)FUN_0046b250(*puVar1);
      uVar5 = (**(code **)(*piVar4 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0xd3e,"..\\TES Shared\\TESPathGrid.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,sVar7,*puVar1,uVar5);
      return sVar7;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",sVar7,0xd3e,
                 "..\\TES Shared\\TESPathGrid.cpp");
  }
  return sVar7;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_004e5b10(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  short *psVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int in_ECX;
  uint uVar8;
  int local_14;
  int local_10;
  short *local_c;
  uint local_8 [2];
  
  local_8[1] = 0;
  local_10 = *(int *)(DAT_00b33b00 + 0x14);
  local_c = (short *)0x0;
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    local_8[0] = 0x4b4f4c42;
    FUN_0045b9a0(local_8,4);
    local_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(local_8 + 1,2);
  }
  local_14 = 0;
  puVar1 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&local_14,2);
  iVar5 = *(int *)(in_ECX + 0x24);
  if ((iVar5 != 0) && (uVar8 = 0, *(short *)(iVar5 + 10) != 0)) {
    do {
      if ((*(int *)(*(int *)(iVar5 + 4) + uVar8 * 4) != 0) &&
         (cVar4 = FUN_0067ed70(), cVar4 != '\0')) {
        local_8[0] = uVar8 & 0xffff;
        FUN_0045b9a0(local_8,2);
        local_14 = local_14 + 1;
      }
      iVar5 = *(int *)(in_ECX + 0x24);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)(iVar5 + 10));
  }
  *puVar1 = (undefined2)local_14;
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar5 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar5 - local_10,0xd5d,
                   "..\\TES Shared\\TESPathGrid.cpp");
    }
    else {
      piVar6 = (int *)FUN_0046b250(*puVar2);
      uVar7 = (**(code **)(*piVar6 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0xd5d,"..\\TES Shared\\TESPathGrid.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar5 - local_10,*puVar2,uVar7);
    }
  }
  cVar4 = FUN_0045a170();
  psVar3 = local_c;
  if (cVar4 != '\0') {
    uVar8 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_c + 0xffffU < uVar8) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   "..\\TES Shared\\TESPathGrid.cpp",0xd5d);
    }
    *psVar3 = (short)uVar8 - (short)psVar3;
  }
  return;
}



void FUN_004e5cc0(void)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  ushort local_10 [2];
  ushort auStack_c [2];
  uint local_8;
  int local_4;
  
  local_8 = 0;
  iVar7 = 0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    FUN_004534d0(&local_4,4);
    if (local_4 != 0x4b4f4c42) {
      puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,"..\\TES Shared\\TESPathGrid.cpp",0xd63,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar4 = (int *)FUN_0046b250(*puVar1);
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,"..\\TES Shared\\TESPathGrid.cpp",0xd63,*puVar1,uVar5);
      }
    }
    iVar7 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_8,2);
  }
  FUN_004534d0(local_10,2);
  uVar8 = 0;
  if (local_10[0] != 0) {
    do {
      FUN_004534d0(auStack_c,2);
      iVar2 = *(int *)(in_ECX + 0x24);
      if (((iVar2 != 0) && (auStack_c[0] < *(ushort *)(iVar2 + 10))) &&
         (*(int *)(*(int *)(iVar2 + 4) + (uint)auStack_c[0] * 4) != 0)) {
        FUN_0067ed80(1);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_10[0]);
  }
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar8 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar6 = local_8 & 0xffff;
      if (uVar6 + iVar7 < uVar8) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar8 - uVar6) - iVar7,"..\\TES Shared\\TESPathGrid.cpp",0xd75,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar8 < uVar6 + iVar7) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar6 - uVar8) + iVar7,"..\\TES Shared\\TESPathGrid.cpp",0xd75,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar4 = (int *)FUN_0046b250(*puVar1);
      uVar6 = (local_8 & 0xffff) + iVar7;
      if (uVar6 < uVar8) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar8 - (local_8 & 0xffff)) - iVar7,"..\\TES Shared\\TESPathGrid.cpp",0xd75,
                     *puVar1,uVar5);
        return;
      }
      if (uVar8 < uVar6) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_8 & 0xffff) - uVar8) + iVar7,"..\\TES Shared\\TESPathGrid.cpp",0xd75,
                     *puVar1,uVar5);
        return;
      }
    }
  }
  return;
}



void FUN_004e5f10(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = *(int *)(in_ECX + 0x24);
  if ((iVar1 != 0) && (uVar2 = 0, *(short *)(iVar1 + 10) != 0)) {
    do {
      if (*(int *)(*(int *)(iVar1 + 4) + uVar2 * 4) != 0) {
        FUN_0067ed80(0);
      }
      iVar1 = *(int *)(in_ECX + 0x24);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(iVar1 + 10));
  }
  return;
}



void FUN_004e5f50(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b5d38;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a475f8;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a47598;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004e5fc0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b5d68;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a47618;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a475b8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004e6030(byte param_1)

{
  FUN_004e5f50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004e6050(byte param_1)

{
  FUN_004e5fc0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e6070(void)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5db9;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar2);
  in_ECX[6] = &PTR_LAB_00a45e54;
  *in_ECX = &PTR_FUN_00a47644;
  in_ECX[6] = &PTR_FUN_00a47638;
  in_ECX[7] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  in_ECX[0xd] = &PTR_FUN_00a47598;
  in_ECX[0xe] = 0x25;
  in_ECX[0x10] = 0;
  pvVar3 = (void *)FUN_00401f00(0x94);
  in_ECX[0xf] = pvVar3;
  _memset(pvVar3,0,in_ECX[0xe] * 4);
  in_ECX[0xd] = &PTR_FUN_00a475f8;
  local_4._0_1_ = 2;
  in_ECX[0x11] = &PTR_FUN_00a475b8;
  in_ECX[0x12] = 0x25;
  in_ECX[0x14] = 0;
  pvVar3 = (void *)FUN_00401f00(0x94);
  in_ECX[0x13] = pvVar3;
  _memset(pvVar3,0,in_ECX[0x12] * 4);
  in_ECX[0x11] = &PTR_FUN_00a47618;
  *(undefined1 *)(in_ECX + 1) = 0x34;
  puVar1 = (undefined4 *)in_ECX[7];
  local_4 = CONCAT31(local_4._1_3_,3);
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[7] = 0;
  }
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *(undefined2 *)(in_ECX + 0xc) = 0;
  thunk_FUN_0046b090();
  _DAT_00b35f80 = _DAT_00b35f80 + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004e61c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int *piVar9;
  byte bVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  ushort local_14 [2];
  int local_10;
  int *local_c;
  undefined4 *local_8;
  int *local_4;
  
  iVar12 = 0;
  if ((*(int *)(in_ECX + 0x24) != 0) &&
     (local_10 = in_ECX, FUN_00521be0(), *(short *)(*(int *)(in_ECX + 0x24) + 10) != 0)) {
    FUN_0046b990();
    local_14[0] = *(ushort *)(*(int *)(in_ECX + 0x24) + 10);
    FUN_0046ae40(0x41544144,local_14,2);
    puVar2 = (undefined4 *)FUN_00401f00((uint)local_14[0] * 0x10);
    local_c = (int *)0x0;
    local_8 = puVar2;
    if (local_14[0] != 0) {
      do {
        bVar10 = 0;
        for (piVar3 = (int *)FUN_004e7de0(); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
          if (*piVar3 != 0) {
            bVar10 = bVar10 + 1;
          }
        }
        local_c = (int *)((int)local_c + (uint)bVar10);
        *(byte *)(puVar2 + 3) = bVar10;
        puVar4 = (undefined4 *)FUN_004bef40();
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar2[2] = puVar4[2];
        iVar12 = iVar12 + 1;
        puVar2 = puVar2 + 4;
      } while (iVar12 < (int)(uint)local_14[0]);
    }
    puVar2 = local_8;
    FUN_0046ae40(0x50524750,local_8,(uint)local_14[0] << 4);
    FUN_00401f20(puVar2);
    piVar3 = local_c;
    if (local_c != (int *)0x0) {
      local_4 = (int *)FUN_00401f00(-(uint)((int)(ZEXT48(local_c) * 2 >> 0x20) != 0) |
                                    (uint)(ZEXT48(local_c) * 2));
      iVar12 = 0;
      local_8 = (undefined4 *)0x0;
      if (local_14[0] != 0) {
        do {
          for (piVar3 = (int *)FUN_004e7de0();
              (piVar3 != (int *)0x0 && ((piVar3[1] != 0 || (*piVar3 != 0))));
              piVar3 = (int *)piVar3[1]) {
            iVar13 = -1;
            iVar8 = iVar13;
            if ((*(int *)(local_10 + 0x24) != 0) && (*piVar3 != 0)) {
              iVar7 = 0;
              if (*(ushort *)(local_10 + 0x30) != 0) {
                piVar11 = *(int **)(*(int *)(local_10 + 0x24) + 4);
                do {
                  iVar8 = iVar7;
                  if (*piVar11 == *piVar3) break;
                  iVar7 = iVar7 + 1;
                  piVar11 = piVar11 + 1;
                  iVar8 = iVar13;
                } while (iVar7 < (int)(uint)*(ushort *)(local_10 + 0x30));
              }
            }
            if ((iVar8 < 0) || (0xffff < iVar8)) {
              iVar8 = 0xffff;
            }
            *(short *)((int)local_4 + iVar12 * 2) = (short)iVar8;
            iVar12 = iVar12 + 1;
          }
          local_8 = (undefined4 *)((int)local_8 + 1);
          piVar3 = local_c;
        } while ((int)local_8 < (int)(uint)local_14[0]);
      }
      piVar11 = local_4;
      FUN_0046ae40(0x52524750,local_4,(int)piVar3 * 2);
      FUN_00401f20(piVar11);
    }
    iVar12 = 0;
    piVar11 = (int *)(local_10 + 0x28);
    piVar3 = piVar11;
    if (piVar11 != (int *)0x0) {
      do {
        if (*piVar3 != 0) {
          iVar12 = iVar12 + 1;
        }
        piVar3 = (int *)piVar3[1];
      } while (piVar3 != (int *)0x0);
      if (iVar12 != 0) {
        iVar8 = iVar12 << 4;
        puVar4 = (undefined4 *)thunk_FUN_00401aa0(iVar8,1);
        puVar2 = puVar4;
        if (0 < iVar12) {
          do {
            if (piVar11 != (int *)0x0) {
              puVar1 = (undefined4 *)*piVar11;
              *puVar2 = *puVar1;
              puVar2[1] = puVar1[1];
              puVar2[2] = puVar1[2];
              puVar2[3] = puVar1[3];
            }
            piVar11 = (int *)piVar11[1];
            puVar2 = puVar2 + 4;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        FUN_0046ae40(0x49524750,puVar4,iVar8);
        FUN_00401e40(puVar4);
      }
    }
    uVar5 = 0;
    iVar12 = local_10;
    if (*(uint *)(local_10 + 0x38) != 0) {
      piVar3 = *(int **)(local_10 + 0x3c);
      do {
        if (*piVar3 != 0) {
          piVar3 = (int *)(*(int **)(local_10 + 0x3c))[uVar5];
          goto joined_r0x004e645d;
        }
        uVar5 = uVar5 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar5 < *(uint *)(local_10 + 0x38));
    }
    piVar3 = (int *)0x0;
joined_r0x004e645d:
    while (piVar3 != (int *)0x0) {
      piVar6 = (int *)*piVar3;
      iVar8 = piVar3[1];
      piVar11 = (int *)piVar3[2];
      local_10 = iVar12;
      if (piVar6 == (int *)0x0) {
        iVar13 = (**(code **)(*(int *)(iVar12 + 0x34) + 4))(iVar8);
        uVar5 = iVar13 + 1;
        if (uVar5 < *(uint *)(iVar12 + 0x38)) {
          puVar2 = (undefined4 *)(*(int *)(iVar12 + 0x3c) + uVar5 * 4);
          do {
            piVar6 = (int *)*puVar2;
            if (piVar6 != (int *)0x0) goto LAB_004e64b6;
            uVar5 = uVar5 + 1;
            puVar2 = puVar2 + 1;
          } while (uVar5 < *(uint *)(iVar12 + 0x38));
        }
        piVar6 = (int *)0x0;
      }
LAB_004e64b6:
      piVar3 = piVar6;
      iVar12 = local_10;
      local_c = piVar6;
      if (((iVar8 != 0) && (piVar11 != (int *)0x0)) && ((piVar11[1] != 0 || (*piVar11 != 0)))) {
        iVar12 = 0;
        piVar3 = piVar11;
        do {
          if (*piVar3 != 0) {
            iVar12 = iVar12 + 1;
          }
          piVar3 = (int *)piVar3[1];
        } while (piVar3 != (int *)0x0);
        local_8 = (undefined4 *)(iVar12 * 4 + 4);
        piVar6 = (int *)thunk_FUN_00401aa0(local_8,1);
        *piVar6 = *(int *)(iVar8 + 0xc);
        piVar3 = piVar6;
        do {
          piVar3 = piVar3 + 1;
          if ((piVar11[1] == 0) && (*piVar11 == 0)) break;
          iVar8 = -1;
          iVar12 = iVar8;
          if ((*(int *)(local_10 + 0x24) != 0) && (*piVar11 != 0)) {
            iVar13 = 0;
            if (*(ushort *)(local_10 + 0x30) != 0) {
              piVar9 = *(int **)(*(int *)(local_10 + 0x24) + 4);
              do {
                iVar12 = iVar13;
                if (*piVar9 == *piVar11) break;
                iVar13 = iVar13 + 1;
                piVar9 = piVar9 + 1;
                iVar12 = iVar8;
              } while (iVar13 < (int)(uint)*(ushort *)(local_10 + 0x30));
            }
          }
          *piVar3 = iVar12;
          piVar11 = (int *)piVar11[1];
        } while (piVar11 != (int *)0x0);
        local_4 = piVar6;
        FUN_0046ae40(0x4c524750,piVar6,local_8);
        FUN_00401e40(piVar6);
        piVar3 = local_c;
        iVar12 = local_10;
      }
    }
    FUN_0046b9f0();
    FUN_0046b370();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_004e65b0(int param_1)

{
  uint *puVar1;
  ushort uVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  undefined1 *puVar11;
  int in_ECX;
  int iVar12;
  undefined4 *puVar13;
  char *pcVar14;
  int *unaff_FS_OFFSET;
  float10 fVar15;
  undefined1 auStack_148 [7];
  byte local_141;
  undefined4 *local_140;
  int local_13c;
  uint local_138;
  uint local_134;
  int local_130;
  int local_12c;
  undefined4 local_128;
  int local_124;
  float local_120;
  int local_11c;
  int local_118;
  char local_114 [20];
  undefined1 auStack_100 [240];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5dfc;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_148;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffea8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar11 = auStack_100;
  local_118 = param_1;
  local_141 = 0;
  if ((param_1 != 0) && (*(short *)(in_ECX + 0x30) != 0)) {
    local_13c = 0;
    local_12c = 0;
    local_138 = 0;
    if (*(int *)(in_ECX + 0x24) == 0) {
      puVar6 = (undefined4 *)FUN_00401f00(0x10,uVar5);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = &PTR__scalar_deleting_destructor__00a47590;
        *(undefined2 *)(puVar6 + 2) = 0;
        *(undefined2 *)((int)puVar6 + 0xe) = 1;
        *(undefined2 *)((int)puVar6 + 10) = 0;
        *(undefined2 *)(puVar6 + 3) = 0;
        puVar6[1] = 0;
      }
      *(undefined4 **)(in_ECX + 0x24) = puVar6;
    }
    local_4 = 0xffffffff;
    local_120 = -3.4028235e+38;
    if ((*(int *)(in_ECX + 0x20) != 0) &&
       ((*(byte *)(*(int *)(in_ECX + 0x20) + 0x24) >> 1 & 1) != 0)) {
      fVar15 = (float10)FUN_004cace0();
      local_120 = (float)fVar15;
    }
    local_130 = *(int *)(in_ECX + 0x20);
    local_124 = 0;
    if ((local_130 != 0) && (cVar4 = FUN_004c97f0(), cVar4 == '\0')) {
      local_124 = FUN_004c9cf0();
      local_130 = 0;
    }
    local_114[0] = '\0';
    do {
      iVar7 = FUN_004510b0();
      uVar5 = local_138;
      if (iVar7 == 0) break;
      if (iVar7 < 0x50524751) {
        if (iVar7 == 0x50524750) {
          FUN_004e4a10(*(undefined2 *)(in_ECX + 0x30));
          local_13c = FUN_00401f00((uint)*(ushort *)(in_ECX + 0x30) * 0x10);
          FUN_00450c20(local_13c,(uint)*(ushort *)(in_ECX + 0x30) << 4);
          iVar12 = 0;
          iVar7 = local_13c;
          if (*(short *)(in_ECX + 0x30) != 0) {
            do {
              local_11c = FUN_00401f00(0x2c);
              local_4 = 1;
              if (local_11c == 0) {
                puVar6 = (undefined4 *)0x0;
              }
              else {
                puVar6 = (undefined4 *)FUN_004e7df0();
              }
              local_4 = 0xffffffff;
              local_140 = puVar6;
              FUN_004bef50(iVar7);
              FUN_0042bb90(iVar12,&local_140);
              if (*(float *)(iVar7 + 8) < local_120) {
                FUN_0067ed00(1);
              }
              local_134 = local_134 & 0xffffff00;
              if (local_130 == 0) {
                if (local_124 != 0) {
                  iVar10 = FUN_004f0600(iVar7);
                  goto LAB_004e6a19;
                }
              }
              else {
                iVar10 = FUN_004cbbb0(iVar7);
LAB_004e6a19:
                if (iVar10 != 0) {
                  local_134 = CONCAT31(local_134._1_3_,1);
                }
              }
              FUN_0067ed50(local_134);
              FUN_004e5380(puVar6);
              local_138 = local_138 + *(byte *)(iVar7 + 0xc);
              iVar12 = iVar12 + 1;
              iVar7 = iVar7 + 0x10;
            } while (iVar12 < (int)(uint)*(ushort *)(in_ECX + 0x30));
          }
          if (local_138 == 0) goto LAB_004e6c42;
        }
        else if (iVar7 == 0x49524750) {
          uVar5 = *(uint *)(param_1 + 0x254) / 0x10;
          if (*(uint *)(param_1 + 0x254) % 0x10 == 0) {
            local_140 = (undefined4 *)thunk_FUN_00401aa0(uVar5 << 4,1);
            FUN_00450c20(local_140,uVar5 << 4);
            puVar6 = local_140;
            for (; uVar5 != 0; uVar5 = uVar5 - 1) {
              puVar13 = (undefined4 *)FUN_00401f00(0x10);
              *puVar13 = *puVar6;
              puVar13[1] = puVar6[1];
              puVar13[2] = puVar6[2];
              puVar13[3] = puVar6[3];
              FUN_00446cb0(puVar13);
              puVar6 = puVar6 + 4;
            }
            FUN_00401e40(local_140);
          }
        }
        else if ((iVar7 == 0x4c524750) && (uVar5 = *(uint *)(param_1 + 0x254), uVar5 != 0)) {
          puVar6 = (undefined4 *)FUN_0040fd70(uVar5);
          FUN_00450c20(puVar6,0);
          local_140 = (undefined4 *)(uVar5 >> 2);
          if (local_140 != (undefined4 *)0x0) {
            local_128 = *puVar6;
            puVar13 = (undefined4 *)0x1;
            FUN_0046bb20(&local_128,param_1);
            uVar8 = FUN_0046b250(local_128,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
            iVar7 = FUN_009832e6(uVar8);
            if (iVar7 == 0) {
              if (local_114[0] == '\0') {
                if (*(int *)(in_ECX + 0x20) == 0) {
                  __snprintf(local_114,0x104,"UNKNOWN");
                }
                else {
                  cVar4 = FUN_004c97f0();
                  if (cVar4 == '\0') {
                    piVar9 = (int *)FUN_004c9cf0();
                    piVar3 = *(int **)(in_ECX + 0x20);
                    if (piVar9 == (int *)0x0) {
                      uVar8 = FUN_004c9aa0();
                      uVar8 = FUN_004c9a80(uVar8);
                      uVar8 = (**(code **)(*piVar3 + 0xd4))(uVar8);
                      __snprintf(local_114,0x104,"%s (%d, %d)",uVar8);
                    }
                    else {
                      uVar8 = (**(code **)(*piVar9 + 0xd4))();
                      uVar8 = FUN_004c9aa0(uVar8);
                      uVar8 = FUN_004c9a80(uVar8);
                      uVar8 = (**(code **)(*piVar3 + 0xd4))(uVar8);
                      __snprintf(local_114,0x104,"%s (%d, %d) in world %s",uVar8);
                    }
                  }
                  else {
                    uVar8 = (**(code **)(**(int **)(in_ECX + 0x20) + 0xd4))();
                    __snprintf(local_114,0x104,"%s",uVar8);
                  }
                }
              }
              FUN_004a7a60("Could not find reference (%08X) for linked points in pathgrid for cell %s."
                           ,local_128,local_114);
            }
            else if ((undefined4 *)0x1 < local_140) {
              do {
                puVar1 = puVar6 + (int)puVar13;
                puVar13 = (undefined4 *)((int)puVar13 + 1);
                if (((*(int *)(in_ECX + 0x24) != 0) && (*puVar1 < (uint)*(ushort *)(in_ECX + 0x30)))
                   && (iVar12 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + *puVar1 * 4),
                      iVar12 != 0)) {
                  FUN_004e50e0(iVar7,iVar12);
                }
              } while (puVar13 < local_140);
              FUN_00401e40(puVar6);
              goto LAB_004e6c47;
            }
          }
          FUN_00401e40(puVar6);
        }
      }
      else if ((iVar7 == 0x52524750) && (local_13c != 0)) {
        local_11c = 0;
        local_12c = FUN_00401f00(-(uint)((int)((ulonglong)local_138 * 2 >> 0x20) != 0) |
                                 (uint)((ulonglong)local_138 * 2));
        iVar7 = uVar5 * 2;
        if (*(int *)(param_1 + 0x254) == iVar7) {
          FUN_00450c20(local_12c,iVar7);
        }
        else {
          if (local_114[0] == '\0') {
            if (*(int *)(in_ECX + 0x20) == 0) {
              __snprintf(local_114,0x104,"UNKNOWN");
            }
            else {
              cVar4 = FUN_004c97f0();
              if (cVar4 == '\0') {
                piVar9 = (int *)FUN_004c9cf0();
                piVar3 = *(int **)(in_ECX + 0x20);
                if (piVar9 == (int *)0x0) {
                  uVar8 = FUN_004c9aa0();
                  uVar8 = FUN_004c9a80(uVar8);
                  uVar8 = (**(code **)(*piVar3 + 0xd4))(uVar8);
                  __snprintf(local_114,0x104,"%s (%d, %d)",uVar8);
                }
                else {
                  uVar8 = (**(code **)(*piVar9 + 0xd4))();
                  uVar8 = FUN_004c9aa0(uVar8);
                  uVar8 = FUN_004c9a80(uVar8);
                  uVar8 = (**(code **)(*piVar3 + 0xd4))(uVar8);
                  __snprintf(local_114,0x104,"%s (%d, %d) in world %s",uVar8);
                }
              }
              else {
                uVar8 = (**(code **)(**(int **)(in_ECX + 0x20) + 0xd4))();
                __snprintf(local_114,0x104,"%s",uVar8);
              }
            }
          }
          FUN_004a7a60("PathGrid (%08X) in cell %s found different connection data than it was expecting:\r\n\tExpected: %i\t Found: %i"
                       ,*(undefined4 *)(in_ECX + 0xc),local_114,uVar5,
                       *(uint *)(param_1 + 0x254) >> 1);
        }
        local_140 = (undefined4 *)0x0;
        if (*(short *)(in_ECX + 0x30) != 0) {
          pcVar14 = (char *)(local_13c + 0xc);
          iVar7 = local_11c;
          do {
            iVar12 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + (int)local_140 * 4);
            cVar4 = *pcVar14;
            while (cVar4 != '\0') {
              uVar2 = *(ushort *)(local_12c + iVar7 * 2);
              if (((uVar2 < *(ushort *)(in_ECX + 0x30)) &&
                  (iVar10 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + (uint)uVar2 * 4),
                  iVar10 != 0)) && (iVar10 != iVar12)) {
                FUN_004e7de0(iVar10);
                FUN_00446cb0(iVar10);
              }
              *pcVar14 = *pcVar14 + -1;
              iVar7 = iVar7 + 1;
              cVar4 = *pcVar14;
            }
            local_140 = (undefined4 *)((int)local_140 + 1);
            pcVar14 = pcVar14 + 0x10;
          } while ((int)local_140 < (int)(uint)*(ushort *)(in_ECX + 0x30));
        }
LAB_004e6c42:
        local_141 = 1;
      }
LAB_004e6c47:
      param_1 = local_118;
      cVar4 = FUN_0044fea0();
    } while (cVar4 != '\0');
    FUN_00401f20(local_13c);
    FUN_00401f20(local_12c);
    puVar11 = (undefined1 *)(uint)local_141;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar11;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e6ca0(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  int local_4;
  
  iVar3 = 0;
  if (*(int *)(in_ECX + 0x24) != 0) {
    local_4 = in_ECX;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b36000);
    _DAT_00b36078 = GetCurrentThreadId();
    _DAT_00b3607c = _DAT_00b3607c + 1;
    FUN_004e4f20();
    FUN_004e5040();
    uVar2 = (uint)*(ushort *)(*(int *)(in_ECX + 0x24) + 10);
    if (uVar2 != 0) {
      local_4 = 0;
      do {
        iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + iVar3 * 4);
        if (iVar1 != 0) {
          FUN_004e8200();
          FUN_00401f20(iVar1);
        }
        FUN_0042bb90(iVar3,&local_4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar2);
    }
    if (*(undefined4 **)(in_ECX + 0x24) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x24))(1);
    }
    *(undefined4 *)(in_ECX + 0x24) = 0;
    _DAT_00b3607c = _DAT_00b3607c + -1;
    if (_DAT_00b3607c == 0) {
      _DAT_00b36078 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b36000);
  }
  return;
}



int FUN_004e6d60(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  int in_ECX;
  int *piVar6;
  
  uVar3 = param_1;
  if (*(int *)(in_ECX + 0x24) == 0) {
    return 0;
  }
  uVar5 = FUN_004e5320(param_1);
  param_1 = (int *)0x0;
  FUN_0055e000(uVar5,&param_1);
  piVar6 = param_1;
  if (param_1 != (int *)0x0) {
    do {
      if ((piVar6[1] == 0) && (*piVar6 == 0)) {
        return 0;
      }
      iVar2 = *piVar6;
      uVar5 = FUN_004bef40(uVar3,0x40000000);
      cVar4 = FUN_0047d810(uVar5);
      if (cVar4 != '\0') {
        return iVar2;
      }
      piVar1 = piVar6 + 1;
      piVar6 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    return 0;
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x004e6f20) */

int FUN_004e6df0(float *param_1,int param_2,int *param_3,int param_4)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint local_14;
  uint local_10;
  int local_8;
  int local_4;
  
  iVar5 = 0;
  local_4 = 0;
  *param_3 = 0;
  if (param_2 == 0) {
    FUN_0043f270();
  }
  fVar1 = param_1[1];
  uVar3 = (int)ROUND(*param_1) & 0x80000fff;
  bVar7 = uVar3 == 0;
  if ((int)uVar3 < 0) {
    bVar7 = (uVar3 - 1 | 0xfffff000) == 0xffffffff;
  }
  local_10 = (uint)bVar7;
  uVar3 = (int)ROUND(fVar1) & 0x80000fff;
  bVar7 = uVar3 == 0;
  if ((int)uVar3 < 0) {
    bVar7 = (uVar3 - 1 | 0xfffff000) == 0xffffffff;
  }
  local_14 = (uint)bVar7;
  iVar2 = (int)ROUND(*param_1) >> 0xc;
  local_8 = 0;
  do {
    iVar4 = 0;
    iVar6 = (int)ROUND(fVar1) >> 0xc;
    if (-1 < (int)local_14) {
      do {
        iVar5 = FUN_004efe80(iVar2,iVar6);
        if ((((iVar5 != 0) && (iVar5 = FUN_004af170(), iVar5 != 0)) && (iVar5 != param_4)) &&
           (local_4 = FUN_004e6d60(param_1), local_4 != 0)) {
          *param_3 = iVar5;
          break;
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar4 <= (int)local_14);
      iVar5 = local_4;
      if (local_4 != 0) {
        return local_4;
      }
    }
    local_8 = local_8 + 1;
    iVar2 = iVar2 + -1;
    if ((int)local_10 < local_8) {
      return iVar5;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e6f30(void)

{
  ushort *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  int local_4;
  
  if ((*(int *)(in_ECX + 0x24) != 0) && (local_4 = in_ECX, iVar6 = FUN_004c9cf0(), iVar6 != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b36000);
    _DAT_00b36078 = GetCurrentThreadId();
    _DAT_00b3607c = _DAT_00b3607c + 1;
    piVar2 = (int *)(in_ECX + 0x28);
    piVar4 = (int *)0x0;
    while ((piVar3 = piVar2, piVar3 != (int *)0x0 && ((piVar3[1] != 0 || (*piVar3 != 0))))) {
      puVar1 = (ushort *)*piVar3;
      if (*puVar1 < *(ushort *)(in_ECX + 0x30)) {
        iVar6 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + (uint)*puVar1 * 4);
        local_4 = 0;
        uVar7 = FUN_004c9cf0(&local_4);
        iVar8 = FUN_004e6df0(puVar1 + 2,uVar7);
        if (((iVar8 != 0) && (iVar8 != iVar6)) && (local_4 != 0)) {
          cVar5 = FUN_004e7f80(iVar8);
          if (cVar5 == '\0') {
            iVar9 = iVar8;
            FUN_004e7de0(iVar8);
            FUN_00446cb0(iVar9);
          }
          cVar5 = FUN_004e7f80(iVar6);
          if (cVar5 == '\0') {
            FUN_004e7de0(iVar6);
            FUN_00446cb0(iVar6);
            uVar7 = FUN_004bef40();
            FUN_004e4fe0(iVar8,uVar7);
          }
        }
        piVar2 = (int *)piVar3[1];
        piVar4 = piVar3;
      }
      else if (piVar4 == (int *)0x0) {
        piVar3 = *(int **)(in_ECX + 0x2c);
        piVar2 = (int *)(in_ECX + 0x28);
        if (piVar3 == (int *)0x0) {
          *piVar2 = 0;
          FUN_00401f20(puVar1);
        }
        else {
          *(int *)(in_ECX + 0x2c) = piVar3[1];
          *piVar2 = *piVar3;
          FUN_00401f20(piVar3);
          FUN_00401f20(puVar1);
        }
      }
      else {
        FUN_0065c620(puVar1);
        piVar2 = (int *)piVar4[1];
        FUN_00401f20(puVar1);
      }
    }
    _DAT_00b3607c = _DAT_00b3607c + -1;
    if (_DAT_00b3607c == 0) {
      _DAT_00b36078 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b36000);
  }
  return;
}



undefined4 * FUN_004e70b0(void)

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
  if (DAT_00b35f8c == (undefined4 *)0x0) {
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
    puVar1 = DAT_00b35f8c;
    local_4 = 0xffffffff;
    if (DAT_00b35f8c != puVar3) {
      if (DAT_00b35f8c != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(DAT_00b35f8c + 1);
        if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
      }
      DAT_00b35f8c = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar3 + 1);
      }
    }
    *(ushort *)(DAT_00b35f8c + 6) = *(ushort *)(DAT_00b35f8c + 6) & 0xffdf | 0x10;
    *(ushort *)(DAT_00b35f8c + 6) = *(ushort *)(DAT_00b35f8c + 6) & 0xfff7;
  }
  puVar3 = DAT_00b35f8c;
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void FUN_004e71a0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  int *piVar7;
  int unaff_EBX;
  int iVar8;
  int *unaff_FS_OFFSET;
  int *piStack_2c;
  int *local_24 [2];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5e46;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (in_ECX[7] != 0) {
    FUN_004e5400(uVar3);
  }
  local_24[0] = (int *)FUN_00401f00(0xdc);
  local_4 = 0;
  if (local_24[0] == (int *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_0070b780(0);
  }
  puVar1 = (undefined4 *)in_ECX[7];
  local_4 = 0xffffffff;
  if (puVar1 != puVar4) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[7] = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  iVar8 = 0;
  if (*(short *)(in_ECX + 0xc) != 0) {
    do {
      if (*(int *)(*(int *)(in_ECX[9] + 4) + iVar8 * 4) != 0) {
        FUN_004e82e0(in_ECX,1);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(uint)*(ushort *)(in_ECX + 0xc));
  }
  uVar3 = 0;
  if (in_ECX[0xe] != 0) {
    piVar7 = (int *)in_ECX[0xf];
    do {
      if (*piVar7 != 0) {
        piStack_2c = (int *)((int *)in_ECX[0xf])[uVar3];
        goto joined_r0x004e7293;
      }
      uVar3 = uVar3 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar3 < (uint)in_ECX[0xe]);
  }
  piStack_2c = (int *)0x0;
joined_r0x004e7293:
  do {
    if (piStack_2c == (int *)0x0) {
      FUN_00707610();
      (**(code **)(*DAT_00b35f88 + 0x84))(in_ECX[7],1);
      FUN_00707610();
      FUN_00707370(0,0);
      *unaff_FS_OFFSET = iStack_14;
      return;
    }
    piVar7 = (int *)piStack_2c[1];
    piVar2 = (int *)piStack_2c[2];
    piStack_2c = (int *)*piStack_2c;
    local_24[0] = piVar7;
    if (piStack_2c == (int *)0x0) {
      iVar8 = (**(code **)(in_ECX[0xd] + 4))(piVar7);
      uVar3 = iVar8 + 1;
      if (uVar3 < (uint)in_ECX[0xe]) {
        puVar4 = (undefined4 *)(in_ECX[0xf] + uVar3 * 4);
        do {
          piStack_2c = (int *)*puVar4;
          if (piStack_2c != (int *)0x0) goto LAB_004e72f0;
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar3 < (uint)in_ECX[0xe]);
      }
      piStack_2c = (int *)0x0;
    }
LAB_004e72f0:
    if (piVar7 != (int *)0x0) {
      uStack_1c = 0x3f800000;
      uStack_18 = 0;
      uStack_10 = 0;
      iStack_14 = 0x3f800000;
      iVar8 = FUN_0047fd30(0x41200000,&uStack_1c);
      puVar4 = (undefined4 *)(**(code **)(*piVar7 + 0x174))();
      *(undefined4 *)(iVar8 + 0x54) = *puVar4;
      *(undefined4 *)(iVar8 + 0x58) = puVar4[1];
      *(undefined4 *)(iVar8 + 0x5c) = puVar4[2];
      (**(code **)(*(int *)in_ECX[7] + 0x84))(iVar8,1);
      for (; (piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0))));
          piVar2 = (int *)piVar2[1]) {
        uVar6 = FUN_004bef40(&uStack_1c);
        uVar6 = (**(code **)(*piVar7 + 0x174))(&uStack_1c,uVar6);
        uVar6 = FUN_0047f070(uVar6);
        (**(code **)(*(int *)in_ECX[7] + 0x84))(uVar6,1);
        iVar8 = FUN_0047ea60(0x42820000,0x42820000,0x42820000,local_24);
        in_ECX = (undefined4 *)FUN_00401f00(0x1c);
        local_c = 1;
        if (in_ECX == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          FUN_006ffd30();
          *in_ECX = &PTR_FUN_00a2fd5c;
          *(undefined2 *)(in_ECX + 6) = 0;
          puVar4 = in_ECX;
        }
        *(ushort *)(puVar4 + 6) = *(ushort *)(puVar4 + 6) | 1;
        local_c = -1;
        FUN_00405680(puVar4);
        (**(code **)(**(int **)(unaff_EBX + 0x1c) + 0x84))(iVar8,1);
        puVar4 = (undefined4 *)FUN_004bef40();
        *(undefined4 *)(iVar8 + 0x54) = *puVar4;
        *(undefined4 *)(iVar8 + 0x58) = puVar4[1];
        *(undefined4 *)(iVar8 + 0x5c) = puVar4[2];
        piVar7 = local_24[0];
      }
    }
  } while( true );
}



void FUN_004e74b0(void)

{
  FUN_004e5400();
  FUN_004e6ca0();
  FUN_004e4ed0();
  FUN_004e5280();
  thunk_FUN_0046b170();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

uint FUN_004e74e0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  undefined2 local_10 [3];
  char local_a;
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  uVar2 = FUN_004511c0();
  if ((char)uVar2 == '4') {
    iVar3 = in_ECX[3];
    FUN_00451210(in_ECX);
    if ((iVar3 != 0) && (iVar3 != in_ECX[3])) {
      FUN_004a7a60("Potentially duplicate PathGrid (%08x) encountered in file %s.",in_ECX[3],
                   param_1 + 0x1c);
    }
    local_a = '\0';
    cVar1 = FUN_0044faf0();
    if ((cVar1 != '\0') || (cVar1 = FUN_004c9ff0(), cVar1 != '\0')) {
      local_a = '\x01';
    }
    local_9 = 1;
    do {
      iVar3 = FUN_004510b0();
      if (iVar3 < 0x4c524751) {
        if (iVar3 == 0x4c524750) {
LAB_004e75c7:
          if (local_a != '\0') {
            local_9 = FUN_004e65b0(param_1);
          }
        }
        else if (iVar3 == 0x41544144) {
          FUN_00450c20(local_10,2);
          *(undefined2 *)(in_ECX + 0xc) = local_10[0];
        }
        else if (iVar3 == 0x44494445) {
          FUN_00450c20(&stack0xffffffe8,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xffffffe8);
        }
        else if (iVar3 == 0x49524750) goto LAB_004e75c7;
      }
      else if ((iVar3 == 0x50524750) || (iVar3 == 0x52524750)) goto LAB_004e75c7;
      cVar1 = FUN_0044fea0();
    } while (cVar1 != '\0');
    if (((uint)in_ECX[2] >> 5 & 1) != 0) {
      *(undefined2 *)(in_ECX + 0xc) = 0;
    }
    uVar2 = CONCAT31((uint3)((uint)in_ECX[2] >> 0xd),local_9);
  }
  else {
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}



char FUN_004e7610(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    FUN_004e6f30();
    if (DAT_00b35f84 != '\0') {
      FUN_004e71a0();
    }
    return '\x01';
  }
  FUN_0046b680(0xffffffff);
  iVar2 = FUN_004520f0();
  if (iVar2 != 0) {
    cVar1 = FUN_00451920(in_ECX);
    if (cVar1 != '\0') {
      cVar1 = FUN_004e65b0(iVar2);
      if (cVar1 != '\0') {
        FUN_004e6f30();
        if (DAT_00b35f84 != '\0') {
          FUN_004e71a0();
        }
      }
      return cVar1;
    }
  }
  return '\0';
}



void FUN_004e7690(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) == 0) {
    return;
  }
  FUN_004e5400();
  iVar2 = FUN_0046b680(0xffffffff);
  if (iVar2 != 0) {
    FUN_0046b680(0);
    cVar1 = FUN_0044faf0();
    if (cVar1 != '\0') {
      return;
    }
  }
  FUN_004e6ca0();
  FUN_004e5280();
  return;
}



void FUN_004e76d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  LONG LVar4;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b35f84 != (char)param_1) {
    DAT_00b35f84 = (char)param_1;
    if ((char)param_1 != '\0') {
      param_1 = (undefined4 *)FUN_00401f00(0xdc);
      local_4 = 0;
      if (param_1 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0070b780(0);
      }
      local_4 = 0xffffffff;
      FUN_0075fa90(uVar3);
      uVar3 = FUN_004e70b0();
      FUN_00405680(uVar3);
      (**(code **)(**(int **)(DAT_00b333a0 + 0xc) + 0x84))(DAT_00b35f88,1);
      *unaff_FS_OFFSET = unaff_EDI;
      return;
    }
    (**(code **)(**(int **)(DAT_00b333a0 + 0xc) + 0x88))(&param_1,DAT_00b35f88,uVar2);
    puVar1 = param_1;
    if (param_1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(param_1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    FUN_00477ef0();
    puVar1 = DAT_00b35f88;
    if (DAT_00b35f88 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(DAT_00b35f88 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      DAT_00b35f88 = (undefined4 *)0x0;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e7820(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b5db9;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a47644;
  in_ECX[6] = &PTR_FUN_00a47638;
  local_4 = 3;
  FUN_004e5400(uVar2);
  FUN_004e6ca0();
  FUN_004e4ed0();
  FUN_004e5280();
  thunk_FUN_0046b170();
  puVar1 = DAT_00b35f88;
  _DAT_00b35f80 = _DAT_00b35f80 + -1;
  if (_DAT_00b35f80 == 0) {
    if (DAT_00b35f88 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(DAT_00b35f88 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      DAT_00b35f88 = (undefined4 *)0x0;
    }
    puVar1 = DAT_00b35f8c;
    if (DAT_00b35f8c != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(DAT_00b35f8c + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      DAT_00b35f8c = (undefined4 *)0x0;
    }
  }
  local_4._0_1_ = 2;
  FUN_004e5fc0();
  local_4._0_1_ = 1;
  FUN_004e5f50();
  puVar1 = (undefined4 *)in_ECX[7];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004e7950(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int in_ECX;
  int *piVar11;
  int *unaff_FS_OFFSET;
  bool bVar12;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5e86;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b09798,0,uVar3);
  if (iVar4 != 0) {
    bVar12 = *(int *)(iVar4 + 0x24) == 0;
    local_14 = iVar4;
    if (bVar12) {
      FUN_004e7610();
    }
    iVar8 = *(int *)(iVar4 + 0x24);
    local_10 = iVar8;
    if (iVar8 != 0) {
      FUN_00521be0();
      *(undefined2 *)(in_ECX + 0x30) = *(undefined2 *)(iVar4 + 0x30);
      puVar5 = (undefined4 *)FUN_00401f00(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = &PTR__scalar_deleting_destructor__00a47590;
        *(undefined2 *)(puVar5 + 2) = 0;
        *(undefined2 *)((int)puVar5 + 0xe) = 1;
        *(undefined2 *)((int)puVar5 + 10) = 0;
        *(undefined2 *)(puVar5 + 3) = 0;
        puVar5[1] = 0;
      }
      *(undefined4 **)(in_ECX + 0x24) = puVar5;
      local_4 = 0xffffffff;
      FUN_004e4a10(*(undefined2 *)(iVar8 + 10));
      uVar3 = 0;
      if (*(short *)(iVar8 + 10) != 0) {
        do {
          if (*(int *)(*(int *)(iVar8 + 4) + uVar3 * 4) != 0) {
            local_18 = FUN_00401f00(0x2c);
            local_4 = 1;
            if (local_18 == 0) {
              local_18 = 0;
            }
            else {
              local_18 = FUN_004e7df0();
            }
            local_4 = 0xffffffff;
            uVar6 = FUN_004bef40();
            FUN_004bef50(uVar6);
            FUN_0042bb90(uVar3,&local_18);
            iVar8 = local_10;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ushort *)(iVar8 + 10));
      }
      local_18 = 0;
      iVar4 = local_14;
      if (*(short *)(iVar8 + 10) != 0) {
        do {
          uVar3 = local_18;
          if (*(int *)(*(int *)(iVar8 + 4) + local_18 * 4) != 0) {
            iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + local_18 * 4);
            puVar5 = (undefined4 *)FUN_004e7de0();
            iVar8 = puVar5[1];
            while (iVar8 != 0) {
              iVar8 = *(int *)(puVar5[1] + 4);
              FUN_00401f20(puVar5[1]);
              puVar5[1] = iVar8;
              uVar3 = local_18;
            }
            *puVar5 = 0;
            piVar7 = (int *)FUN_004e7de0();
            iVar8 = local_10;
            for (; (local_10 = iVar8, piVar7 != (int *)0x0 && ((piVar7[1] != 0 || (*piVar7 != 0))));
                piVar7 = (int *)piVar7[1]) {
              if ((*(int *)(local_14 + 0x24) != 0) && (*piVar7 != 0)) {
                iVar8 = 0;
                if (*(ushort *)(local_14 + 0x30) != 0) {
                  piVar11 = *(int **)(*(int *)(local_14 + 0x24) + 4);
                  do {
                    if (*piVar11 == *piVar7) {
                      if (((-1 < iVar8) &&
                          (iVar8 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + iVar8 * 4),
                          uVar3 = local_18, iVar8 != 0)) && (iVar8 != iVar4)) {
                        piVar11 = (int *)FUN_004e7de0();
                        iVar1 = piVar11[1];
                        while (iVar1 != 0) {
                          piVar11 = (int *)piVar11[1];
                          iVar1 = piVar11[1];
                        }
                        if (*piVar11 == 0) {
                          *piVar11 = iVar8;
                          uVar3 = local_18;
                        }
                        else {
                          piVar9 = (int *)FUN_00401f00(8);
                          uVar3 = local_18;
                          if (piVar9 == (int *)0x0) {
                            piVar11[1] = 0;
                          }
                          else {
                            *piVar9 = iVar8;
                            piVar9[1] = 0;
                            piVar11[1] = (int)piVar9;
                          }
                        }
                      }
                      break;
                    }
                    iVar8 = iVar8 + 1;
                    piVar11 = piVar11 + 1;
                  } while (iVar8 < (int)(uint)*(ushort *)(local_14 + 0x30));
                }
              }
              iVar8 = local_10;
            }
            iVar1 = *(int *)(in_ECX + 0x24);
            if (uVar3 < *(ushort *)(iVar1 + 10)) {
              if (iVar4 == 0) {
                if (*(int *)(*(int *)(iVar1 + 4) + uVar3 * 4) != 0) {
                  *(short *)(iVar1 + 0xc) = *(short *)(iVar1 + 0xc) + -1;
                }
              }
              else if (*(int *)(*(int *)(iVar1 + 4) + uVar3 * 4) == 0) {
                *(short *)(iVar1 + 0xc) = *(short *)(iVar1 + 0xc) + 1;
              }
            }
            else {
              *(short *)(iVar1 + 10) = (short)uVar3 + 1;
              if (iVar4 != 0) {
                *(short *)(iVar1 + 0xc) = *(short *)(iVar1 + 0xc) + 1;
              }
            }
            *(int *)(*(int *)(iVar1 + 4) + uVar3 * 4) = iVar4;
          }
          local_18 = uVar3 + 1;
          iVar4 = local_14;
        } while (local_18 < *(ushort *)(iVar8 + 10));
      }
    }
    FUN_004e4ed0();
    piVar7 = (int *)(iVar4 + 0x28);
    for (; (piVar7 != (int *)0x0 && ((piVar7[1] != 0 || (*piVar7 != 0)))); piVar7 = (int *)piVar7[1]
        ) {
      puVar5 = (undefined4 *)*piVar7;
      puVar10 = (undefined4 *)FUN_00401f00(0x10);
      *puVar10 = *puVar5;
      puVar10[1] = puVar5[1];
      puVar10[2] = puVar5[2];
      piVar11 = (int *)(in_ECX + 0x28);
      puVar10[3] = puVar5[3];
      iVar4 = *(int *)(in_ECX + 0x2c);
      while (iVar4 != 0) {
        piVar11 = (int *)piVar11[1];
        iVar4 = piVar11[1];
      }
      if (*piVar11 == 0) {
        *piVar11 = (int)puVar10;
      }
      else {
        puVar5 = (undefined4 *)FUN_00401f00(8);
        if (puVar5 == (undefined4 *)0x0) {
          piVar11[1] = 0;
        }
        else {
          *puVar5 = puVar10;
          puVar5[1] = 0;
          piVar11[1] = (int)puVar5;
        }
      }
      iVar4 = local_14;
    }
    if ((bVar12) && (*(int *)(iVar4 + 0x24) != 0)) {
      FUN_004e5400();
      iVar4 = FUN_0046b680(0xffffffff);
      if (iVar4 != 0) {
        FUN_0046b680(0);
        cVar2 = FUN_0044faf0();
        if (cVar2 != '\0') goto LAB_004e7cf8;
      }
      FUN_004e6ca0();
      FUN_004e5280();
    }
  }
LAB_004e7cf8:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004e7dc0(byte param_1)

{
  FUN_004e7820();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_004e7de0(void)

{
  int in_ECX;
  
  return in_ECX + 0x20;
}



void FUN_004e7df0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5eb8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0067edc0(uVar2);
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x14) = DAT_00b3f9a8;
  *(undefined4 *)(in_ECX + 0x18) = DAT_00b3f9ac;
  *(undefined4 *)(in_ECX + 0x1c) = DAT_00b3f9b0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  local_4 = 0;
  if (DAT_00b36080 == 0) {
    local_1c = 0x3f800000;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    puVar3 = (undefined4 *)FUN_0047fd30(0x41f00000,&local_1c);
    puVar1 = DAT_00b36084;
    if (DAT_00b36084 != puVar3) {
      if (DAT_00b36084 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(DAT_00b36084 + 1);
        if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
      }
      DAT_00b36084 = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar3 + 1);
      }
    }
    FUN_00707370(0,1);
    local_1c = 0;
    local_18 = 0;
    local_14 = 0x3f800000;
    local_10 = 0;
    puVar3 = (undefined4 *)FUN_0047fd30(0x41f00000,&local_1c);
    puVar1 = DAT_00b36088;
    if (DAT_00b36088 != puVar3) {
      if (DAT_00b36088 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(DAT_00b36088 + 1);
        if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
      }
      DAT_00b36088 = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar3 + 1);
      }
    }
    FUN_00707370(0,1);
  }
  DAT_00b36080 = DAT_00b36080 + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_004e7f80(int param_1)

{
  undefined1 uVar1;
  int in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  if ((param_1 != 0) && (piVar2 = (int *)(in_ECX + 0x20), piVar2 != (int *)0x0)) {
    while (*piVar2 != param_1) {
      piVar2 = (int *)piVar2[1];
      if (piVar2 == (int *)0x0) {
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}



void FUN_004e7fb0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  int in_ECX;
  
  piVar5 = (int *)(in_ECX + 0x20);
  piVar4 = (int *)0x0;
  while ((piVar3 = piVar5, piVar3 != (int *)0x0 && ((piVar3[1] != 0 || (*piVar3 != 0))))) {
    iVar1 = *piVar3;
    cVar6 = FUN_0047d810(iVar1 + 0x14,param_1,0x40000000);
    if (cVar6 == '\0') {
      piVar5 = (int *)piVar3[1];
      piVar4 = piVar3;
    }
    else {
      FUN_0065c620(in_ECX);
      if (piVar4 == (int *)0x0) {
        piVar2 = (int *)piVar3[1];
        piVar5 = piVar3;
        if (piVar2 == (int *)0x0) {
          *piVar3 = 0;
        }
        else {
          piVar3[1] = piVar2[1];
          *piVar3 = *piVar2;
          FUN_00401f20(piVar2);
        }
      }
      else {
        FUN_0065c620(iVar1);
        piVar5 = (int *)piVar4[1];
      }
    }
  }
  return;
}



byte FUN_004e8040(void)

{
  int in_ECX;
  undefined1 local_8;
  
  local_8 = (byte)(int)ROUND(*(float *)(in_ECX + 0x1c));
  return local_8 & 1;
}



void FUN_004e8060(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(float *)(in_ECX + 0x1c) = (float)(int)((int)ROUND(*(float *)(in_ECX + 0x1c)) | 1);
    return;
  }
  *(float *)(in_ECX + 0x1c) = (float)(int)((int)ROUND(*(float *)(in_ECX + 0x1c)) & 0xfffffffe);
  return;
}



void FUN_004e80b0(float param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  float10 fVar4;
  
  if (param_2 != (int *)0x0) {
    FUN_0067b1e0(in_ECX);
    for (piVar1 = (int *)(in_ECX + 0x20);
        (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
      piVar3 = param_2;
      if (*piVar1 != 0) {
        do {
          if (*piVar3 == *piVar1) goto LAB_004e8170;
          piVar2 = piVar3 + 1;
          piVar3 = (int *)*piVar2;
        } while ((int *)*piVar2 != (int *)0x0);
        fVar4 = (float10)FUN_00982c30();
        if ((float)fVar4 <= param_1) {
          FUN_004e80b0(param_1,param_2);
        }
      }
LAB_004e8170:
    }
  }
  return;
}



void FUN_004e8190(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  undefined1 local_4 [4];
  
  if (*(int *)(in_ECX + 0x28) != 0) {
    FUN_00477ef0();
    puVar1 = *(undefined4 **)(in_ECX + 0x28);
    if (((((int *)puVar1[7] != (int *)0x0) &&
         ((**(code **)(*(int *)puVar1[7] + 0x88))(local_4), puVar1 != (undefined4 *)0x0)) &&
        (LVar2 = InterlockedDecrement(puVar1 + 1), LVar2 == 0)) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x28) = 0;
  }
  return;
}



void FUN_004e8200(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b5ee8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = *(int *)(in_ECX + 0x24);
  local_4 = 0;
  while (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x24) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x24),uVar3);
    *(int *)(in_ECX + 0x24) = iVar1;
  }
  *(undefined4 *)(in_ECX + 0x20) = 0;
  FUN_004e8190();
  puVar2 = DAT_00b36084;
  DAT_00b36080 = DAT_00b36080 + -1;
  if (DAT_00b36080 == 0) {
    if (DAT_00b36084 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(DAT_00b36084 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_00b36084 = (undefined4 *)0x0;
    }
    puVar2 = DAT_00b36088;
    if (DAT_00b36088 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(DAT_00b36088 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_00b36088 = (undefined4 *)0x0;
    }
  }
  local_4 = 0xffffffff;
  FUN_0060d0a0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004e82e0(int param_1,char param_2)

{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  LONG LVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  int in_ECX;
  int iVar15;
  float *pfVar16;
  int *unaff_FS_OFFSET;
  undefined4 *local_54;
  float fStack_50;
  float fStack_4c;
  undefined4 *local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 *puStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5f3c;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffff94;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar15 = 0;
  if (param_1 != 0) {
    if (*(int *)(in_ECX + 0x28) != 0) {
      FUN_004e8190(uVar7);
    }
    local_48 = (undefined4 *)FUN_00401f00(0xdc);
    local_4 = 0;
    if (local_48 == (undefined4 *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_0070b780(0);
    }
    *(int *)(in_ECX + 0x28) = iVar8;
    local_4 = 0xffffffff;
    local_44 = *(float *)(in_ECX + 0x14) + 0.0;
    local_40 = *(float *)(in_ECX + 0x18) + 0.0;
    local_3c = *(float *)(in_ECX + 0x1c) + 5.0;
    *(float *)(iVar8 + 0x54) = local_44;
    *(float *)(iVar8 + 0x58) = local_40;
    *(float *)(iVar8 + 0x5c) = local_3c;
    local_54 = *(undefined4 **)(in_ECX + 0x1c);
    uVar9 = FUN_00700900();
    uVar9 = FUN_00560920(&DAT_00b3fcd4,uVar9);
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x90))(&local_54,0,uVar9);
    puVar13 = local_54;
    if (((local_54 != (undefined4 *)0x0) &&
        (LVar10 = InterlockedDecrement(local_54 + 1), LVar10 == 0)) &&
       (puVar13 != (undefined4 *)0x0)) {
      (**(code **)*puVar13)(1);
    }
    pfVar16 = (float *)(in_ECX + 0x20);
    if ((*(int *)(in_ECX + 0x24) != 0) || (*pfVar16 != 0.0)) {
      local_44 = 0.0;
      local_40 = 0.0;
      pfVar2 = pfVar16;
      if (param_2 == '\0') {
        iVar8 = FUN_004e4e90(in_ECX);
        for (; (pfVar16 != (float *)0x0 && ((pfVar16[1] != 0.0 || (*pfVar16 != 0.0))));
            pfVar16 = (float *)pfVar16[1]) {
          fVar1 = *pfVar16;
          iVar11 = FUN_004e4e90(fVar1);
          if (iVar8 < iVar11) {
            iVar15 = iVar15 + 1;
            FUN_00446cb0(fVar1);
          }
        }
        pfVar16 = &local_44;
      }
      else {
        for (; pfVar2 != (float *)0x0; pfVar2 = (float *)pfVar2[1]) {
          if (*pfVar2 != 0.0) {
            iVar15 = iVar15 + 1;
          }
        }
      }
      if (iVar15 != 0) {
        uVar7 = iVar15 * 2;
        puVar12 = (undefined4 *)
                  FUN_00401f00(-(uint)((int)((ulonglong)uVar7 * 0xc >> 0x20) != 0) |
                               (uint)((ulonglong)uVar7 * 0xc));
        puVar13 = (undefined4 *)
                  FUN_00401f00(-(uint)((int)((ulonglong)uVar7 * 0x10 >> 0x20) != 0) |
                               (uint)((ulonglong)uVar7 * 0x10));
        local_4 = 1;
        local_48 = puVar13;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          _vector_constructor_iterator_(puVar13,0x10,uVar7,FUN_0047ea50);
        }
        local_4 = 0xffffffff;
        local_48 = (undefined4 *)FUN_00401f00(uVar7);
        puVar3 = puVar12;
        puVar4 = local_48;
        puVar5 = puVar13;
        for (; (pfVar16 != (float *)0x0 && ((pfVar16[1] != 0.0 || (*pfVar16 != 0.0))));
            pfVar16 = (float *)pfVar16[1]) {
          fVar1 = *pfVar16;
          uStack_2c = 0x3f800000;
          *puVar3 = DAT_00b3f9a8;
          uStack_28 = 0x3f800000;
          uStack_20 = 0x3f800000;
          puVar3[1] = DAT_00b3f9ac;
          uStack_24 = 0;
          puVar3[2] = DAT_00b3f9b0;
          *(undefined1 *)puVar4 = 1;
          *puVar5 = 0x3f800000;
          puVar5[1] = 0x3f800000;
          puVar5[2] = 0;
          puVar5[3] = 0x3f800000;
          local_54 = (undefined4 *)(*(float *)((int)fVar1 + 0x14) - *(float *)(in_ECX + 0x14));
          fStack_50 = *(float *)((int)fVar1 + 0x18) - *(float *)(in_ECX + 0x18);
          fStack_4c = *(float *)((int)fVar1 + 0x1c) - *(float *)(in_ECX + 0x1c);
          puStack_38 = local_54;
          puVar3[3] = local_54;
          fStack_34 = fStack_50;
          puVar3[4] = fStack_50;
          fStack_30 = fStack_4c;
          puVar3[5] = fStack_4c;
          *(undefined1 *)((int)puVar4 + 1) = 0;
          uStack_1c = 0x3f800000;
          uStack_18 = 0x3f800000;
          puVar5[4] = 0x3f800000;
          uStack_10 = 0x3f800000;
          puVar5[5] = 0x3f800000;
          uStack_14 = 0;
          puVar5[6] = 0;
          puVar5[7] = 0x3f800000;
          puVar3 = puVar3 + 6;
          puVar4 = (undefined4 *)((int)puVar4 + 2);
          puVar5 = puVar5 + 8;
        }
        iVar15 = FUN_00401f00(0xc0);
        local_4 = 2;
        if (iVar15 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_007177e0(uVar7,puVar12,puVar13,0,0,0,local_48);
        }
        local_4 = 0xffffffff;
        (**(code **)(**(int **)(in_ECX + 0x28) + 0x90))(&local_48,1,uVar9);
        puVar13 = local_48;
        if (((local_48 != (undefined4 *)0x0) &&
            (LVar10 = InterlockedDecrement(local_48 + 1), LVar10 == 0)) &&
           (puVar13 != (undefined4 *)0x0)) {
          (**(code **)*puVar13)(1);
        }
      }
      FUN_004526e0();
    }
    cVar6 = FUN_0067ed70();
    if (cVar6 != '\0') {
      puVar13 = (undefined4 *)FUN_00401f00(0x1c);
      local_4 = 3;
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        FUN_006ffd30();
        *puVar13 = &PTR_FUN_00a2fd5c;
        *(undefined2 *)(puVar13 + 6) = 0;
      }
      *(ushort *)(puVar13 + 6) = *(ushort *)(puVar13 + 6) | 1;
      local_4 = 0xffffffff;
      FUN_00405680(puVar13);
    }
    iVar15 = FUN_004d9b40();
    if (iVar15 != 0) {
      piVar14 = (int *)FUN_004d9b40();
      (**(code **)(*piVar14 + 0x84))(*(undefined4 *)(in_ECX + 0x28),1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004e8770(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a47848;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_004e8790(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a47848;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004e87c0(void)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int *local_c;
  int *local_8;
  undefined1 local_4 [4];
  
  local_18 = in_ECX;
  FUN_0046b990();
  if ((*(uint *)(in_ECX + 0x18) != 0) && ((*(uint *)(in_ECX + 8) >> 5 & 1) == 0)) {
    lVar1 = (ulonglong)*(uint *)(in_ECX + 0x18) * 0x10;
    piVar2 = (int *)FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    local_10 = 0;
    local_14 = 0;
    local_8 = piVar2;
    local_1c = FUN_006a9030();
joined_r0x004e8823:
    piVar5 = piVar2;
    if (local_1c != 0) {
      local_c = (int *)0x0;
      FUN_00452600(&local_1c,local_4,&local_c);
      piVar2 = local_8;
      if (local_c != (int *)0x0) {
        piVar5 = piVar5 + local_10 * 4;
        piVar6 = local_c;
        do {
          if ((piVar6[1] == 0) && (piVar2 = local_8, in_ECX = local_18, *piVar6 == 0)) break;
          iVar4 = 0;
          piVar2 = (int *)FUN_004e7de0();
          if (piVar2 != (int *)0x0) {
            iVar4 = 0;
            do {
              if (*piVar2 != 0) {
                iVar4 = iVar4 + 1;
              }
              piVar2 = (int *)piVar2[1];
            } while (piVar2 != (int *)0x0);
          }
          piVar2 = (int *)FUN_004bef40();
          local_14 = local_14 + iVar4;
          local_10 = local_10 + 1;
          *piVar5 = *piVar2;
          piVar5[1] = piVar2[1];
          piVar5[2] = piVar2[2];
          *(char *)(piVar5 + 3) = (char)iVar4;
          piVar6 = (int *)piVar6[1];
          piVar5 = piVar5 + 4;
          piVar2 = local_8;
          in_ECX = local_18;
        } while (piVar6 != (int *)0x0);
      }
      goto joined_r0x004e8823;
    }
    FUN_0046ae40(0x50524750,piVar5,*(int *)(in_ECX + 0x18) << 4);
    FUN_00401f20(piVar5);
    piVar2 = (int *)FUN_00401f00(-(uint)((int)((ulonglong)local_14 * 0xc >> 0x20) != 0) |
                                 (uint)((ulonglong)local_14 * 0xc));
    iVar4 = 0;
    local_c = piVar2;
    local_1c = FUN_006a9030();
    if (local_1c != 0) {
      do {
        local_8 = (int *)0x0;
        FUN_00452600(&local_1c,local_4,&local_8);
        piVar2 = local_c;
        for (piVar5 = local_8;
            (local_c = piVar2, piVar5 != (int *)0x0 && ((piVar5[1] != 0 || (*piVar5 != 0))));
            piVar5 = (int *)piVar5[1]) {
          piVar2 = (int *)FUN_004e7de0();
          if (piVar2 != (int *)0x0) {
            piVar6 = local_c + iVar4 * 3;
            do {
              if ((piVar2[1] == 0) && (*piVar2 == 0)) break;
              piVar3 = (int *)FUN_004bef40();
              *piVar6 = *piVar3;
              piVar6[1] = piVar3[1];
              piVar6[2] = piVar3[2];
              piVar2 = (int *)piVar2[1];
              iVar4 = iVar4 + 1;
              piVar6 = piVar6 + 3;
            } while (piVar2 != (int *)0x0);
          }
          piVar2 = local_c;
        }
      } while (local_1c != 0);
      local_1c = 0;
    }
    FUN_0046ae40(0x52524750,piVar2,local_14 * 0xc);
    FUN_00401f20(piVar2);
  }
  FUN_0046b9f0();
  return;
}



void FUN_004e8bf0(undefined4 param_1)

{
  int in_ECX;
  
  if (((char)param_1 != '\0') && (*(int **)(in_ECX + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(in_ECX + 0x2c) + 0x90))(1);
  }
  FUN_0046c640(param_1);
  return;
}



void FUN_004e8c20(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int in_ECX;
  int *piVar5;
  int *local_10;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  uVar4 = 0;
  if (*(uint *)(in_ECX + 0x20) != 0) {
    piVar5 = *(int **)(in_ECX + 0x24);
    do {
      if (*piVar5 != 0) {
        local_c = (*(int **)(in_ECX + 0x24))[uVar4];
        goto joined_r0x004e8c57;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar4 < *(uint *)(in_ECX + 0x20));
  }
  local_c = 0;
joined_r0x004e8c57:
  while (local_c != 0) {
    local_10 = (int *)0x0;
    local_8 = in_ECX;
    FUN_00452600(&local_c,local_4,&local_10);
    piVar5 = local_10;
    in_ECX = local_8;
    if (local_10 != (int *)0x0) {
      while (cVar3 = FUN_0046cb60(), cVar3 == '\0') {
        iVar1 = *piVar5;
        if (iVar1 != 0) {
          FUN_004befa0();
          FUN_00401f20(iVar1);
        }
        piVar2 = (int *)piVar5[1];
        if (piVar2 == (int *)0x0) {
          *piVar5 = 0;
        }
        else {
          piVar5[1] = piVar2[1];
          *piVar5 = *piVar2;
          FUN_00401f20(piVar2);
        }
      }
      FUN_00401f20(piVar5);
      in_ECX = local_8;
    }
  }
  FUN_007c2a40();
  *(undefined4 *)(in_ECX + 0x18) = 0;
  return;
}



int FUN_004e8d00(float *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int *local_4;
  
  local_4 = (int *)*param_1;
  uVar3 = FUN_004ef1d0((int)ROUND((float)local_4) >> 0xc,(int)ROUND(param_1[1]) >> 0xc);
  local_4 = (int *)0x0;
  FUN_0055e000(uVar3,&local_4);
  for (piVar1 = local_4; (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0))));
      piVar1 = (int *)piVar1[1]) {
    uVar3 = FUN_004bef40(param_1,0x40000000);
    cVar2 = FUN_0047d810(uVar3);
    if (cVar2 != '\0') {
      return *piVar1;
    }
  }
  return 0;
}



int FUN_004e8db0(undefined4 param_1,int *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float local_10;
  
  local_10 = 3.4028235e+38;
  iVar2 = 0;
  for (; (param_2 != (int *)0x0 && ((param_2[1] != 0 || (*param_2 != 0))));
      param_2 = (int *)param_2[1]) {
    iVar1 = *param_2;
    FUN_004bef40();
    fVar3 = (float10)FUN_00982c30();
    if ((float)fVar3 < local_10) {
      iVar2 = iVar1;
      local_10 = (float)fVar3;
    }
  }
  *param_3 = local_10;
  return iVar2;
}



void FUN_004e8e80(void)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  int *local_c;
  int local_8;
  undefined1 local_4 [4];
  
  uVar1 = 0;
  if (*(uint *)(in_ECX + 0x20) != 0) {
    piVar2 = *(int **)(in_ECX + 0x24);
    do {
      if (*piVar2 != 0) {
        local_8 = (*(int **)(in_ECX + 0x24))[uVar1];
        goto joined_r0x004e8ead;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 0x20));
  }
  local_8 = 0;
joined_r0x004e8ead:
  while (local_8 != 0) {
    local_c = (int *)0x0;
    FUN_00452600(&local_8,local_4,&local_c);
    for (piVar2 = local_c; (piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0))));
        piVar2 = (int *)piVar2[1]) {
      FUN_0067eda0();
    }
  }
  return;
}



void FUN_004e8f10(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b5f68;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a47868;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a47848;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004e8f80(byte param_1)

{
  FUN_004e8f10();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004e8fa0(void)

{
  uint uVar1;
  void *_Dst;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5fa3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  *in_ECX = &PTR_FUN_00a4788c;
  in_ECX[8] = 0x25;
  local_4 = 0;
  in_ECX[7] = &PTR_FUN_00a47848;
  in_ECX[10] = 0;
  _Dst = (void *)FUN_00401f00(0x94);
  in_ECX[9] = _Dst;
  _memset(_Dst,0,in_ECX[8] * 4);
  in_ECX[7] = &PTR_FUN_00a47868;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)(in_ECX + 1) = 0x38;
  in_ECX[0xb] = 0;
  in_ECX[6] = 0;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004e9060(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  int in_ECX;
  int iVar5;
  
  iVar1 = (int)param_1;
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = FUN_004bef40();
    iVar3 = FUN_004e8d00(uVar2);
    if (iVar3 == 0) {
      pfVar4 = (float *)FUN_004bef40();
      param_1 = (undefined4 *)(int)ROUND(*pfVar4);
      iVar5 = (int)param_1 >> 0xc;
      iVar3 = FUN_004bef40();
      param_1 = (undefined4 *)(int)ROUND(*(float *)(iVar3 + 4));
      iVar3 = (int)param_1 >> 0xc;
      uVar2 = FUN_004ef1d0(iVar5,iVar3);
      param_1 = (undefined4 *)0x0;
      FUN_0055e000(uVar2,&param_1);
      if (param_1 == (undefined4 *)0x0) {
        param_1 = (undefined4 *)FUN_00401f00(8);
        if (param_1 == (undefined4 *)0x0) {
          param_1 = (undefined4 *)0x0;
        }
        else {
          *param_1 = 0;
          param_1[1] = 0;
        }
        uVar2 = FUN_004ef1d0(iVar5,iVar3);
        FUN_00452570(uVar2,param_1);
      }
      FUN_00446cb0(iVar1);
      *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
    }
  }
  return;
}



int FUN_004e9150(float *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  int *piVar8;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  int local_10 [2];
  int local_8;
  float local_4;
  
  local_1c = 3.4028235e+38;
  local_18 = 0;
  iVar5 = 0;
  if (*(int *)(in_ECX + 0x28) != 0) {
    bVar2 = true;
    local_14 = 0;
    local_4 = param_1[1];
    iVar7 = (int)ROUND(*param_1) >> 0xc;
    local_10[0] = (int)ROUND(local_4);
    local_20 = 3.4028235e+38;
    iVar6 = local_10[0] >> 0xc;
    uVar4 = FUN_004ef1d0(iVar7,iVar6);
    piVar8 = (int *)(in_ECX + 0x1c);
    local_10[0] = 0;
    FUN_0055e000(uVar4,local_10);
    iVar5 = FUN_004e8db0(param_1,local_10[0],&local_20);
    if ((iVar5 != 0) && (local_20 < 3.4028235e+38)) {
      local_1c = local_20;
      local_18 = iVar5;
    }
    while (((iVar5 = local_18, bVar2 || (local_18 == 0)) && (local_14 < 0x14))) {
      local_14 = local_14 + 2;
      iVar7 = iVar7 + -1;
      iVar6 = iVar6 + -1;
      bVar2 = false;
      local_8 = local_14;
      if (0 < local_14) {
        do {
          uVar4 = FUN_004ef1d0(iVar7,iVar6);
          local_10[0] = 0;
          FUN_0055e000(uVar4,local_10);
          iVar5 = FUN_004e8db0(param_1,local_10[0],&local_20);
          if ((iVar5 != 0) && (local_20 < local_1c)) {
            local_1c = local_20;
            local_18 = iVar5;
          }
          iVar7 = iVar7 + 1;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        local_4 = (float)local_14;
        local_8 = 0;
        local_10[0] = iVar7;
        do {
          uVar4 = FUN_004ef1d0(local_10[0],iVar6);
          local_8 = 0;
          iVar5 = (**(code **)(*piVar8 + 4))(uVar4);
          for (puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x24) + iVar5 * 4);
              puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
            cVar3 = (**(code **)(*piVar8 + 8))(uVar4,puVar1[1]);
            if (cVar3 != '\0') {
              local_8 = puVar1[2];
              break;
            }
          }
          iVar5 = FUN_004e8db0(param_1,local_8,&local_20);
          if ((iVar5 != 0) && (local_20 < local_1c)) {
            local_1c = local_20;
            local_18 = iVar5;
          }
          iVar6 = iVar6 + 1;
          local_4 = (float)((int)local_4 + -1);
        } while (local_4 != 0.0);
        local_8 = local_14;
        local_4 = 0.0;
        do {
          uVar4 = FUN_004ef1d0(local_10[0],iVar6);
          local_4 = 0.0;
          iVar5 = (**(code **)(*piVar8 + 4))(uVar4);
          for (puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x24) + iVar5 * 4);
              puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
            cVar3 = (**(code **)(*piVar8 + 8))(uVar4,puVar1[1]);
            if (cVar3 != '\0') {
              local_4 = (float)puVar1[2];
              break;
            }
          }
          iVar5 = FUN_004e8db0(param_1,local_4,&local_20);
          if ((iVar5 != 0) && (local_20 < local_1c)) {
            local_1c = local_20;
            local_18 = iVar5;
          }
          local_10[0] = local_10[0] + -1;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        local_8 = local_14;
        do {
          uVar4 = FUN_004ef1d0(local_10[0],iVar6);
          local_4 = 0.0;
          iVar5 = (**(code **)(*piVar8 + 4))(uVar4);
          for (puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x24) + iVar5 * 4);
              puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
            cVar3 = (**(code **)(*piVar8 + 8))(uVar4,puVar1[1]);
            if (cVar3 != '\0') {
              local_4 = (float)puVar1[2];
              break;
            }
          }
          iVar5 = FUN_004e8db0(param_1,local_4,&local_20);
          if ((iVar5 != 0) && (local_20 < local_1c)) {
            local_1c = local_20;
            local_18 = iVar5;
          }
          iVar6 = iVar6 + -1;
          local_8 = local_8 + -1;
          iVar7 = local_10[0];
        } while (local_8 != 0);
      }
    }
  }
  return iVar5;
}



undefined1 * FUN_004e94c0(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  float *pfVar8;
  int iVar9;
  byte bVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  undefined1 auStack_100 [120];
  undefined4 uStack_88;
  undefined1 *puStack_84;
  float *pfStack_80;
  float *pfStack_7c;
  uint uStack_78;
  float local_50;
  float local_4c;
  float local_48;
  undefined1 local_44 [56];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5fc8;
  local_c = *unaff_FS_OFFSET;
  uStack_78 = DAT_00b30aac ^ (uint)&stack0xffffff8c;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar6 = auStack_100;
  bVar10 = 0;
  if (param_3 == 0) goto LAB_004e96ef;
  pfStack_80 = (float *)((int)ROUND(*param_1) >> 0xc);
  fVar1 = *param_2;
  pfStack_7c = (float *)((int)ROUND(param_1[1]) >> 0xc);
  fVar2 = param_2[1];
  puStack_84 = (undefined1 *)0x4e9576;
  uVar4 = FUN_004efe80();
  puStack_84 = (undefined1 *)0x4e9588;
  pfStack_80 = (float *)((int)ROUND(fVar1) >> 0xc);
  pfStack_7c = (float *)((int)ROUND(fVar2) >> 0xc);
  uVar5 = FUN_004efe80();
  pfStack_7c = (float *)0x1;
  puStack_84 = (undefined1 *)0x4e959c;
  pfStack_80 = (float *)uVar4;
  cVar3 = FUN_0043f8c0();
  if (cVar3 == '\0') {
LAB_004e95b6:
    pfStack_7c = param_1;
    pfStack_80 = (float *)0x4e95c2;
    puVar6 = (undefined1 *)FUN_004e9150();
    pfStack_7c = param_2;
    pfStack_80 = (float *)0x4e95cc;
    puVar7 = (undefined1 *)FUN_004e9150();
    if (((puVar6 != (undefined1 *)0x0) && (puVar7 != (undefined1 *)0x0)) && (puVar6 != puVar7)) {
      pfStack_7c = (float *)0x4e95ed;
      pfVar8 = (float *)FUN_004bef40();
      local_50 = *param_1 - *pfVar8;
      local_4c = param_1[1] - pfVar8[1];
      local_48 = param_1[2] - pfVar8[2];
      pfStack_7c = (float *)0x4e9630;
      fVar11 = (float10)FUN_00404c90();
      pfStack_7c = (float *)0x4e963b;
      pfVar8 = (float *)FUN_004bef40();
      local_50 = *param_2 - *pfVar8;
      local_4c = param_2[1] - pfVar8[1];
      local_48 = param_2[2] - pfVar8[2];
      pfStack_7c = (float *)0x4e967e;
      fVar12 = (float10)FUN_00404c90();
      local_50 = *param_1 - *param_2;
      local_4c = param_1[1] - param_2[1];
      local_48 = param_1[2] - param_2[2];
      pfStack_7c = (float *)0x4e96c5;
      fVar13 = (float10)FUN_00404c90();
      if (1000.0 <= (float)fVar11) {
        if ((float)fVar13 <= (float)fVar11 + (float)fVar12) goto LAB_004e96eb;
      }
      pfStack_7c = (float *)0x4e9710;
      FUN_0067d760();
      pfStack_7c = (float *)param_3;
      local_4 = 0;
      uStack_88 = 0x4e972e;
      puStack_84 = puVar6;
      pfStack_80 = (float *)puVar7;
      cVar3 = FUN_0067e610();
      if (cVar3 != '\0') {
        pfStack_7c = (float *)0x4e973d;
        iVar9 = FUN_0042b410();
        if (iVar9 != 0) {
          pfStack_7c = (float *)0x4e974a;
          iVar9 = FUN_00780d10();
          if (iVar9 != 0) {
            pfStack_7c = (float *)0x4e9757;
            pfStack_7c = (float *)FUN_006899c0();
            pfStack_80 = &local_50;
            puStack_84 = (undefined1 *)0x4e9764;
            FUN_004121a0();
            pfStack_7c = (float *)0x4e976b;
            fVar11 = (float10)FUN_00404c90();
            pfStack_7c = (float *)0x4e9779;
            pfStack_7c = (float *)FUN_006899c0();
            pfStack_80 = (float *)local_44;
            puStack_84 = (undefined1 *)0x4e9786;
            FUN_006899c0();
            puStack_84 = (undefined1 *)0x4e978d;
            FUN_004121a0();
            pfStack_7c = (float *)0x4e9794;
            fVar12 = (float10)FUN_00404c90();
            if ((float)fVar11 < (float)fVar12) {
              pfStack_7c = (float *)0x4e97b3;
              pfStack_7c = (float *)FUN_0042b410();
              pfStack_80 = (float *)0x4e97bb;
              FUN_0068c170();
            }
          }
        }
        bVar10 = 1;
      }
      pfStack_7c = (float *)0x4e97cc;
      FUN_004e8e80();
      local_4 = 0xffffffff;
      pfStack_7c = (float *)0x4e97dd;
      FUN_0060d0a0();
      puVar6 = (undefined1 *)(uint)bVar10;
      goto LAB_004e96ef;
    }
  }
  else {
    pfStack_7c = (float *)0x1;
    puStack_84 = (undefined1 *)0x4e95ae;
    pfStack_80 = (float *)uVar5;
    cVar3 = FUN_0043f8c0();
    if (cVar3 == '\0') goto LAB_004e95b6;
  }
LAB_004e96eb:
  puVar6 = (undefined1 *)0x0;
LAB_004e96ef:
  *unaff_FS_OFFSET = local_c;
  return puVar6;
}



undefined1 FUN_004e97f0(int *param_1,int param_2,float *param_3,float *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  uint *unaff_FS_OFFSET;
  undefined1 local_15;
  undefined1 local_14 [8];
  uint local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b600e;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (uint)&local_c;
  local_15 = 0;
  if (param_1 != (int *)0x0) {
    if (*param_3 != 3.4028235e+38) {
      if (*param_4 != 3.4028235e+38) {
        FUN_0068c040(uVar4);
        local_4 = 0;
        cVar3 = FUN_004e94c0(param_3,param_4,local_14);
        if (cVar3 == '\0') {
          FUN_0068c6e0();
        }
        iVar5 = FUN_0042b410();
        if (iVar5 != 0) {
          piVar8 = param_1;
          if (param_2 == 0) {
            iVar5 = FUN_00401f00(8);
            local_4._0_1_ = 1;
            if (iVar5 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = FUN_0068b0c0();
            }
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_0068b1d0(1);
            uVar6 = FUN_006899c0();
            FUN_0068b200(uVar6);
            FUN_00446cb0(uVar7);
            iVar5 = FUN_00780d10();
            piVar9 = param_1;
          }
          else {
            do {
              piVar1 = (int *)piVar8[1];
              if (((piVar1 == (int *)0x0) && (piVar9 = param_1, *piVar8 == 0)) ||
                 (piVar9 = piVar8, *piVar8 == param_2)) break;
              piVar8 = piVar1;
              piVar9 = param_1;
            } while (piVar1 != (int *)0x0);
          }
          if (piVar9 != (int *)0x0) {
            iVar2 = piVar9[1];
            while (iVar5 != 0) {
              iVar5 = FUN_00401f00(8);
              local_4._0_1_ = 2;
              if (iVar5 == 0) {
                iVar5 = 0;
              }
              else {
                iVar5 = FUN_0068b0c0();
              }
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_0068b1d0(1);
              uVar7 = FUN_006899c0();
              FUN_0068b200(uVar7);
              piVar8 = (int *)FUN_00401f00(8);
              if (piVar8 == (int *)0x0) {
                piVar8 = (int *)0x0;
              }
              else {
                *piVar8 = 0;
                piVar8[1] = 0;
              }
              if (iVar5 != 0) {
                *piVar8 = iVar5;
              }
              piVar8[1] = iVar2;
              piVar9[1] = (int)piVar8;
              iVar5 = FUN_00780d10();
              piVar9 = (int *)piVar9[1];
            }
            local_15 = 1;
          }
        }
        local_4 = 0xffffffff;
        FUN_0068c9b0();
        goto LAB_004e99bb;
      }
    }
  }
  local_15 = 0;
LAB_004e99bb:
  *unaff_FS_OFFSET = local_c;
  return local_15;
}



void FUN_004e99e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b6043;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a4788c;
  local_4 = 1;
  FUN_004e8c20(uVar1);
  local_4 = local_4 & 0xffffff00;
  FUN_004e8f10();
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004e9a50(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_1c;
  int local_18;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b606b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b09654,0,uVar2);
  if (iVar3 != 0) {
    FUN_004e8c20();
    local_18 = iVar3 + 0x1c;
    uVar2 = 0;
    if (*(uint *)(iVar3 + 0x20) != 0) {
      piVar6 = *(int **)(iVar3 + 0x24);
      do {
        if (*piVar6 != 0) {
          local_1c = (*(int **)(iVar3 + 0x24))[uVar2];
          goto joined_r0x004e9ad6;
        }
        uVar2 = uVar2 + 1;
        piVar6 = piVar6 + 1;
      } while (uVar2 < *(uint *)(iVar3 + 0x20));
    }
    local_1c = 0;
joined_r0x004e9ad6:
    while (local_1c != 0) {
      param_1 = (int *)0x0;
      FUN_00452600(&local_1c,&local_10,&param_1);
      for (piVar6 = param_1; (piVar6 != (int *)0x0 && ((piVar6[1] != 0 || (*piVar6 != 0))));
          piVar6 = (int *)piVar6[1]) {
        param_1 = (int *)FUN_00401f00(0x28);
        local_4 = 0;
        if (param_1 == (int *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_004bef70();
        }
        local_4 = 0xffffffff;
        uVar5 = FUN_004bef40();
        FUN_004bef50(uVar5);
        FUN_004e9060(uVar4);
      }
    }
    uVar2 = 0;
    if (*(uint *)(local_18 + 4) != 0) {
      piVar6 = *(int **)(local_18 + 8);
      do {
        if (*piVar6 != 0) {
          local_1c = (*(int **)(local_18 + 8))[uVar2];
          goto joined_r0x004e9b96;
        }
        uVar2 = uVar2 + 1;
        piVar6 = piVar6 + 1;
      } while (uVar2 < *(uint *)(local_18 + 4));
    }
    local_1c = 0;
joined_r0x004e9b96:
    while (local_1c != 0) {
      param_1 = (int *)0x0;
      FUN_00452600(&local_1c,&local_10,&param_1);
      for (; (param_1 != (int *)0x0 && ((param_1[1] != 0 || (*param_1 != 0))));
          param_1 = (int *)param_1[1]) {
        uVar4 = FUN_004bef40();
        local_10 = FUN_004e8d00(uVar4);
        for (piVar6 = (int *)FUN_004e7de0();
            (piVar6 != (int *)0x0 && ((piVar6[1] != 0 || (*piVar6 != 0))));
            piVar6 = (int *)piVar6[1]) {
          uVar4 = FUN_004bef40();
          iVar3 = FUN_004e8d00(uVar4);
          if (iVar3 != 0) {
            piVar7 = (int *)FUN_004e7de0();
            iVar1 = piVar7[1];
            while (iVar1 != 0) {
              piVar7 = (int *)piVar7[1];
              iVar1 = piVar7[1];
            }
            if (*piVar7 == 0) {
              *piVar7 = iVar3;
            }
            else {
              piVar8 = (int *)FUN_00401f00(8);
              if (piVar8 == (int *)0x0) {
                piVar7[1] = 0;
              }
              else {
                *piVar8 = iVar3;
                piVar8[1] = 0;
                piVar7[1] = (int)piVar8;
              }
            }
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004e9ca0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  byte *pbVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  uint local_28;
  uint local_18;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009b609b;
  local_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  cVar1 = FUN_004511c0(uVar2);
  if (cVar1 == '8') {
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 == 0x44494445) {
        FUN_00450c20(&stack0xffffffc0,0x200);
        (**(code **)(*in_ECX + 0xd8))(&stack0xffffffc0);
      }
      else if (iVar3 == 0x50524750) {
        uVar2 = *(uint *)(param_1 + 0x254) >> 4;
        iVar4 = FUN_00401f00(uVar2 * 0x10);
        FUN_00450c20(iVar4,uVar2 << 4);
        iVar5 = FUN_00401f00(uVar2 * 4);
        uVar9 = 0;
        local_18 = 0;
        iVar3 = iVar4;
        if (uVar2 != 0) {
          do {
            iVar6 = FUN_00401f00(0x28);
            uVar8 = 0;
            local_8 = 0;
            if (iVar6 != 0) {
              uVar8 = FUN_004bef70();
            }
            local_8 = 0xffffffff;
            FUN_004bef50(iVar3);
            FUN_004e9060(uVar8);
            *(undefined4 *)(iVar5 + uVar9 * 4) = uVar8;
            local_18 = local_18 + *(byte *)(iVar3 + 0xc);
            uVar9 = uVar9 + 1;
            iVar3 = iVar3 + 0x10;
          } while (uVar9 < uVar2);
          if (((local_18 != 0) && (cVar1 = FUN_0044fea0(), cVar1 != '\0')) &&
             (iVar3 = FUN_004510b0(), iVar3 == 0x52524750)) {
            iVar6 = FUN_00401f00(-(uint)((int)((ulonglong)local_18 * 0xc >> 0x20) != 0) |
                                 (uint)((ulonglong)local_18 * 0xc));
            FUN_00450c20(iVar6,local_18 * 0xc);
            iVar3 = 0;
            local_18 = 0;
            local_28 = 0;
            pbVar7 = (byte *)(iVar4 + 0xc);
            do {
              uVar9 = 0;
              if (*pbVar7 != 0) {
                iVar10 = iVar6 + iVar3 * 0xc;
                do {
                  iVar3 = FUN_004e8d00(iVar10);
                  if (iVar3 != 0) {
                    FUN_004befe0(iVar3);
                  }
                  iVar3 = local_18 + 1;
                  uVar9 = uVar9 + 1;
                  iVar10 = iVar10 + 0xc;
                  local_18 = iVar3;
                } while (uVar9 < *pbVar7);
              }
              local_28 = local_28 + 1;
              pbVar7 = pbVar7 + 0x10;
            } while (local_28 < uVar2);
            FUN_00401f20(iVar6);
          }
        }
        FUN_00401f20(iVar4);
        FUN_00401f20(iVar5);
      }
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar3 = FUN_004510b0();
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar8;
}



void FUN_004e9f20(byte param_1)

{
  FUN_004e99e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined1 FUN_004e9f40(void)

{
  return DAT_00b3608f;
}



void FUN_004e9f50(void)

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
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x60,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004ec650(in_ECX);
  }
  *in_ECX = uVar3;
  *(undefined2 *)(in_ECX + 2) = 0;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004e9fc0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a4796c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_004e9fe0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a4796c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004ea010(char param_1)

{
  undefined4 local_10;
  
  DAT_00b09ae5 = param_1;
  if (param_1 == '\0') {
    local_10 = 0x3f800000;
    DAT_00b2c71c = 0;
  }
  else {
    local_10 = 0;
    DAT_00b2c71c = 0x3f800000;
  }
  DAT_00b2c718 = local_10;
  return;
}



void FUN_004ea080(int param_1)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  int local_8;
  undefined1 local_4 [4];
  
  if ((char)param_1 != '\0') {
    FUN_00707610();
    FUN_00707980();
    FUN_00707370(0,0);
    return;
  }
  uVar1 = 0;
  if (*(uint *)(in_ECX + 4) != 0) {
    piVar2 = *(int **)(in_ECX + 8);
    do {
      if (*piVar2 != 0) {
        local_8 = (*(int **)(in_ECX + 8))[uVar1];
        goto joined_r0x004ea0eb;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 4));
  }
  local_8 = 0;
joined_r0x004ea0eb:
  while (local_8 != 0) {
    param_1 = 0;
    FUN_00452600(&local_8,local_4,&param_1);
    if (param_1 != 0) {
      FUN_004ecae0(*(undefined4 *)(DAT_00b333a0 + 0x10));
      FUN_004ecae0(*(undefined4 *)(DAT_00b333a0 + 0x10));
      FUN_004ecae0(*(undefined4 *)(DAT_00b333a0 + 0x10));
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ea160(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  float10 fVar8;
  undefined4 local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b60c8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((DAT_00b09b48 != '\0') || (*(int *)(DAT_00b333a0 + 0x34) != 0)) goto LAB_004ea388;
  iVar6 = FUN_0043f270(uVar5);
  if (iVar6 == 0) {
LAB_004ea229:
    if (DAT_00b3608f == '\0') goto LAB_004ea388;
  }
  else {
    iVar7 = FUN_004ef1a0();
    while (iVar7 != 0) {
      iVar6 = FUN_004ef1a0();
      iVar7 = FUN_004ef1a0();
    }
    cVar4 = FUN_004ef2d0(4);
    if ((cVar4 == '\0') && (DAT_00b3608f != '\0')) {
      FUN_004eb0e0(0);
      FUN_004bdd40();
      FUN_004bdcd0();
      goto LAB_004ea229;
    }
    cVar4 = FUN_004ef2d0(4);
    if (cVar4 == '\0') goto LAB_004ea229;
    if (DAT_00b3608f == '\0') {
      if (DAT_00b02d70 == '\0') goto LAB_004ea388;
      FUN_004eb0e0(1);
      goto LAB_004ea229;
    }
  }
  if ((char)param_5 == '\0') {
    FUN_0043f720(&local_1c,0);
    FUN_007b4520(&local_1c);
  }
  local_20 = 0;
  local_1c = param_1;
  local_4 = 0;
  local_18 = param_2;
  fVar8 = (float10)FUN_00982c30();
  local_24 = (float)fVar8;
  iVar7 = FUN_00483850();
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  local_24 = fVar1 * 4096.0 * local_24;
  local_28 = local_24;
  if (local_24 < _DAT_00b09af8) {
    local_28 = _DAT_00b09af8;
  }
  local_24 = (float)FUN_006a9030();
  uVar3 = local_18;
  uVar2 = local_1c;
  while (local_24 != 0.0) {
    local_2c = 0;
    FUN_00452600(&local_24,&local_1c,&local_2c);
    if (((DAT_00b3608f == '\0') || (*(int *)(DAT_00b333a0 + 0x34) != 0)) ||
       (iVar6 != *(int *)(param_4 + 0x10))) {
      FUN_004ecae0(*(undefined4 *)(DAT_00b333a0 + 0x10));
    }
    else {
      FUN_004ed430(*(undefined4 *)(DAT_00b333a0 + 0x10),local_28,uVar2,uVar3,param_5);
    }
  }
  FUN_00707610();
  FUN_00707980();
  FUN_00707370(0,1);
LAB_004ea388:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004ea3a0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = param_1;
  FUN_004e9f50();
  return;
}



void FUN_004ea3c0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b60f8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a479d4;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a4796c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004ea430(byte param_1)

{
  FUN_004ea3c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ea450(void)

{
  longlong lVar1;
  uint uVar2;
  void *_Dst;
  int iVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b6128;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[1] = 0x25;
  *in_ECX = &PTR_FUN_00a4796c;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(0x94,uVar2);
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a479d4;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  local_4 = 0;
  if (DAT_00b360a0 == 0) {
    iVar3 = (int)(0x800 / (longlong)DAT_00b09b20);
    if (DAT_00b36098 == 0) {
      lVar1 = (ulonglong)(uint)(iVar3 * iVar3) * 0xc;
      DAT_00b36098 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2)
      ;
    }
    if (DAT_00b3609c == 0) {
      lVar1 = (ulonglong)(uint)(iVar3 * iVar3) * 4;
      DAT_00b3609c = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2)
      ;
    }
  }
  DAT_00b360a0 = DAT_00b360a0 + 1;
  _DAT_00b46064 = _DAT_00b09b28;
  _DAT_00b46068 = _DAT_00b09b30;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004ea570(void)

{
  FUN_004ea080(0);
  return;
}



int FUN_004ea580(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  uVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca5ab;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 + 0x8000U < 0x10000) && (param_2 + 0x8000 < 0x10000)) {
    uVar2 = param_2 & 0xffff | (int)(short)param_1 << 0x10;
    param_2 = 0;
    FUN_0055e000(uVar2,&param_2);
    iVar3 = param_2;
    if ((param_2 == 0) && ((char)param_3 != '\0')) {
      param_3 = FUN_00401f00(0x10);
      local_4 = iVar3;
      if (param_3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ea3a0(in_ECX);
      }
      *(short *)(iVar3 + 8) = (short)param_1;
      local_4 = 0xffffffff;
      *(short *)(iVar3 + 10) = (short)uVar1;
      FUN_00452570(uVar2,iVar3);
    }
  }
  else {
    FUN_004a7a60("Trying to get LOD for invalid world coordinate.",uVar2);
    iVar3 = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



void FUN_004ea670(float *param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fVar1 = *param_1;
  FUN_00985a00((double)(param_1[1] * 7.6293945e-06),param_2);
  uVar2 = FUN_009828c0();
  FUN_00985a00((double)(fVar1 * 7.6293945e-06),uVar2);
  uVar3 = FUN_009828c0();
  FUN_004ea580(uVar3,uVar2,param_2);
  return;
}



void FUN_004ea6e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0043f270();
  if (iVar1 != 0) {
    iVar1 = FUN_004ef1a0();
    while (iVar1 != 0) {
      FUN_004ef1a0();
      iVar1 = FUN_004ef1a0();
    }
    uVar2 = FUN_004ef7e0(param_4);
    FUN_004ea160(param_1,param_2,param_3,uVar2);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ea750(void)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float *unaff_FS_OFFSET;
  float local_14;
  float local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (float)&local_c;
  if (_DAT_00b09b18 < 400.5) {
    _DAT_00b09b18 = 0.0;
  }
  local_14 = _DAT_00b09b18;
  fVar1 = (float)(DAT_00b06a2c << 0xc);
  if (DAT_00b06a2c << 0xc < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  if (fVar1 < _DAT_00b09b18) {
    local_14 = fVar1;
  }
  _DAT_00b36090 = local_14;
  piVar3 = (int *)FUN_007b4280(0,uVar2);
  iVar4 = FUN_00401f00(0xdc);
  local_4 = 0;
  if (iVar4 == 0) {
    DAT_00b36094 = 0;
  }
  else {
    DAT_00b36094 = FUN_0070b780(0);
  }
  local_4 = 0xffffffff;
  FUN_006ff420("Grass");
  (**(code **)(*piVar3 + 0x84))(DAT_00b36094,0);
  if ((((DAT_00b333a0 != 0) && (*(int *)(DAT_00b333a0 + 0x5c) != 0)) &&
      (*(int *)(*(int *)(DAT_00b333a0 + 0x5c) + 0x20) != 0)) && (iVar4 = FUN_00943410(), iVar4 != 0)
     ) {
    uVar5 = FUN_00943410();
    FUN_00405680(uVar5);
  }
  FUN_00707610();
  DAT_00b3608d = 1;
  *unaff_FS_OFFSET = local_14;
  return;
}



void FUN_004ea8a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,float *param_6,undefined4 param_7)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST1;
  int in_stack_0000002c;
  int in_stack_00000030;
  ushort in_stack_0000003c;
  undefined4 in_stack_00000040;
  float in_stack_00000044;
  int local_f0;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  uint local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  uint local_b4;
  int local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  double local_70;
  undefined1 local_68 [84];
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_009b6158;
  local_14 = *unaff_FS_OFFSET;
  uVar9 = DAT_00b30aac ^ (uint)&stack0xfffffef8;
  *unaff_FS_OFFSET = (int)&local_14;
  local_74 = 0;
  local_c = 0;
  fVar11 = (float10)FUN_00986000(uVar9);
  local_88 = (float)fVar11;
  fVar11 = (float10)FUN_00986000();
  local_78 = (float)fVar11;
  if (param_4 == 0) {
    FUN_006f7070("TESTerrainLODManager::CreateGrass - NULL land",
                 "..\\TES Shared\\TESTerrainLODManager.cpp",0x523);
  }
  cVar8 = FUN_004bf150();
  if (cVar8 != '\0') {
    local_ac = (float)(DAT_00b35bf0 << 8);
    local_c4 = (int)ROUND(local_ac / *(float *)(in_stack_0000002c + 8)) & 0xffff;
    uVar9 = (DAT_00b35bf0 << 8) / DAT_00b09b20;
    if ((int)uVar9 < (int)local_c4) {
      iVar10 = 0;
      do {
        iVar1 = iVar10 * 4;
        iVar10 = iVar10 + 1;
        *(float *)(in_stack_00000030 + -4 + iVar10 * 4) =
             *(float *)(in_stack_00000030 + iVar1) / ((float)(int)uVar9 / (float)local_c4);
      } while (iVar10 < 9);
      local_c4 = uVar9 & 0xffff;
    }
    local_b4 = 0;
    local_c0 = 0;
    fVar5 = 3.0 / (float)local_c4;
    local_ac = local_ac / (float)local_c4;
    local_d4 = param_6[2];
    if (local_c4 != 0) {
      do {
        local_bc = 0;
        local_70 = (double)((float)local_c0 * local_ac);
        local_8c = (float)local_c0 * fVar5;
        do {
          local_dc = *param_6 + (float)local_70;
          local_d8 = (float)local_bc * local_ac + param_6[1];
          fVar6 = (float)local_bc * fVar5;
          local_b0 = (int)ROUND(local_8c);
          local_b8 = (int)ROUND(fVar6);
          fVar7 = local_8c - (float)local_b0;
          iVar10 = local_b8 + local_b0 + local_b8 * 2;
          fVar6 = fVar6 - (float)local_b8;
          if (fVar7 <= 0.01) {
            fVar3 = 0.0;
            local_e0 = 0.0;
          }
          else {
            if (local_b0 < 2) {
              local_e0 = *(float *)(in_stack_00000030 + 4 + iVar10 * 4);
            }
            else {
              local_e0 = *(float *)(in_stack_00000030 + iVar10 * 4);
            }
            if (fVar6 <= 0.01) {
              fVar3 = 0.0;
            }
            else if (local_b8 < 2) {
              if (local_b0 < 2) {
                fVar3 = *(float *)(in_stack_00000030 + 0x10 + iVar10 * 4);
              }
              else {
                fVar3 = *(float *)(in_stack_00000030 + 0xc + iVar10 * 4);
              }
            }
            else if (local_b0 < 2) {
              fVar3 = *(float *)(in_stack_00000030 + 4 + iVar10 * 4);
            }
            else {
              fVar3 = *(float *)(in_stack_00000030 + iVar10 * 4);
            }
          }
          if (fVar6 <= 0.01) {
            fVar4 = 0.0;
          }
          else if (local_b8 < 2) {
            fVar4 = *(float *)(in_stack_00000030 + 0xc + iVar10 * 4);
          }
          else {
            fVar4 = *(float *)(in_stack_00000030 + iVar10 * 4);
          }
          local_f0 = (int)(longlong)
                          ROUND(((fVar3 * fVar7 + fVar4 * (1.0 - fVar7)) * fVar6 +
                                (*(float *)(in_stack_00000030 + iVar10 * 4) * (1.0 - fVar7) +
                                local_e0 * fVar7) * (1.0 - fVar6)) * 32768.0);
          if ((local_f0 == 0) || (iVar10 = FUN_0047e020(0x7fff), local_f0 <= iVar10))
          goto LAB_004eb051;
          local_e0 = 0.0;
          fVar11 = (float10)FUN_0047e140();
          local_dc = (float)fVar11 * *(float *)(in_stack_0000002c + 8) + local_dc;
          fVar11 = (float10)FUN_0047e140();
          local_d8 = (float)fVar11 * *(float *)(in_stack_0000002c + 8) + local_d8;
          iVar10 = FUN_009828c0();
          fVar11 = (float10)iVar10;
          if ((float10)0 < extraout_ST0 - fVar11 == ((float10)0 == extraout_ST0 - fVar11)) {
            fVar11 = fVar11 - (float10)1.0;
          }
          local_dc = (float)fVar11;
          iVar10 = FUN_009828c0();
          fVar11 = (float10)iVar10;
          if (extraout_ST0_00 - fVar11 < extraout_ST1) {
            fVar11 = fVar11 - (float10)1.0;
          }
          local_d8 = (float)fVar11;
          local_d4 = 0.0;
          cVar8 = FUN_004c3030(local_68,&local_dc,0);
          FUN_00440590(&local_dc,&local_e0);
          switch(in_stack_00000040) {
          case 0:
            fVar6 = (float)in_stack_0000003c;
            break;
          case 1:
            if (local_e0 < in_stack_00000044) goto LAB_004eb051;
            fVar6 = (float)in_stack_0000003c + in_stack_00000044;
            goto joined_r0x004ead3c;
          case 2:
            fVar6 = in_stack_00000044 - (float)in_stack_0000003c;
joined_r0x004ead3c:
            if (local_e0 <= fVar6) goto switchD_004eacca_default;
            goto LAB_004eb051;
          case 3:
            if (in_stack_00000044 < local_e0) goto LAB_004eb051;
            fVar6 = (float)in_stack_0000003c;
            break;
          case 4:
            if (local_e0 < in_stack_00000044 + (float)in_stack_0000003c) {
              fVar6 = in_stack_00000044 - (float)in_stack_0000003c;
              goto joined_r0x004ead3c;
            }
            goto switchD_004eacca_default;
          case 5:
            fVar6 = (float)in_stack_0000003c;
            if (in_stack_00000044 + fVar6 < local_e0) goto LAB_004eb051;
            break;
          default:
            goto switchD_004eacca_default;
          }
          if (in_stack_00000044 - fVar6 <= local_e0) {
switchD_004eacca_default:
            iVar10 = FUN_009828c0();
            fVar11 = (float10)iVar10;
            if (extraout_ST0_01 - fVar11 < (float10)0.0) {
              fVar11 = fVar11 - (float10)1.0;
            }
            local_d4 = (float)fVar11;
            if (cVar8 == '\0') {
              FUN_004406a0(&local_dc,&local_d0,&local_a8);
            }
            else {
              FUN_004c3540(local_68,&local_d0,&local_a8);
            }
            if (*(char *)(in_stack_0000002c + 0x1e) != '\0') {
              if (*(char *)(in_stack_0000002c + 0x1c) == '\0') {
                if ((*(char *)(in_stack_0000002c + 0x1e) != '\0') &&
                   (*(char *)(in_stack_0000002c + 0x1c) == '\0')) {
                  local_d0 = local_a8 + local_d0;
                  local_cc = local_a4 + local_cc;
                  local_c8 = local_a0 + local_c8;
                  local_84 = local_d0;
                  local_80 = local_cc;
                  local_7c = local_c8;
                  FUN_0043f350();
                }
              }
              else {
                local_d0 = local_a8;
                local_cc = local_a4;
                local_c8 = local_a0;
              }
            }
            if ((local_78 <= local_c8) && (local_c8 <= local_88)) {
              local_d0 = local_d0 * 0.5 + 0.5;
              if (!NAN(local_d0) && 0.97 < local_d0 != (local_d0 == 0.97)) {
                local_d0 = 0.97;
              }
              local_cc = local_cc * 0.5 + 0.5;
              if (0.97 <= local_cc) {
                local_cc = 0.97;
              }
              local_c8 = local_c8 * 0.5 + 0.5;
              if (0.97 <= local_c8) {
                local_c8 = 0.97;
              }
              local_dc = local_d0 + local_dc;
              local_d8 = local_cc + local_d8;
              local_d4 = local_c8 + local_d4;
              local_9c = 0.0;
              local_98 = 0.0;
              local_94 = 0.0;
              local_90 = 0;
              if (cVar8 == '\0') {
                FUN_004407a0(&local_dc,&local_9c);
              }
              else {
                FUN_004c4b70(local_68,&local_9c);
              }
              uVar9 = local_b4 & 0xffff;
              pfVar2 = (float *)(DAT_00b36098 + uVar9 * 0xc);
              local_b4 = local_b4 + 1;
              *pfVar2 = local_dc;
              pfVar2[1] = local_d8;
              pfVar2[2] = local_d4;
              *(float *)(DAT_00b3609c + uVar9 * 4) =
                   local_94 * 0.32 + local_98 * 0.37 + local_9c * 0.31;
            }
          }
LAB_004eb051:
          local_bc = local_bc + 1;
        } while (local_bc < (int)local_c4);
        local_c0 = local_c0 + 1;
      } while (local_c0 < (int)local_c4);
      if ((short)local_b4 != 0) {
        FUN_007c4f50(param_5,param_1,param_2,param_7,in_stack_0000002c,DAT_00b36098,DAT_00b3609c,
                     local_b4);
      }
    }
  }
  *unaff_FS_OFFSET = local_14;
  return;
}



void FUN_004eb0e0(char param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_00b3608f != param_1) {
    DAT_00b3608f = param_1;
    if (param_1 == '\0') {
      uVar2 = 0;
      FUN_0043f270(0);
      FUN_004ef7e0();
      FUN_004ea080(uVar2);
      if (DAT_00b34424 != 0) {
        *(ushort *)(DAT_00b34424 + 0x18) = *(ushort *)(DAT_00b34424 + 0x18) | 1;
      }
      if (*(int *)(DAT_00b333a0 + 0x54) != 0) {
        FUN_00499e20();
        return;
      }
    }
    else {
      if (DAT_00b34424 != 0) {
        *(ushort *)(DAT_00b34424 + 0x18) = *(ushort *)(DAT_00b34424 + 0x18) & 0xfffe;
      }
      uVar2 = FUN_0043f270();
      FUN_00483d60(uVar2);
      FUN_0049e280();
      puVar1 = (undefined4 *)(**(code **)(*DAT_00b333c4 + 0x174))();
      FUN_004ea6e0(*puVar1,puVar1[1],puVar1[2],0);
    }
  }
  return;
}



void FUN_004eb1a0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  int local_30;
  int iStack_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  int local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_009b619e;
  local_14 = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_14;
  local_20 = 0;
  local_1c = 0;
  local_1a = 0;
  local_c = 0;
  local_30 = -0x20;
  do {
    uVar6 = 0xffffffe0;
    do {
      FUN_00402e30(&local_20,".\\Data\\Meshes\\Landscape\\LOD\\%i.%02i.%02i.%i.NIF",
                   *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0xc),local_30 << 5,uVar6 << 5,0x20,
                   uVar2);
      if (DAT_00b33a04 != (int *)0x0) {
        iVar3 = (**(code **)(*DAT_00b33a04 + 4))(local_20,0,0,0xffffffff);
        if (iVar3 != 0) {
          puVar4 = (undefined4 *)FUN_00401f00(0x10);
          local_c._0_1_ = 1;
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4[1] = in_ECX;
            iStack_24 = FUN_00401f00(0x60);
            local_c._0_1_ = 2;
            if (iStack_24 == 0) {
              *puVar4 = 0;
              *(undefined2 *)(puVar4 + 2) = 0;
              *(undefined2 *)((int)puVar4 + 10) = 0;
            }
            else {
              uVar5 = FUN_004ec650(puVar4);
              *puVar4 = uVar5;
              *(undefined2 *)(puVar4 + 2) = 0;
              *(undefined2 *)((int)puVar4 + 10) = 0;
            }
          }
          *(short *)(puVar4 + 2) = (short)local_30;
          *(short *)((int)puVar4 + 10) = (short)uVar6;
          uVar7 = uVar6 & 0xffff | (int)(short)local_30 << 0x10;
          local_c = (uint)local_c._1_3_ << 8;
          cVar1 = FUN_0055e000(uVar7,&iStack_24);
          if (cVar1 == '\0') {
            FUN_00452570(uVar7,puVar4);
            puVar4[1] = in_ECX;
          }
          else {
            FUN_004a7a60("Unable to add LOD for LOD space (%i, %i) because LOD already exists.",
                         (int)*(short *)(puVar4 + 2),(int)*(short *)((int)puVar4 + 10));
          }
          uVar5 = (**(code **)(**(int **)(in_ECX + 0x10) + 0xd4))();
          FUN_0040fec0("Found terrain LOD file for %i, %i in worldspace \'%s\'",local_30,uVar6,uVar5
                      );
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0x20);
    local_30 = local_30 + 1;
  } while (local_30 < 0x20);
  FUN_00401f20(local_20);
  *unaff_FS_OFFSET = local_14;
  return;
}



uint FUN_004eb370(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  
  if (DAT_00b06ab8 == '\0') {
    return in_EAX & 0xffffff00;
  }
  iVar1 = FUN_009828c0();
  uVar2 = FUN_009828c0();
  piVar3 = (int *)FUN_004ea580(-1 - iVar1,uVar2,0);
  if (piVar3 != (int *)0x0) {
    uVar4 = (uint)piVar3 & 0xffffff00;
    if (*piVar3 != 0) {
      uVar4 = FUN_004ec990(param_1,param_2,param_3);
    }
    return uVar4;
  }
  return 0;
}



void FUN_004eb3f0(int param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 float param_10,float param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  float10 fVar13;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  int local_98;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  float local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [16];
  
  fVar12 = DAT_00b35bf0;
  if (DAT_00b360a4 == '\0') {
    local_54 = (int)DAT_00b35bf0 << 7;
    local_60 = 0;
    local_74 = 0;
    local_78 = local_78 & 0xffffff00;
    local_6c = local_6c & 0xffffff00;
    local_94 = DAT_00b35bf0;
    local_70 = 8;
    if (((param_1 != 0) && (iVar6 = FUN_004c9cf0(), iVar6 != 0)) &&
       (iVar6 = FUN_004ce3c0(), iVar6 != 0)) {
      fVar13 = (float10)FUN_004cace0();
      local_50 = (float)fVar13;
      local_90 = FUN_004ce3c0();
      local_58 = FUN_004c9a80();
      local_68 = FUN_004c9aa0();
      local_8c = param_6;
      local_88 = param_7;
      FUN_00499020();
      local_98 = 0;
      param_11 = param_11 + param_11;
      do {
        iVar6 = local_98;
        iVar7 = FUN_00441800(local_98,0);
        if (iVar7 != 0) {
          FUN_004c0530(local_2c,0,0,0,0);
          local_3c = *(float *)(iVar7 + 0x20);
          local_38 = *(float *)(iVar7 + 0x24);
          local_34 = *(undefined4 *)(iVar7 + 0x28);
          local_4c = param_3 - local_3c;
          local_30 = *(float *)(iVar7 + 0x2c);
          local_48 = param_4 - local_38;
          local_a4 = local_4c * local_4c + local_48 * local_48;
          fVar13 = (float10)FUN_00982c30();
          local_a4 = (float)fVar13 - local_30;
          local_a0 = fVar12;
          if (param_10 <= local_a4) {
            if ((int)fVar12 < 0x10) {
              iVar7 = (int)fVar12 * 0x22;
              local_7c = (int)fVar12 * 0x11;
              do {
                iVar6 = local_7c + (int)local_a0;
                do {
                  pfVar8 = (float *)FUN_004c0530(local_20,local_98,iVar6,0,0);
                  local_b8 = *pfVar8 - 256.0;
                  local_b4 = pfVar8[1] - 256.0;
                  uVar9 = FUN_007c2990(local_b8,local_b4,pfVar8[2]);
                  FUN_007c3980(uVar9);
                  fVar12 = (float)((int)fVar12 + (int)local_94 * 2);
                  iVar6 = iVar6 + iVar7;
                } while ((int)fVar12 < 0x10);
                local_a0 = (float)((int)local_a0 + (int)local_94 * 2);
                fVar12 = local_94;
                iVar6 = local_98;
              } while ((int)local_a0 < 0x10);
            }
          }
          else if ((int)fVar12 < 0x10) {
            local_5c = (int)fVar12 * 0x22;
            local_7c = (int)fVar12 * 0x11;
            do {
              local_84 = local_7c + (int)local_a0;
              local_a4 = fVar12;
              do {
                pfVar8 = (float *)FUN_004c0530(local_14,iVar6,local_84,0,0);
                local_b8 = *pfVar8;
                local_b4 = pfVar8[1];
                fVar1 = pfVar8[2];
                local_9c = param_3 - local_b8;
                local_b0 = fVar1;
                if (local_9c * local_9c + (param_4 - local_b4) * (param_4 - local_b4) <= 262144.0) {
LAB_004eb82f:
                  local_b8 = local_b8 - 256.0;
                  local_b4 = local_b4 - 256.0;
                  uVar9 = FUN_007c2990(local_b8,local_b4,fVar1);
                  iVar7 = FUN_004c1030(iVar6,local_84);
                  iVar11 = 0;
                  fVar12 = local_94;
                  iVar6 = local_98;
                  if (iVar7 != 0) {
                    while (((fVar12 = local_94, iVar6 = local_98, iVar11 < 0x10 &&
                            (piVar10 = *(int **)(iVar7 + iVar11 * 4), piVar10 != (int *)0x0)) &&
                           (*piVar10 != 0))) {
                      cVar4 = FUN_007c2ec0(piVar10[1],uVar9);
                      if (cVar4 == '\0') {
                        piVar10 = (int *)FUN_004471a0(*(undefined4 *)
                                                       (*(int *)(iVar7 + iVar11 * 4) + 4));
                        if (piVar10 != (int *)0x0) {
                          local_74 = (**(code **)(*piVar10 + 0x140))();
                          local_74 = local_74 & 0xffff;
                          local_70 = (**(code **)(*piVar10 + 0x148))();
                          uVar5 = (**(code **)(*piVar10 + 0x130))();
                          local_6c = CONCAT31(local_6c._1_3_,uVar5);
                          uVar5 = (**(code **)(*piVar10 + 0x128))();
                          local_78 = CONCAT31(local_78._1_3_,uVar5);
                        }
                        iVar6 = *(int *)(iVar7 + iVar11 * 4);
                        FUN_004ea8a0(local_58,local_68,local_98,local_90,uVar9,&local_b8,param_2,
                                     param_3,param_4,param_5,iVar6,iVar6 + 0x20,param_9,param_10,
                                     local_74,local_70,local_50,local_78,local_6c);
                      }
                      iVar11 = iVar11 + 1;
                    }
                  }
                }
                else {
                  local_80 = (float)local_54;
                  local_44 = local_80 - param_3;
                  local_40 = local_80 - param_4;
                  local_ac = local_b8 + local_44;
                  fVar2 = local_b4 + local_40;
                  local_a8 = fVar2;
                  local_9c = local_ac;
                  FUN_00499020();
                  fVar13 = (float10)FUN_00986130();
                  if ((float)fVar13 <= param_11) goto LAB_004eb82f;
                  fVar3 = (local_b8 - local_80) - param_3;
                  local_ac = fVar3;
                  local_a8 = fVar2;
                  FUN_00499020();
                  fVar13 = (float10)FUN_00986130();
                  if ((float)fVar13 <= param_11) goto LAB_004eb82f;
                  local_ac = local_9c;
                  local_a8 = (local_b4 - local_80) - param_4;
                  local_9c = local_a8;
                  FUN_00499020();
                  fVar13 = (float10)FUN_00986130();
                  if ((float)fVar13 <= param_11) goto LAB_004eb82f;
                  local_a8 = local_9c;
                  local_ac = fVar3;
                  FUN_00499020();
                  fVar13 = (float10)FUN_00986130();
                  if ((float)fVar13 <= param_11) goto LAB_004eb82f;
                  local_b8 = local_b8 - 256.0;
                  local_b4 = local_b4 - 256.0;
                  local_b0 = param_5;
                  uVar9 = FUN_007c2990(local_b8,local_b4,param_5);
                  FUN_007c3980(uVar9);
                }
                local_84 = local_84 + local_5c;
                local_a4 = (float)((int)local_a4 + (int)fVar12 * 2);
              } while ((int)local_a4 < 0x10);
              local_a0 = (float)((int)local_a0 + (int)fVar12 * 2);
            } while ((int)local_a0 < 0x10);
          }
        }
        while (local_60 != 0) {
          iVar7 = *(int *)(local_60 + 4);
          FUN_00401f20(local_60);
          local_60 = iVar7;
        }
        local_98 = iVar6 + 1;
      } while (local_98 < 4);
    }
  }
  return;
}



void FUN_004ebae0(char param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  FUN_0043f270();
  FUN_004ef7e0();
  if (param_1 == '\0') {
    if (DAT_00b3608f != '\0') {
      uVar1 = 0;
      DAT_00b3608f = '\0';
      FUN_0043f270(0);
      FUN_004ef7e0();
      FUN_004ea080(uVar1);
      if (DAT_00b34424 != 0) {
        *(ushort *)(DAT_00b34424 + 0x18) = *(ushort *)(DAT_00b34424 + 0x18) | 1;
      }
      if (*(int *)(DAT_00b333a0 + 0x54) != 0) {
        FUN_00499e20();
      }
    }
    if (DAT_00b35b8c != 0) {
      thunk_FUN_004bd8c0();
    }
    if (*(int **)(DAT_00b333a0 + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004ebbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(DAT_00b333a0 + 4) + 8))();
      return;
    }
  }
  else {
    FUN_004eb0e0(1);
    if (*(int *)(DAT_00b333a0 + 4) != 0) {
      uVar1 = FUN_0043f270();
      FUN_00483d60(uVar1);
    }
    puVar2 = (undefined4 *)(**(code **)(*DAT_00b333c4 + 0x174))();
    FUN_004ea6e0(*puVar2,puVar2[1],puVar2[2],1);
    FUN_00434020(5);
    puVar2 = (undefined4 *)(**(code **)(*DAT_00b333c4 + 0x174))();
    FUN_004ea6e0(*puVar2,puVar2[1],puVar2[2],0);
  }
  return;
}



int FUN_004ebc00(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  short sVar5;
  int *local_18;
  int local_14;
  undefined1 local_10 [4];
  float local_c;
  float local_8;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    return 0;
  }
  DAT_00b3608f = DAT_00b43077 != '\0';
  FUN_004eb1a0();
  sVar5 = 0;
  uVar3 = 0;
  if (*(uint *)(in_ECX + 4) != 0) {
    piVar4 = *(int **)(in_ECX + 8);
    do {
      if (*piVar4 != 0) {
        local_14 = (*(int **)(in_ECX + 8))[uVar3];
        goto joined_r0x004ebc5a;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < *(uint *)(in_ECX + 4));
  }
  local_14 = 0;
joined_r0x004ebc5a:
  while (local_14 != 0) {
    local_18 = (int *)0x0;
    FUN_00452600(&local_14,local_10,&local_18);
    if (((local_18 != (int *)0x0) && (iVar2 = *local_18, iVar2 != 0)) &&
       (*(int *)(iVar2 + 0x14) != 0)) {
      sVar1 = *(short *)((int)local_18 + 10);
      local_c = (float)((int)(short)local_18[2] << 0x11);
      *(undefined4 *)(iVar2 + 8) = 5;
      sVar5 = sVar5 + 1;
      local_8 = (float)((int)sVar1 << 0x11);
      *(float *)(iVar2 + 0x18) = local_c;
      *(float *)(iVar2 + 0x1c) = local_8;
      *(undefined4 *)(iVar2 + 0x44) = 0x48000000;
    }
  }
  return (int)sVar5;
}



void FUN_004ebd00(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  int *local_c;
  int local_8;
  undefined1 local_4 [4];
  
  uVar2 = 0;
  if (*(uint *)(in_ECX + 4) != 0) {
    piVar3 = *(int **)(in_ECX + 8);
    do {
      if (*piVar3 != 0) {
        local_8 = (*(int **)(in_ECX + 8))[uVar2];
        goto joined_r0x004ebd2c;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < *(uint *)(in_ECX + 4));
  }
  local_8 = 0;
joined_r0x004ebd2c:
  while (local_8 != 0) {
    local_c = (int *)0x0;
    FUN_00452600(&local_8,local_4,&local_c);
    piVar3 = local_c;
    if (local_c != (int *)0x0) {
      iVar1 = *local_c;
      if (iVar1 != 0) {
        FUN_004ec740();
        FUN_00401f20(iVar1);
      }
      *piVar3 = 0;
      FUN_00401f20(piVar3);
    }
  }
  FUN_007c2a40();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ebda0(float param_1,float param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int *unaff_FS_OFFSET;
  bool bVar14;
  float10 extraout_ST0;
  float10 extraout_ST1;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009caccb;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((*(int *)(DAT_00b333a0 + 0x34) == 0) && (DAT_00b09b00 != '\0')) && (DAT_00b09ae4 != '\0')) {
    if (DAT_00b3608d == '\0') {
      FUN_004ea750(uVar4);
    }
    fVar3 = _DAT_00b09b18;
    uVar13 = _DAT_00b09b10;
    DAT_00b43344 = DAT_00b09b08;
    if (0.0 < _DAT_00b09b18) {
      if (DAT_00b36094 == 0) {
        piVar5 = (int *)FUN_007b4280(0);
        DAT_00b36094 = (**(code **)(*piVar5 + 0x58))("Grass");
        if (DAT_00b36094 == 0) {
          iVar6 = FUN_00401f00(0xdc);
          uStack_4 = 0;
          if (iVar6 == 0) {
            DAT_00b36094 = 0;
          }
          else {
            DAT_00b36094 = FUN_0070b780(0);
          }
          uStack_4 = 0xffffffff;
          FUN_006ff420("Grass");
          (**(code **)(*piVar5 + 0x84))(DAT_00b36094,0);
        }
      }
      FUN_007c2960(0,0,uVar13,fVar3);
      iVar6 = FUN_009828c0();
      iVar7 = FUN_009828c0();
      if (extraout_ST1 < (float10)0) {
        iVar6 = iVar6 + -1;
      }
      if (extraout_ST0 < (float10)0) {
        iVar7 = iVar7 + -1;
      }
      uVar8 = FUN_0043fa40(iVar6,iVar7);
      FUN_004eb3f0(uVar8,DAT_00b36094,param_1,param_2,param_3,param_4,param_5,param_6,uVar13,fVar3,
                   param_7);
      fVar1 = param_1 - (float)(iVar6 << 0xc);
      iVar9 = iVar6 + -1;
      fVar2 = param_2 - (float)(iVar7 << 0xc);
      iVar10 = FUN_0043fa40(iVar9,iVar7);
      if (iVar10 != 0) {
        if (0.0 <= fVar1 - fVar3) {
          uVar8 = FUN_004c9aa0();
          uVar8 = FUN_004c9a80(uVar8);
          FUN_007c3ab0(uVar8);
        }
        else {
          FUN_004eb3f0(iVar10,DAT_00b36094,param_1,param_2,param_3,param_4,param_5,param_6,uVar13,
                       fVar3,param_7);
        }
      }
      iVar10 = iVar6 + 1;
      iVar11 = FUN_0043fa40(iVar10,iVar7);
      if (iVar11 != 0) {
        if (fVar3 + fVar1 <= 4096.0) {
          uVar8 = FUN_004c9aa0();
          uVar8 = FUN_004c9a80(uVar8);
          FUN_007c3ab0(uVar8);
        }
        else {
          FUN_004eb3f0(iVar11,DAT_00b36094,param_1,param_2,param_3,param_4,param_5,param_6,uVar13,
                       fVar3,param_7);
        }
      }
      iVar11 = iVar7 + -1;
      iVar12 = FUN_0043fa40(iVar6,iVar11);
      if (iVar12 != 0) {
        if (0.0 <= fVar2 - fVar3) {
          uVar8 = FUN_004c9aa0();
          uVar8 = FUN_004c9a80(uVar8);
          FUN_007c3ab0(uVar8);
        }
        else {
          FUN_004eb3f0(iVar12,DAT_00b36094,param_1,param_2,param_3,param_4,param_5,param_6,uVar13,
                       fVar3,param_7);
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = FUN_0043fa40(iVar6,iVar7);
      if (iVar6 != 0) {
        if (fVar3 + fVar2 <= 4096.0) {
          uVar8 = FUN_004c9aa0();
          uVar8 = FUN_004c9a80(uVar8);
          FUN_007c3ab0(uVar8);
        }
        else {
          FUN_004eb3f0(iVar6,DAT_00b36094,param_1,param_2,param_3,param_4,param_5,param_6,uVar13,
                       fVar3,param_7);
        }
      }
      iVar6 = FUN_0043fa40(iVar9,iVar11);
      if (iVar6 != 0) {
        if ((0.0 <= fVar1 - fVar3) || (0.0 <= fVar2 - fVar3)) {
          uVar8 = FUN_004c9aa0();
          uVar8 = FUN_004c9a80(uVar8);
          FUN_007c3ab0(uVar8);
        }
        else {
          FUN_004eb3f0(iVar6,DAT_00b36094,param_1,param_2,param_3,param_4,param_5,param_6,uVar13,
                       fVar3,param_7);
        }
      }
      iVar6 = FUN_0043fa40(iVar9,iVar7);
      if (iVar6 != 0) {
        if ((0.0 <= fVar1 - fVar3) || (fVar2 + fVar3 <= 4096.0)) {
          uVar8 = FUN_004c9aa0();
          uVar8 = FUN_004c9a80(uVar8);
          FUN_007c3ab0(uVar8);
        }
        else {
          FUN_004eb3f0(iVar6,DAT_00b36094,param_1,param_2,param_3,param_4,param_5,param_6,uVar13,
                       fVar3,param_7);
        }
      }
      iVar6 = FUN_0043fa40(iVar10,iVar11);
      if (iVar6 != 0) {
        if ((fVar3 + fVar1 <= 4096.0) || (0.0 <= fVar2 - fVar3)) {
          uVar8 = FUN_004c9aa0();
          uVar8 = FUN_004c9a80(uVar8);
          FUN_007c3ab0(uVar8);
        }
        else {
          FUN_004eb3f0(iVar6,DAT_00b36094,param_1,param_2,param_3,param_4,param_5,param_6,uVar13,
                       fVar3,param_7);
        }
      }
      iVar6 = FUN_0043fa40(iVar10,iVar7);
      if (iVar6 != 0) {
        if ((fVar3 + fVar1 <= 4096.0) || (fVar2 + fVar3 <= 4096.0)) {
          uVar13 = FUN_004c9aa0();
          uVar13 = FUN_004c9a80(uVar13);
          FUN_007c3ab0(uVar13);
        }
        else {
          FUN_004eb3f0(iVar6,DAT_00b36094,param_1,param_2,param_3,param_4,param_5,param_6,uVar13,
                       fVar3,param_7);
        }
      }
      if (DAT_00b09b08 != '\0') {
        bVar14 = DAT_00b43384 != '\0';
        if (bVar14) {
          FUN_0043f2e0();
        }
        FUN_007b4280(0);
        FUN_007c7050(DAT_00b36094,0);
        if (bVar14) {
          FUN_0043f300();
        }
      }
      if (DAT_00b36094 != 0) {
        FUN_00707370(0,0);
        FUN_00707610();
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004ec590(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b61c8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  DAT_00b360a0 = DAT_00b360a0 + -1;
  local_4 = 0;
  if (DAT_00b360a0 == 0) {
    if (DAT_00b36098 != 0) {
      FUN_00401f20(DAT_00b36098,uVar1);
      DAT_00b36098 = 0;
    }
    if (DAT_00b3609c != 0) {
      FUN_00401f20(DAT_00b3609c,uVar1);
      DAT_00b3609c = 0;
    }
  }
  FUN_004ebd00();
  local_4 = 0xffffffff;
  FUN_004ea3c0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004ec650(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b6476;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[1] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x11] = 0;
  *in_ECX = param_1;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[5] = 0;
  in_ECX[9] = 0;
  in_ECX[8] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  *(undefined2 *)((int)in_ECX + 0x12) = 0;
  in_ECX[2] = 5;
  puVar1 = (undefined4 *)in_ECX[0xb];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[0xb] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 2);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[1] = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004ec740(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b6476;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  piVar6 = (int *)(in_ECX + 0x30);
  iVar5 = 4;
  do {
    iVar1 = *piVar6;
    if (iVar1 != 0) {
      FUN_004ec740(uVar3);
      FUN_00401f20(iVar1);
    }
    piVar6 = piVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar2 = *(undefined4 **)(in_ECX + 0x2c);
  local_4 = local_4 & 0xffffff00;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = *(undefined4 **)(in_ECX + 4);
  local_4 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 2);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004ec810(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) != 5) {
    if (*(int *)(in_ECX + 8) != 4) {
      *(undefined4 *)(in_ECX + 8) = 4;
    }
    FUN_00977c50(3);
    puVar1 = *(undefined4 **)(in_ECX + 0x2c);
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(in_ECX + 0x2c) = 0;
    }
    FUN_00977c50(2);
    *(undefined4 *)(in_ECX + 8) = 5;
  }
  return;
}



float10 FUN_004ec870(float param_1,undefined4 param_2,float param_3,float param_4)

{
  float10 fVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (param_4 <= param_1) {
    fVar2 = param_1 - param_4;
  }
  else if (param_3 + param_1 < param_4) {
    fVar2 = param_4 - (param_3 + param_1);
  }
  fVar1 = (float10)FUN_00982c30(fVar2);
  return (float10)(float)fVar1;
}



void FUN_004ec910(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xbc);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xbc) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



int * FUN_004ec960(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x3c);
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  return param_1;
}



undefined1 FUN_004ec990(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  LONG LVar5;
  int in_ECX;
  undefined1 uVar6;
  int *unaff_FS_OFFSET;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 *local_28;
  int *piStack_20;
  undefined1 local_f;
  undefined1 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b64a8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff94;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar6 = 0;
  if (*(int *)(in_ECX + 0x2c) != 0) {
    local_54 = *param_1;
    local_50 = param_1[1];
    local_4c = (float)param_1[2] + 1e+06;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0xbf800000;
    FUN_00959bc0(uVar4);
    puVar1 = *(undefined4 **)(in_ECX + 0x2c);
    local_4 = 0;
    if (local_28 != puVar1) {
      if (local_28 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(local_28 + 1);
        if ((LVar5 == 0) && (local_28 != (undefined4 *)0x0)) {
          (**(code **)*local_28)(1);
        }
      }
      local_28 = puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar1 + 1);
      }
    }
    local_f = 1;
    local_e = 1;
    local_34 = 1;
    cVar3 = FUN_00959d60(&local_54,&local_48,0);
    uVar6 = 0;
    if ((cVar3 != '\0') && (iVar2 = *piStack_20, iVar2 != 0)) {
      *param_2 = *(undefined4 *)(iVar2 + 0x10);
      *param_3 = *(undefined4 *)(iVar2 + 0x28);
      param_3[1] = *(undefined4 *)(iVar2 + 0x2c);
      uVar6 = 1;
      param_3[2] = *(undefined4 *)(iVar2 + 0x30);
    }
    local_4 = 0xffffffff;
    FUN_00959ec0();
  }
  *unaff_FS_OFFSET = local_c;
  return uVar6;
}



void FUN_004ecae0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  LONG LVar3;
  int in_ECX;
  int iVar4;
  
  piVar1 = param_1;
  iVar4 = *(int *)(in_ECX + 8);
  if (iVar4 == 2) {
    *(undefined4 *)(in_ECX + 8) = 4;
  }
  else if (iVar4 == 3) {
    (**(code **)(*param_1 + 0x88))(&param_1,*(undefined4 *)(in_ECX + 0x2c));
    piVar2 = param_1;
    if (param_1 != (int *)0x0) {
      LVar3 = InterlockedDecrement(param_1 + 1);
      if ((LVar3 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(in_ECX + 8) = 2;
  }
  else if (iVar4 == 4) {
    FUN_004ec810();
  }
  if (*(int *)(in_ECX + 0x30) != 0) {
    iVar4 = 4;
    do {
      FUN_004ecae0(piVar1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



void FUN_004ecb70(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca9b8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = in_ECX;
  piVar4 = (int *)FUN_004ec960(&local_10);
  puVar1 = (undefined4 *)*piVar4;
  puVar2 = (undefined4 *)in_ECX[0xb];
  local_4 = 0;
  if (puVar2 != puVar1) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 1);
      if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1,uVar3);
      }
    }
    in_ECX[0xb] = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  local_4 = 0xffffffff;
  if (local_10 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(local_10 + 1);
    if ((LVar5 == 0) && (local_10 != (undefined4 *)0x0)) {
      (**(code **)*local_10)(1);
    }
  }
  in_ECX[2] = 2;
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 2);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[1] = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004ecc60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_118 [4];
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b6505;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)local_118;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffee0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00436fa0(3);
  in_ECX[0xb] = param_2;
  *in_ECX = &PTR_FUN_00a47ce0;
  *(undefined1 *)(in_ECX + 10) = 0;
  in_ECX[0xc] = param_3;
  in_ECX[0xd] = param_4;
  in_ECX[0xe] = param_1;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  local_4 = 3;
  _sprintf(local_114,"Meshes\\Landscape\\LOD\\%i.%02i.%02i.%i.NIF",in_ECX[0xb],in_ECX[0xc],
           in_ECX[0xd],0x20,uVar1);
  FUN_00434600(local_114);
  FUN_00434cb0(0,1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004ecd60(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b6569;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a47ce0;
  puVar1 = (undefined4 *)in_ECX[0xf];
  local_4 = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0xf] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x10];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x10] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x11];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x11] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x11];
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x10];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0xf];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00436fd0();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004ed0d0(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined **local_4a0 [130];
  undefined4 *local_298;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b659b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)local_4a0;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffb58;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = FUN_00434650(0,1);
  FUN_00713a30(uVar2);
  local_4a0[0] = &PTR_FUN_00a3690c;
  local_14 = 0;
  local_18 = 0;
  local_4 = 0;
  cVar1 = FUN_006f9980(*(undefined4 *)(in_ECX + 0x20),uVar3);
  if (cVar1 != '\0') {
    FUN_0075fa90(*local_298);
  }
  local_4 = 0xffffffff;
  FUN_00436420();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004ed1b0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b65eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x3c) != 0) {
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    iVar2 = FUN_007b4290(1,uVar1);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
      iVar3 = FUN_00401f00(0xf0);
      local_4._0_1_ = 2;
      if (iVar3 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_007d94b0();
      }
      piVar4[7] = piVar4[7] | 0x3000;
      piVar4[9] = 0;
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00405680(piVar4);
      uVar5 = (**(code **)(*piVar4 + 0x68))(*(undefined4 *)(in_ECX + 0x3c));
      FUN_006c61e0(uVar5);
      if (*(int *)(iVar2 + 4) != 0) {
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x80))(0,*(undefined4 *)(in_ECX + 0x40));
          (**(code **)(*piVar4 + 0x80))(1,0);
          (**(code **)(*piVar4 + 0x84))(0,*(undefined4 *)(in_ECX + 0x44));
          (**(code **)(*piVar4 + 0x84))(1,0);
        }
        FUN_004ec910(*(undefined4 *)(iVar2 + 4));
        (**(code **)(**(int **)(iVar2 + 4) + 0x18))(*(undefined4 *)(in_ECX + 0x3c));
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x7c))(0);
        }
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00707610();
  FUN_00707370(0,1);
  FUN_004ecb70();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_004ed320(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int iVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((in_ECX[2] != 5) && (in_ECX[2] != 1)) {
    FUN_004a7a60("TESTerrainLODQuad::BuildMesh called on LOD chunk that isn\'t free.");
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  if (*in_ECX == 0) {
    FUN_0040fec0("TESTerrainLODQuad::BuildMesh(): pQuadRoot = NULL");
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  if (in_ECX[1] == 0) {
    in_ECX[2] = 1;
    iVar2 = FUN_00401f00(0x48,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      iVar2 = *in_ECX;
      if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar2 + 4) + 0x10);
      }
      uVar3 = FUN_004ecc60(in_ECX,*(undefined4 *)(iVar4 + 0xc),(int)*(short *)(iVar2 + 8) << 5,
                           (int)*(short *)(iVar2 + 10) << 5);
    }
    local_4 = 0xffffffff;
    FUN_004bcb70(uVar3);
    (**(code **)(*(int *)in_ECX[1] + 0x20))();
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



int FUN_004ed430(int *param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float fVar2;
  char cVar3;
  int *in_ECX;
  float10 fVar4;
  
  if (param_1 != (int *)0x0) {
    in_ECX[6] = (int)(float)((int)*(short *)(*in_ECX + 8) << 0x11);
    fVar2 = (float)((int)*(short *)(*in_ECX + 10) << 0x11);
    in_ECX[7] = (int)fVar2;
    fVar4 = (float10)FUN_004ec870(in_ECX[6],fVar2,0x48000000,param_3,param_4);
    if (fVar4 <= (float10)param_2) {
      iVar1 = in_ECX[2];
      if (iVar1 != 3) {
        if (((iVar1 == 5) || (iVar1 == 1)) && (in_ECX[0xb] == 0)) {
          cVar3 = FUN_004ed320();
          if (cVar3 == '\0') {
            FUN_004a7a60("TESTerrainLODQuad::BuildMesh() failed for %i,%i.",
                         (int)*(short *)(*in_ECX + 8),(int)*(short *)(*in_ECX + 10));
          }
          if (in_ECX[0xb] == 0) {
            return 0;
          }
          FUN_00404cf0(in_ECX[6],in_ECX[7],0);
        }
        if ((in_ECX[2] == 2) || (in_ECX[2] == 4)) {
          (**(code **)(*param_1 + 0x84))(in_ECX[0xb],1);
          in_ECX[2] = 3;
          FUN_0043fcd0();
        }
        return in_ECX[9] + -2;
      }
    }
    else {
      FUN_004ecae0(param_1);
    }
  }
  return 0;
}



void FUN_004ed560(byte param_1)

{
  FUN_004ecd60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004ed580(void)

{
  undefined4 *in_ECX;
  
  in_ECX[0xb] = &LAB_00808000;
  *in_ECX = 0x3dcccccd;
  in_ECX[0xc] = 0x190000;
  in_ECX[0xd] = 0xffffff;
  in_ECX[1] = 0x42b40000;
  *(undefined1 *)(in_ECX + 0xe) = 0x32;
  in_ECX[2] = 0x3f000000;
  in_ECX[3] = 0x3f800000;
  in_ECX[4] = 0x42480000;
  in_ECX[5] = 0x3f000000;
  in_ECX[6] = 0x3ccccccd;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0x46d9999a;
  in_ECX[10] = 0x48200000;
  in_ECX[0xf] = 0x3dcccccd;
  in_ECX[0x10] = 0x3f19999a;
  in_ECX[0x11] = 0x3f7c28f6;
  in_ECX[0x12] = 0x40000000;
  in_ECX[0x13] = 0x3c23d70a;
  in_ECX[0x14] = 0x3ecccccd;
  in_ECX[0x15] = 0x3f19999a;
  in_ECX[0x16] = 0x3f7c28f6;
  in_ECX[0x17] = 0x41200000;
  in_ECX[0x18] = 0x3d4ccccd;
  return;
}



byte FUN_004ed650(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x2d) >> 1 & 1;
}



float10 FUN_004ed660(void)

{
  int in_ECX;
  
  return (float10)((float)*(byte *)(in_ECX + 0x2c) / 100.0);
}



float10 FUN_004ed680(void)

{
  int in_ECX;
  
  return (float10)((float)*(byte *)(in_ECX + 0x74) / 100.0);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004ed6a0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == 'B') {
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 < 0x4d414e48) {
        if (iVar3 == 0x4d414e47) {
          FUN_00450c20(in_ECX + 0x28,0xc);
        }
        else if (iVar3 < 0x4d414e42) {
          if (iVar3 == 0x4d414e41) {
            FUN_00450c20(in_ECX + 0xb,1);
          }
          else if (iVar3 == 0x41544144) {
            FUN_0046bda0(param_1,in_ECX + 0xf,100);
          }
          else if (iVar3 == 0x44494445) {
            FUN_00450c20(&stack0xffffffec);
            (**(code **)(*in_ECX + 0xd8))();
          }
        }
        else if (iVar3 == 0x4d414e46) {
          FUN_00450c20((int)in_ECX + 0x2d,1);
        }
      }
      else if (iVar3 == 0x4d414e4d) {
        FUN_00450c20(&stack0xffffffe8,0);
        FUN_004028d0(&stack0xffffffe8,0);
      }
      else if (iVar3 == 0x4d414e53) {
        local_c = 0;
        FUN_004510e0(&local_c);
        in_ECX[0xe] = local_c;
      }
      else if (iVar3 == 0x4d414e54) {
        FUN_004700e0(in_ECX + 8,param_1);
      }
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar3 = FUN_004510b0();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_004ed950(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b6685;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a47f0c;
  in_ECX[6] = &PTR_LAB_00a47ef4;
  local_4 = 3;
  thunk_FUN_0046b170(uVar1);
  FUN_00401f20(in_ECX[0xc]);
  in_ECX[0xc] = 0;
  *(undefined2 *)((int)in_ECX + 0x36) = 0;
  *(undefined2 *)(in_ECX + 0xd) = 0;
  local_4._0_1_ = 1;
  FUN_00470040();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004689a0();
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004ed9f0(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int in_ECX;
  undefined1 *puVar5;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0046b990();
  if (*(ushort *)(in_ECX + 0x28) == 0xffff) {
    pcVar3 = *(char **)(in_ECX + 0x24);
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar4 = (int)pcVar3 - (int)pcVar1;
  }
  else {
    uVar4 = (uint)*(ushort *)(in_ECX + 0x28);
  }
  puVar5 = *(undefined1 **)(in_ECX + 0x24);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_00a2f7ec;
  }
  thunk_FUN_0046ae40(0x4d414e54,puVar5,uVar4 + 1);
  FUN_0046ae40(0x4d414e41,in_ECX + 0x2c,1);
  FUN_0046ae40(0x4d414e46,in_ECX + 0x2d,1);
  if (*(ushort *)(in_ECX + 0x34) == 0xffff) {
    pcVar3 = *(char **)(in_ECX + 0x30);
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar4 = (int)pcVar3 - (int)pcVar1;
  }
  else {
    uVar4 = (uint)*(ushort *)(in_ECX + 0x34);
  }
  puVar5 = *(undefined1 **)(in_ECX + 0x30);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_00a2f7ec;
  }
  FUN_0046ae40(0x4d414e4d,puVar5,uVar4 + 1);
  if (*(int *)(in_ECX + 0x38) != 0) {
    FUN_0046ba80(0x4d414e53,*(undefined4 *)(*(int *)(in_ECX + 0x38) + 0xc));
  }
  FUN_0046bbb0(in_ECX + 0x3c,100);
  if (*(int *)(in_ECX + 0xa0) == 0) {
    local_c = 0;
  }
  else {
    local_c = *(undefined4 *)(*(int *)(in_ECX + 0xa0) + 0xc);
  }
  if (*(int *)(in_ECX + 0xa4) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(undefined4 *)(*(int *)(in_ECX + 0xa4) + 0xc);
  }
  if (*(int *)(in_ECX + 0xa8) == 0) {
    local_4 = 0;
  }
  else {
    local_4 = *(undefined4 *)(*(int *)(in_ECX + 0xa8) + 0xc);
  }
  FUN_0046ae40(0x4d414e47,&local_c,0xc);
  FUN_0046b9f0();
  return;
}



undefined1 * FUN_004edd90(void)

{
  undefined1 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined1 **)(in_ECX + 0x24);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_00a2f7ec;
  }
  return puVar1;
}



void FUN_004edda0(undefined4 param_1)

{
  FUN_004028d0(param_1,0);
  return;
}



void FUN_004eddc0(byte param_1)

{
  FUN_004ed950();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004edde0(void)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x24));
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined2 *)(in_ECX + 0x2a) = 0;
  *(undefined2 *)(in_ECX + 0x28) = 0;
  *(undefined1 *)(in_ECX + 0x2c) = 0x4b;
  *(undefined1 *)(in_ECX + 0x2d) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x30));
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined2 *)(in_ECX + 0x36) = 0;
  *(undefined2 *)(in_ECX + 0x34) = 0;
  FUN_004ed580();
  thunk_FUN_0046b090();
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  return;
}



void FUN_004ede40(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b66c9;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  local_4 = 0;
  FUN_00468a60();
  local_4._0_1_ = 1;
  *in_ECX = &PTR_FUN_00a47f0c;
  in_ECX[6] = &PTR_LAB_00a47ef4;
  FUN_0046ffd0();
  in_ECX[0xc] = 0;
  *(undefined2 *)(in_ECX + 0xd) = 0;
  *(undefined2 *)((int)in_ECX + 0x36) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004ed580();
  *(undefined1 *)(in_ECX + 1) = 0x42;
  FUN_004edde0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004eded0(void)

{
  int in_ECX;
  
  _memset((void *)(in_ECX + 0x68),0,0xa0);
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined2 *)(in_ECX + 0x54) = 0;
  *(undefined1 *)(in_ECX + 0x56) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  _memset((void *)(in_ECX + 0x110),0,0x38);
  thunk_FUN_0046b090();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004edf20(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  
  cVar1 = FUN_004511c0();
  if (cVar1 == '-') {
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 < 0x4d414e44) {
        if (iVar3 == 0x4d414e43) {
          FUN_004700e0(in_ECX + 9,param_1);
        }
        else if (iVar3 < 0x42444f4e) {
          if (iVar3 == 0x42444f4d) {
LAB_004ee017:
            FUN_0046db00(in_ECX + 0xc,param_1);
          }
          else if (iVar3 == 0x304d414e) {
            if (*(int *)(param_1 + 0x254) == 0xa0) {
              FUN_00450c20(in_ECX + 0x1a,0xa0);
            }
          }
          else if (iVar3 == 0x41544144) {
            if (*(int *)(param_1 + 0x254) == 0xf) {
              FUN_00450c20(in_ECX + 0x12,0xf);
            }
            else if (*(int *)(param_1 + 0x254) == 0xc) {
              FUN_00450c20(in_ECX + 0x12,0xc);
              *(undefined2 *)(in_ECX + 0x15) = 0xffff;
              *(undefined1 *)((int)in_ECX + 0x56) = 0xff;
            }
          }
        }
        else if (iVar3 == 0x44494445) {
          FUN_00450c20(&stack0xfffffff0,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xfffffff0);
        }
        else if (iVar3 == 0x4c444f4d) goto LAB_004ee017;
      }
      else {
        switch(iVar3) {
        case 0x4d414e44:
          FUN_004700e0(in_ECX + 6,param_1);
          break;
        case 0x4d414e46:
          FUN_00450c20(in_ECX + 0x16,0x10);
          break;
        case 0x4d414e48:
          FUN_00450c20(in_ECX + 0x44,0x38);
          break;
        case 0x4d414e53:
          puVar4 = (undefined4 *)FUN_00401f00(8);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
            puVar4[1] = 0;
          }
          FUN_00450c20(puVar4,8);
          FUN_0046bb20(puVar4,param_1);
          FUN_0067b1e0(puVar4);
        }
      }
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar3 = FUN_004510b0();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_004ee370(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  int *piVar10;
  
  iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05400,0);
  if (iVar4 == 0) {
    return 1;
  }
  piVar10 = (int *)(in_ECX + 0x108);
  iVar8 = 0;
  piVar1 = (int *)(iVar4 + 0x108);
  for (piVar2 = piVar1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if (*piVar2 != 0) {
      iVar8 = iVar8 + 1;
    }
  }
  iVar6 = 0;
  for (piVar2 = piVar10; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if (*piVar2 != 0) {
      iVar6 = iVar6 + 1;
    }
  }
  if (iVar8 != iVar6) {
    return 1;
  }
  for (; (((piVar1 != (int *)0x0 && (piVar10 != (int *)0x0)) &&
          (pbVar9 = (byte *)*piVar1, pbVar9 != (byte *)0x0)) &&
         (pbVar7 = (byte *)*piVar10, pbVar7 != (byte *)0x0)); piVar10 = (int *)piVar10[1]) {
    uVar5 = 8;
    do {
      if (*(int *)pbVar9 != *(int *)pbVar7) goto LAB_004ee430;
      uVar5 = uVar5 - 4;
      pbVar7 = pbVar7 + 4;
      pbVar9 = pbVar9 + 4;
    } while (3 < uVar5);
    if (uVar5 == 0) {
LAB_004ee495:
      iVar6 = 0;
    }
    else {
LAB_004ee430:
      iVar8 = (uint)*pbVar9 - (uint)*pbVar7;
      if (iVar8 == 0) {
        if (uVar5 == 1) goto LAB_004ee495;
        iVar8 = (uint)pbVar9[1] - (uint)pbVar7[1];
        if (iVar8 == 0) {
          if (uVar5 == 2) goto LAB_004ee495;
          iVar8 = (uint)pbVar9[2] - (uint)pbVar7[2];
          if (iVar8 == 0) {
            if ((uVar5 == 3) || (iVar8 = (uint)pbVar9[3] - (uint)pbVar7[3], iVar8 == 0))
            goto LAB_004ee495;
          }
        }
      }
      iVar6 = 1;
      if (iVar8 < 1) {
        iVar6 = -1;
      }
    }
    if (iVar6 != 0) {
      return 1;
    }
    piVar1 = (int *)piVar1[1];
  }
  uVar5 = 0;
  do {
    iVar8 = (uVar5 * 3 + 6) * 4;
    cVar3 = (**(code **)(*(int *)(iVar8 + in_ECX) + 0xc))(iVar8 + iVar4);
    if (cVar3 != '\0') {
      return 1;
    }
    uVar5 = (uVar5 + 1) % 3;
  } while (uVar5 < 2);
  cVar3 = FUN_0046ad70(iVar4);
  if (cVar3 != '\0') {
    return 1;
  }
  cVar3 = (**(code **)(*(int *)(in_ECX + 0x30) + 0xc))(iVar4 + 0x30);
  if (cVar3 != '\0') {
    return 1;
  }
  uVar5 = 0xf;
  pbVar9 = (byte *)(iVar4 + 0x48);
  pbVar7 = (byte *)(in_ECX + 0x48);
  do {
    if (*(int *)pbVar7 != *(int *)pbVar9) goto LAB_004ee52e;
    uVar5 = uVar5 - 4;
    pbVar9 = pbVar9 + 4;
    pbVar7 = pbVar7 + 4;
  } while (3 < uVar5);
  if (uVar5 == 0) {
LAB_004ee595:
    iVar6 = 0;
  }
  else {
LAB_004ee52e:
    iVar8 = (uint)*pbVar7 - (uint)*pbVar9;
    if (iVar8 == 0) {
      if (uVar5 == 1) goto LAB_004ee595;
      iVar8 = (uint)pbVar7[1] - (uint)pbVar9[1];
      if (iVar8 == 0) {
        if (uVar5 == 2) goto LAB_004ee595;
        iVar8 = (uint)pbVar7[2] - (uint)pbVar9[2];
        if (iVar8 == 0) {
          if ((uVar5 == 3) || (iVar8 = (uint)pbVar7[3] - (uint)pbVar9[3], iVar8 == 0))
          goto LAB_004ee595;
        }
      }
    }
    iVar6 = 1;
    if (iVar8 < 1) {
      iVar6 = -1;
    }
  }
  if (iVar6 != 0) {
    return 1;
  }
  uVar5 = 0xa0;
  pbVar9 = (byte *)(iVar4 + 0x68);
  pbVar7 = (byte *)(in_ECX + 0x68);
  do {
    if (*(int *)pbVar7 != *(int *)pbVar9) goto LAB_004ee5c8;
    uVar5 = uVar5 - 4;
    pbVar9 = pbVar9 + 4;
    pbVar7 = pbVar7 + 4;
  } while (3 < uVar5);
  if (uVar5 == 0) {
LAB_004ee625:
    iVar6 = 0;
  }
  else {
LAB_004ee5c8:
    iVar8 = (uint)*pbVar7 - (uint)*pbVar9;
    if (iVar8 == 0) {
      if (uVar5 == 1) goto LAB_004ee625;
      iVar8 = (uint)pbVar7[1] - (uint)pbVar9[1];
      if (iVar8 == 0) {
        if (uVar5 == 2) goto LAB_004ee625;
        iVar8 = (uint)pbVar7[2] - (uint)pbVar9[2];
        if (iVar8 == 0) {
          if ((uVar5 == 3) || (iVar8 = (uint)pbVar7[3] - (uint)pbVar9[3], iVar8 == 0))
          goto LAB_004ee625;
        }
      }
    }
    iVar6 = 1;
    if (iVar8 < 1) {
      iVar6 = -1;
    }
  }
  if (iVar6 != 0) {
    return 1;
  }
  uVar5 = 0x10;
  pbVar9 = (byte *)(iVar4 + 0x58);
  pbVar7 = (byte *)(in_ECX + 0x58);
  do {
    if (*(int *)pbVar7 != *(int *)pbVar9) goto LAB_004ee658;
    uVar5 = uVar5 - 4;
    pbVar9 = pbVar9 + 4;
    pbVar7 = pbVar7 + 4;
  } while (3 < uVar5);
  if (uVar5 == 0) {
LAB_004ee6b5:
    iVar6 = 0;
  }
  else {
LAB_004ee658:
    iVar8 = (uint)*pbVar7 - (uint)*pbVar9;
    if (iVar8 == 0) {
      if (uVar5 == 1) goto LAB_004ee6b5;
      iVar8 = (uint)pbVar7[1] - (uint)pbVar9[1];
      if (iVar8 == 0) {
        if (uVar5 == 2) goto LAB_004ee6b5;
        iVar8 = (uint)pbVar7[2] - (uint)pbVar9[2];
        if (iVar8 == 0) {
          if ((uVar5 == 3) || (iVar8 = (uint)pbVar7[3] - (uint)pbVar9[3], iVar8 == 0))
          goto LAB_004ee6b5;
        }
      }
    }
    iVar6 = 1;
    if (iVar8 < 1) {
      iVar6 = -1;
    }
  }
  if (iVar6 != 0) {
    return 1;
  }
  uVar5 = 0x38;
  pbVar9 = (byte *)(iVar4 + 0x110);
  pbVar7 = (byte *)(in_ECX + 0x110);
  do {
    if (*(int *)pbVar7 != *(int *)pbVar9) goto LAB_004ee6e8;
    uVar5 = uVar5 - 4;
    pbVar9 = pbVar9 + 4;
    pbVar7 = pbVar7 + 4;
  } while (3 < uVar5);
  if (uVar5 == 0) {
LAB_004ee745:
    iVar8 = 0;
  }
  else {
LAB_004ee6e8:
    iVar4 = (uint)*pbVar7 - (uint)*pbVar9;
    if (iVar4 == 0) {
      if (uVar5 == 1) goto LAB_004ee745;
      iVar4 = (uint)pbVar7[1] - (uint)pbVar9[1];
      if (iVar4 == 0) {
        if (uVar5 == 2) goto LAB_004ee745;
        iVar4 = (uint)pbVar7[2] - (uint)pbVar9[2];
        if (iVar4 == 0) {
          if ((uVar5 == 3) || (iVar4 = (uint)pbVar7[3] - (uint)pbVar9[3], iVar4 == 0))
          goto LAB_004ee745;
        }
      }
    }
    iVar8 = 1;
    if (iVar4 < 1) {
      iVar8 = -1;
    }
  }
  if (iVar8 != 0) {
    return 1;
  }
  return 0;
}



void FUN_004ee770(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  
  for (piVar1 = in_ECX; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1]) {
    FUN_00401f20(*piVar1);
  }
  iVar2 = in_ECX[1];
  while (iVar2 != 0) {
    iVar2 = *(int *)(in_ECX[1] + 4);
    FUN_00401f20(in_ECX[1]);
    in_ECX[1] = iVar2;
  }
  *in_ECX = 0;
  return;
}



void FUN_004ee7c0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b6719;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a47fec;
  _eh_vector_constructor_iterator_(in_ECX + 6,0xc,2,FUN_0046ffd0,FUN_00470040);
  local_4._0_1_ = 1;
  FUN_0046d7e0();
  in_ECX[0x42] = 0;
  in_ECX[0x43] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(in_ECX + 1) = 0x2d;
  _memset(in_ECX + 0x1a,0,0xa0);
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  *(undefined2 *)(in_ECX + 0x15) = 0;
  *(undefined1 *)((int)in_ECX + 0x56) = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  _memset(in_ECX + 0x44,0,0x38);
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004ee8a0(void)

{
  FUN_004ee770();
  thunk_FUN_0046b170();
  return;
}



void FUN_004ee8c0(void)

{
  int in_ECX;
  
  FUN_004028d0("Sky\\CloudsCloudy.dds",0);
  FUN_004028d0("Sky\\CloudsClear.dds",0);
  *(undefined4 *)(in_ECX + 0x60) = 0x46d9999a;
  *(undefined1 *)(in_ECX + 0x48) = 0x33;
  *(undefined4 *)(in_ECX + 0x58) = 0x46d9999a;
  *(undefined1 *)(in_ECX + 0x49) = 0x33;
  *(undefined1 *)(in_ECX + 0x4a) = 0x33;
  *(undefined4 *)(in_ECX + 100) = 0x48200000;
  *(undefined4 *)(in_ECX + 0x5c) = 0x48200000;
  *(undefined1 *)(in_ECX + 0x4b) = 0xff;
  *(undefined1 *)(in_ECX + 0x4c) = 0xff;
  *(undefined1 *)(in_ECX + 0x4d) = 0xff;
  *(undefined1 *)(in_ECX + 0x4f) = 0xff;
  *(undefined1 *)(in_ECX + 0x51) = 0xff;
  *(undefined4 *)(in_ECX + 0xd8) = 0x846c66;
  *(undefined4 *)(in_ECX + 0x68) = 0x846c66;
  *(undefined **)(in_ECX + 0xdc) = &DAT_0071533e;
  *(undefined **)(in_ECX + 0x6c) = &DAT_0071533e;
  *(undefined4 *)(in_ECX + 0xe0) = 0x846d66;
  *(undefined4 *)(in_ECX + 0x70) = 0x846d66;
  *(undefined4 *)(in_ECX + 0xe4) = 0x100a05;
  *(undefined4 *)(in_ECX + 0x74) = 0x100a05;
  *(undefined4 *)(in_ECX + 0xe8) = 0x5f6db6;
  *(undefined4 *)(in_ECX + 0x78) = 0x5f6db6;
  *(undefined4 *)(in_ECX + 0xec) = 0xd19a83;
  *(undefined4 *)(in_ECX + 0x7c) = 0xd19a83;
  *(undefined4 *)(in_ECX + 0xf0) = 0x5782a8;
  *(undefined4 *)(in_ECX + 0x80) = 0x5782a8;
  *(undefined4 *)(in_ECX + 0xf4) = 0x261b0f;
  *(undefined4 *)(in_ECX + 0x84) = 0x261b0f;
  *(undefined4 *)(in_ECX + 0xf8) = 0x5b4b46;
  *(undefined4 *)(in_ECX + 0x88) = 0x5b4b46;
  *(undefined1 **)(in_ECX + 0xfc) = &LAB_009b9b9b;
  *(undefined1 **)(in_ECX + 0x8c) = &LAB_009b9b9b;
  *(undefined4 *)(in_ECX + 0x100) = 0x6c5953;
  *(undefined4 *)(in_ECX + 0x90) = 0x6c5953;
  *(undefined1 *)(in_ECX + 0x4e) = 0;
  *(undefined1 *)(in_ECX + 0x50) = 0;
  *(undefined1 *)(in_ECX + 0x52) = 0x32;
  *(undefined1 *)(in_ECX + 0x53) = 0;
  *(undefined4 *)(in_ECX + 0x104) = 0x1c140f;
  *(undefined4 *)(in_ECX + 0x94) = 0x1c140f;
  *(undefined4 *)(in_ECX + 0x98) = 0x252212;
  *(undefined4 *)(in_ECX + 0x9c) = 0x857065;
  *(undefined4 *)(in_ECX + 0xa0) = 0x35221a;
  *(undefined4 *)(in_ECX + 0xa4) = 0x281c15;
  *(undefined4 *)(in_ECX + 0xa8) = 0x79a5ff;
  *(undefined4 *)(in_ECX + 0xac) = 0xcaedff;
  *(undefined4 *)(in_ECX + 0xb0) = 0x499ae2;
  *(undefined4 *)(in_ECX + 0xb4) = 0x764d34;
  *(undefined1 **)(in_ECX + 0xb8) = &LAB_00779ff2;
  *(undefined **)(in_ECX + 0xbc) = &DAT_00bed9de;
  *(undefined4 *)(in_ECX + 0xc0) = 0x9dbdff;
  *(undefined4 *)(in_ECX + 0xc4) = 0;
  return;
}



void FUN_004eea60(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b6719;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a47fec;
  local_4 = 2;
  FUN_004ee770(uVar1);
  thunk_FUN_0046b170();
  local_4._0_1_ = 1;
  FUN_0046d850();
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 6,0xc,2,FUN_00470040);
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004eeaf0(byte param_1)

{
  FUN_004eea60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004eeb30(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  int iVar5;
  
  uVar2 = 0;
  piVar4 = in_ECX;
  if (in_ECX != (int *)0x0) {
    do {
      if (*piVar4 != 0) {
        uVar2 = uVar2 + 1;
      }
      piVar1 = piVar4 + 1;
      piVar4 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    if (uVar2 != 0) {
      iVar3 = FUN_00401f00(-(uint)((int)((ulonglong)uVar2 * 8 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar2 * 8));
      iVar5 = 0;
      do {
        *(undefined4 *)(iVar3 + iVar5 * 8) = *(undefined4 *)(*(int *)*in_ECX + 0xc);
        *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = *(undefined4 *)(*in_ECX + 4);
        in_ECX = (int *)in_ECX[1];
        iVar5 = iVar5 + 1;
      } while (in_ECX != (int *)0x0);
      FUN_0046ae40(param_1,iVar3,iVar5 * 8);
      FUN_00401f20(iVar3);
    }
  }
  return;
}



undefined4 FUN_004eebb0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *in_ECX;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  if ((((in_ECX[1] == 0) && (*in_ECX == 0)) && (param_1[1] == 0)) && (*param_1 == 0)) {
    return 0;
  }
  iVar6 = 0;
  piVar1 = in_ECX;
  do {
    if (*piVar1 != 0) {
      iVar6 = iVar6 + 1;
    }
    piVar1 = (int *)piVar1[1];
  } while (piVar1 != (int *)0x0);
  iVar4 = 0;
  piVar1 = param_1;
  do {
    if (*piVar1 != 0) {
      iVar4 = iVar4 + 1;
    }
    piVar1 = (int *)piVar1[1];
  } while (piVar1 != (int *)0x0);
  if (iVar6 != iVar4) {
    return 1;
  }
  do {
    bVar7 = false;
    piVar1 = param_1;
    do {
      if (piVar1 == (int *)0x0) {
        if (!bVar7) {
          return 1;
        }
        break;
      }
      pbVar3 = (byte *)*piVar1;
      pbVar5 = (byte *)*in_ECX;
      uVar2 = 8;
      do {
        if (*(int *)pbVar5 != *(int *)pbVar3) goto LAB_004eec49;
        uVar2 = uVar2 - 4;
        pbVar3 = pbVar3 + 4;
        pbVar5 = pbVar5 + 4;
      } while (3 < uVar2);
      if (uVar2 == 0) {
LAB_004eeca6:
        iVar4 = 0;
      }
      else {
LAB_004eec49:
        iVar6 = (uint)*pbVar5 - (uint)*pbVar3;
        if (iVar6 == 0) {
          if (uVar2 == 1) goto LAB_004eeca6;
          iVar6 = (uint)pbVar5[1] - (uint)pbVar3[1];
          if (iVar6 == 0) {
            if (uVar2 == 2) goto LAB_004eeca6;
            iVar6 = (uint)pbVar5[2] - (uint)pbVar3[2];
            if (iVar6 == 0) {
              if ((uVar2 == 3) || (iVar6 = (uint)pbVar5[3] - (uint)pbVar3[3], iVar6 == 0))
              goto LAB_004eeca6;
            }
          }
        }
        iVar4 = 1;
        if (iVar6 < 1) {
          iVar4 = -1;
        }
      }
      piVar1 = (int *)piVar1[1];
      bVar7 = iVar4 == 0;
    } while (!bVar7);
    in_ECX = (int *)in_ECX[1];
    if (in_ECX == (int *)0x0) {
      return 0;
    }
  } while( true );
}



undefined4 FUN_004eece0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 0;
  piVar3 = in_ECX;
  if (in_ECX != (int *)0x0) {
    do {
      if (*piVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*piVar3 + 4);
      }
      piVar1 = piVar3 + 1;
      uVar7 = uVar7 + iVar5;
      piVar3 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    if (uVar7 != 0) {
      uVar4 = FUN_0047df80(0);
      uVar8 = 0;
      uVar6 = 0xffffffff;
      do {
        puVar2 = (undefined4 *)*in_ECX;
        if (puVar2 != (undefined4 *)0x0) {
          uVar6 = uVar6 + puVar2[1];
          if ((uVar8 <= uVar4 % uVar7) && (uVar4 % uVar7 <= uVar6)) break;
          uVar8 = uVar8 + puVar2[1];
        }
        in_ECX = (int *)in_ECX[1];
      } while (in_ECX != (int *)0x0);
      if (puVar2 != (undefined4 *)0x0) {
        return *puVar2;
      }
    }
  }
  return 0;
}



void FUN_004eed50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  FUN_005b1d70();
  return;
}



void thunk_FUN_005b1d70(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  for (puVar1 = in_ECX; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[1]) {
    FUN_00401f20(*puVar1);
  }
  iVar2 = in_ECX[1];
  while (iVar2 != 0) {
    iVar2 = *(int *)(in_ECX[1] + 4);
    FUN_00401f20(in_ECX[1]);
    in_ECX[1] = iVar2;
  }
  *in_ECX = 0;
  return;
}



void FUN_004eed80(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != (int *)0x0) {
    if (param_2 == '\0') {
      FUN_005b1d70();
    }
    if (param_1[1] != 0) goto LAB_004eeda3;
    piVar1 = (int *)*param_1;
    while (piVar1 != (int *)0x0) {
LAB_004eeda3:
      puVar3 = (undefined4 *)FUN_00401f00(8);
      puVar2 = (undefined4 *)*param_1;
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      FUN_0067b1e0(puVar3);
      param_1 = (int *)param_1[1];
      piVar1 = param_1;
    }
  }
  return;
}



void FUN_004eedd0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  if ((((param_2 != 0) && (param_1 != 0)) && (param_3 != 0)) &&
     (uVar7 = *(uint *)(param_2 + 0x254) >> 3, uVar7 != 0)) {
    FUN_005b1d70();
    puVar3 = (undefined4 *)FUN_00401f00(uVar7 * 8);
    cVar2 = FUN_00450c20(puVar3,uVar7 * 8);
    puVar1 = puVar3;
    if (cVar2 == '\0') {
      FUN_004a7a60("Error getting TESWeatherList chunk for form ID: %d",
                   *(undefined4 *)(param_3 + 0xc));
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      FUN_0046bb20(puVar1,param_2);
      piVar4 = (int *)FUN_00401f00(8);
      uVar5 = FUN_0046b250(*puVar1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05400,0);
      iVar6 = FUN_009832e6(uVar5);
      *piVar4 = iVar6;
      if (iVar6 == 0) {
        FUN_004a7a60("Error while loading weather list...cannot identify TESWeather from form ID: (%08X)"
                     ,*puVar1);
        FUN_00401f20(piVar4);
      }
      else {
        piVar4[1] = puVar1[1];
        FUN_00446cb0(piVar4);
      }
      puVar1 = puVar1 + 2;
    }
    FUN_005b27a0(&LAB_004eeb10);
    FUN_00401f20(puVar3);
  }
  return;
}



int FUN_004eeef0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_009828c0();
  iVar1 = iVar1 >> 0xc;
  iVar2 = FUN_009828c0();
  iVar3 = FUN_009828c0();
  if ((param_1 <= iVar3 >> 0xc) && (iVar1 <= param_1)) {
    iVar4 = FUN_009828c0();
    if ((param_2 <= iVar4 >> 0xc) && (iVar2 >> 0xc <= param_2)) {
      return ((((iVar3 >> 0xc) - iVar1) + 1) * (param_2 - (iVar2 >> 0xc)) - iVar1) + param_1;
    }
  }
  return -1;
}



void FUN_004ef030(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0xa8) != 0) && (param_1 != 0)) {
    iVar3 = FUN_009828c0();
    iVar4 = FUN_009828c0();
    iVar5 = FUN_009828c0();
    iVar6 = FUN_009828c0();
    for (iVar6 = iVar6 >> 0xc; iVar2 = iVar3 >> 0xc, iVar6 <= iVar4 >> 0xc; iVar6 = iVar6 + 1) {
      for (; iVar2 <= iVar5 >> 0xc; iVar2 = iVar2 + 1) {
        iVar7 = FUN_004eeef0(iVar6,iVar2);
        if ((-1 < iVar7) && (*(int *)(*(int *)(in_ECX + 0xa8) + iVar7 * 4) != 0)) {
          piVar1 = (int *)(*(int *)(in_ECX + 0xa8) + iVar7 * 4);
          *piVar1 = *piVar1 + param_1;
        }
      }
    }
  }
  return;
}



undefined4 FUN_004ef0f0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x94);
}



void FUN_004ef100(undefined4 param_1)

{
  int in_ECX;
  undefined4 unaff_retaddr;
  
  if (*(int **)(in_ECX + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x54) + 0x10))(1);
    *(undefined4 *)(in_ECX + 0x54) = unaff_retaddr;
    return;
  }
  *(undefined4 *)(in_ECX + 0x54) = param_1;
  return;
}



byte FUN_004ef130(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x5c) & 1;
}



byte FUN_004ef140(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x5c) >> 1 & 1;
}



byte FUN_004ef150(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x5c) >> 2 & 1;
}



byte FUN_004ef160(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x5c) >> 3 & 1;
}



void FUN_004ef170(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(byte *)(in_ECX + 0x5c) = *(byte *)(in_ECX + 0x5c) | 8;
    return;
  }
  *(byte *)(in_ECX + 0x5c) = *(byte *)(in_ECX + 0x5c) & 0xf7;
  return;
}



byte FUN_004ef190(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x5c) >> 4 & 1;
}



undefined4 FUN_004ef1a0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x7c);
}



int FUN_004ef1b0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x7c);
  while (iVar1 = iVar2, iVar1 != 0) {
    in_ECX = iVar1;
    iVar2 = *(int *)(iVar1 + 0x7c);
  }
  return in_ECX + 0x84;
}



undefined4 FUN_004ef1d0(undefined2 param_1,undefined2 param_2)

{
  return CONCAT22(param_1,param_2);
}



undefined4 FUN_004ef1e0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x34);
}



undefined4 FUN_004ef1f0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x34) == 0) {
    iVar2 = FUN_00401f00(0x58,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004d3210();
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x34) = uVar3;
    FUN_004ccba0(1);
    FUN_004ca710();
  }
  uVar3 = *(undefined4 *)(in_ECX + 0x34);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_004ef270(int param_1)

{
  int in_ECX;
  
  if ((param_1 != 0) && (*(int *)(in_ECX + 0x34) != 0)) {
    FUN_004cbd30();
    return;
  }
  return;
}



void FUN_004ef290(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x34) != 0) {
    FUN_004cb980(in_ECX);
  }
  return;
}



undefined4 FUN_004ef2b0(char param_1)

{
  undefined4 uVar1;
  
  if (((param_1 != '0') && (param_1 != '7')) && (param_1 != '8')) {
    uVar1 = FUN_004ca010();
    return uVar1;
  }
  return 1;
}



bool FUN_004ef2d0(uint param_1)

{
  int in_ECX;
  
  return (*(uint *)(in_ECX + 0xdc) & param_1) != 0;
}



void FUN_004ef2f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a48184;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_004ef310(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a481a4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_004ef350(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a48184;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004ef380(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a481a4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined1 FUN_004ef520(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  undefined1 local_19;
  int iStack_10;
  int iStack_c;
  
  if (((param_1 != 0) && (cVar3 = FUN_0044faa0(), cVar3 != '\0')) &&
     (iVar5 = *(int *)(in_ECX + 0xa8), iVar5 != 0)) {
    iVar4 = FUN_004eeef0(param_2,param_3);
    if ((iVar4 != -1) && (iVar5 = *(int *)(iVar5 + iVar4 * 4), iVar5 != 0)) {
      FUN_00451460(*(int *)(in_ECX + 0xbc) + iVar5);
      return 1;
    }
    return 0;
  }
  local_19 = 0;
  iVar5 = FUN_004c97a0(param_2,param_3);
  iVar4 = FUN_004c97c0(param_2,param_3);
  if ((param_1 != 0) && (cVar3 = FUN_00451920(in_ECX), cVar3 != '\0')) {
    FUN_004518b0(1);
    bVar2 = false;
    if ((int *)(param_1 + 0x23c) != (int *)0x0) {
switchD_004ef613_caseD_2:
      if (!bVar2) {
        iVar6 = *(int *)(param_1 + 0x23c);
        if (iVar6 == DAT_00b05e20) {
          bVar1 = true;
          bVar2 = true;
          switch(*(undefined4 *)(param_1 + 0x248)) {
          case 1:
            bVar1 = false;
          case 4:
            if (iVar5 == *(int *)(param_1 + 0x244)) {
              bVar1 = false;
            }
switchD_004ef613_caseD_5:
            if (iVar4 == *(int *)(param_1 + 0x244)) {
              bVar1 = false;
            }
switchD_004ef613_caseD_6:
            bVar2 = false;
            if (bVar1) {
              FUN_00451580();
              goto switchD_004ef613_caseD_2;
            }
            break;
          default:
            goto switchD_004ef613_caseD_2;
          case 5:
            goto switchD_004ef613_caseD_5;
          case 6:
          case 8:
          case 9:
          case 10:
            goto switchD_004ef613_caseD_6;
          }
        }
        else {
          if (iVar6 != DAT_00b06048) {
            if (iVar6 == DAT_00b0609c) {
              FUN_004518b0(1);
            }
            else {
              if (iVar6 == DAT_00b060a8) goto LAB_004ef6f7;
              bVar2 = true;
            }
            goto switchD_004ef613_caseD_2;
          }
          iStack_10 = 0;
          iStack_c = 0;
          if ((*(uint *)(param_1 + 0x244) & 0x400) == 0) {
            bVar1 = false;
            iVar6 = FUN_004510b0();
            if (iVar6 != 0) {
              while (!bVar1) {
                if (iVar6 == 0x434c4358) {
                  FUN_00450c20(&iStack_10,8);
                  bVar1 = true;
                }
                cVar3 = FUN_0044fea0();
                if ((cVar3 == '\0') || (iVar6 = FUN_004510b0(), iVar6 == 0)) break;
              }
            }
          }
          else {
            iStack_10 = 0x7fffffff;
          }
          if ((iStack_10 == param_2) && (iStack_c == param_3)) {
            local_19 = 1;
            bVar2 = true;
            FUN_00451160();
            goto switchD_004ef613_caseD_2;
          }
        }
LAB_004ef6f7:
        FUN_004518b0(1);
        goto switchD_004ef613_caseD_2;
      }
    }
  }
  return local_19;
}



undefined4 FUN_004ef740(int param_1)

{
  char cVar1;
  uint uVar2;
  int in_ECX;
  
  if (param_1 != 0) {
    cVar1 = FUN_0044faa0();
    if ((cVar1 != '\0') && (*(int *)(in_ECX + 0xbc) != 0)) {
      cVar1 = FUN_00451460(*(int *)(in_ECX + 0xbc));
      if (cVar1 != '\0') {
        uVar2 = FUN_004511c0();
        if ((uVar2 == DAT_00b0607c) && (*(int *)(param_1 + 0x248) == *(int *)(in_ECX + 0xc))) {
          return 1;
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_004ef7a0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x7c);
  while (iVar1 = iVar2, iVar1 != 0) {
    in_ECX = iVar1;
    iVar2 = *(int *)(iVar1 + 0x7c);
  }
  return *(undefined4 *)(in_ECX + 0x58);
}



int FUN_004ef7c0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x7c);
  while (iVar1 = iVar2, iVar1 != 0) {
    in_ECX = iVar1;
    iVar2 = *(int *)(iVar1 + 0x7c);
  }
  iVar2 = *(int *)(in_ECX + 0x80);
  if (*(int *)(in_ECX + 0x80) == 0) {
    iVar2 = DAT_00b360ac;
  }
  return iVar2;
}



int FUN_004ef7e0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x7c);
  while (iVar1 = iVar2, iVar1 != 0) {
    in_ECX = iVar1;
    iVar2 = *(int *)(iVar1 + 0x7c);
  }
  return in_ECX + 0x38;
}



uint FUN_004efe40(float *param_1)

{
  return (int)(short)((int)ROUND(*param_1) >> 0xc) << 0x10 | (int)ROUND(param_1[1]) >> 0xc & 0xffffU
  ;
}



uint FUN_004efe80(uint param_1,uint param_2)

{
  char cVar1;
  short sVar2;
  
  if (((((int)param_1 < 0x8000) && ((int)param_2 < 0x8000)) && (-0x8001 < (int)param_1)) &&
     (-0x8001 < (int)param_2)) {
    sVar2 = (short)param_1;
    param_1 = 0;
    cVar1 = FUN_0055e000((int)sVar2 << 0x10 | param_2 & 0xffff,&param_1);
    return -(uint)(cVar1 != '\0') & param_1;
  }
  FUN_004a7a60("Trying to get exterior cell for invalid cell coordinate. Values must be between %i and %i."
               ,0xffff8000,0x7fff);
  return 0;
}



undefined4 FUN_004efef0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  undefined4 uVar7;
  int in_ECX;
  
  piVar2 = param_1;
  if (param_1 != (int *)0x0) {
    cVar4 = FUN_004c97f0();
    if (cVar4 == '\0') {
      cVar4 = FUN_004d7030();
      if (cVar4 == '\0') {
        uVar6 = FUN_004c9aa0();
        sVar5 = FUN_004c9a80();
        uVar6 = (int)sVar5 << 0x10 | uVar6 & 0xffff;
        cVar4 = FUN_0055e000(uVar6,&param_1);
        piVar3 = param_1;
        if (cVar4 == '\0') {
          FUN_00452570(uVar6,piVar2);
          FUN_004c9d00(in_ECX);
          return 1;
        }
        iVar1 = param_1[3];
        uVar7 = FUN_004c9aa0();
        uVar7 = FUN_004c9a80(uVar7);
        uVar7 = (**(code **)(*piVar3 + 0xd4))(uVar7);
        FUN_004a7a60("Cell (%08X) %s already exists at coord (%i, %i ).",iVar1,uVar7);
      }
      else if (*(int *)(in_ECX + 0x34) == 0) {
        *(int **)(in_ECX + 0x34) = piVar2;
        FUN_004c9d00(in_ECX);
        return 1;
      }
      return 0;
    }
  }
  return 0;
}



void FUN_004effc0(int param_1)

{
  int iVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  
  iVar1 = param_1;
  if ((param_1 != 0) && (cVar2 = FUN_004c97f0(), cVar2 == '\0')) {
    uVar4 = FUN_004c9aa0();
    sVar3 = FUN_004c9a80();
    uVar4 = (int)sVar3 << 0x10 | uVar4 & 0xffff;
    cVar2 = FUN_0055e000(uVar4,&param_1);
    if ((cVar2 != '\0') && (iVar1 == param_1)) {
      FUN_004524c0(uVar4);
      FUN_004c9d00(0);
    }
  }
  return;
}


