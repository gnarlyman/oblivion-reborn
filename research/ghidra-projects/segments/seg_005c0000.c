
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005c01d0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)FUN_00589b70(0x40a);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  FUN_00582160(0,1);
  fVar8 = (float10)thunk_FUN_00584980();
  uVar2 = FUN_00590420("Data\\Menus\\dialog\\persuasion_menu.xml");
  piVar3 = (int *)FUN_005898f0();
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  iVar4 = (**(code **)(*piVar3 + 0x34))();
  if (iVar4 == 0x40a) {
    uVar5 = FUN_009832e6(uVar2,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
    FUN_00584880(uVar5);
    fVar9 = (float10)FUN_00588bd0(0xfa5);
    if ((fVar9 == (float10)6006.0) ||
       (fVar9 = (float10)FUN_00588bd0(0xfa5), fVar9 == (float10)102.0)) {
      FUN_0058ceb0(0xfab,(float)fVar8);
    }
    piVar3[0x36] = param_1;
    FUN_00588bd0(0xfb5);
    iVar4 = FUN_009828c0();
    piVar3[0x37] = iVar4;
    FUN_00588bd0(0xfb6);
    iVar4 = FUN_009828c0();
    piVar3[0x38] = iVar4;
    FUN_00588bd0(0xfb7);
    iVar4 = FUN_009828c0();
    piVar3[0x39] = iVar4;
    FUN_00588bd0(0xfb4);
    iVar4 = FUN_009828c0();
    piVar3[0x3a] = iVar4;
    FUN_0058ceb0(0xfaf,0x3f800000);
    piVar3[0x21] = 0;
    FUN_0052ed50(3,0x25);
    iVar4 = FUN_0052f790(piVar3[0x36],DAT_00b333c4,0,0);
    if (iVar4 != 0) {
      FUN_006b7ba0();
      puVar1 = (undefined4 *)FUN_006b7c20();
      if (puVar1 != (undefined4 *)0x0) {
        iVar6 = FUN_005e12b0();
        *(undefined1 *)(iVar6 + 0x1db) = 0;
        *(undefined4 *)(piVar3[0x36] + 0x70) = 7;
        (**(code **)(*(int *)piVar3[0x36] + 0x304))(_DAT_00b33e9c,puVar1);
        if (DAT_00b13200 != '\0') {
          uVar5 = *puVar1;
          uVar7 = (**(code **)(**(int **)(piVar3[0x36] + 0x58) + 0x33c))(0,0,0xbf800000);
          FUN_0057acc0(uVar5,uVar7);
        }
      }
      FUN_006b81d0();
      FUN_00401f20(iVar4);
    }
    *(undefined1 *)(piVar3 + 0x23) = 0;
    FUN_005bf7d0();
    FUN_00585190(0);
    return uVar2;
  }
  if (piVar3[1] == 0) {
    return 0;
  }
  (**(code **)*piVar3)(1);
  return 0;
}



void FUN_005c0440(uint param_1)

{
  int in_ECX;
  float10 fVar1;
  
  if ((*(int *)(in_ECX + 0x28) != 2) ||
     (fVar1 = (float10)FUN_00588bd0(0xfa7), fVar1 == (float10)255.0)) {
    if (param_1 == 0x1a) goto LAB_005c047f;
    if ((param_1 != 9) && (param_1 != 8)) {
      return;
    }
  }
  if (0x1a < param_1) {
    return;
  }
LAB_005c047f:
                    /* WARNING: Could not recover jumptable at 0x005c0486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_005c04c0)[(byte)(&DAT_005c04d4)[param_1]])();
  return;
}



void FUN_005c04f0(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[0x15] = 0;
  in_ECX[0xb] = 0;
  in_ECX[10] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x14] = 0;
  *in_ECX = &PTR_FUN_00a6d15c;
  in_ECX[0x10] = 1;
  return;
}



void FUN_005c05a0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6d15c;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4
FUN_005c05d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  int iStack_8;
  
  puVar1 = (undefined4 *)FUN_00589b70(0x3f8);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  FUN_00582160(0,1);
  fVar5 = (float10)thunk_FUN_00584980();
  uVar2 = FUN_00590420("Data\\Menus\\quantity_menu.xml");
  piVar3 = (int *)FUN_005898f0();
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  iVar4 = (**(code **)(*piVar3 + 0x34))();
  if (iVar4 != 0x3f8) {
    if (piVar3[1] == 0) {
      return 0;
    }
    (**(code **)*piVar3)(1);
    return 0;
  }
  uVar2 = FUN_009832e6(uVar2,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar2);
  iVar4 = FUN_009832e6(piVar3,0,&PTR_PTR_00b0a018,&PTR_PTR_00b14408,0);
  if (((((*(int *)(iVar4 + 0x2c) != 0) && (*(int *)(iVar4 + 0x28) != 0)) &&
       (*(int *)(iVar4 + 0x30) != 0)) &&
      ((*(int *)(iVar4 + 0x34) != 0 && (*(int *)(iVar4 + 0x38) != 0)))) &&
     (*(int *)(iVar4 + 0x3c) != 0)) {
    fVar6 = (float10)FUN_00588bd0(0xfa5);
    if ((fVar6 == (float10)6006.0) ||
       (fVar6 = (float10)FUN_00588bd0(0xfa5), fVar6 == (float10)102.0)) {
      FUN_0058ceb0(0xfab,(float)fVar5);
    }
    *(undefined4 *)(iVar4 + 0x44) = param_2;
    *(int *)(iVar4 + 0x40) = param_4;
    *(undefined4 *)(iVar4 + 0x4c) = param_3;
    *(int *)(iVar4 + 0x48) = param_4;
    *(undefined4 *)(iVar4 + 0x50) = param_5;
    FUN_0058ceb0(0xfaf,0x3f800000);
    FUN_0058ceb0(0xfb0,(float)param_4);
    iStack_8 = (int)(param_4 + (param_4 >> 0x1f & 3U)) >> 2;
    if (iStack_8 < 2) {
      iStack_8 = 1;
    }
    FUN_0058ceb0(0xfb2,(float)iStack_8);
    FUN_0058ceb0(0xfb3,(float)param_4);
    FUN_0058ceb0(0xfb3,0);
    FUN_00585190(0);
    return 1;
  }
  FUN_004a7a60("Quantity Menu Creation Failed... Are your menu and art resources up to date?");
  return 0;
}



void FUN_005c07d0(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3f8);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
    FUN_00598640();
    return;
  }
  return;
}



void FUN_005c09a0(int param_1)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  
  FUN_00582160(0,1);
  if (param_1 == 4) {
    FUN_0057d7a0();
    iVar1 = FUN_009828c0();
    fVar2 = (float10)FUN_00588c50();
    *(float *)(in_ECX + 0x54) = (float)((float10)iVar1 - fVar2);
  }
  return;
}



void FUN_005c0a00(int param_1)

{
  int iVar1;
  
  if (param_1 == 4) {
    FUN_00582160(0,1);
    FUN_0057d7a0();
    FUN_009828c0();
    FUN_00588c50();
    FUN_00588bd0(0xfb6);
    FUN_0058ceb0(0xfb7,0xce6e6b28);
    iVar1 = FUN_009828c0();
    FUN_0058ceb0(0xfb7,(float)iVar1);
    FUN_0058ceb0(0xfb7,0);
  }
  return;
}



void FUN_005c0b50(void)

{
  int iVar1;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  
  FUN_00584640();
  *in_ECX = &PTR_FUN_00a6d1f4;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  iVar1 = 0;
  puVar2 = in_ECX + 0xc;
  do {
    *puVar2 = 0;
    (&DAT_00b3b418)[iVar1] = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 8);
  DAT_00b3b430 = 0xffffffff;
  DAT_00b3b424 = 0xffffffff;
  DAT_00b3b434 = 0xffffffff;
  DAT_00b3b428 = 0xffffffff;
  DAT_00b3b438 = 0xffffffff;
  DAT_00b3b42c = 0xffffffff;
  DAT_00b3b420 = 0;
  return;
}



char * FUN_005c0c50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036dc,0);
  if (iVar1 != 0) {
    uVar2 = FUN_005e1df0();
    pcVar3 = (char *)FUN_00469380(uVar2);
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) goto LAB_005c0c9e;
  }
  pcVar3 = (char *)FUN_004702d0(param_1,DAT_00b333c4);
LAB_005c0c9e:
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}



void FUN_005c0cf0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6d1f4;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005c0d20(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x416);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_0058ceb0(0x1772,0x3f800000);
    FUN_00584740();
    return;
  }
  return;
}



short FUN_005c0d60(void)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  short sVar6;
  
  sVar6 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    sVar6 = 6;
  }
  uVar5 = 0;
  do {
    puVar1 = *(undefined4 **)((int)&DAT_00b3b444 + uVar5);
    sVar6 = sVar6 + 1;
    while (puVar1 != (undefined4 *)0x0) {
      piVar3 = puVar1 + 2;
      puVar1 = (undefined4 *)*puVar1;
      if (*piVar3 != 0) {
        sVar6 = sVar6 + 4;
      }
    }
    uVar5 = uVar5 + 0x10;
  } while (uVar5 < 0x80);
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar3 = (int *)FUN_0046b250(*puVar1);
      uVar4 = (**(code **)(*piVar3 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0x368,
                         ".\\Interface\\Menus\\QuickKeysMenu.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,sVar6,*puVar1,uVar4);
      return sVar6;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",sVar6,0x368,
                 ".\\Interface\\Menus\\QuickKeysMenu.cpp");
  }
  return sVar6;
}



void FUN_005c0e30(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  short *psVar4;
  char cVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  char local_11;
  int local_10;
  short *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_10 = *(int *)(DAT_00b33b00 + 0x14);
  local_c = (short *)0x0;
  cVar5 = FUN_0045a170();
  if (cVar5 != '\0') {
    local_8 = 0x4b4f4c42;
    FUN_0045b9a0(&local_8,4);
    local_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_4,2);
  }
  uVar8 = 0;
  do {
    local_11 = '\0';
    pcVar1 = *(char **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_11,1);
    puVar2 = *(undefined4 **)((int)&DAT_00b3b444 + uVar8);
    while (puVar2 != (undefined4 *)0x0) {
      piVar6 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      if (*piVar6 != 0) {
        local_8 = *(undefined4 *)(*piVar6 + 0xc);
        FUN_0045f7a0(&local_8,4);
        local_11 = local_11 + '\x01';
      }
    }
    uVar8 = uVar8 + 0x10;
    *pcVar1 = local_11;
  } while (uVar8 < 0x80);
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar3 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar3 - local_10,0x389,
                   ".\\Interface\\Menus\\QuickKeysMenu.cpp");
    }
    else {
      piVar6 = (int *)FUN_0046b250(*puVar2);
      uVar7 = (**(code **)(*piVar6 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0x389,
                         ".\\Interface\\Menus\\QuickKeysMenu.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar3 - local_10,*puVar2,uVar7);
    }
  }
  cVar5 = FUN_0045a170();
  psVar4 = local_c;
  if (cVar5 != '\0') {
    uVar8 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_c + 0xffffU < uVar8) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\Interface\\Menus\\QuickKeysMenu.cpp",0x389);
    }
    *psVar4 = (short)uVar8 - (short)psVar4;
  }
  return;
}



void FUN_005c0fc0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = &DAT_00b3b440;
  iVar3 = 8;
  do {
    puVar2 = (undefined4 *)piVar4[1];
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      (**(code **)(*piVar4 + 8))(puVar2);
      puVar2 = puVar1;
    }
    piVar4[3] = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4 = piVar4 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



void FUN_005c1000(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x416);
  if (((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) && (*(int *)(iVar1 + 0x24) != 2)) {
    FUN_0058ceb0(0xfa1,0x3f800000);
    FUN_0058ceb0(0xfa7,0);
    DAT_00b3b43d = 0;
    FUN_005c0d20();
    return;
  }
  return;
}



void FUN_005c1060(int param_1)

{
  if ((param_1 + 1U < 9) && (param_1 != DAT_00b3b430)) {
    DAT_00b3b420 = 0;
    if ((-1 < param_1) && (DAT_00b3b430 < 0)) {
      DAT_00b3b428 = 0;
      DAT_00b3b42c = 0;
      DAT_00b3b434 = 0xffffffff;
      DAT_00b3b438 = 0xffffffff;
      DAT_00b3b424 = DAT_00b33ea0;
      DAT_00b3b430 = param_1;
      return;
    }
    DAT_00b3b438 = DAT_00b3b434;
    DAT_00b3b434 = DAT_00b3b430;
    DAT_00b3b42c = DAT_00b3b428;
    DAT_00b3b428 = DAT_00b33ea0 - DAT_00b3b424;
    DAT_00b3b424 = DAT_00b33ea0;
    DAT_00b3b430 = param_1;
  }
  return;
}



int FUN_005c1100(void)

{
  int iVar1;
  
  iVar1 = DAT_00b3b430;
  if (DAT_00b3b430 == -1) {
    if ((-1 < DAT_00b3b434) && (DAT_00b394c8 < (int)DAT_00b3b428)) {
      return DAT_00b3b434;
    }
    iVar1 = DAT_00b3b438;
    if ((DAT_00b3b438 < 0) || ((int)DAT_00b3b42c <= DAT_00b394c8)) {
      if (DAT_00b3b434 < 0) {
        iVar1 = -1;
      }
      else if ((DAT_00b3b438 < 0) || (DAT_00b3b42c <= DAT_00b3b428)) {
        return DAT_00b3b434;
      }
    }
  }
  return iVar1;
}



bool FUN_005c1160(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_00b3b430 < 0) {
    return false;
  }
  if ((-1 < DAT_00b3b434) && (-1 < DAT_00b3b438)) {
    return true;
  }
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (-1 < (&DAT_00b3b430)[iVar1]) {
      if (iVar1 == 0) {
        iVar2 = iVar2 + (DAT_00b33ea0 - DAT_00b3b424);
      }
      else {
        iVar2 = iVar2 + (&DAT_00b3b424)[iVar1];
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = FUN_009828c0();
  return iVar1 <= iVar2;
}



void FUN_005c11e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0ef8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6d244;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a6d234;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005c1240(void)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a6d278;
  return;
}



void thunk_FUN_005c11e0(void)

{
  FUN_005c11e0();
  return;
}



void FUN_005c1270(byte param_1)

{
  FUN_005c11e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_005c1290(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  iVar2 = FUN_00589b70(0x416);
  if (iVar2 != 0) {
    return 1;
  }
  iVar2 = FUN_00582160(0,1);
  fVar6 = (float10)thunk_FUN_00584980();
  uVar3 = FUN_00590420("Data\\Menus\\Main\\quickkeys_menu.xml");
  piVar4 = (int *)FUN_005898f0();
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  iVar5 = (**(code **)(*piVar4 + 0x34))();
  if (iVar5 != 0x416) {
    if (piVar4[1] == 0) {
      return 0;
    }
    (**(code **)*piVar4)(1);
    return 0;
  }
  uVar3 = FUN_009832e6(uVar3,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar3);
  FUN_009832e6(piVar4,0,&PTR_PTR_00b0a018,&PTR_PTR_00b14424,0);
  cVar1 = FUN_005a46b0();
  if (cVar1 != '\0') {
    fVar7 = (float10)FUN_00588bd0(0xfa5);
    if ((fVar7 == (float10)6006.0) ||
       (fVar7 = (float10)FUN_00588bd0(0xfa5), fVar7 == (float10)102.0)) {
      FUN_0058ceb0(0xfab,(float)fVar6);
    }
    FUN_0058ceb0(0xfae,(float)(*(char *)(iVar2 + 8) != '\x01'));
    FUN_0058ceb0(0xfaf,0);
    FUN_0058ceb0(0xfa1,0x3f800000);
    FUN_005c1000();
    FUN_00585190(0);
    return 1;
  }
  FUN_004a7a60("Quick Keys Menu Creation Failed... Are your menu and art resources up to date?");
  (**(code **)*piVar4)(1);
  return 0;
}



void FUN_005c1420(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  byte bStack_16;
  byte bStack_15;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined4 uStack_4;
  
  local_14 = 0;
  local_10 = 0;
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    FUN_004534d0(&local_8,4);
    if (local_8 != 0x4b4f4c42) {
      puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\Interface\\Menus\\QuickKeysMenu.cpp",0x38f,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar5 = (int *)FUN_0046b250(*puVar1);
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\Interface\\Menus\\QuickKeysMenu.cpp",0x38f,*puVar1,uVar6);
      }
    }
    local_10 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_14,2);
  }
  piVar5 = &DAT_00b3b440;
  local_c = 8;
  do {
    puVar1 = (undefined4 *)piVar5[1];
    while (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar1;
      (**(code **)(*piVar5 + 8))(puVar1);
      puVar1 = puVar2;
    }
    piVar5[3] = 0;
    piVar5[1] = 0;
    piVar5[2] = 0;
    FUN_004534d0(&bStack_15,1);
    bStack_16 = 0;
    if (bStack_15 != 0) {
      do {
        FUN_0045ba00(&uStack_4,4);
        iVar7 = FUN_0046b250(uStack_4);
        if (iVar7 != 0) {
          piVar8 = (int *)(**(code **)(*piVar5 + 4))();
          piVar8[2] = iVar7;
          piVar8[1] = 0;
          *piVar8 = piVar5[1];
          if (piVar5[1] == 0) {
            piVar5[2] = (int)piVar8;
          }
          else {
            *(int **)(piVar5[1] + 4) = piVar8;
          }
          piVar5[3] = piVar5[3] + 1;
          piVar5[1] = (int)piVar8;
        }
        bStack_16 = bStack_16 + 1;
      } while (bStack_16 < bStack_15);
    }
    piVar5 = piVar5 + 4;
    local_c = local_c + -1;
  } while (local_c != 0);
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar3 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar9 = local_14 & 0xffff;
      if (uVar9 + local_10 < uVar3) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar3 - uVar9) - local_10,".\\Interface\\Menus\\QuickKeysMenu.cpp",0x3a3,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar3 < uVar9 + local_10) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar9 - uVar3) + local_10,".\\Interface\\Menus\\QuickKeysMenu.cpp",0x3a3,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar5 = (int *)FUN_0046b250(*puVar1);
      iVar7 = local_10;
      uVar9 = (local_14 & 0xffff) + local_10;
      if (uVar9 < uVar3) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar3 - (local_14 & 0xffff)) - iVar7,".\\Interface\\Menus\\QuickKeysMenu.cpp"
                     ,0x3a3,*puVar1,uVar6);
        return;
      }
      if (uVar3 < uVar9) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_14 & 0xffff) - uVar3) + iVar7,".\\Interface\\Menus\\QuickKeysMenu.cpp"
                     ,0x3a3,*puVar1,uVar6);
        return;
      }
    }
  }
  return;
}



void thunk_FUN_005c0fc0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = &DAT_00b3b440;
  iVar3 = 8;
  do {
    puVar2 = (undefined4 *)piVar4[1];
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      (**(code **)(*piVar4 + 8))(puVar2);
      puVar2 = puVar1;
    }
    piVar4[3] = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4 = piVar4 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005c16e0(int param_1,char param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 auStack_10c [4];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_10c;
  local_108[0] = '\0';
  _memset(local_108 + 1,0,0x103);
  if ((param_2 == '\0') || (param_1 == 0)) {
    iVar2 = FUN_00589b70(0x416);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_005898f0();
    if (iVar2 == 0) {
      return;
    }
    if (param_1 == 0) {
      param_1 = FUN_005c1100();
      param_1 = param_1 + 1;
      pcVar4 = "%s %d";
      uVar5 = DAT_00b38b88;
    }
    else {
      uVar5 = FUN_00469cd0(param_1);
      pcVar4 = "%s";
    }
    _sprintf(local_108,pcVar4,uVar5,param_1);
    FUN_0058ced0(0xfde,local_108);
    return;
  }
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0x15:
  case 0x1b:
  case 0x26:
  case 0x27:
  case 0x2a:
    goto switchD_005c173f_caseD_15;
  case 0x19:
    uVar5 = DAT_00b38ba0;
    puVar3 = (undefined1 *)FUN_00469cd0(param_1,DAT_00b38ba0);
    break;
  case 0x21:
    iVar2 = (**(code **)(*DAT_00b333c4 + 0x380))();
    if ((iVar2 != 0) && (iVar2 = (**(code **)(*DAT_00b333c4 + 0x18c))(), iVar2 != 0))
    goto switchD_005c173f_caseD_15;
  default:
    uVar5 = DAT_00b38b90;
    if (param_3 != '\x01') {
      uVar5 = DAT_00b38b98;
    }
    iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03298,0);
    if ((iVar2 == 0) || (puVar3 = *(undefined1 **)(iVar2 + 4), puVar3 == (undefined1 *)0x0)) {
      puVar3 = &DAT_00a2f7ec;
    }
    break;
  case 0x28:
    cVar1 = FUN_00414eb0();
    if (cVar1 != '\0') goto switchD_005c173f_caseD_15;
    uVar5 = DAT_00b38ba0;
    puVar3 = (undefined1 *)FUN_00469cd0(param_1,DAT_00b38ba0);
  }
  _sprintf(local_108,"%s %s",puVar3,uVar5);
switchD_005c173f_caseD_15:
  pcVar4 = local_108;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == local_108 + 1) {
    return;
  }
  FUN_0057add0(local_108,0x40000000,0,0);
  return;
}



void FUN_005c1900(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int local_4;
  
  uVar1 = FUN_004d6d40();
  iVar2 = FUN_00485e00(DAT_00b333c4,uVar1);
  iVar7 = 0;
  piVar6 = &DAT_00b3b444;
  do {
    if (piVar6[2] != 0) {
      iVar3 = *(int *)(*piVar6 + 8);
      local_4 = iVar3;
      if (*(char *)(iVar3 + 4) == '\x10') {
        iVar4 = FUN_005e02e0(0);
        for (piVar5 = (int *)(iVar4 + 0x58); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
          if (*piVar5 == iVar3) goto LAB_005c198d;
        }
        FUN_00776690(&local_4);
      }
      else if (iVar2 != 0) {
        iVar3 = FUN_004896b0(iVar3,iVar7);
        if (iVar3 == 0) {
          FUN_00776690(&local_4);
          return;
        }
        FUN_00484470();
        FUN_00401f20(iVar3);
      }
    }
LAB_005c198d:
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 4;
    if (7 < iVar7) {
      return;
    }
  } while( true );
}



void FUN_005c1a70(uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_4;
  
  if ((param_1 != 0) && (iVar2 = FUN_005c1100(), (&DAT_00b3b44c)[iVar2 * 4] != 0)) {
    iVar2 = FUN_005c1100();
    local_4 = (&DAT_00b3b44c)[iVar2 * 4];
    iVar2 = FUN_005c1100();
    puVar5 = (undefined4 *)(&DAT_00b3b444)[iVar2 * 4];
    uVar3 = FUN_004d6d40();
    iVar2 = FUN_00485e00(DAT_00b333c4,uVar3);
    if (local_4 != 0) {
      cVar1 = (char)param_2;
      do {
        iVar4 = puVar5[2];
        puVar5 = (undefined4 *)*puVar5;
        param_2 = iVar4;
        if ((*(char *)(iVar4 + 4) != '\x10') && (iVar2 != 0)) {
          uVar3 = FUN_005c1100();
          FUN_004895b0(iVar4,uVar3);
        }
        if (*(byte *)(iVar4 + 4) != param_1) goto LAB_005c1b68;
        iVar4 = FUN_009832e6(iVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b084f0,0);
        if (iVar4 == 0) {
LAB_005c1b53:
          puVar6 = &param_2;
          FUN_005c1100(puVar6);
          FUN_00776690(puVar6);
        }
        else if (((*(byte *)(iVar4 + 0x88) & 1) == 0) || (*(int *)(iVar4 + 100) == 0)) {
          if (cVar1 == '\0') goto LAB_005c1b53;
        }
        else if (cVar1 != '\0') goto LAB_005c1b53;
LAB_005c1b68:
        local_4 = local_4 + -1;
      } while (local_4 != 0);
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005c1b80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_10c;
  FUN_005c1900();
  iVar2 = FUN_00589b70(0x416);
  if (iVar2 == 0) {
    FUN_005c1290();
    iVar2 = FUN_00589b70(0x416);
    if (iVar2 == 0) {
      return;
    }
  }
  iVar2 = FUN_005898f0();
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x24) == 2)) || (*(int *)(iVar2 + 0x24) == 4)) {
    FUN_00584390();
  }
  DAT_00b3b43d = 1;
  FUN_0058ceb0(0xfa7,0x437f0000);
  if (-1 < param_1) {
    local_10c = param_1 + 1;
    FUN_0058ceb0(0xfae,(float)local_10c);
  }
  FUN_0058ceb0(0xfa1,0x40000000);
  FUN_0058ceb0(0xfb0,0x3f800000);
  FUN_0058ceb0(0xfb1,0x40000000);
  FUN_0058fba0(0);
  iVar2 = 0;
  piVar6 = &DAT_00b3b444;
  do {
    if (piVar6[2] == 0) {
      FUN_0058ceb0(0xfa7,0);
      FUN_0058ceb0(0xfa1,0x3f800000);
      iVar3 = FUN_005c1100();
      if (iVar2 == iVar3) {
        FUN_005c16e0(0,0,1);
      }
    }
    else {
      uVar1 = *(undefined4 *)(*piVar6 + 8);
      iVar3 = FUN_009832e6(uVar1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03800,0);
      if (iVar3 == 0) {
        uVar5 = FUN_005c0c50(uVar1);
        _sprintf(local_108,"%s\\%s\\%s","Menus","Icons",uVar5);
      }
      else {
        iVar3 = FUN_004152c0(3,0);
        puVar4 = *(undefined1 **)(*(int *)(iVar3 + 0x1c) + 0x48);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_00a2f7ec;
        }
        _sprintf(local_108,"%s\\%s\\%s","Menus","Icons",puVar4);
      }
      FUN_0058ced0(0xfe6,local_108);
      if (iVar2 == param_1) {
        FUN_005c16e0(uVar1,0,1);
      }
      FUN_0058ceb0(0xfa7,0x437f0000);
      FUN_0058ceb0(0xfa1,0x40000000);
    }
    piVar6 = piVar6 + 4;
    iVar2 = iVar2 + 1;
  } while ((int)piVar6 < 0xb3b4c4);
  return;
}



void FUN_005c1dd0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_4;
  
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0x10:
    goto switchD_005c1def_caseD_10;
  default:
    FUN_005c1a70(*(undefined1 *)(param_1 + 4),0);
    return;
  case 0x13:
  case 0x26:
switchD_005c1def_caseD_13:
    FUN_005c1a70(0x13,0);
    FUN_005c1a70(0x26,0);
    FUN_005c1a70(0x15,0);
    return;
  case 0x14:
  case 0x16:
    iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036dc,0);
    if (iVar3 != 0) {
      iVar3 = FUN_005c1100();
      iVar3 = (&DAT_00b3b44c)[iVar3 * 4];
      iVar4 = FUN_005c1100();
      puVar1 = (undefined4 *)(&DAT_00b3b444)[iVar4 * 4];
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        local_4 = puVar1[2];
        puVar1 = (undefined4 *)*puVar1;
        iVar4 = FUN_009832e6(local_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036dc,0);
        if (iVar4 != 0) {
          iVar4 = 0;
          do {
            cVar2 = FUN_00468ff0(iVar4,0);
            if ((cVar2 != '\0') && (cVar2 = FUN_00468ff0(iVar4,0), cVar2 != '\0')) {
              puVar5 = &local_4;
              FUN_005c1100(puVar5);
              FUN_00776690(puVar5);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x10);
        }
      }
    }
    return;
  case 0x15:
    iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b084f0,0);
    if (iVar3 == 0) {
      return;
    }
    if (((*(byte *)(iVar3 + 0x88) & 1) == 0) || (*(int *)(iVar3 + 100) == 0))
    goto switchD_005c1def_caseD_13;
switchD_005c1def_caseD_10:
    FUN_005c1a70(0x15,1);
    FUN_005c1a70(0x10,0);
    return;
  }
}



void FUN_005c1f70(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  cVar4 = FUN_00578f60();
  cVar5 = FUN_005790e0(0x3ea,0);
  cVar6 = FUN_005790e0(0x3fe,0);
  iVar8 = FUN_00403520(0x12,1);
  if ((iVar8 == 0) && (iVar8 = FUN_00403520(0x12,0), iVar8 == 0)) {
    iVar8 = FUN_00403520(0x13,1);
    if ((iVar8 == 0) && (iVar8 = FUN_00403520(0x13,0), iVar8 == 0)) {
      iVar8 = FUN_00403520(0x14,1);
      if ((iVar8 == 0) && (iVar8 = FUN_00403520(0x14,0), iVar8 == 0)) {
        iVar8 = FUN_00403520(0x15,1);
        if ((iVar8 == 0) && (iVar8 = FUN_00403520(0x15,0), iVar8 == 0)) {
          iVar8 = FUN_00403520(0x16,1);
          if ((iVar8 == 0) && (iVar8 = FUN_00403520(0x16,0), iVar8 == 0)) {
            iVar8 = FUN_00403520(0x17,1);
            if ((iVar8 == 0) && (iVar8 = FUN_00403520(0x17,0), iVar8 == 0)) {
              iVar8 = FUN_00403520(0x18,1);
              if ((iVar8 == 0) && (iVar8 = FUN_00403520(0x18,0), iVar8 == 0)) {
                iVar8 = FUN_00403520(0x19,1);
                if ((iVar8 == 0) && (iVar8 = FUN_00403520(0x19,0), iVar8 == 0)) {
                  if (DAT_00b3b430 != -1) {
                    FUN_005c1060(0xffffffff);
                  }
                }
                else {
                  FUN_005c1060(7);
                }
              }
              else {
                FUN_005c1060(6);
              }
            }
            else {
              FUN_005c1060(5);
            }
          }
          else {
            FUN_005c1060(4);
          }
        }
        else {
          FUN_005c1060(3);
        }
      }
      else {
        FUN_005c1060(2);
      }
    }
    else {
      FUN_005c1060(1);
    }
  }
  else {
    iVar8 = DAT_00b3b434;
    if (DAT_00b3b430 != 0) {
      DAT_00b3b420 = '\0';
      if (DAT_00b3b430 < 0) {
        DAT_00b3b428 = 0;
        DAT_00b3b42c = 0;
        DAT_00b3b434 = -1;
        DAT_00b3b438 = -1;
      }
      else {
        DAT_00b3b434 = DAT_00b3b430;
        DAT_00b3b438 = iVar8;
        DAT_00b3b42c = DAT_00b3b428;
        DAT_00b3b428 = DAT_00b33ea0 - DAT_00b3b424;
      }
      DAT_00b3b424 = DAT_00b33ea0;
      DAT_00b3b430 = 0;
    }
  }
  iVar8 = FUN_005c1100();
  if (iVar8 < 0) {
    if (DAT_00b3b430 != -1) goto LAB_005c2564;
LAB_005c254d:
    if (DAT_00b3b43d != '\0') {
      FUN_005c1000();
    }
    DAT_00b3b420 = '\x01';
  }
  else {
    if (DAT_00b3b430 == -1) {
      if ((DAT_00b3b420 == '\0') && (cVar4 == '\0')) {
        DAT_00b3b420 = '\x01';
        FUN_005c1900();
        iVar8 = FUN_005c1100();
        if ((&DAT_00b3b44c)[iVar8 * 4] != 0) {
          iVar8 = FUN_005c1100();
          iVar8 = (&DAT_00b3b44c)[iVar8 * 4];
          iVar9 = FUN_005c1100();
          puVar1 = (undefined4 *)(&DAT_00b3b444)[iVar9 * 4];
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            iVar9 = puVar1[2];
            puVar1 = (undefined4 *)*puVar1;
            if (*(char *)(iVar9 + 4) == '\x10') {
              iVar10 = FUN_0065d4c0();
              if (iVar10 != 0) {
                FUN_00664850(0);
              }
              iVar9 = FUN_009832e6(iVar9,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03800,0);
              if (iVar9 == 0) {
                iVar9 = 0;
              }
              else {
                iVar9 = iVar9 + 0x18;
              }
              FUN_00664700(iVar9);
            }
            else if (((*(char *)(iVar9 + 4) == '\x15') &&
                     (iVar10 = FUN_009832e6(iVar9,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b084f0,0),
                     iVar10 != 0)) &&
                    (((*(byte *)(iVar10 + 0x88) & 1) != 0 && (*(int *)(iVar10 + 100) != 0)))) {
              FUN_00664850(iVar10);
            }
            else {
              uVar11 = FUN_004d6d40();
              iVar10 = FUN_00485e00(DAT_00b333c4,uVar11);
              if (iVar10 != 0) {
                uVar11 = FUN_005c1100();
                puVar12 = (undefined4 *)FUN_004896b0(iVar9,uVar11);
                if (puVar12 != (undefined4 *)0x0) {
                  cVar4 = FUN_00484e80(0);
                  if (cVar4 == '\0') {
                    iVar10 = FUN_005e0ee0();
                    if (iVar10 == -1) {
LAB_005c244a:
                      FUN_005c1000();
                      DAT_00b3b420 = '\x01';
                      iVar9 = FUN_005c1100(1,1);
                      FUN_005c16e0(*(undefined4 *)((&DAT_00b3b444)[iVar9 * 4] + 8));
                      uVar11 = *(undefined4 *)*puVar12;
                      uVar2 = puVar12[2];
                      uVar15 = 0;
                      uVar14 = 1;
                      uVar13 = FUN_004b2460(uVar11,1,0);
                      FUN_005faea0(uVar2,uVar13,uVar11,uVar14,uVar15);
                      uVar11 = puVar12[2];
                      goto LAB_005c249a;
                    }
                    if (*(char *)(iVar9 + 4) == '\x14') {
                      FUN_0057acc0(DAT_00b38a28,0,1,0xbf800000);
                    }
                    else {
                      if (*(char *)(iVar9 + 4) != '!') goto LAB_005c244a;
                      FUN_0057acc0(DAT_00b38a20,0,1,0xbf800000);
                    }
                  }
                  else {
                    bVar3 = true;
                    iVar9 = (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0xf0))(0);
                    if (((iVar9 != 0) &&
                        (iVar9 = (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0xf0))(0),
                        puVar12[2] == *(int *)(iVar9 + 8))) &&
                       (iVar9 = (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0xf0))(0), iVar9 == 0
                       )) {
                      bVar3 = false;
                    }
                    iVar9 = (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0xf8))(0);
                    if ((((iVar9 != 0) &&
                         (iVar9 = (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0xf8))(0),
                         puVar12[2] == *(int *)(iVar9 + 8))) &&
                        (iVar9 = (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0xf8))(0),
                        iVar9 == 0)) || ((!bVar3 || (iVar9 = FUN_005e0ee0(), iVar9 != -1))))
                    goto LAB_005c24a5;
                    iVar9 = FUN_005c1100(1,0);
                    FUN_005c16e0(*(undefined4 *)((&DAT_00b3b444)[iVar9 * 4] + 8));
                    uVar11 = *(undefined4 *)*puVar12;
                    uVar2 = puVar12[2];
                    uVar16 = 0;
                    uVar15 = 0;
                    uVar14 = 0;
                    uVar13 = FUN_004b2460(uVar11,0,0,0);
                    FUN_005f2e70(uVar2,uVar13,uVar11,uVar14,uVar15,uVar16);
                    uVar11 = 0;
LAB_005c249a:
                    FUN_005e7230(uVar11,0);
                  }
LAB_005c24a5:
                  FUN_00484470();
                  FUN_00401f20(puVar12);
                }
              }
            }
            if (*(int **)(DAT_00b333c4 + 0x58) != (int *)0x0) {
              (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0x42c))(DAT_00b333c4,1,1,0);
            }
          }
        }
        goto LAB_005c252d;
      }
      goto LAB_005c254d;
    }
LAB_005c2564:
    iVar8 = FUN_005c1100();
    if ((-1 < iVar8) &&
       ((((cVar7 = FUN_005c1160(), cVar7 != '\0' && (cVar4 == '\0')) || (cVar5 != '\0')) ||
        (cVar6 != '\0')))) {
      uVar11 = FUN_005c1100();
      FUN_005c1b80(uVar11);
    }
  }
  if (cVar4 != '\0') {
    if (cVar5 != '\0') {
      return;
    }
    if (cVar6 != '\0') {
      return;
    }
    FUN_005c1000();
    return;
  }
LAB_005c252d:
  if (DAT_00b3b4c0 != '\0') {
    DAT_00b3b4c0 = '\0';
  }
  return;
}



void FUN_005c25c0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = param_1;
  iVar2 = FUN_005c1100();
  if ((-1 < iVar2) && (iVar2 = FUN_005c1100(), iVar2 < 8)) {
    if (iVar1 != 0) {
      iVar2 = FUN_005c1100();
      if ((&DAT_00b3b44c)[iVar2 * 4] != 0) {
        iVar2 = FUN_005c1100();
        iVar2 = *(int *)((&DAT_00b3b444)[iVar2 * 4] + 8);
        if ((iVar2 != 0) && (*(char *)(iVar2 + 4) != '\x10')) {
          uVar3 = FUN_004d6d40();
          iVar4 = FUN_00485e00(DAT_00b333c4,uVar3);
          if (iVar4 != 0) {
            uVar3 = FUN_005c1100();
            FUN_004895b0(iVar2,uVar3);
          }
        }
      }
      iVar2 = FUN_005c1100();
      if ((int)(&DAT_00b3b44c)[iVar2 * 4] < 1) {
        FUN_005c1dd0(iVar1);
      }
      else {
        FUN_005c1100();
        FUN_00573880();
      }
      puVar5 = &param_1;
      FUN_005c1100(puVar5);
      FUN_005b1e20(puVar5);
      DAT_00b3b43c = 1;
    }
    iVar2 = FUN_005c1100();
    FUN_005e99c0(iVar1,1,0);
    (&DAT_00b3b418)[iVar2] = 1;
  }
  return;
}



void FUN_005c2730(void)

{
  undefined4 uVar1;
  
  FUN_0057ff20(&DAT_00a2f7ec);
  FUN_00588bd0(0xfd3);
  uVar1 = FUN_009828c0();
  FUN_0057d2d0(uVar1);
  FUN_00588bd0(0xfd4);
  uVar1 = FUN_009828c0();
  FUN_00583dd0(uVar1);
  FUN_0057dd90(1);
  return;
}



void FUN_005c2790(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = FUN_00582160(0,1);
  if (*(int *)(in_ECX + 0x94 + param_1 * 4) != 0) {
    FUN_0057d7a0();
    iVar2 = FUN_009828c0();
    fVar3 = (float10)FUN_00588c50();
    fVar4 = (float10)FUN_00588bd0(0xfcb);
    *(float *)(in_ECX + 0x898) = (float)((float10)(double)(fVar3 - (float10)iVar2) - fVar4);
  }
  FUN_0057d7f0();
  FUN_0057d7f0();
  iVar2 = FUN_009828c0();
  fVar3 = (float10)FUN_00588cf0();
  *(float *)(in_ECX + 0x89c) = (float)(fVar3 - (float10)iVar2);
  if ((param_1 == 2) && ((*(uint *)(iVar1 + 0x118) >> 2 & 1) == 0)) {
    FUN_0057d7a0();
    iVar1 = FUN_009828c0();
    *(float *)(in_ECX + 0x898) = (float)iVar1 - *(float *)(in_ECX + 0x8a0);
  }
  return;
}



void FUN_005c28f0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00589b70(0x40c);
  if (iVar2 != 0) {
    iVar2 = FUN_005898f0();
    if (iVar2 != 0) {
      FUN_0058ceb0(0x1772,0x40000000);
      FUN_00584740();
      if (*(int *)(iVar2 + 0x864) != 0) {
        FUN_005faea0(*(int *)(iVar2 + 0x864),1,0,1,0);
      }
      DAT_00b3b5d8 = 1;
    }
    (**(code **)(*DAT_00b333c4 + 0x170))();
    iVar3 = FUN_005e3320();
    if (DAT_00b37d00 == *(int *)(iVar3 + 0xc)) {
      FUN_005222d0(1);
    }
    else {
      iVar3 = (**(code **)(*DAT_00b333c4 + 0x268))();
      if (iVar3 != 0) {
        for (piVar1 = (int *)(iVar3 + 0x3c); (piVar1 != (int *)0x0 && (*piVar1 != 0));
            piVar1 = (int *)piVar1[1]) {
          (**(code **)(*DAT_00b333c4 + 0x2e0))(*piVar1);
        }
      }
      FUN_006a2280(0);
      FUN_005222d0(1);
      DAT_00b333c4[0x61] = 0;
      *(undefined1 *)(DAT_00b333c4 + 0x77) = 0;
      FUN_0065fbb0();
      FUN_0065d610();
      if (iVar3 != 0) {
        for (piVar1 = (int *)(iVar3 + 0x3c); (piVar1 != (int *)0x0 && (*piVar1 != 0));
            piVar1 = (int *)piVar1[1]) {
          (**(code **)(*DAT_00b333c4 + 0x2dc))(*piVar1);
        }
      }
      FUN_0066c200();
      FUN_0057a7d0();
      FUN_005f2530(0x40000000);
      iVar3 = FUN_005f1910(9);
      FUN_005f25f0((float)iVar3,1);
      FUN_006645c0();
      FUN_005b3760();
      FUN_005dcb70();
    }
    FUN_0057a7d0();
    FUN_00522760();
    FUN_006626e0();
    FUN_005f2530(0x40000000);
    FUN_005f25f0(0x43480000,1);
    FUN_0060d0a0();
    FUN_00664700(0);
    FUN_006670c0();
    FUN_0066c580(*(char *)(iVar2 + 0x894) == '\0');
  }
  return;
}



void FUN_005c2b50(undefined4 param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00588bd0(0xfae);
  FUN_0058ceb0(0xfb1,(float)-fVar1);
  FUN_0058ceb0(0xfb1,param_2);
  FUN_0058ceb0(0xfb1,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c2bf0(undefined4 param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int in_ECX;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  float local_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_3c [12];
  undefined4 auStack_30 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c0f2e;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffff8c;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b3b5d8 == '\0') {
    pfVar1 = (float *)(in_ECX + 0x8a4);
    local_54 = 11.0;
    local_50 = 0.0;
    local_4c = 0.0;
    *pfVar1 = 0.0;
    *(undefined4 *)(in_ECX + 0x8a8) = 0x41f00000;
    *(undefined4 *)(in_ECX + 0x8ac) = 0;
    iVar8 = DAT_00b333cc;
    iVar6 = (**(code **)(*DAT_00b333c4 + 0x134))(0,uVar5);
    if (iVar6 != 0) {
      fVar2 = *(float *)(iVar6 + 0x20);
      fVar3 = *(float *)(iVar6 + 0x24);
      fVar4 = *(float *)(iVar6 + 0x28);
      fVar11 = (float10)(**(code **)(*DAT_00b333c4 + 0x1e0))();
      FUN_0070fdd0((float)(((float10)param_2 + (float10)0.0) * (float10)0.01745329238474369 + fVar11
                          ));
      pfVar7 = (float *)FUN_007101f0(&fStack_48,pfVar1);
      fStack_48 = fVar2 + *pfVar7;
      fStack_44 = pfVar7[1] + fVar3;
      fStack_40 = pfVar7[2] + fVar4;
      *pfVar1 = fStack_48;
      *(float *)(in_ECX + 0x8a8) = fStack_44;
      *(float *)(in_ECX + 0x8ac) = fStack_40;
      pfVar7 = (float *)FUN_007101f0(auStack_3c,&local_54);
      local_54 = *pfVar7 + fVar2;
      local_50 = pfVar7[1] + fVar3;
      local_4c = pfVar7[2] + fVar4;
      fStack_48 = local_54;
      fStack_44 = local_50;
      fStack_40 = local_4c;
      FUN_0066a5e0();
      FUN_0065f080(pfVar1,&local_54,1);
      if ((_DAT_00b3b704 & 1) == 0) {
        _DAT_00b3b704 = _DAT_00b3b704 | 1;
        uStack_4 = 0;
        FUN_0070d590();
        _atexit(FUN_00a24e60);
        uStack_4 = 0xffffffff;
      }
      _DAT_00b3b634 = *pfVar1;
      _DAT_00b3b638 = *(undefined4 *)(in_ECX + 0x8a8);
      _DAT_00b3b63c = *(undefined4 *)(in_ECX + 0x8ac);
      FUN_00707370(0,1);
      FUN_0070c340(&local_54,&DAT_00b258e8);
      auStack_30[0] = _DAT_00b3b618;
      auStack_30[1] = _DAT_00b3b610;
      auStack_30[2] = _DAT_00b3b614;
      auStack_30[3] = _DAT_00b3b624;
      uStack_20 = _DAT_00b3b61c;
      uStack_1c = _DAT_00b3b620;
      uStack_18 = _DAT_00b3b630;
      uStack_14 = _DAT_00b3b628;
      uStack_10 = _DAT_00b3b62c;
      if (*(short *)(iVar8 + 0xb6) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = **(int **)(iVar8 + 0xb0);
      }
      *(float *)(iVar6 + 0x54) = *pfVar1;
      *(undefined4 *)(iVar6 + 0x58) = *(undefined4 *)(in_ECX + 0x8a8);
      *(undefined4 *)(iVar6 + 0x5c) = *(undefined4 *)(in_ECX + 0x8ac);
      if (*(short *)(iVar8 + 0xb6) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = **(int **)(iVar8 + 0xb0);
      }
      puVar9 = auStack_30;
      puVar10 = (undefined4 *)(iVar8 + 0x30);
      for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      FUN_00707370(0,0);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005c2f20(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_6c [36];
  int iStack_48;
  int iStack_18;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c0f58;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff70;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = (**(code **)(*DAT_00b333c4 + 0x170))(uVar1);
  FUN_00550240(*(undefined4 *)(iVar2 + 0xc));
  DAT_00b33d80 = 1;
  (**(code **)(*(int *)DAT_00b333c4[0x16] + 0x5c))();
  (**(code **)(*(int *)DAT_00b333c4[0x16] + 0x31c))(1);
  (**(code **)(*(int *)DAT_00b333c4[0x16] + 0x318))(DAT_00b333c4);
  iVar2 = (**(code **)(*DAT_00b333c4 + 0x134))(0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*DAT_00b333c4 + 0x130))(0);
    if (iVar2 == 0) {
      uVar3 = FUN_005e02e0(0);
      FUN_00437970(uVar3,0);
      uStack_10 = 0;
      QueuedHead_Run();
      (**(code **)(iStack_48 + 0x28))();
      uVar3 = FUN_006600d0(0);
      FUN_004353d0(DAT_00b333c4,uVar3);
      uStack_10 = 0xffffffff;
      QueuedHead_dtor();
    }
  }
  DAT_00b33d80 = 0;
  iVar2 = FUN_00660110(1);
  if (*(short *)(iVar2 + 0xb6) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int **)(iVar2 + 0xb0);
  }
  puVar4 = &DAT_00b26dc4;
  puVar6 = (undefined4 *)&stack0xffffff70;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4 = (undefined4 *)FUN_004d7c50(auStack_6c,&stack0xffffff70,0);
  puVar6 = (undefined4 *)(iVar2 + 0x30);
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00434020(5);
  *unaff_FS_OFFSET = iStack_18;
  return;
}



void FUN_005c30c0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00580120();
  FUN_0058ced0(0xfde,uVar1);
  (**(code **)(*DAT_00b333c4 + 0x170))();
  uVar1 = FUN_00438db0();
  FUN_004028d0(uVar1,0);
  return;
}



undefined4 FUN_005c3110(uchar *param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c0f88;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = __mbscmp(DAT_00b38f70,param_1);
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(in_ECX + 0x40);
    FUN_00401f20(param_1,uVar1);
    *unaff_FS_OFFSET = local_c;
    return uVar3;
  }
  iVar2 = __mbscmp(param_1,DAT_00b38f78);
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(in_ECX + 0x44);
    FUN_00401f20(param_1,uVar1);
    *unaff_FS_OFFSET = local_c;
    return uVar3;
  }
  iVar2 = __mbscmp(param_1,DAT_00b38f88);
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(in_ECX + 0x48);
    FUN_00401f20(param_1,uVar1);
    *unaff_FS_OFFSET = local_c;
    return uVar3;
  }
  iVar2 = __mbscmp(param_1,DAT_00b38f80);
  if (iVar2 != 0) {
    iVar2 = __mbscmp(param_1,DAT_00b38fe0);
    if (iVar2 == 0) {
      uVar3 = *(undefined4 *)(in_ECX + 0x50);
    }
    else {
      iVar2 = __mbscmp(param_1,DAT_00b38fe8);
      if (iVar2 == 0) {
        uVar3 = *(undefined4 *)(in_ECX + 0x54);
      }
      else {
        iVar2 = __mbscmp(param_1,DAT_00b39000);
        if (iVar2 == 0) {
          uVar3 = *(undefined4 *)(in_ECX + 0x58);
        }
        else {
          iVar2 = __mbscmp(param_1,DAT_00b39008);
          if (iVar2 == 0) {
            uVar3 = *(undefined4 *)(in_ECX + 0x5c);
          }
          else {
            iVar2 = __mbscmp(param_1,DAT_00b39010);
            if (iVar2 == 0) {
              uVar3 = *(undefined4 *)(in_ECX + 0x60);
            }
            else {
              iVar2 = __mbscmp(param_1,DAT_00b39018);
              if (iVar2 == 0) {
                uVar3 = *(undefined4 *)(in_ECX + 100);
              }
              else {
                iVar2 = __mbscmp(param_1,DAT_00b38f90);
                if (iVar2 == 0) {
                  uVar3 = *(undefined4 *)(in_ECX + 0x68);
                }
                else {
                  iVar2 = __mbscmp(param_1,DAT_00b39020);
                  if (iVar2 == 0) {
                    uVar3 = *(undefined4 *)(in_ECX + 0x6c);
                  }
                  else {
                    iVar2 = __mbscmp(param_1,DAT_00b39028);
                    if (iVar2 == 0) {
                      uVar3 = *(undefined4 *)(in_ECX + 0x70);
                    }
                    else {
                      iVar2 = __mbscmp(param_1,DAT_00b39030);
                      if (iVar2 == 0) {
                        uVar3 = *(undefined4 *)(in_ECX + 0x74);
                      }
                      else {
                        iVar2 = __mbscmp(param_1,DAT_00b39038);
                        if (iVar2 == 0) {
                          uVar3 = *(undefined4 *)(in_ECX + 0x78);
                        }
                        else {
                          iVar2 = __mbscmp(param_1,DAT_00b39040);
                          if (iVar2 == 0) {
                            uVar3 = *(undefined4 *)(in_ECX + 0x7c);
                          }
                          else {
                            iVar2 = __mbscmp(param_1,DAT_00b39050);
                            if (iVar2 == 0) {
                              uVar3 = *(undefined4 *)(in_ECX + 0x80);
                            }
                            else {
                              iVar2 = __mbscmp(param_1,DAT_00b39320);
                              if (iVar2 == 0) {
                                uVar3 = *(undefined4 *)(in_ECX + 0x84);
                              }
                              else {
                                iVar2 = __mbscmp(param_1,DAT_00b39058);
                                if (iVar2 == 0) {
                                  uVar3 = *(undefined4 *)(in_ECX + 0x88);
                                }
                                else {
                                  iVar2 = __mbscmp(param_1,DAT_00b39060);
                                  if (iVar2 == 0) {
                                    uVar3 = *(undefined4 *)(in_ECX + 0x8c);
                                  }
                                  else {
                                    iVar2 = __mbscmp(param_1,DAT_00b39328);
                                    local_4 = 0xffffffff;
                                    if (iVar2 != 0) {
                                      FUN_00402da0();
                                      *unaff_FS_OFFSET = local_c;
                                      return 0;
                                    }
                                    uVar3 = *(undefined4 *)(in_ECX + 0x90);
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
    local_4 = 0xffffffff;
    FUN_00402da0();
    *unaff_FS_OFFSET = local_c;
    return uVar3;
  }
  uVar3 = *(undefined4 *)(in_ECX + 0x4c);
  FUN_00401f20(param_1,uVar1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



undefined4 FUN_005c3440(undefined4 param_1)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0fc0;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  FUN_004028d0(param_1,0);
  FUN_005c3110();
  uVar1 = FUN_00589930();
  FUN_00401f20();
  FUN_00401f20();
  *unaff_FS_OFFSET = local_c;
  return uVar1;
}



void FUN_005c34d0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 uStack_18;
  undefined1 uStack_14;
  undefined1 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c1060;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*DAT_00b333c4 + 0x170))();
  cVar1 = FUN_0051fe90();
  if (cVar1 == '\0') {
    FUN_004028d0();
    uStack_4 = 5;
    FUN_004028d0(DAT_00b38f88);
    uStack_4 = 0xffffffff;
    FUN_005c3440();
    fVar3 = (float10)FUN_00588bd0();
    FUN_004028d0();
    uStack_4 = 6;
    FUN_004028d0(DAT_00b38f88);
    uStack_4 = 0xffffffff;
    FUN_005c3440();
    fVar4 = (float10)FUN_00588bd0();
    FUN_004028d0();
    uStack_4 = 7;
    FUN_004028d0(DAT_00b38f88);
    uStack_4 = 0xffffffff;
    FUN_005c3440();
    fVar5 = (float10)FUN_00588bd0();
    uStack_18 = (undefined1)(int)ROUND((float)fVar5 * 255.0);
    uStack_14 = (undefined1)(int)ROUND((float)fVar4 * 255.0);
    uStack_10 = (undefined1)(int)ROUND((float)fVar3 * 255.0);
    FUN_004028d0();
    uStack_4 = 8;
    FUN_004028d0();
    uStack_4 = 0xffffffff;
    FUN_005c3440();
    FUN_0058ceb0();
    FUN_004028d0();
    uStack_4 = 9;
    FUN_004028d0(DAT_00b38f88);
    uStack_4 = 0xffffffff;
    FUN_005c3440();
    FUN_00588bd0();
    iVar2 = FUN_009828c0();
    if ((uint)CONCAT21(CONCAT11(uStack_18,uStack_14),uStack_10) ==
        *(uint *)(in_ECX + 0x8f0 + iVar2 * 4)) {
      FUN_004028d0();
      uStack_4 = 10;
      FUN_004028d0(DAT_00b38f88);
      uStack_4 = 0xffffffff;
      FUN_005c3440();
      FUN_00588bd0();
      FUN_009828c0();
      FUN_004028d0();
      uStack_4 = 0xb;
    }
    else {
      FUN_004028d0();
      uStack_4 = 0xc;
    }
    FUN_004028d0(DAT_00b38f88,0);
    uStack_4 = 0xffffffff;
    FUN_005c3440();
    FUN_0058ced0();
    FUN_004028d0();
    uStack_4 = 0xd;
    FUN_004028d0();
    uStack_4 = 0xffffffff;
    FUN_005c3440();
    FUN_0058ceb0();
    FUN_004028d0();
    uStack_4 = 0xe;
    FUN_004028d0();
    uStack_4 = 0xffffffff;
    FUN_005c3440();
    FUN_0058ceb0();
    FUN_004028d0();
    uStack_4 = 0xf;
    FUN_004028d0();
    uStack_4 = 0xffffffff;
    FUN_005c3440();
  }
  else {
    FUN_004028d0();
    uStack_4 = 0;
    FUN_004028d0();
    uStack_4 = 0xffffffff;
    FUN_005c3440();
    FUN_0058ceb0();
    FUN_004028d0();
    uStack_4 = 1;
    FUN_004028d0(DAT_00b38f88,0);
    uStack_4 = 0xffffffff;
    FUN_005c3440();
    FUN_0058ced0();
    FUN_004028d0();
    uStack_4 = 2;
    FUN_004028d0();
    uStack_4 = 0xffffffff;
    FUN_005c3440();
    FUN_0058ceb0();
    FUN_004028d0();
    uStack_4 = 3;
    FUN_004028d0();
    uStack_4 = 0xffffffff;
    FUN_005c3440();
    FUN_0058ceb0();
    FUN_004028d0();
    uStack_4 = 4;
    FUN_004028d0();
    uStack_4 = 0xffffffff;
    FUN_005c3440();
  }
  FUN_0058ceb0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005c3be0(int param_1)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  float10 fVar4;
  
  iVar2 = FUN_00582160(0,1);
  if (*(int *)(in_ECX + 0x94 + param_1 * 4) != 0) {
    FUN_0057d7a0();
    iVar2 = FUN_009828c0();
    fVar1 = *(float *)(in_ECX + 0x898);
    fVar3 = (float10)FUN_00588c50();
    fVar4 = (float10)FUN_00588bd0(0xfb6);
    FUN_0058ceb0(0xfb7,0xce6e6b28);
    FUN_0058ceb0(0xfb7,(float)((float10)(double)((float10)(fVar1 + (float)iVar2) - fVar3) / fVar4));
    FUN_0058ceb0(0xfb7,0);
    return;
  }
  if (param_1 == 0x15) {
    FUN_0057d7f0();
    FUN_0057d7f0();
    FUN_009828c0();
    FUN_00588cf0();
    FUN_00588bd0(0xfb6);
    FUN_0058ceb0(0xfb7,0xce6e6b28);
    iVar2 = FUN_009828c0();
    FUN_0058ceb0(0xfb7,(float)iVar2);
    FUN_0058ceb0(0xfb7,0);
    return;
  }
  if (((param_1 == 2) && (*(char *)(in_ECX + 0x8d0) == '\0')) &&
     ((*(uint *)(iVar2 + 0x118) >> 2 & 1) == 0)) {
    iVar2 = FUN_005952d0();
    FUN_005c2bf0(0x3f800000,((float)iVar2 - *(float *)(in_ECX + 0x898)) / 5.0);
    iVar2 = FUN_005952d0();
    *(float *)(in_ECX + 0x8a0) = (float)iVar2 - *(float *)(in_ECX + 0x898);
  }
  return;
}



undefined4 FUN_005c3dd0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_0057d2f0();
  if (cVar1 != '\0') {
    FUN_0057ff50(param_1);
    FUN_005c30c0();
    return 1;
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x005c4228) */
/* WARNING: Removing unreachable block (ram,0x005c4238) */
/* WARNING: Removing unreachable block (ram,0x005c4175) */
/* WARNING: Removing unreachable block (ram,0x005c4197) */
/* WARNING: Removing unreachable block (ram,0x005c418c) */
/* WARNING: Removing unreachable block (ram,0x005c4199) */
/* WARNING: Removing unreachable block (ram,0x005c41cc) */
/* WARNING: Removing unreachable block (ram,0x005c41e3) */
/* WARNING: Removing unreachable block (ram,0x005c41fc) */
/* WARNING: Removing unreachable block (ram,0x005c4213) */
/* WARNING: Removing unreachable block (ram,0x005c423c) */

undefined4 FUN_005c3e10(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  int in_ECX;
  undefined4 *unaff_EBX;
  uint uVar7;
  undefined4 *unaff_EBP;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  uint *unaff_FS_OFFSET;
  bool bVar11;
  undefined4 ***pppuStack_50;
  undefined4 ***pppuStack_4c;
  undefined1 ***pppuStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  uint uStack_10;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c10bb;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (uint)&local_c;
  iVar2 = (**(code **)(*DAT_00b333c4 + 0x170))();
  uVar7 = 0;
  uStack_4 = 1;
  iVar3 = (**(code **)(*DAT_00b333c4 + 0x130))();
  if (iVar3 != 0) {
    piVar8 = (int *)(*(int *)(iVar2 + 0xe8) + 0xa8);
    iVar2 = -1;
    while (piVar8 != (int *)0x0) {
      if (iVar2 == *(int *)(in_ECX + 0x87c)) {
        if (piVar8 != (int *)0x0) {
          iVar2 = *piVar8;
          if (iVar2 == 0) goto LAB_005c431d;
          pppuStack_50 = (undefined4 ***)0x0;
          pppuStack_4c = (undefined4 ***)0x0;
          FUN_004028d0();
          pppuStack_1c = (undefined1 ***)&stack0xffffffa8;
          puStack_8._0_1_ = 2;
          FUN_004028d0(DAT_00b38f70,0);
          puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
          FUN_005c3440();
          pppuStack_4c = (undefined4 ***)0x5c400d;
          FUN_0058ced0();
          iRam000001d0 = iVar2;
          goto LAB_005c3f47;
        }
        break;
      }
      if (((piVar8 != (int *)0x0) && (*piVar8 != 0)) && (cVar1 = FUN_0051ed80(), cVar1 != '\0')) {
        iVar2 = iVar2 + 1;
      }
      if (iVar2 != *(int *)(in_ECX + 0x87c)) {
        piVar8 = (int *)piVar8[1];
      }
    }
    iVar2 = *(int *)(iRam000000e8 + 0xa8);
    if (iVar2 != 0) {
      pppuStack_1c = (undefined1 ***)&pppuStack_50;
      pppuStack_50 = (undefined4 ***)0x0;
      pppuStack_4c = (undefined4 ***)0x0;
      FUN_004028d0();
      puStack_8._0_1_ = 3;
      FUN_004028d0(DAT_00b38f70,0);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
      FUN_005c3440();
      pppuStack_4c = (undefined4 ***)0x5c3f41;
      FUN_0058ced0();
      iRam000001d0 = iVar2;
LAB_005c3f47:
      iVar2 = (**(code **)(*DAT_00b333c4 + 0x130))();
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        do {
          pppuStack_4c = (undefined4 ***)0x5c3f7d;
          iVar2 = (**(code **)(*DAT_00b333c4 + 0x130))();
          if (uVar7 < *(ushort *)(iVar2 + 0xb6)) {
            piVar8 = *(int **)(*(int *)(iVar2 + 0xb0) + uVar7 * 4);
          }
          else {
            piVar8 = (int *)0x0;
          }
          iVar2 = 0xf;
          bVar11 = true;
          pcVar9 = (char *)piVar8[2];
          pcVar10 = "FaceGenEyeLeft";
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar11 = *pcVar9 == *pcVar10;
            pcVar9 = pcVar9 + 1;
            pcVar10 = pcVar10 + 1;
          } while (bVar11);
          if ((bVar11) &&
             (puVar5 = (undefined4 *)(**(code **)(*piVar8 + 0x10))(), unaff_EBP != puVar5)) {
            if (unaff_EBP != (undefined4 *)0x0) {
              pppuStack_4c = (undefined4 ***)0x5c405a;
              LVar6 = InterlockedDecrement(unaff_EBP + 1);
              if (LVar6 == 0) {
                pppuStack_4c = (undefined4 ***)0x5c406a;
                (**(code **)*unaff_EBP)();
              }
            }
            unaff_EBP = puVar5;
            if (puVar5 != (undefined4 *)0x0) {
              pppuStack_4c = (undefined4 ***)0x5c407c;
              InterlockedIncrement(puVar5 + 1);
            }
          }
          iVar2 = 0x10;
          bVar11 = true;
          pcVar9 = (char *)piVar8[2];
          pcVar10 = "FaceGenEyeRight";
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar11 = *pcVar9 == *pcVar10;
            pcVar9 = pcVar9 + 1;
            pcVar10 = pcVar10 + 1;
          } while (bVar11);
          if ((bVar11) &&
             (puVar5 = (undefined4 *)(**(code **)(*piVar8 + 0x10))(), unaff_EBX != puVar5)) {
            if (unaff_EBX != (undefined4 *)0x0) {
              pppuStack_4c = (undefined4 ***)0x5c40b1;
              LVar6 = InterlockedDecrement(unaff_EBX + 1);
              if (LVar6 == 0) {
                pppuStack_4c = (undefined4 ***)0x5c40bf;
                (**(code **)*unaff_EBX)();
              }
            }
            unaff_EBX = puVar5;
            if (puVar5 != (undefined4 *)0x0) {
              pppuStack_4c = (undefined4 ***)0x5c40d1;
              InterlockedIncrement(puVar5 + 1);
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
        if ((unaff_EBP != (undefined4 *)0x0) && (unaff_EBX != (undefined4 *)0x0)) {
          pppuStack_1c = (undefined1 ***)0x0;
          uStack_18 = 0;
          uStack_16 = 0;
          local_c = CONCAT31(local_c._1_3_,4);
          if (iRam000001d0 == 0) {
            pppuStack_4c = &pppuStack_1c;
            pppuStack_50 = (undefined4 ***)0x5c4149;
            FUN_00402e30();
          }
          else {
            pppuStack_50 = &pppuStack_1c;
            pppuStack_4c = (undefined4 ***)0xa54a34;
            FUN_00402e30();
          }
          pppuStack_4c = (undefined4 ***)0x0;
          pppuStack_50 = (undefined4 ***)pppuStack_1c;
          FUN_00442890();
          local_c = CONCAT31(local_c._1_3_,1);
          pppuStack_4c = (undefined4 ***)0x5c4251;
          FUN_00401f20();
        }
      }
      pppuStack_4c = (undefined4 ***)0x5c426e;
      piVar8 = (int *)(**(code **)(*DAT_00b333c4 + 0x130))();
      pppuStack_4c = (undefined4 ***)0xa53c58;
      pppuStack_50 = (undefined4 ***)0x5c427c;
      iVar2 = (**(code **)(*piVar8 + 0x58))();
      if (iVar2 != 0) {
        pppuStack_50 = (undefined4 ***)0x1;
        FUN_007b8940(iVar2);
      }
      pppuStack_50 = (undefined4 ***)0x0;
      piVar8 = (int *)(**(code **)(*DAT_00b333c4 + 0x130))();
      iVar2 = (**(code **)(*piVar8 + 0x58))();
      if (iVar2 != 0) {
        FUN_007b8940(iVar2,1,1);
      }
      pppuStack_1c = (undefined1 ***)((uint)pppuStack_1c & 0xffffff00);
      if ((unaff_EBX != (undefined4 *)0x0) &&
         (LVar6 = InterlockedDecrement(unaff_EBX + 1), LVar6 == 0)) {
        (**(code **)*unaff_EBX)();
      }
      pppuStack_1c = (undefined1 ***)0xffffffff;
      if ((unaff_EBP != (undefined4 *)0x0) &&
         (LVar6 = InterlockedDecrement(unaff_EBP + 1), LVar6 == 0)) {
        (**(code **)*unaff_EBP)();
      }
      *unaff_FS_OFFSET = uVar4;
      return 1;
    }
  }
LAB_005c431d:
  *unaff_FS_OFFSET = uStack_10;
  return 0;
}



undefined4 FUN_005c4340(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c1130;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  uVar1 = FUN_00585410(param_1);
  if (param_4 == -1) {
    param_4 = DAT_00b3b5d4 + 1;
    DAT_00b3b5d4 = param_4;
  }
  local_14 = 0;
  local_10 = 0;
  local_e = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00402e30(&local_14);
  FUN_004028d0(local_14,0);
  FUN_0058a020();
  FUN_0058ceb0();
  FUN_00588bd0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  *(undefined4 *)(in_ECX + 0x94 + param_4 * 4) = uVar1;
  FUN_00401f20();
  FUN_00401f20();
  *unaff_FS_OFFSET = local_c;
  return uVar1;
}



undefined4
FUN_005c4480(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c10f8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = DAT_00b3b5d4 + 1;
  local_4 = 1;
  DAT_00b3b5d4 = iVar1;
  uVar2 = FUN_00585410(param_1);
  local_14 = 0;
  local_10 = 0;
  local_e = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00402e30(&local_14);
  FUN_004028d0(local_14,0);
  FUN_0058a020();
  FUN_0058ceb0();
  FUN_00588bd0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ced0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ced0();
  if (param_7 != '\0') {
    FUN_0058ceb0();
  }
  *(undefined4 *)(in_ECX + 0x94 + iVar1 * 4) = uVar2;
  FUN_00401f20();
  FUN_00401f20();
  FUN_00401f20(param_4);
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}



undefined4 FUN_005c4630(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c1130;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = DAT_00b3b5d4 + 1;
  local_4 = 0;
  DAT_00b3b5d4 = iVar1;
  uVar2 = FUN_00585410(param_1);
  local_14 = 0;
  local_10 = 0;
  local_e = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00402e30(&local_14);
  FUN_004028d0(local_14,0);
  FUN_0058a020();
  FUN_0058ceb0();
  FUN_00588bd0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ced0();
  FUN_00588bd0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ced0();
  if (param_4 != '\0') {
    FUN_0058ceb0();
  }
  *(undefined4 *)(in_ECX + 0x94 + iVar1 * 4) = uVar2;
  FUN_00401f20();
  FUN_00401f20();
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}



undefined4 FUN_005c4800(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c1130;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = DAT_00b3b5d4 + 1;
  local_4 = 0;
  DAT_00b3b5d4 = iVar1;
  uVar2 = FUN_00585410(param_1);
  local_14 = 0;
  local_10 = 0;
  local_e = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00402e30(&local_14);
  FUN_004028d0(local_14,0);
  FUN_0058a020();
  FUN_0058ceb0();
  FUN_00588bd0();
  FUN_0058ceb0();
  *(undefined4 *)(in_ECX + 0x94 + iVar1 * 4) = uVar2;
  FUN_00401f20();
  FUN_00401f20();
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}



void FUN_005c4920(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int iStack_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c1170;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = (**(code **)(*DAT_00b333c4 + 0x170))();
  FUN_00519d20();
  iVar4 = FUN_0052b490();
  if (iVar4 != 0) {
    FUN_00519d20();
    uVar5 = FUN_0052b490();
    *(undefined4 *)(iVar3 + 0x1c8) = uVar5;
  }
  iVar4 = *(int *)(iVar3 + 0xe8);
  piVar6 = (int *)(iVar4 + 0x8c);
  if ((*(int *)(iVar3 + 0x1c8) != 0) &&
     ((cVar2 = FUN_0051fe80(), cVar2 == '\0' || (cVar2 = FUN_0051ffd0(), cVar2 == '\0')))) {
    iStack_18 = 0;
    if (piVar6 != (int *)0x0) {
      if (*(int *)(iVar4 + 0x90) != 0) goto LAB_005c49e0;
      piVar1 = (int *)*piVar6;
      while (piVar1 != (int *)0x0) {
LAB_005c49e0:
        if ((*piVar6 == 0) ||
           ((cVar2 = FUN_0051fe80(), cVar2 != '\0' && (cVar2 = FUN_0051ffd0(), cVar2 != '\0'))))
        break;
        iStack_18 = iStack_18 + 1;
        piVar6 = (int *)piVar6[1];
        piVar1 = piVar6;
      }
    }
    if (*piVar6 == 0) {
      *(undefined4 *)(iVar3 + 0x1c8) = 0;
      FUN_004028d0();
      uStack_4 = 0;
      FUN_004028d0(DAT_00b38f70,0);
      uStack_4 = 0xffffffff;
      FUN_005c3440();
      FUN_0058ced0();
    }
    else {
      FUN_004028d0();
      uStack_4 = 1;
      FUN_004028d0(DAT_00b38f70,0);
      uStack_4 = 0xffffffff;
      FUN_005c3440();
      FUN_0058ced0();
      FUN_004028d0();
      uStack_4 = 2;
      FUN_004028d0(DAT_00b38f88,0);
      uStack_4 = 0xffffffff;
      FUN_005c3440();
      FUN_0058ced0();
      FUN_004028d0();
      uStack_4 = 3;
      FUN_004028d0(DAT_00b38f88);
      uStack_4 = 0xffffffff;
      FUN_005c3440();
      FUN_005c2b50();
      *(int *)(in_ECX + 0x870) = iStack_18;
      *(int *)(iVar3 + 0x1c8) = *piVar6;
    }
  }
  FUN_005c34d0();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c4bf0(void)

{
  void *pvVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  undefined4 uVar6;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c11b0;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6d38c;
  pvVar1 = (void *)in_ECX[0x235];
  local_4 = 1;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x18,*(int *)((int)pvVar1 + -4),FUN_0043ace0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  pvVar1 = (void *)in_ECX[0x236];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x18,*(int *)((int)pvVar1 + -4),FUN_0043ace0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  if (DAT_00b33398 != 0) {
    FUN_00411160(_DAT_00b0313c,0);
  }
  if (DAT_00b333c4 != (int *)0x0) {
    iVar4 = FUN_0065d750(1);
    if (iVar4 != 0) {
      iVar4 = FUN_0065d750(1);
      piVar2 = DAT_00b333c4;
      if (*(int *)(iVar4 + 200) != 0) {
        iVar4 = FUN_0065d750(0);
        *(int **)(iVar4 + 200) = piVar2;
      }
    }
    iVar4 = FUN_0065a2c0();
    if (iVar4 != 0) {
      fVar5 = (float10)(**(code **)(*DAT_00b333c4 + 0xec))();
      *(float *)(iVar4 + 0x334) = (float)fVar5;
    }
  }
  iVar4 = in_ECX[0x23b];
  if (iVar4 != 0) {
    FUN_0057feb0(uVar3);
    FUN_00401f20(iVar4);
  }
  iVar4 = FUN_004d8370();
  iVar4 = *(int *)(*(int *)(iVar4 + 0x98) + 0x7c);
  if (iVar4 != 0) {
    iVar4 = FUN_00560920(&DAT_00b3fcb8,iVar4);
    if (iVar4 != 0) {
      FUN_00716690();
    }
  }
  uVar6 = 0;
  FUN_0065d750(0);
  FUN_00473200(uVar6);
  uVar6 = 1;
  FUN_0065d750(0);
  FUN_00473200(uVar6);
  uVar6 = 0;
  FUN_0065d750(1);
  FUN_00473200(uVar6);
  uVar6 = 1;
  FUN_0065d750(1);
  FUN_00473200(uVar6);
  FUN_004384e0("Characters\\_Male\\Skeleton.nif",1,1);
  FUN_004384e0("Characters\\_Male\\SkeletonBeast.nif",1,1);
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(in_ECX + 0x24c,8,0x10,FUN_00402da0);
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005c4e20(byte param_1)

{
  FUN_005c4bf0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005c4e40(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c1211;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00584640(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a6d38c;
  _eh_vector_constructor_iterator_(in_ECX + 0x24c,8,0x10,FUN_00402d60,FUN_00402da0);
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xf] = 0;
  puVar2 = in_ECX + 0x25;
  for (iVar4 = 500; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  in_ECX[0x226] = 0;
  in_ECX[0x228] = 0;
  *(undefined1 *)(in_ECX + 0x225) = 0;
  in_ECX[0x229] = DAT_00b3f9a8;
  in_ECX[0x22a] = DAT_00b3f9ac;
  in_ECX[0x22b] = DAT_00b3f9b0;
  in_ECX[0x22c] = 0;
  in_ECX[0x22d] = DAT_00b3f9a8;
  in_ECX[0x22e] = DAT_00b3f9ac;
  in_ECX[0x22f] = DAT_00b3f9b0;
  in_ECX[0x230] = DAT_00b3f9a8;
  in_ECX[0x231] = DAT_00b3f9ac;
  uVar3 = DAT_00b3f9b0;
  in_ECX[0x233] = 0;
  local_4._0_1_ = 1;
  DAT_00b3b5d4 = 200;
  in_ECX[0x232] = uVar3;
  *(undefined1 *)(in_ECX + 0x234) = 0;
  puVar2 = (undefined4 *)FUN_00401f00(100);
  local_4._0_1_ = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = puVar2 + 1;
    *puVar2 = 4;
    _eh_vector_constructor_iterator_(puVar5,0x18,4,FUN_0043eb30,FUN_0043ace0);
  }
  local_4._0_1_ = 1;
  in_ECX[0x235] = puVar5;
  puVar2 = (undefined4 *)FUN_00401f00(100);
  local_4._0_1_ = 3;
  if (puVar2 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = puVar2 + 1;
    *puVar2 = 4;
    _eh_vector_constructor_iterator_(puVar5,0x18,4,FUN_0043eb30,FUN_0043ace0);
  }
  in_ECX[0x237] = 0;
  local_4._0_1_ = 1;
  in_ECX[0x238] = 0;
  in_ECX[0x236] = puVar5;
  in_ECX[0x21d] = 0;
  *(undefined1 *)(in_ECX + 0x21a) = 1;
  in_ECX[0x220] = 0;
  in_ECX[0x21b] = 0;
  in_ECX[0x221] = 0;
  in_ECX[0x21c] = 0;
  in_ECX[0x21e] = 0;
  in_ECX[0x21f] = 0;
  iVar4 = FUN_00401f00(0x28);
  local_4._0_1_ = 4;
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0057fe70();
  }
  in_ECX[0x23b] = uVar3;
  in_ECX[0x219] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  DAT_00b3b4c9 = 0;
  DAT_00b3b4c8 = 0;
  DAT_00b3b5d8 = 0;
  FUN_00439eb0("Characters\\_Male\\Skeleton.nif",0,0,1);
  FUN_00439eb0("Characters\\_Male\\SkeletonBeast.nif",0,0,1);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_005c50a0(void)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  LONG LVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int in_ECX;
  uint uVar8;
  undefined4 unaff_ESI;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 *unaff_EDI;
  char *pcVar12;
  undefined4 *puVar13;
  int *unaff_FS_OFFSET;
  bool bVar14;
  char unaff_retaddr;
  undefined4 uStack_110;
  int iStack_e0;
  undefined4 *puStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 *puStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 *puStack_ac;
  undefined1 *puStack_a8;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_70 [96];
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c12ca;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  puStack_dc = (undefined4 *)(**(code **)(*DAT_00b333c4 + 0x170))();
  uStack_b4 = 0;
  puStack_a8 = (undefined1 *)0x0;
  uStack_b0 = 0;
  puStack_ac = (undefined4 *)0x0;
  uStack_cc = 0;
  fStack_c8 = 0.0;
  uStack_d0 = 0;
  uStack_98 = 0;
  uStack_94._0_2_ = 0;
  uStack_94._2_2_ = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_9a = 0;
  uStack_4 = 7;
  iVar4 = (**(code **)(*DAT_00b333c4 + 0x130))();
  if (iVar4 != 0) {
    if (unaff_retaddr == '\0') {
LAB_005c5317:
      iVar4 = (**(code **)(*DAT_00b333c4 + 0x130))();
      uVar1 = *(ushort *)(iVar4 + 0xb6);
      uVar8 = 0;
      if (uVar1 != 0) {
        do {
          iVar4 = (**(code **)(*DAT_00b333c4 + 0x130))();
          if (uVar8 < *(ushort *)(iVar4 + 0xb6)) {
            piVar9 = *(int **)(*(int *)(iVar4 + 0xb0) + uVar8 * 4);
          }
          else {
            piVar9 = (int *)0x0;
          }
          iVar4 = 0xc;
          bVar14 = true;
          pcVar10 = (char *)piVar9[2];
          pcVar12 = "FaceGenHair";
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar14 = *pcVar10 == *pcVar12;
            pcVar10 = pcVar10 + 1;
            pcVar12 = pcVar12 + 1;
          } while (bVar14);
          if (bVar14) {
            puVar7 = (undefined4 *)(**(code **)(*piVar9 + 0x10))();
            if (puVar7 != (undefined4 *)0x0) {
              puStack_ac = puVar7;
              InterlockedIncrement(puVar7 + 1);
              if (unaff_retaddr == '\0') {
                FUN_00550980();
                piVar9 = (int *)FUN_00707530();
                if (piVar9 == (int *)0x0) {
                  bVar14 = false;
                }
                else {
                  iVar4 = (**(code **)(*piVar9 + 0x54))();
                  bVar14 = iVar4 == 5;
                }
                uVar8 = -(uint)bVar14 & (uint)piVar9;
                if (uVar8 == 0) {
                  if (piVar9 == (int *)0x0) {
                    bVar14 = false;
                  }
                  else {
                    iVar4 = (**(code **)(*piVar9 + 0x54))();
                    bVar14 = iVar4 == 10;
                  }
                  uVar8 = -(uint)bVar14 & (uint)piVar9;
                  if (uVar8 != 0) {
                    uVar2 = *(uint *)(iStack_e0 + 0x1e8);
                    fStack_c8 = (float)(uVar2 & 0xff) / 255.0;
                    *(float *)(uVar8 + 0xf0) = fStack_c8;
                    fStack_c4 = (float)(uVar2 >> 8 & 0xff) / 255.0;
                    *(float *)(uVar8 + 0xf4) = fStack_c4;
                    fStack_c0 = (float)(uVar2 >> 0x10 & 0xff) / 255.0;
                    uStack_bc = 0x3f800000;
                    *(float *)(uVar8 + 0xf8) = fStack_c0;
                    *(undefined4 *)(uVar8 + 0xfc) = 0x3f800000;
                  }
                }
                else {
                  uVar2 = *(uint *)(iStack_e0 + 0x1e8);
                  fStack_c8 = (float)(uVar2 & 0xff) / 255.0;
                  *(float *)(uVar8 + 0xa8) = fStack_c8;
                  fStack_c4 = (float)(uVar2 >> 8 & 0xff) / 255.0;
                  *(float *)(uVar8 + 0xac) = fStack_c4;
                  fStack_c0 = (float)(uVar2 >> 0x10 & 0xff) / 255.0;
                  uStack_bc = 0x3f800000;
                  *(float *)(uVar8 + 0xb0) = fStack_c0;
                  *(undefined4 *)(uVar8 + 0xb4) = 0x3f800000;
                }
              }
              else {
                FUN_0070fd80();
                (**(code **)(*(int *)(*(int *)(iStack_e0 + 0x1c8) + 0x24) + 0x14))();
                FUN_00402e30();
                uVar6 = uStack_b4;
                uStack_110 = 0x5c5493;
                FUN_00550010();
                uStack_110 = uVar6;
                uStack_110 = FUN_0054feb0(&uStack_d0);
                iVar4 = FUN_00553620();
                uStack_110 = 0x5c54cc;
                _eh_vector_constructor_iterator_(auStack_70,0x18,4,FUN_0043eb30,FUN_0043ace0);
                puStack_8._0_1_ = 10;
                TESNPC_FaceGenFiller();
                if (iVar4 != 0) {
                  FUN_00559870();
                }
                if (puStack_dc != (undefined4 *)0x0) {
                  FUN_006ff420();
                  puVar11 = *(undefined4 **)(iStack_e0 + 0x1cc);
                  FUN_00550980();
                  if ((*(byte *)(puVar7 + 6) & 1) != 0) {
                    *(ushort *)(puStack_dc + 6) = *(ushort *)(puStack_dc + 6) | 1;
                  }
                  FUN_00402e30();
                  FUN_00442890();
                  puStack_8._0_1_ = 0xb;
                  FUN_0055e2a0();
                  puStack_8._0_1_ = 10;
                  if (((puVar11 != (undefined4 *)0x0) &&
                      (LVar5 = InterlockedDecrement(puVar11 + 1), LVar5 == 0)) &&
                     (puVar11 != (undefined4 *)0x0)) {
                    (**(code **)*puVar11)();
                  }
                  if (puStack_b8 != (undefined4 *)0x0) {
                    puStack_a8 = (undefined1 *)FUN_00401f00();
                    puStack_8._0_1_ = 0xc;
                    if (puStack_a8 != (undefined1 *)0x0) {
                      FUN_007043b0();
                    }
                    puStack_8._0_1_ = 10;
                    FUN_004057b0();
                    FUN_00405870();
                    FUN_00405900();
                    iVar4 = FUN_00707530();
                    if (iVar4 != 0) {
                      FUN_00708560();
                      FUN_007016a0();
                    }
                    FUN_00405680();
                  }
                  iVar4 = FUN_00707530();
                  if (iVar4 == 0) {
                    FUN_00550550();
                    FUN_00405680();
                  }
                  puVar11 = &uStack_94;
                  puVar13 = puStack_dc + 0xc;
                  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *puVar13 = *puVar11;
                    puVar11 = puVar11 + 1;
                    puVar13 = puVar13 + 1;
                  }
                  piVar9 = (int *)(**(code **)(*DAT_00b333c4 + 0x130))();
                  (**(code **)(*piVar9 + 0x88))();
                  if (((unaff_EDI != (undefined4 *)0x0) &&
                      (LVar5 = InterlockedDecrement(unaff_EDI + 1), LVar5 == 0)) &&
                     (unaff_EDI != (undefined4 *)0x0)) {
                    (**(code **)*unaff_EDI)();
                  }
                  piVar9 = (int *)(**(code **)(*DAT_00b333c4 + 0x130))();
                  uStack_110 = unaff_ESI;
                  (**(code **)(*piVar9 + 0x84))();
                  piVar9 = (int *)(**(code **)(*DAT_00b333c4 + 0x130))(0);
                  iVar4 = (**(code **)(*piVar9 + 0x58))("FaceGenHair");
                  if (iVar4 != 0) {
                    FUN_007b8940(iVar4,1,1,1);
                    piVar9 = (int *)FUN_00707530(4);
                    if (piVar9 == (int *)0x0) {
                      bVar14 = false;
                    }
                    else {
                      iVar4 = (**(code **)(*piVar9 + 0x54))();
                      bVar14 = iVar4 == 5;
                    }
                    uVar8 = -(uint)bVar14 & (uint)piVar9;
                    if (uVar8 == 0) {
                      if (piVar9 == (int *)0x0) {
                        bVar14 = false;
                      }
                      else {
                        iVar4 = (**(code **)(*piVar9 + 0x54))();
                        bVar14 = iVar4 == 10;
                      }
                      uVar8 = -(uint)bVar14 & (uint)piVar9;
                      if (uVar8 != 0) {
                        uVar2 = puVar7[0x7a];
                        *(float *)(uVar8 + 0xf0) = (float)(uVar2 & 0xff) / 255.0;
                        *(float *)(uVar8 + 0xf4) = (float)(uVar2 >> 8 & 0xff) / 255.0;
                        puStack_dc = (undefined4 *)0x3f800000;
                        *(float *)(uVar8 + 0xf8) = (float)(uVar2 >> 0x10 & 0xff) / 255.0;
                        *(undefined4 *)(uVar8 + 0xfc) = 0x3f800000;
                      }
                    }
                    else {
                      uVar2 = puVar7[0x7a];
                      *(float *)(uVar8 + 0xa8) = (float)(uVar2 & 0xff) / 255.0;
                      *(float *)(uVar8 + 0xac) = (float)(uVar2 >> 8 & 0xff) / 255.0;
                      puStack_dc = (undefined4 *)0x3f800000;
                      *(float *)(uVar8 + 0xb0) = (float)(uVar2 >> 0x10 & 0xff) / 255.0;
                      *(undefined4 *)(uVar8 + 0xb4) = 0x3f800000;
                    }
                  }
                  (**(code **)(*DAT_00b333c4 + 0x130))(0);
                  FUN_00707980();
                  (**(code **)(*DAT_00b333c4 + 0x130))(0);
                  FUN_00707610();
                }
                puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,7);
                _eh_vector_destructor_iterator_(auStack_70,0x18,4,FUN_0043ace0);
              }
              (**(code **)(*DAT_00b333c4 + 0x130))();
              FUN_00707370();
            }
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar1);
      }
      FUN_00401f20();
      FUN_00401f20();
      FUN_00401f20();
      FUN_00401f20();
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_110 = 0x5c5a5f;
      FUN_00401f20();
      puStack_8._0_1_ = 1;
      if (((puStack_dc != (undefined4 *)0x0) &&
          (LVar5 = InterlockedDecrement(puStack_dc + 1), LVar5 == 0)) &&
         (puStack_dc != (undefined4 *)0x0)) {
        (**(code **)*puStack_dc)();
      }
      puVar7 = puStack_ac;
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      if ((puStack_ac != (undefined4 *)0x0) &&
         (LVar5 = InterlockedDecrement(puStack_ac + 1), LVar5 == 0)) {
        (**(code **)*puVar7)();
      }
      puStack_8 = (undefined1 *)0xffffffff;
      if ((puStack_b8 != (undefined4 *)0x0) &&
         (LVar5 = InterlockedDecrement(puStack_b8 + 1), LVar5 == 0)) {
        (**(code **)*puStack_b8)();
      }
      uVar6 = 1;
      goto LAB_005c5ade;
    }
    piVar9 = (int *)(*(int *)(iStack_e0 + 0xe8) + 0x8c);
    iVar4 = -1;
    while (piVar9 != (int *)0x0) {
      if (iVar4 == *(int *)(in_ECX + 0x870)) {
        if (piVar9 != (int *)0x0) {
          iVar4 = *piVar9;
          if (iVar4 == 0) {
            FUN_00401f20();
            FUN_00401f20();
            FUN_00401f20();
            FUN_00401f20();
            uStack_d0 = 0;
            uStack_cc = 0;
            uStack_110 = 0x5c53a9;
            FUN_00401f20();
            puStack_8._0_1_ = 1;
            FUN_007016a0();
            puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
            FUN_007016a0();
            puStack_8 = (undefined1 *)0xffffffff;
            FUN_007016a0();
            uVar6 = 0;
            goto LAB_005c5ade;
          }
          uStack_110 = 0x5c527a;
          FUN_00419b10();
          puStack_a8 = (undefined1 *)&uStack_110;
          puStack_8._0_1_ = 8;
          FUN_00419b10(DAT_00b38f70);
          puStack_8._0_1_ = 7;
          FUN_005c3440();
          FUN_0058ced0();
          puStack_a8 = &stack0xfffffef8;
          uStack_110 = 0x5c52d3;
          FUN_00419b10();
          puStack_8._0_1_ = 9;
          FUN_00419b10(DAT_00b38f88);
          puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,7);
          FUN_005c3440();
          FUN_0058ced0();
          *(int *)(iStack_e0 + 0x1c8) = iVar4;
          FUN_005c34d0();
          goto LAB_005c5317;
        }
        break;
      }
      if ((((piVar9 != (int *)0x0) && (*piVar9 != 0)) && (cVar3 = FUN_0051fe80(), cVar3 != '\0')) &&
         (cVar3 = FUN_0051ffd0(), cVar3 != '\0')) {
        iVar4 = iVar4 + 1;
      }
      if (iVar4 != *(int *)(in_ECX + 0x870)) {
        piVar9 = (int *)piVar9[1];
      }
    }
  }
  FUN_00401f20();
  FUN_00401f20();
  FUN_00401f20();
  FUN_00401f20();
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_110 = 0x5c519d;
  FUN_00401f20();
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  if (((puStack_dc != (undefined4 *)0x0) &&
      (LVar5 = InterlockedDecrement(puStack_dc + 1), LVar5 == 0)) &&
     (puStack_dc != (undefined4 *)0x0)) {
    (**(code **)*puStack_dc)();
  }
  uVar6 = 0;
LAB_005c5ade:
  *unaff_FS_OFFSET = iStack_10;
  return uVar6;
}



void FUN_005c5b00(void)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar3;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c1810;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar2 = FUN_005c50a0();
  if (cVar2 != '\0') {
    FUN_004028d0();
    local_4 = 0;
    FUN_004028d0(DAT_00b38f88,0);
    local_4 = 0xffffffff;
    FUN_005c3440();
    iVar1 = *(int *)(in_ECX + 0x870);
    fVar3 = (float10)FUN_00588bd0();
    if (fVar3 != (float10)iVar1) {
      FUN_004028d0();
      local_4 = 1;
      FUN_004028d0(DAT_00b38f88,0);
      local_4 = 0xffffffff;
      FUN_005c3440();
      FUN_005c2b50();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005c5c30(char param_1)

{
  char cVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 local_18;
  undefined1 local_14;
  undefined1 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c1318;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004028d0();
  local_4 = 0;
  FUN_004028d0(DAT_00b38f88);
  local_4 = 0xffffffff;
  FUN_005c3440();
  fVar3 = (float10)FUN_00588bd0();
  FUN_004028d0();
  local_4 = 1;
  FUN_004028d0(DAT_00b38f88);
  local_4 = 0xffffffff;
  FUN_005c3440();
  fVar4 = (float10)FUN_00588bd0();
  FUN_004028d0();
  local_4 = 2;
  FUN_004028d0(DAT_00b38f88);
  local_4 = 0xffffffff;
  FUN_005c3440();
  fVar5 = (float10)FUN_00588bd0();
  local_18 = (undefined1)(int)ROUND((float)fVar5 * 255.0);
  local_14 = (undefined1)(int)ROUND((float)fVar4 * 255.0);
  local_10 = (undefined1)(int)ROUND((float)fVar3 * 255.0);
  iVar2 = (**(code **)(*DAT_00b333c4 + 0x170))();
  if (param_1 != '\0') {
    cVar1 = FUN_0051fe90();
    if (cVar1 == '\0') {
      FUN_004028d0();
      local_4 = 3;
    }
    else {
      FUN_004028d0();
      local_4 = 4;
    }
    FUN_004028d0(DAT_00b38f88,0);
    local_4 = 0xffffffff;
    FUN_005c3440();
    FUN_0058ced0();
  }
  *(uint *)(iVar2 + 0x1e8) = (uint)CONCAT21(CONCAT11(local_18,local_14),local_10);
  FUN_005c50a0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005c5f00(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c1378;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004028d0();
  local_4 = 0;
  FUN_004028d0(DAT_00b38f88);
  local_4 = 0xffffffff;
  FUN_005c3440();
  FUN_00588bd0();
  iVar2 = FUN_009828c0();
  *(undefined4 *)(in_ECX + 0x878) = *(undefined4 *)(in_ECX + 0x8f0 + iVar2 * 4);
  FUN_004028d0();
  local_4 = 1;
  FUN_004028d0();
  local_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_004028d0();
  local_4 = 2;
  FUN_004028d0();
  local_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_004028d0();
  local_4 = 3;
  FUN_004028d0();
  local_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  (**(code **)(*DAT_00b333c4 + 0x170))();
  cVar1 = FUN_0051fe90();
  if (cVar1 == '\0') {
    FUN_004028d0();
    local_4 = 4;
    FUN_004028d0(DAT_00b38f88);
    local_4 = 0xffffffff;
    FUN_005c3440();
    FUN_00588bd0();
    FUN_009828c0();
    FUN_004028d0();
    local_4 = 5;
  }
  else {
    FUN_004028d0();
    local_4 = 6;
  }
  FUN_004028d0(DAT_00b38f88,0);
  local_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ced0();
  FUN_005c5c30();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005c62d0(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  float10 fVar2;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c13a8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004028d0();
  local_4 = 0;
  FUN_004028d0(DAT_00b38f88,0);
  local_4 = 0xffffffff;
  FUN_005c3440();
  fVar2 = (float10)FUN_00588bd0();
  iVar1 = (**(code **)(*DAT_00b333c4 + 0x170))();
  *(float *)(iVar1 + 0x1cc) = (float)fVar2;
  FUN_005c50a0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005c6390(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int *unaff_FS_OFFSET;
  bool bVar9;
  float10 fVar10;
  undefined1 *puVar11;
  uint uStack_144;
  int iStack_140;
  undefined1 local_12c [96];
  undefined1 local_cc [96];
  undefined1 auStack_6c [96];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c140f;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  _eh_vector_constructor_iterator_(local_cc,0x18,4,FUN_0043eb30,FUN_0043ace0);
  local_4 = 0;
  _eh_vector_constructor_iterator_(local_12c,0x18,4,FUN_0043eb30,FUN_0043ace0);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar2 = (**(code **)(*DAT_00b333c4 + 0x170))();
  iVar2 = *(int *)(iVar2 + 0xe8);
  uVar3 = FUN_00521a10();
  FaceGen_SilentSkipLoop_TESRace_unk12(iVar2 + 0x29c,uVar3);
  FUN_004028d0(DAT_00b39000,0);
  FUN_005c3110();
  FUN_00588bd0();
  FUN_00588bd0();
  FUN_00588bd0();
  iVar2 = FUN_009828c0();
  if (iVar2 == 0) {
    FUN_00588bd0();
  }
  else {
    FUN_00588bd0();
  }
  FUN_00588bd0();
  FUN_00588bd0(0xfb6);
  uVar3 = FUN_009828c0();
  FUN_005539e0(local_cc,uVar3);
  _eh_vector_constructor_iterator_(auStack_6c,0x18,4,FUN_0043eb30,FUN_0043ace0);
  local_4 = CONCAT31(local_4._1_3_,2);
  TESNPC_FaceGenFiller();
  FUN_00552c10();
  FUN_00521a10();
  uVar3 = FUN_00521a10();
  FaceGen_SilentSkipLoop_TESRace_unk12(local_12c,uVar3);
  fVar10 = (float10)FUN_00588bd0();
  if ((fVar10 == (float10)0.0) && (iVar2 = (**(code **)(*DAT_00b333c4 + 0x130))(), iVar2 != 0)) {
    iStack_140 = 2;
    do {
      uVar1 = *(ushort *)(iVar2 + 0xb6);
      uStack_144 = 0;
      if (uVar1 != 0) {
        do {
          if (((uStack_144 < *(ushort *)(iVar2 + 0xb6)) &&
              (piVar5 = *(int **)(*(int *)(iVar2 + 0xb0) + uStack_144 * 4), piVar5 != (int *)0x0))
             && (iVar4 = (**(code **)(*piVar5 + 0x10))(), iVar4 != 0)) {
            iVar6 = 0xc;
            bVar9 = true;
            pcVar7 = *(char **)(iVar4 + 8);
            pcVar8 = "FaceGenHair";
            do {
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              bVar9 = *pcVar7 == *pcVar8;
              pcVar7 = pcVar7 + 1;
              pcVar8 = pcVar8 + 1;
            } while (bVar9);
            if (bVar9) {
              FUN_00550980();
            }
            piVar5 = (int *)FUN_00550790();
            if ((piVar5 != (int *)0x0) && (iVar6 = (**(code **)(*piVar5 + 0x54))(), iVar6 != 0)) {
              puVar11 = local_12c;
              (**(code **)(*piVar5 + 0x54))(puVar11);
              FUN_00558840(puVar11);
              iVar6 = 0xc;
              bVar9 = true;
              pcVar7 = *(char **)(iVar4 + 8);
              pcVar8 = "FaceGenHair";
              do {
                if (iVar6 == 0) break;
                iVar6 = iVar6 + -1;
                bVar9 = *pcVar7 == *pcVar8;
                pcVar7 = pcVar7 + 1;
                pcVar8 = pcVar8 + 1;
              } while (bVar9);
              if (bVar9) {
                FUN_00550980();
              }
            }
          }
          uStack_144 = uStack_144 + 1;
        } while (uStack_144 < uVar1);
      }
      iVar2 = (**(code **)(*DAT_00b333c4 + 0x134))();
      iStack_140 = iStack_140 + -1;
    } while (iStack_140 != 0);
  }
  FUN_00588bd0();
  FUN_0058ceb0();
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(auStack_6c,0x18,4,FUN_0043ace0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(local_12c,0x18,4,FUN_0043ace0);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_cc,0x18,4,FUN_0043ace0);
  *unaff_FS_OFFSET = local_c;
  return;
}



float10 FUN_005c6860(void)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  float10 fVar6;
  undefined1 local_6c [96];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c1443;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  _eh_vector_constructor_iterator_(local_6c,0x18,4,FUN_0043eb30,FUN_0043ace0);
  local_4 = 0;
  iVar2 = (**(code **)(*DAT_00b333c4 + 0x170))();
  iVar4 = *(int *)(iVar2 + 0xe8);
  uVar3 = FUN_00521a10();
  FaceGen_SilentSkipLoop_TESRace_unk12(iVar4 + 0x29c,uVar3);
  FUN_004028d0(DAT_00b39000,0);
  FUN_005c3110();
  fVar5 = (float10)FUN_00588bd0();
  fVar6 = (float10)FUN_00588bd0();
  iVar4 = *(int *)(iVar2 + 0xe8);
  if (fVar6 == (float10)(double)fVar5) {
    if (*(float *)(iVar4 + 0xa4) <= 0.0) {
      fVar1 = 3.0;
    }
    else {
      fVar1 = *(float *)(iVar4 + 0xa4);
    }
  }
  else if (*(float *)(iVar4 + 0xa0) <= 0.0) {
    fVar1 = 5.0;
  }
  else {
    fVar1 = *(float *)(iVar4 + 0xa0);
  }
  FUN_00588bd0();
  iVar4 = FUN_009828c0();
  if (iVar4 == 0) {
    FUN_00588bd0();
    FUN_00588bd0();
    FUN_009828c0();
    fVar5 = (float10)FUN_005538f0(local_6c);
    fVar1 = ((float)fVar5 - -fVar1) / (fVar1 - -fVar1);
  }
  else {
    FUN_00588bd0();
    FUN_00588bd0();
    FUN_009828c0();
    fVar5 = (float10)FUN_005538f0(local_6c);
    fVar1 = ((float)fVar5 - -10.0) / 20.0;
  }
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_6c,0x18,4,FUN_0043ace0);
  *unaff_FS_OFFSET = local_c;
  return (float10)(fVar1 * 1.0 + 0.0);
}



void FUN_005c6af0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 local_6c [96];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c1473;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  _eh_vector_constructor_iterator_(local_6c,0x18,4,FUN_0043eb30,FUN_0043ace0);
  local_4 = 0;
  iVar2 = (**(code **)(*DAT_00b333c4 + 0x170))();
  iVar2 = *(int *)(iVar2 + 0xe8);
  uVar3 = FUN_00521a10();
  FaceGen_SilentSkipLoop_TESRace_unk12(iVar2 + 0x29c,uVar3);
  for (puVar1 = *(undefined4 **)(param_1 + 0x34); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if (puVar1[2] != param_2) {
      FUN_004028d0(DAT_00b39000,0);
      FUN_005c3110();
      FUN_00588bd0();
      FUN_00588bd0();
      FUN_00588bd0();
      FUN_009828c0();
      FUN_00588bd0();
      iVar2 = FUN_009828c0();
      if (iVar2 == 0) {
        FUN_00588bd0();
        FUN_009828c0();
        FUN_00588bd0();
        FUN_009828c0();
        FUN_00588bd0();
        FUN_00588bd0();
        FUN_009828c0();
        FUN_005538f0(local_6c);
        FUN_0058ceb0();
      }
      else {
        FUN_00588bd0();
        FUN_009828c0();
        FUN_00588bd0();
        FUN_009828c0();
        FUN_00588bd0();
        FUN_00588bd0();
        FUN_009828c0();
        FUN_005538f0(local_6c);
        FUN_0058ceb0();
      }
      FUN_0058ceb0();
      FUN_0058ceb0();
      FUN_00588bd0();
      FUN_0058ceb0();
    }
  }
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_6c,0x18,4,FUN_0043ace0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005c6ea0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c14b0;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = (**(code **)(*DAT_00b333c4 + 0x170))();
  FUN_00519d20();
  iVar2 = FUN_0052b490();
  if (iVar2 != 0) {
    FUN_00519d20();
    uVar3 = FUN_0052b490();
    *(undefined4 *)(iVar1 + 0x1c8) = uVar3;
  }
  FUN_004028d0();
  uStack_4 = 0;
  FUN_004028d0();
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_00588bd0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0052b780();
  FUN_004028d0();
  uStack_4 = 1;
  FUN_004028d0(DAT_00b38f88,0);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ced0();
  FUN_005c5f00();
  FUN_005c34d0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005c7070(char param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  float fVar8;
  char *pcVar9;
  int *unaff_FS_OFFSET;
  bool bVar10;
  float10 fVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  double dStack_200;
  double dStack_1f8;
  undefined1 auStack_1f0 [96];
  undefined1 auStack_190 [96];
  undefined1 auStack_130 [92];
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [196];
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c151d;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffde4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00589b70(0x40c,uVar1);
  if ((((iVar2 != 0) && (iVar2 = FUN_005898f0(), iVar2 != 0)) &&
      (iVar3 = (**(code **)(*DAT_00b333c4 + 0x130))(0), iVar3 != 0)) &&
     (iVar3 = (**(code **)(*DAT_00b333c4 + 0x134))(0), iVar3 != 0)) {
    iVar4 = (**(code **)(*DAT_00b333c4 + 0x170))();
    (**(code **)(*(int *)DAT_00b333c4[0x16] + 0x5c))();
    _eh_vector_constructor_iterator_(auStack_1f0,0x18,4,FUN_0043eb30,FUN_0043ace0);
    iStack_4 = 0;
    _eh_vector_constructor_iterator_(auStack_190,0x18,4,FUN_0043eb30,FUN_0043ace0);
    iVar3 = *(int *)(iVar4 + 0xe8);
    iStack_4._0_1_ = 1;
    uVar5 = FUN_00521a10(auStack_1f0,0,0);
    FaceGen_SilentSkipLoop_TESRace_unk12(iVar3 + 0x29c,uVar5);
    fVar11 = (float10)FUN_00553b30(auStack_1f0,0,0);
    fStack_204 = (float)fVar11;
    fVar11 = (float10)FUN_00553b30(auStack_1f0,0,1);
    dStack_1f8 = 1.0;
    fStack_208 = ((*(float *)(iVar2 + 0x880) - 0.0) / 1.0) * 50.0 + 15.0;
    fStack_20c = (float)fVar11 - (fStack_204 - fStack_208);
    if ((fStack_208 <= 15.0) || (fStack_208 < 65.0)) {
      if (fStack_208 <= 15.0) {
        fStack_208 = 15.0;
      }
    }
    else {
      fStack_208 = 65.0;
    }
    if ((fStack_20c <= 15.0) || (fStack_20c < 65.0)) {
      if (fStack_20c <= 15.0) {
        fStack_20c = 15.0;
      }
    }
    else {
      fStack_20c = 65.0;
    }
    FUN_00555a00(auStack_1f0,0,0,fStack_208);
    FUN_00555a00(auStack_1f0,0,1,fStack_20c);
    fVar11 = (float10)FUN_00553b30(auStack_1f0,1,0);
    dStack_200 = (double)fVar11;
    fVar11 = (float10)FUN_00522230();
    fStack_204 = (float)((float10)dStack_200 - fVar11);
    fVar11 = (float10)FUN_00553b30(auStack_1f0,1,1);
    dStack_200 = (double)fVar11;
    fVar11 = (float10)FUN_00522230();
    fStack_208 = ((*(float *)(iVar2 + 0x884) - 0.0) / (float)dStack_1f8) * 4.0 - 2.0;
    fStack_20c = (float)((float10)dStack_200 - fVar11) - (fStack_204 - fStack_208);
    if ((fStack_208 <= -2.0) || (fStack_208 < 2.0)) {
      if (fStack_208 <= -2.0) {
        fStack_208 = -2.0;
      }
    }
    else {
      fStack_208 = 2.0;
    }
    if ((fStack_20c <= -2.0) || (fStack_20c < 2.0)) {
      if (fStack_20c <= -2.0) {
        fStack_20c = -2.0;
      }
    }
    else {
      fStack_20c = 2.0;
    }
    fVar11 = (float10)FUN_00522230();
    fStack_208 = (float)(fVar11 + (float10)fStack_208);
    fVar11 = (float10)FUN_00522230();
    fStack_20c = (float)(fVar11 + (float10)fStack_20c);
    FUN_00555a00(auStack_1f0,1,0,fStack_208);
    FUN_00555a00(auStack_1f0,1,1,fStack_20c);
    FUN_00552880(auStack_190);
    _eh_vector_constructor_iterator_(auStack_130,0x18,4,FUN_0043eb30,FUN_0043ace0);
    iStack_4 = CONCAT31(iStack_4._1_3_,2);
    TESNPC_FaceGenFiller(auStack_130);
    FUN_00552c10(auStack_130,auStack_1f0,auStack_190);
    uVar5 = FUN_00521a10(0,0);
    uVar5 = FUN_00521a10(uVar5);
    FaceGen_SilentSkipLoop_TESRace_unk12(auStack_190,uVar5);
    fStack_20c = (float)(**(code **)(*DAT_00b333c4 + 0x130))(0);
    fStack_208 = 2.8026e-45;
    do {
      dStack_200 = (double)CONCAT44(dStack_200._4_4_,(uint)*(ushort *)((int)fStack_20c + 0xb6));
      fStack_204 = 0.0;
      if (*(ushort *)((int)fStack_20c + 0xb6) != 0) {
        do {
          fVar8 = fStack_204;
          if ((((uint)fStack_204 < (uint)*(ushort *)((int)fStack_20c + 0xb6)) &&
              (piVar6 = *(int **)(*(int *)((int)fStack_20c + 0xb0) + (int)fStack_204 * 4),
              piVar6 != (int *)0x0)) && (iVar2 = (**(code **)(*piVar6 + 0x10))(), iVar2 != 0)) {
            iVar3 = 0xc;
            bVar10 = true;
            pcVar7 = *(char **)(iVar2 + 8);
            pcVar9 = "FaceGenHair";
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar10 = *pcVar7 == *pcVar9;
              pcVar7 = pcVar7 + 1;
              pcVar9 = pcVar9 + 1;
            } while (bVar10);
            if (bVar10) {
              dStack_1f8 = (double)CONCAT44(dStack_1f8._4_4_,*(undefined4 *)(iVar4 + 0x1cc));
              FUN_00550980(iVar2,*(undefined4 *)(iVar4 + 0x1cc));
            }
            piVar6 = (int *)FUN_00550790(iVar2);
            fVar8 = fStack_204;
            if ((piVar6 != (int *)0x0) &&
               (iVar3 = (**(code **)(*piVar6 + 0x54))(), fVar8 = fStack_204, iVar3 != 0)) {
              uVar13 = 0;
              uVar5 = 0x3f800000;
              puVar12 = auStack_190;
              iVar3 = iVar2;
              (**(code **)(*piVar6 + 0x54))(puVar12,iVar2,0x3f800000,0);
              FUN_00558840(puVar12,iVar3,uVar5,uVar13);
              iVar3 = 0xc;
              bVar10 = true;
              pcVar7 = *(char **)(iVar2 + 8);
              pcVar9 = "FaceGenHair";
              do {
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                bVar10 = *pcVar7 == *pcVar9;
                pcVar7 = pcVar7 + 1;
                pcVar9 = pcVar9 + 1;
              } while (bVar10);
              fVar8 = fStack_204;
              if (bVar10) {
                dStack_1f8 = (double)CONCAT44(dStack_1f8._4_4_,*(undefined4 *)(iVar4 + 0x1cc));
                FUN_00550980(iVar2,*(undefined4 *)(iVar4 + 0x1cc));
                fVar8 = fStack_204;
              }
            }
          }
          fStack_204 = (float)((int)fVar8 + 1);
        } while ((uint)fStack_204 < dStack_200._0_4_);
      }
      fStack_20c = (float)(**(code **)(*DAT_00b333c4 + 0x134))(0);
      fStack_208 = (float)((int)fStack_208 + -1);
    } while (fStack_208 != 0.0);
    if (param_1 != '\0') {
      piVar6 = (int *)(**(code **)(*DAT_00b333c4 + 0x154))();
      if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(), iVar2 != 0)) {
        uVar5 = 0;
        iVar2 = FUN_0065d750(0);
        if ((iVar2 != 0) && (iVar2 = FUN_0065d750(0), *(int *)(iVar2 + 0x98) != 0)) {
          iVar2 = FUN_0065d750(0);
          uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x98) + 0x7c);
        }
        uVar13 = (**(code **)(*DAT_00b333c4 + 0x134))(0);
        FUN_007b4280(0,uVar13);
        FUN_007c5e70(uVar13);
        uVar13 = (**(code **)(*DAT_00b333c4 + 0x130))(0);
        FUN_007b4280(0,uVar13);
        FUN_007c5e70(uVar13);
        iVar2 = (**(code **)(*DAT_00b333c4 + 0x134))(0);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) != 0)) {
          FUN_00716620(iVar2,uVar5);
          (**(code **)(**(int **)(iVar2 + 0x1c) + 0x88))(&fStack_20c,iVar2);
          FUN_007016a0();
        }
        iVar2 = (**(code **)(*DAT_00b333c4 + 0x130))(0);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) != 0)) {
          FUN_00716620(iVar2,uVar5);
          (**(code **)(**(int **)(iVar2 + 0x1c) + 0x88))(&dStack_200,iVar2);
          FUN_007016a0();
        }
      }
      (**(code **)(*(int *)DAT_00b333c4[0x16] + 0x5c))();
      FUN_00405ce0();
      FaceGen_LocalHelperCtor();
      iStack_4._0_1_ = 3;
      FaceGen_HelperPopulator(iVar4,auStack_d0);
      uVar5 = (**(code **)(*DAT_00b333c4 + 0x130))(0,auStack_d0);
      BSFaceGen_DoSomething(uVar5);
      uVar5 = (**(code **)(*DAT_00b333c4 + 0x134))(0,auStack_d4);
      BSFaceGen_DoSomething(uVar5);
      iStack_4 = CONCAT31(iStack_4._1_3_,2);
      FUN_00526ce0();
    }
    iStack_4._0_1_ = 1;
    _eh_vector_destructor_iterator_(auStack_130,0x18,4,FUN_0043ace0);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    _eh_vector_destructor_iterator_(auStack_190,0x18,4,FUN_0043ace0);
    iStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(auStack_1f0,0x18,4,FUN_0043ace0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005c7800(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  float10 fVar6;
  float10 fVar7;
  float fStack_200;
  undefined1 auStack_1f0 [96];
  undefined1 auStack_190 [96];
  undefined1 auStack_130 [92];
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [196];
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c158d;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffdf8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00589b70(0x40c,uVar2);
  if ((((iVar3 != 0) && (iVar3 = FUN_005898f0(), iVar3 != 0)) &&
      (iVar3 = (**(code **)(*DAT_00b333c4 + 0x130))(0), iVar3 != 0)) &&
     (iVar3 = (**(code **)(*DAT_00b333c4 + 0x134))(0), iVar3 != 0)) {
    iVar4 = (**(code **)(*DAT_00b333c4 + 0x170))();
    (**(code **)(*(int *)DAT_00b333c4[0x16] + 0x5c))();
    _eh_vector_constructor_iterator_(auStack_1f0,0x18,4,FUN_0043eb30,FUN_0043ace0);
    iStack_4 = 0;
    _eh_vector_constructor_iterator_(auStack_190,0x18,4,FUN_0043eb30,FUN_0043ace0);
    iVar3 = *(int *)(iVar4 + 0xe8);
    iStack_4._0_1_ = 1;
    uVar5 = FUN_00521a10(auStack_1f0,0,0);
    FaceGen_SilentSkipLoop_TESRace_unk12(iVar3 + 0x29c,uVar5);
    fVar6 = (float10)FUN_00553b30(auStack_1f0,0,1);
    fVar1 = (float)(fVar6 - (float10)0.0);
    if ((fVar1 <= 15.0) || (fVar1 < 65.0)) {
      if (fVar1 <= 15.0) {
        fVar1 = 15.0;
      }
    }
    else {
      fVar1 = 65.0;
    }
    FUN_00555a00(auStack_1f0,0,1,fVar1);
    fVar6 = (float10)FUN_00553b30(auStack_1f0,1,1);
    fVar7 = (float10)FUN_00522230();
    fStack_200 = (float)((float10)(double)fVar6 - fVar7) - 0.0;
    if ((fStack_200 <= -2.0) || (fStack_200 < 2.0)) {
      if (fStack_200 <= -2.0) {
        fStack_200 = -2.0;
      }
    }
    else {
      fStack_200 = 2.0;
    }
    fVar6 = (float10)FUN_00522230();
    FUN_00555a00(auStack_1f0,1,1,(float)(fVar6 + (float10)fStack_200));
    FUN_00552880(auStack_190);
    _eh_vector_constructor_iterator_(auStack_130,0x18,4,FUN_0043eb30,FUN_0043ace0);
    iStack_4._0_1_ = 2;
    TESNPC_FaceGenFiller(auStack_130);
    FUN_00552c10(auStack_130,auStack_1f0,auStack_190);
    uVar5 = FUN_00521a10(0,0);
    uVar5 = FUN_00521a10(uVar5);
    FaceGen_SilentSkipLoop_TESRace_unk12(auStack_190,uVar5);
    FaceGen_LocalHelperCtor();
    iStack_4._0_1_ = 3;
    FaceGen_HelperPopulator(iVar4,auStack_d0);
    uVar5 = (**(code **)(*DAT_00b333c4 + 0x130))(0,auStack_d0);
    BSFaceGen_DoSomething(uVar5);
    uVar5 = (**(code **)(*DAT_00b333c4 + 0x134))(0,auStack_d4);
    BSFaceGen_DoSomething(uVar5);
    iStack_4._0_1_ = 2;
    FUN_00526ce0();
    iStack_4._0_1_ = 1;
    _eh_vector_destructor_iterator_(auStack_130,0x18,4,FUN_0043ace0);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    _eh_vector_destructor_iterator_(auStack_190,0x18,4,FUN_0043ace0);
    iStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(auStack_1f0,0x18,4,FUN_0043ace0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_005c7ba0(char param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char *_Str1;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  int iStack_8c;
  int *piStack_84;
  undefined1 auStack_6c [96];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c1703;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = (**(code **)(*DAT_00b333c4 + 0x170))();
  iVar7 = *(int *)(iVar3 + 0xe8);
  piVar4 = (int *)(iVar7 + 0xa8);
  iVar8 = 0;
  *(undefined4 *)(in_ECX + 0x87c) = 0;
  if ((piVar4 == (int *)0x0) || ((*(int *)(iVar7 + 0xac) == 0 && (*piVar4 == 0)))) {
    for (piVar4 = (int *)(DAT_00b33a98 + 0x3c); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
      if (*piVar4 != 0) {
        _Str1 = *(char **)(*piVar4 + 0x28);
        if (_Str1 == (char *)0x0) {
          _Str1 = "";
        }
        iVar7 = __stricmp(_Str1,"Characters\\Eyes\\EyeDefault.dds");
        if (iVar7 == 0) {
          FUN_004028d0();
          uStack_4 = 4;
          FUN_004028d0(DAT_00b38f70,0);
          uStack_4 = 0xffffffff;
          FUN_005c3440();
          FUN_0058ced0();
          break;
        }
      }
    }
  }
  else {
    iVar7 = 0;
    piVar5 = piVar4;
    do {
      if (*piVar5 != 0) {
        iVar7 = iVar7 + 1;
      }
      piVar5 = (int *)piVar5[1];
    } while (piVar5 != (int *)0x0);
    if (iVar7 == 1) {
      FUN_004028d0();
      uStack_4 = 0;
      FUN_004028d0();
      uStack_4 = 0xffffffff;
      FUN_005c3440();
    }
    else {
      FUN_004028d0();
      uStack_4 = 1;
      FUN_004028d0();
      uStack_4 = 0xffffffff;
      FUN_005c3440();
    }
    FUN_0058ceb0();
    do {
      iVar7 = *piVar4;
      if (iVar7 != 0) {
        if (((*(int *)(iVar3 + 0x1d0) == 0) && (cVar2 = FUN_0051ed80(), cVar2 != '\0')) &&
           (iVar8 == 0)) {
          FUN_004028d0();
          uStack_4 = 2;
          FUN_004028d0(DAT_00b38f70,0);
          uStack_4 = 0xffffffff;
          FUN_005c3440();
          FUN_0058ced0();
          *(undefined4 *)(in_ECX + 0x87c) = 0;
        }
        else if (*(int *)(iVar3 + 0x1d0) == iVar7) {
          FUN_004028d0();
          uStack_4 = 3;
          FUN_004028d0(DAT_00b38f70,0);
          uStack_4 = 0xffffffff;
          FUN_005c3440();
          FUN_0058ced0();
          *(int *)(in_ECX + 0x87c) = iVar8;
        }
        cVar2 = FUN_0051ed80();
        if (cVar2 != '\0') {
          iVar8 = iVar8 + 1;
        }
      }
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
  }
  FUN_004028d0();
  uStack_4 = 5;
  FUN_004028d0();
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_004028d0();
  uStack_4 = 6;
  FUN_004028d0();
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_004028d0();
  uStack_4 = 7;
  FUN_004028d0(DAT_00b38f70);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  iVar7 = *(int *)(in_ECX + 0x87c);
  fVar9 = (float10)FUN_00588bd0();
  if (fVar9 != (float10)iVar7) {
    FUN_004028d0();
    uStack_4 = 8;
    FUN_004028d0(DAT_00b38f70);
    uStack_4 = 0xffffffff;
    FUN_005c3440();
    FUN_005c2b50();
  }
  iStack_8c = 0;
  for (piVar4 = (int *)(DAT_00b33a98 + 0x44); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    iVar7 = *piVar4;
    if (iVar7 != 0) {
      if (*(int *)(iVar3 + 0xe8) == iVar7) {
        FUN_004028d0();
        uStack_4 = 9;
        FUN_004028d0(DAT_00b38f70,0);
        uStack_4 = 0xffffffff;
        FUN_005c3440();
        FUN_0058ced0();
        FUN_004028d0();
        uStack_4 = 10;
        FUN_004028d0(DAT_00b38f78,0);
        uStack_4 = 0xffffffff;
        FUN_005c3440();
        FUN_0058ced0();
        *(int *)(in_ECX + 0x86c) = iStack_8c;
        iVar8 = (**(code **)(*(int *)(iVar7 + 0x24) + 0x10))();
        if (iVar8 == 0) {
          FUN_004028d0();
          uStack_4 = 0xc;
        }
        else {
          (**(code **)(*(int *)(iVar7 + 0x24) + 0x10))();
          FUN_004028d0();
          uStack_4 = 0xb;
        }
        FUN_004028d0(DAT_00b38f78,0);
        uStack_4 = 0xffffffff;
        FUN_005c3440();
        FUN_0058ced0();
      }
      if ((*(byte *)(iVar7 + 0x70) & 1) != 0) {
        iStack_8c = iStack_8c + 1;
      }
    }
  }
  FUN_004028d0();
  uStack_4 = 0xd;
  FUN_004028d0();
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_004028d0();
  uStack_4 = 0xe;
  FUN_004028d0();
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_004028d0();
  uStack_4 = 0xf;
  FUN_004028d0(DAT_00b38f78);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  iVar7 = *(int *)(in_ECX + 0x86c);
  fVar9 = (float10)FUN_00588bd0();
  if (fVar9 != (float10)iVar7) {
    FUN_004028d0();
    uStack_4 = 0x10;
    FUN_004028d0(DAT_00b38f78);
    uStack_4 = 0xffffffff;
    FUN_005c3440();
    FUN_005c2b50();
  }
  piStack_84 = (int *)(*(int *)(iVar3 + 0xe8) + 0x8c);
  iStack_8c = 0;
  if ((piStack_84 == (int *)0x0) ||
     ((*(int *)(*(int *)(iVar3 + 0xe8) + 0x90) == 0 && (*piStack_84 == 0)))) {
    FUN_004028d0();
    uStack_4 = 0x15;
    FUN_004028d0(DAT_00b38f70,0);
    uStack_4 = 0xffffffff;
    FUN_005c3440();
    FUN_0058ced0();
  }
  else {
    do {
      iVar7 = *piStack_84;
      if (iVar7 != 0) {
        if (((*(int *)(iVar3 + 0x1c8) == 0) && (cVar2 = FUN_0051fe80(), cVar2 != '\0')) &&
           ((cVar2 = FUN_0051ffd0(), cVar2 != '\0' && (iStack_8c == 0)))) {
          FUN_00419b10();
          uStack_4 = 0x11;
          FUN_00419b10(DAT_00b38f70);
          uStack_4 = 0xffffffff;
          FUN_005c3440();
          FUN_0058ced0();
          FUN_00419b10();
          uStack_4 = 0x12;
          FUN_00419b10(DAT_00b38f88);
          uStack_4 = 0xffffffff;
          FUN_005c3440();
          FUN_0058ced0();
          *(undefined4 *)(in_ECX + 0x870) = 0;
        }
        else if (*(int *)(iVar3 + 0x1c8) == iVar7) {
          FUN_004028d0();
          uStack_4 = 0x13;
          FUN_004028d0(DAT_00b38f70,0);
          uStack_4 = 0xffffffff;
          FUN_005c3440();
          FUN_0058ced0();
          FUN_004028d0();
          uStack_4 = 0x14;
          FUN_004028d0(DAT_00b38f88,0);
          uStack_4 = 0xffffffff;
          FUN_005c3440();
          FUN_0058ced0();
          *(int *)(in_ECX + 0x870) = iStack_8c;
        }
        cVar2 = FUN_0051fe80();
        if ((cVar2 != '\0') && (cVar2 = FUN_0051ffd0(), cVar2 != '\0')) {
          iStack_8c = iStack_8c + 1;
        }
      }
      piStack_84 = (int *)piStack_84[1];
    } while (piStack_84 != (int *)0x0);
  }
  FUN_004028d0();
  uStack_4 = 0x16;
  FUN_004028d0();
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_004028d0();
  uStack_4 = 0x17;
  FUN_004028d0();
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_004028d0();
  uStack_4 = 0x18;
  FUN_004028d0(DAT_00b38f88);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  iVar7 = *(int *)(in_ECX + 0x870);
  fVar9 = (float10)FUN_00588bd0();
  if (fVar9 != (float10)iVar7) {
    FUN_004028d0();
    uStack_4 = 0x19;
    FUN_004028d0(DAT_00b38f88);
    uStack_4 = 0xffffffff;
    FUN_005c3440();
    FUN_005c2b50();
  }
  FUN_004028d0();
  uStack_4 = 0x1a;
  FUN_004028d0();
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_004028d0();
  uStack_4 = 0x1b;
  FUN_004028d0();
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_004028d0();
  uStack_4 = 0x1c;
  FUN_004028d0(DAT_00b38f88);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_00588bd0();
  uVar6 = FUN_009828c0();
  *(undefined4 *)(in_ECX + 0x88c) = uVar6;
  *(undefined4 *)(in_ECX + 0x878) = *(undefined4 *)(iVar3 + 0x1e8);
  if ((param_1 == '\0') || (DAT_00b14500 != '\0')) {
    FUN_005c5f00();
  }
  FUN_004028d0();
  uStack_4 = 0x1d;
  FUN_004028d0();
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_004028d0();
  uStack_4 = 0x1e;
  FUN_004028d0();
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_004028d0();
  uStack_4 = 0x1f;
  FUN_004028d0();
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  *(undefined4 *)(in_ECX + 0x874) = *(undefined4 *)(iVar3 + 0x1cc);
  FUN_004028d0();
  uStack_4 = 0x20;
  FUN_004028d0();
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  iVar7 = FUN_00519d20();
  *(bool *)(in_ECX + 0x868) = iVar7 == 1;
  FUN_00519d20();
  FUN_004028d0();
  uStack_4 = 0x21;
  FUN_004028d0(DAT_00b38f78,0);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ced0();
  FUN_004028d0();
  uStack_4 = 0x22;
  FUN_004028d0();
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_004028d0();
  uStack_4 = 0x23;
  FUN_004028d0();
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_004028d0();
  uStack_4 = 0x24;
  FUN_004028d0(DAT_00b38f78);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  fVar9 = (float10)FUN_00588bd0();
  if ((bool)*(char *)(in_ECX + 0x868) != (fVar9 == (float10)2.0)) {
    FUN_004028d0();
    uStack_4 = 0x25;
    FUN_004028d0(DAT_00b38f78);
    uStack_4 = 0xffffffff;
    FUN_005c3440();
    FUN_005c2b50();
  }
  _eh_vector_constructor_iterator_(auStack_6c,0x18,4,FUN_0043eb30,FUN_0043ace0);
  uStack_4 = 0x26;
  FUN_00521a10();
  FaceGen_SilentSkipLoop_TESRace_unk12();
  fVar9 = (float10)FUN_00553b30(auStack_6c,0);
  *(float *)(in_ECX + 0x880) = (((float)fVar9 - 15.0) / 50.0) * 1.0 + 0.0;
  FUN_004028d0();
  uStack_4._0_1_ = 0x27;
  FUN_004028d0();
  uStack_4._0_1_ = 0x26;
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  iVar7 = FUN_00519d20();
  if (iVar7 == 0) {
    fVar1 = -2.0;
  }
  else {
    fVar1 = 2.0;
  }
  fVar9 = (float10)FUN_00553b30();
  *(float *)(in_ECX + 0x884) = ((float)(fVar9 - (float10)fVar1) - -2.0) * 0.25 * 1.0 + 0.0;
  FUN_004028d0();
  uStack_4._0_1_ = 0x28;
  FUN_004028d0();
  uStack_4 = CONCAT31(uStack_4._1_3_,0x26);
  FUN_005c3440();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  uStack_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(auStack_6c,0x18,4,FUN_0043ace0);
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_005c91e0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  LONG LVar4;
  undefined4 uVar5;
  undefined4 *unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined4 *apuStack_d8 [47];
  int iStack_1c;
  undefined4 uStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c173b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff18;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar2 = (**(code **)(*DAT_00b333c4 + 0x170))(uVar1);
  uVar5 = 0;
  iVar3 = FUN_0065d750(0);
  if (iVar3 != 0) {
    iVar3 = FUN_0065d750(0);
    if (*(int *)(iVar3 + 0x98) != 0) {
      iVar3 = FUN_0065d750(0);
      uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0x98) + 0x7c);
    }
  }
  iVar3 = (**(code **)(*DAT_00b333c4 + 0x134))(0);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) != 0)) {
    FUN_00716620(iVar3,uVar5);
    (**(code **)(**(int **)(iVar3 + 0x1c) + 0x88))(apuStack_d8,iVar3);
    if (apuStack_d8[0] != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(apuStack_d8[0] + 1);
      if ((LVar4 == 0) && (apuStack_d8[0] != (undefined4 *)0x0)) {
        (**(code **)*apuStack_d8[0])(1);
      }
    }
  }
  iVar3 = (**(code **)(*DAT_00b333c4 + 0x130))(0);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) != 0)) {
    FUN_00716620(iVar3,uVar5);
    (**(code **)(**(int **)(iVar3 + 0x1c) + 0x88))(&stack0xffffff20,iVar3);
    if (unaff_EBP != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(unaff_EBP + 1);
      if ((LVar4 == 0) && (unaff_EBP != (undefined4 *)0x0)) {
        (**(code **)*unaff_EBP)(1);
      }
    }
  }
  (**(code **)(*(int *)DAT_00b333c4[0x16] + 0x5c))();
  FUN_00405ce0();
  uVar5 = (**(code **)(*DAT_00b333c4 + 0x168))();
  FUN_00525a70(DAT_00b333c4,uVar5);
  FaceGen_LocalHelperCtor();
  local_c = 0;
  FaceGen_HelperPopulator(uVar2,apuStack_d8);
  uVar5 = (**(code **)(*DAT_00b333c4 + 0x130))(0,apuStack_d8);
  BSFaceGen_DoSomething(uVar5);
  uVar5 = (**(code **)(*DAT_00b333c4 + 0x134))(0,&stack0xffffff24);
  BSFaceGen_DoSomething(uVar5);
  FUN_005c2f20();
  uStack_14 = 0xffffffff;
  FUN_00526ce0();
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



undefined4
FUN_005c93f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,char param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c1770;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = DAT_00b3b5d4 + 1;
  iVar2 = DAT_00b3b5d4 + 2;
  local_4 = 0;
  DAT_00b3b5d4 = iVar2;
  uVar3 = FUN_00585410(param_1);
  local_14 = 0;
  local_10 = 0;
  local_e = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00402e30(&local_14);
  FUN_004028d0(local_14,0);
  FUN_0058a020();
  FUN_0058ceb0();
  FUN_00588bd0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ced0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_0058ceb0();
  *(undefined4 *)(in_ECX + 0x94 + iVar1 * 4) = uVar3;
  *(undefined4 *)(in_ECX + 0x94 + iVar2 * 4) = uVar3;
  if (param_4 != -1) {
    FUN_005c6860();
    FUN_0058ceb0();
    FUN_0058ceb0();
    FUN_0058ceb0();
    FUN_0058ceb0();
    FUN_0058ceb0();
  }
  if (param_6 != '\0') {
    FUN_0058ceb0();
  }
  FUN_00401f20();
  FUN_00401f20();
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_005c9650(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char param_5)

{
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c17a0;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  FUN_004028d0(param_3,0);
  FUN_005c3110();
  FUN_0058ceb0();
  FUN_00588bd0();
  FUN_0058ceb0();
  FUN_00588bd0();
  FUN_0058ceb0();
  if (param_5 != '\0') {
    FUN_005c6af0();
  }
  FUN_0058ceb0();
  FUN_0058ceb0();
  FUN_00401f20();
  FUN_00401f20();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x005c983e) */

void FUN_005c9770(void)

{
  code *pcVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c17e0;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = (**(code **)(*DAT_00b333c4 + 0x170))();
  FUN_004028d0();
  uStack_4 = 0;
  FUN_004028d0(DAT_00b38f78);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_00588c10();
  FUN_004028d0();
  uStack_4 = 1;
  if ((char)((DAT_00b39520 == 0) * '\x02') == '\x01') {
    FUN_004028d0();
    uStack_4._0_1_ = 2;
    FUN_004028d0(DAT_00b38f78,0);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    FUN_005c3440();
    FUN_0058ced0();
    pcVar1 = *(code **)(*(int *)(iVar2 + 0x24) + 0x50);
    *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) | 1;
    (*pcVar1)();
  }
  else {
    FUN_004028d0();
    uStack_4._0_1_ = 3;
    FUN_004028d0(DAT_00b38f78,0);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    FUN_005c3440();
    FUN_0058ced0();
    pcVar1 = *(code **)(*(int *)(iVar2 + 0x24) + 0x50);
    *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) & 0xfffffffe;
    (*pcVar1)();
  }
  FUN_005c4920();
  FUN_005c7070();
  FUN_005c2f20();
  FUN_005c7ba0();
  FUN_00401f20();
  *unaff_FS_OFFSET = 0;
  return;
}



void FUN_005c9980(char param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar3;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c1810;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar2 = FUN_005c3e10();
  if (cVar2 != '\0') {
    FUN_004028d0();
    local_4 = 0;
    FUN_004028d0(DAT_00b38f70,0);
    local_4 = 0xffffffff;
    FUN_005c3440();
    iVar1 = *(int *)(in_ECX + 0x87c);
    fVar3 = (float10)FUN_00588bd0();
    if (fVar3 != (float10)iVar1) {
      FUN_004028d0();
      local_4 = 1;
      FUN_004028d0(DAT_00b38f70,0);
      local_4 = 0xffffffff;
      FUN_005c3440();
      FUN_005c2b50();
    }
    if (param_1 != '\0') {
      FUN_005c91e0();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_005c9ab0(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  float10 fVar8;
  
  piVar6 = *(int **)(param_1 + 0x34);
  iVar5 = 0;
  bVar2 = false;
  bVar3 = false;
  if (piVar6 != (int *)0x0) {
    do {
      iVar1 = piVar6[2];
      fVar7 = (float10)FUN_00588bd0(0xfc2);
      if (fVar7 == (float10)1.0) {
        fVar7 = (float10)FUN_00588bd0(0xfae);
        fVar8 = (float10)FUN_00588bd0(0xfb8);
        if (fVar8 != (float10)(double)fVar7) {
          FUN_00588bd0(0xfb4);
          uVar4 = FUN_009828c0();
          FUN_005c6390(uVar4);
          bVar3 = true;
          fVar7 = (float10)FUN_00588bd0(0xfb6);
          iVar5 = iVar1;
          if (fVar7 == (float10)1.0) {
            bVar2 = true;
          }
        }
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)0x0);
    if (bVar2) {
      FUN_005c7800();
      FUN_005c2f20();
    }
    if (bVar3) {
      FUN_005c6af0(param_1,iVar5);
      return 1;
    }
  }
  return 0;
}



void FUN_005c9ba0(void)

{
  int in_ECX;
  
  FUN_005c9ab0(*(undefined4 *)(in_ECX + 0x40));
  FUN_005c9ab0(*(undefined4 *)(in_ECX + 0x58));
  FUN_005c9ab0(*(undefined4 *)(in_ECX + 0x5c));
  FUN_005c9ab0(*(undefined4 *)(in_ECX + 0x60));
  FUN_005c9ab0(*(undefined4 *)(in_ECX + 100));
  FUN_005c9ab0(*(undefined4 *)(in_ECX + 0x68));
  FUN_005c9ab0(*(undefined4 *)(in_ECX + 0x6c));
  FUN_005c9ab0(*(undefined4 *)(in_ECX + 0x70));
  FUN_005c9ab0(*(undefined4 *)(in_ECX + 0x74));
  FUN_005c9ab0(*(undefined4 *)(in_ECX + 0x78));
  FUN_005c9ab0(*(undefined4 *)(in_ECX + 0x7c));
  FUN_005c9ab0(*(undefined4 *)(in_ECX + 0x80));
  FUN_005c9ab0(*(undefined4 *)(in_ECX + 0x84));
  FUN_005c9ab0(*(undefined4 *)(in_ECX + 0x88));
  FUN_005c9ab0(*(undefined4 *)(in_ECX + 0x8c));
  FUN_005c9ab0(*(undefined4 *)(in_ECX + 0x90));
  return;
}



void FUN_005c9c70(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00589b70(0x40c);
  if (iVar1 != 0) {
    uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13348,0);
    iVar1 = FUN_009832e6(uVar2);
    if (iVar1 != 0) {
      (**(code **)(*DAT_00b333c4 + 0x170))();
      FUN_00521e40();
      FUN_005c91e0();
      FUN_005c7ba0(0);
    }
  }
  return;
}



void FUN_005c9cd0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  float10 fVar3;
  float10 fVar4;
  undefined1 auStack_6c [96];
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c1853;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = FUN_00589b70();
  if (iVar1 != 0) {
    uVar2 = FUN_005898f0();
    iVar1 = FUN_009832e6(uVar2);
    if (iVar1 != 0) {
      (**(code **)(*DAT_00b333c4 + 0x170))();
      FUN_005273a0();
      FUN_005c91e0();
      _eh_vector_constructor_iterator_(auStack_6c,0x18,4,FUN_0043eb30,FUN_0043ace0);
      iStack_4 = 0;
      TESNPC_FaceGenFiller();
      fVar3 = (float10)FUN_00553b30();
      *(float *)(iVar1 + 0x880) = (((float)fVar3 - 15.0) / 50.0) * 1.0 + 0.0;
      FUN_004028d0();
      iStack_4._0_1_ = 1;
      FUN_004028d0(DAT_00b38f70,0);
      iStack_4._0_1_ = 0;
      FUN_005c3440();
      FUN_0058ceb0();
      FUN_0058ceb0();
      FUN_0058ceb0();
      fVar3 = (float10)FUN_00553b30();
      fVar4 = (float10)FUN_00522230();
      *(float *)(iVar1 + 0x884) =
           ((float)((float10)(double)fVar3 - fVar4) - -2.0) * 0.25 * 1.0 + 0.0;
      FUN_004028d0();
      iStack_4._0_1_ = 2;
      FUN_004028d0(DAT_00b38f70,0);
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      FUN_005c3440();
      FUN_0058ceb0();
      FUN_0058ceb0();
      FUN_0058ceb0();
      iStack_4 = 0xffffffff;
      _eh_vector_destructor_iterator_(auStack_6c,0x18,4,FUN_0043ace0);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



float FUN_005ca010(void)

{
  char cVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uchar *puVar7;
  char *pcVar8;
  char *pcVar9;
  uint *puVar10;
  uint *unaff_FS_OFFSET;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  undefined **ppuStack_40;
  float local_20;
  undefined1 uStack_18;
  undefined1 uStack_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c1990;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (uint)&local_c;
  fVar2 = (float)FUN_00589b70();
  if (fVar2 == 0.0) {
    ppuStack_40 = (undefined **)0x5ca054;
    FUN_00582160();
    fVar11 = (float10)thunk_FUN_00584980();
    local_20 = (float)fVar11;
    FUN_00590420();
    puVar3 = (undefined4 *)FUN_005898f0();
    if (puVar3 != (undefined4 *)0x0) {
      if (DAT_00b333c4 == (int *)0x0) {
        if (puVar3[1] != 0) {
          (**(code **)*puVar3)();
        }
      }
      else {
        ppuStack_40 = (undefined **)0x5ca09f;
        FUN_0041e6f0();
        ppuStack_40 = (undefined **)0x5ca0a6;
        iVar4 = FUN_00486790();
        ppuStack_40 = (undefined **)0x5ca0ba;
        FUN_0041e6f0();
        ppuStack_40 = (undefined **)0x5ca0c1;
        iVar5 = FUN_00486790();
        if (iVar4 == 0) {
          if (iVar5 == 0) {
            puVar3[0x219] = 0;
          }
          else {
            puVar3[0x219] = *(undefined4 *)(iVar5 + 8);
          }
        }
        else {
          puVar3[0x219] = *(undefined4 *)(iVar4 + 8);
        }
        if (puVar3[0x219] != 0) {
          ppuStack_40 = (undefined **)0x0;
          FUN_005f2e70();
        }
        FUN_0065d660();
        ppuStack_40 = &PTR_PTR_00b13240;
        FUN_009832e6();
        FUN_00584880();
        if ((((puVar3[10] != 0) && (puVar3[0xb] != 0)) && (puVar3[0xc] != 0)) && (puVar3[0xf] != 0))
        {
          fVar11 = (float10)FUN_00588bd0();
          if ((fVar11 == (float10)6006.0) ||
             (fVar11 = (float10)FUN_00588bd0(), fVar11 == (float10)102.0)) {
            ppuStack_40 = (undefined **)0x5ca1a3;
            FUN_0058ceb0();
          }
          (**(code **)(*DAT_00b333c4 + 0x170))();
          ppuStack_40 = (undefined **)puVar3[0x236];
          FUN_00521a10();
          FaceGen_SilentSkipLoop_TESRace_unk12();
          puVar10 = puVar3 + 0x23c;
          *puVar10 = DAT_00b393b8;
          FUN_00402e30(puVar3 + 0x24c,&DAT_00a2f864);
          puVar3[0x23d] = DAT_00b393c0;
          FUN_00402e30(puVar3 + 0x24e,&DAT_00a2f864,DAT_00b39340);
          puVar3[0x23e] = DAT_00b393c8;
          FUN_00402e30(puVar3 + 0x250,&DAT_00a2f864,DAT_00b39348);
          puVar3[0x23f] = DAT_00b393d0;
          FUN_00402e30(puVar3 + 0x252,&DAT_00a2f864,DAT_00b39350);
          puVar3[0x240] = DAT_00b393d8;
          ppuStack_40 = (undefined **)(puVar3 + 0x254);
          FUN_00402e30();
          puVar3[0x241] = DAT_00b393e0;
          FUN_00402e30();
          puVar3[0x242] = DAT_00b393e8;
          FUN_00402e30(puVar3 + 600,&DAT_00a2f864,DAT_00b39368);
          puVar3[0x243] = DAT_00b393f0;
          FUN_00402e30(puVar3 + 0x25a,&DAT_00a2f864,DAT_00b39370);
          puVar3[0x244] = DAT_00b393f8;
          FUN_00402e30(puVar3 + 0x25c,&DAT_00a2f864,DAT_00b39378);
          puVar3[0x245] = DAT_00b39400;
          FUN_00402e30(puVar3 + 0x25e,&DAT_00a2f864,DAT_00b39380);
          puVar3[0x246] = DAT_00b39408;
          ppuStack_40 = (undefined **)(puVar3 + 0x260);
          FUN_00402e30();
          puVar3[0x247] = DAT_00b39410;
          FUN_00402e30();
          puVar3[0x248] = DAT_00b39418;
          FUN_00402e30(puVar3 + 0x264,&DAT_00a2f864,DAT_00b39398);
          puVar3[0x249] = DAT_00b39420;
          FUN_00402e30(puVar3 + 0x266,&DAT_00a2f864,DAT_00b393a0);
          puVar3[0x24a] = DAT_00b39428;
          FUN_00402e30(puVar3 + 0x268,&DAT_00a2f864,DAT_00b393a8);
          puVar3[0x24b] = DAT_00b39430;
          FUN_00402e30(puVar3 + 0x26a,&DAT_00a2f864,DAT_00b393b0);
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          puVar3[0x10] = uVar6;
          FUN_00419b10();
          uStack_4 = 0;
          FUN_00419b10(DAT_00b38f78);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x10]);
          FUN_00419b10();
          uStack_4 = 1;
          FUN_00419b10(DAT_00b38f80);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x10]);
          FUN_00419b10();
          uStack_4 = 2;
          FUN_00419b10(DAT_00b38f88);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x10]);
          FUN_00419b10();
          FUN_005c4630();
          ppuStack_40 = (undefined **)0xffffffff;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0xffffffff;
          FUN_00419b10();
          FUN_005c93f0();
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          puVar3[0x11] = uVar6;
          FUN_00419b10();
          FUN_005c4630();
          FUN_00419b10();
          FUN_005c4630();
          ppuStack_40 = DAT_00b38fb0;
          FUN_00419b10();
          ppuStack_40 = (undefined **)puVar3[0x11];
          FUN_005c4800();
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          puVar3[0x12] = uVar6;
          FUN_00419b10();
          FUN_005c4630();
          FUN_00419b10();
          FUN_005c4630();
          ppuStack_40 = (undefined **)0xffffffff;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0xffffffff;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0xffffffff;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0xffffffff;
          FUN_00419b10();
          FUN_005c93f0();
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          puVar3[0x13] = uVar6;
          FUN_00419b10();
          uStack_4 = 3;
          FUN_00419b10(DAT_00b38fe0);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x13]);
          FUN_00419b10();
          uStack_4 = 4;
          FUN_00419b10(DAT_00b38fe8);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x13]);
          FUN_00419b10();
          uStack_4 = 5;
          FUN_00419b10(DAT_00b38ff0);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x13]);
          FUN_00419b10();
          uStack_4 = 6;
          FUN_00419b10(DAT_00b38ff8);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x13]);
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          puVar3[0x14] = uVar6;
          FUN_00419b10();
          uStack_4 = 7;
          FUN_00419b10(DAT_00b39000);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x14]);
          FUN_00419b10();
          uStack_4 = 8;
          FUN_00419b10(DAT_00b39008);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x14]);
          FUN_00419b10();
          uStack_4 = 9;
          FUN_00419b10(DAT_00b39010);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x14]);
          FUN_00419b10();
          uStack_4 = 10;
          FUN_00419b10(DAT_00b39018);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x14]);
          FUN_00419b10();
          uStack_4 = 0xb;
          FUN_00419b10(DAT_00b38f90);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x14]);
          FUN_00419b10();
          uStack_4 = 0xc;
          FUN_00419b10(DAT_00b39020);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x14]);
          FUN_00419b10();
          uStack_4 = 0xd;
          FUN_00419b10(DAT_00b39028);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x14]);
          FUN_00419b10();
          uStack_4 = 0xe;
          FUN_00419b10(DAT_00b39030);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x14]);
          FUN_00419b10();
          uStack_4 = 0xf;
          FUN_00419b10(DAT_00b39038);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x14]);
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          puVar3[0x15] = uVar6;
          FUN_00419b10();
          uStack_4 = 0x10;
          FUN_00419b10(DAT_00b39040);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x15]);
          FUN_00419b10();
          uStack_4 = 0x11;
          FUN_00419b10(DAT_00b39050);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x15]);
          FUN_00419b10();
          uStack_4 = 0x12;
          FUN_00419b10(DAT_00b39320);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x15]);
          FUN_00419b10();
          uStack_4 = 0x13;
          FUN_00419b10(DAT_00b39058);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x15]);
          FUN_00419b10();
          uStack_4 = 0x14;
          FUN_00419b10(DAT_00b39060);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x15]);
          FUN_00419b10();
          uStack_4 = 0x15;
          FUN_00419b10(DAT_00b39328);
          uStack_4 = 0xffffffff;
          FUN_005c4480(puVar3[0x15]);
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          ppuStack_40 = (undefined **)0x13;
          puVar3[0x16] = uVar6;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x14;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x15;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x16;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x17;
          FUN_00419b10();
          FUN_005c93f0();
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          ppuStack_40 = (undefined **)0x0;
          puVar3[0x17] = uVar6;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x1;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x2;
          FUN_00419b10();
          FUN_005c93f0();
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          ppuStack_40 = (undefined **)0x3;
          puVar3[0x18] = uVar6;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x4;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x5;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x6;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x7;
          FUN_00419b10();
          FUN_005c93f0();
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          puVar3[0x19] = uVar6;
          ppuStack_40 = (undefined **)0x8;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x9;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0xa;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0xb;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0xc;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0xd;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0xe;
          FUN_00419b10();
          FUN_005c93f0();
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          ppuStack_40 = (undefined **)0xf;
          puVar3[0x1a] = uVar6;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x10;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x11;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x12;
          FUN_00419b10();
          FUN_005c93f0();
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          ppuStack_40 = (undefined **)0x18;
          puVar3[0x1b] = uVar6;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x19;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x1a;
          FUN_00419b10();
          FUN_005c93f0();
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          ppuStack_40 = (undefined **)0x1b;
          puVar3[0x1c] = uVar6;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x1c;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x1d;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x1e;
          FUN_00419b10();
          FUN_005c93f0();
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          ppuStack_40 = (undefined **)0x1f;
          puVar3[0x1d] = uVar6;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x20;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x21;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x22;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x23;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x24;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x25;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x26;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x27;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x28;
          FUN_00419b10();
          FUN_005c93f0();
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          ppuStack_40 = (undefined **)0x29;
          puVar3[0x1e] = uVar6;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x2a;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x2b;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x2c;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x2d;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x2e;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x2f;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x30;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x31;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x32;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x33;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x34;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x35;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x36;
          FUN_00419b10();
          FUN_005c93f0();
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          ppuStack_40 = (undefined **)0x1c;
          puVar3[0x1f] = uVar6;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x1d;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x1e;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x1f;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x6;
          FUN_00419b10();
          FUN_005c93f0();
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          ppuStack_40 = (undefined **)0x0;
          puVar3[0x20] = uVar6;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x1;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x2;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x3;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x4;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x5;
          FUN_00419b10();
          FUN_005c93f0();
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          ppuStack_40 = (undefined **)0x7;
          puVar3[0x21] = uVar6;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x8;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x10;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x11;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x12;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x13;
          FUN_00419b10();
          FUN_005c93f0();
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          ppuStack_40 = (undefined **)0x9;
          puVar3[0x22] = uVar6;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0xa;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0xb;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0xc;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0xd;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0xe;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0xf;
          FUN_00419b10();
          FUN_005c93f0();
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          ppuStack_40 = (undefined **)0x16;
          puVar3[0x23] = uVar6;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x17;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x18;
          FUN_00419b10();
          FUN_005c93f0();
          FUN_00419b10();
          uVar6 = FUN_005c4340();
          ppuStack_40 = (undefined **)0x19;
          puVar3[0x24] = uVar6;
          FUN_00419b10();
          FUN_005c93f0();
          ppuStack_40 = (undefined **)0x1a;
          FUN_00419b10();
          FUN_005c93f0();
          FUN_00419b10();
          FUN_005c3110();
          FUN_00588bd0();
          ppuStack_40 = (undefined **)0x5cbbb8;
          FUN_0058ceb0();
          FUN_00419b10();
          FUN_005c3110();
          FUN_00588bd0();
          ppuStack_40 = (undefined **)0x5cbbf1;
          FUN_0058ceb0();
          if (DAT_00b14500 == '\0') {
            puVar7 = (uchar *)FUN_004da2a0();
            ppuStack_40 = (undefined **)0x5cbc10;
            iVar4 = __mbscmp(&DAT_00b3b4d0,puVar7);
            if (iVar4 != 0) {
              puVar7 = (uchar *)FUN_004da2a0();
              ppuStack_40 = (undefined **)0x5cbc2d;
              iVar4 = __mbscmp((uchar *)"Bendu Olo",puVar7);
              if (iVar4 != 0) {
                FUN_004da2a0();
                goto LAB_005cbc67;
              }
            }
          }
          pcVar8 = (char *)FUN_004da2a0();
          pcVar9 = &DAT_00b3b4d0;
          do {
            cVar1 = *pcVar8;
            *pcVar9 = cVar1;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
LAB_005cbc67:
          ppuStack_40 = (undefined **)0x5cbc74;
          FUN_0058ced0();
          ppuStack_40 = (undefined **)0x5cbc8b;
          FUN_0058ceb0();
          FUN_005c7ba0();
          if (DAT_00b14500 == '\0') {
            cVar1 = FUN_0051fe90();
            if (cVar1 == '\0') {
              FUN_00419b10();
              uStack_4 = 0x16;
              FUN_00419b10();
              uStack_4 = 0xffffffff;
              FUN_005c3440();
              FUN_00588bd0();
              FUN_009828c0();
              FUN_00419b10();
              uStack_4 = 0x17;
              FUN_00419b10(DAT_00b38f88);
              uStack_4 = 0xffffffff;
              FUN_005c3440();
              ppuStack_40 = (undefined **)0x5cbd62;
              FUN_0058ced0();
            }
            else {
              FUN_00419b10();
              uStack_4 = 0x18;
              FUN_00419b10(DAT_00b38f88);
              uStack_4 = 0xffffffff;
              FUN_005c3440();
              ppuStack_40 = (undefined **)0x5cbdab;
              FUN_00578ed0();
              FUN_00419b10();
              uStack_4 = 0x19;
              FUN_00419b10(DAT_00b38f88);
              uStack_4 = 0xffffffff;
              FUN_005c3440();
              ppuStack_40 = (undefined **)0x5cbdf8;
              FUN_0058ced0();
              FUN_00419b10();
              uStack_4 = 0x1a;
              FUN_00419b10(DAT_00b38f88);
              uStack_4 = 0xffffffff;
              FUN_005c3440();
              ppuStack_40 = (undefined **)0x5cbe42;
              FUN_00578ed0();
              FUN_00419b10();
              uStack_4 = 0x1b;
              FUN_00419b10(DAT_00b38f88);
              uStack_4 = 0xffffffff;
              FUN_005c3440();
              ppuStack_40 = (undefined **)0x5cbe8c;
              FUN_00578ed0();
              FUN_00419b10();
              uStack_4 = 0x1c;
              FUN_00419b10(DAT_00b38f88);
              uStack_4 = 0xffffffff;
              FUN_005c3440();
              ppuStack_40 = (undefined **)0x5cbed6;
              FUN_00578ed0();
            }
          }
          else {
            FUN_005c6ea0();
            DAT_00b14500 = '\0';
          }
          puStack_10 = (undefined1 *)&ppuStack_40;
          FUN_00419b10();
          uStack_4 = 0x1d;
          FUN_00419b10();
          uStack_4 = 0xffffffff;
          FUN_005c3440();
          fVar11 = (float10)FUN_00588bd0();
          if (fVar11 == (float10)2.0) {
            FUN_00419b10();
            uStack_4 = 0x1e;
            FUN_00419b10();
            uStack_4 = 0xffffffff;
            FUN_005c3440();
            fVar11 = (float10)FUN_00588bd0();
            FUN_00419b10();
            uStack_4 = 0x1f;
            FUN_00419b10();
            uStack_4 = 0xffffffff;
            FUN_005c3440();
            fVar12 = (float10)FUN_00588bd0();
            FUN_00419b10();
            uStack_4 = 0x20;
            FUN_00419b10();
            uStack_4 = 0xffffffff;
            FUN_005c3440();
            fVar13 = (float10)FUN_00588bd0();
            uStack_18 = (undefined1)(int)ROUND((float)fVar13 * 255.0);
            uStack_14 = (undefined1)(int)ROUND((float)fVar12 * 255.0);
            puStack_10._0_1_ = (undefined1)(int)ROUND((float)fVar11 * 255.0);
            puStack_10 = (undefined1 *)
                         (uint)CONCAT21(CONCAT11(uStack_18,uStack_14),puStack_10._0_1_);
            local_20 = 0.0;
            do {
              if (puStack_10 == (undefined1 *)*puVar10) {
                ppuStack_40 = (undefined **)0x0;
                FUN_004028d0();
                uStack_4 = 0x21;
                FUN_004028d0(DAT_00b38f88);
                uStack_4 = 0xffffffff;
                FUN_005c3440();
                ppuStack_40 = (undefined **)0x5cc114;
                FUN_005c2b50();
              }
              local_20 = (float)((int)local_20 + 1);
              puVar10 = puVar10 + 1;
            } while ((int)local_20 < 0x10);
          }
          FUN_005c7070();
          ppuStack_40 = (undefined **)0x3e9;
          cVar1 = FUN_005790e0();
          if (cVar1 == '\0') {
            FUN_00585190();
          }
          else {
            ppuStack_40 = (undefined **)0x5cc157;
            FUN_0058ceb0();
          }
          *(char *)(puVar3 + 0x225) = (char)DAT_00b333c4[0x162];
          FUN_0066c580();
          ppuStack_40 = (undefined **)0x5cc194;
          FUN_005c2bf0();
          (**(code **)(*(int *)DAT_00b333c4[0x16] + 900))();
          puVar3[0x224] = DAT_00b33ea0;
          *unaff_FS_OFFSET = (uint)puStack_10;
          return local_20;
        }
        FUN_004a7a60();
      }
    }
    fVar2 = 0.0;
  }
  *unaff_FS_OFFSET = local_c;
  return fVar2;
}



void FUN_005cc200(int param_1)

{
  char *pcVar1;
  bool bVar2;
  bool bVar3;
  uchar *_Str2;
  undefined4 uVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  uchar *_Str1;
  double *pdVar8;
  int in_ECX;
  uint uVar9;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  double *local_50;
  double *local_4c;
  char *local_48;
  double local_20;
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_009c1b38;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  bVar3 = false;
  *(undefined1 *)(in_ECX + 0x8d0) = 0;
  local_48 = (char *)0x5cc24d;
  FUN_0058ceb0();
  cVar5 = FUN_0057d2f0();
  if (cVar5 == '\0') {
    if (param_1 != 10) goto LAB_005cc277;
    FUN_005c2730();
    FUN_005c30c0();
LAB_005cc8ba:
    local_4c = (double *)0x0;
    local_50 = DAT_00b38ff0;
    local_48 = (char *)0x0;
    FUN_004028d0();
    local_c = 1;
    local_50 = (double *)0x0;
    local_4c = (double *)0x0;
    FUN_004028d0(DAT_00b38f80,0);
    local_c = 0xffffffff;
    FUN_005c3440();
    local_20 = (double)param_1;
    fVar10 = (float10)FUN_00588bd0();
    if ((float10)local_20 == fVar10) {
      if (DAT_00b3b4c8 == '\0') {
        local_48 = DAT_00b38d00;
        local_4c = (double *)0x1;
        local_50 = (double *)&LAB_005c9fc0;
        FUN_00579c10(DAT_00b39450);
        DAT_00b3b4c8 = '\x01';
        bVar3 = true;
      }
      else {
        FUN_005c9cd0();
        bVar3 = true;
      }
      goto LAB_005cd9c5;
    }
    if (param_1 == 0x62) {
      (**(code **)(*DAT_00b333c4 + 0x170))();
      FUN_00526f00();
      FUN_005c91e0();
      goto LAB_005cd9c5;
    }
    local_4c = (double *)0x0;
    local_50 = DAT_00b38ff8;
    local_48 = (char *)0x0;
    FUN_004028d0();
    local_20 = (double)CONCAT44(local_20._4_4_,&local_50);
    local_c = 2;
    local_50 = (double *)0x0;
    local_4c = (double *)0x0;
    FUN_004028d0(DAT_00b38f80,0);
    local_c = 0xffffffff;
    FUN_005c3440();
    local_20 = (double)param_1;
    fVar10 = (float10)FUN_00588bd0();
    if ((float10)local_20 != fVar10) {
      local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
      local_4c = DAT_00b38f98;
      local_50 = (double *)0x5cccec;
      FUN_00419b10();
      local_c = 3;
      FUN_00419b10(DAT_00b38f70);
      local_c = 0xffffffff;
      FUN_005c3440();
      local_20 = (double)param_1;
      fVar10 = (float10)FUN_00588bd0();
      if ((float10)local_20 == fVar10) {
        FUN_005c7070();
        FUN_005c2f20();
      }
      else {
        local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
        local_4c = DAT_00b38fc0;
        local_50 = (double *)0x5ccd5c;
        FUN_00419b10();
        local_c = 4;
        FUN_00419b10(DAT_00b38f88);
        local_c = 0xffffffff;
        FUN_005c3440();
        local_20 = (double)param_1;
        fVar10 = (float10)FUN_00588bd0();
        if ((float10)local_20 != fVar10) {
          local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
          local_4c = DAT_00b38fc8;
          local_50 = (double *)0x5ccdbd;
          FUN_00419b10();
          local_c = 5;
          FUN_00419b10(DAT_00b38f88);
          local_c = 0xffffffff;
          FUN_005c3440();
          local_20 = (double)param_1;
          fVar10 = (float10)FUN_00588bd0();
          if ((float10)local_20 != fVar10) {
            local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
            local_4c = DAT_00b38fd0;
            local_50 = (double *)0x5cce1e;
            FUN_00419b10();
            local_c = 6;
            FUN_00419b10(DAT_00b38f88);
            local_c = 0xffffffff;
            FUN_005c3440();
            local_20 = (double)param_1;
            fVar10 = (float10)FUN_00588bd0();
            if ((float10)local_20 != fVar10) {
              local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
              local_4c = DAT_00b38fd8;
              local_50 = (double *)0x5cce7f;
              FUN_00419b10();
              local_c = 7;
              FUN_00419b10(DAT_00b38f88);
              local_c = 0xffffffff;
              FUN_005c3440();
              local_20 = (double)param_1;
              fVar10 = (float10)FUN_00588bd0();
              if ((float10)local_20 == fVar10) {
                FUN_005c62d0();
              }
              else {
                local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                local_4c = DAT_00b38fa8;
                local_50 = (double *)0x5ccee8;
                FUN_00419b10();
                local_c = 8;
                FUN_00419b10(DAT_00b38f78);
                local_c = 0xffffffff;
                FUN_005c3440();
                local_20 = (double)param_1;
                fVar10 = (float10)FUN_00588bd0();
                if ((float10)local_20 == fVar10) {
                  FUN_005c9770();
                }
                else {
                  local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                  local_4c = DAT_00b38f80;
                  local_50 = (double *)0x5ccf51;
                  FUN_00419b10();
                  local_c = 9;
                  FUN_00419b10(DAT_00b38f70);
                  local_c = 0xffffffff;
                  FUN_005c3440();
                  local_20 = (double)param_1;
                  fVar10 = (float10)FUN_00588bd0();
                  if ((float10)local_20 == fVar10) {
                    local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                    local_4c = DAT_00b38f80;
                    local_50 = (double *)0x5ccfaa;
                    FUN_00419b10();
                    local_c = 10;
                    pdVar8 = DAT_00b38f70;
                  }
                  else {
                    local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                    local_4c = DAT_00b38fe0;
                    local_50 = (double *)0x5ccff0;
                    FUN_00419b10();
                    local_c = 0xb;
                    FUN_00419b10(DAT_00b38f80);
                    local_c = 0xffffffff;
                    FUN_005c3440();
                    local_20 = (double)param_1;
                    fVar10 = (float10)FUN_00588bd0();
                    if ((float10)local_20 == fVar10) {
                      local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                      local_4c = DAT_00b38fe0;
                      local_50 = (double *)0x5cd04a;
                      FUN_00419b10();
                      local_c = 0xc;
                      pdVar8 = DAT_00b38f80;
                    }
                    else {
                      local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                      local_4c = DAT_00b38fe8;
                      local_50 = (double *)0x5cd076;
                      FUN_00419b10();
                      local_c = 0xd;
                      FUN_00419b10(DAT_00b38f80);
                      local_c = 0xffffffff;
                      FUN_005c3440();
                      local_20 = (double)param_1;
                      fVar10 = (float10)FUN_00588bd0();
                      if ((float10)local_20 == fVar10) {
                        local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                        local_4c = DAT_00b38fe8;
                        local_50 = (double *)0x5cd0d0;
                        FUN_00419b10();
                        local_c = 0xe;
                        pdVar8 = DAT_00b38f80;
                      }
                      else {
                        local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                        local_4c = DAT_00b38f88;
                        local_50 = (double *)0x5cd0fc;
                        FUN_00419b10();
                        local_c = 0xf;
                        FUN_00419b10(DAT_00b38f70);
                        local_c = 0xffffffff;
                        FUN_005c3440();
                        local_20 = (double)param_1;
                        fVar10 = (float10)FUN_00588bd0();
                        if ((float10)local_20 == fVar10) {
                          local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                          local_4c = DAT_00b38f88;
                          local_50 = (double *)0x5cd155;
                          FUN_00419b10();
                          local_c = 0x10;
                          pdVar8 = DAT_00b38f70;
                        }
                        else {
                          local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                          local_4c = DAT_00b38f78;
                          local_50 = (double *)0x5cd17c;
                          FUN_00419b10();
                          local_c = 0x11;
                          FUN_00419b10(DAT_00b38f70);
                          local_c = 0xffffffff;
                          FUN_005c3440();
                          local_20 = (double)param_1;
                          fVar10 = (float10)FUN_00588bd0();
                          if ((float10)local_20 == fVar10) {
                            local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                            local_4c = DAT_00b38f78;
                            local_50 = (double *)0x5cd1d5;
                            FUN_00419b10();
                            local_c = 0x12;
                            pdVar8 = DAT_00b38f70;
                          }
                          else {
                            local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                            local_4c = DAT_00b39000;
                            local_50 = (double *)0x5cd1fc;
                            FUN_00419b10();
                            local_c = 0x13;
                            FUN_00419b10(DAT_00b38fe0);
                            local_c = 0xffffffff;
                            FUN_005c3440();
                            local_20 = (double)param_1;
                            fVar10 = (float10)FUN_00588bd0();
                            if ((float10)local_20 == fVar10) {
                              local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                              local_4c = DAT_00b39000;
                              local_50 = (double *)0x5cd256;
                              FUN_00419b10();
                              local_c = 0x14;
                              pdVar8 = DAT_00b38fe0;
                            }
                            else {
                              local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                              local_4c = DAT_00b39008;
                              local_50 = (double *)0x5cd282;
                              FUN_00419b10();
                              local_c = 0x15;
                              FUN_00419b10(DAT_00b38fe0);
                              local_c = 0xffffffff;
                              FUN_005c3440();
                              local_20 = (double)param_1;
                              fVar10 = (float10)FUN_00588bd0();
                              if ((float10)local_20 == fVar10) {
                                local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                                local_4c = DAT_00b39008;
                                local_50 = (double *)0x5cd2dc;
                                FUN_00419b10();
                                local_c = 0x16;
                                pdVar8 = DAT_00b38fe0;
                              }
                              else {
                                local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                                local_4c = DAT_00b39010;
                                local_50 = (double *)0x5cd308;
                                FUN_00419b10();
                                local_c = 0x17;
                                FUN_00419b10(DAT_00b38fe0);
                                local_c = 0xffffffff;
                                FUN_005c3440();
                                local_20 = (double)param_1;
                                fVar10 = (float10)FUN_00588bd0();
                                if ((float10)local_20 == fVar10) {
                                  local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                                  local_4c = DAT_00b39010;
                                  local_50 = (double *)0x5cd362;
                                  FUN_00419b10();
                                  local_c = 0x18;
                                  pdVar8 = DAT_00b38fe0;
                                }
                                else {
                                  local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                                  local_4c = DAT_00b39018;
                                  local_50 = (double *)0x5cd38e;
                                  FUN_00419b10();
                                  local_c = 0x19;
                                  FUN_00419b10(DAT_00b38fe0);
                                  local_c = 0xffffffff;
                                  FUN_005c3440();
                                  local_20 = (double)param_1;
                                  fVar10 = (float10)FUN_00588bd0();
                                  if ((float10)local_20 == fVar10) {
                                    local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                                    local_4c = DAT_00b39018;
                                    local_50 = (double *)0x5cd3e8;
                                    FUN_00419b10();
                                    local_c = 0x1a;
                                    pdVar8 = DAT_00b38fe0;
                                  }
                                  else {
                                    local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                                    local_4c = DAT_00b38f90;
                                    local_50 = (double *)0x5cd414;
                                    FUN_00419b10();
                                    local_c = 0x1b;
                                    FUN_00419b10(DAT_00b38fe0);
                                    local_c = 0xffffffff;
                                    FUN_005c3440();
                                    local_20 = (double)param_1;
                                    fVar10 = (float10)FUN_00588bd0();
                                    if ((float10)local_20 == fVar10) {
                                      local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                                      local_4c = DAT_00b38f90;
                                      local_50 = (double *)0x5cd46e;
                                      FUN_00419b10();
                                      local_c = 0x1c;
                                      pdVar8 = DAT_00b38fe0;
                                    }
                                    else {
                                      local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                                      local_4c = DAT_00b39020;
                                      local_50 = (double *)0x5cd49a;
                                      FUN_00419b10();
                                      local_c = 0x1d;
                                      FUN_00419b10(DAT_00b38fe0);
                                      local_c = 0xffffffff;
                                      FUN_005c3440();
                                      local_20 = (double)param_1;
                                      fVar10 = (float10)FUN_00588bd0();
                                      if ((float10)local_20 == fVar10) {
                                        local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                                        local_4c = DAT_00b39020;
                                        local_50 = (double *)0x5cd4f4;
                                        FUN_00419b10();
                                        local_c = 0x1e;
                                        pdVar8 = DAT_00b38fe0;
                                      }
                                      else {
                                        local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                                        local_4c = DAT_00b39028;
                                        local_50 = (double *)0x5cd520;
                                        FUN_00419b10();
                                        local_c = 0x1f;
                                        FUN_00419b10(DAT_00b38fe0);
                                        local_c = 0xffffffff;
                                        FUN_005c3440();
                                        local_20 = (double)param_1;
                                        fVar10 = (float10)FUN_00588bd0();
                                        if ((float10)local_20 == fVar10) {
                                          local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                                          local_4c = DAT_00b39028;
                                          local_50 = (double *)0x5cd57a;
                                          FUN_00419b10();
                                          local_c = 0x20;
                                          pdVar8 = DAT_00b38fe0;
                                        }
                                        else {
                                          local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                                          local_4c = DAT_00b39030;
                                          local_50 = (double *)0x5cd5a6;
                                          FUN_00419b10();
                                          local_c = 0x21;
                                          FUN_00419b10(DAT_00b38fe0);
                                          local_c = 0xffffffff;
                                          FUN_005c3440();
                                          local_20 = (double)param_1;
                                          fVar10 = (float10)FUN_00588bd0();
                                          if ((float10)local_20 == fVar10) {
                                            local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                                            local_4c = DAT_00b39030;
                                            local_50 = (double *)0x5cd600;
                                            FUN_00419b10();
                                            local_c = 0x22;
                                            pdVar8 = DAT_00b38fe0;
                                          }
                                          else {
                                            local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                                            local_4c = DAT_00b39038;
                                            local_50 = (double *)0x5cd62c;
                                            FUN_00419b10();
                                            local_c = 0x23;
                                            FUN_00419b10(DAT_00b38fe0);
                                            local_c = 0xffffffff;
                                            FUN_005c3440();
                                            local_20 = (double)param_1;
                                            fVar10 = (float10)FUN_00588bd0();
                                            if ((float10)local_20 == fVar10) {
                                              local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                                              local_4c = DAT_00b39038;
                                              local_50 = (double *)0x5cd686;
                                              FUN_00419b10();
                                              local_c = 0x24;
                                              pdVar8 = DAT_00b38fe0;
                                            }
                                            else {
                                              local_20 = (double)CONCAT44(local_20._4_4_,&local_48);
                                              local_4c = DAT_00b39040;
                                              local_50 = (double *)0x5cd6b2;
                                              FUN_00419b10();
                                              local_c = 0x25;
                                              FUN_00419b10(DAT_00b38fe8);
                                              local_c = 0xffffffff;
                                              FUN_005c3440();
                                              local_20 = (double)param_1;
                                              fVar10 = (float10)FUN_00588bd0();
                                              if ((float10)local_20 == fVar10) {
                                                local_20 = (double)CONCAT44(local_20._4_4_,&local_48
                                                                           );
                                                local_4c = DAT_00b39040;
                                                local_50 = (double *)0x5cd70c;
                                                FUN_00419b10();
                                                local_c = 0x26;
                                                pdVar8 = DAT_00b38fe8;
                                              }
                                              else {
                                                local_20 = (double)CONCAT44(local_20._4_4_,&local_48
                                                                           );
                                                local_4c = DAT_00b39050;
                                                local_50 = (double *)0x5cd738;
                                                FUN_00419b10();
                                                local_c = 0x27;
                                                FUN_00419b10(DAT_00b38fe8);
                                                local_c = 0xffffffff;
                                                FUN_005c3440();
                                                local_20 = (double)param_1;
                                                fVar10 = (float10)FUN_00588bd0();
                                                if ((float10)local_20 == fVar10) {
                                                  local_20 = (double)CONCAT44(local_20._4_4_,
                                                                              &local_48);
                                                  local_4c = DAT_00b39050;
                                                  local_50 = (double *)0x5cd792;
                                                  FUN_00419b10();
                                                  local_c = 0x28;
                                                  pdVar8 = DAT_00b38fe8;
                                                }
                                                else {
                                                  local_20 = (double)CONCAT44(local_20._4_4_,
                                                                              &local_48);
                                                  local_4c = DAT_00b39320;
                                                  local_50 = (double *)0x5cd7be;
                                                  FUN_00419b10();
                                                  local_c = 0x29;
                                                  FUN_00419b10(DAT_00b38fe8);
                                                  local_c = 0xffffffff;
                                                  FUN_005c3440();
                                                  local_20 = (double)param_1;
                                                  fVar10 = (float10)FUN_00588bd0();
                                                  if ((float10)local_20 == fVar10) {
                                                    local_20 = (double)CONCAT44(local_20._4_4_,
                                                                                &local_48);
                                                    local_4c = DAT_00b39320;
                                                    local_50 = (double *)0x5cd818;
                                                    FUN_00419b10();
                                                    local_c = 0x2a;
                                                    pdVar8 = DAT_00b38fe8;
                                                  }
                                                  else {
                                                    local_20 = (double)CONCAT44(local_20._4_4_,
                                                                                &local_48);
                                                    local_4c = DAT_00b39058;
                                                    local_50 = (double *)0x5cd844;
                                                    FUN_00419b10();
                                                    local_c = 0x2b;
                                                    FUN_00419b10(DAT_00b38fe8);
                                                    local_c = 0xffffffff;
                                                    FUN_005c3440();
                                                    local_20 = (double)param_1;
                                                    fVar10 = (float10)FUN_00588bd0();
                                                    if ((float10)local_20 == fVar10) {
                                                      local_20 = (double)CONCAT44(local_20._4_4_,
                                                                                  &local_48);
                                                      local_4c = DAT_00b39058;
                                                      local_50 = (double *)0x5cd89e;
                                                      FUN_00419b10();
                                                      local_c = 0x2c;
                                                      pdVar8 = DAT_00b38fe8;
                                                    }
                                                    else {
                                                      local_20 = (double)CONCAT44(local_20._4_4_,
                                                                                  &local_48);
                                                      local_4c = DAT_00b39060;
                                                      local_50 = (double *)0x5cd8ca;
                                                      FUN_00419b10();
                                                      local_c = 0x2d;
                                                      FUN_00419b10(DAT_00b38fe8);
                                                      local_c = 0xffffffff;
                                                      FUN_005c3440();
                                                      local_20 = (double)param_1;
                                                      fVar10 = (float10)FUN_00588bd0();
                                                      if ((float10)local_20 == fVar10) {
                                                        local_20 = (double)CONCAT44(local_20._4_4_,
                                                                                    &local_48);
                                                        local_4c = DAT_00b39060;
                                                        local_50 = (double *)0x5cd924;
                                                        FUN_00419b10();
                                                        local_c = 0x2e;
                                                        pdVar8 = DAT_00b38fe8;
                                                      }
                                                      else {
                                                        local_20 = (double)CONCAT44(local_20._4_4_,
                                                                                    &local_48);
                                                        local_4c = DAT_00b39328;
                                                        local_50 = (double *)0x5cd950;
                                                        FUN_00419b10();
                                                        local_c = 0x2f;
                                                        FUN_00419b10(DAT_00b38fe8);
                                                        local_c = 0xffffffff;
                                                        FUN_005c3440();
                                                        local_20 = (double)param_1;
                                                        fVar10 = (float10)FUN_00588bd0();
                                                        if ((float10)local_20 != fVar10)
                                                        goto LAB_005cda11;
                                                        local_20 = (double)CONCAT44(local_20._4_4_,
                                                                                    &local_48);
                                                        local_4c = DAT_00b39328;
                                                        local_50 = (double *)0x5cd9aa;
                                                        FUN_00419b10();
                                                        local_c = 0x30;
                                                        pdVar8 = DAT_00b38fe8;
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
                  FUN_00419b10(pdVar8);
                  local_c = 0xffffffff;
                  FUN_005c9650();
                }
              }
              goto LAB_005cd9c5;
            }
          }
        }
        FUN_005c5c30();
      }
      goto LAB_005cd9c5;
    }
    if (DAT_00b3b4c9 == '\0') {
      local_48 = DAT_00b38d00;
      local_4c = (double *)0x1;
      local_50 = (double *)&LAB_005c9f70;
      FUN_00579c10(DAT_00b39448);
      DAT_00b3b4c9 = '\x01';
    }
    else {
      FUN_005c9c70();
    }
LAB_005cd9d3:
    DAT_00b3b4c8 = '\0';
  }
  else {
    FUN_0057dd90();
    FUN_005c30c0();
LAB_005cc277:
    if (param_1 != 0x5a) goto LAB_005cc8ba;
    local_4c = (double *)0x0;
    local_50 = DAT_00b38f70;
    local_48 = (char *)0x0;
    FUN_004028d0();
    local_4c = (double *)0x5cc2ad;
    FUN_005c3110();
    local_48 = (char *)0x5cc2bc;
    fVar10 = (float10)FUN_00588bd0();
    local_20 = (double)fVar10;
    fVar10 = (float10)FUN_00588bd0();
    if (fVar10 == (float10)local_20) {
      bVar2 = true;
      pcVar6 = (char *)FUN_00588c10();
      pcVar1 = pcVar6 + 1;
      uVar9 = 0;
      do {
        cVar5 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar5 != '\0');
      if (pcVar6 != pcVar1) {
        do {
          iVar7 = FUN_00588c10();
          if (*(char *)(iVar7 + uVar9) != ' ') {
            bVar2 = false;
          }
          uVar9 = uVar9 + 1;
          pcVar6 = (char *)FUN_00588c10();
          pcVar1 = pcVar6 + 1;
          do {
            cVar5 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar5 != '\0');
        } while (uVar9 < (uint)((int)pcVar6 - (int)pcVar1));
      }
      _Str2 = DAT_00b39440;
      _Str1 = (uchar *)FUN_00588c10();
      local_48 = (char *)0x5ccaf9;
      iVar7 = __mbscmp(_Str1,_Str2);
      if ((iVar7 == 0) || (bVar2)) {
        local_48 = (char *)0x1;
        local_4c = (double *)0x0;
        local_50 = DAT_00b39438;
        FUN_00579c10();
        *unaff_FS_OFFSET = local_14;
        return;
      }
      local_20 = 0.0;
      local_c = 0;
      FUN_005e32f0();
      local_4c = &local_20;
      local_48 = "%s %s?";
      local_50 = (double *)0x5ccb81;
      FUN_00402e30();
      uVar4 = local_20._0_4_;
      local_50 = (double *)0x0;
      FUN_00579c10(local_20._0_4_,&LAB_005c2ba0,1,DAT_00b38d00,DAT_00b38cf8);
      local_c = 0xffffffff;
      FUN_00401f20(uVar4);
    }
    else {
      local_4c = (double *)0x0;
      local_50 = DAT_00b38fe0;
      local_48 = (char *)0x0;
      FUN_004028d0();
      local_4c = (double *)0x5cc301;
      FUN_005c3110();
      local_48 = (char *)0x5cc310;
      fVar10 = (float10)FUN_00588bd0();
      local_20 = (double)fVar10;
      fVar10 = (float10)FUN_00588bd0();
      if (fVar10 == (float10)local_20) {
LAB_005cca09:
        local_4c = (double *)0x0;
        local_50 = DAT_00b38f80;
        local_48 = (char *)0x0;
        FUN_004028d0();
        local_4c = (double *)0x5cca34;
        FUN_005c3110();
        FUN_00588bd0();
        local_48 = (char *)0x5cca4e;
        FUN_0058ceb0();
        local_4c = (double *)0x0;
        local_50 = DAT_00b38f80;
        local_48 = (char *)0x0;
        FUN_004028d0();
      }
      else {
        local_4c = (double *)0x0;
        local_50 = DAT_00b38fe8;
        local_48 = (char *)0x0;
        FUN_004028d0();
        local_4c = (double *)0x5cc355;
        FUN_005c3110();
        local_48 = (char *)0x5cc364;
        fVar10 = (float10)FUN_00588bd0();
        local_20 = (double)fVar10;
        fVar10 = (float10)FUN_00588bd0();
        if (fVar10 == (float10)local_20) goto LAB_005cca09;
        local_4c = DAT_00b39000;
        local_50 = (double *)0x5cc397;
        FUN_00419b10();
        local_4c = (double *)0x5cc39e;
        FUN_005c3110();
        local_48 = (char *)0x5cc3ad;
        fVar10 = (float10)FUN_00588bd0();
        local_20 = (double)fVar10;
        fVar10 = (float10)FUN_00588bd0();
        if (fVar10 == (float10)local_20) {
LAB_005cc9c4:
          local_4c = DAT_00b38fe0;
          local_50 = (double *)0x5cc9dd;
          FUN_00419b10();
          local_4c = (double *)0x5cc9e4;
          FUN_005c3110();
          FUN_00588bd0();
          local_48 = (char *)0x5cc9fe;
          FUN_0058ceb0();
          local_4c = DAT_00b38fe0;
        }
        else {
          local_4c = DAT_00b39008;
          local_50 = (double *)0x5cc3e1;
          FUN_00419b10();
          local_4c = (double *)0x5cc3e8;
          FUN_005c3110();
          local_48 = (char *)0x5cc3f7;
          fVar10 = (float10)FUN_00588bd0();
          local_20 = (double)fVar10;
          fVar10 = (float10)FUN_00588bd0();
          if (fVar10 == (float10)local_20) goto LAB_005cc9c4;
          local_4c = DAT_00b39010;
          local_50 = (double *)0x5cc42a;
          FUN_00419b10();
          local_4c = (double *)0x5cc431;
          FUN_005c3110();
          local_48 = (char *)0x5cc440;
          fVar10 = (float10)FUN_00588bd0();
          local_20 = (double)fVar10;
          fVar10 = (float10)FUN_00588bd0();
          if (fVar10 == (float10)local_20) goto LAB_005cc9c4;
          local_4c = DAT_00b39018;
          local_50 = (double *)0x5cc474;
          FUN_00419b10();
          local_4c = (double *)0x5cc47b;
          FUN_005c3110();
          local_48 = (char *)0x5cc48a;
          fVar10 = (float10)FUN_00588bd0();
          local_20 = (double)fVar10;
          fVar10 = (float10)FUN_00588bd0();
          if (fVar10 == (float10)local_20) goto LAB_005cc9c4;
          local_4c = DAT_00b38f90;
          local_50 = (double *)0x5cc4bd;
          FUN_00419b10();
          local_4c = (double *)0x5cc4c4;
          FUN_005c3110();
          local_48 = (char *)0x5cc4d3;
          fVar10 = (float10)FUN_00588bd0();
          local_20 = (double)fVar10;
          fVar10 = (float10)FUN_00588bd0();
          if (fVar10 == (float10)local_20) goto LAB_005cc9c4;
          local_4c = DAT_00b39020;
          local_50 = (double *)0x5cc507;
          FUN_00419b10();
          local_4c = (double *)0x5cc50e;
          FUN_005c3110();
          local_48 = (char *)0x5cc51d;
          fVar10 = (float10)FUN_00588bd0();
          local_20 = (double)fVar10;
          fVar10 = (float10)FUN_00588bd0();
          if (fVar10 == (float10)local_20) goto LAB_005cc9c4;
          local_4c = DAT_00b39028;
          local_50 = (double *)0x5cc550;
          FUN_00419b10();
          local_4c = (double *)0x5cc557;
          FUN_005c3110();
          local_48 = (char *)0x5cc566;
          fVar10 = (float10)FUN_00588bd0();
          local_20 = (double)fVar10;
          fVar10 = (float10)FUN_00588bd0();
          if (fVar10 == (float10)local_20) goto LAB_005cc9c4;
          local_4c = DAT_00b39008;
          local_50 = (double *)0x5cc59a;
          FUN_00419b10();
          local_4c = (double *)0x5cc5a1;
          FUN_005c3110();
          local_48 = (char *)0x5cc5b0;
          fVar10 = (float10)FUN_00588bd0();
          local_20 = (double)fVar10;
          fVar10 = (float10)FUN_00588bd0();
          if (fVar10 == (float10)local_20) goto LAB_005cc9c4;
          local_4c = DAT_00b39030;
          local_50 = (double *)0x5cc5e3;
          FUN_00419b10();
          local_4c = (double *)0x5cc5ea;
          FUN_005c3110();
          local_48 = (char *)0x5cc5f9;
          fVar10 = (float10)FUN_00588bd0();
          local_20 = (double)fVar10;
          fVar10 = (float10)FUN_00588bd0();
          if (fVar10 == (float10)local_20) goto LAB_005cc9c4;
          local_4c = DAT_00b39038;
          local_50 = (double *)0x5cc62d;
          FUN_00419b10();
          local_4c = (double *)0x5cc634;
          FUN_005c3110();
          local_48 = (char *)0x5cc643;
          fVar10 = (float10)FUN_00588bd0();
          local_20 = (double)fVar10;
          fVar10 = (float10)FUN_00588bd0();
          if (fVar10 == (float10)local_20) goto LAB_005cc9c4;
          local_4c = DAT_00b39040;
          local_50 = (double *)0x5cc676;
          FUN_00419b10();
          local_4c = (double *)0x5cc67d;
          FUN_005c3110();
          local_48 = (char *)0x5cc68c;
          fVar10 = (float10)FUN_00588bd0();
          local_20 = (double)fVar10;
          fVar10 = (float10)FUN_00588bd0();
          if (fVar10 == (float10)local_20) {
LAB_005cc97f:
            local_4c = DAT_00b38fe8;
            local_50 = (double *)0x5cc998;
            FUN_00419b10();
            local_4c = (double *)0x5cc99f;
            FUN_005c3110();
            FUN_00588bd0();
            local_48 = (char *)0x5cc9b9;
            FUN_0058ceb0();
            local_4c = DAT_00b38fe8;
          }
          else {
            local_4c = DAT_00b39050;
            local_50 = (double *)0x5cc6c0;
            FUN_00419b10();
            local_4c = (double *)0x5cc6c7;
            FUN_005c3110();
            local_48 = (char *)0x5cc6d6;
            fVar10 = (float10)FUN_00588bd0();
            local_20 = (double)fVar10;
            fVar10 = (float10)FUN_00588bd0();
            if (fVar10 == (float10)local_20) goto LAB_005cc97f;
            local_4c = DAT_00b39320;
            local_50 = (double *)0x5cc709;
            FUN_00419b10();
            local_4c = (double *)0x5cc710;
            FUN_005c3110();
            local_48 = (char *)0x5cc71f;
            fVar10 = (float10)FUN_00588bd0();
            local_20 = (double)fVar10;
            fVar10 = (float10)FUN_00588bd0();
            if (fVar10 == (float10)local_20) goto LAB_005cc97f;
            local_4c = DAT_00b39058;
            local_50 = (double *)0x5cc753;
            FUN_00419b10();
            local_4c = (double *)0x5cc75a;
            FUN_005c3110();
            local_48 = (char *)0x5cc769;
            fVar10 = (float10)FUN_00588bd0();
            local_20 = (double)fVar10;
            fVar10 = (float10)FUN_00588bd0();
            if (fVar10 == (float10)local_20) goto LAB_005cc97f;
            local_4c = DAT_00b39060;
            local_50 = (double *)0x5cc79c;
            FUN_00419b10();
            local_4c = (double *)0x5cc7a3;
            FUN_005c3110();
            local_48 = (char *)0x5cc7b2;
            fVar10 = (float10)FUN_00588bd0();
            local_20 = (double)fVar10;
            fVar10 = (float10)FUN_00588bd0();
            if (fVar10 == (float10)local_20) goto LAB_005cc97f;
            local_4c = DAT_00b39328;
            local_50 = (double *)0x5cc7e6;
            FUN_00419b10();
            local_4c = (double *)0x5cc7ed;
            FUN_005c3110();
            local_48 = (char *)0x5cc7fc;
            fVar10 = (float10)FUN_00588bd0();
            local_20 = (double)fVar10;
            fVar10 = (float10)FUN_00588bd0();
            if (fVar10 == (float10)local_20) goto LAB_005cc97f;
            local_48 = (char *)0x5cc829;
            FUN_0058ceb0();
            local_4c = DAT_00b38f70;
            local_50 = (double *)0x5cc842;
            FUN_00419b10();
            local_4c = (double *)0x5cc849;
            FUN_005c3110();
            FUN_00588bd0();
            local_48 = (char *)0x5cc863;
            FUN_0058ceb0();
            local_4c = DAT_00b38f70;
          }
        }
        local_50 = (double *)0x5cc87d;
        FUN_00419b10();
      }
      local_4c = (double *)0x5cc884;
      FUN_005c3110();
      FUN_00588bd0();
      local_48 = (char *)0x5cc89e;
      FUN_0058ceb0();
    }
LAB_005cd9c5:
    DAT_00b3b4c9 = '\0';
    if (!bVar3) goto LAB_005cd9d3;
  }
  (**(code **)(*DAT_00b333c4 + 0x154))();
  local_48 = (char *)0x5cd9f2;
  FUN_007b4280();
  FUN_007c5e70();
  local_48 = (char *)0x0;
  local_4c = (double *)0x5cda07;
  FUN_007b4280();
  local_48 = (char *)0x5cda11;
  FUN_007c7eb0();
LAB_005cda11:
  *unaff_FS_OFFSET = local_14;
  return;
}



void FUN_005cda30(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  char *pcStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined2 *puStack_34;
  uint uStack_30;
  undefined2 uStack_1a;
  undefined1 *puStack_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c1b98;
  local_c = *unaff_FS_OFFSET;
  uStack_30 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  puStack_34 = (undefined2 *)0x5cda69;
  puStack_18 = (undefined1 *)(**(code **)(*DAT_00b333c4 + 0x170))();
  puStack_34 = (undefined2 *)0xfae;
  pcStack_40 = (char *)0x0;
  piStack_44 = (int *)DAT_00b38f78;
  piStack_3c = (int *)0x0;
  uStack_38 = 0;
  uStack_48 = 0x5cda93;
  FUN_004028d0();
  uStack_48 = 0;
  uStack_4c = DAT_00b38f78;
  uStack_4 = 0;
  piStack_44 = (int *)0x0;
  pcStack_40 = (char *)0x0;
  uStack_50 = 0x5cdab6;
  FUN_004028d0();
  uStack_4 = 0xffffffff;
  uStack_48 = 0x5cdac4;
  FUN_005c3440();
  uStack_38 = 0x5cdacb;
  FUN_00588bd0();
  puStack_34 = (undefined2 *)0x5cdad0;
  iVar1 = FUN_009828c0();
  piVar3 = (int *)(DAT_00b33a98 + 0x44);
  iVar4 = -1;
  uStack_1a = 0;
  do {
    if (piVar3 == (int *)0x0) {
LAB_005cdb0d:
      puStack_34 = DAT_00b38b78;
      uStack_38 = 0xfb4;
      piStack_44 = (int *)0x0;
      uStack_48 = DAT_00b38f78;
      pcStack_40 = (char *)0x0;
      piStack_3c = (int *)0x0;
      uStack_4c = 0x5cdb38;
      FUN_004028d0();
      uStack_4c = 0;
      uStack_50 = DAT_00b38f78;
      uStack_4 = 5;
      uStack_48 = 0;
      piStack_44 = (int *)0x0;
      FUN_004028d0();
      uStack_4 = 0xffffffff;
      uStack_4c = 0x5cdb6a;
      FUN_005c3440();
      piStack_3c = (int *)0x5cdb71;
      FUN_0058ced0();
      puStack_34 = &DAT_00a36430;
      uStack_38 = 0xfb4;
      piStack_44 = (int *)0x0;
      uStack_48 = DAT_00b38fb0;
      pcStack_40 = (char *)0x0;
      piStack_3c = (int *)0x0;
      uStack_4c = 0x5cdb9a;
      FUN_004028d0();
      uStack_4 = 6;
LAB_005cdba2:
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_50 = DAT_00b38f78;
      piStack_44 = (int *)0x0;
      FUN_004028d0();
      uStack_4 = 0xffffffff;
      uStack_4c = 0x5cdbcc;
      FUN_005c3440();
      piStack_3c = (int *)0x5cdbd3;
      FUN_0058ced0();
LAB_005cdbd3:
      puStack_34 = (undefined2 *)0x0;
      uStack_38 = 0x5cdbdb;
      FUN_005c9980();
      puStack_34 = (undefined2 *)0x5cdbe2;
      FUN_005c6ea0();
      puStack_34 = (undefined2 *)0x1;
      uStack_38 = 0x5cdbe9;
      FUN_005c7070();
      if ((char)uStack_1a == uStack_1a._1_1_) {
        puStack_34 = (undefined2 *)0x5cdecf;
        FUN_005c2f20();
      }
      else {
        piVar3 = *(int **)(DAT_00b333c4[0xf] + 0x1c);
        puStack_34 = (undefined2 *)0x0;
        uStack_38 = 0x5cdc0c;
        TESObjectREFR_Set3D();
        if ((char)uStack_1a == '\0') {
          puStack_34 = (undefined2 *)DAT_00b38b70;
          uStack_38 = 0x5cde57;
          (**(code **)(*(int *)(puStack_18 + 0xac) + 0x18))();
        }
        else {
          puStack_34 = (undefined2 *)DAT_00b38b68;
          uStack_38 = 0x5cdc2e;
          (**(code **)(*(int *)(puStack_18 + 0xac) + 0x18))();
        }
        DAT_00b33d80 = 1;
        uStack_38 = 0x5cde69;
        piVar2 = (int *)FUN_00659f30();
        uStack_38 = 1;
        pcStack_40 = (char *)0x5cde7b;
        piStack_3c = piVar2;
        (**(code **)(*piVar3 + 0x84))();
        pcStack_40 = "Player";
        DAT_00b33d80 = 0;
        piStack_44 = (int *)0x5cde8d;
        FUN_006ff420();
        pcStack_40 = "Camera01";
        piStack_44 = (int *)0x5cde9b;
        DAT_00b3bb10 = (**(code **)(*piVar2 + 0x58))();
        piStack_44 = (int *)0x5cdeb0;
        (**(code **)(*DAT_00b333c4 + 0x148))();
        piStack_44 = (int *)0x5cdeb5;
        FUN_005c2f20();
        piStack_44 = DAT_00b333c4;
        uStack_48 = 0x5cdec8;
        (**(code **)(*(int *)DAT_00b333c4[0x16] + 900))();
      }
      puStack_34 = (undefined2 *)0x0;
      uStack_38 = 0x5cded7;
      FUN_005c7ba0();
      *unaff_FS_OFFSET = local_c;
      return;
    }
    if (iVar4 == iVar1) {
      if (piVar3 != (int *)0x0) {
        iVar4 = *piVar3;
        if (iVar4 == 0) {
          puStack_34 = DAT_00b38b78;
          uStack_38 = 0xfb4;
          piStack_44 = (int *)0x0;
          uStack_48 = DAT_00b38fb0;
          pcStack_40 = (char *)0x0;
          piStack_3c = (int *)0x0;
          uStack_4c = 0x5cde3d;
          FUN_004028d0();
          uStack_4 = 4;
          goto LAB_005cdba2;
        }
        puStack_34 = (undefined2 *)0x0;
        uStack_38 = 0x5cdc55;
        iVar1 = FUN_0052bdb0();
        puStack_34 = *(undefined2 **)(iVar4 + 0x1c);
        uStack_1a = (undefined2)(((uint)(iVar1 != 0) << 0x18) >> 0x10);
        if (puStack_34 == (undefined2 *)0x0) {
          puStack_34 = (undefined2 *)&DAT_00a2f7ec;
        }
        uStack_38 = 0xfb4;
        piStack_44 = (int *)0x0;
        uStack_48 = DAT_00b38f78;
        pcStack_40 = (char *)0x0;
        piStack_3c = (int *)0x0;
        uStack_4c = 0x5cdc8d;
        FUN_004028d0();
        uStack_4c = 0;
        uStack_50 = DAT_00b38f70;
        uStack_4 = 1;
        uStack_48 = 0;
        piStack_44 = (int *)0x0;
        FUN_004028d0();
        uStack_4 = 0xffffffff;
        uStack_4c = 0x5cdcbf;
        FUN_005c3440();
        piStack_3c = (int *)0x5cdcc6;
        FUN_0058ced0();
        puStack_34 = *(undefined2 **)(iVar4 + 0x1c);
        if (puStack_34 == (undefined2 *)0x0) {
          puStack_34 = (undefined2 *)&DAT_00a2f7ec;
        }
        uStack_38 = 0xfb4;
        piStack_44 = (int *)0x0;
        uStack_48 = DAT_00b38f78;
        pcStack_40 = (char *)0x0;
        piStack_3c = (int *)0x0;
        uStack_4c = 0x5cdcf7;
        FUN_004028d0();
        uStack_4c = 0;
        uStack_50 = DAT_00b38f78;
        uStack_4 = 2;
        uStack_48 = 0;
        piStack_44 = (int *)0x0;
        FUN_004028d0();
        uStack_4 = 0xffffffff;
        uStack_4c = 0x5cdd29;
        FUN_005c3440();
        piStack_3c = (int *)0x5cdd30;
        FUN_0058ced0();
        puStack_34 = (undefined2 *)0x5cdd3b;
        FUN_00662710();
        puStack_34 = (undefined2 *)0x0;
        uStack_38 = 0x5cdd4a;
        FUN_006a2190();
        puStack_34 = (undefined2 *)0x5cdd55;
        FUN_005e4b00();
        *(int *)(puStack_18 + 0xe8) = iVar4;
        puStack_34 = (undefined2 *)0x43534544;
        uStack_38 = 0;
        piStack_3c = (int *)0x5cdd72;
        iVar1 = (**(code **)(*(int *)(iVar4 + 0x24) + 0x10))();
        if (iVar1 != 0) {
          piStack_3c = (int *)0x43534544;
          pcStack_40 = (char *)0x0;
          piStack_44 = (int *)0x5cdd85;
          piStack_3c = (int *)(**(code **)(*(int *)(iVar4 + 0x24) + 0x10))();
          pcStack_40 = (char *)0xfb4;
          puStack_18 = (undefined1 *)&uStack_48;
          uStack_4c = 0;
          uStack_50 = DAT_00b38fb0;
          uStack_48 = 0;
          piStack_44 = (int *)0x0;
          FUN_004028d0();
          uStack_1a = (undefined2)((uint)&uStack_50 >> 0x10);
          local_c = 3;
          uStack_50 = 0;
          uStack_4c = 0;
          FUN_004028d0(DAT_00b38f78,0);
          local_c = -1;
          FUN_005c3440();
          piStack_44 = (int *)0x5cdde3;
          FUN_0058ced0();
        }
        piStack_3c = (int *)0x0;
        pcStack_40 = (char *)0x5cddf3;
        FUN_0052bdb0();
        piStack_3c = DAT_00b333c4;
        pcStack_40 = (char *)0x5cde0d;
        (**(code **)(*(int *)DAT_00b333c4[0x16] + 900))();
        goto LAB_005cdbd3;
      }
      goto LAB_005cdb0d;
    }
    if (((piVar3 != (int *)0x0) && (*piVar3 != 0)) && ((*(byte *)(*piVar3 + 0x70) & 1) != 0)) {
      iVar4 = iVar4 + 1;
    }
    if (iVar4 != iVar1) {
      piVar3 = (int *)piVar3[1];
    }
  } while( true );
}



void FUN_005cdef0(void)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  undefined1 uStack_18;
  undefined1 uStack_14;
  undefined1 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c1c20;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = (**(code **)(*DAT_00b333c4 + 0x170))();
  FUN_004028d0();
  uStack_4 = 0;
  FUN_004028d0(DAT_00b38f88,0);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  fVar5 = (float10)FUN_00588bd0();
  FUN_004028d0();
  uStack_4 = 1;
  FUN_004028d0(DAT_00b38f88,0);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  fVar6 = (float10)FUN_00588bd0();
  FUN_004028d0();
  uStack_4 = 2;
  FUN_004028d0(DAT_00b38f88,0);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  fVar7 = (float10)FUN_00588bd0();
  uStack_18 = (undefined1)(int)ROUND((float)fVar7 * 255.0);
  uStack_14 = (undefined1)(int)ROUND((float)fVar6 * 255.0);
  uStack_10 = (undefined1)(int)ROUND((float)fVar5 * 255.0);
  if ((uint)CONCAT21(CONCAT11(uStack_18,uStack_14),uStack_10) != *(uint *)(iVar2 + 0x1e8)) {
    FUN_005c5c30();
  }
  FUN_004028d0();
  uStack_4 = 3;
  FUN_004028d0(DAT_00b38f88,0);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  fVar1 = *(float *)(iVar2 + 0x1cc);
  fVar5 = (float10)FUN_00588bd0();
  if ((float10)fVar1 != fVar5) {
    FUN_005c62d0();
  }
  FUN_004028d0();
  uStack_4 = 4;
  FUN_004028d0(DAT_00b38f88,0);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  fVar5 = (float10)FUN_00588bd0();
  if ((float10)*(int *)(in_ECX + 0x88c) != fVar5) {
    FUN_005c5f00();
    FUN_004028d0();
    uStack_4 = 5;
    FUN_004028d0(DAT_00b38f88,0);
    uStack_4 = 0xffffffff;
    FUN_005c3440();
    FUN_00588bd0();
    uVar3 = FUN_009828c0();
    *(undefined4 *)(in_ECX + 0x88c) = uVar3;
  }
  FUN_004028d0();
  uStack_4 = 6;
  FUN_004028d0(DAT_00b38f78,0);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_00588bd0();
  iVar2 = FUN_009828c0();
  if (iVar2 != *(int *)(in_ECX + 0x86c)) {
    FUN_005cda30();
    *(int *)(in_ECX + 0x86c) = iVar2;
  }
  FUN_004028d0();
  uStack_4 = 7;
  FUN_004028d0(DAT_00b38f78,0);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_00588bd0();
  uVar4 = FUN_009828c0();
  if (uVar4 != *(byte *)(in_ECX + 0x868)) {
    FUN_005c9770();
    *(bool *)(in_ECX + 0x868) = 0 < (int)uVar4;
  }
  FUN_004028d0();
  uStack_4 = 8;
  FUN_004028d0(DAT_00b38f70,0);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  fVar5 = (float10)FUN_00588bd0();
  FUN_004028d0();
  uStack_4 = 9;
  FUN_004028d0(DAT_00b38f70,0);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  fVar6 = (float10)FUN_00588bd0();
  if ((*(float *)(in_ECX + 0x880) != (float)fVar5) || (*(float *)(in_ECX + 0x884) != (float)fVar6))
  {
    *(float *)(in_ECX + 0x880) = (float)fVar5;
    *(float *)(in_ECX + 0x884) = (float)fVar6;
    FUN_005c50a0();
    FUN_005c7070();
    FUN_005c2f20();
  }
  FUN_004028d0();
  uStack_4 = 10;
  FUN_004028d0(DAT_00b38f70,0);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_00588bd0();
  iVar2 = FUN_009828c0();
  if (iVar2 != *(int *)(in_ECX + 0x87c)) {
    *(int *)(in_ECX + 0x87c) = iVar2;
    FUN_005c9980();
  }
  FUN_004028d0();
  uStack_4 = 0xb;
  FUN_004028d0(DAT_00b38f88,0);
  uStack_4 = 0xffffffff;
  FUN_005c3440();
  FUN_00588bd0();
  iVar2 = FUN_009828c0();
  if (iVar2 != *(int *)(in_ECX + 0x870)) {
    *(int *)(in_ECX + 0x870) = iVar2;
    FUN_005c5b00();
  }
  FUN_005c9ba0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005ce680(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[0xf] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xb] = 0;
  in_ECX[10] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x13] = 0;
  *in_ECX = &PTR_FUN_00a6d45c;
  *(undefined1 *)(in_ECX + 0x14) = 0xff;
  return;
}



void FUN_005ce6c0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c1fb8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6d45c;
  iVar1 = in_ECX[0x11];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_00484470(uVar2);
    FUN_00401f20(iVar1);
  }
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_005ce790(undefined4 param_1)

{
  int in_ECX;
  
  switch(param_1) {
  case 1:
    return *(undefined4 *)(in_ECX + 0x28);
  default:
    return 0;
  case 3:
    return *(undefined4 *)(in_ECX + 0x2c);
  case 4:
    return *(undefined4 *)(in_ECX + 0x30);
  case 5:
    return *(undefined4 *)(in_ECX + 0x34);
  case 6:
    return *(undefined4 *)(in_ECX + 0x38);
  }
}



void FUN_005ce820(byte param_1)

{
  FUN_005ce6c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_005ce840(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  
  puVar1 = (undefined4 *)FUN_00589b70(0x419);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  FUN_00582160(0,1);
  fVar6 = (float10)thunk_FUN_00584980();
  uVar2 = FUN_00590420("Data\\Menus\\recharge_menu.xml");
  piVar3 = (int *)FUN_005898f0();
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  iVar4 = (**(code **)(*piVar3 + 0x34))();
  if (iVar4 != 0x419) {
    if (piVar3[1] == 0) {
      return 0;
    }
    (**(code **)*piVar3)(1);
    return 0;
  }
  uVar5 = FUN_009832e6(uVar2,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar5);
  iVar4 = FUN_009832e6(piVar3,0,&PTR_PTR_00b0a018,&PTR_PTR_00b14504,0);
  if ((((*(int *)(iVar4 + 0x28) != 0) && (*(int *)(iVar4 + 0x2c) != 0)) &&
      (*(int *)(iVar4 + 0x30) != 0)) &&
     ((*(int *)(iVar4 + 0x34) != 0 && (*(int *)(iVar4 + 0x38) != 0)))) {
    fVar7 = (float10)FUN_00588bd0(0xfa5);
    if ((fVar7 == (float10)6006.0) ||
       (fVar7 = (float10)FUN_00588bd0(0xfa5), fVar7 == (float10)102.0)) {
      FUN_0058ceb0(0xfab,(float)fVar6);
    }
    FUN_0058ceb0(0xfb7,0xc97423f0);
    FUN_0058ceb0(0xfb7,0);
    FUN_00585190(0);
    return uVar2;
  }
  FUN_004a7a60("Recharge Menu Creation Failed... Are your menu and art resources up to date?");
  return 0;
}



void FUN_005ce9b0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00589b70(0x419);
  if ((iVar1 == 0) || (iVar1 = FUN_005898f0(), iVar1 == 0)) {
    return;
  }
  FUN_0058ceb0(0x1772,0x40000000);
  FUN_00584740();
  FUN_006ac3d0();
  if ((*(int *)(iVar1 + 0x44) != 0) && (iVar2 = FUN_00578fe0(), iVar2 == 1)) {
    FUN_0057cac0();
    FUN_0057bd80();
    return;
  }
  if ((*(int *)(iVar1 + 0x48) != 0) && (iVar1 = FUN_00589b70(0x3f1), iVar1 != 0)) {
    FUN_005898f0();
    FUN_0058fba0(0);
    FUN_0058ceb0(0xfa1,0x40000000);
    FUN_005aadc0();
    FUN_0059e1d0(1);
  }
  FUN_0057bd80();
  return;
}



void FUN_005cea80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  undefined4 uVar4;
  
  if (in_ECX[0xc] != 0) {
    FUN_00588bd0(0xfb5);
    iVar1 = FUN_009828c0();
    FUN_00582160(0,1);
    iVar2 = FUN_009828c0();
    iVar2 = (int)((ulonglong)((longlong)iVar2 * 0x77777777) >> 0x20) - iVar2;
    FUN_0058ceb0(0xfb7,(float)((iVar2 >> 6) - (iVar2 >> 0x1f)));
    FUN_0058ceb0(0xfb7,0);
    fVar3 = (float10)FUN_00588bd0(0xfb5);
    if ((float10)iVar1 != fVar3) {
      (**(code **)(*in_ECX + 0x14))(param_1,param_2);
      uVar4 = 0;
      FUN_00582160(0,1,0);
      FUN_0057d730(uVar4);
    }
  }
  return;
}



void FUN_005ceb70(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (param_1 != 5) {
    return;
  }
  FUN_00582160(0,1);
  FUN_00588bd0(0xfb0);
  FUN_00588bd0(0xfaf);
  FUN_0057d7f0();
  FUN_0057d7f0();
  iVar1 = FUN_009828c0();
  fVar2 = (float10)FUN_00588cf0();
  fVar3 = (float10)FUN_00588bd0(0xfca);
  if ((float10)0.0 <= (float10)(double)((float10)iVar1 - fVar2) / fVar3) {
    FUN_0057d7f0();
    FUN_0057d7f0();
    iVar1 = FUN_009828c0();
    fVar2 = (float10)FUN_00588cf0();
    fVar3 = (float10)FUN_00588bd0(0xfca);
    if ((float10)1 <= (float10)(double)((float10)iVar1 - fVar2) / fVar3) goto LAB_005ced01;
  }
  FUN_0057d7f0();
  FUN_0057d7f0();
  iVar1 = FUN_009828c0();
  fVar2 = (float10)FUN_00588cf0();
  fVar3 = (float10)FUN_00588bd0(0xfca);
  if ((float10)0 <= (float10)(double)((float10)iVar1 - fVar2) / fVar3) {
    FUN_00593020();
    FUN_00588cf0();
    FUN_00588bd0(0xfca);
  }
LAB_005ced01:
  FUN_0058ceb0(0xfb7,0xc97423f0);
  iVar1 = FUN_009828c0();
  FUN_0058ceb0(0xfb7,(float)iVar1);
  FUN_0058ceb0(0xfb7,0);
  return;
}



void FUN_005ced80(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c1c48;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6d51c;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a6d49c;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005cedf0(byte param_1)

{
  FUN_005ced80();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_005cee10(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined4 local_118;
  undefined2 local_114;
  undefined2 local_112;
  char local_110 [256];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c090b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_118;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffed8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_118 = 0;
  local_114 = 0;
  local_112 = 0;
  FUN_004028d0(param_1,0);
  local_4 = 0;
  iVar4 = FUN_00585410(*(undefined4 *)(in_ECX + 0x38),"recharge_item_template",0);
  if (iVar4 != 0) {
    FUN_0058ced0(0xfaf,param_2);
    iVar5 = 0;
    do {
      pcVar1 = local_110 + iVar5;
      cVar2 = pcVar1[param_2 - (int)local_110];
      *pcVar1 = cVar2;
      if (cVar2 == ' ') {
        *pcVar1 = '_';
      }
    } while ((*pcVar1 != '\0') && (iVar5 = iVar5 + 1, iVar5 < 0x100));
    local_110[0xff] = 0;
    FUN_004028d0(local_110,0);
    FUN_0058ced0(0xfb1,local_118);
    FUN_0058ceb0(0xfae,(float)param_3);
    FUN_0058ceb0(0xfa8,(float)param_4);
    *(int *)(in_ECX + 0x10) = iVar4;
  }
  FUN_00401f20(local_118,uVar3);
  *unaff_FS_OFFSET = local_c;
  return iVar4;
}



void FUN_005cef60(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c08d8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_14 = 0;
  local_10 = 0;
  local_e = 0;
  local_4 = 0;
  uVar2 = FUN_005e4420(uVar1);
  FUN_00402e30(&local_14,&DAT_00a2f860,uVar2);
  FUN_0058ced0(0xfb0,local_14);
  if (param_1 == 0) {
    FUN_004028d0(&DAT_00a3a0e4,0);
  }
  else {
    FUN_00402e30(&local_14,&DAT_00a2f860,param_1);
  }
  uVar2 = local_14;
  FUN_0058ced0(0xfb2,local_14);
  FUN_00401f20(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005cf030(char param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int in_ECX;
  uchar *puVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  int local_154;
  undefined **local_150;
  undefined4 *local_14c;
  undefined4 *local_148;
  int local_144;
  uchar *local_140;
  undefined4 *local_13c;
  int *local_138;
  int local_134;
  undefined4 local_130;
  undefined2 local_12c;
  undefined2 local_12a;
  undefined4 local_128;
  undefined2 local_124;
  undefined2 local_122;
  int *local_120;
  int local_11c;
  int local_118;
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c1c9c;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_154;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffe9c;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b333c4 != 0) {
    local_11c = *(int *)(in_ECX + 0x38);
    local_134 = in_ECX;
    local_138 = (int *)FUN_004d8950(0);
    local_144 = 0;
    local_14c = (undefined4 *)0x0;
    local_148 = (undefined4 *)0x0;
    local_150 = &PTR_FUN_00a6d52c;
    local_4 = 0;
    local_154 = 0;
    if (0 < (int)local_138) {
      do {
        iVar3 = FUN_004d88f0(local_154,0);
        if (iVar3 == 0) {
          iVar4 = 0;
LAB_005cf103:
          puVar10 = (uchar *)0xffff;
        }
        else {
          iVar4 = FUN_009832e6(*(undefined4 *)(iVar3 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0,
                               uVar2);
          if (iVar4 == 0) goto LAB_005cf103;
          puVar10 = (uchar *)(uint)*(ushort *)(iVar4 + 8);
        }
        if ((((iVar3 != 0) && (*(int *)(local_134 + 0x44) != 0)) &&
            (*(int *)(iVar3 + 8) == *(int *)(*(int *)(local_134 + 0x44) + 8))) &&
           (fVar11 = (float10)FUN_004849c0(), (float10)0.0 < fVar11)) {
          local_140 = (uchar *)FUN_004b2460();
          FUN_0058ceb0(0xfb4,(float)(int)local_140);
        }
        if ((((iVar4 == 0) || (iVar8 = *(int *)(iVar3 + 8), *(char *)(iVar8 + 4) == '\x15')) ||
            ((*(char *)(iVar8 + 4) == '\x16' ||
             ((*(char *)(iVar8 + 4) == '\x14' || (*(int *)(iVar4 + 4) == 0)))))) ||
           (fVar11 = (float10)FUN_004849c0(), local_140 = puVar10,
           (float10)(int)puVar10 < fVar11 != ((float10)(int)puVar10 == fVar11))) {
          if (iVar3 != 0) {
            FUN_00484470();
            FUN_00401f20(iVar3);
          }
          iVar3 = 0;
        }
        puVar9 = local_14c;
        local_13c = (undefined4 *)0x0;
        if (iVar3 != 0) {
          local_13c = (undefined4 *)FUN_00485150();
        }
        do {
          do {
            puVar1 = puVar9;
            if (puVar1 == (undefined4 *)0x0) {
              if (iVar3 == 0) goto LAB_005cf2f9;
              piVar5 = (int *)FUN_00401f00(8);
              if (piVar5 == (int *)0x0) {
                piVar5 = (int *)0x0;
              }
              else {
                *piVar5 = iVar3;
                piVar5[1] = local_154;
              }
              puVar6 = (undefined4 *)(*(code *)local_150[1])();
              puVar6[2] = piVar5;
              *puVar6 = 0;
              puVar6[1] = local_148;
              puVar9 = puVar6;
              if (local_148 != (undefined4 *)0x0) {
                *local_148 = puVar6;
                puVar9 = local_14c;
              }
              goto LAB_005cf2f4;
            }
            if (iVar3 == 0) goto LAB_005cf2f9;
            puVar9 = (undefined4 *)*puVar1;
            iVar4 = FUN_00485150();
            if (iVar4 < (int)local_13c) {
              piVar5 = (int *)FUN_00401f00(8);
              if (piVar5 == (int *)0x0) {
                piVar5 = (int *)0x0;
              }
              else {
                *piVar5 = iVar3;
                piVar5[1] = local_154;
              }
              puVar9 = (undefined4 *)(*(code *)local_150[1])();
              goto LAB_005cf266;
            }
          } while ((undefined4 *)iVar4 != local_13c);
          local_140 = (uchar *)FUN_00488df0();
          puVar10 = (uchar *)FUN_00488df0();
          iVar4 = __mbsicmp(puVar10,local_140);
        } while (0 < iVar4);
        piVar5 = (int *)FUN_00401f00(8);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
          puVar9 = (undefined4 *)(*(code *)local_150[1])();
        }
        else {
          piVar5[1] = local_154;
          *piVar5 = iVar3;
          puVar9 = (undefined4 *)(*(code *)local_150[1])();
        }
LAB_005cf266:
        puVar9[2] = piVar5;
        *puVar9 = puVar1;
        puVar9[1] = puVar1[1];
        puVar6 = local_148;
        if ((undefined4 *)puVar1[1] == (undefined4 *)0x0) {
          puVar1[1] = puVar9;
        }
        else {
          *(undefined4 *)puVar1[1] = puVar9;
          puVar1[1] = puVar9;
          puVar9 = local_14c;
        }
LAB_005cf2f4:
        local_148 = puVar6;
        local_14c = puVar9;
        local_144 = local_144 + 1;
LAB_005cf2f9:
        local_154 = local_154 + 1;
      } while (local_154 < (int)local_138);
    }
    if (param_1 != '\0') {
      *(undefined4 *)(local_134 + 0x3c) = 0;
      FUN_0058ceb0(0xfa1,0x3f800000);
    }
    puVar9 = *(undefined4 **)(local_11c + 0x34);
    while (puVar9 != (undefined4 *)0x0) {
      puVar9 = (undefined4 *)*puVar9;
      FUN_0058ceb0(0xfae,0xc2c60000);
    }
    local_154 = 0;
    local_118 = 0;
    local_13c = local_148;
    while (local_13c != (undefined4 *)0x0) {
      local_138 = (int *)local_13c[2];
      local_13c = (undefined4 *)local_13c[1];
      iVar3 = *local_138;
      local_140 = (uchar *)local_138[1];
      iVar4 = FUN_00485150();
      if (iVar4 != local_118) {
        local_118 = iVar4;
      }
      uVar7 = FUN_004851b0(DAT_00b333c4);
      _sprintf(local_114,"%s\\%s","Icons",uVar7);
      puVar9 = *(undefined4 **)(local_11c + 0x34);
      do {
        do {
          if (puVar9 == (undefined4 *)0x0) {
            iVar3 = FUN_009832e6(*(undefined4 *)(iVar3 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0)
            ;
            if (iVar3 == 0) {
              uVar2 = 0x7fffffff;
            }
            else {
              uVar2 = (uint)*(ushort *)(iVar3 + 8);
            }
            iVar3 = local_154 + 0x33;
            iVar4 = local_154;
            uVar7 = FUN_00488df0(local_154,iVar3);
            FUN_005cee10(local_114,uVar7,iVar4,iVar3);
            FUN_0058ceb0(0xfb9,(float)(int)local_140);
            local_128 = 0;
            local_124 = 0;
            local_122 = 0;
            local_4._0_1_ = 2;
            FUN_004849c0(uVar2);
            uVar7 = FUN_009828c0();
            FUN_00402e30(&local_128,"%d/%d",uVar7);
            uVar7 = local_128;
            FUN_0058ced0(0xfb0,local_128);
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00401f20(uVar7);
            local_128 = 0;
            local_122 = 0;
            local_124 = 0;
            goto LAB_005cf663;
          }
          iVar4 = puVar9[2];
          puVar9 = (undefined4 *)*puVar9;
          iVar8 = FUN_00588c10(0xfaf);
        } while (((iVar8 == 0) || (iVar8 = FUN_00488df0(), iVar8 == 0)) ||
                (fVar11 = (float10)FUN_00588bd0(0xfae), fVar11 != (float10)-99.0));
        local_120 = (int *)FUN_00488df0();
        puVar10 = (uchar *)FUN_00588c10(0xfaf);
        iVar8 = __mbscmp(puVar10,(uchar *)local_120);
      } while (iVar8 != 0);
      iVar3 = FUN_009832e6(*(undefined4 *)(iVar3 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
      if (iVar3 == 0) {
        uVar2 = 0x7fffffff;
      }
      else {
        uVar2 = (uint)*(ushort *)(iVar3 + 8);
      }
      uVar7 = FUN_00488df0();
      FUN_0058ced0(0xfaf,uVar7);
      FUN_0058ced0(0xfb1,local_114);
      FUN_0058ceb0(0xfb9,(float)(int)local_140);
      FUN_0058ceb0(0xfae,(float)local_154);
      local_130 = 0;
      local_12c = 0;
      local_12a = 0;
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004849c0(uVar2);
      uVar7 = FUN_009828c0();
      FUN_00402e30(&local_130,"%d/%d",uVar7);
      uVar7 = local_130;
      FUN_0058ced0(0xfb0,local_130);
      piVar5 = *(int **)(*(int *)(iVar4 + 0x10) + 0x34);
      do {
        local_120 = piVar5;
        if (local_120 == (int *)0x0) {
          local_120 = (int *)0x0;
          break;
        }
        piVar5 = (int *)*local_120;
      } while (iVar4 != local_120[2]);
      if (local_120 != (int *)0x0) {
        FUN_007aa860(&local_120);
      }
      iVar3 = *(int *)(iVar4 + 0x10);
      puVar9 = (undefined4 *)(**(code **)(*(int *)(iVar3 + 0x30) + 4))();
      puVar9[2] = iVar4;
      puVar9[1] = 0;
      *puVar9 = *(undefined4 *)(iVar3 + 0x34);
      if (*(int *)(iVar3 + 0x34) == 0) {
        *(undefined4 **)(iVar3 + 0x38) = puVar9;
      }
      else {
        *(undefined4 **)(*(int *)(iVar3 + 0x34) + 4) = puVar9;
      }
      *(int *)(iVar3 + 0x3c) = *(int *)(iVar3 + 0x3c) + 1;
      *(undefined4 **)(iVar3 + 0x34) = puVar9;
      local_4 = local_4 & 0xffffff00;
      FUN_00401f20(uVar7);
      local_130 = 0;
      local_12a = 0;
      local_12c = 0;
LAB_005cf663:
      local_154 = local_154 + 1;
    }
    puVar9 = *(undefined4 **)(local_11c + 0x34);
    local_13c = (undefined4 *)0x0;
    while (puVar1 = local_14c, puVar9 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar9[2];
      puVar9 = (undefined4 *)*puVar9;
      fVar11 = (float10)FUN_00588bd0(0xfae);
      if ((fVar11 == (float10)-99.0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    while (local_144 != 0) {
      local_14c = (undefined4 *)*puVar1;
      if (local_14c == (undefined4 *)0x0) {
        local_148 = (undefined4 *)0x0;
      }
      else {
        local_14c[1] = 0;
      }
      piVar5 = (int *)puVar1[2];
      (*(code *)local_150[2])(puVar1);
      local_144 = local_144 + -1;
      puVar1 = local_14c;
      if (piVar5 != (int *)0x0) {
        iVar3 = *piVar5;
        if (iVar3 != 0) {
          FUN_00484470();
          FUN_00401f20(iVar3);
        }
        FUN_00401f20(piVar5);
        puVar1 = local_14c;
      }
    }
    local_150 = &PTR_FUN_00a6d51c;
    local_4 = 3;
    local_144 = 0;
    local_14c = puVar1;
    while (puVar1 != (undefined4 *)0x0) {
      puVar9 = (undefined4 *)*puVar1;
      (*(code *)local_150[2])(puVar1);
      puVar1 = puVar9;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005cf980(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x50) = 2;
  FUN_0057bd80();
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  if (*(int *)(in_ECX + 0x48) != 0) {
    FUN_005cef60(0);
  }
  return;
}



int FUN_005cfb50(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int *unaff_FS_OFFSET;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c1ce0;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  iVar2 = FUN_005ce840(uVar1);
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b14504,0);
    iVar4 = FUN_009832e6(uVar3);
  }
  iVar5 = FUN_004b2460();
  if (iVar5 == 0) {
    FUN_0060d020(1);
  }
  if (iVar4 != 0) {
    *(int *)(iVar4 + 0x44) = param_1;
    FUN_0058ceb0(0xfae,0);
    local_1c = 0;
    local_18 = 0;
    local_16 = 0;
    puVar6 = *(undefined1 **)(*(int *)(param_1 + 8) + 0x4c);
    local_4 = 0;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_00a2f7ec;
    }
    FUN_00402e30(&local_1c,"%s\\%s","Icons",puVar6);
    FUN_0058ced0(0xfaf,local_1c);
    uVar3 = FUN_00488df0();
    FUN_0058ced0(0xfb0,uVar3);
    local_14 = 0;
    local_10 = 0;
    local_e = 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar3 = FUN_00484bf0();
    uVar3 = FUN_004bc070(uVar3);
    *(undefined4 *)(iVar4 + 0x4c) = uVar3;
    FUN_00402e30(&local_14,"%d %s",uVar3,DAT_00b33498);
    uVar3 = local_14;
    FUN_0058ced0(0xfb2,local_14);
    FUN_005cf030(1);
    FUN_00585190(0);
    FUN_00401f20(uVar3);
    FUN_00401f20(local_1c);
  }
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



int FUN_005cfce0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_005ce840();
    if (iVar1 != 0) {
      uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b14504,0);
      iVar3 = FUN_009832e6(uVar2);
      if (iVar3 != 0) {
        *(int **)(iVar3 + 0x48) = param_1;
        FUN_006ac3d0();
        uVar2 = FUN_0052ed50(5,0xb);
        (**(code **)(*param_1 + 0xdc))(uVar2,DAT_00b333c4,1,1,0);
        FUN_0058ceb0(0xfae,0x3f800000);
        FUN_005cef60(0);
        FUN_005cf030(1);
        FUN_00585190(0);
      }
    }
    return iVar1;
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005cfd90(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int in_ECX;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int *unaff_FS_OFFSET;
  float10 fVar15;
  undefined4 uVar16;
  undefined4 *local_150;
  float local_14c;
  uint local_148;
  int local_144;
  int local_140;
  char acStack_13c [300];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c1d0e;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_150;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xfffffea0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_144 = param_2;
  if (param_1 == 3) {
    FUN_0057de50(2,uVar6);
    FUN_005ce9b0();
    goto LAB_005d026e;
  }
  if (param_1 < 0x33) goto LAB_005d026e;
  uVar16 = 0;
  local_140 = in_ECX;
  FUN_00588bd0(0xfb9);
  uVar7 = FUN_009828c0(uVar16);
  puVar8 = (undefined4 *)FUN_004d88f0(uVar7,uVar16);
  if (puVar8 == (undefined4 *)0x0) goto LAB_005d026e;
  iVar11 = *(int *)(*(int *)(in_ECX + 0x38) + 0x38);
  iVar14 = 0;
  iVar10 = 0;
  local_150 = puVar8;
  if (iVar11 != 0) {
    do {
      if (iVar14 == local_144) break;
      if ((iVar14 != 0) && (fVar15 = (float10)FUN_00588bd0(0xfa1), fVar15 != (float10)1.0)) {
        iVar10 = iVar14;
      }
      iVar14 = *(int *)(iVar11 + 8);
      iVar11 = *(int *)(iVar11 + 4);
    } while (iVar11 != 0);
    if (iVar14 != 0) {
      if (iVar11 != 0) {
        do {
          iVar10 = *(int *)(iVar11 + 8);
          iVar11 = *(int *)(iVar11 + 4);
          if (iVar11 == 0) break;
          fVar15 = (float10)FUN_00588bd0(0xfa1);
        } while (fVar15 == (float10)1.0);
        if ((iVar10 == 0) || (fVar15 = (float10)FUN_00588bd0(0xfa1), fVar15 == (float10)1.0))
        goto LAB_005cff11;
      }
      if (iVar10 != 0) {
        FUN_00582160(0,1);
        iVar14 = FUN_00582160(0,1);
        *(int *)(iVar14 + 0x8c) = *(int *)(iVar14 + 0x8c) + 1;
        fVar2 = (float)*(int *)(iVar14 + 0x8c);
        if (*(int *)(iVar14 + 0x8c) < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        FUN_0058ceb0(0xff0,fVar2);
      }
    }
  }
LAB_005cff11:
  if (*(int *)(local_140 + 0x44) == 0) {
    if (*(int *)(local_140 + 0x48) != 0) {
      iVar14 = FUN_009832e6(puVar8[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
      local_148 = 0x7fffffff;
      if (iVar14 != 0) {
        local_148 = (uint)*(ushort *)(iVar14 + 8);
      }
      fVar15 = (float10)FUN_004849c0();
      iVar14 = FUN_005483e0((float)(int)local_148,(float)fVar15);
      if (iVar14 < 2) {
        iVar14 = 1;
      }
      iVar10 = FUN_005e4420();
      if (iVar10 < iVar14) {
        FUN_00579c10(DAT_00b38db0,0,1,DAT_00b38cf0,0);
      }
      else {
        DAT_00b3b708 = local_144;
        DAT_00b3b70c = iVar14;
        _sprintf(acStack_13c,"%s %d %s?",DAT_00b38858,iVar14,DAT_00b38d20);
        FUN_00579c10(acStack_13c,&LAB_005cf9b0,1,DAT_00b38cf8,DAT_00b38d00,0);
      }
      FUN_0065dd20();
    }
  }
  else {
    sVar4 = FUN_0041e860();
    FUN_0041e6f0();
    puVar12 = (undefined4 *)0x0;
    iVar14 = FUN_009832e6(puVar8[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
    local_148 = 0x7fffffff;
    if (iVar14 != 0) {
      local_148 = (uint)*(ushort *)(iVar14 + 8);
    }
    local_14c = (float)FUN_00401f00(0x14);
    local_4 = 0;
    if (local_14c != 0.0) {
      puVar12 = (undefined4 *)FUN_00422ee0();
    }
    local_4 = 0xffffffff;
    puVar9 = (undefined4 *)FUN_00485e80(puVar8[2],1,0);
    puVar8 = *(undefined4 **)*local_150;
    sVar5 = FUN_0041e860();
    if (sVar5 == 1) {
      puVar13 = puVar8;
      if (puVar12 != (undefined4 *)0x0) {
        (**(code **)*puVar12)(1);
      }
    }
    else {
      FUN_00428920(*(undefined4 *)*local_150);
      FUN_004238a0(1);
      puVar13 = puVar12;
    }
    sVar5 = FUN_0041e860();
    if (1 < sVar5) {
      FUN_004238a0(sVar4 + -1);
    }
    fVar15 = (float10)FUN_004849c0();
    local_14c = (float)(fVar15 + (float10)*(int *)(local_140 + 0x4c));
    FUN_0041ee90(local_14c);
    local_14c = (float)(int)local_148;
    fVar15 = (float10)FUN_0041e8a0();
    if ((float10)local_14c < fVar15 == ((float10)local_14c == fVar15)) {
      FUN_00582160(0,1);
      uVar7 = FUN_005966f0(1);
      FUN_0057d300(0xff0,uVar7);
LAB_005d008c:
      if ((puVar13 != (undefined4 *)0x0) && (puVar13 != puVar8)) {
        for (piVar1 = (int *)*puVar9; (piVar1 != (int *)0x0 && (*piVar1 != 0));
            piVar1 = (int *)piVar1[1]) {
          cVar3 = FUN_0041e550(puVar13);
          if (cVar3 == '\0') {
            sVar4 = FUN_0041e860();
            FUN_004238a0(sVar4 + 1);
            goto LAB_005d00c2;
          }
        }
        FUN_00446cb0(puVar13);
      }
    }
    else {
      FUN_0041e160(0x2e);
      if (puVar13[1] != 0) goto LAB_005d008c;
      if (puVar13 == puVar8) {
        FUN_0065c620(puVar8);
      }
      (**(code **)*puVar13)(1);
    }
LAB_005d00c2:
    piVar1 = (int *)**(int **)(local_140 + 0x44);
    iVar14 = 0;
    if (piVar1 != (int *)0x0) {
      iVar14 = *piVar1;
    }
    iVar10 = (*(int **)(local_140 + 0x44))[2];
    if (iVar10 == DAT_00b35ee4) {
      if (iVar14 != 0) {
        FUN_0041f650();
      }
    }
    else {
      (**(code **)(*DAT_00b333c4 + 0x100))(iVar10,iVar14,1,0,0,0,0,0,1,0);
      FUN_005c1900();
    }
    FUN_0065dd20();
    FUN_0057de50(0x18);
    fVar15 = (float10)FUN_00588bd0(0xfb4);
    if (fVar15 <= (float10)1.0) {
      FUN_005ce9b0();
      puVar8 = local_150;
    }
    else {
      FUN_005cf030(0);
      puVar8 = local_150;
    }
  }
  FUN_00484470();
  FUN_00401f20(puVar8);
LAB_005d026e:
  *unaff_FS_OFFSET = local_c;
  return;
}


