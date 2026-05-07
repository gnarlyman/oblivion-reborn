
/* WARNING: Removing unreachable block (ram,0x005b0346) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005b0260(void)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  float unaff_ESI;
  undefined4 uVar7;
  undefined8 uVar6;
  
  iVar4 = 0;
  pcVar1 = (char *)(in_ECX + 0x95);
  iVar5 = 5;
  do {
    if (*pcVar1 == '\0') {
      iVar4 = iVar4 + 1;
    }
    pcVar1 = pcVar1 + 0x28;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar2 = (**(code **)(*DAT_00b333c4 + 0x284))(0x1e,iVar4);
  FUN_00548a60(_DAT_00b39498,_DAT_00b39490,_DAT_00b394a0,uVar2);
  uVar2 = *(undefined4 *)(in_ECX + 0x48);
  uVar7 = 0x1e;
  uVar3 = (**(code **)(*DAT_00b333c4 + 0x284))();
  FUN_0040fec0("odds %f, base %f, diff %f, player %i, lock %i",(double)unaff_ESI,
               (double)_DAT_00b39498,(double)_DAT_00b39490,uVar3,uVar7,uVar2);
  uVar2 = FUN_0047df80(0);
  DAT_00b3b3fc = FUN_0047df80(DAT_00b33ea0);
  FUN_0047df80(uVar2);
  FUN_0040fec0();
  uVar6 = 0;
  (**(code **)(*DAT_00b333c4 + 0x39c))();
  if ((float)((ulonglong)uVar6 >> 0x20) <= (float)uVar6) {
    return 0;
  }
  return 1;
}



void FUN_005b03b0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  float10 fVar4;
  
  if ((*(int *)(in_ECX + 0x178) != 0) &&
     (((*(int *)(*(int *)(in_ECX + 0x178) + 0x44) == 0 ||
       (iVar2 = FUN_005e0f00(DAT_00b35ecc), iVar2 != 0)) || (DAT_00b3b3f5 != '\0')))) {
    if ((*(char *)(in_ECX + 0x135) == '\0') ||
       (*(char *)(in_ECX + 0x10d) == '\0' ||
        (*(char *)(in_ECX + 0xe5) == '\0' ||
        (*(char *)(in_ECX + 0xbd) == '\0' || *(char *)(in_ECX + 0x95) == '\0')))) {
      *(undefined4 *)(in_ECX + 0x150) = 0;
    }
    else {
      iVar2 = FUN_009832e6(*(undefined4 *)(in_ECX + 0x144),0,&PTR_PTR_00b13240,&PTR_PTR_00b13df4,0);
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x44) == 0)) && (DAT_00b3b3f6 == '\0')) {
        FUN_00588bd0(0xfab);
        iVar2 = FUN_009828c0();
        FUN_0058ceb0(0xfab,(float)iVar2);
        DAT_00b3b3f4 = 0;
        DAT_00b3b3f6 = '\x01';
        FUN_00590740(&DAT_00a33bb4);
        FUN_0058fba0(0);
        FUN_004dbea0();
        FUN_005afd50("UILockSuccess");
        FUN_005afd50("DRSLockOpen");
        FUN_00583df0(0xff);
        *(undefined4 *)(in_ECX + 0x150) = 1;
        *(int *)(DAT_00b333c4 + 0x678) = *(int *)(DAT_00b333c4 + 0x678) + 1;
      }
    }
    iVar2 = FUN_009832e6(*(undefined4 *)(in_ECX + 0x144),0,&PTR_PTR_00b13240,&PTR_PTR_00b13df4,0);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x44) == 0)) && (DAT_00b3b3f6 != '\0')) {
      FUN_005af960();
      if (((*(char *)(in_ECX + 0x17c) != '\0') &&
          (iVar2 = FUN_00675bf0(DAT_00b333c4,*(undefined4 *)(in_ECX + 0x38),2), iVar2 != 0)) &&
         (piVar3 = (int *)FUN_00675740(iVar2,0), piVar3 != (int *)0x0)) {
        while (*piVar3 != 0) {
          fVar4 = (float10)FUN_004d7e90(DAT_00b333c4,0);
          if (fVar4 < (float10)400.0 != (fVar4 == (float10)400.0)) {
            return;
          }
          piVar1 = (int *)piVar3[1];
          if (piVar1 == (int *)0x0) {
            *piVar3 = 0;
          }
          else {
            piVar3[1] = piVar1[1];
            *piVar3 = *piVar1;
            FUN_00401f20(piVar1);
          }
        }
        FUN_004526e0();
        FUN_00401f20(piVar3);
      }
      *(undefined1 *)(DAT_00b333c4 + 300) = 1;
      FUN_004dd260(DAT_00b333c4,0,0,1);
      *(undefined1 *)(DAT_00b333c4 + 300) = 0;
    }
  }
  return;
}



void FUN_005b0620(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x178) != 0) {
    if ((*(int *)(*(int *)(in_ECX + 0x178) + 0x44) != 0) &&
       (iVar1 = FUN_005e0f00(DAT_00b35ecc), iVar1 == 0)) {
      return;
    }
    uVar2 = FUN_009828c0();
    iVar1 = FUN_005af190(uVar2);
    if ((*(float *)(in_ECX + 0x7c + iVar1 * 0x28) == 0.0) || (DAT_00b3b3f5 != '\0')) {
      iVar1 = FUN_005e0f00(DAT_00b35ecc);
      if (iVar1 == 0) {
        FUN_005afd50("UILockPickBreak");
        FUN_005afd50("UILockTumblerFall");
        (**(code **)(*DAT_00b333c4 + 0x100))(DAT_00b35ec8,0,1,0,0,0,0,0,1,1);
        *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + -1;
        FUN_0058ceb0(0xfb1,(float)*(int *)(in_ECX + 0x3c));
        *(undefined4 *)(in_ECX + 0x174) = 0;
      }
      else {
        FUN_005afd50("UILockTumblerFall");
      }
      if (*(int *)(in_ECX + 0x3c) < 1) {
        FUN_005afd50("DRSLockOpenFail");
        FUN_00583df0(0xff);
        FUN_005af960();
        FUN_00579c10(DAT_00b38c48,0,1,DAT_00b38cf0,0);
        DAT_00b333c4[0x19f] = DAT_00b333c4[0x19f] + 1;
        return;
      }
      if ((DAT_00b3b3f5 == '\0') && (iVar1 = FUN_005e0f00(DAT_00b35ecc), iVar1 == 0)) {
        FUN_0058ceb0(0xfae,0x40000000);
        FUN_0058fba0(0);
        *(undefined4 *)(in_ECX + 0x150) = 3;
        DAT_00b333c4[0x19f] = DAT_00b333c4[0x19f] + 1;
        DAT_00b3b3f5 = 0;
        return;
      }
      *(undefined4 *)(in_ECX + 0x150) = 0;
      DAT_00b3b3f5 = '\0';
    }
  }
  return;
}



void FUN_005b07e0(void)

{
  char cVar1;
  
  cVar1 = FUN_0057c140(0x3f6);
  if (cVar1 != '\0') {
    if (DAT_00b3b3f4 != '\0') {
      FUN_005afd50("DRSLockOpenFail");
      DAT_00b3b3f4 = '\0';
    }
    FUN_00583df0(0xff);
    FUN_005af960();
    return;
  }
  return;
}



void FUN_005b0830(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  int *piVar8;
  float local_c;
  int local_8;
  
  uVar5 = *(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x44);
  uVar7 = 100;
  if (uVar5 < 0x65) {
    uVar7 = uVar5;
  }
  piVar8 = (int *)(in_ECX + 0x80);
  local_8 = 5;
  do {
    if ((char)piVar8[5] == '\x01') {
      if (*(char *)((int)piVar8 + 0x15) == '\0') {
        if (*piVar8 == -1) {
          if (*(char *)((int)piVar8 + 0x16) == '\x01') {
            local_c = 47.0;
          }
          else {
            local_c = (float)(int)uVar7;
            if ((int)uVar7 < 0) {
              local_c = local_c + 4.2949673e+09;
            }
          }
          fVar3 = (float)piVar8[4] - (float)piVar8[3] * local_c;
          piVar8[4] = (int)fVar3;
          fVar2 = 47.0;
          if ((*(char *)((int)piVar8 + 0x16) != '\x01') &&
             (fVar2 = (float)(int)uVar7, (int)uVar7 < 0)) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          fVar1 = *(float *)(in_ECX + 0x78);
          *(undefined1 *)((int)piVar8 + 0x16) = 0;
          piVar8[-1] = (int)(fVar1 * fVar3 * fVar2 + (float)piVar8[-1]);
        }
        if ((float)piVar8[-1] <= *(float *)(in_ECX + 0x78)) {
          if ((float)piVar8[-1] <= 0.0) {
            if ((piVar8[8] != 0) && (cVar4 = FUN_006b7260(), cVar4 != '\0')) {
              FUN_006b7240();
            }
            piVar8[-1] = 0;
            *(undefined1 *)(piVar8 + 5) = 0;
            piVar8[4] = 0;
          }
        }
        else {
          if (*piVar8 == -1) {
            piVar8[4] = 0;
            *piVar8 = DAT_00b33ea0;
            FUN_005afd50("UILockClickNow");
          }
          if ((uint)piVar8[1] < (uint)(DAT_00b33ea0 - *piVar8)) {
            iVar6 = *(int *)(in_ECX + 0x78);
            *piVar8 = -1;
            piVar8[-1] = iVar6;
          }
        }
      }
      else {
        fVar2 = (float)(int)uVar7;
        if ((int)uVar7 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        fVar2 = fVar2 * (float)piVar8[2] + (float)piVar8[-1];
        piVar8[-1] = (int)fVar2;
        if (*(float *)(in_ECX + 0x78) < fVar2) {
          piVar8[-1] = *(int *)(in_ECX + 0x78);
        }
      }
    }
    else if (*(char *)((int)piVar8 + 0x15) == '\0') {
      piVar8[4] = 0;
    }
    iVar6 = FUN_009832e6(piVar8[7],0,&PTR_PTR_00b13240,&PTR_PTR_00b13df4,0);
    if (iVar6 != 0) {
      *(int *)(iVar6 + 0x58) = piVar8[-1];
    }
    piVar8 = piVar8 + 10;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}



void FUN_005b0e70(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  float10 extraout_ST0;
  float10 fVar7;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 fVar8;
  bool local_15;
  uint local_14;
  
  FUN_00582160(0,1);
  FUN_0057d7a0();
  iVar3 = FUN_009828c0();
  FUN_00588bd0(0xfad);
  iVar4 = FUN_009828c0();
  uVar6 = iVar3 - iVar4;
  FUN_0057d7f0();
  FUN_0057d7f0();
  iVar3 = FUN_009828c0();
  FUN_00588bd0(0xfac);
  iVar4 = FUN_009828c0();
  FUN_00583df0((iVar3 - iVar4 < 0x28a) + -1);
  *(undefined4 *)(in_ECX + 0x168) = 0xffffffff;
  FUN_00588bd0(0xfcb);
  local_14 = FUN_009828c0();
  local_15 = *(char *)(in_ECX + 0xbc) != '\0' || *(char *)(in_ECX + 0x94) != '\0';
  if (*(char *)(in_ECX + 0xe4) != '\0') {
    local_15 = true;
  }
  if (*(char *)(in_ECX + 0x10c) != '\0') {
    local_15 = true;
  }
  if (*(char *)(in_ECX + 0x134) != '\0') {
    local_15 = true;
  }
  if (((int)(((int)uVar6 < 1) - 1 & uVar6) < (int)local_14) && (local_14 = uVar6, (int)uVar6 < 1)) {
    local_14 = 0;
  }
  fVar7 = (float10)0;
  iVar3 = 0;
  do {
    iVar4 = iVar3 + 1;
    fVar8 = fVar7;
    iVar5 = FUN_009828c0();
    fVar7 = extraout_ST1;
    if (((int)local_14 < iVar5) ||
       (iVar5 = FUN_009828c0(), fVar7 = extraout_ST0, fVar8 = extraout_ST1_00,
       iVar5 <= (int)local_14)) {
      if (iVar3 == 0) {
        if ((int)local_14 < 1) goto LAB_005b1002;
      }
      else if ((iVar3 == 4) &&
              (fVar8 * (float10)5.0 < (float10)(int)local_14 !=
               (fVar8 * (float10)5.0 == (float10)(int)local_14))) goto LAB_005b1002;
    }
    else {
LAB_005b1002:
      if (!local_15) {
        *(int *)(in_ECX + 0x168) = iVar3;
      }
      if ((((fVar7 < (float10)*(float *)(in_ECX + 0x14c)) &&
           (iVar5 = *(int *)(in_ECX + 0x160), -1 < iVar5)) &&
          (iVar1 = in_ECX + iVar5 * 0x28, fVar7 == (float10)*(float *)(in_ECX + 0x90 + iVar5 * 0x28)
          )) && ((*(char *)(iVar1 + 0x94) == '\0' && (*(char *)(iVar1 + 0x95) == '\0')))) {
        FUN_005afd50("UILockTumblerNudge");
        FUN_005afda0(*(undefined4 *)(in_ECX + 0x160));
        if ((*(int *)(in_ECX + (*(int *)(in_ECX + 0x160) + 4) * 0x28) != 0) &&
           (cVar2 = FUN_006b7260(), cVar2 == '\0')) {
          FUN_006b7190(1);
        }
        *(undefined4 *)(in_ECX + *(int *)(in_ECX + 0x160) * 0x28 + 0x90) =
             *(undefined4 *)(in_ECX + 0x88 + *(int *)(in_ECX + 0x160) * 0x28);
        *(undefined1 *)(in_ECX + 0x96 + *(int *)(in_ECX + 0x160) * 0x28) = 1;
        *(undefined4 *)(in_ECX + 0x7c + *(int *)(in_ECX + 0x160) * 0x28) = 0;
        *(undefined1 *)(in_ECX + 0x94 + *(int *)(in_ECX + 0x160) * 0x28) = 1;
        FUN_0058ceb0(0xfae,0x3f800000);
        FUN_0058fba0(0);
        fVar7 = (float10)0;
      }
      iVar3 = *(int *)(in_ECX + 0x9c + iVar3 * 0x28);
      if (*(int *)(in_ECX + 0x174) != iVar3) {
        *(int *)(in_ECX + 0x174) = iVar3;
      }
    }
    iVar3 = iVar4;
    if (4 < iVar4) {
      FUN_005b0830();
      iVar3 = 5;
      do {
        iVar4 = FUN_009828c0();
        FUN_0058ceb0(0xfb1,(float)iVar4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return;
    }
  } while( true );
}



void FUN_005b11a0(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  
  cVar2 = FUN_0057c140(0x3f6);
  if (cVar2 == '\0') {
    piVar7 = (int *)(in_ECX + 0xa0);
    iVar6 = 5;
    do {
      if ((*piVar7 != 0) && (cVar2 = FUN_006b7260(), cVar2 != '\0')) {
        FUN_006b7220();
      }
      piVar7 = piVar7 + 10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = FUN_004299e0(*(undefined4 *)(in_ECX + 0x48));
  if ((undefined4 *)(&PTR_DAT_00b03e1c)[iVar6] == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(&PTR_DAT_00b03e1c)[iVar6];
  }
  FUN_0058ced0(0xfb0,uVar4);
  iVar6 = FUN_006da150(10);
  if ((iVar6 == 2) && (cVar2 = FUN_0057c140(0x3f6), cVar2 != '\0')) {
    if (DAT_00b3b3f4 != '\0') {
      FUN_005afd50("DRSLockOpenFail");
      DAT_00b3b3f4 = '\0';
    }
    FUN_00583df0(0xff);
    FUN_005af960();
  }
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(in_ECX + 0x40);
  *(undefined4 *)(in_ECX + 0x40) = DAT_00b33ea0;
  switch(*(undefined4 *)(in_ECX + 0x150)) {
  case 0:
    cVar2 = FUN_0057c140(0x3f6);
    if (cVar2 != '\0') {
      FUN_005afa80();
      FUN_005b0e70();
    }
    break;
  case 1:
    FUN_005b0e70();
    FUN_005b03b0();
    break;
  case 3:
    FUN_005b0e70();
    FUN_005afa40();
    break;
  case 4:
    FUN_005b0e70();
    FUN_005b0620();
  }
  FUN_00582160(0,1);
  bVar1 = true;
  iVar6 = 0;
  do {
    iVar3 = FUN_0057cfa0(iVar6);
    if ((iVar3 != 0) && (iVar3 = FUN_0057cfa0(iVar6), iVar3 != 0x3f6)) {
      bVar1 = false;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 10);
  if (!bVar1) {
    FUN_00583df0(0xff);
  }
  iVar6 = *(int *)(in_ECX + 0x168);
  if ((((-1 < iVar6) && (*(float *)(in_ECX + 0x158) == 0.0)) && (*(float *)(in_ECX + 0x14c) == 0.0))
     && (iVar3 = *(int *)(in_ECX + 0x160), iVar6 != iVar3)) {
    uVar4 = FUN_009828c0();
    iVar5 = FUN_005af190(uVar4);
    if (iVar3 == iVar5) {
      if (iVar6 < iVar3) {
        iVar3 = iVar3 + -1;
      }
      else {
        iVar3 = iVar3 + 1;
      }
      *(int *)(in_ECX + 0x160) = iVar3;
      iVar6 = FUN_005af190(uVar4);
      if (*(char *)(in_ECX + 0x95 + iVar6 * 0x28) == '\0') {
        FUN_005afd50("UILockPickScrape");
        return;
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005b1430(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  char local_104 [256];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_104;
  if (param_2 < 0) {
    pcVar1 = " ";
  }
  else {
    _sprintf(local_104,"%i",param_2);
    pcVar1 = local_104;
  }
  FUN_0058ced0(0xfb1,pcVar1);
  if (param_3 < 0) {
    pcVar1 = " ";
  }
  else {
    _sprintf(local_104,"%i",param_3);
    pcVar1 = local_104;
  }
  FUN_0058ced0(0xfb2,pcVar1);
  if (param_4 < 0) {
    pcVar1 = " ";
  }
  else {
    _sprintf(local_104,"%i",param_4);
    pcVar1 = local_104;
  }
  FUN_0058ced0(0xfb3,pcVar1);
  return;
}



void FUN_005b1590(int param_1)

{
  int iVar1;
  
  if (param_1 == 0xc) {
    FUN_00582160(0,1);
    FUN_0057d7f0();
    FUN_0057d7f0();
    FUN_009828c0();
    FUN_00588cf0();
    FUN_00588bd0(0xfb6);
    FUN_0058ceb0(0xfb7,0xce6e6b28);
    iVar1 = FUN_009828c0();
    FUN_0058ceb0(0xfb7,(float)iVar1);
    FUN_0058ceb0(0xfb7,0);
  }
  return;
}



void FUN_005b1660(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  int *piVar8;
  float10 fVar9;
  float10 extraout_ST0;
  float10 fVar10;
  
  if (((1000 < param_1) || (param_1 - 0xdU < 2)) && (param_2 != 0)) {
    *(undefined4 *)(in_ECX + 0x48) = 0;
    FUN_0057bd80();
    if (*(int *)(in_ECX + 0x28) != 0) {
      FUN_0057de50(4);
      FUN_00588bd0(0xfe0);
      iVar6 = FUN_009828c0();
      fVar9 = (float10)FUN_00588bd0(0xfd1);
      if (fVar9 == (float10)2.0) {
        FUN_00588bd0(0xfcb);
      }
      fVar9 = (float10)FUN_00588d90();
      FUN_0058ceb0(0xfab,(float)(fVar9 - (float10)0.5));
      fVar9 = (float10)FUN_00588bd0(0xfcb);
      FUN_0058ceb0(0xfcb,(float)(fVar9 - (float10)(iVar6 * 2)));
      fVar9 = (float10)FUN_00588bd0(0xfca);
      FUN_0058ceb0(0xfca,(float)(fVar9 - (float10)(iVar6 * 2)));
      FUN_00588c50();
      iVar7 = FUN_009828c0();
      FUN_0058ceb0(0xfad,(float)(extraout_ST0 - (float10)iVar7));
      fVar9 = (float10)FUN_00588cf0();
      FUN_0058ceb0(0xfac,(float)(fVar9 + (float10)iVar6));
      FUN_0058ceb0(0xfa1,0x40000000);
      *(int *)(in_ECX + 0x48) = param_2;
      if (1000 < param_1) {
        FUN_00588bd0(0xfb5);
        iVar6 = FUN_009828c0();
        fVar9 = (float10)FUN_00588bd0(0xfb5);
        fVar1 = (float)fVar9;
        FUN_00582160(0,1);
        fVar9 = (float10)FUN_0057d7f0();
        fVar10 = (float10)FUN_00588bd0(0xfba);
        fVar2 = (float)((float10)(double)fVar9 - fVar10);
        FUN_00588bd0(0xfbb);
        iVar7 = FUN_009828c0();
        if (iVar6 != 8) {
          if (iVar6 == 0x10) {
            iVar6 = *(int *)(in_ECX + 0x54);
            piVar8 = (int *)(in_ECX + 0x40);
            if (piVar8 != (int *)0x0) {
              do {
                piVar3 = (int *)*piVar8;
                piVar8 = (int *)piVar8[1];
                if (iVar6 == iVar7) break;
                iVar6 = iVar6 + 1;
              } while (piVar8 != (int *)0x0);
              if (piVar3 != (int *)0x0) {
                fVar9 = (float10)FUN_00588d90();
                uVar4 = *(undefined4 *)(*piVar3 + 0xc);
                fVar9 = (float10)FUN_00588cf0(fVar2,(float)fVar9);
                FUN_0057bbf0(uVar4,fVar1,(float)fVar9);
                return;
              }
            }
          }
          else {
            piVar8 = (int *)(in_ECX + 0x38);
            iVar6 = 0;
            if (piVar8 != (int *)0x0) {
              do {
                iVar5 = *piVar8;
                piVar8 = (int *)piVar8[1];
                iVar6 = iVar6 + 1;
                if (iVar6 == iVar7) break;
              } while (piVar8 != (int *)0x0);
              if (iVar5 != 0) {
                fVar9 = (float10)FUN_00588d90();
                fVar9 = (float10)FUN_00588cf0(fVar2,0,(float)fVar9);
                FUN_0057bb20(iVar5 + 0x18,fVar1,(float)fVar9);
                return;
              }
            }
          }
          FUN_004a7a60("Spell item index did was not in saved list.");
          return;
        }
        piVar8 = DAT_00b14360;
        if (DAT_00b14360 != (int *)0x0) {
          do {
            piVar3 = (int *)piVar8[2];
            piVar8 = (int *)*piVar8;
            if (piVar3[1] == iVar7) {
              fVar9 = (float10)FUN_00588d90();
              iVar6 = FUN_009832e6(*(undefined4 *)(*piVar3 + 8),0,&PTR_PTR_00b03248,
                                   &PTR_PTR_00b03718,0);
              if (*(int *)(iVar6 + 4) == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(iVar6 + 4) + 0x18;
              }
              fVar9 = (float10)FUN_00588cf0(fVar2,0,(float)fVar9);
              FUN_0057bb20(iVar6,fVar1,(float)fVar9);
              return;
            }
          } while (piVar8 != (int *)0x0);
          return;
        }
      }
    }
  }
  return;
}



void FUN_005b1a40(uint param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_10;
  uint local_c;
  
  iVar2 = *(int *)(*(int *)(in_ECX + 0x2c) + 0x38);
  iVar3 = -1;
  local_c = 0xffffffff;
  local_10 = -1;
  if ((param_1 & 8) != 0) {
    iVar3 = 0;
    local_10 = 0;
  }
  FUN_0058ceb0(0xfaf,0xc0000000);
  FUN_0058ceb0(0xfb0,0xc0000000);
  FUN_0058ceb0(0xfb1,0xc0000000);
  FUN_0058ceb0(0xfb2,0xc0000000);
  do {
    while( true ) {
      if (iVar2 == 0) {
        uVar1 = iVar3 - 1;
        FUN_0058ceb0(0xfae,(float)(int)(((int)uVar1 < 0) - 1 & uVar1));
        FUN_0058ceb0(0xfb3,(float)(int)(((int)uVar1 < 0) - 1 & uVar1));
        fVar4 = (float10)FUN_00588bd0(0xfb2);
        if (fVar4 == (float10)-2.0) {
          FUN_0058ceb0(0xfb2,0x497423f0);
        }
        fVar4 = (float10)FUN_00588bd0(0xfb1);
        if (fVar4 == (float10)-2.0) {
          fVar4 = (float10)FUN_00588bd0(0xfb2);
          FUN_0058ceb0(0xfb1,(float)fVar4);
        }
        fVar4 = (float10)FUN_00588bd0(0xfb0);
        if (fVar4 == (float10)-2.0) {
          fVar4 = (float10)FUN_00588bd0(0xfb1);
          FUN_0058ceb0(0xfb0,(float)fVar4);
        }
        fVar4 = (float10)FUN_00588bd0(0xfaf);
        if (fVar4 == (float10)-2.0) {
          fVar4 = (float10)FUN_00588bd0(0xfb0);
          FUN_0058ceb0(0xfaf,(float)fVar4);
        }
        iVar2 = FUN_00582160(0,1);
        if (*(char *)(iVar2 + 0xb9) == '\0') {
          uVar7 = 0;
          uVar6 = 0xfdd;
          uVar5 = 0;
          FUN_00582160(0,1,0,0xfdd,0);
          FUN_0057f9f0(uVar5,uVar6,uVar7);
          FUN_00582160(0,1);
          FUN_0057fd60();
        }
        return;
      }
      iVar2 = *(int *)(iVar2 + 4);
      FUN_00588bd0(0xfb7);
      uVar1 = FUN_009828c0();
      if (((param_1 & uVar1) != 0) &&
         (fVar4 = (float10)FUN_00588bd0(0xfa8), (float10)1001.0 <= fVar4)) break;
      FUN_0058ceb0(0xfb6,0x3f800000);
    }
    FUN_00588bd0(0xfb5);
    uVar1 = FUN_009828c0();
    if (((param_1 & 8) == 0) && (uVar1 != local_c)) {
      if ((uVar1 & 1) == 0) {
        if ((uVar1 & 2) == 0) {
          if ((uVar1 & 4) == 0) {
            if ((uVar1 & 8) == 0) goto LAB_005b1b9a;
            uVar5 = 0xfb2;
          }
          else {
            uVar5 = 0xfb1;
          }
        }
        else {
          uVar5 = 0xfb0;
        }
      }
      else {
        uVar5 = 0xfaf;
      }
      FUN_0058ceb0(uVar5,(float)local_10);
      iVar3 = iVar3 + 1;
      local_10 = iVar3;
    }
LAB_005b1b9a:
    FUN_0058ceb0(0xfb6,0x40000000);
    FUN_0058ceb0(0xfaa,(float)local_10);
    iVar3 = iVar3 + 1;
    local_c = uVar1;
    local_10 = iVar3;
  } while( true );
}



void FUN_005b1d70(void)

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



void FUN_005b1dc0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0878;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6c920;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a6c910;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005b1e20(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  
  puVar1 = (undefined4 *)(**(code **)(*in_ECX + 4))();
  puVar1[2] = *param_1;
  *puVar1 = 0;
  puVar1[1] = in_ECX[2];
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    *(undefined4 *)in_ECX[2] = puVar1;
    in_ECX[3] = in_ECX[3] + 1;
    in_ECX[2] = (int)puVar1;
    return;
  }
  in_ECX[3] = in_ECX[3] + 1;
  in_ECX[1] = (int)puVar1;
  in_ECX[2] = (int)puVar1;
  return;
}



void FUN_005b1e70(code *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  int *piVar7;
  
  piVar7 = (int *)0x0;
  if (in_ECX != (int *)0x0) {
    iVar6 = 0;
    piVar4 = in_ECX;
    do {
      if (*piVar4 != 0) {
        iVar6 = iVar6 + 1;
      }
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
    bVar3 = true;
    while ((iVar6 != 0 && (bVar3))) {
      bVar3 = false;
      for (; in_ECX != (int *)0x0; in_ECX = (int *)in_ECX[1]) {
        if (piVar7 != (int *)0x0) {
          iVar1 = *in_ECX;
          iVar2 = *piVar7;
          iVar5 = (*param_1)(iVar2,iVar1);
          if (0 < iVar5) {
            if (iVar2 != 0) {
              *in_ECX = iVar2;
            }
            if (iVar1 != 0) {
              *piVar7 = iVar1;
            }
            bVar3 = true;
          }
        }
        piVar7 = in_ECX;
      }
      iVar6 = iVar6 + -1;
    }
  }
  return;
}



void FUN_005b1f00(byte param_1)

{
  FUN_005b1dc0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005b1f20(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  *in_ECX = &PTR_FUN_00a6c974;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x16] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x14] = 7;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b1f70(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0628;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6c974;
  local_4 = 0;
  piVar3 = DAT_00b14360;
  while (DAT_00b14368 != 0) {
    DAT_00b14360 = (int *)*piVar3;
    if (DAT_00b14360 == (int *)0x0) {
      _DAT_00b14364 = 0;
    }
    else {
      DAT_00b14360[1] = 0;
    }
    piVar1 = (int *)piVar3[2];
    (**(code **)(PTR_PTR_00b1435c + 8))(piVar3,uVar4);
    DAT_00b14368 = DAT_00b14368 + -1;
    piVar3 = DAT_00b14360;
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        FUN_00484470();
        FUN_00401f20(iVar2);
      }
      FUN_00401f20(piVar1);
      piVar3 = DAT_00b14360;
    }
  }
  iVar2 = in_ECX[0xf];
  DAT_00b14368 = 0;
  DAT_00b14360 = piVar3;
  while (iVar2 != 0) {
    iVar2 = *(int *)(in_ECX[0xf] + 4);
    FUN_00401f20(in_ECX[0xf]);
    in_ECX[0xf] = iVar2;
  }
  in_ECX[0xe] = 0;
  FUN_005b1d70();
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005b2060(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_0058ceb0(0xfae,(float)param_1);
  iVar2 = FUN_00582160(0,1);
  *(char *)(iVar2 + 0xc) = (char)param_1;
  if (param_1 < 2) {
    in_ECX[0x14] = 7;
  }
  else {
    in_ECX[0x14] = 1 << ((char)param_1 - 2U & 0x1f);
  }
  FUN_005b1a40(in_ECX[0x14]);
  FUN_0058ceb0(0xfb7,0xcb18967f);
  FUN_0058ceb0(0xfb7,0);
  iVar2 = FUN_00582160(0,1);
  iVar2 = *(int *)(iVar2 + 0x88);
  if (iVar2 != 0) {
    iVar1 = *in_ECX;
    FUN_00588bd0(0xfa8);
    uVar3 = FUN_009828c0(iVar2);
    (**(code **)(iVar1 + 0x14))(uVar3);
  }
  uVar5 = 0;
  uVar4 = 0xfdd;
  uVar3 = 0;
  FUN_00582160(0,1,0,0xfdd,0);
  FUN_0057f9f0(uVar3,uVar4,uVar5);
  FUN_00582160(0,1);
  FUN_0057fd60();
  return;
}



void FUN_005b2140(int param_1)

{
  if ((param_1 != 0) && ((*(uint *)(*(int *)(*(int *)(param_1 + 0xc) + 0x1c) + 0x58) >> 8 & 1) == 0)
     ) {
    FUN_009828c0();
    return;
  }
  FUN_009828c0();
  return;
}



void FUN_005b2190(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  *in_ECX = param_1;
  if ((param_1 != 0) && ((*(uint *)(*(int *)(*(int *)(param_1 + 0xc) + 0x1c) + 0x58) >> 8 & 1) == 0)
     ) {
    iVar1 = FUN_009828c0();
    in_ECX[1] = iVar1;
    return;
  }
  iVar1 = FUN_009828c0();
  in_ECX[1] = iVar1;
  return;
}



bool FUN_005b21f0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  bool bVar6;
  char *_Str1;
  char *_Str2;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c08a8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = *(int *)(*(int *)(*in_ECX + 0xc) + 0x1c);
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x1c);
  if ((*(int *)(iVar5 + 0x98) == 0x46464553) && (*(int *)(iVar1 + 0x98) == 0x46464553)) {
    puVar3 = (undefined4 *)FUN_004139f0(local_14);
    local_4 = 0;
    puVar4 = (undefined4 *)FUN_004139f0(&local_1c);
    _Str2 = (char *)*puVar3;
    _Str1 = (char *)*puVar4;
    iVar5 = __stricmp(_Str1,_Str2);
    bVar6 = iVar5 == 0;
    FUN_00401f20(local_1c,_Str1,_Str2,uVar2);
    local_1c = 0;
    local_16 = 0;
    local_18 = 0;
    FUN_00401f20(local_14[0]);
  }
  else if ((iVar5 == iVar1) &&
          ((((*(uint *)(iVar5 + 0x58) >> 0x13 & 1) == 0 &&
            ((*(uint *)(iVar5 + 0x58) >> 0x14 & 1) == 0)) ||
           (*(int *)(*(int *)(*in_ECX + 0xc) + 0x14) == *(int *)(*(int *)(param_1 + 0xc) + 0x14)))))
  {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  *unaff_FS_OFFSET = local_c;
  return bVar6;
}



void FUN_005b22e0(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    iVar4 = in_ECX[1];
    while (iVar4 != 0) {
      cVar1 = FUN_005b21f0(param_1);
      if (cVar1 != '\0') goto LAB_005b239e;
      in_ECX = (int *)in_ECX[1];
      iVar4 = in_ECX[1];
    }
    if (*in_ECX != 0) {
      cVar1 = FUN_005b21f0(param_1);
      if (cVar1 == '\0') {
        puVar3 = (undefined4 *)FUN_00401f00(8,uVar2);
        local_4 = 0;
        if (puVar3 == (undefined4 *)0x0) {
          in_ECX[1] = 0;
          *unaff_FS_OFFSET = local_c;
          return;
        }
        iVar4 = FUN_00401f00(8,uVar2);
        if (iVar4 != 0) {
          uVar5 = FUN_005b2190(param_1);
          *puVar3 = uVar5;
          puVar3[1] = 0;
          in_ECX[1] = (int)puVar3;
          *unaff_FS_OFFSET = local_c;
          return;
        }
        *puVar3 = 0;
        puVar3[1] = 0;
        in_ECX[1] = (int)puVar3;
        *unaff_FS_OFFSET = local_c;
        return;
      }
LAB_005b239e:
      iVar4 = *in_ECX;
      iVar6 = FUN_005b2140(param_1);
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + iVar6;
      *unaff_FS_OFFSET = local_c;
      return;
    }
    iVar4 = FUN_00401f00(8,uVar2);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_005b2190(param_1);
    }
    *in_ECX = iVar4;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_005b27a0(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  int iVar5;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  int local_24 [2];
  int *local_10;
  
  iVar5 = 0;
  for (piVar4 = in_ECX; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    if (*piVar4 != 0) {
      iVar5 = iVar5 + 1;
    }
  }
  puVar1 = (undefined1 *)(iVar5 * 4 + 4);
  local_24[1] = 0x5b27db;
  iVar2 = -(int)puVar1;
  if (&stack0xffffffe4 == puVar1) {
    *(undefined4 *)((int)local_24 + iVar2 + 4) = param_1;
    *(undefined4 *)((int)local_24 + iVar2) = 0x5b27ef;
    FUN_005b1e70();
  }
  else {
    iVar3 = 0;
    piVar4 = in_ECX;
    if (0 < iVar5) {
      do {
        *(int *)(&stack0xffffffe4 + iVar3 * 4 + iVar2) = *piVar4;
        iVar3 = iVar3 + 1;
        piVar4 = (int *)piVar4[1];
      } while (iVar3 < iVar5);
    }
    *(int *)((int)local_24 + iVar2 + 4) = iVar5;
    *(undefined4 *)((int)local_24 + iVar2) = param_1;
    *(undefined1 **)(auStack_28 + iVar2) = &stack0xffffffe4 + iVar2;
    *(undefined4 *)((int)&uStack_2c + iVar2) = 0x5b281c;
    FUN_00506f00();
    iVar3 = in_ECX[1];
    while (iVar3 != 0) {
      iVar3 = *(int *)(in_ECX[1] + 4);
      *(int *)((int)local_24 + iVar2 + 4) = in_ECX[1];
      *(undefined4 *)((int)local_24 + iVar2) = 0x5b282e;
      FUN_00401f20();
      in_ECX[1] = iVar3;
    }
    iVar3 = 0;
    *in_ECX = 0;
    local_10 = (int *)0x0;
    if (0 < iVar5) {
      do {
        if (iVar3 < 1) {
          *in_ECX = *(int *)(&stack0xffffffe4 + iVar3 * 4 + iVar2);
          in_ECX[1] = 0;
        }
        else {
          *(undefined4 *)((int)local_24 + iVar2 + 4) = 8;
          *(undefined4 *)((int)local_24 + iVar2) = 0x5b284e;
          in_ECX = (int *)FUN_00401f00();
          if (in_ECX == (int *)0x0) {
            in_ECX = (int *)0x0;
          }
          else {
            *in_ECX = *(int *)(&stack0xffffffe4 + iVar3 * 4 + iVar2);
            in_ECX[1] = 0;
          }
        }
        if (local_10 != (int *)0x0) {
          local_10[1] = (int)in_ECX;
        }
        iVar3 = iVar3 + 1;
        local_10 = in_ECX;
      } while (iVar3 < iVar5);
    }
  }
  return;
}



void FUN_005b28b0(byte param_1)

{
  FUN_005b1f70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_005b28d0(int param_1,float param_2)

{
  char cVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c08d8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar1 = FUN_0057c140();
  if (cVar1 != '\0') {
    local_14 = 0;
    local_10 = 0;
    local_e = 0;
    local_4 = 0;
    FUN_00402e30(&local_14,"Button: %i   - %0.2f",param_1,(double)param_2,uVar2);
    FUN_0058ced0(0xfbd,local_14);
    if (param_1 == 0xd) {
      if (!NAN(param_2) && 1.0 < param_2 != (param_2 == 1.0)) {
        FUN_005a5ef0();
        FUN_00401f20();
        *unaff_FS_OFFSET = local_c;
        return 1;
      }
    }
    else if (param_1 == 0xe) {
      if (!NAN(param_2) && 1.0 < param_2 != (param_2 == 1.0)) {
        FUN_005a5fd0();
        FUN_00401f20();
        *unaff_FS_OFFSET = local_c;
        return 1;
      }
    }
    else if (param_1 == 0xc) {
      FUN_005c1f70();
      FUN_00401f20();
      *unaff_FS_OFFSET = local_c;
      return 1;
    }
    FUN_00401f20();
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_005b2a10(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
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
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffed8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_118 = 0;
  local_114 = 0;
  local_112 = 0;
  FUN_004028d0("item_template",0);
  uVar3 = local_118;
  local_4 = 0;
  iVar5 = FUN_00585410(*(undefined4 *)(in_ECX + 0x2c),local_118,0);
  if (iVar5 != 0) {
    FUN_0058ced0(0xfaf,param_1);
    iVar6 = 0;
    do {
      pcVar1 = local_110 + iVar6;
      cVar2 = pcVar1[param_1 - (int)local_110];
      *pcVar1 = cVar2;
      if (cVar2 == ' ') {
        *pcVar1 = '_';
      }
    } while ((*pcVar1 != '\0') && (iVar6 = iVar6 + 1, iVar6 < 0x100));
    local_110[0xff] = 0;
    FUN_004028d0(local_110,0);
  }
  FUN_0058ceb0(0xfa8,(float)param_2);
  FUN_00401f20(uVar3,uVar4);
  *unaff_FS_OFFSET = local_c;
  return iVar5;
}



void FUN_005b2b30(void)

{
  undefined4 *puVar1;
  
  FUN_005b1d70();
  for (puVar1 = (undefined4 *)(**(code **)(*(int *)(DAT_00b333c4 + 0x68) + 8))();
      puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[1]) {
    FUN_005b22e0(*puVar1);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b2b70(void)

{
  int *piVar1;
  undefined4 *puVar2;
  char *_Str1;
  char cVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  int *piVar14;
  char *_Str2;
  undefined4 *puVar15;
  int *unaff_FS_OFFSET;
  float10 fVar16;
  undefined8 uVar17;
  undefined1 auStack_234 [39];
  char cStack_20d;
  char *pcStack_20c;
  undefined2 uStack_208;
  undefined2 uStack_206;
  undefined4 *puStack_204;
  int iStack_200;
  int *piStack_1fc;
  int *piStack_1f8;
  int *piStack_1f4;
  uint uStack_1f0;
  int *local_1ec;
  int iStack_1e8;
  int *piStack_1e4;
  int *piStack_1e0;
  undefined4 uStack_1dc;
  int local_1d8;
  int local_1d4;
  undefined1 auStack_1d0 [64];
  char acStack_190 [268];
  uint local_84;
  int local_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  
  uStack_44 = 0xffffffff;
  puStack_48 = &LAB_009c0956;
  local_4c = *unaff_FS_OFFSET;
  local_84 = DAT_00b30aac ^ (uint)auStack_234;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffdc0;
  *unaff_FS_OFFSET = (int)&local_4c;
  local_1d4 = FUN_00589b70();
  if (local_1d4 != 0) {
    piVar6 = (int *)FUN_005898f0(uVar5);
    piVar14 = DAT_00b14360;
    while (local_1ec = piVar6, DAT_00b14368 != 0) {
      DAT_00b14360 = (int *)*piVar14;
      if (DAT_00b14360 == (int *)0x0) {
        _DAT_00b14364 = 0;
      }
      else {
        DAT_00b14360[1] = 0;
      }
      piVar1 = (int *)piVar14[2];
      (**(code **)(PTR_PTR_00b1435c + 8))();
      DAT_00b14368 = DAT_00b14368 + -1;
      piVar6 = local_1ec;
      piVar14 = DAT_00b14360;
      if (piVar1 != (int *)0x0) {
        if (*piVar1 != 0) {
          FUN_00484470();
          FUN_00401f20();
        }
        FUN_00401f20();
        piVar6 = local_1ec;
        piVar14 = DAT_00b14360;
      }
    }
    DAT_00b14360 = piVar14;
    if (DAT_00b333c4 != 0) {
      local_1d8 = piVar6[0xb];
      iVar7 = FUN_005e02e0();
      piStack_1fc = (int *)(iVar7 + 0x58);
      piVar6[0x13] = 0;
      FUN_005b27a0();
      iStack_1e8 = FUN_004d8950();
      iStack_200 = 0;
      if (0 < iStack_1e8) {
        do {
          iVar7 = FUN_004d88f0(iStack_200,0);
          if (iVar7 != 0) {
            iVar8 = FUN_009832e6(*(undefined4 *)(iVar7 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b084f0);
            if (((iVar8 == 0) || ((*(byte *)(iVar8 + 0x88) & 1) == 0)) ||
               (piVar6 = DAT_00b14360, piVar14 = piStack_1e4, *(int *)(iVar8 + 100) == 0)) {
              FUN_00484470();
              FUN_00401f20();
            }
            else {
              do {
                piStack_1e4 = piVar6;
                if (piStack_1e4 == (int *)0x0) {
                  piStack_1e4 = piVar14;
                  piStack_1f4 = (int *)FUN_00401f00();
                  if (piStack_1f4 == (int *)0x0) {
                    piStack_1f4 = (int *)0x0;
                  }
                  else {
                    *piStack_1f4 = iVar7;
                    piStack_1f4[1] = iStack_200;
                  }
                  FUN_005b1e20();
                  goto LAB_005b2d86;
                }
                piVar6 = (int *)*piStack_1e4;
                iVar8 = FUN_00584500(iVar7,*(undefined4 *)piStack_1e4[2]);
                piVar14 = piStack_1e4;
              } while (0 < iVar8);
              piStack_1f4 = (int *)FUN_00401f00();
              if (piStack_1f4 == (int *)0x0) {
                piStack_1f4 = (int *)0x0;
              }
              else {
                *piStack_1f4 = iVar7;
                piStack_1f4[1] = iStack_200;
              }
              FUN_00589640(piStack_1e4,&piStack_1f4);
            }
          }
LAB_005b2d86:
          iStack_200 = iStack_200 + 1;
        } while (iStack_200 < iStack_1e8);
      }
      piVar6 = local_1ec;
      if (local_1ec[0x12] != 0) {
        iVar7 = *local_1ec;
        FUN_00588bd0(0xfa8);
        uVar9 = FUN_009828c0();
        (**(code **)(iVar7 + 0x14))(uVar9);
      }
      puVar15 = *(undefined4 **)(local_1d8 + 0x34);
      while (puVar15 != (undefined4 *)0x0) {
        piStack_1f4 = (int *)puVar15[2];
        puVar15 = (undefined4 *)*puVar15;
        fVar16 = (float10)FUN_00588bd0();
        if ((float10)1001.0 <= fVar16) {
          FUN_0058ceb0(0xfaa,0xc2c60000);
        }
      }
      FUN_0058ceb0(0xfaf,0xc0000000);
      FUN_0058ceb0(0xfb0,0xc0000000);
      FUN_0058ceb0(0xfb1,0xc0000000);
      FUN_0058ceb0(0xfb2,0xc0000000);
      iStack_200 = 0;
      iStack_1e8 = 1;
      uStack_1f0 = 0;
      piStack_1f8 = (int *)0x0;
      FUN_004526e0();
      FUN_005b2b30();
      piStack_1e0 = piVar6 + 0x10;
      piStack_1e4 = DAT_00b14360;
      piStack_1f4 = piStack_1fc;
LAB_005b2ea8:
      piVar6 = piStack_1f4;
      if (piStack_1f4 == (int *)0x0) {
LAB_005b2ec6:
        if (piStack_1e4 == (int *)0x0) {
          if (piStack_1e0 == (int *)0x0) goto LAB_005b3639;
          iVar7 = 0;
          piVar14 = piStack_1e0;
          do {
            if (*piVar14 != 0) {
              iVar7 = iVar7 + 1;
            }
            piVar14 = (int *)piVar14[1];
          } while (piVar14 != (int *)0x0);
          if (iVar7 == 0) goto LAB_005b3639;
        }
      }
      else {
        iVar7 = 0;
        piVar14 = piStack_1f4;
        do {
          if (*piVar14 != 0) {
            iVar7 = iVar7 + 1;
          }
          piVar14 = (int *)piVar14[1];
        } while (piVar14 != (int *)0x0);
        if (iVar7 == 0) goto LAB_005b2ec6;
      }
      pcStack_20c = (char *)0x0;
      uStack_208 = 0;
      uStack_206 = 0;
      FUN_004028d0(&DAT_00a2f7ec,0);
      piVar14 = piStack_1e0;
      uStack_44 = 0;
      uStack_1dc = 0;
      cStack_20d = '\0';
      piStack_1fc = (int *)0xffffffff;
      if (piVar6 == (int *)0x0) {
LAB_005b31d9:
        if (piStack_1e4 != (int *)0x0) {
          piVar6 = (int *)piStack_1e4[2];
          piStack_1e4 = (int *)*piStack_1e4;
          puStack_204 = (undefined4 *)
                        FUN_009832e6(*(undefined4 *)(*piVar6 + 8),0,&PTR_PTR_00b03248,
                                     &PTR_PTR_00b084f0);
          iVar7 = puStack_204[0x19];
          if (iVar7 != 0) {
            cVar3 = FUN_00414fe0();
            uStack_1f0 = (uint)(cVar3 != '\0');
            cVar3 = FUN_00414fe0();
            if ((cVar3 == '\0') && (cVar3 = FUN_00415030(), cVar3 != '\0')) {
              iVar8 = 2;
            }
            else {
              iVar8 = 0;
            }
            uStack_1f0 = uStack_1f0 + iVar8;
            cVar3 = FUN_00414fe0();
            if ((cVar3 == '\0') && (cVar3 = FUN_00415030(), cVar3 == '\0')) {
              iVar8 = 4;
            }
            else {
              iVar8 = 0;
            }
            uStack_1f0 = uStack_1f0 + iVar8;
            iStack_1e8 = 8;
            FUN_004851b0();
            _sprintf(acStack_190,"%s\\%s","Icons");
            uVar9 = FUN_00488df0();
            FUN_004028d0(uVar9,0);
            piStack_1fc = (int *)piVar6[1];
            (*(code *)**(undefined4 **)(iVar7 + 0x24))();
            uStack_1dc = FUN_009828c0();
            puVar15 = (undefined4 *)FUN_0065d4c0();
            cStack_20d = puStack_204 == puVar15;
          }
          goto LAB_005b30da;
        }
        if ((piStack_1e0 == (int *)0x0) || ((int *)*piStack_1e0 == (int *)0x0)) goto LAB_005b30da;
        iVar7 = *(int *)*piStack_1e0;
        if (iVar7 != 0) {
          piStack_1f8 = (int *)((int)piStack_1f8 + 1);
          if (piStack_1e0 == local_1ec + 0x10) {
            local_1ec[0x15] = (int)piStack_1f8;
          }
          uStack_1f0 = 8;
          iStack_1e8 = 0x10;
          _sprintf(acStack_190,"%s\\%s","Icons");
          FUN_00413a90();
          FUN_004028d0(auStack_1d0,0);
          uStack_1dc = *(undefined4 *)(*piVar14 + 4);
        }
        cStack_20d = '\0';
        piStack_1e0 = (int *)piVar14[1];
        if (iVar7 != 0) goto LAB_005b30da;
LAB_005b33a1:
        uStack_44 = 0xffffffff;
        FUN_00401f20();
        pcStack_20c = (char *)0x0;
        uStack_206 = 0;
        uStack_208 = 0;
      }
      else {
        iVar7 = 0;
        do {
          if (*piVar6 != 0) {
            iVar7 = iVar7 + 1;
          }
          piVar6 = (int *)piVar6[1];
        } while (piVar6 != (int *)0x0);
        if (iVar7 == 0) goto LAB_005b31d9;
        iVar7 = *piStack_1f4;
        piStack_1f4 = (int *)piStack_1f4[1];
        if (iVar7 == 0) {
LAB_005b31ac:
          uStack_44 = 0xffffffff;
          FUN_00401f20();
          pcStack_20c = (char *)0x0;
          uStack_206 = 0;
          uStack_208 = 0;
        }
        else {
          iVar8 = FUN_004152c0(3,0);
          if (iVar8 == 0) goto LAB_005b31ac;
          piVar6 = (int *)(iVar7 + 0x18);
          iVar8 = (**(code **)(*(int *)(iVar7 + 0x18) + 0x18))();
          if ((iVar8 == 1) || (iVar8 = (**(code **)(*piVar6 + 0x18))(), iVar8 == 4))
          goto LAB_005b33a1;
          FUN_0067b1e0();
          piStack_1f8 = (int *)((int)piStack_1f8 + 1);
          cVar3 = FUN_00414fe0();
          cVar4 = FUN_00414fe0();
          if ((cVar4 == '\0') && (cVar4 = FUN_00415030(), cVar4 != '\0')) {
            iVar8 = 2;
          }
          else {
            iVar8 = 0;
          }
          cVar4 = FUN_00414fe0();
          if ((cVar4 == '\0') && (cVar4 = FUN_00415030(), cVar4 == '\0')) {
            iVar10 = 4;
          }
          else {
            iVar10 = 0;
          }
          uStack_1f0 = (uint)(cVar3 != '\0') + iVar8 + iVar10;
          iVar8 = (**(code **)(*piVar6 + 0x18))();
          iVar10 = (**(code **)(*piVar6 + 0x18))();
          iVar11 = (**(code **)(*piVar6 + 0x18))();
          iVar12 = (**(code **)(*piVar6 + 0x18))();
          iStack_1e8 = (uint)(iVar8 == 2) + (-(uint)(iVar10 != 3) & 0xfffffffe) +
                       (-(uint)(iVar11 != 0) & 0xfffffffc) +
                       (-(uint)(iVar12 != 5) & 0xfffffffc) + 10;
          FUN_004152c0(3,0);
          _sprintf(acStack_190,"%s\\%s","Icons");
          puVar13 = *(undefined1 **)(iVar7 + 0x1c);
          if (puVar13 == (undefined1 *)0x0) {
            puVar13 = &DAT_00a2f7ec;
          }
          FUN_004028d0(puVar13,0);
          (*(code *)**(undefined4 **)(iVar7 + 0x24))();
          uStack_1dc = FUN_009828c0();
          piVar14 = (int *)FUN_0065d4a0();
          cStack_20d = piVar6 == piVar14;
LAB_005b30da:
          iVar7 = *(int *)(local_1d8 + 0x38);
          do {
            if (iVar7 == 0) {
              if (pcStack_20c == (char *)0x0) {
                FUN_004028d0(DAT_00b38d30,0);
              }
              piVar14 = local_1ec;
              iVar7 = FUN_005b2a10(pcStack_20c,iStack_200 + 0x3e9);
              FUN_005b1430(iVar7,0xffffffff,0xffffffff,uStack_1dc);
              piVar6 = piStack_1f8;
              if (piStack_1fc != (int *)0xffffffff) {
                piVar6 = piStack_1fc;
              }
              FUN_0058ceb0(0xfbb,(float)(int)piVar6);
              FUN_0058ced0(0xfb4,acStack_190);
              FUN_0058ceb0(0xfb5,(float)iStack_1e8);
              FUN_0058ceb0(0xfb7,(float)(int)uStack_1f0);
              cVar3 = cStack_20d;
              puStack_204 = (undefined4 *)((cStack_20d != '\0') + 1);
              FUN_0058ceb0(0xfb8,(float)(int)puStack_204);
              puStack_204 = (undefined4 *)((int)piStack_1f8 + -1);
              FUN_0058ceb0(0xfb9,(float)(int)puStack_204);
              FUN_0058ceb0(0xfaa,(float)iStack_200);
              if (cVar3 != '\0') {
                piVar14[0x13] = iVar7;
              }
              goto LAB_005b3605;
            }
            iVar8 = *(int *)(iVar7 + 8);
            iVar7 = *(int *)(iVar7 + 4);
            fVar16 = (float10)FUN_00588bd0();
          } while ((((fVar16 != (float10)-99.0) ||
                    (iVar10 = FUN_00588c10(), _Str1 = pcStack_20c, iVar10 == 0)) ||
                   (pcStack_20c == (char *)0x0)) ||
                  ((_Str2 = (char *)FUN_00588c10(), _Str2 == (char *)0x0 ||
                   (iVar10 = __stricmp(_Str1,_Str2), piVar6 = local_1ec, iVar10 != 0))));
          FUN_005b1430(iVar8,0xffffffff,0xffffffff,uStack_1dc);
          piVar14 = piStack_1f8;
          if (piStack_1fc != (int *)0xffffffff) {
            piVar14 = piStack_1fc;
          }
          FUN_0058ceb0(0xfbb,(float)(int)piVar14);
          FUN_0058ced0(0xfb4,acStack_190);
          FUN_0058ceb0(0xfb5,(float)iStack_1e8);
          FUN_0058ceb0(0xfb7,(float)(int)uStack_1f0);
          cVar3 = cStack_20d;
          puStack_204 = (undefined4 *)((cStack_20d != '\0') + 1);
          FUN_0058ceb0(0xfb8,(float)(int)puStack_204);
          puStack_204 = (undefined4 *)((int)piStack_1f8 + -1);
          FUN_0058ceb0(0xfb9,(float)(int)puStack_204);
          FUN_0058ceb0(0xfaa,(float)iStack_200);
          if (cVar3 != '\0') {
            uVar17 = CONCAT44(local_1d4,&piStack_1fc);
            piStack_1fc = (int *)0x80000000;
            FUN_00582160(0,1,&piStack_1fc);
            FUN_0057da90(uVar17);
            puStack_204 = (undefined4 *)((int)piStack_1fc + 1);
            FUN_0058ceb0(0xff0,(float)(int)puStack_204);
            piVar6[0x13] = iVar8;
          }
          puVar15 = *(undefined4 **)(*(int *)(iVar8 + 0x10) + 0x34);
          do {
            puStack_204 = puVar15;
            if (puStack_204 == (undefined4 *)0x0) {
              puStack_204 = (undefined4 *)0x0;
              break;
            }
            puVar15 = (undefined4 *)*puStack_204;
          } while (iVar8 != puStack_204[2]);
          if (puStack_204 != (undefined4 *)0x0) {
            FUN_007aa860();
          }
          iVar7 = *(int *)(iVar8 + 0x10);
          puVar15 = (undefined4 *)(**(code **)(*(int *)(iVar7 + 0x30) + 4))();
          puVar15[2] = iVar8;
          puVar15[1] = 0;
          *puVar15 = *(undefined4 *)(iVar7 + 0x34);
          if (*(int *)(iVar7 + 0x34) == 0) {
            *(int *)(iVar7 + 0x3c) = *(int *)(iVar7 + 0x3c) + 1;
            *(undefined4 **)(iVar7 + 0x38) = puVar15;
            *(undefined4 **)(iVar7 + 0x34) = puVar15;
          }
          else {
            *(undefined4 **)(*(int *)(iVar7 + 0x34) + 4) = puVar15;
            *(int *)(iVar7 + 0x3c) = *(int *)(iVar7 + 0x3c) + 1;
            *(undefined4 **)(iVar7 + 0x34) = puVar15;
          }
LAB_005b3605:
          iStack_200 = iStack_200 + 1;
          uStack_44 = 0xffffffff;
          FUN_00401f20();
          pcStack_20c = (char *)0x0;
          uStack_206 = 0;
          uStack_208 = 0;
        }
      }
      goto LAB_005b2ea8;
    }
  }
LAB_005b3732:
  *unaff_FS_OFFSET = local_4c;
  return;
LAB_005b3639:
  puStack_204 = (undefined4 *)(iStack_200 + -1);
  FUN_0058ceb0(0xfae,(float)(int)puStack_204);
  puVar15 = *(undefined4 **)(local_1d8 + 0x34);
  while (puVar15 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar15[2];
    puVar15 = (undefined4 *)*puVar15;
    fVar16 = (float10)FUN_00588bd0();
    if ((fVar16 == (float10)-99.0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  FUN_005b1a40();
  uVar9 = DAT_00b39518;
  pcStack_20c = (char *)0x0;
  uStack_208 = 0;
  uStack_206 = 0;
  uStack_44 = 1;
  fVar16 = (float10)(**(code **)(*(int *)(DAT_00b333c4 + 0x5c) + 0x2c))(0,0);
  FUN_00402e30(&pcStack_20c,"%s: %0.0f%%",uVar9,(double)(fVar16 * (float10)100.0));
  FUN_0058ced0(0xfb4,pcStack_20c);
  FUN_00582160(0,1,0);
  FUN_0057d730();
  FUN_00401f20();
  goto LAB_005b3732;
}



undefined4 FUN_005b3760(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  
  puVar1 = (undefined4 *)FUN_00589b70(0x3fe);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  FUN_00582160(0,1);
  fVar6 = (float10)thunk_FUN_00584980();
  uVar2 = FUN_00590420("Data\\Menus\\Main\\magic_menu.xml");
  piVar3 = (int *)FUN_005898f0();
  FUN_00584670("Data\\Menus\\Main\\magic_menu.xml",piVar3);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  iVar4 = (**(code **)(*piVar3 + 0x34))();
  if (iVar4 != 0x3fe) {
    if (piVar3[1] == 0) {
      return 0;
    }
    (**(code **)*piVar3)(1);
    return 0;
  }
  uVar5 = FUN_009832e6(uVar2,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar5);
  iVar4 = FUN_009832e6(piVar3,0,&PTR_PTR_00b0a018,&PTR_PTR_00b14344,0);
  if ((((*(int *)(iVar4 + 0x2c) != 0) && (*(int *)(iVar4 + 0x28) != 0)) &&
      (*(int *)(iVar4 + 0x30) != 0)) && (*(int *)(iVar4 + 0x34) != 0)) {
    fVar7 = (float10)FUN_00588bd0(0xfa5);
    if ((fVar7 == (float10)6006.0) ||
       (fVar7 = (float10)FUN_00588bd0(0xfa5), fVar7 == (float10)102.0)) {
      FUN_0058ceb0(0xfab,(float)fVar6);
    }
    FUN_0058ceb0(0xfb3,0);
    FUN_0058ceb0(0xfaf,0xc0000000);
    FUN_0058ceb0(0xfb0,0xc0000000);
    FUN_0058ceb0(0xfb1,0xc0000000);
    FUN_0058ceb0(0xfb2,0xc0000000);
    FUN_0058ceb0(0xfb3,0);
    FUN_0058ced0(0xfb4,&DAT_00a36430);
    FUN_005b2b70();
    iVar4 = FUN_00582160(0,1);
    if (*(char *)(iVar4 + 0xc) != -1) {
      FUN_005b2060((int)*(char *)(iVar4 + 0xc),0);
    }
    FUN_0058ceb0(0xfb3,0xc7c34f80);
    FUN_0058ceb0(0xfb3,0);
    FUN_00585190(1);
    return uVar2;
  }
  FUN_004a7a60("Magic Menu Creation Failed... Are your menu and art resources up to date?");
  return 0;
}



void FUN_005b3d30(void)

{
  DWORD DVar1;
  undefined4 *in_ECX;
  
  FUN_00584640();
  *in_ECX = &PTR_FUN_00a6ca54;
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
  in_ECX[0x16] = 2;
  DVar1 = GetTickCount();
  in_ECX[0x15] = 0;
  in_ECX[0x17] = DVar1;
  in_ECX[0x14] = 0;
  return;
}



void FUN_005b3e50(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00589b70(0x400);
  if (iVar1 != 0) {
    uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13364,0);
    iVar1 = FUN_009832e6(uVar2);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x58) = 3;
    }
  }
  return;
}



void FUN_005b3e90(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x400);
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x58) = 3;
      FUN_00584740();
      return;
    }
  }
  return;
}



void FUN_005b3ed0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6ca54;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_005b3f00(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  
  puVar2 = (undefined4 *)FUN_00589b70(0x400);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  FUN_00582160(0,1);
  fVar7 = (float10)thunk_FUN_00584980();
  uVar3 = FUN_00590420("Data\\Menus\\Main\\magic_popup_menu.xml");
  piVar4 = (int *)FUN_005898f0();
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  iVar5 = (**(code **)(*piVar4 + 0x34))();
  if (iVar5 != 0x400) {
    if (piVar4[1] == 0) {
      return 0;
    }
    (**(code **)*piVar4)(1);
    return 0;
  }
  uVar6 = FUN_009832e6(uVar3,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar6);
  FUN_009832e6(piVar4,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13364,0);
  cVar1 = FUN_005a46b0();
  if (cVar1 != '\0') {
    fVar8 = (float10)FUN_00588bd0(0xfa5);
    if ((fVar8 == (float10)6006.0) ||
       (fVar8 = (float10)FUN_00588bd0(0xfa5), fVar8 == (float10)102.0)) {
      FUN_0058ceb0(0xfab,(float)fVar7);
    }
    FUN_0058ced0(0xfde,&DAT_00a2f7ec);
    FUN_0058ceb0(0xfa1,0x3f800000);
    iVar5 = 8;
    do {
      FUN_0058ceb0(0xfa1,0x3f800000);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    FUN_00585190(0);
    return uVar3;
  }
  FUN_004a7a60("Magic Menu Creation Failed... Are your menu and art resources up to date?");
  return 0;
}



void FUN_005b4080(void)

{
  float fVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  int in_ECX;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  DVar3 = GetTickCount();
  if (*(int *)(in_ECX + 0x58) == 1) {
    if ((*(int *)(in_ECX + 0x24) == 4) || (*(int *)(in_ECX + 0x24) == 2)) {
      FUN_00584390();
    }
    fVar5 = (float10)FUN_00588bd0(0xfad);
    fVar6 = (float10)FUN_00588bd0(0xfb0);
    iVar4 = DVar3 - *(int *)(in_ECX + 0x5c);
    fVar7 = (float10)iVar4;
    if (iVar4 < 0) {
      fVar7 = fVar7 + (float10)4.2949673e+09;
    }
    fVar1 = (float)(fVar7 * fVar6 + (float10)(double)fVar5);
    if (fVar1 < *(float *)(in_ECX + 0x54)) {
      fVar1 = *(float *)(in_ECX + 0x54);
    }
    if (*(float *)(in_ECX + 0x50) <= fVar1) {
      *(undefined4 *)(in_ECX + 0x58) = 0;
      fVar1 = *(float *)(in_ECX + 0x50);
    }
  }
  else {
    if (*(int *)(in_ECX + 0x58) != 3) goto LAB_005b41a6;
    fVar5 = (float10)FUN_00588bd0(0xfad);
    fVar6 = (float10)FUN_00588bd0(0xfb0);
    iVar4 = DVar3 - *(int *)(in_ECX + 0x5c);
    fVar7 = (float10)iVar4;
    if (iVar4 < 0) {
      fVar7 = fVar7 + (float10)4.2949673e+09;
    }
    fVar1 = (float)((float10)(double)fVar5 - fVar7 * fVar6);
    if (fVar1 <= *(float *)(in_ECX + 0x54)) {
      *(undefined4 *)(in_ECX + 0x58) = 2;
      FUN_00584740();
      fVar1 = *(float *)(in_ECX + 0x54);
    }
  }
  FUN_0058ceb0(0xfad,fVar1);
LAB_005b41a6:
  cVar2 = FUN_00578f60();
  if (cVar2 == '\0') {
    *(undefined4 *)(in_ECX + 0x58) = 2;
    FUN_00584740();
    FUN_0058ceb0(0xfad,*(undefined4 *)(in_ECX + 0x54));
  }
  *(DWORD *)(in_ECX + 0x5c) = DVar3;
  return;
}



void FUN_005b41e0(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x400);
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      FUN_0058ceb0(0x1772,0x40000000);
      FUN_005898f0();
      FUN_00584740();
      return;
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005b4230(int *param_1,float param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  undefined2 *puVar13;
  undefined4 local_348;
  undefined2 local_344;
  undefined2 local_342;
  int *local_340;
  double local_33c;
  int local_334;
  int iStack_330;
  int local_32c [2];
  int local_324;
  int local_320;
  char acStack_31c [260];
  char local_218 [260];
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c09dd;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_348;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffca8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_340 = param_1;
  local_334 = param_5;
  local_320 = FUN_00589b70(0x400,uVar2);
  if (local_320 == 0) goto LAB_005b49dc;
  uVar3 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13364,0);
  iVar4 = FUN_009832e6(uVar3);
  if (iVar4 == 0) goto LAB_005b49dc;
  *(undefined4 *)(iVar4 + 0x58) = 1;
  FUN_0058ceb0(0xfae,param_3);
  FUN_0058ceb0(0xfaf,param_4);
  FUN_0058ceb0(0xfb1,param_6);
  *(float *)(iVar4 + 0x50) = param_2;
  local_33c = (double)param_2;
  fVar12 = (float10)FUN_00588bd0(0xfcb);
  iVar11 = 0;
  *(float *)(iVar4 + 0x54) = (float)((float10)local_33c - fVar12);
  if (param_5 != 0) {
    iVar5 = *(int *)(param_5 + 8);
    if (*(char *)(iVar5 + 4) == '!') {
      _sprintf(local_218,"%s\\%s","Icons","icon_small_damage.dds");
      FUN_0058ceb0(0xfa1,0x40000000);
      FUN_0058ced0(0xfaf,local_218);
      FUN_0058ceb0(0xfb0,0x42c80000);
      if (iVar5 != 0) {
        if ((undefined4 *)(&DAT_00b39a44)[*(char *)(iVar5 + 0x90)] == (undefined4 *)0x0) {
          FUN_0058ced0(0xfae,0);
        }
        else {
          FUN_0058ced0(0xfae,*(undefined4 *)(&DAT_00b39a44)[*(char *)(iVar5 + 0x90)]);
        }
      }
    }
    else {
      if (*(char *)(iVar5 + 4) != '\x14') goto LAB_005b44dd;
      _sprintf(local_114,"%s\\%s","Icons","icon_small_armor.dds");
      FUN_0058ceb0(0xfa1,0x40000000);
      FUN_0058ced0(0xfaf,local_114);
      FUN_0058ceb0(0xfb0,0x42c80000);
      uVar3 = DAT_00b38be8;
      if (iVar5 != 0) {
        local_348 = 0;
        local_344 = 0;
        local_342 = 0;
        local_4 = 0;
        uVar2 = FUN_004b4c70();
        if ((undefined4 *)(&PTR_DAT_00b084e8)[uVar2 & 0xff] == (undefined4 *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)(&PTR_DAT_00b084e8)[uVar2 & 0xff];
        }
        FUN_00402e30(&local_348,"%s %s",uVar10,uVar3);
        FUN_0058ced0(0xfae,local_348);
        local_4 = 0xffffffff;
        FUN_00402da0();
      }
    }
    local_32c[0] = 1;
    iVar11 = 1;
  }
LAB_005b44dd:
  local_324 = 8;
  iVar5 = (**(code **)(*param_1 + 0x18))();
  if (iVar5 == 8) {
    uVar3 = FUN_005f1910(0x13);
    local_324 = FUN_0041ba00(uVar3);
  }
  piVar8 = param_1 + 4;
  if (piVar8 != (int *)0x0) {
    iVar4 = iVar4 + 0x2c + iVar11 * 4;
    do {
      if (*piVar8 == 0) break;
      if (7 < iVar11) goto LAB_005b470d;
      iVar11 = iVar11 + 1;
      iStack_330 = iVar4 + 4;
      acStack_31c[0] = '\0';
      local_32c[0] = iVar11;
      if (local_324 < iVar11) {
        FUN_0058ced0(0xfae,DAT_00b38bd0);
        _sprintf(acStack_31c,"%s\\Small\\Magic\\unknown_icon00.dds","Icons");
      }
      else {
        fVar12 = (float10)(**(code **)(*(int *)(DAT_00b333c4 + 0x5c) + 0x2c))(0,0);
        puVar6 = (undefined4 *)FUN_004145d0(&local_33c,local_340,(float)fVar12);
        local_4 = 1;
        FUN_0058ced0(0xfae,*puVar6);
        local_4 = 0xffffffff;
        FUN_00401f20(local_33c._0_4_);
        puVar7 = *(undefined1 **)(*(int *)(*piVar8 + 0x1c) + 0x48);
        local_33c = 0.0;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_00a2f7ec;
        }
        _sprintf(acStack_31c,"%s\\%s","Icons",puVar7);
        iVar11 = local_32c[0];
      }
      FUN_0058ced0(0xfaf,acStack_31c);
      FUN_0058ceb0(0xfa1,0x40000000);
      FUN_0058ceb0(0xfb0,0xbf800000);
      local_348 = 0;
      local_344 = 0;
      local_342 = 0;
      local_4 = 2;
      FUN_00402e30(&local_348,"magicpop_effect_%d_icon",iVar11);
      iVar4 = FUN_00589930(local_348);
      if (iVar4 != 0) {
        *(uint *)(iVar4 + 0x2c) = *(uint *)(iVar4 + 0x2c) | 0x10;
      }
      piVar8 = (int *)piVar8[1];
      local_4 = 0xffffffff;
      FUN_00401f20(local_348);
      local_348 = 0;
      local_342 = 0;
      local_344 = 0;
      iVar4 = iStack_330;
      param_1 = local_340;
    } while (piVar8 != (int *)0x0);
  }
  if (iVar11 < 8) {
    iVar11 = 8 - iVar11;
    do {
      FUN_0058ceb0(0xfa1,0x3f800000);
      iVar11 = iVar11 + -1;
      param_1 = local_340;
    } while (iVar11 != 0);
  }
LAB_005b470d:
  iVar4 = local_334;
  if (local_334 == 0) {
LAB_005b4846:
    iVar4 = (**(code **)(*param_1 + 0x18))();
    if ((iVar4 == 7) || (iVar4 = (**(code **)(*param_1 + 0x18))(), iVar4 == 8)) {
      puVar13 = (undefined2 *)&DAT_00a2f7ec;
LAB_005b49b1:
      FUN_0058ced0(0xfde,puVar13);
      uVar3 = 0x3f800000;
    }
    else {
      iVar4 = *(int *)(DAT_00b333c4 + 0x5c);
      uVar3 = 0x40d;
      FUN_00582160(0,0,0x40d);
      uVar3 = FUN_0057cfb0(uVar3);
      cVar1 = (**(code **)(iVar4 + 0x1c))(param_1,0,&iStack_330,uVar3);
      if (cVar1 == '\0') {
        if (iStack_330 != 3) {
          FUN_0041a4b0(&local_33c,iStack_330);
          local_4 = 5;
          FUN_0058ced0(0xfde,local_33c._0_4_);
          FUN_0058ceb0(0xfa1,0x40000000);
          local_4 = 0xffffffff;
          FUN_00402da0();
          goto LAB_005b49d1;
        }
        puVar6 = (undefined4 *)FUN_00415390(&local_33c);
        local_4 = 4;
        FUN_0058ced0(0xfde,*puVar6);
        local_4 = 0xffffffff;
        FUN_00402da0();
        uVar3 = 0x40000000;
      }
      else {
        iVar4 = (**(code **)(*param_1 + 0x18))();
        if (iVar4 != 0) {
          puVar13 = &DAT_00a36430;
          goto LAB_005b49b1;
        }
        puVar6 = (undefined4 *)FUN_004156b0(local_32c);
        local_4 = 6;
        FUN_0058ced0(0xfde,*puVar6);
        local_4 = 0xffffffff;
        FUN_00402da0();
        uVar3 = 0x40000000;
      }
    }
    FUN_0058ceb0(0xfa1,uVar3);
  }
  else {
    piVar8 = (int *)FUN_009832e6(*(undefined4 *)(local_334 + 8),0,&PTR_PTR_00b03248,
                                 &PTR_PTR_00b03718,0);
    if ((piVar8 == (int *)0x0) || (*(char *)(*(int *)(iVar4 + 8) + 4) == '\"')) goto LAB_005b4846;
    local_348 = 0;
    local_344 = 0;
    local_342 = 0;
    local_4 = 3;
    iVar4 = (**(code **)(*piVar8 + 0x10))();
    if (iVar4 == 3) {
      FUN_00402e30(&local_348,&DAT_00a2f864,DAT_00b38bd8);
    }
    else {
      fVar12 = (float10)(*(code *)**(undefined4 **)(piVar8[1] + 0x24))(0);
      uVar10 = DAT_00b38bc8;
      uVar3 = DAT_00b38bc0;
      local_340 = (int *)(float)fVar12;
      if ((float)local_340 <= 0.0) {
        local_340 = (int *)0x3f800000;
      }
      iVar4 = piVar8[2];
      FUN_004849c0();
      uVar9 = FUN_009828c0();
      FUN_004849c0((short)iVar4,uVar10,uVar9);
      uVar10 = FUN_009828c0();
      FUN_00402e30(&local_348,"%s: %i/%i %s: %i",uVar3,uVar10);
    }
    FUN_0058ced0(0xfde,local_348);
    FUN_0058ceb0(0xfa1,0x40000000);
    local_4 = 0xffffffff;
    FUN_00402da0();
  }
LAB_005b49d1:
  FUN_0058fba0(0);
LAB_005b49dc:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005b4a10(int param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  undefined1 auStack_174 [4];
  int local_170;
  int local_16c;
  int *piStack_168;
  undefined4 uStack_164;
  int local_15c;
  undefined4 uStack_158;
  undefined2 uStack_154;
  undefined2 uStack_152;
  int local_150;
  int local_14c;
  double dStack_148;
  undefined1 auStack_13c [8];
  char acStack_134 [12];
  char acStack_128 [268];
  uint local_1c;
  int local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_009c0a31;
  local_14 = *unaff_FS_OFFSET;
  local_1c = DAT_00b30aac ^ (uint)auStack_174;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffe80;
  *unaff_FS_OFFSET = (int)&local_14;
  local_15c = param_1;
  local_14c = FUN_00589b70(0x400,uVar1);
  if (local_14c == 0) goto LAB_005b4de6;
  uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13364,0);
  local_150 = FUN_009832e6(uVar2);
  if (local_150 == 0) goto LAB_005b4de6;
  *(undefined4 *)(local_150 + 0x58) = 1;
  local_16c = *(int *)(param_1 + 0x1c);
  iVar8 = 0;
  local_170 = 0;
  piStack_168 = (int *)(**(code **)(*(int *)(DAT_00b333c4 + 0x68) + 8))();
  if (piStack_168 == (int *)0x0) {
LAB_005b4d46:
    iVar8 = 8 - iVar8;
    do {
      FUN_0058ceb0(0xfa1,0x3f800000);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  else {
    do {
      iVar7 = *piStack_168;
      if (iVar7 == 0) break;
      if (7 < iVar8) goto LAB_005b4d6b;
      if ((*(int *)(local_16c + 0x98) == 0x46464553) &&
         (*(int *)(*(int *)(*(int *)(iVar7 + 0xc) + 0x1c) + 0x98) == 0x46464553)) {
        puVar3 = (undefined4 *)FUN_004139f0(&dStack_148);
        uStack_c = 0;
        puVar4 = (undefined4 *)FUN_004139f0(auStack_13c);
        iVar5 = __stricmp((char *)*puVar4,(char *)*puVar3);
        FUN_00402da0();
        uStack_c = 0xffffffff;
        FUN_00402da0();
        iVar8 = local_170;
        if (iVar5 == 0) goto LAB_005b4b64;
      }
      else {
LAB_005b4b64:
        if ((local_16c == *(int *)(*(int *)(iVar7 + 0xc) + 0x1c)) &&
           ((((*(uint *)(local_16c + 0x58) >> 0x13 & 1) == 0 &&
             ((*(uint *)(local_16c + 0x58) >> 0x14 & 1) == 0)) ||
            (*(int *)(local_15c + 0x14) == *(int *)(*(int *)(iVar7 + 0xc) + 0x14))))) {
          puVar6 = *(undefined1 **)(local_16c + 0x48);
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_00a2f7ec;
          }
          _sprintf(acStack_128,"%s\\%s","Icons",puVar6);
          uVar2 = FUN_0041b9e0(*(undefined4 *)(iVar7 + 0x28));
          FUN_00419b10(uVar2);
          uStack_c = 1;
          FUN_00412fa0(&DAT_00a56274);
          iVar5 = (**(code **)(**(int **)(iVar7 + 8) + 0x18))();
          if (iVar5 == 6) {
            if ((*(int *)(iVar7 + 0x30) != 0) &&
               (iVar5 = FUN_009832e6(*(int *)(iVar7 + 0x30),0,&PTR_PTR_00b03248,&PTR_PTR_00b03298,0)
               , iVar5 != 0)) goto LAB_005b4c23;
          }
          else {
            iVar5 = *(int *)(iVar7 + 8);
LAB_005b4c23:
            puVar6 = *(undefined1 **)(iVar5 + 4);
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = &DAT_00a2f7ec;
            }
            FUN_00412fa0(puVar6);
          }
          iVar7 = FUN_005b2140(iVar7);
          if (-1 < iVar7) {
            _sprintf(acStack_134," (%d)",iVar7);
            FUN_00412fa0(acStack_134);
          }
          FUN_0058ceb0(0xfa1,0x40000000);
          FUN_0058ced0(0xfaf,acStack_128);
          FUN_0058ced0(0xfae,uStack_164);
          FUN_0058ceb0(0xfb0,0xbf800000);
          uStack_158 = 0;
          uStack_154 = 0;
          uStack_152 = 0;
          iVar8 = iVar8 + 1;
          uStack_c._0_1_ = 2;
          FUN_00402e30(&uStack_158,"magicpop_effect_%d_icon",iVar8);
          iVar7 = FUN_00589930(uStack_158);
          if (iVar7 != 0) {
            *(uint *)(iVar7 + 0x2c) = *(uint *)(iVar7 + 0x2c) | 0x10;
          }
          uStack_c = CONCAT31(uStack_c._1_3_,1);
          local_170 = iVar8;
          FUN_00402da0();
          uStack_c = 0xffffffff;
          FUN_00402da0();
        }
      }
      piStack_168 = (int *)piStack_168[1];
    } while (piStack_168 != (int *)0x0);
    if (iVar8 < 8) goto LAB_005b4d46;
  }
LAB_005b4d6b:
  FUN_0058ceb0(0xfae,param_3);
  FUN_0058ceb0(0xfaf,param_4);
  FUN_0058ceb0(0xfb1,param_5);
  iVar8 = local_150;
  *(float *)(local_150 + 0x50) = param_2;
  dStack_148 = (double)param_2;
  fVar9 = (float10)FUN_00588bd0(0xfcb);
  *(float *)(iVar8 + 0x54) = (float)((float10)dStack_148 - fVar9);
  FUN_0058ceb0(0xfa1,0x3f800000);
  FUN_0058fba0(0);
LAB_005b4de6:
  *unaff_FS_OFFSET = local_14;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005b4e10(int *param_1,float param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  undefined4 uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined4 uVar14;
  int local_248;
  double local_244;
  double local_23c;
  int local_234;
  double local_230;
  undefined4 local_228;
  undefined2 local_224;
  undefined2 local_222;
  undefined4 local_220;
  undefined2 local_21c;
  undefined2 local_21a;
  char local_218 [260];
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c0aa2;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_248;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffda8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_23c._0_4_ = param_1;
  local_234 = FUN_00589b70(0x400,uVar2);
  if ((local_234 == 0) || (param_1 == (int *)0x0)) goto LAB_005b57ac;
  uVar3 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13364,0);
  iVar4 = FUN_009832e6(uVar3);
  if (iVar4 == 0) goto LAB_005b57ac;
  iVar8 = param_1[2];
  switch(*(undefined1 *)(iVar8 + 4)) {
  case 0x14:
    uVar3 = FUN_009832e6(iVar8,0,&PTR_PTR_00b03248,&PTR_PTR_00b03778,0);
    local_230 = (double)CONCAT44(local_230._4_4_,uVar3);
    *(undefined4 *)(iVar4 + 0x58) = 1;
    FUN_0058ceb0(0xfa1,0x40000000);
    local_23c._0_4_ = (int *)0x7;
    do {
      FUN_0058ceb0(0xfa1,0x3f800000);
      local_23c._0_4_ = (int *)((int)local_23c._0_4_ + -1);
    } while (local_23c._0_4_ != (int *)0x0);
    _sprintf(local_218,"%s\\%s","Icons","icon_small_armor.dds");
    FUN_0058ced0(0xfaf,local_218);
    FUN_0058ceb0(0xfb0,0x42c80000);
    uVar3 = DAT_00b38be8;
    local_244 = 0.0;
    local_4 = 4;
    uVar2 = FUN_004b4c70();
    if ((undefined4 *)(&PTR_DAT_00b084e8)[uVar2 & 0xff] == (undefined4 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)(&PTR_DAT_00b084e8)[uVar2 & 0xff];
    }
    FUN_00402e30(&local_244,"%s %s",uVar11,uVar3);
    uVar3 = local_244._0_4_;
    FUN_0058ced0(0xfae,local_244._0_4_);
    FUN_0058ceb0(0xfae,param_3);
    FUN_0058ceb0(0xfaf,param_4);
    FUN_0058ceb0(0xfb1,param_5);
    *(float *)(iVar4 + 0x50) = param_2;
    local_230 = (double)param_2;
    fVar10 = (float10)FUN_00588bd0(0xfcb);
    fVar1 = (float)((float10)local_230 - fVar10);
    local_230 = (double)CONCAT44(local_230._4_4_,fVar1);
    *(float *)(iVar4 + 0x54) = fVar1;
    FUN_0058ceb0(0xfad,fVar1);
    FUN_0058ceb0(0xfa1,0x3f800000);
    local_4 = 0xffffffff;
    FUN_00401f20(uVar3);
    break;
  case 0x21:
    *(undefined4 *)(iVar4 + 0x58) = 1;
    FUN_0058ceb0(0xfa1,0x40000000);
    _sprintf(local_114,"%s\\%s","Icons","icon_small_damage.dds");
    FUN_0058ced0(0xfaf,local_114);
    FUN_0058ceb0(0xfb0,0x42c80000);
    if ((undefined4 *)(&DAT_00b39a44)[*(char *)(iVar8 + 0x90)] == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(&DAT_00b39a44)[*(char *)(iVar8 + 0x90)];
    }
    FUN_0058ced0(0xfae,uVar3);
    local_248 = 1;
    iVar8 = FUN_00484df0();
    if ((iVar8 == 0) || (piVar9 = (int *)(iVar8 + 0x34), piVar9 == (int *)0x0)) {
LAB_005b56dc:
      iVar8 = 8 - local_248;
      do {
        FUN_0058ceb0(0xfa1,0x3f800000);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    else {
      do {
        if (*piVar9 == 0) break;
        if (7 < local_248) goto LAB_005b5705;
        puVar5 = *(undefined1 **)(*(int *)(*piVar9 + 0x1c) + 0x48);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_00a2f7ec;
        }
        _sprintf(local_114,"%s\\%s","Icons",puVar5);
        FUN_0058ceb0(0xfa1,0x40000000);
        FUN_0058ced0(0xfaf,local_114);
        iVar8 = FUN_00484df0();
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = iVar8 + 0x24;
        }
        puVar7 = (undefined4 *)FUN_004145d0(&local_220,iVar8,0x3f800000);
        local_4 = 5;
        FUN_0058ced0(0xfae,*puVar7);
        local_4 = 0xffffffff;
        FUN_00401f20(local_220);
        local_248 = local_248 + 1;
        local_220 = 0;
        local_21a = 0;
        local_21c = 0;
        piVar9 = (int *)piVar9[1];
      } while (piVar9 != (int *)0x0);
      if (local_248 < 8) goto LAB_005b56dc;
    }
LAB_005b5705:
    FUN_0058ceb0(0xfae,param_3);
    FUN_0058ceb0(0xfaf,param_4);
    FUN_0058ceb0(0xfb1,param_5);
    *(float *)(iVar4 + 0x50) = param_2;
    local_244 = (double)param_2;
    fVar10 = (float10)FUN_00588bd0(0xfcb);
    fVar1 = (float)((float10)local_244 - fVar10);
    local_230 = (double)CONCAT44(local_230._4_4_,fVar1);
    *(float *)(iVar4 + 0x54) = fVar1;
    FUN_0058ceb0(0xfad,fVar1);
    FUN_0058ceb0(0xfa1,0x3f800000);
    break;
  case 0x26:
    local_248 = FUN_009832e6(iVar8,0,&PTR_PTR_00b03248,&PTR_PTR_00b0549c,0);
    *(undefined4 *)(iVar4 + 0x58) = 1;
    FUN_0058ceb0(0xfa1,0x40000000);
    local_234 = 7;
    do {
      FUN_0058ceb0(0xfa1,0x3f800000);
      iVar8 = local_248;
      local_234 = local_234 + -1;
    } while (local_234 != 0);
    puVar5 = *(undefined1 **)(local_248 + 0x4c);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_00a2f7ec;
    }
    _sprintf(local_218,"%s\\%s","Icons",puVar5);
    FUN_0058ced0(0xfaf,local_218);
    FUN_0058ceb0(0xfb0,0xbf800000);
    local_244 = 0.0;
    local_4 = 0;
    FUN_00402e30(&local_244,"magicpop_effect_%d_icon",1);
    iVar6 = FUN_00589930(local_244._0_4_);
    if (iVar6 != 0) {
      *(uint *)(iVar6 + 0x2c) = *(uint *)(iVar6 + 0x2c) | 0x10;
    }
    if ((int *)*local_23c._0_4_ == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)*local_23c._0_4_;
    }
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      uVar14 = 0;
      ppuVar13 = &PTR_PTR_00b03f78;
      ppuVar12 = &PTR_PTR_00b03850;
      uVar11 = 0;
      uVar3 = FUN_0041e210(0x2f);
      iVar6 = FUN_009832e6(uVar3,uVar11,ppuVar12,ppuVar13,uVar14);
    }
    uVar3 = DAT_00b38be0;
    local_230 = 0.0;
    local_4 = CONCAT31(local_4._1_3_,1);
    if (iVar6 == 0) {
      uVar2 = (uint)*(byte *)(iVar8 + 0x70);
    }
    else {
      uVar2 = (uint)*(char *)(iVar6 + 0xc);
    }
    uVar11 = FUN_004bc020(uVar2);
    FUN_00402e30(&local_230,"%s: %s",uVar3,uVar11);
    uVar3 = local_230._0_4_;
    FUN_0058ced0(0xfae,local_230._0_4_);
    FUN_0058ceb0(0xfae,param_3);
    FUN_0058ceb0(0xfaf,param_4);
    FUN_0058ceb0(0xfb1,param_5);
    *(float *)(iVar4 + 0x50) = param_2;
    local_23c = (double)param_2;
    fVar10 = (float10)FUN_00588bd0(0xfcb);
    piVar9 = (int *)(float)((float10)local_23c - fVar10);
    *(int **)(iVar4 + 0x54) = piVar9;
    local_23c._0_4_ = piVar9;
    FUN_0058ceb0(0xfad,piVar9);
    FUN_0058ceb0(0xfa1,0x3f800000);
    FUN_00401f20(uVar3);
    local_4 = 0xffffffff;
    FUN_00401f20(local_244._0_4_);
    break;
  case 0x2a:
    uVar3 = FUN_009832e6(iVar8,0,&PTR_PTR_00b03248,&PTR_PTR_00b06ac0,0);
    local_23c = (double)CONCAT44(local_23c._4_4_,uVar3);
    *(undefined4 *)(iVar4 + 0x58) = 1;
    FUN_0058ceb0(0xfa1,0x40000000);
    iVar8 = 7;
    do {
      FUN_0058ceb0(0xfa1,0x3f800000);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    if (local_23c._0_4_ == (int *)0x0) {
      local_248 = 0;
      local_23c._0_4_ = (int *)0x0;
    }
    else {
      local_248 = (int)local_23c._0_4_ + 0x78;
      local_23c._0_4_ = (int *)0x0;
    }
    do {
      if (local_248 == 0) break;
      iVar8 = *(int *)(local_248 + 4);
      puVar5 = *(undefined1 **)(*(int *)(iVar8 + 0x1c) + 0x48);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_00a2f7ec;
      }
      _sprintf(local_218,"%s\\%s","Icons",puVar5);
      FUN_0058ced0(0xfaf,local_218);
      FUN_0058ceb0(0xfb0,0xbf800000);
      local_244 = 0.0;
      local_4 = 2;
      local_230 = (double)CONCAT44(local_230._4_4_,(int)local_23c._0_4_ + 1);
      FUN_00402e30(&local_244,"magicpop_effect_%d_icon",(int)local_23c._0_4_ + 1);
      iVar6 = FUN_00589930(local_244._0_4_);
      if (iVar6 != 0) {
        *(uint *)(iVar6 + 0x2c) = *(uint *)(iVar6 + 0x2c) | 0x10;
      }
      FUN_0058ceb0(0xfa1,0x40000000);
      iVar8 = *(int *)(iVar8 + 0x10);
      puVar7 = (undefined4 *)FUN_00413be0(&local_228,6,0x3f800000,iVar8 == 0,0,iVar8 == 1);
      local_4._0_1_ = 3;
      FUN_0058ced0(0xfae,*puVar7);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_00401f20(local_228);
      local_228 = 0;
      local_222 = 0;
      local_224 = 0;
      FUN_0058ceb0(0xfae,param_3);
      FUN_0058ceb0(0xfaf,param_4);
      FUN_0058ceb0(0xfb1,param_5);
      *(float *)(iVar4 + 0x50) = param_2;
      local_23c = (double)param_2;
      fVar10 = (float10)FUN_00588bd0(0xfcb);
      fVar1 = (float)((float10)local_23c - fVar10);
      *(float *)(iVar4 + 0x54) = fVar1;
      local_23c._0_4_ = (int *)fVar1;
      FUN_0058ceb0(0xfad,fVar1);
      FUN_0058ceb0(0xfa1,0x3f800000);
      if (*(int *)(local_248 + 8) == 0) {
        local_248 = 0;
      }
      else {
        local_248 = *(int *)(local_248 + 8) + -4;
      }
      local_4 = 0xffffffff;
      FUN_00401f20(local_244._0_4_);
      local_244 = 0.0;
      local_23c._0_4_ = local_230._0_4_;
      local_23c._0_4_ = local_230._0_4_;
    } while ((int)local_230._0_4_ < 8);
  }
  FUN_0058fba0(0);
LAB_005b57ac:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b5870(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c1fb8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6cb1c;
  _DAT_00b3b40c = 0;
  DAT_00b3c0ec = 0;
  local_4 = 0;
  if (*(int *)(DAT_00b33398 + 0x24) != 0) {
    FUN_006a8d50(uVar2);
    cVar1 = FUN_006ab160(0xffff,0,0);
    if (cVar1 != '\0') {
      FUN_006ab420();
    }
    if (((DAT_00b33428 != 0) && (*(int *)(DAT_00b33428 + 0x20) != 0)) &&
       (*(int *)(DAT_00b33428 + 0x20) != 2)) {
      FUN_006a9b40();
      FUN_006a8d00();
    }
  }
  FUN_00459400();
  iVar3 = FUN_00582160(0,1);
  *(undefined1 *)(iVar3 + 0x94) = 1;
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005b5960(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x414);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
    return;
  }
  return;
}



void FUN_005b5a30(void)

{
  FUN_0058ceb0(0xfae,0x40000000);
  FUN_0058ceb0(0xfaf,0x40000000);
  FUN_0058ceb0(0xfaf,0x40000000);
  return;
}



void FUN_005b5a80(void)

{
  FUN_0058ceb0(0xfae,0x3f800000);
  FUN_0058ceb0(0xfaf,0x3f800000);
  FUN_0058ceb0(0xfb0,0x3f800000);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005b5ac0(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_108;
  builtin_strncpy(local_108,"Data\\Mus",8);
  builtin_strncpy(local_108 + 8,"ic\\",4);
  pcVar3 = PTR_s_Special_TES4Title_mp3_00b14374;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  puVar6 = (undefined4 *)&stack0xfffffef7;
  do {
    pcVar1 = (char *)((int)puVar6 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  } while (*pcVar1 != '\0');
  puVar5 = (undefined4 *)PTR_s_Special_TES4Title_mp3_00b14374;
  for (uVar4 = (uint)((int)pcVar3 - (int)PTR_s_Special_TES4Title_mp3_00b14374) >> 2; uVar4 != 0;
      uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = (int)pcVar3 - (int)PTR_s_Special_TES4Title_mp3_00b14374 & 3; uVar4 != 0;
      uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  DAT_00b3c0ec = 1;
  if (*(int *)(DAT_00b33398 + 0x24) != 0) {
    cVar2 = FUN_006ab160(8,local_108,0);
    if (cVar2 != '\0') {
      FUN_006ab420();
    }
  }
  return;
}



void FUN_005b5b70(char param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_00589b70(0x414);
  if (iVar2 != 0) {
    FUN_005898f0();
    fVar3 = (float10)FUN_00588bd0(0xfa1);
    if (param_1 == '\0') {
      if ((float10)1 != fVar3) {
        FUN_0058ceb0(0xfa1,(float)(float10)1);
        FUN_00582160(0,1);
        iVar2 = FUN_00582160(0,1);
        *(int *)(iVar2 + 0x8c) = *(int *)(iVar2 + 0x8c) + 1;
        fVar1 = (float)*(int *)(iVar2 + 0x8c);
        if (*(int *)(iVar2 + 0x8c) < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        goto LAB_005b5c6a;
      }
    }
    else if ((float10)2.0 != fVar3) {
      FUN_0058ceb0(0xfa1,(float)(float10)2.0);
      FUN_00582160(0,1);
      iVar2 = FUN_00582160(0,1);
      *(int *)(iVar2 + 0x8c) = *(int *)(iVar2 + 0x8c) + 1;
      fVar1 = (float)*(int *)(iVar2 + 0x8c);
      if (*(int *)(iVar2 + 0x8c) < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      FUN_0058ceb0(0xff0,fVar1);
      fVar1 = 1.0;
LAB_005b5c6a:
      FUN_0058ceb0(0xff0,fVar1);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b5f20(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c0ad8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00584640(uVar2);
  *in_ECX = &PTR_FUN_00a6cb1c;
  _DAT_00b3b40c = in_ECX;
  in_ECX[10] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  *(undefined1 *)((int)in_ECX + 0x4d) = 0;
  *(undefined1 *)(in_ECX + 0x13) = 0;
  local_4 = 0;
  if (DAT_00b33428 == 0) {
    DAT_00b3b408 = false;
  }
  else {
    DAT_00b3b408 = *(int *)(DAT_00b33428 + 0x20) != 0;
    if ((bool)DAT_00b3b408) goto LAB_005b5fad;
  }
  DAT_00b3b408 = FUN_00410c40(PTR_s_Map_loop_bik_00b03094,1);
LAB_005b5fad:
  DAT_00b3c0ec = 1;
  iVar1 = *(int *)(DAT_00b33398 + 0x24);
  FUN_006ac330(3);
  if ((iVar1 != 0) &&
     (((DAT_00b33428 == 0 || (*(int *)(DAT_00b33428 + 0x20) == 0)) ||
      (*(int *)(DAT_00b33428 + 0x20) == 2)))) {
    FUN_006a8d50();
    FUN_005b5ac0();
  }
  DAT_00b3b409 = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005b6020(byte param_1)

{
  FUN_005b5870();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



float FUN_005b6040(void)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  DWORD dwLen;
  LPCVOID lpData;
  undefined4 *puVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  float10 fVar13;
  DWORD DStack_20;
  LPVOID pvStack_1c;
  float fStack_18;
  int *piStack_14;
  uint uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c0b0b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar4 = (undefined4 *)FUN_00589b70(0x414,uVar3);
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)(1);
  }
  FUN_0057cc00();
  FUN_00579770();
  FUN_00578cf0(3);
  piStack_14 = (int *)FUN_00401f00(0x38);
  uStack_4 = 0;
  if (piStack_14 == (int *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_0071a8e0();
  }
  puVar1 = *(undefined4 **)(DAT_00b3f928 + 8);
  puVar11 = (undefined4 *)(DAT_00b3f928 + 8);
  uStack_4 = 0xffffffff;
  if (puVar1 != puVar4) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *puVar11 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  FUN_00582160(0,1);
  fVar12 = (float10)thunk_FUN_00584980();
  fVar6 = (float)FUN_00590420("Data\\Menus\\Options\\main_menu.xml");
  fStack_18 = fVar6;
  piVar7 = (int *)FUN_005898f0();
  if (piVar7 != (int *)0x0) {
    piStack_14 = piVar7;
    iVar8 = (**(code **)(*piVar7 + 0x34))();
    if (iVar8 == 0x414) {
      uVar9 = FUN_009832e6(fVar6,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
      FUN_00584880(uVar9);
      iVar8 = FUN_009832e6(piVar7,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13f90,0);
      if ((((*(int *)(iVar8 + 0x30) == 0) || (*(int *)(iVar8 + 0x34) == 0)) ||
          ((*(int *)(iVar8 + 0x38) == 0 ||
           ((*(int *)(iVar8 + 0x3c) == 0 || (*(int *)(iVar8 + 0x40) == 0)))))) ||
         (*(int *)(iVar8 + 0x44) == 0)) {
        FUN_004a7a60("Main Menu Creation Failed... Are your menu and art resources up to date?");
        *unaff_FS_OFFSET = local_c;
        return 0.0;
      }
      fVar13 = (float10)FUN_00588bd0(0xfa5);
      if ((fVar13 == (float10)6006.0) ||
         (fVar13 = (float10)FUN_00588bd0(0xfa5), fVar13 == (float10)102.0)) {
        FUN_0058ceb0(0xfab,(float)fVar12);
      }
      iVar10 = FUN_0058b800(fVar6,"version");
      dwLen = GetFileVersionInfoSizeA("Oblivion.EXE",&DStack_20);
      if ((dwLen != 0) && (iVar10 != 0)) {
        lpData = (LPCVOID)FUN_00401f00(dwLen);
        GetFileVersionInfoA("Oblivion.EXE",DStack_20,dwLen,lpData);
        VerQueryValueA(lpData,"\\StringFileInfo\\040904b0\\ProductVersion",&pvStack_1c,&uStack_10);
        FUN_0058ced0(0xfde,pvStack_1c);
        FUN_00401f20(lpData);
        fVar6 = fStack_18;
      }
      if (DAT_00b3b408 == '\0') {
        uVar9 = 0x40000000;
      }
      else {
        uVar9 = 0x3f800000;
      }
      FUN_0058ceb0(0xfa1,uVar9);
      FUN_0058fba0(0);
      if ((double)DAT_00b06c50 / (double)DAT_00b06c4c != 0.75) {
        iVar8 = *(int *)(*(int *)(iVar8 + 0x44) + 0x24);
        *(float *)(iVar8 + 0x54) = *(float *)(iVar8 + 0x54) - 214.0;
        *(undefined4 *)(iVar8 + 0x58) = *(undefined4 *)(iVar8 + 0x58);
        *(float *)(iVar8 + 0x5c) = *(float *)(iVar8 + 0x5c) + 160.0;
        fStack_18 = 1.3333334;
        *(undefined4 *)(iVar8 + 0x60) = 0x3faaaaab;
        FUN_00707370(0,0);
      }
      FUN_0045d450();
      if ((*(int **)(DAT_00b33b00 + 0x6c) == (int *)0x0) || (**(int **)(DAT_00b33b00 + 0x6c) == 0))
      {
        FUN_0058ceb0(0xfa1,0x3f800000);
        FUN_00582160(0,1);
        iVar8 = FUN_00582160(0,1);
        *(int *)(iVar8 + 0x8c) = *(int *)(iVar8 + 0x8c) + 1;
        fVar2 = (float)*(int *)(iVar8 + 0x8c);
        if (*(int *)(iVar8 + 0x8c) < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
      }
      else {
        FUN_0058ceb0(0xfa1,0x40000000);
        FUN_00582160(0,1);
        uVar9 = FUN_005966f0(1);
        FUN_0057d300(0xff0,uVar9);
        fVar2 = 1.0;
      }
      FUN_0058ceb0(0xff0,fVar2);
      if (iVar10 != 0) {
        fVar12 = (float10)FUN_00588bd0(0xfd2);
        fStack_18 = ABS((float)(fVar12 / (float10)100.0));
        *(float *)(*(int *)(iVar10 + 0x24) + 0x60) = fStack_18;
        fVar2 = 1.0 / (float)(fVar12 / (float10)100.0);
        fVar12 = (float10)FUN_00588bd0(0xfad);
        fStack_18 = (float)(fVar12 * (float10)fVar2);
        FUN_0058ceb0(0xfad,fStack_18);
        fVar12 = (float10)FUN_00588bd0(0xfac);
        fStack_18 = (float)(fVar12 * (float10)fVar2);
        FUN_0058ceb0(0xfac,fStack_18);
      }
      FUN_0058fba0(0);
      FUN_00585190(0);
    }
    else if (piVar7[1] != 0) {
      (**(code **)*piVar7)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return fVar6;
}



void FUN_005b64c0(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  
  if (*(char *)((int)in_ECX + 0x4d) == '\0') {
    switch(param_1) {
    case 2:
      *(undefined1 *)((int)in_ECX + 0x4d) = 1;
      FUN_00579c10(DAT_00b38770,&LAB_005b5d60,1,DAT_00b38cf8,DAT_00b38d00,0);
      return;
    case 3:
      FUN_0057de50(1);
      FUN_00579c10(DAT_00b38778,&LAB_005b5df0,1,DAT_00b38cf8,DAT_00b38d00,0);
      return;
    case 4:
      (**(code **)(*in_ECX + 0x14))(param_1,param_2);
      FUN_005aea60(0);
      return;
    case 5:
      (**(code **)(*in_ECX + 0x14))(param_1,param_2);
      FUN_005bd680();
      return;
    case 6:
      (**(code **)(*in_ECX + 0x14))(param_1,param_2);
      FUN_0059d680();
      return;
    case 7:
      (**(code **)(*in_ECX + 0x14))(param_1,param_2);
      *(undefined1 *)((int)in_ECX + 0x4d) = 1;
      FUN_00579c10(DAT_00b38c50,&LAB_005b59b0,1,DAT_00b38c58,DAT_00b38d08,0);
    }
  }
  return;
}



undefined1 FUN_005b65f0(void)

{
  int in_ECX;
  
  if (((((((*(int *)(in_ECX + 0x28) != 0) && (*(int *)(in_ECX + 0x2c) != 0)) &&
         (*(int *)(in_ECX + 0x30) != 0)) &&
        ((*(int *)(in_ECX + 0x34) != 0 && (*(int *)(in_ECX + 0x38) != 0)))) &&
       (((*(int *)(in_ECX + 0x3c) != 0 &&
         ((*(int *)(in_ECX + 0x40) != 0 && (*(int *)(in_ECX + 0x44) != 0)))) &&
        (*(int *)(in_ECX + 0x48) != 0)))) &&
      ((((*(int *)(in_ECX + 0x4c) != 0 && (*(int *)(in_ECX + 0x50) != 0)) &&
        (*(int *)(in_ECX + 0x54) != 0)) &&
       (((*(int *)(in_ECX + 0x58) != 0 && (*(int *)(in_ECX + 0x5c) != 0)) &&
        ((*(int *)(in_ECX + 0x60) != 0 &&
         ((*(int *)(in_ECX + 100) != 0 && (*(int *)(in_ECX + 0x68) != 0)))))))))) &&
     ((*(int *)(in_ECX + 0x6c) != 0 &&
      ((*(int *)(in_ECX + 0x70) != 0 && (*(int *)(in_ECX + 0x74) != 0)))))) {
    return 1;
  }
  return 0;
}



void FUN_005b67f0(float param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00588bd0(0xfba);
  FUN_0058ceb0(0xfb8,(float)(fVar1 + (float10)param_1));
  fVar1 = (float10)FUN_00588bd0(0xfbb);
  FUN_0058ceb0(0xfb9,(float)(fVar1 + (float10)param_2));
  return;
}



void FUN_005b6860(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  int in_ECX;
  int iVar10;
  undefined4 *puVar11;
  undefined1 local_c [12];
  
  puVar11 = (undefined4 *)(in_ECX + 0x30);
  for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = *param_1;
    param_1 = param_1 + 1;
    puVar11 = puVar11 + 1;
  }
  fVar1 = *param_2;
  fVar2 = *param_3;
  fVar3 = param_2[1];
  fVar4 = param_3[1];
  fVar5 = param_2[2];
  fVar6 = param_3[2];
  pfVar9 = (float *)FUN_007101f0(local_c,param_2);
  fVar7 = pfVar9[1];
  fVar8 = pfVar9[2];
  *(float *)(in_ECX + 0x54) = (fVar1 + fVar2) - *pfVar9;
  *(float *)(in_ECX + 0x58) = (fVar3 + fVar4) - fVar7;
  *(float *)(in_ECX + 0x5c) = (fVar5 + fVar6) - fVar8;
  return;
}



void FUN_005b69b0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float10 fVar4;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  
  uVar6 = CONCAT44(unaff_ESI,unaff_EDI);
  if (param_1 == 0xc) {
    FUN_00582160(0,1);
    fVar4 = (float10)FUN_0057d7f0(uVar6);
    FUN_0057d7f0(uVar6,(double)fVar4);
    iVar2 = FUN_009828c0();
    fVar4 = (float10)FUN_00588cf0();
    dVar7 = (double)((float10)iVar2 - fVar4);
    fVar4 = (float10)FUN_00588bd0(0xfb6);
    FUN_0058ceb0(0xfb7,0xce6e6b28);
    dVar7 = (double)(float)((float10)dVar7 / fVar4);
    FUN_00588bd0(0xfb1);
    iVar2 = FUN_009828c0(uVar6,dVar7);
    FUN_0058ceb0(0xfb7,(float)iVar2);
    FUN_0058ceb0(0xfb7,0);
    return;
  }
  if ((param_1 == 0x29) || ((param_2 != 0 && (*(int *)(param_2 + 0x10) == in_ECX[0x16])))) {
    (**(code **)(*in_ECX + 0x14))(param_1,param_2);
    FUN_00582160(0,1);
    FUN_0057d7a0();
    iVar2 = FUN_009828c0();
    fVar1 = (float)in_ECX[0x22];
    FUN_0057d7f0();
    FUN_0057d7f0();
    iVar3 = FUN_009828c0();
    fVar5 = (float)in_ECX[0x23] - (float)iVar3;
    fVar4 = (float10)FUN_00588bd0(0xfba);
    FUN_0058ceb0(0xfb8,(float)(fVar4 + (float10)(fVar1 - (float)iVar2)));
    fVar4 = (float10)FUN_00588bd0(0xfbb);
    FUN_0058ceb0(0xfb9,(float)(fVar4 + (float10)fVar5));
    FUN_0057d7a0();
    iVar2 = FUN_009828c0();
    in_ECX[0x22] = (int)(float)iVar2;
    FUN_0057d7f0();
    FUN_0057d7f0();
    iVar2 = FUN_009828c0();
    in_ECX[0x23] = (int)(float)iVar2;
  }
  else if (param_1 == 0x2d) {
    (**(code **)(*in_ECX + 0x14))(0x2d,param_2);
    FUN_00582160(0,1);
    FUN_0057d7a0();
    iVar2 = FUN_009828c0();
    fVar1 = (float)in_ECX[0x22];
    dVar7 = (double)(float)in_ECX[0x23];
    iVar3 = FUN_00593020();
    FUN_005b67f0(-(fVar1 - (float)iVar2),-((float)dVar7 - (float)iVar3),0);
    FUN_0057d7a0();
    iVar2 = FUN_009828c0();
    in_ECX[0x22] = (int)(float)iVar2;
    iVar2 = FUN_00593020();
    in_ECX[0x23] = (int)(float)iVar2;
    return;
  }
  return;
}



void FUN_005b7020(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  undefined4 uVar4;
  
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
  return;
}



void FUN_005b7150(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3ff);
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if ((iVar1 != 0) && (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0)) {
      (**(code **)**(undefined4 **)(iVar1 + 4))(1);
    }
  }
  return;
}



void FUN_005b7180(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  undefined4 uVar10;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  uVar5 = DAT_00b06a2c - 1U >> 1;
  pfVar4 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
  fStack_24 = *pfVar4;
  fStack_20 = pfVar4[1];
  uVar10 = 1;
  pfVar9 = &fStack_24;
  fStack_1c = pfVar4[2];
  pfVar4 = pfVar9;
  FUN_006ecc80(pfVar9,pfVar9,1);
  FUN_004cce20(pfVar9,pfVar4,uVar10);
  cVar3 = FUN_004d8b90();
  if (cVar3 == '\0') {
    iVar6 = (int)ROUND(fStack_24);
    iVar8 = (int)ROUND(fStack_20);
  }
  else {
    iVar6 = (int)ROUND(fStack_24) + -0x800;
    iVar8 = (int)ROUND(fStack_20) + -0x800;
  }
  cVar3 = FUN_004d8b90();
  iVar7 = ((iVar6 >> 0xc) - uVar5) * 0x1000;
  iVar6 = ((iVar8 >> 0xc) - uVar5) * 0x1000;
  if (cVar3 != '\0') {
    iVar7 = iVar7 + 0x800;
    iVar6 = iVar6 + 0x800;
  }
  fStack_c = (float)iVar7;
  fStack_14 = (float)iVar6;
  fStack_18 = fStack_c;
  fVar1 = *param_1 * 4096.0 * 0.001953125;
  uStack_10 = 0;
  fVar2 = (float)(DAT_00b06a2c + -1);
  fStack_4 = DAT_00b3f9b0;
  if (DAT_00b06a2c + -1 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  uVar10 = 0;
  pfVar9 = &fStack_30;
  fStack_8 = 4096.0 - (*param_2 - fVar2 * 512.0) * 0.001953125 * 4096.0;
  fStack_30 = fStack_c + fVar1;
  fStack_2c = fStack_14 + fStack_8;
  fStack_28 = DAT_00b3f9b0 + 0.0;
  pfVar4 = pfVar9;
  fStack_c = fVar1;
  FUN_006ecc80(pfVar9,pfVar9,0);
  FUN_004cce20(pfVar9,pfVar4,uVar10);
  *param_1 = fStack_30;
  *param_2 = fStack_2c;
  return;
}



void FUN_005b7360(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c0ba6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00584640(uVar1);
  *in_ECX = &PTR_FUN_00a6cc9c;
  in_ECX[0x2c] = 0;
  *(undefined2 *)(in_ECX + 0x2d) = 0;
  *(undefined2 *)((int)in_ECX + 0xb6) = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  local_4 = 1;
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
  *(undefined1 *)(in_ECX + 0x37) = 0;
  *(undefined1 *)(in_ECX + 0x21) = 0xff;
  in_ECX[0x31] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  puVar2 = (undefined4 *)FUN_00401f00(8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    in_ECX[0x32] = puVar2;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  in_ECX[0x32] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005b7490(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c0388;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6cc9c;
  if (in_ECX[0x31] != 0) {
    FUN_004526e0(uVar1);
    FUN_00401f20(in_ECX[0x31]);
  }
  if (in_ECX[0x32] != 0) {
    FUN_004526e0(uVar1);
    FUN_00401f20(in_ECX[0x32]);
  }
  FUN_00401f20(in_ECX[0x2c]);
  in_ECX[0x2c] = 0;
  *(undefined2 *)((int)in_ECX + 0xb6) = 0;
  *(undefined2 *)(in_ECX + 0x2d) = 0;
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x005b8577) */
/* WARNING: Removing unreachable block (ram,0x005b8585) */

int * FUN_005b7550(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  short sVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  void *pvVar10;
  undefined1 uVar11;
  byte bVar12;
  char cVar13;
  uint uVar14;
  LONG LVar15;
  float *pfVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  undefined4 *puVar21;
  void *_Src;
  float *pfVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  short sVar25;
  int in_ECX;
  float *pfVar26;
  uint uVar27;
  uint uVar28;
  short sVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  undefined4 *puVar34;
  int *unaff_FS_OFFSET;
  float10 fVar35;
  byte bStack_161;
  uint uStack_160;
  float fStack_158;
  int iStack_154;
  undefined4 *puStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_140;
  int iStack_13c;
  undefined4 *puStack_12c;
  undefined4 *local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  void *pvStack_118;
  float *pfStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  void *pvStack_104;
  float fStack_100;
  int local_fc;
  void *pvStack_f8;
  float *pfStack_f4;
  int iStack_f0;
  float *pfStack_ec;
  undefined4 *puStack_e8;
  float fStack_e4;
  uint uStack_e0;
  int iStack_dc;
  float *pfStack_d8;
  int iStack_d4;
  void *pvStack_d0;
  int iStack_cc;
  int iStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 *puStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  double dStack_70;
  undefined4 *puStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  int local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_009c0c3f;
  local_14 = *unaff_FS_OFFSET;
  uVar14 = DAT_00b30aac ^ (uint)&stack0xfffffe80;
  *unaff_FS_OFFSET = (int)&local_14;
  puVar21 = *(undefined4 **)(in_ECX + 200);
  iVar17 = puVar21[1];
  local_fc = in_ECX;
  while (iVar17 != 0) {
    iVar17 = *(int *)(puVar21[1] + 4);
    FUN_00401f20(puVar21[1],uVar14);
    puVar21[1] = iVar17;
  }
  *puVar21 = 0;
  piVar1 = *(int **)(*(int *)(in_ECX + 100) + 0x24);
  if (piVar1 != (int *)0x0) {
    FUN_00977c50(3);
    uVar14 = 0;
    if (*(short *)((int)piVar1 + 0xb6) != 0) {
      if (*(short *)((int)piVar1 + 0xb6) == 0) goto LAB_005b763e;
      do {
        iVar17 = *(int *)(piVar1[0x2c] + uVar14 * 4);
        if ((((iVar17 != 0) &&
             ((**(code **)(*piVar1 + 0x88))(&local_128,iVar17), puVar21 = local_128,
             local_128 != (undefined4 *)0x0)) &&
            (LVar15 = InterlockedDecrement(local_128 + 1), LVar15 == 0)) &&
           (puVar21 != (undefined4 *)0x0)) {
          (**(code **)*puVar21)(1);
        }
LAB_005b763e:
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(ushort *)((int)piVar1 + 0xb6));
    }
    FUN_00977c50(2);
    pfVar16 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
    uVar14 = DAT_00b06a2c;
    fStack_124 = *pfVar16;
    fStack_120 = pfVar16[1];
    fStack_11c = pfVar16[2] + 10.0;
    iVar17 = DAT_00b06a2c * DAT_00b06a2c;
    local_128 = (undefined4 *)(DAT_00b06a2c << 9);
    if (((DAT_00b42d40 == '\0') || (DAT_00b42f3e == '\0')) || (bVar7 = true, DAT_00b42f48 < 2)) {
      bVar7 = false;
    }
    bVar8 = true;
    fVar35 = (float10)FUN_00411f00();
    fStack_e4 = (float)fVar35;
    if (bVar7) {
      piVar18 = (int *)FUN_007b8200(&puStack_12c,"Data\\Textures\\Menus\\Map\\local\\MapPaper01.dds"
                                    ,1,0);
      puVar21 = DAT_00b42d44;
      uStack_c = 0;
      if (DAT_00b42d44 != (undefined4 *)*piVar18) {
        if (((DAT_00b42d44 != (undefined4 *)0x0) &&
            (LVar15 = InterlockedDecrement(DAT_00b42d44 + 1), LVar15 == 0)) &&
           (puVar21 != (undefined4 *)0x0)) {
          (**(code **)*puVar21)(1);
        }
        DAT_00b42d44 = (undefined4 *)*piVar18;
        if (DAT_00b42d44 != (undefined4 *)0x0) {
          InterlockedIncrement(DAT_00b42d44 + 1);
        }
      }
      uStack_c = 0xffffffff;
      if (((puStack_12c != (undefined4 *)0x0) &&
          (LVar15 = InterlockedDecrement(puStack_12c + 1), LVar15 == 0)) &&
         (puStack_12c != (undefined4 *)0x0)) {
        (**(code **)*puStack_12c)(1);
      }
    }
    uVar9 = DAT_00b45dc0;
    uStack_44 = DAT_00b45e04;
    uStack_38 = DAT_00b45e10;
    uStack_40 = DAT_00b45e08;
    uStack_3c = DAT_00b45e0c;
    DAT_00b45e0c = DAT_00b25ad8;
    DAT_00b45e04 = DAT_00b25ad0;
    DAT_00b45e08 = DAT_00b25ad4;
    iVar31 = 0;
    DAT_00b45e10 = DAT_00b25adc;
    DAT_00b45dc0 = 1;
    bStack_161 = 1;
    if (DAT_00b35234 != 0) {
      bStack_161 = *(byte *)(DAT_00b35234 + 0x18) & 1;
      *(ushort *)(DAT_00b35234 + 0x18) = *(ushort *)(DAT_00b35234 + 0x18) | 1;
    }
    iVar30 = DAT_00b333a8;
    bVar12 = *(byte *)(DAT_00b333a8 + 0x18) & 1;
    iStack_f0 = DAT_00b333a8;
    if (bVar12 == 0) {
      *(ushort *)(DAT_00b333a8 + 0x18) = *(ushort *)(DAT_00b333a8 + 0x18) | 1;
    }
    iStack_13c = 0;
    if (*(int *)(DAT_00b333a0 + 0x34) == 0) {
      iStack_13c = thunk_FUN_00401aa0(iVar17 * 4,1);
      puStack_150 = (undefined4 *)0x0;
      if (0 < (int)uVar14) {
        do {
          iStack_154 = 0;
          do {
            piVar18 = (int *)FUN_00482150(puStack_150,iStack_154);
            if ((piVar18 != (int *)0x0) && (*piVar18 != 0)) {
              iVar30 = 0;
              iVar33 = 8;
              do {
                iVar19 = FUN_004ca790();
                if (((iVar19 == 0) || ((uint)*(ushort *)(iVar19 + 0xb6) <= iVar30 + 2U)) ||
                   ((iVar19 = *(int *)(iVar33 + *(int *)(iVar19 + 0xb0)), iVar19 == 0 ||
                    (*(short *)(iVar19 + 0xb6) == 0)))) {
                  iVar19 = 0;
                }
                else {
                  iVar19 = **(int **)(iVar19 + 0xb0);
                }
                if ((iVar19 == 0) || ((*(byte *)(iVar19 + 0x18) & 1) == 0)) {
                  *(undefined1 *)(iStack_13c + iVar31) = 0;
                }
                else {
                  *(ushort *)(iVar19 + 0x18) = *(ushort *)(iVar19 + 0x18) & 0xfffe;
                  *(undefined1 *)(iStack_13c + iVar31) = 1;
                }
                iVar33 = iVar33 + 4;
                iVar31 = iVar31 + 1;
                iVar30 = iVar30 + 1;
              } while (iVar33 < 0x18);
            }
            iStack_154 = iStack_154 + 1;
          } while (iStack_154 < (int)uVar14);
          puStack_150 = (undefined4 *)((int)puStack_150 + 1);
          iVar30 = iStack_f0;
        } while ((int)puStack_150 < (int)uVar14);
      }
    }
    puStack_12c = (undefined4 *)0x0;
    if (0 < iVar17) {
      fStack_b4 = 0.0;
      uStack_ac = 0;
      uStack_a8 = 0x3f800000;
      uStack_a4 = 0;
      dStack_70 = (double)fStack_e4;
      fVar2 = (float)(int)local_128;
      uStack_84 = 0xbc03126f;
      do {
        uVar20 = (uint)puStack_12c / DAT_00b06a2c;
        uVar28 = (uint)puStack_12c % DAT_00b06a2c;
        puStack_150 = (undefined4 *)0x0;
        fStack_110 = DAT_00b3f9a8;
        uStack_c = 1;
        fStack_10c = DAT_00b3f9ac;
        fStack_108 = DAT_00b3f9b0;
        uStack_e0 = uVar28;
        cVar13 = FUN_004d8b90();
        iVar31 = (int)uVar14 >> 1;
        if (cVar13 == '\0') {
          iVar30 = FUN_004d6670();
          iStack_cc = (int)ROUND(fStack_124);
          iStack_d4 = (int)ROUND(fStack_120);
          iVar33 = ((iStack_cc >> 0xc) - iVar31) + uVar28;
          iVar31 = ((iStack_d4 >> 0xc) - iVar31) + uVar20;
          fStack_110 = (float)(iVar33 * 0x1000);
          fStack_10c = (float)(iVar31 * 0x1000);
          uStack_74 = 0;
          fStack_108 = 0.0;
          fStack_7c = fStack_110;
          fStack_78 = fStack_10c;
          if ((iVar30 != 0) && (iVar31 = FUN_004efe80(iVar33,iVar31), iVar31 != 0)) {
            FUN_004cced0();
            piVar18 = (int *)FUN_004d41a0(&puStack_64);
            puVar21 = (undefined4 *)*piVar18;
            if (puVar21 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar21 + 1);
              puStack_150 = puVar21;
            }
            puVar21 = puStack_64;
            uStack_c = CONCAT31(uStack_c._1_3_,1);
            if (((puStack_64 != (undefined4 *)0x0) &&
                (LVar15 = InterlockedDecrement(puStack_64 + 1), LVar15 == 0)) &&
               (puVar21 != (undefined4 *)0x0)) {
              (**(code **)*puVar21)(1);
            }
            FUN_004cbdb0(*(undefined4 *)(local_fc + 200));
          }
        }
        else {
          iVar30 = FUN_006ecc80();
          if (iVar30 != 0) {
            FUN_004cce20(&fStack_124,&fStack_24,1);
            iStack_dc = (int)ROUND(fStack_24);
            iStack_c8 = (int)ROUND(fStack_20);
            iVar30 = ((iStack_dc + -0x800 >> 0xc) - iVar31) + uVar28;
            iVar31 = ((iStack_c8 + -0x800 >> 0xc) - iVar31) + uVar20;
            fStack_110 = (float)(iVar30 * 0x1000 + 0x800);
            fStack_10c = (float)(iVar31 * 0x1000 + 0x800);
            uStack_58 = 0;
            fStack_108 = 0.0;
            fStack_60 = fStack_110;
            fStack_5c = fStack_10c;
            FUN_004ccee0(iVar30,iVar31,0);
            piVar18 = (int *)FUN_004d4250(&puStack_a0,iVar30,iVar31);
            puVar21 = (undefined4 *)*piVar18;
            if (puVar21 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar21 + 1);
              puStack_150 = puVar21;
            }
            puVar21 = puStack_a0;
            uStack_c = CONCAT31(uStack_c._1_3_,1);
            if (((puStack_a0 != (undefined4 *)0x0) &&
                (LVar15 = InterlockedDecrement(puStack_a0 + 1), LVar15 == 0)) &&
               (puVar21 != (undefined4 *)0x0)) {
              (**(code **)*puVar21)(1);
            }
            if (bVar8) {
              FUN_004cbdb0(*(undefined4 *)(local_fc + 200));
              bVar8 = false;
            }
          }
        }
        pfVar16 = (float *)FUN_00401f00(0xd8c);
        puVar21 = (undefined4 *)FUN_00401f00(0xd8c);
        pfStack_f4 = (float *)FUN_00401f00(0x908);
        pfStack_114 = (float *)FUN_00401f00(0x1210);
        if (pfStack_114 == (float *)0x0) {
          pfStack_114 = (float *)0x0;
        }
        else {
          iVar31 = 0x120;
          pfVar26 = pfStack_114 + 2;
          do {
            pfVar26[-2] = 0.0;
            iVar31 = iVar31 + -1;
            pfVar26[-1] = 0.0;
            *pfVar26 = 0.0;
            pfVar26[1] = 0.0;
            pfVar26 = pfVar26 + 4;
          } while (-1 < iVar31);
        }
        _Src = (void *)FUN_00401f00(0xc00);
        pvStack_104 = (void *)0x0;
        pvStack_f8 = (void *)0x0;
        pvStack_118 = (void *)0x0;
        pvStack_d0 = (void *)0x0;
        if (bVar7) {
          pvStack_104 = (void *)FUN_00401f00(0xd8c);
          pvStack_f8 = (void *)FUN_00401f00(0xd8c);
          pvStack_118 = (void *)FUN_00401f00(0x908);
          pvStack_d0 = (void *)FUN_00401f00(0xc00);
        }
        uStack_160 = 0;
        pfVar26 = pfVar16;
        do {
          iStack_140 = 0;
          fStack_b0 = (float)(int)uStack_160 - 256.0;
          pfVar22 = pfVar26;
          do {
            fStack_b8 = (float)iStack_140;
            iStack_140 = iStack_140 + 0x20;
            fStack_b8 = fStack_b8 - 256.0;
            *pfVar22 = fStack_b8;
            pfVar22[1] = fStack_b4;
            pfVar22[2] = fStack_b0;
            pfVar22 = pfVar22 + 3;
          } while (iStack_140 < 0x220);
          uStack_160 = uStack_160 + 0x20;
          pfVar26 = pfVar26 + 0x33;
        } while ((int)uStack_160 < 0x220);
        if (bVar7) {
          _memcpy(pvStack_104,pfVar16,0xd8c);
        }
        fVar3 = fStack_108 + 0.0;
        uStack_160 = 0;
        pfStack_d8 = pfStack_f4;
        pfStack_ec = pfStack_114;
        fVar4 = (float)dStack_70;
        puStack_e8 = puVar21;
        do {
          iStack_140 = 0;
          fStack_8c = 1.0 - (float)(int)uStack_160 / 17.0;
          fStack_100 = (float)(int)uStack_160 * fVar4;
          pfVar26 = pfStack_ec;
          pfVar22 = pfStack_d8;
          puVar34 = puStack_e8;
          pfStack_ec = pfStack_ec + 0x44;
          puStack_e8 = puStack_e8 + 0x33;
          pfStack_d8 = pfStack_d8 + 0x22;
          do {
            *puVar34 = uStack_ac;
            puVar34[1] = uStack_a8;
            fStack_90 = (float)iStack_140 / 17.0;
            puVar34[2] = uStack_a4;
            pfVar22[1] = fStack_8c;
            dStack_70 = (double)fStack_e4;
            *pfVar22 = fStack_90;
            fStack_c4 = (float)iStack_140 * fStack_e4 + fStack_110;
            fStack_c0 = fStack_10c + fStack_100;
            fStack_158 = 4.0;
            fVar4 = fStack_e4;
            fStack_bc = fVar3;
            if (DAT_00b1437c != '\0') {
              iVar31 = FUN_004d2d00(&fStack_c4);
              fStack_158 = (float)iVar31;
              fVar4 = (float)dStack_70;
            }
            if (bVar7) {
              uStack_54 = 0x3f800000;
              uStack_50 = 0x3f800000;
              uStack_4c = 0x3f800000;
              *pfVar26 = 1.0;
              fStack_48 = fStack_158 * 0.25;
              pfVar26[1] = 1.0;
              pfVar26[2] = 1.0;
              pfVar26[3] = fStack_48;
            }
            else {
              fStack_34 = fStack_158 * 0.25;
              *pfVar26 = fStack_34;
              uStack_28 = 0x3f800000;
              pfVar26[1] = fStack_34;
              pfVar26[2] = fStack_34;
              pfVar26[3] = 1.0;
              fStack_30 = fStack_34;
              fStack_2c = fStack_34;
            }
            iStack_140 = iStack_140 + 1;
            puVar34 = puVar34 + 3;
            pfVar22 = pfVar22 + 2;
            pfVar26 = pfVar26 + 4;
          } while (iStack_140 < 0x11);
          uStack_160 = uStack_160 + 1;
        } while ((int)uStack_160 < 0x11);
        if (bVar7) {
          _memcpy(pvStack_f8,puVar21,0xd8c);
          _memcpy(pvStack_118,pfStack_f4,0x908);
        }
        pvVar10 = pvStack_d0;
        iVar31 = 0;
        uStack_160 = 0;
        do {
          uVar32 = 0;
          uVar28 = uStack_160 & 0x80000001;
          if ((int)uVar28 < 0) {
            uVar28 = (uVar28 - 1 | 0xfffffffe) + 1;
          }
          sVar6 = (short)uStack_160 * 0x11;
          iVar30 = ((uStack_160 & 0xffff) + 1) * 0x11;
          do {
            uVar27 = uVar32 & 0x80000001;
            if ((int)uVar27 < 0) {
              uVar27 = (uVar27 - 1 | 0xfffffffe) + 1;
            }
            sVar5 = (short)iVar30;
            sVar29 = (short)uVar32;
            if (uVar27 == uVar28) {
              fStack_100 = (float)(iVar30 + 1 + (uVar32 & 0xffff));
              sVar25 = SUB42(fStack_100,0);
              *(short *)((int)_Src + iVar31 * 2) = sVar25;
              *(short *)((int)_Src + (iVar31 + 1) * 2) = sVar5 + sVar29;
              sVar29 = sVar29 + sVar6;
              *(short *)((int)_Src + (iVar31 + 2) * 2) = sVar29;
              *(short *)((int)_Src + (iVar31 + 3) * 2) = sVar29;
              *(short *)((int)_Src + (iVar31 + 4) * 2) = sVar29 + 1;
            }
            else {
              sVar25 = sVar5 + sVar29;
              *(short *)((int)_Src + iVar31 * 2) = sVar25;
              sVar29 = sVar29 + sVar6;
              *(short *)((int)_Src + (iVar31 + 1) * 2) = sVar29;
              sVar29 = sVar29 + 1;
              *(short *)((int)_Src + (iVar31 + 2) * 2) = sVar29;
              *(short *)((int)_Src + (iVar31 + 3) * 2) = sVar29;
              *(short *)((int)_Src + (iVar31 + 4) * 2) = sVar25 + 1;
            }
            *(short *)((int)_Src + (iVar31 + 5) * 2) = sVar25;
            uVar32 = uVar32 + 1;
            iVar31 = iVar31 + 6;
          } while ((int)uVar32 < 0x10);
          uStack_160 = uStack_160 + 1;
        } while ((int)uStack_160 < 0x10);
        uVar28 = uStack_e0;
        if (bVar7) {
          _memcpy(pvStack_d0,_Src,0xc00);
          iVar31 = FUN_00401f00(0xd0);
          uStack_c._0_1_ = 4;
          if (iVar31 == 0) {
            iVar31 = 0;
          }
          else {
            FUN_0057d7f0();
            uVar23 = FUN_009828c0();
            FUN_0057d7a0(uVar23);
            uVar24 = FUN_009828c0();
            iVar31 = FUN_004a1780(0x121,pvStack_104,pvStack_f8,0,pvStack_118,1,0,0x200,pvVar10,0,0,
                                  uVar24,uVar23);
          }
          uStack_c._0_1_ = 1;
          iVar30 = FUN_00401f00(0x30);
          uStack_c._0_1_ = 5;
          if (iVar30 == 0) {
            iVar30 = 0;
          }
          else {
            iVar30 = FUN_007043b0();
          }
          uStack_c = CONCAT31(uStack_c._1_3_,1);
          FUN_004057b0(DAT_00b42d44);
          FUN_00405870(0);
          *(ushort *)(iVar30 + 0x18) = *(ushort *)(iVar30 + 0x18) & 0xfff1;
          FUN_00405680(iVar30);
          FUN_00707610();
          uVar28 = uStack_e0;
          fStack_9c = (float)(int)(uStack_e0 << 9) + 256.0;
          *(float *)(iVar31 + 0x54) = fStack_9c;
          uStack_98 = 0;
          *(undefined4 *)(iVar31 + 0x58) = 0;
          fStack_94 = ((float)(int)(uVar20 << 9) + 256.0) - fVar2;
          *(float *)(iVar31 + 0x5c) = fStack_94;
          (**(code **)(*piVar1 + 0x84))(iVar31,1);
        }
        iVar31 = FUN_00401f00(0xd0);
        uStack_c._0_1_ = 6;
        if (iVar31 == 0) {
          iVar31 = 0;
        }
        else {
          FUN_0057d7f0();
          uVar23 = FUN_009828c0();
          FUN_0057d7a0(uVar23);
          uVar24 = FUN_009828c0();
          iVar31 = FUN_004a1780(0x121,pfVar16,puVar21,pfStack_114,pfStack_f4,1,0,0x200,_Src,0,0,
                                uVar24,uVar23);
        }
        uStack_c._0_1_ = 1;
        uVar11 = (undefined1)uStack_c;
        uStack_c._0_1_ = 1;
        if (puStack_150 != (undefined4 *)0x0) {
          iVar30 = FUN_00401f00(0x30);
          uStack_c._0_1_ = 7;
          if (iVar30 == 0) {
            iVar30 = 0;
          }
          else {
            iVar30 = FUN_007043b0();
          }
          uStack_c._0_1_ = 1;
          FUN_004057b0(puStack_150);
          FUN_00405870(0);
          *(ushort *)(iVar30 + 0x18) = *(ushort *)(iVar30 + 0x18) & 0xfff5 | 4;
          FUN_00405680(iVar30);
          LVar15 = InterlockedDecrement(puStack_150 + 1);
          uVar11 = (undefined1)uStack_c;
          if (LVar15 == 0) {
            (**(code **)*puStack_150)(1);
            uVar11 = (undefined1)uStack_c;
          }
        }
        uStack_c._0_1_ = uVar11;
        iVar30 = FUN_00707530(7);
        if (iVar30 == 0) {
          uVar23 = FUN_004e70b0();
          FUN_00405680(uVar23);
        }
        if (bVar7) {
          puVar21 = (undefined4 *)FUN_00401f00(0x1c);
          uStack_c._0_1_ = 8;
          if (puVar21 == (undefined4 *)0x0) {
            puVar21 = (undefined4 *)0x0;
          }
          else {
            FUN_006ffd30();
            *puVar21 = &PTR_FUN_00a3d604;
            *(undefined2 *)(puVar21 + 6) = 0xec;
            *(undefined1 *)((int)puVar21 + 0x1a) = 0;
          }
          *(ushort *)(puVar21 + 6) = *(ushort *)(puVar21 + 6) & 0xfeed | 0xed;
          uStack_c._0_1_ = 1;
          FUN_00405680(puVar21);
        }
        FUN_00707610();
        fStack_88 = (float)(int)(uVar28 << 9) + 256.0;
        *(float *)(iVar31 + 0x54) = fStack_88;
        *(undefined4 *)(iVar31 + 0x58) = uStack_84;
        fStack_80 = ((float)(int)(uVar20 << 9) + 256.0) - fVar2;
        *(float *)(iVar31 + 0x5c) = fStack_80;
        (**(code **)(*piVar1 + 0x84))(iVar31,1);
        uStack_c = 0xffffffff;
        puStack_12c = (undefined4 *)((int)puStack_12c + 1);
        iVar30 = iStack_f0;
      } while ((int)puStack_12c < iVar17);
    }
    iVar17 = 0;
    if (*(int *)(DAT_00b333a0 + 0x34) == 0) {
      iStack_14c = 0;
      if (0 < (int)uVar14) {
        do {
          iStack_148 = 0;
          do {
            piVar18 = (int *)FUN_00482150(iStack_14c,iStack_148);
            if ((piVar18 != (int *)0x0) && (*piVar18 != 0)) {
              iVar31 = 0;
              iVar30 = 8;
              do {
                if (*(char *)(iVar17 + iStack_13c) != '\0') {
                  iVar33 = FUN_004ca790();
                  if ((((iVar33 == 0) || ((uint)*(ushort *)(iVar33 + 0xb6) <= iVar31 + 2U)) ||
                      (iVar33 = *(int *)(iVar30 + *(int *)(iVar33 + 0xb0)), iVar33 == 0)) ||
                     (*(short *)(iVar33 + 0xb6) == 0)) {
                    iVar33 = 0;
                  }
                  else {
                    iVar33 = **(int **)(iVar33 + 0xb0);
                  }
                  if (iVar33 != 0) {
                    *(ushort *)(iVar33 + 0x18) = *(ushort *)(iVar33 + 0x18) | 1;
                  }
                }
                iVar30 = iVar30 + 4;
                iVar17 = iVar17 + 1;
                iVar31 = iVar31 + 1;
              } while (iVar30 < 0x18);
            }
            iStack_148 = iStack_148 + 1;
          } while (iStack_148 < (int)uVar14);
          iStack_14c = iStack_14c + 1;
        } while (iStack_14c < (int)uVar14);
      }
      FUN_00401e40(iStack_13c);
      iVar30 = iStack_f0;
    }
    DAT_00b45e04 = uStack_44;
    DAT_00b45e08 = uStack_40;
    DAT_00b45e0c = uStack_3c;
    DAT_00b45e10 = uStack_38;
    DAT_00b45dc0 = uVar9;
    if (bStack_161 == 0) {
      *(ushort *)(DAT_00b35234 + 0x18) = *(ushort *)(DAT_00b35234 + 0x18) & 0xfffe;
    }
    if (bVar12 == 0) {
      *(ushort *)(iVar30 + 0x18) = *(ushort *)(iVar30 + 0x18) & 0xfffe;
    }
    puVar21 = DAT_00b42d44;
    if (DAT_00b42d44 != (undefined4 *)0x0) {
      LVar15 = InterlockedDecrement(DAT_00b42d44 + 1);
      if ((LVar15 == 0) && (puVar21 != (undefined4 *)0x0)) {
        (**(code **)*puVar21)(1);
      }
      DAT_00b42d44 = (undefined4 *)0x0;
    }
    FUN_0058ceb0(0xfc8,0x3f800000);
    FUN_0058ceb0(0xfc8,0x40000000);
    fVar2 = (float)(int)local_128;
    FUN_0058ceb0(0xfae,fVar2);
    FUN_0058ceb0(0xfaf,fVar2);
    *unaff_FS_OFFSET = local_14;
    return piVar1;
  }
  *unaff_FS_OFFSET = local_14;
  return (int *)0x0;
}



void FUN_005b87b0(byte param_1)

{
  FUN_005b7490();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_005b87d0(float param_1,float param_2,char *param_3,int param_4,char param_5,int param_6,
                char param_7,int param_8,char param_9,char param_10,char param_11)

{
  char *pcVar1;
  char cVar2;
  float *pfVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float fVar9;
  int iVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float *pfVar13;
  undefined4 uVar14;
  int iStack_84;
  float local_80;
  char *local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  char acStack_44 [64];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&iStack_84;
  local_78 = param_1;
  local_74 = param_2;
  local_70 = 0;
  uVar14 = 1;
  pfVar13 = &local_78;
  local_7c = param_3;
  pfVar3 = pfVar13;
  FUN_006ecc80(pfVar13,pfVar13,1);
  FUN_004cce20(pfVar13,pfVar3,uVar14);
  local_80 = (float)(DAT_00b06a2c - 1U >> 1);
  pfVar3 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
  fStack_6c = *pfVar3;
  fStack_68 = pfVar3[1];
  uVar14 = 1;
  pfVar13 = &fStack_6c;
  fStack_64 = pfVar3[2];
  pfVar3 = pfVar13;
  FUN_006ecc80(pfVar13,pfVar13,1);
  FUN_004cce20(pfVar13,pfVar3,uVar14);
  cVar2 = FUN_004d8b90();
  if (cVar2 == '\0') {
    iVar6 = (int)ROUND(fStack_6c) >> 0xc;
    iVar5 = (int)ROUND(fStack_68) >> 0xc;
    iVar7 = (int)ROUND(local_78) >> 0xc;
    iStack_84 = (int)ROUND(local_74);
    iVar10 = iStack_84 >> 0xc;
    iStack_84 = FUN_0043fa40((int)local_80 + 1U,(int)local_80 + 1U);
    if (iStack_84 != 0) {
      iVar7 = FUN_004c9a80();
      iVar10 = FUN_004c9aa0();
    }
  }
  else {
    iVar6 = (int)ROUND(fStack_6c) + -0x800 >> 0xc;
    iVar5 = (int)ROUND(fStack_68) + -0x800 >> 0xc;
    iVar7 = (int)ROUND(local_78) + -0x800 >> 0xc;
    iStack_84 = (int)ROUND(local_74);
    iVar10 = iStack_84 + -0x800 >> 0xc;
  }
  if ((((iVar7 < iVar6 - (int)local_80) || (iVar6 + (int)local_80 < iVar7)) ||
      (iVar7 = iVar5 - (int)local_80, iVar10 < iVar7)) || (iVar5 + (int)local_80 < iVar10)) {
    iVar7 = 0;
  }
  else {
    local_80 = (float)(iVar6 - (int)local_80);
    cVar2 = FUN_004d8b90();
    if (cVar2 == '\0') {
      iVar10 = (int)local_80 << 0xc;
      local_80 = (float)(iVar7 * 0x1000);
    }
    else {
      iVar10 = (int)local_80 * 0x1000 + 0x800;
      local_80 = (float)(iVar7 * 0x1000 + 0x800);
    }
    fStack_60 = (float)iVar10;
    fStack_5c = (float)(int)local_80;
    uStack_58 = 0;
    puVar8 = *(undefined4 **)(*(int *)((int)local_54 + 0x68) + 0x34);
    uStack_48 = 0;
    fStack_4c = fStack_5c;
    fStack_50 = fStack_60;
    do {
      if (puVar8 == (undefined4 *)0x0) goto LAB_005b8a31;
      iVar7 = puVar8[2];
      puVar8 = (undefined4 *)*puVar8;
      fVar12 = (float10)FUN_00588bd0(0xfa7);
    } while (fVar12 != (float10)0.0);
    if (iVar7 == 0) {
LAB_005b8a31:
      iVar7 = FUN_00585410(*(undefined4 *)((int)local_54 + 0x68),"map_local_icon",0);
      if (iVar7 == 0) {
        return 0;
      }
    }
    iVar10 = *(int *)(iVar7 + 0x24);
    *(undefined1 *)(iVar7 + 6) = 0;
    if (iVar10 != 0) {
      puVar8 = &DAT_00b26dc4;
      puVar11 = (undefined4 *)(iVar10 + 0x30);
      for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
      }
      local_80 = 0.0;
      if (*(short *)(iVar10 + 0xb8) != 0) {
        do {
          fVar9 = local_80;
          if ((uint)local_80 < (uint)*(ushort *)(iVar10 + 0xb6)) {
            uVar14 = *(undefined4 *)(*(int *)(iVar10 + 0xb0) + (int)local_80 * 4);
          }
          else {
            uVar14 = 0;
          }
          iVar5 = FUN_00560920(&DAT_00b3fcd4,uVar14);
          if (iVar5 != 0) {
            puVar8 = &DAT_00b26dc4;
            puVar11 = (undefined4 *)(iVar5 + 0x30);
            for (iVar6 = 9; fVar9 = local_80, iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
          }
          local_80 = (float)((int)fVar9 + 1);
        } while ((uint)local_80 < (uint)*(ushort *)(iVar10 + 0xb8));
      }
    }
    pcVar1 = local_7c;
    fStack_60 = local_78 - fStack_50;
    fStack_5c = local_74 - fStack_4c;
    local_54 = fStack_60 * 0.00024414063 * 512.0;
    fVar9 = (float)(DAT_00b06a2c + -1);
    if (DAT_00b06a2c + -1 < 0) {
      fVar9 = fVar9 + 4.2949673e+09;
    }
    iVar10 = 0;
    local_80 = (4096.0 - fStack_5c) * 0.00024414063 * 512.0 + fVar9 * 512.0;
    pcVar4 = local_7c;
    do {
      if ((local_7c == (char *)0x0) || (cVar2 = *pcVar4, cVar2 == '\0')) break;
      if ((((cVar2 < '0') || ('9' < cVar2)) && ((cVar2 < 'A' || ('Z' < cVar2)))) &&
         ((cVar2 < 'a' || ('z' < cVar2)))) {
        pcVar4[(int)(acStack_44 + -(int)local_7c)] = '_';
      }
      else {
        pcVar4[(int)(acStack_44 + -(int)local_7c)] = cVar2;
      }
      iVar10 = iVar10 + 1;
      pcVar4 = pcVar4 + 1;
    } while (iVar10 < 0x3f);
    acStack_44[iVar10] = '\0';
    FUN_004028d0(acStack_44,0);
    FUN_0058ceb0(0xfae,0x40000000);
    FUN_0058ceb0(0xfaf,local_54);
    FUN_0058ceb0(0xfb0,local_80);
    FUN_0058ced0(0xfb2,pcVar1);
    FUN_0058ceb0(0xfb3,(float)param_4);
    local_7c = (char *)((param_5 != '\0') + 1);
    FUN_0058ceb0(0xfb4,(float)(int)local_7c);
    FUN_0058ceb0(0xfb5,(float)param_6);
    local_7c = (char *)((param_7 != '\0') + 1);
    FUN_0058ceb0(0xfb6,(float)(int)local_7c);
    FUN_0058ceb0(0xfa7,(float)param_8);
    local_7c = (char *)((param_9 != '\0') + 1);
    FUN_0058ceb0(0xfb8,(float)(int)local_7c);
    local_7c = (char *)((param_10 != '\0') + 1);
    FUN_0058ceb0(0xfb9,(float)(int)local_7c);
    local_7c = (char *)((param_11 != '\0') + 1);
    FUN_0058ceb0(0xfba,(float)(int)local_7c);
  }
  return iVar7;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_005b8d00(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  char local_104 [256];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_104;
  iVar3 = FUN_00585410(*(undefined4 *)(in_ECX + 0x48),"item_template",0);
  if (iVar3 != 0) {
    FUN_0058ced0(0xfaf,param_1);
    iVar4 = 0;
    do {
      pcVar1 = local_104 + iVar4;
      cVar2 = pcVar1[param_1 - (int)local_104];
      *pcVar1 = cVar2;
      if (cVar2 == ' ') {
        *pcVar1 = '_';
      }
    } while ((*pcVar1 != '\0') && (iVar4 = iVar4 + 1, iVar4 < 0x100));
    local_104[0xff] = 0;
    FUN_004028d0(local_104,0);
  }
  FUN_0058ceb0(0xfa8,(float)param_2);
  return iVar3;
}



void FUN_005b8dc0(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  int iVar10;
  int *piVar11;
  float *pfVar12;
  char *_Str2;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 uVar16;
  
  cVar9 = FUN_00578d70();
  if ((cVar9 == '\x01') && (iVar10 = FUN_00589b70(0x3ff), iVar10 != 0)) {
    piVar11 = (int *)FUN_005898f0();
    piVar15 = (int *)piVar11[0x31];
    if (piVar15 != (int *)0x0) {
      while (piVar1 = (int *)*piVar15, piVar1 != (int *)0x0) {
        pfVar12 = (float *)(**(code **)(*piVar1 + 0x174))();
        fVar2 = *pfVar12;
        fVar3 = pfVar12[1];
        piVar15 = (int *)piVar15[1];
        iVar10 = piVar11[0x29];
        iVar4 = piVar11[0x28];
        fVar7 = (float)piVar11[0x26];
        if (piVar11[0x26] < 0) {
          fVar7 = fVar7 + 4.2949673e+09;
        }
        iVar5 = piVar11[0x2a];
        iVar6 = piVar11[0x2b];
        fVar8 = (float)piVar11[0x27];
        if (piVar11[0x27] < 0) {
          fVar8 = fVar8 + 4.2949673e+09;
        }
        FUN_004d7730();
        _Str2 = (char *)FUN_00412ab0();
        if ((_Str2 == (char *)0x0) || ((char *)piVar11[0x2c] == (char *)0x0)) {
          iVar13 = (uint)(_Str2 == (char *)0x0) * 2 + -1;
        }
        else {
          iVar13 = __stricmp((char *)piVar11[0x2c],_Str2);
        }
        if (((iVar13 == 0) &&
            (fVar7 * ((fVar2 - (float)iVar4) / (float)(iVar10 - iVar4)) == (float)piVar11[0x2e])) &&
           (fVar8 * (1.0 - ((float)iVar5 - fVar3) / (float)(iVar5 - iVar6)) == (float)piVar11[0x2f])
           ) {
          if (piVar11[0x3d] != 0) {
            iVar10 = piVar11[0x3d];
            iVar4 = *piVar11;
            FUN_00588bd0(0xfa8);
            uVar14 = FUN_009828c0(iVar10);
            (**(code **)(iVar4 + 0x14))(uVar14);
          }
          FUN_0058ceb0(0xfa1,0x3f800000);
          uVar16 = 0;
          uVar14 = 1;
          FUN_00582160(0,1,1,0);
          FUN_0057cfe0(uVar14,uVar16);
          FUN_00582160(0,1);
          FUN_00583e60();
          FUN_00582160(0,1);
          FUN_005821f0();
          FUN_00582160(0,1);
          FUN_00583f40();
          FUN_0066f420(piVar1);
          return;
        }
        if (piVar15 == (int *)0x0) {
          return;
        }
      }
    }
  }
  return;
}



void FUN_005b8fc0(int param_1)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  undefined4 uVar11;
  int local_28;
  undefined2 local_24;
  undefined2 local_22;
  char *local_1c;
  ushort local_18;
  undefined2 local_16;
  undefined4 local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0c80;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c = (char *)0x0;
  local_18 = 0;
  local_16 = 0;
  local_4 = 0;
  if (param_1 == 0x34) {
    FUN_004028d0(DAT_00b39468,0);
  }
  else if (param_1 == 0x33) {
    FUN_004028d0(DAT_00b39460,0);
  }
  else if (param_1 == 0x36) {
    FUN_004028d0(DAT_00b39458,0);
  }
  else if (param_1 == 0x35) {
    FUN_004028d0(DAT_00b39470,0);
  }
  else {
    FUN_004de8d0(&local_1c);
  }
  if (local_1c != (char *)0x0) {
    if (local_18 == 0xffff) {
      pcVar4 = local_1c;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar5 = (int)pcVar4 - (int)(local_1c + 1);
    }
    else {
      uVar5 = (uint)local_18;
    }
    if (uVar5 != 0) goto LAB_005b90a9;
  }
  FUN_004028d0("Tamriel",0);
LAB_005b90a9:
  FUN_0058ced0(0xfaf,local_1c);
  fVar10 = (float10)FUN_00402bd0(uVar3);
  fVar1 = (float)fVar10;
  iVar6 = FUN_009828c0();
  local_28 = iVar6;
  iVar7 = FUN_009828c0();
  if (iVar6 < 1) {
    iVar6 = 0xc;
  }
  else if (0xc < iVar6) {
    iVar6 = iVar6 + -0xc;
  }
  FUN_00401f20(0);
  local_28 = 0;
  local_22 = 0;
  local_24 = 0;
  local_4._0_1_ = 1;
  puVar9 = &DAT_00a6cd08;
  if (iVar7 < 10) {
    if (NAN(fVar1) || 12.0 < fVar1 == (fVar1 == 12.0)) {
      puVar9 = &DAT_00a6cd04;
    }
    puVar8 = (undefined4 *)FUN_00402e50(local_14);
    uVar11 = *puVar8;
    local_4._0_1_ = 2;
    pcVar4 = "%s %i:0%i %s";
  }
  else {
    if (NAN(fVar1) || 12.0 < fVar1 == (fVar1 == 12.0)) {
      puVar9 = &DAT_00a6cd04;
    }
    puVar8 = (undefined4 *)FUN_00402e50(local_14);
    uVar11 = *puVar8;
    local_4._0_1_ = 3;
    pcVar4 = "%s %i:%i %s";
  }
  FUN_00402e30(&local_28,pcVar4,uVar11,iVar6,iVar7,puVar9);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00401f20(local_14[0]);
  iVar6 = local_28;
  FUN_0058ced0(0xfb0,local_28);
  FUN_00401f20(iVar6);
  FUN_00401f20(local_1c);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_005b91e0(void)

{
  undefined4 *puVar1;
  ushort uVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  float *pfVar12;
  undefined4 uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int *unaff_FS_OFFSET;
  ushort in_FPUControlWord;
  float10 fVar18;
  float10 fVar19;
  int *piVar20;
  undefined1 auStack_494 [4];
  int *piStack_490;
  undefined2 local_48a;
  int *local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  double local_478;
  double local_470;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  float fStack_45c;
  undefined1 auStack_444 [36];
  char acStack_420 [1028];
  uint local_1c;
  int local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_009c0ccc;
  local_14 = *unaff_FS_OFFSET;
  local_1c = DAT_00b30aac ^ (uint)auStack_494;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffb60;
  *unaff_FS_OFFSET = (int)&local_14;
  iVar6 = FUN_00589b70(0x3ff,uVar5);
  if (iVar6 != 0) {
    iVar6 = FUN_005898f0();
    iVar7 = FUN_006ecc80();
    if (iVar7 != 0) {
      FUN_005b8fc0(0);
      FUN_0058ceb0(0xfa1,0x3f800000);
      FUN_0058ceb0(0xfa1,0x40000000);
      if (DAT_00b333c4 != (int *)0x0) {
        iVar7 = FUN_0043f270();
        if (iVar7 == 0) {
LAB_005b92cc:
          fVar18 = (float10)FUN_00588bd0(0xfd2);
          local_488 = (int *)(float)fVar18;
          if (*(int *)(iVar6 + 0xd0) == 0) {
            uVar10 = FUN_0046b250(0x3c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
            iVar8 = FUN_009832e6(uVar10);
            *(int *)(iVar6 + 0xd0) = iVar8;
            if (iVar8 == 0) {
              *(undefined4 *)(iVar6 + 0xd0) = *(undefined4 *)(DAT_00b33a98 + 0xc);
            }
          }
          if (*(int *)(iVar6 + 0xd0) == 0) {
            FUN_0058ceb0(0xfa1,0x3f800000);
          }
          else {
            uVar10 = FUN_004f1a60();
            FUN_0058ced0(0xfe6,uVar10);
            piVar11 = (int *)FUN_004ef1b0();
            fVar15 = (float)local_488 / 100.0;
            local_470 = (double)fVar15;
            fVar16 = (float)*piVar11;
            if (*piVar11 < 0) {
              fVar16 = fVar16 + 4.2949673e+09;
            }
            local_488 = (int *)(in_FPUControlWord | 0xc00);
            local_478 = (double)(longlong)ROUND(fVar16 * fVar15);
            *(float *)(iVar6 + 0x98) = local_478._0_4_;
            iVar7 = FUN_004ef1b0();
            fVar15 = (float)*(int *)(iVar7 + 4);
            if (*(int *)(iVar7 + 4) < 0) {
              fVar15 = fVar15 + 4.2949673e+09;
            }
            local_488 = (int *)(in_FPUControlWord | 0xc00);
            local_478 = (double)(longlong)ROUND(fVar15 * (float)local_470);
            *(float *)(iVar6 + 0x9c) = local_478._0_4_;
            local_48a = in_FPUControlWord;
            iVar7 = FUN_004ef1b0();
            *(int *)(iVar6 + 0xa0) = (int)*(short *)(iVar7 + 8) << 0xc;
            iVar7 = FUN_004ef1b0();
            *(int *)(iVar6 + 0xa4) = (*(short *)(iVar7 + 0xc) + 1) * 0x1000;
            iVar7 = FUN_004ef1b0();
            *(int *)(iVar6 + 0xac) = (*(short *)(iVar7 + 10) + 1) * 0x1000;
            iVar7 = FUN_004ef1b0();
            *(int *)(iVar6 + 0xa8) = (int)*(short *)(iVar7 + 0xe) << 0xc;
            FUN_0058ceb0(0xfa1,0x40000000);
            FUN_0057d300(0xfcb,*(undefined4 *)(iVar6 + 0x98));
            FUN_0057d300(0xfca,*(undefined4 *)(iVar6 + 0x9c));
            iVar7 = *(int *)(iVar6 + 0xd0);
          }
        }
        else {
          iVar8 = FUN_004ef1a0();
          if (iVar8 != 0) {
            iVar7 = FUN_004ef1a0();
          }
          if (iVar7 == 0) goto LAB_005b92cc;
          pcVar9 = (char *)FUN_004f1a60();
          if (*pcVar9 == '\0') {
            iVar7 = 0;
            goto LAB_005b92cc;
          }
          if (*(int *)(iVar6 + 0xd0) != iVar7) {
            *(int *)(iVar6 + 0xd0) = iVar7;
            fVar18 = (float10)FUN_00588bd0(0xfd2);
            local_488 = (int *)(float)fVar18;
            uVar10 = FUN_004f1a60();
            FUN_0058ced0(0xfe6,uVar10);
            piVar11 = (int *)FUN_004ef1b0();
            fVar15 = (float)local_488 / 100.0;
            fVar16 = (float)*piVar11;
            if (*piVar11 < 0) {
              fVar16 = fVar16 + 4.2949673e+09;
            }
            local_478._0_4_ = (float)(longlong)ROUND(fVar16 * fVar15);
            *(float *)(iVar6 + 0x98) = local_478._0_4_;
            fVar16 = (float)piVar11[1];
            if (piVar11[1] < 0) {
              fVar16 = fVar16 + 4.2949673e+09;
            }
            local_488 = (int *)(in_FPUControlWord | 0xc00);
            local_478 = (double)(longlong)ROUND(fVar16 * fVar15);
            *(float *)(iVar6 + 0x9c) = local_478._0_4_;
            *(int *)(iVar6 + 0xa0) = (int)(short)piVar11[2] << 0xc;
            *(int *)(iVar6 + 0xa4) = ((short)piVar11[3] + 1) * 0x1000;
            *(int *)(iVar6 + 0xac) = (*(short *)((int)piVar11 + 10) + 1) * 0x1000;
            *(int *)(iVar6 + 0xa8) = (int)*(short *)((int)piVar11 + 0xe) << 0xc;
            local_48a = in_FPUControlWord;
            FUN_0058ceb0(0xfa1,0x40000000);
            FUN_0057d300(0xfcb,*(undefined4 *)(iVar6 + 0x98));
            FUN_0057d300(0xfca,*(undefined4 *)(iVar6 + 0x9c));
          }
        }
        if (*(int *)(iVar6 + 0xc4) != 0) {
          FUN_004526e0();
          FUN_00401f20(*(undefined4 *)(iVar6 + 0xc4));
        }
        *(undefined4 *)(iVar6 + 0xc4) = 0;
        if (iVar7 != 0) {
          uVar10 = FUN_004f0620();
          *(undefined4 *)(iVar6 + 0xc4) = uVar10;
        }
        puVar1 = *(undefined4 **)(*(int *)(iVar6 + 0x58) + 0x34);
        while (puVar1 != (undefined4 *)0x0) {
          piVar11 = puVar1 + 2;
          puVar1 = (undefined4 *)*puVar1;
          if ((undefined4 *)*piVar11 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar11)(1);
          }
        }
        FUN_00573880();
        piVar11 = *(int **)(iVar6 + 0xc4);
        while ((piVar11 != (int *)0x0 && (piVar20 = (int *)*piVar11, piVar20 != (int *)0x0))) {
          piVar11 = (int *)piVar11[1];
          local_488 = piVar11;
          FUN_004d7730();
          cVar3 = FUN_0042b310();
          if ((cVar3 != '\0') &&
             ((((uint)piVar20[2] >> 0xb & 1) == 0 &&
              (iVar7 = FUN_00585410(*(undefined4 *)(iVar6 + 0x58),"map_world_icon",0),
              piVar11 = local_488, iVar7 != 0)))) {
            FUN_004d7730();
            uVar10 = FUN_00412ab0();
            FUN_00419b10(uVar10);
            uVar5 = 0;
            uStack_c = 0;
            do {
              cVar3 = *(char *)((-(uint)(local_470._0_4_ != 0.0) & uVar5) + (int)local_470._0_4_);
              if (cVar3 == '\0') break;
              if (cVar3 == ' ') {
                acStack_420[uVar5] = '_';
              }
              else {
                acStack_420[uVar5] = cVar3;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < 0x400);
            acStack_420[uVar5] = '\0';
            FUN_004028d0(acStack_420,0);
            pfVar12 = (float *)(**(code **)(*piVar20 + 0x174))();
            fStack_47c = pfVar12[2];
            fStack_484 = (float)*(int *)(iVar6 + 0x98);
            if (*(int *)(iVar6 + 0x98) < 0) {
              fStack_484 = fStack_484 + 4.2949673e+09;
            }
            fStack_484 = fStack_484 *
                         ((*pfVar12 - (float)*(int *)(iVar6 + 0xa0)) /
                         (float)(*(int *)(iVar6 + 0xa4) - *(int *)(iVar6 + 0xa0)));
            piStack_490 = (int *)(*(int *)(iVar6 + 0xa8) - *(int *)(iVar6 + 0xac));
            fStack_480 = (float)*(int *)(iVar6 + 0x9c);
            if (*(int *)(iVar6 + 0x9c) < 0) {
              fStack_480 = fStack_480 + 4.2949673e+09;
            }
            fStack_480 = fStack_480 *
                         (1.0 - ((float)*(int *)(iVar6 + 0xa8) - pfVar12[1]) /
                                (float)(int)piStack_490);
            FUN_004d7730();
            cVar3 = FUN_0042b310();
            piStack_490 = (int *)((cVar3 != '\0') + 1);
            FUN_0058ceb0(0xfae,(float)(int)piStack_490);
            FUN_0058ceb0(0xfaf,fStack_484);
            FUN_0058ceb0(0xfb0,fStack_480);
            FUN_004d7730();
            uVar10 = FUN_00412ab0();
            FUN_0058ced0(0xfb2,uVar10);
            FUN_004d7730();
            piStack_490 = (int *)FUN_0042b370();
            FUN_0058ceb0(0xfb3,(float)(int)piStack_490);
            FUN_004d7730();
            cVar3 = FUN_0042b340();
            piStack_490 = (int *)((cVar3 != '\0') + 1);
            FUN_0058ceb0(0xfb4,(float)(int)piStack_490);
            FUN_0058ceb0(0xfb5,0x3f800000);
            FUN_0058ceb0(0xfb6,0x40000000);
            FUN_0058ceb0(0xfb8,0x3f800000);
            FUN_0058ceb0(0xfb9,0x3f800000);
            FUN_0058ceb0(0xfba,0x3f800000);
            uStack_c = 0xffffffff;
            FUN_00401f20(local_470._0_4_);
            local_470 = 0.0;
            piVar11 = local_488;
          }
        }
        local_488 = (int *)FUN_0065d830();
        *(int **)(iVar6 + 0xcc) = local_488;
        while ((local_488 != (int *)0x0 && (iVar7 = *local_488, iVar7 != 0))) {
          local_488 = (int *)local_488[1];
          uVar2 = local_48a >> 8;
          local_48a = CONCAT11((char)uVar2,*(int *)(iVar7 + 0x10) != 0);
          piVar11 = (int *)FUN_0052b440(1);
          if (piVar11 != (int *)0x0) {
            pfVar12 = (float *)(**(code **)(*piVar11 + 0x174))();
            fStack_484 = *pfVar12;
            fStack_480 = pfVar12[1];
            fStack_47c = pfVar12[2];
            piStack_490 = (int *)FUN_004d6670();
            if ((piStack_490 == (int *)0x0) ||
               ((piStack_490 != *(int **)(iVar6 + 0xd0) &&
                (iVar7 = FUN_004ef1a0(), iVar7 != *(int *)(iVar6 + 0xd0))))) {
              uVar4 = FUN_0067f0a0();
              local_470 = (double)CONCAT71(local_470._1_7_,uVar4);
              uVar10 = FUN_0068ca20();
              FUN_0067f0b0(uVar10);
              uVar4 = FUN_0067f0e0();
              uStack_468 = CONCAT31(uStack_468._1_3_,uVar4);
              FUN_0067f0f0(1);
              uVar4 = FUN_0067f0c0();
              local_478 = (double)CONCAT71(local_478._1_7_,uVar4);
              FUN_0067f0d0(0);
              FUN_0068a9f0();
              uStack_c = 1;
              piVar20 = piStack_490;
              uVar10 = FUN_006ecc80(piStack_490);
              uVar13 = (**(code **)(*piVar11 + 0x174))(uVar10);
              FUN_0068b030(DAT_00b333c4,uVar13,uVar10,piVar20);
              piVar11 = (int *)FUN_0068a890(*(undefined4 *)(iVar6 + 0xd0),1);
              if (piVar11 == (int *)0x0) {
                uStack_464 = 0x7f7fffff;
                uStack_460 = 0x7f7fffff;
                fStack_45c = 3.4028235e+38;
                FUN_0068b030(DAT_00b333c4,&uStack_464,0,*(undefined4 *)(iVar6 + 0xd0));
                piVar11 = (int *)FUN_0068a890(*(undefined4 *)(iVar6 + 0xd0),0);
                fVar15 = DAT_00b3f9b0;
                fVar16 = DAT_00b3f9a8;
                fVar17 = DAT_00b3f9ac;
                if (piVar11 != (int *)0x0) {
                  pfVar12 = (float *)(**(code **)(*piVar11 + 0x174))();
                  fVar15 = pfVar12[2];
                  fVar16 = *pfVar12;
                  fVar17 = pfVar12[1];
                }
              }
              else {
                pfVar12 = (float *)(**(code **)(*piVar11 + 0x174))();
                fVar15 = pfVar12[2];
                fVar16 = *pfVar12;
                fVar17 = pfVar12[1];
              }
              fStack_484 = fVar16;
              fStack_480 = fVar17;
              fStack_47c = fVar15;
              FUN_0067f0f0(uStack_468);
              FUN_0067f0b0(local_470._0_4_);
              FUN_0067f0d0(local_478._0_4_);
              uStack_c = 0xffffffff;
              FUN_0068aa10();
            }
            iVar7 = FUN_00585410(*(undefined4 *)(iVar6 + 0x58),"map_world_icon",0);
            if (iVar7 != 0) {
              fVar15 = (float)*(int *)(iVar6 + 0x98);
              if (*(int *)(iVar6 + 0x98) < 0) {
                fVar15 = fVar15 + 4.2949673e+09;
              }
              fStack_484 = fVar15 * ((fStack_484 - (float)*(int *)(iVar6 + 0xa0)) /
                                    (float)(*(int *)(iVar6 + 0xa4) - *(int *)(iVar6 + 0xa0)));
              piStack_490 = (int *)(*(int *)(iVar6 + 0xa8) - *(int *)(iVar6 + 0xac));
              fVar15 = (float)*(int *)(iVar6 + 0x9c);
              if (*(int *)(iVar6 + 0x9c) < 0) {
                fVar15 = fVar15 + 4.2949673e+09;
              }
              fStack_480 = fVar15 * (1.0 - ((float)*(int *)(iVar6 + 0xa8) - fStack_480) /
                                           (float)(int)piStack_490);
              FUN_0058ceb0(0xfae,0x40000000);
              FUN_0058ceb0(0xfaf,fStack_484);
              FUN_0058ceb0(0xfb0,fStack_480);
              FUN_0058ceb0(0xfb2,0);
              FUN_0058ceb0(0xfb3,0x42c60000);
              FUN_0058ceb0(0xfb4,0x40000000);
              FUN_0058ceb0(0xfb5,0x40000000);
              FUN_0058ceb0(0xfb6,0x3f800000);
              piStack_490 = (int *)(((char)local_48a != '\0') + 1);
              FUN_0058ceb0(0xfb8,(float)(int)piStack_490);
              FUN_0058ceb0(0xfb9,0x40000000);
              FUN_0058ceb0(0xfba,0x3f800000);
            }
          }
        }
        iVar7 = FUN_00585410(*(undefined4 *)(iVar6 + 0x58),"map_world_icon",0);
        if (iVar7 != 0) {
          FUN_004028d0("player_set_marker",0);
          FUN_0058ceb0(0xfae,0x40000000);
          FUN_0058ceb0(0xfaf,0);
          FUN_0058ceb0(0xfb0,0);
          FUN_0058ceb0(0xfb2,0);
          FUN_0058ceb0(0xfb3,0x42c60000);
          FUN_0058ceb0(0xfb4,0x3f800000);
          FUN_0058ceb0(0xfb5,0x40400000);
          FUN_0058ceb0(0xfb6,0x3f800000);
          FUN_0058ceb0(0xfb8,0x3f800000);
          FUN_0058ceb0(0xfb9,0x3f800000);
          FUN_0058ceb0(0xfba,0x40000000);
          fStack_484 = (float)DAT_00b333c4[0x18b];
          fStack_480 = (float)DAT_00b333c4[0x18c];
          fStack_47c = (float)DAT_00b333c4[0x18d];
          piVar11 = (int *)DAT_00b333c4[0x18e];
          if ((piVar11 != (int *)0x0) && (piVar11 != *(int **)(iVar6 + 0xd0))) {
            uVar4 = FUN_0067f0a0();
            local_470 = (double)CONCAT71(local_470._1_7_,uVar4);
            FUN_0067f0b0(1);
            uVar4 = FUN_0067f0e0();
            local_478 = (double)CONCAT71(local_478._1_7_,uVar4);
            FUN_0067f0f0(1);
            uVar4 = FUN_0067f0c0();
            uStack_468 = CONCAT31(uStack_468._1_3_,uVar4);
            FUN_0067f0d0(0);
            piStack_490 = (int *)0x0;
            local_488 = (int *)0x0;
            piVar20 = piVar11;
            if (((char)piVar11[1] != '0') && (piVar20 = piStack_490, (char)piVar11[1] == '5')) {
              local_488 = piVar11;
            }
            piStack_490 = piVar20;
            FUN_0068a9f0();
            uStack_c = 2;
            FUN_0068b030(DAT_00b333c4,&fStack_484,piStack_490,local_488);
            piVar11 = (int *)FUN_0068a890(*(undefined4 *)(iVar6 + 0xd0),1);
            if (piVar11 == (int *)0x0) {
              uStack_464 = 0x7f7fffff;
              uStack_460 = 0x7f7fffff;
              fStack_45c = 3.4028235e+38;
              FUN_0068b030(DAT_00b333c4,&uStack_464,0,*(undefined4 *)(iVar6 + 0xd0));
              piVar11 = (int *)FUN_0068a890(*(undefined4 *)(iVar6 + 0xd0),0);
              if (piVar11 == (int *)0x0) {
                fStack_484 = DAT_00b3f9a8;
                fStack_480 = DAT_00b3f9ac;
                fStack_47c = DAT_00b3f9b0;
              }
              else {
                pfVar12 = (float *)(**(code **)(*piVar11 + 0x174))();
                fStack_484 = *pfVar12;
                fStack_480 = pfVar12[1];
                fStack_47c = pfVar12[2];
              }
            }
            else {
              pfVar12 = (float *)(**(code **)(*piVar11 + 0x174))();
              fStack_484 = *pfVar12;
              fStack_480 = pfVar12[1];
              fStack_47c = pfVar12[2];
            }
            FUN_0067f0f0(local_478._0_4_);
            FUN_0067f0b0(local_470._0_4_);
            FUN_0067f0d0(uStack_468);
            uStack_c = 0xffffffff;
            FUN_0068aa10();
          }
          cVar3 = FUN_008aa390(&DAT_00b3f9a8);
          if (cVar3 == '\0') {
            FUN_0058ceb0(0xfa7,0);
            uVar10 = 0x40000000;
          }
          else {
            fVar15 = (float)*(int *)(iVar6 + 0x98);
            if (*(int *)(iVar6 + 0x98) < 0) {
              fVar15 = fVar15 + 4.2949673e+09;
            }
            piStack_490 = *(int **)(iVar6 + 0xa8);
            fStack_484 = fVar15 * ((fStack_484 - (float)*(int *)(iVar6 + 0xa0)) /
                                  (float)(*(int *)(iVar6 + 0xa4) - *(int *)(iVar6 + 0xa0)));
            iVar8 = (int)piStack_490 - *(int *)(iVar6 + 0xac);
            local_478 = (double)CONCAT44(local_478._4_4_,iVar8);
            fVar15 = (float)*(int *)(iVar6 + 0x9c);
            if (*(int *)(iVar6 + 0x9c) < 0) {
              fVar15 = fVar15 + 4.2949673e+09;
            }
            fStack_480 = fVar15 * (1.0 - ((float)(int)piStack_490 - fStack_480) / (float)iVar8);
            FUN_0058ceb0(0xfaf,fStack_484);
            FUN_0058ceb0(0xfb0,fStack_480);
            FUN_0058ceb0(0xfa7,0x437f0000);
            uVar10 = 0x3f800000;
          }
          FUN_0058ceb0(0xfb6,uVar10);
          *(int *)(iVar6 + 0xe0) = iVar7;
        }
        iVar7 = FUN_00585410(*(undefined4 *)(iVar6 + 0x58),"map_world_icon",0);
        if (iVar7 != 0) {
          FUN_004028d0("map_world_player",0);
          pfVar12 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
          fStack_484 = *pfVar12;
          fStack_480 = pfVar12[1];
          fStack_47c = pfVar12[2];
          iVar8 = FUN_004d6670();
          if ((iVar8 != 0) && (iVar14 = FUN_004ef1a0(), iVar14 != 0)) {
            iVar8 = FUN_004ef1a0();
          }
          if (iVar8 != *(int *)(iVar6 + 0xd0)) {
            uVar4 = FUN_0067f0a0();
            local_470 = (double)CONCAT71(local_470._1_7_,uVar4);
            FUN_0067f0b0(1);
            uVar4 = FUN_0067f0e0();
            local_478 = (double)CONCAT71(local_478._1_7_,uVar4);
            FUN_0067f0f0(1);
            uVar4 = FUN_0067f0c0();
            uStack_468 = CONCAT31(uStack_468._1_3_,uVar4);
            FUN_0067f0d0(0);
            FUN_0068a9f0();
            uStack_464 = 0x7f7fffff;
            uStack_460 = 0x7f7fffff;
            fStack_45c = 3.4028235e+38;
            uStack_c = 3;
            FUN_0068b030(DAT_00b333c4,&uStack_464,0,*(undefined4 *)(iVar6 + 0xd0));
            FUN_0067f0f0(local_478._0_4_);
            FUN_0067f0b0(local_470._0_4_);
            FUN_0067f0d0(uStack_468);
            piVar11 = (int *)FUN_0068a890(*(undefined4 *)(iVar6 + 0xd0),0);
            fVar15 = DAT_00b3f9b0;
            fVar16 = DAT_00b3f9a8;
            fVar17 = DAT_00b3f9ac;
            if (piVar11 != (int *)0x0) {
              pfVar12 = (float *)(**(code **)(*piVar11 + 0x174))();
              fVar15 = pfVar12[2];
              fVar16 = *pfVar12;
              fVar17 = pfVar12[1];
            }
            uStack_c = 0xffffffff;
            fStack_484 = fVar16;
            fStack_480 = fVar17;
            fStack_47c = fVar15;
            FUN_0068aa10();
          }
          fVar15 = (float)*(int *)(iVar6 + 0x98);
          if (*(int *)(iVar6 + 0x98) < 0) {
            fVar15 = fVar15 + 4.2949673e+09;
          }
          piStack_490 = *(int **)(iVar6 + 0xa8);
          fStack_484 = fVar15 * ((fStack_484 - (float)*(int *)(iVar6 + 0xa0)) /
                                (float)(*(int *)(iVar6 + 0xa4) - *(int *)(iVar6 + 0xa0)));
          local_478._0_4_ = (float)((int)piStack_490 - *(int *)(iVar6 + 0xac));
          fVar15 = (float)*(int *)(iVar6 + 0x9c);
          if (*(int *)(iVar6 + 0x9c) < 0) {
            fVar15 = fVar15 + 4.2949673e+09;
          }
          fStack_480 = fVar15 * (1.0 - ((float)(int)piStack_490 - fStack_480) /
                                       (float)(int)local_478._0_4_);
          FUN_0058ceb0(0xfa7,0x437f0000);
          FUN_0058ceb0(0xfae,0x40000000);
          local_478 = (double)CONCAT44(local_478._4_4_,fStack_484 - 24.0);
          FUN_0058ceb0(0xfaf,fStack_484 - 24.0);
          FUN_0058ceb0(0xfb0,fStack_480);
          FUN_0058ceb0(0xfb2,0);
          FUN_0058ceb0(0xfb3,0x42c40000);
          FUN_0058ceb0(0xfb4,0x3f800000);
          FUN_0058ceb0(0xfb5,0x40800000);
          FUN_0058ceb0(0xfb6,0x3f800000);
          FUN_0058ceb0(0xfb8,0x3f800000);
          FUN_0058ceb0(0xfb9,0x3f800000);
          FUN_0058ceb0(0xfba,0x3f800000);
          *(int *)(iVar6 + 0xf8) = iVar7;
          FUN_0058e870();
          iVar7 = *(int *)(iVar6 + 0xf8);
          if (((iVar7 != 0) && (local_488 = *(int **)(iVar7 + 0x24), local_488 != (int *)0x0)) &&
             (iVar8 = FUN_006ecc80(), iVar8 != 0)) {
            FUN_006ecc80();
            fVar18 = (float10)FUN_004cce00();
            local_478 = (double)fVar18;
            fVar19 = (float10)(**(code **)(*DAT_00b333c4 + 0x1e0))();
            fVar18 = (float10)local_478;
            local_478._0_4_ = (float)(fVar19 + fVar18);
            FUN_0070fd80(-(float)(fVar19 + fVar18));
            fVar18 = (float10)FUN_00588bd0(0xfcb);
            local_478 = (double)CONCAT44(local_478._4_4_,(float)(fVar18 * (float10)0.5));
            fVar18 = (float10)FUN_00588bd0(0xfca);
            piVar11 = local_488;
            uVar5 = 0;
            *(undefined1 *)(iVar7 + 6) = 1;
            local_470 = (double)CONCAT44(local_470._4_4_,(float)(fVar18 * (float10)0.5));
            if ((short)local_488[0x2e] != 0) {
              do {
                if (uVar5 < *(ushort *)((int)piVar11 + 0xb6)) {
                  uVar10 = *(undefined4 *)(piVar11[0x2c] + uVar5 * 4);
                }
                else {
                  uVar10 = 0;
                }
                iVar7 = FUN_00560920(&DAT_00b3fcd4,uVar10);
                if (iVar7 != 0) {
                  uStack_464 = local_478._0_4_;
                  uStack_460 = 0;
                  fStack_45c = -local_470._0_4_;
                  FUN_005b6860(auStack_444,&uStack_464,&DAT_00b3f9a8);
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 < *(ushort *)(piVar11 + 0x2e));
            }
          }
          FUN_0058ceb0(0xfb8,fStack_484);
          FUN_0058ceb0(0xfb9,fStack_480);
        }
        FUN_0058ceb0(0xfb0,0x40a00000);
        uVar10 = *(undefined4 *)(iVar6 + 0x58);
        goto LAB_005ba49f;
      }
    }
  }
  uVar10 = 0;
LAB_005ba49f:
  *unaff_FS_OFFSET = local_14;
  return uVar10;
}



void FUN_005ba4d0(char param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  float10 fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  int iStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [36];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c0d08;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff80;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00589b70(0x3ff,uVar2);
  if (iVar3 == 0) {
LAB_005bac94:
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar3 = FUN_005898f0();
  cVar1 = FUN_005893b0();
  if (((cVar1 == '\0') && (*(int *)(iVar3 + 0x24) != 8)) && (*(int *)(iVar3 + 0x24) != 1))
  goto LAB_005bac94;
  FUN_005b8fc0(0);
  iVar4 = FUN_006ecc80();
  if (iVar4 == 0) goto LAB_005bac94;
  FUN_0058ceb0(0xfa1,0x3f800000);
  FUN_0058ceb0(0xfa1,0x40000000);
  iVar4 = FUN_005b7550();
  if (iVar4 == 0) {
    FUN_0058ceb0(0xfa1,0x3f800000);
    goto LAB_005bac94;
  }
  FUN_0058ceb0(0xfa1,0x3f800000);
  FUN_0058ceb0(0xfa1,0x40000000);
  puVar17 = *(undefined4 **)(*(int *)(iVar3 + 0x68) + 0x34);
  while (puVar17 != (undefined4 *)0x0) {
    piVar8 = puVar17 + 2;
    puVar17 = (undefined4 *)*puVar17;
    if ((undefined4 *)*piVar8 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar8)(1);
    }
  }
  FUN_00573880();
  iVar4 = FUN_004d6670();
  uStack_54 = DAT_00b3f9a8;
  uStack_50 = DAT_00b3f9ac;
  uStack_4c = DAT_00b3f9b0;
  if (iVar4 == 0) {
    uVar20 = 0;
    puVar17 = &uStack_54;
    uVar5 = FUN_006ecc80(puVar17,0);
    iVar4 = FUN_0044ee00(uVar5,puVar17,uVar20);
  }
  if (*(int *)(iVar3 + 0xc4) != 0) {
    FUN_004526e0();
    FUN_00401f20(*(undefined4 *)(iVar3 + 0xc4));
  }
  *(undefined4 *)(iVar3 + 0xc4) = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_004f0620();
    *(undefined4 *)(iVar3 + 0xc4) = uVar5;
  }
  piVar8 = *(int **)(iVar3 + 0xc4);
  while ((piVar8 != (int *)0x0 && (piVar11 = (int *)*piVar8, piVar11 != (int *)0x0))) {
    piVar8 = (int *)piVar8[1];
    FUN_004d7730();
    cVar1 = FUN_0042b310();
    if ((cVar1 != '\0') && (((uint)piVar11[2] >> 0xb & 1) == 0)) {
      puVar6 = (undefined8 *)(**(code **)(*piVar11 + 0x174))();
      uStack_6c = (double)*puVar6;
      uVar5 = 1;
      iStack_64 = *(int *)(puVar6 + 1);
      puVar18 = auStack_3c;
      puVar6 = &uStack_6c;
      FUN_006ecc80(puVar6,puVar18,1);
      FUN_004cce20(puVar6,puVar18,uVar5);
      FUN_004d2d00(auStack_3c);
      iVar4 = FUN_009828c0();
      if (0 < iVar4) {
        FUN_004d7730();
        cVar1 = FUN_0042b340();
        if (cVar1 == '\0') {
          uVar21 = 0;
          uVar19 = 0;
          uVar16 = 0;
          uVar15 = 1;
          uVar14 = 1;
          FUN_004d7730(1,1,iVar4,0,0,0);
          uVar5 = FUN_0042b340();
          FUN_004d7730(uVar5);
          uVar20 = FUN_0042b370();
          FUN_004d7730(uVar20);
          uVar7 = FUN_00412ab0();
          FUN_005b87d0((float)uStack_6c,uStack_6c._4_4_,uVar7,uVar20,uVar5,uVar14,uVar15,iVar4,
                       uVar16,uVar19,uVar21);
        }
      }
    }
  }
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_56 = 0;
  piVar8 = *(int **)(iVar3 + 200);
  uStack_4 = 0;
  while ((piVar8 != (int *)0x0 && (piVar11 = (int *)*piVar8, piVar11 != (int *)0x0))) {
    piVar8 = (int *)piVar8[1];
    iVar10 = 0;
    iVar4 = (**(code **)(*piVar11 + 0x170))();
    if (*(char *)(iVar4 + 4) == '\x18') {
      iVar10 = (**(code **)(*piVar11 + 0x170))();
    }
    if (((((uint)piVar11[2] >> 0xd & 1) == 0) && (iVar10 != 0)) &&
       (cVar1 = FUN_004b6d00(), cVar1 == '\0')) {
      puVar6 = (undefined8 *)(**(code **)(*piVar11 + 0x174))();
      uStack_6c = (double)*puVar6;
      uVar5 = 1;
      iStack_64 = *(int *)(puVar6 + 1);
      puVar18 = auStack_3c;
      puVar6 = &uStack_6c;
      FUN_006ecc80(puVar6,puVar18,1);
      FUN_004cce20(puVar6,puVar18,uVar5);
      FUN_004d2d00(auStack_3c);
      iVar4 = FUN_009828c0();
      if (0 < iVar4) {
        iVar10 = FUN_004d7630();
        if (iVar10 == 0) {
          uVar20 = 0;
          uVar5 = (**(code **)(*piVar11 + 0x170))(0);
          uVar5 = FUN_00469cd0(uVar5);
          FUN_004028d0(uVar5,uVar20);
        }
        else {
          FUN_0042b650(&uStack_5c);
        }
        FUN_005b87d0((float)uStack_6c,uStack_6c._4_4_,uStack_5c,0xc,0,1,1,iVar4,0,0,0);
      }
    }
  }
  FUN_004526e0();
  piVar8 = (int *)FUN_0065d830();
  *(int **)(iVar3 + 0xcc) = piVar8;
  piVar11 = DAT_00b333c4;
joined_r0x005ba8ed:
  DAT_00b333c4 = piVar11;
  if ((piVar8 != (int *)0x0) && (*piVar8 != 0)) {
    piVar9 = *(int **)(*piVar8 + 0x10);
    piVar8 = (int *)piVar8[1];
    uStack_70 = 1;
    if (piVar9 == (int *)0x0) goto code_r0x005ba905;
    goto LAB_005ba915;
  }
  iStack_64 = piVar11[0x18d];
  uStack_6c._0_4_ = (float)piVar11[0x18b];
  uStack_6c._4_4_ = piVar11[0x18c];
  cVar1 = FUN_008aa390(&DAT_00b3f9a8);
  if ((cVar1 != '\0') &&
     (iVar4 = piVar11[0x18e], iVar10 = FUN_004d8af0(), piVar11 = DAT_00b333c4, iVar4 == iVar10)) {
    FUN_005b87d0((float)uStack_6c,uStack_6c._4_4_,"local_set",99,0,3,0,0xff,0,0,1);
    piVar11 = DAT_00b333c4;
  }
  puVar6 = (undefined8 *)(**(code **)(*piVar11 + 0x174))();
  uStack_6c = (double)*puVar6;
  iStack_64 = *(int *)(puVar6 + 1);
  iVar4 = FUN_005b87d0(*(undefined4 *)puVar6,*(undefined4 *)((int)puVar6 + 4),"local_player",0x62,0,
                       4,0,0xff,0,0,0);
  fStack_60 = (float)iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(iVar3 + 0xfc) = 0;
  }
  else {
    *(int *)(iVar3 + 0xfc) = iVar4;
    FUN_0058e870();
  }
  iVar3 = *(int *)(iVar3 + 0xfc);
  if ((iVar3 != 0) && (iVar10 = *(int *)(iVar3 + 0x24), iVar10 != 0)) {
    FUN_006ecc80();
    fVar12 = (float10)FUN_004cce00();
    uStack_6c = (double)fVar12;
    fVar12 = (float10)(**(code **)(*DAT_00b333c4 + 0x1e0))();
    FUN_0070fd80(-(float)(fVar12 + (float10)uStack_6c));
    fVar12 = (float10)FUN_00588bd0(0xfcb);
    fVar13 = (float10)FUN_00588bd0(0xfca);
    *(undefined1 *)(iVar3 + 6) = 1;
    uVar2 = 0;
    uStack_6c = (double)CONCAT44(uStack_6c._4_4_,(float)(fVar13 * (float10)0.5));
    if (*(short *)(iVar10 + 0xb8) != 0) {
      do {
        if (uVar2 < *(ushort *)(iVar10 + 0xb6)) {
          uVar5 = *(undefined4 *)(*(int *)(iVar10 + 0xb0) + uVar2 * 4);
        }
        else {
          uVar5 = 0;
        }
        iVar3 = FUN_00560920(&DAT_00b3fcd4,uVar5);
        if (iVar3 != 0) {
          uStack_44 = 0;
          fStack_40 = -(float)uStack_6c;
          fStack_48 = (float)(fVar12 * (float10)0.5);
          FUN_005b6860(auStack_30,&fStack_48,&DAT_00b3f9a8);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(iVar10 + 0xb8));
    }
    if (iVar4 == 0) goto LAB_005bac62;
    if (*(int *)(iVar4 + 0x24) != 0) {
      FUN_00707370(0,1);
    }
  }
  if ((iVar4 != 0) && (param_1 != '\0')) {
    FUN_00588bd0(0xfae);
    iVar3 = FUN_009828c0();
    uStack_6c._0_4_ = (float)iVar3;
    FUN_00588bd0(0xfaf);
    iVar4 = FUN_009828c0();
    uStack_6c._0_4_ = (float)(int)(float)uStack_6c;
    fVar12 = (float10)FUN_00588bd0(0xfad);
    uStack_6c = (double)CONCAT44(uStack_6c._4_4_,(float)((float10)(float)uStack_6c - fVar12));
    fStack_60 = (float)iVar4;
    fVar12 = (float10)FUN_00588bd0(0xfac);
    fStack_60 = (float)((float10)fStack_60 - fVar12);
    FUN_0058ceb0(0xfb8,(float)uStack_6c);
    FUN_0058ceb0(0xfb9,fStack_60);
    fStack_60 = (float)(iVar3 / 2);
    FUN_0058ceb0(0xfae,(float)(int)fStack_60);
    fStack_60 = (float)(iVar4 / 2);
    FUN_0058ceb0(0xfaf,(float)(int)fStack_60);
  }
LAB_005bac62:
  FUN_00401f20(uStack_5c);
  *unaff_FS_OFFSET = local_c;
  return;
code_r0x005ba905:
  piVar9 = (int *)FUN_0052b440(1);
  uStack_70 = 0;
  piVar11 = DAT_00b333c4;
  if (piVar9 != (int *)0x0) {
LAB_005ba915:
    puVar6 = (undefined8 *)(**(code **)(*piVar9 + 0x174))();
    uStack_6c = (double)*puVar6;
    iStack_64 = *(int *)(puVar6 + 1);
    FUN_005b87d0(*(undefined4 *)puVar6,*(undefined4 *)((int)puVar6 + 4),0,99,1,2,0,0xff,uStack_70,1,
                 0);
    piVar11 = DAT_00b333c4;
  }
  goto joined_r0x005ba8ed;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005bacb0(float param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *unaff_FS_OFFSET;
  float local_350;
  int local_34c;
  int iStack_348;
  int iStack_344;
  undefined4 uStack_340;
  undefined2 uStack_33c;
  undefined2 uStack_33a;
  int iStack_338;
  undefined2 uStack_334;
  undefined2 uStack_332;
  int local_330;
  int *piStack_32c;
  undefined4 uStack_328;
  undefined2 uStack_324;
  undefined2 uStack_322;
  int aiStack_320 [2];
  char acStack_318 [516];
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c0d51;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_350;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffca0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_350 = param_1;
  cVar1 = FUN_0045a500(uVar2);
  if ((cVar1 == '\0') && (iVar3 = FUN_00589b70(0x3ff), iVar3 != 0)) {
    iVar3 = FUN_005898f0();
    local_330 = iVar3;
    if ((*(int *)(DAT_00b333c4 + 0x5f4) != 0) &&
       ((*(byte *)(*(int *)(DAT_00b333c4 + 0x5f4) + 0x3c) & 2) != 0)) {
      FUN_00660450(0);
    }
    FUN_00588bd0(0xfae);
    iVar4 = FUN_009828c0();
    local_34c = 0x34;
    if (iVar4 == 4) {
      local_34c = 0x33;
    }
    else if (iVar4 == 3) {
      local_350 = *(float *)(DAT_00b333c4 + 0x5f4);
      local_34c = 0x36;
    }
    else if (param_1 != 0.0) {
      local_34c = 0x35;
    }
    FUN_005b8fc0(local_34c);
    FUN_0058ceb0(0xfa1,0x3f800000);
    FUN_0058ceb0(0xfa1,0x3f800000);
    if (DAT_00b333c4 != 0) {
      *(undefined4 *)(iVar3 + 0x78) = 0;
      FUN_0058ceb0(0xfa1,0x3f800000);
      puVar7 = *(undefined4 **)(*(int *)(iVar3 + 0x48) + 0x34);
      while (puVar7 != (undefined4 *)0x0) {
        piVar5 = puVar7 + 2;
        puVar7 = (undefined4 *)*puVar7;
        if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar5)(1);
        }
      }
      FUN_00573880();
      if ((*(int *)(DAT_00b333c4 + 0x5f4) != 0) || (local_34c != 0x36)) {
        aiStack_320[0] = 0;
        aiStack_320[1] = 0;
        FUN_0052a8a0(aiStack_320,local_350,iVar4 == 5,1);
        iStack_348 = 0;
        local_350 = 0.0;
        piVar5 = aiStack_320;
        do {
          if (*piVar5 == 0) break;
          iVar3 = *piVar5;
          iStack_344 = *(undefined4 *)(iVar3 + 100);
          piStack_32c = (int *)piVar5[1];
          iVar4 = *(int *)(iVar3 + 0x68);
          uStack_340 = 0;
          uStack_33c = 0;
          uStack_33a = 0;
          FUN_004028d0(&DAT_00a2f7ec,0);
          puVar6 = *(undefined1 **)(*(int *)(iVar3 + 0x68) + 0x34);
          uStack_4 = 0;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_00a2f7ec;
          }
          FUN_00402e30(&uStack_340,"%s_%i",puVar6,iStack_348);
          FUN_005b8d00(uStack_340,local_34c);
          puVar6 = *(undefined1 **)(*(int *)(iVar3 + 0x68) + 0x34);
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_00a2f7ec;
          }
          iStack_338 = 0;
          uStack_334 = 0;
          uStack_332 = 0;
          FUN_004028d0(puVar6,0);
          uStack_4._0_1_ = 1;
          if (iStack_338 == 0) {
            acStack_318[0] = '\0';
          }
          else {
            uVar2 = 0;
            do {
              cVar1 = *(char *)(iStack_338 + uVar2);
              acStack_318[uVar2] = cVar1;
              if (cVar1 == ' ') {
                acStack_318[uVar2] = '_';
              }
            } while ((acStack_318[uVar2] != '\0') && (uVar2 = uVar2 + 1, uVar2 < 0x100));
            acStack_318[0xff] = 0;
          }
          FUN_004028d0(acStack_318,0);
          FUN_0058ceb0(0xfaa,(float)iStack_348);
          puVar6 = *(undefined1 **)(*(int *)(iVar3 + 0x68) + 0x34);
          iStack_348 = iStack_348 + 1;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_00a2f7ec;
          }
          FUN_0058ced0(0xfaf,puVar6);
          puVar7 = (undefined4 *)FUN_0047d400(&uStack_328);
          uStack_4._0_1_ = 2;
          FUN_0058ced0(0xfb0,*puVar7);
          uStack_4 = CONCAT31(uStack_4._1_3_,1);
          FUN_00401f20(uStack_328);
          uStack_328 = 0;
          uStack_322 = 0;
          uStack_324 = 0;
          uVar8 = FUN_0052af40(iVar4);
          FUN_0058ced0(0xfb1,uVar8);
          puVar6 = *(undefined1 **)(iVar4 + 0x28);
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_00a2f7ec;
          }
          _sprintf(acStack_318 + 0x100,"%s",puVar6);
          acStack_114[0] = '\0';
          if (acStack_318[0x100] != '\0') {
            _sprintf(acStack_114,"%s\\%s","Icons",acStack_318 + 0x100);
          }
          FUN_0058ced0(0xfb2,acStack_114);
          local_350 = (float)(int)local_350;
          FUN_0058ceb0(0xfb3,local_350);
          iStack_344 = (*(int *)(DAT_00b333c4 + 0x5f4) == iVar4) + 1;
          FUN_0058ceb0(0xfb4,(float)iStack_344);
          FUN_0058fba0(0);
          FUN_00588bd0(0xfca);
          local_350 = (float)FUN_009828c0();
          FUN_00401f20(iStack_338);
          iStack_338 = 0;
          uStack_332 = 0;
          uStack_334 = 0;
          uStack_4 = 0xffffffff;
          FUN_00401f20(uStack_340);
          uStack_340 = 0;
          uStack_33a = 0;
          uStack_33c = 0;
          piVar5 = piStack_32c;
        } while (piStack_32c != (int *)0x0);
        FUN_0058ceb0(0xfca,(float)(int)local_350);
        iStack_344 = iStack_348 + -2;
        FUN_0058ceb0(0xfae,(float)iStack_344);
        FUN_0058ceb0(0xfb7,0xcb18967f);
        FUN_0058ceb0(0xfb7,0);
        FUN_004526e0();
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005bb1b0(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3ff);
  if (iVar1 != 0) {
    FUN_005898f0();
    FUN_00588bd0(0xfae);
    iVar1 = FUN_009828c0();
    if (((iVar1 == 3) || (iVar1 == 4)) || (iVar1 == 5)) {
      FUN_005bacb0(0);
    }
    else {
      if (iVar1 == 2) {
        FUN_005b91e0();
        return;
      }
      if (iVar1 == 1) {
        FUN_005ba4d0(1);
        return;
      }
    }
  }
  return;
}



void FUN_005bb210(int param_1)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  
  FUN_0058ceb0(0xfa1,0x3f800000);
  FUN_0058ceb0(0xfae,(float)param_1);
  iVar2 = FUN_00582160(0,1);
  *(char *)(iVar2 + 0xd) = (char)param_1;
  FUN_0058ceb0(0xfa1,0x3f800000);
  FUN_0058ced0(0xfde,&DAT_00a36430);
  if (*(int *)(in_ECX + 0xf4) != 0) {
    FUN_0058ceb0(0xfb5,0);
  }
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  if ((param_1 == 4) || (param_1 == 5)) {
    FUN_005bacb0(0);
    fVar1 = 1.0;
  }
  else {
    if (param_1 != 3) {
      if (param_1 == 2) {
        FUN_005b91e0();
      }
      else if (param_1 == 1) {
        FUN_005ba4d0(1);
      }
      goto LAB_005bb318;
    }
    FUN_005bacb0(0);
    iVar2 = FUN_0065d830();
    fVar1 = (float)(byte)((iVar2 != 0) + 1);
  }
  FUN_0058ceb0(0xfa1,fVar1);
  FUN_0058ceb0(0xfa1,0x3f800000);
LAB_005bb318:
  FUN_0058ceb0(0xfb7,0xcb18967f);
  FUN_0058ceb0(0xfb7,0);
  return;
}



void FUN_005bb350(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  iVar6 = FUN_00589b70(0x3ff);
  if (iVar6 != 0) {
    iVar7 = FUN_005898f0();
    cVar5 = FUN_00578d70();
    uVar8 = DAT_00b3f9b0;
    iVar6 = DAT_00b333c4;
    if (cVar5 == '\x01') {
      if (*(char *)(iVar7 + 0xdc) != '\0') {
        cVar5 = FUN_004d8b90();
        if (cVar5 == '\0') {
          uVar8 = FUN_004d6670();
        }
        else {
          uVar8 = FUN_006ecc80();
        }
        local_c = *(float *)(iVar7 + 0xd4);
        local_8 = *(float *)(iVar7 + 0xd8);
        local_4 = DAT_00b3f9b0;
        FUN_005b7180(&local_c,&local_8);
        iVar6 = DAT_00b333c4;
        *(float *)(DAT_00b333c4 + 0x62c) = local_c;
        *(float *)(iVar6 + 0x630) = local_8;
        *(undefined4 *)(iVar6 + 0x634) = local_4;
        *(undefined4 *)(DAT_00b333c4 + 0x638) = uVar8;
        FUN_00663d30();
        FUN_005ba4d0(0);
        FUN_0058fba0(0);
        return;
      }
      fVar1 = *(float *)(iVar7 + 0xd8);
      fVar4 = (float)*(int *)(iVar7 + 0x98);
      if (*(int *)(iVar7 + 0x98) < 0) {
        fVar4 = fVar4 + 4.2949673e+09;
      }
      iVar2 = *(int *)(iVar7 + 0xa8);
      local_c = (*(float *)(iVar7 + 0xd4) / fVar4) *
                (float)(*(int *)(iVar7 + 0xa4) - *(int *)(iVar7 + 0xa0)) +
                (float)*(int *)(iVar7 + 0xa0);
      fVar4 = (float)*(int *)(iVar7 + 0x9c);
      if (*(int *)(iVar7 + 0x9c) < 0) {
        fVar4 = fVar4 + 4.2949673e+09;
      }
      iVar3 = *(int *)(iVar7 + 0xac);
      *(float *)(DAT_00b333c4 + 0x62c) = local_c;
      local_8 = -(-(fVar1 / fVar4 - 1.0) * (float)(iVar2 - iVar3) - (float)iVar2);
      *(float *)(iVar6 + 0x630) = local_8;
      *(undefined4 *)(iVar6 + 0x634) = uVar8;
      *(undefined4 *)(DAT_00b333c4 + 0x638) = *(undefined4 *)(iVar7 + 0xd0);
      FUN_00663d30();
      fVar1 = (float)*(int *)(iVar7 + 0x98);
      if (*(int *)(iVar7 + 0x98) < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      local_c = fVar1 * ((local_c - (float)*(int *)(iVar7 + 0xa0)) /
                        (float)(*(int *)(iVar7 + 0xa4) - *(int *)(iVar7 + 0xa0)));
      fVar1 = (float)*(int *)(iVar7 + 0x9c);
      if (*(int *)(iVar7 + 0x9c) < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      local_8 = fVar1 * (1.0 - ((float)*(int *)(iVar7 + 0xa8) - local_8) /
                               (float)(*(int *)(iVar7 + 0xa8) - *(int *)(iVar7 + 0xac)));
      FUN_0058ceb0(0xfaf,local_c);
      FUN_0058ceb0(0xfb0,local_8);
      FUN_0058ceb0(0xfa7,0x437f0000);
      FUN_0058ceb0(0xfb6,0x40000000);
      FUN_0058fba0(0);
      return;
    }
    if (cVar5 == '\x03') {
      *(undefined4 *)(DAT_00b333c4 + 0x62c) = DAT_00b3f9a8;
      *(undefined4 *)(iVar6 + 0x630) = DAT_00b3f9ac;
      *(undefined4 *)(iVar6 + 0x634) = DAT_00b3f9b0;
      *(undefined4 *)(DAT_00b333c4 + 0x638) = 0;
      FUN_00663d30();
      if (*(int *)(iVar7 + 0xe0) != 0) {
        FUN_0058ceb0(0xfa7,0);
        FUN_0058ceb0(0xfb6,0x3f800000);
      }
      if (*(char *)(iVar7 + 0xdc) != '\0') {
        FUN_005ba4d0(0);
      }
    }
  }
  return;
}



undefined4 FUN_005bb6c0(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  
  puVar2 = (undefined4 *)FUN_00589b70(0x3ff);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  FUN_00582160(0,1);
  fVar7 = (float10)thunk_FUN_00584980();
  uVar3 = FUN_00590420("Data\\Menus\\Main\\map_menu.xml");
  piVar4 = (int *)FUN_005898f0();
  FUN_00584670("Data\\Menus\\Main\\map_menu.xml",piVar4);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  iVar5 = (**(code **)(*piVar4 + 0x34))();
  if (iVar5 != 0x3ff) {
    if (piVar4[1] == 0) {
      return 0;
    }
    (**(code **)*piVar4)(1);
    return 0;
  }
  uVar6 = FUN_009832e6(uVar3,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar6);
  FUN_009832e6(piVar4,0,&PTR_PTR_00b0a018,&PTR_PTR_00b14398,0);
  cVar1 = FUN_005b65f0();
  if (cVar1 != '\0') {
    fVar8 = (float10)FUN_00588bd0(0xfa5);
    if ((fVar8 == (float10)6006.0) ||
       (fVar8 = (float10)FUN_00588bd0(0xfa5), fVar8 == (float10)102.0)) {
      FUN_0058ceb0(0xfab,(float)fVar7);
    }
    FUN_0058ceb0(0xfb3,0);
    FUN_005b8fc0(0);
    FUN_00585190(1);
    FUN_0058fba0(0);
    iVar5 = FUN_00582160(0,1);
    cVar1 = *(char *)(iVar5 + 0xd);
    if (cVar1 == -1) {
      FUN_00588bd0(0xfae);
      cVar1 = FUN_009828c0();
    }
    if (cVar1 < '\x06') {
      if (cVar1 < '\x01') {
        FUN_005bb210(1,0);
        return uVar3;
      }
    }
    else {
      cVar1 = '\x05';
    }
    FUN_005bb210((int)cVar1,0);
    return uVar3;
  }
  FUN_004a7a60("Map Menu Creation Failed... Are your menu and art resources up to date?");
  return 0;
}



void FUN_005bb880(int param_1,int param_2)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  undefined1 *puVar7;
  int *in_ECX;
  int iVar8;
  float fVar9;
  double *pdVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  float10 fVar12;
  undefined4 *puVar13;
  float local_38 [2];
  double local_30;
  double local_28;
  int iStack_1c;
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_009c0d98;
  local_14 = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (int)&local_14;
  if (param_1 == 0x15) {
    param_2 = in_ECX[0x3d];
    if (param_2 == 0) goto LAB_005bc166;
  }
  else if (param_1 != 0x2b) {
    if ((param_1 < 1) || (5 < param_1)) {
      if ((param_1 == 7) || (param_1 == 8)) {
        FUN_00588bd0(0xfae);
        iVar5 = FUN_009828c0();
        if (param_1 == 7) {
          iVar5 = iVar5 + -1;
        }
        else {
          iVar5 = iVar5 + 1;
        }
        if (iVar5 < 1) {
          iVar5 = 5;
        }
        else if (5 < iVar5) {
          iVar5 = 1;
        }
        FUN_0058ceb0(0xfae,(float)iVar5);
        (**(code **)(*in_ECX + 0x14))(param_1,param_2);
        param_2 = 0;
      }
      else {
        if (param_1 != 0x33) {
          if (param_1 == 0x34) {
            FUN_00588bd0(0xfaa);
            iVar5 = FUN_009828c0();
            local_38[0] = 0.0;
            local_38[1] = 0.0;
            FUN_0052a8a0(local_38,0,1,1);
            pfVar6 = local_38;
            iVar8 = 1;
            fVar9 = 0.0;
            do {
              fVar1 = *pfVar6;
              if (fVar1 == 0.0) break;
              pfVar6 = (float *)pfVar6[1];
              fVar9 = fVar1;
              if (iVar5 == iVar8) {
                FUN_005bacb0(*(undefined4 *)((int)fVar1 + 0x68));
                break;
              }
              iVar8 = iVar8 + 1;
            } while (pfVar6 != (float *)0x0);
            FUN_0058ceb0(0xfa1,0x40000000);
            puVar7 = *(undefined1 **)(*(int *)((int)fVar9 + 0x68) + 0x34);
            if (puVar7 == (undefined1 *)0x0) {
              puVar7 = &DAT_00a2f7ec;
            }
            FUN_0058ced0(0xfb1,puVar7);
            FUN_0057de50(1);
            *unaff_FS_OFFSET = local_14;
            return;
          }
          if (param_1 == 0x29) {
            local_28 = (double)(float)in_ECX[0x39];
            fVar11 = (float10)FUN_00588bd0(0xfda);
            if (fVar11 == (float10)local_28) {
              local_28 = (double)(float)in_ECX[0x3a];
              fVar11 = (float10)FUN_00588bd0(0xfd9);
              if ((fVar11 == (float10)local_28) &&
                 (iVar5 = FUN_00582160(0,1), (*(uint *)(iVar5 + 0x118) >> 2 & 1) != 0)) {
                (**(code **)(*in_ECX + 0x14))(0x29,param_2);
                *(undefined1 *)(in_ECX + 0x37) = 0;
                FUN_00582160(0,1);
                iVar5 = FUN_005952d0();
                local_30 = (double)iVar5;
                fVar11 = (float10)FUN_00588c50();
                local_30 = (double)((float10)local_30 - fVar11);
                fVar11 = (float10)FUN_00588bd0(0xfda);
                in_ECX[0x35] = (int)(float)(fVar11 + (float10)local_30);
                FUN_00582160(0,1);
                iVar5 = FUN_00593020();
                local_30 = (double)iVar5;
                fVar11 = (float10)FUN_00588cf0();
                local_30 = (double)((float10)local_30 - fVar11);
                fVar11 = (float10)FUN_00588bd0(0xfd9);
                fVar11 = fVar11 + (float10)local_30;
LAB_005bbcfb:
                puVar13 = &DAT_00b3f9a8;
                in_ECX[0x36] = (int)(float)fVar11;
                FUN_005a5790(&local_30);
                cVar2 = FUN_008aa350(puVar13);
                if (cVar2 == '\0') {
                  FUN_00579c10(DAT_00b38c70,FUN_005bb350,1,DAT_00b38c78,DAT_00b38c80,DAT_00b38c88,0)
                  ;
                  *unaff_FS_OFFSET = iStack_1c;
                  return;
                }
                FUN_00579c10(DAT_00b38c68,FUN_005bb350,1,DAT_00b38cf8,DAT_00b38d00);
                *unaff_FS_OFFSET = iStack_1c;
                return;
              }
            }
          }
          else if (param_1 == 0x2d) {
            iVar5 = FUN_00582160(0,1);
            if ((*(uint *)(iVar5 + 0x118) >> 2 & 1) != 0) {
              (**(code **)(*in_ECX + 0x14))(0x2d,param_2);
              *(undefined1 *)(in_ECX + 0x37) = 1;
              FUN_00582160(0,1);
              iVar5 = FUN_005952d0();
              local_30 = (double)iVar5;
              fVar11 = (float10)FUN_00588c50();
              local_30 = (double)((float10)local_30 - fVar11);
              fVar11 = (float10)FUN_00588bd0(0xfda);
              in_ECX[0x35] = (int)(float)(fVar11 + (float10)local_30);
              FUN_00582160(0,1);
              iVar5 = FUN_00593020();
              local_30 = (double)iVar5;
              fVar11 = (float10)FUN_00588cf0();
              local_30 = (double)((float10)local_30 - fVar11);
              fVar11 = (float10)FUN_00588bd0(0xfd9);
              fVar11 = fVar11 + (float10)local_30;
              goto LAB_005bbcfb;
            }
          }
          else {
            if (param_1 == 0x20) {
              FUN_005bacb0(0);
              FUN_0058ceb0(0xfa1,0x3f800000);
              FUN_0058ceb0(0xfa1,0x3f800000);
              FUN_0057de50(2);
              *unaff_FS_OFFSET = local_14;
              return;
            }
            if ((param_1 == 0x1f) && (FUN_0057de50(5,uVar3), *(int *)(in_ECX[0x12] + 0x34) != 0)) {
              uVar4 = FUN_00588c10(0xfaf);
              FUN_00419b10(uVar4);
              local_c = 2;
              local_30 = 0.0;
              FUN_0052a8a0(&local_30,0,0,1);
              pdVar10 = &local_30;
              do {
                iVar5 = *(int *)pdVar10;
                if (iVar5 == 0) break;
                puVar7 = *(undefined1 **)(*(int *)(iVar5 + 0x68) + 0x34);
                pdVar10 = *(double **)((int)pdVar10 + 4);
                if (puVar7 == (undefined1 *)0x0) {
                  puVar7 = &DAT_00a2f7ec;
                }
                cVar2 = FUN_005755d0(puVar7);
                if (cVar2 != '\0') {
                  FUN_00660450(*(undefined4 *)(iVar5 + 0x68));
                  FUN_0058ceb0(0xfa1,0x3f800000);
                  FUN_0058ceb0(0xfae,0x40000000);
                  iVar5 = FUN_00582160(0,1);
                  *(undefined1 *)(iVar5 + 0xd) = 2;
                  FUN_0058ceb0(0xfa1,0x3f800000);
                  FUN_0058ced0(0xfde,&DAT_00a36430);
                  if (in_ECX[0x3d] != 0) {
                    FUN_0058ceb0(0xfb5,0);
                  }
                  in_ECX[0x3d] = 0;
                  FUN_005b91e0();
                  FUN_0058ceb0(0xfb7,0xcb18967f);
                  FUN_0058ceb0(0xfb7,0);
                  FUN_0058ceb0(0xfa1,0x3f800000);
                  FUN_0058ceb0(0xfa1,0x3f800000);
                  puVar13 = *(undefined4 **)(in_ECX[0x16] + 0x34);
                  goto joined_r0x005bc035;
                }
              } while (pdVar10 != (double *)0x0);
              goto LAB_005bc0cb;
            }
          }
          goto LAB_005bc166;
        }
        FUN_00588bd0(0xfaa);
        iVar5 = FUN_009828c0();
        local_38[0] = 0.0;
        local_38[1] = 0.0;
        FUN_0052a8a0(local_38,0,0,1);
        pfVar6 = local_38;
        iVar8 = 1;
        do {
          fVar9 = *pfVar6;
          if (fVar9 == 0.0) break;
          pfVar6 = (float *)pfVar6[1];
          if (iVar5 == iVar8) {
            FUN_00660450(*(undefined4 *)((int)fVar9 + 0x68));
            FUN_005bacb0(0);
            break;
          }
          iVar8 = iVar8 + 1;
        } while (pfVar6 != (float *)0x0);
        FUN_004526e0();
        FUN_0057de50(0xb);
        param_2 = in_ECX[0xd];
        iVar5 = 3;
      }
    }
    else {
      (**(code **)(*in_ECX + 0x14))(param_1,param_2);
      iVar5 = param_1;
    }
    FUN_005bb210(iVar5,param_2);
    goto LAB_005bc166;
  }
  if (param_2 != 0) {
    if (((*(int *)(param_2 + 0x10) == in_ECX[0x16]) &&
        (fVar11 = (float10)FUN_00588bd0(0xfb4), fVar11 == (float10)2.0)) &&
       (cVar2 = FUN_006640d0(), cVar2 != '\0')) {
      (**(code **)(*in_ECX + 0x14))(0x2b,param_2);
      uVar4 = FUN_00588c10(0xfb2);
      FUN_00488810(uVar4);
      iVar5 = FUN_00588b50(0xfaf);
      in_ECX[0x2e] = *(int *)(iVar5 + 4);
      iVar5 = FUN_00588b50(0xfb0);
      local_38[0] = 0.0;
      in_ECX[0x2f] = *(int *)(iVar5 + 4);
      local_38[1] = 0.0;
      local_c = 0;
      FUN_00402e30(local_38,"%s %s?",DAT_00b38c60,in_ECX[0x2c]);
      FUN_00579c10(local_38[0],FUN_005b8dc0,1,DAT_00b38cf8,DAT_00b38d00,0);
      local_c = 0xffffffff;
      FUN_00402da0();
    }
    if ((*(int *)(param_2 + 0x10) == in_ECX[0x16]) &&
       (fVar11 = (float10)FUN_00588bd0(0xfb4), fVar11 == (float10)1.0)) {
      local_38[0] = 0.0;
      local_38[1] = 0.0;
      local_c = 1;
      FUN_00402e30(local_38,&DAT_00a2f864,DAT_00b38c90);
      fVar9 = local_38[0];
      FUN_0057add0(local_38[0],0xbf800000,0,0);
      FUN_00401f20(fVar9);
      *unaff_FS_OFFSET = local_14;
      return;
    }
  }
LAB_005bc166:
  *unaff_FS_OFFSET = local_14;
  return;
  while( true ) {
    puVar13 = (undefined4 *)*puVar13;
    fVar11 = (float10)FUN_00588bd0(0xfb3);
    if ((fVar11 == (float10)99.0) && (fVar11 = (float10)FUN_00588bd0(0xfb4), fVar11 == (float10)2.0)
       ) break;
joined_r0x005bc035:
    if (puVar13 == (undefined4 *)0x0) goto LAB_005bc0cb;
  }
  fVar11 = (float10)FUN_00588bd0(0xfaf);
  fVar12 = (float10)FUN_00588bd0(0xfb0);
  local_38[0] = (float)fVar12;
  FUN_0058ceb0(0xfb8,(float)fVar11);
  FUN_0058ceb0(0xfb9,local_38[0]);
LAB_005bc0cb:
  FUN_004526e0();
  local_c = 0xffffffff;
  FUN_00402da0();
  *unaff_FS_OFFSET = local_14;
  return;
}



void FUN_005bc450(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[10] = 0;
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
  *in_ECX = &PTR_FUN_00a6ce5c;
  *(undefined1 *)(in_ECX + 0x18) = 1;
  return;
}



void FUN_005bc4a0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0388;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6ce5c;
  local_4 = 0;
  iVar2 = FUN_00582160(0,1,uVar1);
  *(undefined4 *)(iVar2 + 0xb4) = in_ECX[0x17];
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_005bc5e0(undefined4 param_1)

{
  int in_ECX;
  
  switch(param_1) {
  case 1:
    return *(undefined4 *)(in_ECX + 0x28);
  case 2:
    return *(undefined4 *)(in_ECX + 0x2c);
  case 3:
    return *(undefined4 *)(in_ECX + 0x30);
  case 4:
    return *(undefined4 *)(in_ECX + 0x34);
  case 5:
    return *(undefined4 *)(in_ECX + 0x38);
  case 6:
    return *(undefined4 *)(in_ECX + 0x3c);
  case 7:
    return *(undefined4 *)(in_ECX + 0x40);
  case 8:
    return *(undefined4 *)(in_ECX + 0x44);
  case 9:
    return *(undefined4 *)(in_ECX + 0x48);
  case 10:
    return *(undefined4 *)(in_ECX + 0x4c);
  case 0xb:
    return *(undefined4 *)(in_ECX + 0x50);
  case 0xc:
    return *(undefined4 *)(in_ECX + 0x54);
  case 0xd:
    return *(undefined4 *)(in_ECX + 0x58);
  default:
    return 0;
  }
}



void FUN_005bc690(byte param_1)

{
  FUN_005bc4a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005bc6b0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_00589b70(0x3e9);
  if ((iVar2 != 0) && (puVar3 = (undefined4 *)FUN_005898f0(), puVar3 != (undefined4 *)0x0)) {
    DAT_00b143ae = 1;
    iVar2 = FUN_00582160(0,1);
    if (*(char *)(iVar2 + 0xb0) == -1) {
      iVar2 = FUN_00582160(0,1);
      *(undefined1 *)(iVar2 + 0xb0) = *(undefined1 *)(puVar3 + 0x18);
    }
    FUN_0058ceb0(0x1772,0x40000000);
    iVar2 = FUN_00582160(0,1);
    if (*(int *)(iVar2 + 0x60) != 0) {
      uVar4 = 0x40e;
      FUN_00587b20(1,0x40e);
      cVar1 = FUN_005878b0(uVar4);
      if (cVar1 == '\0') {
        FUN_00584740();
        return;
      }
    }
    (**(code **)*puVar3)(1);
  }
  return;
}



void FUN_005bc770(undefined4 param_1,int param_2)

{
  int in_ECX;
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  if (((*(int *)(in_ECX + 0x30) == 0) || (param_2 == 0)) ||
     (fVar1 = (float10)FUN_00588bd0(0xfa8), fVar1 < (float10)4.0)) {
    if (*(int *)(in_ECX + 0x30) == 0) {
      return;
    }
    uVar3 = 0x3f800000;
  }
  else {
    fVar1 = (float10)FUN_00588d90();
    uVar3 = 0xfab;
    FUN_00589390(0xfab);
    fVar2 = (float10)FUN_00588bd0(uVar3);
    FUN_0058ceb0(0xfab,(float)(((float10)(double)fVar1 - fVar2) - (float10)1.0));
    fVar1 = (float10)FUN_00588bd0(0xfcb);
    FUN_0058ceb0(0xfcb,(float)fVar1);
    fVar1 = (float10)FUN_00588bd0(0xfca);
    FUN_0058ceb0(0xfca,(float)fVar1);
    fVar1 = (float10)FUN_00588bd0(0xfad);
    FUN_0058ceb0(0xfad,(float)fVar1);
    fVar1 = (float10)FUN_00588bd0(0xfac);
    FUN_0058ceb0(0xfac,(float)fVar1);
    uVar3 = 0x40000000;
  }
  FUN_0058ceb0(0xfa1,uVar3);
  return;
}



undefined4
FUN_005bc8b0(char *param_1,undefined4 param_2,undefined1 param_3,char *param_4,int *param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  float10 fVar12;
  char *pcStack_14;
  ushort uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bdf28;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar3 = (undefined4 *)FUN_00589b70(0x3e9,uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  iVar4 = FUN_00582160(0,1);
  fVar11 = (float10)thunk_FUN_00584980();
  FUN_005903e0();
  uVar5 = FUN_00590420("Data\\Menus\\message_menu.xml");
  piVar6 = (int *)FUN_005898f0();
  if (piVar6 != (int *)0x0) {
    iVar7 = (**(code **)(*piVar6 + 0x34))();
    if (iVar7 == 0x3e9) {
      uVar5 = FUN_009832e6(uVar5,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
      FUN_00584880(uVar5);
      iVar7 = FUN_009832e6(piVar6,0,&PTR_PTR_00b0a018,&PTR_PTR_00b1328c,0);
      if (((*(int *)(iVar7 + 0x2c) != 0) && (*(int *)(iVar7 + 0x30) != 0)) &&
         (*(int *)(iVar7 + 0x28) != 0)) {
        fVar12 = (float10)FUN_00588bd0(0xfa5);
        if ((fVar12 == (float10)6006.0) ||
           (fVar12 = (float10)FUN_00588bd0(0xfa5), fVar12 == (float10)102.0)) {
          FUN_0058ceb0(0xfab,(float)fVar11);
        }
        *(undefined1 *)(iVar4 + 0xb0) = 0xff;
        *(undefined4 *)(iVar7 + 0x5c) = param_2;
        if (param_4 == (char *)0x0) {
          FUN_0058ceb0(0xfa1,0x3f800000);
        }
        else if (*param_4 == '\0') {
          FUN_0058ced0(0xfde,DAT_00b38cf0);
        }
        else {
          FUN_0058ced0(0xfde,param_4);
        }
        if (param_5 != (int *)0x0) {
          *param_5 = *param_5 + 4;
          FUN_00419b10(*(undefined4 *)(*param_5 + -4));
          uStack_4 = 0;
          iVar10 = 4;
          while( true ) {
            if (uStack_10 == 0xffff) {
              pcVar8 = pcStack_14;
              do {
                cVar1 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar1 != '\0');
              uVar2 = (int)pcVar8 - (int)(pcStack_14 + 1);
            }
            else {
              uVar2 = (uint)uStack_10;
            }
            if (uVar2 == 0) break;
            iVar10 = iVar10 + 1;
            iVar9 = FUN_005bc5e0(iVar10);
            if (iVar9 == 0) {
              FUN_00404ec0("Missing MessageMenu button");
            }
            else {
              FUN_0058ced0(0xfde,pcStack_14);
              FUN_0058ceb0(0xfa1,0x40000000);
            }
            *param_5 = *param_5 + 4;
            FUN_004028d0(*(undefined4 *)(*param_5 + -4),0);
          }
          uStack_4 = 0xffffffff;
          FUN_00401f20(pcStack_14);
        }
        pcVar8 = DAT_00b38e10;
        if (*param_1 != '\0') {
          pcVar8 = param_1;
        }
        FUN_0058ced0(0xfde,pcVar8);
        *(undefined1 *)(iVar7 + 0x60) = param_3;
        FUN_0058ceb0(0xfae,(float)(*(char *)(iVar4 + 8) != '\x01'));
        cVar1 = FUN_00572df0(2);
        if (cVar1 != '\0') {
          FUN_0040d160();
        }
        FUN_0057de50(0xb);
        FUN_0058fba0(0);
        FUN_0058fba0(0);
        FUN_00585190(0);
        FUN_0058ceb0(0xfa1,0x40000000);
        *unaff_FS_OFFSET = local_c;
        return 1;
      }
      FUN_00404ec0("Message Menu Creation Failed... Are your menu and art resources up to date?");
    }
    else if (piVar6[1] != 0) {
      (**(code **)*piVar6)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined1
FUN_005bcc00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = FUN_005bc8b0(param_1,param_2,param_3,param_4,param_5);
  iVar2 = FUN_00589b70(0x3e9);
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + 0x24);
    uVar5 = 0;
    uVar4 = 0x3f800000;
    FUN_00582160(0,1,uVar3,0x3f800000,0);
    FUN_0057ea20(uVar3,uVar4,uVar5);
    FUN_0058ceb0(0xfa1,0x40000000);
    FUN_0058ceb0(0x1772,0x40000000);
    iVar2 = FUN_005898f0();
    *(undefined4 *)(iVar2 + 0x24) = 1;
    FUN_0058fba0(0);
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x005bcd3b) */
/* WARNING: Removing unreachable block (ram,0x005bcd40) */
/* WARNING: Removing unreachable block (ram,0x005bcd49) */
/* WARNING: Removing unreachable block (ram,0x005bcd54) */
/* WARNING: Removing unreachable block (ram,0x005bcd71) */
/* WARNING: Removing unreachable block (ram,0x005bcd83) */
/* WARNING: Removing unreachable block (ram,0x005bcd87) */
/* WARNING: Removing unreachable block (ram,0x005bcd75) */
/* WARNING: Removing unreachable block (ram,0x005bcd63) */
/* WARNING: Removing unreachable block (ram,0x005bcd93) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_005bccb0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c0e68;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00582160(0,1,uVar1);
  uVar2 = FUN_00588c10(0xfde);
  FUN_004028d0(uVar2,0);
  FUN_00401f20(0);
  FUN_00401f20(0);
  FUN_00401f20(0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005bcdd0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (param_1 == 2) {
    FUN_005bccb0();
    return;
  }
  if (3 < param_1) {
    FUN_0057de50(1);
    iVar1 = FUN_00582160(0,1);
    *(undefined4 *)(iVar1 + 0x98) = 0;
    *(undefined4 *)(iVar1 + 0x9c) = 0;
    *(undefined4 *)(iVar1 + 0xa0) = 0;
    *(undefined4 *)(iVar1 + 0xa4) = 0;
    *(char *)(iVar1 + 0xb0) = *(char *)(in_ECX + 0x60) + (char)param_1 + -4;
    FUN_005bc6b0();
  }
  return;
}



void FUN_005bce40(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[0xb] = 0;
  in_ECX[10] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x13] = 0;
  *in_ECX = &PTR_FUN_00a6cf0c;
  in_ECX[0x15] = 1;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005bcf20(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  char local_130 [300];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_130;
  FUN_00597ca0(DAT_00b3b410);
  FUN_005e1200(*(undefined4 *)(in_ECX + 0x50));
  iVar1 = FUN_009828c0();
  FUN_005e11a0(*(undefined4 *)(in_ECX + 0x50));
  iVar2 = FUN_009828c0();
  if (DAT_00b3b410 != 0) {
    iVar1 = iVar1 - DAT_00b3b410;
    iVar2 = iVar2 + DAT_00b3b410;
  }
  if (iVar1 < 100) {
    iVar1 = 100;
  }
  if (100 < iVar2) {
    iVar2 = 100;
  }
  uVar3 = FUN_00588c10(0xfb0);
  uVar4 = FUN_00588c10(0xfaf);
  _sprintf(local_130,"%s %i %s",uVar4,iVar1,uVar3);
  FUN_0058ced0(0xfde,local_130);
  uVar3 = FUN_00588c10(0xfb0);
  uVar4 = FUN_00588c10(0xfaf);
  _sprintf(local_130,"%s %i %s",uVar4,iVar2,uVar3);
  FUN_0058ced0(0xfde,local_130);
  return;
}



void FUN_005bd050(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6cf0c;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_005bd080(int *param_1,int *param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float fStack_138;
  int *piStack_134;
  char acStack_130 [300];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&fStack_138;
  puVar1 = (undefined4 *)FUN_00589b70(0x401);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  FUN_00582160(0,1);
  fVar7 = (float10)thunk_FUN_00584980();
  fStack_138 = (float)fVar7;
  uVar2 = FUN_00590420("Data\\Menus\\negotiate_menu.xml");
  piVar3 = (int *)FUN_005898f0();
  if (piVar3 != (int *)0x0) {
    piStack_134 = piVar3;
    iVar4 = (**(code **)(*piVar3 + 0x34))();
    if (iVar4 == 0x401) {
      uVar2 = FUN_009832e6(uVar2,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
      FUN_00584880(uVar2);
      iVar4 = FUN_009832e6(piVar3,0,&PTR_PTR_00b0a018,&PTR_PTR_00b143b0,0);
      if (((((*(int *)(iVar4 + 0x2c) != 0) && (*(int *)(iVar4 + 0x28) != 0)) &&
           (*(int *)(iVar4 + 0x30) != 0)) &&
          ((*(int *)(iVar4 + 0x34) != 0 && (*(int *)(iVar4 + 0x38) != 0)))) &&
         (*(int *)(iVar4 + 0x3c) != 0)) {
        fVar7 = (float10)FUN_00588bd0(0xfa5);
        if ((fVar7 == (float10)6006.0) ||
           (fVar7 = (float10)FUN_00588bd0(0xfa5), fVar7 == (float10)102.0)) {
          FUN_0058ceb0(0xfab,fStack_138);
        }
        *(int *)(iVar4 + 0x54) = *param_1;
        *(undefined1 *)(iVar4 + 0x5c) = param_3;
        DAT_00b3b410 = *param_1;
        fStack_138 = (float)FUN_009828c0();
        *(int **)(iVar4 + 0x50) = param_2;
        FUN_0058ceb0(0xfb7,0xce6e6b28);
        FUN_0058ceb0(0xfb7,0);
        FUN_0058ceb0(0xfaf,0);
        FUN_0058ceb0(0xfb0,(float)(int)fStack_138);
        FUN_0058ceb0(0xfb2,0x41c80000);
        FUN_0058ceb0(0xfb3,(float)*param_1);
        FUN_0058ceb0(0xfb3,0);
        FUN_005e1200(param_2);
        iVar4 = FUN_009828c0();
        FUN_005e11a0(param_2);
        iVar5 = FUN_009828c0();
        iVar4 = iVar4 - *(int *)(DAT_00b333c4 + 0x11c);
        iVar5 = iVar5 + *(int *)(DAT_00b333c4 + 0x11c);
        if (iVar4 < 100) {
          iVar4 = 100;
        }
        if (100 < iVar5) {
          iVar5 = 100;
        }
        uVar2 = FUN_00588c10(0xfb0);
        uVar6 = FUN_00588c10(0xfaf);
        _sprintf(acStack_130,"%s %i %s",uVar6,iVar4,uVar2);
        FUN_0058ced0(0xfde,acStack_130);
        uVar2 = FUN_00588c10(0xfb0);
        uVar6 = FUN_00588c10(0xfaf);
        _sprintf(acStack_130,"%s %i %s",uVar6,iVar5,uVar2);
        FUN_0058ced0(0xfde,acStack_130);
        uVar2 = (**(code **)(*param_2 + 0x284))(0x1d);
        uVar2 = FUN_0056a300(uVar2);
        uVar2 = FUN_0056a340(uVar2);
        uVar6 = FUN_00588c10(0xfde);
        _sprintf((char *)&piStack_134,"%s %s",uVar6,uVar2);
        FUN_0058ced0(0xfde,&piStack_134);
        uVar2 = FUN_004da2a0();
        FUN_0058ced0(0xfde,uVar2);
        uVar2 = (**(code **)(*param_2 + 0x224))(DAT_00b333c4);
        uVar6 = FUN_00588c10(0xfde);
        _sprintf(acStack_130,"%s %i",uVar6,uVar2);
        FUN_0058ced0(0xfde,acStack_130);
        FUN_005bcf20();
        FUN_00585190(0);
        return 1;
      }
      FUN_004a7a60("Negotiate Menu Creation Failed... Are your menu and art resources up to date?");
    }
    else if (piVar3[1] != 0) {
      (**(code **)*piVar3)(1);
    }
  }
  return 0;
}



void FUN_005bd440(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x401);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
    return;
  }
  return;
}



void FUN_005bd550(void)

{
  int iVar1;
  
  FUN_00588bd0(0xfb5);
  iVar1 = FUN_009828c0();
  if (DAT_00b3b410 != iVar1) {
    DAT_00b3b410 = iVar1;
    FUN_005bcf20();
    return;
  }
  return;
}



void FUN_005bd580(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[0xf] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xb] = 0;
  in_ECX[10] = 0;
  *in_ECX = &PTR_FUN_00a6cfac;
  return;
}



void FUN_005bd610(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3f7);
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      FUN_00584390();
      return;
    }
  }
  return;
}



void FUN_005bd650(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6cfac;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_005bd680(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  
  puVar2 = (undefined4 *)FUN_00589b70(0x3f7);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  FUN_00582160(0,1);
  fVar7 = (float10)thunk_FUN_00584980();
  uVar3 = FUN_00590420("Data\\Menus\\Options\\options_menu.xml");
  piVar4 = (int *)FUN_005898f0();
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  iVar5 = (**(code **)(*piVar4 + 0x34))();
  if (iVar5 != 0x3f7) {
    if (piVar4[1] == 0) {
      return 0;
    }
    (**(code **)*piVar4)(1);
    return 0;
  }
  uVar3 = FUN_009832e6(uVar3,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar3);
  iVar5 = FUN_009832e6(piVar4,0,&PTR_PTR_00b0a018,&PTR_PTR_00b143ec,0);
  if (((((*(int *)(iVar5 + 0x28) == 0) || (*(int *)(iVar5 + 0x2c) == 0)) ||
       (*(int *)(iVar5 + 0x30) == 0)) ||
      ((*(int *)(iVar5 + 0x34) == 0 || (*(int *)(iVar5 + 0x38) == 0)))) ||
     (*(int *)(iVar5 + 0x3c) == 0)) {
    FUN_004a7a60("Options Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
  fVar8 = (float10)FUN_00588bd0(0xfa5);
  if ((fVar8 == (float10)6006.0) || (fVar8 = (float10)FUN_00588bd0(0xfa5), fVar8 == (float10)102.0))
  {
    FUN_0058ceb0(0xfab,(float)fVar7);
  }
  bVar1 = false;
  iVar5 = 0;
  do {
    if ((9 < iVar5) || (iVar6 = FUN_0057cfa0(iVar5), iVar6 == 0x3f7)) break;
    iVar6 = FUN_0057cfa0(iVar5);
    if (iVar6 == 0x3f5) {
      bVar1 = true;
    }
    iVar5 = iVar5 + 1;
  } while (!bVar1);
  FUN_0058ceb0(0xfae,(float)(byte)(bVar1 + 1));
  FUN_00585190(0);
  return 1;
}



void FUN_005bd830(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3f7);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
    return;
  }
  return;
}



void FUN_005bd960(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  *in_ECX = &PTR_FUN_00a6d03c;
  return;
}



void FUN_005bd9f0(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3f5);
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      FUN_00584740();
      return;
    }
  }
  return;
}



void FUN_005bda20(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3f5);
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      FUN_00584390();
      return;
    }
  }
  return;
}



void FUN_005bda60(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6d03c;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_005bda90(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  float10 fVar6;
  float10 fVar7;
  
  iVar2 = FUN_00582160(0,1);
  puVar3 = *(undefined4 **)(*(int *)(iVar2 + 0x68) + 0x34);
  do {
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_00589b70(0x3f5);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      FUN_00582160(0,1);
      fVar6 = (float10)thunk_FUN_00584980();
      uVar4 = FUN_00590420("Data\\Menus\\Options\\pause_menu.xml");
      piVar5 = (int *)FUN_005898f0();
      if (piVar5 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar5 + 0x34))();
        if (iVar2 == 0x3f5) {
          FUN_0057de50(2);
          uVar4 = FUN_009832e6(uVar4,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
          FUN_00584880(uVar4);
          iVar2 = FUN_009832e6(piVar5,0,&PTR_PTR_00b0a018,&PTR_PTR_00b132fc,0);
          if ((((*(int *)(iVar2 + 0x28) != 0) && (*(int *)(iVar2 + 0x30) != 0)) &&
              (*(int *)(iVar2 + 0x2c) != 0)) &&
             ((*(int *)(iVar2 + 0x34) != 0 && (*(int *)(iVar2 + 0x38) != 0)))) {
            fVar7 = (float10)FUN_00588bd0(0xfa5);
            if ((fVar7 == (float10)6006.0) ||
               (fVar7 = (float10)FUN_00588bd0(0xfa5), fVar7 == (float10)102.0)) {
              FUN_0058ceb0(0xfab,(float)fVar6);
            }
            cVar1 = FUN_00452330();
            if (cVar1 == '\0') {
              FUN_0058ceb0(0xfc9,0x3f800000);
            }
            iVar2 = FUN_00579060();
            if (iVar2 == 0x40e) {
              FUN_0058ceb0(0xfc9,0x3f800000);
            }
            if ((DAT_00b333c4 == (int *)0x0) ||
               (cVar1 = (**(code **)(*DAT_00b333c4 + 0x198))(0), cVar1 != '\0')) {
              FUN_0058ceb0(0xfaf,0x3f800000);
            }
            if (DAT_00b3b43d != '\0') {
              FUN_005c1000();
            }
            FUN_00585190(0);
            return 1;
          }
          FUN_004a7a60("Pause Menu Creation Failed... Are your menu and art resources up to date?");
          return 0;
        }
        if (piVar5[1] != 0) {
          (**(code **)*piVar5)(1);
        }
      }
      return 0;
    }
    piVar5 = puVar3 + 2;
    puVar3 = (undefined4 *)*puVar3;
  } while (((((*piVar5 == 0) || (iVar2 = FUN_005898f0(), iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0))
           || ((*(int *)(iVar2 + 0x24) != 8 && (*(int *)(iVar2 + 0x24) != 2)))) ||
          (fVar6 = (float10)FUN_00588bd0(0xfa5), fVar6 == (float10)6008.0));
  return 0;
}



void FUN_005bdcd0(void)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  undefined4 uVar5;
  
  cVar1 = FUN_005ddcd0();
  if ((cVar1 != '\0') && (iVar2 = FUN_0043f270(), iVar2 != 0)) {
    if (*(int *)(DAT_00b333a0 + 0x34) == 0) {
      uVar5 = 4;
      FUN_0043f270(4);
      cVar1 = FUN_004ef2d0(uVar5);
      if ((cVar1 != '\0') && (DAT_00b02d70 != '\0')) {
        FUN_00579c10(DAT_00b38c00,0,0,0,0);
        DVar3 = GetTickCount();
        uVar4 = GetTickCount();
        while (uVar4 < DVar3 + 1000) {
          FUN_005791a0();
          FUN_00579220();
          FUN_0040d4d0();
          uVar4 = GetTickCount();
        }
        FUN_004ebae0(1);
        FUN_00578da0();
        goto LAB_005bdd79;
      }
    }
    FUN_004ebae0(0);
  }
LAB_005bdd79:
  iVar2 = FUN_00589b70(0x3f5);
  if (((iVar2 != 0) && (iVar2 = FUN_005898f0(), iVar2 != 0)) &&
     (cVar1 = (**(code **)(*DAT_00b333c4 + 0x198))(0), cVar1 == '\0')) {
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
    return;
  }
  return;
}



void FUN_005bdde0(void)

{
  ushort *puVar1;
  char cVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  cVar2 = FUN_00578d70();
  if (cVar2 == '\x02') {
    local_10 = 0x3f800000;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    FUN_00578e90(&local_10);
    FUN_0057ccc0(0);
    FUN_00440af0(1,0,0);
    DAT_00b33398[1] = 1;
    return;
  }
  if (cVar2 == '\x03') {
    iVar3 = FUN_00582160(0,1);
    puVar1 = (ushort *)(*(int *)(*(int *)(iVar3 + 0x68) + 0x24) + 0x18);
    *puVar1 = *puVar1 | 1;
    puVar1 = (ushort *)(*(int *)(*(int *)(iVar3 + 0x1c) + 0x24) + 0x18);
    *puVar1 = *puVar1 | 1;
    FUN_0057f170(0);
    *DAT_00b33398 = 1;
  }
  return;
}



void FUN_005bdff0(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[0x24] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x33] = 0;
  *in_ECX = &PTR_FUN_00a6d0cc;
  return;
}



void FUN_005be240(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6d0cc;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005be270(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_00589b70(0x40a);
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xd8) + 0x70) = 7;
      FUN_0058ceb0(0x1772,0x40000000);
      FUN_00584740();
      iVar2 = FUN_00589b70(0x3f1);
      uVar3 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b0a02c,0);
      iVar4 = FUN_009832e6(uVar3);
      if ((iVar2 != 0) && (iVar4 != 0)) {
        if (*(char *)(iVar1 + 0x8c) != '\0') {
          FUN_0059df70();
        }
        *(undefined1 *)(iVar4 + 0x96) = 1;
        FUN_0059ea10(0,0);
        FUN_0058fba0(0);
        FUN_0058ceb0(0xfa1,0x40000000);
      }
      iVar1 = FUN_005e12b0();
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0x1db) = 0;
      }
    }
    FUN_00582160(0,1);
    FUN_0057da20("Menus\\Misc\\cursor.dds",1);
  }
  return;
}



void FUN_005be380(void)

{
  int in_ECX;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (*(int *)(in_ECX + 0xd8) != 0) {
    FUN_005479f0(*(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0xc),&local_10,&local_c,&local_8,&local_4
                );
    *(undefined4 *)(in_ECX + 0x18 + local_10 * 0x14) = 1;
    *(undefined4 *)(in_ECX + 0x18 + local_c * 0x14) = 2;
    *(undefined4 *)(in_ECX + 0x18 + local_8 * 0x14) = 3;
    *(undefined4 *)(in_ECX + 0x18 + local_4 * 0x14) = 4;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005be400(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 uVar5;
  
  switch(param_1) {
  case 0:
    if (param_2 == 1) {
      uVar5 = 0x14;
    }
    else if (param_2 == 2) {
      uVar5 = 0x15;
    }
    else if (param_2 == 3) {
      uVar5 = 0x17;
    }
    else {
      if (param_2 != 4) goto switchD_005be413_caseD_4;
      uVar5 = 0x16;
    }
    break;
  case 1:
    if (param_2 == 1) {
      uVar5 = 0x20;
    }
    else if (param_2 == 2) {
      uVar5 = 0x21;
    }
    else if (param_2 == 3) {
      uVar5 = 0x23;
    }
    else {
      if (param_2 != 4) goto switchD_005be413_caseD_4;
      uVar5 = 0x22;
    }
    break;
  case 2:
    if (param_2 == 1) {
      uVar5 = 0x18;
    }
    else if (param_2 == 2) {
      uVar5 = 0x19;
    }
    else if (param_2 == 3) {
      uVar5 = 0x1b;
    }
    else {
      if (param_2 != 4) goto switchD_005be413_caseD_4;
      uVar5 = 0x1a;
    }
    break;
  case 3:
    if (param_2 == 1) {
      uVar5 = 0x1c;
    }
    else if (param_2 == 2) {
      uVar5 = 0x1d;
    }
    else if (param_2 == 3) {
      uVar5 = 0x1f;
    }
    else {
      if (param_2 != 4) goto switchD_005be413_caseD_4;
      uVar5 = 0x1e;
    }
    break;
  default:
    goto switchD_005be413_caseD_4;
  case 5:
    uVar5 = 0x24;
    break;
  case 6:
    uVar5 = 0x25;
  }
  FUN_0052ed50(3,uVar5);
switchD_005be413_caseD_4:
  iVar1 = FUN_0052f790(*(undefined4 *)(in_ECX + 0xd8),DAT_00b333c4,0,0);
  if (iVar1 != 0) {
    FUN_006b7ba0();
    puVar2 = (undefined4 *)FUN_006b7c20();
    if (puVar2 != (undefined4 *)0x0) {
      iVar3 = FUN_005e12b0();
      *(undefined1 *)(iVar3 + 0x1db) = 0;
      *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0x70) = 7;
      (**(code **)(**(int **)(in_ECX + 0xd8) + 0x304))(_DAT_00b33e9c,puVar2);
      if (DAT_00b13200 != '\0') {
        uVar5 = *puVar2;
        uVar4 = (**(code **)(**(int **)(*(int *)(in_ECX + 0xd8) + 0x58) + 0x33c))(0,0,0xbf800000);
        FUN_0057acc0(uVar5,uVar4);
      }
    }
    FUN_006b81d0();
    FUN_00401f20(iVar1);
  }
  return;
}



void FUN_005be5c0(char param_1)

{
  undefined4 uVar1;
  float fVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  
  if (param_1 == '\0') {
    uVar1 = *(undefined4 *)(in_ECX + 0x34);
    *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(in_ECX + 0x48);
    *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(in_ECX + 0x5c);
    *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0x70);
    *(undefined4 *)(in_ECX + 0x70) = uVar1;
  }
  else {
    uVar1 = *(undefined4 *)(in_ECX + 0x70);
    *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(in_ECX + 0x5c);
    *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0x48);
    *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(in_ECX + 0x34);
    *(undefined4 *)(in_ECX + 0x34) = uVar1;
  }
  piVar4 = (int *)(in_ECX + 0x30);
  iVar3 = 4;
  do {
    switch(piVar4[1]) {
    case 0x19:
      fVar2 = (float)(*piVar4 + 1);
      break;
    default:
      goto switchD_005be612_caseD_1a;
    case 0x32:
      fVar2 = (float)(*piVar4 + 1);
      break;
    case 0x4b:
      fVar2 = (float)(*piVar4 + 1);
      break;
    case 100:
      fVar2 = (float)(*piVar4 + 1);
    }
    FUN_0058ceb0(0xfae,fVar2);
switchD_005be612_caseD_1a:
    piVar4 = piVar4 + 5;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return;
    }
  } while( true );
}



byte FUN_005be6f0(void)

{
  int iVar1;
  
  FUN_0098598a();
  iVar1 = FUN_009828c0();
  if (iVar1 < 1) {
    iVar1 = FUN_009828c0();
  }
  if (iVar1 - 0x2dU < 0x10e) {
    if (iVar1 < 0x87) {
      return 2;
    }
    return (0xe0 < iVar1) - 1U & 3;
  }
  return 1;
}



void FUN_005be800(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xa8) == 0) {
    return;
  }
  switch(*(undefined4 *)(in_ECX + 0x84)) {
  case 0:
    uVar1 = 0x3f800000;
    break;
  case 1:
    uVar1 = 0x40000000;
    break;
  case 2:
    uVar1 = 0x40400000;
    break;
  case 3:
    uVar1 = 0x40800000;
    break;
  default:
    goto switchD_005be816_default;
  }
  FUN_0058ceb0(0xfae,uVar1);
switchD_005be816_default:
  FUN_0058fba0(0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_005be870(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_EDI;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  
  iVar2 = FUN_00589b70(0x40a);
  if (iVar2 == 0) {
    return false;
  }
  iVar2 = FUN_005898f0();
  if (iVar2 != 0) {
    piVar8 = DAT_00b333c4;
    iVar3 = (**(code **)(**(int **)(iVar2 + 0xd8) + 0x224))(DAT_00b333c4);
    uVar6 = DAT_00b38e50;
    if (iVar3 < 100) {
      uVar7 = _DAT_00b38e88;
      uVar9 = _DAT_00b38e40;
      uVar4 = (**(code **)(**(int **)(iVar2 + 0xd8) + 0x284))(0x20,_DAT_00b38e88);
      uVar4 = (**(code **)(*DAT_00b333c4 + 0x284))(0x20,uVar4);
      uVar1 = FUN_005e1fd0(piVar8,uVar6,unaff_EDI,uVar4);
      uVar1 = FUN_005e1fd0(uVar1);
      iVar3 = FUN_00547b00(uVar9,uVar1);
      iVar5 = FUN_005f23b0(0x20);
      if (iVar5 == 4) {
        iVar3 = FUN_009828c0();
      }
      iVar5 = FUN_005e4420();
      if (iVar5 < iVar3) {
        return false;
      }
      piVar8 = *(int **)(iVar2 + 0xd8);
      uVar6 = (**(code **)(*piVar8 + 0x284))(0x20);
      uVar6 = (**(code **)(*DAT_00b333c4 + 0x284))(0x20,uVar6);
      uVar6 = (**(code **)(*piVar8 + 0x284))(0x24,uVar6);
      uVar6 = (**(code **)(*piVar8 + 0x224))(DAT_00b333c4,uVar7,uVar6);
      iVar2 = FUN_00547b40(uVar6);
      return iVar2 != 0;
    }
  }
  return false;
}



void FUN_005bea10(void)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00588bd0(0xfaf);
  if (fVar1 == (float10)2.0) {
    FUN_005be270();
    return;
  }
  return;
}



void FUN_005bea40(void)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00588bd0(0xfaf);
  if (fVar1 == (float10)2.0) {
    FUN_0057de50(8);
    FUN_005be5c0(1);
    FUN_0058ceb0(0xfaf,0x3f800000);
  }
  return;
}



void FUN_005bea90(char param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_00589b70(0x40a);
  if (((iVar2 != 0) && (iVar2 = FUN_005898f0(), iVar2 != 0)) &&
     (fVar3 = (float10)FUN_00588bd0(0xfa1), (bool)param_1 != (fVar3 == (float10)2.0))) {
    fVar1 = (float)(int)(2 - (uint)(param_1 != '\x01'));
    FUN_0058ceb0(0xfa1,fVar1);
    FUN_0058ceb0(0xfa1,fVar1);
    FUN_0058ceb0(0xfa1,fVar1);
    FUN_0058ceb0(0xfa1,fVar1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005beb70(void)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined4 in_EAX;
  int iVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  undefined4 uVar7;
  
  fVar1 = *(float *)(in_ECX + 0x7c);
  uVar5 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   (ushort)(4.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                   (ushort)(fVar1 == 4.0) << 0xe);
  if ((4.0 < fVar1 || (fVar1 == 4.0) != 0) || (*(int *)(in_ECX + 0x28) == 2)) {
    iVar4 = FUN_005e02e0(1);
    uVar5 = (**(code **)(*(int *)(iVar4 + 0x24) + 0x10))();
    if ((char)uVar5 == '\0') {
      uVar5 = FUN_0057c140(0x40a);
      if ((char)uVar5 != '\0') {
        uVar5 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x224))(DAT_00b333c4);
        if (((int)uVar5 < 100) || (*(int *)(in_ECX + 0x28) == 2)) {
          iVar4 = (**(code **)(*DAT_00b333c4 + 0x284))(0x20);
          dVar2 = (double)iVar4;
          iVar6 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x284))(0x20);
          uVar7 = SUB84(((double)CONCAT44(SUB84(dVar2,0),iVar4) - (double)iVar6) * 0.5 +
                        (double)_DAT_00b38e80,0);
          iVar4 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x224))(DAT_00b333c4);
          dVar2 = (double)iVar4;
          dVar3 = (double)CONCAT44(uVar7,iVar6);
          uVar5 = CONCAT22((short)((uint)iVar4 >> 0x10),
                           (ushort)(dVar2 < dVar3) << 8 | (ushort)(NAN(dVar2) || NAN(dVar3)) << 10 |
                           (ushort)(dVar2 == dVar3) << 0xe);
          if ((dVar2 < dVar3 || (dVar2 == dVar3) != 0) || (*(int *)(in_ECX + 0x28) == 2)) {
            return CONCAT31((int3)(uVar5 >> 8),1);
          }
        }
      }
    }
  }
  return uVar5 & 0xffffff00;
}



void FUN_005bec70(void)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int in_ECX;
  int iVar9;
  float *unaff_FS_OFFSET;
  float10 fVar10;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_10;
  float local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c0e98;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (float)&local_c;
  iVar6 = FUN_00589b70(0x40a,uVar5);
  if (iVar6 == 0) {
LAB_005bf145:
    *unaff_FS_OFFSET = local_c;
    return;
  }
  uVar7 = FUN_005898f0();
  uStack_28 = (double)CONCAT44(uVar7,(float)uStack_28);
  cVar4 = FUN_0057c140(0x40a);
  if (cVar4 == '\0') {
    FUN_00582160(0,1);
    FUN_0057da20("Menus\\Misc\\cursor.dds",1);
  }
  iVar6 = (**(code **)(**(int **)(*(int *)(in_ECX + 0xd8) + 0x58) + 0x33c))(0);
  bVar3 = false;
  if ((iVar6 != 0) && (cVar4 = FUN_006b7260(), cVar4 != '\0')) {
    bVar3 = true;
  }
  if ((*(int *)(in_ECX + 0x28) != 2) || (cVar4 = FUN_005beb70(), cVar4 == '\0')) {
    *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0x70) = 7;
    *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0x74) = 0;
    (**(code **)(**(int **)(in_ECX + 0xd8) + 0x304))(0,0);
    FUN_005bea90(0);
    goto LAB_005bf145;
  }
  iVar9 = 0;
  pcVar8 = (char *)(in_ECX + 0x38);
  iVar6 = 4;
  do {
    if (*pcVar8 != '\0') {
      iVar9 = iVar9 + 1;
    }
    pcVar8 = pcVar8 + 0x14;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_005bea90(1);
  iVar6 = FUN_005f23b0(0x20);
  if (((iVar6 != 4) && (iVar6 = FUN_005f23b0(0x20), iVar6 != 3)) ||
     (((iVar6 = FUN_005f23b0(0x20), iVar6 == 4 || (iVar6 = FUN_005f23b0(0x20), iVar6 == 3)) &&
      (iVar9 != 0)))) {
    iVar6 = FUN_005f23b0(0x20);
    if ((iVar6 == 0) || (iVar6 = FUN_005f23b0(0x20), iVar6 == 1)) {
      uVar5 = FUN_009828c0();
    }
    else {
      iVar6 = FUN_009828c0();
      uVar5 = iVar6 * 2;
    }
    if ((uVar5 < (uint)(DAT_00b33ea0 - *(int *)(in_ECX + 0x80))) && (!bVar3)) {
      (**(code **)(**(int **)(in_ECX + 0xd8) + 0x374))(DAT_00b333c4,0xbf800000);
      bVar3 = false;
      uStack_10 = 0;
      uVar7 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x224))(DAT_00b333c4);
      FUN_00402e30(&fStack_34,&DAT_00a300d4,uVar7);
      FUN_0058ced0(0xfde,fStack_34);
      *(int *)(in_ECX + 0x80) = DAT_00b33ea0;
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_00401f20(fStack_34);
    }
  }
  iVar6 = in_ECX + 0x3c;
  iVar9 = 4;
  do {
    fStack_34 = (float)(-(uint)(*(char *)(iVar6 + -4) != '\0') & 0xff);
    FUN_0058ceb0(0xfa7,(float)(int)fStack_34);
    iVar6 = iVar6 + 0x14;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (((float)uStack_28 == 0.0) || (*(int *)((int)(float)uStack_28 + 0x24) != 1)) goto LAB_005bf0e0;
  FUN_00582160(0,1);
  FUN_0057d7a0();
  iVar6 = FUN_009828c0();
  uStack_28 = (double)CONCAT44(uStack_28._4_4_,iVar6);
  fStack_34 = (float)iVar6;
  fVar10 = (float10)FUN_0057d7f0();
  uStack_28 = (double)fVar10;
  FUN_0057d7f0();
  iVar6 = FUN_009828c0();
  fStack_30 = (float)iVar6;
  uStack_2c = 0;
  fStack_1c = (float)*(int *)(in_ECX + 0xe0);
  fStack_18 = (float)*(int *)(in_ECX + 0xe4);
  uStack_28._4_4_ = fStack_18 - fStack_30;
  uStack_20 = 0;
  uStack_28._0_4_ =
       (fStack_1c - fStack_34) * (fStack_1c - fStack_34) + uStack_28._4_4_ * uStack_28._4_4_ + 0.0;
  fVar10 = (float10)FUN_00982c30();
  fVar1 = (float)fVar10;
  uStack_28 = (double)CONCAT44(uStack_28._4_4_,fVar1);
  if (((float)*(int *)(in_ECX + 0xdc) < fVar1) ||
     ((float)*(int *)(in_ECX + 0xe8) < fVar1 == ((float)*(int *)(in_ECX + 0xe8) == fVar1))) {
    bVar2 = false;
    FUN_0057da20("Menus\\Misc\\cursor.dds",1);
  }
  else {
    bVar2 = true;
    FUN_0057da20("Menus\\Persuasion\\Ball_cursor.dds",1);
    uVar7 = FUN_005be6f0(fStack_34,fStack_30,uStack_2c);
    *(undefined4 *)(in_ECX + 0x84) = uVar7;
    FUN_005be800();
  }
  if ((bVar3) || (!bVar2)) {
    *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0x70) = 7;
    *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0x74) = 0;
    iVar6 = FUN_005e12b0();
    *(undefined1 *)(iVar6 + 0x1db) = 0;
    goto LAB_005bf0e0;
  }
  switch(*(undefined4 *)(in_ECX + 0x2c + *(int *)(in_ECX + 0x84) * 0x14)) {
  case 1:
    *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0x70) = 5;
    goto LAB_005bf095;
  case 2:
    *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0x70) = 5;
    *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0x74) = 0x3e4ccccd;
    break;
  case 3:
    *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0x70) = 1;
    *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0x74) = 0x3e4ccccd;
    break;
  case 4:
    *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0x70) = 1;
LAB_005bf095:
    *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0x74) = 0x3f800000;
  }
  iVar6 = FUN_005e12b0();
  *(undefined1 *)(iVar6 + 0x1db) = 1;
LAB_005bf0e0:
  (**(code **)(**(int **)(in_ECX + 0xd8) + 0x304))(0,0);
  *unaff_FS_OFFSET = fStack_18;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005bf170(char param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *unaff_FS_OFFSET;
  int aiStack_18 [2];
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b6958;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar8 = FUN_00589b70(0x40a,uVar7);
  if (iVar8 != 0) {
    iVar8 = FUN_005898f0();
    if (iVar8 != 0) {
      aiStack_18[1] = 0;
      local_10 = 0;
      local_e = 0;
      local_4 = 0;
      uVar9 = (**(code **)(**(int **)(iVar8 + 0xd8) + 0x224))(DAT_00b333c4);
      FUN_00402e30(aiStack_18,&DAT_00a300d4,uVar9);
      iVar4 = aiStack_18[0];
      FUN_0058ced0(0xfde,aiStack_18[0]);
      uVar3 = DAT_00b38e50;
      iVar2 = _DAT_00b38e48;
      uVar9 = _DAT_00b38e40;
      uVar10 = (**(code **)(**(int **)(iVar8 + 0xd8) + 0x284))(0x20,_DAT_00b38e88);
      uVar10 = (**(code **)(*DAT_00b333c4 + 0x284))(0x20,uVar10);
      uVar6 = FUN_005e1fd0(unaff_EBP,uVar3,unaff_ESI,uVar10);
      uVar6 = FUN_005e1fd0(uVar6);
      FUN_00547b00(uVar9,uVar6);
      iVar11 = FUN_005f23b0(0x20);
      if (iVar11 == 4) {
        FUN_009828c0();
      }
      piVar1 = *(int **)(iVar8 + 0xd8);
      uVar9 = (**(code **)(*piVar1 + 0x284))(0x20);
      uVar9 = (**(code **)(*DAT_00b333c4 + 0x284))(0x20,uVar9);
      uVar9 = (**(code **)(*piVar1 + 0x284))(0x24,uVar9);
      uVar9 = (**(code **)(*piVar1 + 0x224))(DAT_00b333c4,unaff_EDI,uVar9);
      iVar11 = FUN_00547b40(uVar9);
      aiStack_18[0] = iVar11;
      FUN_0058ceb0(0xfae,(float)iVar2);
      FUN_0058ceb0(0xfaf,(float)aiStack_18[0]);
      uVar9 = FUN_004da2a0();
      FUN_0058ced0(0xfde,uVar9);
      if (iVar11 < 1) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0x437f0000;
      }
      FUN_0058ceb0(0xfa7,uVar9);
      if (param_1 == '\0') {
        *(undefined4 *)(iVar8 + 0x28) = 1;
        cVar5 = FUN_005beb70();
        if (cVar5 == '\0') {
          FUN_0058ceb0(0xfa7,0);
          FUN_0058ceb0(0xfa7,0x437f0000);
          FUN_0058ceb0(0xfa1,0x3f800000);
          FUN_005bea90(0);
          FUN_0058ceb0(0xfaf,0x40000000);
          *(undefined4 *)(iVar8 + 0x28) = 1;
        }
        else {
          FUN_0058ceb0(0xfa7,0);
          FUN_0058ceb0(0xfa7,0);
          *(undefined4 *)(iVar8 + 0x28) = 0;
        }
      }
      FUN_00401f20(iVar4);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005bf470(void)

{
  int *piVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  undefined4 uStack_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c08a8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar2 = FUN_005be870(uVar4);
  if (cVar2 != '\0') {
    uVar5 = FUN_00402b80();
    uVar6 = FUN_00402ba0(uVar5);
    fVar11 = (float10)FUN_00402bd0(uVar6);
    FUN_00420f20(0,(float)fVar11,uVar6,uVar5);
    uVar6 = DAT_00b38e50;
    uVar5 = _DAT_00b38e40;
    uStack_18 = _DAT_00b38e48;
    local_14 = _DAT_00b38e38;
    uVar7 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x284))(0x20,_DAT_00b38e88);
    uVar7 = (**(code **)(*DAT_00b333c4 + 0x284))(0x20,uVar7);
    uVar3 = FUN_005e1fd0(unaff_EBX,uVar6,unaff_EBP,uVar7);
    uVar3 = FUN_005e1fd0(uVar3);
    uVar5 = FUN_00547b00(uVar5,uVar3);
    iVar8 = FUN_005f23b0(0x20);
    if (iVar8 == 4) {
      uVar5 = FUN_009828c0();
    }
    piVar1 = *(int **)(in_ECX + 0xd8);
    uVar6 = (**(code **)(*piVar1 + 0x284))(0x20);
    uVar6 = (**(code **)(*DAT_00b333c4 + 0x284))(0x20,uVar6);
    uVar6 = (**(code **)(*piVar1 + 0x284))(0x24,uVar6);
    uVar6 = (**(code **)(*piVar1 + 0x224))(DAT_00b333c4,unaff_ESI,uVar6);
    iVar8 = FUN_00547b40(uVar6);
    (**(code **)(**(int **)(in_ECX + 0xd8) + 0x374))(DAT_00b333c4,(float)iVar8);
    *(int *)(in_ECX + 0xf8) = *(int *)(in_ECX + 0xf8) + iVar8;
    *(int *)(in_ECX + 0xf4) = iVar8;
    FUN_0041e6f0();
    FUN_00491700(DAT_00b333c4,uVar5,0);
    uVar6 = FUN_004471a0(0xf);
    (**(code **)(**(int **)(in_ECX + 0xd8) + 0x114))(uVar6,0,uVar5);
    FUN_0052ed50(3,0x24);
    iVar8 = FUN_0052f790(*(undefined4 *)(in_ECX + 0xd8),DAT_00b333c4,0,0);
    if (iVar8 != 0) {
      FUN_006b7ba0();
      puVar9 = (undefined4 *)FUN_006b7c20();
      if (puVar9 != (undefined4 *)0x0) {
        iVar10 = FUN_005e12b0();
        *(undefined1 *)(iVar10 + 0x1db) = 0;
        *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0x70) = 7;
        (**(code **)(**(int **)(in_ECX + 0xd8) + 0x304))(_DAT_00b33e9c,puVar9);
        if (DAT_00b13200 != '\0') {
          uVar5 = *puVar9;
          uVar6 = (**(code **)(**(int **)(*(int *)(in_ECX + 0xd8) + 0x58) + 0x33c))(0,0,0xbf800000);
          FUN_0057acc0(uVar5,uVar6);
        }
      }
      FUN_006b81d0();
      FUN_00401f20(iVar8);
    }
    FUN_005bf170(1);
    FUN_0057de50(0x23);
  }
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  uVar5 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x224))(DAT_00b333c4);
  FUN_00402e30(&uStack_18,&DAT_00a300d4,uVar5);
  uVar5 = uStack_18;
  FUN_0058ced0(0xfde,uStack_18);
  cVar2 = FUN_005be870();
  if (cVar2 == '\0') {
    FUN_0058ceb0(0xfaf,0x3f800000);
  }
  FUN_00401f20(uVar5);
  *unaff_FS_OFFSET = local_10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005bf7d0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  int local_18;
  undefined4 uStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c08a8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00589b70(0x40a,uVar2);
  if ((iVar3 != 0) && (iVar3 = FUN_005898f0(), iVar3 != 0)) {
    iVar6 = 0;
    do {
      iVar5 = iVar3 + iVar6 * 0x14;
      *(undefined4 *)(iVar5 + 0x34) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x2c) = 0;
      *(undefined1 *)(iVar5 + 0x38) = 0;
      FUN_0058ceb0(0xfa7,0);
      switch(iVar6) {
      case 0:
        *(undefined4 *)(iVar5 + 0x30) = 0;
        break;
      case 1:
        *(undefined4 *)(iVar5 + 0x30) = 1;
        break;
      case 2:
        *(undefined4 *)(iVar5 + 0x30) = 2;
        break;
      case 3:
        *(undefined4 *)(iVar5 + 0x30) = 3;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    local_18 = 4;
    iVar6 = 100;
    do {
      uVar4 = FUN_0047df80(0);
      uStack_14 = (undefined4)(longlong)ROUND(_DAT_00b33e9c);
      uVar2 = FUN_0047df80(uStack_14);
      FUN_0047df80(uVar4);
      uVar2 = uVar2 & 3;
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        if (3 < iVar5) {
          iVar5 = 0;
        }
        if (*(int *)(iVar3 + 0x34 + iVar5 * 0x14) == -1) {
          uVar2 = uVar2 - 1;
        }
      } while (-1 < (int)uVar2);
      *(int *)(iVar3 + 0x34 + iVar5 * 0x14) = iVar6;
      iVar6 = iVar6 + -0x19;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    FUN_005be380();
    piVar7 = (int *)(iVar3 + 0x30);
    iVar6 = 4;
    do {
      switch(piVar7[1]) {
      case 0x19:
        iVar5 = *piVar7 + 1;
        break;
      default:
        goto switchD_005bf932_caseD_1a;
      case 0x32:
        iVar5 = *piVar7 + 1;
        break;
      case 0x4b:
        iVar5 = *piVar7 + 1;
        break;
      case 100:
        iVar5 = *piVar7 + 1;
      }
      FUN_0058ceb0(0xfae,(float)iVar5);
switchD_005bf932_caseD_1a:
      piVar7 = piVar7 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    FUN_005bea90(0);
    *(undefined4 *)(iVar3 + 0x88) = 0;
    FUN_0058ceb0(0xfaf,0x40000000);
    cVar1 = FUN_005be870();
    if (cVar1 == '\0') {
      uVar4 = 0x3f800000;
    }
    else {
      uVar4 = 0x40000000;
    }
    FUN_0058ceb0(0xfaf,uVar4);
    iVar6 = FUN_005f23b0(0x20);
    if (iVar6 < 1) {
      uVar4 = 0xfb1;
    }
    else {
      FUN_0058ceb0(0xfb1,0x40000000);
      uVar4 = 0xfaf;
    }
    FUN_0058ceb0(uVar4,0x3f800000);
    piVar7 = *(int **)(iVar3 + 0xd8);
    uVar4 = (**(code **)(*piVar7 + 0x284))(0x20,_DAT_00b38e18,_DAT_00b38e20);
    uVar4 = (**(code **)(*DAT_00b333c4 + 0x284))(0x20,uVar4);
    uVar4 = (**(code **)(*piVar7 + 0x224))(DAT_00b333c4,uVar4);
    iVar6 = FUN_00547a90(uVar4);
    *(float *)(iVar3 + 0x7c) = (float)iVar6;
    uVar4 = FUN_009828c0();
    FUN_00402e30(&stack0xffffffe0,&DAT_00a300d4,uVar4);
    FUN_0058ced0(0xfde,0);
    uVar4 = (**(code **)(**(int **)(iVar3 + 0xd8) + 0x224))(DAT_00b333c4);
    *(undefined4 *)(iVar3 + 0xec) = uVar4;
    *(undefined4 *)(iVar3 + 0xf0) = 0;
    FUN_005bf170(0);
    FUN_00401f20(0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005bfb90(void)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  char *pcVar9;
  int in_ECX;
  int *piVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  undefined8 local_24;
  undefined4 local_1c;
  float local_18;
  float local_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c0ec8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x28) != 2) {
    if (*(int *)(in_ECX + 0x28) == 0) {
      *(undefined1 *)(in_ECX + 0x8c) = 1;
      FUN_0058ceb0(0xfa1,0x3f800000);
      FUN_005bea90(1);
      FUN_0058ceb0(0xfaf,0x3f800000);
      *(undefined4 *)(in_ECX + 0x80) = DAT_00b33ea0;
      *(undefined4 *)(in_ECX + 0xf8) = 0;
      iVar4 = FUN_005f23b0(0x20);
      if (iVar4 == 0) {
        uVar6 = 0x3f800000;
      }
      else {
        uVar6 = 0x40000000;
      }
      FUN_0058ceb0(0xfaf,uVar6);
      *(undefined4 *)(in_ECX + 0x28) = 2;
    }
    goto LAB_005c013a;
  }
  FUN_00582160(0,1,uVar3);
  FUN_0057d7a0();
  iVar4 = FUN_009828c0();
  fVar11 = (float10)FUN_0057d7f0();
  local_24 = (double)fVar11;
  FUN_0057d7f0();
  iVar5 = FUN_009828c0();
  local_24._0_4_ = (float)iVar4;
  local_24._4_4_ = (float)iVar5;
  local_1c = 0;
  local_18 = (float)*(int *)(in_ECX + 0xe0);
  local_14 = (float)*(int *)(in_ECX + 0xe4);
  iVar4 = FUN_005be6f0((float)local_24,local_24._4_4_,0);
  *(int *)(in_ECX + 0x84) = iVar4;
  local_24._0_4_ =
       (local_18 - (float)local_24) * (local_18 - (float)local_24) +
       (local_14 - local_24._4_4_) * (local_14 - local_24._4_4_) + 0.0;
  fVar11 = (float10)FUN_00982c30();
  fVar1 = (float)fVar11;
  local_24 = (double)CONCAT44(local_24._4_4_,fVar1);
  if ((((float)*(int *)(in_ECX + 0xdc) < fVar1) || (fVar1 < (float)*(int *)(in_ECX + 0xe8))) ||
     (*(char *)(in_ECX + 0x38 + iVar4 * 0x14) == '\x01')) {
    *unaff_FS_OFFSET = local_c;
    return;
  }
  FUN_0057de50(8);
  pcVar9 = (char *)(in_ECX + 0x38 + *(int *)(in_ECX + 0x84) * 0x14);
  if (*pcVar9 == '\0') {
    *pcVar9 = '\x01';
    func_0x005be780(*(undefined4 *)(in_ECX + 0x2c + *(int *)(in_ECX + 0x84) * 0x14));
    iVar4 = FUN_009828c0();
    (**(code **)(**(int **)(in_ECX + 0xd8) + 0x374))(DAT_00b333c4,(float)iVar4);
    *(int *)(in_ECX + 0xf8) = *(int *)(in_ECX + 0xf8) + iVar4;
    uStack_10 = 0;
    uVar6 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x224))(DAT_00b333c4);
    FUN_00402e30(&local_24,&DAT_00a300d4,uVar6);
    FUN_0058ced0(0xfde,(float)local_24);
    FUN_005be5c0(1);
    uStack_4 = 0xffffffff;
    FUN_00402da0();
  }
  iVar4 = in_ECX + *(int *)(in_ECX + 0x84) * 0x14;
  iVar5 = *(int *)(iVar4 + 0x2c);
  if (iVar5 == 4) {
    FUN_005be400(*(undefined4 *)(iVar4 + 0x30),1);
  }
  else {
    uVar6 = *(undefined4 *)(iVar4 + 0x30);
    if (iVar5 == 1) {
      switch(uVar6) {
      case 0:
        uVar6 = 0x15;
        break;
      case 1:
        uVar6 = 0x21;
        break;
      case 2:
        uVar6 = 0x19;
        break;
      case 3:
        uVar6 = 0x1d;
        break;
      default:
        goto LAB_005bfe34;
      case 5:
        uVar6 = 0x24;
        break;
      case 6:
        uVar6 = 0x25;
      }
      FUN_0052ed50(3,uVar6);
LAB_005bfe34:
      iVar4 = FUN_0052f790(*(undefined4 *)(in_ECX + 0xd8),DAT_00b333c4,0,0);
      if (iVar4 == 0) goto LAB_005bffc2;
      FUN_006b7ba0();
      puVar7 = (undefined4 *)FUN_006b7c20();
      if (puVar7 != (undefined4 *)0x0) {
        iVar5 = FUN_005e12b0();
        *(undefined1 *)(iVar5 + 0x1db) = 0;
        *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0x70) = 7;
        (**(code **)(**(int **)(in_ECX + 0xd8) + 0x304))(_DAT_00b33e9c,puVar7);
        if (DAT_00b13200 != '\0') {
          piVar10 = *(int **)(*(int *)(in_ECX + 0xd8) + 0x58);
LAB_005bff90:
          uVar6 = *puVar7;
          uVar8 = (**(code **)(*piVar10 + 0x33c))(0,0,0xbf800000);
          FUN_0057acc0(uVar6,uVar8);
        }
      }
    }
    else {
      if (iVar5 != 3) {
        switch(uVar6) {
        case 0:
          uVar6 = 0x16;
          break;
        case 1:
          uVar6 = 0x22;
          break;
        case 2:
          uVar6 = 0x1a;
          break;
        case 3:
          uVar6 = 0x1e;
          break;
        default:
          goto LAB_005bff11;
        case 5:
          goto LAB_005bfee3;
        case 6:
          goto LAB_005bff05;
        }
        goto LAB_005bff07;
      }
      switch(uVar6) {
      case 0:
        uVar6 = 0x17;
        break;
      case 1:
        uVar6 = 0x23;
        break;
      case 2:
        uVar6 = 0x1b;
        break;
      case 3:
        uVar6 = 0x1f;
        break;
      default:
        goto LAB_005bff11;
      case 5:
LAB_005bfee3:
        uVar6 = 0x24;
        break;
      case 6:
LAB_005bff05:
        uVar6 = 0x25;
      }
LAB_005bff07:
      FUN_0052ed50(3,uVar6);
LAB_005bff11:
      iVar4 = FUN_0052f790(*(undefined4 *)(in_ECX + 0xd8),DAT_00b333c4,0,0);
      if (iVar4 == 0) goto LAB_005bffc2;
      FUN_006b7ba0();
      puVar7 = (undefined4 *)FUN_006b7c20();
      if (puVar7 != (undefined4 *)0x0) {
        iVar5 = FUN_005e12b0();
        *(undefined1 *)(iVar5 + 0x1db) = 0;
        *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0x70) = 7;
        (**(code **)(**(int **)(in_ECX + 0xd8) + 0x304))(_DAT_00b33e9c,puVar7);
        if (DAT_00b13200 == '\0') goto LAB_005bffb2;
        piVar10 = *(int **)(*(int *)(in_ECX + 0xd8) + 0x58);
        goto LAB_005bff90;
      }
    }
LAB_005bffb2:
    FUN_006b81d0();
    FUN_00401f20(iVar4);
  }
LAB_005bffc2:
  if (*(int *)(in_ECX + 0x30 + *(int *)(in_ECX + 0x84) * 0x14) == 1) {
    DAT_00b333c4[0x1af] = DAT_00b333c4[0x1af] + 1;
  }
  bVar2 = true;
  pcVar9 = (char *)(in_ECX + 0x38);
  iVar4 = 4;
  do {
    if (*pcVar9 == '\0') {
      bVar2 = false;
    }
    pcVar9 = pcVar9 + 0x14;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (bVar2) {
    if ((*(int *)(in_ECX + 0xf0) != 0) ||
       (iVar4 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x224))(DAT_00b333c4),
       *(int *)(in_ECX + 0xec) != iVar4)) {
      (**(code **)(*DAT_00b333c4 + 0x39c))(0x20,0,0);
    }
    FUN_0058ceb0(0xfaf,0x40000000);
    FUN_0058ceb0(0xfa1,0x40000000);
    FUN_0058ceb0(0xfaf,0x3f800000);
    FUN_005bf7d0();
    FUN_005bf170(1);
    *unaff_FS_OFFSET = local_c;
    return;
  }
LAB_005c013a:
  FUN_005bf170(1);
  *unaff_FS_OFFSET = local_c;
  return;
}


