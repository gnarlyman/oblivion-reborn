
void FUN_00780140(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x54))();
  (**(code **)(*in_ECX + 0x6c))();
  (**(code **)(*in_ECX + 0xb8))();
  (**(code **)(*in_ECX + 0xdc))();
  FUN_00780a20();
  (**(code **)(*in_ECX + 100))(0x16,2,0);
  (**(code **)(*in_ECX + 100))(0xa1,0,0);
  (**(code **)(*in_ECX + 100))(8,3,0);
  (**(code **)(*in_ECX + 100))(9,2,0);
  (**(code **)(*in_ECX + 100))(0x1b,0,0);
  (**(code **)(*in_ECX + 100))(0x13,in_ECX[0xe],0);
  (**(code **)(*in_ECX + 100))(0x14,in_ECX[0xf],0);
  (**(code **)(*in_ECX + 100))(0xf,0,0);
  (**(code **)(*in_ECX + 100))(0x19,8,0);
  (**(code **)(*in_ECX + 100))(0x18,0,0);
  (**(code **)(*in_ECX + 100))(0x17,8,0);
  (**(code **)(*in_ECX + 100))(0xe,0,0);
  (**(code **)(*in_ECX + 100))(0x1a,0,0);
  (**(code **)(*in_ECX + 100))(0x1d,0,0);
  (**(code **)(*in_ECX + 100))(0x1c,0,0);
  (**(code **)(*in_ECX + 100))(0x23,-((*(byte *)(in_ECX + 2) & 1) != 0) & 3,0);
  (**(code **)(*in_ECX + 100))(0x30,0,0);
  (**(code **)(*in_ECX + 100))(0x22,0,0);
  (**(code **)(*in_ECX + 100))(0x8f,1,0);
  (**(code **)(*in_ECX + 100))(7,1,0);
  (**(code **)(*in_ECX + 100))(0x8d,1,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007802d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  int iVar3;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a8b2ac;
  in_ECX[0x1d] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  FUN_007616d0();
  puVar1 = in_ECX + 0x48;
  iVar3 = 0xff;
  do {
    *puVar1 = 0x7fffffff;
    puVar1[1] = 0x7fffffff;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  puVar1 = in_ECX + 0x248;
  iVar3 = 0x7f;
  do {
    *puVar1 = 0x7fffffff;
    puVar1[1] = 0x7fffffff;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  puVar1 = in_ECX + 0x348;
  iVar3 = 0x4f;
  do {
    *puVar1 = 0x7fffffff;
    puVar1[1] = 0x7fffffff;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  in_ECX[0x3fc] = 0;
  in_ECX[0x3fe] = 0;
  in_ECX[0x3ff] = 0;
  FUN_0077f840(param_1);
  in_ECX[3] = 0;
  in_ECX[4] = 1;
  in_ECX[5] = 1;
  in_ECX[6] = 2;
  in_ECX[7] = 3;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  param_1 = (undefined4 *)FUN_00401f00(0x1c);
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *param_1 = &PTR_FUN_00a3d604;
    *(undefined2 *)(param_1 + 6) = 0xec;
    *(undefined1 *)((int)param_1 + 0x1a) = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x1d];
  if (puVar1 != param_1) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(puVar1 + 1), LVar2 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x1d] = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  in_ECX[0x1e] = 0;
  in_ECX[0xb] = 4;
  in_ECX[0x1f] = 0;
  in_ECX[0x16] = 4;
  in_ECX[0x20] = 0;
  in_ECX[0x2a] = 4;
  in_ECX[0x21] = 0;
  in_ECX[0x32] = 4;
  in_ECX[0x22] = 0x3f800000;
  in_ECX[0xe] = 5;
  in_ECX[0x17] = 5;
  in_ECX[0x2b] = 5;
  in_ECX[0x33] = 5;
  in_ECX[8] = 2;
  in_ECX[9] = 1;
  in_ECX[10] = 3;
  in_ECX[0xc] = 9;
  in_ECX[0xd] = 10;
  in_ECX[0xf] = 6;
  in_ECX[0x10] = 7;
  in_ECX[0x11] = 8;
  in_ECX[0x12] = 0xb;
  in_ECX[0x13] = 8;
  in_ECX[0x14] = 2;
  in_ECX[0x15] = 3;
  in_ECX[0x18] = 6;
  in_ECX[0x19] = 7;
  in_ECX[0x1a] = 1;
  in_ECX[0x2e] = 8;
  in_ECX[0x28] = 2;
  in_ECX[0x29] = 3;
  in_ECX[0x2c] = 6;
  in_ECX[0x2d] = 7;
  in_ECX[0x27] = 1;
  in_ECX[0x2f] = 1;
  in_ECX[0x30] = 2;
  in_ECX[0x31] = 3;
  in_ECX[0x34] = 6;
  in_ECX[0x35] = 2;
  in_ECX[0x37] = 2;
  in_ECX[0x39] = 3;
  in_ECX[0x3b] = 1;
  in_ECX[0x36] = 3;
  in_ECX[0x38] = 3;
  in_ECX[0x3a] = 2;
  in_ECX[0x3c] = 1;
  in_ECX[0x3d] = 0;
  in_ECX[0x23] = DAT_00b3fa90;
  in_ECX[0x24] = DAT_00b3fa94;
  in_ECX[0x25] = DAT_00b3fa98;
  in_ECX[2] = 0;
  in_ECX[0x40] = 8;
  in_ECX[0x41] = 2;
  in_ECX[0x42] = 3;
  in_ECX[0x43] = 4;
  in_ECX[0x44] = 5;
  in_ECX[0x26] = (((int)ROUND((float)in_ECX[0x23] * 255.0) & 0xffU | 0xffffff00) << 8 |
                 (int)ROUND((float)in_ECX[0x24] * 255.0) & 0xffU) << 8 |
                 (int)ROUND((float)in_ECX[0x25] * 255.0) & 0xffU;
  in_ECX[0x45] = 6;
  in_ECX[0x46] = 7;
  in_ECX[0x47] = 1;
  *(undefined1 *)(in_ECX + 0x3fd) = 0;
  *(undefined1 *)((int)in_ECX + 0xff5) = 0;
  _memset(&DAT_00b427e0,0xffff,0x42);
  _DAT_00b427ea = 4;
  _DAT_00b4282a = 4;
  _DAT_00b427e6 = 2;
  DAT_00b42826 = 2;
  _DAT_00b427b8 = 0x2ffff;
  DAT_00b427d0 = 2;
  _DAT_00b427c0 = 0xffffffff;
  _DAT_00b427c4 = 0xffffffff;
  _DAT_00b427c8 = 0xffffffff;
  DAT_00b427e4 = 1;
  DAT_00b42824 = 1;
  _DAT_00b427b4 = 0xffff0001;
  DAT_00b427cc = 1;
  _DAT_00b427e8 = 3;
  _DAT_00b42828 = 3;
  DAT_00b427e2 = 0;
  _DAT_00b427ec = 5;
  _DAT_00b427ee = 6;
  _DAT_00b42810 = 7;
  _DAT_00b4282c = 5;
  _DAT_00b4282e = 6;
  _DAT_00b42830 = 7;
  _DAT_00b42832 = 0x18;
  _DAT_00b427b0 = 0xffff;
  _DAT_00b427bc = 0x40003;
  _DAT_00b427d4 = 5;
  _DAT_00b427d8 = 6;
  _DAT_00b427dc = 7;
  return;
}



void FUN_00780780(void)

{
  undefined4 *puVar1;
  int *piVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8b2ac;
  puVar1 = (undefined4 *)in_ECX[0x1d];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x1d] = 0;
  }
  piVar2 = (int *)in_ECX[0x3fe];
  in_ECX[0x3ff] = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  in_ECX[0x3fe] = 0;
  puVar1 = (undefined4 *)in_ECX[0x3fc];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_00780990();
  puVar1 = (undefined4 *)in_ECX[0x1d];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  return;
}



void FUN_007808a0(byte param_1)

{
  FUN_00780780();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_007808c0(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  if (in_ECX[0x11] != *(int *)(param_1 + 0x54)) {
    in_ECX[0x11] = *(int *)(param_1 + 0x54);
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    in_ECX[0xc] = *(undefined4 *)(param_1 + 0x40);
    in_ECX[0xd] = *(undefined4 *)(param_1 + 0x44);
    in_ECX[0xe] = *(undefined4 *)(param_1 + 0x48);
    in_ECX[0xf] = uVar1;
    in_ECX[4] = *(undefined4 *)(param_1 + 0x1c);
    in_ECX[5] = *(undefined4 *)(param_1 + 0x20);
    in_ECX[6] = *(undefined4 *)(param_1 + 0x24);
    in_ECX[7] = uVar1;
    *in_ECX = *(undefined4 *)(param_1 + 0x28);
    in_ECX[1] = *(undefined4 *)(param_1 + 0x2c);
    in_ECX[2] = *(undefined4 *)(param_1 + 0x30);
    in_ECX[3] = uVar1;
    in_ECX[8] = *(undefined4 *)(param_1 + 0x34);
    in_ECX[9] = *(undefined4 *)(param_1 + 0x38);
    in_ECX[10] = *(undefined4 *)(param_1 + 0x3c);
    in_ECX[0xb] = uVar1;
    in_ECX[0x10] = *(undefined4 *)(param_1 + 0x4c);
    return 1;
  }
  return 0;
}



void FUN_00780940(int *param_1)

{
  undefined4 *in_ECX;
  
  if (*(char *)(in_ECX + 1) != '\0') {
    *(undefined1 *)(in_ECX + 1) = 0;
    (**(code **)(*param_1 + 0xc4))(param_1,*in_ECX);
  }
  return;
}



void FUN_00780960(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x58), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (iVar1 == *in_ECX) {
      *in_ECX = 0;
    }
    FUN_00401f20(iVar1);
  }
  return;
}



void FUN_00780990(void)

{
  int iVar1;
  int *in_ECX;
  
  if ((DAT_00b3faa4 != 0) && (iVar1 = *(int *)(DAT_00b3faa4 + 0x58), iVar1 != 0)) {
    *(undefined4 *)(DAT_00b3faa4 + 0x58) = 0;
    if (iVar1 == *in_ECX) {
      *in_ECX = 0;
    }
    FUN_00401f20(iVar1);
  }
  return;
}



void FUN_007809c0(int param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  int extraout_ECX_00;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar2 = FUN_00401f00(0x48);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x44) = 0;
      FUN_007808c0(param_1);
      uVar3 = extraout_ECX;
    }
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined1 *)(in_ECX + 1) = 1;
  }
  cVar1 = FUN_007808c0(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)(in_ECX + 1) = 1;
  }
  if (extraout_ECX_00 != *in_ECX) {
    *(undefined1 *)(in_ECX + 1) = 1;
    *in_ECX = extraout_ECX_00;
  }
  return;
}



void FUN_00780a20(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  FUN_007809c0(DAT_00b3faa4);
  *(undefined1 *)(in_ECX + 1) = 1;
  return;
}



void FUN_00780a40(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  FUN_00782a70(param_1);
  *in_ECX = &PTR_FUN_00a8b3bc;
  in_ECX[10] = *(undefined4 *)(param_2 + 200);
  cVar1 = *(char *)(param_2 + 0xc5);
  if (cVar1 == '\x01') {
    in_ECX[0x1e] = 0;
    in_ECX[0x14] = 0;
  }
  else {
    if (cVar1 == '\x02') {
      in_ECX[0x1f] = -(uint)(*(int *)(param_2 + 0xfc) != 0) & 0x10;
    }
    else {
      if (cVar1 != '\x03') goto LAB_00780a9e;
      in_ECX[0x1e] = 0x10;
    }
    in_ECX[0x14] = 0x10;
  }
LAB_00780a9e:
  if ((in_ECX[10] == 0) && (*(char *)(param_1 + 0x5c8) != '\0')) {
    *(undefined1 *)(in_ECX + 0x22) = 1;
    in_ECX[10] = 0x2000;
  }
  else {
    *(undefined1 *)(in_ECX + 0x22) = 0;
  }
  cVar1 = *(char *)(param_2 + 0xcd);
  if (cVar1 == '\x01') {
    in_ECX[0xb] = 8;
    in_ECX[0x1f] = 0;
    in_ECX[0x15] = 0;
    return;
  }
  if (cVar1 == '\x02') {
    in_ECX[0xb] = 0x20;
    iVar2 = *(int *)(param_2 + 0x10c);
    in_ECX[0x15] = 0x10;
    in_ECX[0x1f] = -(uint)(iVar2 != 0) & 0x10;
    return;
  }
  if (cVar1 == '\x03') {
    in_ECX[0xb] = 0xe0;
    in_ECX[0x1f] = 0x10;
    in_ECX[0x15] = 0x10;
  }
  return;
}



undefined4 FUN_00780b30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00401f00(0x8c);
  if (iVar1 != 0) {
    uVar2 = FUN_00780a40(param_1,param_2);
    return uVar2;
  }
  return 0;
}



void FUN_00780b60(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8b3bc;
  FUN_00782b20();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00780b90(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_00782c60(param_1);
  *in_ECX = &PTR_FUN_00a8b3cc;
  in_ECX[10] = 0;
  return;
}



void FUN_00780bb0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  
  if (param_1 != (char *)0x0) {
    iVar5 = 1;
    bVar7 = true;
    pcVar2 = param_1;
    pcVar6 = "";
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar7 = *pcVar2 == *pcVar6;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      pcVar6 = *(char **)(in_ECX + 8);
      pcVar2 = pcVar2 + (1 - (int)(param_1 + 1));
      if (pcVar6 != (char *)0x0) {
        pcVar3 = pcVar6;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        if (pcVar3 + -(int)(pcVar6 + 1) < pcVar2) {
          FUN_00401f20(pcVar6);
          *(undefined4 *)(in_ECX + 8) = 0;
        }
      }
      if (*(int *)(in_ECX + 8) == 0) {
        uVar4 = FUN_00401f00(pcVar2);
        *(undefined4 *)(in_ECX + 8) = uVar4;
      }
      _strcpy_s(*(char **)(in_ECX + 8),(rsize_t)pcVar2,param_1);
      return;
    }
  }
  FUN_00401f20(*(undefined4 *)(in_ECX + 8));
  *(undefined4 *)(in_ECX + 8) = 0;
  return;
}



void FUN_00780c60(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  
  if (param_1 != (char *)0x0) {
    iVar5 = 1;
    bVar7 = true;
    pcVar2 = param_1;
    pcVar6 = "";
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar7 = *pcVar2 == *pcVar6;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      pcVar6 = *(char **)(in_ECX + 0xc);
      pcVar2 = pcVar2 + (1 - (int)(param_1 + 1));
      if (pcVar6 != (char *)0x0) {
        pcVar3 = pcVar6;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        if (pcVar3 + -(int)(pcVar6 + 1) < pcVar2) {
          FUN_00401f20(pcVar6);
          *(undefined4 *)(in_ECX + 0xc) = 0;
        }
      }
      if (*(int *)(in_ECX + 0xc) == 0) {
        uVar4 = FUN_00401f00(pcVar2);
        *(undefined4 *)(in_ECX + 0xc) = uVar4;
      }
      _strcpy_s(*(char **)(in_ECX + 0xc),(rsize_t)pcVar2,param_1);
      return;
    }
  }
  FUN_00401f20(*(undefined4 *)(in_ECX + 0xc));
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}



undefined4 FUN_00780d10(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x10);
}



void FUN_00780d20(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = param_1;
  *(undefined4 *)(in_ECX + 0x14) = param_2;
  return;
}



void FUN_00780d40(byte param_1)

{
  FUN_00782e40();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00780d70(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x28) = param_1;
  return;
}



void FUN_00780d80(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_00782c60(param_1);
  *(undefined1 *)(in_ECX + 10) = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  *in_ECX = &PTR_FUN_00a8b41c;
  return;
}



void FUN_00780db0(byte param_1)

{
  FUN_00783090();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00780dd0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2c) = param_1;
  return;
}



undefined4 FUN_00780de0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x30);
}



void FUN_00780df0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x30) = param_1;
  return;
}



void FUN_00780e00(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x34) = param_1;
  return;
}



void FUN_00780e20(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x28) = param_1;
  return;
}



void FUN_00780e30(byte param_1)

{
  FUN_00783230();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00780e60(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *_Dst;
  int in_ECX;
  
  if (*(char **)(in_ECX + 0x2c) != param_1) {
    FUN_00401f20(*(char **)(in_ECX + 0x2c));
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      _Dst = (char *)FUN_00401f00(pcVar2 + (1 - (int)(param_1 + 1)));
      _strcpy_s(_Dst,(rsize_t)(pcVar2 + (1 - (int)(param_1 + 1))),param_1);
      *(char **)(in_ECX + 0x2c) = _Dst;
      return;
    }
    *(undefined4 *)(in_ECX + 0x2c) = 0;
  }
  return;
}



void FUN_00780ec0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *_Dst;
  int in_ECX;
  
  if (*(char **)(in_ECX + 0x30) != param_1) {
    FUN_00401f20(*(char **)(in_ECX + 0x30));
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      _Dst = (char *)FUN_00401f00(pcVar2 + (1 - (int)(param_1 + 1)));
      _strcpy_s(_Dst,(rsize_t)(pcVar2 + (1 - (int)(param_1 + 1))),param_1);
      *(char **)(in_ECX + 0x30) = _Dst;
    }
  }
  return;
}



void FUN_00780f20(int *param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x34);
  if (piVar1 != param_1) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(int **)(in_ECX + 0x34) = param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))(param_1);
    }
  }
  return;
}



void FUN_00780f50(byte param_1)

{
  FUN_00783770();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00780f70(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x38);
}



void FUN_00780f80(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *_Dst;
  int in_ECX;
  
  if (*(char **)(in_ECX + 0x38) != param_1) {
    FUN_00401f20(*(char **)(in_ECX + 0x38));
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      _Dst = (char *)FUN_00401f00(pcVar2 + (1 - (int)(param_1 + 1)));
      _strcpy_s(_Dst,(rsize_t)(pcVar2 + (1 - (int)(param_1 + 1))),param_1);
      *(char **)(in_ECX + 0x38) = _Dst;
      return;
    }
    *(undefined4 *)(in_ECX + 0x38) = 0;
  }
  return;
}



void FUN_00780fe0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *_Dst;
  int in_ECX;
  
  if (*(char **)(in_ECX + 0x3c) != param_1) {
    FUN_00401f20(*(char **)(in_ECX + 0x3c));
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      _Dst = (char *)FUN_00401f00(pcVar2 + (1 - (int)(param_1 + 1)));
      _strcpy_s(_Dst,(rsize_t)(pcVar2 + (1 - (int)(param_1 + 1))),param_1);
      *(char **)(in_ECX + 0x3c) = _Dst;
    }
  }
  return;
}



void FUN_00781040(int *param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x40);
  if (piVar1 != param_1) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(int **)(in_ECX + 0x40) = param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))(param_1);
    }
  }
  return;
}



undefined4 FUN_00781100(int *param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_retaddr;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if (iVar1 != 0) {
    iVar2 = FUN_00783c30(iVar1);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x3c))(iVar2);
      iVar1 = D3DXGetShaderConstantTable(iVar1,&stack0x00000000);
      if (-1 < iVar1) {
        (**(code **)(*param_1 + 0x5c))(unaff_retaddr);
      }
      if (unaff_retaddr != (int *)0x0) {
        (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
      }
      return 1;
    }
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00781170(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,size_t *param_5
            ,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  void *_Src;
  int *unaff_EBX;
  undefined4 uVar5;
  int *local_11c;
  int *local_118;
  undefined4 local_114;
  undefined4 local_110;
  int local_10c;
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_11c;
  *param_4 = 0;
  local_114 = param_3;
  local_110 = param_6;
  *param_5 = 0;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    FUN_00738460(1,0,"Invalid shader file name\n");
  }
  else {
    cVar1 = FUN_0077ec60(param_1,local_108,0x104);
    if (cVar1 == '\0') {
      FUN_00738460(1,0,"Failed to find shader program file %s\n",param_1);
    }
    else {
      iVar2 = D3DXCompileShaderFromFileA
                        (local_108,0,0,param_2,local_114,*(uint *)(local_10c + 4) | _DAT_00b428bc,
                         &local_118,&local_11c,local_110);
      if (-1 < iVar2) {
        sVar4 = (**(code **)(*local_118 + 0x10))(local_118);
        *param_5 = sVar4;
        uVar5 = FUN_00401f00(sVar4);
        *param_4 = uVar5;
        sVar4 = *param_5;
        _Src = (void *)(**(code **)(*local_11c + 0xc))(local_11c);
        _memcpy((void *)*param_4,_Src,sVar4);
        (**(code **)(*unaff_EBX + 8))(unaff_EBX);
        if (local_11c != (int *)0x0) {
          (**(code **)(*local_11c + 8))(local_11c);
        }
        return 1;
      }
      uVar5 = 0;
      if (local_11c == (int *)0x0) {
        FUN_00738460(1,0,"Failed to compile shader %s in file %s\nError: NONE REPORTED\n",param_2,
                     param_1);
      }
      else {
        local_118 = (int *)(**(code **)(*local_11c + 0xc))(local_11c);
        if (local_118 != (int *)0x0) {
          uVar3 = (**(code **)(*unaff_EBX + 0x10))(unaff_EBX);
          uVar5 = FUN_00401f00(uVar3);
          FUN_00434900(uVar5,uVar3,local_118);
          FUN_00738460(1,0,"Failed to compile shader %s in file %s\nError: %s\n",param_2,param_1,
                       uVar5);
        }
        (**(code **)(*unaff_EBX + 8))(unaff_EBX);
      }
      FUN_00401f20(uVar5);
      if (local_118 != (int *)0x0) {
        (**(code **)(*local_118 + 8))(local_118);
      }
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00781350(int param_1,int param_2,int *param_3,int *param_4,int *param_5,size_t *param_6,
            undefined4 param_7)

{
  int *piVar1;
  size_t *psVar2;
  int iVar3;
  undefined4 uVar4;
  size_t sVar5;
  void *_Src;
  int in_ECX;
  undefined4 uVar6;
  
  psVar2 = param_6;
  piVar1 = param_5;
  *param_5 = 0;
  *param_6 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar3 = D3DXCompileShader(param_1,param_2,0,0,param_3,param_4,
                              *(uint *)(in_ECX + 4) | _DAT_00b428bc,&param_5,&param_6,param_7);
    if (iVar3 < 0) {
      uVar6 = 0;
      if (param_6 == (size_t *)0x0) {
        FUN_00738460(1,0,"Failed to assemble shader %s from memory\nError: NONE REPORTED\n",param_3)
        ;
      }
      else {
        iVar3 = (**(code **)(*param_6 + 0xc))(param_6);
        if (iVar3 != 0) {
          uVar4 = (**(code **)(*param_5 + 0x10))(param_5);
          uVar6 = FUN_00401f00(uVar4);
          FUN_00434900(uVar6,uVar4,iVar3);
          FUN_00738460(1,0,"Failed to assemble shader %s from memory\nError: %s\n",param_3,uVar6);
        }
        (**(code **)(*param_5 + 8))(param_5);
      }
      FUN_00401f20(uVar6);
      if (param_5 != (int *)0x0) {
        (**(code **)(*param_5 + 8))(param_5);
      }
      return 0;
    }
    sVar5 = (**(code **)(*param_5 + 0x10))(param_5);
    *psVar2 = sVar5;
    iVar3 = FUN_00401f00(sVar5);
    *piVar1 = iVar3;
    sVar5 = *psVar2;
    _Src = (void *)(**(code **)(*param_4 + 0xc))(param_4);
    _memcpy((void *)*piVar1,_Src,sVar5);
    (**(code **)(*param_3 + 8))(param_3);
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 8))(param_3);
    }
    return 1;
  }
  FUN_00738460(1,0,"Invalid shader buffer\n");
  return 0;
}



int * FUN_007814c0(undefined4 param_1,undefined4 param_2,undefined *param_3,int param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  undefined4 extraout_var;
  undefined4 uVar5;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar3 = (int *)FUN_00401f00(0x44);
  if (piVar3 != (int *)0x0) {
    FUN_00782c60(DAT_00b428c4);
    *(undefined1 *)(piVar3 + 10) = 0;
    piVar3[0xb] = 0;
    piVar3[0xc] = 0;
    piVar3[0xd] = 0;
    *piVar3 = (int)&PTR_FUN_00a8b4ec;
    piVar3[0xe] = 0;
    piVar3[0xf] = 0;
    piVar3[0x10] = 0;
    local_4 = 0;
    local_c = 0;
    local_8 = 0;
    if (param_3 == (undefined *)0x0) {
      param_3 = &DAT_00a6aba4;
    }
    if (param_4 == 0) {
      param_4 = D3DXGetVertexShaderProfile(DAT_00b428c0);
    }
    cVar2 = FUN_00781170(param_1,param_3,param_4,&local_c,&local_4,&local_8);
    uVar1 = param_7;
    if (cVar2 != '\0') {
      piVar4 = (int *)FUN_00783bf0(local_c,&param_5,param_6,0,0,param_7);
      if (piVar4 == (int *)0x0) {
        FUN_00738460(1,0,"Failed CreateVertexShader call on %s\n",param_2);
        (**(code **)*piVar3)(1);
        return (int *)0x0;
      }
      (**(code **)(*piVar3 + 8))(param_2);
      (**(code **)(*piVar3 + 0x10))(unaff_retaddr);
      (**(code **)(*piVar3 + 0x1c))(local_c,unaff_ESI);
      (**(code **)(*piVar3 + 0x24))();
      uVar5 = extraout_var;
      (**(code **)(*piVar3 + 0x44))();
      (**(code **)(*piVar3 + 0x3c))(unaff_retaddr);
      (**(code **)(*piVar3 + 0x54))(uVar1);
      (**(code **)(*piVar3 + 100))(unaff_ESI);
      (**(code **)(*piVar3 + 0x6c))(unaff_ESI);
      (**(code **)(*piVar3 + 0x74))(uVar5);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      return piVar3;
    }
    (**(code **)*piVar3)(1);
  }
  return (int *)0x0;
}



int * FUN_00781670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined *param_4,
                  int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 extraout_var;
  undefined4 uVar5;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar3 = (int *)FUN_00401f00(0x44);
  if (piVar3 != (int *)0x0) {
    FUN_00782c60(DAT_00b428c4);
    *(undefined1 *)(piVar3 + 10) = 0;
    piVar3[0xb] = 0;
    piVar3[0xc] = 0;
    piVar3[0xd] = 0;
    *piVar3 = (int)&PTR_FUN_00a8b4ec;
    piVar3[0xe] = 0;
    piVar3[0xf] = 0;
    piVar3[0x10] = 0;
    local_4 = 0;
    local_c = 0;
    local_8 = 0;
    if (param_4 == (undefined *)0x0) {
      param_4 = &DAT_00a6aba4;
    }
    if (param_5 == 0) {
      param_5 = D3DXGetVertexShaderProfile(DAT_00b428c0);
    }
    cVar2 = FUN_00781350(param_1,param_2,param_4,param_5,&local_c,&local_4,&local_8);
    uVar1 = param_8;
    if (cVar2 != '\0') {
      piVar4 = (int *)FUN_00783bf0(local_c,&param_6,param_7,0,0,param_8);
      if (piVar4 == (int *)0x0) {
        FUN_00738460(1,0,"Failed CreateVertexShader call on %s\n");
        (**(code **)*piVar3)(1);
        return (int *)0x0;
      }
      (**(code **)(*piVar3 + 8))(param_3);
      (**(code **)(*piVar3 + 0x10))(0);
      (**(code **)(*piVar3 + 0x1c))(local_c,unaff_ESI);
      (**(code **)(*piVar3 + 0x24))();
      uVar5 = extraout_var;
      (**(code **)(*piVar3 + 0x44))();
      (**(code **)(*piVar3 + 0x3c))(param_1);
      (**(code **)(*piVar3 + 0x54))(uVar1);
      (**(code **)(*piVar3 + 100))(unaff_EBP);
      (**(code **)(*piVar3 + 0x6c))(unaff_EBP);
      (**(code **)(*piVar3 + 0x74))(uVar5);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      return piVar3;
    }
    (**(code **)*piVar3)(1);
  }
  return (int *)0x0;
}



int * FUN_00781820(undefined4 param_1,undefined4 param_2,undefined *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  int *piVar4;
  int *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar2 = (int *)FUN_00401f00(0x38);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  FUN_00782c60(DAT_00b428c4);
  piVar2[10] = 0;
  *piVar2 = (int)&PTR_FUN_00a8b484;
  piVar2[0xb] = 0;
  piVar2[0xc] = 0;
  piVar2[0xd] = 0;
  local_4 = 0;
  local_c = (int *)0x0;
  local_8 = 0;
  if (param_3 == (undefined *)0x0) {
    param_3 = &DAT_00a6aba4;
  }
  if (param_4 == 0) {
    param_4 = D3DXGetPixelShaderProfile(DAT_00b428c0);
  }
  cVar1 = FUN_00781170(param_1,param_3,param_4,&local_c,&local_4,&local_8);
  if (cVar1 == '\0') {
    (**(code **)*piVar2)(1);
    return (int *)0x0;
  }
  iVar3 = FUN_00783c30(local_c);
  if (iVar3 == 0) {
    FUN_00738460(1,0,"Failed CreatePixelShader call on %s\n",param_2);
    (**(code **)*piVar2)(1);
    return (int *)0x0;
  }
  (**(code **)(*piVar2 + 8))(param_2);
  (**(code **)(*piVar2 + 0x10))(unaff_retaddr);
  piVar4 = local_c;
  (**(code **)(*piVar2 + 0x1c))(local_c,unaff_ESI);
  (**(code **)(*piVar2 + 0x24))();
  (**(code **)(*piVar2 + 0x3c))(iVar3);
  (**(code **)(*piVar2 + 0x4c))(local_c);
  (**(code **)(*piVar2 + 0x54))(param_4);
  (**(code **)(*piVar2 + 0x5c))(unaff_ESI);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  return piVar2;
}



int * FUN_007819a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined *param_4,
                  int param_5)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *extraout_var;
  int *piVar5;
  undefined4 uVar6;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar3 = (int *)FUN_00401f00(0x38);
  if (piVar3 != (int *)0x0) {
    FUN_00782c60(DAT_00b428c4);
    piVar3[10] = 0;
    *piVar3 = (int)&PTR_FUN_00a8b484;
    piVar3[0xb] = 0;
    piVar3[0xc] = 0;
    piVar3[0xd] = 0;
    local_4 = 0;
    local_8 = 0;
    local_c = 0;
    if (param_4 == (undefined *)0x0) {
      param_4 = &DAT_00a6aba4;
    }
    if (param_5 == 0) {
      param_5 = D3DXGetPixelShaderProfile(DAT_00b428c0);
    }
    cVar2 = FUN_00781350(param_1,param_2,param_4,param_5,&local_8,&local_4,&local_c);
    uVar1 = local_8;
    if (cVar2 != '\0') {
      iVar4 = FUN_00783c30(local_8);
      if (iVar4 == 0) {
        FUN_00738460(1,0,"Failed CreatePixelShader call on %s\n");
        (**(code **)*piVar3)(1);
        return (int *)0x0;
      }
      (**(code **)(*piVar3 + 8))(param_3);
      (**(code **)(*piVar3 + 0x10))(0);
      uVar6 = local_c;
      (**(code **)(*piVar3 + 0x1c))(local_c,uVar1);
      (**(code **)(*piVar3 + 0x24))();
      piVar5 = extraout_var;
      (**(code **)(*piVar3 + 0x3c))(iVar4);
      (**(code **)(*piVar3 + 0x4c))(local_8);
      (**(code **)(*piVar3 + 0x54))(local_8);
      (**(code **)(*piVar3 + 0x5c))(uVar6);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
      }
      return piVar3;
    }
    (**(code **)*piVar3)(1);
  }
  return (int *)0x0;
}



int * FUN_00781b10(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_EDI;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar2 = (int *)FUN_00401f00(0x38);
  if (piVar2 != (int *)0x0) {
    FUN_00782c60(DAT_00b428c4);
    puVar6 = &local_c;
    puVar5 = &local_8;
    *piVar2 = (int)&PTR_FUN_00a8b41c;
    *(undefined1 *)(piVar2 + 10) = 0;
    piVar2[0xb] = 0;
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    puVar4 = &local_10;
    local_4 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    cVar1 = (**(code **)(*in_ECX + 0x24))(param_1,puVar4,&local_4,puVar5,puVar6);
    if (cVar1 != '\0') {
      iVar3 = FUN_00783bf0(puVar5,&stack0x00000000,param_1,unaff_EDI,puVar6,param_2);
      if (iVar3 == 0) {
        FUN_00738460(1,0,"Failed CreateVertexShader call on %s\n",local_c);
        (**(code **)*piVar2)(1);
        return (int *)0x0;
      }
      (**(code **)(*piVar2 + 8))(local_c);
      (**(code **)(*piVar2 + 0x10))(unaff_EBX);
      (**(code **)(*piVar2 + 0x1c))(puVar6,puVar4);
      (**(code **)(*piVar2 + 0x24))();
      (**(code **)(*piVar2 + 0x44))(iVar3);
      (**(code **)(*piVar2 + 0x3c))(unaff_EBX);
      (**(code **)(*piVar2 + 0x4c))(unaff_EDI);
      (**(code **)(*piVar2 + 0x54))(param_2);
      return piVar2;
    }
    (**(code **)*piVar2)(1);
  }
  return (int *)0x0;
}



int * FUN_00781c60(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_EDI;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar2 = (int *)FUN_00401f00(0x38);
  if (piVar2 != (int *)0x0) {
    FUN_00782c60(DAT_00b428c4);
    puVar7 = &local_c;
    puVar6 = &local_8;
    puVar5 = &local_4;
    *piVar2 = (int)&PTR_FUN_00a8b41c;
    *(undefined1 *)(piVar2 + 10) = 0;
    piVar2[0xb] = 0;
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    local_4 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    uVar4 = param_2;
    cVar1 = (**(code **)(*in_ECX + 0x28))(param_1,param_2,&local_10,puVar5,puVar6,puVar7);
    if (cVar1 != '\0') {
      iVar3 = FUN_00783bf0(puVar5,&stack0x00000000,param_1,puVar7,puVar6,param_2);
      if (iVar3 == 0) {
        FUN_00738460(1,0,"Failed CreateVertexShader call on %s\n",local_c);
        (**(code **)*piVar2)(1);
        return (int *)0x0;
      }
      (**(code **)(*piVar2 + 8))(local_c);
      (**(code **)(*piVar2 + 0x10))(0);
      (**(code **)(*piVar2 + 0x1c))(puVar6,uVar4);
      (**(code **)(*piVar2 + 0x24))();
      (**(code **)(*piVar2 + 0x44))(iVar3);
      (**(code **)(*piVar2 + 0x3c))(unaff_EBX);
      (**(code **)(*piVar2 + 0x4c))(unaff_EDI);
      (**(code **)(*piVar2 + 0x54))(param_2);
      return piVar2;
    }
    (**(code **)*piVar2)(1);
  }
  return (int *)0x0;
}



int * FUN_00781dc0(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined4 unaff_EBP;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar2 = (int *)FUN_00401f00(0x2c);
  if (piVar2 != (int *)0x0) {
    FUN_00782c60(DAT_00b428c4);
    puVar6 = &local_4;
    *piVar2 = (int)&PTR_FUN_00a8b3cc;
    piVar2[10] = 0;
    puVar5 = &local_c;
    puVar4 = &local_10;
    local_c = 0;
    local_10 = 0;
    local_8 = 0;
    local_4 = 0;
    cVar1 = (**(code **)(*in_ECX + 0x24))(param_1,puVar4,puVar5,puVar6,&local_8);
    if (cVar1 != '\0') {
      iVar3 = FUN_00783c30(puVar6);
      if (iVar3 == 0) {
        FUN_00738460(1,0,"Failed CreatePixelShader call on %s\n",local_c);
        (**(code **)*piVar2)(1);
        return (int *)0x0;
      }
      (**(code **)(*piVar2 + 8))(local_c);
      (**(code **)(*piVar2 + 0x10))(unaff_EBP);
      (**(code **)(*piVar2 + 0x1c))(puVar5,puVar4);
      (**(code **)(*piVar2 + 0x24))();
      (**(code **)(*piVar2 + 0x3c))(iVar3);
      return piVar2;
    }
    (**(code **)*piVar2)(1);
  }
  return (int *)0x0;
}



int * FUN_00781ed0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar2 = (int *)FUN_00401f00(0x2c);
  if (piVar2 != (int *)0x0) {
    FUN_00782c60(DAT_00b428c4);
    puVar5 = &local_c;
    *piVar2 = (int)&PTR_FUN_00a8b3cc;
    piVar2[10] = 0;
    puVar4 = &local_10;
    local_c = 0;
    local_10 = 0;
    local_8 = 0;
    local_4 = 0;
    cVar1 = (**(code **)(*in_ECX + 0x28))(param_1,param_2,puVar4,puVar5,&local_4,&local_8);
    if (cVar1 != '\0') {
      iVar3 = FUN_00783c30(puVar5);
      if (iVar3 == 0) {
        FUN_00738460(1,0,"Failed CreatePixelShader call on %s\n",local_c);
        (**(code **)*piVar2)(1);
        return (int *)0x0;
      }
      (**(code **)(*piVar2 + 8))(local_c);
      (**(code **)(*piVar2 + 0x10))(0);
      (**(code **)(*piVar2 + 0x1c))(puVar4,param_2);
      (**(code **)(*piVar2 + 0x24))();
      (**(code **)(*piVar2 + 0x3c))(iVar3);
      return piVar2;
    }
    (**(code **)*piVar2)(1);
  }
  return (int *)0x0;
}



undefined4 FUN_00782040(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if (iVar1 != 0) {
    iVar1 = FUN_00783c30(iVar1);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x3c))(iVar1);
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_007825b0(char *param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  __splitpath_s(param_1,param_2,3,param_3,0x104,param_4,0x104,param_5,0x100);
  return 1;
}



char * FUN_007825f0(int *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    FUN_00401f20(*param_1);
    *param_1 = 0;
    return (char *)0x0;
  }
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (1 - (int)(param_3 + 1));
  if (*param_1 != 0) {
    if (pcVar2 < param_2) goto LAB_00782643;
    FUN_00401f20(*param_1);
    *param_1 = 0;
  }
  iVar3 = FUN_00401f00(pcVar2);
  *param_1 = iVar3;
  param_2 = pcVar2;
LAB_00782643:
  _strcpy_s((char *)*param_1,(rsize_t)param_2,param_3);
  return param_2;
}



void FUN_00782680(uint param_1,void *param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0x14) < param_1) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x18));
    *(undefined4 *)(in_ECX + 0x18) = 0;
    *(uint *)(in_ECX + 0x14) = param_1;
  }
  if (*(int *)(in_ECX + 0x18) == 0) {
    uVar1 = FUN_00401f00(*(undefined4 *)(in_ECX + 0x14));
    *(undefined4 *)(in_ECX + 0x18) = uVar1;
  }
  if (param_2 != (void *)0x0) {
    _memcpy(*(void **)(in_ECX + 0x18),param_2,param_1);
  }
  return;
}



void FUN_007826e0(void)

{
  int in_ECX;
  
  *(undefined ***)(in_ECX + 0x2c) = &PTR__scalar_deleting_destructor__00a8af0c;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x30));
  return;
}



int FUN_00782700(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  int *piVar6;
  
  iVar3 = param_1;
  piVar6 = *(int **)(in_ECX + 0x30);
  iVar1 = piVar6[param_1];
  iVar4 = 0;
  iVar2 = DAT_00b428d4;
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x14);
    if (*(int *)(in_ECX + 0x20) - iVar4 == *(int *)(iVar1 + 0xc)) {
      *(undefined4 *)(in_ECX + 0x20) = 0;
      for (; param_1 != 0; param_1 = param_1 + -1) {
        iVar2 = *piVar6;
        if ((iVar2 != 0) &&
           (uVar5 = *(int *)(iVar2 + 0x14) + *(int *)(iVar2 + 0xc), *(uint *)(in_ECX + 0x20) < uVar5
           )) {
          *(uint *)(in_ECX + 0x20) = uVar5;
        }
        piVar6 = piVar6 + 1;
      }
    }
    *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + iVar4;
    *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 0x20);
    param_1 = 0;
    FUN_0042bb90(iVar3,&param_1);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(int *)(iVar1 + 0x18) = DAT_00b428d4;
    iVar2 = iVar1;
    if (DAT_00b428d4 != 0) {
      *(int *)(DAT_00b428d4 + 0x1c) = iVar1;
    }
  }
  DAT_00b428d4 = iVar2;
  return iVar4;
}



void FUN_007827a0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (DAT_00b2b598 != 0) {
    uVar2 = 0;
    do {
      puVar1 = (undefined4 *)FUN_00401f00(0x20);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[5] = 0;
        puVar1[4] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
      }
      if (DAT_00b428d4 != (undefined4 *)0x0) {
        DAT_00b428d4[7] = puVar1;
      }
      puVar1[6] = DAT_00b428d4;
      puVar1[7] = 0;
      uVar2 = uVar2 + 1;
      DAT_00b428d4 = puVar1;
    } while (uVar2 < DAT_00b2b598);
  }
  return;
}



void FUN_00782810(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00b428d4;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x18);
    *(undefined4 *)(iVar2 + 8) = 0;
    FUN_00401f20(iVar2);
    iVar2 = iVar1;
  }
  DAT_00b428d4 = 0;
  return;
}



undefined4 * FUN_00782840(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 *puVar3;
  
  uVar1 = (uint)param_1;
  if (*(uint *)(in_ECX + 0x24) < param_1) {
    return (undefined4 *)0x0;
  }
  puVar3 = DAT_00b428d4;
  if (DAT_00b428d4 == (undefined4 *)0x0) {
    FUN_007827a0();
    puVar3 = DAT_00b428d4;
  }
  DAT_00b428d4 = (undefined4 *)puVar3[6];
  if (DAT_00b428d4 != (undefined4 *)0x0) {
    *(undefined4 *)((int)DAT_00b428d4 + 0x1c) = 0;
  }
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[1] = in_ECX;
  puVar3[2] = *(undefined4 *)(in_ECX + 8);
  puVar3[3] = *(undefined4 *)(in_ECX + 0x20);
  puVar3[5] = uVar1;
  *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x20) + uVar1;
  *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) - uVar1;
  *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) - uVar1;
  param_1 = puVar3;
  uVar2 = FUN_004baca0(&param_1);
  *puVar3 = uVar2;
  return puVar3;
}



void FUN_007828d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a8b7e0;
  InterlockedExchange(in_ECX + 1,0);
  in_ECX[2] = 0;
  return;
}



void FUN_007828f0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a8b7e0;
  piVar1 = (int *)in_ECX[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}



void FUN_00782910(int param_1)

{
  int in_ECX;
  
  InterlockedIncrement((LONG *)(in_ECX + 4));
  *(int *)(param_1 + 4) = in_ECX;
  return;
}



void FUN_00782930(int param_1)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  InterlockedDecrement(in_ECX + 1);
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar2 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (uVar1 != 0) {
    do {
      (**(code **)(*in_ECX + 0x1c))(param_1,uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  FUN_00777f40();
  return;
}



void FUN_00782970(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[2];
  *in_ECX = &PTR_LAB_00a8b7e0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_007829a0(uint param_1,int *param_2,undefined4 *param_3,char param_4,char param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  undefined4 uVar4;
  
  if (*(uint *)(in_ECX + 8) < param_1) {
    piVar1 = *(int **)(in_ECX + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(in_ECX + 0x10) = 0;
    uVar2 = param_1;
    if ((param_1 & 0xf) != 0) {
      uVar2 = (param_1 & 0xfffffff0) + 0x20;
    }
    *(uint *)(in_ECX + 8) = uVar2;
  }
  if (*(int *)(in_ECX + 0x10) == 0) {
    uVar4 = 0x208;
    if (param_5 != '\0') {
      uVar4 = 0x218;
    }
    iVar3 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x68))
                      (*(int **)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 8),uVar4,
                       *(undefined4 *)(in_ECX + 4),0,(undefined4 *)(in_ECX + 0x10),0);
    if (-1 < iVar3) {
      *(undefined4 *)(in_ECX + 0x14) = 0;
    }
  }
  if ((param_4 == '\0') && (param_1 <= (uint)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 0x14)))) {
    *param_2 = *(int *)(in_ECX + 0x14);
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + param_1;
    *param_3 = 0x1000;
  }
  else {
    *param_2 = 0;
    *(uint *)(in_ECX + 0x14) = param_1;
    *param_3 = 0x2000;
  }
  if (*param_2 == 0) {
    *param_3 = 0x2000;
  }
  return *(undefined4 *)(in_ECX + 0x10);
}



void FUN_00782a70(int param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a8b80c;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
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
  in_ECX[0x21] = param_1;
  if (param_1 != 0) {
    in_ECX[0x20] = *(undefined4 *)(param_1 + 0x280);
  }
  piVar1 = (int *)in_ECX[0x20];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return;
}



void FUN_00782b20(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8b80c;
  FUN_00401f20(in_ECX[2]);
  FUN_00401f20(in_ECX[3]);
  FUN_00401f20(in_ECX[4]);
  FUN_00401f20(in_ECX[5]);
  FUN_00401f20(in_ECX[0xc]);
  FUN_00401f20(in_ECX[0xd]);
  FUN_00401f20(in_ECX[0xe]);
  FUN_00401f20(in_ECX[0xf]);
  FUN_00401f20(in_ECX[0x16]);
  FUN_00401f20(in_ECX[0x17]);
  FUN_00401f20(in_ECX[0x18]);
  FUN_00401f20(in_ECX[0x19]);
  piVar1 = (int *)in_ECX[0x20];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x20] = 0;
  }
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  return;
}



void FUN_00782bd0(byte param_1)

{
  FUN_00782b20();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00782bf0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  *(int *)(in_ECX + 0x20) = param_1;
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0x280);
    piVar2 = *(int **)(in_ECX + 0x1c);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    *(int **)(in_ECX + 0x1c) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(*(int *)(in_ECX + 0x20) + 0x8ac);
    return;
  }
  piVar1 = *(int **)(in_ECX + 0x1c);
  *(undefined4 *)(in_ECX + 0x24) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  return;
}



void FUN_00782c60(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a8b818;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  FUN_00782bf0(param_1);
  return;
}



void FUN_00782cb0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8b818;
  FUN_00401f20(in_ECX[2]);
  FUN_00401f20(in_ECX[3]);
  FUN_00401f20(in_ECX[5]);
  piVar1 = (int *)in_ECX[7];
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  in_ECX[7] = 0;
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  return;
}



void FUN_00782d10(byte param_1)

{
  FUN_00782cb0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



bool FUN_00782d30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)(**(int **)(in_ECX + 0xff8) + 0x1c4))
                    (*(int **)(in_ECX + 0xff8),param_1,param_2,param_3);
  return -1 < iVar1;
}



bool FUN_00782d60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)(**(int **)(in_ECX + 0xff8) + 0x1b4))
                    (*(int **)(in_ECX + 0xff8),param_1,param_2,param_3);
  return -1 < iVar1;
}



bool FUN_00782d90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)(**(int **)(in_ECX + 0xff8) + 0x1bc))
                    (*(int **)(in_ECX + 0xff8),param_1,param_2,param_3);
  return -1 < iVar1;
}



void FUN_00782dc0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x28) != 0) {
    FUN_007630e0(in_ECX);
  }
  return;
}



void FUN_00782dd0(void)

{
  FUN_0077eb50();
  return;
}



bool FUN_00782de0(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  return *(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 8;
}



bool FUN_00782e10(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  return *(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 9;
}



void FUN_00782e40(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8b3cc;
  FUN_0077efd0();
  if (in_ECX[10] != 0) {
    FUN_007630e0(in_ECX);
  }
  in_ECX[10] = 0;
  FUN_00782cb0();
  return;
}



bool FUN_00782e70(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x30);
  }
  if ((param_3 == 0) && (param_3 = *(int *)(param_1 + 0x20), param_3 == 0)) {
    param_3 = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  if (*(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 1) {
    piVar2 = *(int **)(*(int *)(in_ECX + 0x24) + 0xff8);
    iVar3 = (**(code **)(*piVar2 + 0x1c4))(piVar2);
    return -1 < iVar3;
  }
  piVar2 = *(int **)(*(int *)(in_ECX + 0x24) + 0xff8);
  iVar3 = *piVar2;
  if (*(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 3) {
    iVar3 = (**(code **)(iVar3 + 0x1bc))();
    return -1 < iVar3;
  }
  iVar3 = (**(code **)(iVar3 + 0x1b4))(piVar2,*(undefined4 *)(param_1 + 0x1c),param_2,param_3);
  return -1 < iVar3;
}



bool FUN_00782fe0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)(**(int **)(in_ECX + 0xff8) + 0x188))
                    (*(int **)(in_ECX + 0xff8),param_1,param_2,param_3);
  return -1 < iVar1;
}



bool FUN_00783010(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)(**(int **)(in_ECX + 0xff8) + 0x178))
                    (*(int **)(in_ECX + 0xff8),param_1,param_2,param_3);
  return -1 < iVar1;
}



bool FUN_00783040(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)(**(int **)(in_ECX + 0xff8) + 0x180))
                    (*(int **)(in_ECX + 0xff8),param_1,param_2,param_3);
  return -1 < iVar1;
}



void FUN_00783070(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x30) != 0) {
    FUN_00763090(in_ECX);
  }
  return;
}



void FUN_00783080(void)

{
  FUN_0077eb10();
  return;
}



void FUN_00783090(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8b41c;
  FUN_0077efa0();
  if (in_ECX[0xc] != 0) {
    FUN_00763090(in_ECX);
  }
  FUN_00782cb0();
  return;
}



bool FUN_007830c0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x30);
  }
  if ((param_3 == 0) && (param_3 = *(int *)(param_1 + 0x20), param_3 == 0)) {
    param_3 = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  if (*(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 1) {
    piVar2 = *(int **)(*(int *)(in_ECX + 0x24) + 0xff8);
    iVar3 = (**(code **)(*piVar2 + 0x188))(piVar2);
    return -1 < iVar3;
  }
  piVar2 = *(int **)(*(int *)(in_ECX + 0x24) + 0xff8);
  iVar3 = *piVar2;
  if (*(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 3) {
    iVar3 = (**(code **)(iVar3 + 0x180))();
    return -1 < iVar3;
  }
  iVar3 = (**(code **)(iVar3 + 0x178))(piVar2,*(undefined4 *)(param_1 + 0x1c),param_2,param_3);
  return -1 < iVar3;
}



void FUN_00783230(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8b484;
  FUN_00401f20(in_ECX[0xb]);
  FUN_00401f20(in_ECX[0xc]);
  piVar1 = (int *)in_ECX[0xd];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0xd] = 0;
  }
  FUN_00782e40();
  return;
}



void FUN_00783270(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x34) = 0;
  }
  FUN_00782dc0();
  return;
}



bool FUN_007832b0(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  return *(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 1;
}



bool FUN_007832e0(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  return *(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 3;
}



bool FUN_00783310(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  return *(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 4;
}



bool FUN_00783340(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  return *(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 5;
}



bool FUN_00783370(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  return *(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 6;
}



bool FUN_007833a0(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  return *(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 7;
}



bool FUN_007833d0(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  return *(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 10;
}



uint FUN_00783400(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  uint in_EAX;
  int iVar4;
  int iVar5;
  int in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_8c [24];
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [104];
  
  if ((*(int *)(in_ECX + 0x34) == 0) || (*(int *)(in_ECX + 0x1c) == 0)) {
LAB_007835b9:
    return in_EAX & 0xffffff00;
  }
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x30);
  }
  iVar5 = *(int *)(param_1 + 0x24);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0xc);
  }
  iVar4 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x24))(*(int **)(in_ECX + 0x34),0,iVar5);
  if (iVar4 == 0) {
    in_EAX = FUN_0060d0a0("NiD3DHLSLPixelShader::SetPixelShaderConstant - %s - variable %s not found\n"
                          ,*(undefined4 *)(in_ECX + 8),iVar5);
    goto LAB_007835b9;
  }
  uStack_90 = 1;
  iVar5 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x18))
                    (*(int **)(in_ECX + 0x34),iVar4,auStack_8c,&uStack_90);
  uVar1 = *(uint *)(param_1 + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  if ((*(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 8) || (cVar3 = FUN_00782e10(), cVar3 != '\0')
     ) {
    D3DXMatrixTranspose(auStack_6c,param_2);
    piVar2 = *(int **)(*(int *)(in_ECX + 0x24) + 0xff8);
    iVar4 = (**(code **)(*piVar2 + 0x1b4))(piVar2,unaff_ESI,auStack_74,unaff_EBX);
    if (iVar4 < 0) goto LAB_00783595;
  }
  else {
    cVar3 = FUN_00783340();
    if ((((cVar3 == '\0') && (cVar3 = FUN_00783370(), cVar3 == '\0')) &&
        (cVar3 = FUN_007833a0(), cVar3 == '\0')) &&
       ((cVar3 = FUN_007833d0(), cVar3 == '\0' && (cVar3 = FUN_00783310(), cVar3 == '\0')))) {
      cVar3 = FUN_007832e0();
      if (cVar3 == '\0') {
        in_EAX = FUN_007832b0();
        if ((char)in_EAX == '\0') goto LAB_007835b9;
        cVar3 = FUN_00782d30(uStack_94,param_2,uStack_90,0);
      }
      else {
        cVar3 = FUN_00782d90(uStack_94,param_2,uStack_90,0);
      }
    }
    else {
      cVar3 = FUN_00782d60(uStack_94,param_2,uStack_90,0);
    }
    if (cVar3 == '\0') goto LAB_00783595;
  }
  iVar5 = 0;
LAB_00783595:
  return (uint)(-1 < iVar5);
}



bool FUN_007835d0(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  undefined4 unaff_EDI;
  int iVar6;
  undefined4 uStack_94;
  int iStack_90;
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [116];
  
  if ((*(int *)(in_ECX + 0x34) != 0) && (*(int *)(in_ECX + 0x1c) != 0)) {
    uVar5 = *(uint *)(param_1 + 0x14);
    if (DAT_00b4295b == '\0') {
      FUN_00783c70();
    }
    if (*(int *)(&DAT_00b428d8 + (uVar5 & 0xff) * 4) != 8) {
      uVar5 = *(uint *)(param_1 + 0x14);
      if (DAT_00b4295b == '\0') {
        FUN_00783c70();
      }
      if (*(int *)(&DAT_00b428d8 + (uVar5 & 0xff) * 4) != 9) {
        return false;
      }
    }
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x30);
    }
    iVar4 = *(int *)(param_1 + 0x24);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0xc);
    }
    iVar6 = iVar4;
    iVar3 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x24))(*(int **)(in_ECX + 0x34),0,iVar4);
    iStack_90 = iVar3;
    if (iVar3 != 0) {
      uStack_94 = 1;
      iVar4 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x18))
                        (*(int **)(in_ECX + 0x34),iVar3,auStack_8c,&uStack_94);
      if (param_5 == 0) {
        iVar4 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x58))
                          (*(int **)(in_ECX + 0x34),*(undefined4 *)(in_ECX + 0x1c),iVar3,param_2,
                           param_3);
        return -1 < iVar4;
      }
      uVar5 = 0;
      if (param_3 != 0) {
        do {
          uVar1 = *(ushort *)(param_5 + uVar5 * 2);
          (**(code **)(**(int **)(in_ECX + 0x34) + 0x28))(*(int **)(in_ECX + 0x34),unaff_EDI,uVar5);
          D3DXMatrixTranspose(auStack_78,(uint)uVar1 * param_4 * 0x10 + param_2);
          piVar2 = *(int **)(*(int *)(in_ECX + 0x24) + 0xff8);
          iVar3 = (**(code **)(*piVar2 + 0x1b4))(piVar2,iVar4,auStack_80,iVar6);
          if (iVar3 < 0) {
            if (iVar4 < 0) {
              return false;
            }
          }
          else {
            iVar4 = 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_3);
      }
      return true;
    }
    FUN_0060d0a0("NiD3DHLSLPixelShader::SetPixelShaderConstantArray - %s - variable %s not found\n",
                 *(undefined4 *)(in_ECX + 8),iVar4);
  }
  return false;
}



void FUN_00783770(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8b4ec;
  FUN_00401f20(in_ECX[0xe]);
  FUN_00401f20(in_ECX[0xf]);
  piVar1 = (int *)in_ECX[0x10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x10] = 0;
  }
  FUN_00783090();
  return;
}



void FUN_007837b0(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x40);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x40) = 0;
  }
  FUN_00783070();
  return;
}



uint FUN_007837f0(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  uint in_EAX;
  int iVar4;
  int iVar5;
  int in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_8c [24];
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [104];
  
  if ((*(int *)(in_ECX + 0x40) == 0) || (*(int *)(in_ECX + 0x1c) == 0)) {
LAB_007839a9:
    return in_EAX & 0xffffff00;
  }
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x30);
  }
  iVar5 = *(int *)(param_1 + 0x24);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0xc);
  }
  iVar4 = (**(code **)(**(int **)(in_ECX + 0x40) + 0x24))(*(int **)(in_ECX + 0x40),0,iVar5);
  if (iVar4 == 0) {
    in_EAX = FUN_0060d0a0("NiD3DHLSLVertexShader::SetVertexShaderConstant - %s - variable %s not found\n"
                          ,*(undefined4 *)(in_ECX + 8),iVar5);
    goto LAB_007839a9;
  }
  uStack_90 = 1;
  iVar5 = (**(code **)(**(int **)(in_ECX + 0x40) + 0x18))
                    (*(int **)(in_ECX + 0x40),iVar4,auStack_8c,&uStack_90);
  uVar1 = *(uint *)(param_1 + 0x14);
  if (DAT_00b4295b == '\0') {
    FUN_00783c70();
  }
  if ((*(int *)(&DAT_00b428d8 + (uVar1 & 0xff) * 4) == 8) || (cVar3 = FUN_00782e10(), cVar3 != '\0')
     ) {
    D3DXMatrixTranspose(auStack_6c,param_2);
    piVar2 = *(int **)(*(int *)(in_ECX + 0x24) + 0xff8);
    iVar4 = (**(code **)(*piVar2 + 0x178))(piVar2,unaff_ESI,auStack_74,unaff_EBX);
    if (iVar4 < 0) goto LAB_00783985;
  }
  else {
    cVar3 = FUN_00783340();
    if ((((cVar3 == '\0') && (cVar3 = FUN_00783370(), cVar3 == '\0')) &&
        (cVar3 = FUN_007833a0(), cVar3 == '\0')) &&
       ((cVar3 = FUN_007833d0(), cVar3 == '\0' && (cVar3 = FUN_00783310(), cVar3 == '\0')))) {
      cVar3 = FUN_007832e0();
      if (cVar3 == '\0') {
        in_EAX = FUN_007832b0();
        if ((char)in_EAX == '\0') goto LAB_007839a9;
        cVar3 = FUN_00782fe0(uStack_94,param_2,uStack_90,0);
      }
      else {
        cVar3 = FUN_00783040(uStack_94,param_2,uStack_90,0);
      }
    }
    else {
      cVar3 = FUN_00783010(uStack_94,param_2,uStack_90,0);
    }
    if (cVar3 == '\0') goto LAB_00783985;
  }
  iVar5 = 0;
LAB_00783985:
  return (uint)(-1 < iVar5);
}



bool FUN_007839c0(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  ushort uVar1;
  uint3 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  undefined1 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined4 uStack_90;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [132];
  
  uVar2 = (uint3)uStack_90;
  if ((*(int *)(in_ECX + 0x40) != 0) && (*(int *)(in_ECX + 0x1c) != 0)) {
    uVar7 = *(uint *)(param_1 + 0x14);
    if (DAT_00b4295b == '\0') {
      iStack_a4 = 0x7839f9;
      FUN_00783c70();
    }
    if (*(int *)(&DAT_00b428d8 + (uVar7 & 0xff) * 4) != 8) {
      uVar7 = *(uint *)(param_1 + 0x14);
      if (DAT_00b4295b == '\0') {
        iStack_a4 = 0x783a1a;
        FUN_00783c70();
      }
      if (*(int *)(&DAT_00b428d8 + (uVar7 & 0xff) * 4) != 9) {
        return false;
      }
    }
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x30);
    }
    iVar5 = *(int *)(param_1 + 0x24);
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0xc);
    }
    iVar4 = *(int *)(param_1 + 0x10);
    uStack_90 = (uint)(uint3)uStack_90;
    if ((((iVar4 == 0x21) || (iVar4 == 0x23)) || (iVar4 == 0x22)) || (iVar4 == 0x24)) {
      uStack_90 = CONCAT13(1,uVar2);
    }
    uStack_ac = *(int **)(in_ECX + 0x40);
    uStack_a8 = 0;
    puStack_b0 = (undefined1 *)0x783a73;
    iStack_a4 = iVar5;
    iVar4 = (**(code **)(*uStack_ac + 0x24))();
    if (iVar4 != 0) {
      puStack_b0 = &stack0xffffff68;
      puStack_b4 = auStack_8c;
      (**(code **)(**(int **)(in_ECX + 0x40) + 0x18))(*(int **)(in_ECX + 0x40),iVar4);
      if (param_5 == 0) {
        iVar5 = -0x7fffbffb;
        if (uStack_ac._3_1_ == '\0') {
          iVar5 = (**(code **)(**(int **)(in_ECX + 0x40) + 0x58))
                            (*(int **)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x1c),iVar4,param_2,
                             param_3);
        }
        else {
          cVar3 = FUN_00783010(iVar4,param_2,uStack_90,0);
          if (cVar3 != '\0') {
            return true;
          }
        }
        return -1 < iVar5;
      }
      uVar7 = 0;
      if (param_3 != 0) {
        do {
          uVar1 = *(ushort *)(param_5 + uVar7 * 2);
          piVar8 = *(int **)(in_ECX + 0x40);
          uStack_ac = (int *)(**(code **)(*piVar8 + 0x28))(piVar8,iStack_a4,uVar7);
          cVar3 = (char)((uint)piVar8 >> 0x18);
          puStack_b4 = (undefined1 *)0x1;
          (**(code **)(**(int **)(in_ECX + 0x40) + 0x18))
                    (*(int **)(in_ECX + 0x40),uStack_ac,&uStack_a8,&puStack_b4);
          if (cVar3 == '\0') {
            D3DXMatrixTranspose(auStack_88,(uint)uVar1 * param_4 * 0x10 + param_2);
            puVar6 = auStack_88;
          }
          else {
            puVar6 = (undefined1 *)((uint)uVar1 * param_4 * 0x10 + param_2);
          }
          piVar8 = *(int **)(*(int *)(in_ECX + 0x24) + 0xff8);
          iVar5 = (**(code **)(*piVar8 + 0x178))(piVar8,puStack_b0,puVar6,uStack_ac);
          if (iVar5 < 0) {
            return false;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_3);
      }
      return true;
    }
    puStack_b4 = *(undefined1 **)(in_ECX + 8);
    puStack_b0 = (undefined1 *)iVar5;
    FUN_0060d0a0(
                "NiD3DHLSLVertexShader::SetVertexShaderConstantArray - %s - variable %s not found\n"
                );
  }
  return false;
}



undefined4 FUN_00783bf0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_1;
  iVar1 = (**(code **)(*DAT_00b428c0 + 0x16c))(DAT_00b428c0,param_1,&param_1);
  if (iVar1 < 0) {
    FUN_00738460(1,0,"Failed to create vertex shader\nError 0x%08x\n",iVar1);
    return 0;
  }
  return uVar2;
}



undefined4 FUN_00783c30(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_1;
  iVar1 = (**(code **)(*DAT_00b428c0 + 0x1a8))(DAT_00b428c0,param_1,&param_1);
  if (iVar1 < 0) {
    FUN_00738460(1,0,"Failed to create pixel shader\nError 0x%08x\n",iVar1);
    return 0;
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00783c70(void)

{
  _DAT_00b428d8 = 0;
  _DAT_00b428dc = 1;
  _DAT_00b428e0 = 2;
  _DAT_00b428e4 = 3;
  _DAT_00b428e8 = 4;
  _DAT_00b428ec = 5;
  _DAT_00b428f0 = 6;
  _DAT_00b428f4 = 7;
  _DAT_00b428f8 = 8;
  _DAT_00b428fc = 9;
  _DAT_00b42900 = 10;
  _DAT_00b42904 = 0xb;
  _DAT_00b42908 = 0xc;
  _DAT_00b4290c = 0xd;
  DAT_00b4294c = 0;
  DAT_00b4294d = 1;
  DAT_00b4294e = 2;
  DAT_00b4294f = 3;
  DAT_00b42950 = 4;
  DAT_00b42951 = 5;
  DAT_00b42952 = 6;
  DAT_00b42953 = 7;
  DAT_00b42954 = 8;
  DAT_00b42955 = 9;
  DAT_00b42956 = 10;
  DAT_00b42957 = 0xb;
  DAT_00b42958 = 0xc;
  DAT_00b42959 = 0xd;
  DAT_00b4295b = 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00783d70(void)

{
  _DAT_00b42914 = 0;
  _DAT_00b42918 = 1;
  _DAT_00b4291c = 2;
  _DAT_00b42920 = 3;
  _DAT_00b42924 = 4;
  _DAT_00b42928 = 5;
  _DAT_00b4292c = 6;
  _DAT_00b42930 = 7;
  _DAT_00b42934 = 8;
  _DAT_00b42938 = 0;
  _DAT_00b4293a = 0x100;
  _DAT_00b4293c = 0x200;
  _DAT_00b4293e = 0x300;
  _DAT_00b42940 = 0x400;
  _DAT_00b42942 = 0x500;
  _DAT_00b42944 = 0x600;
  _DAT_00b42946 = 0x700;
  _DAT_00b42948 = 0x800;
  DAT_00b4295c = 1;
  return;
}



char * FUN_00783e20(void)

{
  char *pcVar1;
  char cVar2;
  char *in_EAX;
  int iVar3;
  char *unaff_EDI;
  
  iVar3 = _isspace((int)*in_EAX);
  while (iVar3 != 0) {
    pcVar1 = in_EAX + 1;
    in_EAX = in_EAX + 1;
    iVar3 = _isspace((int)*pcVar1);
  }
  FID_conflict__sscanf(in_EAX,"%s");
  pcVar1 = unaff_EDI + 1;
  do {
    cVar2 = *unaff_EDI;
    unaff_EDI = unaff_EDI + 1;
  } while (cVar2 != '\0');
  return in_EAX + ((int)unaff_EDI - (int)pcVar1);
}



undefined4
FUN_00783e70(undefined4 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_6 * (*param_3 - *param_2) + *param_2;
  fVar2 = param_2[1] + param_6 * (param_3[1] - param_2[1]);
  fVar4 = *param_3 + param_6 * (*param_4 - *param_3);
  fVar3 = param_3[1] + param_6 * (param_4[1] - param_3[1]);
  fVar1 = fVar1 + param_6 * (fVar4 - fVar1);
  fVar2 = fVar2 + param_6 * (fVar3 - fVar2);
  FUN_0078e5a0(fVar1 + ((((*param_4 + param_6 * (*param_5 - *param_4)) - fVar4) * param_6 + fVar4) -
                       fVar1) * param_6,
               fVar2 + param_6 * ((((param_4[1] + param_6 * (param_5[1] - param_4[1])) - fVar3) *
                                   param_6 + fVar3) - fVar2));
  return param_1;
}



int FUN_00783fe0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x18;
}



int FUN_00784000(uint param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) == 0) ||
     ((uint)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x18) <= param_1)) {
    FUN_00984d5e();
  }
  return *(int *)(in_ECX + 4) + param_1 * 0x18;
}



undefined4 FUN_00784040(int *param_1)

{
  int *in_ECX;
  
  if ((*in_ECX == 0) || (*in_ECX != *param_1)) {
    FUN_00984d5e();
  }
  return CONCAT31((int3)((uint)in_ECX[1] >> 8),in_ECX[1] == param_1[1]);
}



void FUN_00784070(int *param_1)

{
  char cVar1;
  
  param_1 = (int *)*param_1;
  cVar1 = *(char *)((int)param_1 + 0x2d);
  while (cVar1 == '\0') {
    param_1 = (int *)*param_1;
    cVar1 = *(char *)((int)param_1 + 0x2d);
  }
  return;
}



void FUN_00784090(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x2d);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x2d);
  }
  return;
}



void FUN_007840b0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  if (*in_ECX == 0) {
    FUN_00984d5e();
  }
  piVar2 = (int *)in_ECX[1];
  if (*(char *)((int)piVar2 + 0x2d) == '\0') {
    iVar3 = *piVar2;
    if (*(char *)(iVar3 + 0x2d) == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x2d);
      iVar4 = *(int *)(iVar3 + 8);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0x2d);
        iVar3 = iVar4;
        iVar4 = *(int *)(iVar4 + 8);
      }
      in_ECX[1] = iVar3;
      return;
    }
    piVar2 = (int *)piVar2[1];
    cVar1 = *(char *)((int)piVar2 + 0x2d);
    while ((cVar1 == '\0' && (in_ECX[1] == *piVar2))) {
      in_ECX[1] = (int)piVar2;
      piVar2 = (int *)piVar2[1];
      cVar1 = *(char *)((int)piVar2 + 0x2d);
    }
    if (*(char *)(in_ECX[1] + 0x2d) != '\0') {
      FUN_00984d5e();
      return;
    }
    in_ECX[1] = (int)piVar2;
  }
  else {
    iVar3 = piVar2[2];
    in_ECX[1] = iVar3;
    if (*(char *)(iVar3 + 0x2d) != '\0') {
      FUN_00984d5e();
      return;
    }
  }
  return;
}



void FUN_00784140(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    param_1[4] = param_3[4];
    param_1[5] = param_3[5];
  }
  return;
}



void FUN_00784180(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    param_3[4] = param_1[4];
    param_3[5] = param_1[5];
    param_3 = param_3 + 6;
  }
  return;
}



void FUN_007841c0(int param_1,int param_2,int param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -0x18) {
    *(undefined4 *)(param_3 + -0x18) = *(undefined4 *)(param_2 + -0x18);
    *(undefined4 *)(param_3 + -0x14) = *(undefined4 *)(param_2 + -0x14);
    *(undefined4 *)(param_3 + -0x10) = *(undefined4 *)(param_2 + -0x10);
    *(undefined4 *)(param_3 + -0xc) = *(undefined4 *)(param_2 + -0xc);
    *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
    *(undefined4 *)(param_3 + -4) = *(undefined4 *)(param_2 + -4);
    param_3 = param_3 + -0x18;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00784210(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *in_ECX;
  int *unaff_FS_OFFSET;
  float10 extraout_ST0;
  float10 fVar9;
  float local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009caebe;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = 0.0;
  if ((in_ECX[0x10] != 0.0) && (((int)in_ECX[0x11] - (int)in_ECX[0x10]) / 0x18 == 500)) {
    iVar6 = FUN_009828c0(uVar5);
    if (iVar6 == 499) {
      iVar6 = FUN_00784000(499);
      fVar1 = *(float *)(iVar6 + 4);
    }
    else {
      iVar7 = FUN_00784000(iVar6 + 1);
      iVar8 = FUN_00784000(iVar6);
      fVar1 = *(float *)(iVar8 + 4) +
              (float)((extraout_ST0 - (float10)iVar6 * (float10)0.0020040080416947603) /
                     (float10)0.0020040080416947603) *
              (*(float *)(iVar7 + 4) - *(float *)(iVar8 + 4));
    }
    fVar2 = in_ECX[1];
    fVar3 = *in_ECX;
    fVar4 = *in_ECX;
    if ((_DAT_00b42960 & 1) == 0) {
      _DAT_00b42960 = _DAT_00b42960 | 1;
      local_4 = 0;
      FUN_0078eaf0();
      _atexit(FUN_00a26e10);
      local_4 = 0xffffffff;
    }
    fVar9 = (float10)FUN_0078ea00(-in_ECX[2],in_ECX[2]);
    local_10 = (float)(fVar9 + (float10)((fVar2 - fVar3) * fVar1 + fVar4));
  }
  *unaff_FS_OFFSET = local_c;
  return (float10)local_10;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00784370(void)

{
  float fVar1;
  uint uVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar3;
  float local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009caeee;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = 0.0;
  if ((*(int *)(in_ECX + 0x40) != 0) &&
     ((*(int *)(in_ECX + 0x44) - *(int *)(in_ECX + 0x40)) / 0x18 == 500)) {
    uVar2 = FUN_009828c0(uVar2);
    if ((*(int *)(in_ECX + 0x40) == 0) ||
       ((uint)((*(int *)(in_ECX + 0x44) - *(int *)(in_ECX + 0x40)) / 0x18) <= uVar2)) {
      FUN_00984d5e();
    }
    fVar1 = *(float *)(*(int *)(in_ECX + 0x40) + 4 + uVar2 * 0x18);
    if ((_DAT_00b42968 & 1) == 0) {
      _DAT_00b42968 = _DAT_00b42968 | 1;
      local_4 = 0;
      FUN_0078eaf0();
      _atexit(FUN_00a26e20);
      local_4 = 0xffffffff;
    }
    fVar3 = (float10)FUN_0078ea00(-*(float *)(in_ECX + 8) * fVar1,fVar1 * *(float *)(in_ECX + 8));
    local_10 = (float)fVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return (float10)local_10;
}



undefined4 * FUN_007844a0(undefined4 *param_1,float param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int in_ECX;
  int iVar10;
  int *unaff_FS_OFFSET;
  float10 extraout_ST0;
  float10 fVar11;
  float10 extraout_ST1;
  float fVar12;
  uint local_40;
  int local_3c;
  undefined1 local_24 [24];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009caf29;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffb0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_0078e570(2);
  local_4 = 0;
  if ((*(int *)(in_ECX + 0x10) != 0) &&
     (iVar1 = (*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10)) / 0x18, 1 < iVar1)) {
    if (param_2 < 0.0) {
      param_2 = 0.0;
    }
    if (1.0 < param_2) {
      param_2 = 1.0;
    }
    param_2 = (float)(int)(iVar1 - 1U) * param_2;
    iVar4 = FUN_009828c0(uVar3);
    bVar2 = false;
    local_40 = 0;
    if (0 < iVar1) {
      local_3c = 0;
      iVar10 = 2;
      fVar11 = extraout_ST1;
      do {
        if (bVar2) break;
        if (local_40 == iVar1 - 1U) {
          if ((*(int *)(in_ECX + 0x10) == 0) ||
             ((uint)((*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10)) / 0x18) <= local_40)) {
            FUN_00984d5e();
            fVar11 = (float10)param_2;
          }
          puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x10) + local_3c);
          *param_1 = *puVar5;
          param_1[1] = puVar5[1];
          param_1[2] = puVar5[2];
          param_1[3] = puVar5[3];
          param_1[4] = puVar5[4];
          param_1[5] = puVar5[5];
LAB_00784691:
          bVar2 = true;
        }
        else if (((float10)(int)local_40 < fVar11 != ((float10)(int)local_40 == fVar11)) &&
                (fVar11 < (float10)(int)(local_40 + 1))) {
          fVar12 = (float)(extraout_ST0 - (float10)iVar4);
          uVar6 = FUN_00784000(iVar10 + 1);
          uVar7 = FUN_00784000(iVar10);
          uVar8 = FUN_00784000(iVar10 + -1);
          uVar9 = FUN_00784000(iVar10 + -2);
          puVar5 = (undefined4 *)FUN_00783e70(local_24,uVar9,uVar8,uVar7,uVar6,fVar12);
          *param_1 = *puVar5;
          param_1[1] = puVar5[1];
          param_1[2] = puVar5[2];
          param_1[3] = puVar5[3];
          param_1[4] = puVar5[4];
          param_1[5] = puVar5[5];
          FUN_0060d0a0();
          fVar11 = (float10)param_2;
          goto LAB_00784691;
        }
        local_3c = local_3c + 0x18;
        local_40 = local_40 + 1;
        iVar10 = iVar10 + 3;
      } while ((int)local_40 < iVar1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_007846d0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  
  if (*in_ECX == 0) {
    FUN_00984d5e();
  }
  iVar2 = in_ECX[1];
  if (*(char *)(iVar2 + 0x2d) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x2d) != '\0') {
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x2d);
      while ((cVar1 == '\0' && (in_ECX[1] == *(int *)(iVar2 + 8)))) {
        in_ECX[1] = iVar2;
        iVar2 = *(int *)(iVar2 + 4);
        cVar1 = *(char *)(iVar2 + 0x2d);
      }
      in_ECX[1] = iVar2;
      return;
    }
    cVar1 = *(char *)(*piVar3 + 0x2d);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x2d);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    in_ECX[1] = (int)piVar3;
    return;
  }
  FUN_00984d5e();
  return;
}



void FUN_00784740(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x2d) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *(int *)(*(int *)(in_ECX + 4) + 4)) {
    *(int **)(*(int *)(in_ECX + 4) + 4) = piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int **)(param_1 + 4) = piVar1;
  return;
}



void FUN_00784790(int *param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x2d) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
    *(int *)(*(int *)(in_ECX + 4) + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}



void FUN_007847f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
    }
    param_3 = param_3 + 6;
  }
  return;
}



void FUN_00784840(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00401f00(0x30);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0xb) = 1;
  *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  return;
}



int FUN_00784880(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_00784180(param_1,param_2,param_3,param_3,local_4,local_8);
  return param_3 + ((param_2 - param_1) / 0x18) * 0x18;
}



void FUN_007848e0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      param_1[4] = param_3[4];
      param_1[5] = param_3[5];
    }
    param_1 = param_1 + 6;
  }
  return;
}



undefined4 * FUN_00784930(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int in_ECX;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *local_4;
  
  local_4 = *(undefined4 **)(in_ECX + 4);
  if (*(char *)((int)local_4[1] + 0x2d) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = *(uint *)(param_1 + 0x14);
    puVar7 = (undefined4 *)local_4[1];
    do {
      piVar6 = (int *)(param_1 + 4);
      if (0xf < uVar1) {
        piVar6 = (int *)*(int *)(param_1 + 4);
      }
      uVar3 = puVar7[8];
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = uVar2;
      }
      if ((uint)puVar7[9] < 0x10) {
        puVar4 = puVar7 + 4;
      }
      else {
        puVar4 = (undefined4 *)puVar7[4];
      }
      uVar5 = FUN_006f5cb0(puVar4,piVar6,uVar5);
      if (uVar5 == 0) {
        if (uVar2 <= uVar3) {
          uVar5 = (uint)(uVar3 != uVar2);
          goto LAB_0078499d;
        }
LAB_0078499f:
        puVar4 = (undefined4 *)puVar7[2];
      }
      else {
LAB_0078499d:
        if ((int)uVar5 < 0) goto LAB_0078499f;
        puVar4 = (undefined4 *)*puVar7;
        local_4 = puVar7;
      }
      puVar7 = puVar4;
    } while (*(char *)((int)puVar4 + 0x2d) == '\0');
  }
  return local_4;
}



void FUN_007849c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_007847f0(param_1,param_2,param_3);
  return;
}



void FUN_007849f0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    FUN_0060d0a0();
  }
  return;
}



void FUN_00784a20(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 != 0) {
    iVar1 = *(int *)(in_ECX + 8);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
      FUN_0060d0a0();
    }
    FUN_00401f20(*(undefined4 *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}



void FUN_00784a70(void)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  undefined1 local_8 [8];
  
  uVar1 = *(uint *)(in_ECX + 8);
  if (uVar1 < *(uint *)(in_ECX + 4)) {
    FUN_00984d5e();
  }
  uVar2 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar2) {
    FUN_00984d5e();
  }
  FUN_00439050(local_8,in_ECX,uVar2,in_ECX,uVar1);
  return;
}



void FUN_00784ac0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00984d5e();
  }
  if (param_3 != param_5) {
    iVar2 = FUN_00784880(param_5,*(undefined4 *)(in_ECX + 8),param_3);
    iVar1 = *(int *)(in_ECX + 8);
    for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x18) {
      FUN_0060d0a0();
    }
    *(int *)(in_ECX + 8) = iVar2;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



undefined4 * FUN_00784b30(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return param_1 + param_2;
}



void FUN_00784b60(void)

{
  uint uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009caf7c;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 3;
  FUN_00784a20(uVar1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00784a20();
  if (*(int *)(in_ECX + 0x30) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x30));
  }
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_00784a20(uVar1);
  local_4 = 0xffffffff;
  FUN_00784a20();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00784bf0(void)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  undefined1 local_8 [8];
  
  uVar1 = *(uint *)(in_ECX + 8);
  if (uVar1 < *(uint *)(in_ECX + 4)) {
    FUN_00984d5e();
  }
  uVar2 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar2) {
    FUN_00984d5e();
  }
  FUN_00784ac0(local_8,in_ECX,uVar2,in_ECX,uVar1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00784d4b) */
/* WARNING: Removing unreachable block (ram,0x00784d5c) */
/* WARNING: Removing unreachable block (ram,0x00784d65) */
/* WARNING: Removing unreachable block (ram,0x00784d68) */
/* WARNING: Removing unreachable block (ram,0x00784d58) */
/* WARNING: Removing unreachable block (ram,0x00784d76) */
/* WARNING: Removing unreachable block (ram,0x00784d83) */
/* WARNING: Removing unreachable block (ram,0x00784d8e) */
/* WARNING: Removing unreachable block (ram,0x00784d8a) */
/* WARNING: Removing unreachable block (ram,0x00784d7e) */
/* WARNING: Removing unreachable block (ram,0x00784d91) */

void FUN_00784c30(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int in_ECX;
  int *piVar7;
  int *unaff_FS_OFFSET;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cafa8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff9c;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(char *)((int)param_3 + 0x2d) != '\0') {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_00414500("invalid map/set<T> iterator",0x1b);
    local_4 = 0;
    FUN_004146e0(local_50);
    local_34[0] = &PTR_FUN_00a8ba0c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00af35a4);
  }
  FUN_007846d0(uVar3);
  piVar7 = (int *)*param_3;
  if (*(char *)((int)piVar7 + 0x2d) == '\0') {
    if (*(char *)(param_3[2] + 0x2d) == '\0') {
      piVar7 = (int *)param_3[2];
    }
  }
  else {
    piVar7 = (int *)param_3[2];
  }
  piVar6 = (int *)param_3[1];
  if (*(char *)((int)piVar7 + 0x2d) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*(int **)(*(int *)(in_ECX + 4) + 4) == param_3) {
    *(int **)(*(int *)(in_ECX + 4) + 4) = piVar7;
  }
  else if ((int *)*piVar6 == param_3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  puVar1 = *(undefined4 **)(in_ECX + 4);
  if ((int *)*puVar1 == param_3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x2d) == '\0') {
      piVar4 = (int *)FUN_00784070(piVar7);
    }
    *puVar1 = piVar4;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if (*(int **)(iVar2 + 8) == param_3) {
    if (*(char *)((int)piVar7 + 0x2d) == '\0') {
      uVar5 = FUN_00784090(piVar7);
      *(undefined4 *)(iVar2 + 8) = uVar5;
    }
    else {
      *(int **)(iVar2 + 8) = piVar6;
    }
  }
  if ((char)param_3[0xb] == '\x01') {
    if (piVar7 != *(int **)(*(int *)(in_ECX + 4) + 4)) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0xb] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[0xb] == '\0') {
            *(undefined1 *)(piVar6 + 0xb) = 1;
            *(undefined1 *)(piVar4 + 0xb) = 0;
            FUN_00784740(piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x2d) == '\0') {
            if ((*(char *)(*piVar6 + 0x2c) != '\x01') || (*(char *)(piVar6[2] + 0x2c) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x2c) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x2c) = 1;
                *(undefined1 *)(piVar6 + 0xb) = 0;
                FUN_00784790(piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 0xb) = (char)piVar4[0xb];
              *(undefined1 *)(piVar4 + 0xb) = 1;
              *(undefined1 *)(piVar6[2] + 0x2c) = 1;
              FUN_00784740(piVar4);
              break;
            }
LAB_00784e64:
            *(undefined1 *)(piVar6 + 0xb) = 0;
          }
        }
        else {
          if ((char)piVar6[0xb] == '\0') {
            *(undefined1 *)(piVar6 + 0xb) = 1;
            *(undefined1 *)(piVar4 + 0xb) = 0;
            FUN_00784790(piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x2d) == '\0') {
            if ((*(char *)(piVar6[2] + 0x2c) == '\x01') && (*(char *)(*piVar6 + 0x2c) == '\x01'))
            goto LAB_00784e64;
            if (*(char *)(*piVar6 + 0x2c) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x2c) = 1;
              *(undefined1 *)(piVar6 + 0xb) = 0;
              FUN_00784740(piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 0xb) = (char)piVar4[0xb];
            *(undefined1 *)(piVar4 + 0xb) = 1;
            *(undefined1 *)(*piVar6 + 0x2c) = 1;
            FUN_00784790(piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *(int **)(*(int *)(in_ECX + 4) + 4));
    }
    *(undefined1 *)(piVar7 + 0xb) = 1;
  }
  if (0xf < (uint)param_3[9]) {
    FUN_00401f20(param_3[4]);
  }
  param_3[9] = 0xf;
  param_3[8] = 0;
  *(undefined1 *)(param_3 + 4) = 0;
  FUN_00401f20(param_3);
  if (*(int *)(in_ECX + 8) != 0) {
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + -1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00784f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined1 param_5)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = param_2;
  *in_ECX = param_1;
  in_ECX[2] = param_3;
  in_ECX[9] = 0xf;
  in_ECX[8] = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  FUN_00414420(param_4,0,0xffffffff);
  in_ECX[10] = *(undefined4 *)(param_4 + 0x1c);
  *(undefined1 *)(in_ECX + 0xb) = param_5;
  *(undefined1 *)((int)in_ECX + 0x2d) = 0;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00784fc1) */

undefined4 FUN_00784fa0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (param_1 != 0) {
    iVar1 = FUN_00401f00(param_1 * 0x18);
    *(int *)(in_ECX + 0xc) = param_1 * 0x18 + iVar1;
    *(int *)(in_ECX + 4) = iVar1;
    *(int *)(in_ECX + 8) = iVar1;
    return 1;
  }
  return 0;
}



void FUN_00784ff0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x2d);
  while (cVar1 == '\0') {
    FUN_00784ff0(param_1[2]);
    piVar2 = (int *)*param_1;
    if (0xf < (uint)param_1[9]) {
      FUN_00401f20(param_1[4]);
    }
    param_1[9] = 0xf;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    FUN_00401f20(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x2d);
  }
  return;
}



void FUN_00785050(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  uint extraout_ECX;
  int *unaff_FS_OFFSET;
  uint uStack_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cafd8;
  local_10 = *unaff_FS_OFFSET;
  uStack_48 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  *unaff_FS_OFFSET = (int)&local_10;
  local_38 = *param_4;
  local_34 = param_4[1];
  local_30 = param_4[2];
  local_2c = param_4[3];
  local_28 = param_4[4];
  local_24 = param_4[5];
  iVar3 = *(int *)(in_ECX + 4);
  uVar6 = 0;
  local_8 = 0;
  if (iVar3 != 0) {
    uVar6 = (*(int *)(in_ECX + 0xc) - iVar3) / 0x18;
  }
  puVar1 = &uStack_48;
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar3) / 0x18;
    }
    puVar1 = &uStack_48;
    if (-iVar2 - 1U < param_3) {
      FUN_00790b90();
      uVar6 = extraout_ECX;
      puVar1 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar3) / 0x18;
    }
    if (uVar6 < iVar2 + param_3) {
      if (-(uVar6 >> 1) - 1 < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_ECX + 8) - iVar3) / 0x18;
      }
      if (uVar6 < iVar3 + param_3) {
        iVar3 = FUN_00783fe0();
        uVar6 = iVar3 + param_3;
      }
      local_20 = uVar6 * 0x18;
      iVar4 = FUN_00401f00(local_20);
      local_1c = local_1c & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,1);
      uVar5 = FUN_007847f0(*(undefined4 *)(in_ECX + 4),param_2,iVar4);
      uVar5 = FUN_00790a70(uVar5,param_3,&local_38);
      FUN_007847f0(param_2,*(undefined4 *)(in_ECX + 8),uVar5);
      iVar3 = *(int *)(in_ECX + 4);
      iVar2 = 0;
      local_8 = 0;
      if (iVar3 != 0) {
        iVar2 = (*(int *)(in_ECX + 8) - iVar3) / 0x18;
      }
      if (iVar3 != 0) {
        FUN_007849f0(iVar3,*(undefined4 *)(in_ECX + 8));
        FUN_00401f20(*(undefined4 *)(in_ECX + 4));
      }
      *(int *)(in_ECX + 0xc) = local_20 + iVar4;
      *(uint *)(in_ECX + 8) = iVar4 + (param_3 + iVar2) * 0x18;
      *(int *)(in_ECX + 4) = iVar4;
      puVar1 = (uint *)local_14;
    }
    else {
      iVar3 = *(int *)(in_ECX + 8);
      if ((uint)((iVar3 - param_2) / 0x18) < param_3) {
        FUN_007849c0(param_2,iVar3,param_3 * 0x18 + param_2);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00790a70(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2) / 0x18,
                     &local_38);
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x18;
        FUN_00784140(param_2,*(int *)(in_ECX + 8) + param_3 * -0x18,&local_38);
        puVar1 = (uint *)local_14;
      }
      else {
        iVar2 = iVar3 + param_3 * -0x18;
        uVar5 = FUN_007849c0(iVar2,iVar3,iVar3);
        *(undefined4 *)(in_ECX + 8) = uVar5;
        FUN_007905a0(param_2,iVar2,iVar3);
        FUN_00784140(param_2,param_3 * 0x18 + param_2,&local_38);
        puVar1 = (uint *)local_14;
      }
    }
  }
  local_14 = (undefined1 *)puVar1;
  local_8 = 0xffffffff;
  FUN_0060d0a0();
  *unaff_FS_OFFSET = local_10;
  return;
}



int FUN_00785360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009cb011;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  iVar1 = FUN_00401f00(0x30);
  local_8 = 1;
  if (iVar1 != 0) {
    FUN_00784f20(param_1,param_2,param_3,param_4,param_5);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}



void FUN_00785400(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar6 = *(int *)(param_1 + 8) - iVar1;
    iVar2 = iVar6 >> 0x1f;
    iVar6 = iVar6 / 0x18 + iVar2;
    uVar7 = iVar6 - iVar2;
    if (iVar6 != iVar2) {
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(int *)(in_ECX + 8) - iVar2) / 0x18;
      }
      if (uVar7 <= uVar4) {
        uVar5 = FUN_00784880(iVar1,*(undefined4 *)(param_1 + 8),iVar2);
        FUN_007849f0(uVar5,*(undefined4 *)(in_ECX + 8));
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             *(int *)(in_ECX + 4) + ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18) * 0x18;
        return;
      }
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(int *)(in_ECX + 0xc) - iVar2) / 0x18;
      }
      if (uVar4 < uVar7) {
        if (iVar2 != 0) {
          FUN_007849f0(iVar2,*(undefined4 *)(in_ECX + 8));
          FUN_00401f20(*(undefined4 *)(in_ECX + 4));
        }
        uVar5 = FUN_00783fe0();
        cVar3 = FUN_00784fa0(uVar5);
        if (cVar3 == '\0') {
          return;
        }
        uVar5 = FUN_007849c0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                             *(undefined4 *)(in_ECX + 4));
        *(undefined4 *)(in_ECX + 8) = uVar5;
        return;
      }
      iVar6 = FUN_00783fe0();
      iVar6 = iVar1 + iVar6 * 0x18;
      FUN_00784880(iVar1,iVar6,iVar2);
      uVar5 = FUN_007849c0(iVar6,*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_ECX + 8));
      *(undefined4 *)(in_ECX + 8) = uVar5;
      return;
    }
  }
  FUN_00784bf0();
  return;
}



void FUN_00785580(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    uVar7 = *(int *)(param_1 + 8) - iVar4 >> 2;
    if (uVar7 != 0) {
      iVar1 = *(int *)(in_ECX + 4);
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(in_ECX + 8) - iVar1 >> 2;
      }
      if (uVar7 <= uVar5) {
        FUN_00790420(iVar4,*(int *)(param_1 + 8),iVar1);
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             *(int *)(in_ECX + 4) + (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) * 4;
        return;
      }
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(in_ECX + 0xc) - iVar1 >> 2;
      }
      if (uVar5 < uVar7) {
        if (iVar1 != 0) {
          FUN_00401f20(iVar1);
        }
        if (*(int *)(param_1 + 4) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
        }
        cVar2 = FUN_00795000(iVar4);
        if (cVar2 == '\0') {
          return;
        }
        uVar3 = FUN_007a25c0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                             *(undefined4 *)(in_ECX + 4));
        *(undefined4 *)(in_ECX + 8) = uVar3;
        return;
      }
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(in_ECX + 8) - iVar1 >> 2;
      }
      iVar6 = iVar4 + iVar6 * 4;
      FUN_00790420(iVar4,iVar6,iVar1);
      uVar3 = FUN_007a25c0(iVar6,*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_ECX + 8));
      *(undefined4 *)(in_ECX + 8) = uVar3;
      return;
    }
  }
  FUN_00784a70();
  return;
}



void FUN_007856b0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 local_14 [4];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cb038;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar2 = *(uint *)(in_ECX + 4);
  iVar5 = 0;
  local_4 = 0;
  if (uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (int)(*(int *)(in_ECX + 8) - uVar2) / 0x18;
  }
  if (uVar4 < param_1) {
    if (uVar2 != 0) {
      iVar5 = (int)(*(int *)(in_ECX + 8) - uVar2) / 0x18;
    }
    uVar4 = *(uint *)(in_ECX + 8);
    if (uVar4 < uVar2) {
      FUN_00984d5e(uVar3);
    }
    FUN_00785050(in_ECX,uVar4,param_1 - iVar5,&stack0x00000008);
  }
  else if (uVar2 != 0) {
    uVar4 = *(uint *)(in_ECX + 8);
    if (param_1 < (uint)((int)(uVar4 - uVar2) / 0x18)) {
      if (uVar4 < uVar2) {
        FUN_00984d5e(uVar3);
      }
      uVar2 = *(uint *)(in_ECX + 4);
      if (*(uint *)(in_ECX + 8) < uVar2) {
        FUN_00984d5e(uVar3);
      }
      uVar1 = uVar2 + param_1 * 0x18;
      local_10 = uVar2;
      if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
        FUN_00984d5e(uVar3);
      }
      FUN_00784ac0(local_14,in_ECX,uVar1,in_ECX,uVar4);
    }
  }
  local_4 = 0xffffffff;
  FUN_0060d0a0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007857d0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(in_ECX + 4);
  if (uVar1 != 0) {
    iVar2 = *(uint *)(in_ECX + 8) - uVar1;
    iVar3 = iVar2 >> 0x1f;
    if (iVar2 / 0x18 + iVar3 != iVar3) {
      if (*(uint *)(in_ECX + 8) < uVar1) {
        FUN_00984d5e();
      }
      if ((param_2 == 0) || (param_2 != in_ECX)) {
        FUN_00984d5e();
      }
      iVar3 = (int)(param_3 - uVar1) / 0x18;
      goto LAB_00785833;
    }
  }
  iVar3 = 0;
LAB_00785833:
  FUN_00785050(param_2,param_3,1,param_4);
  uVar1 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar1) {
    FUN_00984d5e();
  }
  uVar1 = uVar1 + iVar3 * 0x18;
  if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
    FUN_00984d5e();
  }
  param_1[1] = uVar1;
  *param_1 = in_ECX;
  return;
}



void FUN_00785880(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 == 0) || ((int)(*(uint *)(in_ECX + 8) - uVar1) >> 2 == 0)) {
    iVar2 = 0;
  }
  else {
    if (*(uint *)(in_ECX + 8) < uVar1) {
      FUN_00984d5e();
    }
    if ((param_2 == 0) || (param_2 != in_ECX)) {
      FUN_00984d5e();
    }
    iVar2 = (int)(param_3 - uVar1) >> 2;
  }
  FUN_00526fa0(param_2,param_3,1,param_4);
  uVar1 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar1) {
    FUN_00984d5e();
  }
  uVar1 = uVar1 + iVar2 * 4;
  if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
    FUN_00984d5e();
  }
  param_1[1] = uVar1;
  *param_1 = in_ECX;
  return;
}



void FUN_00785910(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int in_ECX;
  undefined1 local_8 [8];
  
  iVar1 = **(int **)(in_ECX + 4);
  if ((param_2 == 0) || (param_2 != in_ECX)) {
    FUN_00984d5e();
  }
  if (param_3 == iVar1) {
    iVar1 = *(int *)(in_ECX + 4);
    if ((param_4 == 0) || (param_4 != in_ECX)) {
      FUN_00984d5e();
    }
    if (param_5 == iVar1) {
      FUN_00784ff0(*(undefined4 *)(*(int *)(in_ECX + 4) + 4));
      *(int *)(*(int *)(in_ECX + 4) + 4) = *(int *)(in_ECX + 4);
      *(undefined4 *)(in_ECX + 8) = 0;
      *(undefined4 *)*(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 4);
      *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
      iVar1 = **(int **)(in_ECX + 4);
      *param_1 = in_ECX;
      param_1[1] = iVar1;
      return;
    }
  }
  while( true ) {
    if ((param_2 == 0) || (param_2 != param_4)) {
      FUN_00984d5e();
    }
    if (param_3 == param_5) break;
    FUN_007846d0();
    FUN_00784c30(local_8,param_2,param_3);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



void FUN_007859e0(int *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int in_ECX;
  int *piVar7;
  int *unaff_FS_OFFSET;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cbd08;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  if (0x7fffffd < *(uint *)(in_ECX + 8)) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_00414500("map/set<T> too long",0x13);
    local_4 = 0;
    FUN_004146e0(local_50);
    local_34[0] = &PTR_FUN_00a370b8;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00ad9930);
  }
  piVar5 = (int *)FUN_00785360(*(undefined4 *)(in_ECX + 4),param_3,*(undefined4 *)(in_ECX + 4),
                               param_4,0);
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
  if (param_3 == *(undefined4 **)(in_ECX + 4)) {
    (*(undefined4 **)(in_ECX + 4))[1] = piVar5;
    **(undefined4 **)(in_ECX + 4) = piVar5;
    *(int **)(*(int *)(in_ECX + 4) + 8) = piVar5;
  }
  else if (param_2 == '\0') {
    param_3[2] = piVar5;
    if (param_3 == *(undefined4 **)(*(int *)(in_ECX + 4) + 8)) {
      *(int **)(*(int *)(in_ECX + 4) + 8) = piVar5;
    }
  }
  else {
    *param_3 = piVar5;
    if (param_3 == (undefined4 *)**(int **)(in_ECX + 4)) {
      **(int **)(in_ECX + 4) = (int)piVar5;
    }
  }
  cVar1 = *(char *)(piVar5[1] + 0x2c);
  piVar7 = piVar5;
  while (cVar1 == '\0') {
    piVar6 = piVar7 + 1;
    piVar2 = (int *)*piVar6;
    piVar3 = (int *)piVar2[1];
    if (piVar2 == (int *)*piVar3) {
      iVar4 = piVar3[2];
      if (*(char *)(iVar4 + 0x2c) == '\0') {
        *(undefined1 *)(piVar2 + 0xb) = 1;
        *(undefined1 *)(iVar4 + 0x2c) = 1;
        *(undefined1 *)(*(int *)(*piVar6 + 4) + 0x2c) = 0;
        piVar7 = *(int **)(*piVar6 + 4);
      }
      else {
        if (piVar7 == (int *)piVar2[2]) {
          FUN_00784740(piVar2);
          piVar7 = piVar2;
        }
        *(undefined1 *)(piVar7[1] + 0x2c) = 1;
        *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x2c) = 0;
        FUN_00784790(*(undefined4 *)(piVar7[1] + 4));
      }
    }
    else {
      iVar4 = *piVar3;
      if (*(char *)(iVar4 + 0x2c) == '\0') {
        *(undefined1 *)(piVar2 + 0xb) = 1;
        *(undefined1 *)(iVar4 + 0x2c) = 1;
        *(undefined1 *)(*(int *)(*piVar6 + 4) + 0x2c) = 0;
        piVar7 = *(int **)(*piVar6 + 4);
      }
      else {
        if (piVar7 == (int *)*piVar2) {
          FUN_00784790(piVar2);
          piVar7 = piVar2;
        }
        *(undefined1 *)(piVar7[1] + 0x2c) = 1;
        *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x2c) = 0;
        iVar4 = *(int *)(piVar7[1] + 4);
        piVar2 = *(int **)(iVar4 + 8);
        *(int *)(iVar4 + 8) = *piVar2;
        if (*(char *)(*piVar2 + 0x2d) == '\0') {
          *(int *)(*piVar2 + 4) = iVar4;
        }
        piVar2[1] = *(int *)(iVar4 + 4);
        if (iVar4 == *(int *)(*(int *)(in_ECX + 4) + 4)) {
          *(int **)(*(int *)(in_ECX + 4) + 4) = piVar2;
        }
        else {
          piVar3 = *(int **)(iVar4 + 4);
          if (iVar4 == *piVar3) {
            *piVar3 = (int)piVar2;
          }
          else {
            piVar3[2] = (int)piVar2;
          }
        }
        *piVar2 = iVar4;
        *(int **)(iVar4 + 4) = piVar2;
      }
    }
    cVar1 = *(char *)(piVar7[1] + 0x2c);
  }
  *(undefined1 *)(*(int *)(*(int *)(in_ECX + 4) + 4) + 0x2c) = 1;
  param_1[1] = (int)piVar5;
  *param_1 = in_ECX;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00785be0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_c [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_c;
  *in_ECX = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[1] = 0x3f800000;
  in_ECX[6] = 0;
  in_ECX[2] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void FUN_00785c50(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  FUN_00785400(param_1 + 3);
  FUN_00785400(param_1 + 7);
  FUN_00785580(param_1 + 0xb);
  FUN_00785400(param_1 + 0xf);
  FUN_00785400(param_1 + 0x13);
  return;
}



void FUN_00785cb0(undefined4 param_1)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cb0e7;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  local_4 = 4;
  FUN_00785c50(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00785d62) */
/* WARNING: Removing unreachable block (ram,0x00785d6f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00785d30(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*DAT_00b42970;
  while (piVar1 != DAT_00b42970) {
    if (piVar1 == DAT_00b42970) {
      FUN_00984d5e();
    }
    iVar2 = piVar1[10];
    if (iVar2 != 0) {
      FUN_00784b60();
      FUN_00401f20(iVar2);
    }
    if (piVar1 == DAT_00b42970) {
      FUN_00984d5e();
    }
    piVar1[10] = 0;
    FUN_007846d0();
  }
  FUN_00784ff0(DAT_00b42970[1]);
  DAT_00b42970[1] = (int)DAT_00b42970;
  _DAT_00b42974 = 0;
  *DAT_00b42970 = (int)DAT_00b42970;
  DAT_00b42970[2] = (int)DAT_00b42970;
  return;
}



void FUN_00785e00(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cb118;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_0078e550(uVar1);
  local_4 = 0;
  FUN_007856b0(param_1,*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4],puVar2[5]);
  local_4 = 0xffffffff;
  FUN_0060d0a0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00785e90(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint local_8 [2];
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)(in_ECX + 8) - uVar1) / 0x18) <
      (uint)((int)(*(int *)(in_ECX + 0xc) - uVar1) / 0x18))) {
    iVar2 = *(int *)(in_ECX + 8);
    local_8[0] = local_8[0] & 0xffffff00;
    FUN_007848e0(iVar2,1,param_1);
    *(int *)(in_ECX + 8) = iVar2 + 0x18;
    return;
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (uVar3 < uVar1) {
    FUN_00984d5e();
  }
  FUN_007857d0(local_8,in_ECX,uVar3,param_1);
  return;
}



void FUN_00785f30(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int in_ECX;
  undefined1 local_8 [8];
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)(in_ECX + 8) - uVar1) >> 2) <
      (uint)((int)(*(int *)(in_ECX + 0xc) - uVar1) >> 2))) {
    puVar2 = *(undefined4 **)(in_ECX + 8);
    *puVar2 = *param_1;
    *(undefined4 **)(in_ECX + 8) = puVar2 + 1;
    return;
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (uVar3 < uVar1) {
    FUN_00984d5e();
  }
  FUN_00785880(local_8,in_ECX,uVar3,param_1);
  return;
}



void FUN_00785fa0(int *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int in_ECX;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  int local_8;
  undefined4 *local_4;
  
  puVar2 = (undefined4 *)(*(undefined4 **)(in_ECX + 4))[1];
  bVar10 = true;
  cVar1 = *(char *)((int)puVar2 + 0x2d);
  puVar8 = *(undefined4 **)(in_ECX + 4);
  local_8 = in_ECX;
  while (cVar1 == '\0') {
    uVar3 = puVar2[8];
    if ((uint)puVar2[9] < 0x10) {
      puVar8 = puVar2 + 4;
    }
    else {
      puVar8 = (undefined4 *)puVar2[4];
    }
    uVar4 = *(uint *)(param_2 + 0x14);
    uVar5 = uVar4;
    if (uVar3 <= uVar4) {
      uVar5 = uVar3;
    }
    if (*(uint *)(param_2 + 0x18) < 0x10) {
      iVar7 = param_2 + 4;
    }
    else {
      iVar7 = *(int *)(param_2 + 4);
    }
    uVar5 = FUN_006f5cb0(iVar7,puVar8,uVar5);
    if (uVar5 == 0) {
      if (uVar4 < uVar3) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(uVar4 != uVar3);
      }
    }
    bVar10 = (int)uVar5 < 0;
    if (bVar10) {
      puVar9 = (undefined4 *)*puVar2;
    }
    else {
      puVar9 = (undefined4 *)puVar2[2];
    }
    puVar8 = puVar2;
    puVar2 = puVar9;
    cVar1 = *(char *)((int)puVar9 + 0x2d);
  }
  local_4 = puVar8;
  if (bVar10) {
    if (puVar8 == (undefined4 *)**(int **)(local_8 + 4)) {
      bVar10 = true;
      goto LAB_00786053;
    }
    FUN_007840b0();
  }
  puVar2 = local_4;
  if (*(uint *)(param_2 + 0x18) < 0x10) {
    iVar7 = param_2 + 4;
  }
  else {
    iVar7 = *(int *)(param_2 + 4);
  }
  iVar7 = FUN_006f5de0(0,local_4[8],iVar7,*(undefined4 *)(param_2 + 0x14));
  if (-1 < iVar7) {
    param_1[1] = (int)puVar2;
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = local_8;
    return;
  }
LAB_00786053:
  piVar6 = (int *)FUN_007859e0(&local_8,bVar10,puVar8,param_2);
  iVar7 = *piVar6;
  param_1[1] = piVar6[1];
  *(undefined1 *)(param_1 + 2) = 1;
  *param_1 = iVar7;
  return;
}



void FUN_007860d0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined1 local_6c [24];
  undefined1 local_54 [24];
  undefined1 local_3c [24];
  undefined1 local_24 [24];
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cb170;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff84;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0078e5a0(*param_1,param_1[1]);
  local_4 = 0;
  FUN_0078e5a0(*param_2,param_2[1]);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0078e6a0(uVar1);
  if ((*(int *)(in_ECX + 0x10) != 0) &&
     (iVar3 = *(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10), iVar4 = iVar3 >> 0x1f,
     iVar3 / 0x18 + iVar4 != iVar4)) {
    if (*(int *)(in_ECX + 0x10) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10)) / 0x18;
    }
    uVar1 = iVar4 - 1;
    if ((*(int *)(in_ECX + 0x30) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x34) - *(int *)(in_ECX + 0x30) >> 2) <= uVar1)) {
      FUN_00984d5e();
    }
    iVar4 = *(int *)(in_ECX + 0x30);
    if ((*(int *)(in_ECX + 0x20) == 0) ||
       ((uint)((*(int *)(in_ECX + 0x24) - *(int *)(in_ECX + 0x20)) / 0x18) <= uVar1)) {
      FUN_00984d5e();
    }
    uVar2 = FUN_0078e8a0(local_24,*(undefined4 *)(iVar4 + uVar1 * 4));
    local_4._0_1_ = 2;
    if ((*(int *)(in_ECX + 0x10) == 0) ||
       ((uint)((*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10)) / 0x18) <= uVar1)) {
      FUN_00984d5e();
    }
    uVar2 = FUN_0078e6e0(local_3c,uVar2);
    local_4._0_1_ = 3;
    FUN_00785e90(uVar2);
    local_4._0_1_ = 2;
    FUN_0060d0a0();
    local_4._0_1_ = 1;
    FUN_0060d0a0();
    uVar2 = FUN_0078e8a0(local_3c,param_3);
    local_4._0_1_ = 4;
    uVar2 = FUN_0078e7c0(local_24,uVar2);
    local_4._0_1_ = 5;
    FUN_00785e90(uVar2);
    local_4._0_1_ = 4;
    FUN_0060d0a0();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_0060d0a0();
  }
  FUN_00785e90(local_54);
  FUN_00785e90(local_54);
  FUN_00785e90(local_6c);
  FUN_00785f30(&param_3);
  local_4 = local_4 & 0xffffff00;
  FUN_0060d0a0();
  local_4 = 0xffffffff;
  FUN_0060d0a0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00786350(float *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int in_ECX;
  int iVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  int *unaff_FS_OFFSET;
  uint local_50;
  int local_44;
  float *local_3c [3];
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pfVar1 = param_1;
  puStack_8 = &LAB_009cb198;
  local_c = *unaff_FS_OFFSET;
  uVar8 = DAT_00b30aac ^ (uint)&stack0xffffff98;
  *unaff_FS_OFFSET = (int)&local_c;
  pfVar13 = (float *)0x0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_4 = 0;
  FUN_00785e00(param_1);
  if (param_1 != (float *)0x0) {
    fVar6 = (float)(int)param_1;
    if ((int)param_1 < 0) {
      fVar6 = fVar6 + 4.2949673e+09;
    }
    param_1 = (float *)0x0;
    do {
      fVar7 = (float)(int)pfVar13;
      if ((int)pfVar13 < 0) {
        fVar7 = fVar7 + 4.2949673e+09;
      }
      local_3c[0] = pfVar13;
      puVar9 = (undefined4 *)FUN_007844a0(&local_24,fVar7 / fVar6);
      if ((local_30 == 0) || ((float *)((local_2c - local_30) / 0x18) <= pfVar13)) {
        FUN_00984d5e(uVar8);
      }
      *(undefined4 *)((int)param_1 + local_30) = *puVar9;
      iVar10 = (int)param_1 + local_30;
      *(undefined4 *)(iVar10 + 4) = puVar9[1];
      *(undefined4 *)(iVar10 + 8) = puVar9[2];
      *(undefined4 *)(iVar10 + 0xc) = puVar9[3];
      *(undefined4 *)(iVar10 + 0x10) = puVar9[4];
      *(undefined4 *)(iVar10 + 0x14) = puVar9[5];
      FUN_0060d0a0();
      param_1 = (float *)((int)param_1 + 0x18);
      pfVar13 = (float *)((int)pfVar13 + 1);
    } while (pfVar13 < pfVar1);
  }
  uVar14 = *(uint *)(in_ECX + 0x44);
  if (uVar14 < *(uint *)(in_ECX + 0x40)) {
    FUN_00984d5e(uVar8);
  }
  uVar12 = *(uint *)(in_ECX + 0x40);
  if (*(uint *)(in_ECX + 0x44) < uVar12) {
    FUN_00984d5e(uVar8);
  }
  FUN_00784ac0(local_3c,in_ECX + 0x3c,uVar12,in_ECX + 0x3c,uVar14);
  FUN_00785e00(pfVar1);
  param_1 = (float *)0x0;
  if ((*(int *)(in_ECX + 0x10) == 0) ||
     (iVar11 = *(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10), iVar10 = iVar11 >> 0x1f,
     iVar11 / 0x18 + iVar10 == iVar10)) {
    FUN_00984d5e();
  }
  puVar9 = *(undefined4 **)(in_ECX + 0x10);
  if ((*(int *)(in_ECX + 0x40) == 0) ||
     (iVar11 = *(int *)(in_ECX + 0x44) - *(int *)(in_ECX + 0x40), iVar10 = iVar11 >> 0x1f,
     iVar11 / 0x18 + iVar10 == iVar10)) {
    FUN_00984d5e();
  }
  puVar5 = *(undefined4 **)(in_ECX + 0x40);
  *puVar5 = *puVar9;
  puVar5[1] = puVar9[1];
  puVar5[2] = puVar9[2];
  puVar5[3] = puVar9[3];
  puVar5[4] = puVar9[4];
  puVar5[5] = puVar9[5];
  uVar8 = (int)pfVar1 - 1;
  local_50 = 1;
  if (1 < uVar8) {
    local_3c[0] = pfVar1;
    fVar6 = (float)(int)pfVar1;
    if ((int)pfVar1 < 0) {
      fVar6 = fVar6 + 4.2949673e+09;
    }
    local_44 = 0x18;
    do {
      fVar7 = (float)(int)local_50;
      if ((int)local_50 < 0) {
        fVar7 = fVar7 + 4.2949673e+09;
      }
      fVar7 = fVar7 / fVar6;
      uVar14 = (uint)param_1;
      if (param_1 < uVar8) {
        iVar10 = (int)param_1 * 0x18;
        uVar12 = (uint)param_1;
        iVar11 = local_30;
        do {
          if ((iVar11 == 0) || ((uint)((local_2c - iVar11) / 0x18) <= uVar12)) {
            FUN_00984d5e();
            iVar11 = local_30;
          }
          if (*(float *)(iVar10 + iVar11) < fVar7 != (*(float *)(iVar10 + iVar11) == fVar7)) {
            if ((iVar11 == 0) || ((uint)((local_2c - iVar11) / 0x18) <= uVar12 + 1)) {
              FUN_00984d5e();
              iVar11 = local_30;
            }
            uVar14 = uVar12;
            if (fVar7 < *(float *)(iVar10 + 0x18 + iVar11)) break;
          }
          uVar12 = uVar12 + 1;
          iVar10 = iVar10 + 0x18;
          uVar14 = (uint)param_1;
        } while (uVar12 < uVar8);
      }
      param_1 = (float *)uVar14;
      FUN_0078e5d0(fVar7,0,0,0,0);
      if ((local_30 == 0) || ((uint)((local_2c - local_30) / 0x18) <= param_1)) {
        FUN_00984d5e();
      }
      iVar10 = (int)param_1 * 0x18;
      local_3c[0] = (float *)(local_30 + iVar10);
      uVar14 = (int)param_1 + 1;
      if ((local_30 == 0) || ((uint)((local_2c - local_30) / 0x18) <= uVar14)) {
        FUN_00984d5e();
      }
      pfVar1 = (float *)(local_30 + uVar14 * 0x18);
      if ((local_30 == 0) || ((uint)((local_2c - local_30) / 0x18) <= param_1)) {
        FUN_00984d5e();
      }
      fVar2 = *local_3c[0];
      fVar3 = *pfVar1;
      fVar4 = *(float *)(local_30 + iVar10);
      if ((local_30 == 0) || ((uint)((local_2c - local_30) / 0x18) <= uVar14)) {
        FUN_00984d5e();
      }
      iVar11 = local_30 + uVar14 * 0x18;
      if ((local_30 == 0) || ((uint)((local_2c - local_30) / 0x18) <= param_1)) {
        FUN_00984d5e();
      }
      local_3c[0] = *(float **)(local_30 + 4 + iVar10);
      local_20 = (float)local_3c[0] +
                 ((fVar7 - fVar2) / (fVar3 - fVar4)) * (*(float *)(iVar11 + 4) - (float)local_3c[0])
      ;
      if ((*(int *)(in_ECX + 0x40) == 0) ||
         ((uint)((*(int *)(in_ECX + 0x44) - *(int *)(in_ECX + 0x40)) / 0x18) <= local_50)) {
        FUN_00984d5e();
      }
      iVar10 = *(int *)(in_ECX + 0x40);
      *(undefined4 *)(iVar10 + local_44) = local_24;
      iVar10 = iVar10 + local_44;
      *(float *)(iVar10 + 4) = local_20;
      *(undefined4 *)(iVar10 + 8) = local_1c;
      *(undefined4 *)(iVar10 + 0xc) = local_18;
      *(undefined4 *)(iVar10 + 0x10) = local_14;
      *(undefined4 *)(iVar10 + 0x14) = local_10;
      FUN_0060d0a0();
      local_50 = local_50 + 1;
      local_44 = local_44 + 0x18;
    } while (local_50 < uVar8);
  }
  iVar10 = 0;
  if (*(int *)(in_ECX + 0x10) != 0) {
    iVar10 = (*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10)) / 0x18;
  }
  if ((*(int *)(in_ECX + 0x10) == 0) ||
     ((uint)((*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10)) / 0x18) <= iVar10 - 1U)) {
    FUN_00984d5e();
  }
  puVar9 = (undefined4 *)(*(int *)(in_ECX + 0x10) + (iVar10 - 1U) * 0x18);
  if ((*(int *)(in_ECX + 0x40) == 0) ||
     ((uint)((*(int *)(in_ECX + 0x44) - *(int *)(in_ECX + 0x40)) / 0x18) <= uVar8)) {
    FUN_00984d5e();
  }
  iVar11 = local_2c;
  puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x40) + uVar8 * 0x18);
  *puVar5 = *puVar9;
  puVar5[1] = puVar9[1];
  puVar5[2] = puVar9[2];
  puVar5[3] = puVar9[3];
  puVar5[4] = puVar9[4];
  puVar5[5] = puVar9[5];
  local_4 = 0xffffffff;
  iVar10 = local_30;
  if (local_30 != 0) {
    for (; iVar10 != iVar11; iVar10 = iVar10 + 0x18) {
      FUN_0060d0a0();
    }
    FUN_00401f20(local_30);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_007868f0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined1 local_c [4];
  undefined4 local_8;
  
  if (*(int *)(in_ECX + 8) == 0) {
    FUN_007859e0(param_1,1,*(undefined4 *)(in_ECX + 4),param_4);
    return param_1;
  }
  iVar1 = **(int **)(in_ECX + 4);
  if ((param_2 == 0) || (param_2 != in_ECX)) {
    FUN_00984d5e();
  }
  if (param_3 == iVar1) {
    cVar2 = FUN_006f7620(param_4,param_3 + 0xc);
    if (cVar2 != '\0') {
      FUN_007859e0(param_1,1,param_3,param_4);
      return param_1;
    }
  }
  else {
    iVar1 = *(int *)(in_ECX + 4);
    if ((param_2 == 0) || (param_2 != in_ECX)) {
      FUN_00984d5e();
    }
    if (param_3 == iVar1) {
      cVar2 = FUN_006f7620(*(int *)(*(int *)(in_ECX + 4) + 8) + 0xc,param_4);
      if (cVar2 != '\0') {
        FUN_007859e0(param_1,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 8),param_4);
        return param_1;
      }
    }
    else {
      cVar2 = FUN_006f7620(param_4,param_3 + 0xc);
      if (cVar2 != '\0') {
        FUN_007840b0();
        cVar2 = FUN_006f7620(param_3 + 0xc,param_4);
        if (cVar2 != '\0') {
          if (*(char *)(*(int *)(param_3 + 8) + 0x2d) != '\0') {
            FUN_007859e0(param_1,0,param_3,param_4);
            return param_1;
          }
          FUN_007859e0(param_1,1,param_3,param_4);
          return param_1;
        }
      }
      cVar2 = FUN_006f7620(param_3 + 0xc,param_4);
      if (cVar2 != '\0') {
        local_8 = *(undefined4 *)(in_ECX + 4);
        FUN_007846d0();
        cVar2 = FUN_00784040(local_c);
        if (cVar2 == '\0') {
          cVar2 = FUN_006f7620(param_4,param_3 + 0xc);
          if (cVar2 == '\0') goto LAB_00786ac5;
        }
        if (*(char *)(*(int *)(param_3 + 8) + 0x2d) != '\0') {
          FUN_007859e0(param_1,0,param_3,param_4);
          return param_1;
        }
        FUN_007859e0(param_1,1,param_3,param_4);
        return param_1;
      }
    }
  }
LAB_00786ac5:
  puVar3 = (undefined4 *)FUN_00785fa0(local_c,param_4);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  return param_1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00786af0(void)

{
  float *in_ECX;
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  double dVar5;
  undefined1 auStack_12c [4];
  int local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  char local_110 [260];
  uint local_c;
  
  local_c = DAT_00b30aac ^ (uint)auStack_12c;
  FUN_00783e20();
  iVar1 = 0xd;
  bVar4 = true;
  pcVar2 = local_110;
  pcVar3 = "BezierSpline";
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    FUN_00783e20();
    dVar5 = _atof(local_110);
    *in_ECX = (float)dVar5;
    FUN_00783e20();
    dVar5 = _atof(local_110);
    in_ECX[1] = (float)dVar5;
    FUN_00783e20();
    dVar5 = _atof(local_110);
    in_ECX[2] = (float)dVar5;
    FUN_00783e20();
    if (local_110[0] == '{') {
      FUN_00783e20();
      local_128 = _atol(local_110);
      if (0 < local_128) {
        do {
          FUN_00783e20();
          dVar5 = _atof(local_110);
          local_118 = (float)dVar5;
          FUN_00783e20();
          dVar5 = _atof(local_110);
          local_114 = (float)dVar5;
          FUN_00783e20();
          dVar5 = _atof(local_110);
          local_120 = (float)dVar5;
          FUN_00783e20();
          dVar5 = _atof(local_110);
          local_11c = (float)dVar5;
          FUN_00783e20();
          dVar5 = _atof(local_110);
          local_124 = (float)dVar5;
          FUN_007860d0(&local_118,&local_120,local_124);
          local_128 = local_128 + -1;
        } while (local_128 != 0);
      }
    }
  }
  return;
}



int FUN_00786c60(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_34 [8];
  undefined1 local_2c [4];
  uint local_28;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cb1c8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00784930(param_1);
  if (in_ECX == 0) {
    FUN_00984d5e(uVar1);
  }
  if (iVar2 != *(int *)(in_ECX + 4)) {
    if (*(uint *)(iVar2 + 0x24) < 0x10) {
      iVar3 = iVar2 + 0x10;
    }
    else {
      iVar3 = *(int *)(iVar2 + 0x10);
    }
    iVar3 = FUN_006f5de0(0,*(undefined4 *)(param_1 + 0x14),iVar3,*(undefined4 *)(iVar2 + 0x20));
    if (-1 < iVar3) goto LAB_00786d2b;
  }
  local_14 = 0xf;
  local_18 = 0;
  local_28 = local_28 & 0xffffff00;
  FUN_00414420(param_1,0,0xffffffff);
  local_10 = 0;
  local_4 = 0;
  piVar4 = (int *)FUN_007868f0(local_34,in_ECX,iVar2,local_2c);
  in_ECX = *piVar4;
  iVar2 = piVar4[1];
  if (0xf < local_14) {
    FUN_00401f20(local_28);
  }
  local_14 = 0xf;
  local_18 = 0;
  local_28 = local_28 & 0xffffff00;
LAB_00786d2b:
  if (in_ECX == 0) {
    FUN_00984d5e(uVar1);
  }
  if (iVar2 == *(int *)(in_ECX + 4)) {
    FUN_00984d5e();
  }
  *unaff_FS_OFFSET = local_c;
  return iVar2 + 0x28;
}



void FUN_00786d60(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_009cb232;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  local_4 = 4;
  uStack_3 = 0;
  piVar2 = (int *)FUN_00786c60(param_1);
  if (*piVar2 == 0) {
    FUN_00786af0(param_1);
    FUN_00786350(500);
    iVar3 = FUN_00401f00(0x5c,uVar1);
    local_4 = 5;
    if (iVar3 != 0) {
      uVar5 = FUN_00785cb0(in_ECX);
    }
    _local_4 = CONCAT31(uStack_3,4);
    puVar4 = (undefined4 *)FUN_00786c60(param_1);
    *puVar4 = uVar5;
  }
  else {
    FUN_00785c50(*piVar2);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00786e40(void)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  *in_ECX = 0;
  return;
}



float10 FUN_00786e50(float *param_1)

{
  float *in_ECX;
  
  return (float10)(float)(((int)((param_1[2] - in_ECX[2]) * (param_1[2] - in_ECX[2]) +
                                (*param_1 - *in_ECX) * (*param_1 - *in_ECX) +
                                (param_1[1] - in_ECX[1]) * (param_1[1] - in_ECX[1])) >> 1) +
                         0x1fc00000);
}



undefined4 FUN_00786e90(float *param_1)

{
  float *in_ECX;
  
  if (((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) {
    return 0;
  }
  return 1;
}



void FUN_00786ed0(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = param_2[8] * in_ECX[2] + *param_2 * *in_ECX + param_2[4] * in_ECX[1] + param_2[0xc];
  param_1[1] = param_2[9] * in_ECX[2] + param_2[5] * in_ECX[1] + param_2[1] * *in_ECX + param_2[0xd]
  ;
  param_1[2] = param_2[10] * in_ECX[2] + param_2[6] * in_ECX[1] + param_2[2] * *in_ECX +
               param_2[0xe];
  return;
}



void FUN_00786f30(void)

{
  undefined1 *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0xbf800000;
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0xffffffff;
  *(undefined2 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  return;
}



void FUN_00786f70(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  return;
}



void FUN_00786fa0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  return;
}



void FUN_00786fc0(void)

{
  undefined4 *in_ECX;
  
  FUN_00401f20(in_ECX[2]);
  in_ECX[2] = 0;
  FUN_00401f20(in_ECX[4]);
  in_ECX[4] = 0;
  *in_ECX = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  return;
}



void FUN_00786ff0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cb258;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_0060d0a0(uVar1);
  local_4 = 0xffffffff;
  FUN_0060d0a0();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00787050(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if (*(undefined4 **)(in_ECX + 0x34) != (undefined4 *)0x0) {
    uVar1 = **(undefined4 **)(in_ECX + 0x34);
  }
  return uVar1;
}



void FUN_00787060(void)

{
  FUN_007a2400();
  return;
}



void FUN_00787070(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = in_ECX[0xd];
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_1;
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    return;
  }
  iVar1 = *in_ECX;
  *(undefined4 *)(iVar1 + 4) = param_1;
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  return;
}



void FUN_007870d0(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(*(int *)(in_ECX + 0x10) + 0x14) = param_1;
  return;
}



void FUN_007870e0(undefined4 param_1)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    *(undefined4 *)(*in_ECX + 0x8c) = param_1;
  }
  return;
}



void FUN_00787100(undefined4 param_1)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    *(undefined4 *)(*in_ECX + 0x88) = param_1;
  }
  return;
}



float10 FUN_00787120(void)

{
  int iVar1;
  int *in_ECX;
  
  if ((*in_ECX != 0) && (iVar1 = *(int *)(*in_ECX + 0x5c), iVar1 != 0)) {
    return (float10)*(float *)(iVar1 + 0x18);
  }
  return (float10)0;
}



float10 FUN_00787140(void)

{
  int iVar1;
  int *in_ECX;
  
  if ((*in_ECX != 0) && (iVar1 = *(int *)(*in_ECX + 0x5c), iVar1 != 0)) {
    return (float10)*(float *)(iVar1 + 0x1c);
  }
  return (float10)0;
}



void FUN_00787160(undefined4 param_1)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    *(undefined4 *)(*in_ECX + 0xb4) = param_1;
  }
  return;
}



void FUN_00787180(undefined4 param_1)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    *(undefined4 *)(*in_ECX + 0xb8) = param_1;
  }
  return;
}



float10 FUN_007871a0(void)

{
  int *in_ECX;
  
  if (in_ECX[0xd] != 0) {
    return (float10)*(float *)(in_ECX[0xd] + 0x10);
  }
  return (float10)*(float *)(*in_ECX + 0x14);
}



void FUN_007871c0(undefined1 param_1)

{
  DAT_00b4297c = param_1;
  return;
}



void FUN_007871d0(undefined4 param_1,undefined4 param_2)

{
  FUN_007a24d0(param_1,param_2);
  return;
}



undefined4 FUN_007871f0(void)

{
  int *in_ECX;
  
  return CONCAT22((short)((uint)*in_ECX >> 0x10),*(undefined2 *)(*in_ECX + 0x70));
}



undefined4 FUN_00787200(void)

{
  int *in_ECX;
  
  return CONCAT22((short)((uint)*in_ECX >> 0x10),*(undefined2 *)(*in_ECX + 0xc0));
}



void FUN_00787210(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_00798690();
    return;
  }
  return;
}



void FUN_00787220(undefined4 param_1,ushort param_2,float param_3,undefined4 param_4,
                 undefined4 param_5,float param_6,float *param_7,float *param_8,short *param_9,
                 ushort *param_10)

{
  short sVar1;
  uint uVar2;
  ushort uVar3;
  float10 fVar4;
  float10 extraout_ST0;
  float10 extraout_ST1;
  
  fVar4 = (float10)(1.0 / (float)param_2);
  uVar2 = FUN_009828c0();
  if (0.5 <= (float)(extraout_ST0 - (float10)(int)uVar2)) {
    uVar2 = uVar2 + 1;
  }
  uVar3 = (ushort)uVar2;
  if (((uVar3 != 0) && (uVar3 != param_2)) &&
     (ABS((float)(fVar4 - (float10)(uVar2 & 0xffff) * extraout_ST1)) <= param_3)) {
    *param_9 = uVar3 - 1;
    fVar4 = (float10)FUN_00985b70();
    *param_7 = (float)fVar4 * (255.0 - param_6) + param_6;
    *param_10 = uVar3;
    fVar4 = (float10)FUN_00985b70();
    *param_8 = (float)fVar4 * (255.0 - param_6) + param_6;
    return;
  }
  *param_7 = param_6;
  sVar1 = FUN_009828c0();
  *param_9 = sVar1;
  if ((short)(param_2 - 1) <= sVar1) {
    sVar1 = param_2 - 1;
  }
  *param_9 = sVar1;
  *param_8 = 255.0;
  *param_10 = 0xffff;
  return;
}



void FUN_00787400(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x40,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_007a5470();
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x50) = uVar3;
  FUN_007a5530(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00787480(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int in_ECX;
  float10 fVar5;
  float10 fVar6;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar4 = *(int *)(in_ECX + 4);
  if (((iVar4 != 0) && (*(int *)(in_ECX + 0x60) != 0)) && (*(int *)(in_ECX + 0x50) != 0)) {
    pfVar3 = *(float **)(in_ECX + 0x40);
    local_18 = *pfVar3;
    local_14 = pfVar3[1];
    local_10 = pfVar3[2];
    local_24 = pfVar3[3];
    local_20 = pfVar3[4];
    local_1c = pfVar3[5];
    fVar5 = (float10)FUN_00786e50(&local_24);
    fVar6 = (float10)0.5;
    fVar1 = (float)(fVar5 * fVar6);
    local_c = local_24 + local_18;
    local_8 = local_14 + local_20;
    local_4 = local_1c + local_10;
    fVar2 = (float)((float10)local_c * fVar6);
    local_20 = (float)((float10)local_8 * fVar6);
    local_1c = (float)(fVar6 * (float10)local_4);
    local_24 = fVar2;
    if (*(int *)(in_ECX + 0x4c) == 0) {
      FUN_007a51c0(iVar4,fVar2,local_20,local_1c,fVar1,0);
      iVar4 = 0;
    }
    else {
      FUN_007a51c0(iVar4,fVar2,local_20,local_1c,fVar1,*(int *)(in_ECX + 0x4c) + 0x34);
      iVar4 = *(int *)(in_ECX + 0x4c) + 0x34;
    }
    FUN_007a51c0(*(undefined4 *)(in_ECX + 0x60),fVar2,local_20,local_1c,fVar1,iVar4);
  }
  return;
}



undefined4 FUN_007875c0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x68);
}



void FUN_007875d0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float fVar6;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x6d) != '\0') {
    puVar5 = *(undefined4 **)(in_ECX + 0x40);
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[3];
    uVar4 = puVar5[4];
    fVar6 = ((float)puVar5[5] + (float)puVar5[2]) * 0.5;
    *(undefined4 *)(in_ECX + 0x70) = uVar3;
    *(undefined4 *)(in_ECX + 0x74) = uVar4;
    *(float *)(in_ECX + 0x78) = fVar6;
    *(undefined4 *)(in_ECX + 0x7c) = uVar1;
    *(undefined4 *)(in_ECX + 0x80) = uVar4;
    *(float *)(in_ECX + 0x84) = fVar6;
    *(undefined4 *)(in_ECX + 0x88) = uVar1;
    *(undefined4 *)(in_ECX + 0x8c) = uVar2;
    *(float *)(in_ECX + 0x90) = fVar6;
    *(undefined4 *)(in_ECX + 0x94) = uVar3;
    *(undefined4 *)(in_ECX + 0x98) = uVar2;
    *(float *)(in_ECX + 0x9c) = fVar6;
  }
  return;
}



undefined1 FUN_00787680(void)

{
  return DAT_00b4297d;
}



void FUN_00787690(undefined1 param_1)

{
  DAT_00b4297d = param_1;
  return;
}



int FUN_007876a0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x54;
}



int FUN_007876c0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x1c;
}



int FUN_007876f0(uint param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) == 0) ||
     ((uint)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x1c) <= param_1)) {
    FUN_00984d5e();
  }
  return *(int *)(in_ECX + 4) + param_1 * 0x1c;
}



void FUN_00787740(char *param_1)

{
  char *pcVar1;
  undefined **local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1;
    if ((uint)(0xffffffff / ZEXT48(param_1)) < 0x1c) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_c,&param_1);
      local_c[0] = &PTR_FUN_00a32488;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_c,&DAT_00ad7f34);
    }
  }
  FUN_00401f00((int)pcVar1 * 0x1c);
  return;
}



uint FUN_007877b0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x6c) == 0) {
    return 0;
  }
  return (uint)(*(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) >> 2) / 3;
}



bool FUN_007877e0(void)

{
  uint uVar1;
  uint *in_ECX;
  
  uVar1 = *in_ECX;
  *in_ECX = uVar1 + 1;
  if ((in_ECX[2] == 0) || (in_ECX[3] - in_ECX[2] <= uVar1)) {
    FUN_00984d5e();
  }
  return *(char *)(uVar1 + in_ECX[2]) != '\0';
}



bool FUN_00787810(void)

{
  uint *in_ECX;
  
  if (in_ECX[2] == 0) {
    return true;
  }
  return in_ECX[3] - in_ECX[2] <= *in_ECX;
}



void FUN_00787830(ushort param_1)

{
  uint uVar1;
  void *pvVar2;
  ushort *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00401f20(*(undefined4 *)(in_ECX + 2),uVar1);
  uVar1 = (uint)param_1;
  *in_ECX = param_1;
  pvVar2 = (void *)FUN_00401f00(uVar1 * 0x40);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar2,0x40,uVar1,FUN_007a66b0);
  }
  local_4 = 0xffffffff;
  *(void **)(in_ECX + 2) = pvVar2;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    FUN_007a6670();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007878f0(float param_1,float param_2)

{
  float *in_ECX;
  
  if (*(char *)(in_ECX + 0xc) == '\0') {
    *in_ECX = param_1 * _DAT_00b2ba7c;
    in_ECX[1] = _DAT_00b2ba80 * param_1;
    in_ECX[2] = param_2 * _DAT_00b2ba84;
    in_ECX[3] = _DAT_00b2ba88 * param_1;
    in_ECX[4] = _DAT_00b2ba8c * param_1;
    in_ECX[5] = _DAT_00b2ba90 * param_2;
    in_ECX[6] = _DAT_00b2ba94 * param_1;
    in_ECX[7] = _DAT_00b2ba98 * param_1;
    in_ECX[8] = _DAT_00b2ba9c * param_2;
    in_ECX[9] = _DAT_00b2baa0 * param_1;
    in_ECX[10] = _DAT_00b2baa4 * param_1;
    param_2 = param_2 * _DAT_00b2baa8;
    *(undefined1 *)(in_ECX + 0xc) = 1;
    in_ECX[0xb] = param_2;
  }
  return;
}



void FUN_007879a0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[0xe] = 0xbf800000;
  *(undefined2 *)(in_ECX + 1) = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  *in_ECX = 0xffffffff;
  in_ECX[0xf] = 0xffffffff;
  *(undefined2 *)(in_ECX + 0x10) = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  *(undefined2 *)(in_ECX + 0x13) = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0xbf800000;
  in_ECX[0x1f] = 0xbf800000;
  *(undefined1 *)(in_ECX + 0x1e) = 0;
  in_ECX[0x20] = 0xffffffff;
  *(undefined2 *)(in_ECX + 0x21) = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2e] = 0xbf800000;
  *(undefined1 *)(in_ECX + 0x2d) = 0;
  in_ECX[0x2f] = 0xffffffff;
  *(undefined2 *)(in_ECX + 0x30) = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3f] = 0xbf800000;
  *(undefined1 *)(in_ECX + 0x3c) = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  *(undefined2 *)(in_ECX + 0x40) = 0;
  in_ECX[0x44] = 0xbf800000;
  *(undefined1 *)(in_ECX + 0x41) = 0;
  in_ECX[0x42] = 0;
  in_ECX[0x43] = 0;
  *(undefined2 *)(in_ECX + 0x45) = 0;
  in_ECX[0x49] = 0xbf800000;
  *(undefined1 *)(in_ECX + 0x46) = 0;
  in_ECX[0x47] = 0;
  in_ECX[0x48] = 0;
  *(undefined2 *)(in_ECX + 0x4a) = 0;
  return;
}



void FUN_00787b20(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x11c) = 0;
  *(undefined4 *)(in_ECX + 0x120) = 0;
  *(undefined4 *)(in_ECX + 0x108) = 0;
  *(undefined4 *)(in_ECX + 0x10c) = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  *(undefined4 *)(in_ECX + 0xc4) = 0;
  *(undefined4 *)(in_ECX + 200) = 0;
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  *(undefined4 *)(in_ECX + 0xd8) = 0;
  *(undefined4 *)(in_ECX + 0xdc) = 0;
  *(undefined4 *)(in_ECX + 0xe0) = 0;
  *(undefined4 *)(in_ECX + 0xe4) = 0;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  *(undefined4 *)(in_ECX + 0xe8) = 0;
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}



uint FUN_00787c10(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int *in_ECX;
  
  uVar1 = *(ushort *)(*in_ECX + 0x70);
  uVar2 = FUN_009828c0();
  uVar3 = (uint)uVar2;
  if ((int)(short)uVar2 == (uint)uVar1) {
    uVar3 = uVar3 - 1;
  }
  return uVar3;
}



uint FUN_00787c70(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int in_ECX;
  
  uVar1 = *(ushort *)(in_ECX + 100);
  uVar2 = FUN_009828c0();
  uVar3 = (uint)uVar2;
  if ((int)(short)uVar2 == (uint)uVar1) {
    uVar3 = uVar3 - 1;
  }
  return uVar3;
}



uint FUN_00787cd0(float param_1)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  ushort local_4;
  
  if (param_1 == -1.0) {
    if (in_ECX[0xd] == 0) {
      param_1 = *(float *)(*in_ECX + 0x14);
    }
    else {
      param_1 = *(float *)(in_ECX[0xd] + 0x10);
    }
  }
  if (DAT_00b4297c == '\0') {
    uVar2 = (uint)*(ushort *)(*in_ECX + 0xc0);
    local_4 = (ushort)(int)ROUND((1.0 - param_1) * (float)uVar2);
  }
  else {
    uVar2 = *(ushort *)(*in_ECX + 0xc0) + 1;
    local_4 = (ushort)(int)ROUND((1.0 - param_1) * (float)uVar2);
  }
  uVar1 = (uint)local_4;
  if (uVar1 == uVar2) {
    uVar1 = uVar1 + 0xffff;
  }
  return uVar1;
}



int FUN_00787d90(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x58);
  iVar2 = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) == 0) {
      return 0;
    }
    iVar2 = (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x1c;
  }
  return iVar2;
}



void FUN_00787dc0(int param_1,float param_2)

{
  char *pcVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  char cVar6;
  ushort uVar7;
  int *in_ECX;
  short sVar8;
  uint uVar9;
  float10 fVar10;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  cVar6 = DAT_00b4297c;
  local_24 = -1.0;
  local_1c = 0xbf800000;
  local_14 = (uint)*(ushort *)(*in_ECX + 0xc0);
  local_18 = 0xffffffff;
  local_20 = 0xffffffff;
  local_10 = (uint)*(byte *)(in_ECX + 0x11);
  uVar9 = (uint)(ushort)((ushort)(DAT_00b4297c != '\0') + *(ushort *)(*in_ECX + 0xc0));
  FUN_00787220(param_2,uVar9,in_ECX[7],in_ECX[10],in_ECX[8],(float)local_10,&local_24,&local_1c,
               &local_18,&local_20);
  uVar5 = local_18;
  sVar8 = (short)local_18;
  if (cVar6 == '\0') {
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xfc) = 0xbf800000;
    if ((int)sVar8 == uVar9 - 1) {
      *(float *)(param_1 + 0xfc) = local_24;
    }
    else if ((int)(short)local_20 == uVar9 - 1) {
      *(undefined4 *)(param_1 + 0xfc) = local_1c;
    }
    if (*(float *)(param_1 + 0xfc) == -1.0) {
      *(undefined1 *)(param_1 + 0xf0) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xf0) = 1;
    }
  }
  if (0.0 <= param_2) {
    if (DAT_00b4297c == '\0') {
      fVar3 = (float)*(byte *)(in_ECX + 0x11);
    }
    else {
      fVar3 = local_24;
      if ((int)sVar8 != uVar9 - 2) {
        if ((int)sVar8 == uVar9 - 1) {
          fVar3 = 255.0;
        }
        else {
          fVar3 = (float)*(byte *)(in_ECX + 0x11);
        }
      }
    }
    *(float *)(param_1 + 0x38) = fVar3;
    local_8 = DAT_00b2b6dc;
    local_c = DAT_00b2b6d8;
    local_4 = DAT_00b2b6e0;
    fVar10 = (float10)FUN_0098598a();
    fVar3 = (float)fVar10 * 57.29578;
    fVar10 = (float10)FUN_00985870();
    fVar4 = (float)fVar10 * -57.29578;
    if (in_ECX[6] != 1) {
      if (in_ECX[6] != 3) {
        uVar7 = FUN_00787cd0(0xbf800000);
        if (uVar7 < *(ushort *)(*in_ECX + 0xc0)) {
          FUN_00798630((undefined1 *)(param_1 + 0x78),uVar7,fVar3,fVar4,in_ECX[9]);
          *(undefined1 *)(param_1 + 0x78) = 1;
          *(float *)(param_1 + 0x7c) = (float)*(byte *)(in_ECX + 0x11);
        }
        *(undefined1 *)(param_1 + 0xb4) = 0;
        return;
      }
      FUN_00798630((undefined1 *)(param_1 + 0x78),0,fVar3,fVar4,in_ECX[9]);
      *(undefined1 *)(param_1 + 0x78) = 1;
      bVar2 = *(byte *)(in_ECX + 0x11);
      *(undefined1 *)(param_1 + 0xb4) = 0;
      *(float *)(param_1 + 0x7c) = (float)bVar2;
      return;
    }
    pcVar1 = (char *)(param_1 + 0x78);
    FUN_00798630(pcVar1,0,fVar3,fVar4,in_ECX[9]);
    if ((sVar8 == -1) || ((int)(local_14 & 0xffff) <= (int)sVar8)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    *pcVar1 = cVar6;
    if (cVar6 != '\0') {
      FUN_00798630(pcVar1,uVar5,fVar3,fVar4,in_ECX[9]);
      *(float *)(param_1 + 0x7c) = local_24;
    }
    if (((short)local_20 == -1) || ((int)(local_14 & 0xffff) <= (int)(short)local_20)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    *(char *)(param_1 + 0xb4) = cVar6;
    if (cVar6 != '\0') {
      FUN_00798630((char *)(param_1 + 0xb4),local_20,fVar3,fVar4,in_ECX[9]);
      *(undefined4 *)(param_1 + 0xb8) = local_1c;
      return;
    }
  }
  return;
}



void FUN_00788120(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  char cVar6;
  int *in_ECX;
  short sVar7;
  uint uVar8;
  int iVar9;
  float10 fVar10;
  undefined4 uStack_20;
  uint local_1c;
  float fStack_18;
  uint uStack_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar8 = *(uint *)(*in_ECX + 0xc0) & 0xffff;
  local_c = DAT_00b2b6d8;
  sVar7 = (short)*(uint *)(*in_ECX + 0xc0);
  local_10 = (uint)(ushort)((ushort)(DAT_00b4297c != '\0') + sVar7);
  local_8 = DAT_00b2b6dc;
  local_4 = DAT_00b2b6e0;
  local_1c = uVar8;
  fVar10 = (float10)FUN_0098598a();
  fStack_18 = (float)fVar10;
  fVar3 = fStack_18 * 57.29578;
  fVar10 = (float10)FUN_00985870();
  fStack_18 = (float)fVar10;
  iVar9 = 0;
  fVar4 = fStack_18 * -57.29578;
  if (sVar7 != 0) {
    do {
      FUN_007989b0(param_1 + 0x78,iVar9,fVar3,fVar4,in_ECX[9]);
      iVar9 = iVar9 + 1;
      uVar8 = local_1c;
    } while ((ushort)iVar9 < *(ushort *)(*in_ECX + 0xc0));
  }
  if (-1 < (short)param_2) {
    FUN_00798630((undefined1 *)(param_1 + 0x78),param_2,fVar3,fVar4,in_ECX[9]);
    *(undefined1 *)(param_1 + 0x78) = 1;
    bVar2 = *(byte *)(in_ECX + 0x11);
    *(undefined1 *)(param_1 + 0xb4) = 0;
    *(float *)(param_1 + 0x7c) = (float)bVar2;
    return;
  }
  if (in_ECX[6] == 1) {
    uStack_20 = 0xbf800000;
    fStack_18 = -1.0;
    param_2 = 0xffffffff;
    local_1c = 0xffffffff;
    if (in_ECX[0xd] == 0) {
      uVar1 = *(undefined4 *)(*in_ECX + 0x14);
    }
    else {
      uVar1 = *(undefined4 *)(in_ECX[0xd] + 0x10);
    }
    uStack_14 = (uint)*(byte *)(in_ECX + 0x11);
    FUN_00787220(uVar1,local_10,in_ECX[7],in_ECX[10],in_ECX[8],(float)uStack_14,&uStack_20,
                 &fStack_18,&param_2,&local_1c);
    if (((short)param_2 == -1) || ((int)(uVar8 & 0xffff) <= (int)(short)param_2)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    *(char *)(param_1 + 0x78) = cVar6;
    if (cVar6 != '\0') {
      FUN_00798630((char *)(param_1 + 0x78),param_2,fVar3,fVar4,in_ECX[9]);
      *(undefined4 *)(param_1 + 0x7c) = uStack_20;
    }
    if (((short)local_1c == -1) || ((int)(uVar8 & 0xffff) <= (int)(short)local_1c)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    *(char *)(param_1 + 0xb4) = cVar6;
    if (cVar6 != '\0') {
      FUN_00798630((char *)(param_1 + 0xb4),local_1c,fVar3,fVar4,in_ECX[9]);
      *(float *)(param_1 + 0xb8) = fStack_18;
      return;
    }
  }
  else {
    if (in_ECX[6] == 3) {
      FUN_00798630((undefined1 *)(param_1 + 0x78),0,fVar3,fVar4,in_ECX[9]);
      *(undefined1 *)(param_1 + 0x78) = 1;
      bVar2 = *(byte *)(in_ECX + 0x11);
      *(undefined1 *)(param_1 + 0xb4) = 0;
      *(float *)(param_1 + 0x7c) = (float)bVar2;
      return;
    }
    uVar5 = FUN_00787cd0(0xbf800000);
    if (uVar5 < *(ushort *)(*in_ECX + 0xc0)) {
      FUN_00798630((undefined1 *)(param_1 + 0x78),uVar5,fVar3,fVar4,in_ECX[9]);
      *(undefined1 *)(param_1 + 0x78) = 1;
      *(float *)(param_1 + 0x7c) = (float)*(byte *)(in_ECX + 0x11);
    }
    *(undefined1 *)(param_1 + 0xb4) = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00788430(int param_1)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  if (DAT_00b4297c == '\0') {
    *(undefined1 *)(param_1 + 0xf0) = 0;
    *(undefined1 *)(param_1 + 0x104) = 0;
    *(undefined1 *)(param_1 + 0x118) = 0;
    return;
  }
  local_10 = 0xbf800000;
  local_8 = 0xbf800000;
  uVar3 = (uint)(ushort)(*(short *)(*in_ECX + 0xc0) + 1);
  local_14 = 0xffffffff;
  local_c = 0xffffffff;
  if (in_ECX[0xd] == 0) {
    uVar5 = *(undefined4 *)(*in_ECX + 0x14);
  }
  else {
    uVar5 = *(undefined4 *)(in_ECX[0xd] + 0x10);
  }
  local_4 = (uint)*(byte *)(in_ECX + 0x11);
  FUN_00787220(uVar5,uVar3,in_ECX[7],in_ECX[10],in_ECX[8],(float)local_4,&local_10,&local_8,
               &local_14,&local_c);
  *(undefined4 *)(param_1 + 0xfc) = 0xbf800000;
  iVar4 = uVar3 - 1;
  uVar5 = local_10;
  if (((short)local_14 == iVar4) || (uVar5 = local_8, (short)local_c == iVar4)) {
    *(undefined4 *)(param_1 + 0xfc) = uVar5;
  }
  bVar2 = *(float *)(param_1 + 0xfc) != -1.0;
  *(bool *)(param_1 + 0xf0) = bVar2;
  *(undefined2 *)(param_1 + 0x100) = 0;
  if (bVar2) {
    uVar5 = FUN_007878f0(*(undefined4 *)(in_ECX[0x10] + 0x18),*(undefined4 *)(in_ECX[0x10] + 0x14));
    *(undefined4 *)(param_1 + 0xf8) = uVar5;
    if (in_ECX[0x13] == 0) {
      *(undefined4 *)(param_1 + 0xf4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(in_ECX[0x13] + 0xc);
    }
  }
  *(undefined1 *)(param_1 + 0x104) = 0;
  *(undefined2 *)(param_1 + 0x114) = 0;
  if (*(char *)((int)in_ECX + 0x6d) != '\0') {
    *(int **)(param_1 + 0x120) = in_ECX + 0x1c;
    if (in_ECX[0x13] == 0) {
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
    else {
      *(int *)(param_1 + 0x11c) =
           *(int *)(in_ECX[0x13] + 8) * 0x20 + -0x20 + *(int *)(in_ECX[0x13] + 0xc);
    }
    fVar1 = *(float *)(param_1 + 0xfc);
    *(float *)(param_1 + 0x124) = fVar1;
    *(bool *)(param_1 + 0x118) = !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0);
    uVar5 = _DAT_00b2b604;
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x124) = uVar5;
    return;
  }
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  return;
}



void FUN_00788630(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_1;
      puVar3 = param_3;
      for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_3 = param_3 + 7;
  }
  return;
}



int FUN_00788660(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = (int)param_2 - (int)param_1;
  if (param_1 != param_2) {
    iVar3 = param_3 - (int)param_2;
    do {
      param_2 = param_2 + -7;
      puVar4 = param_2;
      puVar5 = (undefined4 *)((int)param_2 + iVar3);
      for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    } while (param_2 != param_1);
  }
  return param_3 + (iVar1 / 0x1c) * -0x1c;
}



uint FUN_007886c0(short param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  if (param_1 < 0) {
    return 0;
  }
  if ((*(int *)(in_ECX + 0x4c) == 0) ||
     ((uint)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 4) <= (uint)(int)param_1)) {
    FUN_00984d5e();
  }
  iVar2 = param_1 * 0x10 + *(int *)(in_ECX + 0x4c);
  iVar1 = *(int *)(iVar2 + 4);
  if (iVar1 == 0) {
    return 0;
  }
  return *(int *)(iVar2 + 8) - iVar1 >> 2 & 0xffff;
}



undefined4 FUN_00788720(short param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  if ((-1 < param_1) && (uVar3 = (uint)param_1, (int)uVar3 < (int)(uint)*(ushort *)(in_ECX + 0x20)))
  {
    if ((*(int *)(in_ECX + 0x3c) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) >> 4) <= uVar3)) {
      FUN_00984d5e();
    }
    iVar1 = uVar3 * 0x10 + *(int *)(in_ECX + 0x3c);
    iVar2 = *(int *)(iVar1 + 4);
    if ((iVar2 != 0) && (*(int *)(iVar1 + 8) - iVar2 >> 1 != 0)) {
      iVar2 = FUN_006f10e0(uVar3);
      if ((*(int *)(iVar2 + 4) == 0) || (*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 1 == 0)) {
        FUN_00984d5e();
      }
      return *(undefined4 *)(iVar2 + 4);
    }
  }
  return 0;
}



void FUN_007887a0(float param_1,byte param_2)

{
  byte bVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  int in_ECX;
  uint uVar9;
  uint uVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  float10 fVar14;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  uint uStack_20;
  float fStack_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  
  iVar6 = (int)param_1;
  FUN_00788430(param_1);
  if ((*(char *)(iVar6 + 0xf0) != '\0') && (uVar2 = *(ushort *)(in_ECX + 0x54), uVar2 != 0)) {
    param_1 = (float)(uint)*(byte *)(in_ECX + 0x44);
    local_18 = DAT_00b2b6d8;
    local_14 = DAT_00b2b6dc;
    local_10 = DAT_00b2b6e0;
    fVar3 = (*(float *)(iVar6 + 0xfc) - (float)(int)param_1) / (255.0 - (float)(int)param_1);
    local_c = -DAT_00b2b6d8;
    local_8 = -DAT_00b2b6dc;
    fVar14 = (float10)FUN_0098598a();
    fVar4 = (float)fVar14 * 57.29578;
    if (fVar4 < 0.0) {
      fVar4 = fVar4 + 360.0;
    }
    param_1 = -1.0;
    uVar13 = (uint)uVar2;
    fStack_2c = -1.0;
    fVar5 = 0.5 / (float)uVar13;
    uStack_20 = (uint)*(byte *)(in_ECX + 0x44);
    iStack_28 = -1;
    iStack_24 = -1;
    fStack_1c = fVar5 + (fVar4 / 360.0) * ((1.0 - fVar5) - fVar5);
    FUN_00787220(fStack_1c,uVar13,fVar5,*(undefined4 *)(in_ECX + 0x28),
                 *(undefined4 *)(in_ECX + 0x20),(float)uStack_20,&param_1,&fStack_2c,&iStack_28,
                 &iStack_24);
    uVar9 = ((uint)*(ushort *)(in_ECX + 0x54) - iStack_28) - 1;
    uVar7 = ((uint)*(ushort *)(in_ECX + 0x54) - iStack_24) - 1;
    uVar10 = uVar9 & 0xffff;
    uVar12 = uVar7 & 0xffff;
    sVar11 = (short)uVar7;
    sVar8 = (short)uVar9;
    while ((int)uVar13 <= (int)sVar8) {
      uVar10 = uVar10 - uVar13;
      sVar8 = (short)uVar10;
    }
    while ((int)uVar13 <= (int)sVar11) {
      uVar12 = uVar12 - uVar13;
      sVar11 = (short)uVar12;
    }
    if ((param_2 & 0x20) != 0) {
      *(undefined1 *)(iVar6 + 0xf0) = 1;
      if (fStack_2c <= param_1) {
        *(int *)(iVar6 + 0xf4) = sVar11 * 0x20 + *(int *)(*(int *)(in_ECX + 0x4c) + 0xc);
        bVar1 = *(byte *)(in_ECX + 0x44);
      }
      else {
        *(int *)(iVar6 + 0xf4) = sVar8 * 0x20 + *(int *)(*(int *)(in_ECX + 0x4c) + 0xc);
        bVar1 = *(byte *)(in_ECX + 0x44);
      }
      *(undefined1 *)(iVar6 + 0x104) = 0;
      *(float *)(iVar6 + 0xfc) = (255.0 - (float)bVar1) * fVar3 + (float)bVar1;
      return;
    }
    if (*(int *)(in_ECX + 0x4c) == 0) {
      *(undefined4 *)(iVar6 + 0xf4) = 0;
    }
    else {
      *(int *)(iVar6 + 0xf4) = sVar8 * 0x20 + *(int *)(*(int *)(in_ECX + 0x4c) + 0xc);
    }
    *(short *)(iVar6 + 0x100) = sVar8;
    *(undefined4 *)(iVar6 + 0x10c) = *(undefined4 *)(iVar6 + 0xf8);
    *(float *)(iVar6 + 0xfc) = fVar3 * (255.0 - param_1) + param_1;
    if (*(int *)(in_ECX + 0x4c) == 0) {
      *(undefined4 *)(iVar6 + 0x108) = 0;
    }
    else {
      *(int *)(iVar6 + 0x108) = sVar11 * 0x20 + *(int *)(*(int *)(in_ECX + 0x4c) + 0xc);
    }
    *(short *)(iVar6 + 0x114) = sVar11;
    *(undefined1 *)(iVar6 + 0x104) = 1;
    *(float *)(iVar6 + 0x110) = (255.0 - fStack_2c) * fVar3 + fStack_2c;
  }
  return;
}



void * FUN_00788a80(void *param_1,int param_2,int param_3)

{
  rsize_t _DstSize;
  
  _DstSize = param_2 - (int)param_1;
  if (0 < (int)_DstSize) {
    _memmove_s((void *)(param_3 - _DstSize),_DstSize,param_1,_DstSize);
  }
  return (void *)(param_3 - _DstSize);
}



void FUN_00788ab0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 7;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 7; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}



void FUN_00788ae0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = param_3;
      puVar3 = param_1;
      for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1 = param_1 + 7;
  }
  return;
}



void FUN_00788b10(int *param_1,int param_2,void *param_3,int param_4,void *param_5)

{
  rsize_t _DstSize;
  int in_ECX;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00984d5e();
  }
  if (param_3 != param_5) {
    _DstSize = *(int *)(in_ECX + 8) - (int)param_5;
    if (0 < (int)_DstSize) {
      _memmove_s(param_3,_DstSize,param_5,_DstSize);
    }
    *(rsize_t *)(in_ECX + 8) = _DstSize + (int)param_3;
  }
  param_1[1] = (int)param_3;
  *param_1 = param_2;
  return;
}



void FUN_00788b60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00788660(param_1,param_2,param_3,param_3,param_3,0);
  return;
}



void FUN_00788b90(void)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 4));
  *(undefined4 *)(in_ECX + 4) = 0;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0xc));
  *(undefined4 *)(in_ECX + 0xc) = 0;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x14));
  *(undefined4 *)(in_ECX + 0x14) = 0;
  if (0xf < *(uint *)(in_ECX + 0x30)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x1c));
  }
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0xf;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  return;
}



void FUN_00788be0(float *param_1)

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
  int *piVar16;
  int in_ECX;
  int *piVar17;
  
  piVar17 = *(int **)(in_ECX + 4);
  if (*(int **)(in_ECX + 8) < piVar17) {
    FUN_00984d5e();
  }
  while( true ) {
    piVar16 = *(int **)(in_ECX + 8);
    if (piVar16 < *(int **)(in_ECX + 4)) {
      FUN_00984d5e();
    }
    if (piVar17 == piVar16) break;
    if (((*(int **)(in_ECX + 8) <= piVar17) && (FUN_00984d5e(), *(int **)(in_ECX + 8) <= piVar17))
       && (FUN_00984d5e(), *(int **)(in_ECX + 8) <= piVar17)) {
      FUN_00984d5e();
    }
    fVar1 = (float)piVar17[1];
    fVar2 = (float)piVar17[2];
    fVar3 = (float)piVar17[3];
    fVar4 = param_1[4];
    fVar5 = *param_1;
    fVar6 = param_1[8];
    fVar7 = param_1[0xc];
    fVar8 = param_1[1];
    fVar9 = param_1[5];
    fVar10 = param_1[9];
    fVar11 = param_1[0xd];
    fVar12 = param_1[6];
    fVar13 = param_1[2];
    fVar14 = param_1[10];
    fVar15 = param_1[0xe];
    if (*(int **)(in_ECX + 8) <= piVar17) {
      FUN_00984d5e();
    }
    piVar17[1] = (int)(fVar2 * fVar4 + fVar1 * fVar5 + fVar3 * fVar6 + fVar7);
    if (*(int **)(in_ECX + 8) <= piVar17) {
      FUN_00984d5e();
    }
    piVar17[2] = (int)(fVar10 * fVar3 + fVar9 * fVar2 + fVar8 * fVar1 + fVar11);
    if (*(int **)(in_ECX + 8) <= piVar17) {
      FUN_00984d5e();
    }
    piVar17[3] = (int)(fVar3 * fVar14 + fVar12 * fVar2 + fVar13 * fVar1 + fVar15);
    if (*(int **)(in_ECX + 8) <= piVar17) {
      FUN_00984d5e();
    }
    if (*piVar17 == 0) {
      if (*(int **)(in_ECX + 8) <= piVar17) {
        FUN_00984d5e();
      }
      piVar17[4] = (int)((float)piVar17[4] * *param_1);
    }
    else {
      if (*(int **)(in_ECX + 8) <= piVar17) {
        FUN_00984d5e();
      }
      if (*piVar17 == 1) {
        if (*(int **)(in_ECX + 8) <= piVar17) {
          FUN_00984d5e();
        }
        piVar17[4] = (int)((float)piVar17[4] * *param_1);
        if (*(int **)(in_ECX + 8) <= piVar17) {
          FUN_00984d5e();
        }
        piVar17[5] = (int)((float)piVar17[5] * *param_1);
      }
      else {
        if (*(int **)(in_ECX + 8) <= piVar17) {
          FUN_00984d5e();
        }
        if (*piVar17 == 2) {
          if (*(int **)(in_ECX + 8) <= piVar17) {
            FUN_00984d5e();
          }
          piVar17[4] = (int)((float)piVar17[4] * *param_1);
          if (*(int **)(in_ECX + 8) <= piVar17) {
            FUN_00984d5e();
          }
          piVar17[5] = (int)((float)piVar17[5] * param_1[5]);
          if (*(int **)(in_ECX + 8) <= piVar17) {
            FUN_00984d5e();
          }
          piVar17[6] = (int)(param_1[10] * (float)piVar17[6]);
        }
      }
    }
    if (*(int **)(in_ECX + 8) <= piVar17) {
      FUN_00984d5e();
    }
    piVar17 = piVar17 + 7;
  }
  return;
}



void FUN_00788da0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  void *_Dst;
  int in_ECX;
  char *_Src;
  int *unaff_FS_OFFSET;
  undefined1 local_28 [4];
  uint local_24;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cb288;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_0078eb40(uVar2);
  do {
    if (iVar3 == 0x4a3a) {
      iVar3 = FUN_0078ec20(local_28);
      local_4 = 0;
      if (*(uint *)(iVar3 + 0x18) < 0x10) {
        _Src = (char *)(iVar3 + 4);
      }
      else {
        _Src = *(char **)(iVar3 + 4);
      }
      pcVar4 = _Src;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      _Dst = (void *)FUN_00401f00(pcVar4 + (1 - (int)(_Src + 1)));
      _memcpy(_Dst,_Src,(size_t)(pcVar4 + (1 - (int)(_Src + 1))));
      *(void **)(in_ECX + 0x68) = _Dst;
      local_4 = 0xffffffff;
      if (0xf < local_10) {
        FUN_00401f20(local_24);
      }
      local_10 = 0xf;
      local_14 = 0;
      local_24 = local_24 & 0xffffff00;
    }
    iVar3 = FUN_0078eb40(uVar2);
  } while (iVar3 != 0x4a39);
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00788e90(int param_1,int param_2,undefined4 param_3)

{
  FUN_00788ae0(param_1,param_2,param_3);
  return param_1 + param_2 * 0x1c;
}



void FUN_00788ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00788630(param_1,param_2,param_3);
  return;
}



void FUN_00788f00(void)

{
  uint uVar1;
  uint uVar2;
  void *_Src;
  void *_Dst;
  rsize_t _DstSize;
  int in_ECX;
  undefined1 local_8 [8];
  
  uVar1 = *(uint *)(in_ECX + 0x100);
  if (uVar1 < *(uint *)(in_ECX + 0xfc)) {
    FUN_00984d5e();
  }
  uVar2 = *(uint *)(in_ECX + 0xfc);
  if (*(uint *)(in_ECX + 0x100) < uVar2) {
    FUN_00984d5e();
  }
  FUN_00439050(local_8,in_ECX + 0xf8,uVar2,in_ECX + 0xf8,uVar1);
  _Src = *(void **)(in_ECX + 0x110);
  if (_Src < *(void **)(in_ECX + 0x10c)) {
    FUN_00984d5e();
  }
  _Dst = *(void **)(in_ECX + 0x10c);
  if (*(void **)(in_ECX + 0x110) < _Dst) {
    FUN_00984d5e();
  }
  if (_Dst != _Src) {
    _DstSize = *(int *)(in_ECX + 0x110) - (int)_Src;
    if (0 < (int)_DstSize) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(rsize_t *)(in_ECX + 0x110) = _DstSize + (int)_Dst;
  }
  return;
}



void FUN_00788fa0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 8));
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}



void FUN_00788fd0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  undefined1 local_8 [8];
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0x60);
    if (uVar2 < *(uint *)(iVar1 + 0x5c)) {
      FUN_00984d5e();
    }
    uVar3 = *(uint *)(iVar1 + 0x5c);
    if (*(uint *)(iVar1 + 0x60) < uVar3) {
      FUN_00984d5e();
    }
    FUN_00439050(local_8,iVar1 + 0x58,uVar3,iVar1 + 0x58,uVar2);
  }
  return;
}



void FUN_00789020(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00788f00();
    return;
  }
  return;
}



void FUN_00789030(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  undefined1 local_8 [8];
  
  iVar1 = *(int *)(in_ECX + 0x50);
  if (iVar1 != 0) {
    if (0xf < *(uint *)(iVar1 + 0x3c)) {
      FUN_00401f20(*(undefined4 *)(iVar1 + 0x28));
    }
    *(undefined4 *)(iVar1 + 0x3c) = 0xf;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined1 *)(iVar1 + 0x28) = 0;
    FUN_00401f20(iVar1);
    *(undefined4 *)(in_ECX + 0x50) = 0;
  }
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0xf0);
    if (uVar2 < *(uint *)(iVar1 + 0xec)) {
      FUN_00984d5e();
    }
    uVar3 = *(uint *)(iVar1 + 0xec);
    if (*(uint *)(iVar1 + 0xf0) < uVar3) {
      FUN_00984d5e();
    }
    FUN_00439050(local_8,iVar1 + 0xe8,uVar3,iVar1 + 0xe8,uVar2);
  }
  iVar1 = *(int *)(in_ECX + 0x60);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0xf0);
    if (uVar2 < *(uint *)(iVar1 + 0xec)) {
      FUN_00984d5e();
    }
    uVar3 = *(uint *)(iVar1 + 0xec);
    if (*(uint *)(iVar1 + 0xf0) < uVar3) {
      FUN_00984d5e();
    }
    FUN_00439050(local_8,iVar1 + 0xe8,uVar3,iVar1 + 0xe8,uVar2);
  }
  return;
}



undefined1 * FUN_007890f0(undefined1 *param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return param_1 + param_2;
}



void FUN_00789120(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  uint in_stack_0000001c;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cb2b8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0xf;
  local_4 = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  FUN_00414420(&param_1,0,0xffffffff);
  if (0xf < in_stack_0000001c) {
    FUN_00401f20(param_2,uVar1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00789190(undefined4 param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *in_ECX;
  char *pcVar8;
  undefined1 *puVar9;
  int *unaff_FS_OFFSET;
  undefined1 local_98 [4];
  uint local_94;
  undefined4 local_84;
  uint local_80;
  undefined1 local_7c [4];
  uint local_78;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [4];
  uint local_5c;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_44 [4];
  uint local_40;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_28 [4];
  uint local_24;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cb339;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff54;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 == '\0') {
    local_80 = 0xf;
    local_84 = 0;
    local_94 = local_94 & 0xffffff00;
    FUN_00414500(&DAT_00a2f7ec,0);
    puVar9 = local_98;
    local_4 = 1;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    piVar5 = __errno();
    pcVar6 = _strerror((char *)*piVar5);
    local_64 = 0xf;
    local_68 = 0;
    local_78 = local_78 & 0xffffff00;
    pcVar8 = pcVar6;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00414500(pcVar6,(int)pcVar8 - (int)(pcVar6 + 1));
    puVar9 = local_7c;
    local_4 = 0;
    bVar3 = true;
    bVar2 = false;
  }
  uVar7 = FUN_006f8d30(local_28,param_1,&DAT_00a8ba64,uVar4);
  local_4 = 2;
  uVar7 = FUN_006f8430(local_60,uVar7,puVar9);
  local_4._0_1_ = 3;
  uVar7 = FUN_006f8d30(local_44,uVar7,&DAT_00a61e98);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_006f7dd0(uVar7);
  if (0xf < local_2c) {
    FUN_00401f20(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = local_40 & 0xffffff00;
  if (0xf < local_48) {
    FUN_00401f20(local_5c);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c = local_5c & 0xffffff00;
  if (0xf < local_10) {
    FUN_00401f20(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = local_24 & 0xffffff00;
  if (bVar2) {
    if (0xf < local_80) {
      FUN_00401f20(local_94);
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94 = local_94 & 0xffffff00;
  }
  if ((bVar3) && (0xf < local_64)) {
    FUN_00401f20(local_78);
  }
  *in_ECX = &PTR_FUN_00a8ba5c;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007893a0(void)

{
  exception *in_ECX;
  
  *(undefined ***)in_ECX = &PTR_FUN_00a7ce9c;
  if (0xf < *(uint *)(in_ECX + 0x24)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x10));
  }
  *(undefined4 *)(in_ECX + 0x24) = 0xf;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  in_ECX[0x10] = (exception)0x0;
  exception::~exception(in_ECX);
  return;
}



void FUN_007893e0(byte param_1)

{
  exception *in_ECX;
  
  *(undefined ***)in_ECX = &PTR_FUN_00a7ce9c;
  if (0xf < *(uint *)(in_ECX + 0x24)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x10));
  }
  *(undefined4 *)(in_ECX + 0x24) = 0xf;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  in_ECX[0x10] = (exception)0x0;
  exception::~exception(in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_00789430(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int in_ECX;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  uint local_434;
  int local_430;
  undefined1 local_42c [4];
  uint local_428;
  undefined4 local_418;
  uint local_414;
  char local_410 [1024];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cb36b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_434;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffbbc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(uint *)(in_ECX + 0x18) < 0x10) {
    pcVar8 = (char *)(in_ECX + 4);
  }
  else {
    pcVar8 = *(char **)(in_ECX + 4);
  }
  pcVar9 = local_410;
  do {
    cVar1 = *pcVar8;
    *pcVar9 = cVar1;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  local_434 = *(uint *)(in_ECX + 0x14);
  local_430 = param_1;
  uVar2 = local_434;
  do {
    uVar3 = uVar2;
    uVar2 = uVar3 - 1;
    if ((int)uVar2 < 0) goto LAB_00789542;
    if (*(uint *)(in_ECX + 0x14) < uVar2) {
      FUN_00984d5e(uVar4);
    }
    puVar6 = (undefined4 *)(in_ECX + 4);
    puVar5 = puVar6;
    if (0xf < *(uint *)(in_ECX + 0x18)) {
      puVar5 = (undefined4 *)*puVar6;
    }
    if (*(char *)((int)puVar5 + uVar2) == '/') break;
    if (*(uint *)(in_ECX + 0x14) < uVar2) {
      FUN_00984d5e(uVar4);
    }
    if (0xf < *(uint *)(in_ECX + 0x18)) {
      puVar6 = (undefined4 *)*puVar6;
    }
  } while (*(char *)((int)puVar6 + uVar2) != '\\');
  iVar10 = 0;
  if ((int)uVar3 < (int)local_434) {
    iVar10 = local_434 - uVar3;
    uVar4 = uVar3;
    do {
      if (*(uint *)(in_ECX + 0x14) < uVar4) {
        FUN_00984d5e();
      }
      if (*(uint *)(in_ECX + 0x18) < 0x10) {
        iVar7 = in_ECX + 4;
      }
      else {
        iVar7 = *(int *)(in_ECX + 4);
      }
      local_410[uVar4 - uVar3] = *(char *)(uVar4 + iVar7);
      uVar4 = uVar4 + 1;
      param_1 = local_430;
    } while ((int)uVar4 < (int)local_434);
  }
  local_410[iVar10] = '\0';
LAB_00789542:
  pcVar8 = local_410;
  local_414 = 0xf;
  local_418 = 0;
  local_428 = local_428 & 0xffffff00;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00414500(local_410,(int)pcVar8 - (int)(local_410 + 1));
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00414420(local_42c,0,0xffffffff);
  if (0xf < local_414) {
    FUN_00401f20(local_428);
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_00789610(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  undefined1 local_94 [4];
  undefined1 local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [4];
  undefined1 local_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [40];
  undefined1 local_34 [40];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cb3b3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff60;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_0078eb40(uVar2);
  while( true ) {
    switch(iVar3) {
    case 0x232a:
      uVar4 = FUN_0078eb40(uVar2);
      *(undefined4 *)(in_ECX + 0x18) = uVar4;
      break;
    case 0x232b:
      fVar5 = (float10)FUN_0078eb10();
      *(float *)(in_ECX + 0x1c) = (float)fVar5;
      break;
    case 0x232c:
      fVar5 = (float10)FUN_0078eb10();
      *(float *)(in_ECX + 0x20) = (float)fVar5;
      break;
    case 0x232d:
      FUN_007a28e0(param_1);
      break;
    default:
      local_7c = 0xf;
      local_80 = 0;
      local_90 = 0;
      FUN_00414500("malformed lod info",0x12);
      local_4 = 0;
      FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_34,&DAT_00af39e4);
    case 0x2331:
      fVar5 = (float10)FUN_0078eb10();
      *(float *)(in_ECX + 0x24) = (float)fVar5;
    }
    cVar1 = FUN_00787810();
    if (cVar1 != '\0') break;
    iVar3 = FUN_0078eb40();
    if (iVar3 == 0x2329) {
      *unaff_FS_OFFSET = local_c;
      return;
    }
  }
  local_60 = 0xf;
  local_64 = 0;
  local_74 = 0;
  FUN_00414500("premature end of file reached parsing new lod info",0x32);
  local_4 = 1;
  FUN_00789190(local_78,0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_5c,&DAT_00af39e4);
}



void FUN_007897b0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_94 [4];
  undefined1 local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [4];
  undefined1 local_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [40];
  undefined1 local_34 [40];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cb3f3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff60;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_0078eb40(uVar2);
  while( true ) {
    if (iVar3 != 0x2afa) {
      local_60 = 0xf;
      local_64 = 0;
      local_74 = 0;
      FUN_00414500("malformed new wind info",0x17);
      local_4 = 0;
      FUN_00789190(local_78,0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_5c,&DAT_00af39e4);
    }
    uVar4 = FUN_0078eb40(uVar2);
    *(undefined4 *)(*in_ECX + 0xf0) = uVar4;
    cVar1 = FUN_00787810();
    if (cVar1 != '\0') break;
    iVar3 = FUN_0078eb40(uVar2);
    if (iVar3 == 0x2af9) {
      *unaff_FS_OFFSET = local_c;
      return;
    }
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90 = 0;
  FUN_00414500("premature end of file reached parsing new wind info",0x33);
  local_4 = 1;
  FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00af39e4);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_007898d0(uint *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  bool bVar9;
  float10 fVar10;
  undefined1 auStack_104 [12];
  undefined4 uStack_f8;
  undefined *puStack_f4;
  char *pcStack_f0;
  undefined1 *puStack_ec;
  uint local_e8;
  undefined1 *local_d4;
  undefined1 local_d0 [4];
  uint local_cc;
  undefined4 local_bc;
  uint local_b8;
  undefined1 local_b4 [4];
  undefined1 local_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [4];
  undefined1 local_94;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c [40];
  undefined1 local_54 [44];
  undefined4 local_28;
  uint local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cb4d9;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_d4;
  local_e8 = DAT_00b30aac ^ (uint)&stack0xffffff1c;
  *unaff_FS_OFFSET = (int)&local_c;
  puStack_ec = (undefined1 *)0x54;
  pcStack_f0 = (char *)0x78991b;
  puVar3 = (undefined4 *)FUN_00401f00();
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[0xc] = 0xf;
    puVar3[0xb] = 0;
    *(undefined1 *)(puVar3 + 7) = 0;
    puVar3[0xd] = 0x3f800000;
    puVar3[0xe] = 0x3f800000;
    puVar3[0xf] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x14] = 0;
    puVar3[0x10] = 0x3f800000;
    puVar3[0x13] = 0x3f800000;
  }
  *(undefined4 **)(in_ECX + 0x4c) = puVar3;
  puStack_ec = (undefined1 *)0x78996c;
  iVar4 = FUN_0078eb40();
  while( true ) {
    switch(iVar4) {
    case 0x2712:
      puStack_ec = (undefined1 *)0x78998c;
      uVar5 = FUN_0078eb40();
      **(undefined4 **)(in_ECX + 0x4c) = uVar5;
      if (0 < **(int **)(in_ECX + 0x4c)) {
        lVar1 = (ulonglong)(uint)(**(int **)(in_ECX + 0x4c) * 8) * 4;
        puStack_ec = (undefined1 *)(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
        pcStack_f0 = (char *)0x7899ba;
        uVar5 = FUN_00401f00();
        *(undefined4 *)(*(int *)(in_ECX + 0x4c) + 4) = uVar5;
        local_d4 = (undefined1 *)0x0;
        if (0 < **(int **)(in_ECX + 0x4c)) {
          do {
            iVar8 = (int)local_d4 << 5;
            iVar4 = 8;
            do {
              puStack_ec = (undefined1 *)0x7899e7;
              fVar10 = (float10)FUN_0078eb10();
              *(float *)(*(int *)(*(int *)(in_ECX + 0x4c) + 4) + iVar8) = (float)fVar10;
              iVar8 = iVar8 + 4;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            local_d4 = local_d4 + 1;
          } while ((int)local_d4 < **(int **)(in_ECX + 0x4c));
        }
      }
      break;
    case 0x2713:
      puStack_ec = (undefined1 *)0x789a18;
      uVar5 = FUN_0078eb40();
      *(undefined4 *)(*(int *)(in_ECX + 0x4c) + 8) = uVar5;
      iVar4 = *(int *)(*(int *)(in_ECX + 0x4c) + 8);
      if (0 < iVar4) {
        lVar1 = (ulonglong)(uint)(iVar4 * 8) * 4;
        puStack_ec = (undefined1 *)(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
        pcStack_f0 = (char *)0x789a48;
        uVar5 = FUN_00401f00();
        *(undefined4 *)(*(int *)(in_ECX + 0x4c) + 0xc) = uVar5;
        local_d4 = (undefined1 *)0x0;
        if (0 < *(int *)(*(int *)(in_ECX + 0x4c) + 8)) {
          do {
            uVar7 = 0;
            iVar4 = (int)local_d4 << 5;
            do {
              puStack_ec = (undefined1 *)0x789a6f;
              fVar10 = (float10)FUN_0078eb10();
              *(float *)(*(int *)(*(int *)(in_ECX + 0x4c) + 0xc) + iVar4) = (float)fVar10;
              uVar6 = uVar7 & 0x80000001;
              bVar9 = uVar6 == 0;
              if ((int)uVar6 < 0) {
                bVar9 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
              }
              if ((!bVar9) && (DAT_00b4297d != '\0')) {
                iVar8 = *(int *)(*(int *)(in_ECX + 0x4c) + 0xc);
                *(float *)(iVar8 + iVar4) = -*(float *)(iVar8 + iVar4);
              }
              uVar7 = uVar7 + 1;
              iVar4 = iVar4 + 4;
            } while ((int)uVar7 < 8);
            local_d4 = local_d4 + 1;
          } while ((int)local_d4 < *(int *)(*(int *)(in_ECX + 0x4c) + 8));
        }
      }
      break;
    case 0x2714:
      puStack_ec = (undefined1 *)0x789ace;
      uVar5 = FUN_0078eb40();
      *(undefined4 *)(*(int *)(in_ECX + 0x4c) + 0x10) = uVar5;
      iVar4 = *(int *)(*(int *)(in_ECX + 0x4c) + 0x10);
      if (0 < iVar4) {
        lVar1 = (ulonglong)(uint)(iVar4 * 8) * 4;
        puStack_ec = (undefined1 *)(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
        pcStack_f0 = (char *)0x789afe;
        uVar5 = FUN_00401f00();
        *(undefined4 *)(*(int *)(in_ECX + 0x4c) + 0x14) = uVar5;
        local_d4 = (undefined1 *)0x0;
        if (0 < *(int *)(*(int *)(in_ECX + 0x4c) + 0x10)) {
          do {
            iVar8 = (int)local_d4 << 5;
            iVar4 = 8;
            do {
              puStack_ec = (undefined1 *)0x789b2a;
              fVar10 = (float10)FUN_0078eb10();
              *(float *)(*(int *)(*(int *)(in_ECX + 0x4c) + 0x14) + iVar8) = (float)fVar10;
              iVar8 = iVar8 + 4;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            local_d4 = local_d4 + 1;
          } while ((int)local_d4 < *(int *)(*(int *)(in_ECX + 0x4c) + 0x10));
        }
      }
      break;
    case 0x2715:
      local_d4 = auStack_104;
      FUN_0078ec20(auStack_104);
      FUN_00789120();
      puStack_ec = local_d0;
      local_4 = 0;
      pcStack_f0 = (char *)0x789b8a;
      puStack_f4 = (undefined *)FUN_00789430();
      puStack_ec = (undefined1 *)0xffffffff;
      pcStack_f0 = (char *)0x0;
      local_4 = CONCAT31(local_4._1_3_,1);
      uStack_f8 = 0x789ba1;
      FUN_00414420();
      if (0xf < local_b8) {
        puStack_ec = (undefined1 *)local_cc;
        pcStack_f0 = (char *)0x789bb6;
        FUN_00401f20();
      }
      local_b8 = 0xf;
      local_bc = 0;
      local_cc = local_cc & 0xffffff00;
      local_4 = 0xffffffff;
      if (0xf < local_14) {
        puStack_ec = (undefined1 *)local_28;
        pcStack_f0 = (char *)0x789beb;
        FUN_00401f20();
      }
      break;
    case 0x2716:
      uVar7 = *param_1;
      *param_1 = uVar7 + 1;
      if ((param_1[2] == 0) || (param_1[3] - param_1[2] <= uVar7)) {
        puStack_ec = (undefined1 *)0x789c0c;
        FUN_00984d5e();
      }
      *(bool *)(in_ECX + 0x6d) = *(char *)(param_1[2] + uVar7) != '\0';
      break;
    case 0x2717:
      uVar7 = *param_1;
      *param_1 = uVar7 + 1;
      if ((param_1[2] == 0) || (param_1[3] - param_1[2] <= uVar7)) {
        puStack_ec = (undefined1 *)0x789c37;
        FUN_00984d5e();
      }
      *(bool *)(in_ECX + 0x6c) = *(char *)(param_1[2] + uVar7) != '\0';
      break;
    default:
      puStack_ec = (undefined1 *)0x1c;
      pcStack_f0 = "malformed texture coord info";
      local_9c = 0xf;
      local_a0 = 0;
      local_b0 = 0;
      puStack_f4 = (undefined *)0x789cfc;
      FUN_00414500();
      puStack_ec = (undefined1 *)0x0;
      pcStack_f0 = local_b4;
      local_4 = 2;
      puStack_f4 = (undefined *)0x789d16;
      FUN_00789190();
      puStack_ec = &DAT_00af39e4;
      pcStack_f0 = local_7c;
                    /* WARNING: Subroutine does not return */
      puStack_f4 = &UNK_00789d25;
      __CxxThrowException_8();
    }
    puStack_ec = (undefined1 *)0x789c4b;
    cVar2 = FUN_00787810();
    if (cVar2 != '\0') break;
    puStack_ec = (undefined1 *)0x789c56;
    iVar4 = FUN_0078eb40();
    if (iVar4 == 0x2711) {
      *unaff_FS_OFFSET = local_c;
      return;
    }
  }
  puStack_ec = (undefined1 *)0x3d;
  pcStack_f0 = "premature end of file reached parsing texture coordinate info";
  local_80 = 0xf;
  local_84 = 0;
  local_94 = 0;
  puStack_f4 = (undefined *)0x789cac;
  FUN_00414500();
  puStack_ec = (undefined1 *)0x0;
  pcStack_f0 = local_98;
  local_4 = 3;
  puStack_f4 = (undefined *)0x789cc9;
  FUN_00789190();
  puStack_ec = &DAT_00af39e4;
  pcStack_f0 = local_54;
                    /* WARNING: Subroutine does not return */
  puStack_f4 = (undefined *)0x789cdb;
  __CxxThrowException_8();
}



void FUN_00789d40(uint param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int in_ECX;
  char *pcVar7;
  int *unaff_FS_OFFSET;
  undefined4 local_24;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c8eb8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = *(int *)(in_ECX + 0x58);
  if (iVar4 == 0) {
    FUN_00414500("no collision objects are stored with this tree",0x2e);
  }
  else {
    if ((*(int *)(iVar4 + 4) != 0) &&
       (param_1 < (uint)((*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4)) / 0x1c))) {
      puVar6 = (undefined4 *)FUN_007876f0(param_1);
      *param_2 = *puVar6;
      iVar4 = FUN_007876f0(param_1);
      *param_3 = *(undefined4 *)(iVar4 + 4);
      param_3[1] = *(undefined4 *)(iVar4 + 8);
      param_3[2] = *(undefined4 *)(iVar4 + 0xc);
      iVar4 = FUN_007876f0(param_1);
      *param_4 = *(undefined4 *)(iVar4 + 0x10);
      param_4[1] = *(undefined4 *)(iVar4 + 0x14);
      param_4[2] = *(undefined4 *)(iVar4 + 0x18);
      *unaff_FS_OFFSET = local_c;
      return;
    }
    iVar3 = 0;
    if (*(int *)(iVar4 + 4) != 0) {
      iVar3 = (*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4)) / 0x1c;
    }
    iVar4 = FUN_007a54a0("collision object index (%d) exceeds maximum index (%d)",param_1,iVar3,
                         uVar2);
    local_4 = 0;
    if (*(uint *)(iVar4 + 0x18) < 0x10) {
      pcVar7 = (char *)(iVar4 + 4);
    }
    else {
      pcVar7 = *(char **)(iVar4 + 4);
    }
    pcVar5 = pcVar7;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00414500(pcVar7,(int)pcVar5 - (int)(pcVar7 + 1));
    if (0xf < local_10) {
      FUN_00401f20(local_24);
      *unaff_FS_OFFSET = local_c;
      return;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00789ec0(void)

{
  int iVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb430;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if ((((*(char *)(in_ECX + 0x45) != '\0') && (iVar1 = *(int *)(in_ECX + 0x60), iVar1 != 0)) &&
      (*(int *)(in_ECX + 0x34) == 0)) &&
     ((*(int **)(in_ECX + 0x30) != (int *)0x0 && (**(int **)(in_ECX + 0x30) == 1)))) {
    FUN_00797270();
    FUN_00401f20(iVar1);
    *(undefined4 *)(in_ECX + 0x60) = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_00789fe0(char *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;
  int *in_ECX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_c;
  float local_8;
  undefined1 local_4 [4];
  
  piVar2 = (int *)param_1;
  iVar5 = in_ECX[1];
  if (iVar5 == 0) {
    param_2 = 0x46;
    param_1 = "no branch geometry exists, possible prior call to DeleteBranchGeometry";
    FUN_00414500();
    return;
  }
  if (*(int *)(iVar5 + 0x6c) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(iVar5 + 0x70) - *(int *)(iVar5 + 0x6c) >> 2;
  }
  *(short *)((int)param_1 + 0x10) = (short)(uVar4 / 3);
  iVar5 = in_ECX[1];
  iVar1 = *(int *)(iVar5 + 0x5c);
  if ((iVar1 == 0) || (*(int *)(iVar5 + 0x60) - iVar1 >> 2 == 0)) {
    iVar5 = 0;
  }
  else {
    if ((iVar1 == 0) || (*(int *)(iVar5 + 0x60) - iVar1 >> 2 == 0)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(iVar5 + 0x5c);
  }
  piVar2[5] = iVar5;
  iVar5 = in_ECX[1];
  iVar1 = *(int *)(iVar5 + 0x6c);
  if ((iVar1 == 0) || (*(int *)(iVar5 + 0x70) - iVar1 >> 2 == 0)) {
    iVar5 = 0;
  }
  else {
    if ((iVar1 == 0) || (*(int *)(iVar5 + 0x70) - iVar1 >> 2 == 0)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(iVar5 + 0x6c);
  }
  piVar2[9] = iVar5;
  iVar5 = in_ECX[1];
  iVar1 = *(int *)(iVar5 + 0x8c);
  if ((iVar1 == 0) || (*(int *)(iVar5 + 0x90) - iVar1 >> 2 == 0)) {
    iVar5 = 0;
  }
  else {
    if ((iVar1 == 0) || (*(int *)(iVar5 + 0x90) - iVar1 >> 2 == 0)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(iVar5 + 0x8c);
  }
  piVar2[6] = iVar5;
  iVar5 = in_ECX[1];
  iVar1 = *(int *)(iVar5 + 0x9c);
  if ((iVar1 == 0) || (*(int *)(iVar5 + 0xa0) - iVar1 >> 2 == 0)) {
    iVar5 = 0;
  }
  else {
    if ((iVar1 == 0) || (*(int *)(iVar5 + 0xa0) - iVar1 >> 2 == 0)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(iVar5 + 0x9c);
  }
  piVar2[7] = iVar5;
  iVar5 = in_ECX[1];
  iVar1 = *(int *)(iVar5 + 0xac);
  if ((iVar1 == 0) || (*(int *)(iVar5 + 0xb0) - iVar1 >> 2 == 0)) {
    iVar5 = 0;
  }
  else {
    if ((iVar1 == 0) || (*(int *)(iVar5 + 0xb0) - iVar1 >> 2 == 0)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(iVar5 + 0xac);
  }
  piVar2[8] = iVar5;
  iVar5 = in_ECX[1];
  iVar1 = *(int *)(iVar5 + 0xbc);
  if ((iVar1 == 0) || (*(int *)(iVar5 + 0xc0) - iVar1 >> 2 == 0)) {
    iVar5 = 0;
  }
  else {
    if ((iVar1 == 0) || (*(int *)(iVar5 + 0xc0) - iVar1 >> 2 == 0)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(iVar5 + 0xbc);
  }
  piVar2[10] = iVar5;
  iVar5 = in_ECX[1];
  iVar1 = *(int *)(iVar5 + 0xec);
  if ((iVar1 == 0) || (*(int *)(iVar5 + 0xf0) - iVar1 >> 2 == 0)) {
    iVar5 = 0;
  }
  else {
    if ((iVar1 == 0) || (*(int *)(iVar5 + 0xf0) - iVar1 >> 2 == 0)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(iVar5 + 0xec);
  }
  piVar2[0xb] = iVar5;
  iVar5 = in_ECX[1];
  iVar1 = *(int *)(iVar5 + 0xfc);
  if ((iVar1 == 0) || (*(int *)(iVar5 + 0x100) - iVar1 >> 2 == 0)) {
    iVar5 = 0;
  }
  else {
    if ((iVar1 == 0) || (*(int *)(iVar5 + 0x100) - iVar1 >> 2 == 0)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(iVar5 + 0xfc);
  }
  piVar2[0xc] = iVar5;
  iVar5 = in_ECX[1];
  iVar1 = *(int *)(iVar5 + 0x10c);
  if ((iVar1 == 0) || (*(int *)(iVar5 + 0x110) == iVar1)) {
    iVar5 = 0;
  }
  else {
    if ((iVar1 == 0) || (*(int *)(iVar5 + 0x110) == iVar1)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(iVar5 + 0x10c);
  }
  uVar4 = param_2 & 0xffff;
  piVar2[0xd] = iVar5;
  if ((short)param_2 == -1) {
    uVar4 = FUN_00787c10(0xbf800000);
  }
  uVar6 = uVar4 & 0xffff;
  *piVar2 = (int)(short)uVar4;
  uVar3 = FUN_007886c0(uVar6);
  *(undefined2 *)(piVar2 + 1) = uVar3;
  iVar5 = FUN_00788720(uVar6);
  piVar2[2] = iVar5;
  iVar5 = FUN_007945b0(uVar6);
  piVar2[3] = iVar5;
  if (DAT_00b4297c != '\0') {
    local_c = -0x40800000;
    uVar4 = (uint)(ushort)(*(short *)(*in_ECX + 0xc0) + 1);
    param_1 = (char *)0xffffffff;
    if (in_ECX[0xd] == 0) {
      param_2 = *(undefined4 *)(*in_ECX + 0x14);
    }
    else {
      param_2 = *(undefined4 *)(in_ECX[0xd] + 0x10);
    }
    local_8 = (float)*(byte *)(in_ECX + 0x11);
    FUN_00787220(param_2,uVar4,in_ECX[7],in_ECX[10],in_ECX[8],local_8,&local_c,local_4,&param_1,
                 &param_2);
    if ((int)(short)param_1 == uVar4 - 2) {
      piVar2[0xe] = local_c;
      return;
    }
    if ((int)(short)param_1 == uVar4 - 1) {
      *piVar2 = -1;
      piVar2[0xe] = 0x437f0000;
      return;
    }
    piVar2[0xe] = (int)local_8;
    return;
  }
  piVar2[0xe] = (int)(float)*(byte *)(in_ECX + 0x11);
  return;
}



void FUN_0078a390(char *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int *in_ECX;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 local_c;
  float local_8;
  undefined1 local_4 [4];
  
  iVar3 = (int)param_1;
  iVar1 = in_ECX[0x18];
  if (iVar1 == 0) {
    param_2 = 0x44;
    param_1 = "no frond geometry exists, possible prior call to DeleteFrondGeometry";
    FUN_00414500();
    return;
  }
  if (*(int *)(iVar1 + 0x6c) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)(iVar1 + 0x70) - *(int *)(iVar1 + 0x6c) >> 2;
  }
  *(short *)((int)param_1 + 0x4c) = (short)(uVar5 / 3);
  iVar1 = in_ECX[0x18];
  iVar2 = *(int *)(iVar1 + 0x5c);
  if ((iVar2 == 0) || (*(int *)(iVar1 + 0x60) - iVar2 >> 2 == 0)) {
    uVar6 = 0;
  }
  else {
    if ((iVar2 == 0) || (*(int *)(iVar1 + 0x60) - iVar2 >> 2 == 0)) {
      FUN_00984d5e();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0x5c);
  }
  *(undefined4 *)(iVar3 + 0x50) = uVar6;
  iVar1 = in_ECX[0x18];
  iVar2 = *(int *)(iVar1 + 0x6c);
  if ((iVar2 == 0) || (*(int *)(iVar1 + 0x70) - iVar2 >> 2 == 0)) {
    uVar6 = 0;
  }
  else {
    if ((iVar2 == 0) || (*(int *)(iVar1 + 0x70) - iVar2 >> 2 == 0)) {
      FUN_00984d5e();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0x6c);
  }
  *(undefined4 *)(iVar3 + 0x60) = uVar6;
  iVar1 = in_ECX[0x18];
  iVar2 = *(int *)(iVar1 + 0x8c);
  if ((iVar2 == 0) || (*(int *)(iVar1 + 0x90) - iVar2 >> 2 == 0)) {
    uVar6 = 0;
  }
  else {
    if ((iVar2 == 0) || (*(int *)(iVar1 + 0x90) - iVar2 >> 2 == 0)) {
      FUN_00984d5e();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0x8c);
  }
  *(undefined4 *)(iVar3 + 0x54) = uVar6;
  iVar1 = in_ECX[0x18];
  iVar2 = *(int *)(iVar1 + 0x9c);
  if ((iVar2 == 0) || (*(int *)(iVar1 + 0xa0) - iVar2 >> 2 == 0)) {
    uVar6 = 0;
  }
  else {
    if ((iVar2 == 0) || (*(int *)(iVar1 + 0xa0) - iVar2 >> 2 == 0)) {
      FUN_00984d5e();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0x9c);
  }
  *(undefined4 *)(iVar3 + 0x58) = uVar6;
  iVar1 = in_ECX[0x18];
  iVar2 = *(int *)(iVar1 + 0xac);
  if ((iVar2 == 0) || (*(int *)(iVar1 + 0xb0) - iVar2 >> 2 == 0)) {
    uVar6 = 0;
  }
  else {
    if ((iVar2 == 0) || (*(int *)(iVar1 + 0xb0) - iVar2 >> 2 == 0)) {
      FUN_00984d5e();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0xac);
  }
  *(undefined4 *)(iVar3 + 0x5c) = uVar6;
  iVar1 = in_ECX[0x18];
  iVar2 = *(int *)(iVar1 + 0xbc);
  if ((iVar2 == 0) || (*(int *)(iVar1 + 0xc0) - iVar2 >> 2 == 0)) {
    uVar6 = 0;
  }
  else {
    if ((iVar2 == 0) || (*(int *)(iVar1 + 0xc0) - iVar2 >> 2 == 0)) {
      FUN_00984d5e();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0xbc);
  }
  *(undefined4 *)(iVar3 + 100) = uVar6;
  iVar1 = in_ECX[0x18];
  iVar2 = *(int *)(iVar1 + 0xec);
  if ((iVar2 == 0) || (*(int *)(iVar1 + 0xf0) - iVar2 >> 2 == 0)) {
    uVar6 = 0;
  }
  else {
    if ((iVar2 == 0) || (*(int *)(iVar1 + 0xf0) - iVar2 >> 2 == 0)) {
      FUN_00984d5e();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0xec);
  }
  *(undefined4 *)(iVar3 + 0x68) = uVar6;
  iVar1 = in_ECX[0x18];
  iVar2 = *(int *)(iVar1 + 0xfc);
  if ((iVar2 == 0) || (*(int *)(iVar1 + 0x100) - iVar2 >> 2 == 0)) {
    uVar6 = 0;
  }
  else {
    if ((iVar2 == 0) || (*(int *)(iVar1 + 0x100) - iVar2 >> 2 == 0)) {
      FUN_00984d5e();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0xfc);
  }
  *(undefined4 *)(iVar3 + 0x6c) = uVar6;
  iVar1 = in_ECX[0x18];
  iVar2 = *(int *)(iVar1 + 0x10c);
  if ((iVar2 == 0) || (*(int *)(iVar1 + 0x110) == iVar2)) {
    uVar6 = 0;
  }
  else {
    if ((iVar2 == 0) || (*(int *)(iVar1 + 0x110) == iVar2)) {
      FUN_00984d5e();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0x10c);
  }
  uVar5 = param_2 & 0xffff;
  *(undefined4 *)(iVar3 + 0x70) = uVar6;
  if ((short)param_2 == -1) {
    uVar5 = FUN_00787c70(0xbf800000);
  }
  uVar7 = uVar5 & 0xffff;
  *(int *)(iVar3 + 0x3c) = (int)(short)uVar5;
  uVar4 = FUN_007886c0(uVar7);
  *(undefined2 *)(iVar3 + 0x40) = uVar4;
  uVar6 = FUN_00788720(uVar7);
  *(undefined4 *)(iVar3 + 0x44) = uVar6;
  uVar6 = FUN_007945b0(uVar7);
  *(undefined4 *)(iVar3 + 0x48) = uVar6;
  if (DAT_00b4297c != '\0') {
    local_c = 0xbf800000;
    uVar5 = (uint)(ushort)(*(short *)(*in_ECX + 0xc0) + 1);
    param_1 = (char *)0xffffffff;
    if (in_ECX[0xd] == 0) {
      param_2 = *(undefined4 *)(*in_ECX + 0x14);
    }
    else {
      param_2 = *(undefined4 *)(in_ECX[0xd] + 0x10);
    }
    local_8 = (float)*(byte *)(in_ECX + 0x11);
    FUN_00787220(param_2,uVar5,in_ECX[7],in_ECX[10],in_ECX[8],local_8,&local_c,local_4,&param_1,
                 &param_2);
    if ((int)(short)param_1 == uVar5 - 2) {
      *(undefined4 *)(iVar3 + 0x74) = local_c;
      return;
    }
    if ((int)(short)param_1 == uVar5 - 1) {
      *(undefined4 *)(iVar3 + 0x74) = 0x437f0000;
      *(undefined4 *)(iVar3 + 0x3c) = 0xffffffff;
      return;
    }
    *(float *)(iVar3 + 0x74) = local_8;
    return;
  }
  *(float *)(iVar3 + 0x74) = (float)*(byte *)(in_ECX + 0x11);
  return;
}



int FUN_0078a740(void)

{
  float fVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb460;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if (in_ECX[0xb] == 0) {
    uVar3 = (uint)*(ushort *)(*in_ECX + 0xc0);
    iVar2 = FUN_00401f00(uVar3 * 4);
    in_ECX[0xb] = iVar2;
    iVar2 = 0;
    while (iVar2 < (int)uVar3) {
      if (uVar3 == 0) {
        iVar2 = iVar2 + 1;
        *(undefined4 *)(in_ECX[0xb] + -4 + iVar2 * 4) = 0x3f800000;
      }
      else {
        fVar1 = (float)iVar2;
        iVar2 = iVar2 + 1;
        *(float *)(in_ECX[0xb] + -4 + iVar2 * 4) = (float)in_ECX[9] * fVar1 + 1.0;
      }
    }
  }
  iVar2 = in_ECX[0xb];
  *unaff_FS_OFFSET = local_10;
  return iVar2;
}



void FUN_0078a890(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb490;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  iVar3 = *in_ECX;
  local_8 = 0;
  if (*(uint *)(iVar3 + 0x3c) < 0x10) {
    iVar3 = iVar3 + 0x28;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x28);
  }
  *param_1 = iVar3;
  iVar3 = *in_ECX;
  uVar4 = 0;
  if (*(int *)(iVar3 + 0x98) != 0) {
    uVar4 = (*(int *)(iVar3 + 0x9c) - *(int *)(iVar3 + 0x98)) / 0x54;
  }
  param_1[1] = uVar4;
  if (uVar4 == 0) {
    param_1[2] = 0;
  }
  else {
    iVar1 = FUN_00401f00(-(uint)((int)((ulonglong)uVar4 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar4 * 4));
    param_1[2] = iVar1;
    uVar4 = 0;
    while (uVar2 = FUN_007876a0(), uVar4 < uVar2) {
      if ((*(int *)(iVar3 + 0x98) == 0) ||
         ((uint)((*(int *)(iVar3 + 0x9c) - *(int *)(iVar3 + 0x98)) / 0x54) <= uVar4)) {
        FUN_00984d5e();
      }
      iVar1 = uVar4 * 0x54 + 0x14 + *(int *)(iVar3 + 0x98);
      if (*(uint *)(uVar4 * 0x54 + 0x2c + *(int *)(iVar3 + 0x98)) < 0x10) {
        *(int *)(param_1[2] + uVar4 * 4) = iVar1 + 4;
        uVar4 = uVar4 + 1;
      }
      else {
        *(undefined4 *)(param_1[2] + uVar4 * 4) = *(undefined4 *)(iVar1 + 4);
        uVar4 = uVar4 + 1;
      }
    }
  }
  iVar3 = *(int *)(in_ECX[0x17] + 0x44);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(in_ECX[0x17] + 0x48) - iVar3) / 0x2c;
  }
  param_1[3] = uVar4;
  if (uVar4 == 0) {
    param_1[4] = 0;
  }
  else {
    iVar3 = FUN_00401f00(-(uint)((int)((ulonglong)uVar4 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar4 * 4));
    param_1[4] = iVar3;
    uVar4 = 0;
    while (uVar4 < (uint)param_1[3]) {
      iVar3 = in_ECX[0x17];
      if ((*(int *)(iVar3 + 0x44) == 0) ||
         ((uint)((*(int *)(iVar3 + 0x48) - *(int *)(iVar3 + 0x44)) / 0x2c) <= uVar4)) {
        FUN_00984d5e();
      }
      iVar3 = uVar4 * 0x2c + *(int *)(iVar3 + 0x44);
      if (*(uint *)(iVar3 + 0x18) < 0x10) {
        *(int *)(param_1[4] + uVar4 * 4) = iVar3 + 4;
        uVar4 = uVar4 + 1;
      }
      else {
        *(undefined4 *)(param_1[4] + uVar4 * 4) = *(undefined4 *)(iVar3 + 4);
        uVar4 = uVar4 + 1;
      }
    }
  }
  iVar3 = in_ECX[0x14];
  if (iVar3 != 0) {
    if (*(uint *)(iVar3 + 0x3c) < 0x10) {
      iVar3 = iVar3 + 0x28;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x28);
    }
    param_1[6] = iVar3;
  }
  iVar3 = in_ECX[0x13];
  if (iVar3 != 0) {
    if (*(uint *)(iVar3 + 0x30) < 0x10) {
      iVar3 = iVar3 + 0x1c;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x1c);
    }
    param_1[5] = iVar3;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0078ab60(uint *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar4;
  undefined1 auStack_104 [12];
  undefined4 uStack_f8;
  undefined **ppuStack_f4;
  char *pcStack_f0;
  undefined1 *puStack_ec;
  uint local_e8;
  undefined1 *local_d4;
  undefined1 local_d0 [4];
  uint local_cc;
  undefined4 local_bc;
  uint local_b8;
  undefined1 local_b4 [4];
  undefined1 local_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [4];
  undefined1 local_94;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c [40];
  undefined1 local_54 [44];
  undefined4 local_28;
  uint local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cb4d9;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_d4;
  local_e8 = DAT_00b30aac ^ (uint)&stack0xffffff1c;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x4c) != 0) {
    puStack_ec = (undefined1 *)0x78abb6;
    iVar3 = FUN_0078eb40();
    do {
      switch(iVar3) {
      case 0x4e22:
        local_d4 = auStack_104;
        FUN_0078ec20(auStack_104);
        FUN_00789120();
        puStack_ec = local_d0;
        local_4 = 0;
        pcStack_f0 = (char *)0x78ac0a;
        ppuStack_f4 = (undefined **)FUN_00789430();
        puStack_ec = (undefined1 *)0xffffffff;
        pcStack_f0 = (char *)0x0;
        local_4 = CONCAT31(local_4._1_3_,1);
        uStack_f8 = 0x78ac21;
        FUN_00414420();
        if (0xf < local_b8) {
          puStack_ec = (undefined1 *)local_cc;
          pcStack_f0 = (char *)0x78ac36;
          FUN_00401f20();
        }
        local_b8 = 0xf;
        local_bc = 0;
        local_cc = local_cc & 0xffffff00;
        local_4 = 0xffffffff;
        if (0xf < local_14) {
          puStack_ec = (undefined1 *)local_28;
          pcStack_f0 = (char *)0x78ac6e;
          FUN_00401f20();
        }
        break;
      case 0x4e23:
        uVar1 = *param_1;
        *param_1 = uVar1 + 1;
        if ((param_1[2] == 0) || (param_1[3] - param_1[2] <= uVar1)) {
          puStack_ec = (undefined1 *)0x78ac8f;
          FUN_00984d5e();
        }
        *(bool *)(in_ECX + 0x6d) = *(char *)(uVar1 + param_1[2]) != '\0';
        break;
      case 0x4e24:
        uVar1 = *param_1;
        *param_1 = uVar1 + 1;
        if ((param_1[2] == 0) || (param_1[3] - param_1[2] <= uVar1)) {
          puStack_ec = (undefined1 *)0x78acb9;
          FUN_00984d5e();
        }
        *(bool *)(in_ECX + 0x6c) = *(char *)(uVar1 + param_1[2]) != '\0';
        break;
      case 0x4e25:
        iVar3 = 0x34;
        do {
          puStack_ec = (undefined1 *)0x78acd7;
          fVar4 = (float10)FUN_0078eb10();
          *(float *)(iVar3 + *(int *)(in_ECX + 0x4c)) = (float)fVar4;
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0x54);
        break;
      default:
        puStack_ec = (undefined1 *)0x1c;
        pcStack_f0 = "malformed texture coord info";
        local_9c = 0xf;
        local_a0 = 0;
        local_b0 = 0;
        ppuStack_f4 = (undefined **)0x78ad9b;
        FUN_00414500();
        puStack_ec = (undefined1 *)0x0;
        pcStack_f0 = local_b4;
        local_4 = 2;
        ppuStack_f4 = (undefined **)0x78adb5;
        FUN_00789190();
        puStack_ec = &DAT_00af39e4;
        pcStack_f0 = local_7c;
                    /* WARNING: Subroutine does not return */
        ppuStack_f4 = &switchD_0078abce::switchdataD_0078adc4;
        __CxxThrowException_8();
      }
      puStack_ec = (undefined1 *)0x78acec;
      cVar2 = FUN_00787810();
      if (cVar2 != '\0') {
        puStack_ec = (undefined1 *)0x3d;
        pcStack_f0 = "premature end of file reached parsing texture coordinate info";
        local_80 = 0xf;
        local_84 = 0;
        local_94 = 0;
        ppuStack_f4 = (undefined **)0x78ad4c;
        FUN_00414500();
        puStack_ec = (undefined1 *)0x0;
        pcStack_f0 = local_98;
        local_4 = 3;
        ppuStack_f4 = (undefined **)0x78ad69;
        FUN_00789190();
        puStack_ec = &DAT_00af39e4;
        pcStack_f0 = local_54;
                    /* WARNING: Subroutine does not return */
        ppuStack_f4 = (undefined **)0x78ad7b;
        __CxxThrowException_8();
      }
      puStack_ec = (undefined1 *)0x78acf7;
      iVar3 = FUN_0078eb40();
    } while (iVar3 != 0x4e21);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0078ade0(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  uint uStack_40;
  undefined4 local_30 [7];
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009cb510;
  local_10 = *unaff_FS_OFFSET;
  uStack_40 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  *unaff_FS_OFFSET = (int)&local_10;
  puVar4 = local_30;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar3 = *(int *)(in_ECX + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(in_ECX + 0xc) - iVar3) / 0x1c;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x1c;
    }
    if (0x9249249U - iVar3 < param_3) {
      FUN_00790b90();
    }
    if (*(int *)(in_ECX + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x1c;
    }
    if (uVar5 < iVar3 + param_3) {
      if (0x9249249 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (*(int *)(in_ECX + 4) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x1c;
      }
      if (uVar5 < iVar3 + param_3) {
        iVar3 = FUN_007876c0();
        uVar5 = iVar3 + param_3;
      }
      iVar1 = FUN_00787740(uVar5,0);
      local_8 = 0;
      uVar2 = FUN_00788630(*(undefined4 *)(in_ECX + 4),param_2,iVar1);
      uVar2 = FUN_00788e90(uVar2,param_3,local_30);
      FUN_00788630(param_2,*(undefined4 *)(in_ECX + 8),uVar2);
      iVar3 = 0;
      if (*(int *)(in_ECX + 4) != 0) {
        iVar3 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x1c;
      }
      if (*(int *)(in_ECX + 4) != 0) {
        FUN_00401f20(*(int *)(in_ECX + 4));
      }
      *(uint *)(in_ECX + 0xc) = iVar1 + uVar5 * 0x1c;
      *(uint *)(in_ECX + 8) = iVar1 + (param_3 + iVar3) * 0x1c;
      *(int *)(in_ECX + 4) = iVar1;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar3 = *(int *)(in_ECX + 8);
    if ((uint)((iVar3 - param_2) / 0x1c) < param_3) {
      FUN_00788ed0(param_2,iVar3,param_3 * 0x1c + param_2);
      local_8 = 2;
      FUN_00788e90(*(undefined4 *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2) / 0x1c,
                   local_30);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x1c;
      FUN_00788ab0(param_2,*(int *)(in_ECX + 8) + param_3 * -0x1c,local_30);
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar1 = iVar3 + param_3 * -0x1c;
    uVar2 = FUN_00788ed0(iVar1,iVar3,iVar3);
    *(undefined4 *)(in_ECX + 8) = uVar2;
    FUN_00788b60(param_2,iVar1,iVar3);
    FUN_00788ab0(param_2,param_3 * 0x1c + param_2,local_30);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0078b0c0(void)

{
  int *in_ECX;
  
  if (*(char *)(*in_ECX + 0x21) != '\0') {
    FUN_007a2620();
    return;
  }
  FUN_00414500("DeleteTransientData() called with no intact transient data",0x3a);
  return;
}



void FUN_0078b0e0(float param_1,undefined4 param_2)

{
  int *in_ECX;
  int *unaff_FS_OFFSET;
  char *pcVar1;
  undefined4 uVar2;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb540;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if (*(char *)(*in_ECX + 0x21) == '\0') {
    uVar2 = 0x47;
    pcVar1 = "SetTreeSize() has no effect after DeleteTransientData() has been called";
  }
  else {
    if (0.0 < param_1) {
      FUN_007a2420(param_1,param_2);
      *unaff_FS_OFFSET = local_10;
      return;
    }
    uVar2 = 0x3c;
    pcVar1 = "SetTreeSize() is only valid for size values greater than 0.0";
  }
  FUN_00414500(pcVar1,uVar2);
  *unaff_FS_OFFSET = local_10;
  return;
}



undefined4 FUN_0078b220(void)

{
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_18;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb570;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_18 = 0;
  local_8 = 0;
  if (*(char *)(*in_ECX + 0x21) == '\0') {
    FUN_00414500("SetTreeSize() has no effect after DeleteTransientData() has been called",0x47);
  }
  else {
    local_18 = *(undefined4 *)(*in_ECX + 0x48);
  }
  *unaff_FS_OFFSET = local_10;
  return local_18;
}



void FUN_0078b320(int param_1)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb5a0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if (*(char *)(in_ECX + 0x45) == '\0') {
    *(bool *)(*(int *)(in_ECX + 4) + 9) = param_1 == 1;
    **(int **)(in_ECX + 0xc) = param_1;
    *unaff_FS_OFFSET = local_10;
    return;
  }
  FUN_00414500("SetBranchLightingMethod() has no effect after Compute() has been called",0x47);
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0078b440(int param_1)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb5d0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if (*(char *)(in_ECX + 0x45) == '\0') {
    *(int *)(*(int *)(in_ECX + 0xc) + 0x38) = param_1;
    *(bool *)*(undefined4 *)(in_ECX + 8) = param_1 == 1;
    *unaff_FS_OFFSET = local_10;
    return;
  }
  FUN_00414500("SetLeafLightingMethod() has no effect after Compute() has been called",0x45);
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0078b560(int param_1)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb600;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if (*(char *)(in_ECX + 0x45) == '\0') {
    *(bool *)(*(int *)(in_ECX + 0x60) + 9) = param_1 == 1;
    *(int *)(*(int *)(in_ECX + 0xc) + 0x78) = param_1;
    *unaff_FS_OFFSET = local_10;
    return;
  }
  FUN_00414500("SetFrondLightingMethod() has no effect after Compute() has been called",0x46);
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0078b690(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = DAT_00b429b4;
  uVar4 = DAT_00b429b0;
  uVar3 = DAT_00b2b6e0;
  uVar2 = DAT_00b2b6dc;
  uVar1 = DAT_00b2b6d8;
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_1 = DAT_00b429ac;
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    return;
  }
  FUN_00414500("GetCamera() requires non-NULL position and direction values",0x3b);
  return;
}



void FUN_0078b700(int param_1)

{
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb630;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if (*(char *)((int)in_ECX + 0x45) == '\0') {
    if (param_1 == 0) {
      param_1 = 1;
    }
    *(int *)(*in_ECX + 0xbc) = param_1;
    *unaff_FS_OFFSET = local_10;
    return;
  }
  FUN_00414500("SetNumLeafRockingGroups() has no effect after Compute() has been called",0x47);
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0078b820(int param_1)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb660;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if (*(char *)(in_ECX + 0x45) == '\0') {
    *(int *)(*(int *)(in_ECX + 0x10) + 0x10) = param_1;
    *(bool *)(*(int *)(in_ECX + 8) + 1) = param_1 != 2;
    *unaff_FS_OFFSET = local_10;
    return;
  }
  FUN_00414500("SetLeafWindMethod() has no effect after Compute() has been called",0x41);
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0078b950(int param_1)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb690;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if (*(char *)(in_ECX + 0x45) == '\0') {
    if ((param_1 == 2) && (*(int *)(*(int *)(in_ECX + 0x10) + 8) == 1)) {
      *(undefined1 *)(*(int *)(in_ECX + 4) + 0x12) = 0;
      FUN_00794ae0(0);
    }
    *(int *)(*(int *)(in_ECX + 0x10) + 8) = param_1;
    *(bool *)(*(int *)(in_ECX + 4) + 8) = param_1 != 2;
    *(int *)(*(int *)(in_ECX + 4) + 0x14) = param_1;
    *unaff_FS_OFFSET = local_10;
    return;
  }
  FUN_00414500("SetBranchWindMethod() has no effect after Compute() has been called",0x43);
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0078baa0(int param_1)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb6c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if (*(char *)(in_ECX + 0x45) == '\0') {
    if ((param_1 == 2) && (*(int *)(*(int *)(in_ECX + 0x10) + 0xc) == 1)) {
      *(undefined1 *)(*(int *)(in_ECX + 0x60) + 0x12) = 0;
      FUN_00794ae0(0);
    }
    *(int *)(*(int *)(in_ECX + 0x10) + 0xc) = param_1;
    *(bool *)(*(int *)(in_ECX + 0x60) + 8) = param_1 != 2;
    *(int *)(*(int *)(in_ECX + 0x60) + 0x14) = param_1;
    *unaff_FS_OFFSET = local_10;
    return;
  }
  FUN_00414500("SetFrondWindMethod() has no effect after Compute() has been called",0x42);
  *unaff_FS_OFFSET = local_10;
  return;
}



float10 FUN_0078bbf0(float param_1,float param_2,float param_3)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar1;
  float local_18;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb6f0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_18 = 0.0;
  local_8 = 0;
  if (param_1 < 0.0) {
    FUN_00414500("SetWindStrength() expects new wind strength >= 0.0",0x32);
  }
  else {
    if (param_2 == -1.0) {
      param_2 = *(float *)(*(int *)(in_ECX + 0x10) + 4);
    }
    if (param_3 == -1.0) {
      param_3 = **(float **)(in_ECX + 0x10);
    }
    fVar1 = (float10)FUN_00793b90(param_1,param_2,param_3);
    local_18 = (float)fVar1;
    if ((*(int *)(*(int *)(in_ECX + 0x10) + 8) == 1) && (*(int *)(in_ECX + 4) != 0)) {
      *(undefined1 *)(*(int *)(in_ECX + 4) + 0x12) = 0;
    }
    if ((*(int *)(*(int *)(in_ECX + 0x10) + 0xc) == 1) && (*(int *)(in_ECX + 0x60) != 0)) {
      *(undefined1 *)(*(int *)(in_ECX + 0x60) + 0x12) = 0;
    }
    if ((*(int *)(*(int *)(in_ECX + 0x10) + 0x10) == 1) ||
       (*(char *)(*(int *)(in_ECX + 0x10) + 0x14) != '\0')) {
      FUN_007982d0();
    }
  }
  *unaff_FS_OFFSET = local_10;
  return (float10)local_18;
}



void FUN_0078bd80(undefined4 param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb720;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  FUN_00787830(param_1);
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0078be70(int param_1,int param_2)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  char *pcVar1;
  undefined4 uVar2;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb750;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if (*(char *)(in_ECX + 0x45) == '\0') {
    if ((uint)(param_1 + -1 + param_2) < (uint)DAT_00b42a10) {
      FUN_00793c40(param_1,param_2);
      *unaff_FS_OFFSET = local_10;
      return;
    }
    uVar2 = 0x3c;
    pcVar1 = "SetLocalMatrices() parameters exceed available wind matrices";
  }
  else {
    uVar2 = 0x40;
    pcVar1 = "SetLocalMatrices() has no effect after Compute() has been called";
  }
  FUN_00414500(pcVar1,uVar2);
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0078bfb0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb780;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  iVar2 = in_ECX[0xd];
  local_8 = 0;
  if (iVar2 != 0) {
    iVar3 = *in_ECX;
    uVar4 = *(undefined4 *)(iVar3 + 0xc);
    uVar1 = *(undefined4 *)(iVar3 + 0x14);
    uVar5 = *(undefined4 *)(iVar3 + 4);
    uVar6 = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
    fVar7 = (float10)FUN_007a2440();
    *(float *)(in_ECX[0xd] + 0x10) = (float)fVar7;
    *(undefined4 *)(*in_ECX + 0x14) = uVar1;
    iVar2 = *in_ECX;
    *(undefined4 *)(iVar2 + 4) = uVar5;
    *(undefined4 *)(iVar2 + 8) = uVar6;
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    *unaff_FS_OFFSET = local_10;
    return;
  }
  FUN_007a2440();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0078c110(float param_1)

{
  int *in_ECX;
  
  if ((0.0 <= param_1) && (param_1 <= 1.0)) {
    if (in_ECX[0xd] != 0) {
      *(float *)(in_ECX[0xd] + 0x10) = param_1;
      return;
    }
    *(float *)(*in_ECX + 0x14) = param_1;
    return;
  }
  FUN_00414500("SetLodLevel() expects a value in the range of 0.0 to 1.0",0x38);
  return;
}



void FUN_0078c160(void)

{
  int iVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb7b0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if ((((*(char *)(in_ECX + 0x45) != '\0') && (iVar1 = *(int *)(in_ECX + 4), iVar1 != 0)) &&
      (*(int *)(in_ECX + 0x34) == 0)) && (**(int **)(in_ECX + 0x30) == 1)) {
    FUN_00797270();
    FUN_00401f20(iVar1);
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



undefined4 FUN_0078c280(undefined4 param_1)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb7e0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  uVar1 = FUN_00798300(param_1);
  *unaff_FS_OFFSET = local_10;
  return uVar1;
}



void FUN_0078c370(void)

{
  float *pfVar1;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  uint uStack_6c;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb810;
  local_10 = *unaff_FS_OFFSET;
  uStack_6c = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_6c;
  *unaff_FS_OFFSET = (int)&local_10;
  pfVar1 = (float *)in_ECX[0x10];
  local_30 = (pfVar1[3] + *pfVar1) * 0.5;
  local_8 = 0;
  local_2c = (pfVar1[4] + pfVar1[1]) * 0.5;
  local_28 = (pfVar1[5] + pfVar1[2]) * 0.5;
  local_20 = local_28;
  local_1c = local_2c;
  local_18 = local_30;
  FUN_00793e10(&local_30,*(undefined4 *)(*in_ECX + 0xd4),*(undefined2 *)(*in_ECX + 0xc0));
  *unaff_FS_OFFSET = local_10;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0078c5f4) */
/* WARNING: Removing unreachable block (ram,0x0078c53f) */
/* WARNING: Removing unreachable block (ram,0x0078c614) */
/* WARNING: Removing unreachable block (ram,0x0078c55b) */

void FUN_0078c4d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb840;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  piVar2 = DAT_00b42988;
  local_8 = 0;
  if (DAT_00b4298c < DAT_00b42988) {
    FUN_00984d5e();
  }
  do {
    piVar1 = DAT_00b4298c;
    if (DAT_00b4298c < DAT_00b42988) {
      FUN_00984d5e();
    }
    if (piVar2 == piVar1) {
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (param_1 == 0) {
      if (DAT_00b4298c <= piVar2) {
        FUN_00984d5e();
      }
      if (*(int *)(*(int *)(*piVar2 + 0x10) + 8) == 1) {
        if (DAT_00b4298c <= piVar2) {
          FUN_00984d5e();
        }
        *(undefined1 *)(*(int *)(*piVar2 + 4) + 0x12) = 0;
      }
      if (DAT_00b4298c <= piVar2) {
        FUN_00984d5e();
      }
      if (*(int *)(*(int *)(*piVar2 + 0x10) + 0xc) == 1) {
        if (DAT_00b4298c <= piVar2) {
          FUN_00984d5e();
        }
        *(undefined1 *)(*(int *)(*piVar2 + 0x60) + 0x12) = 0;
      }
      if (DAT_00b4298c <= piVar2) {
        FUN_00984d5e();
      }
      if (*(int *)(*(int *)(*piVar2 + 0x10) + 0x10) != 1) {
        if (DAT_00b4298c <= piVar2) {
          FUN_00984d5e();
        }
        if (*(char *)(*(int *)(*piVar2 + 0x10) + 0x14) == '\0') goto LAB_0078c5f0;
      }
      if (DAT_00b4298c <= piVar2) {
        FUN_00984d5e();
      }
      FUN_007982d0();
    }
    else if (param_1 == 1) {
      if (DAT_00b4298c <= piVar2) {
        FUN_00984d5e();
      }
      FUN_007982d0();
      if (DAT_00b4298c <= piVar2) {
        FUN_00984d5e();
      }
      *(undefined1 *)(*(int *)(*piVar2 + 0x14) + 0x30) = 0;
    }
LAB_0078c5f0:
    if (DAT_00b4298c <= piVar2) {
      FUN_00984d5e();
    }
    piVar2 = piVar2 + 1;
  } while( true );
}



void FUN_0078c6f0(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb870;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if ((param_2 & 1) != 0) {
    FUN_00789fe0(param_1,param_3);
  }
  if ((param_2 & 2) != 0) {
    FUN_0078a390(param_1,param_4);
  }
  if ((param_2 & 4) != 0) {
    FUN_00788120(param_1,param_5);
  }
  if ((param_2 & 8) != 0) {
    if ((*(char *)(in_ECX + 0x6c) != '\0') && ((param_2 & 0x10) == 0)) {
      FUN_007887a0(param_1,param_2);
      *unaff_FS_OFFSET = local_10;
      return;
    }
    FUN_00788430(param_1);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0078c860(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int in_ECX;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(in_ECX + 4);
  if ((uVar2 == 0) || (*(uint *)(in_ECX + 8) == uVar2)) {
    iVar1 = 0;
  }
  else {
    if (*(uint *)(in_ECX + 8) < uVar2) {
      FUN_00984d5e();
    }
    if ((param_2 == 0) || (param_2 != in_ECX)) {
      FUN_00984d5e();
    }
    iVar1 = param_3 - uVar2;
  }
  FUN_006ef2f0(param_2,param_3,1,param_4);
  uVar2 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar2) {
    FUN_00984d5e();
  }
  uVar2 = uVar2 + iVar1;
  if ((*(uint *)(in_ECX + 8) < uVar2) || (uVar2 < *(uint *)(in_ECX + 4))) {
    FUN_00984d5e();
  }
  param_1[1] = uVar2;
  *param_1 = in_ECX;
  return;
}



void FUN_0078c8f0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(in_ECX + 4);
  if (uVar1 != 0) {
    iVar2 = *(uint *)(in_ECX + 8) - uVar1;
    iVar3 = iVar2 >> 0x1f;
    if (iVar2 / 0x1c + iVar3 != iVar3) {
      if (*(uint *)(in_ECX + 8) < uVar1) {
        FUN_00984d5e();
      }
      if ((param_2 == 0) || (param_2 != in_ECX)) {
        FUN_00984d5e();
      }
      iVar3 = (int)(param_3 - uVar1) / 0x1c;
      goto LAB_0078c957;
    }
  }
  iVar3 = 0;
LAB_0078c957:
  FUN_0078ade0(param_2,param_3,1,param_4);
  uVar1 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar1) {
    FUN_00984d5e();
  }
  uVar1 = uVar1 + iVar3 * 0x1c;
  if ((*(uint *)(in_ECX + 8) < uVar1) || (uVar1 < *(uint *)(in_ECX + 4))) {
    FUN_00984d5e();
  }
  param_1[1] = uVar1;
  *param_1 = in_ECX;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0078ca29) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0078c9b0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  rsize_t rVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  undefined4 *puVar7;
  
  puVar2 = DAT_00b4298c;
  if (in_ECX[0xd] == 0) {
    if (DAT_00b4298c < DAT_00b42988) {
      FUN_00984d5e();
    }
    puVar7 = DAT_00b42988;
    if (DAT_00b4298c < DAT_00b42988) {
      FUN_00984d5e();
    }
    for (; (puVar4 = DAT_00b4298c, puVar7 != puVar2 && ((int *)*puVar7 != in_ECX));
        puVar7 = puVar7 + 1) {
    }
    if (DAT_00b4298c < DAT_00b42988) {
      FUN_00984d5e();
    }
    if (puVar7 != puVar4) {
      iVar5 = (int)DAT_00b4298c - (int)(puVar7 + 1) >> 2;
      if (0 < iVar5) {
        rVar3 = iVar5 * 4;
        _memmove_s(puVar7,rVar3,puVar7 + 1,rVar3);
      }
      DAT_00b4298c = DAT_00b4298c + -1;
    }
  }
  *(int *)in_ECX[0xc] = *(int *)in_ECX[0xc] + -1;
  if (in_ECX[0xd] != 0) {
    puVar2 = *(undefined4 **)(in_ECX[0xe] + 8);
    if (puVar2 < *(undefined4 **)(in_ECX[0xe] + 4)) {
      FUN_00984d5e();
    }
    puVar7 = *(undefined4 **)(in_ECX[0xe] + 4);
    if (*(undefined4 **)(in_ECX[0xe] + 8) < puVar7) {
      FUN_00984d5e();
    }
    for (; (puVar7 != puVar2 && ((int *)*puVar7 != in_ECX)); puVar7 = puVar7 + 1) {
    }
    iVar5 = in_ECX[0xe];
    iVar6 = *(int *)(iVar5 + 8) - (int)(puVar7 + 1) >> 2;
    if (0 < iVar6) {
      rVar3 = iVar6 * 4;
      _memmove_s(puVar7,rVar3,puVar7 + 1,rVar3);
    }
    piVar1 = (int *)(iVar5 + 8);
    *piVar1 = *piVar1 + -4;
    FUN_00401f20(in_ECX[0xd]);
    in_ECX[0xd] = 0;
  }
  if (*(int *)in_ECX[0xc] == 0) {
    if (*(char *)(*in_ECX + 0x21) == '\0') {
      FUN_00414500("DeleteTransientData() called with no intact transient data",0x3a);
    }
    else {
      FUN_007a2620();
    }
    iVar5 = in_ECX[1];
    if (iVar5 != 0) {
      FUN_00797270();
      FUN_00401f20(iVar5);
    }
    FUN_00401f20(in_ECX[3]);
    FUN_00401f20(in_ECX[4]);
    iVar5 = in_ECX[2];
    if (iVar5 != 0) {
      FUN_00798940();
      FUN_00401f20(iVar5);
    }
    FUN_00401f20(in_ECX[5]);
    if ((undefined4 *)*in_ECX != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*in_ECX)(1);
    }
    FUN_00401f20(in_ECX[0xc]);
    iVar5 = in_ECX[0xe];
    if (iVar5 != 0) {
      if (*(int *)(iVar5 + 4) != 0) {
        FUN_00401f20(*(int *)(iVar5 + 4));
      }
      *(undefined4 *)(iVar5 + 4) = 0;
      *(undefined4 *)(iVar5 + 8) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      FUN_00401f20(iVar5);
    }
    FUN_00401f20(in_ECX[0x10]);
    iVar5 = in_ECX[0x16];
    if (iVar5 != 0) {
      if (*(int *)(iVar5 + 4) != 0) {
        FUN_00401f20(*(int *)(iVar5 + 4));
      }
      *(undefined4 *)(iVar5 + 4) = 0;
      *(undefined4 *)(iVar5 + 8) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      FUN_00401f20(iVar5);
    }
    iVar5 = in_ECX[0x13];
    if (iVar5 != 0) {
      FUN_00788b90();
      FUN_00401f20(iVar5);
    }
    iVar5 = in_ECX[0x17];
    if (iVar5 != 0) {
      FUN_007a14e0();
      FUN_00401f20(iVar5);
    }
    iVar5 = in_ECX[0x18];
    if (iVar5 != 0) {
      FUN_00797270();
      FUN_00401f20(iVar5);
    }
    FUN_00401f20(in_ECX[0xb]);
    iVar5 = in_ECX[0x14];
    if (iVar5 != 0) {
      if (0xf < *(uint *)(iVar5 + 0x3c)) {
        FUN_00401f20(*(undefined4 *)(iVar5 + 0x28));
      }
      *(undefined4 *)(iVar5 + 0x3c) = 0xf;
      *(undefined4 *)(iVar5 + 0x38) = 0;
      *(undefined1 *)(iVar5 + 0x28) = 0;
      FUN_00401f20(iVar5);
    }
    FUN_00401f20(in_ECX[0x1a]);
  }
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[2] = 0;
  in_ECX[5] = 0;
  *in_ECX = 0;
  in_ECX[0xc] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x1a] = 0;
  _DAT_00b42980 = _DAT_00b42980 + -1;
  if (_DAT_00b42980 != 0) {
    return;
  }
  FUN_00785d30();
  return;
}



undefined1 FUN_0078cca0(undefined4 *param_1,undefined4 param_2,char param_3)

{
  undefined1 uVar1;
  float *pfVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  uint uStack_bc;
  undefined4 local_90 [16];
  undefined1 *local_50;
  int local_4c;
  undefined1 *puStack_48;
  int local_44;
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  puStack_48 = &LAB_009cb8b0;
  local_4c = *unaff_FS_OFFSET;
  uStack_bc = DAT_00b30aac ^ (uint)local_40;
  local_50 = (undefined1 *)&uStack_bc;
  *unaff_FS_OFFSET = (int)&local_4c;
  local_44 = 0;
  if (*(char *)((int)in_ECX + 0x45) == '\0') {
    DAT_00b429c4 = in_ECX[0x17];
    local_50 = (undefined1 *)&uStack_bc;
    FUN_007a24f0(param_2);
    FUN_007a45f0(in_ECX[9]);
    FUN_007a1cd0(in_ECX[0x18],in_ECX[3]);
    *(undefined2 *)(in_ECX + 0x19) = *(undefined2 *)(in_ECX[0x18] + 0x20);
    iVar4 = *(int *)(*in_ECX + 0x98);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = (*(int *)(*in_ECX + 0x9c) - iVar4) / 0x54;
    }
    FUN_007a5740(iVar3);
    if (*(int *)(in_ECX[3] + 0x38) == 1) {
      FUN_0078c370();
    }
    FUN_00793c00(*in_ECX + 0xf4);
    iVar4 = *in_ECX;
    FUN_00799320(*(undefined4 *)(iVar4 + 0xc0),*(undefined4 *)(iVar4 + 0xd4),iVar4 + 0x84);
    if (in_ECX[0x13] != 0) {
      for (iVar4 = 0; iVar4 < *(int *)in_ECX[0x13]; iVar4 = iVar4 + 1) {
        FUN_00798550(iVar4,iVar4 * 0x20 + ((int *)in_ECX[0x13])[1]);
      }
      for (iVar4 = 0; iVar4 < *(int *)(in_ECX[0x13] + 0x10); iVar4 = iVar4 + 1) {
        FUN_0079a810(in_ECX[0x18],iVar4,iVar4 * 0x20 + *(int *)(in_ECX[0x13] + 0x14),DAT_00b4297d);
      }
    }
    if (param_3 != '\0') {
      FUN_007977d0(0);
      FUN_007977d0(0);
    }
    if (param_1 != (undefined4 *)0x0) {
      FUN_007a66b0();
      puVar5 = local_90;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *param_1;
        param_1 = param_1 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_007948c0(local_90);
      FUN_00798360(local_90);
      FUN_007948c0(local_90);
      if (in_ECX[0x16] != 0) {
        FUN_00788be0(local_90);
      }
    }
    FUN_007a6bb0();
    local_44 = CONCAT31(local_44._1_3_,1);
    FUN_007947a0(&local_38);
    FUN_007997f0(&local_38);
    FUN_007947a0(&local_38);
    puVar5 = (undefined4 *)in_ECX[0x10];
    *puVar5 = local_38;
    puVar5[1] = local_34;
    puVar5[2] = local_30;
    iVar4 = in_ECX[0x10];
    *(undefined4 *)(iVar4 + 0xc) = local_20;
    *(undefined4 *)(iVar4 + 0x10) = local_1c;
    *(undefined4 *)(iVar4 + 0x14) = local_18;
    pfVar2 = (float *)in_ECX[0x10];
    _param_3 = (float)(((int)((pfVar2[1] - 0.0) * (pfVar2[1] - 0.0) +
                              (*pfVar2 - 0.0) * (*pfVar2 - 0.0) + 0.0) >> 1) + 0x1fc00000);
    if (_param_3 <=
        (float)(((int)((pfVar2[4] - 0.0) * (pfVar2[4] - 0.0) + (*pfVar2 - 0.0) * (*pfVar2 - 0.0) +
                      0.0) >> 1) + 0x1fc00000)) {
      _param_3 = (float)(((int)((pfVar2[4] - 0.0) * (pfVar2[4] - 0.0) +
                                (*pfVar2 - 0.0) * (*pfVar2 - 0.0) + 0.0) >> 1) + 0x1fc00000);
    }
    if (_param_3 <=
        (float)(((int)((pfVar2[1] - 0.0) * (pfVar2[1] - 0.0) + (pfVar2[3] - 0.0) * (pfVar2[3] - 0.0)
                      + 0.0) >> 1) + 0x1fc00000)) {
      _param_3 = (float)(((int)((pfVar2[3] - 0.0) * (pfVar2[3] - 0.0) +
                                (pfVar2[1] - 0.0) * (pfVar2[1] - 0.0) + 0.0) >> 1) + 0x1fc00000);
    }
    if (_param_3 <=
        (float)(((int)((pfVar2[3] - 0.0) * (pfVar2[3] - 0.0) + (pfVar2[4] - 0.0) * (pfVar2[4] - 0.0)
                      + 0.0) >> 1) + 0x1fc00000)) {
      _param_3 = (float)(((int)((pfVar2[4] - 0.0) * (pfVar2[4] - 0.0) +
                                (pfVar2[3] - 0.0) * (pfVar2[3] - 0.0) + 0.0) >> 1) + 0x1fc00000);
    }
    pfVar2[6] = _param_3 + _param_3;
    if (in_ECX[0x14] != 0) {
      FUN_00787480();
    }
    FUN_007875d0();
    *(undefined1 *)((int)in_ECX + 0x45) = 1;
    local_44._0_1_ = 2;
    FUN_0060d0a0();
    local_44 = (uint)local_44._1_3_ << 8;
    FUN_0060d0a0();
  }
  else {
    FUN_00414500("Compute() called more than once for single tree model (ignored)",0x3f);
  }
  uVar1 = *(undefined1 *)((int)in_ECX + 0x45);
  *unaff_FS_OFFSET = local_4c;
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0078d140(float *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  uint uStack_98;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb8e3;
  local_10 = *unaff_FS_OFFSET;
  uStack_98 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_98;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  if ((param_1 == (float *)0x0) || (param_2 == (undefined4 *)0x0)) {
    FUN_00414500("SetCamera() requires non-NULL position and direction values",0x3b);
    *unaff_FS_OFFSET = local_10;
    return;
  }
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  local_2c = *param_2;
  local_28 = param_2[1];
  local_24 = param_2[2];
  local_1c = local_28;
  local_18 = local_24;
  local_14 = (undefined1 *)&uStack_98;
  if ((((DAT_00b429ac == fVar1) && (local_14 = (undefined1 *)&uStack_98, DAT_00b429b0 == fVar2)) &&
      (local_14 = (undefined1 *)&uStack_98, DAT_00b429b4 == fVar3)) &&
     (local_14 = (undefined1 *)&uStack_98, cVar4 = FUN_00786e90(&local_2c), cVar4 == '\0')) {
    *unaff_FS_OFFSET = local_10;
    return;
  }
  DAT_00b2b6d8 = local_2c;
  DAT_00b2b6dc = local_28;
  DAT_00b2b6e0 = local_24;
  DAT_00b429ac = fVar1;
  DAT_00b429b0 = fVar2;
  DAT_00b429b4 = fVar3;
  FUN_0078c4d0(1);
  FUN_007a6700(&local_2c);
  FUN_0078c4d0(1);
  fVar5 = (float10)FUN_00985870();
  param_1 = (float *)(1.0 - ((float)fVar5 * 57.29578 - _DAT_00b2b5fc) /
                            (_DAT_00b2b600 - _DAT_00b2b5fc));
  if ((float)param_1 < 0.0) {
    param_1 = (float *)0x0;
  }
  if (1.0 < (float)param_1) {
    param_1 = (float *)0x3f800000;
  }
  _DAT_00b2b604 = (float)param_1 * 171.0 + 84.0;
  *unaff_FS_OFFSET = local_10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0078d3f0(undefined4 param_1)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cb920;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  _DAT_00b42a0c = param_1;
  local_8 = 0;
  FUN_0078c4d0(0);
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0078d4e0(undefined1 *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int in_ECX;
  undefined1 local_8 [8];
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 != 0) && (*(int *)(in_ECX + 8) - uVar1 < *(int *)(in_ECX + 0xc) - uVar1)) {
    puVar2 = *(undefined1 **)(in_ECX + 8);
    *puVar2 = *param_1;
    *(undefined1 **)(in_ECX + 8) = puVar2 + 1;
    return;
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (uVar3 < uVar1) {
    FUN_00984d5e();
  }
  FUN_0078c860(local_8,in_ECX,uVar3,param_1);
  return;
}



void FUN_0078d550(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint local_8 [2];
  
  uVar1 = *(uint *)(in_ECX + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)(in_ECX + 8) - uVar1) / 0x1c) <
      (uint)((int)(*(int *)(in_ECX + 0xc) - uVar1) / 0x1c))) {
    iVar2 = *(int *)(in_ECX + 8);
    local_8[0] = local_8[0] & 0xffffff00;
    FUN_00788ae0(iVar2,1,param_1);
    *(int *)(in_ECX + 8) = iVar2 + 0x1c;
    return;
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (uVar3 < uVar1) {
    FUN_00984d5e();
  }
  FUN_0078c8f0(local_8,in_ECX,uVar3,param_1);
  return;
}



void FUN_0078d600(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *in_ECX;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cb94b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar2 = 0;
  *in_ECX = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  local_4 = 0;
  FUN_006ef4b0(param_2,0);
  if (0 < param_2) {
    do {
      if ((in_ECX[2] == 0) || ((uint)(in_ECX[3] - in_ECX[2]) <= uVar2)) {
        FUN_00984d5e(uVar1);
      }
      *(undefined1 *)(uVar2 + in_ECX[2]) = *(undefined1 *)(uVar2 + param_1);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < param_2);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0078d6a0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_ECX;
  int iVar4;
  int *unaff_FS_OFFSET;
  uint uStack_6c;
  int local_1c [2];
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_009cb9e3;
  local_10 = *unaff_FS_OFFSET;
  uStack_6c = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_6c;
  *unaff_FS_OFFSET = (int)&local_10;
  iVar4 = 0;
  in_ECX[7] = 0x3d8f5c29;
  in_ECX[8] = 0x3f333333;
  *in_ECX = 0;
  in_ECX[9] = 0x3f000000;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[10] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 1;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xf] = 0xffffffff;
  in_ECX[0x10] = 0;
  *(undefined1 *)(in_ECX + 0x11) = 0x54;
  *(undefined1 *)((int)in_ECX + 0x45) = 0;
  in_ECX[0x12] = 0xffffffff;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  *(undefined2 *)(in_ECX + 0x15) = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  *(undefined2 *)(in_ECX + 0x19) = 0;
  in_ECX[0x1a] = 0;
  *(undefined1 *)(in_ECX + 0x1b) = 0;
  *(undefined1 *)((int)in_ECX + 0x6d) = 0;
  local_8 = 0;
  local_1c[0] = FUN_00401f00(0x44);
  local_8._0_1_ = 1;
  if (local_1c[0] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00793b40();
  }
  local_8._0_1_ = 0;
  in_ECX[4] = uVar1;
  local_1c[0] = FUN_00401f00(0x118);
  local_8._0_1_ = 2;
  if (local_1c[0] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00795fb0(in_ECX[4],0);
  }
  local_8._0_1_ = 0;
  in_ECX[1] = uVar1;
  local_1c[0] = FUN_00401f00(0x110);
  local_8._0_1_ = 3;
  if (local_1c[0] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_007a3700(in_ECX[1]);
  }
  local_8._0_1_ = 0;
  *in_ECX = uVar1;
  local_1c[0] = FUN_00401f00(0xb0);
  local_8._0_1_ = 4;
  if (local_1c[0] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00793cf0();
  }
  local_8._0_1_ = 0;
  in_ECX[3] = uVar1;
  local_1c[0] = FUN_00401f00(0x30);
  local_8._0_1_ = 5;
  if (local_1c[0] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00798290(in_ECX[4]);
  }
  local_8._0_1_ = 0;
  in_ECX[2] = uVar1;
  local_1c[0] = FUN_00401f00(0x34);
  local_8._0_1_ = 6;
  if (local_1c[0] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_007a66f0();
  }
  local_8._0_1_ = 0;
  in_ECX[5] = uVar1;
  uVar1 = FUN_00401f00(0x1c);
  in_ECX[0x10] = uVar1;
  puVar2 = (undefined4 *)FUN_00401f00(4);
  in_ECX[0xc] = puVar2;
  *puVar2 = 1;
  iVar3 = FUN_00401f00(0x10);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  local_8._0_1_ = 0;
  in_ECX[0xe] = iVar3;
  local_1c[0] = FUN_00401f00(0x6c);
  local_8._0_1_ = 8;
  if (local_1c[0] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_007a13b0();
  }
  local_8._0_1_ = 0;
  in_ECX[0x17] = uVar1;
  local_1c[0] = FUN_00401f00(0x118);
  local_8._0_1_ = 9;
  if (local_1c[0] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00795fb0(in_ECX[4],1);
  }
  in_ECX[0x18] = uVar1;
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00791770(local_1c);
  _DAT_00b42980 = _DAT_00b42980 + 1;
  _DAT_00b429bc = in_ECX[3];
  *(undefined4 *)in_ECX[0x10] = 0;
  *(undefined4 *)(in_ECX[0x10] + 4) = 0;
  *(undefined4 *)(in_ECX[0x10] + 8) = 0;
  *(undefined4 *)(in_ECX[0x10] + 0xc) = 0x3f800000;
  *(undefined4 *)(in_ECX[0x10] + 0x10) = 0x3f800000;
  *(undefined4 *)(in_ECX[0x10] + 0x14) = 0x3f800000;
  *(undefined4 *)(in_ECX[0x10] + 0x18) = 0x3f800000;
  for (; iVar4 < 0xc; iVar4 = iVar4 + 1) {
    in_ECX[iVar4 + 0x1c] = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0078d9e0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  uint uStack_68;
  undefined1 local_1c [8];
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cba10;
  local_10 = *unaff_FS_OFFSET;
  uStack_68 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_68;
  *unaff_FS_OFFSET = (int)&local_10;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  local_8 = 0;
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  *(char *)(in_ECX + 0x11) = (char)param_1[0x11];
  *(undefined1 *)((int)in_ECX + 0x45) = *(undefined1 *)((int)param_1 + 0x45);
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  in_ECX[0x14] = param_1[0x14];
  *(short *)(in_ECX + 0x15) = (short)param_1[0x15];
  in_ECX[0x16] = param_1[0x16];
  in_ECX[0x17] = param_1[0x17];
  in_ECX[0x18] = param_1[0x18];
  *(short *)(in_ECX + 0x19) = (short)param_1[0x19];
  in_ECX[0x1a] = param_1[0x1a];
  *(char *)(in_ECX + 0x1b) = (char)param_1[0x1b];
  *(undefined1 *)((int)in_ECX + 0x6d) = *(undefined1 *)((int)param_1 + 0x6d);
  FUN_00791770(local_1c);
  piVar2 = (int *)in_ECX[0xc];
  piVar6 = param_1 + 0x1c;
  piVar7 = in_ECX + 0x1c;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  *piVar2 = *piVar2 + 1;
  puVar4 = (undefined4 *)FUN_00401f00(0x14);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[1] = 0;
    puVar4[4] = 0x3f800000;
  }
  in_ECX[0xd] = (int)puVar4;
  *puVar4 = param_1;
  iVar5 = *param_1;
  iVar3 = in_ECX[0xd];
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
  if (param_1[0xd] == 0) {
    uVar1 = *(undefined4 *)(*param_1 + 0x14);
  }
  else {
    uVar1 = *(undefined4 *)(param_1[0xd] + 0x10);
  }
  *(undefined4 *)(in_ECX[0xd] + 0x10) = uVar1;
  _DAT_00b42980 = _DAT_00b42980 + 1;
  *unaff_FS_OFFSET = local_10;
  return;
}



undefined4 FUN_0078dc10(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cba4b;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  iVar1 = FUN_00401f00(0xa0);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0078d9e0(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}



void FUN_0078dd10(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar4;
  int local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined1 local_94 [4];
  undefined1 local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [4];
  undefined1 local_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [40];
  undefined1 local_34 [40];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cba9c;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff30;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(0x10,uVar2);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  local_4 = 0xffffffff;
  *(int *)(in_ECX + 0x58) = iVar3;
  iVar3 = FUN_0078eb40();
  while( true ) {
    local_b0 = 0.0;
    local_bc = 0;
    local_b4 = 0.0;
    local_b8 = 0.0;
    local_a4 = 0.0;
    local_a8 = 0.0;
    local_ac = 0.0;
    if (iVar3 == 0x2ee2) {
      iVar3 = 0;
    }
    else if (iVar3 == 0x2ee3) {
      iVar3 = 1;
    }
    else {
      if (iVar3 != 0x2ee4) {
        local_7c = 0xf;
        local_80 = 0;
        local_90 = 0;
        FUN_00414500("malformed collision object info",0x1f);
        local_4 = 1;
        FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_5c,&DAT_00af39e4);
      }
      iVar3 = 2;
    }
    local_bc = iVar3;
    fVar4 = (float10)FUN_0078eb10();
    local_a0 = (float)fVar4;
    fVar4 = (float10)FUN_0078eb10();
    local_9c = (float)fVar4;
    fVar4 = (float10)FUN_0078eb10();
    local_b0 = (float)fVar4;
    local_b8 = local_a0;
    local_b4 = local_9c;
    local_98 = local_b0;
    if (iVar3 == 0) {
      fVar4 = (float10)FUN_0078eb10();
      local_ac = (float)fVar4;
    }
    else if (iVar3 == 1) {
      fVar4 = (float10)FUN_0078eb10();
      local_ac = (float)fVar4;
      fVar4 = (float10)FUN_0078eb10();
      local_a8 = (float)fVar4;
    }
    else {
      if (iVar3 != 2) {
        local_7c = 0xf;
        local_80 = 0;
        local_90 = 0;
        FUN_00414500("unknown collision object type",0x1d);
        local_4 = 2;
        FUN_00789190(local_94,0);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_5c,&DAT_00af39e4);
      }
      fVar4 = (float10)FUN_0078eb10();
      local_ac = (float)fVar4;
      fVar4 = (float10)FUN_0078eb10();
      local_a8 = (float)fVar4;
      fVar4 = (float10)FUN_0078eb10();
      local_a4 = (float)fVar4;
    }
    FUN_0078d550(&local_bc);
    cVar1 = FUN_00787810();
    if (cVar1 != '\0') break;
    iVar3 = FUN_0078eb40();
    if (iVar3 == 0x2ee1) {
      *unaff_FS_OFFSET = local_c;
      return;
    }
  }
  local_60 = 0xf;
  local_64 = 0;
  local_74 = 0;
  FUN_00414500("premature end of file reached parsing collision object info",0x3b);
  local_4 = 3;
  FUN_00789190(local_78,0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00af39e4);
}



undefined1 FUN_0078df90(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  bool bVar6;
  float10 fVar7;
  uint uStack_64;
  uint local_30 [2];
  int local_28;
  int local_24;
  undefined1 local_15;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009cbad8;
  local_10 = *unaff_FS_OFFSET;
  uStack_64 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  *unaff_FS_OFFSET = (int)&local_10;
  local_15 = 0;
  local_8 = 0;
  FUN_0078d600(param_1,param_2);
  local_8 = CONCAT31(local_8._1_3_,1);
  cVar3 = FUN_007a4df0(local_30);
  if (cVar3 != '\0') {
    if ((local_28 != 0) && (local_30[0] < (uint)(local_24 - local_28))) {
      bVar1 = false;
      iVar4 = FUN_0078eb40();
      do {
        uVar2 = local_30[0];
        if (iVar4 < 0x3e8e) {
          if (iVar4 == 0x3e8d) {
            FUN_007a2540(local_30);
          }
          else if (iVar4 < 0x2ee1) {
            if (iVar4 == 12000) {
              FUN_0078dd10(local_30);
            }
            else if (iVar4 < 0x2711) {
              if (iVar4 == 10000) {
                FUN_007898d0(local_30);
              }
              else if (iVar4 == 8000) {
                FUN_00794340(local_30);
              }
              else {
                if (iVar4 != 9000) goto LAB_0078e171;
                FUN_00789610(local_30);
              }
            }
            else if (iVar4 == 11000) {
              FUN_007897b0(local_30);
            }
            else {
LAB_0078e171:
              bVar1 = true;
            }
          }
          else if (iVar4 == 13000) {
            FUN_0079f1e0(local_30);
          }
          else if (iVar4 == 15000) {
            FUN_007a2a40(local_30);
          }
          else {
            if (iVar4 != 16000) goto LAB_0078e171;
            FUN_007a2c60(local_30);
          }
        }
        else if (iVar4 < 0x4e21) {
          if (iVar4 == 20000) {
            FUN_0078ab60(local_30);
          }
          else if (iVar4 == 0x3e8e) {
            fVar7 = (float10)FUN_0078eb10();
            in_ECX[10] = (int)(float)fVar7;
          }
          else if (iVar4 == 18000) {
            FUN_00787400(local_30);
          }
          else {
            if (iVar4 != 19000) goto LAB_0078e171;
            FUN_00788da0(local_30);
          }
        }
        else if (iVar4 == 21000) {
          fVar7 = (float10)FUN_0078eb10();
          *(float *)(in_ECX[4] + 0x3c) = (float)fVar7;
        }
        else if (iVar4 == 0x5209) {
          fVar7 = (float10)FUN_0078eb10();
          *(float *)(in_ECX[4] + 0x40) = (float)fVar7;
        }
        else {
          if (iVar4 != 22000) goto LAB_0078e171;
          uVar5 = local_30[0] + 1;
          if ((local_28 == 0) ||
             (bVar6 = (uint)(local_24 - local_28) <= local_30[0], local_30[0] = uVar5, bVar6)) {
            local_30[0] = uVar5;
            FUN_00984d5e();
          }
          DAT_00b429c8 = *(char *)(local_28 + uVar2) != '\0';
        }
        if ((local_28 == 0) || ((uint)(local_24 - local_28) <= local_30[0])) break;
        iVar4 = FUN_0078eb40();
      } while (!bVar1);
    }
    FUN_0078b320(*(undefined4 *)in_ECX[3]);
    FUN_0078b440(*(undefined4 *)(in_ECX[3] + 0x38));
    FUN_0078b560(*(undefined4 *)(in_ECX[3] + 0x78));
    in_ECX[0x12] = *(int *)(*in_ECX + 0xf0);
    iVar4 = FUN_00780f70();
    in_ECX[0xf] = iVar4;
    if (in_ECX[6] == 2) {
      in_ECX[6] = 1;
      in_ECX[10] = 0x3f000000;
    }
    FUN_00793c40(0,DAT_00b42a10);
    local_15 = 1;
  }
  if (local_28 != 0) {
    FUN_00401f20(local_28);
  }
  *unaff_FS_OFFSET = local_10;
  return local_15;
}



undefined1 FUN_0078e310(char *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  int *unaff_FS_OFFSET;
  uint uStack_90;
  exception local_48 [12];
  exception local_3c [12];
  exception local_30 [16];
  int local_20;
  char *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar4 = param_1;
  puStack_c = &LAB_009cbb28;
  local_10 = *unaff_FS_OFFSET;
  uStack_90 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_90;
  *unaff_FS_OFFSET = (int)&local_10;
  local_15 = 0;
  local_8 = 0;
  if (param_1 != (char *)0x0) {
    piVar1 = (int *)FUN_00431130(param_1,0,0x2800,1);
    if (piVar1 == (int *)0x0) {
      piVar1 = __errno();
      pcVar5 = _strerror((char *)*piVar1);
      iVar2 = FUN_007a54a0("failed to load file \'%s\' [%s]",pcVar4,pcVar5);
      local_8 = CONCAT31(local_8._1_3_,3);
      if (*(uint *)(iVar2 + 0x18) < 0x10) {
        param_1 = (char *)(iVar2 + 4);
      }
      else {
        param_1 = *(char **)(iVar2 + 4);
      }
      std::exception::exception(local_48,&param_1);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_48,&DAT_00af4950);
    }
    iVar2 = (**(code **)(*piVar1 + 0x1c))();
    if (iVar2 < 1) {
      piVar1 = __errno();
      pcVar5 = _strerror((char *)*piVar1);
      iVar2 = FUN_007a54a0("file seek failed on \'%s\' [%s]",pcVar4,pcVar5);
      local_8 = CONCAT31(local_8._1_3_,2);
      if (*(uint *)(iVar2 + 0x18) < 0x10) {
        param_1 = (char *)(iVar2 + 4);
      }
      else {
        param_1 = *(char **)(iVar2 + 4);
      }
      std::exception::exception(local_3c,&param_1);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_3c,&DAT_00af4950);
    }
    uVar3 = FUN_00401f00(iVar2);
    local_20 = FUN_0042c8e0(uVar3,iVar2);
    if (local_20 != iVar2) {
      piVar1 = __errno();
      pcVar4 = _strerror((char *)*piVar1);
      iVar2 = FUN_007a54a0("only read %d of %d from %s [%s]",local_20,iVar2,param_1,pcVar4);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (*(uint *)(iVar2 + 0x18) < 0x10) {
        local_1c = (char *)(iVar2 + 4);
      }
      else {
        local_1c = *(char **)(iVar2 + 4);
      }
      std::exception::exception(local_30,&local_1c);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_00af4950);
    }
    local_15 = FUN_0078df90(uVar3,iVar2);
    FUN_00401f20(uVar3);
    (**(code **)*piVar1)(1);
  }
  *unaff_FS_OFFSET = local_10;
  return local_15;
}



void FUN_0078e550(void)

{
  undefined4 *in_ECX;
  
  in_ECX[4] = 0;
  in_ECX[5] = 3;
  in_ECX[3] = 0;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  *in_ECX = 0;
  return;
}



void FUN_0078e570(int param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[4] = 0;
  in_ECX[3] = 0;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  *in_ECX = 0;
  if (5 < param_1) {
    param_1 = 5;
  }
  in_ECX[5] = param_1;
  return;
}



void FUN_0078e5a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[5] = 2;
  in_ECX[1] = param_2;
  in_ECX[4] = 0;
  in_ECX[3] = 0;
  in_ECX[2] = 0;
  return;
}



void FUN_0078e5d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[5] = 5;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  in_ECX[4] = param_5;
  return;
}



float10 FUN_0078e600(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  iVar1 = *(int *)(in_ECX + 0x14);
  iVar3 = 0;
  if (3 < iVar1) {
    iVar2 = (iVar1 - 4U >> 2) + 1;
    iVar3 = iVar2 * 4;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  for (; iVar3 < iVar1; iVar3 = iVar3 + 1) {
  }
  fVar4 = (float10)FUN_00982c30();
  return (float10)(float)fVar4;
}



void FUN_0078e6a0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  
  fVar3 = (float10)FUN_0078e600();
  if (((float)fVar3 != 0.0) && (iVar2 = 0, 0 < *(int *)(in_ECX + 0x14))) {
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(float *)(in_ECX + -4 + iVar2 * 4) = *(float *)(in_ECX + iVar1) / (float)fVar3;
    } while (iVar2 < *(int *)(in_ECX + 0x14));
  }
  return;
}



void FUN_0078e6e0(undefined4 *param_1,int param_2)

{
  int in_ECX;
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  
  iVar4 = *(int *)(in_ECX + 0x14);
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar4 < *(int *)(param_2 + 0x14)) {
    iVar1 = iVar4;
  }
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0.0;
  param_1[1] = 0;
  *param_1 = 0;
  if (5 < iVar1) {
    iVar1 = 5;
  }
  iVar6 = 0;
  param_1[5] = iVar1;
  if (3 < iVar4) {
    iVar4 = *(int *)(in_ECX + 0x14);
    pfVar3 = (float *)(in_ECX + 4);
    pfVar5 = (float *)(param_1 + 2);
    do {
      iVar1 = iVar6 * 4;
      iVar6 = iVar6 + 4;
      pfVar2 = pfVar3 + 4;
      pfVar5[-2] = *(float *)(param_2 + iVar1) + pfVar3[-1];
      *(float *)((int)param_1 + (-0x10 - in_ECX) + (int)pfVar2) =
           *(float *)((param_2 - in_ECX) + -0x10 + (int)pfVar2) + *pfVar3;
      *pfVar5 = *(float *)((param_2 - (int)param_1) + -0x10 + (int)(pfVar5 + 4)) + pfVar3[1];
      pfVar5[1] = *(float *)(param_2 + -4 + iVar6 * 4) + pfVar3[2];
      pfVar3 = pfVar2;
      pfVar5 = pfVar5 + 4;
    } while (iVar6 < iVar4 + -3);
  }
  if (iVar6 < iVar4) {
    iVar4 = iVar4 - iVar6;
    pfVar3 = (float *)(in_ECX + iVar6 * 4);
    do {
      iVar4 = iVar4 + -1;
      *(float *)((int)pfVar3 + ((int)param_1 - in_ECX)) =
           *(float *)((int)pfVar3 + (param_2 - in_ECX)) + *pfVar3;
      pfVar3 = pfVar3 + 1;
    } while (iVar4 != 0);
  }
  return;
}



void FUN_0078e7c0(undefined4 *param_1,int param_2)

{
  int in_ECX;
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  
  iVar4 = *(int *)(in_ECX + 0x14);
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar4 < *(int *)(param_2 + 0x14)) {
    iVar1 = iVar4;
  }
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0.0;
  param_1[1] = 0;
  *param_1 = 0;
  if (5 < iVar1) {
    iVar1 = 5;
  }
  iVar6 = 0;
  param_1[5] = iVar1;
  if (3 < iVar4) {
    iVar4 = *(int *)(in_ECX + 0x14);
    pfVar3 = (float *)(param_2 + 4);
    pfVar5 = (float *)(param_1 + 2);
    do {
      iVar1 = iVar6 * 4;
      iVar6 = iVar6 + 4;
      pfVar2 = pfVar3 + 4;
      pfVar5[-2] = *(float *)(in_ECX + iVar1) - pfVar3[-1];
      *(float *)((int)param_1 + (-0x10 - param_2) + (int)pfVar2) =
           *(float *)((in_ECX - param_2) + -0x10 + (int)pfVar2) - *pfVar3;
      *pfVar5 = *(float *)((in_ECX - (int)param_1) + -0x10 + (int)(pfVar5 + 4)) - pfVar3[1];
      pfVar5[1] = *(float *)(in_ECX + -4 + iVar6 * 4) - pfVar3[2];
      pfVar3 = pfVar2;
      pfVar5 = pfVar5 + 4;
    } while (iVar6 < iVar4 + -3);
  }
  if (iVar6 < iVar4) {
    iVar4 = iVar4 - iVar6;
    pfVar3 = (float *)(param_2 + iVar6 * 4);
    do {
      iVar4 = iVar4 + -1;
      *(float *)((int)pfVar3 + ((int)param_1 - param_2)) =
           *(float *)((int)pfVar3 + (in_ECX - param_2)) - *pfVar3;
      pfVar3 = pfVar3 + 1;
    } while (iVar4 != 0);
  }
  return;
}



void FUN_0078e8a0(undefined4 *param_1,float param_2)

{
  int in_ECX;
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  iVar3 = *(int *)(in_ECX + 0x14);
  param_1[1] = 0;
  *param_1 = 0;
  iVar1 = iVar3;
  if (5 < iVar3) {
    iVar1 = 5;
  }
  param_1[5] = iVar1;
  iVar1 = 0;
  if (3 < iVar3) {
    iVar4 = (iVar3 - 4U >> 2) + 1;
    iVar1 = iVar4 * 4;
    pfVar2 = (float *)(param_1 + 1);
    pfVar5 = (float *)(in_ECX + 0xc);
    do {
      iVar4 = iVar4 + -1;
      pfVar2[-1] = pfVar5[-3] * param_2;
      *pfVar2 = *(float *)((int)pfVar2 + (in_ECX - (int)param_1)) * param_2;
      pfVar2[1] = pfVar5[-1] * param_2;
      pfVar2[2] = *pfVar5 * param_2;
      pfVar2 = pfVar2 + 4;
      pfVar5 = pfVar5 + 4;
    } while (iVar4 != 0);
  }
  if (iVar1 < iVar3) {
    iVar3 = iVar3 - iVar1;
    pfVar2 = (float *)(param_1 + iVar1);
    do {
      iVar3 = iVar3 + -1;
      *pfVar2 = *(float *)((int)pfVar2 + (in_ECX - (int)param_1)) * param_2;
      pfVar2 = pfVar2 + 1;
    } while (iVar3 != 0);
  }
  return;
}



float10 FUN_0078ea00(float param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_007a6fd0();
  return (float10)(float)(fVar1 * ((float10)param_2 - (float10)param_1) + (float10)param_1);
}



void FUN_0078ea30(int param_1)

{
  int iVar1;
  __time64_t _Var2;
  
  if (param_1 != -1) {
    FUN_007a6d30();
    DAT_00b42994 = 1;
    return;
  }
  param_1 = 0x3039;
  if (DAT_00b42994 != '\0') {
    FUN_007a6fd0();
    param_1 = FUN_009828c0();
  }
  _Var2 = __time64((__time64_t *)0x0);
  iVar1 = (int)_Var2;
  if (iVar1 < param_1) {
    FUN_007a7100((double)iVar1 / (double)param_1);
    DAT_00b42994 = 1;
    return;
  }
  FUN_007a7100((double)param_1 / (double)iVar1);
  DAT_00b42994 = 1;
  return;
}



void FUN_0078eaf0(void)

{
  if (DAT_00b42994 == '\0') {
    FUN_0078ea30(0xffffffff);
  }
  return;
}



int FUN_0078eb10(void)

{
  uint uVar1;
  uint *in_ECX;
  
  uVar1 = *in_ECX;
  if ((in_ECX[2] == 0) || (in_ECX[3] - in_ECX[2] <= uVar1)) {
    FUN_00984d5e();
  }
  *in_ECX = *in_ECX + 4;
  return in_ECX[2] + uVar1;
}



undefined4 FUN_0078eb40(void)

{
  uint uVar1;
  uint *in_ECX;
  
  uVar1 = *in_ECX;
  if ((in_ECX[2] == 0) || (in_ECX[3] - in_ECX[2] <= uVar1)) {
    FUN_00984d5e();
  }
  *in_ECX = *in_ECX + 4;
  return *(undefined4 *)(in_ECX[2] + uVar1);
}



undefined4 FUN_0078eb70(void)

{
  uint uVar1;
  uint *in_ECX;
  
  uVar1 = *in_ECX;
  if ((in_ECX[2] == 0) || (in_ECX[3] - in_ECX[2] <= uVar1)) {
    FUN_00984d5e();
  }
  *in_ECX = *in_ECX + 8;
  return *(undefined4 *)(in_ECX[2] + uVar1);
}



undefined4 * FUN_0078eba0(undefined4 *param_1)

{
  uint uVar1;
  uint *in_ECX;
  int iVar2;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  iVar2 = 0;
  do {
    uVar1 = *in_ECX;
    if ((in_ECX[2] == 0) || (in_ECX[3] - in_ECX[2] <= uVar1)) {
      FUN_00984d5e();
    }
    *in_ECX = *in_ECX + 4;
    param_1[iVar2] = *(undefined4 *)(in_ECX[2] + uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return param_1;
}



undefined4 FUN_0078ebf0(void)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  
  uVar1 = in_ECX[2];
  uVar2 = *in_ECX;
  if ((uVar1 != 0) && (uVar2 < in_ECX[3] - uVar1)) {
    return *(undefined4 *)(uVar2 + uVar1);
  }
  FUN_00984d5e();
  return *(undefined4 *)(uVar2 + in_ECX[2]);
}



int FUN_0078ec20(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cbb69;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  uVar1 = *in_ECX;
  local_4 = 0;
  if ((in_ECX[2] == 0) || (in_ECX[3] - in_ECX[2] <= uVar1)) {
    FUN_00984d5e(uVar2);
  }
  *in_ECX = *in_ECX + 4;
  iVar3 = *(int *)(in_ECX[2] + uVar1);
  if (0 < iVar3) {
    do {
      uVar1 = *in_ECX;
      *in_ECX = uVar1 + 1;
      if ((in_ECX[2] == 0) || (in_ECX[3] - in_ECX[2] <= uVar1)) {
        FUN_00984d5e(uVar2);
      }
      FUN_006edaa0(1,*(undefined1 *)(uVar1 + in_ECX[2]));
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_0078ecf0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  *in_ECX = &PTR_LAB_00a8c63c;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}



void FUN_0078ed10(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a8c63c;
  return;
}



void FUN_0078ed20(int param_1)

{
  int in_ECX;
  
  if (param_1 != in_ECX) {
    *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}



void FUN_0078ed70(void)

{
  float fVar1;
  float *in_ECX;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00982c30();
  fVar1 = 1.0 / (float)fVar2;
  *in_ECX = fVar1 * *in_ECX;
  in_ECX[1] = fVar1 * in_ECX[1];
  in_ECX[2] = fVar1 * in_ECX[2];
  return;
}



void FUN_0078edd0(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = param_2[6] * in_ECX[2] + *param_2 * *in_ECX + param_2[3] * in_ECX[1];
  param_1[1] = in_ECX[2] * param_2[7] + param_2[1] * *in_ECX + param_2[4] * in_ECX[1];
  param_1[2] = param_2[8] * in_ECX[2] + *in_ECX * param_2[2] + param_2[5] * in_ECX[1];
  param_1[3] = param_2[6] * in_ECX[5] + in_ECX[3] * *param_2 + param_2[3] * in_ECX[4];
  param_1[4] = param_2[7] * in_ECX[5] + param_2[1] * in_ECX[3] + param_2[4] * in_ECX[4];
  param_1[5] = param_2[8] * in_ECX[5] + param_2[5] * in_ECX[4] + in_ECX[3] * param_2[2];
  param_1[6] = param_2[6] * in_ECX[8] + *param_2 * in_ECX[6] + in_ECX[7] * param_2[3];
  param_1[7] = in_ECX[8] * param_2[7] + in_ECX[7] * param_2[4] + param_2[1] * in_ECX[6];
  param_1[8] = param_2[8] * in_ECX[8] + in_ECX[6] * param_2[2] + param_2[5] * in_ECX[7];
  return;
}



void FUN_0078eec0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined1 local_24 [36];
  
  FUN_00986000();
  FUN_00986300();
  puVar1 = (undefined4 *)FUN_0078edd0(local_24,in_ECX);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *in_ECX = *puVar1;
    puVar1 = puVar1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}



void FUN_0078ef60(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined1 local_24 [36];
  
  FUN_00986000();
  FUN_00986300();
  FUN_00986000();
  FUN_00986300();
  puVar1 = (undefined4 *)FUN_0078edd0(local_24,in_ECX);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *in_ECX = *puVar1;
    puVar1 = puVar1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}



void FUN_0078f050(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined1 local_24 [36];
  
  FUN_00986300();
  FUN_00986000();
  puVar1 = (undefined4 *)FUN_0078edd0(local_24,in_ECX);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *in_ECX = *puVar1;
    puVar1 = puVar1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}



void FUN_0078f160(undefined4 param_1,undefined8 param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_ECX;
  float10 fVar6;
  
  fVar6 = (float10)FUN_00986300();
  fVar1 = (float)fVar6;
  fVar6 = (float10)FUN_00986000();
  fVar2 = (float)fVar6;
  fVar5 = 1.0 - fVar2;
  fVar4 = fVar5 * (float)param_2;
  *in_ECX = (float)param_2 * fVar4 + fVar2;
  in_ECX[1] = param_3 * fVar1 + param_2._4_4_ * fVar4;
  in_ECX[2] = param_3 * fVar4 - param_2._4_4_ * fVar1;
  in_ECX[3] = param_2._4_4_ * fVar4 - param_3 * fVar1;
  in_ECX[4] = fVar2 + param_2._4_4_ * param_2._4_4_ * fVar5;
  fVar3 = param_3 * param_2._4_4_ * fVar5;
  in_ECX[5] = fVar1 * (float)param_2 + fVar3;
  in_ECX[6] = param_2._4_4_ * fVar1 + param_3 * fVar4;
  in_ECX[7] = fVar3 - fVar1 * (float)param_2;
  in_ECX[8] = param_3 * param_3 * fVar5 + fVar2;
  return;
}



void FUN_0078f250(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3[1];
  fVar2 = param_2[1];
  fVar3 = param_3[2];
  fVar4 = param_2[2];
  *param_1 = *param_2 + param_4 * (*param_3 - *param_2);
  param_1[1] = (fVar1 - fVar2) * param_4 + param_2[1];
  param_1[2] = param_2[2] + param_4 * (fVar3 - fVar4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0078f2c0(float param_1,float param_2)

{
  float fVar1;
  float *in_ECX;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = *in_ECX;
  if (3.1415927 < ABS(param_1 - fVar1)) {
    if (fVar1 <= param_1) {
      fVar1 = fVar1 + _DAT_00b2b714;
    }
    else {
      param_1 = _DAT_00b2b714 + param_1;
    }
  }
  if ((ABS(param_1 - fVar1) < in_ECX[1]) && (0.0 < in_ECX[3] - param_2)) {
    fVar2 = (float10)FUN_00985b70();
    fVar1 = in_ECX[5];
    fVar3 = (float10)FUN_00985b70();
    return (float10)((float)fVar3 * (float)fVar2 * fVar1);
  }
  return (float10)0.0;
}



void FUN_0078f3e0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  *in_ECX = 0;
  in_ECX[5] = 0;
  in_ECX[4] = 0;
  in_ECX[3] = 0;
  in_ECX[7] = 0x3f800000;
  in_ECX[0xb] = 0x3f800000;
  in_ECX[0xf] = 0x3f800000;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  return;
}



void FUN_0078f420(float param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  int iVar7;
  float10 extraout_ST0;
  float10 fVar8;
  float10 extraout_ST1;
  int local_8;
  short local_4;
  
  if (1 < *(ushort *)(in_ECX + 0x20)) {
    uVar6 = (uint)*(ushort *)(in_ECX + 0x20);
    local_8 = *(int *)(in_ECX + 0x1c) + -1;
    uVar2 = (uVar6 + 2) * local_8 * 2;
    lVar1 = (ulonglong)uVar2 * 2;
    iVar4 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    FUN_00796100(param_1,iVar4,uVar2);
    iVar7 = 0;
    if (0 < local_8) {
      do {
        sVar3 = FUN_009828c0();
        iVar7 = iVar7 + 2;
        local_4 = (short)(int)ROUND(extraout_ST0);
        *(short *)(iVar4 + -4 + iVar7 * 2) =
             *(short *)(in_ECX + 0x24) + local_4 + *(short *)(in_ECX + 0x20) + 1;
        *(short *)(iVar4 + -2 + iVar7 * 2) = *(short *)(in_ECX + 0x24) + local_4;
        if (1 < uVar6) {
          iVar5 = uVar6 - 1;
          fVar8 = extraout_ST0;
          do {
            param_1 = (float)(fVar8 + extraout_ST1);
            fVar8 = (float10)param_1;
            iVar7 = iVar7 + 2;
            local_4 = (short)(int)ROUND(fVar8);
            *(short *)(iVar4 + -4 + iVar7 * 2) =
                 *(short *)(in_ECX + 0x24) + local_4 + *(short *)(in_ECX + 0x20) + 1;
            iVar5 = iVar5 + -1;
            *(short *)(iVar4 + -2 + iVar7 * 2) = *(short *)(in_ECX + 0x24) + local_4;
          } while (iVar5 != 0);
        }
        *(short *)(iVar4 + -2 + (iVar7 + 1) * 2) =
             *(short *)(in_ECX + 0x20) * 2 + sVar3 + *(short *)(in_ECX + 0x24) + 1;
        *(short *)(iVar4 + -2 + (iVar7 + 2) * 2) =
             *(short *)(in_ECX + 0x24) + sVar3 + *(short *)(in_ECX + 0x20);
        *(short *)(iVar4 + (iVar7 + 2) * 2) =
             *(short *)(in_ECX + 0x20) + sVar3 + *(short *)(in_ECX + 0x24) + 1;
        *(short *)(iVar4 + (iVar7 + 3) * 2) =
             *(short *)(in_ECX + 0x24) + sVar3 + *(short *)(in_ECX + 0x20) + 1;
        iVar7 = iVar7 + 4;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    *(short *)(param_2 + 0x26) = *(short *)(param_2 + 0x26) + 1;
  }
  return;
}



uint FUN_0078f600(int *param_1,float param_2)

{
  float fVar1;
  int *in_EAX;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (*(int *)(DAT_00b429b8 + 0x2c) == 0) {
    iVar3 = 1;
    in_EAX = param_1;
    while (in_EAX != (int *)0x0) {
      if (((int *)*in_EAX == (int *)0x0) || (-1 < iVar3)) {
        param_2 = (float)in_EAX[1];
        break;
      }
      iVar3 = iVar3 + 1;
      in_EAX = (int *)*in_EAX;
    }
  }
  fVar1 = *(float *)(DAT_00b429b8 + 0x24);
  uVar2 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   (ushort)(fVar1 < param_2) << 8 | (ushort)(NAN(fVar1) || NAN(param_2)) << 10 |
                   (ushort)(fVar1 == param_2) << 0xe);
  if (fVar1 < param_2) {
    fVar4 = (float10)FUN_0078ea00(0,0x3f800000);
    fVar5 = (float10)*(float *)(DAT_00b429b8 + 0x28);
    uVar2 = CONCAT31((int3)(CONCAT22((short)((uint)DAT_00b429b8 >> 0x10),
                                     (ushort)(fVar5 < fVar4) << 8 |
                                     (ushort)(NAN(fVar5) || NAN(fVar4)) << 10 |
                                     (ushort)(fVar5 == fVar4) << 0xe) >> 8),1);
    if ((uVar2 & 0x100) == 0) {
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}



void FUN_0078f690(void)

{
  int iVar1;
  float *pfVar2;
  int in_ECX;
  int iVar3;
  
  if ((*(int *)(in_ECX + 0x18) != 0) && (iVar1 = *(int *)(in_ECX + 0x1c), 1 < iVar1)) {
    iVar3 = 0;
    *(undefined4 *)(in_ECX + 0x28) = 0;
    if (iVar1 != 1 && -1 < iVar1 + -1) {
      pfVar2 = (float *)(*(int *)(in_ECX + 0x18) + 0x5c);
      do {
        iVar3 = iVar3 + 1;
        *(float *)(in_ECX + 0x28) =
             (pfVar2[-0x11] + pfVar2[1]) *
             (float)(((int)((pfVar2[-1] - pfVar2[-0x13]) * (pfVar2[-1] - pfVar2[-0x13]) +
                            (pfVar2[-2] - pfVar2[-0x14]) * (pfVar2[-2] - pfVar2[-0x14]) +
                           (*pfVar2 - pfVar2[-0x12]) * (*pfVar2 - pfVar2[-0x12])) >> 1) + 0x1fc00000
                    ) + *(float *)(in_ECX + 0x28);
        pfVar2 = pfVar2 + 0x12;
      } while (iVar3 < *(int *)(in_ECX + 0x1c) + -1);
    }
  }
  return;
}



void FUN_0078f720(int *param_1,float param_2)

{
  int in_ECX;
  int iVar1;
  float *pfVar2;
  
  if ((*(int *)(in_ECX + 0x18) != 0) && (1 < *(int *)(in_ECX + 0x1c))) {
    *param_1 = 0;
    iVar1 = 1;
    if (1 < *(int *)(in_ECX + 0x1c)) {
      pfVar2 = (float *)(*(int *)(in_ECX + 0x18) + 0x88);
      do {
        if (param_2 < *pfVar2) {
          *param_1 = iVar1 + -1;
          break;
        }
        iVar1 = iVar1 + 1;
        pfVar2 = pfVar2 + 0x12;
      } while (iVar1 < *(int *)(in_ECX + 0x1c));
    }
    iVar1 = *(int *)(in_ECX + 0x18) + *param_1 * 0x48;
    param_1[1] = (int)((param_2 - *(float *)(*(int *)(in_ECX + 0x18) + 0x40 + *param_1 * 0x48)) /
                      (*(float *)(iVar1 + 0x88) - *(float *)(iVar1 + 0x40)));
  }
  return;
}



void FUN_0078f7a0(int param_1,ushort param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  int in_ECX;
  int iVar17;
  uint uVar18;
  float10 fVar19;
  int local_2c;
  float local_c;
  float local_8;
  float local_4;
  
  local_2c = 0;
  if (0 < *(int *)(in_ECX + 0x1c)) {
    iVar12 = param_2 + 1;
    do {
      iVar13 = iVar12 * local_2c;
      uVar18 = 0;
      do {
        if (uVar18 == 0) {
          iVar16 = (param_2 - 1) + iVar13;
        }
        else {
          iVar16 = iVar13 + -1 + uVar18;
        }
        iVar17 = iVar13 + 1;
        if (uVar18 != param_2) {
          iVar17 = iVar17 + uVar18;
        }
        iVar9 = *(int *)(in_ECX + 0x24);
        pfVar14 = (float *)FUN_00794730(iVar16 + iVar9);
        pfVar15 = (float *)FUN_00794730(iVar17 + iVar9);
        fVar1 = *pfVar15;
        fVar2 = *pfVar14;
        fVar3 = pfVar15[1];
        fVar4 = pfVar14[1];
        fVar5 = pfVar15[2];
        fVar6 = pfVar14[2];
        fVar19 = (float10)FUN_00982c30();
        fVar10 = 1.0 / (float)fVar19;
        fVar2 = fVar10 * (fVar1 - fVar2);
        fVar1 = (fVar3 - fVar4) * fVar10;
        fVar10 = fVar10 * (fVar5 - fVar6);
        iVar16 = iVar13;
        if (local_2c != 0) {
          iVar16 = (local_2c + -1) * iVar12;
        }
        iVar17 = iVar13;
        if (local_2c != *(int *)(in_ECX + 0x1c) + -1) {
          iVar17 = (local_2c + 1) * iVar12;
        }
        iVar9 = *(int *)(in_ECX + 0x24);
        pfVar14 = (float *)FUN_00794730(iVar16 + uVar18 + iVar9);
        pfVar15 = (float *)FUN_00794730(iVar17 + uVar18 + iVar9);
        fVar3 = *pfVar15;
        fVar4 = *pfVar14;
        fVar5 = pfVar15[1];
        fVar6 = pfVar14[1];
        fVar7 = pfVar15[2];
        fVar8 = pfVar14[2];
        fVar19 = (float10)FUN_00982c30();
        fVar11 = 1.0 / (float)fVar19;
        fVar4 = fVar11 * (fVar3 - fVar4);
        fVar3 = fVar11 * (fVar5 - fVar6);
        fVar11 = fVar11 * (fVar7 - fVar8);
        local_c = fVar1 * fVar11 - fVar3 * fVar10;
        local_8 = fVar4 * fVar10 - fVar2 * fVar11;
        local_4 = fVar2 * fVar3 - fVar1 * fVar4;
        FUN_007962f0(&local_c);
        *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + 1;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 <= (int)(uint)param_2);
      local_2c = local_2c + 1;
    } while (local_2c < *(int *)(in_ECX + 0x1c));
  }
  return;
}



float10 FUN_0078fa00(int *param_1)

{
  float10 fVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    fVar1 = (float10)FUN_0078fa00(*param_1);
    return (float10)((1.0 - (float)fVar1) * (float)param_1[1] + (float)fVar1);
  }
  return (float10)0;
}



int FUN_0078fa40(uint param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) == 0) ||
     ((uint)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x54) <= param_1)) {
    FUN_00984d5e();
  }
  return param_1 * 0x54 + *(int *)(in_ECX + 4);
}



int FUN_0078fa80(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 2;
}



void FUN_0078faa0(char *param_1)

{
  char *pcVar1;
  undefined **local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1;
    if ((uint)(0xffffffff / ZEXT48(param_1)) < 0xc) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_c,&param_1);
      local_c[0] = &PTR_FUN_00a32488;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_c,&DAT_00ad7f34);
    }
  }
  FUN_00401f00((int)pcVar1 * 0xc);
  return;
}



void FUN_0078fb00(char *param_1)

{
  char *pcVar1;
  undefined **local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1;
    if ((uint)(0xffffffff / ZEXT48(param_1)) < 0x18) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_c,&param_1);
      local_c[0] = &PTR_FUN_00a32488;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_c,&DAT_00ad7f34);
    }
  }
  FUN_00401f00((int)pcVar1 * 0x18);
  return;
}



void FUN_0078fb60(char *param_1)

{
  char *pcVar1;
  undefined **local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1;
    if ((uint)(0xffffffff / ZEXT48(param_1)) < 4) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_c,&param_1);
      local_c[0] = &PTR_FUN_00a32488;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_c,&DAT_00ad7f34);
    }
  }
  FUN_00401f00((int)pcVar1 * 4);
  return;
}



void FUN_0078fbc0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = param_4;
    return;
  }
  do {
    iVar2 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar2 * 4);
    if (*(float *)(iVar1 + 0x2c) <= *(float *)(param_4 + 0x2c)) break;
    *(int *)(param_1 + param_2 * 4) = iVar1;
    param_2 = iVar2;
  } while (param_3 < iVar2);
  *(int *)(param_1 + param_2 * 4) = param_4;
  return;
}



void FUN_0078fc20(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  
  iVar6 = (int)param_3 - (int)param_1 >> 2;
  iVar9 = param_2 - (int)param_1 >> 2;
  iVar7 = iVar9;
  iVar5 = iVar6;
  while (iVar2 = iVar7, iVar2 != 0) {
    iVar7 = iVar5 % iVar2;
    iVar5 = iVar2;
  }
  if ((iVar5 < iVar6) && (0 < iVar5)) {
    puVar8 = param_1 + iVar5;
    do {
      uVar1 = *puVar8;
      puVar4 = puVar8 + iVar9;
      puVar3 = puVar8;
      if (puVar8 + iVar9 == param_3) {
        puVar4 = param_1;
      }
      while (puVar4 != puVar8) {
        *puVar3 = *puVar4;
        iVar7 = (int)param_3 - (int)puVar4 >> 2;
        puVar3 = puVar4;
        if (iVar9 < iVar7) {
          puVar4 = puVar4 + iVar9;
        }
        else {
          puVar4 = param_1 + (iVar9 - iVar7);
        }
      }
      iVar5 = iVar5 + -1;
      puVar8 = puVar8 + -1;
      *puVar3 = uVar1;
    } while (0 < iVar5);
  }
  return;
}



float10 FUN_0078fcc0(float *param_1)

{
  float fVar1;
  float *in_ECX;
  float10 fVar2;
  
  fVar1 = param_1[2] * in_ECX[2] + *param_1 * *in_ECX + param_1[1] * in_ECX[1];
  if ((-1.0 <= fVar1) && (fVar1 <= 1.0)) {
    fVar2 = (float10)FUN_00986130();
    return (float10)(float)fVar2;
  }
  fVar2 = (float10)FUN_00986130();
  return (float10)(float)fVar2;
}



bool FUN_0078fd30(float *param_1,uint param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  bVar3 = true;
  if ((*(int *)(DAT_00b429b8 + 0x14) == 0) ||
     ((*(int *)(DAT_00b429b8 + 0x18) - *(int *)(DAT_00b429b8 + 0x14)) / 0x54 == 0)) {
    return false;
  }
  piVar1 = (int *)(DAT_00b429b8 + 0x14);
  if ((*(int *)(DAT_00b429b8 + 0x14) == 0) ||
     ((uint)((*(int *)(DAT_00b429b8 + 0x18) - *(int *)(DAT_00b429b8 + 0x14)) / 0x54) <= param_2)) {
    FUN_00984d5e();
  }
  iVar5 = param_2 * 0x54 + *piVar1;
  if (*(float *)(iVar5 + 0x48) <= *(float *)(iVar5 + 0x4c)) {
    fVar2 = *(float *)(iVar5 + 0x4c);
  }
  else {
    fVar2 = *(float *)(iVar5 + 0x48);
  }
  uVar6 = 0;
  fVar2 = *(float *)(DAT_00b429b8 + 0x20) * fVar2;
  iVar5 = FUN_0078fa80();
  if (iVar5 != 0) {
    while (bVar3) {
      if ((*(int *)(param_3 + 4) == 0) ||
         ((uint)(*(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 2) <= uVar6)) {
        FUN_00984d5e();
      }
      iVar5 = *(int *)(*(int *)(param_3 + 4) + uVar6 * 4);
      if ((((*param_1 < *(float *)(iVar5 + 4) + fVar2) && (*(float *)(iVar5 + 4) - fVar2 < *param_1)
           ) && (param_1[1] < *(float *)(iVar5 + 8) + fVar2)) &&
         (((*(float *)(iVar5 + 8) - fVar2 < param_1[1] &&
           (param_1[2] < *(float *)(iVar5 + 0xc) + fVar2)) &&
          (*(float *)(iVar5 + 0xc) - fVar2 < param_1[2])))) {
        bVar3 = false;
      }
      uVar6 = uVar6 + 1;
      uVar4 = FUN_0078fa80();
      if (uVar4 <= uVar6) {
        return bVar3;
      }
    }
    bVar3 = false;
  }
  return bVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0078feb0(int param_1,float param_2,float param_3,int param_4,int param_5,float *param_6,
                 undefined4 param_7,undefined4 param_8,float param_9,int param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float local_64;
  float local_5c;
  float local_58;
  double local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
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
  undefined4 local_4;
  
  local_64 = 0.0;
  if (DAT_00b429b8 == 0) {
    param_3 = 1.0;
  }
  else {
    param_3 = (1.0 - param_3) * param_2 + param_3;
    if (param_10 == 0) {
      param_3 = param_3 * param_3;
    }
    param_3 = *(float *)(DAT_00b429b8 + 8) * param_3 + (1.0 - *(float *)(DAT_00b429b8 + 8));
  }
  local_8 = param_3;
  local_c = param_3;
  local_10 = param_3;
  local_4 = 0x3f800000;
  if (param_4 < 0) {
    return;
  }
  fVar1 = param_2 + param_9;
  param_9 = (float)(param_4 + 1);
  local_54 = (double)fVar1;
  do {
    fVar3 = local_64 * _DAT_00b2b714;
    local_5c = param_6[2] * param_2 + local_64 * *param_6;
    local_58 = param_6[1] * (float)local_54;
    FUN_00796320(&local_5c,0xffffffff);
    fVar5 = (float10)FUN_00986000();
    fVar1 = (float)fVar5;
    fVar5 = (float10)FUN_00986300();
    fVar2 = (float)fVar5;
    local_4c = fVar1 * *(float *)(param_1 + 0x28) + fVar2 * *(float *)(param_1 + 0x34);
    local_48 = fVar2 * *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x2c) * fVar1;
    local_44 = fVar2 * *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x30) * fVar1;
    fVar5 = (float10)FUN_00986000();
    fVar1 = (float)fVar5;
    fVar5 = (float10)FUN_00986300();
    fVar2 = (float)fVar5;
    local_40 = fVar1 * *(float *)(param_1 + 0x28) + fVar2 * *(float *)(param_1 + 0x34);
    local_3c = fVar2 * *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x2c) * fVar1;
    local_38 = fVar2 * *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x30) * fVar1;
    FUN_00796590(&local_40);
    local_1c = local_44 * local_3c - local_48 * local_38;
    local_18 = local_4c * local_38 - local_40 * local_44;
    local_14 = local_40 * local_48 - local_4c * local_3c;
    FUN_007965e0(&local_1c);
    fVar5 = (float10)0;
    uVar4 = 0;
    while( true ) {
      if ((*(int *)(in_ECX + 0x34) == 0) ||
         ((uint)((*(int *)(in_ECX + 0x38) - *(int *)(in_ECX + 0x34)) / 0x18) <= uVar4)) break;
      if ((*(int *)(in_ECX + 0x34) == 0) ||
         ((uint)((*(int *)(in_ECX + 0x38) - *(int *)(in_ECX + 0x34)) / 0x18) <= uVar4)) {
        FUN_00984d5e();
      }
      fVar6 = (float10)FUN_0078f2c0(fVar3,param_2);
      fVar5 = fVar6 + (float10)(float)fVar5;
      uVar4 = uVar4 + 1;
    }
    fVar1 = (float)fVar5 + 1.0;
    local_34 = *(float *)(param_1 + 0xc) + local_4c * *(float *)(param_1 + 0x18);
    local_30 = *(float *)(param_1 + 0x10) + local_48 * *(float *)(param_1 + 0x18);
    local_2c = *(float *)(param_1 + 0x14) + local_44 * *(float *)(param_1 + 0x18);
    if (fVar1 != 1.0) {
      local_34 = *(float *)(param_1 + 0xc) + fVar1 * *(float *)(param_1 + 0x18) * local_4c;
      local_30 = *(float *)(param_1 + 0x10) + fVar1 * *(float *)(param_1 + 0x18) * local_48;
      local_2c = local_44 * *(float *)(param_1 + 0x18) * fVar1 + *(float *)(param_1 + 0x14);
      local_28 = local_34;
      local_24 = local_30;
      local_20 = local_2c;
    }
    FUN_00796260(&local_34);
    FUN_00796230(&local_10);
    if (*(char *)(param_5 + 8) != '\0') {
      FUN_00796540(param_7,param_8);
    }
    local_64 = 1.0 / (float)param_4 + local_64;
    *(short *)(param_5 + 0x22) = *(short *)(param_5 + 0x22) + 1;
    param_9 = (float)((int)param_9 + -1);
  } while (param_9 != 0.0);
  return;
}


