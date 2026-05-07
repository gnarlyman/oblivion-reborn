
undefined4 * FUN_004a0090(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0xe8,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0070b780(0);
    puVar2[0x39] = 0x42c80000;
    *puVar2 = &PTR_LAB_00a3f894;
    *(undefined1 *)((int)puVar2 + 0xdd) = 0;
    puVar2[0x38] = 0x488a9800;
    *(undefined1 *)(puVar2 + 0x37) = 0;
  }
  local_4 = 0xffffffff;
  FUN_0070ac60(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_004a01b0(uint param_1)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0xec) != 1) && (param_1 != *(byte *)(in_ECX + 0xec))) {
    *(char *)(in_ECX + 0xec) = (char)param_1;
  }
  return;
}



void FUN_004a0200(void)

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
  in_ECX[3] = 0x3f800000;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a3fa3c;
  FUN_00721440(&DAT_00a3fa90);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a0270(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3f944;
  FUN_0070b810();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a02a0(float param_1,float param_2)

{
  float fVar1;
  int in_ECX;
  
  fVar1 = (float)_DAT_00b07280;
  if ((param_1 < fVar1) && (param_1 = fVar1, param_2 < fVar1 * 1.25)) {
    param_2 = fVar1 * 1.25;
  }
  *(float *)(in_ECX + 0xe0) = param_1 * param_1;
  *(float *)(in_ECX + 0xe4) = param_2 * param_2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a0300(int param_1,float param_2)

{
  float fVar1;
  undefined2 extraout_var;
  uint3 uVar2;
  int in_ECX;
  float10 fVar3;
  float local_10;
  
  local_10 = *(float *)(param_1 + 0x120);
  if (*(char *)(in_ECX + 0xec) == '\x03') {
    local_10 = local_10 / (_DAT_00b0762c * _DAT_00b075f0);
  }
  fVar3 = (float10)FUN_00982c30();
  param_2 = ((float)fVar3 - *(float *)(in_ECX + 0x2c)) * param_2;
  if (param_2 < 0.0) {
    param_2 = 0.0;
  }
  param_2 = local_10 * local_10 * param_2 * param_2;
  fVar1 = *(float *)(in_ECX + 0xe4);
  uVar2 = (uint3)(CONCAT22(extraout_var,
                           (ushort)(fVar1 < param_2) << 8 |
                           (ushort)(NAN(fVar1) || NAN(param_2)) << 10 |
                           (ushort)(fVar1 == param_2) << 0xe) >> 8);
  if (fVar1 >= param_2) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



undefined4 FUN_004a0400(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x10,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_004a0200();
  }
  local_4 = 0xffffffff;
  FUN_00721170(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



int * FUN_004a0480(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b21d9;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = (int *)in_ECX[1];
  iVar2 = *piVar1;
  in_ECX[1] = iVar2;
  if (iVar2 == 0) {
    in_ECX[2] = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  iVar2 = piVar1[2];
  *param_1 = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 4));
  }
  local_4 = 0;
  (**(code **)(*in_ECX + 8))(piVar1,uVar3);
  in_ECX[3] = in_ECX[3] + -1;
  *unaff_FS_OFFSET = 1;
  return param_1;
}



int * FUN_004a0510(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cea29;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = in_ECX[2];
  puVar2 = *(undefined4 **)(iVar1 + 4);
  in_ECX[2] = (int)puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    in_ECX[1] = 0;
  }
  else {
    *puVar2 = 0;
  }
  iVar3 = *(int *)(iVar1 + 8);
  *param_1 = iVar3;
  if (iVar3 != 0) {
    InterlockedIncrement((LONG *)(iVar3 + 4));
  }
  local_4 = 0;
  (**(code **)(*in_ECX + 8))(iVar1,uVar4);
  in_ECX[3] = in_ECX[3] + -1;
  *unaff_FS_OFFSET = 1;
  return param_1;
}



void FUN_004a05b0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3f9e4;
  FUN_00721410();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int * FUN_004a05e0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = *(int **)(param_1 + 0xa8);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 4))();
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    if (puVar2 == &DAT_00ba7b80) break;
    puVar2 = (undefined4 *)puVar2[1];
  }
  return piVar1;
}



int * FUN_004a0630(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  LONG LVar6;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int *unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ce1c1;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = (int *)*param_2;
  if (piVar1 == (int *)in_ECX[1]) {
    *param_2 = *piVar1;
    FUN_004a0480(param_1);
    *unaff_FS_OFFSET = local_c;
    return param_1;
  }
  if (piVar1 == (int *)in_ECX[2]) {
    *param_2 = 0;
    FUN_004a0510(param_1);
    *unaff_FS_OFFSET = local_c;
    return param_1;
  }
  piVar2 = (int *)piVar1[1];
  iVar3 = *piVar1;
  *param_2 = iVar3;
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar3;
  }
  if (iVar3 != 0) {
    *(int **)(iVar3 + 4) = piVar2;
  }
  puVar4 = (undefined4 *)piVar1[2];
  if (puVar4 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar4 + 1);
  }
  local_4 = 1;
  (**(code **)(*in_ECX + 8))(piVar1,uVar5);
  in_ECX[3] = in_ECX[3] + -1;
  *unaff_retaddr = (int)puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar4 + 1);
  }
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  if (puVar4 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar4 + 1);
    if (LVar6 == 0) {
      (**(code **)*puVar4)(1);
    }
  }
  *unaff_FS_OFFSET = 0;
  return unaff_retaddr;
}



void FUN_004a0760(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar3 = 0;
    if (*(short *)(param_1 + 0xb6) != 0) {
      if (*(short *)(param_1 + 0xb6) == 0) goto LAB_004a07c5;
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0xb0) + uVar3 * 4);
        if (piVar1 != (int *)0x0) {
          iVar2 = (**(code **)(*piVar1 + 8))();
          if (iVar2 == 0) {
            iVar2 = (**(code **)(*piVar1 + 0xc))();
            if ((iVar2 != 0) && (*(int *)(iVar2 + 0xb8) != 0)) {
              *(int *)(*(int *)(iVar2 + 0xb8) + 0x10) = param_2;
            }
          }
          else {
            FUN_004a0760(iVar2,param_2);
          }
        }
LAB_004a07c5:
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(param_1 + 0xb6));
    }
  }
  return;
}



void FUN_004a07e0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b35290 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_00401f00(0x1c,uVar2);
    local_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_006ffd30();
      *puVar3 = &PTR_FUN_00a3d604;
      *(undefined2 *)(puVar3 + 6) = 0xec;
      *(undefined1 *)((int)puVar3 + 0x1a) = 0;
    }
    puVar1 = DAT_00b35290;
    local_4 = 0xffffffff;
    if (DAT_00b35290 != puVar3) {
      if (DAT_00b35290 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(DAT_00b35290 + 1);
        if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
      }
      DAT_00b35290 = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar3 + 1);
      }
    }
    *(ushort *)(DAT_00b35290 + 6) = *(ushort *)(DAT_00b35290 + 6) | 1;
  }
  *(undefined1 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0xe0) = 0;
  *(undefined1 *)(in_ECX + 0xdc) = 1;
  *(undefined4 *)(in_ECX + 0xe4) = 0;
  *(undefined4 *)(in_ECX + 0xe8) = 0x3f800000;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a08e0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b35290;
  if (DAT_00b35290 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b35290 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b35290 = (undefined4 *)0x0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a0920(int param_1)

{
  float fVar1;
  undefined1 uVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar8;
  float local_20;
  float local_14;
  float local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c33eb;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar7 = *(int *)(param_1 + 0xc);
  bVar4 = false;
  if (DAT_00b0727c == '\0') goto LAB_004a0cea;
  fVar1 = *(float *)(iVar7 + 0x120);
  uVar2 = *(undefined1 *)(in_ECX + 0xec);
  local_14 = *(float *)(in_ECX + 0x88) - *(float *)(iVar7 + 0x88);
  fVar3 = *(float *)(in_ECX + 0x8c) - *(float *)(iVar7 + 0x8c);
  local_10 = *(float *)(in_ECX + 0x90) - *(float *)(iVar7 + 0x90);
  switch(uVar2) {
  case 2:
    fVar1 = fVar1 / (_DAT_00b07624 * _DAT_00b075ec);
    break;
  case 3:
    if ((DAT_00b333c4 != 0) && (*(int *)(DAT_00b333c4 + 0x5d8) == in_ECX))
    goto switchD_004a09aa_caseD_7;
    fVar1 = fVar1 / (_DAT_00b0762c * _DAT_00b075f0);
    break;
  default:
    fVar1 = fVar1 / (_DAT_00b0761c * _DAT_00b075e8);
    break;
  case 6:
    fVar1 = 0.0;
    break;
  case 7:
switchD_004a09aa_caseD_7:
    FUN_0070ab40(param_1);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  local_10 = local_10 * local_10 + local_14 * local_14 + fVar3 * fVar3;
  fVar8 = (float10)FUN_00982c30(uVar6);
  local_14 = *(float *)(in_ECX + 0x2c);
  local_10 = (float)fVar8 - local_14;
  if (local_10 < 0.0) {
    local_10 = 0.0;
  }
  local_10 = fVar1 * fVar1 * local_10 * local_10;
  local_20 = 1.0;
  if (*(float *)(in_ECX + 0xe4) < local_10) {
    *(undefined4 *)(in_ECX + 0xe8) = 0;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (*(float *)(in_ECX + 0xe0) < local_10) {
    fVar1 = *(float *)(in_ECX + 0xe4) - *(float *)(in_ECX + 0xe0);
    local_20 = 1.0 - 1.0 / (fVar1 / (local_10 - *(float *)(in_ECX + 0xe0)));
    local_10 = fVar1;
  }
  switch(uVar2) {
  case 1:
    cVar5 = DAT_00b07634;
    break;
  case 2:
    cVar5 = DAT_00b0763c;
    break;
  case 3:
  case 7:
    cVar5 = DAT_00b07644;
    break;
  default:
    goto switchD_004a0b1b_caseD_4;
  }
  if (cVar5 == '\0') {
switchD_004a0b1b_caseD_4:
  }
  else if (local_20 <= 0.5) {
    local_20 = 0.0;
  }
  else {
    local_20 = 1.0;
  }
  iVar7 = FUN_006ff9c0(&DAT_00a3fa90);
  if (iVar7 != 0) {
    local_10 = *(float *)(iVar7 + 0xc);
    local_20 = local_10 * local_20;
    if ((local_20 < 1.0) &&
       (cVar5 = FUN_00405650(&DAT_00b42cec,*(undefined4 *)(DAT_00b3f928 + 8)), cVar5 != '\0')) {
      FUN_007ab960(in_ECX + 0x20);
      bVar4 = true;
    }
  }
  if (*(char *)(in_ECX + 0xdc) != '\0') {
    if (local_20 == 1.0) {
      iVar7 = FUN_00707530(0);
      if (iVar7 != 0) {
        FUN_00708560(&local_10,0);
        FUN_007016a0();
        FUN_00708560(&local_10,2);
        FUN_007016a0();
        FUN_00707610();
        FUN_004a2a90();
      }
    }
    else if (!NAN(local_20) && 0.0 < local_20 != (local_20 == 0.0)) {
      FUN_004a2a90();
      iVar7 = FUN_00707530(0);
      if (iVar7 == 0) {
        FUN_00708560(&local_14,0);
        FUN_007016a0();
        FUN_00405680(DAT_00b35290);
        local_10 = (float)FUN_00401f00(0x5c);
        local_4 = 0;
        if (local_10 == 0.0) {
          iVar7 = 0;
        }
        else {
          iVar7 = FUN_007095a0();
        }
        *(int *)(iVar7 + 0x54) = *(int *)(iVar7 + 0x54) + 1;
        *(float *)(iVar7 + 0x50) = local_20;
        local_4 = 0xffffffff;
        FUN_00405680(iVar7);
        FUN_00707610();
      }
      else {
        iVar7 = FUN_00707530(2);
        *(int *)(iVar7 + 0x54) = *(int *)(iVar7 + 0x54) + 1;
        *(float *)(iVar7 + 0x50) = local_20;
      }
    }
  }
  *(float *)(in_ECX + 0xe8) = local_20;
LAB_004a0cea:
  FUN_0070ab40(param_1);
  if (bVar4) {
    FUN_007aba90();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int * FUN_004a0e50(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  LONG LVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cec29;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int **)(in_ECX + 4) != (int *)0x0) {
    piVar3 = *(int **)(in_ECX + 4);
    do {
      piVar4 = (int *)*piVar3;
      if (*param_2 == piVar3[2]) goto LAB_004a0ea2;
      piVar3 = piVar4;
    } while (piVar4 != (int *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_004a0ea2:
  piVar4 = param_2;
  param_2 = piVar3;
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)FUN_004a0630(&local_10,&param_2);
  }
  iVar1 = *piVar4;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  local_4 = 0;
  if ((((piVar3 != (int *)0x0) && (local_10 != (undefined4 *)0x0)) &&
      (LVar5 = InterlockedDecrement(local_10 + 1), LVar5 == 0)) && (local_10 != (undefined4 *)0x0))
  {
    (**(code **)*local_10)(1,uVar2);
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_004a0f30(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cae88;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0070b780(0);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a3f944;
  FUN_004a07e0(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



int * FUN_004a0f90(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0xf0,uVar1);
  piVar3 = (int *)0x0;
  local_4 = 0;
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_004a0f30();
  }
  local_4 = 0xffffffff;
  FUN_0070ac60(piVar3,param_1);
  piVar3[0x38] = *(int *)(in_ECX + 0xe0);
  piVar3[0x39] = *(int *)(in_ECX + 0xe4);
  *(undefined1 *)(piVar3 + 0x3b) = *(undefined1 *)(in_ECX + 0xec);
  *(undefined1 *)(piVar3 + 0x37) = *(undefined1 *)(in_ECX + 0xdc);
  (**(code **)(*piVar3 + 0x78))();
  (**(code **)(*piVar3 + 0x50))();
  *unaff_FS_OFFSET = local_c;
  return piVar3;
}



void FUN_004a1220(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009a9f28;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (undefined4 *)0x0) {
    InterlockedIncrement(param_1 + 1);
  }
  local_4 = 0;
  FUN_004a0e50(&local_10,&param_1);
  if (local_10 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(local_10 + 1);
    if ((LVar3 == 0) && (local_10 != (undefined4 *)0x0)) {
      (**(code **)*local_10)(1,uVar2);
    }
  }
  puVar1 = param_1;
  local_4 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(param_1 + 1);
    if (LVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a12e0(int *param_1)

{
  short sVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  LONG LVar9;
  undefined4 *in_ECX;
  int *piVar10;
  int *piVar11;
  int *unaff_FS_OFFSET;
  char *pcVar12;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  piVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2226;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0070b780(0);
  *in_ECX = &PTR_FUN_00a3f944;
  param_1 = (int *)0x0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_006ff420(piVar2[2]);
  if (piVar2[3] == 0) {
    for (puVar5 = (undefined4 *)(**(code **)(*piVar2 + 4))(uVar4); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      if (puVar5 == &DAT_00b3fd4c) goto LAB_004a13e4;
    }
    cVar3 = FUN_0070ff20(&DAT_00b26dc4);
    if (cVar3 != '\0') {
      FUN_00435ce0(piVar2[0x2a]);
      FUN_00435ce0(0);
      piVar8 = piVar2;
      goto LAB_004a144d;
    }
    iVar6 = FUN_00401f00(0xdc);
    local_4._0_1_ = 3;
    if (iVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_0070b780(0);
    }
    local_4._0_1_ = 1;
    FUN_0075fa90(uVar7);
    (**(code **)(_DAT_00000000 + 0x84))(piVar2,0);
    pcVar12 = "FadeNode Rot";
  }
  else {
LAB_004a13e4:
    iVar6 = FUN_00401f00(0xdc);
    local_4._0_1_ = 2;
    if (iVar6 == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)FUN_0070b780(0);
    }
    local_4._0_1_ = 1;
    if (piVar8 != (int *)0x0) {
      InterlockedIncrement(piVar8 + 1);
      param_1 = piVar8;
    }
    (**(code **)(*param_1 + 0x84))(piVar2,0);
    pcVar12 = "FadeNode Anim";
  }
  FUN_006ff420(pcVar12);
  piVar8 = param_1;
LAB_004a144d:
  uVar4 = 0;
  if (*(short *)((int)piVar8 + 0xb6) != 0) {
    if (*(short *)((int)piVar8 + 0xb6) == 0) goto LAB_004a1475;
    do {
      iVar6 = *(int *)(piVar8[0x2c] + uVar4 * 4);
      if (iVar6 != 0) {
        FUN_0070af00(iVar6,1);
      }
LAB_004a1475:
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)((int)piVar8 + 0xb6));
  }
  FUN_004a0760();
  iVar6 = piVar2[0x29];
  while (iVar6 != 0) {
    uVar7 = *(undefined4 *)(piVar2[0x27] + 8);
    FUN_00405680(uVar7);
    FUN_004a1220(uVar7);
    iVar6 = piVar2[0x29];
  }
  iVar6 = piVar2[0x32];
  while (iVar6 != 0) {
    uVar7 = *(undefined4 *)(piVar2[0x30] + 8);
    FUN_00708e40(uVar7);
    FUN_0070b930(uVar7);
    iVar6 = piVar2[0x32];
  }
  in_ECX[0x15] = piVar8[0x15];
  in_ECX[0x16] = piVar8[0x16];
  in_ECX[0x17] = piVar8[0x17];
  piVar10 = piVar8 + 0xc;
  piVar11 = in_ECX + 0xc;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar11 = *piVar10;
    piVar10 = piVar10 + 1;
    piVar11 = piVar11 + 1;
  }
  in_ECX[0x18] = ABS((float)piVar8[0x18]);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
  _DAT_00b3f678 = GetCurrentThreadId();
  _DAT_00b3f67c = _DAT_00b3f67c + 1;
  FUN_006ff760((short)piVar2[5]);
  sVar1 = (short)piVar2[5];
  while (sVar1 != 0) {
    FUN_006ff8a0(*(undefined4 *)piVar2[4]);
    FUN_006ffbe0(0);
    sVar1 = (short)piVar2[5];
  }
  _DAT_00b3f67c = _DAT_00b3f67c + -1;
  if (_DAT_00b3f67c == 0) {
    _DAT_00b3f678 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3f600);
  FUN_004a07e0();
  FUN_0070a360();
  FUN_0070a9c0();
  local_4 = (uint)local_4._1_3_ << 8;
  if ((param_1 != (int *)0x0) && (LVar9 = InterlockedDecrement(param_1 + 1), LVar9 == 0)) {
    (**(code **)*param_1)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a15f0(void)

{
  undefined4 *in_ECX;
  
  FUN_0070b780(0);
  *in_ECX = &PTR_FUN_00a3fb54;
  return;
}



void FUN_004a1620(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fb54;
  FUN_0070b810();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_004a1650(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0xec,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_0070b780(0);
    *puVar2 = &PTR_FUN_00a3fb54;
  }
  puVar2[0x37] = *(undefined4 *)(in_ECX + 0xdc);
  puVar2[0x38] = *(undefined4 *)(in_ECX + 0xe0);
  puVar2[0x39] = *(undefined4 *)(in_ECX + 0xe4);
  local_4 = 0xffffffff;
  puVar2[0x3a] = *(undefined4 *)(in_ECX + 0xe8);
  FUN_0070ac60(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_004a1780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  undefined4 *in_ECX;
  
  FUN_007174b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  in_ECX[0x30] = param_10;
  in_ECX[0x33] = param_13;
  *in_ECX = &PTR_FUN_00a3fc04;
  in_ECX[0x31] = param_11;
  in_ECX[0x32] = param_12;
  return;
}



void FUN_004a17f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc0) = param_1;
  *(undefined4 *)(in_ECX + 0xc4) = param_2;
  *(undefined4 *)(in_ECX + 200) = param_3;
  *(undefined4 *)(in_ECX + 0xcc) = param_4;
  return;
}



void FUN_004a1840(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fc04;
  FUN_007226e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_004a1870(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0xd0,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00717590();
    *puVar2 = &PTR_FUN_00a3fc04;
  }
  puVar2[0x30] = *(undefined4 *)(in_ECX + 0xc0);
  puVar2[0x31] = *(undefined4 *)(in_ECX + 0xc4);
  puVar2[0x32] = *(undefined4 *)(in_ECX + 200);
  local_4 = 0xffffffff;
  puVar2[0x33] = *(undefined4 *)(in_ECX + 0xcc);
  thunk_FUN_00723020(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_004a19f0(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *param_1;
  *in_ECX = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004a1a10(undefined4 param_1)

{
  int iVar1;
  undefined1 local_114 [8];
  undefined1 local_10c [8];
  undefined1 local_104 [256];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_114;
  FUN_0047d8f0(param_1,local_104);
  FUN_006fa1b0(local_104,local_114,local_10c);
  iVar1 = FUN_0042db10(1,local_114,local_10c,local_104);
  if (iVar1 != 0) {
    FUN_004524c0(iVar1);
    return;
  }
  FUN_004524c0(local_104);
  return;
}



undefined4 FUN_004a1ab0(undefined4 param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  
  iVar3 = (**(code **)(*in_ECX + 4))(param_1);
  puVar1 = *(undefined4 **)(in_ECX[2] + iVar3 * 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    cVar2 = (**(code **)(*in_ECX + 8))(param_1,puVar1[1]);
    if (cVar2 != '\0') break;
    puVar1 = (undefined4 *)*puVar1;
  }
  FUN_0055e2a0(puVar1 + 2);
  return 1;
}



void FUN_004a1b10(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ce3d8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  iVar2 = (**(code **)(*in_ECX + 4))();
  puVar3 = *(undefined4 **)(in_ECX[2] + iVar2 * 4);
  do {
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x14))();
      if (param_1 != (undefined4 *)0x0) {
        InterlockedIncrement(param_1 + 1);
      }
      (**(code **)(*in_ECX + 0xc))(puVar3,unaff_retaddr);
      *puVar3 = *(undefined4 *)(in_ECX[2] + iVar2 * 4);
      *(undefined4 **)(in_ECX[2] + iVar2 * 4) = puVar3;
      in_ECX[3] = in_ECX[3] + 1;
      puStack_8 = (undefined1 *)0xffffffff;
      if ((param_1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_1 + 1), LVar4 == 0))
      {
        param_1 = (undefined4 *)*param_1;
LAB_004a1bd8:
        (*(code *)*param_1)();
      }
LAB_004a1bde:
      *unaff_FS_OFFSET = (int)in_ECX;
      return;
    }
    cVar1 = (**(code **)(*in_ECX + 8))(param_1);
    if (cVar1 != '\0') {
      if ((char)in_ECX[4] == '\0') {
        puVar3[1] = param_1;
      }
      FUN_0055e2a0();
      puStack_8 = (undefined1 *)0xffffffff;
      if ((param_1 == (undefined4 *)0x0) || (LVar4 = InterlockedDecrement(param_1 + 1), LVar4 != 0))
      goto LAB_004a1bde;
      param_1 = (undefined4 *)*param_1;
      goto LAB_004a1bd8;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}



void FUN_004a1c30(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcd8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_004a1c50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcb8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_004a1c70(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8068;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined4 *)(param_1 + 4) = param_2;
  puVar1 = *(undefined4 **)(param_1 + 8);
  local_4 = 0;
  if (puVar1 != param_3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar2);
      }
    }
    *(undefined4 **)(param_1 + 8) = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  local_4 = 0xffffffff;
  if (param_3 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(param_3 + 1);
    if (LVar3 == 0) {
      (**(code **)*param_3)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a1d20(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcd8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004a1d50(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcb8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004a1d80(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  undefined4 *local_124;
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [256];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b228b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_124;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffed4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_124 = (undefined4 *)0x0;
  local_4 = 0;
  FUN_0047d8f0(param_1,local_110,uVar2);
  FUN_006fa1b0(local_110,local_118,local_120);
  iVar3 = FUN_0042db10(1,local_118,local_120,local_110);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b35380);
  _DAT_00b353f8 = GetCurrentThreadId();
  _DAT_00b353fc = _DAT_00b353fc + 1;
  if (iVar3 == 0) {
    FUN_004a1ab0(local_110,&local_124);
  }
  else {
    FUN_004a1ab0(iVar3,&local_124);
  }
  _DAT_00b353fc = _DAT_00b353fc + -1;
  if (_DAT_00b353fc == 0) {
    _DAT_00b353f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b35380);
  puVar1 = local_124;
  local_4 = 0xffffffff;
  if (local_124 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(local_124 + 1);
    if (LVar4 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return puVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004a1ed0(undefined4 param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b22c8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = (undefined4 *)0x0;
  local_4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b35380);
  _DAT_00b353f8 = GetCurrentThreadId();
  _DAT_00b353fc = _DAT_00b353fc + 1;
  FUN_004a1ab0(param_1,&local_10);
  _DAT_00b353fc = _DAT_00b353fc + -1;
  if (_DAT_00b353fc == 0) {
    _DAT_00b353f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b35380);
  puVar1 = local_10;
  local_4 = 0xffffffff;
  if (local_10 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(local_10 + 1);
    if (LVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return puVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a1f90(undefined4 param_1,int param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b35380);
  _DAT_00b353f8 = GetCurrentThreadId();
  _DAT_00b353fc = _DAT_00b353fc + 1;
  if (param_2 != 0) {
    InterlockedIncrement((LONG *)(param_2 + 4));
  }
  FUN_006aa3b0(param_1);
  _DAT_00b353fc = _DAT_00b353fc + -1;
  if (_DAT_00b353fc == 0) {
    _DAT_00b353f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b35380);
  return;
}



void FUN_004a2100(uint param_1)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a3fcb8;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a3fd00;
  return;
}



void FUN_004a2150(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b22f8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fd20;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a3fcd8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a21c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a3fd40;
  if ((*(char *)(in_ECX + 4) != '\0') && (uVar3 = 0, in_ECX[1] != 0)) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[2] + uVar3 * 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = puVar2 + 1;
        puVar2 = (undefined4 *)*puVar2;
        FUN_00401f20(*puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)in_ECX[1]);
  }
  FUN_004a2150();
  return;
}



void FUN_004a2210(int param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  char *_Dst;
  LONG LVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c8068;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (*(char *)(in_ECX + 0x10) == '\0') {
    *(char **)(param_1 + 4) = param_2;
  }
  else {
    pcVar4 = param_2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    _Dst = (char *)FUN_00401f00(pcVar4 + (1 - (int)(param_2 + 1)),uVar3);
    *(char **)(param_1 + 4) = _Dst;
    _strcpy_s(_Dst,(rsize_t)(pcVar4 + (1 - (int)(param_2 + 1))),param_2);
  }
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 != param_3) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 1);
      if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)(param_1 + 8) = param_3;
    if (param_3 != (undefined4 *)0x0) {
      InterlockedIncrement(param_3 + 1);
    }
  }
  local_4 = 0xffffffff;
  if (param_3 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(param_3 + 1);
    if (LVar5 == 0) {
      (**(code **)*param_3)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a2300(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b2328;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fd00;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a3fcb8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a2370(byte param_1)

{
  FUN_004a2150();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004a2390(byte param_1)

{
  FUN_004a2300();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a23b0(void)

{
  LONG *lpAddend;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined4 *local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b23e8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b35380);
  _DAT_00b353f8 = GetCurrentThreadId();
  _DAT_00b353fc = _DAT_00b353fc + 1;
  iVar1 = *(int *)(in_ECX + 8);
  if (*(int *)(iVar1 + 0xc) != 0) {
    uVar3 = 0;
    if (*(uint *)(iVar1 + 4) != 0) {
      piVar5 = *(int **)(iVar1 + 8);
      do {
        if (*piVar5 != 0) {
          local_10 = (*(int **)(iVar1 + 8))[uVar3];
          goto joined_r0x004a242c;
        }
        uVar3 = uVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar3 < *(uint *)(iVar1 + 4));
    }
    local_10 = 0;
joined_r0x004a242c:
    while (local_10 != 0) {
      local_14 = 0;
      local_18 = (undefined4 *)0x0;
      local_4 = 0;
      FUN_007b2600(&local_10,&local_14,&local_18);
      puVar2 = local_18;
      lpAddend = local_18 + 1;
      if (local_18[1] == 2) {
        FUN_004524c0(local_14);
      }
      local_4 = 0xffffffff;
      LVar4 = InterlockedDecrement(lpAddend);
      if (LVar4 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  _DAT_00b353fc = _DAT_00b353fc + -1;
  if (_DAT_00b353fc == 0) {
    _DAT_00b353f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b35380);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a24d0(byte param_1)

{
  FUN_004a21c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004a24f0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *_Dst;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b236e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a3fd80;
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4._0_1_ = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004a2100(param_1);
  }
  local_4._0_1_ = 0;
  in_ECX[2] = uVar3;
  puVar4 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puVar4 == (undefined4 *)0x0) {
    in_ECX[3] = 0;
  }
  else {
    puVar4[1] = 0x20b;
    *puVar4 = &PTR_FUN_00a3fcd8;
    puVar4[3] = 0;
    _Dst = (void *)FUN_00401f00(0x82c,uVar1);
    puVar4[2] = _Dst;
    _memset(_Dst,0,puVar4[1] * 4);
    *(undefined1 *)(puVar4 + 4) = 1;
    *puVar4 = &PTR_FUN_00a3fd60;
    in_ECX[3] = puVar4;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a25f0(void)

{
  char *_Source;
  uint uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  LONG LVar5;
  int in_ECX;
  int *piVar6;
  size_t _Count;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  undefined1 local_244 [4];
  undefined4 *local_240;
  undefined4 *local_23c;
  char *local_238;
  int local_234;
  undefined1 local_230 [8];
  undefined1 local_228 [7];
  undefined4 uStack_221;
  undefined1 local_21c [512];
  uint local_1c;
  int local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_009b23a6;
  local_14 = *unaff_FS_OFFSET;
  local_1c = DAT_00b30aac ^ (uint)local_244;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffdb0;
  *unaff_FS_OFFSET = (int)&local_14;
  FUN_00977c50(3,uVar1);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b35380);
  _DAT_00b353f8 = GetCurrentThreadId();
  _DAT_00b353fc = _DAT_00b353fc + 1;
  FUN_004a23b0();
  iVar4 = *(int *)(in_ECX + 0xc);
  if (*(int *)(iVar4 + 0xc) != 0) {
    uVar1 = 0;
    if (*(uint *)(iVar4 + 4) != 0) {
      piVar6 = *(int **)(iVar4 + 8);
      do {
        if (*piVar6 != 0) {
          local_234 = (*(int **)(iVar4 + 8))[uVar1];
          goto joined_r0x004a2696;
        }
        uVar1 = uVar1 + 1;
        piVar6 = piVar6 + 1;
      } while (uVar1 < *(uint *)(iVar4 + 4));
    }
    local_234 = 0;
joined_r0x004a2696:
    if (local_234 != 0) {
      local_238 = (char *)0x0;
      local_23c = (undefined4 *)0x0;
      local_c = 0;
      FUN_007b2600(&local_234,&local_238,&local_23c);
      _Source = local_238;
      if (local_23c[1] == 2) {
        local_240 = (undefined4 *)0x0;
        local_c = CONCAT31(local_c._1_3_,1);
        pcVar2 = _strrchr(local_238,0x5f);
        _Count = (int)pcVar2 - (int)_Source;
        puVar7 = (undefined4 *)0x0;
        if ((int)_Count < 1) {
LAB_004a27a1:
          FUN_004a1a10(_Source);
        }
        else {
          _strncpy((char *)((int)&uStack_221 + 1),_Source,_Count);
          *(undefined1 *)((int)&uStack_221 + _Count + 1) = 0;
          puVar7 = &uStack_221;
          do {
            puVar3 = puVar7;
            puVar7 = (undefined4 *)((int)puVar3 + 1);
          } while (*(char *)((int)puVar3 + 1) != '\0');
          *(undefined4 *)((int)puVar3 + 1) = 0x7864642e;
          *(undefined1 *)((int)puVar3 + 5) = 0;
          FUN_006fa1b0((int)&uStack_221 + 1,local_228,local_230);
          iVar4 = FUN_0042db10(1,local_228,local_230,(int)&uStack_221 + 1);
          if (iVar4 == 0) {
            FUN_004a1ab0((int)&uStack_221 + 1,&local_240);
          }
          else {
            FUN_004a1ab0(iVar4,&local_240);
          }
          puVar7 = local_240;
          if ((local_240 == (undefined4 *)0x0) || (local_240[1] == 2)) goto LAB_004a27a1;
        }
        local_c = local_c & 0xffffff00;
        if ((puVar7 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar7 + 1), LVar5 == 0))
        {
          (**(code **)*puVar7)(1);
        }
      }
      puVar7 = local_23c;
      local_c = 0xffffffff;
      LVar5 = InterlockedDecrement(local_23c + 1);
      if (LVar5 == 0) {
        (**(code **)*puVar7)(1);
      }
      goto joined_r0x004a2696;
    }
  }
  _DAT_00b353fc = _DAT_00b353fc + -1;
  if (_DAT_00b353fc == 0) {
    _DAT_00b353f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b35380);
  FUN_00977c50(2);
  *unaff_FS_OFFSET = local_14;
  return;
}



int FUN_004a2850(void)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  LONG LVar6;
  int in_ECX;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  undefined4 *local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b23e8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004a25f0(uVar4);
  uVar3 = DAT_00b06b18;
  puVar9 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  uVar4 = *(uint *)(*(int *)(in_ECX + 0xc) + 4);
  uVar5 = 0;
  local_4 = 0;
  if (uVar4 != 0) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0xc) + 8);
    piVar7 = piVar1;
    do {
      if (*piVar7 != 0) {
        local_14 = piVar1[uVar5];
        goto LAB_004a28b4;
      }
      uVar5 = uVar5 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar5 < uVar4);
  }
  local_14 = 0;
LAB_004a28b4:
  iVar8 = 0;
  DAT_00b06b18 = 1;
  while (local_14 != 0) {
    FUN_007b2600(&local_14,&local_10,&local_18);
    puVar9 = local_18;
    if (((local_18 != (undefined4 *)0x0) && (iVar2 = local_18[1], iVar2 != 0)) && (iVar2 != 2)) {
      FUN_004a7a60("Texture \"%s\" count %d.\r\n",local_10,iVar2 + -2);
      iVar8 = iVar8 + 1;
    }
  }
  local_4 = 0xffffffff;
  DAT_00b06b18 = uVar3;
  if ((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) {
    (**(code **)*puVar9)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return iVar8;
}



void FUN_004a2970(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cfdd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fd80;
  local_4 = 0;
  FUN_004a2850(uVar1);
  FUN_007c2a40();
  FUN_007c2a40();
  if ((undefined4 *)in_ECX[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[3])(1);
  }
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[2])(1);
  }
  in_ECX[3] = 0;
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a2a10(byte param_1)

{
  FUN_004a2970();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_004a2a30(int param_1)

{
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x19:
  case 0x1b:
  case 0x21:
  case 0x22:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
    return 2;
  default:
    return 1;
  case 0x23:
  case 0x24:
    return 3;
  }
}



void FUN_004a2a90(int param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 != 0) {
    uVar5 = 0;
    if (*(short *)(param_1 + 0xb6) != 0) {
      if (*(short *)(param_1 + 0xb6) == 0) goto LAB_004a2b86;
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0xb0) + uVar5 * 4);
        if (piVar1 != (int *)0x0) {
          iVar2 = FUN_00707530(2);
          if ((iVar2 != 0) && (param_2 != *(float *)(iVar2 + 0x50))) {
            *(int *)(iVar2 + 0x54) = *(int *)(iVar2 + 0x54) + 1;
            *(float *)(iVar2 + 0x50) = param_2;
          }
          piVar3 = (int *)FUN_00707530(4);
          if (piVar3 == (int *)0x0) {
            uVar6 = 0;
          }
          else {
            iVar2 = (**(code **)(*piVar3 + 0x54))();
            uVar6 = -(uint)(iVar2 != -1) & (uint)piVar3;
            if (uVar6 != 0) {
              FUN_007e2430(param_2);
            }
          }
          iVar2 = FUN_00707530(0);
          if (1.0 <= param_2) {
            if (((uVar6 != 0) && ((*(byte *)(uVar6 + 0x1c) & 0x40) == 0)) && (iVar2 != 0)) {
              *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) & 0xfffe;
            }
          }
          else if (iVar2 != 0) {
            *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) | 1;
          }
          uVar4 = (**(code **)(*piVar1 + 8))(param_2);
          FUN_004a2a90(uVar4);
        }
LAB_004a2b86:
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(param_1 + 0xb6));
    }
  }
  return;
}



void FUN_004a2c30(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2663;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a3fee4;
  iVar2 = FUN_00401f00(0xc);
  local_4._0_1_ = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004a43e0(1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  in_ECX[6] = uVar3;
  puVar4 = (undefined4 *)FUN_00401f00(8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  in_ECX[7] = puVar4;
  in_ECX[10] = 0xbf800000;
  *(undefined1 *)(in_ECX + 1) = 0x2f;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a2ce0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b4a48;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fee4;
  iVar1 = in_ECX[6];
  local_4 = 0;
  if (iVar1 != 0) {
    thunk_FUN_004a4400(uVar4);
    FUN_00401f20(iVar1);
  }
  piVar2 = (int *)in_ECX[7];
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    while (iVar1 != 0) {
      piVar3 = (int *)piVar2[1];
      if (piVar3 == (int *)0x0) {
        *piVar2 = 0;
      }
      else {
        piVar2[1] = piVar3[1];
        *piVar2 = *piVar3;
        FUN_00401f20(piVar3);
      }
      if (iVar1 != 0) {
        FUN_004a76f0();
        FUN_00401f20(iVar1);
      }
      piVar2 = (int *)in_ECX[7];
      iVar1 = *piVar2;
    }
    FUN_00401f20(in_ECX[7]);
  }
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a2db0(void)

{
  int *piVar1;
  int in_ECX;
  
  FUN_0046b990();
  if (*(int *)(in_ECX + 0x20) != 0) {
    FUN_0046ba80(0x4d414e57,*(undefined4 *)(*(int *)(in_ECX + 0x20) + 0xc));
  }
  for (piVar1 = *(int **)(in_ECX + 0x1c);
      (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
    FUN_004a6e20();
  }
  for (piVar1 = *(int **)(in_ECX + 0x18);
      (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
    (**(code **)(*(int *)*piVar1 + 4))();
  }
  FUN_0046b9f0();
  return;
}



void FUN_004a2e90(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined4 uVar6;
  
  *(undefined4 *)(in_ECX + 0x24) = 0;
  if (*(int *)(in_ECX + 0x18) != 0) {
    uVar6 = 0;
    ppuVar5 = &PTR_PTR_00b076bc;
    ppuVar4 = &PTR_PTR_00b076a0;
    uVar3 = 0;
    uVar1 = FUN_004a4460(3);
    iVar2 = FUN_009832e6(uVar1,uVar3,ppuVar4,ppuVar5,uVar6);
    if (iVar2 != 0) {
      uVar1 = FUN_004eece0();
      *(undefined4 *)(in_ECX + 0x24) = uVar1;
    }
  }
  return;
}



int FUN_004a2ed0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c620b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    iVar4 = FUN_00401f00(0x2c,uVar3);
    local_4 = 0;
    if (iVar4 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = FUN_004a2c30();
    }
  }
  local_4 = 0xffffffff;
  piVar1 = *(int **)(in_ECX + 0x1c);
  FUN_0046b7a0(param_1);
  FUN_004a44d0(*(undefined4 *)(param_1 + 0x18));
  for (; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1]) {
    piVar2 = *(int **)(param_1 + 0x1c);
    iVar4 = FUN_004a77f0(0);
    if (iVar4 != 0) {
      if (*piVar2 != 0) {
        piVar5 = (int *)FUN_00401f00(8);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          *piVar5 = *piVar2;
          piVar5[1] = 0;
        }
        piVar5[1] = piVar2[1];
        piVar2[1] = (int)piVar5;
      }
      *piVar2 = iVar4;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



int FUN_004a2ff0(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  for (piVar1 = (int *)(*(int *)(DAT_00b33a98 + 0xbc) + 4); piVar1 != (int *)0x0;
      piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2 * 8 + 2;
}



void FUN_004a3020(void)

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  puVar1 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&local_c,2);
  if (*(int *)(DAT_00b33a98 + 0xbc) == 0) {
    *puVar1 = (undefined2)local_c;
    return;
  }
  piVar3 = (int *)(*(int *)(DAT_00b33a98 + 0xbc) + 4);
  if (piVar3 != (int *)0x0) {
    do {
      if ((piVar3[1] == 0) && (*piVar3 == 0)) {
        *puVar1 = (undefined2)local_c;
        return;
      }
      iVar2 = *piVar3;
      local_4 = 0;
      local_8 = 0;
      if (iVar2 != 0) {
        local_8 = *(undefined4 *)(iVar2 + 0xc);
        local_4 = *(undefined4 *)(iVar2 + 0x28);
      }
      FUN_0045f7a0(&local_8,4);
      FUN_0045b9a0(&local_4,4);
      local_c = local_c + 1;
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    *puVar1 = (undefined2)local_c;
    return;
  }
  *puVar1 = (undefined2)local_c;
  return;
}



void FUN_004a3100(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ushort local_c [2];
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004534d0(local_c,2);
  uVar3 = 0;
  if (local_c[0] != 0) {
    do {
      local_4 = 0;
      local_8 = 0;
      FUN_0045ba00(&local_8,4);
      FUN_004534d0(&local_4,4);
      uVar1 = FUN_0046b250(local_8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b07688,0);
      iVar2 = FUN_009832e6(uVar1);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x28) = local_4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_c[0]);
  }
  return;
}



void FUN_004a31a0(byte param_1)

{
  FUN_004a2ce0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004a31c0(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009b268b;
  local_10 = *unaff_FS_OFFSET;
  local_14 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  cVar2 = FUN_004511c0(local_14);
  local_20 = 0;
  if (cVar2 == '/') {
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar4 = FUN_004510b0();
    while (iVar4 != 0) {
      iVar5 = 0;
      if (iVar4 < 0x4d414e58) {
        if (iVar4 == 0x4d414e57) {
          local_18 = 0;
          FUN_004510e0(&local_18);
          in_ECX[8] = local_18;
          if (((local_18 != 0) && (((uint)in_ECX[2] >> 6 & 1) != 0)) &&
             (*(char *)(DAT_00b33a98 + 0xcd7) == '\0')) {
            FUN_004ef170(1);
          }
        }
        else if (iVar4 < 0x444d4453) {
          if ((iVar4 == 0x444d4452) || (iVar4 == 0x424f4452)) goto LAB_004a3392;
          if (iVar4 == 0x44494445) {
            FUN_00450c20(&stack0xffffffd4,0x200);
            (**(code **)(*in_ECX + 0xd8))(&stack0xffffffd4);
          }
          else if ((iVar4 == 0x444c5052) && (local_20 != 0)) {
            FUN_004a6f40(param_1);
          }
        }
        else {
          if (iVar4 == 0x44534452) goto LAB_004a3392;
          if (iVar4 == 0x494c5052) {
            local_1c = 0;
            FUN_004510e0(&local_1c);
            local_18 = FUN_00401f00(0x28);
            local_8 = 0;
            if (local_18 != 0) {
              iVar5 = FUN_004a6de0(1);
            }
            local_8 = 0xffffffff;
            FUN_004a6d70(local_1c);
            FUN_0067b1e0(iVar5);
            local_20 = iVar5;
          }
          else if (iVar4 == 0x4a4f4452) goto LAB_004a3392;
        }
      }
      else if (iVar4 < 0x53474453) {
        if (((iVar4 == 0x53474452) || (iVar4 == 0x4e4c4452)) ||
           ((iVar4 == 0x4e4f4349 || (iVar4 == 0x504d4452)))) {
LAB_004a3392:
          (**(code **)(**(int **)(DAT_00b33a98 + 0xcd8) + 0x20))(param_1);
        }
      }
      else if (((iVar4 == 0x54414452) || (iVar4 == 0x544f4452)) || (iVar4 == 0x54574452))
      goto LAB_004a3392;
      cVar2 = FUN_0044fea0();
      if (cVar2 == '\0') break;
      iVar4 = FUN_004510b0();
    }
    piVar1 = (int *)in_ECX[7];
    while ((piVar1 != (int *)0x0 && (*piVar1 != 0))) {
      cVar2 = FUN_004a78a0(1);
      if (cVar2 == '\0') {
        iVar4 = *piVar1;
        FUN_0065c620(iVar4);
        if (iVar4 != 0) {
          FUN_004a76f0();
          FUN_00401f20(iVar4);
        }
        piVar1 = (int *)in_ECX[7];
      }
      else {
        piVar1 = (int *)piVar1[1];
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}



void FUN_004a34c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3ffcc;
  *(undefined1 *)(in_ECX + 1) = 0;
  *(undefined1 *)((int)in_ECX + 6) = 0x32;
  *(undefined1 *)((int)in_ECX + 5) = 0;
  return;
}



void FUN_004a34e0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3ffcc;
  *(undefined1 *)(in_ECX + 1) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)((int)in_ECX + 6) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)((int)in_ECX + 5) = *(undefined1 *)(param_1 + 5);
  return;
}



void FUN_004a3510(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3ffcc;
  return;
}



undefined1 FUN_004a3520(byte param_1)

{
  int in_ECX;
  
  if (param_1 < 0x65) {
    *(byte *)(in_ECX + 6) = param_1;
    return 1;
  }
  return 0;
}



void FUN_004a3560(void)

{
  int *in_ECX;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  local_8 = (**(code **)(*in_ECX + 0xc))();
  local_4._0_2_ = CONCAT11(*(undefined1 *)((int)in_ECX + 6),(char)in_ECX[1]);
  FUN_0046ae40(0x54414452,&local_8,8);
  return;
}



void FUN_004a35e0(void)

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
  puStack_8 = &LAB_009b26c3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004a34c0(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a3fff0;
  iVar2 = FUN_00401f00(0x14);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004a5fd0(1);
  }
  in_ECX[2] = uVar3;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a3660(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2898;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004a34e0(param_1);
  *in_ECX = &PTR_FUN_00a3fff0;
  local_4 = 0;
  uVar1 = FUN_004a6120(0);
  in_ECX[2] = uVar1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a36d0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b27e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fff0;
  local_4 = 0;
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[2])(1,uVar1);
  }
  local_4 = 0xffffffff;
  FUN_004a3510();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_004a3740(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0xc,uVar1);
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_004a3660(in_ECX);
    *unaff_FS_OFFSET = local_c;
    return uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_004a37b0(byte param_1)

{
  FUN_004a36d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_004a38a0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  uint uVar6;
  int *piVar7;
  uint *unaff_FS_OFFSET;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd8ab;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (uint)&local_c;
  if ((param_1 != 0) && (iVar2 = FUN_004510b0(uVar1), iVar2 == 0x53474452)) {
    uVar1 = *(uint *)(param_1 + 0x254);
    uVar6 = uVar1 >> 3;
    if ((uVar1 & 7) == 0) {
      if (uVar6 != 0) {
        iVar4 = FUN_00401f00(uVar6 * 8);
        FUN_00450c20(iVar4,uVar1);
        iVar2 = iVar4;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          iVar5 = FUN_00401f00(0xc);
          piVar7 = (int *)0x0;
          local_4 = 0;
          if (iVar5 != 0) {
            piVar7 = (int *)FUN_004a59e0(iVar2);
          }
          local_4 = 0xffffffff;
          if (piVar7 != (int *)0x0) {
            iVar5 = (**(code **)(*piVar7 + 4))();
            if (iVar5 == 0) {
              (**(code **)(*piVar7 + 8))(1);
            }
            else {
              (**(code **)(*in_ECX + 0x24))(piVar7);
              FUN_004a5ff0(piVar7);
            }
          }
          iVar2 = iVar2 + 8;
        }
        FUN_00401f20(iVar4);
      }
      uVar3 = 1;
      goto LAB_004a3902;
    }
    FUN_004a7a60("Invalid Region Grass Object Data in file \"%s\".",param_1 + 0x1c);
  }
  uVar3 = 0;
LAB_004a3902:
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_004a3b90(void)

{
  FUN_004a3560();
  FUN_00470070(0x4e4f4349);
  return;
}



undefined4 FUN_004a3bb0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_004510b0();
  if (iVar1 == 0x4e4f4349) {
    FUN_004700e0(*(undefined4 *)(in_ECX + 8),param_1);
  }
  return 1;
}



void FUN_004a3bf0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b2898;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a40054;
  iVar1 = in_ECX[2];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_00470040(uVar2);
    FUN_00401f20(iVar1);
  }
  local_4 = 0xffffffff;
  FUN_004a3510();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a3c60(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b35414;
  if (DAT_00b35414 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b35414 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b35414 = (undefined4 *)0x0;
  }
  puVar1 = DAT_00b35418;
  if (DAT_00b35418 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b35418 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b35418 = (undefined4 *)0x0;
  }
  return;
}



void FUN_004a3cd0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b26c3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004a34c0(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a40054;
  iVar2 = FUN_00401f00(0xc);
  local_4._0_1_ = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0046ffd0();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  in_ECX[2] = uVar3;
  FUN_004028d0("Trees\\CanopyShadow.dds",0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a3d60(byte param_1)

{
  FUN_004a3bf0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004a3d80(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  undefined1 *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b26f3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004a34e0(param_1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a40054;
  iVar2 = FUN_00401f00(0xc,uVar1);
  local_4._0_1_ = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0046ffd0();
  }
  in_ECX[2] = uVar3;
  puVar4 = *(undefined1 **)(*(int *)(param_1 + 8) + 4);
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_00a2f7ec;
  }
  FUN_004028d0(puVar4,0);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_004a3e60(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int in_ECX;
  
  iVar5 = *(int *)(in_ECX + 8);
  if (iVar5 == 0) {
    return 0;
  }
  if (*(ushort *)(iVar5 + 8) == 0xffff) {
    pcVar2 = *(char **)(iVar5 + 4);
    pcVar4 = pcVar2 + 1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)pcVar4;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar5 + 8);
  }
  if (uVar3 != 0) {
    pcVar4 = *(char **)(iVar5 + 4);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "";
    }
    iVar5 = __stricmp(pcVar4,(char *)*param_1);
    if (iVar5 == 0) {
      return 0;
    }
  }
  FUN_004028d0(*param_1,0);
  return 1;
}



undefined4 FUN_004a3ee0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0xc,uVar1);
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_004a3d80(in_ECX);
    *unaff_FS_OFFSET = local_c;
    return uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_004a3f50(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b7148;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_14 = 0;
  local_10 = 0;
  local_e = 0;
  local_4 = 0;
  if (((param_1 != (int *)0x0) && (iVar4 = (**(code **)(*param_1 + 0xc))(uVar3), iVar4 == 5)) &&
     (param_2 != 0)) {
    if (*(char *)((int)in_ECX + 5) == '\0') {
      if (*(char *)((int)param_1 + 5) == '\0') {
        if ((char)in_ECX[1] == '\0') {
          if ((char)param_1[1] == '\0') {
            if (*(byte *)((int)in_ECX + 6) < *(byte *)((int)param_1 + 6)) {
              (**(code **)(*param_1 + 0x24))(&local_14);
              (**(code **)(*in_ECX + 0x28))(&stack0xffffffe8);
            }
            bVar1 = *(byte *)((int)param_1 + 6);
            bVar2 = *(byte *)((int)in_ECX + 6);
            fVar5 = (float10)FUN_004842f0(((float)(int)((100 - (uint)bVar2) * (uint)bVar1 +
                                                       (uint)bVar2 * (uint)bVar2) +
                                          (float)(int)((100 - (uint)bVar1) * (uint)bVar2 +
                                                      (uint)bVar1 * (uint)bVar1)) * 0.005);
            FUN_004a3520((int)ROUND(fVar5) & 0xff);
          }
          else {
            *(char *)(in_ECX + 1) = (char)param_1[1];
            FUN_004a3520(*(undefined1 *)((int)param_1 + 6));
            (**(code **)(*param_1 + 0x24))(&local_14);
            (**(code **)(*in_ECX + 0x28))(&stack0xffffffe8);
          }
          goto LAB_004a4176;
        }
        if (((char)param_1[1] != '\0') && (*(byte *)((int)in_ECX + 6) < *(byte *)((int)param_1 + 6))
           ) {
          *(char *)(in_ECX + 1) = (char)param_1[1];
          FUN_004a3520(*(undefined1 *)((int)param_1 + 6));
          (**(code **)(*param_1 + 0x24))(&local_14);
          (**(code **)(*in_ECX + 0x28))(&stack0xffffffe8);
        }
      }
      local_4 = 0xffffffff;
      FUN_00402da0();
      *unaff_FS_OFFSET = local_c;
      return;
    }
    *(char *)(in_ECX + 1) = (char)param_1[1];
    FUN_004a3520(*(undefined1 *)((int)param_1 + 6));
    (**(code **)(*param_1 + 0x24))(&local_14);
    (**(code **)(*in_ECX + 0x28))(&stack0xffffffe8);
  }
LAB_004a4176:
  FUN_00401f20(local_14);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_004a41e0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  undefined1 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2726;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = 0;
  if (DAT_00b35414 == (undefined4 *)0x0) {
    iVar3 = FUN_00401f00(0x70,uVar2);
    local_4 = 0;
    if (iVar3 != 0) {
      iVar6 = FUN_0070e560(0x40,0x40,&DAT_00b25e00,1,1);
    }
    local_4 = 0xffffffff;
    puVar8 = (undefined1 *)(**(int **)(iVar6 + 0x5c) + *(int *)(iVar6 + 0x50) + 2);
    iVar3 = 0x40;
    do {
      iVar9 = 0x40;
      puVar7 = puVar8;
      do {
        fVar10 = (float10)FUN_0047e0b0(0x437f0000);
        local_10 = (undefined1)(int)ROUND(fVar10);
        puVar7[-2] = local_10;
        fVar10 = (float10)FUN_0047e0b0(0x437f0000);
        local_10 = (undefined1)(int)ROUND(fVar10);
        puVar7[-1] = local_10;
        fVar10 = (float10)FUN_0047e0b0(0x437f0000);
        local_10 = (undefined1)(int)ROUND(fVar10);
        *puVar7 = local_10;
        fVar10 = (float10)FUN_0047e0b0(0x437f0000);
        puVar8 = puVar7 + 4;
        iVar9 = iVar9 + -1;
        local_10 = (undefined1)(int)ROUND(fVar10);
        puVar7[1] = local_10;
        puVar7 = puVar8;
      } while (iVar9 != 0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(int *)(iVar6 + 0x68) = *(int *)(iVar6 + 0x68) + 1;
    iVar3 = FUN_00401f00(0x30);
    local_4 = 1;
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_00704800(iVar6);
    }
    puVar1 = DAT_00b35414;
    local_4 = 0xffffffff;
    if (DAT_00b35414 != puVar4) {
      if (DAT_00b35414 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(DAT_00b35414 + 1);
        if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
      }
      DAT_00b35414 = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar4 + 1);
      }
    }
    FUN_00405870(0);
  }
  puVar4 = DAT_00b35414;
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



void FUN_004a43e0(undefined1 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  *(undefined1 *)(in_ECX + 2) = param_1;
  return;
}



void FUN_004a4400(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  
  iVar3 = FUN_0052b4a0();
  while (iVar3 != 0) {
    piVar1 = (int *)in_ECX[1];
    puVar2 = (undefined4 *)*in_ECX;
    if (piVar1 == (int *)0x0) {
      *in_ECX = 0;
    }
    else {
      in_ECX[1] = piVar1[1];
      *in_ECX = *piVar1;
      FUN_00401f20(piVar1);
    }
    if (((char)in_ECX[2] != '\0') && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar3 = FUN_0052b4a0();
  }
  return;
}



int * FUN_004a4460(int param_1)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  
  while( true ) {
    if (in_ECX == (int *)0x0) {
      return (int *)0x0;
    }
    piVar1 = (int *)*in_ECX;
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xc))(), iVar2 == param_1)) break;
    in_ECX = (int *)in_ECX[1];
  }
  return piVar1;
}



undefined1 FUN_004a44a0(void)

{
  char cVar1;
  int *in_ECX;
  
  if (in_ECX != (int *)0x0) {
    while ((int *)*in_ECX != (int *)0x0) {
      cVar1 = (**(code **)(*(int *)*in_ECX + 0x1c))();
      if (cVar1 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



void thunk_FUN_004a4400(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  
  iVar3 = FUN_0052b4a0();
  while (iVar3 != 0) {
    piVar1 = (int *)in_ECX[1];
    puVar2 = (undefined4 *)*in_ECX;
    if (piVar1 == (int *)0x0) {
      *in_ECX = 0;
    }
    else {
      in_ECX[1] = piVar1[1];
      *in_ECX = *piVar1;
      FUN_00401f20(piVar1);
    }
    if (((char)in_ECX[2] != '\0') && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    iVar3 = FUN_0052b4a0();
  }
  return;
}



int * FUN_004a44d0(int *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_ECX;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)FUN_00401f00(0xc);
    if (param_1 == (int *)0x0) {
      param_1 = (int *)0x0;
    }
    else {
      uVar1 = *(undefined1 *)(in_ECX + 2);
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = uVar1;
    }
  }
  do {
    if (in_ECX == (undefined4 *)0x0) {
      return param_1;
    }
    if ((char)param_1[2] == '\0') {
      piVar2 = (int *)*in_ECX;
      if (piVar2 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 0xc))();
        piVar5 = param_1;
        do {
          if (((int *)*piVar5 != (int *)0x0) &&
             (iVar4 = (**(code **)(*(int *)*piVar5 + 0xc))(), iVar4 == iVar3)) goto LAB_004a45c5;
          piVar5 = (int *)piVar5[1];
        } while (piVar5 != (int *)0x0);
        goto LAB_004a4598;
      }
    }
    else {
      piVar2 = (int *)(**(code **)(*(int *)*in_ECX + 0x10))();
      if (piVar2 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 0xc))();
        piVar5 = param_1;
        do {
          if (((int *)*piVar5 != (int *)0x0) &&
             (iVar4 = (**(code **)(*(int *)*piVar5 + 0xc))(), iVar4 == iVar3)) {
            (**(code **)*piVar2)(1);
            goto LAB_004a45c5;
          }
          piVar5 = (int *)piVar5[1];
        } while (piVar5 != (int *)0x0);
LAB_004a4598:
        if (*param_1 != 0) {
          piVar5 = (int *)FUN_00401f00(8);
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            *piVar5 = *param_1;
            piVar5[1] = 0;
          }
          piVar5[1] = param_1[1];
          param_1[1] = (int)piVar5;
        }
        *param_1 = (int)piVar2;
      }
    }
LAB_004a45c5:
    in_ECX = (undefined4 *)in_ECX[1];
  } while( true );
}



void FUN_004a45f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a400a0;
  in_ECX[1] = 0;
  return;
}



undefined4 FUN_004a4600(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2787;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&local_c;
  *unaff_FS_OFFSET = &local_c;
  switch(param_1) {
  case 3:
    iVar2 = FUN_00401f00(0x10,uVar1);
    local_4 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_004a5610();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 4:
    iVar2 = FUN_00401f00(0x10,uVar1);
    local_4 = 1;
    if (iVar2 != 0) {
      uVar3 = FUN_004a4a80();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 5:
    iVar2 = FUN_00401f00(0xc,uVar1);
    local_4 = 2;
    if (iVar2 != 0) {
      uVar3 = FUN_004a3cd0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 6:
    iVar2 = FUN_00401f00(0xc,uVar1);
    local_4 = 3;
    if (iVar2 != 0) {
      uVar3 = FUN_004a35e0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
    break;
  case 7:
    iVar2 = FUN_00401f00(0x14,uVar1);
    local_4 = 4;
    if (iVar2 != 0) {
      uVar3 = FUN_004a55c0();
      *unaff_FS_OFFSET = local_c;
      return uVar3;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



int * FUN_004a4770(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0xc))();
    if (iVar1 == 2) {
      return param_1;
    }
  }
  return (int *)0x0;
}



int * FUN_004a47a0(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0xc))();
    if (iVar1 == 3) {
      return param_1;
    }
  }
  return (int *)0x0;
}



int * FUN_004a47d0(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0xc))();
    if (iVar1 == 4) {
      return param_1;
    }
  }
  return (int *)0x0;
}



int * FUN_004a4800(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0xc))();
    if (iVar1 == 5) {
      return param_1;
    }
  }
  return (int *)0x0;
}



int * FUN_004a4830(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0xc))();
    if (iVar1 == 6) {
      return param_1;
    }
  }
  return (int *)0x0;
}



int * FUN_004a4860(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0xc))();
    if (iVar1 == 7) {
      return param_1;
    }
  }
  return (int *)0x0;
}



undefined4 FUN_004a4890(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  code *pcVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  in_ECX[1] = param_2;
  iVar1 = FUN_004510b0();
  if (iVar1 < 0x504d4453) {
    if (iVar1 == 0x504d4452) {
      pcVar3 = *(code **)(*in_ECX + 0x10);
    }
    else {
      if (iVar1 < 0x4e4c4453) {
        if (iVar1 != 0x4e4c4452) {
          if ((iVar1 != 0x444d4452) && (iVar1 != 0x44534452)) {
            return 1;
          }
          pcVar3 = *(code **)(*in_ECX + 0x1c);
          goto LAB_004a49b9;
        }
      }
      else if (iVar1 != 0x4e4f4349) {
        return 1;
      }
      pcVar3 = *(code **)(*in_ECX + 0x14);
    }
  }
  else {
    if (iVar1 != 0x53474452) {
      if (iVar1 == 0x54414452) {
        local_8 = 0;
        local_4 = 0;
        FUN_00450c20(&local_8,8);
        DAT_00b3541c = (int *)(**(code **)(*in_ECX + 4))(local_8);
        if (DAT_00b3541c == (int *)0x0) {
          return 1;
        }
        (**(code **)(*DAT_00b3541c + 8))(&stack0xfffffff4);
        FUN_00446cb0(DAT_00b3541c);
        return 1;
      }
      if (iVar1 != 0x54574452) {
        return 1;
      }
      piVar2 = (int *)(**(code **)(*in_ECX + 0xc))(DAT_00b3541c);
      if (piVar2 == (int *)0x0) {
        return 1;
      }
      (**(code **)(*piVar2 + 0x20))(param_1,param_2);
      return 1;
    }
    pcVar3 = *(code **)(*in_ECX + 0x18);
  }
LAB_004a49b9:
  piVar2 = (int *)(*pcVar3)(DAT_00b3541c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x20))(param_1);
  }
  return 1;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_004a49f0(int param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = 0x4a4a11;
    iVar1 = FUN_004510b0();
    if (iVar1 == 0x504d4452) {
      uStack_18 = 0x4a4a23;
      iVar1 = -*(int *)(param_1 + 0x254);
      *(undefined4 *)((int)&uStack_18 + iVar1) = 0;
      *(undefined1 **)(auStack_1c + iVar1) = &stack0xffffffec + iVar1;
      *(undefined4 *)((int)&uStack_20 + iVar1) = 0x4a4a2f;
      FUN_00450c20();
      *(undefined4 *)((int)&uStack_18 + iVar1) = 0;
      *(undefined1 **)(auStack_1c + iVar1) = &stack0xffffffec + iVar1;
      *(undefined4 *)((int)&uStack_20 + iVar1) = 0x4a4a3a;
      FUN_004028d0();
      return 1;
    }
  }
  return 0;
}



void FUN_004a4a80(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b27c3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004a34c0(uVar1);
  *in_ECX = &PTR_FUN_00a400dc;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  local_4 = 1;
  FUN_004028d0("Default Region Name",0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a4af0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b27e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a400dc;
  FUN_00401f20(in_ECX[2],uVar1);
  in_ECX[2] = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  local_4 = 0xffffffff;
  FUN_004a3510();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a4b60(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int in_ECX;
  
  FUN_004a3560();
  if (*(ushort *)(in_ECX + 0xc) == 0xffff) {
    pcVar3 = *(char **)(in_ECX + 8);
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar4 = (int)pcVar3 - (int)pcVar1;
  }
  else {
    uVar4 = (uint)*(ushort *)(in_ECX + 0xc);
  }
  if (uVar4 != 0) {
    pcVar1 = *(char **)(in_ECX + 8);
    pcVar3 = pcVar1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    thunk_FUN_0046ae40(0x504d4452,pcVar1,pcVar3 + (1 - (int)(pcVar1 + 1)));
  }
  return;
}



void FUN_004a4bf0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  uint uVar4;
  undefined4 unaff_EDI;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  undefined1 auStack_1c [8];
  int aiStack_14 [2];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b2830;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0xc))(uVar1);
    if ((iVar2 == 4) && (param_2 != 0)) {
      if (*(char *)((int)in_ECX + 5) != '\0') {
        *(char *)(in_ECX + 1) = (char)param_1[1];
        FUN_004a3520(*(undefined1 *)((int)param_1 + 6));
        uVar3 = (**(code **)(*param_1 + 0x28))(auStack_1c);
        puStack_8 = (undefined1 *)0x0;
        (**(code **)(*in_ECX + 0x2c))(uVar3);
        FUN_00401f20(unaff_EDI);
        *unaff_FS_OFFSET = aiStack_14[0];
        return;
      }
      if (*(char *)((int)param_1 + 5) == '\0') {
        if ((char)in_ECX[1] == '\0') {
          if ((char)param_1[1] == '\0') {
            if (*(byte *)((int)in_ECX + 6) < *(byte *)((int)param_1 + 6)) {
              uVar3 = (**(code **)(*param_1 + 0x28))(aiStack_14);
              puStack_8 = (undefined1 *)0x3;
              (**(code **)(*in_ECX + 0x2c))(uVar3);
              uStack_4 = 0xffffffff;
              FUN_00402da0();
            }
            uVar4 = (uint)*(byte *)((int)param_1 + 6);
            uVar1 = (uint)*(byte *)((int)in_ECX + 6);
            fVar5 = (float10)FUN_004842f0(((float)(int)((100 - uVar1) * uVar4 + uVar1 * uVar1) +
                                          (float)(int)((100 - uVar4) * uVar1 + uVar4 * uVar4)) *
                                          0.005);
            FUN_004a3520((int)ROUND(fVar5) & 0xff);
            goto LAB_004a4e18;
          }
          *(char *)(in_ECX + 1) = (char)param_1[1];
          FUN_004a3520(*(undefined1 *)((int)param_1 + 6));
          uVar3 = (**(code **)(*param_1 + 0x28))(auStack_1c);
          puStack_8 = (undefined1 *)0x2;
        }
        else {
          if (((char)param_1[1] == '\0') ||
             (*(byte *)((int)param_1 + 6) <= *(byte *)((int)in_ECX + 6))) goto LAB_004a4e18;
          *(char *)(in_ECX + 1) = (char)param_1[1];
          FUN_004a3520(*(undefined1 *)((int)param_1 + 6));
          uVar3 = (**(code **)(*param_1 + 0x28))(auStack_1c);
          puStack_8 = (undefined1 *)0x1;
        }
        (**(code **)(*in_ECX + 0x2c))(uVar3);
        local_c = -1;
        FUN_00402da0();
        *unaff_FS_OFFSET = aiStack_14[0];
        return;
      }
    }
  }
LAB_004a4e18:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a4e30(byte param_1)

{
  FUN_004a4af0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004a4ea0(int *param_1)

{
  char *_Str2;
  char *_Str1;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_14 [4];
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b286b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004a34e0(param_1);
  *in_ECX = &PTR_FUN_00a400dc;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  local_4 = 1;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x28))(local_14,uVar1);
  _Str2 = (char *)*puVar2;
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  if ((_Str2 == (char *)0x0) || (_Str1 = (char *)in_ECX[2], _Str1 == (char *)0x0)) {
    iVar3 = (uint)(_Str2 == (char *)0x0) * 2 + -1;
  }
  else {
    iVar3 = __stricmp(_Str1,_Str2);
  }
  if (iVar3 != 0) {
    FUN_004028d0(*puVar2,0);
  }
  FUN_00401f20(in_ECX);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 FUN_004a4f70(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_004a4ea0(in_ECX);
    *unaff_FS_OFFSET = local_c;
    return uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_004a5040(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0xf;
  in_ECX[2] = 0;
  return;
}



void FUN_004a5060(int *param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2898;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004a34e0(param_1);
  *in_ECX = &PTR_FUN_00a40110;
  local_4 = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  uVar1 = (**(code **)(*param_1 + 0x24))(uVar1);
  if ((uVar1 < 3) && (uVar1 != in_ECX[2])) {
    in_ECX[2] = uVar1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a50e0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *in_ECX;
  uint uVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004a3560(uVar3);
  uVar4 = (**(code **)(*in_ECX + 0x24))();
  FUN_0046ba80(0x444d4452,uVar4);
  uVar3 = 0;
  piVar8 = in_ECX + 3;
  for (piVar1 = piVar8; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      uVar3 = uVar3 + 1;
    }
  }
  puVar5 = (undefined4 *)
           FUN_00401f00(-(uint)((int)((ulonglong)uVar3 * 0xc >> 0x20) != 0) |
                        (uint)((ulonglong)uVar3 * 0xc));
  uStack_4 = 0;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    _vector_constructor_iterator_(puVar5,0xc,uVar3,FUN_004a5040);
  }
  uStack_4 = 0xffffffff;
  puVar6 = puVar5;
  for (uVar7 = 0;
      ((piVar8 != (int *)0x0 && (puVar2 = (undefined4 *)*piVar8, puVar2 != (undefined4 *)0x0)) &&
      (uVar7 < uVar3)); uVar7 = uVar7 + 1) {
    *puVar6 = *puVar2;
    puVar6[1] = puVar2[1];
    puVar6[2] = puVar2[2];
    piVar8 = (int *)piVar8[1];
    puVar6 = puVar6 + 3;
  }
  FUN_0046ae40(0x44534452,puVar5,uVar3 * 0xc);
  FUN_00401f20(puVar5);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_004a51f0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int in_ECX;
  int *piVar6;
  uint *unaff_FS_OFFSET;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd8ab;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (uint)&local_c;
  if ((param_1 != 0) &&
     ((iVar2 = FUN_004510b0(uVar1), iVar2 == 0x444d4452 ||
      (iVar2 = FUN_004510b0(uVar1), iVar2 == 0x44534452)))) {
    iVar2 = FUN_004510b0(uVar1);
    if (iVar2 == 0x444d4452) {
      FUN_004510e0(in_ECX + 8);
      uVar3 = 1;
      goto LAB_004a536e;
    }
    uVar1 = *(uint *)(param_1 + 0x254) / 0xc;
    if (*(uint *)(param_1 + 0x254) != 4) {
      piVar4 = (int *)FUN_00401f00(-(uint)((int)((ulonglong)uVar1 * 0xc >> 0x20) != 0) |
                                   (uint)((ulonglong)uVar1 * 0xc));
      local_4 = 0;
      piVar6 = (int *)0x0;
      if (piVar4 != (int *)0x0) {
        _vector_constructor_iterator_(piVar4,0xc,uVar1,FUN_004a5040);
        piVar6 = piVar4;
      }
      local_4 = 0xffffffff;
      FUN_00450c20(piVar6,uVar1 * 0xc);
      piVar4 = piVar6;
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        piVar5 = (int *)FUN_00401f00(0xc);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          *piVar5 = 0;
          piVar5[1] = 0xf;
          piVar5[2] = 0;
        }
        *piVar5 = *piVar4;
        piVar5[1] = piVar4[1];
        piVar5[2] = piVar4[2];
        if ((*piVar5 == 0) || (iVar2 = FUN_004473f0(*piVar5), iVar2 == 0)) {
          FUN_00401f20(piVar5);
        }
        else {
          iVar2 = FUN_004473f0(*piVar5);
          *piVar5 = iVar2;
          FUN_0067b1e0(piVar5);
        }
        piVar4 = piVar4 + 3;
      }
      FUN_00401f20(piVar6);
      uVar3 = 1;
      goto LAB_004a536e;
    }
  }
  uVar3 = 0;
LAB_004a536e:
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



undefined4 FUN_004a5390(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0xc);
  while ((piVar1 != (int *)0x0 && (iVar2 = *piVar1, iVar2 != 0))) {
    piVar3 = *(int **)(in_ECX + 0x10);
    if (piVar3 == (int *)0x0) {
      *piVar1 = 0;
    }
    else {
      *(int *)(in_ECX + 0x10) = piVar3[1];
      *piVar1 = *piVar3;
      FUN_00401f20(piVar3);
    }
    FUN_00401f20(iVar2);
  }
  if ((*(int *)(in_ECX + 0x10) == 0) && (*piVar1 == 0)) {
    return 1;
  }
  return 0;
}



undefined4 FUN_004a53f0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_004a5060(in_ECX);
    *unaff_FS_OFFSET = local_c;
    return uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_004a55c0(void)

{
  undefined4 *in_ECX;
  
  FUN_004a34c0();
  *in_ECX = &PTR_FUN_00a40110;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[2] = 0;
  return;
}



void FUN_004a55e0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a40110;
  FUN_004a5390();
  FUN_004a3510();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004a5610(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b27e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004a34c0(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a40140;
  FUN_004eed50();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a5670(int param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b28d3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004a34e0(param_1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a40140;
  FUN_004eed50(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004eed80(param_1 + 8,0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a56f0(void)

{
  FUN_004a3560();
  FUN_004eeb30(0x54574452);
  return;
}



undefined4 FUN_004a5710(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_004a5670(in_ECX);
    *unaff_FS_OFFSET = local_c;
    return uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_004a5780(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b27e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a40140;
  local_4 = 0;
  thunk_FUN_005b1d70(uVar1);
  local_4 = 0xffffffff;
  FUN_004a3510();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a57e0(byte param_1)

{
  FUN_004a5780();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004a59e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 *in_ECX;
  char *pcVar6;
  undefined4 *puStack_4;
  
  *in_ECX = &PTR_LAB_00a401b8;
  puStack_4 = in_ECX;
  if ((DAT_00b33a98 == 0) || (*(undefined4 **)(DAT_00b33a98 + 0xcd8) == (undefined4 *)0x0)) {
LAB_004a5a69:
    iVar1 = FUN_0046b250(*param_1);
    iVar3 = FUN_0046b250(param_1[1]);
  }
  else {
    iVar1 = (**(code **)**(undefined4 **)(DAT_00b33a98 + 0xcd8))();
    if (iVar1 == 0) goto LAB_004a5a69;
    (**(code **)**(undefined4 **)(DAT_00b33a98 + 0xcd8))();
    puStack_4 = (undefined4 *)*param_1;
    uVar2 = FUN_0046b680(0xffffffff);
    FUN_0046bb20(&puStack_4,uVar2);
    iVar1 = FUN_0046b250(puStack_4);
    puStack_4 = (undefined4 *)param_1[1];
    FUN_0046bb20(&puStack_4,uVar2);
    iVar3 = FUN_0046b250(puStack_4);
  }
  in_ECX[1] = 0;
  if (iVar1 == 0) {
    iVar1 = (**(code **)**(undefined4 **)(DAT_00b33a98 + 0xcd8))();
    if (iVar1 != 0) {
      (**(code **)**(undefined4 **)(DAT_00b33a98 + 0xcd8))();
      iVar1 = FUN_00404e50();
      if (iVar1 == 0) {
        puVar5 = &DAT_00a2f7ec;
      }
      else {
        piVar4 = (int *)(**(code **)**(undefined4 **)(DAT_00b33a98 + 0xcd8))();
        puVar5 = (undefined1 *)(**(code **)(*piVar4 + 0xd4))();
      }
      iVar1 = (**(code **)**(undefined4 **)(DAT_00b33a98 + 0xcd8))();
      FUN_004a7a60("Instantiating a Grass region object for region %s (%d) without an object.",
                   puVar5,*(undefined4 *)(iVar1 + 0xc));
      goto LAB_004a5bba;
    }
    pcVar6 = "Instantiating a Grass region object without an object.";
  }
  else {
    if (*(char *)(iVar1 + 4) == '\x1d') {
      in_ECX[1] = iVar1;
      goto LAB_004a5bba;
    }
    iVar1 = (**(code **)**(undefined4 **)(DAT_00b33a98 + 0xcd8))();
    if (iVar1 != 0) {
      (**(code **)**(undefined4 **)(DAT_00b33a98 + 0xcd8))();
      iVar1 = FUN_00404e50();
      if (iVar1 == 0) {
        puVar5 = &DAT_00a2f7ec;
      }
      else {
        piVar4 = (int *)(**(code **)**(undefined4 **)(DAT_00b33a98 + 0xcd8))();
        puVar5 = (undefined1 *)(**(code **)(*piVar4 + 0xd4))();
      }
      iVar1 = (**(code **)**(undefined4 **)(DAT_00b33a98 + 0xcd8))();
      FUN_004a7a60("Instantiating a Grass region object for region %s (%d) with a non-Grass object."
                   ,puVar5,*(undefined4 *)(iVar1 + 0xc));
      goto LAB_004a5bba;
    }
    pcVar6 = "Instantiating a Grass region object with a non-Grass object.";
  }
  FUN_004a7a60(pcVar6);
LAB_004a5bba:
  in_ECX[2] = 0;
  if ((in_ECX[1] != 0) && (iVar3 != 0)) {
    if (*(char *)(iVar3 + 4) == '\x0e') {
      in_ECX[2] = iVar3;
      return;
    }
    FUN_004a7a60("Instantiating a Grass region object with a parent that isn\'t a land texture.");
  }
  return;
}



undefined4 * FUN_004a5c00(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_00401f00(0xc,uVar1);
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = (**(code **)(*in_ECX + 0xc))();
      uVar4 = (**(code **)(*in_ECX + 4))();
      puVar2[1] = uVar4;
      *puVar2 = &PTR_LAB_00a401b8;
      puVar2[2] = uVar3;
      *unaff_FS_OFFSET = local_c;
      return puVar2;
    }
    param_1 = (undefined4 *)0x0;
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



float10 FUN_004a5ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                    char param_5)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int *in_ECX;
  float10 fVar10;
  float10 fVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  float fStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [12];
  
  FUN_004a6920();
  piVar2 = (int *)in_ECX[1];
  if (((piVar2 == (int *)0x0) || (iVar6 = FUN_0044a270(param_1,param_2,param_4,0), iVar6 == 0)) ||
     (cVar4 = FUN_004c97f0(), cVar4 != '\0')) goto switchD_004a5db4_default;
  uVar7 = (**(code **)(*piVar2 + 0x120))();
  param_4 = (float)(uVar7 & 0xff);
  fStack_24 = (float)(int)param_4 / 100.0;
  local_20 = param_1;
  uStack_1c = param_2;
  iVar6 = (**(code **)(*in_ECX + 0xc))();
  if (iVar6 != 0) {
    puVar13 = &param_1;
    FUN_004ce3c0(puVar13);
    iVar6 = FUN_004c5aa0(puVar13);
    if ((iVar6 == 0) ||
       (iVar6 = *(int *)(iVar6 + 0xc), iVar8 = (**(code **)(*in_ECX + 0xc))(),
       iVar6 != *(int *)(iVar8 + 0xc))) goto switchD_004a5db4_default;
  }
  uVar5 = (**(code **)(*(int *)in_ECX[1] + 0x140))();
  fVar3 = (float)uVar5;
  fVar10 = (float10)FUN_004cace0();
  puVar13 = &param_4;
  fVar1 = (float)fVar10;
  puVar12 = &param_1;
  FUN_004ce3c0(puVar12,puVar13);
  FUN_004c5b50(puVar12,puVar13);
  uVar9 = (**(code **)(*(int *)in_ECX[1] + 0x148))();
  switch(uVar9) {
  case 0:
    fVar3 = fVar1 + fVar3;
    goto LAB_004a5dc7;
  case 1:
    if (param_4 < fVar1) {
LAB_004a5e0c:
      return (float10)0;
    }
    if (fVar1 + fVar3 < param_4) {
      return (float10)0;
    }
    break;
  case 2:
    if (fVar1 - fVar3 < param_4) {
      return (float10)0;
    }
    break;
  case 3:
    if (fVar1 < param_4) goto LAB_004a5e0c;
    uVar5 = (ushort)(fVar1 - fVar3 < param_4) << 8 | (ushort)(fVar1 - fVar3 == param_4) << 0xe;
    goto LAB_004a5dc9;
  case 4:
    param_4 = ABS(fVar1 - param_4);
LAB_004a5dc7:
    uVar5 = (ushort)(fVar3 < param_4) << 8 | (ushort)(fVar3 == param_4) << 0xe;
LAB_004a5dc9:
    if (uVar5 == 0) goto switchD_004a5db4_default;
    break;
  case 5:
    param_4 = ABS(fVar1 - param_4);
    if (fVar3 < param_4) {
      return (float10)0;
    }
    break;
  case 6:
    if (fVar1 + fVar3 < param_4) {
      return (float10)0;
    }
    break;
  case 7:
    if (param_4 < fVar1 - fVar3) goto switchD_004a5db4_default;
    break;
  default:
    goto switchD_004a5db4_default;
  }
  puVar14 = auStack_c;
  puVar13 = &uStack_18;
  puVar12 = &param_1;
  FUN_004ce3c0(puVar12,puVar13,puVar14);
  cVar4 = FUN_004c3c00(puVar12,puVar13,puVar14);
  if (cVar4 != '\0') {
    fVar10 = (float10)FUN_004a6810(uStack_18,uStack_14,uStack_10);
    param_4 = (float)fVar10;
    fVar11 = (float10)(**(code **)(*(int *)in_ECX[1] + 0x13c))();
    fVar1 = param_4;
    if ((fVar11 < (float10)(float)fVar10) ||
       (fVar10 = (float10)(**(code **)(*(int *)in_ECX[1] + 0x138))(), (float10)fVar1 < fVar10)) {
switchD_004a5db4_default:
      return (float10)0;
    }
  }
  if (param_5 != '\0') {
    fVar10 = (float10)FUN_004cc1a0(&local_20,6,in_ECX);
    fStack_24 = (float)(fVar10 * (float10)fStack_24);
  }
  return (float10)fStack_24;
}



void FUN_004a5fd0(undefined1 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a40344;
  *(undefined1 *)(in_ECX + 3) = param_1;
  in_ECX[4] = 0;
  return;
}



void FUN_004a5ff0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_0067b1e0(param_1);
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
  return;
}



void FUN_004a6010(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 4);
  while (piVar1 != (int *)0x0) {
    puVar2 = *(undefined4 **)(in_ECX + 8);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 8) = puVar2[1];
      *(undefined4 *)(in_ECX + 4) = *puVar2;
      FUN_00401f20(puVar2);
    }
    if ((*(char *)(in_ECX + 0xc) != '\0') && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 8))(1);
    }
    piVar1 = *(int **)(in_ECX + 4);
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}



int * FUN_004a6070(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  bool bVar4;
  
  if (in_ECX == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(in_ECX + 4);
  }
  do {
    if ((piVar3 == (int *)0x0) || (piVar1 = (int *)*piVar3, piVar1 == (int *)0x0)) {
      return (int *)0x0;
    }
    iVar2 = (**(code **)(*piVar1 + 4))();
    if (*(int *)(iVar2 + 0xc) == param_1) {
      iVar2 = (**(code **)(*piVar1 + 0xc))();
      if (param_2 < 0) {
        bVar4 = iVar2 == 0;
      }
      else {
        if (iVar2 == 0) goto LAB_004a60c7;
        iVar2 = (**(code **)(*piVar1 + 0xc))();
        bVar4 = *(int *)(iVar2 + 0xc) == param_2;
      }
      if (bVar4) {
        return piVar1;
      }
    }
LAB_004a60c7:
    piVar3 = (int *)piVar3[1];
  } while( true );
}



uint FUN_004a60e0(int param_1)

{
  int *in_EAX;
  int in_ECX;
  
  if (param_1 != 0) {
    in_EAX = (int *)(in_ECX + 4);
    while( true ) {
      if (in_EAX == (int *)0x0) {
        FUN_0067b1e0(param_1);
        *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
        return 1;
      }
      if (*in_EAX == param_1) break;
      in_EAX = (int *)in_EAX[1];
    }
  }
  return (uint)in_EAX & 0xffffff00;
}



undefined4 * FUN_004a6120(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_ECX;
  int *piVar4;
  
  if (in_ECX == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(in_ECX + 4);
  }
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)FUN_00401f00(0x14);
    if (param_1 == (undefined4 *)0x0) {
      param_1 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined1 *)(in_ECX + 0xc);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = &PTR_FUN_00a40344;
      *(undefined1 *)(param_1 + 3) = uVar1;
      param_1[4] = 0;
    }
  }
  do {
    if ((piVar4 == (int *)0x0) || (piVar3 = (int *)*piVar4, piVar3 == (int *)0x0)) {
      return param_1;
    }
    if (*(char *)(param_1 + 3) == '\0') {
      for (puVar2 = param_1 + 1; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[1]) {
        if ((int *)*puVar2 == piVar3) goto LAB_004a61cc;
      }
LAB_004a61c4:
      FUN_0067b1e0(piVar3);
      param_1[4] = param_1[4] + 1;
    }
    else {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x14))(0);
      if (piVar3 != (int *)0x0) {
        for (puVar2 = param_1 + 1; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[1]) {
          if ((int *)*puVar2 == piVar3) {
            (**(code **)(*piVar3 + 8))(1);
            goto LAB_004a61cc;
          }
        }
        goto LAB_004a61c4;
      }
    }
LAB_004a61cc:
    piVar4 = (int *)piVar4[1];
  } while( true );
}



void FUN_004a61e0(float param_1,int param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (1.0 < param_1) {
    param_1 = param_1 / 100.0;
  }
  if (1.0 < param_3) {
    param_3 = param_3 / 100.0;
  }
  if (param_2 != 0) {
    if ((param_1 < 0.0) || (1.0 < param_1)) {
      return;
    }
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      for (piVar1 = (int *)(param_2 + 4); (piVar1 != (int *)0x0 && ((int *)*piVar1 != (int *)0x0));
          piVar1 = (int *)piVar1[1]) {
        iVar2 = (**(code **)(*(int *)*piVar1 + 4))();
        if (iVar2 != 0) {
          uVar3 = (**(code **)(*(int *)*piVar1 + 0x14))(0);
          FUN_004a60e0(uVar3);
        }
      }
      return;
    }
  }
  return;
}



void FUN_004a62a0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a40344;
  FUN_004a6010();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004a62d0(char param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  uint uVar2;
  
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a4034c;
  *(char *)(in_ECX + 3) = param_1;
  if (param_1 != '\0') {
    if (DAT_00b35460 == 0) {
      uVar2 = 0;
      do {
        puVar1 = *(undefined4 **)((int)&DAT_00b35420 + uVar2);
        if (puVar1 != (undefined4 *)0x0) {
          *(undefined4 *)((int)&DAT_00b35420 + uVar2) = 0;
          (**(code **)*puVar1)(1);
        }
        puVar1 = *(undefined4 **)((int)&DAT_00b35424 + uVar2);
        if (puVar1 != (undefined4 *)0x0) {
          *(undefined4 *)((int)&DAT_00b35424 + uVar2) = 0;
          (**(code **)*puVar1)(1);
        }
        uVar2 = uVar2 + 8;
      } while (uVar2 < 0x40);
    }
    DAT_00b35460 = DAT_00b35460 + 1;
  }
  return;
}



undefined4 FUN_004a6350(int param_1)

{
  int in_ECX;
  int *piVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  piVar1 = (int *)(in_ECX + 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      FUN_00446cb0(param_1);
      return 1;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return 1;
}



void FUN_004a6380(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 4);
  while (piVar1 != (int *)0x0) {
    puVar2 = *(undefined4 **)(in_ECX + 8);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 8) = puVar2[1];
      *(undefined4 *)(in_ECX + 4) = *puVar2;
      FUN_00401f20(puVar2);
    }
    if ((*(char *)(in_ECX + 0xc) != '\0') && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x10))(1);
    }
    piVar1 = *(int **)(in_ECX + 4);
  }
  return;
}



int FUN_004a63e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  if (in_ECX != 0) {
    for (piVar1 = (int *)(in_ECX + 4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      iVar2 = *piVar1;
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) == param_1)) {
        return iVar2;
      }
    }
  }
  return 0;
}



uint FUN_004a6410(int param_1)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  
  if (in_ECX == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(in_ECX + 4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(param_1 + 4);
  }
  if (piVar2 != (int *)0x0) {
    do {
      if ((piVar1 == (int *)0x0) || (*piVar2 != *piVar1)) goto LAB_004a6446;
      piVar2 = (int *)piVar2[1];
      piVar1 = (int *)piVar1[1];
    } while (piVar2 != (int *)0x0);
    if (piVar1 == (int *)0x0) {
      return 1;
    }
  }
LAB_004a6446:
  return (uint)piVar1 & 0xffffff00;
}



int * FUN_004a6460(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int in_ECX;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *unaff_FS_OFFSET;
  undefined4 *local_1c;
  int *local_18;
  int *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b28fb;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar4 = false;
  bVar3 = 0;
  local_10 = (int *)0x0;
  local_18 = (int *)0x0;
  if (in_ECX == 0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = (int *)(in_ECX + 4);
  }
  local_1c = (undefined4 *)FUN_00401f00(0x10,uVar6);
  if (local_1c == (undefined4 *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    local_1c[1] = 0;
    local_1c[2] = 0;
    *local_1c = &PTR_FUN_00a4034c;
    *(undefined1 *)(local_1c + 3) = 0;
  }
  local_4 = 0xffffffff;
  for (; (piVar11 != (int *)0x0 && (iVar10 = *piVar11, iVar10 != 0)); piVar11 = (int *)piVar11[1]) {
    if (((*(uint *)(iVar10 + 8) >> 5 & 1) == 0) &&
       ((((param_3 == 0 || (param_3 == *(int *)(iVar10 + 0x20))) &&
         (iVar7 = FUN_004a4460(param_1), iVar7 != 0)) && (*(char *)(iVar7 + 5) == '\0')))) {
      if (param_2 == 0) {
        for (piVar9 = local_1c + 1; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[1]) {
          if (*piVar9 == iVar10) goto LAB_004a6571;
        }
        FUN_00446cb0(iVar10);
      }
      else {
        piVar9 = *(int **)(iVar10 + 0x1c);
        while( true ) {
          if ((piVar9 == (int *)0x0) || (*piVar9 == 0)) goto LAB_004a6571;
          cVar5 = FUN_004a7330(param_2);
          if (cVar5 != '\0') break;
          piVar9 = (int *)piVar9[1];
        }
        FUN_004a6350(iVar10);
      }
    }
LAB_004a6571:
  }
  puVar1 = (undefined4 *)(&DAT_00b35420)[param_1 * 2];
  piVar11 = &DAT_00b35420 + param_1 * 2;
  if (puVar1 != (undefined4 *)0x0) {
    if (((&DAT_00b35424)[param_1 * 2] != 0) && (cVar5 = FUN_004a6410(local_1c), cVar5 != '\0')) {
      FUN_004526e0();
      if (local_1c != (undefined4 *)0x0) {
        (**(code **)*local_1c)(1);
      }
      local_18 = (int *)*piVar11;
      goto LAB_004a6739;
    }
    if (puVar1 != (undefined4 *)0x0) {
      *piVar11 = 0;
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)(&DAT_00b35424)[param_1 * 2];
  piVar9 = &DAT_00b35424 + param_1 * 2;
  if (puVar1 != (undefined4 *)0x0) {
    *piVar9 = 0;
    (**(code **)*puVar1)(1);
  }
  if (local_1c != (undefined4 *)0x0) {
    piVar12 = local_1c + 1;
    piVar13 = piVar12;
    if (piVar12 != (int *)0x0) {
      do {
        if (*piVar13 == 0) break;
        piVar8 = (int *)FUN_004a4460(param_1);
        if (piVar8 != (int *)0x0) {
          if ((char)piVar8[1] == '\0') {
            if (!bVar4) {
              if (local_18 == (int *)0x0) {
                local_18 = (int *)(**(code **)(*piVar8 + 0x10))();
              }
              else {
                iVar10 = 0;
                for (piVar2 = piVar12; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
                  if (*piVar2 != 0) {
                    iVar10 = iVar10 + 1;
                  }
                }
                (**(code **)(*local_18 + 0x18))(piVar8,iVar10);
              }
            }
          }
          else {
            bVar4 = true;
            if (local_18 != (int *)0x0) {
              (**(code **)*local_18)(1);
              local_18 = (int *)0x0;
            }
            if (bVar3 < *(byte *)((int)piVar8 + 6)) {
              local_10 = piVar8;
              bVar3 = *(byte *)((int)piVar8 + 6);
            }
          }
        }
        piVar8 = piVar13 + 1;
        piVar13 = (int *)*piVar8;
      } while ((int *)*piVar8 != (int *)0x0);
      if (bVar4) {
        local_18 = (int *)(**(code **)(*local_10 + 0x10))();
      }
      if (local_18 != (int *)0x0) {
        if ((undefined4 *)*piVar11 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar11)(1);
        }
        *piVar11 = (int)local_18;
        if (*piVar9 != 0) {
          FUN_004526e0();
          if ((undefined4 *)*piVar9 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar9)(1);
          }
        }
        *piVar9 = (int)local_1c;
        goto LAB_004a6739;
      }
    }
    FUN_004526e0();
    (**(code **)*local_1c)(1);
  }
LAB_004a6739:
  *unaff_FS_OFFSET = local_c;
  return local_18;
}



void FUN_004a6750(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  uint uVar2;
  
  *in_ECX = &PTR_FUN_00a4034c;
  FUN_004a6380();
  if ((*(char *)(in_ECX + 3) != '\0') && (DAT_00b35460 = DAT_00b35460 + -1, DAT_00b35460 == 0)) {
    uVar2 = 0;
    do {
      puVar1 = *(undefined4 **)((int)&DAT_00b35420 + uVar2);
      if (puVar1 != (undefined4 *)0x0) {
        *(undefined4 *)((int)&DAT_00b35420 + uVar2) = 0;
        (**(code **)*puVar1)(1);
      }
      puVar1 = *(undefined4 **)((int)&DAT_00b35424 + uVar2);
      if (puVar1 != (undefined4 *)0x0) {
        *(undefined4 *)((int)&DAT_00b35424 + uVar2) = 0;
        (**(code **)*puVar1)(1);
      }
      uVar2 = uVar2 + 8;
    } while (uVar2 < 0x40);
  }
  return;
}



void FUN_004a67b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004a6920();
  local_8 = param_2;
  local_4 = param_3;
  FUN_004a6460(param_1,&local_8,param_5);
  return;
}



void FUN_004a67f0(byte param_1)

{
  FUN_004a6750();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



float10 FUN_004a6810(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  
  FUN_0043f350(param_1,param_2,param_3);
  fVar1 = (float10)FUN_00986130();
  return (float10)(float)fVar1;
}



undefined4 FUN_004a6860(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  
  if (param_1 == 0) {
    return 0;
  }
  piVar1 = (int *)(in_ECX + 4);
  for (piVar2 = piVar1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if (*piVar2 == param_1) {
      return 1;
    }
  }
  if ((((char)param_2 != '\0') || ((char)param_3 != '\0')) && (in_ECX != 0)) {
    for (; (piVar1 != (int *)0x0 && ((int *)*piVar1 != (int *)0x0)); piVar1 = (int *)piVar1[1]) {
      if ((((char)param_2 != '\0') ||
          ((((char)param_3 != '\0' && (iVar4 = (**(code **)(*(int *)*piVar1 + 4))(), iVar4 != 0)) &&
           ((*(int *)(*piVar1 + 4) != 0 &&
            (iVar4 = FUN_009832e6(*(int *)(*piVar1 + 4),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0530c,0),
            iVar4 != 0)))))) && (cVar3 = FUN_004a6860(param_1,param_2,param_3), cVar3 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



void FUN_004a6920(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  return;
}



void FUN_004a6930(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}



void FUN_004a6950(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}



void FUN_004a6970(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return;
}



ushort FUN_004a6990(float *param_1)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  ushort uVar3;
  
  fVar1 = *param_1;
  fVar2 = *in_ECX;
  if (fVar2 <= fVar1) {
    fVar1 = fVar1 - fVar2;
    if (0.001 < fVar1 || (fVar1 == 0.001) != 0) {
      return (ushort)(0.001 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
             (ushort)(fVar1 == 0.001) << 0xe;
    }
  }
  else {
    fVar2 = fVar2 - fVar1;
    if (0.001 < fVar2 || (fVar2 == 0.001) != 0) {
      return (ushort)(0.001 < fVar2) << 8 | (ushort)NAN(fVar2) << 10 |
             (ushort)(fVar2 == 0.001) << 0xe;
    }
  }
  fVar1 = param_1[1];
  fVar2 = in_ECX[1];
  if (fVar1 < fVar2) {
    fVar2 = fVar2 - fVar1;
    uVar3 = (ushort)(fVar2 < 0.001) << 8 | (ushort)NAN(fVar2) << 10 |
            (ushort)(fVar2 == 0.001) << 0xe;
    if (fVar2 >= 0.001) {
      return uVar3;
    }
  }
  else {
    fVar1 = fVar1 - fVar2;
    uVar3 = (ushort)(fVar1 < 0.001) << 8 | (ushort)NAN(fVar1) << 10 |
            (ushort)(fVar1 == 0.001) << 0xe;
    if (fVar1 >= 0.001) {
      return uVar3;
    }
  }
  return CONCAT11((char)(uVar3 >> 8),1);
}



void FUN_004a6a20(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_00401f00(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      *puVar1 = *in_ECX;
      puVar1[1] = in_ECX[1];
      return;
    }
    param_1 = (undefined4 *)0x0;
  }
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  return;
}



float10 FUN_004a6a60(float *param_1)

{
  float *in_ECX;
  
  if (param_1 == (float *)0x0) {
    return (float10)-1.0;
  }
  return (float10)((*in_ECX - *param_1) * (*in_ECX - *param_1) +
                  (in_ECX[1] - param_1[1]) * (in_ECX[1] - param_1[1]));
}



float10 FUN_004a6aa0(float *param_1,float *param_2,float param_3)

{
  if ((param_1 != (float *)0x0) && (param_2 != (float *)0x0)) {
    return (float10)(*param_2 -
                    ((*param_1 - *param_2) / (param_1[1] - param_2[1])) * (param_2[1] - param_3));
  }
  return (float10)0;
}



ushort FUN_004a6af0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  ushort in_AX;
  ushort uVar9;
  
  pfVar8 = param_1;
  if ((((param_1 == (float *)0x0) || (param_2 == (float *)0x0)) || (param_3 == (float *)0x0)) ||
     (param_4 == (float *)0x0)) goto LAB_004a6b7b;
  fVar6 = *param_2 - *param_1;
  fVar7 = *param_3 - *param_4;
  if (0.0 <= fVar6) {
    fVar1 = *param_1;
    param_1 = (float *)*param_2;
  }
  else {
    fVar1 = *param_2;
    param_1 = (float *)*param_1;
  }
  if (fVar7 <= 0.0) {
    fVar2 = *param_3;
    in_AX = (ushort)(fVar2 < (float)param_1) << 8 |
            (ushort)(NAN(fVar2) || NAN((float)param_1)) << 10 |
            (ushort)(fVar2 == (float)param_1) << 0xe;
    if (fVar2 >= (float)param_1 && (fVar2 == (float)param_1) == 0) goto LAB_004a6b7b;
    fVar2 = *param_4;
    in_AX = (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
            (ushort)(fVar1 == fVar2) << 0xe;
    if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) goto LAB_004a6b7b;
  }
  else {
    fVar2 = *param_4;
    in_AX = (ushort)(fVar2 < (float)param_1) << 8 |
            (ushort)(NAN(fVar2) || NAN((float)param_1)) << 10 |
            (ushort)(fVar2 == (float)param_1) << 0xe;
    if (fVar2 >= (float)param_1 && (fVar2 == (float)param_1) == 0) goto LAB_004a6b7b;
    fVar2 = *param_3;
    in_AX = (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
            (ushort)(fVar1 == fVar2) << 0xe;
    if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) goto LAB_004a6b7b;
  }
  fVar1 = param_2[1] - pfVar8[1];
  fVar2 = param_3[1] - param_4[1];
  if (0.0 <= fVar1) {
    param_1 = (float *)param_2[1];
    fVar3 = pfVar8[1];
  }
  else {
    param_1 = (float *)pfVar8[1];
    fVar3 = param_2[1];
  }
  if (fVar2 <= 0.0) {
    fVar4 = param_3[1];
    if (fVar4 >= (float)param_1 && (fVar4 == (float)param_1) == 0) {
      return (ushort)(fVar4 < (float)param_1) << 8 |
             (ushort)(NAN(fVar4) || NAN((float)param_1)) << 10 |
             (ushort)(fVar4 == (float)param_1) << 0xe;
    }
    fVar4 = param_4[1];
    if (fVar3 >= fVar4 && (fVar3 == fVar4) == 0) {
      return (ushort)(fVar3 < fVar4) << 8 | (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
             (ushort)(fVar3 == fVar4) << 0xe;
    }
  }
  else {
    fVar4 = param_4[1];
    if (fVar4 >= (float)param_1 && (fVar4 == (float)param_1) == 0) {
      return (ushort)(fVar4 < (float)param_1) << 8 |
             (ushort)(NAN(fVar4) || NAN((float)param_1)) << 10 |
             (ushort)(fVar4 == (float)param_1) << 0xe;
    }
    fVar4 = param_3[1];
    if (fVar3 >= fVar4 && (fVar3 == fVar4) == 0) {
      return (ushort)(fVar3 < fVar4) << 8 | (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
             (ushort)(fVar3 == fVar4) << 0xe;
    }
  }
  fVar3 = fVar1 * fVar7 - fVar2 * fVar6;
  fVar6 = (pfVar8[1] - param_3[1]) * fVar6 - (*pfVar8 - *param_3) * fVar1;
  fVar7 = fVar2 * (*pfVar8 - *param_3) - (pfVar8[1] - param_3[1]) * fVar7;
  if (fVar3 == 0.0) {
    return CONCAT11(fVar3 < 0.0 | (byte)((ushort)((ushort)NAN(fVar3) << 10) >> 8) |
                    (byte)((ushort)((ushort)(fVar3 == 0.0) << 0xe) >> 8),1);
  }
  bVar5 = fVar7 < 0.0;
  in_AX = (ushort)bVar5 << 8 | (ushort)NAN(fVar7) << 10 | (ushort)(fVar7 == 0.0) << 0xe;
  if (fVar3 <= 0.0) {
    if (bVar5 || (fVar7 == 0.0) != 0) {
      if (fVar7 < fVar3) {
        return (ushort)(fVar7 < fVar3) << 8 | (ushort)(NAN(fVar7) || NAN(fVar3)) << 10 |
               (ushort)(fVar7 == fVar3) << 0xe;
      }
      if (fVar6 >= 0.0 && (fVar6 == 0.0) == 0) {
        return (ushort)(fVar6 < 0.0) << 8 | (ushort)NAN(fVar6) << 10 | (ushort)(fVar6 == 0.0) << 0xe
        ;
      }
      in_AX = (ushort)(fVar3 < fVar6) << 8 | (ushort)(NAN(fVar3) || NAN(fVar6)) << 10 |
              (ushort)(fVar3 == fVar6) << 0xe;
      if (fVar3 < fVar6 || (fVar3 == fVar6) != 0) goto LAB_004a6d11;
    }
  }
  else if (!bVar5) {
    uVar9 = (ushort)(fVar7 < fVar3) << 8 | (ushort)(NAN(fVar7) || NAN(fVar3)) << 10 |
            (ushort)(fVar7 == fVar3) << 0xe;
    if ((fVar7 >= fVar3 && (fVar7 == fVar3) == 0) ||
       (uVar9 = (ushort)(fVar6 < 0.0) << 8 | (ushort)NAN(fVar6) << 10 |
                (ushort)(fVar6 == 0.0) << 0xe, fVar6 < 0.0)) {
      return uVar9;
    }
    in_AX = (ushort)(fVar3 < fVar6) << 8 | (ushort)(NAN(fVar3) || NAN(fVar6)) << 10 |
            (ushort)(fVar3 == fVar6) << 0xe;
    if (fVar3 < fVar6) {
      return in_AX;
    }
LAB_004a6d11:
    return CONCAT11((char)(in_AX >> 8),1);
  }
LAB_004a6b7b:
  return in_AX & 0xff00;
}



float10 FUN_004a6d20(float *param_1)

{
  float *in_ECX;
  float10 fVar1;
  
  if (param_1 == (float *)0x0) {
    return (float10)-1.0;
  }
  fVar1 = (float10)FUN_00982c30(*in_ECX - *param_1);
  return (float10)(float)fVar1;
}



void FUN_004a6d70(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x20) = param_1;
  return;
}



undefined2 FUN_004a6d80(int param_1,float param_2)

{
  float fVar1;
  char cVar2;
  int in_ECX;
  
  if (param_1 != 0) {
    fVar1 = *(float *)(in_ECX + 8);
    if (param_2 <= fVar1) {
      fVar1 = fVar1 - param_2;
    }
    else {
      fVar1 = param_2 - fVar1;
    }
    if ((fVar1 < 0.001) && (cVar2 = FUN_004a6990(in_ECX), cVar2 != '\0')) {
      return 1;
    }
  }
  return 0;
}



void FUN_004a6de0(undefined1 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[5] = 0x7f7fffff;
  in_ECX[4] = 0x7f7fffff;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[7] = 0xff7fffff;
  *(undefined1 *)(in_ECX + 3) = param_1;
  in_ECX[6] = 0xff7fffff;
  in_ECX[8] = 0x400;
  in_ECX[9] = 0;
  in_ECX[2] = 0;
  return;
}



void FUN_004a6e20(void)

{
  undefined4 *puVar1;
  void *_Src;
  void *pvVar2;
  int *in_ECX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  FUN_0046ae40(0x494c5052,in_ECX + 8,4);
  if ((in_ECX[1] != 0) || (*in_ECX != 0)) {
    uVar5 = 0;
    local_8 = 0x400;
    _Src = (void *)FUN_00401f00(0x10000);
    uVar3 = 0x400;
    uVar4 = 0x2000;
    do {
      pvVar2 = _Src;
      if ((in_ECX[1] == 0) && (*in_ECX == 0)) break;
      puVar1 = (undefined4 *)*in_ECX;
      *(undefined4 *)((int)_Src + uVar5 * 8) = *puVar1;
      *(undefined4 *)((int)_Src + uVar5 * 8 + 4) = puVar1[1];
      uVar5 = uVar5 + 1;
      if (local_8 <= uVar5) {
        uVar3 = uVar3 + 0x400;
        uVar4 = uVar4 + 0x2000;
        pvVar2 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)uVar4 * 8 >> 0x20) != 0) |
                                      (uint)((ulonglong)uVar4 * 8));
        _memcpy(pvVar2,_Src,uVar5 * 8);
        FUN_00401f20(_Src);
        local_8 = uVar3;
      }
      in_ECX = (int *)in_ECX[1];
      _Src = pvVar2;
    } while (in_ECX != (int *)0x0);
    if (uVar5 != 0) {
      FUN_0046ae40(0x444c5052,pvVar2,uVar5 * 8);
    }
    FUN_00401f20(pvVar2);
  }
  return;
}



undefined4 FUN_004a6f40(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  float *pfVar6;
  uint uVar7;
  uint *unaff_FS_OFFSET;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (uint)&local_c;
  if ((param_1 != 0) && (iVar2 = FUN_004510b0(uVar1), iVar2 == 0x444c5052)) {
    uVar1 = *(uint *)(param_1 + 0x254);
    uVar7 = uVar1 >> 3;
    if ((uVar1 & 7) == 0) {
      if ((uVar1 != 0) && (uVar7 != 0)) {
        iVar4 = FUN_00401f00(uVar7 * 8);
        FUN_00450c20(iVar4,uVar1);
        *(undefined4 *)(in_ECX + 0x24) = 0;
        iVar2 = iVar4;
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          iVar5 = FUN_00401f00(8);
          pfVar6 = (float *)0x0;
          local_4 = 0;
          if (iVar5 != 0) {
            pfVar6 = (float *)FUN_004a6930(iVar2);
          }
          local_4 = 0xffffffff;
          if (*pfVar6 < *(float *)(in_ECX + 0x10)) {
            *(float *)(in_ECX + 0x10) = *pfVar6;
          }
          if (pfVar6[1] < *(float *)(in_ECX + 0x14)) {
            *(float *)(in_ECX + 0x14) = pfVar6[1];
          }
          if (*(float *)(in_ECX + 0x18) < *pfVar6) {
            *(float *)(in_ECX + 0x18) = *pfVar6;
          }
          if (*(float *)(in_ECX + 0x1c) < pfVar6[1]) {
            *(float *)(in_ECX + 0x1c) = pfVar6[1];
          }
          FUN_00446cb0(pfVar6);
          *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + 1;
          iVar2 = iVar2 + 8;
        }
        FUN_00401f20(iVar4);
        uVar3 = 1;
        goto LAB_004a6fa0;
      }
    }
    else {
      FUN_004a7a60("Invalid Region Point List data in file \"%s\".",param_1 + 0x1c);
    }
  }
  uVar3 = 0;
LAB_004a6fa0:
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_004a70b0(void)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  iVar1 = in_ECX[9];
  while (iVar1 != 0) {
    piVar2 = (int *)in_ECX[1];
    iVar1 = *in_ECX;
    if (piVar2 == (int *)0x0) {
      *in_ECX = 0;
    }
    else {
      in_ECX[1] = piVar2[1];
      *in_ECX = *piVar2;
      FUN_00401f20(piVar2);
    }
    in_ECX[9] = in_ECX[9] + -1;
    if ((iVar1 != 0) && ((char)in_ECX[3] != '\0')) {
      FUN_00401f20(iVar1);
    }
    iVar1 = in_ECX[9];
  }
  in_ECX[9] = 0;
  in_ECX[5] = 0x7f7fffff;
  in_ECX[4] = 0x7f7fffff;
  in_ECX[7] = -0x800001;
  in_ECX[6] = -0x800001;
  return;
}



float10 FUN_004a7130(void)

{
  float *pfVar1;
  undefined4 *in_ECX;
  float local_4;
  
  local_4 = 3.4028235e+38;
  if ((float)in_ECX[4] < 3.4028235e+38) {
    return (float10)(float)in_ECX[4];
  }
  do {
    pfVar1 = (float *)*in_ECX;
    if (pfVar1 == (float *)0x0) break;
    if (*pfVar1 < local_4) {
      local_4 = *pfVar1;
    }
    in_ECX = (undefined4 *)in_ECX[1];
  } while (in_ECX != (undefined4 *)0x0);
  return (float10)local_4;
}



float10 FUN_004a7180(void)

{
  float *pfVar1;
  undefined4 *in_ECX;
  float local_4;
  
  local_4 = -3.4028235e+38;
  if (-3.4028235e+38 < (float)in_ECX[6]) {
    return (float10)(float)in_ECX[6];
  }
  do {
    pfVar1 = (float *)*in_ECX;
    if (pfVar1 == (float *)0x0) break;
    if (local_4 < *pfVar1) {
      local_4 = *pfVar1;
    }
    in_ECX = (undefined4 *)in_ECX[1];
  } while (in_ECX != (undefined4 *)0x0);
  return (float10)local_4;
}



float10 FUN_004a71d0(void)

{
  int iVar1;
  int *in_ECX;
  float local_4;
  
  local_4 = 3.4028235e+38;
  if ((float)in_ECX[5] < 3.4028235e+38) {
    return (float10)(float)in_ECX[5];
  }
  do {
    iVar1 = *in_ECX;
    if (iVar1 == 0) break;
    if (*(float *)(iVar1 + 4) < local_4) {
      local_4 = *(float *)(iVar1 + 4);
    }
    in_ECX = (int *)in_ECX[1];
  } while (in_ECX != (int *)0x0);
  return (float10)local_4;
}



float10 FUN_004a7220(void)

{
  int iVar1;
  int *in_ECX;
  float local_4;
  
  local_4 = -3.4028235e+38;
  if (-3.4028235e+38 < (float)in_ECX[7]) {
    return (float10)(float)in_ECX[7];
  }
  do {
    iVar1 = *in_ECX;
    if (iVar1 == 0) break;
    if (local_4 < *(float *)(iVar1 + 4)) {
      local_4 = *(float *)(iVar1 + 4);
    }
    in_ECX = (int *)in_ECX[1];
  } while (in_ECX != (int *)0x0);
  return (float10)local_4;
}



undefined4 FUN_004a7270(char param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  undefined4 *in_ECX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if ((uint)in_ECX[9] < 4) {
    return 0;
  }
  puVar5 = (undefined4 *)((undefined4 *)in_ECX[1])[1];
  puVar6 = (undefined4 *)in_ECX[1];
  puVar2 = in_ECX;
  do {
    puVar1 = puVar6;
    if (puVar5 == (undefined4 *)0x0) {
      return 0;
    }
    if (puVar5 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)puVar5[1];
    }
    bVar3 = false;
    do {
      puVar7 = puVar6;
      if (puVar6 == (undefined4 *)0x0) {
        if ((param_1 != '\0') && (puVar2 != in_ECX)) {
          puVar7 = in_ECX;
        }
        bVar3 = true;
      }
      if ((((puVar2 != (undefined4 *)0x0) && (puVar5 != (undefined4 *)0x0)) &&
          (puVar7 != (undefined4 *)0x0)) &&
         (cVar4 = FUN_004a6af0(*puVar2,*puVar1,*puVar5,*puVar7), cVar4 != '\0')) {
        return 1;
      }
      puVar6 = puVar7;
      if (puVar7 != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)puVar7[1];
      }
      puVar5 = puVar7;
    } while (!bVar3);
    puVar5 = (undefined4 *)((undefined4 *)puVar1[1])[1];
    puVar6 = (undefined4 *)puVar1[1];
    puVar2 = puVar1;
  } while( true );
}



uint FUN_004a7330(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 *puVar7;
  undefined4 *in_ECX;
  undefined4 *puVar8;
  float10 fVar9;
  float10 fVar10;
  uint local_10;
  
  local_10 = 0;
  if ((param_1 != (float *)0x0) && (2 < (uint)in_ECX[9])) {
    fVar1 = *param_1;
    fVar2 = param_1[1];
    fVar9 = (float10)FUN_004a7130();
    fVar10 = (float10)fVar1;
    param_1 = (float *)CONCAT22(extraout_var,
                                (ushort)(fVar9 < fVar10) << 8 |
                                (ushort)(NAN(fVar9) || NAN(fVar10)) << 10 |
                                (ushort)(fVar9 == fVar10) << 0xe);
    if (fVar9 < fVar10 || (fVar9 == fVar10) != 0) {
      fVar9 = (float10)FUN_004a7180();
      fVar10 = (float10)fVar1;
      param_1 = (float *)CONCAT22(extraout_var_00,
                                  (ushort)(fVar9 < fVar10) << 8 |
                                  (ushort)(NAN(fVar9) || NAN(fVar10)) << 10 |
                                  (ushort)(fVar9 == fVar10) << 0xe);
      if (fVar9 >= fVar10) {
        fVar9 = (float10)FUN_004a71d0();
        fVar10 = (float10)fVar2;
        param_1 = (float *)CONCAT22(extraout_var_01,
                                    (ushort)(fVar9 < fVar10) << 8 |
                                    (ushort)(NAN(fVar9) || NAN(fVar10)) << 10 |
                                    (ushort)(fVar9 == fVar10) << 0xe);
        if (fVar9 < fVar10 || (fVar9 == fVar10) != 0) {
          fVar9 = (float10)FUN_004a7220();
          fVar10 = (float10)fVar2;
          param_1 = (float *)CONCAT22(extraout_var_02,
                                      (ushort)(fVar9 < fVar10) << 8 |
                                      (ushort)(NAN(fVar9) || NAN(fVar10)) << 10 |
                                      (ushort)(fVar9 == fVar10) << 0xe);
          puVar7 = in_ECX;
          if (fVar9 >= fVar10) {
            do {
              puVar8 = (undefined4 *)puVar7[1];
              if ((undefined4 *)puVar7[1] == (undefined4 *)0x0) {
                puVar8 = in_ECX;
              }
              pfVar5 = (float *)*puVar7;
              pfVar6 = (float *)*puVar8;
              if (((fVar1 < *pfVar5) && (fVar1 < *pfVar6)) ||
                 (((fVar1 < *pfVar5 || (fVar1 < *pfVar6)) &&
                  (fVar10 = (float10)FUN_004a6aa0(pfVar5,pfVar6,fVar2), (float10)fVar1 < fVar10))))
              {
                fVar3 = pfVar5[1];
                fVar4 = pfVar6[1];
                if ((fVar3 <= fVar2) || (fVar4 < fVar2 == (fVar4 == fVar2))) {
                  if ((fVar3 < fVar2 != (fVar3 == fVar2)) && (fVar2 < fVar4)) {
                    local_10 = local_10 + 1;
                  }
                }
                else {
                  local_10 = local_10 + 1;
                }
              }
              puVar7 = puVar8;
            } while (puVar8 != in_ECX);
            local_10 = local_10 & 0x80000001;
            if ((int)local_10 < 0) {
              local_10 = (local_10 - 1 | 0xfffffffe) + 1;
            }
            return CONCAT31((int3)(local_10 >> 8),local_10 != 0);
          }
        }
      }
    }
  }
  return (uint)param_1 & 0xffffff00;
}



float10 FUN_004a74e0(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 *in_ECX;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c6fcb;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar5 = false;
  if ((in_ECX[2] == 0) || (cVar6 = FUN_004a6d80(param_1,param_2), cVar6 == '\0')) {
    cVar6 = FUN_004a7330(param_1);
    if ((param_1 == 0.0) || (cVar6 == '\0')) {
      fVar10 = (float10)0;
    }
    else {
      fVar10 = (float10)1;
      if (fVar10 <= (float10)param_2) {
        param_1 = 3.4028235e+38;
        puVar9 = in_ECX;
        do {
          puVar8 = (undefined4 *)puVar9[1];
          if ((undefined4 *)puVar9[1] == (undefined4 *)0x0) {
            bVar5 = true;
            puVar8 = in_ECX;
          }
          fVar10 = (float10)FUN_004a6a60(*puVar9);
          fVar1 = (float)fVar10;
          fVar10 = (float10)FUN_004a6a60(*puVar8);
          fVar2 = (float)fVar10;
          fVar10 = (float10)FUN_004a6d20(*puVar8);
          fVar3 = (float)fVar10;
          fVar10 = (float10)FUN_004a6a60(*puVar8);
          fVar4 = (fVar1 + ((float)fVar10 - fVar2)) / (fVar3 + fVar3);
          if ((fVar4 < fVar3) && (fVar2 = fVar1, 0.0 < fVar4)) {
            fVar2 = fVar1 - fVar4 * fVar4;
          }
          if (fVar2 < param_1) {
            param_1 = fVar2;
          }
          puVar9 = puVar8;
        } while (!bVar5);
        fVar10 = (float10)FUN_00982c30();
        fVar1 = (float)fVar10;
        if (param_2 < fVar1 == (param_2 == fVar1)) {
          fVar1 = fVar1 / param_2;
        }
        else {
          fVar1 = 1.0;
        }
        if (in_ECX[2] != 0) {
          FUN_00401f20(in_ECX[2]);
        }
        iVar7 = FUN_00401f00(0x10);
        local_4 = 0;
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          FUN_004a6920();
        }
        local_4 = 0xffffffff;
        in_ECX[2] = iVar7;
        FUN_004a6a20(iVar7);
        *(float *)(in_ECX[2] + 8) = param_2;
        fVar10 = (float10)fVar1;
        *(float *)(in_ECX[2] + 0xc) = fVar1;
      }
    }
  }
  else {
    fVar10 = (float10)*(float *)(in_ECX[2] + 0xc);
  }
  *unaff_FS_OFFSET = local_c;
  return fVar10;
}



void FUN_004a76f0(void)

{
  int in_ECX;
  
  FUN_004a70b0();
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 8));
  }
  return;
}



uint FUN_004a7710(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  uint in_EAX;
  undefined2 extraout_var;
  undefined4 uVar4;
  uint uVar5;
  int *in_ECX;
  float10 fVar6;
  float10 fVar7;
  
  if (param_1 != (float *)0x0) {
    if (*in_ECX != 0) {
      fVar6 = (float10)FUN_004a6a60(param_1);
      fVar7 = (float10)param_2 * (float10)param_2;
      in_EAX = CONCAT22(extraout_var,
                        (ushort)(fVar7 < fVar6) << 8 | (ushort)(NAN(fVar7) || NAN(fVar6)) << 10 |
                        (ushort)(fVar7 == fVar6) << 0xe);
      if (fVar7 >= fVar6 && (fVar7 == fVar6) == 0) goto LAB_004a7781;
    }
    FUN_00446cb0(param_1);
    uVar4 = FUN_004a7270(0);
    if ((char)uVar4 == '\0') {
      in_ECX[9] = in_ECX[9] + 1;
      if (*param_1 < (float)in_ECX[4]) {
        in_ECX[4] = (int)*param_1;
      }
      if (param_1[1] < (float)in_ECX[5]) {
        in_ECX[5] = (int)param_1[1];
      }
      if ((float)in_ECX[6] < *param_1) {
        in_ECX[6] = (int)*param_1;
      }
      fVar1 = param_1[1];
      fVar2 = (float)in_ECX[7];
      if (fVar2 < fVar1) {
        in_ECX[7] = (int)param_1[1];
      }
      return CONCAT31((int3)(CONCAT22((short)((uint)uVar4 >> 0x10),
                                      (ushort)(fVar2 < fVar1) << 8 |
                                      (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                      (ushort)(fVar2 == fVar1) << 0xe) >> 8),1);
    }
    piVar3 = (int *)in_ECX[1];
    if (piVar3 != (int *)0x0) {
      in_ECX[1] = piVar3[1];
      *in_ECX = *piVar3;
      uVar5 = FUN_00401f20(piVar3);
      return uVar5 & 0xffffff00;
    }
    *in_ECX = 0;
    in_EAX = 0;
  }
LAB_004a7781:
  return in_EAX & 0xffffff00;
}



undefined4 * FUN_004a77f0(undefined4 *param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)FUN_00401f00(0x28);
    if (param_1 == (undefined4 *)0x0) {
      param_1 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined1 *)(in_ECX + 3);
      param_1[5] = 0x7f7fffff;
      *param_1 = 0;
      param_1[4] = 0x7f7fffff;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 3) = uVar1;
      param_1[7] = 0xff7fffff;
      param_1[8] = 0x400;
      param_1[6] = 0xff7fffff;
      param_1[9] = 0;
      param_1[2] = 0;
    }
  }
  for (; in_ECX != (undefined4 *)0x0; in_ECX = (undefined4 *)in_ECX[1]) {
    if (*(char *)(param_1 + 3) == '\0') {
      FUN_004a7710(*in_ECX,0);
    }
    else {
      uVar3 = FUN_004a6a20(0);
      cVar2 = FUN_004a7710(uVar3,0);
      if (cVar2 == '\0') {
        FUN_00401f20(uVar3);
      }
    }
  }
  return param_1;
}



undefined1 FUN_004a78a0(char param_1)

{
  char cVar1;
  int in_ECX;
  
  if ((param_1 == '\0') || (2 < *(uint *)(in_ECX + 0x24))) {
    cVar1 = FUN_004a7270(1);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_004a78d0(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 9;
  if (param_1 != (undefined1 *)0x0) {
    switch(*param_1) {
    case 0x53:
    case 0x73:
      return 6;
    case 0x61:
      uVar1 = 8;
      break;
    case 0x62:
      return 0;
    case 99:
      return 1;
    case 0x66:
      return 5;
    case 0x68:
      return 2;
    case 0x69:
      return 3;
    case 0x72:
      return 7;
    case 0x75:
      return 4;
    }
  }
  return uVar1;
}



undefined4 * FUN_004a7980(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *in_ECX;
  int iVar4;
  char *pcVar5;
  
  if (in_ECX == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  pcVar2 = (char *)in_ECX[1];
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar3 = pcVar2 + 1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = pcVar2 + (1 - (int)pcVar3);
  }
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = (char *)FUN_00401f00(pcVar3 + (int)(pcVar2 + (1 - (int)(param_1 + 1))));
    if (pcVar3 != (char *)0x0) {
      iVar4 = (int)(pcVar3 + (int)pcVar2) - (int)param_1;
      do {
        cVar1 = *param_1;
        param_1[iVar4] = cVar1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
      *in_ECX = pcVar3 + (int)pcVar2;
      if (pcVar2 != (char *)0x0) {
        pcVar2 = (char *)in_ECX[1];
        pcVar5 = pcVar3;
        do {
          cVar1 = *pcVar2;
          *pcVar5 = cVar1;
          pcVar2 = pcVar2 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        *pcVar3 = 'S';
        if (*(char *)in_ECX[1] == 'S') {
          FUN_00401f20((char *)in_ECX[1]);
        }
        in_ECX[1] = pcVar3;
      }
      return in_ECX;
    }
    return in_ECX;
  }
  *in_ECX = 0;
  return in_ECX;
}



void FUN_004a7a60(undefined4 param_1)

{
  FUN_004941a0(1,param_1,&stack0x00000008);
  return;
}



char * FUN_004a7a80(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 *in_ECX;
  char *pcVar3;
  
  pcVar3 = (char *)0x0;
  if ((undefined1 *)in_ECX[1] != (undefined1 *)0x0) {
    switch(*(undefined1 *)in_ECX[1]) {
    case 0x53:
    case 0x73:
      pcVar2 = (char *)*in_ECX;
      if (pcVar2 != (char *)0x0) {
        pcVar3 = pcVar2 + 1;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        pcVar3 = pcVar2 + (1 - (int)pcVar3);
      }
      break;
    case 0x61:
    case 0x66:
    case 0x69:
    case 0x72:
    case 0x75:
      return (char *)0x4;
    case 0x62:
    case 99:
    case 0x68:
      return (char *)0x1;
    }
  }
  return pcVar3;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004a7b10(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_108;
  char local_104 [256];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_108;
  pcVar2 = (char *)in_ECX[1];
  local_104[0] = ' ';
  local_104[1] = ' ';
  local_104[2] = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar7 = (char *)((int)&local_108 + 3);
  do {
    pcVar6 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = pcVar2;
  for (uVar5 = (uint)((int)pcVar3 - (int)pcVar2) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = (int)pcVar3 - (int)pcVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = FUN_004a78d0(pcVar2);
  switch(uVar4) {
  case 0:
    local_108 = FUN_0070f950(local_104,*(undefined1 *)in_ECX);
    break;
  case 1:
  case 2:
    local_108 = FUN_0070f9b0(local_104,*(undefined1 *)in_ECX);
    FUN_0042d800(&local_108);
  case 3:
    local_108 = FUN_0070faf0(local_104,*in_ECX);
    goto LAB_004a7c32;
  default:
    local_108 = FUN_0070fb40(local_104,*in_ECX);
LAB_004a7c32:
    uVar5 = (uint)*(ushort *)(param_1 + 10);
    if (*(ushort *)(param_1 + 8) <= uVar5) {
      FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar5);
    }
    FUN_0042bb90(uVar5,&local_108);
    return;
  case 5:
    local_108 = FUN_0070fb90(local_104,*in_ECX);
    FUN_0042d800(&local_108);
    return;
  case 6:
    local_108 = FUN_0070fc30(local_104,*in_ECX);
  }
  FUN_0042d800(&local_108);
  return;
}



undefined1 FUN_004a7cb0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x108) = 0;
  return 1;
}



int FUN_004a7cd0(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  int local_8;
  undefined1 local_4 [4];
  
  iVar1 = param_1;
  iVar4 = 0;
  uVar2 = 0;
  if (*(uint *)(in_ECX + 0x110) != 0) {
    piVar3 = *(int **)(in_ECX + 0x114);
    do {
      if (*piVar3 != 0) {
        local_8 = (*(int **)(in_ECX + 0x114))[uVar2];
        goto joined_r0x004a7d06;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < *(uint *)(in_ECX + 0x110));
  }
  local_8 = 0;
joined_r0x004a7d06:
  while (local_8 != 0) {
    FUN_00452600(&local_8,local_4,&param_1);
    if (param_1 != 0) {
      FUN_004a7b10(iVar1);
      iVar4 = iVar4 + 1;
    }
  }
  return iVar4;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */

undefined1 FUN_004a7d60(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int in_ECX;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar1 = *(int *)(in_ECX + 0x108);
  if (iVar1 != 0) {
    iStack_1c = 0x4a7d86;
    FUN_0044fea0();
    iStack_1c = 0x4a7d8d;
    iVar3 = FUN_004510b0();
    if (iVar3 == 0x41544144) {
      iStack_1c = *(int *)(param_1 + 4);
      uStack_20 = 0x4a7da0;
      iVar3 = FUN_004a78d0();
      if (iVar3 == 3) {
        iStack_1c = param_1;
        uStack_20 = 0x4a7deb;
        uVar2 = FUN_004510e0();
        return uVar2;
      }
      if (iVar3 != 5) {
        if (iVar3 == 6) {
          iStack_1c = 0x4a7dbd;
          iVar1 = -*(int *)(iVar1 + 0x254);
          *(undefined4 *)((int)&iStack_1c + iVar1) = 0;
          *(undefined1 **)((int)&uStack_20 + iVar1) = &stack0xffffffe8 + iVar1;
          *(undefined4 *)((int)&uStack_24 + iVar1) = 0x4a7dc9;
          uVar2 = FUN_00450c20();
          *(undefined1 **)((int)&iStack_1c + iVar1) = &stack0xffffffe8 + iVar1;
          *(undefined4 *)((int)&uStack_20 + iVar1) = 0x4a7dd4;
          FUN_004a7980();
          return uVar2;
        }
        return 0;
      }
      iStack_1c = param_1;
      uStack_20 = 0x4a7de1;
      uVar2 = FUN_004510e0();
      return uVar2;
    }
  }
  return 0;
}



void FUN_004a7e10(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a403a8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_004a7e30(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a403a8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004a7e60(uint param_1)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a403a8;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a403f0;
  return;
}



void FUN_004a7eb0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b2928;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a403f0;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a403a8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a7f20(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a40410;
  if ((*(char *)(in_ECX + 4) != '\0') && (uVar3 = 0, in_ECX[1] != 0)) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[2] + uVar3 * 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = puVar2 + 1;
        puVar2 = (undefined4 *)*puVar2;
        FUN_00401f20(*puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)in_ECX[1]);
  }
  FUN_004a7eb0();
  return;
}



void FUN_004a7f70(byte param_1)

{
  FUN_004a7eb0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004a7f90(byte param_1)

{
  FUN_004a7f20();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */

uint FUN_004a80a0(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int in_ECX;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int aiStack_28 [2];
  int local_c;
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)pcVar3 - (int)(param_1 + 1);
  aiStack_28[1] = 0x4a80d5;
  iVar2 = -(iVar4 + 1);
  puVar8 = &stack0xffffffe0 + iVar2;
  puVar7 = &stack0xffffffe0 + iVar2;
  if (0 < iVar4) {
    local_c = iVar4;
    do {
      *(int *)((int)aiStack_28 + iVar2 + 4) =
           (int)(char)puVar8[(int)param_1 - (int)(&stack0xffffffe0 + iVar2)];
      *(undefined4 *)((int)aiStack_28 + iVar2) = 0x4a80fd;
      iVar5 = _tolower(*(int *)((int)aiStack_28 + iVar2 + 4));
      *puVar8 = (char)iVar5;
      puVar8 = puVar8 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  (&stack0xffffffe0)[iVar4 + iVar2] = 0;
  uVar6 = 0;
  cVar1 = (&stack0xffffffe0)[iVar2];
  while (cVar1 != '\0') {
    pcVar3 = puVar7 + 1;
    puVar7 = puVar7 + 1;
    uVar6 = (int)cVar1 + uVar6 * 0x21;
    cVar1 = *pcVar3;
  }
  return uVar6 % *(uint *)(in_ECX + 4);
}



void FUN_004a8150(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a40454;
  FUN_004a7f20();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004a8180(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b2966;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a40474;
  local_4 = 1;
  FUN_007c2a40(uVar1);
  local_4 = local_4 & 0xffffff00;
  in_ECX[0x43] = &PTR_FUN_00a40454;
  FUN_004a7f20();
  *in_ECX = &PTR_LAB_00a403c8;
  *unaff_FS_OFFSET = local_c;
  return;
}



bool FUN_004a81f0(void)

{
  byte bVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  bool bVar4;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  bVar4 = in_ECX[0x42] != 0;
  if (!bVar4) {
    return bVar4;
  }
  uVar2 = 0;
  if (in_ECX[0x44] != 0) {
    piVar3 = (int *)in_ECX[0x45];
    do {
      if (*piVar3 != 0) {
        local_c = ((int *)in_ECX[0x45])[uVar2];
        goto joined_r0x004a8237;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < (uint)in_ECX[0x44]);
  }
  local_c = 0;
joined_r0x004a8237:
  while (local_c != 0) {
    FUN_00452600(&local_c,local_4,&local_8);
    if (local_8 != 0) {
      bVar1 = (**(code **)(*in_ECX + 0xc))(local_8);
      bVar4 = (bool)(bVar4 & bVar1);
    }
  }
  return bVar4;
}



bool FUN_004a8290(void)

{
  byte bVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  bool bVar4;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  bVar4 = in_ECX[0x42] != 0;
  if (!bVar4) {
    return bVar4;
  }
  uVar2 = 0;
  if (in_ECX[0x44] != 0) {
    piVar3 = (int *)in_ECX[0x45];
    do {
      if (*piVar3 != 0) {
        local_c = ((int *)in_ECX[0x45])[uVar2];
        goto joined_r0x004a82d7;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < (uint)in_ECX[0x44]);
  }
  local_c = 0;
joined_r0x004a82d7:
  while (local_c != 0) {
    FUN_00452600(&local_c,local_4,&local_8);
    if (local_8 != 0) {
      bVar1 = (**(code **)(*in_ECX + 0x10))(local_8);
      bVar4 = (bool)(bVar4 & bVar1);
    }
  }
  return bVar4;
}



void FUN_004a8330(undefined4 param_1)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b2998;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[0x42] = 0;
  *(undefined1 *)(in_ECX + 1) = 0;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a40474;
  FUN_004a7e60(param_1);
  *(undefined1 *)(in_ECX + 0x47) = 0;
  in_ECX[0x43] = &PTR_FUN_00a40454;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_004a83b0(void)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x108) = in_ECX;
  return 1;
}



uint FUN_004a83c0(int param_1,byte param_2,byte param_3,byte param_4)

{
  return (((uint)param_2 | param_1 << 8) << 8 | (uint)param_3) << 8 | (uint)param_4;
}



void FUN_004a83f0(uint param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  *param_2 = param_1 >> 0x18;
  *param_3 = param_1 >> 0x10 & 0xff;
  *param_4 = param_1 >> 8 & 0xff;
  *param_5 = param_1 & 0xff;
  return;
}



void FUN_004a8430(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = "MAIN";
  if (param_2 != 0) {
    if (*(char **)(param_1 + 4) != (char *)0x0) {
      pcVar2 = _strchr(*(char **)(param_1 + 4),0x3a);
      if (pcVar2 != (char *)0x0) {
        pcVar3 = pcVar2 + 1;
      }
    }
    param_2 = param_2 - (int)pcVar3;
    do {
      cVar1 = *pcVar3;
      pcVar3[param_2] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  return;
}



void FUN_004a8480(int param_1,char *param_2)

{
  char cVar1;
  char *_Str;
  char *pcVar2;
  size_t _Count;
  
  if (param_2 != (char *)0x0) {
    *param_2 = '\0';
    _Str = *(char **)(param_1 + 4);
    if (_Str != (char *)0x0) {
      pcVar2 = _strchr(_Str,0x3a);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = _Str;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        _Count = (int)pcVar2 - (int)(_Str + 1);
      }
      else {
        _Count = (int)pcVar2 - (int)_Str;
      }
      _strncpy(param_2,_Str,_Count);
      param_2[_Count] = '\0';
    }
  }
  return;
}



void FUN_004a84e0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a404d0;
  iVar1 = in_ECX[0x44];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[0x44] + 4);
    FUN_00401f20(in_ECX[0x44]);
    in_ECX[0x44] = iVar1;
  }
  in_ECX[0x43] = 0;
  *in_ECX = &PTR_LAB_00a403c8;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_004a85f0(float *param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  int *in_ECX;
  bool bVar3;
  char *lpString;
  undefined1 auStack_198 [3];
  char local_195;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  CHAR aCStack_184 [64];
  CHAR aCStack_144 [64];
  char acStack_104 [256];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_198;
  bVar3 = false;
  if (param_1[1] == 0.0) {
    return false;
  }
  local_195 = in_ECX[0x42] == 0;
  if ((bool)local_195) {
    (**(code **)(*in_ECX + 0x14))();
  }
  if (in_ECX[0x42] == 0) goto LAB_004a87a8;
  uVar1 = FUN_004a78d0();
  FUN_004a8430(param_1,aCStack_184);
  FUN_004a8480(param_1,aCStack_144);
  switch(uVar1) {
  case 1:
  case 3:
    _sprintf(acStack_104,"%d");
    goto LAB_004a86a9;
  default:
    _sprintf(acStack_104,"%u");
    break;
  case 5:
    _sprintf(acStack_104,"%.4f",(double)*param_1);
    break;
  case 6:
    lpString = (char *)*param_1;
    goto LAB_004a879d;
  case 7:
    FUN_004a83f0(*param_1,&uStack_194,&uStack_190,&uStack_18c);
    _sprintf(acStack_104,"%u,%u,%u",uStack_194,uStack_190,uStack_18c);
LAB_004a86a9:
    lpString = acStack_104;
    goto LAB_004a879d;
  case 8:
    FUN_004a83f0(*param_1,&uStack_188,&uStack_18c,&uStack_190);
    _sprintf(acStack_104,"%u,%u,%u,%u",uStack_188,uStack_18c,uStack_190,uStack_194);
  }
  lpString = acStack_104;
LAB_004a879d:
  BVar2 = WritePrivateProfileStringA(aCStack_184,aCStack_144,lpString,(LPCSTR)(in_ECX + 1));
  bVar3 = BVar2 != 0;
LAB_004a87a8:
  if (local_195 != '\0') {
    (**(code **)(*in_ECX + 0x18))();
  }
  return bVar3;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_004a8800(uint *param_1)

{
  undefined4 uVar1;
  INT *pIVar2;
  UINT UVar3;
  uint *puVar4;
  float *pfVar5;
  DWORD DVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int *in_ECX;
  bool bVar10;
  undefined1 auStack_698 [3];
  char local_695;
  uint uStack_694;
  int iStack_690;
  uint uStack_68c;
  undefined4 uStack_688;
  CHAR aCStack_684 [64];
  CHAR aCStack_644 [64];
  CHAR aCStack_604 [256];
  char acStack_504 [256];
  CHAR aCStack_404 [1024];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_698;
  bVar10 = false;
  if (param_1[1] == 0) {
    return false;
  }
  local_695 = in_ECX[0x42] == 0;
  if ((bool)local_695) {
    (**(code **)(*in_ECX + 0x14))(1);
  }
  if (in_ECX[0x42] == 0) goto LAB_004a8ab6;
  uVar1 = FUN_004a78d0();
  FUN_004a8430(param_1,aCStack_644);
  FUN_004a8480(param_1,aCStack_684);
  switch(uVar1) {
  case 0:
    pcVar8 = (char *)FUN_00404df0();
    UVar3 = GetPrivateProfileIntA
                      (aCStack_644,aCStack_684,(uint)(*pcVar8 != '\0'),(LPCSTR)(in_ECX + 1));
    *(bool *)param_1 = UVar3 != 0;
    break;
  case 1:
    pIVar2 = (INT *)FUN_00403be0();
    UVar3 = GetPrivateProfileIntA(aCStack_644,aCStack_684,*pIVar2,(LPCSTR)(in_ECX + 1));
    *(char *)param_1 = (char)UVar3;
    break;
  default:
    uVar9 = *param_1;
    goto LAB_004a8aad;
  case 3:
    puVar4 = (uint *)FUN_00403be0();
    uVar9 = *puVar4;
LAB_004a8aad:
    uVar9 = GetPrivateProfileIntA(aCStack_644,aCStack_684,uVar9,(LPCSTR)(in_ECX + 1));
    goto LAB_004a8ab3;
  case 5:
    pfVar5 = (float *)FUN_00403c00();
    _sprintf(acStack_504,"%f",(double)*pfVar5);
    DVar6 = GetPrivateProfileStringA
                      (aCStack_644,aCStack_684,acStack_504,aCStack_604,0x100,(LPCSTR)(in_ECX + 1));
    if (DVar6 != 0) {
      iVar7 = FID_conflict__sscanf(aCStack_604,"%f");
      bVar10 = iVar7 == 1;
    }
    break;
  case 6:
    GetPrivateProfileStringA
              (aCStack_644,aCStack_684,(LPCSTR)*param_1,aCStack_404,0x100,(LPCSTR)(in_ECX + 1));
    FUN_004a7980();
    break;
  case 7:
    DVar6 = GetPrivateProfileStringA
                      (aCStack_644,aCStack_684,"",aCStack_604,0x100,(LPCSTR)(in_ECX + 1));
    if (DVar6 == 0) break;
    iVar7 = FID_conflict__sscanf(aCStack_604,"%u,%u,%u",&iStack_690,&uStack_694,&uStack_68c);
    bVar10 = iVar7 == 3;
    uVar9 = ((uStack_694 & 0xff | iStack_690 << 8) << 8 | uStack_68c & 0xff) << 8 | 0xff;
    goto LAB_004a8ab3;
  case 8:
    DVar6 = GetPrivateProfileStringA
                      (aCStack_644,aCStack_684,"",aCStack_604,0x100,(LPCSTR)(in_ECX + 1));
    if (DVar6 == 0) break;
    iVar7 = FID_conflict__sscanf
                      (aCStack_604,"%u,%u,%u,%u",&uStack_688,&uStack_694,&iStack_690,&uStack_68c);
    bVar10 = iVar7 == 4;
    uVar9 = FUN_004a83c0(uStack_688,uStack_694,iStack_690,uStack_68c);
LAB_004a8ab3:
    *param_1 = uVar9;
  }
LAB_004a8ab6:
  if (local_695 != '\0') {
    (**(code **)(*in_ECX + 0x18))();
  }
  return bVar10;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_004a8bc0(BYTE *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  DWORD dwType;
  LSTATUS LVar4;
  int *in_ECX;
  CHAR *lpValueName;
  undefined1 auStack_4c [2];
  undefined1 local_4a;
  char local_49;
  DWORD DStack_48;
  CHAR aCStack_44 [64];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_4c;
  lpValueName = *(CHAR **)(param_1 + 4);
  local_4a = 0;
  uVar3 = 0;
  if (lpValueName != (char *)0x0) {
    local_49 = in_ECX[0x42] == 0;
    if ((bool)local_49) {
      (**(code **)(*in_ECX + 0x14))(1);
    }
    if (in_ECX[0x42] != 0) {
      DStack_48 = FUN_004a7a80();
      dwType = FUN_004a78d0(lpValueName);
      if (dwType == 1) {
        iVar2 = -(int)lpValueName;
        do {
          cVar1 = *lpValueName;
          lpValueName[(int)(aCStack_44 + iVar2)] = cVar1;
          lpValueName = lpValueName + 1;
        } while (cVar1 != '\0');
        aCStack_44[0] = 's';
        lpValueName = aCStack_44;
      }
      LVar4 = RegSetValueExA((HKEY)in_ECX[0x42],lpValueName,0,dwType,param_1,DStack_48);
      local_4a = LVar4 == 0;
    }
    uVar3 = local_4a;
    if (local_49 != '\0') {
      (**(code **)(*in_ECX + 0x18))();
      uVar3 = local_4a;
    }
  }
  return uVar3;
}



bool FUN_004a8cf0(void)

{
  LSTATUS LVar1;
  int in_ECX;
  bool bVar2;
  
  bVar2 = true;
  if (*(HKEY *)(in_ECX + 0x108) != (HKEY)0x0) {
    LVar1 = RegCloseKey(*(HKEY *)(in_ECX + 0x108));
    bVar2 = LVar1 == 0;
    *(undefined4 *)(in_ECX + 0x108) = 0;
  }
  return bVar2;
}



void FUN_004a8f00(void)

{
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046c730();
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  FUN_00470070(0x4e4f4349);
  FUN_0046a7b0();
  FUN_0046bbb0(in_ECX + 0x7c,8);
  FUN_0046b9f0();
  return;
}



short FUN_004a8f60(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  
  sVar1 = FUN_0046ac50(param_1);
  sVar2 = FUN_00470400(param_1);
  return sVar2 + sVar1;
}



void FUN_004a8f90(undefined4 param_1)

{
  FUN_0046b5e0(param_1);
  FUN_00470420(param_1);
  return;
}



void FUN_004a8fb0(undefined4 param_1,undefined4 param_2)

{
  FUN_0046b600(param_1,param_2);
  FUN_00470440(param_1,param_2);
  return;
}



void FUN_004a8fe0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  thunk_FUN_0046b090();
  *(undefined4 *)(in_ECX + 0x60) = 2;
  return;
}



void FUN_004a9000(void)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 8) >> 3 & 1) == 0) {
    FUN_0046a880(in_ECX);
    FUN_0046ab80(1);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004a9030(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == '\"') {
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 < 0x4c4c5547) {
        if (iVar3 == 0x4c4c5546) {
          if (in_ECX == (int *)0x0) {
            FUN_0046c7a0(0,param_1);
          }
          else {
            FUN_0046c7a0(in_ECX + 9,param_1);
          }
        }
        else if (iVar3 < 0x44494446) {
          if (iVar3 == 0x44494445) {
            FUN_00450c20(&stack0xffffffec,0x200);
            (**(code **)(*in_ECX + 0xd8))(&stack0xffffffec);
          }
          else if (iVar3 == 0x41544144) {
            FUN_0046bda0(param_1,in_ECX + 0x1f,8);
          }
          else if (iVar3 == 0x42444f4d) goto LAB_004a9181;
        }
        else if (iVar3 == 0x4c444f4d) {
LAB_004a9181:
          if (in_ECX == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = in_ECX + 0xc;
          }
          FUN_0046db00(piVar4,param_1);
        }
      }
      else if (iVar3 < 0x4e4f434a) {
        if (iVar3 == 0x4e4f4349) {
          if (in_ECX == (int *)0x0) {
            FUN_004700e0(0,param_1);
          }
          else {
            FUN_004700e0(in_ECX + 0x12,param_1);
          }
        }
        else if (iVar3 == 0x4d414e41) {
          local_c = 0;
          FUN_004510f0(&local_c);
          *(undefined2 *)(in_ECX + 0x17) = (undefined2)local_c;
        }
        else if (iVar3 == 0x4d414e45) {
          local_c = 0;
          FUN_004510e0(&local_c);
          in_ECX[0x16] = local_c;
        }
      }
      else if (iVar3 == 0x54444f4d) goto LAB_004a9181;
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



void FUN_004a91d0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05dc8,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
    *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(iVar1 + 0x7c);
    *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(iVar1 + 0x80);
    *(undefined1 *)(in_ECX + 4) = *(undefined1 *)(iVar1 + 4);
  }
  return;
}



void FUN_004a92f0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b2ab2;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a4068c;
  in_ECX[9] = &PTR_FUN_00a40678;
  in_ECX[0xc] = &PTR_FUN_00a40658;
  in_ECX[0x12] = &PTR_FUN_00a4063c;
  in_ECX[0x15] = &PTR_LAB_00a40624;
  in_ECX[0x19] = &PTR_LAB_00a40604;
  in_ECX[0x1b] = &PTR_LAB_00a405f0;
  in_ECX[0x1d] = &PTR_LAB_00a405d8;
  local_4 = 6;
  thunk_FUN_0046b170(uVar1);
  local_4._0_1_ = 5;
  FUN_004689a0();
  local_4._0_1_ = 4;
  FUN_00470580();
  local_4._0_1_ = 3;
  FUN_004703b0();
  local_4._0_1_ = 2;
  FUN_00470040();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0046d850();
  FUN_00401f20(in_ECX[10]);
  in_ECX[10] = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a9430(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2b1a;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b2ff0(uVar1);
  in_ECX[9] = &PTR_FUN_00a322a0;
  in_ECX[10] = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0046d7e0();
  local_4._0_1_ = 2;
  FUN_0046ffd0();
  in_ECX[0x12] = &PTR_FUN_00a320a4;
  local_4._0_1_ = 3;
  FUN_0046a790();
  FUN_00470470();
  local_4._0_1_ = 4;
  FUN_004705a0();
  local_4._0_1_ = 5;
  FUN_00468a60();
  *in_ECX = &PTR_FUN_00a4068c;
  in_ECX[9] = &PTR_FUN_00a40678;
  in_ECX[0xc] = &PTR_FUN_00a40658;
  in_ECX[0x12] = &PTR_FUN_00a4063c;
  in_ECX[0x15] = &PTR_LAB_00a40624;
  in_ECX[0x19] = &PTR_LAB_00a40604;
  in_ECX[0x1b] = &PTR_LAB_00a405f0;
  in_ECX[0x1d] = &PTR_LAB_00a405d8;
  *(undefined1 *)(in_ECX + 1) = 0x22;
  in_ECX[0x1f] = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  in_ECX[0x20] = 0;
  thunk_FUN_0046b090();
  in_ECX[0x18] = 2;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004a9540(byte param_1)

{
  FUN_004a92f0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int * FUN_004a9560(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  short sVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  LONG LVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5bd8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar4 = (int *)FUN_004b3750(param_1,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    iVar7 = 1;
  }
  else {
    sVar2 = FUN_0041e860(uVar3);
    iVar7 = (int)sVar2;
  }
  if ((piVar4 != (int *)0x0) && (iVar7 < DAT_00b35588)) {
    if (iVar7 == 1) {
      iVar7 = (**(code **)(*piVar4 + 0x58))("ArrowQuiver");
      if (iVar7 != 0) {
        (**(code **)(**(int **)(iVar7 + 0x1c) + 0x88))(&param_2,iVar7);
        FUN_007016a0();
      }
      FUN_008a5720(piVar4);
    }
    else {
      for (; iVar7 < DAT_00b35588; iVar7 = iVar7 + 1) {
        local_14 = 0;
        local_10 = 0;
        local_e = 0;
        local_4 = 0;
        FUN_00402e30(&local_14,"Arrow%d",iVar7);
        iVar5 = (**(code **)(*piVar4 + 0x58))(local_14);
        if (iVar5 != 0) {
          (**(code **)(**(int **)(iVar5 + 0x1c) + 0x88))(&param_1,iVar5);
          puVar1 = param_1;
          if (param_1 != (undefined4 *)0x0) {
            LVar6 = InterlockedDecrement(param_1 + 1);
            if ((LVar6 == 0) && (puVar1 != (undefined4 *)0x0)) {
              (**(code **)*puVar1)(1);
            }
          }
        }
        local_4 = 0xffffffff;
        FUN_00401f20(local_14);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return piVar4;
}



void FUN_004a96c0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x94) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x94));
    *(undefined4 *)(in_ECX + 0x94) = 0;
  }
  thunk_FUN_0046b170();
  return;
}



undefined1 FUN_004a9700(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 0x69);
}



float10 FUN_004a9720(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x20);
}



float10 FUN_004a9730(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x2c);
}



bool FUN_004a98a0(byte param_1)

{
  int in_ECX;
  
  return (*(byte *)(in_ECX + 0x68) & param_1) != 0;
}



bool FUN_004a98b0(uint param_1)

{
  int in_ECX;
  
  return (*(uint *)(in_ECX + 0x90) & param_1) != 0;
}



undefined4 * FUN_004a98c0(void)

{
  return &DAT_00b35788;
}



void FUN_004a98d0(char *param_1,float param_2,float param_3)

{
  undefined4 *in_ECX;
  
  if ((in_ECX != &DAT_00b35788) && (param_3 != param_2)) {
    _sprintf(param_1,"%.2f(%.2f)",(double)param_2,(double)param_3);
    return;
  }
  _sprintf(param_1,"%.2f",(double)param_2);
  return;
}



void FUN_004a9930(char *param_1,int param_2,int param_3)

{
  undefined4 *in_ECX;
  
  if ((in_ECX != &DAT_00b35788) && (param_2 != param_3)) {
    _sprintf(param_1,"%d(%d)",param_2,param_3);
    return;
  }
  _sprintf(param_1,"%d",param_2);
  return;
}



void FUN_004a9980(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b2b48;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a407f4;
  local_4 = 0;
  if (in_ECX[0x25] != 0) {
    FUN_00401f20(in_ECX[0x25],uVar1);
    in_ECX[0x25] = 0;
  }
  thunk_FUN_0046b170();
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a9a00(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x18) = DAT_00b35590;
  *(undefined1 *)(in_ECX + 0x69) = DAT_00b35598;
  *(undefined1 *)(in_ECX + 0x19) = DAT_00b355a0;
  *(undefined4 *)(in_ECX + 0x1c) = _DAT_00b355a8;
  *(undefined4 *)(in_ECX + 0x20) = _DAT_00b355b0;
  *(undefined4 *)(in_ECX + 0x24) = _DAT_00b355b8;
  *(undefined4 *)(in_ECX + 0x28) = _DAT_00b355c0;
  *(undefined4 *)(in_ECX + 0x2c) = _DAT_00b355c8;
  *(undefined4 *)(in_ECX + 0x30) = _DAT_00b355d0;
  *(undefined4 *)(in_ECX + 0x34) = _DAT_00b355d8;
  *(undefined4 *)(in_ECX + 0x38) = _DAT_00b355e0;
  *(undefined1 *)(in_ECX + 0x3c) = DAT_00b355e8;
  *(undefined1 *)(in_ECX + 0x3d) = DAT_00b355f0;
  *(undefined4 *)(in_ECX + 0x40) = _DAT_00b355f8;
  *(undefined4 *)(in_ECX + 0x44) = _DAT_00b35600;
  *(undefined4 *)(in_ECX + 0x48) = _DAT_00b35608;
  *(undefined1 *)(in_ECX + 0x4c) = DAT_00b35610;
  *(undefined4 *)(in_ECX + 0x50) = _DAT_00b35618;
  *(undefined4 *)(in_ECX + 0x54) = _DAT_00b35620;
  *(undefined1 *)(in_ECX + 0x58) = DAT_00b35628;
  *(undefined1 *)(in_ECX + 0x59) = DAT_00b35630;
  *(undefined1 *)(in_ECX + 0x5a) = DAT_00b35638;
  *(undefined1 *)(in_ECX + 0x5b) = DAT_00b35640;
  *(undefined1 *)(in_ECX + 0x5c) = DAT_00b35648;
  *(undefined4 *)(in_ECX + 0x60) = _DAT_00b35650;
  *(undefined4 *)(in_ECX + 100) = _DAT_00b35658;
  *(undefined4 *)(in_ECX + 0x6c) = _DAT_00b35660;
  *(undefined4 *)(in_ECX + 0x70) = _DAT_00b35668;
  *(undefined4 *)(in_ECX + 0x74) = _DAT_00b35670;
  *(undefined4 *)(in_ECX + 0x78) = _DAT_00b35678;
  *(undefined4 *)(in_ECX + 0x7c) = _DAT_00b35680;
  *(undefined4 *)(in_ECX + 0x80) = _DAT_00b35688;
  *(undefined4 *)(in_ECX + 0x84) = _DAT_00b35690;
  *(undefined1 *)(in_ECX + 0x88) = DAT_00b35778;
  uVar1 = _DAT_00b35780;
  *(undefined1 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = uVar1;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  thunk_FUN_0046b090();
  return;
}



void FUN_004a9b90(void)

{
  char cVar1;
  int *in_ECX;
  
  FUN_0046b990();
  FUN_0046ae40(0x44545343,in_ECX + 6,0x7c);
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if (cVar1 != '\0') {
    if (in_ECX[0x25] != 0) {
      FUN_0046ae40(0x44415343,in_ECX[0x25],0x54);
      FUN_0046b9f0();
      return;
    }
    *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) & 0xfe;
  }
  FUN_0046b9f0();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a9bf0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = _DAT_00b356a0;
  in_ECX[1] = _DAT_00b35698;
  in_ECX[2] = _DAT_00b356a8;
  in_ECX[3] = _DAT_00b356b0;
  in_ECX[4] = _DAT_00b356b8;
  in_ECX[5] = _DAT_00b356c0;
  in_ECX[6] = _DAT_00b356c8;
  in_ECX[7] = _DAT_00b356d0;
  in_ECX[8] = _DAT_00b356d8;
  in_ECX[9] = _DAT_00b356e0;
  in_ECX[10] = _DAT_00b356f0;
  in_ECX[0xb] = _DAT_00b356e8;
  in_ECX[0xc] = _DAT_00b356f8;
  in_ECX[0xd] = _DAT_00b35700;
  in_ECX[0xe] = _DAT_00b35710;
  in_ECX[0xf] = _DAT_00b35708;
  in_ECX[0x10] = _DAT_00b35718;
  in_ECX[0x11] = _DAT_00b35728;
  in_ECX[0x12] = _DAT_00b35720;
  in_ECX[0x13] = _DAT_00b35730;
  in_ECX[0x14] = _DAT_00b35738;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a9cb0(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && ((float *)in_ECX[0x25] != (float *)0x0)) {
    return (float10)*(float *)in_ECX[0x25];
  }
  return (float10)_DAT_00b356a0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a9cf0(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 4);
  }
  return (float10)_DAT_00b35698;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a9d30(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 8);
  }
  return (float10)_DAT_00b356a8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a9d70(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 0xc);
  }
  return (float10)_DAT_00b356b0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a9db0(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 0x10);
  }
  return (float10)_DAT_00b356b8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a9df0(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 0x14);
  }
  return (float10)_DAT_00b356c0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a9e30(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 0x18);
  }
  return (float10)_DAT_00b356c8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a9e70(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 0x1c);
  }
  return (float10)_DAT_00b356d0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a9eb0(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 0x20);
  }
  return (float10)_DAT_00b356d8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a9ef0(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 0x24);
  }
  return (float10)_DAT_00b356e0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a9f30(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 0x28);
  }
  return (float10)_DAT_00b356f0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a9f70(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 0x2c);
  }
  return (float10)_DAT_00b356e8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a9fb0(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 0x30);
  }
  return (float10)_DAT_00b356f8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a9ff0(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 0x34);
  }
  return (float10)_DAT_00b35700;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004aa030(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 0x38);
  }
  return (float10)_DAT_00b35710;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004aa070(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 0x3c);
  }
  return (float10)_DAT_00b35708;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004aa0b0(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 0x40);
  }
  return (float10)_DAT_00b35718;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004aa0f0(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 0x48);
  }
  return (float10)_DAT_00b35720;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004aa130(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 0x44);
  }
  return (float10)_DAT_00b35728;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004aa170(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 0x4c);
  }
  return (float10)_DAT_00b35730;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004aa1b0(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x16c))(1);
  if ((cVar1 != '\0') && (in_ECX[0x25] != 0)) {
    return (float10)*(float *)(in_ECX[0x25] + 0x50);
  }
  return (float10)_DAT_00b35738;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004aa1f0(undefined4 param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int unaff_EBX;
  int iVar8;
  int unaff_EBP;
  int iVar9;
  int unaff_ESI;
  int unaff_EDI;
  float10 fVar10;
  float fVar11;
  int iVar12;
  int local_154;
  int local_150;
  float local_14c;
  float local_148;
  int *local_144;
  int *local_140;
  float local_13c;
  int local_138;
  undefined1 auStack_134 [48];
  undefined1 auStack_104 [4];
  undefined1 auStack_100 [28];
  char acStack_e4 [4];
  char acStack_e0 [4];
  char acStack_dc [4];
  char acStack_d8 [4];
  char acStack_d4 [4];
  char acStack_d0 [4];
  char local_cc [200];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_154;
  local_148 = (float)DAT_00b02e24;
  local_14c = (float)(0x500 - DAT_00b02e24);
  iVar8 = *param_3;
  iVar5 = *param_4;
  local_144 = param_3;
  local_13c = (local_14c - local_148) * 0.5 + local_148;
  local_140 = param_4;
  local_154 = iVar5;
  local_150 = iVar8;
  local_138 = FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if (local_138 == 0) {
    FUN_0057b8e0("COMBAT STYLE: Current ref is not an actor.",local_148,(float)local_150,1,
                 0xffffffff);
    iVar8 = iVar8 + param_2;
  }
  else {
    cVar1 = FUN_005e04e0();
    if (cVar1 == '\0') {
      piVar2 = (int *)FUN_005e0f50();
      if (piVar2 == &DAT_00b35788) {
        pcVar3 = " (default)";
      }
      else {
        pcVar3 = (char *)(**(code **)(*piVar2 + 0xd4))();
      }
      _sprintf(local_cc,"COMBAT STYLE: %s",pcVar3);
      FUN_0057b8e0(local_cc,local_148,(float)local_150,1,0xffffffff);
      iVar8 = iVar8 + param_2;
      local_150 = iVar8;
      FUN_0057b8e0("MELEE DECISION",local_148,(float)iVar8,1,0xffffffff);
      local_150 = iVar8 + param_2;
      cVar1 = (**(code **)(DAT_00b35788 + 0xdc))();
      iVar4 = (int)cVar1;
      cVar1 = (**(code **)(*piVar2 + 0xdc))(iVar4);
      FUN_004a9930(auStack_134,(int)cVar1,iVar4);
      _sprintf(local_cc,"Block %%Chance: %s",auStack_134);
      FUN_0057b8e0(local_cc,local_148,(float)local_150,1,0xffffffff);
      iVar4 = iVar8 + param_2 + param_2;
      local_150 = iVar4;
      cVar1 = (**(code **)(DAT_00b35788 + 0x10c))();
      iVar8 = (int)cVar1;
      cVar1 = (**(code **)(*piVar2 + 0x10c))(iVar8);
      FUN_004a9930(auStack_134,(int)cVar1,iVar8);
      _sprintf(local_cc,"Attack %%Chance: %s",auStack_134);
      FUN_0057b8e0(local_cc,local_148,(float)local_150,1,0xffffffff);
      iVar4 = iVar4 + param_2;
      local_150 = iVar4;
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0x110))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0x110))(fVar11);
      FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
      _sprintf(local_cc,"Recoil/Stagger Bonus to Attack: %s",auStack_134);
      FUN_0057b8e0(local_cc,local_148,(float)local_150,1,0xffffffff);
      iVar4 = iVar4 + param_2;
      local_150 = iVar4;
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0x114))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0x114))(fVar11);
      FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
      _sprintf(local_cc,"Unconscious Bonus to Attack: %s",auStack_134);
      FUN_0057b8e0(local_cc,local_148,(float)local_150,1,0xffffffff);
      iVar4 = iVar4 + param_2;
      local_150 = iVar4;
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0x118))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0x118))(fVar11);
      FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
      _sprintf(local_cc,"Hand-to-Hand Bonus to Attack: %s",auStack_134);
      FUN_0057b8e0(local_cc,local_148,(float)local_150,1,0xffffffff);
      iVar4 = iVar4 + param_2;
      local_150 = iVar4;
      FUN_0057b8e0("POWER ATTACKS",local_148,(float)iVar4,1,0xffffffff);
      local_150 = iVar4 + param_2;
      cVar1 = (**(code **)(DAT_00b35788 + 0x11c))();
      iVar8 = (int)cVar1;
      cVar1 = (**(code **)(*piVar2 + 0x11c))(iVar8);
      FUN_004a9930(auStack_134,(int)cVar1,iVar8);
      _sprintf(local_cc,"Power Attack %%Chance: %s",auStack_134);
      FUN_0057b8e0(local_cc,local_148,(float)local_150,1,0xffffffff);
      iVar8 = iVar4 + param_2 + param_2;
      local_150 = iVar8;
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0x120))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0x120))(fVar11);
      FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
      _sprintf(local_cc,"Recoil/Stagger Bonus to Power Attack: %s",auStack_134);
      FUN_0057b8e0(local_cc,local_148,(float)local_150,1,0xffffffff);
      iVar8 = iVar8 + param_2;
      local_150 = iVar8;
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0x124))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0x124))(fVar11);
      FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
      _sprintf(local_cc,"Unconscious Bonus to Power Attack: %s",auStack_134);
      FUN_0057b8e0(local_cc,local_148,(float)local_150,1,0xffffffff);
      iVar8 = iVar8 + param_2;
      iVar4 = 2;
      local_150 = iVar8;
      cVar1 = (**(code **)(*piVar2 + 0x16c))(2);
      fVar11 = (float)local_154;
      if (cVar1 == '\0') {
        pcVar3 = "Choose Power Attacks using Movement.";
      }
      else {
        FUN_0057b8e0("Choose Power Attacks using %%Chance.",local_14c,fVar11,1,0xffffffff);
        local_154 = iVar8 + param_2;
        cVar1 = (**(code **)(DAT_00b35788 + 0x128))();
        iVar6 = (int)cVar1;
        cVar1 = (**(code **)(*piVar2 + 0x128))(iVar6);
        FUN_004a9930(&local_138,(int)cVar1,iVar6);
        _sprintf(acStack_d0,"Normal: %s",&local_138);
        FUN_0057b8e0(acStack_d0,local_14c,(float)local_154,1,0xffffffff);
        iVar8 = iVar8 + param_2 + param_2;
        local_154 = iVar8;
        cVar1 = (**(code **)(DAT_00b35788 + 300))();
        iVar6 = (int)cVar1;
        cVar1 = (**(code **)(*piVar2 + 300))(iVar6);
        FUN_004a9930(&local_138,(int)cVar1,iVar6);
        cVar1 = (**(code **)(DAT_00b35788 + 0x130))();
        iVar6 = (int)cVar1;
        cVar1 = (**(code **)(*piVar2 + 0x130))(iVar6);
        FUN_004a9930(auStack_104,(int)cVar1,iVar6);
        _sprintf(acStack_d0,"Forward: %s Back: %s",&local_138,auStack_104);
        FUN_0057b8e0(acStack_d0,local_14c,(float)local_154,1,0xffffffff);
        iVar8 = iVar8 + param_2;
        local_154 = iVar8;
        cVar1 = (**(code **)(DAT_00b35788 + 0x134))();
        iVar6 = (int)cVar1;
        cVar1 = (**(code **)(*piVar2 + 0x134))(iVar6);
        FUN_004a9930(&local_138,(int)cVar1,iVar6);
        cVar1 = (**(code **)(DAT_00b35788 + 0x138))();
        iVar6 = (int)cVar1;
        cVar1 = (**(code **)(*piVar2 + 0x138))(iVar6);
        FUN_004a9930(auStack_104,(int)cVar1,iVar6);
        _sprintf(acStack_d0,"Left: %s Right: %s",&local_138,auStack_104);
        fVar11 = (float)local_154;
        pcVar3 = acStack_d0;
      }
      FUN_0057b8e0(pcVar3,local_14c,fVar11,1,0xffffffff);
      local_154 = iVar8 + param_2;
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0x13c))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0x13c))(fVar11);
      FUN_004a98d0(&local_138,(float)fVar10,fVar11);
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0x140))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0x140))(fVar11);
      FUN_004a98d0(auStack_104,(float)fVar10,fVar11);
      _sprintf(acStack_d0,"Hold Timer Min: %s Max: %s",&local_138,auStack_104);
      FUN_0057b8e0(acStack_d0,local_14c,(float)local_154,1,0xffffffff);
      iVar8 = iVar8 + param_2 + param_2;
      FUN_0057b8e0("MANEUVER DECISION",local_150,(float)unaff_EBX,3,0xffffffff);
      cVar1 = (**(code **)(DAT_00b35788 + 0xdc))();
      iVar6 = (int)cVar1;
      cVar1 = (**(code **)(*piVar2 + 0xdc))(iVar6);
      FUN_004a9930(&local_138,(int)cVar1,iVar6);
      _sprintf(acStack_d0,"Dodge %%Chance: %s",&local_138);
      FUN_0057b8e0(acStack_d0,local_150,(float)(iVar5 + param_2),3,0xffffffff);
      iVar6 = iVar5 + param_2 + param_2;
      cVar1 = (**(code **)(DAT_00b35788 + 0xe4))();
      iVar5 = (int)cVar1;
      cVar1 = (**(code **)(*piVar2 + 0xe4))(iVar5);
      FUN_004a9930(&local_138,(int)cVar1,iVar5);
      _sprintf(acStack_d0,"Dodge Left/Right %%Chance: %s",&local_138);
      FUN_0057b8e0(acStack_d0,local_150,(float)iVar6,3,0xffffffff);
      iVar6 = iVar6 + param_2;
      cVar1 = (**(code **)(DAT_00b35788 + 0xe0))();
      iVar5 = (int)cVar1;
      cVar1 = (**(code **)(*piVar2 + 0xe0))(iVar5);
      FUN_004a9930(&local_138,(int)cVar1,iVar5);
      _sprintf(acStack_d0,"Acrobatic Dodge %%Chance: %s",&local_138);
      FUN_0057b8e0(acStack_d0,local_150,(float)iVar6,3,0xffffffff);
      iVar6 = iVar6 + param_2;
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0x100))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0x100))(fVar11);
      FUN_004a98d0(&local_138,(float)fVar10,fVar11);
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0x104))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0x104))(fVar11);
      FUN_004a98d0(auStack_104,(float)fVar10,fVar11);
      _sprintf(acStack_d0,"Idle Timer Min: %s Max: %s",&local_138,auStack_104);
      FUN_0057b8e0(acStack_d0,local_150,(float)iVar6,3,0xffffffff);
      iVar6 = iVar6 + param_2;
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0xe8))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0xe8))(fVar11);
      FUN_004a98d0(&local_138,(float)fVar10,fVar11);
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0xec))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0xec))(fVar11);
      FUN_004a98d0(auStack_104,(float)fVar10,fVar11);
      _sprintf(acStack_d0,"Dodge L/R Timer Min: %s Max: %s",&local_138,auStack_104);
      FUN_0057b8e0(acStack_d0,local_150,(float)iVar6,3,0xffffffff);
      iVar6 = iVar6 + param_2;
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0xf0))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0xf0))(fVar11);
      FUN_004a98d0(&local_138,(float)fVar10,fVar11);
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0xf4))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0xf4))(fVar11);
      FUN_004a98d0(auStack_104,(float)fVar10,fVar11);
      _sprintf(acStack_d0,"Dodge Forward Timer Min: %s Max: %s",&local_138,auStack_104);
      FUN_0057b8e0(acStack_d0,local_150,(float)iVar6,3,0xffffffff);
      iVar6 = iVar6 + param_2;
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0xf8))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0xf8))(fVar11);
      FUN_004a98d0(&local_138,(float)fVar10,fVar11);
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0xfc))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0xfc))(fVar11);
      FUN_004a98d0(auStack_104,(float)fVar10,fVar11);
      _sprintf(acStack_d0,"Dodge Back Timer Min: %s Max: %s",&local_138,auStack_104);
      FUN_0057b8e0(acStack_d0,local_150,(float)iVar6,3,0xffffffff);
      iVar6 = iVar6 + param_2;
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0x144))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0x144))(fVar11);
      FUN_004a98d0(&local_138,(float)fVar10,fVar11);
      _sprintf(acStack_d0,"Optimal Range Mult: %s",&local_138);
      FUN_0057b8e0(acStack_d0,local_150,(float)iVar6,3,0xffffffff);
      iVar6 = iVar6 + param_2;
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0x148))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0x148))(fVar11);
      FUN_004a98d0(&local_138,(float)fVar10,fVar11);
      _sprintf(acStack_d0,"Maximum Range Mult: %s",&local_138);
      FUN_0057b8e0(acStack_d0,local_150,(float)iVar6,3,0xffffffff);
      iVar6 = iVar6 + param_2;
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0x14c))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0x14c))(fVar11);
      FUN_004a98d0(&local_138,(float)fVar10,fVar11);
      _sprintf(acStack_d0,"Switch to Melee Distance: %s",&local_138);
      FUN_0057b8e0(acStack_d0,local_150,(float)iVar6,3,0xffffffff);
      iVar6 = iVar6 + param_2;
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0x150))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0x150))(fVar11);
      FUN_004a98d0(&local_138,(float)fVar10,fVar11);
      _sprintf(acStack_d0,"Switch to Ranged Distance: %s",&local_138);
      FUN_0057b8e0(acStack_d0,local_150,(float)iVar6,3,0xffffffff);
      iVar6 = iVar6 + param_2;
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0x154))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0x154))(fVar11);
      FUN_004a98d0(&local_138,(float)fVar10,fVar11);
      _sprintf(acStack_d0,"Buff Standoff Distance: %s",&local_138);
      FUN_0057b8e0(acStack_d0,local_150,(float)iVar6,3,0xffffffff);
      iVar6 = iVar6 + param_2;
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0x158))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0x158))(fVar11);
      FUN_004a98d0(&local_138,(float)fVar10,fVar11);
      _sprintf(acStack_d0,"Ranged Standoff Distance: %s",&local_138);
      FUN_0057b8e0(acStack_d0,local_150,(float)iVar6,3,0xffffffff);
      iVar6 = iVar6 + param_2;
      fVar10 = (float10)(**(code **)(DAT_00b35788 + 0x15c))();
      fVar11 = (float)fVar10;
      fVar10 = (float10)(**(code **)(*piVar2 + 0x15c))(fVar11);
      FUN_004a98d0(&local_138,(float)fVar10,fVar11);
      _sprintf(acStack_d0,"GroupStandoff Distance: %s",&local_138);
      FUN_0057b8e0(acStack_d0,local_150,(float)iVar6,3,0xffffffff);
      iVar6 = iVar6 + param_2;
      iVar12 = 0x40;
      cVar1 = (**(code **)(*piVar2 + 0x16c))(0x40);
      pcVar3 = "Prefers Ranged Attacks";
      if (cVar1 == '\0') {
        pcVar3 = "No Ranged Preference";
      }
      pcVar7 = acStack_d4;
      do {
        cVar1 = *pcVar3;
        *pcVar7 = cVar1;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_0057b8e0(acStack_d4,local_154,(float)unaff_EBP,3,0xffffffff);
      iVar5 = iVar6 + param_2;
      cVar1 = (**(code **)(*piVar2 + 0x16c))(8);
      pcVar3 = "Yield Enabled";
      if (cVar1 == '\0') {
        pcVar3 = "Yield Disabled";
      }
      pcVar7 = acStack_d8;
      do {
        cVar1 = *pcVar3;
        *pcVar7 = cVar1;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_0057b8e0(acStack_d8,iVar6,(float)unaff_ESI,3,0xffffffff);
      iVar6 = iVar5 + param_2;
      cVar1 = (**(code **)(*piVar2 + 0x16c))(0x20);
      pcVar3 = "Flee Disabled";
      if (cVar1 == '\0') {
        pcVar3 = "Flee Enabled";
      }
      pcVar7 = acStack_dc;
      do {
        cVar1 = *pcVar3;
        *pcVar7 = cVar1;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_0057b8e0(acStack_dc,iVar5,(float)unaff_EDI,3,0xffffffff);
      iVar9 = iVar6 + param_2;
      cVar1 = (**(code **)(*piVar2 + 0x16c))(0x10);
      pcVar3 = "Rejects Yields";
      if (cVar1 == '\0') {
        pcVar3 = "Accepts Yields";
      }
      pcVar7 = acStack_e0;
      do {
        cVar1 = *pcVar3;
        *pcVar7 = cVar1;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_0057b8e0(acStack_e0,iVar6,(float)iVar4,3,0xffffffff);
      iVar5 = iVar9 + param_2;
      cVar1 = (**(code **)(*piVar2 + 0x16c))(4);
      pcVar3 = "Ignores allies in range of area effects";
      if (cVar1 == '\0') {
        pcVar3 = "Won\'t cast area effects if allies are in range";
      }
      pcVar7 = acStack_e4;
      do {
        cVar1 = *pcVar3;
        *pcVar7 = cVar1;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_0057b8e0(acStack_e4,iVar9,(float)iVar12,3,0xffffffff);
      cVar1 = (**(code **)(*piVar2 + 0x16c))(1);
      if (cVar1 != '\0') {
        iVar8 = iVar8 + param_2;
        local_150 = iVar8;
        FUN_0057b8e0("ADVANCED SETTINGS",local_13c,(float)iVar8,2,0xffffffff);
        iVar8 = iVar8 + param_2;
        local_154 = iVar8;
        local_150 = iVar8;
        fVar10 = (float10)FUN_004a9f70();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004a9f70(fVar11);
        FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
        fVar10 = (float10)FUN_004a9f30();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004a9f30(fVar11);
        FUN_004a98d0(auStack_100,(float)fVar10,fVar11);
        _sprintf(local_cc,"Block Skill Modifier Base: %s Mult: %s",auStack_134,auStack_100);
        FUN_0057b8e0(local_cc,local_148,(float)local_150,1,0xffffffff);
        iVar5 = iVar8 + param_2;
        local_150 = iVar5;
        fVar10 = (float10)FUN_004aa070();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004aa070(fVar11);
        FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
        fVar10 = (float10)FUN_004aa030();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004aa030(fVar11);
        FUN_004a98d0(auStack_100,(float)fVar10,fVar11);
        _sprintf(local_cc,"Attack Skill Modifier Base: %s Mult: %s",auStack_134,auStack_100);
        FUN_0057b8e0(local_cc,local_148,(float)local_150,1,0xffffffff);
        local_150 = iVar5 + param_2;
        fVar10 = (float10)FUN_004aa170();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004aa170(fVar11);
        FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
        fVar10 = (float10)FUN_004aa1b0();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004aa1b0(fVar11);
        FUN_004a98d0(auStack_100,(float)fVar10,fVar11);
        _sprintf(local_cc,"Power Att. Fatigue Modifier Base: %s Mult: %s",auStack_134,auStack_100);
        FUN_0057b8e0(local_cc,local_148,(float)local_150,1,0xffffffff);
        iVar8 = iVar5 + param_2 + param_2;
        local_150 = iVar8;
        fVar10 = (float10)FUN_004aa0b0();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004aa0b0(fVar11);
        FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
        _sprintf(local_cc,"Attack While Under Attack Mult: %s",auStack_134);
        FUN_0057b8e0(local_cc,local_148,(float)local_150,1,0xffffffff);
        iVar8 = iVar8 + param_2;
        local_150 = iVar8;
        fVar10 = (float10)FUN_004aa130();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004aa130(fVar11);
        FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
        _sprintf(local_cc,"Attack Not Under Attack Mult: %s",auStack_134);
        FUN_0057b8e0(local_cc,local_148,(float)local_150,1,0xffffffff);
        iVar8 = iVar8 + param_2;
        local_150 = iVar8;
        fVar10 = (float10)FUN_004a9fb0();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004a9fb0(fVar11);
        FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
        _sprintf(local_cc,"Block While Under Attack Mult: %s",auStack_134);
        FUN_0057b8e0(local_cc,local_148,(float)local_150,1,0xffffffff);
        iVar8 = iVar8 + param_2;
        local_150 = iVar8;
        fVar10 = (float10)FUN_004a9ff0();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004a9ff0(fVar11);
        FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
        _sprintf(local_cc,"Block Not Under Attack Mult: %s",auStack_134);
        FUN_0057b8e0(local_cc,local_148,(float)local_150,1,0xffffffff);
        iVar8 = iVar8 + param_2;
        fVar10 = (float10)FUN_004a9cf0();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004a9cf0(fVar11);
        FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
        fVar10 = (float10)FUN_004a9cb0();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004a9cb0(fVar11);
        FUN_004a98d0(auStack_100,(float)fVar10,fVar11);
        _sprintf(local_cc,"Dodge Fatigue Modifier Base: %s Mult: %s",auStack_134,auStack_100);
        FUN_0057b8e0(local_cc,local_14c,(float)local_154,3,0xffffffff);
        local_154 = iVar5;
        fVar10 = (float10)FUN_004a9d30();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004a9d30(fVar11);
        FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
        fVar10 = (float10)FUN_004a9d70();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004a9d70();
        FUN_004a98d0(auStack_100,(float)fVar10,fVar11);
        _sprintf(local_cc,"Encumbered Speed Modifier Base: %s Mult: %s",auStack_134,auStack_100);
        FUN_0057b8e0(local_cc,local_14c,(float)local_154,3,0xffffffff);
        local_154 = iVar5 + param_2;
        fVar10 = (float10)FUN_004a9db0();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004a9db0(fVar11);
        FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
        _sprintf(local_cc,"Dodge While Under Attack Mult: %s",auStack_134);
        FUN_0057b8e0(local_cc,local_14c,(float)local_154,3,0xffffffff);
        iVar5 = iVar5 + param_2 + param_2;
        local_154 = iVar5;
        fVar10 = (float10)FUN_004a9df0();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004a9df0(fVar11);
        FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
        _sprintf(local_cc,"Dodge Not Under Attack Mult: %s",auStack_134);
        FUN_0057b8e0(local_cc,local_14c,(float)local_154,3,0xffffffff);
        iVar5 = iVar5 + param_2;
        local_154 = iVar5;
        fVar10 = (float10)FUN_004a9e30();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004a9e30(fVar11);
        FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
        _sprintf(local_cc,"Dodge Back While Under Attack Mult: %s",auStack_134);
        FUN_0057b8e0(local_cc,local_14c,(float)local_154,3,0xffffffff);
        iVar5 = iVar5 + param_2;
        local_154 = iVar5;
        fVar10 = (float10)FUN_004a9e70();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004a9e70(fVar11);
        FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
        _sprintf(local_cc,"Dodge Back Not Under Attack Mult: %s",auStack_134);
        FUN_0057b8e0(local_cc,local_14c,(float)local_154,3,0xffffffff);
        iVar5 = iVar5 + param_2;
        local_154 = iVar5;
        fVar10 = (float10)FUN_004a9eb0();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004a9eb0(fVar11);
        FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
        _sprintf(local_cc,"Dodge Forward While Attacking Mult: %s",auStack_134);
        FUN_0057b8e0(local_cc,local_14c,(float)local_154,3,0xffffffff);
        iVar5 = iVar5 + param_2;
        local_154 = iVar5;
        fVar10 = (float10)FUN_004a9ef0();
        fVar11 = (float)fVar10;
        fVar10 = (float10)FUN_004a9ef0(fVar11);
        FUN_004a98d0(auStack_134,(float)fVar10,fVar11);
        _sprintf(local_cc,"Dodge Forward Not Attacking Mult: %s",auStack_134);
        FUN_0057b8e0(local_cc,local_14c,(float)local_154,3,0xffffffff);
      }
      iVar5 = iVar5 + param_2;
      param_3 = local_144;
      param_4 = local_140;
    }
    else {
      FUN_0057b8e0("COMBAT STYLE: Current ref is the Player.",local_148,(float)local_150,1,
                   0xffffffff);
      iVar8 = iVar8 + param_2;
    }
  }
  *param_3 = iVar8;
  if (iVar5 < iVar8) {
    *param_4 = iVar8;
  }
  else {
    *param_4 = iVar5;
  }
  return;
}



void FUN_004abb40(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2b48;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a407f4;
  *(undefined1 *)(in_ECX + 1) = 0x3e;
  FUN_004a9a00();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004abba0(byte param_1)

{
  FUN_004a9980();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004abbc0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  
  cVar1 = FUN_004511c0();
  if (cVar1 == '>') {
    (**(code **)(*in_ECX + 0x18))();
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 == 0x44415343) {
        if (in_ECX[0x25] != 0) {
          FUN_00401f20(in_ECX[0x25]);
          in_ECX[0x25] = 0;
        }
        iVar3 = FUN_00401f00(0x54);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_004a9bf0();
        }
        in_ECX[0x25] = iVar3;
        FUN_00450c20(iVar3,0x54);
        *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) | 1;
      }
      else if (iVar3 == 0x44494445) {
        FUN_00450c20(&stack0xfffffff0,0x200);
        (**(code **)(*in_ECX + 0xd8))(&stack0xfffffff0);
      }
      else if (iVar3 == 0x44545343) {
        _memset(in_ECX + 6,0,0x7c);
        in_ECX[0x1b] = 0x3f800000;
        in_ECX[0x1c] = 0x3f800000;
        in_ECX[0x1d] = _DAT_00b35670;
        in_ECX[0x1e] = _DAT_00b35678;
        in_ECX[0x1f] = _DAT_00b35680;
        in_ECX[0x20] = _DAT_00b35688;
        in_ECX[0x21] = _DAT_00b35690;
        *(undefined1 *)(in_ECX + 0x22) = DAT_00b35778;
        in_ECX[0x23] = _DAT_00b35780;
        FUN_00450c20(in_ECX + 6,0x7c);
        if ((float)in_ECX[0x1d] <= 0.0) {
          in_ECX[0x1d] = _DAT_00b35670;
        }
        if ((float)in_ECX[0x1e] <= 0.0) {
          in_ECX[0x1e] = _DAT_00b35678;
        }
        if ((char)in_ECX[0x22] < '\x01') {
          *(undefined1 *)(in_ECX + 0x22) = DAT_00b35778;
        }
        if ((float)in_ECX[0x23] <= 0.0) {
          in_ECX[0x23] = _DAT_00b35780;
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



undefined4 FUN_004abe50(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int *in_ECX;
  float10 fVar4;
  float10 fVar5;
  
  piVar3 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b053e0,0);
  if ((piVar3 != (int *)0x0) && (cVar1 = FUN_0046ad70(piVar3), cVar1 == '\0')) {
    cVar1 = (**(code **)(*piVar3 + 0xdc))();
    cVar2 = (**(code **)(*in_ECX + 0xdc))();
    if (cVar2 == cVar1) {
      cVar1 = (**(code **)(*piVar3 + 0xe0))();
      cVar2 = (**(code **)(*in_ECX + 0xe0))();
      if (cVar2 == cVar1) {
        cVar1 = (**(code **)(*piVar3 + 0xe4))();
        cVar2 = (**(code **)(*in_ECX + 0xe4))();
        if (cVar2 == cVar1) {
          fVar4 = (float10)(**(code **)(*in_ECX + 0xe8))();
          fVar5 = (float10)(**(code **)(*piVar3 + 0xe8))();
          if (fVar5 == (float10)(double)fVar4) {
            fVar4 = (float10)(**(code **)(*in_ECX + 0xec))();
            fVar5 = (float10)(**(code **)(*piVar3 + 0xec))();
            if (fVar5 == (float10)(double)fVar4) {
              fVar4 = (float10)(**(code **)(*in_ECX + 0xf0))();
              fVar5 = (float10)(**(code **)(*piVar3 + 0xf0))();
              if (fVar5 == (float10)(double)fVar4) {
                fVar4 = (float10)(**(code **)(*in_ECX + 0xf4))();
                fVar5 = (float10)(**(code **)(*piVar3 + 0xf4))();
                if (fVar5 == (float10)(double)fVar4) {
                  fVar4 = (float10)(**(code **)(*in_ECX + 0xf8))();
                  fVar5 = (float10)(**(code **)(*piVar3 + 0xf8))();
                  if (fVar5 == (float10)(double)fVar4) {
                    fVar4 = (float10)(**(code **)(*in_ECX + 0xfc))();
                    fVar5 = (float10)(**(code **)(*piVar3 + 0xfc))();
                    if (fVar5 == (float10)(double)fVar4) {
                      fVar4 = (float10)(**(code **)(*in_ECX + 0x100))();
                      fVar5 = (float10)(**(code **)(*piVar3 + 0x100))();
                      if (fVar5 == (float10)(double)fVar4) {
                        fVar4 = (float10)(**(code **)(*in_ECX + 0x104))();
                        fVar5 = (float10)(**(code **)(*piVar3 + 0x104))();
                        if (fVar5 == (float10)(double)fVar4) {
                          cVar1 = (**(code **)(*piVar3 + 0x108))();
                          cVar2 = (**(code **)(*in_ECX + 0x108))();
                          if (cVar2 == cVar1) {
                            cVar1 = (**(code **)(*piVar3 + 0x10c))();
                            cVar2 = (**(code **)(*in_ECX + 0x10c))();
                            if (cVar2 == cVar1) {
                              fVar4 = (float10)(**(code **)(*in_ECX + 0x110))();
                              fVar5 = (float10)(**(code **)(*piVar3 + 0x110))();
                              if (fVar5 == (float10)(double)fVar4) {
                                fVar4 = (float10)(**(code **)(*in_ECX + 0x114))();
                                fVar5 = (float10)(**(code **)(*piVar3 + 0x114))();
                                if (fVar5 == (float10)(double)fVar4) {
                                  fVar4 = (float10)(**(code **)(*in_ECX + 0x118))();
                                  fVar5 = (float10)(**(code **)(*piVar3 + 0x118))();
                                  if (fVar5 == (float10)(double)fVar4) {
                                    cVar1 = (**(code **)(*piVar3 + 0x11c))();
                                    cVar2 = (**(code **)(*in_ECX + 0x11c))();
                                    if (cVar2 == cVar1) {
                                      fVar4 = (float10)(**(code **)(*in_ECX + 0x120))();
                                      fVar5 = (float10)(**(code **)(*piVar3 + 0x120))();
                                      if (fVar5 == (float10)(double)fVar4) {
                                        fVar4 = (float10)(**(code **)(*in_ECX + 0x124))();
                                        fVar5 = (float10)(**(code **)(*piVar3 + 0x124))();
                                        if (fVar5 == (float10)(double)fVar4) {
                                          cVar1 = (**(code **)(*piVar3 + 0x128))();
                                          cVar2 = (**(code **)(*in_ECX + 0x128))();
                                          if (cVar2 == cVar1) {
                                            cVar1 = (**(code **)(*piVar3 + 300))();
                                            cVar2 = (**(code **)(*in_ECX + 300))();
                                            if (cVar2 == cVar1) {
                                              cVar1 = (**(code **)(*piVar3 + 0x130))();
                                              cVar2 = (**(code **)(*in_ECX + 0x130))();
                                              if (cVar2 == cVar1) {
                                                cVar1 = (**(code **)(*piVar3 + 0x134))();
                                                cVar2 = (**(code **)(*in_ECX + 0x134))();
                                                if (cVar2 == cVar1) {
                                                  cVar1 = (**(code **)(*piVar3 + 0x138))();
                                                  cVar2 = (**(code **)(*in_ECX + 0x138))();
                                                  if (cVar2 == cVar1) {
                                                    fVar4 = (float10)(**(code **)(*in_ECX + 0x13c))
                                                                               ();
                                                    fVar5 = (float10)(**(code **)(*piVar3 + 0x13c))
                                                                               ();
                                                    if (fVar5 == (float10)(double)fVar4) {
                                                      fVar4 = (float10)(**(code **)(*in_ECX + 0x140)
                                                                       )();
                                                      fVar5 = (float10)(**(code **)(*piVar3 + 0x140)
                                                                       )();
                                                      if (fVar5 == (float10)(double)fVar4) {
                                                        fVar4 = (float10)(**(code **)(*in_ECX +
                                                                                     0x144))();
                                                        fVar5 = (float10)(**(code **)(*piVar3 +
                                                                                     0x144))();
                                                        if (fVar5 == (float10)(double)fVar4) {
                                                          fVar4 = (float10)(**(code **)(*in_ECX +
                                                                                       0x148))();
                                                          fVar5 = (float10)(**(code **)(*piVar3 +
                                                                                       0x148))();
                                                          if (fVar5 == (float10)(double)fVar4) {
                                                            fVar4 = (float10)(**(code **)(*in_ECX +
                                                                                         0x14c))();
                                                            fVar5 = (float10)(**(code **)(*piVar3 +
                                                                                         0x14c))();
                                                            if (fVar5 == (float10)(double)fVar4) {
                                                              fVar4 = (float10)(**(code **)(*in_ECX 
                                                  + 0x150))();
                                                  fVar5 = (float10)(**(code **)(*piVar3 + 0x150))();
                                                  if (fVar5 == (float10)(double)fVar4) {
                                                    fVar4 = (float10)(**(code **)(*in_ECX + 0x154))
                                                                               ();
                                                    fVar5 = (float10)(**(code **)(*piVar3 + 0x154))
                                                                               ();
                                                    if (fVar5 == (float10)(double)fVar4) {
                                                      fVar4 = (float10)(**(code **)(*in_ECX + 0x158)
                                                                       )();
                                                      fVar5 = (float10)(**(code **)(*piVar3 + 0x158)
                                                                       )();
                                                      if (fVar5 == (float10)(double)fVar4) {
                                                        fVar4 = (float10)(**(code **)(*in_ECX +
                                                                                     0x15c))();
                                                        fVar5 = (float10)(**(code **)(*piVar3 +
                                                                                     0x15c))();
                                                        if (fVar5 == (float10)(double)fVar4) {
                                                          fVar4 = (float10)(**(code **)(*in_ECX +
                                                                                       0x164))();
                                                          fVar5 = (float10)(**(code **)(*piVar3 +
                                                                                       0x164))();
                                                          if (fVar5 == (float10)(double)fVar4) {
                                                            cVar1 = (**(code **)(*piVar3 + 0x160))()
                                                            ;
                                                            cVar2 = (**(code **)(*in_ECX + 0x160))()
                                                            ;
                                                            if (((cVar2 == cVar1) &&
                                                                ((char)in_ECX[0x1a] ==
                                                                 (char)piVar3[0x1a])) &&
                                                               (in_ECX[0x24] == piVar3[0x24])) {
                                                              cVar1 = (**(code **)(*in_ECX + 0x16c))
                                                                                (1);
                                                              if (cVar1 == '\0') {
                                                                return 0;
                                                              }
                                                              fVar4 = (float10)FUN_004a9cb0();
                                                              fVar5 = (float10)FUN_004a9cb0();
                                                              if (fVar5 == (float10)(double)fVar4) {
                                                                fVar4 = (float10)FUN_004a9cf0();
                                                                fVar5 = (float10)FUN_004a9cf0();
                                                                if (fVar5 == (float10)(double)fVar4)
                                                                {
                                                                  fVar4 = (float10)FUN_004a9d30();
                                                                  fVar5 = (float10)FUN_004a9d30();
                                                                  if (fVar5 == (float10)(double)
                                                  fVar4) {
                                                    fVar4 = (float10)FUN_004a9d70();
                                                    fVar5 = (float10)FUN_004a9d70();
                                                    if (fVar5 == (float10)(double)fVar4) {
                                                      fVar4 = (float10)FUN_004a9db0();
                                                      fVar5 = (float10)FUN_004a9db0();
                                                      if (fVar5 == (float10)(double)fVar4) {
                                                        fVar4 = (float10)FUN_004a9df0();
                                                        fVar5 = (float10)FUN_004a9df0();
                                                        if (fVar5 == (float10)(double)fVar4) {
                                                          fVar4 = (float10)FUN_004a9e30();
                                                          fVar5 = (float10)FUN_004a9e30();
                                                          if (fVar5 == (float10)(double)fVar4) {
                                                            fVar4 = (float10)FUN_004a9e70();
                                                            fVar5 = (float10)FUN_004a9e70();
                                                            if (fVar5 == (float10)(double)fVar4) {
                                                              fVar4 = (float10)FUN_004a9eb0();
                                                              fVar5 = (float10)FUN_004a9eb0();
                                                              if (fVar5 == (float10)(double)fVar4) {
                                                                fVar4 = (float10)FUN_004a9ef0();
                                                                fVar5 = (float10)FUN_004a9ef0();
                                                                if (fVar5 == (float10)(double)fVar4)
                                                                {
                                                                  fVar4 = (float10)FUN_004a9f30();
                                                                  fVar5 = (float10)FUN_004a9f30();
                                                                  if (fVar5 == (float10)(double)
                                                  fVar4) {
                                                    fVar4 = (float10)FUN_004a9f70();
                                                    fVar5 = (float10)FUN_004a9f70();
                                                    if (fVar5 == (float10)(double)fVar4) {
                                                      fVar4 = (float10)FUN_004a9fb0();
                                                      fVar5 = (float10)FUN_004a9fb0();
                                                      if (fVar5 == (float10)(double)fVar4) {
                                                        fVar4 = (float10)FUN_004a9ff0();
                                                        fVar5 = (float10)FUN_004a9ff0();
                                                        if (fVar5 == (float10)(double)fVar4) {
                                                          fVar4 = (float10)FUN_004aa0b0();
                                                          fVar5 = (float10)FUN_004aa0b0();
                                                          if (fVar5 == (float10)(double)fVar4) {
                                                            fVar4 = (float10)FUN_004aa0f0();
                                                            fVar5 = (float10)FUN_004aa0f0();
                                                            if (fVar5 == (float10)(double)fVar4) {
                                                              fVar4 = (float10)FUN_004aa130();
                                                              fVar5 = (float10)FUN_004aa130();
                                                              if (fVar5 == (float10)(double)fVar4) {
                                                                fVar4 = (float10)FUN_004aa170();
                                                                fVar5 = (float10)FUN_004aa170();
                                                                if (fVar5 == (float10)(double)fVar4)
                                                                {
                                                                  fVar4 = (float10)FUN_004aa1b0();
                                                                  fVar5 = (float10)FUN_004aa1b0();
                                                                  if (fVar5 == (float10)(double)
                                                  fVar4) {
                                                    return 0;
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
  return 1;
}



void FUN_004ac6b0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b2bc4;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a419ec;
  local_4 = 2;
  thunk_FUN_0046b170(uVar1);
  local_4._0_1_ = 1;
  FUN_00470040();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00470040();
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



bool FUN_004ac730(byte param_1)

{
  int in_ECX;
  
  return (*(byte *)(in_ECX + 0x18) & param_1) != 0;
}



void FUN_004ac740(undefined4 param_1,undefined4 param_2)

{
  FUN_007e39a0(param_1,param_2);
  return;
}



float10 FUN_004ac760(float param_1,float param_2)

{
  if (param_1 < param_2) {
    return (float10)param_1;
  }
  return (float10)param_2;
}



float10 FUN_004ac790(float param_1,float param_2)

{
  if (param_2 < param_1) {
    return (float10)param_1;
  }
  return (float10)param_2;
}



void FUN_004ac7c0(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0xac);
  uVar1 = *(undefined4 *)(in_ECX + 0xb4);
  param_1[1] = *(undefined4 *)(in_ECX + 0xb0);
  param_1[2] = uVar1;
  return;
}



void FUN_004ac7f0(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0xb8);
  uVar1 = *(undefined4 *)(in_ECX + 0xc0);
  param_1[1] = *(undefined4 *)(in_ECX + 0xbc);
  param_1[2] = uVar1;
  return;
}



void FUN_004ac820(byte param_1)

{
  FUN_004ac6b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004ac840(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  
  cVar1 = FUN_004511c0();
  if (cVar1 == 'C') {
    (**(code **)(*in_ECX + 0x18))();
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 < 0x44494446) {
        if (iVar3 == 0x44494445) {
          FUN_00450c20(&stack0xfffffff0,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xfffffff0);
        }
        else {
          if (iVar3 == 0x324f4349) {
            piVar4 = in_ECX + 0x41;
            goto LAB_004ac8f9;
          }
          if (iVar3 == 0x41544144) {
            FUN_0046bda0(param_1,in_ECX + 6,0xe0);
          }
        }
      }
      else if (iVar3 == 0x4e4f4349) {
        piVar4 = in_ECX + 0x3e;
LAB_004ac8f9:
        FUN_004700e0(piVar4,param_1);
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



void FUN_004ac9c0(void)

{
  undefined1 *in_ECX;
  
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 6;
  *(undefined4 *)(in_ECX + 0x6c) = 6;
  *(undefined4 *)(in_ECX + 0x28) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x34) = 0x3f800000;
  *(undefined4 *)(in_ECX + 8) = 1;
  *(undefined4 *)(in_ECX + 100) = 1;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 4) = 5;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 3;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 5;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 4;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x54) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x58) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x84) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0xac) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xb0) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0xb8) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  *(undefined4 *)(in_ECX + 0xb4) = 0;
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  *(undefined4 *)(in_ECX + 0xbc) = 0xffffff;
  *(undefined4 *)(in_ECX + 200) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0xc0) = 0xffffff;
  *(undefined4 *)(in_ECX + 0xcc) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0xc4) = 0xffffff;
  *(undefined4 *)(in_ECX + 0xd0) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  *(undefined4 *)(in_ECX + 0xd8) = 0x3f000000;
  *(undefined4 *)(in_ECX + 0xdc) = 0x3f800000;
  return;
}



int FUN_004acb20(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  LONG LVar5;
  int in_ECX;
  int iVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c95eb;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = FUN_00401f00(0x6c,uVar3);
  iVar6 = 0;
  local_4 = 0;
  if (iVar4 != 0) {
    iVar6 = FUN_007d78a0();
  }
  puVar1 = *(undefined4 **)(iVar6 + 8);
  uVar3 = *(uint *)(in_ECX + 0x50);
  uVar2 = *(uint *)(in_ECX + 0x28);
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 1);
    if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(iVar6 + 8) = 0;
  }
  *(float *)(iVar6 + 0x2c) = (float)(uVar2 & 0xff) / 255.0;
  *(float *)(iVar6 + 0x30) = (float)(uVar2 >> 8 & 0xff) / 255.0;
  *(float *)(iVar6 + 0x34) = (float)(uVar2 >> 0x10 & 0xff) / 255.0;
  *(undefined4 *)(iVar6 + 0x38) = 0;
  *(undefined4 *)(iVar6 + 0x4c) = 0;
  *(undefined4 *)(iVar6 + 0x50) = 0;
  *(float *)(iVar6 + 0x3c) = (float)(uVar3 & 0xff) / 255.0;
  *(float *)(iVar6 + 0x40) = (float)(uVar3 >> 8 & 0xff) / 255.0;
  *(float *)(iVar6 + 0x44) = (float)(uVar3 >> 0x10 & 0xff) / 255.0;
  *(undefined4 *)(iVar6 + 0x48) = 0;
  *(undefined4 *)(iVar6 + 0x54) = *(undefined4 *)(in_ECX + 0x4c);
  *(float *)(iVar6 + 0x58) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x2c);
  *(undefined4 *)(iVar6 + 0x5c) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(iVar6 + 0x60) = *(undefined4 *)(in_ECX + 0x74);
  *(undefined4 *)(iVar6 + 100) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(iVar6 + 0x68) = *(undefined4 *)(in_ECX + 0x24);
  puVar1 = *(undefined4 **)(iVar6 + 8);
  if (puVar1 != param_2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(iVar6 + 8) = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  if ((*(byte *)(in_ECX + 0x18) & 0x10) != 0) {
    *(float *)(iVar6 + 0x3c) = *(float *)(iVar6 + 0x3c) - 1.0;
    *(float *)(iVar6 + 0x40) = *(float *)(iVar6 + 0x40) - 1.0;
    *(float *)(iVar6 + 0x44) = *(float *)(iVar6 + 0x44) - 1.0;
  }
  *unaff_FS_OFFSET = local_c;
  return iVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004acd90(void)

{
  int in_ECX;
  float10 fVar1;
  
  if (0.0 < *(float *)(in_ECX + 100)) {
    fVar1 = (float10)FUN_00986300();
    return (float10)((float)fVar1 * *(float *)(in_ECX + 100));
  }
  return (float10)1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004acde0(void)

{
  int in_ECX;
  float10 fVar1;
  
  if (0.0 < *(float *)(in_ECX + 0x3c)) {
    fVar1 = (float10)FUN_00986300();
    return (float10)((float)fVar1 * *(float *)(in_ECX + 0x3c));
  }
  return (float10)1;
}



float10 FUN_004ace30(float param_1,float param_2,float param_3,char param_4,float param_5,
                    float param_6,float param_7,float param_8,float param_9)

{
  float10 fVar1;
  
  if ((param_4 == '\0') || (param_3 < param_5 + param_7)) {
    if (param_5 <= param_3) {
      if (param_3 - param_5 < param_7) {
        return (float10)param_8;
      }
      if (param_6 <= (param_3 - param_5) - param_7) {
        return (float10)param_9;
      }
      fVar1 = (float10)FUN_004ac790(param_9,param_1 - ABS(param_8 - param_9) * (param_2 / param_6));
      return (float10)(float)fVar1;
    }
    param_1 = param_1 + param_8 * (param_2 / param_5);
    if (param_8 < param_1) {
      return (float10)param_8;
    }
  }
  else {
    if ((param_6 <= 0.0) || (param_8 - param_9 == 0.0)) {
      _param_4 = 0.33;
    }
    else {
      _param_4 = ABS(param_8 - param_9) * (1.0 / param_6);
      if (_param_4 < 0.33) {
        _param_4 = 0.33;
      }
    }
    param_1 = param_1 - _param_4 * param_2;
    if (param_1 < 0.0) {
      return (float10)0.0;
    }
  }
  return (float10)param_1;
}



void FUN_004acff0(void)

{
  FUN_004ac9c0();
  thunk_FUN_0046b090();
  return;
}



void FUN_004ad010(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int in_ECX;
  undefined1 *puVar5;
  
  FUN_0046b990();
  if (*(ushort *)(in_ECX + 0x100) == 0xffff) {
    pcVar3 = *(char **)(in_ECX + 0xfc);
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar4 = (int)pcVar3 - (int)pcVar1;
  }
  else {
    uVar4 = (uint)*(ushort *)(in_ECX + 0x100);
  }
  if (uVar4 == 0) {
    if (*(ushort *)(in_ECX + 0x100) == 0xffff) {
      pcVar3 = *(char **)(in_ECX + 0xfc);
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar3 - (int)pcVar1;
    }
    else {
      uVar4 = (uint)*(ushort *)(in_ECX + 0x100);
    }
    puVar5 = *(undefined1 **)(in_ECX + 0xfc);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_00a2f7ec;
    }
    thunk_FUN_0046ae40(0x4e4f4349,puVar5,uVar4 + 1);
  }
  else {
    FUN_00470070(0x4e4f4349);
  }
  if (*(ushort *)(in_ECX + 0x10c) == 0xffff) {
    pcVar3 = *(char **)(in_ECX + 0x108);
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar4 = (int)pcVar3 - (int)pcVar1;
  }
  else {
    uVar4 = (uint)*(ushort *)(in_ECX + 0x10c);
  }
  if (uVar4 == 0) {
    if (*(ushort *)(in_ECX + 0x100) == 0xffff) {
      pcVar3 = *(char **)(in_ECX + 0xfc);
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar3 - (int)pcVar1;
    }
    else {
      uVar4 = (uint)*(ushort *)(in_ECX + 0x100);
    }
    puVar5 = *(undefined1 **)(in_ECX + 0xfc);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_00a2f7ec;
    }
    thunk_FUN_0046ae40(0x324f4349,puVar5,uVar4 + 1);
  }
  else {
    FUN_00470070(0x324f4349);
  }
  FUN_0046bbb0(in_ECX + 0x18,0xe0);
  FUN_0046b9f0();
  return;
}



void FUN_004ad630(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  LONG LVar13;
  int in_ECX;
  
  puVar10 = *(undefined4 **)(param_1 + 0x10c);
  if (puVar10 != param_2) {
    if (puVar10 != (undefined4 *)0x0) {
      LVar13 = InterlockedDecrement(puVar10 + 1);
      if ((LVar13 == 0) && (puVar10 != (undefined4 *)0x0)) {
        (**(code **)*puVar10)(1);
      }
    }
    *(undefined4 **)(param_1 + 0x10c) = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(in_ECX + 0x9c);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(in_ECX + 0xa0);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(in_ECX + 0xa4);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(in_ECX + 0xa8);
  uVar11 = *(undefined4 *)(in_ECX + 0xb0);
  uVar12 = *(undefined4 *)(in_ECX + 0xb4);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(in_ECX + 0xac);
  *(undefined4 *)(param_1 + 0x98) = uVar11;
  *(undefined4 *)(param_1 + 0x9c) = uVar12;
  uVar11 = *(undefined4 *)(in_ECX + 0xbc);
  uVar12 = *(undefined4 *)(in_ECX + 0xc0);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(in_ECX + 0xb8);
  *(undefined4 *)(param_1 + 0xa4) = uVar11;
  *(undefined4 *)(param_1 + 0xa8) = uVar12;
  bVar2 = *(byte *)(in_ECX + 0xd5);
  bVar3 = *(byte *)(in_ECX + 0xd6);
  bVar4 = *(byte *)(in_ECX + 0xd8);
  bVar5 = *(byte *)(in_ECX + 0xd9);
  bVar6 = *(byte *)(in_ECX + 0xda);
  bVar7 = *(byte *)(in_ECX + 0xdc);
  bVar8 = *(byte *)(in_ECX + 0xdd);
  bVar9 = *(byte *)(in_ECX + 0xde);
  uVar11 = *(undefined4 *)(in_ECX + 0xe0);
  uVar12 = *(undefined4 *)(in_ECX + 0xe4);
  uVar1 = *(undefined4 *)(in_ECX + 0xe8);
  *(float *)(param_1 + 0xb8) = (float)*(byte *)(in_ECX + 0xd4) / 255.0;
  *(float *)(param_1 + 0xbc) = (float)bVar2 / 255.0;
  *(float *)(param_1 + 0xc0) = (float)bVar3 / 255.0;
  *(float *)(param_1 + 200) = (float)bVar4 / 255.0;
  *(undefined4 *)(param_1 + 0xc4) = uVar11;
  *(float *)(param_1 + 0xcc) = (float)bVar5 / 255.0;
  *(float *)(param_1 + 0xd0) = (float)bVar6 / 255.0;
  *(float *)(param_1 + 0xd8) = (float)bVar7 / 255.0;
  *(undefined4 *)(param_1 + 0xd4) = uVar12;
  *(float *)(param_1 + 0xdc) = (float)bVar8 / 255.0;
  *(float *)(param_1 + 0xe0) = (float)bVar9 / 255.0;
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(in_ECX + 0xec);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(in_ECX + 0xf0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(in_ECX + 0xf4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(in_ECX + 0xc4);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(in_ECX + 200);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(in_ECX + 0xcc);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(in_ECX + 0xd0);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(in_ECX + 0x78);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(in_ECX + 0x7c);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(in_ECX + 0x80);
  return;
}



undefined4 FUN_004ad990(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    uVar1 = FUN_007e45f0(param_1,param_2);
    FUN_004ad630(uVar1,param_3);
    FUN_007e4800(param_4);
    return uVar1;
  }
  return 0;
}



void FUN_004ad9e0(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0xc))();
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_1 + 8))();
      if (iVar2 != 0) {
        uVar7 = 0;
        if (*(short *)(iVar2 + 0xb6) != 0) {
          if (*(short *)(iVar2 + 0xb6) != 0) goto LAB_004ada9c;
          uVar4 = 0;
          while( true ) {
            FUN_004ad9e0(uVar4,param_2);
            uVar7 = uVar7 + 1;
            if (*(ushort *)(iVar2 + 0xb6) <= uVar7) break;
LAB_004ada9c:
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0xb0) + uVar7 * 4);
          }
        }
      }
    }
    else {
      piVar3 = (int *)FUN_00707530(4);
      if (((piVar3 == (int *)0x0) || (iVar2 = (**(code **)(*piVar3 + 0x54))(), iVar2 < 5)) ||
         (iVar2 = (**(code **)(*piVar3 + 0x54))(), 10 < iVar2)) {
        bVar1 = 0;
      }
      else {
        bVar1 = 1;
      }
      if ((-(uint)bVar1 & (uint)piVar3) != 0) {
        if ((*(byte *)(in_ECX + 0x18) & 0x20) != 0) {
          iVar2 = FUN_00707530(2);
          if (*(char **)(iVar2 + 8) != (char *)0x0) {
            iVar5 = 5;
            bVar9 = true;
            pcVar6 = *(char **)(iVar2 + 8);
            pcVar8 = "skin";
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar9 = *pcVar6 == *pcVar8;
              pcVar6 = pcVar6 + 1;
              pcVar8 = pcVar8 + 1;
            } while (bVar9);
            if (!bVar9) {
              return;
            }
          }
        }
        FUN_007d7a70(param_2);
        return;
      }
    }
  }
  return;
}



void FUN_004adad0(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0xc))();
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_1 + 8))();
      if (iVar2 != 0) {
        uVar5 = 0;
        if (*(short *)(iVar2 + 0xb6) != 0) {
          if (*(short *)(iVar2 + 0xb6) != 0) goto LAB_004adb6b;
          uVar4 = 0;
          while( true ) {
            FUN_004adad0(uVar4,param_2);
            uVar5 = uVar5 + 1;
            if (*(ushort *)(iVar2 + 0xb6) <= uVar5) break;
LAB_004adb6b:
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0xb0) + uVar5 * 4);
          }
        }
      }
    }
    else {
      piVar3 = (int *)FUN_00707530(4);
      if (((piVar3 == (int *)0x0) || (iVar2 = (**(code **)(*piVar3 + 0x54))(), iVar2 < 5)) ||
         (iVar2 = (**(code **)(*piVar3 + 0x54))(), 10 < iVar2)) {
        bVar1 = 0;
      }
      else {
        bVar1 = 1;
      }
      if (((-(uint)bVar1 & (uint)piVar3) != 0) &&
         (*(int *)((-(uint)bVar1 & (uint)piVar3) + 0xe0) == param_2)) {
        FUN_007d7a70(0);
        return;
      }
    }
  }
  return;
}



void FUN_004adba0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  
  FUN_004ace30(param_1,param_2,param_3,param_4,*(undefined4 *)(in_ECX + 0x88),
               *(undefined4 *)(in_ECX + 0x90),*(undefined4 *)(in_ECX + 0x8c),
               *(undefined4 *)(in_ECX + 0x94),*(undefined4 *)(in_ECX + 0x98));
  return;
}



void FUN_004adc00(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2c04;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a419ec;
  FUN_004ac9c0();
  FUN_0046ffd0();
  local_4._0_1_ = 1;
  FUN_0046ffd0();
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(in_ECX + 1) = 0x43;
  FUN_004ac9c0();
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004adc90(float param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  
  iVar3 = (int)param_1;
  if (param_1 != 0.0) {
    fVar4 = (float10)FUN_004ace30(*(undefined4 *)((int)param_1 + 0x38),param_2,param_3,param_5,
                                  *(undefined4 *)(in_ECX + 0x2c),*(undefined4 *)(in_ECX + 0x34),
                                  *(undefined4 *)(in_ECX + 0x30),*(undefined4 *)(in_ECX + 0x6c),
                                  *(undefined4 *)(in_ECX + 0x38));
    *(float *)((int)param_1 + 0x38) = (float)fVar4;
    *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)((int)param_1 + 0x2c);
    *(undefined4 *)((int)param_1 + 0x10) = *(undefined4 *)((int)param_1 + 0x30);
    *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)((int)param_1 + 0x34);
    *(undefined4 *)((int)param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0x38);
    fVar4 = (float10)FUN_004acde0(param_4);
    fVar1 = (float)(fVar4 * (float10)*(float *)((int)param_1 + 0x18) +
                   (float10)*(float *)((int)param_1 + 0x18));
    *(float *)((int)param_1 + 0x18) = fVar1;
    param_1 = fVar1;
    if (fVar1 < 0.0) {
      param_1 = 0.0;
    }
    if (param_1 <= 1.0) {
      uVar2 = 0;
      if (0.0 <= fVar1) {
        uVar2 = *(undefined4 *)(iVar3 + 0x18);
      }
    }
    else {
      uVar2 = 0x3f800000;
    }
    *(undefined4 *)(iVar3 + 0x18) = uVar2;
    fVar4 = (float10)FUN_004ace30(*(undefined4 *)(iVar3 + 0x48),param_2,param_3,param_5,
                                  *(undefined4 *)(in_ECX + 0x54),*(undefined4 *)(in_ECX + 0x5c),
                                  *(undefined4 *)(in_ECX + 0x58),*(undefined4 *)(in_ECX + 0x70),
                                  *(undefined4 *)(in_ECX + 0x60));
    *(float *)(iVar3 + 0x48) = (float)fVar4;
    *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 0x3c);
    *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar3 + 0x40);
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar3 + 0x44);
    *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar3 + 0x48);
    fVar4 = (float10)FUN_004acd90(param_4);
    fVar1 = (float)(fVar4 * (float10)*(float *)(iVar3 + 0x28) + (float10)*(float *)(iVar3 + 0x28));
    *(float *)(iVar3 + 0x28) = fVar1;
    param_3 = fVar1;
    if (fVar1 < 0.0) {
      param_3 = 0.0;
    }
    if (param_3 <= 1.0) {
      if (0.0 <= fVar1) {
        uVar2 = *(undefined4 *)(iVar3 + 0x28);
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0x3f800000;
    }
    *(undefined4 *)(iVar3 + 0x28) = uVar2;
    *(float *)(iVar3 + 0x4c) = *(float *)(iVar3 + 0x4c) + param_2 * *(float *)(in_ECX + 0x44);
    *(float *)(iVar3 + 0x50) = param_2 * *(float *)(in_ECX + 0x48) + *(float *)(iVar3 + 0x50);
  }
  return;
}



void FUN_004ade70(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b2c47;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a41c40;
  in_ECX[3] = &PTR_FUN_00a41b1c;
  in_ECX[0xc] = &PTR_FUN_00a41b04;
  in_ECX[0xf] = &PTR_FUN_00a41ae4;
  in_ECX[0x15] = &PTR_LAB_00a41ad0;
  local_4 = 0;
  thunk_FUN_0046b170(uVar1);
  local_4 = 0xffffffff;
  FUN_004b3ff0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004adef0(void)

{
  FUN_0046b990();
  FUN_0046c730();
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  FUN_0046ef80();
  FUN_0046e0d0();
  FUN_0046b9f0();
  return;
}



void FUN_004adfc0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2c7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046e0b0(uVar1);
  FUN_004b40a0();
  local_4 = 0;
  *in_ECX = &PTR_LAB_00a41c40;
  in_ECX[3] = &PTR_FUN_00a41b1c;
  in_ECX[0xc] = &PTR_FUN_00a41b04;
  in_ECX[0xf] = &PTR_FUN_00a41ae4;
  in_ECX[0x15] = &PTR_LAB_00a41ad0;
  *(undefined1 *)(in_ECX + 4) = 0x1f;
  FUN_0046ab80(1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004ae050(byte param_1)

{
  FUN_004ade70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004ae070(void)

{
  uint in_ECX;
  
  if ((*(uint *)(in_ECX + 8) >> 3 & 1) == 0) {
    FUN_004b3d30();
    FUN_0046e220(-(uint)(in_ECX != 0xc) & in_ECX);
    FUN_0046ab80(1);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004ae0a0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  FUN_00451210(in_ECX);
  FUN_0046ab80(0);
  iVar2 = FUN_004510b0();
  do {
    if (iVar2 == 0) {
      return 1;
    }
    if (iVar2 < 0x49524354) {
      if (iVar2 == 0x49524353) {
        local_c = 0;
        FUN_004510e0(&local_c);
        in_ECX[0x13] = local_c;
        FUN_0046f020(-(uint)(in_ECX != (int *)0xc) & (uint)in_ECX);
      }
      else if (iVar2 < 0x44494446) {
        if (iVar2 == 0x44494445) {
          FUN_00450c20(&stack0xffffffe8,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xffffffe8);
        }
        else {
          if (iVar2 == 0x42444f4d) goto LAB_004ae1b4;
          if (iVar2 == 0x43504650) {
            FUN_00450c20(&local_10,4);
            in_ECX[-1] = local_10;
          }
        }
      }
      else if (iVar2 == 0x47494650) {
        local_c = 0;
        FUN_004510e0(&local_c);
        in_ECX[-2] = local_c;
      }
    }
    else if (iVar2 == 0x4c444f4d) {
LAB_004ae1b4:
      if (in_ECX == (int *)0xc) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = in_ECX + 0xc;
      }
      FUN_0046db00(piVar3,param_1);
    }
    else if (iVar2 == 0x4c4c5546) {
      if (in_ECX == (int *)0xc) {
        FUN_0046c7a0(0,param_1);
      }
      else {
        FUN_0046c7a0(in_ECX + 9,param_1);
      }
    }
    else if (iVar2 == 0x54444f4d) goto LAB_004ae1b4;
    cVar1 = FUN_0044fea0();
    if (cVar1 == '\0') {
      return 1;
    }
    iVar2 = FUN_004510b0();
  } while( true );
}



undefined4 FUN_004ae220(int param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int in_ECX;
  undefined4 uVar10;
  int *unaff_FS_OFFSET;
  undefined4 uVar11;
  undefined4 uVar12;
  int iStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b2cbe;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar3 = (int *)FUN_009832e6(param_2,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0,uVar2);
  if ((param_1 == 0) || (piVar3 == (int *)0x0)) goto LAB_004ae4a4;
  if (((*(uint *)(param_1 + 8) >> 0xd & 1) == 0) && (*(int *)(in_ECX + -8) != 0)) {
    iVar4 = FUN_00402dc0();
    bVar1 = *(byte *)(iVar4 + -4 + in_ECX);
    if (bVar1 == 0) goto LAB_004ae46d;
    iVar4 = FUN_0047df80(0);
    if ((int)(uint)bVar1 <= iVar4 % 100) goto LAB_004ae46d;
    iVar4 = *(int *)(in_ECX + -8);
    iVar5 = FUN_009832e6(iVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0331c,0,uVar2);
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar5 + 4);
    }
    uVar10 = 0;
    if (iVar5 == 0) {
      FUN_004d8720(iVar4,0,1);
    }
    else {
      iStack_14 = FUN_00401f00(0x14);
      uStack_4 = 0;
      if (iStack_14 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_00422ee0();
      }
      uStack_4 = 0xffffffff;
      FUN_004238a0(1);
      if (iVar6 != 0) {
        iVar7 = FUN_0041e900();
        if (iVar7 == 0) {
          FUN_0041f090(iVar5);
          FUN_0041e900();
          uVar8 = FUN_004fbdc0();
          FUN_0041f130(uVar8);
          iStack_14 = FUN_00401f00(0x58);
          uStack_4 = 1;
          if (iStack_14 != 0) {
            uVar10 = FUN_004d9a70();
          }
          uVar12 = 0;
          uVar11 = 0;
          uStack_4 = 0xffffffff;
          uVar8 = FUN_0041e920(0,0);
          FUN_004fbe00(uVar10,uVar8,uVar11,uVar12);
        }
      }
      (**(code **)(*piVar3 + 0x114))(iVar4,iVar6,1);
    }
    if (piVar3 == DAT_00b333c4) {
      iStack_14 = 0;
      uStack_10 = 0;
      uStack_e = 0;
      puVar9 = *(undefined1 **)(iVar4 + 0x28);
      uStack_4 = 2;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &DAT_00a2f7ec;
      }
      FUN_00402e30(&iStack_14,DAT_00b35820,puVar9);
      iVar4 = iStack_14;
      FUN_0057acc0(iStack_14,0,1,0x40a00000);
      if (*(int *)(DAT_00b33398 + 0x24) != 0) {
        iVar5 = FUN_006ade50("ITMPickupOrganic",0x121,1);
        if (iVar5 != 0) {
          FUN_006b7190(0);
          FUN_006b73e0();
          FUN_00401f20(iVar5);
        }
      }
      uStack_4 = 0xffffffff;
      FUN_00401f20(iVar4);
    }
  }
  else {
LAB_004ae46d:
    if (piVar3 == DAT_00b333c4) {
      FUN_0057acc0(DAT_00b35828,0,1,0x40a00000);
      FUN_0057de50(0x1e);
    }
  }
  FUN_0046aa00(1);
LAB_004ae4a4:
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_004ae4c0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b2ce8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a41d1c;
  in_ECX[9] = &PTR_FUN_00a41d08;
  in_ECX[0xc] = &PTR_FUN_00a41ce8;
  in_ECX[0x12] = &PTR_LAB_00a41cd4;
  local_4 = 0;
  thunk_FUN_0046b170(uVar1);
  local_4 = 0xffffffff;
  FUN_004b3ff0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004ae540(void)

{
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046c730();
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  FUN_0046ef80();
  FUN_0046ae40(0x4d414e4d,in_ECX + 0x58,4);
  FUN_0046b9f0();
  return;
}



uint FUN_004ae590(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0x58) >> 0x1e & 0xffffff01;
}



bool FUN_004ae5a0(void)

{
  int in_ECX;
  
  return (*(uint *)(in_ECX + 0x58) & 0x80000000) != 0;
}



undefined1 FUN_004ae5b0(uint param_1)

{
  undefined1 uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if ((param_1 < 0x20) && ((*(uint *)(in_ECX + 0x58) & 1 << ((byte)param_1 & 0x1f)) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}



bool FUN_004ae5d0(uint param_1)

{
  return param_1 < 10;
}



bool FUN_004ae5e0(int param_1)

{
  return param_1 - 10U < 10;
}



void FUN_004ae660(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2ce8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b40a0(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a41d1c;
  in_ECX[9] = &PTR_FUN_00a41d08;
  in_ECX[0xc] = &PTR_FUN_00a41ce8;
  in_ECX[0x12] = &PTR_LAB_00a41cd4;
  *(undefined1 *)(in_ECX + 1) = 0x20;
  in_ECX[0x16] = 0;
  FUN_004b3c90();
  FUN_0046ab80(1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004ae6e0(byte param_1)

{
  FUN_004ae4c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004ae700(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  FUN_00451210(in_ECX);
  FUN_0046ab80(0);
  iVar2 = FUN_004510b0();
  do {
    if (iVar2 == 0) {
      return 1;
    }
    if (iVar2 < 0x4c444f4e) {
      if ((iVar2 == 0x4c444f4d) || (iVar2 == 0x42444f4d)) {
LAB_004ae7bb:
        if (in_ECX == (int *)0x0) {
          FUN_0046db00(0,param_1);
        }
        else {
          FUN_0046db00(in_ECX + 0xc,param_1);
        }
      }
      else if (iVar2 == 0x44494445) {
        FUN_00450c20(&stack0xffffffec,0x200);
        (**(code **)(*in_ECX + 0xd8))(&stack0xffffffec);
      }
      else if (iVar2 == 0x49524353) {
        local_c = 0;
        FUN_004510e0(&local_c);
        in_ECX[0x13] = local_c;
        FUN_0046f020(in_ECX);
      }
    }
    else if (iVar2 == 0x4c4c5546) {
      if (in_ECX == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = in_ECX + 9;
      }
      FUN_0046c7a0(piVar3,param_1);
    }
    else if (iVar2 == 0x4d414e4d) {
      FUN_004510e0(in_ECX + 0x16);
    }
    else if (iVar2 == 0x54444f4d) goto LAB_004ae7bb;
    cVar1 = FUN_0044fea0();
    if (cVar1 == '\0') {
      return 1;
    }
    iVar2 = FUN_004510b0();
  } while( true );
}



void FUN_004ae830(void)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  char *pcVar3;
  
  if (((uint)in_ECX[2] >> 0xe & 1) == 0) {
    if (in_ECX[0x16] == 0) {
      uVar1 = (**(code **)(*in_ECX + 0x114))(0);
      iVar2 = FUN_006fb0a0(uVar1);
      if (iVar2 == 0) {
        uVar1 = (**(code **)(in_ECX[0xc] + 0x14))();
        pcVar3 = "No FurnitureMarkers found in \'%s\'.";
      }
      else {
        uVar1 = (**(code **)(*in_ECX + 0xd4))();
        pcVar3 = "You have not selected any FurnitureMarkers for \'%s\'.";
      }
      FUN_004a7a60(pcVar3,uVar1);
      (**(code **)(*in_ECX + 0xf0))(0);
      return;
    }
    if ((in_ECX[0x16] & 0xc0000000U) == 0) {
      uVar1 = (**(code **)(*in_ECX + 0xd4))();
      FUN_004a7a60("Furniture \'%s\' is not marked for sitting or sleeping.",uVar1);
    }
  }
  return;
}



undefined4 FUN_004ae8c0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_10 [12];
  undefined2 uStack_4;
  byte bStack_2;
  
  piVar1 = param_2;
  piVar3 = (int *)FUN_009832e6(param_2,0,&PTR_PTR_00b03054,&PTR_PTR_00b080a4,0);
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x18c))();
    if (iVar4 != 0) {
      FUN_0066c600();
      piVar3[0x187] = 0;
      (**(code **)(*piVar3 + 800))();
      return 1;
    }
    uStack_4 = 0;
    puVar9 = &param_2;
    puVar8 = auStack_10;
    uVar7 = 1;
    uVar6 = 1;
    bStack_2 = 0xff;
    param_2 = (int *)iVar4;
    uVar5 = (**(code **)(*piVar1 + 0x174))(1,1,puVar8,puVar9);
    cVar2 = FUN_004dbae0(uVar5,uVar6,uVar7,puVar8,puVar9);
    if (cVar2 != '\0') {
      if (9 < bStack_2) {
        iVar4 = FUN_004db6b0();
        if ((iVar4 != 0) && (cVar2 = FUN_004de770(piVar3,1), cVar2 == '\0')) {
          if (piVar3 != DAT_00b333c4) {
            return 1;
          }
          FUN_00579c10(DAT_00b38ab0,0,1,DAT_00b38cf0,0);
          return 1;
        }
        FUN_0066c600();
        piVar3[0x187] = 0;
        FUN_00660760(param_1);
        return 1;
      }
      cVar2 = FUN_0065da50();
      if ((cVar2 != '\0') && ((char)DAT_00b333c4[0x184] == '\0')) {
        FUN_00579c10(DAT_00b38b30,&LAB_00671600,1,DAT_00b38cf8,DAT_00b38d00,0);
        return 1;
      }
      cVar2 = (**(code **)(*DAT_00b333c4 + 0x354))();
      if (cVar2 != '\0') {
        FUN_00579c10(DAT_00b38aa0,0,1,DAT_00b38cf0,0);
        return 1;
      }
      cVar2 = FUN_006605a0(0);
      if (cVar2 != '\0') {
        FUN_00579c10(DAT_00b38ab8,0,1,DAT_00b38cf0,0);
        return 1;
      }
      uVar5 = FUN_004d8b90();
      cVar2 = FUN_006773b0(uVar5);
      if (cVar2 != '\0') {
        FUN_00579c10(DAT_00b38ac0,0,1,DAT_00b38cf0,0);
        return 1;
      }
      iVar4 = FUN_004db6b0();
      if ((iVar4 != 0) && (cVar2 = FUN_004de770(piVar3,1), cVar2 == '\0')) {
        if (piVar3 != DAT_00b333c4) {
          return 1;
        }
        FUN_00579c10(DAT_00b38aa8,0,1,DAT_00b38cf0,0);
        return 1;
      }
      FUN_00676ee0();
      FUN_0057b420(1);
      return 1;
    }
  }
  return 0;
}



void FUN_004aeb40(undefined4 *param_1,int param_2,float param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar2 = DAT_00b3f9ac;
  *param_1 = DAT_00b3f9a8;
  uVar3 = DAT_00b3f9b0;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  if (param_2 - 1U < 0x14) {
    param_2 = param_2 * 0x10;
    puVar4 = *(undefined4 **)(s___AVTESMagicTargetForm___00b07f2c + param_2 + 0xc);
    if (puVar4 == (undefined4 *)0x0) {
      DAT_00b35464 = 0;
      puVar4 = &DAT_00b35464;
    }
    puVar5 = *(undefined4 **)(s___AVTESMagicTargetForm___00b07f2c + param_2 + 0x10);
    *param_1 = *puVar4;
    if (puVar5 == (undefined4 *)0x0) {
      DAT_00b35464 = 0;
      puVar5 = &DAT_00b35464;
    }
    pfVar1 = *(float **)(s___AVTESMagicTargetForm___00b07f2c + param_2 + 0x14);
    param_1[1] = *puVar5;
    if (pfVar1 != (float *)0x0) {
      param_1[2] = (param_3 - 1.0) * *pfVar1;
      return;
    }
    DAT_00b35464 = 0;
    param_1[2] = (param_3 - 1.0) * 0.0;
  }
  return;
}



float10 FUN_004aebe0(int param_1)

{
  if (0x13 < param_1 - 1U) {
    return (float10)0.0;
  }
  if (*(float **)(s___AVTESMagicTargetForm___00b07f2c + param_1 * 0x10 + 0x18) != (float *)0x0) {
    return (float10)**(float **)(s___AVTESMagicTargetForm___00b07f2c + param_1 * 0x10 + 0x18);
  }
  DAT_00b35464 = 0;
  return (float10)0.0;
}



void FUN_004aec30(void)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 8) >> 3 & 1) == 0) {
    FUN_004ae830();
    FUN_0046ab80(1);
  }
  return;
}



void FUN_004aec50(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b08088,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
    *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(iVar1 + 0x58);
    FUN_004ae830();
  }
  return;
}



void FUN_004aee00(void)

{
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  FUN_0046bbb0(in_ECX + 0x3c,0x20);
  FUN_0046b9f0();
  return;
}



void FUN_004af040(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2d23;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b2ff0(uVar1);
  local_4 = 0;
  FUN_0046d7e0();
  in_ECX[0x12] = 0x42000000;
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[0x13] = 0x3e4ccccd;
  *in_ECX = &PTR_FUN_00a4280c;
  in_ECX[9] = &PTR_FUN_00a427ec;
  in_ECX[0x14] = 0x3f000000;
  *(undefined1 *)(in_ECX + 1) = 0x1d;
  *(undefined1 *)(in_ECX + 0xf) = 0x1e;
  in_ECX[0x15] = 0x41200000;
  *(undefined1 *)((int)in_ECX + 0x3d) = 0;
  *(undefined1 *)((int)in_ECX + 0x3e) = 0x5a;
  *(undefined2 *)(in_ECX + 0x10) = 0;
  in_ECX[0x11] = 0;
  *(undefined1 *)(in_ECX + 0x16) = 0;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_004af170(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x44);
}



void FUN_004af220(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b2d6f;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a4280c;
  in_ECX[9] = &PTR_FUN_00a427ec;
  local_4 = 1;
  thunk_FUN_0046b170(uVar1);
  local_4 = local_4 & 0xffffff00;
  FUN_0046d850();
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004af2a0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  
  cVar1 = FUN_004511c0();
  if (cVar1 == '\x1d') {
    in_ECX[0xf] = 0;
    in_ECX[0x10] = 0;
    in_ECX[0x11] = 0;
    in_ECX[0x12] = 0;
    in_ECX[0x13] = 0;
    in_ECX[0x14] = 0;
    in_ECX[0x15] = 0;
    in_ECX[0x16] = 0;
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 < 0x44494446) {
        if (iVar3 == 0x44494445) {
          FUN_00450c20(&stack0xffffffec,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xffffffec);
        }
        else if (iVar3 == 0x41544144) {
          FUN_0046bda0(param_1,in_ECX + 0xf,0x20);
        }
        else if (iVar3 == 0x42444f4d) goto LAB_004af369;
      }
      else if ((iVar3 == 0x4c444f4d) || (iVar3 == 0x54444f4d)) {
LAB_004af369:
        if (in_ECX == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = in_ECX + 9;
        }
        FUN_0046db00(piVar4,param_1);
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



undefined1 * FUN_004af3f0(void)

{
  undefined1 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined1 **)(in_ECX + 0x28);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_00a2f7ec;
  }
  return puVar1;
}



void FUN_004af400(byte param_1)

{
  FUN_004af220();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004af420(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b2dc8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a42a4c;
  in_ECX[9] = &PTR_FUN_00a42a34;
  in_ECX[0xc] = &PTR_FUN_00a42a14;
  in_ECX[0x12] = &PTR_FUN_00a429f8;
  in_ECX[0x15] = &PTR_LAB_00a429e4;
  in_ECX[0x18] = &PTR_LAB_00a429c4;
  in_ECX[0x1a] = &PTR_LAB_00a429b0;
  local_4 = 0;
  thunk_FUN_0046b170(uVar1);
  local_4 = 0xffffffff;
  FUN_004b9770();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004af4e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2dc8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b9860(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a42a4c;
  in_ECX[9] = &PTR_FUN_00a42a34;
  in_ECX[0xc] = &PTR_FUN_00a42a14;
  in_ECX[0x12] = &PTR_FUN_00a429f8;
  in_ECX[0x15] = &PTR_LAB_00a429e4;
  in_ECX[0x18] = &PTR_LAB_00a429c4;
  in_ECX[0x1a] = &PTR_LAB_00a429b0;
  *(undefined1 *)(in_ECX + 1) = 0x27;
  FUN_0046ab80(1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004af570(byte param_1)

{
  FUN_004af420();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004af590(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b2e7f;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a42b9c;
  in_ECX[9] = &PTR_LAB_00a42b84;
  in_ECX[0xd] = &PTR_LAB_00a42b70;
  local_4 = 1;
  thunk_FUN_0046b170(uVar1);
  local_4 = local_4 & 0xffffff00;
  FUN_0046cac0();
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004af620(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2e03;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b31d0(uVar1);
  local_4 = 0;
  FUN_0046cb80();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0046ef60();
  *in_ECX = &PTR_FUN_00a42b9c;
  in_ECX[9] = &PTR_LAB_00a42b84;
  in_ECX[0xd] = &PTR_LAB_00a42b70;
  *(undefined1 *)(in_ECX + 1) = 0x25;
  in_ECX[0x10] = 0;
  thunk_FUN_0046b090();
  FUN_0046ab80(1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004af6c0(byte param_1)

{
  FUN_004af590();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004af730(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == '%') {
    FUN_00451210(in_ECX);
    do {
      iVar3 = FUN_004510b0();
      if (iVar3 < 0x49524354) {
        if (iVar3 == 0x49524353) {
          local_c = 0;
          FUN_004510e0(&local_c);
          in_ECX[0xe] = local_c;
          FUN_0046f020(in_ECX);
        }
        else if (iVar3 == 0x44494445) {
          FUN_00450c20(&stack0xffffffdc,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xffffffdc);
        }
        else if (iVar3 == 0x444c564c) {
          local_10 = local_10 & 0xffffff00;
          FUN_00450c20(&local_10,0);
          FUN_0046cb10((local_10 & 0x80) != 0);
          local_10 = local_10 & 0xffffff7f;
          FUN_0046caf0(local_10);
        }
        else if (iVar3 == 0x464c564c) {
          FUN_00450c20((int)in_ECX + 0x31,0);
        }
      }
      else if (iVar3 == 0x4d414e54) {
        local_c = 0;
        FUN_004510e0(&local_c);
        in_ECX[0x10] = local_c;
      }
      else if (iVar3 == 0x4f4c564c) {
        local_1c = 0;
        local_18 = 0;
        local_14 = 1;
        FUN_00450c20(&local_1c,0xc);
        FUN_0046cbf0(local_1c,local_14,local_18);
      }
      cVar1 = FUN_0044fea0();
    } while (cVar1 != '\0');
    FUN_0046ab80(0);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_004af8c0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b07884,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
    *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(iVar1 + 0x40);
  }
  return;
}



void FUN_004afa80(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  int in_ECX;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int **ppiVar14;
  int local_1c;
  int local_14;
  int local_10;
  int *local_8;
  undefined4 *local_4;
  
  iVar2 = param_1;
  piVar13 = (int *)0x0;
  piVar11 = (int *)(param_1 + 8);
  local_8 = (int *)0x0;
  local_4 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  param_1 = 0;
  local_1c = 0;
  piVar12 = piVar11;
  if (piVar11 == (int *)0x0) {
    return;
  }
  do {
    piVar7 = piVar13;
    if ((piVar12[1] == 0) && (*piVar12 == 0)) break;
    piVar1 = (int *)*piVar12;
    iVar4 = FUN_009832e6(piVar1[1],0,&PTR_PTR_00b03248,&PTR_PTR_00b03de4,0);
    if (iVar4 != 0) {
      local_14 = local_14 + 1;
      local_10 = local_10 + *piVar1;
      iVar5 = FUN_009832e6(iVar4,0,&PTR_PTR_00b03de4,&PTR_PTR_00b02fb4,0);
      if (iVar5 == 0) {
        uVar6 = (**(code **)(*(int *)(iVar4 + 0xac) + 0x14))();
        iVar4 = ModelLoader_IsModelLoaded(uVar6);
        if (iVar4 != 0) {
          param_1 = param_1 + 1;
          local_1c = local_1c + *piVar1;
          piVar7 = (int *)FUN_00401f00(8);
          if (piVar7 == (int *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            *piVar7 = 1;
            piVar7[1] = 0;
          }
          *piVar7 = *piVar1;
          piVar7[1] = piVar1[1];
          if (piVar13 != (int *)0x0) {
            puVar8 = (undefined4 *)FUN_00401f00(8);
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              *puVar8 = piVar13;
              puVar8[1] = 0;
            }
            puVar8[1] = local_4;
            local_4 = puVar8;
          }
        }
      }
    }
    piVar1 = piVar12 + 1;
    piVar12 = (int *)*piVar1;
    piVar13 = piVar7;
  } while ((int *)*piVar1 != (int *)0x0);
  local_8 = piVar7;
  if (local_14 == 0) goto joined_r0x004afd4d;
  if (param_1 == 0) {
    piVar12 = (int *)(in_ECX + 0x28);
    if (piVar12 == (int *)0x0) goto joined_r0x004afd4d;
    do {
      if ((piVar12[1] == 0) && (*piVar12 == 0)) break;
      iVar4 = *piVar12;
      uVar9 = FUN_009832e6(*(undefined4 *)(iVar4 + 4),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03de4,0);
      if ((uVar9 != 0) &&
         (iVar5 = FUN_009832e6(uVar9,0,&PTR_PTR_00b03de4,&PTR_PTR_00b02fb4,0), iVar5 == 0)) {
        uVar6 = (**(code **)(*(int *)(uVar9 + 0xac) + 0x14))();
        iVar5 = ModelLoader_IsModelLoaded(uVar6);
        if (iVar5 != 0) {
          param_1 = param_1 + 1;
          local_1c = local_1c + (uint)*(ushort *)(iVar4 + 8);
          puVar10 = (uint *)FUN_00401f00(8);
          if (puVar10 == (uint *)0x0) {
            puVar10 = (uint *)0x0;
          }
          else {
            *puVar10 = 1;
            puVar10[1] = 0;
          }
          *puVar10 = (uint)*(ushort *)(iVar4 + 8);
          puVar10[1] = uVar9;
          FUN_00446cb0(puVar10);
        }
      }
      piVar12 = (int *)piVar12[1];
    } while (piVar12 != (int *)0x0);
    if (param_1 == 0) goto joined_r0x004afd4d;
  }
  if (piVar11 != (int *)0x0) {
    while (cVar3 = FUN_0046cb60(), cVar3 == '\0') {
      iVar4 = *piVar11;
      if (iVar4 != 0) {
        FUN_0060d0a0();
        FUN_00401f20(iVar4);
      }
      piVar12 = *(int **)(iVar2 + 0xc);
      if (piVar12 == (int *)0x0) {
        *piVar11 = 0;
      }
      else {
        *(int *)(iVar2 + 0xc) = piVar12[1];
        *piVar11 = *piVar12;
        FUN_00401f20(piVar12);
      }
    }
  }
  ppiVar14 = &local_8;
  do {
    if ((ppiVar14[1] == (int *)0x0) && (*ppiVar14 == (int *)0x0)) break;
    piVar12 = *ppiVar14;
    *piVar12 = *piVar12 + (local_1c - local_10) / param_1;
    if (*piVar11 != 0) {
      piVar13 = (int *)FUN_00401f00(8);
      if (piVar13 == (int *)0x0) {
        piVar13 = (int *)0x0;
      }
      else {
        *piVar13 = *piVar11;
        piVar13[1] = 0;
      }
      piVar13[1] = *(int *)(iVar2 + 0xc);
      *(int **)(iVar2 + 0xc) = piVar13;
    }
    *piVar11 = (int)piVar12;
    ppiVar14 = (int **)ppiVar14[1];
  } while (ppiVar14 != (int **)0x0);
joined_r0x004afd4d:
  while (local_4 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)local_4[1];
    FUN_00401f20(local_4);
    local_4 = puVar8;
  }
  return;
}



undefined4 FUN_004afd80(int *param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 local_28;
  uint local_24;
  undefined1 auStack_1c [16];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b2e33;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_24 = FUN_00401f00(0xdc,uVar3);
  local_4 = 0;
  if (local_24 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_0070b780(0);
  }
  local_4 = 0xffffffff;
  uVar4 = (**(code **)(*in_ECX + 0xd4))();
  FUN_006ff420(uVar4);
  cVar1 = FUN_004d7a50();
  if (((cVar1 == '\0') && (((uint)param_1[2] >> 0xd & 1) == 0)) &&
     (cVar1 = FUN_0045a500(), cVar1 == '\0')) {
    local_24 = local_24 & 0xffffff00;
    FUN_00469690();
    local_4 = 1;
    iVar5 = FUN_00420760();
    uVar3 = FUN_005e1fd0();
    iVar5 = (uVar3 & 0xffff) + iVar5;
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    FUN_0046cde0(iVar5,1,auStack_1c);
    iVar5 = FUN_00469c70(0);
    sVar2 = FUN_00469ca0(iVar5);
    while (iVar5 != 0) {
      if (sVar2 == 0) break;
      iVar5 = FUN_009832e6(iVar5,0,&PTR_PTR_00b03268,&PTR_PTR_00b03de4,0);
      if (iVar5 != 0) {
        for (; sVar2 != 0; sVar2 = sVar2 + -1) {
          uVar10 = 0;
          uVar4 = FUN_004d6670(0);
          uVar6 = FUN_006ecc80(uVar4);
          piVar8 = param_1 + 8;
          uVar7 = (**(code **)(*param_1 + 0x174))(piVar8,uVar6);
          piVar8 = (int *)FUN_0044a7d0(iVar5,uVar7,piVar8,uVar6,uVar4,uVar10);
          if (piVar8 != (int *)0x0) {
            fVar9 = (float10)(**(code **)(*param_1 + 0xec))();
            FUN_004db520((float)fVar9);
            (**(code **)(*piVar8 + 300))(in_ECX[0x10]);
            FUN_004d7a90(1);
            uVar3 = local_24 >> 8;
            local_24 = CONCAT31((int3)uVar3,1);
          }
        }
      }
      FUN_004696f0(0);
      iVar5 = FUN_00469c70(0);
      sVar2 = FUN_00469ca0(iVar5);
    }
    local_4 = 0xffffffff;
    FUN_0046a010();
    FUN_004d7a90(local_24);
  }
  *unaff_FS_OFFSET = local_c;
  return local_28;
}



void FUN_004affc0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b2e7f;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a42dc4;
  in_ECX[9] = &PTR_LAB_00a42da8;
  local_4 = 1;
  thunk_FUN_0046b170(uVar1);
  local_4 = local_4 & 0xffffff00;
  FUN_0046cac0();
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}


