
void FUN_00680030(byte param_1)

{
  FUN_0067fb10();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00680050(byte param_1)

{
  FUN_0067fc80();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00680070(byte param_1)

{
  FUN_0067fc10();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00680090(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if (((((DAT_00b3be00 != 0) && (param_1 != (int *)0x0)) &&
       (iVar2 = (**(code **)(*param_1 + 0x170))(), *(char *)(iVar2 + 4) == '\x18')) &&
      ((iVar2 != DAT_00b35ebc && (iVar2 = FUN_004d7630(), iVar2 != 0)))) &&
     ((iVar2 = FUN_0042b410(), iVar2 != 0 &&
      ((cVar1 = FUN_0067f5d0(param_1), cVar1 == '\0' && (iVar2 = FUN_00680a00(param_1), iVar2 != 0))
      )))) {
    FUN_0067fd70(iVar2);
    FUN_00446cb0(iVar2);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00680110(int param_1,undefined4 *param_2,int param_3,undefined4 *param_4,int param_5,int param_6
            )

{
  int iVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [188];
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined ***pppuStack_38;
  uint uStack_34;
  byte local_1d;
  undefined **ppuStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c4ba8;
  local_c = *unaff_FS_OFFSET;
  uStack_34 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b3be00 == 0) {
    *unaff_FS_OFFSET = local_c;
    return auStack_100;
  }
  local_1d = 0;
  if ((((param_1 != 0) && (param_3 != 0)) && (param_5 != 0)) && (param_6 != 0)) {
    pppuStack_38 = (undefined ***)0x680190;
    FUN_004526e0();
    if (param_1 == param_3) {
      *unaff_FS_OFFSET = local_c;
      return (undefined1 *)0x1;
    }
    pppuStack_38 = (undefined ***)&DAT_00a2f830;
    iStack_3c = 0x6801b9;
    FUN_00401020();
    pppuStack_38 = (undefined ***)0x6801be;
    FUN_006805c0();
    uStack_10 = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    ppuStack_1c = &PTR_FUN_00a749a4;
    _DAT_00b1545c = 0x7f7fffff;
    DAT_00b3be08 = param_6;
    DAT_00b3be04 = 0;
    DAT_00b3be0c = param_1;
    DAT_00b3be10 = param_3;
    _DAT_00b3be20 = *param_2;
    _DAT_00b3be24 = param_2[1];
    _DAT_00b3be28 = param_2[2];
    _DAT_00b3be2c = *param_4;
    _DAT_00b3be30 = param_4[1];
    _DAT_00b3be34 = param_4[2];
    pppuStack_38 = &ppuStack_1c;
    uStack_4 = 0;
    iStack_3c = 0x68023e;
    FUN_0067f690();
    pppuStack_38 = (undefined ***)_DAT_00b1545c;
    iStack_3c = 0x680250;
    iVar1 = FUN_00680b40();
    while (iVar1 != 0) {
      pppuStack_38 = (undefined ***)0x68025d;
      pppuStack_38 = (undefined ***)FUN_00680760();
      iStack_3c = 0x680265;
      iVar2 = FUN_006803f0();
      if (iVar2 != DAT_00b3be10) {
        pppuStack_38 = &ppuStack_1c;
        uStack_44 = 0x680279;
        iStack_40 = iVar2;
        iStack_3c = iVar1;
        FUN_0067f830();
      }
      pppuStack_38 = (undefined ***)0x1;
      iStack_3c = 0x680285;
      FUN_00680500();
      pppuStack_38 = (undefined ***)_DAT_00b1545c;
      iStack_3c = 0x680298;
      iVar1 = FUN_00680b40();
    }
    if (DAT_00b3be04 != 0) {
      local_1d = 1;
      do {
        pppuStack_38 = (undefined ***)0x6802b7;
        pppuStack_38 = (undefined ***)FUN_00680760();
        if (pppuStack_38 == (undefined ***)0x0) {
          pppuStack_38 = (undefined ***)param_1;
        }
        iStack_3c = 0x6802c5;
        pppuStack_38 = (undefined ***)FUN_00680380();
        iStack_3c = 0x6802cf;
        FUN_00446cb0();
        pppuStack_38 = (undefined ***)0x6802d6;
        iVar1 = FUN_00680430();
        if (iVar1 == 0) goto LAB_00680301;
        pppuStack_38 = (undefined ***)0x6802e3;
        iVar2 = FUN_00680430();
      } while (iVar1 != iVar2);
      pppuStack_38 = (undefined ***)0xa749b0;
      iStack_3c = 0x6802f1;
      FUN_004a7a60();
      pppuStack_38 = (undefined ***)0x6802fd;
      FUN_004526e0();
      local_1d = 0;
    }
LAB_00680301:
    pppuStack_38 = (undefined ***)0x68030b;
    FUN_00401040();
    uStack_4 = 0xffffffff;
    pppuStack_38 = (undefined ***)0x68031c;
    FUN_0067fb10();
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined1 *)(uint)local_1d;
}



void FUN_00680340(void)

{
  byte *pbVar1;
  ushort *in_ECX;
  
  if (*in_ECX < DAT_00b3bf04) {
    pbVar1 = (byte *)((uint)*in_ECX * 0x10 + 0xc + DAT_00b3bf00);
    *pbVar1 = *pbVar1 & 0xfb;
    if (*in_ECX < DAT_00b3bf08) {
      DAT_00b3bf08 = *in_ECX;
    }
  }
  return;
}



undefined4 FUN_00680380(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (*(int *)(in_ECX + 8) == param_1) {
      return *(undefined4 *)(in_ECX + 4);
    }
    if (*(int *)(in_ECX + 0x10) == param_1) {
      uVar1 = *(undefined4 *)(in_ECX + 0xc);
    }
  }
  return uVar1;
}



uint FUN_006803a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint in_EAX;
  uint uVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *piVar4;
  
  uVar2 = in_EAX & 0xffffff00;
  if (param_1 != 0) {
    if (*(int *)(in_ECX + 8) == param_1) {
      piVar4 = *(int **)(in_ECX + 4);
    }
    else {
      if (*(int *)(in_ECX + 0x10) != param_1) {
        return uVar2;
      }
      piVar4 = *(int **)(in_ECX + 0xc);
    }
    if (piVar4 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x174))();
      *param_2 = *puVar3;
      param_2[1] = puVar3[1];
      uVar1 = puVar3[2];
      param_2[2] = uVar1;
      uVar2 = CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  return uVar2;
}



int FUN_006803f0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 8);
  if (param_1 == iVar1) {
    return *(int *)(in_ECX + 0x10);
  }
  if (param_1 != *(int *)(in_ECX + 0x10)) {
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 FUN_00680410(int param_1)

{
  int in_ECX;
  
  if ((param_1 != *(int *)(in_ECX + 4)) && (param_1 != *(int *)(in_ECX + 0xc))) {
    return 0;
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00680430(void)

{
  ushort *in_ECX;
  
  if (*in_ECX < DAT_00b3bf04) {
    return *(undefined4 *)((uint)*in_ECX * 0x10 + DAT_00b3bf00 + 4);
  }
  return _DAT_00000004;
}



void FUN_00680460(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  ushort *in_ECX;
  
  iVar1 = 0;
  if (*in_ECX < DAT_00b3bf04) {
    iVar1 = (uint)*in_ECX * 0x10 + DAT_00b3bf00;
  }
  *(undefined4 *)(iVar1 + 4) = param_1;
  if (*in_ECX < DAT_00b3bf04) {
    *(undefined4 *)((uint)*in_ECX * 0x10 + DAT_00b3bf00 + 8) = param_2;
    return;
  }
  uRam00000008 = param_2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006804b0(void)

{
  ushort *in_ECX;
  
  if (*in_ECX < DAT_00b3bf04) {
    return (float10)*(float *)((uint)*in_ECX * 0x10 + DAT_00b3bf00);
  }
  return (float10)_DAT_00000000;
}



byte FUN_006804d0(void)

{
  int iVar1;
  ushort *in_ECX;
  
  iVar1 = 0;
  if (*in_ECX < DAT_00b3bf04) {
    iVar1 = (uint)*in_ECX * 0x10 + DAT_00b3bf00;
  }
  return *(byte *)(iVar1 + 0xc) >> 1 & 1;
}



void FUN_00680500(char param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *in_ECX;
  
  uVar1 = *in_ECX;
  iVar2 = 0;
  if (param_1 != '\0') {
    if (uVar1 < DAT_00b3bf04) {
      iVar2 = (uint)uVar1 * 0x10 + DAT_00b3bf00;
    }
    *(byte *)(iVar2 + 0xc) = *(byte *)(iVar2 + 0xc) | 2;
    return;
  }
  if (uVar1 < DAT_00b3bf04) {
    iVar2 = (uint)uVar1 * 0x10 + DAT_00b3bf00;
  }
  *(byte *)(iVar2 + 0xc) = *(byte *)(iVar2 + 0xc) & 0xfd;
  return;
}



uint FUN_00680550(void)

{
  int iVar1;
  ushort *in_ECX;
  
  iVar1 = 0;
  if (*in_ECX < DAT_00b3bf04) {
    iVar1 = (uint)*in_ECX * 0x10 + DAT_00b3bf00;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(iVar1 + 0xc)) & 0xffffff01;
}



void FUN_00680570(char param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *in_ECX;
  
  uVar1 = *in_ECX;
  iVar2 = 0;
  if (param_1 != '\0') {
    if (uVar1 < DAT_00b3bf04) {
      iVar2 = (uint)uVar1 * 0x10 + DAT_00b3bf00;
    }
    *(byte *)(iVar2 + 0xc) = *(byte *)(iVar2 + 0xc) | 1;
    return;
  }
  if (uVar1 < DAT_00b3bf04) {
    iVar2 = (uint)uVar1 * 0x10 + DAT_00b3bf00;
  }
  *(byte *)(iVar2 + 0xc) = *(byte *)(iVar2 + 0xc) & 0xfe;
  return;
}



void FUN_006805c0(void)

{
  if ((DAT_00b3bf00 != (void *)0x0) && (DAT_00b3bf04 != 0)) {
    _memset(DAT_00b3bf00,0,(uint)DAT_00b3bf04 << 4);
  }
  return;
}



void FUN_006805f0(void)

{
  if (DAT_00b3bf00 != 0) {
    FUN_00401f20(DAT_00b3bf00);
    DAT_00b3bf00 = 0;
    DAT_00b3bf04 = 0;
    DAT_00b3bf08 = 0;
  }
  return;
}



void FUN_00680620(ushort param_1)

{
  void *_Src;
  ushort uVar1;
  uint uVar2;
  
  uVar1 = DAT_00b3bf04;
  _Src = DAT_00b3bf00;
  if (DAT_00b3bf04 < param_1) {
    uVar2 = (uint)DAT_00b3bf04;
    DAT_00b3bf00 = (void *)FUN_00401f00((uint)param_1 * 0x10);
    DAT_00b3bf04 = param_1;
    if ((DAT_00b3bf00 != (void *)0x0) && (param_1 != 0)) {
      _memset(DAT_00b3bf00,0,(uint)param_1 << 4);
    }
    if (_Src != (void *)0x0) {
      if (uVar1 != 0) {
        _memcpy(DAT_00b3bf00,_Src,uVar2 << 4);
      }
      FUN_00401f20(_Src);
    }
  }
  return;
}



ushort FUN_006806b0(void)

{
  ushort uVar1;
  ushort uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = DAT_00b3bf08;
  uVar5 = (uint)DAT_00b3bf08;
  if (DAT_00b3bf08 == 0xffff) {
    return 0xffff;
  }
  if (DAT_00b3bf00 == 0) {
    FUN_00680620(500);
  }
  pbVar3 = (byte *)(uVar5 * 0x10 + 0xc + DAT_00b3bf00);
  *pbVar3 = *pbVar3 | 4;
  uVar1 = DAT_00b3bf04;
  uVar4 = (uint)DAT_00b3bf04;
  uVar5 = uVar5 + 1;
  if (uVar5 < uVar4) {
    pbVar3 = (byte *)(uVar5 * 0x10 + 0xc + DAT_00b3bf00);
    do {
      if ((*pbVar3 & 4) == 0) {
        DAT_00b3bf08 = (ushort)uVar5;
        break;
      }
      uVar5 = uVar5 + 1;
      pbVar3 = pbVar3 + 0x10;
    } while ((int)uVar5 < (int)uVar4);
  }
  if (DAT_00b3bf08 == uVar2) {
    uVar4 = uVar4 + 100;
    if (0xffff < uVar4) {
      uVar4 = 0xffff;
    }
    FUN_00680620(uVar4);
    DAT_00b3bf08 = uVar1;
  }
  return uVar2;
}



undefined4 FUN_00680760(void)

{
  ushort *in_ECX;
  
  if (*in_ECX < DAT_00b3bf04) {
    return *(undefined4 *)((uint)*in_ECX * 0x10 + DAT_00b3bf00 + 8);
  }
  return uRam00000008;
}



undefined4 FUN_00680790(int param_1)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(in_ECX + 8) == param_1) {
    iVar2 = *(int *)(in_ECX + 4);
  }
  else {
    if (*(int *)(in_ECX + 0x10) != param_1) {
      return 0;
    }
    iVar2 = *(int *)(in_ECX + 0xc);
  }
  if (iVar2 != 0) {
    if (((*(uint *)(iVar2 + 8) >> 0xb & 1) != 0) && (cVar1 = FUN_0067f0e0(), cVar1 == '\0')) {
      return 0;
    }
    if ((*(uint *)(iVar2 + 8) >> 5 & 1) == 0) {
      return 1;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006807f0(int *param_1)

{
  int *piVar1;
  char cVar2;
  float *pfVar3;
  int iVar4;
  int in_ECX;
  float local_4;
  
  local_4 = 0.0;
  cVar2 = FUN_0067f0a0();
  piVar1 = param_1;
  if ((((cVar2 == '\0') && (param_1 != (int *)0x0)) && (*(int *)(in_ECX + 4) != 0)) &&
     (cVar2 = FUN_004b72c0(*(int *)(in_ECX + 4),param_1,0,1), cVar2 == '\0')) {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    cVar2 = FUN_004b7490(*(undefined4 *)(in_ECX + 4),piVar1,&param_1);
    if (cVar2 == '\0') {
      pfVar3 = (float *)FUN_00403c00();
      local_4 = *pfVar3;
    }
    else if ((char)param_1 != '\0') {
      pfVar3 = (float *)FUN_00403c00();
      local_4 = *pfVar3 + 0.0;
    }
  }
  cVar2 = FUN_0067f0c0();
  if ((((cVar2 == '\0') && (piVar1 != (int *)0x0)) &&
      ((*(int *)(in_ECX + 4) != 0 && (*(int *)(in_ECX + 0xc) != 0)))) &&
     ((piVar1 == DAT_00b333c4 || (cVar2 = (**(code **)(*piVar1 + 0x334))(1), cVar2 == '\0')))) {
    iVar4 = (**(code **)(**(int **)(in_ECX + 4) + 0x170))();
    if (*(char *)(iVar4 + 4) == '\x18') {
      (**(code **)(**(int **)(in_ECX + 4) + 0x170))();
    }
    iVar4 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x170))();
    if (*(char *)(iVar4 + 4) == '\x18') {
      (**(code **)(**(int **)(in_ECX + 0xc) + 0x170))();
    }
    cVar2 = FUN_004b6d10();
    if ((cVar2 != '\0') || (cVar2 = FUN_004b6d10(), cVar2 != '\0')) {
      local_4 = _DAT_00b3a440 + local_4;
    }
  }
  return (float10)local_4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00680930(float param_1)

{
  int iVar1;
  ushort *in_ECX;
  
  iVar1 = FUN_00983ffd((double)param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_00983ffd((double)param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_00983ffd((double)param_1);
      if (iVar1 != 0) {
        iVar1 = __isnan((double)param_1);
        if (iVar1 == 0) {
          iVar1 = __isnan((double)param_1);
          if (iVar1 == 0) {
            iVar1 = __isnan((double)param_1);
            if (iVar1 == 0) goto LAB_006809ca;
          }
        }
      }
    }
  }
  FUN_004a7a60();
  param_1 = 0.0;
LAB_006809ca:
  if (*in_ECX < DAT_00b3bf04) {
    *(float *)((uint)*in_ECX * 0x10 + DAT_00b3bf00) = param_1;
    return;
  }
  _DAT_00000000 = param_1;
  return;
}



short * FUN_00680a00(int param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  short *psVar5;
  
  psVar5 = (short *)0x0;
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 5 & 1) == 0)) {
    iVar2 = FUN_004d7630();
    if (iVar2 != 0) {
      iVar2 = FUN_0042b410();
      if (iVar2 != 0) {
        sVar1 = FUN_006806b0();
        if (sVar1 != -1) {
          psVar3 = (short *)FUN_00401f00(0x14);
          if (psVar3 != (short *)0x0) {
            psVar3[2] = 0;
            psVar3[3] = 0;
            psVar3[4] = 0;
            psVar3[5] = 0;
            psVar3[6] = 0;
            psVar3[7] = 0;
            psVar3[8] = 0;
            psVar3[9] = 0;
            *psVar3 = -1;
            psVar5 = psVar3;
          }
          *(int *)(psVar5 + 2) = param_1;
          uVar4 = FUN_0042b410();
          *(undefined4 *)(psVar5 + 6) = uVar4;
          uVar4 = FUN_004d8af0();
          *(undefined4 *)(psVar5 + 4) = uVar4;
          uVar4 = FUN_004d8af0();
          *(undefined4 *)(psVar5 + 8) = uVar4;
          *psVar5 = sVar1;
        }
        return psVar5;
      }
    }
    return (short *)0x0;
  }
  return (short *)0x0;
}



float10 FUN_00680aa0(int param_1,float *param_2,int param_3,undefined4 param_4,char param_5)

{
  char cVar1;
  float10 fVar2;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_1c = 3.4028235e+38;
  if (((param_1 != 0) && (param_3 != 0)) && (cVar1 = FUN_006803a0(param_1,&local_18), cVar1 != '\0')
     ) {
    if (*param_2 == 3.4028235e+38) {
      fVar2 = (float10)0;
    }
    else {
      local_c = *param_2 - local_18;
      local_8 = param_2[1] - local_14;
      local_4 = param_2[2] - local_10;
      fVar2 = (float10)FUN_00404c90();
    }
    local_1c = (float)fVar2;
    if (param_5 != '\0') {
      fVar2 = (float10)FUN_006807f0(param_4);
      local_1c = (float)(fVar2 + (float10)local_1c);
    }
  }
  return (float10)local_1c;
}



ushort * FUN_00680b40(float param_1)

{
  ushort uVar1;
  int *piVar2;
  ushort *puVar3;
  int iVar4;
  float *pfVar5;
  int *in_ECX;
  
  pfVar5 = (float *)0x0;
  if (in_ECX[3] != 0) {
    piVar2 = (int *)in_ECX[1];
    puVar3 = (ushort *)piVar2[2];
    uVar1 = *puVar3;
    if (uVar1 < DAT_00b3bf04) {
      pfVar5 = (float *)((uint)uVar1 * 0x10 + DAT_00b3bf00);
    }
    if (*pfVar5 < param_1) {
      iVar4 = *piVar2;
      in_ECX[1] = iVar4;
      if (iVar4 == 0) {
        in_ECX[2] = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 4) = 0;
      }
      (**(code **)(*in_ECX + 8))(piVar2);
      in_ECX[3] = in_ECX[3] + -1;
      return puVar3;
    }
  }
  return (ushort *)0x0;
}



void FUN_00680bb0(ushort *param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  int in_ECX;
  
  if (param_1 != (ushort *)0x0) {
    if (*(int *)(in_ECX + 0xc) == 0) {
      FUN_006aa320(&param_1);
      return;
    }
    pfVar3 = (float *)0x0;
    if (*param_1 < DAT_00b3bf04) {
      pfVar3 = (float *)((uint)*param_1 * 0x10 + DAT_00b3bf00);
    }
    for (puVar2 = *(undefined4 **)(in_ECX + 4); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      if ((ushort *)puVar2[2] == (ushort *)0x0) {
LAB_00680c41:
        FUN_00589640(puVar2,&param_1);
        return;
      }
      uVar1 = *(ushort *)puVar2[2];
      pfVar4 = (float *)0x0;
      if (uVar1 < DAT_00b3bf04) {
        pfVar4 = (float *)((uint)uVar1 * 0x10 + DAT_00b3bf00);
      }
      if (*pfVar3 <= *pfVar4) goto LAB_00680c41;
    }
    FUN_005b1e20(&param_1);
  }
  return;
}



void FUN_00680c60(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    FUN_00776690(&param_1);
    FUN_00680bb0(iVar1);
  }
  return;
}



void FUN_00680c90(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  return;
}



int FUN_00680cb0(void)

{
  int in_ECX;
  
  return (int)*(char *)(in_ECX + 0xc);
}



float10 FUN_00680cc0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x1c);
}



void FUN_00680cd0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1c) = param_1;
  return;
}



void FUN_00680ce0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x20) = param_1;
  return;
}



float10 FUN_00680cf0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x24);
}



void FUN_00680d00(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x24) = param_1;
  return;
}



float10 FUN_00680d10(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x18);
}



void FUN_00680d20(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = param_1;
  return;
}



void FUN_00680d30(int *param_1)

{
  int in_ECX;
  float10 fVar1;
  
  if (param_1 != (int *)0x0) {
    fVar1 = (float10)(**(code **)(*param_1 + 0x1e0))();
    *(float *)(in_ECX + 0x14) = (float)fVar1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_00680d60(void)

{
  int in_ECX;
  bool bVar1;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_108;
  bVar1 = *(int *)(in_ECX + 4) != 0;
  if (bVar1) {
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    _sprintf(local_108,"Clearing last door.");
    FUN_00579b60(local_108);
  }
  return bVar1;
}



void FUN_00680dc0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_c [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_c;
  *in_ECX = 0;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 3) = 0;
  in_ECX[2] = 0;
  *(undefined1 *)((int)in_ECX + 0xd) = 0;
  in_ECX[5] = 0;
  in_ECX[1] = 0;
  in_ECX[4] = 0;
  in_ECX[7] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void FUN_00680e20(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *in_ECX = (int)param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_00680e70(float param_1)

{
  int in_ECX;
  float10 fVar1;
  
  *(float *)(in_ECX + 0x18) = param_1;
  if (param_1 < 0.0) {
    fVar1 = (float10)FUN_00982bfa();
    *(float *)(in_ECX + 0x18) = (float)fVar1;
    return;
  }
  if (!NAN(param_1) && 6.2831855 < param_1 != (param_1 == 6.2831855)) {
    fVar1 = (float10)FUN_00982bfa();
    *(float *)(in_ECX + 0x18) = (float)fVar1;
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00680ee0(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  cVar1 = FUN_005e3270();
  if ((cVar1 != '\0') && (iVar2 = (**(code **)(*param_1 + 0x284))(1), (float)iVar2 <= _DAT_00b3a4a0)
     ) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00680f30(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_0065a2c0();
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x368) != 0)) {
      return *(undefined4 *)(*(int *)(iVar1 + 0x368) + 8);
    }
  }
  return 0;
}



void FUN_00680f60(int param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  
  _memset(param_2,0,0x30);
  if (param_1 != 0) {
    iVar2 = FUN_0065a2c0();
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x368) != 0)) &&
       (iVar2 = *(int *)(*(int *)(iVar2 + 0x368) + 8), iVar2 != 0)) {
      FUN_0043f3e0(param_2,iVar2 + 0x70);
      pfVar1 = param_2 + 3;
      FUN_0043f3e0(pfVar1,iVar2 + 0x80);
      param_2[6] = *pfVar1 - *param_2;
      param_2[7] = param_2[4] - param_2[1];
      param_2[8] = param_2[5] - param_2[2];
      param_2[9] = *pfVar1 + *param_2;
      param_2[10] = param_2[4] + param_2[1];
      param_2[0xb] = param_2[5] + param_2[2];
      param_2[9] = param_2[9] * 0.5;
      param_2[10] = param_2[10] * 0.5;
      param_2[0xb] = param_2[0xb] * 0.5;
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00681050(int *param_1)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  int in_ECX;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  undefined1 *puVar10;
  double *pdVar11;
  undefined1 auStack_128 [2];
  char local_126;
  char local_125;
  float fStack_124;
  double local_120;
  undefined4 uStack_118;
  undefined1 auStack_114 [12];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_128;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*(int *)(in_ECX + 0x28) != 0) {
    if (*(int *)(in_ECX + 4) == *(int *)(in_ECX + 0x28)) {
      fVar2 = (float)DAT_00b33ea0;
      if (DAT_00b33ea0 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      fVar2 = fVar2 - *(float *)(in_ECX + 8);
      local_120 = (double)CONCAT44(local_120._4_4_,fVar2);
      if (fVar2 <= 7000.0) {
        _sprintf(local_108,"Ignoring same door.");
      }
      else {
        *(undefined4 *)(in_ECX + 8) = 0;
        *(undefined4 *)(in_ECX + 4) = 0;
        _sprintf(local_108,"Expiring last door.");
      }
      FUN_00579b60(local_108);
    }
    if (*(int *)(in_ECX + 0x28) != *(int *)(in_ECX + 4)) {
      iVar4 = FUN_004de660();
      switch(iVar4 + -1) {
      case 0:
      case 2:
        cVar3 = FUN_004dd260(param_1,0,0,1);
        if (cVar3 == '\0') {
          *(undefined1 *)(in_ECX + 0xc) = 7;
          return 1;
        }
        iVar4 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x154))();
        if (iVar4 != 0) {
          (**(code **)(**(int **)(in_ECX + 0x28) + 0x144))();
          FUN_0060ddc0(*(undefined4 *)(in_ECX + 0x28));
        }
        *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 0x28);
        fVar2 = (float)DAT_00b33ea0;
        if (DAT_00b33ea0 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        *(float *)(in_ECX + 8) = fVar2;
      case 1:
      case 3:
        *(undefined1 *)(in_ECX + 0xc) = 5;
        *(undefined4 *)(in_ECX + 0x1c) = 0;
      }
      if (*(char *)(in_ECX + 0xc) == '\x05') goto LAB_006812a4;
    }
  }
  if (*(int **)(in_ECX + 0x2c) == (int *)0x0) {
    return 0;
  }
  if (*(int **)(in_ECX + 0x2c) == param_1) {
    return 0;
  }
  bVar7 = false;
  local_126 = '\0';
  local_125 = '\0';
  cVar3 = FUN_005e05b0();
  if (cVar3 != '\0') {
    local_125 = '\x01';
    fVar8 = (float10)(**(code **)(*param_1 + 0x1e0))();
    local_120 = (double)fVar8;
    fVar9 = (float10)(**(code **)(**(int **)(in_ECX + 0x2c) + 0x1e0))();
    fVar8 = (float10)local_120;
    local_120 = (double)CONCAT44(local_120._4_4_,ABS((float)(fVar8 - fVar9)));
    if (0.2617994 < ABS((float)(fVar8 - fVar9))) {
      bVar7 = true;
    }
  }
  iVar4 = FUN_005e0380();
  if (iVar4 != 0) {
    if (*(char *)(iVar4 + 0x20) == '\x01') {
      iVar4 = FUN_005e2e00();
      if (iVar4 == *(int *)(in_ECX + 0x2c)) {
        bVar7 = local_125 == '\0';
        goto LAB_00681236;
      }
    }
    else if ((*(char *)(iVar4 + 0x20) == '\x02') &&
            (iVar4 = FUN_005e2e00(), iVar4 == *(int *)(in_ECX + 0x2c))) {
      bVar7 = false;
LAB_00681236:
      local_126 = '\x01';
    }
  }
  cVar3 = FUN_005e0510();
  if (((cVar3 != '\0') || (cVar3 = (**(code **)(*param_1 + 0x334))(1), cVar3 != '\0')) || (!bVar7))
  {
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x334))(1);
    if (cVar3 == '\0') {
      bVar7 = true;
      iVar4 = (**(code **)(*(int *)param_1[0x16] + 0x410))();
      if (iVar4 != 0) {
        iVar4 = *(int *)(in_ECX + 0x2c) + 0x2c;
        pdVar11 = &local_120;
        FUN_0068b3f0(pdVar11,iVar4);
        FUN_004121a0(pdVar11,iVar4);
        uStack_118 = 0;
        fVar8 = (float10)FUN_00404c90();
        if ((float10)100.0 < fVar8) {
          bVar7 = false;
        }
      }
      if (((local_126 == '\0') && (local_125 == '\0')) && (!bVar7)) {
        if (DAT_00b333b4 == param_1) {
          uVar5 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0xd4))();
          uVar5 = (**(code **)(*param_1 + 0xd4))(uVar5);
          _sprintf(local_108,"Actor \'%s\' angling away from Actor \'%s\'.",uVar5);
          FUN_00579b60(local_108);
        }
        piVar1 = *(int **)(in_ECX + 0x2c);
        uVar5 = (**(code **)(*param_1 + 0x174))();
        puVar10 = auStack_114;
        (**(code **)(*piVar1 + 0x174))(puVar10,uVar5);
        FUN_004121a0(puVar10,uVar5);
        fVar8 = (float10)FUN_00683cb0(auStack_114);
        fStack_124 = -1.0;
        *(undefined1 *)(in_ECX + 0xc) = 3;
        if ((float)fVar8 < *(float *)(in_ECX + 0x18)) {
          fStack_124 = 1.0;
          *(undefined1 *)(in_ECX + 0xc) = 4;
        }
        if (3.1415927 < ABS((float)fVar8 - *(float *)(in_ECX + 0x18))) {
          *(undefined1 *)(in_ECX + 0xc) = 3;
          fStack_124 = fStack_124 * -1.0;
        }
        local_120._0_4_ = 1.0;
        cVar3 = FUN_005e3290();
        if (cVar3 != '\0') {
          local_120._0_4_ = 1.5;
        }
        fStack_124 = fStack_124 * 0.5235988 * local_120._0_4_ + *(float *)(in_ECX + 0x18);
        FUN_00680e70(fStack_124);
        *(float *)(in_ECX + 0x10) = fStack_124;
        pfVar6 = (float *)FUN_00403c00();
        *(float *)(in_ECX + 0x20) = *pfVar6 * 0.5 * local_120._0_4_;
        *(undefined4 *)(in_ECX + 0x1c) = 0;
        return 1;
      }
    }
    return 0;
  }
  if (DAT_00b333b4 == param_1) {
    uVar5 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0xd4))();
    uVar5 = (**(code **)(*param_1 + 0xd4))(uVar5);
    _sprintf(local_108,"Actor \'%s\' waiting for Actor \'%s\'.",uVar5);
    FUN_00579b60(local_108);
  }
  *(undefined1 *)(in_ECX + 0xc) = 5;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
LAB_006812a4:
  FUN_005e05f0(0x3f);
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_006814b0(int *param_1,int param_2,float param_3)

{
  code *pcVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_164 [12];
  float fStack_158;
  undefined1 local_151;
  float fStack_150;
  float fStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  int iStack_13c;
  int iStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  undefined4 auStack_124 [9];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined **ppuStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_cc;
  undefined4 uStack_c0;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_8c;
  undefined4 uStack_60;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined ***pppuStack_3c;
  undefined4 uStack_38;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009c4c0b;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_164;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffe90;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_151 = 0;
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && ((int *)param_1[0x16] != (int *)0x0)) {
    piVar5 = (int *)(**(code **)(*(int *)param_1[0x16] + 0x410))(uVar4);
    if ((piVar5 != (int *)0x0) && (cVar3 = (**(code **)(*piVar5 + 0xc))(), cVar3 == '\0')) {
      pfVar6 = (float *)FUN_0068b3f0();
      fStack_100 = *pfVar6;
      fStack_fc = pfVar6[1];
      fStack_f8 = pfVar6[2];
      fStack_130 = fStack_100 - (float)param_1[0xb];
      fStack_150 = fStack_fc - (float)param_1[0xc];
      fStack_158 = fStack_f8 - (float)param_1[0xd];
      fStack_14c = 3.4028235e+38;
      fStack_12c = fStack_150;
      fStack_128 = fStack_158;
      cVar3 = FUN_00683aa0();
      if (cVar3 != '\0') {
        fVar11 = (float10)FUN_00404c90();
        fStack_14c = (float)(fVar11 * (float10)0.1428767293691635);
      }
      fVar11 = (float10)(**(code **)(*param_1 + 0x1e0))();
      fStack_158 = (float)fVar11;
      cVar3 = FUN_005e0630(2);
      if ((cVar3 != '\0') && (fStack_158 = fStack_158 - 3.1415927, fStack_158 < 0.0)) {
        fStack_158 = fStack_158 + 6.2831855;
      }
      fStack_150 = 0.01;
      cVar3 = (**(code **)(*param_1 + 0x334))(1);
      if (cVar3 != '\0') {
        fStack_150 = 0.1;
      }
      fVar11 = (float10)FUN_00683cb0(&fStack_130);
      fStack_158 = ABS((float)(fVar11 - (float10)fStack_158));
      if (fStack_158 < fStack_150) {
        ppuStack_f0 = &PTR_FUN_00a562bc;
        uStack_cc = 0x3f800000;
        uStack_c0 = 0;
        uStack_ec = 0x3f800000;
        uStack_14 = 0;
        FUN_004f5ea0();
        fStack_150 = (float)FUN_00680f30(param_1);
        uStack_148 = 0;
        uStack_8c = *(uint *)((int)fStack_150 + 0x30) & 0xffffffd5 | 0x15;
        uStack_144 = 0x3f800000;
        uStack_38 = 0;
        uStack_140 = 0;
        pppuStack_3c = &ppuStack_f0;
        pcVar1 = *(code **)(*param_1 + 0x1e0);
        puVar7 = &DAT_00b26dc4;
        puVar10 = auStack_124;
        for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        }
        fVar11 = (float10)(*pcVar1)();
        FUN_0070fdd0((float)fVar11);
        puVar7 = (undefined4 *)FUN_007101f0(&fStack_100,&uStack_148);
        fVar2 = fStack_150;
        uStack_148 = *puVar7;
        uStack_144 = puVar7[1];
        uStack_140 = puVar7[2];
        fStack_158 = *(float *)((int)fStack_150 + 0x84) - *(float *)((int)fStack_150 + 0x74);
        fStack_100 = fStack_158;
        cVar3 = FUN_004d8b90();
        if (cVar3 == '\0') {
          fStack_158 = fStack_100 + 7.1438365;
        }
        if (fStack_14c < fStack_158) {
          fStack_158 = fStack_14c;
        }
        FUN_004529e0(&fStack_100,&uStack_148);
        iStack_138 = param_1[0xc];
        iStack_13c = param_1[0xb];
        fStack_134 = (float)param_1[0xd];
        fVar13 = fStack_f8 * fStack_f8;
        fVar12 = fVar13 + fStack_fc * fStack_fc + fStack_100 * fStack_100;
        auVar14._4_4_ = fVar13;
        auVar14._0_4_ = fVar12;
        auVar14._8_4_ = fVar13;
        auVar14._12_4_ = fVar13;
        auVar14 = rsqrtss(auVar14,auVar14);
        fVar13 = auVar14._0_4_;
        fVar12 = fVar13 * 0.5 * (3.0 - fVar12 * fVar13 * fVar13);
        fStack_50 = fStack_158 * fVar12 * fStack_100;
        fStack_4c = fStack_158 * fVar12 * fStack_fc;
        fStack_48 = fStack_158 * fVar12 * fStack_f8;
        fStack_44 = fStack_158 * fVar12 * fStack_f4;
        fVar11 = (float10)FUN_005e0660();
        fStack_134 = (float)(fVar11 * (float10)param_3 + (float10)fStack_134);
        FUN_004529e0(&fStack_100,&iStack_13c);
        fStack_b0 = fStack_100;
        fStack_ac = fStack_fc;
        fStack_a8 = fStack_f8;
        fStack_a4 = fStack_f4;
        piVar5 = (int *)FUN_00531de0(*(undefined4 *)((int)fVar2 + 8));
        if ((piVar5 != (int *)0x0) &&
           (cVar3 = (**(code **)(*piVar5 + 0x88))(&fStack_b0), cVar3 != '\0')) {
          uVar8 = FUN_004806e0(uStack_60);
          iVar9 = FUN_004dc270(uVar8);
          if (iVar9 == param_2) {
            local_151 = 1;
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return local_151;
}



void FUN_006818d0(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_3c [48];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c4c4b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffa0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    iVar3 = FUN_0065a2c0(uVar2);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x368) != 0)) {
      iVar3 = *(int *)(*(int *)(iVar3 + 0x368) + 8);
      if ((iVar3 != 0) && (param_3 != (int *)0x0)) {
        FUN_00680f60(param_1,local_3c);
        param_1 = 0;
        if (0 < *(int *)(iVar3 + 0xa4)) {
          do {
            piVar1 = *(int **)(*(int *)(iVar3 + 0x90) + param_1 * 4);
            if (*piVar1 == 0) {
              piVar7 = (int *)0x0;
            }
            else {
              piVar7 = *(int **)(*piVar1 + 8);
            }
            if (piVar7 != (int *)0x0) {
              local_4c = FUN_00401f00(0xdc);
              iVar5 = 0;
              local_4 = 0;
              if (local_4c != 0) {
                iVar5 = FUN_0070b780(0);
              }
              local_4 = 0xffffffff;
              (**(code **)(*piVar7 + 0x90))(iVar5);
              FUN_0043f3e0(&local_4c,piVar1[2] + 0x30);
              *(int *)(iVar5 + 0x54) = local_4c;
              *(undefined4 *)(iVar5 + 0x58) = uStack_48;
              *(undefined4 *)(iVar5 + 0x5c) = uStack_44;
              FUN_00607740(&uStack_40,piVar1[2]);
              puVar6 = &uStack_40;
              puVar8 = (undefined4 *)(iVar5 + 0x30);
              for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar8 = puVar8 + 1;
              }
              (**(code **)(*param_3 + 0x84))(iVar5,1);
              FUN_00707610();
              FUN_00707980();
              FUN_00707370(0,0);
            }
            param_1 = param_1 + 1;
          } while (param_1 < *(int *)(iVar3 + 0xa4));
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_00681a60(uint param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  uint in_EAX;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined1 local_9;
  int local_8;
  
  uVar1 = param_1;
  uVar7 = in_EAX & 0xffffff00;
  local_9 = 0;
  if (param_1 != 0) {
    iVar4 = FUN_0065a2c0();
    iVar8 = 0;
    if ((((iVar4 != 0) && (iVar8 = *(int *)(iVar4 + 0x368), iVar8 != 0)) &&
        (iVar4 = *(int *)(iVar8 + 8), iVar4 != 0)) &&
       ((iVar8 = *(int *)(iVar4 + 0xa4), iVar8 != 0 && (local_8 = 0, 0 < iVar8)))) {
      do {
        iVar8 = *(int *)(*(int *)(iVar4 + 0x90) + local_8 * 4);
        uVar5 = FUN_004806e0(iVar8);
        piVar6 = (int *)FUN_004dc270(uVar5);
        piVar9 = (int *)0x0;
        if (((piVar6 != (int *)0x0) &&
            ((cVar3 = (**(code **)(*piVar6 + 400))(), cVar3 != '\0' &&
             (piVar9 = piVar6, piVar6 == DAT_00b333c4)))) ||
           (((iVar8 != 0 &&
             ((piVar6 == (int *)0x0 ||
              ((((uVar7 = *(uint *)(iVar8 + 0x1c) & 0x3f, uVar7 == 0xc || (uVar7 == 0xe)) ||
                (uVar7 == 0x10)) && (cVar3 = (**(code **)(*piVar6 + 0x88))(), cVar3 == '\0')))))) ||
            (piVar2 = param_2, piVar6 == (int *)0x0)))) goto LAB_00681d63;
        if ((*param_2 == 0) &&
           (iVar8 = (**(code **)(*piVar6 + 0x170))(), *(char *)(iVar8 + 4) == '\x18')) {
LAB_00681b8f:
          if (piVar9 != (int *)0x0) goto LAB_00681b93;
          iVar8 = (**(code **)(*piVar6 + 0x170))();
          if (*(char *)(iVar8 + 4) == '\x12') {
            cVar3 = FUN_006814b0(uVar1,piVar6,0x3e800000);
            if (((cVar3 == '\0') && (cVar3 = FUN_006814b0(uVar1,piVar6,0x3f000000), cVar3 == '\0'))
               && (cVar3 = FUN_006814b0(uVar1,piVar6,0x3f800000), cVar3 == '\0')) goto LAB_00681d63;
            *(undefined1 *)(piVar2 + 2) = 1;
            goto LAB_00681d5e;
          }
          if ((((*(char *)(iVar8 + 4) == '\x18') &&
               (cVar3 = FUN_006814b0(uVar1,piVar6,0x3f000000), cVar3 != '\0')) &&
              (iVar8 = FUN_004d7630(), iVar8 == 0)) &&
             ((iVar8 = (**(code **)(*piVar6 + 0x170))(), iVar8 != 0 &&
              (cVar3 = FUN_004b78e0(), cVar3 == '\0')))) {
            uVar5 = (**(code **)(*piVar6 + 0x154))();
            FUN_00560920(&DAT_00b3fab0,uVar5);
            iVar8 = FUN_00405790(0);
            if ((iVar8 != 0) && (iVar8 = FUN_00405790(0), *(int *)(iVar8 + 0xc) != 0)) {
              iVar8 = FUN_00405790(0);
              iVar8 = FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(iVar8 + 0xc));
              if ((iVar8 != 0) && (iVar8 = FUN_004715a0(&DAT_00a33bb4), iVar8 != 0)) {
                param_1 = param_1 & 0xffffff00;
                cVar3 = FUN_004b7490(piVar6,uVar1,&param_1);
                if ((cVar3 == '\0') ||
                   (((char)param_1 != '\0' || (cVar3 = FUN_00680ee0(uVar1), cVar3 == '\0')))) {
                  *(undefined1 *)(param_2 + 2) = 1;
                }
                else {
                  *param_2 = (int)piVar6;
                }
                goto LAB_00681d5e;
              }
            }
          }
        }
        else {
          if ((piVar2[1] != 0) || (piVar9 == (int *)0x0)) {
            iVar8 = (**(code **)(*piVar6 + 0x170))();
            if ((*(char *)(iVar8 + 4) != '\x12') ||
               (cVar3 = (**(code **)(*piVar6 + 0x88))(), cVar3 == '\0')) goto LAB_00681d63;
            goto LAB_00681b8f;
          }
LAB_00681b93:
          cVar3 = FUN_006814b0(uVar1,piVar9,0x3f000000);
          if ((cVar3 != '\0') ||
             ((cVar3 = FUN_005e3290(), cVar3 != '\0' &&
              ((cVar3 = FUN_006814b0(uVar1,piVar6,0x3e800000), cVar3 != '\0' ||
               (cVar3 = FUN_006814b0(uVar1,piVar6,0x3f800000), cVar3 != '\0')))))) {
            piVar2[1] = (int)piVar9;
LAB_00681d5e:
            local_9 = 1;
          }
        }
LAB_00681d63:
        iVar8 = local_8 + 1;
        local_8 = iVar8;
      } while (iVar8 < *(int *)(iVar4 + 0xa4));
    }
    uVar7 = CONCAT31((int3)((uint)iVar8 >> 8),local_9);
  }
  return uVar7;
}



undefined1 FUN_00681d90(int param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  undefined1 uVar3;
  
  if ((param_1 != 0) && (DAT_00ba7a04 == '\0')) {
    *(undefined4 *)(in_ECX + 0x28) = 0;
    *(undefined4 *)(in_ECX + 0x2c) = 0;
    *(undefined4 *)(in_ECX + 0x30) = 0;
    uVar3 = 0;
    iVar2 = FUN_0065a2c0();
    if (iVar2 != 0) {
      iVar2 = FUN_0088d370();
      if (iVar2 == 0) {
        cVar1 = FUN_00681a60(param_1,(undefined4 *)(in_ECX + 0x28));
        if (cVar1 != '\0') {
          uVar3 = 1;
        }
      }
    }
    return uVar3;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00681df0(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  float *pfVar4;
  undefined4 uVar5;
  int iVar6;
  LONG LVar7;
  int *in_ECX;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  undefined4 *puStack_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  undefined4 *puStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_60 [24];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 auStack_38 [11];
  int local_c;
  undefined1 *puStack_8;
  int *piStack_4;
  
  piStack_4 = (int *)0xffffffff;
  puStack_8 = &LAB_009c4c8c;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff20;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 == (int *)0x0) || (param_2 == 0)) goto LAB_00682413;
  pfVar4 = (float *)FUN_006899c0(uVar3);
  local_b4 = *pfVar4;
  local_b0 = pfVar4[1];
  piVar1 = (int *)*in_ECX;
  local_ac = pfVar4[2];
  piVar8 = (int *)0x0;
  if ((piVar1 != (int *)0x0) && (DAT_00b15750 != '\0')) {
    piVar8 = (int *)(**(code **)(*piVar1 + 0x58))("AvoidNode");
    if ((piVar8 == (int *)0x0) ||
       (piVar8 = (int *)(**(code **)(*piVar8 + 8))(), piVar8 == (int *)0x0)) {
      puStack_d0 = (undefined4 *)FUN_00401f00(0xdc);
      piVar8 = (int *)0x0;
      piStack_4 = (int *)0x0;
      if (puStack_d0 != (undefined4 *)0x0) {
        piVar8 = (int *)FUN_0070b780(0);
      }
      piStack_4 = (int *)0xffffffff;
      uVar5 = FUN_004e70b0();
      FUN_00405680(uVar5);
      FUN_006ff420("AvoidNode");
      puStack_d0 = (undefined4 *)FUN_00401f00(0x1c);
      piStack_4 = (int *)0x1;
      if (puStack_d0 == (undefined4 *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_004059d0();
      }
      *(ushort *)(iVar6 + 0x18) = *(ushort *)(iVar6 + 0x18) | 1;
      piStack_4 = (int *)0xffffffff;
      FUN_00405680(iVar6);
      (**(code **)(*piVar1 + 0x84))(piVar8,1);
    }
    else {
      fStack_c8 = (float)(uint)*(ushort *)((int)piVar8 + 0xb6);
      uVar3 = 0;
      if (fStack_c8 != 0.0) {
        do {
          (**(code **)(*piVar8 + 0x8c))(&puStack_d0,uVar3);
          puVar9 = puStack_d0;
          if (((puStack_d0 != (undefined4 *)0x0) &&
              (LVar7 = InterlockedDecrement(puStack_d0 + 1), LVar7 == 0)) &&
             (puVar9 != (undefined4 *)0x0)) {
            (**(code **)*puVar9)(1);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)fStack_c8);
      }
      FUN_00477ef0();
    }
  }
  pfVar4 = (float *)(**(code **)(*param_1 + 0x174))();
  puStack_d0 = (undefined4 *)(local_b0 - pfVar4[1]);
  fStack_c8 = local_ac - pfVar4[2];
  fStack_8c = local_b4 - *pfVar4;
  puStack_88 = puStack_d0;
  fStack_84 = fStack_c8;
  fVar11 = (float10)FUN_00683cb0(&fStack_8c);
  puStack_d0 = (undefined4 *)(float)fVar11;
  FUN_00680e70(puStack_d0);
  _memset(auStack_60,0,0x30);
  if (DAT_00b15750 != '\0') {
    FUN_00680f60(param_1,auStack_60);
  }
  cVar2 = (char)in_ECX[3];
  fStack_c8 = _DAT_00b33e9c;
  puStack_d0 = (undefined4 *)in_ECX[9];
  if ('\x02' < cVar2) {
    if (cVar2 < '\x05') {
      puStack_d0 = (undefined4 *)((float)in_ECX[8] - _DAT_00b33e9c);
      if ((float)puStack_d0 <= 0.0) {
        in_ECX[8] = 0;
        *(undefined1 *)(in_ECX + 3) = 0;
        *(undefined1 *)((int)in_ECX + 0xd) = 0;
        FUN_00680d30(param_1);
        in_ECX[4] = 0;
      }
      else {
        in_ECX[8] = (int)puStack_d0;
        FUN_00680e70(in_ECX[4]);
        *(char *)((int)in_ECX + 0xd) = (char)in_ECX[3];
        FUN_00680d30(param_1);
      }
      goto LAB_00682413;
    }
    if (cVar2 == '\x05') {
      puStack_d0 = (undefined4 *)(_DAT_00b33e9c + (float)in_ECX[7]);
      if (_DAT_00b3a4a8 <= (float)puStack_d0) {
        FUN_005e05f0(0x3f);
        in_ECX[7] = 0;
        *(undefined1 *)(in_ECX + 3) = 0;
        *(undefined1 *)((int)in_ECX + 0xd) = 0;
        FUN_00680d30(param_1);
      }
      else {
        in_ECX[7] = (int)puStack_d0;
        FUN_005e05f0(0x3f);
        *(char *)((int)in_ECX + 0xd) = (char)in_ECX[3];
        FUN_00680d30(param_1);
      }
      goto LAB_00682413;
    }
  }
  cVar2 = FUN_00681d90(param_1);
  uStack_cc = (float)CONCAT13(cVar2,(undefined3)uStack_cc);
  if (cVar2 == '\0') {
    in_ECX[5] = 0;
    in_ECX[4] = 0;
    *(undefined1 *)(in_ECX + 3) = 0;
    in_ECX[7] = 0;
    in_ECX[9] = 0;
    in_ECX[10] = 0;
    in_ECX[0xb] = 0;
    puStack_d0 = (undefined4 *)0x0;
    in_ECX[0xc] = 0;
    cVar2 = '\0';
  }
  else {
    if ((char)in_ECX[0xc] != '\0') {
      *(undefined1 *)(in_ECX + 3) = 7;
      goto LAB_00682413;
    }
    *(undefined1 *)(in_ECX + 3) = 0;
    cVar2 = FUN_00680ee0(param_1);
    if ((cVar2 != '\0') && (cVar2 = FUN_00681050(param_1), cVar2 != '\0')) {
      *(char *)((int)in_ECX + 0xd) = (char)in_ECX[3];
      FUN_00680d30(param_1);
      goto LAB_00682413;
    }
    cVar2 = uStack_cc._3_1_;
  }
  in_ECX[9] = (int)puStack_d0;
  if (_DAT_00b3a4b8 < (float)puStack_d0) {
    *(undefined1 *)(in_ECX + 3) = 7;
  }
  if (piVar8 != (int *)0x0) {
    uStack_9c = 0;
    uStack_98 = 0x3f800000;
    if (cVar2 == '\0') {
      if ((char)in_ECX[3] != '\0') {
        fStack_c4 = 1.0;
        uStack_c0 = 0x3f800000;
        uStack_9c = 0x3f800000;
        fStack_bc = 0.0;
        fStack_b8 = 0.0;
        uStack_98 = 0x3f800000;
      }
    }
    else {
      fStack_c4 = 1.0;
      uStack_9c = 0x3f800000;
      uStack_c0 = 0;
      fStack_bc = 0.0;
      fStack_b8 = 0.0;
      uStack_98 = 0;
    }
    uStack_90 = 0;
    uStack_94 = 0;
    iVar6 = FUN_0047ea60(uStack_48,uStack_44,uStack_40,&uStack_9c);
    *(undefined4 *)(iVar6 + 0x54) = uStack_3c;
    *(undefined4 *)(iVar6 + 0x58) = auStack_38[0];
    *(undefined4 *)(iVar6 + 0x5c) = auStack_38[1];
    (**(code **)(*piVar8 + 0x84))(iVar6,1);
    FUN_00707610();
    FUN_00707980();
    FUN_00707370(0,0);
    FUN_006818d0(param_1,in_ECX + 10,piVar8);
    local_b0 = 0.0;
    local_ac = 50.0;
    puVar9 = &DAT_00b26dc4;
    puVar10 = auStack_38;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    fStack_a8 = 0.0;
    FUN_0070fdd0(in_ECX[6]);
    pfVar4 = (float *)FUN_007101f0(&uStack_94,&local_b0);
    local_b0 = *pfVar4;
    local_ac = pfVar4[1];
    fStack_a8 = pfVar4[2];
    pfVar4 = (float *)(**(code **)(*piStack_4 + 0x174))();
    fStack_bc = *pfVar4;
    fStack_b8 = pfVar4[1];
    local_b4 = pfVar4[2];
    fVar11 = (float10)FUN_005e0660();
    local_b4 = (float)(fVar11 * (float10)0.5 + (float10)local_b4);
    uStack_78 = 0x3f800000;
    uStack_74 = 0x3f800000;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_cc = local_b0 + fStack_bc;
    fStack_c8 = fStack_b8 + local_ac;
    fStack_c4 = fStack_a8 + local_b4;
    puStack_88 = (undefined4 *)0x3f800000;
    fStack_84 = 1.0;
    uStack_80 = 0;
    uStack_7c = 0;
    uVar5 = FUN_0047f070(&fStack_bc,&puStack_88,&uStack_cc,&uStack_78);
    (**(code **)(*piVar8 + 0x84))(uVar5,1);
    FUN_00707610();
    FUN_00707980();
    FUN_00707370(0,0);
  }
  *(char *)((int)in_ECX + 0xd) = (char)in_ECX[3];
  fVar11 = (float10)(**(code **)(*param_1 + 0x1e0))();
  in_ECX[5] = (int)(float)fVar11;
LAB_00682413:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00682450(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afadb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x20) != 2)) {
    if (*(int *)(param_1 + 8) == 0) {
      iVar3 = FUN_00401f00(0x14,uVar2);
      local_4 = 0;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0068a9f0();
      }
      *(undefined4 *)(param_1 + 8) = uVar4;
    }
    local_4 = 0xffffffff;
    cVar1 = FUN_0068b030(*(undefined4 *)(param_1 + 4),param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),
                         *(undefined4 *)(param_1 + 0x10));
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x24) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 2;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00682500(undefined4 param_1)

{
  int in_ECX;
  
  FUN_0042fa10("PathBuilder",2);
  FUN_0042fc90(0);
  *(undefined4 *)(in_ECX + 0x44) = param_1;
  FUN_0042fd10();
  return;
}



void FUN_00682530(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a74b78;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00682550(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a74b78;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00682580(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = DAT_00b3f9a8;
  in_ECX[6] = DAT_00b3f9ac;
  in_ECX[7] = DAT_00b3f9b0;
  in_ECX[8] = 0;
  *(undefined1 *)(in_ECX + 9) = 1;
  return;
}



undefined1 FUN_006825c0(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int local_4;
  
  uVar2 = 0;
  FUN_0049f470();
  local_4 = 0;
  cVar1 = FUN_0055e000(param_1,&local_4);
  if ((cVar1 == '\0') || (local_4 == 0)) {
    cVar1 = FUN_0055e000(param_1,&local_4);
    if ((cVar1 == '\0') || (local_4 == 0)) {
      cVar1 = FUN_0055e000(param_1,&local_4);
      if ((cVar1 == '\0') || (local_4 == 0)) goto LAB_00682624;
    }
  }
  uVar2 = 1;
LAB_00682624:
  FUN_0049f480();
  return uVar2;
}



void FUN_00682640(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    FUN_0049f470();
    param_1 = 0;
    FUN_0055e000(iVar1,&param_1);
    if (((param_1 != 0) || (FUN_0055e000(iVar1,&param_1), param_1 != 0)) ||
       (FUN_0055e000(iVar1,&param_1), param_1 != 0)) {
      *(undefined4 *)(param_1 + 0x14) = *param_2;
      *(undefined4 *)(param_1 + 0x18) = param_2[1];
      *(undefined4 *)(param_1 + 0x1c) = param_2[2];
    }
    FUN_0049f480();
    return;
  }
  return;
}



void FUN_006826d0(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    FUN_0049f470();
    param_1 = 0;
    cVar3 = FUN_0055e000(iVar1,&param_1);
    iVar2 = param_1;
    if ((cVar3 != '\0') && (param_1 != 0)) {
      FUN_004524c0(iVar1);
      if (iVar2 == *(int *)(in_ECX + 0x40)) {
        *(undefined4 *)(iVar2 + 0x20) = 1;
      }
      else {
        if (*(int **)(iVar2 + 4) != (int *)0x0) {
          (**(code **)(**(int **)(iVar2 + 4) + 0x10))(1);
        }
        if (*(undefined4 **)(iVar2 + 8) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(iVar2 + 8))(1);
        }
        FUN_00401f20(iVar2);
        param_1 = 0;
      }
    }
    cVar3 = FUN_0055e000(iVar1,&param_1);
    iVar2 = param_1;
    if ((cVar3 != '\0') && (param_1 != 0)) {
      FUN_004524c0(iVar1);
      if (iVar2 == *(int *)(in_ECX + 0x40)) {
        *(undefined4 *)(iVar2 + 0x20) = 1;
      }
      else {
        if (*(int **)(iVar2 + 4) != (int *)0x0) {
          (**(code **)(**(int **)(iVar2 + 4) + 0x10))(1);
        }
        if (*(undefined4 **)(iVar2 + 8) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(iVar2 + 8))(1);
        }
        FUN_00401f20(iVar2);
        param_1 = 0;
      }
    }
    cVar3 = FUN_0055e000(iVar1,&param_1);
    iVar2 = param_1;
    if ((cVar3 != '\0') && (param_1 != 0)) {
      FUN_004524c0(iVar1);
      if (*(int **)(iVar2 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(iVar2 + 4) + 0x10))(1);
      }
      if (*(undefined4 **)(iVar2 + 8) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar2 + 8))(1);
      }
      FUN_00401f20(iVar2);
    }
    FUN_0049f480();
  }
  return;
}



undefined4 FUN_00682820(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  if ((param_1 != (undefined1 *)0x0) && (*(int *)((int)param_1 + 0x58) != 0)) {
    FUN_0049f470();
    param_1 = (undefined1 *)0x0;
    cVar3 = FUN_0055e000(iVar5,&param_1);
    puVar2 = param_1;
    if ((cVar3 != '\0') && (param_1 != (undefined1 *)0x0)) {
      piVar4 = (int *)(**(code **)(**(int **)(iVar5 + 0x58) + 0x40c))();
      if (piVar4 == (int *)0x0) {
        (**(code **)(**(int **)(iVar5 + 0x58) + 0x408))();
        piVar4 = (int *)(**(code **)(**(int **)(iVar5 + 0x58) + 0x40c))();
      }
      FUN_0068ae20(puVar2 + 0x14);
      (**(code **)(*piVar4 + 8))(*(undefined4 *)(puVar2 + 8));
      *param_1 = puVar2[0x24];
      FUN_004524c0(iVar5);
      if (*(int **)(puVar2 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(puVar2 + 4) + 0x10))(1);
      }
      if (*(undefined4 **)(puVar2 + 8) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(puVar2 + 8))(1);
      }
      FUN_00401f20(puVar2);
      FUN_0049f480();
      return 1;
    }
    uVar1 = *(undefined4 *)(iVar5 + 0x58);
    iVar5 = FUN_00659a00();
    if (iVar5 == 0) {
      iVar5 = FUN_009832e6(uVar1,0,&PTR_PTR_00b05908,&PTR_PTR_00b05924,0);
      if (iVar5 != 0) {
        FUN_00628590();
      }
    }
    FUN_0049f480();
  }
  return 0;
}



void FUN_00682950(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[8] == 1) {
      if ((int *)param_1[1] != (int *)0x0) {
        (**(code **)(*(int *)param_1[1] + 0x10))(1);
      }
      if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[2])(1);
      }
      FUN_00401f20(param_1);
    }
    else if (param_1[8] == 2) {
      FUN_004524c0(*param_1);
      FUN_004524c0(*param_1);
      FUN_00452570(*param_1,param_1);
      return;
    }
  }
  return;
}



void FUN_006829c0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  int local_8;
  undefined1 local_4 [4];
  
  FUN_0049f470();
  piVar1 = (int *)(in_ECX + 0x40);
  if (*(int *)(in_ECX + 0x40) == 0) {
    uVar3 = 0;
    if (*(uint *)(in_ECX + 0x14) != 0) {
      piVar4 = *(int **)(in_ECX + 0x18);
      do {
        if (*piVar4 != 0) {
          local_8 = (*(int **)(in_ECX + 0x18))[uVar3];
          goto LAB_00682a06;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar3 < *(uint *)(in_ECX + 0x14));
    }
    local_8 = 0;
LAB_00682a06:
    if (local_8 != 0) {
      FUN_00452600(&local_8,local_4,piVar1);
    }
    if ((*piVar1 == 0) && (local_8 = FUN_006a9030(), local_8 != 0)) {
      FUN_00452600(&local_8,local_4,piVar1);
    }
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      FUN_0042fa10("PathBuilder",2);
      FUN_0042fc90(0);
      *(int *)(in_ECX + 0x44) = iVar2;
      FUN_0042fd10();
    }
  }
  FUN_0049f480();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00682a90(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int *local_19c;
  int *local_198;
  char local_194 [400];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_1b0;
  local_19c = param_2;
  local_198 = param_3;
  FUN_0049f470();
  iVar5 = *param_2;
  local_1a4 = *param_3;
  local_1a0 = iVar5;
  _sprintf(local_194,"Paths to build: %d",*(int *)(in_ECX + 0x2c) + *(int *)(in_ECX + 0x1c));
  FUN_0057b8e0(local_194,(float)DAT_00b02e24,(float)local_1a0,1,0xffffffff);
  iVar5 = iVar5 + param_1;
  uVar3 = 0;
  local_1a0 = iVar5;
  if (*(uint *)(in_ECX + 0x14) != 0) {
    piVar4 = *(int **)(in_ECX + 0x18);
    do {
      if (*piVar4 != 0) {
        local_1a8 = *(int *)(*(int *)(in_ECX + 0x18) + uVar3 * 4);
        goto joined_r0x00682b47;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < *(uint *)(in_ECX + 0x14));
  }
  local_1a8 = 0;
joined_r0x00682b47:
  do {
    do {
      if (local_1a8 == 0) goto LAB_00682bff;
      local_1ac = 0;
      local_1b0 = 0;
      FUN_00452600(&local_1a8,&local_1ac,&local_1b0);
      iVar1 = local_1ac;
    } while ((local_1ac == 0) || (local_1b0 == 0));
    uVar2 = 0xffffffff;
    if (*(int **)(local_1ac + 0x58) != (int *)0x0) {
      uVar2 = (**(code **)(**(int **)(local_1ac + 0x58) + 8))();
    }
    uVar2 = FUN_004da2a0(*(undefined4 *)(iVar1 + 0xc),uVar2);
    _sprintf(local_194,"HIGH: \"%s\" (%08x) - %i",uVar2);
    FUN_0057b8e0(local_194,(float)DAT_00b02e24,(float)local_1a0,1,0xffffffff);
    iVar5 = iVar5 + param_1;
    local_1a0 = iVar5;
  } while (iVar5 <= DAT_00b06c50 + -10);
LAB_00682bff:
  uVar3 = 0;
  if (*(uint *)(in_ECX + 0x24) != 0) {
    piVar4 = *(int **)(in_ECX + 0x28);
    do {
      if (*piVar4 != 0) {
        local_1a8 = (*(int **)(in_ECX + 0x28))[uVar3];
        goto joined_r0x00682c26;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < *(uint *)(in_ECX + 0x24));
  }
  local_1a8 = 0;
joined_r0x00682c26:
  do {
    do {
      if (local_1a8 == 0) goto LAB_00682cdd;
      local_1b0 = 0;
      local_1ac = 0;
      FUN_00452600(&local_1a8,&local_1b0,&local_1ac);
      iVar1 = local_1b0;
    } while ((local_1b0 == 0) || (local_1ac == 0));
    uVar2 = 0xffffffff;
    if (*(int **)(local_1b0 + 0x58) != (int *)0x0) {
      uVar2 = (**(code **)(**(int **)(local_1b0 + 0x58) + 8))();
    }
    uVar2 = FUN_004da2a0(*(undefined4 *)(iVar1 + 0xc),uVar2);
    _sprintf(local_194,"\"%s\" (%08x) - %i",uVar2);
    FUN_0057b8e0(local_194,(float)DAT_00b02e24,(float)local_1a0,1,0xffffffff);
    iVar5 = iVar5 + param_1;
    local_1a0 = iVar5;
  } while (iVar5 <= DAT_00b06c50 + -10);
LAB_00682cdd:
  _sprintf(local_194,"Paths Completed: %d",*(undefined4 *)(in_ECX + 0x3c));
  local_1b0 = 0x500 - DAT_00b02e24;
  FUN_0057b8e0(local_194,(float)local_1b0,(float)local_1a4,3,0xffffffff);
  local_1a4 = local_1a4 + param_1;
  uVar3 = 0;
  if (*(uint *)(in_ECX + 0x34) != 0) {
    piVar4 = *(int **)(in_ECX + 0x38);
    do {
      if (*piVar4 != 0) {
        local_1a8 = (*(int **)(in_ECX + 0x38))[uVar3];
        goto joined_r0x00682d57;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < *(uint *)(in_ECX + 0x34));
  }
  local_1a8 = 0;
joined_r0x00682d57:
  do {
    do {
      if (local_1a8 == 0) goto LAB_00682e21;
      local_1b0 = 0;
      local_1ac = 0;
      FUN_00452600(&local_1a8,&local_1b0,&local_1ac);
      iVar1 = local_1b0;
    } while ((local_1b0 == 0) || (local_1ac == 0));
    uVar2 = 0xffffffff;
    if (*(int **)(local_1b0 + 0x58) != (int *)0x0) {
      uVar2 = (**(code **)(**(int **)(local_1b0 + 0x58) + 8))();
    }
    uVar2 = FUN_004da2a0(*(undefined4 *)(iVar1 + 0xc),uVar2);
    _sprintf(local_194,"\"%s\" (%08x) - %i",uVar2);
    local_1b0 = 0x500 - DAT_00b02e24;
    FUN_0057b8e0(local_194,(float)local_1b0,(float)local_1a4,3,0xffffffff);
    local_1a4 = local_1a4 + param_1;
  } while (local_1a4 <= DAT_00b06c50 + -10);
LAB_00682e21:
  *local_19c = iVar5;
  *local_198 = local_1a4;
  FUN_0049f480();
  return;
}



void FUN_00682e60(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c4d18;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a74bec;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a74b78;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00682ed0(byte param_1)

{
  FUN_00682e60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00682ef0(void)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c4d5e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0042fb60(1,0,1,0,1);
  *in_ECX = &PTR_FUN_00a74c0c;
  local_4 = 0;
  in_ECX[4] = &PTR_FUN_00a74b78;
  in_ECX[5] = 0x25;
  in_ECX[7] = 0;
  pvVar2 = (void *)FUN_00401f00(0x94,uVar1);
  in_ECX[6] = pvVar2;
  _memset(pvVar2,0,in_ECX[5] * 4);
  in_ECX[4] = &PTR_FUN_00a74bec;
  local_4._0_1_ = 1;
  in_ECX[8] = &PTR_FUN_00a74b78;
  in_ECX[9] = 0x25;
  in_ECX[0xb] = 0;
  pvVar2 = (void *)FUN_00401f00(0x94);
  in_ECX[10] = pvVar2;
  _memset(pvVar2,0,in_ECX[9] * 4);
  in_ECX[8] = &PTR_FUN_00a74bec;
  local_4 = CONCAT31(local_4._1_3_,2);
  in_ECX[0xc] = &PTR_FUN_00a74b78;
  in_ECX[0xd] = 0x25;
  in_ECX[0xf] = 0;
  pvVar2 = (void *)FUN_00401f00(0x94);
  in_ECX[0xe] = pvVar2;
  _memset(pvVar2,0,in_ECX[0xd] * 4);
  in_ECX[0xc] = &PTR_FUN_00a74bec;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00683030(void)

{
  uint uVar1;
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
  if (DAT_00b3bf80 == 0) {
    local_10 = FUN_00401f00(0x48,uVar1);
    local_4 = 0;
    if (local_10 != 0) {
      DAT_00b3bf80 = FUN_00682ef0();
      *unaff_FS_OFFSET = local_c;
      return;
    }
    DAT_00b3bf80 = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int * FUN_006830b0(int *param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  bool bVar10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c4db7;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar3 = (int *)0x0;
  if (param_1 == (int *)0x0) goto LAB_006833eb;
  uVar4 = FUN_004db260((char)param_1[1],0,uVar2);
  piVar3 = (int *)FUN_009832e6(uVar4,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if (piVar3 == (int *)0x0) goto LAB_006833eb;
  uVar4 = (**(code **)(*param_1 + 0x170))();
  FUN_006c5420(uVar4);
  FUN_0046b590();
  FUN_0046c300(param_1[3],1);
  uVar4 = FUN_004db4a0();
  FUN_004d7040(uVar4);
  FUN_004d8a30(param_1[0xb],param_1[0xc],param_1[0xd]);
  FUN_004d89a0(param_1[8],param_1[9],param_1[10]);
  iVar5 = FUN_006ecc80();
  if (iVar5 == 0) {
LAB_006831bc:
    iVar5 = (**(code **)param_1[6])();
    if (iVar5 == 0) {
      iVar5 = *piVar3;
      uVar4 = FUN_006ecc80();
      (**(code **)(iVar5 + 0x194))(uVar4);
    }
    else {
      FUN_004247b0(iVar5);
    }
  }
  else {
    FUN_006ecc80();
    cVar1 = FUN_004c97f0();
    if (cVar1 == '\0') goto LAB_006831bc;
    iVar5 = *piVar3;
    uVar4 = FUN_006ecc80();
    (**(code **)(iVar5 + 0x194))(uVar4);
  }
  iVar5 = FUN_005e02e0(0);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + 0x44;
  }
  piVar6 = (int *)FUN_00485e00(param_1,iVar5);
  if ((piVar6 != (int *)0x0) && ((((int *)*piVar6)[1] != 0 || (*(int *)*piVar6 != 0)))) {
    iVar5 = FUN_005e02e0(0);
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + 0x44;
    }
    FUN_00485e00(piVar3,iVar5);
    for (piVar6 = (int *)*piVar6; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
      iVar5 = *piVar6;
      if (iVar5 != 0) {
        iVar7 = *(int *)(iVar5 + 8);
        if (*(char *)(iVar7 + 4) == '\x1b') {
          if (iVar7 != DAT_00b35ec8) {
            bVar10 = iVar7 == DAT_00b35ecc;
            goto LAB_0068327f;
          }
        }
        else {
          bVar10 = *(char *)(iVar7 + 4) == '\'';
LAB_0068327f:
          if (!bVar10) goto LAB_006832ca;
        }
        iVar7 = FUN_00401f00(0xc);
        uVar4 = 0;
        uStack_4 = 0;
        if (iVar7 != 0) {
          uVar4 = *(undefined4 *)(iVar5 + 8);
          uVar8 = FUN_004b2460();
          uVar4 = FUN_00484420(uVar4,uVar8);
        }
        uStack_4 = 0xffffffff;
        FUN_0048ae30(uVar4,1);
      }
LAB_006832ca:
    }
  }
  piVar6 = (int *)param_1[0x16];
  if (piVar6 == (int *)0x0) goto LAB_006833eb;
  piVar9 = (int *)0x0;
  uVar4 = (**(code **)(*piVar6 + 8))();
  switch(uVar4) {
  case 0:
    iVar5 = FUN_00401f00(0x2ec);
    uStack_4 = 4;
    if (iVar5 == 0) {
LAB_00683393:
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)FUN_00628ee0();
    }
    break;
  case 1:
    iVar5 = FUN_00401f00(0x18c);
    uStack_4 = 3;
    if (iVar5 == 0) goto LAB_00683393;
    piVar9 = (int *)FUN_0064b400();
    break;
  case 2:
    iVar5 = FUN_00401f00(0xa8);
    uStack_4 = 2;
    if (iVar5 == 0) goto LAB_00683393;
    piVar9 = (int *)FUN_00658690();
    break;
  case 3:
    iVar5 = FUN_00401f00(0x90);
    uStack_4 = 1;
    if (iVar5 == 0) goto LAB_00683393;
    piVar9 = (int *)FUN_006438f0();
    break;
  default:
    goto switchD_006832f4_default;
  }
  uStack_4 = 0xffffffff;
switchD_006832f4_default:
  if (((piVar6[2] != 0) && (*(char *)(piVar6[2] + 0x20) == '\x01')) &&
     (cVar1 = FUN_005660a0(), cVar1 == '\0')) {
    iVar5 = *piVar9;
    piVar9[2] = piVar6[2];
    uVar4 = (**(code **)(*piVar6 + 0xcc))();
    (**(code **)(iVar5 + 0xd0))(uVar4);
  }
  if ((undefined4 *)piVar3[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)piVar3[0x16])(1);
  }
  piVar3[0x16] = (int)piVar9;
LAB_006833eb:
  *unaff_FS_OFFSET = local_c;
  return piVar3;
}



void FUN_00683420(void)

{
  int iVar1;
  int *in_ECX;
  
  FUN_0049f470();
  if (in_ECX[0x10] == 0) {
    FUN_006829c0();
    if (in_ECX[0x10] == 0) goto LAB_00683480;
  }
  FUN_00498ee0(1,0);
  iVar1 = FUN_0042fc20(0);
  if (iVar1 == 0) {
    iVar1 = in_ECX[0x10];
    in_ECX[0x10] = 0;
    (**(code **)(*in_ECX + 8))();
    in_ECX[2] = 0;
    FUN_00682950(iVar1);
    FUN_006829c0();
  }
LAB_00683480:
  FUN_0049f480();
  return;
}



void FUN_00683490(void)

{
  code *pcVar1;
  int iVar2;
  int *in_ECX;
  
  FUN_0049f470();
  if (in_ECX[0x10] != 0) {
    iVar2 = FUN_0042fc20(0);
    while (iVar2 != 0) {
      FUN_00498ee0(1,1);
      iVar2 = FUN_0042fc20(0);
    }
    pcVar1 = *(code **)(*in_ECX + 8);
    iVar2 = in_ECX[0x10];
    in_ECX[0x10] = 0;
    (*pcVar1)();
    in_ECX[2] = 0;
    FUN_00682950(iVar2);
  }
  FUN_0049f480();
  return;
}



void FUN_00683500(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  int local_c;
  int iStack_8;
  undefined1 auStack_4 [4];
  
  if (*(int *)(in_ECX + 0x40) != 0) {
    FUN_00683490();
    *(undefined4 *)(in_ECX + 0x40) = 0;
  }
  uVar3 = 0;
  if (*(uint *)(in_ECX + 0x24) != 0) {
    piVar4 = *(int **)(in_ECX + 0x28);
    do {
      if (*piVar4 != 0) {
        local_c = (*(int **)(in_ECX + 0x28))[uVar3];
        goto joined_r0x0068354a;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < *(uint *)(in_ECX + 0x24));
  }
  local_c = 0;
joined_r0x0068354a:
  while (local_c != 0) {
    iStack_8 = 0;
    FUN_00452600(&local_c,auStack_4,&iStack_8);
    iVar2 = iStack_8;
    if (iStack_8 != 0) {
      if (*(int **)(iStack_8 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(iStack_8 + 4) + 0x10))(1);
      }
      puVar1 = *(undefined4 **)(iVar2 + 8);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      FUN_00401f20(iVar2);
    }
  }
  FUN_007c2a40();
  uVar3 = 0;
  if (*(uint *)(in_ECX + 0x14) != 0) {
    piVar4 = *(int **)(in_ECX + 0x18);
    do {
      if (*piVar4 != 0) {
        local_c = (*(int **)(in_ECX + 0x18))[uVar3];
        goto joined_r0x006835d2;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < *(uint *)(in_ECX + 0x14));
  }
  local_c = 0;
joined_r0x006835d2:
  while (local_c != 0) {
    iStack_8 = 0;
    FUN_00452600(&local_c,auStack_4,&iStack_8);
    iVar2 = iStack_8;
    if (iStack_8 != 0) {
      if (*(int **)(iStack_8 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(iStack_8 + 4) + 0x10))(1);
      }
      puVar1 = *(undefined4 **)(iVar2 + 8);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      FUN_00401f20(iVar2);
    }
  }
  FUN_007c2a40();
  uVar3 = 0;
  if (*(uint *)(in_ECX + 0x34) != 0) {
    piVar4 = *(int **)(in_ECX + 0x38);
    do {
      if (*piVar4 != 0) {
        local_c = (*(int **)(in_ECX + 0x38))[uVar3];
        goto joined_r0x0068365a;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < *(uint *)(in_ECX + 0x34));
  }
  local_c = 0;
joined_r0x0068365a:
  while (local_c != 0) {
    iStack_8 = 0;
    FUN_00452600(&local_c,auStack_4,&iStack_8);
    iVar2 = iStack_8;
    if (iStack_8 != 0) {
      if (*(int **)(iStack_8 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(iStack_8 + 4) + 0x10))(1);
      }
      puVar1 = *(undefined4 **)(iVar2 + 8);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      FUN_00401f20(iVar2);
    }
  }
  FUN_007c2a40();
  return;
}



void FUN_006836e0(int *param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6,
                 char param_7)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  int *piVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar7 = param_2;
  iVar2 = (int)param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afb5b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 == (int *)0x0) || ((param_2 == (int *)0x0 && (param_3 == (int *)0x0))))
  goto LAB_00683960;
  cVar3 = FUN_005e12e0(uVar4);
  if (cVar3 != '\0') {
    param_7 = '\x01';
  }
  if ((piVar7 != (int *)0x0) && (cVar3 = FUN_004c97f0(), cVar3 == '\0')) {
    piVar7 = (int *)0x0;
    param_2 = (int *)0x0;
  }
  FUN_0049f470();
  param_1 = (int *)0x0;
  FUN_0055e000(iVar2,&param_1);
  if (((param_1 == (int *)0x0) && (FUN_0055e000(iVar2,&param_1), param_1 == (int *)0x0)) &&
     (FUN_0055e000(iVar2,&param_1), param_1 == (int *)0x0)) {
LAB_006837d6:
    iVar5 = FUN_00401f00(0x28);
    if (iVar5 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_00682580();
    }
    piVar6[3] = (int)piVar7;
    piVar6[4] = (int)param_3;
    piVar6[5] = param_4;
    piVar6[6] = param_5;
    piVar6[7] = param_6;
    *piVar6 = iVar2;
    iVar5 = FUN_006830b0(iVar2);
    piVar6[1] = iVar5;
    param_1 = (int *)FUN_004d8af0();
    if ((param_2 == (int *)0x0) || (cVar3 = FUN_004c97f0(), cVar3 == '\0')) {
      if (param_3 != (int *)0x0) {
        piVar7 = (int *)FUN_004f0600(&param_4);
        piVar1 = param_3;
        goto joined_r0x00683865;
      }
LAB_006838d8:
      FUN_00659a00();
    }
    else {
      piVar7 = (int *)FUN_004cbbb0(&param_4);
      piVar1 = param_2;
joined_r0x00683865:
      if (((piVar7 == (int *)0x0) && (piVar7 = piVar1, piVar1 == (int *)0x0)) || (param_1 != piVar7)
         ) goto LAB_006838d8;
      if (piVar6[2] == 0) {
        param_2 = (int *)FUN_00401f00(0x14);
        local_4 = 0;
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_0068a9f0();
        }
        local_4 = 0xffffffff;
        piVar6[2] = iVar5;
      }
      FUN_00689a00();
      FUN_0068a280(&param_4);
      FUN_00689dc0(piVar6[1]);
      piVar6[8] = 2;
    }
    FUN_00452570(iVar2,piVar6);
  }
  else {
    piVar6 = param_1;
    cVar3 = FUN_0047d810(param_1 + 5,&param_4,0x40a00000);
    if (((cVar3 == '\0') || ((int *)piVar6[3] != piVar7)) || ((int *)piVar6[4] != param_3)) {
      FUN_006826d0(iVar2);
      goto LAB_006837d6;
    }
  }
  if ((param_7 == '\0') || (piVar6[8] == 2)) {
    if (*(int *)(in_ECX + 0x40) == 0) {
      if (piVar6[8] == 2) {
        FUN_006829c0();
      }
      else {
        *(int **)(in_ECX + 0x40) = piVar6;
        FUN_00682500(piVar6);
      }
    }
  }
  else {
    if (*(int *)(in_ECX + 0x40) != 0) {
      FUN_00683490();
    }
    FUN_00682450(piVar6);
    if (piVar6[8] == 2) {
      FUN_004524c0(iVar2);
      FUN_004524c0(iVar2);
      FUN_00452570(iVar2,piVar6);
    }
  }
  FUN_0049f480();
LAB_00683960:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00683980(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c4e09;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a74c0c;
  local_4 = 3;
  FUN_00683500(uVar1);
  local_4._0_1_ = 2;
  FUN_00682e60();
  local_4._0_1_ = 1;
  FUN_00682e60();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00682e60();
  local_4 = 0xffffffff;
  FUN_0042fda0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00683a10(byte param_1)

{
  FUN_00683980();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



byte FUN_00683a60(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x2c) >> 5 & 1;
}



byte FUN_00683a70(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x2c) >> 7;
}



void FUN_00683a80(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(byte *)(in_ECX + 0x2c) = *(byte *)(in_ECX + 0x2c) | 0x80;
    return;
  }
  *(byte *)(in_ECX + 0x2c) = *(byte *)(in_ECX + 0x2c) & 0x7f;
  return;
}



bool FUN_00683aa0(void)

{
  int iVar1;
  
  iVar1 = FUN_0042b410();
  if (iVar1 != 0) {
    FUN_0042b410();
    iVar1 = FUN_00780d10();
    return iVar1 == 0;
  }
  return false;
}



float10 FUN_00683ad0(float param_1,float param_2,float *param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)0;
  *param_3 = (float)fVar1;
  fVar2 = (float10)(param_2 - param_1);
  if (fVar2 != fVar1) {
    *param_3 = 1.0;
    if (fVar2 < fVar1) {
      if (fVar2 <= (float10)-3.1415927410125732) {
        return (float10)(float)(fVar2 + (float10)6.2831854820251465);
      }
      *param_3 = -1.0;
      return fVar2;
    }
    if ((float10)3.1415927410125732 < fVar2) {
      *param_3 = -1.0;
      return (float10)(float)((float10)6.2831854820251465 - fVar2);
    }
  }
  return fVar2;
}



float10 FUN_00683b90(int param_1,float param_2)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  
  iVar1 = FUN_0042b410();
  if (((param_1 != 0) && (iVar1 != 0)) && (*(int *)(in_ECX + 0x30) != 0)) {
    iVar1 = FUN_00680cb0();
    if (iVar1 - 1U < 4) {
      fVar2 = (float10)FUN_00680d10();
      param_2 = (float)fVar2;
    }
  }
  return (float10)param_2;
}



void FUN_00683c20(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  while ((*(int *)(in_ECX + 0x38) != 0 || (*(int *)(in_ECX + 0x34) != 0))) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x34));
    puVar1 = *(undefined4 **)(in_ECX + 0x38);
    if (puVar1 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x34) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x38) = puVar1[1];
      *(undefined4 *)(in_ECX + 0x34) = *puVar1;
      FUN_00401f20(puVar1);
    }
  }
  return;
}



undefined1 FUN_00683c70(int param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int in_ECX;
  int *piVar3;
  
  uVar2 = 0;
  piVar3 = (int *)(in_ECX + 0x34);
  if (piVar3 != (int *)0x0) {
    while( true ) {
      piVar1 = (int *)piVar3[1];
      if ((piVar1 == (int *)0x0) && (*piVar3 == 0)) {
        return 0;
      }
      if ((*(int *)*piVar3 == param_1) && (((int *)*piVar3)[1] == param_2)) break;
      piVar3 = piVar1;
      if (piVar1 == (int *)0x0) {
        return uVar2;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



float10 FUN_00683cb0(float *param_1)

{
  float *pfVar1;
  float fVar2;
  float10 fVar3;
  
  if (param_1[1] == 0.0) {
    if (*param_1 <= 0.0) {
      fVar2 = 4.712389;
    }
    else {
      fVar2 = 1.5707964;
    }
    fVar3 = (float10)fVar2;
  }
  else {
    fVar3 = (float10)FUN_009870a0();
    pfVar1 = param_1 + 1;
    param_1 = (float *)(float)fVar3;
    if ((float10)*pfVar1 < (float10)0) {
      param_1 = (float *)((float)fVar3 + 3.1415927);
    }
    fVar3 = (float10)(float)param_1;
    if (fVar3 < (float10)0) {
      fVar3 = (float10)FUN_00982bfa();
      return (float10)(float)fVar3;
    }
  }
  if ((float10)6.2831854820251465 < fVar3 != ((float10)6.2831854820251465 == fVar3)) {
    fVar3 = (float10)FUN_00982bfa();
    return (float10)(float)fVar3;
  }
  return fVar3;
}



void FUN_00683d80(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(*param_1 + 0x1e0))(param_2,param_3);
  FUN_00683ad0((float)fVar1);
  return;
}



undefined4 FUN_00683db0(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x48) == 1) {
    if (*(int *)(in_ECX + 0x30) != 0) {
      iVar1 = FUN_00680cb0();
      if (iVar1 == 3) {
        return 1;
      }
    }
  }
  else if (((*(int *)(in_ECX + 0x48) == 2) && (*(int *)(in_ECX + 0x30) != 0)) &&
          (iVar1 = FUN_00680cb0(), iVar1 == 4)) {
    return 1;
  }
  return 0;
}



void FUN_00683df0(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int *in_ECX;
  int iVar6;
  float10 fVar7;
  undefined4 uVar8;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar1 = in_ECX[0x12];
  iVar6 = iVar1 + 1;
  if ((param_1 != (int *)0x0) && (iVar3 = FUN_0042b410(), iVar3 != 0)) {
    if (iVar1 == 0) {
      if (in_ECX[0xc] == 0) goto LAB_00683fdc;
      pfVar4 = (float *)(**(code **)(*param_1 + 0x174))();
      FUN_0042b410();
      pfVar5 = (float *)FUN_006899c0();
      fStack_c = *pfVar5 - *pfVar4;
      fStack_8 = pfVar5[1] - pfVar4[1];
      fStack_4 = pfVar5[2] - pfVar4[2];
      fVar7 = (float10)FUN_00683cb0(&fStack_c);
      param_1 = (int *)0x3f800000;
      cVar2 = FUN_005e0530();
      if (cVar2 != '\0') {
        param_1 = (int *)0x40000000;
      }
      cVar2 = FUN_005e0510();
      if (cVar2 != '\0') {
        param_1 = (int *)((float)param_1 * 0.75);
      }
      FUN_00680e70((float)(fVar7 - (float10)1.0471975803375244));
      FUN_00680d20((float)(fVar7 - (float10)1.0471975803375244));
      uVar8 = 3;
    }
    else {
      if ((iVar6 != 2) || (in_ECX[0xc] == 0)) goto LAB_00683fdc;
      pfVar4 = (float *)(**(code **)(*param_1 + 0x174))();
      FUN_0042b410();
      pfVar5 = (float *)FUN_006899c0();
      fStack_c = *pfVar5 - *pfVar4;
      fStack_8 = pfVar5[1] - pfVar4[1];
      fStack_4 = pfVar5[2] - pfVar4[2];
      fVar7 = (float10)FUN_00683cb0(&fStack_c);
      param_1 = (int *)0x3f800000;
      cVar2 = FUN_005e0530();
      if (cVar2 != '\0') {
        param_1 = (int *)0x40000000;
      }
      cVar2 = FUN_005e0510();
      if (cVar2 != '\0') {
        param_1 = (int *)((float)param_1 * 0.75);
      }
      FUN_00680e70((float)(fVar7 + (float10)1.0471975803375244));
      FUN_00680d20((float)(fVar7 + (float10)1.0471975803375244));
      uVar8 = 4;
    }
    FUN_0046caf0(uVar8);
    FUN_00680cd0(0);
    FUN_00680ce0(param_1);
    FUN_00680d00(0);
    in_ECX[7] = 0x7f7fffff;
    in_ECX[9] = 0;
    in_ECX[8] = 0;
  }
LAB_00683fdc:
  in_ECX[0x12] = iVar6;
  if (2 < iVar6) {
    (**(code **)(*in_ECX + 0x30))(1);
  }
  return;
}



void FUN_00684000(int param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float *pfVar10;
  float *pfVar11;
  int in_ECX;
  int iVar12;
  float10 fVar13;
  float local_48;
  int local_44;
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
  float local_4;
  
  if (param_1 == 0) {
    return;
  }
  local_44 = in_ECX;
  cVar3 = FUN_005e3400();
  cVar4 = FUN_005e1e90();
  iVar6 = FUN_0042b410();
  if (iVar6 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00780d10();
    if (iVar7 != 0) {
      iVar8 = FUN_00780d10();
      goto LAB_0068405c;
    }
  }
  iVar8 = 0;
LAB_0068405c:
  bVar2 = false;
  if (iVar6 != 0) {
    do {
      if ((iVar7 == 0) || (iVar8 == 0)) break;
      if (((cVar3 == '\0') && (cVar5 = FUN_0068ca80(), cVar5 != '\0')) ||
         ((cVar4 != '\0' && (cVar5 = FUN_0068cab0(), cVar5 != '\0')))) goto LAB_0068439a;
      if (*(int *)(DAT_00b333a0 + 0x34) == 0) {
        uVar9 = FUN_006899c0();
        cVar5 = FUN_0043f840(uVar9);
        if (cVar5 == '\0') break;
      }
      pfVar10 = (float *)FUN_006899c0();
      pfVar11 = (float *)FUN_006899c0();
      local_c = *pfVar11 - *pfVar10;
      local_8 = pfVar11[1] - pfVar10[1];
      local_4 = pfVar11[2] - pfVar10[2];
      fVar13 = (float10)FUN_00683cb0(&local_c);
      fVar1 = (float)fVar13;
      pfVar10 = (float *)FUN_006899c0();
      pfVar11 = (float *)FUN_006899c0();
      local_3c = *pfVar11 - *pfVar10;
      local_38 = pfVar11[1] - pfVar10[1];
      local_34 = pfVar11[2] - pfVar10[2];
      fVar13 = (float10)FUN_00683cb0(&local_3c,&local_48);
      fVar13 = (float10)FUN_00683ad0(fVar1,(float)fVar13);
      local_40 = (float)ABS(fVar13);
      pfVar10 = (float *)FUN_006899c0();
      pfVar11 = (float *)FUN_006899c0();
      local_30 = *pfVar11 - *pfVar10;
      local_2c = pfVar11[1] - pfVar10[1];
      local_28 = pfVar11[2] - pfVar10[2];
      fVar13 = (float10)FUN_00683cb0(&local_30,&local_48);
      fVar13 = (float10)FUN_00683ad0(fVar1,(float)fVar13);
      iVar12 = iVar8;
      while( true ) {
        local_48 = (float)ABS(fVar13);
        if ((((0.17453292 <= local_48) || (0.17453292 <= local_40)) || (bVar2)) ||
           (cVar5 = FUN_0068ca50(), cVar5 != '\0')) goto LAB_0068436f;
        FUN_0068be80(iVar7,iVar6);
        iVar8 = FUN_00780d10();
        iVar7 = iVar12;
        if (iVar8 == 0) goto LAB_00684387;
        iVar12 = iVar8;
        if (((cVar3 == '\0') && (cVar5 = FUN_0068ca80(), cVar5 != '\0')) ||
           ((cVar4 != '\0' && (cVar5 = FUN_0068cab0(), cVar5 != '\0')))) break;
        if (*(int *)(DAT_00b333a0 + 0x34) == 0) {
          uVar9 = FUN_006899c0();
          cVar5 = FUN_0043f840(uVar9);
          if (cVar5 == '\0') goto LAB_0068436f;
        }
        pfVar10 = (float *)FUN_006899c0();
        pfVar11 = (float *)FUN_006899c0();
        local_3c = *pfVar11 - *pfVar10;
        local_38 = pfVar11[1] - pfVar10[1];
        local_34 = pfVar11[2] - pfVar10[2];
        local_24 = local_3c;
        local_20 = local_38;
        local_1c = local_34;
        fVar13 = (float10)FUN_00683cb0(&local_3c,&local_48);
        fVar13 = (float10)FUN_00683ad0(fVar1,(float)fVar13);
        local_40 = (float)ABS(fVar13);
        pfVar10 = (float *)FUN_006899c0();
        pfVar11 = (float *)FUN_006899c0();
        local_30 = *pfVar11 - *pfVar10;
        local_2c = pfVar11[1] - pfVar10[1];
        local_28 = pfVar11[2] - pfVar10[2];
        local_18 = local_30;
        local_14 = local_2c;
        local_10 = local_28;
        fVar13 = (float10)FUN_00683cb0(&local_30,&local_48);
        fVar13 = (float10)FUN_00683ad0(fVar1,(float)fVar13);
      }
      bVar2 = true;
LAB_0068436f:
      iVar8 = iVar12;
      if ((iVar12 != 0) && (!bVar2)) {
        iVar8 = FUN_00780d10();
        iVar6 = iVar7;
        iVar7 = iVar12;
      }
LAB_00684387:
      in_ECX = local_44;
    } while (iVar6 != 0);
    if (bVar2) {
LAB_0068439a:
      if (iVar8 != 0) {
        FUN_0068c0f0(iVar8);
        *(byte *)(in_ECX + 0x2c) = *(byte *)(in_ECX + 0x2c) | 0x80;
      }
    }
  }
  return;
}



char FUN_006843c0(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  
  if (DAT_00b3c088 != '\0') {
    return '\0';
  }
  cVar5 = '\0';
  *param_4 = 0;
  fVar3 = (float)DAT_00b33ea0;
  if (DAT_00b33ea0 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  piVar7 = &DAT_00b3c08c;
  piVar6 = (int *)0x0;
  do {
    if (cVar5 != '\0') {
      return cVar5;
    }
    piVar1 = (int *)*piVar7;
    if (piVar1 == (int *)0x0) {
LAB_0068446f:
      piVar6 = piVar7;
      piVar7 = (int *)piVar7[1];
    }
    else {
      if (fVar3 - (float)piVar1[7] < 1000.0) {
        if (((*piVar1 == param_1) &&
            (cVar4 = FUN_0047d810(piVar1 + 1,param_2,0x41a00000), cVar4 != '\0')) &&
           (cVar4 = FUN_0047d810(piVar1 + 4,param_3,0x41a00000), cVar4 != '\0')) {
          cVar5 = '\x01';
          *param_4 = (char)piVar1[8];
        }
        goto LAB_0068446f;
      }
      if (piVar6 == (int *)0x0) {
        piVar2 = (int *)piVar7[1];
        if (piVar2 == (int *)0x0) {
          *piVar7 = 0;
          FUN_00401f20(piVar1);
        }
        else {
          piVar7[1] = piVar2[1];
          *piVar7 = *piVar2;
          FUN_00401f20(piVar2);
          FUN_00401f20(piVar1);
        }
      }
      else {
        FUN_0065c620(piVar1);
        FUN_00401f20(piVar1);
        piVar7 = (int *)piVar6[1];
      }
    }
    if (piVar7 == (int *)0x0) {
      return cVar5;
    }
  } while( true );
}



void FUN_00684530(int param_1,int *param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  int *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afaab;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  fVar4 = (float)DAT_00b33ea0;
  if (DAT_00b33ea0 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  local_10 = (int *)0x0;
  piVar9 = &DAT_00b3c094;
  piVar8 = (int *)0x0;
  do {
    piVar1 = (int *)*piVar9;
    if (piVar1 == (int *)0x0) {
LAB_006845d4:
      piVar8 = piVar9;
      piVar9 = (int *)piVar9[1];
    }
    else {
      if (fVar4 - (float)piVar1[6] < 3000.0) {
        if (*piVar1 == param_1) {
          uVar7 = FUN_006899c0(0x41a00000);
          uVar7 = FUN_006899c0(uVar7);
          cVar5 = FUN_0047d810(uVar7);
          if (cVar5 != '\0') {
            local_10 = piVar1;
          }
        }
        goto LAB_006845d4;
      }
      if (piVar8 == (int *)0x0) {
        piVar3 = (int *)piVar9[1];
        if (piVar3 == (int *)0x0) {
          *piVar9 = 0;
        }
        else {
          piVar9[1] = piVar3[1];
          *piVar9 = *piVar3;
          FUN_00401f20(piVar3,uVar6);
        }
        FUN_0060d0a0();
        FUN_00401f20(piVar1);
      }
      else {
        FUN_0065c620(piVar1);
        FUN_0060d0a0();
        FUN_00401f20(piVar1);
        piVar9 = (int *)piVar8[1];
      }
    }
    if (piVar9 == (int *)0x0) {
      if (local_10 == (int *)0x0) {
        piVar8 = (int *)FUN_00401f00(0x20);
        local_4 = 0;
        piVar9 = (int *)0x0;
        if (piVar8 != (int *)0x0) {
          FUN_0068cb30();
          piVar9 = piVar8;
        }
        *piVar9 = param_1;
        piVar9[1] = *param_2;
        piVar9[2] = param_2[1];
        piVar9[3] = param_2[2];
        piVar9[4] = param_2[3];
        iVar2 = param_2[4];
        piVar9[6] = (int)fVar4;
        piVar9[5] = iVar2;
        local_4 = 0xffffffff;
        *(undefined1 *)(piVar9 + 7) = param_3;
        FUN_00446cb0(piVar9);
        *unaff_FS_OFFSET = local_c;
        return;
      }
      local_10[6] = (int)fVar4;
      local_10[1] = *param_2;
      local_10[2] = param_2[1];
      local_10[3] = param_2[2];
      local_10[4] = param_2[3];
      local_10[5] = param_2[4];
      *(undefined1 *)(local_10 + 7) = param_3;
      *unaff_FS_OFFSET = local_c;
      return;
    }
  } while( true );
}



undefined4 FUN_00684780(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  uVar1 = 0;
  if (*(int *)(in_ECX + 0x30) != 0) {
    iVar2 = FUN_00680cb0();
    if ((iVar2 == 0) || (iVar2 == 7)) {
      return 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}



void FUN_006847b0(void)

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
  if (*(int *)(in_ECX + 0x30) == 0) {
    iVar2 = FUN_00401f00(0x34,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00680dc0();
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x30) = uVar3;
    FUN_00680e20(*(undefined4 *)(in_ECX + 0x28));
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00684830(void)

{
  int iVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  undefined4 *local_4;
  
  iVar1 = in_ECX[10];
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 0x1c) != (int *)0x0) {
      local_4 = in_ECX;
      (**(code **)(**(int **)(iVar1 + 0x1c) + 0x88))(&local_4,iVar1);
      if (((local_4 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(local_4 + 1), LVar3 == 0)
          ) && (local_4 != (undefined4 *)0x0)) {
        (**(code **)*local_4)(1);
      }
      FUN_00707610();
    }
    puVar2 = (undefined4 *)in_ECX[10];
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      in_ECX[10] = 0;
    }
    if (in_ECX[0xc] != 0) {
      FUN_00680e20(0);
    }
  }
  return;
}



void FUN_006848d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  
  if ((in_ECX != 0) && (iVar1 = *(int *)(in_ECX + 8), iVar1 != 0)) {
    FUN_0089f570();
    uVar2 = *(undefined4 *)(iVar1 + 0x74);
    uVar3 = *(undefined4 *)(iVar1 + 0x78);
    uVar4 = *(undefined4 *)(iVar1 + 0x7c);
    *param_1 = *(undefined4 *)(iVar1 + 0x70);
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x84);
    uVar3 = *(undefined4 *)(iVar1 + 0x88);
    uVar4 = *(undefined4 *)(iVar1 + 0x8c);
    param_1[4] = *(undefined4 *)(iVar1 + 0x80);
    param_1[5] = uVar2;
    param_1[6] = uVar3;
    param_1[7] = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x94);
    uVar3 = *(undefined4 *)(iVar1 + 0x98);
    uVar4 = *(undefined4 *)(iVar1 + 0x9c);
    param_1[8] = *(undefined4 *)(iVar1 + 0x90);
    param_1[9] = uVar2;
    param_1[10] = uVar3;
    param_1[0xb] = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0xa4);
    uVar3 = *(undefined4 *)(iVar1 + 0xa8);
    uVar4 = *(undefined4 *)(iVar1 + 0xac);
    param_1[0xc] = *(undefined4 *)(iVar1 + 0xa0);
    param_1[0xd] = uVar2;
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar4;
    FUN_0089f570();
  }
  return;
}



void FUN_00684930(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c4e73;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a74ca4;
  local_4 = 1;
  FUN_0068c6e0(uVar3);
  FUN_00683c20();
  iVar1 = in_ECX[0xc];
  if (iVar1 != 0) {
    FUN_00538b60();
    FUN_00401f20(iVar1);
    in_ECX[0xc] = 0;
  }
  FUN_00684830();
  puVar2 = (undefined4 *)in_ECX[10];
  local_4 = local_4 & 0xffffff00;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0068b320();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_006849f0(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  undefined1 local_5;
  
  iVar5 = 0;
  local_5 = 0;
  if ((param_2 != 0) && (*(float *)(in_ECX + 0x3c) != 3.4028235e+38)) {
    param_2 = 0;
    iVar2 = FUN_006ecc80();
    iVar3 = FUN_004d6670();
    if ((iVar2 == 0) || (cVar1 = FUN_004c97f0(), cVar1 == '\0')) {
      if (iVar3 == 0) {
        return 0;
      }
      iVar2 = FUN_004f1a80(in_ECX + 0x3c);
      if (iVar2 != 0) {
        iVar5 = FUN_004af170();
      }
      iVar2 = FUN_004f1a80(param_1);
      if (iVar2 != 0) {
        param_2 = FUN_004af170();
      }
    }
    else {
      FUN_006ecc80();
      iVar5 = FUN_004af170();
      FUN_006ecc80();
      param_2 = FUN_004af170();
    }
    if ((((iVar5 != 0) && (param_2 != 0)) && (iVar5 = FUN_004e6d60(in_ECX + 0x3c), iVar5 != 0)) &&
       (iVar2 = FUN_004e6d60(param_1), iVar2 != 0)) {
      iVar3 = iVar5;
      FUN_004e7de0(iVar5);
      cVar1 = FUN_00446c30(iVar3);
      if ((cVar1 != '\0') && (cVar1 = FUN_00683c70(iVar5,iVar2), cVar1 == '\0')) {
        piVar4 = (int *)FUN_00401f00(8);
        *piVar4 = iVar5;
        piVar4[1] = iVar2;
        FUN_00446cb0(piVar4);
        local_5 = 1;
      }
    }
  }
  return local_5;
}



undefined4 FUN_00684b30(int *param_1,float *param_2,float param_3,char param_4)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (param_1 != (int *)0x0) {
    pfVar2 = (float *)(**(code **)(*param_1 + 0x174))();
    fVar1 = pfVar2[2];
    fStack_c = *pfVar2 - *param_2;
    fStack_8 = pfVar2[1] - param_2[1];
    fStack_4 = fVar1 - param_2[2];
    iVar3 = FUN_0065a2c0();
    if ((iVar3 == 0) || (iVar4 = FUN_0088d370(), iVar4 == 0)) {
      fVar5 = (float10)FUN_005e0660();
      param_1 = (int *)(float)fVar5;
      if ((float)param_1 == 0.0) {
        param_1 = (int *)0x43000000;
      }
      if ((fVar1 - 30.0 < param_2[2]) && (param_2[2] < (float)param_1 + fVar1 + 30.0)) {
        fStack_4 = 0.0;
      }
    }
    else {
      fStack_4 = 0.0;
    }
    param_1 = (int *)param_3;
    if (param_4 != '\0') {
      param_1 = (int *)0x42000000;
      if (iVar3 != 0) {
        fVar5 = (float10)FUN_008913c0();
        param_1 = (int *)(float)(fVar5 * (float10)6.999040126800537);
        if ((*(byte *)(iVar3 + 500) & 1) != 0) {
          param_1 = (int *)((float)param_1 + (float)param_1);
        }
        if ((float)param_1 < 32.0) {
          param_1 = (int *)0x42000000;
        }
      }
      param_1 = (int *)((float)param_1 + param_3);
    }
    iVar3 = FUN_0047f6f0(&fStack_c,param_1);
    if (iVar3 < 1) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00684cb0(int *param_1,char *param_2,char *param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24 [9];
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  cVar2 = FUN_005e3290();
  if (cVar2 == '\0') {
    return 1;
  }
  iVar3 = FUN_0065a2c0();
  if ((iVar3 == 0) || ((*(byte *)(iVar3 + 500) & 1) == 0)) {
    return 1;
  }
  local_44 = (float)param_1[0xc];
  local_48 = (float)param_1[0xb];
  local_40 = (float)param_1[0xd];
  fVar6 = (float10)FUN_008913c0();
  local_30 = 0;
  *param_3 = '\x01';
  pcVar1 = *(code **)(*param_1 + 0x1e0);
  puVar4 = &DAT_00b26dc4;
  puVar5 = local_24;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_2c = (float)fVar6 * 6.99904 * 2.5;
  local_28 = 0;
  fVar6 = (float10)(*pcVar1)();
  FUN_0070fdd0((float)(fVar6 + (float10)0.7853981852531433));
  FUN_00710580(local_24,&DAT_00b3f9a8,1,&local_30,&fStack_54);
  fStack_54 = local_48 + fStack_54;
  fStack_50 = fStack_50 + local_44;
  fStack_4c = fStack_4c + local_40;
  fStack_3c = fStack_54;
  fStack_38 = fStack_50;
  fStack_34 = fStack_4c;
  cVar2 = FUN_008949c0(&fStack_54,1,0,0);
  if (cVar2 == '\0') {
    *param_3 = '\0';
  }
  *param_2 = '\x01';
  fVar6 = (float10)(**(code **)(*param_1 + 0x1e0))();
  FUN_0070fdd0((float)(fVar6 - (float10)0.7853981852531433));
  FUN_00710580(local_24,&DAT_00b3f9a8,1,&local_30,&fStack_54);
  fStack_54 = local_48 + fStack_54;
  fStack_50 = fStack_50 + local_44;
  fStack_4c = fStack_4c + local_40;
  fStack_3c = fStack_54;
  fStack_38 = fStack_50;
  fStack_34 = fStack_4c;
  cVar2 = FUN_008949c0(&fStack_54,1,0,0);
  if (cVar2 == '\0') {
    *param_2 = '\0';
  }
  else if (*param_2 != '\0') {
    return 1;
  }
  if (*param_3 != '\0') {
    return 1;
  }
  return 0;
}



void FUN_00684ec0(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_00684830();
  iVar1 = *(int *)(in_ECX + 0x30);
  if (iVar1 != 0) {
    FUN_00538b60();
    FUN_00401f20(iVar1);
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  FUN_0068c6e0();
  *(undefined4 *)(in_ECX + 0x1c) = 0x7f7fffff;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined1 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0x7f7fffff;
  *(undefined4 *)(in_ECX + 0x40) = 0x7f7fffff;
  *(undefined4 *)(in_ECX + 0x44) = 0x7f7fffff;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00684f40(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_160;
  int local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 uStack_128;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c4e9b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_160;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffe90;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar1 = FUN_0068bfb0(&local_15c,&local_160);
  if (cVar1 != '\0') {
    if (local_15c == 0) {
      FUN_0068c170(local_160);
      puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x174))(uVar2);
      local_158 = *puVar4;
      local_154 = puVar4[1];
      local_150 = puVar4[2];
      FUN_0068c280(&local_158,0);
      FUN_004b2460();
      puVar4 = (undefined4 *)FUN_006899c0();
      local_14c = *puVar4;
      local_148 = puVar4[1];
      local_144 = puVar4[2];
    }
    else {
      uVar3 = FUN_00780d10();
      FUN_006a2fd0(uVar3);
      if (local_160 != 0) {
        FUN_0060d0a0();
        FUN_00401f20(local_160);
      }
      local_160 = 0;
      puVar4 = (undefined4 *)FUN_006899c0();
      local_158 = *puVar4;
      local_154 = puVar4[1];
      local_150 = puVar4[2];
      FUN_004b2460();
      puVar4 = (undefined4 *)FUN_006899c0();
      local_14c = *puVar4;
      local_148 = puVar4[1];
      local_144 = puVar4[2];
    }
    if (DAT_00b333b4 == param_1) {
      iVar5 = FUN_00585c10(1);
      if (('\0' < *(char *)(iVar5 + 0x31)) || (DAT_00b3b908 != '\0')) {
        uVar3 = (**(code **)(*param_1 + 0xd4))();
        _sprintf(acStack_114,"Actor \'%s\' expanding high level path for new cells.",uVar3);
        FUN_00579b60(acStack_114);
      }
    }
    FUN_0067d760();
    uStack_128 = *(undefined1 *)(in_ECX + 0x10);
    uStack_4 = 0;
    FUN_0067eb60(&local_158,&local_14c,param_1,0);
    FUN_0067e000(in_ECX + 0x14);
    FUN_00684000(param_1);
    uStack_4 = 0xffffffff;
    FUN_0060d0a0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



float10 FUN_00685140(int *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int *in_ECX;
  float10 fVar9;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar3 = param_1;
  if (((param_1 != (int *)0x0) && (0.0 < param_2)) && (cVar5 = FUN_005e3350(), cVar5 != '\0')) {
    iVar6 = (**(code **)(*param_1 + 0x380))();
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x380))();
      cVar5 = FUN_005e3350();
      if (cVar5 == '\0') goto LAB_00685523;
    }
    iVar6 = FUN_006ecc80();
    if (iVar6 == 0) {
      fVar9 = (float10)FUN_0068a300(param_1,param_2);
      return fVar9;
    }
    fVar9 = (float10)FUN_005e65b0();
    fVar1 = (float)fVar9;
    pfVar7 = (float *)(**(code **)(*param_1 + 0x174))();
    fStack_30 = *pfVar7;
    fStack_2c = pfVar7[1];
    fStack_28 = pfVar7[2];
    iVar6 = FUN_0042b410();
    do {
      fVar4 = param_2;
      if (iVar6 == 0) break;
      pfVar7 = (float *)FUN_006899c0();
      fStack_24 = fStack_30 - *pfVar7;
      fStack_20 = fStack_2c - pfVar7[1];
      fStack_1c = fStack_28 - pfVar7[2];
      fVar9 = (float10)FUN_00982c30();
      fVar2 = (float)fVar9;
      if (param_2 <= fVar2 / fVar1) {
        param_2 = 0.0;
        pfVar7 = (float *)FUN_006899c0();
        fStack_24 = *pfVar7 - fStack_30;
        fStack_20 = pfVar7[1] - fStack_2c;
        fStack_1c = pfVar7[2] - fStack_28;
        FUN_0043f350();
        fStack_c = fVar4 * fVar1 * fStack_24;
        fStack_8 = fStack_20 * fVar1 * fVar4;
        fStack_4 = fVar4 * fVar1 * fStack_1c;
        fStack_30 = fStack_c + fStack_30;
        fStack_2c = fStack_8 + fStack_2c;
        fStack_28 = fStack_4 + fStack_28;
        fStack_18 = fStack_30;
        fStack_14 = fStack_2c;
        fStack_10 = fStack_28;
        if ((float)piVar3[8] != 3.4028235e+38) {
          iVar8 = *piVar3;
          fVar9 = (float10)FUN_00683cb0(&fStack_24);
          (**(code **)(iVar8 + 0x1e8))((float)fVar9);
        }
        in_ECX[7] = 0x7f7fffff;
        in_ECX[9] = 0;
        break;
      }
      pfVar7 = (float *)FUN_006899c0();
      fStack_30 = *pfVar7;
      fStack_2c = pfVar7[1];
      fStack_28 = pfVar7[2];
      FUN_0068c170(iVar6);
      iVar6 = FUN_0042b410();
      param_2 = param_2 - fVar2 / fVar1;
      if (iVar6 == 0) {
        FUN_0068b4f0(piVar3);
        iVar6 = FUN_0042b410();
        if ((iVar6 == 0) && (cVar5 = FUN_0068a140(), cVar5 != '\0')) {
          fVar9 = (float10)FUN_006899d0();
          param_1 = (int *)(float)fVar9;
          if (0.0 < (float)param_1) {
            if (fVar2 < (float)param_1) {
              param_1 = (int *)fVar2;
            }
            FUN_0043f350();
            FUN_0069dd70(param_1);
            fStack_30 = fStack_24 + fStack_30;
            fStack_2c = fStack_20 + fStack_2c;
            fStack_28 = fStack_1c + fStack_28;
          }
        }
      }
    } while (param_2 != 0.0);
    FUN_004d8a30(fStack_30,fStack_2c,fStack_28);
    iVar8 = (**(code **)(*piVar3 + 0x380))();
    if (iVar8 != 0) {
      FUN_004d8a30(fStack_30,fStack_2c,fStack_28);
      iVar8 = FUN_0065a2c0();
      if (iVar8 != 0) {
        FUN_00452a10(&fStack_30);
      }
    }
    iVar8 = FUN_0065a2c0();
    if (iVar8 != 0) {
      FUN_00452a10(&fStack_30);
    }
    if ((iVar6 == 0) && ((**(code **)(*piVar3 + 0x180))(1), (*(byte *)(in_ECX + 0xb) & 0x80) != 0))
    {
      (**(code **)(*in_ECX + 0x30))(1);
    }
    return (float10)param_2;
  }
LAB_00685523:
  return (float10)0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00685530(int *param_1,undefined4 param_2,char param_3)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  char cStack_11;
  float fStack_10;
  float fStack_c;
  double dStack_8;
  
  piVar2 = param_1;
  if (((param_1 == (int *)0x0) || (iVar4 = FUN_005e0dc0(), iVar4 != 0)) &&
     (iVar4 = FUN_005e0dc0(), iVar4 != 4)) {
    return;
  }
  cVar3 = (**(code **)(*piVar2 + 0x19c))();
  if (cVar3 != '\0') {
    return;
  }
  fStack_10 = 1.0;
  fVar5 = (float10)(**(code **)(*piVar2 + 0x1e0))(param_2,&fStack_10);
  fVar5 = (float10)FUN_00683ad0((float)fVar5);
  param_1 = (int *)(float)fVar5;
  if ((float)param_1 == 0.0) {
    return;
  }
  fStack_c = _DAT_00b33e9c;
  fVar5 = (float10)(**(code **)(*piVar2 + 600))();
  fStack_c = (float)((float10)fStack_10 * (float10)0.01745329238474369 * fVar5 * (float10)fStack_c);
  fVar1 = ABS((float)param_1);
  dStack_8 = (double)CONCAT44(dStack_8._4_4_,fVar1);
  param_1 = (int *)ABS(fStack_c);
  if (fVar1 < (float)param_1) {
    (**(code **)(*piVar2 + 0x1e8))(param_2);
    FUN_005e1a80(0);
    return;
  }
  if (param_3 == '\0') {
    dStack_8 = (double)fVar1;
    fVar5 = (float10)(**(code **)(*piVar2 + 600))();
    if ((float10)_DAT_00b3a490 * (float10)0.01745329238474369 * fVar5 < (float10)dStack_8)
    goto LAB_00685658;
LAB_006856f4:
    if (fStack_c < 0.0) {
      uVar6 = 0xffffffff;
      goto LAB_00685753;
    }
  }
  else {
LAB_00685658:
    param_1 = (int *)CONCAT31(param_1._1_3_,1);
    cStack_11 = '\x01';
    cVar3 = FUN_00684cb0(piVar2,&param_1,&cStack_11);
    if (cVar3 != '\0') {
      FUN_005e05f0(0xf);
      if ((((fStack_10 < 0.0) && ((char)param_1 == '\0')) && (cVar3 = FUN_005e1a50(), -1 < cVar3))
         || (((0.0 < fStack_10 && (cStack_11 == '\0')) && (cVar3 = FUN_005e1a50(), cVar3 < '\x01')))
         ) {
        fStack_10 = fStack_10 * -1.0;
        fStack_c = fStack_c * -1.0;
      }
      if (0.0 <= fStack_10) {
        uVar6 = 0x20;
      }
      else {
        uVar6 = 0x10;
      }
      FUN_005e0610(uVar6);
      goto LAB_006856f4;
    }
    cVar3 = FUN_005e0630(2);
    if (cVar3 == '\0') {
      cVar3 = FUN_005e0630(1);
      if (cVar3 != '\0') {
        FUN_005e05f0(0xf);
        FUN_005e0610(2);
      }
      fStack_c = 0.0;
    }
    else {
      FUN_005e05f0(0xf);
      FUN_005e0610(1);
      fStack_c = 0.0;
    }
  }
  uVar6 = 1;
LAB_00685753:
  FUN_005e1a80(uVar6);
  iVar4 = *piVar2;
  fVar5 = (float10)(**(code **)(iVar4 + 0x1e0))();
  param_1 = (int *)(float)(fVar5 + (float10)fStack_c);
  (**(code **)(iVar4 + 0x1e8))(param_1);
  return;
}



undefined4 FUN_00685790(float param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *in_ECX;
  float10 fVar7;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = (int)param_1;
  piVar4 = (int *)FUN_006899c0();
  if (*piVar4 == 0) {
    return 1;
  }
  if (param_1 != 0.0) {
    puVar5 = (undefined4 *)FUN_0068b110();
    local_c = *puVar5;
    param_1 = 0.0;
    local_8 = puVar5[1];
    local_4 = puVar5[2];
    bVar1 = false;
    iVar6 = FUN_006899c0();
    if (*(int *)(iVar6 + 4) == 0) {
      fVar7 = (float10)FUN_006899d0();
      param_1 = (float)fVar7;
      bVar1 = true;
    }
    else {
      iVar6 = FUN_0068b0d0();
      if (iVar6 == 0) {
        param_1 = 50.0;
      }
      else if (iVar6 == 1) {
        param_1 = 0.0;
        bVar1 = true;
      }
      cVar3 = (**(code **)(*in_ECX + 0xc))();
      if (cVar3 != '\0') {
        local_4 = *(undefined4 *)(iVar2 + 0x34);
      }
    }
    cVar3 = FUN_00684b30(iVar2,&local_c,param_1,!bVar1);
    if (cVar3 == '\0') {
      return 0;
    }
    return 1;
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00685880(float param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  
  param_1 = *(float *)(in_ECX + 0x1c) - param_1;
  if (((0.0 < param_1) && (*(float *)(in_ECX + 0x20) == 0.0)) ||
     (1.0 < param_1 / *(float *)(in_ECX + 0x20))) {
    *(undefined4 *)(in_ECX + 0x20) = 0;
    if (*(int *)(in_ECX + 0x30) == 0) {
      return 1;
    }
    FUN_00680d00(0);
    return 1;
  }
  param_1 = _DAT_00b3a498;
  if (((*(int *)(in_ECX + 0x30) != 0) && (iVar4 = FUN_00680cb0(), iVar4 != 0)) && (iVar4 != 7)) {
    param_1 = _DAT_00b3a4b8;
  }
  fVar2 = param_1 / _DAT_00b06530;
  fVar1 = fVar2 / 5.0;
  param_1 = _DAT_00b33e9c;
  if (fVar1 < _DAT_00b33e9c) {
    param_1 = fVar1;
  }
  param_1 = param_1 + *(float *)(in_ECX + 0x20);
  *(float *)(in_ECX + 0x20) = param_1;
  if (param_1 <= fVar2) {
    return 1;
  }
  if ((*(int *)(in_ECX + 0x30) != 0) && (cVar3 = FUN_00680d60(), cVar3 != '\0')) {
    *(undefined4 *)(in_ECX + 0x20) = 0;
    return 1;
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_006859a0(float *param_1,float *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  float *pfVar6;
  undefined1 auStack_114 [4];
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined1 local_d0;
  undefined4 local_cc;
  float local_ac;
  int local_a0;
  float local_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined ***local_7c;
  undefined4 local_78;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_4c;
  undefined4 local_40;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009c4ed8;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_114;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffee0;
  *unaff_FS_OFFSET = (int)&local_1c;
  uVar4 = 0;
  if (DAT_00b3c089 != '\0') {
    uVar4 = 1;
    goto LAB_00685bb2;
  }
  if (((g_ModelLoader_singleton == 0) || (*(int *)(DAT_00b333a0 + 0x34) != 0)) ||
     (iVar3 = FUN_0043f270(uVar2), iVar3 == 0)) {
LAB_00685a78:
    local_70 = &PTR_FUN_00a562bc;
    local_4c = 0x3f800000;
    local_40 = 0;
    local_6c = 0x3f800000;
    local_ac = 1.0;
    local_10c = *param_2 - *param_1;
    local_7c = &local_70;
    local_14 = 0;
    local_d0 = 0;
    local_a0 = 0;
    local_80 = 0;
    local_108 = param_2[1] - param_1[1];
    local_cc = 0xffff001b;
    local_78 = 0;
    local_104 = param_2[2] - param_1[2];
    local_f0 = *param_1 * 0.14287673;
    fStack_ec = param_1[1] * 0.14287673;
    fStack_e8 = param_1[2] * 0.14287673;
    uStack_e4 = uStack_f4;
    local_100 = local_10c * 0.14287673;
    fStack_fc = local_108 * 0.14287673;
    fStack_f8 = local_104 * 0.14287673;
    uStack_84 = uStack_f4;
    local_90 = local_100;
    fStack_8c = fStack_fc;
    fStack_88 = fStack_f8;
    FUN_00446a10(&local_f0);
    if (local_a0 != 0) {
      local_110 = local_108 * local_108 + local_10c * local_10c + local_104 * local_104;
      fVar5 = (float10)FUN_00982c30();
      if (10.0 <= (float)fVar5 - local_ac * (float)fVar5) goto LAB_00685bb2;
    }
    uVar4 = 1;
  }
  else {
    pfVar6 = param_1;
    FUN_0043f270(param_1);
    local_110 = (float)FUN_004f1a80(pfVar6);
    if ((local_110 != 0.0) && (cVar1 = FUN_0043e000(local_110), cVar1 == '\0')) {
      pfVar6 = param_2;
      FUN_0043f270(param_2);
      iVar3 = FUN_004f1a80(pfVar6);
      if (((float)iVar3 == local_110) ||
         ((iVar3 != 0 && (cVar1 = FUN_0043e000(iVar3), cVar1 == '\0')))) goto LAB_00685a78;
    }
    uVar4 = 0;
  }
LAB_00685bb2:
  *unaff_FS_OFFSET = local_1c;
  return uVar4;
}



void FUN_00685be0(int param_1,int *param_2,int *param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  int *local_4;
  
  fVar4 = (float)DAT_00b33ea0;
  if (DAT_00b33ea0 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  local_4 = (int *)0x0;
  piVar7 = &DAT_00b3c08c;
  piVar6 = (int *)0x0;
  do {
    piVar1 = (int *)*piVar7;
    if (piVar1 == (int *)0x0) {
LAB_00685c77:
      piVar6 = piVar7;
      piVar7 = (int *)piVar7[1];
    }
    else {
      if (fVar4 - (float)piVar1[7] < 1000.0) {
        if (*piVar1 == param_1) {
          cVar5 = FUN_0047d810(piVar1 + 1,param_2,0x41a00000);
          if (cVar5 != '\0') {
            cVar5 = FUN_0047d810(piVar1 + 4,param_3,0x41a00000);
            if (cVar5 != '\0') {
              local_4 = piVar1;
            }
          }
        }
        goto LAB_00685c77;
      }
      if (piVar6 == (int *)0x0) {
        piVar3 = (int *)piVar7[1];
        if (piVar3 == (int *)0x0) {
          *piVar7 = 0;
          FUN_00401f20(piVar1);
        }
        else {
          piVar7[1] = piVar3[1];
          *piVar7 = *piVar3;
          FUN_00401f20(piVar3);
          FUN_00401f20(piVar1);
        }
      }
      else {
        FUN_0065c620(piVar1);
        FUN_00401f20(piVar1);
        piVar7 = (int *)piVar6[1];
      }
    }
    if (piVar7 == (int *)0x0) {
      if (local_4 == (int *)0x0) {
        piVar7 = (int *)FUN_00401f00(0x24);
        *piVar7 = param_1;
        piVar7[1] = *param_2;
        piVar7[2] = param_2[1];
        piVar7[3] = param_2[2];
        piVar7[4] = *param_3;
        piVar7[5] = param_3[1];
        iVar2 = param_3[2];
        piVar7[7] = (int)fVar4;
        *(undefined1 *)(piVar7 + 8) = param_4;
        piVar7[6] = iVar2;
        FUN_00446cb0(piVar7);
        return;
      }
      local_4[7] = (int)fVar4;
      *(undefined1 *)(local_4 + 8) = param_4;
      return;
    }
  } while( true );
}



char FUN_00685d60(int param_1,undefined4 param_2,int *param_3,undefined1 *param_4)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  char local_5;
  
  if (DAT_00b3c088 != '\0') {
    return '\0';
  }
  *param_4 = 0;
  fVar2 = (float)DAT_00b33ea0;
  local_5 = '\0';
  if (DAT_00b33ea0 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  piVar7 = (int *)0x0;
  piVar5 = &DAT_00b3c094;
  do {
    if (local_5 != '\0') {
      return local_5;
    }
    piVar6 = (int *)*piVar5;
    if (piVar6 == (int *)0x0) {
LAB_00685e2e:
      piVar6 = (int *)piVar5[1];
      piVar7 = piVar5;
    }
    else {
      if (fVar2 - (float)piVar6[6] < 3000.0) {
        if (*piVar6 == param_1) {
          uVar4 = FUN_006899c0(param_2,0x41a00000);
          cVar3 = FUN_0047d890(uVar4);
          if (cVar3 != '\0') {
            *param_4 = (char)piVar6[7];
            *param_3 = piVar6[1];
            param_3[1] = piVar6[2];
            param_3[2] = piVar6[3];
            param_3[3] = piVar6[4];
            local_5 = '\x01';
            param_3[4] = piVar6[5];
          }
        }
        goto LAB_00685e2e;
      }
      if (piVar7 == (int *)0x0) {
        piVar1 = (int *)piVar5[1];
        if (piVar1 == (int *)0x0) {
          *piVar5 = 0;
        }
        else {
          piVar5[1] = piVar1[1];
          *piVar5 = *piVar1;
          FUN_00401f20(piVar1);
        }
        FUN_0060d0a0();
        FUN_00401f20(piVar6);
        piVar6 = piVar5;
      }
      else {
        FUN_0065c620(piVar6);
        FUN_0060d0a0();
        FUN_00401f20(piVar6);
        piVar6 = (int *)piVar7[1];
      }
    }
    piVar5 = piVar6;
    if (piVar6 == (int *)0x0) {
      return local_5;
    }
  } while( true );
}



void FUN_00685ea0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int iVar5;
  int in_ECX;
  undefined4 uVar6;
  
  if (*(int *)(in_ECX + 0x28) != 0) {
    FUN_00684830();
  }
  if (param_1 != (int *)0x0) {
    uVar6 = 0;
    uVar2 = (**(code **)(*param_1 + 0x174))(0);
    FUN_0068c280(uVar2,uVar6);
  }
  puVar3 = (undefined4 *)FUN_0068c740();
  puVar1 = *(undefined4 **)(in_ECX + 0x28);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x28) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(in_ECX + 0x28) != 0) {
    iVar5 = FUN_00689f00(param_1);
    if (iVar5 != 0) {
      (**(code **)(**(int **)(in_ECX + 0x28) + 0x84))(iVar5,1);
    }
    uVar2 = FUN_004e70b0();
    FUN_00405680(uVar2);
    (**(code **)(**(int **)(DAT_00b333a0 + 0xc) + 0x84))(*(undefined4 *)(in_ECX + 0x28),1);
    FUN_00707610();
    FUN_00707980();
    FUN_00707370(0,0);
  }
  if (param_1 != (int *)0x0) {
    uVar6 = 0;
    uVar2 = FUN_0042b410(0);
    FUN_0068be80(uVar2,uVar6);
  }
  if (*(int *)(in_ECX + 0x30) != 0) {
    FUN_00680e20();
    return;
  }
  return;
}



void FUN_00685fc0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c4f23;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0068b2c0(uVar1);
  *in_ECX = &PTR_FUN_00a74ca4;
  in_ECX[10] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  local_4 = 1;
  if ((DAT_00b15834 != '\0') || (DAT_00b3c08a = 0, DAT_00b1581c != '\0')) {
    DAT_00b3c08a = 1;
  }
  in_ECX[0xc] = 0;
  FUN_00684ec0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00686040(byte param_1)

{
  FUN_00684930();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00686060(undefined4 param_1)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_18;
  int local_14;
  float local_c;
  float local_8;
  float local_4;
  
  piVar7 = &local_18;
  if ((*(int *)(DAT_00b333a0 + 0x7c) != 0) || (*(int *)(DAT_00b333a0 + 0x78) != 0)) {
    local_18 = 0;
    uVar3 = FUN_004b2460(&local_18);
    cVar2 = FUN_0068bf60(uVar3,piVar7);
    if (cVar2 != '\0') {
      if (local_18 == 0) {
        FUN_004b2460();
      }
      pfVar4 = (float *)FUN_006899c0();
      local_c = *pfVar4;
      local_8 = pfVar4[1];
      local_4 = pfVar4[2];
      fVar1 = ROUND(local_c);
      local_14 = (int)ROUND(local_8) >> 0xc;
      piVar7 = (int *)(DAT_00b333a0 + 0x78);
      if (piVar7 != (int *)0x0) {
        while( true ) {
          if ((piVar7[1] == 0) && (*piVar7 == 0)) {
            return;
          }
          iVar5 = FUN_004c9a80();
          iVar6 = FUN_004c9aa0();
          if ((iVar5 == (int)fVar1 >> 0xc) && (iVar6 == local_14)) break;
          piVar7 = (int *)piVar7[1];
          if (piVar7 == (int *)0x0) {
            return;
          }
        }
        FUN_00684f40(param_1);
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00686150(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  int in_ECX;
  float10 fVar7;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar1 = param_1;
  iVar3 = FUN_0042b410();
  if (((param_1 != (int *)0x0) && (iVar3 != 0)) &&
     ((cVar2 = FUN_005e3290(), cVar2 == '\0' ||
      ((iVar3 = FUN_0065a2c0(), iVar3 == 0 || (iVar3 = FUN_0088d370(), iVar3 != 2)))))) {
    pfVar4 = (float *)(**(code **)(*param_1 + 0x174))();
    pfVar5 = (float *)FUN_006899c0();
    fStack_8 = pfVar5[1] - pfVar4[1];
    fStack_4 = pfVar5[2] - pfVar4[2];
    fStack_c = *pfVar5 - *pfVar4;
    fVar7 = (float10)FUN_00683cb0(&fStack_c);
    fVar7 = (float10)FUN_00683b90(param_1,(float)fVar7);
    uVar6 = (**(code **)(*(int *)param_1[0x16] + 0x2c0))();
    cVar2 = DAT_00b15814;
    param_1 = (int *)(float)fVar7;
    if (((uVar6 & 2) != 0) &&
       (param_1 = (int *)((float)fVar7 + 3.1415927), 6.2831855 < (float)param_1)) {
      param_1 = (int *)((float)param_1 - 6.2831855);
    }
    iVar3 = FUN_0047f6f0(&fStack_c,_DAT_00b3a468);
    if (iVar3 < 0) {
      cVar2 = '\x01';
    }
    *(byte *)(in_ECX + 0x2c) = *(byte *)(in_ECX + 0x2c) & 0xdf;
    if (cVar2 != '\0') {
      (**(code **)(*piVar1 + 0x1e8))(param_1);
      return;
    }
    FUN_00685530(piVar1,param_1,0);
    uVar6 = (**(code **)(*(int *)piVar1[0x16] + 0x2c0))();
    if ((uVar6 & 0x30) != 0) {
      *(byte *)(in_ECX + 0x2c) = *(byte *)(in_ECX + 0x2c) | 0x20;
    }
  }
  return;
}



void FUN_006862c0(undefined4 param_1)

{
  FUN_00689a00();
  FUN_00684ec0();
  FUN_0068a280(param_1);
  FUN_0068bed0(param_1);
  if (DAT_00b3c08a != '\0') {
    FUN_00685ea0(0);
  }
  return;
}



void FUN_00686300(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  int iStack_18;
  int iStack_14;
  float fStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((param_1 != (int *)0x0) && (iVar2 = FUN_0065a2c0(), iVar2 != 0)) {
    uVar3 = (**(code **)(*DAT_00b333c4 + 0x174))(0x45000000);
    uVar3 = (**(code **)(*param_1 + 0x174))(uVar3);
    iVar2 = FUN_00480520(uVar3);
    if (iVar2 < 0) {
      iStack_14 = param_1[0xc];
      iStack_18 = param_1[0xb];
      fStack_10 = (float)param_1[0xd];
      fVar8 = (float10)FUN_005e0660();
      iVar6 = 0;
      fStack_10 = (float)(fVar8 * (float10)0.5 + (float10)fStack_10);
      iVar2 = FUN_0042b410();
      if (iVar2 != 0) {
        iVar4 = FUN_00780d10();
        while (iVar7 = iVar4, iVar7 != 0) {
          puVar5 = (undefined4 *)FUN_006899c0();
          uStack_c = *puVar5;
          uStack_8 = puVar5[1];
          uStack_4 = puVar5[2];
          fVar8 = (float10)FUN_004d7e30(&uStack_c);
          if (800.0 <= (float)fVar8) {
            return;
          }
          cVar1 = FUN_0068ca50();
          if (cVar1 != '\0') {
            return;
          }
          if ((50.0 <= (float)fVar8) && (cVar1 = FUN_006859a0(&iStack_18,&uStack_c), cVar1 == '\0'))
          {
            return;
          }
          FUN_0068c170(iVar2);
          iVar4 = FUN_00780d10();
          iVar6 = iVar6 + 1;
          if (1 < iVar6) {
            return;
          }
          iVar2 = iVar7;
          if (iVar7 == 0) {
            return;
          }
        }
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_00686450(int *param_1,undefined4 *param_2,undefined4 param_3,char param_4,char param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  float10 fVar8;
  undefined1 auStack_144 [10];
  char cStack_13a;
  char cStack_139;
  float fStack_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined4 uStack_118;
  float fStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float fStack_108;
  undefined4 local_104;
  double dStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined **ppuStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_cc;
  undefined4 uStack_c0;
  undefined1 auStack_b0 [36];
  uint uStack_8c;
  float fStack_6c;
  int iStack_60;
  undefined ***pppuStack_3c;
  undefined4 uStack_38;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009c4f4b;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_144;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffeb0;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_104 = param_3;
  FUN_0068ca00(param_2);
  if ((DAT_00b3c089 == '\0') &&
     ((*(int *)(DAT_00b333a0 + 0x34) != 0 || (cVar1 = FUN_0043f840(param_2), cVar1 != '\0')))) {
    if ((param_1 != (int *)0x0) &&
       ((iVar3 = FUN_0065a2c0(uVar2), iVar3 != 0 && ((int *)param_1[0x16] != (int *)0x0)))) {
      iVar3 = (**(code **)(*(int *)param_1[0x16] + 8))();
      if (iVar3 != 0) goto LAB_00686a35;
      cStack_13a = '\0';
      cVar1 = FUN_00685d60(param_1,param_2,param_3,&cStack_13a);
      if (cVar1 != '\0') goto LAB_006868e4;
      cStack_139 = param_5 != '\0';
      fVar8 = (float10)FUN_005e0660();
      fStack_138 = (float)fVar8;
      if (fStack_138 == 0.0) {
        fStack_138 = 128.0;
      }
      fStack_134 = fStack_138;
      if (fStack_138 < 256.0) {
        fStack_134 = 256.0;
      }
      iVar3 = *(int *)(DAT_00b333a0 + 0x34);
      fStack_114 = -3.4028235e+38;
      cStack_13a = '\0';
      if (iVar3 == 0) {
        iVar4 = FUN_0043f270();
        if (iVar4 != 0) {
          uVar5 = FUN_0043f270(0);
          iVar3 = FUN_0044a270(*param_2,param_2[1],uVar5,iVar3);
          if (iVar3 != 0) goto LAB_006865c9;
        }
      }
      else {
LAB_006865c9:
        if ((*(byte *)(iVar3 + 0x24) >> 1 & 1) != 0) {
          fVar8 = (float10)FUN_004cace0();
          fStack_114 = (float)fVar8;
          piVar6 = (int *)FUN_004cafc0();
          if ((piVar6 != (int *)0x0) && (cVar1 = (**(code **)(*piVar6 + 0x88))(), cVar1 != '\0')) {
            cStack_13a = '\x01';
          }
        }
      }
      uStack_cc = 0x3f800000;
      ppuStack_f0 = &PTR_FUN_00a562bc;
      uStack_ec = 0x3f800000;
      uStack_c0 = 0;
      uStack_14 = 0;
      FUN_004f5ea0();
      FUN_0065a2c0();
      iVar4 = FUN_00608b30();
      fStack_128 = (float)param_2[2] + fStack_138;
      uStack_8c = iVar4 << 0x10 | 0x1b;
      pppuStack_3c = &ppuStack_f0;
      uStack_12c = param_2[1];
      uStack_130 = *param_2;
      uStack_38 = 0;
      uStack_110 = uStack_130;
      uStack_10c = uStack_12c;
      fStack_108 = fStack_128;
      FUN_004f8840(&uStack_110);
      fStack_11c = fStack_134 + fStack_138;
      dStack_100 = (double)fStack_11c;
      fStack_134 = fStack_11c * 0.0;
      fStack_11c = fStack_11c * -1.0;
      fStack_124 = fStack_134;
      fStack_120 = fStack_134;
      FUN_00663ff0(&fStack_124);
      iVar4 = FUN_00446a10(auStack_b0);
      if (iStack_60 == 0) {
        fStack_6c = (float)dStack_100;
      }
      else {
        fStack_6c = fStack_6c * (float)dStack_100;
      }
      fStack_128 = fStack_128 - fStack_6c;
      fVar8 = (float10)(**(code **)(*param_1 + 0x288))(0x38);
      if (((((float10)0 < fVar8) || (cVar1 = FUN_005e1c70(), cVar1 != '\0')) && (iVar3 != 0)) &&
         (fStack_128 < fStack_114)) {
        fStack_128 = fStack_114;
      }
      if (cStack_139 != '\0') {
        fStack_124 = 1.0;
        fStack_120 = 0.0;
        fStack_11c = 0.0;
        uStack_118 = 0;
        dStack_100 = 0.0078125;
        uStack_f8 = 0;
        uStack_f4 = 0;
        uVar5 = FUN_0047f070(&uStack_110,&dStack_100,&uStack_130,&fStack_124);
        uVar7 = FUN_004e70b0();
        FUN_00405680(uVar7);
        FUN_00440e60(uVar5,0x42480000);
      }
      uVar5 = local_104;
      FUN_0068ca00(&uStack_130);
      FUN_0068cb40(param_1);
      cVar1 = FUN_0068cab0();
      if (cVar1 == '\0') {
        cVar1 = FUN_005e1e90();
        if (cVar1 == '\0') {
          cVar1 = FUN_0068ca80();
          if (cVar1 == '\0') {
            if (iStack_60 != 0) goto LAB_0068696d;
            if (cStack_139 == '\0') goto LAB_006868d6;
            fStack_120 = 1.0;
            fStack_11c = 1.0;
LAB_00686929:
            fStack_124 = 1.0;
            uStack_118 = 0;
            iVar3 = FUN_0047fd30(0x40a00000,&fStack_124);
            uVar7 = FUN_004e70b0();
            FUN_00405680(uVar7);
            *(undefined4 *)(iVar3 + 0x54) = uStack_130;
            *(undefined4 *)(iVar3 + 0x58) = uStack_12c;
            *(float *)(iVar3 + 0x5c) = fStack_128;
          }
          else {
            if ((cStack_13a == '\0') &&
               (((cVar1 = FUN_005e1c30(), cVar1 != '\0' && (cVar1 = FUN_005e3400(), cVar1 != '\0'))
                || ((cVar1 = FUN_005e3270(), cVar1 != '\0' &&
                    (fStack_114 - fStack_128 < fStack_138 * 0.3)))))) {
LAB_0068696d:
              if (((param_4 != '\0') && (iVar4 != 0)) &&
                 (piVar6 = (int *)FUN_004dc270(iVar4), piVar6 != (int *)0x0)) {
                iVar3 = (**(code **)(*piVar6 + 0x170))();
                cVar1 = *(char *)(iVar3 + 4);
                if (cVar1 == '\x12') {
                  piVar6 = (int *)(**(code **)(*piVar6 + 0x170))();
                  cVar1 = (**(code **)(*piVar6 + 0x88))();
                  if (cVar1 != '\0') goto LAB_006869e0;
                }
                else if (cVar1 != '\x18') {
                  if (cVar1 == '\x1c') {
                    FUN_00684530(param_1,uVar5,1);
                    cStack_13a = '\x01';
                    goto LAB_006868e4;
                  }
LAB_006869e0:
                  if (cStack_139 == '\0') goto LAB_006868d6;
                  fStack_120 = 0.0;
                  fStack_11c = 0.0;
                  goto LAB_00686929;
                }
              }
LAB_00686a29:
              FUN_00684530(param_1,uVar5,1);
              goto LAB_00686a35;
            }
            if (cStack_139 == '\0') goto LAB_006868d6;
            fStack_124 = 0.0;
            fStack_120 = 0.0;
            fStack_11c = 1.0;
            uStack_118 = 0;
            iVar3 = FUN_0047fd30(0x40a00000,&fStack_124);
            uVar7 = FUN_004e70b0();
            FUN_00405680(uVar7);
            *(undefined4 *)(iVar3 + 0x54) = uStack_130;
            *(undefined4 *)(iVar3 + 0x58) = uStack_12c;
            *(float *)(iVar3 + 0x5c) = fStack_128;
          }
          FUN_00440e60(iVar3,0x42480000);
        }
      }
      else if (((cStack_13a == '\0') && (cVar1 = FUN_005e1c30(), cVar1 != '\0')) &&
              (cVar1 = FUN_005e3400(), cVar1 != '\0')) goto LAB_00686a29;
LAB_006868d6:
      FUN_00684530(param_1,uVar5,0);
    }
    cStack_13a = '\0';
  }
  else {
LAB_00686a35:
    cStack_13a = '\x01';
  }
LAB_006868e4:
  *unaff_FS_OFFSET = local_1c;
  return cStack_13a;
}



float * FUN_00686a40(float *param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  int *unaff_FS_OFFSET;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float local_664;
  undefined1 local_634 [16];
  float afStack_624 [195];
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300 [187];
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_009c4f8b;
  local_14 = *unaff_FS_OFFSET;
  uVar12 = DAT_00b30aac ^ (uint)&stack0xfffff988;
  *unaff_FS_OFFSET = (int)&local_14;
  fVar1 = *param_4;
  fVar2 = *param_3;
  fVar3 = param_4[1];
  fVar4 = param_3[1];
  fVar5 = param_4[2];
  fVar6 = param_3[2];
  afStack_624[1] = 0.0;
  afStack_624[2] = 0.0;
  fVar18 = (float10)FUN_00982c30(uVar12);
  if ((float)fVar18 <= 64.0) {
    fVar1 = param_4[1];
    *param_1 = *param_4;
    fVar2 = param_4[2];
    param_1[1] = fVar1;
    param_1[2] = fVar2;
    *unaff_FS_OFFSET = local_14;
    return param_1;
  }
  FUN_0043f350();
  fVar19 = (float10)FUN_00982c30(uVar12);
  if ((float)fVar19 < 25.0 != ((float)fVar19 == 25.0)) {
    fVar1 = param_4[1];
    *param_1 = *param_4;
    fVar2 = param_4[2];
    param_1[1] = fVar1;
    param_1[2] = fVar2;
    *unaff_FS_OFFSET = local_14;
    return param_1;
  }
  local_664 = 64.0;
  if ((param_2 != 0) && (iVar13 = FUN_0065a2c0(), iVar13 != 0)) {
    local_664 = *(float *)(iVar13 + 0x248) * 6.99904;
  }
  afStack_624[4] = param_3[1];
  local_30c = *param_3 + (fVar1 - fVar2) * 64.0;
  afStack_624[3] = *param_3;
  afStack_624[5] = param_3[2];
  local_308 = (fVar3 - fVar4) * 64.0 + param_3[1];
  local_304 = param_3[2] + (fVar5 - fVar6) * 64.0;
  local_318 = afStack_624[3];
  local_314 = afStack_624[4];
  local_310 = afStack_624[5];
  FUN_0068cb30();
  local_c = 0;
  cVar11 = FUN_00686450(param_2,&local_30c,local_634,1,0);
  if (cVar11 == '\0') {
    *param_1 = local_30c;
    param_1[1] = local_308;
    param_1[2] = local_304;
  }
  else {
    puVar14 = (undefined4 *)FUN_006899c0();
    afStack_624[6] = (float)*puVar14;
    afStack_624[7] = (float)puVar14[1];
    afStack_624[8] = (float)puVar14[2];
    iVar13 = 2;
    for (iVar17 = 0; iVar17 < 0x2e8; iVar17 = iVar17 + 0xc) {
      fVar1 = *(float *)((int)afStack_624 + iVar17 + 0x18);
      fVar2 = *(float *)((int)afStack_624 + iVar17 + 0xc);
      fVar3 = *(float *)((int)afStack_624 + iVar17 + 0x1c);
      fVar4 = *(float *)((int)afStack_624 + iVar17 + 0x10);
      fVar5 = *(float *)((int)afStack_624 + iVar17 + 0x20);
      fVar6 = *(float *)((int)afStack_624 + iVar17 + 0x14);
      FUN_0043f350();
      fVar7 = *(float *)((int)afStack_624 + iVar17 + 0x1c);
      fVar8 = *(float *)((int)afStack_624 + iVar17 + 0x20);
      *(float *)((int)local_300 + iVar17) =
           *(float *)((int)afStack_624 + iVar17 + 0x18) + (fVar1 - fVar2) * 64.0;
      *(float *)((int)local_300 + iVar17 + 4) = fVar7 + (fVar3 - fVar4) * 64.0;
      *(float *)((int)local_300 + iVar17 + 8) = fVar8 + (fVar5 - fVar6) * 64.0;
      cVar11 = FUN_00686450(param_2,(float *)((int)local_300 + iVar17),local_634,1,0);
      if (cVar11 == '\0') break;
      puVar14 = (undefined4 *)FUN_006899c0();
      uVar9 = puVar14[1];
      uVar10 = puVar14[2];
      *(undefined4 *)((int)afStack_624 + iVar17 + 0x24) = *puVar14;
      *(undefined4 *)((int)afStack_624 + iVar17 + 0x28) = uVar9;
      *(undefined4 *)((int)afStack_624 + iVar17 + 0x2c) = uVar10;
      fVar19 = (float10)FUN_00982c30();
      if ((float)fVar18 < (float)fVar19) goto LAB_00686f0e;
      iVar16 = 1;
      fVar1 = *(float *)((int)afStack_624 + iVar17 + 0x2c) - afStack_624[5];
      if (1 < iVar13) {
        pfVar15 = afStack_624 + 6;
        do {
          fVar20 = (float10)FUN_00982c30();
          fVar2 = ABS((((float)fVar20 / (float)fVar19) * fVar1 + afStack_624[5]) - pfVar15[2]);
          if (local_664 < fVar2 != (local_664 == fVar2)) goto LAB_00686f07;
          iVar16 = iVar16 + 1;
          pfVar15 = pfVar15 + 3;
        } while (iVar16 < iVar13);
      }
      iVar13 = iVar13 + 1;
    }
LAB_00686f07:
    param_4 = afStack_624 + iVar13 * 3;
LAB_00686f0e:
    fVar1 = param_4[1];
    fVar2 = param_4[2];
    *param_1 = *param_4;
    param_1[1] = fVar1;
    param_1[2] = fVar2;
  }
  local_c = 0xffffffff;
  FUN_0060d0a0();
  *unaff_FS_OFFSET = local_14;
  return param_1;
}



undefined1
FUN_00686f50(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar3 = FUN_006899c0();
  FUN_0068ca00(uVar3);
  if (DAT_00b3c089 == '\0') {
    if (((param_1 != 0) && (iVar4 = FUN_0065a2c0(), iVar4 != 0)) &&
       (*(int **)(param_1 + 0x58) != (int *)0x0)) {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x58) + 8))();
      if (iVar4 != 0) {
        return 1;
      }
      uVar2 = 0;
      cVar1 = FUN_0068ca20();
      if (cVar1 == '\0') {
        uVar3 = FUN_006899c0(param_3,param_4,param_5);
        uVar2 = FUN_00686450(param_1,uVar3);
      }
      else {
        cVar1 = FUN_0068ca80();
        if (cVar1 == '\0') {
          cVar1 = FUN_005e1e90();
          if (cVar1 == '\0') {
            return 1;
          }
        }
        else {
          cVar1 = FUN_005e3400();
          if (cVar1 != '\0') {
            return 1;
          }
          cVar1 = FUN_0068cab0();
          if ((cVar1 == '\0') && (cVar1 = FUN_005e3270(), cVar1 != '\0')) {
            uVar6 = 0x3e99999a;
            uVar3 = FUN_006ecc80(0x3e99999a);
            uVar5 = FUN_006899c0(uVar3);
            cVar1 = FUN_005e06c0(uVar5,uVar3,uVar6);
            if (cVar1 == '\0') {
              return 1;
            }
          }
        }
      }
      return uVar2;
    }
    return 0;
  }
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00687060(int param_1,float *param_2,float *param_3,char param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  LONG LVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *unaff_FS_OFFSET;
  undefined1 auStack_444 [12];
  int *local_438;
  int *local_434;
  float local_430;
  int *local_42c;
  float local_428;
  int *local_424;
  undefined4 *local_420;
  float local_41c;
  undefined4 *local_418;
  int local_414;
  float local_410;
  int *local_40c;
  float local_408;
  float local_404;
  float local_400;
  float local_3fc;
  float *local_3f8;
  float *local_3f4;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  int *local_3e0;
  float local_3dc;
  int *local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  int *local_3b4;
  float local_3b0;
  int *local_3ac;
  int *local_3a8;
  float local_3a4;
  int *local_3a0;
  int *local_39c;
  float local_398;
  int *local_394;
  int *local_390;
  float local_38c;
  int *local_388;
  undefined4 auStack_384 [9];
  float local_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float local_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  undefined **local_340;
  undefined4 local_300;
  undefined4 local_2fc;
  float local_2f0 [72];
  undefined1 local_1d0 [16];
  int iStack_1c0;
  int iStack_1bc;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  uint local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009c4fed;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_444;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffbb0;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_414 = param_1;
  local_3f4 = param_2;
  local_3f8 = param_3;
  if (DAT_00b3c089 == '\0') {
    if ((param_4 != '\0') || (bVar3 = false, DAT_00b15824 != '\0')) {
      bVar3 = true;
    }
    if (param_1 != 0) {
      puVar6 = (undefined4 *)FUN_0065a2c0(uVar5);
      if (puVar6 != (undefined4 *)0x0) {
        local_418 = puVar6;
        if (puVar6[2] == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = FUN_008ac0c0();
        }
        if (*(int *)(iVar7 + 8) == 0) {
          piVar12 = (int *)0x0;
        }
        else {
          piVar12 = *(int **)(*(int *)(iVar7 + 8) + 0x2b0);
        }
        iVar7 = puVar6[0xda];
        if ((piVar12 != (int *)0x0) && (iVar7 != 0)) {
          local_420 = (undefined4 *)((float)puVar6[0x92] * 6.99904);
          local_360 = *(float *)(iVar7 + 0x34) - *(float *)(iVar7 + 0x24);
          local_3e4 = (*(float *)(iVar7 + 0x38) - *(float *)(iVar7 + 0x28)) * 6.99904 +
                      (float)local_420;
          local_41c = local_360 * 6.99904 * 0.333;
          FUN_0057e270(&local_438);
          local_400 = *local_3f8 - *param_2;
          uVar5 = (uint)local_438 & 0xffffffdb;
          local_410 = local_3f8[1] - param_2[1];
          local_3e8 = local_3f8[2] - param_2[2];
          local_360 = local_400 * 0.14287673;
          fStack_35c = local_410 * 0.14287673;
          fStack_358 = local_3e8 * 0.14287673;
          local_438 = (int *)-local_400;
          local_408 = 0.0;
          local_404 = -local_410;
          local_3fc = 0.0;
          local_40c = local_438;
          local_3f0 = local_400;
          local_3ec = local_410;
          FUN_0043f350();
          FUN_0043f350();
          _vector_constructor_iterator_(local_2f0,0x30,6,FUN_004f5e80);
          iVar7 = 0;
          fVar1 = local_3e4;
          fVar2 = local_41c;
          do {
            local_42c = (int *)*local_3f4;
            local_428 = local_3f4[1];
            local_424 = (int *)local_3f4[2];
            switch(iVar7) {
            case 0:
              local_424 = (int *)((float)local_424 + (float)local_420);
              break;
            case 1:
              local_424 = (int *)(fVar1 * 0.5 + (float)local_424);
              break;
            case 2:
              local_438 = (int *)(local_410 * fVar2 + (float)local_42c);
              local_430 = local_428 + fVar2 * (float)local_40c;
              local_434 = (int *)(fVar2 * local_408 + (float)local_424 + (float)local_420);
              local_42c = local_438;
              local_428 = local_430;
              local_424 = local_434;
              local_3a8 = local_438;
              local_3a4 = local_430;
              local_3a0 = local_434;
              break;
            case 3:
              local_434 = (int *)(local_404 * fVar2 + (float)local_42c);
              local_430 = local_428 + local_400 * fVar2;
              local_438 = (int *)(local_3fc * fVar2 + (float)local_424 + (float)local_420);
              local_42c = local_434;
              local_428 = local_430;
              local_424 = local_438;
              local_390 = local_434;
              local_38c = local_430;
              local_388 = local_438;
              break;
            case 4:
              local_434 = (int *)(local_410 * fVar2 + (float)local_42c);
              local_430 = local_428 + fVar2 * (float)local_40c;
              local_438 = (int *)(fVar2 * local_408 + (float)local_424 + fVar1);
              local_42c = local_434;
              local_428 = local_430;
              local_424 = local_438;
              local_3b4 = local_434;
              local_3b0 = local_430;
              local_3ac = local_438;
              break;
            case 5:
              local_434 = (int *)(local_404 * fVar2 + (float)local_42c);
              local_430 = local_428 + local_400 * fVar2;
              local_438 = (int *)(local_3fc * fVar2 + (float)local_424 + fVar1);
              local_42c = local_434;
              local_428 = local_430;
              local_424 = local_438;
              local_39c = local_434;
              local_398 = local_430;
              local_394 = local_438;
            }
            local_350 = (float)local_42c * 0.14287673;
            local_2f0[iVar7 * 0xc + 9] = (float)(uVar5 | 0x1b);
            fStack_34c = local_428 * 0.14287673;
            fStack_348 = (float)local_424 * 0.14287673;
            local_2f0[iVar7 * 0xc] = local_350;
            local_2f0[iVar7 * 0xc + 1] = fStack_34c;
            local_2f0[iVar7 * 0xc + 2] = fStack_348;
            local_2f0[iVar7 * 0xc + 3] = fStack_344;
            local_2f0[iVar7 * 0xc + 4] = local_350 + local_360;
            local_2f0[iVar7 * 0xc + 5] = fStack_34c + fStack_35c;
            local_2f0[iVar7 * 0xc + 6] = fStack_348 + fStack_358;
            local_2f0[iVar7 * 0xc + 7] = fStack_344 + fStack_354;
            if ((DAT_00b333b4 == local_414) && (bVar3)) {
              local_3c4 = 0;
              local_3bc = 0;
              local_3b8 = 0;
              local_3c0 = 0x3f800000;
              local_434 = (int *)(local_3f0 + (float)local_42c);
              local_430 = local_3ec + local_428;
              local_438 = (int *)(local_3e8 + (float)local_424);
              local_3d4 = 0x3f800000;
              local_3d0 = 0;
              local_3cc = 0;
              local_3c8 = 0;
              local_3e0 = local_434;
              local_3dc = local_430;
              local_3d8 = local_438;
              local_438 = (int *)FUN_0047f070(&local_42c,&local_3d4,&local_3e0,&local_3c4);
              uVar8 = FUN_004e70b0();
              FUN_00405680(uVar8);
              FUN_00440e60(local_438,0x42480000);
              fVar1 = local_3e4;
              fVar2 = local_41c;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 6);
          iVar11 = 0;
          local_340 = &PTR_LAB_00a74c80;
          local_300 = 0;
          local_2fc = 0;
          local_14 = 0;
          FUN_00538c00();
          local_14 = CONCAT31(local_14._1_3_,1);
          (**(code **)(*piVar12 + 0x58))();
          iVar7 = (**(code **)(*piVar12 + 0x58))();
          uVar8 = *(undefined4 *)(iVar7 + 0x78);
          iVar7 = (**(code **)(*piVar12 + 0x58))();
          FUN_008ba2c0(*(undefined4 *)(iVar7 + 100),local_2f0,5,uVar8,local_1d0,0);
          (**(code **)(*piVar12 + 0x58))();
          if (iStack_1bc != 0) {
            if (local_418[0xd9] == 0) {
              uVar5 = 0;
            }
            else {
              iVar7 = *(int *)(local_418[0xd9] + 8);
              if ((iVar7 == 0) || (iVar7 == -0x14)) {
                uVar5 = 0;
              }
              else {
                uVar5 = *(uint *)(iVar7 + 0x30) >> 0x10;
              }
            }
            local_418 = (undefined4 *)(uVar5 << 0x10 | 0x1b);
            iVar7 = 0;
            local_414 = iStack_1bc;
            if (0 < iStack_1bc) {
              do {
                piVar12 = *(int **)(iStack_1c0 + 0x20 + iVar11);
                local_434 = piVar12;
                if (piVar12 != (int *)0x0) {
                  uVar5 = piVar12[7] & 0x3f;
                  if (((uVar5 == 0xc) || (uVar5 == 0xe)) || (uVar5 == 0x10)) {
                    uVar8 = FUN_004806e0(piVar12);
                    piVar13 = (int *)FUN_004dc270(uVar8);
                    if (piVar13 == (int *)0x0) goto LAB_0068782d;
                    cVar4 = (**(code **)(*piVar13 + 0x88))();
                  }
                  else {
                    cVar4 = FUN_008a7f70(piVar12[7],local_418);
                  }
                  if (cVar4 != '\0') {
                    if (bVar3) {
                      local_3d4 = 0x3f800000;
                      local_3d0 = 0;
                      local_3cc = 0;
                      local_3c8 = 0;
                      local_3c0 = 0;
                      local_3bc = 0;
                      local_3b8 = 0;
                      local_3c4 = 0x3f800000;
                      uVar8 = FUN_0047f070(local_3f4,&local_3c4,local_3f8,&local_3d4);
                      uVar9 = FUN_004e70b0();
                      FUN_00405680(uVar9);
                      FUN_00440e60(uVar8,0x42480000);
                      if (*piVar12 == 0) {
                        piVar13 = (int *)0x0;
                      }
                      else {
                        piVar13 = *(int **)(*piVar12 + 8);
                      }
                      if (piVar13 != (int *)0x0) {
                        local_418 = (undefined4 *)FUN_00401f00(0xdc);
                        local_14._0_1_ = 2;
                        if (local_418 == (undefined4 *)0x0) {
                          iVar7 = 0;
                        }
                        else {
                          iVar7 = FUN_0070b780(0);
                        }
                        local_14._0_1_ = 1;
                        (**(code **)(*piVar13 + 0x90))(iVar7);
                        puVar6 = (undefined4 *)FUN_00401f00(0x1c);
                        local_14 = CONCAT31(local_14._1_3_,3);
                        if (puVar6 == (undefined4 *)0x0) {
                          local_420 = (undefined4 *)0x0;
                        }
                        else {
                          local_418 = puVar6;
                          FUN_006ffd30();
                          *puVar6 = &PTR_FUN_00a2fd5c;
                          *(undefined2 *)(puVar6 + 6) = 0;
                          local_420 = puVar6;
                        }
                        puVar6 = local_420;
                        local_418 = local_420;
                        if (local_420 != (undefined4 *)0x0) {
                          InterlockedIncrement(local_420 + 1);
                        }
                        *(ushort *)(puVar6 + 6) = *(ushort *)(puVar6 + 6) | 1;
                        local_14._0_1_ = 4;
                        FUN_00607740(auStack_384,piVar12[2]);
                        puVar6 = auStack_384;
                        puVar14 = (undefined4 *)(iVar7 + 0x30);
                        for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
                          *puVar14 = *puVar6;
                          puVar6 = puVar6 + 1;
                          puVar14 = puVar14 + 1;
                        }
                        FUN_0043f3e0(&local_3e0,local_434[2] + 0x30);
                        *(int **)(iVar7 + 0x54) = local_3e0;
                        *(float *)(iVar7 + 0x58) = local_3dc;
                        *(int **)(iVar7 + 0x5c) = local_3d8;
                        uVar8 = FUN_004e70b0();
                        FUN_00405680(uVar8);
                        puVar6 = local_420;
                        FUN_00405680(local_420);
                        FUN_00440e60(iVar7,0x42480000);
                        local_14 = CONCAT31(local_14._1_3_,1);
                        LVar10 = InterlockedDecrement(puVar6 + 1);
                        if (LVar10 == 0) {
                          (**(code **)*puVar6)(1);
                        }
                      }
                    }
                    local_14 = local_14 & 0xffffff00;
                    FUN_00538c80();
                    uVar8 = 1;
                    goto LAB_0068784f;
                  }
                }
LAB_0068782d:
                iVar7 = iVar7 + 1;
                iVar11 = iVar11 + 0x30;
              } while (iVar7 < local_414);
            }
          }
          local_14 = local_14 & 0xffffff00;
          FUN_00538c80();
        }
      }
    }
  }
  uVar8 = 0;
LAB_0068784f:
  *unaff_FS_OFFSET = local_1c;
  return uVar8;
}



bool FUN_00687aa0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint *unaff_FS_OFFSET;
  bool bVar6;
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  uint local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c5030;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (uint)&local_c;
  if (DAT_00b3c089 != '\0') {
    *unaff_FS_OFFSET = local_c;
    return true;
  }
  if ((g_ModelLoader_singleton != 0) && (*(int *)(DAT_00b333a0 + 0x34) == 0)) {
    iVar3 = FUN_0043f270(uVar2);
    if (iVar3 != 0) {
      uVar5 = param_2;
      FUN_0043f270(param_2);
      iVar3 = FUN_004f1a80(uVar5);
      if (iVar3 == 0) goto LAB_00687b60;
      cVar1 = FUN_0043e000(iVar3);
      if (cVar1 != '\0') goto LAB_00687b60;
      uVar5 = param_3;
      FUN_0043f270(param_3);
      iVar4 = FUN_004f1a80(uVar5);
      if (iVar4 != iVar3) {
        if (iVar4 == 0) goto LAB_00687b60;
        cVar1 = FUN_0043e000(iVar4);
        if (cVar1 != '\0') goto LAB_00687b60;
      }
    }
  }
  if (param_1 != 0) {
    bVar6 = false;
    FUN_0068cb30();
    local_4 = 0;
    FUN_0068cb30();
    local_4 = CONCAT31(local_4._1_3_,1);
    cVar1 = FUN_00686450(param_1,param_2,local_20,1,0);
    if (cVar1 != '\0') {
      cVar1 = FUN_00686450(param_1,param_3,local_34,1,0);
      if (cVar1 != '\0') {
        uVar5 = FUN_006899c0(0);
        uVar5 = FUN_006899c0(uVar5);
        cVar1 = FUN_00687060(param_1,uVar5);
        bVar6 = cVar1 == '\0';
      }
    }
    local_4 = local_4 & 0xffffff00;
    FUN_0060d0a0();
    local_4 = 0xffffffff;
    FUN_0060d0a0();
    *unaff_FS_OFFSET = local_c;
    return bVar6;
  }
LAB_00687b60:
  *unaff_FS_OFFSET = local_c;
  return false;
}



bool FUN_00687c30(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint *unaff_FS_OFFSET;
  bool bVar6;
  undefined1 local_34 [40];
  uint local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c5060;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (uint)&local_c;
  if (DAT_00b3c089 != '\0') {
    *unaff_FS_OFFSET = local_c;
    return true;
  }
  if ((g_ModelLoader_singleton != 0) && (*(int *)(DAT_00b333a0 + 0x34) == 0)) {
    iVar3 = FUN_0043f270(uVar2);
    if (iVar3 != 0) {
      uVar5 = param_2;
      FUN_0043f270(param_2);
      iVar3 = FUN_004f1a80(uVar5);
      if (iVar3 == 0) goto LAB_00687cf0;
      cVar1 = FUN_0043e000(iVar3);
      if (cVar1 != '\0') goto LAB_00687cf0;
      uVar5 = param_3;
      FUN_0043f270(param_3);
      iVar4 = FUN_004f1a80(uVar5);
      if (iVar4 != iVar3) {
        if (iVar4 == 0) goto LAB_00687cf0;
        cVar1 = FUN_0043e000(iVar4);
        if (cVar1 != '\0') goto LAB_00687cf0;
      }
    }
  }
  if (param_1 != 0) {
    bVar6 = false;
    FUN_0068cb30();
    local_4 = 0;
    FUN_0068cb30();
    local_4 = CONCAT31(local_4._1_3_,1);
    cVar1 = FUN_00686450(param_1,param_2,local_34,1,0);
    if (cVar1 != '\0') {
      uVar5 = FUN_006899c0(param_3,0);
      cVar1 = FUN_00687060(param_1,uVar5);
      bVar6 = cVar1 == '\0';
    }
    local_4 = local_4 & 0xffffff00;
    FUN_0060d0a0();
    local_4 = 0xffffffff;
    FUN_0060d0a0();
    *unaff_FS_OFFSET = local_c;
    return bVar6;
  }
LAB_00687cf0:
  *unaff_FS_OFFSET = local_c;
  return false;
}



undefined4 FUN_00687da0(int param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint *unaff_FS_OFFSET;
  float10 fVar10;
  double local_5c;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [20];
  uint local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c5088;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffff90;
  *unaff_FS_OFFSET = (uint)&local_c;
  if (DAT_00b3c089 != '\0') goto LAB_00688107;
  local_4c = (*param_2 - *param_3) * (*param_2 - *param_3) +
             (param_2[1] - param_3[1]) * (param_2[1] - param_3[1]);
  local_5c = (double)local_4c;
  local_4c = (param_2[2] - param_3[2]) * (param_2[2] - param_3[2]) + local_4c;
  fVar10 = (float10)FUN_00982c30(uVar5);
  local_4c = (float)fVar10;
  if (local_4c < 1.0) goto LAB_00688107;
  if (64.0 < local_4c) {
    local_4c = (float)local_5c;
    fVar10 = (float10)FUN_00982c30(uVar5);
    local_4c = (float)fVar10;
    if (local_4c < 6.4) goto LAB_00688048;
  }
  if (param_1 == 0) goto LAB_00688107;
  iVar6 = FUN_0065a2c0();
  if (iVar6 == 0) goto LAB_00688107;
  if ((*(int *)(DAT_00b333a0 + 0x34) == 0) && (cVar4 = FUN_0043f840(param_3), cVar4 == '\0'))
  goto LAB_00688048;
  uVar5 = FUN_0068cb30();
  local_4 = 0;
  if (((char)param_4 == '\0') && (DAT_00b15824 == '\0')) {
    uVar5 = uVar5 & 0xffffff00;
  }
  else {
    uVar5 = 1;
  }
  cVar4 = FUN_00686450(param_1,param_3,local_20,1,uVar5);
  if (cVar4 != '\0') {
    local_3c = *param_2;
    local_38 = param_2[1];
    local_34 = param_2[2];
    pfVar7 = (float *)FUN_006899c0();
    fVar1 = *pfVar7;
    local_4c = fVar1 - local_3c;
    fVar2 = pfVar7[1];
    fVar3 = pfVar7[2];
    local_2c = fVar2 - local_38;
    local_28 = 0;
    local_48 = fVar1;
    local_44 = fVar2;
    local_40 = fVar3;
    local_30 = local_4c;
    local_5c._0_4_ = local_2c;
    fVar10 = (float10)FUN_00404c90();
    local_5c = (double)CONCAT44(local_5c._4_4_,(float)fVar10);
    local_4c = ABS(local_40 - local_34);
    if (local_4c <= (float)fVar10) {
      *param_3 = fVar1;
      param_3[1] = fVar2;
      param_3[2] = fVar3;
      cVar4 = FUN_00687060(param_1,&local_3c,&local_48,param_4);
      if (cVar4 == '\0') {
        if ((char)param_4 != '\0') {
          local_30 = 1.0;
          local_2c = 1.0;
          local_28 = 0;
          local_24 = 0;
          local_54 = 0;
          local_50 = 0;
          local_5c = 0.007812501848093234;
          uVar8 = FUN_0047f070(&local_3c,&local_5c,&local_48,&local_30);
          uVar9 = FUN_004e70b0();
          FUN_00405680(uVar9);
          FUN_00440e60(uVar8,0x42480000);
        }
        goto LAB_006880f6;
      }
    }
    else {
      if ((local_40 < local_34) && (cVar4 = FUN_005e34b0(), cVar4 != '\0')) {
        *param_3 = local_48;
        param_3[1] = local_44;
        param_3[2] = local_40;
LAB_006880f6:
        local_4 = 0xffffffff;
        FUN_0060d0a0();
LAB_00688107:
        *unaff_FS_OFFSET = local_c;
        return 1;
      }
      if (DAT_00b15824 != '\0') {
        local_30 = 1.0;
        local_2c = 0.0;
        local_28 = 0;
        local_24 = 0;
        local_54 = 0;
        local_50 = 0;
        local_5c = 0.0078125;
        uVar8 = FUN_0047f070(&local_3c,&local_5c,&local_48,&local_30);
        uVar9 = FUN_004e70b0();
        FUN_00405680(uVar9);
        FUN_00440e60(uVar8,0x42480000);
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_0060d0a0();
LAB_00688048:
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00688120(int *param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  float fVar9;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 uStack_164;
  char cStack_163;
  char cStack_162;
  char cStack_161;
  float fStack_160;
  char cStack_159;
  float fStack_158;
  char cStack_151;
  float fStack_150;
  undefined8 uStack_14c;
  float fStack_144;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined4 uStack_118;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c50bb;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&uStack_164;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffe8c;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar3 = (int *)(**(code **)(*param_1 + 0x380))(uVar2);
  if ((piVar3 == (int *)0x0) || (cVar1 = FUN_005e1030(), cVar1 == '\0')) {
    piVar3 = param_1;
  }
  cVar1 = FUN_005e3350();
  if (cVar1 == '\0') goto LAB_00688d8b;
  FUN_005e05f0(0x30);
  FUN_0068b4f0(param_1);
  if ((DAT_00b3c08a != '\0') && (in_ECX[10] == 0)) {
    FUN_00685ea0(piVar3);
  }
  fStack_160 = (float)FUN_0042b410();
  if (fStack_160 == 0.0) {
    (**(code **)(*param_1 + 0x180))(1);
    (**(code **)(*piVar3 + 0x180))(1);
    if ((*(byte *)(in_ECX + 0xb) & 0x80) != 0) {
      (**(code **)(*in_ECX + 0x30))(1);
    }
  }
  else {
    cStack_161 = '\0';
    pfVar4 = (float *)FUN_006899c0();
    pfVar5 = (float *)(**(code **)(*param_1 + 0x174))();
    fStack_150 = *pfVar5 - *pfVar4;
    if (0.0 < pfVar5[2] - pfVar4[2]) {
      cStack_161 = '\x01';
    }
    fStack_158 = ABS(pfVar5[2] - pfVar4[2]);
    uStack_14c._0_4_ =
         (float *)((pfVar5[1] - pfVar4[1]) * (pfVar5[1] - pfVar4[1]) + fStack_150 * fStack_150 + 0.0
                  );
    fVar10 = (float10)FUN_00982c30();
    fVar9 = fStack_160;
    fStack_150 = (float)fVar10;
    uStack_14c = (double)CONCAT44(uStack_14c._4_4_,fStack_150);
    cStack_159 = '\x01';
    if (fStack_150 <= (float)in_ECX[7]) {
      in_ECX[9] = 0;
    }
    else if ((fStack_150 < 100.0) || ((float)in_ECX[7] < 100.0)) {
      cStack_159 = '\0';
      in_ECX[9] = (int)(fStack_150 - (float)in_ECX[7]);
    }
    else {
      cStack_159 = '\0';
    }
    cStack_163 = '\0';
    if (((DAT_00b15814 == '\0') && (DAT_00b1582c == '\0')) && (iVar6 = FUN_00780d10(), iVar6 != 0))
    {
      fStack_160 = 20.0;
      iVar6 = FUN_0065a2c0();
      if ((iVar6 != 0) && (iVar6 = FUN_0065a2c0(), (*(byte *)(iVar6 + 500) & 1) != 0)) {
        fStack_160 = 0.0;
      }
      cVar1 = FUN_005e0510();
      if (cVar1 != '\0') {
        fStack_160 = fStack_160 + 20.0;
      }
      cVar1 = FUN_005e3290();
      if (cVar1 != '\0') {
        fStack_160 = fStack_160 + 20.0;
      }
      uVar7 = FUN_006899c0(fStack_160,1);
      cVar1 = FUN_00684b30(piVar3,uVar7);
      if (cVar1 != '\0') {
        cStack_163 = '\x01';
      }
    }
    cVar1 = FUN_005e0510();
    if (cVar1 != '\0') {
      uVar7 = FUN_0068a160();
      fVar10 = (float10)FUN_004d7e30(uVar7);
      uStack_14c = (double)CONCAT44(uStack_14c._4_4_,(float)fVar10);
      fVar10 = (float10)FUN_005e3750();
      fStack_160 = (float)(fVar10 * (float10)_DAT_00b3a450);
      if ((float)(float *)uStack_14c - (float)in_ECX[3] < fStack_160) {
        FUN_005e05f0(0x200);
        FUN_005e0610(0x100);
      }
    }
    fStack_160 = _DAT_00b3a458;
    iVar6 = FUN_00780d10();
    if ((iVar6 == 0) && (cVar1 = FUN_0068a140(), cVar1 != '\0')) {
      fVar10 = (float10)FUN_006899d0();
LAB_0068840c:
      fStack_160 = (float)fVar10;
    }
    else {
      cVar1 = FUN_0068ca50();
      if ((cVar1 != '\0') && (cVar1 = FUN_005e0530(), cVar1 != '\0')) {
        fVar10 = (float10)FUN_005e0660();
        fVar10 = fVar10 * (float10)0.75;
        goto LAB_0068840c;
      }
    }
    cStack_162 = '\0';
    cStack_151 = '\x01';
    cVar1 = FUN_005e0530();
    if (cVar1 == '\0') {
      cVar1 = FUN_0068ca20();
      if ((cVar1 == '\0') && (iVar6 = FUN_00780d10(), iVar6 != 0)) {
        cStack_162 = '\x01';
      }
      else if (fStack_158 < _DAT_00b3a470) {
        cStack_162 = '\x01';
      }
    }
    else {
      cVar1 = FUN_0068ca50();
      if ((cVar1 == '\0') && (iVar6 = FUN_00780d10(), iVar6 != 0)) {
        cStack_162 = '\x01';
      }
      else if (fStack_160 <= fStack_158) {
        if (fStack_150 < fStack_160) {
          cStack_151 = '\0';
        }
      }
      else {
        cStack_162 = '\x01';
      }
    }
    if (((fStack_150 < fStack_160) || (_DAT_00b3a478 < (float)in_ECX[9])) || (cStack_163 != '\0')) {
      if (cStack_162 == '\0') {
        cVar1 = FUN_005e0530();
        if ((cVar1 == '\0') &&
           ((((cVar1 = FUN_005e34b0(), cVar1 == '\0' || (cStack_161 == '\0')) && (fStack_150 < 50.0)
             ) && ((iVar6 = FUN_0065a2c0(), iVar6 != 0 && (iVar6 = FUN_0088d370(), iVar6 == 0))))))
        {
          in_ECX[0x12] = 2;
          in_ECX[8] = 0x447a0000;
        }
      }
      else {
        cStack_161 = '\0';
        cVar1 = FUN_0068ca20();
        if (cVar1 != '\0') {
          cStack_161 = '\x01';
          piVar8 = (int *)FUN_006899c0();
          in_ECX[0xf] = *piVar8;
          in_ECX[0x10] = piVar8[1];
          in_ECX[0x11] = piVar8[2];
        }
        FUN_0068c170(fVar9);
        fVar9 = (float)FUN_0042b410();
        cStack_163 = '\0';
        if (fVar9 == 0.0) {
LAB_006887a1:
          if ((*(byte *)(in_ECX + 0xb) & 0x80) != 0) {
            (**(code **)(*in_ECX + 0x30))(1);
          }
          (**(code **)(*piVar3 + 0x180))(1);
          (**(code **)(*param_1 + 0x180))(1);
          FUN_00683c20();
          if (in_ECX[0xc] != 0) {
            FUN_00680c90();
          }
          if ((DAT_00b333b4 == param_1) &&
             ((iVar6 = FUN_00585c10(1), '\0' < *(char *)(iVar6 + 0x31) || (DAT_00b3b908 != '\0'))))
          {
            uVar7 = (**(code **)(*param_1 + 0xd4))();
            _sprintf(acStack_114,"Actor \'%s\' indicating pathing completed succesfully.",uVar7);
            FUN_00579b60(acStack_114);
          }
        }
        else {
          fStack_158 = (float)FUN_00780d10();
          if ((fStack_158 != 0.0) && (iVar6 = FUN_00780d10(), iVar6 == 0)) {
            pfVar4 = (float *)(**(code **)(*piVar3 + 0x174))();
            fStack_12c = *pfVar4;
            fStack_128 = pfVar4[1];
            fStack_124 = pfVar4[2];
            pfVar4 = (float *)FUN_006899c0();
            fStack_138 = *pfVar4;
            fStack_134 = pfVar4[1];
            fStack_130 = pfVar4[2];
            iVar6 = FUN_00480520(&fStack_12c,&fStack_138,0x43fa0000);
            if ((iVar6 < 0) && (fStack_130 - fStack_124 < 100.0)) {
              if (cStack_161 == '\0') {
                cVar1 = FUN_00687aa0(piVar3,&fStack_138,&fStack_12c);
              }
              else {
                cVar1 = FUN_00687c30(piVar3,&fStack_138,&fStack_12c);
              }
              if (cVar1 != '\0') {
                FUN_0068c170(fVar9);
                fVar9 = (float)FUN_0042b410();
                cStack_163 = '\x01';
              }
            }
          }
          if (fVar9 == 0.0) goto LAB_006887a1;
          if (cStack_163 == '\0') {
            uVar7 = FUN_006899c0();
            pfVar4 = &fStack_120;
            (**(code **)(*piVar3 + 0x174))(pfVar4,uVar7);
            FUN_004121a0(pfVar4,uVar7);
            FUN_0068cb30();
            uStack_4 = 0;
            iVar6 = FUN_0047f6f0(&fStack_120,0x447a0000);
            if ((iVar6 < 0) && (cVar1 = FUN_00686f50(piVar3,fVar9,&uStack_14c,0,0), cVar1 == '\0'))
            {
              FUN_00684ec0();
              (**(code **)(*in_ECX + 0x30))(1);
              (**(code **)(*param_1 + 0x180))(1);
              (**(code **)(*piVar3 + 0x180))(1);
              if ((DAT_00b333b4 == param_1) &&
                 ((iVar6 = FUN_00585c10(1), '\0' < *(char *)(iVar6 + 0x31) || (DAT_00b3b908 != '\0')
                  ))) {
                uVar7 = (**(code **)(*piVar3 + 0xd4))();
                _sprintf(acStack_114,"Actor \'%s\' stopping path at invalid point.",uVar7);
                FUN_00579b60(acStack_114);
              }
              uStack_4 = 0xffffffff;
              FUN_0060d0a0();
              goto LAB_00688d8b;
            }
            uStack_4 = 0xffffffff;
            FUN_0060d0a0();
          }
        }
        in_ECX[7] = 0x7f7fffff;
        cStack_159 = '\0';
        in_ECX[9] = 0;
        in_ECX[8] = 0;
        if (fVar9 == 0.0) goto LAB_00688d83;
        uVar7 = FUN_006899c0();
        uStack_14c = (double)CONCAT44(uStack_14c._4_4_,uVar7);
        pfVar5 = (float *)(**(code **)(*piVar3 + 0x174))();
        pfVar4 = (float *)uStack_14c;
        fStack_120 = *pfVar5 - *(float *)uStack_14c;
        fStack_11c = pfVar5[1] - ((float *)uStack_14c)[1];
        uStack_14c = (double)CONCAT44(fStack_11c,fStack_120);
        fStack_144 = pfVar5[2] - pfVar4[2];
        uStack_118 = 0;
        fVar10 = (float10)FUN_00404c90();
        fStack_150 = (float)fVar10;
      }
    }
    uVar7 = FUN_006899c0();
    cVar1 = FUN_0043f840(uVar7);
    if ((cVar1 != '\0') && (in_ECX[0xc] != 0)) {
      uVar7 = FUN_00680cb0();
      uStack_14c = (double)CONCAT44(uStack_14c._4_4_,uVar7);
      FUN_00681df0(piVar3,fVar9);
      iVar6 = FUN_00680cb0();
      if (iVar6 == 6) {
        iVar6 = *in_ECX;
        uVar7 = FUN_0068a160(0);
        (**(code **)(iVar6 + 0x14))(param_1,uVar7);
        goto LAB_00688d8b;
      }
      iVar6 = FUN_00680cb0();
      if ((iVar6 == 0) && ((float *)uStack_14c != (float *)0x0)) {
        in_ECX[7] = 0x7f7fffff;
        in_ECX[9] = 0;
        in_ECX[8] = 0;
      }
    }
    if (cStack_151 != '\0') {
      FUN_00686150(piVar3);
    }
    if ((in_ECX[0xc] != 0) && (iVar6 = FUN_00680cb0(), iVar6 == 7)) goto LAB_00688c50;
    cVar1 = FUN_00683db0();
    if (cVar1 == '\0') {
      iVar6 = (**(code **)(*piVar3 + 0x164))();
      if ((DAT_00b1582c == '\0') && ((iVar6 == 0 || (cVar1 = FUN_00470f40(), cVar1 == '\0')))) {
        cStack_159 = '\0';
LAB_00688987:
        in_ECX[7] = 0x7f7fffff;
        in_ECX[9] = 0;
        in_ECX[8] = 0;
      }
      else {
        if (((*(byte *)(in_ECX + 0xb) & 0x20) != 0) ||
           ((in_ECX[0xc] != 0 && (iVar6 = FUN_00680cb0(), iVar6 == 5)))) goto LAB_00688987;
        cVar1 = FUN_00685880(fStack_150);
        if (cVar1 == '\0') {
          FUN_00683df0(piVar3);
          cVar1 = (**(code **)(*in_ECX + 0x2c))();
          if (cVar1 != '\0') {
            if ((((float)in_ECX[0xf] == 3.4028235e+38) &&
                (cVar1 = (**(code **)(*param_1 + 0x334))(1), cVar1 == '\0')) &&
               (cVar1 = FUN_005e0530(), cVar1 == '\0')) {
              iVar6 = FUN_006899c0();
              uStack_14c = (double)*(float *)(iVar6 + 8);
              iVar6 = (**(code **)(*param_1 + 0x174))();
              uStack_14c = (double)((float)uStack_14c - *(float *)(iVar6 + 8));
              fVar10 = (float10)FUN_005e0660();
              if ((float10)uStack_14c <= fVar10) goto LAB_00688b72;
              uVar7 = (**(code **)(*param_1 + 0x174))();
              pfVar4 = &fStack_120;
              FUN_006899c0(pfVar4,uVar7);
              FUN_004121a0(pfVar4,uVar7);
              uStack_118 = 0;
              fVar10 = (float10)FUN_00404c90();
              if ((float10)2048.0 <= fVar10) goto LAB_00688b72;
LAB_00688bb4:
              fStack_160 = fVar9;
              cVar1 = FUN_0068ca20();
              if (cVar1 == '\0') {
                uVar7 = FUN_006899c0(piVar3,0,0);
                fStack_158 = (float)FUN_0067d820(uVar7);
                if (fStack_158 != 0.0) {
                  uVar7 = (**(code **)(*piVar3 + 0x174))(piVar3,0,0);
                  fVar9 = (float)FUN_0067d820(uVar7);
                  if ((fVar9 == 0.0) || (fVar9 == fStack_158)) {
                    uVar12 = 0;
                    uVar7 = FUN_004bef40(0);
                    fStack_160 = (float)FUN_0068c280(uVar7,uVar12);
                  }
                }
              }
              if (fStack_160 != 0.0) {
                iVar6 = *param_1;
                uVar7 = FUN_006899c0();
                (**(code **)(iVar6 + 0x1cc))(uVar7);
                in_ECX[7] = 0x7f7fffff;
                in_ECX[9] = 0;
                in_ECX[8] = 0;
                goto LAB_00688d8b;
              }
            }
            else {
LAB_00688b72:
              fStack_158 = (float)FUN_0065a2c0();
              if (fStack_158 != 0.0) {
                cVar1 = FUN_00892d90();
                if (cVar1 == '\0') {
                  uVar14 = 0;
                  uVar13 = 0;
                  uVar12 = 0;
                  uVar7 = (**(code **)(*piVar3 + 0x174))(0,0,0);
                  cVar1 = FUN_008949c0(uVar7,uVar12,uVar13,uVar14);
                  if (cVar1 != '\0') goto LAB_00688c50;
                }
                goto LAB_00688bb4;
              }
            }
LAB_00688c50:
            cVar1 = FUN_0068ca20();
            if (cVar1 != '\0') {
              piVar8 = param_1;
              uVar7 = FUN_006899c0(param_1);
              cVar1 = FUN_006849f0(uVar7,piVar8);
              if (cVar1 != '\0') {
                iVar6 = *in_ECX;
                uVar7 = FUN_0068a160(1);
                (**(code **)(iVar6 + 0x14))(param_1,uVar7);
                if ((DAT_00b333b4 == param_1) &&
                   ((iVar6 = FUN_00585c10(1), '\0' < *(char *)(iVar6 + 0x31) ||
                    (DAT_00b3b908 != '\0')))) {
                  uVar7 = (**(code **)(*piVar3 + 0xd4))();
                  _sprintf(acStack_114,
                           "Actor \'%s\' added bad connection for failure. Trying again.",uVar7);
                  FUN_00579b60(acStack_114);
                }
                goto LAB_00688d8b;
              }
            }
            FUN_00684ec0();
            (**(code **)(*in_ECX + 0x30))(1);
            (**(code **)(*param_1 + 0x180))(1);
            (**(code **)(*piVar3 + 0x180))(1);
            if ((DAT_00b333b4 == param_1) &&
               ((iVar6 = FUN_00585c10(1), '\0' < *(char *)(iVar6 + 0x31) || (DAT_00b3b908 != '\0')))
               ) {
              uVar7 = (**(code **)(*piVar3 + 0xd4))();
              _sprintf(acStack_114,"Actor \'%s\' indicating pathfinding has failed.",uVar7);
              FUN_00579b60(acStack_114);
            }
            goto LAB_00688d8b;
          }
        }
      }
      if (cStack_159 != '\0') {
        in_ECX[7] = (int)fStack_150;
      }
    }
    if ((DAT_00b1582c != '\0') && (cVar1 = FUN_005e05b0(), cVar1 != '\0')) {
      FUN_005e05d0();
      FUN_0046a9c0(1);
      uVar7 = (**(code **)(*piVar3 + 0x174))();
      pfVar4 = &fStack_138;
      FUN_006899c0(pfVar4,uVar7);
      FUN_004121a0(pfVar4,uVar7);
      FUN_0043f350();
      uStack_14c._0_4_ = (float *)_DAT_00b33e9c;
      fVar11 = (float10)FUN_005e65b0();
      fVar10 = (float10)(float)(float *)uStack_14c;
      uStack_14c = (double)CONCAT44(uStack_14c._4_4_,(float)(fVar11 * fVar10));
      FUN_0069dd70((float)(fVar11 * fVar10));
      pfVar4 = (float *)(**(code **)(*piVar3 + 0x174))();
      fStack_12c = *pfVar4 + fStack_138;
      fStack_128 = pfVar4[1] + fStack_134;
      fStack_124 = pfVar4[2] + fStack_130;
      FUN_004d8a30(fStack_12c,fStack_128,fStack_124);
    }
  }
LAB_00688d83:
  FUN_00686060(piVar3);
LAB_00688d8b:
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_00688dc0(int *param_1,float *param_2,float *param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  float *pfVar8;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  undefined4 uVar10;
  undefined1 uStack_6d;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [20];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c50f8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff80;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((DAT_00b3c089 == '\0') && (param_1 != (int *)0x0)) && ((int *)param_1[0x16] != (int *)0x0)) {
    iVar4 = (**(code **)(*(int *)param_1[0x16] + 8))(uVar3);
    if (iVar4 != 0) goto LAB_0068920d;
    piVar6 = (int *)param_1[0x16];
    piVar5 = (int *)(**(code **)(*piVar6 + 0xcc))();
    if (piVar5 != DAT_00b333c4) {
      iVar4 = (**(code **)(*piVar6 + 0x184))();
      if ((iVar4 == 0) || (*(int *)(iVar4 + 0x28) == 0)) goto LAB_00688f84;
      piVar6 = (int *)FUN_00569e60();
      if (piVar6 != DAT_00b333c4) goto LAB_00688f84;
    }
    uVar7 = (**(code **)(*param_1 + 0x174))(0x45000000);
    uVar7 = (**(code **)(*DAT_00b333c4 + 0x174))(uVar7);
    iVar4 = FUN_00480520(uVar7);
    if (iVar4 < 0) {
      (**(code **)(*param_1 + 0x174))();
      (**(code **)(*DAT_00b333c4 + 0x174))();
      uVar7 = (**(code **)(*param_1 + 0x174))(0x40a00000);
      cVar2 = FUN_0047d810(param_2,uVar7);
      if (cVar2 != '\0') {
        uVar7 = (**(code **)(*DAT_00b333c4 + 0x174))(0x40a00000);
        cVar2 = FUN_0047d810(param_3,uVar7);
        if (cVar2 != '\0') {
          iVar4 = FUN_00480520(param_2,param_3,0x40a00000);
          if (iVar4 < 0) goto LAB_0068920d;
          uStack_6d = 0;
          cVar2 = FUN_006843c0(param_1,param_2,param_3,&uStack_6d);
          if (cVar2 != '\0') {
            *unaff_FS_OFFSET = local_c;
            return uStack_6d;
          }
          if (DAT_00b3c084 == DAT_00b02c54) {
            DAT_00b3c080 = DAT_00b3c080 + 1;
            if (1 < DAT_00b3c080) goto LAB_00688f84;
          }
          else {
            DAT_00b3c084 = DAT_00b02c54;
            DAT_00b3c080 = 1;
          }
          fStack_38 = *param_2;
          fStack_34 = param_2[1];
          fStack_30 = param_2[2];
          fVar9 = (float10)FUN_005e0660();
          fStack_44 = *param_3;
          fStack_40 = param_3[1];
          fStack_30 = (float)(fVar9 + (float10)fStack_30);
          fStack_3c = param_3[2] + 30.0;
          cVar2 = FUN_006859a0(&fStack_38,&fStack_44);
          if (cVar2 == '\0') {
            FUN_00685be0(param_1,param_2,param_3,0);
            *unaff_FS_OFFSET = local_c;
            return 0;
          }
          cVar2 = FUN_005e0530();
          if (cVar2 != '\0') {
            uVar10 = 0x3f600000;
            uVar7 = FUN_006ecc80(0x3f600000);
            cVar2 = FUN_005e06c0(param_2,uVar7,uVar10);
            if (cVar2 != '\0') {
              uVar10 = 0x3f600000;
              uVar7 = FUN_006ecc80(0x3f600000);
              cVar2 = FUN_005e06c0(param_3,uVar7,uVar10);
              if (cVar2 != '\0') goto LAB_0068920d;
            }
          }
          uVar3 = FUN_0068cb30();
          uStack_4 = 0;
          if ((param_4 == '\0') && (DAT_00b15824 == '\0')) {
            uVar3 = uVar3 & 0xffffff00;
          }
          else {
            uVar3 = 1;
          }
          FUN_00686450(param_1,param_2,auStack_20,0,uVar3);
          pfVar8 = (float *)FUN_006899c0();
          fStack_5c = *pfVar8;
          fStack_58 = pfVar8[1];
          fStack_54 = pfVar8[2];
          uStack_6c = CONCAT31(uStack_6c._1_3_,param_4);
          while( true ) {
            bVar1 = true;
            while( true ) {
              DAT_00b3c088 = 1;
              FUN_00686a40(&fStack_50,param_1,&fStack_5c,param_3);
              DAT_00b3c088 = 0;
              fStack_68 = fStack_50 - *param_3;
              fStack_64 = fStack_4c - param_3[1];
              fStack_60 = fStack_48 - param_3[2];
              fStack_2c = fStack_68;
              fStack_28 = fStack_64;
              fStack_24 = fStack_60;
              fVar9 = (float10)FUN_00404c90();
              if (fVar9 < (float10)64.0) {
                bVar1 = false;
              }
              cVar2 = FUN_00687da0(param_1,&fStack_5c,&fStack_50,uStack_6c);
              if (cVar2 == '\0') {
                FUN_00685be0(param_1,param_2,param_3,0);
                uStack_4 = 0xffffffff;
                FUN_0060d0a0();
                *unaff_FS_OFFSET = local_c;
                return 0;
              }
              if (!bVar1) break;
              fStack_5c = fStack_50;
              fStack_54 = fStack_48;
              fStack_58 = fStack_4c;
            }
            if ((((char)uStack_6c != '\0') || (DAT_00b1581c == '\0')) || (DAT_00b333b4 != param_1))
            break;
            fStack_5c = *param_2;
            fStack_58 = param_2[1];
            fStack_54 = param_2[2];
            uStack_6c = CONCAT31(uStack_6c._1_3_,1);
          }
          uStack_4 = 0xffffffff;
          FUN_0060d0a0();
          FUN_00685be0(param_1,param_2,param_3,1);
          goto LAB_0068920d;
        }
      }
    }
LAB_00688f84:
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
LAB_0068920d:
  *unaff_FS_OFFSET = local_c;
  return 1;
}



undefined1 FUN_00689230(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_00b3c089 != '\0') {
    return 1;
  }
  if ((g_ModelLoader_singleton != 0) && (*(int *)(DAT_00b333a0 + 0x34) == 0)) {
    iVar3 = FUN_0043f270();
    if (iVar3 != 0) {
      uVar5 = param_2;
      FUN_0043f270(param_2);
      iVar3 = FUN_004f1a80(uVar5);
      if (iVar3 != 0) {
        cVar1 = FUN_0043e000(iVar3);
        if (cVar1 == '\0') {
          uVar5 = param_3;
          FUN_0043f270(param_3);
          iVar4 = FUN_004f1a80(uVar5);
          if (iVar4 == iVar3) goto LAB_006892bf;
          if (iVar4 != 0) {
            cVar1 = FUN_0043e000(iVar4);
            if (cVar1 == '\0') goto LAB_006892bf;
          }
        }
      }
      return 0;
    }
  }
LAB_006892bf:
  uVar2 = 0;
  if (param_1 != 0) {
    iVar3 = FUN_00480520(param_2,param_3,0x45000000);
    if (iVar3 < 0) {
      uVar2 = FUN_00688dc0(param_1,param_2,param_3,0);
    }
  }
  return uVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00689300(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_244 [24];
  undefined1 uStack_22c;
  char acStack_218 [260];
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c512b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_244;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffdac;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00684ec0(uVar2);
  iVar3 = FUN_006ecc80();
  if (iVar3 == 0) goto LAB_006895a2;
  cVar1 = FUN_0065d550();
  if (cVar1 != '\0') {
    FUN_0068b440(param_1,param_2,param_3);
    goto LAB_006895a2;
  }
  uVar4 = (**(code **)(*param_1 + 0x174))(param_2);
  cVar1 = FUN_00689230(param_1,uVar4);
  if (cVar1 == '\0') {
    if (DAT_00b333b4 == param_1) {
      iVar3 = FUN_00585c10(1);
      if (('\0' < *(char *)(iVar3 + 0x31)) || (DAT_00b3b908 != '\0')) {
        uVar4 = (**(code **)(*param_1 + 0xd4))();
        _sprintf(acStack_114,"Actor \'%s\' building full high level path.",uVar4);
        FUN_00579b60(acStack_114);
      }
    }
    FUN_0067d760();
    uStack_22c = (undefined1)in_ECX[4];
    uStack_4 = 0;
    cVar1 = FUN_0067eb60(param_1 + 0xb,param_2,param_1,param_3);
    FUN_0067e3d0(in_ECX + 5,param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_005e34b0();
      if (cVar1 == '\0') {
        uVar4 = FUN_004b2460();
        FUN_0068c170(uVar4);
        *(byte *)(in_ECX + 0xb) = *(byte *)(in_ECX + 0xb) | 0x80;
      }
    }
    FUN_00686300(param_1);
    FUN_00684000(param_1);
    iVar3 = FUN_0042b410();
    if (iVar3 == 0) goto LAB_00689576;
    cVar1 = FUN_0068cae0();
    if (cVar1 == '\0') {
      cVar1 = FUN_0068cab0();
      if (cVar1 == '\0') {
LAB_0068952a:
        cVar1 = FUN_0068cab0();
        if (cVar1 == '\0') {
          cVar1 = FUN_005e1e90();
          if (cVar1 != '\0') goto LAB_00689540;
        }
LAB_00689576:
        if (DAT_00b3c08a != '\0') {
          FUN_00685ea0(param_1);
        }
        uStack_4 = 0xffffffff;
        FUN_0060d0a0();
        goto LAB_0068959b;
      }
      cVar1 = FUN_005e1c30();
      if (cVar1 != '\0') {
        cVar1 = FUN_005e3400();
        if (cVar1 != '\0') goto LAB_0068952a;
      }
    }
LAB_00689540:
    FUN_00684ec0();
    (**(code **)(*in_ECX + 0x30))(1);
    (**(code **)(*param_1 + 0x180))(1);
    uStack_4 = 0xffffffff;
    FUN_0060d0a0();
  }
  else {
    if (DAT_00b333b4 == param_1) {
      iVar3 = FUN_00585c10(1);
      if (('\0' < *(char *)(iVar3 + 0x31)) || (DAT_00b3b908 != '\0')) {
        uVar4 = (**(code **)(*param_1 + 0xd4))();
        _sprintf(acStack_218,"Actor \'%s\' building straight path.",uVar4);
        FUN_00579b60(acStack_218);
      }
    }
    FUN_0068c6e0();
    uVar4 = (**(code **)(*param_1 + 0x174))();
    FUN_0068bed0(uVar4);
    FUN_0068bed0(param_2);
    if (DAT_00b3c08a != '\0') {
      FUN_00685ea0(param_1);
    }
LAB_0068959b:
    FUN_006847b0();
  }
LAB_006895a2:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006895d0(int *param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float fStack_50;
  undefined1 auStack_4c [44];
  undefined1 uStack_20;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c5170;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff8c;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == (int *)0x0) goto LAB_006899a6;
  uVar5 = param_2;
  FUN_0068a160(param_2,uVar4);
  cVar3 = FUN_008aa390(uVar5);
  if ((cVar3 == '\0') && (cVar3 = (**(code **)(*in_ECX + 0xc))(), cVar3 == '\0')) goto LAB_006899a6;
  FUN_0068afb0(param_1,param_2);
  cVar3 = FUN_006825c0(param_1);
  if (cVar3 != '\0') goto LAB_006899a6;
  uVar5 = (**(code **)(*param_1 + 0x174))(param_2);
  cVar3 = FUN_00689230(param_1,uVar5);
  if (cVar3 == '\0') {
    if ((*(byte *)(in_ECX + 0xb) & 0x80) != 0) goto LAB_006899a6;
    cVar3 = (**(code **)(*in_ECX + 0xc))();
    if (cVar3 == '\0') {
      uVar5 = (**(code **)(*param_1 + 0x174))(param_2,0x45800000);
      iVar6 = FUN_00480520(uVar5);
      if (-1 < iVar6) {
        iVar6 = FUN_004b2460();
        if (iVar6 == 0) {
          puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
          uStack_58 = *puVar7;
          uStack_54 = puVar7[1];
          fStack_50 = (float)puVar7[2];
          FUN_0068bed0(&uStack_58);
        }
        else {
          puVar7 = (undefined4 *)FUN_006899c0();
          uStack_58 = *puVar7;
          uStack_54 = puVar7[1];
          fStack_50 = (float)puVar7[2];
        }
        FUN_0067d760();
        uStack_20 = (undefined1)in_ECX[4];
        uStack_4 = 1;
        FUN_0067eb60(&uStack_58,param_2,param_1,0);
        FUN_0067e090(in_ECX + 5);
        FUN_0068c1b0();
        FUN_00684000(param_1);
        uStack_4 = 0xffffffff;
        FUN_0060d0a0();
        goto LAB_0068998e;
      }
    }
    iVar6 = FUN_0042b410();
    fStack_64 = 3.4028235e+38;
    fStack_60 = 0.0;
    fStack_5c = 0.0;
    if (iVar6 != 0) {
      pfVar8 = (float *)FUN_006899c0();
      fStack_64 = *pfVar8;
      fStack_60 = pfVar8[1];
      fStack_5c = pfVar8[2];
    }
    bVar2 = false;
    if (iVar6 == 0) {
      uVar5 = (**(code **)(*param_1 + 0x174))(param_2,0x43fa0000);
      iVar6 = FUN_00480520(uVar5);
joined_r0x00689818:
      if (iVar6 < 0) {
        bVar2 = true;
      }
    }
    else {
      iVar6 = FUN_00780d10();
      if (iVar6 == 0) {
        iVar6 = FUN_00480520(&fStack_64,param_2,0x43fa0000);
        goto joined_r0x00689818;
      }
    }
    (**(code **)(*in_ECX + 0x14))(param_1,param_2,0);
    bVar1 = false;
    if ((bVar2) && (cVar3 = FUN_0068c010(4), cVar3 != '\0')) {
      FUN_0068cb30();
      uStack_4 = 0;
      cVar3 = FUN_00686450(param_1,param_2,auStack_4c,0,0);
      if (cVar3 != '\0') {
        puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
        uStack_58 = *puVar7;
        uStack_54 = puVar7[1];
        fStack_50 = (float)puVar7[2];
        fVar9 = (float10)FUN_005e0660();
        fStack_50 = (float)(fVar9 + (float10)fStack_50);
        uVar5 = FUN_006899c0();
        cVar3 = FUN_006859a0(&uStack_58,uVar5);
        if (cVar3 != '\0') {
          FUN_00684ec0();
          uVar5 = FUN_006899c0();
          FUN_0068bed0(uVar5);
          FUN_0068ca30(0);
          uVar5 = FUN_0068ca80();
          FUN_0068ca90(uVar5);
          uVar5 = FUN_0068cab0();
          FUN_0068cac0(uVar5);
          uVar5 = FUN_0068cae0();
          FUN_0068caf0(uVar5);
          bVar1 = true;
        }
      }
      uStack_4 = 0xffffffff;
      FUN_0060d0a0();
      if (bVar1) goto LAB_0068998e;
    }
    if (((fStack_64 == 3.4028235e+38) || (cVar3 = FUN_0068be10(&fStack_64,5), cVar3 == '\0')) &&
       (iVar6 = FUN_0042b410(), iVar6 != 0)) {
      uVar5 = (**(code **)(*param_1 + 0x174))();
      FUN_006899c0(uVar5);
      cVar3 = FUN_008aa350(uVar5);
      if (cVar3 != '\0') {
        FUN_0068be80(iVar6,0);
      }
    }
  }
  else {
    FUN_0068c6e0();
    uVar5 = (**(code **)(*param_1 + 0x174))();
    FUN_0068bed0(uVar5);
    FUN_0068bed0(param_2);
  }
LAB_0068998e:
  if (DAT_00b3c08a != '\0') {
    FUN_00685ea0(param_1);
  }
  FUN_006847b0();
LAB_006899a6:
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_006899c0(void)

{
  int in_ECX;
  
  return in_ECX + 4;
}



float10 FUN_006899d0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0xc);
}



undefined4 FUN_006899e0(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 8) == 0) && (*(int *)(in_ECX + 4) == 0)) {
    return 1;
  }
  return 0;
}



void FUN_00689a00(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 4);
  if (piVar1 != (int *)0x0) {
    while (cVar4 = FUN_0046cb60(), cVar4 == '\0') {
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        FUN_0068b1c0();
        FUN_00401f20(iVar2);
      }
      piVar3 = *(int **)(in_ECX + 8);
      if (piVar3 == (int *)0x0) {
        *piVar1 = 0;
      }
      else {
        *(int *)(in_ECX + 8) = piVar3[1];
        *piVar1 = *piVar3;
        FUN_00401f20(piVar3);
      }
    }
  }
  return;
}



void FUN_00689a60(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int in_ECX;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afaab;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00689a00(uVar2);
  piVar6 = (int *)0x0;
  do {
    if ((param_1 == (int *)0x0) || ((param_1[1] == 0 && (*param_1 == 0)))) {
      *unaff_FS_OFFSET = local_c;
      return;
    }
    iVar3 = FUN_00401f00(8);
    local_4 = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0068b0c0();
    }
    local_4 = 0xffffffff;
    FUN_0068b1d0(0);
    FUN_0068b100(*param_1);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)(in_ECX + 4);
      if (iVar3 != 0) {
        piVar5 = (int *)(in_ECX + 8);
        iVar1 = *(int *)(in_ECX + 8);
        piVar4 = piVar6;
        while (iVar1 != 0) {
          piVar4 = (int *)*piVar5;
          piVar5 = piVar4 + 1;
          iVar1 = piVar4[1];
        }
        if (*piVar4 == 0) {
          *piVar4 = iVar3;
        }
        else {
          piVar5 = (int *)FUN_00401f00(8);
          if (piVar5 == (int *)0x0) {
            piVar4[1] = 0;
          }
          else {
            *piVar5 = iVar3;
            piVar5[1] = 0;
            piVar4[1] = (int)piVar5;
          }
        }
      }
    }
    else {
      if (iVar3 != 0) {
        iVar1 = piVar6[1];
        piVar5 = piVar6;
        while (iVar1 != 0) {
          piVar5 = (int *)piVar5[1];
          iVar1 = piVar5[1];
        }
        if (*piVar5 != 0) {
          piVar4 = (int *)FUN_00401f00(8);
          if (piVar4 == (int *)0x0) {
            piVar5[1] = 0;
            piVar6 = (int *)piVar6[1];
          }
          else {
            *piVar4 = iVar3;
            piVar4[1] = 0;
            piVar5[1] = (int)piVar4;
            piVar6 = (int *)piVar6[1];
          }
          goto LAB_00689b82;
        }
        *piVar5 = iVar3;
      }
      piVar6 = (int *)piVar6[1];
    }
LAB_00689b82:
    param_1 = (int *)param_1[1];
  } while( true );
}



void FUN_00689bb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  
  if (param_1 != 0) {
    FUN_004526e0();
    for (piVar3 = (int *)(in_ECX + 4);
        (piVar3 != (int *)0x0 && ((piVar3[1] != 0 || (*piVar3 != 0)))); piVar3 = (int *)piVar3[1]) {
      iVar1 = FUN_0068b0d0();
      if (iVar1 == 0) {
        uVar2 = FUN_0068b0f0();
        FUN_0067b1e0(uVar2);
      }
    }
  }
  return;
}



void FUN_00689c10(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 4);
  if ((piVar1 != (int *)0x0) && ((*(int *)(in_ECX + 8) != 0 || (*piVar1 != 0)))) {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      FUN_0068b1c0();
      FUN_00401f20(iVar2);
    }
    piVar3 = *(int **)(in_ECX + 8);
    if (piVar3 != (int *)0x0) {
      *(int *)(in_ECX + 8) = piVar3[1];
      *piVar1 = *piVar3;
      FUN_00401f20(piVar3);
      return;
    }
    *piVar1 = 0;
  }
  return;
}



void FUN_00689c60(void)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  int *piVar9;
  
  piVar2 = *(int **)(in_ECX + 8);
  do {
    while( true ) {
      if ((piVar2 == (int *)0x0) || ((piVar2[1] == 0 && (*piVar2 == 0)))) {
        return;
      }
      iVar1 = *piVar2;
      iVar7 = FUN_0068b0f0();
      if (((iVar7 != 0) && (iVar7 = FUN_004d7630(), iVar7 != 0)) &&
         (iVar7 = FUN_0042b410(), iVar7 != 0)) break;
LAB_00689d10:
      piVar2 = (int *)piVar2[1];
    }
    FUN_0042b410();
    iVar7 = FUN_004d8af0();
    if (iVar7 == 0) goto LAB_00689d10;
    piVar9 = (int *)(in_ECX + 4);
    piVar6 = piVar9;
    piVar5 = (int *)0x0;
    while( true ) {
      piVar4 = piVar6;
      if (((piVar4 == (int *)0x0) || ((piVar4[1] == 0 && (*piVar4 == 0)))) || (piVar4 == piVar2))
      goto LAB_00689d10;
      iVar8 = FUN_0068b0f0();
      if ((iVar8 != 0) && (iVar8 = FUN_004d8af0(), iVar8 == iVar7)) break;
      piVar6 = (int *)piVar4[1];
      piVar5 = piVar4;
    }
    bVar3 = true;
    if (piVar5 == (int *)0x0) {
      do {
        iVar7 = *piVar9;
        if (iVar7 == iVar1) {
          bVar3 = false;
        }
        if (iVar7 != 0) {
          FUN_0068b1c0();
          FUN_00401f20(iVar7);
        }
        piVar2 = *(int **)(in_ECX + 8);
        if (piVar2 == (int *)0x0) {
          *piVar9 = 0;
        }
        else {
          *(int *)(in_ECX + 8) = piVar2[1];
          *piVar9 = *piVar2;
          FUN_00401f20(piVar2);
        }
        piVar2 = piVar9;
      } while (((*(int *)(in_ECX + 8) != 0) || (*piVar9 != 0)) && (bVar3));
    }
    else {
      do {
        piVar2 = (int *)piVar5[1];
        iVar7 = *piVar2;
        if (iVar7 == iVar1) {
          bVar3 = false;
        }
        if (iVar7 != 0) {
          FUN_0068b1c0();
          FUN_00401f20(iVar7);
        }
        FUN_0065c620(*piVar2);
      } while ((piVar5[1] != 0) && (bVar3));
      piVar2 = (int *)piVar5[1];
    }
  } while( true );
}



void FUN_00689dc0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  int *piVar10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((param_1 != (int *)0x0) && (cVar4 = FUN_005e3270(), cVar4 == '\0')) {
    uVar5 = FUN_004d8af0(0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
    iVar6 = FUN_009832e6(uVar5);
    puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
    uStack_c = *puVar7;
    uStack_8 = puVar7[1];
    piVar1 = (int *)(in_ECX + 4);
    uStack_4 = puVar7[2];
    piVar2 = piVar1;
    piVar3 = (int *)0x0;
    while ((piVar10 = piVar2, piVar10 != (int *)0x0 && ((piVar10[1] != 0 || (*piVar10 != 0))))) {
      if (piVar3 == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar3;
      }
      if (((iVar9 != 0) && (iVar8 = FUN_0068b0f0(), iVar8 != 0)) &&
         (iVar8 = FUN_004d7630(), iVar8 != 0)) {
        iVar6 = FUN_0042b470();
        puVar7 = (undefined4 *)FUN_006899c0();
        uStack_c = *puVar7;
        uStack_8 = puVar7[1];
        uStack_4 = puVar7[2];
        if ((iVar6 != 0) && (iVar8 = FUN_004f0600(&uStack_c), iVar8 != 0)) {
          iVar6 = 0;
        }
      }
      piVar2 = (int *)piVar10[1];
      piVar3 = piVar10;
      if ((iVar6 != 0) && (iVar8 = FUN_004ca790(), iVar8 != 0)) {
        uVar5 = FUN_0068b110();
        puVar7 = &uStack_c;
        piVar10 = piVar1;
        FUN_004ca790(piVar1,iVar9,puVar7,uVar5);
        FUN_004e97f0(piVar10,iVar9,puVar7,uVar5);
        iVar6 = 0;
      }
    }
  }
  return;
}



int * FUN_00689f00(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
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
  puStack_8 = &LAB_009c528b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff9c;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar3 = (int *)0x0;
  if ((param_1 != (int *)0x0) &&
     ((piVar1 = (int *)(in_ECX + 4), *(int *)(in_ECX + 8) != 0 || (*piVar1 != 0)))) {
    iVar4 = FUN_00401f00(0xdc,uVar2);
    local_4 = 0;
    if (iVar4 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_0070b780(0);
    }
    local_4 = 0xffffffff;
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
    uStack_48 = *puVar5;
    uStack_3c = 0x3f800000;
    uStack_44 = puVar5[1];
    uStack_38 = 0;
    uStack_40 = puVar5[2];
    uStack_34 = 0x3f800000;
    uStack_30 = 0x3f800000;
    iVar4 = FUN_0047fd30(0x41700000,&uStack_3c);
    *(undefined4 *)(iVar4 + 0x54) = uStack_48;
    *(undefined4 *)(iVar4 + 0x58) = uStack_44;
    *(undefined4 *)(iVar4 + 0x5c) = uStack_40;
    (**(code **)(*piVar3 + 0x84))(iVar4,1);
    for (; (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]
        ) {
      puVar5 = (undefined4 *)FUN_0068b110();
      uStack_54 = *puVar5;
      uStack_3c = 0x3f800000;
      uStack_50 = puVar5[1];
      uStack_38 = 0;
      uStack_4c = puVar5[2];
      uStack_34 = 0x3f800000;
      uStack_30 = 0x3f800000;
      iVar4 = FUN_0047fd30(0x41700000,&uStack_3c);
      uStack_2c = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x54) = uStack_54;
      uStack_28 = 0;
      uStack_18 = 0;
      *(undefined4 *)(iVar4 + 0x58) = uStack_50;
      uStack_24 = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x5c) = uStack_4c;
      uStack_20 = 0x3f800000;
      uStack_1c = 0x3f800000;
      uStack_14 = 0x3f800000;
      uStack_10 = 0x3f800000;
      FUN_0047f070(&uStack_48,&uStack_1c,&uStack_54,&uStack_2c);
      (**(code **)(*piVar3 + 0x84))(iVar4,1);
      (**(code **)(*piVar3 + 0x84))(local_4,1);
      iVar4 = FUN_0068b0d0();
      if (iVar4 == 0) break;
      uStack_48 = uStack_54;
      uStack_44 = uStack_50;
      uStack_40 = uStack_4c;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return piVar3;
}



undefined4 FUN_0068a110(void)

{
  int iVar1;
  int in_ECX;
  
  if (((*(int *)(in_ECX + 4) != 0) && (iVar1 = FUN_0068b0d0(), iVar1 == 1)) &&
     (*(int *)(in_ECX + 8) != 0)) {
    return 1;
  }
  return 0;
}



undefined1 FUN_0068a140(void)

{
  undefined1 uVar1;
  int in_ECX;
  
  uVar1 = 1;
  if ((*(int *)(in_ECX + 4) != 0) && (*(int *)(in_ECX + 8) != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 * FUN_0068a160(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    puVar1 = (undefined4 *)FUN_0068b110();
    return puVar1;
  }
  return &DAT_00b3f9a8;
}



undefined4 FUN_0068a180(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    uVar1 = FUN_0068b0f0();
    return uVar1;
  }
  return 0;
}



undefined4 FUN_0068a190(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    uVar1 = FUN_0068b180();
    return uVar1;
  }
  return 0;
}



undefined4 FUN_0068a1a0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    uVar1 = FUN_0068b1a0();
    return uVar1;
  }
  return 0;
}



undefined4 FUN_0068a1b0(void)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  
  for (piVar1 = (int *)(in_ECX + 4); (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0))));
      piVar1 = (int *)piVar1[1]) {
    cVar2 = FUN_0068b0e0();
    if (cVar2 != '\0') {
      uVar3 = FUN_0068b0f0();
      return uVar3;
    }
  }
  return 0;
}



undefined4 FUN_0068a1f0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  
  uVar3 = 0;
  for (piVar1 = (int *)(in_ECX + 4); (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0))));
      piVar1 = (int *)piVar1[1]) {
    iVar2 = FUN_0068b0f0();
    if ((iVar2 != 0) &&
       ((iVar2 = FUN_004d7630(), iVar2 != 0 && (iVar2 = FUN_0042b410(), iVar2 != 0)))) {
      uVar3 = FUN_004d8af0();
    }
  }
  return uVar3;
}



undefined4 * FUN_0068a250(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  piVar3 = (int *)(in_ECX + 4);
  while ((piVar3 != (int *)0x0 &&
         ((piVar1 = (int *)piVar3[1], piVar1 != (int *)0x0 || (*piVar3 != 0))))) {
    iVar2 = *piVar3;
    piVar3 = piVar1;
    if ((iVar2 != 0) && (piVar1 == (int *)0x0)) {
      puVar4 = (undefined4 *)FUN_0068b110();
      return puVar4;
    }
  }
  return &DAT_00b3f9a8;
}



void FUN_0068a280(undefined4 param_1)

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
  iVar2 = FUN_00401f00(8,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_0068b0c0();
  }
  local_4 = 0xffffffff;
  FUN_0068b1d0(1);
  FUN_0068b200(param_1);
  FUN_0067b1e0(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0068a300(int *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int in_ECX;
  float10 fVar11;
  undefined4 uVar12;
  float fStack_2c;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((param_1 == (int *)0x0) || (param_2 <= 0.0)) {
LAB_0068a6ca:
    return (float10)0;
  }
  cVar4 = FUN_005e3350();
  if (cVar4 == '\0') goto LAB_0068a6ca;
  iVar5 = (**(code **)(*param_1 + 0x380))();
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x380))();
    cVar4 = FUN_005e3350();
    if (cVar4 == '\0') goto LAB_0068a6ca;
  }
  if (*(int *)(in_ECX + 4) == 0) {
    pfVar6 = (float *)&DAT_00b3f9a8;
  }
  else {
    pfVar6 = (float *)FUN_0068b110();
  }
  pfVar7 = (float *)(**(code **)(*param_1 + 0x174))();
  fStack_18 = *pfVar6 - *pfVar7;
  fStack_14 = pfVar6[1] - pfVar7[1];
  fStack_10 = pfVar6[2] - pfVar7[2];
  fVar11 = (float10)FUN_005e65b0();
  fVar1 = (float)(fVar11 * (float10)_DAT_00b3a4c8);
  fVar11 = (float10)FUN_00982c30();
  if (param_2 <= (float)fVar11 / fVar1) {
    FUN_0043f350();
    fStack_c = fVar1 * fStack_18;
    fStack_8 = fStack_14 * fVar1;
    fStack_4 = fVar1 * fStack_10;
    fStack_18 = param_2 * fStack_c;
    fStack_14 = fStack_8 * param_2;
    fStack_10 = param_2 * fStack_4;
    pfVar6 = (float *)(**(code **)(*param_1 + 0x174))();
    fStack_24 = fStack_18 + *pfVar6;
    fStack_20 = pfVar6[1] + fStack_14;
    fStack_1c = pfVar6[2] + fStack_10;
    param_2 = 0.0;
    fStack_c = fStack_24;
    fStack_8 = fStack_20;
    fStack_4 = fStack_1c;
  }
  else {
    if (*(int *)(in_ECX + 4) == 0) {
      pfVar6 = (float *)&DAT_00b3f9a8;
    }
    else {
      pfVar6 = (float *)FUN_0068b110();
    }
    fStack_24 = *pfVar6;
    param_2 = param_2 - (float)fVar11 / fVar1;
    fStack_20 = pfVar6[1];
    fStack_1c = pfVar6[2];
  }
  iVar5 = FUN_006ecc80();
  if (iVar5 != 0) {
    cVar4 = FUN_004c97f0();
    if (cVar4 != '\0') goto LAB_0068a615;
  }
  bVar3 = false;
  pfVar6 = (float *)(**(code **)(*param_1 + 0x174))();
  fVar1 = *pfVar6;
  fVar2 = ROUND(fStack_24);
  iVar8 = (**(code **)(*param_1 + 0x174))();
  fStack_2c = (float)(int)ROUND(*(float *)(iVar8 + 4));
  if (((((int)fVar2 ^ (int)ROUND(fVar1)) & 0xfffff000U) != 0) ||
     ((((int)ROUND(fStack_20) ^ (uint)fStack_2c) & 0xfffff000) != 0)) {
    bVar3 = true;
  }
  if (iVar5 == 0) {
    uVar9 = FUN_004d6670(0);
    iVar5 = FUN_0044a270(fStack_24,fStack_20,uVar9,iVar5);
  }
  if ((bVar3) && (*(int *)(DAT_00b333a0 + 0x34) == 0)) {
    iVar8 = FUN_0043f270();
    iVar10 = FUN_004d6670();
    if (iVar8 == iVar10) {
      uVar12 = 0x42000000;
      pfVar6 = &fStack_c;
      pfVar7 = &fStack_24;
      uVar9 = (**(code **)(*param_1 + 0x174))(pfVar7,pfVar6,0x42000000);
      iVar8 = FUN_0043f7c0(uVar9,pfVar7,pfVar6,uVar12);
      if (iVar8 != 0) {
        uVar12 = 0;
        uVar9 = FUN_0043f270(0);
        iVar5 = FUN_0044a270(fStack_c,fStack_8,uVar9,uVar12);
        fStack_24 = fStack_c;
        fStack_20 = fStack_8;
        fStack_1c = fStack_4;
      }
    }
  }
LAB_0068a615:
  iVar8 = (**(code **)(*param_1 + 0x380))();
  FUN_004d8a30(fStack_24,fStack_20,fStack_1c);
  FUN_004d89d0(0x7f7fffff);
  if (iVar8 != 0) {
    FUN_004d8a30(param_2,fStack_24,fStack_20);
    FUN_004d89d0(0x7f7fffff);
  }
  iVar10 = FUN_006ecc80();
  if (iVar5 != iVar10) {
    if (iVar8 != 0) {
      uVar9 = FUN_004d6670();
      FUN_004dd4b0(iVar8,iVar5,uVar9);
    }
    uVar9 = FUN_004d6670();
    FUN_004dd4b0(param_1,iVar5,uVar9);
  }
  return (float10)fStack_2c;
}



uint FUN_0068a6e0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  float10 fVar3;
  
  uVar1 = 1;
  if ((*(int *)(in_ECX + 4) != 0) && (param_1 != 0)) {
    uVar2 = FUN_0068b110();
    fVar3 = (float10)FUN_004d7e30(uVar2);
    uVar1 = CONCAT31((uint3)((float10)*(float *)(in_ECX + 0xc) < fVar3),1);
    if ((uVar1 & 0x100) != 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



float10 FUN_0068a720(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  float10 fVar2;
  undefined4 local_4;
  
  local_4 = 0.0;
  if ((param_1 != 0) && (*(int *)(in_ECX + 4) != 0)) {
    uVar1 = FUN_0068b110();
    fVar2 = (float10)FUN_004d7e30(uVar1);
    local_4 = (float)fVar2;
  }
  return (float10)local_4;
}



float10 FUN_0068a760(int *param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  float local_1c;
  
  local_1c = 0.0;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x174))();
    for (piVar1 = (int *)(in_ECX + 4);
        (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
      FUN_0068b110();
      fVar3 = (float10)FUN_00982c30();
      local_1c = (float)fVar3 + local_1c;
      iVar2 = FUN_0068b0d0();
      if (iVar2 == 1) {
        FUN_0068b110();
      }
      else {
        iVar2 = FUN_0068b0f0();
        if ((iVar2 != 0) && (iVar2 = FUN_004d7630(), iVar2 != 0)) {
          FUN_004d7630();
          FUN_006899c0();
        }
      }
    }
    return (float10)local_1c;
  }
  return (float10)0.0;
}



void FUN_0068a890(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int local_4;
  
  piVar1 = (int *)(in_ECX + 4);
  local_4 = 0;
  iVar2 = local_4;
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    iVar3 = *piVar1;
    piVar1 = (int *)piVar1[1];
    local_4 = iVar2;
    if ((iVar3 != 0) && (iVar3 = FUN_0068b0f0(), iVar3 != 0)) {
      uVar4 = FUN_004d8af0();
      iVar5 = FUN_009832e6(uVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
      if ((((iVar5 == 0) &&
           ((iVar5 = FUN_009832e6(uVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0), iVar5 == 0 ||
            (iVar5 = FUN_004d6670(), iVar5 == 0)))) ||
          ((local_4 = iVar3, param_1 != 0 &&
           ((iVar5 != param_1 && (iVar3 = FUN_004ef1a0(), iVar3 != param_1)))))) &&
         (iVar3 = FUN_004d7630(), local_4 = iVar2, iVar3 != 0)) {
        FUN_0042b410();
        uVar4 = FUN_004d8af0();
        iVar3 = FUN_009832e6(uVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
        if (((iVar3 != 0) ||
            ((iVar3 = FUN_009832e6(uVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0), iVar3 != 0 &&
             (iVar3 = FUN_004d6670(), iVar3 != 0)))) &&
           ((param_1 == 0 || ((iVar3 == param_1 || (iVar3 = FUN_004ef1a0(), iVar3 == param_1)))))) {
          local_4 = FUN_0042b410();
        }
      }
    }
    iVar2 = local_4;
  } while ((local_4 == 0) || (param_2 != '\0'));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0068a9d0(float param_1)

{
  int in_ECX;
  
  if (param_1 < 0.0) {
    param_1 = _DAT_00b3a458;
  }
  *(float *)(in_ECX + 0xc) = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0068a9f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a74edc;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = _DAT_00b3a458;
  *(undefined1 *)(in_ECX + 4) = 1;
  return;
}



void FUN_0068aa10(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a74edc;
  FUN_00689a00();
  return;
}



void FUN_0068aa20(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd8ab;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00689a00(uVar2);
  if (param_1 != 0) {
    piVar5 = (int *)0x0;
    for (piVar1 = (int *)(param_1 + 4);
        (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
      iVar3 = FUN_00401f00(8);
      local_4 = 0;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_0068b0c0();
      }
      local_4 = 0xffffffff;
      FUN_0068b240(*piVar1);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)(in_ECX + 4);
        if (iVar3 != 0) {
          if (*piVar5 != 0) {
            piVar4 = (int *)FUN_00401f00(8);
            if (piVar4 == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              *piVar4 = *piVar5;
              piVar4[1] = 0;
            }
            piVar4[1] = *(int *)(in_ECX + 8);
            *(int **)(in_ECX + 8) = piVar4;
          }
          *piVar5 = iVar3;
        }
      }
      else {
        FUN_0067b1e0(iVar3);
        piVar5 = (int *)piVar5[1];
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



char FUN_0068ab20(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  cVar1 = '\0';
  FUN_00689a00();
  if ((param_1 != 0) && (param_3 != 0)) {
    local_8 = 0;
    local_4 = 0;
    cVar1 = FUN_00680110(param_1,param_2,param_3,param_4,&local_8,param_5);
    if (cVar1 != '\0') {
      FUN_00689a60(&local_8);
    }
    FUN_004526e0();
  }
  FUN_00689c60();
  if (cVar1 != '\0') {
    FUN_0068a280(param_4);
  }
  return cVar1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_0068aba0(int *param_1)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *in_ECX;
  int iVar10;
  int *unaff_FS_OFFSET;
  undefined1 auStack_120 [3];
  char local_11d;
  int local_11c;
  int iStack_118;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c52be;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_120;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffed0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar10 = 0;
  local_11d = '\0';
  if (param_1 == (int *)0x0) goto LAB_0068ada8;
  piVar6 = in_ECX + 1;
  if (in_ECX[1] != 0) {
    local_11c = FUN_0068b0f0(uVar3);
    if (local_11c != 0) {
      iVar4 = FUN_004d7630();
      if (iVar4 != 0) {
        (**(code **)(*in_ECX + 0x10))();
        iVar4 = (**(code **)(*param_1 + 0x380))();
        if (iVar4 != 0) {
          FUN_005f0410();
        }
        iStack_118 = FUN_00401f00(8);
        uStack_4 = 0;
        if (iStack_118 != 0) {
          iVar10 = FUN_0068b0c0();
        }
        uStack_4 = 0xffffffff;
        FUN_0068b240(*piVar6);
        FUN_00689c10();
        iVar4 = FUN_004d8af0();
        cVar1 = FUN_004dd260(param_1,0,0,1);
        if (cVar1 == '\0') {
LAB_0068aca8:
          piVar6 = (int *)FUN_009832e6(param_1[0x16],0,&PTR_PTR_00b05908,&PTR_PTR_00b05924,0);
          if (piVar6 != (int *)0x0) {
            iVar4 = (**(code **)(*piVar6 + 0x47c))();
            if (iVar4 == 4) goto LAB_0068acd7;
          }
          FUN_00446cb0(iVar10);
          FUN_005f7cf0(local_11c,0);
        }
        else {
          iVar5 = FUN_004d8af0();
          if (iVar5 == iVar4) goto LAB_0068aca8;
LAB_0068acd7:
          local_11d = '\x01';
          iVar4 = (**(code **)(*param_1 + 0x380))();
          if (iVar4 != 0) {
            piVar6 = (int *)(**(code **)(*param_1 + 0x380))();
            (**(code **)(*piVar6 + 0x38c))(0);
            (**(code **)(*param_1 + 900))(0);
          }
          if (iVar10 != 0) {
            FUN_0068b1c0();
            FUN_00401f20(iVar10);
          }
        }
        goto LAB_0068ada8;
      }
    }
  }
  FUN_00689c10();
  if ((in_ECX[2] != 0) || (*piVar6 != 0)) {
    uVar2 = (**(code **)(*(int *)param_1[0x16] + 0x2c0))();
    if (*piVar6 == 0) {
      puVar7 = &DAT_00b3f9a8;
    }
    else {
      puVar7 = (undefined4 *)FUN_0068b110();
    }
    (**(code **)(*in_ECX + 0x14))(param_1,puVar7,0);
    (**(code **)(*param_1 + 0x180))(0);
    (**(code **)(*(int *)param_1[0x16] + 0x2c8))(uVar2);
  }
  local_11d = '\x01';
LAB_0068ada8:
  if (DAT_00b333b4 == param_1) {
    pcVar8 = "SUCCESS";
    if (local_11d == '\0') {
      pcVar8 = "FAILED";
    }
    uVar9 = (**(code **)(*param_1 + 0xd4))(pcVar8);
    _sprintf(acStack_114,"Actor \'%s\' MoveToNextLowPathStep: %s.",uVar9);
    FUN_00579b60(acStack_114);
  }
  *unaff_FS_OFFSET = local_c;
  return local_11d;
}



void FUN_0068ae20(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  
  piVar2 = (int *)(in_ECX + 4);
  do {
    piVar1 = piVar2;
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
      goto LAB_0068ae47;
    }
    piVar2 = (int *)piVar1[1];
  } while ((int *)piVar1[1] != (int *)0x0);
  iVar3 = *piVar1;
LAB_0068ae47:
  if ((iVar3 != 0) && (iVar3 = FUN_0068b0d0(), iVar3 == 1)) {
    FUN_0068b200(param_1);
    return;
  }
  FUN_0068a280(param_1);
  return;
}



void FUN_0068ae80(int *param_1)

{
  float fVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *in_ECX;
  float10 fVar6;
  
  piVar3 = param_1;
  if ((param_1 != (int *)0x0) && (cVar4 = FUN_005e3350(), cVar4 != '\0')) {
    iVar5 = FUN_0046b250(0x3a);
    fVar6 = (float10)FUN_00402bd0();
    param_1 = (int *)(float)fVar6;
    fVar6 = (float10)FUN_006599b0();
    if ((float10)(float)param_1 < fVar6) {
      param_1 = (int *)((float)param_1 + 24.0);
    }
    fVar6 = (float10)FUN_006599b0();
    bVar2 = true;
    fVar1 = (3600.0 / *(float *)(iVar5 + 0x24)) * (float)((float10)(float)param_1 - fVar6);
    while ((0.0 < fVar1 && (bVar2))) {
      (**(code **)(*in_ECX + 0x1c))(piVar3,fVar1);
      cVar4 = (**(code **)(*piVar3 + 0x84))();
      if (cVar4 == '\0') {
        if (fVar1 <= 0.0) {
          return;
        }
        cVar4 = FUN_0068aba0(piVar3);
        if (cVar4 == '\0') {
          return;
        }
        cVar4 = (**(code **)(*piVar3 + 0x84))();
        if (cVar4 != '\0') goto LAB_0068af91;
        cVar4 = FUN_006899e0();
        if (cVar4 != '\0') {
          (**(code **)(*piVar3 + 0x180))(1);
          return;
        }
      }
      else {
LAB_0068af91:
        bVar2 = false;
      }
    }
  }
  return;
}



void FUN_0068afb0(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = FUN_006825c0(param_1);
    if (cVar1 != '\0') {
      FUN_00682640(param_1,param_2);
      return;
    }
    FUN_0068ae20(param_2);
  }
  return;
}



void FUN_0068b000(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a74edc;
  FUN_00689a00();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



char FUN_0068b030(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  
  cVar2 = '\0';
  if (param_3 != 0) {
    cVar1 = FUN_004c97f0();
    if (cVar1 == '\0') {
      param_3 = 0;
    }
  }
  iVar3 = 0;
  if (param_3 == 0) {
    if (param_4 == 0) goto LAB_0068b077;
    iVar3 = FUN_004f0600(param_2);
  }
  else {
    iVar3 = FUN_004cbbb0(param_2);
    param_4 = param_3;
  }
  if (iVar3 == 0) {
    iVar3 = param_4;
  }
LAB_0068b077:
  if ((param_1 != (int *)0x0) && (iVar3 != 0)) {
    piVar6 = param_1;
    uVar4 = (**(code **)(*param_1 + 0x174))(iVar3,param_2,param_1);
    uVar5 = FUN_004d8af0(uVar4);
    cVar2 = FUN_0068ab20(uVar5,uVar4,iVar3,param_2,piVar6);
    if (cVar2 != '\0') {
      FUN_00689dc0(param_1);
    }
  }
  return cVar2;
}



void FUN_0068b0c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  *(undefined1 *)(in_ECX + 1) = 0xff;
  return;
}



int FUN_0068b0d0(void)

{
  int in_ECX;
  
  return (int)*(char *)(in_ECX + 4);
}



bool FUN_0068b0e0(void)

{
  int in_ECX;
  
  return *(char *)(in_ECX + 4) == '\0';
}



undefined4 FUN_0068b0f0(void)

{
  undefined4 *in_ECX;
  
  if (*(char *)(in_ECX + 1) == '\0') {
    return *in_ECX;
  }
  return 0;
}



void FUN_0068b100(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  if (*(char *)(in_ECX + 1) == '\0') {
    *in_ECX = param_1;
  }
  return;
}



undefined4 * FUN_0068b110(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int *piVar3;
  
  if ((char)in_ECX[1] == '\0') {
    if (*in_ECX != 0) {
      iVar1 = FUN_004d7630();
      if (iVar1 == 0) {
        if ((char)in_ECX[1] == '\0') {
          piVar3 = (int *)*in_ECX;
        }
        else {
          piVar3 = (int *)0x0;
        }
                    /* WARNING: Could not recover jumptable at 0x0068b175. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x174))();
        return puVar2;
      }
      if ((char)in_ECX[1] == '\0') {
        puVar2 = (undefined4 *)FUN_004d76f0();
        return puVar2;
      }
      puVar2 = (undefined4 *)FUN_004d76f0();
      return puVar2;
    }
  }
  else if (((char)in_ECX[1] == '\x01') && ((undefined4 *)*in_ECX != (undefined4 *)0x0)) {
    return (undefined4 *)*in_ECX;
  }
  return &DAT_00b3f9a8;
}



undefined4 FUN_0068b180(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  if (((char)in_ECX[1] == '\0') && (*in_ECX != 0)) {
    uVar1 = FUN_006ecc80();
    return uVar1;
  }
  return 0;
}



undefined4 FUN_0068b1a0(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  if (((char)in_ECX[1] == '\0') && (*in_ECX != 0)) {
    uVar1 = FUN_004d6670();
    return uVar1;
  }
  return 0;
}



void FUN_0068b1c0(void)

{
  undefined4 *in_ECX;
  
  if (*(char *)(in_ECX + 1) == '\x01') {
    FUN_00401f20(*in_ECX);
  }
  return;
}



void FUN_0068b1d0(int param_1)

{
  undefined4 *in_ECX;
  
  if (*(char *)(in_ECX + 1) != param_1) {
    if (*(char *)(in_ECX + 1) == '\x01') {
      FUN_00401f20(*in_ECX);
    }
    *in_ECX = 0;
    *(char *)(in_ECX + 1) = (char)param_1;
  }
  return;
}



void FUN_0068b200(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  
  if ((char)in_ECX[1] == '\x01') {
    if (*in_ECX == 0) {
      iVar2 = FUN_00401f00(0xc);
      *in_ECX = iVar2;
    }
    puVar1 = (undefined4 *)*in_ECX;
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0068b2a9) */

void FUN_0068b240(undefined4 *param_1)

{
  char cVar1;
  undefined4 *in_ECX;
  
  if (param_1 != (undefined4 *)0x0) {
    cVar1 = *(char *)(param_1 + 1);
    if (*(char *)(in_ECX + 1) != cVar1) {
      if (*(char *)(in_ECX + 1) == '\x01') {
        FUN_00401f20(*in_ECX);
      }
      *in_ECX = 0;
      *(char *)(in_ECX + 1) = cVar1;
    }
    if (*(char *)(param_1 + 1) == '\0') {
      if (*(char *)(in_ECX + 1) == '\0') {
        *in_ECX = *param_1;
      }
    }
    else if (*(char *)(param_1 + 1) == '\x01') {
      param_1 = (undefined4 *)*param_1;
      if (param_1 == (undefined4 *)0x0) {
        param_1 = &DAT_00b3f9a8;
      }
      FUN_0068b200(param_1);
      return;
    }
  }
  return;
}



void FUN_0068b2c0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c52f8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0068a9f0(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a74f3c;
  FUN_0068c040();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0068b320(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c5333;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a74f3c;
  local_4 = 1;
  FUN_0068c6e0(uVar1);
  local_4 = local_4 & 0xffffff00;
  FUN_0068c9b0();
  local_4 = 0xffffffff;
  FUN_0068aa10();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_0068b3f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0042b410();
  if (iVar1 != 0) {
    FUN_0042b410();
    puVar2 = (undefined4 *)FUN_006899c0();
    return puVar2;
  }
  return &DAT_00b3f9a8;
}



void FUN_0068b420(byte param_1)

{
  FUN_0068b320();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0068b440(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int *piVar4;
  undefined4 uVar5;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c5358;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffc0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0068c6e0(uVar1);
  iVar2 = FUN_006ecc80();
  if (iVar2 != 0) {
    FUN_0067d760();
    uVar5 = 0;
    local_4 = 0;
    piVar4 = param_1;
    uVar3 = (**(code **)(*param_1 + 0x174))(param_2,param_1,0);
    FUN_0067eb60(uVar3,param_2,piVar4,uVar5);
    FUN_0067e3d0(in_ECX + 0x14,param_1);
    local_4 = 0xffffffff;
    FUN_0060d0a0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0068b4f0(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  cVar2 = FUN_0068a110();
  if (cVar2 != '\0') {
    param_1 = (int *)_DAT_00b3a460;
    uVar3 = FUN_0068a160();
    cVar2 = FUN_0043f840(uVar3);
    if (cVar2 == '\0') {
      uVar3 = (**(code **)(*piVar1 + 0x174))();
      cVar2 = FUN_0043f840(uVar3);
      if (cVar2 != '\0') {
        param_1 = (int *)0x0;
      }
    }
    uVar3 = FUN_0068a160(param_1);
    uVar3 = (**(code **)(*piVar1 + 0x174))(uVar3);
    iVar4 = FUN_00480520(uVar3);
    if (iVar4 < 0) {
      fStack_c = 3.4028235e+38;
      fStack_8 = 0.0;
      fStack_4 = 0.0;
      iVar4 = FUN_0042b410();
      if (iVar4 != 0) {
        pfVar5 = (float *)FUN_006899c0();
        fStack_c = *pfVar5;
        fStack_8 = pfVar5[1];
        fStack_4 = pfVar5[2];
      }
      FUN_0068aba0(piVar1);
      if ((fStack_c != 3.4028235e+38) && (cVar2 = FUN_0068be10(&fStack_c,5), cVar2 != '\0')) {
        return 1;
      }
      iVar4 = FUN_0042b410();
      if (iVar4 != 0) {
        uVar3 = (**(code **)(*piVar1 + 0x174))();
        FUN_006899c0(uVar3);
        cVar2 = FUN_008aa350(uVar3);
        if (cVar2 != '\0') {
          FUN_0068be80(iVar4,0);
        }
      }
      return 1;
    }
    return 0;
  }
  return 0;
}



void FUN_0068bda0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = FUN_00780d10();
    iVar3 = param_1;
    do {
      iVar2 = FUN_00780d10();
      if (iVar3 != 0) {
        FUN_0060d0a0();
        FUN_00401f20(iVar3);
      }
    } while ((iVar3 != param_2) && (iVar3 = iVar2, iVar2 != 0));
    if (param_1 == *in_ECX) {
      *in_ECX = iVar1;
    }
    if (param_2 == in_ECX[1]) {
      in_ECX[1] = 0;
    }
  }
  return;
}



undefined4 FUN_0068be10(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  
  iVar4 = *in_ECX;
  iVar1 = 0;
  do {
    iVar5 = iVar4;
    if (iVar5 == 0) {
LAB_0068be5a:
      uVar3 = 0;
      if (iVar5 != 0) {
        if (iVar1 != 0) {
          FUN_0068bda0(*in_ECX,iVar1);
        }
        uVar3 = 1;
      }
      return uVar3;
    }
    uVar3 = FUN_006899c0(0x3f800000);
    cVar2 = FUN_0047d810(param_1,uVar3);
    if (cVar2 != '\0') goto LAB_0068be5a;
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      iVar5 = 0;
      goto LAB_0068be5a;
    }
    iVar4 = FUN_00780d10();
    iVar1 = iVar5;
  } while( true );
}



void FUN_0068be80(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  
  if (param_1 != 0) {
    if (param_2 != 0) {
      uVar1 = FUN_00780d10();
      FUN_006a2fd0(uVar1);
    }
    if (param_1 == *in_ECX) {
      iVar2 = FUN_00780d10();
      *in_ECX = iVar2;
    }
    if (param_1 == in_ECX[1]) {
      in_ECX[1] = param_2;
    }
    FUN_0060d0a0();
    FUN_00401f20(param_1);
  }
  return;
}



undefined4 FUN_0068bed0(undefined4 param_1)

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
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0068cb30();
  }
  local_4 = 0xffffffff;
  FUN_0068ca00(param_1);
  if (in_ECX[1] == 0) {
    *in_ECX = uVar3;
  }
  else {
    FUN_006a2fd0(uVar3);
  }
  in_ECX[1] = uVar3;
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



bool FUN_0068bf60(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  *param_2 = 0;
  iVar3 = *in_ECX;
  iVar2 = 0;
  while ((iVar1 = iVar3, iVar1 != 0 && (iVar1 != param_1))) {
    iVar3 = FUN_00780d10();
    iVar2 = iVar1;
  }
  if (iVar1 != 0) {
    *param_2 = iVar2;
  }
  return iVar1 != 0;
}



bool FUN_0068bfb0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  *param_1 = 0;
  *param_2 = 0;
  iVar4 = *in_ECX;
  iVar2 = 0;
  while ((iVar1 = iVar4, iVar1 != 0 && (iVar4 = in_ECX[1], iVar3 = FUN_00780d10(), iVar3 != iVar4)))
  {
    iVar4 = FUN_00780d10();
    iVar2 = iVar1;
  }
  if (iVar1 != 0) {
    *param_1 = iVar2;
    *param_2 = iVar1;
  }
  return iVar1 != 0;
}



uint FUN_0068c010(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  if (*in_ECX != 0) {
    while( true ) {
      uVar2 = uVar2 + 1;
      uVar1 = FUN_00780d10();
      if (uVar1 == 0) break;
      if (param_1 <= uVar2) {
        return uVar1 & 0xffffff00;
      }
    }
  }
  return 1;
}



void FUN_0068c040(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  if (DAT_00b3c09c != 0) {
    DAT_00b3c09c = DAT_00b3c09c + 1;
    return;
  }
  local_10 = 0;
  local_c = 0x3f800000;
  local_4 = 0x3f800000;
  local_8 = 0;
  puVar2 = (undefined4 *)FUN_0047fd30(0x41200000,&local_10);
  puVar1 = DAT_00b3c0a0;
  if (DAT_00b3c0a0 != puVar2) {
    if (((DAT_00b3c0a0 != (undefined4 *)0x0) &&
        (LVar3 = InterlockedDecrement(DAT_00b3c0a0 + 1), LVar3 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b3c0a0 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  DAT_00b3c09c = DAT_00b3c09c + 1;
  return;
}



void FUN_0068c0f0(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  iVar2 = *in_ECX;
  if (param_1 == iVar2) {
    *in_ECX = 0;
    in_ECX[1] = 0;
  }
  iVar3 = 0;
  if (iVar2 == 0) {
    return;
  }
  do {
    iVar1 = iVar2;
    if (iVar1 == param_1) goto LAB_0068c130;
    iVar2 = FUN_00780d10();
    iVar3 = iVar1;
  } while (iVar2 != 0);
LAB_0068c154:
  if (iVar3 != 0) {
    FUN_006a2fd0(0);
    in_ECX[1] = iVar3;
  }
  return;
LAB_0068c130:
  do {
    iVar2 = FUN_00780d10();
    if (param_1 != 0) {
      FUN_0060d0a0();
      FUN_00401f20(param_1);
    }
    param_1 = iVar2;
  } while (iVar2 != 0);
  goto LAB_0068c154;
}



void FUN_0068c170(undefined4 param_1)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_0068bf60(param_1,&local_4);
  if (cVar1 != '\0') {
    FUN_0068be80(param_1,local_4);
  }
  return;
}



void FUN_0068c1b0(void)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  
  iVar6 = *in_ECX;
  while (iVar6 != 0) {
    iVar7 = 0;
    iVar1 = FUN_00780d10();
    if (iVar1 != 0) {
      do {
        pfVar2 = (float *)FUN_006899c0();
        pfVar3 = (float *)FUN_006899c0();
        if (((*pfVar2 == *pfVar3) && (pfVar2[1] == pfVar3[1])) && (pfVar2[2] == pfVar3[2])) {
          iVar7 = iVar1;
        }
        iVar1 = FUN_00780d10();
      } while (iVar1 != 0);
      if (iVar7 != 0) {
        uVar4 = FUN_00780d10();
        uVar5 = FUN_00780d10();
        FUN_006a2fd0(uVar5);
        iVar1 = FUN_00780d10();
        if (iVar1 == 0) {
          FUN_0068c0f0(uVar4);
          in_ECX[1] = iVar6;
        }
        else {
          FUN_0068bda0(uVar4,iVar7);
        }
      }
    }
    iVar6 = FUN_00780d10();
  }
  return;
}



int FUN_0068c280(undefined4 param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b44b6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 == 0) {
    param_2 = FUN_00401f00(0x14,uVar2);
    local_4 = 1;
    if (param_2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0068cb30();
    }
    local_4 = 0xffffffff;
    FUN_0068ca00(param_1);
    if (*in_ECX == 0) {
      in_ECX[1] = iVar3;
    }
    else {
      FUN_006a2fd0(*in_ECX);
    }
    *in_ECX = iVar3;
  }
  else {
    cVar1 = FUN_0068bf60(param_2,&param_2);
    if (cVar1 == '\0') {
      iVar3 = FUN_0068bed0(param_1);
      *unaff_FS_OFFSET = local_c;
      return iVar3;
    }
    param_2 = FUN_00401f00(0x14,uVar2);
    local_4 = 0;
    if (param_2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0068cb30();
    }
    local_4 = 0xffffffff;
    FUN_0068ca00(param_1);
    uVar4 = FUN_00780d10();
    FUN_006a2fd0(uVar4);
    FUN_006a2fd0(iVar3);
  }
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



void FUN_0068c3a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c5396;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar6 = 0;
  if (param_3 != 0) {
    param_3 = 0;
    cVar2 = FUN_0068bf60(iVar1,&param_3);
    if (cVar2 != '\0') {
      iVar4 = FUN_00401f00(0x14,uVar3);
      local_4 = 0;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0068cb30();
      }
      local_4 = 0xffffffff;
      FUN_0068ca00(param_2);
      iVar4 = FUN_00401f00(0x14,uVar3);
      local_4 = 1;
      if (iVar4 != 0) {
        uVar6 = FUN_0068cb30();
      }
      local_4 = 0xffffffff;
      FUN_0068ca00(param_1);
      FUN_006a2fd0(uVar5);
      FUN_006a2fd0(iVar1);
      if (param_3 != 0) {
        FUN_006a2fd0(uVar6);
        *unaff_FS_OFFSET = local_c;
        return;
      }
      *in_ECX = uVar6;
      *unaff_FS_OFFSET = local_c;
      return;
    }
  }
  FUN_0068bed0(param_1);
  FUN_0068bed0(param_2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0068c4e0(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar6 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c53cb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    param_1 = in_ECX[1];
    iVar5 = 0;
    if (param_2 != 0) {
      cVar1 = FUN_0068bf60(param_2,&param_1);
      if (cVar1 != '\0') {
        iVar5 = iVar6;
      }
    }
    cVar1 = (char)param_3;
    do {
      param_3 = FUN_00401f00(0x14,uVar2);
      iVar6 = 0;
      local_4 = 0;
      if (param_3 != 0) {
        iVar6 = FUN_0068cb30();
      }
      local_4 = 0xffffffff;
      uVar3 = FUN_004bef40();
      FUN_0068ca00(uVar3);
      FUN_0068ca30(1);
      if (cVar1 == '\0') {
        uVar3 = FUN_004e8040();
        FUN_0068ca60(uVar3);
      }
      uVar3 = FUN_0067ecf0();
      FUN_0068ca90(uVar3);
      uVar3 = FUN_0067ed20();
      FUN_0068cac0(uVar3);
      FUN_0068cb10(1);
      FUN_006a2fd0(iVar5);
      if (iVar5 == 0) {
        in_ECX[1] = iVar6;
      }
      iVar4 = FUN_00943410();
      iVar5 = iVar6;
    } while (iVar4 != 0);
    if (param_1 == 0) {
      *in_ECX = iVar6;
    }
    else {
      FUN_006a2fd0(iVar6);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



float10 FUN_0068c610(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  float local_10;
  
  local_10 = 0.0;
  if ((*in_ECX != 0) && (param_1 != 0)) {
    uVar1 = FUN_006899c0();
    fVar3 = (float10)FUN_004d7e30(uVar1);
    local_10 = (float)(fVar3 + (float10)0.0);
    iVar2 = FUN_00780d10();
    while (iVar2 != 0) {
      FUN_006899c0();
      FUN_006899c0();
      fVar3 = (float10)FUN_00982c30();
      local_10 = (float)fVar3 + local_10;
      iVar2 = FUN_00780d10();
    }
  }
  return (float10)local_10;
}



void FUN_0068c6e0(void)

{
  undefined4 *in_ECX;
  
  FUN_0068c0f0(*in_ECX);
  return;
}



void FUN_0068c6f0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  FUN_0068c0f0(*in_ECX);
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    while (iVar2 != 0) {
      uVar1 = FUN_006899c0();
      FUN_0068bed0(uVar1);
      iVar2 = FUN_00780d10();
    }
  }
  return;
}



int * FUN_0068c740(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *in_ECX;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *unaff_FS_OFFSET;
  uint local_34;
  undefined4 *local_2c;
  int *local_28;
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c5411;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar9 = 0;
  if (*in_ECX != 0) {
    do {
      uVar8 = uVar9;
      uVar9 = uVar8 + 1;
      iVar2 = FUN_00780d10(uVar1);
    } while (iVar2 != 0);
    if (uVar9 != 0) {
      iVar2 = FUN_00401f00(0xdc);
      local_4 = 0;
      if (iVar2 == 0) {
        local_28 = (int *)0x0;
      }
      else {
        local_28 = (int *)FUN_0070b780(0);
      }
      local_4 = 0xffffffff;
      puVar3 = (undefined4 *)
               FUN_00401f00(-(uint)((int)((ulonglong)uVar9 * 0xc >> 0x20) != 0) |
                            (uint)((ulonglong)uVar9 * 0xc));
      local_2c = (undefined4 *)
                 FUN_00401f00(-(uint)((int)((ulonglong)uVar9 * 0x10 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar9 * 0x10));
      local_4 = 1;
      if (local_2c == (undefined4 *)0x0) {
        local_2c = (undefined4 *)0x0;
      }
      else {
        _vector_constructor_iterator_(local_2c,0x10,uVar9,FUN_0047ea50);
      }
      local_4 = 0xffffffff;
      iVar4 = FUN_00401f00(uVar9);
      iVar2 = *in_ECX;
      local_34 = 0;
      puVar7 = puVar3;
      puVar10 = local_2c;
      if (uVar9 != 0) {
        do {
          if (iVar2 != 0) {
            iVar2 = FUN_00700900();
            puVar5 = (undefined4 *)FUN_006899c0();
            *(undefined4 *)(iVar2 + 0x54) = *puVar5;
            *(undefined4 *)(iVar2 + 0x58) = puVar5[1];
            *(undefined4 *)(iVar2 + 0x5c) = puVar5[2];
            (**(code **)(*local_28 + 0x84))(iVar2,0);
            puVar5 = (undefined4 *)FUN_006899c0();
            *puVar7 = *puVar5;
            puVar7[1] = puVar5[1];
            puVar7[2] = puVar5[2];
            iStack_14 = 0;
            *puVar10 = 0;
            puVar10[1] = 0x3f800000;
            puVar10[2] = 0;
            puVar10[3] = 0x3f800000;
            *(undefined1 *)(local_34 + iVar4) = 1;
            iVar2 = FUN_00780d10();
          }
          local_34 = local_34 + 1;
          puVar7 = puVar7 + 3;
          puVar10 = puVar10 + 4;
        } while (local_34 < uVar9);
      }
      *(undefined1 *)(uVar8 + iVar4) = 0;
      iVar2 = FUN_00401f00(0xc0);
      local_4 = 2;
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_007177e0(uVar9,puVar3,local_2c,0,0,0,iVar4);
      }
      local_4 = 0xffffffff;
      (**(code **)(*local_28 + 0x84))(uVar6,0);
      *unaff_FS_OFFSET = iStack_14;
      return local_28;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return (int *)0x0;
}



void FUN_0068c9b0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  
  FUN_0068c0f0(*in_ECX);
  puVar1 = DAT_00b3c0a0;
  DAT_00b3c09c = DAT_00b3c09c + -1;
  if ((DAT_00b3c09c == 0) && (DAT_00b3c0a0 != (undefined4 *)0x0)) {
    LVar2 = InterlockedDecrement(DAT_00b3c0a0 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b3c0a0 = (undefined4 *)0x0;
  }
  return;
}



void FUN_0068ca00(undefined4 *param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *param_1;
  *(undefined4 *)(in_ECX + 8) = param_1[1];
  *(undefined4 *)(in_ECX + 0xc) = param_1[2];
  return;
}



byte FUN_0068ca20(void)

{
  byte *in_ECX;
  
  return *in_ECX & 1;
}



void FUN_0068ca30(char param_1)

{
  byte *in_ECX;
  
  if (param_1 != '\0') {
    *in_ECX = *in_ECX | 1;
    return;
  }
  *in_ECX = *in_ECX & 0xfe;
  return;
}



byte FUN_0068ca50(void)

{
  byte *in_ECX;
  
  return *in_ECX >> 1 & 1;
}



void FUN_0068ca60(char param_1)

{
  byte *in_ECX;
  
  if (param_1 != '\0') {
    *in_ECX = *in_ECX | 2;
    return;
  }
  *in_ECX = *in_ECX & 0xfd;
  return;
}



byte FUN_0068ca80(void)

{
  byte *in_ECX;
  
  return *in_ECX >> 2 & 1;
}



void FUN_0068ca90(char param_1)

{
  byte *in_ECX;
  
  if (param_1 != '\0') {
    *in_ECX = *in_ECX | 4;
    return;
  }
  *in_ECX = *in_ECX & 0xfb;
  return;
}



byte FUN_0068cab0(void)

{
  byte *in_ECX;
  
  return *in_ECX >> 3 & 1;
}



void FUN_0068cac0(char param_1)

{
  byte *in_ECX;
  
  if (param_1 != '\0') {
    *in_ECX = *in_ECX | 8;
    return;
  }
  *in_ECX = *in_ECX & 0xf7;
  return;
}



byte FUN_0068cae0(void)

{
  byte *in_ECX;
  
  return *in_ECX >> 4 & 1;
}



void FUN_0068caf0(char param_1)

{
  byte *in_ECX;
  
  if (param_1 != '\0') {
    *in_ECX = *in_ECX | 0x10;
    return;
  }
  *in_ECX = *in_ECX & 0xef;
  return;
}



void FUN_0068cb10(char param_1)

{
  byte *in_ECX;
  
  if (param_1 != '\0') {
    *in_ECX = *in_ECX | 0x20;
    return;
  }
  *in_ECX = *in_ECX & 0xdf;
  return;
}



void FUN_0068cb30(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}



void FUN_0068cb40(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  byte *in_ECX;
  float10 fVar7;
  
  if ((*in_ECX >> 5 & 1) != 0) {
    return;
  }
  *in_ECX = *in_ECX & 0xfe;
  iVar5 = *(int *)(DAT_00b333a0 + 0x34);
  if (iVar5 == 0) {
    iVar3 = FUN_0043f270();
    if (iVar3 == 0) goto LAB_0068cc38;
    uVar4 = FUN_0043f270(0);
    iVar5 = FUN_0044a270(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8),uVar4,iVar5);
    if (iVar5 == 0) goto LAB_0068cc38;
  }
  fVar1 = *(float *)(in_ECX + 0xc);
  fVar7 = (float10)FUN_004cace0();
  if ((float10)fVar1 < fVar7) {
    *in_ECX = *in_ECX | 4;
    piVar6 = (int *)FUN_004cafc0();
    if (((piVar6 == (int *)0x0) || (cVar2 = (**(code **)(*piVar6 + 0x88))(), cVar2 == '\0')) ||
       (iVar3 = (**(code **)(*param_1 + 0x284))(0x47), 0 < iVar3)) {
      *in_ECX = *in_ECX & 0xef;
    }
    else {
      *in_ECX = *in_ECX | 0x10;
    }
    cVar2 = FUN_005e06c0(in_ECX + 4,iVar5,0x3f600000);
    if (cVar2 == '\0') {
      *in_ECX = *in_ECX & 0xf7;
      *in_ECX = *in_ECX | 0x20;
      return;
    }
    *in_ECX = *in_ECX | 8;
    *in_ECX = *in_ECX | 0x20;
    return;
  }
  *in_ECX = *in_ECX & 0xe3;
LAB_0068cc38:
  *in_ECX = *in_ECX | 0x20;
  return;
}



void FUN_0068cc50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 auStack_24 [9];
  
  iVar4 = *(int *)(in_ECX + 0x40);
  if ((((iVar4 != 0) && (*(int *)(in_ECX + 0x44) != 0)) &&
      (iVar1 = *(int *)(in_ECX + 0x3c), iVar1 != 0)) &&
     ((*(int *)(in_ECX + 0x48) != 0 && (DAT_00b3c0a4 == '\0')))) {
    uVar8 = *(undefined4 *)(iVar4 + 0x8c);
    uVar2 = *(undefined4 *)(iVar4 + 0x90);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(iVar4 + 0x88);
    *(undefined4 *)(iVar1 + 0x58) = uVar8;
    *(undefined4 *)(iVar1 + 0x5c) = uVar2;
    fVar6 = (float10)FUN_00404c90();
    fVar7 = (float10)FUN_0098598a();
    fVar9 = -(float)fVar7;
    uVar8 = 0;
    fVar7 = (float10)FUN_0098598a(0,fVar9);
    FUN_007118e0((float)fVar7,uVar8,fVar9);
    puVar3 = auStack_24;
    puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x3c) + 0x30);
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar3 = (undefined4 *)FUN_00403c00();
    FUN_007f3300(param_1,(float)fVar6,*puVar3,0);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0068cdfa) */
/* WARNING: Removing unreachable block (ram,0x0068ce04) */
/* WARNING: Removing unreachable block (ram,0x0068ce08) */
/* WARNING: Removing unreachable block (ram,0x0068ce12) */

void FUN_0068cd90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c5464;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006a82f0(param_1,param_2,param_3);
  *in_ECX = &PTR_FUN_00a75044;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  local_4 = 4;
  puVar1 = (undefined4 *)in_ECX[0xf];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[0xf] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x11];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x11] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x10];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x10] = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0068cea0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c5464;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a75044;
  local_4 = 4;
  FUN_007f4420(in_ECX[0xf],in_ECX[0x12],uVar3);
  puVar1 = (undefined4 *)in_ECX[0x12];
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x12] = 0;
  }
  iVar2 = in_ECX[0xf];
  if (iVar2 != 0) {
    if (*(int **)(iVar2 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar2 + 0x1c) + 0x88))(local_14,iVar2);
      if (local_14[0] != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(local_14[0] + 1);
        if ((LVar4 == 0) && (local_14[0] != (undefined4 *)0x0)) {
          (**(code **)*local_14[0])(1);
        }
      }
    }
    puVar1 = (undefined4 *)in_ECX[0xf];
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      in_ECX[0xf] = 0;
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x12];
  local_4._0_1_ = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x11];
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x10];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0xf];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0068d970();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0068d030(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
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
  iVar2 = FUN_00401f00(0x4c,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_0068cd90(in_ECX[9],in_ECX[2],in_ECX[3]);
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(uVar3);
  *unaff_FS_OFFSET = iVar2;
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0068d380(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int in_ECX;
  undefined4 *puVar8;
  int *unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 uVar9;
  int local_20;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cde86;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(0xdc,uVar2);
  puVar8 = (undefined4 *)0x0;
  local_4 = 0;
  if (iVar3 != 0) {
    puVar8 = (undefined4 *)FUN_0070b780(0);
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x3c);
  local_4 = 0xffffffff;
  if (puVar1 != puVar8) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar1 + 1), LVar4 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 **)(in_ECX + 0x3c) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar3 = FUN_006ff9c0(&DAT_00a7d0ec);
  if (iVar3 == 0) {
    iVar3 = FUN_00401f00(0x10,uVar2);
    local_4 = 1;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_006fa820();
    }
    local_4 = 0xffffffff;
    FUN_006ff820(&DAT_00a7d0ec,iVar3);
  }
  *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 1;
  if (*(int **)(in_ECX + 0x20) == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 4))();
  }
  if (*(int **)(in_ECX + 0x24) == (int *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x20))();
  }
  if ((piVar5 != (int *)0x0) && (local_20 != 0)) {
    FUN_006ecc80();
    uVar9 = 3;
    uVar6 = FUN_004c9be0(piVar5,3);
    FUN_006ecc80(uVar6);
    piVar7 = (int *)FUN_00441800(uVar6,uVar9);
    (**(code **)(*piVar7 + 0x84))(*(undefined4 *)(in_ECX + 0x3c),1);
    puVar8 = *(undefined4 **)(in_ECX + 0x48);
    piVar7 = (int *)(in_ECX + 0x48);
    if (puVar8 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar8 + 1);
      if ((LVar4 == 0) && (puVar8 != (undefined4 *)0x0)) {
        (**(code **)*puVar8)(1);
      }
      *piVar7 = 0;
    }
    uVar6 = FUN_007f4d60(*(undefined4 *)(in_ECX + 0x3c),1);
    FUN_0075fa90(uVar6);
    iVar3 = (**(code **)(*unaff_EBP + 0x164))();
    if (iVar3 != 0) {
      uVar6 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x98) + 0x7c) + 0x4c))("Bip01 Spine1");
      FUN_0075fa90(uVar6);
      if (*(int *)(in_ECX + 0x40) == 0) {
        uVar6 = (**(code **)(*piVar5 + 0x154))();
        FUN_0075fa90(uVar6);
      }
    }
    iVar3 = (**(code **)(*piVar5 + 0x164))();
    if (iVar3 != 0) {
      uVar6 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x98) + 0x7c) + 0x4c))("Bip01 Spine1");
      FUN_0075fa90(uVar6);
      if (*(int *)(in_ECX + 0x44) == 0) {
        uVar6 = (**(code **)(*unaff_EBP + 0x154))();
        FUN_0075fa90(uVar6);
      }
    }
    if (*piVar7 != 0) {
      *(undefined4 *)(*piVar7 + 0x13c) = _DAT_00b381f8;
      *(undefined4 *)(*piVar7 + 0x140) = _DAT_00b38200;
      *(undefined4 *)(*piVar7 + 0x150) = _DAT_00b38268;
      *(undefined4 *)(*piVar7 + 0x154) = _DAT_00b38208;
      *(undefined4 *)(*piVar7 + 0x15c) = _DAT_00b38210;
      *(undefined4 *)(*piVar7 + 0x144) = _DAT_00b38218;
      *(undefined4 *)(*piVar7 + 0x148) = _DAT_00b38220;
      *(undefined4 *)(*piVar7 + 0x134) = DAT_00b38228;
      uVar9 = _DAT_00b38240;
      uVar6 = _DAT_00b38238;
      iVar3 = *piVar7;
      *(undefined4 *)(iVar3 + 0x160) = _DAT_00b38230;
      *(undefined4 *)(iVar3 + 0x164) = uVar6;
      *(undefined4 *)(iVar3 + 0x168) = uVar9;
      *(undefined4 *)(iVar3 + 0x16c) = 0x3f800000;
      uVar9 = _DAT_00b38258;
      uVar6 = _DAT_00b38250;
      iVar3 = *piVar7;
      *(undefined4 *)(iVar3 + 0x170) = _DAT_00b38248;
      *(undefined4 *)(iVar3 + 0x174) = uVar6;
      *(undefined4 *)(iVar3 + 0x178) = uVar9;
      *(undefined4 *)(iVar3 + 0x17c) = 0x3f800000;
      *(undefined1 *)(*piVar7 + 0x181) = 0;
      *(undefined1 *)(*piVar7 + 0x183) = 1;
      FUN_007f2ec0();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0068d720(byte param_1)

{
  FUN_0068cea0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0068d740(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_006a86f0();
  if (((*(uint *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x58) >> 1 & 1) != 0) ||
     (*(float *)(in_ECX + 0x1c) == 0.0)) {
    if (*(int *)(in_ECX + 0x24) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00699050();
    }
    FUN_006a84d0(uVar1,-*(float *)(in_ECX + 0x18));
  }
  FUN_006a83d0();
  FUN_0068d380();
  return;
}



void FUN_0068d7a0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a75094;
  in_ECX[2] = param_2;
  uVar1 = (**(code **)(*param_2 + 0x18))();
  in_ECX[1] = 0;
  in_ECX[10] = uVar1;
  in_ECX[3] = param_3;
  *(undefined1 *)(in_ECX + 4) = 0;
  *(undefined1 *)((int)in_ECX + 0x11) = 0;
  *(undefined1 *)((int)in_ECX + 0x12) = 0;
  iVar2 = FUN_00413320();
  in_ECX[6] = (float)iVar2;
  iVar2 = FUN_004133c0();
  in_ECX[9] = param_1;
  in_ECX[8] = 0;
  in_ECX[7] = (float)iVar2;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[5] = 0;
  return;
}



undefined4 FUN_0068d820(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
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
  iVar2 = FUN_00401f00(0x38,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_0068d7a0(in_ECX[9],in_ECX[2],in_ECX[3]);
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(uVar3);
  *unaff_FS_OFFSET = iVar2;
  return uVar3;
}



void FUN_0068d8a0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(in_ECX + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(in_ECX + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(in_ECX + 0x10);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(in_ECX + 0x11);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(in_ECX + 0x12);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(in_ECX + 0x13);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(in_ECX + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(in_ECX + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(in_ECX + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(in_ECX + 0x30);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(in_ECX + 0x14);
  return;
}



bool FUN_0068d900(int param_1)

{
  int in_ECX;
  bool bVar1;
  
  bVar1 = param_1 == *(int *)(in_ECX + 0x24);
  if (bVar1) {
    *(undefined4 *)(in_ECX + 0x24) = 0;
  }
  return bVar1;
}



void FUN_0068d920(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a750d8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_0068d940(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a750d8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0068d970(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[0xd];
  *in_ECX = &PTR_FUN_00a75094;
  for (; (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1])
  {
    iVar2 = *piVar1;
    *(undefined1 *)(iVar2 + 0x24) = 1;
    *(undefined4 *)(iVar2 + 0x18) = 0;
  }
  if (in_ECX[0xd] != 0) {
    FUN_004526e0();
  }
  FUN_00401f20(in_ECX[0xd]);
  if (in_ECX[0xb] != 0) {
    FUN_006b7240();
    iVar2 = in_ECX[0xb];
    if (iVar2 != 0) {
      FUN_006b73e0();
      FUN_00401f20(iVar2);
    }
    in_ECX[0xb] = 0;
  }
  return;
}



undefined4 FUN_0068d9f0(void)

{
  char cVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x30) != 0) &&
     ((cVar1 = *(char *)(*(int *)(in_ECX + 0x30) + 4), cVar1 == '\x14' || (cVar1 == '\x16')))) {
    return 1;
  }
  return 0;
}



undefined4 FUN_0068da10(undefined4 param_1,undefined4 param_2)

{
  FUN_00452570(param_1,param_2);
  return 1;
}



undefined4 FUN_0068da40(void)

{
  int *piVar1;
  short sVar2;
  undefined4 uVar3;
  undefined2 uVar5;
  int in_ECX;
  short local_4;
  int iVar4;
  
  local_4 = 0x1c;
  iVar4 = DAT_00b33b00;
  if (0x29 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    piVar1 = *(int **)(in_ECX + 0x34);
    local_4 = 0x1d;
    for (; (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]
        ) {
      uVar3 = (**(code **)(*(int *)*piVar1 + 0x74))();
      sVar2 = (short)uVar3 + 1;
      iVar4 = CONCAT22((short)((uint)uVar3 >> 0x10),sVar2);
      local_4 = local_4 + sVar2;
    }
  }
  uVar5 = (undefined2)((uint)iVar4 >> 0x10);
  if (0x47 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    local_4 = local_4 + 4;
    return CONCAT22(uVar5,local_4);
  }
  if (0x40 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    local_4 = local_4 + 1;
  }
  return CONCAT22(uVar5,local_4);
}



void FUN_0068dad0(uint param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  int in_ECX;
  char local_11;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  char *local_4;
  
  FUN_0045b9a0(in_ECX + 4,4);
  FUN_0045b9a0(in_ECX + 0x10,1);
  FUN_0045b9a0(in_ECX + 0x11,1);
  FUN_0045b9a0(in_ECX + 0x13,1);
  FUN_0045b9a0(in_ECX + 0x18,4);
  FUN_0045b9a0(in_ECX + 0x1c,4);
  local_10 = 0;
  if (*(int *)(in_ECX + 0x24) != 0) {
    local_10 = FUN_00699c70();
  }
  FUN_0045f7a0(&local_10,4);
  local_c = 0;
  if (*(int *)(in_ECX + 0x20) != 0) {
    local_c = FUN_006a2250();
  }
  FUN_0045f7a0(&local_c,4);
  local_8 = 0;
  if (*(int *)(in_ECX + 0x30) != 0) {
    local_8 = *(undefined4 *)(*(int *)(in_ECX + 0x30) + 0xc);
  }
  FUN_0045f7a0(&local_8,4);
  FUN_0045b9a0(in_ECX + 0x12,1);
  if (0x29 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    local_11 = '\0';
    local_4 = *(char **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_11,1);
    for (piVar1 = *(int **)(in_ECX + 0x34);
        (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
      piVar2 = (int *)*piVar1;
      uVar3 = (**(code **)(*piVar2 + 0x54))();
      param_1 = CONCAT31(param_1._1_3_,uVar3);
      FUN_0045b9a0(&param_1,1);
      (**(code **)(*piVar2 + 0x78))();
      local_11 = local_11 + '\x01';
    }
    *local_4 = local_11;
  }
  if (0x47 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x14,4);
    return;
  }
  if (0x40 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(in_ECX + 0x14)) & 0xffffff01;
    FUN_0045b9a0(&param_1,1);
  }
  return;
}



void FUN_0068dc90(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    uVar3 = FUN_006990e0(*(int *)(in_ECX + 0x24));
    *(undefined4 *)(in_ECX + 0x24) = uVar3;
  }
  iVar1 = *(int *)(in_ECX + 0x20);
  if (iVar1 != 0) {
    uVar3 = FUN_006a1d90(iVar1);
    *(undefined4 *)(in_ECX + 0x20) = uVar3;
  }
  if (iVar1 != 0) {
    uVar3 = FUN_0046b250(*(undefined4 *)(in_ECX + 0x30),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03248,0);
    uVar3 = FUN_009832e6(uVar3);
    *(undefined4 *)(in_ECX + 0x30) = uVar3;
  }
  if (0x29 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    for (piVar2 = *(int **)(in_ECX + 0x34);
        (piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0)))); piVar2 = (int *)piVar2[1]) {
      (**(code **)(*(int *)*piVar2 + 0x80))();
    }
  }
  return;
}



void FUN_0068dd30(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uStack_8;
  undefined4 uStack_4;
  
  uVar2 = param_2;
  piVar1 = param_1;
  if (0x29 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    uStack_8 = (**(code **)(*param_1 + 0xc))(param_2);
    uStack_8 = uStack_8 & 0xffff;
    FUN_0045b9a0(&uStack_8,2);
  }
  uStack_4 = FUN_00419a20();
  FUN_0045f7a0(&uStack_4,4);
  uVar3 = FUN_00414d50(piVar1[3]);
  param_1 = (int *)CONCAT31(param_1._1_3_,uVar3);
  FUN_0045b9a0(&param_1,1);
  (**(code **)(*piVar1 + 0x10))(uVar2);
  return;
}



short FUN_0068ddc0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  undefined4 uVar5;
  short sVar6;
  short local_4;
  
  local_4 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    local_4 = 6;
  }
  local_4 = local_4 + 2;
  for (; (param_1 != (int *)0x0 && ((param_1[1] != 0 || (*param_1 != 0))));
      param_1 = (int *)param_1[1]) {
    sVar6 = 0;
    if (0x29 < *(byte *)(DAT_00b33b00 + 0x7c)) {
      sVar6 = 2;
    }
    sVar3 = (**(code **)(*(int *)*param_1 + 0xc))(param_2);
    local_4 = local_4 + sVar3 + sVar6 + 5;
  }
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar4 = (int *)FUN_0046b250(*puVar1);
      uVar5 = (**(code **)(*piVar4 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0x353,".\\Magic\\ActiveEffect.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,local_4,*puVar1,uVar5);
      return local_4;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",local_4,0x353,
                 ".\\Magic\\ActiveEffect.cpp");
  }
  return local_4;
}



void FUN_0068deb0(int *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  char cVar6;
  int *piVar7;
  undefined4 uVar8;
  int local_14;
  int local_10;
  short *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_10 = *(int *)(DAT_00b33b00 + 0x14);
  local_c = (short *)0x0;
  cVar6 = FUN_0045a170();
  if (cVar6 != '\0') {
    local_8 = 0x4b4f4c42;
    FUN_0045b9a0(&local_8,4);
    local_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_4,2);
  }
  local_14 = 0;
  puVar1 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&local_14,2);
  for (; (param_1 != (int *)0x0 && ((param_1[1] != 0 || (*param_1 != 0))));
      param_1 = (int *)param_1[1]) {
    FUN_0068dd30(*param_1,param_2);
    local_14 = local_14 + 1;
  }
  *puVar1 = (undefined2)local_14;
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar3 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar3 - local_10,0x36b,
                   ".\\Magic\\ActiveEffect.cpp");
    }
    else {
      piVar7 = (int *)FUN_0046b250(*puVar2);
      uVar8 = (**(code **)(*piVar7 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0x36b,".\\Magic\\ActiveEffect.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar3 - local_10,*puVar2,uVar8);
    }
  }
  cVar6 = FUN_0045a170();
  psVar5 = local_c;
  if (cVar6 != '\0') {
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_c + 0xffffU < uVar4) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\Magic\\ActiveEffect.cpp",0x36b);
    }
    *psVar5 = (short)uVar4 - (short)psVar5;
  }
  return;
}



void FUN_0068e030(int *param_1,undefined4 param_2)

{
  for (; (param_1 != (int *)0x0 && ((param_1[1] != 0 || (*param_1 != 0))));
      param_1 = (int *)param_1[1]) {
    (**(code **)(*(int *)*param_1 + 0x18))(param_2);
  }
  return;
}



void FUN_0068e060(int *param_1,int param_2)

{
  for (; (param_1 != (int *)0x0 && ((param_1[1] != 0 || (*param_1 != 0))));
      param_1 = (int *)param_1[1]) {
    (**(code **)(*(int *)*param_1 + 0x1c))(param_2);
  }
  if ((param_2 != 0) && (*(int **)(param_2 + 0x58) != (int *)0x0)) {
    (**(code **)(**(int **)(param_2 + 0x58) + 0x42c))(param_2,1,1,1);
  }
  return;
}



void FUN_0068e0b0(int *param_1,undefined4 param_2)

{
  for (; (param_1 != (int *)0x0 && ((param_1[1] != 0 || (*param_1 != 0))));
      param_1 = (int *)param_1[1]) {
    (**(code **)(*(int *)*param_1 + 0x20))(param_2);
  }
  return;
}



void FUN_0068e0e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c5488;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a75114;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a750d8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0068e150(byte param_1)

{
  FUN_0068e0e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0068e170(float param_1)

{
  uint uVar1;
  int in_ECX;
  float10 fVar2;
  
  uVar1 = *(uint *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x58);
  if (((uVar1 & 0x180) == 0x180) || (param_1 == 1.0)) {
    return;
  }
  if ((uVar1 >> 8 & 1) != 0) {
    *(float *)(in_ECX + 0x1c) = param_1 * *(float *)(in_ECX + 0x1c);
    return;
  }
  fVar2 = (float10)FUN_00404f70(param_1 * *(float *)(in_ECX + 0x18));
  if (1.0 <= (float)fVar2) {
    *(float *)(in_ECX + 0x18) = (float)fVar2;
    return;
  }
  *(undefined4 *)(in_ECX + 0x18) = 0x3f800000;
  return;
}



void FUN_0068e210(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int in_ECX;
  byte bVar7;
  uint uStack_10;
  
  iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x88);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0xc);
  }
  if (((iVar4 != 0) && (*(int *)(in_ECX + 0x20) != 0)) &&
     (iVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x18))(), iVar3 != 4)) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_006a1d70();
    }
    iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + 0x1c);
    iVar2 = *(int *)(iVar1 + 0x88);
    bVar7 = (byte)(*(uint *)(iVar1 + 0x58) >> 10);
    uStack_10 = CONCAT31(uStack_10._1_3_,bVar7) & 0xffffff01;
    if (iVar2 != 0) {
      bVar7 = (byte)(*(uint *)(iVar2 + 0x3c) >> 4);
      uStack_10 = CONCAT31(uStack_10._1_3_,bVar7) & 0xffffff01;
    }
    if (iVar3 == 0) {
      piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 4))();
      if (((piVar5 != (int *)0x0) && (*(int *)(DAT_00b33398 + 0x24) != 0)) &&
         (iVar4 = FUN_006ae0a0(iVar4,0x102,0), iVar4 != 0)) {
        puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x174))();
        FUN_006b7360(*puVar6,puVar6[1],puVar6[2]);
        FUN_006b7190(uStack_10);
        return;
      }
    }
    else {
      iVar4 = FUN_0065ac50(iVar4,uStack_10,0x102,0);
      if (iVar4 != 0) {
        if ((bVar7 & 1) != 0) {
          if (*(int *)(in_ECX + 0x2c) != 0) {
            FUN_006b7240();
            iVar3 = *(int *)(in_ECX + 0x2c);
            if (iVar3 != 0) {
              FUN_006b73e0();
              FUN_00401f20(iVar3);
            }
            *(undefined4 *)(in_ECX + 0x2c) = 0;
          }
          *(int *)(in_ECX + 0x2c) = iVar4;
          return;
        }
        FUN_006b73e0();
        FUN_00401f20(iVar4);
      }
    }
  }
  return;
}



void FUN_0068e3a0(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_ECX;
  int *piVar4;
  int *unaff_FS_OFFSET;
  byte local_22;
  char local_21;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c54c6;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004534d0(in_ECX + 4,4);
  FUN_004534d0(in_ECX + 0x10,1);
  FUN_004534d0(in_ECX + 0x11,1);
  FUN_004534d0(in_ECX + 0x13,1);
  FUN_004534d0(in_ECX + 0x18,4);
  FUN_004534d0(in_ECX + 0x1c,4);
  FUN_0045ba00(&local_1c,4);
  *(undefined4 *)(in_ECX + 0x24) = local_1c;
  FUN_0045ba00(&local_18,4);
  *(undefined4 *)(in_ECX + 0x20) = local_18;
  FUN_0045ba00(&local_14,4);
  *(undefined4 *)(in_ECX + 0x30) = local_14;
  FUN_004534d0(in_ECX + 0x12,1);
  if (0x29 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(&local_22,1);
    local_20 = 0;
    if (local_22 != 0) {
      do {
        FUN_004534d0(&local_21,1);
        piVar4 = (int *)0x0;
        if (local_21 == '\x05') {
          local_10 = FUN_00401f00(0x38);
          local_4 = 0;
          if (local_10 == 0) {
LAB_0068e52f:
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = (int *)FUN_0069e350();
          }
LAB_0068e531:
          local_4 = 0xffffffff;
        }
        else {
          if (local_21 == '\x06') {
            local_10 = FUN_00401f00(0x4c);
            local_4 = 1;
            if (local_10 == 0) goto LAB_0068e52f;
            piVar4 = (int *)FUN_006a0700();
            goto LAB_0068e531;
          }
          FUN_004a7a60("Unknown magic hit effect type: %i",local_21);
        }
        (**(code **)(*piVar4 + 0x7c))();
        piVar1 = *(int **)(in_ECX + 0x34);
        if (piVar1 == (int *)0x0) {
          puVar2 = (undefined4 *)FUN_00401f00(8);
          if (puVar2 == (undefined4 *)0x0) {
            *(undefined4 *)(in_ECX + 0x34) = 0;
          }
          else {
            *puVar2 = piVar4;
            puVar2[1] = 0;
            *(undefined4 **)(in_ECX + 0x34) = puVar2;
          }
        }
        else {
          if (*piVar1 != 0) {
            piVar3 = (int *)FUN_00401f00(8);
            if (piVar3 == (int *)0x0) {
              piVar3 = (int *)0x0;
            }
            else {
              *piVar3 = *piVar1;
              piVar3[1] = 0;
            }
            piVar3[1] = piVar1[1];
            piVar1[1] = (int)piVar3;
          }
          *piVar1 = (int)piVar4;
        }
        local_20 = local_20 + 1;
      } while (local_20 < local_22);
    }
  }
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x48) {
    if (0x40 < *(byte *)(DAT_00b33b00 + 0x7c)) {
      FUN_004534d0(&param_1,1);
      if ((char)param_1 != '\0') {
        *(uint *)(in_ECX + 0x14) = *(uint *)(in_ECX + 0x14) | 6;
      }
    }
  }
  else {
    FUN_004534d0(in_ECX + 0x14,4);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0068e600(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  if (0x29 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    for (piVar1 = *(int **)(in_ECX + 0x34);
        (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
      piVar2 = (int *)*piVar1;
      (**(code **)(*piVar2 + 0x84))();
      FUN_00678d30(piVar2);
    }
  }
  if ((*(uint *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x58) >> 10 & 1) != 0) {
    FUN_0068e210();
  }
  return;
}



void FUN_0068e670(float param_1)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  float10 extraout_ST0;
  float10 fVar6;
  
  if ((param_1 <= 0.0) || (*(char *)((int)in_ECX + 0x11) != '\0')) goto LAB_0068e9aa;
  if ((char)in_ECX[4] == '\0') {
    iVar4 = (**(code **)(*(int *)in_ECX[8] + 4))();
    if ((iVar4 == DAT_00b333c4) && (cVar2 = FUN_00578f60(), cVar2 != '\0')) {
      in_ECX[5] = in_ECX[5] | 0x20;
    }
    else {
      FUN_0068e210();
    }
    (**(code **)(*in_ECX + 0x38))();
    if ((*(char *)((int)in_ECX + 0x11) == '\0') && (*(char *)((int)in_ECX + 0x12) == '\0')) {
      if (((*(byte *)(in_ECX + 5) & 1) == 0) &&
         ((*(uint *)(*(int *)(in_ECX[3] + 0x1c) + 0x58) >> 0x1b & 1) == 0)) {
        if (in_ECX[10] == 4) {
          iVar4 = FUN_0041b950(*(undefined4 *)(*(int *)(in_ECX[3] + 0x1c) + 0x98));
          if ((iVar4 == 0) || (100.0 <= (float)in_ECX[6])) goto LAB_0068e7df;
          if (in_ECX[10] == 4) {
            in_ECX[5] = in_ECX[5] | 4;
          }
        }
        iVar4 = (**(code **)(*(int *)in_ECX[2] + 0x18))();
        if ((iVar4 == 8) && (in_ECX[2] != 0)) {
          iVar4 = in_ECX[2] + -0x24;
        }
        else {
          iVar4 = 0;
        }
        iVar5 = (**(code **)(*(int *)in_ECX[2] + 0x18))();
        if ((iVar5 == 7) && (in_ECX[2] != 0)) {
          iVar5 = in_ECX[2] + -0x24;
        }
        else {
          iVar5 = 0;
        }
        if (iVar4 == 0) {
          if (iVar5 != 0) {
            bVar3 = FUN_00484320();
            goto LAB_0068e78e;
          }
        }
        else {
          bVar3 = *(byte *)(iVar4 + 0x7c) >> 1 & 1;
LAB_0068e78e:
          if (bVar3 != 0) goto LAB_0068e7df;
        }
        iVar4 = (**(code **)(*(int *)in_ECX[8] + 4))();
        if ((iVar4 == DAT_00b333c4) && (cVar2 = FUN_00578f60(), cVar2 != '\0')) {
          in_ECX[5] = in_ECX[5] | 0x40;
        }
        else {
          if (in_ECX[0xd] != 0) {
            FUN_004526e0();
            FUN_00401f20(in_ECX[0xd]);
            in_ECX[0xd] = 0;
          }
          iVar4 = FUN_0069d9f0();
          in_ECX[0xd] = iVar4;
        }
      }
LAB_0068e7df:
      iVar4 = (**(code **)(*(int *)in_ECX[8] + 4))();
      if (iVar4 == DAT_00b333c4) {
        FUN_00589b70(0x3ec);
        FUN_005898f0();
        FUN_005a7cd0(in_ECX,0);
      }
      *(undefined1 *)(in_ECX + 4) = 1;
      in_ECX[1] = 0;
    }
  }
  fVar6 = (float10)param_1;
  if ((*(char *)((int)in_ECX + 0x11) == '\0') && (*(char *)((int)in_ECX + 0x12) == '\0')) {
    if ((in_ECX[10] == 4) ||
       (((in_ECX[10] == 1 || (cVar2 = FUN_0068d9f0(), fVar6 = extraout_ST0, cVar2 != '\0')) ||
        (extraout_ST0 + (float10)(float)in_ECX[1] <= (float10)(float)in_ECX[7])))) {
      fVar6 = fVar6 + (float10)(float)in_ECX[1];
    }
    else {
      param_1 = (float)in_ECX[7] - (float)in_ECX[1];
      fVar6 = (float10)(float)in_ECX[7];
    }
    in_ECX[1] = (int)(float)fVar6;
    iVar4 = (**(code **)(*(int *)in_ECX[8] + 4))();
    if ((iVar4 == DAT_00b333c4) && (cVar2 = FUN_00578f60(), cVar2 == '\0')) {
      if (((uint)in_ECX[5] >> 6 & 1) != 0) {
        if (in_ECX[0xd] != 0) {
          FUN_004526e0();
          FUN_00401f20(in_ECX[0xd]);
          in_ECX[0xd] = 0;
        }
        iVar4 = FUN_0069d9f0();
        in_ECX[5] = in_ECX[5] & 0xffffffbf;
        in_ECX[0xd] = iVar4;
      }
      if (((uint)in_ECX[5] >> 5 & 1) != 0) {
        FUN_0068e210();
        in_ECX[5] = in_ECX[5] & 0xffffffdf;
      }
    }
    (**(code **)(*in_ECX + 8))(param_1);
    if (((*(char *)((int)in_ECX + 0x11) == '\0') && (*(char *)((int)in_ECX + 0x12) == '\0')) &&
       (iVar4 = (**(code **)(*(int *)in_ECX[8] + 4))(), iVar4 == DAT_00b333c4)) {
      FUN_00589b70(0x3ec);
      FUN_005898f0();
      FUN_005a7cd0(in_ECX,0);
    }
    if ((((in_ECX[10] != 4) && (in_ECX[10] != 1)) && (cVar2 = FUN_0068d9f0(), cVar2 == '\0')) &&
       (((*(uint *)(*(int *)(in_ECX[3] + 0x1c) + 0x58) >> 7 & 1) != 0 ||
        ((float)in_ECX[7] < (float)in_ECX[1] != ((float)in_ECX[7] == (float)in_ECX[1]))))) {
      *(undefined1 *)((int)in_ECX + 0x11) = 1;
    }
    cVar2 = (**(code **)(*(int *)in_ECX[8] + 0xc))();
    if (((cVar2 != '\0') && (in_ECX[8] != 0)) &&
       ((piVar1 = (int *)(in_ECX[8] + -0x68), piVar1 != (int *)0x0 &&
        ((cVar2 = (**(code **)(*piVar1 + 0x198))(1), cVar2 != '\0' &&
         ((*(uint *)(*(int *)(in_ECX[3] + 0x1c) + 0x58) >> 0x1c & 1) == 0)))))) {
      *(undefined1 *)((int)in_ECX + 0x11) = 1;
    }
  }
LAB_0068e9aa:
  if ((((char)in_ECX[4] != '\0') && (*(char *)((int)in_ECX + 0x11) != '\0')) &&
     (*(char *)((int)in_ECX + 0x12) == '\0')) {
    if (((int *)in_ECX[8] != (int *)0x0) &&
       (iVar4 = (**(code **)(*(int *)in_ECX[8] + 4))(), iVar4 == DAT_00b333c4)) {
      FUN_00589b70(0x3ec);
      FUN_005898f0();
      FUN_005a7cd0(in_ECX,1);
    }
    (**(code **)(*in_ECX + 0x3c))();
    *(undefined1 *)((int)in_ECX + 0x12) = 1;
    if (in_ECX[0xb] != 0) {
      FUN_006b7240();
    }
  }
  return;
}



void FUN_0068ea10(char param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x11) = 1;
  if (param_1 != '\0') {
    FUN_0068e670(0);
  }
  return;
}



void FUN_0068ea30(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_004146e0(param_1);
  *in_ECX = &PTR_FUN_00a75158;
  return;
}



int FUN_0068ea50(undefined4 param_1,undefined4 param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  bool bVar6;
  undefined4 uVar7;
  undefined1 local_50 [28];
  undefined1 local_34 [40];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = (undefined4 *)param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c555b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffac;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(*(int *)((int)param_3 + 0x1c) + 0x98) == 0x46464553) {
    param_3 = (code *)FUN_00401f00(0x40,uVar4);
    local_4 = 0;
    if (param_3 == (code *)0x0) {
      *unaff_FS_OFFSET = local_c;
      return 0;
    }
    iVar5 = FUN_006a4420(param_1,param_2,puVar2);
    *unaff_FS_OFFSET = local_c;
    return iVar5;
  }
  uVar7 = *(undefined4 *)param_3;
  param_3 = (code *)0x0;
  cVar3 = FUN_0055e000(uVar7,&param_3);
  if ((cVar3 != '\0') && (param_3 != (code *)0x0)) {
    iVar5 = (*param_3)(param_1,param_2,puVar2);
    goto LAB_0068ed7a;
  }
  iVar5 = puVar2[7];
  iVar1 = *(int *)(iVar5 + 0x98);
  if (iVar1 < 0x48535247) {
    if (iVar1 == 0x48535246) {
LAB_0068eb9d:
      param_3 = (code *)FUN_00401f00(0x40,uVar4);
      local_4 = 5;
      if (param_3 != (code *)0x0) {
        iVar5 = FUN_006a4870(param_1,param_2,puVar2);
        goto LAB_0068ed7a;
      }
    }
    else {
      if (iVar1 < 0x45484242) {
        if ((iVar1 == 0x45484241) || (iVar1 == 0x41464241)) goto LAB_0068ed4a;
        if (iVar1 == 0x41505543) {
          param_3 = (code *)FUN_00401f00(0x40,uVar4);
          local_4 = 4;
          if (param_3 != (code *)0x0) {
            iVar5 = FUN_00692980(param_1,param_2,puVar2,0x41524150);
            goto LAB_0068ed7a;
          }
          goto LAB_0068ed78;
        }
        if (iVar1 == 0x444c4853) goto LAB_0068eb9d;
      }
      else if ((iVar1 == 0x48534946) || (iVar1 == 0x4853494c)) goto LAB_0068eb9d;
LAB_0068ec58:
      if ((*(uint *)(iVar5 + 0x58) >> 0x12 & 1) == 0) {
        if (((*(byte *)(iVar5 + 0x5a) & 1) == 0) && ((*(uint *)(iVar5 + 0x58) >> 0x11 & 1) == 0)) {
          if ((*(uint *)(iVar5 + 0x58) & 0x1180000) == 0) {
            FUN_00414750("Could not Activate unregistered effect!");
            local_4 = 9;
            FUN_0068ea30(local_50);
                    /* WARNING: Subroutine does not return */
            __CxxThrowException_8(local_34,&DAT_00aedcb4);
          }
          param_3 = (code *)FUN_00401f00(0x3c,uVar4);
          local_4 = 8;
          if (param_3 != (code *)0x0) {
            iVar5 = FUN_006a82f0(param_1,param_2,puVar2);
            goto LAB_0068ed7a;
          }
        }
        else {
          param_3 = (code *)FUN_00401f00(0x8c,uVar4);
          local_4 = 7;
          if (param_3 != (code *)0x0) {
            iVar5 = FUN_0068fc60(param_1,param_2,puVar2);
            goto LAB_0068ed7a;
          }
        }
      }
      else {
        param_3 = (code *)FUN_00401f00(100,uVar4);
        local_4 = 6;
        if (param_3 != (code *)0x0) {
          iVar5 = FUN_006a51d0(param_1,param_2,puVar2);
          goto LAB_0068ed7a;
        }
      }
    }
  }
  else if (iVar1 < 0x4f505544) {
    if (iVar1 == 0x4f505543) {
      param_3 = (code *)FUN_00401f00(0x40,uVar4);
      local_4 = 3;
      if (param_3 != (code *)0x0) {
        uVar7 = 5;
LAB_0068ec09:
        iVar5 = FUN_00692940(param_1,param_2,puVar2,uVar7);
        goto LAB_0068ed7a;
      }
    }
    else {
      if (iVar1 != 0x49445543) {
        bVar6 = iVar1 == 0x4b534241;
        goto LAB_0068ec52;
      }
      param_3 = (code *)FUN_00401f00(0x40,uVar4);
      local_4 = 2;
      if (param_3 != (code *)0x0) {
        uVar7 = 1;
        goto LAB_0068ec09;
      }
    }
  }
  else {
    if (iVar1 != 0x50534241) {
      bVar6 = iVar1 == 0x54414241;
LAB_0068ec52:
      if (!bVar6) goto LAB_0068ec58;
    }
LAB_0068ed4a:
    param_3 = (code *)FUN_00401f00(0x4c,uVar4);
    local_4 = 1;
    if (param_3 != (code *)0x0) {
      iVar5 = FUN_0068cd90(param_1,param_2,puVar2);
      goto LAB_0068ed7a;
    }
  }
LAB_0068ed78:
  iVar5 = 0;
LAB_0068ed7a:
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0x30) = param_4;
  }
  *unaff_FS_OFFSET = local_c;
  return iVar5;
}



int * FUN_0068eda0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint unaff_EBX;
  uint local_c;
  uint local_8;
  undefined4 local_4;
  
  local_c = 0x1c;
  if (0x29 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(&local_c,2);
  }
  FUN_0045ba00(&local_4,4);
  FUN_004534d0(&local_8,1);
  iVar1 = *(int *)(DAT_00b33b00 + 0x14);
  iVar2 = FUN_004199c0(local_4);
  if (iVar2 != 0) {
    iVar3 = FUN_00414d80(local_8);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_0068ea50(0,iVar2,iVar3,0);
      (**(code **)(*piVar4 + 0x14))(param_1);
      uVar5 = *(int *)(DAT_00b33b00 + 0x14) - iVar1;
      if (uVar5 != (unaff_EBX & 0xffff)) {
        *(uint *)(DAT_00b33b00 + 0x14) =
             ((unaff_EBX & 0xffff) - uVar5) + *(int *)(DAT_00b33b00 + 0x14);
      }
      return piVar4;
    }
  }
  FUN_00452170(local_c & 0xffff);
  FUN_004a7a60("Could not load active effect with spell %08X and effect index %i",local_4,
               local_8 & 0xff);
  return (int *)0x0;
}



void FUN_0068ee90(int *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ushort auStack_14 [2];
  uint local_10;
  int local_c;
  float local_8;
  int local_4;
  
  local_10 = 0;
  local_c = 0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    FUN_004534d0(&local_4,4);
    if (local_4 != 0x4b4f4c42) {
      puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\Magic\\ActiveEffect.cpp",0x373,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar4 = (int *)FUN_0046b250(*puVar1);
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\Magic\\ActiveEffect.cpp",0x373,*puVar1,uVar5);
      }
    }
    local_c = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_10,2);
  }
  local_8 = 0.0;
  FUN_00589b70(0x3ec,0,&PTR_PTR_00b0a018,&PTR_PTR_00b0a064,0);
  uVar5 = FUN_005898f0();
  iVar6 = FUN_009832e6(uVar5);
  for (piVar4 = param_1; (piVar4 != (int *)0x0 && ((piVar4[1] != 0 || (*piVar4 != 0))));
      piVar4 = (int *)piVar4[1]) {
    puVar1 = (undefined4 *)*piVar4;
    iVar7 = FUN_009832e6(puVar1,0,&PTR_PTR_00b14914,&PTR_PTR_00b159ec,0);
    if (iVar7 != 0) {
      local_8 = (float)puVar1[6];
    }
    if ((param_2 == DAT_00b333c4) && (iVar6 != 0)) {
      FUN_005a7cd0(puVar1,1);
    }
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  iVar6 = param_1[1];
  while (iVar6 != 0) {
    iVar6 = *(int *)(param_1[1] + 4);
    FUN_00401f20(param_1[1]);
    param_1[1] = iVar6;
  }
  *param_1 = 0;
  FUN_004534d0(auStack_14,2);
  iVar6 = 0;
  if (auStack_14[0] != 0) {
    do {
      iVar7 = FUN_0068eda0(param_2);
      iVar8 = FUN_009832e6(iVar7,0,&PTR_PTR_00b14914,&PTR_PTR_00b159ec,0);
      if ((((iVar8 != 0) && (param_2 != 0)) && (*(int **)(param_2 + 0x58) != (int *)0x0)) &&
         (*(float *)(iVar7 + 0x18) != local_8)) {
        (**(code **)(**(int **)(param_2 + 0x58) + 0x31c))(1);
      }
      if (iVar7 != 0) {
        FUN_00416650(iVar7,&LAB_006a25e0);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)auStack_14[0]);
  }
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar2 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar9 = local_10 & 0xffff;
      if (uVar9 + local_c < uVar2) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar2 - uVar9) - local_c,".\\Magic\\ActiveEffect.cpp",0x39f,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar2 < uVar9 + local_c) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar9 - uVar2) + local_c,".\\Magic\\ActiveEffect.cpp",0x39f,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar4 = (int *)FUN_0046b250(*puVar1);
      iVar6 = local_c;
      uVar9 = (local_10 & 0xffff) + local_c;
      if (uVar9 < uVar2) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar2 - (local_10 & 0xffff)) - iVar6,".\\Magic\\ActiveEffect.cpp",0x39f,
                     *puVar1,uVar5);
        return;
      }
      if (uVar2 < uVar9) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_10 & 0xffff) - uVar2) + iVar6,".\\Magic\\ActiveEffect.cpp",0x39f,
                     *puVar1,uVar5);
        return;
      }
    }
  }
  return;
}



void FUN_0068f1f0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  FUN_0068d8a0(param_1);
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b14914,&PTR_PTR_00b15a1c,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(in_ECX + 0x38);
  }
  return;
}



short FUN_0068f230(undefined4 param_1)

{
  short sVar1;
  
  sVar1 = FUN_0068da40(param_1);
  return sVar1 + 4;
}



void FUN_0068f250(undefined4 param_1)

{
  int in_ECX;
  
  FUN_0068e3a0(param_1);
  FUN_0045ba00(&param_1,4);
  *(undefined4 *)(in_ECX + 0x38) = param_1;
  return;
}



void FUN_0068f280(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_0068dc90(param_1);
  if (*(int *)(in_ECX + 0x38) != 0) {
    uVar1 = FUN_0046b250(*(int *)(in_ECX + 0x38));
    *(undefined4 *)(in_ECX + 0x38) = uVar1;
  }
  return;
}



void FUN_0068f2b0(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c57e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0068d7a0(param_1,param_2,param_3);
  *in_ECX = &PTR_FUN_00a751d4;
  local_4 = 0;
  uVar2 = FUN_0046b250(*(undefined4 *)(*(int *)(param_3 + 0x1c) + 0x60),uVar1);
  in_ECX[0xe] = uVar2;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0068f340(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
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
  iVar2 = FUN_00401f00(0x3c,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_0068f2b0(in_ECX[9],in_ECX[2],in_ECX[3]);
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))(uVar3);
  *unaff_FS_OFFSET = iVar2;
  return uVar3;
}



void FUN_0068f3c0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_0068dad0(param_1);
  param_1 = 0;
  if (*(int *)(in_ECX + 0x38) != 0) {
    param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x38) + 0xc);
  }
  FUN_0045f7a0(&param_1,4);
  return;
}



void FUN_0068f400(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_00897230(param_1);
  *in_ECX = &PTR_FUN_00a75244;
  in_ECX[0x78] = &PTR_LAB_00a75234;
  in_ECX[0x7c] = &PTR_LAB_00a75218;
  in_ECX[0xf4] = param_2;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0068f450(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b4 [4];
  int *piStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int *local_9c;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 auStack_84 [17];
  int *piStack_40;
  int *piStack_38;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009c55b8;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_b4;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff40;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_98 = param_1;
  uVar5 = 0;
  iVar3 = FUN_008afce0(*(undefined4 *)(param_1 + 0x20),uVar2);
  if (iVar3 != 0) {
    uVar5 = FUN_004dc270(iVar3);
  }
  local_9c = (int *)FUN_009832e6(uVar5,0,&PTR_PTR_00b03054,&PTR_PTR_00b05b7c,0);
  piVar6 = (int *)0x0;
  if (local_9c == (int *)0x0) {
    local_9c = *(int **)(in_ECX + 0x1e0);
  }
  cVar1 = (**(code **)(*local_9c + 0x210))();
  if (cVar1 == '\0') goto LAB_0068f93e;
  piStack_b0 = (int *)0x0;
  iVar3 = FUN_008afce0(*(undefined4 *)(param_1 + 0x28),uVar2);
  if (iVar3 != 0) {
    piStack_b0 = (int *)FUN_004dc270(iVar3);
    if (piStack_b0 != (int *)0x0) {
      cVar1 = (**(code **)(*piStack_b0 + 400))();
      if (cVar1 != '\0') {
        piVar6 = piStack_b0;
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if ((*(char *)(iVar3 + 0x18) == '\x02') && (*(int *)(iVar3 + 0x10) + iVar3 != 0)) {
    if (piVar6 == (int *)0x0) goto LAB_0068f93e;
    cVar1 = (**(code **)(*piVar6 + 0x198))(0);
    if (cVar1 != '\0') goto LAB_0068f93e;
    if ((int *)piVar6[0x16] != (int *)0x0) {
      iVar3 = (**(code **)(*(int *)piVar6[0x16] + 0x2e4))();
      if (iVar3 != 0) {
        iVar3 = (**(code **)(*(int *)piVar6[0x16] + 0x2e4))();
        if (iVar3 != 6) goto LAB_0068f93e;
      }
    }
    iVar3 = (**(code **)(*piVar6 + 0x18c))();
    if (iVar3 == 4) goto LAB_0068f93e;
    iVar3 = (**(code **)(*piVar6 + 0x18c))();
    if (iVar3 == 9) goto LAB_0068f93e;
  }
  if ((piStack_b0 == (int *)0x0) || (piStack_b0 != *(int **)(DAT_00b333c4 + 0x578))) {
    if (piVar6 != (int *)0x0) {
      cVar1 = FUN_005e8eb0();
      if (cVar1 != '\0') goto LAB_0068f93e;
    }
    if (DAT_00b15a68 != '\0') {
      FUN_00532210(param_1);
      piVar6 = piStack_40;
      if (*piStack_40 == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = *(int **)(*piStack_40 + 8);
      }
      if (piVar7 != (int *)0x0) {
        uStack_ac = FUN_00401f00(0xdc);
        iVar3 = 0;
        uStack_14 = 0;
        if (uStack_ac != 0) {
          iVar3 = FUN_0070b780(0);
        }
        uStack_14 = 0xffffffff;
        (**(code **)(*piVar7 + 0x90))(iVar3);
        FUN_00607740(auStack_84,piVar6[2]);
        puVar8 = auStack_84;
        puVar9 = (undefined4 *)(iVar3 + 0x30);
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        FUN_0043f3e0(&uStack_a8,piStack_40[2] + 0x30);
        *(undefined4 *)(iVar3 + 0x54) = uStack_a8;
        *(undefined4 *)(iVar3 + 0x58) = uStack_a4;
        *(undefined4 *)(iVar3 + 0x5c) = uStack_a0;
        uVar5 = FUN_004e70b0();
        FUN_00405680(uVar5);
        uStack_ac = FUN_00401f00(0x1c);
        uStack_14 = 1;
        if (uStack_ac == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_004059d0();
        }
        *(ushort *)(iVar4 + 0x18) = *(ushort *)(iVar4 + 0x18) | 1;
        uStack_14 = 0xffffffff;
        FUN_00405680(iVar4);
        FUN_00440e60(iVar3,0x42480000);
        param_1 = local_98;
      }
      piVar6 = piStack_38;
      if (*piStack_38 == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = *(int **)(*piStack_38 + 8);
      }
      if (piVar7 != (int *)0x0) {
        uStack_ac = FUN_00401f00(0xdc);
        uStack_14 = 2;
        if (uStack_ac == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_0070b780(0);
        }
        uStack_14 = 0xffffffff;
        (**(code **)(*piVar7 + 0x90))(iVar3);
        FUN_00607740(auStack_84,piVar6[2]);
        puVar8 = auStack_84;
        puVar9 = (undefined4 *)(iVar3 + 0x30);
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        FUN_0043f3e0(&uStack_a8,piStack_38[2] + 0x30);
        *(undefined4 *)(iVar3 + 0x54) = uStack_a8;
        *(undefined4 *)(iVar3 + 0x58) = uStack_a4;
        *(undefined4 *)(iVar3 + 0x5c) = uStack_a0;
        uVar5 = FUN_004e70b0();
        FUN_00405680(uVar5);
        uStack_ac = FUN_00401f00(0x1c);
        uStack_14 = 3;
        if (uStack_ac == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_004059d0();
        }
        *(ushort *)(iVar4 + 0x18) = *(ushort *)(iVar4 + 0x18) | 1;
        uStack_14 = 0xffffffff;
        FUN_00405680(iVar4);
        FUN_00440e60(iVar3,0x42480000);
        param_1 = local_98;
      }
    }
    FUN_0043f3e0(&uStack_a8,param_1);
    if (DAT_00b15a68 != '\0') {
      uStack_94 = 0x3f800000;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0x3f800000;
      iVar3 = FUN_0047fd30(0x40a00000,&uStack_94);
      uVar5 = FUN_004e70b0();
      FUN_00405680(uVar5);
      *(undefined4 *)(iVar3 + 0x54) = uStack_a8;
      *(undefined4 *)(iVar3 + 0x58) = uStack_a4;
      *(undefined4 *)(iVar3 + 0x5c) = uStack_a0;
      FUN_00440e60(iVar3,0x42480000);
    }
    iVar3 = local_9c[0x1a];
    uStack_ac = uStack_ac & 0xffffff00;
    piVar6 = (int *)0x0;
    if (piStack_b0 != (int *)0x0) {
      cVar1 = (**(code **)(*piStack_b0 + 400))();
      if (cVar1 != '\0') {
        uStack_ac = CONCAT31(uStack_ac._1_3_,1);
        piVar6 = piStack_b0;
      }
    }
    if (iVar3 != 0) {
      iVar3 = FUN_00699050();
      if (iVar3 != 0) {
        FUN_00677760(iVar3,uStack_a8,uStack_a4,uStack_a0,uStack_ac,piVar6);
      }
    }
    iVar3 = *(int *)(local_98 + 0x28);
    if ((*(char *)(iVar3 + 0x18) == '\x01') && (iVar3 = *(int *)(iVar3 + 0x10) + iVar3, iVar3 != 0))
    {
      uVar5 = *(undefined4 *)(iVar3 + 0xc);
    }
    else {
      uVar5 = 0;
    }
    (**(code **)(*local_9c + 0x208))(uStack_a8,uStack_a4,uStack_a0,uVar5,piStack_b0,0);
  }
LAB_0068f93e:
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_0068f970(void)

{
  return;
}



void FUN_0068fa00(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  
  if (in_ECX[3] != 0) {
    uVar2 = (**(code **)(*(int *)in_ECX[3] + 0x154))();
    iVar3 = FUN_009832e6(uVar2,0,&PTR_PTR_00b03100,&PTR_PTR_00b07288,0);
    if (iVar3 != 0) {
      FUN_004a01b0(2);
    }
  }
  piVar1 = (int *)in_ECX[4];
  if (((piVar1 != (int *)0x0) && (iVar3 = piVar1[2], iVar3 != 0)) && (iVar3 != -0x14)) {
    *(int *)(iVar3 + 0x30) = in_ECX[5];
  }
  (**(code **)(*piVar1 + 0x80))();
  FUN_008a63a0(in_ECX);
  FUN_008a6300(in_ECX + 1);
  FUN_008a6350(in_ECX + 2);
  (**(code **)(*in_ECX + 0x10))(1);
  return;
}



void FUN_0068fa90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
  }
  iVar2 = 0;
  if (0 < *(int *)(iVar3 + 0xa4)) {
    do {
      iVar1 = FUN_009832e6(*(undefined4 *)(*(int *)(iVar3 + 0xa0) + iVar2 * 4),0,&PTR_PTR_00b15a70,
                           &PTR_PTR_00b15a9c,0);
      if (iVar1 != 0) {
        FUN_0068fa00(iVar3);
        iVar2 = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar3 + 0xa4));
  }
  return;
}



void FUN_0068faf0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c563e;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = in_ECX + 1;
  *puVar1 = &PTR_LAB_00a46684;
  puVar2 = in_ECX + 2;
  *puVar2 = &PTR_LAB_00a752f0;
  *in_ECX = &PTR_FUN_00a75328;
  *puVar1 = &PTR_LAB_00a75310;
  *puVar2 = &PTR_LAB_00a75300;
  in_ECX[5] = 0;
  in_ECX[3] = param_1;
  local_4 = 2;
  in_ECX[4] = param_2;
  in_ECX[5] = param_3;
  *(undefined1 *)(in_ECX + 6) = 0;
  if ((param_2 != 0) && (*(int *)(param_2 + 8) != 0)) {
    FUN_008a6630(in_ECX);
  }
  if ((in_ECX[4] != 0) && (*(int *)(in_ECX[4] + 8) != 0)) {
    FUN_008a6550(puVar1);
  }
  if ((in_ECX[4] != 0) && (*(int *)(in_ECX[4] + 8) != 0)) {
    FUN_008a65c0(puVar2);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0068fbf0(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (in_ECX == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = in_ECX + 2;
  }
  *puVar1 = &PTR_LAB_00a752f0;
  if (in_ECX == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = in_ECX + 1;
  }
  *puVar1 = &PTR_LAB_00a46684;
  *in_ECX = &PTR_LAB_00a2fc50;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0068fc60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_0068f2b0(param_1,param_2,param_3);
  in_ECX[0xf] = 0;
  *in_ECX = &PTR_FUN_00a75344;
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
  *(undefined1 *)(in_ECX + 0x21) = 0;
  *(undefined1 *)((int)in_ECX + 0x85) = 0;
  *(undefined1 *)((int)in_ECX + 0x86) = 0;
  *(undefined1 *)((int)in_ECX + 0x87) = 0;
  *(undefined1 *)(in_ECX + 0x22) = 0;
  return;
}



void FUN_0068fdf0(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  short *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0068f3c0(param_1);
  local_4 = 0;
  iVar1 = *(int *)(DAT_00b33b00 + 0x14);
  local_c = (short *)0x0;
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    local_8 = 0x4b4f4c42;
    FUN_0045b9a0(&local_8,4);
    local_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_4,2);
  }
  uVar3 = param_1;
  param_1 = param_1 & 0xffffff00;
  if (*(int *)(in_ECX + 0x3c) != 0) {
    param_1._1_3_ = SUB43(uVar3,1);
    param_1 = CONCAT31(param_1._1_3_,1);
  }
  FUN_0045b9a0(&param_1,1);
  if ((char)param_1 != '\0') {
    FUN_00485730();
  }
  piVar5 = (int *)(in_ECX + 0x40);
  iVar7 = 0x10;
  do {
    uVar3 = param_1;
    param_1 = param_1 & 0xffffff00;
    if (*piVar5 != 0) {
      param_1._1_3_ = SUB43(uVar3,1);
      param_1 = CONCAT31(param_1._1_3_,1);
    }
    FUN_0045b9a0(&param_1,1);
    if ((char)param_1 != '\0') {
      FUN_00485730();
    }
    piVar5 = piVar5 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (0x40 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x80,4);
    FUN_0045b9a0(in_ECX + 0x84,1);
  }
  if (0x6a < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x88,1);
  }
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar7 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar7 - iVar1,0x2db,
                   ".\\Magic\\BoundItemEffect.cpp");
    }
    else {
      piVar5 = (int *)FUN_0046b250(*puVar2);
      uVar6 = (**(code **)(*piVar5 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0x2db,".\\Magic\\BoundItemEffect.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar7 - iVar1,*puVar2,uVar6);
    }
  }
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    uVar3 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_c + 0xffffU < uVar3) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\Magic\\BoundItemEffect.cpp",0x2db);
    }
    *local_c = (short)uVar3 - (short)local_c;
  }
  return;
}



void FUN_0068ffe0(undefined4 param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int in_ECX;
  int iVar9;
  int *unaff_FS_OFFSET;
  char *pcVar10;
  uint local_1c;
  int iStack_18;
  int local_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c5676;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0068f250(param_1);
  iVar9 = 0;
  local_1c = 0;
  cVar3 = FUN_0045a170(uVar4);
  if (cVar3 != '\0') {
    FUN_004534d0(&local_14,4);
    if (local_14 != 0x4b4f4c42) {
      puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar2 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\Magic\\BoundItemEffect.cpp",0x2e4,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar5 = (int *)FUN_0046b250(*puVar2);
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\Magic\\BoundItemEffect.cpp",0x2e4,*puVar2,uVar6);
      }
    }
    iVar9 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_1c,2);
  }
  FUN_004534d0(&param_1,1);
  if ((char)param_1 != '\0') {
    iStack_18 = FUN_00401f00(0xc);
    uStack_4 = 0;
    if (iStack_18 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_004842d0();
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x3c) = uVar6;
    FUN_004858d0();
  }
  piVar5 = (int *)(in_ECX + 0x40);
  iStack_18 = 0x10;
  do {
    FUN_004534d0(&param_1,1);
    if ((char)param_1 != '\0') {
      iStack_10 = FUN_00401f00(0xc);
      uStack_4 = 1;
      if (iStack_10 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004842d0();
      }
      uStack_4 = 0xffffffff;
      *piVar5 = iVar7;
      FUN_004858d0();
      iVar7 = *piVar5;
      if (*(int *)(iVar7 + 8) == 0) {
        if (iVar7 != 0) {
          FUN_00484470();
          FUN_00401f20(iVar7);
        }
        *piVar5 = 0;
      }
    }
    piVar5 = piVar5 + 1;
    iStack_18 = iStack_18 + -1;
  } while (iStack_18 != 0);
  *(undefined1 *)(in_ECX + 0x84) = 1;
  if (0x40 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x80,4);
    FUN_004534d0((undefined1 *)(in_ECX + 0x84),1);
  }
  if (0x6a < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x88,1);
  }
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      uVar8 = local_1c & 0xffff;
      if (uVar8 + iVar9 < uVar4) {
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar9 = (uVar4 - uVar8) - iVar9;
        pcVar10 = 
        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      else {
        if (uVar8 + iVar9 <= uVar4) goto LAB_006902f3;
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar9 = (uVar8 - uVar4) + iVar9;
        pcVar10 = 
        "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      FUN_004a7a60(pcVar10,iVar9,".\\Magic\\BoundItemEffect.cpp",0x30c,uVar1);
    }
    else {
      piVar5 = (int *)FUN_0046b250(*puVar2);
      uVar8 = (local_1c & 0xffff) + iVar9;
      if (uVar8 < uVar4) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar4 - (local_1c & 0xffff)) - iVar9,".\\Magic\\BoundItemEffect.cpp",0x30c,
                     *puVar2,uVar6);
      }
      else if (uVar4 < uVar8) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_1c & 0xffff) - uVar4) + iVar9,".\\Magic\\BoundItemEffect.cpp",0x30c,
                     *puVar2,uVar6);
      }
    }
  }
LAB_006902f3:
  *unaff_FS_OFFSET = local_c;
  return;
}


