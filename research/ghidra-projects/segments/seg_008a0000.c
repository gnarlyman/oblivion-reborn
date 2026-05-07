
void FUN_008a0060(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x1c);
  }
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)(iVar1 + 0xc);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x24))(param_1);
  }
  thunk_FUN_00700650(param_1);
  return;
}



void FUN_008a00a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x18);
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
  (**(code **)(*param_1 + 0x2c))(uVar2);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x1c);
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
  (**(code **)(*param_1 + 0x2c))(uVar2);
  FUN_0089d7b0(param_1);
  return;
}



undefined4 FUN_008a0110(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int *piVar4;
  
  if ((in_ECX == (int *)0x0) || (iVar2 = in_ECX[2], iVar2 == 0)) {
    return 0;
  }
  if (param_1 == 0) {
    (**(code **)(*in_ECX + 0x60))();
  }
  else {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x1c);
    }
    if (iVar2 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(iVar2 + 0xc);
    }
    if ((piVar4 == (int *)0x0) || (cVar1 = (**(code **)(*piVar4 + 0x5c))(param_1), cVar1 != '\0')) {
      uVar3 = FUN_0089d960(param_1);
      return uVar3;
    }
  }
  return 0;
}



void FUN_008a0180(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0089da00(param_1);
  param_1 = FUN_0070f910(DAT_00ba7d44);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_008a01f0(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x10))();
  return;
}



void FUN_008a0200(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 4) + 8) = 0;
    puVar1 = *(undefined4 **)(in_ECX + 4);
    if ((*(short *)(puVar1 + 1) != 0) &&
       (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
       *(short *)((int)puVar1 + 6) == 0)) {
      (**(code **)*puVar1)(1);
    }
  }
  if (param_1 != 0) {
    if (*(short *)(param_1 + 4) != 0) {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
    }
    *(int *)(param_1 + 8) = in_ECX;
  }
  *(int *)(in_ECX + 4) = param_1;
  return;
}



void FUN_008a0250(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d68e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a564a4;
  local_4 = 0;
  FUN_0089d700(uVar1);
  DAT_00ba7d4c = DAT_00ba7d4c + -1;
  local_4 = 0xffffffff;
  FUN_0089d780();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008a0320(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  uVar1 = param_1;
  FUN_007124d0();
  iVar2 = FUN_007124a0();
  iVar3 = FUN_007124a0();
  iVar4 = (**(code **)(*in_ECX + 0x74))(&param_1);
  if (((iVar4 != 0) && (iVar4 != 4)) && (iVar2 != 0)) {
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar2 + 8);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar3 + 8);
      FUN_0089d6c0(uVar1);
      return;
    }
    *(undefined4 *)(iVar4 + 0xc) = 0;
  }
  FUN_0089d6c0(uVar1);
  return;
}



void FUN_008a03a0(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  
  iVar1 = (**(code **)(*in_ECX + 0x8c))();
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)(iVar1 + 0xc);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x24))(param_1);
  }
  thunk_FUN_00700650(param_1);
  return;
}



byte FUN_008a0420(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  byte bVar6;
  
  bVar1 = thunk_FUN_00700670(param_1);
  bVar6 = 0;
  if (bVar1 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x88))();
    iVar3 = (**(code **)(*in_ECX + 0x88))();
    iVar4 = (**(code **)(*param_1 + 0x8c))();
    iVar5 = (**(code **)(*in_ECX + 0x8c))();
    bVar6 = bVar1 & iVar3 == iVar2 & iVar5 == iVar4;
  }
  return bVar6;
}



void FUN_008a0500(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) {
    if (param_1 != 0) {
      FUN_008bc720();
    }
    if (*(int *)(iVar1 + 0x14) != 0) {
      FUN_008bc730();
    }
    *(int *)(iVar1 + 0x14) = param_1;
  }
  return;
}



void FUN_008a0570(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 8);
  }
  if (param_1 != iVar1) {
    if ((iVar1 != 0) && (*(int **)(iVar1 + 8) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar1 + 8) + 8))(iVar1);
    }
    FUN_0089d400(param_1);
  }
  return;
}



void FUN_008a0610(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d691b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 != (undefined4 *)0x0) && (param_1 != (undefined4 *)&DAT_00000004)) {
    iStack_4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x28,0x29,uVar1);
    *(undefined2 *)(iStack_4 + 4) = 0x28;
    local_c = 0;
    puVar2 = (undefined4 *)FUN_008d99a0(param_1[2],param_1[3],*param_1,param_1[1],1);
    local_c = -1;
    (**(code **)(*in_ECX + 0x4c))(puVar2);
    if ((*(short *)(puVar2 + 1) != 0) &&
       (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
       *(short *)((int)puVar2 + 6) == 0)) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*in_ECX + 0x7c))(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_008a06e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  if (in_ECX == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = in_ECX[2];
  }
  if (iVar3 == 0) {
    return 0;
  }
  if (param_1 == (int *)0x0) {
    (**(code **)(*in_ECX + 0x60))();
    return 0;
  }
  iVar1 = (**(code **)(*in_ECX + 0x58))();
  iVar2 = (**(code **)(*param_1 + 0x58))();
  if (iVar1 != iVar2) {
    (**(code **)(*in_ECX + 0x60))();
    (**(code **)(*in_ECX + 0x90))(param_1,1);
    FUN_0088c330(iVar3);
    return 1;
  }
  return 0;
}



undefined1 FUN_008a0760(void)

{
  undefined1 uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = 0;
  iVar2 = (**(code **)(*in_ECX + 0x58))();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x2b0);
  }
  if (iVar2 != 0) {
    uVar1 = FUN_0088b600(in_ECX[2]);
    (**(code **)(*in_ECX + 0x90))(iVar2,0);
  }
  return uVar1;
}



void FUN_008a07b0(undefined4 *param_1)

{
  FUN_008a0200(param_1);
  if ((*(short *)(param_1 + 1) != 0) &&
     (*(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + -1,
     *(short *)((int)param_1 + 6) == 0)) {
    (**(code **)*param_1)(1);
  }
  return;
}



void FUN_008a07e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  if ((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) {
    FUN_008a0200(*(undefined4 *)(iVar1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0x14);
    *(uint *)(param_1 + 8) = (uint)*(byte *)(iVar1 + 0x18);
    return;
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 8) = 0;
    puVar2 = *(undefined4 **)(param_1 + 4);
    if ((*(short *)(puVar2 + 1) != 0) &&
       (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
       *(short *)((int)puVar2 + 6) == 0)) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



void FUN_008a0860(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 unaff_retaddr;
  undefined1 local_5 [5];
  
  iVar3 = (**(code **)(*in_ECX + 0x74))(local_5);
  iVar1 = param_1;
  if (iVar3 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)(iVar3 + -4);
  }
  if (*(float *)(param_1 + 0x10) != 1.0) {
    (**(code **)*puVar5)(0,param_1);
  }
  if (puVar5[3] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(puVar5[3] + 0xc);
  }
  if (puVar5[4] == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *(int **)(puVar5[4] + 0xc);
  }
  puVar5[3] = 0;
  puVar5[4] = 0;
  if (iVar3 != 0) {
    cVar2 = FUN_0055e000(iVar3,&param_1);
    if (cVar2 != '\0') {
      if (param_1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + 8);
      }
      puVar5[3] = uVar4;
    }
    if (piVar6 != (int *)0x0) {
      cVar2 = FUN_0055e000(piVar6,&param_1);
      iVar3 = param_1;
      if (cVar2 == '\0') {
        iVar3 = (**(code **)(*piVar6 + 0x18))(iVar1);
      }
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar3 + 8);
      }
      puVar5[4] = uVar4;
    }
  }
  FUN_0089d610(unaff_retaddr,iVar1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008a0940(char *param_1)

{
  undefined4 in_ECX;
  char *pcVar1;
  int *unaff_FS_OFFSET;
  char *pcVar2;
  char *pcVar3;
  char *local_238;
  uint uStack_234;
  undefined1 local_220 [12];
  undefined1 *local_214;
  undefined1 local_210 [512];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d694b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)local_220;
  uStack_234 = DAT_00b30aac ^ (uint)&stack0xfffffdd0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(uint *)(param_1 + 4) < 6) {
    pcVar1 = param_1 + 8;
    pcVar2 = param_1 + 0xe0;
    if (param_1[8] == '\0') {
      pcVar1 = "Please";
    }
    local_214 = (undefined1 *)&local_238;
    local_238 = (char *)CONCAT31((int3)((uint)in_ECX >> 8),1);
    FUN_008bbfb0(local_210,0x200);
    local_238 = " re-export\n";
    pcVar3 = " contains an old bhkConstraint! ";
    local_4 = 0;
    FUN_008bbdb0("File ");
    FUN_008bbdb0(pcVar2);
    FUN_008bbdb0(pcVar3);
    FUN_008bbdb0(pcVar1);
    FUN_008bbdb0();
    local_238 = (char *)0x133;
    (**(code **)(*DAT_00ba7fb0 + 8))(1,0x234f2250,local_210,".\\bhkConstraint.cpp");
    local_4 = 0xffffffff;
    local_238 = (char *)0x8a0a37;
    FUN_008bc000();
    local_238 = (char *)0x8a0a3e;
    FUN_00712ae0();
  }
  local_238 = param_1;
  FUN_0089d650();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_008a0a70(int *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined4 extraout_ECX;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int *piStack_238;
  uint uStack_234;
  undefined1 auStack_220 [12];
  undefined1 *puStack_214;
  undefined1 auStack_210 [504];
  undefined4 uStack_18;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d694b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_220;
  uStack_234 = DAT_00b30aac ^ (uint)&stack0xfffffdd0;
  *unaff_FS_OFFSET = (int)&local_c;
  piStack_238 = (int *)0x8a0abf;
  iVar2 = (**(code **)(*in_ECX + 0x8c))();
  if (param_2 == '\0') {
    if (param_1 == (int *)0x0) {
LAB_008a0bee:
      iVar3 = 0;
    }
    else {
      piStack_238 = (int *)0x8a0be5;
      iVar3 = (**(code **)(*param_1 + 0x58))();
      if (iVar3 == 0) goto LAB_008a0bee;
      iVar3 = *(int *)(iVar3 + 0x34);
    }
    if (iVar2 == iVar3) {
      piStack_238 = (int *)0x0;
      (**(code **)(*in_ECX + 0x84))();
    }
  }
  else {
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = *(int **)(iVar2 + 0xc);
    }
    if (piVar5 == (int *)0x0) {
      if (param_1 == (int *)0x0) {
LAB_008a0bc4:
        piStack_238 = (int *)0x0;
      }
      else {
        piStack_238 = (int *)0x8a0bbb;
        iVar2 = (**(code **)(*param_1 + 0x58))();
        if (iVar2 == 0) goto LAB_008a0bc4;
        piStack_238 = *(int **)(iVar2 + 0x34);
      }
      (**(code **)(*in_ECX + 0x84))();
      uVar4 = 1;
      goto LAB_008a0c05;
    }
    piStack_238 = (int *)0x8a0ae9;
    cVar1 = FUN_00607840();
    if (cVar1 == '\0') {
      piStack_238 = (int *)0x8a0afa;
      iVar3 = (**(code **)(*in_ECX + 0x88))();
      *(uint *)(iVar2 + 0x30) =
           *(uint *)(iVar3 + 0x30) & 0xffff0000 | (uint)*(ushort *)(iVar2 + 0x30);
    }
    if (param_1[7] == 0) {
      piStack_238 = param_1;
      (**(code **)(*piVar5 + 0x5c))();
      iVar2 = (**(code **)(*piVar5 + 0x58))();
      if (iVar2 == 0) {
        puStack_214 = (undefined1 *)&piStack_238;
        piStack_238 = (int *)CONCAT31((int3)((uint)extraout_ECX >> 8),1);
        FUN_008bbfb0(auStack_210,0x200);
        piStack_238 = (int *)0xa97188;
        uStack_4 = 0;
        FUN_008bbdb0();
        piStack_238 = (int *)0x2b0;
        (**(code **)(*DAT_00ba7fb0 + 8))(1,0x234f24fc,auStack_210,".\\bhkConstraint.cpp");
        uStack_18 = 0xffffffff;
        FUN_008bc000();
        (**(code **)(*piVar5 + 0x84))(param_1);
      }
    }
  }
  uVar4 = 0;
LAB_008a0c05:
  *unaff_FS_OFFSET = local_c;
  return uVar4;
}



void FUN_008a0c30(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = param_1;
  FUN_00712ae0();
  (**(code **)(*in_ECX + 0x10))();
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 2,4,&param_1,1);
  return;
}



void FUN_008a0c80(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined4 local_4;
  
  piVar2 = param_1;
  piVar1 = param_1 + 0x88;
  local_4 = 2;
  param_1 = (int *)0x4;
  (**(code **)(*piVar1 + 8))(*piVar1,&local_4,4,&param_1,1);
  if (in_ECX[3] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(in_ECX[3] + 0xc);
  }
  (**(code **)(*piVar2 + 0x2c))(uVar3);
  if (in_ECX[4] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(in_ECX[4] + 0xc);
  }
  (**(code **)(*piVar2 + 0x2c))(uVar3);
  (**(code **)(*in_ECX + 0x10))();
  local_4 = 4;
  (**(code **)(piVar2[0x88] + 8))(piVar2[0x88],in_ECX + 2,4,&local_4,1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008a0d20(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  uint uVar2;
  undefined4 uStack_28;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&uStack_28;
  if (*(int *)(in_ECX + 4) != 0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0xc))();
    uVar1 = FUN_008e7d80(uVar1);
    uStack_28 = FUN_0070fc30(&DAT_00a97238,uVar1);
    uVar2 = (uint)*(ushort *)(param_1 + 10);
    if (*(ushort *)(param_1 + 8) <= uVar2) {
      FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
    }
    FUN_0042bb90(uVar2,&uStack_28);
  }
  _sprintf(local_24,"0x%8X",*(undefined4 *)(in_ECX + 0xc));
  uStack_28 = FUN_0070fc30("hkEntityA",local_24);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&uStack_28);
  _sprintf(local_24,"0x%8X",*(undefined4 *)(in_ECX + 0x10));
  uStack_28 = FUN_0070fc30("hkEntityB",local_24);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&uStack_28);
  uStack_28 = FUN_0070faf0("ePriority",*(undefined4 *)(in_ECX + 8));
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&uStack_28);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008a0e80(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d61e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a96704;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba7d58 = _DAT_00ba7d58 + -1;
  local_4 = 0xffffffff;
  FUN_008ce450();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008a0ef0(void)

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
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a5591c;
    puVar2[3] = 0;
    puVar2[4] = 0;
    DAT_00ba7d70 = DAT_00ba7d70 + 1;
    *puVar2 = &PTR_FUN_00a965d4;
    _DAT_00ba816c = _DAT_00ba816c + 1;
    *puVar2 = &PTR_FUN_00a96704;
    _DAT_00ba7d58 = _DAT_00ba7d58 + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008a0fa0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a5591c;
    puVar2[3] = 0;
    puVar2[4] = 0;
    DAT_00ba7d70 = DAT_00ba7d70 + 1;
    *puVar2 = &PTR_FUN_00a965d4;
    _DAT_00ba816c = _DAT_00ba816c + 1;
    *puVar2 = &PTR_FUN_00a96704;
    _DAT_00ba7d58 = _DAT_00ba7d58 + 1;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x80))(puVar2,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = unaff_EBX;
  return puVar2;
}



void FUN_008a10d0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  int *piVar6;
  undefined4 unaff_retaddr;
  undefined1 local_5 [5];
  
  iVar2 = (**(code **)(*in_ECX + 0x74))(local_5);
  if ((iVar2 != 0) && (iVar5 = 0, 0 < *(int *)(iVar2 + 8))) {
    do {
      iVar3 = *(int *)(*(int *)(iVar2 + 4) + iVar5 * 4);
      if (iVar3 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = *(int **)(iVar3 + 8);
      }
      if ((piVar6 != (int *)0x0) && (cVar1 = (**(code **)(*piVar6 + 0x8c))(param_1), cVar1 == '\0'))
      {
        iVar3 = (**(code **)(*piVar6 + 0x18))(param_1);
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar3 + 8);
        }
        *(undefined4 *)(*(int *)(iVar2 + 4) + iVar5 * 4) = uVar4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar2 + 8));
  }
  FUN_008a2670(unaff_retaddr,param_1);
  return;
}



void FUN_008a1170(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *unaff_EBX;
  uint uVar6;
  undefined4 unaff_EBP;
  uint uVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d6996;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    uVar7 = *(uint *)(param_1 + 8);
    uVar6 = 0;
    if (uVar7 != 0) {
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 4) + uVar6 * 4);
        if (iVar3 == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = *(int **)(iVar3 + 8);
        }
        if (piVar4 != (int *)0x0) {
          for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 4))(uVar1); puVar2 != (undefined4 *)0x0
              ; puVar2 = (undefined4 *)puVar2[1]) {
            if (puVar2 == &DAT_00ba8150) goto LAB_008a12db;
          }
          puVar2 = (undefined4 *)(**(code **)(*piVar4 + 4))();
          while( true ) {
            if (puVar2 == (undefined4 *)0x0) {
              iVar3 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x1c,0x24);
              *(undefined2 *)(iVar3 + 4) = 0x1c;
              local_c = 1;
              piVar4 = (int *)FUN_008e89d0(unaff_EBP,uVar7);
              goto LAB_008a1242;
            }
            if (puVar2 == &DAT_00ba7ff8) break;
            puVar2 = (undefined4 *)puVar2[1];
          }
        }
LAB_008a12db:
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    iVar3 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x20,0x24);
    *(undefined2 *)(iVar3 + 4) = 0x20;
    local_c = 0;
    piVar4 = (int *)FUN_008e86e0(unaff_EBP,uVar7);
LAB_008a1242:
    local_c = -1;
    uVar5 = (**(code **)(*piVar4 + 0x20))();
    if (*(uint *)(param_1 + 0x14) <= uVar7) {
      uVar7 = *(uint *)(param_1 + 0x14);
    }
    uVar1 = 0;
    if (uVar7 != 0) {
      do {
        FUN_008e8880(uVar5,*(undefined4 *)(*(int *)(iStack_4 + 0x10) + uVar1 * 4));
        (**(code **)(*piVar4 + 0x24))(uVar5);
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar7);
    }
    (**(code **)(*unaff_EBX + 0x4c))(piVar4);
    if (((short)piVar4[1] != 0) &&
       (*(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + -1,
       *(short *)((int)piVar4 + 6) == 0)) {
      (**(code **)*piVar4)(1);
    }
    (**(code **)(*unaff_EBX + 0x7c))(puStack_8);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008a1320(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  uint uVar4;
  
  if ((in_ECX == 0) || (*(int **)(in_ECX + 8) == (int *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x1c))();
  }
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      if (((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) ||
         (iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 8) + 0x10) + uVar4 * 8), iVar1 == 0)) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = *(int **)(iVar1 + 8);
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x24))(param_1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  thunk_FUN_00700650(param_1);
  return;
}



void FUN_008a1390(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int **)(in_ECX + 8) != (int *)0x0)) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x1c))();
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      if ((*(int *)(in_ECX + 8) == 0) ||
         (iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 8) + 0x10) + iVar1 * 8), iVar2 == 0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 8);
      }
      if (iVar2 != 0) {
        InterlockedIncrement((LONG *)(iVar2 + 4));
      }
    }
  }
  return;
}



void FUN_008a13e0(void)

{
  int iVar1;
  int iVar2;
  LONG LVar3;
  int in_ECX;
  undefined4 *puVar4;
  
  if ((in_ECX != 0) && (*(int **)(in_ECX + 8) != (int *)0x0)) {
    iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x1c))();
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      if ((*(int *)(in_ECX + 8) == 0) ||
         (iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 8) + 0x10) + iVar2 * 8), iVar1 == 0)) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = *(undefined4 **)(iVar1 + 8);
      }
      if ((puVar4 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar4 + 1), LVar3 == 0)) {
        (**(code **)*puVar4)(1);
      }
    }
  }
  return;
}



void FUN_008a1440(undefined4 param_1)

{
  if ((char)param_1 != '\0') {
    FUN_008a1390();
    FUN_008a26c0(param_1);
    return;
  }
  FUN_008a13e0();
  FUN_008a26c0(param_1);
  return;
}



void FUN_008a14f0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  
  if ((in_ECX == 0) || (*(int **)(in_ECX + 8) == (int *)0x0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x1c))();
  }
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      if (((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) ||
         (iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 8) + 0x10) + iVar4 * 8), iVar1 == 0)) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = *(int **)(iVar1 + 8);
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x90))(param_1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



void FUN_008a15c0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  undefined4 unaff_retaddr;
  undefined1 local_5 [5];
  
  iVar2 = (**(code **)(*in_ECX + 0x74))(local_5);
  iVar3 = FUN_007124d0();
  if (iVar2 != 0) {
    piVar5 = (int *)(iVar2 + 4);
    if (-1 < *(int *)(iVar2 + 0xc)) {
      FUN_008a75d0(*piVar5,*(int *)(iVar2 + 0xc) * 4,0x14);
    }
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xc0000000 | 0x80000000;
    *piVar5 = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    if (0 < iVar3) {
      iVar4 = 0;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      FUN_008a6e40(piVar5,iVar4,4);
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      iVar4 = FUN_007124a0();
      if (iVar4 != 0) {
        uVar1 = *(undefined4 *)(iVar4 + 8);
        if (*(uint *)(iVar2 + 8) == (*(uint *)(iVar2 + 0xc) & 0x3fffffff)) {
          FUN_008a6ee0(piVar5,4);
        }
        *(undefined4 *)(*piVar5 + *(int *)(iVar2 + 8) * 4) = uVar1;
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      }
    }
  }
  thunk_FUN_0089d6c0(unaff_retaddr);
  return;
}



void FUN_008a16d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  
  thunk_FUN_008a2690(param_1);
  if ((in_ECX == 0) || (*(int **)(in_ECX + 8) == (int *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x1c))();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  uVar2 = *(uint *)(param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar2 < (int)uVar1) {
    uVar2 = uVar2 * 2;
    if ((int)uVar2 <= (int)uVar1) {
      uVar2 = uVar1;
    }
    FUN_008a6e40((int *)(param_1 + 4),uVar2,4);
  }
  *(uint *)(param_1 + 8) = uVar1;
  uVar2 = *(uint *)(param_1 + 0x18) & 0x3fffffff;
  if ((int)uVar2 < (int)uVar1) {
    uVar2 = uVar2 * 2;
    if ((int)uVar2 <= (int)uVar1) {
      uVar2 = uVar1;
    }
    FUN_008a6e40((int *)(param_1 + 0x10),uVar2,4);
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  if ((in_ECX == 0) || (*(int **)(in_ECX + 8) == (int *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x20))();
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(*(int *)(*(int *)(in_ECX + 8) + 0x10) + uVar2 * 8);
      }
      *(undefined4 *)(*(int *)(param_1 + 4) + uVar2 * 4) = uVar4;
      if ((in_ECX == 0) || (*(int **)(in_ECX + 8) == (int *)0x0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(**(int **)(in_ECX + 8) + 0x2c))(uVar3);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar2 * 4) = uVar4;
      if ((in_ECX == 0) || (*(int **)(in_ECX + 8) == (int *)0x0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x24))(uVar3);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}



undefined4 FUN_008a17e0(undefined1 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    puVar1 = (undefined4 *)FUN_00401f00(0x1c);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0x80000000;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0x80000000;
    }
    *(undefined4 **)(in_ECX + 0xc) = puVar1;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008a16d0(puVar1);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



void FUN_008a1850(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int *unaff_retaddr;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d69d0;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = (**(code **)(*in_ECX + 0x74))((int)&uStack_30 + 3,uVar2);
  iStack_1c = 0;
  uStack_18 = 0;
  iStack_14 = -0x80000000;
  local_28 = 0;
  uStack_24 = 0;
  iStack_20 = -0x80000000;
  puStack_8 = (undefined1 *)0x1;
  if (iVar3 != 0) {
    iStack_1c = *(int *)(iVar3 + 4);
    iStack_14 = *(int *)(iVar3 + 0xc);
    *(undefined4 *)(iVar3 + 0xc) = 0x80000000;
    *(undefined4 *)(iVar3 + 4) = 0;
    uStack_18 = *(uint *)(iVar3 + 8);
    *(undefined4 *)(iVar3 + 8) = 0;
    local_28 = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)(iVar3 + 0x10) = 0;
    uStack_24 = *(undefined4 *)(iVar3 + 0x14);
    *(undefined4 *)(iVar3 + 0x14) = 0;
    iStack_20 = *(int *)(iVar3 + 0x18);
    *(undefined4 *)(iVar3 + 0x18) = 0x80000000;
  }
  iVar3 = iStack_14;
  uStack_30 = uStack_18;
  (**(code **)(unaff_retaddr[0x88] + 8))(unaff_retaddr[0x88],&uStack_30,4,&stack0x00000000,1);
  uVar2 = 0;
  if (uStack_30 != 0) {
    do {
      iVar1 = *(int *)(iStack_1c + uVar2 * 4);
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar1 + 8);
      }
      (**(code **)(*unaff_retaddr + 0x2c))(uVar4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uStack_30);
  }
  FUN_008a2610(unaff_retaddr);
  FUN_008e8310(unaff_retaddr,&local_28);
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  if (-1 < iStack_20) {
    FUN_008a75d0(local_28,iStack_20 * 4,0x14);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (-1 < iVar3) {
    FUN_008a75d0(iStack_1c,iVar3 * 4,0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008a1a00(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  undefined4 local_28;
  char acStack_24 [32];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_28;
  FUN_008ce640(param_1);
  local_28 = FUN_0070f910(DAT_00ba7d5c);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_28);
  if ((in_ECX == 0) || (*(int **)(in_ECX + 8) == (int *)0x0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x1c))();
  }
  local_28 = FUN_0070faf0("Shapes",iVar1);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_28);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      _sprintf(acStack_24,"Shape%d",iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008a1b10(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d69f8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a656f4;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba7d64 = _DAT_00ba7d64 + -1;
  local_4 = 0xffffffff;
  FUN_008a2550();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008a1b80(void)

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
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a5591c;
    puVar2[3] = 0;
    puVar2[4] = 0;
    DAT_00ba7d70 = DAT_00ba7d70 + 1;
    *puVar2 = &PTR_FUN_00a656f4;
    _DAT_00ba7d64 = _DAT_00ba7d64 + 1;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_008a1c20(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0089d3d0();
    *puVar2 = &PTR_FUN_00a5591c;
    puVar2[3] = 0;
    puVar2[4] = 0;
    DAT_00ba7d70 = DAT_00ba7d70 + 1;
    *puVar2 = &PTR_FUN_00a656f4;
    _DAT_00ba7d64 = _DAT_00ba7d64 + 1;
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x80))(puVar2,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = unaff_EBX;
  return puVar2;
}



void FUN_008a1db0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = param_1;
  FUN_00712a20();
  FUN_008a25c0(uVar1);
  iVar2 = (**(code **)(*in_ECX + 0x74))(&param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  return;
}



void FUN_008a1e50(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  if (((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) ||
     (iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0xc), iVar1 == 0)) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)(iVar1 + 8);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x24))(param_1);
  }
  thunk_FUN_00700650(param_1);
  return;
}



void FUN_008a1e90(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) ||
     (iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0xc), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  (**(code **)(*param_1 + 0x2c))(uVar2);
  FUN_008a2610(param_1);
  return;
}



undefined4 thunk_FUN_008a2650(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = thunk_FUN_00700670(param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                     *(int *)(param_1 + 0x10) == *(int *)(in_ECX + 0x10));
  }
  return uVar1;
}



void FUN_008a1ee0(undefined4 param_1)

{
  int iVar1;
  LONG LVar2;
  int in_ECX;
  undefined4 *puVar3;
  
  if ((char)param_1 == '\0') {
    if (((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) ||
       (iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0xc), iVar1 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = *(undefined4 **)(iVar1 + 8);
    }
    if ((puVar3 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(puVar3 + 1), LVar2 == 0)) {
      (**(code **)*puVar3)(1);
    }
  }
  else {
    if (((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) ||
       (iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0xc), iVar1 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 8);
    }
    if (iVar1 != 0) {
      InterlockedIncrement((LONG *)(iVar1 + 4));
      FUN_008a26c0(param_1);
      return;
    }
  }
  FUN_008a26c0(param_1);
  return;
}



void FUN_008a1fb0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  uVar1 = in_ECX[1];
  uVar2 = in_ECX[2];
  uVar3 = in_ECX[3];
  *param_1 = *in_ECX;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = in_ECX[5];
  uVar2 = in_ECX[6];
  uVar3 = in_ECX[7];
  param_1[4] = in_ECX[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = in_ECX[9];
  uVar2 = in_ECX[10];
  uVar3 = in_ECX[0xb];
  param_1[8] = in_ECX[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  return;
}



int FUN_008a2050(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  FUN_008a1fb0(param_1);
  uVar1 = *(undefined4 *)(in_ECX + 0x34);
  uVar2 = *(undefined4 *)(in_ECX + 0x38);
  uVar3 = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(in_ECX + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  return param_1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008a20a0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_68;
  FUN_008a2690(param_1);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc);
  }
  *(undefined4 *)(param_1 + 4) = uVar1;
  if ((in_ECX == 0) ||
     (puVar2 = (undefined4 *)(*(int *)(in_ECX + 8) + 0x20), *(int *)(in_ECX + 8) == 0)) {
    puVar2 = &DAT_00b2f090;
  }
  local_60 = *puVar2;
  uStack_5c = puVar2[1];
  uStack_58 = puVar2[2];
  uStack_54 = puVar2[3];
  local_50 = puVar2[4];
  uStack_4c = puVar2[5];
  uStack_48 = puVar2[6];
  uStack_44 = puVar2[7];
  local_40 = puVar2[8];
  uStack_3c = puVar2[9];
  uStack_38 = puVar2[10];
  uStack_34 = puVar2[0xb];
  local_30 = puVar2[0xc];
  uStack_2c = puVar2[0xd];
  uStack_28 = puVar2[0xe];
  uStack_24 = puVar2[0xf];
  FUN_0047dcd0(&local_60);
  FUN_0047dcd0(&local_50);
  FUN_0047dcd0(&local_40);
  FUN_0047dcd0(&local_30);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008a2160(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_74 [80];
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d6a2b;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_74;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff80;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_1 != 0) {
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x60,0x24,uVar1);
    *(undefined2 *)(iVar2 + 4) = 0x60;
    local_1c = 0;
    uVar3 = FUN_008a2050(&stack0xffffff88);
    puVar4 = (undefined4 *)FUN_008e8b50(*(undefined4 *)(param_1 + 4),uVar3);
    local_1c = -1;
    (**(code **)(*in_ECX + 0x4c))(puVar4);
    if ((*(short *)(puVar4 + 1) != 0) &&
       (*(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1,
       *(short *)((int)puVar4 + 6) == 0)) {
      (**(code **)*puVar4)(1);
    }
    (**(code **)(*in_ECX + 0x7c))(param_1);
    if ((in_ECX[2] == 0) || (iVar2 = *(int *)(in_ECX[2] + 0xc), iVar2 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 8);
    }
    if (iVar2 != 0) {
      in_ECX[4] = *(int *)(iVar2 + 0x10);
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008a2260(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint *unaff_FS_OFFSET;
  int aiStack_b4 [2];
  int local_ac [2];
  undefined1 local_a4 [28];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint local_24;
  uint local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009d7a3e;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)aiStack_b4;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff40;
  *unaff_FS_OFFSET = (uint)&local_1c;
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    puVar2 = &DAT_00b2f090;
  }
  else {
    puVar2 = (undefined4 *)(*(int *)(in_ECX + 8) + 0x20);
  }
  local_70 = *puVar2;
  uStack_6c = puVar2[1];
  uStack_68 = puVar2[2];
  uStack_64 = puVar2[3];
  local_60 = puVar2[4];
  uStack_5c = puVar2[5];
  uStack_58 = puVar2[6];
  uStack_54 = puVar2[7];
  local_50 = puVar2[8];
  uStack_4c = puVar2[9];
  uStack_48 = puVar2[10];
  uStack_44 = puVar2[0xb];
  local_40 = puVar2[0xc];
  uStack_3c = puVar2[0xd];
  uStack_38 = puVar2[0xe];
  uStack_34 = puVar2[0xf];
  FUN_00607740(local_a4,&local_70,uVar1);
  FUN_0043f3e0(local_80,&local_40);
  local_ac[1] = FUN_00401f00(0xdc);
  local_14 = 0;
  if (local_ac[1] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0070b780(0);
  }
  local_14 = 0xffffffff;
  FUN_006ff420("bhkTransformShape");
  (**(code **)(*param_1 + 0x84))(iVar3,0);
  *(undefined4 *)(iVar3 + 0x54) = uStack_88;
  *(undefined4 *)(iVar3 + 0x58) = uStack_84;
  *(undefined4 *)(iVar3 + 0x5c) = local_80[0];
  piVar5 = local_ac;
  piVar6 = (int *)(iVar3 + 0x30);
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  }
  if (((aiStack_b4[0] == 0) || (*(int *)(aiStack_b4[0] + 8) == 0)) ||
     (iVar4 = *(int *)(*(int *)(aiStack_b4[0] + 8) + 0xc), iVar4 == 0)) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(iVar4 + 8);
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0x90))(iVar3);
  }
  *unaff_FS_OFFSET = local_24;
  return;
}



undefined4 FUN_008a23d0(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar1 = thunk_FUN_00401aa0(0x60,1);
    bVar3 = 0x10 - ((byte)iVar1 & 0xf);
    *(byte *)(iVar1 + (uint)bVar3 + -1) = bVar3;
    uVar2 = FUN_00564b70();
    *(undefined4 *)(in_ECX + 0xc) = uVar2;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008a20a0(uVar2);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



void FUN_008a2430(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 local_34 [36];
  undefined1 local_10 [16];
  
  iVar2 = param_1;
  FUN_008a2a50(param_1);
  param_1 = FUN_0070f910(DAT_00ba7d68);
  uVar4 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  if ((in_ECX == 0) ||
     (puVar5 = (undefined4 *)(*(int *)(in_ECX + 8) + 0x20), *(int *)(in_ECX + 8) == 0)) {
    puVar5 = &DAT_00b2f090;
  }
  FUN_00607740(local_34,puVar5);
  FUN_0043f3e0(local_10,puVar5 + 0xc);
  param_1 = FUN_00707280("Trans");
  uVar4 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  param_1 = FUN_00711a50(&DAT_00a97270);
  uVar4 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar4) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar4);
  }
  FUN_0042bb90(uVar4,&param_1);
  if (((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) ||
     (iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0xc), iVar1 == 0)) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(iVar1 + 8);
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x30))(iVar2);
  }
  return;
}



void FUN_008a2550(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d68e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a5591c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  DAT_00ba7d70 = DAT_00ba7d70 + -1;
  local_4 = 0xffffffff;
  FUN_0089d780();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008a25c0(undefined4 param_1)

{
  int *piVar1;
  int *in_ECX;
  
  FUN_0089d650(param_1);
  piVar1 = (int *)(**(code **)(*in_ECX + 0x74))(&param_1);
  if (piVar1 != (int *)0x0) {
    if (0x1e < *piVar1) {
      *piVar1 = 0;
    }
    in_ECX[4] = *piVar1;
    *piVar1 = 0;
  }
  return;
}



void thunk_FUN_0089d6c0(undefined4 param_1)

{
  int *in_ECX;
  
  FUN_0068f970(param_1);
  if (in_ECX[3] != 0) {
    (**(code **)(*in_ECX + 0x70))(in_ECX[3]);
  }
  return;
}



void FUN_008a2610(void)

{
  int *piVar1;
  int *in_ECX;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  undefined1 local_4 [4];
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x74))(local_4);
  *piVar1 = in_ECX[4];
  FUN_0089d7b0(unaff_retaddr);
  (**(code **)(*in_ECX + 100))(unaff_ESI);
  return;
}



undefined4 FUN_008a2650(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = thunk_FUN_00700670(param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                     *(int *)(param_1 + 0x10) == *(int *)(in_ECX + 0x10));
  }
  return uVar1;
}



void FUN_008a2670(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_0089d610(param_1,param_2);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(in_ECX + 0x10);
  return;
}



void FUN_008a2690(undefined4 *param_1)

{
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    *param_1 = *(undefined4 *)(*(int *)(in_ECX + 8) + 8);
    return;
  }
  *param_1 = 0;
  return;
}



void FUN_008a26c0(char param_1)

{
  uint in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    *(uint *)(*(int *)(in_ECX + 8) + 8) = -(uint)(param_1 != '\0') & in_ECX;
  }
  FUN_0089d430();
  return;
}



void FUN_008a2730(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(&DAT_00b2e988 + param_1 * 0xc);
  param_2[1] = *(undefined4 *)(&DAT_00b2e98c + param_1 * 0xc);
  param_2[2] = *(undefined4 *)(&DAT_00b2e990 + param_1 * 0xc);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008a2760(int param_1)

{
  if (((_DAT_00b258f4 == *(float *)(param_1 + 0x10)) &&
      (_DAT_00b258f8 == *(float *)(param_1 + 0x14))) &&
     (_DAT_00b258fc == *(float *)(param_1 + 0x18))) {
    return 1;
  }
  return 0;
}



void FUN_008a27b0(undefined4 param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *in_ECX;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  int *unaff_FS_OFFSET;
  int *unaff_retaddr;
  uint local_20;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d6a6b;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 != (int *)0x0) {
    uVar1 = param_2[1];
    iVar2 = param_2[4];
    if ((uVar1 != 0) && (iVar2 != 0)) {
      iVar7 = FUN_00401f00(-(uint)((int)((ulonglong)uVar1 * 0xc >> 0x20) != 0) |
                           (uint)((ulonglong)uVar1 * 0xc),uVar6);
      lVar5 = (ulonglong)(uint)(iVar2 * 3) * 2;
      iVar8 = FUN_00401f00(-(uint)((int)((ulonglong)lVar5 >> 0x20) != 0) | (uint)lVar5);
      if (uVar1 != 0) {
        iVar11 = 0;
        iVar12 = iVar7;
        local_20 = uVar1;
        do {
          FUN_0043f3e0(iVar12,*param_2 + iVar11);
          iVar11 = iVar11 + 0x10;
          iVar12 = iVar12 + 0xc;
          local_20 = local_20 - 1;
        } while (local_20 != 0);
      }
      if (iVar2 != 0) {
        iVar11 = 0;
        puVar10 = (undefined2 *)(iVar8 + 4);
        iVar12 = iVar2;
        do {
          iVar3 = param_2[3];
          uVar9 = *(undefined4 *)(iVar3 + 4 + iVar11);
          uVar4 = *(undefined4 *)(iVar3 + iVar11 + 8);
          puVar10[-2] = (short)*(undefined4 *)(iVar3 + iVar11);
          puVar10[-1] = (short)uVar9;
          *puVar10 = (short)uVar4;
          iVar11 = iVar11 + 0xc;
          puVar10 = puVar10 + 3;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      iVar12 = FUN_00401f00(0xc0,uVar6);
      local_4 = 0;
      if (iVar12 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_007174b0(uVar1,iVar7,0,0,0,0,0,iVar2,iVar8);
      }
      local_4 = 0xffffffff;
      if (param_3 != 0) {
        FUN_006ff420(param_3);
      }
      FUN_00728280(1);
      (**(code **)(*in_ECX + 0x98))(uVar9);
      (**(code **)(*unaff_retaddr + 0x84))(uVar9,0);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008a2950(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c620b;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 != 0) && (DAT_00ba7d74 != '\0')) {
    iVar6 = *(int *)(in_ECX + 0x10);
    uVar1 = *(undefined4 *)(&DAT_00b2e988 + iVar6 * 0xc);
    uVar2 = *(undefined4 *)(&DAT_00b2e98c + iVar6 * 0xc);
    uVar3 = *(undefined4 *)(&DAT_00b2e990 + iVar6 * 0xc);
    iVar6 = FUN_00401f00(0x5c,uVar5);
    local_4 = 0;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_007095a0();
    }
    *(undefined4 *)(iVar6 + 0x1c) = DAT_00b25ac4;
    *(undefined4 *)(iVar6 + 0x20) = DAT_00b25ac8;
    uVar4 = DAT_00b25acc;
    *(int *)(iVar6 + 0x54) = *(int *)(iVar6 + 0x54) + 1;
    *(undefined4 *)(iVar6 + 0x24) = uVar4;
    *(undefined4 *)(iVar6 + 0x28) = DAT_00b25ac4;
    *(undefined4 *)(iVar6 + 0x2c) = DAT_00b25ac8;
    uVar4 = DAT_00b25acc;
    *(undefined4 *)(iVar6 + 0x40) = uVar1;
    *(int *)(iVar6 + 0x54) = *(int *)(iVar6 + 0x54) + 2;
    *(undefined4 *)(iVar6 + 0x44) = uVar2;
    local_4 = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x30) = uVar4;
    *(undefined4 *)(iVar6 + 0x48) = uVar3;
    FUN_00405680(iVar6);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008a2a50(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0089d820(param_1);
  param_1 = FUN_0070f910(DAT_00ba7d78);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fc30("MATERIAL",(&PTR_s_STONE_00b2e908)[*(int *)(in_ECX + 0x10)]);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



float10 FUN_008a2af0(float param_1)

{
  float fVar1;
  float10 fVar2;
  
  if (1.0 <= ABS(param_1)) {
    fVar1 = 0.0;
    if (param_1 <= 0.0) {
      fVar1 = 3.1415927;
    }
    return (float10)fVar1;
  }
  fVar2 = (float10)FUN_00986130();
  return (float10)(float)fVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008a2b40(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_ECX;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = param_2[1] * param_1[2] - param_2[2] * param_1[1];
  fVar6 = param_2[2] * *param_1 - *param_2 * param_1[2];
  fVar7 = *param_2 * param_1[1] - param_2[1] * *param_1;
  fVar8 = param_2[3] * param_1[3] - param_2[3] * param_1[3];
  *in_ECX = fVar5;
  in_ECX[1] = fVar6;
  in_ECX[2] = fVar7;
  in_ECX[3] = fVar8;
  fVar1 = param_1[3];
  fVar5 = fVar5 - fVar1 * *param_2;
  fVar6 = fVar6 - fVar1 * param_2[1];
  fVar7 = fVar7 - fVar1 * param_2[2];
  fVar8 = fVar8 - fVar1 * param_2[3];
  *in_ECX = fVar5;
  in_ECX[1] = fVar6;
  in_ECX[2] = fVar7;
  in_ECX[3] = fVar8;
  fVar1 = param_2[3];
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  *in_ECX = fVar1 * *param_1 + fVar5;
  in_ECX[1] = fVar1 * fVar2 + fVar6;
  in_ECX[2] = fVar1 * fVar3 + fVar7;
  in_ECX[3] = fVar1 * fVar4 + fVar8;
  in_ECX[3] = param_2[3] * param_1[3] + param_2[1] * param_1[1] +
              param_2[2] * param_1[2] + *param_2 * *param_1;
  return;
}



float10 FUN_008a2c00(void)

{
  float fVar1;
  int in_ECX;
  float10 fVar2;
  
  if (1.0 <= ABS(ABS(*(float *)(in_ECX + 0xc)))) {
    fVar1 = 0.0;
    if (ABS(*(float *)(in_ECX + 0xc)) <= 0.0) {
      fVar1 = 3.1415927;
    }
    return (float10)(fVar1 + fVar1);
  }
  fVar2 = (float10)FUN_00986130();
  return (float10)((float)fVar2 + (float)fVar2);
}



void FUN_008a2c70(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar1 = *in_ECX;
  fVar2 = in_ECX[1];
  fVar3 = in_ECX[2];
  fVar6 = in_ECX[3];
  fVar5 = fVar3 * fVar3;
  fVar4 = fVar5 + fVar2 * fVar2 + fVar1 * fVar1;
  auVar7._4_4_ = fVar5;
  auVar7._0_4_ = fVar4;
  auVar7._8_4_ = fVar5;
  auVar7._12_4_ = fVar5;
  auVar7 = rsqrtss(auVar7,auVar7);
  fVar5 = auVar7._0_4_;
  fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  param_1[3] = fVar6;
  fVar6 = fVar4 * fVar6;
  *param_1 = fVar4 * fVar1;
  param_1[1] = fVar4 * fVar2;
  param_1[2] = fVar4 * fVar3;
  param_1[3] = fVar6;
  if (in_ECX[3] < 0.0) {
    *param_1 = -(fVar4 * fVar1);
    param_1[1] = -(fVar4 * fVar2);
    param_1[2] = -(fVar4 * fVar3);
    param_1[3] = -fVar6;
  }
  return;
}



float10 FUN_008a2d20(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if ((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) {
    iVar2 = FUN_008a98d0();
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar1 + 0x50);
    }
    return (float10)*(float *)(iVar2 + 0xb8);
  }
  return (float10)0.0;
}



void FUN_008a2d60(float param_1)

{
  float fVar1;
  float *pfVar2;
  int in_ECX;
  int iVar3;
  
  fVar1 = param_1 * param_1 * param_1;
  *(float *)(in_ECX + 0xa0) = param_1 * *(float *)(in_ECX + 0xa0);
  *(float *)(in_ECX + 0xa4) = param_1 * *(float *)(in_ECX + 0xa4);
  *(float *)(in_ECX + 0xa8) = param_1 * *(float *)(in_ECX + 0xa8);
  *(float *)(in_ECX + 0xac) = param_1 * *(float *)(in_ECX + 0xac);
  iVar3 = 3;
  pfVar2 = (float *)(in_ECX + 0x80);
  do {
    iVar3 = iVar3 + -1;
    pfVar2[-4] = pfVar2[-4] * fVar1;
    *pfVar2 = *pfVar2 * fVar1;
    pfVar2[4] = pfVar2[4] * fVar1;
    pfVar2 = pfVar2 + 1;
  } while (iVar3 != 0);
  *(float *)(in_ECX + 0xb0) = param_1 * *(float *)(in_ECX + 0xb0);
  return;
}



void FUN_008a2de0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  float10 fVar5;
  
  FUN_0089f580(param_1);
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_0089f570();
    FUN_008aa1a0(param_1 + 0x20);
    FUN_0089f570();
    if (*(int *)(in_ECX + 8) != 0) {
      piVar4 = (int *)FUN_008a98d0();
      if (piVar4 != (int *)0x0) {
        fVar5 = (float10)FUN_0089da90();
        *(float *)(param_1 + 0xb0) = (float)fVar5;
        iVar1 = piVar4[0x25];
        iVar2 = piVar4[0x26];
        iVar3 = piVar4[0x27];
        *(int *)(param_1 + 0xa0) = piVar4[0x24];
        *(int *)(param_1 + 0xa4) = iVar1;
        *(int *)(param_1 + 0xa8) = iVar2;
        *(int *)(param_1 + 0xac) = iVar3;
        *(int *)(param_1 + 0xb4) = piVar4[0x32];
        *(int *)(param_1 + 0xb8) = piVar4[0x33];
        (**(code **)(*piVar4 + 0x28))(param_1 + 0x70);
        iVar1 = piVar4[0x25];
        iVar2 = piVar4[0x26];
        iVar3 = piVar4[0x27];
        *(int *)(param_1 + 0xa0) = piVar4[0x24];
        *(int *)(param_1 + 0xa4) = iVar1;
        *(int *)(param_1 + 0xa8) = iVar2;
        *(int *)(param_1 + 0xac) = iVar3;
      }
    }
    if ((*(int *)(in_ECX + 8) != 0) && (*(int *)(in_ECX + 8) != -0x14)) {
      fVar5 = (float10)FUN_004d6a70();
      *(float *)(param_1 + 0xc4) = (float)fVar5;
      fVar5 = (float10)FUN_008a2d20();
      *(float *)(param_1 + 200) = (float)fVar5;
    }
  }
  return;
}



undefined4 FUN_008a2eb0(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = FUN_0089fa50(param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = CONCAT31((int3)((uint)*(int *)(in_ECX + 0x18) >> 8),
                     *(int *)(in_ECX + 0x18) == *(int *)(param_1 + 0x18));
  }
  return uVar1;
}



void FUN_008a2ed0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  
  uVar4 = uRam00ba7a4c;
  uVar3 = DAT_00ba7a48;
  uVar2 = DAT_00ba7a44;
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x50);
    uVar2 = *(undefined4 *)(iVar1 + 0x44);
    uVar3 = *(undefined4 *)(iVar1 + 0x48);
    uVar4 = *(undefined4 *)(iVar1 + 0x4c);
    *param_1 = *(undefined4 *)(iVar1 + 0x40);
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    return;
  }
  *param_1 = DAT_00ba7a40;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
}



void FUN_008a2f10(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  
  uVar4 = DAT_00b2f08c;
  uVar3 = DAT_00b2f088;
  uVar2 = DAT_00b2f084;
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x50);
    uVar2 = *(undefined4 *)(iVar1 + 0x84);
    uVar3 = *(undefined4 *)(iVar1 + 0x88);
    uVar4 = *(undefined4 *)(iVar1 + 0x8c);
    *param_1 = *(undefined4 *)(iVar1 + 0x80);
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    return;
  }
  *param_1 = DAT_00b2f080;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
}



void FUN_008a2f50(undefined4 param_1)

{
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    FUN_0089f570();
    FUN_008a9de0(param_1);
    FUN_0089f570();
  }
  return;
}



void FUN_008a2f80(undefined4 param_1)

{
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    FUN_0089f570();
    FUN_008a9e00(param_1);
    FUN_0089f570();
  }
  return;
}



void FUN_008a2fb0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    FUN_0089f570();
    FUN_008a9e20(param_1,param_2);
    FUN_0089f570();
  }
  return;
}



void FUN_008a2ff0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  
  uVar4 = uRam00ba7a4c;
  uVar3 = DAT_00ba7a48;
  uVar2 = DAT_00ba7a44;
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x50);
    uVar2 = *(undefined4 *)(iVar1 + 0x94);
    uVar3 = *(undefined4 *)(iVar1 + 0x98);
    uVar4 = *(undefined4 *)(iVar1 + 0x9c);
    *param_1 = *(undefined4 *)(iVar1 + 0x90);
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    return;
  }
  *param_1 = DAT_00ba7a40;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
}



void FUN_008a3030(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  
  uVar4 = uRam00ba7a4c;
  uVar3 = DAT_00ba7a48;
  uVar2 = DAT_00ba7a44;
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x50);
    uVar2 = *(undefined4 *)(iVar1 + 100);
    uVar3 = *(undefined4 *)(iVar1 + 0x68);
    uVar4 = *(undefined4 *)(iVar1 + 0x6c);
    *param_1 = *(undefined4 *)(iVar1 + 0x60);
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    return;
  }
  *param_1 = DAT_00ba7a40;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
}



void FUN_008a3070(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x50);
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
    uVar3 = *(undefined4 *)(iVar1 + 0x18);
    uVar4 = *(undefined4 *)(iVar1 + 0x1c);
    *param_1 = *(undefined4 *)(iVar1 + 0x10);
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x24);
    uVar3 = *(undefined4 *)(iVar1 + 0x28);
    uVar4 = *(undefined4 *)(iVar1 + 0x2c);
    param_1[4] = *(undefined4 *)(iVar1 + 0x20);
    param_1[5] = uVar2;
    param_1[6] = uVar3;
    param_1[7] = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x34);
    uVar3 = *(undefined4 *)(iVar1 + 0x38);
    uVar4 = *(undefined4 *)(iVar1 + 0x3c);
    param_1[8] = *(undefined4 *)(iVar1 + 0x30);
    param_1[9] = uVar2;
    param_1[10] = uVar3;
    param_1[0xb] = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x44);
    uVar3 = *(undefined4 *)(iVar1 + 0x48);
    uVar4 = *(undefined4 *)(iVar1 + 0x4c);
    param_1[0xc] = *(undefined4 *)(iVar1 + 0x40);
    param_1[0xd] = uVar2;
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar4;
    return;
  }
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
  *param_1 = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_008a30e0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  undefined1 auStack_48 [12];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30 [28];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_48;
  piVar1 = (int *)FUN_0089f730(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*in_ECX + 0xa4))(local_30);
    FUN_0043f3e0(&uStack_3c,local_30);
    iVar2 = FUN_006fd1d0(0x40c00000);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x54) = uStack_3c;
      *(undefined4 *)(iVar2 + 0x58) = uStack_38;
      *(undefined4 *)(iVar2 + 0x5c) = uStack_34;
      (**(code **)(*piVar1 + 0x84))(iVar2,0);
    }
  }
  return piVar1;
}



void FUN_008a3180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_00b2fd20 = param_1;
  DAT_00b2fd24 = param_2;
  DAT_00b2fd28 = param_3;
  DAT_00b2fd2c = param_4;
  return;
}



float10 FUN_008a31b0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  if ((in_ECX == 0) || (iVar2 = *(int *)(in_ECX + 8), iVar2 == 0)) {
    fVar1 = 0.0;
  }
  else {
    iVar3 = FUN_008a98d0();
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar2 + 0x50);
    }
    fVar1 = *(float *)(iVar3 + 0xb4);
  }
  return (float10)(fVar1 * 6.99904);
}



char * FUN_008a3200(void)

{
  char *pcVar1;
  int in_ECX;
  
  pcVar1 = (char *)0x0;
  switch(*(undefined1 *)(in_ECX + 0xd3)) {
  case 0:
    return "Invalid";
  case 1:
    return "Fixed";
  case 2:
    return "Keyframed";
  case 3:
    return "Debris";
  case 4:
    return "Moving";
  case 5:
    return "Critical";
  case 6:
    return "Bullet";
  case 7:
    pcVar1 = "User";
  }
  return pcVar1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008a3270(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50 [60];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_78;
  uVar3 = *param_1;
  *in_ECX = uVar3;
  in_ECX[8] = uVar3;
  uVar3 = param_1[1];
  in_ECX[1] = uVar3;
  in_ECX[9] = uVar3;
  uVar3 = param_1[9];
  uVar1 = param_1[10];
  uVar2 = param_1[0xb];
  in_ECX[0xc] = param_1[8];
  in_ECX[0xd] = uVar3;
  in_ECX[0xe] = uVar1;
  in_ECX[0xf] = uVar2;
  local_60 = param_1[0xc];
  uStack_5c = param_1[0xd];
  uStack_58 = param_1[0xe];
  uStack_54 = param_1[0xf];
  in_ECX[0x10] = local_60;
  in_ECX[0x11] = uStack_5c;
  in_ECX[0x12] = uStack_58;
  in_ECX[0x13] = uStack_54;
  uVar3 = param_1[0x11];
  uVar1 = param_1[0x12];
  uVar2 = param_1[0x13];
  in_ECX[0x14] = param_1[0x10];
  in_ECX[0x15] = uVar3;
  in_ECX[0x16] = uVar1;
  in_ECX[0x17] = uVar2;
  local_70 = param_1[0x14];
  uStack_6c = param_1[0x15];
  uStack_68 = param_1[0x16];
  uStack_64 = param_1[0x17];
  in_ECX[0x18] = local_70;
  in_ECX[0x19] = uStack_6c;
  in_ECX[0x1a] = uStack_68;
  in_ECX[0x1b] = uStack_64;
  puVar4 = (undefined4 *)FUN_008a1fb0(local_50);
  uVar3 = puVar4[1];
  uVar1 = puVar4[2];
  uVar2 = puVar4[3];
  in_ECX[0x1c] = *puVar4;
  in_ECX[0x1d] = uVar3;
  in_ECX[0x1e] = uVar1;
  in_ECX[0x1f] = uVar2;
  uVar3 = puVar4[5];
  uVar1 = puVar4[6];
  uVar2 = puVar4[7];
  in_ECX[0x20] = puVar4[4];
  in_ECX[0x21] = uVar3;
  in_ECX[0x22] = uVar1;
  in_ECX[0x23] = uVar2;
  uVar3 = puVar4[9];
  uVar1 = puVar4[10];
  uVar2 = puVar4[0xb];
  in_ECX[0x24] = puVar4[8];
  in_ECX[0x25] = uVar3;
  in_ECX[0x26] = uVar1;
  in_ECX[0x27] = uVar2;
  uVar3 = param_1[0x25];
  uVar1 = param_1[0x26];
  uVar2 = param_1[0x27];
  in_ECX[0x28] = param_1[0x24];
  in_ECX[0x29] = uVar3;
  in_ECX[0x2a] = uVar1;
  in_ECX[0x2b] = uVar2;
  in_ECX[0x2c] = param_1[0x28];
  in_ECX[0x2d] = param_1[0x29];
  in_ECX[0x2e] = param_1[0x2a];
  in_ECX[0x2f] = param_1[0x2b];
  in_ECX[0x30] = param_1[0x2c];
  *(undefined1 *)(in_ECX + 0x34) = *(undefined1 *)(param_1 + 0x2d);
  *(undefined1 *)((int)in_ECX + 0xd1) = *(undefined1 *)((int)param_1 + 0xb5);
  if (250.0 < (float)in_ECX[0x31]) {
    in_ECX[0x31] = 0x437a0000;
  }
  return;
}



undefined4 FUN_008a3420(int param_1)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  
  if ((in_ECX == 0) || (iVar2 = *(int *)(in_ECX + 8), iVar2 == 0)) {
    return 0;
  }
  if (iVar2 == -0x14) {
    bVar1 = 0;
  }
  else {
    bVar1 = (byte)*(undefined4 *)(iVar2 + 0x30);
  }
  if ((bVar1 & 0x3f) == 8) {
    FUN_0089f570();
  }
  else {
    iVar2 = (**(code **)(**(int **)(iVar2 + 0x50) + 8))();
    if (iVar2 == param_1) {
      return 0;
    }
    if ((((5 < iVar2) && (iVar2 < 8)) && (param_1 < 6)) &&
       (fVar3 = (float10)FUN_00535ac0(), fVar3 == (float10)0.0)) {
      return 0;
    }
    FUN_0089f570();
  }
  FUN_008a9ab0(param_1,1,0);
  FUN_0089f570();
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008a34c0(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined1 auStack_44 [4];
  undefined1 local_40 [8];
  undefined1 auStack_38 [36];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&fStack_94;
  pfVar4 = (float *)(**(code **)(*in_ECX + 0xa4))(local_40);
  fVar10 = *pfVar4;
  fVar11 = pfVar4[1];
  fVar12 = pfVar4[2];
  fVar2 = pfVar4[3];
  fVar1 = param_2[3] * 2.0;
  fVar8 = param_2[3] * fVar1 - 1.0;
  fVar3 = *param_2;
  fStack_90 = param_2[1];
  fStack_8c = param_2[2];
  fStack_88 = 0.0;
  fStack_94 = fStack_8c * fVar12 + fStack_90 * fVar11 + fVar3 * fVar10;
  fVar9 = fStack_94 * 2.0;
  fStack_74 = (fStack_90 * fVar12 - fStack_8c * fVar11) * fVar1 + fVar9 * fVar3 + fVar8 * fVar10 +
              *param_1;
  fStack_70 = (fStack_8c * fVar10 - fVar3 * fVar12) * fVar1 + fVar9 * fStack_90 + fVar8 * fVar11 +
              param_1[1];
  fStack_6c = (fVar3 * fVar11 - fStack_90 * fVar10) * fVar1 + fVar9 * fStack_8c + fVar8 * fVar12 +
              param_1[2];
  fStack_68 = (fVar2 * 0.0 - fVar2 * 0.0) * fVar1 + fVar9 * 0.0 + fVar8 * fVar2 + param_1[3];
  pfVar4 = (float *)(**(code **)(*in_ECX + 0xa8))(auStack_44);
  iVar6 = in_ECX[2];
  fStack_78 = param_3 * (fStack_78 - *pfVar4);
  fStack_74 = param_3 * (fStack_74 - pfVar4[1]);
  fStack_70 = param_3 * (fStack_70 - pfVar4[2]);
  fStack_6c = param_3 * (fStack_6c - pfVar4[3]);
  fVar8 = SQRT(fStack_70 * fStack_70 + fStack_74 * fStack_74 + fStack_78 * fStack_78);
  if (iVar6 == 0) {
    fVar1 = 0.0;
  }
  else {
    iVar5 = FUN_008a98d0();
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar6 + 0x50);
    }
    fVar1 = *(float *)(iVar5 + 0xb4);
  }
  if (fVar1 < fVar8) {
    fVar1 = fVar1 / fVar8;
    fStack_78 = fVar1 * fStack_78;
    fStack_74 = fVar1 * fStack_74;
    fStack_70 = fVar1 * fStack_70;
    fStack_6c = fVar1 * fStack_6c;
  }
  pfVar4 = (float *)(**(code **)(*in_ECX + 0x90))(auStack_38);
  fStack_80 = pfVar4[3];
  fStack_8c = -*pfVar4;
  fStack_88 = -pfVar4[1];
  fStack_84 = -pfVar4[2];
  FUN_00889470(param_2,&fStack_8c);
  FUN_004d6830();
  fStack_8c = DAT_00ba7a40;
  fStack_88 = DAT_00ba7a44;
  fStack_84 = DAT_00ba7a48;
  fStack_80 = fRam00ba7a4c;
  fVar7 = (float10)FUN_008a2c00();
  if (0.001 < (float)fVar7) {
    FUN_008a2c70(&fStack_8c);
    fVar8 = (float)fVar7 * param_3;
    fStack_8c = fVar8 * fStack_8c;
    fStack_88 = fVar8 * fStack_88;
    fStack_84 = fVar8 * fStack_84;
    fStack_80 = fVar8 * fStack_80;
  }
  iVar6 = in_ECX[2];
  fVar8 = SQRT(fStack_84 * fStack_84 + fStack_88 * fStack_88 + fStack_8c * fStack_8c);
  if (iVar6 == 0) {
    fVar1 = 0.0;
  }
  else {
    iVar5 = FUN_008a98d0();
    if (iVar5 == 0) {
      fVar1 = *(float *)(*(int *)(iVar6 + 0x50) + 0xb8);
    }
    else {
      fVar1 = *(float *)(iVar5 + 0xb8);
    }
  }
  fVar9 = fStack_8c;
  fVar10 = fStack_88;
  fVar11 = fStack_84;
  fVar12 = fStack_80;
  if (fVar1 < fVar8) {
    fVar1 = fVar1 / fVar8;
    fVar9 = fVar1 * fStack_8c;
    fVar10 = fVar1 * fStack_88;
    fVar11 = fVar1 * fStack_84;
    fVar12 = fVar1 * fStack_80;
  }
  iVar6 = in_ECX[2];
  if (iVar6 == 0) {
    pfVar4 = &DAT_00ba7a40;
  }
  else {
    pfVar4 = (float *)(*(int *)(iVar6 + 0x50) + 0xd0);
  }
  fStack_6c = (1.0 - param_4) * *pfVar4 + param_4 * fStack_7c;
  fStack_68 = (1.0 - param_4) * pfVar4[1] + param_4 * fStack_78;
  fStack_64 = (1.0 - param_4) * pfVar4[2] + param_4 * fStack_74;
  fStack_60 = (1.0 - param_4) * pfVar4[3] + param_4 * fStack_70;
  if (iVar6 == 0) {
    pfVar4 = &DAT_00ba7a40;
  }
  else {
    pfVar4 = (float *)(*(int *)(iVar6 + 0x50) + 0xe0);
  }
  fStack_5c = (1.0 - param_4) * *pfVar4 + param_4 * fVar9;
  fStack_58 = (1.0 - param_4) * pfVar4[1] + param_4 * fVar10;
  fStack_54 = (1.0 - param_4) * pfVar4[2] + param_4 * fVar11;
  fStack_50 = (1.0 - param_4) * pfVar4[3] + param_4 * fVar12;
  iVar6 = (**(code **)(*in_ECX + 0x58))();
  if (iVar6 != 0) {
    fStack_64 = fStack_64 - (*(float *)(iVar6 + 0x28) * param_4) / param_3;
  }
  iVar6 = in_ECX[2];
  if (iVar6 != 0) {
    FUN_0089f570();
    FUN_008a6410();
    (**(code **)(**(int **)(iVar6 + 0x50) + 0x54))(&fStack_6c);
    FUN_0089f570();
  }
  iVar6 = in_ECX[2];
  if (iVar6 != 0) {
    FUN_0089f570();
    FUN_008a6410();
    (**(code **)(**(int **)(iVar6 + 0x50) + 0x58))(&fStack_5c);
    FUN_0089f570();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008a3900(float *param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  int *in_ECX;
  float unaff_EDI;
  float10 fVar4;
  float fVar5;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined1 auStack_bc [8];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [36];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&fStack_d8;
  iVar1 = (**(code **)(*in_ECX + 0x58))();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2b0) != 0)) {
    fStack_90 = *param_1 * 0.14287673;
    fStack_8c = param_1[1] * 0.14287673;
    fStack_88 = param_1[2] * 0.14287673;
    fStack_b0 = param_2[1];
    fStack_ac = param_2[2];
    fStack_a8 = param_2[3];
    fStack_a4 = *param_2;
    (**(code **)(*in_ECX + 0x8c))(&fStack_d0);
    (**(code **)(*in_ECX + 0x90))(&fStack_a4);
    fStack_c0 = fStack_a4 * fStack_94 + fStack_ac * fStack_9c +
                fStack_a8 * fStack_98 + fStack_b0 * fStack_a0;
    fStack_d8 = ABS(fStack_c0 - 1.0);
    if ((1.0000001e-06 <
         (fStack_88 - fStack_c8) * (fStack_88 - fStack_c8) +
         (fStack_8c - fStack_cc) * (fStack_8c - fStack_cc) +
         (fStack_90 - fStack_d0) * (fStack_90 - fStack_d0)) || (0.001 < fStack_d8)) {
      if (_DAT_00b2e2e0 != 0.0) {
        fStack_d4 = 1.0 / _DAT_00b2e2e0;
        pfVar2 = (float *)(**(code **)(*in_ECX + 0xa4))(auStack_40);
        fStack_64 = *pfVar2;
        fStack_60 = pfVar2[1];
        fStack_5c = pfVar2[2];
        fStack_58 = pfVar2[3];
        fVar5 = fStack_a8 * 2.0;
        fStack_84 = fStack_a8 * fVar5 - 1.0;
        uStack_80 = 0;
        uStack_7c = 0;
        fStack_78 = 0.0;
        fStack_d4 = fStack_b4;
        fStack_d0 = fStack_b0;
        fStack_cc = fStack_ac;
        fStack_c8 = 0.0;
        fStack_74 = (fStack_ac * fStack_5c + fStack_b0 * fStack_60 + fStack_b4 * fStack_64) * 2.0;
        uStack_70 = 0;
        uStack_6c = 0;
        fStack_68 = 0.0;
        fStack_a0 = 0.0;
        fStack_9c = 0.0;
        fStack_98 = 0.0;
        fStack_a4 = fVar5;
        pfVar2 = (float *)(**(code **)(*in_ECX + 0xa8))(auStack_44);
        fStack_58 = (((fStack_d4 * fStack_60 - fStack_d0 * fStack_64) * fStack_a8 +
                      fStack_88 * fStack_68 + fStack_78 * fStack_d8 + fStack_98) - *pfVar2) * fVar5;
        fStack_54 = (((fStack_d0 * fStack_68 - fStack_d8 * fStack_60) * fStack_a8 +
                      fStack_88 * fStack_64 + fStack_78 * fStack_d4 + fStack_94) - pfVar2[1]) *
                    fVar5;
        fStack_50 = (((fStack_d8 * fStack_64 - fStack_d4 * fStack_68) * fStack_a8 +
                      fStack_88 * fStack_60 + fStack_78 * fStack_d0 + fStack_90) - pfVar2[2]) *
                    fVar5;
        fStack_4c = (((fStack_cc * fStack_5c - fStack_cc * fStack_5c) * fStack_a8 +
                      fStack_88 * fStack_5c + fStack_78 * fStack_cc + fStack_8c) - pfVar2[3]) *
                    fVar5;
        FUN_004d6af0(&fStack_58);
        uVar3 = (**(code **)(*in_ECX + 0x90))(auStack_38);
        FUN_008a2b40(auStack_bc,uVar3);
        FUN_004d6830();
        fVar4 = (float10)FUN_008a2c00();
        fVar5 = (float)fVar4;
        if (fVar5 < 0.001) {
          fStack_cc = 0.0;
          fStack_c8 = 0.0;
          fStack_c4 = 0.0;
          fStack_c0 = 0.0;
          FUN_004d6b30(&fStack_cc);
          return;
        }
        FUN_008a2c70(&fStack_cc);
        fVar5 = fVar5 * unaff_EDI;
        fStack_cc = fVar5 * fStack_cc;
        fStack_c8 = fVar5 * fStack_c8;
        fStack_c4 = fVar5 * fStack_c4;
        fStack_c0 = fVar5 * fStack_c0;
        FUN_004d6b30(&fStack_cc);
        return;
      }
    }
    else {
      iVar1 = in_ECX[2];
      if (iVar1 != 0) {
        FUN_0089f570();
        FUN_008a6410();
        (**(code **)(**(int **)(iVar1 + 0x50) + 0x54))(&DAT_00ba7a40);
        FUN_0089f570();
      }
      iVar1 = in_ECX[2];
      if (iVar1 != 0) {
        FUN_0089f570();
        FUN_008a6410();
        (**(code **)(**(int **)(iVar1 + 0x50) + 0x58))(&DAT_00ba7a40);
        FUN_0089f570();
        return;
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008a3d30(undefined4 param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  int *piVar2;
  undefined1 auStack_88 [4];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [4];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_88;
  (**(code **)(*in_ECX + 0xac))(local_60);
  if ((in_ECX[2] == 0) || (puVar1 = (undefined4 *)(in_ECX[2] + 0x14), puVar1 == (undefined4 *)0x0))
  {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*puVar1;
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(auStack_64,0x3a83126f,param_1);
    return;
  }
  uStack_74 = 0xba83126f;
  uStack_70 = 0xba83126f;
  uStack_6c = 0xba83126f;
  uStack_68 = 0;
  uStack_84 = 0x3a83126f;
  uStack_80 = 0x3a83126f;
  uStack_7c = 0x3a83126f;
  uStack_78 = 0;
  FUN_0088fcc0(auStack_64,&uStack_74);
  FUN_0088fcc0(auStack_64,&uStack_84);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008a3e00(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int *piVar2;
  undefined1 local_30 [28];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)local_30;
  if (((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) ||
     (puVar1 = (undefined4 *)(*(int *)(in_ECX + 8) + 0x14), puVar1 == (undefined4 *)0x0)) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*puVar1;
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(&DAT_00b2f090,0x3a83126f,param_1);
    return;
  }
  *param_1 = 0xba83126f;
  param_1[1] = 0xba83126f;
  param_1[2] = 0xba83126f;
  param_1[3] = 0;
  param_1[4] = 0x3a83126f;
  param_1[5] = 0x3a83126f;
  param_1[6] = 0x3a83126f;
  param_1[7] = 0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008a3eb0(int *param_1,float *param_2,float *param_3)

{
  float fVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  float10 fVar8;
  undefined1 auStack_44 [12];
  float *local_38;
  int *local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_44;
  local_34 = param_1;
  local_38 = param_3;
  if (param_1 != (int *)0x0) {
    iVar4 = (**(code **)(*param_1 + 8))();
    if (iVar4 != 0) {
      uVar7 = 0;
      param_1 = local_34;
      if (*(short *)(iVar4 + 0xb6) != 0) {
        if (*(short *)(iVar4 + 0xb6) != 0) goto LAB_008a3f04;
        uVar5 = 0;
        while( true ) {
          FUN_008a3eb0(uVar5,param_2,local_38);
          uVar7 = uVar7 + 1;
          param_1 = local_34;
          if (*(ushort *)(iVar4 + 0xb6) <= uVar7) break;
LAB_008a3f04:
          uVar5 = *(undefined4 *)(*(int *)(iVar4 + 0xb0) + uVar7 * 4);
        }
      }
    }
    piVar2 = (int *)param_1[0x2a];
    if (piVar2 != (int *)0x0) {
      for (puVar6 = (undefined4 *)(**(code **)(*piVar2 + 4))(); puVar6 != (undefined4 *)0x0;
          puVar6 = (undefined4 *)puVar6[1]) {
        if (puVar6 == &DAT_00ba7d24) {
          bVar3 = 1;
          goto LAB_008a3f64;
        }
      }
      bVar3 = 0;
LAB_008a3f64:
      if ((-(uint)bVar3 & (uint)piVar2) != 0) {
        piVar2 = *(int **)((-(uint)bVar3 & (uint)piVar2) + 0x10);
        fVar8 = (float10)FUN_00535ac0();
        local_34 = (int *)(float)fVar8;
        (**(code **)(*piVar2 + 0xa8))(&fStack_30);
        fVar1 = *local_38;
        *local_38 = (float)local_34 + fVar1;
        fVar1 = (float)local_34 / ((float)local_34 + fVar1);
        *param_2 = (1.0 - fVar1) * *param_2 + fStack_30 * fVar1;
        param_2[1] = (1.0 - fVar1) * param_2[1] + fStack_2c * fVar1;
        param_2[2] = (1.0 - fVar1) * param_2[2] + fStack_28 * fVar1;
        param_2[3] = (1.0 - fVar1) * param_2[3] + fStack_24 * fVar1;
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008a4000(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 auStack_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_38;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_34 = 0;
  FUN_008a3eb0(param_1,&local_30,&local_34);
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  *param_3 = local_34;
  return;
}



void FUN_008a4070(undefined4 *param_1)

{
  int iVar1;
  LONG LVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c4833;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    if (*in_ECX != 0) {
      iVar1 = FUN_00401f00();
      local_4._0_1_ = 1;
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        if (*in_ECX != 0) {
          InterlockedIncrement((LONG *)(*in_ECX + 4));
        }
        iVar1 = FUN_00532df0();
      }
      *(int *)(iVar1 + 4) = in_ECX[1];
      local_4 = (uint)local_4._1_3_ << 8;
      in_ECX[1] = iVar1;
    }
    FUN_0055e2a0();
    local_4 = 0xffffffff;
    LVar2 = InterlockedDecrement(param_1 + 1);
    if (LVar2 == 0) {
      (**(code **)*param_1)();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008a4150(void)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d6a98;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0089d3d0();
  *in_ECX = &PTR_FUN_00a559cc;
  in_ECX[3] = 0;
  _DAT_00ba7d34 = _DAT_00ba7d34 + 1;
  *in_ECX = &PTR_FUN_00a55dfc;
  DAT_00ba7f8c = DAT_00ba7f8c + 1;
  *in_ECX = &PTR_FUN_00a5605c;
  local_4 = 0;
  FUN_00532df0();
  in_ECX[6] = 0;
  DAT_00ba7d80 = DAT_00ba7d80 + 1;
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
  local_10 = FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_008a4150();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008a4260(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  float fStack_74;
  int *piStack_70;
  float afStack_6c [4];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d6acb;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)&fStack_74;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff80;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_1 == (undefined4 *)0x0) goto LAB_008a44cd;
  iVar4 = 8;
  if (((float)param_1[0x33] <= 1.1920929e-07) || (0.2 < (float)param_1[0x33])) {
    param_1[0x33] = 0x3e19999a;
  }
  if ((float)param_1[0x31] < 250.0) {
    param_1[0x31] = 0x437a0000;
  }
  if (1.99 <= (float)param_1[0x30]) {
    param_1[0x30] = 0x3ffd70a4;
  }
  if ((float)param_1[0x2c] == 0.0) {
    if (*(char *)(param_1 + 0x34) == '\a') {
      *(undefined1 *)((int)param_1 + 0xd3) = 1;
    }
  }
  else if (*(char *)(param_1 + 0x34) < '\x06') {
    if (*(char *)((int)param_1 + 0xd3) == '\0') {
      *(undefined1 *)((int)param_1 + 0xd3) = 4;
    }
  }
  else {
    iVar4 = (int)*(char *)(param_1 + 0x34);
    *(undefined1 *)(param_1 + 0x34) = 1;
    *(undefined1 *)((int)param_1 + 0xd3) = 4;
  }
  param_1[8] = *param_1;
  param_1[9] = param_1[1];
  afStack_6c[0] = (float)(**(code **)(*DAT_00ba7d98 + 0x10))(0xc4,0x2a,uVar1);
  *(undefined2 *)((int)afStack_6c[0] + 4) = 0xc4;
  local_1c = 0;
  uVar2 = FUN_008a9f50(param_1 + 8);
  local_1c = -1;
  if (iVar4 != 8) {
    *(char *)(param_1 + 0x34) = (char)iVar4;
    FUN_008a9ab0(iVar4,1,0);
  }
  (**(code **)(*piStack_70 + 0x4c))(uVar2);
  FUN_008bc730();
  if ((((*(char *)(param_1 + 0x34) < '\x06') && ('\0' < *(char *)(param_1 + 0x34))) &&
      (iVar4 = piStack_70[2], iVar4 != 0)) && (iVar4 != -0x14)) {
    FUN_008a3e00(&fStack_5c);
    afStack_6c[0] = fStack_4c - fStack_5c;
    afStack_6c[1] = fStack_48 - fStack_58;
    afStack_6c[2] = fStack_44 - fStack_54;
    afStack_6c[3] = fStack_40 - fStack_50;
    if (afStack_6c[0] <= afStack_6c[1]) {
      if (afStack_6c[0] <= afStack_6c[2]) {
        iVar3 = 0;
      }
      else {
        iVar3 = 2;
      }
    }
    else if (afStack_6c[1] <= afStack_6c[2]) {
      iVar3 = 1;
    }
    else {
      iVar3 = 2;
    }
    if (afStack_6c[iVar3] <= _DAT_00ba791c) {
      fStack_74 = _DAT_00ba7920;
      fVar5 = (float10)FUN_008a31b0();
      if ((float10)fStack_74 <= fVar5) {
        if (*(char *)((int)param_1 + 0xd3) == '\x03') {
          *(undefined2 *)(iVar4 + 0x2e) = 4;
          *(undefined1 *)((int)param_1 + 0xd3) = 4;
        }
        goto LAB_008a44c3;
      }
    }
    *(undefined2 *)(iVar4 + 0x2e) = 3;
    *(undefined1 *)((int)param_1 + 0xd3) = 3;
  }
LAB_008a44c3:
  (**(code **)(*piStack_70 + 0x7c))(param_1);
LAB_008a44cd:
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_008a44f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *in_ECX;
  float10 fVar3;
  
  iVar1 = param_1;
  thunk_FUN_0089f8e0(param_1);
  puVar2 = (undefined4 *)(**(code **)(*in_ECX + 0x74))(&param_1);
  if (puVar2 != (undefined4 *)0x0) {
    if (250.0 < (float)puVar2[0x31]) {
      puVar2[0x31] = 0x437a0000;
    }
    if ((float)puVar2[0x2c] == 0.0) {
      fVar3 = (float10)FUN_00535ac0();
      if ((fVar3 == (float10)0.0) && (((byte)*puVar2 & 0x3f) != 2)) {
        *(undefined1 *)(puVar2 + 0x34) = 7;
      }
    }
  }
  FUN_00712ae0();
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))
            (*(int *)(iVar1 + 0x21c),in_ECX + 6,4,&stack0x00000000,1);
  return;
}



char FUN_008a45a0(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int *piVar5;
  LONG LVar6;
  undefined4 *puVar7;
  int in_ECX;
  int iVar8;
  int *unaff_FS_OFFSET;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d6b08;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar2 = false;
  cVar3 = FUN_0089f390(param_1);
  cVar4 = '\0';
  if (cVar3 == '\0') {
LAB_008a46a0:
    *unaff_FS_OFFSET = local_c;
    return cVar4;
  }
  iVar8 = in_ECX + 0x10;
  do {
    if (iVar8 == 0) {
LAB_008a460e:
      bVar1 = false;
    }
    else {
      piVar5 = (int *)FUN_00677c70(&local_14);
      bVar2 = true;
      if (*piVar5 == 0) goto LAB_008a460e;
      bVar1 = true;
    }
    puVar7 = local_14;
    if ((((bVar2) && (bVar2 = false, local_14 != (undefined4 *)0x0)) &&
        (LVar6 = InterlockedDecrement(local_14 + 1), LVar6 == 0)) && (puVar7 != (undefined4 *)0x0))
    {
      (**(code **)*puVar7)(1);
    }
    cVar4 = cVar3;
    if (!bVar1) goto LAB_008a46a0;
    puVar7 = (undefined4 *)FUN_00677c70(&local_10);
    uStack_4 = 0;
    (**(code **)(*(int *)*puVar7 + 0x24))(param_1);
    puVar7 = local_10;
    uStack_4 = 0xffffffff;
    if (((local_10 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(local_10 + 1), LVar6 == 0)
        ) && (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    iVar8 = *(int *)(iVar8 + 4);
  } while( true );
}



void FUN_008a46c0(int *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != (int *)0x0) {
    for (puVar1 = (undefined *)(**(code **)(*param_1 + 4))(); puVar1 != (undefined *)0x0;
        puVar1 = *(undefined **)(puVar1 + 4)) {
      if (puVar1 == &DAT_00ba7d50) goto LAB_008a4713;
    }
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 4))();
    if (puVar2 != (undefined4 *)0x0) {
      while (puVar2 != &DAT_00ba7d04) {
        puVar2 = (undefined4 *)puVar2[1];
        if (puVar2 == (undefined4 *)0x0) {
          return;
        }
      }
LAB_008a4713:
      InterlockedIncrement(param_1 + 1);
      FUN_008a4070();
    }
  }
  return;
}



int FUN_008a4740(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  LONG LVar4;
  int in_ECX;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 *local_4;
  
  bVar5 = false;
  local_4 = (undefined4 *)0x0;
  iVar6 = 0;
  iVar7 = in_ECX + 0x10;
  do {
    if (iVar7 == 0) {
LAB_008a476f:
      bVar1 = false;
    }
    else {
      piVar3 = (int *)FUN_00677c70(&local_4);
      bVar5 = true;
      bVar1 = true;
      if (*piVar3 == 0) goto LAB_008a476f;
    }
    puVar2 = local_4;
    if (bVar5) {
      bVar5 = false;
      if (local_4 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(local_4 + 1);
        if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
      }
    }
    if (!bVar1) {
      return iVar6;
    }
    iVar7 = *(int *)(iVar7 + 4);
    iVar6 = iVar6 + 1;
  } while( true );
}



void FUN_008a47c0(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  LONG LVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d6b38;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar2 = false;
  iVar6 = in_ECX + 0x10;
  do {
    if (iVar6 == 0) {
LAB_008a480f:
      bVar1 = false;
    }
    else {
      piVar3 = (int *)FUN_00677c70(&local_14);
      bVar2 = true;
      if (*piVar3 == 0) goto LAB_008a480f;
      bVar1 = true;
    }
    puVar5 = local_14;
    if (bVar2) {
      bVar2 = false;
      if (local_14 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(local_14 + 1);
        if ((LVar4 == 0) && (puVar5 != (undefined4 *)0x0)) {
          (**(code **)*puVar5)(1);
        }
      }
    }
    if (!bVar1) {
      *unaff_FS_OFFSET = local_c;
      return;
    }
    puVar5 = (undefined4 *)FUN_00677c70(&local_10);
    uStack_4 = 0;
    (**(code **)(*(int *)*puVar5 + 0x5c))(param_1);
    puVar5 = local_10;
    uStack_4 = 0xffffffff;
    if (local_10 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(local_10 + 1);
      if ((LVar4 == 0) && (puVar5 != (undefined4 *)0x0)) {
        (**(code **)*puVar5)(1);
      }
    }
    iVar6 = *(int *)(iVar6 + 4);
  } while( true );
}



uint FUN_008a48c0(int param_1)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  int *in_ECX;
  undefined4 extraout_ECX;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined1 local_18 [20];
  
  if ((in_ECX != (int *)0x0) && (in_ECX[2] != 0)) {
    puVar5 = (uint *)FUN_0047f990(local_18,&DAT_00ba7b80);
    piVar1 = (int *)*puVar5;
    if (piVar1 != (int *)0x0) {
      for (puVar6 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar6 != (undefined4 *)0x0;
          puVar6 = (undefined4 *)puVar6[1]) {
        if (puVar6 == &DAT_00ba7a20) {
          bVar4 = 1;
          goto LAB_008a4916;
        }
      }
      bVar4 = 0;
LAB_008a4916:
      uVar11 = -(uint)bVar4 & (uint)piVar1;
      if ((((uVar11 != 0) && (1.0 <= *(float *)(uVar11 + 0x14))) &&
          (1.0 <= *(float *)(uVar11 + 0x18))) &&
         ((*(int *)(uVar11 + 0x24) < 1 && (DAT_00ba7909 == '\0')))) {
        iVar7 = (**(code **)(*in_ECX + 0x58))();
        if (iVar7 != 0) {
          (**(code **)(*in_ECX + 0x60))();
        }
        *(int *)(uVar11 + 0x20) = param_1;
        return 1;
      }
      goto LAB_008a4973;
    }
  }
  uVar11 = 0;
LAB_008a4973:
  uVar12 = FUN_0089f470(param_1);
  uVar9 = (uint)uVar12;
  if ((char)uVar12 != '\0') {
    if ((DAT_00b2eb00 != '\0') && (*(int *)(param_1 + 0x1c) == 0)) {
      if ((in_ECX == (int *)0x0) || (in_ECX[2] == 0)) {
        pfVar8 = &DAT_00ba7a40;
      }
      else {
        pfVar8 = (float *)(*(int *)(in_ECX[2] + 0x50) + 0xd0);
      }
      auVar3._4_4_ = -(uint)(0.001 < ABS(pfVar8[1] - DAT_00ba7a44));
      auVar3._0_4_ = -(uint)(0.001 < ABS(*pfVar8 - DAT_00ba7a40));
      auVar3._8_4_ = -(uint)(0.001 < ABS(pfVar8[2] - DAT_00ba7a48));
      auVar3._12_4_ = -(uint)(0.001 < ABS(pfVar8[3] - fRam00ba7a4c));
      uVar10 = movmskps(extraout_ECX,auVar3);
      if ((uVar10 & 7) == 0) {
        if ((in_ECX == (int *)0x0) || (in_ECX[2] == 0)) {
          pfVar8 = &DAT_00ba7a40;
        }
        else {
          pfVar8 = (float *)(*(int *)(in_ECX[2] + 0x50) + 0xe0);
        }
        auVar2._4_4_ = -(uint)(0.001 < ABS(pfVar8[1] - DAT_00ba7a44));
        auVar2._0_4_ = -(uint)(0.001 < ABS(*pfVar8 - DAT_00ba7a40));
        auVar2._8_4_ = -(uint)(0.001 < ABS(pfVar8[2] - DAT_00ba7a48));
        auVar2._12_4_ = -(uint)(0.001 < ABS(pfVar8[3] - fRam00ba7a4c));
        uVar10 = movmskps((int)((ulonglong)uVar12 >> 0x20),auVar2);
        if ((((uVar10 & 7) == 0) && (in_ECX != (int *)0x0)) && (in_ECX[2] != 0)) {
          FUN_0089f570();
          FUN_008a6440();
          FUN_0089f570();
        }
      }
    }
    FUN_008a47c0(param_1);
    uVar9 = uVar9 & 0xff;
  }
  if (uVar11 != 0) {
    *(int *)(uVar11 + 0x20) = param_1;
  }
  return uVar9;
}



char FUN_008a4a60(int param_1)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  char cVar5;
  float *pfVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined1 local_18 [20];
  
  cVar5 = FUN_0089f470(param_1);
  if (cVar5 != '\0') {
    if ((DAT_00b2eb00 != '\0') && (*(int *)(param_1 + 0x1c) == 0)) {
      if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
        pfVar6 = &DAT_00ba7a40;
      }
      else {
        pfVar6 = (float *)(*(int *)(*(int *)(in_ECX + 8) + 0x50) + 0xd0);
      }
      auVar3._4_4_ = -(uint)(0.001 < ABS(pfVar6[1] - DAT_00ba7a44));
      auVar3._0_4_ = -(uint)(0.001 < ABS(*pfVar6 - DAT_00ba7a40));
      auVar3._8_4_ = -(uint)(0.001 < ABS(pfVar6[2] - DAT_00ba7a48));
      auVar3._12_4_ = -(uint)(0.001 < ABS(pfVar6[3] - fRam00ba7a4c));
      uVar7 = movmskps(pfVar6,auVar3);
      if ((uVar7 & 7) == 0) {
        if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
          pfVar6 = &DAT_00ba7a40;
        }
        else {
          pfVar6 = (float *)(*(int *)(*(int *)(in_ECX + 8) + 0x50) + 0xe0);
        }
        auVar2._4_4_ = -(uint)(0.001 < ABS(pfVar6[1] - DAT_00ba7a44));
        auVar2._0_4_ = -(uint)(0.001 < ABS(*pfVar6 - DAT_00ba7a40));
        auVar2._8_4_ = -(uint)(0.001 < ABS(pfVar6[2] - DAT_00ba7a48));
        auVar2._12_4_ = -(uint)(0.001 < ABS(pfVar6[3] - fRam00ba7a4c));
        uVar7 = movmskps(extraout_ECX,auVar2);
        if ((((uVar7 & 7) == 0) && (in_ECX != 0)) && (*(int *)(in_ECX + 8) != 0)) {
          FUN_0089f570();
          FUN_008a6440();
          FUN_0089f570();
        }
      }
    }
    FUN_008a47c0(param_1);
  }
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    puVar8 = (uint *)FUN_0047f990(local_18,&DAT_00ba7b80);
    piVar1 = (int *)*puVar8;
    if (piVar1 != (int *)0x0) {
      for (puVar9 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar9 != (undefined4 *)0x0;
          puVar9 = (undefined4 *)puVar9[1]) {
        if (puVar9 == &DAT_00ba7a20) {
          bVar4 = 1;
          goto LAB_008a4b80;
        }
      }
      bVar4 = 0;
LAB_008a4b80:
      if ((-(uint)bVar4 & (uint)piVar1) != 0) {
        *(int *)((-(uint)bVar4 & (uint)piVar1) + 0x20) = param_1;
      }
    }
  }
  return cVar5;
}



void FUN_008a4ba0(void)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  LONG LVar8;
  uint *puVar9;
  undefined *puVar10;
  int *piVar11;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int *piStack_24;
  int iStack_20;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  undefined4 *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d6b68;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar3 = false;
  if (((uint)in_ECX[6] >> 2 & 1) == 0) {
    iVar6 = (**(code **)(*in_ECX + 0x58))(uVar5);
    if (iVar6 == 0) {
      iStack_20 = 0;
    }
    else {
      iStack_20 = *(int *)(iVar6 + 0x2b0);
    }
    if (iStack_20 != 0) {
      piStack_24 = in_ECX + 4;
LAB_008a4c14:
      if (piStack_24 == (int *)0x0) {
LAB_008a4c31:
        bVar1 = false;
      }
      else {
        piVar7 = (int *)FUN_00677c70(&puStack_14);
        bVar3 = true;
        if (*piVar7 == 0) goto LAB_008a4c31;
        bVar1 = true;
      }
      puVar4 = puStack_14;
      if ((((bVar3) && (bVar3 = false, puStack_14 != (undefined4 *)0x0)) &&
          (LVar8 = InterlockedDecrement(puStack_14 + 1), LVar8 == 0)) &&
         (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
      if (bVar1) {
        puVar9 = (uint *)FUN_00677c70(&puStack_10);
        piVar7 = (int *)*puVar9;
        uStack_4 = 0;
        if (piVar7 == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          for (puVar10 = (undefined *)(**(code **)(*piVar7 + 4))(); puVar10 != (undefined *)0x0;
              puVar10 = *(undefined **)(puVar10 + 4)) {
            if (puVar10 == &DAT_00ba7d50) {
              bVar2 = 1;
              goto LAB_008a4ca2;
            }
          }
          bVar2 = 0;
LAB_008a4ca2:
          piVar7 = (int *)(-(uint)bVar2 & (uint)piVar7);
        }
        puVar4 = puStack_10;
        uStack_4 = 0xffffffff;
        if (((puStack_10 != (undefined4 *)0x0) &&
            (LVar8 = InterlockedDecrement(puStack_10 + 1), LVar8 == 0)) &&
           (puVar4 != (undefined4 *)0x0)) {
          (**(code **)*puVar4)(1);
        }
        piStack_24 = (int *)piStack_24[1];
        if (piVar7 != (int *)0x0) {
          iVar6 = in_ECX[2];
          uStack_18 = 0x3f800000;
          if ((iVar6 == 0) || (iVar6 == -0x14)) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(uint *)(iVar6 + 0x30);
          }
          if (((byte)uVar5 & 0x3f) == 8) {
            switch(uVar5 >> 8 & 0x1f) {
            case 0x11:
            case 0x12:
            case 0x17:
            case 0x18:
              uStack_18 = 0x3e99999a;
            }
          }
          piVar11 = (int *)FUN_008c22f0(piVar7,uStack_18);
          if (piVar11 != (int *)0x0) {
            FUN_008a46c0(piVar11);
            (**(code **)(*piVar7 + 0x60))();
            (**(code **)(*piVar11 + 0x5c))(iStack_20);
          }
        }
        goto LAB_008a4c14;
      }
      in_ECX[6] = in_ECX[6] | 4;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008a4db0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int *in_ECX;
  
  iVar1 = in_ECX[1];
  while (iVar1 != 0) {
    piVar2 = (int *)in_ECX[1];
    iVar1 = piVar2[1];
    if (piVar2 != (int *)0x0) {
      puVar3 = (undefined4 *)*piVar2;
      if (((puVar3 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar3 + 1), LVar4 == 0))
         && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      FUN_00401f20(piVar2);
    }
    in_ECX[1] = iVar1;
  }
  puVar3 = (undefined4 *)*in_ECX;
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *in_ECX = 0;
  }
  return;
}



void FUN_008a4e30(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  LONG LVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *in_ECX;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int *unaff_retaddr;
  undefined4 uStack_1c;
  undefined4 *local_18;
  undefined4 *puStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d6b98;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_18 = (undefined4 *)0x0;
  iVar3 = (**(code **)(*in_ECX + 0x74))((int)&uStack_1c + 3,uVar2);
  if ((iVar3 != 0) && (local_18 = *(undefined4 **)(param_1 + 0x10), (float)local_18 != 1.0)) {
    FUN_008a2d60(local_18);
  }
  FUN_0089f5d0(unaff_retaddr,param_1);
  piVar8 = in_ECX + 4;
  unaff_retaddr[6] = (unaff_retaddr[6] | in_ECX[6]) & 0xffffffc7;
  iVar3 = in_ECX[2];
  if ((iVar3 == 0) || (iVar3 == -0x14)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar3 + 0x30);
  }
  if (((uVar2 >> 0xd & 1) != 0) || (*(float *)(param_1 + 0x10) != 1.0)) {
    iVar3 = unaff_retaddr[2];
    if ((iVar3 == 0) || (iVar3 == -0x14)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(iVar3 + 0x30);
    }
    if ((iVar3 != 0) && (iVar3 != -0x14)) {
      *(uint *)(iVar3 + 0x30) = uVar2 | 0x2000;
    }
    (**(code **)(*unaff_retaddr + 0x80))();
  }
  do {
    if (piVar8 == (int *)0x0) {
LAB_008a4f34:
      bVar1 = false;
    }
    else {
      piVar4 = (int *)FUN_00677c70(&local_18);
      uStack_1c = uStack_1c | 1;
      if (*piVar4 == 0) goto LAB_008a4f34;
      bVar1 = true;
    }
    puVar6 = local_18;
    if (((((uStack_1c & 1) != 0) &&
         (uStack_1c = uStack_1c & 0xfffffffe, local_18 != (undefined4 *)0x0)) &&
        (LVar5 = InterlockedDecrement(local_18 + 1), LVar5 == 0)) && (puVar6 != (undefined4 *)0x0))
    {
      (**(code **)*puVar6)(1);
    }
    if (!bVar1) {
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    puVar6 = (undefined4 *)FUN_00677c70(&puStack_14);
    puStack_8 = (undefined1 *)0x0;
    uVar7 = (**(code **)(*(int *)*puVar6 + 0x18))(param_1);
    puVar6 = puStack_14;
    puStack_8 = (undefined1 *)0xffffffff;
    if (((puStack_14 != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(puStack_14 + 1), LVar5 == 0)) && (puVar6 != (undefined4 *)0x0)
       ) {
      (**(code **)*puVar6)(1);
    }
    FUN_008a46c0(uVar7);
    piVar8 = (int *)piVar8[1];
  } while( true );
}



void FUN_008a4ff0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[5] = 0x80000000;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  *(undefined2 *)((int)in_ECX + 0x1a) = 0xffff;
  *(undefined1 *)(in_ECX + 2) = 1;
  *(undefined1 *)(in_ECX + 6) = 1;
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
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  return;
}



void FUN_008a5090(void)

{
  int in_ECX;
  
  if (-1 < *(int *)(in_ECX + 0x14)) {
    FUN_008a75d0(*(undefined4 *)(in_ECX + 0xc),*(int *)(in_ECX + 0x14) * 8,0x14);
  }
  return;
}



void FUN_008a50e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0089f350(param_1);
  for (iVar1 = FUN_007124d0(); iVar1 != 0; iVar1 = iVar1 + -1) {
    iVar2 = FUN_007124a0();
    if (iVar2 != 0) {
      FUN_008a46c0(iVar2);
    }
  }
  return;
}



void FUN_008a5120(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  LONG LVar6;
  undefined4 *puVar7;
  int in_ECX;
  int iVar8;
  int *unaff_FS_OFFSET;
  undefined4 local_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar3 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d6bc8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar2 = false;
  local_10 = in_ECX;
  FUN_0089f9a0(param_1);
  local_1c = FUN_008a4740(uVar4);
  param_1 = (int *)&DAT_00000004;
  (**(code **)(piVar3[0x88] + 8))(piVar3[0x88],&local_1c,4,&param_1,1);
  iVar8 = in_ECX + 0x10;
  do {
    if (iVar8 == 0) {
LAB_008a51b0:
      bVar1 = false;
    }
    else {
      piVar5 = (int *)FUN_00677c70(&param_1);
      bVar2 = true;
      if (*piVar5 == 0) goto LAB_008a51b0;
      bVar1 = true;
    }
    puVar7 = param_1;
    if (bVar2) {
      bVar2 = false;
      if (param_1 != (undefined4 *)0x0) {
        LVar6 = InterlockedDecrement(param_1 + 1);
        if ((LVar6 == 0) && (puVar7 != (undefined4 *)0x0)) {
          (**(code **)*puVar7)(1);
        }
      }
    }
    if (!bVar1) {
      uStack_14 = 4;
      (**(code **)(piVar3[0x88] + 8))(piVar3[0x88],local_10 + 0x18,4,&uStack_14,1);
      *unaff_FS_OFFSET = local_c;
      return;
    }
    puVar7 = (undefined4 *)FUN_00677c70(&puStack_18);
    uStack_4 = 0;
    (**(code **)(*piVar3 + 0x2c))(*puVar7);
    puVar7 = puStack_18;
    uStack_4 = 0xffffffff;
    if (puStack_18 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puStack_18 + 1);
      if ((LVar6 == 0) && (puVar7 != (undefined4 *)0x0)) {
        (**(code **)*puVar7)(1);
      }
    }
    iVar8 = *(int *)(iVar8 + 4);
  } while( true );
}



void FUN_008a5280(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  switch(param_2) {
  case 1:
    param_2 = FUN_0070fc30("MOTION","DYNAMIC");
    FUN_0042d800(&param_2);
    return;
  case 2:
  case 3:
    param_2 = FUN_0070fc30("MOTION","SPHERE");
    FUN_0042d800(&param_2);
    return;
  case 4:
  case 5:
    param_2 = FUN_0070fc30("MOTION",&DAT_00a97474);
    FUN_0042d800(&param_2);
    return;
  case 6:
    param_2 = FUN_0070fc30("MOTION","KEYFRAMED");
    FUN_0042d800(&param_2);
    return;
  case 7:
    param_2 = FUN_0070fc30("MOTION","FIXED");
    FUN_0042d800(&param_2);
    return;
  }
  param_2 = FUN_0070fc30("MOTION","INVALID");
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&param_2);
  return;
}



void FUN_008a53c0(void)

{
  FUN_008a4db0();
  FUN_0089d700();
  return;
}



void FUN_008a53e0(void)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  LONG LVar8;
  uint *puVar9;
  undefined *puVar10;
  int *piVar11;
  int *in_ECX;
  int *piVar12;
  int *unaff_FS_OFFSET;
  int iStack_1c;
  undefined4 *puStack_14;
  undefined4 *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d6bf8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar3 = false;
  if (((uint)in_ECX[6] >> 2 & 1) != 0) {
    iVar6 = (**(code **)(*in_ECX + 0x58))(uVar5);
    if (iVar6 == 0) {
      iStack_1c = 0;
    }
    else {
      iStack_1c = *(int *)(iVar6 + 0x2b0);
    }
    if (iStack_1c != 0) {
      piVar12 = in_ECX + 4;
LAB_008a544a:
      if (piVar12 == (int *)0x0) {
LAB_008a5468:
        bVar1 = false;
      }
      else {
        piVar7 = (int *)FUN_00677c70(&puStack_14);
        bVar3 = true;
        if (*piVar7 == 0) goto LAB_008a5468;
        bVar1 = true;
      }
      puVar4 = puStack_14;
      if ((((bVar3) && (bVar3 = false, puStack_14 != (undefined4 *)0x0)) &&
          (LVar8 = InterlockedDecrement(puStack_14 + 1), LVar8 == 0)) &&
         (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
      if (bVar1) {
        puVar9 = (uint *)FUN_00677c70(&puStack_10);
        piVar7 = (int *)*puVar9;
        uStack_4 = 0;
        piVar11 = (int *)0x0;
        if (piVar7 != (int *)0x0) {
          for (puVar10 = (undefined *)(**(code **)(*piVar7 + 4))(); puVar10 != (undefined *)0x0;
              puVar10 = *(undefined **)(puVar10 + 4)) {
            if (puVar10 == &DAT_00ba7d50) {
              bVar2 = 1;
              goto LAB_008a54e0;
            }
          }
          bVar2 = 0;
LAB_008a54e0:
          piVar11 = (int *)(-(uint)bVar2 & (uint)piVar7);
        }
        puVar4 = puStack_10;
        uStack_4 = 0xffffffff;
        if (((puStack_10 != (undefined4 *)0x0) &&
            (LVar8 = InterlockedDecrement(puStack_10 + 1), LVar8 == 0)) &&
           (puVar4 != (undefined4 *)0x0)) {
          (**(code **)*puVar4)(1);
        }
        if (piVar11 != (int *)0x0) {
          iVar6 = (**(code **)(*piVar11 + 0x58))();
          if (iVar6 == 0) {
            piVar12 = (int *)piVar12[1];
            (**(code **)(*piVar11 + 0x5c))(iStack_1c);
          }
          else {
            (**(code **)(*piVar11 + 0x60))();
            FUN_0067a850();
          }
        }
        goto LAB_008a544a;
      }
      in_ECX[6] = in_ECX[6] & 0xfffffffb;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008a5580(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_0047fac0(param_1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
      if ((char)param_2 == '\0') {
        FUN_008a53e0();
      }
      else {
        FUN_008a4ba0();
      }
    }
    iVar1 = (**(code **)(*param_1 + 8))();
    if (iVar1 != 0) {
      uVar3 = 0;
      if (*(short *)(iVar1 + 0xb6) != 0) {
        if (*(short *)(iVar1 + 0xb6) != 0) goto LAB_008a55d7;
        uVar2 = 0;
        while( true ) {
          FUN_008a5580(uVar2,param_2);
          uVar3 = uVar3 + 1;
          if (*(ushort *)(iVar1 + 0xb6) <= uVar3) break;
LAB_008a55d7:
          uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xb0) + uVar3 * 4);
        }
      }
    }
  }
  return;
}



void FUN_008a5600(void)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  LONG LVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int in_ECX;
  undefined4 *local_8;
  undefined4 *local_4;
  
  bVar2 = false;
LAB_008a5612:
  if (in_ECX == -0x10) {
LAB_008a5630:
    bVar1 = false;
  }
  else {
    piVar3 = (int *)FUN_00677c70(&local_8);
    bVar2 = true;
    if (*piVar3 == 0) goto LAB_008a5630;
    bVar1 = true;
  }
  puVar6 = local_8;
  if ((((bVar2) && (bVar2 = false, local_8 != (undefined4 *)0x0)) &&
      (LVar4 = InterlockedDecrement(local_8 + 1), LVar4 == 0)) && (puVar6 != (undefined4 *)0x0)) {
    (**(code **)*puVar6)(1);
  }
  if (!bVar1) {
    return;
  }
  piVar3 = (int *)FUN_00677c70(&local_4);
  puVar6 = local_4;
  piVar3 = (int *)*piVar3;
  if (((local_4 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(local_4 + 1), LVar4 == 0)) &&
     (puVar6 != (undefined4 *)0x0)) {
    (**(code **)*puVar6)(1);
  }
  if (piVar3 != (int *)0x0) {
    for (puVar5 = (undefined *)(**(code **)(*piVar3 + 4))(); puVar5 != (undefined *)0x0;
        puVar5 = *(undefined **)(puVar5 + 4)) {
      if (puVar5 == &DAT_00ba7d50) goto LAB_008a56ea;
    }
    puVar6 = (undefined4 *)(**(code **)(*piVar3 + 4))();
    if (puVar6 == (undefined4 *)0x0) goto LAB_008a5700;
    do {
      if (puVar6 == &DAT_00ba7d04) goto LAB_008a56ea;
      puVar6 = (undefined4 *)puVar6[1];
    } while (puVar6 != (undefined4 *)0x0);
    FUN_0067a850();
    goto LAB_008a5612;
  }
LAB_008a5700:
  FUN_0067a850();
  goto LAB_008a5612;
LAB_008a56ea:
  iVar7 = (**(code **)(*piVar3 + 0x58))();
  if (iVar7 != 0) {
    (**(code **)(*piVar3 + 0x60))();
  }
  goto LAB_008a5700;
}



void FUN_008a5720(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_0047fac0(param_1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
      FUN_008a5600();
    }
    iVar1 = (**(code **)(*param_1 + 8))();
    if (iVar1 != 0) {
      uVar3 = 0;
      if (*(short *)(iVar1 + 0xb6) != 0) {
        if (*(short *)(iVar1 + 0xb6) != 0) goto LAB_008a5769;
        uVar2 = 0;
        while( true ) {
          FUN_008a5720(uVar2);
          uVar3 = uVar3 + 1;
          if (*(ushort *)(iVar1 + 0xb6) <= uVar3) break;
LAB_008a5769:
          uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xb0) + uVar3 * 4);
        }
      }
    }
  }
  return;
}



void FUN_008a5790(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d6c28;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0x80000000;
  *in_ECX = 0;
  in_ECX[1] = 0;
  *(undefined1 *)(in_ECX + 2) = 1;
  *(undefined1 *)(in_ECX + 6) = 1;
  *(undefined2 *)((int)in_ECX + 0x1a) = 0xffff;
  local_4 = 0;
  FUN_008df420(uVar1);
  in_ECX[0x31] = 0x461c4000;
  *(undefined1 *)((int)in_ECX + 0xd3) = 0;
  in_ECX[0x32] = 0x41fb53c4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008a5820(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009d6c63;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a5605c;
  local_4 = 1;
  FUN_008a4db0(uVar2);
  FUN_0089d700();
  DAT_00ba7d80 = DAT_00ba7d80 + -1;
  puVar1 = (undefined4 *)in_ECX[4];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_008affa0();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008a58c0(undefined4 param_1)

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
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  iVar2 = FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_008a4150();
  }
  local_4 = 0xffffffff;
  FUN_008a4e30(uVar3,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



undefined4 FUN_008a5980(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d709b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar2 = thunk_FUN_00401aa0(0xf0,1);
    bVar4 = 0x10 - ((byte)iVar2 & 0xf);
    *(byte *)(iVar2 + (uint)bVar4 + -1) = bVar4;
    local_4 = 0;
    uVar3 = FUN_008a5790(uVar1);
    local_4 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0xc) = uVar3;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008a2de0(uVar3);
    }
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  uVar3 = *(undefined4 *)(in_ECX + 0xc);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_008a5a20(char *param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  char *pcVar3;
  char *pcVar4;
  char *pcStack_32c;
  int iStack_328;
  uint uStack_324;
  undefined1 auStack_314 [12];
  undefined4 uStack_308;
  undefined1 *puStack_304;
  char acStack_2f4 [12];
  undefined4 uStack_2e8;
  int iStack_2e0;
  undefined1 auStack_22c [520];
  uint local_24;
  int iStack_20;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d6c96;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_314;
  uStack_324 = DAT_00b30aac ^ (uint)&stack0xfffffce0;
  *unaff_FS_OFFSET = (int)&local_1c;
  iStack_328 = 0x8a5a6c;
  puStack_304 = (undefined1 *)(**(code **)(*in_ECX + 0x68))();
  iStack_328 = (int)&uStack_308 + 3;
  pcStack_32c = (char *)0x8a5a7e;
  puVar1 = (undefined4 *)(**(code **)(*in_ECX + 0x74))();
  if (*(uint *)(param_1 + 4) < 6) {
    pcStack_32c = (char *)0x8a5a93;
    FUN_008a4ff0();
    pcStack_32c = (char *)0x0;
    puStack_18 = (undefined1 *)0x0;
    (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),acStack_2f4,0xc0,0);
    uVar2 = extraout_ECX;
    if (puVar1 != (undefined4 *)0x0) {
      pcStack_32c = acStack_2f4;
      FUN_008a3270();
      uVar2 = puVar1[8];
      *puVar1 = uVar2;
      puVar1[1] = puVar1[9];
      *(undefined1 *)(puVar1 + 2) = 1;
    }
    pcVar3 = param_1 + 0xe0;
    param_1 = param_1 + 8;
    if (*param_1 == '\0') {
      param_1 = "Please";
    }
    puStack_304 = (undefined1 *)&pcStack_32c;
    pcStack_32c = (char *)CONCAT31((int3)((uint)uVar2 >> 8),1);
    FUN_008bbfb0(auStack_22c,0x200);
    pcStack_32c = " re-export\n";
    pcVar4 = " contains an old bhkRigidBody! ";
    puStack_18._0_1_ = 1;
    FUN_008bbdb0("File ");
    FUN_008bbdb0(pcVar3);
    FUN_008bbdb0(pcVar4);
    FUN_008bbdb0(param_1);
    FUN_008bbdb0();
    pcStack_32c = (char *)0x21a;
    (**(code **)(*DAT_00ba7fb0 + 8))(1,0x234f2250,auStack_22c,".\\bhkRigidBody.cpp");
    puStack_18 = (undefined1 *)((uint)puStack_18._1_3_ << 8);
    pcStack_32c = (char *)0x8a5b82;
    FUN_008bc000();
    puStack_18 = (undefined1 *)0xffffffff;
    if (-1 < iStack_2e0) {
      pcStack_32c = (char *)0x14;
      FUN_008a75d0(uStack_2e8,iStack_2e0 * 8);
    }
  }
  else {
    pcStack_32c = param_1;
    FUN_0089d670();
  }
  *unaff_FS_OFFSET = iStack_20;
  return uStack_308;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008a5c10(int param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  LONG LVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1c4 [4];
  undefined4 *local_1c0;
  char local_1b9;
  undefined4 *local_1b8;
  uint local_1b4;
  undefined1 local_1b0 [12];
  undefined4 *local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined1 local_190 [12];
  undefined4 uStack_184;
  int iStack_17c;
  undefined1 local_160 [16];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_140 [16];
  undefined1 local_130 [64];
  undefined1 local_f0 [16];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  char local_c0;
  char acStack_a8 [132];
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009d6cdb;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_1c4;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffe30;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_1b4 = 0;
  FUN_008b0080(param_1);
  local_1b8 = (undefined4 *)FUN_0070f910(DAT_00ba7d84,uVar2);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_1b8);
  FUN_008a5790();
  puVar7 = local_1c0;
  local_14 = 0;
  FUN_008a2de0(local_190);
  FUN_0043f3e0(local_1b0,local_160);
  local_19c = local_150;
  local_198 = local_14c;
  local_194 = local_148;
  local_1a0 = local_144;
  local_1c0 = (undefined4 *)FUN_00707280("Position");
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_1c0);
  local_1c0 = (undefined4 *)FUN_007153c0("Rotation");
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_1c0);
  FUN_0043f3e0(local_1b0,local_f0);
  local_1c0 = (undefined4 *)FUN_00707280(&DAT_00a97548);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_1c0);
  local_1c0 = (undefined4 *)FUN_0070fb90(&DAT_00a97540,local_e0);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_1c0);
  local_1c0 = (undefined4 *)FUN_0070fb90("LINDAMP",local_dc);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_1c0);
  local_1c0 = (undefined4 *)FUN_0070fb90("ANGDAMP",local_d8);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_1c0);
  local_1c0 = (undefined4 *)FUN_0070fb90("FRICTION",local_d4);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_1c0);
  local_1c0 = (undefined4 *)FUN_0070fb90(&DAT_00a9751c,local_d0);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_1c0);
  FUN_008a5280(param_1,(int)local_c0);
  local_1c0 = (undefined4 *)FUN_0070fb90("MAXLINVEL",local_cc);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_1c0);
  local_1c0 = (undefined4 *)FUN_0070fb90("MAXANGVEL",local_c8);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_1c0);
  FUN_0043f3e0(local_1b0,local_140);
  local_1c0 = (undefined4 *)FUN_00707280("LinVel");
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_1c0);
  FUN_0043f3e0(local_1b0,local_130);
  local_1c0 = (undefined4 *)FUN_00707280("AngVel");
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_1c0);
  local_1c0 = (undefined4 *)FUN_0070fb90("PENDEPTH",local_c4);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_1c0);
  uVar3 = FUN_008a3200();
  local_1c0 = (undefined4 *)FUN_0070fc30("QUALITYTYPE",uVar3);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_1c0);
  uVar3 = FUN_008a4740();
  local_1c0 = (undefined4 *)FUN_0070fb40("ACTCONCOUNT",uVar3);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_1c0);
  local_1b8 = puVar7 + 4;
  do {
    if (local_1b8 == (undefined4 *)0x0) {
LAB_008a6127:
      local_1b9 = '\0';
    }
    else {
      piVar4 = (int *)FUN_00677c70(&local_1c0);
      local_1b4 = local_1b4 | 1;
      local_1b9 = '\x01';
      if (*piVar4 == 0) goto LAB_008a6127;
    }
    puVar7 = local_1c0;
    if (((((local_1b4 & 1) != 0) &&
         (local_1b4 = local_1b4 & 0xfffffffe, local_1c0 != (undefined4 *)0x0)) &&
        (LVar5 = InterlockedDecrement(local_1c0 + 1), LVar5 == 0)) && (puVar7 != (undefined4 *)0x0))
    {
      (**(code **)*puVar7)(1);
    }
    if (local_1b9 == '\0') {
      local_14 = 0xffffffff;
      if (-1 < iStack_17c) {
        FUN_008a75d0(uStack_184,iStack_17c * 8,0x14);
      }
      *unaff_FS_OFFSET = local_1c;
      return;
    }
    puVar6 = (undefined4 *)FUN_00677c70(&local_1a4);
    puVar7 = local_1a4;
    piVar4 = (int *)*puVar6;
    if (((local_1a4 != (undefined4 *)0x0) &&
        (LVar5 = InterlockedDecrement(local_1a4 + 1), LVar5 == 0)) && (puVar7 != (undefined4 *)0x0))
    {
      (**(code **)*puVar7)(1);
    }
    puVar7 = (undefined4 *)(**(code **)(*piVar4 + 4))();
    _sprintf(acStack_a8,"%s: 0x%8X",*puVar7,piVar4);
    iVar8 = FUN_0070fc30("ACTCON",acStack_a8);
    uVar1 = *(ushort *)(param_1 + 10);
    uVar2 = (uint)uVar1;
    if (*(ushort *)(param_1 + 8) <= uVar2) {
      FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
    }
    if (uVar2 < *(ushort *)(param_1 + 10)) {
      if (iVar8 == 0) {
        if (*(int *)(*(int *)(param_1 + 4) + uVar2 * 4) != 0) {
          *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
        }
      }
      else if (*(int *)(*(int *)(param_1 + 4) + uVar2 * 4) == 0) {
        *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
      }
    }
    else {
      *(ushort *)(param_1 + 10) = uVar1 + 1;
      if (iVar8 != 0) {
        *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
      }
    }
    *(int *)(*(int *)(param_1 + 4) + uVar2 * 4) = iVar8;
    local_1b8 = (undefined4 *)local_1b8[1];
  } while( true );
}



void FUN_008a62c0(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if ((param_1 != 0) && (*(short *)(param_1 + 4) != 0)) {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  }
  puVar1 = *(undefined4 **)(in_ECX + 100);
  if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  *(int *)(in_ECX + 100) = param_1;
  return;
}



void FUN_008a6300(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0xb0)) {
    piVar2 = *(int **)(in_ECX + 0xac);
    do {
      if (*piVar2 == param_1) {
        *(undefined4 *)(*(int *)(in_ECX + 0xac) + iVar1 * 4) = 0;
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0xb0));
  }
  *(undefined4 *)(*(int *)(in_ECX + 0xac) + -4) = 0;
  return;
}



void FUN_008a6350(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0xa4)) {
    piVar2 = *(int **)(in_ECX + 0xa0);
    do {
      if (*piVar2 == param_1) {
        *(undefined4 *)(*(int *)(in_ECX + 0xa0) + iVar1 * 4) = 0;
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0xa4));
  }
  *(undefined4 *)(*(int *)(in_ECX + 0xa0) + -4) = 0;
  return;
}



void FUN_008a63a0(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x98)) {
    piVar2 = *(int **)(in_ECX + 0x94);
    do {
      if (*piVar2 == param_1) {
        *(undefined4 *)(*(int *)(in_ECX + 0x94) + iVar1 * 4) = 0;
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x98));
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x94) + -4) = 0;
  return;
}



void FUN_008a63f0(undefined1 *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x54) == 0) {
    *param_1 = 0;
    return;
  }
  *param_1 = *(undefined1 *)(*(int *)(in_ECX + 0x54) + 0x28);
  return;
}



void FUN_008a6410(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x54);
  if ((((iVar1 == 0) || (*(char *)(iVar1 + 0x28) == '\0')) && (*(char *)(in_ECX + 0x91) == '\0')) &&
     (*(int *)(in_ECX + 8) != 0)) {
    FUN_008cbc00(*(int *)(in_ECX + 8),iVar1);
  }
  return;
}



void FUN_008a6440(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x54);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x28) != '\0')) {
    FUN_008cbbb0(*(undefined4 *)(in_ECX + 8),iVar1);
  }
  return;
}



void FUN_008a6550(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  piVar1 = (int *)(in_ECX + 0xac);
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0xb0)) {
    piVar3 = (int *)*piVar1;
    do {
      if (*piVar3 == 0) {
        if (-1 < iVar2) {
          *(undefined4 *)(*piVar1 + iVar2 * 4) = param_1;
          return;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0xb0));
  }
  if (*(uint *)(in_ECX + 0xb0) == (*(uint *)(in_ECX + 0xb4) & 0x3fffffff)) {
    FUN_008a6ee0(piVar1,4);
  }
  *(undefined4 *)(*piVar1 + *(int *)(in_ECX + 0xb0) * 4) = param_1;
  *(int *)(in_ECX + 0xb0) = *(int *)(in_ECX + 0xb0) + 1;
  return;
}



void FUN_008a65c0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  piVar1 = (int *)(in_ECX + 0xa0);
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0xa4)) {
    piVar3 = (int *)*piVar1;
    do {
      if (*piVar3 == 0) {
        if (-1 < iVar2) {
          *(undefined4 *)(*piVar1 + iVar2 * 4) = param_1;
          return;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0xa4));
  }
  if (*(uint *)(in_ECX + 0xa4) == (*(uint *)(in_ECX + 0xa8) & 0x3fffffff)) {
    FUN_008a6ee0(piVar1,4);
  }
  *(undefined4 *)(*piVar1 + *(int *)(in_ECX + 0xa4) * 4) = param_1;
  *(int *)(in_ECX + 0xa4) = *(int *)(in_ECX + 0xa4) + 1;
  return;
}



void FUN_008a6630(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  piVar1 = (int *)(in_ECX + 0x94);
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x98)) {
    piVar3 = (int *)*piVar1;
    do {
      if (*piVar3 == 0) {
        if (-1 < iVar2) {
          *(undefined4 *)(*piVar1 + iVar2 * 4) = param_1;
          return;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x98));
  }
  if (*(uint *)(in_ECX + 0x98) == (*(uint *)(in_ECX + 0x9c) & 0x3fffffff)) {
    FUN_008a6ee0(piVar1,4);
  }
  *(undefined4 *)(*piVar1 + *(int *)(in_ECX + 0x98) * 4) = param_1;
  *(int *)(in_ECX + 0x98) = *(int *)(in_ECX + 0x98) + 1;
  return;
}



void FUN_008a66a0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[5];
  *in_ECX = &PTR_FUN_00a97598;
  if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  if (-1 < (int)in_ECX[0x13]) {
    FUN_008a75d0(in_ECX[0x11],in_ECX[0x13] << 4,0x14);
  }
  if (-1 < (int)in_ECX[0x10]) {
    FUN_008a75d0(in_ECX[0xe],in_ECX[0x10] << 3,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008a6740(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[10] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0x80000000;
  *in_ECX = &PTR_FUN_00a975a8;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0x80000000;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0x80000000;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0x80000000;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0x80000000;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0x80000000;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0x80000000;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0x80000000;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_008a67f0(void)

{
  undefined4 local_f4;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined1 local_ee;
  undefined1 local_ed;
  
  FUN_008a6740(0);
  local_f4 = CONCAT13(local_ed,CONCAT12(local_ee,CONCAT11(local_ef,local_f0)));
  return local_f4;
}



void FUN_008a6850(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_008bc8f0(param_1,1);
  *in_ECX = &PTR_FUN_00a975a8;
  in_ECX[0x17] = 0x3f000000;
  in_ECX[0x18] = 0x3ecccccd;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0x80000000;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0x80000000;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0x80000000;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0x80000000;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0x80000000;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0x80000000;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0x80000000;
  in_ECX[0x15] = 0;
  in_ECX[0x19] = 0;
  *(undefined2 *)(in_ECX + 0x23) = 0xffff;
  return;
}



void FUN_008a6900(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a975a8;
  FUN_008dbf50();
  puVar1 = (undefined4 *)in_ECX[0x19];
  if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  if (-1 < (int)in_ECX[0x30]) {
    FUN_008a75d0(in_ECX[0x2e],in_ECX[0x30] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x2d]) {
    FUN_008a75d0(in_ECX[0x2b],in_ECX[0x2d] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x2a]) {
    FUN_008a75d0(in_ECX[0x28],in_ECX[0x2a] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x27]) {
    FUN_008a75d0(in_ECX[0x25],in_ECX[0x27] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x22]) {
    FUN_008a75d0(in_ECX[0x20],in_ECX[0x22] & 0x3fffffff,0x14);
  }
  if (-1 < (int)in_ECX[0x1f]) {
    FUN_008a75d0(in_ECX[0x1d],in_ECX[0x1f] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x1c]) {
    FUN_008a75d0(in_ECX[0x1a],(in_ECX[0x1c] & 0x3fffffff) * 0x1c,0x14);
  }
  FUN_008a66a0();
  return;
}



void FUN_008a6de0(byte param_1)

{
  FUN_008a66a0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008a6e10(byte param_1)

{
  FUN_008a6900();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008a6e40(undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_008a7560(param_2 * param_3,0x14);
  FUN_008b1890(uVar1,*param_1,param_1[1] * param_3);
  if (-1 < (int)param_1[2]) {
    FUN_008a75d0(*param_1,(param_1[2] & 0x3fffffff) * param_3,0x14);
  }
  *param_1 = uVar1;
  param_1[2] = param_1[2] & 0x40000000 | param_2;
  return;
}



void FUN_008a6ee0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_1[1] * 2;
  if (param_1[1] == 0) {
    uVar2 = 1;
  }
  uVar1 = FUN_008a7560(uVar2 * param_2,0x14);
  FUN_008b1890(uVar1,*param_1,param_1[1] * param_2);
  if (-1 < (int)param_1[2]) {
    FUN_008a75d0(*param_1,(param_1[2] & 0x3fffffff) * param_2,0x14);
  }
  *param_1 = uVar1;
  param_1[2] = param_1[2] & 0x40000000 | uVar2;
  return;
}



void FUN_008a6f90(int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_3 == 0) || ((int)param_4 <= param_1[1])) {
    param_4 = param_1[2] >> 1 & 0x1fffffff;
    param_3 = FUN_008a7560(param_4 * param_2,0x14);
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80000000;
  }
  FUN_008b1890(param_3,*param_1,param_1[1] * param_2);
  FUN_008a75d0(*param_1,(param_1[2] & 0x3fffffffU) * param_2,0x14);
  *param_1 = param_3;
  param_1[2] = param_1[2] & 0x40000000U | uVar1 | param_4;
  return;
}



void FUN_008a7060(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a95c00;
  in_ECX[3] = 1;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0x7fffffff;
  return;
}



void FUN_008a70f0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  piVar2 = DAT_00ba7d98;
  if ((DAT_00ba7d98 != (int *)0x0) &&
     (iVar1 = DAT_00ba7d98[3], DAT_00ba7d98[3] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*piVar2 + 0x34))(1);
  }
  DAT_00ba7d98 = (int *)param_1;
  return;
}



void FUN_008a71b0(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0x10;
  piVar3 = (int *)(in_ECX + 0x74);
  do {
    iVar1 = *piVar3;
    while (iVar1 != 0) {
      piVar2 = (int *)*piVar3;
      *piVar3 = *piVar2;
      (**(code **)(**(int **)(in_ECX + 0x10) + 0x1c))(piVar2,iVar4,1);
      iVar1 = *piVar3;
    }
    *piVar3 = 0;
    piVar3[0x11] = 0;
    iVar4 = iVar4 + -1;
    piVar3 = piVar3 + -1;
  } while (-1 < iVar4);
  return;
}



void FUN_008a7200(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a975c8;
  FUN_008a71b0();
  return;
}



void FUN_008a7210(void)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = in_ECX + 5;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)(*in_ECX + 8))(1);
  }
  return;
}



void FUN_008a7220(uint param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = param_1 & 0xf;
  *(undefined4 *)(in_ECX + 0x28) = 0xffffffff;
  if (uVar2 != 0) {
    iVar1 = (param_1 - uVar2) + 0x10;
    *(int *)(in_ECX + 0x20) = iVar1;
    *(uint *)(in_ECX + 0x2c) = (iVar1 - uVar2) + param_2;
    return;
  }
  *(uint *)(in_ECX + 0x20) = param_1;
  *(uint *)(in_ECX + 0x2c) = param_1 + param_2;
  return;
}



void FUN_008a7260(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int unaff_FS_OFFSET;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  piVar3 = *(int **)(iVar2 + 0x19c);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 5;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*piVar3 + 8))(1);
    }
  }
  *(int *)(iVar2 + 0x19c) = param_1;
  return;
}



void FUN_008a72a0(int *param_1,uint param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *in_ECX;
  int iVar5;
  int *piVar6;
  
  *in_ECX = &PTR_FUN_00a975c8;
  in_ECX[5] = 1;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0xffffffff;
  in_ECX[0xb] = 0;
  in_ECX[4] = param_1;
  cVar2 = (**(code **)(*param_1 + 0x20))();
  in_ECX[0xc] = -(uint)(cVar2 != '\0') & param_2;
  puVar3 = in_ECX + 0x2e;
  iVar5 = 0x11;
  do {
    puVar3[-0x11] = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + -1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = 0;
  do {
    if (iVar5 < 9) {
      iVar4 = 1;
    }
    else if (iVar5 < 0x11) {
      iVar4 = 2;
    }
    else if (iVar5 < 0x21) {
      iVar4 = 3;
    }
    else if (iVar5 < 0x31) {
      iVar4 = 4;
    }
    else if (iVar5 < 0x41) {
      iVar4 = 5;
    }
    else if (iVar5 < 0x61) {
      iVar4 = 6;
    }
    else if (iVar5 < 0x81) {
      iVar4 = 7;
    }
    else if (iVar5 < 0xa1) {
      iVar4 = 8;
    }
    else if (iVar5 < 0xc1) {
      iVar4 = 9;
    }
    else if (iVar5 < 0x101) {
      iVar4 = 10;
    }
    else if (iVar5 < 0x141) {
      iVar4 = 0xb;
    }
    else if (iVar5 < 0x201) {
      iVar4 = 0xc;
    }
    else if (iVar5 < 0x401) {
      iVar4 = 0xd;
    }
    else if (iVar5 < 0x801) {
      iVar4 = 0xe;
    }
    else if (iVar5 < 0x1001) {
      iVar4 = 0xf;
    }
    else {
      if (0x2000 < iVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = 0x10;
    }
    *(char *)((int)in_ECX + iVar5 + 0x100) = (char)iVar4;
    in_ECX[iVar4 + 0x2f] = iVar5;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x201);
  iVar5 = 0x400;
  piVar6 = in_ECX + 0xc1;
  do {
    if (iVar5 < 9) {
      iVar4 = 1;
    }
    else if (iVar5 < 0x11) {
      iVar4 = 2;
    }
    else if (iVar5 < 0x21) {
      iVar4 = 3;
    }
    else if (iVar5 < 0x31) {
      iVar4 = 4;
    }
    else if (iVar5 < 0x41) {
      iVar4 = 5;
    }
    else if (iVar5 < 0x61) {
      iVar4 = 6;
    }
    else if (iVar5 < 0x81) {
      iVar4 = 7;
    }
    else if (iVar5 < 0xa1) {
      iVar4 = 8;
    }
    else if (iVar5 < 0xc1) {
      iVar4 = 9;
    }
    else if (iVar5 < 0x101) {
      iVar4 = 10;
    }
    else if (iVar5 < 0x141) {
      iVar4 = 0xb;
    }
    else if (iVar5 < 0x201) {
      iVar4 = 0xc;
    }
    else if (iVar5 < 0x401) {
      iVar4 = 0xd;
    }
    else if (iVar5 < 0x801) {
      iVar4 = 0xe;
    }
    else if (iVar5 < 0x1001) {
      iVar4 = 0xf;
    }
    else {
      if (0x2000 < iVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = 0x10;
    }
    *piVar6 = iVar4;
    in_ECX[iVar4 + 0x2f] = iVar5;
    iVar5 = iVar5 + 0x400;
    piVar6 = piVar6 + 1;
  } while (iVar5 < 0x2400);
  return;
}



void FUN_008a7530(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a975c8;
  FUN_008a71b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_008a7560(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  
  if ((0x2000 < param_1) || (*(int *)(in_ECX + 0x30) == 0)) {
    (**(code **)(**(int **)(in_ECX + 0x10) + 0x10))(param_1,param_2);
    return;
  }
  if (param_1 < 0x201) {
    iVar3 = (int)*(char *)(param_1 + 0x100 + in_ECX);
  }
  else {
    iVar3 = *(int *)(in_ECX + 0x304 + (param_1 + -1 >> 10) * 4);
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x34 + iVar3 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = (int *)(in_ECX + 0x78 + iVar3 * 4);
    *piVar1 = *piVar1 + -1;
    *(undefined4 *)(in_ECX + 0x34 + iVar3 * 4) = *puVar2;
    return;
  }
  (**(code **)(**(int **)(in_ECX + 0x10) + 0x18))(iVar3,param_2);
  return;
}



void FUN_008a75d0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if ((0x2000 < param_2) || (*(int *)(in_ECX + 0x30) == 0)) {
    (**(code **)(**(int **)(in_ECX + 0x10) + 0x14))(param_1,param_2,param_3);
    return;
  }
  if (param_2 < 0x201) {
    iVar2 = (int)*(char *)(param_2 + 0x100 + in_ECX);
  }
  else {
    iVar2 = *(int *)(in_ECX + 0x304 + (param_2 + -1 >> 10) * 4);
  }
  iVar1 = *(int *)(in_ECX + 0x78 + iVar2 * 4);
  if (iVar1 < *(int *)(in_ECX + 0x30)) {
    *(int *)(in_ECX + 0x78 + iVar2 * 4) = iVar1 + 1;
    *param_1 = *(undefined4 *)(in_ECX + 0x34 + iVar2 * 4);
    *(undefined4 **)(in_ECX + 0x34 + iVar2 * 4) = param_1;
    return;
  }
  (**(code **)(**(int **)(in_ECX + 0x10) + 0x1c))(param_1,iVar2,param_3);
  return;
}



void FUN_008a7650(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = param_1 + 0x400;
  if (iVar3 < 0x1001) {
    iVar3 = 0x1000;
  }
  piVar2 = (int *)FUN_008a7560(iVar3 + 0x10,0x14);
  *piVar2 = *(int *)(in_ECX + 0x20);
  piVar2[1] = *(int *)(in_ECX + 0x24);
  piVar2[2] = *(int *)(in_ECX + 0x28);
  piVar2[3] = *(int *)(in_ECX + 0x2c);
  piVar1 = piVar2 + 4;
  *(int *)(in_ECX + 0x20) = param_1 + (int)piVar1;
  *(int **)(in_ECX + 0x28) = piVar1;
  *(int *)(in_ECX + 0x2c) = (int)piVar1 + iVar3;
  *(int **)(in_ECX + 0x24) = piVar2;
  return;
}



void FUN_008a7720(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  BOOL BVar6;
  LPCRITICAL_SECTION in_ECX;
  int unaff_FS_OFFSET;
  
  BVar6 = TryEnterCriticalSection(in_ECX);
  iVar4 = _tls_index;
  if (BVar6 == 0) {
    iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
    iVar2 = *(int *)(iVar1 + _tls_index * 4);
    if (*(int *)(iVar2 + 0x1b4) == 0) {
      EnterCriticalSection(in_ECX);
    }
    else {
      if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
        puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
        *puVar3 = "TtCriticalLock";
        uVar5 = rdtsc();
        puVar3[1] = (int)uVar5;
        *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
      }
      EnterCriticalSection(in_ECX);
      iVar4 = *(int *)(iVar1 + iVar4 * 4);
      if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
        puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
        *puVar3 = &DAT_00a9610c;
        uVar5 = rdtsc();
        puVar3[1] = (int)uVar5;
        *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
        return;
      }
    }
  }
  return;
}



void FUN_008a77d0(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  FUN_008a7720();
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0xc)) {
    piVar2 = *(int **)(in_ECX + 8);
    do {
      if (*piVar2 == param_1) {
        if (-1 < iVar1) {
          iVar3 = *(int *)(in_ECX + 0xc) + -1;
          *(int *)(in_ECX + 0xc) = iVar3;
          *(undefined4 *)(*(int *)(in_ECX + 8) + iVar1 * 4) =
               *(undefined4 *)(*(int *)(in_ECX + 8) + iVar3 * 4);
        }
        break;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0xc));
  }
                    /* WARNING: Could not recover jumptable at 0x008a781d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(in_ECX + 0x14));
  return;
}



void FUN_008a7830(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  int iVar1;
  
  FUN_008a7720();
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar1 * 4) + 8))(param_1,param_2,param_3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(in_ECX + 0x14));
  return;
}



void FUN_008a7880(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int in_ECX;
  int iVar1;
  
  FUN_008a7720();
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar1 * 4) + 0x14))
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(in_ECX + 0x14));
  return;
}



void FUN_008a78e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  int iVar1;
  
  FUN_008a7720();
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar1 * 4) + 0x1c))
                (param_1,param_2,param_3,param_4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(in_ECX + 0x14));
  return;
}



void FUN_008a7930(float *param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float local_50 [4];
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
  
  iVar1 = 0;
  local_40 = 0.0;
  fStack_3c = 0.0;
  fStack_38 = 0.0;
  fStack_34 = 0.0;
  do {
    local_50[0] = local_40;
    local_50[1] = fStack_3c;
    local_50[2] = fStack_38;
    local_50[3] = fStack_34;
    local_50[iVar1] = param_2;
    local_20 = *param_1 + local_50[0];
    fStack_1c = param_1[1] + local_50[1];
    fStack_18 = param_1[2] + local_50[2];
    fStack_14 = param_1[3] + fStack_34;
    local_30 = *param_1 - local_50[0];
    fStack_2c = param_1[1] - local_50[1];
    fStack_28 = param_1[2] - local_50[2];
    fStack_24 = param_1[3] - fStack_34;
    FUN_008a78e0(&local_20,&local_30,param_3,param_4);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return;
}



void FUN_008a79b0(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a975f0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0x80000000;
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x12);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    InitializeCriticalSectionAndSpinCount(lpCriticalSection,1000);
    in_ECX[5] = lpCriticalSection;
    return;
  }
  in_ECX[5] = 0;
  return;
}



void FUN_008a7a10(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *in_ECX;
  
  lpCriticalSection = (LPCRITICAL_SECTION)in_ECX[5];
  *in_ECX = &PTR_FUN_00a975f0;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    (**(code **)(*DAT_00ba7d98 + 0x14))(lpCriticalSection,0x18,0x12);
  }
  if (-1 < (int)in_ECX[4]) {
    FUN_008a75d0(in_ECX[2],in_ECX[4] << 2,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008a7a80(undefined4 param_1)

{
  int in_ECX;
  
  FUN_008a7720();
  if (*(uint *)(in_ECX + 0xc) == (*(uint *)(in_ECX + 0x10) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 8),4);
  }
  *(undefined4 *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 0xc) * 4) = param_1;
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
                    /* WARNING: Could not recover jumptable at 0x008a7ac1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(in_ECX + 0x14));
  return;
}



void FUN_008a7af0(byte param_1)

{
  FUN_008a7a10();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008a7b20(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  FUN_0088aeb0(param_1);
  *in_ECX = &PTR_FUN_00a97614;
  in_ECX[0x20] = 0x47124e47;
  in_ECX[0x21] = 0x47124e47;
  in_ECX[0x22] = 0x47124e47;
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uVar3 = *(undefined4 *)(param_1 + 0x4c);
  in_ECX[0x28] = *(undefined4 *)(param_1 + 0x40);
  in_ECX[0x29] = uVar1;
  in_ECX[0x2a] = uVar2;
  in_ECX[0x2b] = uVar3;
  in_ECX[0x24] = *(float *)(param_1 + 0x40) - 585.2231;
  in_ECX[0x25] = *(float *)(param_1 + 0x44) - 585.2231;
  in_ECX[0x26] = *(float *)(param_1 + 0x48) - 585.2231;
  return;
}



void FUN_008a7ba0(float *param_1)

{
  float fVar1;
  int in_ECX;
  
  fVar1 = *param_1;
  if (0.0 <= fVar1) {
    fVar1 = (fVar1 + *(float *)(in_ECX + 0xa0)) - *(float *)(in_ECX + 0x80);
    if (0.0 < fVar1) {
      *param_1 = *param_1 - fVar1;
    }
  }
  else {
    fVar1 = (fVar1 - *(float *)(in_ECX + 0xa0)) + *(float *)(in_ECX + 0x80);
    if (fVar1 < 0.0) {
      *param_1 = *param_1 - fVar1;
    }
  }
  fVar1 = param_1[1];
  if (0.0 <= fVar1) {
    fVar1 = (fVar1 + *(float *)(in_ECX + 0xa4)) - *(float *)(in_ECX + 0x84);
    if (0.0 < fVar1) {
      param_1[1] = param_1[1] - fVar1;
    }
  }
  else {
    fVar1 = (fVar1 - *(float *)(in_ECX + 0xa4)) + *(float *)(in_ECX + 0x84);
    if (fVar1 < 0.0) {
      param_1[1] = param_1[1] - fVar1;
    }
  }
  fVar1 = param_1[2];
  if (0.0 <= fVar1) {
    fVar1 = (fVar1 + *(float *)(in_ECX + 0xa8)) - *(float *)(in_ECX + 0x88);
    if (fVar1 <= 0.0) {
      return;
    }
  }
  else {
    fVar1 = (fVar1 - *(float *)(in_ECX + 0xa8)) + *(float *)(in_ECX + 0x88);
    if (0.0 <= fVar1) {
      return;
    }
  }
  param_1[2] = param_1[2] - fVar1;
  return;
}



void FUN_008a7d20(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a97614;
  FUN_0088bdb0();
  if ((param_1 & 1) != 0) {
    FUN_00401e40((int)in_ECX - (uint)*(byte *)((int)in_ECX + -1));
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_008a7d50(float *param_1)

{
  undefined1 auVar1 [16];
  int in_ECX;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined1 auStack_38 [4];
  float local_34;
  float local_30 [7];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_38;
  local_30[3] = param_1[3];
  fVar4 = *(float *)(in_ECX + 0x50);
  fVar5 = *(float *)(in_ECX + 0x54);
  fVar6 = *(float *)(in_ECX + 0x58);
  fVar7 = *(float *)(in_ECX + 0x5c);
  local_30[0] = *param_1 - fVar4;
  local_30[1] = param_1[1] - fVar5;
  local_30[2] = param_1[2] - fVar6;
  uVar2 = 0;
  pfVar3 = (float *)(in_ECX + 0x90);
  do {
    local_34 = ABS(local_30[uVar2]);
    if (*pfVar3 < local_34 != (*pfVar3 == local_34)) {
      local_30[0] = *param_1;
      local_30[1] = param_1[1];
      local_30[2] = param_1[2];
      uVar8 = FUN_008a7ba0(local_30);
      auVar1._4_4_ = -(uint)(0.5 < ABS(local_30[1] - fVar5));
      auVar1._0_4_ = -(uint)(0.5 < ABS(local_30[0] - fVar4));
      auVar1._8_4_ = -(uint)(0.5 < ABS(local_30[2] - fVar6));
      auVar1._12_4_ = -(uint)(0.5 < ABS(local_30[3] - fVar7));
      uVar2 = movmskps((int)((ulonglong)uVar8 >> 0x20),auVar1);
      if ((uVar2 & 7) == 0) {
        return 0;
      }
      FUN_0088c600(local_30);
      return 1;
    }
    uVar2 = uVar2 + 1;
    pfVar3 = pfVar3 + 1;
  } while (uVar2 < 3);
  return 0;
}



void FUN_008a7e30(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  undefined1 local_c [12];
  
  iVar1 = param_1;
  FUN_0088bf40(param_1);
  param_1 = FUN_0070f910(DAT_00ba7da4);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  FUN_0043f3e0(local_c,in_ECX + 0x80);
  param_1 = FUN_00707280("WorldTotalSize");
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  FUN_0043f3e0(local_c,in_ECX + 0x90);
  param_1 = FUN_00707280("BorderSize");
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_008a7f20(int param_1,int param_2,char param_3)

{
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_2 & 0x1f);
  if (param_3 != '\0') {
    *(uint *)(&DAT_00ba7db0 + param_1 * 4) = *(uint *)(&DAT_00ba7db0 + param_1 * 4) | uVar1;
    *(uint *)(&DAT_00ba7db0 + param_2 * 4) =
         *(uint *)(&DAT_00ba7db0 + param_2 * 4) | 1 << ((byte)param_1 & 0x1f);
    return;
  }
  *(uint *)(&DAT_00ba7db0 + param_1 * 4) = *(uint *)(&DAT_00ba7db0 + param_1 * 4) & ~uVar1;
  *(uint *)(&DAT_00ba7db0 + param_2 * 4) =
       *(uint *)(&DAT_00ba7db0 + param_2 * 4) & ~(1 << ((byte)param_1 & 0x1f));
  return;
}



bool FUN_008a7f70(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1 & 0x3f;
  if ((uVar3 != 0x1d) && (((param_1 >> 0xe & 1) != 0 || ((param_2 >> 0xe & 1) != 0)))) {
    return false;
  }
  if (((param_1 & 0xffff0000) == 0) || ((param_2 & 0xffff0000) == 0)) {
    return true;
  }
  uVar1 = (param_1 ^ param_2) & 0xffff0000;
  uVar2 = param_2 & 0x3f;
  if ((uVar3 == 8) && (uVar2 == 8)) {
    if (uVar1 != 0) {
      return true;
    }
  }
  else {
    if (uVar1 != 0) {
      return (*(uint *)(&DAT_00ba7db0 + uVar3 * 4) & 1 << ((byte)uVar2 & 0x1f)) != 0;
    }
    if ((param_1 & param_2 & 0x8000) != 0) {
      if ((*(uint *)(&DAT_00ba7db0 + uVar3 * 4) & 1 << ((byte)uVar2 & 0x1f)) != 0) {
        uVar3 = (param_1 >> 8 & 0x1f) - (param_2 >> 8 & 0x1f);
        uVar1 = (int)uVar3 >> 0x1f;
        return (uVar3 ^ uVar1) - uVar1 != 1;
      }
      return false;
    }
    if (uVar3 != 8) {
      return false;
    }
    if (uVar2 != 8) {
      return false;
    }
  }
  return (1 << ((byte)(param_2 >> 8) & 0x1f) & *(uint *)(&DAT_00ba7e30 + (param_1 >> 8 & 0x1f) * 4))
         != 0;
}



void FUN_008a8140(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  switch(param_1 & 0x3f) {
  case 1:
    local_c = 0x3f800000;
    uVar1 = 0;
    local_8 = 0;
    goto LAB_008a8168;
  case 2:
  case 10:
    local_c = 0x3f666666;
    local_8 = 0x3e75c28f;
    uVar1 = 0x3f6b851f;
    break;
  case 3:
    *param_2 = 0x3f75c28f;
    param_2[1] = 0x3f4ccccd;
    param_2[2] = 0x3f4ccccd;
    return;
  case 4:
    local_c = 0x3e8a3d71;
    local_8 = 0x3ed1eb85;
    uVar1 = 0x3f70a3d7;
    break;
  case 5:
    local_c = 0x3f59999a;
    local_8 = 0x3f1c28f6;
    uVar1 = 0x3e23d70a;
    goto LAB_008a8168;
  case 6:
    local_c = 0x3f666666;
    local_8 = 0x3f3ae148;
    uVar1 = 0x3ed70a3d;
    break;
  case 7:
    local_c = 0x3e6b851f;
    local_8 = 0x3f7851ec;
    uVar1 = 0x3f666666;
    goto LAB_008a8168;
  case 8:
    local_c = 0;
    local_8 = 0x3f800000;
    uVar1 = 0;
    break;
  case 9:
    local_c = 0x3f4ccccd;
    local_8 = 0x3f1eb852;
    uVar1 = 0x3ee66666;
    goto LAB_008a8168;
  case 0xb:
    local_c = 0x3f028f5c;
    uVar1 = 0x3f7ae148;
    local_8 = 0x3f7ae148;
    break;
  case 0xc:
  case 0xe:
    local_c = 0x3f3ae148;
    local_8 = 0x3f428f5c;
    uVar1 = 0x3f400000;
    goto LAB_008a8168;
  case 0xd:
  case 0x11:
    local_c = 0x3f75c28f;
    local_8 = 0x3f7851ec;
    uVar1 = 0x3f051eb8;
    goto LAB_008a8168;
  default:
    *param_2 = DAT_00b25ac4;
    param_2[1] = DAT_00b25ac8;
    param_2[2] = DAT_00b25acc;
    return;
  case 0x10:
    local_c = 0x3f3ae148;
    local_8 = 0x3f47ae14;
    uVar1 = 0x3f333333;
    break;
  case 0x12:
    uVar1 = 0;
    local_c = 0;
    local_8 = 0x3f333333;
    break;
  case 0x14:
    local_c = 0x3f800000;
    local_8 = 0x3f800000;
    uVar1 = 0;
LAB_008a8168:
    *param_2 = local_c;
    param_2[1] = local_8;
    param_2[2] = uVar1;
    return;
  case 0x15:
    local_c = 0x3f800000;
    local_8 = 0x3f4ccccd;
    uVar1 = 0;
  }
  *param_2 = local_c;
  param_2[1] = local_8;
  param_2[2] = uVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008a83c0(void)

{
  _memset(&DAT_00ba7e30,0,0x80);
  _memset(&DAT_00ba7db0,0xff,0x80);
  _memset(&DAT_00ba7eb0,0,0x80);
  DAT_00ba7e44 = DAT_00ba7e44 | 0x1403000;
  DAT_00ba7e4c = DAT_00ba7e4c | 0x141ff1e;
  DAT_00ba7e5c = DAT_00ba7e5c | 0x10000c0;
  DAT_00ba7e34 = DAT_00ba7e34 | 0x10230c0;
  DAT_00ba7e40 = DAT_00ba7e40 | 0x14230c0;
  DAT_00ba7e3c = DAT_00ba7e3c | 0x14030c0;
  DAT_00ba7e38 = DAT_00ba7e38 | 0x14030c0;
  _DAT_00ba7e54 = _DAT_00ba7e54 | 0x14de080;
  DAT_00ba7e58 = DAT_00ba7e58 | 0x14ce080;
  DAT_00ba7e68 = DAT_00ba7e68 | 0x14837c0;
  _DAT_00ba7e6c = _DAT_00ba7e6c | 0x1482780;
  DAT_00ba7e70 = DAT_00ba7e70 | 0x1482380;
  DAT_00ba7e78 = DAT_00ba7e78 | 0x1000700;
  DAT_00ba7e7c = DAT_00ba7e7c | 0x141e700;
  DAT_00ba7e48 = DAT_00ba7e48 | 0x142791e;
  DAT_00ba7e64 = DAT_00ba7e64 | 0x109c7fe;
  DAT_00ba7e60 = DAT_00ba7e60 | 0x10241fe;
  DAT_00ba7e50 = DAT_00ba7e50 | 0x14df0c0;
  _DAT_00ba7e8c = _DAT_00ba7e8c | 0x1000000;
  DAT_00ba7e74 = DAT_00ba7e74 | 0x1001052;
  DAT_00ba7e90 = DAT_00ba7e90 | 0xcffffe;
  DAT_00ba7e88 = DAT_00ba7e88 | 0x109c7fc;
  DAT_00ba7df8 = DAT_00ba7df8 & 0x82c00001;
  DAT_00ba7e00 = DAT_00ba7e00 & 0xf3fb7eff;
  _DAT_00ba7de8 = _DAT_00ba7de8 & 0xf7fb7fff;
  DAT_00ba7dd0 = DAT_00ba7dd0 & 0xf7cb7fff;
  DAT_00ba7e14 = DAT_00ba7e14 & 0xb7dfe77f;
  DAT_00ba7dec = DAT_00ba7dec & 0x82c00001;
  DAT_00ba7e20 = DAT_00ba7e20 & 0xbffb7fff;
  _DAT_00ba7e24 = _DAT_00ba7e24 & 0xbffb7fff;
  _DAT_00ba7db4 = _DAT_00ba7db4 & 0xbfdb6fff;
  DAT_00ba7dfc = DAT_00ba7dfc & 0xbfdb6fff;
  _DAT_00ba7db8 = _DAT_00ba7db8 & 0xfffb6fff;
  _DAT_00ba7dd4 = _DAT_00ba7dd4 & 0xbfdb6fff;
  _DAT_00ba7dd8 = _DAT_00ba7dd8 & 0xf7db6fff;
  _DAT_00ba7de4 = _DAT_00ba7de4 & 0xbfdb6fff;
  _DAT_00ba7df4 = _DAT_00ba7df4 & 0xbfdb6fff;
  _DAT_00ba7df0 = _DAT_00ba7df0 & 0xf7fb6f3f;
  _DAT_00ba7dcc = _DAT_00ba7dcc & 0xb0da7f37;
  _DAT_00ba7dbc = _DAT_00ba7dbc & 0xbbfb6f3f;
  _DAT_00ba7dc0 = _DAT_00ba7dc0 & 0x77db7fff;
  DAT_00ba7de0 = DAT_00ba7de0 & 0x70f051f1;
  _DAT_00ba7dc4 = _DAT_00ba7dc4 & 0x77db7fff;
  _DAT_00ba7ddc = _DAT_00ba7ddc & 0x39db6fff;
  DAT_00ba7e10 = DAT_00ba7e10 & 0x36db6f7f;
  DAT_00ba7e1c = DAT_00ba7e1c & 0x38ca2a0f;
  DAT_00ba7dc8 = DAT_00ba7dc8 & 0x37da7f37;
  DAT_00ba7e18 = DAT_00ba7e18 & 0x37cb6777;
  DAT_00ba7e04 = DAT_00ba7e04 & 0x30d1500d;
  DAT_00ba7e28 = DAT_00ba7e28 & 0xd15535;
  DAT_00ba7e2c = DAT_00ba7e2c & 0xb2dfe78f;
  _DAT_00ba7ee4 = 2;
  _DAT_00ba7ed4 = 3;
  _DAT_00ba7edc = 4;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008a9100(int param_1)

{
  uint *in_ECX;
  uint uVar1;
  uint local_88;
  char local_84 [128];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_88;
  _sprintf(local_84,"0x%08X",*in_ECX);
  local_88 = FUN_0070fc30("COLFILTER",local_84);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_88);
  _sprintf(local_84,"0x%X",(uint)*(ushort *)((int)in_ECX + 2));
  local_88 = FUN_0070fc30("-GROUP",local_84);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_88);
  local_88 = FUN_0070fc30("-LAYER",(&PTR_s_UNIDENTIFIED_00b2eb40)[*in_ECX & 0x3f]);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_88);
  local_88 = CONCAT31(local_88._1_3_,(char)(*in_ECX >> 0xf)) & 0xffffff01;
  local_88 = FUN_0070f950("-LINK",local_88);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_88);
  uVar1 = *in_ECX;
  if (((byte)uVar1 & 0x3f) == 8) {
    local_88 = FUN_0070fc30("-PART",(&PTR_s_OTHER_00b2ebc0)[uVar1 >> 8 & 0x1f]);
    uVar1 = (uint)*(ushort *)(param_1 + 10);
    if (*(ushort *)(param_1 + 8) <= uVar1) {
      FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
    }
  }
  else {
    if ((uVar1 >> 0xf & 1) == 0) goto LAB_008a92e3;
    local_88 = FUN_0070fb40("-PART",uVar1 >> 8 & 0x1f);
    uVar1 = (uint)*(ushort *)(param_1 + 10);
    if (*(ushort *)(param_1 + 8) <= uVar1) {
      FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
    }
  }
  FUN_0042bb90(uVar1,&local_88);
LAB_008a92e3:
  local_88 = CONCAT31(local_88._1_3_,(char)(*in_ECX >> 0xe)) & 0xffffff01;
  local_88 = FUN_0070f950("-NOCOL",local_88);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_88);
  local_88 = CONCAT31(local_88._1_3_,(char)(*in_ECX >> 0xd)) & 0xffffff01;
  local_88 = FUN_0070f950("-SCALED",local_88);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_88);
  return;
}



void FUN_008a93e0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x18))();
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
    FUN_008a4070();
  }
  return;
}



void FUN_008a9420(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x18))();
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
    FUN_0067a760();
  }
  return;
}



void FUN_008a9460(float param_1)

{
  float fVar1;
  int in_ECX;
  
  fVar1 = param_1 * -0.5;
  param_1 = param_1 * 0.5;
  *(float *)(in_ECX + 0x30) = fVar1;
  *(float *)(in_ECX + 0x34) = fVar1;
  *(float *)(in_ECX + 0x38) = fVar1;
  *(float *)(in_ECX + 0x3c) = fVar1;
  *(float *)(in_ECX + 0x40) = param_1;
  *(float *)(in_ECX + 0x44) = param_1;
  *(float *)(in_ECX + 0x48) = param_1;
  *(float *)(in_ECX + 0x4c) = param_1;
  return;
}



void FUN_008a9510(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a97984;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[4] = 0;
  in_ECX[5] = 0xc11ccccd;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *(undefined1 *)((int)in_ECX + 0x96) = 1;
  in_ECX[8] = 0x400;
  in_ECX[0xc] = 0xc3fa0000;
  in_ECX[0xd] = 0xc3fa0000;
  in_ECX[0xe] = 0xc3fa0000;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0x43fa0000;
  in_ECX[0x11] = 0x43fa0000;
  in_ECX[0x12] = 0x43fa0000;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0x3dcccccd;
  in_ECX[0x15] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1b] = 0x3f19999a;
  in_ECX[0x1c] = 0x3f800000;
  in_ECX[9] = 0x3e4ccccd;
  in_ECX[0x1d] = 4;
  *(undefined1 *)(in_ECX + 10) = 0;
  in_ECX[0x24] = 0x3e4ccccd;
  in_ECX[0x16] = 0x43480000;
  in_ECX[0x17] = 0x3d088889;
  in_ECX[0x1f] = 0x3c23d70a;
  in_ECX[0x20] = 0x14;
  *(undefined1 *)(in_ECX + 0x25) = 1;
  *(undefined1 *)(in_ECX + 0x23) = 1;
  in_ECX[0x21] = 0x3dcccccd;
  in_ECX[0x22] = 0x3f800000;
  *(undefined1 *)(in_ECX + 0x1a) = 2;
  *(undefined1 *)((int)in_ECX + 0x95) = 4;
  in_ECX[0x18] = 0;
  return;
}



void FUN_008a95f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_0089dc10(param_1,param_2);
  *in_ECX = &PTR_LAB_00a979a8;
  return;
}



void FUN_008a9610(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_0089dc10(param_1,param_2);
  *in_ECX = &PTR_LAB_00a97a20;
  return;
}



int * FUN_008a9630(float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  float *param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined4 unaff_retaddr;
  
  fVar3 = param_1;
  switch(param_1) {
  case 1.4013e-45:
    fVar1 = param_5[5];
    param_1 = param_5[10];
    fVar2 = *param_5;
    iVar4 = *DAT_00ba7d98;
    if ((param_1 + fVar1 + fVar2) * 0.1 <=
        ABS(fVar2 - fVar1) + ABS(fVar2 - param_1) + ABS(fVar1 - param_1)) goto LAB_008a966a;
    goto LAB_008a9751;
  case 2.8026e-45:
    iVar4 = *DAT_00ba7d98;
LAB_008a9751:
    iVar4 = (**(code **)(iVar4 + 0x10))(0xf0,0x2b);
    *(undefined2 *)(iVar4 + 4) = 0xf0;
    piVar5 = (int *)FUN_008a95f0(unaff_retaddr,param_1);
    break;
  case 4.2039e-45:
    iVar4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0xf0,0x2b);
    *(undefined2 *)(iVar4 + 4) = 0xf0;
    piVar5 = (int *)FUN_008a9610(unaff_retaddr,param_1);
    break;
  case 5.60519e-45:
    iVar4 = *DAT_00ba7d98;
LAB_008a966a:
    iVar4 = (**(code **)(iVar4 + 0x10))(0x100,0x2b);
    *(undefined2 *)(iVar4 + 4) = 0x100;
    piVar5 = (int *)FUN_008ead40(unaff_retaddr,param_1);
    break;
  case 7.00649e-45:
    iVar4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x100,0x2b);
    *(undefined2 *)(iVar4 + 4) = 0x100;
    piVar5 = (int *)FUN_008ea750(unaff_retaddr,param_1);
    break;
  case 8.40779e-45:
    iVar4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x100,0x2b);
    *(undefined2 *)(iVar4 + 4) = 0x100;
    piVar5 = (int *)FUN_008ea140(unaff_retaddr,param_1);
    break;
  default:
    iVar4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x100,0x2b);
    *(undefined2 *)(iVar4 + 4) = 0x100;
    piVar5 = (int *)FUN_008ea030(unaff_retaddr,param_1);
  }
  if (fVar3 != 8.40779e-45) {
    (**(code **)(*piVar5 + 0x30))(param_5);
    (**(code **)(*piVar5 + 0x40))(param_3);
    (**(code **)(*piVar5 + 0x20))(unaff_retaddr);
  }
  *(undefined2 *)((int)piVar5 + 0xbe) = 0x14;
  piVar5[0x2d] = (int)param_5;
  piVar5[0x2e] = param_6;
  return piVar5;
}



void FUN_008a9830(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[0x14];
  *in_ECX = &PTR_FUN_00a97a98;
  iVar3 = (**(code **)(*piVar1 + 8))();
  if ((((iVar3 == 6) && (puVar2 = (undefined4 *)piVar1[0x3c], puVar2 != (undefined4 *)0x0)) &&
      (*(short *)(puVar2 + 1) != 0)) &&
     (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
     *(short *)((int)puVar2 + 6) == 0)) {
    (**(code **)*puVar2)(1);
  }
  iVar3 = (**(code **)(*(int *)in_ECX[0x14] + 8))();
  if (((iVar3 == 7) && (puVar2 = (undefined4 *)piVar1[0x3c], puVar2 != (undefined4 *)0x0)) &&
     ((*(short *)(puVar2 + 1) != 0 &&
      (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
      *(short *)((int)puVar2 + 6) == 0)))) {
    (**(code **)*puVar2)(1);
  }
  if (((short)piVar1[1] != 0) &&
     (*(short *)((int)piVar1 + 6) = *(short *)((int)piVar1 + 6) + -1,
     *(short *)((int)piVar1 + 6) == 0)) {
    (**(code **)*piVar1)(1);
  }
  FUN_008a6900();
  return;
}



undefined4 FUN_008a98d0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x50) + 8))();
  if (iVar1 != 6) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x50) + 8))();
    if (iVar1 != 7) {
      return 0;
    }
  }
  return *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0xf0);
}



void FUN_008a9910(byte param_1)

{
  FUN_008a9830();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008a9970(int param_1,float *param_2)

{
  int iVar1;
  int *in_ECX;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  (**(code **)(*in_ECX + 0xc))(&DAT_00b2f090,0,&local_30);
  fVar2 = fStack_2c - fStack_3c;
  fVar4 = fStack_28 - fStack_38;
  fVar6 = fStack_24 - fStack_34;
  *param_2 = fVar2;
  param_2[1] = fVar4;
  param_2[2] = fVar6;
  param_2[3] = fStack_20 - local_30;
  iVar1 = *(int *)(param_1 + 0x50);
  fVar3 = (fStack_3c + fStack_2c) * 0.5 - *(float *)(iVar1 + 0x90);
  fVar5 = (fStack_38 + fStack_28) * 0.5 - *(float *)(iVar1 + 0x94);
  fVar7 = (fStack_34 + fStack_24) * 0.5 - *(float *)(iVar1 + 0x98);
  *(float *)(iVar1 + 0xb0) =
       SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar2 * fVar2) * 0.5 +
       SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar3 * fVar3);
  return;
}



void FUN_008a9a60(void)

{
  float fVar1;
  float *in_ECX;
  int in_EDX;
  
  fVar1 = in_ECX[1];
  if (*in_ECX < in_ECX[1]) {
    fVar1 = *in_ECX;
  }
  if (in_ECX[2] <= fVar1) {
    fVar1 = in_ECX[2];
  }
  if (fVar1 < 0.5) {
    *(float *)(in_EDX + 0x20) = fVar1 * 0.2;
    return;
  }
  *(undefined4 *)(in_EDX + 0x20) = 0x3dcccccd;
  return;
}



void FUN_008a9ab0(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  int in_ECX;
  undefined1 local_10 [8];
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  
  if ((*(int *)(in_ECX + 8) != 0) && (*(int *)(*(int *)(in_ECX + 8) + 0x88) != 0)) {
    local_8 = param_1;
    local_7 = param_2;
    local_6 = param_3;
    local_10[0] = 4;
    FUN_00898820(local_10);
    return;
  }
  FUN_008cd4e0();
  return;
}



undefined4 FUN_008a9b20(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  undefined1 local_20 [8];
  int local_18;
  
  iVar1 = *(int *)(in_ECX + 8);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x88) != 0) {
      local_20[0] = 5;
      local_18 = param_1;
      FUN_00898820(local_20);
      return 0;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x88) = *(int *)(iVar1 + 0x88) + 1;
      FUN_008cca80(*(undefined4 *)(in_ECX + 8));
    }
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x14);
  if (((puVar2 != (undefined4 *)0x0) && (*(short *)(puVar2 + 1) != 0)) &&
     (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
     *(short *)((int)puVar2 + 6) == 0)) {
    (**(code **)*puVar2)(1);
  }
  *(int *)(in_ECX + 0x14) = param_1;
  if (*(short *)(param_1 + 4) != 0) {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  }
  FUN_008a9970();
  if ((puVar2 != (undefined4 *)0x0) && (*(int *)(in_ECX + 0x34) != 0x7f7fffff)) {
    *(undefined4 *)(in_ECX + 0x34) = 0xbf800000;
  }
  if (*(float *)(in_ECX + 0x34) < 0.0 != (*(float *)(in_ECX + 0x34) == 0.0)) {
    FUN_008a9a60();
  }
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_008dc4a0(*(int *)(in_ECX + 8));
  }
  FUN_008dbf20();
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_008cc800(*(int *)(in_ECX + 8));
    iVar1 = *(int *)(in_ECX + 8);
    iVar3 = *(int *)(iVar1 + 0x88) + -1;
    *(int *)(iVar1 + 0x88) = iVar3;
    if (((iVar3 == 0) && (*(int *)(iVar1 + 0x84) != 0)) && (*(char *)(iVar1 + 0x90) == '\0')) {
      FUN_00899210();
    }
  }
  return 1;
}



void FUN_008a9c60(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x50) + 0x40))(param_1);
  FUN_008a9970();
  return;
}



void FUN_008a9c90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  if ((*(int **)(in_ECX + 100) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(in_ECX + 100) + 0x10))(), iVar1 == param_1)) {
    return;
  }
  if (param_1 == 1) {
    FUN_008a62c0(&PTR_PTR_00b2fd60);
  }
  else if (param_1 == 2) {
    iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x70,0x28);
    *(undefined2 *)(iVar1 + 4) = 0x70;
    puVar2 = (undefined4 *)FUN_008e90a0();
    FUN_008a62c0(puVar2);
    if ((*(short *)(puVar2 + 1) != 0) &&
       (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
       *(short *)((int)puVar2 + 6) == 0)) {
      (**(code **)*puVar2)(1);
      return;
    }
  }
  return;
}



void FUN_008a9d10(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int local_c;
  undefined1 local_8 [4];
  int local_4;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x88) != 0) {
      local_8[0] = 0x15;
      local_4 = param_1;
      FUN_00898820(local_8);
      return;
    }
    *(undefined4 *)(iVar2 + 0x88) = 1;
    local_c = param_1;
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_008d7400(&local_c,1,iVar2);
    }
    (**(code **)(**(int **)(iVar2 + 8) + 0x1c))(&local_c,1,iVar2);
    pcVar3 = (char *)FUN_008a63f0(local_8);
    if (*pcVar3 == '\0') {
      if ((*(char *)(iVar2 + 0xa6) != '\0') && (*(char *)(param_1 + 0x91) == '\0')) {
        FUN_008a6410();
      }
      FUN_008dd030(iVar2,param_1);
    }
    piVar1 = (int *)(iVar2 + 0x88);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (*(int *)(iVar2 + 0x84) != 0)) && (*(char *)(iVar2 + 0x90) == '\0')) {
      FUN_00899210();
    }
  }
  return;
}



void FUN_008a9de0(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x50) + 0x44))(param_1);
  FUN_008a9d10();
  return;
}



void FUN_008a9e00(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x50) + 0x48))(param_1);
  FUN_008a9d10();
  return;
}



void FUN_008a9e20(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x50) + 0x4c))(param_1,param_2);
  FUN_008a9d10();
  return;
}



void FUN_008a9e50(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  int iVar7;
  int *piVar8;
  
  uVar4 = *(uint *)(in_ECX + 0x4c) & 0x3fffffff;
  if ((int)uVar4 < *(int *)(param_1 + 0x48)) {
    if (-1 < (int)*(uint *)(in_ECX + 0x4c)) {
      FUN_008a75d0(*(undefined4 *)(in_ECX + 0x44),uVar4 << 4,0x14);
    }
    uVar5 = FUN_008a7560(*(int *)(param_1 + 0x48) << 4,0x14);
    *(undefined4 *)(in_ECX + 0x44) = uVar5;
    *(uint *)(in_ECX + 0x4c) = *(uint *)(in_ECX + 0x4c) & 0x40000000 | *(uint *)(param_1 + 0x48);
  }
  iVar7 = *(int *)(param_1 + 0x48);
  puVar2 = *(undefined4 **)(in_ECX + 0x44);
  *(int *)(in_ECX + 0x48) = iVar7;
  iVar3 = *(int *)(param_1 + 0x44);
  if (0 < iVar7) {
    puVar6 = puVar2;
    do {
      puVar1 = (undefined4 *)((iVar3 - (int)puVar2) + (int)puVar6);
      *puVar6 = *puVar1;
      puVar6[1] = puVar1[1];
      puVar6[2] = puVar1[2];
      iVar7 = iVar7 + -1;
      puVar6[3] = puVar1[3];
      puVar6 = puVar6 + 4;
    } while (iVar7 != 0);
  }
  iVar7 = 0;
  if (0 < *(int *)(in_ECX + 0x48)) {
    piVar8 = *(int **)(in_ECX + 0x44);
    while (*piVar8 != 0x1140) {
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 4;
      if (*(int *)(in_ECX + 0x48) <= iVar7) {
        return;
      }
    }
    piVar8 = *(int **)(in_ECX + 0x44) + iVar7 * 4 + 2;
    if (piVar8 != (int *)0x0) {
      *(undefined1 *)piVar8 = 0xfd;
      *(undefined1 *)((int)piVar8 + 1) = 0;
    }
  }
  return;
}



void FUN_008a9f50(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  FUN_008a6850(param_1[1]);
  *in_ECX = &PTR_FUN_00a97a98;
  *(undefined1 *)(in_ECX + 0x16) = *(undefined1 *)(param_1 + 2);
  *(undefined2 *)((int)in_ECX + 0x8e) = *(undefined2 *)((int)param_1 + 10);
  in_ECX[0xc] = *param_1;
  cVar1 = *(char *)(param_1 + 0x2c);
  *(bool *)((int)in_ECX + 0x91) = cVar1 == '\a';
  if (cVar1 == '\a') {
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x100,0x2b);
    *(undefined2 *)(iVar2 + 4) = 0x100;
    iVar2 = FUN_008ea030(param_1 + 4,param_1 + 8);
    in_ECX[0x14] = iVar2;
    *(undefined4 *)(iVar2 + 0xb4) = param_1[0x29];
    *(undefined4 *)(iVar2 + 0xb8) = param_1[0x2a];
    FUN_0089db80(1);
    in_ECX[7] = in_ECX[0x14] + 0x10;
    if ((float)param_1[0x2b] < 0.0 == ((float)param_1[0x2b] == 0.0)) {
      in_ECX[0xd] = param_1[0x2b];
    }
    else {
      in_ECX[0xd] = 0x7f7fffff;
    }
  }
  else {
    uVar3 = FUN_008a9630((int)*(char *)(param_1 + 0x2c),param_1 + 4,param_1 + 8,param_1[0x24],
                         param_1 + 0x14,param_1 + 0x20,param_1[0x29],param_1[0x2a]);
    FUN_0089db80((int)*(char *)((int)param_1 + 0xb2));
    in_ECX[0x14] = uVar3;
    FUN_008a6410();
    (**(code **)(*(int *)in_ECX[0x14] + 0x54))(param_1 + 0xc);
    FUN_008a6410();
    (**(code **)(*(int *)in_ECX[0x14] + 0x58))(param_1 + 0x10);
    in_ECX[7] = in_ECX[0x14] + 0x10;
    FUN_008a9c90((int)*(char *)((int)param_1 + 0xb1));
    in_ECX[0xd] = param_1[0x2b];
  }
  *(undefined4 *)(in_ECX[0x14] + 200) = param_1[0x25];
  *(undefined4 *)(in_ECX[0x14] + 0xcc) = param_1[0x26];
  if (in_ECX[5] != 0) {
    FUN_008a9970();
    if ((float)in_ECX[0xd] < 0.0 != ((float)in_ECX[0xd] == 0.0)) {
      FUN_008a9a60();
    }
  }
  if (*(char *)((int)param_1 + 0xb3) == '\0') {
    if (*(char *)((int)in_ECX + 0x91) == '\0') {
      *(ushort *)((int)in_ECX + 0x2e) = (*(char *)(param_1 + 0x2c) != '\x06') + 2;
    }
    else {
      *(undefined2 *)((int)in_ECX + 0x2e) = 1;
    }
  }
  else {
    *(short *)((int)in_ECX + 0x2e) = (short)*(char *)((int)param_1 + 0xb3);
  }
  *(undefined1 *)(in_ECX + 0x24) = *(undefined1 *)(param_1 + 0x2d);
  in_ECX[0x17] = param_1[0x27];
  in_ECX[0x18] = param_1[0x28];
  if (*(char *)((int)in_ECX + 0x91) == '\0') {
    iVar2 = (**(code **)(*(int *)in_ECX[0x14] + 8))();
    if (iVar2 != 6) {
      *(undefined1 *)((int)in_ECX + 0x92) = 0;
      return;
    }
  }
  *(undefined1 *)((int)in_ECX + 0x92) = 1;
  return;
}



void FUN_008aa1a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int in_ECX;
  float10 fVar6;
  
  *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(in_ECX + 0x90);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)(in_ECX + 0x8e);
  if (*(int **)(in_ECX + 100) == (int *)0x0) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)(**(int **)(in_ECX + 100) + 0x10))();
  }
  *(undefined1 *)((int)param_1 + 0xb1) = uVar5;
  param_1[0x27] = *(undefined4 *)(in_ECX + 0x5c);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(in_ECX + 0x58);
  param_1[0x28] = *(undefined4 *)(in_ECX + 0x60);
  param_1[0x25] = *(undefined4 *)(*(int *)(in_ECX + 0x50) + 200);
  param_1[0x26] = *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0xcc);
  iVar1 = *(int *)(in_ECX + 0x50);
  uVar2 = *(undefined4 *)(iVar1 + 0xd4);
  uVar3 = *(undefined4 *)(iVar1 + 0xd8);
  uVar4 = *(undefined4 *)(iVar1 + 0xdc);
  param_1[0xc] = *(undefined4 *)(iVar1 + 0xd0);
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  iVar1 = *(int *)(in_ECX + 0x50);
  uVar2 = *(undefined4 *)(iVar1 + 0xe4);
  uVar3 = *(undefined4 *)(iVar1 + 0xe8);
  uVar4 = *(undefined4 *)(iVar1 + 0xec);
  param_1[0x10] = *(undefined4 *)(iVar1 + 0xe0);
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar3;
  param_1[0x13] = uVar4;
  fVar6 = (float10)FUN_0089da90();
  param_1[0x24] = (float)fVar6;
  (**(code **)(**(int **)(in_ECX + 0x50) + 0x28))(param_1 + 0x14);
  uVar5 = (**(code **)(**(int **)(in_ECX + 0x50) + 8))();
  *(undefined1 *)(param_1 + 0x2c) = uVar5;
  *(undefined1 *)((int)param_1 + 0xb2) = *(undefined1 *)(*(int *)(in_ECX + 0x50) + 0xbc);
  param_1[0x29] = *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0xb4);
  param_1[0x2a] = *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0xb8);
  iVar1 = *(int *)(in_ECX + 0x50);
  uVar2 = *(undefined4 *)(iVar1 + 0x44);
  uVar3 = *(undefined4 *)(iVar1 + 0x48);
  uVar4 = *(undefined4 *)(iVar1 + 0x4c);
  param_1[4] = *(undefined4 *)(iVar1 + 0x40);
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  iVar1 = *(int *)(in_ECX + 0x50);
  uVar2 = *(undefined4 *)(iVar1 + 0x84);
  uVar3 = *(undefined4 *)(iVar1 + 0x88);
  uVar4 = *(undefined4 *)(iVar1 + 0x8c);
  param_1[8] = *(undefined4 *)(iVar1 + 0x80);
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  iVar1 = *(int *)(in_ECX + 0x50);
  uVar2 = *(undefined4 *)(iVar1 + 0x94);
  uVar3 = *(undefined4 *)(iVar1 + 0x98);
  uVar4 = *(undefined4 *)(iVar1 + 0x9c);
  param_1[0x20] = *(undefined4 *)(iVar1 + 0x90);
  param_1[0x21] = uVar2;
  param_1[0x22] = uVar3;
  param_1[0x23] = uVar4;
  param_1[1] = *(undefined4 *)(in_ECX + 0x14);
  *param_1 = *(undefined4 *)(in_ECX + 0x30);
  param_1[0x2b] = *(undefined4 *)(in_ECX + 0x34);
  *(undefined1 *)((int)param_1 + 0xb3) = *(undefined1 *)(in_ECX + 0x2e);
  return;
}



void FUN_008aa2d0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_008a6740(1);
    *param_1 = &PTR_FUN_00a97a98;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined ** FUN_008aa2f0(void)

{
  FUN_008a6740(0);
  return &PTR_FUN_00a97a98;
}



undefined4 FUN_008aa350(float *param_1)

{
  float *in_ECX;
  
  if (((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) {
    return 1;
  }
  return 0;
}



undefined4 FUN_008aa390(float *param_1)

{
  float *in_ECX;
  
  if (((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) {
    return 0;
  }
  return 1;
}



undefined4 FUN_008aa3e0(void)

{
  int iVar1;
  int in_ECX;
  
  if (-1 < *(char *)(in_ECX + 8)) {
    return 0;
  }
  iVar1 = FUN_00700010(&DAT_00ba8000);
  if (iVar1 != 0) {
    FUN_006ffe90(iVar1);
    return 1;
  }
  return 0;
}



void FUN_008aa420(int param_1)

{
  float fVar1;
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 9) & 1) != 0) &&
     (fVar1 = *(float *)(in_ECX + 0x58), !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0))) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(in_ECX + 0x58);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(in_ECX + 0x5c);
    *(undefined4 *)(in_ECX + 0x5c) = 0xbf800000;
    *(undefined4 *)(in_ECX + 0x58) = 0xbf800000;
  }
  return;
}



void FUN_008aa460(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0xbf800000;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  return;
}



void FUN_008aa480(uint param_1)

{
  float *pfVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c5a7b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != *(uint *)(in_ECX + 8)) {
    if (param_1 < *(uint *)(in_ECX + 0xc)) {
      iVar6 = param_1 * 0xc;
      uVar7 = param_1;
      do {
        pfVar1 = (float *)(iVar6 + *(int *)(in_ECX + 4));
        if (((*pfVar1 != -1.0) || (pfVar1[1] != 0.0)) || (pfVar1[2] != 0.0)) {
          *pfVar1 = -1.0;
          pfVar1[1] = 0.0;
          pfVar1[2] = 0.0;
          *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 0xc;
      } while (uVar7 < *(uint *)(in_ECX + 0xc));
      *(uint *)(in_ECX + 0xc) = param_1;
    }
    iVar6 = *(int *)(in_ECX + 4);
    *(uint *)(in_ECX + 8) = param_1;
    if (param_1 == 0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      pvVar3 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 0xc >> 0x20) != 0) |
                                    (uint)((ulonglong)param_1 * 0xc),uVar2);
      local_4 = 0;
      if (pvVar3 == (void *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        _vector_constructor_iterator_(pvVar3,0xc,param_1,FUN_008aa460);
      }
      uVar2 = 0;
      *(void **)(in_ECX + 4) = pvVar3;
      if (*(int *)(in_ECX + 0xc) != 0) {
        iVar5 = 0;
        do {
          puVar4 = (undefined4 *)(*(int *)(in_ECX + 4) + iVar5);
          *puVar4 = *(undefined4 *)(iVar5 + iVar6);
          puVar4[1] = *(undefined4 *)(iVar5 + 4 + iVar6);
          uVar2 = uVar2 + 1;
          puVar4[2] = *(undefined4 *)(iVar5 + 8 + iVar6);
          iVar5 = iVar5 + 0xc;
        } while (uVar2 < *(uint *)(in_ECX + 0xc));
      }
      uVar2 = *(uint *)(in_ECX + 0xc);
      if (uVar2 < *(uint *)(in_ECX + 8)) {
        iVar5 = uVar2 * 0xc;
        do {
          puVar4 = (undefined4 *)(*(int *)(in_ECX + 4) + iVar5);
          *puVar4 = 0xbf800000;
          puVar4[1] = 0;
          uVar2 = uVar2 + 1;
          puVar4[2] = 0;
          iVar5 = iVar5 + 0xc;
        } while (uVar2 < *(uint *)(in_ECX + 8));
      }
    }
    FUN_00401f20(iVar6);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008aa660(void)

{
  undefined4 *puVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    iVar3 = 0;
    do {
      puVar1 = (undefined4 *)(*(int *)(in_ECX + 4) + iVar3);
      *puVar1 = 0xbf800000;
      puVar1[1] = 0;
      uVar2 = uVar2 + 1;
      puVar1[2] = 0;
      iVar3 = iVar3 + 0xc;
    } while (uVar2 < *(uint *)(in_ECX + 0xc));
    *(undefined4 *)(in_ECX + 0xc) = 0;
    *(undefined4 *)(in_ECX + 0x10) = 0;
    return;
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a97abc;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_008aa710(uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0xbf800000;
  if (param_1 < *(uint *)(in_ECX + 0xc)) {
    local_4 = 0;
    local_8 = 0;
    cVar2 = FUN_008aa390(&local_c);
    local_c = 0xbf800000;
    local_4 = 0;
    local_8 = 0;
    if (cVar2 == '\0') {
      cVar2 = FUN_008aa390(&local_c);
      if (cVar2 != '\0') {
        *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
      }
    }
    else {
      cVar2 = FUN_008aa350(&local_c);
      if (cVar2 != '\0') {
        *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
      }
    }
  }
  else {
    local_4 = 0;
    local_8 = 0;
    *(uint *)(in_ECX + 0xc) = param_1 + 1;
    cVar2 = FUN_008aa390(&local_c);
    if (cVar2 != '\0') {
      *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
    }
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 4) + param_1 * 0xc);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  return;
}



void FUN_008aa7f0(void)

{
  int in_ECX;
  
  FUN_008aa660();
  *(undefined4 *)(in_ECX + 0x5c) = 0xbf800000;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0xbf800000;
  return;
}



void FUN_008aa810(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d6d18;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00715990(uVar1);
  *in_ECX = &PTR_FUN_00a97ac4;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x10] = &PTR__scalar_deleting_destructor__00a97abc;
  in_ECX[0x15] = 1;
  in_ECX[0x16] = 0xbf800000;
  in_ECX[0xf] = 0;
  in_ECX[0x17] = 0xbf800000;
  in_ECX[0x18] = 0;
  in_ECX[0x15] = 4;
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
  local_10 = FUN_00401f00(100,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_008aa810();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 FUN_008aa990(float param_1,float *param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  float *pfVar8;
  float10 fVar9;
  float local_c;
  
  iVar5 = *(int *)(in_ECX + 0x50);
  if (iVar5 == 0) {
    return 0;
  }
  if (iVar5 == 1) {
    *param_2 = *(float *)(*(int *)(in_ECX + 0x44) + 4);
    *param_3 = *(float *)(*(int *)(in_ECX + 0x44) + 8);
    return 1;
  }
  pfVar8 = *(float **)(in_ECX + 0x44);
  uVar1 = iVar5 - 1;
  local_c = pfVar8[*(int *)(in_ECX + 0x3c) * 3];
  if (param_1 < local_c) {
    *(undefined4 *)(in_ECX + 0x3c) = 0;
    local_c = *pfVar8;
  }
  uVar7 = *(int *)(in_ECX + 0x3c) + 1;
  if (3 < (int)((uVar1 - uVar7) + 1)) {
    pfVar8 = pfVar8 + uVar7 * 3 + 6;
    do {
      fVar2 = pfVar8[-6];
      fVar3 = fVar2;
      if (param_1 <= fVar2) goto LAB_008aaafb;
      *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + 1;
      local_c = pfVar8[-3];
      iVar6 = *(int *)(in_ECX + 0x3c);
      if (param_1 <= local_c) {
        uVar7 = uVar7 + 1;
        fVar3 = local_c;
        local_c = fVar2;
        goto LAB_008aaafb;
      }
      *(int *)(in_ECX + 0x3c) = iVar6 + 1;
      fVar2 = *pfVar8;
      if (param_1 <= fVar2) {
        uVar7 = uVar7 + 2;
        fVar3 = fVar2;
        goto LAB_008aaafb;
      }
      *(int *)(in_ECX + 0x3c) = iVar6 + 2;
      local_c = pfVar8[3];
      if (param_1 <= local_c) {
        uVar7 = uVar7 + 3;
        fVar3 = local_c;
        local_c = fVar2;
        goto LAB_008aaafb;
      }
      uVar7 = uVar7 + 4;
      pfVar8 = pfVar8 + 0xc;
      *(int *)(in_ECX + 0x3c) = iVar6 + 3;
    } while (uVar7 <= iVar5 - 4U);
  }
  fVar3 = local_c;
  if (uVar7 <= uVar1) {
    pfVar8 = (float *)(*(int *)(in_ECX + 0x44) + uVar7 * 0xc);
    do {
      fVar3 = *pfVar8;
      if (param_1 <= fVar3) break;
      *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + 1;
      uVar7 = uVar7 + 1;
      pfVar8 = pfVar8 + 3;
      local_c = fVar3;
    } while (uVar7 <= uVar1);
  }
LAB_008aaafb:
  iVar5 = *(int *)(in_ECX + 0x44) + *(int *)(in_ECX + 0x3c) * 0xc;
  fVar2 = *(float *)(iVar5 + 4);
  fVar4 = *(float *)(iVar5 + 8);
  if (fVar3 - local_c == 0.0) {
    *param_2 = fVar2;
    *param_3 = fVar4;
    return 1;
  }
  fVar3 = (param_1 - local_c) / (fVar3 - local_c);
  fVar9 = (float10)FUN_006d3690(fVar3,fVar2,
                                *(undefined4 *)(uVar7 * 0xc + 4 + *(int *)(in_ECX + 0x44)));
  *param_2 = (float)fVar9;
  fVar9 = (float10)FUN_006d3690(fVar3,fVar4,
                                *(undefined4 *)(uVar7 * 0xc + 8 + *(int *)(in_ECX + 0x44)));
  *param_3 = (float)fVar9;
  return 1;
}



void FUN_008aabe0(void)

{
  float fVar1;
  int in_ECX;
  float local_c;
  float local_8;
  
  local_c = 0.0;
  local_8 = 0.0;
  if (*(int *)(in_ECX + 0x50) != 0) {
    local_c = **(float **)(in_ECX + 0x44);
    fVar1 = *(float *)(in_ECX + 0x14);
    local_8 = *(float *)(in_ECX + 0x18);
    if ((fVar1 <= local_c) && (fVar1 != 3.4028235e+38)) {
      local_c = fVar1;
    }
    fVar1 = (*(float **)(in_ECX + 0x44))[*(int *)(in_ECX + 0x50) * 3 + -3];
    if ((fVar1 < local_8) || (local_8 == -3.4028235e+38)) {
      *(float *)(in_ECX + 0x14) = local_c;
      *(float *)(in_ECX + 0x18) = fVar1;
      return;
    }
  }
  *(float *)(in_ECX + 0x14) = local_c;
  *(float *)(in_ECX + 0x18) = local_8;
  return;
}



void FUN_008aac90(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a97ac4;
  in_ECX[0x10] = &PTR__scalar_deleting_destructor__00a97abc;
  FUN_00401f20(in_ECX[0x11]);
  FUN_00715a70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_008aad60(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *in_ECX;
  undefined4 unaff_ESI;
  float10 fVar4;
  undefined4 auStack_8 [2];
  
  if (((in_ECX[0xc] != 0) && ((*(byte *)(in_ECX + 2) >> 3 & 1) != 0)) && (in_ECX[0x14] != 0)) {
    iVar3 = FUN_00497420(in_ECX[0xc]);
    if (iVar3 == 0) {
      in_ECX[8] = param_1;
    }
    else {
      fVar4 = (float10)(**(code **)(*in_ECX + 100))(param_1);
      cVar1 = FUN_008aa990((float)fVar4,&stack0xfffffff4,auStack_8);
      if (cVar1 != '\0') {
        if ((float)in_ECX[0x16] < 0.0) {
          in_ECX[0x16] = *(int *)(iVar3 + 0x14);
          in_ECX[0x17] = *(int *)(iVar3 + 0x18);
        }
        *(undefined4 *)(iVar3 + 0x14) = unaff_ESI;
        *(undefined4 *)(iVar3 + 0x18) = auStack_8[0];
      }
      if (((float)in_ECX[6] == (float)fVar4) && (bVar2 = (byte)(short)in_ECX[2], (bVar2 & 6) == 4))
      {
        if ((bVar2 >> 6 & 1) != 0) {
          FUN_008aa7f0();
        }
        FUN_008aa3e0();
        FUN_008aa420(iVar3);
        (**(code **)(*in_ECX + 0x50))();
        return;
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008aae50(int param_1)

{
  char cVar1;
  ushort uVar2;
  float *pfVar3;
  char *pcVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  undefined1 auStack_b4 [32];
  int local_94;
  uint local_90;
  int local_8c;
  char local_88 [68];
  uint local_44;
  
  local_44 = DAT_00b30aac ^ (uint)auStack_b4;
  local_8c = in_ECX;
  FUN_00716140();
  local_94 = FUN_0070f910();
  uVar2 = *(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10();
  }
  FUN_0042bb90(uVar2,&local_94);
  local_94 = FUN_0070fb40("iKeys",*(undefined4 *)(in_ECX + 0x50));
  uVar2 = *(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10();
  }
  FUN_0042bb90(uVar2,&local_94);
  local_90 = 0;
  if (*(int *)(in_ECX + 0x50) != 0) {
    local_94 = 0;
    do {
      pfVar3 = (float *)(*(int *)(in_ECX + 0x44) + local_94);
      _sprintf(local_88,"Key%d: %.4f, %.4f, %.4f",local_90,(double)*pfVar3,(double)pfVar3[1],
               (double)pfVar3[2]);
      pcVar4 = local_88;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar5 = FUN_00401f00();
      pcVar4 = local_88;
      iVar6 = iVar5 - (int)pcVar4;
      do {
        cVar1 = *pcVar4;
        pcVar4[iVar6] = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar2 = *(ushort *)(param_1 + 10);
      uVar7 = (uint)uVar2;
      if (*(ushort *)(param_1 + 8) <= uVar7) {
        FUN_004e4a10();
      }
      if (uVar7 < *(ushort *)(param_1 + 10)) {
        if (iVar5 == 0) {
          if (*(int *)(*(int *)(param_1 + 4) + uVar7 * 4) != 0) {
            *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(param_1 + 4) + uVar7 * 4) == 0) {
          *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(param_1 + 10) = uVar2 + 1;
        if (iVar5 != 0) {
          *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
        }
      }
      local_94 = local_94 + 0xc;
      local_90 = local_90 + 1;
      *(int *)(*(int *)(param_1 + 4) + uVar7 * 4) = iVar5;
      in_ECX = local_8c;
    } while (local_90 < *(uint *)(local_8c + 0x50));
  }
  return;
}



void FUN_008ab000(undefined4 param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x4c);
  if (*(uint *)(in_ECX + 0x48) <= uVar1) {
    FUN_008aa480(*(int *)(in_ECX + 0x54) + uVar1);
  }
  FUN_008aa710(uVar1,param_1);
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  FUN_008aabe0();
  return;
}



void FUN_008ab040(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar6 = param_1;
  if (param_1 != (int *)0x0) {
    iVar7 = FUN_00497420(param_1);
    if (iVar7 != 0) {
      uVar8 = 0;
      if (*(int *)(iVar7 + 0x10) != 0) {
        iVar4 = *(int *)(*(int *)(iVar7 + 0x10) + 8);
        if ((iVar4 == 0) || (iVar4 == -0x14)) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(iVar4 + 0x30);
        }
      }
      uVar8 = uVar8 >> 8 & 0x1f;
      if ((char)param_3 == '\0') {
        param_1 = *(int **)(&DAT_00b2ec68 + uVar8 * 8);
        fVar1 = *(float *)(&DAT_00b2ec6c + uVar8 * 8);
      }
      else {
        param_1 = (int *)(&DAT_00b2ed68)[uVar8 * 2];
        fVar1 = (float)(&DAT_00b2ed6c)[uVar8 * 2];
      }
      fVar2 = (float)param_1;
      if (*(float *)(iVar7 + 0x14) < (float)param_1) {
        fVar2 = *(float *)(iVar7 + 0x14);
      }
      fVar3 = fVar1;
      if (*(float *)(iVar7 + 0x18) < fVar1) {
        fVar3 = *(float *)(iVar7 + 0x18);
      }
      piVar9 = (int *)FUN_00700010(&DAT_00ba7f3c);
      if ((piVar9 != (int *)0x0) && ((uint)piVar9[0x18] < 2)) {
        FUN_008aa7f0();
        piVar9[0x18] = 1;
        if (piVar9[0x14] == 0) {
          _vector_constructor_iterator_(&local_24,0xc,3,FUN_008aa460);
          local_24 = 0;
          local_14 = (float)param_1;
          local_18 = 0x3e19999a;
          local_8 = 0x3f800000;
          local_4 = 0x3f800000;
          local_c = 0x3f000000;
          local_20 = fVar2;
          local_1c = fVar3;
          local_10 = fVar1;
          FUN_008aa480(3);
          puVar11 = &local_24;
          iVar7 = 3;
          do {
            FUN_008ab000(puVar11);
            puVar11 = puVar11 + 3;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          piVar9[5] = 0;
          pcVar5 = *(code **)(*piVar9 + 0x4c);
          piVar9[6] = 0x3f800000;
          piVar9[3] = 0x3f800000;
          *(ushort *)(piVar9 + 2) = *(ushort *)(piVar9 + 2) & 0xfff5 | 0x1c5;
          piVar9[4] = 0;
          (*pcVar5)(0xff7fffff);
        }
      }
    }
    iVar7 = (**(code **)(*piVar6 + 8))();
    if (iVar7 != 0) {
      uVar8 = 0;
      if (*(short *)(iVar7 + 0xb6) != 0) {
        if (*(short *)(iVar7 + 0xb6) != 0) goto LAB_008ab1ff;
        uVar10 = 0;
        while( true ) {
          FUN_008ab040(uVar10,param_2,param_3);
          uVar8 = uVar8 + 1;
          if (*(ushort *)(iVar7 + 0xb6) <= uVar8) break;
LAB_008ab1ff:
          uVar10 = *(undefined4 *)(*(int *)(iVar7 + 0xb0) + uVar8 * 4);
        }
      }
    }
  }
  return;
}



void FUN_008ab240(int *param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int *piStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar3 = param_1;
  if (param_1 != (int *)0x0) {
    iVar4 = FUN_00497420(param_1);
    if (iVar4 == 0) {
      iVar4 = FUN_0047fac0(piVar3);
      if (((iVar4 != 0) && (piVar5 = *(int **)(iVar4 + 0x10), piVar5 != (int *)0x0)) &&
         (puVar6 = (uint *)FUN_00497340(&param_1), (*puVar6 & 0x1f00) == 0x1600)) {
        (**(code **)(*piVar5 + 0x9c))(6);
      }
    }
    else {
      piVar5 = *(int **)(iVar4 + 0x10);
      uVar8 = 0;
      if (piVar5 != (int *)0x0) {
        iVar4 = piVar5[2];
        if ((iVar4 == 0) || (iVar4 == -0x14)) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(iVar4 + 0x30);
        }
        uVar8 = uVar8 & 0xffffffc8 | 8;
        if ((iVar4 != 0) && (iVar4 != -0x14)) {
          *(uint *)(iVar4 + 0x30) = uVar8;
        }
        (**(code **)(*piVar5 + 0x80))();
      }
      uVar8 = uVar8 >> 8 & 0x1f;
      param_1 = (int *)(&DAT_00b2ee68)[uVar8];
      piVar5 = (int *)FUN_00700010(&DAT_00ba7f3c);
      if ((piVar5 != (int *)0x0) &&
         (!NAN((float)param_1) && 0.0 < (float)param_1 != ((float)param_1 == 0.0))) {
        uVar7 = (&DAT_00b2e660)[uVar8 * 2];
        uVar1 = (&DAT_00b2e664)[uVar8 * 2];
        FUN_008aa7f0();
        iVar4 = 2;
        piVar5[0x18] = 2;
        if (piVar5[0x14] == 0) {
          _vector_constructor_iterator_(&uStack_18,0xc,2,FUN_008aa460);
          uStack_14 = 0;
          uStack_10 = 0;
          uStack_18 = 0;
          piStack_c = param_1;
          uStack_8 = uVar7;
          uStack_4 = uVar1;
          FUN_008aa480(2);
          puVar9 = &uStack_18;
          do {
            FUN_008ab000(puVar9);
            puVar9 = puVar9 + 3;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          piVar5[5] = param_2;
          pcVar2 = *(code **)(*piVar5 + 0x4c);
          piVar5[6] = (int)param_1;
          piVar5[4] = 0;
          *(ushort *)(piVar5 + 2) = *(ushort *)(piVar5 + 2) & 0xfef5 | 0xc5;
          piVar5[3] = 0x3f800000;
          (*pcVar2)(0xff7fffff);
        }
      }
    }
    iVar4 = (**(code **)(*piVar3 + 8))();
    if (iVar4 != 0) {
      uVar8 = 0;
      if (*(short *)(iVar4 + 0xb6) != 0) {
        if (*(short *)(iVar4 + 0xb6) != 0) goto LAB_008ab404;
        uVar7 = 0;
        while( true ) {
          FUN_008ab240(uVar7,param_2);
          uVar8 = uVar8 + 1;
          if (*(ushort *)(iVar4 + 0xb6) <= uVar8) break;
LAB_008ab404:
          uVar7 = *(undefined4 *)(*(int *)(iVar4 + 0xb0) + uVar8 * 4);
        }
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ab440(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 auStack_64 [4];
  float local_60;
  undefined4 local_5c;
  int local_58;
  int *local_54;
  int local_50;
  undefined1 auStack_4c [12];
  undefined4 local_40;
  int local_3c;
  int local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_64;
  local_54 = param_1;
  local_5c = param_2;
  local_58 = 0;
  if (param_1 != (int *)0x0) {
    piVar2 = (int *)FUN_00497420(param_1);
    if (piVar2 == (int *)0x0) {
      iVar7 = FUN_0047fac0(param_1);
      if ((iVar7 != 0) && (piVar2 = *(int **)(iVar7 + 0x10), piVar2 != (int *)0x0)) {
        puVar6 = (uint *)FUN_00497340(&local_54);
        if ((*puVar6 & 0x1f00) == 0x1600) {
          (**(code **)(*piVar2 + 0x9c))(1);
          if ((char)param_5 == '\0') {
            FUN_004707b0(auStack_4c,_DAT_00b2ec5c);
            uVar5 = FUN_004529e0(&local_40,auStack_4c);
            FUN_005377b0(_DAT_00b2e2e0,uVar5);
          }
        }
      }
    }
    else {
      FUN_0088f040();
      uVar3 = 0;
      if (piVar2[4] != 0) {
        iVar7 = *(int *)(piVar2[4] + 8);
        if ((iVar7 == 0) || (iVar7 == -0x14)) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(uint *)(iVar7 + 0x30);
        }
      }
      local_60 = (float)(&DAT_00b2eee8)[uVar3 >> 8 & 0x1f];
      piVar4 = (int *)FUN_00700010(&DAT_00ba7f3c);
      if ((piVar4 != (int *)0x0) && (!NAN(local_60) && 0.0 < local_60 != (local_60 == 0.0))) {
        if ((char)param_5 == '\0') {
          local_50 = piVar2[5];
          local_58 = piVar2[6];
          FUN_008aa7f0();
          piVar4[0x18] = 2;
          if (piVar4[0x14] == 0) {
            _vector_constructor_iterator_(&local_40,0xc,2,FUN_008aa460);
            local_3c = local_50;
            local_38 = local_58;
            local_40 = 0;
            local_30 = 0;
            local_2c = 0;
            local_34 = local_60;
            FUN_008aa480(2);
            puVar8 = &local_40;
            iVar7 = 2;
            do {
              FUN_008ab000(puVar8);
              puVar8 = puVar8 + 3;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            piVar4[5] = param_4;
            piVar4[6] = (int)local_60;
            *(ushort *)(piVar4 + 2) = *(ushort *)(piVar4 + 2) & 0xfef5 | 0xc5;
            pcVar1 = *(code **)(*piVar4 + 0x4c);
            piVar4[4] = 0;
            piVar4[3] = 0x3f800000;
            (*pcVar1)(0xff7fffff);
            param_1 = local_54;
          }
          iVar7 = FUN_00700010(&DAT_00ba8000);
          if (iVar7 == 0) {
            FUN_004707b0(auStack_4c,_DAT_00b2ec5c);
            uVar5 = FUN_004529e0(&local_40,auStack_4c,_DAT_00b2ec60);
            FUN_008b8590(param_1,uVar5);
          }
        }
        else {
          (**(code **)(*piVar2 + 0x70))(1,0);
        }
      }
    }
    iVar7 = (**(code **)(*param_1 + 8))();
    if (iVar7 != 0) {
      uVar3 = 0;
      if (*(short *)(iVar7 + 0xb6) != 0) {
        if (*(short *)(iVar7 + 0xb6) != 0) goto LAB_008ab6c4;
        uVar5 = 0;
        while( true ) {
          FUN_008ab440(uVar5,local_5c,param_3,param_4,param_5);
          uVar3 = uVar3 + 1;
          if (*(ushort *)(iVar7 + 0xb6) <= uVar3) break;
LAB_008ab6c4:
          uVar5 = *(undefined4 *)(*(int *)(iVar7 + 0xb0) + uVar3 * 4);
        }
      }
    }
  }
  return;
}



void FUN_008ab710(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = param_1;
  FUN_00715d80(param_1,param_2);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(in_ECX + 0x3c);
  FUN_008aa480(*(undefined4 *)(in_ECX + 0x50));
  param_1 = 0;
  if (*(int *)(in_ECX + 0x50) != 0) {
    param_2 = 0;
    do {
      iVar1 = *(int *)(in_ECX + 0x44);
      uVar2 = *(uint *)(iVar3 + 0x4c);
      if (*(uint *)(iVar3 + 0x48) <= uVar2) {
        FUN_008aa480(*(int *)(iVar3 + 0x54) + uVar2);
      }
      FUN_008aa710(uVar2,iVar1 + param_2);
      *(undefined4 *)(iVar3 + 0x3c) = 0;
      FUN_008aabe0();
      param_2 = param_2 + 0xc;
      param_1 = param_1 + 1;
    } while (param_1 < *(uint *)(in_ECX + 0x50));
  }
  return;
}



void FUN_008ab7b0(int param_1)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  uint local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_00715f40(param_1);
  local_10 = 4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),&local_14,4,&local_10,1);
  FUN_008aa480(local_14);
  uVar2 = 0;
  if (local_14 != 0) {
    local_10 = 0;
    do {
      uStack_c = 0xbf800000;
      uStack_4 = local_10;
      uStack_8 = local_10;
      (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),&uStack_c,0xc,0,0);
      uVar1 = *(uint *)(in_ECX + 0x4c);
      if (*(uint *)(in_ECX + 0x48) <= uVar1) {
        FUN_008aa480(*(int *)(in_ECX + 0x54) + uVar1);
      }
      FUN_008aa710(uVar1,&uStack_c);
      *(undefined4 *)(in_ECX + 0x3c) = 0;
      FUN_008aabe0();
      uVar2 = uVar2 + 1;
    } while (uVar2 < local_14);
  }
  return;
}



void FUN_008ab8a0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((param_1 != (int *)0x0) &&
     (puVar2 = (undefined4 *)(**(code **)(*param_1 + 4))(), puVar2 != (undefined4 *)0x0)) {
    while (puVar2 != &DAT_00b3fab0) {
      puVar2 = (undefined4 *)puVar2[1];
      if (puVar2 == (undefined4 *)0x0) {
        FUN_008ab240(param_1,param_2);
        return;
      }
    }
    if (((*(short *)((int)param_1 + 0xb6) != 0) &&
        (piVar1 = *(int **)param_1[0x2c], piVar1 != (int *)0x0)) &&
       (puVar2 = (undefined4 *)(**(code **)(*piVar1 + 4))(), puVar2 != (undefined4 *)0x0)) {
      while (puVar2 != &DAT_00b3fab0) {
        puVar2 = (undefined4 *)puVar2[1];
        if (puVar2 == (undefined4 *)0x0) {
          FUN_008ab240(param_1,param_2);
          return;
        }
      }
      if (((*(short *)((int)piVar1 + 0xb6) != 0) && (*(int *)piVar1[0x2c] != 0)) &&
         ((iVar3 = FUN_00560920(&DAT_00ba7d24,*(undefined4 *)(*(int *)piVar1[0x2c] + 0xa8)),
          iVar3 != 0 && (*(int **)(iVar3 + 0x10) != (int *)0x0)))) {
        (**(code **)(**(int **)(iVar3 + 0x10) + 0x9c))(6);
        FUN_004d6af0(&DAT_00ba7a40);
        FUN_004d6b30(&DAT_00ba7a40);
      }
    }
  }
  FUN_008ab240(param_1,param_2);
  return;
}



undefined4 FUN_008ab9b0(undefined4 param_1)

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
  iVar2 = FUN_00401f00(100,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_008aa810();
  }
  local_4 = 0xffffffff;
  FUN_008ab710(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void thunk_FUN_008de800(void)

{
  FUN_008de800();
  return;
}



void FUN_008aba40(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_30 [44];
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(in_ECX + 0x70) = *param_1;
  *(undefined4 *)(in_ECX + 0x74) = uVar1;
  *(undefined4 *)(in_ECX + 0x78) = uVar2;
  *(undefined4 *)(in_ECX + 0x7c) = uVar3;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  *(undefined4 *)(in_ECX + 0x80) = param_1[4];
  *(undefined4 *)(in_ECX + 0x84) = uVar1;
  *(undefined4 *)(in_ECX + 0x88) = uVar2;
  *(undefined4 *)(in_ECX + 0x8c) = uVar3;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  *(undefined4 *)(in_ECX + 0x90) = param_1[8];
  *(undefined4 *)(in_ECX + 0x94) = uVar1;
  *(undefined4 *)(in_ECX + 0x98) = uVar2;
  *(undefined4 *)(in_ECX + 0x9c) = uVar3;
  uVar1 = param_1[0xd];
  uVar2 = param_1[0xe];
  uVar3 = param_1[0xf];
  *(undefined4 *)(in_ECX + 0xa0) = param_1[0xc];
  *(undefined4 *)(in_ECX + 0xa4) = uVar1;
  *(undefined4 *)(in_ECX + 0xa8) = uVar2;
  *(undefined4 *)(in_ECX + 0xac) = uVar3;
  if (*(int *)(in_ECX + 8) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x14) + 0xc))
              (param_1,*(float *)(*(int *)(*(int *)(in_ECX + 8) + 0x74) + 8) * 0.5,local_30);
    FUN_008de950(local_30);
  }
  return;
}



void FUN_008abac0(undefined4 *param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_30 [44];
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(in_ECX + 0xa0) = *param_1;
  *(undefined4 *)(in_ECX + 0xa4) = uVar1;
  *(undefined4 *)(in_ECX + 0xa8) = uVar2;
  *(undefined4 *)(in_ECX + 0xac) = uVar3;
  if (*(int *)(in_ECX + 8) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x14) + 0xc))
              (in_ECX + 0x70,*(float *)(*(int *)(*(int *)(in_ECX + 8) + 0x74) + 8) * 0.5 + param_2,
               local_30);
    FUN_008de950(local_30);
  }
  return;
}



void FUN_008abb20(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x14) + 0xc))
            (in_ECX + 0x70,*(float *)(*(int *)(*(int *)(in_ECX + 8) + 0x74) + 8) * 0.5,param_1);
  return;
}



undefined4 FUN_008abb50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  undefined1 local_c [8];
  int local_4;
  
  iVar1 = *(int *)(in_ECX + 8);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x88) != 0) {
      local_c[0] = 5;
      local_4 = param_1;
      FUN_00898820(local_c);
      return 0;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x88) = *(int *)(iVar1 + 0x88) + 1;
      FUN_008ccb90(*(undefined4 *)(in_ECX + 8));
    }
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x14);
  if (((puVar2 != (undefined4 *)0x0) && (*(short *)(puVar2 + 1) != 0)) &&
     (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
     *(short *)((int)puVar2 + 6) == 0)) {
    (**(code **)*puVar2)(1);
  }
  *(int *)(in_ECX + 0x14) = param_1;
  if (*(short *)(param_1 + 4) != 0) {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  }
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_008dc650(*(int *)(in_ECX + 8));
  }
  FUN_008de600();
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_008cc950(*(int *)(in_ECX + 8));
    iVar1 = *(int *)(in_ECX + 8);
    iVar3 = *(int *)(iVar1 + 0x88) + -1;
    *(int *)(iVar1 + 0x88) = iVar3;
    if (((iVar3 == 0) && (*(int *)(iVar1 + 0x84) != 0)) && (*(char *)(iVar1 + 0x90) == '\0')) {
      FUN_00899210();
    }
  }
  return 1;
}



void FUN_008abc40(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  FUN_008bc8f0(param_1,2);
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0x80000000;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0x80000000;
  in_ECX[9] = 0xffffffec;
  *in_ECX = &PTR_FUN_00a97b90;
  in_ECX[7] = in_ECX + 0x1c;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  in_ECX[0x1c] = *param_2;
  in_ECX[0x1d] = uVar1;
  in_ECX[0x1e] = uVar2;
  in_ECX[0x1f] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  in_ECX[0x20] = param_2[4];
  in_ECX[0x21] = uVar1;
  in_ECX[0x22] = uVar2;
  in_ECX[0x23] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  in_ECX[0x24] = param_2[8];
  in_ECX[0x25] = uVar1;
  in_ECX[0x26] = uVar2;
  in_ECX[0x27] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  in_ECX[0x28] = param_2[0xc];
  in_ECX[0x29] = uVar1;
  in_ECX[0x2a] = uVar2;
  in_ECX[0x2b] = uVar3;
  return;
}



void FUN_008abcb0(byte param_1)

{
  FUN_008de8b0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008abce0(float *param_1,float *param_2)

{
  int iVar1;
  int in_ECX;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = *(int *)(in_ECX + 0x50);
  fVar2 = *param_1 - *(float *)(iVar1 + 0x60);
  fVar4 = param_1[1] - *(float *)(iVar1 + 100);
  fVar6 = param_1[2] - *(float *)(iVar1 + 0x68);
  fVar8 = param_1[3] - *(float *)(iVar1 + 0x6c);
  fVar3 = *(float *)(iVar1 + 0xe4) * fVar6 - *(float *)(iVar1 + 0xe8) * fVar4;
  fVar5 = *(float *)(iVar1 + 0xe8) * fVar2 - *(float *)(iVar1 + 0xe0) * fVar6;
  fVar7 = *(float *)(iVar1 + 0xe0) * fVar4 - *(float *)(iVar1 + 0xe4) * fVar2;
  fVar8 = *(float *)(iVar1 + 0xec) * fVar8 - *(float *)(iVar1 + 0xec) * fVar8;
  *param_2 = fVar3;
  param_2[1] = fVar5;
  param_2[2] = fVar7;
  param_2[3] = fVar8;
  fVar2 = *(float *)(iVar1 + 0xd4);
  fVar4 = *(float *)(iVar1 + 0xd8);
  fVar6 = *(float *)(iVar1 + 0xdc);
  *param_2 = fVar3 + *(float *)(iVar1 + 0xd0);
  param_2[1] = fVar5 + fVar2;
  param_2[2] = fVar7 + fVar4;
  param_2[3] = fVar8 + fVar6;
  return;
}



void FUN_008abd40(int param_1,int param_2,float *param_3)

{
  float *pfVar1;
  
  if (-1 < param_2 + -1) {
    pfVar1 = (float *)(param_1 + 0x1c);
    do {
      pfVar1[-4] = *pfVar1;
      param_2 = param_2 + -1;
      *pfVar1 = -((param_3[2] * pfVar1[-1] + param_3[1] * pfVar1[-2] + *param_3 * pfVar1[-3]) *
                 *pfVar1);
      pfVar1 = pfVar1 + 0xc;
    } while (param_2 != 0);
  }
  return;
}



int FUN_008abdb0(void)

{
  int in_ECX;
  
  return in_ECX + 0x74;
}



void FUN_008abdc0(float *param_1,float *param_2,float param_3)

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
  int iVar11;
  int in_ECX;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = param_1[7];
  *param_2 = param_1[4];
  param_2[1] = fVar2;
  param_2[2] = fVar3;
  param_2[3] = fVar4;
  pfVar1 = param_2 + 4;
  param_2[3] = param_2[3] - *(float *)(in_ECX + 0x58);
  param_2[8] = *(float *)(in_ECX + 0x38);
  param_2[0xb] = *(float *)(in_ECX + 0x34);
  param_2[9] = *(float *)(in_ECX + 0x50);
  param_2[10] = *(float *)(in_ECX + 0x54);
  *pfVar1 = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[0xc] = 0.0;
  fVar2 = param_1[10];
  if (*(char *)((int)fVar2 + 0x18) == '\x01') {
    iVar12 = *(int *)((int)fVar2 + 0x10) + (int)fVar2;
    if (iVar12 != 0) {
      if (*(char *)(iVar12 + 0x92) == '\0') {
        iVar11 = *(int *)(iVar12 + 0x50);
        fVar2 = *(float *)(iVar11 + 0x6c);
        fVar3 = *(float *)(iVar11 + 0x50);
        fVar4 = *(float *)(iVar11 + 0x54);
        fVar5 = *(float *)(iVar11 + 0x58);
        fVar6 = *(float *)(iVar11 + 0x5c);
        fVar7 = *(float *)(iVar11 + 0x60);
        fVar8 = *(float *)(iVar11 + 100);
        fVar9 = *(float *)(iVar11 + 0x68);
        fVar10 = *(float *)(iVar11 + 0x6c);
        fVar13 = fVar2 * *(float *)(iVar11 + 0xa0);
        fVar14 = fVar2 * *(float *)(iVar11 + 0xa4);
        fVar15 = fVar2 * *(float *)(iVar11 + 0xa8);
        fVar16 = fVar2 * *(float *)(iVar11 + 0xac);
        fVar17 = *param_1 - *(float *)(iVar11 + 0x60);
        fVar18 = param_1[1] - *(float *)(iVar11 + 100);
        fVar19 = param_1[2] - *(float *)(iVar11 + 0x68);
        fVar20 = param_1[3] - *(float *)(iVar11 + 0x6c);
        *pfVar1 = fVar14 * fVar19 - fVar15 * fVar18;
        param_2[5] = fVar15 * fVar17 - fVar13 * fVar19;
        param_2[6] = fVar13 * fVar18 - fVar14 * fVar17;
        param_2[7] = fVar16 * fVar20 - fVar16 * fVar20;
        *pfVar1 = *pfVar1 + fVar2 * (fVar7 - fVar3);
        param_2[5] = param_2[5] + fVar2 * (fVar8 - fVar4);
        param_2[6] = param_2[6] + fVar2 * (fVar9 - fVar5);
        param_2[7] = param_2[7] + fVar2 * (fVar10 - fVar6);
      }
      else {
        FUN_008abce0(param_1,pfVar1);
      }
      param_2[3] = param_2[3] -
                   (param_2[6] * param_2[2] + param_2[5] * param_2[1] + *pfVar1 * *param_2) *
                   param_3;
      iVar11 = (**(code **)(**(int **)(iVar12 + 0x50) + 8))();
      if (iVar11 == 7) {
        param_2[0xc] = 2.8026e-45;
      }
      iVar12 = (**(code **)(**(int **)(iVar12 + 0x50) + 8))();
      if (iVar12 == 6) {
        param_2[0xc] = 1.4013e-45;
      }
    }
  }
  if (param_2[3] < -1.1920929e-07) {
    fVar3 = param_1[5];
    fVar4 = param_1[6];
    fVar5 = param_1[7];
    fVar2 = -(*(float *)(in_ECX + 0xa8) * param_2[3]);
    *pfVar1 = *pfVar1 + fVar2 * param_1[4];
    param_2[5] = param_2[5] + fVar2 * fVar3;
    param_2[6] = param_2[6] + fVar2 * fVar4;
    param_2[7] = param_2[7] + fVar2 * fVar5;
    param_2[3] = 0.0;
  }
  return;
}



float10 FUN_008abf70(int param_1,int param_2)

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
  int in_ECX;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float local_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar7 = *(float *)(param_1 + 0x18);
  fVar8 = *(float *)(param_2 + 0x10);
  fVar9 = *(float *)(param_2 + 0x14);
  fVar10 = *(float *)(param_2 + 0x18);
  iVar3 = *(int *)(param_1 + 0x28);
  fVar1 = *(float *)(in_ECX + 0x60);
  local_20 = 0.0;
  fStack_1c = 0.0;
  fStack_18 = 0.0;
  uStack_14 = 0;
  fVar2 = *(float *)(in_ECX + 0x60);
  local_30 = 0.0;
  fStack_2c = 0.0;
  fStack_28 = 0.0;
  uStack_24 = 0;
  fVar4 = *(float *)(param_1 + 0x1c) - *(float *)(param_2 + 0x1c);
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  uVar14 = 0;
  if ((*(char *)(iVar3 + 0x18) == '\x01') && (*(int *)(iVar3 + 0x10) + iVar3 != 0)) {
    FUN_008abce0(param_1,&local_30);
    fVar11 = local_20;
    fVar12 = fStack_1c;
    fVar13 = fStack_18;
    uVar14 = uStack_14;
  }
  iVar3 = *(int *)(param_2 + 0x28);
  local_20 = fVar11;
  fStack_1c = fVar12;
  fStack_18 = fVar13;
  if ((*(char *)(iVar3 + 0x18) == '\x01') && (*(int *)(iVar3 + 0x10) + iVar3 != 0)) {
    uStack_14 = uVar14;
    FUN_008abce0(param_2,&local_20);
  }
  return (float10)((1.0 - (fVar7 * fVar10 + fVar6 * fVar9 + fVar5 * fVar8)) * fVar1 * fVar2) *
         (float10)10.0 +
         (float10)((fStack_28 - fStack_18) * (fStack_28 - fStack_18) +
                  (fStack_2c - fStack_1c) * (fStack_2c - fStack_1c) +
                  (local_30 - local_20) * (local_30 - local_20)) * (float10)0.1 +
         (float10)(fVar4 * fVar4);
}



int FUN_008ac070(void)

{
  int in_ECX;
  
  return *(int *)(*(int *)(in_ECX + 0x30) + 0x1c) + 0x30;
}



void FUN_008ac080(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x30) != 0) {
    FUN_008abac0(param_1,*(float *)(in_ECX + 0x5c) + *(float *)(in_ECX + 0x58));
  }
  return;
}



int FUN_008ac0a0(void)

{
  int in_ECX;
  
  return in_ECX + 0x10;
}



void FUN_008ac0b0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(in_ECX + 0x10) = *param_1;
  *(undefined4 *)(in_ECX + 0x14) = uVar1;
  *(undefined4 *)(in_ECX + 0x18) = uVar2;
  *(undefined4 *)(in_ECX + 0x1c) = uVar3;
  return;
}



undefined4 FUN_008ac0c0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x30);
}



float10 FUN_008ac0d0(float param_1,float param_2)

{
  if (param_2 < param_1) {
    return (float10)param_1;
  }
  return (float10)param_2;
}



void FUN_008ac0f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  float10 fVar5;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x30) + 0x1c);
  uVar2 = *(undefined4 *)(iVar1 + 0x34);
  uVar3 = *(undefined4 *)(iVar1 + 0x38);
  uVar4 = *(undefined4 *)(iVar1 + 0x3c);
  *param_1 = *(undefined4 *)(iVar1 + 0x30);
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  uVar2 = *(undefined4 *)(in_ECX + 0x14);
  uVar3 = *(undefined4 *)(in_ECX + 0x18);
  uVar4 = *(undefined4 *)(in_ECX + 0x1c);
  param_1[4] = *(undefined4 *)(in_ECX + 0x10);
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  param_1[0x12] = *(undefined4 *)(in_ECX + 0x30);
  param_1[8] = *(undefined4 *)(in_ECX + 0x34);
  param_1[9] = *(undefined4 *)(in_ECX + 0x38);
  param_1[10] = *(undefined4 *)(in_ECX + 0x5c);
  uVar2 = *(undefined4 *)(in_ECX + 0x44);
  uVar3 = *(undefined4 *)(in_ECX + 0x48);
  uVar4 = *(undefined4 *)(in_ECX + 0x4c);
  param_1[0xc] = *(undefined4 *)(in_ECX + 0x40);
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  param_1[0x10] = *(undefined4 *)(in_ECX + 0x50);
  param_1[0x11] = *(undefined4 *)(in_ECX + 0x54);
  param_1[0x13] = *(undefined4 *)(in_ECX + 0x58);
  param_1[0x14] = *(undefined4 *)(in_ECX + 0x60);
  param_1[0x15] = *(undefined4 *)(in_ECX + 100);
  param_1[0x16] = *(undefined4 *)(in_ECX + 0x68);
  param_1[0x17] = *(undefined4 *)(in_ECX + 0x6c);
  param_1[0x18] = *(undefined4 *)(in_ECX + 0x70);
  if (ABS(*(float *)(in_ECX + 0xa4)) < 1.0) {
    fVar5 = (float10)FUN_00986130();
    param_1[0x19] = (float)fVar5;
    param_1[0x1a] = *(undefined4 *)(in_ECX + 0xa8);
    return;
  }
  if (0.0 < *(float *)(in_ECX + 0xa4)) {
    param_1[0x19] = 0;
    param_1[0x1a] = *(undefined4 *)(in_ECX + 0xa8);
    return;
  }
  param_1[0x19] = 0x40490fdb;
  param_1[0x1a] = *(undefined4 *)(in_ECX + 0xa8);
  return;
}



void FUN_008ac1e0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int *piVar8;
  int iVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  FUN_008bc720();
  if (*(int *)(in_ECX + 0x30) != 0) {
    FUN_008bc730();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = uVar4;
  *(undefined4 *)(in_ECX + 0x18) = uVar5;
  *(undefined4 *)(in_ECX + 0x1c) = uVar6;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x60);
  fVar10 = (float10)fcos((float10)*(float *)(param_1 + 100));
  *(float *)(in_ECX + 0xa4) = (float)fVar10;
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0x68);
  uVar4 = *(undefined4 *)(param_1 + 0x34);
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  uVar6 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x44) = uVar4;
  *(undefined4 *)(in_ECX + 0x48) = uVar5;
  *(undefined4 *)(in_ECX + 0x4c) = uVar6;
  fVar1 = *(float *)(in_ECX + 0x40);
  fVar2 = *(float *)(in_ECX + 0x44);
  fVar3 = *(float *)(in_ECX + 0x48);
  fVar11 = fVar2 * fVar2;
  fVar12 = fVar3 * fVar3;
  auVar13._4_4_ = fVar11;
  auVar13._0_4_ = fVar11;
  auVar13._8_4_ = fVar11;
  auVar13._12_4_ = fVar11;
  auVar14._4_12_ = auVar13._4_12_;
  auVar14._0_4_ = fVar11 + fVar1 * fVar1;
  auVar15._4_4_ = fVar12;
  auVar15._0_4_ = fVar12 + auVar14._0_4_;
  auVar15._8_4_ = fVar12;
  auVar15._12_4_ = fVar12;
  auVar15 = rsqrtss(auVar14,auVar15);
  fVar11 = auVar15._0_4_;
  fVar11 = fVar11 * 0.5 * (3.0 - (fVar12 + auVar14._0_4_) * fVar11 * fVar11);
  *(float *)(in_ECX + 0x40) = fVar11 * fVar1;
  *(float *)(in_ECX + 0x44) = fVar11 * fVar2;
  *(float *)(in_ECX + 0x48) = fVar11 * fVar3;
  *(float *)(in_ECX + 0x4c) = fVar11 * *(float *)(in_ECX + 0x4c);
  if ((*(int *)(*(int *)(in_ECX + 0x30) + 8) != 0) && (*(int *)(in_ECX + 0x30) != 0)) {
    FUN_008abac0(param_1,*(float *)(in_ECX + 0x5c) + *(float *)(in_ECX + 0x58));
  }
  iVar9 = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  if (0 < *(int *)(in_ECX + 0x90)) {
    do {
      FUN_008a6300(in_ECX + 8);
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(in_ECX + 0x90));
  }
  iVar9 = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  if (0 < *(int *)(in_ECX + 0x9c)) {
    do {
      FUN_008de670(in_ECX + 0xc);
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(in_ECX + 0x9c));
  }
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  iVar9 = *(int *)(*(int *)(in_ECX + 0x30) + 0x48);
  iVar7 = 0;
  if (0 < iVar9) {
    piVar8 = *(int **)(*(int *)(in_ECX + 0x30) + 0x44);
    do {
      if (*piVar8 == 0x1300) {
        return;
      }
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (iVar7 < iVar9);
  }
  FUN_008bc750(0x1300,in_ECX,0);
  return;
}



undefined4 FUN_008ac3c0(float param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int in_EAX;
  float *pfVar4;
  int iVar5;
  int *unaff_EDI;
  ushort uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  iVar5 = in_EAX * 0x40;
  pfVar1 = (float *)(*unaff_EDI + iVar5);
  fVar12 = pfVar1[2] * param_2[2] + pfVar1[1] * param_2[1] + *pfVar1 * *param_2;
  uVar6 = (ushort)(fVar12 < 0.01) << 8 | (ushort)NAN(fVar12) << 10 | (ushort)(fVar12 == 0.01) << 0xe
  ;
  if (fVar12 >= 0.01 && (fVar12 == 0.01) == 0) {
    uVar6 = (ushort)(fVar12 < param_1) << 8 | (ushort)(NAN(fVar12) || NAN(param_1)) << 10 |
            (ushort)(fVar12 == param_1) << 0xe;
    if (fVar12 < param_1) {
      if (unaff_EDI[1] == (unaff_EDI[2] & 0x3fffffffU)) {
        FUN_008a6ee0();
      }
      iVar2 = *unaff_EDI;
      fVar12 = -fVar12;
      pfVar4 = (float *)(unaff_EDI[1] * 0x40 + iVar2);
      unaff_EDI[1] = unaff_EDI[1] + 1;
      pfVar1 = (float *)(iVar2 + iVar5);
      fVar3 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      *pfVar4 = *pfVar1;
      pfVar4[1] = fVar3;
      pfVar4[2] = fVar7;
      pfVar4[3] = fVar8;
      pfVar1 = (float *)(iVar2 + 0x10 + iVar5);
      fVar3 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      pfVar4[4] = *pfVar1;
      pfVar4[5] = fVar3;
      pfVar4[6] = fVar7;
      pfVar4[7] = fVar8;
      pfVar4[8] = *(float *)(iVar2 + 0x20 + iVar5);
      pfVar4[9] = *(float *)(iVar2 + 0x24 + iVar5);
      pfVar4[10] = *(float *)(iVar2 + 0x28 + iVar5);
      pfVar4[0xb] = *(float *)(iVar2 + 0x2c + iVar5);
      pfVar4[0xc] = *(float *)(iVar2 + 0x30 + iVar5);
      fVar3 = param_2[3];
      fVar9 = *pfVar4 + fVar12 * *param_2;
      fVar10 = pfVar4[1] + fVar12 * param_2[1];
      fVar11 = pfVar4[2] + fVar12 * param_2[2];
      fVar7 = fVar10 * fVar10;
      fVar8 = fVar11 * fVar11;
      auVar13._4_4_ = fVar7;
      auVar13._0_4_ = fVar7;
      auVar13._8_4_ = fVar7;
      auVar13._12_4_ = fVar7;
      auVar14._4_12_ = auVar13._4_12_;
      auVar14._0_4_ = fVar7 + fVar9 * fVar9;
      auVar15._4_4_ = fVar8;
      auVar15._0_4_ = fVar8 + auVar14._0_4_;
      auVar15._8_4_ = fVar8;
      auVar15._12_4_ = fVar8;
      auVar15 = rsqrtss(auVar14,auVar15);
      fVar7 = auVar15._0_4_;
      fVar7 = fVar7 * 0.5 * (3.0 - (fVar8 + auVar14._0_4_) * fVar7 * fVar7);
      *pfVar4 = fVar7 * fVar9;
      pfVar4[1] = fVar7 * fVar10;
      pfVar4[2] = fVar7 * fVar11;
      pfVar4[3] = fVar7 * (pfVar4[3] + fVar12 * fVar3);
      return CONCAT31((int3)((uint)pfVar4 >> 8),1);
    }
  }
  return CONCAT22((short)((uint)*unaff_EDI >> 0x10),uVar6);
}



float10 FUN_008ac530(float *param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_ECX;
  float10 fVar6;
  
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar1 = 1.0 / SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  iVar2 = *(int *)(param_2 + 0x10);
  fVar1 = *(float *)(iVar2 + 0xc) -
          (-1.0 / ((fVar5 * *(float *)(iVar2 + 0x18) +
                   fVar4 * *(float *)(iVar2 + 0x14) + fVar3 * *(float *)(iVar2 + 0x10)) * fVar1)) *
          *(float *)(in_ECX + 0x58) * fVar1;
  if (1.0 <= fVar1) {
    fVar6 = (float10)1.0;
  }
  else {
    fVar6 = (float10)fVar1;
    if (fVar1 < 0.0) {
      fVar6 = (float10)0.0;
    }
  }
  fVar1 = (float)fVar6;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[3];
  *param_4 = (1.0 - fVar1) * *param_4 + fVar1 * *param_3;
  param_4[1] = (1.0 - fVar1) * param_4[1] + fVar1 * fVar3;
  param_4[2] = (1.0 - fVar1) * param_4[2] + fVar1 * fVar4;
  param_4[3] = (1.0 - fVar1) * param_4[3] + fVar1 * fVar5;
  return fVar6 * (float10)param_1[8];
}



int FUN_008ac640(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_8;
  int local_4;
  
  iVar1 = *(int *)(in_ECX + 0x78);
  iVar3 = 0;
  local_4 = -1;
  local_8 = 0.1;
  iVar2 = -1;
  if (0 < iVar1) {
    iVar4 = *(int *)(in_ECX + 0x74);
    do {
      fVar5 = (float10)FUN_008abf70(param_1,iVar4);
      if (fVar5 < (float10)local_8) {
        local_8 = (float)fVar5;
        local_4 = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x30;
      iVar2 = local_4;
    } while (iVar3 < iVar1);
  }
  return iVar2;
}



void FUN_008ac6a0(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_ECX;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_e0;
  int local_d8;
  float local_a0;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 local_40 [60];
  
  local_e0 = 0;
  if (*(int *)(in_ECX + 0x78) < 1) {
    return;
  }
  local_d8 = 0;
LAB_008ac6d0:
  iVar10 = *(int *)(local_d8 + 0x28 + *(int *)(in_ECX + 0x74));
  iVar1 = *(int *)(*(int *)(iVar10 + 0x10) + 0x48 + iVar10);
  iVar6 = 0;
  if (0 < iVar1) {
    piVar9 = *(int **)(*(int *)(iVar10 + 0x10) + iVar10 + 0x44);
    piVar8 = piVar9;
    do {
      if (*piVar8 == 0x1300) {
        iVar10 = 0;
        if (iVar1 < 1) goto LAB_008ac72a;
        goto LAB_008ac710;
      }
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 4;
    } while (iVar6 < iVar1);
  }
  goto LAB_008ac761;
  while( true ) {
    iVar10 = iVar10 + 1;
    piVar9 = piVar9 + 4;
    if (iVar1 <= iVar10) break;
LAB_008ac710:
    if (*piVar9 == 0x1300) break;
  }
LAB_008ac72a:
  iVar10 = *(int *)(in_ECX + 0x84);
  while (iVar10 = iVar10 + -1, -1 < iVar10) {
    piVar9 = *(int **)(*(int *)(in_ECX + 0x80) + iVar10 * 4);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0x10))();
    }
  }
LAB_008ac761:
  iVar10 = *(int *)(*(int *)(in_ECX + 0x74) + 0x28 + local_d8);
  pfVar7 = (float *)(*(int *)(in_ECX + 0x74) + local_d8);
  if (((*(char *)(iVar10 + 0x18) == '\x01') &&
      (iVar10 = *(int *)(iVar10 + 0x10) + iVar10, iVar10 != 0)) &&
     (*(char *)(iVar10 + 0x92) == '\0')) {
    fVar12 = *pfVar7;
    fVar14 = pfVar7[1];
    fVar16 = pfVar7[2];
    fVar17 = *(float *)(local_d8 + 0x1c + *(int *)(in_ECX + 0x74));
    iVar1 = local_d8 + *(int *)(in_ECX + 0x74);
    fVar2 = *(float *)(iVar1 + 0x10);
    fVar3 = *(float *)(iVar1 + 0x14);
    fVar4 = *(float *)(iVar1 + 0x18);
    fVar5 = *(float *)(iVar1 + 0x1c);
    iVar1 = *(int *)(iVar10 + 0x50);
    fVar11 = fVar12 - *(float *)(iVar1 + 0x60);
    fVar13 = fVar14 - *(float *)(iVar1 + 100);
    fVar15 = fVar16 - *(float *)(iVar1 + 0x68);
    fVar11 = (((*(float *)(iVar1 + 0xe0) * fVar13 - *(float *)(iVar1 + 0xe4) * fVar11) +
              *(float *)(iVar1 + 0xd8)) - *(float *)(in_ECX + 0x18)) * fVar4 +
             (((*(float *)(iVar1 + 0xe8) * fVar11 - *(float *)(iVar1 + 0xe0) * fVar15) +
              *(float *)(iVar1 + 0xd4)) - *(float *)(in_ECX + 0x14)) * fVar3 +
             (((*(float *)(iVar1 + 0xe4) * fVar15 - *(float *)(iVar1 + 0xe8) * fVar13) +
              *(float *)(iVar1 + 0xd0)) - *(float *)(in_ECX + 0x10)) * fVar2;
    local_a0 = fVar11 * -0.9;
    if (fVar17 < 0.0) {
      local_a0 = fVar17 * *(float *)(param_1 + 0xc) * 0.4 + local_a0;
    }
    local_80 = 0.0;
    fStack_7c = 0.0;
    fStack_78 = 0.0;
    fStack_74 = 0.0;
    local_70 = fVar12;
    fStack_6c = fVar14;
    fStack_68 = fVar16;
    fStack_64 = fVar17;
    if (local_a0 < 0.0) {
      (**(code **)(**(int **)(iVar10 + 0x50) + 0x3c))(local_40);
      iVar1 = *(int *)(iVar10 + 0x50);
      fVar12 = fVar12 - *(float *)(iVar1 + 0x60);
      fVar14 = fVar14 - *(float *)(iVar1 + 100);
      fVar16 = fVar16 - *(float *)(iVar1 + 0x68);
      fVar17 = fVar17 - *(float *)(iVar1 + 0x6c);
      fStack_60 = fVar14 * fVar4 - fVar16 * fVar3;
      fStack_5c = fVar16 * fVar2 - fVar12 * fVar4;
      fStack_58 = fVar12 * fVar3 - fVar14 * fVar2;
      fStack_54 = fVar17 * fVar5 - fVar17 * fVar5;
      FUN_0088fe00(local_40,&fStack_60);
      local_a0 = local_a0 /
                 (fStack_48 * fStack_58 + fStack_4c * fStack_5c + fStack_50 * fStack_60 +
                 *(float *)(*(int *)(iVar10 + 0x50) + 0xc0));
      fVar17 = -(*(float *)(in_ECX + 0x6c) * *(float *)(param_1 + 8));
      if (local_a0 < fVar17) {
        local_a0 = fVar17;
      }
      local_80 = local_a0 * fVar2;
      fStack_7c = local_a0 * fVar3;
      fStack_78 = local_a0 * fVar4;
      fStack_74 = local_a0 * fVar5;
    }
    fVar17 = *(float *)(param_1 + 8);
    fVar17 = fVar17 * param_2[2] * fVar4 + fVar17 * param_2[1] * fVar3 + fVar17 * *param_2 * fVar2;
    if (fVar11 < 0.0) {
      fVar17 = fVar17 - fVar11;
    }
    if (fVar17 < -1.1920929e-07) {
      fVar17 = fVar17 * *(float *)(in_ECX + 0x70);
      local_80 = local_80 + fVar17 * fVar2;
      fStack_7c = fStack_7c + fVar17 * fVar3;
      fStack_78 = fStack_78 + fVar17 * fVar4;
      fStack_74 = fStack_74 + fVar17 * fVar5;
    }
    iVar1 = *(int *)(in_ECX + 0x84);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      piVar9 = *(int **)(*(int *)(in_ECX + 0x80) + iVar1 * 4);
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0x14))();
      }
    }
    FUN_008a6410();
    (**(code **)(**(int **)(iVar10 + 0x50) + 0x60))(&local_80,&local_70);
  }
  local_e0 = local_e0 + 1;
  local_d8 = local_d8 + 0x30;
  if (*(int *)(in_ECX + 0x78) <= local_e0) {
    return;
  }
  goto LAB_008ac6d0;
}



void FUN_008acac0(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x84)) {
    piVar2 = *(int **)(in_ECX + 0x80);
    do {
      if (*piVar2 == param_1) goto LAB_008acae7;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x84));
  }
  iVar1 = -1;
LAB_008acae7:
  iVar3 = *(int *)(in_ECX + 0x84) + -1;
  *(int *)(in_ECX + 0x84) = iVar3;
  *(undefined4 *)(*(int *)(in_ECX + 0x80) + iVar1 * 4) =
       *(undefined4 *)(*(int *)(in_ECX + 0x80) + iVar3 * 4);
  return;
}



void FUN_008acb10(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = &PTR_LAB_00a46684;
  in_ECX[3] = &PTR_LAB_00a56320;
  in_ECX[0xc] = 0;
  *in_ECX = &PTR_FUN_00a97c08;
  in_ECX[2] = &PTR_LAB_00a97bf4;
  in_ECX[3] = &PTR_LAB_00a97be0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0x80000000;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0x80000000;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0x80000000;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0x80000000;
  FUN_008ac1e0(param_1);
  return;
}



void FUN_008acbc0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = 0;
  *in_ECX = &PTR_FUN_00a97c08;
  in_ECX[2] = &PTR_LAB_00a97bf4;
  in_ECX[3] = &PTR_LAB_00a97be0;
  if (0 < (int)in_ECX[0x24]) {
    do {
      FUN_008a6300(in_ECX + 2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)in_ECX[0x24]);
  }
  iVar1 = 0;
  in_ECX[0x24] = 0;
  if (0 < (int)in_ECX[0x27]) {
    do {
      FUN_008de670(in_ECX + 3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)in_ECX[0x27]);
  }
  in_ECX[0x27] = 0;
  FUN_008bc7b0(local_8,0x1300);
  FUN_008bc730();
  if (-1 < (int)in_ECX[0x28]) {
    FUN_008a75d0(in_ECX[0x26],in_ECX[0x28] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x25]) {
    FUN_008a75d0(in_ECX[0x23],in_ECX[0x25] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x22]) {
    FUN_008a75d0(in_ECX[0x20],in_ECX[0x22] << 2,0x14);
  }
  if (-1 < (int)in_ECX[0x1f]) {
    FUN_008a75d0(in_ECX[0x1d],(in_ECX[0x1f] & 0x3fffffff) * 0x30,0x14);
  }
  in_ECX[3] = &PTR_LAB_00a56320;
  in_ECX[2] = &PTR_LAB_00a46684;
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008acd60(undefined4 param_1)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0x84) == (*(uint *)(in_ECX + 0x88) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0x80),4);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x80) + *(int *)(in_ECX + 0x84) * 4) = param_1;
  *(int *)(in_ECX + 0x84) = *(int *)(in_ECX + 0x84) + 1;
  return;
}



void FUN_008acda0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_ECX;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  FUN_008a6300(-(uint)(in_ECX != 8) & in_ECX);
  iVar10 = *(int *)(in_ECX + 0x70);
  if (-1 < iVar10 + -1) {
    iVar9 = (iVar10 + -1) * 0x30;
    do {
      iVar7 = *(int *)(*(int *)(in_ECX + 0x6c) + 0x28 + iVar9);
      if (*(char *)(iVar7 + 0x18) == '\x01') {
        iVar7 = *(int *)(iVar7 + 0x10) + iVar7;
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 == param_1) {
        iVar7 = *(int *)(in_ECX + 0x6c);
        iVar6 = *(int *)(in_ECX + 0x70) + -1;
        *(int *)(in_ECX + 0x70) = iVar6;
        iVar6 = iVar6 * 0x30;
        puVar1 = (undefined4 *)(iVar6 + iVar7);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        iVar6 = iVar6 + iVar7;
        puVar2 = (undefined4 *)(iVar9 + iVar7);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        uVar3 = *(undefined4 *)(iVar6 + 0x14);
        uVar4 = *(undefined4 *)(iVar6 + 0x18);
        uVar5 = *(undefined4 *)(iVar6 + 0x1c);
        puVar1 = (undefined4 *)(iVar9 + 0x10 + iVar7);
        *puVar1 = *(undefined4 *)(iVar6 + 0x10);
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        *(undefined4 *)(iVar9 + 0x20 + iVar7) = *(undefined4 *)(iVar6 + 0x20);
        *(undefined4 *)(iVar9 + 0x24 + iVar7) = *(undefined4 *)(iVar6 + 0x24);
        *(undefined4 *)(iVar9 + 0x28 + iVar7) = *(undefined4 *)(iVar6 + 0x28);
        *(undefined4 *)(iVar9 + 0x2c + iVar7) = *(undefined4 *)(iVar6 + 0x2c);
      }
      iVar9 = iVar9 + -0x30;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  iVar10 = 0;
  if (0 < *(int *)(in_ECX + 0x88)) {
    piVar8 = *(int **)(in_ECX + 0x84);
    do {
      if (*piVar8 == param_1) goto LAB_008ace54;
      iVar10 = iVar10 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar10 < *(int *)(in_ECX + 0x88));
  }
  iVar10 = -1;
LAB_008ace54:
  iVar9 = *(int *)(in_ECX + 0x88) + -1;
  *(int *)(in_ECX + 0x88) = iVar9;
  *(undefined4 *)(*(int *)(in_ECX + 0x84) + iVar10 * 4) =
       *(undefined4 *)(*(int *)(in_ECX + 0x84) + iVar9 * 4);
  return;
}



void FUN_008ace80(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_ECX;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  FUN_008de670(-(uint)(in_ECX != 0xc) & in_ECX);
  iVar10 = *(int *)(in_ECX + 0x6c);
  if (-1 < iVar10 + -1) {
    iVar9 = (iVar10 + -1) * 0x30;
    do {
      iVar7 = *(int *)(*(int *)(in_ECX + 0x68) + 0x28 + iVar9);
      if (*(char *)(iVar7 + 0x18) == '\x02') {
        iVar7 = *(int *)(iVar7 + 0x10) + iVar7;
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 == param_1) {
        iVar7 = *(int *)(in_ECX + 0x68);
        iVar6 = *(int *)(in_ECX + 0x6c) + -1;
        *(int *)(in_ECX + 0x6c) = iVar6;
        iVar6 = iVar6 * 0x30;
        puVar1 = (undefined4 *)(iVar6 + iVar7);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        iVar6 = iVar6 + iVar7;
        puVar2 = (undefined4 *)(iVar9 + iVar7);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        uVar3 = *(undefined4 *)(iVar6 + 0x14);
        uVar4 = *(undefined4 *)(iVar6 + 0x18);
        uVar5 = *(undefined4 *)(iVar6 + 0x1c);
        puVar1 = (undefined4 *)(iVar9 + 0x10 + iVar7);
        *puVar1 = *(undefined4 *)(iVar6 + 0x10);
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        *(undefined4 *)(iVar9 + 0x20 + iVar7) = *(undefined4 *)(iVar6 + 0x20);
        *(undefined4 *)(iVar9 + 0x24 + iVar7) = *(undefined4 *)(iVar6 + 0x24);
        *(undefined4 *)(iVar9 + 0x28 + iVar7) = *(undefined4 *)(iVar6 + 0x28);
        *(undefined4 *)(iVar9 + 0x2c + iVar7) = *(undefined4 *)(iVar6 + 0x2c);
      }
      iVar9 = iVar9 + -0x30;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  iVar10 = 0;
  if (0 < *(int *)(in_ECX + 0x90)) {
    piVar8 = *(int **)(in_ECX + 0x8c);
    do {
      if (*piVar8 == param_1) goto LAB_008acf34;
      iVar10 = iVar10 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar10 < *(int *)(in_ECX + 0x90));
  }
  iVar10 = -1;
LAB_008acf34:
  iVar9 = *(int *)(in_ECX + 0x90) + -1;
  *(int *)(in_ECX + 0x90) = iVar9;
  *(undefined4 *)(*(int *)(in_ECX + 0x8c) + iVar10 * 4) =
       *(undefined4 *)(*(int *)(in_ECX + 0x8c) + iVar9 * 4);
  return;
}



void FUN_008acf60(int *param_1)

{
  int in_ECX;
  
  if (-1 < (int)*(uint *)(in_ECX + 0x7c)) {
    (**(code **)(*param_1 + 4))
              ("Manifold",8,*(undefined4 *)(in_ECX + 0x74),*(int *)(in_ECX + 0x78) * 0x30,
               (*(uint *)(in_ECX + 0x7c) & 0x3fffffff) * 0x30);
  }
  if (-1 < *(int *)(in_ECX + 0x94)) {
    (**(code **)(*param_1 + 4))
              ("OverlapsPntr",8,*(undefined4 *)(in_ECX + 0x8c),*(int *)(in_ECX + 0x90) << 2,
               *(int *)(in_ECX + 0x94) << 2);
  }
  if (-1 < *(int *)(in_ECX + 0xa0)) {
    (**(code **)(*param_1 + 4))
              ("Manifold",8,*(undefined4 *)(in_ECX + 0x98),*(int *)(in_ECX + 0x9c) << 2,
               *(int *)(in_ECX + 0xa0) << 2);
  }
  if (-1 < *(int *)(in_ECX + 0x88)) {
    (**(code **)(*param_1 + 4))
              ("ListnrPntr",8,*(undefined4 *)(in_ECX + 0x80),*(int *)(in_ECX + 0x84) << 2,
               *(int *)(in_ECX + 0x88) << 2);
  }
  return;
}



void FUN_008ad040(byte param_1)

{
  FUN_008acbc0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008ad070(int param_1)

{
  int iVar1;
  int *in_ECX;
  undefined4 unaff_EBX;
  undefined **local_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *puStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 auStack_194 [400];
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 4) = 0x7f7fffff;
  iVar1 = *(int *)(*(int *)(in_ECX[0xc] + 8) + 0x74);
  local_1b4 = *(undefined ***)(iVar1 + 8);
  *(float *)(iVar1 + 8) = (float)in_ECX[0x17] + (float)in_ECX[0x16] + *(float *)(iVar1 + 8);
  (**(code **)(*(int *)in_ECX[0xc] + 0x34))(param_1);
  *(undefined4 *)(iVar1 + 8) = unaff_EBX;
  puStack_1a4 = auStack_194;
  local_1b4 = &PTR_FUN_00a55dec;
  uStack_19c = 0x80000008;
  uStack_1a0 = 0;
  uStack_1b0 = 0x7f7fffff;
  (**(code **)(*in_ECX + 8))(param_1,&local_1b4);
  if (-1 < (int)puStack_1a4) {
    FUN_008a75d0(uStack_1ac,((uint)puStack_1a4 & 0x3fffffff) * 0x30,0x14);
  }
  return;
}



void FUN_008ad150(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int in_ECX;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  int unaff_FS_OFFSET;
  float10 fVar18;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  int local_c;
  
  iVar15 = 0;
  if (0 < *(int *)(in_ECX + 0x90)) {
    do {
      FUN_008a6300(in_ECX + 8);
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(in_ECX + 0x90));
  }
  iVar15 = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  if (0 < *(int *)(in_ECX + 0x9c)) {
    do {
      FUN_008de670(in_ECX + 0xc);
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(in_ECX + 0x9c));
  }
  iVar15 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  piVar11 = *(int **)(iVar15 + 0x19c);
  uVar2 = *(uint *)(param_1 + 0x14);
  local_24 = 3.4028235e+38;
  if (piVar11 == (int *)0x0) {
    piVar11 = DAT_00ba7d9c;
  }
  iVar7 = piVar11[8];
  iVar6 = uVar2 * 0x30 + 0x10;
  uVar1 = iVar7 + iVar6;
  if ((uint)piVar11[0xb] < uVar1) {
    iVar7 = (**(code **)(*piVar11 + 0xc))(iVar6);
  }
  else {
    piVar11[8] = uVar1;
  }
  local_c = *(int *)(param_1 + 0x14);
  if (0 < local_c) {
    puVar16 = (undefined4 *)(iVar7 + 0x20);
    iVar6 = local_c;
    do {
      puVar9 = (undefined4 *)((int)puVar16 + *(int *)(param_1 + 0x10) + (-0x20 - iVar7));
      uVar3 = puVar9[1];
      uVar4 = puVar9[2];
      uVar5 = puVar9[3];
      iVar17 = *(int *)(param_1 + 0x10) + (-0x20 - iVar7);
      puVar16[-8] = *puVar9;
      puVar16[-7] = uVar3;
      puVar16[-6] = uVar4;
      puVar16[-5] = uVar5;
      uVar3 = *(undefined4 *)((int)puVar16 + iVar17 + 0x14);
      uVar4 = *(undefined4 *)((int)puVar16 + iVar17 + 0x18);
      uVar5 = *(undefined4 *)((int)puVar16 + iVar17 + 0x1c);
      puVar16[-4] = *(undefined4 *)((int)puVar16 + iVar17 + 0x10);
      puVar16[-3] = uVar3;
      puVar16[-2] = uVar4;
      puVar16[-1] = uVar5;
      *puVar16 = *(undefined4 *)((int)puVar16 + iVar17 + 0x20);
      puVar16[1] = *(undefined4 *)((int)puVar16 + iVar17 + 0x24);
      puVar16[2] = *(undefined4 *)((int)puVar16 + iVar17 + 0x28);
      puVar16[3] = *(undefined4 *)((int)puVar16 + iVar17 + 0x2c);
      if ((float)puVar16[-1] < local_24) {
        local_24 = (float)puVar16[-1];
      }
      puVar16 = puVar16 + 0xc;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_18 = *(int *)(in_ECX + 0x78);
  if (-1 < local_18 + -1) {
    local_28 = (local_18 + -1) * 0x30;
    do {
      iVar6 = 0;
      local_1c = -1;
      local_20 = 1.1;
      puVar16 = (undefined4 *)(*(int *)(in_ECX + 0x74) + local_28);
      local_2c = iVar7;
      if (local_c < 1) {
LAB_008ad3d6:
        iVar6 = *(int *)(in_ECX + 0x84);
        while (iVar6 = iVar6 + -1, -1 < iVar6) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x80) + iVar6 * 4) + 0xc))(puVar16);
        }
        iVar6 = *(int *)(in_ECX + 0x74);
        iVar17 = *(int *)(in_ECX + 0x78) + -1;
        *(int *)(in_ECX + 0x78) = iVar17;
        iVar17 = iVar17 * 0x30;
        puVar16 = (undefined4 *)(iVar17 + iVar6);
        uVar3 = puVar16[1];
        uVar4 = puVar16[2];
        uVar5 = puVar16[3];
        iVar17 = iVar17 + iVar6;
        puVar9 = (undefined4 *)(iVar6 + local_28);
        *puVar9 = *puVar16;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar3 = *(undefined4 *)(iVar17 + 0x14);
        uVar4 = *(undefined4 *)(iVar17 + 0x18);
        uVar5 = *(undefined4 *)(iVar17 + 0x1c);
        puVar16 = (undefined4 *)(iVar6 + 0x10 + local_28);
        *puVar16 = *(undefined4 *)(iVar17 + 0x10);
        puVar16[1] = uVar3;
        puVar16[2] = uVar4;
        puVar16[3] = uVar5;
        *(undefined4 *)(iVar6 + 0x20 + local_28) = *(undefined4 *)(iVar17 + 0x20);
        *(undefined4 *)(iVar6 + 0x24 + local_28) = *(undefined4 *)(iVar17 + 0x24);
        *(undefined4 *)(iVar6 + 0x28 + local_28) = *(undefined4 *)(iVar17 + 0x28);
        *(undefined4 *)(iVar6 + 0x2c + local_28) = *(undefined4 *)(iVar17 + 0x2c);
      }
      else {
        do {
          fVar18 = (float10)FUN_008abf70(local_2c,puVar16);
          if (fVar18 < (float10)local_20) {
            local_20 = (float)fVar18;
            local_1c = iVar6;
          }
          iVar6 = iVar6 + 1;
          local_2c = local_2c + 0x30;
        } while (iVar6 < local_c);
        if (local_1c < 0) goto LAB_008ad3d6;
        puVar9 = (undefined4 *)(local_1c * 0x30 + iVar7);
        if (*(int *)(local_1c * 0x30 + 0x28 + iVar7) != puVar16[10]) {
          iVar6 = *(int *)(in_ECX + 0x84);
          while (iVar6 = iVar6 + -1, -1 < iVar6) {
            (**(code **)(**(int **)(*(int *)(in_ECX + 0x80) + iVar6 * 4) + 0xc))(puVar16);
          }
          iVar6 = *(int *)(in_ECX + 0x84);
          while (iVar6 = iVar6 + -1, -1 < iVar6) {
            (**(code **)(**(int **)(*(int *)(in_ECX + 0x80) + iVar6 * 4) + 8))(puVar9);
          }
        }
        uVar3 = puVar9[1];
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        *puVar16 = *puVar9;
        puVar16[1] = uVar3;
        puVar16[2] = uVar4;
        puVar16[3] = uVar5;
        uVar3 = puVar9[5];
        uVar4 = puVar9[6];
        uVar5 = puVar9[7];
        puVar16[4] = puVar9[4];
        puVar16[5] = uVar3;
        puVar16[6] = uVar4;
        puVar16[7] = uVar5;
        puVar16[8] = puVar9[8];
        puVar16[9] = puVar9[9];
        puVar16[10] = puVar9[10];
        puVar16[0xb] = puVar9[0xb];
        local_c = local_c + -1;
        puVar16 = (undefined4 *)(local_c * 0x30 + iVar7);
        uVar3 = puVar16[1];
        uVar4 = puVar16[2];
        uVar5 = puVar16[3];
        iVar6 = local_c * 0x30 + iVar7;
        *puVar9 = *puVar16;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar3 = *(undefined4 *)(iVar6 + 0x14);
        uVar4 = *(undefined4 *)(iVar6 + 0x18);
        uVar5 = *(undefined4 *)(iVar6 + 0x1c);
        puVar9[4] = *(undefined4 *)(iVar6 + 0x10);
        puVar9[5] = uVar3;
        puVar9[6] = uVar4;
        puVar9[7] = uVar5;
        puVar9[8] = *(undefined4 *)(iVar6 + 0x20);
        puVar9[9] = *(undefined4 *)(iVar6 + 0x24);
        puVar9[10] = *(undefined4 *)(iVar6 + 0x28);
        puVar9[0xb] = *(undefined4 *)(iVar6 + 0x2c);
      }
      local_28 = local_28 + -0x30;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  if (0 < local_c) {
    puVar16 = (undefined4 *)(iVar7 + 0x10);
    local_18 = local_c;
    do {
      if ((float)puVar16[3] == local_24) {
        puVar9 = puVar16 + -4;
        iVar6 = FUN_008ac640(puVar9);
        if (iVar6 < 0) {
          iVar6 = *(int *)(in_ECX + 0x84);
          while (iVar6 = iVar6 + -1, -1 < iVar6) {
            (**(code **)(**(int **)(*(int *)(in_ECX + 0x80) + iVar6 * 4) + 8))(puVar9);
          }
          if (*(uint *)(in_ECX + 0x78) == (*(uint *)(in_ECX + 0x7c) & 0x3fffffff)) {
            FUN_008a6ee0((int *)(in_ECX + 0x74),0x30);
          }
          puVar8 = (undefined4 *)(*(int *)(in_ECX + 0x78) * 0x30 + *(int *)(in_ECX + 0x74));
          *(int *)(in_ECX + 0x78) = *(int *)(in_ECX + 0x78) + 1;
          uVar3 = puVar16[-3];
          uVar4 = puVar16[-2];
          uVar5 = puVar16[-1];
          *puVar8 = *puVar9;
          puVar8[1] = uVar3;
          puVar8[2] = uVar4;
          puVar8[3] = uVar5;
          uVar3 = puVar16[1];
          uVar4 = puVar16[2];
          uVar5 = puVar16[3];
          puVar8[4] = *puVar16;
          puVar8[5] = uVar3;
          puVar8[6] = uVar4;
          puVar8[7] = uVar5;
          puVar8[8] = puVar16[4];
          puVar8[9] = puVar16[5];
          puVar8[10] = puVar16[6];
          puVar8[0xb] = puVar16[7];
        }
      }
      puVar16 = puVar16 + 0xc;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  if (0 < *(int *)(param_2 + 0x14)) {
    puVar16 = *(undefined4 **)(param_2 + 0x10);
    iVar6 = FUN_008ac640(puVar16);
    if (iVar6 == -1) {
      iVar6 = *(int *)(in_ECX + 0x84);
      while (iVar6 = iVar6 + -1, -1 < iVar6) {
        (**(code **)(**(int **)(*(int *)(in_ECX + 0x80) + iVar6 * 4) + 8))(puVar16);
      }
      if (*(uint *)(in_ECX + 0x78) == (*(uint *)(in_ECX + 0x7c) & 0x3fffffff)) {
        FUN_008a6ee0((int *)(in_ECX + 0x74),0x30);
      }
      puVar9 = (undefined4 *)(*(int *)(in_ECX + 0x78) * 0x30 + *(int *)(in_ECX + 0x74));
      *(int *)(in_ECX + 0x78) = *(int *)(in_ECX + 0x78) + 1;
      uVar3 = puVar16[1];
      uVar4 = puVar16[2];
      uVar5 = puVar16[3];
      *puVar9 = *puVar16;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar3 = puVar16[5];
      uVar4 = puVar16[6];
      uVar5 = puVar16[7];
      puVar9[4] = puVar16[4];
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      puVar9[8] = puVar16[8];
      puVar9[9] = puVar16[9];
      puVar9[10] = puVar16[10];
      puVar9[0xb] = puVar16[0xb];
    }
  }
  iVar6 = *(int *)(in_ECX + 0x78) + -1;
  if (0 < iVar6) {
    iVar17 = iVar6 * 0x30;
    do {
      iVar10 = iVar6 + -1;
      if (0 < iVar6) {
        iVar6 = *(int *)(in_ECX + 0x74) + iVar17;
        iVar13 = *(int *)(in_ECX + 0x74) + -0x30 + iVar17;
        iVar14 = iVar10;
LAB_008ad5d0:
        fVar18 = (float10)FUN_008abf70(iVar6,iVar13);
        if ((float10)0.1 <= fVar18) goto code_r0x008ad5ea;
        iVar13 = *(int *)(in_ECX + 0x84);
        while (iVar13 = iVar13 + -1, -1 < iVar13) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x80) + iVar13 * 4) + 0xc))(iVar6);
        }
        iVar6 = *(int *)(in_ECX + 0x74);
        iVar13 = *(int *)(in_ECX + 0x78) + -1;
        *(int *)(in_ECX + 0x78) = iVar13;
        iVar13 = iVar13 * 0x30;
        puVar16 = (undefined4 *)(iVar13 + iVar6);
        uVar3 = puVar16[1];
        uVar4 = puVar16[2];
        uVar5 = puVar16[3];
        iVar13 = iVar13 + iVar6;
        puVar9 = (undefined4 *)(iVar6 + iVar17);
        *puVar9 = *puVar16;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar3 = *(undefined4 *)(iVar13 + 0x14);
        uVar4 = *(undefined4 *)(iVar13 + 0x18);
        uVar5 = *(undefined4 *)(iVar13 + 0x1c);
        puVar16 = (undefined4 *)(iVar6 + 0x10 + iVar17);
        *puVar16 = *(undefined4 *)(iVar13 + 0x10);
        puVar16[1] = uVar3;
        puVar16[2] = uVar4;
        puVar16[3] = uVar5;
        *(undefined4 *)(iVar6 + 0x20 + iVar17) = *(undefined4 *)(iVar13 + 0x20);
        *(undefined4 *)(iVar6 + 0x24 + iVar17) = *(undefined4 *)(iVar13 + 0x24);
        *(undefined4 *)(iVar6 + 0x28 + iVar17) = *(undefined4 *)(iVar13 + 0x28);
        *(undefined4 *)(iVar6 + 0x2c + iVar17) = *(undefined4 *)(iVar13 + 0x2c);
      }
LAB_008ad654:
      iVar17 = iVar17 + -0x30;
      iVar6 = iVar10;
    } while (0 < iVar10);
  }
  param_2 = 0;
  if (0 < *(int *)(in_ECX + 0x78)) {
    iVar6 = 0;
    do {
      iVar17 = *(int *)(*(int *)(in_ECX + 0x74) + 0x28 + iVar6);
      if ((*(char *)(iVar17 + 0x18) == '\x01') &&
         (iVar17 = *(int *)(iVar17 + 0x10) + iVar17, iVar17 != 0)) {
        piVar11 = (int *)(in_ECX + 0x8c);
        iVar10 = 0;
        if (0 < *(int *)(in_ECX + 0x90)) {
          piVar12 = (int *)*piVar11;
          do {
            if (*piVar12 == iVar17) {
              if (iVar10 != -1) goto LAB_008ad6eb;
              break;
            }
            iVar10 = iVar10 + 1;
            piVar12 = piVar12 + 1;
          } while (iVar10 < *(int *)(in_ECX + 0x90));
        }
        FUN_008a6550(in_ECX + 8);
        if (*(uint *)(in_ECX + 0x90) == (*(uint *)(in_ECX + 0x94) & 0x3fffffff)) {
          FUN_008a6ee0(piVar11,4);
        }
        *(int *)(*piVar11 + *(int *)(in_ECX + 0x90) * 4) = iVar17;
        *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 1;
      }
LAB_008ad6eb:
      iVar17 = *(int *)(*(int *)(in_ECX + 0x74) + 0x28 + iVar6);
      if ((*(char *)(iVar17 + 0x18) == '\x02') &&
         (iVar17 = *(int *)(iVar17 + 0x10) + iVar17, iVar17 != 0)) {
        piVar11 = (int *)(in_ECX + 0x98);
        iVar10 = 0;
        if (0 < *(int *)(in_ECX + 0x9c)) {
          piVar12 = (int *)*piVar11;
          do {
            if (*piVar12 == iVar17) {
              if (iVar10 != -1) goto LAB_008ad757;
              break;
            }
            iVar10 = iVar10 + 1;
            piVar12 = piVar12 + 1;
          } while (iVar10 < *(int *)(in_ECX + 0x9c));
        }
        FUN_008de710(in_ECX + 0xc);
        if (*(uint *)(in_ECX + 0x9c) == (*(uint *)(in_ECX + 0xa0) & 0x3fffffff)) {
          FUN_008a6ee0(piVar11,4);
        }
        *(int *)(*piVar11 + *(int *)(in_ECX + 0x9c) * 4) = iVar17;
        *(int *)(in_ECX + 0x9c) = *(int *)(in_ECX + 0x9c) + 1;
      }
LAB_008ad757:
      param_2 = param_2 + 1;
      iVar6 = iVar6 + 0x30;
    } while (param_2 < *(int *)(in_ECX + 0x78));
  }
  piVar11 = *(int **)(iVar15 + 0x19c);
  if (piVar11 == (int *)0x0) {
    piVar11 = DAT_00ba7d9c;
  }
  piVar11[8] = iVar7;
  if (iVar7 == piVar11[10]) {
    (**(code **)(*piVar11 + 0x10))(iVar7);
  }
  if (-1 < (int)(uVar2 | 0x80000000)) {
    FUN_008a75d0(iVar7,(uVar2 & 0x3fffffff) * 0x30,0x14);
  }
  return;
code_r0x008ad5ea:
  iVar14 = iVar14 + -1;
  iVar13 = iVar13 + -0x30;
  if (iVar14 < 0) goto LAB_008ad654;
  goto LAB_008ad5d0;
}



void FUN_008ad7d0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *in_ECX;
  int iVar13;
  undefined4 *extraout_ECX;
  undefined4 *puVar14;
  int *piVar15;
  int unaff_FS_OFFSET;
  float10 fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iStack_144;
  int iStack_13c;
  int iStack_134;
  int iStack_130;
  uint uStack_12c;
  int iStack_128;
  int local_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined4 uStack_108;
  char cStack_101;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined4 local_f0;
  float local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_dc;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  float fStack_90;
  int iStack_8c;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_38;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint uStack_18;
  
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar14 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar14 = "LtupdateCharacter";
    puVar14[3] = &DAT_00a2fa2c;
    uVar4 = rdtsc();
    puVar14[1] = (int)uVar4;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar14 + 4;
  }
  fVar2 = *(float *)(param_1 + 8);
  iVar3 = *(int *)(in_ECX[0xc] + 0x1c);
  local_120 = *(float *)(iVar3 + 0x30);
  fStack_11c = *(float *)(iVar3 + 0x34);
  fStack_118 = *(float *)(iVar3 + 0x38);
  fStack_114 = *(float *)(iVar3 + 0x3c);
  local_ec = (float)in_ECX[0x17] + (float)in_ECX[0x16];
  local_f0 = 0x3c23d70a;
  local_124 = 0;
  do {
    if ((fVar2 <= 1.1920929e-07) || (DAT_00b2efb8 <= local_124)) {
      in_ECX[4] = local_a0;
      in_ECX[5] = iStack_9c;
      in_ECX[6] = iStack_98;
      in_ECX[7] = iStack_94;
      FUN_008abac0(&local_120,local_ec);
      iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
        puVar14 = *(undefined4 **)(iVar3 + 0x1a4);
        *puVar14 = &DAT_00a6a630;
        uVar4 = rdtsc();
        puVar14[1] = (int)uVar4;
        *(undefined4 **)(iVar3 + 0x1a4) = puVar14 + 3;
      }
      return;
    }
    iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
      puVar14 = *(undefined4 **)(iVar3 + 0x1a4);
      *puVar14 = "StInitialCast";
      uVar4 = rdtsc();
      local_d0 = (undefined4)uVar4;
      puVar14[1] = local_d0;
      *(undefined4 **)(iVar3 + 0x1a4) = puVar14 + 3;
    }
    local_100 = (float)in_ECX[8];
    fStack_fc = (float)in_ECX[9];
    fStack_f8 = (float)in_ECX[10];
    fStack_f4 = (float)in_ECX[0xb];
    *(undefined4 *)(param_3 + 0x14) = 0;
    *(undefined4 *)(param_3 + 4) = 0x7f7fffff;
    *(undefined4 *)(param_4 + 0x14) = 0;
    *(undefined4 *)(param_4 + 4) = 0x7f7fffff;
    local_100 = local_120 + local_100;
    fStack_fc = fStack_11c + fStack_fc;
    fStack_f8 = fStack_118 + fStack_f8;
    fStack_f4 = fStack_114 + fStack_f4;
    (**(code **)(*(int *)in_ECX[0xc] + 0x30))(&local_120,&local_100,param_3,param_4);
    if (0 < *(int *)(param_3 + 0x14)) {
      FUN_008af890();
      FUN_008abd40(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14),in_ECX + 8);
    }
    iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
      iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      puVar14 = *(undefined4 **)(iVar3 + 0x1a4);
      *puVar14 = "StUpdateManifold";
      uVar4 = rdtsc();
      uStack_e8 = (undefined4)uVar4;
      puVar14[1] = uStack_e8;
      *(undefined4 **)(iVar3 + 0x1a4) = puVar14 + 3;
    }
    (**(code **)(*in_ECX + 8))(param_4,param_3);
    uVar11 = in_ECX[0x19] + 10 + in_ECX[0x1e];
    iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    iStack_134 = 0;
    iStack_130 = 0;
    uStack_12c = 0x80000000;
    piVar15 = *(int **)(iVar3 + 0x19c);
    if (*(int **)(iVar3 + 0x19c) == (int *)0x0) {
      piVar15 = DAT_00ba7d9c;
    }
    iVar13 = piVar15[8];
    iVar10 = uVar11 * 0x40 + 0x10;
    uVar1 = iVar13 + iVar10;
    if ((uint)piVar15[0xb] < uVar1) {
      iVar13 = (**(code **)(*piVar15 + 0xc))(iVar10);
    }
    else {
      piVar15[8] = uVar1;
    }
    iStack_130 = in_ECX[0x1e];
    uStack_12c = uVar11 | 0x80000000;
    iVar10 = 0;
    iStack_134 = iVar13;
    iStack_128 = iVar13;
    if (0 < iStack_130) {
      iStack_144 = 0;
      iStack_13c = 0;
      do {
        (**(code **)(*in_ECX + 0xc))
                  (in_ECX[0x1d] + iStack_144,iStack_13c + iStack_134,*(float *)(param_1 + 8) - fVar2
                  );
        FUN_008ac3c0(in_ECX[0x29],in_ECX + 0x10);
        iVar10 = iVar10 + 1;
        iStack_13c = iStack_13c + 0x40;
        iStack_144 = iStack_144 + 0x30;
      } while (iVar10 < in_ECX[0x1e]);
    }
    uVar11 = uStack_12c & 0x3fffffff;
    if (((int)(uVar11 - iStack_130) < in_ECX[0x19]) &&
       (iVar13 = in_ECX[0x19] + iStack_130, (int)uVar11 < iVar13)) {
      iVar10 = uVar11 * 2;
      if ((int)(uVar11 * 2) <= iVar13) {
        iVar10 = iVar13;
      }
      FUN_008a6e40(&iStack_134,iVar10,0x40);
    }
    iVar13 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar13 + 0x1a4) < *(uint *)(iVar13 + 0x1a8)) {
      puVar14 = *(undefined4 **)(iVar3 + 0x1a4);
      *puVar14 = "StSlexMove";
      uVar4 = rdtsc();
      uStack_d4 = (undefined4)uVar4;
      puVar14[1] = uStack_d4;
      *(undefined4 **)(iVar3 + 0x1a4) = puVar14 + 3;
    }
    uVar11 = in_ECX[0x19] + iStack_130;
    uStack_cc = 0x34000000;
    iStack_50 = 0;
    iStack_4c = 0x3f800000;
    iStack_48 = 0;
    iStack_44 = 0;
    iStack_60 = 0x34000000;
    iStack_5c = 0x34000000;
    iStack_58 = 0x34000000;
    iStack_54 = 0x34000000;
    fStack_30 = 0.0;
    fStack_2c = 0.0;
    fStack_28 = 0.0;
    fStack_24 = 0.0;
    fStack_80 = 0.0;
    fStack_7c = 0.0;
    fStack_78 = 0.0;
    fStack_74 = 0.0;
    piVar15 = *(int **)(iVar3 + 0x19c);
    if (*(int **)(iVar3 + 0x19c) == (int *)0x0) {
      piVar15 = DAT_00ba7d9c;
    }
    iStack_13c = piVar15[8];
    iVar13 = (uVar11 + 1) * 0x10;
    uVar1 = iStack_13c + iVar13;
    if ((uint)piVar15[0xb] < uVar1) {
      iStack_13c = (**(code **)(*piVar15 + 0xc))(iVar13);
    }
    else {
      piVar15[8] = uVar1;
    }
    fStack_74 = fStack_24;
    fStack_78 = fStack_28;
    fStack_7c = fStack_2c;
    fStack_80 = fStack_30;
    iStack_70 = in_ECX[4];
    iStack_6c = in_ECX[5];
    iStack_68 = in_ECX[6];
    iStack_64 = in_ECX[7];
    iStack_38 = iStack_134;
    fStack_b8 = (float)in_ECX[6] * (float)in_ECX[6] +
                (float)in_ECX[5] * (float)in_ECX[5] + (float)in_ECX[4] * (float)in_ECX[4];
    uStack_18 = uVar11 | 0x80000000;
    iStack_34 = iStack_130;
    if (fStack_b8 == 0.0) {
      fStack_3c = 0.0;
    }
    else {
      fVar17 = (float)in_ECX[5] * (float)in_ECX[5];
      fStack_2c = (float)in_ECX[6] * (float)in_ECX[6];
      auVar18._4_4_ = fVar17;
      auVar18._0_4_ = fVar17;
      auVar18._8_4_ = fVar17;
      auVar18._12_4_ = fVar17;
      auVar19._4_12_ = auVar18._4_12_;
      auVar19._0_4_ = fVar17 + (float)in_ECX[4] * (float)in_ECX[4];
      auVar20._4_4_ = fStack_2c;
      auVar20._0_4_ = fStack_2c + auVar19._0_4_;
      auVar20._8_4_ = fStack_2c;
      auVar20._12_4_ = fStack_2c;
      auVar20 = rsqrtss(auVar19,auVar20);
      fStack_30 = auVar20._0_4_;
      uStack_c0 = 0x40400000;
      uStack_dc = 0x3f000000;
      fStack_bc = fStack_30 * 0.5 * (3.0 - (fStack_2c + auVar19._0_4_) * fStack_30 * fStack_30);
      fStack_3c = fStack_bc * (float)in_ECX[0x16] * 0.5;
      fStack_28 = fStack_2c;
      fStack_24 = fStack_2c;
    }
    iStack_c8 = in_ECX[0x1a];
    iStack_50 = in_ECX[0x10];
    iStack_4c = in_ECX[0x11];
    iStack_48 = in_ECX[0x12];
    iStack_44 = in_ECX[0x13];
    iVar13 = in_ECX[0x21] + -1;
    iStack_60 = iStack_c8;
    iStack_5c = iStack_c8;
    iStack_58 = iStack_c8;
    iStack_54 = iStack_c8;
    fStack_40 = fVar2;
    if (-1 < iVar13) {
      do {
        (**(code **)(**(int **)(in_ECX[0x20] + iVar13 * 4) + 4))(in_ECX + 0x1d,&fStack_80);
        iVar13 = iVar13 + -1;
      } while (-1 < iVar13);
    }
    iStack_8c = iStack_13c;
    FUN_008ec790(&fStack_80,&fStack_b0);
    iVar9 = _tls_index;
    iVar13 = *(int *)(unaff_FS_OFFSET + 0x2c);
    iVar10 = *(int *)(iVar13 + _tls_index * 4);
    if (*(uint *)(iVar10 + 0x1a4) < *(uint *)(iVar10 + 0x1a8)) {
      puVar14 = *(undefined4 **)(iVar3 + 0x1a4);
      *puVar14 = "StApplySurf";
      uVar4 = rdtsc();
      uStack_c4 = (undefined4)uVar4;
      puVar14[1] = uStack_c4;
      *(undefined4 **)(iVar3 + 0x1a4) = puVar14 + 3;
    }
    FUN_008ac6a0(param_1,param_2);
    iVar13 = *(int *)(iVar13 + iVar9 * 4);
    puVar14 = extraout_ECX;
    if (*(uint *)(iVar13 + 0x1a4) < *(uint *)(iVar13 + 0x1a8)) {
      puVar14 = *(undefined4 **)(iVar3 + 0x1a4);
      *puVar14 = "StCastMove";
      uVar4 = rdtsc();
      uStack_b4 = (undefined4)uVar4;
      puVar14[1] = uStack_b4;
      puVar14 = puVar14 + 3;
      *(undefined4 **)(iVar3 + 0x1a4) = puVar14;
    }
    uStack_108 = 0x3a83126f;
    auVar5._4_4_ = -(uint)(0.001 < ABS((float)in_ECX[9] - fStack_ac));
    auVar5._0_4_ = -(uint)(0.001 < ABS((float)in_ECX[8] - fStack_b0));
    auVar5._8_4_ = -(uint)(0.001 < ABS((float)in_ECX[10] - fStack_a8));
    auVar5._12_4_ = -(uint)(0.001 < ABS((float)in_ECX[0xb] - fStack_a4));
    uVar11 = movmskps(puVar14,auVar5);
    cStack_101 = '\x01' - ((uVar11 & 7) != 0);
    if (cStack_101 == '\0') {
      *(undefined4 *)(param_3 + 0x14) = 0;
      *(undefined4 *)(param_3 + 4) = 0x7f7fffff;
      local_100 = local_120 + fStack_b0;
      fStack_fc = fStack_11c + fStack_ac;
      fStack_f8 = fStack_118 + fStack_a8;
      fStack_f4 = fStack_114 + fStack_a4;
      (**(code **)(*(int *)in_ECX[0xc] + 0x30))(&local_120,&local_100,param_3,0);
      if (*(int *)(param_3 + 0x14) < 1) goto LAB_008ae0e2;
      FUN_008af890();
      FUN_008abd40(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14),&fStack_b0);
      puVar14 = *(undefined4 **)(param_3 + 0x10);
      iVar13 = FUN_008ac640(puVar14);
      if (iVar13 == -1) {
        iVar13 = in_ECX[0x21];
        while (iVar13 = iVar13 + -1, -1 < iVar13) {
          (**(code **)(**(int **)(in_ECX[0x20] + iVar13 * 4) + 8))(puVar14);
        }
        if (in_ECX[0x1e] == (in_ECX[0x1f] & 0x3fffffffU)) {
          FUN_008a6ee0(in_ECX + 0x1d,0x30);
        }
        puVar12 = (undefined4 *)(in_ECX[0x1e] * 0x30 + in_ECX[0x1d]);
        in_ECX[0x1e] = in_ECX[0x1e] + 1;
        uVar6 = puVar14[1];
        uVar7 = puVar14[2];
        uVar8 = puVar14[3];
        *puVar12 = *puVar14;
        puVar12[1] = uVar6;
        puVar12[2] = uVar7;
        puVar12[3] = uVar8;
        uVar6 = puVar14[5];
        uVar7 = puVar14[6];
        uVar8 = puVar14[7];
        puVar12[4] = puVar14[4];
        puVar12[5] = uVar6;
        puVar12[6] = uVar7;
        puVar12[7] = uVar8;
        puVar12[8] = puVar14[8];
        puVar12[9] = puVar14[9];
        puVar12[10] = puVar14[10];
        puVar12[0xb] = puVar14[0xb];
      }
      iVar13 = FUN_008ac640(*(undefined4 *)(param_3 + 0x10));
      while (iVar13 != -1) {
        iVar10 = *(int *)(param_3 + 0x14) + -1;
        iVar13 = 0;
        *(int *)(param_3 + 0x14) = iVar10;
        if (0 < iVar10) {
          iVar10 = 0;
          do {
            puVar14 = (undefined4 *)(*(int *)(param_3 + 0x10) + 0x30 + iVar10);
            uVar6 = puVar14[1];
            uVar7 = puVar14[2];
            uVar8 = puVar14[3];
            puVar12 = (undefined4 *)(*(int *)(param_3 + 0x10) + iVar10);
            *puVar12 = *puVar14;
            puVar12[1] = uVar6;
            puVar12[2] = uVar7;
            puVar12[3] = uVar8;
            puVar12[4] = puVar12[0x10];
            puVar12[5] = puVar12[0x11];
            puVar12[6] = puVar12[0x12];
            puVar12[7] = puVar12[0x13];
            puVar12[8] = puVar12[0x14];
            puVar12[9] = puVar12[0x15];
            puVar12[10] = puVar12[0x16];
            puVar12[0xb] = puVar12[0x17];
            iVar13 = iVar13 + 1;
            iVar10 = iVar10 + 0x30;
          } while (iVar13 < *(int *)(param_3 + 0x14));
        }
        if (*(int *)(param_3 + 0x14) < 1) goto LAB_008ae0e2;
        iVar13 = FUN_008ac640(*(undefined4 *)(param_3 + 0x10));
      }
      fVar16 = (float10)FUN_008ac530(&fStack_b0,param_3,&local_100,&local_120);
      fVar16 = (float10)fVar2 - fVar16;
    }
    else {
LAB_008ae0e2:
      fVar16 = (float10)fVar2 - (float10)fStack_90;
      local_120 = local_120 + fStack_b0;
      fStack_11c = fStack_11c + fStack_ac;
      fStack_118 = fStack_118 + fStack_a8;
      fStack_114 = fStack_114 + fStack_a4;
    }
    fVar2 = (float)fVar16;
    in_ECX[8] = (int)fStack_b0;
    in_ECX[9] = (int)fStack_ac;
    in_ECX[10] = (int)fStack_a8;
    in_ECX[0xb] = (int)fStack_a4;
    piVar15 = *(int **)(iVar3 + 0x19c);
    if (*(int **)(iVar3 + 0x19c) == (int *)0x0) {
      piVar15 = DAT_00ba7d9c;
    }
    piVar15[8] = iStack_13c;
    if (iStack_13c == piVar15[10]) {
      (**(code **)(*piVar15 + 0x10))(iStack_13c);
    }
    if (-1 < (int)uStack_18) {
      FUN_008a75d0(iStack_13c,uStack_18 << 4,0x14);
    }
    piVar15 = *(int **)(iVar3 + 0x19c);
    if (*(int **)(iVar3 + 0x19c) == (int *)0x0) {
      piVar15 = DAT_00ba7d9c;
    }
    piVar15[8] = iStack_128;
    if (iStack_128 == piVar15[10]) {
      (**(code **)(*piVar15 + 0x10))(iStack_128);
    }
    if (-1 < (int)uStack_12c) {
      FUN_008a75d0(iStack_134,uStack_12c << 6,0x14);
    }
    local_124 = local_124 + 1;
  } while( true );
}



void FUN_008ae100(float *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int *in_ECX;
  uint uVar13;
  int iVar14;
  undefined4 extraout_ECX;
  float *pfVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  int unaff_FS_OFFSET;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int local_dc;
  int local_d8;
  float *local_d4;
  int local_d0;
  uint local_cc;
  float *local_c8;
  int local_c4;
  float *pfStack_c0;
  int iStack_bc;
  uint uStack_b8;
  float *pfStack_b4;
  int iStack_b0;
  int iStack_ac;
  uint uStack_a8;
  int iStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float *pfStack_48;
  int iStack_44;
  undefined1 auStack_40 [16];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_1c;
  
  iVar18 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar17 = *(int *)(iVar18 + _tls_index * 4);
  if (*(uint *)(iVar17 + 0x1a4) < *(uint *)(iVar17 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar17 + 0x1a4);
    *puVar3 = "TtcheckSupport";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar17 + 0x1a4) = puVar3 + 3;
  }
  FUN_008ad070(param_3);
  uVar13 = in_ECX[0x19] + 10 + in_ECX[0x1e];
  local_c4 = *(int *)(iVar18 + _tls_index * 4);
  local_d4 = (float *)0x0;
  local_d0 = 0;
  local_cc = 0x80000000;
  piVar16 = *(int **)(local_c4 + 0x19c);
  if (*(int **)(local_c4 + 0x19c) == (int *)0x0) {
    piVar16 = DAT_00ba7d9c;
  }
  local_c8 = (float *)piVar16[8];
  if ((float *)piVar16[0xb] < local_c8 + uVar13 * 0x10 + 4) {
    local_c8 = (float *)(**(code **)(*piVar16 + 0xc))(uVar13 * 0x40 + 0x10);
  }
  else {
    piVar16[8] = (int)(local_c8 + uVar13 * 0x10 + 4);
  }
  local_d0 = in_ECX[0x1e];
  local_cc = uVar13 | 0x80000000;
  iVar18 = 0;
  local_d4 = local_c8;
  if (0 < local_d0) {
    local_dc = 0;
    local_d8 = 0;
    do {
      (**(code **)(*in_ECX + 0xc))(in_ECX[0x1d] + local_dc,local_d8 + (int)local_d4,0);
      FUN_008ac3c0(in_ECX[0x29],in_ECX + 0x10);
      iVar18 = iVar18 + 1;
      local_d8 = local_d8 + 0x40;
      local_dc = local_dc + 0x30;
    } while (iVar18 < in_ECX[0x1e]);
  }
  uVar13 = local_cc & 0x3fffffff;
  if (((int)(uVar13 - local_d0) < in_ECX[0x19]) &&
     (iVar18 = in_ECX[0x19] + local_d0, (int)uVar13 < iVar18)) {
    iVar17 = uVar13 * 2;
    if ((int)(uVar13 * 2) <= iVar18) {
      iVar17 = iVar18;
    }
    FUN_008a6e40(&local_d4,iVar17,0x40);
  }
  uVar13 = in_ECX[0x19] + local_d0;
  iStack_b0 = 0;
  iStack_ac = 0;
  uStack_a8 = 0x80000000;
  piVar16 = *(int **)(local_c4 + 0x19c);
  if (*(int **)(local_c4 + 0x19c) == (int *)0x0) {
    piVar16 = DAT_00ba7d9c;
  }
  iStack_a4 = piVar16[8];
  iVar18 = (uVar13 + 1) * 0x10;
  uVar1 = iStack_a4 + iVar18;
  if ((uint)piVar16[0xb] < uVar1) {
    iStack_a4 = (**(code **)(*piVar16 + 0xc))(iVar18);
  }
  else {
    piVar16[8] = uVar1;
  }
  uStack_a8 = uVar13 | 0x80000000;
  uVar13 = in_ECX[0x19] + local_d0;
  pfStack_c0 = (float *)0x0;
  iStack_bc = 0;
  uStack_b8 = 0x80000000;
  piVar16 = *(int **)(local_c4 + 0x19c);
  if (*(int **)(local_c4 + 0x19c) == (int *)0x0) {
    piVar16 = DAT_00ba7d9c;
  }
  pfStack_b4 = (float *)piVar16[8];
  iVar18 = uVar13 + 1;
  iStack_b0 = iStack_a4;
  if ((float *)piVar16[0xb] < pfStack_b4 + iVar18 * 4) {
    pfStack_b4 = (float *)(**(code **)(*piVar16 + 0xc))(iVar18 * 0x10);
  }
  else {
    piVar16[8] = (int)(pfStack_b4 + iVar18 * 4);
  }
  pfStack_48 = local_d4;
  fStack_a0 = 0.0;
  fStack_9c = 0.0;
  fStack_98 = 0.0;
  fStack_94 = 0.0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  fStack_80 = *param_1;
  fStack_7c = param_1[1];
  fStack_78 = param_1[2];
  fStack_74 = param_1[3];
  iStack_70 = in_ECX[0x1a];
  uStack_b8 = uVar13 | 0x80000000;
  iStack_60 = in_ECX[0x10];
  iStack_5c = in_ECX[0x11];
  iStack_58 = in_ECX[0x12];
  iStack_54 = in_ECX[0x13];
  iVar18 = in_ECX[0x21] + -1;
  iStack_44 = local_d0;
  uStack_50 = 0x3c888889;
  uStack_4c = 0x3c888889;
  iStack_1c = iStack_b0;
  pfStack_c0 = pfStack_b4;
  iStack_6c = iStack_70;
  iStack_68 = iStack_70;
  iStack_64 = iStack_70;
  if (-1 < iVar18) {
    do {
      (**(code **)(**(int **)(in_ECX[0x20] + iVar18 * 4) + 4))(in_ECX + 0x1d,&uStack_90);
      iVar18 = iVar18 + -1;
    } while (-1 < iVar18);
  }
  iVar18 = iStack_44;
  if ((int)(uStack_b8 & 0x3fffffff) < iStack_44) {
    iVar17 = (uStack_b8 & 0x3fffffff) * 2;
    iVar12 = iStack_44;
    if (iStack_44 < iVar17) {
      iVar12 = iVar17;
    }
    FUN_008a6e40(&pfStack_c0,iVar12,0x10);
  }
  iVar17 = iStack_44;
  iStack_bc = iVar18;
  if ((int)(uStack_a8 & 0x3fffffff) < iStack_44) {
    iVar18 = (uStack_a8 & 0x3fffffff) * 2;
    iVar12 = iStack_44;
    if (iStack_44 < iVar18) {
      iVar12 = iVar18;
    }
    FUN_008a6e40(&iStack_b0,iVar12,0x10);
  }
  iVar18 = iStack_44;
  iStack_ac = iVar17;
  if ((int)(local_cc & 0x3fffffff) < iStack_44) {
    iVar17 = (local_cc & 0x3fffffff) * 2;
    iVar12 = iStack_44;
    if (iStack_44 < iVar17) {
      iVar12 = iVar17;
    }
    FUN_008a6e40(&local_d4,iVar12,0x40);
  }
  iVar17 = 0;
  if (0 < iStack_44) {
    iVar12 = 0;
    iVar14 = 0;
    do {
      puVar2 = (undefined4 *)(iVar12 + 0x10 + (int)local_d4);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (undefined4 *)(iVar14 + (int)pfStack_c0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      pfVar15 = (float *)(iVar12 + 0x10 + (int)local_d4);
      *pfVar15 = fStack_a0;
      pfVar15[1] = fStack_9c;
      pfVar15[2] = fStack_98;
      pfVar15[3] = fStack_94;
      iVar17 = iVar17 + 1;
      iVar14 = iVar14 + 0x10;
      iVar12 = iVar12 + 0x40;
    } while (iVar17 < iStack_44);
  }
  local_d0 = iVar18;
  FUN_008ec790(&uStack_90,auStack_40);
  iVar18 = local_c4;
  param_2[8] = fStack_a0;
  param_2[9] = fStack_9c;
  param_2[10] = fStack_98;
  param_2[0xb] = fStack_94;
  param_2[4] = fStack_a0;
  param_2[5] = fStack_9c;
  param_2[6] = fStack_98;
  param_2[7] = fStack_94;
  auVar25._4_4_ = -(uint)(0.001 < ABS(fStack_2c - param_1[1]));
  auVar25._0_4_ = -(uint)(0.001 < ABS(fStack_30 - *param_1));
  auVar25._8_4_ = -(uint)(0.001 < ABS(fStack_28 - param_1[2]));
  auVar25._12_4_ = -(uint)(0.001 < ABS(fStack_24 - param_1[3]));
  uVar13 = movmskps(extraout_ECX,auVar25);
  if ((uVar13 & 7) != 0) {
    fVar20 = fStack_2c * fStack_2c;
    fVar22 = fStack_28 * fStack_28;
    if (fVar22 + fVar20 + fStack_30 * fStack_30 < 0.001) {
LAB_008ae608:
      *param_2 = 2;
    }
    else {
      auVar23._4_4_ = fVar20;
      auVar23._0_4_ = fVar20;
      auVar23._8_4_ = fVar20;
      auVar23._12_4_ = fVar20;
      auVar24._4_12_ = auVar23._4_12_;
      auVar24._0_4_ = fVar20 + fStack_30 * fStack_30;
      auVar5._4_4_ = fVar22;
      auVar5._0_4_ = fVar22 + auVar24._0_4_;
      auVar5._8_4_ = fVar22;
      auVar5._12_4_ = fVar22;
      auVar25 = rsqrtss(auVar24,auVar5);
      fStack_a0 = auVar25._0_4_;
      fVar20 = fStack_a0 * 0.5 * (3.0 - (fVar22 + auVar24._0_4_) * fStack_a0 * fStack_a0);
      fStack_30 = fVar20 * fStack_30;
      fStack_2c = fVar20 * fStack_2c;
      fStack_28 = fVar20 * fStack_28;
      fStack_24 = fVar20 * fStack_24;
      fVar20 = fStack_28 * param_1[2] + fStack_2c * param_1[1] + fStack_30 * *param_1;
      fStack_9c = fVar22;
      fStack_98 = fVar22;
      fStack_94 = fVar22;
      if ((float)in_ECX[0x29] * (float)in_ECX[0x29] <= 1.0 - fVar20 * fVar20) goto LAB_008ae608;
      *param_2 = 1;
    }
    local_d8 = 0;
    if (0 < iStack_44) {
      pfVar15 = pfStack_c0;
      pfVar19 = local_d4;
      iVar17 = iStack_44;
      do {
        if (*(char *)((iStack_b0 - (int)pfStack_c0) + (int)pfVar15) != '\0') {
          fVar20 = pfVar19[1];
          fVar22 = pfVar19[2];
          fVar7 = pfVar19[3];
          if (fVar22 * param_1[2] + fVar20 * param_1[1] + *pfVar19 * *param_1 < -0.08) {
            param_2[4] = (float)param_2[4] + *pfVar19;
            param_2[5] = (float)param_2[5] + fVar20;
            param_2[6] = (float)param_2[6] + fVar22;
            param_2[7] = (float)param_2[7] + fVar7;
            fVar20 = pfVar15[1];
            fVar22 = pfVar15[2];
            fVar7 = pfVar15[3];
            local_d8 = local_d8 + 1;
            param_2[8] = (float)param_2[8] + *pfVar15;
            param_2[9] = (float)param_2[9] + fVar20;
            param_2[10] = (float)param_2[10] + fVar22;
            param_2[0xb] = (float)param_2[0xb] + fVar7;
          }
        }
        pfVar19 = pfVar19 + 0x10;
        pfVar15 = pfVar15 + 4;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
      if (0 < local_d8) {
        fVar22 = (float)param_2[4];
        fVar7 = (float)param_2[5];
        fVar8 = (float)param_2[6];
        fVar21 = fVar7 * fVar7;
        fStack_9c = fVar8 * fVar8;
        fVar20 = 1.0 / (float)local_d8;
        auVar26._4_4_ = fVar21;
        auVar26._0_4_ = fVar21;
        auVar26._8_4_ = fVar21;
        auVar26._12_4_ = fVar21;
        auVar27._4_12_ = auVar26._4_12_;
        auVar27._0_4_ = fVar21 + fVar22 * fVar22;
        auVar6._4_4_ = fStack_9c;
        auVar6._0_4_ = fStack_9c + auVar27._0_4_;
        auVar6._8_4_ = fStack_9c;
        auVar6._12_4_ = fStack_9c;
        auVar25 = rsqrtss(auVar27,auVar6);
        fStack_a0 = auVar25._0_4_;
        fVar21 = fStack_a0 * 0.5 * (3.0 - (fStack_9c + auVar27._0_4_) * fStack_a0 * fStack_a0);
        param_2[4] = fVar21 * fVar22;
        param_2[5] = fVar21 * fVar7;
        param_2[6] = fVar21 * fVar8;
        param_2[7] = fVar21 * (float)param_2[7];
        param_2[8] = fVar20 * (float)param_2[8];
        param_2[9] = fVar20 * (float)param_2[9];
        param_2[10] = fVar20 * (float)param_2[10];
        param_2[0xb] = fVar20 * (float)param_2[0xb];
        fStack_98 = fStack_9c;
        fStack_94 = fStack_9c;
        goto LAB_008ae753;
      }
    }
  }
  *param_2 = 0;
LAB_008ae753:
  iVar17 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar17 + 0x1a4) < *(uint *)(iVar17 + 0x1a8)) {
    puVar3 = *(undefined4 **)(local_c4 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(local_c4 + 0x1a4) = puVar3 + 3;
  }
  piVar16 = *(int **)(local_c4 + 0x19c);
  if (*(int **)(local_c4 + 0x19c) == (int *)0x0) {
    piVar16 = DAT_00ba7d9c;
  }
  piVar16[8] = (int)pfStack_b4;
  if (pfStack_b4 == (float *)piVar16[10]) {
    (**(code **)(*piVar16 + 0x10))(pfStack_b4);
  }
  if (-1 < (int)uStack_b8) {
    FUN_008a75d0(pfStack_c0,uStack_b8 << 4,0x14);
  }
  piVar16 = *(int **)(iVar18 + 0x19c);
  if (piVar16 == (int *)0x0) {
    piVar16 = DAT_00ba7d9c;
  }
  piVar16[8] = iStack_a4;
  if (iStack_a4 == piVar16[10]) {
    (**(code **)(*piVar16 + 0x10))(iStack_a4);
  }
  if (-1 < (int)uStack_a8) {
    FUN_008a75d0(iStack_b0,uStack_a8 << 4,0x14);
  }
  piVar16 = *(int **)(iVar18 + 0x19c);
  if (piVar16 == (int *)0x0) {
    piVar16 = DAT_00ba7d9c;
  }
  piVar16[8] = (int)local_c8;
  if (local_c8 == (float *)piVar16[10]) {
    (**(code **)(*piVar16 + 0x10))(local_c8);
  }
  if (-1 < (int)local_cc) {
    FUN_008a75d0(local_d4,local_cc << 6,0x14);
  }
  return;
}



void FUN_008ae890(undefined4 param_1,undefined4 param_2)

{
  undefined **local_1b0;
  undefined4 local_1ac;
  undefined1 *local_1a0;
  undefined4 local_19c;
  uint local_198;
  undefined1 local_190 [396];
  
  local_1a0 = local_190;
  local_1b0 = &PTR_FUN_00a55dec;
  local_198 = 0x80000008;
  local_19c = 0;
  local_1ac = 0x7f7fffff;
  FUN_008ae100(param_1,param_2,&local_1b0);
  local_1b0 = &PTR_FUN_00a55dec;
  if (-1 < (int)local_198) {
    FUN_008a75d0(local_1a0,(local_198 & 0x3fffffff) * 0x30,0x14);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ae930(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d69f8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a55a5c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba7f44 = _DAT_00ba7f44 + -1;
  local_4 = 0xffffffff;
  FUN_008a2550();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008ae9a0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_008a2a50(param_1);
  param_1 = FUN_0070f910(DAT_00ba7f48);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ae9f0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bd428;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a55afc;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba7f50 = _DAT_00ba7f50 + -1;
  local_4 = 0xffffffff;
  FUN_008ae930();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008aea60(int param_1)

{
  int in_ECX;
  
  FUN_008a2690(param_1);
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc);
    return;
  }
  *(undefined4 *)(param_1 + 4) = _DAT_00b2efc4;
  return;
}



void thunk_FUN_008a25c0(undefined4 param_1)

{
  int *piVar1;
  int *in_ECX;
  
  FUN_0089d650(param_1);
  piVar1 = (int *)(**(code **)(*in_ECX + 0x74))(&param_1);
  if (piVar1 != (int *)0x0) {
    if (0x1e < *piVar1) {
      *piVar1 = 0;
    }
    in_ECX[4] = *piVar1;
    *piVar1 = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008aeac0(float param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = (int)param_1;
  FUN_008ae9a0(param_1);
  param_1 = (float)FUN_0070f910(DAT_00ba7f54);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = _DAT_00b2efc4;
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    param_1 = *(float *)(*(int *)(in_ECX + 8) + 0xc);
  }
  param_1 = param_1 * 6.99904;
  param_1 = (float)FUN_0070fb90("Radius",param_1);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined4 FUN_008aeb80(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  return CONCAT31(CONCAT21(CONCAT11(param_4,param_1),param_2),param_3);
}



int FUN_008aebb0(float param_1,float param_2,float param_3,float param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar1 = FUN_008ecb30(param_4 * 255.0);
  uVar2 = FUN_008ecb30(param_1 * 255.0);
  bVar3 = FUN_008ecb30(param_2 * 255.0);
  uVar4 = FUN_008ecb30(param_3 * 255.0);
  return (uVar4 & 0xff) + ((uint)CONCAT11(uVar1,uVar2) * 0x100 + (uint)bVar3) * 0x100;
}



void FUN_008aec30(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d6da8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a55b9c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  DAT_00ba7f5c = DAT_00ba7f5c + -1;
  local_4 = 0xffffffff;
  FUN_0089f2e0();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_008aeca0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x58))();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x2b0);
  }
  if (iVar1 != 0) {
    uVar2 = FUN_0088b4e0(in_ECX[2]);
    return uVar2;
  }
  return 0;
}



void FUN_008aece0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x58))();
  if (iVar1 != 0) {
    FUN_0089b390(in_ECX[2],1);
  }
  return;
}



void FUN_008aed00(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0089fb70(param_1);
  param_1 = FUN_0070f910(DAT_00ba7f60);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008aed50(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7158;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a55c2c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba7f68 = _DAT_00ba7f68 + -1;
  local_4 = 0xffffffff;
  FUN_008aec30();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008aedc0(int param_1)

{
  undefined1 auStack_6c [12];
  undefined1 local_60 [48];
  undefined1 local_30 [28];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_6c;
  FUN_006848d0(local_60);
  FUN_00607740(param_1,local_60);
  FUN_0043f3e0(param_1 + 0x24,local_30);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008aee10(undefined4 param_1)

{
  undefined1 auStack_68 [8];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [28];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_68;
  FUN_0089f580(param_1);
  FUN_006848d0(local_60);
  FUN_0047dcd0(local_60);
  FUN_0047dcd0(local_50);
  FUN_0047dcd0(local_40);
  FUN_0047dcd0(local_30);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008aee90(int param_1)

{
  uint uVar1;
  undefined1 auStack_a4 [12];
  undefined4 local_98;
  undefined1 local_94 [36];
  undefined1 local_70 [16];
  undefined1 local_60 [48];
  undefined1 local_30 [28];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_a4;
  FUN_008aed00(param_1);
  local_98 = FUN_0070f910(DAT_00ba7f6c);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_98);
  FUN_006848d0(local_60);
  FUN_00607740(local_94,local_60);
  FUN_0043f3e0(local_70,local_30);
  local_98 = FUN_00711a50(&DAT_00a97270);
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_98);
  local_98 = FUN_00707280("Trans");
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar1) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar1);
  }
  FUN_0042bb90(uVar1,&local_98);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008aefb0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7258;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a55cbc;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba7f74 = _DAT_00ba7f74 + -1;
  local_4 = 0xffffffff;
  FUN_008aed50();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008af020(void)

{
  undefined4 *in_ECX;
  
  FUN_0089d3d0();
  *in_ECX = &PTR_FUN_00a559cc;
  in_ECX[3] = 0;
  _DAT_00ba7d34 = _DAT_00ba7d34 + 1;
  *in_ECX = &PTR_FUN_00a55b9c;
  DAT_00ba7f5c = DAT_00ba7f5c + 1;
  *(undefined1 *)(in_ECX + 4) = 0;
  *in_ECX = &PTR_FUN_00a55c2c;
  _DAT_00ba7f68 = _DAT_00ba7f68 + 1;
  *(undefined1 *)(in_ECX + 4) = 0;
  *in_ECX = &PTR_FUN_00a55cbc;
  _DAT_00ba7f74 = _DAT_00ba7f74 + 1;
  *(undefined1 *)(in_ECX + 4) = 0;
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
  local_10 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_008af020();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008af0e0(undefined4 param_1)

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
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  iVar2 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_008af020();
  }
  local_4 = 0xffffffff;
  FUN_0089f5d0(uVar3,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008af1a0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_74 [80];
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009d728b;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_74;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff80;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x130,0x2e,uVar1);
    *(undefined2 *)(iVar2 + 4) = 0x130;
    uVar4 = *param_1;
    local_1c = 0;
    uVar3 = FUN_008a2050(&stack0xffffff88);
    uVar4 = FUN_008ecfc0(param_1[1],uVar3,uVar4);
    local_1c = -1;
    (**(code **)(*in_ECX + 0x4c))(uVar4);
    FUN_008bc730();
    (**(code **)(*in_ECX + 0x7c))(param_1);
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_008af270(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_008aee90(param_1);
  param_1 = FUN_0070f910(DAT_00ba7f78);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008af2c0(void)

{
  undefined4 *in_ECX;
  
  FUN_0089d3d0();
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = &PTR_FUN_00a5591c;
  DAT_00ba7d70 = DAT_00ba7d70 + 1;
  *in_ECX = &PTR_FUN_00a55a5c;
  _DAT_00ba7f44 = _DAT_00ba7f44 + 1;
  *in_ECX = &PTR_FUN_00a55afc;
  _DAT_00ba7f50 = _DAT_00ba7f50 + 1;
  *in_ECX = &PTR_FUN_00a55d4c;
  _DAT_00ba7f80 = _DAT_00ba7f80 + 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008af310(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d6e18;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a55d4c;
  local_4 = 0;
  FUN_0089d700(uVar1);
  _DAT_00ba7f80 = _DAT_00ba7f80 + -1;
  local_4 = 0xffffffff;
  FUN_008ae9f0();
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
  local_10 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_008af2c0();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008af3f0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  _DAT_00ba7cf8 = GetCurrentThreadId();
  _DAT_00ba7cfc = _DAT_00ba7cfc + 1;
  iVar2 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_008af2c0();
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x80))(uVar3,param_1);
  _DAT_00ba7cfc = _DAT_00ba7cfc + -1;
  if (_DAT_00ba7cfc == 0) {
    _DAT_00ba7cf8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00ba7c80);
  *unaff_FS_OFFSET = unaff_ESI;
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008af4f0(undefined1 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    puVar1 = (undefined4 *)FUN_00401f00(8);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = _DAT_00b2efc4;
    }
    *(undefined4 **)(in_ECX + 0xc) = puVar1;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_008aea60(puVar1);
    }
    *param_1 = 1;
    return *(undefined4 *)(in_ECX + 0xc);
  }
  *param_1 = 0;
  return *(undefined4 *)(in_ECX + 0xc);
}



void FUN_008af550(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d6eeb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    iStack_4 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x10,0x24,uVar1);
    *(undefined2 *)(iStack_4 + 4) = 0x10;
    local_c = 0;
    puVar2 = (undefined4 *)FUN_008ed410(*(undefined4 *)(param_1 + 4));
    local_c = -1;
    (**(code **)(*in_ECX + 0x4c))(puVar2);
    if ((*(short *)(puVar2 + 1) != 0) &&
       (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
       *(short *)((int)puVar2 + 6) == 0)) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*in_ECX + 0x7c))(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008af680(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_008aeac0(param_1);
  param_1 = FUN_0070f910(DAT_00ba7f84);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_008af760(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float *pfVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  int iVar23;
  
  do {
    fVar7 = *(float *)((param_2 + param_3 >> 1) * 0x30 + param_1 + 0x1c);
    iVar22 = param_3;
    iVar23 = param_2;
    do {
      for (pfVar19 = (float *)(iVar23 * 0x30 + 0x1c + param_1); *pfVar19 < fVar7;
          pfVar19 = pfVar19 + 0xc) {
        iVar23 = iVar23 + 1;
      }
      for (pfVar19 = (float *)(iVar22 * 0x30 + 0x1c + param_1); fVar7 < *pfVar19;
          pfVar19 = pfVar19 + -0xc) {
        iVar22 = iVar22 + -1;
      }
      if (iVar22 < iVar23) break;
      if (iVar22 != iVar23) {
        iVar20 = iVar22 * 0x30;
        uVar3 = *(undefined4 *)(iVar20 + 0x20 + param_1);
        puVar1 = (undefined4 *)(iVar20 + param_1);
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        puVar1 = (undefined4 *)(iVar20 + 0x10 + param_1);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        uVar14 = puVar1[2];
        uVar15 = puVar1[3];
        puVar1 = (undefined4 *)(iVar20 + param_1);
        uVar4 = puVar1[9];
        uVar5 = puVar1[10];
        uVar6 = puVar1[0xb];
        puVar2 = (undefined4 *)(iVar23 * 0x30 + param_1);
        uVar16 = puVar2[1];
        uVar17 = puVar2[2];
        uVar18 = puVar2[3];
        puVar21 = (undefined4 *)(iVar23 * 0x30 + param_1);
        *puVar1 = *puVar2;
        puVar1[1] = uVar16;
        puVar1[2] = uVar17;
        puVar1[3] = uVar18;
        uVar16 = puVar21[5];
        uVar17 = puVar21[6];
        uVar18 = puVar21[7];
        puVar1[4] = puVar21[4];
        puVar1[5] = uVar16;
        puVar1[6] = uVar17;
        puVar1[7] = uVar18;
        puVar1[8] = puVar21[8];
        puVar1[9] = puVar21[9];
        puVar1[10] = puVar21[10];
        puVar1[0xb] = puVar21[0xb];
        puVar21[9] = uVar4;
        puVar21[10] = uVar5;
        puVar21[8] = uVar3;
        *puVar21 = uVar8;
        puVar21[1] = uVar9;
        puVar21[2] = uVar10;
        puVar21[3] = uVar11;
        puVar21[4] = uVar12;
        puVar21[5] = uVar13;
        puVar21[6] = uVar14;
        puVar21[7] = uVar15;
        puVar21[0xb] = uVar6;
      }
      iVar22 = iVar22 + -1;
      iVar23 = iVar23 + 1;
    } while (iVar23 <= iVar22);
    if (param_2 < iVar22) {
      FUN_008af760(param_1,param_2,iVar22,param_4);
    }
    param_2 = iVar23;
    if (param_3 <= iVar23) {
      return;
    }
  } while( true );
}



void FUN_008af890(void)

{
  uint in_ECX;
  undefined4 local_4;
  
  local_4 = in_ECX & 0xffffff00;
  if (1 < *(int *)(in_ECX + 0x14)) {
    FUN_008af760(*(undefined4 *)(in_ECX + 0x10),0,*(int *)(in_ECX + 0x14) + -1,local_4);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_008af8c0(int *param_1,uint param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_114 [7];
  byte local_10d;
  int *local_10c;
  uint local_108;
  int local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [48];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_114;
  local_108 = param_2;
  local_10c = param_3;
  local_10d = 0;
  if (param_1 == (int *)0x0) {
    return param_2 & 0xffffff00;
  }
  local_104 = FUN_0047fac0(param_1);
  if ((local_104 != 0) && (piVar1 = *(int **)(local_104 + 0x10), piVar1 != (int *)0x0)) {
    iVar4 = piVar1[2];
    if ((iVar4 == 0) || (iVar4 == -0x14)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(iVar4 + 0x30);
    }
    if (((byte)uVar6 & 0x3f) == 8) {
      switch(uVar6 >> 8 & 0x1f) {
      case 1:
        if ((char)param_4 != '\0') break;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 0xb:
      case 0xc:
      case 0xd:
        iVar4 = FUN_00494f10();
        if ((iVar4 != 0) && (iVar4 = FUN_00560920(&DAT_00ba7fd8,iVar4), iVar4 != 0)) {
          (**(code **)(*piVar1 + 0xac))(&local_100);
          cVar2 = FUN_00405650(&DAT_00ba7a20,local_104);
          if (cVar2 == '\0') {
            (**(code **)(*piVar1 + 0xac))(&local_100);
          }
          else {
            cVar2 = FUN_00607840();
            if ((cVar2 == '\0') || (*(float *)(local_104 + 0x14) == 1.0)) {
              FUN_005398e0(&local_100,param_1 + 0x19);
              cVar2 = FUN_00405650(&DAT_00ba8018,piVar1);
              if (cVar2 != '\0') {
                uStack_a0 = local_100;
                uStack_9c = uStack_fc;
                uStack_98 = uStack_f8;
                uStack_94 = uStack_f4;
                uStack_90 = uStack_f0;
                uStack_8c = uStack_ec;
                uStack_88 = uStack_e8;
                uStack_84 = uStack_e4;
                uStack_80 = uStack_e0;
                uStack_7c = uStack_dc;
                uStack_78 = uStack_d8;
                uStack_74 = uStack_d4;
                uStack_70 = uStack_d0;
                uStack_6c = uStack_cc;
                uStack_68 = uStack_c8;
                uStack_64 = uStack_c4;
                FUN_008b1dd0(piVar1 + 8);
                iStack_30 = piVar1[0xc];
                iStack_2c = piVar1[0xd];
                iStack_28 = piVar1[0xe];
                iStack_24 = piVar1[0xf];
                FUN_008b1f70(&uStack_a0,auStack_60);
              }
            }
          }
          cVar2 = FUN_008b6dc0(local_108,&local_100,&iStack_c0);
          if ((cVar2 != '\0') && ((*local_10c == 0 || (fStack_a4 < (float)local_10c[0xb])))) {
            *local_10c = (int)piVar1;
            local_10c[4] = iStack_c0;
            local_10c[5] = iStack_bc;
            local_10c[6] = iStack_b8;
            local_10c[7] = iStack_b4;
            local_10c[8] = iStack_b0;
            local_10c[9] = iStack_ac;
            local_10c[10] = iStack_a8;
            local_10c[0xb] = (int)fStack_a4;
          }
        }
      }
    }
  }
  iVar4 = (**(code **)(*param_1 + 8))();
  uVar6 = 0;
  if (iVar4 != 0) {
    uVar7 = 0;
    uVar6 = 0;
    if (*(short *)(iVar4 + 0xb6) != 0) {
      if (*(short *)(iVar4 + 0xb6) != 0) goto LAB_008afae6;
      uVar5 = 0;
      while( true ) {
        bVar3 = FUN_008af8c0(uVar5,local_108,local_10c,param_4);
        local_10d = local_10d | bVar3;
        uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
        uVar7 = uVar7 + 1;
        if (uVar6 <= uVar7) break;
LAB_008afae6:
        uVar5 = *(undefined4 *)(*(int *)(iVar4 + 0xb0) + uVar7 * 4);
      }
    }
  }
  return CONCAT31((int3)(uVar6 >> 8),local_10d);
}



int FUN_008afb50(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_1 != (int *)0x0) {
    iVar2 = FUN_0047fac0(param_1);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x10), iVar2 != 0)) {
      iVar1 = *(int *)(iVar2 + 8);
      if ((iVar1 == 0) || (iVar1 == -0x14)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(iVar1 + 0x30);
      }
      if ((uVar3 >> 8 & 0x1f) == param_2) {
        return iVar2;
      }
    }
    iVar2 = (**(code **)(*param_1 + 8))();
    if (iVar2 != 0) {
      uVar3 = 0;
      do {
        if (*(ushort *)(iVar2 + 0xb6) <= uVar3) {
          return 0;
        }
        iVar4 = FUN_008afb50(*(undefined4 *)(*(int *)(iVar2 + 0xb0) + uVar3 * 4),param_2);
        uVar3 = uVar3 + 1;
      } while (iVar4 == 0);
    }
  }
  return iVar4;
}



undefined4 FUN_008afbe0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)param_1[3];
  if ((int *)param_1[3] == (int *)0x0) {
    piVar1 = param_1;
  }
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*piVar1 + 8);
    }
    iVar3 = FUN_00560920(&DAT_00ba7f9c,uVar2);
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 8) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 8) + 0xc);
      }
      if (iVar3 != 0) {
        return *(undefined4 *)(iVar3 + 8);
      }
      return 0;
    }
  }
  return 0;
}



undefined4 FUN_008afc40(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)param_1[3];
  if ((int *)param_1[3] == (int *)0x0) {
    piVar1 = param_1;
  }
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*piVar1 + 8);
    }
    iVar3 = FUN_00560920(&DAT_00ba7f9c,uVar2);
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 8) != 0) {
        return *(undefined4 *)(*(int *)(iVar3 + 8) + 0xc);
      }
      return 0;
    }
  }
  return 0;
}



undefined4 FUN_008afc90(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_008afbe0(param_1);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    iVar3 = (**(code **)(*piVar1 + 0x9c))(uVar2);
    if (iVar3 < 0x1e) {
      uVar2 = (**(code **)(*piVar1 + 0x9c))(uVar2);
      return uVar2;
    }
    uVar2 = 0x1e;
  }
  return uVar2;
}



undefined4 FUN_008afce0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 local_8 [8];
  
  if ((*(char *)(param_1 + 0x18) == '\x01') && (*(int *)(param_1 + 0x10) + param_1 != 0)) {
    piVar1 = (int *)FUN_0047f990(local_8,&DAT_00ba7b80);
    if (*piVar1 != 0) {
      uVar2 = FUN_00452a60();
      return uVar2;
    }
  }
  else if (*(char *)(param_1 + 0x18) == '\x02') {
    param_1 = *(int *)(param_1 + 0x10) + param_1;
    if (param_1 != 0) {
      piVar1 = (int *)FUN_0047f990(local_8,&DAT_00ba7b80);
      if (*piVar1 != 0) {
        uVar2 = FUN_00452a60();
        return uVar2;
      }
      if (*(int *)(param_1 + 0xc) != 0) {
        uVar2 = FUN_0089f6b0(0);
        return uVar2;
      }
    }
    return 0;
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_008afd70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_50 [15];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)local_50;
  local_50[0] = 0;
  FUN_008af8c0(param_1,param_2,local_50,param_3);
  return local_50[0];
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_008afdc0(float param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_148 [4];
  float local_144;
  undefined4 local_140;
  float local_13c;
  undefined4 local_130;
  undefined4 local_12c;
  float local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_104;
  int local_fc;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_60;
  undefined4 local_54;
  undefined1 local_40;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009d6d67;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_148;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffeb0;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_124 = 0;
  local_140 = 0;
  local_114 = 0;
  fVar1 = param_2 + param_2;
  if (param_1 < fVar1 != (param_1 == fVar1)) {
    param_1 = fVar1 + 1.0;
  }
  local_13c = param_2 * 0.14287673;
  local_130 = 0;
  local_12c = 0;
  local_144 = param_1 - param_2;
  local_128 = local_144 * 0.14287673;
  local_120 = 0;
  local_11c = 0;
  local_118 = local_13c;
  local_144 = (float)FUN_00401f00(0x14,uVar2);
  local_14 = 0;
  if (local_144 == 0.0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00563bb0(&local_140);
  }
  local_14 = 0xffffffff;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x10) = 9;
    FUN_008a5790();
    local_10c = *(undefined4 *)(iVar3 + 8);
    local_60 = 0;
    local_54 = 0x3f19999a;
    local_14 = 1;
    local_40 = 7;
    local_110 = 0x40009;
    local_f0 = 0x40009;
    local_ec = local_10c;
    local_144 = (float)FUN_00401f00(0x1c,uVar2);
    local_14 = CONCAT31(local_14._1_3_,2);
    if (local_144 == 0.0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00533290(&local_110);
    }
    local_14 = 0xffffffff;
    if (-1 < local_fc) {
      FUN_008a75d0(local_104,local_fc * 8,0x14);
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return uVar4;
}



void FUN_008affa0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d6da8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a55dfc;
  local_4 = 0;
  FUN_0089d700(uVar1);
  DAT_00ba7f8c = DAT_00ba7f8c + -1;
  local_4 = 0xffffffff;
  FUN_0089f2e0();
  *unaff_FS_OFFSET = local_c;
  return;
}


