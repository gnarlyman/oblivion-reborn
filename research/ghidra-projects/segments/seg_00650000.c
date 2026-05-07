
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00650030(int *param_1)

{
  undefined1 uVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *in_ECX;
  float10 fVar10;
  undefined4 in_stack_ffffffdc;
  undefined4 uStack_8;
  float fStack_4;
  
  iVar5 = (**(code **)(*in_ECX + 0x184))();
  if ((((int *)in_ECX[0x48] == (int *)0x0) ||
      (iVar6 = (**(code **)(*(int *)in_ECX[0x48] + 0x154))(), iVar6 == 0)) &&
     ((iVar5 == 0 || (*(char *)(iVar5 + 0x20) != '\x1b')))) {
    return 0;
  }
  cVar3 = (**(code **)(*in_ECX + 0x304))();
  if ((cVar3 != '\0') && (cVar3 = (**(code **)(*in_ECX + 0x210))(), cVar3 == '\0')) {
    (**(code **)(*in_ECX + 0x300))(0);
    return 1;
  }
  in_ECX[0xc] = 0;
  iVar5 = (**(code **)(*param_1 + 0x164))();
  uVar7 = FUN_005e0ee0();
  if (uVar7 < 10) {
    return 1;
  }
  cVar3 = '\0';
  if ((int *)in_ECX[0x48] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x48] + 0x170))();
    cVar3 = FUN_004ae5d0(*(undefined1 *)((int)in_ECX + 0x136));
  }
  if (*(char *)((int)in_ECX + 0x11d) == '\0') {
    if ((cVar3 != '\0') && ((in_ECX[2] == 0 || (*(char *)(in_ECX[2] + 0x20) != '\x1b')))) {
      (**(code **)(*in_ECX + 0x588))(param_1,0,0);
    }
    (**(code **)(*in_ECX + 0x2c4))(0x400,0);
    if (param_1 != DAT_00b333c4) {
      (**(code **)(*in_ECX + 0x194))(param_1);
    }
    cVar4 = (**(code **)(*param_1 + 0x358))();
    if ((cVar4 == '\0') && (cVar4 = FUN_004d72c0((char)in_ECX[0x49]), cVar4 != '\0')) {
      (**(code **)(*in_ECX + 0x370))(param_1,0,0,0x7f);
      return 1;
    }
    cVar4 = (**(code **)(*param_1 + 0x358))();
    if (cVar4 == '\0') {
      if (cVar3 == '\0') {
        (**(code **)(*in_ECX + 0x370))(param_1,1,in_ECX[0x48],(char)in_ECX[0x49]);
      }
      else {
        (**(code **)(*in_ECX + 0x370))(param_1,6,in_ECX[0x48],(char)in_ECX[0x49]);
      }
      cVar4 = (**(code **)(*in_ECX + 900))(param_1);
      if (cVar4 == '\0') {
        FUN_004a7a60("Missing furniture dynamic idle for marker %d in the editor\'s idle manager.",
                     *(undefined1 *)((int)in_ECX + 0x136));
      }
    }
    if (cVar3 == '\0') {
      (**(code **)(*in_ECX + 0x370))(param_1,2,in_ECX[0x48],(char)in_ECX[0x49]);
    }
    else {
      (**(code **)(*in_ECX + 0x370))(param_1,7,in_ECX[0x48],(char)in_ECX[0x49]);
    }
    iVar6 = FUN_00521450(param_1,in_ECX[0x48]);
    if (iVar6 == 0) {
      *(undefined1 *)((int)in_ECX + 0x11d) = 0;
      return 0;
    }
    uVar8 = FUN_00520200();
    FUN_00475300(iVar6,uVar8);
    (**(code **)(*param_1 + 0x1cc))(in_ECX + 0x4a);
    *(undefined4 *)(iVar5 + 0xc) = DAT_00b3f9a8;
    *(undefined4 *)(iVar5 + 0x10) = DAT_00b3f9ac;
    *(undefined4 *)(iVar5 + 0x14) = DAT_00b3f9b0;
    in_stack_ffffffdc = 0x6502db;
    FUN_004d7300((char)in_ECX[0x49],1);
    FUN_0065ac20(1);
  }
  switch(*(undefined1 *)((int)in_ECX + 0x11d)) {
  case 2:
  case 7:
    fVar2 = (float)*(ushort *)(in_ECX + 0x4d) / 1000.0;
    uStack_8 = 0;
    fVar10 = (float10)FUN_00683d80(param_1,fVar2,&uStack_8);
    fStack_4 = (float)_DAT_00b36c18 * 0.017453292;
    if (fStack_4 < ABS((float)fVar10)) {
      FUN_00685530(param_1,fVar2,1);
      return 1;
    }
    FUN_005e05f0(0x30);
    (**(code **)(*param_1 + 0x1e8))(fVar2);
    (**(code **)(*param_1 + 0x1cc))(in_ECX + 0x4a);
    *(undefined4 *)(iVar5 + 0xc) = DAT_00b3f9a8;
    *(undefined4 *)(iVar5 + 0x10) = DAT_00b3f9ac;
    *(undefined4 *)(iVar5 + 0x14) = DAT_00b3f9b0;
    if (cVar3 != '\0') {
      (**(code **)(*in_ECX + 0x370))(param_1,8,in_ECX[0x48],(char)in_ECX[0x49]);
      return 1;
    }
    uVar1 = (undefined1)in_ECX[0x49];
    iVar5 = in_ECX[0x48];
    iVar6 = *in_ECX;
    uVar8 = 3;
    break;
  case 3:
  case 8:
    cVar4 = FUN_004711f0();
    if (((cVar4 != '\0') && (iVar6 = (**(code **)(*in_ECX + 0x2d0))(), iVar6 == -1)) &&
       ((iVar6 = FUN_004706e0(0), iVar6 == 0 ||
        (iVar6 = FUN_004706e0(0), *(int *)(iVar6 + 0x44) == 1)))) {
      *(undefined1 *)(iVar5 + 0xc4) = 1;
      *(undefined4 *)(iVar5 + 0xc) = DAT_00b3f9a8;
      *(undefined4 *)(iVar5 + 0x10) = DAT_00b3f9ac;
      *(undefined4 *)(iVar5 + 0x14) = DAT_00b3f9b0;
      (**(code **)(*param_1 + 0x1cc))(in_ECX + 0x4a);
      FUN_00477e50(param_1);
      FUN_005fcab0(0x3f800000,0x3f800000);
      *(undefined1 *)(iVar5 + 0xc4) = 1;
      return 1;
    }
    cVar4 = FUN_00472ea0();
    if (cVar4 == '\0') {
      return 1;
    }
    cVar4 = (**(code **)(*param_1 + 0x358))();
    if (cVar4 != '\0') {
      (**(code **)(*in_ECX + 0x370))(param_1,0,0,0x7f);
      FUN_0065ac20(0);
      return 0;
    }
    (**(code **)(*(int *)in_ECX[0x48] + 0x170))(*(undefined1 *)((int)in_ECX + 0x136));
    fVar10 = (float10)FUN_004aebe0(in_stack_ffffffdc);
    FUN_00659b90((float)fVar10);
    *(undefined1 *)(iVar5 + 0xc4) = 1;
    if (cVar3 == '\0') {
      (**(code **)(*in_ECX + 0x370))(param_1,4,in_ECX[0x48],(char)in_ECX[0x49]);
      FUN_005e7230(0,0);
      return 1;
    }
    piVar9 = (int *)FUN_005e12b0();
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0x9c))(1,0);
    }
    uVar1 = (undefined1)in_ECX[0x49];
    iVar5 = in_ECX[0x48];
    iVar6 = *in_ECX;
    uVar8 = 9;
    break;
  default:
    goto switchD_00650302_caseD_4;
  }
  (**(code **)(iVar6 + 0x370))(param_1,uVar8,iVar5,uVar1);
switchD_00650302_caseD_4:
  return 1;
}



uint FUN_006505d0(int *param_1,int param_2)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  
  if ((((param_1 == (int *)0x0) || (in_EAX = param_1[2], (in_EAX >> 5 & 1) != 0)) ||
      ((in_EAX >> 0xe & 1) != 0)) || (in_EAX = in_EAX >> 0xb, (in_EAX & 1) != 0)) {
    return in_EAX & 0xffffff00;
  }
  if (param_2 == 0) goto LAB_006506ac;
  in_EAX = FUN_00446c30(param_1);
  if ((char)in_EAX != '\0') goto LAB_006506ac;
  in_EAX = FUN_004d74b0();
  if ((char)in_EAX == '\0') goto LAB_006506ac;
  in_EAX = FUN_004db9a0();
  if ((char)in_EAX == '\0') goto LAB_006506ac;
  iVar1 = FUN_004db6b0();
  if (iVar1 != 0) {
    in_EAX = FUN_004de770(param_2,1);
    if ((char)in_EAX == '\0') goto LAB_006506ac;
  }
  uVar2 = FUN_004d8af0();
  in_EAX = FUN_004d8af0();
  if (uVar2 != in_EAX) goto LAB_006506ac;
  (**(code **)(*param_1 + 0x170))();
  if (DAT_00b3ba80 == '\0') {
LAB_00650696:
    in_EAX = FUN_004ae5a0();
    if ((char)in_EAX == '\0') goto LAB_006506ac;
  }
  else {
    in_EAX = FUN_004ae590();
    if ((char)in_EAX == '\0') {
      if (DAT_00b3ba80 != '\0') goto LAB_006506ac;
      goto LAB_00650696;
    }
  }
  in_EAX = FUN_00446cb0(param_1);
LAB_006506ac:
  return in_EAX & 0xffffff00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006506c0(int *param_1)

{
  code *pcVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  
  if ((char)in_ECX[0x34] == '\0') {
    pcVar1 = *(code **)(*in_ECX + 0x194);
    in_ECX[0x2e] = 0;
    (*pcVar1)(param_1);
  }
  if (in_ECX[0xb] == 0) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  if ((int *)in_ECX[0xb] != (int *)0x0) {
    uVar4 = (**(code **)(*(int *)in_ECX[0xb] + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b05480,0);
    iVar5 = FUN_009832e6(uVar4);
    if (iVar5 != 0) {
      iVar5 = FUN_004d7740();
      if (iVar5 != 0) {
        cVar3 = FUN_00428e70();
        if (cVar3 != '\0') goto LAB_00650749;
      }
      (**(code **)(*in_ECX + 0x188))(param_1,1);
    }
  }
LAB_00650749:
  iVar5 = (**(code **)(*param_1 + 0x164))();
  if (iVar5 != 0) {
    cVar3 = FUN_00472ea0();
    if (cVar3 != '\0') {
      iVar5 = (**(code **)(*(int *)param_1[0x16] + 8))();
      if (iVar5 == 0) {
        (**(code **)(*in_ECX + 0x48))(param_1);
      }
    }
  }
  fVar2 = _DAT_00b33e9c + (float)in_ECX[0x2e];
  in_ECX[0x2e] = (int)fVar2;
  if (30.0 <= fVar2) {
    FUN_005eae70();
    in_ECX[0x2e] = 0;
  }
  return;
}



void FUN_006507c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *in_ECX;
  float10 fVar4;
  
  if (in_ECX[0x48] != 0) {
    FUN_004d7300((char)in_ECX[0x49],0);
    piVar2 = (int *)FUN_005e12b0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x9c))(0,0);
    }
    (**(code **)(*in_ECX + 0x370))(param_1,0,in_ECX[0x48],0x7f);
    uVar3 = (uint)*(byte *)((int)in_ECX + 0x136);
    (**(code **)(*(int *)in_ECX[0x48] + 0x170))(uVar3);
    fVar4 = (float10)FUN_004aebe0(uVar3);
    FUN_00659b90((float)-fVar4);
    iVar1 = *param_1;
    fVar4 = (float10)(**(code **)(iVar1 + 0x1e0))();
    (**(code **)(iVar1 + 0x1e8))((float)(fVar4 + (float10)3.1415927410125732));
    FUN_006faee0(0);
    *(undefined1 *)((int)in_ECX + 0x136) = 0;
    in_ECX[0x4a] = DAT_00b3f9a8;
    in_ECX[0x4b] = DAT_00b3f9ac;
    in_ECX[0x4c] = DAT_00b3f9b0;
    in_ECX[0x48] = 0;
    FUN_0065ac20(0);
    return;
  }
  (**(code **)(*in_ECX + 0x564))(param_1);
  return;
}



void FUN_00650a00(void)

{
  code *pcVar1;
  int iVar2;
  int *in_ECX;
  int *unaff_EBX;
  
  (**(code **)(*in_ECX + 0xbc))(0);
  (**(code **)(*in_ECX + 0xc4))(1);
  pcVar1 = *(code **)(*in_ECX + 0x350);
  in_ECX[0xb] = 0;
  (*pcVar1)();
  in_ECX[0x52] = 0;
  if (in_ECX[0x11] != 0) {
    FUN_00401f20(in_ECX[0x11]);
  }
  in_ECX[0x11] = 0;
  *(undefined1 *)((int)in_ECX + 0x169) = 0;
  while ((in_ECX[0x10] != 0 || (in_ECX[0xf] != 0))) {
    iVar2 = in_ECX[0xf];
    if (iVar2 != 0) {
      FUN_00401f20(iVar2);
    }
    FUN_0065c620(iVar2);
  }
  (**(code **)(*in_ECX + 0x594))(unaff_EBX);
  iVar2 = in_ECX[0x2d];
  while (iVar2 != 0) {
    iVar2 = *(int *)(in_ECX[0x2d] + 4);
    FUN_00401f20(in_ECX[0x2d]);
    in_ECX[0x2d] = iVar2;
  }
  in_ECX[0x2c] = 0;
  iVar2 = in_ECX[0x14];
  while (iVar2 != 0) {
    iVar2 = *(int *)(in_ECX[0x14] + 4);
    FUN_00401f20(in_ECX[0x14]);
    in_ECX[0x14] = iVar2;
  }
  in_ECX[0x13] = 0;
  in_ECX[0xc] = 0;
  iVar2 = (**(code **)(*unaff_EBX + 0x380))();
  if (((iVar2 != 0) ||
      ((iVar2 = (**(code **)(*in_ECX + 0x36c))(), iVar2 != 4 &&
       (iVar2 = (**(code **)(*in_ECX + 0x36c))(), iVar2 != 9)))) &&
     ((iVar2 = (**(code **)(*unaff_EBX + 0x380))(), iVar2 != 0 ||
      ((iVar2 = (**(code **)(*in_ECX + 0x36c))(), iVar2 != 4 &&
       (iVar2 = (**(code **)(*in_ECX + 0x36c))(), iVar2 != 9)))))) {
    in_ECX[0x48] = 0;
    FUN_006faee0(0);
    *(undefined1 *)((int)in_ECX + 0x136) = 0;
    in_ECX[0x4a] = DAT_00b3f9a8;
    in_ECX[0x4b] = DAT_00b3f9ac;
    in_ECX[0x4c] = DAT_00b3f9b0;
    *(undefined1 *)(in_ECX + 0x49) = 0x7f;
    return;
  }
  (**(code **)(*unaff_EBX + 800))();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00650ba0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *in_ECX;
  undefined4 uVar8;
  code *pcVar9;
  int *piVar10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)(in_ECX[2] + 0x24) != 0) {
    iVar4 = FUN_00569740();
    if (iVar4 == 0) {
      iVar4 = FUN_005697e0();
      in_ECX[0xc] = iVar4;
      return;
    }
    cVar3 = FUN_00569a10();
    if (cVar3 != '\0') {
      piVar1 = in_ECX + 0x13;
      if (in_ECX[0x14] == 0) {
        if (*piVar1 == 0) {
          uVar5 = FUN_006ecc80();
          puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
          uStack_c = *puVar6;
          uStack_8 = puVar6[1];
          uStack_4 = puVar6[2];
          iVar4 = FUN_00569740();
          if (iVar4 == 4) {
            iVar4 = FUN_00569820();
            in_ECX[0x1a] = iVar4;
            in_ECX[0x1b] = 0;
          }
          else if (iVar4 == 5) {
            in_ECX[0x1a] = 0;
            iVar4 = FUN_00569830();
            in_ECX[0x1b] = iVar4;
          }
          pcVar9 = FUN_00646a80;
          uVar8 = _DAT_00b368e8;
          piVar10 = param_1;
          uVar7 = (**(code **)(*param_1 + 0x174))(_DAT_00b368e8,FUN_00646a80,param_1);
          FUN_00446b90(uVar5,&uStack_c,_DAT_00b368e8,uVar7,uVar8,pcVar9,piVar10);
          piVar10 = in_ECX + 0x17;
          in_ECX[0x1b] = 0;
          in_ECX[0x1a] = 0;
          if (piVar10 != (int *)0x0) {
            while (*piVar10 != 0) {
              FUN_00446cb0(*piVar10);
              piVar2 = (int *)in_ECX[0x18];
              if (piVar2 == (int *)0x0) {
                *piVar10 = 0;
              }
              else {
                in_ECX[0x18] = piVar2[1];
                *piVar10 = *piVar2;
                FUN_00401f20(piVar2);
              }
            }
          }
          FUN_004526e0();
        }
        if ((in_ECX[0x14] == 0) && (*piVar1 == 0)) {
          (**(code **)(*in_ECX + 0x188))(param_1,1);
          return;
        }
      }
      in_ECX[0xc] = *piVar1;
      FUN_0067f100();
      return;
    }
  }
  return;
}



ushort FUN_00650f50(uint param_1,undefined4 param_2)

{
  ushort uVar1;
  byte bVar2;
  undefined4 *puVar3;
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  int in_ECX;
  short sVar9;
  uint uVar10;
  
  uVar6 = FUN_009832e6(param_2,0,&PTR_PTR_00b05538,&PTR_PTR_00b03070,0);
  uVar7 = FUN_00658bc0(param_1,param_2);
  uVar7 = uVar7 & 0xffff;
  cVar4 = FUN_0045a170();
  uVar10 = uVar7;
  if (cVar4 != '\0') {
    uVar10 = uVar7 + 6;
  }
  sVar9 = (short)uVar10 + 2;
  if (0x33 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    sVar9 = (short)uVar10 + 7;
  }
  if (0x4c < *(byte *)(DAT_00b33b00 + 0x7c)) {
    sVar9 = sVar9 + 4;
  }
  if (((param_1 & 0x80000) != 0) && (sVar9 = sVar9 + 4, *(int *)(in_ECX + 0xc0) != 0)) {
    sVar5 = (**(code **)(**(int **)(in_ECX + 0xc0) + 0xdc))();
    sVar9 = sVar9 + sVar5 + 5;
  }
  sVar5 = sVar9 + 0x33;
  if ((param_1 & 0x2000000) != 0) {
    sVar5 = FUN_00473bf0(param_2,*(undefined4 *)(in_ECX + 0x17c));
    sVar5 = sVar9 + 0x33 + sVar5;
  }
  param_2._0_2_ = sVar5;
  sVar9 = FUN_0068ddc0(*(undefined4 *)(in_ECX + 0x174),uVar6);
  bVar2 = *(byte *)(DAT_00b33b00 + 0x7c);
  uVar1 = (short)param_2 + sVar9 + 8;
  if (0x44 < bVar2) {
    uVar1 = uVar1 + 1;
  }
  if (0x48 < bVar2) {
    uVar1 = uVar1 + 2;
  }
  if (100 < bVar2) {
    sVar9 = 0;
    for (piVar8 = (int *)(in_ECX + 0xa8); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[1]) {
      if (*piVar8 != 0) {
        sVar9 = sVar9 + 1;
      }
    }
    uVar1 = uVar1 + 10 + sVar9 * 4;
  }
  if (0x6c < bVar2) {
    uVar1 = uVar1 + 1;
  }
  if (0x70 < bVar2) {
    uVar1 = uVar1 + 4;
  }
  if (DAT_00b05bac != '\0') {
    puVar3 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar3 != (undefined4 *)0x0) {
      piVar8 = (int *)FUN_0046b250(*puVar3);
      uVar6 = (**(code **)(*piVar8 + 0xd4))
                        (*(undefined4 *)((int)puVar3 + 5),0x19ab,".\\AI\\MiddleHighProcess.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,uVar1 - uVar7,*puVar3,uVar6);
      return uVar1;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",uVar1 - uVar7,0x19ab,
                 ".\\AI\\MiddleHighProcess.cpp");
    return uVar1;
  }
  return uVar1;
}



void FUN_00651140(uint param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  char cVar6;
  int *piVar7;
  undefined4 uVar8;
  int in_ECX;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  short *local_1c;
  undefined4 local_18;
  float fStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar8 = param_2;
  local_10 = FUN_009832e6(param_2,0,&PTR_PTR_00b05538,&PTR_PTR_00b03070,0);
  uVar4 = param_1;
  FUN_00658cb0(param_1,uVar8);
  local_18 = 0;
  local_30 = *(int *)(DAT_00b33b00 + 0x14);
  local_1c = (short *)0x0;
  cVar6 = FUN_0045a170();
  if (cVar6 != '\0') {
    param_2 = 0x4b4f4c42;
    FUN_0045b9a0(&param_2,4);
    local_1c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_18,2);
  }
  FUN_0045b9a0(in_ECX + 0x114,1);
  FUN_0045b9a0(in_ECX + 0x115,1);
  if (0x33 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x14c,1);
    FUN_0045b9a0(in_ECX + 0x154,4);
  }
  if (0x4c < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x158,4);
  }
  if ((uVar4 & 0x80000) != 0) {
    local_34 = 0;
    if (*(int *)(in_ECX + 0xc0) != 0) {
      local_34 = *(int *)(*(int *)(in_ECX + 0xc0) + 0xc);
    }
    FUN_0045f7a0(&local_34,4);
    if (local_34 != 0) {
      cVar6 = FUN_00446b80(local_34);
      if (cVar6 == '\0') {
        (**(code **)(*DAT_00b34d90 + 0x18))("Uncreated run once package is being saved!");
      }
      cVar6 = *(char *)(*(int *)(in_ECX + 0xc0) + 0x20);
      param_2 = CONCAT31(param_2._1_3_,cVar6);
      if (cVar6 == '\x13') {
        (**(code **)(*DAT_00b34d90 + 0x18))
                  ("Run once package is a Spectator Package, this shouldn\'t happen.");
      }
      FUN_0045b9a0(&param_2,1);
      (**(code **)(**(int **)(in_ECX + 0xc0) + 0xe0))();
      FUN_0045b9a0(in_ECX + 0xcc,4);
    }
  }
  local_2c = 0;
  if (*(int *)(in_ECX + 0x13c) != 0) {
    local_2c = *(undefined4 *)(*(int *)(in_ECX + 0x13c) + 0xc);
  }
  FUN_0045f7a0(&local_2c,4);
  FUN_0045b9a0(in_ECX + 0xe0,4);
  FUN_0045b9a0(in_ECX + 0x180,1);
  FUN_0045b9a0(in_ECX + 0xd4,0xc);
  FUN_0045b9a0(in_ECX + 0xc4,4);
  FUN_0045b9a0(in_ECX + 0x138,2);
  FUN_0045b9a0(in_ECX + 0x11d,1);
  FUN_0045b9a0(in_ECX + 0x124,1);
  uStack_28 = 0;
  if (*(int *)(in_ECX + 0x120) != 0) {
    uStack_28 = *(undefined4 *)(*(int *)(in_ECX + 0x120) + 0xc);
  }
  FUN_0045f7a0(&uStack_28,4);
  param_2 = (uint)*(ushort *)(in_ECX + 0x134);
  uStack_c = *(undefined4 *)(in_ECX + 0x128);
  uStack_8 = *(undefined4 *)(in_ECX + 300);
  fStack_14 = (float)param_2 / 1000.0;
  param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(in_ECX + 0x136));
  uStack_4 = *(undefined4 *)(in_ECX + 0x130);
  FUN_0045b9a0(&fStack_14,4);
  FUN_0045b9a0(&param_1,1);
  FUN_0045b9a0(&uStack_c,0xc);
  FUN_0045b9a0(in_ECX + 0x11c,1);
  if ((uVar4 & 0x2000000) != 0) {
    FUN_00473c40(uVar8,*(undefined4 *)(in_ECX + 0x17c));
  }
  uStack_24 = 0;
  if (*(int *)(in_ECX + 0x144) != 0) {
    uStack_24 = FUN_00419a20();
  }
  FUN_0045f7a0(&uStack_24,4);
  uStack_20 = 0;
  if (*(int *)(in_ECX + 0x178) != 0) {
    uStack_20 = FUN_006a2250();
  }
  FUN_0045f7a0(&uStack_20,4);
  FUN_0068deb0(*(undefined4 *)(in_ECX + 0x174),local_10);
  if (0x44 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 200,1);
  }
  if (0x48 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x168,1);
    FUN_0045b9a0(in_ECX + 0x169,1);
  }
  if (100 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0xb8,4);
    FUN_0045b9a0(in_ECX + 0xbc,4);
    param_2 = 0;
    puVar1 = *(undefined2 **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&param_2,2);
    for (piVar7 = (int *)(in_ECX + 0xa8);
        (piVar7 != (int *)0x0 && ((piVar7[1] != 0 || (*piVar7 != 0)))); piVar7 = (int *)piVar7[1]) {
      local_34 = 0;
      if (*piVar7 != 0) {
        local_34 = *(int *)(*piVar7 + 0xc);
      }
      FUN_0045f7a0(&local_34,4);
      param_2 = param_2 + 1;
    }
    *puVar1 = (undefined2)param_2;
  }
  if (0x6c < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x16b,1);
  }
  if (0x70 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    param_2 = 0;
    if (*(int *)(in_ECX + 0x148) != 0) {
      param_2 = FUN_00419a20();
    }
    FUN_0045f7a0(&param_2,4);
  }
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar3 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar3 - local_30,0x1a47,
                   ".\\AI\\MiddleHighProcess.cpp");
    }
    else {
      piVar7 = (int *)FUN_0046b250(*puVar2);
      uVar8 = (**(code **)(*piVar7 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0x1a47,".\\AI\\MiddleHighProcess.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar3 - local_30,*puVar2,uVar8);
    }
  }
  cVar6 = FUN_0045a170();
  psVar5 = local_1c;
  if (cVar6 != '\0') {
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_1c + 0xffffU < uVar4) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\AI\\MiddleHighProcess.cpp",0x1a47);
    }
    *psVar5 = (short)uVar4 - (short)psVar5;
  }
  return;
}



void FUN_006516d0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int in_ECX;
  
  uVar6 = FUN_009832e6(param_3,0,&PTR_PTR_00b05538,&PTR_PTR_00b03070,0);
  FUN_00643810(param_1,param_2,param_3);
  if ((*(int **)(in_ECX + 0xc0) != (int *)0x0) && ((param_1 & 0x80000) != 0)) {
    (**(code **)(**(int **)(in_ECX + 0xc0) + 0xe8))();
  }
  if (*(int *)(in_ECX + 0x13c) != 0) {
    uVar7 = FUN_0046b250(*(int *)(in_ECX + 0x13c),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
    uVar7 = FUN_009832e6(uVar7);
    *(undefined4 *)(in_ECX + 0x13c) = uVar7;
  }
  if (*(int *)(in_ECX + 0x120) != 0) {
    uVar7 = FUN_0046b250(*(int *)(in_ECX + 0x120),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    uVar7 = FUN_009832e6(uVar7);
    *(undefined4 *)(in_ECX + 0x120) = uVar7;
  }
  if (*(int *)(in_ECX + 0x144) != 0) {
    uVar7 = FUN_004199c0(*(int *)(in_ECX + 0x144));
    *(undefined4 *)(in_ECX + 0x144) = uVar7;
  }
  if (*(int *)(in_ECX + 0x178) != 0) {
    uVar7 = FUN_006a1d90(*(int *)(in_ECX + 0x178));
    *(undefined4 *)(in_ECX + 0x178) = uVar7;
  }
  FUN_0068e030(*(undefined4 *)(in_ECX + 0x174),uVar6);
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x65) {
LAB_00651821:
    if ((0x70 < *(byte *)(DAT_00b33b00 + 0x7c)) && (*(int *)(in_ECX + 0x148) != 0)) {
      uVar6 = FUN_004199c0(*(int *)(in_ECX + 0x148));
      *(undefined4 *)(in_ECX + 0x148) = uVar6;
    }
    return;
  }
  piVar5 = (int *)(in_ECX + 0xa8);
  piVar4 = (int *)0x0;
joined_r0x006517d9:
  do {
    piVar3 = piVar5;
    if ((piVar3 == (int *)0x0) || ((piVar3[1] == 0 && (*piVar3 == 0)))) goto LAB_00651821;
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      uVar6 = FUN_0046b250(iVar1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
      iVar8 = FUN_009832e6(uVar6);
      if (iVar8 != 0) {
        *piVar3 = iVar8;
        piVar5 = (int *)piVar3[1];
        piVar4 = piVar3;
        goto joined_r0x006517d9;
      }
    }
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
  } while( true );
}



void FUN_00651880(uint param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  iVar3 = FUN_009832e6(param_2,0,&PTR_PTR_00b05538,&PTR_PTR_00b03070,0);
  FUN_00658940(param_1,param_2);
  if ((param_1 & 0x8000000) != 0) {
    if (in_ECX[0x39] != 0) {
      iVar4 = FUN_009832e6(*(undefined4 *)(in_ECX[0x39] + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0
                          );
      if (*(char *)(iVar4 + 0x90) == '\x05') {
        FUN_005e13d0(0);
      }
    }
    (**(code **)(*in_ECX + 0x104))(0,0);
    (**(code **)(*in_ECX + 0x10c))(0);
    (**(code **)(*in_ECX + 0x110))(0);
    (**(code **)(*in_ECX + 0x108))(0);
    in_ECX[0x54] = 0;
  }
  if ((param_1 & 0x80000) != 0) {
    if (in_ECX[0x30] != 0) {
      cVar2 = FUN_005660a0();
      if (cVar2 != '\0') {
        FUN_0045c7a0(in_ECX[0x30]);
      }
    }
    in_ECX[0x30] = 0;
  }
  if ((*(int *)(DAT_00b33b00 + 0x44) == 0x1ffff000) || (*(int *)(DAT_00b33b00 + 0x44) == 0x7ffff000)
     ) {
    if (((param_1 & 0x2000000) != 0) && (in_ECX[0x5f] != 0)) {
      FUN_00473aa0(param_2);
    }
    FUN_0068e0b0(in_ECX[0x5d],iVar3);
    if (iVar3 != 0) {
      (**(code **)(*in_ECX + 0x194))(iVar3);
    }
    pcVar1 = *(code **)(*in_ECX + 0x370);
    *(undefined1 *)(in_ECX + 0x45) = 0;
    (*pcVar1)(iVar3,0,0,0x7f);
    in_ECX[0x48] = 0;
    *(undefined1 *)(in_ECX + 0x49) = 0x7f;
    FUN_004526e0();
    in_ECX[0x3e] = -0x40800000;
    *(undefined1 *)(in_ECX + 0x3d) = 0;
    in_ECX[0x2e] = 0;
    *(undefined1 *)((int)in_ECX + 0xf5) = 0;
    in_ECX[0x2f] = 0;
    *(undefined2 *)(in_ECX + 0x4e) = 0xffff;
    in_ECX[0x31] = 0;
    in_ECX[0x4f] = 0;
    in_ECX[0x50] = 0;
    in_ECX[0x55] = 0x3f800000;
    in_ECX[0xd] = 0;
    in_ECX[0x33] = 0;
    *(undefined1 *)((int)in_ECX + 0x115) = 0;
    in_ECX[0xe] = 0;
    in_ECX[0x56] = 0;
    *(undefined1 *)(in_ECX + 0x60) = 0;
    in_ECX[0x22] = 0;
    in_ECX[0x38] = 0;
    *(undefined1 *)(in_ECX + 0x53) = 0;
    in_ECX[0x54] = 0;
    in_ECX[0x59] = 0;
    *(undefined1 *)((int)in_ECX + 0x161) = 0;
    *(undefined1 *)(in_ECX + 0x32) = 1;
    *(undefined1 *)(in_ECX + 0x5a) = 0;
    *(undefined1 *)((int)in_ECX + 0x169) = 0;
    *(undefined1 *)(in_ECX + 0x58) = 0;
    in_ECX[0x12] = 0;
    *(undefined1 *)((int)in_ECX + 0x16a) = 0;
    FUN_004526e0();
    if (in_ECX[0x5c] != 0) {
      FUN_004526e0();
      FUN_00401f20(in_ECX[0x5c]);
      in_ECX[0x5c] = 0;
    }
  }
  return;
}



short FUN_00651ad0(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  LONG LVar4;
  int *in_ECX;
  undefined4 *unaff_EBX;
  short sVar5;
  int *unaff_retaddr;
  undefined1 local_4 [4];
  
  piVar3 = (int *)(**(code **)(*in_ECX + 0x18c))(local_4);
  iVar1 = *piVar3;
  if (unaff_EBX != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(unaff_EBX + 1);
    if ((LVar4 == 0) && (unaff_EBX != (undefined4 *)0x0)) {
      (**(code **)*unaff_EBX)(1);
    }
  }
  if (iVar1 != 0) {
    cVar2 = (**(code **)(*unaff_retaddr + 0x198))(0);
    if (cVar2 == '\0') {
      sVar5 = 0xc;
      if ((*(uint *)(iVar1 + 500) & 0x800) != 0) {
        sVar5 = 0x18;
      }
      cVar2 = (**(code **)(*unaff_retaddr + 400))();
      if (cVar2 == '\0') {
        sVar5 = sVar5 + 0x34;
      }
      else {
        sVar5 = sVar5 + 0x38;
      }
      if (0x76 < *(byte *)(DAT_00b33b00 + 0x7c)) {
        sVar5 = sVar5 + 8;
      }
      return sVar5;
    }
    return 0;
  }
  return 0;
}



void FUN_00651b90(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  LONG LVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined4 *unaff_ESI;
  int *unaff_retaddr;
  undefined1 local_20 [12];
  undefined1 auStack_14 [16];
  uint uStack_4;
  
  piVar3 = (int *)(**(code **)(*in_ECX + 0x18c))(local_20);
  iVar1 = *piVar3;
  if (unaff_ESI != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(unaff_ESI + 1);
    if ((LVar4 == 0) && (unaff_ESI != (undefined4 *)0x0)) {
      (**(code **)*unaff_ESI)(1);
    }
  }
  if (iVar1 != 0) {
    cVar2 = (**(code **)(*unaff_retaddr + 0x198))(0);
    if (cVar2 == '\0') {
      FUN_0088d370();
      FUN_0045b9a0(&stack0xffffffdc,4);
      FUN_0045b9a0(iVar1 + 0x2a0,4);
      uStack_4 = *(uint *)(iVar1 + 500);
      FUN_0045b9a0(&uStack_4,4);
      if ((uStack_4 & 0x800) != 0) {
        FUN_005e1500(local_20);
        FUN_0045b9a0(local_20,0xc);
      }
      FUN_0045b9a0(iVar1 + 0x2e0,0x10);
      FUN_0045b9a0(iVar1 + 0x2f0,0x10);
      if (*(int *)(iVar1 + 8) != 0) {
        uVar5 = FUN_008ac0a0();
        FUN_0043f3e0(auStack_14,uVar5);
      }
      FUN_0045b9a0(auStack_14,0xc);
      cVar2 = (**(code **)(*unaff_retaddr + 400))();
      if (cVar2 == '\0') {
        FUN_0045b9a0(iVar1 + 0x328,4);
      }
      else {
        FUN_0045b9a0(iVar1 + 0x31c,4);
        FUN_0045b9a0(iVar1 + 800,4);
      }
      FUN_0045b9a0(iVar1 + 0x324,4);
      if (0x76 < *(byte *)(DAT_00b33b00 + 0x7c)) {
        FUN_0045b9a0(iVar1 + 0x32c,4);
        FUN_0045b9a0(iVar1 + 0x330,4);
      }
    }
  }
  return;
}



void FUN_00651dd0(void)

{
  int in_ECX;
  
  if (DAT_00b33d80 == '\0') {
    if (*(int *)(in_ECX + 0xfc) != 0) {
      *(undefined4 *)(*(int *)(in_ECX + 0xfc) + 0x60) = 0x3f800000;
    }
    if (*(int *)(in_ECX + 0x100) != 0) {
      *(undefined4 *)(*(int *)(in_ECX + 0x100) + 0x60) = 0x3f800000;
    }
    if (*(int *)(in_ECX + 0x104) != 0) {
      *(undefined4 *)(*(int *)(in_ECX + 0x104) + 0x60) = 0x3f800000;
    }
    if (*(int *)(in_ECX + 0x108) != 0) {
      *(undefined4 *)(*(int *)(in_ECX + 0x108) + 0x60) = 0x3f800000;
    }
    if (*(int *)(in_ECX + 0x10c) != 0) {
      *(undefined4 *)(*(int *)(in_ECX + 0x10c) + 0x60) = 0x3f800000;
    }
    if (*(int *)(in_ECX + 0x110) != 0) {
      *(undefined4 *)(*(int *)(in_ECX + 0x110) + 0x60) = 0x3f800000;
      return;
    }
  }
  return;
}



void FUN_00651ef0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  if (((param_1 != 0) && (piVar1 = *(int **)(in_ECX + 0x170), piVar1 != (int *)0x0)) &&
     ((piVar1[1] != 0 || (*piVar1 != 0)))) {
    iVar3 = FUN_006ecc80();
    for (piVar1 = *(int **)(in_ECX + 0x170);
        (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
      iVar2 = *piVar1;
      if ((iVar2 != 0) && ((iVar4 = FUN_006ecc80(), iVar4 != iVar3 && (iVar3 != 0)))) {
        FUN_004d38f0(iVar2);
        FUN_006748b0(iVar2);
      }
    }
  }
  return;
}



void FUN_00651f70(void)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c3b24;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a72684;
  piVar6 = (int *)in_ECX[0x5d];
  local_4 = 2;
  if (piVar6 != (int *)0x0) {
    do {
      if ((undefined4 *)*piVar6 == (undefined4 *)0x0) break;
      (*(code *)**(undefined4 **)*piVar6)(1,uVar4);
      piVar6 = (int *)piVar6[1];
    } while (piVar6 != (int *)0x0);
    FUN_004526e0();
    FUN_00401f20(in_ECX[0x5d]);
  }
  iVar1 = in_ECX[0x39];
  if (iVar1 != 0) {
    FUN_00484470();
    FUN_00401f20(iVar1);
  }
  iVar1 = in_ECX[0x3a];
  if (iVar1 != 0) {
    FUN_00484470();
    FUN_00401f20(iVar1);
  }
  iVar1 = in_ECX[0x3b];
  if (iVar1 != 0) {
    FUN_00484470();
    FUN_00401f20(iVar1);
  }
  iVar1 = in_ECX[0x3c];
  if (iVar1 != 0) {
    FUN_00484470();
    FUN_00401f20(iVar1);
  }
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  puVar2 = (undefined4 *)in_ECX[0x46];
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 1);
    if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x46] = 0;
  }
  if (in_ECX[0x30] != 0) {
    cVar3 = FUN_0045a500();
    piVar6 = (int *)in_ECX[0x30];
    if (cVar3 == '\0') {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0x10))(1);
      }
    }
    else {
      FUN_0045c7a0(piVar6);
    }
  }
  if ((in_ECX[0x2b] != 0) || (in_ECX[0x2a] != 0)) {
    FUN_004526e0();
  }
  iVar1 = in_ECX[0x5f];
  if (iVar1 != 0) {
    FUN_00475b60();
    FUN_00401f20(iVar1);
  }
  in_ECX[0x5f] = 0;
  puVar2 = (undefined4 *)in_ECX[0x61];
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 1);
    if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x61] = 0;
  }
  iVar1 = in_ECX[0x2d];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[0x2d] + 4);
    FUN_00401f20(in_ECX[0x2d]);
    in_ECX[0x2d] = iVar1;
  }
  in_ECX[0x2c] = 0;
  piVar6 = (int *)in_ECX[0x5c];
  if (piVar6 != (int *)0x0) {
    do {
      if ((piVar6[1] == 0) && (*piVar6 == 0)) break;
      if (*piVar6 != 0) {
        FUN_00607730();
      }
      piVar6 = (int *)piVar6[1];
    } while (piVar6 != (int *)0x0);
    FUN_004526e0();
    FUN_00401f20(in_ECX[0x5c]);
  }
  in_ECX[0x5c] = 0;
  puVar2 = (undefined4 *)in_ECX[0x61];
  local_4._0_1_ = 1;
  if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
     (puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  puVar2 = (undefined4 *)in_ECX[0x46];
  local_4 = (uint)local_4._1_3_ << 8;
  if (((puVar2 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar2 + 1), LVar5 == 0)) &&
     (puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  local_4 = 0xffffffff;
  FUN_006586f0();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_00652210(int *param_1,char param_2)

{
  code *pcVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  float *pfVar11;
  float *pfVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  int *in_ECX;
  float10 fVar15;
  undefined4 uVar16;
  undefined8 uStack_c;
  float fStack_4;
  
  iVar7 = (**(code **)(*in_ECX + 0x184))();
  piVar5 = param_1;
  if ((in_ECX[0xb] == 0) || ((*(uint *)(in_ECX[0xb] + 8) >> 5 & 1) != 0)) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  if (in_ECX[0xb] == 0) {
    (**(code **)(*in_ECX + 0x188))(piVar5,1);
    return 0;
  }
  iVar8 = FUN_00566d00(piVar5);
  if (((iVar8 != 0) && (cVar6 = FUN_004d74b0(), cVar6 != '\0')) &&
     ((iVar9 = (**(code **)(*(int *)in_ECX[0xb] + 0x170))(), iVar9 == DAT_00b35eb0 ||
      (iVar9 = (**(code **)(*(int *)in_ECX[0xb] + 0x170))(), iVar9 == DAT_00b35eac)))) {
    (**(code **)(*in_ECX + 0x484))(iVar8);
    return 1;
  }
  if (*(char *)(iVar7 + 0x20) == '\t') {
    uVar10 = FUN_00566b30(&uStack_c,piVar5);
    FUN_004d7e30(uVar10);
    iVar8 = FUN_009828c0();
    param_1 = (int *)(float)iVar8;
    iVar8 = FUN_00566db0();
    uStack_c = (double)CONCAT44(uStack_c._4_4_,iVar8);
    fVar3 = (float)iVar8;
    if (iVar8 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    if (fVar3 + 300.0 < (float)param_1) {
      (**(code **)(*in_ECX + 0x188))(piVar5,0xffffffff);
    }
  }
  iVar8 = FUN_004d7630();
  if (iVar8 == 0) {
    cVar6 = FUN_004d74b0();
    if ((cVar6 == '\0') || (iVar8 = (**(code **)(*in_ECX + 0x36c))(), iVar8 == 0)) {
      cVar6 = FUN_004d74b0();
      if ((cVar6 != '\0') &&
         (((iVar8 = (**(code **)(*in_ECX + 0x36c))(), iVar8 == 0 &&
           (cVar6 = FUN_004d72c0((char)in_ECX[0x49]), cVar6 != '\0')) &&
          ((char)in_ECX[0x34] == '\0')))) {
        in_ECX[0x48] = 0;
        FUN_006faee0(0);
        *(undefined1 *)((int)in_ECX + 0x136) = 0;
        in_ECX[0x4a] = DAT_00b3f9a8;
        in_ECX[0x4b] = DAT_00b3f9ac;
        pcVar1 = *(code **)(*in_ECX + 0x194);
        in_ECX[0x4c] = DAT_00b3f9b0;
        *(undefined1 *)(in_ECX + 0x49) = 0x7f;
        (*pcVar1)(piVar5);
        in_ECX[0xb] = 0;
        return 0;
      }
      cVar6 = FUN_005687d0(piVar5);
      if (cVar6 == '\0') goto LAB_0065248e;
    }
  }
  else {
    pfVar11 = (float *)(**(code **)(*piVar5 + 0x174))();
    pfVar12 = (float *)FUN_004d76f0();
    fVar3 = *pfVar12 - *pfVar11;
    fVar4 = pfVar12[1] - pfVar11[1];
    uStack_c = (double)CONCAT44(fVar4,fVar3);
    fStack_4 = pfVar12[2] - pfVar11[2];
    param_1 = (int *)(fStack_4 * fStack_4 + fVar4 * fVar4 + fVar3 * fVar3);
    fVar15 = (float10)FUN_00982c30();
    param_1 = (int *)(float)fVar15;
    if ((float)DAT_00b36b28 < (float)param_1) {
LAB_0065248e:
      if (((int *)in_ECX[0xd] == (int *)0x0) ||
         (cVar6 = (**(code **)(*(int *)in_ECX[0xd] + 0x2c))(), cVar6 == '\0')) {
        iVar8 = (**(code **)(*piVar5 + 0x380))();
        if ((iVar8 == 0) &&
           ((iVar8 = (**(code **)(*in_ECX + 0x36c))(), iVar8 == 4 ||
            (iVar8 = (**(code **)(*in_ECX + 0x36c))(), iVar8 == 9)))) {
          (**(code **)(*piVar5 + 800))();
          return 1;
        }
        if ((char)in_ECX[0x34] != '\0') {
          iVar8 = FUN_004d7630();
          if (iVar8 == 0) {
            iVar8 = *in_ECX;
            puVar13 = (undefined4 *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
            uVar10 = FUN_004d6670();
            uVar10 = FUN_006ecc80(uVar10);
            cVar6 = (**(code **)(iVar8 + 0x3dc))(piVar5,*puVar13,puVar13[1],puVar13[2],uVar10);
            if (cVar6 == '\0') {
              return 0;
            }
          }
          else {
            cVar6 = FUN_004d74b0();
            if (cVar6 == '\0') {
              iVar8 = *in_ECX;
              puVar13 = (undefined4 *)FUN_004d76f0();
              uVar10 = FUN_004d6670();
              uVar10 = FUN_006ecc80(uVar10);
              cVar6 = (**(code **)(iVar8 + 0x3dc))(piVar5,*puVar13,puVar13[1],puVar13[2],uVar10);
              if (cVar6 == '\0') {
                return 0;
              }
            }
            else {
              puVar14 = (undefined8 *)(**(code **)(*piVar5 + 0x174))();
              uStack_c = (double)*puVar14;
              piVar2 = in_ECX + 0x4a;
              fStack_4 = *(float *)(puVar14 + 1);
              param_1 = (int *)0x0;
              cVar6 = FUN_004dbae0(&uStack_c,1,1,piVar2,&param_1);
              if (cVar6 == '\0') {
                in_ECX[0x48] = 0;
                FUN_006faee0(0);
                *(undefined1 *)((int)in_ECX + 0x136) = 0;
                *piVar2 = DAT_00b3f9a8;
                in_ECX[0x4b] = DAT_00b3f9ac;
                in_ECX[0x4c] = DAT_00b3f9b0;
                pcVar1 = *(code **)(*in_ECX + 0x194);
                *(undefined1 *)(in_ECX + 0x49) = 0x7f;
                (*pcVar1)(piVar5);
                in_ECX[0xb] = 0;
                return 0;
              }
              iVar8 = *in_ECX;
              uVar10 = FUN_004d6670();
              uVar10 = FUN_006ecc80(uVar10);
              cVar6 = (**(code **)(iVar8 + 0x3dc))(piVar5,*piVar2,in_ECX[0x4b],in_ECX[0x4c],uVar10);
              if (cVar6 == '\0') {
                return 0;
              }
              *(undefined1 *)(in_ECX + 0x49) = param_1._0_1_;
            }
          }
          if ((char)in_ECX[0x34] != '\0') goto LAB_00652792;
        }
        iVar8 = FUN_0046b250(0x3a);
        fVar15 = (float10)FUN_00402bd0();
        param_1 = (int *)(float)fVar15;
        uStack_c = (double)(float)param_1;
        fVar15 = (float10)FUN_006599b0();
        if ((float10)uStack_c < fVar15) {
          param_1 = (int *)((float)param_1 + 24.0);
        }
        uStack_c = (double)(float)param_1;
        fVar15 = (float10)FUN_006599b0();
        piVar2 = (int *)in_ECX[0xb];
        uStack_c = (double)CONCAT44(uStack_c._4_4_,(float)((float10)uStack_c - fVar15));
        param_1 = *(int **)(iVar8 + 0x24);
        iVar8 = *in_ECX;
        fVar15 = (float10)FUN_005677b0(piVar5,2);
        param_1 = (int *)((3600.0 / (float)param_1) * (float)uStack_c);
        uVar10 = FUN_004d6670(param_1,(float)fVar15);
        uVar10 = FUN_006ecc80(uVar10);
        uVar10 = (**(code **)(*piVar2 + 0x174))(uVar10);
        (**(code **)(iVar8 + 0x418))(piVar5,uVar10);
        iVar8 = FUN_00659a00();
        if (iVar8 != 1) {
          return 0;
        }
        iVar8 = FUN_0065ad00();
        if (iVar8 != 1) {
          return 0;
        }
        cVar6 = FUN_005687d0(piVar5);
        if (cVar6 != '\0') goto LAB_006527ac;
      }
LAB_00652792:
      if ((int *)in_ECX[0xd] == (int *)0x0) {
        return 0;
      }
      cVar6 = (**(code **)(*(int *)in_ECX[0xd] + 0x2c))();
      if (cVar6 == '\0') {
        return 0;
      }
    }
  }
LAB_006527ac:
  if ((char)in_ECX[0x34] == '\0') {
    (**(code **)(*in_ECX + 0x194))(piVar5);
  }
  if (((*(char *)(in_ECX[2] + 0x20) == '\x12') && ((int *)in_ECX[0xd] != (int *)0x0)) &&
     (cVar6 = (**(code **)(*(int *)in_ECX[0xd] + 0x2c))(), cVar6 != '\0')) {
    (**(code **)(*piVar5 + 0x30c))();
    return 0;
  }
  iVar8 = in_ECX[0xb];
  piVar2 = (int *)in_ECX[0xd];
  if (param_2 == '\0') {
    if ((piVar2 != (int *)0x0) && (cVar6 = (**(code **)(*piVar2 + 0x2c))(), cVar6 != '\0'))
    goto LAB_006529a7;
    cVar6 = FUN_004d74b0();
    if (cVar6 != '\0') {
      iVar7 = (**(code **)(*in_ECX + 0x36c))();
      if ((iVar7 == 4) || (iVar7 = (**(code **)(*in_ECX + 0x36c))(), iVar7 == 9)) goto LAB_006528c7;
      goto LAB_0065287b;
    }
    if (in_ECX[0x11] == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)(in_ECX[0x11] + 4);
    }
    uVar16 = 0;
  }
  else {
    if (((piVar2 == (int *)0x0) || (cVar6 = (**(code **)(*piVar2 + 0x2c))(), cVar6 == '\0')) &&
       ((*(uint *)(iVar7 + 0x1c) >> 2 & 1) == 0)) {
      (**(code **)(*in_ECX + 0x188))(piVar5,1);
    }
    if (((int *)in_ECX[0xd] != (int *)0x0) &&
       (cVar6 = (**(code **)(*(int *)in_ECX[0xd] + 0x2c))(), cVar6 != '\0')) goto LAB_006529a7;
    cVar6 = FUN_004d74b0();
    if (cVar6 != '\0') {
      iVar7 = (**(code **)(*in_ECX + 0x36c))();
      if ((iVar7 == 4) || (iVar7 = (**(code **)(*in_ECX + 0x36c))(), iVar7 == 9)) {
        (**(code **)(*in_ECX + 0x188))(piVar5,1);
LAB_006528c7:
        (**(code **)(*in_ECX + 0x394))(1);
        return 1;
      }
LAB_0065287b:
      cVar6 = (**(code **)(*in_ECX + 0x1b4))(piVar5);
      if (cVar6 == '\0') {
        (**(code **)(*in_ECX + 0x188))(piVar5,1);
        (**(code **)(*in_ECX + 0x194))(piVar5);
        return 1;
      }
      goto LAB_006529a7;
    }
    if (in_ECX[0x11] == 0) {
      cVar6 = (**(code **)(*(int *)in_ECX[0xb] + 400))();
      if (((cVar6 == '\0') && (cVar6 = FUN_004dd260(piVar5,1,0,1), cVar6 == '\0')) &&
         ((*(uint *)(iVar7 + 0x1c) >> 2 & 1) != 0)) {
        (**(code **)(*in_ECX + 0x188))(piVar5,0xffffffff);
      }
      goto LAB_006529a7;
    }
    uVar10 = *(undefined4 *)(in_ECX[0x11] + 4);
    uVar16 = 1;
  }
  FUN_004dd260(piVar5,uVar16,uVar10,1);
LAB_006529a7:
  if (iVar8 != 0) {
    FUN_004d7190();
  }
  if (in_ECX[0x11] != 0) {
    FUN_00401f20(in_ECX[0x11]);
  }
  in_ECX[0x11] = 0;
  in_ECX[0xb] = 0;
  if (((int *)in_ECX[0xd] != (int *)0x0) &&
     (cVar6 = (**(code **)(*(int *)in_ECX[0xd] + 0x2c))(), cVar6 != '\0')) {
    return 0;
  }
  return 1;
}



void FUN_00652a20(int *param_1,char param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  longlong *plVar12;
  float *pfVar13;
  undefined4 uVar14;
  int iVar15;
  float *pfVar16;
  int *in_ECX;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  code *pcVar23;
  float fVar24;
  undefined8 uStack_3c;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  char cStack_18;
  
  piVar3 = param_1;
  iVar6 = (**(code **)(*in_ECX + 0x184))();
  if ((param_2 != '\0') ||
     ((((char)in_ECX[0x34] != '\0' && (cVar4 = FUN_00566dc0(param_1,0,0xbf800000), cVar4 == '\0'))
      && (((int *)in_ECX[0xd] == (int *)0x0 ||
          (cVar4 = (**(code **)(*(int *)in_ECX[0xd] + 0x2c))(), cVar4 == '\0')))))) {
    iVar11 = *in_ECX;
    puVar7 = (undefined4 *)FUN_00566b30(&fStack_30,param_1);
    uVar8 = FUN_00566940(param_1);
    uVar9 = FUN_00566a40(param_1);
    cVar4 = (**(code **)(iVar11 + 0x3dc))(param_1,*puVar7,puVar7[1],puVar7[2],uVar9,uVar8);
    if (cVar4 == '\0') {
      return;
    }
  }
  uVar8 = FUN_00566b30(&fStack_30,param_1);
  fVar17 = (float10)FUN_004d7e30(uVar8);
  uStack_3c = (double)CONCAT44(uStack_3c._4_4_,(float)fVar17);
  fVar17 = (float10)FUN_005677b0(param_1,1);
  _param_2 = (int *)0x0;
  if (*(int *)(iVar6 + 0x24) != 0) {
    _param_2 = (int *)FUN_005697e0();
  }
  if (((int *)in_ECX[0xc] != (int *)0x0) && (in_ECX[0x30] == 0)) {
    _param_2 = (int *)in_ECX[0xc];
  }
  if (((_param_2 != (int *)0x0) &&
      (piVar10 = (int *)(**(code **)(*param_1 + 0x380))(), _param_2 == piVar10)) &&
     (cVar4 = (**(code **)(*_param_2 + 0x198))(0), cVar4 != '\0')) {
    (**(code **)(*in_ECX + 0x178))(0);
    (**(code **)(*param_1 + 900))(0);
    (**(code **)(*_param_2 + 0x38c))(0);
  }
  param_1 = (int *)(float)fVar17;
  if (*(char *)(iVar6 + 0x20) == '\x05') {
    param_1 = (int *)0x41a00000;
  }
  if (((_param_2 == (int *)0x0) || (cVar4 = FUN_004d74b0(), cVar4 == '\0')) ||
     (*(char *)(iVar6 + 0x20) == '\x05')) {
LAB_00652c48:
    cVar4 = FUN_00566dc0(piVar3,0,0xbf800000);
    if ((cVar4 == '\0') &&
       (((int *)in_ECX[0xd] == (int *)0x0 ||
        (cVar4 = (**(code **)(*(int *)in_ECX[0xd] + 0x2c))(), cVar4 == '\0')))) {
      if (piVar3 == (int *)0x0) {
        return;
      }
      iVar11 = (**(code **)(*piVar3 + 0x380))();
      if ((iVar11 == 0) &&
         ((iVar11 = (**(code **)(*in_ECX + 0x36c))(), iVar11 == 4 ||
          (iVar11 = (**(code **)(*in_ECX + 0x36c))(), iVar11 == 9)))) {
        (**(code **)(*piVar3 + 800))();
        return;
      }
      if ((_param_2 == (int *)0x0) || (cVar4 = FUN_004d74b0(), cVar4 == '\0')) {
        if ((*(int *)(iVar6 + 0x24) != 0) && (iVar6 = FUN_005697e0(), iVar6 != 0)) {
          uVar8 = FUN_005697e0(0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
          piVar10 = (int *)FUN_009832e6(uVar8);
          if (piVar10 != (int *)0x0) {
            uVar8 = (**(code **)(*piVar10 + 0x174))();
            FUN_004121a0(&fStack_30,uVar8);
            fVar17 = (float10)FUN_00404c90();
            param_3 = (undefined4 *)(float)fVar17;
            pfVar13 = (float *)FUN_00403c00();
            if ((*pfVar13 < (float)param_3) ||
               (((float)param_1 < (float)uStack_3c && ((char)in_ECX[0x34] != '\0')))) {
              iVar6 = *in_ECX;
              param_3 = (undefined4 *)(**(code **)(*piVar10 + 0x174))();
              uVar8 = FUN_004d6670();
              uVar8 = FUN_006ecc80(uVar8);
              cVar4 = (**(code **)(iVar6 + 0x3dc))(piVar3,*param_3,param_3[1],param_3[2],uVar8);
              if (cVar4 == '\0') {
                return;
              }
              piVar10 = (int *)(**(code **)(*piVar10 + 0x174))();
              in_ECX[0x35] = *piVar10;
              in_ECX[0x36] = piVar10[1];
              in_ECX[0x37] = piVar10[2];
            }
          }
        }
      }
      else {
        plVar12 = (longlong *)(**(code **)(*piVar3 + 0x174))();
        uStack_3c = (double)*plVar12;
        fStack_34 = *(float *)(plVar12 + 1);
        param_3 = (undefined4 *)0x0;
        if (in_ECX[0x48] == 0) {
          in_ECX[0x48] = (int)_param_2;
        }
        cVar4 = FUN_004dbae0(&uStack_3c,1,1,in_ECX + 0x4a,&param_3);
        iVar11 = *in_ECX;
        if (cVar4 == '\0') {
          (**(code **)(iVar11 + 0x194))(piVar3);
          iVar11 = *in_ECX;
          iVar6 = FUN_00673980(*(undefined4 *)(iVar6 + 0x18));
          (**(code **)(iVar11 + 0x17c))(iVar6 + -1);
        }
        else {
          uVar8 = FUN_00566940(piVar3);
          uVar9 = FUN_00566a40(piVar3);
          cVar4 = (**(code **)(iVar11 + 0x3dc))
                            (piVar3,in_ECX[0x4a],in_ECX[0x4b],in_ECX[0x4c],uVar9,uVar8);
          if (cVar4 == '\0') {
            return;
          }
          in_ECX[0x48] = (int)_param_2;
          *(char *)(in_ECX + 0x49) = (char)param_3;
        }
      }
      iVar6 = FUN_0046b250(0x3a);
      fVar17 = (float10)FUN_00402bd0();
      param_3 = (undefined4 *)(float)fVar17;
      uStack_3c = (double)(float)param_3;
      fVar17 = (float10)FUN_006599b0();
      if ((float10)uStack_3c < fVar17) {
        param_3 = (undefined4 *)((float)param_3 + 24.0);
      }
      uStack_3c = (double)(float)param_3;
      fVar18 = (float10)FUN_006599b0();
      fVar17 = (float10)uStack_3c;
      param_3 = *(undefined4 **)(iVar6 + 0x24);
      iVar6 = *in_ECX;
      fVar19 = (float10)FUN_005677b0(piVar3,1);
      fVar24 = (float)fVar19;
      param_3 = (undefined4 *)((3600.0 / (float)param_3) * (float)(fVar17 - fVar18));
      fVar22 = (float)param_3;
      uVar8 = FUN_00566940(piVar3);
      uVar9 = FUN_00566a40(piVar3);
      uVar14 = FUN_00566b30(&fStack_30,piVar3);
      (**(code **)(iVar6 + 0x418))(piVar3,uVar14,uVar9,uVar8,fVar22,fVar24);
      return;
    }
  }
  else {
    if (in_ECX[0x48] == 0) {
      in_ECX[0x48] = (int)_param_2;
    }
    iVar11 = (**(code **)(*in_ECX + 0x36c))();
    if (iVar11 == 0) {
      iVar11 = (**(code **)(*in_ECX + 0x36c))();
      if (((iVar11 == 0) && (cVar4 = FUN_004d72c0((char)in_ECX[0x49]), cVar4 != '\0')) &&
         ((char)in_ECX[0x34] == '\0')) {
        in_ECX[0x48] = 0;
        FUN_006faee0(0);
        *(undefined1 *)((int)in_ECX + 0x136) = 0;
        in_ECX[0x4a] = DAT_00b3f9a8;
        in_ECX[0x4b] = DAT_00b3f9ac;
        pcVar23 = *(code **)(*in_ECX + 0x194);
        in_ECX[0x4c] = DAT_00b3f9b0;
        *(undefined1 *)(in_ECX + 0x49) = 0x7f;
        (*pcVar23)(piVar3);
        goto LAB_006534fb;
      }
      goto LAB_00652c48;
    }
  }
  if ((char)in_ECX[0x21] == '\0') {
    cVar4 = FUN_00565dd0();
    if (cVar4 != '\0') {
      pcVar23 = FUN_00645a30;
      uVar21 = 0x459c4000;
      piVar10 = piVar3;
      uVar8 = (**(code **)(*piVar3 + 0x174))(0x459c4000,FUN_00645a30,piVar3);
      uVar20 = 0x459c4000;
      uVar9 = (**(code **)(*piVar3 + 0x174))(0x459c4000,uVar8);
      uVar14 = FUN_006ecc80(uVar9);
      FUN_00446b90(uVar14,uVar9,uVar20,uVar8,uVar21,pcVar23,piVar10);
    }
    *(undefined1 *)(in_ECX + 0x21) = 1;
  }
  cVar4 = FUN_00565de0();
  if (cVar4 != '\0') {
    pcVar23 = FUN_00645af0;
    uVar21 = 0x459c4000;
    piVar10 = piVar3;
    uVar8 = (**(code **)(*piVar3 + 0x174))(0x459c4000,FUN_00645af0,piVar3);
    uVar20 = 0x459c4000;
    uVar9 = (**(code **)(*piVar3 + 0x174))(0x459c4000,uVar8);
    uVar14 = FUN_006ecc80(uVar9);
    FUN_00446b90(uVar14,uVar9,uVar20,uVar8,uVar21,pcVar23,piVar10);
  }
  if (((*(char *)((int)in_ECX + 0x169) == '\0') && ((*(uint *)(iVar6 + 0x1c) >> 0x14 & 1) != 0)) ||
     ((*(uint *)(iVar6 + 0x1c) >> 0x15 & 1) != 0)) {
    *(undefined1 *)((int)in_ECX + 0x169) = 1;
    if ((*(uint *)(iVar6 + 0x1c) >> 0x14 & 1) == 0) {
      puVar7 = (undefined4 *)(**(code **)(*in_ECX + 0xec))(1);
      if (puVar7 != (undefined4 *)0x0) {
        FUN_005f2e70(puVar7[2],1,*(undefined4 *)*puVar7,0,0,0);
      }
    }
    else {
      uVar8 = (**(code **)(*piVar3 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4,0);
      iVar11 = FUN_009832e6(uVar8);
      uVar8 = (**(code **)(*piVar3 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b0375c,0);
      iVar15 = FUN_009832e6(uVar8);
      uStack_3c = (double)CONCAT71(uStack_3c._1_7_,1);
      param_1 = (int *)CONCAT31(param_1._1_3_,1);
      if (in_ECX[2] != 0) {
        uVar2 = *(uint *)(in_ECX[2] + 0x1c);
        if ((uVar2 >> 0x14 & 1) != 0) {
          uStack_3c = (double)((ulonglong)uStack_3c._1_7_ << 8);
        }
        if ((uVar2 >> 0x15 & 1) != 0) {
          param_1 = (int *)((uint)param_1._1_3_ << 8);
        }
      }
      if (iVar11 == 0) {
        if (iVar15 != 0) {
          FUN_0051e240(piVar3,(float)uStack_3c,param_1,1);
        }
      }
      else {
        FUN_005227a0(piVar3,(float)uStack_3c,param_1,0,1);
      }
    }
  }
  if (_param_2 == (int *)0x0) {
LAB_00653463:
    if ((*(int *)(iVar6 + 0x24) != 0) && (iVar11 = FUN_00569740(), iVar11 == 3)) goto LAB_00653474;
  }
  else {
    cVar4 = FUN_004d74b0();
    if (cVar4 != '\0') {
      iVar11 = (**(code **)(*in_ECX + 0x36c))();
      if ((iVar11 == 4) || (iVar11 = (**(code **)(*in_ECX + 0x36c))(), iVar11 == 9)) {
        if ((char)param_3 != '\0') {
          (**(code **)(*in_ECX + 0x188))(piVar3,1);
        }
        (**(code **)(*in_ECX + 0x194))(piVar3);
        return;
      }
      cVar4 = FUN_0065d550();
      if (cVar4 == '\0') {
        (**(code **)(*in_ECX + 0x1b4))(piVar3);
        return;
      }
      uVar8 = (**(code **)(*_param_2 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b08088,0);
      param_3 = (undefined4 *)FUN_009832e6(uVar8);
      pfVar13 = (float *)(**(code **)(*in_ECX + 0x380))();
      FUN_0065ac20(1);
      (**(code **)(*piVar3 + 0x1e8))((float)*(ushort *)(pfVar13 + 3) / 1000.0);
      uVar1 = *(undefined1 *)((int)pfVar13 + 0xe);
      fVar17 = (float10)(**(code **)(*piVar3 + 0xec))();
      FUN_004aeb40(&stack0xffffffc0,uVar1,(float)fVar17);
      FUN_0070fdd0((float)*(ushort *)(pfVar13 + 3) / 1000.0);
      pfVar16 = (float *)FUN_007101f0(&fStack_34,&stack0xffffffc0);
      fVar24 = *pfVar16;
      uStack_3c._0_4_ = pfVar16[1];
      uStack_3c._4_4_ = pfVar16[2];
      FUN_004d7300((char)in_ECX[0x49],1);
      fStack_34 = *pfVar13 + fVar24;
      fStack_30 = pfVar13[1] + (float)uStack_3c;
      fStack_2c = pfVar13[2] + uStack_3c._4_4_;
      (**(code **)(*piVar3 + 0x1cc))(&fStack_34);
      fVar17 = (float10)FUN_004aebe0(*(undefined1 *)((int)pfVar13 + 0xe));
      FUN_00659b90((float)fVar17);
      if (*(char *)(iVar6 + 0x20) == '\x04') {
        (**(code **)(*in_ECX + 0x370))(piVar3,6,in_ECX[0x48],(char)in_ECX[0x49]);
        (**(code **)(*(int *)piVar3[0x16] + 0x17c))(1);
        (**(code **)(*(int *)piVar3[0x16] + 0x80))(piVar3,0);
        cVar4 = '\x01';
      }
      else {
        (**(code **)(*in_ECX + 0x370))(piVar3,1,in_ECX[0x48],(char)in_ECX[0x49]);
        cVar4 = cStack_18;
      }
      cVar5 = (**(code **)(*in_ECX + 900))(piVar3);
      if (cVar5 == '\0') {
        return;
      }
      if (cVar4 != '\0') {
        piVar10 = (int *)FUN_005e12b0();
        if (piVar10 != (int *)0x0) {
          (**(code **)(*piVar10 + 0x9c))(1,0);
        }
        (**(code **)(*in_ECX + 0x370))(piVar3,9,in_ECX[0x48],(char)in_ECX[0x49]);
        return;
      }
      (**(code **)(*in_ECX + 0x370))(piVar3,4,in_ECX[0x48],(char)in_ECX[0x49]);
      return;
    }
    iVar11 = (**(code **)(*_param_2 + 0x170))();
    if (iVar11 != DAT_00b35eb0) goto LAB_00653463;
LAB_00653474:
    if ((((int *)in_ECX[0xd] == (int *)0x0) ||
        (cVar4 = (**(code **)(*(int *)in_ECX[0xd] + 0x2c))(), cVar4 == '\0')) &&
       (iVar11 = (**(code **)(*piVar3 + 0x18c))(), iVar11 == 0)) {
      if (_param_2 == (int *)0x0) {
        iVar11 = (**(code **)(*piVar3 + 0xf0))(&fStack_30);
        _param_2 = *(int **)(iVar11 + 8);
      }
      else {
        _param_2 = (int *)_param_2[10];
      }
      (**(code **)(*piVar3 + 0x1e8))(_param_2);
    }
  }
  (**(code **)(*in_ECX + 0x194))(piVar3);
  if (param_2 == '\0') {
    return;
  }
  if ((((int *)in_ECX[0xd] != (int *)0x0) &&
      (cVar4 = (**(code **)(*(int *)in_ECX[0xd] + 0x2c))(), cVar4 != '\0')) &&
     ((*(uint *)(iVar6 + 0x1c) >> 2 & 1) != 0)) {
    return;
  }
LAB_006534fb:
  (**(code **)(*in_ECX + 0x188))(piVar3,1);
  return;
}



void FUN_00653520(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int in_ECX;
  int *piVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iStack_18;
  undefined4 local_10;
  int *local_c;
  int local_8;
  int local_4;
  
  piVar1 = (int *)(in_ECX + 0x54);
  piVar9 = piVar1;
  local_8 = in_ECX;
  do {
    local_c = piVar9;
    if ((piVar1 == (int *)0x0) || (puVar2 = (undefined4 *)*piVar1, puVar2 == (undefined4 *)0x0)) {
      FUN_0064e240();
      FUN_0064e2b0();
      iVar5 = piVar9[1];
      while (iVar5 != 0) {
        iVar5 = *(int *)(piVar9[1] + 4);
        FUN_00401f20(piVar9[1]);
        piVar9[1] = iVar5;
      }
      *piVar9 = 0;
      return;
    }
    piVar9 = (int *)*puVar2;
    uVar6 = puVar2[1];
    bVar3 = true;
    local_10 = uVar6;
    iVar5 = FUN_004db6b0();
    if ((iVar5 == 0) && (cVar4 = (**(code **)(*piVar9 + 400))(), cVar4 == '\0')) {
LAB_0065357e:
      FUN_004d7e90(piVar9,0);
      uVar6 = FUN_009828c0();
      puVar2[5] = uVar6;
LAB_0065383e:
      FUN_004d6f80(1);
      piVar9 = (int *)(local_8 + 0x3c);
      iVar5 = *(int *)(local_8 + 0x40);
      while (iVar5 != 0) {
        piVar9 = (int *)piVar9[1];
        iVar5 = piVar9[1];
      }
      if (*piVar9 == 0) {
        *piVar9 = (int)puVar2;
      }
      else {
        piVar8 = (int *)FUN_00401f00(8);
        if (piVar8 == (int *)0x0) {
          piVar9[1] = 0;
        }
        else {
          *piVar8 = (int)puVar2;
          piVar8[1] = 0;
          piVar9[1] = (int)piVar8;
        }
      }
    }
    else {
      local_4 = -1;
      iVar5 = FUN_00470520(uVar6);
      cVar4 = (**(code **)(*piVar9 + 0x198))(0);
      if ((cVar4 == '\0') && (iVar7 = FUN_005e4420(), iVar5 <= iVar7)) {
        cVar4 = FUN_004d7f80();
        piVar8 = piVar9;
        if (cVar4 == '\0') {
          uVar6 = FUN_004db6b0(0,&PTR_PTR_00b02f9c,&PTR_PTR_00b02fb4,0);
          iVar5 = FUN_009832e6(uVar6);
          if (iVar5 == 0) goto LAB_00653665;
          piVar8 = (int *)FUN_00675220(iVar5);
        }
        if (piVar8 != (int *)0x0) {
          uVar6 = local_10;
          FUN_005e02e0(0);
          cVar4 = FUN_004685b0(uVar6);
          if (cVar4 != '\0') {
            iVar5 = FUN_00470520(puVar2[1]);
            iVar7 = FUN_005e4420();
            if (iVar5 <= iVar7) {
              cVar4 = (**(code **)(*param_1 + 0x334))(1);
              if (cVar4 == '\0') {
                puVar2[7] = 2;
                goto LAB_0065357e;
              }
              bVar3 = false;
            }
          }
        }
      }
LAB_00653665:
      cVar4 = (**(code **)(*piVar9 + 400))();
      if (cVar4 == '\0') {
        uVar6 = (**(code **)(*param_1 + 0x284))(0x24);
        FUN_005e0430(0x1f);
        uVar6 = FUN_009828c0(uVar6);
        iStack_18 = FUN_00546600(uVar6);
        iVar5 = local_4;
LAB_0065374a:
        if ((iStack_18 < 1) && (iVar5 < 1)) goto LAB_00653758;
        cVar4 = (**(code **)(*piVar9 + 400))();
        if (cVar4 == '\0') {
          if (puVar2[7] == 1) {
            puVar2[7] = 4;
            local_10 = 0;
            cVar4 = FUN_005e4a00(DAT_00b35ec8,0,1,0,&local_10);
            if (((cVar4 == '\0') &&
                (cVar4 = FUN_005e4a00(DAT_00b35ecc,0,1,0,&local_10), cVar4 == '\0')) &&
               (iVar7 = FUN_004d7740(), iVar7 != 0)) goto LAB_00653824;
          }
          else {
            puVar2[7] = 3;
          }
        }
        else {
          cVar4 = (**(code **)(*param_1 + 0x334))(1);
          if (iStack_18 < iVar5) {
            if (cVar4 == '\0') {
              puVar2[7] = 5;
            }
            else {
LAB_00653824:
              bVar3 = false;
            }
          }
          else {
            if (cVar4 != '\0') goto LAB_00653824;
            puVar2[7] = 4;
          }
        }
        puVar2[2] = iStack_18;
        puVar2[3] = iVar5;
        if (bVar3) goto LAB_0065383e;
      }
      else {
        cVar4 = (**(code **)(*piVar9 + 0x198))(0);
        if ((cVar4 == '\0') && (cVar4 = FUN_004d7f80(), cVar4 != '\0')) {
          uVar6 = (**(code **)(*param_1 + 0x284))(0x24);
          FUN_005e0430(0x1f);
          uVar6 = FUN_009828c0(uVar6);
          FUN_00546620(uVar6);
          uVar13 = 100;
          uVar12 = 0;
          uVar11 = 0;
          uVar6 = 0;
          fVar10 = (float10)FUN_004d7e90(piVar9,0);
          uVar6 = (**(code **)(*param_1 + 0x284))(0x21,(float)fVar10,uVar6,uVar11,uVar12,uVar13);
          uVar6 = (**(code **)(*param_1 + 0x224))(piVar9,0,uVar6);
          uVar6 = FUN_00546190(uVar6);
          uVar11 = (**(code **)(*param_1 + 0x284))(0x24);
          iVar5 = FUN_00546640(uVar6,uVar11);
          goto LAB_0065374a;
        }
LAB_00653758:
        cVar4 = FUN_005e3270();
        if ((cVar4 == '\0') &&
           ((cVar4 = (**(code **)(*piVar9 + 400))(), cVar4 != '\0' &&
            (cVar4 = FUN_004d7f80(), cVar4 == '\0')))) {
          iVar5 = (**(code **)(*param_1 + 0x170))();
          iVar7 = FUN_004db6b0();
          if (iVar7 != iVar5) {
            puVar2[7] = 5;
            goto LAB_0065383e;
          }
        }
      }
      FUN_00401f20(puVar2);
    }
    piVar1 = (int *)piVar1[1];
    piVar9 = local_c;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006541a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 unaff_EBX;
  int iVar3;
  
  iVar1 = (int)*(char *)(*(int *)(*(int *)(in_ECX + 0xe4) + 8) + 0x90);
  iVar3 = 5;
  if ((iVar1 == 1) || (iVar1 - 3U < 3)) {
    iVar3 = 4;
  }
  if (param_1 == 0) {
    if (param_2 == 0) goto LAB_0065430a;
    iVar1 = FUN_0065d750(1);
    if (iVar1 != 0) {
      iVar1 = FUN_0065d750(1);
      if (param_2 == *(int *)(iVar1 + 4)) {
        DAT_00b3ba84 = FUN_006f94a0(param_2,PTR_s_Weapon_00b0655c);
        _DAT_00b3ba90 = FUN_006f94a0(param_2,(&PTR_s_Bip01_Head_00b06550)[iVar3]);
        _DAT_00b3ba88 = FUN_006f94a0(param_2,PTR_s_Torch_00b06570);
        _DAT_00b3ba8c = FUN_006f94a0(param_2,PTR_s_Bip01_L_ForearmTwist_00b0656c);
        _DAT_00b3ba94 = FUN_006f94a0(param_2,PTR_s_Quiver_00b06568);
        goto LAB_0065426f;
      }
    }
    uVar2 = FUN_006f94a0(param_2,PTR_s_Weapon_00b0655c);
    *(undefined4 *)(in_ECX + 0xfc) = uVar2;
    uVar2 = FUN_006f94a0(param_2,(&PTR_s_Bip01_Head_00b06550)[iVar3]);
    *(undefined4 *)(in_ECX + 0x108) = uVar2;
    uVar2 = FUN_006f94a0(param_2,PTR_s_Torch_00b06570);
    *(undefined4 *)(in_ECX + 0x100) = uVar2;
    uVar2 = FUN_006f94a0(param_2,PTR_s_Bip01_L_ForearmTwist_00b0656c);
    *(undefined4 *)(in_ECX + 0x104) = uVar2;
    uVar2 = FUN_006f94a0(param_2,PTR_s_Quiver_00b06568);
  }
  else {
    iVar1 = FUN_0065d750(1);
    if (iVar1 != 0) {
      iVar1 = FUN_0065d750(1);
      if (param_1 == *(int *)(iVar1 + 0x98)) {
        DAT_00b3ba84 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x4c))(PTR_s_Weapon_00b0655c);
        _DAT_00b3ba90 =
             (**(code **)(**(int **)(param_1 + 0x7c) + 0x4c))((&PTR_s_Bip01_Head_00b06550)[iVar3]);
        _DAT_00b3ba88 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x4c))(PTR_s_Torch_00b06570);
        _DAT_00b3ba8c = FUN_006f94a0(unaff_EBX,PTR_s_Bip01_L_ForearmTwist_00b0656c);
        _DAT_00b3ba94 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x4c))(PTR_s_Quiver_00b06568);
LAB_0065426f:
        DAT_00b3ba98 = 0;
        FUN_00480770(DAT_00b3ba84);
        return;
      }
    }
    uVar2 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x4c))(PTR_s_Weapon_00b0655c);
    *(undefined4 *)(in_ECX + 0xfc) = uVar2;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x4c))((&PTR_s_Bip01_Head_00b06550)[iVar3]);
    *(undefined4 *)(in_ECX + 0x108) = uVar2;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x4c))(PTR_s_Torch_00b06570);
    *(undefined4 *)(in_ECX + 0x100) = uVar2;
    uVar2 = FUN_006f94a0(unaff_EBX,PTR_s_Bip01_L_ForearmTwist_00b0656c);
    *(undefined4 *)(in_ECX + 0x104) = uVar2;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x4c))(PTR_s_Quiver_00b06568);
  }
  *(undefined4 *)(in_ECX + 0x10c) = uVar2;
LAB_0065430a:
  *(undefined4 *)(in_ECX + 0x110) = 0;
  FUN_00480770(*(undefined4 *)(in_ECX + 0xfc));
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00654420(int *param_1,float param_2,float param_3,float param_4,float param_5)

{
  code *pcVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *in_ECX;
  undefined1 auStack_58 [12];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_58;
  if ((char)in_ECX[0x47] == '\0') {
    cVar3 = (**(code **)(*param_1 + 0x198))(0);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*param_1 + 0x278))();
      if (cVar3 == '\0') {
        FUN_0065a2c0();
        FUN_005e1500(&fStack_3c);
        fStack_48 = fStack_3c - param_2;
        fStack_44 = fStack_38 - param_3;
        fStack_40 = 0.0;
        FUN_0043f350();
        fVar2 = _DAT_00b37eb8 * (param_5 / _DAT_00b37e98);
        fStack_48 = fVar2 * fStack_48;
        fStack_44 = fStack_44 * fVar2;
        fStack_40 = fVar2 * fStack_40;
        fStack_4c = (param_5 / _DAT_00b37e98) * _DAT_00b37ec0;
        FUN_008907a0(&fStack_48,fStack_4c);
        return;
      }
      iVar4 = (**(code **)(*in_ECX + 0x36c))();
      if (iVar4 != 0) {
        iVar4 = (**(code **)(*param_1 + 0x380))();
        if (iVar4 == 0) {
          FUN_005e4140();
        }
        else {
          FUN_005f0410();
        }
      }
      pcVar1 = *(code **)(*in_ECX + 0x20);
      *(undefined1 *)(in_ECX + 0x47) = 2;
      (*pcVar1)();
      if (param_1 == DAT_00b333c4) {
        iVar4 = FUN_00660110(0);
      }
      else {
        iVar4 = param_1[0xf];
      }
      FUN_0088d070(iVar4,1,1,0);
      FUN_00707370(0,0);
      fStack_30 = param_2 * 0.14287673;
      fStack_2c = param_3 * 0.14287673;
      fStack_28 = param_4 * 0.14287673;
      FUN_005364b0(iVar4,&fStack_30,param_5);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006545e0(int *param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  float10 fVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int *in_ECX;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float fStack_2c;
  undefined8 uStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  iVar6 = (**(code **)(*param_1 + 0x164))();
  if ((param_1 != DAT_00b333c4) || (iVar7 = FUN_0065d750(1), iVar6 != iVar7)) {
    cVar5 = (**(code **)(*param_1 + 0x198))(0);
    if ((cVar5 != '\0') && (iVar7 = FUN_005e0dc0(), iVar7 != 6)) {
      *(undefined1 *)(in_ECX + 0x47) = 0;
      return;
    }
    fVar11 = (float10)FUN_005e0a60();
    if (((fVar11 < (float10)0.0) || (cVar5 = (**(code **)(*param_1 + 0x1a0))(), cVar5 != '\0')) ||
       (iVar7 = FUN_005e0dc0(), iVar7 == 6)) {
      cVar5 = (char)in_ECX[0x47];
      if (cVar5 == '\0') {
        iVar7 = (**(code **)(*in_ECX + 0x36c))();
        if (iVar7 != 0) {
          iVar7 = (**(code **)(*param_1 + 0x380))();
          if (iVar7 == 0) {
            FUN_005e4140();
          }
          else {
            FUN_005f0410();
          }
        }
        FUN_00699da0();
        cVar5 = (**(code **)(*param_1 + 0x1a0))();
        if (cVar5 == '\0') {
          *(undefined1 *)(in_ECX + 0x47) = 4;
          FUN_004723a0(&uStack_28,param_1,1,0);
          fStack_1c = -(float)uStack_28;
          fStack_18 = -uStack_28._4_4_;
          fStack_14 = -fStack_20;
          fStack_20 = 1.0 / (_DAT_00b33e9c * 50.0);
          fStack_10 = fStack_20 * fStack_1c;
          fStack_c = fStack_18 * fStack_20;
          uStack_28 = (double)CONCAT44(fStack_c,fStack_10);
          fStack_20 = fStack_20 * fStack_14;
          fStack_8 = fStack_20;
          FUN_008ab440(param_1[0xf],&uStack_28,0,0,0);
          FUN_008a5580(param_1[0xf],0);
          FUN_004fbf90(0,param_1 + 0x11,0x40);
        }
        else {
          *(undefined1 *)(in_ECX + 0x47) = 3;
          FUN_0088d070(param_1[0xf],1);
          FUN_008a5580(param_1[0xf],1);
          FUN_00470fc0(5,0);
          FUN_004728c0();
          (**(code **)(*in_ECX + 0x194))(param_1);
        }
      }
      else if ((cVar5 == '\x02') || (cVar5 == '\x01')) {
        FUN_004fbf90(0,param_1 + 0x11,0x40);
      }
    }
    switch((char)in_ECX[0x47]) {
    case '\x01':
      fVar11 = (float10)(**(code **)(*in_ECX + 0x28))();
      fVar1 = (float)fVar11;
      fVar11 = (float10)FUN_00402bd0();
      fVar2 = (float)fVar11;
      if (fVar1 <= fVar2) {
        fVar2 = fVar2 - fVar1;
      }
      else {
        fVar2 = (fVar1 + 23.0) - fVar2;
      }
      uStack_28 = (double)fVar2;
      fVar12 = (float10)FUN_004029d0();
      fVar11 = (float10)uStack_28;
      uStack_28 = (double)fVar2;
      fVar13 = (float10)FUN_004029d0();
      fVar4 = (float10)uStack_28;
      fVar14 = (float10)FUN_005e0a60();
      if ((((float10)0.0 <= fVar14) && (cVar5 = (**(code **)(*param_1 + 0x1a0))(), cVar5 == '\0'))
         && ((fVar12 * (float10)0.0006600000197067857 < fVar11 &&
             ((fVar13 * (float10)0.001500000013038516 < fVar4 ||
              (cVar5 = FUN_005f0270(0x41800000), cVar5 != '\0')))))) {
        iVar6 = in_ECX[0x47];
        *(undefined1 *)(in_ECX + 0x47) = 3;
        iVar7 = FUN_00521450(param_1,0);
        *(char *)(in_ECX + 0x47) = (char)iVar6;
        piVar10 = (int *)FUN_005e12b0();
        if (piVar10 != (int *)0x0) {
          (**(code **)(*piVar10 + 0x9c))(0,0);
        }
        *(undefined1 *)(in_ECX + 0x47) = 5;
        if (iVar7 != 0) {
          FUN_00475300(iVar7,5);
          return;
        }
        goto LAB_00654a5b;
      }
      break;
    case '\x02':
    case '\x04':
      if ((*(int *)(iVar6 + 8) == 0) ||
         (fVar11 = (float10)FUN_0088fa30(*(int *)(iVar6 + 8)),
         fVar11 < (float10)0.0 != (fVar11 == (float10)0.0))) {
        FUN_005ef930();
        *(char *)(in_ECX + 0x47) = ((char)in_ECX[0x47] == '\x04') * '\x02' + '\x01';
        piVar10 = (int *)FUN_005e12b0();
        if (piVar10 != (int *)0x0) {
          (**(code **)(*piVar10 + 0x9c))(1,0);
        }
        FUN_00470fc0(5,0);
        FUN_004728c0();
        (**(code **)(*in_ECX + 0x194))(param_1);
        return;
      }
      break;
    case '\x03':
      fVar11 = (float10)FUN_005e0a60();
      if (((fVar11 < (float10)0.0) || (cVar5 = (**(code **)(*param_1 + 0x1a0))(), cVar5 != '\0')) ||
         (iVar6 = FUN_005e0dc0(), iVar6 == 6)) {
        FUN_005e0dc0();
        return;
      }
      iVar6 = FUN_00521450(param_1,0);
      if (iVar6 != 0) {
        FUN_00475300(iVar6,5);
        piVar10 = (int *)FUN_005e12b0();
        if (piVar10 != (int *)0x0) {
          (**(code **)(*piVar10 + 0x9c))(0,0);
        }
        *(undefined1 *)(in_ECX + 0x47) = 5;
        return;
      }
LAB_00654a5b:
      uVar8 = FUN_004da2a0();
      FUN_004a7a60("No \'GetUp\' animation found for actor \'%s\'.",uVar8);
      (**(code **)(*in_ECX + 0x2f8))(param_1);
      return;
    case '\x05':
      cVar5 = FUN_004711f0();
      if ((cVar5 != '\0') &&
         ((iVar7 = FUN_004706e0(0), iVar7 == 0 ||
          (iVar7 = FUN_004706e0(0), *(int *)(iVar7 + 0x44) == 1)))) {
        cVar5 = FUN_005e0530();
        if ((cVar5 != '\0') || (cVar5 = FUN_00477e50(param_1), cVar5 == '\0')) {
          FUN_00475440(1,0);
        }
        iVar7 = param_1[0xf];
        if (*(int *)(iVar6 + 8) != 0) {
          iVar6 = FUN_00405790(0);
          iVar9 = FUN_004d96f0(iVar6,"Bip01 Head");
          if (((iVar9 != 0) || (iVar9 = FUN_006f94a0(iVar6,"Bip01 Neck"), iVar9 != 0)) ||
             (iVar9 = FUN_006f94a0(iVar6,"Bip01 Spine1"), iVar9 != 0)) {
            FUN_004121a0(&uStack_28,iVar6 + 0x88);
            piVar10 = (int *)(**(code **)(*in_ECX + 0x18c))(&fStack_2c);
            bVar3 = *(byte *)(*piVar10 + 500);
            FUN_007016a0();
            if ((((~bVar3 & 1) != 0) && (iVar6 = FUN_004d96f0(uStack_4,"Bip01 Spine"), iVar6 != 0))
               && (cVar5 = FUN_00897580(iVar6,0), cVar5 != '\0')) {
              fStack_2c = fStack_2c * -1.0;
              uStack_28 = (double)CONCAT44(uStack_28._4_4_ * -1.0,(float)uStack_28 * -1.0);
            }
            fVar11 = (float10)FUN_00683cb0(&fStack_2c);
            *(undefined1 *)(in_ECX + 0x47) = 0;
            (**(code **)(*param_1 + 0x1e8))((float)fVar11);
          }
        }
        FUN_008a5580(iVar7,0);
        FUN_008ab8a0(iVar7,0);
        FUN_00424870(0);
        *(undefined1 *)(in_ECX + 0x47) = 6;
        return;
      }
      if ((*(int *)(iVar6 + 0xcc) == 0) && (*(int *)(iVar6 + 0xd0) == 0)) {
        *(undefined1 *)(in_ECX + 0x47) = 3;
        return;
      }
      break;
    case '\x06':
      cVar5 = FUN_00472ea0();
      if (cVar5 != '\0') {
        *(undefined1 *)(in_ECX + 0x47) = 0;
      }
    }
  }
  return;
}



uint FUN_00654ea0(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x120) != 0) && (*(char *)(in_ECX + 0x124) != '\x7f')) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x120) + 0x154))();
    iVar2 = FUN_006fb0a0(uVar1);
    if (iVar2 != 0) {
      return *(uint *)((uint)*(byte *)(in_ECX + 0x124) * 0x10 + *(int *)(iVar2 + 0x10) + 0xc) >>
             0x10 & 0xff;
    }
  }
  return 0;
}



undefined4 FUN_00654f10(int *param_1)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *in_ECX;
  float10 fVar10;
  undefined4 uVar11;
  
  iVar4 = (**(code **)(*param_1 + 0x164))();
  if (iVar4 != 0) {
    if ((int *)in_ECX[0x48] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[0x48] + 0x170))();
      cVar2 = FUN_004ae5d0(*(undefined1 *)((int)in_ECX + 0x136));
      cVar3 = *(char *)((int)in_ECX + 0x11d);
      if (((cVar3 == '\x04') && (cVar2 != '\0')) || ((cVar3 == '\t' && (cVar2 == '\0')))) {
        return 0;
      }
      switch(cVar3) {
      case '\x04':
      case '\t':
        if (cVar2 == '\0') {
          (**(code **)(*in_ECX + 0x370))(param_1,5,in_ECX[0x48],(char)in_ECX[0x49]);
        }
        else {
          piVar9 = (int *)FUN_005e12b0();
          if (piVar9 != (int *)0x0) {
            (**(code **)(*piVar9 + 0x9c))(0,0);
          }
          (**(code **)(*in_ECX + 0x370))(param_1,10,in_ECX[0x48],(char)in_ECX[0x49]);
        }
        iVar7 = FUN_00521450(param_1,in_ECX[0x48]);
        if (iVar7 != 0) {
          uVar6 = FUN_00520200();
          FUN_00475300(iVar7,uVar6);
          return 1;
        }
        FUN_004d7300((char)in_ECX[0x49],0);
        *(undefined1 *)(iVar4 + 0xc4) = 1;
        (**(code **)(*in_ECX + 0x370))(param_1,0,in_ECX[0x48],0x7f);
        FUN_005e7230(0,0);
        uVar8 = (uint)*(byte *)((int)in_ECX + 0x136);
        (**(code **)(*(int *)in_ECX[0x48] + 0x170))(uVar8);
        fVar10 = (float10)FUN_004aebe0(uVar8);
        FUN_00659b90((float)-fVar10);
        iVar4 = *param_1;
        fVar10 = (float10)(**(code **)(iVar4 + 0x1e0))();
        (**(code **)(iVar4 + 0x1e8))((float)(fVar10 + (float10)3.1415927410125732));
        FUN_006faee0(0);
        *(undefined1 *)((int)in_ECX + 0x136) = 0;
        in_ECX[0x4a] = DAT_00b3f9a8;
        in_ECX[0x4b] = DAT_00b3f9ac;
        in_ECX[0x4c] = DAT_00b3f9b0;
        in_ECX[0x48] = 0;
        FUN_0065ac20(0);
        if (cVar2 == '\0') {
          return 0;
        }
        uVar6 = 1;
        uVar11 = 1;
        iVar4 = (**(code **)(*in_ECX + 0x184))();
        if (iVar4 != 0) {
          if ((*(uint *)(iVar4 + 0x1c) >> 0x14 & 1) != 0) {
            uVar6 = 0;
          }
          if ((*(uint *)(iVar4 + 0x1c) >> 0x15 & 1) != 0) {
            uVar11 = 0;
          }
        }
        cVar3 = FUN_005e32d0();
        if (cVar3 != '\0') {
          uVar5 = (**(code **)(*param_1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4);
          iVar4 = FUN_009832e6(uVar5);
          if (iVar4 == 0) {
            return 0;
          }
          FUN_005227a0(param_1,uVar6,uVar11,0,1);
          return 0;
        }
        uVar5 = (**(code **)(*param_1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b0375c,0);
        iVar4 = FUN_009832e6(uVar5);
        if (iVar4 == 0) {
          return 0;
        }
        FUN_0051e240(param_1,uVar6,uVar11,1);
        return 0;
      case '\x05':
      case '\n':
        cVar3 = FUN_004711f0();
        if ((cVar3 != '\0') &&
           ((iVar7 = FUN_004706e0(0), iVar7 == 0 ||
            (iVar7 = FUN_004706e0(0), *(int *)(iVar7 + 0x44) == 1)))) {
          *(undefined1 *)(iVar4 + 0xc4) = 1;
          uVar1 = *(undefined1 *)((int)in_ECX + 0x11d);
          (**(code **)(*in_ECX + 0x370))(param_1,0,in_ECX[0x48],(char)in_ECX[0x49]);
          uVar8 = (uint)*(byte *)((int)in_ECX + 0x136);
          (**(code **)(*(int *)in_ECX[0x48] + 0x170))(uVar8);
          fVar10 = (float10)FUN_004aebe0(uVar8);
          FUN_00659b90((float)-fVar10);
          (**(code **)(*in_ECX + 0x370))(param_1,uVar1,in_ECX[0x48],(char)in_ECX[0x49]);
          FUN_00477e50(param_1);
          *(undefined1 *)(iVar4 + 0xc4) = 1;
          return 1;
        }
        cVar3 = FUN_00472ea0();
        if (cVar3 != '\0') {
          FUN_004d7300((char)in_ECX[0x49],0);
          *(undefined1 *)(iVar4 + 0xc4) = 1;
          (**(code **)(*in_ECX + 0x370))(param_1,0,0,0x7f);
          FUN_005e7230(0,0);
          iVar4 = *param_1;
          fVar10 = (float10)(**(code **)(iVar4 + 0x1e0))();
          (**(code **)(iVar4 + 0x1e8))((float)(fVar10 + (float10)3.1415927410125732));
          FUN_006faee0(0);
          *(undefined1 *)((int)in_ECX + 0x136) = 0;
          in_ECX[0x4a] = DAT_00b3f9a8;
          in_ECX[0x4b] = DAT_00b3f9ac;
          in_ECX[0x4c] = DAT_00b3f9b0;
          FUN_0065ac20(0);
          piVar9 = (int *)(**(code **)(*in_ECX + 0x18c))(&stack0xffffffe8);
          iVar4 = *piVar9;
          FUN_007016a0();
          if (iVar4 != 0) {
            FUN_00452a10(param_1 + 0xb);
            return 1;
          }
        }
        break;
      default:
        *(byte *)((int)in_ECX + 0x11d) = (-(cVar2 != '\0') & 5U) + 4;
      }
      return 1;
    }
    (**(code **)(*in_ECX + 0x370))(param_1,0,0);
    (**(code **)(*in_ECX + 0x188))(param_1,1);
  }
  return 0;
}



void FUN_006553e0(int *param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  int *in_ECX;
  int *piVar12;
  int *piVar13;
  undefined4 uVar14;
  code *pcVar15;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [12];
  
  DAT_00b3ba80 = param_2;
  uVar6 = FUN_006ecc80();
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
  uStack_18 = *puVar7;
  uStack_14 = puVar7[1];
  uStack_10 = puVar7[2];
  iVar8 = (**(code **)(*in_ECX + 0x184))();
  if (iVar8 == 0) {
    return;
  }
  if ((*(int *)(iVar8 + 0x24) != 0) && (iVar8 = FUN_00569740(), iVar8 == 1)) {
    FUN_00569800();
    cVar5 = FUN_004c97f0();
    if (cVar5 != '\0') {
      uVar3 = 0x7f7fffff;
      goto LAB_0065546a;
    }
  }
  uVar3 = 0x45fa0000;
LAB_0065546a:
  pcVar15 = FUN_006505d0;
  uVar14 = uVar3;
  uVar9 = FUN_00566b30(auStack_c,param_1);
  FUN_00446b90(uVar6,&uStack_18,uVar3,uVar9,uVar14,pcVar15,param_1);
  piVar13 = in_ECX + 0x2c;
  FUN_004526e0();
  piVar12 = &DAT_00b3ba9c;
  do {
    iVar8 = *piVar12;
    if (iVar8 == 0) break;
    if (*piVar13 != 0) {
      piVar10 = (int *)FUN_00401f00(8);
      if (piVar10 == (int *)0x0) {
        piVar10 = (int *)0x0;
      }
      else {
        *piVar10 = *piVar13;
        piVar10[1] = 0;
      }
      piVar10[1] = in_ECX[0x2d];
      in_ECX[0x2d] = (int)piVar10;
    }
    *piVar13 = iVar8;
    piVar12 = (int *)piVar12[1];
  } while (piVar12 != (int *)0x0);
  FUN_004526e0();
  if (piVar13 != (int *)0x0) {
    iVar8 = 0;
    piVar12 = piVar13;
    do {
      if (*piVar12 != 0) {
        iVar8 = iVar8 + 1;
      }
      piVar12 = (int *)piVar12[1];
    } while (piVar12 != (int *)0x0);
    bVar4 = true;
    while ((iVar8 != 0 && (bVar4))) {
      bVar4 = false;
      for (piVar12 = piVar13; piVar12 != (int *)0x0; piVar12 = (int *)piVar12[1]) {
        iVar1 = *piVar13;
        iVar2 = *piVar12;
        iVar11 = FUN_004db6b0();
        if ((iVar11 == 0) && (iVar11 = FUN_004db6b0(), iVar11 != 0)) {
          if (iVar2 != 0) {
            *piVar13 = iVar2;
          }
          if (iVar1 != 0) {
            *piVar12 = iVar1;
          }
          bVar4 = true;
        }
      }
      iVar8 = iVar8 + -1;
      piVar13 = (int *)piVar13[1];
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00655590(int *param_1)

{
  undefined2 uVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int *in_ECX;
  int *unaff_EBX;
  int *unaff_ESI;
  float10 fVar10;
  int unaff_retaddr;
  int *piStack_3c;
  char *pcStack_38;
  int iStack_1c;
  int iStack_18;
  undefined1 auStack_14 [4];
  int aiStack_10 [2];
  int iStack_8;
  
  piVar4 = (int *)(**(code **)(*param_1 + 0x380))();
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  if ((((int *)piVar4[0x16] != (int *)0x0) &&
      (iVar5 = (**(code **)(*(int *)piVar4[0x16] + 0x174))(), iVar5 != 0)) &&
     (iVar5 = (**(code **)(*(int *)piVar4[0x16] + 0x174))(), *(char *)(iVar5 + 0x20) == '\x1e')) {
    return 1;
  }
  pcStack_38 = (char *)0x655600;
  iVar5 = (**(code **)(*piVar4 + 0x164))();
  pcStack_38 = (char *)0x655610;
  iVar6 = (**(code **)(*param_1 + 0x164))();
  pcStack_38 = (char *)0x65561e;
  iVar7 = (**(code **)(*piVar4 + 0x154))();
  pcStack_38 = (char *)0x65562e;
  iStack_18 = (**(code **)(*param_1 + 0x154))();
  if ((iVar7 == 0) || (iStack_18 == 0)) {
    return 0;
  }
  pcStack_38 = "ActorParent";
  piStack_3c = (int *)0x65565e;
  piVar8 = (int *)(**(code **)(**(int **)(*(int *)(iVar5 + 0x98) + 0x7c) + 0x4c))();
  piStack_3c = aiStack_10;
  FUN_00625290();
  if (piVar8 == (int *)0x0) {
    piStack_3c = (int *)0x655681;
    piStack_3c = (int *)(**(code **)(*piVar4 + 0x170))();
    uVar9 = FUN_0046d3f0();
    FUN_004a7a60("Missing \'ActorParent\' node for horse \'%s\'.",uVar9);
    return 0;
  }
  piStack_3c = (int *)0x6556ad;
  fVar10 = (float10)(**(code **)(*param_1 + 0xec))();
  pcVar2 = *(code **)(*piVar8 + 8);
  piVar8[0x18] = (int)ABS((float)((float10)1 / fVar10));
  piStack_3c = (int *)0x6556d1;
  piVar8 = (int *)(*pcVar2)();
  cVar3 = *(char *)((int)in_ECX + 0x11d);
  if (cVar3 == '\0') {
    piStack_3c = (int *)0x0;
    cVar3 = (**(code **)(*piVar4 + 0x198))();
    if ((cVar3 != '\0') || (piVar8 = (int *)(**(code **)(*piVar4 + 0x388))(), piVar8 != param_1)) {
      (**(code **)(*in_ECX + 0x178))(0);
      (**(code **)(*param_1 + 900))(0);
      (**(code **)(*piVar4 + 900))(0);
      pcStack_38[8] = '\0';
      pcStack_38[9] = '\0';
      pcStack_38[10] = '\0';
      pcStack_38[0xb] = '\0';
      return 0;
    }
    piVar8 = (int *)0x400;
    (**(code **)(*in_ECX + 0x2c4))(0x400,0);
    if (param_1 != DAT_00b333c4) {
      (**(code **)(*in_ECX + 0x194))(param_1);
    }
    iVar7 = 2;
    (**(code **)(*unaff_EBX + 0x370))(piVar4,2,0,0x7f);
    FUN_00521450(piVar4,in_ECX[0x48]);
    iVar5 = 0;
    (**(code **)(*piVar8 + 0x370))(piVar4,0,0,0x7f);
    if (iVar7 != 0) {
      uVar9 = FUN_00520200();
      FUN_00475300(iVar7,uVar9);
      (**(code **)(*param_1 + 0x1cc))(&piStack_3c);
      *(undefined4 *)(iVar6 + 0xc) = DAT_00b3f9a8;
      *(undefined4 *)(iVar6 + 0x10) = DAT_00b3f9ac;
      *(undefined4 *)(iVar6 + 0x14) = DAT_00b3f9b0;
      (**(code **)(*in_ECX + 0x370))(param_1,2,0,0x7f);
      FUN_0065ac20(1);
      return 1;
    }
    (**(code **)(*param_1 + 900))(0);
    (**(code **)(*piVar4 + 0x38c))(0);
    *(undefined4 *)(iVar5 + 8) = 0;
    return 0;
  }
  if (cVar3 == '\x02') {
    piStack_3c = (int *)0x655942;
    fVar10 = (float10)(**(code **)(*piVar4 + 0x1e0))();
    piVar4 = (int *)(float)(fVar10 + (float10)1.5707963705062866);
    if (0.0 <= (float)piVar4) {
      if (!NAN((float)piVar4) && 6.2831855 < (float)piVar4 != ((float)piVar4 == 6.2831855)) {
        piStack_3c = (int *)0x65598e;
        fVar10 = (float10)FUN_00982bfa();
        piVar4 = (int *)(float)fVar10;
      }
    }
    else {
      piStack_3c = (int *)0x655968;
      fVar10 = (float10)FUN_00982bfa();
      piVar4 = (int *)((float)fVar10 + 6.2831855);
    }
    piStack_3c = &iStack_1c;
    iStack_1c = 0;
    fVar10 = (float10)FUN_00683d80(param_1,piVar4);
    if ((float)_DAT_00b36c18 * 0.017453292 < ABS((float)fVar10)) {
      piStack_3c = (int *)0x1;
      FUN_00685530(param_1,piVar4);
      return 1;
    }
    piStack_3c = (int *)0x30;
    FUN_005e05f0();
    piStack_3c = piVar4;
    (**(code **)(*param_1 + 0x1e8))();
    (**(code **)(*param_1 + 0x1cc))(auStack_14);
    *(undefined4 *)(iVar6 + 0xc) = DAT_00b3f9a8;
    *(undefined4 *)(iVar6 + 0x10) = DAT_00b3f9ac;
    *(undefined4 *)(iVar6 + 0x14) = DAT_00b3f9b0;
    (**(code **)(*in_ECX + 0x370))(param_1,3,0,0x7f);
    return 1;
  }
  if (cVar3 != '\x03') {
    return 1;
  }
  piStack_3c = (int *)0x655700;
  cVar3 = FUN_004711f0();
  if (cVar3 != '\0') {
    piStack_3c = (int *)0x655715;
    iVar5 = (**(code **)(*in_ECX + 0x2d0))();
    if (iVar5 == -1) {
      piStack_3c = (int *)0x0;
      iVar5 = FUN_004706e0();
      if (iVar5 != 0) {
        piStack_3c = (int *)0x0;
        iVar5 = FUN_004706e0();
        if (*(int *)(iVar5 + 0x44) != 1) goto LAB_006558b8;
      }
      piStack_3c = (int *)0x0;
      FUN_00470fc0(0);
      *(undefined1 *)(iVar6 + 0xc4) = 1;
      piStack_3c = (int *)0x1;
      (**(code **)(*piVar8 + 0x84))(iStack_1c);
      iVar5 = FUN_006ecc80();
      iVar7 = FUN_006ecc80();
      if (iVar7 != iVar5) {
        iVar5 = FUN_006ecc80();
        if (iVar5 == 0) {
          iVar5 = FUN_006ecc80();
          if (iVar5 != 0) {
            piVar8 = param_1;
            FUN_006ecc80(param_1);
            FUN_004cecd0(piVar8);
          }
        }
        else {
          piVar8 = param_1;
          FUN_006ecc80(param_1);
          FUN_004d35d0(piVar8);
        }
      }
      *(undefined4 *)(iStack_8 + 0x94) = *(undefined4 *)(iVar6 + 0x94);
      FUN_005e13d0(1);
      if (param_1 == DAT_00b333c4) {
        iVar5 = FUN_00660110(1);
        *(undefined4 *)(iVar5 + 0x54) = DAT_00b3f9a8;
        *(undefined4 *)(iVar5 + 0x58) = DAT_00b3f9ac;
        *(undefined4 *)(iVar5 + 0x5c) = DAT_00b3f9b0;
        (**(code **)(*unaff_ESI + 0x84))(iVar5,1);
        iVar5 = FUN_0065abe0(&stack0xffffffd8);
        uVar1 = *(undefined2 *)(iVar5 + 2);
        uVar9 = (**(code **)(*piVar4 + 0x154))();
      }
      else {
        iVar5 = FUN_0065abe0(&iStack_1c);
        uVar1 = *(undefined2 *)(iVar5 + 2);
        uVar9 = (**(code **)(*param_1 + 0x154))();
      }
      FUN_0065a2c0();
      FUN_005ea350(uVar1);
      FUN_0088d0e0(uVar9,uVar1,1,0);
      *(undefined1 *)(aiStack_10[0] + 0xc4) = 1;
      cVar3 = FUN_00477e50(piVar4);
      if (cVar3 == '\0') {
        return 1;
      }
      *(undefined1 *)(aiStack_10[0] + 0xc4) = 1;
      FUN_00476d10(piVar4,0,0xbf800000);
      FUN_00474510(piVar4);
      return 1;
    }
  }
LAB_006558b8:
  piStack_3c = (int *)0x6558c3;
  cVar3 = FUN_00472ea0();
  if (cVar3 == '\0') {
    return 1;
  }
  piStack_3c = (int *)0x0;
  FUN_00470fc0(5);
  piStack_3c = (int *)0x3f800000;
  *(undefined1 *)(unaff_retaddr + 0xc4) = 1;
  FUN_005fcab0(0x3f800000);
  piStack_3c = (int *)0x1;
  (**(code **)(*in_ECX + 0x188))(param_1);
  (**(code **)(*param_1 + 0x1e8))(0);
  (**(code **)(*in_ECX + 0x370))(param_1,4,0,0x7f);
  return 1;
}



undefined4 FUN_00655bf0(int *param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *in_ECX;
  int *piVar11;
  
  piVar3 = (int *)(**(code **)(*param_1 + 0x380))();
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  if ((int *)piVar3[0x16] != (int *)0x0) {
    iVar4 = (**(code **)(*(int *)piVar3[0x16] + 0x184))();
    if (iVar4 != 0) {
      iVar4 = (**(code **)(*(int *)piVar3[0x16] + 0x184))();
      if (*(char *)(iVar4 + 0x20) == '\x1e') {
        return 1;
      }
    }
  }
  piVar1 = (int *)piVar3[0x16];
  iVar4 = (**(code **)(*piVar3 + 0x164))();
  iVar5 = (**(code **)(*param_1 + 0x164))();
  iVar6 = (**(code **)(*piVar3 + 0x154))();
  iVar7 = (**(code **)(*param_1 + 0x154))();
  if ((iVar6 == 0) || (iVar7 == 0)) {
    (**(code **)(*piVar3 + 0x38c))(0);
    (**(code **)(*param_1 + 900))(0);
    return 0;
  }
  if (*(char *)((int)in_ECX + 0x11d) == '\x04') {
    FUN_005e05f0(0x3f);
    (**(code **)(*piVar1 + 0x370))(piVar3,5,0,0x7f);
    piVar11 = param_1;
    (**(code **)(*in_ECX + 0x370))(param_1,5,0,0x7f);
    FUN_00521450(piVar3,in_ECX[0x48]);
    (**(code **)(*piVar1 + 0x370))(piVar3,0,0,0x7f);
    if (piVar11 == (int *)0x0) {
      (**(code **)(*piVar3 + 0x38c))(0);
      piVar1[2] = 0;
      (**(code **)(*param_1 + 900))(0);
      (**(code **)(*in_ECX + 0x370))(param_1,0,in_ECX[0x48],0x7f);
      if (param_1 == DAT_00b333c4) {
        DAT_00b333c4[0x187] = 0;
        uVar8 = (**(code **)(*piVar3 + 0x154))();
      }
      else {
        uVar8 = (**(code **)(*param_1 + 0x154))();
      }
      FUN_0065a2c0();
      uVar9 = FUN_00531d80();
      FUN_005ea350(uVar9);
      FUN_0088d0e0(uVar8,uVar9,1,0);
      FUN_0065ac20(0);
      return 0;
    }
    uVar8 = FUN_00520200();
    FUN_00475300(piVar11,uVar8);
  }
  else {
    if (*(char *)((int)in_ECX + 0x11d) != '\x05') {
      (**(code **)(*piVar3 + 0x38c))(0);
      (**(code **)(*param_1 + 900))(0);
      return 0;
    }
    cVar2 = FUN_004711f0();
    if (cVar2 != '\0') {
      iVar6 = FUN_004706e0(0);
      if (iVar6 == 0) {
LAB_00655d09:
        *(undefined1 *)(iVar4 + 0xc4) = 1;
        FUN_00477e50(piVar3);
        *(undefined1 *)(iVar4 + 0xc4) = 1;
        FUN_0065ac20(0);
        return 1;
      }
      iVar6 = FUN_004706e0(0);
      if (*(int *)(iVar6 + 0x44) == 1) goto LAB_00655d09;
    }
    cVar2 = FUN_00472ea0();
    if (cVar2 != '\0') {
      (**(code **)(*in_ECX + 0x370))(param_1,0,0,0x7f);
      FUN_00625290(&stack0xffffffe4);
      (**(code **)(*param_1 + 0x1cc))(&stack0xffffffe4);
      *(undefined4 *)(iVar5 + 0xc) = DAT_00b3f9a8;
      *(undefined4 *)(iVar5 + 0x10) = DAT_00b3f9ac;
      *(undefined4 *)(iVar5 + 0x14) = DAT_00b3f9b0;
      (**(code **)(*param_1 + 900))(0);
      (**(code **)(*piVar3 + 0x38c))(0);
      FUN_005e13d0(0);
      iVar4 = (**(code **)(*param_1 + 0x164))();
      if (iVar4 != 0) {
        FUN_00471230(*(undefined4 *)(iVar4 + 0x94),0,1);
      }
      (**(code **)(*in_ECX + 0x188))(param_1,1);
      if (param_1 == DAT_00b333c4) {
        DAT_00b333c4[0x187] = 0;
        uVar8 = (**(code **)(*piVar3 + 0x154))();
      }
      else {
        uVar8 = (**(code **)(*param_1 + 0x154))();
      }
      FUN_0065a2c0();
      uVar9 = FUN_00531d80();
      FUN_005ea350(uVar9);
      FUN_0088d0e0(uVar8,uVar9,1,0);
      (**(code **)(*(int *)piVar3[0x16] + 0x188))(piVar3,1);
      iVar4 = piVar3[10];
      uVar8 = (**(code **)(*piVar3 + 0x174))(iVar4);
      uVar9 = FUN_006ecc80(uVar8);
      uVar10 = FUN_004d6670(uVar9);
      FUN_004d7a20(uVar10,uVar9,uVar8,iVar4);
      return 1;
    }
  }
  return 1;
}



float10 FUN_00655fe0(int *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar8;
  float local_58;
  undefined4 local_54;
  float local_50;
  undefined4 local_4c;
  int local_48;
  int local_40;
  undefined8 local_3c;
  undefined4 uStack_34;
  float fStack_28;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [16];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c3b48;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff98;
  *unaff_FS_OFFSET = (int)&local_c;
  local_58 = 0.0;
  if (*(int *)(in_ECX + 0x184) == 0) goto LAB_0065621a;
  local_3c._0_4_ = 0;
  local_58 = 0.0;
  local_50 = 0.0;
  local_4 = 0;
  local_4c = 0;
  iVar4 = FUN_007ed160(uVar3);
  local_54 = 0;
  if (((char)param_2 != '\0') &&
     (puVar5 = (undefined4 *)FUN_004d7fc0(), puVar5 != (undefined4 *)0x0)) {
    local_54 = *puVar5;
  }
  if ((iVar4 == 0) && (param_1 == DAT_00b333c4)) {
    uVar6 = FUN_00660110(1);
    FUN_007c7050(uVar6,0);
    iVar4 = FUN_007ed160(uVar3);
  }
  local_48 = FUN_007b4280(*(uint *)(*(int *)(in_ECX + 0x184) + 0x1c) >> 0x1c);
  if (local_48 == 0) {
    FUN_005ea1a0(param_1[0xf]);
    local_58 = 0.0;
    goto LAB_0065621a;
  }
  local_40 = *(int *)(local_48 + 0x118);
  param_2 = 0;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
  uVar6 = *puVar5;
  uVar1 = puVar5[1];
  fStack_28 = (float)puVar5[2];
  iVar7 = (**(code **)(*param_1 + 0x15c))(auStack_24);
  local_3c = (double)*(float *)(iVar7 + 8);
  iVar7 = (**(code **)(*param_1 + 0x158))(auStack_1c);
  fStack_28 = fStack_28 +
              (((float)(double)CONCAT44(uStack_34,local_3c._4_4_) - *(float *)(iVar7 + 8)) - 1.0) *
              0.5;
  if (param_1 == DAT_00b333c4) {
    fVar8 = (float10)FUN_007c6570(uVar6,uVar1,fStack_28,&param_2,&local_50,&local_4c,local_54);
    local_58 = (float)fVar8;
  }
  else {
    while (iVar4 != 0) {
      fVar8 = (float10)FUN_007d31b0(uVar6,uVar1,fStack_28,local_54);
      local_58 = (float)(fVar8 + (float10)local_58);
      iVar4 = FUN_007ed180();
      param_2 = param_2 + 1;
    }
  }
  iVar4 = FUN_006ecc80();
  if (iVar4 == 0) {
LAB_006561e2:
    if (local_40 != 0) {
      fVar8 = (float10)FUN_007d31b0(uVar6,uVar1,fStack_28,0);
      goto LAB_00656202;
    }
  }
  else {
    FUN_006ecc80();
    cVar2 = FUN_004c97f0();
    if (cVar2 == '\0') goto LAB_006561e2;
    fVar8 = (float10)local_50;
LAB_00656202:
    local_58 = (float)(fVar8 + (float10)local_58);
  }
  local_58 = local_58 * 100.0;
LAB_0065621a:
  fVar8 = (float10)local_58;
  if (fVar8 <= (float10)100.0) {
    if (fVar8 < (float10)0) {
      fVar8 = (float10)(float)(float10)0;
    }
  }
  else {
    fVar8 = (float10)100.0;
  }
  *unaff_FS_OFFSET = local_c;
  return fVar8;
}



void FUN_00656270(undefined4 param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *in_ECX;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uStack_2c;
  undefined4 auStack_24 [9];
  
  FUN_00651dd0();
  piVar2 = param_2;
  uVar9 = param_4;
  if (in_ECX[0x39] != 0) {
    piVar4 = (int *)(**(code **)(*in_ECX + 0x118))(param_2);
    piVar5 = (int *)(**(code **)(*in_ECX + 0x124))(piVar2);
    param_2 = piVar5;
    if ((char)in_ECX[0x3d] != '\0') {
      piVar4 = (int *)(**(code **)(*in_ECX + 0x11c))(piVar2);
    }
    uVar9 = param_4;
    if (piVar4 != (int *)0x0) {
      if (piVar5 == (int *)0x0) {
        if (((char)param_1 == '\0') && (in_ECX[0x39] != 0)) {
          (**(code **)(*piVar4 + 0x8c))(&param_2,0);
          FUN_007016a0();
          cVar3 = FUN_0045a500();
          uVar9 = param_4;
          if (cVar3 == '\0') {
            FUN_005f2e70(*(undefined4 *)(in_ECX[0x39] + 8),1,0,0,0,0);
          }
        }
      }
      else {
        iVar6 = FUN_00405790(0);
        if (((((char)in_ECX[0x3d] == '\0') || (piVar2 == (int *)0x0)) ||
            (iVar7 = FUN_00478180(), iVar6 != iVar7)) && (iVar6 != 0)) {
          if ((char)param_1 == '\0') {
            (**(code **)(*param_2 + 0x84))(iVar6,1);
          }
          else {
            (**(code **)(*piVar4 + 0x84))();
          }
        }
        else {
          iVar6 = FUN_00405790(0);
          uVar9 = param_4;
          if (iVar6 == 0) goto LAB_00656400;
        }
        uVar1 = DAT_00b3f9b0;
        uVar9 = DAT_00b3f9a8;
        puVar8 = &DAT_00b26dc4;
        puVar10 = auStack_24;
        for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        uStack_2c = DAT_00b3f9ac;
        cVar3 = *(char *)(*(int *)(in_ECX[0x39] + 8) + 0x90);
        if (cVar3 == '\x04') {
          if ((char)param_1 == '\0') {
            FUN_0070fd30(0x40490fdb);
          }
        }
        else if ((cVar3 == '\x05') && ((char)param_1 == '\0')) {
          FUN_0070fd30(0x3dee85a1);
          uStack_2c = 0x41d5ced9;
        }
        puVar8 = auStack_24;
        puVar10 = (undefined4 *)(iVar6 + 0x30);
        for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        *(undefined4 *)(iVar6 + 0x54) = uVar9;
        *(undefined4 *)(iVar6 + 0x58) = uStack_2c;
        *(undefined4 *)(iVar6 + 0x5c) = uVar1;
        uVar9 = param_4;
      }
    }
  }
LAB_00656400:
  cVar3 = FUN_005e32d0();
  if (((cVar3 != '\0') && (param_3 != 0)) && (iVar6 = FUN_00589b70(0x40c), iVar6 == 0)) {
    if ((char)param_1 == '\0') {
      FUN_00471990();
    }
    else {
      FUN_00476410(uVar9,0);
    }
  }
  FUN_005ef9b0(param_1);
  return;
}



void FUN_006564c0(uint param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *in_ECX;
  int iVar11;
  int *unaff_FS_OFFSET;
  char *pcVar12;
  char cStack_49;
  uint local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar11 = param_3;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c3b7b;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffa4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = FUN_009832e6(param_3,0,&PTR_PTR_00b05538,&PTR_PTR_00b03070,0,uVar5);
  uVar5 = param_2;
  local_44 = iVar6;
  FUN_00658df0(param_1,param_2,iVar11);
  local_48 = 0;
  local_40 = 0;
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    FUN_004534d0(&local_38,4);
    if (local_38 != 0x4b4f4c42) {
      puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar2 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\AI\\MiddleHighProcess.cpp",0x1a56,*(undefined1 *)(DAT_00b33b00 + 0x7c));
        iVar6 = local_44;
      }
      else {
        piVar7 = (int *)FUN_0046b250(*puVar2);
        uVar8 = (**(code **)(*piVar7 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\AI\\MiddleHighProcess.cpp",0x1a56,*puVar2,uVar8);
        iVar6 = local_44;
      }
    }
    local_40 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_48,2);
  }
  FUN_004534d0(in_ECX + 0x45,1);
  FUN_004534d0((int)in_ECX + 0x115,1);
  if (0x33 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x53,1);
    FUN_004534d0(in_ECX + 0x55,4);
  }
  if (0x4c < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x56,4);
  }
  if (((param_1 & 0x28000000) != 0) || ((uVar5 & 0x28000000) != 0)) {
    bVar3 = false;
    if (((char)in_ECX[0x3d] == '\0') &&
       ((*(int *)(iVar11 + 0x3c) != 0 &&
        (iVar9 = FUN_006f94a0(*(int *)(iVar11 + 0x3c),"ArrowBone"), iVar9 != 0)))) {
      bVar3 = true;
    }
    (**(code **)(*in_ECX + 0x3ec))(iVar11);
    if (((char)in_ECX[0x3d] == '\0') && (bVar3)) {
      FUN_005e13d0(0);
    }
    iVar9 = *(int *)(iVar11 + 0x3c);
    if (iVar9 != 0) {
      if ((iVar11 == DAT_00b333c4) && (*(char *)(DAT_00b333c4 + 0x588) == '\0')) {
        if (*(short *)(iVar9 + 0xb6) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = **(int **)(iVar9 + 0xb0);
        }
      }
      FUN_005ea1a0(iVar9);
    }
  }
  if (((param_1 & 0x80000) != 0) && (FUN_0045ba00(&iStack_3c,4), iStack_3c != 0)) {
    FUN_004534d0(&iStack_34,1);
    if (iVar6 == 0) {
      (**(code **)(*DAT_00b34d90 + 0x18))("Package being created on non-actor!");
    }
    piVar7 = (int *)FUN_00463ec0(iStack_3c,iVar6,iStack_34);
    (**(code **)(*piVar7 + 0xe4))();
    in_ECX[0x30] = (int)piVar7;
    piVar7 = in_ECX + 0x33;
    FUN_004534d0(piVar7,4);
    iVar6 = FUN_00673980(*(undefined4 *)(in_ECX[0x30] + 0x18));
    if (iVar6 <= *piVar7) {
      *piVar7 = 0;
    }
  }
  FUN_0045ba00(&iStack_30,4);
  in_ECX[0x4f] = iStack_30;
  FUN_004534d0(in_ECX + 0x38,4);
  FUN_004534d0(in_ECX + 0x60,1);
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x18) {
    FUN_004534d0(&cStack_49,1);
  }
  FUN_004534d0(in_ECX + 0x35,0xc);
  FUN_004534d0(in_ECX + 0x31,4);
  FUN_004534d0(in_ECX + 0x4e,2);
  FUN_004534d0((int)in_ECX + 0x11d,1);
  FUN_004534d0(in_ECX + 0x49,1);
  FUN_0045ba00(&iStack_2c,4);
  in_ECX[0x48] = iStack_2c;
  FUN_004534d0(&uStack_28,4);
  FUN_004534d0(&param_2,1);
  FUN_004534d0(&iStack_18,0xc);
  FUN_006faee0(uStack_28);
  *(undefined1 *)((int)in_ECX + 0x136) = (undefined1)param_2;
  in_ECX[0x4a] = iStack_18;
  in_ECX[0x4b] = iStack_14;
  in_ECX[0x4c] = iStack_10;
  FUN_004534d0(&param_3,1);
  if ((char)param_3 == '\0') {
    uVar8 = FUN_009832e6(iVar11,0,&PTR_PTR_00b05538,&PTR_PTR_00b03070,0);
    (**(code **)(*in_ECX + 0x2f8))(uVar8);
  }
  else if ((((param_1 & 8) == 0) && (*(byte *)(DAT_00b33b00 + 0x7c) < 0x2f)) &&
          (FUN_004534d0(&cStack_49,1), cStack_49 != '\0')) {
    iStack_1c = FUN_00401f00(8);
    uStack_4 = 0;
    if (iStack_1c == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_00497210();
    }
    uStack_4 = 0xffffffff;
    FUN_004973d0();
    if (iVar6 != 0) {
      FUN_00497220();
      FUN_00401f20(iVar6);
    }
  }
  *(char *)(in_ECX + 0x47) = (char)param_3;
  if ((param_1 & 0x2000000) != 0) {
    FUN_00470780(iVar11,in_ECX[0x5f]);
  }
  FUN_0045ba00(&iStack_24,4);
  in_ECX[0x51] = iStack_24;
  FUN_0045ba00(&iStack_20,4);
  in_ECX[0x5e] = iStack_20;
  FUN_0068ee90(in_ECX[0x5d],local_44);
  if (0x44 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x32,1);
  }
  if (0x48 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x5a,1);
    FUN_004534d0((int)in_ECX + 0x169,1);
  }
  if (100 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x68) {
      FUN_00452170(4);
    }
    FUN_004534d0(in_ECX + 0x2e,4);
    FUN_004534d0(in_ECX + 0x2f,4);
    if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x68) {
      FUN_00452170(4);
    }
    FUN_004534d0(&param_1,2);
    uVar5 = 0;
    if ((short)param_1 != 0) {
      do {
        FUN_0045ba00(&iStack_34,4);
        iVar11 = iStack_34;
        if (iStack_34 != 0) {
          if (in_ECX[0x2a] == 0) {
            in_ECX[0x2a] = iStack_34;
          }
          else {
            piVar7 = (int *)FUN_00401f00(8);
            if (piVar7 == (int *)0x0) {
              piVar7 = (int *)0x0;
            }
            else {
              *piVar7 = in_ECX[0x2a];
              piVar7[1] = 0;
            }
            piVar7[1] = in_ECX[0x2b];
            in_ECX[0x2b] = (int)piVar7;
            in_ECX[0x2a] = iVar11;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < (param_1 & 0xffff));
    }
  }
  if (0x6c < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0((int)in_ECX + 0x16b,1);
  }
  if (0x70 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045ba00(&iStack_1c,4);
    in_ECX[0x52] = iStack_1c;
  }
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar5 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      uVar10 = local_48 & 0xffff;
      if (uVar10 + local_40 < uVar5) {
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar11 = (uVar5 - uVar10) - local_40;
        pcVar12 = 
        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      else {
        if (uVar10 + local_40 <= uVar5) goto LAB_00656c6c;
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar11 = (uVar10 - uVar5) + local_40;
        pcVar12 = 
        "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      FUN_004a7a60(pcVar12,iVar11,".\\AI\\MiddleHighProcess.cpp",0x1b28,uVar1);
    }
    else {
      piVar7 = (int *)FUN_0046b250(*puVar2);
      iVar11 = local_40;
      uVar10 = (local_48 & 0xffff) + local_40;
      if (uVar10 < uVar5) {
        uVar8 = (**(code **)(*piVar7 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar5 - (local_48 & 0xffff)) - iVar11,".\\AI\\MiddleHighProcess.cpp",0x1b28,
                     *puVar2,uVar8);
      }
      else if (uVar5 < uVar10) {
        uVar8 = (**(code **)(*piVar7 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_48 & 0xffff) - uVar5) + iVar11,".\\AI\\MiddleHighProcess.cpp",0x1b28,
                     *puVar2,uVar8);
      }
    }
  }
LAB_00656c6c:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00657340(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  LONG LVar4;
  int iVar5;
  undefined4 *puVar6;
  int *in_ECX;
  undefined4 *unaff_EBX;
  int *unaff_retaddr;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [16];
  int iStack_4;
  
  piVar3 = (int *)(**(code **)(*in_ECX + 0x18c))(&local_20);
  iVar1 = *piVar3;
  if (((unaff_EBX != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(unaff_EBX + 1), LVar4 == 0)
      ) && (unaff_EBX != (undefined4 *)0x0)) {
    (**(code **)*unaff_EBX)(1);
  }
  if (iVar1 == 0) {
    return;
  }
  cVar2 = (**(code **)(*unaff_retaddr + 0x198))(0);
  if (cVar2 != '\0') {
    return;
  }
  FUN_004534d0(&iStack_4,4);
  *(int *)(iVar1 + 0x1ec) = iStack_4;
  FUN_004534d0(iVar1 + 0x2a0,4);
  FUN_004534d0(&stack0xffffffdc,4);
  *(undefined4 *)(iVar1 + 500) = 0;
  *(uint *)(iVar1 + 500) = *(uint *)(iVar1 + 500) | (uint)unaff_EBX;
  if ((((uint)unaff_EBX & 0x800) != 0) && (0x22 < *(byte *)(DAT_00b33b00 + 0x7c))) {
    FUN_004534d0(&local_20,0xc);
    iVar5 = (**(code **)(*in_ECX + 0x36c))();
    if (((iVar5 != 0) && (iVar5 = (**(code **)(*in_ECX + 0x380))(), iVar5 != 0)) &&
       ((cVar2 = (**(code **)(*unaff_retaddr + 400))(), cVar2 == '\0' ||
        (iVar5 = (**(code **)(*unaff_retaddr + 0x380))(), iVar5 == 0)))) {
      puVar6 = (undefined4 *)(**(code **)(*in_ECX + 0x380))();
      local_20 = *puVar6;
      uStack_1c = puVar6[1];
      uStack_18 = puVar6[2];
    }
    FUN_00452a10(&local_20);
  }
  iVar5 = (**(code **)(*in_ECX + 0x36c))();
  if (iVar5 == 0) {
    FUN_0065ac20(0);
  }
  FUN_004534d0(iVar1 + 0x2e0,0x10);
  FUN_004534d0(iVar1 + 0x2f0,0x10);
  FUN_004534d0(auStack_14,0xc);
  FUN_0064b3a0(auStack_14);
  cVar2 = (**(code **)(*unaff_retaddr + 400))();
  if (cVar2 == '\0') {
    if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x20) goto LAB_00657546;
    iVar5 = iVar1 + 0x328;
  }
  else {
    FUN_004534d0(iVar1 + 0x31c,4);
    iVar5 = iVar1 + 800;
  }
  FUN_004534d0(iVar5,4);
  FUN_004534d0(iVar1 + 0x324,4);
LAB_00657546:
  if ((iStack_4 == 2) &&
     (((*(uint *)(iVar1 + 500) >> 8 & 1) != 0 || ((*(uint *)(iVar1 + 500) >> 9 & 1) != 0)))) {
    *(undefined4 *)(iVar1 + 800) = 0;
  }
  if (0x76 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(iVar1 + 0x32c,4);
    FUN_004534d0(iVar1 + 0x330,4);
  }
  return;
}



void FUN_006575b0(int param_1,char param_2,char param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c3bb6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined1 *)(in_ECX + 0x58) = 0;
  if (param_3 != '\0') {
    piVar3 = (int *)FUN_00679120(param_1);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x68))();
    }
  }
  if (param_2 == '\0') goto LAB_00657850;
  (**(code **)(*in_ECX + 0x420))(0,uVar2);
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    iVar4 = (**(code **)(**(int **)(param_1 + 0x58) + 0xec))(1);
    if (iVar4 != 0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x13c))();
      if (cVar1 == '\0') {
        iVar4 = (**(code **)(*in_ECX + 0xec))(1);
        iVar4 = FUN_004695a0(*(undefined4 *)(iVar4 + 8));
        if (iVar4 != 0) {
          (**(code **)(**(int **)(param_1 + 0x58) + 0xec))(1);
          fVar7 = (float10)FUN_004849c0();
          fVar8 = (float10)(*(code *)**(undefined4 **)(iVar4 + 0x24))(param_1);
          fVar7 = (float10)(double)CONCAT44(uStack_14,(int)((ulonglong)(double)fVar7 >> 0x20));
          if (fVar8 < fVar7 != (fVar8 == fVar7)) {
            iVar4 = FUN_00419b30(0);
            if ((iVar4 != 0) && (*(int *)(iVar4 + 0x7c) != 0)) {
              (**(code **)(*in_ECX + 0x420))(*(int *)(iVar4 + 0x7c));
            }
          }
        }
      }
    }
  }
  uVar5 = (**(code **)(*in_ECX + 0x41c))();
  piVar3 = (int *)FUN_00679240(param_1,uVar5);
  if (piVar3 == (int *)0x0) {
    iVar4 = (**(code **)(*in_ECX + 0x41c))();
    if (iVar4 != 0) {
      iVar4 = FUN_00401f00(0x4c);
      uStack_4 = 0;
      if (iVar4 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        uVar9 = 0xbf800000;
        uVar5 = (**(code **)(*in_ECX + 0x41c))(0xbf800000);
        piVar3 = (int *)FUN_006a0980(param_1,uVar5,uVar9);
      }
      uStack_4 = 0xffffffff;
      *(undefined1 *)(piVar3 + 10) = 1;
      if (param_4 != '\0') {
        piVar3[0xe] = 0x42c80000;
      }
      cVar1 = (**(code **)(*piVar3 + 0x68))();
      if (cVar1 != '\0') {
        FUN_00678d30(piVar3);
        if (param_4 == '\0') {
          param_3 = '\x01';
        }
      }
    }
  }
  else {
    (**(code **)(*piVar3 + 0x68))();
  }
  if ((param_1 != DAT_00b333c4) || (*(int *)(DAT_00b333c4 + 0x5d8) == 0)) goto LAB_00657850;
  iVar4 = (**(code **)(*in_ECX + 0x41c))();
  piVar3 = *(int **)(DAT_00b333c4 + 0x5e0);
  if (iVar4 == 0) {
    if (piVar3 != (int *)0x0) {
      (**(code **)*piVar3)(1);
      *(undefined4 *)(DAT_00b333c4 + 0x5e0) = 0;
    }
    goto LAB_00657850;
  }
  if (piVar3 == (int *)0x0) {
LAB_006577cc:
    iVar6 = FUN_00401f00(0x4c);
    uStack_4 = 1;
    if (iVar6 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_006a0980(DAT_00b333c4,iVar4,0xbf800000);
    }
    *(undefined1 *)(piVar3 + 10) = 1;
    uStack_4 = 0xffffffff;
    *(int **)(DAT_00b333c4 + 0x5e0) = piVar3;
    if (param_3 == '\0') {
      piVar3[0xe] = 0x42c80000;
    }
  }
  else if (piVar3[0xd] != iVar4) {
    (**(code **)*piVar3)(1);
    goto LAB_006577cc;
  }
  cVar1 = (**(code **)(*piVar3 + 0x68))();
  if (cVar1 == '\0') {
    (**(code **)*piVar3)(1);
    *(undefined4 *)(DAT_00b333c4 + 0x5e0) = 0;
  }
LAB_00657850:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00657890(byte param_1)

{
  FUN_00651f70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006578b0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *in_ECX;
  
  cVar1 = FUN_005e32d0();
  if ((((cVar1 != '\0') && (iVar2 = (**(code **)(*in_ECX + 0x36c))(), iVar2 == 0)) &&
      (in_ECX[0x48] == 0)) && ((in_ECX[0x2d] == 0 && (in_ECX[0x2c] == 0)))) {
    FUN_006553e0(param_1,0);
  }
  iVar2 = (**(code **)(*in_ECX + 0x36c))();
  if ((iVar2 != 9) && (cVar1 = FUN_005e32d0(), cVar1 != '\0')) {
    if (in_ECX[0x48] == 0) {
      piVar6 = in_ECX + 0x2c;
      iVar2 = 0;
      piVar3 = piVar6;
      if (piVar6 != (int *)0x0) {
        do {
          if (*piVar3 != 0) {
            iVar2 = iVar2 + 1;
          }
          piVar3 = (int *)piVar3[1];
        } while (piVar3 != (int *)0x0);
        if (iVar2 != 0) {
          in_ECX[0x48] = *piVar6;
          iVar2 = FUN_004db6b0();
          if (iVar2 == 0) {
            iVar4 = FUN_0052b4a0();
            iVar5 = FUN_0047df80(0);
            iVar2 = iVar5 % iVar4;
            if (iVar4 <= iVar5 % iVar4) {
              iVar2 = iVar4;
            }
            if (0 < iVar2) {
              do {
                iVar2 = iVar2 + -1;
                piVar6 = (int *)piVar6[1];
              } while (iVar2 != 0);
            }
            in_ECX[0x48] = *piVar6;
          }
          else {
            FUN_0065c620(in_ECX[0x48]);
          }
        }
      }
    }
    (**(code **)(*in_ECX + 0xd0))(in_ECX[0x48]);
    if (in_ECX[0x48] != 0) {
      (**(code **)(*in_ECX + 0x51c))(param_1,0);
    }
    if (((int *)in_ECX[0xd] != (int *)0x0) &&
       (cVar1 = (**(code **)(*(int *)in_ECX[0xd] + 0x2c))(), cVar1 != '\0')) {
      in_ECX[0x48] = 0;
      FUN_006faee0(0);
      *(undefined1 *)((int)in_ECX + 0x136) = 0;
      in_ECX[0x4a] = DAT_00b3f9a8;
      in_ECX[0x4b] = DAT_00b3f9ac;
      in_ECX[0x4c] = DAT_00b3f9b0;
    }
  }
  cVar1 = FUN_005e32d0();
  if (((cVar1 != '\0') && (iVar2 = (**(code **)(*in_ECX + 0x36c))(), iVar2 == 9)) ||
     ((in_ECX[0x48] == 0 && ((in_ECX[0x2d] == 0 && (in_ECX[0x2c] == 0)))))) {
    (**(code **)(*in_ECX + 0xbc))(1);
    FUN_004526e0();
  }
  (**(code **)(*in_ECX + 0x48))(param_1);
  return;
}



void FUN_00657a80(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *in_ECX;
  undefined4 uVar8;
  
  (**(code **)(*in_ECX + 0x184))();
  piVar2 = (int *)FUN_005e4400();
  cVar1 = (**(code **)(*in_ECX + 0xc0))();
  if (cVar1 == '\0') {
    cVar1 = FUN_005e32d0();
    if ((((cVar1 != '\0') && (iVar3 = (**(code **)(*in_ECX + 0x36c))(), iVar3 == 0)) &&
        (in_ECX[0x48] == 0)) && ((in_ECX[0x2d] == 0 && (in_ECX[0x2c] == 0)))) {
      FUN_006553e0(param_1,1);
    }
    cVar1 = FUN_005e32d0();
    if ((cVar1 != '\0') && (iVar3 = (**(code **)(*in_ECX + 0x36c))(), iVar3 != 4)) {
      if (in_ECX[0x48] == 0) {
        piVar6 = in_ECX + 0x2c;
        iVar3 = FUN_0052b4a0();
        if (iVar3 != 0) {
          in_ECX[0x48] = *piVar6;
          iVar3 = FUN_004db6b0();
          if (iVar3 == 0) {
            iVar4 = FUN_0052b4a0();
            iVar5 = FUN_0047df80(0);
            iVar3 = iVar5 % iVar4;
            if (iVar4 <= iVar5 % iVar4) {
              iVar3 = iVar4;
            }
            if (0 < iVar3) {
              do {
                iVar3 = iVar3 + -1;
                piVar6 = (int *)piVar6[1];
              } while (iVar3 != 0);
            }
            iVar3 = *piVar6;
            in_ECX[0x48] = iVar3;
            FUN_0065c620(iVar3);
          }
          else {
            FUN_0065c620(in_ECX[0x48]);
          }
        }
      }
      (**(code **)(*in_ECX + 0xd0))(in_ECX[0x48]);
      if (in_ECX[0x48] != 0) {
        (**(code **)(*in_ECX + 0x51c))(param_1,0);
      }
      if (((int *)in_ECX[0xd] != (int *)0x0) &&
         (cVar1 = (**(code **)(*(int *)in_ECX[0xd] + 0x2c))(), cVar1 != '\0')) {
        in_ECX[0x48] = 0;
        FUN_006faee0(0);
        *(undefined1 *)((int)in_ECX + 0x136) = 0;
        in_ECX[0x4a] = DAT_00b3f9a8;
        in_ECX[0x4b] = DAT_00b3f9ac;
        in_ECX[0x4c] = DAT_00b3f9b0;
      }
    }
    cVar1 = FUN_005e32d0();
    if (((cVar1 != '\0') && (iVar3 = (**(code **)(*in_ECX + 0x36c))(), iVar3 == 4)) ||
       ((in_ECX[0x48] == 0 && ((in_ECX[0x2d] == 0 && (in_ECX[0x2c] == 0)))))) {
      uVar8 = 0;
      if (piVar2 != (int *)0x0) {
        if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
          uVar8 = *(undefined4 *)*piVar2;
        }
        FUN_005e44c0(piVar2[2],uVar8,1);
      }
      (**(code **)(*in_ECX + 0xbc))(1);
      FUN_004526e0();
    }
    (**(code **)(*in_ECX + 0x48))(param_1);
    uVar7 = (**(code **)(*in_ECX + 0x2c0))();
    if ((uVar7 & 0x400) != 0) {
      (**(code **)(*in_ECX + 0x2c4))(0x400,0);
    }
    return;
  }
  (**(code **)(*in_ECX + 0x48))(param_1);
  return;
}



void FUN_00658690(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c3be8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006438f0(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a72d64;
  FUN_0065be10();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006586f0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c3be8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a72d64;
  local_4 = 0;
  FUN_0065ccc0(uVar1);
  local_4 = 0xffffffff;
  FUN_00648cb0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00658760(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  FUN_0065cd10();
  return;
}



void FUN_00658790(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0065cb80(param_2);
  FUN_00643340(param_1,param_2,param_3);
  FUN_009828c0();
  return;
}



float10 FUN_006587e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_0065cb80(param_2);
  fVar2 = (float10)FUN_006433e0(param_1,param_2,param_3);
  return (float10)(float)(fVar2 + (float10)(double)fVar1);
}



void FUN_00658830(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_0065ca60(param_2,(float)param_3,1);
  return;
}



void FUN_00658850(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0065ca60(param_2,param_3,1);
  return;
}



void FUN_00658880(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_0065ca60(param_2,(float)param_3,0);
  return;
}



void FUN_006588a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0065ca60(param_2,param_3,0);
  return;
}



void FUN_00658940(uint param_1,undefined4 param_2)

{
  FUN_006478e0(param_1,param_2);
  if ((param_1 & 0x100000) != 0) {
    FUN_0065cc90();
  }
  return;
}



void FUN_00658970(byte param_1)

{
  FUN_006586f0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



ushort FUN_00658bc0(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  ushort uVar7;
  uint uVar8;
  
  uVar4 = FUN_00647060(param_1,param_2);
  uVar4 = uVar4 & 0xffff;
  cVar2 = FUN_0045a170();
  uVar8 = uVar4;
  if (cVar2 != '\0') {
    uVar8 = uVar4 + 6;
  }
  uVar7 = (short)uVar8 + 4;
  if ((param_1 & 0x100000) != 0) {
    sVar3 = FUN_0065c520();
    uVar7 = uVar7 + sVar3;
  }
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar5 = (int *)FUN_0046b250(*puVar1);
      uVar6 = (**(code **)(*piVar5 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0x230,".\\AI\\MiddleLowProcess.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,uVar7 - uVar4,*puVar1,uVar6);
      return uVar7;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",uVar7 - uVar4,0x230,
                 ".\\AI\\MiddleLowProcess.cpp");
  }
  return uVar7;
}



void FUN_00658cb0(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  int *piVar6;
  undefined4 uVar7;
  int in_ECX;
  short *psVar8;
  
  uVar4 = param_1;
  FUN_006471a0(param_1,param_2);
  psVar8 = (short *)0x0;
  param_1 = 0;
  iVar1 = *(int *)(DAT_00b33b00 + 0x14);
  cVar5 = FUN_0045a170();
  if (cVar5 != '\0') {
    param_2 = 0x4b4f4c42;
    FUN_0045b9a0(&param_2,4);
    psVar8 = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&param_1,2);
  }
  FUN_0045b9a0(in_ECX + 0x90,4);
  if ((uVar4 & 0x100000) != 0) {
    FUN_0065c270();
  }
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar3 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar3 - iVar1,0x247,
                   ".\\AI\\MiddleLowProcess.cpp");
    }
    else {
      piVar6 = (int *)FUN_0046b250(*puVar2);
      uVar7 = (**(code **)(*piVar6 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0x247,".\\AI\\MiddleLowProcess.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar3 - iVar1,*puVar2,uVar7);
    }
  }
  cVar5 = FUN_0045a170();
  if (cVar5 != '\0') {
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)psVar8 + 0xffffU < uVar4) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\AI\\MiddleLowProcess.cpp",0x247);
    }
    *psVar8 = (short)uVar4 - (short)psVar8;
  }
  return;
}



void FUN_00658df0(uint param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  
  FUN_00647450(param_1,param_2,param_3);
  iVar7 = 0;
  param_3 = 0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    FUN_004534d0(&param_2,4);
    if (param_2 != 0x4b4f4c42) {
      puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\AI\\MiddleLowProcess.cpp",0x254,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar4 = (int *)FUN_0046b250(*puVar1);
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\AI\\MiddleLowProcess.cpp",0x254,*puVar1,uVar5);
      }
    }
    iVar7 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&param_3,2);
  }
  FUN_004534d0(in_ECX + 0x90,4);
  if ((param_1 & 0x100000) != 0) {
    FUN_0065cbb0();
  }
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar2 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar6 = param_3 & 0xffff;
      if (uVar6 + iVar7 < uVar2) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar2 - uVar6) - iVar7,".\\AI\\MiddleLowProcess.cpp",0x25d,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar2 < uVar6 + iVar7) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar6 - uVar2) + iVar7,".\\AI\\MiddleLowProcess.cpp",0x25d,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar4 = (int *)FUN_0046b250(*puVar1);
      uVar6 = (param_3 & 0xffff) + iVar7;
      if (uVar6 < uVar2) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar2 - (param_3 & 0xffff)) - iVar7,".\\AI\\MiddleLowProcess.cpp",0x25d,
                     *puVar1,uVar5);
        return;
      }
      if (uVar2 < uVar6) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((param_3 & 0xffff) - uVar2) + iVar7,".\\AI\\MiddleLowProcess.cpp",0x25d,
                     *puVar1,uVar5);
        return;
      }
    }
  }
  return;
}



void FUN_00659990(void)

{
  undefined4 *in_ECX;
  
  FUN_004d9a70();
  *in_ECX = &PTR_FUN_00a732fc;
  in_ECX[6] = &PTR_FUN_00a732f4;
  return;
}



float10 FUN_006599b0(void)

{
  int in_ECX;
  float10 fVar1;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x006599be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float10)(**(code **)(**(int **)(in_ECX + 0x58) + 0x28))();
    return fVar1;
  }
  return (float10)-1.0;
}



float10 FUN_006599d0(void)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  
  if (*(int *)(in_ECX + 0x58) == 0) {
    fVar2 = (float10)-1.0;
  }
  else {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x2c))();
    fVar2 = (float10)iVar1;
    if (iVar1 < 0) {
      return fVar2 + (float10)4.2949673e+09;
    }
  }
  return fVar2;
}



undefined4 FUN_00659a00(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00659a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 8))();
    return uVar1;
  }
  return 0xffffffff;
}



void FUN_00659a20(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00659a2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x20))();
    return;
  }
  return;
}



undefined4 FUN_00659a60(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar2 = (**(code **)(*(int *)in_ECX[0x16] + 8))(uVar1);
  FUN_00674550(in_ECX,uVar2);
  iVar3 = FUN_00401f00(0x2ec);
  uStack_4 = 0;
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00628ee0();
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*piVar4 + 4))(in_ECX[0x16]);
  if ((undefined4 *)in_ECX[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x16])(1);
  }
  in_ECX[0x16] = (int)piVar4;
  FUN_00673a90(in_ECX,0,0,0,0);
  (**(code **)(*in_ECX + 0x178))(0);
  (**(code **)(*(int *)in_ECX[0x16] + 0x4c))();
  *unaff_FS_OFFSET = unaff_ESI;
  return 1;
}



undefined4 FUN_00659b30(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined4 uVar4;
  
  iVar2 = (**(code **)(*in_ECX + 0x154))();
  if (iVar2 != 0) {
    uVar4 = 1;
    uVar3 = FUN_006ecc80(1);
    cVar1 = FUN_0043f8c0(uVar3,uVar4);
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
      if (iVar2 == 0) {
        (**(code **)(*in_ECX + 0x10))(1);
        return 0;
      }
      (**(code **)(*in_ECX + 0x1a4))();
    }
  }
  return 1;
}



void FUN_00659b90(float param_1)

{
  int iVar1;
  int *in_ECX;
  float10 fVar2;
  
  iVar1 = *in_ECX;
  fVar2 = (float10)(**(code **)(iVar1 + 0x1e0))();
  (**(code **)(iVar1 + 0x1e8))((float)(fVar2 + (float10)param_1));
  return;
}



void FUN_00659bc0(void)

{
  int in_ECX;
  
  if (*(undefined4 **)(in_ECX + 0x58) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x58))(1);
  }
  *(undefined4 *)(in_ECX + 0x58) = 0;
  return;
}



short FUN_00659be0(undefined4 param_1)

{
  short sVar1;
  int in_ECX;
  short unaff_SI;
  
  sVar1 = FUN_004e2bf0(param_1);
  if (*(int *)(in_ECX + 0x58) != 0) {
    sVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x3f0))(param_1);
    return unaff_SI + sVar1;
  }
  return sVar1 + 1;
}



void FUN_00659c30(undefined4 param_1)

{
  int in_ECX;
  undefined1 local_1;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x58) + 8))();
  }
  FUN_0046ac70(&local_1,1);
  FUN_004e2d60(param_1);
  if (*(int *)(in_ECX + 0x58) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x3f4))(param_1);
  }
  return;
}



void FUN_00659c90(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar5;
  char local_11;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d05ec;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046ac80(&local_11,1);
  switch(local_11) {
  case '\0':
    if ((int *)in_ECX[0x16] != (int *)0x0) {
      iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
      if (iVar3 != 0) {
        (**(code **)(*in_ECX + 0x1a4))();
      }
      goto switchD_00659cd5_default;
    }
    local_10 = FUN_00401f00(0x2ec,uVar2);
    local_4 = 0;
    if (local_10 == 0) {
      iVar3 = 0;
      uVar4 = 0;
    }
    else {
      iVar3 = FUN_00628ee0();
      uVar4 = 0;
    }
    break;
  case '\x01':
    if ((int *)in_ECX[0x16] != (int *)0x0) {
      iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
      if (iVar3 != 1) {
        (**(code **)(*in_ECX + 0x1b0))();
      }
      goto switchD_00659cd5_default;
    }
    local_10 = FUN_00401f00(0x18c,uVar2);
    local_4 = 1;
    if (local_10 == 0) {
      iVar3 = 0;
      uVar4 = 1;
    }
    else {
      iVar3 = FUN_0064b400();
      uVar4 = 1;
    }
    break;
  case '\x02':
    if ((int *)in_ECX[0x16] != (int *)0x0) {
      iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
      if (iVar3 != 2) {
        (**(code **)(*in_ECX + 0x1ac))();
      }
      goto switchD_00659cd5_default;
    }
    local_10 = FUN_00401f00(0xa8,uVar2);
    local_4 = 2;
    if (local_10 == 0) {
      iVar3 = 0;
      uVar4 = 2;
    }
    else {
      iVar3 = FUN_00658690();
      uVar4 = 2;
    }
    break;
  case '\x03':
    if ((int *)in_ECX[0x16] != (int *)0x0) {
      iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
      if (iVar3 != 3) {
        (**(code **)(*in_ECX + 0x1a8))();
      }
      goto switchD_00659cd5_default;
    }
    local_10 = FUN_00401f00(0x90,uVar2);
    local_4 = 3;
    if (local_10 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_006438f0();
    }
    uVar4 = 3;
    break;
  case -1:
    if ((int *)in_ECX[0x16] != (int *)0x0) {
      uVar4 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
      FUN_00674550(in_ECX,uVar4);
      if ((undefined4 *)in_ECX[0x16] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)in_ECX[0x16])(1);
      }
      in_ECX[0x16] = 0;
    }
  default:
    goto switchD_00659cd5_default;
  }
  local_4 = 0xffffffff;
  in_ECX[0x16] = iVar3;
  FUN_00673a90(in_ECX,uVar4,0,0,0);
switchD_00659cd5_default:
  iVar3 = (**(code **)(*in_ECX + 0x154))();
  if (iVar3 != 0) {
    uVar5 = 0;
    uVar4 = FUN_006ecc80(0);
    cVar1 = FUN_0043f8c0(uVar4,uVar5);
    if ((cVar1 == '\0') || (local_11 != '\0')) {
      (**(code **)(*in_ECX + 0x150))(0);
    }
  }
  FUN_004e00f0(param_1,param_2);
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x3f8))(param_1,param_2);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00659f30(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  iVar2 = FUN_004e4080();
  if ((iVar2 != 0) && (in_ECX[0x16] != 0)) {
    iVar3 = FUN_006ff9c0(&DAT_00a7d2cc);
    if (iVar3 != 0) {
      (**(code **)(*(int *)in_ECX[0x16] + 0x470))(iVar3);
    }
  }
  cVar1 = (**(code **)(*in_ECX + 400))();
  if (cVar1 != '\0') {
    iVar3 = iVar2;
    FUN_007b4280(0,iVar2);
    FUN_007c6c30(iVar3);
  }
  return iVar2;
}



void FUN_00659f90(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c3c18;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a732fc;
  in_ECX[6] = &PTR_FUN_00a732f4;
  local_4 = 0;
  if (((uint)in_ECX[2] >> 0xe & 1) == 0) {
    FUN_00674e10(in_ECX);
    if (*(char *)(DAT_00b33a98 + 0xcd4) == '\0') {
      FUN_004e1f80();
    }
    if ((int *)in_ECX[0x16] != (int *)0x0) {
      uVar2 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
      FUN_00674550(in_ECX,uVar2);
    }
  }
  if ((undefined4 *)in_ECX[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x16])(1,uVar1);
  }
  local_4 = 0xffffffff;
  FUN_004e2920();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0065a050(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *in_ECX;
  
  FUN_00673a50(0);
  piVar1 = (int *)FUN_007616d0();
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    piVar3 = (int *)*piVar1;
    if (piVar3 != in_ECX) {
      iVar2 = FUN_009832e6(piVar3,0,&PTR_PTR_00b05538,&PTR_PTR_00b03070,0);
      if (iVar2 == 0) {
        if (((char)param_1 != '\0') &&
           (piVar3 = (int *)FUN_009832e6(piVar3,0,&PTR_PTR_00b05538,&PTR_PTR_00b05b7c,0),
           piVar3 != (int *)0x0)) {
          iVar2 = *piVar3;
          uVar4 = (**(code **)(*in_ECX + 0x120))();
          (**(code **)(iVar2 + 0x218))(uVar4);
        }
      }
      else {
        piVar3 = (int *)FUN_005e6830();
        if (piVar3 == in_ECX) {
          (**(code **)(**(int **)(iVar2 + 0x58) + 0x4b4))();
        }
        if ((char)param_1 != '\0') {
          uVar4 = (**(code **)(*in_ECX + 0x120))();
          FUN_005e69e0(uVar4);
        }
        iVar5 = (**(code **)(**(int **)(iVar2 + 0x58) + 0x2b0))();
        iVar6 = (**(code **)(*in_ECX + 0x124))();
        if (iVar5 == iVar6) {
          (**(code **)(**(int **)(iVar2 + 0x58) + 0x2b4))(0);
        }
      }
    }
  }
  FUN_00673a50(1);
  for (puVar7 = (undefined4 *)FUN_007616d0(); puVar7 != (undefined4 *)0x0;
      puVar7 = (undefined4 *)puVar7[1]) {
    piVar1 = (int *)*puVar7;
    if (piVar1 != in_ECX) {
      iVar2 = FUN_009832e6(piVar1,0,&PTR_PTR_00b05538,&PTR_PTR_00b03070,0);
      if (iVar2 == 0) {
        if (((char)param_1 != '\0') &&
           (piVar1 = (int *)FUN_009832e6(piVar1,0,&PTR_PTR_00b05538,&PTR_PTR_00b05b7c,0),
           piVar1 != (int *)0x0)) {
          iVar2 = *piVar1;
          uVar4 = (**(code **)(*in_ECX + 0x120))();
          (**(code **)(iVar2 + 0x218))(uVar4);
        }
      }
      else {
        if ((char)param_1 != '\0') {
          uVar4 = (**(code **)(*in_ECX + 0x120))();
          FUN_005e69e0(uVar4);
        }
        iVar5 = (**(code **)(**(int **)(iVar2 + 0x58) + 0x2b0))();
        iVar6 = (**(code **)(*in_ECX + 0x124))();
        if (iVar5 == iVar6) {
          (**(code **)(**(int **)(iVar2 + 0x58) + 0x2b4))(0);
        }
      }
    }
  }
  FUN_00677b50(in_ECX,param_1);
  if (DAT_00b333c4 != 0) {
    if (*(int **)(DAT_00b333c4 + 0x58) != (int *)0x0) {
      (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0x4b8))();
    }
    if ((char)param_1 != '\0') {
      uVar4 = (**(code **)(*in_ECX + 0x120))();
      FUN_005e69e0(uVar4);
    }
    piVar1 = *(int **)(DAT_00b333c4 + 0x58);
    iVar2 = (**(code **)(*in_ECX + 0x124))();
    iVar5 = (**(code **)(*piVar1 + 0x2b0))();
    if (iVar5 == iVar2) {
                    /* WARNING: Could not recover jumptable at 0x0065a2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0x2b4))();
      return;
    }
  }
  return;
}



undefined4 FUN_0065a2c0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  undefined4 *unaff_EDI;
  undefined1 local_4 [4];
  
  if (*(int *)(in_ECX + 0x58) == 0) {
    return 0;
  }
  puVar2 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x58) + 0x18c))(local_4);
  uVar1 = *puVar2;
  if (((unaff_EDI != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(unaff_EDI + 1), LVar3 == 0)
      ) && (unaff_EDI != (undefined4 *)0x0)) {
    (**(code **)*unaff_EDI)(1);
  }
  return uVar1;
}



void FUN_0065a310(void)

{
  int iVar1;
  
  iVar1 = FUN_0065a2c0();
  if (iVar1 != 0) {
    FUN_008927e0();
    return;
  }
  return;
}



void FUN_0065a330(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_006ecc80();
  if (param_1 != iVar1) {
    if ((param_1 != 0) && (iVar1 = FUN_0065a2c0(), iVar1 != 0)) {
      fVar2 = (float10)FUN_004cace0();
      *(float *)(iVar1 + 0x318) = (float)(fVar2 * (float10)0.1428767293691635);
    }
    FUN_004d8aa0(param_1);
  }
  return;
}



void FUN_0065a450(float param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  float10 fVar5;
  
  if (in_ECX[0x16] != 0) {
    cVar1 = (**(code **)(*in_ECX + 0x19c))();
    if (cVar1 != '\0') {
      return;
    }
    uVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))();
    switch(uVar2) {
    case 4:
    case 5:
    case 9:
    case 10:
      iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x378))();
      if (((iVar3 != 0) && (piVar4 = (int *)FUN_009832e6(), piVar4 != (int *)0x0)) &&
         (iVar3 = (**(code **)(*piVar4 + 0x380))(), iVar3 == 0)) {
        return;
      }
    }
  }
  if (param_1 < 0.0) {
    fVar5 = (float10)FUN_00982bfa();
    FUN_004d8a10((float)fVar5);
    return;
  }
  if (param_1 <= 6.2831855) {
    FUN_004d8a10(param_1);
    return;
  }
  fVar5 = (float10)FUN_00982bfa();
  FUN_004d8a10((float)fVar5);
  return;
}



void FUN_0065a560(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  float *pfVar5;
  int *in_ECX;
  float10 fVar6;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  cVar1 = (**(code **)(*param_1 + 400))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_1 + 0x380))();
    if (iVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x154))("Bip01 Head");
      iVar2 = FUN_006f94a0(uVar3);
      pfVar4 = (float *)(**(code **)(*in_ECX + 0x174))();
      fStack_c = *(float *)(iVar2 + 0x88) - *pfVar4;
      fStack_8 = *(float *)(iVar2 + 0x8c) - pfVar4[1];
      fStack_10 = *(float *)(iVar2 + 0x90) - pfVar4[2];
      goto LAB_0065a60b;
    }
  }
  pfVar4 = (float *)(**(code **)(*in_ECX + 0x174))();
  pfVar5 = (float *)(**(code **)(*param_1 + 0x174))();
  fStack_c = *pfVar5 - *pfVar4;
  fStack_8 = pfVar5[1] - pfVar4[1];
  fStack_10 = pfVar5[2] - pfVar4[2];
LAB_0065a60b:
  fStack_18 = fStack_c;
  fStack_14 = fStack_8;
  fStack_4 = fStack_10;
  fVar6 = (float10)FUN_00683cb0(&fStack_18);
  (**(code **)(*in_ECX + 0x1e8))((float)fVar6);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0065a650(float param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  float local_4;
  
  local_4 = 1.553343;
  cVar2 = (**(code **)(*in_ECX + 400))();
  if (cVar2 != '\0') {
    piVar3 = (int *)FUN_009832e6();
    iVar4 = (**(code **)(*piVar3 + 0x380))();
    fVar1 = _DAT_00b36c20;
    if ((iVar4 != 0) ||
       (iVar4 = (**(code **)(*piVar3 + 0x18c))(), fVar1 = _DAT_00b36c28, iVar4 - 1U < 5)) {
      local_4 = fVar1 * 0.017453292;
    }
  }
  fVar1 = -1.553343;
  if ((-1.553343 <= param_1) && (fVar1 = param_1, local_4 < param_1)) {
    FUN_004d89d0(local_4);
    return;
  }
  FUN_004d89d0(fVar1);
  return;
}



void FUN_0065a780(uint param_1,uint param_2)

{
  int *in_ECX;
  
  FUN_004da2d0(param_1,param_2);
  if (in_ECX[0x16] != 0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x3fc))(param_1,param_2);
  }
  if ((((param_1 & 0x40000000) != 0) || ((param_2 & 0x40000000) != 0)) &&
     ((((uint)in_ECX[2] >> 0xb & 1) != 0 || (((uint)in_ECX[2] >> 5 & 1) != 0)))) {
    (**(code **)(*in_ECX + 0x150))(0);
  }
  return;
}



void FUN_0065a7f0(uint param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((param_1 & 0x8000000) != 0) {
    FUN_004dc5b0();
    FUN_004dccf0();
    FUN_004dc8f0(0);
    FUN_004dcab0();
  }
  FUN_004e0580(param_1);
  if (*(int **)(in_ECX + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x404))(param_1);
  }
  if ((((*(int *)(DAT_00b33b00 + 0x44) == 0x60000000) ||
       (*(int *)(DAT_00b33b00 + 0x44) == 0x7ffff000)) &&
      ((*(uint *)(DAT_00b33b00 + 0x18) >> 6 & 1) != 0)) &&
     ((*(int **)(in_ECX + 0x58) != (int *)0x0 &&
      (((*(uint *)(in_ECX + 8) >> 0xb & 1) != 0 || ((*(uint *)(in_ECX + 8) >> 5 & 1) != 0)))))) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 8))();
    FUN_00674550(in_ECX,uVar1);
    if (*(undefined4 **)(in_ECX + 0x58) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x58))(1);
    }
    *(undefined4 *)(in_ECX + 0x58) = 0;
  }
  return;
}



undefined4 * FUN_0065a8b0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *in_ECX;
  
  if (*(int *)(DAT_00b33398 + 0x24) != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x154))();
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_006ae370(param_1,param_3,0,0);
      if (puVar2 != (undefined4 *)0x0) {
        if ((param_3 & 2) != 0) {
          puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
          FUN_006b7360(*puVar3,puVar3[1],puVar3[2]);
          FUN_006ac3e0(*puVar2,in_ECX);
        }
        FUN_006b7190(param_2);
      }
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



undefined4 * FUN_0065a970(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *in_ECX;
  
  if (*(int *)(DAT_00b33398 + 0x24) != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x154))();
    if (iVar1 != 0) {
      iVar1 = FUN_00447490(param_1);
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_006ae0a0(*(undefined4 *)(iVar1 + 0xc),param_3,param_4);
        if (puVar2 != (undefined4 *)0x0) {
          if ((param_3 & 2) != 0) {
            puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
            FUN_006b7360(*puVar3,puVar3[1],puVar3[2]);
            FUN_006ac3e0(*puVar2,in_ECX);
          }
          FUN_006b7280(0x3f800000);
          FUN_006b7190(param_2);
        }
        return puVar2;
      }
    }
  }
  return (undefined4 *)0x0;
}



void FUN_0065aa60(undefined4 param_1)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 uVar2;
  
  thunk_FUN_0046a9e0(param_1);
  FUN_006748b0(in_ECX);
  if ((char)param_1 == '\0') {
    return;
  }
  iVar1 = FUN_009832e6();
  if (iVar1 == 0) {
    iVar1 = FUN_009832e6();
    uVar2 = 0;
    if (iVar1 == 0) goto LAB_0065aabb;
  }
  uVar2 = 1;
LAB_0065aabb:
  FUN_0065a050(uVar2);
  return;
}



undefined4 FUN_0065aad0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_0065a2c0();
  if (iVar1 != 0) {
    iVar2 = FUN_008ba170(*(undefined4 *)(iVar1 + 0x1ec));
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_008ba170(*(undefined4 *)(iVar1 + 0x1ec));
      iVar1 = (**(code **)(*piVar3 + 8))();
      if (iVar1 == 2) {
        return 1;
      }
    }
  }
  return 0;
}



void FUN_0065ab20(byte param_1)

{
  FUN_00659f90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0065ab40(void)

{
  int iVar1;
  
  iVar1 = FUN_0065a2c0();
  if (iVar1 != 0) {
    FUN_00890700(_DAT_00b37498 + *(float *)(iVar1 + 0x310) * (_DAT_00b374a0 - _DAT_00b37498));
  }
  return iVar1;
}



byte FUN_0065ab80(void)

{
  byte bVar1;
  int *in_ECX;
  
  bVar1 = (**(code **)(*in_ECX + 0x1c8))();
  if (in_ECX[0xf] != 0) {
    FUN_0088cd50(in_ECX[0xf],1,0);
    bVar1 = bVar1 | 1;
  }
  return bVar1;
}



float10 FUN_0065abb0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x28);
}



void FUN_0065abc0(float param_1)

{
  int in_ECX;
  
  FUN_0065a650(*(float *)(in_ECX + 0x20) + param_1);
  return;
}



void FUN_0065abe0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_4 [4];
  
  iVar1 = FUN_0065a2c0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_0057e270(local_4);
    *param_1 = *puVar2;
    return;
  }
  *param_1 = 0;
  return;
}



void FUN_0065ac20(char param_1)

{
  int iVar1;
  
  iVar1 = FUN_0065a2c0();
  if (iVar1 != 0) {
    if (param_1 != '\0') {
      *(uint *)(iVar1 + 500) = *(uint *)(iVar1 + 500) | 0x800;
      return;
    }
    *(uint *)(iVar1 + 500) = *(uint *)(iVar1 + 500) & 0xfffff7ff;
  }
  return;
}



undefined4 * FUN_0065ac50(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)0x0;
  if (((*(int *)(DAT_00b33398 + 0x24) != 0) && (in_ECX[0xf] != 0)) &&
     (puVar1 = (undefined4 *)FUN_006ae0a0(param_1,param_3,param_4), puVar1 != (undefined4 *)0x0)) {
    if ((param_3 & 2) != 0) {
      puVar2 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
      FUN_006b7360(*puVar2,puVar2[1],puVar2[2]);
      FUN_006ac3e0(*puVar1,in_ECX);
    }
    FUN_006b7190(param_2);
  }
  return puVar1;
}



undefined4 FUN_0065ad00(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  
  cVar1 = FUN_0045a500();
  if ((cVar1 == '\0') && (cVar1 = FUN_0065d550(), cVar1 != '\0')) {
    if (*(int *)(in_ECX + 0x58) == 0) {
      return 0xffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x0065ad30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(int **)(in_ECX + 0x58) + 8))();
    return uVar2;
  }
  iVar3 = FUN_006ecc80();
  cVar1 = FUN_0045a500();
  if (((cVar1 != '\0') || (*(int *)(in_ECX + 0x3c) != 0)) ||
     (cVar1 = FUN_004354f0(in_ECX), cVar1 != '\0')) {
    cVar1 = FUN_0043f8c0(iVar3,1);
    if (cVar1 != '\0') {
      return 0;
    }
    cVar1 = FUN_0043f8c0(iVar3,0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if ((iVar3 != 0) && (cVar1 = FUN_004c9fb0(), cVar1 != '\0')) {
    return 2;
  }
  cVar1 = FUN_0043f8c0(iVar3,0);
  if (cVar1 != '\0') {
    return 2;
  }
  return 3;
}



float * FUN_0065add0(float *param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x46c))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x46c))();
      DAT_00b3baac = *(float *)(iVar1 + 0xc) + -*(float *)(iVar1 + 0x18);
      DAT_00b3bab0 = *(float *)(iVar1 + 0x10) + -*(float *)(iVar1 + 0x1c);
      DAT_00b3bab4 = *(float *)(iVar1 + 0x14) + -*(float *)(iVar1 + 0x20);
      *param_1 = DAT_00b3baac;
      param_1[1] = DAT_00b3bab0;
      param_1[2] = DAT_00b3bab4;
      return param_1;
    }
  }
  FUN_004dc360(param_1);
  return param_1;
}



float * FUN_0065ae80(float *param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x46c))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x46c))();
      DAT_00b3bab8 = *(float *)(iVar1 + 0xc) + *(float *)(iVar1 + 0x18);
      DAT_00b3babc = *(float *)(iVar1 + 0x10) + *(float *)(iVar1 + 0x1c);
      DAT_00b3bac0 = *(float *)(iVar1 + 0x14) + *(float *)(iVar1 + 0x20);
      *param_1 = DAT_00b3bab8;
      param_1[1] = DAT_00b3babc;
      param_1[2] = DAT_00b3bac0;
      return param_1;
    }
  }
  FUN_004dc410(param_1);
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0065af30(undefined4 param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  float *pfVar13;
  int *piVar14;
  int *in_ECX;
  float10 fVar15;
  undefined8 uVar16;
  int iStack_e8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined1 auStack_64 [96];
  
  piVar10 = (int *)FUN_0065a2c0();
  cVar8 = (**(code **)(*in_ECX + 0xe8))();
  fStack_b0 = (float)in_ECX[8];
  fVar1 = (float)in_ECX[9];
  fVar2 = (float)in_ECX[10];
  if (((((fStack_b0 == 3.4028235e+38) || (iVar11 = __isnan((double)fStack_b0), iVar11 != 0)) ||
       (iVar11 = FUN_00983ffd((double)fStack_b0), iVar11 == 0)) ||
      (((fVar1 == 3.4028235e+38 || (iVar11 = __isnan((double)fVar1), iVar11 != 0)) ||
       ((iVar11 = FUN_00983ffd((double)fVar1), iVar11 == 0 ||
        ((fVar2 == 3.4028235e+38 || (iVar11 = __isnan((double)fVar2), iVar11 != 0)))))))) ||
     (iVar11 = FUN_00983ffd((double)fVar2), iVar11 == 0)) {
    uVar12 = (**(code **)(*in_ECX + 0xd4))();
    FUN_004a7a60("MobileObject::Move called on \'%s\' (%08X) with invalid angle.",uVar12);
    FUN_004d89a0(0,0,0);
  }
  if (DAT_00b14e44 != 0) {
    if (DAT_00b3baa4 != DAT_00b02c54) {
      DAT_00b3baa4 = DAT_00b02c54;
      DAT_00b3baa8 = DAT_00b02c54 % (DAT_00b14e44 + 1U) != 0;
    }
    if ((DAT_00b3baa8 != '\0') && (((uint)piVar10[0x7d] >> 8 & 1) != 0)) {
      FUN_0070fdd0();
      pfVar13 = (float *)FUN_007101f0(&fStack_bc,param_2);
      *param_2 = *pfVar13;
      param_2[1] = pfVar13[1];
      param_2[2] = pfVar13[2];
      iVar11 = (**(code **)(*in_ECX + 0x154))();
      fVar1 = *param_2;
      fVar2 = *(float *)(iVar11 + 0x54);
      fVar3 = *(float *)(iVar11 + 0x58);
      fVar4 = param_2[1];
      fVar5 = *(float *)(iVar11 + 0x5c);
      fVar6 = param_2[2];
      iVar11 = (**(code **)(*in_ECX + 0x154))();
      *(float *)(iVar11 + 0x54) = fVar1 + fVar2;
      *(float *)(iVar11 + 0x58) = fVar3 + fVar4;
      *(float *)(iVar11 + 0x5c) = fVar5 + fVar6;
      return piVar10;
    }
    iVar11 = (**(code **)(*in_ECX + 0x154))();
    pfVar13 = (float *)(**(code **)(*in_ECX + 0x174))();
    fStack_d0 = *(float *)(iVar11 + 0x58) - pfVar13[1];
    fStack_cc = *(float *)(iVar11 + 0x5c) - pfVar13[2];
    fStack_d4 = *(float *)(iVar11 + 0x54) - *pfVar13;
    FUN_0070fdd0();
    uVar16 = CONCAT44(&fStack_d4,&fStack_bc);
    FUN_007103c0(&uStack_ac);
    pfVar13 = (float *)FUN_007101f0(uVar16);
    *param_2 = *pfVar13 + *param_2;
    param_2[1] = pfVar13[1] + param_2[1];
    param_2[2] = pfVar13[2] + param_2[2];
  }
  if ((piVar10 == (int *)0x0) || (cVar9 = (**(code **)(*in_ECX + 0x198))(), cVar9 != '\0')) {
    FUN_0070fdd0();
    pfVar13 = (float *)FUN_007101f0(&fStack_bc,param_2);
    *param_2 = *pfVar13;
    param_2[1] = pfVar13[1];
    param_2[2] = pfVar13[2];
    fStack_d4 = *param_2 + (float)in_ECX[0xb];
    fStack_d0 = (float)in_ECX[0xc] + param_2[1];
    fStack_cc = (float)in_ECX[0xd] + param_2[2];
    fStack_c8 = fStack_d4;
    fStack_c4 = fStack_d0;
    fStack_c0 = fStack_cc;
  }
  else {
    iStack_e8 = 0;
    bVar7 = false;
    if (cVar8 == '\0') {
      fVar15 = (float10)(**(code **)(*in_ECX + 500))();
      piVar10[0xc4] = (int)(float)fVar15;
      cVar8 = FUN_004d74d0();
      if ((cVar8 != '\0') && (cVar8 = FUN_005e13a0(), cVar8 != '\0')) {
        iStack_e8 = piVar10[0xca];
        bVar7 = true;
        piVar14 = (int *)FUN_00403c00();
        piVar10[0xca] = *piVar14;
      }
    }
    iStack_a4 = in_ECX[9];
    iStack_a8 = in_ECX[8];
    uStack_ac = param_1;
    iStack_a0 = in_ECX[10];
    fStack_98 = param_2[1];
    fStack_9c = *param_2;
    fStack_94 = param_2[2];
    uStack_90 = param_3;
    if (((uint)piVar10[0x7d] >> 0xb & 1) != 0) {
      cVar8 = (**(code **)(*in_ECX + 400))();
      if ((((cVar8 == '\0') || (iVar11 = (**(code **)(*in_ECX + 0x380))(), iVar11 == 0)) ||
          ((int *)in_ECX[0x16] == (int *)0x0)) ||
         (iVar11 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))(), iVar11 != 4)) {
        FUN_0070fdd0();
        pfVar13 = (float *)FUN_007101f0(&fStack_bc,param_2);
        *param_2 = *pfVar13;
        param_2[1] = pfVar13[1];
        param_2[2] = pfVar13[2];
        fVar1 = *param_2;
        fVar2 = (float)in_ECX[0xb];
        fVar3 = (float)in_ECX[0xc];
        fVar4 = param_2[1];
        fVar5 = (float)in_ECX[0xd];
        fVar6 = param_2[2];
        fStack_c8 = fVar1 + fVar2;
        fStack_c4 = fVar3 + fVar4;
        fStack_c0 = fVar5 + fVar6;
        FUN_005e1500();
        fStack_d4 = (fVar1 + fVar2) - fStack_bc;
        *param_2 = fStack_d4;
        fStack_d0 = (fVar3 + fVar4) - fStack_b8;
        uVar16 = CONCAT44(param_2,&fStack_bc);
        param_2[1] = fStack_d0;
        fStack_cc = (fVar5 + fVar6) - fStack_b4;
        param_2[2] = fStack_cc;
        FUN_007103c0(auStack_64);
        pfVar13 = (float *)FUN_007101f0(uVar16);
        fStack_9c = *pfVar13;
        fStack_98 = pfVar13[1];
        fStack_94 = pfVar13[2];
      }
      else {
        iVar11 = (**(code **)(*in_ECX + 0x380))();
        fStack_c8 = *(float *)(iVar11 + 0x2c);
        fStack_c4 = *(float *)(iVar11 + 0x30);
        fStack_c0 = *(float *)(iVar11 + 0x34);
        FUN_00452a10();
        *param_2 = DAT_00b3f9a8;
        param_2[1] = DAT_00b3f9ac;
        fStack_94 = DAT_00b3f9b0;
        param_2[2] = DAT_00b3f9b0;
        fStack_9c = *param_2;
        fStack_98 = param_2[1];
      }
    }
    if ((*(byte *)(piVar10 + 0x7d) & 1) != 0) {
      piVar10[0x7d] = piVar10[0x7d] & 0xfffffffd;
      piVar10[0xcc] = (int)(_DAT_00b14e34 * _DAT_00b33e9c);
    }
    (**(code **)(*piVar10 + 0x80))();
    if (((uint)piVar10[0x7d] >> 1 & 1) != 0) {
      FUN_005e1500();
      fVar15 = (float10)FUN_008913c0();
      fStack_b4 = (float)fVar15 * 6.99904 + (float)fVar15 * 6.99904 + fStack_b4;
      (**(code **)(*in_ECX + 0x1cc))();
    }
    if (bVar7) {
      piVar10[0xca] = iStack_e8;
    }
    if ((((uint)piVar10[0x7d] >> 0xb & 1) == 0) &&
       (FUN_005e1500(), (*(byte *)(piVar10 + 0x7d) & 1) != 0)) {
      iVar11 = (**(code **)(*in_ECX + 0x388))();
      if (iVar11 != 0) {
        piVar14 = (int *)(**(code **)(*in_ECX + 0x388))();
        iVar11 = (**(code **)(*piVar14 + 0x18c))();
        if (iVar11 != 4) goto LAB_0065b58a;
      }
      (**(code **)(*in_ECX + 0x1e8))();
    }
  }
LAB_0065b58a:
  FUN_004d8a30(fStack_c8,fStack_c4,fStack_c0);
  return piVar10;
}



void FUN_0065b5c0(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  float10 fVar6;
  int *piStack_c;
  int *piStack_8;
  float fStack_4;
  
  iVar3 = FUN_0065a2c0();
  if (iVar3 == 0) {
    return;
  }
  cVar2 = (**(code **)(*in_ECX + 400))();
  if ((-(uint)(cVar2 != '\0') & (uint)in_ECX) != 0) {
    iVar4 = FUN_005e0dc0();
    bVar1 = true;
    if (iVar4 == 2) goto LAB_0065b603;
  }
  bVar1 = false;
LAB_0065b603:
  iVar4 = FUN_006ecc80();
  if (iVar4 == 0) {
    piStack_c = (int *)0x0;
  }
  else {
    cVar2 = FUN_004c97f0();
    if (cVar2 == '\0') {
      piStack_c = DAT_00b35c24;
    }
    else {
      piStack_c = (int *)FUN_00424180();
    }
  }
  if (*(int *)(iVar3 + 8) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_008ac0c0();
  }
  if (*(int *)(iVar5 + 8) == 0) {
    piStack_8 = (int *)0x0;
  }
  else {
    piStack_8 = *(int **)(*(int *)(iVar5 + 8) + 0x2b0);
  }
  if (piStack_c != piStack_8) {
    *(undefined4 *)(iVar3 + 0x2a0) = 0;
    if (iVar4 == 0) {
      fVar6 = (float10)0;
    }
    else {
      fVar6 = (float10)FUN_004cace0();
    }
    fStack_4 = (float)fVar6;
    *(float *)(iVar3 + 0x318) = fStack_4 * 0.14287673;
    if (!bVar1) {
      FUN_00895060(piStack_c);
    }
    FUN_00452a10(in_ECX + 0xb);
  }
  bVar1 = false;
  if (*(int *)(iVar3 + 0x364) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0089f6b0(0);
  }
  iVar5 = in_ECX[0xf];
  if ((iVar4 != iVar5) && (*(int *)(iVar3 + 0x364) != 0)) {
    FUN_0089f650(iVar5,0);
  }
  if (piStack_8 != piStack_c) {
    if (piStack_8 != (int *)0x0) {
      FUN_0088cd50(iVar5,1,0);
    }
    bVar1 = true;
  }
  if (piStack_c != (int *)0x0) {
    if (bVar1) {
      FUN_0057e270(&fStack_4);
      (**(code **)(*piStack_c + 0x90))(iVar5,1,0,(uint)fStack_4 >> 0x10,0);
      return;
    }
    FUN_0088cdc0(iVar5,1,0);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0065b750(void)

{
  float **ppfVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  byte bVar6;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  float *pfStack_108;
  uint uStack_104;
  undefined1 auStack_f4 [12];
  undefined4 uStack_e8;
  undefined1 *puStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  int iStack_70;
  float *pfStack_68;
  float fStack_64;
  undefined1 uStack_5b;
  float fStack_48;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  float *pfStack_14;
  
  pfStack_14 = (float *)0xffffffff;
  puStack_18 = &LAB_009c3c59;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_f4;
  uStack_104 = DAT_00b30aac ^ (uint)&stack0xffffff00;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (in_ECX[0x16] == 0) goto LAB_0065ba60;
  pfStack_108 = (float *)0x65b7a6;
  iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
  if (iVar3 != 0) {
    pfStack_108 = (float *)0x65b7b4;
    iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
    if (iVar3 != 1) goto LAB_0065ba60;
  }
  pfStack_108 = (float *)0x65b7c4;
  iVar3 = FUN_006ecc80();
  if (iVar3 != 0) {
    pfStack_108 = (float *)0x65b7cf;
    iVar3 = FUN_006ecc80();
    if (*(char *)(iVar3 + 0x26) != '\x06') {
      pfStack_108 = (float *)0x65b7dc;
      iVar3 = FUN_006ecc80();
      if (*(char *)(iVar3 + 0x26) != '\x05') goto LAB_0065ba60;
    }
  }
  pfStack_108 = (float *)0x0;
  iVar3 = FUN_009832e6();
  if (iVar3 == 0) {
LAB_0065b823:
    uStack_e8 = (float)((uint)uStack_e8 & 0xffffff);
  }
  else {
    pfStack_108 = (float *)0x65b80a;
    iVar4 = FUN_005e0dc0();
    if (iVar4 != 2) {
      pfStack_108 = (float *)0xffffffff;
      cVar2 = FUN_005f0310();
      if (cVar2 == '\0') goto LAB_0065b823;
    }
    uStack_e8 = (float)CONCAT13(1,(undefined3)uStack_e8);
  }
  pfStack_108 = (float *)0x65b82f;
  pfVar5 = (float *)FUN_0065a2c0();
  if (pfVar5 == (float *)0x0) {
    pfStack_108 = (float *)0x1;
    FUN_00890c00();
    iStack_70 = in_ECX[0xf];
    fStack_e0 = (float)in_ECX[0xb] * 0.14287673;
    fStack_dc = (float)in_ECX[0xc] * 0.14287673;
    fStack_d8 = (float)in_ECX[0xd] * 0.14287673;
    pfStack_108 = (float *)0x65b889;
    pfStack_68 = pfVar5;
    pfStack_14 = pfVar5;
    fVar7 = (float10)(**(code **)(*in_ECX + 500))();
    fStack_64 = (float)fVar7;
    if (iVar3 == 0) {
LAB_0065b8bf:
      uStack_5b = 1;
    }
    else {
      pfStack_108 = (float *)0x65b8a0;
      iVar3 = (**(code **)(*in_ECX + 0x170))();
      if (iVar3 == 0) goto LAB_0065b8bf;
      pfStack_108 = (float *)0x65b8ab;
      cVar2 = FUN_005e3270();
      if (cVar2 == '\0') goto LAB_0065b8bf;
      pfStack_108 = (float *)0x65b8b6;
      fVar7 = (float10)FUN_004d7260();
      fStack_48 = (float)fVar7;
    }
    pfStack_108 = (float *)0x1;
    iVar3 = thunk_FUN_00401aa0(0x3e0);
    bVar6 = 0x10 - ((byte)iVar3 & 0xf);
    puStack_e4 = (undefined1 *)(iVar3 + (uint)bVar6);
    *(byte *)((int)puStack_e4 + -1) = bVar6;
    pfStack_108 = &fStack_e0;
    pfStack_14._0_1_ = 1;
    pfVar5 = (float *)FUN_00897230();
    puStack_e4 = (undefined1 *)&pfStack_108;
    pfStack_14 = (float *)((uint)pfStack_14._1_3_ << 8);
    pfStack_108 = pfVar5;
    ppfVar1 = &pfStack_108;
    if (pfVar5 != (float *)0x0) {
      InterlockedIncrement((LONG *)(pfVar5 + 1));
      ppfVar1 = (float **)puStack_e4;
    }
    puStack_e4 = (undefined1 *)ppfVar1;
    (**(code **)(*(int *)in_ECX[0x16] + 400))();
    FUN_008910f0(1000,in_ECX);
    fVar7 = (float10)(**(code **)(*in_ECX + 0xec))();
    uStack_e8 = (float)fVar7;
    pfVar5[0xcd] = uStack_e8;
    if (DAT_00b333b8 == '\0') {
      pfVar5[0x7d] = (float)((uint)pfVar5[0x7d] & 0xffefffff);
    }
    else {
      pfVar5[0x7d] = (float)((uint)pfVar5[0x7d] | 0x100000);
    }
    iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))();
    if (iVar3 != 0) {
      pfStack_108 = (float *)0x3dcccccd;
      (**(code **)(*in_ECX + 0x1ec))();
      pfStack_108 = (float *)0x65b9a5;
      iVar3 = FUN_0065a2c0();
      if (iVar3 != 0) {
        *(uint *)(iVar3 + 500) = *(uint *)(iVar3 + 500) | 0x800;
      }
    }
    pfStack_14 = (float *)0xffffffff;
    pfStack_108 = (float *)0x65b9c7;
    FUN_00890f70();
  }
  if (pfVar5[0xd9] == 0.0) {
    iVar3 = 0;
  }
  else {
    pfStack_108 = (float *)0x0;
    iVar3 = FUN_0089f6b0();
  }
  puStack_e4 = (undefined1 *)in_ECX[0xf];
  if ((undefined1 *)iVar3 != puStack_e4) {
    if (pfVar5[0xd9] != 0.0) {
      pfStack_108 = (float *)0x0;
      FUN_0089f650(puStack_e4);
    }
    pfStack_108 = (float *)0x65ba00;
    iVar3 = FUN_006ecc80();
    if (iVar3 != 0) {
      pfStack_108 = (float *)0x65ba0d;
      cVar2 = FUN_004c97f0();
      iVar3 = DAT_00b35c24;
      if (cVar2 != '\0') {
        pfStack_108 = (float *)0x65ba19;
        iVar3 = FUN_00424180();
      }
      if ((iVar3 != 0) && (*(char *)(iVar3 + 0x1a) != '\0')) {
        pfStack_108 = (float *)0x0;
        (**(code **)((int)*pfVar5 + 0x88))();
      }
    }
    if (uStack_e8._3_1_ == '\0') {
      pfStack_108 = (float *)0x0;
      FUN_0088d070(puStack_e4,6,1);
    }
  }
  pfStack_108 = (float *)0x0;
  (**(code **)(*in_ECX + 0x178))();
LAB_0065ba60:
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_0065ba90(uint param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  float10 fVar5;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_004da3e0(param_1,param_2);
  iVar3 = FUN_009832e6();
  if ((iVar3 == 0) || ((iVar3 = FUN_005e0dc0(), iVar3 != 2 && (iVar3 = FUN_005e0dc0(), iVar3 != 1)))
     ) {
    if (((param_1 & 0xe) != 0) && (iVar3 = FUN_0065a2c0(), iVar3 != 0)) {
      iVar3 = FUN_006ecc80();
      if (iVar3 != 0) {
        FUN_006ecc80();
        cVar2 = FUN_004c97f0();
        uVar4 = DAT_00b35c24;
        if (cVar2 != '\0') {
          uVar4 = FUN_00424180();
        }
        FUN_00895060(uVar4);
      }
      iVar3 = FUN_0088d370();
      if (iVar3 != 4) {
        local_c = in_ECX[0xb];
        local_8 = in_ECX[0xc];
        local_4 = in_ECX[0xd];
        FUN_00452a10(&local_c);
      }
    }
  }
  else {
    (**(code **)(*in_ECX + 0x1c8))();
  }
  piVar1 = (int *)in_ECX[0x16];
  if (piVar1 != (int *)0x0) {
    if ((((uint)in_ECX[2] >> 5 & 1) == 0) && (((uint)in_ECX[2] >> 0xb & 1) == 0)) {
      if (((in_ECX[0xf] == 0) && (in_ECX != DAT_00b333c4)) &&
         ((iVar3 = (**(code **)(*piVar1 + 8))(), iVar3 == 0 ||
          (iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), iVar3 == 1)))) {
        (**(code **)(*in_ECX + 0x1ac))();
        iVar3 = *(int *)in_ECX[0x16];
        fVar5 = (float10)FUN_00402bd0();
        (**(code **)(iVar3 + 0x1c))((float)(fVar5 - (float10)0.5));
        FUN_00674e10(in_ECX);
      }
    }
    else {
      uVar4 = (**(code **)(*piVar1 + 8))();
      FUN_00674550(in_ECX,uVar4);
      if ((undefined4 *)in_ECX[0x16] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)in_ECX[0x16])(1);
      }
      in_ECX[0x16] = 0;
    }
    if ((int *)in_ECX[0x16] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[0x16] + 0x400))(param_1,param_2);
    }
  }
  return;
}



void FUN_0065bc40(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    FUN_00401f20(*param_1);
    *param_1 = 0;
  }
  return;
}



float10 FUN_0065bc70(float param_1,float param_2,int param_3)

{
  param_1 = param_1 + param_2;
  if (param_3 == 0) {
    if ((float10)param_1 <= (float10)0) {
      return (float10)param_1;
    }
    param_1 = (float)(float10)0;
  }
  return (float10)param_1;
}



void FUN_0065bca0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
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
  return;
}



void FUN_0065bce0(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_00401f20(*in_ECX);
  }
  if (in_ECX[1] != 0) {
    FUN_00401f20(in_ECX[1]);
  }
  if (in_ECX[2] != 0) {
    FUN_00401f20(in_ECX[2]);
  }
  if (in_ECX[3] != 0) {
    FUN_00401f20(in_ECX[3]);
  }
  if (in_ECX[4] != 0) {
    FUN_00401f20(in_ECX[4]);
  }
  if (in_ECX[5] != 0) {
    FUN_00401f20(in_ECX[5]);
  }
  if (in_ECX[6] != 0) {
    FUN_00401f20(in_ECX[6]);
  }
  if (in_ECX[7] != 0) {
    FUN_00401f20(in_ECX[7]);
  }
  if (in_ECX[8] != 0) {
    FUN_00401f20(in_ECX[8]);
  }
  if (in_ECX[9] != 0) {
    FUN_00401f20(in_ECX[9]);
  }
  if (in_ECX[10] != 0) {
    FUN_00401f20(in_ECX[10]);
  }
  if (in_ECX[0xb] != 0) {
    FUN_00401f20(in_ECX[0xb]);
  }
  if (in_ECX[0xc] != 0) {
    FUN_00401f20(in_ECX[0xc]);
  }
  if (in_ECX[0xd] != 0) {
    FUN_00401f20(in_ECX[0xd]);
  }
  if (in_ECX[0xe] != 0) {
    FUN_00401f20(in_ECX[0xe]);
  }
  if (in_ECX[0xf] != 0) {
    FUN_00401f20(in_ECX[0xf]);
  }
  if (in_ECX[0x10] != 0) {
    FUN_00401f20(in_ECX[0x10]);
  }
  if (in_ECX[0x11] != 0) {
    FUN_00401f20(in_ECX[0x11]);
  }
  return;
}



void FUN_0065be10(void)

{
  undefined1 *puVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  puVar1 = (undefined1 *)FUN_00401f00(8);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    *puVar1 = 10;
    *(undefined4 *)(puVar1 + 4) = 0;
  }
  in_ECX[3] = puVar1;
  puVar1 = (undefined1 *)FUN_00401f00(8);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 9;
    *(undefined4 *)(puVar1 + 4) = 0;
    in_ECX[2] = puVar1;
    in_ECX[4] = 0;
    return;
  }
  in_ECX[2] = 0;
  in_ECX[4] = 0;
  return;
}



void FUN_0065be70(undefined1 param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x10);
  if (iVar2 != 0) {
    switch(param_1) {
    case 0:
      iVar2 = iVar2 + 0x3c;
      break;
    default:
      goto switchD_0065be93_caseD_1;
    case 4:
      iVar2 = iVar2 + 0x40;
      break;
    case 5:
      iVar2 = iVar2 + 0x34;
      break;
    case 6:
      iVar2 = iVar2 + 0x18;
      break;
    case 7:
      iVar2 = iVar2 + 0x38;
      break;
    case 8:
      break;
    case 0xb:
      iVar2 = iVar2 + 4;
      break;
    case 0xd:
      iVar2 = iVar2 + 0x44;
      break;
    case 0x1a:
      iVar2 = iVar2 + 0x30;
      break;
    case 0x21:
      iVar2 = iVar2 + 0x2c;
      break;
    case 0x24:
      iVar2 = iVar2 + 0x10;
      break;
    case 0x28:
      iVar2 = iVar2 + 8;
      break;
    case 0x29:
      iVar2 = iVar2 + 0x28;
      break;
    case 0x2e:
      iVar2 = iVar2 + 0x20;
      break;
    case 0x2f:
      iVar2 = iVar2 + 0x24;
      break;
    case 0x30:
      iVar2 = iVar2 + 0xc;
      break;
    case 0x31:
      iVar2 = iVar2 + 0x14;
      break;
    case 0x38:
      iVar2 = iVar2 + 0x1c;
    }
    FUN_0065bc40(iVar2);
    piVar1 = *(int **)(in_ECX + 0x10);
    if (((((((*piVar1 == 0) && (piVar1[1] == 0)) && (piVar1[2] == 0)) &&
          ((piVar1[3] == 0 && (piVar1[4] == 0)))) &&
         ((piVar1[5] == 0 && ((piVar1[6] == 0 && (piVar1[7] == 0)))))) && (piVar1[8] == 0)) &&
       (((((piVar1[9] == 0 && (piVar1[10] == 0)) && (piVar1[0xb] == 0)) &&
         (((piVar1[0xc] == 0 && (piVar1[0xd] == 0)) &&
          ((piVar1[0xe] == 0 && ((piVar1[0xf] == 0 && (piVar1[0x10] == 0)))))))) &&
        (piVar1[0x11] == 0)))) {
      if (piVar1 != (int *)0x0) {
        FUN_0065bce0();
        FUN_00401f20(piVar1);
      }
      *(undefined4 *)(in_ECX + 0x10) = 0;
    }
  }
switchD_0065be93_caseD_1:
  return;
}



char * FUN_0065c010(char param_1)

{
  char *pcVar1;
  undefined4 *in_ECX;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  switch(param_1) {
  case '\0':
    if (in_ECX[4] != 0) {
      return *(char **)(in_ECX[4] + 0x3c);
    }
    break;
  default:
    while (((in_ECX != (undefined4 *)0x0 && (pcVar1 = (char *)*in_ECX, pcVar1 != (char *)0x0)) &&
           (pcVar2 == (char *)0x0))) {
      if (*pcVar1 == param_1) {
        pcVar2 = pcVar1;
      }
      in_ECX = (undefined4 *)in_ECX[1];
    }
    return pcVar2;
  case '\x04':
    if (in_ECX[4] != 0) {
      return *(char **)(in_ECX[4] + 0x40);
    }
    break;
  case '\x05':
    if (in_ECX[4] != 0) {
      return *(char **)(in_ECX[4] + 0x34);
    }
    break;
  case '\x06':
    if (in_ECX[4] != 0) {
      return *(char **)(in_ECX[4] + 0x18);
    }
    break;
  case '\a':
    if (in_ECX[4] != 0) {
      return *(char **)(in_ECX[4] + 0x38);
    }
    break;
  case '\b':
    if ((undefined4 *)in_ECX[4] != (undefined4 *)0x0) {
      return *(char **)in_ECX[4];
    }
    break;
  case '\t':
    return (char *)in_ECX[2];
  case '\n':
    return (char *)in_ECX[3];
  case '\v':
    if (in_ECX[4] != 0) {
      return *(char **)(in_ECX[4] + 4);
    }
    break;
  case '\r':
    if (in_ECX[4] != 0) {
      return *(char **)(in_ECX[4] + 0x44);
    }
    break;
  case '\x1a':
    if (in_ECX[4] != 0) {
      return *(char **)(in_ECX[4] + 0x30);
    }
    break;
  case '!':
    if (in_ECX[4] != 0) {
      return *(char **)(in_ECX[4] + 0x2c);
    }
    break;
  case '$':
    if (in_ECX[4] != 0) {
      return *(char **)(in_ECX[4] + 0x10);
    }
    break;
  case '(':
    if (in_ECX[4] != 0) {
      return *(char **)(in_ECX[4] + 8);
    }
    break;
  case ')':
    if (in_ECX[4] != 0) {
      return *(char **)(in_ECX[4] + 0x28);
    }
    break;
  case '.':
    if (in_ECX[4] != 0) {
      return *(char **)(in_ECX[4] + 0x20);
    }
    break;
  case '/':
    if (in_ECX[4] != 0) {
      return *(char **)(in_ECX[4] + 0x24);
    }
    break;
  case '0':
    if (in_ECX[4] != 0) {
      return *(char **)(in_ECX[4] + 0xc);
    }
    break;
  case '1':
    if (in_ECX[4] != 0) {
      return *(char **)(in_ECX[4] + 0x14);
    }
    break;
  case '8':
    if (in_ECX[4] != 0) {
      return *(char **)(in_ECX[4] + 0x1c);
    }
  }
  return (char *)0x0;
}



undefined4 FUN_0065c220(undefined1 *param_1)

{
  undefined4 local_4;
  
  if (param_1 == (undefined1 *)0x0) {
    return 0;
  }
  local_4 = *(undefined4 *)(param_1 + 4);
  param_1 = (undefined1 *)CONCAT31(param_1._1_3_,*param_1);
  FUN_0045b9a0(&param_1,1);
  FUN_0045b9a0(&local_4,4);
  return 1;
}



void FUN_0065c270(void)

{
  short *psVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *in_ECX;
  undefined1 local_9;
  int local_8;
  undefined4 local_4;
  
  local_8 = 0;
  psVar1 = *(short **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&local_8,2);
  for (puVar3 = in_ECX;
      (puVar3 != (undefined4 *)0x0 && (puVar2 = (undefined1 *)*puVar3, puVar2 != (undefined1 *)0x0))
      ; puVar3 = (undefined4 *)puVar3[1]) {
    local_9 = *puVar2;
    local_4 = *(undefined4 *)(puVar2 + 4);
    FUN_0045b9a0(&local_9,1);
    FUN_0045b9a0(&local_4,4);
    local_8 = local_8 + 1;
  }
  puVar2 = (undefined1 *)in_ECX[2];
  if (puVar2 != (undefined1 *)0x0) {
    local_9 = *puVar2;
    local_4 = *(undefined4 *)(puVar2 + 4);
    FUN_0045b9a0(&local_9,1);
    FUN_0045b9a0(&local_4,4);
    local_8 = local_8 + 1;
  }
  puVar2 = (undefined1 *)in_ECX[3];
  if (puVar2 != (undefined1 *)0x0) {
    local_9 = *puVar2;
    local_4 = *(undefined4 *)(puVar2 + 4);
    FUN_0045b9a0(&local_9,1);
    FUN_0045b9a0(&local_4,4);
    local_8 = local_8 + 1;
  }
  if ((undefined4 *)in_ECX[4] != (undefined4 *)0x0) {
    cVar4 = FUN_0065c220(*(undefined4 *)in_ECX[4]);
    if (cVar4 != '\0') {
      local_8 = local_8 + 1;
    }
    cVar4 = FUN_0065c220(*(undefined4 *)(in_ECX[4] + 4));
    if (cVar4 != '\0') {
      local_8 = local_8 + 1;
    }
    cVar4 = FUN_0065c220(*(undefined4 *)(in_ECX[4] + 8));
    if (cVar4 != '\0') {
      local_8 = local_8 + 1;
    }
    cVar4 = FUN_0065c220(*(undefined4 *)(in_ECX[4] + 0xc));
    if (cVar4 != '\0') {
      local_8 = local_8 + 1;
    }
    cVar4 = FUN_0065c220(*(undefined4 *)(in_ECX[4] + 0x10));
    if (cVar4 != '\0') {
      local_8 = local_8 + 1;
    }
    cVar4 = FUN_0065c220(*(undefined4 *)(in_ECX[4] + 0x14));
    if (cVar4 != '\0') {
      local_8 = local_8 + 1;
    }
    cVar4 = FUN_0065c220(*(undefined4 *)(in_ECX[4] + 0x18));
    if (cVar4 != '\0') {
      local_8 = local_8 + 1;
    }
    cVar4 = FUN_0065c220(*(undefined4 *)(in_ECX[4] + 0x1c));
    if (cVar4 != '\0') {
      local_8 = local_8 + 1;
    }
    cVar4 = FUN_0065c220(*(undefined4 *)(in_ECX[4] + 0x20));
    if (cVar4 != '\0') {
      local_8 = local_8 + 1;
    }
    cVar4 = FUN_0065c220(*(undefined4 *)(in_ECX[4] + 0x24));
    if (cVar4 != '\0') {
      local_8 = local_8 + 1;
    }
    cVar4 = FUN_0065c220(*(undefined4 *)(in_ECX[4] + 0x28));
    if (cVar4 != '\0') {
      local_8 = local_8 + 1;
    }
    cVar4 = FUN_0065c220(*(undefined4 *)(in_ECX[4] + 0x2c));
    if (cVar4 != '\0') {
      local_8 = local_8 + 1;
    }
    cVar4 = FUN_0065c220(*(undefined4 *)(in_ECX[4] + 0x30));
    if (cVar4 != '\0') {
      local_8 = local_8 + 1;
    }
    cVar4 = FUN_0065c220(*(undefined4 *)(in_ECX[4] + 0x34));
    if (cVar4 != '\0') {
      local_8 = local_8 + 1;
    }
    cVar4 = FUN_0065c220(*(undefined4 *)(in_ECX[4] + 0x38));
    if (cVar4 != '\0') {
      local_8 = local_8 + 1;
    }
    cVar4 = FUN_0065c220(*(undefined4 *)(in_ECX[4] + 0x3c));
    if (cVar4 != '\0') {
      local_8 = local_8 + 1;
    }
    cVar4 = FUN_0065c220(*(undefined4 *)(in_ECX[4] + 0x40));
    if (cVar4 != '\0') {
      local_8 = local_8 + 1;
    }
    cVar4 = FUN_0065c220(*(undefined4 *)(in_ECX[4] + 0x44));
    if (cVar4 == '\0') {
      *psVar1 = (short)local_8;
      return;
    }
    *psVar1 = (short)local_8 + 1;
    return;
  }
  *psVar1 = (short)local_8;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0065c538) */

uint FUN_0065c520(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int iVar4;
  
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x34) {
    iVar4 = 8;
  }
  else {
    iVar4 = 5;
  }
  iVar2 = 0;
  for (piVar1 = in_ECX; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  uVar3 = iVar2 * iVar4 + 2U & 0xffff;
  if (in_ECX[3] != 0) {
    uVar3 = uVar3 + iVar4;
  }
  if (in_ECX[2] != 0) {
    uVar3 = uVar3 + iVar4;
  }
  piVar1 = (int *)in_ECX[4];
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      uVar3 = uVar3 + iVar4;
    }
    if (piVar1[1] != 0) {
      uVar3 = uVar3 + iVar4;
    }
    if (piVar1[2] != 0) {
      uVar3 = uVar3 + iVar4;
    }
    if (piVar1[3] != 0) {
      uVar3 = uVar3 + iVar4;
    }
    if (piVar1[4] != 0) {
      uVar3 = uVar3 + iVar4;
    }
    if (piVar1[5] != 0) {
      uVar3 = uVar3 + iVar4;
    }
    if (piVar1[6] != 0) {
      uVar3 = uVar3 + iVar4;
    }
    if (piVar1[7] != 0) {
      uVar3 = uVar3 + iVar4;
    }
    if (piVar1[8] != 0) {
      uVar3 = uVar3 + iVar4;
    }
    if (piVar1[9] != 0) {
      uVar3 = uVar3 + iVar4;
    }
    if (piVar1[10] != 0) {
      uVar3 = uVar3 + iVar4;
    }
    if (piVar1[0xb] != 0) {
      uVar3 = uVar3 + iVar4;
    }
    if (piVar1[0xc] != 0) {
      uVar3 = uVar3 + iVar4;
    }
    if (piVar1[0xd] != 0) {
      uVar3 = uVar3 + iVar4;
    }
    if (piVar1[0xe] != 0) {
      uVar3 = uVar3 + iVar4;
    }
    if (piVar1[0xf] != 0) {
      uVar3 = uVar3 + iVar4;
    }
    if (piVar1[0x10] != 0) {
      uVar3 = uVar3 + iVar4;
    }
    if (piVar1[0x11] != 0) {
      uVar3 = uVar3 + iVar4;
    }
  }
  return uVar3;
}



void FUN_0065c620(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *in_ECX;
  int *piVar4;
  
  if ((param_1 != 0) &&
     ((piVar1 = (int *)in_ECX[1], piVar2 = in_ECX, piVar4 = in_ECX, piVar1 != (int *)0x0 ||
      (*in_ECX != 0)))) {
    while (piVar3 = piVar2, *piVar3 != param_1) {
      piVar2 = (int *)piVar3[1];
      piVar4 = piVar3;
      if ((int *)piVar3[1] == (int *)0x0) {
        return;
      }
    }
    if (piVar3 == in_ECX) {
      if (piVar1 == (int *)0x0) {
        *in_ECX = 0;
        return;
      }
      in_ECX[1] = piVar1[1];
      *in_ECX = *piVar1;
      FUN_00401f20(piVar1);
      return;
    }
    piVar4[1] = piVar3[1];
    FUN_00401f20(piVar3);
  }
  return;
}



void FUN_0065c6a0(void)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  while (iVar1 != 0) {
    FUN_00401f20(iVar1);
    piVar2 = (int *)in_ECX[1];
    if (piVar2 == (int *)0x0) {
      *in_ECX = 0;
    }
    else {
      in_ECX[1] = piVar2[1];
      *in_ECX = *piVar2;
      FUN_00401f20(piVar2);
    }
    iVar1 = *in_ECX;
  }
  iVar1 = in_ECX[4];
  if (iVar1 != 0) {
    FUN_0065bce0();
    FUN_00401f20(iVar1);
    in_ECX[4] = 0;
  }
  return;
}



void FUN_0065c710(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if ((param_2 != 0) || (*(int *)(in_ECX + 0x10) != 0)) {
    FUN_0065be70(param_1);
    if ((param_2 != 0) && (*(float *)(param_2 + 4) != 0.0)) {
      if (*(int *)(in_ECX + 0x10) == 0) {
        iVar1 = FUN_00401f00(0x48);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_0065bca0();
        }
        *(undefined4 *)(in_ECX + 0x10) = uVar2;
      }
      switch((char)param_1) {
      case '\0':
        *(int *)(*(int *)(in_ECX + 0x10) + 0x3c) = param_2;
        return;
      case '\x04':
        *(int *)(*(int *)(in_ECX + 0x10) + 0x40) = param_2;
        return;
      case '\x05':
        *(int *)(*(int *)(in_ECX + 0x10) + 0x34) = param_2;
        return;
      case '\x06':
        *(int *)(*(int *)(in_ECX + 0x10) + 0x18) = param_2;
        return;
      case '\a':
        *(int *)(*(int *)(in_ECX + 0x10) + 0x38) = param_2;
        return;
      case '\b':
        **(int **)(in_ECX + 0x10) = param_2;
        return;
      case '\v':
        *(int *)(*(int *)(in_ECX + 0x10) + 4) = param_2;
        return;
      case '\r':
        *(int *)(*(int *)(in_ECX + 0x10) + 0x44) = param_2;
        break;
      case '\x1a':
        *(int *)(*(int *)(in_ECX + 0x10) + 0x30) = param_2;
        return;
      case '!':
        *(int *)(*(int *)(in_ECX + 0x10) + 0x2c) = param_2;
        return;
      case '$':
        *(int *)(*(int *)(in_ECX + 0x10) + 0x10) = param_2;
        return;
      case '(':
        *(int *)(*(int *)(in_ECX + 0x10) + 8) = param_2;
        return;
      case ')':
        *(int *)(*(int *)(in_ECX + 0x10) + 0x28) = param_2;
        return;
      case '.':
        *(int *)(*(int *)(in_ECX + 0x10) + 0x20) = param_2;
        return;
      case '/':
        *(int *)(*(int *)(in_ECX + 0x10) + 0x24) = param_2;
        return;
      case '0':
        *(int *)(*(int *)(in_ECX + 0x10) + 0xc) = param_2;
        return;
      case '1':
        *(int *)(*(int *)(in_ECX + 0x10) + 0x14) = param_2;
        return;
      case '8':
        *(int *)(*(int *)(in_ECX + 0x10) + 0x1c) = param_2;
        return;
      }
    }
  }
  return;
}



void FUN_0065c8f0(undefined1 *param_1)

{
  int in_ECX;
  
  if (param_1 != (undefined1 *)0x0) {
    switch(*param_1) {
    case 0:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xb:
    case 0xd:
    case 0x1a:
    case 0x21:
    case 0x24:
    case 0x28:
    case 0x29:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x38:
      FUN_0065c710(*param_1,param_1);
      return;
    default:
      FUN_00446cb0();
      return;
    case 9:
      *(undefined4 *)(*(int *)(in_ECX + 8) + 4) = *(undefined4 *)(param_1 + 4);
      FUN_00401f20(param_1);
      break;
    case 10:
      *(undefined4 *)(*(int *)(in_ECX + 0xc) + 4) = *(undefined4 *)(param_1 + 4);
      FUN_00401f20(param_1);
      return;
    }
  }
  return;
}



void FUN_0065c9b0(undefined1 *param_1)

{
  int in_ECX;
  
  if (param_1 != (undefined1 *)0x0) {
    switch(*param_1) {
    case 0:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xb:
    case 0xd:
    case 0x1a:
    case 0x21:
    case 0x24:
    case 0x28:
    case 0x29:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x38:
      FUN_0065be70();
      return;
    default:
      FUN_0065c620(param_1);
      FUN_00401f20(param_1);
      break;
    case 9:
      *(undefined4 *)(*(int *)(in_ECX + 8) + 4) = 0;
      return;
    case 10:
      *(undefined4 *)(*(int *)(in_ECX + 0xc) + 4) = 0;
      return;
    }
  }
  return;
}



void FUN_0065ca60(undefined4 param_1,float param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_0065c010(param_1);
  if (iVar1 == 0) {
    if (param_2 != 0.0) {
      puVar2 = (undefined1 *)FUN_00401f00(8);
      if (puVar2 != (undefined1 *)0x0) {
        *(float *)(puVar2 + 4) = param_2;
        *puVar2 = (char)param_1;
        FUN_0065c8f0(puVar2);
        return;
      }
      FUN_0065c8f0(0);
      return;
    }
  }
  else {
    param_2 = *(float *)(iVar1 + 4) + param_2;
    if ((param_3 == 0) && (0.0 < param_2)) {
      param_2 = 0.0;
    }
    *(float *)(iVar1 + 4) = param_2;
    if (param_2 == 0.0) {
      FUN_0065c9b0(iVar1);
    }
  }
  return;
}



void FUN_0065cb00(undefined4 param_1,float param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_0065c010(param_1);
  if (iVar1 == 0) {
    if (param_2 != 0.0) {
      puVar2 = (undefined1 *)FUN_00401f00(8);
      if (puVar2 != (undefined1 *)0x0) {
        *(float *)(puVar2 + 4) = param_2;
        *puVar2 = (char)param_1;
        FUN_0065c8f0(puVar2);
        return;
      }
      FUN_0065c8f0(0);
      return;
    }
  }
  else {
    if (param_2 == 0.0) {
      FUN_0065c9b0(iVar1);
      return;
    }
    *(float *)(iVar1 + 4) = param_2;
  }
  return;
}



float10 FUN_0065cb80(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0065c010(param_1);
  if (iVar1 != 0) {
    return (float10)*(float *)(iVar1 + 4);
  }
  return (float10)0.0;
}



void FUN_0065cbb0(void)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 local_d;
  ushort local_c [2];
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004534d0(local_c,2);
  uVar2 = 0;
  if (local_c[0] != 0) {
    do {
      if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x34) {
LAB_0065cc3f:
        puVar1 = (undefined1 *)FUN_00401f00(8);
        if (puVar1 == (undefined1 *)0x0) {
          puVar1 = (undefined1 *)0x0;
        }
        else {
          *puVar1 = 0;
          *(undefined4 *)(puVar1 + 4) = 0;
        }
        FUN_004534d0(puVar1,8);
      }
      else {
        FUN_004534d0(&local_d,1);
        FUN_004534d0(&local_8,4);
        puVar1 = (undefined1 *)FUN_00401f00(8);
        if (puVar1 == (undefined1 *)0x0) {
          puVar1 = (undefined1 *)0x0;
        }
        else {
          local_4 = local_8;
          *puVar1 = local_d;
          *(undefined4 *)(puVar1 + 4) = local_8;
        }
        if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x34) goto LAB_0065cc3f;
      }
      FUN_0065c8f0(puVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < local_c[0]);
  }
  return;
}



void FUN_0065cc90(void)

{
  int in_ECX;
  
  FUN_0065c6a0();
  if (*(int *)(in_ECX + 8) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 8) + 4) = 0;
  }
  if (*(int *)(in_ECX + 0xc) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0xc) + 4) = 0;
    return;
  }
  return;
}



void FUN_0065ccc0(void)

{
  int *piVar1;
  int in_ECX;
  
  FUN_0065c6a0();
  piVar1 = (int *)(in_ECX + 8);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    FUN_00401f20(*piVar1);
    *piVar1 = 0;
  }
  piVar1 = (int *)(in_ECX + 0xc);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    FUN_00401f20(*piVar1);
    *piVar1 = 0;
  }
  return;
}



void FUN_0065cd10(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  FUN_0065c6a0();
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[3] == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1[3] + 4);
    }
    FUN_0065cb00(10,uVar1);
    if (param_1[2] == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1[2] + 4);
    }
    FUN_0065cb00(9,uVar1);
    if ((int *)param_1[4] != (int *)0x0) {
      if (*(int *)param_1[4] != 0) {
        puVar2 = (undefined1 *)FUN_00401f00(8);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar3 = *(undefined1 **)param_1[4];
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
        }
        FUN_0065c8f0(puVar2);
      }
      if (*(int *)(param_1[4] + 4) != 0) {
        puVar2 = (undefined1 *)FUN_00401f00(8);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar3 = *(undefined1 **)(param_1[4] + 4);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
        }
        FUN_0065c8f0(puVar2);
      }
      if (*(int *)(param_1[4] + 8) != 0) {
        puVar2 = (undefined1 *)FUN_00401f00(8);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar3 = *(undefined1 **)(param_1[4] + 8);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
        }
        FUN_0065c8f0(puVar2);
      }
      if (*(int *)(param_1[4] + 0xc) != 0) {
        puVar2 = (undefined1 *)FUN_00401f00(8);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar3 = *(undefined1 **)(param_1[4] + 0xc);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
        }
        FUN_0065c8f0(puVar2);
      }
      if (*(int *)(param_1[4] + 0x10) != 0) {
        puVar2 = (undefined1 *)FUN_00401f00(8);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar3 = *(undefined1 **)(param_1[4] + 0x10);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
        }
        FUN_0065c8f0(puVar2);
      }
      if (*(int *)(param_1[4] + 0x14) != 0) {
        puVar2 = (undefined1 *)FUN_00401f00(8);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar3 = *(undefined1 **)(param_1[4] + 0x14);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
        }
        FUN_0065c8f0(puVar2);
      }
      if (*(int *)(param_1[4] + 0x18) != 0) {
        puVar2 = (undefined1 *)FUN_00401f00(8);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar3 = *(undefined1 **)(param_1[4] + 0x18);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
        }
        FUN_0065c8f0(puVar2);
      }
      if (*(int *)(param_1[4] + 0x1c) != 0) {
        puVar2 = (undefined1 *)FUN_00401f00(8);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar3 = *(undefined1 **)(param_1[4] + 0x1c);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
        }
        FUN_0065c8f0(puVar2);
      }
      if (*(int *)(param_1[4] + 0x20) != 0) {
        puVar2 = (undefined1 *)FUN_00401f00(8);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar3 = *(undefined1 **)(param_1[4] + 0x20);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
        }
        FUN_0065c8f0(puVar2);
      }
      if (*(int *)(param_1[4] + 0x24) != 0) {
        puVar2 = (undefined1 *)FUN_00401f00(8);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar3 = *(undefined1 **)(param_1[4] + 0x24);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
        }
        FUN_0065c8f0(puVar2);
      }
      if (*(int *)(param_1[4] + 0x28) != 0) {
        puVar2 = (undefined1 *)FUN_00401f00(8);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar3 = *(undefined1 **)(param_1[4] + 0x28);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
        }
        FUN_0065c8f0(puVar2);
      }
      if (*(int *)(param_1[4] + 0x2c) != 0) {
        puVar2 = (undefined1 *)FUN_00401f00(8);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar3 = *(undefined1 **)(param_1[4] + 0x2c);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
        }
        FUN_0065c8f0(puVar2);
      }
      if (*(int *)(param_1[4] + 0x30) != 0) {
        puVar2 = (undefined1 *)FUN_00401f00(8);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar3 = *(undefined1 **)(param_1[4] + 0x30);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
        }
        FUN_0065c8f0(puVar2);
      }
      if (*(int *)(param_1[4] + 0x34) != 0) {
        puVar2 = (undefined1 *)FUN_00401f00(8);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar3 = *(undefined1 **)(param_1[4] + 0x34);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
        }
        FUN_0065c8f0(puVar2);
      }
      if (*(int *)(param_1[4] + 0x38) != 0) {
        puVar2 = (undefined1 *)FUN_00401f00(8);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar3 = *(undefined1 **)(param_1[4] + 0x38);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
        }
        FUN_0065c8f0(puVar2);
      }
      if (*(int *)(param_1[4] + 0x3c) != 0) {
        puVar2 = (undefined1 *)FUN_00401f00(8);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar3 = *(undefined1 **)(param_1[4] + 0x3c);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
        }
        FUN_0065c8f0(puVar2);
      }
      if (*(int *)(param_1[4] + 0x40) != 0) {
        puVar2 = (undefined1 *)FUN_00401f00(8);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar3 = *(undefined1 **)(param_1[4] + 0x40);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
        }
        FUN_0065c8f0(puVar2);
      }
      if (*(int *)(param_1[4] + 0x44) != 0) {
        puVar2 = (undefined1 *)FUN_00401f00(8);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          puVar3 = *(undefined1 **)(param_1[4] + 0x44);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
        }
        FUN_0065c8f0(puVar2);
      }
    }
    do {
      puVar2 = (undefined1 *)*param_1;
      if (puVar2 == (undefined1 *)0x0) {
        return;
      }
      puVar3 = (undefined1 *)FUN_00401f00(8);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        *puVar3 = *puVar2;
        *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar2 + 4);
      }
      FUN_0065c8f0(puVar3);
      param_1 = (undefined4 *)param_1[1];
    } while (param_1 != (undefined4 *)0x0);
  }
  return;
}



undefined4 FUN_0065d140(void)

{
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x71d) == '\0') && (*(char *)(in_ECX + 0x71c) == '\0')) {
    return 0;
  }
  return 1;
}



void FUN_0065d1e0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_005e02e0(0);
  (**(code **)(*piVar1 + 0x134))(param_1,param_2);
  FUN_0057a6f0(param_1);
  FUN_005e2670(param_1,1);
  return;
}



int FUN_0065d260(void)

{
  int in_ECX;
  
  return in_ECX + 0x73c;
}



float10 FUN_0065d270(int param_1,int param_2)

{
  int in_ECX;
  undefined4 local_4;
  
  local_4 = 0.0;
  if (param_1 == 0) {
    local_4 = *(float *)(in_ECX + 0x204 + param_2 * 4);
  }
  else {
    if (param_1 == 1) {
      return (float10)*(float *)(in_ECX + 0x324 + param_2 * 4);
    }
    if (param_1 == 2) {
      if (param_2 == 8) {
        return (float10)*(float *)(in_ECX + 0x444);
      }
      if (param_2 != 9) {
        if (param_2 != 10) {
          return (float10)*(float *)(in_ECX + 0x450 + param_2 * 4);
        }
        return (float10)*(float *)(in_ECX + 0x44c);
      }
      return (float10)*(float *)(in_ECX + 0x448);
    }
  }
  return (float10)local_4;
}



void FUN_0065d310(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  float10 fVar1;
  
  if (param_1 == 0) {
    if (param_2 != -1) {
      fVar1 = (float10)FUN_0065bc70(*(undefined4 *)(in_ECX + 0x204 + param_2 * 4),param_3,param_4);
      *(float *)(in_ECX + 0x204 + param_2 * 4) = (float)fVar1;
    }
  }
  else if (param_1 == 1) {
    if (param_2 != -1) {
      fVar1 = (float10)FUN_0065bc70(*(undefined4 *)(in_ECX + 0x324 + param_2 * 4),param_3,param_4);
      *(float *)(in_ECX + 0x324 + param_2 * 4) = (float)fVar1;
      return;
    }
  }
  else if (param_1 == 2) {
    if (param_2 == 8) {
      fVar1 = (float10)FUN_0065bc70(*(undefined4 *)(in_ECX + 0x444),param_3,param_4);
      *(float *)(in_ECX + 0x444) = (float)fVar1;
      return;
    }
    if (param_2 == 9) {
      fVar1 = (float10)FUN_0065bc70(*(undefined4 *)(in_ECX + 0x448),param_3,param_4);
      *(float *)(in_ECX + 0x448) = (float)fVar1;
      return;
    }
    if (param_2 == 10) {
      fVar1 = (float10)FUN_0065bc70(*(undefined4 *)(in_ECX + 0x44c),param_3,param_4);
      *(float *)(in_ECX + 0x44c) = (float)fVar1;
      return;
    }
    if (param_2 != -1) {
      fVar1 = (float10)FUN_0065bc70(*(undefined4 *)(in_ECX + 0x450 + param_2 * 4),param_3,param_4);
      *(float *)(in_ECX + 0x450 + param_2 * 4) = (float)fVar1;
      return;
    }
  }
  return;
}



int FUN_0065d4a0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x624);
  if (iVar1 == 0) {
    iVar1 = FUN_0041b870();
    if (iVar1 != 0) {
      return iVar1 + 0x18;
    }
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 FUN_0065d4c0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x628);
}



undefined4 FUN_0065d4e0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)(**(code **)(*(int *)(in_ECX + -0x5c) + 0x26c))();
  fVar4 = (float10)(**(code **)(*(int *)(in_ECX + -0x5c) + 0xec))();
  piVar1 = (int *)FUN_006156c0(DAT_00b333c4,(float)(fVar4 * (float10)(double)fVar3));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_00579540();
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0065d541. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*piVar1 + 0x124))();
  return uVar2;
}



bool FUN_0065d550(void)

{
  int in_ECX;
  
  return 0 < *(int *)(in_ECX + 0x590);
}



void FUN_0065d560(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x188) = 0;
  *(undefined4 *)(in_ECX + 0x18c) = 0;
  *(undefined4 *)(in_ECX + 400) = 0;
  *(undefined4 *)(in_ECX + 0x194) = 0;
  *(undefined4 *)(in_ECX + 0x198) = 0;
  *(undefined4 *)(in_ECX + 0x19c) = 0;
  *(undefined4 *)(in_ECX + 0x1a0) = 0;
  *(undefined4 *)(in_ECX + 0x1a4) = 0;
  *(undefined4 *)(in_ECX + 0x1a8) = 0;
  *(undefined4 *)(in_ECX + 0x1ac) = 0;
  *(undefined4 *)(in_ECX + 0x1b0) = 0;
  *(undefined4 *)(in_ECX + 0x1b4) = 0;
  *(undefined4 *)(in_ECX + 0x1b8) = 0;
  *(undefined4 *)(in_ECX + 0x1bc) = 0;
  *(undefined4 *)(in_ECX + 0x1c0) = 0;
  *(undefined4 *)(in_ECX + 0x1c4) = 0;
  *(undefined4 *)(in_ECX + 0x1c8) = 0;
  *(undefined4 *)(in_ECX + 0x1cc) = 0;
  *(undefined4 *)(in_ECX + 0x1d0) = 0;
  *(undefined4 *)(in_ECX + 0x1d4) = 0;
  *(undefined4 *)(in_ECX + 0x1d8) = 0;
  return;
}



void FUN_0065d610(void)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0x5b8) = 0;
  *(undefined1 *)(in_ECX + 0x5ba) = 0;
  return;
}



undefined1 FUN_0065d650(void)

{
  return DAT_00b3bb04;
}



void FUN_0065d660(void)

{
  DAT_00b3bb04 = 0;
  DAT_00b14e4d = 1;
  return;
}



void FUN_0065d670(char param_1)

{
  char cVar1;
  int in_ECX;
  
  if (param_1 == '\0') {
    cVar1 = FUN_0045a500();
    if (cVar1 == '\0') {
      FUN_006765f0(0,DAT_00b3bad0,1);
      *(undefined4 *)(in_ECX + 0x608) = 0;
      DAT_00b3bad4 = 0;
      DAT_00b3bad0 = 0;
    }
  }
  *(char *)(in_ECX + 0x610) = param_1;
  return;
}



undefined4 FUN_0065d750(char param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_1 != '\0') {
    return *(undefined4 *)(in_ECX + 0x5cc);
  }
  uVar1 = FUN_004d8370();
  return uVar1;
}



int FUN_0065d770(int param_1)

{
  int iVar1;
  uint3 uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x5c8);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 0) && (iVar1 == param_1)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



void FUN_0065d790(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0051aa00(param_1);
  if ((&DAT_00b102e4)[iVar2 * 0x24] != '\0') {
    FUN_004d8370();
    uVar3 = FUN_004706e0(*(undefined4 *)(&DAT_00b102e8 + iVar2 * 0x24));
    iVar2 = FUN_00474be0(uVar3,param_1);
    if (iVar2 != 0) {
      return;
    }
  }
  cVar1 = FUN_00470d00(param_1);
  if (cVar1 != '\0') {
    FUN_00477b60(param_1,param_2,0xffffffff);
  }
  return;
}



void FUN_0065d810(undefined1 param_1)

{
  DAT_00b3bb06 = param_1;
  return;
}



undefined1 FUN_0065d820(void)

{
  return DAT_00b3bb06;
}



int FUN_0065d830(void)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x5f4) == 0) {
    return 0;
  }
  if (*(char *)(in_ECX + 0x117) == '\0') {
    cVar1 = FUN_005299b0(in_ECX + 0x5f8);
    if (cVar1 != '\0') goto LAB_0065d874;
  }
  FUN_00529a20(in_ECX + 0x5f8);
  *(undefined1 *)(in_ECX + 0x117) = 0;
LAB_0065d874:
  return in_ECX + 0x5f8;
}



uint FUN_0065d880(int param_1,int *param_2)

{
  uint in_EAX;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_ECX;
  
  uVar4 = in_EAX & 0xffffff00;
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    FUN_00689a00();
    uVar1 = FUN_004d6670();
    uVar2 = FUN_006ecc80(uVar1);
    uVar3 = (**(code **)(*param_2 + 0x174))(uVar2);
    uVar4 = FUN_0068b030(in_ECX,uVar3,uVar2,uVar1);
  }
  return uVar4;
}



int FUN_0065d8d0(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined1 local_20 [20];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c3d28;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    iVar5 = FUN_0052b440(1);
    if (iVar5 != 0) {
      uVar1 = FUN_0067f0a0(uVar4);
      uVar6 = FUN_0068ca20();
      FUN_0067f0b0(uVar6);
      uVar2 = FUN_0067f0c0();
      FUN_0067f0d0(0);
      FUN_0068a9f0();
      local_4 = 0;
      iVar5 = FUN_0052b440(1);
      cVar3 = FUN_0065d880(local_20,iVar5);
      if (cVar3 == '\0') {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_0068a1b0();
        if (iVar7 == 0) {
          iVar7 = iVar5;
        }
      }
      FUN_0067f0b0(uVar1);
      FUN_0067f0d0(uVar2);
      local_4 = 0xffffffff;
      FUN_0068aa10();
      *unaff_FS_OFFSET = local_c;
      return iVar7;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



bool FUN_0065d9e0(void)

{
  int iVar1;
  undefined4 in_ECX;
  
  iVar1 = FUN_006758e0(in_ECX,0xf,0);
  FUN_00401f20(iVar1);
  return iVar1 != 0;
}



void FUN_0065da10(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x600) = 0;
  *(undefined4 *)(in_ECX + 0x604) = 0;
  return;
}



void FUN_0065da20(void)

{
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x600) != '\0') && (5.0 < *(float *)(in_ECX + 0x604))) {
    *(undefined1 *)(in_ECX + 0x600) = 0;
    *(undefined4 *)(in_ECX + 0x604) = 0;
  }
  return;
}



bool FUN_0065da50(void)

{
  int in_ECX;
  
  return 0 < *(int *)(in_ECX + 0x608);
}



void FUN_0065dc50(int *param_1)

{
  int iVar1;
  int *in_ECX;
  float10 fVar2;
  
  if ((param_1 != (int *)0x0) && (iVar1 = (**(code **)(*param_1 + 0x154))(), iVar1 != 0)) {
    (**(code **)(*in_ECX + 0x174))();
    (**(code **)(*param_1 + 0x174))();
    fVar2 = (float10)FUN_00982c30();
    fVar2 = (float10)FUN_00548a10((float)fVar2);
    if (0.0 < (float)fVar2) {
      FUN_007eb080((float)fVar2);
      return;
    }
  }
  return;
}



void FUN_0065dd20(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x7f9) = 0;
  return;
}



void FUN_0065dd30(ushort param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 0xe) = param_2;
  *in_ECX = &PTR__scalar_deleting_destructor__00a735a0;
  *(ushort *)(in_ECX + 2) = param_1;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  if (param_1 != 0) {
    uVar1 = FUN_00401f00((uint)param_1 * 4);
    in_ECX[1] = uVar1;
    return;
  }
  in_ECX[1] = 0;
  return;
}



void FUN_0065dd90(void)

{
  ushort uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = 0;
  if (*(short *)(in_ECX + 10) != 0) {
    do {
      uVar2 = (uint)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(*(int *)(in_ECX + 4) + uVar2 * 4) = 0;
    } while (uVar1 < *(ushort *)(in_ECX + 10));
  }
  *(undefined2 *)(in_ECX + 0xc) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  return;
}



void FUN_0065ddc0(int *param_1,int *param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  *param_2 = piVar3[1];
  *param_3 = (char)piVar3[2];
  if (*piVar3 != 0) {
    *param_1 = *piVar3;
    return;
  }
  iVar1 = (**(code **)(*in_ECX + 4))(piVar3[1]);
  uVar2 = iVar1 + 1;
  if (uVar2 < (uint)in_ECX[1]) {
    piVar3 = (int *)(in_ECX[2] + uVar2 * 4);
    do {
      if (*piVar3 != 0) {
        *param_1 = *piVar3;
        return;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < (uint)in_ECX[1]);
  }
  *param_1 = 0;
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a735a0;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



undefined4 FUN_0065de60(void)

{
  int iVar1;
  int in_ECX;
  
  if ((in_ECX == 0) || (*(int *)(in_ECX + 8) == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(in_ECX + 8) + 0x18);
  }
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



void FUN_0065dea0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a735a8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_0065dec0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a735a8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0065def0(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x5ac) != 0) {
    FUN_0065c620(param_1);
    if (**(int **)(in_ECX + 0x5ac) == 0) {
      FUN_004526e0();
      FUN_00401f20(*(undefined4 *)(in_ECX + 0x5ac));
      *(undefined4 *)(in_ECX + 0x5ac) = 0;
    }
  }
  return;
}



void FUN_0065df40(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x5ac) == 0) {
    puVar2 = (undefined4 *)FUN_00401f00(8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    *(undefined4 **)(in_ECX + 0x5ac) = puVar2;
  }
  piVar1 = *(int **)(in_ECX + 0x5ac);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      FUN_00446cb0();
      return;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return;
}



void FUN_0065dfa0(float *param_1,float *param_2)

{
  float fVar1;
  int in_ECX;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)FUN_005e0d20();
  fVar3 = (float10)FUN_004d8fb0();
  fVar1 = *(float *)(in_ECX + 0x350) + *(float *)(in_ECX + 0x230) + *(float *)(in_ECX + 0x47c);
  if (0.0 <= fVar1) {
    *param_1 = fVar1 + (float)fVar3;
    *param_2 = (float)fVar2;
    return;
  }
  *param_1 = (float)fVar3;
  *param_2 = -fVar1 + (float)fVar2;
  return;
}



undefined4 FUN_0065e030(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xb) {
    FUN_004d8fb0();
    uVar1 = FUN_009828c0();
    return uVar1;
  }
  iVar2 = FUN_005e02e0(0);
  if (iVar2 != 0) {
    FUN_005f1910(param_1);
    uVar1 = FUN_009828c0();
    return uVar1;
  }
  return 0;
}



int FUN_0065e5e0(float param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int in_ECX;
  int iVar10;
  int iVar11;
  int local_20;
  
  bVar3 = 2048.0 < param_1;
  if (bVar3) {
    param_1 = 2048.0;
  }
  iVar7 = FUN_006ecc80();
  iVar10 = 0;
  if ((iVar7 != 0) &&
     (((cVar6 = FUN_004c97f0(), cVar6 != '\0' || ((*(byte *)(iVar7 + 0x24) >> 1 & 1) != 0)) ||
      (iVar8 = FUN_0043f270(), iVar8 == 0)))) goto LAB_0065e7d5;
  fVar1 = *(float *)(in_ECX + 0x2c);
  fVar2 = *(float *)(in_ECX + 0x30);
  iVar11 = (int)ROUND(fVar1) >> 0xc;
  iVar8 = (int)ROUND(fVar2) >> 0xc;
  local_20 = 0;
  fVar4 = (float)(iVar11 << 0xc) + 4096.0;
  fVar5 = (float)(iVar8 << 0xc) + 4096.0;
  if ((float)(iVar11 << 0xc) < fVar1 - param_1) {
    if (fVar4 < param_1 + fVar1 != (fVar4 == param_1 + fVar1)) {
      local_20 = 1;
      goto LAB_0065e70a;
    }
  }
  else {
    local_20 = -1;
LAB_0065e70a:
    iVar7 = FUN_0043fa40(local_20 + iVar11,iVar8);
  }
  if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x24) >> 1 & 1) != 0)) goto LAB_0065e7d5;
  if ((float)(iVar8 << 0xc) < fVar2 - param_1) {
    if (fVar5 < fVar2 + param_1 != (fVar5 == fVar2 + param_1)) {
      iVar10 = 1;
      goto LAB_0065e76a;
    }
  }
  else {
    iVar10 = -1;
LAB_0065e76a:
    iVar7 = FUN_0043fa40(iVar11,iVar10 + iVar8);
  }
  if ((((iVar7 == 0) || ((*(byte *)(iVar7 + 0x24) >> 1 & 1) == 0)) &&
      ((local_20 != 0 && (iVar10 != 0)))) &&
     ((((iVar7 = FUN_0043fa40(local_20 + iVar11,iVar10 + iVar8), iVar7 == 0 ||
        ((*(byte *)(iVar7 + 0x24) >> 1 & 1) == 0)) && (bVar3)) &&
      (piVar9 = (int *)FUN_0043f900(), piVar9 != (int *)0x0)))) {
    iVar7 = *piVar9;
  }
LAB_0065e7d5:
  if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x24) >> 1 & 1) == 0)) {
    return 0;
  }
  return iVar7;
}



void FUN_0065e800(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  
  for (puVar1 = (undefined4 *)(in_ECX + 0x73c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[1]) {
    FUN_00401f20(*puVar1);
  }
  iVar2 = *(int *)(in_ECX + 0x740);
  while (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x740) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x740));
    *(int *)(in_ECX + 0x740) = iVar2;
  }
  *(undefined4 *)(in_ECX + 0x73c) = 0;
  *(undefined4 *)(in_ECX + 0x744) = 0;
  return;
}



void FUN_0065e860(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int in_ECX;
  
  iVar3 = FUN_004d6670();
  if (*(int *)(in_ECX + 0x744) != iVar3) {
    FUN_0065e800();
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_004f0620();
      for (piVar2 = piVar4; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
        iVar1 = *piVar2;
        if (iVar1 != 0) {
          piVar5 = (int *)FUN_00401f00(8);
          iVar6 = FUN_004d7730();
          *piVar5 = iVar6;
          piVar5[1] = iVar1;
          if (iVar6 == 0) {
            FUN_00401f20(piVar5);
          }
          else {
            FUN_00446cb0(piVar5);
          }
        }
      }
      FUN_004526e0();
      FUN_00401f20(piVar4);
    }
    *(int *)(in_ECX + 0x744) = iVar3;
  }
  return;
}



void FUN_0065e900(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = FUN_004d8370();
  if ((iVar2 != 0) && (*(int *)(in_ECX + 0x5cc) != 0)) {
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x138))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x304))();
      if (cVar1 != '\0') {
        iVar2 = FUN_00470750(3);
        if (iVar2 == 2) {
          FUN_004706d0(3);
          FUN_004706d0(3);
        }
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0065e960(void)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  uint uVar9;
  int *in_ECX;
  int iVar10;
  undefined1 local_d;
  
  iVar10 = 0xff;
  iVar5 = FUN_004d8370();
  local_d = 0;
  cVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x138))();
  if (((cVar4 != '\0') && (DAT_00b3bb04 != '\0')) && (iVar6 = FUN_005e0ee0(), iVar6 != 5)) {
    iVar5 = FUN_00403520(4,0);
    if ((iVar5 == 0) && (iVar5 = FUN_00403520(4,1), iVar5 == 0)) {
      return 0;
    }
    return DAT_00b3bb05;
  }
  if (DAT_00b3baf4 == 0) {
    iVar6 = FUN_00403520(4,1);
    if ((iVar6 == 0) || (DAT_00b3baeb != '\0')) {
      iVar6 = FUN_00403520(4,0);
      if ((iVar6 == 0) ||
         ((cVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))(), cVar4 == '\0' ||
          (DAT_00b3baeb != '\0')))) goto LAB_0065ef38;
      cVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x138))();
      if (cVar4 != '\0') {
        iVar6 = FUN_005e0ee0();
        if (((iVar6 == 4) || (iVar6 = FUN_005e0ee0(), iVar6 == 5)) &&
           (iVar6 = FUN_00470750(3), iVar6 < 4)) {
          in_ECX[400] = (int)((float)in_ECX[400] + _DAT_00b33e9c);
          _DAT_00b3bafc = _DAT_00b33e9c + _DAT_00b3bafc;
        }
        else {
          in_ECX[400] = 0;
          iVar10 = 0x13;
          pfVar8 = (float *)FUN_00403c00();
          _DAT_00b3bafc = *pfVar8;
        }
      }
      cVar4 = (**(code **)(*in_ECX + 0x25c))();
      if (cVar4 == '\0') {
        uVar7 = FUN_00470720(3);
        cVar4 = FUN_0051acc0(uVar7);
        if (((cVar4 == '\0') && (DAT_00b3baf4 != 2)) &&
           ((cVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x138))(), cVar4 == '\0' &&
            (cVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x13c))(), cVar4 == '\0')))) {
          _DAT_00b3baf8 = _DAT_00b33e9c + _DAT_00b3baf8;
        }
        pfVar8 = (float *)FUN_00403c00();
        if (*pfVar8 < _DAT_00b3baf8) {
          cVar4 = FUN_005e0530();
          if ((cVar4 != '\0') ||
             ((iVar6 = FUN_005f23b0(0x1a), iVar6 < 2 && (cVar4 = FUN_005ec180(), cVar4 != '\0'))))
          goto LAB_0065ec13;
          uVar7 = FUN_00470720(3);
          cVar4 = FUN_0051ac80(uVar7);
          if ((cVar4 == '\0') ||
             (iVar6 = FUN_004706e0(3), *(float *)(iVar6 + 0x48) + *(float *)(iVar5 + 0x94) <= 0.0))
          {
            iVar10 = 0x16;
          }
          else {
            DAT_00b3baf4 = 2;
          }
          goto LAB_0065ec1d;
        }
        goto LAB_0065ec25;
      }
    }
    else {
      cVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))();
      if (cVar4 == '\0') {
        FUN_005e6d70(1);
      }
      else {
        cVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x138))();
        if (cVar4 == '\0') {
          uVar7 = FUN_00470720(3);
          cVar4 = FUN_0051ac80(uVar7);
          if (cVar4 == '\0') {
            cVar4 = FUN_004727e0(0,PTR_DAT_00b241c4,0);
            iVar10 = (cVar4 != 'l') + 0x14;
          }
          else {
            cVar4 = FUN_005e0550();
            if (cVar4 == '\0') {
LAB_0065ec13:
              DAT_00b3baf4 = 1;
            }
          }
        }
        else {
          iVar6 = FUN_005e0ee0();
          if (((iVar6 != 4) && (iVar6 = FUN_005e0ee0(), iVar6 != 5)) ||
             (iVar6 = FUN_00470750(3), 3 < iVar6)) {
            in_ECX[400] = 0;
            iVar10 = 0x13;
            pfVar8 = (float *)FUN_00403c00();
            _DAT_00b3bafc = *pfVar8;
          }
        }
      }
LAB_0065ec1d:
      _DAT_00b3baf8 = 0.0;
LAB_0065ec25:
      local_d = 1;
    }
    if (iVar10 != 0xff) {
LAB_0065ec36:
      iVar6 = FUN_005e0ee0();
      if (iVar6 == 6) {
        FUN_005f4ae0(0);
      }
      cVar4 = FUN_005e0550();
      if ((((cVar4 != '\0') &&
           (cVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x13c))(), cVar4 == '\0')) &&
          (cVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x138))(), cVar4 == '\0')) &&
         ((cVar4 = FUN_005e0530(), cVar4 == '\0' && (iVar6 = FUN_005f23b0(0x1a), 1 < iVar6)))) {
        iVar10 = 0x16;
      }
      bVar3 = false;
      if (iVar10 == 0x16) {
        cVar4 = FUN_005e0550();
        if (cVar4 == '\0') {
          uVar9 = (**(code **)(*(int *)in_ECX[0x16] + 0x2c0))();
          if ((uVar9 & 1) == 0) {
            if ((uVar9 & 2) == 0) {
              if ((uVar9 & 4) == 0) {
                if ((uVar9 & 8) != 0) {
                  iVar10 = 0x1a;
                }
              }
              else {
                iVar10 = 0x19;
              }
            }
            else {
              iVar10 = 0x18;
            }
          }
          else {
            iVar10 = 0x17;
          }
        }
        iVar6 = FUN_0047df80(0);
        if ((float)iVar6 / 32767.0 <= _DAT_00b36f40) {
          bVar3 = true;
        }
      }
      cVar4 = FUN_005f48d0(iVar10);
      if (((cVar4 != '\0') && (bVar3)) &&
         (cVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x13c))(), cVar4 == '\0')) {
        (**(code **)(*in_ECX + 0x308))();
      }
      DAT_00b3baf4 = 0;
      DAT_00b3bb84 = '\x01';
      _DAT_00b3bb80 = 0;
    }
  }
  else {
    uVar7 = FUN_00470720(3);
    cVar4 = FUN_0051ac80(uVar7);
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x138))();
      if (cVar4 == '\0') {
        if (DAT_00b3baf4 == 1) {
          cVar4 = FUN_004727e0(0,PTR_DAT_00b241c4,0);
          iVar10 = (cVar4 != 'l') + 0x14;
        }
        else {
          if (DAT_00b3baf4 != 2) goto LAB_0065ef38;
          iVar10 = 0x16;
        }
      }
      else {
        iVar10 = FUN_005e0ee0();
        if ((iVar10 == 5) && (iVar10 = FUN_00470750(3), iVar10 < 4)) goto LAB_0065ef38;
        iVar10 = 0x13;
      }
      goto LAB_0065ec36;
    }
    uVar7 = FUN_00470720(3);
    cVar4 = FUN_0051acc0(uVar7);
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x138))();
      if (cVar4 == '\0') {
        iVar10 = FUN_00470750(3);
        if (iVar10 == 2) {
          if (DAT_00b3baf4 == 1) {
            iVar10 = FUN_00472720(3,&DAT_00a70ea4,0);
            iVar10 = 0x15 - (uint)(iVar10 != -1);
          }
          else {
            if (DAT_00b3baf4 != 2) goto LAB_0065ef38;
            iVar10 = 0x16;
          }
          goto LAB_0065ec36;
        }
      }
      else {
        iVar10 = FUN_00470750(3);
        if ((iVar10 == 3) &&
           ((iVar10 = FUN_005e0ee0(), iVar10 != 5 || (iVar10 = FUN_00470750(3), 3 < iVar10)))) {
          in_ECX[400] = 0;
          iVar10 = 0x13;
          pfVar8 = (float *)FUN_00403c00();
          _DAT_00b3bafc = *pfVar8;
          goto LAB_0065ec36;
        }
      }
    }
  }
LAB_0065ef38:
  iVar10 = FUN_00403520(4,0);
  if ((((iVar10 == 0) && (iVar10 = FUN_00403520(4,1), iVar10 == 0)) ||
      (cVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))(), cVar4 == '\0')) ||
     ((cVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x13c))(), cVar4 != '\0' ||
      (DAT_00b3baeb != '\0')))) {
    DAT_00b3bb84 = '\0';
    iVar5 = FUN_005e0ee0();
    if (iVar5 == -1) {
      DAT_00b3baeb = '\0';
    }
  }
  else {
    uVar7 = FUN_00470720(3);
    cVar4 = FUN_0051ac80(uVar7);
    if (cVar4 != '\0') {
      uVar7 = FUN_00470720(3);
      cVar4 = FUN_0051acc0(uVar7);
      if ((cVar4 == '\0') && (DAT_00b3baf4 == 0)) {
        iVar10 = FUN_004706e0(3);
        fVar1 = *(float *)(iVar10 + 0x48);
        fVar2 = *(float *)(iVar5 + 0x94);
        cVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x138))();
        if (cVar4 == '\0') {
          if (((fVar1 + fVar2 <= 0.0) || (*(int *)(iVar10 + 0x44) != 1)) &&
             (cVar4 = (**(code **)(*in_ECX + 0x25c))(), cVar4 == '\0')) goto LAB_0065f036;
        }
        else {
          iVar5 = FUN_00470750(3);
          if ((iVar5 == 2) && (DAT_00b3bb84 != '\0')) {
LAB_0065f036:
            FUN_004706d0(3);
            FUN_004706d0(3);
            return local_d;
          }
        }
      }
    }
  }
  return local_d;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0065f080(float *param_1,float *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float *pfVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  int *local_78;
  float local_74;
  float *local_70;
  float local_6c;
  float local_68;
  float local_64;
  float *local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_50 [60];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_94;
  fVar1 = param_1[2];
  fVar2 = *param_1;
  fVar3 = param_1[1];
  local_60 = param_1;
  local_70 = param_2;
  local_84 = fVar2;
  local_80 = fVar3;
  local_7c = fVar1;
  if (param_3 == '\0') {
    if (DAT_00b14e4d == '\0') {
      local_90 = fVar2 - DAT_00b3bb38;
      local_8c = fVar3 - DAT_00b3bb3c;
      local_88 = fVar1 - DAT_00b3bb40;
      local_94 = local_88 * local_88 + local_90 * local_90 + local_8c * local_8c;
      fVar11 = (float10)FUN_00982c30();
      local_74 = (float)fVar11;
      fVar4 = _DAT_00b36be0;
      if ((DAT_00b3bb04 == '\0') || (fVar4 = _DAT_00b36bd8, DAT_00b3bb05 != '\0')) {
        fVar4 = fVar4 * _DAT_00b33e9c;
        local_90 = fVar4 * local_90;
        local_8c = local_8c * fVar4;
        local_88 = fVar4 * local_88;
      }
      else {
        local_90 = DAT_00b3f9a8;
        local_8c = DAT_00b3f9ac;
        local_88 = DAT_00b3f9b0;
        DAT_00b3bb38 = fVar2;
        DAT_00b3bb3c = fVar3;
        DAT_00b3bb40 = fVar1;
      }
      local_94 = local_88 * local_88 + local_90 * local_90 + local_8c * local_8c;
      fVar11 = (float10)FUN_00982c30();
      local_94 = (float)fVar11;
      if (local_74 < local_94 == (local_74 == local_94)) {
        fVar2 = DAT_00b3bb38 + local_90;
        fVar3 = local_8c + DAT_00b3bb3c;
        fVar1 = local_88 + DAT_00b3bb40;
      }
      DAT_00b3bb40 = fVar1;
      DAT_00b3bb3c = fVar3;
      DAT_00b3bb38 = fVar2;
      local_84 = DAT_00b3bb38;
      local_80 = DAT_00b3bb3c;
      local_7c = DAT_00b3bb40;
    }
    else {
      DAT_00b14e4d = '\0';
      DAT_00b3bb38 = fVar2;
      DAT_00b3bb3c = fVar3;
      DAT_00b3bb40 = fVar1;
    }
  }
  fVar3 = local_7c;
  fVar2 = local_80;
  fVar1 = local_84;
  local_90 = local_84 - *local_70;
  local_8c = local_80 - local_70[1];
  local_88 = local_7c - local_70[2];
  fVar11 = (float10)FUN_0043f350();
  local_94 = (float)fVar11;
  if (local_78[0x7c] != 0) {
    local_6c = *local_70;
    local_68 = local_70[1];
    local_64 = local_70[2];
    local_84 = fVar1;
    local_80 = fVar2;
    local_7c = fVar3;
    cVar6 = FUN_005326b0(&local_6c,&local_84,local_50);
    if (cVar6 != '\0') {
      local_84 = local_84 - local_6c;
      local_80 = local_80 - local_68;
      local_7c = local_7c - local_64;
      local_74 = local_80 * local_80 + local_84 * local_84 + local_7c * local_7c;
      fVar11 = (float10)FUN_00982c30();
      local_94 = (float)fVar11;
    }
  }
  pfVar10 = local_70;
  local_74 = _DAT_00b36be8 * _DAT_00b33e9c;
  if (_DAT_00b3bacc < local_94) {
    _DAT_00b3bacc = _DAT_00b3bacc + local_74;
    if (local_94 < _DAT_00b3bacc) {
      _DAT_00b3bacc = local_94;
    }
  }
  else {
    _DAT_00b3bacc = local_94;
  }
  if (_DAT_00b3bacc < _DAT_00b36b60) {
    _DAT_00b3bacc = _DAT_00b36b60;
  }
  if (_DAT_00b36b68 < _DAT_00b3bacc) {
    _DAT_00b3bacc = _DAT_00b36b68;
  }
  local_6c = local_90 * _DAT_00b3bacc;
  local_68 = local_8c * _DAT_00b3bacc;
  local_64 = _DAT_00b3bacc * local_88;
  local_5c = local_6c + *local_70;
  local_58 = local_68 + local_70[1];
  local_54 = local_70[2] + local_64;
  iVar7 = (**(code **)(*local_78 + 0x380))();
  iVar8 = FUN_00589b70(0x40c);
  piVar5 = local_78;
  if (iVar8 == 0) {
    uVar9 = FUN_0065a2c0();
    fVar11 = (float10)FUN_005e0660();
    local_78 = (int *)(float)(fVar11 - (float10)124.0);
    if (iVar7 != 0) {
      fVar11 = (float10)FUN_005e0660();
      local_78 = (int *)(float)(fVar11 * (float10)0.5 + (float10)(float)local_78);
    }
    cVar6 = FUN_005328b0(uVar9,&local_5c,_DAT_00b14ec0,local_78);
    if (cVar6 == '\0') {
      pfVar10 = local_70;
      if (iVar7 != 0) {
        uVar13 = 0;
        pfVar10 = &local_5c;
        uVar12 = 0x40400000;
        uVar9 = FUN_0065a2c0(pfVar10,0x40400000,0);
        cVar6 = FUN_005328b0(uVar9,pfVar10,uVar12,uVar13);
        pfVar10 = local_70;
        if (cVar6 != '\0') goto LAB_0065f4d9;
      }
      goto LAB_0065f554;
    }
LAB_0065f4d9:
    pfVar10 = local_70;
    if (*(char *)((int)piVar5 + 0x589) != '\0') goto LAB_0065f554;
    if (0.0 < _DAT_00b14e50) {
      _DAT_00b14e50 = _DAT_00b14e50 - _DAT_00b33e9c * 4.0;
      if (_DAT_00b14e50 < 0.0) {
        _DAT_00b14e50 = 0.0;
      }
      FUN_005ee1b0();
      pfVar10 = local_70;
      if (iVar7 != 0) {
        _DAT_00b14e54 = _DAT_00b14e50;
        DAT_00b3bb00 = iVar7;
        FUN_005ee1b0();
        pfVar10 = local_70;
        goto LAB_0065f5c2;
      }
      goto LAB_0065f5cc;
    }
LAB_0065f5c2:
    if (iVar7 != 0) goto LAB_0065f625;
  }
  else {
LAB_0065f554:
    if (1.0 <= _DAT_00b14e50) goto LAB_0065f5c2;
    _DAT_00b14e50 = _DAT_00b33e9c * 4.0 + _DAT_00b14e50;
    if (1.0 < _DAT_00b14e50) {
      _DAT_00b14e50 = 1.0;
    }
    FUN_005ee1b0();
    if (iVar7 != 0) {
      _DAT_00b14e54 = _DAT_00b14e50;
      DAT_00b3bb00 = iVar7;
      FUN_005ee1b0();
      goto LAB_0065f5c2;
    }
  }
LAB_0065f5cc:
  if (DAT_00b3bb00 != 0) {
    _DAT_00b14e54 = _DAT_00b33e9c * 4.0 + _DAT_00b14e54;
    if (1.0 < _DAT_00b14e54) {
      _DAT_00b14e54 = 1.0;
    }
    FUN_005ee1b0();
    if (_DAT_00b14e54 == 1.0) {
      DAT_00b3bb00 = 0;
    }
  }
LAB_0065f625:
  local_8c = local_8c * _DAT_00b3bacc;
  local_88 = _DAT_00b3bacc * local_88;
  fVar1 = pfVar10[1];
  fVar2 = pfVar10[2];
  *local_60 = _DAT_00b3bacc * local_90 + *pfVar10;
  local_60[1] = local_8c + fVar1;
  local_60[2] = fVar2 + local_88;
  return;
}



void FUN_0065f6a0(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x18);
  iVar3 = (**(code **)(*(int *)(param_1 + 0x18) + 0x18))();
  if ((((iVar3 == 0) || (iVar3 = (**(code **)(*piVar1 + 0x18))(), iVar3 == 4)) ||
      (iVar3 = (**(code **)(*piVar1 + 0x18))(), iVar3 == 2)) ||
     (iVar3 = (**(code **)(*piVar1 + 0x18))(), iVar3 == 3)) {
    while ((*(int *)(param_1 + 0x2c) != 0 || (*(int *)(param_1 + 0x28) != 0))) {
      if (*(int *)(param_1 + 0x28) != 0) {
        puVar2 = (uint *)(*(int *)(*(int *)(param_1 + 0x28) + 0x1c) + 0x58);
        *puVar2 = *puVar2 | 0x200000;
      }
      if (*(int *)(param_1 + 0x2c) == 0) {
        return;
      }
      param_1 = *(int *)(param_1 + 0x2c) + -0x28;
      if (param_1 == 0) {
        return;
      }
    }
  }
  return;
}



char FUN_0065f720(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  char cVar1;
  int local_4;
  
  local_4 = 0;
  cVar1 = FUN_005f44a0(param_1,param_2,&local_4,param_4);
  if (param_3 != (int *)0x0) {
    *param_3 = local_4;
  }
  if ((cVar1 == '\0') && (local_4 == 5)) {
    return '\0';
  }
  if (DAT_00b3bb06 != '\0') {
    cVar1 = '\x01';
  }
  return cVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0065f770(void)

{
  int iVar1;
  int *in_ECX;
  float10 fVar2;
  float10 fVar3;
  
  FUN_006ac3d0();
  FUN_00699da0();
  fVar2 = (float10)FUN_004029d0();
  fVar3 = (float10)FUN_00673b00();
  FUN_00673b10((float)(fVar3 + (float10)(float)((float10)3600.0 / fVar2)));
  if (DAT_00b14e4c != '\0') {
    if (*(char *)((int)in_ECX + 0x6e5) == '\0') {
      if (DAT_00b3bd98 != '\0') {
        FUN_00677ec0(0x45610000,1);
        FUN_00674200(0x45610000,1);
        FUN_00673e90(0x45610000,1);
        FUN_00673c10(0x45610000,1);
      }
    }
    else {
      FUN_006a2280(0x45610000);
    }
    FUN_005f2530(0x45610000);
    FUN_005f25f0(0x45610000,1);
    FUN_005f2720(0x45610000);
  }
  FUN_004029e0((float)((float10)3600.0 / fVar2));
  FUN_00542f20(_DAT_00b33e9c);
  iVar1 = *in_ECX;
  fVar2 = (float10)FUN_00673b00();
  (**(code **)(iVar1 + 0x368))((float)fVar2);
  in_ECX[0x164] = in_ECX[0x164] + -1;
  if ((char)in_ECX[0x165] == '\0') {
    in_ECX[0x1ab] = in_ECX[0x1ab] + 1;
  }
  else {
    in_ECX[0x1aa] = in_ECX[0x1aa] + 1;
  }
  if (in_ECX[0x164] < 1) {
    DAT_00b14e4c = '\x01';
    *(undefined1 *)(in_ECX + 0x165) = 0;
  }
  return;
}



void FUN_0065f910(int *param_1,char param_2)

{
  FUN_006ff420("Player");
  if (param_2 != '\0') {
    *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 1;
  }
  DAT_00b3bb10 = (**(code **)(*param_1 + 0x58))("Camera01");
  return;
}



void FUN_0065fa40(int param_1,float param_2)

{
  char cVar1;
  int in_ECX;
  
  if (param_2 < 0.0) {
    param_2 = 0.0;
  }
  if (param_1 - 0xcU < 0x15) {
    cVar1 = FUN_00565c50(2,param_1);
    *(float *)(in_ECX + 0x130 + cVar1 * 4) = param_2;
  }
  return;
}



float10 FUN_0065fad0(float param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  undefined4 local_4;
  
  local_4 = 1.0;
  if (param_1 != 0.0) {
    iVar3 = FUN_005e3320();
    if (iVar3 != 0) {
      piVar1 = (int *)((int)param_1 + 0x2c);
      param_1 = 1.0;
      if (*piVar1 - 0xcU < 0x15) {
        cVar2 = FUN_00565c50(2,*piVar1);
        param_1 = *(float *)(in_ECX + 0x7a4 + cVar2 * 4);
      }
      local_4 = param_1;
    }
  }
  return (float10)local_4;
}



int FUN_0065fb30(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x184) / DAT_00b37618;
  if (*(int *)(in_ECX + 0x184) % DAT_00b37618 == 0) {
    if (*(int *)(in_ECX + 0x5b4) == 0) {
      puVar2 = (undefined4 *)FUN_00401f00(8);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      *(undefined4 **)(in_ECX + 0x5b4) = puVar2;
    }
    puVar2 = (undefined4 *)FUN_00401f00(8);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      iVar1 = FUN_00446cb0(puVar2);
      return iVar1;
    }
    iVar1 = FUN_00446cb0(0);
  }
  return iVar1;
}



void FUN_0065fbb0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  
  piVar1 = *(int **)(in_ECX + 0x5b4);
  if (piVar1 == (int *)0x0) {
    puVar4 = (undefined4 *)FUN_00401f00(8);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    *(undefined4 **)(in_ECX + 0x5b4) = puVar4;
  }
  else {
    iVar5 = 0;
    piVar3 = piVar1;
    do {
      if (*piVar3 != 0) {
        iVar5 = iVar5 + 1;
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    if (iVar5 == 1) {
      FUN_00401f20(*piVar1);
      puVar4 = *(undefined4 **)(in_ECX + 0x5b4);
      puVar2 = (undefined4 *)puVar4[1];
      if (puVar2 == (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      else {
        puVar4[1] = puVar2[1];
        *puVar4 = *puVar2;
        FUN_00401f20(puVar2);
      }
    }
    else {
      for (piVar3 = (int *)piVar1[1]; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
        piVar1 = piVar3;
      }
      iVar5 = *piVar1;
      if (iVar5 != 0) {
        FUN_0065c620(iVar5);
        FUN_00401f20(iVar5);
      }
    }
  }
  if (((*(int **)(in_ECX + 0x5b4))[1] == 0) && (**(int **)(in_ECX + 0x5b4) == 0)) {
    puVar4 = (undefined4 *)FUN_00401f00(8);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      FUN_00446cb0(puVar4);
      return;
    }
    FUN_00446cb0(0);
  }
  return;
}



float10 FUN_0065fca0(int param_1)

{
  float fVar1;
  char cVar2;
  int in_ECX;
  
  if (param_1 - 0xcU < 0x15) {
    cVar2 = FUN_00565c50(2,param_1);
    fVar1 = *(float *)(in_ECX + 0x130 + cVar2 * 4);
    cVar2 = FUN_00565c50(2,param_1);
    return (float10)(fVar1 / *(float *)(in_ECX + 0x7a4 + cVar2 * 4));
  }
  return (float10)0;
}



float10 FUN_0065fd00(void)

{
  int in_ECX;
  
  return (float10)((float)*(int *)(in_ECX + 0x184) / (float)DAT_00b37618);
}



void FUN_0065fd20(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if (((param_1 != (int *)0x0) && (iVar2 = (**(code **)(*param_1 + 0x170))(), iVar2 == DAT_00b35ebc)
      ) && (iVar2 = FUN_004d7630(), iVar2 != 0)) {
    iVar2 = FUN_006ecc80();
    if (iVar2 != 0) {
      FUN_006ecc80();
      cVar1 = FUN_004c97f0();
      if (cVar1 != '\0') {
        FUN_006ecc80();
        cVar1 = FUN_004c9820();
        if (cVar1 == '\0') {
          return;
        }
      }
    }
    cVar1 = FUN_00446c30(param_1);
    if (cVar1 == '\0') {
      FUN_00446cb0(param_1);
    }
  }
  return;
}



undefined4 FUN_0065fda0(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int in_ECX;
  int *piVar9;
  uint *unaff_FS_OFFSET;
  float10 fVar10;
  float local_28;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c3d58;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (uint)&local_c;
  piVar9 = (int *)0x0;
  local_28 = 3.4028235e+38;
  for (piVar1 = (int *)(in_ECX + 0x704);
      (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
    piVar2 = (int *)*piVar1;
    if ((((uint)piVar2[2] >> 0xb & 1) == 0) && (cVar3 = FUN_004fa560(piVar2,uVar4), cVar3 == '\0'))
    {
      FUN_0068a9f0();
      local_4 = 0;
      uVar5 = FUN_004d6670();
      uVar6 = FUN_006ecc80(uVar5);
      uVar7 = (**(code **)(*piVar2 + 0x174))(uVar6);
      cVar3 = FUN_0068b030(DAT_00b333c4,uVar7,uVar6,uVar5);
      if (cVar3 != '\0') {
        fVar10 = (float10)FUN_0068a760(DAT_00b333c4);
        if ((float)fVar10 < local_28) {
          piVar9 = piVar2;
          local_28 = (float)fVar10;
        }
      }
      local_4 = 0xffffffff;
      FUN_0068aa10();
    }
  }
  DAT_00b3bad0 = piVar9;
  if (piVar9 != (int *)0x0) {
    FUN_004d7630();
    iVar8 = FUN_0042b410();
    if (iVar8 != 0) {
      iVar8 = FUN_006ecc80();
      if (iVar8 != 0) {
        DAT_00b3bad4 = FUN_004cba80(DAT_00b33aac,1);
        if (DAT_00b3bad4 != 0) {
          *unaff_FS_OFFSET = local_c;
          return 1;
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}


