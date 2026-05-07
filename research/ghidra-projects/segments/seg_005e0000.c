
undefined2 FUN_005e01b0(void)

{
  undefined4 uVar1;
  int *in_ECX;
  float10 extraout_ST0;
  float10 fVar2;
  
  uVar1 = (**(code **)(*in_ECX + 0x284))(5);
  FUN_00548960(uVar1);
  if (in_ECX[0x16] != 0) {
    fVar2 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 500))();
    if (fVar2 < (float10)(float)extraout_ST0) {
      return 0;
    }
  }
  return 1;
}



void FUN_005e0200(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char cVar2;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xe8) = *param_3;
  *(undefined4 *)(in_ECX + 0xec) = param_3[1];
  uVar1 = param_3[2];
  *(undefined4 *)(in_ECX + 0xf4) = param_4;
  *(undefined4 *)(in_ECX + 0xf0) = uVar1;
  if (param_2 != 0) {
    cVar2 = FUN_004c97f0();
    if (cVar2 != '\0') {
      *(int *)(in_ECX + 0xf8) = param_2;
      return;
    }
  }
  *(undefined4 *)(in_ECX + 0xf8) = param_1;
  return;
}



bool FUN_005e0260(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0xf8) != 0;
}



void FUN_005e0270(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x58) + 0xbc))(param_1);
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x68))(1);
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x350))();
  }
  return;
}



void FUN_005e02b0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x194))();
  }
  return;
}



float10 FUN_005e02d0(undefined4 param_1,float param_2)

{
  return (float10)param_2;
}



int FUN_005e02e0(char param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != '\0') {
    iVar3 = (**(code **)(*in_ECX + 0x128))();
  }
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  if (((iVar3 == 0) && (iVar2 != 0)) && (cVar1 = (**(code **)(*in_ECX + 400))(), cVar1 != '\0')) {
    return iVar2;
  }
  return iVar3;
}



void FUN_005e0330(void)

{
  FUN_00468670();
  return;
}



void FUN_005e0340(void)

{
  FUN_00402bd0();
  FUN_004686c0();
  return;
}



undefined4 FUN_005e0380(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005e0391. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x184))();
    return uVar1;
  }
  return 0;
}



undefined4 FUN_005e03a0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x58) + 8);
  }
  return 0;
}



void FUN_005e03b0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x005e03bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x58) + 0x244))();
  return;
}



void FUN_005e03c0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005e03d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x58) + 0xd0))();
    return;
  }
  return;
}



undefined4 * FUN_005e03e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  iVar3 = FUN_0067dd70(param_2);
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)FUN_004bef40();
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    *param_1 = *puVar4;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  return param_1;
}



void FUN_005e0430(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *piVar5;
  undefined4 unaff_retaddr;
  
  piVar2 = (int *)(**(code **)(*in_ECX + 0x170))();
  piVar5 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      piVar5 = piVar2;
    }
  }
  piVar3 = (int *)(**(code **)(*in_ECX + 0x170))();
  piVar2 = (int *)0x0;
  if (piVar3 != (int *)0x0) {
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      piVar2 = piVar3;
    }
  }
  uVar4 = (**(code **)(*piVar5 + 0x128))(7);
  uVar4 = (**(code **)(*piVar2 + 0x128))(unaff_retaddr,uVar4);
  FUN_00547b90(uVar4);
  return;
}



bool FUN_005e04c0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x284))(0x45);
  return 0 < iVar1;
}



bool FUN_005e04e0(void)

{
  int in_ECX;
  
  return in_ECX == DAT_00b333c4;
}



undefined4 FUN_005e0510(void)

{
  uint uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2c0))();
    if ((uVar1 & 0x200) != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_005e0530(void)

{
  uint uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2c0))();
    if ((uVar1 & 0x800) != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_005e0550(void)

{
  uint uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2c0))();
    if ((uVar1 & 0x400) != 0) {
      uVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2c0))();
      if ((uVar1 & 0x800) == 0) {
        return 1;
      }
    }
  }
  return 0;
}



undefined4 FUN_005e0590(void)

{
  uint uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2c0))();
    if ((uVar1 & 0x30) != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_005e05b0(void)

{
  uint uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2c0))();
    if ((uVar1 & 0xf) != 0) {
      return 1;
    }
  }
  return 0;
}



void FUN_005e05d0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x2c8))(0);
  }
  return;
}



void FUN_005e05f0(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x2c4))(param_1,0);
  }
  return;
}



void FUN_005e0610(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x2c4))(param_1,1);
  }
  return;
}



undefined4 FUN_005e0630(ushort param_1)

{
  ushort uVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x58) != 0) &&
     (uVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2c0))(), (param_1 & uVar1) != 0)) {
    return 1;
  }
  return 0;
}



float10 FUN_005e0660(void)

{
  int iVar1;
  int *in_ECX;
  float10 fVar2;
  undefined1 *puVar3;
  double dVar4;
  undefined1 local_18 [8];
  undefined1 auStack_10 [16];
  
  puVar3 = local_18;
  iVar1 = (**(code **)(*in_ECX + 0x15c))();
  dVar4 = (double)*(float *)(iVar1 + 8);
  iVar1 = (**(code **)(*in_ECX + 0x158))(auStack_10,puVar3,dVar4);
  dVar4 = (double)((float)(double)CONCAT44(SUB84(dVar4,0),puVar3) - *(float *)(iVar1 + 8));
  fVar2 = (float10)(**(code **)(*in_ECX + 0xec))();
  return (float10)(float)(fVar2 * (float10)dVar4);
}



uint FUN_005e06c0(int param_1,int param_2,float param_3)

{
  float fVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (param_2 != 0) {
    fVar3 = (float10)FUN_005e0660();
    fVar1 = *(float *)(param_1 + 8);
    fVar4 = (float10)FUN_004cace0();
    fVar3 = (float10)(fVar1 + (float)(fVar3 * (float10)param_3));
    uVar2 = CONCAT31((uint3)(byte)(fVar4 < fVar3 |
                                  (byte)((ushort)((ushort)(fVar4 == fVar3) << 0xe) >> 8)),1);
    if ((uVar2 & 0x4100) == 0) {
      return uVar2;
    }
  }
  return 0;
}



undefined4 FUN_005e0710(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_2 != 0) && (*(int *)(in_ECX + 0x58) != 0)) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x40c))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x58) + 0x40c))();
      iVar1 = (**(code **)(*piVar2 + 4))();
      if (iVar1 == 2) {
        iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x40c))();
        if (iVar1 != 0) {
          uVar3 = FUN_00683c70(param_1,param_2);
          return uVar3;
        }
      }
    }
  }
  return 0;
}



void FUN_005e07d0(float param_1)

{
  float fVar1;
  char cVar2;
  int *in_ECX;
  float10 fVar3;
  float unaff_retaddr;
  
  if ((NAN(param_1) || 0.0 < param_1 == (param_1 == 0.0)) &&
     (cVar2 = (**(code **)(*in_ECX + 0x278))(), cVar2 != '\0')) {
    fVar3 = (float10)(**(code **)(*in_ECX + 0x288))(10);
    fVar1 = (float)fVar3;
    if (NAN(fVar1) || fVar1 < 0.0 == (fVar1 == 0.0)) {
      if (unaff_retaddr + fVar1 < 0.0) {
        unaff_retaddr = -fVar1;
      }
      (**(code **)(*in_ECX + 0x2a4))(10,unaff_retaddr,0);
      return;
    }
  }
  return;
}



undefined4 FUN_005e0860(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  iVar1 = FUN_00485e00();
  if (iVar1 == 0) {
    return 0;
  }
  if (in_ECX == DAT_00b333c4) {
    FUN_0065dd20();
  }
  uVar2 = FUN_0048d910();
  return uVar2;
}



char FUN_005e08c0(int param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  int *in_ECX;
  code *pcVar2;
  
  if (param_1 == 0) {
    return '\0';
  }
  cVar1 = '\x01';
  if ((in_ECX == DAT_00b333c4) && (param_3 == '\0')) {
    cVar1 = FUN_006665e0(param_1 + 0x24);
    if (cVar1 != '\0') {
      pcVar2 = *(code **)(*in_ECX + 0x100);
      goto LAB_005e0956;
    }
  }
  else {
    (**(code **)(in_ECX[0x17] + 0x34))(param_1 + 0x24);
    FUN_0069bec0(0);
    if (in_ECX == DAT_00b333c4) goto LAB_005e0963;
    pcVar2 = *(code **)(*in_ECX + 0x100);
    cVar1 = '\x01';
LAB_005e0956:
    (*pcVar2)(param_1,param_2,1,0,0,0,0,0,1,0);
  }
  if (in_ECX != DAT_00b333c4) {
    return cVar1;
  }
LAB_005e0963:
  FUN_005c1900();
  return cVar1;
}



void FUN_005e0970(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005e0982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)(param_1 + 0xc))();
  return;
}



char FUN_005e0990(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  undefined4 unaff_EBX;
  
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  if (iVar3 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  cVar1 = FUN_0046f350(param_1);
  if (cVar1 != '\0') {
    iVar3 = (**(code **)(*in_ECX + 0x170))();
    if (iVar3 != 0) {
      (**(code **)(*in_ECX + 400))();
    }
    FUN_0046abf0(0x20);
  }
  iVar3 = (**(code **)(*(int *)(param_1 + 0x18) + 0x18))();
  if (((iVar3 == 4) || (iVar3 = (**(code **)(*(int *)(param_1 + 0x18) + 0x18))(), iVar3 == 1)) &&
     (cVar2 = FUN_006a1df0((int *)(param_1 + 0x18)), cVar2 == '\0')) {
    cVar1 = '\x01';
    (**(code **)in_ECX[0x17])(param_1,0);
    (**(code **)(in_ECX[0x17] + 4))(param_1,unaff_EBX,0);
  }
  return cVar1;
}



void FUN_005e0a60(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x288))(10);
  return;
}



void FUN_005e0a70(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005e0a81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x21c))();
    return;
  }
  return;
}



void FUN_005e0a90(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x218))();
  }
  return;
}



float10 FUN_005e0ac0(void)

{
  int in_ECX;
  float10 fVar1;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    fVar1 = (float10)(**(code **)(**(int **)(in_ECX + 0x58) + 0x430))();
    return (float10)(float)fVar1;
  }
  return (float10)1.0;
}



void FUN_005e0b10(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x330))();
  if (iVar1 != 0) {
    FUN_00618590();
    return;
  }
  iVar1 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
  if (iVar1 == 1) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x58))();
    return;
  }
  (**(code **)(*(int *)in_ECX[0x16] + 8))();
  (**(code **)(*(int *)in_ECX[0x16] + 0x58))();
  return;
}



void FUN_005e0b70(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = FUN_0041b8a0(uVar2);
  iVar4 = FUN_00401f00(0x4c);
  local_4 = 0;
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_006a0980(in_ECX + -0x68,uVar3,0);
  }
  local_4 = 0xffffffff;
  cVar1 = (**(code **)(*piVar5 + 0x68))();
  if (cVar1 != '\0') {
    FUN_00678d30(piVar5);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  (**(code **)*piVar5)(1);
  *unaff_FS_OFFSET = iVar4;
  return;
}



void FUN_005e0c20(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = FUN_0041b890(uVar2);
  iVar4 = FUN_00401f00(0x4c);
  local_4 = 0;
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_006a0980(in_ECX + -0x68,uVar3,0);
  }
  local_4 = 0xffffffff;
  cVar1 = (**(code **)(*piVar5 + 0x68))();
  if (cVar1 != '\0') {
    FUN_00678d30(piVar5);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  (**(code **)*piVar5)(1);
  *unaff_FS_OFFSET = iVar4;
  return;
}



void FUN_005e0cd0(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x288))(0x2b);
  return;
}



void FUN_005e0ce0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x58) + 0x2cc))();
  return;
}



void FUN_005e0d20(void)

{
  int *in_ECX;
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(*in_ECX + 0x288))(0);
  FUN_00547ed0((float)fVar1);
  return;
}



undefined4 FUN_005e0d40(void)

{
  int iVar1;
  int *in_ECX;
  float unaff_ESI;
  float10 fVar2;
  
  fVar2 = (float10)(**(code **)(*in_ECX + 0x288))(0);
  FUN_00547ed0((float)fVar2);
  iVar1 = (**(code **)(*in_ECX + 0x284))(0xb);
  if (unaff_ESI < (float)iVar1) {
    return 1;
  }
  return 0;
}



uint FUN_005e0da0(void)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005e0db1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x304))();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}



undefined4 FUN_005e0dc0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xb0);
}



float10 FUN_005e0dd0(void)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    iVar1 = **(int **)(in_ECX + 0x58);
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x4cc))();
    fVar2 = (float10)(**(code **)(iVar1 + 0x1d8))();
    return fVar2;
  }
  return (float10)50.0;
}



void FUN_005e0e10(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005e0e21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x214))();
    return;
  }
  return;
}



void FUN_005e0e50(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x005e0e5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x58) + 0x1d0))();
  return;
}



void FUN_005e0e60(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x58) + 0x368))();
  return;
}



uint FUN_005e0e80(void)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005e0e91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x388))();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}



undefined4 FUN_005e0ee0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005e0ef1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2d0))();
    return uVar1;
  }
  return 0xffffffff;
}



undefined4 FUN_005e0f00(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004d6d40();
  if (iVar1 != 0) {
    iVar1 = FUN_00485e00();
    if (iVar1 != 0) {
      uVar2 = FUN_004869c0();
      return uVar2;
    }
  }
  return 0;
}



bool FUN_005e0f30(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x36c))();
    return iVar1 == 9;
  }
  return false;
}



void FUN_005e0f50(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  
  piVar2 = (int *)(**(code **)(*in_ECX + 0x128))();
  piVar3 = (int *)(**(code **)(*in_ECX + 0x170))();
  if ((piVar2 == (int *)0x0) && (piVar3 != (int *)0x0)) {
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      piVar2 = piVar3;
    }
  }
  iVar4 = (**(code **)(*piVar2 + 0x120))();
  if (iVar4 == 0) {
    FUN_004a98c0();
    return;
  }
  return;
}



void FUN_005e0fb0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int *piVar4;
  
  iVar2 = FUN_004a98c0();
  piVar4 = (int *)0x0;
  if (param_1 == iVar2) {
    piVar3 = (int *)(**(code **)(*in_ECX + 0x170))();
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*in_ECX + 400))();
      if (cVar1 != '\0') {
        piVar4 = piVar3;
      }
    }
    (**(code **)(*piVar4 + 0x124))(0);
    return;
  }
  piVar3 = (int *)(**(code **)(*in_ECX + 0x170))();
  if (piVar3 != (int *)0x0) {
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      piVar4 = piVar3;
    }
  }
  (**(code **)(*piVar4 + 0x124))(param_1);
  return;
}



undefined4 FUN_005e1030(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  
  piVar2 = (int *)(**(code **)(*in_ECX + 0x380))();
  if ((piVar2 != (int *)0x0) && (in_ECX[0x16] != 0)) {
    iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))();
    if (iVar3 == 3) {
      if ((piVar2[0x16] != 0) &&
         (iVar3 = (**(code **)(*(int *)piVar2[0x16] + 0x2d0))(), iVar3 == 0xb)) {
        (**(code **)(*piVar2 + 0x164))();
        cVar1 = FUN_00471210();
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
    else if ((3 < iVar3) && (iVar3 < 6)) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_005e10a0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x3b0))(param_1);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 4);
    }
  }
  return 0;
}



void FUN_005e10f0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *in_ECX;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uStack_4;
  
  uVar1 = (**(code **)(*in_ECX + 0x284))(7);
  uVar1 = (**(code **)(*in_ECX + 0x284))(0x1d,uVar1);
  FUN_00547b90(uVar1);
  uVar4 = 7;
  uVar1 = (**(code **)(*uStack_4 + 0x284))(7);
  uVar2 = (**(code **)(*uStack_4 + 0x284))(0x1d,uVar1);
  fVar3 = (float10)FUN_00547b90(uVar2);
  uVar1 = (**(code **)(*in_ECX + 0x224))(uStack_4,uVar1,uVar4,(float)fVar3);
  uVar1 = FUN_009828c0(uVar1,(float)*(int *)(DAT_00b333c4 + 0x11c));
  uVar1 = FUN_009828c0(uVar1);
  FUN_00548130(uVar1);
  return;
}



void FUN_005e11a0(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  uVar4 = 7;
  uVar1 = (**(code **)(*param_1 + 0x284))(7);
  uVar2 = (**(code **)(*param_1 + 0x284))(0x1d,uVar1);
  fVar3 = (float10)FUN_00547b90(uVar2);
  uVar1 = (**(code **)(*param_1 + 0x224))(param_1,uVar1,uVar4,(float)fVar3);
  uVar1 = FUN_009828c0(uVar1);
  FUN_00548240(uVar1);
  return;
}



void FUN_005e1200(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  uVar4 = 7;
  uVar1 = (**(code **)(*param_1 + 0x284))(7);
  uVar2 = (**(code **)(*param_1 + 0x284))(0x1d,uVar1);
  fVar3 = (float10)FUN_00547b90(uVar2);
  uVar1 = (**(code **)(*param_1 + 0x224))(DAT_00b333c4,uVar1,uVar4,(float)fVar3);
  uVar1 = FUN_009828c0(uVar1);
  FUN_005481c0(uVar1);
  return;
}



undefined4 FUN_005e1260(int *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x170))();
  if (iVar2 != DAT_00b35ed4) {
    DAT_00b3b778 = (int *)0x0;
    return 0;
  }
  iVar2 = FUN_006ecc80();
  if (iVar2 != 0) {
    FUN_006ecc80();
    cVar1 = FUN_004c97f0();
    if (cVar1 != '\0') {
      DAT_00b3b778 = (int *)0x0;
      return 0;
    }
  }
  DAT_00b3b778 = param_1;
  return 1;
}



undefined4 FUN_005e12b0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0xe8))();
    return uVar1;
  }
  return 0;
}



undefined4 FUN_005e12e0(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x330))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0xcc))();
    if (iVar1 != 0) {
      (**(code **)(*(int *)in_ECX[0x16] + 0xcc))();
      iVar1 = FUN_004d6670();
      iVar2 = FUN_004d6670();
      if (iVar1 == iVar2) {
        (**(code **)(*(int *)in_ECX[0x16] + 0xcc))();
        iVar1 = FUN_006ecc80();
        iVar2 = FUN_006ecc80();
        if (iVar1 == iVar2) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



void FUN_005e1360(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0xca) = param_1;
  return;
}



void FUN_005e1370(char param_1,uint param_2)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 0xc4) = *(uint *)(in_ECX + 0xc4) | param_2;
    return;
  }
  *(uint *)(in_ECX + 0xc4) = ~param_2 & *(uint *)(in_ECX + 0xc4);
  return;
}



bool FUN_005e13a0(void)

{
  ushort uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2c0))();
    return (uVar1 & 0xa01) == 0x201;
  }
  return false;
}



void FUN_005e13d0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*in_ECX + 0x380))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*in_ECX + 0x380))();
    iVar1 = (**(code **)(*piVar2 + 0x164))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*in_ECX + 0x380))();
      uVar3 = param_1;
      (**(code **)(*piVar2 + 0x164))(param_1);
      FUN_00473200(uVar3);
    }
  }
  if (in_ECX == DAT_00b333c4) {
    iVar1 = FUN_0065d750(1);
    if (iVar1 != 0) {
      uVar3 = param_1;
      FUN_0065d750(1);
      FUN_00473200(uVar3);
    }
    iVar1 = FUN_0065d750(0);
    if (iVar1 != 0) {
      FUN_0065d750(0);
      FUN_00473200(param_1);
      return;
    }
  }
  else {
    iVar1 = (**(code **)(*in_ECX + 0x164))();
    if (iVar1 != 0) {
      (**(code **)(*in_ECX + 0x164))(param_1);
      FUN_00473200(param_1);
    }
  }
  return;
}



undefined4 FUN_005e14a0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005e14b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x3d0))();
    return uVar1;
  }
  return 0;
}



void FUN_005e14c0(undefined4 param_1)

{
  FUN_004941a0(4,param_1,&stack0x00000008);
  return;
}



void FUN_005e14e0(char *param_1)

{
  int in_ECX;
  
  *(char *)(in_ECX + 0x61) = *param_1;
  if (*param_1 == '\0') {
    *(undefined4 *)(in_ECX + 100) = 0;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005e1500(undefined4 param_1)

{
  undefined1 auStack_3c [12];
  undefined1 local_30 [28];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_3c;
  FUN_00891440(local_30);
  FUN_0043f3e0(param_1,local_30);
  return;
}



bool FUN_005e1550(void)

{
  int iVar1;
  
  iVar1 = FUN_0088d370();
  return iVar1 == 5;
}



void FUN_005e1570(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2198;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00721350(uVar1);
  in_ECX[3] = param_1;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a3fa3c;
  FUN_00721440(&DAT_00a3fa90);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005e15e0(void)

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
  puStack_8 = &LAB_009c2597;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00659990(uVar1);
  local_4 = 0;
  FUN_00699140();
  local_4._0_1_ = 1;
  FUN_006a1d50();
  local_4._0_1_ = 2;
  *in_ECX = &PTR_FUN_00a6e074;
  in_ECX[6] = &PTR_FUN_00a6e06c;
  in_ECX[0x17] = &PTR_LAB_00a6e024;
  in_ECX[0x1a] = &PTR_LAB_00a6dff4;
  FUN_0065be10();
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[2] = in_ECX[2] | 0x200000;
  local_4._0_1_ = 3;
  iVar2 = FUN_00401f00(0x90);
  local_4._0_1_ = 4;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_006438f0();
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  in_ECX[0x16] = uVar3;
  FUN_00673a90(in_ECX,3,0,0,0);
  in_ECX[0x2f] = 0xbf800000;
  in_ECX[0x2c] = 0;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1c] = 7;
  in_ECX[0x2b] = 0;
  *(undefined1 *)(in_ECX + 0x1e) = 1;
  in_ECX[0x37] = 0;
  *(undefined1 *)(in_ECX + 0x20) = 0;
  in_ECX[0x40] = 0;
  *(undefined1 *)((int)in_ECX + 0xc9) = 0;
  in_ECX[0x3d] = 0;
  *(undefined1 *)(in_ECX + 0x32) = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  *(undefined1 *)((int)in_ECX + 0xca) = 1;
  in_ECX[0x33] = 0;
  *(undefined1 *)(in_ECX + 0x38) = 1;
  in_ECX[0x31] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3a] = DAT_00b3f9a8;
  in_ECX[0x3b] = DAT_00b3f9ac;
  in_ECX[0x3c] = DAT_00b3f9b0;
  *(undefined1 *)(in_ECX + 0x3f) = 0;
  *(undefined1 *)((int)in_ECX + 0xfd) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005e1850(void)

{
  return;
}



void FUN_005e1880(char param_1)

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
  puStack_8 = &LAB_009c2597;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00659990(uVar1);
  local_4 = 0;
  FUN_00699140();
  local_4._0_1_ = 1;
  FUN_006a1d50();
  local_4._0_1_ = 2;
  *in_ECX = &PTR_FUN_00a6e074;
  in_ECX[6] = &PTR_FUN_00a6e06c;
  in_ECX[0x17] = &PTR_LAB_00a6e024;
  in_ECX[0x1a] = &PTR_LAB_00a6dff4;
  FUN_0065be10();
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[2] = in_ECX[2] | 0x200000;
  local_4._0_1_ = 3;
  iVar2 = FUN_00401f00(0x90);
  local_4._0_1_ = 4;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_006438f0();
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  in_ECX[0x16] = uVar3;
  if (param_1 != '\0') {
    FUN_00673a90(in_ECX,3,0,0,0);
  }
  in_ECX[0x39] = 0;
  in_ECX[0x2f] = 0xbf800000;
  in_ECX[0x2c] = 0;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1c] = 7;
  in_ECX[0x2b] = 0;
  *(undefined1 *)(in_ECX + 0x1e) = 1;
  in_ECX[0x37] = 0;
  *(undefined1 *)((int)in_ECX + 0xc9) = 0;
  in_ECX[0x40] = 0;
  *(undefined1 *)(in_ECX + 0x32) = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  *(undefined1 *)((int)in_ECX + 0xca) = 1;
  in_ECX[0x33] = 0;
  *(undefined1 *)(in_ECX + 0x36) = 0;
  *(undefined1 *)(in_ECX + 0x38) = 1;
  in_ECX[0x31] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3a] = DAT_00b3f9a8;
  in_ECX[0x3b] = DAT_00b3f9ac;
  uVar3 = DAT_00b3f9b0;
  in_ECX[0x21] = 0;
  in_ECX[0x3c] = uVar3;
  in_ECX[0x39] = 0;
  *(undefined1 *)(in_ECX + 0x3f) = 0;
  *(undefined1 *)((int)in_ECX + 0xfd) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_005e1a50(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 8))();
    if ((iVar1 == 0) && (*(int *)(in_ECX + 0x58) != 0)) {
      return *(undefined1 *)(*(int *)(in_ECX + 0x58) + 0x2a8);
    }
  }
  return 0;
}



void FUN_005e1a80(undefined1 param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 8))();
    if ((iVar1 == 0) && (*(int *)(in_ECX + 0x58) != 0)) {
      *(undefined1 *)(*(int *)(in_ECX + 0x58) + 0x2a8) = param_1;
    }
  }
  return;
}



void FUN_005e1ab0(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  iVar3 = 0;
  if (iVar2 != 0) {
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      iVar3 = iVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x005e1ae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar3 + 0x24) + 0x10))();
  return;
}



void FUN_005e1af0(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  iVar3 = 0;
  if (iVar2 != 0) {
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      iVar3 = iVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x005e1b25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar3 + 0x24) + 0x14))();
  return;
}



undefined4 FUN_005e1b30(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  iVar3 = 0;
  if (iVar2 != 0) {
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      iVar3 = iVar2;
    }
  }
  cVar1 = (**(code **)(*(int *)(iVar3 + 0x24) + 0x30))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    iVar3 = 0;
    if (iVar2 != 0) {
      cVar1 = (**(code **)(*in_ECX + 400))();
      if (cVar1 != '\0') {
        iVar3 = iVar2;
      }
    }
    cVar1 = (**(code **)(*(int *)(iVar3 + 0x24) + 0x28))();
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}



void FUN_005e1bb0(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  iVar3 = 0;
  if (iVar2 != 0) {
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      iVar3 = iVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x005e1be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar3 + 0x24) + 0x38))();
  return;
}



void FUN_005e1bf0(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  iVar3 = 0;
  if (iVar2 != 0) {
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      iVar3 = iVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x005e1c25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar3 + 0x24) + 0x40))();
  return;
}



void FUN_005e1c30(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  FUN_00519c70();
  return;
}



void FUN_005e1c70(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  FUN_00519ce0();
  return;
}



void FUN_005e1cb0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  FUN_00519c90();
  return;
}



void FUN_005e1cf0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  FUN_00519d00();
  return;
}



uint FUN_005e1d30(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  iVar3 = 0;
  if (iVar2 != 0) {
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      iVar3 = iVar2;
    }
  }
  return CONCAT31((uint3)(*(uint *)(iVar3 + 0x28) >> 9),(char)(*(uint *)(iVar3 + 0x28) >> 1)) &
         0xffffff01;
}



uint FUN_005e1d70(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  iVar3 = 0;
  if (iVar2 != 0) {
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      iVar3 = iVar2;
    }
  }
  return *(uint *)(iVar3 + 0x28) >> 3 & 0xffffff01;
}



byte FUN_005e1db0(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  iVar3 = 0;
  if (iVar2 != 0) {
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      iVar3 = iVar2;
    }
  }
  return ~(byte)(*(uint *)(iVar3 + 0x28) >> 9) & 1;
}



void FUN_005e1df0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  FUN_00519d20();
  return;
}



uint FUN_005e1e30(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  cVar1 = FUN_004d7f80();
  if (cVar1 == '\0') {
    return 1;
  }
  iVar2 = FUN_0041e210(0x5a);
  if (iVar2 != 0) {
    return (uint)*(byte *)(iVar2 + 0xc);
  }
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  iVar2 = 0;
  if (iVar3 != 0) {
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      iVar2 = iVar3;
    }
  }
  return *(uint *)(iVar2 + 0x28) >> 0xd & 0xffffff01;
}



undefined4 FUN_005e1e90(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  if (iVar2 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  cVar1 = FUN_00519cc0();
  if (cVar1 == '\0') {
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    if (iVar2 != 0) {
      (**(code **)(*in_ECX + 400))();
    }
    cVar1 = FUN_00519c70();
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*in_ECX + 0x170))();
      if (iVar2 != 0) {
        (**(code **)(*in_ECX + 400))();
      }
      cVar1 = FUN_00519ce0();
      if (cVar1 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}



int FUN_005e1f40(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xf8);
  iVar2 = 0;
  if ((iVar1 != 0) && (*(char *)(iVar1 + 4) == '5')) {
    iVar2 = iVar1;
  }
  return iVar2;
}



int FUN_005e1f60(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xf8);
  iVar3 = 0;
  if (((iVar1 != 0) && (*(char *)(iVar1 + 4) == '0')) &&
     (cVar2 = FUN_004c97f0(), iVar3 = iVar1, cVar2 == '\0')) {
    return 0;
  }
  return iVar3;
}



undefined1 FUN_005e1f90(void)

{
  undefined1 uVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  if (iVar2 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  uVar1 = FUN_004681d0();
  return uVar1;
}



void FUN_005e1fd0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  FUN_004677f0();
  return;
}



void FUN_005e2010(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x380))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x18c))();
    if (iVar1 == 4) {
      iVar1 = (**(code **)(*in_ECX + 0x380))();
      (**(code **)(**(int **)(iVar1 + 0x58) + 0xc4))(1);
    }
  }
  if (in_ECX[0x16] != 0) {
                    /* WARNING: Could not recover jumptable at 0x005e205f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)in_ECX[0x16] + 0xc4))();
    return;
  }
  return;
}



void FUN_005e2070(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  float10 extraout_ST0;
  float unaff_retaddr;
  
  piVar1 = in_ECX + 0x29;
  (**(code **)(*in_ECX + 0x40))(0x8000);
  while( true ) {
    if ((piVar1 == (int *)0x0) || (puVar2 = (undefined4 *)*piVar1, puVar2 == (undefined4 *)0x0)) {
      puVar2 = (undefined4 *)FUN_00401f00(8);
      uVar3 = FUN_009828c0();
      puVar2[1] = unaff_retaddr;
      *puVar2 = uVar3;
      FUN_00446cb0(puVar2);
      return;
    }
    if ((float)puVar2[1] == unaff_retaddr) break;
    piVar1 = (int *)piVar1[1];
  }
  iVar4 = (**(code **)(*in_ECX + 0x224))(unaff_retaddr);
  if (unaff_retaddr + (float)iVar4 < 0.0) {
    uVar3 = FUN_009828c0();
    *puVar2 = uVar3;
    return;
  }
  if (100.0 < unaff_retaddr + (float)iVar4) {
    iVar4 = FUN_009828c0();
    if ((float10)(iVar4 + -100) < extraout_ST0) {
      uVar3 = FUN_009828c0();
      *puVar2 = uVar3;
      return;
    }
    uVar3 = FUN_009828c0();
    *puVar2 = uVar3;
    return;
  }
  uVar3 = FUN_009828c0();
  *puVar2 = uVar3;
  return;
}



void FUN_005e21d0(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = (int *)(in_ECX + 0xa4);
  if (piVar2 != (int *)0x0) {
    while (iVar1 = *piVar2, iVar1 != 0) {
      if (*(int *)(iVar1 + 4) == param_1) {
        FUN_0065c620(iVar1);
        FUN_00401f20(iVar1);
        return;
      }
      piVar2 = (int *)piVar2[1];
      if (piVar2 == (int *)0x0) {
        return;
      }
    }
  }
  return;
}



void FUN_005e2210(undefined4 param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  
  *param_2 = 0.0;
  *param_3 = 1.0;
  switch(param_1) {
  case 8:
    uVar1 = (**(code **)(*in_ECX + 0x284))(5);
    uVar1 = (**(code **)(*in_ECX + 0x284))(0,uVar1);
    iVar2 = FUN_00548020(uVar1);
    *param_2 = (float)iVar2;
    return;
  case 9:
    fVar3 = (float10)(**(code **)(*in_ECX + 0x288))(0x28);
    iVar2 = *in_ECX;
    *param_3 = (float)(fVar3 / (float10)10.0);
    uVar1 = (**(code **)(iVar2 + 0x284))(1,in_ECX == DAT_00b333c4);
    iVar2 = FUN_005482b0(uVar1);
    *param_2 = (float)iVar2;
    return;
  case 10:
    uVar1 = (**(code **)(*in_ECX + 0x284))(2);
    uVar1 = (**(code **)(*in_ECX + 0x284))(3,uVar1);
    uVar1 = (**(code **)(*in_ECX + 0x284))(5,uVar1);
    uVar1 = (**(code **)(*in_ECX + 0x284))(0,uVar1);
    iVar2 = FUN_005479d0(uVar1);
    *param_2 = (float)iVar2;
    return;
  case 0xb:
    iVar2 = (**(code **)(*in_ECX + 0x284))(0);
    fVar3 = (float10)FUN_00547ed0((float)iVar2);
    *param_2 = (float)fVar3;
  }
  return;
}



void FUN_005e2360(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  undefined4 unaff_EBP;
  int *piVar5;
  
  piVar5 = (int *)in_ECX[0x16];
  if (piVar5 == (int *)0x0) {
    piVar3 = (int *)(**(code **)(*in_ECX + 0x170))();
    piVar5 = (int *)0x0;
    if ((piVar3 != (int *)0x0) && (cVar1 = (**(code **)(*in_ECX + 400))(), cVar1 != '\0')) {
      piVar5 = piVar3;
    }
    (**(code **)(*piVar5 + 0x134))(param_1,param_2);
    param_1 = unaff_EBP;
  }
  else {
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    iVar4 = 0;
    if ((iVar2 != 0) && (cVar1 = (**(code **)(*in_ECX + 400))(), cVar1 != '\0')) {
      iVar4 = iVar2;
    }
    (**(code **)(*piVar5 + 0x274))(iVar4,param_1,param_2);
  }
  switch(param_1) {
  case 0:
  case 7:
  case 0x12:
  case 0x1b:
    (**(code **)(*in_ECX + 0x2c0))();
  }
  return;
}



void FUN_005e2430(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  undefined4 unaff_EBP;
  int *piVar5;
  
  piVar5 = (int *)in_ECX[0x16];
  if (piVar5 == (int *)0x0) {
    piVar3 = (int *)(**(code **)(*in_ECX + 0x170))();
    piVar5 = (int *)0x0;
    if ((piVar3 != (int *)0x0) && (cVar1 = (**(code **)(*in_ECX + 400))(), cVar1 != '\0')) {
      piVar5 = piVar3;
    }
    (**(code **)(*piVar5 + 0x130))(param_1,param_2);
    param_1 = unaff_EBP;
  }
  else {
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    iVar4 = 0;
    if ((iVar2 != 0) && (cVar1 = (**(code **)(*in_ECX + 400))(), cVar1 != '\0')) {
      iVar4 = iVar2;
    }
    (**(code **)(*piVar5 + 0x270))(iVar4,param_1,param_2);
  }
  switch(param_1) {
  case 0:
  case 7:
  case 0x12:
  case 0x1b:
    (**(code **)(*in_ECX + 0x2c0))();
  }
  return;
}



void FUN_005e2510(void)

{
  FUN_009828c0();
  FUN_009828c0();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005e2560(float param_1,int param_2)

{
  float10 fVar1;
  float fVar2;
  int in_ECX;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)param_1;
  if ((param_2 != 0) && (fVar1 = (float10)0, fVar1 != (float10)*(float *)(DAT_00b333c4 + 0x734))) {
    fVar2 = *(float *)(DAT_00b333c4 + 0x734) * _DAT_00b37b88;
    if (fVar1 <= (float10)*(float *)(DAT_00b333c4 + 0x734)) {
      fVar2 = fVar2 + 1.0;
    }
    else {
      if (fVar2 == 1.0) {
        return fVar3;
      }
      fVar2 = 1.0 / ABS(fVar2 - 1.0);
    }
    fVar4 = (float10)fVar2;
    if (fVar4 != fVar1) {
      if (in_ECX == DAT_00b333c4) {
        if (fVar1 <= fVar3) {
          return (float10)(float)(fVar3 / fVar4);
        }
        return (float10)(float)(fVar4 * fVar3);
      }
      if (param_2 == DAT_00b333c4) {
        if (fVar1 <= fVar3) {
          return (float10)(float)(fVar4 * fVar3);
        }
        return (float10)(float)(fVar3 / fVar4);
      }
      return (float10)param_1;
    }
  }
  return fVar3;
}



void FUN_005e2670(int param_1,char param_2)

{
  int iVar1;
  int *in_ECX;
  
  if (param_1 - 0xcU < 0x15) {
    if ((param_1 == 0x12) || (param_1 == 0x1b)) {
      iVar1 = FUN_0041e6f0();
      if (iVar1 != 0) {
        FUN_00484310();
      }
      (**(code **)(*in_ECX + 0x2c0))();
    }
    if ((in_ECX == DAT_00b333c4) && (param_2 != '\0')) {
      FUN_006670c0();
    }
  }
  return;
}



void FUN_005e26d0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  
  if (((param_1 != 10) || (-1 < param_2)) ||
     (cVar2 = (**(code **)(*in_ECX + 0x278))(), cVar2 != '\0')) {
    FUN_009828c0();
    iVar3 = FUN_009828c0();
    piVar1 = (int *)in_ECX[0x16];
    if (piVar1 != (int *)0x0) {
      iVar4 = (**(code **)(*in_ECX + 0x170))();
      iVar5 = 0;
      if ((iVar4 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
        iVar5 = iVar4;
      }
      (**(code **)(*piVar1 + 0x27c))(iVar5,param_1,iVar3);
    }
    if ((param_1 == 8) && (iVar3 < 0)) {
      (**(code **)(*in_ECX + 0x3b8))(param_3,(float)iVar3);
    }
    (**(code **)(*in_ECX + 0x40))(0x100000);
    if ((param_1 - 0xcU < 0x15) && ((param_1 == 0x12 || (param_1 == 0x1b)))) {
      iVar3 = FUN_0041e6f0();
      if (iVar3 != 0) {
        FUN_00484310();
      }
      (**(code **)(*in_ECX + 0x2c0))();
    }
  }
  return;
}



void FUN_005e2800(int param_1,float param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  if (((param_1 != 10) || (0.0 <= param_2)) ||
     (cVar2 = (**(code **)(*in_ECX + 0x278))(), cVar2 != '\0')) {
    piVar1 = (int *)in_ECX[0x16];
    if (piVar1 != (int *)0x0) {
      iVar3 = (**(code **)(*in_ECX + 0x170))();
      iVar4 = 0;
      if ((iVar3 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
        iVar4 = iVar3;
      }
      (**(code **)(*piVar1 + 0x278))(iVar4,param_1,param_2);
    }
    if ((param_1 == 8) && (param_2 < 0.0)) {
      (**(code **)(*in_ECX + 0x3b8))(param_3,param_2);
    }
    (**(code **)(*in_ECX + 0x40))(0x100000);
    if ((param_1 - 0xcU < 0x15) && ((param_1 == 0x12 || (param_1 == 0x1b)))) {
      iVar4 = FUN_0041e6f0();
      if (iVar4 != 0) {
        FUN_00484310();
      }
      (**(code **)(*in_ECX + 0x2c0))();
    }
  }
  return;
}



void FUN_005e28f0(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  if (((param_1 != 10) || (-1 < param_2)) ||
     (cVar1 = (**(code **)(*in_ECX + 0x278))(), cVar1 != '\0')) {
    FUN_009828c0();
    iVar2 = FUN_009828c0();
    FUN_0065ca60(param_1,(float)iVar2,1);
    if ((param_1 == 8) && (iVar2 < 0)) {
      (**(code **)(*in_ECX + 0x3b8))(param_3,(float)iVar2);
    }
    (**(code **)(*in_ECX + 0x40))(0x200000);
    if ((param_1 - 0xcU < 0x15) && ((param_1 == 0x12 || (param_1 == 0x1b)))) {
      iVar2 = FUN_0041e6f0();
      if (iVar2 != 0) {
        FUN_00484310();
      }
      (**(code **)(*in_ECX + 0x2c0))();
    }
  }
  return;
}



void FUN_005e29f0(int param_1,float param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  if (((param_1 != 10) || (0.0 <= param_2)) ||
     (cVar1 = (**(code **)(*in_ECX + 0x278))(), cVar1 != '\0')) {
    FUN_0065ca60(param_1,param_2,1);
    if ((param_1 == 8) && (param_2 < 0.0)) {
      (**(code **)(*in_ECX + 0x3b8))(param_3,param_2);
    }
    (**(code **)(*in_ECX + 0x40))(0x200000);
    if ((param_1 - 0xcU < 0x15) && ((param_1 == 0x12 || (param_1 == 0x1b)))) {
      iVar2 = FUN_0041e6f0();
      if (iVar2 != 0) {
        FUN_00484310();
      }
      (**(code **)(*in_ECX + 0x2c0))();
    }
  }
  return;
}



void FUN_005e2ab0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  
  if (((param_1 != 10) || (-1 < param_2)) ||
     (cVar2 = (**(code **)(*in_ECX + 0x278))(), cVar2 != '\0')) {
    FUN_009828c0();
    iVar3 = FUN_009828c0();
    piVar1 = (int *)in_ECX[0x16];
    if (piVar1 != (int *)0x0) {
      iVar4 = (**(code **)(*in_ECX + 0x170))();
      iVar5 = 0;
      if ((iVar4 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
        iVar5 = iVar4;
      }
      (**(code **)(*piVar1 + 0x28c))(iVar5,param_1,iVar3);
    }
    if ((param_1 == 8) && (iVar3 < 0)) {
      (**(code **)(*in_ECX + 0x3b8))(param_3,(float)iVar3);
    }
    (**(code **)(*in_ECX + 0x40))(0x400000);
    if ((param_1 - 0xcU < 0x15) && ((param_1 == 0x12 || (param_1 == 0x1b)))) {
      iVar3 = FUN_0041e6f0();
      if (iVar3 != 0) {
        FUN_00484310();
      }
      (**(code **)(*in_ECX + 0x2c0))();
    }
  }
  return;
}



void FUN_005e2be0(int param_1,float param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  if (((param_1 != 10) || (0.0 <= param_2)) ||
     (cVar2 = (**(code **)(*in_ECX + 0x278))(), cVar2 != '\0')) {
    piVar1 = (int *)in_ECX[0x16];
    if (piVar1 != (int *)0x0) {
      iVar3 = (**(code **)(*in_ECX + 0x170))();
      iVar4 = 0;
      if ((iVar3 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
        iVar4 = iVar3;
      }
      (**(code **)(*piVar1 + 0x288))(iVar4,param_1,param_2);
    }
    if ((param_1 == 8) && (param_2 < 0.0)) {
      (**(code **)(*in_ECX + 0x3b8))(param_3,param_2);
    }
    (**(code **)(*in_ECX + 0x40))(0x400000);
    if ((param_1 - 0xcU < 0x15) && ((param_1 == 0x12 || (param_1 == 0x1b)))) {
      iVar4 = FUN_0041e6f0();
      if (iVar4 != 0) {
        FUN_00484310();
      }
      (**(code **)(*in_ECX + 0x2c0))();
    }
  }
  return;
}



void FUN_005e2cd0(int param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  
  piVar2 = (int *)(**(code **)(*in_ECX + 0x170))();
  piVar4 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      piVar4 = piVar2;
    }
  }
  (**(code **)(*piVar4 + 0x13c))(param_1,param_2);
  if ((param_1 - 0xcU < 0x15) && ((param_1 == 0x12 || (param_1 == 0x1b)))) {
    iVar3 = FUN_0041e6f0();
    if (iVar3 != 0) {
      FUN_00484310();
    }
    (**(code **)(*in_ECX + 0x2c0))();
  }
  return;
}



void FUN_005e2d50(int param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  
  piVar2 = (int *)(**(code **)(*in_ECX + 0x170))();
  piVar4 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      piVar4 = piVar2;
    }
  }
  (**(code **)(*piVar4 + 0x138))(param_1,param_2);
  if ((param_1 - 0xcU < 0x15) && ((param_1 == 0x12 || (param_1 == 0x1b)))) {
    iVar3 = FUN_0041e6f0();
    if (iVar3 != 0) {
      FUN_00484310();
    }
    (**(code **)(*in_ECX + 0x2c0))();
  }
  return;
}



int FUN_005e2dd0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = 0;
  if ((*(int *)(in_ECX + 0x58) != 0) &&
     ((iVar2 = *(int *)(*(int *)(in_ECX + 0x58) + 8), iVar2 == 0 ||
      (cVar1 = FUN_00567770(), cVar1 != '\0')))) {
    iVar2 = FUN_0041fb20();
    return iVar2;
  }
  return iVar2;
}



undefined4 FUN_005e2e00(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (((*(int *)(in_ECX + 0x58) != 0) && (iVar1 = *(int *)(*(int *)(in_ECX + 0x58) + 8), iVar1 != 0)
      ) && (*(int *)(iVar1 + 0x28) != 0)) {
    uVar2 = FUN_00569e60();
    return uVar2;
  }
  return 0;
}



void FUN_005e2e20(float *param_1,float param_2,float param_3,float param_4,int param_5,float param_6
                 ,float param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  int *in_ECX;
  float fVar8;
  float fVar9;
  float fVar10;
  float10 fVar11;
  
  fVar8 = param_4;
  fVar9 = param_3;
  fVar10 = param_2;
  if (param_5 == 0) goto LAB_005e3085;
  iVar5 = FUN_004af170();
  if (iVar5 == 0) {
    cVar4 = FUN_004c97f0();
    fVar8 = param_4;
    fVar9 = param_3;
    fVar10 = param_2;
    if (cVar4 == '\0') {
      FUN_00440590(&param_2,&param_7);
      fVar9 = param_3;
      fVar10 = param_2;
      if ((param_6._0_1_ != '\0') || (fVar8 = param_4, param_4 < param_7 + 32.0)) {
        fVar8 = param_7 + 32.0;
      }
    }
    goto LAB_005e3085;
  }
  iVar5 = FUN_0067d820(&param_2);
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_004e7de0();
    if ((piVar6 == (int *)0x0) || ((piVar6[1] == 0 && (*piVar6 == 0)))) {
      if (param_7._0_1_ != '\0') {
        iVar5 = FUN_004bef40();
        fVar10 = *(float *)(iVar5 + 8);
        iVar5 = (**(code **)(*in_ECX + 0x174))();
        if (*(float *)(iVar5 + 8) != fVar10) goto LAB_005e300d;
      }
      pfVar7 = (float *)FUN_004bef40();
      param_2 = *pfVar7;
      param_3 = pfVar7[1];
      param_4 = pfVar7[2];
    }
    else if (*piVar6 != 0) {
      if (param_7._0_1_ != '\0') {
        iVar5 = FUN_004bef40();
        fVar10 = *(float *)(iVar5 + 8);
        iVar5 = (**(code **)(*in_ECX + 0x174))();
        param_7 = ABS(fVar10 - *(float *)(iVar5 + 8));
        if (80.0 <= param_7) goto LAB_005e300d;
      }
      pfVar7 = (float *)FUN_004bef40();
      fVar10 = *pfVar7;
      fVar9 = pfVar7[1];
      fVar8 = pfVar7[2];
      pfVar7 = (float *)FUN_004bef40();
      fVar1 = *pfVar7;
      fVar2 = pfVar7[1];
      fVar3 = pfVar7[2];
      fVar11 = (float10)FUN_0043f350();
      param_6 = (float)fVar11;
      iVar5 = FUN_0047df80(0);
      param_7 = param_6 * ((float)(iVar5 % 1000) / 1000.0);
      if (param_7 <= param_6) {
        fVar10 = (fVar10 - fVar1) * param_7;
        fVar9 = (fVar9 - fVar2) * param_7;
        fVar8 = param_7 * (fVar8 - fVar3);
        pfVar7 = (float *)FUN_004bef40();
        fVar8 = pfVar7[2] + fVar8;
        fVar9 = pfVar7[1] + fVar9;
        fVar10 = *pfVar7 + fVar10;
      }
      goto LAB_005e3085;
    }
  }
LAB_005e300d:
  pfVar7 = (float *)(**(code **)(*in_ECX + 0x174))();
  fVar8 = pfVar7[2];
  fVar9 = pfVar7[1];
  fVar10 = *pfVar7;
LAB_005e3085:
  *param_1 = fVar10;
  param_1[1] = fVar9;
  param_1[2] = fVar8;
  return;
}



undefined4 FUN_005e30a0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *in_ECX;
  float10 fVar7;
  float10 fVar8;
  undefined1 *puVar9;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  if (in_ECX[0x16] == 0) {
    return 0;
  }
  iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))();
  piVar3 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0xcc))();
  if ((((iVar2 != 0) && (*(char *)(iVar2 + 0x20) == '\x02')) && (piVar3 == DAT_00b333c4)) &&
     (piVar3 != (int *)0x0)) {
    uVar4 = FUN_00566b30(&uStack_24,in_ECX);
    puVar9 = auStack_18;
    (**(code **)(*in_ECX + 0x174))(puVar9,uVar4);
    FUN_004121a0(puVar9,uVar4);
    uVar4 = FUN_00566b30(auStack_18,in_ECX);
    puVar9 = auStack_c;
    (**(code **)(*piVar3 + 0x174))(puVar9,uVar4);
    puVar5 = (undefined4 *)FUN_004121a0(puVar9,uVar4);
    uStack_24 = *puVar5;
    uStack_20 = puVar5[1];
    uStack_1c = puVar5[2];
    iVar2 = FUN_006ecc80();
    if (iVar2 != 0) {
      FUN_006ecc80();
      cVar1 = FUN_004c97f0();
      if (cVar1 != '\0') {
        iVar2 = FUN_00566a40(in_ECX);
        if (iVar2 != 0) {
          FUN_00566a40(in_ECX);
          cVar1 = FUN_004c97f0();
          if (cVar1 != '\0') {
            iVar2 = FUN_00566a40(in_ECX);
            iVar6 = FUN_006ecc80();
            if (iVar2 != iVar6) {
              return 0;
            }
          }
        }
      }
    }
    fVar7 = (float10)FUN_00404c90();
    fVar8 = (float10)FUN_00404c90();
    if (fVar8 < (float10)(double)fVar7) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_005e3220(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) == 0) {
    return 0;
  }
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x184))();
  if (iVar2 != 0) {
    if ((*(char *)(iVar2 + 0x20) == '\x01') && (cVar1 = FUN_005660a0(), cVar1 == '\0')) {
      return 1;
    }
    if (*(char *)(iVar2 + 0x20) == '\x1f') {
      return 1;
    }
  }
  return 0;
}



bool FUN_005e3270(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  return *(char *)(iVar1 + 4) == '$';
}



undefined4 FUN_005e3290(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if (*(char *)(iVar1 + 4) == '$') {
    iVar1 = (**(code **)(*in_ECX + 0x170))();
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x104) == '\x04')) {
      return 1;
    }
  }
  return 0;
}



bool FUN_005e32d0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  return *(char *)(iVar1 + 4) == '#';
}



undefined4 FUN_005e32f0(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  cVar1 = FUN_004d7f80();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    if (iVar2 != 0) {
      return *(undefined4 *)(iVar2 + 0xe8);
    }
  }
  return 0;
}



undefined4 FUN_005e3320(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  cVar1 = FUN_004d7f80();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    if (iVar2 != 0) {
      return *(undefined4 *)(iVar2 + 0x104);
    }
  }
  return 0;
}



bool FUN_005e3350(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x1a0))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*in_ECX + 0x198))(0);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*in_ECX + 0x19c))();
      if (((cVar1 == '\0') && (in_ECX[0x2c] != 5)) && (in_ECX[0x2c] != 3)) {
        iVar2 = (**(code **)(*in_ECX + 0x18c))();
        return iVar2 == 0;
      }
    }
  }
  return false;
}



undefined1 FUN_005e3400(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *in_ECX;
  
  if ((char)in_ECX[0x36] != '\0') {
    return 1;
  }
  if (((in_ECX[0x16] == 0) || (iVar3 = *(int *)(in_ECX[0x16] + 8), iVar3 == 0)) ||
     ((cVar1 = *(char *)(iVar3 + 0x20), cVar1 != '\f' && (cVar1 != '\x0f')))) {
    uVar2 = 0;
    cVar1 = FUN_004d7f80();
    if (cVar1 == '\0') {
      uVar2 = FUN_005e1c30();
    }
    else if ((in_ECX[0x16] != 0) && (iVar3 = *(int *)(in_ECX[0x16] + 8), iVar3 != 0)) {
      if ((*(uint *)(iVar3 + 0x1c) >> 0x12 & 1) != 0) {
        return 1;
      }
    }
    return uVar2;
  }
  iVar3 = (**(code **)(*in_ECX + 0x330))();
  if (iVar3 != 0) {
    cVar1 = FUN_005e1cb0();
    if (((cVar1 != '\0') || (*(int *)(iVar3 + 0x70) == 7)) && (*(int *)(iVar3 + 0x70) != 0xd)) {
      cVar1 = FUN_00612690(*(int *)(iVar3 + 0x70));
      if (cVar1 == '\0') goto LAB_005e3465;
    }
    return 0;
  }
LAB_005e3465:
  uVar2 = FUN_005e1c30();
  return uVar2;
}



uint FUN_005e34b0(void)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  if (*(int *)(in_ECX + 0x58) == 0) {
    return 0;
  }
  uVar2 = *(uint *)(*(int *)(in_ECX + 0x58) + 8);
  if (uVar2 != 0) {
    uVar1 = FUN_00567770();
    if ((char)uVar1 == '\0') goto LAB_005e34da;
  }
  uVar1 = FUN_0041fb20();
  uVar2 = uVar1;
LAB_005e34da:
  if (uVar2 != 0) {
    uVar1 = *(uint *)(uVar2 + 0x1c) >> 0x13;
    if ((uVar1 & 1) != 0) {
      return CONCAT31((uint3)(*(uint *)(uVar2 + 0x1c) >> 0x1b),1);
    }
  }
  return uVar1 & 0xffffff00;
}



float10 FUN_005e3500(void)

{
  float fVar1;
  int iVar2;
  int *in_ECX;
  float unaff_ESI;
  float10 fVar3;
  float10 fVar4;
  
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  if (iVar2 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  FUN_00485e00();
  FUN_00488280(in_ECX);
  fVar3 = (float10)FUN_004d8fb0();
  fVar4 = (float10)(**(code **)(*in_ECX + 0x288))(0xb);
  fVar1 = (float)(fVar4 - (float10)unaff_ESI) + (float)fVar3;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  return (float10)fVar1;
}



float10 FUN_005e3590(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  undefined4 uStack_c;
  
  cVar1 = (**(code **)(*in_ECX + 0x25c))();
  if (cVar1 != '\0') {
    return (float10)0;
  }
  if ((in_ECX[0x16] != 0) &&
     (uVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x2c0))(), (uVar2 & 0x400) != 0)) {
    uVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x2c0))();
    uStack_c = 1;
    if ((uVar2 & 0x800) == 0) goto LAB_005e35e1;
  }
  uStack_c = 0;
LAB_005e35e1:
  cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))();
  fVar5 = (float10)FUN_005e3500();
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  iVar3 = (**(code **)(*in_ECX + 0x284))
                    (4,(float)fVar5,uStack_c,cVar1 == '\0',*(char *)(iVar3 + 4) == '#');
  fVar5 = (float10)FUN_00547c00((float)iVar3);
  if ((((((in_ECX[0x16] != 0) && (iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))(), iVar3 != 0)
         ) && (*(char *)(iVar3 + 0x20) == '\x01')) &&
       ((in_ECX[0x16] != 0 && (iVar3 = *(int *)(in_ECX[0x16] + 8), iVar3 != 0)))) &&
      ((*(int *)(iVar3 + 0x28) != 0 &&
       ((piVar4 = (int *)FUN_00569e60(), piVar4 != (int *)0x0 && (piVar4 != DAT_00b333c4)))))) &&
     ((cVar1 = (**(code **)(*piVar4 + 400))(), cVar1 != '\0' && (piVar4[0x16] != 0)))) {
    fVar6 = (float10)FUN_005e3590();
    fVar7 = (float)fVar6;
    if (0.0 < fVar7) {
      fVar6 = (float10)FUN_004d7e90(piVar4,0);
      if (fVar6 < (float10)150.0) {
        fVar7 = fVar7 - 50.0;
      }
      if ((0.0 < fVar7) && (fVar7 <= (float)fVar5)) {
        return (float10)fVar7;
      }
    }
  }
  return (float10)(float)fVar5;
}



float10 FUN_005e3750(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  undefined4 uStack_c;
  
  cVar1 = (**(code **)(*in_ECX + 0x25c))();
  if (cVar1 != '\0') {
    return (float10)0;
  }
  cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))();
  FUN_005e3500();
  if ((in_ECX[0x16] != 0) &&
     (uVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x2c0))(), (uVar2 & 0x400) != 0)) {
    uVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x2c0))();
    uStack_c = 1;
    if ((uVar2 & 0x800) == 0) goto LAB_005e37c2;
  }
  uStack_c = 0;
LAB_005e37c2:
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  iVar3 = (**(code **)(*in_ECX + 0x284))(0xd,*(char *)(iVar3 + 4) == '#',uStack_c);
  iVar3 = (**(code **)(*in_ECX + 0x284))(4,cVar1 == '\0',uStack_c,(float)iVar3);
  fVar5 = (float10)FUN_00547d00((float)iVar3);
  if ((((((in_ECX[0x16] != 0) && (iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))(), iVar3 != 0)
         ) && (*(char *)(iVar3 + 0x20) == '\x01')) &&
       ((in_ECX[0x16] != 0 && (iVar3 = *(int *)(in_ECX[0x16] + 8), iVar3 != 0)))) &&
      ((*(int *)(iVar3 + 0x28) != 0 &&
       ((piVar4 = (int *)FUN_00569e60(), piVar4 != (int *)0x0 && (piVar4 != DAT_00b333c4)))))) &&
     ((cVar1 = (**(code **)(*piVar4 + 400))(), cVar1 != '\0' && (piVar4[0x16] != 0)))) {
    fVar6 = (float10)FUN_005e3750();
    fVar7 = (float)fVar6;
    if (0.0 < fVar7) {
      fVar6 = (float10)FUN_004d7e90(piVar4,0);
      if (fVar6 < (float10)150.0) {
        fVar7 = fVar7 - 50.0;
      }
      if ((0.0 < fVar7) && (fVar7 <= (float)fVar5)) {
        return (float10)fVar7;
      }
    }
  }
  return (float10)(float)fVar5;
}



float10 FUN_005e3920(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  float10 fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uStack_c;
  
  cVar1 = (**(code **)(*in_ECX + 0x25c))();
  if (cVar1 != '\0') {
    return (float10)0;
  }
  (**(code **)(*(int *)in_ECX[0x16] + 0x304))();
  FUN_005e3500();
  (**(code **)(*in_ECX + 0x170))();
  uVar7 = 0x36;
  iVar2 = (**(code **)(*in_ECX + 0x284))(0x36);
  iVar3 = (**(code **)(*in_ECX + 0x284))(0xd,(float)iVar2);
  iVar2 = (**(code **)(*in_ECX + 0x284))(4,uStack_c,iVar2,uVar7,(float)iVar3);
  fVar5 = (float10)FUN_00547d60((float)iVar2);
  fVar8 = (float)fVar5;
  if ((((((in_ECX[0x16] != 0) && (iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))(), iVar2 != 0)
         ) && (*(char *)(iVar2 + 0x20) == '\x01')) &&
       ((in_ECX[0x16] != 0 && (iVar2 = *(int *)(in_ECX[0x16] + 8), iVar2 != 0)))) &&
      ((*(int *)(iVar2 + 0x28) != 0 &&
       ((piVar4 = (int *)FUN_00569e60(), piVar4 != (int *)0x0 && (piVar4 != DAT_00b333c4)))))) &&
     ((cVar1 = (**(code **)(*piVar4 + 400))(), cVar1 != '\0' && (piVar4[0x16] != 0)))) {
    fVar5 = (float10)FUN_005e3920();
    fVar6 = (float)fVar5;
    if (0.0 < fVar6) {
      fVar5 = (float10)FUN_004d7e90(piVar4,0);
      if (fVar5 < (float10)150.0) {
        fVar6 = fVar6 - 50.0;
      }
      if ((0.0 < fVar6) && (fVar6 <= fVar8)) {
        return (float10)fVar6;
      }
    }
  }
  return (float10)fVar8;
}



float10 FUN_005e3ad0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  float10 fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uStack_c;
  
  cVar1 = (**(code **)(*in_ECX + 0x25c))();
  if (cVar1 != '\0') {
    return (float10)0;
  }
  (**(code **)(*(int *)in_ECX[0x16] + 0x304))();
  FUN_005e3500();
  (**(code **)(*in_ECX + 0x170))();
  uVar7 = 0x36;
  iVar2 = (**(code **)(*in_ECX + 0x284))(0x36);
  iVar3 = (**(code **)(*in_ECX + 0x284))(0xd,(float)iVar2);
  iVar2 = (**(code **)(*in_ECX + 0x284))(4,uStack_c,iVar2,uVar7,(float)iVar3);
  fVar5 = (float10)FUN_00547dd0((float)iVar2);
  fVar8 = (float)fVar5;
  if ((((((in_ECX[0x16] != 0) && (iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))(), iVar2 != 0)
         ) && (*(char *)(iVar2 + 0x20) == '\x01')) &&
       ((in_ECX[0x16] != 0 && (iVar2 = *(int *)(in_ECX[0x16] + 8), iVar2 != 0)))) &&
      ((*(int *)(iVar2 + 0x28) != 0 &&
       ((piVar4 = (int *)FUN_00569e60(), piVar4 != (int *)0x0 && (piVar4 != DAT_00b333c4)))))) &&
     ((cVar1 = (**(code **)(*piVar4 + 400))(), cVar1 != '\0' && (piVar4[0x16] != 0)))) {
    fVar5 = (float10)FUN_005e3ad0();
    fVar6 = (float)fVar5;
    if (0.0 < fVar6) {
      fVar5 = (float10)FUN_004d7e90(piVar4,0);
      if (fVar5 < (float10)150.0) {
        fVar6 = fVar6 - 50.0;
      }
      if ((0.0 < fVar6) && (fVar6 <= fVar8)) {
        return (float10)fVar6;
      }
    }
  }
  return (float10)fVar8;
}



float10 FUN_005e3c80(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  
  cVar1 = (**(code **)(*in_ECX + 0x25c))();
  if (cVar1 != '\0') {
    return (float10)0;
  }
  fVar4 = (float10)FUN_005e3500();
  iVar2 = (**(code **)(*in_ECX + 0x284))(4,(float)fVar4);
  fVar4 = (float10)FUN_00547e70((float)iVar2);
  if ((((((in_ECX[0x16] != 0) && (iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))(), iVar2 != 0)
         ) && (*(char *)(iVar2 + 0x20) == '\x01')) &&
       ((in_ECX[0x16] != 0 && (iVar2 = *(int *)(in_ECX[0x16] + 8), iVar2 != 0)))) &&
      ((*(int *)(iVar2 + 0x28) != 0 &&
       ((piVar3 = (int *)FUN_00569e60(), piVar3 != (int *)0x0 && (piVar3 != DAT_00b333c4)))))) &&
     ((cVar1 = (**(code **)(*piVar3 + 400))(), cVar1 != '\0' && (piVar3[0x16] != 0)))) {
    fVar5 = (float10)FUN_005e3c80();
    fVar6 = (float)fVar5;
    if (0.0 < fVar6) {
      fVar5 = (float10)FUN_004d7e90(piVar3,0);
      if (fVar5 < (float10)150.0) {
        fVar6 = fVar6 - 50.0;
      }
      if ((0.0 < fVar6) && (fVar6 <= (float)fVar4)) {
        return (float10)fVar6;
      }
    }
  }
  return (float10)(float)fVar4;
}



undefined4 FUN_005e3dc0(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x184))();
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 0x24);
    }
  }
  return 0;
}



bool FUN_005e3de0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  bool bVar5;
  
  bVar5 = true;
  cVar1 = FUN_006a1e20(param_1);
  if (cVar1 != '\0') {
    return false;
  }
  iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
  if (iVar2 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = *(int *)(iVar2 + 4);
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 0x34) == 3)) {
    param_1 = param_1 + 0x24;
    cVar1 = FUN_00415130(0x20000);
    if ((cVar1 != '\0') || (cVar1 = FUN_00415130(0x10000), cVar1 != '\0')) {
joined_r0x005e3e63:
      do {
        do {
          if (param_1 == 0) {
            return bVar5;
          }
          if ((*(int *)(param_1 + 8) == 0) && (*(int *)(param_1 + 4) == 0)) {
            return bVar5;
          }
          if (!bVar5) {
            return bVar5;
          }
          iVar2 = *(int *)(param_1 + 4);
          if (*(int *)(param_1 + 8) == 0) {
            param_1 = 0;
          }
          else {
            param_1 = *(int *)(param_1 + 8) + -4;
          }
        } while (iVar2 == 0);
        for (piVar3 = (int *)(**(code **)(*(int *)(in_ECX + 0x68) + 8))();
            (piVar3 != (int *)0x0 && ((piVar3[1] != 0 || (*piVar3 != 0))));
            piVar3 = (int *)piVar3[1]) {
          if (bVar5 == false) goto joined_r0x005e3e63;
          iVar4 = *piVar3;
          if ((iVar4 != 0) && (cVar1 = FUN_0068d9f0(), cVar1 != '\0')) {
            cVar1 = FUN_0041cac0(iVar2,*(undefined4 *)(iVar4 + 0xc));
            bVar5 = cVar1 == '\0';
          }
        }
        if ((bVar5 != false) && (in_ECX == DAT_00b333c4)) {
          piVar3 = *(int **)(DAT_00b333c4 + 0x1fc);
          while ((piVar3 != (int *)0x0 && (((piVar3[1] != 0 || (*piVar3 != 0)) && (bVar5 != false)))
                 )) {
            if ((*piVar3 == 0) ||
               (iVar4 = FUN_009832e6(*piVar3,0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0), iVar4 == 0))
            {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)(iVar4 + 4);
            }
            if (((iVar4 != 0) && (*(int *)(iVar4 + 0x34) == 3)) &&
               (iVar4 = iVar4 + 0x24, iVar4 != 0)) {
              while (((*(int *)(iVar4 + 8) != 0 || (*(int *)(iVar4 + 4) != 0)) && (bVar5 != false)))
              {
                cVar1 = FUN_0041cac0(iVar2,*(undefined4 *)(iVar4 + 4));
                bVar5 = cVar1 == '\0';
                if ((*(int *)(iVar4 + 8) == 0) || (iVar4 = *(int *)(iVar4 + 8) + -4, iVar4 == 0))
                break;
              }
            }
            piVar3 = (int *)piVar3[1];
          }
        }
      } while( true );
    }
  }
  return true;
}



void FUN_005e3fc0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = (int *)FUN_0041e650();
  if (((piVar1 != (int *)0x0) && (*piVar1 != 0)) && (*(int **)(in_ECX + 0x58) != (int *)0x0)) {
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 0xf0))(1);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) &&
       (*(char *)(*(int *)(iVar2 + 8) + 4) == '\x1a')) {
      FUN_004b22e0(piVar1,0);
    }
  }
  return;
}



void FUN_005e4010(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  
  if ((*(int **)(in_ECX + 0x58) == (int *)0x0) ||
     (iVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 0xec))(1), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 8);
  }
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(char *)(iVar2 + 0x90) == '\x05') {
      return;
    }
    if (*(char *)(iVar2 + 0x90) == '\x04') {
      return;
    }
    uVar1 = *(undefined4 *)(iVar2 + 0x7c);
  }
  fVar3 = (float10)FUN_00547560(uVar1,param_1);
  FUN_005e07d0(-(float)fVar3);
  return;
}



undefined * FUN_005e4080(void)

{
  int iVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x58) != 0) && (iVar1 = *(int *)(*(int *)(in_ECX + 0x58) + 8), iVar1 != 0))
  {
    return (&PTR_DAT_00b12988)[*(char *)(iVar1 + 0x20)];
  }
  return (undefined *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e40a0(void)

{
  FUN_00547540(_DAT_00b36e90);
  return;
}



float10 FUN_005e40c0(void)

{
  int iVar1;
  int *in_ECX;
  float10 fVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [16];
  
  iVar1 = (**(code **)(*in_ECX + 0x27c))();
  if (iVar1 == 0) {
    puVar3 = auStack_18;
    iVar1 = (**(code **)(*in_ECX + 0x15c))();
    uVar4 = SUB84((double)*(float *)(iVar1 + 8),0);
    iVar1 = (**(code **)(*in_ECX + 0x158))(auStack_10,puVar3,(double)*(float *)(iVar1 + 8));
    return (float10)(((float)(double)CONCAT44(uVar4,puVar3) - *(float *)(iVar1 + 8)) * 0.75);
  }
  fVar5 = *(float *)(DAT_00b333c4 + 0x5d4);
  fVar2 = (float10)(**(code **)(*in_ECX + 0xec))();
  return (float10)(float)(fVar2 * (float10)fVar5);
}



void FUN_005e4140(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *in_ECX;
  
  iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*in_ECX + 0x380))();
    if (iVar2 == 0) {
      piVar1 = (int *)in_ECX[0x16];
      uVar3 = (**(code **)(*piVar1 + 0x37c))(0);
      (**(code **)(*piVar1 + 0x378))(uVar3);
      FUN_004d7300(uVar3,iVar2);
      iVar2 = (**(code **)(*in_ECX + 0x164))();
      *(undefined1 *)(iVar2 + 0xc4) = 1;
      iVar2 = *(int *)in_ECX[0x16];
      (**(code **)(iVar2 + 0x378))(0x7f);
      (**(code **)(iVar2 + 0x370))();
      uVar3 = 0;
      (**(code **)(*(int *)in_ECX[0x16] + 0x380))(0);
      FUN_006faee0(uVar3);
      iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x380))();
      *(undefined1 *)(iVar2 + 0xe) = 0;
      puVar4 = (undefined4 *)(**(code **)(*(int *)in_ECX[0x16] + 0x380))();
      *puVar4 = DAT_00b3f9a8;
      puVar4[1] = DAT_00b3f9ac;
      puVar4[2] = DAT_00b3f9b0;
      iVar2 = *(int *)in_ECX[0x16];
      uVar3 = (**(code **)(iVar2 + 0x380))();
      (**(code **)(iVar2 + 1000))(0,0x7f,uVar3);
      if (in_ECX == DAT_00b333c4) {
        DAT_00b333c4[0x187] = 0;
      }
      FUN_0065ac20(0);
    }
  }
  return;
}



undefined1
FUN_005e4260(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int in_ECX;
  undefined1 local_1;
  
  if (param_1 == 0) {
    return 1;
  }
  uVar2 = 0;
  iVar3 = FUN_0041e6f0();
  if (iVar3 != 0) {
    cVar1 = FUN_0045a500();
    if (cVar1 == '\0') {
      FUN_004fbf90();
      FUN_004fbf90(param_1,in_ECX + 0x44,8);
    }
    uVar2 = FUN_0048a540(&local_1,param_1,param_2,in_ECX,param_3,param_4,param_5);
  }
  iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03718,0);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 4);
  }
  if (iVar3 != 0) {
    FUN_00419f10(1);
    if (in_ECX == DAT_00b333c4) {
      FUN_00662da0();
    }
  }
  return uVar2;
}



undefined4 FUN_005e4330(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0041e6f0();
  if (iVar1 != 0) {
    uVar2 = FUN_00486790(param_1,1);
    return uVar2;
  }
  return 0;
}



undefined4 FUN_005e43b0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  
  iVar2 = FUN_0041e6f0();
  if (iVar2 != 0) {
    iVar3 = (**(code **)(*in_ECX + 0x170))();
    iVar2 = 0;
    if (iVar3 != 0) {
      cVar1 = (**(code **)(*in_ECX + 400))();
      if (cVar1 != '\0') {
        iVar2 = iVar3;
      }
    }
    uVar4 = FUN_0048b660(iVar2,0);
    return uVar4;
  }
  return 0;
}



undefined4 FUN_005e4400(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0041e6f0();
  if (iVar1 != 0) {
    uVar2 = FUN_004873a0();
    return uVar2;
  }
  return 0;
}



undefined4 FUN_005e4420(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0041e6f0();
  if (iVar1 != 0) {
    uVar2 = FUN_004875c0();
    return uVar2;
  }
  return 0;
}



void FUN_005e4440(int param_1)

{
  int iVar1;
  int *in_ECX;
  undefined4 uVar2;
  
  if (((param_1 != 0) && ((*(byte *)(param_1 + 0x88) & 1) != 0)) && (*(int *)(param_1 + 100) != 0))
  {
    uVar2 = 0;
    (**(code **)(*in_ECX + 0x100))(param_1,0,1,0,0,0,0,0,1,0);
    FUN_005c1900();
    if (*(int *)(param_1 + 100) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 100) + 0x18;
    }
    FUN_00699190(iVar1,uVar2,0);
    if (in_ECX == DAT_00b333c4) {
      FUN_00664850(0);
    }
  }
  return;
}



void FUN_005e44c0(int *param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  int *in_ECX;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x78))();
    if (cVar1 != '\0') {
      FUN_0057acc0(DAT_00b394c0,0,1,0xbf800000);
      return;
    }
    cVar1 = FUN_0045a500();
    if (cVar1 == '\0') {
      FUN_004fbf90();
      FUN_004fbf90(param_1,in_ECX + 0x11,2);
    }
    piVar2 = (int *)0x0;
    cVar1 = (**(code **)(*param_1 + 0xac))();
    if (cVar1 != '\0') {
      piVar2 = param_1 + 9;
    }
    if ((in_ECX == DAT_00b333c4) && (param_3 == '\0')) {
      DAT_00b333c4[0x1a1] = DAT_00b333c4[0x1a1] + 1;
      cVar1 = FUN_006665e0(piVar2);
      if (cVar1 != '\0') {
        (**(code **)(*in_ECX + 0x100))(param_1,param_2,1,0,0,0,0,0,1,0);
        return;
      }
    }
    else {
      (**(code **)(in_ECX[0x17] + 0x34))(piVar2);
      FUN_0069bec0(0);
      if ((in_ECX == DAT_00b333c4) ||
         ((**(code **)(*in_ECX + 0x100))(param_1,param_1,1,0,0,0,0,0,1,0), in_ECX == DAT_00b333c4))
      {
        FUN_005c1900();
      }
    }
  }
  return;
}



void FUN_005e45f0(int *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if ((iVar1 != 7) && (iVar1 = (**(code **)(*param_1 + 0x18))(), iVar1 != 8)) {
    return;
  }
  uVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b03280,&PTR_PTR_00b03248,0);
  if (param_2 == '\0') {
    (**(code **)(in_ECX[0x17] + 0x34))(param_1);
    FUN_0069bec0(0);
    (**(code **)(*in_ECX + 0x100))(uVar2,0,1,0,0,0,0,0,1,0);
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if (iVar1 != 7) {
    FUN_005e44c0(uVar2,0,1);
    return;
  }
  uVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b03280,&PTR_PTR_00b0320c,0);
  FUN_005e08c0(uVar2,0,1);
  return;
}



undefined4 FUN_005e46c0(undefined4 *param_1,int param_2,int *param_3,undefined1 *param_4)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  float10 fVar9;
  
  puVar4 = param_4;
  piVar3 = param_3;
  *param_4 = 0;
  if ((param_1 == (undefined4 *)0x0) && (param_3 == (int *)0x0)) {
    return 0;
  }
  iVar7 = 0;
  if (((param_1 == (undefined4 *)0x0) || (iVar8 = param_1[2], iVar8 == 0)) ||
     (*(char *)(iVar8 + 4) != '!')) {
    if (param_3 == (int *)0x0) {
      return 0;
    }
LAB_005e4707:
    param_4 = (undefined1 *)FUN_00607410();
    iVar8 = iVar7;
    if (param_3 != (int *)0x0) {
      iVar7 = FUN_004ef1a0();
      goto LAB_005e473d;
    }
  }
  else {
    iVar7 = iVar8;
    if (param_3 != (int *)0x0) goto LAB_005e4707;
    param_4 = (undefined1 *)FUN_00484df0();
  }
  iVar7 = *(int *)(iVar8 + 100);
LAB_005e473d:
  if (param_3 == (int *)0x0) {
    param_3 = (int *)0x0;
  }
  else {
    param_3 = (int *)FUN_00607400();
  }
  if (((iVar7 == 0) && (param_4 == (undefined1 *)0x0)) && (param_3 == (int *)0x0)) {
    return 0;
  }
  if (piVar3 == (int *)0x0) {
    if (iVar7 != 0) {
      fVar9 = (float10)FUN_004849c0();
      fVar1 = (float)fVar9;
      fVar9 = (float10)(*(code *)**(undefined4 **)(iVar7 + 0x24))(0);
      fVar9 = (float10)FUN_00404f70((float)fVar9);
      fVar2 = (float)fVar9;
      if (fVar2 < fVar1 == (fVar2 == fVar1)) {
        *puVar4 = 1;
        iVar7 = 0;
      }
      else {
        uVar6 = *(undefined4 *)*param_1;
        uVar5 = FUN_0041e6f0(uVar6);
        FUN_00488aa0(fVar1 - fVar2,uVar5,uVar6);
      }
    }
    uVar6 = param_1[2];
  }
  else {
    (**(code **)(*piVar3 + 0x8c))(1);
    uVar6 = (**(code **)(*piVar3 + 0x170))();
  }
  if (iVar7 != 0) {
    (**(code **)(*(int *)(in_ECX + 0x5c) + 0x34))(iVar7 + 0x18);
    if (param_2 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = param_2 + 0x68;
    }
    (**(code **)(*(int *)(in_ECX + 0x5c) + 0x3c))(iVar7);
    FUN_0069bec0(uVar6);
  }
  if (param_4 != (undefined1 *)0x0) {
    (**(code **)(*(int *)(in_ECX + 0x5c) + 0x34))((int)param_4 + 0x24);
    if (param_2 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = param_2 + 0x68;
    }
    (**(code **)(*(int *)(in_ECX + 0x5c) + 0x3c))(iVar7);
    FUN_0069bec0(uVar6);
    if (param_1 != (undefined4 *)0x0) {
      FUN_00484e50();
    }
  }
  if (param_3 != (int *)0x0) {
    (**(code **)(*(int *)(in_ECX + 0x5c) + 0x34))((int)param_3 + 0x18);
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = param_2 + 0x68;
    }
    (**(code **)(*(int *)(in_ECX + 0x5c) + 0x3c))(param_2);
    FUN_0069bec0(uVar6);
  }
  return 1;
}



void FUN_005e48d0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((*(char *)(param_1 + 4) == '\x14') || (*(char *)(param_1 + 4) == '\x16')) {
    iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
    }
    if (iVar1 != 0) {
      (**(code **)(*(int *)(in_ECX + 0x5c) + 8))(iVar1 + 0x18,param_1,0);
    }
  }
  return;
}



void FUN_005e4920(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  float unaff_ESI;
  int iVar3;
  float unaff_EDI;
  float10 fVar4;
  float unaff_retaddr;
  undefined4 uVar5;
  
  if (((param_1 != (undefined4 *)0x0) && (iVar3 = param_1[2], iVar3 != 0)) &&
     (*(char *)(iVar3 + 4) == '!')) {
    if (iVar3 == -0x60) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 100);
    }
    if (iVar3 != 0) {
      FUN_004849c0();
      fVar4 = (float10)(*(code *)**(undefined4 **)(iVar3 + 0x24))();
      if ((float)fVar4 <= unaff_retaddr) {
        cVar1 = (**(code **)(*(int *)(in_ECX + 0x5c) + 0x1c))(iVar3 + 0x18,0,0,0);
        if (cVar1 != '\0') {
          uVar5 = *(undefined4 *)*param_1;
          uVar2 = FUN_0041e6f0(uVar5);
          FUN_00488aa0(unaff_ESI - unaff_EDI,uVar2,uVar5);
        }
        (**(code **)(*(int *)(in_ECX + 0x5c) + 0x34))(iVar3 + 0x18);
        FUN_0069bec0(0);
      }
      else if (in_ECX == DAT_00b333c4) {
        FUN_00663e80();
        return;
      }
    }
  }
  return;
}



undefined4
FUN_005e4a00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  
  iVar1 = FUN_0041e6f0();
  if (iVar1 != 0) {
    uVar2 = FUN_00487930(param_1,param_2,param_3,param_5,param_4,in_ECX);
    return uVar2;
  }
  return 0;
}



void FUN_005e4a40(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_0041e6f0();
  FUN_00491700(in_ECX,param_2,param_1);
  if (in_ECX == DAT_00b333c4) {
    FUN_0057a3b0(0);
  }
  return;
}



uint FUN_005e4a80(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int in_ECX;
  
  if (in_ECX == DAT_00b333c4) {
    cVar2 = FUN_0065d820();
    if (cVar2 != '\0') {
      return 0;
    }
  }
  if (*(int **)(in_ECX + 0x58) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(in_ECX + 0x58) + 0xec))(1);
    if ((((uVar3 != 0) && (piVar1 = *(int **)(uVar3 + 8), piVar1 != (int *)0x0)) &&
        ((char)piVar1[1] == '!')) && (*(int *)(in_ECX + 0x58) != 0)) {
      cVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x304))();
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(*piVar1 + 0x78))();
        return ~-(uint)(cVar2 != '\0') & uVar3;
      }
    }
  }
  return 0;
}



void FUN_005e4b00(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  uint uVar6;
  
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  iVar4 = 0;
  if ((iVar3 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
    iVar4 = iVar3;
  }
  piVar5 = (int *)(iVar4 + 0x58);
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  iVar4 = 0;
  if ((iVar3 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
    iVar4 = iVar3;
  }
  iVar3 = 0;
  for (piVar1 = (int *)(iVar4 + 0x58); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
  }
  while (piVar5 != (int *)0x0) {
    if (*piVar5 != 0) {
      piVar1 = (int *)(*piVar5 + 0x18);
      iVar4 = (**(code **)(*piVar1 + 0x18))();
      if ((iVar4 == 4) || (iVar4 = (**(code **)(*piVar1 + 0x18))(), iVar4 == 1)) {
        FUN_006a1f70(piVar1,0,0);
      }
    }
    iVar4 = FUN_0052b4a0();
    if (iVar4 == iVar3) {
      piVar5 = (int *)piVar5[1];
    }
    else {
      iVar3 = (**(code **)(*in_ECX + 0x170))();
      iVar4 = 0;
      if ((iVar3 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
        iVar4 = iVar3;
      }
      piVar5 = (int *)(iVar4 + 0x58);
      iVar3 = (**(code **)(*in_ECX + 0x170))();
      iVar4 = 0;
      if ((iVar3 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
        iVar4 = iVar3;
      }
      iVar3 = 0;
      for (piVar1 = (int *)(iVar4 + 0x58); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        if (*piVar1 != 0) {
          iVar3 = iVar3 + 1;
        }
      }
    }
  }
  iVar4 = (**(code **)(*in_ECX + 0x268))();
  if (iVar4 != 0) {
    iVar4 = (**(code **)(*in_ECX + 0x268))();
    for (piVar5 = (int *)(iVar4 + 0x3c); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
      if (*piVar5 != 0) {
        piVar1 = (int *)(*piVar5 + 0x18);
        iVar4 = (**(code **)(*piVar1 + 0x18))();
        if ((iVar4 == 4) || (iVar4 = (**(code **)(*piVar1 + 0x18))(), iVar4 == 1)) {
          FUN_006a1f70(piVar1,0,0);
        }
      }
    }
  }
  cVar2 = FUN_004d7f80();
  if (((cVar2 != '\0') && (iVar4 = (**(code **)(*in_ECX + 0x170))(), iVar4 != 0)) &&
     (*(int *)(iVar4 + 0xe8) != 0)) {
    cVar2 = FUN_004d7f80();
    if ((cVar2 == '\0') || (iVar4 = (**(code **)(*in_ECX + 0x170))(), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0xe8);
    }
    for (piVar5 = (int *)(iVar4 + 0x30); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
      if (*piVar5 != 0) {
        piVar1 = (int *)(*piVar5 + 0x18);
        iVar4 = (**(code **)(*piVar1 + 0x18))();
        if ((iVar4 == 4) || (iVar4 = (**(code **)(*piVar1 + 0x18))(), iVar4 == 1)) {
          FUN_006a1f70(piVar1,0,0);
        }
      }
    }
  }
  iVar4 = (**(code **)(*in_ECX + 0x170))();
  if (iVar4 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  FUN_00485e00();
  uVar6 = 0;
  do {
    iVar4 = FUN_00486790(*(undefined4 *)((int)&DAT_00b1489c + uVar6),0);
    if (iVar4 != 0) {
      iVar3 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 4) != 0)) {
        FUN_006a2110(*(undefined4 *)(iVar4 + 8),0);
      }
      FUN_00484470();
      FUN_00401f20(iVar4);
    }
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x28);
  return;
}



void FUN_005e4dd0(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  uint uVar6;
  
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  iVar4 = 0;
  if ((iVar3 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
    iVar4 = iVar3;
  }
  for (piVar5 = (int *)(iVar4 + 0x58); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
    if (*piVar5 != 0) {
      piVar1 = (int *)(*piVar5 + 0x18);
      iVar4 = (**(code **)(*piVar1 + 0x18))();
      if ((iVar4 == 4) || (iVar4 = (**(code **)(*piVar1 + 0x18))(), iVar4 == 1)) {
        FUN_0041a610(0);
      }
    }
  }
  iVar4 = (**(code **)(*in_ECX + 0x268))();
  if (iVar4 != 0) {
    iVar4 = (**(code **)(*in_ECX + 0x268))();
    for (piVar5 = (int *)(iVar4 + 0x3c); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
      if (*piVar5 != 0) {
        piVar1 = (int *)(*piVar5 + 0x18);
        iVar4 = (**(code **)(*piVar1 + 0x18))();
        if ((iVar4 == 4) || (iVar4 = (**(code **)(*piVar1 + 0x18))(), iVar4 == 1)) {
          FUN_0041a610(0);
        }
      }
    }
  }
  cVar2 = FUN_004d7f80();
  if (((cVar2 != '\0') && (iVar4 = (**(code **)(*in_ECX + 0x170))(), iVar4 != 0)) &&
     (*(int *)(iVar4 + 0xe8) != 0)) {
    cVar2 = FUN_004d7f80();
    if ((cVar2 == '\0') || (iVar4 = (**(code **)(*in_ECX + 0x170))(), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0xe8);
    }
    for (piVar5 = (int *)(iVar4 + 0x30); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
      if (*piVar5 != 0) {
        piVar1 = (int *)(*piVar5 + 0x18);
        iVar4 = (**(code **)(*piVar1 + 0x18))();
        if ((iVar4 == 4) || (iVar4 = (**(code **)(*piVar1 + 0x18))(), iVar4 == 1)) {
          FUN_0041a610(0);
        }
      }
    }
  }
  iVar4 = (**(code **)(*in_ECX + 0x170))();
  if (iVar4 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  FUN_00485e00();
  uVar6 = 0;
  do {
    iVar4 = FUN_00486790(*(undefined4 *)((int)&DAT_00b1489c + uVar6),0);
    if ((iVar4 == 0) ||
       (iVar3 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0),
       iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 4);
    }
    if (iVar3 != 0) {
      FUN_0041a610(0);
    }
    if (iVar4 != 0) {
      FUN_00484470();
      FUN_00401f20(iVar4);
    }
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x28);
  return;
}



void FUN_005e4fc0(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  uint uVar6;
  
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  iVar4 = 0;
  if ((iVar3 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
    iVar4 = iVar3;
  }
  for (piVar5 = (int *)(iVar4 + 0x58); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
    if (*piVar5 != 0) {
      piVar1 = (int *)(*piVar5 + 0x18);
      iVar4 = (**(code **)(*piVar1 + 0x18))();
      if ((iVar4 == 4) || (iVar4 = (**(code **)(*piVar1 + 0x18))(), iVar4 == 1)) {
        FUN_00419f10(1);
      }
    }
  }
  iVar4 = (**(code **)(*in_ECX + 0x268))();
  if (iVar4 != 0) {
    iVar4 = (**(code **)(*in_ECX + 0x268))();
    for (piVar5 = (int *)(iVar4 + 0x3c); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
      if (*piVar5 != 0) {
        piVar1 = (int *)(*piVar5 + 0x18);
        iVar4 = (**(code **)(*piVar1 + 0x18))();
        if ((iVar4 == 4) || (iVar4 = (**(code **)(*piVar1 + 0x18))(), iVar4 == 1)) {
          FUN_00419f10(1);
        }
      }
    }
  }
  cVar2 = FUN_004d7f80();
  if (((cVar2 != '\0') && (iVar4 = (**(code **)(*in_ECX + 0x170))(), iVar4 != 0)) &&
     (*(int *)(iVar4 + 0xe8) != 0)) {
    cVar2 = FUN_004d7f80();
    if ((cVar2 == '\0') || (iVar4 = (**(code **)(*in_ECX + 0x170))(), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0xe8);
    }
    for (piVar5 = (int *)(iVar4 + 0x30); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
      if (*piVar5 != 0) {
        piVar1 = (int *)(*piVar5 + 0x18);
        iVar4 = (**(code **)(*piVar1 + 0x18))();
        if ((iVar4 == 4) || (iVar4 = (**(code **)(*piVar1 + 0x18))(), iVar4 == 1)) {
          FUN_00419f10(1);
        }
      }
    }
  }
  iVar4 = (**(code **)(*in_ECX + 0x170))();
  if (iVar4 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  FUN_00485e00();
  uVar6 = 0;
  do {
    iVar4 = FUN_00486790(*(undefined4 *)((int)&DAT_00b1489c + uVar6),0);
    if ((iVar4 == 0) ||
       (iVar3 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0),
       iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 4);
    }
    if (iVar3 != 0) {
      FUN_00419f10(1);
    }
    if (iVar4 != 0) {
      FUN_00484470();
      FUN_00401f20(iVar4);
    }
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x28);
  return;
}



float10 FUN_005e5240(float param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  float10 fVar11;
  
  piVar1 = param_2;
  cVar2 = FUN_004149f0();
  if (cVar2 == '\0') {
LAB_005e53ee:
    return (float10)1;
  }
  cVar2 = FUN_0068d9f0();
  if (cVar2 != '\0') goto LAB_005e53ee;
  iVar3 = (**(code **)(*param_2 + 0x18))();
  if (iVar3 == 7) {
    iVar3 = FUN_009832e6(param_2,0,&PTR_PTR_00b03280,&PTR_PTR_00b0320c,0);
    if (iVar3 == 0) goto LAB_005e52a9;
    cVar2 = FUN_00414eb0();
    param_2 = (int *)CONCAT31(param_2._1_3_,1);
    if (cVar2 == '\0') goto LAB_005e52a9;
  }
  else {
    iVar3 = 0;
LAB_005e52a9:
    param_2 = (int *)((uint)param_2 & 0xffffff00);
  }
  if ((iVar3 != 0) && ((char)param_2 == '\0')) {
LAB_005e52e8:
    return (float10)1;
  }
  iVar3 = (**(code **)(*piVar1 + 0x18))();
  if (iVar3 == 8) {
    iVar3 = FUN_009832e6(piVar1,0,&PTR_PTR_00b03280,&PTR_PTR_00b0373c,0);
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x7c) & 2) != 0)) goto LAB_005e52e8;
  }
  piVar4 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b03834,&PTR_PTR_00b03070,0);
  piVar9 = (int *)(in_ECX + -0x68);
  if (piVar4 == (int *)0x0) {
    uVar5 = 100;
  }
  else {
    iVar3 = *piVar4;
    uVar5 = FUN_00412f20();
    uVar5 = FUN_0041b770(uVar5);
    uVar5 = (**(code **)(iVar3 + 0x284))(uVar5);
  }
  if ((char)param_2 == '\0') {
    iVar3 = (**(code **)(*piVar1 + 0x18))();
    iVar8 = 0x40;
    if (iVar3 != 5) goto LAB_005e535f;
  }
  iVar8 = 0x43;
LAB_005e535f:
  fVar10 = (float10)(**(code **)(*piVar9 + 0x288))(iVar8);
  param_1 = 0.0;
  if (((piVar9 != (int *)0x0) && (iVar3 = *(int *)(*(int *)(param_2[3] + 0x1c) + 0x68), iVar3 != -1)
      ) && (iVar3 != iVar8)) {
    fVar11 = (float10)(**(code **)(*piVar9 + 0x288))(iVar3);
    param_1 = (float)fVar11;
  }
  if (piVar4 == (int *)0x0) {
    uVar6 = 100;
  }
  else {
    uVar6 = (**(code **)(*piVar4 + 0x284))(7);
  }
  uVar7 = (**(code **)(*piVar9 + 0x284))(2,(float)fVar10,param_1);
  fVar10 = (float10)FUN_00548ad0(uVar5,uVar6,uVar7);
  return fVar10;
}



uint FUN_005e5480(void)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  if (*(int **)(in_ECX + 0x58) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005e548f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2b8))();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}



float10 FUN_005e5630(void)

{
  return (float10)1;
}



undefined4 FUN_005e5640(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2d0))();
    if ((1 < iVar1) && (iVar1 < 6)) {
      return 1;
    }
  }
  return 0;
}



uint FUN_005e5670(void)

{
  uint in_EAX;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    in_EAX = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2d0))();
    if (in_EAX == 6) {
      return 1;
    }
  }
  return in_EAX & 0xffffff00;
}



undefined4 FUN_005e5690(int param_1,int param_2,char param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  int iVar7;
  undefined4 uStack_8;
  
  iVar3 = (**(code **)(*in_ECX + 0x164))();
  iVar7 = 0;
  if (iVar3 == 0) {
    return 0xff;
  }
  iVar3 = param_2;
  if (param_2 == 0) {
    iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
  }
  uVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x2c0))();
  uStack_8 = 0;
  if ((uVar4 & 0x800) == 0) {
    if ((uVar4 & 0x2000) == 0) {
      if ((uVar4 & 0x400) != 0) {
        uStack_8 = 1;
      }
    }
    else {
      uStack_8 = 3;
    }
  }
  else {
    uStack_8 = 2;
  }
  iVar5 = (**(code **)(*in_ECX + 0x27c))();
  if (iVar5 == 0) {
    cVar1 = (**(code **)(*in_ECX + 0x334))(1);
    if (cVar1 == '\0') goto LAB_005e573d;
LAB_005e579f:
    if ((iVar3 == 0) || (param_3 != '\0')) {
      iVar7 = 1;
    }
    else {
      iVar7 = *(int *)(&DAT_00b086b8 + *(char *)(*(int *)(iVar3 + 8) + 0x90) * 4);
    }
  }
  else {
LAB_005e573d:
    iVar5 = (**(code **)(*in_ECX + 0x27c))();
    if (iVar5 != 0) {
      cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))();
      if (cVar1 != '\0') goto LAB_005e579f;
    }
    if ((in_ECX == DAT_00b333c4) && (DAT_00b333c4[0x177] != 0)) goto LAB_005e579f;
    if (iVar3 != 0) {
      if (param_2 == 0) {
        cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))();
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x2fc))();
          if (cVar1 == '\0') goto LAB_005e579b;
        }
      }
      goto LAB_005e579f;
    }
LAB_005e579b:
    if (param_3 != '\0') goto LAB_005e579f;
  }
  if (in_ECX[0x16] != 0) {
    iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0xf8))(1);
    if (((iVar3 != 0) && (0x1a < param_1)) && (param_1 < 0x1d)) {
      iVar7 = 0;
    }
    if (((in_ECX[0x16] != 0) && (iVar7 != 0)) && ((0x21 < param_1 && (param_1 < 0x28)))) {
      cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))();
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x138))();
        if (cVar1 == '\0') goto LAB_005e5821;
      }
      iVar7 = 0;
    }
  }
LAB_005e5821:
  uVar2 = FUN_0051a9b0(uStack_8,iVar7,param_1);
  uVar6 = FUN_00470d20(uVar2,0);
  return uVar6;
}



float10 FUN_005e5850(undefined4 param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  float10 fVar4;
  float local_4;
  
  local_4 = 0.0;
  iVar2 = (**(code **)(*in_ECX + 0x164))();
  if ((iVar2 != 0) && (sVar1 = FUN_005e5690(param_1,0,0), sVar1 != 0)) {
    uVar3 = FUN_005e5690(param_1,0,0);
    (**(code **)(*in_ECX + 0x164))(uVar3);
    iVar2 = FUN_004729b0(uVar3);
    if (iVar2 != 0) {
      fVar4 = (float10)FUN_0051ae20(1);
      local_4 = (float)fVar4;
    }
  }
  return (float10)local_4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_005e5a00(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int in_ECX;
  int *piVar15;
  int iVar16;
  int *unaff_FS_OFFSET;
  int *local_1c;
  int local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c25cb;
  local_c = *unaff_FS_OFFSET;
  uVar11 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar15 = (int *)0x0;
  local_1c = (int *)0x0;
  local_14 = 0;
  bVar9 = false;
  bVar8 = false;
  bVar6 = false;
  bVar4 = false;
  bVar2 = false;
  bVar1 = false;
  while( true ) {
    if (6 < local_14) break;
    iVar12 = FUN_0047df80(0,uVar11);
    iVar16 = DAT_00b36ec8;
    iVar12 = iVar12 % 100;
    if (iVar12 < DAT_00b36ec8) {
      if (!bVar1) {
        piVar15 = (int *)0x0;
        iVar13 = FUN_0041e6f0();
        if (iVar13 != 0) {
          piVar15 = (int *)FUN_00486790(0,1);
        }
        bVar6 = false;
        bVar1 = true;
        bVar2 = false;
        bVar4 = false;
        bVar8 = false;
        bVar9 = false;
      }
      if (piVar15 == (int *)0x0) {
        if (!bVar2) {
          iVar13 = FUN_0041e6f0();
          if (iVar13 != 0) {
            piVar15 = (int *)FUN_00486790(1,1);
          }
          bVar9 = false;
          bVar8 = false;
          bVar6 = false;
          bVar2 = true;
          bVar4 = false;
          if (piVar15 != (int *)0x0) goto LAB_005e5ab6;
        }
      }
      else {
LAB_005e5ab6:
        local_1c = piVar15;
      }
    }
    bVar7 = false;
    bVar5 = false;
    bVar3 = false;
    iVar16 = iVar16 + _DAT_00b36eb8;
    if ((local_1c == (int *)0x0) && (iVar12 < iVar16)) {
      if (!bVar4) {
        piVar15 = (int *)0x0;
        iVar13 = FUN_0041e6f0();
        if (iVar13 != 0) {
          piVar15 = (int *)FUN_00486790(2,1);
        }
        bVar8 = false;
        bVar4 = true;
        bVar2 = bVar3;
        bVar6 = bVar7;
        bVar9 = false;
      }
      if (piVar15 != (int *)0x0) {
        local_1c = piVar15;
      }
    }
    iVar16 = iVar16 + _DAT_00b36ec0;
    if ((local_1c == (int *)0x0) && (iVar12 < iVar16)) {
      if (!bVar6) {
        piVar15 = (int *)0x0;
        iVar13 = FUN_0041e6f0();
        if (iVar13 != 0) {
          piVar15 = (int *)FUN_00486790(3,1);
        }
        bVar9 = false;
        bVar6 = true;
        bVar2 = bVar3;
        bVar4 = bVar5;
        bVar8 = false;
      }
      if (piVar15 != (int *)0x0) {
        local_1c = piVar15;
      }
    }
    iVar16 = iVar16 + _DAT_00b36ed0;
    if ((local_1c == (int *)0x0) && (iVar12 < iVar16)) {
      if (!bVar8) {
        piVar15 = (int *)0x0;
        iVar13 = FUN_0041e6f0();
        if (iVar13 != 0) {
          piVar15 = (int *)FUN_00486790(4,1);
        }
        bVar8 = true;
        bVar2 = bVar3;
        bVar4 = bVar5;
        bVar6 = bVar7;
        bVar9 = false;
      }
      if (piVar15 != (int *)0x0) {
        local_1c = piVar15;
      }
    }
    if (local_1c != (int *)0x0) break;
    if (iVar12 < iVar16 + _DAT_00b36ed8) {
      if (!bVar9) {
        piVar15 = (int *)0x0;
        iVar16 = FUN_0041e6f0();
        if (iVar16 != 0) {
          piVar15 = (int *)FUN_00486790(5,1);
        }
        bVar9 = true;
        bVar2 = bVar3;
        bVar4 = bVar5;
        bVar6 = bVar7;
        bVar8 = false;
      }
      piVar14 = piVar15;
      if (piVar15 != (int *)0x0) {
LAB_005e5c41:
        local_1c = piVar14;
        if (local_1c != (int *)0x0) break;
      }
LAB_005e5c48:
      local_14 = local_14 + 1;
    }
    else {
      if (*(int **)(in_ECX + 0x58) != (int *)0x0) {
        piVar15 = (int *)(**(code **)(**(int **)(in_ECX + 0x58) + 0xf8))(1);
        if (((piVar15 != (int *)0x0) && ((int *)*piVar15 != (int *)0x0)) && (*(int *)*piVar15 != 0))
        {
          iVar16 = FUN_00401f00(0xc);
          piVar14 = (int *)0x0;
          uStack_4 = 0;
          if (iVar16 != 0) {
            iVar16 = piVar15[2];
            sVar10 = FUN_0041e860();
            piVar14 = (int *)FUN_00484420(iVar16,(int)sVar10);
          }
          uStack_4 = 0xffffffff;
          if (*(int *)*piVar15 != 0) {
            FUN_00446cb0(*(int *)*piVar15);
          }
          goto LAB_005e5c41;
        }
        goto LAB_005e5c48;
      }
      piVar15 = (int *)0x0;
      local_14 = local_14 + 1;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return local_1c;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005e5c80(uint param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  uint unaff_retaddr;
  
  iVar3 = 0;
  iVar1 = FUN_0041e6f0();
  if (iVar1 != 0) {
    iVar1 = FUN_00486790(0,1);
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 8) != 0) && (*(char *)(*(int *)(iVar1 + 8) + 4) == '\x14')) {
        uVar2 = FUN_004b4c70();
        if ((uVar2 & 0xff) == param_1) {
          iVar3 = DAT_00b36ec8;
        }
      }
      FUN_00484470();
      FUN_00401f20(iVar1);
    }
  }
  iVar1 = FUN_0041e6f0();
  if (iVar1 != 0) {
    iVar1 = FUN_00486790(1,1);
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 8) != 0) && (*(char *)(*(int *)(iVar1 + 8) + 4) == '\x14')) {
        uVar2 = FUN_004b4c70();
        if ((uVar2 & 0xff) == param_1) {
          iVar3 = iVar3 + DAT_00b36ec8;
        }
      }
      FUN_00484470();
      FUN_00401f20(iVar1);
    }
  }
  iVar1 = FUN_0041e6f0();
  if (iVar1 != 0) {
    iVar1 = FUN_00486790(2,1);
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 8) != 0) && (*(char *)(*(int *)(iVar1 + 8) + 4) == '\x14')) {
        uVar2 = FUN_004b4c70();
        if ((uVar2 & 0xff) == param_1) {
          iVar3 = iVar3 + _DAT_00b36eb8;
        }
      }
      FUN_00484470();
      FUN_00401f20(iVar1);
    }
  }
  iVar1 = FUN_0041e6f0();
  if (iVar1 != 0) {
    iVar1 = FUN_00486790(3,1);
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 8) != 0) && (*(char *)(*(int *)(iVar1 + 8) + 4) == '\x14')) {
        uVar2 = FUN_004b4c70();
        if ((uVar2 & 0xff) == param_1) {
          iVar3 = iVar3 + _DAT_00b36ec0;
        }
      }
      FUN_00484470();
      FUN_00401f20(iVar1);
    }
  }
  iVar1 = FUN_0041e6f0();
  if (iVar1 != 0) {
    iVar1 = FUN_00486790(4,1);
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 8) != 0) && (*(char *)(*(int *)(iVar1 + 8) + 4) == '\x14')) {
        uVar2 = FUN_004b4c70();
        if ((uVar2 & 0xff) == param_1) {
          iVar3 = iVar3 + _DAT_00b36ed0;
        }
      }
      FUN_00484470();
      FUN_00401f20(iVar1);
    }
  }
  iVar1 = FUN_0041e6f0();
  if (iVar1 != 0) {
    iVar1 = FUN_00486790(5,1);
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 8) != 0) && (*(char *)(*(int *)(iVar1 + 8) + 4) == '\x14')) {
        uVar2 = FUN_004b4c70();
        if ((uVar2 & 0xff) == param_1) {
          iVar3 = iVar3 + _DAT_00b36ed8;
        }
      }
      FUN_00484470();
      FUN_00401f20(iVar1);
    }
  }
  if (*(int **)(in_ECX + 0x58) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0xf8))(1);
    if (((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) &&
       (*(char *)(*(int *)(iVar1 + 8) + 4) == '\x14')) {
      uVar2 = FUN_004b4c70();
      if ((uVar2 & 0xff) == unaff_retaddr) {
        iVar3 = iVar3 + _DAT_00b36ee0;
      }
    }
  }
  if (iVar3 < 0) {
    return 0;
  }
  iVar1 = 100;
  if (iVar3 < 0x65) {
    iVar1 = iVar3;
  }
  return iVar1;
}



void FUN_005e5fc0(float param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = (**(code **)(*in_ECX + 0x154))(uVar1);
  if (iVar2 != 0) {
    if (!NAN(param_1) && 1.0 < param_1 != (param_1 == 1.0)) {
      FUN_006ffac0(&DAT_00a3fa90);
      *unaff_FS_OFFSET = local_c;
      return;
    }
    uVar3 = FUN_006ff9c0(&DAT_00a3fa90);
    iVar2 = FUN_00560920(&DAT_00b35294,uVar3);
    if (iVar2 != 0) {
      *(float *)(iVar2 + 0xc) = param_1;
      *unaff_FS_OFFSET = local_c;
      return;
    }
    iVar2 = FUN_00401f00(0x10);
    uStack_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_005e1570(param_1);
    }
    uStack_4 = 0xffffffff;
    FUN_006ff8a0(uVar3);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_005e6110(char param_1)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  undefined3 uVar3;
  int *in_ECX;
  
  if (in_ECX[0x16] != 0) {
    iVar2 = (**(code **)(*in_ECX + 0x380))();
    if ((iVar2 == 0) && (param_1 != '\0')) {
      in_EAX = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))();
      if (in_EAX != 0) goto LAB_005e6159;
    }
    iVar2 = *(int *)(in_ECX[0x16] + 8);
    in_EAX = 0;
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + 0x20);
      uVar3 = (undefined3)((uint)iVar2 >> 8);
      in_EAX = CONCAT31(uVar3,cVar1);
      if ((cVar1 == '\f') || (cVar1 == '\r')) {
        return CONCAT31(uVar3,1);
      }
    }
  }
LAB_005e6159:
  return in_EAX & 0xffffff00;
}



float10 FUN_005e65b0(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  float10 fVar4;
  
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 8))();
  if (iVar2 != 0) {
LAB_005e6664:
    fVar4 = (float10)FUN_005e3590();
    return (float10)(float)fVar4;
  }
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2c0))();
  pcVar1 = *(code **)(**(int **)(in_ECX + 0x58) + 0x2c0);
  if ((uVar3 & 0x200) == 0) {
    uVar3 = (*pcVar1)();
    if ((uVar3 & 0x800) != 0) {
      fVar4 = (float10)FUN_005e3920();
      return (float10)(float)fVar4;
    }
    uVar3 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2c0))();
    if ((uVar3 & 0x2000) == 0) goto LAB_005e6664;
  }
  else {
    uVar3 = (*pcVar1)();
    if ((uVar3 & 0x800) != 0) {
      fVar4 = (float10)FUN_005e3ad0();
      return (float10)(float)fVar4;
    }
    uVar3 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2c0))();
    if ((uVar3 & 0x2000) == 0) {
      fVar4 = (float10)FUN_005e3750();
      return (float10)(float)fVar4;
    }
  }
  fVar4 = (float10)FUN_005e3c80();
  return (float10)(float)fVar4;
}



void FUN_005e6680(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  
  if (DAT_00b14e98 == '\0') {
LAB_005e66d2:
    if (param_1 == 2) {
      if ((int *)in_ECX[0x16] != (int *)0x0) {
        piVar3 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0xe8))();
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x9c))(1,1);
        }
      }
      iVar4 = FUN_0041e6f0();
      if (iVar4 != 0) {
        FUN_004876c0(in_ECX);
      }
    }
    else if (param_1 == 0) goto LAB_005e6758;
  }
  else {
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    iVar4 = 0;
    if (iVar2 != 0) {
      cVar1 = (**(code **)(*in_ECX + 400))();
      if (cVar1 != '\0') {
        iVar4 = iVar2;
      }
    }
    if (((*(uint *)(iVar4 + 0x28) >> 1 & 1) == 0) || ((param_1 != 2 && (param_1 != 1))))
    goto LAB_005e66d2;
    param_1 = 6;
  }
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
    if (iVar4 == 0) {
      piVar3 = (int *)in_ECX[0x16];
      iVar4 = (**(code **)(*piVar3 + 0x47c))();
      if (iVar4 != 3) {
        iVar4 = (**(code **)(*piVar3 + 0x47c))();
        if (iVar4 != 4) goto LAB_005e6758;
      }
      FUN_00628630(in_ECX,0);
    }
  }
LAB_005e6758:
  if (in_ECX[0x2c] != param_1) {
    (**(code **)(*in_ECX + 0x40))(0x40);
  }
  in_ECX[0x2c] = param_1;
  return;
}



undefined4 FUN_005e6780(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (((*(int *)(in_ECX + 0x58) != 0) && (iVar2 = *(int *)(*(int *)(in_ECX + 0x58) + 8), iVar2 != 0)
      ) && (*(int *)(iVar2 + 0x28) != 0)) {
    iVar2 = FUN_00569e50();
    if (iVar2 == 0) {
      piVar3 = (int *)FUN_00569e60();
      if (piVar3 != (int *)0x0) {
        iVar2 = piVar3[3];
        uVar4 = (**(code **)(*piVar3 + 0x170))(iVar2);
        uVar4 = FUN_004d8d70(uVar4,iVar2);
        return uVar4;
      }
    }
    else if (iVar2 == 1) {
      iVar2 = FUN_00569e70();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00569e70();
        cVar1 = (**(code **)(*piVar3 + 0xa4))();
        if ((cVar1 != '\0') && (iVar2 = FUN_00569e70(), iVar2 != 0)) {
          uVar4 = FUN_004d8d70(iVar2,0);
        }
      }
    }
    else if (iVar2 == 2) {
      FUN_00569e80();
      return 0;
    }
  }
  return uVar4;
}



int FUN_005e6830(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  cVar1 = FUN_0045a500();
  if ((cVar1 == '\0') && (*(int **)(in_ECX + 0x58) != (int *)0x0)) {
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x4cc))();
    if (iVar2 != 0) {
      return iVar2;
    }
    if ((((*(int *)(in_ECX + 0x58) != 0) &&
         (iVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x184))(), iVar2 != 0)) &&
        (in_ECX != DAT_00b333c4)) && (iVar2 = FUN_005e2e00(), iVar2 != 0)) {
      FUN_004d7e90(in_ECX,0);
      FUN_00403c00();
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005e68a0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  float unaff_retaddr;
  
  if ((((int *)in_ECX[0x16] != (int *)0x0) &&
      (iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), iVar2 == 0)) && (in_ECX[0x16] != 0)) {
    (**(code **)(*in_ECX + 0x174))();
    (**(code **)(*param_1 + 0x174))();
    FUN_00982c30();
    (**(code **)(*(int *)in_ECX[0x16] + 0x4cc))();
    cVar1 = (**(code **)(*param_1 + 0x198))(0);
    if (cVar1 != '\0') {
      unaff_retaddr = unaff_retaddr * 0.5;
    }
    return (float10)unaff_retaddr;
  }
  return (float10)0;
}



void FUN_005e69e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  
  if (param_1 != 0) {
    for (piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x68) + 8))();
        (piVar1 != (int *)0x0 && (iVar3 = 0, piVar2 = piVar1, piVar1 != (int *)0x0));
        piVar1 = (int *)piVar1[1]) {
      do {
        if (*piVar2 != 0) {
          iVar3 = iVar3 + 1;
        }
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
      if (iVar3 == 0) {
        return;
      }
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x24))(param_1);
      }
    }
  }
  return;
}



void FUN_005e6a40(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  float10 fVar5;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [52];
  undefined1 auStack_34 [52];
  
  iVar3 = (**(code **)(*in_ECX + 0x154))();
  if (iVar3 != 0) {
    iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
    if (iVar4 == 0) {
      fVar5 = (float10)0;
    }
    else {
      fVar5 = (float10)FUN_00547540(*(undefined4 *)(*(int *)(iVar4 + 8) + 0x98));
    }
    iVar3 = FUN_006f94a0(iVar3,PTR_s_Weapon_00b0655c);
    if (iVar3 != 0) {
      FUN_00718a80(auStack_68);
      FUN_0053d7a0(auStack_34,iVar3 + 100);
      uStack_74 = 0;
      uStack_6c = 0;
      fStack_70 = (float)fVar5;
      FUN_0053d4b0(&uStack_80,&uStack_74);
      *param_1 = uStack_80;
      param_1[1] = uStack_7c;
      param_1[2] = uStack_78;
      return;
    }
  }
  uVar1 = DAT_00b3f9ac;
  *param_1 = DAT_00b3f9a8;
  uVar2 = DAT_00b3f9b0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}



undefined4 FUN_005e6b40(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x184))();
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x20) == '\x12')) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_005e6b70(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x184))();
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x20) == '\x13')) {
      return 1;
    }
  }
  return 0;
}



int FUN_005e6ba0(void)

{
  int iVar1;
  uint3 uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x58) + 8);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x20) == '\x0f')) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



undefined4 FUN_005e6bc0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (((*(int *)(in_ECX + 0x58) != 0) &&
      (iVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x184))(), iVar2 != 0)) &&
     (iVar1 = *(int *)(iVar2 + 0x18), iVar1 != -1)) {
    if (((*(byte *)(iVar2 + 0x1e) & 1) == 0) &&
       (iVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x180))(),
       *(int *)((&PTR_DAT_00b152b0)[iVar1] + iVar2 * 4) != 0xd)) {
      return 0;
    }
    return 1;
  }
  return 0;
}



undefined4 FUN_005e6c10(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = FUN_00589b70(0x3f1);
  if (iVar2 != 0) {
    iVar2 = FUN_005898f0();
    if (iVar2 != 0) {
      cVar1 = FUN_005893b0();
      if ((cVar1 != '\0') && (*(int *)(in_ECX + 0x58) != 0)) {
        cVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x1cc))();
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



uint FUN_005e6c60(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  
  uVar2 = FUN_004d7f80();
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_004d7f80();
    if ((char)uVar2 != '\0') {
      uVar2 = (**(code **)(*in_ECX + 0x170))();
      if ((uVar2 != 0) && (*(int *)(uVar2 + 0x104) != 0)) {
        cVar1 = FUN_004d7f80();
        if (cVar1 != '\0') {
          iVar3 = (**(code **)(*in_ECX + 0x170))();
          if (iVar3 != 0) {
            uVar2 = FUN_0051bef0();
            return uVar2;
          }
        }
        uVar2 = FUN_0051bef0();
        return uVar2;
      }
    }
  }
  return uVar2 & 0xffffff00;
}



undefined4 FUN_005e6cd0(char param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  if (((*(int *)(in_ECX + 0x58) != 0) &&
      (iVar3 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x184))(), iVar3 != 0)) &&
     (*(char *)(iVar3 + 0x20) == '\x10')) {
    if (DAT_00b333c4 != in_ECX) {
      return 1;
    }
    piVar2 = *(int **)(*(int *)(DAT_00b333c4 + 0x58) + 8);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(1);
    }
    *(undefined4 *)(*(int *)(DAT_00b333c4 + 0x58) + 8) = 0;
    return 0;
  }
  if (((*(int *)(in_ECX + 0x58) != 0) && (param_1 == '\0')) &&
     (iVar3 = *(int *)(*(int *)(in_ECX + 0x58) + 8), iVar3 != 0)) {
    cVar1 = *(char *)(iVar3 + 0x20);
    if ((cVar1 == '\x10') || (cVar1 == '\n')) {
      return 1;
    }
    if ((cVar1 == '\r') && (iVar3 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x180))(), iVar3 == 1))
    {
      return 1;
    }
  }
  return 0;
}



void FUN_005e6d70(void)

{
  int in_ECX;
  
  if (*(int **)(in_ECX + 0x58) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005e6d7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x300))();
    return;
  }
  return;
}



void FUN_005e6d90(void)

{
  char cVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 uVar3;
  
  FUN_0041e6f0();
  uVar3 = 0;
  (**(code **)(*in_ECX + 0x250))(0);
  uVar2 = FUN_009828c0();
  FUN_00491700(in_ECX,uVar2,uVar3);
  FUN_00675d50(in_ECX,0);
  FUN_00675e90(in_ECX);
  cVar1 = (**(code **)(*in_ECX + 0x354))();
  if (cVar1 != '\0') {
    FUN_004246f0();
    return;
  }
  return;
}



void FUN_005e6e00(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  int *piVar9;
  
  if (in_ECX[0x16] == 0) {
    return;
  }
  cVar1 = (**(code **)(*in_ECX + 0x198))(0);
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(in_ECX[0x16] + 8) == 0) {
    return;
  }
  iVar2 = FUN_006ecc80();
  if (iVar2 == 0) {
    return;
  }
  cVar1 = FUN_00567770();
  if (cVar1 != '\0') {
    return;
  }
  cVar1 = FUN_004bf150();
  if (cVar1 == '\0') {
    cVar1 = FUN_00565da0();
    if (cVar1 == '\0') goto LAB_005e6eb3;
    pcVar8 = FUN_00645af0;
  }
  else {
    pcVar8 = FUN_00645a30;
  }
  uVar7 = 0x459c4000;
  piVar9 = in_ECX;
  uVar3 = (**(code **)(*in_ECX + 0x174))(0x459c4000,pcVar8);
  uVar6 = 0x459c4000;
  uVar4 = (**(code **)(*in_ECX + 0x174))(0x459c4000,uVar3);
  uVar5 = FUN_006ecc80(uVar4);
  FUN_00446b90(uVar5,uVar4,uVar6,uVar3,uVar7,pcVar8,piVar9);
LAB_005e6eb3:
  cVar1 = FUN_00566dc0(in_ECX,0,0xbf800000);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x140))(), cVar1 == '\0')) {
    cVar1 = FUN_00565dd0();
    if (cVar1 != '\0') {
      pcVar8 = FUN_00645a30;
      uVar7 = 0x459c4000;
      piVar9 = in_ECX;
      uVar3 = (**(code **)(*in_ECX + 0x174))(0x459c4000,FUN_00645a30);
      uVar6 = 0x459c4000;
      uVar4 = (**(code **)(*in_ECX + 0x174))(0x459c4000,uVar3);
      uVar5 = FUN_006ecc80(uVar4);
      FUN_00446b90(uVar5,uVar4,uVar6,uVar3,uVar7,pcVar8,piVar9);
      (**(code **)(*(int *)in_ECX[0x16] + 0x144))(1);
      return;
    }
    cVar1 = FUN_00565de0();
    if (cVar1 != '\0') {
      pcVar8 = FUN_00645af0;
      uVar7 = 0x459c4000;
      piVar9 = in_ECX;
      uVar3 = (**(code **)(*in_ECX + 0x174))(0x459c4000,FUN_00645af0);
      uVar6 = 0x459c4000;
      uVar4 = (**(code **)(*in_ECX + 0x174))(0x459c4000,uVar3);
      uVar5 = FUN_006ecc80(uVar4);
      FUN_00446b90(uVar5,uVar4,uVar6,uVar3,uVar7,pcVar8,piVar9);
    }
  }
  return;
}



undefined4 FUN_005e6fa0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (((*(int *)(in_ECX + 0x58) != 0) && (iVar1 = *(int *)(*(int *)(in_ECX + 0x58) + 8), iVar1 != 0)
      ) && (*(char *)(iVar1 + 0x20) == '\x03')) {
    iVar1 = *(int *)(iVar1 + 0x18);
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x180))();
    if (*(int *)((&PTR_DAT_00b152b0)[iVar1] + iVar2 * 4) == 5) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_005e6fe0(void)

{
  int iVar1;
  int in_ECX;
  
  if (((*(int *)(in_ECX + 0x58) != 0) &&
      (iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x184))(), iVar1 != 0)) &&
     (*(char *)(iVar1 + 0x20) == '\x1c')) {
    return 1;
  }
  return 0;
}



void FUN_005e70f0(char param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  int *in_ECX;
  char unaff_retaddr;
  undefined4 uStack_4;
  
  cVar4 = (**(code **)(*in_ECX + 0x198))(0);
  if ((((cVar4 == '\0') && (cVar4 = (**(code **)(*in_ECX + 0x19c))(), cVar4 == '\0')) &&
      (in_ECX[0x2c] != 4)) &&
     ((((int *)in_ECX[0x16] != (int *)0x0 &&
       (iVar5 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), iVar5 == 0)) &&
      ((piVar3 = (int *)in_ECX[0x16], (float)piVar3[0x90] <= (float)in_ECX[0x2f] ||
       (fVar1 = (float)piVar3[0x90], fVar2 = (float)in_ECX[0x2f], pfVar6 = (float *)FUN_00403c00(),
       fVar2 <= fVar1 - *pfVar6)))))) {
    pfVar6 = (float *)FUN_00403c00();
    piVar3[0x90] = (int)(*pfVar6 + (float)in_ECX[0x2f]);
    if (in_ECX == DAT_00b333c4) {
      if (param_1 != '\0') {
        FUN_007eb080(0x3fc00000);
      }
      if (unaff_retaddr != '\0') {
        (**(code **)(*DAT_00b333c4 + 0x308))(0,1,0);
        return;
      }
    }
    else if (unaff_retaddr != '\0') {
      uStack_4 = (**(code **)(*piVar3 + 0x33c))(0);
      FUN_00616530(&uStack_4);
    }
  }
  return;
}



void FUN_005e7230(void)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *in_ECX;
  uint3 unaff_EBP;
  bool bVar8;
  char cVar12;
  uint uVar9;
  undefined4 uVar10;
  undefined1 uVar14;
  undefined2 uVar13;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 *puStack_14;
  int iStack_8;
  char cStack_4;
  undefined3 uVar11;
  
  if ((int *)in_ECX[0x16] == (int *)0x0) {
    return;
  }
  if (*(char *)(DAT_00b33a98 + 0xcd4) != '\0') {
    return;
  }
  piVar3 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0xf0))(0);
  piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0xf8))(0);
  iVar5 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(0);
  iVar6 = FUN_0041e6f0();
  uVar9 = (uint)unaff_EBP;
  iVar7 = (**(code **)(*in_ECX + 0x18c))();
  if (iVar7 == 4) {
    uVar9 = CONCAT13(1,unaff_EBP);
  }
  puStack_14 = (undefined4 *)0x0;
  puVar15 = (undefined4 *)0x0;
  if (iVar6 != 0) {
    puStack_14 = (undefined4 *)FUN_00486790(0xd,0);
    puVar15 = (undefined4 *)FUN_00486790(0xe,0);
  }
  cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))();
  uVar11 = (undefined3)(CONCAT13((char)(uVar9 >> 0x18),(uint3)(ushort)uVar9) >> 8);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x2fc))();
  }
  uVar10 = CONCAT31(uVar11,cVar1);
  if (((cStack_4 == '\0') && (cVar1 == '\0')) && (cVar1 = FUN_00578f60(), cVar1 != '\0')) {
    uVar10 = CONCAT31(uVar11,1);
  }
  uVar16 = 1;
  if ((iStack_8 == 0) || (cStack_4 != '\0')) {
    uVar16 = 0;
  }
  if (iVar5 == 0) {
    bVar8 = false;
  }
  else {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x90);
    uVar14 = (undefined1)((uint)uVar10 >> 0x18);
    if ((cVar1 == '\x01') || (('\x02' < cVar1 && (cVar1 < '\x06')))) {
      bVar8 = true;
      uVar10 = CONCAT13(uVar14,CONCAT12(1,(ushort)uVar10));
    }
    else {
      bVar8 = false;
      uVar10 = CONCAT13(uVar14,(uint3)(ushort)uVar10);
    }
  }
  cVar1 = (char)uVar10;
  uVar13 = (undefined2)((uint)uVar10 >> 0x10);
  if (iStack_8 == 0) {
    if (bVar8) {
      if ((piVar4 != (int *)0x0) && (cVar2 = FUN_00484e80(0), cVar2 != '\0')) {
        FUN_004853b0(0,0,0);
        FUN_004dc8f0(uVar16);
        uVar10 = CONCAT22(uVar13,CONCAT11(1,cVar1));
      }
      if (piVar3 != (int *)0x0) {
        cVar1 = FUN_00484e80(0);
        if (cVar1 == '\0') {
          if ((char)uVar10 == '\0') goto LAB_005e76f1;
        }
        else if ((char)uVar10 == '\0') {
LAB_005e76f1:
          cVar1 = (**(code **)(*in_ECX + 0x198))(0);
          if (cVar1 == '\0') {
            cVar1 = FUN_00484e80(0);
            if (cVar1 == '\0') goto LAB_005e7902;
LAB_005e791a:
            FUN_004e1c70(piVar3[2]);
          }
        }
        else {
          FUN_004853b0(0,0,0);
          FUN_004dcab0();
        }
      }
    }
    else if (iVar5 == 0) {
      if ((piVar4 != (int *)0x0) && (cVar2 = FUN_00484e80(0), cVar2 != '\0')) {
        FUN_004853b0(0,0,0);
        FUN_004dc8f0(uVar16);
        uVar10 = CONCAT22(uVar13,CONCAT11(1,cVar1));
      }
      if (piVar3 != (int *)0x0) {
        cVar1 = FUN_00484e80(0);
        if ((cVar1 == '\0') && (cVar1 = (**(code **)(*in_ECX + 0x198))(0), cVar1 == '\0')) {
          if ((puVar15 != (undefined4 *)0x0) && (*piVar3 != 0)) {
            FUN_00446cb0(*(undefined4 *)*puVar15);
          }
          FUN_004e1c70(piVar3[2]);
        }
        else {
          cVar1 = (**(code **)(*in_ECX + 0x198))(0);
          if (cVar1 == '\0') {
            FUN_004e1c70(piVar3[2]);
          }
        }
      }
    }
    else if (cVar1 == '\0') {
      if (piVar3 == (int *)0x0) {
        if (((piVar4 != (int *)0x0) && (cVar1 = FUN_00484e80(0), cVar1 == '\0')) &&
           (cVar1 = (**(code **)(*in_ECX + 0x198))(0), cVar1 == '\0')) {
          if ((puStack_14 != (undefined4 *)0x0) && (*piVar4 != 0)) {
            FUN_00446cb0(*(undefined4 *)*puStack_14);
          }
          FUN_004e1b40(piVar4[2]);
          uVar10 = CONCAT22(uVar13,0x100);
        }
      }
      else {
        if ((piVar4 != (int *)0x0) && (cVar1 = FUN_00484e80(0), cVar1 != '\0')) {
          FUN_004853b0(0,0,0);
          FUN_004dc8f0(uVar16);
          uVar10 = CONCAT22(uVar13,0x100);
        }
        cVar1 = FUN_00484e80(0);
        if ((cVar1 == '\0') && (cVar1 = (**(code **)(*in_ECX + 0x198))(0), cVar1 == '\0')) {
LAB_005e7902:
          if ((puVar15 != (undefined4 *)0x0) && (*piVar3 != 0)) {
            FUN_00446cb0(*(undefined4 *)*puVar15);
          }
          goto LAB_005e791a;
        }
      }
    }
    else if ((piVar4 == (int *)0x0) ||
            ((cVar2 = FUN_00484e80(0), cVar2 != '\0' ||
             (cVar2 = (**(code **)(*in_ECX + 0x198))(0), cVar2 != '\0')))) {
      if ((piVar3 != (int *)0x0) &&
         (((cVar1 = FUN_00484e80(0), cVar1 == '\0' && (piVar4 == (int *)0x0)) &&
          (cVar1 = (**(code **)(*in_ECX + 0x198))(0), cVar1 == '\0')))) {
        if ((puVar15 != (undefined4 *)0x0) && (*piVar3 != 0)) {
          FUN_00446cb0(*(undefined4 *)*puVar15);
        }
        FUN_004e1c70(piVar3[2]);
      }
    }
    else {
      if ((puStack_14 != (undefined4 *)0x0) && (*piVar4 != 0)) {
        FUN_00446cb0(*(undefined4 *)*puStack_14);
      }
      FUN_004e1b40(piVar4[2]);
      uVar10 = CONCAT22(uVar13,CONCAT11(1,cVar1));
      if ((piVar3 != (int *)0x0) && (cVar1 = FUN_00484e80(0), cVar1 != '\0')) {
        FUN_004853b0(0,0,0);
        FUN_004dcab0();
      }
    }
    if (((char)((uint)uVar10 >> 0x18) == '\0') ||
       (iVar5 = (**(code **)(*in_ECX + 0x380))(), iVar5 != 0)) goto LAB_005e7a02;
    if ((piVar4 != (int *)0x0) && (cVar1 = FUN_00484e80(0), cVar1 != '\0')) {
      FUN_004853b0(0,0,0);
      FUN_004dc8f0(uVar16);
      uVar10 = 0x100;
    }
    if (piVar3 == (int *)0x0) goto LAB_005e7a02;
LAB_005e79c0:
    cVar1 = FUN_00484e80(0);
    if (cVar1 != '\0') goto LAB_005e7a02;
    cVar1 = (**(code **)(*in_ECX + 0x198))(0);
    bVar8 = cVar1 == '\0';
LAB_005e79dd:
    if (!bVar8) goto LAB_005e7a02;
LAB_005e79df:
    if ((puVar15 != (undefined4 *)0x0) && (*piVar3 != 0)) {
      FUN_00446cb0(*(undefined4 *)*puVar15);
    }
    FUN_004e1c70(piVar3[2]);
    goto LAB_005e7a02;
  }
  cVar2 = *(char *)(iStack_8 + 4);
  cVar12 = (char)((uint)uVar10 >> 0x10);
  if (cVar2 == '\x14') {
    cVar2 = FUN_00468ff0(0xd,0);
    if (cVar2 == '\0') goto LAB_005e7a02;
    if (cVar1 == '\0') {
      if ((piVar3 == (int *)0x0) || (piVar4 == (int *)0x0)) goto LAB_005e7643;
    }
    else {
      if ((piVar4 == (int *)0x0) || (iVar5 == 0)) {
        if (((piVar3 != (int *)0x0) && (cVar2 = FUN_00484e80(0), cVar2 == '\0')) &&
           (cVar2 = (**(code **)(*in_ECX + 0x198))(0), cVar2 == '\0')) {
          if ((puVar15 != (undefined4 *)0x0) && (*piVar3 != 0)) {
            FUN_00446cb0(*(undefined4 *)*puVar15);
          }
          FUN_004e1c70(piVar3[2]);
        }
      }
      else if ((piVar3 != (int *)0x0) && (cVar2 = FUN_00484e80(0), cVar2 != '\0')) {
        FUN_004853b0(0,0,0);
        FUN_004dcab0();
      }
LAB_005e7643:
      if (((iVar5 != 0) && (cVar12 == '\0')) || (piVar4 == (int *)0x0)) goto LAB_005e7a02;
    }
    FUN_004853b0(0,0,0);
    FUN_004dc8f0(0);
    uVar10 = CONCAT22(uVar13,CONCAT11(1,cVar1));
    goto LAB_005e7a02;
  }
  if (cVar2 == '\x1a') {
    cVar2 = cVar1;
    if (bVar8) {
joined_r0x005e758c:
      if (cVar2 != '\0') {
        if (piVar3 == (int *)0x0) goto LAB_005e7a02;
        cVar1 = FUN_00484e80(0);
        goto LAB_005e73e6;
      }
    }
    else if (cVar1 != '\0') {
      if (piVar4 == (int *)0x0) goto LAB_005e7a02;
      cVar2 = FUN_00484e80(0);
      goto joined_r0x005e758c;
    }
    if (((piVar4 != (int *)0x0) && (cVar2 = FUN_00484e80(0), cVar2 != '\0')) && (cVar1 == '\0')) {
      FUN_004853b0(0,0,0);
      FUN_004dc8f0(uVar16);
      uVar10 = CONCAT22(uVar13,0x100);
    }
  }
  else {
    if (cVar2 != '!') goto LAB_005e7a02;
    if (cVar12 == '\0') {
      if ((cVar1 == '\0') && (piVar3 != (int *)0x0)) {
        if ((piVar4 != (int *)0x0) && (cVar1 = FUN_00484e80(0), cVar1 != '\0')) {
          FUN_004853b0(0,0,0);
          FUN_004dc8f0(uVar16);
          uVar10 = CONCAT22(uVar13,0x100);
        }
        goto LAB_005e79c0;
      }
      if ((iVar5 == 0) || ((cVar1 == '\0' && (piVar3 != (int *)0x0)))) goto LAB_005e7a02;
      if ((piVar4 != (int *)0x0) &&
         ((cVar2 = FUN_00484e80(0), cVar2 == '\0' &&
          (cVar2 = (**(code **)(*in_ECX + 0x198))(0), cVar2 == '\0')))) {
        if ((puStack_14 != (undefined4 *)0x0) && (*piVar4 != 0)) {
          FUN_00446cb0(*(undefined4 *)*puStack_14);
        }
        FUN_004e1b40(piVar4[2]);
        uVar10 = CONCAT22(uVar13,CONCAT11(1,cVar1));
      }
      if (piVar3 == (int *)0x0) goto LAB_005e7a02;
      cVar1 = FUN_00484e80(0);
      if (((cVar1 != '\0') && ((char)uVar10 != '\0')) && (piVar4 != (int *)0x0)) {
        FUN_004853b0(0,0,0);
        FUN_004dcab0();
        goto LAB_005e7a02;
      }
      cVar1 = FUN_00484e80(0);
      if ((cVar1 != '\0') || (cVar1 = (**(code **)(*in_ECX + 0x198))(0), cVar1 != '\0'))
      goto LAB_005e7a02;
      if ((char)uVar10 != '\0') {
        bVar8 = piVar4 == (int *)0x0;
        goto LAB_005e79dd;
      }
      goto LAB_005e79df;
    }
    if ((piVar4 != (int *)0x0) && (cVar2 = FUN_00484e80(0), cVar2 != '\0')) {
      FUN_004853b0(0,0,0);
      FUN_004dc8f0(1);
      uVar10 = CONCAT22(uVar13,CONCAT11(1,cVar1));
    }
    if ((piVar3 == (int *)0x0) || (cVar1 = FUN_00484e80(0), cVar1 == '\0')) goto LAB_005e7a02;
    cVar1 = (char)uVar10;
LAB_005e73e6:
    if (cVar1 != '\0') {
      FUN_004853b0(0,0,0);
      FUN_004dcab0();
    }
  }
LAB_005e7a02:
  if (puStack_14 != (undefined4 *)0x0) {
    FUN_00484470();
    FUN_00401f20(puStack_14);
  }
  if (puVar15 != (undefined4 *)0x0) {
    FUN_00484470();
    FUN_00401f20(puVar15);
  }
  if ((char)((uint)uVar10 >> 8) != '\0') {
    (**(code **)(*in_ECX + 0x2c0))();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e7a60(float param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  int *piVar4;
  
  piVar4 = (int *)(in_ECX + 0x9c);
  piVar2 = (int *)FUN_00401f00(8);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  do {
    while( true ) {
      while( true ) {
        do {
          piVar3 = piVar2;
          if (piVar4 == (int *)0x0) {
            for (; (piVar3 != (int *)0x0 && (*piVar3 != 0)); piVar3 = (int *)piVar3[1]) {
              FUN_0065c620(*piVar3);
            }
            iVar1 = piVar2[1];
            while (iVar1 != 0) {
              iVar1 = *(int *)(piVar2[1] + 4);
              FUN_00401f20(piVar2[1]);
              piVar2[1] = iVar1;
            }
            *piVar2 = 0;
            FUN_00401f20(piVar2);
            return;
          }
          iVar1 = *piVar4;
          piVar4 = (int *)piVar4[1];
        } while (iVar1 == 0);
        if (*(float *)(iVar1 + 4) <= 0.0) break;
        *(float *)(iVar1 + 4) = *(float *)(iVar1 + 4) - param_1;
      }
      if (*piVar2 != 0) break;
LAB_005e7ae0:
      *piVar2 = iVar1;
    }
    piVar3 = (int *)FUN_00401f00(8);
    if (piVar3 == (int *)0x0) {
      _DAT_00000004 = piVar2[1];
      piVar2[1] = 0;
      goto LAB_005e7ae0;
    }
    *piVar3 = *piVar2;
    piVar3[1] = 0;
    piVar3[1] = piVar2[1];
    piVar2[1] = (int)piVar3;
    *piVar2 = iVar1;
  } while( true );
}



void FUN_005e7b50(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  
  piVar3 = (int *)0x0;
  if ((param_1 != 0) && (piVar1 = (int *)(in_ECX + 0x9c), *(int *)(in_ECX + 0x9c) != 0)) {
    while ((piVar1 != (int *)0x0 && (piVar3 == (int *)0x0))) {
      piVar2 = (int *)*piVar1;
      piVar3 = (int *)0x0;
      if ((piVar2 != (int *)0x0) && (*piVar2 == param_1)) {
        piVar3 = piVar2;
      }
      piVar1 = (int *)piVar1[1];
    }
  }
  return;
}



void FUN_005e7b90(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  for (piVar1 = (int *)(in_ECX + 0x9c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      FUN_00401f20(*piVar1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0xa0);
  while (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0xa0) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0xa0));
    *(int *)(in_ECX + 0xa0) = iVar2;
  }
  *(int *)(in_ECX + 0x9c) = 0;
  return;
}



void FUN_005e7be0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00420ef0();
  if (iVar2 != 0) {
    for (piVar1 = *(int **)(iVar2 + 0xc); (piVar1 != (int *)0x0 && (iVar2 = *piVar1, iVar2 != 0));
        piVar1 = (int *)piVar1[1]) {
      if ((*(int **)(iVar2 + 0x58) != (int *)0x0) &&
         ((iVar3 = (**(code **)(**(int **)(iVar2 + 0x58) + 0x184))(), iVar3 != 0 &&
          (*(char *)(iVar3 + 0x20) == '\a')))) {
        (**(code **)(**(int **)(iVar2 + 0x58) + 0x17c))(0);
      }
    }
  }
  return;
}



void FUN_005e7c30(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  if (param_1 == 0) {
    return;
  }
  FUN_004d7630();
  FUN_0042b410();
  iVar3 = FUN_004d7630();
  if (iVar3 != 0) {
    iVar3 = FUN_0042b460();
    FUN_0042b470();
    puVar4 = (undefined4 *)FUN_006899c0();
    FUN_004d8a30(*puVar4,puVar4[1],puVar4[2]);
    if ((iVar3 == 0) || (cVar2 = FUN_0043f8c0(iVar3,0), cVar2 == '\0')) {
      uVar1 = 0x7f7fffff;
    }
    else {
      iVar3 = FUN_0042b430();
      FUN_004d8a10(*(undefined4 *)(iVar3 + 8));
      uVar1 = 0;
    }
    FUN_004d89d0(uVar1);
    FUN_004dd4b0();
    if ((*(int *)(*(int *)(in_ECX + 0x58) + 8) != 0) && ((char)param_1 != '\0')) {
      FUN_005668e0(1);
    }
    return;
  }
  return;
}



uint FUN_005e7d00(uint param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *in_ECX;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  uVar4 = param_1;
  uVar7 = FUN_00659be0(param_1);
  uVar7 = uVar7 & 0xffff;
  cVar5 = FUN_0045a170();
  uVar11 = uVar7;
  if (cVar5 != '\0') {
    uVar11 = uVar7 + 6;
  }
  iVar12 = uVar11 + 7;
  if ((param_1 & 0x40) != 0) {
    iVar12 = uVar11 + 8;
  }
  iVar8 = (**(code **)(*in_ECX + 0x170))();
  iVar13 = iVar12;
  if ((((*(char *)(iVar8 + 4) == '$') && (iVar8 = (**(code **)(*in_ECX + 0x170))(), iVar8 != 0)) &&
      (*(char *)(iVar8 + 0x104) == '\x04')) && (iVar13 = iVar12 + 1, in_ECX[0x35] != 0)) {
    iVar13 = iVar12 + 5;
  }
  if ((param_1 & 0x8000) != 0) {
    iVar13 = iVar13 + 2;
    piVar9 = in_ECX + 0x29;
    while ((piVar9 != (int *)0x0 &&
           ((piVar2 = (int *)piVar9[1], piVar2 != (int *)0x0 || (*piVar9 != 0))))) {
      iVar12 = *piVar9;
      piVar9 = piVar2;
      if (*(int *)(iVar12 + 4) != 0) {
        iVar13 = iVar13 + 8;
      }
    }
  }
  if ((param_1 & 0x20000000) != 0) {
    iVar13 = iVar13 + 4;
  }
  iVar12 = 0;
  for (piVar9 = in_ECX + 0x27; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[1]) {
    if (*piVar9 != 0) {
      iVar12 = iVar12 + 1;
    }
  }
  param_1 = iVar13 + 2 + iVar12 * 8;
  bVar1 = *(byte *)(DAT_00b33b00 + 0x7c);
  if (0x31 < bVar1) {
    param_1 = param_1 + 4;
  }
  if (0x3b < bVar1) {
    param_1 = param_1 + 4;
  }
  if ((0x43 < bVar1) && ((uVar4 & 0x200000) != 0)) {
    sVar6 = FUN_0065c520();
    param_1 = (uint)(ushort)((short)param_1 + sVar6);
  }
  bVar1 = *(byte *)(DAT_00b33b00 + 0x7c);
  if (0x44 < bVar1) {
    param_1 = param_1 + 5;
  }
  if (0x60 < bVar1) {
    param_1 = param_1 + 4;
  }
  if (100 < bVar1) {
    param_1 = param_1 + 4;
  }
  if (0x70 < bVar1) {
    param_1 = param_1 + 0xe;
  }
  if (0x72 < bVar1) {
    param_1 = param_1 + 1;
  }
  if (0x7a < bVar1) {
    param_1 = param_1 + 1;
  }
  if (DAT_00b05bac == '\0') {
    return param_1 & 0xffff;
  }
  puVar3 = *(undefined4 **)(DAT_00b33b00 + 0x84);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",(param_1 & 0xffff) - uVar7,
                 0x4323,".\\AI\\Actor.cpp");
    return param_1 & 0xffff;
  }
  piVar9 = (int *)FUN_0046b250(*puVar3);
  uVar10 = (**(code **)(*piVar9 + 0xd4))(*(undefined4 *)((int)puVar3 + 5),0x4323,".\\AI\\Actor.cpp")
  ;
  FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
               (param_1 & 0xffff) - uVar7,*puVar3,uVar10);
  return param_1 & 0xffff;
}



void FUN_005e7ef0(uint param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  short *psVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int *in_ECX;
  uint uVar10;
  char local_19;
  int local_18;
  int iStack_14;
  int local_10;
  short *local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar10 = param_1;
  FUN_00659c30(param_1);
  local_8 = 0;
  local_10 = *(int *)(DAT_00b33b00 + 0x14);
  local_c = (short *)0x0;
  cVar6 = FUN_0045a170();
  if (cVar6 != '\0') {
    local_18 = 0x4b4f4c42;
    FUN_0045b9a0(&local_18,4);
    local_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_8,2);
  }
  FUN_0046ac70(in_ECX + 0x2f,4);
  FUN_0046ac70(in_ECX + 0x32,1);
  FUN_0046ac70((int)in_ECX + 0xc9,1);
  FUN_0046ac70(in_ECX + 0x1e,1);
  if ((uVar10 & 0x40) != 0) {
    local_19 = (char)in_ECX[0x2c];
    FUN_0046ac70(&local_19,1);
  }
  iVar7 = (**(code **)(*in_ECX + 0x170))();
  if (((*(char *)(iVar7 + 4) == '$') && (iVar7 = (**(code **)(*in_ECX + 0x170))(), iVar7 != 0)) &&
     (*(char *)(iVar7 + 0x104) == '\x04')) {
    local_19 = in_ECX[0x35] != 0;
    FUN_0046ac70(&local_19,1);
    if (local_19 != '\0') {
      local_18 = *(int *)(in_ECX[0x35] + 0xc);
      FUN_0046ac90(&local_18,4);
    }
  }
  if ((uVar10 & 0x8000) != 0) {
    local_18 = 0;
    puVar1 = *(undefined2 **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_18,2);
    uVar10 = param_1;
    for (piVar8 = in_ECX + 0x29;
        (param_1 = uVar10, piVar8 != (int *)0x0 && ((piVar8[1] != 0 || (*piVar8 != 0))));
        piVar8 = (int *)piVar8[1]) {
      iVar7 = *piVar8;
      iVar2 = *(int *)(iVar7 + 4);
      if (iVar2 != 0) {
        uStack_4 = *(undefined4 *)(iVar2 + 0xc);
        FUN_0046ac90(&uStack_4,4);
        FUN_0046ac70(iVar7,4);
        local_18 = local_18 + 1;
      }
      uVar10 = param_1;
    }
    *puVar1 = (undefined2)local_18;
  }
  if ((uVar10 & 0x20000000) != 0) {
    uStack_4 = FUN_00453a00(in_ECX);
    FUN_0046ac70(&uStack_4,4);
  }
  iStack_14 = 0;
  puVar1 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&iStack_14,2);
  for (piVar8 = in_ECX + 0x27; (piVar8 != (int *)0x0 && ((piVar8[1] != 0 || (*piVar8 != 0))));
      piVar8 = (int *)piVar8[1]) {
    piVar3 = (int *)*piVar8;
    local_18 = 0;
    iVar7 = *piVar3;
    if (iVar7 != 0) {
      local_18 = *(int *)(iVar7 + 0xc);
    }
    FUN_0046ac90(&local_18,4);
    FUN_0046ac70(piVar3 + 1,4);
    iStack_14 = iStack_14 + 1;
  }
  *puVar1 = (undefined2)iStack_14;
  if (0x31 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    local_18 = 0;
    if (in_ECX[0x1f] != 0) {
      local_18 = *(int *)(in_ECX[0x1f] + 0xc);
    }
    FUN_0046ac90(&local_18,4);
  }
  if (0x3b < *(byte *)(DAT_00b33b00 + 0x7c)) {
    local_18 = 0;
    if (in_ECX[0x34] != 0) {
      local_18 = *(int *)(in_ECX[0x34] + 0xc);
    }
    FUN_0046ac90(&local_18,4);
  }
  if ((0x43 < *(byte *)(DAT_00b33b00 + 0x7c)) && ((param_1 & 0x200000) != 0)) {
    FUN_0065c270();
  }
  if (0x44 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x20,1);
    param_1 = 0;
    if (in_ECX[0x33] != 0) {
      param_1 = *(uint *)(in_ECX[0x33] + 0xc);
    }
    FUN_0045f7a0(&param_1,4);
  }
  if (0x60 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    param_1 = 0;
    if (in_ECX[0x39] != 0) {
      param_1 = *(uint *)(in_ECX[0x39] + 0xc);
    }
    FUN_0045f7a0(&param_1,4);
  }
  if (100 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(in_ECX + 0x21,4);
  }
  if (0x70 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(in_ECX + 0x2b,4);
    FUN_0046ac70((int)in_ECX + 0xca,1);
    FUN_0046ac70(in_ECX + 0x36,1);
    FUN_0046ac70(in_ECX + 0x37,4);
    FUN_0046ac70(in_ECX + 0x40,4);
  }
  if (0x72 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(in_ECX + 0x3f,1);
  }
  if (0x7a < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(in_ECX + 0x30,1);
  }
  if (DAT_00b05bac != '\0') {
    puVar4 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar7 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar7 - local_10,0x43c2,
                   ".\\AI\\Actor.cpp");
    }
    else {
      piVar8 = (int *)FUN_0046b250(*puVar4);
      uVar9 = (**(code **)(*piVar8 + 0xd4))
                        (*(undefined4 *)((int)puVar4 + 5),0x43c2,".\\AI\\Actor.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar7 - local_10,*puVar4,uVar9);
    }
  }
  cVar6 = FUN_0045a170();
  psVar5 = local_c;
  if (cVar6 != '\0') {
    uVar10 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_c + 0xffffU < uVar10) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\AI\\Actor.cpp",0x43c2);
    }
    *psVar5 = (short)uVar10 - (short)psVar5;
  }
  return;
}



void FUN_005e83a0(uint param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  code *pcVar12;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  bool bVar13;
  bool bVar14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c25fb;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0065a780(param_1,param_2);
  if ((param_1 & 0x8000) != 0) {
    piVar3 = in_ECX + 0x29;
    piVar5 = (int *)0x0;
    while ((piVar4 = piVar3, piVar4 != (int *)0x0 && ((piVar4[1] != 0 || (*piVar4 != 0))))) {
      iVar10 = *piVar4;
      uVar8 = FUN_0046b250(*(undefined4 *)(iVar10 + 4),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0,uVar7
                          );
      iVar9 = FUN_009832e6(uVar8);
      *(int *)(iVar10 + 4) = iVar9;
      if (iVar9 == 0) {
        if (piVar5 == (int *)0x0) {
          piVar1 = (int *)piVar4[1];
          piVar3 = piVar4;
          if (piVar1 == (int *)0x0) {
            *piVar4 = 0;
            FUN_00401f20(iVar10);
          }
          else {
            piVar4[1] = piVar1[1];
            *piVar4 = *piVar1;
            FUN_00401f20(piVar1);
            FUN_00401f20(iVar10);
          }
        }
        else {
          FUN_0065c620(iVar10);
          piVar3 = (int *)piVar5[1];
          FUN_00401f20(iVar10);
        }
      }
      else {
        piVar3 = (int *)piVar4[1];
        piVar5 = piVar4;
      }
    }
  }
  iVar10 = (**(code **)(*in_ECX + 0x170))();
  if ((((*(char *)(iVar10 + 4) == '$') && (iVar10 = (**(code **)(*in_ECX + 0x170))(), iVar10 != 0))
      && (*(char *)(iVar10 + 0x104) == '\x04')) && (in_ECX[0x35] != 0)) {
    uVar8 = FUN_0046b250(in_ECX[0x35],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05940,0,uVar7);
    iVar10 = FUN_009832e6(uVar8);
    in_ECX[0x35] = iVar10;
    if (iVar10 != 0) {
      if ((int *)in_ECX[0x16] == (int *)0x0) {
        bVar13 = false;
      }
      else {
        iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
        bVar13 = iVar10 == 0;
      }
      if (*(int **)(in_ECX[0x35] + 0x58) == (int *)0x0) {
        bVar14 = false;
      }
      else {
        iVar10 = (**(code **)(**(int **)(in_ECX[0x35] + 0x58) + 8))();
        bVar14 = iVar10 == 0;
      }
      if (bVar13 != bVar14) {
        iVar10 = FUN_006ecc80();
        iVar9 = FUN_006ecc80();
        if (iVar10 != iVar9) {
          in_ECX[0x35] = 0;
          goto LAB_005e8568;
        }
      }
      (**(code **)(*(int *)in_ECX[0x35] + 900))();
    }
  }
LAB_005e8568:
  if (0x13 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    piVar3 = in_ECX + 0x27;
    piVar5 = (int *)0x0;
    while ((piVar4 = piVar3, piVar4 != (int *)0x0 && ((piVar4[1] != 0 || (*piVar4 != 0))))) {
      piVar1 = (int *)*piVar4;
      if (*piVar1 != 0) {
        uVar8 = FUN_0046b250(*piVar1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03800,0);
        iVar10 = FUN_009832e6(uVar8);
        *piVar1 = iVar10;
      }
      if (*piVar1 == 0) {
        if (piVar5 == (int *)0x0) {
          piVar2 = (int *)piVar4[1];
          piVar3 = piVar4;
          if (piVar2 == (int *)0x0) {
            *piVar4 = 0;
            FUN_00401f20(piVar1);
          }
          else {
            piVar4[1] = piVar2[1];
            *piVar4 = *piVar2;
            FUN_00401f20(piVar2);
            FUN_00401f20(piVar1);
          }
        }
        else {
          FUN_0065c620(piVar1);
          piVar3 = (int *)piVar5[1];
          FUN_00401f20(piVar1);
        }
      }
      else {
        piVar3 = (int *)piVar4[1];
        piVar5 = piVar4;
      }
    }
  }
  if (0x31 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    if (in_ECX[0x1f] == 0) {
      in_ECX[0x1f] = 0;
    }
    else {
      uVar8 = FUN_0046b250(in_ECX[0x1f],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
      iVar10 = FUN_009832e6(uVar8);
      in_ECX[0x1f] = iVar10;
    }
  }
  if (0x44 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    if (in_ECX[0x33] == 0) {
      in_ECX[0x33] = 0;
    }
    else {
      uVar8 = FUN_0046b250(in_ECX[0x33],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
      iVar10 = FUN_009832e6(uVar8);
      in_ECX[0x33] = iVar10;
    }
  }
  if (0x60 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    if (in_ECX[0x39] == 0) {
      in_ECX[0x39] = 0;
    }
    else {
      uVar8 = FUN_0046b250(in_ECX[0x39],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
      iVar10 = FUN_009832e6(uVar8);
      in_ECX[0x39] = iVar10;
    }
  }
  if (((int *)in_ECX[0x16] != (int *)0x0) &&
     (iVar10 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), iVar10 != 0)) {
    iVar10 = FUN_006ecc80();
    if (iVar10 == 0) {
      cVar6 = FUN_004db4a0();
      if ((cVar6 != '\0') && (iVar10 = FUN_004d6670(), iVar10 != 0)) {
        pfVar11 = (float *)(**(code **)(*in_ECX + 0x174))();
        iVar10 = FUN_00447740((int)ROUND(*pfVar11) >> 0xc,(int)ROUND(pfVar11[1]) >> 0xc,iVar10,0);
        if ((iVar10 != 0) && (*(char *)(iVar10 + 0x26) == '\x06')) {
          (**(code **)(*in_ECX + 0x1a4))();
          uVar7 = *(uint *)(DAT_00b33b00 + 0x18);
          *(uint *)(DAT_00b33b00 + 0x18) = *(uint *)(DAT_00b33b00 + 0x18) & 0xfffffffd;
          param_1 = CONCAT31(param_1._1_3_,(char)(uVar7 >> 1)) & 0xffffff01;
          FUN_004d35d0(in_ECX);
          FUN_00452a70(param_1);
        }
      }
    }
    else {
      iVar10 = FUN_006ecc80();
      if (*(char *)(iVar10 + 0x26) == '\x06') {
        (**(code **)(*in_ECX + 0x1a4))();
      }
    }
  }
  if (((in_ECX[0x16] == 0) && (((uint)in_ECX[2] >> 5 & 1) == 0)) &&
     (((uint)in_ECX[2] >> 0xb & 1) == 0)) {
    iVar10 = FUN_00401f00(0x90);
    uStack_4 = 0;
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = FUN_006438f0();
    }
    uStack_4 = 0xffffffff;
    in_ECX[0x16] = iVar10;
    iVar10 = FUN_0065ad00();
    if (iVar10 == 0) {
      pcVar12 = *(code **)(*in_ECX + 0x1a4);
    }
    else if (iVar10 == 1) {
      pcVar12 = *(code **)(*in_ECX + 0x1b0);
    }
    else {
      if (iVar10 != 2) goto LAB_005e8858;
      pcVar12 = *(code **)(*in_ECX + 0x1ac);
    }
    (*pcVar12)();
  }
LAB_005e8858:
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_005e8890(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  
  uVar1 = in_ECX[0x16];
  uVar3 = *(uint *)(uVar1 + 8);
  if (uVar3 != 0) {
    uVar1 = FUN_00567770();
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_0041fb20();
      uVar3 = uVar1;
    }
    if ((uVar3 != 0) && ((*(byte *)(uVar3 + 0x1c) & 1) != 0)) {
      iVar2 = (**(code **)(*in_ECX + 0x170))();
      if (iVar2 != 0) {
        (**(code **)(*in_ECX + 400))();
      }
      uVar1 = FUN_00468240(0x10000);
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}



uint FUN_005e8900(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  int *piVar5;
  
  uVar2 = in_ECX[0x16];
  uVar4 = *(uint *)(uVar2 + 8);
  if (uVar4 != 0) {
    uVar2 = FUN_00567770();
    if ((char)uVar2 != '\0') {
      uVar2 = FUN_0041fb20();
      uVar4 = uVar2;
    }
    if ((uVar4 != 0) && ((*(byte *)(uVar4 + 0x1c) & 1) != 0)) {
      cVar1 = FUN_00566dc0(in_ECX,0,0xbf800000);
      if (cVar1 != '\0') {
LAB_005e8967:
        iVar3 = (**(code **)(*in_ECX + 0x170))();
        if (iVar3 != 0) {
          (**(code **)(*in_ECX + 400))();
        }
        uVar2 = FUN_00468240(0x259f);
        return uVar2;
      }
      iVar3 = FUN_006ecc80();
      uVar2 = 0;
      if (iVar3 != 0) {
        piVar5 = in_ECX;
        FUN_006ecc80();
        uVar2 = FUN_004caac0(piVar5);
        if ((char)uVar2 != '\0') goto LAB_005e8967;
      }
    }
  }
  return uVar2 & 0xffffff00;
}



uint FUN_005e89b0(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  
  uVar1 = in_ECX[0x16];
  uVar3 = *(uint *)(uVar1 + 8);
  if (uVar3 != 0) {
    uVar1 = FUN_00567770();
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_0041fb20();
      uVar3 = uVar1;
    }
    if ((uVar3 != 0) && ((*(byte *)(uVar3 + 0x1c) & 1) != 0)) {
      iVar2 = (**(code **)(*in_ECX + 0x170))();
      if (iVar2 != 0) {
        (**(code **)(*in_ECX + 400))();
      }
      uVar1 = FUN_00468240(0x4000);
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}



uint FUN_005e8a20(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  
  uVar1 = in_ECX[0x16];
  uVar3 = *(uint *)(uVar1 + 8);
  if (uVar3 != 0) {
    uVar1 = FUN_00567770();
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_0041fb20();
      uVar3 = uVar1;
    }
    if ((uVar3 != 0) && ((*(byte *)(uVar3 + 0x1c) & 1) != 0)) {
      iVar2 = (**(code **)(*in_ECX + 0x170))();
      if (iVar2 != 0) {
        (**(code **)(*in_ECX + 400))();
      }
      uVar1 = FUN_00468240(0x20000);
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}



void FUN_005e8a90(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x128))();
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  if (((iVar2 == 0) && (iVar3 != 0)) && (cVar1 = (**(code **)(*in_ECX + 400))(), cVar1 != '\0')) {
    iVar2 = iVar3;
  }
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x40) == 0)) &&
     ((*(int *)(iVar2 + 0x3c) == 0 && (iVar2 = (**(code **)(*in_ECX + 0x170))(), iVar2 != 0)))) {
    (**(code **)(*in_ECX + 400))();
  }
  FUN_004675a0();
  return;
}



char FUN_005e8b10(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  char cVar4;
  
  cVar4 = '\0';
  cVar2 = (**(code **)(*in_ECX + 0x334))(1);
  if ((cVar2 != '\0') && (iVar3 = (**(code **)(*in_ECX + 0x330))(), iVar3 != 0)) {
    iVar3 = (**(code **)(*in_ECX + 0x330))();
    piVar1 = *(int **)(iVar3 + 0x40);
    while (((piVar1 != (int *)0x0 && ((int *)*piVar1 != (int *)0x0)) && (cVar4 == '\0'))) {
      if ((*(int *)*piVar1 != 0) && (cVar2 = FUN_005e6c60(), cVar2 != '\0')) {
        cVar4 = '\x01';
      }
      piVar1 = (int *)piVar1[1];
    }
  }
  return cVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_005e8b80(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  int *in_ECX;
  bool bVar8;
  undefined4 unaff_EBX;
  float10 fVar9;
  undefined4 uVar10;
  char cVar11;
  float fStack_1c;
  
  cVar11 = (char)((uint)unaff_EBX >> 0x18);
  uVar10 = 0x21;
  (**(code **)(*in_ECX + 0x164))(0x21);
  cVar4 = FUN_00470d00(uVar10);
  if (cVar4 == '\0') {
    return false;
  }
  bVar8 = false;
  cVar4 = (**(code **)(*in_ECX + 0x334))(1);
  if (cVar4 != '\0') {
    iVar5 = (**(code **)(*(int *)in_ECX[0x16] + 0xf0))(1);
    return iVar5 != 0;
  }
  FUN_00402bd0();
  iVar5 = (**(code **)(*in_ECX + 0x284))(0x29);
  fVar3 = _DAT_00b37a50;
  if (iVar5 < 1) {
    fVar3 = 0.0;
  }
  iVar5 = FUN_006ecc80();
  if ((iVar5 == 0) || (cVar4 = FUN_004c97f0(), cVar4 == '\0')) {
    iVar5 = *(int *)(DAT_00b333a0 + 0x5c);
    fVar1 = _DAT_00b37730;
    if (20.0 < fStack_1c) {
      fVar1 = _DAT_00b37738;
    }
    if (fVar1 <= (*(float *)(iVar5 + 100) + *(float *)(iVar5 + 0x60) + *(float *)(iVar5 + 0x68)) -
                 fVar3) goto LAB_005e8d39;
  }
  else {
    iVar5 = FUN_004cad00(0);
    if (iVar5 != 2) goto LAB_005e8d39;
    fVar9 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x3ac))();
    fVar1 = (float)fVar9;
    if (100.0 < fVar1) {
      fVar1 = 100.0;
    }
    pfVar6 = (float *)FUN_00403c00();
    if (*pfVar6 <= fVar1 - fVar3) {
      iVar5 = (**(code **)(*(int *)in_ECX[0x16] + 0xf0))(1);
      if (iVar5 != 0) {
        pfVar6 = (float *)FUN_00403c00();
        fVar2 = *pfVar6;
        pfVar6 = (float *)FUN_00403c00();
        if (fVar1 - fVar3 < *pfVar6 + fVar2 + fVar2) {
          bVar8 = true;
          cVar11 = '\x01';
        }
      }
      goto LAB_005e8d39;
    }
  }
  bVar8 = true;
LAB_005e8d39:
  if ((((int *)in_ECX[0x16] != (int *)0x0) &&
      (uVar7 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), uVar7 < 2)) &&
     (iVar5 = in_ECX[0x16], iVar5 != 0)) {
    if (cVar11 != '\0') {
      *(float *)(iVar5 + 0xbc) = _DAT_00b37a58 * 5.0;
      return bVar8;
    }
    *(float *)(iVar5 + 0xbc) = _DAT_00b37a58;
  }
  return bVar8;
}



undefined4 FUN_005e8d90(int param_1)

{
  char cVar1;
  
  if ((param_1 == 0) || (cVar1 = FUN_00446b80(*(undefined4 *)(param_1 + 0xc)), cVar1 == '\0')) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x20) != '\x13') && (*(char *)(param_1 + 0x20) != '\x11')) {
    return 0x20000;
  }
  return 0x30000;
}



void FUN_005e8de0(int param_1)

{
  char cVar1;
  int *in_ECX;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    cVar1 = FUN_00446b80(*(undefined4 *)(param_1 + 0xc));
    if (cVar1 != '\0') {
      uVar2 = 0x20000;
      if ((*(char *)(param_1 + 0x20) == '\x13') || (*(char *)(param_1 + 0x20) == '\x11')) {
        uVar2 = 0x30000;
      }
      (**(code **)(*in_ECX + 0x40))(uVar2);
    }
  }
  return;
}



void FUN_005e8eb0(void)

{
  FUN_0041df00();
  return;
}



void FUN_005e8ec0(void)

{
  FUN_0041f150();
  return;
}



undefined4 * FUN_005e8ed0(char param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *in_ECX;
  int *piVar7;
  int *piStack_8;
  
  piVar2 = (int *)FUN_00401f00(8);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  iVar5 = 0;
  if ((iVar3 != 0) && (cVar1 = (**(code **)(*in_ECX + 400))(), cVar1 != '\0')) {
    iVar5 = iVar3;
  }
  for (piVar7 = (int *)(iVar5 + 0x58); (piVar7 != (int *)0x0 && (iVar5 = *piVar7, iVar5 != 0));
      piVar7 = (int *)piVar7[1]) {
    if (*piVar2 != 0) {
      piVar4 = (int *)FUN_00401f00(8);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = *piVar2;
        piVar4[1] = 0;
      }
      piVar4[1] = piVar2[1];
      piVar2[1] = (int)piVar4;
    }
    *piVar2 = iVar5;
  }
  cVar1 = FUN_004d7f80();
  if (cVar1 != '\0') {
    cVar1 = FUN_004d7f80();
    if ((cVar1 == '\0') || (iVar5 = (**(code **)(*in_ECX + 0x170))(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar5 + 0xe8);
    }
    for (piVar7 = (int *)(iVar5 + 0x30); (piVar7 != (int *)0x0 && (iVar5 = *piVar7, iVar5 != 0));
        piVar7 = (int *)piVar7[1]) {
      if (*piVar2 != 0) {
        piVar4 = (int *)FUN_00401f00(8);
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          *piVar4 = *piVar2;
          piVar4[1] = 0;
        }
        piVar4[1] = piVar2[1];
        piVar2[1] = (int)piVar4;
      }
      *piVar2 = iVar5;
    }
  }
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  iVar5 = 0;
  if ((iVar3 != 0) && (cVar1 = (**(code **)(*in_ECX + 400))(), cVar1 != '\0')) {
    iVar5 = iVar3;
  }
  for (piVar7 = (int *)(iVar5 + 0x60);
      (piVar7 != (int *)0x0 && ((piVar7[1] != 0 || (*piVar7 != 0)))); piVar7 = (int *)piVar7[1]) {
    if ((*piVar7 != 0) &&
       (piVar4 = (int *)FUN_004b0920(in_ECX), piStack_8 = piVar4, piVar4 != (int *)0x0)) {
      do {
        if ((piStack_8[1] == 0) && (*piStack_8 == 0)) break;
        iVar5 = *piStack_8;
        if (iVar5 != 0) {
          iVar3 = (**(code **)(*(int *)(iVar5 + 0x18) + 0x18))();
          if (((iVar3 != 4) && (iVar3 = (**(code **)(*(int *)(iVar5 + 0x18) + 0x18))(), iVar3 != 1))
             && (cVar1 = (**(code **)(in_ECX[0x17] + 0x1c))((int *)(iVar5 + 0x18),0,0,0),
                cVar1 != '\0')) {
            if (*piVar2 != 0) {
              piVar6 = (int *)FUN_00401f00(8);
              if (piVar6 == (int *)0x0) {
                piVar6 = (int *)0x0;
              }
              else {
                *piVar6 = *piVar2;
                piVar6[1] = 0;
              }
              piVar6[1] = piVar2[1];
              piVar2[1] = (int)piVar6;
            }
            *piVar2 = iVar5;
          }
        }
        piStack_8 = (int *)piStack_8[1];
      } while (piStack_8 != (int *)0x0);
      iVar5 = piVar4[1];
      while (iVar5 != 0) {
        iVar5 = *(int *)(piVar4[1] + 4);
        FUN_00401f20(piVar4[1]);
        piVar4[1] = iVar5;
      }
      *piVar4 = 0;
      FUN_00401f20(piVar4);
    }
  }
  piStack_8 = (int *)FUN_00401f00(8);
  piVar7 = piVar2;
  if (piStack_8 == (undefined4 *)0x0) {
    piStack_8 = (undefined4 *)0x0;
  }
  else {
    *piStack_8 = 0;
    piStack_8[1] = 0;
  }
  do {
    if ((piVar7 == (int *)0x0) || (iVar5 = *piVar7, iVar5 == 0)) {
      iVar5 = piVar2[1];
      while (iVar5 != 0) {
        iVar5 = *(int *)(piVar2[1] + 4);
        FUN_00401f20(piVar2[1]);
        piVar2[1] = iVar5;
      }
      *piVar2 = 0;
      FUN_00401f20(piVar2);
      return piStack_8;
    }
    iVar3 = (**(code **)(*(int *)(iVar5 + 0x18) + 0x18))();
    if (((iVar3 != 4) && (iVar3 = (**(code **)(*(int *)(iVar5 + 0x18) + 0x18))(), iVar3 != 1)) &&
       (cVar1 = (**(code **)(in_ECX[0x17] + 0x1c))((int *)(iVar5 + 0x18),0,0,0), cVar1 != '\0')) {
      cVar1 = FUN_004149f0();
      if (param_1 == '\0') {
        if (cVar1 == '\0') goto LAB_005e918c;
      }
      else if (cVar1 != '\0') {
LAB_005e918c:
        FUN_00446cb0(iVar5);
      }
    }
    piVar7 = (int *)piVar7[1];
  } while( true );
}



void FUN_005e91e0(char param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *in_ECX;
  int *unaff_EBP;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int unaff_retaddr;
  undefined4 *local_c;
  int *local_4;
  
  local_c = (undefined4 *)FUN_00401f00(8);
  if (local_c == (undefined4 *)0x0) {
    local_c = (undefined4 *)0x0;
  }
  else {
    *local_c = 0;
    local_c[1] = 0;
  }
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  iVar3 = 0;
  if ((iVar2 != 0) && (cVar1 = (**(code **)(*in_ECX + 400))(), cVar1 != '\0')) {
    iVar3 = iVar2;
  }
  for (piVar4 = (int *)(iVar3 + 0x58); (piVar4 != (int *)0x0 && (iVar3 = *piVar4, iVar3 != 0));
      piVar4 = (int *)piVar4[1]) {
    iVar2 = (**(code **)(*(int *)(iVar3 + 0x18) + 0x18))();
    if ((iVar2 != 4) &&
       ((iVar2 = (**(code **)(*(int *)(iVar3 + 0x18) + 0x18))(), iVar2 != 1 &&
        (cVar1 = (**(code **)(in_ECX[0x17] + 0x1c))((int *)(iVar3 + 0x18),0,0,0), cVar1 != '\0'))))
    {
      FUN_00446cb0(iVar3);
    }
  }
  cVar1 = FUN_004d7f80();
  if (((cVar1 != '\0') && (iVar3 = (**(code **)(*in_ECX + 0x170))(), iVar3 != 0)) &&
     (*(int *)(iVar3 + 0xe8) != 0)) {
    for (piVar4 = (int *)(*(int *)(iVar3 + 0xe8) + 0x30);
        (piVar4 != (int *)0x0 && (iVar3 = *piVar4, iVar3 != 0)); piVar4 = (int *)piVar4[1]) {
      iVar2 = (**(code **)(*(int *)(iVar3 + 0x18) + 0x18))();
      if (((iVar2 != 4) && (iVar2 = (**(code **)(*(int *)(iVar3 + 0x18) + 0x18))(), iVar2 != 1)) &&
         ((cVar1 = (**(code **)(in_ECX[0x17] + 0x1c))((int *)(iVar3 + 0x18),0,0,0), cVar1 != '\0' ||
          (param_3 == '\0')))) {
        FUN_00446cb0(iVar3);
      }
    }
  }
  for (piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x454))();
      (piVar4 != (int *)0x0 && ((piVar4[1] != 0 || (*piVar4 != 0)))); piVar4 = (int *)piVar4[1]) {
    iVar3 = *piVar4;
    if ((iVar3 != 0) &&
       ((cVar1 = (**(code **)(in_ECX[0x17] + 0x1c))(iVar3 + 0x18,0,0,0), cVar1 != '\0' ||
        (param_1 == '\0')))) {
      if (*unaff_EBP != 0) {
        piVar5 = (int *)FUN_00401f00(8);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          *piVar5 = *unaff_EBP;
          piVar5[1] = 0;
        }
        piVar5[1] = unaff_EBP[1];
        unaff_EBP[1] = (int)piVar5;
      }
      *unaff_EBP = iVar3;
    }
  }
  piVar5 = (int *)FUN_00401f00(8);
  piVar4 = unaff_EBP;
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = 0;
    piVar5[1] = 0;
  }
  for (; (piVar4 != (int *)0x0 && (iVar3 = *piVar4, iVar3 != 0)); piVar4 = (int *)piVar4[1]) {
    iVar2 = FUN_004152c0(3,0);
    uVar6 = -(uint)(iVar3 != 0) & iVar3 + 0x24U;
    switch(in_ECX) {
    case (int *)0x1a:
      goto switchD_005e9404_caseD_1a;
    case (int *)0x1b:
      bVar8 = *(int *)(iVar2 + 0x10) == 2;
      break;
    case (int *)0x1c:
      bVar8 = *(int *)(iVar2 + 0x10) == 1;
      break;
    case (int *)0x1d:
      if (*(int *)(iVar2 + 0x10) == 0) {
        if (unaff_retaddr == -1) goto switchD_005e9404_caseD_1a;
        if (uVar6 != 0) {
          while ((*(int *)(uVar6 + 8) != 0 || (*(int *)(uVar6 + 4) != 0))) {
            if (*(int *)(*(int *)(*(int *)(uVar6 + 4) + 0x1c) + 0x98) == unaff_retaddr) {
              FUN_00446cb0(iVar3);
            }
            if ((*(int *)(uVar6 + 8) == 0) || (uVar6 = *(int *)(uVar6 + 8) - 4, uVar6 == 0)) break;
          }
        }
      }
      goto switchD_005e9404_default;
    case (int *)0x1e:
      bVar8 = *(int *)(*(int *)(iVar2 + 0x1c) + 100) == 0;
      break;
    case (int *)0x1f:
      bVar8 = *(int *)(*(int *)(iVar2 + 0x1c) + 100) == 1;
      break;
    case (int *)0x20:
      bVar8 = *(int *)(*(int *)(iVar2 + 0x1c) + 100) == 2;
      break;
    case (int *)0x21:
      bVar8 = *(int *)(*(int *)(iVar2 + 0x1c) + 100) == 3;
      break;
    case (int *)0x22:
      bVar8 = *(int *)(*(int *)(iVar2 + 0x1c) + 100) == 4;
      break;
    case (int *)0x23:
      bVar8 = *(int *)(*(int *)(iVar2 + 0x1c) + 100) == 5;
      break;
    default:
      goto switchD_005e9404_default;
    }
    if (bVar8) {
switchD_005e9404_caseD_1a:
      FUN_00446cb0(iVar3);
    }
switchD_005e9404_default:
  }
  uVar6 = FUN_0047df80(0);
  if ((piVar5 != (int *)0x0) && (*piVar5 != 0)) {
    uVar7 = 0;
    piVar4 = piVar5;
    do {
      if (*piVar4 != 0) {
        uVar7 = uVar7 + 1;
      }
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
    iVar3 = 0;
    local_4 = piVar5;
    do {
      if (*local_4 == 0) break;
      iVar2 = *local_4 + 0x18;
      cVar1 = (**(code **)(local_c[0x17] + 0x1c))(iVar2,0,0,0);
      if ((cVar1 != '\0') || (param_1 == '\0')) {
        (**(code **)(*(int *)local_c[0x16] + 0x54))(iVar2);
        if ((int)(uVar6 % uVar7) <= iVar3) break;
        iVar3 = iVar3 + 1;
      }
      local_4 = (int *)local_4[1];
    } while (local_4 != (int *)0x0);
  }
  iVar3 = piVar5[1];
  while (iVar3 != 0) {
    iVar3 = *(int *)(piVar5[1] + 4);
    FUN_00401f20(piVar5[1]);
    piVar5[1] = iVar3;
  }
  *piVar5 = 0;
  iVar3 = unaff_EBP[1];
  while (iVar3 != 0) {
    iVar3 = *(int *)(unaff_EBP[1] + 4);
    FUN_00401f20(unaff_EBP[1]);
    unaff_EBP[1] = iVar3;
  }
  *unaff_EBP = 0;
  FUN_00401f20(unaff_EBP);
  FUN_00401f20(piVar5);
  return;
}



undefined4 FUN_005e9670(void)

{
  int iVar1;
  int in_ECX;
  
  if (in_ECX != -0x44) {
    iVar1 = FUN_00420fc0();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



void FUN_005e9690(void)

{
  int in_ECX;
  
  if (*(int **)(in_ECX + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x104))(0,0);
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x10c))(0);
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x108))(0);
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x110))(0);
  }
  return;
}



char * FUN_005e96e0(int param_1,char param_2,char param_3)

{
  undefined1 uVar1;
  char cVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    return (char *)0x0;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  if (*(int *)(DAT_00b33398 + 0x24) == 0) {
    if (param_2 == '\x01') {
      return "ITMGenericUp";
    }
    return "ITMGenericDown";
  }
  if (param_1 == DAT_00b35ec8) {
    if (param_2 == '\x01') {
      return "ITMLockpickUp";
    }
    return "ITMLockpickDown";
  }
  cVar2 = FUN_00469980(param_1);
  if (cVar2 != '\0') {
    if (param_2 == '\x01') {
      return "ITMGoldUp";
    }
    return "ITMGoldDown";
  }
  switch(uVar1) {
  case 0x13:
    pcVar3 = "ITMApparatusUp";
    if (param_2 != '\x01') {
      return "ITMApparatusDown";
    }
    break;
  case 0x14:
    cVar2 = FUN_004b4c70();
    if (cVar2 == '\0') {
      if (param_2 == '\x01') {
        return "ITMArmorLightUp";
      }
      return "ITMArmorLightDown";
    }
    cVar2 = FUN_004b4c70();
    if (cVar2 == '\x01') {
      if (param_2 == '\x01') {
        return "ITMArmorHeavyUp";
      }
      return "ITMArmorHeavyDown";
    }
  default:
switchD_005e975a_caseD_17:
    pcVar3 = "ITMGenericUp";
    if (param_2 != '\x01') {
      return "ITMGenericDown";
    }
    break;
  case 0x15:
    if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
      pcVar3 = "ITMBookUp";
      if (param_2 != '\x01') {
        return "ITMBookDown";
      }
    }
    else {
      pcVar3 = "ITMScrollUp";
      if (param_2 != '\x01') {
        return "ITMScrollDown";
      }
    }
    break;
  case 0x16:
    pcVar3 = "ITMClothingUp";
    if (param_2 != '\x01') {
      return "ITMClothingDown";
    }
    break;
  case 0x19:
    if (param_3 != '\0') {
      return "NPCHumanChew";
    }
    pcVar3 = "ITMIngredientUp";
    if (param_2 != '\x01') {
      return "ITMIngredientDown";
    }
    break;
  case 0x21:
    cVar2 = *(char *)(param_1 + 0x90);
    if ((cVar2 == '\0') || (cVar2 == '\x01')) {
      if (param_2 == '\x01') {
        return "ITMWeaponBladeUp";
      }
      return "ITMWeaponBladeDown";
    }
    if ((cVar2 == '\x02') || (cVar2 == '\x03')) {
      if (param_2 == '\x01') {
        return "ITMWeaponBluntUp";
      }
      return "ITMWeaponBluntDown";
    }
    if (cVar2 == '\x04') {
      if (param_2 == '\x01') {
        return "ITMWeaponStaffUp";
      }
      return "ITMWeaponStaffDown";
    }
    if (cVar2 == '\x05') {
      if (param_2 == '\x01') {
        return "ITMWeaponBowUp";
      }
      return "ITMWeaponBowDown";
    }
    goto switchD_005e975a_caseD_17;
  case 0x22:
    pcVar3 = "ITMAmmoUp";
    if (param_2 != '\x01') {
      pcVar3 = "ITMAmmoDown";
    }
    break;
  case 0x26:
    pcVar3 = "ITMSoulGemUp";
    if (param_2 != '\x01') {
      return "ITMSoulGemDown";
    }
    break;
  case 0x27:
    pcVar3 = "ITMKeyUp";
    if (param_2 != '\x01') {
      return "ITMKeyDown";
    }
    break;
  case 0x28:
    if (param_3 != '\0') {
      return "NPCHumanSwallow";
    }
    pcVar3 = "ITMPotionUp";
    if (param_2 != '\x01') {
      return "ITMPotionDown";
    }
  }
  return pcVar3;
}



void FUN_005e99c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if ((param_1 != 0) && (iVar2 = FUN_00578fe0(), iVar2 != 0x3ef)) {
    uVar3 = FUN_005e96e0(param_1,param_2,param_3);
    if (in_ECX == DAT_00b333c4) {
      iVar2 = FUN_006ade50(uVar3,0x121,0);
      if (iVar2 == 0) {
        return;
      }
      cVar1 = FUN_006b7260();
      if (cVar1 == '\0') {
        FUN_006b7190(0);
      }
    }
    else {
      iVar2 = FUN_0065a970(uVar3,0,0x102,1);
    }
    if (iVar2 != 0) {
      FUN_006b73e0();
      FUN_00401f20(iVar2);
    }
  }
  return;
}



undefined4 FUN_005e9a60(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float fStack_34;
  float fStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c2684;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar5 = (int *)(**(code **)(*in_ECX + 0x388))(uVar4);
  iVar6 = (**(code **)(*in_ECX + 0x170))();
  piVar7 = (int *)0x0;
  if (*(char *)(iVar6 + 4) == '$') {
    piVar7 = in_ECX;
  }
  if ((((piVar5 == (int *)0x0) || (piVar7 == (int *)0x0)) ||
      (iVar6 = (**(code **)(*piVar5 + 0x154))(), iVar6 == 0)) ||
     (iVar6 = (**(code **)(*piVar7 + 0x154))(), iVar6 == 0)) goto LAB_005e9d2a;
  FUN_00625290(&fStack_18);
  piVar7 = (int *)(**(code **)(*(int *)piVar5[0x16] + 0x18c))(&fStack_30);
  uStack_4 = 0;
  bVar1 = false;
  if (*piVar7 == 0) {
LAB_005e9b61:
    bVar2 = false;
  }
  else {
    (**(code **)(*(int *)piVar5[0x16] + 0x18c))(&fStack_34);
    uStack_4 = 1;
    bVar1 = true;
    cVar3 = FUN_008949c0(&fStack_18,piVar5 != DAT_00b333c4,0,0);
    bVar2 = true;
    if (cVar3 != '\0') goto LAB_005e9b61;
  }
  uStack_4 = 0;
  if (bVar1) {
    FUN_007016a0();
  }
  uStack_4 = 0xffffffff;
  FUN_007016a0();
  bVar1 = false;
  if (bVar2) goto LAB_005e9ba2;
  pfVar8 = (float *)(**(code **)(*in_ECX + 0x174))();
  fStack_30 = *pfVar8 - fStack_18;
  fStack_34 = pfVar8[1] - fStack_14;
  fStack_1c = pfVar8[2] - fStack_10;
  fStack_24 = fStack_30;
  fStack_20 = fStack_34;
  FUN_0043f350();
  fStack_30 = fStack_24 * 25.0 + fStack_18;
  fStack_34 = fStack_20 * 25.0 + fStack_14;
  fStack_1c = fStack_1c * 25.0 + fStack_10;
  fStack_24 = fStack_30;
  fStack_20 = fStack_34;
  fStack_18 = fStack_30;
  fStack_14 = fStack_34;
  fStack_10 = fStack_1c;
  piVar7 = (int *)(**(code **)(*(int *)piVar5[0x16] + 0x18c))(auStack_28);
  uStack_4 = 2;
  if (*piVar7 == 0) {
LAB_005e9ced:
    bVar2 = false;
  }
  else {
    (**(code **)(*(int *)piVar5[0x16] + 0x18c))(auStack_2c);
    bVar1 = true;
    uStack_4 = 3;
    cVar3 = FUN_008949c0(&fStack_18,piVar5 != DAT_00b333c4,0,0);
    bVar2 = true;
    if (cVar3 != '\0') goto LAB_005e9ced;
  }
  uStack_4 = 2;
  if (bVar1) {
    FUN_007016a0();
  }
  uStack_4 = 0xffffffff;
  FUN_007016a0();
  if (!bVar2) {
LAB_005e9d2a:
    *unaff_FS_OFFSET = local_c;
    return 1;
  }
LAB_005e9ba2:
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined1 FUN_005e9d40(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  bool bVar4;
  
  if (param_1[0x16] == 0) {
    return 0;
  }
  cVar1 = FUN_004d7f80();
  if (cVar1 == '\0') {
    cVar1 = FUN_004d7f80();
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = FUN_004de770(param_1,1);
    if (cVar1 != '\0') {
      return 1;
    }
    piVar3 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x3d0))();
    bVar4 = param_1 == piVar3;
  }
  else {
    cVar1 = FUN_004d7f80();
    if (cVar1 == '\0') {
      cVar1 = FUN_004de770(in_ECX,1);
      if (cVar1 != '\0') {
        return 1;
      }
      piVar3 = (int *)(**(code **)(*(int *)param_1[0x16] + 0x3d0))();
      bVar4 = in_ECX == piVar3;
    }
    else {
      iVar2 = (**(code **)(*in_ECX + 0x170))();
      if (iVar2 != 0) {
        (**(code **)(*in_ECX + 400))();
      }
      cVar1 = FUN_00467560();
      if (cVar1 != '\0') {
        iVar2 = (**(code **)(*param_1 + 0x170))();
        if (iVar2 != 0) {
          (**(code **)(*param_1 + 400))();
        }
        cVar1 = FUN_00467560();
        if (cVar1 != '\0') {
          return 1;
        }
        return 0;
      }
      iVar2 = (**(code **)(*param_1 + 0x170))();
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 400))();
      }
      cVar1 = FUN_00467560();
      bVar4 = cVar1 == '\0';
    }
  }
  if (bVar4) {
    return 1;
  }
  return 0;
}



void FUN_005e9e70(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  
  if (DAT_00b14e98 != '\0') {
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    iVar3 = 0;
    if ((iVar2 != 0) && (cVar1 = (**(code **)(*in_ECX + 400))(), cVar1 != '\0')) {
      iVar3 = iVar2;
    }
    if ((*(uint *)(iVar3 + 0x28) >> 1 & 1) != 0) {
      return;
    }
  }
  if ((char)in_ECX[0x3f] != '\0') goto LAB_005ea03e;
  *(undefined1 *)(in_ECX + 0x3f) = 1;
  if ((((char)in_ECX[0x20] != '\0') && (in_ECX[0x1f] != 0)) &&
     (cVar1 = FUN_004d7f80(), cVar1 != '\0')) {
    iVar3 = FUN_004db6b0();
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    piVar4 = in_ECX;
    if (*(char *)(iVar2 + 4) == '$') {
      if (iVar3 != 0) goto LAB_005e9f1f;
    }
    else {
      if (iVar3 == 0) {
        (**(code **)(*in_ECX + 0x244))(in_ECX[0x1f]);
        goto LAB_005e9f76;
      }
LAB_005e9f1f:
      if (*(char *)(iVar3 + 4) == '#') {
        piVar4 = (int *)FUN_00675220(iVar3);
      }
      else if (*(char *)(iVar3 + 4) == '\x06') {
        piVar4 = (int *)FUN_00675290(iVar3);
      }
    }
    FUN_004fbf90(in_ECX[0x1f],in_ECX + 0x11,0x20);
    if ((piVar4 != (int *)0x0) && ((int *)in_ECX[0x1f] != (int *)0x0)) {
      (**(code **)(*(int *)in_ECX[0x1f] + 0x248))();
    }
    *(undefined1 *)(in_ECX + 0x20) = 0;
  }
LAB_005e9f76:
  if (in_ECX[0x1f] == DAT_00b333c4) {
    iVar3 = (**(code **)(*in_ECX + 0x128))();
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    if (iVar3 == 0) {
      if ((iVar2 != 0) && (cVar1 = (**(code **)(*in_ECX + 400))(), cVar1 != '\0')) {
        iVar3 = iVar2;
      }
      if (iVar3 == 0) goto LAB_005e9ffd;
    }
    if ((*(int *)(iVar3 + 0x40) == 0) && (*(int *)(iVar3 + 0x3c) == 0)) {
      iVar2 = (**(code **)(*in_ECX + 0x170))();
      iVar3 = 0;
      if ((iVar2 != 0) && (cVar1 = (**(code **)(*in_ECX + 400))(), cVar1 != '\0')) {
        iVar3 = iVar2;
      }
    }
    if (iVar3 != 0) {
      FUN_00467f80(0);
    }
  }
LAB_005e9ffd:
  FUN_004fbf90(in_ECX[0x1f],in_ECX + 0x11,0x10);
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x364))(0x7f7fffff);
    (**(code **)(*(int *)in_ECX[0x16] + 0x370))();
  }
LAB_005ea03e:
  FUN_005e6680(2);
  return;
}



bool FUN_005ea050(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined4 unaff_EBX;
  int *piVar6;
  undefined4 unaff_ESI;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uStack_8;
  int iStack_4;
  
  cVar1 = (**(code **)(*param_1 + 0x334))(1);
  (**(code **)(*in_ECX + 0x224))(param_1);
  if (((cVar1 != '\0') && (iVar2 = (**(code **)(*param_1 + 0x330))(), iVar2 != 0)) &&
     (iStack_4 = 0, DAT_00b333b8 == '\0')) {
    piVar6 = &iStack_4;
    piVar3 = in_ECX;
    (**(code **)(*param_1 + 0x330))();
    unaff_EBX = FUN_006144d0(piVar3,piVar6);
    if (iStack_4 != 0) {
      piVar3 = (int *)FUN_0067cf50(0xc,iStack_4);
      piVar6 = piVar3;
      if (piVar3 != (int *)0x0) {
        do {
          if ((*piVar6 == 0) ||
             ((iVar2 = FUN_0067b6b0(iStack_4,0), iVar2 != 0 && (*(char *)(iVar2 + 4) != '\0'))))
          break;
          piVar6 = (int *)piVar6[1];
        } while (piVar6 != (int *)0x0);
        FUN_004526e0();
      }
      FUN_00401f20(piVar3);
    }
  }
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  iStack_4 = CONCAT31(iStack_4._1_3_,*(char *)(iVar2 + 4) == '$');
  uVar4 = (**(code **)(*in_ECX + 0x284))(0x24);
  uVar5 = unaff_EBX;
  uVar8 = unaff_ESI;
  fVar7 = (float10)FUN_004d7e90(param_1,0);
  uVar5 = (**(code **)(*in_ECX + 0x284))(0x21,(float)fVar7,uVar5,uStack_8,uVar8,uVar4);
  iVar2 = FUN_00546190(unaff_EBX,unaff_ESI,uVar5);
  return 0 < iVar2;
}



void FUN_005ea1a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  uint uVar7;
  
  if (*(int *)(in_ECX + 0x58) == 0) {
    return;
  }
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 == 0) {
    return;
  }
  iVar3 = FUN_006f94a0(param_1,"SkinAttachment");
  if (iVar3 == 0) {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    uVar7 = 0;
    if (uVar4 != 0) {
      do {
        if (iVar3 != 0) goto LAB_005ea248;
        if ((((uVar7 < uVar4) &&
             (piVar1 = *(int **)(*(int *)(iVar2 + 0xb0) + uVar7 * 4), piVar1 != (int *)0x0)) &&
            ((char *)piVar1[2] != (char *)0x0)) &&
           (iVar5 = __strnicmp((char *)piVar1[2],(char *)&PTR_LAB_00a6e684,3), iVar5 != 0)) {
          iVar3 = (**(code **)(*piVar1 + 8))();
        }
        uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4);
      if (iVar3 != 0) goto LAB_005ea248;
    }
    iVar3 = iVar2;
  }
LAB_005ea248:
  iVar2 = **(int **)(in_ECX + 0x58);
  uVar6 = FUN_00480630(iVar3);
  (**(code **)(iVar2 + 0x3a8))(uVar6);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005ea270(undefined4 param_1)

{
  float fVar1;
  float *in_ECX;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_30;
  fVar1 = in_ECX[0x11];
  local_30 = (1.0 - fVar1) * *in_ECX + in_ECX[4] * fVar1;
  fStack_2c = (1.0 - fVar1) * in_ECX[1] + in_ECX[5] * fVar1;
  fStack_28 = (1.0 - fVar1) * in_ECX[2] + in_ECX[6] * fVar1;
  fStack_24 = (1.0 - fVar1) * in_ECX[3] + in_ECX[7] * fVar1;
  FUN_0043f3e0(param_1,&local_30);
  return;
}



void FUN_005ea2f0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 500) = *(uint *)(in_ECX + 500) | 0x40000;
    return;
  }
  *(uint *)(in_ECX + 500) = *(uint *)(in_ECX + 500) & 0xfffbffff;
  return;
}



void FUN_005ea320(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 500) = *(uint *)(in_ECX + 500) | 0x100000;
    return;
  }
  *(uint *)(in_ECX + 500) = *(uint *)(in_ECX + 500) & 0xffefffff;
  return;
}



void FUN_005ea350(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x364) != 0) {
    FUN_0089f4d0(param_1);
  }
  if (*(int *)(in_ECX + 0x368) != 0) {
    FUN_0089f4d0(param_1);
  }
  return;
}



void FUN_005ea380(void)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  uint **ppuVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  undefined4 uVar9;
  undefined1 *puVar10;
  int iStack_2c;
  undefined1 auStack_1c [8];
  uint *apuStack_14 [2];
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c26b3;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = (**(code **)(*in_ECX + 0x128))(uVar3);
  iVar5 = (**(code **)(*in_ECX + 0x170))();
  if (((iVar4 == 0) && (iVar5 != 0)) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
    iVar4 = iVar5;
  }
  if (*(int *)(iVar4 + 0x38) == 0) {
    iVar5 = (**(code **)(*in_ECX + 0x170))();
    iVar4 = 0;
    if ((iVar5 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
      iVar4 = iVar5;
    }
    if (*(int *)(iVar4 + 0x38) == 0) goto LAB_005ea5ad;
  }
  FUN_00469690();
  iStack_4 = 0;
  iVar4 = (**(code **)(*in_ECX + 0x170))();
  if (iVar4 != 0) {
    (**(code **)(*in_ECX + 400))();
  }
  puVar10 = auStack_1c;
  uVar9 = 1;
  uVar6 = FUN_004677f0(1,puVar10);
  FUN_0046cde0(uVar6,uVar9,puVar10);
  ppuVar7 = apuStack_14;
  do {
    puVar1 = *ppuVar7;
    if (puVar1 == (uint *)0x0) break;
    if (((puVar1[1] != 0) && (cVar2 = (**(code **)(*(int *)puVar1[1] + 0xa4))(), cVar2 != '\0')) &&
       (uVar3 = (*ppuVar7)[1], uVar3 != 0)) {
      iVar4 = FUN_009832e6(apuStack_14[0][1],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0331c,0);
      if (iVar4 == 0) {
        iStack_2c = 0;
      }
      else {
        iStack_2c = *(int *)(iVar4 + 4);
      }
      if (iStack_2c == 0) {
        (**(code **)(*in_ECX + 0x114))(uVar3,0,*apuStack_14[0]);
      }
      else {
        uVar8 = 0;
        iVar4 = 0;
        if (*apuStack_14[0] != 0) {
          do {
            iVar4 = FUN_00401f00(0x14);
            iStack_4._0_1_ = 1;
            if (iVar4 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = FUN_00422ee0();
            }
            iStack_4 = (uint)iStack_4._1_3_ << 8;
            FUN_004238a0(1);
            if ((iVar4 != 0) && (iVar5 = FUN_0041e900(), iVar5 == 0)) {
              FUN_0041f090(iStack_2c);
              FUN_0041e900();
              uVar6 = FUN_004fbdc0();
              FUN_0041f130(uVar6);
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *apuStack_14[0]);
        }
        (**(code **)(*in_ECX + 0x114))(uVar3,iVar4,1);
      }
    }
    ppuVar7 = (uint **)ppuVar7[1];
  } while (ppuVar7 != (uint **)0x0);
  iStack_4 = 0xffffffff;
  FUN_0046a010();
LAB_005ea5ad:
  iVar4 = FUN_0041e6f0();
  if (iVar4 != 0) {
    FUN_0048e060();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_005ea5e0(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  iVar3 = 0;
  if (iVar2 != 0) {
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      iVar3 = iVar2;
    }
  }
  cVar1 = (**(code **)(*(int *)(iVar3 + 0x24) + 0x24))();
  if (cVar1 == '\0') {
    cVar1 = FUN_0041df00();
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



undefined1 FUN_005ea640(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *in_ECX;
  undefined1 uVar4;
  
  uVar4 = 0;
  iVar3 = (**(code **)(*in_ECX + 0x170))();
  if (*(char *)(iVar3 + 4) != '#') {
    cVar1 = FUN_005e1e90();
    if (cVar1 != '\0') {
      uVar4 = 1;
    }
  }
  iVar3 = (**(code **)(*in_ECX + 0x284))(0x37);
  uVar2 = 1;
  if (iVar3 == 0) {
    uVar2 = uVar4;
  }
  return uVar2;
}



undefined4 FUN_005ea680(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x170))();
  if (*(char *)(iVar2 + 4) != '#') {
    cVar1 = FUN_005e1e90();
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}



undefined1 * FUN_005ea6b0(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int *in_ECX;
  
  cVar2 = FUN_004d7f80();
  if ((((cVar2 != '\0') && (iVar3 = (**(code **)(*in_ECX + 0x170))(), iVar3 != 0)) &&
      (iVar3 = *(int *)(iVar3 + 0x104), iVar3 != 0)) && (iVar3 != -0x18)) {
    if (*(ushort *)(iVar3 + 0x20) == 0xffff) {
      pcVar4 = *(char **)(iVar3 + 0x1c);
      pcVar1 = pcVar4 + 1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar5 = (int)pcVar4 - (int)pcVar1;
    }
    else {
      uVar5 = (uint)*(ushort *)(iVar3 + 0x20);
    }
    if (uVar5 != 0) {
      if (*(undefined1 **)(iVar3 + 0x1c) != (undefined1 *)0x0) {
        return *(undefined1 **)(iVar3 + 0x1c);
      }
      return &DAT_00a2f7ec;
    }
  }
  return (undefined1 *)0x0;
}



undefined1 * FUN_005ea720(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int *in_ECX;
  
  cVar2 = FUN_004d7f80();
  if ((((cVar2 != '\0') && (iVar3 = (**(code **)(*in_ECX + 0x170))(), iVar3 != 0)) &&
      (iVar3 = *(int *)(iVar3 + 0xe8), iVar3 != 0)) && (iVar3 != -0x18)) {
    if (*(ushort *)(iVar3 + 0x20) == 0xffff) {
      pcVar4 = *(char **)(iVar3 + 0x1c);
      pcVar1 = pcVar4 + 1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar5 = (int)pcVar4 - (int)pcVar1;
    }
    else {
      uVar5 = (uint)*(ushort *)(iVar3 + 0x20);
    }
    if (uVar5 != 0) {
      if (*(undefined1 **)(iVar3 + 0x1c) != (undefined1 *)0x0) {
        return *(undefined1 **)(iVar3 + 0x1c);
      }
      return &DAT_00a2f7ec;
    }
  }
  return (undefined1 *)0x0;
}



void FUN_005ea790(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  
  in_ECX[0x3a] = in_ECX[0xb];
  in_ECX[0x3b] = in_ECX[0xc];
  in_ECX[0x3c] = in_ECX[0xd];
  fVar3 = (float10)(**(code **)(*in_ECX + 0x1e0))();
  in_ECX[0x3d] = (int)(float)fVar3;
  iVar2 = FUN_006ecc80();
  if (iVar2 != 0) {
    FUN_006ecc80();
    cVar1 = FUN_004c97f0();
    if (cVar1 != '\0') {
      iVar2 = FUN_006ecc80();
      in_ECX[0x3e] = iVar2;
      return;
    }
  }
  iVar2 = FUN_004d6670();
  in_ECX[0x3e] = iVar2;
  return;
}



int FUN_005ea800(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *in_ECX;
  int *piVar9;
  undefined4 uVar10;
  undefined4 unaff_retaddr;
  int local_14;
  int *piStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_1;
  piVar9 = (int *)0x0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    piVar9 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x3d0))();
  }
  piVar4 = (int *)FUN_004db6b0();
  piStack_10 = piVar4;
  iVar5 = (**(code **)(*in_ECX + 0x170))();
  if (((*(char *)(iVar5 + 4) == '#') || ((piVar4 == (int *)0x0 && (piVar9 == (int *)0x0)))) &&
     (in_ECX[0x2c] != 4)) {
LAB_005eaa94:
    if (((piVar4 != (int *)0x0) && ((char)piVar4[1] == '#')) &&
       (piVar9 = (int *)(**(code **)(*piVar1 + 0x170))(), piVar4 == piVar9)) {
      return 100;
    }
LAB_005eaabd:
    iVar5 = (**(code **)(*piVar1 + 0x128))();
    iVar6 = (**(code **)(*piVar1 + 0x170))();
    if (((iVar5 == 0) && (iVar6 != 0)) && (cVar2 = (**(code **)(*piVar1 + 400))(), cVar2 != '\0')) {
      iVar5 = iVar6;
    }
    if (((iVar5 != 0) && (*(int *)(iVar5 + 0x40) == 0)) && (*(int *)(iVar5 + 0x3c) == 0)) {
      param_1 = (int *)iVar5;
      iVar6 = (**(code **)(*piVar1 + 0x170))();
      iVar5 = 0;
      if ((iVar6 != 0) && (cVar2 = (**(code **)(*piVar1 + 400))(), cVar2 != '\0')) {
        iVar5 = iVar6;
      }
    }
    param_1 = (int *)iVar5;
    iVar5 = (**(code **)(*in_ECX + 0x128))();
    iVar6 = (**(code **)(*in_ECX + 0x170))();
    if (iVar5 == 0) {
      if ((iVar6 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
        iVar5 = iVar6;
      }
      if (iVar5 != 0) goto LAB_005eab6b;
    }
    else {
LAB_005eab6b:
      if ((*(int *)(iVar5 + 0x40) == 0) && (*(int *)(iVar5 + 0x3c) == 0)) {
        iVar6 = (**(code **)(*in_ECX + 0x170))();
        iVar5 = 0;
        if ((iVar6 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
          iVar5 = iVar6;
        }
      }
    }
    iVar6 = (int)param_1;
    if (param_1 == (int *)0x0) {
      return 0;
    }
    if (iVar5 == 0) {
      return 0;
    }
    uStack_c = 0;
    iVar5 = FUN_005e32f0();
    if ((iVar5 != 0) && (iVar5 = FUN_005e32f0(), iVar5 != 0)) {
      uVar10 = FUN_005e32f0();
      FUN_005e32f0(uVar10);
      uStack_c = FUN_0046e8d0(uVar10);
    }
    param_1 = (int *)0xffffffff;
    uVar8 = FUN_00467920(iVar6,&param_1);
    uVar3 = FUN_005e0da0();
    piStack_10 = (int *)(**(code **)(*piVar1 + 0x208))();
    uVar10 = (**(code **)(*piVar1 + 0x204))();
    (**(code **)(*in_ECX + 0x378))(piVar1);
    uStack_c = FUN_009828c0();
    iVar5 = (**(code **)(*in_ECX + 0x170))();
    uStack_8 = CONCAT31(uStack_8._1_3_,*(char *)(iVar5 + 4) == '$');
    (**(code **)(*piVar1 + 0x250))(piStack_10,uVar8,unaff_retaddr,uVar3,0,uStack_c,uStack_8);
    uVar8 = FUN_009828c0();
    piVar4 = piStack_10;
  }
  else {
    param_1 = (int *)0x0;
    if ((((piVar4 != (int *)0x0) && ((char)piVar4[1] == '#')) ||
        ((piVar9 != (int *)0x0 &&
         ((iVar5 = (**(code **)(*piVar9 + 0x170))(), *(char *)(iVar5 + 4) == '#' &&
          (param_1 = (int *)(**(code **)(*piVar9 + 0x170))(), piVar4 = param_1,
          param_1 != (int *)0x0)))))) &&
       (param_1 = piVar4, piVar9 = (int *)(**(code **)(*piVar1 + 0x170))(), param_1 == piVar9)) {
      return 100;
    }
    iVar5 = (**(code **)(*piVar1 + 0x128))();
    iVar6 = (**(code **)(*piVar1 + 0x170))();
    if (iVar5 == 0) {
      if ((iVar6 != 0) && (cVar2 = (**(code **)(*piVar1 + 400))(), cVar2 != '\0')) {
        iVar5 = iVar6;
      }
      if (iVar5 != 0) goto LAB_005ea8fb;
    }
    else {
LAB_005ea8fb:
      if ((*(int *)(iVar5 + 0x40) == 0) && (*(int *)(iVar5 + 0x3c) == 0)) {
        iVar6 = (**(code **)(*piVar1 + 0x170))();
        iVar5 = 0;
        if ((iVar6 != 0) && (cVar2 = (**(code **)(*piVar1 + 400))(), cVar2 != '\0')) {
          iVar5 = iVar6;
        }
      }
    }
    piVar4 = piStack_10;
    if (param_1 == (int *)0x0) {
      if (piStack_10 != (int *)0x0) {
        if ((char)piStack_10[1] == '\x06') {
          local_14 = FUN_00467880(piStack_10,iVar5);
          goto LAB_005eacc6;
        }
        goto LAB_005eaa94;
      }
      goto LAB_005eaabd;
    }
    if (iVar5 == 0) goto LAB_005eaa94;
    uStack_c = 0;
    cVar2 = FUN_004d7f80();
    if (cVar2 != '\0') {
      uStack_c = FUN_0046e8d0(*(undefined4 *)(iVar5 + 0xe8));
    }
    piStack_10 = (int *)0xffffffff;
    uStack_8 = FUN_00467920(iVar5,&piStack_10);
    local_14 = 0;
    cVar2 = FUN_005e0da0();
    if ((cVar2 != '\0') &&
       ((cVar2 = (**(code **)(*piVar1 + 0x334))(1), cVar2 == '\0' ||
        ((iVar5 = (**(code **)(*in_ECX + 0x330))(), iVar5 != 0 &&
         (cVar2 = FUN_00613670(in_ECX), cVar2 != '\0')))))) {
      local_14 = 1;
    }
    piVar4 = (int *)(**(code **)(*piVar1 + 0x208))();
    uStack_4 = (**(code **)(*piVar1 + 0x204))();
    uVar10 = 0;
    piVar7 = (int *)(**(code **)(*DAT_00b333c4 + 0x170))();
    piVar9 = DAT_00b333c4;
    if (param_1 != piVar7) {
      piVar9 = (int *)FUN_00675220(param_1);
    }
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0x378))(piVar1);
      uVar10 = FUN_009828c0();
    }
    uVar8 = FUN_005e3270();
    (**(code **)(*piVar1 + 0x250))(uStack_c,uStack_8,piStack_10,local_14,0,uVar10,uVar8);
    uVar8 = FUN_009828c0();
    uVar10 = uStack_4;
  }
  uVar10 = (**(code **)(*in_ECX + 0x284))(0x24,uVar10,piVar4,uVar8);
  uVar10 = (**(code **)(*piVar1 + 0x284))(6,uVar10);
  uVar10 = (**(code **)(*in_ECX + 0x284))(6,uVar10);
  local_14 = FUN_00546260(uVar10);
LAB_005eacc6:
  if (local_14 < 0x65) {
    if (local_14 < 0) {
      local_14 = 0;
    }
    return local_14;
  }
  return 100;
}



/* WARNING: Type propagation algorithm not settling */

float10 FUN_005ead00(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  float unaff_EBP;
  int *piVar4;
  float10 fVar5;
  float local_8 [2];
  
  local_8[0] = 1.0;
  local_8[1] = 0.0;
  if ((param_1 - 8U < 4) && (in_ECX == DAT_00b333c4)) {
    FUN_005e2210(param_1,local_8 + 1,local_8);
    if (local_8[0] == 0.0) {
      local_8[0] = 1.0;
    }
  }
  else if (param_1 - 0x25U < 3) {
    if (param_1 == 0x25) {
      fVar5 = (float10)FUN_0041fc90();
      return fVar5;
    }
    if (param_1 == 0x26) {
      iVar3 = (**(code **)(*in_ECX + 0x204))();
      return (float10)iVar3;
    }
    if (param_1 == 0x27) {
      iVar3 = (**(code **)(*in_ECX + 0x208))();
      return (float10)iVar3;
    }
  }
  piVar2 = (int *)(**(code **)(*in_ECX + 0x170))();
  piVar4 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*in_ECX + 400))();
    if (cVar1 != '\0') {
      piVar4 = piVar2;
    }
  }
  iVar3 = (**(code **)(*piVar4 + 0x128))(param_1);
  return (float10)(((float)iVar3 + local_8[0]) * unaff_EBP);
}



int FUN_005eae10(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  if (in_ECX[0x16] == 0) {
    return 0;
  }
  cVar1 = (**(code **)(*in_ECX + 0x334))(1);
  if ((cVar1 != '\0') &&
     (((cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x244))(), cVar1 == '\0' ||
       (cVar1 = FUN_005e6cd0(0), cVar1 != '\0')) &&
      (iVar2 = (**(code **)(*in_ECX + 0x338))(), iVar2 != 0)))) {
    return iVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x005eae63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0xcc))();
  return iVar2;
}



void FUN_005eae70(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *in_ECX;
  int unaff_EBX;
  int *piVar7;
  int *unaff_EBP;
  undefined4 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  
  if (in_ECX[0x16] != 0) {
    (**(code **)(*in_ECX + 0x30c))();
    piVar7 = (int *)((int *)in_ECX[0x16])[2];
    iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x174))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x174))();
      if (*(char *)(iVar2 + 0x20) == '\x16') {
        iVar2 = (**(code **)(*in_ECX + 0x18c))();
        if (iVar2 == 0) {
          iVar2 = (**(code **)(*in_ECX + 0x380))();
          if (iVar2 != 0) {
            piVar3 = (int *)(**(code **)(*in_ECX + 0x380))();
            (**(code **)(*piVar3 + 0x38c))(0);
          }
          (**(code **)(*in_ECX + 900))(0);
        }
      }
    }
    (**(code **)(*(int *)in_ECX[0x16] + 0x178))(0);
    if (piVar7 != (int *)0x0) {
      cVar1 = FUN_00567770();
      if (cVar1 != '\0') {
        (**(code **)(*in_ECX + 0x44))(0x30000);
        iVar2 = FUN_0041fb20();
        if (iVar2 == 0) {
          *(undefined4 *)(in_ECX[0x16] + 8) = 0;
          *(undefined4 *)(in_ECX[0x16] + 4) = 0;
          (**(code **)(*in_ECX + 0x17c))(0);
          (**(code **)(*(int *)in_ECX[0x16] + 0x394))(0);
          (**(code **)(*(int *)in_ECX[0x16] + 0xd0))(0);
          if (*(char *)(DAT_00b33a98 + 0xcd4) == '\0') {
            (**(code **)(*(int *)in_ECX[0x16] + 0x18))();
          }
        }
        else {
          uVar4 = FUN_0041fb20();
          *(undefined4 *)(in_ECX[0x16] + 8) = uVar4;
          FUN_005e8de0(*(undefined4 *)(in_ECX[0x16] + 8));
          uVar4 = FUN_0041fb40();
          *(undefined4 *)(in_ECX[0x16] + 4) = uVar4;
          iVar2 = *(int *)in_ECX[0x16];
          uVar4 = FUN_0041fb60();
          (**(code **)(iVar2 + 0xd0))(uVar4);
          if ((*(char *)(unaff_EBX + 0x20) == '\x11') && (*(char *)(DAT_00b33a98 + 0xcd4) == '\0'))
          {
            FUN_004246f0();
            *(undefined4 *)(unaff_EBX + 0x54) = 0;
            pcVar10 = FUN_00645a30;
            uVar9 = 0x461c4000;
            piVar7 = in_ECX;
            uVar4 = (**(code **)(*in_ECX + 0x174))(0x461c4000,FUN_00645a30);
            uVar8 = 0x461c4000;
            uVar5 = (**(code **)(*in_ECX + 0x174))(0x461c4000,uVar4);
            uVar6 = FUN_006ecc80(uVar5);
            FUN_00446b90(uVar6,uVar5,uVar8,uVar4,uVar9,pcVar10,piVar7);
          }
          iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0xe0))();
          if (iVar2 != 0) {
            iVar2 = *(int *)in_ECX[0x16];
            uVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0xe0))();
            (**(code **)(iVar2 + 0xdc))(uVar4);
            (**(code **)(*(int *)in_ECX[0x16] + 0xe4))(0);
          }
          iVar2 = *in_ECX;
          uVar4 = FUN_0041fb80();
          (**(code **)(iVar2 + 0x17c))(uVar4);
          iVar2 = *(int *)in_ECX[0x16];
          uVar4 = FUN_0041fba0();
          (**(code **)(iVar2 + 0x394))(uVar4);
          FUN_004246d0();
          piVar7 = unaff_EBP;
        }
        cVar1 = FUN_005660a0();
        if (cVar1 != '\0') {
          cVar1 = FUN_0045a500();
          if (cVar1 == '\0') {
            (**(code **)(*piVar7 + 0x10))(1);
          }
          else {
            FUN_0045c7a0(piVar7);
          }
        }
      }
    }
    if (in_ECX[0x16] != 0) {
      (**(code **)(*(int *)in_ECX[0x16] + 0x194))();
    }
    if (*(char *)(DAT_00b33a98 + 0xcd4) == '\0') {
      iVar2 = (**(code **)(*in_ECX + 0x380))();
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))();
        if (iVar2 == 9) {
                    /* WARNING: Could not recover jumptable at 0x005eb140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*in_ECX + 800))();
          return;
        }
      }
    }
  }
  return;
}



undefined1 FUN_005eb150(float *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  iVar2 = FUN_006ecc80();
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(char *)(iVar2 + 0x26) != '\x06') && (*(char *)(iVar2 + 0x26) != '\x05')) {
    return 0;
  }
  iVar2 = FUN_00983ffd((double)*param_1);
  if (((((iVar2 != 0) && (iVar2 = FUN_00983ffd((double)param_1[1]), iVar2 != 0)) &&
       (iVar2 = FUN_00983ffd((double)param_1[2]), iVar2 != 0)) &&
      ((iVar2 = __isnan((double)*param_1), iVar2 == 0 &&
       (iVar2 = __isnan((double)param_1[1]), iVar2 == 0)))) &&
     (iVar2 = __isnan((double)param_1[2]), iVar2 == 0)) {
    FUN_006ecc80();
    cVar1 = FUN_004c97f0();
    if (cVar1 == '\0') {
      local_60 = 0.0;
      cVar1 = FUN_00440590(param_1,&local_60);
      if ((cVar1 != '\0') && (local_60 = local_60 - 10.0, param_1[2] < local_60)) {
        return 1;
      }
    }
    else {
      iVar2 = FUN_00441800(0,2);
      if (iVar2 != 0) {
        local_5c = *(float *)(iVar2 + 0x20);
        local_58 = *(float *)(iVar2 + 0x24);
        local_54 = *(float *)(iVar2 + 0x28);
        local_44 = *(float *)(iVar2 + 0x2c);
        local_50 = local_5c;
        local_4c = local_58;
        local_48 = local_54;
        cVar1 = FUN_008aa390();
        if (cVar1 != '\0') {
          local_5c = local_50 - *param_1;
          local_58 = local_4c - param_1[1];
          local_54 = local_48 - param_1[2];
          fVar3 = (float10)FUN_00404c90();
          if ((float10)local_44 < fVar3) {
            return 1;
          }
        }
      }
    }
    if (param_2 == '\0') {
      return 0;
    }
    if ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xb & 1) != 0) {
      return 0;
    }
    iVar2 = FUN_0065a2c0();
    if (iVar2 == 0) {
      return 0;
    }
    if ((*(uint *)(iVar2 + 500) >> 0xb & 1) != 0) {
      return 0;
    }
    cVar1 = FUN_008949c0(param_1,0,0,1);
    if ((cVar1 != '\0') && (cVar1 = FUN_00895f00(), cVar1 == '\0')) {
      return 0;
    }
  }
  return 1;
}



void FUN_005eb370(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 uVar5;
  undefined1 auStack_c [12];
  
  cVar1 = FUN_005e3350();
  if (cVar1 != '\0') {
    uVar5 = 1;
    uVar2 = (**(code **)(*in_ECX + 0x174))(1);
    cVar1 = FUN_005eb150(uVar2,uVar5);
    if (cVar1 != '\0') {
      iVar3 = FUN_006ecc80();
      if (iVar3 != 0) {
        puVar4 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
        FUN_005e2e20(auStack_c,*puVar4,puVar4[1],puVar4[2],iVar3,0,0,0);
        (**(code **)(*in_ECX + 0x1cc))(auStack_c);
      }
    }
  }
  return;
}



undefined4 FUN_005eb400(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *in_ECX;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_c [12];
  
  cVar1 = FUN_005e3350();
  if ((cVar1 == '\0') || (cVar1 = FUN_005e1e90(), cVar1 != '\0')) {
    return 0;
  }
  if ((in_ECX[0x16] != 0) &&
     ((iVar4 = *(int *)(in_ECX[0x16] + 8), iVar4 != 0 &&
      (cVar1 = FUN_00566dc0(in_ECX,0,0xbf800000), cVar1 != '\0')))) {
    if ((*(char *)(iVar4 + 0x20) == '\x06') && (iVar2 = FUN_00566d00(in_ECX), iVar2 != 0)) {
      piVar3 = (int *)FUN_00566d00(in_ECX);
      iVar2 = (**(code **)(*piVar3 + 0x170))();
      if (iVar2 == DAT_00b35eb0) {
        return 0;
      }
    }
    if (((*(int *)(iVar4 + 0x24) != 0) && (iVar4 = FUN_00569740(), iVar4 == 3)) &&
       (iVar4 = FUN_00566db0(), iVar4 == 0)) {
      return 0;
    }
  }
  puVar5 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
  uVar9 = *puVar5;
  uVar7 = puVar5[1];
  uVar8 = puVar5[2];
  iVar4 = FUN_006ecc80();
  if (iVar4 != 0) {
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar6 = FUN_006ecc80(0,0,0);
    puVar5 = (undefined4 *)FUN_005e2e20(auStack_c,uVar9,uVar7,uVar8,uVar6,uVar10,uVar11,uVar12);
    uVar9 = *puVar5;
    uVar7 = puVar5[1];
    uVar8 = puVar5[2];
  }
  FUN_004d8a30(uVar9,uVar7,uVar8);
  return 1;
}



undefined4 FUN_005eb520(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  int *piVar7;
  int *unaff_FS_OFFSET;
  bool bVar8;
  float10 fVar9;
  float *pfVar10;
  float fVar11;
  undefined4 uStack_24;
  float afStack_20 [5];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c26db;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((int *)in_ECX[0x16] != (int *)0x0) &&
     (iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 8))(uVar3), iVar4 == 3)) goto LAB_005ebb1a;
  if (((int *)in_ECX[0x16] != (int *)0x0) &&
     ((iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), iVar4 == 0 &&
      (iVar4 = FUN_007b7650(), iVar4 != 0)))) {
    FUN_007ad1e0(in_ECX[3]);
  }
  if (((((int *)in_ECX[0x16] != (int *)0x0) &&
       (iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))(), iVar4 != 0)) &&
      (*(char *)(iVar4 + 0x20) == '\x12')) &&
     (cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x1cc))(), cVar1 != '\0')) {
    FUN_005eae70();
  }
  FUN_00674850(in_ECX);
  if (in_ECX[0x2c] == 6) {
    FUN_005e6680(0);
    (**(code **)(*(int *)in_ECX[0x16] + 0xa0))(0);
  }
  piVar7 = (int *)in_ECX[0x16];
  if (((piVar7 != (int *)0x0) && (piVar7[2] != 0)) &&
     ((*(char *)(piVar7[2] + 0x20) == '\x12' &&
      (iVar4 = (**(code **)(*piVar7 + 0xcc))(), iVar4 != DAT_00b333c4)))) {
    FUN_005eae70();
  }
  if (((*(int *)(in_ECX[0x16] + 8) != 0) && (*(char *)(*(int *)(in_ECX[0x16] + 8) + 0x20) == '\x0f')
      ) && (cVar1 = FUN_005e6c60(), cVar1 == '\0')) {
    iVar4 = FUN_006ecc80();
    if (iVar4 != 0) {
      FUN_006ecc80();
      cVar1 = FUN_004c97f0();
      if (cVar1 != '\0') goto LAB_005eb65d;
    }
    FUN_005eae70();
  }
LAB_005eb65d:
  iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
  FUN_005e4b00();
  if ((iVar4 == 1) || (iVar4 == 0)) {
    FUN_005e4fc0();
  }
  FUN_006a2160();
  if ((*(char *)(DAT_00b33a98 + 0xcd4) == '\0') && (cVar1 = FUN_0045a500(), cVar1 == '\0')) {
    FUN_006765a0(in_ECX);
  }
  cVar1 = (**(code **)(*in_ECX + 0x1f8))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*in_ECX + 0x198))(0);
    if ((cVar1 != '\0') && (iVar5 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), iVar5 == 0)) {
      (**(code **)(*in_ECX + 0x9c))(1);
    }
  }
  else {
    FUN_005e9e70();
    (**(code **)(*(int *)in_ECX[0x16] + 0x23c))();
    FUN_004d7190();
  }
  FUN_00674550(in_ECX,iVar4);
  piVar7 = (int *)0x0;
  bVar8 = false;
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x388))();
  }
  cVar1 = (char)((uint)uStack_24 >> 0x18);
  if ((*(int *)(in_ECX[0x16] + 8) != 0) && (cVar2 = FUN_00567770(), cVar2 != '\0')) {
    cVar2 = FUN_005e6cd0(0);
    bVar8 = cVar2 != '\0';
    if (bVar8) {
      (**(code **)(*in_ECX + 0x338))();
    }
    if (((*(int *)(in_ECX[0x16] + 8) == 0) ||
        (*(char *)(*(int *)(in_ECX[0x16] + 8) + 0x20) != '\x0f')) &&
       (iVar4 = (**(code **)(*in_ECX + 0x330))(), iVar4 == 0)) {
      FUN_005eae70();
    }
  }
  afStack_20[0] = (float)FUN_00401f00(0x90);
  puStack_8 = (undefined1 *)0x0;
  if (afStack_20[0] != 0.0) {
    piVar7 = (int *)FUN_006438f0();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar7 + 4))(in_ECX[0x16]);
  if ((undefined4 *)in_ECX[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x16])(1);
  }
  in_ECX[0x16] = (int)piVar7;
  (**(code **)(*piVar7 + 0xb8))();
  FUN_00673a90(in_ECX,3,1,0,0);
  if (bVar8) {
    iVar4 = *(int *)in_ECX[0x16];
    (**(code **)(iVar4 + 0x148))(0,0,0,1);
    (**(code **)(iVar4 + 0x228))();
  }
  else if (cVar1 != '\0') {
    (**(code **)(*(int *)in_ECX[0x16] + 0x18))();
  }
  if ((DAT_00b33a98 == 0) || (*(char *)(DAT_00b33a98 + 0xcd4) != '\0')) goto LAB_005ebb1a;
  if (cVar1 != '\0') {
    (**(code **)(*(int *)in_ECX[0x16] + 0x18))();
  }
  cVar1 = (**(code **)(*in_ECX + 0x334))(1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*in_ECX + 0x78))();
    if (((cVar1 != '\0') && (*(char *)((int)in_ECX + 0xca) != '\0')) ||
       (((cVar1 = FUN_005e3220(), cVar1 != '\0' || (cVar1 = FUN_005e30a0(), cVar1 != '\0')) &&
        (iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0xcc))(), iVar4 == DAT_00b333c4)))) {
      iVar4 = *(int *)in_ECX[0x16];
      fVar9 = (float10)FUN_00402bd0();
      afStack_20[0] = (float)(fVar9 - (float10)1.0);
      (**(code **)(iVar4 + 0x1c))(afStack_20[0]);
      FUN_00674550(in_ECX,3);
      FUN_00673a90(in_ECX,3,0,0,0);
    }
  }
  else {
    iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x3d0))();
    if (iVar4 == DAT_00b333c4) {
      iVar4 = *(int *)in_ECX[0x16];
      fVar9 = (float10)FUN_00402bd0();
      (**(code **)(iVar4 + 0x1c))((float)(fVar9 - (float10)0.5));
    }
    else {
      cVar1 = FUN_005e6cd0(0);
      if (((cVar1 == '\0') && (cVar1 = (**(code **)(*in_ECX + 0x350))(), cVar1 == '\0')) &&
         (iVar4 = (**(code **)(*in_ECX + 0x338))(), iVar4 != 0)) {
        iVar4 = (**(code **)(*in_ECX + 0x338))();
        if (((iVar4 == DAT_00b333c4) && (*(int *)(DAT_00b333c4 + 0x110) <= DAT_00b37d18)) &&
           ((cVar1 = FUN_00680ee0(), cVar1 != '\0' &&
            (iVar4 = (**(code **)(*in_ECX + 0x338))(), *(int *)(iVar4 + 0x58) != 0)))) {
          (**(code **)(*in_ECX + 0x338))();
          iVar4 = FUN_00659a00();
          if (iVar4 == 0) {
            iVar4 = *(int *)in_ECX[0x16];
            fVar9 = (float10)FUN_00402bd0();
            (**(code **)(iVar4 + 0x1c))((float)(fVar9 - (float10)1.0));
            (**(code **)(*in_ECX + 0x338))();
            fVar11 = 3.0;
            *(int *)(DAT_00b333c4 + 0x110) = *(int *)(DAT_00b333c4 + 0x110) + 1;
            if (*(int *)(DAT_00b333c4 + 0x570) != 0) {
              iVar4 = FUN_006ecc80();
              iVar5 = FUN_006ecc80();
              if (iVar4 == iVar5) {
                uVar6 = (**(code **)(**(int **)(DAT_00b333c4 + 0x570) + 0x174))();
                pfVar10 = afStack_20;
                (**(code **)(*in_ECX + 0x174))(pfVar10,uVar6);
                FUN_004121a0(pfVar10,uVar6);
                fVar9 = (float10)FUN_00404c90();
                fVar11 = (float)(fVar9 / (float10)300.0);
              }
            }
            (**(code **)(*(int *)in_ECX[0x16] + 0x164))(fVar11);
            goto LAB_005ebb13;
          }
        }
        (**(code **)(*in_ECX + 0x340))(0);
      }
      else {
        iVar4 = (**(code **)(*in_ECX + 0x330))();
        if (iVar4 != 0) {
          iVar4 = DAT_00b333c4;
          (**(code **)(*in_ECX + 0x330))(DAT_00b333c4);
          FUN_006162d0(iVar4);
          goto LAB_005ebb13;
        }
      }
      FUN_005eae70();
    }
  }
LAB_005ebb13:
  *(undefined1 *)((int)in_ECX + 0xca) = 1;
LAB_005ebb1a:
  *unaff_FS_OFFSET = local_c;
  return 1;
}



undefined4 FUN_005ebb30(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  int *piVar6;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  float *pfVar8;
  float fVar9;
  char cStack_22;
  char cStack_21;
  float fStack_20;
  float fStack_1c;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c26db;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00674850(in_ECX);
  piVar6 = (int *)0x0;
  if (((int *)in_ECX[0x16] != (int *)0x0) &&
     (iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 8))(uVar2), iVar3 == 2)) goto LAB_005ec15b;
  if (((int *)in_ECX[0x16] != (int *)0x0) &&
     ((iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), iVar3 == 0 &&
      (iVar3 = FUN_007b7650(), iVar3 != 0)))) {
    FUN_007ad1e0(in_ECX[3]);
  }
  if (((((int *)in_ECX[0x16] != (int *)0x0) &&
       (iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))(), iVar3 != 0)) &&
      (*(char *)(iVar3 + 0x20) == '\x12')) &&
     (cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x1cc))(), cVar1 != '\0')) {
    FUN_005eae70();
  }
  iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
  FUN_005e4b00();
  if ((iVar3 == 1) || (iVar3 == 0)) {
    FUN_005e4fc0();
  }
  FUN_006a2160();
  cVar1 = (**(code **)(*in_ECX + 0x1f8))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*in_ECX + 0x198))(0);
    if ((cVar1 != '\0') && (iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), iVar4 == 0)) {
      (**(code **)(*in_ECX + 0x9c))(1);
    }
  }
  else {
    FUN_005e9e70();
    (**(code **)(*(int *)in_ECX[0x16] + 0x23c))();
    FUN_004d7190();
  }
  FUN_00674550(in_ECX,iVar3);
  if (*(char *)(DAT_00b33a98 + 0xcd4) == '\0') {
    cVar1 = FUN_0045a500();
    if (cVar1 == '\0') {
      FUN_006765a0(in_ECX);
    }
    iVar3 = in_ECX[0x16];
    if (((iVar3 != 0) && (*(int *)(iVar3 + 8) != 0)) &&
       (*(char *)(*(int *)(iVar3 + 8) + 0x20) == '\x05')) {
      *(undefined4 *)(iVar3 + 4) = 0;
    }
  }
  if (in_ECX[0x2c] == 6) {
    FUN_005e6680(0);
    (**(code **)(*(int *)in_ECX[0x16] + 0xa0))(0);
  }
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x388))();
  }
  iVar3 = 0;
  fStack_20 = (float)FUN_00401f00(0xa8);
  puStack_8 = (undefined1 *)0x0;
  if (fStack_20 != 0.0) {
    piVar6 = (int *)FUN_00658690();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (((in_ECX[0x16] != 0) && (*(int *)(in_ECX[0x16] + 8) != 0)) &&
     (cVar1 = FUN_00567770(), cVar1 != '\0')) {
    iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x3d0))();
    if (iVar4 == DAT_00b333c4) {
      iVar4 = *(int *)in_ECX[0x16];
      fVar7 = (float10)FUN_00402bd0();
      fStack_20 = (float)(fVar7 - (float10)0.5);
      (**(code **)(iVar4 + 0x1c))(fStack_20);
    }
    else {
      cVar1 = FUN_005e6cd0(0);
      if ((cVar1 == '\0') && (cVar1 = (**(code **)(*in_ECX + 0x334))(1), cVar1 == '\0')) {
        cVar1 = FUN_005e6ba0();
        if (cVar1 == '\0') {
          FUN_005eae70();
        }
      }
      else {
        (**(code **)(*in_ECX + 0x330))();
        iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0xcc))();
        cVar1 = FUN_005e6cd0(0);
        if (cVar1 != '\0') {
          if (iVar3 != 0) goto LAB_005ebe3b;
          iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))();
          if (((iVar4 != 0) && (*(char *)(iVar4 + 0x20) == '\x10')) &&
             (*(char *)(iVar4 + 100) != '\0')) {
            iVar3 = FUN_00628140(in_ECX);
          }
        }
        if ((iVar3 == 0) && (iVar4 = (**(code **)(*in_ECX + 0x338))(), iVar4 != 0)) {
          iVar3 = (**(code **)(*in_ECX + 0x338))();
        }
      }
    }
  }
LAB_005ebe3b:
  (**(code **)(*piVar6 + 4))(in_ECX[0x16]);
  if ((undefined4 *)in_ECX[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x16])(1);
  }
  in_ECX[0x16] = (int)piVar6;
  FUN_00673a90(in_ECX,2,1,0,0);
  if ((cStack_21 == '\0') || (iVar3 == 0)) {
    if (cStack_22 != '\0') {
      (**(code **)(*(int *)in_ECX[0x16] + 0x18))();
    }
  }
  else {
    iVar3 = *(int *)in_ECX[0x16];
    (**(code **)(iVar3 + 0x148))(0,0,0,1);
    (**(code **)(iVar3 + 0x228))();
  }
  if ((DAT_00b33a98 == 0) || (*(char *)(DAT_00b33a98 + 0xcd4) != '\0')) goto LAB_005ec15b;
  if (cStack_22 != '\0') {
    (**(code **)(*(int *)in_ECX[0x16] + 0x18))();
  }
  cVar1 = (**(code **)(*in_ECX + 0x334))(1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*in_ECX + 0x78))();
    if (((cVar1 != '\0') && (*(char *)((int)in_ECX + 0xca) != '\0')) ||
       (((cVar1 = FUN_005e3220(), cVar1 != '\0' || (cVar1 = FUN_005e30a0(), cVar1 != '\0')) &&
        (iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0xcc))(), iVar3 == DAT_00b333c4)))) {
      iVar3 = *(int *)in_ECX[0x16];
      fVar7 = (float10)FUN_00402bd0();
      fStack_1c = (float)(fVar7 - (float10)0.5);
      (**(code **)(iVar3 + 0x1c))(fStack_1c);
      FUN_00674550(in_ECX,2);
      FUN_00673a90(in_ECX,2,0,0,0);
    }
  }
  else {
    cVar1 = FUN_005e6cd0(0);
    if (((cVar1 == '\0') && (cVar1 = (**(code **)(*in_ECX + 0x350))(), cVar1 == '\0')) &&
       (iVar3 = (**(code **)(*in_ECX + 0x338))(), iVar3 != 0)) {
      iVar3 = (**(code **)(*in_ECX + 0x338))();
      if (*(int *)(iVar3 + 0x58) != 0) {
        (**(code **)(*in_ECX + 0x338))();
        iVar3 = FUN_00659a00();
        if (iVar3 == 0) {
          iVar3 = (**(code **)(*in_ECX + 0x338))();
          if (((iVar3 == DAT_00b333c4) && (*(int *)(DAT_00b333c4 + 0x110) <= DAT_00b37d18)) &&
             (cVar1 = FUN_00680ee0(), cVar1 != '\0')) {
            iVar3 = *(int *)in_ECX[0x16];
            fVar7 = (float10)FUN_00402bd0();
            fStack_1c = (float)(fVar7 - (float10)0.5);
            (**(code **)(iVar3 + 0x1c))(fStack_1c);
            (**(code **)(*(int *)in_ECX[0x16] + 0x194))();
            (**(code **)(*in_ECX + 0x338))();
            fVar9 = 3.0;
            *(int *)(DAT_00b333c4 + 0x110) = *(int *)(DAT_00b333c4 + 0x110) + 1;
            if (*(int *)(DAT_00b333c4 + 0x570) != 0) {
              iVar3 = FUN_006ecc80();
              iVar4 = FUN_006ecc80();
              if (iVar4 == iVar3) {
                uVar5 = (**(code **)(**(int **)(DAT_00b333c4 + 0x570) + 0x174))();
                pfVar8 = &fStack_20;
                (**(code **)(*in_ECX + 0x174))(pfVar8,uVar5);
                FUN_004121a0(pfVar8,uVar5);
                fVar7 = (float10)FUN_00404c90();
                fVar9 = (float)(fVar7 / (float10)300.0);
              }
            }
            (**(code **)(*(int *)in_ECX[0x16] + 0x164))(fVar9);
          }
          else {
            (**(code **)(*in_ECX + 0x340))(0);
            FUN_005eae70();
          }
          goto LAB_005ec154;
        }
      }
      iVar3 = (**(code **)(*in_ECX + 0x330))();
      if (iVar3 != 0) {
        iVar3 = DAT_00b333c4;
        (**(code **)(*in_ECX + 0x330))(DAT_00b333c4);
        FUN_006162d0(iVar3);
      }
    }
  }
LAB_005ec154:
  *(undefined1 *)((int)in_ECX + 0xca) = 1;
LAB_005ec15b:
  *unaff_FS_OFFSET = local_c;
  return 1;
}



undefined4 FUN_005ec180(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x164))();
  if ((iVar1 != 0) && (iVar1 = FUN_004706e0(0), iVar1 != 0)) {
    FUN_004706e0(0);
    iVar1 = FUN_0051ac70();
    if (iVar1 - 0x28U < 3) {
      return 1;
    }
  }
  iVar1 = FUN_0065a2c0();
  if (iVar1 != 0) {
    FUN_0065a2c0();
    iVar1 = FUN_0088d370();
    if (iVar1 == 2) {
      return 1;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005ec1f0(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float *pfVar7;
  int *in_ECX;
  undefined4 uVar8;
  float local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_10 = 1.0;
  if (param_1 != 0) {
    cVar1 = FUN_004e8040();
    if ((cVar1 != '\0') && (iVar4 = (**(code **)(*in_ECX + 0x170))(), *(char *)(iVar4 + 4) != '$'))
    {
      local_10 = 1.0 - _DAT_00b3a400;
    }
    cVar1 = '\0';
    cVar3 = '\0';
    cVar2 = FUN_0067ecc0();
    if ((cVar2 == '\0') && (cVar2 = FUN_0067ec90(), cVar2 == '\0')) {
      cVar2 = FUN_0067ecf0();
      if (cVar2 != '\0') {
        cVar3 = '\x01';
        puVar5 = (undefined4 *)FUN_004bef40();
        uStack_c = *puVar5;
        uStack_8 = puVar5[1];
        uStack_4 = puVar5[2];
        if ((DAT_00b3b784 == 0) ||
           ((cVar2 = FUN_004c97f0(), cVar2 == '\0' &&
            (cVar2 = FUN_004cc540(&uStack_c), cVar2 == '\0')))) {
          FUN_006ecc80();
          cVar2 = FUN_004c97f0();
          if (cVar2 == '\0') {
            uVar8 = 0;
            uVar6 = FUN_004d6670(0);
            DAT_00b3b784 = FUN_0044a270(uStack_c,uStack_8,uVar6,uVar8);
          }
          else {
            DAT_00b3b784 = FUN_006ecc80();
          }
        }
        cVar2 = FUN_005e06c0(&uStack_c,DAT_00b3b784,0x3f600000);
        if (cVar2 != '\0') {
          cVar1 = '\x01';
        }
      }
      FUN_0067ed30(cVar1);
    }
    else {
      cVar1 = FUN_0067ed20();
      cVar3 = FUN_0067ecf0();
    }
    if (cVar1 == '\0') {
      cVar1 = FUN_005e1e90();
      if (cVar1 != '\0') {
        local_10 = _DAT_00b3a408 + local_10;
      }
      if ((cVar3 != '\0') && (cVar1 = FUN_005e3400(), cVar1 == '\0')) {
        local_10 = _DAT_00b3a410 + local_10;
      }
    }
    else {
      iVar4 = (**(code **)(*in_ECX + 0x170))();
      if (iVar4 != 0) {
        (**(code **)(*in_ECX + 400))();
      }
      cVar1 = FUN_00519c70();
      if (cVar1 == '\0') {
        return (float10)(_DAT_00b3a408 + local_10);
      }
      cVar1 = FUN_005ea640();
      if ((cVar1 == '\0') && (cVar1 = FUN_005e3400(), cVar1 == '\0')) {
        pfVar7 = (float *)FUN_00403c00();
        return (float10)(*pfVar7 + local_10);
      }
    }
  }
  return (float10)local_10;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ec400(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9,float param_10)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float *pfVar9;
  int *in_ECX;
  undefined4 uVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_a8;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c270e;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar3 = FUN_005e1b30();
  if (cVar3 != '\0') {
    fVar2 = _DAT_00b148dc;
    if (_DAT_00b148dc < 1.0) {
      fVar2 = 1.0;
    }
    fVar1 = param_1;
    if (fVar2 < param_1) {
      for (; fVar2 < fVar1; fVar1 = fVar1 * 0.25) {
        FUN_0047e060();
        FUN_0047e060();
        FUN_0047e060();
        FUN_0043f350();
        iVar4 = (**(code **)(*in_ECX + 0x170))();
        iVar5 = 0;
        if ((iVar4 != 0) && (cVar3 = (**(code **)(*in_ECX + 400))(), cVar3 != '\0')) {
          iVar5 = iVar4;
        }
        iVar5 = (**(code **)(*(int *)(iVar5 + 0x24) + 0x38))();
        if (iVar5 != 0) {
          iVar4 = (**(code **)(*in_ECX + 0x170))();
          iVar5 = 0;
          if ((iVar4 != 0) && (cVar3 = (**(code **)(*in_ECX + 400))(), cVar3 != '\0')) {
            iVar5 = iVar4;
          }
          pcVar6 = (char *)(**(code **)(*(int *)(iVar5 + 0x24) + 0x38))();
          if (*pcVar6 != '\0') {
            iVar4 = (**(code **)(*in_ECX + 0x170))();
            iVar5 = 0;
            if ((iVar4 != 0) && (cVar3 = (**(code **)(*in_ECX + 400))(), cVar3 != '\0')) {
              iVar5 = iVar4;
            }
            (**(code **)(*(int *)(iVar5 + 0x24) + 0x38))();
            fVar17 = param_5;
            fVar19 = param_6;
            FUN_006ecc80(param_5,param_6);
            FUN_004d3b10(fVar17,fVar19);
          }
        }
        iVar4 = (**(code **)(*in_ECX + 0x170))();
        iVar5 = 0;
        if ((iVar4 != 0) && (cVar3 = (**(code **)(*in_ECX + 400))(), cVar3 != '\0')) {
          iVar5 = iVar4;
        }
        iVar5 = (**(code **)(*(int *)(iVar5 + 0x24) + 0x40))();
        if (iVar5 != 0) {
          iVar4 = (**(code **)(*in_ECX + 0x170))();
          iVar5 = 0;
          if ((iVar4 != 0) && (cVar3 = (**(code **)(*in_ECX + 400))(), cVar3 != '\0')) {
            iVar5 = iVar4;
          }
          pcVar6 = (char *)(**(code **)(*(int *)(iVar5 + 0x24) + 0x40))();
          if (*pcVar6 != '\0') {
            FUN_006ecc80();
            iVar5 = FUN_004c9be0();
            FUN_006ecc80();
            iVar4 = FUN_004ca790();
            if ((((iVar4 == 0) || ((uint)*(ushort *)(iVar4 + 0xb6) <= iVar5 + 2U)) ||
                (iVar5 = *(int *)(*(int *)(iVar4 + 0xb0) + (iVar5 + 2U) * 4), iVar5 == 0)) ||
               (*(ushort *)(iVar5 + 0xb6) < 4)) {
              uVar10 = 0;
            }
            else {
              uVar10 = *(undefined4 *)(*(int *)(iVar5 + 0xb0) + 0xc);
            }
            iVar5 = FUN_00401f00();
            uStack_4 = 0;
            if (iVar5 != 0) {
              iVar4 = (**(code **)(*in_ECX + 0x170))();
              iVar5 = 0;
              if ((iVar4 != 0) && (cVar3 = (**(code **)(*in_ECX + 400))(), cVar3 != '\0')) {
                iVar5 = iVar4;
              }
              uVar7 = (**(code **)(*(int *)(iVar5 + 0x24) + 0x40))();
              uVar15 = 0x3f800000;
              uVar8 = FUN_006ecc80(0x3f800000,uVar10,uVar7);
              FUN_005713f0(uVar8,uVar15,uVar10,uVar7);
            }
            uStack_4 = 0xffffffff;
            FUN_00678d30();
          }
        }
      }
      iVar5 = (**(code **)(*in_ECX + 0x154))();
      local_a8 = param_1;
      if ((iVar5 != 0) && (fVar2 < param_1)) {
        pfVar9 = (float *)(**(code **)(*in_ECX + 0x174))();
        fVar1 = *pfVar9;
        fVar17 = pfVar9[1];
        fVar19 = pfVar9[2];
        if (fVar2 < param_1) {
          do {
            fVar11 = (float10)FUN_0047e060();
            fVar12 = (float10)FUN_0047e0b0();
            fVar13 = (float10)FUN_0047e060();
            fVar14 = (((fVar1 + 20.0) - param_5) + (float)fVar11 * 10.0) * 0.5 + param_5;
            fVar16 = (((fVar17 + 20.0) - param_6) + (float)fVar12 * 10.0) * 0.5 + param_6;
            fVar18 = (((fVar19 + 20.0) - param_7) + (float)fVar13 * 10.0) * 0.5 + param_7;
            FUN_0047e0b0();
            FUN_00985a00();
            FUN_0043f350();
            fVar20 = param_8 - (fVar14 - param_2) * 0.25;
            FUN_0043f350();
            fVar14 = fVar14 - fVar20 * 32.0;
            fVar16 = fVar16 - (param_9 - (fVar16 - param_3) * 0.25) * 32.0;
            fVar18 = fVar18 - (param_10 - (fVar18 - param_4) * 0.25) * 32.0;
            FUN_0047e0b0();
            iVar4 = (**(code **)(*in_ECX + 0x170))();
            iVar5 = 0;
            if ((iVar4 != 0) && (cVar3 = (**(code **)(*in_ECX + 400))(), cVar3 != '\0')) {
              iVar5 = iVar4;
            }
            iVar5 = (**(code **)(*(int *)(iVar5 + 0x24) + 0x38))();
            if (iVar5 != 0) {
              iVar4 = (**(code **)(*in_ECX + 0x170))();
              iVar5 = 0;
              if ((iVar4 != 0) && (cVar3 = (**(code **)(*in_ECX + 400))(), cVar3 != '\0')) {
                iVar5 = iVar4;
              }
              pcVar6 = (char *)(**(code **)(*(int *)(iVar5 + 0x24) + 0x38))();
              if (*pcVar6 != '\0') {
                FUN_005e1bb0();
                FUN_006ecc80(fVar14,fVar16,fVar18,fVar20);
                FUN_004cf1a0(fVar14,fVar16,fVar18,fVar20);
              }
            }
            local_a8 = local_a8 * 0.25;
          } while (fVar2 < local_a8);
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005eccd0(int param_1,uint *param_2)

{
  bool bVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  undefined4 uVar7;
  int *in_ECX;
  int iVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_c4 [3];
  char local_c1;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  int local_ac;
  undefined4 local_a8;
  char cStack_a1;
  uint *local_a0;
  float local_9c;
  float fStack_98;
  float fStack_94;
  int iStack_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined8 local_80;
  float fStack_78;
  undefined4 local_6c;
  undefined4 local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_c4;
  local_b8 = 0.0;
  local_a8 = 0.0;
  local_b0 = 0.0;
  iVar4 = *(int *)(param_1 + 0xc);
  local_bc = 0.0;
  local_b4 = 1.0;
  local_a0 = param_2;
  local_8c = (float)param_1;
  local_c1 = '\0';
  local_ac = FUN_0041e900();
  if (((in_ECX == DAT_00b333c4) && (iVar4 != 0)) && (iVar4 == DAT_00b333c4[0x15e])) {
    return;
  }
  if ((local_ac == 0) || (iVar4 = FUN_0041e920(), iVar4 == 0)) {
LAB_005ecebb:
    if ((*local_a0 & 1) != 0) {
      return;
    }
  }
  else {
    cVar3 = FUN_004faa90("fTrapDamage",&local_ac);
    if (cVar3 != '\0') {
      fVar9 = (float10)FUN_004fa110(local_ac,0);
      local_b8 = (float)fVar9;
    }
    cVar3 = FUN_004faa90("fLevelledDamage",&local_b0);
    if (cVar3 != '\0') {
      fVar9 = (float10)FUN_004fa110(local_b0,0);
      local_88 = (float)fVar9;
      local_80 = (double)local_88;
      uVar5 = FUN_005e1fd0();
      local_88 = (float)(uVar5 & 0xffff);
      local_b8 = (float)(int)local_88 * (float)local_80 + local_b8;
    }
    cVar3 = FUN_004faa90("fTrapPushBack",&local_6c);
    if (cVar3 != '\0') {
      fVar9 = (float10)FUN_004fa110(local_6c,0);
      local_a8 = (float)fVar9;
    }
    cVar3 = FUN_004faa90("fTrapMinVelocity",&local_68);
    if (cVar3 != '\0') {
      fVar9 = (float10)FUN_004fa110(local_68,0);
      local_bc = 0.0;
      if (0.0 <= (float)fVar9) {
        local_bc = (float)fVar9 * 0.14287673;
      }
    }
    cVar3 = FUN_004faa90("bTrapContinuous",&local_84);
    if (cVar3 != '\0') {
      fVar9 = (float10)FUN_004fa110(local_84,0);
      local_c1 = '\x01';
      if (fVar9 == (float10)0.0) {
        local_c1 = '\0';
      }
    }
    cVar3 = FUN_004faa90("fTrapDeathPushBack",&local_c0);
    if (cVar3 == '\0') {
      local_b0 = local_a8 / 10.0;
    }
    else {
      fVar9 = (float10)FUN_004fa110(local_c0,0);
      local_b0 = (float)fVar9;
    }
    if (local_c1 == '\0') goto LAB_005ecebb;
  }
  puVar2 = local_a0;
  local_84 = (float)FUN_0065a2c0();
  iVar4 = *(int *)((int)local_8c + 8);
  if (*(char *)(iVar4 + 0x18) == '\x01') {
    iVar8 = *(int *)(iVar4 + 0x10) + iVar4;
    local_ac = iVar8;
    if (iVar8 != 0) {
      if ((*puVar2 & 1) == 0) {
        local_40 = (float)puVar2[8];
        fStack_3c = (float)puVar2[9];
        fStack_38 = (float)puVar2[10];
        fStack_34 = (float)puVar2[0xb];
        local_30 = (float)puVar2[4];
        fStack_2c = (float)puVar2[5];
        fStack_28 = (float)puVar2[6];
        fStack_24 = (float)puVar2[7];
      }
      else {
        iVar4 = *(int *)(iVar8 + 0x50);
        local_40 = *(float *)(iVar4 + 0xd0);
        fStack_3c = *(float *)(iVar4 + 0xd4);
        fStack_38 = *(float *)(iVar4 + 0xd8);
        fStack_34 = *(float *)(iVar4 + 0xdc);
        local_30 = *(float *)(iVar4 + 0x40);
        fStack_2c = *(float *)(iVar4 + 0x44);
        fStack_28 = *(float *)(iVar4 + 0x48);
        fStack_24 = *(float *)(iVar4 + 0x4c);
      }
      if ((local_bc == 0.0) ||
         (local_9c = SQRT(fStack_38 * fStack_38 + fStack_3c * fStack_3c + local_40 * local_40),
         local_bc <= local_9c)) {
        if (local_84 != 0.0) {
          if (*(int *)((int)local_84 + 8) == 0) {
            pfVar6 = (float *)&DAT_00ba7a40;
          }
          else {
            pfVar6 = (float *)FUN_008ac0a0();
          }
          local_b4 = local_bc;
          if (local_bc == 0.0) {
            local_b4 = 10.0;
          }
          local_9c = SQRT((pfVar6[2] - fStack_38) * (pfVar6[2] - fStack_38) +
                          (pfVar6[1] - fStack_3c) * (pfVar6[1] - fStack_3c) +
                          (*pfVar6 - local_40) * (*pfVar6 - local_40));
          local_b4 = local_9c / local_b4;
          if (2.0 < local_b4) {
            local_b4 = 2.0;
          }
        }
      }
      else {
        local_b8 = 0.0;
      }
      goto LAB_005ed0c4;
    }
  }
  else {
    local_ac = 0;
  }
  iVar8 = local_ac;
  if ((*puVar2 & 1) == 0) {
    local_30 = (float)puVar2[4];
    fStack_2c = (float)puVar2[5];
    fStack_28 = (float)puVar2[6];
    fStack_24 = (float)puVar2[7];
  }
  else {
    iVar4 = *(int *)(iVar4 + 8);
    local_30 = *(float *)(iVar4 + 0x30);
    fStack_2c = *(float *)(iVar4 + 0x34);
    fStack_28 = *(float *)(iVar4 + 0x38);
    fStack_24 = *(float *)(iVar4 + 0x3c);
  }
  pfVar6 = (float *)(**(code **)(*in_ECX + 0x174))();
  local_40 = *pfVar6 * 0.14287673 - local_30;
  fStack_3c = pfVar6[1] * 0.14287673 - fStack_2c;
  fStack_38 = pfVar6[2] * 0.14287673 - fStack_28;
  fStack_34 = fStack_34 - fStack_24;
  fVar9 = (float10)FUN_005e0660();
  local_c0 = (float)(fVar9 * (float10)0.5) * 0.14287673;
  fStack_38 = local_c0 + fStack_38;
LAB_005ed0c4:
  cVar3 = (**(code **)(*in_ECX + 0x198))(0);
  local_a8 = (float)CONCAT13(cVar3 == '\0',(undefined3)local_a8);
  uVar5 = *(uint *)(*(int *)(iStack_90 + 8) + 0x1c) & 0x3f;
  if (uVar5 == 0x10) {
    fVar9 = (float10)(**(code **)(*in_ECX + 0x288))(0x43);
    local_bc = (float)(fVar9 / (float10)100.0);
    if (1.0 <= local_bc) {
      local_bc = 1.0;
    }
  }
  else {
    fVar9 = (float10)(**(code **)(*in_ECX + 0x288))(0x41);
    local_bc = (float)(fVar9 / (float10)100.0);
    if (1.0 <= local_bc) {
      local_bc = 1.0;
    }
  }
  local_c0 = 1.0 - local_bc;
  local_b8 = local_c0 * local_b8;
  if (0.0 < local_b8) {
    if (local_c1 != '\0') {
      local_b8 = _DAT_00b33e9c * local_b4 * local_b8;
    }
    (**(code **)(*in_ECX + 0x220))(local_b8,0,0);
    fVar9 = (float10)FUN_005e0660();
    local_84 = (float)(fVar9 * (float10)0.5);
    local_8c = local_84 * DAT_00b258e8;
    local_88 = local_84 * DAT_00b258ec;
    local_84 = local_84 * DAT_00b258f0;
    iVar4 = (**(code **)(*in_ECX + 0x154))();
    local_9c = *(float *)(iVar4 + 0x88) + (float)local_80;
    fStack_98 = *(float *)(iVar4 + 0x8c) + local_80._4_4_;
    fStack_94 = *(float *)(iVar4 + 0x90) + fStack_78;
    FUN_0043f3e0(&local_80,&local_30);
    if (uVar5 != 0x10) {
      local_c0 = local_b8 + local_b8;
      FUN_005ec400(local_c0,(float)local_80,local_80._4_4_,fStack_78,local_9c,fStack_98,fStack_94,
                   DAT_00b3f9a8,DAT_00b3f9ac,DAT_00b3f9b0,0);
      if (((local_c1 == '\0') && (iVar8 != 0)) && (local_a0[0xc] != 0x1f)) {
        pfVar6 = (float *)FUN_0043f3e0(&local_9c,&local_30);
        local_9c = *pfVar6;
        iStack_44 = *(int *)(local_ac + 0xc);
        fStack_98 = pfVar6[1];
        fStack_94 = pfVar6[2];
        uStack_54 = 0x3f000000;
        uStack_50 = 0x1f;
        uStack_4f = (undefined1)local_a0[0xc];
        fStack_58 = SQRT(fStack_38 * fStack_38 + fStack_3c * fStack_3c + local_40 * local_40) * 3.0;
        local_80 = (double)CONCAT44(local_80._4_4_,fStack_58);
        iStack_4c = (int)in_ECX + iStack_44;
        uStack_48 = 0;
        fStack_64 = local_9c;
        fStack_60 = fStack_98;
        fStack_5c = fStack_94;
        FUN_006b0c70(&fStack_64);
      }
    }
    FUN_005e70f0(1,1);
    if ((cStack_a1 == '\0') || (cVar3 = (**(code **)(*in_ECX + 0x198))(0), cVar3 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (0.0 < local_a8) {
      if (200.0 < local_b0) {
        local_b0 = 200.0;
      }
      if ((bVar1) && (in_ECX != DAT_00b333c4)) {
        uVar7 = (**(code **)(*in_ECX + 0x154))(1,1,0);
        FUN_0088d070(uVar7);
        uVar7 = (**(code **)(*in_ECX + 0x154))();
        FUN_008b8700(uVar7);
        fVar11 = fStack_38 * fStack_38;
        fVar10 = fVar11 + fStack_3c * fStack_3c + local_40 * local_40;
        auVar12._4_4_ = fVar11;
        auVar12._0_4_ = fVar10;
        auVar12._8_4_ = fVar11;
        auVar12._12_4_ = fVar11;
        auVar12 = rsqrtss(auVar12,auVar12);
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        local_30 = local_30 - fVar10 * local_40 * 1024.0;
        fStack_2c = fStack_2c - fVar10 * fStack_3c * 1024.0;
        fStack_28 = fStack_28 - fVar10 * fStack_38 * 1024.0;
        fStack_24 = fStack_24 - fVar10 * fStack_34 * 1024.0;
        uVar7 = (**(code **)(*in_ECX + 0x154))(&local_30,local_b0);
        FUN_005364b0(uVar7);
      }
      else if (local_84 != 0.0) {
        if (1000.0 < local_a8) {
          local_a8 = 1000.0;
        }
        if (local_c1 != '\0') {
          local_a8 = _DAT_00b33e9c * local_b4 * local_a8;
        }
        if (*(int *)((int)local_8c + 8) != 0) {
          FUN_0043f3e0(&local_9c,&local_40);
          FUN_0043f350();
          FUN_0069dd70(local_a8);
          FUN_008907a0(&local_9c,0x3f000000);
        }
      }
    }
  }
  *local_a0 = *local_a0 | 1;
  return;
}



void FUN_005ed5a0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  undefined4 unaff_ESI;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_8;
  
  if (((param_1 != 0) && (iVar3 = *(int *)(param_1 + 8), iVar3 != 0)) &&
     (*(char *)(iVar3 + 4) == '!')) {
    if (iVar3 == -0x60) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 100);
    }
    if (iVar3 != 0) {
      fVar4 = (float10)FUN_004849c0();
      local_8 = SUB84((double)(float)fVar4,0);
      fVar4 = (float10)(*(code *)**(undefined4 **)(iVar3 + 0x24))();
      if (fVar4 < (float10)(double)CONCAT44(local_8,unaff_ESI) !=
          (fVar4 == (float10)(double)CONCAT44(local_8,unaff_ESI))) {
        if ((in_ECX != DAT_00b333c4) && (cVar1 = (**(code **)(*in_ECX + 0x334))(1), cVar1 != '\0'))
        {
          iVar2 = (**(code **)(*in_ECX + 0x330))();
          if ((iVar2 == 0) || (iVar2 = FUN_006135f0(), iVar2 == 0)) {
            iVar2 = 0;
          }
          else {
            iVar2 = iVar2 + 0x68;
          }
          (**(code **)(in_ECX[0x17] + 0x3c))(iVar2);
        }
        (**(code **)(in_ECX[0x17] + 0x34))(iVar3 + 0x18);
        if ((int *)in_ECX[0x16] != (int *)0x0) {
          (**(code **)(*(int *)in_ECX[0x16] + 700))(1);
        }
        iVar3 = FUN_00419b30(0);
        if ((iVar3 != 0) && (*(int *)(iVar3 + 0x80) != 0)) {
          iVar2 = (**(code **)(*in_ECX + 0x330))();
          if (iVar2 != 0) {
            uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0x80) + 0xc);
            uVar6 = 0;
            (**(code **)(*in_ECX + 0x330))(uVar5,0);
            FUN_00619fa0(uVar5,uVar6);
            return;
          }
          if (in_ECX == DAT_00b333c4) {
            FUN_00663520(*(undefined4 *)(*(int *)(iVar3 + 0x80) + 0xc));
            return;
          }
          iVar3 = FUN_0065ac50(*(undefined4 *)(*(int *)(iVar3 + 0x80) + 0xc),0,0x102,1);
          if (iVar3 != 0) {
            FUN_006b73e0();
            FUN_00401f20(iVar3);
          }
        }
      }
    }
  }
  return;
}



undefined1 FUN_005ed730(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  undefined1 uVar4;
  float10 fVar5;
  
  uVar4 = 0;
  if (in_ECX[0x16] != 0) {
    iVar3 = FUN_006ecc80();
    if (iVar3 != 0) {
      FUN_006ecc80();
      cVar2 = FUN_004c97f0();
      if (cVar2 != '\0') {
        iVar3 = (**(code **)(*in_ECX + 0x174))();
        fVar1 = *(float *)(iVar3 + 8);
        iVar3 = (**(code **)(*param_1 + 0x174))();
        if (90.0 < ABS(fVar1 - *(float *)(iVar3 + 8))) {
          return 0;
        }
      }
    }
    if (((in_ECX[0x16] == 0) || (iVar3 = *(int *)(in_ECX[0x16] + 8), iVar3 == 0)) ||
       ((*(uint *)(iVar3 + 0x1c) >> 0xc & 1) == 0)) {
      cVar2 = (**(code **)(*in_ECX + 0x198))(0);
      if (cVar2 == '\0') {
        if ((in_ECX[0x16] != 0) &&
           (iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))(), iVar3 == 9)) {
          return 0;
        }
        cVar2 = FUN_005e6fa0();
        if (cVar2 == '\0') {
          iVar3 = (**(code **)(*in_ECX + 0x18c))();
          if ((iVar3 != 4) && (iVar3 = (**(code **)(*in_ECX + 0x18c))(), iVar3 != 0)) {
            return 0;
          }
          iVar3 = FUN_005e0380();
          if (iVar3 != 0) {
            FUN_005e0380();
            cVar2 = FUN_00567770();
            if (cVar2 != '\0') {
              return 0;
            }
          }
          fVar5 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x15c))();
          if (fVar5 < (float10)0.0 != (fVar5 == (float10)0.0)) {
            uVar4 = 1;
          }
        }
      }
      return uVar4;
    }
  }
  return 0;
}



void FUN_005ed860(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *in_ECX;
  int *piVar6;
  int iStack_18;
  
  if (((uint)in_ECX[2] >> 0xb & 1) != 0) {
    return;
  }
  iStack_18 = 0x5ed87e;
  (**(code **)(*(int *)in_ECX[0x16] + 0x20))();
  iStack_18 = 0x5ed885;
  cVar1 = FUN_004db4a0();
  if (cVar1 != '\0') {
    iStack_18 = 0;
    (**(code **)(*(int *)in_ECX[0x16] + 0x14))();
  }
  iStack_18 = 0;
  (**(code **)(*(int *)in_ECX[0x16] + 0x18))();
  if (((*(int *)(in_ECX[0x16] + 8) != 0) && ('\x02' < *(char *)(*(int *)(in_ECX[0x16] + 8) + 0x20)))
     && (cVar1 = FUN_00566dc0(in_ECX,0,0xbf800000), cVar1 == '\0')) {
    piVar6 = (int *)0x0;
    if (((*(uint *)(*(int *)(in_ECX[0x16] + 8) + 0x1c) >> 0x17 & 1) != 0) &&
       (iVar2 = FUN_00420840(), iVar2 != 0)) {
      piVar6 = (int *)FUN_00420840();
    }
    uVar3 = FUN_00566a40(in_ECX);
    uVar4 = FUN_00566940(in_ECX);
    FUN_004dd4b0();
    FUN_004d89d0(0x7f7fffff);
    if ((*(int *)(*(int *)(in_ECX[0x16] + 8) + 0x24) == 0) || (iVar2 = FUN_00569740(), iVar2 != 1))
    {
      iStack_18 = *in_ECX;
      uVar5 = FUN_00566b30(&stack0xffffffec,in_ECX);
      (**(code **)(iStack_18 + 0x1cc))(uVar5);
      if (piVar6 != (int *)0x0) {
        FUN_004dd4b0(piVar6,uVar3,uVar4);
        FUN_004d89d0(0x7f7fffff);
        iVar2 = *piVar6;
        uVar3 = FUN_00566b30(&iStack_18,in_ECX);
        (**(code **)(iVar2 + 0x1cc))(uVar3);
      }
    }
    else {
      cVar1 = FUN_004c97f0();
      if ((cVar1 != '\0') &&
         ((piVar6 = (int *)FUN_004cbb20(0x1c,1), piVar6 != (int *)0x0 ||
          (piVar6 = (int *)FUN_004cba50(), piVar6 != (int *)0x0)))) {
        iVar2 = *in_ECX;
        uVar3 = (**(code **)(*piVar6 + 0x174))();
        (**(code **)(iVar2 + 0x1cc))(uVar3);
        FUN_005e6e00();
        return;
      }
    }
  }
  FUN_005e6e00();
  return;
}



void FUN_005eda20(char param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  
  if (param_1 == '\0') {
    iVar2 = (**(code **)(*in_ECX + 0x170))();
    iVar3 = 0;
    if ((iVar2 != 0) && (cVar1 = (**(code **)(*in_ECX + 400))(), cVar1 != '\0')) {
      iVar3 = iVar2;
    }
    for (piVar5 = (int *)(iVar3 + 0x58); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
      iVar3 = *piVar5;
      if (iVar3 != 0) {
        (**(code **)in_ECX[0x17])(iVar3,1);
        (**(code **)(in_ECX[0x17] + 4))(iVar3,in_ECX + 0x1a,1);
      }
    }
    iVar3 = (**(code **)(*in_ECX + 0x268))();
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*in_ECX + 0x268))();
      for (piVar5 = (int *)(iVar3 + 0x3c); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
        iVar3 = *piVar5;
        if (iVar3 != 0) {
          (**(code **)in_ECX[0x17])(iVar3,1);
          (**(code **)(in_ECX[0x17] + 4))(iVar3,in_ECX + 0x1a,1);
        }
      }
    }
    cVar1 = FUN_004d7f80();
    if (((cVar1 != '\0') && (iVar3 = (**(code **)(*in_ECX + 0x170))(), iVar3 != 0)) &&
       (*(int *)(iVar3 + 0xe8) != 0)) {
      cVar1 = FUN_004d7f80();
      if ((cVar1 == '\0') || (iVar3 = (**(code **)(*in_ECX + 0x170))(), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 0xe8);
      }
      piVar5 = (int *)(iVar3 + 0x30);
      if (piVar5 != (int *)0x0) {
        do {
          iVar3 = *piVar5;
          if (iVar3 != 0) {
            (**(code **)in_ECX[0x17])(iVar3,1);
            (**(code **)(in_ECX[0x17] + 4))(iVar3,in_ECX + 0x1a,1);
          }
          piVar5 = (int *)piVar5[1];
        } while (piVar5 != (int *)0x0);
        return;
      }
    }
  }
  else {
    iVar3 = (**(code **)(*in_ECX + 0x170))();
    if (iVar3 != 0) {
      (**(code **)(*in_ECX + 400))();
    }
    FUN_00485e00();
    uVar6 = 0;
    do {
      piVar5 = (int *)FUN_00486790(*(undefined4 *)((int)&DAT_00b1489c + uVar6),0);
      if ((piVar5 == (int *)0x0) ||
         (iVar3 = FUN_009832e6(piVar5[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 4);
      }
      if (iVar3 != 0) {
        if ((undefined4 *)*piVar5 == (undefined4 *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)*piVar5;
        }
        cVar1 = FUN_005e3de0(piVar5[2],uVar4);
        if (cVar1 != '\0') {
          (**(code **)(in_ECX[0x17] + 8))(iVar3 + 0x18,piVar5[2],1);
        }
      }
      if (piVar5 != (int *)0x0) {
        FUN_00484470();
        FUN_00401f20(piVar5);
      }
      uVar6 = uVar6 + 4;
    } while (uVar6 < 0x28);
  }
  return;
}



undefined4 FUN_005edc40(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar1 = (**(code **)(*(int *)(in_ECX + -0x5c) + 0x154))();
  if (iVar1 == 0) {
    return 0;
  }
  if (((in_ECX + -0x5c == DAT_00b333c4) && (iVar1 = FUN_00660110(0), iVar1 != 0)) &&
     (iVar1 = FUN_00660110(0), (*(byte *)(iVar1 + 0x18) & 1) != 0)) {
    iVar1 = FUN_0065d750(1);
  }
  else {
    iVar1 = (**(code **)(*(int *)(in_ECX + -0x5c) + 0x164))();
  }
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x98) != 0)) &&
     ((piVar2 = *(int **)(*(int *)(iVar1 + 0x98) + 0x7c), piVar2 != (int *)0x0 &&
      (piVar2 = (int *)(**(code **)(*piVar2 + 0x4c))("magicNode"), piVar2 != (int *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x005edccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*piVar2 + 8))();
    return uVar3;
  }
  return 0;
}



void FUN_005edce0(float param_1)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  int in_ECX;
  int iVar9;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bd8ab;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar9 = 0;
  local_10 = 0;
  if (param_1 != 0.0) {
    iVar9 = FUN_00419b30(0);
    if (iVar9 != 0) {
      if (*(ushort *)(iVar9 + 0x20) == 0xffff) {
        pcVar5 = *(char **)(iVar9 + 0x1c);
        pcVar1 = pcVar5 + 1;
        do {
          cVar3 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar3 != '\0');
        uVar6 = (int)pcVar5 - (int)pcVar1;
      }
      else {
        uVar6 = (uint)*(ushort *)(iVar9 + 0x20);
      }
      if (uVar6 != 0) {
        local_10 = FUN_0069fd20(iVar9);
      }
    }
  }
  piVar7 = (int *)(**(code **)(*(int *)(in_ECX + 0x5c) + 0x24))(uVar4);
  if ((piVar7 != (int *)0x0) && (local_10 != 0)) {
    FUN_00477ef0();
    (**(code **)(*piVar7 + 0x84))(local_10,1);
    if ((*(int *)(iVar9 + 0x70) != 0) && (DAT_00b333b8 == '\0')) {
      iVar2 = *(int *)(in_ECX + 0x60);
      if (iVar2 != 0) {
        FUN_0069e0b0();
        FUN_00401f20(iVar2);
      }
      *(undefined4 *)(in_ECX + 0x60) = 0;
      param_1 = (float)FUN_00401f00(0x1c);
      uStack_4 = 0;
      if (param_1 == 0.0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_0069e250(*(undefined4 *)(*(int *)(iVar9 + 0x70) + 0xc),piVar7);
      }
      uStack_4 = 0xffffffff;
      *(undefined4 *)(in_ECX + 0x60) = uVar8;
    }
    iVar9 = FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(local_10 + 0xc));
    if (iVar9 == 0) {
      uVar4 = 0;
    }
    else {
      cVar3 = FUN_0055e000("SpecialIdle_Cast",&param_1);
      uVar4 = -(uint)(cVar3 != '\0') & (uint)param_1;
    }
    if (uVar4 != 0) {
      FUN_004715c0(0);
      FUN_006c9ba0(0,0,0x3f800000,0,0,0);
      *(ushort *)(iVar9 + 8) = *(ushort *)(iVar9 + 8) | 8;
      *(undefined4 *)(uVar4 + 0x48) = 0xff7fffff;
      if (*(int *)(in_ECX + 0x60) != 0) {
        param_1 = *(float *)(uVar4 + 0x30) * 0.75;
        FUN_0069dd50(1,param_1);
      }
    }
    if (*(int *)(in_ECX + 0x60) != 0) {
      FUN_0069dda0(0);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005edec0(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [12];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c2746;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff94;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((1 < DAT_00b148cc) && (param_2 == 0)) {
    if (in_ECX == DAT_00b333c4) {
      local_2c = 0;
      local_24 = 0x3f800000;
      local_1c = 0;
      local_14 = 0x3f800000;
    }
    else {
      local_2c = 0x3f800000;
      local_1c = 0x3f800000;
      local_24 = 0;
      local_14 = 0;
    }
    local_10 = 0x3f800000;
    local_18 = 0;
    local_20 = 0x3f800000;
    local_28 = 0;
    iVar2 = (**(code **)(*in_ECX + 0x154))(uVar1);
    if (iVar2 != 0) {
      uVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x310))();
      pfVar4 = (float *)FUN_0053d4b0(&fStack_5c,uVar3);
      fStack_50 = *pfVar4;
      fStack_4c = pfVar4[1];
      fStack_48 = pfVar4[2];
      uVar3 = FUN_005e6a40(auStack_38);
      pfVar4 = (float *)FUN_0053d4b0(&local_2c,uVar3);
      fStack_5c = *pfVar4;
      fStack_58 = pfVar4[1];
      fStack_54 = pfVar4[2];
    }
    fStack_50 = fStack_5c - fStack_50;
    fStack_4c = fStack_58 - fStack_4c;
    fStack_48 = fStack_54 - fStack_48;
    fStack_44 = fStack_50;
    fStack_40 = fStack_4c;
    fStack_3c = fStack_48;
    FUN_0043f350();
    fStack_44 = fStack_50 * 800.0 * 0.1;
    fStack_40 = fStack_4c * 800.0 * 0.1;
    fStack_3c = fStack_48 * 800.0 * 0.1;
    iVar2 = FUN_006fcdc0(&fStack_44,&local_1c);
    *(float *)(iVar2 + 0x54) = fStack_5c;
    *(float *)(iVar2 + 0x58) = fStack_58;
    *(float *)(iVar2 + 0x5c) = fStack_54;
    puVar5 = (undefined4 *)FUN_00401f00(0x1c);
    uStack_4 = 0;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      FUN_006ffd30();
      *puVar5 = &PTR_FUN_00a2fd04;
      *(undefined2 *)(puVar5 + 6) = 8;
    }
    uStack_4 = 0xffffffff;
    *(ushort *)(puVar5 + 6) = *(ushort *)(puVar5 + 6) & 0xffd7 | 0x10;
    FUN_00405680(puVar5);
    puVar5 = (undefined4 *)FUN_00401f00(0x1c);
    uStack_4 = 1;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      FUN_006ffd30();
      *puVar5 = &PTR_FUN_00a2fdb4;
      *(undefined2 *)(puVar5 + 6) = 0xf;
    }
    uStack_4 = 0xffffffff;
    *(ushort *)(puVar5 + 6) = *(ushort *)(puVar5 + 6) & 0xfffe | 2;
    FUN_00405680(puVar5);
    FUN_00440e60(iVar2,_DAT_00b148d4);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ee1b0(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fStack_10;
  float fStack_c;
  
  if ((((DAT_00b42f3e != '\0') && (DAT_00b42e84 != '\0')) && (1 < DAT_00b42f48)) &&
     ((in_ECX != (int *)0xffffffbc && (iVar1 = FUN_00420fc0(), iVar1 != 0)))) {
    iVar1 = *in_ECX;
    iVar2 = FUN_00420fc0();
    (**(code **)(iVar1 + 0x270))(1,*(undefined4 *)(iVar2 + 0xc));
    return;
  }
  fVar3 = (float10)(**(code **)(*in_ECX + 0x288))(0x2e);
  if ((((float10)1 - fVar3 / (float10)100.0 < (float10)0.0) ||
      (fVar3 = (float10)(**(code **)(*in_ECX + 0x288))(0x2e),
      (float10)1 - fVar3 / (float10)100.0 <= (float10)1)) &&
     (fVar3 = (float10)(**(code **)(*in_ECX + 0x288))(0x2e),
     (float10)0 <= (float10)1 - fVar3 / (float10)100.0)) {
    (**(code **)(*in_ECX + 0x288))(0x2e);
  }
  iVar1 = (**(code **)(*in_ECX + 0x284))(0x2f);
  if ((float)iVar1 <= 0.0) {
    fVar4 = 1.0;
  }
  else {
    fVar4 = 0.0;
  }
  fVar5 = 1.0;
  fStack_10 = 1.0;
  if ((in_ECX[0x16] != 0) && (iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), iVar2 == 0)) {
    fVar3 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x430))();
    fStack_10 = (float)fVar3;
    fVar5 = (float)((int *)in_ECX[0x16])[0xb0];
    iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x47c))();
    if (iVar2 == 2) {
      fVar4 = 1.0;
    }
  }
  fStack_10 = fVar4 * fStack_c * fVar5 * fStack_10;
  if (in_ECX == DAT_00b333c4) {
    if (((float)iVar1 > 0.0) && (fStack_10 < _DAT_00b38000)) {
      fStack_10 = _DAT_00b38000;
    }
    fStack_10 = _DAT_00b14e50 * fStack_10;
  }
  if (in_ECX == DAT_00b3bb00) {
    fStack_10 = _DAT_00b14e54;
  }
  (**(code **)(*in_ECX + 0x324))(fStack_10);
  return;
}



void FUN_005ee510(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  byte bVar5;
  
  if ((param_1 != 0) && (in_ECX[-4] != 0)) {
    iVar3 = FUN_0041b950(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x1c) + 0x98));
    if (iVar3 != 0) {
      iVar1 = *(int *)in_ECX[-4];
      uVar4 = (**(code **)(*in_ECX + 8))(iVar3);
      cVar2 = (**(code **)(iVar1 + 0x44c))(uVar4);
      if (cVar2 == '\0') {
        (**(code **)(*(int *)in_ECX[-4] + 0x450))();
      }
    }
    iVar3 = FUN_0041b9a0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x1c) + 0x98));
    if (iVar3 != 0) {
      iVar1 = *(int *)in_ECX[-4];
      uVar4 = (**(code **)(*in_ECX + 8))(iVar3);
      cVar2 = (**(code **)(iVar1 + 0x44c))(uVar4);
      if ((cVar2 != '\0') && (cVar2 = FUN_00679340(in_ECX + -0x1a,iVar3), cVar2 != '\0')) {
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 6;
      }
    }
    bVar5 = 0;
    iVar3 = FUN_009832e6(*(undefined4 *)(param_1 + 8),0,&PTR_PTR_00b03280,&PTR_PTR_00b0373c,0);
    if (iVar3 == 0) {
      iVar3 = FUN_009832e6(*(undefined4 *)(param_1 + 8),0,&PTR_PTR_00b03280,&PTR_PTR_00b0320c,0);
      if (iVar3 != 0) {
        bVar5 = FUN_00484320();
      }
    }
    else {
      bVar5 = *(byte *)(iVar3 + 0x7c) >> 1 & 1;
    }
    cVar2 = FUN_00413470();
    if (((cVar2 != '\0') && (*(int *)(param_1 + 0x28) != 4)) && (bVar5 == 0)) {
      FUN_005e70f0(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x1c) + 0x98) == 0x434e4c53,1);
    }
  }
  return;
}



float * FUN_005ee660(float *param_1)

{
  int *piVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int *in_ECX;
  float10 fVar7;
  
  iVar5 = (**(code **)(*in_ECX + 0x168))();
  fVar3 = DAT_00b3f9ac;
  *param_1 = DAT_00b3f9a8;
  fVar4 = DAT_00b3f9b0;
  param_1[1] = fVar3;
  param_1[2] = fVar4;
  if (iVar5 != 0) {
    iVar5 = FUN_00477ec0(0);
    if (iVar5 != 0) goto LAB_005ee6e9;
  }
  iVar5 = (**(code **)(*in_ECX + 0x154))();
  if (iVar5 != 0) {
    iVar5 = FUN_00700010(&DAT_00b3cac0);
    if ((iVar5 != 0) && (piVar1 = *(int **)(iVar5 + 0x7c), piVar1 != (int *)0x0)) {
      iVar5 = (**(code **)(*piVar1 + 0x4c))("Bip01 Head");
      if (iVar5 == 0) {
        iVar5 = (**(code **)(*piVar1 + 0x4c))("Bip02 Head");
        if (iVar5 == 0) goto LAB_005ee713;
      }
LAB_005ee6e9:
      *param_1 = *(float *)(iVar5 + 0x88) + *param_1;
      param_1[1] = *(float *)(iVar5 + 0x8c) + param_1[1];
      param_1[2] = *(float *)(iVar5 + 0x90) + param_1[2];
      return param_1;
    }
  }
LAB_005ee713:
  fVar7 = (float10)FUN_005e0660();
  pcVar2 = *(code **)(*in_ECX + 0x174);
  param_1[2] = (float)(fVar7 * (float10)0.8999999761581421 + (float10)param_1[2]);
  pfVar6 = (float *)(*pcVar2)();
  *param_1 = *pfVar6 + *param_1;
  param_1[1] = pfVar6[1] + param_1[1];
  param_1[2] = pfVar6[2] + param_1[2];
  return param_1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ee760(int *param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *in_ECX;
  int iVar11;
  int *unaff_FS_OFFSET;
  undefined2 in_FPUControlWord;
  float10 fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  undefined1 auStack_124 [4];
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  int *local_cc;
  int *piStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float afStack_b8 [6];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
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
  int iStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009c2797;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_124;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffed0;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_f8 = (float)in_ECX[0xf];
  local_cc = param_1;
  local_120 = (float)param_5;
  cVar3 = FUN_0041df00(uVar4);
  if (cVar3 != '\0') goto LAB_005ef8ff;
  local_f4 = (float)FUN_006f94a0(local_f8,PTR_s_Bip01_Spine1_00b11a6c);
  iVar5 = (**(code **)(*param_1 + 0x154))();
  if (iVar5 != 0) {
    pfVar6 = (float *)FUN_0053d4b0(&fStack_60,param_4);
    fStack_e0 = *pfVar6;
    fStack_dc = pfVar6[1];
    fStack_d8 = pfVar6[2];
    pfVar6 = (float *)FUN_0053d4b0(&fStack_60,local_120);
    fStack_c4 = *pfVar6;
    fStack_c0 = pfVar6[1];
    fStack_bc = pfVar6[2];
    param_1 = local_cc;
  }
  local_120 = fStack_c4 - fStack_e0;
  fStack_110 = fStack_c0 - fStack_dc;
  fStack_e4 = fStack_bc - fStack_d8;
  fStack_ec = local_120;
  fStack_e8 = fStack_110;
  fStack_e0 = local_120;
  fStack_dc = fStack_110;
  fStack_d8 = fStack_e4;
  fStack_d0 = fStack_e4;
  FUN_0043f350();
  fVar13 = local_f4;
  if (local_f4 != 0.0) {
    if (100.0 < param_2) {
      param_2 = 100.0;
    }
    fStack_fc = (_DAT_00b11a4c - _DAT_00b11a44) * param_2 * 0.01 + _DAT_00b11a44;
    local_120 = _DAT_00b11a5c - _DAT_00b11a54;
    fStack_d0 = param_3 * local_120 + _DAT_00b11a54;
    if (param_3 <= 75.0) {
      if (fStack_fc == 0.0) goto LAB_005ee93d;
    }
    else {
      fStack_fc = 0.0;
LAB_005ee93d:
      if (fStack_d0 == 0.0) goto LAB_005eed87;
    }
    fStack_118 = (float)CONCAT31(fStack_118._1_3_,1);
    if (in_ECX == DAT_00b333c4) {
      fStack_118 = (float)CONCAT31(fStack_118._1_3_,(char)in_ECX[0x162]);
    }
    cVar3 = (**(code **)(*in_ECX + 0x19c))();
    if ((cVar3 == '\0') && (fStack_118._0_1_ != '\0')) {
      fStack_10c = (float)((uint)fStack_10c & 0xffffff00);
      iVar5 = FUN_0065a2c0();
      if (iVar5 != 0) {
        fStack_10c = (float)(CONCAT31(fStack_10c._1_3_,*(undefined1 *)(iVar5 + 500)) & 0xffffff01);
      }
      FUN_008ab040(fVar13,0,fStack_10c);
    }
    if (fStack_fc != 0.0) {
      afStack_b8[0] = fStack_ec * fStack_fc;
      fStack_10c = fStack_e8 * fStack_fc;
      fStack_f0 = fStack_fc * fStack_e4;
      if (0 < DAT_00b148cc) {
        if (param_1 == DAT_00b333c4) {
          afStack_b8[1] = 0.0;
          fStack_50 = 0.0;
          afStack_b8[3] = 1.0;
          fStack_48 = 1.0;
        }
        else {
          afStack_b8[1] = 1.0;
          fStack_50 = 1.0;
          afStack_b8[3] = 0.0;
          fStack_48 = 0.0;
        }
        uStack_44 = 0x3f800000;
        fStack_4c = 0.0;
        afStack_b8[4] = 1.0;
        afStack_b8[2] = 0.0;
        local_120 = afStack_b8[0] * 0.1;
        fStack_110 = fStack_10c * 0.1;
        fStack_114 = fStack_f0 * 0.1;
        fStack_60 = local_120;
        fStack_5c = fStack_110;
        fStack_58 = fStack_114;
        iVar5 = FUN_006fcdc0(&fStack_60,&fStack_50);
        *(float *)(iVar5 + 0x54) = fStack_c4;
        *(float *)(iVar5 + 0x58) = fStack_c0;
        *(float *)(iVar5 + 0x5c) = fStack_bc;
        fStack_11c = (float)FUN_00401f00(0x1c);
        uStack_14 = 0;
        if (fStack_11c == 0.0) {
          iVar7 = 0;
        }
        else {
          iVar7 = FUN_00405990();
        }
        *(ushort *)(iVar7 + 0x18) = *(ushort *)(iVar7 + 0x18) & 0xffd7 | 0x10;
        uStack_14 = 0xffffffff;
        FUN_00405680();
        fStack_11c = (float)FUN_00401f00();
        uStack_14 = 1;
        if (fStack_11c == 0.0) {
          iVar7 = 0;
        }
        else {
          iVar7 = FUN_00405a00();
        }
        uStack_14 = 0xffffffff;
        *(ushort *)(iVar7 + 0x18) = *(ushort *)(iVar7 + 0x18) & 0xfffe | 2;
        FUN_00405680();
        FUN_00440e60(iVar5,_DAT_00b148d4);
        param_1 = local_cc;
      }
      if (fStack_118._0_1_ != '\0') {
        fStack_40 = afStack_b8[0];
        fStack_3c = fStack_10c;
        fStack_38 = fStack_f0;
        fStack_60 = fStack_c4 * 0.14287673;
        fStack_5c = fStack_c0 * 0.14287673;
        fStack_58 = fStack_bc * 0.14287673;
        uStack_44 = 0x41f00000;
        fStack_50 = fStack_60;
        fStack_4c = fStack_5c;
        fStack_48 = fStack_58;
        iVar5 = FUN_008afd70(local_f8,&fStack_50,0);
        if ((((iVar5 != 0) && (iVar5 = FUN_0047fa60(), iVar5 != 0)) &&
            (iVar5 = FUN_00452a60(), iVar5 != 0)) ||
           (iVar5 = FUN_006f94a0(local_f8,PTR_s_Bip01_Spine2_00b11a64), iVar5 != 0)) {
          FUN_005e14c0("Hit At %s\r\n",*(undefined4 *)(iVar5 + 8));
        }
        FUN_008b8410(local_f4,&fStack_40,iVar5);
        param_1 = local_cc;
      }
    }
    if ((fStack_d0 != 0.0) && (fStack_118._0_1_ != '\0')) {
      fStack_ec = fStack_ec + 1.0;
      fStack_e8 = fStack_e8 + 1.0;
      FUN_0043f350();
      fStack_114 = fStack_fc * fStack_ec;
      local_120 = fStack_e8 * fStack_fc;
      fStack_110 = fStack_fc * fStack_e4;
      fStack_60 = fStack_114;
      fStack_5c = local_120;
      fStack_58 = fStack_110;
      uVar8 = FUN_004d96f0(local_f8,"Bip01 L Forearm");
      FUN_008b8410(local_f4,&fStack_60,uVar8);
    }
  }
LAB_005eed87:
  cVar3 = FUN_005e1b30();
  if (cVar3 != '\0') {
    fStack_f0 = param_2;
    fStack_10c = _DAT_00b148dc;
    if (_DAT_00b148dc < 1.0) {
      fStack_10c = 1.0;
    }
    if (((fStack_10c < param_2) &&
        (((DAT_00b333b8 == '\0' && (DAT_00b3b914 <= DAT_00b148e4)) ||
         ((in_ECX == DAT_00b333c4 || (param_1 == DAT_00b333c4)))))) &&
       ((iVar5 = (**(code **)(*in_ECX + 0x154))(), iVar5 != 0 &&
        (iVar5 = (**(code **)(*param_1 + 0x154))(), iVar5 != 0)))) {
      fVar12 = (float10)FUN_005e0660();
      fStack_110 = (float)(fVar12 * (float10)0.5);
      fStack_114 = fStack_110 * DAT_00b258e8;
      local_120 = fStack_110 * DAT_00b258ec;
      fStack_110 = fStack_110 * DAT_00b258f0;
      iVar5 = (**(code **)(*in_ECX + 0x154))();
      local_f4 = fStack_114 + *(float *)(iVar5 + 0x88);
      local_f8 = *(float *)(iVar5 + 0x8c) + local_120;
      fStack_fc = *(float *)(iVar5 + 0x90) + fStack_110;
      afStack_b8[5] = local_f4;
      fStack_a0 = local_f8;
      fStack_9c = fStack_fc;
      fVar12 = (float10)FUN_005e0660();
      fStack_118 = (float)(fVar12 * (float10)0.5);
      fStack_114 = fStack_118 * DAT_00b258e8;
      local_120 = fStack_118 * DAT_00b258ec;
      fStack_118 = fStack_118 * DAT_00b258f0;
      iVar5 = (**(code **)(*param_1 + 0x154))();
      fStack_d0 = fStack_114 + *(float *)(iVar5 + 0x88);
      fStack_110 = *(float *)(iVar5 + 0x8c) + local_120;
      local_120 = *(float *)(iVar5 + 0x90) + fStack_118;
      if (fStack_10c < param_2) {
        fStack_114 = (local_f4 - fStack_d0) * 2.0;
        fStack_118 = (local_f8 - fStack_110) * 2.0;
        fStack_98 = (fStack_fc - local_120) * 2.0;
        do {
          fVar12 = (float10)FUN_0047e060(0xbf4ccccd,0x3f4ccccd);
          fStack_e0 = (float)fVar12;
          fVar12 = (float10)FUN_0047e060(0xbf4ccccd);
          fStack_dc = (float)fVar12;
          fVar12 = (float10)FUN_0047e060();
          fStack_d8 = (float)fVar12;
          fStack_108 = fStack_114 + fStack_e0;
          fStack_104 = fStack_118 + fStack_dc;
          fStack_11c = fStack_98 + fStack_d8;
          fStack_100 = fStack_11c;
          fStack_ec = fStack_108;
          fStack_e8 = fStack_104;
          fStack_e4 = fStack_11c;
          fStack_d4 = fStack_104;
          piStack_c8 = (int *)fStack_108;
          FUN_0043f350();
          iVar5 = FUN_005e1bb0();
          if ((iVar5 != 0) && (pcVar9 = (char *)FUN_005e1bb0(), *pcVar9 != '\0')) {
            uVar21 = 0xffffffff;
            uVar20 = 0;
            uVar8 = FUN_005e1bb0(0);
            fVar13 = afStack_b8[5];
            fVar15 = fStack_a0;
            fVar16 = fStack_9c;
            fVar17 = fStack_ec;
            fVar18 = fStack_e8;
            fVar19 = fStack_e4;
            FUN_006ecc80(afStack_b8[5],fStack_a0,fStack_9c,fStack_ec,fStack_e8,fStack_e4,uVar8);
            FUN_004d3b10(fVar13,fVar15,fVar16,fVar17,fVar18,fVar19,uVar8,uVar20,uVar21);
          }
          iVar5 = FUN_005e1bf0();
          if ((iVar5 != 0) && (pcVar9 = (char *)FUN_005e1bf0(), *pcVar9 != '\0')) {
            FUN_006ecc80();
            uVar8 = FUN_004c9be0();
            uVar21 = CONCAT44(3,uVar8);
            FUN_006ecc80(uVar8);
            uVar8 = FUN_00441800(uVar21);
            iStack_64 = FUN_00401f00();
            uStack_14 = 2;
            if (iStack_64 != 0) {
              fStack_11c = fStack_c4 - local_f4;
              fStack_d4 = fStack_c0 - local_f8;
              piStack_c8 = (int *)(fStack_bc - fStack_fc);
              fStack_60 = fStack_11c;
              fStack_5c = fStack_d4;
              fStack_58 = (float)piStack_c8;
              pfVar6 = (float *)FUN_004bf9b0(&fStack_50,0x40c00000);
              fVar13 = local_f4 + *pfVar6;
              fVar15 = pfVar6[1] + local_f8;
              fVar16 = pfVar6[2] + fStack_fc;
              uVar21 = 0x3f800000;
              fVar17 = fStack_ec;
              fVar18 = fStack_e8;
              fVar19 = fStack_e4;
              fStack_11c = fVar13;
              fStack_d4 = fVar15;
              piStack_c8 = (int *)fVar16;
              fStack_94 = fVar13;
              fStack_90 = fVar15;
              fStack_8c = fVar16;
              uVar20 = FUN_005e1bf0(fStack_ec,fStack_e8,fStack_e4,fVar13,fVar15,fVar16,0x3f800000);
              uVar14 = 0x3f800000;
              uVar10 = FUN_006ecc80(0x3f800000,uVar8,uVar20);
              FUN_005713f0(uVar10,uVar14,uVar8,uVar20,fVar17,fVar18,fVar19,fVar13,fVar15,fVar16,
                           uVar21);
            }
            uStack_14 = 0xffffffff;
            FUN_00678d30();
            param_1 = local_cc;
          }
          fStack_f0 = fStack_f0 * 0.25;
        } while (fStack_10c < fStack_f0);
      }
      piVar1 = (int *)param_1[0x16];
      afStack_b8[0] = -NAN;
      piStack_c8 = piVar1;
      iVar5 = (**(code **)(*in_ECX + 0x154))();
      fStack_f0 = param_2;
      if (iVar5 != 0) {
        pfVar6 = (float *)(**(code **)(*in_ECX + 0x174))();
        fStack_108 = *pfVar6 + 20.0;
        fStack_104 = pfVar6[1] + 20.0;
        fStack_100 = pfVar6[2] + 20.0;
        if (fStack_10c < param_2) {
          afStack_b8[5] = fStack_108 - local_f4;
          fStack_a0 = fStack_104 - local_f8;
          fStack_9c = fStack_100 - fStack_fc;
          do {
            fVar12 = (float10)FUN_0047e060(0xbecccccd,0x3ecccccd);
            fStack_94 = (float)fVar12;
            fVar12 = (float10)FUN_0047e0b0();
            fStack_90 = (float)fVar12;
            fVar12 = (float10)FUN_0047e060(0xbecccccd);
            fStack_8c = (float)fVar12;
            fStack_70 = fStack_94 * 10.0;
            fStack_6c = fStack_90 * 10.0;
            fStack_68 = fStack_8c * 10.0;
            fStack_7c = afStack_b8[5] + fStack_70;
            fStack_78 = fStack_a0 + fStack_6c;
            fStack_74 = fStack_9c + fStack_68;
            fStack_88 = fStack_7c * 0.5;
            fStack_84 = fStack_78 * 0.5;
            fStack_80 = fStack_74 * 0.5;
            fStack_e0 = fStack_88 + local_f4;
            fStack_dc = fStack_84 + local_f8;
            fStack_d8 = fStack_80 + fStack_fc;
            fVar12 = (float10)FUN_0047e0b0();
            fStack_11c = (float)fVar12;
            fStack_40 = fStack_d0 - fStack_e0;
            fStack_3c = fStack_110 - fStack_dc;
            fStack_38 = local_120 - fStack_d8;
            fStack_108 = fStack_40 * 0.25;
            fStack_104 = fStack_3c * 0.25;
            fStack_100 = fStack_38 * 0.25;
            FUN_0043f350();
            fStack_50 = fStack_108 * 32.0;
            fStack_4c = fStack_104 * 32.0;
            fStack_48 = fStack_100 * 32.0;
            fStack_60 = fStack_e0 - fStack_50;
            fStack_5c = fStack_dc - fStack_4c;
            fStack_58 = fStack_d8 - fStack_48;
            fVar12 = (float10)FUN_0047e0b0();
            fStack_d4 = (float)fVar12;
            iVar7 = FUN_005e1bb0();
            if ((iVar7 != 0) && (pcVar9 = (char *)FUN_005e1bb0(), *pcVar9 != '\0')) {
              fVar12 = (float10)FUN_00985a00((double)fStack_11c);
              fStack_118 = (float)CONCAT22(fStack_118._2_2_,in_FPUControlWord);
              pfVar6 = afStack_b8;
              fStack_11c = (float)(int)ROUND(fVar12);
              uVar22 = CONCAT44(fStack_11c,fStack_d4) & 0xffffffffff;
              uVar20 = 0;
              iVar7 = iVar5;
              uVar8 = FUN_005e1bb0(iVar5,pfVar6,0);
              fVar13 = fStack_60;
              fVar15 = fStack_5c;
              fVar16 = fStack_58;
              fVar17 = fStack_108;
              fVar18 = fStack_104;
              fVar19 = fStack_100;
              FUN_006ecc80(fStack_60,fStack_5c,fStack_58,fStack_108,fStack_104,fStack_100,uVar8);
              FUN_004cf1a0(fVar13,fVar15,fVar16,fVar17,fVar18,fVar19,uVar8,iVar7,pfVar6,uVar20,
                           uVar22);
            }
            fStack_f0 = fStack_f0 * 0.25;
          } while (fStack_10c < fStack_f0);
        }
      }
      iVar5 = FUN_005e1bb0();
      if (((iVar5 != 0) && (pcVar9 = (char *)FUN_005e1bb0(), *pcVar9 != '\0')) &&
         (cVar3 = (**(code **)(*piVar1 + 0x138))(), piVar2 = local_cc, cVar3 == '\0')) {
        iVar5 = *piVar1;
        (**(code **)(*local_cc + 0x168))();
        iVar5 = (**(code **)(iVar5 + 0x118))();
        if ((fStack_10c < param_2) && (iVar5 != 0)) {
          FUN_0047e0b0();
          fVar12 = (float10)FUN_004842f0();
          fStack_118 = (float)CONCAT22(fStack_118._2_2_,in_FPUControlWord);
          fStack_11c = (float)(int)ROUND(fVar12);
          local_120 = (float)CONCAT31(local_120._1_3_,fStack_11c._0_1_);
          fVar12 = (float10)FUN_0047e0b0();
          fStack_110 = (float)fVar12;
          if (piVar2 == DAT_00b333c4) {
            FUN_006600d0(1);
            iVar7 = FUN_00477ec0();
            fStack_60 = fStack_c4 - *(float *)(iVar7 + 0x88);
            fStack_5c = fStack_c0 - *(float *)(iVar7 + 0x8c);
            fStack_58 = fStack_bc - *(float *)(iVar7 + 0x90);
            uVar8 = FUN_004bf9b0(&fStack_50,0x40000000);
            pfVar6 = (float *)FUN_0047d9b0(&fStack_60,uVar8);
            fStack_108 = *pfVar6;
            fStack_104 = pfVar6[1];
            fStack_100 = pfVar6[2];
            iVar11 = iVar5;
            if ((char)DAT_00b333c4[0x162] == '\0') {
              iVar11 = iVar7;
              iVar7 = iVar5;
            }
            fStack_60 = -fStack_ec;
            pfVar6 = afStack_b8;
            fStack_5c = -fStack_e8;
            fStack_58 = -fStack_e4;
            uVar21 = CONCAT44(local_120,fStack_110);
            uVar8 = FUN_005e1bb0(iVar11,pfVar6,iVar7,fStack_110,local_120);
            fVar13 = fStack_108;
            iVar5 = iVar11;
          }
          else {
            fStack_60 = fStack_c4 - *(float *)(iVar5 + 0x88);
            fStack_5c = fStack_c0 - *(float *)(iVar5 + 0x8c);
            fStack_58 = fStack_bc - *(float *)(iVar5 + 0x90);
            uVar8 = FUN_004bf9b0(&fStack_c4,0x40000000);
            pfVar6 = (float *)FUN_0047d9b0(afStack_b8 + 1,uVar8);
            fStack_60 = -fStack_ec;
            fStack_104 = pfVar6[1];
            fVar13 = *pfVar6;
            fStack_100 = pfVar6[2];
            fStack_5c = -fStack_e8;
            fStack_58 = -fStack_e4;
            pfVar6 = afStack_b8;
            uVar21 = CONCAT44(local_120,fStack_110);
            iVar7 = 0;
            uVar8 = FUN_005e1bb0(iVar5,pfVar6,0,fStack_110,local_120);
          }
          fVar15 = fStack_104;
          fVar16 = fStack_100;
          fVar17 = fStack_60;
          fVar18 = fStack_5c;
          fVar19 = fStack_58;
          FUN_006ecc80(fVar13,fStack_104,fStack_100,fStack_60,fStack_5c,fStack_58,uVar8);
          FUN_004cf1a0(fVar13,fVar15,fVar16,fVar17,fVar18,fVar19,uVar8,iVar5,pfVar6,iVar7,uVar21);
        }
      }
    }
  }
LAB_005ef8ff:
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_005ef930(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = *(int **)(in_ECX + 0x58);
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0x33c))(0);
    if (iVar1 != 0) {
      (**(code **)(*piVar2 + 0x344))(0);
      (**(code **)(*piVar2 + 0x204))(0);
      FUN_0065da10();
    }
  }
  if (*(int *)(in_ECX + 0x58) != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x58) + 0xe8))();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x78))(0x3f400000,0,1,1,1,0);
    }
  }
  return;
}



undefined4 FUN_005ef9b0(char param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x3c) != 0) {
    iVar2 = FUN_006f94a0(*(int *)(in_ECX + 0x3c),"Weapon",uVar1);
    if (iVar2 != 0) {
      if (param_1 == '\0') {
        FUN_00435ce0(0);
      }
      else if (*(int *)(iVar2 + 0xa8) == 0) {
        iVar3 = (**(code **)(**(int **)(in_ECX + 0x58) + 0xec))(1);
        if (iVar3 != 0) {
          iVar3 = (**(code **)(**(int **)(in_ECX + 0x58) + 0xec))(1);
          fVar5 = (float10)FUN_00547540(*(undefined4 *)(*(int *)(iVar3 + 8) + 0x98));
          iVar3 = FUN_00401f00(0x28);
          puStack_8 = (undefined1 *)0x0;
          if (iVar3 != 0) {
            uVar4 = FUN_0053a130((float)(fVar5 - (float10)24.0),0x40400000,iVar2,0);
            *unaff_FS_OFFSET = in_ECX;
            return uVar4;
          }
          *unaff_FS_OFFSET = in_ECX;
          return 0;
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_005efae0(undefined4 param_1,float param_2,uint param_3)

{
  float fVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  int *in_ECX;
  int *piVar11;
  float10 fVar12;
  float unaff_retaddr;
  float fStack_28;
  float fStack_10;
  
  iVar9 = (int)param_2;
  cVar2 = FUN_005e6c10();
  if ((cVar2 != '\0') && ((param_3 & 0x3f) == 0)) {
    return 0.0;
  }
  if (in_ECX[0x16] != 0) {
    piVar11 = (int *)0x0;
    iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x40c))();
    if (iVar4 != 0) {
      piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x40c))();
      iVar4 = (**(code **)(*piVar5 + 4))();
      if (iVar4 == 2) {
        piVar11 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x40c))();
      }
    }
    iVar4 = FUN_0065a2c0();
    if (iVar4 != 0) {
      if (((piVar11 != (int *)0x0) && (cVar2 = (**(code **)(*piVar11 + 0xc))(), cVar2 == '\0')) &&
         (cVar2 = FUN_005e1550(), cVar2 != '\0')) {
        iVar6 = FUN_0068b3f0();
        fStack_10 = *(float *)(iVar6 + 8);
        iVar6 = (**(code **)(*in_ECX + 0x174))();
        fVar8 = *(float *)(iVar6 + 8);
        FUN_0043f350();
        FUN_0065a650((fVar8 - fStack_10) * 1.5707964);
      }
      iVar6 = FUN_0088d370();
      if ((iVar6 == 5) && (iVar6 = (**(code **)(*in_ECX + 0x388))(), iVar6 != 0)) {
        if (*(float *)((int)param_2 + 4) <= 0.0) {
          uVar7 = 0x3e32b8c2;
        }
        else {
          uVar7 = 0xbe32b8c2;
        }
        FUN_0065a650(uVar7);
      }
      iVar4 = *(int *)(iVar4 + 0x368);
      if (iVar4 != 0) {
        param_2 = 0.0;
        uVar7 = (**(code **)(*in_ECX + 0x174))();
        fVar12 = (float10)FUN_004d7e30(uVar7);
        fStack_28 = (float)fVar12;
        uVar7 = (**(code **)(*in_ECX + 0x154))(*(undefined4 *)(DAT_00b333cc + 0xdc));
        cVar2 = FUN_0047f7b0(uVar7);
        if (cVar2 == '\0') {
          fStack_28 = fStack_28 + 1000.0;
        }
        if (1000.0 < fStack_28) {
          if (4096.0 <= fStack_28) {
            if (8192.0 <= fStack_28) {
              param_2 = 50.0;
            }
            else {
              param_2 = 25.0;
            }
          }
          else {
            param_2 = 10.0;
          }
        }
        *(float *)(iVar4 + 0x60) = param_2 * 0.14287673;
      }
    }
  }
  fVar8 = (float)FUN_0065af30(param_1,iVar9,param_3);
  if ((fVar8 != 0.0) && ((*(uint *)((int)fVar8 + 500) >> 7 & 1) != 0)) {
    *(uint *)((int)fVar8 + 500) = *(uint *)((int)fVar8 + 500) & 0xffffff7f;
    fVar1 = *(float *)((int)fVar8 + 800);
    *(undefined4 *)((int)fVar8 + 800) = 0;
    if (_DAT_00b37478 < fVar1 != (_DAT_00b37478 == fVar1)) {
      piVar11 = (int *)(**(code **)(*in_ECX + 0x388))();
      if ((piVar11 != (int *)0x0) && (iVar9 = FUN_0065a2c0(), iVar9 != 0)) {
        FUN_0065a2c0();
      }
      cVar2 = '\0';
      iVar9 = (**(code **)(*in_ECX + 0x170))();
      if ((((iVar9 == 0) || (cVar3 = (**(code **)(*in_ECX + 400))(), cVar3 == '\0')) ||
          (cVar2 = FUN_00519ce0(), cVar2 == '\0')) &&
         ((iVar9 = (**(code **)(*in_ECX + 0x380))(), iVar9 == 0 &&
          (iVar9 = (**(code **)(*in_ECX + 0x18c))(), iVar9 != 0)))) {
        cVar2 = '\x01';
      }
      iVar9 = (**(code **)(*in_ECX + 0x380))();
      if ((iVar9 == 0) && (cVar2 == '\0')) {
        (**(code **)(*in_ECX + 0x39c))(0x1a,1,0);
        (**(code **)(*in_ECX + 0x220))(unaff_retaddr,0,0);
        FUN_005e70f0(1,1);
        if ((piVar11 != (int *)0x0) && (pfVar10 = (float *)FUN_00403c00(), 0.0 < *pfVar10)) {
          (**(code **)(*piVar11 + 0x39c))(0x1a,1,0);
          iVar9 = *piVar11;
          pfVar10 = (float *)FUN_00403c00();
          (**(code **)(iVar9 + 0x220))(unaff_retaddr * *pfVar10,0,0);
          FUN_005e70f0(1,1);
          return fStack_10;
        }
      }
      return fVar8;
    }
  }
  return fVar8;
}



void FUN_005eff30(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  if ((((((in_ECX[0x16] != 0) && (iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))(), iVar2 != 0)
         ) && (*(char *)(iVar2 + 0x20) == '\x10')) &&
       ((in_ECX[0x16] != 0 && (iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))(), iVar2 != 0))))
      && ((*(int *)(iVar2 + 0x58) != 0 || (*(int *)(iVar2 + 0x54) != 0)))) &&
     ((FUN_00627d60(param_1), *(int *)(iVar2 + 0x58) == 0 && (*(int *)(iVar2 + 0x54) == 0)))) {
    cVar1 = (**(code **)(*in_ECX + 0x334))(1);
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0x340))(0);
      return;
    }
    FUN_005eae70();
  }
  return;
}



void FUN_005effd0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  bool bVar4;
  
  if (in_ECX[0x16] == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))();
  }
  if (iVar1 == 3) {
    if (in_ECX[0x16] == 0) {
      return;
    }
    iVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1);
    if ((iVar1 == 0) ||
       (iVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0xec))(1),
       *(char *)(*(int *)(iVar1 + 8) + 0x90) != '\x05')) goto LAB_005f018e;
  }
  else if (iVar1 != 5) {
    if (iVar1 != 6) goto LAB_005f018e;
    if (param_1 == 2) {
      if (param_2 != 0) {
        iVar1 = FUN_0051ac70();
        bVar4 = iVar1 == 0x1d;
        goto LAB_005f0028;
      }
    }
    else {
      bVar4 = param_1 == 6;
LAB_005f0028:
      if ((bVar4) ||
         ((param_2 != 0 && (iVar1 = FUN_0051ac70(), *(int *)(&DAT_00b102e8 + iVar1 * 0x24) == 1))))
      goto LAB_005f018e;
    }
    iVar1 = FUN_004d8370();
    if ((iVar1 != 0) && (FUN_00470fc0(1,0), in_ECX == DAT_00b333c4)) {
      FUN_0065d750(1);
      FUN_00470fc0(1,0);
    }
    goto LAB_005f018e;
  }
  if (in_ECX[0x16] == 0) {
    return;
  }
  iVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))();
  if ((iVar1 != 5) || (param_1 == 3)) {
    if (in_ECX[0x16] == 0) {
      return;
    }
    iVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))();
    if (((iVar1 != 3) || (param_1 == -1)) || (param_1 == 2)) goto LAB_005f018e;
  }
  uVar2 = (**(code **)(*in_ECX + 0x168))();
  iVar1 = 1;
  if (in_ECX != DAT_00b333c4) goto LAB_005f016a;
  iVar1 = 2;
  do {
    if ((in_ECX == DAT_00b333c4) && (iVar1 == 1)) {
      uVar2 = FUN_006600d0((char)DAT_00b333c4[0x162]);
    }
LAB_005f016a:
    iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 300))(uVar2);
    if (iVar3 != 0) {
      FUN_00477ef0();
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
LAB_005f018e:
  if (in_ECX[0x16] != 0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x2d8))(param_1,param_2);
  }
  return;
}


