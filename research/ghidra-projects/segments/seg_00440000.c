
void FUN_004400a0(int param_1,char param_2)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (DAT_00b051dc <= uVar2) {
LAB_004400f0:
      for (; iVar1 = *(int *)(in_ECX + 0x3c), uVar2 < DAT_00b051dc - 1; uVar2 = uVar2 + 1) {
        *(undefined4 *)(iVar1 + uVar2 * 4) = *(undefined4 *)(iVar1 + 4 + uVar2 * 4);
      }
      *(undefined4 *)(iVar1 + -4 + DAT_00b051dc * 4) = 0;
      *(undefined1 *)(in_ECX + 0x69) = 1;
      return;
    }
    if (param_1 == *(int *)(*(int *)(in_ECX + 0x3c) + uVar2 * 4)) {
      FUN_00482530(param_1);
      if (param_2 != '\0') {
        FUN_00447ba0(param_1);
      }
      *(undefined4 *)(*(int *)(in_ECX + 0x3c) + uVar2 * 4) = 0;
      goto LAB_004400f0;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}



void FUN_00440120(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (DAT_00b051d4 <= uVar2) {
LAB_00440160:
      for (; iVar1 = *(int *)(in_ECX + 0x38), uVar2 < DAT_00b051d4 - 1; uVar2 = uVar2 + 1) {
        *(undefined4 *)(iVar1 + uVar2 * 4) = *(undefined4 *)(iVar1 + 4 + uVar2 * 4);
      }
      *(undefined4 *)(iVar1 + -4 + DAT_00b051d4 * 4) = 0;
      *(undefined1 *)(in_ECX + 0x69) = 1;
      return;
    }
    if (param_1 == *(int *)(*(int *)(in_ECX + 0x38) + uVar2 * 4)) {
      FUN_00447ba0(param_1);
      *(undefined4 *)(*(int *)(in_ECX + 0x38) + uVar2 * 4) = 0;
      goto LAB_00440160;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}



void FUN_00440190(int param_1)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(*(int *)(in_ECX + 0x5c) + 0xdc) != 0) {
    if (param_1 == 0) {
      FUN_00543bb0();
      return;
    }
    cVar1 = FUN_004c97f0();
    if (cVar1 == '\0') {
      FUN_00543bb0(3);
      return;
    }
    cVar1 = FUN_004c9820();
    if (cVar1 == '\0') {
      FUN_00543bb0(1);
      return;
    }
    FUN_00543bb0(2);
  }
  return;
}



void FUN_00440200(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)(DAT_00b333a0 + 0x34) == 0) {
    uVar1 = DAT_00b06a2c;
    for (uVar4 = 0; uVar4 < uVar1; uVar4 = uVar4 + 1) {
      for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
        puVar2 = (undefined4 *)FUN_00482150(uVar4,uVar3);
        FUN_0049a000(*puVar2);
        uVar1 = DAT_00b06a2c;
      }
    }
  }
  else if (*(int *)(in_ECX + 0x58) != 0) {
    FUN_0049b5f0(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24));
    return;
  }
  return;
}



void FUN_00440270(void)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = false;
  uVar4 = 0;
  do {
    if (DAT_00b06a2c <= uVar4) {
      if (bVar1) {
        if (DAT_00b0703c == '\0') {
          FUN_00498f30();
          return;
        }
      }
      else if (DAT_00b0703c != '\0') {
        FUN_0049a8b0(1);
      }
      return;
    }
    for (uVar3 = 0; uVar3 < DAT_00b06a2c; uVar3 = uVar3 + 1) {
      piVar2 = (int *)FUN_00482150(uVar4,uVar3);
      if ((*piVar2 != 0) && ((*(byte *)(*piVar2 + 0x24) >> 1 & 1) != 0)) {
        bVar1 = true;
        break;
      }
    }
    uVar4 = uVar4 + 1;
  } while( true );
}



void FUN_004402f0(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  
  if ((DAT_00b33a58 == '\0') && (cVar2 = FUN_004f9fa0(), cVar2 != '\0')) {
    piVar4 = (int *)(DAT_00b33a98 + 0x84);
    DAT_00b33a58 = 1;
    uVar3 = DAT_00b06a2c;
    while (DAT_00b06a2c = uVar3, piVar4 != (int *)0x0) {
      iVar1 = *piVar4;
      piVar4 = (int *)piVar4[1];
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x3c) & 1) != 0)) {
        FUN_00529aa0();
        uVar3 = DAT_00b06a2c;
      }
    }
    if (*(int *)(in_ECX + 0x34) == 0) {
      for (uVar7 = 0; uVar7 < uVar3; uVar7 = uVar7 + 1) {
        for (uVar5 = 0; uVar5 < uVar3; uVar5 = uVar5 + 1) {
          piVar4 = (int *)FUN_00482150(uVar7,uVar5);
          if (((*piVar4 != 0) && (*(char *)(*piVar4 + 0x26) == '\x06')) &&
             (cVar2 = FUN_004cb8c0(0,0), cVar2 != '\0')) goto LAB_0044034c;
          uVar3 = DAT_00b06a2c;
        }
      }
    }
    else {
      FUN_004cb8c0(0,0);
    }
LAB_0044034c:
    piVar4 = *(int **)(in_ECX + 0x88);
    if (piVar4 != (int *)0x0) {
      *(undefined4 *)(in_ECX + 0x88) = 0;
      piVar6 = piVar4;
      do {
        if (*piVar6 != 0) {
          FUN_004d7190();
        }
        piVar6 = (int *)piVar6[1];
      } while (piVar6 != (int *)0x0);
      iVar1 = piVar4[1];
      while (iVar1 != 0) {
        iVar1 = *(int *)(piVar4[1] + 4);
        FUN_00401f20(piVar4[1]);
        piVar4[1] = iVar1;
      }
      *piVar4 = 0;
      FUN_00401f20(piVar4);
    }
    FUN_004fa580();
    DAT_00b33a58 = '\0';
  }
  return;
}



undefined4 FUN_00440420(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009a9f28;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)(**(code **)(*DAT_00b35300 + 4))(param_1,0,uVar1);
  puStack_4 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar2 + 1);
  }
  local_c = 0;
  if (puVar2 != (undefined4 *)0x0) {
    if ((uint)puVar2[1] <= unaff_retaddr + 2U) {
      FUN_004a1a10(param_1);
      local_c = -1;
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if (LVar3 == 0) {
        (**(code **)*puVar2)(1);
      }
      *unaff_FS_OFFSET = unaff_ESI;
      return 1;
    }
  }
  local_c = -1;
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if (LVar3 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *unaff_FS_OFFSET = unaff_ESI;
  return 0;
}



int FUN_00440560(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x34);
  if (iVar1 == 0) {
    if ((*(int *)(in_ECX + 0x20) != 0x7fffffff) && (*(int *)(in_ECX + 0x24) != 0x7fffffff)) {
      iVar1 = FUN_0043fa40(*(int *)(in_ECX + 0x20),*(int *)(in_ECX + 0x24));
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}



uint FUN_00440590(float *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = (uint)ROUND(*param_1);
  uVar3 = (uint)ROUND(param_1[1]);
  uVar1 = uVar4 & 0x80000fff;
  bVar5 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar5 = (uVar1 - 1 | 0xfffff000) == 0xffffffff;
  }
  if ((bVar5) && (*param_1 < (float)(int)uVar4)) {
    uVar4 = uVar4 - 1;
  }
  uVar1 = uVar3 & 0x80000fff;
  bVar5 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar5 = (uVar1 - 1 | 0xfffff000) == 0xffffffff;
  }
  if ((bVar5) && (param_1[1] < (float)(int)uVar3)) {
    uVar3 = uVar3 - 1;
  }
  *param_2 = 0xc5000000;
  if (((*(int *)(in_ECX + 0x30) == 0) || (iVar2 = FUN_004c9a80(), iVar2 != (int)uVar4 >> 0xc)) ||
     (uVar1 = FUN_004c9aa0(), uVar1 != (int)uVar3 >> 0xc)) {
    uVar1 = FUN_0043fa40((int)uVar4 >> 0xc,(int)uVar3 >> 0xc);
    *(uint *)(in_ECX + 0x30) = uVar1;
  }
  if (*(int *)(in_ECX + 0x30) != 0) {
    uVar1 = (int)*(char *)(*(int *)(in_ECX + 0x30) + 0x26) - 2;
    switch(uVar1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      FUN_004ce3c0(param_1,param_2);
      uVar4 = FUN_004c5b50(param_1,param_2);
      return uVar4;
    }
  }
  return uVar1 & 0xffffff00;
}



uint FUN_004406a0(float *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = (uint)ROUND(*param_1);
  uVar4 = (uint)ROUND(param_1[1]);
  uVar1 = uVar3 & 0x80000fff;
  bVar5 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar5 = (uVar1 - 1 | 0xfffff000) == 0xffffffff;
  }
  if ((bVar5) && (*param_1 < (float)(int)uVar3)) {
    uVar3 = uVar3 - 1;
  }
  uVar1 = uVar4 & 0x80000fff;
  bVar5 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar5 = (uVar1 - 1 | 0xfffff000) == 0xffffffff;
  }
  if ((bVar5) && (param_1[1] < (float)(int)uVar4)) {
    uVar4 = uVar4 - 1;
  }
  *param_2 = DAT_00b3f9a8;
  param_2[1] = DAT_00b3f9ac;
  param_2[2] = 0x3f800000;
  if (*(int *)(in_ECX + 0x30) != 0) {
    iVar2 = FUN_004c9a80();
    if (iVar2 == (int)uVar3 >> 0xc) {
      uVar1 = FUN_004c9aa0();
      if (uVar1 == (int)uVar4 >> 0xc) goto LAB_00440764;
    }
  }
  uVar1 = FUN_0043fa40((int)uVar3 >> 0xc,(int)uVar4 >> 0xc);
  *(uint *)(in_ECX + 0x30) = uVar1;
LAB_00440764:
  if (*(int *)(in_ECX + 0x30) != 0) {
    FUN_004ce3c0(param_1,param_2,param_3);
    uVar3 = FUN_004c3c00(param_1,param_2,param_3);
    return uVar3;
  }
  return uVar1 & 0xffffff00;
}



uint FUN_004407a0(float *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = (uint)ROUND(*param_1);
  uVar3 = (uint)ROUND(param_1[1]);
  uVar1 = uVar4 & 0x80000fff;
  bVar5 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar5 = (uVar1 - 1 | 0xfffff000) == 0xffffffff;
  }
  if ((bVar5) && (*param_1 < (float)(int)uVar4)) {
    uVar4 = uVar4 - 1;
  }
  uVar1 = uVar3 & 0x80000fff;
  bVar5 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar5 = (uVar1 - 1 | 0xfffff000) == 0xffffffff;
  }
  if ((bVar5) && (param_1[1] < (float)(int)uVar3)) {
    uVar3 = uVar3 - 1;
  }
  if (*(int *)(in_ECX + 0x30) != 0) {
    iVar2 = FUN_004c9a80();
    if (iVar2 == (int)uVar4 >> 0xc) {
      uVar1 = FUN_004c9aa0();
      if (uVar1 == (int)uVar3 >> 0xc) goto LAB_0044084d;
    }
  }
  uVar1 = FUN_0043fa40((int)uVar4 >> 0xc,(int)uVar3 >> 0xc);
  *(uint *)(in_ECX + 0x30) = uVar1;
LAB_0044084d:
  if (*(int *)(in_ECX + 0x30) == 0) {
    return uVar1 & 0xffffff00;
  }
  FUN_004ce3c0(param_1,param_2);
  uVar4 = FUN_004c4790(param_1,param_2);
  return uVar4;
}



undefined4 FUN_00440880(float *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = (uint)ROUND(*param_1);
  uVar5 = (uint)ROUND(param_1[1]);
  uVar2 = uVar6 & 0x80000fff;
  bVar7 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar7 = (uVar2 - 1 | 0xfffff000) == 0xffffffff;
  }
  if ((bVar7) && (*param_1 < (float)(int)uVar6)) {
    uVar6 = uVar6 - 1;
  }
  uVar2 = uVar5 & 0x80000fff;
  bVar7 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar7 = (uVar2 - 1 | 0xfffff000) == 0xffffffff;
  }
  if ((bVar7) && (param_1[1] < (float)(int)uVar5)) {
    uVar5 = uVar5 - 1;
  }
  if (*(int *)(in_ECX + 0x30) != 0) {
    iVar3 = FUN_004c9a80();
    if (iVar3 == (int)uVar6 >> 0xc) {
      iVar3 = FUN_004c9aa0();
      if (iVar3 == (int)uVar5 >> 0xc) goto LAB_0044092d;
    }
  }
  uVar4 = FUN_0043fa40((int)uVar6 >> 0xc,(int)uVar5 >> 0xc);
  *(undefined4 *)(in_ECX + 0x30) = uVar4;
LAB_0044092d:
  if (*(int *)(in_ECX + 0x30) != 0) {
    cVar1 = FUN_004c97f0();
    if ((cVar1 == '\0') &&
       ((cVar1 = *(char *)(*(int *)(in_ECX + 0x30) + 0x26), cVar1 == '\x03' || (cVar1 == '\x06'))))
    {
      FUN_004ce3c0(param_1);
      uVar4 = FUN_004c5af0(param_1);
      return uVar4;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00440970(float *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar6 = (uint)ROUND(*param_1);
  uVar5 = (uint)ROUND(param_1[1]);
  uVar2 = uVar6 & 0x80000fff;
  bVar8 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar8 = (uVar2 - 1 | 0xfffff000) == 0xffffffff;
  }
  if ((bVar8) && (*param_1 < (float)(int)uVar6)) {
    uVar6 = uVar6 - 1;
  }
  uVar2 = uVar5 & 0x80000fff;
  bVar8 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar8 = (uVar2 - 1 | 0xfffff000) == 0xffffffff;
  }
  if ((bVar8) && (param_1[1] < (float)(int)uVar5)) {
    uVar5 = uVar5 - 1;
  }
  uVar2 = uVar6 & 0x8000007f;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xffffff80) + 1;
  }
  uVar7 = uVar5 & 0x8000007f;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xffffff80) + 1;
  }
  if (uVar6 - uVar2 != DAT_00b05198) {
    if (((*(int *)(in_ECX + 0x30) == 0) || (iVar3 = FUN_004c9a80(), iVar3 != (int)uVar6 >> 0xc)) ||
       (iVar3 = FUN_004c9aa0(), iVar3 != (int)uVar5 >> 0xc)) {
      uVar4 = FUN_0043fa40((int)uVar6 >> 0xc,(int)uVar5 >> 0xc);
      *(undefined4 *)(in_ECX + 0x30) = uVar4;
    }
    if ((*(int *)(in_ECX + 0x30) != 0) && (cVar1 = FUN_004c97f0(), cVar1 == '\0')) {
      FUN_004ce3c0();
      iVar3 = FUN_004c5aa0(param_1);
      if (iVar3 != 0) {
        DAT_00b33a5c = iVar3;
        DAT_00b05198 = uVar6 - uVar2;
        _DAT_00b05194 = uVar5 - uVar7;
        return iVar3;
      }
    }
    return 0;
  }
  return DAT_00b33a5c;
}



undefined4 FUN_00440ac0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00440970(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_004c8d10();
    return uVar2;
  }
  return 2;
}



undefined4 FUN_00440af0(char param_1,char param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == '\0') {
    FUN_00578e30();
    FUN_005a9010();
    if (*(int *)(DAT_00b33398 + 0x24) != 0) {
      FUN_006a9aa0();
    }
  }
  else {
    iVar2 = FUN_00589b70(0x3ef);
    if (iVar2 == 0) {
      FUN_00540590();
      iVar2 = *(int *)(DAT_00b33398 + 0x24);
      if (iVar2 != 0) {
        FUN_006a9a10();
        FUN_006ac3d0();
      }
      iVar4 = 0;
      iVar5 = 0;
      if (*(int *)(in_ECX + 0x34) == 0) {
        if ((param_2 == '\0') && (iVar4 = param_3, param_3 == 0)) {
          if ((*(int *)(in_ECX + 0x20) != 0x7fffffff) && (*(int *)(in_ECX + 0x24) != 0x7fffffff)) {
            iVar4 = FUN_004efe80(*(int *)(in_ECX + 0x20),*(int *)(in_ECX + 0x24));
            iVar5 = iVar4;
            if (iVar4 != 0) goto LAB_00440b9c;
          }
          iVar4 = *(int *)(in_ECX + 0x74);
          if (*(int *)(in_ECX + 0x74) == 0) {
            return 0;
          }
        }
      }
      else if (param_2 == '\0') {
        iVar4 = *(int *)(in_ECX + 0x34);
      }
LAB_00440b9c:
      cVar1 = FUN_0040fda0();
      if ((cVar1 == '\0') &&
         (((iVar5 != 0 && (iVar2 != 0)) || ((*(int *)(in_ECX + 0x34) != 0 && (iVar2 != 0)))))) {
        uVar7 = 0;
        uVar6 = 0;
        uVar3 = FUN_004cad00(0);
        cVar1 = FUN_006ab160(uVar3,uVar6,uVar7);
        if (cVar1 != '\0') {
          FUN_006ab420();
        }
      }
      FUN_00578e10(iVar4);
      local_10 = 0;
      local_c = 0x3dcccccd;
      local_8 = 0x3f666666;
      local_4 = 0;
      FUN_00578e90(&local_10);
      return 1;
    }
  }
  return 0;
}



void FUN_00440c40(void)

{
  FUN_0057acc0(DAT_00b38bf8,0,0,0x3dcccccd);
  FUN_005791a0();
  FUN_005791e0();
  FUN_00579220();
  DAT_00b35228 = 1;
  FUN_0040d4d0();
  return;
}



undefined4 FUN_00440c80(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  if (DAT_00b33a64 != param_1) {
    cVar4 = FUN_004c97f0();
    if (cVar4 == '\0') {
      if (param_2 == (float *)0x0) {
        iVar5 = FUN_004c9a80();
        uVar8 = iVar5 + ((DAT_00b06a2c >> 1) - *(int *)(in_ECX + 0x20));
        uVar7 = DAT_00b06a2c >> 1;
        iVar5 = FUN_004c9aa0();
        iVar9 = uVar7 - *(int *)(in_ECX + 0x24);
      }
      else {
        fVar1 = *param_2;
        iVar5 = FUN_004c9a80();
        fVar2 = param_2[1];
        uVar8 = iVar5 + ((DAT_00b06a2c >> 1) - ((int)ROUND(fVar1) >> 0xc));
        uVar7 = DAT_00b06a2c >> 1;
        iVar5 = FUN_004c9aa0();
        iVar9 = uVar7 - ((int)ROUND(fVar2) >> 0xc);
      }
      uVar6 = iVar5 + iVar9;
    }
    else {
      uVar6 = DAT_00b06a2c >> 1;
      uVar7 = uVar6;
      uVar8 = uVar6;
    }
    iVar9 = uVar8 - uVar7;
    iVar5 = uVar6 - uVar7;
    if (iVar5 < iVar9) {
      bVar3 = (byte)(iVar9 >> 0x1f);
      cVar4 = ((byte)iVar9 ^ bVar3) - bVar3;
    }
    else {
      bVar3 = (byte)(iVar5 >> 0x1f);
      cVar4 = ((byte)iVar5 ^ bVar3) - bVar3;
    }
    bVar10 = 0x14 < (byte)((cVar4 + '\x01') * '\n');
    if ((byte)((-bVar10 & 0x14U) + 0x14) - 10 < 0x29) {
      switch(bVar10) {
      case false:
        DAT_00b33a60 = 1;
        DAT_00b33a64 = param_1;
        return 1;
      case true:
        DAT_00b33a60 = 3;
        DAT_00b33a64 = param_1;
        return 3;
      }
    }
    DAT_00b33a64 = param_1;
  }
  return DAT_00b33a60;
}



void FUN_00440e60(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    piVar2 = (int *)FUN_00401f00(0xe0,uVar1);
    local_4 = 0;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      FUN_0070b780(0);
      piVar2[0x37] = param_2;
      *piVar2 = (int)&PTR_FUN_00a3738c;
    }
    local_4 = 0xffffffff;
    (**(code **)(*piVar2 + 0x84))(param_1,1);
    (**(code **)(**(int **)(in_ECX + 0x14) + 0x84))(piVar2,1);
    FUN_00707980();
    FUN_00707610();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00440f20(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  for (piVar1 = (int *)(in_ECX + 0x8c); (piVar1 != (int *)0x0 && (*piVar1 != 0));
      piVar1 = (int *)piVar1[1]) {
    FUN_00401f20(*piVar1);
  }
  iVar2 = *(int *)(in_ECX + 0x90);
  while (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x90) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x90));
    *(int *)(in_ECX + 0x90) = iVar2;
  }
  *(int *)(in_ECX + 0x8c) = 0;
  return;
}



uint FUN_00440f70(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  for (piVar1 = (int *)(in_ECX + 0x8c);
      (piVar1 != (int *)0x0 && (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0));
      piVar1 = (int *)piVar1[1]) {
    if (*piVar2 == param_1) {
      return CONCAT22((short)((uint)piVar1 >> 0x10),(short)piVar2[1]);
    }
  }
  return (uint)piVar1 & 0xffff0000;
}



void FUN_00440fa0(int param_1,short param_2)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  for (piVar2 = (int *)(in_ECX + 0x8c);
      (piVar2 != (int *)0x0 && (piVar1 = (int *)*piVar2, piVar1 != (int *)0x0));
      piVar2 = (int *)piVar2[1]) {
    if (*piVar1 == param_1) {
      *(short *)(piVar1 + 1) = (short)piVar1[1] + param_2;
      return;
    }
  }
  piVar2 = (int *)FUN_00401f00(8);
  *(short *)(piVar2 + 1) = param_2;
  *piVar2 = param_1;
  FUN_00446cb0(piVar2);
  return;
}



short FUN_00441000(void)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  short sVar5;
  int in_ECX;
  short sVar6;
  
  sVar6 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    sVar6 = 6;
  }
  sVar5 = 0;
  for (piVar3 = (int *)(in_ECX + 0x8c); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    if (*piVar3 != 0) {
      sVar5 = sVar5 + 1;
    }
  }
  sVar6 = sVar6 + 4 + sVar5 * 6;
  if (0x31 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    sVar6 = sVar6 + 4;
  }
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar3 = (int *)FUN_0046b250(*puVar1);
      uVar4 = (**(code **)(*piVar3 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0x1591,"..\\TES Shared\\TES.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,sVar6,*puVar1,uVar4);
      return sVar6;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",sVar6,0x1591,
                 "..\\TES Shared\\TES.cpp");
  }
  return sVar6;
}



void FUN_004410d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  char cVar6;
  int *piVar7;
  undefined4 uVar8;
  int in_ECX;
  int *piVar9;
  undefined4 local_10;
  short *local_c;
  undefined4 local_8;
  int local_4;
  
  local_8 = 0;
  iVar1 = *(int *)(DAT_00b33b00 + 0x14);
  local_c = (short *)0x0;
  cVar6 = FUN_0045a170();
  if (cVar6 != '\0') {
    local_10 = 0x4b4f4c42;
    FUN_0045b9a0(&local_10,4);
    local_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_8,2);
  }
  local_4 = 0;
  piVar9 = (int *)(in_ECX + 0x8c);
  for (piVar7 = piVar9; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
    if (*piVar7 != 0) {
      local_4 = local_4 + 1;
    }
  }
  FUN_0045b9a0(&local_4,4);
  for (; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[1]) {
    piVar7 = (int *)*piVar9;
    if (piVar7 != (int *)0x0) {
      local_10 = 0;
      if (*piVar7 != 0) {
        local_10 = *(undefined4 *)(*piVar7 + 0xc);
      }
      FUN_0045f7a0(&local_10,4);
      FUN_0045b9a0(piVar7 + 1,2);
    }
  }
  if (0x31 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(&DAT_00b33a30,4);
  }
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar3 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar3 - iVar1,0x15f0,
                   "..\\TES Shared\\TES.cpp");
    }
    else {
      piVar7 = (int *)FUN_0046b250(*puVar2);
      uVar8 = (**(code **)(*piVar7 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0x15f0,"..\\TES Shared\\TES.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar3 - iVar1,*puVar2,uVar8);
    }
  }
  cVar6 = FUN_0045a170();
  psVar5 = local_c;
  if (cVar6 != '\0') {
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_c + 0xffffU < uVar4) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   "..\\TES Shared\\TES.cpp",0x15f0);
    }
    *psVar5 = (short)uVar4 - (short)psVar5;
  }
  return;
}



void FUN_00441280(void)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_14;
  uint local_10;
  int local_c;
  int iStack_8;
  undefined4 uStack_4;
  
  local_14 = 0;
  iVar7 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    FUN_004534d0(&local_c,4);
    if (local_c != 0x4b4f4c42) {
      puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,"..\\TES Shared\\TES.cpp",0x15f6,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar3 = (int *)FUN_0046b250(*puVar1);
        uVar4 = (**(code **)(*piVar3 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,"..\\TES Shared\\TES.cpp",0x15f6,*puVar1,uVar4);
      }
    }
    iVar7 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_14,2);
  }
  if (0x13 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(&local_10,4);
    uVar8 = 0;
    if (local_10 != 0) {
      do {
        FUN_0045ba00(&iStack_8,4);
        FUN_004534d0(&uStack_4,2);
        if (iStack_8 != 0) {
          uVar4 = FUN_0046b250(iStack_8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03de4,0);
          iVar5 = FUN_009832e6(uVar4);
          if (iVar5 != 0) {
            FUN_00440fa0(iVar5,uStack_4);
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_10);
    }
  }
  if (0x31 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(&DAT_00b33a30,4);
  }
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar8 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar6 = local_14 & 0xffff;
      if (uVar6 + iVar7 < uVar8) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar8 - uVar6) - iVar7,"..\\TES Shared\\TES.cpp",0x16e4,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar8 < uVar6 + iVar7) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar6 - uVar8) + iVar7,"..\\TES Shared\\TES.cpp",0x16e4,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar3 = (int *)FUN_0046b250(*puVar1);
      uVar6 = (local_14 & 0xffff) + iVar7;
      if (uVar6 < uVar8) {
        uVar4 = (**(code **)(*piVar3 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar8 - (local_14 & 0xffff)) - iVar7,"..\\TES Shared\\TES.cpp",0x16e4,*puVar1
                     ,uVar4);
        return;
      }
      if (uVar8 < uVar6) {
        uVar4 = (**(code **)(*piVar3 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_14 & 0xffff) - uVar8) + iVar7,"..\\TES Shared\\TES.cpp",0x16e4,*puVar1
                     ,uVar4);
        return;
      }
    }
  }
  return;
}



void FUN_00441510(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < DAT_00b051d4; iVar2 = iVar2 + 1) {
    if ((*(int *)(*(int *)(in_ECX + 0x38) + iVar2 * 4) != 0) &&
       (iVar1 = *(int *)(*(int *)(in_ECX + 0x38) + iVar2 * 4), iVar1 != 0)) {
      switch(*(undefined1 *)(iVar1 + 0x26)) {
      case 5:
      case 6:
        FUN_004cb590(1);
      }
    }
  }
  for (iVar2 = 0; iVar2 < DAT_00b051dc; iVar2 = iVar2 + 1) {
    if ((*(int *)(*(int *)(in_ECX + 0x3c) + iVar2 * 4) != 0) &&
       (iVar1 = *(int *)(*(int *)(in_ECX + 0x3c) + iVar2 * 4), iVar1 != 0)) {
      switch(*(undefined1 *)(iVar1 + 0x26)) {
      case 5:
      case 6:
        FUN_004cb590(1);
      }
    }
  }
  return;
}



void FUN_004415c0(void)

{
  int in_ECX;
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < DAT_00b051dc; uVar1 = uVar1 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0x3c) + uVar1 * 4) != 0) {
      FUN_004ccda0();
    }
  }
  for (uVar1 = 0; uVar1 < DAT_00b051d4; uVar1 = uVar1 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0x38) + uVar1 * 4) != 0) {
      FUN_004ccda0();
    }
  }
  return;
}



void FUN_00441610(void)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(in_ECX + 0x34) != 0) {
    FUN_004cb9e0(in_ECX + 0x80);
    return;
  }
  uVar1 = DAT_00b06a2c;
  for (uVar2 = 0; uVar2 < uVar1; uVar2 = uVar2 + 1) {
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      FUN_00482150(uVar2,uVar3);
      FUN_004cb9e0(in_ECX + 0x80);
      uVar1 = DAT_00b06a2c;
    }
  }
  return;
}



void FUN_00441670(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (param_1 != 0) {
    piVar1 = *(int **)(in_ECX + 0x88);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)FUN_00401f00(8);
      if (piVar1 != (int *)0x0) {
        *piVar1 = param_1;
        piVar1[1] = 0;
        *(int **)(in_ECX + 0x88) = piVar1;
        return;
      }
      *(undefined4 *)(in_ECX + 0x88) = 0;
      return;
    }
    do {
      if (*piVar1 == param_1) {
        return;
      }
      piVar1 = (int *)piVar1[1];
    } while (piVar1 != (int *)0x0);
    FUN_00446cb0(param_1);
  }
  return;
}



void FUN_004416d0(int param_1)

{
  int in_ECX;
  
  if ((param_1 != 0) && (*(int *)(in_ECX + 0x88) != 0)) {
    FUN_0065c620();
    return;
  }
  return;
}



void FUN_004416f0(void)

{
  uint uVar1;
  int *piVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  
  if (DAT_00b33a98 != 0) {
    if ((*(int *)(in_ECX + 0x34) != 0) && (*(char *)(*(int *)(in_ECX + 0x34) + 0x26) == '\x06')) {
      FUN_004cd090();
    }
    uVar1 = DAT_00b06a2c;
    for (uVar4 = 0; uVar4 < uVar1; uVar4 = uVar4 + 1) {
      for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
        piVar2 = (int *)FUN_00482150(uVar4,uVar3);
        if ((*piVar2 != 0) && (*(char *)(*piVar2 + 0x26) == '\x06')) {
          FUN_004cd090();
        }
        uVar1 = DAT_00b06a2c;
      }
    }
  }
  return;
}



int FUN_00441760(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  
  piVar2 = (int *)(in_ECX + 0xa0);
  piVar4 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    do {
      if (piVar4 != (int *)0x0) goto LAB_00441796;
      piVar1 = (int *)piVar2[1];
      if ((piVar1 == (int *)0x0) && (*piVar2 == 0)) {
        return 0;
      }
      piVar2 = (int *)*piVar2;
      if ((piVar2 != (int *)0x0) && (*piVar2 == param_1)) {
        piVar4 = piVar2;
      }
      piVar2 = piVar1;
    } while (piVar1 != (int *)0x0);
    if (piVar4 != (int *)0x0) {
LAB_00441796:
      piVar2 = (int *)piVar4[1];
      if (piVar2 != (int *)0x0) {
        iVar3 = 0;
        piVar4 = piVar2;
        do {
          if ((*piVar4 != 0) && (*(int *)(*piVar4 + 4) == 1)) {
            return piVar2[iVar3];
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar3 < 5);
      }
    }
  }
  return 0;
}



undefined4 FUN_004417d0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ca790();
  if ((iVar1 != 0) && (param_1 < *(ushort *)(iVar1 + 0xb6))) {
    return *(undefined4 *)(*(int *)(iVar1 + 0xb0) + param_1 * 4);
  }
  return 0;
}



undefined4 FUN_00441800(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004ca790();
  if ((((iVar1 != 0) && (param_1 + 2U < (uint)*(ushort *)(iVar1 + 0xb6))) &&
      (iVar1 = *(int *)(*(int *)(iVar1 + 0xb0) + (param_1 + 2U) * 4), iVar1 != 0)) &&
     (param_2 < *(ushort *)(iVar1 + 0xb6))) {
    return *(undefined4 *)(*(int *)(iVar1 + 0xb0) + param_2 * 4);
  }
  return 0;
}



void FUN_00441850(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b4310c;
  if (DAT_00b4310c != param_1) {
    if (((DAT_00b4310c != (undefined4 *)0x0) &&
        (LVar2 = InterlockedDecrement(DAT_00b4310c + 1), LVar2 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b4310c = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_004418a0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x84);
  while (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x84) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x84));
    *(int *)(in_ECX + 0x84) = iVar1;
  }
  *(undefined4 *)(in_ECX + 0x80) = 0;
  return;
}



void FUN_004418e0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_c [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void FUN_00441920(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x14);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x14) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441970(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_009ad0f7;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a37470;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  local_4 = 2;
  uStack_3 = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  _memset(in_ECX,0,0xac);
  DAT_00b3f580 = 1;
  FUN_005350f0();
  FUN_00537760();
  _DAT_00ba7920 = _DAT_00b33a40;
  _DAT_00ba791c = _DAT_00b33a38;
  DAT_00ba7918 = DAT_00b0520c;
  _DAT_00b2e2f0 = _DAT_00b05234;
  _DAT_00b2e764 = _DAT_00b05214;
  PTR_FUN_00b2e300 = &LAB_004de010;
  DAT_00ba7909 = DAT_00b0521c;
  _DAT_00b2e784 = _DAT_00b33a50 * _DAT_00b33a50;
  DAT_00b2e2f4 = DAT_00b05224;
  DAT_00b2e2f8 = DAT_00b0522c;
  DAT_00ba7a88 = FUN_004e2160;
  DAT_00ba7a84 = FUN_0060d0a0;
  iVar2 = FUN_00401f00(0x28);
  local_4 = 3;
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00483350(uVar1);
  }
  in_ECX[2] = piVar3;
  local_4 = 2;
  (**(code **)(*piVar3 + 4))();
  iVar2 = FUN_00401f00(0x14);
  local_4 = 4;
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_004838f0();
  }
  in_ECX[1] = piVar3;
  local_4 = 2;
  (**(code **)(*piVar3 + 4))();
  FUN_004be8a0();
  FUN_004bdcd0();
  iVar2 = FUN_00401f00(0x3c);
  local_4 = 5;
  if (iVar2 == 0) {
    g_IOManager_singleton = 0;
  }
  else {
    g_IOManager_singleton = IOManager_ctor();
  }
  local_4 = 2;
  iVar2 = FUN_00401f00(0x1c);
  local_4 = 6;
  if (iVar2 == 0) {
    g_ModelLoader_singleton = 0;
  }
  else {
    g_ModelLoader_singleton = FUN_0043e950();
  }
  local_4 = 2;
  iVar2 = FUN_00401f00(0xce0);
  local_4 = 7;
  if (iVar2 == 0) {
    DAT_00b33a98 = 0;
  }
  else {
    DAT_00b33a98 = FUN_00446d80();
  }
  local_4 = 2;
  FUN_0044a2b0(param_1);
  iVar2 = FUN_00401f00(0x1c4);
  local_4 = 8;
  if (iVar2 == 0) {
    DAT_00b33b00 = 0;
  }
  else {
    DAT_00b33b00 = FUN_0045b300();
  }
  uVar1 = (DAT_00b06a2c + 2) * DAT_00b06a2c + 1;
  local_4 = 2;
  if (DAT_00b051dc < uVar1) {
    DAT_00b051dc = uVar1;
  }
  if (DAT_00b051d4 == 0) {
    DAT_00b051d4 = 1;
  }
  uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)DAT_00b051d4 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)DAT_00b051d4 * 4));
  in_ECX[0xe] = uVar4;
  uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)DAT_00b051dc * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)DAT_00b051dc * 4));
  in_ECX[0xf] = uVar4;
  for (uVar1 = 0; uVar1 < DAT_00b051d4; uVar1 = uVar1 + 1) {
    *(undefined4 *)(in_ECX[0xe] + uVar1 * 4) = 0;
  }
  for (uVar1 = 0; uVar1 < DAT_00b051dc; uVar1 = uVar1 + 1) {
    *(undefined4 *)(in_ECX[0xf] + uVar1 * 4) = 0;
  }
  in_ECX[8] = 0x7fffffff;
  in_ECX[9] = 0x7fffffff;
  in_ECX[10] = 0x7fffffff;
  in_ECX[0xb] = 0x7fffffff;
  in_ECX[0x12] = 0x7fffffff;
  in_ECX[0x13] = 0x7fffffff;
  in_ECX[0x11] = 0;
  in_ECX[0x10] = 0;
  in_ECX[3] = param_2;
  puVar5 = (undefined4 *)FUN_00401f00(0xe0);
  local_4 = 9;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_0070b780(0);
    *puVar5 = &PTR_FUN_00a372ec;
  }
  _local_4 = CONCAT31(uStack_3,2);
  in_ECX[5] = puVar5;
  if ((int *)in_ECX[3] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[3] + 0x84))(puVar5,0);
  }
  in_ECX[4] = param_3;
  in_ECX[0x17] = param_4;
  uVar4 = FUN_005411c0();
  in_ECX[6] = uVar4;
  uVar4 = FUN_0053fb50();
  in_ECX[7] = uVar4;
  *(undefined1 *)((int)in_ECX + 0x69) = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0xc] = 0;
  *(undefined1 *)(in_ECX + 0x2a) = 1;
  if (DAT_00b33a2c < (uint)(DAT_00b06a2c * DAT_00b06a2c)) {
    DAT_00b33a2c = DAT_00b06a2c * DAT_00b06a2c;
  }
  *(undefined1 *)((int)in_ECX + 0x53) = 0;
  in_ECX[0x16] = 0;
  if (DAT_00b05244 == '\0') {
    DAT_00b3f958 = 1;
  }
  in_ECX[0x22] = 0;
  *(undefined1 *)((int)in_ECX + 0x51) = 0;
  *(undefined1 *)((int)in_ECX + 0x52) = 0;
  *(undefined1 *)((int)in_ECX + 0xa9) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00441d50(char param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  
  if (DAT_00b33a98 == 0) {
    return;
  }
  if (DAT_00b35c24 != 0) {
    if (param_1 == '\0') {
      FUN_00889e00();
    }
    else {
      FUN_00889e10();
    }
  }
  uVar4 = DAT_00b06a2c;
  for (uVar2 = 0; uVar2 < uVar4; uVar2 = uVar2 + 1) {
    uVar5 = 0;
    while (uVar5 < uVar4) {
      piVar3 = (int *)FUN_00482150(uVar2,uVar5);
      iVar1 = *piVar3;
      if (param_1 == '\0') {
        if ((iVar1 != 0) && (*(char *)(iVar1 + 0x26) == '\x03')) {
          FUN_00482390(*(undefined4 *)(in_ECX + 0xc),uVar2,uVar5);
          FUN_004d5bd0(0);
        }
        uVar5 = uVar5 + 1;
        uVar4 = DAT_00b06a2c;
      }
      else {
        if ((iVar1 != 0) && (*(char *)(iVar1 + 0x26) == '\x06')) {
          FUN_004d6450();
        }
        FUN_00499ff0();
        uVar5 = uVar5 + 1;
        uVar4 = DAT_00b06a2c;
      }
    }
  }
  if (DAT_00b35c24 == 0) {
LAB_00441e30:
    if (param_1 != '\0') goto LAB_00441e52;
  }
  else {
    if (param_1 != '\0') {
      FUN_0088bd60(0);
      goto LAB_00441e30;
    }
    FUN_0088d1d0(0);
  }
  FUN_00677360();
  if (DAT_00b0703c != '\0') {
    FUN_0049a200();
  }
LAB_00441e52:
  iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + 0x1c);
  if (iVar1 != 0) {
    if (param_1 == '\0') {
      *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) & 0xfffe;
    }
    else {
      *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) | 1;
    }
  }
  FUN_00707370(0,0);
  return;
}



undefined4 FUN_00441e90(int *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x170))();
  if ((((uint)param_1[2] >> 5 & 1) != 0) || (((uint)param_1[2] >> 0xb & 1) != 0)) {
    return 0;
  }
  if ((*(char *)(iVar2 + 4) != '\x1a') &&
     (((*(char *)(iVar2 + 4) != '\x12' && ((int *)param_1[7] != (int *)0x0)) &&
      (cVar1 = (**(code **)(*(int *)param_1[7] + 0xf4))(), cVar1 != '\0')))) {
    return 0;
  }
  return 1;
}



void FUN_00441ef0(int *param_1,undefined4 param_2,int param_3,undefined2 param_4)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int in_ECX;
  bool bVar9;
  undefined2 in_FPUControlWord;
  float10 fVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_8;
  
  if (param_1 != (int *)0x0) {
    FUN_0043fba0(param_1);
    iVar4 = (**(code **)(*param_1 + 0x170))();
    cVar3 = *(char *)(iVar4 + 4);
    if ((((((uint)param_1[2] >> 5 & 1) == 0) && (((uint)param_1[2] >> 0xb & 1) == 0)) &&
        (cVar3 == '\n')) && (*(int *)(DAT_00b33398 + 0x24) != 0)) {
      iVar4 = param_1[3];
      puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
      uVar13 = 1;
      uVar12 = 0;
      uVar6 = (**(code **)(*param_1 + 0x170))(iVar4,0,1);
      FUN_006ae4b0(*puVar5,puVar5[1],puVar5[2],uVar6,iVar4,uVar12,uVar13);
    }
    if (((((uint)param_1[2] >> 5 & 1) == 0) && (((uint)param_1[2] >> 0xb & 1) == 0)) &&
       (cVar3 == '\x12')) {
      iVar4 = *(int *)(DAT_00b33398 + 0x24);
      iVar7 = FUN_0041e960();
      if (iVar7 == 0) {
        if (iVar4 != 0) {
          iVar4 = (**(code **)(*param_1 + 0x170))();
          uVar6 = *(undefined4 *)(iVar4 + 0x54);
          puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
          uVar6 = FUN_006ae4b0(*puVar5,puVar5[1],puVar5[2],uVar6,0,1,1);
          FUN_00423b10(uVar6);
        }
      }
      else {
        FUN_006b7190(1);
      }
    }
    uVar1 = param_1[2];
    if ((((uVar1 >> 5 & 1) == 0) && ((uVar1 >> 0xb & 1) == 0)) &&
       ((cVar3 == '\x18' &&
        (((uVar1 >> 0xd & 1) == 0 &&
         (iVar4 = (**(code **)(*param_1 + 0x170))(), *(int *)(iVar4 + 0x60) != 0)))))) {
      iVar4 = *(int *)(DAT_00b33398 + 0x24);
      iVar7 = FUN_0041e960();
      if (iVar7 == 0) {
        if (iVar4 != 0) {
          iVar4 = (**(code **)(*param_1 + 0x170))();
          uVar6 = *(undefined4 *)(iVar4 + 0x60);
          puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
          uVar6 = FUN_006ae4b0(*puVar5,puVar5[1],puVar5[2],uVar6,0,1,0);
          FUN_00423b10(uVar6);
        }
      }
      else {
        FUN_006b7190(1);
      }
    }
    uVar1 = param_1[2];
    if (((((uVar1 >> 5 & 1) == 0) && ((uVar1 >> 0xb & 1) == 0)) && (cVar3 == '\x1a')) &&
       (((uVar1 >> 0xd & 1) == 0 &&
        (iVar4 = (**(code **)(*param_1 + 0x170))(), *(int *)(iVar4 + 0x8c) != 0)))) {
      iVar4 = *(int *)(DAT_00b33398 + 0x24);
      iVar7 = FUN_0041e960();
      if (iVar7 == 0) {
        if (iVar4 != 0) {
          iVar4 = (**(code **)(*param_1 + 0x170))();
          uVar6 = *(undefined4 *)(iVar4 + 0x8c);
          puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
          uVar6 = FUN_006ae4b0(*puVar5,puVar5[1],puVar5[2],uVar6,0,1,1);
          FUN_00423b10(uVar6);
        }
      }
      else {
        FUN_006b7190(1);
      }
    }
    cVar2 = FUN_00441e90(param_1);
    if (cVar2 != '\0') {
      if ((char)param_4 == '\0') {
        FUN_0043f240(param_1);
      }
      if (param_3 == 0) {
        param_3 = (**(code **)(*param_1 + 0x14c))();
      }
      else if (param_1[0xf] == 0) {
        FUN_004d7d10(param_3);
      }
      if (param_3 != 0) {
        if (cVar3 == '%') {
          if (*(int **)(param_3 + 0x1c) != (int *)0x0) {
            (**(code **)(**(int **)(param_3 + 0x1c) + 0x88))(&param_4,param_3);
            FUN_007016a0();
          }
        }
        else {
          FUN_004d58b0();
          iVar4 = param_3;
          FUN_007b4280(0,param_3);
          FUN_007c5d00(iVar4);
          FUN_004cead0(param_1);
          FUN_004dc100();
          if (((*(int *)(in_ECX + 0x34) == 0) && (cVar2 = FUN_0045a500(), cVar2 == '\0')) &&
             (cVar2 = FUN_005790e0(0x3ef,0), cVar2 == '\0')) {
            FUN_00667420(param_1);
          }
          cVar2 = (**(code **)(*param_1 + 400))();
          if (cVar2 != '\0') {
            FUN_005eb370();
          }
          if (cVar3 == '\x1a') {
            piVar8 = param_1 + 8;
            (**(code **)(*param_1 + 0x170))(piVar8);
            FUN_0068f970(piVar8);
          }
          else {
            bVar9 = DAT_00b43384 != '\0';
            if (bVar9) {
              FUN_0043f2e0();
            }
            FUN_007b4280(0);
            FUN_007c7050(param_3,0);
            if (bVar9) {
              FUN_0043f300();
            }
          }
        }
      }
      FUN_004d70e0();
      cVar2 = FUN_0045a500();
      if (cVar2 == '\0') {
        FUN_004f9ec0(param_1,param_1 + 0x11);
        FUN_004fbf90(param_1,param_1 + 0x11,0x1000);
      }
      if (cVar3 == '\x1e') {
        uVar6 = (**(code **)(*param_1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b051b0,0);
        piVar8 = (int *)FUN_009832e6(uVar6);
        if (((piVar8 != (int *)0x0) && (200.0 < (float)piVar8[0x1e])) &&
           (200.0 < (float)piVar8[0x1f])) {
          fVar10 = (float10)(**(code **)(*param_1 + 0xec))();
          puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
          uVar6 = 0x3f800000;
          fVar11 = (float10)(**(code **)(*piVar8 + 0x15c))(0x3f800000);
          local_8 = (undefined4)(longlong)ROUND(fVar11 * (float10)(double)fVar10);
          param_4 = in_FPUControlWord;
          FUN_004ce610(*puVar5,puVar5[1],puVar5[2],local_8,uVar6);
        }
      }
      cVar3 = (**(code **)(*param_1 + 400))();
      if ((cVar3 != '\0') && (FUN_005ee1b0(), param_1 != DAT_00b333c4)) {
        FUN_00481410(param_1[0xf],param_1[3]);
      }
    }
  }
  return;
}



undefined4 FUN_00442410(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (*(int *)(DAT_00b333a0 + 0x74) == 0) {
    return 0;
  }
  iVar1 = *(int *)(in_ECX + 0x24);
  iVar2 = *(int *)(in_ECX + 0x20);
  uVar3 = DAT_00b06a2c >> 1;
  uVar8 = 0;
  uVar6 = DAT_00b06a2c;
  do {
    if (uVar6 <= uVar8) {
      return 1;
    }
    for (uVar7 = 0; uVar7 < uVar6; uVar7 = uVar7 + 1) {
      piVar4 = (int *)FUN_00482150(uVar8,uVar7);
      if (piVar4 != (int *)0x0) {
        iVar5 = *piVar4;
        if ((iVar5 == 0) &&
           (iVar5 = FUN_004efe80(uVar8 + (iVar2 - uVar3),uVar7 + (iVar1 - uVar3)), iVar5 == 0)) {
          return 0;
        }
        uVar6 = 0;
        while( true ) {
          if (DAT_00b051dc <= uVar6) {
            return 0;
          }
          if (*(int *)(*(int *)(in_ECX + 0x3c) + uVar6 * 4) == iVar5) break;
          uVar6 = uVar6 + 1;
        }
      }
      uVar6 = DAT_00b06a2c;
    }
    uVar8 = uVar8 + 1;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004424d0(float param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  undefined4 uVar4;
  
  iVar2 = *(int *)(in_ECX + 0x34);
  if (iVar2 == 0) {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x5c) + 0xc0);
    uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0x5c) + 0xc4);
    FUN_006faca0(uVar1,uVar4);
  }
  else {
    FUN_006faca0(0,0);
    uVar1 = 0;
    uVar4 = 0;
  }
  FUN_008984a0(uVar1,uVar4);
  _DAT_00b33a30 = _DAT_00b33a30 + param_1;
  if (iVar2 == 0) {
    FUN_004823d0(_DAT_00b33a30);
  }
  else {
    FUN_004d4970(_DAT_00b33a30);
  }
  if (*(int *)(DAT_00b333a0 + 0x58) == 0) {
    FUN_0043f560();
  }
  cVar3 = FUN_0057ab70();
  if (cVar3 != '\0') {
    param_1 = _DAT_00b06530 * _DAT_00b33e9c;
  }
  FUN_00542f20(param_1);
  FUN_00707370(_DAT_00b33a30,1);
  FUN_00676e40();
  return;
}



void FUN_004425d0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  if (DAT_00b33a98 != 0) {
    (**(code **)(**(int **)(in_ECX + 8) + 8))();
    (**(code **)(**(int **)(in_ECX + 4) + 8))();
    puVar1 = DAT_00b4310c;
    if (DAT_00b4310c != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(DAT_00b4310c + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      DAT_00b4310c = (undefined4 *)0x0;
    }
    DAT_00b06a28 = 1;
    FUN_007c4d90();
    return;
  }
  return;
}



void FUN_00442630(undefined4 param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  char cVar3;
  
  iVar1 = *(int *)(in_ECX + 0x7c);
  while (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x7c) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x7c));
    *(int *)(in_ECX + 0x7c) = iVar1;
  }
  cVar3 = (char)param_1;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  if ((cVar3 == '\0') || (*(int *)(in_ECX + 0x34) != 0)) {
    FUN_004425d0();
  }
  if (cVar3 == '\0') {
    FUN_007b4280(0);
    FUN_007c7e50();
  }
  if (*(int *)(DAT_00b33398 + 0x24) != 0) {
    FUN_006ac210();
  }
  FUN_0043fff0(param_1,0);
  iVar1 = *(int *)(in_ECX + 0x34);
  if (((iVar1 != 0) && (cVar3 == '\0')) && (cVar2 = FUN_0043fd40(iVar1), cVar2 == '\0')) {
    FUN_00447ba0(iVar1);
  }
  FUN_0043fe30(param_1);
  *(undefined1 *)(in_ECX + 0xa8) = 1;
  if ((cVar3 == '\0') && (param_2 == '\0')) {
    *(undefined4 *)(in_ECX + 0x34) = 0;
  }
  return;
}



void FUN_004426f0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  for (uVar3 = 0; uVar3 < DAT_00b051dc; uVar3 = uVar3 + 1) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x3c) + uVar3 * 4);
    if (iVar1 != 0) {
      iVar2 = FUN_004c9cf0();
      if (iVar2 == param_1) {
        FUN_004400a0(iVar1,1);
        uVar3 = uVar3 - 1;
      }
    }
  }
  return;
}



void FUN_00442740(int param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = FUN_004c97f0();
    if (cVar1 != '\0') {
      FUN_0043fd70(param_1);
      return;
    }
    FUN_0043fed0(param_1);
  }
  return;
}



int FUN_00442770(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  LONG LVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009aefa8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = 0;
  if (param_1 == 0) {
    iVar4 = 0;
  }
  else {
    uVar6 = 0;
    if (*(short *)(param_1 + 0xb6) != 0) {
      if (*(short *)(param_1 + 0xb6) != 0) goto LAB_004427c3;
      piVar5 = (int *)0x0;
      while( true ) {
        if (piVar5 != (int *)0x0) {
          InterlockedIncrement(piVar5 + 1);
        }
        local_4 = 0;
        if (piVar5 != (int *)0x0) {
          iVar2 = (**(code **)(*piVar5 + 8))(uVar1);
          if (iVar2 == 0) {
            iVar2 = (**(code **)(*piVar5 + 0x10))();
            if ((iVar2 != 0) && (((char)param_2 != '\0' || ((*(byte *)(piVar5 + 6) & 1) == 0)))) {
              iVar4 = iVar4 + (uint)*(ushort *)(piVar5[0x2d] + 0x40);
            }
          }
          else {
            iVar2 = FUN_00442770(piVar5,param_2);
            iVar4 = iVar4 + iVar2;
          }
        }
        local_4 = 0xffffffff;
        if ((piVar5 != (int *)0x0) && (LVar3 = InterlockedDecrement(piVar5 + 1), LVar3 == 0)) {
          (**(code **)*piVar5)(1);
        }
        uVar6 = uVar6 + 1;
        if (*(ushort *)(param_1 + 0xb6) <= uVar6) break;
LAB_004427c3:
        piVar5 = *(int **)(*(int *)(param_1 + 0xb0) + uVar6 * 4);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return iVar4;
}



undefined4 * FUN_00442890(char param_1,undefined4 param_2)

{
  LONG *lpAddend;
  uint uVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int iVar4;
  DWORD DVar5;
  undefined4 *puVar6;
  undefined4 *unaff_EBP;
  undefined4 uVar7;
  uint *unaff_FS_OFFSET;
  bool bVar8;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  puStack_8 = &LAB_009ad141;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (uint)&local_c;
  local_4 = (undefined4 *)0x1;
  uVar7 = 0;
  puVar2 = (undefined4 *)(**(code **)(*DAT_00b35300 + 4))(param_2,0,uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    if ((char)param_2 != '\0') {
      uVar7 = 6;
    }
    if (((DAT_00b33a04 == (int *)0x0) ||
        (iVar4 = (**(code **)(*DAT_00b33a04 + 4))(param_2,0,uVar7,0xffffffff), iVar4 == 0)) &&
       (param_1 != '\0')) {
      *local_4 = 0;
      puVar6 = local_4;
    }
    else {
      iVar4 = g_IOManager_singleton;
      DVar5 = GetCurrentThreadId();
      bVar8 = DVar5 != *(DWORD *)(iVar4 + 0x30);
      if (bVar8) {
        FUN_00432860();
      }
      uVar7 = FUN_00701e00(param_2,&DAT_00b256d0,1);
      FUN_0075fa90(uVar7);
      if (bVar8) {
        FUN_00432890();
      }
      if (unaff_EBP == (undefined4 *)0x0) {
        if (param_1 == '\0') {
          FUN_004a7a60("TES::CreateTextureImage unable to create image for \"%s\".\r\n",param_2);
        }
      }
      else {
        (**(code **)(*DAT_00b35300 + 8))(param_2,unaff_EBP);
      }
      puVar6 = local_4;
      *local_4 = unaff_EBP;
      if (unaff_EBP != (undefined4 *)0x0) {
        InterlockedIncrement(unaff_EBP + 1);
      }
      local_c = local_c & 0xffffff00;
      if ((unaff_EBP != (undefined4 *)0x0) &&
         (LVar3 = InterlockedDecrement(unaff_EBP + 1), LVar3 == 0)) {
        (**(code **)*unaff_EBP)(1);
      }
    }
  }
  else {
    lpAddend = puVar2 + 1;
    InterlockedIncrement(lpAddend);
    puVar6 = local_4;
    *local_4 = puVar2;
    InterlockedIncrement(lpAddend);
    local_c = local_c & 0xffffff00;
    LVar3 = InterlockedDecrement(lpAddend);
    if (LVar3 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *unaff_FS_OFFSET = 0;
  return puVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442a30(uint param_1,char param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int local_c;
  
  if (param_2 == '\0') {
    _DAT_00b35c00 = _DAT_00b35c00 | 1 << ((byte)param_1 & 0x1f);
  }
  else {
    _DAT_00b35c00 = _DAT_00b35c00 & ~(1 << ((byte)param_1 & 0x1f));
  }
  if (param_1 == 3) {
    if ((*(int *)(DAT_00b333a0 + 0x34) == 0) ||
       ((*(byte *)(*(int *)(DAT_00b333a0 + 0x34) + 0x24) >> 1 & 1) == 0)) {
      iVar1 = FUN_0049a140();
      if (param_2 == '\0') {
        *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) | 1;
        return;
      }
      *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) & 0xfffe;
      return;
    }
  }
  else {
    local_c = -1;
    uVar2 = ~-(uint)(param_3 != '\0') & DAT_00b051d4;
    if (-1 < (int)uVar2) {
      do {
        if (local_c == -1) {
          iVar1 = *(int *)(in_ECX + 0x34);
        }
        else {
          iVar1 = *(int *)(*(int *)(in_ECX + 0x38) + local_c * 4);
        }
        if (iVar1 != 0) {
          switch(param_1) {
          case 0:
          case 1:
            iVar1 = FUN_004ca790();
            if ((iVar1 == 0) || (*(ushort *)(iVar1 + 0xb6) <= param_1)) {
              iVar1 = 0;
            }
            else {
              iVar1 = *(int *)(*(int *)(iVar1 + 0xb0) + param_1 * 4);
            }
            if (iVar1 != 0) {
              if (param_2 == '\0') {
                *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) | 1;
              }
              else {
                *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) & 0xfffe;
              }
            }
            break;
          case 2:
          case 4:
          case 5:
            iVar6 = 0;
            iVar1 = 8;
            do {
              iVar3 = FUN_004ca790();
              if ((((iVar3 == 0) || ((uint)*(ushort *)(iVar3 + 0xb6) <= iVar6 + 2U)) ||
                  (iVar3 = *(int *)(iVar1 + *(int *)(iVar3 + 0xb0)), iVar3 == 0)) ||
                 ((uint)*(ushort *)(iVar3 + 0xb6) <= param_1 - 2)) {
                iVar3 = 0;
              }
              else {
                iVar3 = *(int *)(*(int *)(iVar3 + 0xb0) + (param_1 - 2) * 4);
              }
              if (iVar3 != 0) {
                if (param_2 == '\0') {
                  *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) | 1;
                }
                else {
                  *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xfffe;
                }
              }
              iVar1 = iVar1 + 4;
              iVar6 = iVar6 + 1;
            } while (iVar1 < 0x18);
          }
        }
        local_c = local_c + 1;
      } while (local_c < (int)uVar2);
    }
    if (param_3 == '\0') {
      _param_3 = 0;
LAB_00442bf0:
      if (_param_3 < DAT_00b051dc) {
        if (*(int *)(*(int *)(in_ECX + 0x3c) + _param_3 * 4) != 0) {
          switch(param_1) {
          case 0:
          case 1:
            iVar1 = FUN_004ca790();
            if ((iVar1 == 0) || (*(ushort *)(iVar1 + 0xb6) <= param_1)) {
              iVar1 = 0;
            }
            else {
              iVar1 = *(int *)(*(int *)(iVar1 + 0xb0) + param_1 * 4);
            }
            if (iVar1 != 0) {
              if (param_2 == '\0') {
                *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) | 1;
                _param_3 = _param_3 + 1;
              }
              else {
                *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) & 0xfffe;
                _param_3 = _param_3 + 1;
              }
              goto LAB_00442bf0;
            }
            break;
          case 2:
          case 4:
          case 5:
            iVar6 = 0;
            iVar1 = 8;
            do {
              iVar3 = FUN_004ca790();
              if ((((iVar3 == 0) || ((uint)*(ushort *)(iVar3 + 0xb6) <= iVar6 + 2U)) ||
                  (iVar3 = *(int *)(iVar1 + *(int *)(iVar3 + 0xb0)), iVar3 == 0)) ||
                 ((uint)*(ushort *)(iVar3 + 0xb6) <= param_1 - 2)) {
                iVar3 = 0;
              }
              else {
                iVar3 = *(int *)(*(int *)(iVar3 + 0xb0) + (param_1 - 2) * 4);
              }
              if (iVar3 != 0) {
                if (param_2 == '\0') {
                  *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) | 1;
                }
                else {
                  *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xfffe;
                }
              }
              iVar1 = iVar1 + 4;
              iVar6 = iVar6 + 1;
            } while (iVar1 < 0x18);
          }
        }
        _param_3 = _param_3 + 1;
        goto LAB_00442bf0;
      }
    }
    else {
      uVar2 = DAT_00b06a2c;
      for (uVar5 = 0; uVar5 < uVar2; uVar5 = uVar5 + 1) {
        uVar7 = 0;
LAB_00442d00:
        if (uVar7 < uVar2) {
          piVar4 = (int *)FUN_00482150(uVar5,uVar7);
          if (*piVar4 != 0) {
            switch(param_1) {
            case 0:
            case 1:
              iVar1 = FUN_004ca790();
              if ((iVar1 == 0) || (*(ushort *)(iVar1 + 0xb6) <= param_1)) {
                iVar1 = 0;
              }
              else {
                iVar1 = *(int *)(*(int *)(iVar1 + 0xb0) + param_1 * 4);
              }
              if (iVar1 != 0) {
                if (param_2 == '\0') {
                  *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) | 1;
                  uVar7 = uVar7 + 1;
                  uVar2 = DAT_00b06a2c;
                }
                else {
                  *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) & 0xfffe;
                  uVar7 = uVar7 + 1;
                  uVar2 = DAT_00b06a2c;
                }
                goto LAB_00442d00;
              }
              break;
            case 2:
            case 4:
            case 5:
              iVar6 = 0;
              iVar1 = 8;
              do {
                iVar3 = FUN_004ca790();
                if (((iVar3 == 0) || ((uint)*(ushort *)(iVar3 + 0xb6) <= iVar6 + 2U)) ||
                   ((iVar3 = *(int *)(iVar1 + *(int *)(iVar3 + 0xb0)), iVar3 == 0 ||
                    ((uint)*(ushort *)(iVar3 + 0xb6) <= param_1 - 2)))) {
                  iVar3 = 0;
                }
                else {
                  iVar3 = *(int *)(*(int *)(iVar3 + 0xb0) + (param_1 - 2) * 4);
                }
                if (iVar3 != 0) {
                  if (param_2 == '\0') {
                    *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) | 1;
                  }
                  else {
                    *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xfffe;
                  }
                }
                iVar1 = iVar1 + 4;
                iVar6 = iVar6 + 1;
              } while (iVar1 < 0x18);
            }
          }
          uVar7 = uVar7 + 1;
          uVar2 = DAT_00b06a2c;
          goto LAB_00442d00;
        }
      }
    }
  }
  return;
}



undefined1
FUN_00442e70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 *puVar1;
  undefined1 uVar2;
  char cVar3;
  LONG LVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_5;
  
  uVar8 = 0;
  local_5 = 0;
  uVar2 = 0;
  if ((param_1 != 0) && ((char)param_5 != '\0')) {
    puVar1 = *(undefined4 **)(param_1 + 0x14);
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    FUN_00959d60(&DAT_00b3f9a8,&DAT_00b3f9a8,0);
    uVar5 = DAT_00b06a2c;
    if (*(int *)(DAT_00b333a0 + 0x34) != 0) {
      uVar2 = FUN_004d1ba0(param_1,param_2,param_3,param_4,param_5);
      return uVar2;
    }
    for (; uVar2 = local_5, uVar8 < uVar5; uVar8 = uVar8 + 1) {
      for (uVar7 = 0; uVar7 < uVar5; uVar7 = uVar7 + 1) {
        piVar6 = (int *)FUN_00482150(uVar8,uVar7);
        if ((*piVar6 != 0) &&
           (cVar3 = FUN_004d1ba0(param_1,param_2,param_3,param_4,param_5), cVar3 != '\0')) {
          local_5 = 1;
        }
        uVar5 = DAT_00b06a2c;
      }
    }
  }
  return uVar2;
}



void FUN_00442f70(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int iVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ad170;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*param_1 + 0xc))(uVar2);
    if (piVar3 == (int *)0x0) {
      iVar6 = (**(code **)(*param_1 + 8))();
      if (iVar6 != 0) {
        uVar2 = (uint)*(ushort *)(iVar6 + 0xb6);
        while (uVar2 != 0) {
          uVar2 = uVar2 - 1;
          if (uVar2 < *(ushort *)(iVar6 + 0xb6)) {
            uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0xb0) + uVar2 * 4);
          }
          else {
            uVar7 = 0;
          }
          FUN_00442f70(uVar7);
        }
      }
    }
    else {
      puVar1 = (undefined4 *)piVar3[0x2d];
      if (puVar1 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar1 + 1);
      }
      iStack_4 = 0;
      if (puVar1 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)FUN_00700790(&puStack_10);
        iStack_4._0_1_ = 1;
        FUN_0075fa90(*puVar4);
        puVar4 = puStack_10;
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        if (((puStack_10 != (undefined4 *)0x0) &&
            (LVar5 = InterlockedDecrement(puStack_10 + 1), LVar5 == 0)) &&
           (puVar4 != (undefined4 *)0x0)) {
          (**(code **)*puVar4)(1);
        }
        (**(code **)(*piVar3 + 0x8c))(puVar1);
      }
      iStack_4 = 0xffffffff;
      if ((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) {
        (**(code **)*puVar1)(1);
        *unaff_FS_OFFSET = (int)puStack_10;
        return;
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_004430c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = FUN_00700610(param_2);
    FUN_00442f70(uVar1);
  }
  return uVar1;
}



void FUN_004430f0(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  int local_c;
  
  iVar1 = *(int *)(in_ECX + 0x20);
  iVar2 = *(int *)(in_ECX + 0x24);
  uVar4 = DAT_00b06a2c >> 1;
  uVar10 = 0;
  local_c = 0;
  uVar7 = DAT_00b06a2c;
  do {
    if (uVar7 <= uVar10) {
      if (local_c != 0) {
        FUN_00440af0(1,0,0);
      }
      return;
    }
    for (uVar8 = 0; uVar8 < uVar7; uVar8 = uVar8 + 1) {
      if (param_1 == 0) {
        cVar3 = FUN_004821b0(uVar10,uVar8);
        bVar12 = cVar3 == '\0';
LAB_00443160:
        if (bVar12) goto LAB_00443162;
      }
      else {
        if (param_1 == 1) {
          iVar5 = FUN_00482150(uVar10,uVar8);
          bVar12 = iVar5 == 0;
          goto LAB_00443160;
        }
LAB_00443162:
        if (*(int *)(in_ECX + 0x74) != 0) {
          iVar9 = (iVar2 - uVar4) + uVar8;
          iVar11 = uVar10 + (iVar1 - uVar4);
          iVar5 = FUN_004f1630(iVar11,iVar9);
          if (((iVar5 != 0) ||
              (iVar5 = FUN_00447740(iVar11,iVar9,*(undefined4 *)(in_ECX + 0x74),1), iVar5 != 0)) &&
             (*(char *)(iVar5 + 0x26) != '\x03')) {
            iVar9 = 0;
            for (piVar6 = (int *)(iVar5 + 0x48); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
              if (*piVar6 != 0) {
                iVar9 = iVar9 + 1;
              }
            }
            local_c = local_c + iVar9;
          }
        }
      }
      uVar7 = DAT_00b06a2c;
    }
    uVar10 = uVar10 + 1;
  } while( true );
}



void FUN_004431f0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  
  if ((param_1 != 0) && (*(int *)(in_ECX + 0x74) != param_1)) {
    FUN_00977c50(3);
    if (DAT_00b051cc != '\0') {
      if (*(int *)(in_ECX + 0x34) != 0) {
        FUN_004425d0();
      }
      iVar2 = FUN_0043fff0(1,*(undefined4 *)(in_ECX + 0x74));
      if (*(int *)(in_ECX + 0x34) == 0) {
        iVar3 = FUN_0043fe30(1);
        iVar2 = iVar2 + iVar3;
      }
      cVar1 = FUN_004c9300();
      if ((iVar2 != 0) || (cVar1 != '\0')) {
        FUN_0043fc20(0);
      }
    }
    *(undefined4 *)(DAT_00b33398 + 0x18) = 0;
    *(int *)(in_ECX + 0x74) = param_1;
    FUN_004425d0();
    *(undefined4 *)(in_ECX + 0x20) = 0x7fffffff;
    *(undefined4 *)(in_ECX + 0x24) = 0x7fffffff;
    *(undefined4 *)(in_ECX + 0x28) = 0x7fffffff;
    *(undefined4 *)(in_ECX + 0x2c) = 0x7fffffff;
    *(undefined4 *)(in_ECX + 0x48) = 0x7fffffff;
    *(undefined4 *)(in_ECX + 0x4c) = 0x7fffffff;
    piVar4 = (int *)(DAT_00b33a98 + 0xc);
    if (piVar4 != (int *)0x0) {
      if (piVar4 == (int *)0x0) goto LAB_004432da;
      do {
        iVar2 = FUN_004ef7e0();
        if ((iVar2 == 0) || (*piVar4 != param_1)) {
          iVar2 = FUN_004ef7e0();
          if ((iVar2 != 0) && (*piVar4 != param_1)) {
            FUN_004ef7e0();
            FUN_004ea570();
          }
        }
        else {
          FUN_004ef7e0();
          FUN_004ebc00();
        }
LAB_004432da:
        piVar4 = (int *)piVar4[1];
      } while (piVar4 != (int *)0x0);
    }
    FUN_0057a0d0();
    FUN_00977c50(2);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443300(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_00440f20();
  *(undefined4 *)(in_ECX + 0x48) = 0x7fffffff;
  *(undefined4 *)(in_ECX + 0x4c) = 0x7fffffff;
  _DAT_00b33a30 = 0;
  FUN_00977c50(3);
  iVar1 = *(int *)(in_ECX + 0x7c);
  while (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x7c) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x7c));
    *(int *)(in_ECX + 0x7c) = iVar1;
  }
  *(undefined4 *)(in_ECX + 0x78) = 0;
  if (*(int *)(in_ECX + 0x34) != 0) {
    FUN_004425d0();
  }
  if (*(int *)(DAT_00b33398 + 0x24) != 0) {
    FUN_006ac210();
  }
  FUN_0043fff0(1,0);
  FUN_0043fe30(1);
  *(undefined1 *)(in_ECX + 0xa8) = 1;
  FUN_0043fc20(0);
  FUN_00977c50(2);
  return;
}



void FUN_004433a0(int param_1,uint param_2,int param_3)

{
  float fVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  DWORD DVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  if (param_1 != 0) {
    cVar2 = FUN_004c97f0();
    puVar3 = *(undefined1 **)(param_1 + 0x1c);
    if (cVar2 == '\0') {
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_00a2f7ec;
      }
      uVar8 = *(undefined4 *)(param_1 + 0xc);
      uVar4 = FUN_004c9aa0(puVar3);
      uVar4 = FUN_004c9a80(uVar4);
      FUN_0040fec0("Moving to exterior cell %08X (%i,%i) %s",uVar8,uVar4);
    }
    else {
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_00a2f7ec;
      }
      FUN_0040fec0("Moving to interior cell %08X %s",*(undefined4 *)(param_1 + 0xc),puVar3);
    }
    DVar5 = GetTickCount();
    FUN_0066fd90(0,param_1);
    FUN_00434020(5);
    DVar6 = GetTickCount();
    DVar7 = GetTickCount();
    uVar11 = (DVar7 - param_3) / 3600000;
    uVar9 = (DVar7 - param_3) % 3600000;
    uVar12 = uVar9 / 60000;
    uVar9 = (uVar9 % 60000) / 1000;
    cVar2 = FUN_004c97f0();
    iVar10 = DVar6 - DVar5;
    if (cVar2 == '\0') {
      fVar1 = (float)iVar10;
      if (iVar10 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      uVar8 = FUN_004c9aa0((double)(fVar1 / 1000.0),uVar11,uVar12,uVar9);
      uVar8 = FUN_004c9a80(uVar8);
      FUN_0040fec0("Exterior cell (%i,%i) finished loading in %.02f seconds.  Total test time: %02i:%02i:%02i"
                   ,uVar8);
    }
    else {
      fVar1 = (float)iVar10;
      if (iVar10 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      FUN_0040fec0("Interior cell finished loading in %.02f seconds.  Total test time: %02i:%02i:%02i"
                   ,(double)(fVar1 / 1000.0),uVar11,uVar12,uVar9);
    }
    FUN_004029e0(0x42f00000);
    FUN_00674a20();
    FUN_00678510();
    FUN_00674a20();
    if ((3 < param_2) && (param_2 < 6)) {
      FUN_00466be0(param_2);
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00443550(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  LONG LVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  code *pcVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *local_11c;
  undefined4 *puStack_118;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ad1b1;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_11c;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((((*DAT_00b37150 != '\0') &&
       (FUN_0043b420(&local_11c,DAT_00b37150,5,0,0,0,1,1), puVar3 = local_11c,
       local_11c != (undefined4 *)0x0)) && (LVar4 = InterlockedDecrement(local_11c + 2), LVar4 == 0)
      ) && (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  if (((*DAT_00b37158 != '\0') &&
      (FUN_0043b420(&local_11c,DAT_00b37158,5,0,0,0,1,1), puVar3 = local_11c,
      local_11c != (undefined4 *)0x0)) &&
     ((LVar4 = InterlockedDecrement(local_11c + 2), LVar4 == 0 && (puVar3 != (undefined4 *)0x0)))) {
    (**(code **)*puVar3)(1);
  }
  if (((*DAT_00b37160 != '\0') &&
      (FUN_0043b420(&local_11c,DAT_00b37160,5,0,0,0,1,1), puVar3 = local_11c,
      local_11c != (undefined4 *)0x0)) &&
     ((LVar4 = InterlockedDecrement(local_11c + 2), LVar4 == 0 && (puVar3 != (undefined4 *)0x0)))) {
    (**(code **)*puVar3)(1);
  }
  if ((((*DAT_00b37168 != '\0') &&
       (FUN_0043b420(&local_11c,DAT_00b37168,5,0,0,0,1,1), puVar3 = local_11c,
       local_11c != (undefined4 *)0x0)) && (LVar4 = InterlockedDecrement(local_11c + 2), LVar4 == 0)
      ) && (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  if (((*DAT_00b37170 != '\0') &&
      (FUN_0043b420(&local_11c,DAT_00b37170,5,0,0,0,1,1), puVar3 = local_11c,
      local_11c != (undefined4 *)0x0)) &&
     ((LVar4 = InterlockedDecrement(local_11c + 2), LVar4 == 0 && (puVar3 != (undefined4 *)0x0)))) {
    (**(code **)*puVar3)(1);
  }
  if (((*DAT_00b37178 != '\0') &&
      (FUN_0043b420(&local_11c,DAT_00b37178,5,0,0,0,1,1), puVar3 = local_11c,
      local_11c != (undefined4 *)0x0)) &&
     ((LVar4 = InterlockedDecrement(local_11c + 2), LVar4 == 0 && (puVar3 != (undefined4 *)0x0)))) {
    (**(code **)*puVar3)(1);
  }
  if ((((*DAT_00b37180 != '\0') &&
       (FUN_0043b420(&local_11c,DAT_00b37180,5,0,0,0,1,1), puVar3 = local_11c,
       local_11c != (undefined4 *)0x0)) && (LVar4 = InterlockedDecrement(local_11c + 2), LVar4 == 0)
      ) && (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  if (((*DAT_00b37188 != '\0') &&
      (FUN_0043b420(&local_11c,DAT_00b37188,5,0,0,0,1,1), puVar3 = local_11c,
      local_11c != (undefined4 *)0x0)) &&
     ((LVar4 = InterlockedDecrement(local_11c + 2), LVar4 == 0 && (puVar3 != (undefined4 *)0x0)))) {
    (**(code **)*puVar3)(1);
  }
  if (((*DAT_00b37190 != '\0') &&
      (FUN_0043b420(&local_11c,DAT_00b37190,5,0,0,0,1,1), puVar3 = local_11c,
      local_11c != (undefined4 *)0x0)) &&
     ((LVar4 = InterlockedDecrement(local_11c + 2), LVar4 == 0 && (puVar3 != (undefined4 *)0x0)))) {
    (**(code **)*puVar3)(1);
  }
  if ((((*DAT_00b37198 != '\0') &&
       (FUN_0043b420(&local_11c,DAT_00b37198,5,0,0,0,1,1), puVar3 = local_11c,
       local_11c != (undefined4 *)0x0)) && (LVar4 = InterlockedDecrement(local_11c + 2), LVar4 == 0)
      ) && (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  if (((*DAT_00b371a0 != '\0') &&
      (FUN_0043b420(&local_11c,DAT_00b371a0,5,0,0,0,1,1), puVar3 = local_11c,
      local_11c != (undefined4 *)0x0)) &&
     ((LVar4 = InterlockedDecrement(local_11c + 2), LVar4 == 0 && (puVar3 != (undefined4 *)0x0)))) {
    (**(code **)*puVar3)(1);
  }
  if (((*DAT_00b371a8 != '\0') &&
      (FUN_0043b420(&local_11c,DAT_00b371a8,5,0,0,0,1,1), puVar3 = local_11c,
      local_11c != (undefined4 *)0x0)) &&
     ((LVar4 = InterlockedDecrement(local_11c + 2), LVar4 == 0 && (puVar3 != (undefined4 *)0x0)))) {
    (**(code **)*puVar3)(1);
  }
  if ((((*DAT_00b371b0 != '\0') &&
       (FUN_0043b420(&local_11c,DAT_00b371b0,5,0,0,0,1,1), puVar3 = local_11c,
       local_11c != (undefined4 *)0x0)) && (LVar4 = InterlockedDecrement(local_11c + 2), LVar4 == 0)
      ) && (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  if (((*DAT_00b371b8 != '\0') &&
      (FUN_0043b420(&local_11c,DAT_00b371b8,5,0,0,0,1,1), puVar3 = local_11c,
      local_11c != (undefined4 *)0x0)) &&
     ((LVar4 = InterlockedDecrement(local_11c + 2), LVar4 == 0 && (puVar3 != (undefined4 *)0x0)))) {
    (**(code **)*puVar3)(1);
  }
  if (((*DAT_00b371c0 != '\0') &&
      (FUN_0043b420(&local_11c,DAT_00b371c0,5,0,0,0,1,1), puVar3 = local_11c,
      local_11c != (undefined4 *)0x0)) &&
     ((LVar4 = InterlockedDecrement(local_11c + 2), LVar4 == 0 && (puVar3 != (undefined4 *)0x0)))) {
    (**(code **)*puVar3)(1);
  }
  if ((((*DAT_00b37b38 != '\0') &&
       (FUN_0043b420(&local_11c,DAT_00b37b38,5,0,0,0,1,1), puVar3 = local_11c,
       local_11c != (undefined4 *)0x0)) && (LVar4 = InterlockedDecrement(local_11c + 2), LVar4 == 0)
      ) && (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  if (*DAT_00b371c8 != '\0') {
    _sprintf(acStack_114,"%s\\%s\\%s",&DAT_00a31014,"Textures",DAT_00b371c8);
    uVar5 = FUN_00442890(&local_11c,acStack_114,0,0);
    uStack_4 = 0;
    FUN_0055e2a0(uVar5);
    puVar3 = local_11c;
    uStack_4 = 0xffffffff;
    if (((local_11c != (undefined4 *)0x0) &&
        (LVar4 = InterlockedDecrement(local_11c + 1), LVar4 == 0)) && (puVar3 != (undefined4 *)0x0))
    {
      (**(code **)*puVar3)(1);
    }
  }
  if (*DAT_00b371d0 != '\0') {
    _sprintf(acStack_114,"%s\\%s\\%s",&DAT_00a31014,"Textures",DAT_00b371d0);
    uVar5 = FUN_00442890(&local_11c,acStack_114,0,0);
    uStack_4 = 1;
    FUN_0055e2a0(uVar5);
    puVar3 = local_11c;
    uStack_4 = 0xffffffff;
    if (((local_11c != (undefined4 *)0x0) &&
        (LVar4 = InterlockedDecrement(local_11c + 1), LVar4 == 0)) && (puVar3 != (undefined4 *)0x0))
    {
      (**(code **)*puVar3)(1);
    }
  }
  pcVar9 = InterlockedDecrement_exref;
  if (*DAT_00b371d8 != '\0') {
    _sprintf(acStack_114,"%s\\%s\\%s",&DAT_00a31014,"Textures",DAT_00b371d8);
    uVar5 = FUN_00442890(&local_11c,acStack_114,0,0);
    uStack_4 = 2;
    FUN_0055e2a0(uVar5);
    pcVar9 = InterlockedDecrement_exref;
    uStack_4 = 0xffffffff;
    if (((local_11c != (undefined4 *)0x0) &&
        (LVar4 = InterlockedDecrement(local_11c + 1), LVar4 == 0)) &&
       (local_11c != (undefined4 *)0x0)) {
      (**(code **)*local_11c)(1);
    }
  }
  iVar10 = 0;
  do {
    iVar6 = FUN_0046b250(*(undefined4 *)((int)&DAT_00b067c0 + iVar10));
    if (iVar6 != 0) {
      if (*(ushort *)(iVar6 + 0x2c) == 0xffff) {
        pcVar7 = *(char **)(iVar6 + 0x28);
        pcVar1 = pcVar7 + 1;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        uVar8 = (int)pcVar7 - (int)pcVar1;
      }
      else {
        uVar8 = (uint)*(ushort *)(iVar6 + 0x2c);
      }
      if (uVar8 != 0) {
        uVar16 = 1;
        uVar15 = 1;
        uVar14 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 5;
        uVar5 = (**(code **)(*(int *)(iVar6 + 0x24) + 0x14))(5,0,0,0,1,1);
        FUN_0043b420(&puStack_118,uVar5,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16);
        puVar3 = puStack_118;
        if (((puStack_118 != (undefined4 *)0x0) && (iVar6 = (*pcVar9)(puStack_118 + 2), iVar6 == 0))
           && (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
      }
    }
    *(undefined4 *)((int)&DAT_00b35e50 + iVar10) = 0;
    iVar10 = iVar10 + 4;
  } while (iVar10 < 0x54);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00443c70(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  
  if (*DAT_00b37150 != '\0') {
    FUN_004384e0(DAT_00b37150,1,1);
  }
  if (*DAT_00b37158 != '\0') {
    FUN_004384e0(DAT_00b37158,1,1);
  }
  if (*DAT_00b37160 != '\0') {
    FUN_004384e0(DAT_00b37160,1,1);
  }
  if (*DAT_00b37168 != '\0') {
    FUN_004384e0(DAT_00b37168,1,1);
  }
  if (*DAT_00b37170 != '\0') {
    FUN_004384e0(DAT_00b37170,1,1);
  }
  if (*DAT_00b37178 != '\0') {
    FUN_004384e0(DAT_00b37178,1,1);
  }
  if (*DAT_00b37180 != '\0') {
    FUN_004384e0(DAT_00b37180,1,1);
  }
  if (*DAT_00b37188 != '\0') {
    FUN_004384e0(DAT_00b37188,1,1);
  }
  if (*DAT_00b37190 != '\0') {
    FUN_004384e0(DAT_00b37190,1,1);
  }
  if (*DAT_00b37198 != '\0') {
    FUN_004384e0(DAT_00b37198,1,1);
  }
  if (*DAT_00b371a0 != '\0') {
    FUN_004384e0(DAT_00b371a0,1,1);
  }
  if (*DAT_00b371a8 != '\0') {
    FUN_004384e0(DAT_00b371a8,1,1);
  }
  if (*DAT_00b371b0 != '\0') {
    FUN_004384e0(DAT_00b371b0,1,1);
  }
  if (*DAT_00b371b8 != '\0') {
    FUN_004384e0(DAT_00b371b8,1,1);
  }
  if (*DAT_00b371c0 != '\0') {
    FUN_004384e0(DAT_00b371c0,1,1);
  }
  if (*DAT_00b37b38 != '\0') {
    FUN_004384e0(DAT_00b37b38,1,1);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x94);
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 *)(in_ECX + 0x94) = 0;
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x98);
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 *)(in_ECX + 0x98) = 0;
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x9c);
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 *)(in_ECX + 0x9c) = 0;
  }
  iVar9 = 0;
  do {
    iVar5 = FUN_0046b250(*(undefined4 *)((int)&DAT_00b067c0 + iVar9));
    if (iVar5 != 0) {
      if (*(ushort *)(iVar5 + 0x2c) == 0xffff) {
        pcVar7 = *(char **)(iVar5 + 0x28);
        pcVar1 = pcVar7 + 1;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        uVar8 = (int)pcVar7 - (int)pcVar1;
      }
      else {
        uVar8 = (uint)*(ushort *)(iVar5 + 0x2c);
      }
      if (uVar8 != 0) {
        uVar6 = (**(code **)(*(int *)(iVar5 + 0x24) + 0x14))();
        FUN_004384e0(uVar6,1,1);
      }
    }
    *(undefined4 *)((int)&DAT_00b35e50 + iVar9) = 0;
    iVar9 = iVar9 + 4;
  } while (iVar9 < 0x54);
  return;
}



void FUN_00443f00(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int in_ECX;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  int local_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ad1f6;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar9 = (undefined4 *)0x0;
  if (param_1 != 0) {
    piVar4 = (int *)(in_ECX + 0xa0);
    do {
      if ((piVar4 == (int *)0x0) ||
         ((piVar1 = (int *)piVar4[1], piVar1 == (int *)0x0 && (*piVar4 == 0)))) {
        iVar6 = FUN_00401f00(8,uVar5);
        local_4 = 0;
        if (iVar6 == 0) {
          local_18 = 0;
        }
        else {
          local_18 = FUN_004418e0();
        }
        local_4 = 0xffffffff;
        FUN_0075fa90(param_1);
        puVar7 = (undefined4 *)FUN_00401f00(0x18,uVar5);
        local_4 = 1;
        if (puVar7 != (undefined4 *)0x0) {
          puVar9 = puVar7 + 1;
          *puVar7 = 5;
          _eh_vector_constructor_iterator_(puVar9,4,5,FUN_007c88a0,FUN_007016a0);
        }
        local_4 = 0xffffffff;
        *(undefined4 **)(local_18 + 4) = puVar9;
        iVar6 = 0;
        do {
          puVar7 = (undefined4 *)FUN_00700900();
          iVar3 = *(int *)(local_18 + 4);
          puVar9 = *(undefined4 **)(iVar3 + iVar6);
          if (puVar9 != puVar7) {
            if (((puVar9 != (undefined4 *)0x0) &&
                (LVar8 = InterlockedDecrement(puVar9 + 1), LVar8 == 0)) &&
               (puVar9 != (undefined4 *)0x0)) {
              (**(code **)*puVar9)(1);
            }
            *(undefined4 **)(iVar3 + iVar6) = puVar7;
            if (puVar7 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar7 + 1);
            }
          }
          iVar6 = iVar6 + 4;
        } while (iVar6 < 0x14);
        FUN_0067b1e0(local_18);
        break;
      }
      piVar2 = (int *)*piVar4;
      piVar4 = piVar1;
    } while ((piVar2 == (int *)0x0) || (*piVar2 != param_1));
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00444060(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ab578;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[1] = param_1;
  *in_ECX = param_2;
  local_4 = 0;
  FUN_004040e0(in_ECX);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_004440c0(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_004c97f0();
  if (cVar1 != '\0') {
    uVar2 = FUN_00424180();
    return uVar2;
  }
  return DAT_00b35c24;
}



void FUN_004440e0(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  LONG LVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7538;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)*in_ECX;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar3);
    }
    *in_ECX = 0;
  }
  pvVar2 = (void *)in_ECX[1];
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar2,4,*(int *)((int)pvVar2 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar2 + -4);
  }
  puVar1 = (undefined4 *)*in_ECX;
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004441a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  float10 fVar4;
  float *pfVar5;
  double local_118;
  float local_110 [2];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_118;
  if (*(int *)(in_ECX + 0x74) != 0) {
    iVar2 = FUN_004f1630(param_3,param_4);
    if (iVar2 == 0) {
      iVar2 = FUN_00447740(param_3,param_4,*(undefined4 *)(in_ECX + 0x74),1);
      FUN_004c9f90(1);
    }
    cVar1 = FUN_004821b0(param_1,param_2);
    if (cVar1 == '\0') {
      uVar3 = FUN_004c9aa0(*(undefined4 *)(iVar2 + 0xc));
      uVar3 = FUN_004c9a80(uVar3);
      _sprintf(local_108,"Loading cell...%s (%i, %i) (%08X)",&DAT_00a2f7ec,uVar3);
      FUN_00482170(param_1,param_2,iVar2);
      FUN_00482390(*(undefined4 *)(in_ECX + 0xc),param_1,param_2);
      FUN_004ce3c0();
      cVar1 = FUN_004c79a0(1);
      if (cVar1 == '\0') {
        FUN_004c6730(0,0);
      }
      pfVar5 = local_110;
      FUN_004ce3c0(pfVar5);
      FUN_004c46b0(pfVar5);
      local_118 = (double)local_110[0];
      fVar4 = (float10)FUN_004cace0();
      if (fVar4 <= (float10)local_118) {
        *(byte *)(iVar2 + 0x24) = *(byte *)(iVar2 + 0x24) & 0xfd;
      }
      else {
        *(byte *)(iVar2 + 0x24) = *(byte *)(iVar2 + 0x24) | 2;
      }
      if ((*(byte *)(iVar2 + 0x24) >> 1 & 1) == 0) {
        FUN_00482150(param_1,param_2);
        FUN_00499ff0();
      }
      FUN_004c5ba0(*(undefined1 *)(in_ECX + 0x53));
      iVar2 = FUN_004af170();
      if (iVar2 != 0) {
        FUN_004e7610();
      }
    }
    else if (iVar2 != 0) {
      cVar1 = FUN_004c97f0();
      if (cVar1 == '\0') {
        FUN_0043fed0(iVar2);
      }
      else {
        FUN_0043fd70(iVar2);
      }
    }
  }
  return;
}



void FUN_00444340(void)

{
  float fVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  LONG LVar10;
  int in_ECX;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int local_14;
  undefined4 local_c;
  
  iVar11 = *(int *)(in_ECX + 0x20) - (DAT_00b06a2c >> 1);
  iVar12 = *(int *)(in_ECX + 0x24) - (DAT_00b06a2c >> 1);
  local_14 = 0;
  cVar2 = FUN_0057bac0();
  cVar3 = FUN_0057bac0();
  cVar4 = FUN_004e9f40();
  if (cVar4 != '\0') {
    FUN_00483d60(*(undefined4 *)(in_ECX + 0x74));
  }
  *(uint *)(DAT_00b33b00 + 0x18) = *(uint *)(DAT_00b33b00 + 0x18) | 0x100;
  if (DAT_00b35c24 != 0) {
    FUN_00889e00();
  }
  uVar13 = 0;
  uVar7 = DAT_00b06a2c;
  do {
    if (uVar7 <= uVar13) {
      if (DAT_00b35c24 != 0) {
        FUN_0088d1d0(0);
      }
      *(uint *)(DAT_00b33b00 + 0x18) = *(uint *)(DAT_00b33b00 + 0x18) & 0xfffffeff;
      if (*(int *)(DAT_00b33b00 + 0x1c) != 0) {
        uVar5 = FUN_0045a500();
        uVar7 = *(uint *)(DAT_00b33b00 + 0x18);
        local_c = CONCAT31((int3)(uVar13 >> 8),uVar5);
        FUN_0045a530(1);
        *(uint *)(DAT_00b33b00 + 0x18) = *(uint *)(DAT_00b33b00 + 0x18) | 0x80;
        FUN_0045fda0(0,0,0);
        FUN_00461030(0);
        if ((uVar7 >> 7 & 1) == 0) {
          *(uint *)(DAT_00b33b00 + 0x18) = *(uint *)(DAT_00b33b00 + 0x18) & 0xffffff7f;
        }
        else {
          *(uint *)(DAT_00b33b00 + 0x18) = *(uint *)(DAT_00b33b00 + 0x18) | 0x80;
        }
        FUN_0045a530(local_c);
      }
      if (DAT_00b35c24 != 0) {
        FUN_00889e00();
      }
      for (uVar7 = 0; uVar7 < DAT_00b06a2c; uVar7 = uVar7 + 1) {
        for (uVar13 = 0; uVar13 < DAT_00b06a2c; uVar13 = uVar13 + 1) {
          if ((*(int *)(in_ECX + 0x74) != 0) &&
             (iVar8 = FUN_00447740(uVar7 + iVar11,uVar13 + iVar12,*(int *)(in_ECX + 0x74),0),
             iVar8 != 0)) {
            if (*(char *)(iVar8 + 0x26) == '\x05') {
              FUN_004d5bd0(cVar2 == '\0');
              cVar3 = FUN_004c97f0();
              if (cVar3 == '\0') {
                FUN_0043fed0(iVar8);
              }
              else {
                FUN_0043fd70(iVar8);
              }
              iVar6 = FUN_004d58b0();
              FUN_00707610();
              FUN_00707980();
              FUN_00707610();
              FUN_00707980();
              if (*(short *)(iVar6 + 0xb8) == 0) {
                FUN_00707370(0,0);
              }
            }
            if (*(int *)(in_ECX + 0x78) != 0) {
              puVar9 = (undefined4 *)FUN_00401f00(8);
              if (puVar9 == (undefined4 *)0x0) {
                puVar9 = (undefined4 *)0x0;
              }
              else {
                *puVar9 = *(undefined4 *)(in_ECX + 0x78);
                puVar9[1] = 0;
              }
              puVar9[1] = *(undefined4 *)(in_ECX + 0x7c);
              *(undefined4 **)(in_ECX + 0x7c) = puVar9;
            }
            *(int *)(in_ECX + 0x78) = iVar8;
          }
        }
      }
      if (DAT_00b35c24 != 0) {
        FUN_0088d1d0(0);
      }
      puVar9 = DAT_00b4310c;
      if (DAT_00b4310c != (undefined4 *)0x0) {
        LVar10 = InterlockedDecrement(DAT_00b4310c + 1);
        if ((LVar10 == 0) && (puVar9 != (undefined4 *)0x0)) {
          (**(code **)*puVar9)(1);
        }
        DAT_00b4310c = (undefined4 *)0x0;
      }
      DAT_00b06a28 = 1;
      return;
    }
    uVar14 = 0;
LAB_004443d0:
    if (uVar14 < uVar7) {
      iVar8 = uVar14 + iVar12;
      iVar6 = uVar13 + iVar11;
      FUN_004441a0(uVar13,uVar14,iVar6,iVar8);
      iVar6 = FUN_00447740(iVar6,iVar8,*(undefined4 *)(in_ECX + 0x74),0);
      iVar8 = DAT_00b333a0;
      if (iVar6 != 0) {
        cVar4 = FUN_004c97f0();
        if (cVar4 == '\0') {
          for (uVar7 = 0; uVar7 < DAT_00b051dc; uVar7 = uVar7 + 1) {
            if (*(int *)(*(int *)(iVar8 + 0x3c) + uVar7 * 4) == iVar6) goto LAB_00444451;
          }
        }
        else {
          for (uVar7 = 0; uVar7 < DAT_00b051d4; uVar7 = uVar7 + 1) {
            if (*(int *)(*(int *)(iVar8 + 0x38) + uVar7 * 4) == iVar6) goto LAB_00444451;
          }
        }
      }
      goto LAB_0044446b;
    }
    uVar13 = uVar13 + 1;
  } while( true );
LAB_00444451:
  cVar4 = FUN_004c97f0();
  if (cVar4 == '\0') {
    FUN_0043fed0(iVar6);
  }
  else {
    FUN_0043fd70(iVar6);
  }
LAB_0044446b:
  if ((cVar3 != '\0') ||
     ((cVar4 = FUN_0045a500(), cVar4 != '\0' && ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xb & 1) != 0)))
     ) {
    local_14 = local_14 + 1;
    fVar1 = (float)(int)(DAT_00b06a2c * DAT_00b06a2c);
    if ((int)(DAT_00b06a2c * DAT_00b06a2c) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar1 = ((float)local_14 / fVar1) * 100.0;
    cVar4 = FUN_0045a500();
    if ((cVar4 != '\0') && ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xb & 1) != 0)) {
      FUN_004523a0(1,fVar1);
      uVar14 = uVar14 + 1;
      uVar7 = DAT_00b06a2c;
      goto LAB_004443d0;
    }
    FUN_0057b950(1,fVar1);
  }
  uVar14 = uVar14 + 1;
  uVar7 = DAT_00b06a2c;
  goto LAB_004443d0;
}



void FUN_00444840(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  DWORD DVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int in_ECX;
  char *pcVar14;
  uint uVar15;
  
  *(undefined1 *)(in_ECX + 0x51) = 1;
  FUN_0065d810(1);
  FUN_0040fec0("Running Cell Test");
  FUN_00579770();
  DVar4 = GetTickCount();
  for (piVar5 = (int *)(DAT_00b33a98 + 0xc);
      (piVar5 != (int *)0x0 && ((piVar5[1] != 0 || (*piVar5 != 0)))); piVar5 = (int *)piVar5[1]) {
    piVar2 = (int *)*piVar5;
    if (piVar2 != (int *)0x0) {
      FUN_004431f0(piVar2);
      iVar6 = FUN_009828c0();
      iVar6 = iVar6 >> 0xc;
      iVar7 = FUN_009828c0();
      iVar8 = FUN_009828c0();
      iVar9 = FUN_009828c0();
      pcVar10 = (char *)piVar2[7];
      if (pcVar10 == (char *)0x0) {
        pcVar10 = "";
      }
      pcVar14 = pcVar10;
      do {
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar1 != '\0');
      if (pcVar14 == pcVar10 + 1) {
        pcVar10 = (char *)(**(code **)(*piVar2 + 0xd4))();
      }
      FUN_0040fec0("Starting world %08X %s with bounds (%i,%i) to (%i,%i)",piVar2[3],pcVar10,iVar6,
                   iVar7 >> 0xc,iVar8 >> 0xc,iVar9 >> 0xc);
      iVar11 = DAT_00b06a2c;
      for (; iVar3 = iVar7 >> 0xc, iVar6 < iVar8 >> 0xc; iVar6 = iVar6 + iVar11) {
        for (; iVar3 < iVar9 >> 0xc; iVar3 = iVar3 + DAT_00b06a2c) {
          iVar11 = FUN_004efe80(iVar6,iVar3);
          if ((iVar11 != 0) || (iVar11 = FUN_004f1630(iVar6,iVar3), iVar11 != 0)) {
            FUN_004433a0(iVar11,param_1,DVar4);
          }
          iVar11 = DAT_00b06a2c;
        }
      }
    }
  }
  FUN_00447580();
  uVar12 = FUN_00447550();
  uVar15 = 0;
  if (uVar12 != 0) {
    do {
      uVar13 = FUN_00447560(uVar15);
      FUN_004433a0(uVar13,param_1,DVar4);
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar12);
  }
  *(undefined1 *)(in_ECX + 0x52) = 0;
  return;
}



void FUN_00444a10(void)

{
  undefined4 uVar1;
  
  if (DAT_00b33a68 == '\0') {
    DAT_00b33a68 = '\x01';
    if (*DAT_00b37150 != '\0') {
      uVar1 = FUN_00439eb0(DAT_00b37150,0,0,1);
      FUN_00443f00(uVar1);
    }
    if (*DAT_00b37158 != '\0') {
      uVar1 = FUN_00439eb0(DAT_00b37158,0,0,1);
      FUN_00443f00(uVar1);
    }
    if (*DAT_00b37160 != '\0') {
      uVar1 = FUN_00439eb0(DAT_00b37160,0,0,1);
      FUN_00443f00(uVar1);
    }
    if (*DAT_00b37168 != '\0') {
      uVar1 = FUN_00439eb0(DAT_00b37168,0,0,1);
      FUN_00443f00(uVar1);
    }
    if (*DAT_00b37170 != '\0') {
      uVar1 = FUN_00439eb0(DAT_00b37170,0,0,1);
      FUN_00443f00(uVar1);
    }
    if (*DAT_00b37178 != '\0') {
      uVar1 = FUN_00439eb0(DAT_00b37178,0,0,1);
      FUN_00443f00(uVar1);
    }
    if (*DAT_00b37180 != '\0') {
      uVar1 = FUN_00439eb0(DAT_00b37180,0,0,1);
      FUN_00443f00(uVar1);
    }
    if (*DAT_00b37188 != '\0') {
      uVar1 = FUN_00439eb0(DAT_00b37188,0,0,1);
      FUN_00443f00(uVar1);
    }
    if (*DAT_00b37190 != '\0') {
      uVar1 = FUN_00439eb0(DAT_00b37190,0,0,1);
      FUN_00443f00(uVar1);
    }
    if (*DAT_00b37198 != '\0') {
      uVar1 = FUN_00439eb0(DAT_00b37198,0,0,1);
      FUN_00443f00(uVar1);
    }
    if (*DAT_00b371a0 != '\0') {
      uVar1 = FUN_00439eb0(DAT_00b371a0,0,0,1);
      FUN_00443f00(uVar1);
    }
    if (*DAT_00b371a8 != '\0') {
      uVar1 = FUN_00439eb0(DAT_00b371a8,0,0,1);
      FUN_00443f00(uVar1);
    }
    if (*DAT_00b371b0 != '\0') {
      uVar1 = FUN_00439eb0(DAT_00b371b0,0,0,1);
      FUN_00443f00(uVar1);
    }
    if (*DAT_00b371b8 != '\0') {
      uVar1 = FUN_00439eb0(DAT_00b371b8,0,0,1);
      FUN_00443f00(uVar1);
    }
    if (*DAT_00b371c0 != '\0') {
      uVar1 = FUN_00439eb0(DAT_00b371c0,0,0,1);
      FUN_00443f00(uVar1);
    }
    if (*DAT_00b37b38 != '\0') {
      uVar1 = FUN_00439eb0(DAT_00b37b38,0,0,1);
      FUN_00443f00(uVar1);
    }
  }
  return;
}



void FUN_00444c70(undefined4 param_1,char param_2)

{
  LONG LVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puStack_c;
  
  if (((DAT_00b33a98 != 0) && (*(int *)(in_ECX + 0x34) == 0)) && (DAT_00b33a69 == '\0')) {
    DAT_00b33a69 = 1;
    if (param_2 == '\0') {
      (**(code **)(**(int **)(in_ECX + 8) + 0x10))
                (*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24));
      (**(code **)(**(int **)(in_ECX + 4) + 0x10))
                (*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24));
      FUN_004430f0(1);
      FUN_00444340();
      FUN_004ef7e0();
      puVar2 = (undefined4 *)(**(code **)(*DAT_00b333c4 + 0x174))();
      FUN_004ea6e0(*puVar2,puVar2[1],puVar2[2],1);
    }
    else {
      (**(code **)(**(int **)(in_ECX + 8) + 8))();
      (**(code **)(**(int **)(in_ECX + 4) + 8))();
      puVar2 = DAT_00b4310c;
      DAT_00b06a28 = 1;
      if (DAT_00b4310c != (undefined4 *)0x0) {
        LVar1 = InterlockedDecrement(DAT_00b4310c + 1);
        if ((LVar1 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        DAT_00b4310c = (undefined4 *)0x0;
      }
      (**(code **)(**(int **)(in_ECX + 8) + 0x10))
                (*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24));
      (**(code **)(**(int **)(in_ECX + 4) + 0x10))
                (*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24));
      FUN_0043fff0(0,0);
      FUN_0043fc20(0);
      FUN_004430f0(0);
      FUN_00444340();
      FUN_00434020(4);
      uVar3 = *puStack_c;
      uVar4 = puStack_c[1];
      FUN_00440590(puStack_c,&stack0xffffffec);
      DAT_00b2cbc0 = 0;
      FUN_004ebda0(uVar3,uVar4,0,DAT_00b258dc,DAT_00b258e0,DAT_00b258e4,0x3f800000);
      DAT_00b2cbc0 = 1;
      if ((*(char *)(in_ECX + 0x51) == '\0') && (*(char *)(in_ECX + 0x52) == '\0')) {
        puVar2 = (undefined4 *)FUN_00403c00();
        FUN_005732d0(2,*puVar2);
      }
      FUN_00441610();
      FUN_00678750();
      FUN_00675f40();
      FUN_00675fc0();
    }
    FUN_004402f0();
    FUN_00707370(0,0);
    FUN_0043fc20(0);
    FUN_00447130();
    DAT_00b33a69 = '\0';
  }
  return;
}



void FUN_00444ec0(float *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int in_ECX;
  int unaff_FS_OFFSET;
  
  if ((((DAT_00b33a98 != 0) && (*(int *)(in_ECX + 0x34) == 0)) &&
      (*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x184) == '\0')) ||
     ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xb & 1) != 0)) {
    uVar1 = *(undefined4 *)(in_ECX + 0x20);
    uVar2 = *(undefined4 *)(in_ECX + 0x24);
    if (*(int *)(in_ECX + 0x74) == 0) {
      FUN_004431f0(*(undefined4 *)(DAT_00b33a98 + 0xc));
    }
    if (param_1 == (float *)0x0) {
      *(undefined4 *)(in_ECX + 0x20) = uVar1;
      *(undefined4 *)(in_ECX + 0x24) = uVar2;
    }
    else {
      *(int *)(in_ECX + 0x20) = (int)ROUND(*param_1) >> 0xc;
      *(int *)(in_ECX + 0x24) = (int)ROUND(param_1[1]) >> 0xc;
    }
    *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(in_ECX + 0x20);
    *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(in_ECX + 0x24);
    FUN_00444c70(param_1,param_2);
    if (*(int *)(in_ECX + 0x34) == 0) {
      FUN_00499e40();
    }
    cVar3 = FUN_0045a500();
    if (cVar3 == '\0') {
      FUN_0049a200();
    }
    FUN_00537d40();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00444fb0(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  int in_ECX;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 unaff_EBP;
  int iVar13;
  int iVar14;
  int iVar15;
  float10 fVar16;
  undefined4 unaff_retaddr;
  char local_d;
  char cStack_4;
  
  iVar11 = *(int *)(in_ECX + 0x7c);
  while (iVar11 != 0) {
    iVar11 = *(int *)(*(int *)(in_ECX + 0x7c) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x7c));
    *(int *)(in_ECX + 0x7c) = iVar11;
  }
  *(undefined4 *)(in_ECX + 0x78) = 0;
  if (DAT_00b33a98 == 0) {
    return 0;
  }
  if ((*(int *)(in_ECX + 0x20) == 0x7fffffff) || (*(int *)(in_ECX + 0x24) == 0x7fffffff)) {
    if (param_1 != (float *)0x0) {
      *(int *)(in_ECX + 0x20) = (int)ROUND(*param_1) >> 0xc;
      fVar1 = param_1[1];
      *(int *)(in_ECX + 0x24) = (int)ROUND(fVar1) >> 0xc;
      *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(in_ECX + 0x20);
      *(int *)(in_ECX + 0x2c) = (int)ROUND(fVar1) >> 0xc;
    }
    FUN_00440af0(1,0,0);
    FUN_00444ec0(param_1,0);
    return 1;
  }
  fVar1 = *param_1;
  fVar2 = param_1[1];
  param_1 = (float *)0x45800000;
  uVar6 = ((int)ROUND(fVar1) + *(int *)(in_ECX + 0x20) * -0x1000) - 0x800;
  uVar8 = ((int)ROUND(fVar2) + *(int *)(in_ECX + 0x24) * -0x1000) - 0x800;
  if (DAT_00b06a2c == 3) {
    param_1 = (float *)0x45400000;
  }
  uVar10 = (int)uVar6 >> 0x1f;
  fVar4 = (float)param_1 - (float)(int)((uVar6 ^ uVar10) - uVar10);
  uVar6 = (int)uVar8 >> 0x1f;
  *(float *)(in_ECX + 0x6c) = fVar4;
  fVar3 = (float)param_1 - (float)(int)((uVar8 ^ uVar6) - uVar6);
  *(float *)(in_ECX + 0x70) = fVar3;
  iVar11 = (int)ROUND(fVar1) >> 0xc;
  iVar15 = (int)ROUND(fVar2) >> 0xc;
  if (((0.0 < fVar4) && (0.0 < fVar3)) && ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xb & 1) == 0)) {
    if (DAT_00b08960 == '\0') {
      return 0;
    }
    cVar5 = FUN_0045a500();
    if (cVar5 != '\0') {
      return 0;
    }
    if (*(int *)(in_ECX + 0x34) != 0) {
      return 0;
    }
    if (((float)param_1 * 0.5 <= *(float *)(in_ECX + 0x6c)) &&
       ((float)param_1 * 0.5 <= *(float *)(in_ECX + 0x70))) {
      return 0;
    }
    param_2 = *(int *)(in_ECX + 0x28);
    uVar6 = DAT_00b06a2c >> 1;
    iVar9 = iVar11 - param_2;
    if (iVar9 != 0) {
      param_2 = param_2 + (uVar6 + 1) * iVar9;
      iVar13 = -uVar6;
      if (-uVar6 == uVar6 || iVar13 < (int)uVar6) {
        do {
          FUN_004be090(*(undefined4 *)(in_ECX + 0x74),param_2,*(int *)(in_ECX + 0x2c) + iVar13);
          iVar13 = iVar13 + 1;
        } while (iVar13 <= (int)uVar6);
      }
      *(int *)(in_ECX + 0x28) = iVar11;
    }
    iVar11 = *(int *)(in_ECX + 0x2c);
    iVar13 = iVar15 - iVar11;
    if (iVar13 != 0) {
      iVar14 = -uVar6;
      iVar11 = iVar11 + (uVar6 + 1) * iVar13;
      if (-uVar6 == uVar6 || iVar14 < (int)uVar6) {
        do {
          FUN_004be090(*(undefined4 *)(in_ECX + 0x74),*(int *)(in_ECX + 0x28) + iVar14,iVar11);
          iVar14 = iVar14 + 1;
        } while (iVar14 <= (int)uVar6);
      }
      *(int *)(in_ECX + 0x2c) = iVar15;
    }
    if (iVar9 == 0) {
      return 0;
    }
    if (iVar13 == 0) {
      return 0;
    }
    FUN_004be090(*(undefined4 *)(in_ECX + 0x74),param_2,iVar11);
    return 0;
  }
  local_d = FUN_0057bac0();
  if ((local_d == '\0') && (iVar9 = FUN_004bdda0(), iVar9 != 0)) {
    FUN_00440c40();
    local_d = '\x01';
  }
  FUN_00432860();
  FUN_004be4e0();
  if (((*(uint *)(DAT_00b33b00 + 0x18) >> 0xb & 1) != 0) &&
     ((*(uint *)(DAT_00b33b00 + 0x18) >> 0x13 & 1) != 0)) {
    iVar11 = *(int *)(in_ECX + 0x20);
    iVar15 = *(int *)(in_ECX + 0x24);
  }
  uVar12 = iVar11 - *(int *)(in_ECX + 0x20);
  uVar6 = iVar15 - *(int *)(in_ECX + 0x24);
  *(int *)(in_ECX + 0x20) = iVar11;
  *(int *)(in_ECX + 0x24) = iVar15;
  *(int *)(in_ECX + 0x28) = iVar11;
  *(int *)(in_ECX + 0x2c) = iVar15;
  FUN_004be330(iVar11,iVar15);
  DAT_00b43134 = DAT_00b4312c;
  DAT_00b43138 = DAT_00b43130;
  fVar1 = ((float)*(int *)(in_ECX + 0x20) + 0.5) * 4096.0;
  fVar2 = ((float)*(int *)(in_ECX + 0x24) + 0.5) * 4096.0;
  uVar8 = (int)uVar12 >> 0x1f;
  uVar10 = (int)uVar6 >> 0x1f;
  if ((((DAT_00b3fc80 == DAT_00b4312c) && (DAT_00b3fc84 == DAT_00b43130)) ||
      (1 < (int)((uVar12 ^ uVar8) - uVar8))) || (1 < (int)((uVar6 ^ uVar10) - uVar10))) {
    DAT_00b43134 = fVar1;
    DAT_00b43138 = fVar2;
  }
  DAT_00b4312c = fVar1;
  DAT_00b43130 = fVar2;
  fVar16 = (float10)FUN_0043f490(0,0);
  _DAT_00b43078 = (float)fVar16;
  if ((*(int *)(in_ECX + 0x34) != 0) && ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xb & 1) == 0))
  goto LAB_004454eb;
  if ((DAT_00b051cc != '\0') && (iVar9 = FUN_0043fe30(1), iVar9 != 0)) {
    FUN_0043fc20(0);
  }
  *(undefined4 *)(DAT_00b33398 + 0x18) = 0;
  if (*(int *)(in_ECX + 0x74) == 0) {
    FUN_004431f0(*(undefined4 *)(DAT_00b33a98 + 0xc));
  }
  iVar9 = (uVar12 ^ uVar8) - uVar8;
  if ((1 < iVar9) || (1 < (int)((uVar6 ^ uVar10) - uVar10))) {
    param_1 = (float *)0x1;
  }
  if (DAT_00b35c24 != 0) {
    if (((char)param_1 != '\0') || ((char)param_2 == '\0')) {
      FUN_0088d1d0(0);
      FUN_0088bd60(0);
    }
    FUN_00889e10();
  }
  (**(code **)(**(int **)(in_ECX + 8) + 0x10))(iVar11,iVar15);
  if (DAT_00b35c24 != 0) {
    cStack_4 = SUB41(fVar2,0);
    if ((char)((uint)unaff_EBP >> 0x18) == '\0') {
      if (cStack_4 != '\0') {
        iVar13 = FUN_004bdda0();
        if (iVar13 != 0) {
          FUN_00440c40();
        }
        goto LAB_00445434;
      }
    }
    else {
LAB_00445434:
      if (cStack_4 != '\0') {
        unaff_retaddr = 0;
      }
    }
    FUN_0088bd60(unaff_retaddr);
  }
  (**(code **)(**(int **)(in_ECX + 4) + 0x10))(iVar11,iVar15);
  if ((local_d == '\0') && (cVar5 = FUN_00442410(), cVar5 == '\0')) {
    FUN_00440c40();
  }
  if ((1 < iVar9) || (1 < (int)((uVar6 ^ uVar10) - uVar10))) {
    FUN_004430f0(0);
  }
  if (DAT_00b35c24 != 0) {
    FUN_00889e00();
  }
  FUN_00444340();
  *(undefined1 *)(in_ECX + 0x69) = 1;
  if (DAT_00b35c24 != 0) {
    if ((char)param_1 != '\0') {
      param_2 = 0;
    }
    FUN_0088d1d0(param_2);
  }
  FUN_00440270();
  cVar5 = FUN_0045a500();
  if (cVar5 == '\0') {
    FUN_00665260(DAT_00b333c4);
  }
LAB_004454eb:
  FUN_0043fc20(0);
  FUN_00440200();
  if (*(int *)(in_ECX + 0x34) == 0) {
    FUN_00499e40();
  }
  cVar5 = FUN_0045a500();
  if (cVar5 == '\0') {
    FUN_0049a200();
  }
  FUN_00537d40();
  puVar7 = (undefined4 *)(**(code **)(*DAT_00b333c4 + 0x174))();
  FUN_004ea6e0(*puVar7,puVar7[1],puVar7[2],0);
  FUN_00432890();
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004455e0(int param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  bool bVar7;
  
  DAT_00b43384 = 1;
  if ((*(char *)(in_ECX + 0x51) == '\0') && (*(char *)(in_ECX + 0x52) == '\0')) {
    FUN_0040d160();
  }
  DAT_00b43074 = 1;
  FUN_007b7650();
  FUN_007ab6f0();
  *(undefined1 *)(DAT_00b35c24 + 0x19) = 0;
  FUN_0088b680(0);
  iVar5 = *(int *)(in_ECX + 0x34);
  if (iVar5 == param_1) {
    FUN_00444fb0(param_2,0);
    DAT_00b43384 = 0;
    return;
  }
  if ((DAT_00b051cc != '\0') && (iVar5 == 0)) {
    cVar1 = FUN_004c9300();
    iVar3 = FUN_0043fff0(1,0);
    if ((iVar3 != 0) || (cVar1 != '\0')) {
      FUN_0043fc20(0);
    }
  }
  *(undefined4 *)(DAT_00b33398 + 0x18) = 0;
  if (((param_1 != 0) && (cVar1 = FUN_0045a500(), cVar1 == '\0')) &&
     (cVar1 = FUN_0040fda0(), cVar1 == '\0')) {
    FUN_0040d4d0();
  }
  FUN_007b4280(0);
  FUN_007c7e50();
  bVar7 = iVar5 != 0;
  if (bVar7) {
    FUN_004d6450();
    FUN_00977c50(3);
    FUN_007b84e0();
    FUN_00977c50(2);
    uVar4 = FUN_00660110(0);
    FUN_007b4280(0,uVar4);
    FUN_007c6c30(uVar4);
  }
  cVar1 = FUN_0043fd40(param_1);
  if ((cVar1 == '\0') &&
     (iVar5 = *(int *)(*(int *)(in_ECX + 0x38) + -4 + DAT_00b051d4 * 4), iVar5 != 0)) {
    FUN_00440120(iVar5);
  }
  *(int *)(in_ECX + 0x34) = param_1;
  if (param_1 == 0) goto LAB_00445983;
  if ((*(int *)(in_ECX + 0x48) == 0x7fffffff) && (!bVar7)) {
    *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(in_ECX + 0x20);
    *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(in_ECX + 0x24);
    FUN_00441d50(1,0);
  }
  *(int *)(in_ECX + 0x20) = (int)ROUND(*param_2) >> 0xc;
  *(int *)(in_ECX + 0x24) = (int)ROUND(param_2[1]) >> 0xc;
  FUN_004d4310();
  cVar1 = FUN_0045a500();
  cVar2 = FUN_004c97f0();
  iVar5 = DAT_00b35c24;
  if (cVar2 != '\0') {
    iVar5 = FUN_00424180();
  }
  if (iVar5 != 0) {
    FUN_00889e00();
  }
  piVar6 = (int *)(param_1 + 0x48);
  iVar3 = 0;
  if (piVar6 != (int *)0x0) {
    do {
      if (*piVar6 != 0) {
        iVar3 = iVar3 + 1;
      }
      piVar6 = (int *)piVar6[1];
    } while (piVar6 != (int *)0x0);
    if ((iVar3 != 0) && (*(char *)(param_1 + 0x26) != '\x03')) {
      FUN_00440af0(1,0,0);
    }
  }
  FUN_004d63a0(*(undefined4 *)(in_ECX + 0xc));
  iVar3 = FUN_004af170();
  if (iVar3 != 0) {
    FUN_004e7610();
  }
  FUN_004d5bd0(1);
  cVar2 = FUN_0043e000(param_1);
  if (cVar2 != '\0') {
    FUN_00440af0(1,0,0);
  }
  FUN_00440190(param_1);
  if (cVar1 == '\0') {
    FUN_00434020(1);
  }
  if (iVar5 != 0) {
    FUN_0088d1d0(0);
  }
  if ((*(char *)(in_ECX + 0x51) == '\0') && (*(char *)(in_ECX + 0x52) == '\0')) {
    if (cVar1 == '\0') {
      FUN_005adb40();
      FUN_005732d0(2,_DAT_00b33a48);
LAB_004458a3:
      FUN_00677360();
      FUN_00441610();
      FUN_00678750();
      FUN_00675f40();
      FUN_00675fc0();
    }
  }
  else if (cVar1 == '\0') goto LAB_004458a3;
  FUN_0043fc20(0);
  FUN_00447130();
  iVar5 = FUN_004d58b0();
  FUN_00707610();
  FUN_00707980();
  if (*(short *)(iVar5 + 0xb8) == 0) {
    FUN_00707370(0,0);
  }
  FUN_004cb670(1);
  if ((*(byte *)(param_1 + 0x24) >> 1 & 1) == 0) {
    if (*(int *)(in_ECX + 0x58) != 0) {
      FUN_00499ff0();
    }
    if (*(int *)(in_ECX + 0x54) != 0) {
      FUN_0049a8b0(1);
    }
  }
  else {
    if (*(int *)(in_ECX + 0x54) != 0) {
      FUN_00498f30();
    }
    FUN_0049a000(param_1);
    if ((*(int *)(DAT_00b333a0 + 0x34) != 0) && (*(int *)(in_ECX + 0x58) != 0)) {
      FUN_0049b5f0(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24));
    }
  }
  FUN_0043fd70(param_1);
LAB_00445983:
  if (!bVar7) {
    iVar5 = FUN_007b7650();
    if (iVar5 != 0) {
      FUN_007a9cf0();
    }
    FUN_00977c50(3);
    FUN_007c4d90();
    FUN_007b2130(1);
    FUN_00977c50(2);
    FUN_00482670();
  }
  if ((*(char *)(in_ECX + 0x51) != '\0') || (*(char *)(in_ECX + 0x52) != '\0')) {
    FUN_00578e30();
    FUN_005a9010();
    if (*(int *)(DAT_00b33398 + 0x24) != 0) {
      FUN_006a9aa0();
    }
  }
  FUN_0043fc20(0);
  FUN_005a89a0(0);
  DAT_00b43384 = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445a10(undefined4 *param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  float10 fVar8;
  undefined4 uStack_4;
  
  DAT_00b43384 = 1;
  if ((*(char *)(in_ECX + 0x51) == '\0') && (*(char *)(in_ECX + 0x52) == '\0')) {
    FUN_0040d160();
  }
  DAT_00b43074 = 0;
  FUN_007b7650();
  FUN_007ab6f0();
  FUN_007b2130(0);
  *(undefined1 *)(DAT_00b35c24 + 0x19) = 1;
  iVar3 = *(int *)(in_ECX + 0x34);
  if (iVar3 != 0) {
    FUN_004d6450();
    if (*(int *)(in_ECX + 0x58) != 0) {
      FUN_00499ff0();
    }
    FUN_00977c50(3);
    FUN_007b4280(0);
    FUN_007c7e50();
    FUN_00977c50(2);
    uVar6 = FUN_00660110(0);
    FUN_007b4280(0,uVar6);
    FUN_007c6c30(uVar6);
    cVar4 = FUN_0043fd40(iVar3);
    if (cVar4 == '\0') {
      FUN_00447ba0(iVar3);
    }
    else {
      FUN_004cb010(1);
    }
    *(undefined4 *)(in_ECX + 0x34) = 0;
    if ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xb & 1) == 0) {
      if (*(int *)(in_ECX + 0x48) == 0x7fffffff) {
        iVar7 = FUN_00440880(param_1);
        if (iVar7 == 0) {
          *(undefined4 *)(in_ECX + 0x20) = 0x7fffffff;
          *(undefined4 *)(in_ECX + 0x24) = 0x7fffffff;
          *(undefined4 *)(in_ECX + 0x28) = 0x7fffffff;
          *(undefined4 *)(in_ECX + 0x2c) = 0x7fffffff;
        }
      }
      else if (**(int **)(in_ECX + 0x3c) == 0) {
        *(undefined4 *)(in_ECX + 0x20) = 0x7fffffff;
        *(undefined4 *)(in_ECX + 0x24) = 0x7fffffff;
        *(undefined4 *)(in_ECX + 0x28) = 0x7fffffff;
        *(undefined4 *)(in_ECX + 0x2c) = 0x7fffffff;
        *(undefined4 *)(in_ECX + 0x48) = 0x7fffffff;
        *(undefined4 *)(in_ECX + 0x4c) = 0x7fffffff;
      }
      else {
        *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x48);
        *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(in_ECX + 0x4c);
        FUN_00440270();
        FUN_00441d50(0,param_1);
        *(undefined4 *)(in_ECX + 0x48) = 0x7fffffff;
        *(undefined4 *)(in_ECX + 0x4c) = 0x7fffffff;
      }
    }
  }
  if ((*(int *)(in_ECX + 0x10) != 0) &&
     (iVar7 = *(int *)(*(int *)(in_ECX + 0x10) + 0x1c), iVar7 != 0)) {
    puVar1 = (ushort *)(iVar7 + 0x18);
    *puVar1 = *puVar1 & 0xfffe;
  }
  FUN_0088b680(DAT_00b097b8);
  cVar4 = FUN_0045a500();
  FUN_00444fb0(param_1,cVar4 == '\0');
  DAT_00b4312c = ((float)*(int *)(in_ECX + 0x20) + 0.5) * 4096.0;
  DAT_00b43130 = ((float)*(int *)(in_ECX + 0x24) + 0.5) * 4096.0;
  DAT_00b43134 = DAT_00b4312c;
  DAT_00b43138 = DAT_00b43130;
  if (DAT_00b42d78 == (code *)0x0) {
    fVar8 = (float10)0;
  }
  else {
    fVar8 = (float10)(*DAT_00b42d78)(0,0);
  }
  _DAT_00b43078 = (float)fVar8;
  FUN_00440270();
  uVar6 = FUN_0043fa40(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24));
  cVar5 = FUN_0043e000(uVar6);
  if (cVar5 != '\0') {
    FUN_00440af0(1,0,0);
  }
  if (cVar4 == '\0') {
    if (DAT_00b35c24 != 0) {
      FUN_00889e00();
    }
    FUN_00434020(4);
    FUN_00482310();
    if (DAT_00b35c24 != 0) {
      FUN_0088d1d0(0);
    }
    uVar6 = *param_1;
    uVar2 = param_1[1];
    uStack_4 = 0;
    FUN_00440590(param_1,&uStack_4);
    DAT_00b2cbc0 = 0;
    FUN_004ebda0(uVar6,uVar2,uStack_4,DAT_00b258dc,DAT_00b258e0,DAT_00b258e4,0x3f800000);
    DAT_00b2cbc0 = 1;
  }
  if ((*(char *)(in_ECX + 0x51) == '\0') && (*(char *)(in_ECX + 0x52) == '\0')) {
    if (cVar4 != '\0') goto LAB_00445d48;
    FUN_005732d0(2,_DAT_00b33a48);
  }
  else if (cVar4 != '\0') goto LAB_00445d48;
  FUN_00677360();
  FUN_00441610();
  FUN_00678750();
  FUN_00675f40();
  FUN_00675fc0();
LAB_00445d48:
  if ((iVar3 != 0) && (cVar4 = FUN_004c9820(), cVar4 == '\0')) {
    FUN_005403d0(*(undefined4 *)(*(int *)(in_ECX + 0x5c) + 0x10));
    FUN_005403d0(*(undefined4 *)(*(int *)(in_ECX + 0x5c) + 0x14));
  }
  FUN_0043fb40();
  if (*(int *)(*(int *)(in_ECX + 0x5c) + 0xdc) != 0) {
    FUN_00543bb0(3);
  }
  FUN_00707610();
  FUN_00707980();
  FUN_005a89a0(0);
  if ((*(char *)(in_ECX + 0x51) != '\0') || (*(char *)(in_ECX + 0x52) != '\0')) {
    FUN_00578e30();
    FUN_005a9010();
    if (*(int *)(DAT_00b33398 + 0x24) != 0) {
      FUN_006a9aa0();
    }
  }
  FUN_0043fc20(0);
  DAT_00b3522c = 1;
  DAT_00b43384 = 0;
  return;
}



void FUN_004464f0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0xa0);
  if (piVar1 != (int *)0x0) {
    while (cVar4 = FUN_0046cb60(), cVar4 == '\0') {
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        FUN_004440e0();
        FUN_00401f20(iVar2);
      }
      piVar3 = *(int **)(in_ECX + 0xa4);
      if (piVar3 == (int *)0x0) {
        *piVar1 = 0;
      }
      else {
        *(int *)(in_ECX + 0xa4) = piVar3[1];
        *piVar1 = *piVar3;
        FUN_00401f20(piVar3);
      }
    }
  }
  if (*DAT_00b37150 != '\0') {
    FUN_004384e0(DAT_00b37150,1,1);
  }
  if (*DAT_00b37158 != '\0') {
    FUN_004384e0(DAT_00b37158,1,1);
  }
  if (*DAT_00b37160 != '\0') {
    FUN_004384e0(DAT_00b37160,1,1);
  }
  if (*DAT_00b37168 != '\0') {
    FUN_004384e0(DAT_00b37168,1,1);
  }
  if (*DAT_00b37170 != '\0') {
    FUN_004384e0(DAT_00b37170,1,1);
  }
  if (*DAT_00b37178 != '\0') {
    FUN_004384e0(DAT_00b37178,1,1);
  }
  if (*DAT_00b37180 != '\0') {
    FUN_004384e0(DAT_00b37180,1,1);
  }
  if (*DAT_00b37188 != '\0') {
    FUN_004384e0(DAT_00b37188,1,1);
  }
  if (*DAT_00b37190 != '\0') {
    FUN_004384e0(DAT_00b37190,1,1);
  }
  if (*DAT_00b37198 != '\0') {
    FUN_004384e0(DAT_00b37198,1,1);
  }
  if (*DAT_00b371a0 != '\0') {
    FUN_004384e0(DAT_00b371a0,1,1);
  }
  if (*DAT_00b371a8 != '\0') {
    FUN_004384e0(DAT_00b371a8,1,1);
  }
  if (*DAT_00b371b0 != '\0') {
    FUN_004384e0(DAT_00b371b0,1,1);
  }
  if (*DAT_00b371b8 != '\0') {
    FUN_004384e0(DAT_00b371b8,1,1);
  }
  if (*DAT_00b371c0 != '\0') {
    FUN_004384e0(DAT_00b371c0,1,1);
  }
  if (*DAT_00b37b38 != '\0') {
    FUN_004384e0(DAT_00b37b38,1,1);
  }
  return;
}



void FUN_004466f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ad24a;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a37470;
  local_4 = 2;
  FUN_004b26d0(uVar4);
  *(undefined1 *)(DAT_00b33a98 + 0xcd4) = 1;
  FUN_004be910();
  FUN_004bdd40();
  (**(code **)(*DAT_00b333c4 + 0x150))(0);
  *(undefined1 *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x185) = 0;
  if (in_ECX[0x22] != 0) {
    FUN_004526e0();
    FUN_00401f20(in_ECX[0x22]);
  }
  in_ECX[7] = 0;
  in_ECX[6] = 0;
  in_ECX[0x17] = 0;
  FUN_00677a00();
  iVar1 = in_ECX[0x15];
  if (iVar1 != 0) {
    FUN_0049cfb0();
    FUN_00401f20(iVar1);
  }
  iVar1 = in_ECX[0x16];
  if (iVar1 != 0) {
    FUN_0049e500();
    FUN_00401f20(iVar1);
  }
  in_ECX[0x16] = 0;
  iVar1 = in_ECX[0x1f];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[0x1f] + 4);
    FUN_00401f20(in_ECX[0x1f]);
    in_ECX[0x1f] = iVar1;
  }
  in_ECX[0x1e] = 0;
  FUN_004425d0();
  FUN_007b4280(0);
  FUN_007c7e50();
  if (*(int *)(DAT_00b33398 + 0x24) != 0) {
    FUN_006ac210();
  }
  FUN_0043fff0(0,0);
  iVar1 = in_ECX[0xd];
  if ((iVar1 != 0) && (cVar3 = FUN_0043fd40(iVar1), cVar3 == '\0')) {
    FUN_00447ba0(iVar1);
  }
  FUN_0043fe30(0);
  in_ECX[0xd] = 0;
  *(undefined1 *)(in_ECX + 0x2a) = 1;
  FUN_004418a0();
  FUN_00440f20();
  FUN_0054fe20();
  FUN_0055e390(0);
  FUN_004464f0();
  FUN_00443c70();
  FUN_004492e0();
  *(undefined1 *)(DAT_00b33a98 + 0xcd4) = 1;
  iVar1 = g_ModelLoader_singleton;
  if (g_ModelLoader_singleton != 0) {
    FUN_0043eed0();
    FUN_00401f20(iVar1);
  }
  g_ModelLoader_singleton = 0;
  if (g_IOManager_singleton != (int *)0x0) {
    (**(code **)(*g_IOManager_singleton + 0x50))(1);
  }
  g_IOManager_singleton = (int *)0x0;
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[2])(1);
  }
  if ((undefined4 *)in_ECX[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[1])(1);
  }
  iVar1 = DAT_00b33b00;
  if (DAT_00b33b00 != 0) {
    FUN_00453250();
    FUN_00401f20(iVar1);
  }
  iVar1 = DAT_00b33a98;
  DAT_00b33b00 = 0;
  if (DAT_00b33a98 != 0) {
    FUN_004491d0();
    FUN_00401f20(iVar1);
  }
  DAT_00b33a98 = 0;
  FUN_00401f20(in_ECX[0xe]);
  FUN_00401f20(in_ECX[0xf]);
  iVar1 = in_ECX[0x1f];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[0x1f] + 4);
    FUN_00401f20(in_ECX[0x1f]);
    in_ECX[0x1f] = iVar1;
  }
  in_ECX[0x1e] = 0;
  FUN_0049b6c0();
  thunk_FUN_008897a0();
  FUN_004b2c80();
  FUN_004a08e0();
  puVar2 = (undefined4 *)in_ECX[0x27];
  puStack_8._0_1_ = 1;
  if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
     (puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  puVar2 = (undefined4 *)in_ECX[0x26];
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
     (puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  puVar2 = (undefined4 *)in_ECX[0x25];
  puStack_8 = (undefined1 *)0xffffffff;
  if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
     (puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  *unaff_FS_OFFSET = (int)in_ECX;
  return;
}



undefined4 FUN_00446a10(void)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x34) == 0) {
    piVar1 = (int *)FUN_00482150(DAT_00b06a2c >> 1,DAT_00b06a2c >> 1);
    if (*piVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_004d4e30();
  return uVar2;
}



void FUN_00446a40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 != (int *)0x0) {
    iVar2 = FUN_006ecc80();
    if ((iVar2 != 0) && (cVar1 = FUN_004c97f0(), cVar1 == '\0')) {
      iVar2 = 0;
    }
    iVar3 = FUN_004d6670();
    if (iVar2 != 0) {
      uVar4 = (**(code **)(*param_1 + 0x174))(param_2,param_3,param_4,param_5,param_6);
      FUN_004d5e30(iVar2,uVar4);
      return;
    }
    if (iVar3 != 0) {
      uVar4 = (**(code **)(*param_1 + 0x174))(param_2,param_3,param_4,param_5,param_6);
      FUN_004f0750(uVar4,param_2,param_3,param_4,param_5,param_6);
    }
  }
  return;
}



int FUN_00446af0(byte param_1)

{
  int in_ECX;
  
  if (param_1 < 0x15) {
    return (char)param_1 * 0x60 + 0xd8 + in_ECX;
  }
  return 0;
}



undefined4 FUN_00446b10(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x8d0);
}



undefined4 FUN_00446b20(uint param_1)

{
  int in_ECX;
  
  if ((-1 < (int)param_1) && (param_1 < 0xff)) {
    return *(undefined4 *)(in_ECX + 0x8d4 + param_1 * 4);
  }
  return 0;
}



void FUN_00446b40(uint param_1)

{
  int in_ECX;
  
  if ((((param_1 != 0) && ((param_1 & 0xff000000) == 0xff000000)) &&
      (param_1 == *(int *)(in_ECX + 0x8c0) - 1U)) && (0x7ff < (param_1 & 0xffffff))) {
    *(uint *)(in_ECX + 0x8c0) = param_1;
  }
  return;
}



bool FUN_00446b80(uint param_1)

{
  return 0xfeffffff < param_1;
}



void FUN_00446b90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  
  if ((param_1 != 0) && (param_6 != 0)) {
    cVar1 = FUN_004c97f0();
    if (cVar1 == '\0') {
      iVar2 = FUN_004c9cf0();
      if (iVar2 != 0) {
        FUN_004f0750(param_2,param_3,param_4,param_5,param_6,param_7);
        return;
      }
    }
    else {
      FUN_004cbc20(param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  return;
}



void FUN_00446c10(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xcdc) != 0) {
    FUN_0048f180();
    return;
  }
  return;
}



void FUN_00446c20(void)

{
  DAT_00b33a94 = 0;
  return;
}



bool FUN_00446c30(int param_1)

{
  int *in_ECX;
  
  for (; (in_ECX != (int *)0x0 && (*in_ECX != param_1)); in_ECX = (int *)in_ECX[1]) {
  }
  return in_ECX != (int *)0x0;
}



void FUN_00446c50(uint param_1,int *param_2)

{
  int in_ECX;
  
  if (param_1 < *(uint *)(in_ECX + 0xc)) {
    if (*param_2 == 0) {
      if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) != 0) {
        *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) == 0) {
      *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
      *(int *)(*(int *)(in_ECX + 4) + param_1 * 4) = *param_2;
      return;
    }
  }
  else {
    *(uint *)(in_ECX + 0xc) = param_1 + 1;
    if (*param_2 != 0) {
      *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
      *(int *)(*(int *)(in_ECX + 4) + param_1 * 4) = *param_2;
      return;
    }
  }
  *(int *)(*(int *)(in_ECX + 4) + param_1 * 4) = *param_2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446cb0(int param_1)

{
  int *piVar1;
  int *in_ECX;
  
  if (param_1 != 0) {
    if (*in_ECX != 0) {
      piVar1 = (int *)FUN_00401f00(8);
      if (piVar1 != (int *)0x0) {
        *piVar1 = *in_ECX;
        piVar1[1] = 0;
        piVar1[1] = in_ECX[1];
        *in_ECX = param_1;
        in_ECX[1] = (int)piVar1;
        return;
      }
      _DAT_00000004 = in_ECX[1];
      in_ECX[1] = 0;
    }
    *in_ECX = param_1;
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
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a37aac;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a37ab4;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_00446d80(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ad652;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[1] = 0;
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
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
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
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x30] = &PTR__scalar_deleting_destructor__00a37ab4;
  in_ECX[0x32] = 0;
  in_ECX[0x35] = 1;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x31] = 0;
  local_4 = 0;
  _eh_vector_constructor_iterator_(in_ECX + 0x36,0x60,0x15,FUN_0052eb80,FUN_0052e660);
  iVar2 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  in_ECX[0x22e] = 0;
  in_ECX[0x22f] = 0;
  in_ECX[0x232] = 0;
  in_ECX[0x233] = 0;
  in_ECX[0x230] = 0x800;
  in_ECX[0x234] = 0;
  in_ECX[0x231] = 0;
  *(undefined1 *)(in_ECX + 0x334) = 0;
  *(undefined1 *)((int)in_ECX + 0xcd1) = 0;
  *(undefined1 *)(iVar2 + 0x184) = 0;
  local_4._0_1_ = 1;
  *(undefined1 *)((int)in_ECX + 0xcd2) = 0;
  *(undefined1 *)((int)in_ECX + 0xcd3) = 0;
  *(undefined1 *)(in_ECX + 0x335) = 0;
  *(undefined1 *)((int)in_ECX + 0xcd5) = 1;
  _memset(in_ECX + 0x235,0,0x3fc);
  iVar2 = FUN_00401f00(0x10);
  local_4._0_1_ = 2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004b23a0(1);
  }
  local_4._0_1_ = 1;
  *in_ECX = uVar3;
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4._0_1_ = 3;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004a62d0(1);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[0x2f] = uVar3;
  in_ECX[0x337] = 0;
  in_ECX[0x35] = 100;
  iVar2 = 0x3d;
  piVar4 = in_ECX + 0x41;
  local_14 = 0x15;
  do {
    if (iVar2 < 0x5a) {
      FUN_0046c300(iVar2,1);
    }
    *piVar4 = iVar2 + -0x31;
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 0x18;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  iVar2 = FUN_00401f00(8);
  local_4._0_1_ = 4;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004a45f0();
  }
  local_4._0_1_ = 1;
  in_ECX[0x336] = uVar3;
  iVar2 = FUN_00401f00(0x14);
  local_4 = CONCAT31(local_4._1_3_,5);
  if (iVar2 == 0) {
    DAT_00b362c0 = 0;
  }
  else {
    DAT_00b362c0 = FUN_00521950();
  }
  *(undefined1 *)((int)in_ECX + 0xcd6) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_00447050(int *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_1 + 2);
  uVar2 = (**(code **)(*param_1 + 0x1c))(param_2);
  if ((bVar1 & 1) == 0) {
    uVar4 = FUN_0044faa0();
  }
  else {
    uVar4 = 1;
  }
  FUN_0046a9a0(uVar4);
  cVar3 = FUN_0044faf0();
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x90))(1);
  }
  return uVar2;
}



uint FUN_004470b0(int *param_1)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x8c4) == 0) {
    return in_EAX & 0xffffff00;
  }
  iVar2 = FUN_0046b680(0xffffffff);
  if (iVar2 == *(int *)(in_ECX + 0x8c4)) {
    cVar1 = FUN_0044faa0();
    if (cVar1 != '\0') goto LAB_004470e3;
  }
  else {
LAB_004470e3:
    uVar3 = (uint)param_1[2] >> 1;
    if ((uVar3 & 1) == 0) goto LAB_00447111;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    uVar3 = (**(code **)(*param_1 + 0x2c))(*(undefined4 *)(in_ECX + 0x8c4));
    return uVar3;
  }
  uVar3 = (uint)param_1[2] >> 5;
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(*param_1 + 0x20))(*(undefined4 *)(in_ECX + 0x8c4));
    return uVar3;
  }
LAB_00447111:
  return uVar3 & 0xffffff00;
}



void FUN_00447130(void)

{
  int *piVar1;
  int in_ECX;
  
  for (piVar1 = (int *)(in_ECX + 0x8c8); (piVar1 != (int *)0x0 && (*piVar1 != 0));
      piVar1 = (int *)piVar1[1]) {
    FUN_004507d0();
  }
  return;
}



undefined4 FUN_00447160(char *param_1)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    cVar1 = FUN_0055e000(param_1,&local_4);
    if (cVar1 != '\0') {
      return local_4;
    }
  }
  return 0;
}



uint FUN_004471a0(uint param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    return 0;
  }
  param_1 = 0;
  cVar2 = FUN_0055e000(iVar1,&param_1);
  return -(uint)(cVar2 != '\0') & param_1;
}



int * FUN_004471d0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ad67b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar4 = (int *)0x0;
  if (param_4 != 0) {
    iVar3 = FUN_00401f00(0x58,uVar2);
    local_4 = 0;
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_004d3210();
    }
    local_4 = 0xffffffff;
    iVar3 = FUN_00459790(*(undefined4 *)(param_4 + 0xc),param_2,param_3);
    if (iVar3 != 0) {
      FUN_0046c300(iVar3,1);
    }
    if (param_1 != 0) {
      (**(code **)(*piVar4 + 0xd8))(param_1);
    }
    FUN_004c9800(0);
    FUN_004c97e0(2);
    FUN_004ca710();
    FUN_004c9ac0(param_2,param_3);
    cVar1 = FUN_004efef0(piVar4);
    if (cVar1 != '\0') {
      cVar1 = FUN_0045a500();
      FUN_0045a530(cVar1 == '\0');
      (**(code **)(*piVar4 + 0x6c))();
      FUN_0045a530(cVar1);
      goto LAB_004472e8;
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x10))(1);
    }
  }
  piVar4 = (int *)0x0;
LAB_004472e8:
  *unaff_FS_OFFSET = local_c;
  return piVar4;
}



void FUN_00447300(void)

{
  int iVar1;
  
  iVar1 = FUN_004b2460();
  while (iVar1 != 0) {
    iVar1 = FUN_009832e6(iVar1,0,&PTR_PTR_00b03268,&PTR_PTR_00b02fb4,0);
    if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x28) >> 7 & 1) != 0)) {
      FUN_005222d0(0);
    }
    iVar1 = FUN_004b2360();
  }
  return;
}



void FUN_00447350(uint param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  uVar1 = param_1;
  uVar3 = 0;
  if (param_1 != 0) {
    param_1 = 0;
    cVar2 = FUN_0055e000(uVar1,&param_1);
    uVar3 = -(uint)(cVar2 != '\0') & param_1;
  }
  FUN_009832e6(uVar3,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05344,0);
  return;
}



void FUN_004473a0(uint param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  uVar1 = param_1;
  uVar3 = 0;
  if (param_1 != 0) {
    param_1 = 0;
    cVar2 = FUN_0055e000(uVar1,&param_1);
    uVar3 = -(uint)(cVar2 != '\0') & param_1;
  }
  FUN_009832e6(uVar3,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0535c,0);
  return;
}



void FUN_004473f0(uint param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  uVar1 = param_1;
  uVar3 = 0;
  if (param_1 != 0) {
    param_1 = 0;
    cVar2 = FUN_0055e000(uVar1,&param_1);
    uVar3 = -(uint)(cVar2 != '\0') & param_1;
  }
  FUN_009832e6(uVar3,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03500,0);
  return;
}



void FUN_00447440(uint param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  uVar1 = param_1;
  uVar3 = 0;
  if (param_1 != 0) {
    param_1 = 0;
    cVar2 = FUN_0055e000(uVar1,&param_1);
    uVar3 = -(uint)(cVar2 != '\0') & param_1;
  }
  FUN_009832e6(uVar3,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05390,0);
  return;
}



int FUN_00447490(char *param_1)

{
  char cVar1;
  int local_4;
  
  local_4 = 0;
  if ((((param_1 != (char *)0x0) && (*param_1 != '\0')) &&
      (cVar1 = FUN_0055e000(param_1,&local_4), cVar1 != '\0')) &&
     ((local_4 != 0 && (*(char *)(local_4 + 4) == '\n')))) {
    return local_4;
  }
  return 0;
}



int * FUN_004474d0(char *param_1)

{
  int *piVar1;
  int *piVar2;
  char *_Str1;
  int iVar3;
  int in_ECX;
  char *_Str2;
  
  piVar1 = (int *)(in_ECX + 0x74);
  if ((*(int *)(in_ECX + 0x78) != 0) || (*piVar1 != 0)) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      piVar2 = (int *)*piVar1;
      if (piVar2 != (int *)0x0) {
        _Str2 = param_1;
        _Str1 = (char *)(**(code **)(*piVar2 + 0xd4))();
        iVar3 = __stricmp(_Str1,_Str2);
        if (iVar3 == 0) {
          return piVar2;
        }
      }
    }
  }
  return (int *)0x0;
}



void FUN_00447530(int param_1)

{
  if (param_1 != 0) {
    FUN_00446cb0();
    return;
  }
  return;
}



undefined4 FUN_00447550(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xd0);
}



undefined4 FUN_00447560(int param_1)

{
  int in_ECX;
  
  FUN_005a56f0();
  return *(undefined4 *)(*(int *)(in_ECX + 0xc4) + param_1 * 4);
}



void FUN_00447580(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  uint local_18;
  uint local_14;
  
  FUN_005a56f0();
  iVar2 = *(int *)(in_ECX + 0xd0);
  local_18 = 0;
  if (iVar2 != 1 && -1 < iVar2 + -1) {
    do {
      iVar3 = *(int *)(*(int *)(in_ECX + 0xc4) + local_18 * 4);
      uVar1 = local_18 + 1;
      iVar7 = iVar3;
      local_14 = local_18;
      for (uVar6 = uVar1; (int)uVar6 < iVar2; uVar6 = uVar6 + 1) {
        iVar4 = *(int *)(*(int *)(in_ECX + 0xc4) + uVar6 * 4);
        if ((iVar7 == 0) || ((iVar4 != 0 && (iVar5 = __stricmp("",""), iVar5 < 0)))) {
          iVar7 = iVar4;
          local_14 = uVar6;
        }
      }
      if ((iVar7 != 0) && (iVar7 != iVar3)) {
        if (local_18 < *(uint *)(in_ECX + 0xcc)) {
          if (*(int *)(*(int *)(in_ECX + 0xc4) + local_18 * 4) == 0) goto LAB_00447645;
        }
        else {
          *(uint *)(in_ECX + 0xcc) = uVar1;
LAB_00447645:
          *(int *)(in_ECX + 0xd0) = *(int *)(in_ECX + 0xd0) + 1;
        }
        *(int *)(*(int *)(in_ECX + 0xc4) + local_18 * 4) = iVar7;
        if (local_14 < *(uint *)(in_ECX + 0xcc)) {
          if (iVar3 == 0) {
            if (*(int *)(*(int *)(in_ECX + 0xc4) + local_14 * 4) != 0) {
              *(int *)(in_ECX + 0xd0) = *(int *)(in_ECX + 0xd0) + -1;
            }
          }
          else if (*(int *)(*(int *)(in_ECX + 0xc4) + local_14 * 4) == 0) {
            *(int *)(in_ECX + 0xd0) = *(int *)(in_ECX + 0xd0) + 1;
          }
        }
        else {
          *(uint *)(in_ECX + 0xcc) = local_14 + 1;
          if (iVar3 != 0) {
            *(int *)(in_ECX + 0xd0) = *(int *)(in_ECX + 0xd0) + 1;
          }
        }
        *(int *)(*(int *)(in_ECX + 0xc4) + local_14 * 4) = iVar3;
      }
      local_18 = uVar1;
    } while ((int)uVar1 < iVar2 + -1);
  }
  return;
}



int * FUN_004476b0(char *param_1)

{
  int iVar1;
  int *piVar2;
  char *_Str1;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  char *_Str2;
  
  if (param_1 == (char *)0x0) {
    return (int *)0x0;
  }
  iVar1 = *(int *)(in_ECX + 0xcc);
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(*(int *)(in_ECX + 0xc4) + iVar5 * 4);
      _Str2 = param_1;
      _Str1 = (char *)(**(code **)(*piVar2 + 0xd4))();
      iVar3 = __stricmp(_Str1,_Str2);
      if (iVar3 == 0) {
        return piVar2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  piVar2 = (int *)(in_ECX + 0xc);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    if ((*piVar2 != 0) && (piVar4 = (int *)FUN_004f06a0(param_1), piVar4 != (int *)0x0)) break;
    piVar2 = (int *)piVar2[1];
  }
  return piVar4;
}



int FUN_00447740(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int in_ECX;
  int unaff_FS_OFFSET;
  
  if ((param_3 == 0) && (param_3 = *(int *)(in_ECX + 0xc), param_3 == 0)) {
    return 0;
  }
  if ((((param_1 < 0x8000) && (param_2 < 0x8000)) && (-0x8001 < param_1)) && (-0x8001 < param_2)) {
    iVar1 = FUN_004efe80(param_1,param_2);
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((*(char *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x184) == '\0') &&
       (param_4 != '\0')) {
      iVar1 = FUN_004471d0(&DAT_00a2f7ec,param_1,param_2,param_3);
      return iVar1;
    }
  }
  else {
    FUN_004a7a60("Trying to get exterior cell for invalid cell coordinate. Values must be between %i and %i."
                 ,0xffff8000,0x7fff);
  }
  return 0;
}



int FUN_004477f0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  
  if (DAT_00b33abc != 0) {
    cVar2 = FUN_004d7030();
    if (cVar2 == '\0') {
      uVar5 = FUN_004c9aa0();
      uVar6 = FUN_004c9a80(uVar5);
      iVar3 = FUN_004efe80(uVar6,uVar5);
      if (iVar3 == param_1) {
        return DAT_00b33abc;
      }
    }
    else {
      iVar3 = FUN_004ef1e0();
      if (iVar3 == param_1) {
        return DAT_00b33abc;
      }
    }
  }
  piVar1 = (int *)(in_ECX + 0xc);
  do {
    do {
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      iVar3 = *piVar1;
      piVar1 = (int *)piVar1[1];
    } while (iVar3 == 0);
    cVar2 = FUN_004d7030();
    DAT_00b33abc = iVar3;
    if (cVar2 == '\0') {
      uVar5 = FUN_004c9aa0();
      uVar6 = FUN_004c9a80(uVar5);
      iVar4 = FUN_004efe80(uVar6,uVar5);
    }
    else {
      iVar4 = FUN_004ef1e0();
    }
  } while (iVar4 != param_1);
  return iVar3;
}



undefined4 FUN_004478b0(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  char *_Str1;
  int in_ECX;
  size_t _Size;
  undefined4 local_18;
  int *local_14;
  uint local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  *param_2 = 0;
  *param_3 = 0;
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (local_10 = 0, *(int *)(in_ECX + 0x8d0) == 0)) {
    return 0;
  }
  local_14 = (int *)(in_ECX + 0x8d4);
  do {
    local_18 = 0;
    iVar2 = *local_14;
    if ((iVar2 != 0) && (cVar6 = FUN_00451a40(0,0), cVar6 != '\0')) {
      piVar1 = (int *)(iVar2 + 0x23c);
      bVar4 = false;
      bVar5 = bVar4;
      if (piVar1 != (int *)0x0) {
        do {
          if (bVar4) goto LAB_00447983;
          if (*piVar1 == DAT_00b05e20) {
            if ((*(int *)(iVar2 + 0x248) == 0) && (*(int *)(iVar2 + 0x244) == DAT_00b06084)) {
              bVar4 = true;
              goto LAB_00447965;
            }
            cVar6 = FUN_00451580();
          }
          else {
LAB_00447965:
            cVar6 = FUN_004518b0(1);
          }
        } while ((cVar6 != '\0') && (piVar1 != (int *)0x0));
        bVar5 = false;
        if (bVar4) {
LAB_00447983:
          bVar5 = false;
          if (piVar1 != (int *)0x0) {
            while (!bVar5) {
              iVar7 = *(int *)(iVar2 + 0x23c);
              if (iVar7 == DAT_00b06084) {
                uVar3 = *(uint *)(iVar2 + 0x248);
                FUN_0044fd60((uVar3 >> 0x18) + 1);
                iVar7 = FUN_0044fb50();
                uVar8 = FUN_0046b250(iVar7 << 0x18 | uVar3 & 0xffffff,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b0301c,0);
                local_18 = FUN_009832e6(uVar8);
                goto switchD_00447aec_caseD_1;
              }
              if (iVar7 == DAT_00b06048) {
                iVar7 = FUN_004510b0();
                if (iVar7 == 0x44494445) {
                  _Size = *(int *)(iVar2 + 0x254) + 1;
                  _Str1 = (char *)thunk_FUN_00401aa0(_Size,1);
                  _memset(_Str1,0,_Size);
                  FUN_00450c20(_Str1,0);
                  iVar7 = __stricmp(_Str1,param_1);
                  if (iVar7 == 0) {
                    bVar5 = true;
                    iVar7 = 0x44494445;
                    do {
                      if (iVar7 == 0x434c4358) {
                        local_8 = 0;
                        local_4 = 0;
                        FUN_00450c20(&local_8,8);
                        *param_2 = local_8;
                        *param_3 = local_4;
                        goto LAB_00447acc;
                      }
                      cVar6 = FUN_0044fea0();
                      if (cVar6 == '\0') goto LAB_00447acc;
                      iVar7 = FUN_004510b0();
                    } while (iVar7 != 0);
                    FUN_00401e40(_Str1);
                  }
                  else {
LAB_00447acc:
                    FUN_00401e40(_Str1);
                  }
                }
                goto switchD_00447aec_caseD_1;
              }
              if (iVar7 != DAT_00b05e20) {
                if (iVar7 == DAT_00b060a8) goto switchD_00447aec_caseD_1;
                break;
              }
              switch(*(undefined4 *)(iVar2 + 0x248)) {
              case 0:
                if (*(int *)(iVar2 + 0x244) != DAT_00b06084) {
                  FUN_0046af70(*(undefined4 *)(iVar2 + 0x244));
                  goto switchD_00447aec_caseD_2;
                }
switchD_00447aec_caseD_1:
                cVar6 = FUN_004518b0(1);
LAB_00447b62:
                if ((cVar6 == '\0') || (iVar2 == -0x23c)) goto switchD_00447aec_caseD_2;
                break;
              case 1:
              case 4:
              case 5:
                goto switchD_00447aec_caseD_1;
              default:
                goto switchD_00447aec_caseD_2;
              case 6:
                cVar6 = FUN_00451580();
                goto LAB_00447b62;
              }
            }
          }
        }
      }
switchD_00447aec_caseD_2:
      FUN_004507d0();
      if (bVar5) {
        return local_18;
      }
    }
    local_14 = local_14 + 1;
    local_10 = local_10 + 1;
    if (*(uint *)(in_ECX + 0x8d0) <= local_10) {
      return 0;
    }
  } while( true );
}



void FUN_00447ba0(int param_1)

{
  char cVar1;
  int iVar2;
  
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 5 & 1) == 0)) {
    FUN_0067a8c0(param_1);
    *(undefined1 *)(param_1 + 0x26) = 1;
    FUN_004cb4d0();
    if (*(char *)(DAT_00b33a98 + 0xcd4) == '\0') {
      FUN_004cb010(1);
    }
    iVar2 = FUN_004af170();
    if (iVar2 != 0) {
      FUN_004e7690();
    }
    cVar1 = FUN_004c97f0();
    if (cVar1 == '\0') {
      FUN_004ce3c0();
      FUN_004c6280();
    }
    FUN_004ce320();
    cVar1 = FUN_004c97f0();
    if (cVar1 != '\0') {
      FUN_004d1570();
      return;
    }
    FUN_004c9cf0(param_1);
    FUN_004f1840(param_1);
  }
  return;
}



int FUN_00447c50(char *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x8c8);
  if (param_1 != (char *)0x0) {
    for (; (piVar1 != (int *)0x0 && (iVar2 = *piVar1, iVar2 != 0)); piVar1 = (int *)piVar1[1]) {
      iVar3 = __stricmp(param_1,(char *)(iVar2 + 0x1c));
      if (iVar3 == 0) {
        return iVar2;
      }
    }
  }
  return 0;
}



void FUN_00447ca0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar2 = *(int *)(in_ECX + 0xcc);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if (*(int *)(*(int *)(in_ECX + 0xc4) + iVar3 * 4) != 0) {
        FUN_004cb8c0(1,1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  for (piVar1 = (int *)(in_ECX + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((*piVar1 != 0) && (iVar2 = FUN_004ef1e0(), iVar2 != 0)) {
      FUN_004cb8c0(1,1);
    }
  }
  return;
}



void FUN_00447d00(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  uVar1 = *(undefined1 *)(in_ECX + 0xcd4);
  *(undefined1 *)(in_ECX + 0xcd4) = 1;
  while ((*(int *)(in_ECX + 0x8bc) != 0 || (*(int *)(in_ECX + 0x8b8) != 0))) {
    if (*(int **)(in_ECX + 0x8b8) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x8b8) + 0x10))(1);
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x8bc);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x8b8) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x8bc) = puVar2[1];
      *(undefined4 *)(in_ECX + 0x8b8) = *puVar2;
      FUN_00401f20(puVar2);
    }
  }
  *(undefined1 *)(in_ECX + 0xcd4) = uVar1;
  return;
}



void FUN_00447d80(void)

{
  int *piVar1;
  int in_ECX;
  
  for (piVar1 = (int *)(in_ECX + 100); (piVar1 != (int *)0x0 && ((int *)*piVar1 != (int *)0x0));
      piVar1 = (int *)piVar1[1]) {
    (**(code **)(*(int *)*piVar1 + 0x6c))();
  }
  FUN_00447ca0();
  return;
}



void FUN_00447db0(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  
  for (piVar1 = (int *)(in_ECX + 0x8c8); (piVar1 != (int *)0x0 && (*piVar1 != 0));
      piVar1 = (int *)piVar1[1]) {
    cVar2 = FUN_0044faa0();
    if (cVar2 != '\0') {
      FUN_0044fbb0(param_1);
    }
  }
  return;
}



int FUN_00447df0(byte param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ad91e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  switch((uint)param_1) {
  case 4:
    iVar2 = FUN_00401f00(0x28,uVar1);
    local_4 = 0x24;
    if (iVar2 != 0) {
      iVar2 = FUN_004f95e0();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 5:
    iVar2 = FUN_00401f00(0x6c,uVar1);
    local_4 = 0x20;
    if (iVar2 != 0) {
      iVar2 = FUN_0051c580();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 6:
    iVar2 = FUN_00401f00(0x44,uVar1);
    local_4 = 0x22;
    if (iVar2 != 0) {
      iVar2 = FUN_0051f820();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 7:
    iVar2 = FUN_00401f00(0x4c,uVar1);
    local_4 = 0x1d;
    if (iVar2 != 0) {
      iVar2 = FUN_005200f0();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 8:
    iVar2 = FUN_00401f00(0x34,uVar1);
    local_4 = 0x1e;
    if (iVar2 != 0) {
      iVar2 = FUN_0051efd0();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 9:
    iVar2 = FUN_00401f00(0x318,uVar1);
    local_4 = 0x1f;
    if (iVar2 != 0) {
      iVar2 = FUN_0052d100();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 10:
    iVar2 = FUN_00401f00(0x44,uVar1);
    local_4 = 0x23;
    if (iVar2 != 0) {
      iVar2 = FUN_00517f40();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0xb:
    iVar2 = FUN_00401f00(0x60,uVar1);
    local_4 = 0x2a;
    if (iVar2 != 0) {
      iVar2 = FUN_0052eb80();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0xc:
    iVar2 = FUN_00401f00(0xa8,uVar1);
    local_4 = 0x25;
    if (iVar2 != 0) {
      iVar2 = FUN_00416430();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0xd:
    iVar2 = FUN_00401f00(0x50,uVar1);
    local_4 = 0x2e;
    if (iVar2 != 0) {
      iVar2 = FUN_004fbaa0();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0xe:
    iVar2 = FUN_00401f00(0x34,uVar1);
    local_4 = 0x2b;
    if (iVar2 != 0) {
      iVar2 = FUN_004c93d0();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0xf:
    iVar2 = FUN_00401f00(0x44,uVar1);
    local_4 = 0x19;
    if (iVar2 != 0) {
      iVar2 = FUN_00419570();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x10:
    iVar2 = FUN_00401f00(0x44,uVar1);
    local_4 = 0x18;
    if (iVar2 != 0) {
      iVar2 = FUN_0041d420();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x11:
    iVar2 = FUN_00401f00(0x4c,uVar1);
    local_4 = 0x21;
    if (iVar2 != 0) {
      iVar2 = FUN_005195f0();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x12:
    iVar2 = FUN_00401f00(0x58,uVar1);
    local_4 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_004b40a0();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x13:
    iVar2 = FUN_00401f00(0x7c,uVar1);
    local_4 = 1;
    if (iVar2 != 0) {
      iVar2 = FUN_004b4910();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x14:
    iVar2 = FUN_00401f00(0xe8,uVar1);
    local_4 = 2;
    if (iVar2 != 0) {
      iVar2 = FUN_004b5140();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x15:
    iVar2 = FUN_00401f00(0x8c,uVar1);
    local_4 = 3;
    if (iVar2 != 0) {
      iVar2 = FUN_004b59f0();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x16:
    iVar2 = FUN_00401f00(0xdc,uVar1);
    local_4 = 4;
    if (iVar2 != 0) {
      iVar2 = FUN_004b6150();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x17:
    iVar2 = FUN_00401f00(0x7c,uVar1);
    local_4 = 5;
    if (iVar2 != 0) {
      iVar2 = FUN_004b6be0();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x18:
    iVar2 = FUN_00401f00(0x70,uVar1);
    local_4 = 6;
    if (iVar2 != 0) {
      iVar2 = FUN_004b8550();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x19:
    iVar2 = FUN_00401f00(0x80,uVar1);
    local_4 = 7;
    if (iVar2 != 0) {
      iVar2 = FUN_004198f0();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x1a:
    iVar2 = FUN_00401f00(0x90,uVar1);
    local_4 = 8;
    if (iVar2 != 0) {
      iVar2 = FUN_004b1f90();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x1b:
    iVar2 = FUN_00401f00(0x70,uVar1);
    local_4 = 9;
    if (iVar2 != 0) {
      iVar2 = FUN_004b9860();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x1c:
    iVar2 = FUN_00401f00(0x3c,uVar1);
    local_4 = 0xc;
    if (iVar2 != 0) {
      iVar2 = FUN_004b9aa0();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x1d:
    iVar2 = FUN_00401f00(0x5c,uVar1);
    local_4 = 0xd;
    if (iVar2 != 0) {
      iVar2 = FUN_004af040();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x1e:
    iVar2 = FUN_00401f00(0x80,uVar1);
    local_4 = 0x10;
    if (iVar2 != 0) {
      iVar2 = FUN_004b9da0();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x1f:
    iVar2 = FUN_00401f00(100,uVar1);
    local_4 = 0x11;
    if ((iVar2 != 0) && (iVar2 = FUN_004adfc0(), iVar2 != 0)) {
      *unaff_FS_OFFSET = local_c;
      return iVar2 + 0xc;
    }
    goto LAB_00448b4a;
  case 0x20:
    iVar2 = FUN_00401f00(0x5c,uVar1);
    local_4 = 0x12;
    if (iVar2 != 0) {
      iVar2 = FUN_004ae660();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x21:
    iVar2 = FUN_00401f00(0xa0,uVar1);
    local_4 = 0x13;
    if (iVar2 != 0) {
      iVar2 = FUN_004bb610();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x22:
    iVar2 = FUN_00401f00(0x84,uVar1);
    local_4 = 0x14;
    if (iVar2 != 0) {
      iVar2 = FUN_004a9430();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x23:
    iVar2 = FUN_00401f00(0x200,uVar1);
    local_4 = 0x15;
    if (iVar2 != 0) {
      iVar2 = FUN_00527220();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x24:
    iVar2 = FUN_00401f00(0x140,uVar1);
    local_4 = 0x16;
    if (iVar2 != 0) {
      iVar2 = FUN_0051eb80();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x25:
    iVar2 = FUN_00401f00(0x44,uVar1);
    local_4 = 0x17;
    if (iVar2 != 0) {
      iVar2 = FUN_004af620();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x26:
    iVar2 = FUN_00401f00(0x74,uVar1);
    local_4 = 0xb;
    if (iVar2 != 0) {
      iVar2 = FUN_004bbd10();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x27:
    iVar2 = FUN_00401f00(0x70,uVar1);
    local_4 = 10;
    if (iVar2 != 0) {
      iVar2 = FUN_004af4e0();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x28:
    iVar2 = FUN_00401f00(0x80,uVar1);
    local_4 = 0x1a;
    if (iVar2 != 0) {
      iVar2 = FUN_00412be0();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x29:
    iVar2 = FUN_00401f00(0x30,uVar1);
    local_4 = 0x37;
    if (iVar2 != 0) {
      iVar2 = FUN_004bca00();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x2a:
    iVar2 = FUN_00401f00(0x88,uVar1);
    local_4 = 0x39;
    if (iVar2 != 0) {
      iVar2 = FUN_004bb8a0();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x2b:
    iVar2 = FUN_00401f00(0x34,uVar1);
    local_4 = 0x1b;
    if (iVar2 != 0) {
      iVar2 = FUN_004b00b0();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  default:
    if (param_1 < 0x45) {
      puVar3 = (&PTR_DAT_00b05e04)[(uint)param_1 * 3];
    }
    else {
      puVar3 = &DAT_00a2f7ec;
    }
    FUN_004a7a60("TESDataHandler trying to create TESForm for unknown type \'%s\'.",puVar3);
LAB_00448b4a:
    *unaff_FS_OFFSET = local_c;
    return 0;
  case 0x2d:
    iVar2 = FUN_00401f00(0x148,uVar1);
    local_4 = 0x27;
    if (iVar2 != 0) {
      iVar2 = FUN_004ee7c0();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x2e:
    iVar2 = FUN_00401f00(0x58,uVar1);
    local_4 = 0x26;
    if (iVar2 != 0) {
      iVar2 = FUN_004bec50();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x2f:
    iVar2 = FUN_00401f00(0x2c,uVar1);
    local_4 = 0x2d;
    if (iVar2 != 0) {
      iVar2 = FUN_004a2c30();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x30:
    iVar2 = FUN_00401f00(0x58,uVar1);
    local_4 = 0x29;
    if (iVar2 != 0) {
      iVar2 = FUN_004d3210();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x31:
    iVar2 = FUN_00401f00(0x58,uVar1);
    local_4 = 0x1c;
    if (iVar2 != 0) {
      iVar2 = FUN_004d9a70();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x34:
    iVar2 = FUN_00401f00(0x54,uVar1);
    local_4 = 0x35;
    if (iVar2 != 0) {
      iVar2 = FUN_004e6070();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x35:
    iVar2 = FUN_00401f00(0xe0,uVar1);
    local_4 = 0x28;
    if (iVar2 != 0) {
      iVar2 = FUN_004f2a10();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x36:
    iVar2 = FUN_00401f00(0x28,uVar1);
    local_4 = 0x34;
    if (iVar2 != 0) {
      iVar2 = FUN_004c4c00();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x38:
    iVar2 = FUN_00401f00(0x30,uVar1);
    local_4 = 0x36;
    if (iVar2 != 0) {
      iVar2 = FUN_004e8fa0();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x3b:
    iVar2 = FUN_00401f00(0x68,uVar1);
    local_4 = 0x2c;
    if (iVar2 != 0) {
      iVar2 = FUN_0052aa00();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x3c:
    iVar2 = FUN_00401f00(0x48,uVar1);
    local_4 = 0xe;
    if (iVar2 != 0) {
      iVar2 = FUN_00520290();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x3d:
    iVar2 = FUN_00401f00(0x3c,uVar1);
    local_4 = 0xf;
    if (iVar2 != 0) {
      iVar2 = FUN_00568e10();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x3e:
    iVar2 = FUN_00401f00(0x98,uVar1);
    local_4 = 0x2f;
    if (iVar2 != 0) {
      iVar2 = FUN_004abb40();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x3f:
    iVar2 = FUN_00401f00(0x3c,uVar1);
    local_4 = 0x30;
    if (iVar2 != 0) {
      iVar2 = FUN_004f9a40();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x40:
    iVar2 = FUN_00401f00(0x34,uVar1);
    local_4 = 0x32;
    if (iVar2 != 0) {
      iVar2 = FUN_004b0400();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x41:
    iVar2 = FUN_00401f00(0x34,uVar1);
    local_4 = 0x33;
    if (iVar2 != 0) {
      iVar2 = FUN_004b4290();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x42:
    iVar2 = FUN_00401f00(0xac,uVar1);
    local_4 = 0x31;
    if (iVar2 != 0) {
      iVar2 = FUN_004ede40();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
    break;
  case 0x43:
    iVar2 = FUN_00401f00(0x110,uVar1);
    local_4 = 0x38;
    if (iVar2 != 0) {
      iVar2 = FUN_004adc00();
      *unaff_FS_OFFSET = local_c;
      return iVar2;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined1 FUN_00448c60(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  uVar4 = 1;
  if (((param_1 != 0) && (cVar2 = FUN_0044faa0(), cVar2 == '\0')) &&
     ((DAT_00b33b00 == 0 || ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xc & 1) == 0)))) {
    return 1;
  }
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((uVar1 < 4) || ((5 < uVar1 && (uVar1 != 9)))) {
    if ((DAT_00b33b00 != 0) && ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xc & 1) != 0)) {
      uVar3 = FUN_0046af70(*(undefined4 *)(param_2 + 8));
      switch(uVar3) {
      case 3:
      case 5:
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
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x25:
      case 0x28:
      case 0x29:
      case 0x2b:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x39:
      case 0x3a:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
        goto switchD_00448cd8_caseD_3;
      default:
        break;
      }
    }
  }
  else {
switchD_00448cd8_caseD_3:
    uVar4 = 0;
  }
  return uVar4;
}



undefined4 FUN_00448d40(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  undefined1 auStack_4 [4];
  
  do {
    uVar1 = *(undefined4 *)(in_ECX + 0x8c0);
LAB_00448d60:
    do {
      uVar2 = *(uint *)(in_ECX + 0x8c0);
      if ((uVar2 & 0xffffff) == 0xffffff) {
        iVar5 = (uVar2 & 0xff000000) + 0x800;
      }
      else {
        iVar5 = uVar2 + 1;
      }
      *(int *)(in_ECX + 0x8c0) = iVar5;
      iVar6 = (**(code **)(PTR_PTR_00b0613c + 4))(iVar5);
      for (puVar3 = *(undefined4 **)(DAT_00b06144 + iVar6 * 4); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
        cVar4 = (**(code **)(PTR_PTR_00b0613c + 8))(iVar5,puVar3[1]);
        if (cVar4 != '\0') goto LAB_00448d60;
      }
      cVar4 = FUN_00453450(*(undefined4 *)(in_ECX + 0x8c0));
    } while (cVar4 != '\0');
    cVar4 = FUN_0055e000(uVar1,auStack_4);
    if ((cVar4 == '\0') && (cVar4 = FUN_00453450(uVar1), cVar4 == '\0')) {
      return uVar1;
    }
  } while( true );
}



void FUN_00448e20(LPCSTR param_1)

{
  HANDLE hFile;
  DWORD nNumberOfBytesToRead;
  LPVOID lpBuffer;
  uint uVar1;
  DWORD local_4;
  
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000001,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    nNumberOfBytesToRead = GetFileSize(hFile,(LPDWORD)0x0);
    if (nNumberOfBytesToRead != 0) {
      lpBuffer = (LPVOID)FUN_00401f00(nNumberOfBytesToRead);
      ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,&local_4,(LPOVERLAPPED)0x0);
      if ((local_4 == nNumberOfBytesToRead) && (0xf < nNumberOfBytesToRead)) {
        uVar1 = 0;
        if (nNumberOfBytesToRead != 0xf) {
          while (((((*(char *)(uVar1 + (int)lpBuffer) != 'N' ||
                    (*(char *)(uVar1 + 1 + (int)lpBuffer) != 'i')) ||
                   (*(char *)(uVar1 + 2 + (int)lpBuffer) != 'R')) ||
                  ((((*(char *)(uVar1 + 3 + (int)lpBuffer) != 'a' ||
                     (*(char *)(uVar1 + 4 + (int)lpBuffer) != 'w')) ||
                    ((*(char *)(uVar1 + 5 + (int)lpBuffer) != 'I' ||
                     ((*(char *)(uVar1 + 6 + (int)lpBuffer) != 'm' ||
                      (*(char *)(uVar1 + 7 + (int)lpBuffer) != 'a')))))) ||
                   (*(char *)(uVar1 + 8 + (int)lpBuffer) != 'g')))) ||
                 ((((*(char *)(uVar1 + 9 + (int)lpBuffer) != 'e' ||
                    (*(char *)(uVar1 + 10 + (int)lpBuffer) != 'D')) ||
                   (*(char *)(uVar1 + 0xb + (int)lpBuffer) != 'a')) ||
                  ((*(char *)(uVar1 + 0xc + (int)lpBuffer) != 't' ||
                   (*(char *)(uVar1 + 0xd + (int)lpBuffer) != 'a'))))))) {
            uVar1 = uVar1 + 1;
            if (nNumberOfBytesToRead - 0xf <= uVar1) {
              CloseHandle(hFile);
              return;
            }
          }
          FUN_004a7a60("Export \"%s\" again without textures embedded.\r\n",param_1);
        }
      }
    }
    CloseHandle(hFile);
  }
  return;
}



void FUN_00448f40(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0xcdc) == 0) {
    iVar2 = FUN_00401f00(0x10);
    local_4 = 0;
    if (iVar2 == 0) {
      local_4 = 0xffffffff;
      *(undefined4 *)(in_ECX + 0xcdc) = 0;
    }
    else {
      uVar3 = FUN_00485d50(0);
      local_4 = 0xffffffff;
      *(undefined4 *)(in_ECX + 0xcdc) = uVar3;
    }
  }
  else {
    FUN_0048f180(uVar1);
  }
  FUN_0041e6f0();
  FUN_0048e9a0(*(undefined4 *)(in_ECX + 0xcdc),param_1,0);
  iVar2 = FUN_00420680();
  if (iVar2 != 0) {
    iVar4 = FUN_0041e6f0();
    if (iVar4 != 0) {
      FUN_0048e740(iVar2);
      FUN_0048e9a0(*(undefined4 *)(in_ECX + 0xcdc),iVar2,0);
    }
  }
  iVar2 = FUN_006ecc80();
  if (iVar2 != 0) {
    FUN_004cb2b0(param_1,*(undefined4 *)(in_ECX + 0xcdc));
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00449040(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  for (piVar2 = (int *)(in_ECX + 0xb4); (piVar2 != (int *)0x0 && (iVar1 = *piVar2, iVar1 != 0));
      piVar2 = (int *)piVar2[1]) {
    if (*(int *)(iVar1 + 0x30) == param_1) {
      if (param_2 == 0) {
        return iVar1;
      }
      param_2 = param_2 + -1;
    }
  }
  return 0;
}



uint FUN_00449070(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = *(uint *)(in_ECX + 0xc);
  uVar2 = 0;
  if (uVar1 != 0) {
    piVar3 = *(int **)(in_ECX + 4);
    do {
      if (*piVar3 == 0) {
        (*(int **)(in_ECX + 4))[uVar2] = *param_1;
        *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < uVar1);
  }
  if (*(uint *)(in_ECX + 8) <= uVar1) {
    FUN_00452910(*(int *)(in_ECX + 0x14) + uVar1);
  }
  if (uVar1 < *(uint *)(in_ECX + 0xc)) {
    if (*param_1 == 0) {
      if (*(int *)(*(int *)(in_ECX + 4) + uVar1 * 4) != 0) {
        *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + uVar1 * 4) == 0) {
      *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
      *(int *)(*(int *)(in_ECX + 4) + uVar1 * 4) = *param_1;
      return uVar1;
    }
  }
  else {
    *(uint *)(in_ECX + 0xc) = uVar1 + 1;
    if (*param_1 != 0) {
      *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
      *(int *)(*(int *)(in_ECX + 4) + uVar1 * 4) = *param_1;
      return uVar1;
    }
  }
  *(int *)(*(int *)(in_ECX + 4) + uVar1 * 4) = *param_1;
  return uVar1;
}



void FUN_00449140(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a37abc;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00449160(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a37abc;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint FUN_00449190(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int in_ECX;
  
  if (*(ushort *)(in_ECX + 8) == 0xffff) {
    pcVar3 = *(char **)(in_ECX + 4);
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    return (int)pcVar3 - (int)pcVar1;
  }
  return (uint)*(ushort *)(in_ECX + 8);
}



undefined4 FUN_004491b0(void)

{
  int *in_ECX;
  
  if ((((int *)*in_ECX)[1] == 0) && (*(int *)*in_ECX == 0)) {
    return 1;
  }
  return 0;
}



void FUN_004491d0(void)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ad966;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = in_ECX[0x337];
  local_4 = 1;
  if (iVar1 != 0) {
    FUN_004894d0(uVar2);
    FUN_00401f20(iVar1);
  }
  FUN_00451100(in_ECX + 0x232);
  iVar1 = *in_ECX;
  if (iVar1 != 0) {
    thunk_FUN_004b2410();
    FUN_00401f20(iVar1);
  }
  if ((undefined4 *)in_ECX[0x2f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x2f])(1);
  }
  FUN_00401f20(in_ECX[0x336]);
  iVar1 = DAT_00b362c0;
  if (DAT_00b362c0 != 0) {
    FUN_005219b0();
    FUN_00401f20(iVar1);
  }
  DAT_00b362c0 = 0;
  FUN_007c2a40();
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(in_ECX + 0x36,0x60,0x15,FUN_0052e660);
  in_ECX[0x30] = (int)&PTR__scalar_deleting_destructor__00a37ab4;
  FUN_00401f20(in_ECX[0x31]);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004492e0(void)

{
  byte bVar1;
  int *piVar2;
  undefined *puVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  int in_ECX;
  undefined4 *puVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  
  *(undefined1 *)(in_ECX + 0xcd4) = 1;
  FUN_00447d00();
  uVar6 = 0;
  if (DAT_00b06158 != 0) {
    do {
      *(undefined4 *)(DAT_00b06150 + uVar6 * 4) = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < DAT_00b06158);
  }
  DAT_00b06158 = 0;
  _DAT_00b0615c = 0;
  FUN_00442630(0,0);
  *(undefined4 *)(DAT_00b333a0 + 0x74) = 0;
  iVar11 = 0;
  piVar7 = (int *)(in_ECX + 0x104);
  do {
    FUN_0052eaf0();
    *piVar7 = iVar11 + 0xc;
    iVar11 = iVar11 + 1;
    piVar7 = piVar7 + 0x18;
  } while (iVar11 < 0x15);
  piVar7 = *(int **)(in_ECX + 100);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0x68);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 100) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x68) = puVar9[1];
      *(undefined4 *)(in_ECX + 100) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 100);
  }
  piVar7 = *(int **)(in_ECX + 0x34);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0x38);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x34) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x38) = puVar9[1];
      *(undefined4 *)(in_ECX + 0x34) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0x34);
  }
  piVar7 = *(int **)(in_ECX + 0x3c);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0x40);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x3c) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x40) = puVar9[1];
      *(undefined4 *)(in_ECX + 0x3c) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0x3c);
  }
  piVar7 = *(int **)(in_ECX + 0x8c);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0x90);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x8c) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x90) = puVar9[1];
      *(undefined4 *)(in_ECX + 0x8c) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0x8c);
  }
  piVar7 = *(int **)(in_ECX + 0x14);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0x18);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x14) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x18) = puVar9[1];
      *(undefined4 *)(in_ECX + 0x14) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0x14);
  }
  piVar7 = *(int **)(in_ECX + 0x1c);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0x20);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x1c) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x20) = puVar9[1];
      *(undefined4 *)(in_ECX + 0x1c) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0x1c);
  }
  piVar7 = *(int **)(in_ECX + 0x54);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0x58);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x54) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x58) = puVar9[1];
      *(undefined4 *)(in_ECX + 0x54) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0x54);
  }
  piVar7 = *(int **)(in_ECX + 0x5c);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0x60);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x5c) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x60) = puVar9[1];
      *(undefined4 *)(in_ECX + 0x5c) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0x5c);
  }
  piVar7 = *(int **)(in_ECX + 0x74);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0x78);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x74) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x78) = puVar9[1];
      *(undefined4 *)(in_ECX + 0x74) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0x74);
  }
  piVar7 = *(int **)(in_ECX + 0x84);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0x88);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x84) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x88) = puVar9[1];
      *(undefined4 *)(in_ECX + 0x84) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0x84);
  }
  piVar7 = *(int **)(in_ECX + 0x7c);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0x80);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x7c) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x80) = puVar9[1];
      *(undefined4 *)(in_ECX + 0x7c) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0x7c);
  }
  FUN_0052ed10();
  *(undefined4 *)(DAT_00b333a0 + 0x30) = 0;
  iVar11 = *(int *)(in_ECX + 0xcc);
  iVar12 = 0;
  if (0 < iVar11) {
    do {
      piVar7 = *(int **)(*(int *)(in_ECX + 0xc4) + iVar12 * 4);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x10))(1);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar11);
  }
  if (*(int *)(in_ECX + 200) != 0) {
    if (*(int *)(in_ECX + 0xcc) != 0) {
      uVar6 = 0;
      do {
        if (*(int *)(*(int *)(in_ECX + 0xc4) + uVar6 * 4) != 0) {
          *(undefined4 *)(*(int *)(in_ECX + 0xc4) + uVar6 * 4) = 0;
          *(int *)(in_ECX + 0xd0) = *(int *)(in_ECX + 0xd0) + -1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(in_ECX + 0xcc));
      *(undefined4 *)(in_ECX + 0xcc) = 0;
    }
    uVar8 = *(undefined4 *)(in_ECX + 0xc4);
    *(undefined4 *)(in_ECX + 200) = 0;
    *(undefined4 *)(in_ECX + 0xc4) = 0;
    FUN_00401f20(uVar8);
  }
  piVar7 = *(int **)(in_ECX + 0xc);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0x10);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0xc) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x10) = puVar9[1];
      *(undefined4 *)(in_ECX + 0xc) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0xc);
  }
  piVar7 = *(int **)(in_ECX + 0x6c);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0x70);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x6c) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x70) = puVar9[1];
      *(undefined4 *)(in_ECX + 0x6c) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0x6c);
  }
  piVar7 = *(int **)(in_ECX + 0x4c);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0x50);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x4c) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x50) = puVar9[1];
      *(undefined4 *)(in_ECX + 0x4c) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0x4c);
  }
  if (DAT_00b333c4 != (int *)0x0) {
    (**(code **)(*DAT_00b333c4 + 0x10))(1);
  }
  DAT_00b333c4 = (int *)0x0;
  piVar7 = *(int **)(in_ECX + 0x44);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0x48);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x44) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x48) = puVar9[1];
      *(undefined4 *)(in_ECX + 0x44) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0x44);
  }
  DAT_00b36308 = 0;
  FUN_004b2410();
  piVar7 = *(int **)(in_ECX + 0x2c);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0x30);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x2c) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x30) = puVar9[1];
      *(undefined4 *)(in_ECX + 0x2c) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0x2c);
  }
  piVar7 = *(int **)(in_ECX + 0x24);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0x28);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x24) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x28) = puVar9[1];
      *(undefined4 *)(in_ECX + 0x24) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0x24);
  }
  piVar7 = *(int **)(in_ECX + 4);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 8);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 8) = puVar9[1];
      *(undefined4 *)(in_ECX + 4) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 4);
  }
  piVar7 = *(int **)(in_ECX + 0x94);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0x98);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x94) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x98) = puVar9[1];
      *(undefined4 *)(in_ECX + 0x94) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0x94);
  }
  piVar7 = *(int **)(in_ECX + 0x9c);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0xa0);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x9c) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0xa0) = puVar9[1];
      *(undefined4 *)(in_ECX + 0x9c) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0x9c);
  }
  piVar7 = *(int **)(in_ECX + 0xa4);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0xa8);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0xa4) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0xa8) = puVar9[1];
      *(undefined4 *)(in_ECX + 0xa4) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0xa4);
  }
  DAT_00b360ac = 0;
  piVar7 = *(int **)(in_ECX + 0xb4);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0xb8);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0xb4) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0xb8) = puVar9[1];
      *(undefined4 *)(in_ECX + 0xb4) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0xb4);
  }
  piVar7 = *(int **)(in_ECX + 0xac);
  while (piVar7 != (int *)0x0) {
    puVar9 = *(undefined4 **)(in_ECX + 0xb0);
    if (puVar9 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0xac) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0xb0) = puVar9[1];
      *(undefined4 *)(in_ECX + 0xac) = *puVar9;
      FUN_00401f20(puVar9);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x10))(1);
    }
    piVar7 = *(int **)(in_ECX + 0xac);
  }
  FUN_004a6380();
  if (DAT_00b34428 != (int *)0x0) {
    (**(code **)(*DAT_00b34428 + 0x10))(1);
  }
  DAT_00b34428 = (int *)0x0;
  if ((DAT_00b33398 == 0) || (*(char *)(DAT_00b33398 + 4) == '\0')) {
    FUN_005217e0();
  }
  else {
    FUN_005210a0();
  }
  uVar5 = DAT_00b06b18;
  uVar6 = 0;
  DAT_00b06b18 = 1;
  bVar4 = false;
  if (DAT_00b06140 != 0) {
    do {
      if (*(int *)(DAT_00b06144 + uVar6 * 4) != 0) {
        piVar7 = *(int **)(DAT_00b06144 + uVar6 * 4);
        goto joined_r0x00449ad8;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < DAT_00b06140);
  }
  piVar7 = (int *)0x0;
joined_r0x00449ad8:
  do {
    if (piVar7 == (int *)0x0) {
      DAT_00b06b18 = uVar5;
      if (bVar4) {
        FUN_004a7a60("Forms were leaked during ClearData. Check Warnings file for more info.");
      }
      uVar6 = 0;
      if (*(int *)(in_ECX + 0x8d0) != 0) {
        puVar9 = (undefined4 *)(in_ECX + 0x8d4);
        do {
          *puVar9 = 0;
          uVar6 = uVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar6 < *(uint *)(in_ECX + 0x8d0));
      }
      *(undefined4 *)(in_ECX + 0x8d0) = 0;
      if ((*(char *)(in_ECX + 0xcd1) == '\0') && (*(int *)(in_ECX + 0x8c4) != 0)) {
        if (*(char *)(in_ECX + 0xcd0) == '\0') {
          FUN_0044fb00(0);
        }
        iVar11 = *(int *)(in_ECX + 0x8c4);
        if (iVar11 != 0) {
          FUN_00450ae0();
          FUN_00401f20(iVar11);
        }
        *(undefined4 *)(in_ECX + 0x8c4) = 0;
        *(undefined4 *)(in_ECX + 0x8c0) = 0x800;
      }
      DAT_00b35ea4 = 0;
      DAT_00b35ea8 = 0;
      DAT_00b35eac = 0;
      DAT_00b35eb0 = 0;
      DAT_00b35eb4 = 0;
      DAT_00b35eb8 = 0;
      DAT_00b35ebc = 0;
      DAT_00b35ec0 = 0;
      DAT_00b35ec4 = 0;
      DAT_00b35ec8 = 0;
      DAT_00b35ecc = 0;
      DAT_00b35ed0 = 0;
      DAT_00b35ed4 = 0;
      DAT_00b35ed8 = 0;
      DAT_00b35ee0 = 0;
      DAT_00b35ee4 = 0;
      DAT_00b35edc = 0;
      *(undefined1 *)(in_ECX + 0xcd4) = 0;
      return 1;
    }
    iVar11 = piVar7[1];
    piVar2 = (int *)piVar7[2];
    piVar7 = (int *)*piVar7;
    if (piVar7 == (int *)0x0) {
      uVar6 = (**(code **)(PTR_PTR_00b0613c + 4))(iVar11);
      do {
        uVar6 = uVar6 + 1;
        if (DAT_00b06140 <= uVar6) {
          piVar7 = (int *)0x0;
          break;
        }
        piVar7 = *(int **)(DAT_00b06144 + uVar6 * 4);
      } while (piVar7 == (int *)0x0);
    }
    if (piVar2 != (int *)0x0) {
      bVar1 = *(byte *)(piVar2 + 1);
      if (bVar1 == 3) {
        if (piVar2 + 4 != (int *)0x0) {
          iVar11 = piVar2[5];
          while (iVar11 != 0) {
            iVar11 = *(int *)(piVar2[5] + 4);
            FUN_00401f20(piVar2[5]);
            piVar2[5] = iVar11;
          }
          piVar2[4] = 0;
        }
        FUN_0046c300(0,1);
      }
      else if ((bVar1 < 0xb) || (0xc < bVar1)) {
        iVar12 = FUN_0046b680(0xffffffff);
        if (iVar12 == 0) {
          pcVar10 = "UNKNOWN";
        }
        else {
          iVar12 = FUN_0046b680(0xffffffff);
          pcVar10 = (char *)(iVar12 + 0x1c);
        }
        iVar12 = piVar2[3];
        puVar3 = (&PTR_DAT_00b05e04)[(uint)*(byte *)(piVar2 + 1) * 3];
        uVar8 = (**(code **)(*piVar2 + 0xd4))();
        FUN_004a7a60("Form \'%s\' (%08X) of type %s in file \'%s\' was not freed.",uVar8,iVar12,
                     puVar3,pcVar10);
        FUN_00452570(iVar11,0);
        bVar4 = true;
      }
    }
  } while( true );
}



void FUN_00449d20(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  
  if (param_1 != 0) {
    switch(*(undefined1 *)(param_1 + 4)) {
    case 4:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03db4,0);
      FUN_0065c620(uVar3);
      return;
    case 5:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0535c,0);
      FUN_0065c620(uVar3);
      return;
    case 6:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05374,0);
      FUN_0065c620(uVar3);
      return;
    case 7:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05434,0);
      FUN_0065c620(uVar3);
      return;
    case 8:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0541c,0);
      FUN_0065c620(uVar3);
      return;
    case 9:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0532c,0);
      FUN_0065c620(uVar3);
      return;
    case 10:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03500,0);
      FUN_0065c620(uVar3);
      return;
    default:
      iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03268,0);
      if (iVar4 != 0) {
        FUN_004b23c0(iVar4);
        FUN_00629260(0);
      }
      break;
    case 0xd:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03358,0);
      FUN_0065c620(uVar3);
      return;
    case 0xe:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0530c,0);
      FUN_0065c620(uVar3);
      return;
    case 0xf:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b033c8,0);
      FUN_0065c620(uVar3);
      return;
    case 0x10:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03800,0);
      FUN_0065c620(uVar3);
      return;
    case 0x11:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05344,0);
      FUN_0065c620(uVar3);
      return;
    case 0x2d:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05400,0);
      FUN_0065c620(uVar3);
      return;
    case 0x2e:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03d98,0);
      FUN_0065c620(uVar3);
      return;
    case 0x30:
      iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
      if (iVar4 != 0) {
        cVar1 = FUN_004c97f0();
        if (cVar1 == '\0') {
          iVar2 = FUN_004477f0(iVar4);
          if (iVar2 != 0) {
            FUN_004effc0(iVar4);
            return;
          }
        }
        else {
          iVar2 = 0;
          if (0 < *(int *)(in_ECX + 0xcc)) {
            piVar5 = *(int **)(in_ECX + 0xc4);
            do {
              if (*piVar5 == iVar4) {
                param_1 = 0;
                FUN_00446c50(iVar2,&param_1);
                FUN_005a56f0();
                return;
              }
              iVar2 = iVar2 + 1;
              piVar5 = piVar5 + 1;
            } while (iVar2 < *(int *)(in_ECX + 0xcc));
            return;
          }
        }
      }
      break;
    case 0x35:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
      FUN_0065c620(uVar3);
      return;
    case 0x39:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05390,0);
      FUN_0065c620(uVar3);
      return;
    case 0x3a:
      iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0544c,0);
      if ((iVar4 != 0) && (iVar4 = FUN_0052f690(iVar4), iVar4 != 0)) {
        FUN_00530590(iVar4);
        return;
      }
      break;
    case 0x3b:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05468,0);
      FUN_0065c620(uVar3);
      return;
    case 0x3d:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03e00,0);
      FUN_0065c620(uVar3);
      return;
    case 0x3e:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b053e0,0);
      FUN_0065c620(uVar3);
      return;
    case 0x3f:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b053c4,0);
      FUN_0065c620(uVar3);
      return;
    case 0x41:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b053a8,0);
      FUN_0065c620(uVar3);
      return;
    case 0x42:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03d7c,0);
      FUN_0065c620(uVar3);
      return;
    case 0x43:
      uVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b034e0,0);
      FUN_0065c620(uVar3);
      return;
    }
  }
  return;
}



void FUN_0044a270(float param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00447740((int)ROUND(param_1) >> 0xc,(int)ROUND(param_2) >> 0xc,param_3,param_4);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044a2b0(LPCSTR param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  LONG LVar6;
  int *piVar7;
  BOOL BVar8;
  HANDLE hFindFile;
  int *piVar9;
  uint uVar10;
  int in_ECX;
  int *piVar11;
  code *pcVar12;
  int *unaff_FS_OFFSET;
  char *pcVar13;
  undefined1 auStack_370 [3];
  char local_36d;
  int *local_36c;
  HANDLE local_368;
  uint local_364;
  LPCSTR local_360;
  int local_35c;
  _WIN32_FIND_DATAA local_358;
  CHAR local_218 [260];
  CHAR local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ad99e;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_370;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffc80;
  *unaff_FS_OFFSET = (int)&local_c;
  local_360 = param_1;
  lstrcpyA(local_114,param_1);
  piVar11 = (int *)(in_ECX + 0x8c8);
  local_36c = piVar11;
  pcVar12 = lstrcatA_exref;
  while (lstrcatA_exref = pcVar12, piVar11 != (int *)0x0) {
    if (*piVar11 == 0) {
      piVar11 = (int *)piVar11[1];
    }
    else {
      iVar4 = FUN_00451a60(uVar3);
      if (iVar4 == 0) {
        piVar11 = (int *)piVar11[1];
        FUN_004507d0();
        pcVar12 = lstrcatA_exref;
      }
      else {
        piVar7 = (int *)piVar11[1];
        if (piVar7 == (int *)0x0) {
          *piVar11 = 0;
          FUN_004507d0();
          pcVar12 = lstrcatA_exref;
        }
        else {
          piVar11[1] = piVar7[1];
          *piVar11 = *piVar7;
          FUN_00401f20(piVar7);
          FUN_004507d0();
          pcVar12 = lstrcatA_exref;
        }
      }
    }
  }
  local_364 = 0;
  do {
    uVar3 = local_364;
    lstrcpyA(local_218,local_114);
    if (uVar3 == 0) {
      pcVar13 = "*.esm";
LAB_0044a3b2:
      (*pcVar12)(local_218,pcVar13);
    }
    else if (uVar3 == 1) {
      pcVar13 = "*.esp";
      goto LAB_0044a3b2;
    }
    local_368 = FindFirstFileA(local_218,&local_358);
    if (local_368 != (HANDLE)0xffffffff) {
      do {
        piVar11 = local_36c;
        if ((local_358.nFileSizeHigh != 0) || (local_358.nFileSizeLow != 0)) {
          while( true ) {
            if ((piVar11 == (int *)0x0) || (iVar4 = *piVar11, iVar4 == 0)) goto LAB_0044a41c;
            iVar5 = __stricmp(local_358.cFileName,(char *)(iVar4 + 0x1c));
            if (iVar5 == 0) break;
            piVar11 = (int *)piVar11[1];
          }
          if (iVar4 != 0) goto LAB_0044a514;
LAB_0044a41c:
          local_35c = FUN_00401f00(0x41c);
          local_4 = 0;
          if (local_35c == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_00451da0(local_360,local_358.cFileName,0);
          }
          local_4 = 0xffffffff;
          FUN_004507d0();
          for (piVar11 = local_36c; (piVar11 != (int *)0x0 && (iVar5 = *piVar11, iVar5 != 0));
              piVar11 = (int *)piVar11[1]) {
            cVar2 = FUN_0044faa0();
            if (((cVar2 == '\0') || (cVar2 = FUN_0044faa0(), cVar2 == '\0')) &&
               ((cVar2 = FUN_0044faa0(), cVar2 != '\0' || (cVar2 = FUN_0044faa0(), cVar2 != '\0'))))
            {
              cVar2 = FUN_0044faa0();
              if (cVar2 != '\0') {
LAB_0044a4bc:
                if (iVar4 == 0) goto LAB_0044a514;
                if (*piVar11 != 0) {
                  piVar7 = (int *)FUN_00401f00(8);
                  if (piVar7 != (int *)0x0) {
                    *piVar7 = *piVar11;
                    piVar7[1] = 0;
                    piVar7[1] = piVar11[1];
                    piVar11[1] = (int)piVar7;
                    *piVar11 = iVar4;
                    goto LAB_0044a514;
                  }
                  _DAT_00000004 = piVar11[1];
                  piVar11[1] = 0;
                }
                *piVar11 = iVar4;
                goto LAB_0044a514;
              }
            }
            else {
              LVar6 = CompareFileTime((FILETIME *)(iVar5 + 0x2a4),&local_358.ftLastWriteTime);
              if (-1 < LVar6) goto LAB_0044a4bc;
            }
          }
          FUN_0067b1e0(iVar4);
        }
LAB_0044a514:
        BVar8 = FindNextFileA(local_368,&local_358);
      } while (BVar8 != 0);
      FindClose(local_368);
      uVar3 = local_364;
      pcVar12 = lstrcatA_exref;
    }
    local_364 = uVar3 + 1;
  } while (local_364 < 2);
  piVar7 = (int *)0x0;
  piVar11 = local_36c;
  while ((piVar1 = local_36c, piVar9 = local_36c, piVar11 != (int *)0x0 &&
         (iVar4 = *piVar11, iVar4 != 0))) {
    lstrcpyA(local_218,(LPCSTR)(iVar4 + 0x120));
    lstrcatA(local_218,(LPCSTR)(iVar4 + 0x1c));
    hFindFile = FindFirstFileA(local_218,&local_358);
    if (hFindFile == (HANDLE)0xffffffff) {
      piVar1 = (int *)piVar11[1];
      if (piVar1 == (int *)0x0) {
        if (piVar7 == (int *)0x0) {
          *piVar11 = 0;
        }
        else {
          FUN_0065c620(iVar4);
          piVar11 = (int *)piVar7[1];
        }
      }
      else {
        piVar11[1] = piVar1[1];
        *piVar11 = *piVar1;
        FUN_00401f20(piVar1);
      }
      if (iVar4 != 0) {
        FUN_00450ae0();
        FUN_00401f20(iVar4);
      }
    }
    else {
      piVar1 = (int *)piVar11[1];
      FindClose(hFindFile);
      piVar7 = piVar11;
      piVar11 = piVar1;
    }
  }
  do {
    piVar11 = piVar9;
    local_36c = piVar9;
    if ((piVar1 == (int *)0x0) || ((piVar1[1] == 0 && (*piVar1 == 0)))) {
      for (; (piVar11 != (int *)0x0 && ((piVar11[1] != 0 || (*piVar11 != 0))));
          piVar11 = (int *)piVar11[1]) {
        FUN_0044fc70(piVar9,0);
      }
      for (; (piVar9 != (int *)0x0 && (*piVar9 != 0)); piVar9 = (int *)piVar9[1]) {
        FUN_004507d0();
      }
      *unaff_FS_OFFSET = local_c;
      return 1;
    }
    local_36d = '\0';
    cVar2 = FUN_0044faa0();
    if (cVar2 == '\0') goto LAB_0044a6ce;
    FUN_0044fc70(local_36c,0);
    uVar3 = 0;
    iVar4 = FUN_0044fdd0();
    if (iVar4 == 0) goto LAB_0044a6ce;
    do {
      uVar3 = uVar3 + 1;
      piVar9 = (int *)FUN_0044fd60(uVar3);
      piVar11 = piVar1;
      piVar7 = piVar9;
      while (piVar7 != (int *)0x0) {
        if ((int *)*piVar11 == piVar9) {
          FUN_0065c620(piVar9);
          if (*piVar1 != 0) {
            piVar11 = (int *)FUN_00401f00(8);
            if (piVar11 == (int *)0x0) {
              piVar11 = (int *)0x0;
            }
            else {
              *piVar11 = *piVar1;
              piVar11[1] = 0;
            }
            piVar11[1] = piVar1[1];
            piVar1[1] = (int)piVar11;
          }
          *piVar1 = (int)piVar9;
          local_36d = '\x01';
          break;
        }
        piVar11 = (int *)piVar11[1];
        piVar7 = piVar11;
      }
      uVar10 = FUN_0044fdd0();
    } while (uVar3 < uVar10);
    piVar9 = local_36c;
    if (local_36d == '\0') {
LAB_0044a6ce:
      piVar1 = (int *)piVar1[1];
      piVar9 = local_36c;
    }
  } while( true );
}



int FUN_0044a750(int param_1)

{
  char cVar1;
  int iVar2;
  uchar *_Str1;
  int iVar3;
  uchar *_Str2;
  
  iVar2 = FUN_004b2460();
  do {
    if (iVar2 == 0) {
      return 0;
    }
    if ((*(char *)(iVar2 + 4) == '(') && ((*(uint *)(iVar2 + 8) >> 5 & 1) == 0)) {
      if (param_1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_1 + 0x30;
      }
      cVar1 = FUN_00414a70(iVar3);
      if (cVar1 == '\0') {
        _Str2 = *(uchar **)(param_1 + 0x28);
        if (_Str2 == (uchar *)0x0) {
          _Str2 = "";
        }
        _Str1 = *(uchar **)(iVar2 + 0x28);
        if (_Str1 == (uchar *)0x0) {
          _Str1 = "";
        }
        iVar3 = __mbscmp(_Str1,_Str2);
        if (iVar3 == 0) {
          return iVar2;
        }
      }
    }
    iVar2 = FUN_004b2360();
  } while( true );
}



int * FUN_0044a7d0(int param_1,float *param_2,undefined4 *param_3,int param_4,int param_5,
                  int *param_6)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *unaff_FS_OFFSET;
  undefined1 auStack_30 [36];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ad9fc;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar9 = (int *)0x0;
  if (param_4 != 0) {
    cVar1 = FUN_004c97f0(uVar3);
    if (cVar1 == '\0') {
      param_4 = 0;
    }
    else {
      param_5 = 0;
    }
  }
  if ((param_1 == 0) || ((param_4 == 0 && (param_5 == 0)))) goto LAB_0044abbf;
  if (param_6 == (int *)0x0) {
    if (*(char *)(param_1 + 4) == '#') {
      iVar4 = FUN_00401f00(0x10c);
      local_4 = 0;
      if (iVar4 == 0) goto LAB_0044a90c;
      piVar9 = (int *)FUN_0060e4f0();
    }
    else if (*(char *)(param_1 + 4) == '$') {
      iVar4 = FUN_00401f00(0x108);
      local_4 = 1;
      if (iVar4 == 0) goto LAB_0044a90c;
      piVar9 = (int *)FUN_006250a0();
    }
    else {
      iVar4 = FUN_00401f00(0x58);
      local_4 = 2;
      if (iVar4 == 0) {
LAB_0044a90c:
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)FUN_004d9a70();
      }
    }
    local_4 = 0xffffffff;
    FUN_006c5420(param_1);
    cVar1 = FUN_004d6fa0();
    if (cVar1 != '\0') {
      FUN_004d6fe0(1);
    }
    uVar2 = FUN_004db3c0();
    iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b03248,&PTR_PTR_00b03518,0);
    if (iVar4 != 0) {
      FUN_0046ab60(*(uint *)(iVar4 + 0x7c) >> 5 & 0xffffff01);
    }
  }
  else {
    uVar2 = FUN_004db4a0();
    FUN_004d7040(0);
    iVar4 = FUN_006ecc80();
    if (iVar4 != 0) {
      FUN_004cecd0(param_6);
    }
    iVar4 = (**(code **)(*param_6 + 0x170))();
    if (iVar4 == 0) {
      FUN_006c5420(param_1);
    }
    cVar1 = FUN_004db3c0();
    piVar9 = param_6;
    if (cVar1 != '\0') {
      uVar2 = 1;
    }
  }
  if (0xfeffffff < (uint)piVar9[3]) {
    (**(code **)(*piVar9 + 0x48))(2);
  }
  FUN_004d8a30(*param_2,param_2[1],param_2[2]);
  FUN_004d89a0(*param_3,param_3[1],param_3[2]);
  if (param_5 != 0) {
    param_4 = FUN_004efe80((int)ROUND(*param_2) >> 0xc,(int)ROUND(param_2[1]) >> 0xc);
  }
  if (param_4 == 0) {
    (**(code **)(*piVar9 + 0x150))();
    FUN_004d7040(1);
    FUN_004f03a0(piVar9);
    iVar4 = FUN_004d6d40();
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_00485e00(piVar9,iVar4);
      FUN_00488420();
      FUN_0048e060();
      if ((((int *)*piVar5)[1] == 0) && (*(int *)*piVar5 == 0)) {
        FUN_0041f5f0();
      }
    }
  }
  else {
    cVar1 = FUN_0043f8c0(param_4,0);
    if ((cVar1 != '\0') &&
       ((((param_1 == DAT_00b35ea4 || (param_1 == DAT_00b35eb4)) || (param_1 == DAT_00b35eac)) ||
        ((param_1 == DAT_00b35eb0 || (param_1 == DAT_00b35ea8)))))) {
      iVar4 = FUN_00401f00(0xdc);
      local_4 = 3;
      if (iVar4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_0070b780(0);
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar9 + 0x150))(uVar6);
    }
    iVar4 = FUN_004d6d40();
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_00485e00(piVar9,iVar4);
      FUN_00488420();
      FUN_0048e060();
      if ((((int *)*piVar5)[1] == 0) && (*(int *)*piVar5 == 0)) {
        FUN_0041f5f0();
      }
    }
    FUN_004d6f00(1);
    FUN_004d35d0(piVar9);
    FUN_004d7040(uVar2);
    iVar4 = (**(code **)(*piVar9 + 0x154))();
    if (iVar4 != 0) {
      puVar7 = (undefined4 *)(**(code **)(*piVar9 + 0x174))();
      *(undefined4 *)(iVar4 + 0x54) = *puVar7;
      *(undefined4 *)(iVar4 + 0x58) = puVar7[1];
      *(undefined4 *)(iVar4 + 0x5c) = puVar7[2];
      puVar7 = (undefined4 *)FUN_004d7af0(auStack_30);
      puVar10 = (undefined4 *)(iVar4 + 0x30);
      for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      }
      FUN_00897a20(iVar4,1);
      FUN_007b4280(0,iVar4);
      FUN_007c5d00(iVar4);
      FUN_00707610();
      FUN_00707980();
      FUN_00707370(0,0);
    }
  }
LAB_0044abbf:
  piVar5 = (int *)FUN_009832e6(piVar9,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if (piVar5 != (int *)0x0) {
    cVar1 = FUN_005e0260();
    if (cVar1 == '\0') {
      (**(code **)(*piVar5 + 0x37c))();
    }
    if (param_6 == (int *)0x0) {
      piVar5[2] = piVar5[2] & 0xffdfffff;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return piVar9;
}



void FUN_0044ac20(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int in_ECX;
  undefined4 uVar9;
  int *unaff_FS_OFFSET;
  undefined4 uVar10;
  uint local_b4;
  int iStack_b0;
  int aiStack_ac [20];
  char *apcStack_5c [4];
  char *pcStack_4c;
  char *pcStack_48;
  char *pcStack_44;
  char *pcStack_40;
  char *pcStack_3c;
  char *pcStack_38;
  char *pcStack_34;
  char *pcStack_30;
  char *pcStack_2c;
  char *pcStack_28;
  char *pcStack_24;
  char *pcStack_20;
  char *pcStack_1c;
  char *pcStack_18;
  char *pcStack_14;
  char *pcStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009adc42;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff3c;
  *unaff_FS_OFFSET = (int)&local_c;
  DAT_00b35ea4 = (int *)0x0;
  DAT_00b35eac = (int *)0x0;
  DAT_00b35eb0 = (int *)0x0;
  DAT_00b35ea8 = (int *)0x0;
  DAT_00b35eb8 = (int *)0x0;
  DAT_00b35ebc = (int *)0x0;
  DAT_00b35ec0 = (int *)0x0;
  DAT_00b35ec4 = (int *)0x0;
  DAT_00b35eb4 = (int *)0x0;
  DAT_00b36298 = (int *)0x0;
  DAT_00b35ec8 = (int *)0x0;
  DAT_00b35ecc = (int *)0x0;
  DAT_00b35ed0 = (int *)0x0;
  DAT_00b35ed4 = (int *)0x0;
  DAT_00b35ed8 = (int *)0x0;
  DAT_00b35ee0 = (int *)0x0;
  DAT_00b35ee4 = (int *)0x0;
  DAT_00b360ac = (int *)0x0;
  DAT_00b36308 = (int *)0x0;
  DAT_00b35edc = (int *)0x0;
  DAT_00b362bc = (int *)0x0;
  local_b4 = 0;
  cVar2 = FUN_0055e000(0x1a,&local_b4);
  DAT_00b362bc = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b0541c,0,uVar3);
  if (DAT_00b362bc == (int *)0x0) {
    local_b4 = FUN_00401f00(0x34);
    local_4 = 0;
    if (local_b4 == 0) {
      DAT_00b362bc = (int *)0x0;
    }
    else {
      DAT_00b362bc = (int *)FUN_0051efd0();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x1a,1);
    (**(code **)(*DAT_00b362bc + 0xd8))("eyeReanimate");
    FUN_004028d0("Reanimate Eyes",0);
    FUN_00446cb0(DAT_00b362bc);
    (**(code **)(*DAT_00b362bc + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0x19,&local_b4);
  DAT_00b36308 = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b0532c,0,uVar3);
  if (DAT_00b36308 == (int *)0x0) {
    local_b4 = FUN_00401f00(0x318);
    local_4 = 1;
    if (local_b4 == 0) {
      DAT_00b36308 = (int *)0x0;
    }
    else {
      DAT_00b36308 = (int *)FUN_0052d100();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x19,1);
    (**(code **)(*DAT_00b36308 + 0xd8))("VampireRace");
    FUN_00446cb0(DAT_00b36308);
    (**(code **)(*DAT_00b36308 + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0x18,&local_b4);
  DAT_00b360ac = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b03d7c,0);
  if (DAT_00b360ac == (int *)0x0) {
    local_b4 = FUN_00401f00(0xac);
    local_4 = 2;
    if (local_b4 == 0) {
      DAT_00b360ac = (int *)0x0;
    }
    else {
      DAT_00b360ac = (int *)FUN_004ede40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x18,1);
    (**(code **)(*DAT_00b360ac + 0xd8))("DefaultWater");
    FUN_004edda0("Water\\water00.dds");
    FUN_00446cb0(DAT_00b360ac);
    (**(code **)(*DAT_00b360ac + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0x12,&local_b4);
  DAT_00b35ed4 = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b054d4,0);
  if (DAT_00b35ed4 == (int *)0x0) {
    local_b4 = FUN_00401f00(0x3c);
    local_4 = 3;
    if (local_b4 == 0) {
      DAT_00b35ed4 = (int *)0x0;
    }
    else {
      DAT_00b35ed4 = (int *)FUN_004b9aa0();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x12,1);
    (**(code **)(*DAT_00b35ed4 + 0xd8))("HorseMarker");
    (**(code **)(DAT_00b35ed4[9] + 0x18))("Marker_Horse.nif");
    FUN_004b2b80(DAT_00b35ed4);
    (**(code **)(*DAT_00b35ed4 + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0x194,&local_b4);
  DAT_00b35edc = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b054b8,0);
  if (DAT_00b35edc == (int *)0x0) {
    local_b4 = FUN_00401f00(0x70);
    local_4 = 4;
    if (local_b4 == 0) {
      DAT_00b35edc = (int *)0x0;
    }
    else {
      DAT_00b35edc = (int *)FUN_004b9860();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x194,1);
    (**(code **)(*DAT_00b35edc + 0xd8))("VarlaStone");
    FUN_004b2b80(DAT_00b35edc);
    (**(code **)(*DAT_00b35edc + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0x191,&local_b4);
  DAT_00b35ed8 = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b054b8,0);
  if (DAT_00b35ed8 == (int *)0x0) {
    local_b4 = FUN_00401f00(0x70);
    local_4 = 5;
    if (local_b4 == 0) {
      DAT_00b35ed8 = (int *)0x0;
    }
    else {
      DAT_00b35ed8 = (int *)FUN_004b9860();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x191,1);
    (**(code **)(*DAT_00b35ed8 + 0xd8))("WelkyndStone");
    FUN_004b2b80(DAT_00b35ed8);
    (**(code **)(*DAT_00b35ed8 + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0x192,&local_b4);
  DAT_00b35ee0 = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b0549c,0);
  if (DAT_00b35ee0 == (int *)0x0) {
    local_b4 = FUN_00401f00(0x74);
    local_4 = 6;
    if (local_b4 == 0) {
      DAT_00b35ee0 = (int *)0x0;
    }
    else {
      DAT_00b35ee0 = (int *)FUN_004bbd10();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x192,1);
    (**(code **)(*DAT_00b35ee0 + 0xd8))("BlackSoulGem");
    FUN_004b2b80(DAT_00b35ee0);
    (**(code **)(*DAT_00b35ee0 + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0x193,&local_b4);
  DAT_00b35ee4 = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b0549c,0);
  if (DAT_00b35ee4 == (int *)0x0) {
    local_b4 = FUN_00401f00(0x74);
    local_4 = 7;
    if (local_b4 == 0) {
      DAT_00b35ee4 = (int *)0x0;
    }
    else {
      DAT_00b35ee4 = (int *)FUN_004bbd10();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x193,1);
    (**(code **)(*DAT_00b35ee4 + 0xd8))("AzuraStone");
    FUN_004b2b80(DAT_00b35ee4);
    (**(code **)(*DAT_00b35ee4 + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(10,&local_b4);
  DAT_00b35ec8 = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b054b8,0);
  if (DAT_00b35ec8 == (int *)0x0) {
    local_b4 = FUN_00401f00(0x70);
    local_4 = 8;
    if (local_b4 == 0) {
      DAT_00b35ec8 = (int *)0x0;
    }
    else {
      DAT_00b35ec8 = (int *)FUN_004b9860();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(10,1);
    (**(code **)(*DAT_00b35ec8 + 0xd8))("Lockpick");
    FUN_004b2b80(DAT_00b35ec8);
    (**(code **)(*DAT_00b35ec8 + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0xb,&local_b4);
  DAT_00b35ecc = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b054b8,0);
  if (DAT_00b35ecc == (int *)0x0) {
    local_b4 = FUN_00401f00(0x70);
    local_4 = 9;
    if (local_b4 == 0) {
      DAT_00b35ecc = (int *)0x0;
    }
    else {
      DAT_00b35ecc = (int *)FUN_004b9860();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0xb,1);
    (**(code **)(*DAT_00b35ecc + 0xd8))("SkeletonKey");
    FUN_004b2b80(DAT_00b35ecc);
    (**(code **)(*DAT_00b35ecc + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0xc,&local_b4);
  DAT_00b35ed0 = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b054b8,0);
  if (DAT_00b35ed0 == (int *)0x0) {
    local_b4 = FUN_00401f00(0x70);
    local_4 = 10;
    if (local_b4 == 0) {
      DAT_00b35ed0 = (int *)0x0;
    }
    else {
      DAT_00b35ed0 = (int *)FUN_004b9860();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0xc,1);
    (**(code **)(*DAT_00b35ed0 + 0xd8))("RepairHammer");
    FUN_004b2b80(DAT_00b35ed0);
    (**(code **)(*DAT_00b35ed0 + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(1,&local_b4);
  DAT_00b35ea4 = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b054d4,0);
  if (DAT_00b35ea4 == (int *)0x0) {
    local_b4 = FUN_00401f00(0x3c);
    local_4 = 0xb;
    if (local_b4 == 0) {
      DAT_00b35ea4 = (int *)0x0;
    }
    else {
      DAT_00b35ea4 = (int *)FUN_004b9aa0();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(1,1);
    (**(code **)(*DAT_00b35ea4 + 0xd8))("DoorMarker");
    (**(code **)(DAT_00b35ea4[9] + 0x18))("MarkerTeleport.nif");
    FUN_004b2b80(DAT_00b35ea4);
    (**(code **)(*DAT_00b35ea4 + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0x3c,&local_b4);
  iVar4 = FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
  if (iVar4 == 0) {
    local_b4 = FUN_00401f00(0xe0);
    local_4 = 0xc;
    if (local_b4 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_004f2a10();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x3c,1);
    (**(code **)(*piVar5 + 0xd8))("Tamriel");
    (**(code **)(*piVar5 + 0x90))(0);
    FUN_00446cb0(piVar5);
    FUN_00412d30("Tamriel",piVar5);
  }
  else if (*(int *)(in_ECX + 0xc) != iVar4) {
    FUN_0065c620(iVar4);
    FUN_00446cb0(iVar4);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0x3b,&local_b4);
  DAT_00b35eac = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b054d4,0);
  if (DAT_00b35eac == (int *)0x0) {
    local_b4 = FUN_00401f00(0x3c);
    local_4 = 0xd;
    if (local_b4 == 0) {
      DAT_00b35eac = (int *)0x0;
    }
    else {
      DAT_00b35eac = (int *)FUN_004b9aa0();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x3b,1);
    (**(code **)(*DAT_00b35eac + 0xd8))("XMarker");
    (**(code **)(DAT_00b35eac[9] + 0x18))("MarkerX.nif");
    FUN_004b2b80(DAT_00b35eac);
    (**(code **)(*DAT_00b35eac + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0x34,&local_b4);
  DAT_00b35eb0 = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b054d4,0);
  if (DAT_00b35eb0 == (int *)0x0) {
    local_b4 = FUN_00401f00(0x3c);
    local_4 = 0xe;
    if (local_b4 == 0) {
      DAT_00b35eb0 = (int *)0x0;
    }
    else {
      DAT_00b35eb0 = (int *)FUN_004b9aa0();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x34,1);
    (**(code **)(*DAT_00b35eb0 + 0xd8))("XMarkerHeading");
    (**(code **)(DAT_00b35eb0[9] + 0x18))("MarkerXHeading.nif");
    FUN_004b2b80(DAT_00b35eb0);
    (**(code **)(*DAT_00b35eb0 + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0x10,&local_b4);
  DAT_00b35ea8 = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b054d4,0);
  if (DAT_00b35ea8 == (int *)0x0) {
    local_b4 = FUN_00401f00(0x3c);
    local_4 = 0xf;
    if (local_b4 == 0) {
      DAT_00b35ea8 = (int *)0x0;
    }
    else {
      DAT_00b35ea8 = (int *)FUN_004b9aa0();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x10,1);
    (**(code **)(*DAT_00b35ea8 + 0xd8))("MapMarker");
    (**(code **)(DAT_00b35ea8[9] + 0x18))("Marker_Map.NIF");
    FUN_004b2b80(DAT_00b35ea8);
    (**(code **)(*DAT_00b35ea8 + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(2,&local_b4);
  DAT_00b35eb4 = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b054d4,0);
  if (DAT_00b35eb4 == (int *)0x0) {
    local_b4 = FUN_00401f00(0x3c);
    local_4 = 0x10;
    if (local_b4 == 0) {
      DAT_00b35eb4 = (int *)0x0;
    }
    else {
      DAT_00b35eb4 = (int *)FUN_004b9aa0();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(2,1);
    (**(code **)(*DAT_00b35eb4 + 0xd8))("TravelMarker");
    (**(code **)(DAT_00b35eb4[9] + 0x18))("Marker_Travel.nif");
    FUN_004b2b80(DAT_00b35eb4);
    (**(code **)(*DAT_00b35eb4 + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(3,&local_b4);
  DAT_00b35eb8 = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b054d4,0);
  if (DAT_00b35eb8 == (int *)0x0) {
    local_b4 = FUN_00401f00(0x3c);
    local_4 = 0x11;
    if (local_b4 == 0) {
      DAT_00b35eb8 = (int *)0x0;
    }
    else {
      DAT_00b35eb8 = (int *)FUN_004b9aa0();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(3,1);
    (**(code **)(*DAT_00b35eb8 + 0xd8))("NorthMarker");
    (**(code **)(DAT_00b35eb8[9] + 0x18))("Marker_North.nif");
    FUN_004b2b80(DAT_00b35eb8);
    (**(code **)(*DAT_00b35eb8 + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(4,&local_b4);
  DAT_00b35ebc = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b05480,0);
  if (DAT_00b35ebc == (int *)0x0) {
    local_b4 = FUN_00401f00(0x70);
    local_4 = 0x12;
    if (local_b4 == 0) {
      DAT_00b35ebc = (int *)0x0;
    }
    else {
      DAT_00b35ebc = (int *)FUN_004b8550();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(4,1);
    (**(code **)(*DAT_00b35ebc + 0xd8))("PrisonMarker");
    (**(code **)(DAT_00b35ebc[0xc] + 0x18))("Marker_Prison.nif");
    FUN_004b2b80(DAT_00b35ebc);
    (**(code **)(*DAT_00b35ebc + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(6,&local_b4);
  DAT_00b35ec0 = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b054d4,0);
  if (DAT_00b35ec0 == (int *)0x0) {
    local_b4 = FUN_00401f00(0x3c);
    local_4 = 0x13;
    if (local_b4 == 0) {
      DAT_00b35ec0 = (int *)0x0;
    }
    else {
      DAT_00b35ec0 = (int *)FUN_004b9aa0();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(6,1);
    (**(code **)(*DAT_00b35ec0 + 0xd8))("TempleMarker");
    (**(code **)(DAT_00b35ec0[9] + 0x18))("Marker_Temple.nif");
    FUN_004b2b80(DAT_00b35ec0);
    (**(code **)(*DAT_00b35ec0 + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(5,&local_b4);
  DAT_00b35ec4 = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b054d4,0);
  if (DAT_00b35ec4 == (int *)0x0) {
    local_b4 = FUN_00401f00(0x3c);
    local_4 = 0x14;
    if (local_b4 == 0) {
      DAT_00b35ec4 = (int *)0x0;
    }
    else {
      DAT_00b35ec4 = (int *)FUN_004b9aa0();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(5,1);
    (**(code **)(*DAT_00b35ec4 + 0xd8))("DivineMarker");
    (**(code **)(DAT_00b35ec4[9] + 0x18))("Marker_Divine.nif");
    FUN_004b2b80(DAT_00b35ec4);
    (**(code **)(*DAT_00b35ec4 + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0x13,&local_b4);
  DAT_00b36298 = (int *)FUN_009832e6(-(uint)(cVar2 != '\0') & local_b4,0,&PTR_PTR_00b02f9c,
                                     &PTR_PTR_00b05374,0);
  if (DAT_00b36298 == (int *)0x0) {
    local_b4 = FUN_00401f00(0x44);
    local_4 = 0x15;
    if (local_b4 == 0) {
      DAT_00b36298 = (int *)0x0;
    }
    else {
      DAT_00b36298 = (int *)FUN_0051f820();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x13,1);
    (**(code **)(*DAT_00b36298 + 0xd8))("CreatureFaction");
    FUN_00446cb0(DAT_00b36298);
    FUN_0046e900(DAT_00b36298,100);
    FUN_0051f760();
    FUN_0046ab80(1);
    (**(code **)(*DAT_00b36298 + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0xf,&local_b4);
  if ((cVar2 == '\0') || (local_b4 == 0)) {
    local_b4 = FUN_00401f00(0x70);
    local_4 = 0x16;
    if (local_b4 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_004b9860();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0xf,1);
    (**(code **)(*piVar5 + 0xd8))("Gold001");
    FUN_004b2b80(piVar5);
    (**(code **)(*piVar5 + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0xe,&local_b4);
  DAT_00b33aa8 = (int *)(-(uint)(cVar2 != '\0') & local_b4);
  if (DAT_00b33aa8 != (int *)0x0) goto LAB_0044beca;
  local_b4 = FUN_00401f00(0x7c);
  local_4 = 0x17;
  if (local_b4 == 0) {
    DAT_00b33aa8 = (int *)0x0;
  }
  else {
    DAT_00b33aa8 = (int *)FUN_004b6be0();
  }
  local_4 = 0xffffffff;
  FUN_0046c300(0xe,1);
  (**(code **)(*DAT_00b33aa8 + 0xd8))("LootBag");
  iVar4 = (**(code **)(DAT_00b33aa8[0x10] + 0x14))();
  if (iVar4 == 0) {
LAB_0044be95:
    (**(code **)(DAT_00b33aa8[0x10] + 0x18))("Clutter\\Sack01.NIF");
  }
  else {
    pcVar6 = (char *)(**(code **)(DAT_00b33aa8[0x10] + 0x14))();
    pcVar1 = pcVar6 + 1;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (pcVar6 == pcVar1) goto LAB_0044be95;
  }
  FUN_004b2b80(DAT_00b33aa8);
  (**(code **)(*DAT_00b33aa8 + 0x90))(0);
LAB_0044beca:
  local_b4 = 0;
  cVar2 = FUN_0055e000(0x11,&local_b4);
  DAT_00b33aac = (int *)(-(uint)(cVar2 != '\0') & local_b4);
  if (DAT_00b33aac == (int *)0x0) {
    local_b4 = FUN_00401f00(0x7c);
    local_4 = 0x18;
    if (local_b4 == 0) {
      DAT_00b33aac = (int *)0x0;
    }
    else {
      DAT_00b33aac = (int *)FUN_004b6be0();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x11,1);
    (**(code **)(*DAT_00b33aac + 0xd8))("StolenGoods");
    FUN_004b2b80(DAT_00b33aac);
    (**(code **)(*DAT_00b33aac + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0x17,&local_b4);
  DAT_00b33ab0 = (int *)(-(uint)(cVar2 != '\0') & local_b4);
  if (DAT_00b33ab0 == (int *)0x0) {
    local_b4 = FUN_00401f00(0xdc);
    local_4 = 0x19;
    if (local_b4 == 0) {
      DAT_00b33ab0 = (int *)0x0;
    }
    else {
      DAT_00b33ab0 = (int *)FUN_004b6150();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x17,1);
    (**(code **)(*DAT_00b33ab0 + 0xd8))("JailShirt");
    FUN_00469090(0,"Clothes\\LowerClass\\05\\M\\Shirt_gnd.NIF");
    FUN_00469090(1,"Clothes\\LowerClass\\05\\F\\Shirt_gnd.NIF");
    FUN_004690b0(0,"Clothes\\LowerClass\\05\\M\\Shirt.NIF");
    FUN_004690b0(1,"Clothes\\LowerClass\\05\\F\\Shirt.NIF");
    FUN_00469020(2,1);
    FUN_00469020(3,0);
    FUN_004b2b80(DAT_00b33ab0);
    (**(code **)(*DAT_00b33ab0 + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0x15,&local_b4);
  DAT_00b33ab4 = (int *)(-(uint)(cVar2 != '\0') & local_b4);
  if (DAT_00b33ab4 == (int *)0x0) {
    local_b4 = FUN_00401f00(0xdc);
    local_4 = 0x1a;
    if (local_b4 == 0) {
      DAT_00b33ab4 = (int *)0x0;
    }
    else {
      DAT_00b33ab4 = (int *)FUN_004b6150();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x15,1);
    (**(code **)(*DAT_00b33ab4 + 0xd8))("JailPants");
    FUN_00469090(0,"Clothes\\LowerClass\\05\\M\\Pants_gnd.NIF");
    FUN_00469090(1,"Clothes\\LowerClass\\05\\F\\Pants_gnd.NIF");
    FUN_004690b0(0,"Clothes\\LowerClass\\05\\M\\Pants.NIF");
    FUN_004690b0(1,"Clothes\\LowerClass\\05\\F\\Pants.NIF");
    FUN_00469020(2,0);
    FUN_00469020(3,1);
    FUN_004b2b80(DAT_00b33ab4);
    (**(code **)(*DAT_00b33ab4 + 0x90))(0);
  }
  local_b4 = 0;
  cVar2 = FUN_0055e000(0x16,&local_b4);
  DAT_00b33ab8 = (int *)(-(uint)(cVar2 != '\0') & local_b4);
  if (DAT_00b33ab8 == (int *)0x0) {
    local_b4 = FUN_00401f00(0xdc);
    local_4 = 0x1b;
    if (local_b4 == 0) {
      DAT_00b33ab8 = (int *)0x0;
    }
    else {
      DAT_00b33ab8 = (int *)FUN_004b6150();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x16,1);
    (**(code **)(*DAT_00b33ab8 + 0xd8))("JailShoes");
    FUN_00469090(0,"Clothes\\LowerClass\\05\\M\\Shoes_gnd.NIF");
    FUN_00469090(1,"Clothes\\LowerClass\\05\\F\\Shoes_gnd.NIF");
    FUN_004690b0(0,"Clothes\\LowerClass\\05\\M\\Shoes.NIF");
    FUN_004690b0(1,"Clothes\\LowerClass\\05\\F\\Shoes.NIF");
    FUN_00469020(2,0);
    FUN_00469020(3,0);
    FUN_00469020(5,1);
    FUN_004b2b80(DAT_00b33ab8);
    (**(code **)(*DAT_00b33ab8 + 0x90))(0);
  }
  iVar4 = 0;
  do {
    if (*(int *)((int)&DAT_00b067c0 + iVar4) == 0) {
LAB_0044c2dd:
      local_b4 = FUN_00401f00(0x3c);
      local_4 = 0x1c;
      if (local_b4 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_004b9aa0();
      }
      local_4 = 0xffffffff;
      FUN_0046c300(*(undefined4 *)((int)&DAT_00b067c0 + iVar4),1);
      (**(code **)(*piVar5 + 0xd8))(*(undefined4 *)((int)&PTR_s_FlameNode1_00b06818 + iVar4));
      FUN_004b2b80(piVar5);
      (**(code **)(*piVar5 + 0x90))(0);
    }
    else {
      local_b4 = 0;
      cVar2 = FUN_0055e000(*(int *)((int)&DAT_00b067c0 + iVar4),&local_b4);
      if ((cVar2 == '\0') || (local_b4 == 0)) goto LAB_0044c2dd;
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0x54);
  aiStack_ac[0] = 100;
  aiStack_ac[1] = 0x65;
  aiStack_ac[2] = 0x66;
  aiStack_ac[3] = 0x67;
  aiStack_ac[4] = 0x68;
  aiStack_ac[5] = 0x69;
  aiStack_ac[6] = 0x6a;
  aiStack_ac[7] = 0x6b;
  aiStack_ac[8] = 0x6c;
  aiStack_ac[9] = 0x6d;
  aiStack_ac[10] = 0x6e;
  aiStack_ac[0xb] = 0x6f;
  aiStack_ac[0xc] = 0x70;
  aiStack_ac[0xd] = 0x71;
  aiStack_ac[0xe] = 0x72;
  aiStack_ac[0xf] = 0x73;
  aiStack_ac[0x10] = 0x74;
  aiStack_ac[0x11] = 0x75;
  aiStack_ac[0x12] = 0x76;
  aiStack_ac[0x13] = 0x77;
  apcStack_5c[0] = "FurnitureMarker01";
  apcStack_5c[1] = "FurnitureMarker02";
  apcStack_5c[2] = "FurnitureMarker03";
  apcStack_5c[3] = "FurnitureMarker04";
  pcStack_4c = "FurnitureMarker05";
  pcStack_48 = "FurnitureMarker06";
  pcStack_44 = "FurnitureMarker07";
  pcStack_40 = "FurnitureMarker08";
  pcStack_3c = "FurnitureMarker09";
  pcStack_38 = "FurnitureMarker10";
  pcStack_34 = "FurnitureMarker11";
  pcStack_30 = "FurnitureMarker12";
  pcStack_2c = "FurnitureMarker13";
  pcStack_28 = "FurnitureMarker14";
  pcStack_24 = "FurnitureMarker15";
  pcStack_20 = "FurnitureMarker16";
  pcStack_1c = "FurnitureMarker17";
  pcStack_18 = "FurnitureMarker18";
  pcStack_14 = "FurnitureMarker19";
  pcStack_10 = "FurnitureMarker20";
  local_b4 = 0;
  do {
    iVar4 = *(int *)((int)aiStack_ac + local_b4);
    if (iVar4 != 0) {
      iVar7 = (**(code **)(PTR_PTR_00b0613c + 4))(iVar4);
      for (puVar8 = *(undefined4 **)(DAT_00b06144 + iVar7 * 4); puVar8 != (undefined4 *)0x0;
          puVar8 = (undefined4 *)*puVar8) {
        cVar2 = (**(code **)(PTR_PTR_00b0613c + 8))(iVar4,puVar8[1]);
        if (cVar2 != '\0') {
          if (puVar8[2] != 0) goto LAB_0044c58e;
          break;
        }
      }
    }
    iStack_b0 = FUN_00401f00(0x3c);
    local_4 = 0x1d;
    if (iStack_b0 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_004b9aa0();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(iVar4,1);
    (**(code **)(*piVar5 + 0xd8))(*(undefined4 *)((int)apcStack_5c + local_b4));
    FUN_004b2b80(piVar5);
    (**(code **)(*piVar5 + 0x90))(0);
LAB_0044c58e:
    local_b4 = local_b4 + 4;
  } while ((int)local_b4 < 0x50);
  FUN_0052fe90();
  iVar4 = (**(code **)(PTR_PTR_00b0613c + 4))(0x35);
  for (puVar8 = *(undefined4 **)(DAT_00b06144 + iVar4 * 4); puVar8 != (undefined4 *)0x0;
      puVar8 = (undefined4 *)*puVar8) {
    cVar2 = (**(code **)(PTR_PTR_00b0613c + 8))(0x35,puVar8[1]);
    if (cVar2 != '\0') {
      if (puVar8[2] != 0) goto LAB_0044c689;
      break;
    }
  }
  local_b4 = FUN_00401f00(0x28);
  puStack_8 = (undefined1 *)0x1e;
  if (local_b4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_004f95e0();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_0046c300(0x35,1);
  (**(code **)(*piVar5 + 0xd8))("GameYear");
  piVar5[9] = 0x43d58000;
  if (*(int *)(in_ECX + 0x74) != 0) {
    puVar8 = (undefined4 *)FUN_00401f00(8);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      *puVar8 = *(undefined4 *)(in_ECX + 0x74);
      puVar8[1] = 0;
    }
    puVar8[1] = *(undefined4 *)(in_ECX + 0x78);
    *(undefined4 **)(in_ECX + 0x78) = puVar8;
  }
  *(int **)(in_ECX + 0x74) = piVar5;
  FUN_00412d30("GameYear",piVar5);
LAB_0044c689:
  iVar4 = (**(code **)(PTR_PTR_00b0613c + 4))(0x36);
  for (puVar8 = *(undefined4 **)(DAT_00b06144 + iVar4 * 4); puVar8 != (undefined4 *)0x0;
      puVar8 = (undefined4 *)*puVar8) {
    cVar2 = (**(code **)(PTR_PTR_00b0613c + 8))(0x36,puVar8[1]);
    if (cVar2 != '\0') {
      if (puVar8[2] != 0) goto LAB_0044c762;
      break;
    }
  }
  iVar4 = FUN_00401f00(0x28);
  local_c = 0x1f;
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_004f95e0();
  }
  local_c = -1;
  FUN_0046c300(0x36,1);
  (**(code **)(*piVar5 + 0xd8))("GameMonth");
  piVar5[9] = 0x40e00000;
  if (*(int *)(in_ECX + 0x74) != 0) {
    puVar8 = (undefined4 *)FUN_00401f00(8);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      *puVar8 = *(undefined4 *)(in_ECX + 0x74);
      puVar8[1] = 0;
    }
    puVar8[1] = *(undefined4 *)(in_ECX + 0x78);
    *(undefined4 **)(in_ECX + 0x78) = puVar8;
  }
  *(int **)(in_ECX + 0x74) = piVar5;
  FUN_00412d30("GameMonth",piVar5);
LAB_0044c762:
  iVar4 = (**(code **)(PTR_PTR_00b0613c + 4))(0x37);
  for (puVar8 = *(undefined4 **)(DAT_00b06144 + iVar4 * 4); puVar8 != (undefined4 *)0x0;
      puVar8 = (undefined4 *)*puVar8) {
    cVar2 = (**(code **)(PTR_PTR_00b0613c + 8))(0x37,puVar8[1]);
    if (cVar2 != '\0') {
      if (puVar8[2] != 0) goto LAB_0044c83b;
      break;
    }
  }
  iVar4 = FUN_00401f00(0x28);
  pcStack_10 = (char *)0x20;
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_004f95e0();
  }
  pcStack_10 = (char *)0xffffffff;
  FUN_0046c300(0x37,1);
  (**(code **)(*piVar5 + 0xd8))("GameDay");
  piVar5[9] = 0x41880000;
  if (*(int *)(in_ECX + 0x74) != 0) {
    puVar8 = (undefined4 *)FUN_00401f00(8);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      *puVar8 = *(undefined4 *)(in_ECX + 0x74);
      puVar8[1] = 0;
    }
    puVar8[1] = *(undefined4 *)(in_ECX + 0x78);
    *(undefined4 **)(in_ECX + 0x78) = puVar8;
  }
  *(int **)(in_ECX + 0x74) = piVar5;
  FUN_00412d30("GameDay",piVar5);
LAB_0044c83b:
  iVar4 = (**(code **)(PTR_PTR_00b0613c + 4))(0x38);
  for (puVar8 = *(undefined4 **)(DAT_00b06144 + iVar4 * 4); puVar8 != (undefined4 *)0x0;
      puVar8 = (undefined4 *)*puVar8) {
    cVar2 = (**(code **)(PTR_PTR_00b0613c + 8))(0x38,puVar8[1]);
    if (cVar2 != '\0') {
      if (puVar8[2] != 0) goto LAB_0044c91b;
      break;
    }
  }
  iVar4 = FUN_00401f00(0x28);
  pcStack_14 = (char *)0x21;
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_004f95e0();
  }
  pcStack_14 = (char *)0xffffffff;
  FUN_0046c300(0x38,1);
  (**(code **)(*piVar5 + 0xd8))("GameHour");
  piVar5[9] = 0x41400000;
  if (*(int *)(in_ECX + 0x74) != 0) {
    puVar8 = (undefined4 *)FUN_00401f00(8);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      *puVar8 = *(undefined4 *)(in_ECX + 0x74);
      puVar8[1] = 0;
    }
    puVar8[1] = *(undefined4 *)(in_ECX + 0x78);
    *(undefined4 **)(in_ECX + 0x78) = puVar8;
  }
  *(int **)(in_ECX + 0x74) = piVar5;
  FUN_00412d30("GameHour",piVar5);
LAB_0044c91b:
  iVar4 = (**(code **)(PTR_PTR_00b0613c + 4))(0x39);
  for (puVar8 = *(undefined4 **)(DAT_00b06144 + iVar4 * 4); puVar8 != (undefined4 *)0x0;
      puVar8 = (undefined4 *)*puVar8) {
    cVar2 = (**(code **)(PTR_PTR_00b0613c + 8))(0x39,puVar8[1]);
    if (cVar2 != '\0') {
      if (puVar8[2] != 0) goto LAB_0044c9f7;
      break;
    }
  }
  iVar4 = FUN_00401f00(0x28);
  pcStack_18 = (char *)0x22;
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_004f95e0();
  }
  pcStack_18 = (char *)0xffffffff;
  FUN_0046c300(0x39,1);
  (**(code **)(*piVar5 + 0xd8))("GameDaysPassed");
  piVar5[9] = 0x3f800000;
  if (*(int *)(in_ECX + 0x74) != 0) {
    puVar8 = (undefined4 *)FUN_00401f00(8);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      *puVar8 = *(undefined4 *)(in_ECX + 0x74);
      puVar8[1] = 0;
    }
    puVar8[1] = *(undefined4 *)(in_ECX + 0x78);
    *(undefined4 **)(in_ECX + 0x78) = puVar8;
  }
  *(int **)(in_ECX + 0x74) = piVar5;
  FUN_00412d30("GameDaysPassed",piVar5);
LAB_0044c9f7:
  iVar4 = (**(code **)(PTR_PTR_00b0613c + 4))(0x3a);
  for (puVar8 = *(undefined4 **)(DAT_00b06144 + iVar4 * 4); puVar8 != (undefined4 *)0x0;
      puVar8 = (undefined4 *)*puVar8) {
    cVar2 = (**(code **)(PTR_PTR_00b0613c + 8))(0x3a,puVar8[1]);
    if (cVar2 != '\0') {
      if (puVar8[2] != 0) goto LAB_0044cad0;
      break;
    }
  }
  iVar4 = FUN_00401f00(0x28);
  pcStack_1c = (char *)0x23;
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_004f95e0();
  }
  pcStack_1c = (char *)0xffffffff;
  FUN_0046c300(0x3a,1);
  (**(code **)(*piVar5 + 0xd8))("TimeScale");
  piVar5[9] = 0x41f00000;
  if (*(int *)(in_ECX + 0x74) != 0) {
    puVar8 = (undefined4 *)FUN_00401f00(8);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      *puVar8 = *(undefined4 *)(in_ECX + 0x74);
      puVar8[1] = 0;
    }
    puVar8[1] = *(undefined4 *)(in_ECX + 0x78);
    *(undefined4 **)(in_ECX + 0x78) = puVar8;
  }
  *(int **)(in_ECX + 0x74) = piVar5;
  FUN_00412d30("TimeScale",piVar5);
LAB_0044cad0:
  iVar4 = (**(code **)(PTR_PTR_00b0613c + 4))(7);
  for (puVar8 = *(undefined4 **)(DAT_00b06144 + iVar4 * 4); puVar8 != (undefined4 *)0x0;
      puVar8 = (undefined4 *)*puVar8) {
    cVar2 = (**(code **)(PTR_PTR_00b0613c + 8))(7,puVar8[1]);
    if (cVar2 != '\0') {
      uVar9 = puVar8[2];
      goto LAB_0044cb11;
    }
  }
  uVar9 = 0;
LAB_0044cb11:
  iVar4 = FUN_009832e6(uVar9,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b02fb4,0);
  if (iVar4 == 0) {
    iVar4 = FUN_00401f00(0x200);
    pcStack_20 = (char *)0x24;
    if (iVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_00527220();
    }
    pcStack_20 = (char *)0xffffffff;
    FUN_0046c300(7,1);
    (**(code **)(*piVar5 + 0xd8))("Player");
    FUN_004b2b80(piVar5);
    (**(code **)(*piVar5 + 0x90))(0);
  }
  iVar4 = (**(code **)(PTR_PTR_00b0613c + 4))(0x15e);
  for (puVar8 = *(undefined4 **)(DAT_00b06144 + iVar4 * 4); puVar8 != (undefined4 *)0x0;
      puVar8 = (undefined4 *)*puVar8) {
    cVar2 = (**(code **)(PTR_PTR_00b0613c + 8))(0x15e,puVar8[1]);
    if (cVar2 != '\0') {
      if (puVar8[2] != 0) goto LAB_0044cc67;
      break;
    }
  }
  iVar4 = FUN_00401f00(0x148);
  pcStack_24 = (char *)0x25;
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_004ee7c0();
  }
  pcStack_24 = (char *)0xffffffff;
  FUN_0046c300(0x15e,1);
  (**(code **)(*piVar5 + 0xd8))("DefaultWeather");
  FUN_004ee8c0();
  if (*(int *)(in_ECX + 0x1c) != 0) {
    puVar8 = (undefined4 *)FUN_00401f00(8);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      *puVar8 = *(undefined4 *)(in_ECX + 0x1c);
      puVar8[1] = 0;
    }
    puVar8[1] = *(undefined4 *)(in_ECX + 0x20);
    *(undefined4 **)(in_ECX + 0x20) = puVar8;
  }
  *(int **)(in_ECX + 0x1c) = piVar5;
LAB_0044cc67:
  iVar4 = (**(code **)(PTR_PTR_00b0613c + 4))(0x15f);
  puVar8 = *(undefined4 **)(DAT_00b06144 + iVar4 * 4);
  do {
    if (puVar8 == (undefined4 *)0x0) {
LAB_0044ccbd:
      iVar4 = FUN_00401f00(0x58);
      pcStack_28 = (char *)0x26;
      if (iVar4 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_004bec50();
      }
      pcStack_28 = (char *)0xffffffff;
      FUN_0046c300(0x15f,1);
      (**(code **)(*piVar5 + 0xd8))("DefaultClimate");
      FUN_004bee70();
      if (*(int *)(in_ECX + 0x14) != 0) {
        puVar8 = (undefined4 *)FUN_00401f00(8);
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          *puVar8 = *(undefined4 *)(in_ECX + 0x14);
          puVar8[1] = 0;
        }
        puVar8[1] = *(undefined4 *)(in_ECX + 0x18);
        *(undefined4 **)(in_ECX + 0x18) = puVar8;
      }
      *(int **)(in_ECX + 0x14) = piVar5;
LAB_0044cd3f:
      uVar10 = 1;
      uVar9 = 0;
      FUN_00542ea0(0,1);
      FUN_00543200(uVar9,uVar10);
      FUN_0041bb80();
      FUN_00518000();
      *unaff_FS_OFFSET = (int)pcStack_30;
      return;
    }
    cVar2 = (**(code **)(PTR_PTR_00b0613c + 8))(0x15f,puVar8[1]);
    if (cVar2 != '\0') {
      if (puVar8[2] != 0) goto LAB_0044cd3f;
      goto LAB_0044ccbd;
    }
    puVar8 = (undefined4 *)*puVar8;
  } while( true );
}



void FUN_0044cd80(int param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  char *pcVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_00560920(&DAT_00b3f95c,*(undefined4 *)(param_1 + 8));
    if (iVar1 != 0) {
      pcVar2 = "Shader";
      if (param_5 == '\0') {
        pcVar2 = "No Shader";
      }
      FUN_006f7070("TestModels - Unused Textures.xls","%s\t%s\t%s\t%s\t%d\t%s\r\n",param_3,param_4,
                   *(undefined4 *)(param_2 + 8),*(undefined4 *)(iVar1 + 0x34),
                   *(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x60),pcVar2);
    }
  }
  return;
}



void FUN_0044cdf0(int *param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  uVar3 = param_2;
  piVar2 = param_1;
  if (param_1 != (int *)0x0) {
    iVar4 = (**(code **)(*param_1 + 0x10))();
    if (iVar4 == 0) {
      iVar4 = (**(code **)(*param_1 + 8))();
      if (iVar4 != 0) {
        uVar1 = *(ushort *)((int)param_1 + 0xb6);
        uVar7 = 0;
        if (uVar1 != 0) {
          do {
            if ((uVar7 < *(ushort *)((int)param_1 + 0xb6)) &&
               (iVar4 = *(int *)(param_1[0x2c] + uVar7 * 4), iVar4 != 0)) {
              FUN_0044cdf0(iVar4,param_2);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar1);
        }
      }
    }
    else {
      iVar4 = FUN_00707530(4);
      uVar5 = FUN_00707530(6);
      iVar6 = FUN_00560920(&DAT_00b3f96c,uVar5);
      if (iVar6 != 0) {
        bVar8 = iVar4 != 0;
        FUN_0044cd80(*(undefined4 *)(*(int *)(iVar6 + 0x20) + 8),param_1,"Detail Map",param_2,bVar8)
        ;
        FUN_0044cd80(*(undefined4 *)(*(int *)(iVar6 + 0x20) + 0x14),param_1,"Bump Map",param_2,bVar8
                    );
        FUN_0044cd80(*(undefined4 *)(*(int *)(iVar6 + 0x20) + 0x10),param_1,"Glow Map",param_2,bVar8
                    );
        FUN_0044cd80(*(undefined4 *)(*(int *)(iVar6 + 0x20) + 0xc),param_1,"Gloss Map",param_2,bVar8
                    );
        FUN_0044cd80(*(undefined4 *)(*(int *)(iVar6 + 0x20) + 4),param_1,"Dark Map",param_2,bVar8);
        param_1 = (int *)0x0;
        if ((*(ushort *)(iVar6 + 0x18) & 0xff0) != 0) {
          param_2 = 0x18;
          do {
            FUN_0044cd80(*(undefined4 *)(param_2 + *(int *)(iVar6 + 0x20)),piVar2,"Decal Map",uVar3,
                         bVar8);
            param_2 = param_2 + 4;
            param_1 = (int *)((int)param_1 + 1);
          } while (param_1 < (*(ushort *)(iVar6 + 0x18) >> 4 & 0xff));
          return;
        }
      }
    }
  }
  return;
}



void FUN_0044d340(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *local_c;
  int local_8;
  
  puVar5 = (undefined4 *)FUN_00485e80(*(undefined4 *)(param_1 + 8),1,0);
  if (puVar5 != (undefined4 *)0x0) {
    local_c = (int *)*puVar5;
    bVar2 = false;
joined_r0x0044d374:
    do {
      while( true ) {
        if (param_2 == 0) {
          return;
        }
        if (local_c != (int *)0x0) break;
        if (bVar2) {
          return;
        }
        FUN_00448f40(param_3);
        bVar2 = true;
        puVar5 = (undefined4 *)FUN_00485e80(*(undefined4 *)(param_1 + 8),1,0);
        if (puVar5 == (undefined4 *)0x0) {
          return;
        }
        local_c = (int *)*puVar5;
      }
      puVar1 = (undefined4 *)*local_c;
      local_c = (int *)local_c[1];
      if (puVar1 != (undefined4 *)0x0) {
        sVar4 = FUN_0041e860();
        iVar9 = (int)sVar4;
        if (0 < iVar9) {
          piVar6 = (int *)FUN_0041e790();
          local_8 = param_2;
          if (iVar9 <= param_2) {
            FUN_004234b0();
            local_8 = iVar9;
          }
          if (piVar6 != (int *)0x0) {
            iVar9 = FUN_004d6d40();
            if (iVar9 == 0) {
              FUN_0041f600();
              FUN_004234b0();
              (**(code **)(*DAT_00b333c4 + 0x2cc))(piVar6,local_8,0);
              FUN_0065c620(puVar1);
              local_c = (int *)*puVar5;
              uVar7 = FUN_0041e060();
              if (((uVar7 < 2) && (sVar4 = FUN_0041e860(), sVar4 < 2)) &&
                 (iVar9 = FUN_0041e900(), iVar9 == 0)) goto LAB_0044d5d9;
            }
            else {
              uVar7 = FUN_0041e060();
              if ((1 < uVar7) || (sVar4 = FUN_0041e860(), puVar8 = (undefined4 *)0x0, 1 < sVar4)) {
                puVar8 = puVar1;
              }
              (**(code **)(*piVar6 + 0x100))(puVar5[2],puVar8,local_8,0,0,DAT_00b333c4,0,0,1,0);
              iVar9 = FUN_0041e6f0();
              bVar3 = true;
              if ((iVar9 != 0) &&
                 (puVar8 = (undefined4 *)FUN_00485e80(puVar5[2],1,0), puVar8 != (undefined4 *)0x0))
              {
                piVar6 = (int *)*puVar8;
                while (((piVar6 != (int *)0x0 && ((undefined4 *)*piVar6 != (undefined4 *)0x0)) &&
                       (bVar3))) {
                  if ((undefined4 *)*piVar6 == puVar1) {
                    bVar3 = false;
                  }
                  else {
                    piVar6 = (int *)piVar6[1];
                  }
                }
              }
              iVar9 = FUN_0041e6f0();
              if ((iVar9 != 0) &&
                 (puVar8 = (undefined4 *)FUN_00485e80(puVar5[2],1,0), puVar8 != (undefined4 *)0x0))
              {
                piVar6 = (int *)*puVar8;
                while ((piVar6 != (int *)0x0 && ((undefined4 *)*piVar6 != (undefined4 *)0x0))) {
                  if (!bVar3) goto LAB_0044d54d;
                  if ((undefined4 *)*piVar6 == puVar1) {
                    bVar3 = false;
                  }
                  else {
                    piVar6 = (int *)piVar6[1];
                  }
                }
              }
              if ((((bVar3) && (uVar7 = FUN_0041e060(), uVar7 < 2)) &&
                  (sVar4 = FUN_0041e860(), sVar4 < 2)) && (iVar9 = FUN_0041e900(), iVar9 == 0)) {
                FUN_0065c620(puVar1);
                local_c = (int *)*puVar5;
LAB_0044d5d9:
                (**(code **)*puVar1)(1);
              }
              else {
LAB_0044d54d:
                sVar4 = FUN_0041e860();
                if ((sVar4 < 2) || (uVar7 = FUN_0041e060(), 1 < uVar7)) {
                  FUN_0041e060();
                  param_2 = param_2 - local_8;
                  goto joined_r0x0044d374;
                }
              }
            }
            param_2 = param_2 - local_8;
            goto joined_r0x0044d374;
          }
        }
      }
    } while (local_c != (int *)0x0);
  }
  return;
}



void FUN_0044d610(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  int iVar6;
  int in_ECX;
  uchar *puVar7;
  int local_8;
  
  local_8 = 0;
  piVar1 = (int *)(in_ECX + 0x54);
  for (piVar2 = piVar1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if (*piVar2 != 0) {
      local_8 = local_8 + 1;
    }
  }
  local_8 = local_8 + -1;
  piVar2 = piVar1;
  if (0 < local_8) {
    do {
      for (; (piVar2 != (int *)0x0 && (iVar3 = *piVar2, iVar3 != 0)); piVar2 = (int *)piVar2[1]) {
        if (((int *)piVar2[1] != (int *)0x0) && (iVar4 = *(int *)piVar2[1], iVar4 != 0)) {
          puVar7 = *(uchar **)(iVar4 + 0x1c);
          if (puVar7 == (uchar *)0x0) {
            puVar7 = "";
          }
          puVar5 = *(uchar **)(iVar3 + 0x1c);
          if (puVar5 == (uchar *)0x0) {
            puVar5 = "";
          }
          iVar6 = __mbsicmp(puVar5,puVar7);
          if (0 < iVar6) {
            *piVar2 = iVar4;
            *(int *)piVar2[1] = iVar3;
          }
        }
      }
      local_8 = local_8 + -1;
      piVar2 = piVar1;
    } while (local_8 != 0);
  }
  local_8 = 0;
  piVar1 = (int *)(in_ECX + 0x44);
  for (piVar2 = piVar1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if (*piVar2 != 0) {
      local_8 = local_8 + 1;
    }
  }
  local_8 = local_8 + -1;
  piVar2 = piVar1;
  if (0 < local_8) {
    do {
      for (; (piVar2 != (int *)0x0 && (iVar3 = *piVar2, iVar3 != 0)); piVar2 = (int *)piVar2[1]) {
        if (((int *)piVar2[1] != (int *)0x0) && (iVar4 = *(int *)piVar2[1], iVar4 != 0)) {
          puVar7 = *(uchar **)(iVar4 + 0x1c);
          if (puVar7 == (uchar *)0x0) {
            puVar7 = "";
          }
          puVar5 = *(uchar **)(iVar3 + 0x1c);
          if (puVar5 == (uchar *)0x0) {
            puVar5 = "";
          }
          iVar6 = __mbsicmp(puVar5,puVar7);
          if (0 < iVar6) {
            *piVar2 = iVar4;
            *(int *)piVar2[1] = iVar3;
          }
        }
      }
      local_8 = local_8 + -1;
      piVar2 = piVar1;
    } while (local_8 != 0);
  }
  return;
}



void FUN_0044d720(uint param_1)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a37abc;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a383f8;
  return;
}



void FUN_0044d770(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  DAT_00b33eac = (int *)FUN_00401f00(-(uint)((int)((ulonglong)DAT_00b0686c * 0xc >> 0x20) != 0) |
                                     (uint)((ulonglong)DAT_00b0686c * 0xc));
  DAT_00b33eac[DAT_00b0686c * 3 + -3] = 0;
  iVar1 = 0xc;
  uVar2 = 1;
  do {
    *(int *)(iVar1 + (int)DAT_00b33eac) = iVar1 + 0xc + (int)DAT_00b33eac;
    iVar1 = iVar1 + 0xc;
    bVar3 = uVar2 < DAT_00b0686c - 2;
    uVar2 = uVar2 + 1;
  } while (bVar3);
  if (DAT_00b33ea8 != (int *)0x0) {
    *DAT_00b33eac = (int)DAT_00b33ea8;
    DAT_00b33ea8 = DAT_00b33eac;
    DAT_00b33eac = DAT_00b33eac + 3;
    return;
  }
  DAT_00b33ea8 = DAT_00b33eac;
  *DAT_00b33eac = 0;
  DAT_00b33eac = DAT_00b33eac + 3;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0044d810(void)

{
  undefined4 *puVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b33f00);
  _DAT_00b33f78 = GetCurrentThreadId();
  _DAT_00b33f7c = _DAT_00b33f7c + 1;
  puVar1 = DAT_00b33eac;
  if (DAT_00b33eac == (undefined4 *)0x0) {
    FUN_0044d770();
    puVar1 = DAT_00b33eac;
  }
  DAT_00b33eac = (undefined4 *)*puVar1;
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  _DAT_00b33f7c = _DAT_00b33f7c + -1;
  if (_DAT_00b33f7c == 0) {
    _DAT_00b33f78 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b33f00);
  return puVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d880(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b33f00);
  _DAT_00b33f78 = GetCurrentThreadId();
  _DAT_00b33f7c = _DAT_00b33f7c + 1;
  param_1[1] = 0;
  *param_1 = DAT_00b33eac;
  _DAT_00b33f7c = _DAT_00b33f7c + -1;
  DAT_00b33eac = param_1;
  if (_DAT_00b33f7c == 0) {
    _DAT_00b33f78 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0044d8cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b33f00);
  return;
}



void FUN_0044d8e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009adc78;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a383f8;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a37abc;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0044d950(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  switch(*(undefined1 *)(param_1 + 4)) {
  case 4:
    FUN_00446cb0(param_1);
    return 1;
  case 5:
    FUN_00446cb0(param_1);
    return 1;
  case 6:
    FUN_00446cb0(param_1);
    return 1;
  case 7:
    FUN_00446cb0(param_1);
    return 1;
  case 8:
    FUN_00446cb0(param_1);
    return 1;
  case 9:
    FUN_00446cb0(param_1);
    return 1;
  case 10:
    FUN_00446cb0(param_1);
    return 1;
  default:
    iVar5 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03268,0);
    if (iVar5 != 0) {
      FUN_004b2b80(iVar5);
      return 1;
    }
    if (*(byte *)(param_1 + 4) < 0x45) {
      puVar6 = (&PTR_DAT_00b05e04)[(uint)*(byte *)(param_1 + 4) * 3];
    }
    else {
      puVar6 = &DAT_00a2f7ec;
    }
    FUN_004a7a60("Unknown form type \'%s\' encountered in AddFormToDataHandler.",puVar6);
    return 0;
  case 0xd:
    FUN_00446cb0(param_1);
    return 1;
  case 0xe:
    FUN_00446cb0(param_1);
    return 1;
  case 0xf:
    FUN_00446cb0(param_1);
    return 1;
  case 0x10:
    FUN_00446cb0(param_1);
    return 1;
  case 0x11:
    FUN_00446cb0(param_1);
    return 1;
  case 0x2d:
    FUN_00446cb0(param_1);
    return 1;
  case 0x2e:
    FUN_00446cb0(param_1);
    return 1;
  case 0x2f:
    FUN_00446cb0(param_1);
    return 1;
  case 0x31:
    break;
  case 0x35:
    FUN_00446cb0(param_1);
    return 1;
  case 0x3b:
    FUN_00446cb0(param_1);
    return 1;
  case 0x3d:
    FUN_00446cb0(param_1);
    return 1;
  case 0x3e:
    FUN_00446cb0(param_1);
    return 1;
  case 0x3f:
    FUN_00446cb0(param_1);
    return 1;
  case 0x41:
    FUN_00446cb0(param_1);
    return 1;
  case 0x42:
    FUN_00446cb0(param_1);
    return 1;
  case 0x43:
    FUN_00446cb0(param_1);
    return 1;
  }
  piVar2 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
  if (piVar2 == (int *)0x0) {
    return 1;
  }
  iVar5 = FUN_006ecc80();
  if (iVar5 == 0) {
    if (*(int *)(DAT_00b333a0 + 0x34) != 0) goto LAB_0044dbb0;
LAB_0044db6c:
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x174))();
    uVar7 = 1;
    uVar4 = FUN_0043f270(1);
    iVar5 = (**(code **)(*piVar2 + 0x174))(uVar4);
    iVar5 = FUN_0044a270(*puVar3,*(undefined4 *)(iVar5 + 4),uVar4,uVar7);
  }
  else {
    cVar1 = FUN_004c97f0();
    if (cVar1 == '\0') goto LAB_0044db6c;
  }
  if (iVar5 == 0) {
    return 1;
  }
LAB_0044dbb0:
  FUN_004d35d0(piVar2);
  cVar1 = FUN_004db3c0();
  if (cVar1 != '\0') {
    FUN_004d7040(1);
  }
  cVar1 = FUN_004d6fa0();
  if (cVar1 == '\0') {
    return 1;
  }
  FUN_004d6fe0(1);
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined1 FUN_0044dcf0(int ***param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int ***pppiVar5;
  char *pcVar6;
  int ***pppiVar7;
  int iVar8;
  int *piVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined ***pppuVar14;
  int ***pppiVar15;
  int *unaff_FS_OFFSET;
  undefined ***pppuStack_150;
  undefined ***pppuStack_14c;
  int ***pppiStack_148;
  uint local_144;
  undefined **local_130;
  undefined **local_12c;
  undefined ***local_128;
  undefined1 local_121;
  int local_120;
  char local_119;
  int local_118;
  undefined1 *puStack_114;
  undefined ***local_110;
  undefined1 local_10c;
  undefined1 local_10b;
  undefined1 local_10a;
  undefined1 local_109;
  undefined1 local_108;
  uint local_8;
  
  local_110 = (undefined ***)0xffffffff;
  puStack_114 = &LAB_009adcf8;
  local_118 = *unaff_FS_OFFSET;
  local_144 = DAT_00b30aac ^ (uint)&local_10c;
  *unaff_FS_OFFSET = (int)&local_118;
  local_119 = '\x01';
  pppiStack_148 = (int ***)0x44dd3d;
  local_8 = local_144;
  pppiVar5 = (int ***)FUN_004511c0();
  if (param_2 == '\0') {
LAB_0044dd5d:
    if ((undefined ***)param_1[0x92] == (undefined ***)0x0) {
LAB_0044dd67:
      pppiVar15 = (int ***)0x0;
      goto LAB_0044dd69;
    }
    pppiStack_148 = (int ***)&local_128;
    local_128 = (undefined ***)0x0;
    pppuStack_150 = (undefined ***)0x44ddbb;
    pppuStack_14c = (undefined ***)param_1[0x92];
    cVar2 = FUN_0055e000();
    if (cVar2 == '\0') goto LAB_0044dd67;
    pppiVar15 = (int ***)local_128;
    if (((int ***)local_128 == (int ***)0x0) ||
       ((int ***)(uint)*(byte *)(local_128 + 1) == pppiVar5)) goto LAB_0044dd69;
    pppiStack_148 = (int ***)(&PTR_DAT_00b05e04)[(int)pppiVar5 * 3];
    pppuStack_14c = (undefined ***)(&PTR_DAT_00b05e04)[(int)(uint)*(byte *)(local_128 + 1) * 3];
    pppuStack_150 = (undefined ***)(param_1 + 7);
    FUN_004a7a60("Form (%08X) in file \"%s\" has wrong type.\n\nShould be:\t%s\nIs:\t\t%s",
                 param_1[0x92]);
    goto LAB_0044e672;
  }
  pppiStack_148 = (int ***)param_1[0x92];
  pppuStack_14c = (undefined ***)0x44dd56;
  cVar2 = FUN_0046abd0();
  pppiVar15 = (int ***)0x0;
  if (cVar2 != '\0') goto LAB_0044dd5d;
LAB_0044dd69:
  if (((uint)param_1[0x91] & 0x4000) == 0) {
    if ((pppiVar15 != (int ***)0x0) && (((uint)param_1[0x91] & 0x20) == 0)) {
      pppiStack_148 = (int ***)0x44de12;
      (*(code *)(*pppiVar15)[6])();
      pppiStack_148 = (int ***)0x44de1b;
      (*(code *)(*pppiVar15)[5])();
    }
  }
  else {
    param_1[0x91] = (int **)((uint)param_1[0x91] & 0xffffbfff);
    if (pppiVar15 == (int ***)0x0) {
      pppuStack_14c = (undefined ***)param_1[0x92];
      pppiStack_148 = param_1 + 7;
      pppuStack_150 = (undefined ***)0xa385d8;
      FUN_004a7a60();
      goto LAB_0044e672;
    }
  }
  pppiStack_148 = pppiVar5;
  switch(pppiVar5) {
  case (int ***)0x1:
    pppiStack_148 = (int ***)0x44de3c;
    iVar8 = FUN_004510b0();
    if (iVar8 == 0) {
LAB_0044de79:
      uVar4 = 1;
    }
    else {
      do {
        if (iVar8 == 0x454c4544) {
          pppiStack_148 = (int ***)0x8;
          pppuStack_14c = &local_130;
          pppuStack_150 = (undefined ***)0x44de6e;
          FUN_00450c20();
          pppiStack_148 = (int ***)&local_130;
          pppuStack_14c = (undefined ***)0x44de79;
          FUN_0044fa50();
          goto LAB_0044de79;
        }
        pppiStack_148 = (int ***)0x44de4e;
        FUN_0044fea0();
        pppiStack_148 = (int ***)0x44de55;
        iVar8 = FUN_004510b0();
      } while (iVar8 != 0);
      uVar4 = 1;
    }
    break;
  default:
    local_121 = DAT_00b06b18;
    DAT_00b06b18 = 1;
    if (pppiVar15 == (int ***)0x0) {
      pppuStack_14c = (undefined ***)0x44e5c5;
      pppiVar15 = (int ***)FUN_00447df0();
    }
    else {
      local_119 = '\0';
    }
    if (pppiVar15 == (int ***)0x0) {
      if (param_1[0x8f] == (int **)0x0) {
        if (pppiVar5 == (int ***)0x0) {
          pppiStack_148 = (int ***)0xa38450;
          pppuStack_14c = (undefined ***)0x44e62a;
          FUN_004a7a60();
        }
        DAT_00b06b18 = local_121;
      }
      else {
        local_10c = *(undefined1 *)(param_1 + 0x8f);
        local_10b = *(undefined1 *)((int)param_1 + 0x23d);
        local_10a = *(undefined1 *)((int)param_1 + 0x23e);
        local_109 = *(undefined1 *)((int)param_1 + 0x23f);
        pppuStack_14c = (undefined ***)0xa3847c;
        local_108 = 0;
        pppuStack_150 = (undefined ***)0x44e60e;
        pppiStack_148 = (int ***)&local_10c;
        FUN_004a7a60();
        DAT_00b06b18 = local_121;
      }
    }
    else {
      pppiStack_148 = param_1;
      DAT_00b06b18 = local_121;
      pppuStack_150 = (undefined ***)0x44e648;
      pppuStack_14c = (undefined ***)pppiVar15;
      cVar2 = FUN_00447050();
      if (cVar2 != '\0') {
        if (local_119 != '\0') {
          pppuStack_14c = (undefined ***)0x44e660;
          pppiStack_148 = pppiVar15;
          FUN_004b2b80();
        }
        uVar4 = 1;
        break;
      }
      pppiStack_148 = (int ***)0x1;
      pppuStack_14c = (undefined ***)0x44e672;
      (*(code *)(*pppiVar15)[4])();
    }
    goto LAB_0044e672;
  case (int ***)0x3:
    pppiStack_148 = (int ***)0x44e32d;
    iVar8 = FUN_004510b0();
    if (iVar8 == 0x44494445) {
      pppiStack_148 = (int ***)0x44e33f;
      iVar8 = -(int)param_1[0x95];
      *(undefined4 *)((int)&pppiStack_148 + iVar8) = 0;
      *(int *)((int)&pppuStack_14c + iVar8) = (int)&local_144 + iVar8;
      *(undefined4 *)((int)&pppuStack_150 + iVar8) = 0x44e34b;
      FUN_00450c20();
      pcVar10 = *(code **)(DAT_00b35468 + 0x24);
      *(int *)((int)&pppiStack_148 + iVar8) = (int)&local_144 + iVar8;
      *(int ****)((int)&pppuStack_14c + iVar8) = param_1;
      *(undefined4 *)((int)&pppuStack_150 + iVar8) = 0x44e35d;
      (*pcVar10)();
    }
    uVar4 = 1;
    break;
  case (int ***)0x4:
  case (int ***)0x5:
  case (int ***)0x6:
  case (int ***)0x7:
  case (int ***)0x8:
  case (int ***)0x9:
  case (int ***)0xa:
  case (int ***)0xd:
  case (int ***)0xe:
  case (int ***)0xf:
  case (int ***)0x10:
  case (int ***)0x11:
  case (int ***)0x2d:
  case (int ***)0x2e:
  case (int ***)0x2f:
  case (int ***)0x3b:
  case (int ***)0x3d:
  case (int ***)0x3e:
  case (int ***)0x3f:
  case (int ***)0x41:
  case (int ***)0x42:
  case (int ***)0x43:
    if (pppiVar15 == (int ***)0x0) {
      pppuStack_14c = (undefined ***)0x44e586;
      pppiVar5 = (int ***)FUN_00447df0();
      pppuStack_14c = (undefined ***)param_1;
      pppuStack_150 = (undefined ***)pppiVar5;
      FUN_00447050();
      pppuStack_14c = (undefined ***)0x44e59b;
      pppiStack_148 = pppiVar5;
      FUN_0044d950();
      uVar4 = 1;
      break;
    }
    goto LAB_0044e291;
  case (int ***)0xb:
    if (pppiVar15 != (int ***)0x0) {
      pppiStack_148 = (int ***)0x0;
      pppuStack_14c = (undefined ***)&PTR_PTR_00b05520;
      pppuStack_150 = (undefined ***)&PTR_PTR_00b02f9c;
      pppuVar14 = (undefined ***)FUN_009832e6(pppiVar15,0);
      if (pppuVar14 != (undefined ***)0x0) {
        pppiStack_148 = (int ***)0x44e542;
        FUN_0052eaf0();
        pppiStack_148 = param_1;
        pppuStack_150 = (undefined ***)0x44e549;
        pppuStack_14c = pppuVar14;
        FUN_00447050();
        uVar4 = 1;
        break;
      }
    }
    goto LAB_0044e29b;
  case (int ***)0xc:
    pppiStack_148 = (int ***)0x44e36e;
    iVar8 = FUN_004510b0();
    if (iVar8 == 0x44494445) {
      pppiStack_148 = (int ***)0x44e384;
      iVar8 = -(int)param_1[0x95];
      *(undefined4 *)((int)&pppiStack_148 + iVar8) = 0;
      *(int *)((int)&pppuStack_14c + iVar8) = (int)&local_144 + iVar8;
      *(undefined4 *)((int)&pppuStack_150 + iVar8) = 0x44e390;
      FUN_00450c20();
      *(int *)((int)&pppiStack_148 + iVar8) = (int)&local_144 + iVar8;
      *(undefined4 *)((int)&pppuStack_14c + iVar8) = 0x44e396;
      iVar13 = FUN_004168a0();
      if (iVar13 != 0) {
        *(int ****)((int)&pppiStack_148 + iVar8) = param_1;
        *(int *)((int)&pppuStack_14c + iVar8) = iVar13;
        *(undefined4 *)((int)&pppuStack_150 + iVar8) = 0x44e3a4;
        FUN_00447050();
        uVar4 = 1;
        break;
      }
      *(undefined4 *)((int)&pppiStack_148 + iVar8) = 0xa8;
      *(undefined4 *)((int)&pppuStack_14c + iVar8) = 0x44e3bb;
      local_12c = (undefined **)FUN_00401f00();
      local_110 = (undefined ***)0x4;
      if (local_12c == (undefined **)0x0) {
        uVar11 = 0;
      }
      else {
        *(undefined4 *)((int)&pppiStack_148 + iVar8) = 0x44e3d3;
        uVar11 = FUN_00416430();
      }
      *(undefined4 *)((int)&pppiStack_148 + iVar8) = uVar11;
      local_110 = (undefined ***)0xffffffff;
      *(undefined4 *)((int)&pppuStack_14c + iVar8) = 0x44e3e8;
      FUN_00451210();
      *(undefined4 *)((int)&pppiStack_148 + iVar8) = uVar11;
      *(undefined4 *)((int)&pppuStack_14c + iVar8) = 0x44e3f7;
      FUN_00446cb0();
    }
    uVar4 = 1;
    break;
  case (int ***)0x30:
    bVar1 = false;
    if (pppiVar15 == (int ***)0x0) {
      pppiStack_148 = (int ***)0x58;
      pppuStack_14c = (undefined ***)0x44df00;
      local_128 = (undefined ***)pppiVar15;
      local_12c = (undefined **)FUN_00401f00();
      local_110 = (undefined ***)0x1;
      if (local_12c == (undefined **)0x0) {
        pppiVar15 = (int ***)0x0;
      }
      else {
        pppiStack_148 = (int ***)0x44df18;
        pppiVar15 = (int ***)FUN_004d3210();
      }
      local_110 = (undefined ***)0xffffffff;
      bVar1 = true;
    }
    pppiStack_148 = param_1;
    pppuStack_150 = (undefined ***)0x44df31;
    pppuStack_14c = (undefined ***)pppiVar15;
    local_128 = (undefined ***)pppiVar15;
    FUN_00447050();
    if (*(char *)(local_120 + 0xcd1) != '\0') {
      pppiStack_148 = (int ***)0x1;
      pppuStack_14c = (undefined ***)0x44df4e;
      (*(code *)(*pppiVar15)[0x24])();
    }
    pppiStack_148 = (int ***)0x1;
    pppuStack_14c = (undefined ***)0x44df57;
    FUN_0046a9a0();
    if (bVar1) {
      pppiStack_148 = (int ***)0x44df66;
      cVar2 = FUN_004c97f0();
      if (cVar2 != '\0') {
        pppuStack_14c = *(undefined ****)(local_120 + 0xcc);
        pppiStack_148 = (int ***)&local_128;
        pppuStack_150 = (undefined ***)0x44df83;
        FUN_0052ed80();
        uVar4 = 1;
        DAT_00b33a9c = pppiVar15;
        break;
      }
      if (DAT_00b33aa0 == (int ***)0x0) {
        DAT_00b33aa0 = *(int ****)(local_120 + 0xc);
      }
      pppuStack_14c = (undefined ***)0x44dfaf;
      pppiStack_148 = pppiVar15;
      cVar2 = FUN_004efef0();
      if (cVar2 == '\0') {
        pppiStack_148 = (int ***)0x44dfba;
        cVar2 = FUN_004d7030();
        pcVar6 = "Persistent ";
        if (cVar2 == '\0') {
          pcVar6 = &DAT_00a2f7ec;
        }
        pppiStack_148 = (int ***)DAT_00b33aa0[3];
        pppuStack_14c = (undefined ***)pppiVar15[3];
        pppuStack_150 = (undefined ***)pcVar6;
        FUN_004a7a60("Error adding %scell (%08X) to world space (%08X). Cell will be destroyed.");
        pppiStack_148 = (int ***)0x1;
        pppuStack_14c = (undefined ***)0x44dfef;
        (*(code *)(*pppiVar15)[4])();
        pppiVar15 = (int ***)0x0;
      }
    }
    uVar4 = 1;
    DAT_00b33a9c = pppiVar15;
    break;
  case (int ***)0x31:
  case (int ***)0x32:
  case (int ***)0x33:
    if (DAT_00b33a9c != (int ***)0x0) {
      if (pppiVar15 == (int ***)0x0) {
        pppiStack_148 = (int ***)0x1;
        pppuStack_150 = (undefined ***)0x44e04c;
        pppuStack_14c = (undefined ***)pppiVar5;
        pppiVar15 = (int ***)FUN_004db260();
      }
      else {
        pppiStack_148 = (int ***)0x44e01e;
        (*(code *)(*pppiVar15)[0x5c])();
        pppiStack_148 = (int ***)0x44e028;
        pppiVar7 = (int ***)(*(code *)*pppiVar15[6])();
        if (pppiVar7 == DAT_00b33a9c) {
          local_119 = '\0';
        }
        else if (pppiVar7 != (int ***)0x0) {
          pppuStack_14c = (undefined ***)0x44e042;
          pppiStack_148 = pppiVar15;
          FUN_004cecd0();
        }
      }
      pppiStack_148 = param_1;
      pppuStack_150 = (undefined ***)0x44e058;
      pppuStack_14c = (undefined ***)pppiVar15;
      cVar3 = FUN_00447050();
      cVar2 = local_119;
      if (cVar3 == '\0') {
        pppiStack_148 = (int ***)0x44e06f;
        iVar8 = (*(code *)(*pppiVar15)[0x5c])();
        if (iVar8 == 0) {
          *(char *)(pppiVar15 + 1) = (char)pppiVar5;
        }
        pppiStack_148 = (int ***)0x44e081;
        cVar2 = FUN_004d7030();
        if (cVar2 == '\0') {
          pppiStack_148 = DAT_00b33a9c;
          pppuStack_14c = (undefined ***)0x44e0a8;
          (*(code *)(*pppiVar15)[0x65])();
        }
        else {
          pppiStack_148 = DAT_00b33a9c;
          pppuStack_14c = (undefined ***)0x44e094;
          FUN_004247b0();
        }
        pppuStack_14c = (undefined ***)0x44e0b9;
        pppiStack_148 = pppiVar15;
        cVar2 = FUN_00446c30();
        if (cVar2 == '\0') {
          pppuStack_14c = (undefined ***)0x44e0c5;
          pppiStack_148 = pppiVar15;
          FUN_00446cb0();
        }
        pppiStack_148 = (int ***)0x0;
        pppuStack_14c = (undefined ***)&PTR_PTR_00b05538;
        pppuStack_150 = (undefined ***)&PTR_PTR_00b03054;
        pppiVar5 = (int ***)FUN_009832e6(pppiVar15,0);
        cVar2 = '\0';
        if (pppiVar5 != (int ***)0x0) {
          pppiStack_148 = (int ***)0x3;
          pppuStack_150 = (undefined ***)0x44e0ef;
          pppuStack_14c = (undefined ***)pppiVar5;
          FUN_00674550();
        }
      }
      pppiStack_148 = (int ***)0x44e100;
      iVar8 = (*(code *)(*pppiVar15)[0x5c])();
      if (iVar8 != 0) {
        if (cVar2 == '\0') {
          if (((uint)pppiVar15[2] >> 5 & 1) != 0) {
            pppiStack_148 = (int ***)0x44e151;
            piVar9 = (int *)(*(code *)(*pppiVar15)[0x5c])();
            pcVar10 = *(code **)(*piVar9 + 0x10c);
            goto LAB_0044e15b;
          }
        }
        else {
          pppuStack_14c = (undefined ***)0x44e118;
          pppiStack_148 = pppiVar15;
          FUN_004d35d0();
          if (((uint)pppiVar15[2] >> 5 & 1) == 0) {
            pppiStack_148 = (int ***)0x44e12e;
            piVar9 = (int *)(*(code *)(*pppiVar15)[0x5c])();
            pcVar10 = *(code **)(*piVar9 + 0x108);
LAB_0044e15b:
            pppiStack_148 = (int ***)0x44e15d;
            (*pcVar10)();
          }
        }
        if (((DAT_00b33b00 != 0) && ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xc & 1) != 0)) &&
           (pppiVar15[0xf] != (int **)0x0)) {
          pppiStack_148 = (int ***)0x0;
          pppuStack_14c = (undefined ***)0x44e185;
          (*(code *)(*pppiVar15)[0x54])();
        }
        pppiStack_148 = (int ***)0x44e18c;
        cVar2 = FUN_004db4a0();
        if ((cVar2 != '\0') && ((float)param_1[0xf4] < 0.2)) {
          pppiStack_148 = (int ***)0x44e1b7;
          piVar9 = (int *)(*(code *)(*pppiVar15)[0x5c])();
          local_128 = (undefined ***)DAT_00b33a9c[3];
          pppiStack_148 = (int ***)0x44e1cf;
          local_120 = (*(code *)(*DAT_00b33a9c)[0x35])();
          iVar8 = piVar9[3];
          pppiStack_148 = (int ***)0x44e1e4;
          uVar11 = (**(code **)(*piVar9 + 0xd4))();
          local_12c = (undefined **)pppiVar15[3];
          pppiStack_148 = param_1 + 7;
          pppuStack_14c = local_128;
          pppuStack_150 = (undefined ***)0x44e1ff;
          pppuStack_150 = (undefined ***)FUN_004c9aa0();
          uVar12 = FUN_004c9a80();
          FUN_004a7a60("ref (%08X) to base object %s (%08X) in cell %s (%i, %i) (%08X) is persistent in the non-persistent file %s."
                       ,local_12c,uVar11,iVar8,local_120,uVar12);
          pppiVar15[2] = (int **)((uint)pppiVar15[2] & 0xfffffbff);
        }
      }
      uVar4 = 1;
      break;
    }
    goto LAB_0044e672;
  case (int ***)0x34:
    if (DAT_00b33a9c != (int ***)0x0) {
      pppiStack_148 = (int ***)0x44e2c6;
      pppiVar5 = (int ***)FUN_004af170();
      if (pppiVar5 == (int ***)0x0) {
        pppiStack_148 = (int ***)0x54;
        pppuStack_14c = (undefined ***)0x44e2d3;
        local_12c = (undefined **)FUN_00401f00();
        local_110 = (undefined ***)0x3;
        if (local_12c == (undefined **)0x0) {
          pppiVar5 = (int ***)0x0;
        }
        else {
          pppiStack_148 = (int ***)0x44e2eb;
          pppiVar5 = (int ***)FUN_004e6070();
        }
        local_110 = (undefined ***)0xffffffff;
      }
      pppiStack_148 = DAT_00b33a9c;
      pppuStack_14c = (undefined ***)0x44e306;
      FUN_004a6d70();
      pppuStack_14c = (undefined ***)0x44e312;
      pppiStack_148 = pppiVar5;
      FUN_004c9b10();
      pppiStack_148 = param_1;
      pppuStack_150 = (undefined ***)0x44e319;
      pppuStack_14c = (undefined ***)pppiVar5;
      FUN_00447050();
      uVar4 = 1;
      break;
    }
    pppiStack_148 = (int ***)0xa384a0;
    pppuStack_14c = (undefined ***)0x44e2b9;
    FUN_004a7a60();
LAB_0044e672:
    uVar4 = 0;
    break;
  case (int ***)0x35:
    if (pppiVar15 == (int ***)0x0) {
      pppiStack_148 = (int ***)0xe0;
      pppuStack_14c = (undefined ***)0x44e40f;
      local_12c = (undefined **)FUN_00401f00();
      local_110 = (undefined ***)0x5;
      if (local_12c == (undefined **)0x0) {
        pppiVar5 = (int ***)0x0;
      }
      else {
        pppiStack_148 = (int ***)0x44e427;
        pppiVar5 = (int ***)FUN_004f2a10();
      }
      pppiStack_148 = param_1;
      local_110 = (undefined ***)0xffffffff;
      pppuStack_150 = (undefined ***)0x44e43b;
      pppuStack_14c = (undefined ***)pppiVar5;
      FUN_00447050();
      pppuStack_14c = (undefined ***)0x44e44a;
      pppiStack_148 = pppiVar5;
      FUN_0067b1e0();
      uVar4 = 1;
      DAT_00b33aa0 = pppiVar5;
    }
    else {
      pppiStack_148 = param_1;
      pppuStack_150 = (undefined ***)0x44e461;
      pppuStack_14c = (undefined ***)pppiVar15;
      FUN_00447050();
      uVar4 = 1;
      DAT_00b33aa0 = pppiVar15;
    }
    break;
  case (int ***)0x36:
    if (DAT_00b33a9c != (int ***)0x0) {
      pppiStack_148 = (int ***)0x44e246;
      pppiVar15 = (int ***)FUN_004ce3c0();
      if (pppiVar15 == (int ***)0x0) {
        pppiStack_148 = (int ***)0x28;
        pppuStack_14c = (undefined ***)0x44e253;
        local_12c = (undefined **)FUN_00401f00();
        local_110 = (undefined ***)0x2;
        if (local_12c == (undefined **)0x0) {
          pppiVar15 = (int ***)0x0;
        }
        else {
          pppiStack_148 = (int ***)0x44e26b;
          pppiVar15 = (int ***)FUN_004c4c00();
        }
        pppiStack_148 = DAT_00b33a9c;
        local_110 = (undefined ***)0xffffffff;
        pppuStack_14c = (undefined ***)0x44e285;
        FUN_004bfdc0();
        pppuStack_14c = (undefined ***)0x44e291;
        pppiStack_148 = pppiVar15;
        FUN_004c9ae0();
      }
      goto LAB_0044e291;
    }
    goto LAB_0044e29b;
  case (int ***)0x38:
    bVar1 = false;
    if (pppiVar15 == (int ***)0x0) {
      pppiStack_148 = (int ***)0x30;
      pppuStack_14c = (undefined ***)0x44de90;
      local_12c = (undefined **)FUN_00401f00();
      if (local_12c == (undefined **)0x0) {
        pppiVar15 = (int ***)0x0;
      }
      else {
        pppiStack_148 = (int ***)0x44dea4;
        local_110 = (undefined ***)pppiVar15;
        pppiVar15 = (int ***)FUN_004e8fa0();
      }
      local_110 = (undefined ***)0xffffffff;
      bVar1 = true;
    }
    pppiStack_148 = param_1;
    pppuStack_150 = (undefined ***)0x44deba;
    pppuStack_14c = (undefined ***)pppiVar15;
    FUN_00447050();
    if (bVar1) {
      if (DAT_00b33aa0 == (int ***)0x0) {
        DAT_00b33aa0 = *(int ****)(local_120 + 0xc);
      }
      pppuStack_14c = (undefined ***)0x44dedd;
      pppiStack_148 = pppiVar15;
      FUN_004ef100();
      pppiVar15[0xb] = (int **)DAT_00b33aa0;
    }
    uVar4 = 1;
    break;
  case (int ***)0x39:
    if (pppiVar15 == (int ***)0x0) {
      pppiStack_148 = (int ***)0x3c;
      pppuStack_14c = (undefined ***)0x44e483;
      local_12c = (undefined **)FUN_00401f00();
      local_110 = (undefined ***)0x6;
      if (local_12c == (undefined **)0x0) {
        pppiVar5 = (int ***)0x0;
      }
      else {
        pppuStack_14c = (undefined ***)0x44e49c;
        pppiStack_148 = pppiVar15;
        pppiVar5 = (int ***)FUN_0052fb40();
      }
      pppiStack_148 = param_1;
      local_110 = (undefined ***)0xffffffff;
      pppuStack_150 = (undefined ***)0x44e4b0;
      pppuStack_14c = (undefined ***)pppiVar5;
      FUN_00447050();
      pppuStack_14c = (undefined ***)0x44e4bf;
      pppiStack_148 = pppiVar5;
      FUN_0067b1e0();
      uVar4 = 1;
      break;
    }
    goto LAB_0044e291;
  case (int ***)0x3a:
    if (pppiVar15 == (int ***)0x0) {
      pppiStack_148 = (int ***)0x38;
      pppuStack_14c = (undefined ***)0x44e4d4;
      local_12c = (undefined **)FUN_00401f00();
      local_110 = (undefined ***)0x7;
      if (local_12c == (undefined **)0x0) {
        pppiVar15 = (int ***)0x0;
      }
      else {
        pppuStack_14c = (undefined ***)0x44e4ed;
        pppiStack_148 = pppiVar15;
        pppiVar15 = (int ***)FUN_00530ae0();
      }
      local_110 = (undefined ***)0xffffffff;
    }
    pppiStack_148 = param_1;
    pppuStack_150 = (undefined ***)0x44e507;
    DAT_00b33aa4 = pppiVar15;
    pppuStack_14c = (undefined ***)pppiVar15;
    uVar4 = FUN_00447050();
    break;
  case (int ***)0x3c:
    if (pppiVar15 == (int ***)0x0) {
      pppuStack_14c = (undefined ***)0x44e564;
      pppuStack_150 = (undefined ***)FUN_00447df0();
      pppuStack_14c = (undefined ***)param_1;
      FUN_00447050();
      uVar4 = 1;
      break;
    }
LAB_0044e291:
    pppiStack_148 = param_1;
    pppuStack_150 = (undefined ***)0x44e298;
    pppuStack_14c = (undefined ***)pppiVar15;
    FUN_00447050();
LAB_0044e29b:
    uVar4 = 1;
  }
  *unaff_FS_OFFSET = local_118;
  return uVar4;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0044e720(char param_1)

{
  bool bVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  char *_FullPath;
  undefined4 uVar9;
  undefined4 uVar10;
  int in_ECX;
  int iVar11;
  int *unaff_FS_OFFSET;
  char *pcVar12;
  char *_Dir;
  char *_Filename;
  undefined1 auStack_6f4 [27];
  char cStack_6d9;
  int iStack_6d8;
  int iStack_6d4;
  int *piStack_6d0;
  float fStack_6cc;
  uint uStack_6c8;
  float fStack_6c4;
  int *local_6c0;
  int local_6bc;
  int iStack_6b8;
  int iStack_6b4;
  int local_6b0;
  char acStack_6ac [4];
  float fStack_6a8;
  float fStack_6a4;
  char acStack_6a0 [264];
  char acStack_598 [264];
  char acStack_490 [264];
  char acStack_388 [256];
  char acStack_288 [516];
  uint local_84;
  int local_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  
  uStack_44 = 0xffffffff;
  puStack_48 = &LAB_009add4a;
  local_4c = *unaff_FS_OFFSET;
  local_84 = DAT_00b30aac ^ (uint)auStack_6f4;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffff900;
  *unaff_FS_OFFSET = (int)&local_4c;
  if (DAT_00b05584 == '\0') {
    *(undefined1 *)(in_ECX + 0xcd6) = 1;
    local_6bc = in_ECX;
    if (DAT_00b055a4 != '\0') {
      FUN_0040d160(uVar5);
    }
    if (DAT_00b0558c != '\0') {
      FUN_006f7070("TestModels - Collision Info.xls");
    }
    piVar6 = (int *)FUN_004b2460();
    local_6b0 = 0;
    if (piVar6 != (int *)0x0) {
LAB_0044e7bd:
      local_6c0 = piVar6;
      if (((uint)piVar6[2] >> 5 & 1) == 0) {
        iVar11 = 0;
        do {
          if ((&DAT_00b081ac)[iVar11] == (char)piVar6[1]) {
            iStack_6d8 = iVar11;
            if (iVar11 < 0x24) {
              cStack_6d9 = '\0';
              cVar4 = (**(code **)(*piVar6 + 0xf4))();
              if (cVar4 != '\0') {
                cStack_6d9 = '\x01';
              }
              piVar7 = (int *)FUN_009832e6(piVar6,0,&PTR_PTR_00b03268,&PTR_PTR_00b03304);
              piStack_6d0 = (int *)FUN_009832e6(piVar6,0,&PTR_PTR_00b03268,&PTR_PTR_00b03248);
              iStack_6d4 = FUN_009832e6(piVar6,0,&PTR_PTR_00b03268,&PTR_PTR_00b036dc,0);
              if (piVar7 == (int *)0x0) {
                uStack_6c8 = -(uint)(iStack_6d4 != 0) & 4;
                if (uStack_6c8 == 0) goto LAB_0044e7fa;
              }
              else {
                uStack_6c8 = 1;
              }
              goto LAB_0044e8c3;
            }
            break;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < 0x24);
        (**(code **)(*piVar6 + 0xd4))();
        FUN_004a7a60("Object \"%s\" invalid type.");
      }
      goto LAB_0044e7fa;
    }
LAB_0044e80f:
    *(undefined1 *)(in_ECX + 0xcd6) = 0;
  }
  *unaff_FS_OFFSET = local_4c;
  return;
  while (uStack_6c8 = uStack_6c8 - 1, uStack_6c8 != 0) {
LAB_0044e8c3:
    if (iStack_6d4 == 0) goto switchD_0044e8d5_default;
    switch(uStack_6c8) {
    case 1:
      piVar7 = (int *)FUN_00469240();
      break;
    case 2:
      piVar7 = (int *)FUN_00469240();
      break;
    case 3:
      goto LAB_0044e8fa;
    case 4:
LAB_0044e8fa:
      piVar7 = (int *)FUN_00469290();
    }
switchD_0044e8d5_default:
    if (cStack_6d9 == '\0') {
      if (*(ushort *)(piVar7 + 2) == 0xffff) {
        pcVar8 = (char *)piVar7[1];
        pcVar12 = pcVar8 + 1;
        do {
          cVar4 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar4 != '\0');
        uVar5 = (int)pcVar8 - (int)pcVar12;
      }
      else {
        uVar5 = (uint)*(ushort *)(piVar7 + 2);
      }
      if (uVar5 == 0) {
        if (((iStack_6d8 != 0xe) && (iStack_6d8 != 8)) && (DAT_00b0559c != '\0')) {
          (**(code **)(*piVar6 + 0xd4))();
          FUN_004a7a60();
        }
      }
      else {
        (**(code **)(*piVar7 + 0x14))();
        if (iStack_6d8 == 0xc) {
          pcVar12 = "Trees\\%s";
        }
        else {
          pcVar12 = "Meshes\\%s";
        }
        _sprintf(acStack_6a0,pcVar12);
        if ((DAT_00b33a04 == (int *)0x0) ||
           (iVar11 = (**(code **)(*DAT_00b33a04 + 4))(acStack_6a0,0,0), piVar2 = piStack_6d0,
           iVar11 == 0)) {
          if (DAT_00b05594 != '\0') {
            pcVar8 = acStack_388;
            _Filename = acStack_288;
            _Dir = acStack_598;
            pcVar12 = acStack_6ac;
            _FullPath = (char *)(**(code **)(*piVar7 + 0x14))();
            __splitpath(_FullPath,pcVar12,_Dir,_Filename,pcVar8);
            _sprintf(acStack_6a0,"x%s");
            iVar11 = 0;
            do {
              pcVar12 = acStack_6a0 + iVar11;
              acStack_288[iVar11] = *pcVar12;
              iVar11 = iVar11 + 1;
            } while (*pcVar12 != '\0');
            _sprintf(acStack_6a0,"Meshes\\%s");
            iVar11 = 0;
            do {
              pcVar12 = acStack_6a0 + iVar11;
              acStack_598[iVar11] = *pcVar12;
              iVar11 = iVar11 + 1;
            } while (*pcVar12 != '\0');
            __makepath(acStack_6a0,acStack_6ac,acStack_598,acStack_288,acStack_388);
            if ((DAT_00b33a04 == (int *)0x0) ||
               (iVar11 = (**(code **)(*DAT_00b33a04 + 4))(acStack_6a0,0,0), iVar11 == 0)) {
              (**(code **)(*piVar6 + 0xd4))();
              (**(code **)(*piVar7 + 0x14))((&PTR_s_Activator_00b081d0)[iStack_6d8]);
              FUN_004a7a60();
            }
            else {
              FUN_00448e20();
            }
          }
        }
        else if ((piStack_6d0 != (int *)0x0) &&
                (((DAT_00b055a4 != '\0' || (param_1 != '\0')) || (DAT_00b0558c != '\0')))) {
          (**(code **)(*piStack_6d0 + 0xd4))();
          (**(code **)(*piVar7 + 0x14))((&PTR_s_Activator_00b081d0)[iStack_6d8]);
          _sprintf(acStack_490,"Loading \"%s\" for %s \"%s\".");
          FUN_00579b60();
          FUN_0040d4d0();
          if ((char)piVar2[1] == '#') {
            fStack_6cc = (float)FUN_00401f00();
            uStack_44 = 0;
            if (fStack_6cc == 0.0) goto LAB_0044eba8;
            piVar6 = (int *)FUN_0060e4f0();
          }
          else if ((char)piVar2[1] == '$') {
            fStack_6cc = (float)FUN_00401f00();
            uStack_44 = 1;
            if (fStack_6cc == 0.0) {
LAB_0044eba8:
              piVar6 = (int *)0x0;
            }
            else {
              piVar6 = (int *)FUN_006250a0();
            }
          }
          else {
            fStack_6cc = (float)FUN_00401f00();
            uStack_44 = 2;
            if (fStack_6cc == 0.0) goto LAB_0044eba8;
            piVar6 = (int *)FUN_004d9a70();
          }
          uStack_44 = 0xffffffff;
          FUN_006c5420();
          if (*(byte *)(piStack_6d0 + 1) - 0x23 < 2) {
            if (((DAT_00b0558c == '\0') || (DAT_00b055a4 != '\0')) || (param_1 != '\0')) {
              ModelLoader_QueueReference(piVar6,0);
              FUN_00434020();
            }
          }
          else {
            (**(code **)(*piVar6 + 0x14c))();
          }
          iVar11 = (**(code **)(*piVar6 + 0x154))();
          if (iVar11 != 0) {
            uVar9 = (**(code **)(*piVar7 + 0x14))();
            uVar10 = (**(code **)(*piVar6 + 0x154))();
            FUN_0044cdf0(uVar10,uVar9);
          }
          if (((DAT_00b0558c != '\0') && ((char)piStack_6d0[1] != '#')) &&
             ((char)piStack_6d0[1] != '$')) {
            iStack_6b8 = 0;
            iStack_6b4 = 0;
            (**(code **)(*piVar6 + 0x154))(&iStack_6b8,&iStack_6b4);
            FUN_005367b0();
            fStack_6a8 = (float)piVar7[3];
            fStack_6c4 = 0.0;
            if (DAT_00b333a0 != 0) {
              uVar10 = 1;
              (**(code **)(*piVar6 + 0x154))();
              uVar9 = FUN_00560920();
              fStack_6c4 = (float)FUN_00442770(uVar9,uVar10);
            }
            fVar3 = fStack_6c4;
            fStack_6a4 = (float)iStack_6b4;
            fStack_6c4 = (float)(int)fStack_6c4;
            fStack_6cc = (float)iStack_6b8;
            uVar9 = (**(code **)(*piVar7 + 0x14))
                              ((double)fStack_6a8,fVar3,iStack_6b8,(double)(fStack_6cc / fStack_6a8)
                               ,(double)(fStack_6cc / fStack_6c4),iStack_6b4,
                               (double)(fStack_6a4 / fStack_6a8),(double)(fStack_6a4 / fStack_6c4));
            FUN_006f7070("TestModels - Collision Info.xls",
                         "%s\t%.2f\t%i\t%i\t%.2f\t%.2f\t%i\t%.2f\t%.2f",uVar9);
          }
          (**(code **)(*piVar6 + 0x10))();
          iVar11 = local_6b0 + 1;
          bVar1 = 0x14 < local_6b0;
          piVar6 = local_6c0;
          local_6b0 = iVar11;
          if (bVar1) {
            FUN_0043fc20();
            local_6b0 = 0;
            piVar6 = local_6c0;
          }
        }
      }
    }
  }
  uStack_6c8 = 0;
LAB_0044e7fa:
  piVar6 = (int *)FUN_004b2360();
  in_ECX = local_6bc;
  if (piVar6 == (int *)0x0) goto LAB_0044e80f;
  goto LAB_0044e7bd;
}



void FUN_0044ede0(byte param_1)

{
  FUN_0044d8e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0044ee00(uint param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  bool bVar8;
  int local_20;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009add8e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((_DAT_00b33ad4 & 1) == 0) {
    _DAT_00b33ad4 = _DAT_00b33ad4 | 1;
    local_4 = 0;
    FUN_0044d720(0x25);
    _atexit(FUN_00a18360);
  }
  local_4 = 0xffffffff;
  bVar8 = DAT_00b33ac0 == 0;
  *param_2 = DAT_00b3f9a8;
  param_2[1] = DAT_00b3f9ac;
  local_20 = 0;
  param_2[2] = DAT_00b3f9b0;
  if ((bVar8) && (param_3 != 0)) {
    FUN_004526e0(uVar2);
  }
  uVar2 = param_1;
  iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
  iVar4 = FUN_009832e6(uVar2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
  if (((iVar4 == 0) || (cVar1 = FUN_004c97f0(), cVar1 == '\0')) &&
     ((iVar3 == 0 || (cVar1 = FUN_004ef130(), cVar1 == '\0')))) {
    local_20 = 0;
    goto LAB_0044f0a2;
  }
  DAT_00b33ac0 = DAT_00b33ac0 + 1;
  FUN_00452570(uVar2,1);
  local_14 = 0;
  local_10 = 0;
  if (iVar4 == 0) {
    FUN_004ef270(&local_14);
  }
  else {
    FUN_004cbd30(&local_14);
  }
  piVar6 = &local_14;
  do {
    iVar3 = *piVar6;
    piVar6 = (int *)piVar6[1];
    if (((iVar3 != 0) && ((*(uint *)(iVar3 + 8) >> 5 & 1) == 0)) &&
       ((*(uint *)(iVar3 + 8) >> 0xb & 1) == 0)) {
      FUN_004d7630();
      iVar4 = FUN_0042b470();
      if ((iVar4 != 0) && (cVar1 = FUN_004ef130(), cVar1 == '\0')) {
        puVar5 = (undefined4 *)FUN_006899c0();
        *param_2 = *puVar5;
        param_2[1] = puVar5[1];
        param_2[2] = puVar5[2];
        local_20 = iVar4;
        iVar4 = param_3;
        goto joined_r0x0044ef9d;
      }
    }
  } while (piVar6 != (int *)0x0);
  piVar6 = &local_14;
  do {
    if (local_20 != 0) break;
    iVar3 = *piVar6;
    piVar6 = (int *)piVar6[1];
    if (((iVar3 != 0) && ((*(uint *)(iVar3 + 8) >> 5 & 1) == 0)) &&
       ((*(uint *)(iVar3 + 8) >> 0xb & 1) == 0)) {
      FUN_004d7630();
      iVar7 = FUN_0042b460();
      iVar4 = FUN_0042b470();
      if ((((iVar7 == 0) || (cVar1 = FUN_004c97f0(), cVar1 == '\0')) && (iVar7 = 0, iVar4 != 0)) &&
         (cVar1 = FUN_004ef130(), cVar1 != '\0')) {
        iVar7 = iVar4;
      }
      param_1 = param_1 & 0xffffff00;
      cVar1 = FUN_004d6760(iVar7,&param_1);
      iVar4 = param_3;
      if (((cVar1 == '\0') || ((char)param_1 == '\0')) &&
         (local_20 = FUN_0044ee00(iVar7,param_2,param_3), local_20 != 0)) goto joined_r0x0044ef9d;
    }
  } while (piVar6 != (int *)0x0);
LAB_0044f07e:
  DAT_00b33ac0 = DAT_00b33ac0 + -1;
  if (DAT_00b33ac0 == 0) {
    FUN_007c2a40();
  }
  FUN_004526e0();
LAB_0044f0a2:
  *unaff_FS_OFFSET = local_c;
  return local_20;
joined_r0x0044ef9d:
  if (iVar4 != 0) {
    FUN_00446cb0(iVar3);
  }
  goto LAB_0044f07e;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0044f0c0(int param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auStack_11c [3];
  char local_119;
  int local_118;
  undefined4 local_114;
  int local_110;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_11c;
  cVar1 = FUN_00451a40(0,0);
  if (cVar1 == '\0') {
    FUN_004a7a60("DataHandler: internal error");
  }
  local_114 = 1;
  local_110 = 0;
  DAT_00b33a9c = 0;
  DAT_00b33aa0 = 0;
  DAT_00b33aa4 = 0;
  do {
    local_119 = '\x01';
    cVar1 = '\x01';
    iVar3 = FUN_004511c0();
    if (iVar3 == 2) {
      cVar2 = FUN_00448c60(param_1,param_1 + 0x23c);
      if ((cVar2 == '\0') && (local_119 = cVar2, cVar2 = FUN_00451580(), cVar2 == '\0')) {
        cVar1 = '\0';
      }
    }
    else {
      iVar3 = FUN_004511c0();
      if (iVar3 == 0x44) {
        iVar3 = *(int *)(param_1 + 0x248);
        if (iVar3 == -1) {
          local_119 = '\0';
          cVar1 = '\0';
        }
        else if (iVar3 == -2) {
          FUN_00738500(*(int *)(param_1 + 0x25c) + 0x14,*(undefined4 *)(param_1 + 0x240));
          local_119 = '\0';
          cVar1 = '\0';
        }
        else if (DAT_00b33aa4 == 0) {
          if (DAT_00b33aa0 == 0) {
            if ((DAT_00b33a9c != 0) && (cVar2 = FUN_004c97f0(), cVar2 != '\0')) {
              FUN_004c9d20(iVar3);
            }
          }
          else {
            FUN_004ef030(iVar3 - *(int *)(param_1 + 0x25c));
          }
        }
        else {
          *(int *)(DAT_00b33aa4 + 0x34) = iVar3;
        }
      }
      else {
        iVar3 = FUN_0044dcf0(param_1,param_2);
        if (iVar3 == 0) {
          local_114 = 0;
        }
        else if ((DAT_00b33b00 == 0) || ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xc & 1) == 0)) {
          piVar4 = (int *)FUN_0046b250(*(undefined4 *)(param_1 + 0x248));
          if (piVar4 != (int *)0x0) {
            switch((char)piVar4[1]) {
            case '#':
            case '$':
            case '1':
            case '2':
            case '3':
              break;
            default:
              pcVar5 = (char *)(**(code **)(*piVar4 + 0xd4))();
              if (pcVar5 != (char *)0x0) {
                pcVar6 = pcVar5;
                do {
                  cVar2 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                } while (cVar2 != '\0');
                if (pcVar6 != pcVar5 + 1) {
                  FUN_00412d30(pcVar5,piVar4);
                }
              }
            }
          }
        }
        else {
          DAT_00b33ad8 = DAT_00b33ad8 + 1;
          if ((char)DAT_00b33ad8 == '\0') {
            FUN_004523a0(0,0x3f800000);
          }
          iVar3 = FUN_0046b250(*(undefined4 *)(param_1 + 0x248));
          if (iVar3 != 0) {
            FUN_00461fa0(iVar3);
          }
        }
      }
    }
    DAT_00b33a94 = DAT_00b33a94 + 1;
    local_118 = DAT_00b33a94;
    local_118 = FUN_009828c0();
    if (local_118 != local_110) {
      local_110 = local_118;
      _sprintf(local_108,"Loading Files %d%% (%s)",local_118,param_1 + 0x1c);
      FUN_0057b950(0,(float)local_118);
    }
    if (local_119 != '\0') {
      cVar1 = FUN_004518b0(1);
    }
  } while (cVar1 != '\0');
  cVar1 = FUN_004507d0();
  if (cVar1 == '\0') {
    FUN_004a7a60("DataHandler: internal error");
  }
  return local_114;
}



undefined4 FUN_0044f3d0(char param_1,char param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int *piVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int in_ECX;
  uint uVar11;
  int iVar12;
  int unaff_FS_OFFSET;
  undefined3 uStack00000009;
  
  iVar12 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  *(undefined1 *)(iVar12 + 0x184) = 1;
  if ((param_1 != '\0') || (param_2 != '\0')) {
    *(undefined4 *)(in_ECX + 0x8d0) = 0;
  }
  FUN_00442630(0,0);
  if ((param_1 == '\0') && (param_2 == '\0')) {
    *(undefined4 *)(DAT_00b333a0 + 0x74) = 0;
  }
  *(undefined4 *)(DAT_00b333a0 + 0x34) = 0;
  FUN_0043f220();
  piVar10 = (int *)(in_ECX + 0x8c8);
  uVar3 = DAT_00b06b18;
  if (*(char *)(in_ECX + 0xcd1) != '\0') {
    FUN_00451a60();
    FUN_0044fc70(piVar10,1);
    uVar3 = DAT_00b06b18;
  }
  for (; (piVar10 != (int *)0x0 && (*piVar10 != 0)); piVar10 = (int *)piVar10[1]) {
    DAT_00b06b18 = uVar3;
    cVar6 = FUN_0044fac0();
    if (cVar6 != '\0') {
      FUN_00451a60();
      FUN_0044fc70(in_ECX + 0x8c8,1);
      cVar6 = FUN_004504b0();
      if (cVar6 == '\0') {
        uVar7 = FUN_0044fdd0();
        uVar11 = 0;
        if (uVar7 != 0) {
          do {
            uVar1 = uVar11 + 1;
            iVar8 = FUN_0044fd60(uVar1);
            if ((iVar8 == 0) || (cVar6 = FUN_004504b0(), cVar6 != '\0')) {
              iVar8 = FUN_0044fd90(uVar11 + 1);
              if (iVar8 != 0) {
                uVar9 = FUN_0044fd90(uVar11 + 1);
                FUN_00404ec0("Unable to find masterfile: %s",uVar9);
                *(undefined1 *)(iVar12 + 0x184) = 0;
                return 0;
              }
              FUN_00404ec0("Unable to find masterfile: <unknown>");
              *(undefined1 *)(iVar12 + 0x184) = 0;
              return 0;
            }
            FUN_0044fad0(1);
            uVar11 = uVar1;
          } while (uVar1 < uVar7);
        }
      }
      else {
        FUN_0044fad0(0);
      }
    }
    uVar3 = DAT_00b06b18;
  }
  bVar5 = false;
  uStack00000009 = (undefined3)((uint)piVar10 >> 8);
  _param_2 = CONCAT31(uStack00000009,uVar3);
  DAT_00b06b18 = 1;
  for (piVar10 = (int *)(in_ECX + 0x8c8); (piVar10 != (int *)0x0 && (iVar8 = *piVar10, iVar8 != 0));
      piVar10 = (int *)piVar10[1]) {
    cVar6 = FUN_0044fac0();
    if (cVar6 != '\0') {
      cVar6 = FUN_0044faa0();
      if (((cVar6 == '\0') && (*(char *)(in_ECX + 0xcd0) == '\0')) &&
         (cVar6 = FUN_0044fde0(), cVar6 != '\0')) {
        bVar5 = true;
        FUN_004a7a60(PTR_s_One_of_the_files_that___s__is_de_00b05574,iVar8 + 0x1c);
      }
      cVar6 = FUN_0044faf0();
      if (cVar6 == '\0') {
        *(int *)(in_ECX + 0x8d4 + *(int *)(in_ECX + 0x8d0) * 4) = iVar8;
        uVar2 = *(undefined1 *)(in_ECX + 0x8d0);
        *(int *)(in_ECX + 0x8d0) = *(int *)(in_ECX + 0x8d0) + 1;
        FUN_0044fb20(uVar2);
        if (0xfe < *(uint *)(in_ECX + 0x8d0)) {
          FUN_00404ec0("Too many selected files to compile!");
        }
      }
      else {
        *(int *)(in_ECX + 0x8c4) = iVar8;
      }
    }
  }
  *(undefined4 *)(in_ECX + 0x8c0) = 0xff000800;
  if (bVar5) {
    FUN_004a7a60(PTR_s_One_or_more_plugins_could_not_fi_00b0557c);
  }
  DAT_00b06b18 = uVar3;
  if (*(int *)(in_ECX + 0x8c4) != 0) {
    *(int *)(in_ECX + 0x8d4 + *(int *)(in_ECX + 0x8d0) * 4) = *(int *)(in_ECX + 0x8c4);
    uVar3 = *(undefined1 *)(in_ECX + 0x8d0);
    *(int *)(in_ECX + 0x8d0) = *(int *)(in_ECX + 0x8d0) + 1;
    FUN_0044fb20(uVar3);
    if (0xfe < *(uint *)(in_ECX + 0x8d0)) {
      FUN_00404ec0("Too many selected files to compile!");
    }
  }
  FUN_0044ac20();
  uVar11 = 0;
  if (*(int *)(in_ECX + 0x8d0) != 0) {
    piVar10 = (int *)(in_ECX + 0x8d4);
    do {
      cVar6 = FUN_00451a40(0,0);
      if (cVar6 == '\0') {
        FUN_004a7a60("DataHandler: internal error");
      }
      else {
        DAT_00b33a90 = DAT_00b33a90 + *(int *)(*piVar10 + 0x3d4);
      }
      uVar11 = uVar11 + 1;
      piVar10 = piVar10 + 1;
    } while (uVar11 < *(uint *)(in_ECX + 0x8d0));
  }
  uVar11 = 0;
  DAT_00b33a94 = 0;
  *(undefined1 *)(in_ECX + 0xcd7) = 1;
  if (*(int *)(in_ECX + 0x8d0) != 0) {
    do {
      uVar7 = _param_2;
      _param_2 = _param_2 & 0xffffff00;
      if ((uVar11 == 0) && (param_1 == '\0')) {
        uStack00000009 = SUB43(uVar7,1);
        _param_2 = CONCAT31(uStack00000009,1);
      }
      iVar8 = FUN_0044f0c0(*(undefined4 *)(in_ECX + 0x8d4 + uVar11 * 4),_param_2);
      if (iVar8 == 0) {
        uVar9 = FUN_00494480();
        FUN_004a7a60("DataHandler: unrecognized form\r\nLook in the %s file for more info.\r\n",
                     uVar9);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(in_ECX + 0x8d0));
  }
  *(undefined1 *)(in_ECX + 0xcd7) = 0;
  for (piVar10 = (int *)(in_ECX + 0x44); (piVar10 != (int *)0x0 && ((int *)*piVar10 != (int *)0x0));
      piVar10 = (int *)piVar10[1]) {
    (**(code **)(*(int *)*piVar10 + 0x6c))();
  }
  for (piVar10 = (int *)(in_ECX + 0x5c); (piVar10 != (int *)0x0 && ((int *)*piVar10 != (int *)0x0));
      piVar10 = (int *)piVar10[1]) {
    (**(code **)(*(int *)*piVar10 + 0x6c))();
  }
  for (piVar10 = (int *)(in_ECX + 0x84); (piVar10 != (int *)0x0 && ((int *)*piVar10 != (int *)0x0));
      piVar10 = (int *)piVar10[1]) {
    (**(code **)(*(int *)*piVar10 + 0x6c))();
  }
  for (piVar10 = (int *)(in_ECX + 0x8c); (piVar10 != (int *)0x0 && ((int *)*piVar10 != (int *)0x0));
      piVar10 = (int *)piVar10[1]) {
    (**(code **)(*(int *)*piVar10 + 0x6c))();
  }
  for (piVar10 = (int *)(in_ECX + 0x94); (piVar10 != (int *)0x0 && ((int *)*piVar10 != (int *)0x0));
      piVar10 = (int *)piVar10[1]) {
    (**(code **)(*(int *)*piVar10 + 0x6c))();
  }
  for (piVar10 = (int *)(in_ECX + 0xac); (piVar10 != (int *)0x0 && ((int *)*piVar10 != (int *)0x0));
      piVar10 = (int *)piVar10[1]) {
    (**(code **)(*(int *)*piVar10 + 0x6c))();
  }
  for (piVar10 = (int *)(in_ECX + 0x9c); (piVar10 != (int *)0x0 && ((int *)*piVar10 != (int *)0x0));
      piVar10 = (int *)piVar10[1]) {
    (**(code **)(*(int *)*piVar10 + 0x6c))();
  }
  for (piVar10 = (int *)(in_ECX + 0xb4); (piVar10 != (int *)0x0 && ((int *)*piVar10 != (int *)0x0));
      piVar10 = (int *)piVar10[1]) {
    (**(code **)(*(int *)*piVar10 + 0x6c))();
  }
  for (piVar10 = (int *)(in_ECX + 0xa4); (piVar10 != (int *)0x0 && ((int *)*piVar10 != (int *)0x0));
      piVar10 = (int *)piVar10[1]) {
    (**(code **)(*(int *)*piVar10 + 0x6c))();
  }
  for (piVar10 = (int *)(in_ECX + 0x4c); (piVar10 != (int *)0x0 && ((int *)*piVar10 != (int *)0x0));
      piVar10 = (int *)piVar10[1]) {
    (**(code **)(*(int *)*piVar10 + 0x6c))();
  }
  piVar10 = (int *)(in_ECX + 0x8c8);
  bVar5 = false;
  iVar8 = 0;
  if (piVar10 != (int *)0x0) {
    do {
      if (*piVar10 == 0) break;
      cVar6 = FUN_0044fac0();
      if (cVar6 != '\0') {
        iVar8 = iVar8 + 1;
      }
      piVar10 = (int *)piVar10[1];
    } while (piVar10 != (int *)0x0);
    if (iVar8 == 1) {
      bVar5 = true;
      goto LAB_0044f8fe;
    }
  }
  FUN_0052f6d0(0);
LAB_0044f8fe:
  FUN_00402860();
  for (piVar10 = (int *)(in_ECX + 0x7c); (piVar10 != (int *)0x0 && ((int *)*piVar10 != (int *)0x0));
      piVar10 = (int *)piVar10[1]) {
    (**(code **)(*(int *)*piVar10 + 0x6c))();
  }
  if (!bVar5) {
    FUN_0052fae0(0);
  }
  piVar10 = (int *)FUN_004b2460();
  while (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0x6c))();
    piVar10 = (int *)FUN_004b2360();
  }
  *(undefined1 *)(iVar12 + 0x184) = 0;
  iVar12 = *(int *)(in_ECX + 0xbc);
  if (iVar12 != 0) {
    while ((*(int *)(iVar12 + 8) != 0 || (*(int *)(iVar12 + 4) != 0))) {
      (**(code **)(**(int **)(iVar12 + 4) + 0x6c))();
      if ((*(int *)(iVar12 + 8) == 0) || (iVar12 = *(int *)(iVar12 + 8) + -4, iVar12 == 0)) break;
    }
  }
  piVar10 = (int *)(in_ECX + 0xc);
  for (piVar4 = piVar10; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    if (*piVar4 != 0) {
      FUN_004ef290();
    }
  }
  iVar12 = *(int *)(in_ECX + 0xcc);
  if (0 < iVar12) {
    iVar8 = 0;
    do {
      piVar4 = *(int **)(*(int *)(in_ECX + 0xc4) + iVar8 * 4);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x6c))();
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar12);
  }
  for (; piVar10 != (int *)0x0; piVar10 = (int *)piVar10[1]) {
    if ((int *)*piVar10 != (int *)0x0) {
      (**(code **)(*(int *)*piVar10 + 0x6c))();
    }
  }
  FUN_00520fa0();
  FUN_00416900();
  for (piVar10 = (int *)(in_ECX + 4); piVar10 != (int *)0x0; piVar10 = (int *)piVar10[1]) {
    if ((int *)*piVar10 != (int *)0x0) {
      (**(code **)(*(int *)*piVar10 + 0x6c))();
    }
  }
  FUN_0044d610();
  DAT_00b33a9c = 0;
  return 1;
}



void FUN_0044fa50(undefined4 *param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x3f8) = *param_1;
  *(undefined4 *)(in_ECX + 0x3fc) = param_1[1];
  return;
}



void FUN_0044fa70(LPSYSTEMTIME param_1)

{
  int in_ECX;
  _FILETIME local_8;
  
  FileTimeToLocalFileTime((FILETIME *)(in_ECX + 0x2a4),&local_8);
  FileTimeToSystemTime(&local_8,param_1);
  return;
}



byte FUN_0044faa0(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x3dc) & 1;
}



byte FUN_0044fab0(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x3dc) >> 4 & 1;
}



byte FUN_0044fac0(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x3dc) >> 2 & 1;
}



void FUN_0044fad0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 0x3dc) = *(uint *)(in_ECX + 0x3dc) | 4;
    return;
  }
  *(uint *)(in_ECX + 0x3dc) = *(uint *)(in_ECX + 0x3dc) & 0xfffffff3;
  return;
}



byte FUN_0044faf0(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x3dc) >> 3 & 1;
}



void FUN_0044fb00(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 0x3dc) = *(uint *)(in_ECX + 0x3dc) | 8;
    return;
  }
  *(uint *)(in_ECX + 0x3dc) = *(uint *)(in_ECX + 0x3dc) & 0xfffffff7;
  return;
}



void FUN_0044fb20(byte param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x3d8) = (uint)param_1 << 0x18 | *(uint *)(in_ECX + 0x3d8) & 0xffffff;
  *(byte *)(in_ECX + 0x400) = param_1;
  return;
}



undefined1 FUN_0044fb50(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 0x400);
}



void FUN_0044fb60(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x414) != 0) {
    FUN_00401e40(*(int *)(in_ECX + 0x414));
    *(undefined4 *)(in_ECX + 0x414) = 0;
    *(undefined4 *)(in_ECX + 0x418) = 0;
  }
  return;
}



void FUN_0044fb90(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  do {
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != 0);
  return;
}



void FUN_0044fbb0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x228) = DAT_00b055cc;
  return;
}



void FUN_0044fbc0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x3e0);
  while (iVar1 != 0) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x3e0));
    puVar2 = *(undefined4 **)(in_ECX + 0x3e4);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x3e0) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x3e4) = puVar2[1];
      *(undefined4 *)(in_ECX + 0x3e0) = *puVar2;
      FUN_00401f20(puVar2);
    }
    iVar1 = *(int *)(in_ECX + 0x3e0);
  }
  iVar1 = *(int *)(in_ECX + 1000);
  while (iVar1 != 0) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 1000));
    puVar2 = *(undefined4 **)(in_ECX + 0x3ec);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 1000) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x3ec) = puVar2[1];
      *(undefined4 *)(in_ECX + 1000) = *puVar2;
      FUN_00401f20(puVar2);
    }
    iVar1 = *(int *)(in_ECX + 1000);
  }
  *(undefined4 *)(in_ECX + 0x3f0) = 0;
  return;
}



undefined1 FUN_0044fc70(int *param_1,char param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int in_ECX;
  undefined1 local_1;
  
  uVar2 = *(uint *)(in_ECX + 0x3f0);
  piVar1 = (int *)(in_ECX + 0x3e0);
  if (*(int *)(in_ECX + 0x3f4) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x3f4));
  }
  *(undefined4 *)(in_ECX + 0x3f4) = 0;
  if (uVar2 == 0) {
    return 1;
  }
  lVar5 = (ulonglong)uVar2 * 4;
  piVar6 = (int *)FUN_00401f00(-(uint)((int)((ulonglong)lVar5 >> 0x20) != 0) | (uint)lVar5);
  *(int **)(in_ECX + 0x3f4) = piVar6;
  local_1 = 1;
  do {
    if ((piVar1 == (int *)0x0) || (piVar4 = param_1, *piVar1 == 0)) {
      return local_1;
    }
    while( true ) {
      if ((piVar4 == (int *)0x0) || (iVar3 = *piVar4, iVar3 == 0)) goto LAB_0044fd41;
      iVar7 = __stricmp((char *)*piVar1,(char *)(iVar3 + 0x1c));
      if (iVar7 == 0) break;
      piVar4 = (int *)piVar4[1];
      if ((piVar4 == (int *)0x0) || (*piVar4 == 0)) {
        *piVar6 = 0;
        if (param_2 != '\0') {
          FUN_004a7a60("Missing Masterfile: %s",*piVar1);
        }
        local_1 = 0;
      }
    }
    *piVar6 = iVar3;
LAB_0044fd41:
    piVar1 = (int *)piVar1[1];
    piVar6 = piVar6 + 1;
  } while( true );
}



int FUN_0044fd60(uint param_1)

{
  int in_ECX;
  
  if (param_1 <= *(uint *)(in_ECX + 0x3f0)) {
    if (param_1 == 0) {
      return in_ECX;
    }
    if (*(int *)(in_ECX + 0x3f4) != 0) {
      return *(int *)(*(int *)(in_ECX + 0x3f4) + -4 + param_1 * 4);
    }
  }
  return 0;
}



undefined4 FUN_0044fd90(uint param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  uint uVar2;
  
  puVar1 = (undefined4 *)(in_ECX + 0x3e0);
  if (*(int *)(in_ECX + 0x3e0) == 0) {
    return 0;
  }
  uVar2 = 1;
  if (1 < param_1) {
    do {
      puVar1 = (undefined4 *)puVar1[1];
      if (puVar1 == (undefined4 *)0x0) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_1);
  }
  return *puVar1;
}



undefined4 FUN_0044fdd0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x3f0);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_0044fde0(void)

{
  int *piVar1;
  int *piVar2;
  DWORD *pDVar3;
  HANDLE hFindFile;
  int in_ECX;
  undefined1 uVar4;
  bool bVar5;
  _WIN32_FIND_DATAA local_248;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_248;
  piVar1 = (int *)(in_ECX + 0x3e0);
  uVar4 = 0;
  piVar2 = (int *)(in_ECX + 1000);
  do {
    if ((((piVar1 == (int *)0x0) || (*piVar1 == 0)) || (piVar2 == (int *)0x0)) || (*piVar2 == 0)) {
      return uVar4;
    }
    _sprintf(local_108,"%s",*piVar1);
    pDVar3 = (DWORD *)*piVar2;
    hFindFile = FindFirstFileA(local_108,&local_248);
    if (hFindFile == (HANDLE)0xffffffff) {
      if (*pDVar3 == 0) {
        bVar5 = pDVar3[1] == 0;
        goto LAB_0044fe73;
      }
LAB_0044fe75:
      uVar4 = 1;
    }
    else {
      FindClose(hFindFile);
      if (local_248.nFileSizeLow != *pDVar3) goto LAB_0044fe75;
      bVar5 = local_248.nFileSizeHigh == pDVar3[1];
LAB_0044fe73:
      if (!bVar5) goto LAB_0044fe75;
    }
    piVar1 = (int *)piVar1[1];
    piVar2 = (int *)piVar2[1];
  } while( true );
}



undefined4 FUN_0044fea0(void)

{
  int in_ECX;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ECX + 0x240);
  if ((*(int *)(in_ECX + 0x23c) != DAT_00b05e20) && ((*(uint *)(in_ECX + 0x244) & 0x40000) != 0)) {
    uVar1 = *(uint *)(in_ECX + 0x418);
  }
  *(int *)(in_ECX + 0x260) = *(int *)(in_ECX + 0x260) + *(int *)(in_ECX + 0x254) + 6;
  if (uVar1 <= *(uint *)(in_ECX + 0x260)) {
    *(undefined4 *)(in_ECX + 0x250) = 0;
    *(undefined4 *)(in_ECX + 0x254) = 0;
    return 0;
  }
  if ((*(int *)(in_ECX + 0x23c) == DAT_00b05e20) || ((*(uint *)(in_ECX + 0x244) & 0x40000) == 0)) {
    (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))
              (*(int *)(in_ECX + 0x25c) + 0x14 + *(uint *)(in_ECX + 0x260),0);
  }
  *(undefined4 *)(in_ECX + 0x264) = 0;
  *(undefined4 *)(in_ECX + 0x250) = 0;
  *(undefined4 *)(in_ECX + 0x254) = 0;
  FUN_00450f10();
  return 1;
}



void FUN_0044ff50(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_00401f00(0x18);
    FUN_00446cb0(puVar1);
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
    puVar1[4] = param_1[4];
  }
  return;
}



void FUN_0044ffa0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x284);
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(in_ECX + 0x288);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x288) = puVar2[1];
      *(undefined4 *)(in_ECX + 0x284) = *puVar2;
      FUN_00401f20(puVar2);
      FUN_00401f20(iVar1);
      return;
    }
    *(undefined4 *)(in_ECX + 0x284) = 0;
    FUN_00401f20(iVar1);
  }
  return;
}



void FUN_0044fff0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  *(int **)(in_ECX + 0x10) = param_1;
  if (param_1 != (int *)0x0) {
    iVar1 = param_1[0xc];
    if (iVar1 == -1) {
      iVar1 = param_1[0x52];
    }
    *(int *)(in_ECX + 0x25c) = iVar1;
    uVar2 = (**(code **)(*param_1 + 0x1c))();
    *(undefined4 *)(in_ECX + 600) = uVar2;
  }
  return;
}


