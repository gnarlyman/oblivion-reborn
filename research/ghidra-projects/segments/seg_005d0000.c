
void FUN_005d03b0(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x40b);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_0058ceb0(0x1772,0x40000000);
    if (*(int *)(iVar1 + 0x58) == 2) {
      FUN_006ac3d0();
    }
    FUN_00584740();
    if (*(int *)(iVar1 + 0x58) == 1) {
      iVar1 = FUN_00578fe0();
      if (iVar1 == 1) {
        FUN_0057cac0();
        FUN_0057bd80();
        FUN_0057bdb0();
        return;
      }
    }
    else {
      iVar1 = FUN_00589b70(0x3f1);
      if (iVar1 != 0) {
        iVar1 = FUN_005898f0();
        FUN_0058fba0(0);
        FUN_0058ceb0(0xfa1,0x40000000);
        FUN_005aadc0();
        *(undefined1 *)(iVar1 + 0x96) = 1;
        FUN_0059e1d0(0);
      }
    }
    FUN_0057bd80();
    FUN_0057bdb0();
    return;
  }
  return;
}



void FUN_005d0490(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  undefined4 uVar4;
  
  if (in_ECX[0xe] != 0) {
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



void FUN_005d0810(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (param_1 != 6) {
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
    if ((float10)1 <= (float10)(double)((float10)iVar1 - fVar2) / fVar3) goto LAB_005d09a1;
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
LAB_005d09a1:
  FUN_0058ceb0(0xfb3,0xce6e6b28);
  iVar1 = FUN_009828c0();
  FUN_0058ceb0(0xfb3,(float)iVar1);
  FUN_0058ceb0(0xfb3,0);
  return;
}



void FUN_005d0a20(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_10 [4];
  
  iVar1 = FUN_00589b70(0x410);
  if (iVar1 != 0) {
    uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13e28,0);
    iVar3 = FUN_009832e6(uVar2);
    iVar1 = DAT_00b3b270;
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 0xb0) == 0) {
        local_10[0] = 0;
      }
      else {
        local_10[0] = *(int *)(*(int *)(iVar3 + 0xb0) + 8);
      }
      if (*(int *)(iVar3 + 0xb4) == 0) {
        local_10[1] = 0;
      }
      else {
        local_10[1] = *(undefined4 *)(*(int *)(iVar3 + 0xb4) + 8);
      }
      if (*(int *)(iVar3 + 0xb8) == 0) {
        local_10[2] = 0;
      }
      else {
        local_10[2] = *(undefined4 *)(*(int *)(iVar3 + 0xb8) + 8);
      }
      if (*(int *)(iVar3 + 0xbc) == 0) {
        local_10[3] = 0;
      }
      else {
        local_10[3] = *(undefined4 *)(*(int *)(iVar3 + 0xbc) + 8);
      }
      iVar4 = 1;
      if (param_1 != 0) {
        piVar5 = local_10;
        for (; iVar4 < 5; iVar4 = iVar4 + 1) {
          if ((iVar4 != DAT_00b3b270) && (*piVar5 == *(int *)(param_1 + 8))) {
            DAT_00b3b270 = iVar4;
            FUN_005d0a20(0,0);
            break;
          }
          piVar5 = piVar5 + 1;
        }
        uVar2 = *(undefined4 *)(param_1 + 8);
        DAT_00b3b270 = iVar1;
        FUN_0041e6f0(uVar2);
        uVar2 = FUN_004869c0(uVar2);
        FUN_0060d020(uVar2);
      }
      iVar1 = *(int *)(iVar3 + 0xb0 + DAT_00b3b270 * 4);
      if (iVar1 != 0) {
        FUN_00484470();
        FUN_00401f20(iVar1);
      }
      *(int *)(iVar3 + 0xb0 + DAT_00b3b270 * 4) = param_1;
      FUN_0057de50(0x1f);
      FUN_00594f00(param_2);
    }
    FUN_005d03b0();
  }
  return;
}



void FUN_005d0b80(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00447490("UIArmorWeaponRepair");
  if ((iVar2 != 0) && (iVar2 = FUN_006ae0a0(*(undefined4 *)(iVar2 + 0xc),0x21,0), iVar2 != 0)) {
    cVar1 = FUN_006b7260();
    if (cVar1 == '\0') {
      FUN_006b7190(0);
    }
    FUN_006b73e0();
    FUN_00401f20(iVar2);
  }
  return;
}



int FUN_005d0be0(void)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  float10 fVar8;
  float fVar9;
  
  if (DAT_00b333c4 == 0) {
    return 0;
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x6c);
  iVar7 = 0;
  while (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 2;
    puVar3 = (undefined4 *)*puVar3;
    iVar4 = FUN_004d88f0(*(undefined4 *)(*piVar1 + 4),0);
    if (iVar4 != 0) {
      cVar2 = *(char *)(*(int *)(iVar4 + 8) + 4);
      if (((cVar2 == '\x14') || (cVar2 == '!')) &&
         (fVar8 = (float10)FUN_00484850(1), fVar8 < (float10)100.0)) {
        iVar5 = FUN_0046ca20(*(undefined4 *)(iVar4 + 8));
        iVar6 = FUN_00470520(*(undefined4 *)(iVar4 + 8));
        fVar9 = (float)iVar6;
        fVar8 = (float10)FUN_00484850(0);
        iVar5 = FUN_005483c0((float)iVar5,(float)fVar8,fVar9);
        if (iVar5 < 2) {
          iVar5 = 1;
        }
        iVar6 = FUN_004b2460();
        iVar7 = iVar7 + iVar6 * iVar5;
      }
      FUN_00484470();
      FUN_00401f20(iVar4);
    }
  }
  return iVar7;
}



void FUN_005d0cd0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c1d48;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6d580;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a6d570;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005d0d30(byte param_1)

{
  FUN_005d0cd0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005d0d50(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *in_ECX;
  
  iVar1 = in_ECX[3];
  while (iVar1 != 0) {
    piVar2 = (int *)in_ECX[1];
    iVar1 = *piVar2;
    in_ECX[1] = iVar1;
    if (iVar1 == 0) {
      in_ECX[2] = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    piVar3 = (int *)piVar2[2];
    (**(code **)(*in_ECX + 8))(piVar2);
    in_ECX[3] = in_ECX[3] + -1;
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        FUN_00484470();
        FUN_00401f20(iVar1);
      }
      FUN_00401f20(piVar3);
    }
    iVar1 = in_ECX[3];
  }
  return;
}



void FUN_005d0dd0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c1d83;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6d5b4;
  local_4 = 1;
  FUN_005d0d50(uVar1);
  local_4 = local_4 & 0xffffff00;
  FUN_005d0cd0();
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_005d0e50(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined4 local_120;
  undefined2 local_11c;
  undefined2 local_11a;
  undefined4 local_118;
  undefined2 local_114;
  undefined2 local_112;
  char local_110 [256];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bff06;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_120;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffed0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_120 = 0;
  local_11c = 0;
  local_11a = 0;
  FUN_004028d0(param_1,0);
  local_4 = 0;
  pcVar3 = "rep_buy_item_template";
  if (*(int *)(in_ECX + 0x58) != 2) {
    pcVar3 = "rep_item_template";
  }
  local_118 = 0;
  local_114 = 0;
  local_112 = 0;
  FUN_004028d0(pcVar3,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar4 = FUN_00585410(*(undefined4 *)(in_ECX + 0x44),local_118,0);
  if (iVar4 != 0) {
    FUN_0058ced0(0xfaf,param_2);
    iVar5 = 0;
    do {
      pcVar3 = local_110 + iVar5;
      cVar1 = pcVar3[param_2 - (int)local_110];
      *pcVar3 = cVar1;
      if (cVar1 == ' ') {
        *pcVar3 = '_';
      }
    } while ((*pcVar3 != '\0') && (iVar5 = iVar5 + 1, iVar5 < 0x100));
    local_110[0xff] = 0;
    FUN_004028d0(local_110,0);
    FUN_0058ced0(0xfb4,local_120);
    FUN_0058ceb0(0xfb7,(float)param_3);
    FUN_0058ceb0(0xfaa,(float)param_4);
    FUN_0058ceb0(0xfa8,(float)param_5);
    *(int *)(in_ECX + 0x10) = iVar4;
  }
  FUN_00401f20(local_118,uVar2);
  FUN_00401f20(local_120);
  *unaff_FS_OFFSET = local_c;
  return iVar4;
}



void FUN_005d1000(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  *in_ECX = &PTR_FUN_00a6d5b4;
  in_ECX[0x1d] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1a] = &PTR_FUN_00a6d5a4;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  *(undefined1 *)(in_ECX + 0x19) = 0;
  *(undefined1 *)((int)in_ECX + 0x65) = 0;
  in_ECX[0x16] = 1;
  return;
}



void FUN_005d1060(byte param_1)

{
  FUN_005d0dd0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005d1080(void)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uchar *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar15;
  float fVar16;
  undefined1 auStack_16c [3];
  char local_169;
  int *local_168;
  int *local_164;
  int local_160;
  int local_15c;
  char local_155;
  int iStack_154;
  int *local_150;
  char local_149;
  uchar *local_148;
  int local_144;
  int *local_140;
  int iStack_13c;
  undefined2 uStack_138;
  undefined2 uStack_136;
  undefined4 uStack_134;
  undefined2 uStack_130;
  undefined2 uStack_12e;
  int local_12c;
  char acStack_128 [268];
  uint local_1c;
  int local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_009c1db6;
  local_14 = *unaff_FS_OFFSET;
  local_1c = DAT_00b30aac ^ (uint)auStack_16c;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffe88;
  *unaff_FS_OFFSET = (int)&local_14;
  if (DAT_00b333c4 != 0) {
    local_12c = *(int *)(in_ECX + 0x44);
    local_160 = in_ECX;
    piVar5 = (int *)FUN_004d8950(0);
    local_164 = piVar5;
    FUN_00589b70(0x410,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13e28,0,uVar4);
    uVar6 = FUN_005898f0();
    local_144 = FUN_009832e6(uVar6);
    iVar7 = FUN_005f23b0(0xc);
    local_148 = (uchar *)(((iVar7 < 3) - 1 & 0x19) + 100);
    local_155 = 1 < iVar7;
    FUN_005d0d50();
    local_150 = (int *)0x0;
    if (0 < (int)piVar5) {
      do {
        piVar8 = (int *)FUN_004d88f0(local_150,0);
        piVar5 = (int *)0x0;
        local_168 = piVar8;
        if (piVar8 == (int *)0x0) {
LAB_005d11bd:
          if (*(int *)(local_160 + 0x58) == 2) {
            if ((piVar8 != (int *)0x0) &&
               ((((char)piVar5[1] != '\x14' && ((char)piVar5[1] != '!')) ||
                (fVar15 = (float10)FUN_00484850(1), (float10)100.0 <= fVar15)))) {
LAB_005d149a:
              FUN_00484470();
              FUN_00401f20(piVar8);
              goto LAB_005d14aa;
            }
          }
          else if (((*(int *)(local_160 + 0x58) == 1) && (piVar8 != (int *)0x0)) &&
                  ((((char)piVar5[1] != '\x14' && ((char)piVar5[1] != '!')) ||
                   (fVar15 = (float10)FUN_00484850(1),
                   (float10)(int)local_148 < fVar15 != ((float10)(int)local_148 == fVar15)))))
          goto LAB_005d149a;
        }
        else {
          piVar5 = (int *)piVar8[2];
          local_140 = piVar5;
          cVar2 = FUN_004854f0(DAT_00b333c4,0,1,1,0);
          if ((cVar2 == '\0') || (cVar2 = FUN_00469980(piVar8[2]), iVar7 = local_144, cVar2 != '\0')
             ) {
            FUN_00484470();
            FUN_00401f20(piVar8);
            piVar8 = (int *)0x0;
            local_168 = (int *)0x0;
            goto LAB_005d11bd;
          }
          iVar9 = *(int *)(local_160 + 0x58);
          if (iVar9 == 3) {
            if ((((char)piVar5[1] == '\x19') && (local_144 != 0)) &&
               (cVar2 = (**(code **)(*piVar5 + 0x78))(), cVar2 == '\0')) {
              if (*(char *)(local_160 + 0x65) != '\0') {
                iVar7 = iVar7 + 0xa8;
                iStack_154 = iVar7;
                cVar2 = FUN_0046cb60();
                if (cVar2 == '\0') {
                  local_169 = cVar2;
                  uVar6 = FUN_005f1910(0x13);
                  iStack_13c = FUN_0041ba00(uVar6);
                  local_15c = 0;
                  do {
                    iVar9 = iVar7;
                    iVar7 = iStack_154;
                    if (iStack_13c <= local_15c) {
                      if (local_169 == '\0') goto LAB_005d149a;
                      break;
                    }
                    for (; (iStack_154 = iVar7, local_169 == '\0' && (iVar9 != 0));
                        iVar9 = *(int *)(iVar9 + 4)) {
                      iVar7 = FUN_00414b10(local_15c);
                      if (iVar7 != 0) {
                        uVar6 = FUN_00414b10(local_15c);
                        cVar2 = FUN_00412ef0(uVar6);
                        piVar8 = local_168;
                        if (cVar2 != '\0') {
                          local_169 = '\x01';
                        }
                      }
                      iVar7 = iStack_154;
                    }
                    local_15c = local_15c + 1;
                  } while (local_169 == '\0');
                }
              }
              goto LAB_005d14b0;
            }
            goto LAB_005d149a;
          }
          if (iVar9 == 4) {
            if (((int *)*piVar8 == (int *)0x0) || (*(int *)*piVar8 == 0)) {
              local_169 = '\0';
            }
            else {
              local_169 = FUN_0041df40();
            }
            cVar2 = (char)piVar5[1];
            if (((((cVar2 != '!') && (cVar2 != '\x16')) && (cVar2 != '\x14')) ||
                ((cVar2 = (**(code **)(*piVar5 + 0x78))(), cVar2 != '\0' ||
                 ((iVar7 = FUN_009832e6(piVar5,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03718,0), iVar7 != 0
                  && (*(int *)(iVar7 + 4) != 0)))))) || (local_169 != '\0')) goto LAB_005d149a;
            goto LAB_005d14b0;
          }
          if (iVar9 != 6) {
            if (iVar9 != 5) goto LAB_005d11bd;
            iVar7 = FUN_00484bf0();
            if (iVar7 == 0) goto LAB_005d149a;
            goto LAB_005d14b0;
          }
          local_169 = '\0';
          local_149 = '\0';
          FUN_00589b70(0x418);
          uVar6 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b133a4,0);
          iVar7 = FUN_009832e6(uVar6);
          if (iVar7 == 0) goto LAB_005d14b0;
          cVar2 = FUN_005d4700();
          if (cVar2 != '\0') {
            local_169 = '\x01';
          }
          cVar3 = FUN_005d4760();
          cVar2 = '\x01';
          if (cVar3 == '\0') {
            cVar2 = local_149;
          }
          if ((((local_169 == '\0') || ((char)piVar5[1] != '!')) &&
              ((cVar2 == '\0' || (((char)piVar5[1] != '\x16' && ((char)piVar5[1] != '\x14')))))) ||
             ((iVar7 = FUN_004695a0(piVar5), iVar7 != 0 ||
              ((((int *)*piVar8 != (int *)0x0 && (*(int *)*piVar8 != 0)) &&
               (cVar2 = FUN_0041df40(), cVar2 == '\x01')))))) {
            FUN_00484470();
            FUN_00401f20(piVar8);
            piVar8 = (int *)0x0;
            local_168 = (int *)0x0;
          }
          cVar2 = (**(code **)(*piVar5 + 0x78))();
          if (cVar2 == '\0') goto LAB_005d14b0;
          if (piVar8 != (int *)0x0) goto LAB_005d149a;
LAB_005d14aa:
          piVar8 = (int *)0x0;
          local_168 = (int *)0x0;
        }
LAB_005d14b0:
        iVar7 = local_160;
        piVar5 = *(int **)(local_160 + 0x6c);
        local_15c = 0;
        if (piVar8 != (int *)0x0) {
          local_15c = FUN_00485150();
        }
        iVar7 = *(int *)(iVar7 + 0x58);
        if (((iVar7 == 3) || (iVar7 == 6)) || (local_169 = '\0', iVar7 == 5)) {
          local_169 = '\x01';
        }
        if (piVar5 == (int *)0x0) {
LAB_005d1556:
          if (piVar8 != (int *)0x0) {
            puVar11 = (undefined4 *)FUN_00401f00(8);
            iVar7 = local_160;
            if (puVar11 == (undefined4 *)0x0) {
              puVar11 = (undefined4 *)0x0;
            }
            else {
              *puVar11 = local_168;
              puVar11[1] = local_150;
            }
            iVar9 = local_160 + 0x68;
            puVar12 = (undefined4 *)(**(code **)(*(int *)(local_160 + 0x68) + 4))();
            puVar12[2] = puVar11;
            *puVar12 = 0;
            puVar12[1] = *(undefined4 *)(iVar7 + 0x70);
            if (*(undefined4 **)(iVar7 + 0x70) == (undefined4 *)0x0) {
              *(undefined4 **)(iVar7 + 0x6c) = puVar12;
            }
            else {
              **(undefined4 **)(iVar7 + 0x70) = puVar12;
            }
            *(undefined4 **)(iVar7 + 0x70) = puVar12;
LAB_005d1628:
            *(int *)(iVar9 + 0xc) = *(int *)(iVar9 + 0xc) + 1;
          }
        }
        else {
          while (local_168 != (int *)0x0) {
            iVar7 = *(int *)piVar5[2];
            piVar1 = (int *)*piVar5;
            iVar9 = FUN_00485150();
            if ((local_169 != '\0') && (*(int *)(iVar7 + 8) == local_168[2])) {
              iVar7 = FUN_004b2460();
              iVar9 = FUN_004b2460();
              FUN_0060d020(iVar7 + iVar9);
              break;
            }
            if (iVar9 < local_15c) {
LAB_005d15a2:
              puVar11 = (undefined4 *)FUN_00401f00(8);
              iVar7 = local_160;
              if (puVar11 == (undefined4 *)0x0) {
                puVar11 = (undefined4 *)0x0;
              }
              else {
                *puVar11 = local_168;
                puVar11[1] = local_150;
              }
              iVar9 = local_160 + 0x68;
              puVar12 = (undefined4 *)(**(code **)(*(int *)(local_160 + 0x68) + 4))();
              puVar12[2] = puVar11;
              *puVar12 = piVar5;
              puVar12[1] = piVar5[1];
              if ((undefined4 *)piVar5[1] == (undefined4 *)0x0) {
                *(undefined4 **)(iVar7 + 0x6c) = puVar12;
                piVar5[1] = (int)puVar12;
              }
              else {
                *(undefined4 *)piVar5[1] = puVar12;
                piVar5[1] = (int)puVar12;
              }
              goto LAB_005d1628;
            }
            if (iVar9 == local_15c) {
              local_140 = (int *)FUN_00488df0();
              puVar10 = (uchar *)FUN_00488df0();
              iVar7 = __mbsicmp(puVar10,(uchar *)local_140);
              if (iVar7 < 1) goto LAB_005d15a2;
            }
            piVar8 = local_168;
            piVar5 = piVar1;
            if (piVar1 == (int *)0x0) goto LAB_005d1556;
          }
        }
        local_150 = (int *)((int)local_150 + 1);
      } while ((int)local_150 < (int)local_164);
    }
    puVar11 = *(undefined4 **)(local_12c + 0x34);
    while (puVar11 != (undefined4 *)0x0) {
      puVar11 = (undefined4 *)*puVar11;
      iVar7 = FUN_00588b50(0xfb8);
      if (iVar7 != 0) {
        FUN_0058ceb0(0xfaa,0xc2c60000);
      }
    }
    local_15c = *(int *)(local_160 + 0x70);
    local_168 = (int *)0x0;
    local_150 = (int *)0x0;
    iVar7 = local_160;
    while (local_15c != 0) {
      local_164 = *(int **)(local_15c + 8);
      local_15c = *(int *)(local_15c + 4);
      iVar9 = *local_164;
      iStack_154 = local_164[1];
      local_160 = iVar7;
      local_140 = (int *)FUN_00485150();
      if (local_140 != local_150) {
        local_150 = local_140;
      }
      uVar6 = FUN_004851b0(DAT_00b333c4);
      _sprintf(acStack_128,"%s\\%s","Icons",uVar6);
      puVar11 = *(undefined4 **)(local_12c + 0x34);
      do {
        do {
          if (puVar11 == (undefined4 *)0x0) {
            if (*(int *)(local_160 + 0x58) == 2) {
              local_148 = (uchar *)FUN_0046ca20(*(undefined4 *)(iVar9 + 8));
              local_164 = (int *)FUN_00470520(*(undefined4 *)(iVar9 + 8));
              fVar16 = (float)(int)local_164;
              fVar15 = (float10)FUN_00484850(0);
              iVar7 = FUN_005483c0((float)(int)local_148,(float)fVar15,fVar16);
              if (iVar7 < 2) goto LAB_005d17c7;
            }
            else {
LAB_005d17c7:
              iVar7 = 1;
            }
            iVar13 = (int)local_168 + 0x33;
            piVar5 = local_168;
            uVar6 = FUN_00485150(local_168,iVar13);
            uVar14 = FUN_00488df0(uVar6);
            FUN_005d0e50(acStack_128,uVar14,uVar6,piVar5,iVar13);
            uStack_134 = 0;
            uStack_130 = 0;
            uStack_12e = 0;
            uStack_c = 1;
            FUN_00402e30(&uStack_134,&DAT_00a2f860,iVar7);
            FUN_0058ced0(0xfb0,uStack_134);
            uVar6 = FUN_0048f450(2,1,0,0,0);
            FUN_0058ced0(0xfb1,uVar6);
            uVar6 = FUN_0048f450(3,1,0,0,0);
            FUN_0058ced0(0xfb2,uVar6);
            uVar6 = FUN_0048f450(4,1,0,0,0);
            FUN_0058ced0(0xfb3,uVar6);
            uVar6 = FUN_0048f450(0,1,0,0,0);
            FUN_0058ced0(0xfb5,uVar6);
            cVar2 = FUN_00484e80(0);
            local_164 = (int *)((cVar2 != '\0') + 1);
            FUN_0058ceb0(0xfb8,(float)(int)local_164);
            FUN_0058ceb0(0xfb9,(float)iStack_154);
            if (local_144 == 0) {
LAB_005d1907:
              iStack_154 = 1;
            }
            else {
              cVar2 = FUN_00593690(iVar9);
              iStack_154 = 2;
              if (cVar2 == '\0') goto LAB_005d1907;
            }
            FUN_0058ceb0(0xfba,(float)iStack_154);
            if (local_168 == (int *)DAT_00b3b718) {
              FUN_00582160(0,1);
              iVar7 = FUN_00582160(0,1);
              *(int *)(iVar7 + 0x8c) = *(int *)(iVar7 + 0x8c) + 1;
              local_164 = *(int **)(iVar7 + 0x8c);
              fVar16 = (float)(int)local_164;
              if ((int)local_164 < 0) {
                fVar16 = fVar16 + 4.2949673e+09;
              }
              FUN_0058ceb0(0xff0,fVar16);
            }
            if (((*(int *)(local_160 + 0x58) == 1) &&
                (iVar7 = FUN_009832e6(*(undefined4 *)(iVar9 + 8),0,&PTR_PTR_00b02f9c,
                                      &PTR_PTR_00b03718,0), iVar7 != 0)) &&
               (*(int *)(iVar7 + 4) != 0)) {
              local_164 = (int *)(2 - (uint)(local_155 != '\0'));
              FUN_0058ceb0(0xfae,(float)(int)local_164);
            }
            uStack_c = 0xffffffff;
            FUN_00401f20(uStack_134);
            uStack_134 = 0;
            uStack_12e = 0;
            uStack_130 = 0;
            goto LAB_005d19e9;
          }
          iVar7 = puVar11[2];
          puVar11 = (undefined4 *)*puVar11;
          iVar13 = FUN_00588c10(0xfaf);
        } while (((iVar13 == 0) || (iVar13 = FUN_00488df0(), iVar13 == 0)) ||
                (fVar15 = (float10)FUN_00588bd0(0xfaa), fVar15 != (float10)-99.0));
        local_148 = (uchar *)FUN_00488df0();
        puVar10 = (uchar *)FUN_00588c10(0xfaf);
        iVar13 = __mbscmp(puVar10,local_148);
      } while (iVar13 != 0);
      if (*(int *)(local_160 + 0x58) == 2) {
        local_148 = (uchar *)FUN_0046ca20(*(undefined4 *)(iVar9 + 8));
        local_164 = (int *)FUN_00470520(*(undefined4 *)(iVar9 + 8));
        fVar16 = (float)(int)local_164;
        fVar15 = (float10)FUN_00484850(0);
        iVar13 = FUN_005483c0((float)(int)local_148,(float)fVar15,fVar16);
        if (iVar13 < 2) goto LAB_005d1b01;
      }
      else {
LAB_005d1b01:
        iVar13 = 1;
      }
      iStack_13c = 0;
      uStack_138 = 0;
      uStack_136 = 0;
      uStack_c = 0;
      FUN_00402e30(&iStack_13c,&DAT_00a2f860,iVar13);
      uVar6 = FUN_00488df0();
      FUN_0058ced0(0xfaf,uVar6);
      FUN_0058ced0(0xfb0,iStack_13c);
      uVar6 = FUN_0048f450(2,1,0,0,0);
      FUN_0058ced0(0xfb1,uVar6);
      uVar6 = FUN_0048f450(3,1,0,0,0);
      FUN_0058ced0(0xfb2,uVar6);
      uVar6 = FUN_0048f450(4,1,0,0,0);
      FUN_0058ced0(0xfb3,uVar6);
      FUN_0058ced0(0xfb4,acStack_128);
      uVar6 = FUN_0048f450(0,1,0,0,0);
      FUN_0058ced0(0xfb5,uVar6);
      FUN_0058ceb0(0xfb7,(float)(int)local_140);
      cVar2 = FUN_00484e80(0);
      local_164 = (int *)((cVar2 != '\0') + 1);
      FUN_0058ceb0(0xfb8,(float)(int)local_164);
      FUN_0058ceb0(0xfb9,(float)iStack_154);
      if (local_144 == 0) {
LAB_005d1c3a:
        iStack_154 = 1;
      }
      else {
        cVar2 = FUN_00593690(iVar9);
        iStack_154 = 2;
        if (cVar2 == '\0') goto LAB_005d1c3a;
      }
      FUN_0058ceb0(0xfba,(float)iStack_154);
      FUN_0058ceb0(0xfaa,(float)(int)local_168);
      if (local_168 == (int *)DAT_00b3b718) {
        FUN_00582160(0,1);
        iVar13 = FUN_00582160(0,1);
        *(int *)(iVar13 + 0x8c) = *(int *)(iVar13 + 0x8c) + 1;
        fVar16 = (float)*(int *)(iVar13 + 0x8c);
        if (*(int *)(iVar13 + 0x8c) < 0) {
          fVar16 = fVar16 + 4.2949673e+09;
        }
        FUN_0058ceb0(0xff0,fVar16);
      }
      if (((*(int *)(local_160 + 0x58) == 1) &&
          (iVar9 = FUN_009832e6(*(undefined4 *)(iVar9 + 8),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03718,0),
          iVar9 != 0)) && (*(int *)(iVar9 + 4) != 0)) {
        local_164 = (int *)(2 - (uint)(local_155 != '\0'));
        FUN_0058ceb0(0xfae,(float)(int)local_164);
      }
      piVar5 = *(int **)(*(int *)(iVar7 + 0x10) + 0x34);
      do {
        local_164 = piVar5;
        if (local_164 == (int *)0x0) {
          local_164 = (int *)0x0;
          break;
        }
        piVar5 = (int *)*local_164;
      } while (iVar7 != local_164[2]);
      if (local_164 != (int *)0x0) {
        FUN_007aa860(&local_164);
      }
      iVar9 = *(int *)(iVar7 + 0x10);
      puVar11 = (undefined4 *)(**(code **)(*(int *)(iVar9 + 0x30) + 4))();
      puVar11[2] = iVar7;
      puVar11[1] = 0;
      *puVar11 = *(undefined4 *)(iVar9 + 0x34);
      if (*(int *)(iVar9 + 0x34) == 0) {
        *(undefined4 **)(iVar9 + 0x38) = puVar11;
      }
      else {
        *(undefined4 **)(*(int *)(iVar9 + 0x34) + 4) = puVar11;
      }
      *(int *)(iVar9 + 0x3c) = *(int *)(iVar9 + 0x3c) + 1;
      *(undefined4 **)(iVar9 + 0x34) = puVar11;
      uStack_c = 0xffffffff;
      FUN_00401f20(iStack_13c);
      iStack_13c = 0;
      uStack_136 = 0;
      uStack_138 = 0;
LAB_005d19e9:
      local_168 = (int *)((int)local_168 + 1);
      iVar7 = local_160;
    }
    local_164 = (int *)((int)local_168 + -1);
    FUN_0058ceb0(0xfae,(float)(int)local_164);
    puVar11 = *(undefined4 **)(local_12c + 0x34);
    while (puVar11 != (undefined4 *)0x0) {
      puVar12 = (undefined4 *)puVar11[2];
      puVar11 = (undefined4 *)*puVar11;
      fVar15 = (float10)FUN_00588bd0(0xfaa);
      if ((fVar15 == (float10)-99.0) && (puVar12 != (undefined4 *)0x0)) {
        (**(code **)*puVar12)(1);
      }
    }
    if (*(int *)(iVar7 + 0x58) == 2) {
      FUN_0058ceb0(0xfb1,0x40000000);
      iVar9 = FUN_005d0be0();
      if ((iVar9 < 1) || (iVar13 = FUN_005e4420(), iVar13 < iVar9)) {
        uVar6 = 0x3f800000;
      }
      else {
        uVar6 = 0x40000000;
      }
      FUN_0058ceb0(0xfaf,uVar6);
    }
    if (*(int *)(iVar7 + 0x58) == 3) {
      FUN_0058ceb0(0xfb1,0x40000000);
      if (((local_144 == 0) || (*(int *)(local_144 + 0xac) != 0)) ||
         (*(int *)(local_144 + 0xa8) != 0)) {
        uVar6 = 0x40000000;
      }
      else {
        uVar6 = 0x3f800000;
      }
      FUN_0058ceb0(0xfb1,uVar6);
      uVar6 = DAT_00b38898;
      if (*(char *)(iVar7 + 0x65) != '\0') {
        uVar6 = DAT_00b388a0;
      }
      FUN_0058ced0(0xfae,uVar6);
    }
  }
  *unaff_FS_OFFSET = local_14;
  return;
}



void FUN_005d1e50(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar3 = FUN_00589b70(0x40b);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005898f0();
  }
  iVar3 = FUN_009832e6(uVar4,0,&PTR_PTR_00b0a018,&PTR_PTR_00b14728,0);
  if (iVar3 != 0) {
    cVar1 = FUN_00578d70();
    if (cVar1 == '\x01') {
      FUN_00588bd0(0xfb9);
      uVar4 = FUN_009828c0();
      piVar5 = (int *)FUN_004d88f0(uVar4,0);
      if (piVar5 != (int *)0x0) {
        iVar6 = FUN_0046ca20(piVar5[2]);
        uVar4 = DAT_00b3b714;
        FUN_0041e6f0();
        FUN_00491700(DAT_00b333c4,uVar4,0);
        iVar7 = FUN_005e4420();
        FUN_0058ceb0(0xfae,(float)iVar7);
        uVar4 = FUN_0041e6f0();
        sVar2 = FUN_0041e860();
        if (sVar2 < 2) {
          uVar8 = 0;
          if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
            uVar8 = *(undefined4 *)*piVar5;
          }
          FUN_00488830((float)iVar6,uVar4,uVar8,1);
        }
        else {
          FUN_004238a0(sVar2 + -1);
        }
        FUN_00484470();
        FUN_00401f20(piVar5);
        FUN_0058ceb0(0xfa1,0x3f800000);
      }
      (**(code **)(*DAT_00b333c4 + 0x2c0))();
      FUN_005d0b80();
      FUN_005d1080(1);
    }
    *(undefined1 *)(iVar3 + 100) = 0;
  }
  return;
}



undefined4 FUN_005d2070(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  
  puVar1 = (undefined4 *)FUN_00589b70(0x40b);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  FUN_00582160(0,1);
  fVar7 = (float10)thunk_FUN_00584980();
  uVar2 = FUN_00590420("Data\\Menus\\repair_menu.xml");
  piVar3 = (int *)FUN_005898f0();
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  iVar4 = (**(code **)(*piVar3 + 0x34))();
  if (iVar4 == 0x40b) {
    uVar5 = FUN_009832e6(uVar2,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
    FUN_00584880(uVar5);
    iVar4 = FUN_009832e6(piVar3,0,&PTR_PTR_00b0a018,&PTR_PTR_00b14728,0);
    FUN_0058ceb0(0xfae,(float)param_1);
    FUN_0041e6f0();
    uVar5 = FUN_004869c0(DAT_00b35ed0);
    *(undefined4 *)(iVar4 + 0x54) = uVar5;
    *(int *)(iVar4 + 0x58) = param_1;
    *(int **)(iVar4 + 0x60) = param_4;
    *(undefined4 *)(iVar4 + 0x5c) = param_3;
    fVar8 = (float10)FUN_00588bd0(0xfa5);
    if ((fVar8 == (float10)6006.0) ||
       (fVar8 = (float10)FUN_00588bd0(0xfa5), fVar8 == (float10)102.0)) {
      FUN_0058ceb0(0xfab,(float)fVar7);
    }
    FUN_0058ceb0(0xfae,(float)*(int *)(iVar4 + 0x54));
    if (param_1 == 2) {
      iVar4 = FUN_005e4420();
      FUN_0058ceb0(0xfae,(float)iVar4);
      FUN_006ac3d0();
      uVar5 = FUN_0052ed50(5,3);
      (**(code **)(*param_4 + 0xdc))(uVar5,DAT_00b333c4,1,1,0);
    }
    else if ((param_1 != 1) && (param_1 == 3)) {
      FUN_0057de50(1);
      FUN_00589b70(0x410,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13e28,0);
      uVar5 = FUN_005898f0();
      iVar6 = FUN_009832e6(uVar5);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0xb0 + DAT_00b3b270 * 4) != 0)) {
        FUN_0058ceb0(0xfa1,0x40000000);
      }
      *(undefined1 *)(iVar4 + 0x65) = 1;
    }
    FUN_005d1080(1);
    FUN_00585190(0);
    return uVar2;
  }
  if (piVar3[1] == 0) {
    return 0;
  }
  (**(code **)*piVar3)(1);
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005d22c0(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  int in_ECX;
  undefined4 unaff_EBP;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uStack_294;
  float local_290;
  int iStack_28c;
  int *piStack_288;
  int iStack_284;
  int iStack_280;
  int local_27c;
  int local_278;
  uint local_274;
  undefined4 local_270;
  int iStack_26c;
  char local_268 [300];
  char acStack_13c [300];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c1e0c;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&uStack_294;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xfffffd5c;
  *unaff_FS_OFFSET = (int)&local_c;
  local_278 = param_2;
  if (*(char *)(in_ECX + 100) != '\0') goto LAB_005d2a08;
  local_27c = in_ECX;
  switch(param_1) {
  case 2:
    FUN_0057de50(2);
    FUN_005d03b0();
    break;
  case 0xf:
    if (*(int *)(in_ECX + 0x58) == 3) {
      FUN_005d0a20(0,1);
    }
    break;
  case 0x10:
    iVar7 = FUN_005d0be0(uVar6);
    if (0 < iVar7) {
      iVar8 = FUN_005e4420();
      if (iVar8 < iVar7) {
        FUN_00579c10(DAT_00b38db0,0,1,DAT_00b38cf0,0);
      }
      else {
        DAT_00b3b710 = param_2;
        DAT_00b3b714 = iVar7;
        _sprintf(local_268,"%s %d %s?",DAT_00b38850,iVar7,DAT_00b38d20);
        FUN_00579c10(local_268,&LAB_005d1fc0,1,DAT_00b38cf8,DAT_00b38d00,0);
        *(undefined1 *)(in_ECX + 100) = 1;
      }
    }
    break;
  case 0x11:
    *(bool *)(in_ECX + 0x65) = *(char *)(in_ECX + 0x65) == '\0';
    fVar12 = (float10)FUN_00588bd0(0xfb1);
    if (fVar12 == (float10)2.0) {
      FUN_0057de50(1);
    }
    FUN_005d1080(1);
  }
  local_270 = FUN_0041e6f0();
  if (param_1 < 0x33) goto LAB_005d2a08;
  FUN_00588bd0(0xfaa);
  DAT_00b3b718 = FUN_009828c0();
  uVar14 = 0;
  FUN_00588bd0(0xfb9);
  uVar9 = FUN_009828c0(uVar14);
  piVar10 = (int *)FUN_004d88f0(uVar9,uVar14);
  local_290 = (float)FUN_005f23b0(0xc);
  local_274 = local_274 & 0xffffff00;
  uStack_294 = CONCAT13(1,(undefined3)uStack_294);
  if (piVar10 == (int *)0x0) goto LAB_005d2a08;
  switch(*(undefined4 *)(in_ECX + 0x58)) {
  case 1:
    fVar12 = (float10)FUN_00588bd0(0xfae);
    if (fVar12 == (float10)2.0) {
      FUN_00579c10(DAT_00b38880,0,1,DAT_00b38cf0,0);
    }
    else if (*(int *)(in_ECX + 0x54) < 1) {
      FUN_00579c10(DAT_00b38860,0,1,DAT_00b38cf0,0);
    }
    else {
      uVar9 = (**(code **)(*DAT_00b333c4 + 0x284))(0,0x3f800000);
      uVar9 = (**(code **)(*DAT_00b333c4 + 0x284))(0xc,uVar9);
      iStack_26c = FUN_005482f0(uVar9);
      piStack_288 = (int *)0x0;
      if (((int *)*piVar10 != (int *)0x0) && (*(int *)*piVar10 != 0)) {
        sVar5 = FUN_0041e860();
        piStack_288 = (int *)(int)sVar5;
      }
      if ((((int *)*piVar10 != (int *)0x0) && (*(int *)*piVar10 != 0)) &&
         (cVar4 = FUN_0041df40(), cVar4 != '\0')) {
        FUN_0041f6d0();
      }
      iStack_28c = FUN_0046ca20(piVar10[2]);
      iVar7 = piVar10[2];
      if (((int *)*piVar10 == (int *)0x0) || (iVar8 = *(int *)*piVar10, iVar8 == 0)) {
        iStack_284 = FUN_00401f00(0x14);
        uStack_4 = 0;
        if (iStack_284 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = FUN_00422ee0();
        }
        uStack_4 = 0xffffffff;
        if (*piVar10 == 0) {
          puVar11 = (undefined4 *)FUN_00401f00(8);
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = (undefined4 *)0x0;
          }
          else {
            *puVar11 = 0;
            puVar11[1] = 0;
          }
          *piVar10 = (int)puVar11;
        }
        FUN_0060d020(0);
        FUN_00446cb0(iVar8);
        uStack_294 = uStack_294 & 0xffffff;
      }
      iStack_280 = FUN_00485e80(iVar7,1,0);
      if (iStack_280 != 0) {
        sVar5 = FUN_0041e860();
        if (sVar5 != 1) {
          iStack_284 = FUN_00401f00(0x14);
          uStack_4 = 1;
          if (iStack_284 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = FUN_00422ee0();
          }
          uStack_4 = 0xffffffff;
          FUN_00428920(*(undefined4 *)*piVar10);
          FUN_004238a0(1);
        }
        if ((uStack_294._3_1_ != '\0') && (sVar5 = FUN_0041e860(), 1 < sVar5)) {
          FUN_004238a0((int)piStack_288 + -1);
        }
        FUN_0041e810();
        iStack_284 = FUN_009828c0();
        if (iStack_284 == -1) {
          iStack_284 = iStack_28c;
        }
        piStack_288 = (int *)(iStack_284 + iStack_26c);
        if ((int)piStack_288 < iStack_28c) {
          fVar15 = (float)(int)piStack_288;
        }
        else if ((int)local_290 < 3) {
          fVar15 = (float)iStack_28c;
        }
        else {
          fVar3 = (float)(int)piStack_288;
          fVar15 = (float)iStack_28c * 1.25;
          local_290 = fVar15;
          if (fVar3 < fVar15) {
            fVar15 = fVar3;
            local_290 = fVar3;
          }
        }
        FUN_0041ecb0(fVar15);
        uVar9 = (**(code **)(*DAT_00b333c4 + 0x284))(7);
        uVar9 = (**(code **)(*DAT_00b333c4 + 0x284))(0xc,uVar9);
        cVar4 = FUN_00548330(uVar9);
        iVar7 = iStack_284;
        if (cVar4 != '\0') {
          *(int *)(iStack_284 + 0x54) = *(int *)(iStack_284 + 0x54) + -1;
          FUN_0057de50(0x21);
          (**(code **)(*DAT_00b333c4 + 0x100))(DAT_00b35ed0,0,1,0,0,0,0,0,1,1);
          if (*(int *)(iVar7 + 0x54) < 1) {
            FUN_005c1900();
          }
          FUN_0058ceb0(0xfae,(float)*(int *)(iVar7 + 0x54));
        }
        fVar12 = (float10)FUN_00484850(1);
        if ((float10)100.0 <= fVar12) {
          local_27c = CONCAT31(local_27c._1_3_,1);
        }
        if (iVar8 == 0) {
          if ((char)((uint)unaff_EBP >> 0x18) != '\0') goto LAB_005d2852;
          FUN_0048ae30(piVar10,1);
          FUN_00582160(0,1);
          uVar9 = FUN_005966f0(1);
          FUN_0057d300(0xff0,uVar9);
        }
        else {
          for (piVar2 = (int *)*piStack_288; (piVar2 != (int *)0x0 && (iVar7 = *piVar2, iVar7 != 0))
              ; piVar2 = (int *)piVar2[1]) {
            cVar4 = FUN_0041e550(iVar8);
            if (cVar4 == '\0') {
              if (iVar7 != iVar8) {
                sVar5 = FUN_0041e860();
                FUN_004238a0(sVar5 + 1);
                FUN_0065c620(iVar8);
              }
              if ((int)(uStack_294 - iStack_28c) < (int)local_274) {
                local_27c = CONCAT31(local_27c._1_3_,1);
              }
              goto LAB_005d2852;
            }
          }
          if (*piStack_288 == 0) {
            puVar11 = (undefined4 *)FUN_00401f00(8);
            if (puVar11 == (undefined4 *)0x0) {
              puVar11 = (undefined4 *)0x0;
            }
            else {
              *puVar11 = 0;
              puVar11[1] = 0;
            }
            *piStack_288 = (int)puVar11;
          }
          FUN_00446cb0(iVar8);
LAB_005d2852:
          uVar13 = 0;
          uVar14 = 0xfdd;
          uVar9 = 0;
          FUN_00582160(0,1,0,0xfdd,0);
          FUN_0057f9f0(uVar9,uVar14,uVar13);
        }
        (**(code **)(*DAT_00b333c4 + 0x39c))(0xc,0,0);
        (**(code **)(*DAT_00b333c4 + 0x2c0))();
        FUN_005d1080(local_274);
        FUN_005d0b80();
      }
      if (uStack_294._3_1_ == '\0') goto LAB_005d2a08;
    }
    goto LAB_005d29f8;
  case 2:
    local_290 = (float)FUN_0046ca20(piVar10[2]);
    local_278 = FUN_00470520(piVar10[2]);
    fVar15 = (float)local_278;
    fVar12 = (float10)FUN_00484850(0);
    iVar7 = FUN_005483c0((float)(int)local_290,(float)fVar12,fVar15);
    if (iVar7 < 2) {
      iVar7 = 1;
    }
    iVar8 = FUN_005e4420();
    if (iVar8 < iVar7) {
      FUN_00579c10(DAT_00b38db0,0,1,DAT_00b38cf0,0);
    }
    else {
      DAT_00b3b710 = param_2;
      DAT_00b3b714 = iVar7;
      _sprintf(acStack_13c,"%s %d %s?",DAT_00b38840,iVar7,DAT_00b38d20);
      FUN_00579c10(acStack_13c,FUN_005d1e50,1,DAT_00b38cf8,DAT_00b38d00,0);
      *(undefined1 *)(in_ECX + 100) = 1;
    }
    break;
  case 3:
    fVar12 = (float10)FUN_00588bd0(0xfba);
    if (fVar12 == (float10)1.0) {
      FUN_005d0a20(piVar10,1);
      FUN_005e99c0(piVar10[2],1,0);
    }
    goto LAB_005d2a08;
  case 4:
    iVar7 = FUN_00589b70(0x412);
    if ((iVar7 != 0) && (iVar7 = FUN_005898f0(), iVar7 != 0)) {
      iVar8 = *(int *)(iVar7 + 0x30);
      if ((((iVar8 != 0) &&
           (((cVar4 = *(char *)(piVar10[2] + 4), cVar4 != '\"' && (cVar4 != '!')) ||
            ((cVar1 = *(char *)(*(int *)(iVar8 + 8) + 4), cVar1 != '\"' && (cVar1 != '!')))))) &&
          (((cVar4 != '\x14' && (cVar4 != '\x16')) ||
           ((cVar1 = *(char *)(*(int *)(iVar8 + 8) + 4), cVar1 != '\x14' && (cVar1 != '\x16'))))))
         && (((((cVar4 == '\"' || (cVar4 == '!')) || (cVar4 == '\x14')) ||
              ((cVar4 == '\x16' || (cVar4 = *(char *)(*(int *)(iVar8 + 8) + 4), cVar4 == '\"')))) ||
             ((cVar4 == '!' || ((cVar4 == '\x14' || (cVar4 == '\x16')))))))) {
        FUN_00414c70();
      }
      *(uint *)(*(int *)(iVar7 + 0x28) + 0x34) = (*(char *)(piVar10[2] + 4) != '!') + 2;
      iVar8 = *(int *)(iVar7 + 0x30);
      if (iVar8 != 0) {
        FUN_00484470();
        FUN_00401f20(iVar8);
      }
      *(int **)(iVar7 + 0x30) = piVar10;
      FUN_005a2160();
      FUN_005a2520();
      iVar7 = piVar10[2];
LAB_005d2b60:
      FUN_005e99c0(iVar7,1,0);
      FUN_005d03b0();
      goto LAB_005d2a08;
    }
    break;
  case 5:
    iVar7 = FUN_00589b70(0x412);
    if ((iVar7 != 0) && (iVar7 = FUN_005898f0(), iVar7 != 0)) {
      iVar8 = *(int *)(iVar7 + 0x2c);
      if (iVar8 != 0) {
        FUN_00484470();
        FUN_00401f20(iVar8);
      }
      *(int **)(iVar7 + 0x2c) = piVar10;
      FUN_005a2160();
      FUN_005a2520();
      iVar7 = piVar10[2];
      goto LAB_005d2b60;
    }
    break;
  case 6:
    iVar7 = FUN_00589b70(0x418);
    if ((iVar7 != 0) && (iVar7 = FUN_005898f0(), iVar7 != 0)) {
      iVar8 = *(int *)(iVar7 + 0x2c);
      if (iVar8 != 0) {
        FUN_00484470();
        FUN_00401f20(iVar8);
      }
      *(int **)(iVar7 + 0x2c) = piVar10;
      iVar7 = piVar10[2];
      goto LAB_005d2b60;
    }
  }
  FUN_0058ceb0(0xfa1,0x3f800000);
LAB_005d29f8:
  FUN_00484470();
  FUN_00401f20(piVar10);
LAB_005d2a08:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005d2cf0(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70();
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      iVar1 = FUN_009832e6(*(undefined4 *)(iVar1 + 0x40),0,&PTR_PTR_00b13240,&PTR_PTR_00b13550);
      if (iVar1 != 0) {
        FUN_00591a80();
      }
      FUN_0058ceb0(0x1772);
      FUN_00584740();
      FUN_00459400();
      return;
    }
  }
  return;
}



void FUN_005d2d80(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (param_1 != 4) {
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
    if ((float10)1 <= (float10)(double)((float10)iVar1 - fVar2) / fVar3) goto LAB_005d2f11;
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
LAB_005d2f11:
  FUN_0058ceb0(0xfb3,0xce6e6b28);
  iVar1 = FUN_009828c0();
  FUN_0058ceb0(0xfb3,(float)iVar1);
  FUN_0058ceb0(0xfb3,0);
  return;
}



void FUN_005d2f90(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  undefined4 uVar4;
  
  if (in_ECX[0x12] != 0) {
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



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005d3060(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int in_ECX;
  int *piVar5;
  undefined1 local_714 [4];
  undefined1 *local_710;
  undefined1 local_70c [300];
  undefined1 local_5e0 [300];
  undefined1 local_4b4 [300];
  undefined1 local_388 [300];
  undefined1 local_25c [300];
  char local_130 [300];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_714;
  piVar5 = *(int **)(in_ECX + 0x4c);
  iVar2 = 1;
  if (piVar5 != (int *)0x0) {
    while (*piVar5 != 0) {
      if (param_1 == iVar2) {
        iVar2 = FUN_009832e6(*(undefined4 *)(in_ECX + 0x40),0,&PTR_PTR_00b13240,&PTR_PTR_00b13550);
        if (iVar2 != 0) {
          local_710 = &stack0xfffff8dc;
          FUN_00591a80();
          FUN_0058ceb0(0xfa1);
        }
        puVar3 = (undefined4 *)
                 FUN_004610f0(*piVar5,0,local_388,local_5e0,local_25c,local_70c,local_4b4,0,
                              local_714);
        _sprintf(local_130,"%s\n%s\n%s\n%s\n%s",local_388,local_5e0,local_25c,local_70c);
        FUN_0058ced0(0xfde);
        FUN_0058ceb0(0xfae);
        if (iVar2 == 0) {
          if (puVar3 == (undefined4 *)0x0) {
            return;
          }
        }
        else {
          local_710 = &stack0xfffff8dc;
          puVar1 = &stack0xfffff8dc;
          if (puVar3 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar3 + 1);
            puVar1 = local_710;
          }
          local_710 = puVar1;
          FUN_00591a80();
          if (puVar3 == (undefined4 *)0x0) {
            FUN_0058ceb0(0xfa1);
            FUN_0058ced0(0xfde);
            return;
          }
        }
        LVar4 = InterlockedDecrement(puVar3 + 1);
        if (LVar4 != 0) {
          return;
        }
        if (puVar3 == (undefined4 *)0x0) {
          return;
        }
        (**(code **)*puVar3)();
        return;
      }
      piVar5 = (int *)piVar5[1];
      iVar2 = iVar2 + 1;
      if (piVar5 == (int *)0x0) {
        return;
      }
    }
  }
  return;
}



void FUN_005d3230(void)

{
  int iVar1;
  
  FUN_0057de50(0xb);
  FUN_00465130(0,0,0);
  iVar1 = FUN_00589b70(0x40f);
  if (iVar1 != 0) {
    FUN_0057acc0(DAT_00b387d0,0,1,0xbf800000);
    FUN_005d2cf0();
    FUN_005bda20();
    return;
  }
  return;
}



void FUN_005d3290(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c1e53;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00584640(uVar1);
  *in_ECX = &PTR_FUN_00a6d624;
  in_ECX[0x14] = 0;
  *(undefined2 *)(in_ECX + 0x15) = 0;
  *(undefined2 *)((int)in_ECX + 0x56) = 0;
  in_ECX[10] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x16] = 0;
  FUN_00401f20(in_ECX[0x14]);
  in_ECX[0x14] = 0;
  *(undefined2 *)((int)in_ECX + 0x56) = 0;
  *(undefined2 *)(in_ECX + 0x15) = 0;
  *(undefined1 *)(in_ECX + 0x17) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005d3320(void)

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
  *in_ECX = &PTR_FUN_00a6d624;
  FUN_00401f20(in_ECX[0x14],uVar1);
  in_ECX[0x14] = 0;
  *(undefined2 *)((int)in_ECX + 0x56) = 0;
  *(undefined2 *)(in_ECX + 0x15) = 0;
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005d3470(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0) {
    return;
  }
  if (param_1 < 0x65) {
    if (*(int *)(in_ECX + 0x2c) == 0) {
      return;
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x30) = 0;
    if (*(int *)(in_ECX + 0x2c) == 0) {
      return;
    }
    FUN_0057de50();
    FUN_00588bd0();
    FUN_009828c0();
    FUN_00588d90();
    FUN_00588bd0();
    FUN_0058ceb0(0xfab);
    FUN_00588bd0();
    FUN_0058ceb0(0xfcb);
    FUN_00588bd0();
    FUN_0058ceb0(0xfca);
    FUN_00588c50();
    FUN_0058ceb0(0xfad);
    FUN_00588cf0();
    FUN_0058ceb0(0xfac);
    FUN_0058ceb0(0xfa1);
    *(int *)(in_ECX + 0x30) = param_2;
    if (param_1 != 0x65) {
      FUN_00588bd0();
      FUN_009828c0();
      FUN_005d3060();
      return;
    }
    FUN_0058ced0(0xfde);
    iVar1 = FUN_009832e6(*(undefined4 *)(in_ECX + 0x40),0,&PTR_PTR_00b13240,&PTR_PTR_00b13550);
    if (iVar1 == 0) {
      return;
    }
    FUN_00591a80();
  }
  FUN_0058ceb0(0xfa1);
  return;
}



void FUN_005d3630(byte param_1)

{
  FUN_005d3320();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d3650(char *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_324;
  undefined4 local_320;
  undefined2 local_31c;
  undefined2 local_31a;
  int local_318;
  char local_310 [512];
  char local_110 [256];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c1e7b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_324;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffccc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 == 1) {
    _DAT_00b3b71c = 0;
  }
  uVar2 = *(undefined4 *)(in_ECX + 0x48);
  local_320 = 0;
  local_31c = 0;
  local_31a = 0;
  local_318 = in_ECX;
  FUN_004028d0("save_game_template",0);
  local_4 = 0;
  iVar5 = FUN_00585410(uVar2,local_320,0);
  if (param_3 != 0) {
    FUN_00464060(param_3,&local_324,local_110,local_310,local_310 + 0x100);
    pcVar6 = local_110;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (pcVar6 == local_110 + 1) {
      _sprintf(param_1,"%s %i - %s\n%s: %s",DAT_00b386f0,local_324,local_310,DAT_00b386f8,
               local_310 + 0x100);
    }
    else {
      _sprintf(param_1,"%s\n%s: %s",local_110,DAT_00b386f8,local_310 + 0x100,uVar4);
      _DAT_00b3b71c = _DAT_00b3b71c + 1;
    }
  }
  if (iVar5 != 0) {
    FUN_0058ceb0(0xfae,(float)param_2);
    iVar5 = 0;
    do {
      pcVar6 = local_310 + iVar5;
      cVar1 = pcVar6[(int)param_1 - (int)local_310];
      *pcVar6 = cVar1;
      if (cVar1 == ' ') {
        *pcVar6 = '_';
      }
    } while ((*pcVar6 != '\0') && (iVar5 = iVar5 + 1, iVar5 < 0x100));
    local_310[0xff] = 0;
    FUN_004028d0(local_310,0);
    FUN_0058ced0(0xfb1,param_1);
    local_324 = param_2 + 0x65;
    FUN_0058ceb0(0xfa8,(float)local_324);
    if ((param_1 == (char *)0x0) || (*(char **)(local_318 + 0x50) == (char *)0x0)) {
      iVar5 = (uint)(param_1 == (char *)0x0) * 2 + -1;
    }
    else {
      iVar5 = __stricmp(*(char **)(local_318 + 0x50),param_1);
    }
    if (iVar5 == 0) {
      FUN_00582160(0,1);
      iVar5 = FUN_00582160(0,1);
      *(int *)(iVar5 + 0x8c) = *(int *)(iVar5 + 0x8c) + 1;
      fVar3 = (float)*(int *)(iVar5 + 0x8c);
      if (*(int *)(iVar5 + 0x8c) < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      FUN_0058ceb0(0xff0,fVar3);
    }
  }
  FUN_00401f20(local_320);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005d38c0(char param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_130 [300];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_130;
  puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x48) + 0x34);
  while (puVar1 != (undefined4 *)0x0) {
    piVar4 = puVar1 + 2;
    puVar1 = (undefined4 *)*puVar1;
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
  }
  FUN_00573880();
  FUN_005d3650("New Save",0,0,0);
  if (param_1 != '\0') {
    FUN_00459400();
    FUN_0045d450();
  }
  piVar4 = *(int **)(DAT_00b33b00 + 0x6c);
  iVar3 = 0;
  *(int **)(in_ECX + 0x4c) = piVar4;
  iVar5 = 1;
  piVar2 = piVar4;
  if (piVar4 != (int *)0x0) {
    do {
      if (*piVar2 != 0) {
        iVar3 = iVar3 + 1;
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
    do {
      if (*piVar4 == 0) {
        return;
      }
      FUN_005d3650(auStack_130,iVar5,*piVar4,iVar3);
      piVar4 = (int *)piVar4[1];
      iVar5 = iVar5 + 1;
    } while (piVar4 != (int *)0x0);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_005d39a0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  int *piStack_13c;
  undefined4 uStack_138;
  float fStack_134;
  undefined1 auStack_130 [300];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&piStack_13c;
  puVar1 = (undefined4 *)FUN_00589b70(0x40f);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  FUN_00582160(0,1);
  fVar7 = (float10)thunk_FUN_00584980();
  fStack_134 = (float)fVar7;
  uVar2 = FUN_00590420("Data\\Menus\\Options\\save_menu.xml");
  uStack_138 = uVar2;
  piVar3 = (int *)FUN_005898f0();
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  piStack_13c = piVar3;
  iVar4 = (**(code **)(*piVar3 + 0x34))();
  if (iVar4 != 0x40f) {
    if (piVar3[1] == 0) {
      return 0;
    }
    (**(code **)*piVar3)(1);
    return 0;
  }
  uVar2 = FUN_009832e6(uVar2,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar2);
  iVar4 = FUN_009832e6(piVar3,0,&PTR_PTR_00b0a018,&PTR_PTR_00b14744,0);
  fVar7 = (float10)FUN_00588bd0(0xfa5);
  if ((fVar7 == (float10)6006.0) || (fVar7 = (float10)FUN_00588bd0(0xfa5), fVar7 == (float10)102.0))
  {
    FUN_0058ceb0(0xfab,fStack_134);
  }
  FUN_0045e6a0();
  FUN_005d3650(DAT_00b38708,0,0,0);
  FUN_0045d450();
  piVar3 = *(int **)(DAT_00b33b00 + 0x6c);
  iVar6 = 0;
  *(int **)(iVar4 + 0x4c) = piVar3;
  iVar4 = 1;
  piVar5 = piVar3;
  if (piVar3 != (int *)0x0) {
    do {
      if (*piVar5 != 0) {
        iVar6 = iVar6 + 1;
      }
      piVar5 = (int *)piVar5[1];
    } while (piVar5 != (int *)0x0);
    do {
      if (*piVar3 == 0) break;
      FUN_005d3650(auStack_130,iVar4,*piVar3,iVar6);
      piVar3 = (int *)piVar3[1];
      iVar4 = iVar4 + 1;
    } while (piVar3 != (int *)0x0);
  }
  FUN_00585190(0);
  return uStack_138;
}



void FUN_005d3d20(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x5c) == '\0') {
    if (param_1 == 1) {
      FUN_005d2cf0();
      FUN_005bda20();
      if (*(int *)(in_ECX + 0x40) != 0) {
        FUN_0058ceb0(0xfa1,0x3f800000);
        return;
      }
    }
    else if (100 < param_1) {
      iVar1 = FUN_00582160(0,1);
      if ((*(uint *)(iVar1 + 0x118) >> 2 & 1) == 0) {
        if (param_1 == 0x65) {
          FUN_005d3230();
          return;
        }
        *(undefined4 *)(in_ECX + 0x58) = param_2;
        FUN_00579c10(DAT_00b38758,&LAB_005d3390,1,DAT_00b38d00,DAT_00b38cf8,0);
        *(undefined1 *)(in_ECX + 0x5c) = 1;
      }
      else if (param_1 != 0x65) {
        *(undefined4 *)(in_ECX + 0x58) = param_2;
        FUN_00579c10(DAT_00b38760,&LAB_005d3b70,1,DAT_00b38d00,DAT_00b38cf8,0);
        *(undefined1 *)(in_ECX + 0x5c) = 1;
        return;
      }
    }
  }
  return;
}



undefined4 FUN_005d3e10(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  
  iVar1 = (**(code **)(*in_ECX + 0x34))();
  iVar2 = FUN_00578fe0();
  if ((iVar2 == iVar1) && (param_1 == 0xb)) {
    iVar1 = FUN_00582160(0,1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x88);
    }
    in_ECX[0x16] = iVar1;
    if (iVar1 != 0) {
      fVar3 = (float10)FUN_00588bd0(0xfa8);
      if ((float10)101.0 < fVar3) {
        FUN_00579c10(DAT_00b38760,&LAB_005d3b70,1,DAT_00b38d00,DAT_00b38cf8,0);
        *(undefined1 *)(in_ECX + 0x17) = 1;
        return 1;
      }
    }
    in_ECX[0x16] = 0;
  }
  return 0;
}



void FUN_005d3eb0(void)

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
  puStack_8 = &LAB_009c1ec3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00584640(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a6d664;
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
  in_ECX[0xb] = 0;
  *(undefined1 *)(in_ECX + 0x1e) = 1;
  in_ECX[0x1b] = 0;
  in_ECX[10] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  iVar2 = FUN_00401f00(0x28);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0057fe70();
  }
  in_ECX[0x1d] = uVar3;
  in_ECX[0x1f] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 FUN_005d3f70(void)

{
  int in_ECX;
  
  if ((((((*(int *)(in_ECX + 0x30) != 0) && (*(int *)(in_ECX + 0x34) != 0)) &&
        (*(int *)(in_ECX + 0x38) != 0)) &&
       ((*(int *)(in_ECX + 0x40) != 0 && (*(int *)(in_ECX + 0x44) != 0)))) &&
      ((*(int *)(in_ECX + 0x48) != 0 &&
       ((*(int *)(in_ECX + 0x54) != 0 && (*(int *)(in_ECX + 0x58) != 0)))))) &&
     (*(int *)(in_ECX + 0x5c) != 0)) {
    return 1;
  }
  return 0;
}



void FUN_005d40c0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x78) != '\0') {
    FUN_0058ced0(0xfde,&DAT_00a2f7ec);
    *(undefined1 *)(in_ECX + 0x78) = 0;
  }
  FUN_00588bd0(0xfd3);
  uVar1 = FUN_009828c0();
  FUN_0057d2d0(uVar1);
  FUN_00588bd0(0xfd4);
  uVar1 = FUN_009828c0();
  FUN_00583dd0(uVar1);
  FUN_0057dd90(1);
  return;
}



void FUN_005d4140(void)

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
  *in_ECX = &PTR_FUN_00a6d664;
  iVar1 = in_ECX[0xb];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_00484470(uVar2);
    FUN_00401f20(iVar1);
  }
  if (in_ECX[0x1b] != 0) {
    FUN_004526e0();
    FUN_00401f20(in_ECX[0x1b]);
  }
  iVar1 = in_ECX[0x1d];
  if (iVar1 != 0) {
    FUN_0057feb0();
    FUN_00401f20(iVar1);
  }
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005d41e0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00589b70(0x418);
  if (iVar1 != 0) {
    FUN_00668cc0();
    uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b133a4,0);
    iVar1 = FUN_009832e6(uVar2);
    if (iVar1 != 0) {
      FUN_0058ceb0(0x1772,0x40000000);
      FUN_00584740();
    }
    if ((DAT_00b3b720 == '\x03') || (DAT_00b3b720 == '\x02')) {
      FUN_0057cac0();
      return;
    }
  }
  return;
}



void FUN_005d4260(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  float10 fVar3;
  
  if ((param_1 == 0x18) || (param_1 == 0x14)) {
    if ((param_2 == 0) || (*(int *)(in_ECX + 0x40) == 0)) {
      if (*(int *)(in_ECX + 0x40) != 0) {
        FUN_0058ceb0(0xfa1,0x3f800000);
      }
    }
    else {
      FUN_00588bd0(0xfe0);
      iVar1 = FUN_009828c0();
      fVar2 = (float10)FUN_00588d90();
      fVar3 = (float10)FUN_00588bd0(0xfbd);
      FUN_0058ceb0(0xfab,(float)((float10)(double)fVar2 - fVar3));
      fVar2 = (float10)FUN_00588bd0(0xfcb);
      FUN_0058ceb0(0xfcb,(float)(fVar2 - (float10)(iVar1 * 2)));
      fVar2 = (float10)FUN_00588bd0(0xfca);
      FUN_0058ceb0(0xfca,(float)(fVar2 - (float10)(iVar1 * 2)));
      fVar2 = (float10)FUN_00588c50();
      FUN_0058ceb0(0xfad,(float)(fVar2 + (float10)iVar1));
      fVar2 = (float10)FUN_00588cf0();
      FUN_0058ceb0(0xfac,(float)(fVar2 + (float10)iVar1));
      FUN_0058ceb0(0xfa1,0x40000000);
      FUN_0058ceb0(0xfc8,0x40000000);
    }
  }
  if ((((param_1 == 0x18) || (param_1 == 0x14)) || (param_1 == 0xf)) || (param_1 == 0xe)) {
    FUN_0057de50(4);
  }
  return;
}



void FUN_005d45c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  undefined4 uVar4;
  
  if (param_1 < 1000) {
    if (param_1 < 3000) {
      return;
    }
  }
  else if (param_1 < 3000) {
    iVar1 = in_ECX[0x11];
    iVar2 = in_ECX[0x12];
    goto LAB_005d45f7;
  }
  iVar1 = in_ECX[0x13];
  iVar2 = in_ECX[0x14];
LAB_005d45f7:
  if (iVar1 != 0) {
    FUN_00588bd0(0xfb5);
    iVar1 = FUN_009828c0();
    FUN_00582160(0,1);
    if (iVar2 != 0) {
      iVar2 = FUN_009828c0();
      iVar2 = (int)((ulonglong)((longlong)iVar2 * 0x77777777) >> 0x20) - iVar2;
      FUN_0058ceb0(0xfb7,(float)((iVar2 >> 6) - (iVar2 >> 0x1f)));
      FUN_0058ceb0(0xfb7,0);
    }
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



undefined4 FUN_005d46c0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0057d2f0();
  if (cVar1 != '\0') {
    FUN_0057ff50(param_1);
    uVar2 = FUN_00580120();
    FUN_0058ced0(0xfde,uVar2);
    return 1;
  }
  return 0;
}



undefined1 FUN_005d4700(void)

{
  int iVar1;
  int iVar2;
  undefined1 local_1;
  
  iVar2 = 0;
  local_1 = 0;
  iVar1 = FUN_00414b10(0);
  if (iVar1 == 0) {
    return 0;
  }
  do {
    iVar1 = FUN_00414b10(iVar2);
    if (*(int *)(iVar1 + 0x10) == 1) {
      local_1 = 1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = FUN_00414b10(iVar2);
  } while (iVar1 != 0);
  return local_1;
}



undefined1 FUN_005d4760(void)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  iVar1 = FUN_00414b10(0);
  while (iVar1 != 0) {
    iVar1 = FUN_00414b10(iVar3);
    if (*(int *)(iVar1 + 0x10) == 0) {
      uVar2 = 1;
    }
    iVar3 = iVar3 + 1;
    iVar1 = FUN_00414b10(iVar3);
  }
  return uVar2;
}



void FUN_005d47b0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (*(char *)(*(int *)(*(int *)(in_ECX + 0x2c) + 8) + 4) == '!') {
    *(undefined4 *)(in_ECX + 0x7c) = 0;
    if (*(int *)(in_ECX + 0x28) != 0) {
      for (piVar1 = (int *)(*(int *)(in_ECX + 0x28) + 0x7c);
          (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1]) {
        iVar2 = *(int *)(*piVar1 + 0x10);
        if ((iVar2 == 1) || (iVar2 == 2)) {
          FUN_00413890(0);
          uVar3 = FUN_009828c0();
          *(undefined4 *)(in_ECX + 0x7c) = uVar3;
        }
      }
    }
    FUN_0058ceb0(0xfae,(float)*(int *)(in_ECX + 0x7c));
    FUN_0058ceb0(0xfaf,(float)*(byte *)(*(int *)(in_ECX + 0x28) + 0x74));
    *(uint *)(in_ECX + 0x7c) =
         (uint)*(byte *)(*(int *)(in_ECX + 0x28) + 0x74) * *(int *)(in_ECX + 0x7c);
    return;
  }
  FUN_0058ceb0(0xfae,0);
  FUN_0058ceb0(0xfaf,0);
  return;
}



void FUN_005d4880(byte param_1)

{
  FUN_005d4140();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005d48a0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bf808;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_00579c10(param_1,0,1,DAT_00b38cf0,0,uVar1);
  FUN_00401f20(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005d4900(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar6;
  undefined1 auStack_15c [4];
  float local_158;
  int local_154;
  int local_150;
  undefined4 local_148;
  undefined2 local_144;
  undefined2 local_142;
  undefined4 local_140;
  undefined2 local_13c;
  undefined2 local_13a;
  undefined4 local_134;
  undefined2 local_130;
  undefined2 local_12e;
  undefined4 local_12c;
  char local_128 [268];
  uint local_1c;
  int local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_009c1f01;
  local_14 = *unaff_FS_OFFSET;
  local_1c = DAT_00b30aac ^ (uint)auStack_15c;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffe98;
  *unaff_FS_OFFSET = (int)&local_14;
  local_12c = *(undefined4 *)(in_ECX + 0x38);
  local_148 = 0;
  local_144 = 0;
  local_142 = 0;
  FUN_004028d0("known_effect_template",0);
  local_c = 0;
  if (*(int *)(in_ECX + 0x28) == 0) {
    local_154 = 0;
  }
  else {
    local_154 = *(int *)(in_ECX + 0x28) + 0x78;
  }
  local_150 = 0;
  for (; local_154 != 0; local_154 = *(int *)(local_154 + 8) + -4) {
    piVar1 = *(int **)(local_154 + 4);
    iVar3 = FUN_00585410(local_12c,local_148,0);
    if ((iVar3 != 0) && (piVar1 != (int *)0x0)) {
      local_158 = (float)local_150;
      FUN_0058ceb0(0xfaa,local_158);
      FUN_0058ceb0(0xfae,local_158);
      local_158 = (float)(local_150 + 1000);
      FUN_0058ceb0(0xfa8,(float)(int)local_158);
      iVar3 = piVar1[4];
      puVar4 = (undefined4 *)
               FUN_00413be0(&local_134,6,0x3f800000,CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == 0),0,
                            iVar3 == 1);
      local_c._0_1_ = 1;
      FUN_0058ced0(0xfb0,*puVar4);
      local_c._0_1_ = 0;
      FUN_00401f20(local_134);
      local_134 = 0;
      local_12e = 0;
      local_130 = 0;
      FUN_004139f0(&local_140);
      local_c._0_1_ = 2;
      FUN_004028d0(local_140,0);
      local_c = (uint)local_c._1_3_ << 8;
      FUN_00401f20(local_140);
      local_140 = 0;
      local_13a = 0;
      local_13c = 0;
      fVar6 = (float10)FUN_00588bd0(0xfb5);
      FUN_0058ceb0(0xfb1,(float)fVar6);
      puVar5 = *(undefined1 **)(piVar1[7] + 0x48);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_00a2f7ec;
      }
      _sprintf(local_128,"%s\\%s","Icons",puVar5);
      FUN_0058ced0(0xfaf,local_128);
      local_158 = (float)*piVar1;
      FUN_0058ceb0(0xfb2,(float)(int)local_158);
      FUN_0058ceb0(0xfb4,0x41200000);
      FUN_0058ceb0(0xfc9,0x40000000);
      local_150 = local_150 + 1;
      fVar6 = (float10)FUN_00588bd0(0xfb5);
      FUN_0058ceb0(0xfb6,(float)fVar6);
    }
    if (*(int *)(local_154 + 8) == 0) break;
  }
  FUN_00401f20(local_148,uVar2);
  *unaff_FS_OFFSET = local_14;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005d4be0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint uVar4;
  undefined4 extraout_ECX;
  float fVar5;
  int *unaff_FS_OFFSET;
  float10 fVar6;
  char *pcStack_158;
  char *pcStack_154;
  uint uStack_150;
  float fStack_13c;
  uint uStack_138;
  int local_134;
  char *pcStack_130;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined4 uStack_128;
  undefined2 uStack_124;
  undefined2 uStack_122;
  int iStack_120;
  int local_11c;
  undefined1 *puStack_118;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c1f46;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&fStack_13c;
  uStack_150 = DAT_00b30aac ^ (uint)&stack0xfffffeb4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_11c = *(int *)(in_ECX + 0x3c);
  puVar3 = *(undefined4 **)(local_11c + 0x34);
  local_134 = in_ECX;
  while (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 2;
    puVar3 = (undefined4 *)*puVar3;
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      pcStack_154 = (char *)0x1;
      pcStack_158 = (char *)0x5d4c45;
      (*(code *)**(undefined4 **)*piVar1)();
    }
  }
  pcStack_154 = (char *)0x5d4c54;
  FUN_00573880();
  pcStack_154 = (char *)0x0;
  pcStack_158 = "added_effect_template";
  pcStack_130 = (char *)0x0;
  uStack_12c = 0;
  uStack_12a = 0;
  FUN_004028d0();
  iStack_4 = 0;
  if (*(int *)(in_ECX + 0x28) != 0) {
    fVar5 = 0.0;
    iStack_120 = *(int *)(in_ECX + 0x28) + 0x78;
    fStack_13c = 0.0;
    uStack_138 = 0;
    while( true ) {
      piVar1 = (int *)(iStack_120 + 4);
      uVar4 = 0;
      if (piVar1 == (int *)0x0) break;
      do {
        if (*piVar1 != 0) {
          uVar4 = uVar4 + 1;
        }
        piVar1 = (int *)piVar1[1];
      } while (piVar1 != (int *)0x0);
      if (uVar4 <= uStack_138) break;
      pcStack_158 = (char *)0x5d4cc1;
      pcStack_154 = (char *)uStack_138;
      piVar1 = (int *)FUN_00414b10();
      iVar2 = *(int *)(local_134 + 0x2c);
      if ((iVar2 != 0) &&
         (((piVar1[4] == 0 &&
           ((*(char *)(*(int *)(iVar2 + 8) + 4) == '\x16' ||
            (*(char *)(*(int *)(iVar2 + 8) + 4) == '\x14')))) ||
          ((piVar1[4] == 1 && (*(char *)(*(int *)(iVar2 + 8) + 4) == '!')))))) {
        pcStack_154 = (char *)0x0;
        pcStack_158 = pcStack_130;
        iVar2 = FUN_00585410(local_11c);
        if (iVar2 != 0) {
          pcStack_154 = (char *)(float)(int)fStack_13c;
          pcStack_158 = (char *)0xfaa;
          fStack_13c = (float)pcStack_154;
          FUN_0058ceb0();
          pcStack_154 = (char *)fStack_13c;
          pcStack_158 = (char *)0xfae;
          FUN_0058ceb0();
          fStack_13c = (float)((int)fVar5 + 3000);
          pcStack_154 = (char *)(float)(int)fStack_13c;
          pcStack_158 = (char *)0xfa8;
          FUN_0058ceb0();
          fVar5 = (float)((int)fVar5 + 1);
          pcStack_154 = (char *)CONCAT31((int3)((uint)extraout_ECX >> 8),piVar1[4] == 1);
          pcStack_158 = (char *)0x0;
          fStack_13c = fVar5;
          puVar3 = (undefined4 *)FUN_00413be0(&uStack_128,6,0x3f800000,piVar1[4] == 0);
          pcStack_154 = (char *)*puVar3;
          pcStack_158 = (char *)0xfb0;
          iStack_4._0_1_ = 1;
          FUN_0058ced0();
          pcStack_154 = (char *)uStack_128;
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          pcStack_158 = (char *)0x5d4dbc;
          FUN_00401f20();
          puStack_118 = (undefined1 *)&pcStack_158;
          uStack_128 = 0;
          uStack_122 = 0;
          uStack_124 = 0;
          FUN_004139f0(&pcStack_158);
          FUN_0058a020();
          pcStack_154 = *(char **)(piVar1[7] + 0x48);
          if (pcStack_154 == (undefined1 *)0x0) {
            pcStack_154 = &DAT_00a2f7ec;
          }
          pcStack_158 = "Icons";
          _sprintf(acStack_114,"%s\\%s");
          pcStack_154 = acStack_114;
          pcStack_158 = (char *)0xfaf;
          FUN_0058ced0();
          pcStack_154 = (char *)(float)*piVar1;
          pcStack_158 = (char *)0xfb2;
          FUN_0058ceb0();
          pcStack_154 = (char *)0x41300000;
          pcStack_158 = (char *)0xfb4;
          FUN_0058ceb0();
          pcStack_154 = (char *)0xfb5;
          pcStack_158 = (char *)0x5d4e54;
          fVar6 = (float10)FUN_00588bd0();
          pcStack_154 = (char *)(float)fVar6;
          pcStack_158 = (char *)0xfb6;
          FUN_0058ceb0();
        }
      }
      uStack_138 = uStack_138 + 1;
      in_ECX = local_134;
    }
  }
  if (*(int *)(in_ECX + 0x50) != 0) {
    pcStack_154 = (char *)0xc61c3c00;
    pcStack_158 = (char *)0xfb7;
    FUN_0058ceb0();
    pcStack_154 = (char *)0x0;
    pcStack_158 = (char *)0xfb7;
    FUN_0058ceb0();
  }
  pcStack_154 = pcStack_130;
  pcStack_158 = (char *)0x5d4eb2;
  FUN_00401f20();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005d4ee0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int in_ECX;
  undefined4 uVar9;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c5676;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar9 = DAT_00b389b0;
  if (((*(int *)(in_ECX + 0x2c) == 0) || (iVar4 = FUN_00438db0(), uVar9 = DAT_00b389d0, iVar4 == 0))
     || (pcVar5 = (char *)FUN_00438db0(), uVar9 = DAT_00b389d0, *pcVar5 == '\0')) {
    FUN_004028d0(uVar9);
    FUN_005d48a0();
    *unaff_FS_OFFSET = local_c;
    return;
  }
  piVar6 = (int *)FUN_00447df0();
  (**(code **)(*piVar6 + 0xb4))();
  FUN_0044d950();
  if (((char)piVar6[1] == '\x14') || (bVar3 = false, (char)piVar6[1] == '\x16')) {
    bVar3 = true;
  }
  iVar4 = FUN_009832e6(piVar6,0,&PTR_PTR_00b02f9c);
  if (iVar4 != 0) {
    FUN_00438db0();
    FUN_004028d0();
  }
  iVar4 = FUN_009832e6(piVar6,0,&PTR_PTR_00b02f9c);
  if (iVar4 != 0) {
    iVar7 = FUN_00401f00();
    puStack_8 = (undefined1 *)0x0;
    if (iVar7 == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)FUN_00419570();
    }
    puStack_8 = (undefined1 *)0xffffffff;
    if (*(int *)(in_ECX + 0x28) != 0) {
      for (piVar1 = (int *)(*(int *)(in_ECX + 0x28) + 0x7c);
          (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1]) {
        iVar7 = *(int *)(*piVar1 + 0x10);
        if (bVar3) {
          if (iVar7 == 0) {
LAB_005d5044:
            iVar7 = FUN_00401f00();
            puStack_8 = (undefined1 *)0x1;
            if (iVar7 != 0) {
              FUN_004149a0();
            }
            puStack_8 = (undefined1 *)0xffffffff;
            FUN_00414b90();
          }
        }
        else if ((iVar7 == 1) || (iVar7 == 2)) goto LAB_005d5044;
      }
    }
    piVar8[0xd] = bVar3 + 2;
    *(undefined2 *)(iVar4 + 8) = *(undefined2 *)(in_ECX + 0x7c);
    if ((piVar8[0xb] == 0) && (piVar8[10] == 0)) {
      FUN_004028d0(DAT_00b389b0,0);
      FUN_005d48a0();
      (**(code **)(*piVar6 + 0x10))();
      (**(code **)(*piVar8 + 0x10))();
      *unaff_FS_OFFSET = iVar4;
      return;
    }
    *(int **)(iVar4 + 4) = piVar8;
    FUN_0044d950();
  }
  FUN_00459800();
  puVar2 = (undefined4 *)**(int **)(in_ECX + 0x2c);
  uVar9 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar9 = *puVar2;
  }
  (**(code **)(*DAT_00b333c4 + 0x100))((*(int **)(in_ECX + 0x2c))[2],uVar9,1,0,0,0,0,0);
  FUN_004d8720(piVar6,0,1);
  iVar7 = 0;
  (**(code **)(*DAT_00b333c4 + 0x100))(*(undefined4 *)(in_ECX + 0x28),0,1,0,0,0,0,0,1);
  FUN_005c1900();
  iVar4 = *(int *)(in_ECX + 0x2c);
  if (iVar4 != 0) {
    FUN_00484470();
    FUN_00401f20(iVar4);
  }
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  FUN_0057de50(0x22);
  FUN_005d41e0();
  *unaff_FS_OFFSET = iVar7;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_005d5200(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  float10 fVar9;
  int local_110;
  float fStack_10c;
  char acStack_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_110;
  local_110 = param_1;
  puVar2 = (undefined4 *)FUN_00589b70(0x418);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  FUN_00582160(0,1);
  fVar9 = (float10)thunk_FUN_00584980();
  fStack_10c = (float)fVar9;
  uVar3 = FUN_00590420("Data\\Menus\\dialog\\SigilStone.xml");
  piVar4 = (int *)FUN_005898f0();
  iVar5 = FUN_00582160(0,1);
  DAT_00b3b720 = *(undefined1 *)(iVar5 + 8);
  if (piVar4 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar4 + 0x34))();
    if (iVar5 == 0x418) {
      uVar6 = FUN_009832e6(uVar3,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
      FUN_00584880(uVar6);
      iVar5 = FUN_009832e6(piVar4,0,&PTR_PTR_00b0a018,&PTR_PTR_00b133a4,0);
      *(int *)(iVar5 + 0x28) = param_1;
      cVar1 = FUN_005d3f70();
      if (cVar1 != '\0') {
        fVar9 = (float10)FUN_00588bd0(0xfa5);
        if ((fVar9 == (float10)6006.0) ||
           (fVar9 = (float10)FUN_00588bd0(0xfa5), fVar9 == (float10)102.0)) {
          FUN_0058ceb0(0xfab,fStack_10c);
        }
        DAT_00b3b718 = 0;
        piVar4 = (int *)FUN_004165e0();
        piVar4[0x16] = piVar4[0x16] | 0x201000;
        if (*(int *)(iVar5 + 0x6c) != 0) {
          FUN_004526e0();
          FUN_00401f20(*(undefined4 *)(iVar5 + 0x6c));
        }
        uVar6 = FUN_004170b0(0,0,0,1);
        *(undefined4 *)(iVar5 + 0x6c) = uVar6;
        FUN_00663aa0(uVar6);
        puVar7 = *(undefined1 **)(local_110 + 0x28);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_00a2f7ec;
        }
        FUN_0058ced0(0xfae,puVar7);
        iVar8 = FUN_004152c0(3,0);
        if (iVar8 == 0) {
          uVar6 = 0x3f800000;
        }
        else {
          puVar7 = *(undefined1 **)(*(int *)(iVar5 + 0x28) + 0x4c);
          if (puVar7 == (undefined1 *)0x0) {
            puVar7 = &DAT_00a2f7ec;
          }
          _sprintf(acStack_108,"%s\\%s\\%s","Menus","Icons",puVar7);
          FUN_0058ced0(0xfe6,acStack_108);
          uVar6 = 0x40000000;
        }
        FUN_0058ceb0(0xfa1,uVar6);
        (**(code **)(*piVar4 + 0x10))(1);
        FUN_005d4900();
        FUN_00585190(0);
        return uVar3;
      }
      FUN_004a7a60("SigilStone Menu Creation Failed... Are your menu and art resources up to date?")
      ;
    }
    else if (piVar4[1] != 0) {
      (**(code **)*piVar4)(1);
    }
  }
  return 0;
}



void FUN_005d5470(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  cVar1 = FUN_0057d2f0();
  if (cVar1 == '\0') {
    if ((param_1 != 2) && (param_1 != 0x18)) goto LAB_005d54b7;
    FUN_005d40c0();
  }
  else {
    FUN_0057dd90(0);
  }
  uVar2 = FUN_00580120();
  FUN_0058ced0(0xfde,uVar2);
LAB_005d54b7:
  if (param_1 == 0xe) {
    FUN_005d4ee0();
  }
  else {
    if (param_1 == 0xf) {
      FUN_005d41e0();
      (**(code **)(*in_ECX + 0x14))(0xf,param_2);
      return;
    }
    if (param_1 == 0x14) {
      FUN_005d2070(6,0,0,0);
      (**(code **)(*in_ECX + 0x14))(0x14,param_2);
      return;
    }
  }
  (**(code **)(*in_ECX + 0x14))(param_1,param_2);
  return;
}



void FUN_005d5610(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 1;
  DAT_00b1475b = 1;
  *in_ECX = &PTR_FUN_00a6d71c;
  return;
}



void FUN_005d56f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6d71c;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005d5720(void)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00589b70(0x408);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    fVar2 = (float10)FUN_00588bd0(0xfb1);
    if (fVar2 == (float10)3.0) {
      FUN_00664700(0);
    }
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
    return;
  }
  return;
}



void FUN_005d5790(float param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float10 extraout_ST1;
  
  if (param_1 == 4.2039e-45) {
    FUN_00582160(0,1);
    fVar2 = (float10)FUN_00588bd0(0xfb0);
    fVar3 = (float10)FUN_00588bd0(0xfaf);
    FUN_0057d7f0();
    FUN_0057d7f0();
    iVar1 = FUN_009828c0();
    fVar4 = (float10)FUN_00588cf0();
    fVar5 = (float10)FUN_00588bd0(0xfca);
    param_1 = (float)((float10)(double)((float10)iVar1 - fVar4) / fVar5);
    if (param_1 < 1.0) {
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
    }
    else {
      param_1 = 1.0;
    }
    fVar2 = (float10)(((float)fVar2 - (float)fVar3) * param_1);
    iVar1 = FUN_009828c0();
    fVar4 = (float10)iVar1;
    if (extraout_ST0 - fVar4 < (float10)0.0) {
      fVar4 = fVar4 - (float10)1.0;
    }
    if (fVar2 - (float10)(float)fVar4 < (float10)0.5 ==
        (fVar2 - (float10)(float)fVar4 == (float10)0.5)) {
      fVar2 = (float10)FUN_00404f70((float)extraout_ST1);
      fVar2 = fVar2 + (float10)1.0 + (float10)(float)fVar3;
    }
    else {
      fVar2 = (float10)FUN_00404f70((float)extraout_ST1);
    }
    FUN_0058ceb0(0xfb3,0xce6e6b28);
    FUN_0058ceb0(0xfb3,(float)fVar2);
    FUN_0058ceb0(0xfb3,0);
  }
  return;
}



void FUN_005d5930(void)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  if (*(int *)(in_ECX + 0x2c) != 0) {
    FUN_00582160(0,1);
    iVar1 = FUN_009828c0();
    iVar1 = iVar1 / 0x78;
    fVar2 = (float10)FUN_00588bd0(0xfb5);
    fVar3 = (float10)FUN_00588bd0(0xfb0);
    if ((((float10)(float)fVar2 < fVar3) && (iVar1 < 0)) || ((0.0 < (float)fVar2 && (0 < iVar1)))) {
      FUN_0058ceb0(0xfb7,(float)-iVar1);
      FUN_0058ceb0(0xfb7,0);
      uVar4 = 1;
      FUN_00582160(0,1,1);
      FUN_0057d730(uVar4);
    }
  }
  return;
}



int FUN_005d5a00(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  float10 fVar4;
  
  iVar3 = 0;
  if (*(int *)(in_ECX + 0x28) != 0) {
    puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x28) + 0x34);
    while (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      if ((*piVar1 != 0) && (fVar4 = (float10)FUN_00588bd0(0xfb1), fVar4 == (float10)2.0)) {
        iVar3 = iVar3 + 1;
      }
    }
    return iVar3;
  }
  return 0;
}



void FUN_005d5ab0(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x34))();
  iVar2 = FUN_00578fe0();
  if (((iVar2 == iVar1) && (in_ECX[0x13] != 0)) && (in_ECX[0xd] != 0)) {
    iVar1 = FUN_005d5a00();
    if (iVar1 == in_ECX[0x11]) {
      FUN_0058ceb0(0xfaf,0x40000000);
      FUN_0058ceb0(0xfc9,0x40000000);
      return;
    }
    FUN_0058ceb0(0xfaf,0x3f800000);
    FUN_0058ceb0(0xfc9,0x3f800000);
  }
  return;
}



void FUN_005d5b40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined1 *puVar3;
  
  if (param_1 == -1) {
    param_1 = *(int *)(in_ECX + 0x40);
  }
  iVar2 = *(int *)(in_ECX + 0x3c);
  if (iVar2 == 0) {
    if (((param_1 == -1) && (*(int *)(in_ECX + 0x28) != 0)) &&
       (*(int *)(*(int *)(*(int *)(in_ECX + 0x28) + 0x34) + 8) != 0)) {
      FUN_00588bd0(0xfb0);
      param_1 = FUN_009828c0();
    }
    uVar1 = FUN_00565c50(2,param_1);
    iVar2 = FUN_00446af0(uVar1);
    if (iVar2 == 0) {
      return;
    }
    uVar1 = (**(code **)(*(int *)(iVar2 + 0x18) + 0x10))(0,0x43534544);
    FUN_0058ced0(0xfaf,uVar1);
    puVar3 = *(undefined1 **)(iVar2 + 0x24);
  }
  else {
    if (iVar2 == 1) {
      if (((param_1 == -1) && (*(int *)(in_ECX + 0x28) != 0)) &&
         (*(int *)(*(int *)(*(int *)(in_ECX + 0x28) + 0x34) + 8) != 0)) {
        FUN_00588bd0(0xfb0);
        param_1 = FUN_009828c0();
      }
      uVar1 = FUN_00565cf0(param_1);
      FUN_0058ced0(0xfaf,uVar1);
      uVar1 = FUN_00565d10(param_1);
      FUN_0058ced0(0xfb0,uVar1);
      return;
    }
    if (iVar2 == 2) {
      if ((param_1 == 0) || (param_1 == -1)) {
        FUN_0058ced0(0xfaf,DAT_00b385f0);
        FUN_0058ced0(0xfb0,DAT_00b38608);
        return;
      }
      if (param_1 == 1) {
        FUN_0058ced0(0xfaf,DAT_00b385f8);
        FUN_0058ced0(0xfb0,DAT_00b38610);
        return;
      }
      if (param_1 != 2) {
        return;
      }
      FUN_0058ced0(0xfaf,DAT_00b38600);
      FUN_0058ced0(0xfb0,DAT_00b38618);
      return;
    }
    if (iVar2 != 3) {
      return;
    }
    iVar2 = FUN_00447350(param_1);
    if (iVar2 == 0) {
      return;
    }
    uVar1 = (**(code **)(*(int *)(iVar2 + 0x30) + 0x10))(0,0x43534544);
    FUN_0058ced0(0xfaf,uVar1);
    puVar3 = *(undefined1 **)(iVar2 + 0x28);
  }
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_00a2f7ec;
  }
  FUN_0058ced0(0xfb0,puVar3);
  return;
}



void FUN_005d5d40(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  int local_10;
  undefined4 local_c;
  
  if ((*(int *)(in_ECX + 0x28) != 0) && (iVar5 = *(int *)(in_ECX + 0x4c), iVar5 != 0)) {
    iVar3 = *(int *)(in_ECX + 0x3c);
    local_10 = 0;
    local_c = 0;
    if (iVar3 == 0) {
      iVar5 = 0x68;
      do {
        FUN_00446cb0(*(int *)(iVar5 + *(int *)(in_ECX + 0x4c)) + 1);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0x84);
    }
    else if (iVar3 == 1) {
      FUN_00446cb0(*(int *)(iVar5 + 0x60) + 1);
      FUN_00446cb0(*(int *)(*(int *)(in_ECX + 0x4c) + 100) + 1);
    }
    else if (iVar3 == 2) {
      FUN_00446cb0(*(int *)(iVar5 + 0x5c) + 1);
    }
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x28) + 0x34);
    while (puVar1 != (undefined4 *)0x0) {
      iVar5 = puVar1[2];
      puVar1 = (undefined4 *)*puVar1;
      if (iVar5 != 0) {
        FUN_00588bd0(0xfb0);
        iVar3 = FUN_009828c0();
        piVar4 = &local_10;
        do {
          if (*piVar4 == iVar3 + 1) {
            if (*(int *)(in_ECX + 0x3c) == 2) {
              *(int *)(in_ECX + 0x48) = iVar5;
            }
            uVar2 = 0x40000000;
            goto LAB_005d5e21;
          }
          piVar4 = (int *)piVar4[1];
        } while (piVar4 != (int *)0x0);
        uVar2 = 0x3f800000;
LAB_005d5e21:
        FUN_0058ceb0(0xfb1,uVar2);
      }
    }
  }
  return;
}



void FUN_005d5e50(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 *puVar7;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar8;
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
  iVar3 = (**(code **)(*in_ECX + 0x34))(uVar2);
  iVar4 = FUN_00578fe0();
  if (iVar4 != iVar3) goto LAB_005d61ae;
  if (((param_1 != 4) && (param_1 != 5)) && (param_1 != 6)) {
    if (param_1 != 7) {
      if (param_1 == 99) {
        if (in_ECX[0x11] == 1) {
          if (in_ECX[0x12] != 0) {
            FUN_0058ceb0(0xfb1,0x3f800000);
          }
          if (in_ECX[0xf] == 3) {
            FUN_0057de50(0xb);
          }
          FUN_0058ceb0(0xfb1,0x40000000);
          in_ECX[0x12] = param_2;
          FUN_00588bd0(0xfb0);
          iVar3 = FUN_009828c0();
          in_ECX[0x10] = iVar3;
          FUN_005d5b40(0xffffffff);
        }
        else {
          fVar8 = (float10)FUN_00588bd0(0xfb1);
          if (fVar8 == (float10)2.0) {
            FUN_0058ceb0(0xfb1,0x3f800000);
            FUN_005d5b40(0xffffffff);
          }
          else {
            iVar3 = FUN_005d5a00();
            if (iVar3 < in_ECX[0x11]) {
              FUN_0058ceb0(0xfb1,0x40000000);
              FUN_00588bd0(0xfb0);
              iVar3 = FUN_009828c0();
              in_ECX[0x10] = iVar3;
              in_ECX[0x12] = param_2;
              FUN_005d5b40(0xffffffff);
            }
            else {
              FUN_00579c10(DAT_00b38620,0,1,DAT_00b38cf0,0);
              FUN_005d5b40(0xffffffff);
            }
          }
        }
      }
      goto LAB_005d61ae;
    }
    fVar8 = (float10)FUN_00588bd0(0xfb7);
    if (fVar8 != (float10)2.0) goto LAB_005d61ae;
  }
  iVar3 = in_ECX[0x13];
  iVar4 = 0;
  if (iVar3 == 0) {
    if (in_ECX[0xf] == 3) {
      iVar3 = FUN_00447350(in_ECX[0x10]);
      if (iVar3 != 0) {
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_e = 0;
        puVar7 = *(undefined1 **)(iVar3 + 0x1c);
        uStack_4 = 0;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_00a2f7ec;
        }
        FUN_00402e30(&uStack_14,"%s %s?",DAT_00b38670,puVar7);
        FUN_00579c10(uStack_14,&LAB_005d5a50,1,DAT_00b38d00,DAT_00b38cf8,0);
        uStack_4 = 0xffffffff;
        FUN_00402da0();
      }
      goto LAB_005d61ae;
    }
    iVar3 = FUN_00589b70(0x413);
    if (iVar3 != 0) {
      uVar5 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13fd0,0);
      iVar3 = FUN_009832e6(uVar5);
      if (iVar3 != 0) {
        *(int *)(*(int *)(iVar3 + 0x94) + 0x14) = in_ECX[0x10];
      }
    }
  }
  else {
    iVar1 = in_ECX[0xf];
    if (-1 < iVar1) {
      if (iVar1 < 2) {
        if (iVar1 == 1) {
          iVar3 = iVar3 + 0x60;
        }
        else {
          iVar3 = iVar3 + 0x68;
        }
        iVar1 = *(int *)(in_ECX[10] + 0x38);
        while ((iVar1 != 0 && (iVar4 < in_ECX[0x11]))) {
          iVar1 = *(int *)(iVar1 + 4);
          fVar8 = (float10)FUN_00588bd0(0xfb1);
          if (fVar8 == (float10)2.0) {
            FUN_00588bd0(0xfb0);
            uVar5 = FUN_009828c0();
            *(undefined4 *)(iVar3 + iVar4 * 4) = uVar5;
            iVar4 = iVar4 + 1;
          }
        }
      }
      else if (iVar1 == 2) {
        *(int *)(iVar3 + 0x5c) = in_ECX[0x10];
      }
    }
    if ((param_1 == 4) ||
       ((param_1 == 7 && (fVar8 = (float10)FUN_00588bd0(0xfb7), fVar8 == (float10)2.0)))) {
      *(int *)(in_ECX[0x13] + 0x58) = *(int *)(in_ECX[0x13] + 0x58) + 1;
    }
    else {
      piVar6 = (int *)(in_ECX[0x13] + 0x58);
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        FUN_00584390();
        *(int *)(in_ECX[0x13] + 0x48 + in_ECX[0xf] * 4) = in_ECX[0x10];
        goto LAB_005d61a9;
      }
    }
    *(int *)(in_ECX[0x13] + 0x48 + in_ECX[0xf] * 4) = in_ECX[0x10];
  }
LAB_005d61a9:
  FUN_005d5720();
LAB_005d61ae:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_005d6270(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  float local_108;
  char local_104 [256];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_108;
  iVar3 = FUN_00585410(*(undefined4 *)(in_ECX + 0x28),"chargen_skill_template",0);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_00588bd0(0xfd0);
    iVar4 = FUN_009828c0();
    local_108 = (float)iVar4;
    FUN_0058ceb0(0xfaa,local_108);
    FUN_0058ceb0(0xfae,local_108);
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
    FUN_0058ced0(0xfaf,param_1);
    FUN_0058ceb0(0xfb0,(float)param_2);
    FUN_0058ceb0(0xfb1,0x3f800000);
  }
  return iVar3;
}



undefined4 FUN_005d6390(int param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float10 fVar11;
  undefined1 *puVar12;
  float fVar13;
  float afStack_8 [2];
  
  puVar2 = (undefined4 *)FUN_00589b70(0x408);
  iVar9 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  FUN_00582160(0,1);
  fVar11 = (float10)thunk_FUN_00584980();
  afStack_8[0] = (float)fVar11;
  uVar3 = FUN_00590420("Data\\Menus\\CharGen\\skills_menu.xml");
  piVar4 = (int *)FUN_005898f0();
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  iVar5 = (**(code **)(*piVar4 + 0x34))();
  if (iVar5 != 0x408) {
    if (piVar4[1] == 0) {
      return 0;
    }
    (**(code **)*piVar4)(1);
    return 0;
  }
  uVar6 = FUN_009832e6(uVar3,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar6);
  piVar4 = (int *)FUN_009832e6(piVar4,0,&PTR_PTR_00b0a018,&PTR_PTR_00b1475c,0);
  if ((((piVar4[10] == 0) || (piVar4[0xb] == 0)) || (piVar4[0xc] == 0)) ||
     ((piVar4[0xd] == 0 || (piVar4[0xe] == 0)))) {
    FUN_004a7a60("Attribute Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
  fVar11 = (float10)FUN_00588bd0(0xfa5);
  if ((fVar11 == (float10)6006.0) ||
     (fVar11 = (float10)FUN_00588bd0(0xfa5), fVar11 == (float10)102.0)) {
    FUN_0058ceb0(0xfab,afStack_8[0]);
  }
  iVar5 = FUN_00589b70(0x406);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    uVar6 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13e78,0);
    iVar5 = FUN_009832e6(uVar6);
  }
  piVar4[0x13] = iVar5;
  if (iVar5 == 0) {
    FUN_0058ceb0(0xfb6,0x3f800000);
    uVar6 = DAT_00b38d38;
  }
  else {
    FUN_0058ceb0(0xfb6,0x40000000);
    uVar6 = DAT_00b38cf0;
  }
  FUN_0058ced0(0xfae,uVar6);
  piVar4[0x10] = param_1;
  piVar4[0xf] = param_2;
  if (param_2 == 0) {
    FUN_0058ceb0(0xfb1,0);
    if (piVar4[0x13] == 0) {
      FUN_0058ceb0(0xfb2,0x3f800000);
    }
    else {
      FUN_0058ced0(0xfb3,DAT_00b38630);
      piVar4[0x11] = 7;
    }
    afStack_8[0] = 0.0;
    afStack_8[1] = 0.0;
    iVar5 = 0;
    do {
      puVar12 = &LAB_005d56c0;
      uVar6 = FUN_00565be0(2,iVar5,&LAB_005d56c0);
      FUN_00416650(uVar6,puVar12);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x15);
    pfVar10 = afStack_8;
    do {
      fVar1 = *pfVar10;
      fVar13 = fVar1;
      uVar6 = FUN_00565cc0(fVar1,fVar1);
      iVar5 = FUN_005d6270(uVar6,fVar13);
      if ((iVar9 == 0) || (fVar1 == (float)piVar4[0x10])) {
        iVar9 = iVar5;
      }
      pfVar10 = (float *)pfVar10[1];
    } while (pfVar10 != (float *)0x0);
    if (piVar4[0x13] == 0) {
      if (iVar9 == 0) goto LAB_005d662a;
      iVar5 = *piVar4;
      FUN_00588bd0(0xfa8);
      uVar6 = FUN_009828c0(iVar9);
      (**(code **)(iVar5 + 0xc))(uVar6);
LAB_005d661d:
      FUN_0058ceb0(0xff0,0x40000000);
      goto LAB_005d662a;
    }
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 2) {
        FUN_0058ceb0(0xfb1,0x40000000);
        FUN_0058ced0(0xfb3,DAT_00b38640);
        FUN_005d6270(DAT_00b385d8,0);
        FUN_005d6270(DAT_00b385e0,1);
        FUN_005d6270(DAT_00b385e8,2);
        FUN_005d5d40();
      }
      else if (param_2 == 3) {
        FUN_0058ceb0(0xfb1,0x40400000);
        FUN_0058ceb0(0xfb2,0x3f800000);
        afStack_8[0] = (float)(**(code **)(*DAT_00b333c4 + 0x268))();
        pfVar10 = (float *)(DAT_00b33a98 + 0x8c);
        if (pfVar10 != (float *)0x0) {
          do {
            if ((pfVar10[1] == 0.0) && (*pfVar10 == 0.0)) break;
            fVar1 = *pfVar10;
            puVar12 = *(undefined1 **)((int)fVar1 + 0x1c);
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = &DAT_00a2f7ec;
            }
            iVar5 = FUN_005d6270(puVar12,*(undefined4 *)((int)fVar1 + 0xc));
            if ((iVar9 == 0) || (afStack_8[0] == fVar1)) {
              iVar9 = iVar5;
            }
            pfVar10 = (float *)pfVar10[1];
          } while (pfVar10 != (float *)0x0);
          if (iVar9 != 0) {
            iVar5 = *piVar4;
            FUN_00588bd0(0xfa8);
            uVar6 = FUN_009828c0(iVar9);
            (**(code **)(iVar5 + 0xc))(uVar6);
            FUN_0058ceb0(0xff0,0x40000000);
          }
        }
      }
      goto LAB_005d662a;
    }
    FUN_0058ceb0(0xfb1,0x3f800000);
    if (piVar4[0x13] == 0) {
      FUN_0058ceb0(0xfb2,0x3f800000);
    }
    else {
      FUN_0058ced0(0xfb3,DAT_00b38638);
      piVar4[0x11] = 2;
    }
    iVar9 = 0;
    iVar5 = 0;
    do {
      iVar7 = FUN_00565be0(0,iVar5);
      iVar8 = iVar7;
      uVar6 = FUN_00565cc0(iVar7,iVar7);
      iVar8 = FUN_005d6270(uVar6,iVar8);
      if ((iVar9 == 0) || (iVar7 == piVar4[0x10])) {
        iVar9 = iVar8;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
    if (piVar4[0x13] == 0) {
      if (iVar9 == 0) goto LAB_005d662a;
      iVar5 = *piVar4;
      FUN_00588bd0(0xfa8);
      uVar6 = FUN_009828c0(iVar9);
      (**(code **)(iVar5 + 0xc))(uVar6);
      goto LAB_005d661d;
    }
  }
  FUN_005d5d40();
LAB_005d662a:
  FUN_005d5b40(0xffffffff);
  FUN_00585190(0);
  return uVar3;
}



void FUN_005d6870(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  *in_ECX = &PTR_FUN_00a6d7c4;
  *(undefined1 *)(in_ECX + 0x13) = 1;
  return;
}



undefined1 FUN_005d68a0(void)

{
  int in_ECX;
  
  if ((((*(int *)(in_ECX + 0x28) != 0) && (*(int *)(in_ECX + 0x2c) != 0)) &&
      (*(int *)(in_ECX + 0x30) != 0)) &&
     (((*(int *)(in_ECX + 0x34) != 0 && (*(int *)(in_ECX + 0x38) != 0)) &&
      (*(int *)(in_ECX + 0x3c) != 0)))) {
    return 1;
  }
  return 0;
}



void FUN_005d6960(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0388;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6d7c4;
  local_4 = 0;
  cVar1 = FUN_0045a500(uVar2);
  if (cVar1 == '\0') {
    if (DAT_00b3b72c != '\0') {
      FUN_00679a70();
    }
    iVar3 = (**(code **)(**(int **)(g_ModelLoader_singleton + 8) + 0x38))();
    if (iVar3 != 0) {
      DAT_00b3b72a = 1;
    }
  }
  FUN_00572ec0(1,0);
  DAT_00b3b72b = 0;
  DAT_00b3b72c = 0;
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005d6a10(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3f4);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_00582160(0,1);
    FUN_005806d0();
    FUN_006ac330(0x100);
    FUN_0057de50(2);
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
    return;
  }
  return;
}



void FUN_005d6bc0(int param_1)

{
  int iVar1;
  
  if ((param_1 == 4) && (DAT_00b3b728 == '\0')) {
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



void FUN_005d6d00(byte param_1)

{
  FUN_005d6960();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005d6d20(char param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  float10 fVar10;
  float10 extraout_ST0;
  float10 extraout_ST1;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined4 auStack_14 [2];
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c1f90;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  DAT_00b3b728 = 0;
  FUN_00589b70(0x3f4,uVar3);
  iVar4 = FUN_005898f0();
  if (iVar4 == 0) {
    FUN_00582160(0,1);
    fVar9 = (float10)thunk_FUN_00584980();
    uVar5 = FUN_00590420("Data\\Menus\\sleep_wait_menu.xml");
    piVar6 = (int *)FUN_005898f0();
    if (piVar6 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar6 + 0x34))();
      if (iVar4 == 0x3f4) {
        uVar5 = FUN_009832e6(uVar5,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
        FUN_00584880(uVar5);
        iVar4 = FUN_009832e6(piVar6,0,&PTR_PTR_00b0a018,&PTR_PTR_00b132e0,0);
        cVar1 = FUN_005d68a0();
        if (cVar1 != '\0') {
          fVar10 = (float10)FUN_00588bd0(0xfa5);
          if ((fVar10 == (float10)6006.0) ||
             (fVar10 = (float10)FUN_00588bd0(0xfa5), fVar10 == (float10)102.0)) {
            FUN_0058ceb0(0xfab,(float)fVar9);
          }
          FUN_0058ceb0(0xfb7,0xce6e6b28);
          FUN_0058ceb0(0xfb7,0);
          FUN_0058ceb0(0xfb3,(float)_DAT_00b14778);
          FUN_0058ceb0(0xfb3,0);
          FUN_0058ceb0(0xfaf,0x3f800000);
          FUN_0058ceb0(0xfb0,0x41c00000);
          FUN_0058ceb0(0xfb2,0x40c00000);
          DAT_00b3b730 = *(undefined4 *)(DAT_00b333c4 + 0x590);
          DAT_00b3b72c = 0;
          if (param_1 == '\0') {
            FUN_0058ced0(0xfae,DAT_00b38ac8);
            uVar5 = 0x3f800000;
            *(undefined1 *)(iVar4 + 0x4c) = 0;
          }
          else {
            uVar5 = 0x40000000;
          }
          FUN_0058ceb0(0xfae,uVar5);
          uStack_1c = 0;
          uStack_18 = 0;
          uStack_16 = 0;
          iStack_4 = 0;
          FUN_00402bd0();
          FUN_009828c0();
          cVar1 = FUN_009828c0();
          cVar2 = FUN_009828c0();
          puVar7 = &DAT_00a6cd08;
          if (extraout_ST0 < extraout_ST1 == (extraout_ST0 == extraout_ST1)) {
            puVar7 = &DAT_00a6cd04;
          }
          uVar5 = FUN_00402c90((int)cVar2,(int)cVar1,puVar7);
          FUN_00402e30(&uStack_1c,"%s %d:%02d %s",uVar5);
          FUN_0058ced0(0xfde,uStack_1c);
          puVar8 = (undefined4 *)FUN_00402e50(auStack_14);
          iStack_4._0_1_ = 1;
          FUN_004028d0(*puVar8,0);
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          FUN_00401f20(auStack_14[0]);
          uVar5 = uStack_1c;
          FUN_0058ced0(0xfde,uStack_1c);
          DAT_00b3b729 = 0;
          FUN_0057de50(0xb);
          FUN_00585190(0);
          FUN_00401f20(uVar5);
          *unaff_FS_OFFSET = local_c;
          return 1;
        }
        FUN_004a7a60("Sleep Menu Creation Failed... Are your menu and art resources up to date?");
      }
      else if (piVar6[1] != 0) {
        (**(code **)*piVar6)(1);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005d7090(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  float10 extraout_ST0;
  float10 extraout_ST1;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined1 local_14 [8];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c1ce0;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b3b730 != *(int *)(DAT_00b333c4 + 0x590)) {
    DAT_00b3b72c = 1;
  }
  iVar4 = FUN_00403520(0x10,1);
  if ((iVar4 == 0) && (iVar4 = FUN_00403520(0x10,0), iVar4 == 0)) {
    DAT_00b3b729 = '\x01';
  }
  else if ((DAT_00b3b729 != '\0') && (iVar4 = FUN_00403520(0x10,1), iVar4 != 0)) {
    cVar1 = FUN_0065d550(uVar3);
    iVar4 = DAT_00b333c4;
    if (cVar1 == '\0') {
      DAT_00b3b72b = '\x01';
    }
    else {
      *(undefined4 *)(DAT_00b333c4 + 0x590) = 0;
      *(undefined1 *)(iVar4 + 0x594) = 0;
    }
    FUN_005d6a10();
  }
  if (((DAT_00b3b728 != '\0') && (iVar4 = FUN_00589b70(0x3f4), iVar4 != 0)) &&
     (_DAT_00b3b724 = _DAT_00b3b724 - _DAT_00b33e9c, _DAT_00b3b724 <= 0.0)) {
    _DAT_00b3b724 = _DAT_00b3b724 + 1.0;
    cVar1 = FUN_0065d550(uVar3);
    if (cVar1 == '\0') {
      FUN_005d6a10();
      *unaff_FS_OFFSET = local_c;
      return 0;
    }
    iVar4 = FUN_005898f0();
    if ((iVar4 != 0) &&
       (iVar4 = FUN_009832e6(iVar4,0,&PTR_PTR_00b0a018,&PTR_PTR_00b132e0,0), iVar4 != 0)) {
      if (((*(char *)(iVar4 + 0x4c) != '\0') &&
          ((*(char *)(DAT_00b333c4 + 0x1dc) != '\0' && (DAT_00b3b72b == '\0')))) &&
         (DAT_00b14e88 == '\0')) {
        DAT_00b3a6d1 = 1;
      }
      FUN_004402f0();
      FUN_0065f770();
      FUN_0058ceb0(0xfb3,0xc7c34f80);
      FUN_0058ceb0(0xfb3,(float)*(int *)(DAT_00b333c4 + 0x590));
      FUN_0058ceb0(0xfb3,0);
      FUN_0058ceb0(0xfa1,0x3f800000);
      local_1c = 0;
      local_18 = 0;
      local_16 = 0;
      local_4 = 0;
      FUN_00402bd0();
      FUN_009828c0();
      cVar1 = FUN_009828c0();
      cVar2 = FUN_009828c0();
      puVar5 = &DAT_00a6cd08;
      if (extraout_ST0 < extraout_ST1 == (extraout_ST0 == extraout_ST1)) {
        puVar5 = &DAT_00a6cd04;
      }
      uVar6 = FUN_00402c90((int)cVar2,(int)cVar1,puVar5);
      FUN_00402e30(&local_1c,"%s %d:%02d %s",uVar6);
      FUN_0058ced0(0xfde,local_1c);
      uVar6 = FUN_00402e50(local_14);
      local_4._0_1_ = 1;
      FUN_004fb4c0(uVar6);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00402da0();
      FUN_0058ced0(0xfde,local_1c);
      local_4 = 0xffffffff;
      FUN_00402da0();
      *unaff_FS_OFFSET = local_c;
      return 1;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_005d73c0(void)

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
  puStack_8 = &LAB_009c01ce;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00584640(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a6d864;
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
  *(undefined1 *)(in_ECX + 0x1b) = 0;
  iVar2 = FUN_00401f00(0x44);
  local_4._0_1_ = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0041d420();
  }
  in_ECX[0x19] = 0;
  local_4._0_1_ = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1d] = uVar3;
  in_ECX[0x17] = 0;
  *(undefined1 *)(in_ECX + 0x18) = 0xff;
  in_ECX[0x16] = 0;
  iVar2 = FUN_00401f00(0x28);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (iVar2 != 0) {
    uVar3 = FUN_0057fe70();
    in_ECX[0x1c] = uVar3;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  in_ECX[0x1c] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005d7590(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x6c) == '\0') {
    FUN_0058ced0(0xfde,&DAT_00a2f7ec);
    *(undefined1 *)(in_ECX + 0x6c) = 1;
  }
  FUN_00588bd0(0xfd3);
  uVar1 = FUN_009828c0();
  FUN_0057d2d0(uVar1);
  FUN_00588bd0(0xfd4);
  uVar1 = FUN_009828c0();
  FUN_00583dd0(uVar1);
  FUN_0057dd90(1);
  return;
}



void FUN_005d7610(void)

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
  *in_ECX = &PTR_FUN_00a6d864;
  local_4 = 0;
  if (in_ECX[0x16] != 0) {
    FUN_004526e0(uVar2);
    FUN_00401f20(in_ECX[0x16]);
  }
  iVar1 = in_ECX[0x1c];
  if (iVar1 != 0) {
    FUN_0057feb0();
    FUN_00401f20(iVar1);
  }
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005d76a0(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x411);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_0057de50(0x15);
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
    return;
  }
  return;
}



void FUN_005d76f0(void)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  
  FUN_00582160(0,1);
  FUN_0057d7f0();
  FUN_0057d7f0();
  iVar1 = FUN_009828c0();
  fVar2 = (float10)FUN_00588cf0();
  *(float *)(in_ECX + 100) = (float)(fVar2 - (float10)iVar1);
  FUN_0057d7f0();
  FUN_0057d7f0();
  iVar1 = FUN_009828c0();
  fVar2 = (float10)FUN_00588cf0();
  *(float *)(in_ECX + 0x68) = (float)(fVar2 - (float10)iVar1);
  return;
}



void FUN_005d7780(int param_1,int param_2)

{
  int in_ECX;
  float10 fVar1;
  float10 fVar2;
  
  if ((param_2 != 0) && (((*(int **)(in_ECX + 0x58))[1] != 0 || (**(int **)(in_ECX + 0x58) != 0))))
  {
    if ((param_1 == 0xe) || (param_1 == 0xf)) {
      FUN_0058ceb0(0xfa7,0);
    }
    if ((param_1 < 1000) && (param_1 != 2)) {
      FUN_0058ceb0(0xfa1,0x3f800000);
      return;
    }
    *(undefined1 *)(in_ECX + 0x60) = 0xff;
    *(undefined4 *)(in_ECX + 0x5c) = 0;
    if (*(int *)(in_ECX + 0x34) != 0) {
      FUN_0057de50(4);
      fVar1 = (float10)FUN_00588d90();
      fVar2 = (float10)FUN_00588bd0(0xfbd);
      FUN_0058ceb0(0xfab,(float)((float10)(double)fVar1 - fVar2));
      fVar1 = (float10)FUN_00588bd0(0xfcb);
      FUN_0058ceb0(0xfcb,(float)(fVar1 - (float10)8.0));
      fVar1 = (float10)FUN_00588bd0(0xfca);
      FUN_0058ceb0(0xfca,(float)(fVar1 - (float10)8.0));
      fVar1 = (float10)FUN_00588c50();
      FUN_0058ceb0(0xfad,(float)(fVar1 + (float10)4.0));
      fVar1 = (float10)FUN_00588cf0();
      FUN_0058ceb0(0xfac,(float)(fVar1 + (float10)4.0));
      FUN_0058ceb0(0xfa1,0x40000000);
      *(int *)(in_ECX + 0x5c) = param_2;
    }
  }
  return;
}



void FUN_005d7950(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  if ((param_1 != 10) && (param_1 != 0xc)) {
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
    if ((float10)1 <= (float10)(double)((float10)iVar1 - fVar2) / fVar3) goto LAB_005d7b05;
  }
  FUN_0057d7f0();
  FUN_0057d7f0();
  iVar1 = FUN_009828c0();
  fVar2 = (float10)FUN_00588cf0();
  fVar3 = (float10)FUN_00588bd0(0xfca);
  if ((float10)0 <= (float10)(double)((float10)iVar1 - fVar2) / fVar3) {
    FUN_0057d7f0();
    FUN_0057d7f0();
    FUN_009828c0();
    FUN_00588cf0();
    FUN_00588bd0(0xfca);
  }
LAB_005d7b05:
  FUN_0058ceb0(0xfb3,0xce6e6b28);
  iVar1 = FUN_009828c0();
  FUN_0058ceb0(0xfb3,(float)iVar1);
  FUN_0058ceb0(0xfb3,0);
  return;
}



void FUN_005d7b80(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  undefined4 uVar4;
  
  if (param_1 < 1000) {
    if (param_1 < 3000) {
      return;
    }
  }
  else if (param_1 < 3000) {
    iVar1 = in_ECX[0xe];
    goto LAB_005d7bb7;
  }
  iVar1 = in_ECX[0x10];
LAB_005d7bb7:
  if (iVar1 != 0) {
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



void FUN_005d7c80(byte param_1)

{
  FUN_005d7610();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005d7ca0(int param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uchar *_Str1;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *in_ECX;
  uchar *_Str2;
  uint uVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  bool bVar10;
  float10 fVar11;
  uint local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c1feb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar1 = FUN_0057d2f0(uVar2);
  if (cVar1 == '\0') {
    if (param_1 != 2) goto LAB_005d7d12;
    FUN_005d7590();
    uVar3 = FUN_00580120();
    FUN_0058ced0(0xfde,uVar3);
    uVar3 = FUN_00438db0();
    FUN_004028d0(uVar3,0);
  }
  else {
    FUN_0057dd90(0);
    uVar3 = FUN_00580120();
    FUN_0058ced0(0xfde,uVar3);
    uVar3 = FUN_00438db0();
    FUN_004028d0(uVar3,0);
LAB_005d7d12:
    if (param_1 == 0xf) {
      if ((int *)in_ECX[0x1d] != (int *)0x0) {
        (**(code **)(*(int *)in_ECX[0x1d] + 0x10))(1);
      }
      FUN_005d76a0();
      goto LAB_005d811a;
    }
    if (param_1 == 0xe) {
      iVar4 = FUN_00438db0();
      uVar3 = DAT_00b389a0;
      if ((iVar4 != 0) &&
         ((*(int *)(in_ECX[0x1d] + 0x2c) != 0 ||
          (uVar3 = DAT_00b38998, *(int *)(in_ECX[0x1d] + 0x28) != 0)))) {
        bVar10 = false;
        piVar9 = (int *)(DAT_00b33a98 + 0x2c);
        do {
          if ((piVar9 == (int *)0x0) || (*piVar9 == 0)) {
            uVar3 = DAT_00b38990;
            if (!bVar10) {
              (*(code *)**(undefined4 **)(in_ECX[0x1d] + 0x24))(DAT_00b333c4);
              iVar4 = FUN_009828c0();
              iVar5 = FUN_005e4420();
              uVar3 = DAT_00b38db0;
              if (iVar4 <= iVar5) {
                FUN_004152c0(3,0);
                fVar11 = (float10)FUN_00413890(0);
                uVar3 = FUN_00548c50((float)fVar11);
                iVar6 = FUN_0056a360(uVar3);
                iVar5 = *DAT_00b333c4;
                uVar3 = FUN_00412f20();
                uVar3 = FUN_0041b770(uVar3);
                iVar5 = (**(code **)(iVar5 + 0x284))(uVar3);
                uVar3 = DAT_00b38988;
                if (iVar6 <= iVar5) {
                  (**(code **)(*DAT_00b333c4 + 0x2dc))(in_ECX[0x1d]);
                  uVar3 = 0;
                  piVar9 = DAT_00b333c4;
                  FUN_0041e6f0(DAT_00b333c4,iVar4,0);
                  FUN_00491700(piVar9,iVar4,uVar3);
                  FUN_0044d950(in_ECX[0x1d]);
                  FUN_00459800(in_ECX[0x1d]);
                  FUN_0057de50(0xb);
                  FUN_005d76a0();
                  FUN_0057acc0(DAT_00b389a8,0,1,0x40a00000);
                  goto LAB_005d811a;
                }
              }
            }
            break;
          }
          _Str2 = *(uchar **)(*piVar9 + 0x1c);
          if (_Str2 == (uchar *)0x0) {
            _Str2 = "";
          }
          _Str1 = *(uchar **)(in_ECX[0x1d] + 0x1c);
          if (_Str1 == (uchar *)0x0) {
            _Str1 = "";
          }
          iVar4 = __mbscmp(_Str1,_Str2);
          piVar9 = (int *)piVar9[1];
          bVar10 = iVar4 == 0;
          uVar3 = DAT_00b38990;
        } while (!bVar10);
      }
      FUN_00579c10(uVar3,0,1,DAT_00b38cf0,0);
      (**(code **)(*in_ECX + 0x14))(0xe,param_2);
      goto LAB_005d811a;
    }
  }
  fVar11 = (float10)FUN_00588bd0(0xfb4);
  if (fVar11 == (float10)10.0) {
    piVar9 = (int *)in_ECX[0x16];
    iVar4 = 0;
    FUN_00588bd0(0xfae);
    iVar5 = FUN_009828c0();
    for (; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[1]) {
      if (iVar4 == iVar5) {
        iVar4 = *piVar9;
        if (iVar4 != 0) {
          cVar1 = FUN_00414f00(*(undefined4 *)(iVar4 + 0x98),0x48);
          if ((cVar1 == '\0') || ((*(uint *)(iVar4 + 0x58) & 0x180000) != 0)) {
            iVar5 = FUN_00401f00(0x24);
            local_4 = 0;
            if (iVar5 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = FUN_004149d0(iVar4);
            }
            local_4 = 0xffffffff;
            if ((*(uint *)(iVar4 + 0x58) >> 0x13 & 1) == 0) {
              if ((*(uint *)(iVar4 + 0x58) >> 0x14 & 1) != 0) {
                *(undefined4 *)(iVar5 + 0x14) = 0;
              }
            }
            else {
              *(undefined4 *)(iVar5 + 0x14) = 0xc;
            }
            FUN_00413710(iVar4);
            FUN_005a08e0(iVar5,1);
            if (iVar5 != 0) {
              FUN_00413bb0();
              FUN_00401f20(iVar5);
            }
          }
          else {
            FUN_00579c10(DAT_00b389f8,0,1,DAT_00b38cf0,0);
          }
        }
        break;
      }
      iVar4 = iVar4 + 1;
    }
  }
  else if ((param_1 == 3000) && (in_ECX[0x1d] != 0)) {
    uVar2 = 0;
    piVar9 = (int *)(in_ECX[0x1d] + 0x28);
    while (uVar8 = 0, piVar7 = piVar9, piVar9 != (int *)0x0) {
      do {
        if (*piVar7 != 0) {
          uVar8 = uVar8 + 1;
        }
        piVar7 = (int *)piVar7[1];
      } while (piVar7 != (int *)0x0);
      if (uVar8 <= uVar2) break;
      fVar11 = (float10)FUN_00588bd0(0xfb1);
      local_14 = (uint)(longlong)ROUND(fVar11);
      if ((uVar2 == local_14) && (iVar4 = FUN_00414b10(uVar2), iVar4 != 0)) {
        FUN_005a08e0(iVar4,0);
        break;
      }
      uVar2 = uVar2 + 1;
    }
  }
LAB_005d811a:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005d8130(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0057d2f0();
  if (cVar1 != '\0') {
    FUN_0057dde0();
    uVar2 = FUN_00580120();
    FUN_0058ced0(0xfde,uVar2);
    uVar2 = FUN_00438db0();
    FUN_004028d0(uVar2,0);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005d8180(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  undefined1 auStack_11c [3];
  byte local_119;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_11c;
  local_110 = in_ECX;
  FUN_005893f0();
  local_119 = 0;
  if (*(int *)(in_ECX + 0x74) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(*(int *)(in_ECX + 0x74) + 0x28);
  }
  do {
    if ((piVar3 == (int *)0x0) || (iVar7 = *piVar3, iVar7 == 0)) break;
    piVar3 = (int *)piVar3[1];
    uVar6 = *(uint *)(*(int *)(iVar7 + 0x1c) + 0x58) >> 0x12;
    local_119 = (byte)uVar6 & 1;
  } while ((uVar6 & 1) == 0);
  piVar3 = *(int **)(in_ECX + 0x58);
  iVar7 = 0;
  local_118 = 0;
  local_114 = 0;
  for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    iVar1 = *piVar3;
    if ((((iVar1 != 0) && (cVar2 = FUN_00414f00(*(undefined4 *)(iVar1 + 0x98),0x48), cVar2 == '\0'))
        && ((local_119 == 0 || ((*(uint *)(iVar1 + 0x58) >> 0x12 & 1) == 0)))) &&
       (iVar4 = FUN_00585410(*(undefined4 *)(in_ECX + 0x2c),"known_effect_template",0),
       in_ECX = local_110, iVar4 != 0)) {
      FUN_0058ceb0(0xfae,(float)local_118);
      local_10c = iVar7 + 1000;
      FUN_0058ceb0(0xfa8,(float)local_10c);
      FUN_0058ceb0(0xfaa,(float)local_114);
      puVar5 = *(undefined1 **)(iVar1 + 0x3c);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_00a2f7ec;
      }
      FUN_0058ced0(0xfb1,puVar5);
      puVar5 = *(undefined1 **)(iVar1 + 0x3c);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_00a2f7ec;
      }
      FUN_004028d0(puVar5,0);
      puVar5 = *(undefined1 **)(iVar1 + 0x48);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_00a2f7ec;
      }
      _sprintf(local_108,"%s\\%s","Icons",puVar5);
      FUN_0058ced0(0xfaf,local_108);
      FUN_0058ceb0(0xfb2,(float)*(int *)(iVar1 + 0x98));
      FUN_0058ceb0(0xfb4,0x41200000);
      FUN_0058ceb0(0xfc9,0x40000000);
      iVar7 = iVar7 + 1;
      in_ECX = local_110;
      local_114 = iVar7;
    }
    local_118 = local_118 + 1;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d8370(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  float10 fVar6;
  char *pcStack_14c;
  uint *local_148;
  uint uStack_144;
  uint local_130;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  float local_128;
  int local_124;
  undefined4 local_120;
  undefined2 local_11c;
  undefined2 local_11a;
  undefined1 *local_118;
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c2026;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_130;
  uStack_144 = DAT_00b30aac ^ (uint)&stack0xfffffec0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_148 = (uint *)0x5d83b5;
  FUN_005893f0();
  if (*(int *)(in_ECX + 0x74) != 0) {
    local_128 = (float)(*(int *)(in_ECX + 0x74) + 0x18);
    local_124 = 0;
    local_130 = 0;
    while( true ) {
      piVar1 = (int *)((int)local_128 + 0x10);
      uVar5 = 0;
      if (piVar1 == (int *)0x0) break;
      do {
        if (*piVar1 != 0) {
          uVar5 = uVar5 + 1;
        }
        piVar1 = (int *)piVar1[1];
      } while (piVar1 != (int *)0x0);
      if (uVar5 <= local_130) break;
      pcStack_14c = (char *)0x5d83ff;
      local_148 = (uint *)local_130;
      iVar2 = FUN_00414b10();
      if (iVar2 != 0) {
        local_148 = (uint *)0x0;
        pcStack_14c = "added_effect_template";
        iVar3 = FUN_00585410(*(undefined4 *)(in_ECX + 0x30));
        if (iVar3 != 0) {
          local_118 = (undefined1 *)&pcStack_14c;
          FUN_004139f0(&pcStack_14c);
          FUN_0058a020();
          local_148 = *(uint **)(*(int *)(iVar2 + 0x1c) + 0x48);
          if (local_148 == (uint *)0x0) {
            local_148 = (uint *)&DAT_00a2f7ec;
          }
          pcStack_14c = "Icons";
          _sprintf(local_114,"%s\\%s");
          local_148 = (uint *)0x453b8000;
          pcStack_14c = (char *)0xfa8;
          FUN_0058ceb0();
          local_148 = (uint *)(float)local_124;
          pcStack_14c = (char *)0xfae;
          FUN_0058ceb0();
          local_124 = local_124 + 1;
          local_148 = (uint *)local_114;
          pcStack_14c = (char *)0xfaf;
          FUN_0058ced0();
          if (*(int *)(in_ECX + 0x74) == 0) {
            pcStack_14c = (char *)0x0;
          }
          else {
            pcStack_14c = (char *)(*(int *)(in_ECX + 0x74) + 0x18);
          }
          local_148 = (uint *)0x3f800000;
          puVar4 = (undefined4 *)FUN_004145d0(&local_120);
          local_148 = (uint *)*puVar4;
          pcStack_14c = (char *)0xfb0;
          local_4 = 0;
          FUN_0058ced0();
          local_148 = (uint *)local_120;
          local_4 = 0xffffffff;
          pcStack_14c = (char *)0x5d84ee;
          FUN_00401f20();
          local_148 = (uint *)(float)(int)local_130;
          local_120 = 0;
          local_11a = 0;
          local_11c = 0;
          if ((int)local_130 < 0) {
            local_148 = (uint *)((float)local_148 + 4.2949673e+09);
          }
          pcStack_14c = (char *)0xfb1;
          FUN_0058ceb0();
        }
      }
      local_130 = local_130 + 1;
    }
    local_148 = (uint *)0x0;
    pcStack_14c = (char *)0x3;
    iVar2 = FUN_004152c0();
    if (iVar2 != 0) {
      local_148 = (uint *)0x0;
      pcStack_14c = (char *)0x5d8551;
      fVar6 = (float10)(*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x74) + 0x24))();
      local_148 = (uint *)(float)fVar6;
      pcStack_14c = (char *)0x5d855a;
      pcStack_14c = (char *)FUN_00548c50();
      iVar2 = FUN_0056a360();
      if (iVar2 < 1) {
        local_148 = (uint *)0x3f800000;
      }
      else {
        local_148 = &local_130;
        pcStack_14c = (char *)0x5d8577;
        puVar4 = (undefined4 *)FUN_00415390();
        local_148 = (uint *)*puVar4;
        pcStack_14c = (char *)0xfb1;
        local_4 = 1;
        FUN_0058ced0();
        local_148 = (uint *)local_130;
        local_4 = 0xffffffff;
        pcStack_14c = (char *)0x5d85a7;
        FUN_00401f20();
        local_148 = (uint *)0x40000000;
        local_130 = 0;
        uStack_12a = 0;
        uStack_12c = 0;
      }
      pcStack_14c = (char *)0xfb4;
      FUN_0058ceb0();
    }
    local_148 = (uint *)DAT_00b333c4;
    pcStack_14c = (char *)0x5d85e6;
    fVar6 = (float10)(*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x74) + 0x24))();
    pcStack_14c = (char *)(float)fVar6;
    FUN_0058ceb0(0xfb2);
    pcStack_14c = DAT_00b333c4;
    fVar6 = (float10)(*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x74) + 0x24))();
    local_148 = (uint *)(float)(fVar6 * (float10)_DAT_00b37fe0);
    pcStack_14c = (char *)0xfb3;
    local_128 = (float)local_148;
    FUN_0058ceb0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_005d8660(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0057d2f0();
  if (cVar1 != '\0') {
    FUN_0057ff50(param_1);
    uVar2 = FUN_00580120();
    FUN_0058ced0(0xfde,uVar2);
    uVar2 = FUN_00438db0();
    FUN_004028d0(uVar2,0);
    return 1;
  }
  return 0;
}



void FUN_005d8900(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  *in_ECX = &PTR_FUN_00a6d8cc;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  *(undefined1 *)(in_ECX + 0x17) = 0;
  in_ECX[0x13] = 0;
  return;
}



void FUN_005d8950(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6d8cc;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005d8980(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00589b70(0x40d);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_006ac3d0();
    iVar2 = FUN_00589b70(0x3f1);
    if (iVar2 != 0) {
      iVar2 = FUN_005898f0();
      FUN_0058fba0(0);
      FUN_0058ceb0(0xfa1,0x40000000);
      *(undefined1 *)(iVar2 + 0x96) = 1;
      if (*(char *)(iVar1 + 0x5c) != '\0') {
        FUN_005ef930();
        FUN_0059e030();
      }
    }
    FUN_00584740();
    FUN_005b3e90();
    return;
  }
  return;
}



void FUN_005d8a40(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  int local_14;
  
  if (param_2 != 0) {
    if ((param_1 == 6) || (param_1 == 2)) {
      FUN_0058ceb0(0xfa7,0);
      return;
    }
    if ((param_1 < 1000) && ((param_1 < 9 || (0xb < param_1)))) {
      FUN_0058ceb0(0xfa1,0x3f800000);
      return;
    }
    *(undefined4 *)(in_ECX + 0x48) = 0;
    if (*(int *)(in_ECX + 0x44) != 0) {
      FUN_0057de50(4);
      FUN_00588bd0(0xfe0);
      iVar2 = FUN_009828c0();
      fVar5 = (float10)FUN_00588d90();
      fVar6 = (float10)FUN_00588bd0(0xfbd);
      FUN_0058ceb0(0xfab,(float)((float10)(double)fVar5 - fVar6));
      fVar5 = (float10)FUN_00588bd0(0xfcb);
      FUN_0058ceb0(0xfcb,(float)(fVar5 - (float10)(iVar2 * 2)));
      fVar5 = (float10)FUN_00588bd0(0xfca);
      FUN_0058ceb0(0xfca,(float)(fVar5 - (float10)(iVar2 * 2)));
      fVar5 = (float10)FUN_00588c50();
      FUN_0058ceb0(0xfad,(float)(fVar5 + (float10)iVar2));
      fVar5 = (float10)FUN_00588cf0();
      FUN_0058ceb0(0xfac,(float)(fVar5 + (float10)iVar2));
      FUN_0058ceb0(0xfa1,0x40000000);
      *(int *)(in_ECX + 0x48) = param_2;
      if (999 < param_1) {
        param_2 = 1000;
        piVar4 = (int *)(in_ECX + 0x60);
        FUN_005e02e0(0);
        local_14 = 0;
        if (piVar4 != (int *)0x0) {
          do {
            iVar2 = *piVar4;
            if (iVar2 == 0) break;
            iVar3 = (**(code **)(*(int *)(iVar2 + 0x18) + 0x18))();
            if ((iVar3 == 0) && (cVar1 = FUN_00446c30(iVar2), cVar1 == '\0')) {
              if (param_2 == param_1) {
                local_14 = iVar2;
              }
              param_2 = param_2 + 1;
            }
            piVar4 = (int *)piVar4[1];
          } while (piVar4 != (int *)0x0);
          if (local_14 != 0) {
            fVar5 = (float10)FUN_00588bd0(0xfb8);
            fVar6 = (float10)FUN_00588d90();
            FUN_00582160(0,1);
            fVar7 = (float10)FUN_0057d7f0();
            fVar8 = (float10)FUN_00588bd0(0xfba);
            fVar6 = (float10)FUN_00588cf0((float)((float10)(double)fVar7 - fVar8),0,(float)fVar6);
            FUN_0057bb20(local_14 + 0x18,(float)fVar5,(float)fVar6);
            return;
          }
        }
        FUN_004a7a60("Spell item index did was not in saved list.");
      }
    }
  }
  return;
}



void FUN_005d8d10(int param_1)

{
  FUN_0057bd80();
  if ((param_1 == 6) || (param_1 == 2)) {
    FUN_0058ceb0(0xfa7,0x437f0000);
  }
  FUN_0058ceb0(0xfa1,0x3f800000);
  return;
}



void FUN_005d8d60(float param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float10 extraout_ST1;
  
  if (param_1 == 7.00649e-45) {
    FUN_00582160(0,1);
    fVar2 = (float10)FUN_00588bd0(0xfb0);
    fVar3 = (float10)FUN_00588bd0(0xfaf);
    FUN_0057d7f0();
    FUN_0057d7f0();
    iVar1 = FUN_009828c0();
    fVar4 = (float10)FUN_00588cf0();
    fVar5 = (float10)FUN_00588bd0(0xfca);
    param_1 = (float)((float10)(double)((float10)iVar1 - fVar4) / fVar5);
    if (param_1 < 1.0) {
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
    }
    else {
      param_1 = 1.0;
    }
    fVar2 = (float10)(((float)fVar2 - (float)fVar3) * param_1);
    iVar1 = FUN_009828c0();
    fVar4 = (float10)iVar1;
    if (extraout_ST0 - fVar4 < (float10)0.0) {
      fVar4 = fVar4 - (float10)1.0;
    }
    if (fVar2 - (float10)(float)fVar4 < (float10)0.5 ==
        (fVar2 - (float10)(float)fVar4 == (float10)0.5)) {
      fVar2 = (float10)FUN_00404f70((float)extraout_ST1);
      fVar2 = fVar2 + (float10)1.0 + (float10)(float)fVar3;
    }
    else {
      fVar2 = (float10)FUN_00404f70((float)extraout_ST1);
    }
    FUN_0058ceb0(0xfb3,0xce6e6b28);
    FUN_0058ceb0(0xfb3,(float)fVar2);
    FUN_0058ceb0(0xfb3,0);
  }
  return;
}



void FUN_005d8f00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  undefined4 uVar4;
  
  if (in_ECX[0xe] != 0) {
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



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005d90e0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  float fVar10;
  int in_ECX;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *unaff_FS_OFFSET;
  float10 fVar14;
  float fStack_134;
  undefined4 uStack_130;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  int local_128;
  int iStack_124;
  int *piStack_120;
  float fStack_11c;
  undefined4 uStack_118;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c2076;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&fStack_134;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffebc;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x2c) + 0x34);
  local_128 = in_ECX;
  while (puVar2 != (undefined4 *)0x0) {
    piVar13 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    if ((undefined4 *)*piVar13 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar13)(1,uVar5);
    }
  }
  FUN_00573880();
  iVar6 = FUN_005e02e0(0);
  uStack_118 = *(undefined4 *)(in_ECX + 0x2c);
  iVar7 = *(int *)(in_ECX + 100);
  piVar13 = (int *)(in_ECX + 0x60);
  iStack_124 = 0;
  while (iVar7 != 0) {
    iVar7 = *(int *)(*(int *)(in_ECX + 100) + 4);
    FUN_00401f20(*(int *)(in_ECX + 100));
    *(int *)(in_ECX + 100) = iVar7;
  }
  *piVar13 = 0;
  iVar7 = FUN_005e02e0(0);
  piVar1 = (int *)(iVar7 + 0x58);
  do {
    if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
      iVar7 = 0;
      for (piVar1 = piVar13; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        if (*piVar1 != 0) {
          iVar7 = iVar7 + 1;
        }
      }
      piVar1 = piVar13;
      if (iVar7 + -1 < *(int *)(local_128 + 0x4c)) {
        *(int *)(local_128 + 0x4c) = iVar7 + -1;
      }
      while ((piStack_120 = piVar13, piVar1 != (int *)0x0 && (iVar7 = *piVar13, iVar7 != 0))) {
        uStack_130 = 0;
        uStack_12c = 0;
        uStack_12a = 0;
        FUN_004028d0("spell_item_template",0);
        uStack_4 = 0;
        iVar8 = FUN_00585410(uStack_118,uStack_130,0);
        iVar6 = iStack_124;
        if (iVar8 != 0) {
          if (iStack_124 == *(int *)(local_128 + 0x4c)) {
            FUN_00582160(0,1);
            iVar8 = FUN_00582160(0,1);
            *(int *)(iVar8 + 0x8c) = *(int *)(iVar8 + 0x8c) + 1;
            fVar10 = (float)*(int *)(iVar8 + 0x8c);
            if (*(int *)(iVar8 + 0x8c) < 0) {
              fVar10 = fVar10 + 4.2949673e+09;
            }
            FUN_0058ceb0(0xff0,fVar10);
          }
          FUN_0058ceb0(0xfae,(float)iStack_124);
          fStack_134 = (float)(iVar6 + 1000);
          FUN_0058ceb0(0xfa8,(float)(int)fStack_134);
          iVar6 = FUN_004152c0(3,0);
          puVar9 = *(undefined1 **)(*(int *)(iVar6 + 0x1c) + 0x48);
          if (puVar9 == (undefined1 *)0x0) {
            puVar9 = &DAT_00a2f7ec;
          }
          _sprintf(acStack_114,"%s\\%s","Icons",puVar9);
          FUN_0058ced0(0xfaf,acStack_114);
          puVar9 = *(undefined1 **)(iVar7 + 0x1c);
          if (puVar9 == (undefined1 *)0x0) {
            puVar9 = &DAT_00a2f7ec;
          }
          _sprintf(acStack_114,"%s_%d",puVar9,iStack_124);
          FUN_004028d0(acStack_114,0);
          puVar9 = *(undefined1 **)(iVar7 + 0x1c);
          if (puVar9 == (undefined1 *)0x0) {
            puVar9 = &DAT_00a2f7ec;
          }
          FUN_0058ced0(0xfb1,puVar9);
          (*(code *)**(undefined4 **)(iVar7 + 0x24))(DAT_00b333c4);
          iVar7 = FUN_009828c0();
          fStack_134 = (float)iVar7;
          FUN_0058ceb0(0xfb3,fStack_134);
          fVar10 = (float)FUN_009828c0();
          fStack_11c = fVar10;
          fVar14 = (float10)FUN_005e1200(*(undefined4 *)(local_128 + 0x50));
          fStack_134 = (float)fVar14 - (float)*(int *)(DAT_00b333c4 + 0x11c) * 0.01;
          fStack_134 = (float)FUN_009828c0();
          if ((int)fStack_134 < (int)fVar10) {
            fStack_134 = fVar10;
          }
          FUN_0058ceb0(0xfb7,(float)(int)fStack_134);
          piVar13 = piStack_120;
        }
        piVar1 = (int *)piVar13[1];
        iStack_124 = iStack_124 + 1;
        uStack_4 = 0xffffffff;
        piStack_120 = piVar1;
        FUN_00401f20(uStack_130);
        piVar13 = piStack_120;
      }
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_12a = 0;
      uStack_4 = 1;
      iVar6 = FUN_005e4420();
      iVar7 = iVar6 / 1000000000;
      iVar11 = iVar6 / 1000000 + iVar7 * -1000;
      iVar12 = iVar7 * 1000 + iVar11;
      iVar8 = iVar6 / 1000 + iVar12 * -1000;
      iVar12 = iVar6 + (iVar12 * 1000 + iVar8) * -1000;
      if (iVar7 == 0) {
        if (iVar11 == 0) {
          if (iVar8 < 10) {
            FUN_00402e30(&uStack_130,&DAT_00a2f860,iVar6);
          }
          else {
            FUN_00402e30(&uStack_130,"%d,%03d",iVar8,iVar12);
          }
        }
        else {
          FUN_00402e30(&uStack_130,"%d,%03d,%03d",iVar11,iVar8,iVar12);
        }
      }
      else {
        FUN_00402e30(&uStack_130,"%d,%03d,%03d,%03d",iVar7,iVar11,iVar8,iVar12);
      }
      uVar4 = uStack_130;
      FUN_0058ced0(0xfde,uStack_130);
      FUN_00401f20(uVar4);
      *unaff_FS_OFFSET = local_c;
      return;
    }
    iVar7 = (**(code **)(*(int *)(*piVar1 + 0x18) + 0x18))();
    if (iVar7 == 0) {
      for (piVar3 = (int *)(iVar6 + 0x58); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
        if (*piVar3 == *piVar1) goto LAB_005d91dc;
      }
      FUN_00416650(*piVar1,&LAB_005d8fd0);
    }
LAB_005d91dc:
    piVar1 = (int *)piVar1[1];
  } while( true );
}



undefined4 FUN_005d9590(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  
  puVar1 = (undefined4 *)FUN_00589b70(0x40d);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  FUN_00582160(0,1);
  fVar6 = (float10)thunk_FUN_00584980();
  uVar2 = FUN_00590420("Data\\Menus\\dialog\\spell_purchase.xml");
  piVar3 = (int *)FUN_005898f0();
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  iVar4 = (**(code **)(*piVar3 + 0x34))();
  if (iVar4 != 0x40d) {
    if (piVar3[1] == 0) {
      return 0;
    }
    (**(code **)*piVar3)(1);
    return 0;
  }
  uVar5 = FUN_009832e6(uVar2,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar5);
  iVar4 = FUN_009832e6(piVar3,0,&PTR_PTR_00b0a018,&PTR_PTR_00b143cc,0);
  if (((((*(int *)(iVar4 + 0x28) != 0) && (*(int *)(iVar4 + 0x2c) != 0)) &&
       (*(int *)(iVar4 + 0x30) != 0)) &&
      ((*(int *)(iVar4 + 0x34) != 0 && (*(int *)(iVar4 + 0x38) != 0)))) &&
     ((*(int *)(iVar4 + 0x3c) != 0 && (*(int *)(iVar4 + 0x40) != 0)))) {
    fVar7 = (float10)FUN_00588bd0(0xfa5);
    if ((fVar7 == (float10)6006.0) ||
       (fVar7 = (float10)FUN_00588bd0(0xfa5), fVar7 == (float10)102.0)) {
      FUN_0058ceb0(0xfab,(float)fVar6);
    }
    *(int **)(iVar4 + 0x50) = param_1;
    FUN_005d90e0();
    FUN_00585190(0);
    uVar5 = FUN_0052ed50(5,1);
    FUN_006ac3d0();
    (**(code **)(*param_1 + 0xdc))(uVar5,DAT_00b333c4,1,1,0);
    return uVar2;
  }
  FUN_004a7a60("Spell Purchase Creation Failed... Are your menu and art resources up to date?");
  return 0;
}



void FUN_005d9ad0(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[0x17] = 0;
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
  *in_ECX = &PTR_FUN_00a6d9dc;
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
  return;
}



undefined1 FUN_005d9b80(void)

{
  int in_ECX;
  
  if (((((*(int *)(in_ECX + 0x28) != 0) && (*(int *)(in_ECX + 0x2c) != 0)) &&
       (*(int *)(in_ECX + 0x30) != 0)) &&
      (((*(int *)(in_ECX + 0x34) != 0 && (*(int *)(in_ECX + 0x38) != 0)) &&
       ((*(int *)(in_ECX + 0x3c) != 0 &&
        ((*(int *)(in_ECX + 0x40) != 0 && (*(int *)(in_ECX + 0x44) != 0)))))))) &&
     ((*(int *)(in_ECX + 0x48) != 0 &&
      ((((*(int *)(in_ECX + 0x4c) != 0 && (*(int *)(in_ECX + 0x50) != 0)) &&
        (*(int *)(in_ECX + 0x54) != 0)) && (*(int *)(in_ECX + 0x58) != 0)))))) {
    return 1;
  }
  return 0;
}



void FUN_005d9cb0(void)

{
  float10 fVar1;
  float10 fVar2;
  float local_4;
  
  fVar1 = (float10)FUN_0065fd00();
  fVar2 = (float10)1;
  if (fVar1 < fVar2) {
    fVar2 = (float10)FUN_0065fd00();
  }
  local_4 = (float)fVar2;
  if (0.0 <= local_4) {
    fVar2 = (float10)FUN_0065fd00();
    if ((float10)1 <= fVar2) {
      local_4 = (float)(float10)1;
    }
    else {
      fVar2 = (float10)FUN_0065fd00();
      local_4 = (float)fVar2;
    }
  }
  else {
    local_4 = 0.0;
  }
  FUN_0058ceb0(0xfaf,0x3f800000);
  FUN_0058ceb0(0xfb0,local_4);
  return;
}



void FUN_005d9d70(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6d9dc;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005d9da0(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (((param_1 != 0x21) && (param_1 != 0x2b)) && (param_1 != 0x35)) {
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
    if ((float10)1 <= (float10)(double)((float10)iVar1 - fVar2) / fVar3) goto LAB_005d9f64;
  }
  FUN_0057d7f0();
  FUN_0057d7f0();
  iVar1 = FUN_009828c0();
  fVar2 = (float10)FUN_00588cf0();
  fVar3 = (float10)FUN_00588bd0(0xfca);
  if ((float10)0 <= (float10)(double)((float10)iVar1 - fVar2) / fVar3) {
    FUN_0057d7f0();
    FUN_0057d7f0();
    FUN_009828c0();
    FUN_00588cf0();
    FUN_00588bd0(0xfca);
  }
LAB_005d9f64:
  FUN_0058ceb0(0xfb3,0xce6e6b28);
  iVar1 = FUN_009828c0();
  FUN_0058ceb0(0xfb3,(float)iVar1);
  FUN_0058ceb0(0xfb3,0);
  return;
}



void FUN_005da050(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  undefined4 uVar4;
  
  fVar3 = (float10)FUN_00588bd0(0xfa1);
  if (fVar3 == (float10)1.0) {
    fVar3 = (float10)FUN_00588bd0(0xfa1);
    if (fVar3 == (float10)1.0) {
      fVar3 = (float10)FUN_00588bd0(0xfa1);
      if (fVar3 == (float10)1.0) {
        return;
      }
      iVar1 = in_ECX[0x14];
    }
    else {
      iVar1 = in_ECX[0x12];
    }
  }
  else {
    iVar1 = in_ECX[0x10];
  }
  if (iVar1 != 0) {
    FUN_00588bd0(0xfb5);
    iVar1 = FUN_009828c0();
    FUN_00582160(0,1);
    iVar2 = FUN_009828c0();
    iVar2 = (int)((ulonglong)((longlong)iVar2 * 0x77777777) >> 0x20) - iVar2;
    FUN_0058ceb0(0xfb3,(float)((iVar2 >> 6) - (iVar2 >> 0x1f)));
    FUN_0058ceb0(0xfb3,0);
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



void FUN_005da1a0(int param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  float10 fVar11;
  int local_c;
  int local_8;
  
  iVar7 = 0;
  iVar8 = 0;
  local_8 = 0;
  local_c = 0;
  if (param_1 == -1) {
    do {
      uVar5 = FUN_00565be0(2,iVar7);
      iVar8 = FUN_005e3320();
      if (iVar8 != 0) {
        FUN_005e3320(uVar5);
        cVar4 = FUN_0051c090(uVar5);
        if (cVar4 != '\0') {
          local_c = local_c + 1;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x15);
    FUN_0058ceb0(0xfb1,(float)local_c);
    if (0 < local_c) {
      local_c = local_c + 1;
    }
  }
  else {
    local_c = iVar8;
    if (param_1 != 8) goto LAB_005da2c5;
  }
  fVar11 = (float10)FUN_0065d270(0,8);
  fVar2 = (float)fVar11;
  iVar8 = (**(code **)(*DAT_00b333c4 + 0x284))(8);
  FUN_0058ceb0(0xfb4,(float)iVar8);
  fVar3 = fVar2;
  if (fVar2 < 0.0) {
    fVar3 = 0.0;
  }
  iVar8 = FUN_005f1910(8);
  FUN_0058ceb0(0xfb5,(float)iVar8 + fVar3);
  FUN_0058ceb0(0xfba,fVar2);
  iVar8 = local_c;
LAB_005da2c5:
  if ((param_1 == -1) || (param_1 == 9)) {
    fVar11 = (float10)FUN_0065d270(0,9);
    fVar2 = (float)fVar11;
    iVar7 = (**(code **)(*DAT_00b333c4 + 0x284))(9);
    FUN_0058ceb0(0xfb6,(float)iVar7);
    fVar3 = fVar2;
    if (fVar2 < 0.0) {
      fVar3 = 0.0;
    }
    iVar7 = FUN_005f1910(9);
    FUN_0058ceb0(0xfb7,(float)iVar7 + fVar3);
    FUN_0058ceb0(0xfbb,fVar2);
  }
  if ((param_1 == -1) || (param_1 == 10)) {
    fVar11 = (float10)FUN_0065d270(0,10);
    fVar2 = (float)fVar11;
    iVar7 = (**(code **)(*DAT_00b333c4 + 0x284))(10);
    FUN_0058ceb0(0xfb8,(float)iVar7);
    fVar3 = fVar2;
    if (fVar2 < 0.0) {
      fVar3 = 0.0;
    }
    iVar7 = FUN_005f1910(10);
    FUN_0058ceb0(0xfb9,(float)iVar7 + fVar3);
    FUN_0058ceb0(0xfbc,fVar2);
  }
  if ((param_1 == -1) || (param_1 == 0)) {
    iVar7 = (**(code **)(*DAT_00b333c4 + 0x284))(0);
    FUN_0058ceb0(0xfaf,(float)iVar7);
    iVar7 = FUN_005f1910(0);
    FUN_0058ceb0(0xfb7,(float)iVar7);
  }
  if ((param_1 == -1) || (param_1 == 1)) {
    iVar7 = (**(code **)(*DAT_00b333c4 + 0x284))(1);
    FUN_0058ceb0(0xfb0,(float)iVar7);
    iVar7 = FUN_005f1910(1);
    FUN_0058ceb0(0xfb8,(float)iVar7);
  }
  if ((param_1 == -1) || (param_1 == 2)) {
    iVar7 = (**(code **)(*DAT_00b333c4 + 0x284))(2);
    FUN_0058ceb0(0xfb1,(float)iVar7);
    iVar7 = FUN_005f1910(2);
    FUN_0058ceb0(0xfb9,(float)iVar7);
  }
  if ((param_1 == -1) || (param_1 == 3)) {
    iVar7 = (**(code **)(*DAT_00b333c4 + 0x284))(3);
    FUN_0058ceb0(0xfb2,(float)iVar7);
    iVar7 = FUN_005f1910(3);
    FUN_0058ceb0(0xfba,(float)iVar7);
  }
  if ((param_1 == -1) || (param_1 == 4)) {
    iVar7 = (**(code **)(*DAT_00b333c4 + 0x284))(4);
    FUN_0058ceb0(0xfb3,(float)iVar7);
    iVar7 = FUN_005f1910(4);
    FUN_0058ceb0(0xfbb,(float)iVar7);
  }
  if ((param_1 == -1) || (param_1 == 5)) {
    iVar7 = (**(code **)(*DAT_00b333c4 + 0x284))(5);
    FUN_0058ceb0(0xfb4,(float)iVar7);
    iVar7 = FUN_005f1910(5);
    FUN_0058ceb0(0xfbc,(float)iVar7);
  }
  if ((param_1 == -1) || (param_1 == 6)) {
    iVar7 = (**(code **)(*DAT_00b333c4 + 0x284))(6);
    FUN_0058ceb0(0xfb5,(float)iVar7);
    iVar7 = FUN_005f1910(6);
    FUN_0058ceb0(0xfbd,(float)iVar7);
  }
  if ((param_1 == -1) || (param_1 == 7)) {
    iVar7 = (**(code **)(*DAT_00b333c4 + 0x284))(7);
    FUN_0058ceb0(0xfb6,(float)iVar7);
    iVar7 = FUN_005f1910(7);
    FUN_0058ceb0(0xfbe,(float)iVar7);
  }
  uVar1 = param_1 - 0xc;
  if (((uVar1 < 0x15) && ((int)uVar1 < 0x15)) && (*(int *)(in_ECX + 0x60 + uVar1 * 4) != 0)) {
    FUN_0058ceb0(0xfaf,0x3f800000);
    fVar11 = (float10)FUN_0065fca0(param_1);
    FUN_0058ceb0(0xfb0,(float)fVar11);
    iVar7 = (**(code **)(*DAT_00b333c4 + 0x284))(param_1);
    FUN_0058ceb0(0xfb1,(float)iVar7);
    iVar7 = FUN_005f1910(param_1);
    FUN_0058ceb0(0xfb5,(float)iVar7);
  }
  if (param_1 == -1) {
    iVar7 = 0xc;
    piVar10 = (int *)(in_ECX + 0x60);
    do {
      iVar9 = iVar8;
      if ((iVar7 + -0xc < 0x15) && (*piVar10 != 0)) {
        FUN_0058ceb0(0xfaf,0x3f800000);
        fVar11 = (float10)FUN_0065fca0(iVar7);
        FUN_0058ceb0(0xfb0,(float)fVar11);
        iVar6 = (**(code **)(*DAT_00b333c4 + 0x284))(iVar7);
        FUN_0058ceb0(0xfb1,(float)iVar6);
        iVar6 = FUN_005f1910(iVar7);
        FUN_0058ceb0(0xfb5,(float)iVar6);
        iVar6 = FUN_005e3320();
        if (iVar6 == 0) {
LAB_005da884:
          iVar9 = iVar8 + 1;
          param_1 = iVar8;
        }
        else {
          iVar6 = iVar7;
          FUN_005e3320(iVar7);
          cVar4 = FUN_0051c090(iVar6);
          if (cVar4 == '\0') goto LAB_005da884;
          param_1 = local_8;
          local_8 = local_8 + 1;
        }
        FUN_0058ceb0(0xfaa,(float)param_1);
      }
      iVar7 = iVar7 + 1;
      piVar10 = piVar10 + 1;
      iVar8 = iVar9;
    } while (iVar7 < 0x22);
  }
  return;
}



void FUN_005da8c0(undefined4 param_1,int param_2,int param_3)

{
  float fVar1;
  int in_ECX;
  
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)param_3;
  if (param_3 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,param_1);
  fVar1 = (float)param_2;
  if (param_2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  return;
}



void FUN_005da930(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  undefined **ppuVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  undefined4 uVar12;
  int local_34;
  int local_30;
  int local_24;
  int local_1c;
  int local_18;
  int local_14 [5];
  
  FUN_00588bd0(0xfb5);
  iVar3 = FUN_009828c0();
  FUN_005893f0();
  uVar6 = DAT_00b383e8;
  uVar12 = 0;
  uVar4 = FUN_00402c00(0);
  FUN_005da8c0(uVar6,uVar4,uVar12);
  iVar9 = 0;
  local_34 = 0;
  iVar7 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_0052a8a0(&local_1c,0,0,1);
  if ((local_18 != 0) || (local_1c != 0)) {
    piVar5 = &local_1c;
    do {
      piVar5 = (int *)piVar5[1];
      iVar9 = iVar9 + 1;
      local_34 = iVar9;
    } while (piVar5 != (int *)0x0);
  }
  FUN_0052a8a0(&local_1c,0,1,1);
  if ((local_18 != 0) || (local_1c != 0)) {
    piVar5 = &local_1c;
    do {
      piVar5 = (int *)piVar5[1];
      iVar7 = iVar7 + 1;
    } while (piVar5 != (int *)0x0);
    if (local_18 != 0) {
      do {
        iVar9 = *(int *)(local_18 + 4);
        FUN_00401f20(local_18);
        local_18 = iVar9;
      } while (iVar9 != 0);
      local_18 = 0;
    }
  }
  local_1c = 0;
  FUN_005da8c0(DAT_00b38540,local_34,1);
  FUN_005da8c0(DAT_00b38548,iVar7,2);
  FUN_005da8c0(DAT_00b384c0,DAT_00b333c4[0x198],4);
  FUN_005da8c0(DAT_00b384b8,DAT_00b333c4[0x199],5);
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  local_14[4] = 0;
  iVar7 = 0;
  do {
    uVar6 = FUN_00565be0(2,iVar7);
    iVar9 = FUN_005f23b0(uVar6);
    local_14[iVar9] = local_14[iVar9] + 1;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x15);
  iVar9 = 0;
  local_30 = 5;
  iVar7 = 6;
  do {
    iVar10 = iVar7;
    if (*(undefined4 **)((int)&PTR_DAT_00b11e3c + iVar9) == (undefined4 *)0x0) {
      local_34 = 0;
    }
    else {
      local_34 = **(undefined4 **)((int)&PTR_DAT_00b11e3c + iVar9);
    }
    FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
    fVar1 = (float)iVar10;
    if (iVar10 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    FUN_0058ceb0(0xfaa,fVar1);
    FUN_0058ced0(0xfaf,local_34);
    fVar1 = (float)*(int *)((int)local_14 + iVar9);
    if (*(int *)((int)local_14 + iVar9) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    FUN_0058ceb0(0xfb0,fVar1);
    uVar6 = DAT_00b38400;
    iVar9 = iVar9 + 4;
    local_30 = local_30 + -1;
    iVar7 = iVar10 + 1;
  } while (local_30 != 0);
  fVar11 = (float10)FUN_0041fc90();
  local_24 = (int)(longlong)ROUND(fVar11);
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar10 + 2);
  if (iVar10 + 2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)local_24;
  if (local_24 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  iVar9 = iVar10 + 3;
  iVar7 = FUN_0046b280("SEWorld");
  uVar6 = DAT_00b38408;
  if (iVar7 != 0) {
    fVar1 = (float)DAT_00b333c4[0x1c0];
    FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
    fVar2 = (float)iVar9;
    if (iVar9 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    FUN_0058ceb0(0xfaa,fVar2);
    FUN_0058ced0(0xfaf,uVar6);
    local_24 = (int)(longlong)ROUND(fVar1);
    fVar1 = (float)local_24;
    if (local_24 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    FUN_0058ceb0(0xfb0,fVar1);
    iVar9 = iVar10 + 4;
  }
  uVar6 = DAT_00b383f8;
  iVar7 = (**(code **)(*DAT_00b333c4 + 0x204))();
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)iVar9;
  if (iVar9 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b383f0;
  iVar7 = (**(code **)(*DAT_00b333c4 + 0x208))();
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 1);
  if (iVar9 + 1 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b38440;
  iVar7 = DAT_00b333c4[0x196];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 3);
  if (iVar9 + 3 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  ppuVar8 = &PTR_DAT_00b11e50;
  iVar7 = iVar9 + 4;
  do {
    iVar9 = iVar7;
    iVar7 = *(int *)((int)(ppuVar8 + -0x2c45e2) + (int)DAT_00b333c4);
    if ((undefined4 *)*ppuVar8 == (undefined4 *)0x0) {
      local_30 = 0;
    }
    else {
      local_30 = *(int *)*ppuVar8;
    }
    FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
    fVar1 = (float)iVar9;
    if (iVar9 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    FUN_0058ceb0(0xfaa,fVar1);
    FUN_0058ced0(0xfaf,local_30);
    fVar1 = (float)iVar7;
    if (iVar7 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    FUN_0058ceb0(0xfb0,fVar1);
    uVar6 = DAT_00b38468;
    ppuVar8 = ppuVar8 + 1;
    iVar7 = iVar9 + 1;
  } while ((int)ppuVar8 < 0xb11e68);
  iVar10 = DAT_00b333c4[0x19a];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar10;
  if (iVar10 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b38418;
  iVar7 = DAT_00b333c4[0x19b];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 3);
  if (iVar9 + 3 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b38420;
  iVar7 = DAT_00b333c4[0x19c];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 4);
  if (iVar9 + 4 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b38478;
  iVar7 = DAT_00b333c4[0x19d];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 6);
  if (iVar9 + 6 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b38428;
  iVar7 = DAT_00b333c4[0x19e];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 8);
  if (iVar9 + 8 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b38438;
  iVar7 = DAT_00b333c4[0x19f];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 9);
  if (iVar9 + 9 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b38480;
  iVar7 = DAT_00b333c4[0x1a0];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 0xb);
  if (iVar9 + 0xb < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b38500;
  iVar7 = DAT_00b333c4[0x1a1];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 0xd);
  if (iVar9 + 0xd < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b38488;
  iVar7 = DAT_00b333c4[0x1a2];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 0xe);
  if (iVar9 + 0xe < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b38508;
  iVar7 = DAT_00b333c4[0x1a3];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 0x10);
  if (iVar9 + 0x10 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b38510;
  iVar7 = DAT_00b333c4[0x1a4];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 0x12);
  if (iVar9 + 0x12 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b38518;
  iVar7 = DAT_00b333c4[0x1a5];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 0x13);
  if (iVar9 + 0x13 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b38520;
  iVar7 = DAT_00b333c4[0x1a6];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 0x14);
  if (iVar9 + 0x14 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b384f0;
  iVar7 = DAT_00b333c4[0x1a7];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 0x16);
  if (iVar9 + 0x16 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b384f8;
  iVar7 = DAT_00b333c4[0x1a8];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 0x17);
  if (iVar9 + 0x17 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b38550;
  iVar7 = DAT_00b333c4[0x1a9];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 0x18);
  if (iVar9 + 0x18 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b384c8;
  iVar7 = DAT_00b333c4[0x1aa];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 0x1a);
  if (iVar9 + 0x1a < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b384d0;
  iVar7 = DAT_00b333c4[0x1ab];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 0x1b);
  if (iVar9 + 0x1b < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b38528;
  iVar7 = DAT_00b333c4[0x1ac];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 0x1d);
  if (iVar9 + 0x1d < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b384e8;
  iVar7 = DAT_00b333c4[0x1ae];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 0x1e);
  if (iVar9 + 0x1e < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b384d8;
  iVar7 = DAT_00b333c4[0x1af];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 0x20);
  if (iVar9 + 0x20 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b384e0;
  iVar7 = DAT_00b333c4[0x1b0];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 0x21);
  if (iVar9 + 0x21 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  uVar6 = DAT_00b38538;
  iVar7 = DAT_00b333c4[0x1b1];
  FUN_00585410(*(undefined4 *)(in_ECX + 0x4c),"stat_misc_template",0);
  fVar1 = (float)(iVar9 + 0x23);
  if (iVar9 + 0x23 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfaa,fVar1);
  FUN_0058ced0(0xfaf,uVar6);
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_0058ceb0(0xfb0,fVar1);
  FUN_0058ceb0(0xfb3,0xc7c34f80);
  FUN_0058ceb0(0xfb3,(float)iVar3);
  FUN_0058ceb0(0xfb3,0);
  return;
}



void FUN_005dbb00(void)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  uVar2 = FUN_004da2a0();
  FUN_0058ced0(0xfaf,uVar2);
  uVar2 = FUN_005ea720();
  FUN_0058ced0(0xfb0,uVar2);
  iVar3 = (**(code **)(*DAT_00b333c4 + 0x268))();
  if (iVar3 == 0) {
    puVar4 = &DAT_00a3a0e4;
  }
  else {
    iVar3 = (**(code **)(*DAT_00b333c4 + 0x268))();
    puVar4 = *(undefined1 **)(iVar3 + 0x1c);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_00a2f7ec;
    }
  }
  FUN_0058ced0(0xfb1,puVar4);
  uVar2 = FUN_005ea6b0();
  FUN_0058ced0(0xfb2,uVar2);
  uVar1 = FUN_005e1fd0();
  FUN_0058ceb0(0xfb3,(float)uVar1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005dbbd0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  undefined1 *puVar11;
  char *pcVar12;
  byte *pbVar13;
  int *unaff_FS_OFFSET;
  float10 fVar14;
  float fVar15;
  byte *local_44;
  char *local_40;
  ushort local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  byte abStack_30 [32];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c20f0;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_44;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffac;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((param_1 != 0x22) && (param_1 != 0x18)) && (param_1 != 0xe)) goto LAB_005dc4f8;
  FUN_0057de50(4,uVar4);
  fVar14 = (float10)FUN_00588d90();
  local_44 = (byte *)(float)(fVar14 - (float10)0.5);
  FUN_0058ceb0(0xfab,local_44);
  fVar14 = (float10)FUN_00588bd0(0xfcb);
  local_44 = (byte *)(float)(fVar14 - (float10)8.0);
  FUN_0058ceb0(0xfcb,local_44);
  fVar14 = (float10)FUN_00588bd0(0xfca);
  local_44 = (byte *)(float)(fVar14 - (float10)8.0);
  FUN_0058ceb0(0xfca,local_44);
  fVar14 = (float10)FUN_00588c50();
  FUN_0058ceb0(0xfad,(float)fVar14);
  fVar14 = (float10)FUN_00588cf0();
  local_44 = (byte *)(float)(fVar14 + (float10)2.0);
  FUN_0058ceb0(0xfac,local_44);
  FUN_0058ceb0(0xfa1,0x40000000);
  if (param_1 == 0x18) {
    FUN_00588bd0(0xfae);
    uVar5 = FUN_009828c0();
    FUN_0058ceb0(0xfb2,0x40000000);
    uVar6 = FUN_00565d10(uVar5);
    FUN_0058ced0(0xfb0,uVar6);
    uVar5 = FUN_00565cf0(uVar5);
    FUN_0058ced0(0xfb1,uVar5);
  }
  else {
    if (param_1 == 0xe) {
      FUN_00588bd0(0xfae);
      iVar7 = FUN_009828c0();
      if (3 < iVar7) {
        uVar5 = FUN_00565cf0(iVar7 + 4);
        local_40 = (char *)0x0;
        local_3c = 0;
        local_3a = 0;
        FUN_004028d0(uVar5,0);
        pcVar9 = local_40;
        local_4 = 0;
        if (local_3c == 0xffff) {
          pcVar8 = local_40;
          do {
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
          uVar4 = (int)pcVar8 - (int)(local_40 + 1);
        }
        else {
          uVar4 = (uint)local_3c;
        }
        if (uVar4 != 0) {
          FUN_0058ceb0(0xfb2,0x3f800000);
          uVar5 = FUN_00565d10(iVar7 + 4);
          FUN_0058ced0(0xfb0,uVar5);
          FUN_0058ced0(0xfb1,pcVar9);
          fVar14 = (float10)FUN_00588bd0(0xfaf);
          fVar15 = (float)fVar14;
          uVar5 = 0x3f800000;
          fVar14 = (float10)FUN_00588bd0(0xfae);
          FUN_00589980(0xfae,(float)fVar14,uVar5,fVar15);
        }
        FUN_00401f20(pcVar9);
        goto LAB_005dc4f8;
      }
      if (iVar7 == 0) {
        iVar7 = FUN_005e32f0();
        uVar5 = (**(code **)(*(int *)(iVar7 + 0x24) + 0x10))(0,0x43534544);
        FUN_00419b10(uVar5);
        local_4 = 1;
LAB_005dc2f8:
        iVar7 = FUN_00404fd0();
        if (iVar7 != 0) {
          FUN_0058ceb0(0xfb2,0x3f800000);
LAB_005dc318:
          FUN_0058ced0(0xfb1,local_38);
          fVar14 = (float10)FUN_00588bd0(0xfaf);
          fVar15 = (float)fVar14;
          uVar5 = 0x3f800000;
          fVar14 = (float10)FUN_00588bd0(0xfae);
          FUN_00589980(0xfae,(float)fVar14,uVar5,fVar15);
        }
      }
      else if (iVar7 == 1) {
        iVar7 = (**(code **)(*DAT_00b333c4 + 0x268))();
        if (iVar7 == 0) goto LAB_005dc4f8;
        iVar7 = (**(code **)(*DAT_00b333c4 + 0x268))();
        uVar5 = (**(code **)(*(int *)(iVar7 + 0x30) + 0x10))(0,0x43534544);
        FUN_00419b10(uVar5);
        local_4 = 2;
        iVar7 = FUN_00404fd0();
        if (iVar7 != 0) {
          FUN_0058ceb0(0xfb2,0x40000000);
          iVar7 = (**(code **)(*DAT_00b333c4 + 0x268))();
          local_44 = *(byte **)(iVar7 + 0x28);
          if (local_44 == (byte *)0x0) {
            local_44 = &DAT_00a2f7ec;
          }
          pcVar9 = "Menus\\BirthSign\\Birthsign_";
          do {
            pcVar8 = pcVar9;
            pcVar9 = pcVar8 + 1;
          } while (*pcVar8 != '\0');
          pcVar12 = "Menus\\BirthSign\\Birthsign_";
          pbVar13 = local_44;
          for (pcVar9 = pcVar8 + -0xa6daf4; (char *)0x3 < pcVar9; pcVar9 = pcVar9 + -4) {
            if (*(int *)pbVar13 != *(int *)pcVar12) goto LAB_005dbf69;
            pcVar12 = pcVar12 + 4;
            pbVar13 = pbVar13 + 4;
          }
          if (pcVar9 == (char *)0x0) {
LAB_005dbfc6:
            iVar10 = 0;
          }
          else {
LAB_005dbf69:
            iVar7 = (uint)*pbVar13 - (uint)(byte)*pcVar12;
            if (iVar7 == 0) {
              if (pcVar9 == (char *)0x1) goto LAB_005dbfc6;
              iVar7 = (uint)pbVar13[1] - (uint)(byte)pcVar12[1];
              if (iVar7 == 0) {
                if (pcVar9 == &DAT_00000002) goto LAB_005dbfc6;
                iVar7 = (uint)pbVar13[2] - (uint)(byte)pcVar12[2];
                if (iVar7 == 0) {
                  if ((pcVar9 == (char *)0x3) ||
                     (iVar7 = (uint)pbVar13[3] - (uint)(byte)pcVar12[3], iVar7 == 0))
                  goto LAB_005dbfc6;
                }
              }
            }
            iVar10 = 1;
            if (iVar7 < 1) {
              iVar10 = -1;
            }
          }
          if (iVar10 == 0) {
            pbVar13 = local_44 + (int)(pcVar8 + -0xa6daf4);
            iVar7 = -(int)pbVar13;
            do {
              bVar1 = *pbVar13;
              pbVar13[(int)(abStack_30 + iVar7)] = bVar1;
              pbVar13 = pbVar13 + 1;
            } while (bVar1 != 0);
            pbVar13 = abStack_30;
            while (abStack_30[0] != 0) {
              if (*pbVar13 == 0x20) {
                *pbVar13 = 0x5f;
              }
              pbVar13 = pbVar13 + 1;
              abStack_30[0] = *pbVar13;
            }
            local_40 = (char *)0x0;
            local_3c = 0;
            local_3a = 0;
            local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
            local_4._0_1_ = 3;
            FUN_00402e30(&local_40,"Menus\\Stats\\small_birthsign\\small_%s",abStack_30);
            FUN_0058ced0(0xfb0,local_40);
            local_4 = CONCAT31(local_4._1_3_,2);
            FUN_00402da0();
          }
          goto LAB_005dc318;
        }
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 != 3) goto LAB_005dc4f8;
          FUN_00419b10(DAT_00b383e0);
          local_4 = 6;
          goto LAB_005dc2f8;
        }
        iVar7 = FUN_005e3320();
        if ((iVar7 == 0) || (pcVar9 = (char *)FUN_004da2a0(), *pcVar9 == '-')) goto LAB_005dc4f8;
        iVar7 = FUN_005e3320();
        uVar5 = (**(code **)(*(int *)(iVar7 + 0x24) + 0x10))(0,0x43534544);
        FUN_00419b10(uVar5);
        local_4 = 4;
        iVar7 = FUN_00404fd0();
        if (iVar7 == 0) goto LAB_005dc361;
        FUN_0058ceb0(0xfb2,0x40000000);
        local_40 = (char *)0x0;
        local_3c = 0;
        local_3a = 0;
        local_4 = CONCAT31(local_4._1_3_,5);
        iVar7 = FUN_005e3320();
        iVar10 = FUN_004473a0(DAT_00b37c88);
        if (iVar7 == iVar10) {
          iVar7 = DAT_00b333c4[0x195];
        }
        if ((iVar7 == 0) || (cVar2 = FUN_0051bec0(), cVar2 == '\0')) {
          pcVar9 = "Menus\\Stats\\small_class\\small_thief.dds";
LAB_005dc237:
          FUN_0058ced0(0xfb0,pcVar9);
        }
        else {
          local_44 = *(byte **)(iVar7 + 0x30);
          if (local_44 == (byte *)0x0) {
            local_44 = &DAT_00a2f7ec;
          }
          pcVar9 = "Menus\\Level_up\\class_creation\\class_creation_";
          do {
            pcVar8 = pcVar9;
            pcVar9 = pcVar8 + 1;
          } while (*pcVar8 != '\0');
          pcVar12 = "Menus\\Level_up\\class_creation\\class_creation_";
          pbVar13 = local_44;
          for (pcVar9 = pcVar8 + -0xa6da9c; (char *)0x3 < pcVar9; pcVar9 = pcVar9 + -4) {
            if (*(int *)pbVar13 != *(int *)pcVar12) goto LAB_005dc198;
            pcVar12 = pcVar12 + 4;
            pbVar13 = pbVar13 + 4;
          }
          if (pcVar9 == (char *)0x0) {
LAB_005dc1f5:
            iVar10 = 0;
          }
          else {
LAB_005dc198:
            iVar7 = (uint)*pbVar13 - (uint)(byte)*pcVar12;
            if (iVar7 == 0) {
              if (pcVar9 == (char *)0x1) goto LAB_005dc1f5;
              iVar7 = (uint)pbVar13[1] - (uint)(byte)pcVar12[1];
              if (iVar7 == 0) {
                if (pcVar9 == &DAT_00000002) goto LAB_005dc1f5;
                iVar7 = (uint)pbVar13[2] - (uint)(byte)pcVar12[2];
                if (iVar7 == 0) {
                  if ((pcVar9 == (char *)0x3) ||
                     (iVar7 = (uint)pbVar13[3] - (uint)(byte)pcVar12[3], iVar7 == 0))
                  goto LAB_005dc1f5;
                }
              }
            }
            iVar10 = 1;
            if (iVar7 < 1) {
              iVar10 = -1;
            }
          }
          if (iVar10 == 0) {
            pbVar13 = local_44 + (int)(pcVar8 + -0xa6da9c);
            iVar7 = -(int)pbVar13;
            do {
              bVar1 = *pbVar13;
              pbVar13[(int)(abStack_30 + iVar7)] = bVar1;
              pbVar13 = pbVar13 + 1;
            } while (bVar1 != 0);
            FUN_00402e30(&local_40,"Menus\\Stats\\small_class\\small_%s",abStack_30);
            pcVar9 = local_40;
            goto LAB_005dc237;
          }
        }
        uVar5 = DAT_00b383d8;
        FUN_005e3320();
        uVar6 = FUN_006ecc80();
        uVar6 = FUN_0052e7e0(uVar6);
        FUN_00402e30(&local_40,"%s\n\n%s%s",local_38,uVar5,uVar6);
        FUN_0058ced0(0xfb1,local_40);
        fVar14 = (float10)FUN_00588bd0(0xfaf);
        fVar15 = (float)fVar14;
        uVar5 = 0x3f800000;
        fVar14 = (float10)FUN_00588bd0(0xfae);
        FUN_00589980(0xfae,(float)fVar14,uVar5,fVar15);
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_00402da0();
      }
LAB_005dc361:
      local_4 = 0xffffffff;
      FUN_00402da0();
      goto LAB_005dc4f8;
    }
    if (param_1 != 0x22) goto LAB_005dc4f8;
    FUN_00588bd0(0xfb4);
    iVar7 = FUN_009828c0();
    uVar3 = FUN_00565c50(2,iVar7);
    local_44 = (byte *)CONCAT31(local_44._1_3_,uVar3);
    iVar10 = FUN_00446af0(local_44);
    if (iVar10 != 0) {
      FUN_0058ceb0(0xfb2,0x40000000);
      puVar11 = *(undefined1 **)(iVar10 + 0x24);
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &DAT_00a2f7ec;
      }
      FUN_0058ced0(0xfb0,puVar11);
      uVar5 = DAT_00b383d0;
      local_38 = 0;
      local_34 = 0;
      local_32 = 0;
      local_44 = *(byte **)(iVar10 + 0x30);
      local_4 = 7;
      local_40 = DAT_00b383c8;
      uVar6 = FUN_005f23b0(iVar7);
      uVar6 = FUN_0056a340(uVar6);
      uVar5 = FUN_00565cc0(local_44,uVar5,uVar6);
      uVar5 = (**(code **)(*(int *)(iVar10 + 0x18) + 0x10))(0,0x43534544,local_40,uVar5);
      FUN_00402e30(&local_38,"%s\n\n%s%s\n\n%s%s",uVar5);
      FUN_0058ced0(0xfb1,local_38);
      if (iVar7 == 0x11) {
        local_44 = (byte *)(**(code **)(*DAT_00b333c4 + 0x34c))();
      }
      else {
        local_44 = (byte *)0xffffffff;
      }
      FUN_0058ceb0(0xfb3,(float)(int)local_44);
      local_4 = 0xffffffff;
      FUN_00402da0();
    }
  }
  fVar14 = (float10)FUN_00588bd0(0xfaf);
  fVar15 = (float)fVar14;
  uVar5 = 0x3f800000;
  fVar14 = (float10)FUN_00588bd0(0xfae);
  FUN_00589980(0xfae,(float)fVar14,uVar5,fVar15);
LAB_005dc4f8:
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_005dc520(int param_1,float param_2)

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
        FUN_005a5fd0();
        FUN_00401f20();
        *unaff_FS_OFFSET = local_c;
        return 1;
      }
    }
    else if ((param_1 == 0xe) && (!NAN(param_2) && 1.0 < param_2 != (param_2 == 1.0))) {
      FUN_005a5ef0();
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

void FUN_005dc630(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int in_ECX;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  int local_134;
  int iStack_130;
  undefined4 local_12c;
  undefined2 local_128;
  undefined2 local_126;
  int *local_124;
  int iStack_120;
  int local_11c;
  int local_118;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c212b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_134;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffebc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar7 = 0;
  local_118 = 0;
  iVar8 = 0;
  local_11c = in_ECX;
  do {
    uVar3 = FUN_00565be0(2,iVar7,uVar2);
    iVar4 = FUN_005e3320();
    if (iVar4 != 0) {
      FUN_005e3320(uVar3);
      cVar1 = FUN_0051c090(uVar3);
      if (cVar1 != '\0') {
        iVar8 = iVar8 + 1;
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x15);
  local_134 = iVar8;
  FUN_0058ceb0(0xfb1,(float)iVar8);
  if (0 < iVar8) {
    local_134 = iVar8 + 1;
  }
  piVar9 = (int *)(in_ECX + 0x60);
  iVar7 = 0;
  do {
    local_12c = 0;
    local_128 = 0;
    local_126 = 0;
    local_124 = piVar9;
    FUN_004028d0("stat_skill_template",0);
    local_4 = 0;
    iVar8 = FUN_00585410(*(undefined4 *)(in_ECX + 0x3c),local_12c,0);
    if (iVar8 == 0) {
      FUN_004a7a60("Error creating skill item in Stats menu. Template not valid.");
      FUN_00401f20(local_12c);
      break;
    }
    if ((undefined4 *)*piVar9 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar9)(1);
    }
    *piVar9 = iVar8;
    iVar8 = FUN_00565be0(2,iVar7);
    iStack_120 = iVar8;
    iVar4 = FUN_00446af0(iVar7);
    pcVar5 = *(char **)(iVar4 + 0x24);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = "";
    }
    pcVar6 = acStack_114;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar5 = _strrchr(acStack_114,0x2e);
    if (pcVar5 != (char *)0x0) {
      pcVar6 = pcVar5;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      _memcpy(pcVar5 + 6,pcVar5,(size_t)(pcVar6 + (1 - (int)(pcVar5 + 1))));
      _strncpy(pcVar5,"_small",6);
    }
    iVar4 = FUN_005e3320();
    if (iVar4 == 0) {
LAB_005dc806:
      iStack_130 = local_134;
      local_134 = local_134 + 1;
    }
    else {
      iVar4 = iVar8;
      FUN_005e3320(iVar8);
      cVar1 = FUN_0051c090(iVar4);
      if (cVar1 == '\0') goto LAB_005dc806;
      iStack_130 = local_118;
      local_118 = local_118 + 1;
    }
    uVar3 = FUN_00565cc0(iVar8);
    FUN_004028d0(uVar3,0);
    FUN_0058ceb0(0xfaa,(float)iStack_130);
    iStack_130 = (**(code **)(*DAT_00b333c4 + 0x284))(iVar8);
    FUN_0058ceb0(0xfb1,(float)iStack_130);
    uVar3 = FUN_00565cc0(iVar8);
    FUN_0058ced0(0xfb2,uVar3);
    FUN_0058ced0(0xfb3,acStack_114);
    FUN_0058ceb0(0xfb4,(float)iStack_120);
    iStack_120 = FUN_005f1910(iVar8);
    FUN_0058ceb0(0xfb5,(float)iStack_120);
    FUN_005da1a0(iVar8);
    local_4 = 0xffffffff;
    FUN_00401f20(local_12c);
    piVar9 = local_124 + 1;
    iVar7 = iVar7 + 1;
    in_ECX = local_11c;
  } while (iVar7 < 0x15);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005dc950(void)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uchar *_Str1;
  int in_ECX;
  undefined1 *puVar7;
  int local_110;
  int *piStack_10c;
  int local_108;
  char acStack_104 [256];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_110;
  local_110 = 0;
  local_108 = in_ECX;
  uVar5 = (**(code **)(*DAT_00b333c4 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4,0);
  iVar6 = FUN_009832e6(uVar5);
  if (iVar6 != 0) {
    FUN_005893f0();
    piVar4 = (int *)(iVar6 + 0x3c);
    while ((piVar4 != (int *)0x0 && (piVar3 = (int *)*piVar4, piVar3 != (int *)0x0))) {
      piStack_10c = (int *)piVar4[1];
      piVar4 = piStack_10c;
      if (((*(byte *)(*piVar3 + 0x34) >> 3 & 1) == 0) && ((*(byte *)(*piVar3 + 0x34) & 1) == 0)) {
        uVar5 = FUN_005e1df0();
        _Str1 = (uchar *)FUN_0051f350((int)(char)piVar3[1],uVar5);
        iVar6 = __mbscmp(_Str1,(uchar *)"DUMMY");
        piVar4 = piStack_10c;
        if ((iVar6 != 0) &&
           (iVar6 = FUN_00585410(*(undefined4 *)(in_ECX + 0x44),"stat_faction_template",0),
           piVar4 = piStack_10c, iVar6 != 0)) {
          FUN_0058ceb0(0xfaa,(float)local_110);
          local_110 = local_110 + 1;
          puVar7 = *(undefined1 **)(*piVar3 + 0x1c);
          if (puVar7 == (undefined1 *)0x0) {
            puVar7 = &DAT_00a2f7ec;
          }
          iVar6 = 0;
          do {
            pcVar1 = acStack_104 + iVar6;
            cVar2 = pcVar1[(int)puVar7 - (int)acStack_104];
            *pcVar1 = cVar2;
            if (cVar2 == ' ') {
              *pcVar1 = '_';
            }
          } while ((*pcVar1 != '\0') && (iVar6 = iVar6 + 1, iVar6 < 0x100));
          acStack_104[0xff] = 0;
          FUN_004028d0(acStack_104,0);
          FUN_0058ced0(0xfaf,puVar7);
          uVar5 = FUN_005e1df0();
          uVar5 = FUN_0051f350((int)(char)piVar3[1],uVar5);
          FUN_0058ced0(0xfb0,uVar5);
          uVar5 = FUN_005e1df0();
          uVar5 = FUN_0051f350((char)piVar3[1] + 1,uVar5);
          FUN_0058ced0(0xfb1,uVar5);
          uVar5 = FUN_0051f370((int)(char)piVar3[1]);
          FUN_0058ced0(0xfb2,uVar5);
          FUN_0058ceb0(0xfb3,0x40000000);
          piVar4 = piStack_10c;
          in_ECX = local_108;
        }
      }
    }
    FUN_0058fba0(0);
  }
  return;
}



undefined4 FUN_005dcb70(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  
  puVar2 = (undefined4 *)FUN_00589b70(0x3eb);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  FUN_00582160(0,1);
  fVar7 = (float10)thunk_FUN_00584980();
  uVar3 = FUN_00590420("Data\\Menus\\Main\\stats_menu.xml");
  piVar4 = (int *)FUN_005898f0();
  FUN_00584670("Data\\Menus\\Main\\stats_menu.xml",piVar4);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  iVar5 = (**(code **)(*piVar4 + 0x34))();
  if (iVar5 != 0x3eb) {
    if (piVar4[1] == 0) {
      return 0;
    }
    (**(code **)*piVar4)(1);
    return 0;
  }
  uVar6 = FUN_009832e6(uVar3,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar6);
  cVar1 = FUN_005d9b80();
  if (cVar1 != '\0') {
    fVar8 = (float10)FUN_00588bd0(0xfa5);
    if ((fVar8 == (float10)6006.0) ||
       (fVar8 = (float10)FUN_00588bd0(0xfa5), fVar8 == (float10)102.0)) {
      FUN_0058ceb0(0xfab,(float)fVar7);
    }
    iVar5 = FUN_00582160(0,1);
    if (*(char *)(iVar5 + 10) != -1) {
      FUN_0058ceb0(0xfae,(float)(int)*(char *)(iVar5 + 10));
    }
    FUN_005da1a0(0xffffffff);
    FUN_005dc630();
    FUN_005d9cb0();
    FUN_005dc950();
    FUN_005dbb00();
    FUN_0058ceb0(0xfb3,0xc7c34f80);
    FUN_0058ceb0(0xfb3,0);
    FUN_0058ceb0(0xfb3,0xc7c34f80);
    FUN_0058ceb0(0xfb3,0);
    FUN_0058ceb0(0xfb3,0xc7c34f80);
    FUN_0058ceb0(0xfb3,0);
    FUN_00585190(1);
    (**(code **)(*piVar4 + 0x2c))();
    return uVar3;
  }
  FUN_004a7a60("Stats Menu Creation Failed... Are your menu and art resources up to date?");
  return 0;
}



void FUN_005dcd70(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if (param_1 - 1U < 5) {
    if ((param_2 != 0) ||
       ((cVar1 = FUN_0045a500(), cVar1 != '\0' && (*(int *)(in_ECX + 0x28) != 0)))) {
      FUN_00589390();
      FUN_0058ceb0(0xfae,(float)param_1);
    }
    iVar2 = FUN_00582160(0,1);
    *(char *)(iVar2 + 10) = (char)param_1;
    FUN_0058ceb0(0xfa1,0x3f800000);
    cVar1 = FUN_0045a500();
    if (cVar1 == '\0') {
      if (param_1 == 1) {
        FUN_005dbb00();
        return;
      }
      if ((param_1 == 2) || (param_1 == 3)) {
        FUN_005da1a0(0xffffffff);
        return;
      }
      if (param_1 == 4) {
        FUN_005dc950();
        return;
      }
      if (param_1 == 5) {
        FUN_005da930();
        return;
      }
    }
  }
  else if ((param_1 == 8) || (param_1 == 9)) {
    FUN_00588bd0(0xfae);
    iVar2 = FUN_009828c0();
    if (param_1 == 8) {
      iVar2 = iVar2 + -1;
    }
    else {
      iVar2 = iVar2 + 1;
    }
    if (iVar2 < 1) {
      iVar2 = 5;
    }
    else if (5 < iVar2) {
      iVar2 = 1;
    }
    FUN_0058ceb0(0xfae,(float)iVar2);
    if (iVar2 == 1) {
      FUN_005dbb00();
      return;
    }
    if ((iVar2 == 2) || (param_1 == 3)) {
      FUN_005da1a0(0xffffffff);
    }
    else {
      if (iVar2 == 4) {
        FUN_005dc950();
        return;
      }
      if (iVar2 == 5) {
        FUN_005da930();
        return;
      }
    }
  }
  return;
}



void FUN_005dcef0(void)

{
  FUN_005dbb00();
  FUN_005da1a0(0xffffffff);
  FUN_005dc950();
  FUN_005da930();
  FUN_005d9cb0();
  return;
}



undefined4 FUN_005dcf20(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  puVar1 = (undefined4 *)FUN_00589b70(0x41b);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  FUN_00582160(0,1);
  fVar5 = (float10)thunk_FUN_00584980();
  uVar2 = FUN_00590420("Data\\Menus\\Dialog\\TextEditMenu.xml");
  piVar3 = (int *)FUN_005898f0();
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x34))();
    if (iVar4 != 0x41b) {
      if (piVar3[1] == 0) {
        return 0;
      }
      (**(code **)*piVar3)(1);
      return 0;
    }
    uVar2 = FUN_009832e6(uVar2,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
    FUN_00584880(uVar2);
    iVar4 = FUN_009832e6(piVar3,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13b5c,0);
    piVar3 = (int *)(iVar4 + 0x28);
    iVar4 = 0;
    do {
      if (*piVar3 == 0) {
        FUN_004a7a60("Text Edit Menu Creation Failed... Are your menu and art resources up to date?"
                    );
        return 0;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < 3);
    fVar6 = (float10)FUN_00588bd0(0xfa5);
    if ((fVar6 == (float10)6006.0) ||
       (fVar6 = (float10)FUN_00588bd0(0xfa5), fVar6 == (float10)102.0)) {
      FUN_0058ceb0(0xfab,(float)fVar5);
    }
    FUN_0058ced0(0xfae,param_1);
    FUN_0058ced0(0xfde,param_2);
    FUN_00588bd0(0xfd4);
    uVar2 = FUN_009828c0();
    FUN_00583dd0(uVar2);
    uVar2 = FUN_00588c10(0xfde);
    FUN_0057ff20(uVar2);
    FUN_0057dd90(1);
    FUN_00585190(0);
    return 1;
  }
  return 0;
}



void FUN_005dd0d0(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x41b);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
    return;
  }
  return;
}



void FUN_005dd120(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0057d2f0();
  if (cVar1 != '\0') {
    FUN_0057dde0();
    uVar2 = FUN_00580120();
    FUN_0058ced0(0xfde,uVar2);
  }
  return;
}



undefined4 FUN_005dd160(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0057d2f0();
  if (cVar1 != '\0') {
    FUN_0057ff50(param_1);
    uVar2 = FUN_00580120();
    FUN_0058ced0(0xfde,uVar2);
    return 1;
  }
  return 0;
}



void FUN_005dd200(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  *in_ECX = &PTR_FUN_00a6dc74;
  return;
}



void FUN_005dd310(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6dc74;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005dd340(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x404);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
    FUN_006ac3d0();
    iVar1 = FUN_00589b70(0x3f1);
    if (iVar1 != 0) {
      iVar1 = FUN_005898f0();
      FUN_0058fba0(0);
      FUN_0058ceb0(0xfa1,0x40000000);
      *(undefined1 *)(iVar1 + 0x96) = 1;
      FUN_0059e100();
      return;
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_005dd4b0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uchar *puVar10;
  undefined1 *puVar11;
  int *unaff_ESI;
  float10 fVar12;
  int iVar13;
  float fStack_13c;
  int *piStack_138;
  undefined4 local_134 [76];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&fStack_13c;
  local_134[0] = param_1;
  puVar1 = (undefined4 *)FUN_00589b70(0x404);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  FUN_00582160(0,1);
  fVar12 = (float10)thunk_FUN_00584980();
  fStack_13c = (float)fVar12;
  uVar2 = FUN_00590420("Data\\Menus\\training_menu.xml");
  piVar3 = (int *)FUN_005898f0();
  if (piVar3 != (int *)0x0) {
    piStack_138 = piVar3;
    iVar4 = (**(code **)(*piVar3 + 0x34))();
    if (iVar4 == 0x404) {
      uVar5 = FUN_009832e6(uVar2,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
      FUN_00584880(uVar5);
      iVar4 = FUN_009832e6(piVar3,0,&PTR_PTR_00b0a018,&PTR_PTR_00b1479c,0);
      fVar12 = (float10)FUN_00588bd0(0xfa5);
      if ((fVar12 == (float10)6006.0) ||
         (fVar12 = (float10)FUN_00588bd0(0xfa5), fVar12 == (float10)102.0)) {
        FUN_0058ceb0(0xfab,fStack_13c);
      }
      *(undefined4 *)(iVar4 + 0x54) = param_1;
      FUN_005e02e0(0);
      uVar5 = FUN_00468250();
      uVar5 = FUN_00565c50(2,uVar5);
      uVar5 = FUN_00446af0(uVar5);
      *(undefined4 *)(iVar4 + 0x58) = uVar5;
      FUN_005e02e0(0);
      uVar6 = FUN_00468260();
      *(uint *)(iVar4 + 0x60) = uVar6 & 0xff;
      iVar7 = *DAT_00b333c4;
      FUN_005e02e0(0);
      uVar5 = FUN_00468250();
      (**(code **)(iVar7 + 0x288))(uVar5);
      uVar5 = FUN_009828c0();
      *(undefined4 *)(iVar4 + 0x5c) = uVar5;
      iVar7 = FUN_005e4420();
      if (iVar7 < *(int *)(iVar4 + 0x5c)) {
        FUN_0058ceb0(0xfaf,0x3f800000);
      }
      uVar5 = FUN_0056a300(*(undefined4 *)(iVar4 + 0x60));
      uVar8 = FUN_0056a340(uVar5);
      uVar5 = DAT_00b38d28;
      puVar10 = DAT_00b38d20;
      uVar9 = FUN_005e4420();
      _sprintf((char *)local_134,"%s %s: %d",uVar5,puVar10,uVar9);
      puVar10 = __mbsstr((uchar *)local_134,DAT_00b38d20);
      iVar7 = _toupper((int)(char)*puVar10);
      *puVar10 = (uchar)iVar7;
      FUN_0058ced0(0xfae,local_134);
      uVar5 = FUN_00565cc0(*(undefined4 *)(*(int *)(iVar4 + 0x58) + 0x2c));
      _sprintf((char *)local_134,"%s",uVar5);
      FUN_0058ced0(0xfde,local_134);
      uVar5 = FUN_00588c10(0xfde);
      _sprintf((char *)local_134,"%s %s",uVar5,uVar8);
      FUN_0058ced0(0xfde,local_134);
      uVar5 = *(undefined4 *)(iVar4 + 0x5c);
      uVar8 = FUN_00588c10(0xfde);
      _sprintf((char *)local_134,"%s %i",uVar8,uVar5);
      FUN_0058ced0(0xfde,local_134);
      uVar5 = FUN_005f23b0(*(undefined4 *)(*(int *)(iVar4 + 0x58) + 0x2c));
      uVar5 = FUN_0056a340(uVar5);
      uVar8 = FUN_00588c10(0xfde);
      _sprintf((char *)local_134,"%s %s",uVar8,uVar5);
      FUN_0058ced0(0xfde,local_134);
      iVar7 = DAT_00b333c4[0x16f];
      iVar13 = DAT_00b37728;
      uVar5 = FUN_00588c10(0xfde);
      _sprintf((char *)local_134,"%s %i/%i",uVar5,iVar7,iVar13);
      FUN_0058ced0(0xfde,local_134);
      uVar5 = (**(code **)(*(int *)(*(int *)(iVar4 + 0x58) + 0x18) + 0x10))(0,0x43534544);
      _sprintf((char *)&fStack_13c,"%s",uVar5);
      FUN_0058ced0(0xfde,&fStack_13c);
      puVar11 = *(undefined1 **)(*(int *)(iVar4 + 0x58) + 0x24);
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &DAT_00a2f7ec;
      }
      FUN_0058ced0(0xfe6,puVar11);
      iVar7 = (**(code **)(*DAT_00b333c4 + 0x284))(*(undefined4 *)(*(int *)(iVar4 + 0x58) + 0x2c));
      uVar5 = DAT_00b38580;
      if ((*(int *)(iVar4 + 0x60) <= iVar7) ||
         (uVar5 = DAT_00b38578, DAT_00b37728 <= DAT_00b333c4[0x16f])) {
        FUN_0058ced0(0xfde,uVar5);
        FUN_0058ceb0(0xfa1,0x3f800000);
        FUN_0058ceb0(0xfa1,0x40000000);
      }
      FUN_00585190(0);
      FUN_006ac3d0();
      uVar5 = FUN_0052ed50(5,5);
      (**(code **)(*unaff_ESI + 0xdc))(uVar5,DAT_00b333c4,1,1,0);
      return uVar2;
    }
    if (piVar3[1] != 0) {
      (**(code **)*piVar3)(1);
    }
  }
  return 0;
}



void FUN_005dd960(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[0xb] = 0;
  in_ECX[10] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  *in_ECX = &PTR_FUN_00a6dccc;
  return;
}



void FUN_005dda20(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6dccc;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005dda50(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3fb);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
    return;
  }
  return;
}



void FUN_005ddaa0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_00497c10(param_1,param_2);
  iVar1 = FUN_00589b70(0x3fb);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
  }
  FUN_00579c10(DAT_00b38ce0,0,1,DAT_00b38cf0,0);
  FUN_005ddca0();
  return;
}



void FUN_005ddca0(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3fa);
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      FUN_00584390();
      return;
    }
  }
  return;
}



undefined1 FUN_005ddcd0(void)

{
  undefined1 uVar1;
  
  uVar1 = DAT_00b3b740;
  DAT_00b3b740 = 0;
  return uVar1;
}



undefined4 FUN_005ddce0(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0;
}



undefined4 FUN_005ddd00(void)

{
  if ((DAT_00b06cc4 != '\0') && (DAT_00b350d6 != '\0')) {
    return 1;
  }
  return 0;
}



void FUN_005ddd20(void)

{
  int in_ECX;
  
  if ((undefined4 *)(&PTR_DAT_00b147d8)[*(int *)(in_ECX + 0xec)] != (undefined4 *)0x0) {
    FUN_0058ced0(0xfde,*(undefined4 *)(&PTR_DAT_00b147d8)[*(int *)(in_ECX + 0xec)]);
    return;
  }
  FUN_0058ced0(0xfde,0);
  return;
}



void FUN_005ddd60(void)

{
  int in_ECX;
  
  if ((undefined4 *)(&PTR_DAT_00b147e4)[*(int *)(in_ECX + 0xf0)] != (undefined4 *)0x0) {
    FUN_0058ced0(0xfde,*(undefined4 *)(&PTR_DAT_00b147e4)[*(int *)(in_ECX + 0xf0)]);
    return;
  }
  FUN_0058ced0(0xfde,0);
  return;
}



void FUN_005ddda0(void)

{
  int in_ECX;
  
  if ((undefined4 *)(&PTR_DAT_00b147f0)[*(int *)(in_ECX + 0xf8)] != (undefined4 *)0x0) {
    FUN_0058ced0(0xfde,*(undefined4 *)(&PTR_DAT_00b147f0)[*(int *)(in_ECX + 0xf8)]);
    return;
  }
  FUN_0058ced0(0xfde,0);
  return;
}



void FUN_005ddde0(void)

{
  int in_ECX;
  
  if ((undefined4 *)(&PTR_DAT_00b147e4)[*(int *)(in_ECX + 0xf4)] != (undefined4 *)0x0) {
    FUN_0058ced0(0xfde,*(undefined4 *)(&PTR_DAT_00b147e4)[*(int *)(in_ECX + 0xf4)]);
    return;
  }
  FUN_0058ced0(0xfde,0);
  return;
}



void FUN_005dde20(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00589b70(0x3fa);
  if (iVar1 != 0) {
    uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13ba8,0);
    iVar1 = FUN_009832e6(uVar2);
    if (iVar1 != 0) {
      FUN_0058ceb0(0x1772,0x40000000);
      FUN_00584740();
      if (DAT_00b02d70 != *(char *)(iVar1 + 0x114)) {
        DAT_00b3b740 = 1;
      }
      if (DAT_00b42f48 < 5) {
        DAT_00b06f14 = 0;
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ddea0(void)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  int *in_ECX;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)FUN_00588bd0(0xfb5);
  fVar1 = (float)((fVar4 / (float10)100.0) * ((float10)_DAT_00b14864 - (float10)_DAT_00b1485c) +
                 (float10)_DAT_00b1485c);
  if ((fVar1 != _DAT_00b06c2c) && (0.0 < fVar1)) {
    DAT_00b34fa4 = 1;
    _DAT_00b06c2c = fVar1;
  }
  if (in_ECX[0x3a] != 0) {
    fVar4 = (float10)FUN_00588bd0(0xfb5);
    fVar5 = (float10)FUN_00588bd0(0xfb5);
    fVar1 = (_DAT_00b1483c - _DAT_00b14834) * ((float)fVar4 / 100.0) + _DAT_00b14834;
    fVar3 = _DAT_00b1484c + (_DAT_00b14854 - _DAT_00b1484c) * ((float)fVar5 / 100.0);
    if (fVar3 < fVar1) {
      if (in_ECX[0x3a] == in_ECX[0x21]) {
        FUN_0058ceb0(0xfb3,0xc7c34f80);
        FUN_0058ceb0(0xfb3,((fVar1 - _DAT_00b1484c) / (_DAT_00b14854 - _DAT_00b1484c)) * 100.0);
      }
      else {
        FUN_0058ceb0(0xfb3,0xc7c34f80);
        FUN_0058ceb0(0xfb3,((fVar3 - _DAT_00b14834) / (_DAT_00b1483c - _DAT_00b14834)) * 100.0);
      }
      FUN_0058ceb0(0xfb3,0);
    }
  }
  if (((uint)(*(int *)(in_ECX[0x44] + 0xc) * 4) < (uint)(*(int *)(in_ECX[0x44] + 8) * 3)) &&
     (((fVar4 = (float10)FUN_00588bd0(0xfdd), fVar4 == (float10)1.0 ||
       (fVar4 = (float10)FUN_00588bd0(0xfdd), fVar4 == (float10)1.0)) ||
      (fVar4 = (float10)FUN_00588bd0(0xfdd), fVar4 == (float10)1.0)))) {
    uVar2 = 0x40000000;
  }
  else {
    uVar2 = 0x3f800000;
  }
  FUN_0058ceb0(0xfb1,uVar2);
  fVar4 = (float10)FUN_00588bd0(0xfb5);
  if ((fVar4 < (float10)100.0) && (DAT_00b43077 != '\0')) {
    (**(code **)(*in_ECX + 0xc))(9,in_ECX[0x12]);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005de2e0(void)

{
  float fVar1;
  undefined4 uVar2;
  int in_ECX;
  float local_4;
  
  if ((undefined4 *)(&PTR_DAT_00b147d8)[*(int *)(in_ECX + 0xec)] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(&PTR_DAT_00b147d8)[*(int *)(in_ECX + 0xec)];
  }
  FUN_0058ced0(0xfde,uVar2);
  if ((undefined4 *)(&PTR_DAT_00b147e4)[*(int *)(in_ECX + 0xf0)] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(&PTR_DAT_00b147e4)[*(int *)(in_ECX + 0xf0)];
  }
  FUN_0058ced0(0xfde,uVar2);
  if ((undefined4 *)(&PTR_DAT_00b147f0)[*(int *)(in_ECX + 0xf8)] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(&PTR_DAT_00b147f0)[*(int *)(in_ECX + 0xf8)];
  }
  FUN_0058ced0(0xfde,uVar2);
  if ((undefined4 *)(&PTR_DAT_00b147e4)[*(int *)(in_ECX + 0xf4)] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(&PTR_DAT_00b147e4)[*(int *)(in_ECX + 0xf4)];
  }
  FUN_0058ced0(0xfde,uVar2);
  FUN_0058ceb0(0xfb3,0xc7c34f80);
  if (_DAT_00b14804 <= _DAT_00b0760c) {
    local_4 = _DAT_00b0760c;
  }
  else {
    local_4 = _DAT_00b14804;
  }
  if (local_4 <= _DAT_00b1480c) {
    if (_DAT_00b14804 <= _DAT_00b0760c) {
      local_4 = _DAT_00b0760c;
    }
    else {
      local_4 = _DAT_00b14804;
    }
  }
  else {
    local_4 = _DAT_00b1480c;
  }
  FUN_0058ceb0(0xfb3,((local_4 - _DAT_00b14804) / (_DAT_00b1480c - _DAT_00b14804)) * 100.0);
  FUN_0058ceb0(0xfb3,0);
  FUN_0058ceb0(0xfb3,0xc7c34f80);
  if (_DAT_00b1481c <= _DAT_00b0762c) {
    local_4 = _DAT_00b0762c;
  }
  else {
    local_4 = _DAT_00b1481c;
  }
  if (local_4 <= _DAT_00b14824) {
    if (_DAT_00b1481c <= _DAT_00b0762c) {
      local_4 = _DAT_00b0762c;
    }
    else {
      local_4 = _DAT_00b1481c;
    }
  }
  else {
    local_4 = _DAT_00b14824;
  }
  FUN_0058ceb0(0xfb3,((local_4 - _DAT_00b1481c) / (_DAT_00b14824 - _DAT_00b1481c)) * 100.0);
  FUN_0058ceb0(0xfb3,0);
  FUN_0058ceb0(0xfb3,0xc7c34f80);
  if (_DAT_00b14834 <= _DAT_00b07624) {
    local_4 = _DAT_00b07624;
  }
  else {
    local_4 = _DAT_00b14834;
  }
  if (local_4 <= _DAT_00b1483c) {
    if (_DAT_00b14834 <= _DAT_00b07624) {
      local_4 = _DAT_00b07624;
    }
    else {
      local_4 = _DAT_00b14834;
    }
  }
  else {
    local_4 = _DAT_00b1483c;
  }
  FUN_0058ceb0(0xfb3,((local_4 - _DAT_00b14834) / (_DAT_00b1483c - _DAT_00b14834)) * 100.0);
  FUN_0058ceb0(0xfb3,0);
  FUN_0058ceb0(0xfb3,0xc7c34f80);
  if (_DAT_00b1484c <= _DAT_00b0761c) {
    local_4 = _DAT_00b0761c;
  }
  else {
    local_4 = _DAT_00b1484c;
  }
  if (local_4 <= _DAT_00b14854) {
    if (_DAT_00b1484c <= _DAT_00b0761c) {
      local_4 = _DAT_00b0761c;
    }
    else {
      local_4 = _DAT_00b1484c;
    }
  }
  else {
    local_4 = _DAT_00b14854;
  }
  FUN_0058ceb0(0xfb3,((local_4 - _DAT_00b1484c) / (_DAT_00b14854 - _DAT_00b1484c)) * 100.0);
  FUN_0058ceb0(0xfb3,0);
  FUN_0058ceb0(0xfb3,0xc7c34f80);
  if (400.0 <= _DAT_00b09b18) {
    local_4 = _DAT_00b09b18;
  }
  else {
    local_4 = 400.0;
  }
  if (local_4 <= 8000.0) {
    fVar1 = _DAT_00b09b18;
    if (_DAT_00b09b18 < 400.0) {
      fVar1 = 400.0;
    }
  }
  else {
    fVar1 = 8000.0;
  }
  FUN_0058ceb0(0xfb3,((fVar1 - 400.0) / 7600.0) * 100.0);
  FUN_0058ceb0(0xfb3,0);
  FUN_0058ceb0(0xfb3,0xc7c34f80);
  FUN_0058ceb0(0xfb3,(float)DAT_00b06f04);
  FUN_0058ceb0(0xfb3,0);
  FUN_0058ceb0(0xfb3,0xc7c34f80);
  FUN_0058ceb0(0xfb3,(float)DAT_00b06efc);
  FUN_0058ceb0(0xfb3,0);
  FUN_0058ceb0(0xfb3,0xc7c34f80);
  if (_DAT_00b1488c <= _DAT_00b4308c) {
    local_4 = _DAT_00b4308c;
  }
  else {
    local_4 = _DAT_00b1488c;
  }
  if (local_4 <= _DAT_00b14894) {
    if (_DAT_00b1488c <= _DAT_00b4308c) {
      local_4 = _DAT_00b4308c;
    }
    else {
      local_4 = _DAT_00b1488c;
    }
  }
  else {
    local_4 = _DAT_00b14894;
  }
  FUN_0058ceb0(0xfb3,((local_4 - _DAT_00b1488c) / (_DAT_00b14894 - _DAT_00b1488c)) * 100.0);
  FUN_0058ceb0(0xfb3,0);
  FUN_0058ceb0(0xfb3,0xc7c34f80);
  FUN_0058ceb0(0xfb3,(_DAT_00b0312c - 0.0) * 100.0);
  FUN_0058ceb0(0xfb3,0);
  FUN_0058ceb0(0xfb3,0xc7c34f80);
  FUN_0058ceb0(0xfb3,((_DAT_00b06f64 - _DAT_00b1485c) / (_DAT_00b14864 - _DAT_00b1485c)) * 100.0);
  FUN_0058ceb0(0xfb3,0);
  return;
}



void FUN_005de920(void)

{
  char *pcVar1;
  int in_ECX;
  char local_4 [4];
  
  _sprintf(local_4,"%dx",*(undefined4 *)(in_ECX + 0xfc));
  pcVar1 = local_4;
  if (*(int *)(in_ECX + 0xfc) == 0) {
    pcVar1 = DAT_00b38d80;
  }
  FUN_0058ced0(0xfb3,pcVar1);
  return;
}



void FUN_005de9c0(char param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((((in_ECX != -0x28) && (*(int *)(in_ECX + 0x94) != 0)) && (*(int *)(in_ECX + 0x9c) != 0)) &&
     (*(int *)(in_ECX + 0xa0) != 0)) {
    if (param_1 == '\0') {
      FUN_0058ceb0(0xfaf,0x3f800000);
      uVar1 = 0x3f800000;
    }
    else {
      FUN_0058ceb0(0xfb3,0x42c80000);
      FUN_0058ceb0(0xfb3,0);
      FUN_0058ceb0(0xfaf,0x40000000);
      uVar1 = 0x40000000;
    }
    FUN_0058ceb0(0xfaf,uVar1);
  }
  return;
}



void FUN_005dea80(int *param_1)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 4))();
  piVar1[2] = *param_1;
  piVar1[3] = param_1[1];
  piVar1[1] = 0;
  *piVar1 = in_ECX[1];
  if (in_ECX[1] != 0) {
    *(int **)(in_ECX[1] + 4) = piVar1;
    in_ECX[3] = in_ECX[3] + 1;
    in_ECX[1] = (int)piVar1;
    return;
  }
  in_ECX[3] = in_ECX[3] + 1;
  in_ECX[2] = (int)piVar1;
  in_ECX[1] = (int)piVar1;
  return;
}



void FUN_005dead0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c08d8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_14 = 0;
  local_10 = 0;
  local_e = 0;
  iVar1 = *(int *)(in_ECX + 0x110);
  local_4 = 0;
  FUN_00402e30(&local_14,"%d x %d",*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),uVar3);
  if ((uint)(*(int *)(iVar1 + 0xc) * 4) < (uint)(*(int *)(iVar1 + 8) * 3)) {
    FUN_00412fa0(&DAT_00a6dd24);
  }
  uVar2 = local_14;
  FUN_0058ced0(0xfb2,local_14);
  FUN_00401f20(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005deb80(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  float10 fVar10;
  float10 fVar11;
  int *piStack_1c;
  int iStack_18;
  
  puVar2 = (undefined4 *)FUN_00589b70(0x3fa);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  FUN_00582160(0,1);
  fVar10 = (float10)thunk_FUN_00584980();
  uVar3 = FUN_00590420("Data\\Menus\\Options\\video_menu.xml");
  piVar4 = (int *)FUN_005898f0();
  if (piVar4 != (int *)0x0) {
    piStack_1c = piVar4;
    iVar5 = (**(code **)(*piVar4 + 0x34))();
    if (iVar5 == 0x3fa) {
      uVar3 = FUN_009832e6(uVar3,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
      FUN_00584880(uVar3);
      iVar5 = FUN_009832e6(piVar4,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13ba8,0);
      iVar6 = 0;
      piVar4 = (int *)(iVar5 + 0x28);
      uVar9 = 0;
      do {
        if (*piVar4 == 0) {
          FUN_004a7a60("Video Menu Creation Failed... Are your menu and art resources up to date?");
          return 0;
        }
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar6 < 0x30);
      fVar11 = (float10)FUN_00588bd0(0xfa5);
      if ((fVar11 == (float10)6006.0) ||
         (fVar11 = (float10)FUN_00588bd0(0xfa5), fVar11 == (float10)102.0)) {
        FUN_0058ceb0(0xfab,(float)fVar10);
      }
      *(undefined1 *)(iVar5 + 0x115) = 1;
      if (DAT_00b06cb4 == '\0') {
        DAT_00b06cf4 = 0;
        DAT_00b06cec = 0;
      }
      FUN_0059b640(*(undefined4 *)(iVar5 + 0x48),DAT_00b43077);
      FUN_0059b640(*(undefined4 *)(iVar5 + 0x4c),DAT_00b06f0c);
      FUN_0059b640(*(undefined4 *)(iVar5 + 0x78),DAT_00b06f14);
      FUN_0059b640(*(undefined4 *)(iVar5 + 0x50),DAT_00b06cbc);
      FUN_0059b640(*(undefined4 *)(iVar5 + 0xbc),DAT_00b06de4);
      FUN_0059b640(*(undefined4 *)(iVar5 + 0xc4),DAT_00b07060);
      FUN_0059b640(*(undefined4 *)(iVar5 + 0x9c),DAT_00b09ae8);
      FUN_0059b640(*(undefined4 *)(iVar5 + 0xa0),DAT_00b09af0);
      FUN_0059b640(*(undefined4 *)(iVar5 + 200),DAT_00b07090);
      FUN_0059b640(*(undefined4 *)(iVar5 + 0xcc),DAT_00b430ad);
      FUN_0059b640(*(undefined4 *)(iVar5 + 0xe0),DAT_00b06d34);
      FUN_005de9c0(DAT_00b43077);
      *(undefined4 *)(iVar5 + 0xec) = DAT_00b4205c;
      if (_DAT_00b097c8 <= 0.0) {
        *(undefined4 *)(iVar5 + 0xf0) = 0;
      }
      else {
        *(uint *)(iVar5 + 0xf0) = (DAT_00b06f5c != '\0') + 1;
      }
      if (DAT_00b42f48 < 5) {
        FUN_0058ceb0(0xfaf,0x3f800000);
        *(undefined4 *)(iVar5 + 0xf4) = 0;
      }
      else if (DAT_00b06f2c == 2) {
        *(undefined4 *)(iVar5 + 0xf4) = 2;
      }
      else {
        *(uint *)(iVar5 + 0xf4) = (uint)(DAT_00b06f2c == 1);
      }
      *(uint *)(iVar5 + 0xf8) = (uint)(DAT_00b07058 != '\0');
      uVar7 = DAT_00b06d0c & ((int)DAT_00b06d0c < 2) - 1;
      *(uint *)(iVar5 + 0xfc) = uVar7;
      cVar1 = FUN_00497d50(uVar7);
      if (cVar1 == '\0') {
        *(undefined4 *)(iVar5 + 0xfc) = 0;
      }
      FUN_005de920();
      uVar7 = (**(code **)(*DAT_00b42154 + 0x18))(DAT_00b42154,DAT_00b06c54,0x16);
      if (uVar7 != 0) {
        do {
          (**(code **)(*DAT_00b42154 + 0x1c))(DAT_00b42154,DAT_00b06c54,0x16,uVar9,&piStack_1c);
          puVar2 = *(undefined4 **)(iVar5 + 0x104);
          do {
            puVar8 = puVar2;
            if (puVar8 == (undefined4 *)0x0) goto LAB_005deee1;
            puVar2 = (undefined4 *)*puVar8;
          } while ((piStack_1c != (int *)puVar8[2]) || (iStack_18 != puVar8[3]));
          if (puVar8 == (undefined4 *)0x0) {
LAB_005deee1:
            if (0x4afff < (uint)(iStack_18 * (int)piStack_1c)) {
              FUN_005dea80(&stack0xffffffdc);
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar7);
      }
      puVar2 = *(undefined4 **)(iVar5 + 0x104);
      do {
        puVar8 = puVar2;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
          break;
        }
        puVar2 = (undefined4 *)*puVar8;
      } while ((DAT_00b06c4c != puVar8[2]) || (DAT_00b06c50 != puVar8[3]));
      *(undefined4 **)(iVar5 + 0x110) = puVar8;
      if (puVar8 == (undefined4 *)0x0) {
        *(undefined4 **)(iVar5 + 0x110) = *(undefined4 **)(iVar5 + 0x104);
      }
      FUN_005dead0();
      FUN_0058ceb0(0xfaf,(float)_DAT_00b1487c);
      FUN_0058ceb0(0xfb0,(float)DAT_00b14884);
      FUN_0058ceb0(0xfb1,0x3f800000);
      FUN_0058ceb0(0xfb2,(float)((int)((DAT_00b14884 - _DAT_00b1487c) +
                                      (DAT_00b14884 - _DAT_00b1487c >> 0x1f & 3U)) >> 2));
      FUN_0058ceb0(0xfaf,(float)_DAT_00b1486c);
      FUN_0058ceb0(0xfb0,(float)DAT_00b14874);
      FUN_0058ceb0(0xfb1,0x3f800000);
      FUN_0058ceb0(0xfb2,(float)((int)((DAT_00b14874 - _DAT_00b1486c) +
                                      (DAT_00b14874 - _DAT_00b1486c >> 0x1f & 3U)) >> 2));
      if (DAT_00b34fa5 == '\0') {
        FUN_0058ceb0(0xfbb,0x3f800000);
      }
      FUN_005de2e0();
      FUN_0058ceb0(0xfb3,0xc7c34f80);
      FUN_0058ceb0(0xfb3,0);
      DAT_00b3b740 = 0;
      *(undefined1 *)(iVar5 + 0x114) = DAT_00b02d70;
      DAT_00b3b744 = 0;
      if (((DAT_00b06cc4 == '\0') || (DAT_00b350d6 == '\0')) &&
         (FUN_0058ceb0(0xfaf,0x3f800000), *(int *)(iVar5 + 0xbc) != 0)) {
        FUN_0058ced0(0xfde,DAT_00b38da8);
      }
      if ((DAT_00b42f48 < 5) && (FUN_0058ceb0(0xfaf,0x3f800000), *(int *)(iVar5 + 0x78) != 0)) {
        FUN_0058ced0(0xfde,DAT_00b38da8);
      }
      FUN_00585190(0);
      return 1;
    }
    if (piVar4[1] != 0) {
      (**(code **)*piVar4)(1);
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005df160(undefined4 param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  char cVar10;
  float10 fVar11;
  double local_20;
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_009c2180;
  local_14 = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_14;
  switch(param_1) {
  case 1:
    iVar6 = in_ECX[0x44];
    if ((*(int *)(iVar6 + 8) != DAT_00b06c4c) || (*(int *)(iVar6 + 0xc) != DAT_00b06c50)) {
      FUN_00579c10(DAT_00b38ce0,0,1,DAT_00b38cf0,0);
    }
    FUN_00497c10(*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0xc));
    DAT_00b06d24 = in_ECX[0x3b];
    DAT_00b2c678 = -(uint)(DAT_00b06cf4 != '\0') & 2 | -(uint)(DAT_00b06cec != '\0') & 8;
    DAT_00b06cb4 = DAT_00b2c678 != 0;
    DAT_00b4205c = DAT_00b06d24;
    if (DAT_00b06cbc == '\0') {
      FUN_00441850(0);
      FUN_00482670();
      DAT_00b42f40 = DAT_00b42f40 & 0xffffffdf;
    }
    else {
      FUN_004826f0();
      DAT_00b42f40 = DAT_00b42f40 | 0x20;
    }
    pfVar5 = (float *)FUN_00403c00();
    local_20 = (double)*pfVar5;
    pfVar5 = (float *)FUN_00403c00();
    local_20 = (double)((float)local_20 - *pfVar5);
    fVar11 = (float10)FUN_00588bd0(0xfb5);
    local_20 = (double)((fVar11 / (float10)100.0) * (float10)local_20);
    pfVar5 = (float *)FUN_00403c00();
    _DAT_00b0760c = *pfVar5 + (float)local_20;
    FUN_0055fcb0();
    pfVar5 = (float *)FUN_00403c00();
    local_20 = (double)*pfVar5;
    pfVar5 = (float *)FUN_00403c00();
    local_20 = (double)((float)local_20 - *pfVar5);
    fVar11 = (float10)FUN_00588bd0(0xfb5);
    local_20 = (double)((fVar11 / (float10)100.0) * (float10)local_20);
    pfVar5 = (float *)FUN_00403c00();
    _DAT_00b0762c = *pfVar5 + (float)local_20;
    pfVar5 = (float *)FUN_00403c00();
    local_20 = (double)*pfVar5;
    pfVar5 = (float *)FUN_00403c00();
    local_20 = (double)((float)local_20 - *pfVar5);
    fVar11 = (float10)FUN_00588bd0(0xfb5);
    local_20 = (double)((fVar11 / (float10)100.0) * (float10)local_20);
    pfVar5 = (float *)FUN_00403c00();
    _DAT_00b07624 = *pfVar5 + (float)local_20;
    pfVar5 = (float *)FUN_00403c00();
    local_20 = (double)*pfVar5;
    pfVar5 = (float *)FUN_00403c00();
    local_20 = (double)((float)local_20 - *pfVar5);
    fVar11 = (float10)FUN_00588bd0(0xfb5);
    local_20 = (double)((fVar11 / (float10)100.0) * (float10)local_20);
    pfVar5 = (float *)FUN_00403c00();
    _DAT_00b0761c = *pfVar5 + (float)local_20;
    fVar11 = (float10)FUN_00588bd0(0xfb5);
    _DAT_00b09b18 = (float)((fVar11 / (float10)100.0) * (float10)7600.0 + (float10)400.0);
    pfVar5 = (float *)FUN_00403c00();
    if (*pfVar5 < 400.5 == (*pfVar5 == 400.5)) {
      pfVar5 = (float *)FUN_00403c00();
      _DAT_00b09b10 = *pfVar5 - 1000.0;
      pfVar5 = (float *)FUN_00403c00();
      if (*pfVar5 < 0.0) {
        _DAT_00b09b10 = 0.0;
      }
    }
    else {
      _DAT_00b09b18 = 0.0;
      _DAT_00b09b10 = 0.0;
      FUN_007c4ce0();
    }
    uVar7 = 0;
    FUN_00582160(0,0,0);
    iVar6 = FUN_0057cfa0(uVar7);
    if (iVar6 != 0x414) {
      FUN_0066b710(1);
    }
    FUN_00588bd0(0xfb5);
    DAT_00b06efc = FUN_009828c0();
    FUN_00588bd0(0xfb5);
    DAT_00b06f04 = FUN_009828c0();
    pfVar5 = (float *)FUN_00403c00();
    local_20 = (double)*pfVar5;
    pfVar5 = (float *)FUN_00403c00();
    local_20 = (double)((float)local_20 - *pfVar5);
    fVar11 = (float10)FUN_00588bd0(0xfb5);
    local_20 = (double)((fVar11 / (float10)100.0) * (float10)local_20);
    pfVar5 = (float *)FUN_00403c00();
    fVar3 = (float)local_20;
    local_20._0_4_ = *pfVar5 + fVar3;
    FUN_00497d20(*pfVar5 + fVar3);
    fVar11 = (float10)FUN_00588bd0(0xfb5);
    _DAT_00b0312c = (float)(fVar11 / (float10)100.0 + (float10)0.0);
    if (in_ECX[0x3c] == 0) {
      _DAT_00b097c8 = 0;
    }
    else {
      _DAT_00b097c8 = 0x41200000;
    }
    local_20 = (double)CONCAT44(local_20._4_4_,_DAT_00b097c8);
    DAT_00b06f5c = in_ECX[0x3c] == 2;
    if (in_ECX[0x3d] == 2) {
      DAT_00b06f2c = 2;
      uVar7 = 2;
    }
    else if (in_ECX[0x3d] == 1) {
      DAT_00b06f2c = 1;
      uVar7 = 1;
    }
    else {
      DAT_00b06f2c = 0;
      uVar7 = 0;
    }
    FUN_00497ab0(uVar7);
    DAT_00b07058 = in_ECX[0x3e] == 1;
    FUN_00499ef0();
    DAT_00b06f84 = DAT_00b430ad;
    FUN_00497dc0(in_ECX[0x3f]);
    FUN_005dde20();
    FUN_005bd610();
    *unaff_FS_OFFSET = local_14;
    return;
  default:
    goto switchD_005df1a4_caseD_2;
  case 4:
    fVar11 = (float10)FUN_00588bd0(0xfc9);
    if (fVar11 == (float10)2.0) {
      DAT_00b43077 = '\x01';
      DAT_00b02d70 = 1;
      uVar7 = FUN_00404e10();
      FUN_0059b640(in_ECX[0x12],uVar7);
    }
    in_ECX[0x3b] = 0;
    puVar8 = (undefined4 *)FUN_00403c00();
    _DAT_00b0760c = (float)*puVar8;
    puVar8 = (undefined4 *)FUN_00403c00();
    _DAT_00b0762c = (float)*puVar8;
    puVar8 = (undefined4 *)FUN_00403c00();
    _DAT_00b07624 = (float)*puVar8;
    puVar8 = (undefined4 *)FUN_00403c00();
    _DAT_00b0761c = (float)*puVar8;
    DAT_00b06f0c = '\0';
    DAT_00b06f14 = '\0';
    _DAT_00b09b18 = 3000.0;
    DAT_00b06cbc = '\x01';
    cVar10 = FUN_005ddd00();
    DAT_00b06de4 = cVar10 != '\0';
    DAT_00b07060 = '\x01';
    DAT_00b09ae8 = '\x01';
    DAT_00b09af0 = '\x01';
    DAT_00b07090 = '\x01';
    DAT_00b430ad = '\x01';
    cVar10 = FUN_005ddd00();
    DAT_00b06d34 = cVar10 == '\0';
    FUN_00497ae0(0x3f800000);
    FUN_00497c30();
    if (in_ECX[0x13] != 0) {
      FUN_0058ced0(0xfde,DAT_00b38da8);
    }
    if (in_ECX[0x1e] != 0) {
      FUN_0058ced0(0xfde,DAT_00b38da8);
    }
    if (in_ECX[0x14] != 0) {
      FUN_0058ced0(0xfde,DAT_00b38da0);
    }
    FUN_0059b640(in_ECX[0x2f],DAT_00b06de4);
    if (in_ECX[0x31] != 0) {
      FUN_0058ced0(0xfde,DAT_00b38da0);
    }
    if (in_ECX[0x27] != 0) {
      FUN_0058ced0(0xfde,DAT_00b38da0);
    }
    if (in_ECX[0x28] != 0) {
      FUN_0058ced0(0xfde,DAT_00b38da0);
    }
    if (in_ECX[0x32] != 0) {
      FUN_0058ced0(0xfde,DAT_00b38da0);
    }
    if (in_ECX[0x33] != 0) {
      FUN_0058ced0(0xfde,DAT_00b38da0);
    }
    FUN_0059b640(in_ECX[0x38],DAT_00b06d34);
    puVar8 = (undefined4 *)in_ECX[0x41];
    do {
      puVar9 = puVar8;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
        break;
      }
      puVar8 = (undefined4 *)*puVar9;
    } while ((puVar9[2] != 0x280) || (puVar9[3] != 0x1e0));
    in_ECX[0x44] = (int)puVar9;
    if (puVar9 == (undefined4 *)0x0) {
      in_ECX[0x44] = in_ECX[0x41];
    }
    FUN_005dead0();
    DAT_00b06efc = 2;
    DAT_00b06f04 = 4;
    FUN_00497d20(0x43fa0000);
    _DAT_00b0312c = 1.0;
    in_ECX[0x3c] = 2;
    in_ECX[0x3d] = 0;
    in_ECX[0x3e] = 0;
    in_ECX[0x3f] = 0;
    FUN_005de920();
    FUN_005de2e0();
    goto switchD_005df1a4_caseD_2;
  case 8:
  case 0x1a:
    iVar6 = FUN_00587c20(param_1);
    piVar1 = (int *)in_ECX[0x44];
    if (iVar6 == 7) {
      if (piVar1 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar1;
      }
      in_ECX[0x44] = iVar6;
      if (iVar6 == 0) {
        in_ECX[0x44] = in_ECX[0x41];
      }
    }
    else {
      iVar6 = FUN_005ddce0(piVar1);
      in_ECX[0x44] = iVar6;
      if (iVar6 == 0) {
        in_ECX[0x44] = in_ECX[0x42];
      }
    }
    FUN_005dead0();
    iVar6 = ((uint)(*(int *)(in_ECX[0x44] + 0xc) * 4) < (uint)(*(int *)(in_ECX[0x44] + 8) * 3)) + 1;
    local_20 = (double)CONCAT44(local_20._4_4_,iVar6);
    FUN_0058ceb0(0xfb1,(float)iVar6);
    *unaff_FS_OFFSET = local_14;
    return;
  case 9:
    DAT_00b02d70 = DAT_00b43077 == '\0';
    DAT_00b43077 = DAT_00b02d70;
    cVar10 = FUN_00404e10();
    local_20 = (double)CONCAT71(local_20._1_7_,cVar10);
    FUN_005de9c0(local_20._0_4_);
    break;
  case 10:
    DAT_00b06f0c = DAT_00b06f0c == '\0';
    cVar10 = FUN_00404e10();
    break;
  case 0xb:
    cVar10 = DAT_00b06cbc == '\0';
    DAT_00b06cbc = cVar10;
    break;
  case 0x14:
    do {
      in_ECX[0x3b] = in_ECX[0x3b] + 1;
      if (3 < in_ECX[0x3b]) {
        in_ECX[0x3b] = 0;
        break;
      }
    } while (2 < in_ECX[0x3b]);
    FUN_005ddd20();
    if ((_DAT_00b3b744 & 8) == 0) {
      FUN_00579c10(DAT_00b38ce8,0,0,DAT_00b38cf0,0);
      _DAT_00b3b744 = _DAT_00b3b744 | 8;
      *unaff_FS_OFFSET = local_14;
      return;
    }
    goto switchD_005df1a4_caseD_2;
  case 0x15:
    DAT_00b06f14 = DAT_00b06f14 == '\0';
    cVar10 = FUN_00404e10();
    break;
  case 0x1e:
    DAT_00b09ae8 = DAT_00b09ae8 == '\0';
    cVar10 = FUN_00404e10();
    if ((_DAT_00b3b744 & 2) == 0) {
      FUN_00579c10(DAT_00b38ce8,0,0,DAT_00b38cf0,0);
      _DAT_00b3b744 = _DAT_00b3b744 | 2;
    }
    break;
  case 0x1f:
    DAT_00b09af0 = DAT_00b09af0 == '\0';
    cVar10 = FUN_00404e10();
    if ((_DAT_00b3b744 & 4) == 0) {
      FUN_00579c10(DAT_00b38ce8,0,0,DAT_00b38cf0,0);
      _DAT_00b3b744 = _DAT_00b3b744 | 4;
    }
    break;
  case 0x26:
    if ((*(char *)((int)in_ECX + 0x115) != '\0') && (DAT_00b06de4 == '\0')) {
      if (in_ECX[0x3f] != 0) {
        in_ECX[0x3f] = 0;
        FUN_005de920();
        if ((_DAT_00b3b744 & 0x20) == 0) {
          local_20 = 0.0;
          local_c = 1;
          FUN_00402e30(&local_20,"%s %s %s %s.",DAT_00b3b760,DAT_00b3b750,DAT_00b3b768,DAT_00b3b758)
          ;
          FUN_00579c10(local_20._0_4_,&LAB_005de960,0,DAT_00b38cf0,0);
          _DAT_00b3b744 = _DAT_00b3b744 | 0x20;
          DAT_00b147f8 = 0;
          local_c = 0xffffffff;
          FUN_00402da0();
        }
      }
      if (DAT_00b06d34 != '\0') {
        pcVar2 = *(code **)(*in_ECX + 0xc);
        *(undefined1 *)((int)in_ECX + 0x115) = 0;
        (*pcVar2)(0x2f,in_ECX[0x38]);
        *(undefined1 *)((int)in_ECX + 0x115) = 1;
        if ((DAT_00b147f8 == -1) && ((_DAT_00b3b744 & 0x100) == 0)) {
          local_20 = 0.0;
          local_c = 2;
          FUN_00402e30(&local_20,"%s %s %s %s.",DAT_00b3b770,DAT_00b3b750,DAT_00b3b768,DAT_00b3b758)
          ;
          FUN_00579c10(local_20._0_4_,&LAB_005de960,0,DAT_00b38cf0,0);
          _DAT_00b3b744 = _DAT_00b3b744 | 0x100;
          DAT_00b147f8 = 0;
          local_c = 0xffffffff;
          FUN_00402da0();
        }
      }
    }
    cVar10 = DAT_00b06de4 == '\0';
    DAT_00b06de4 = cVar10;
    if (((DAT_00b147f8 == -1) && (*(char *)((int)in_ECX + 0x115) != '\0')) &&
       ((_DAT_00b3b744 & 1) == 0)) {
      FUN_00579c10(DAT_00b38ce8,0,0,DAT_00b38cf0,0);
      _DAT_00b3b744 = _DAT_00b3b744 | 1;
    }
    break;
  case 0x27:
    do {
      in_ECX[0x3e] = in_ECX[0x3e] + 1;
      if (2 < in_ECX[0x3e]) {
        in_ECX[0x3e] = 0;
        FUN_005ddda0();
        *unaff_FS_OFFSET = local_14;
        return;
      }
    } while (1 < in_ECX[0x3e]);
    FUN_005ddda0();
    *unaff_FS_OFFSET = local_14;
    return;
  case 0x28:
    DAT_00b07060 = DAT_00b07060 == '\0';
    cVar10 = FUN_00404e10();
    break;
  case 0x29:
    DAT_00b07090 = DAT_00b07090 == '\0';
    cVar10 = FUN_00404e10();
    break;
  case 0x2a:
    cVar10 = DAT_00b430ad == '\0';
    DAT_00b430ad = cVar10;
    break;
  case 0x2b:
    do {
      in_ECX[0x3c] = in_ECX[0x3c] + 1;
      if (3 < in_ECX[0x3c]) {
        in_ECX[0x3c] = 0;
        FUN_005ddd60();
        *unaff_FS_OFFSET = local_14;
        return;
      }
    } while (2 < in_ECX[0x3c]);
    FUN_005ddd60();
    *unaff_FS_OFFSET = local_14;
    return;
  case 0x2d:
  case 0x2e:
    if ((in_ECX[0x3f] == 0) && (DAT_00b06de4 != '\0')) {
      pcVar2 = *(code **)(*in_ECX + 0xc);
      *(undefined1 *)((int)in_ECX + 0x115) = 0;
      (*pcVar2)(0x26,in_ECX[0x2f]);
      *(undefined1 *)((int)in_ECX + 0x115) = 1;
      if ((_DAT_00b3b744 & 0x40) == 0) {
        local_20 = 0.0;
        local_c = 0;
        FUN_00402e30(&local_20,"%s %s %s %s.",DAT_00b3b768,DAT_00b3b750,DAT_00b3b760,DAT_00b3b758);
        FUN_00579c10(local_20._0_4_,&LAB_005de960,0,DAT_00b38cf0,0);
        _DAT_00b3b744 = _DAT_00b3b744 | 0x40;
        DAT_00b147f8 = 4;
        local_c = 0xffffffff;
        FUN_00402da0();
      }
    }
    iVar6 = FUN_00587c20(param_1);
    if (iVar6 == 0x2c) {
      do {
        piVar1 = in_ECX + 0x3f;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          in_ECX[0x3f] = 0x10;
        }
        else {
          if (in_ECX[0x3f] == 1) goto LAB_005df7e8;
          if (in_ECX[0x3f] == 0) break;
        }
        cVar10 = FUN_00497d50(in_ECX[0x3f]);
      } while (cVar10 == '\0');
    }
    else {
      do {
        in_ECX[0x3f] = in_ECX[0x3f] + 1;
        iVar6 = in_ECX[0x3f];
        if (0x10 < iVar6) goto LAB_005df7e8;
        if (iVar6 == 1) {
          in_ECX[0x3f] = 2;
        }
        else if (iVar6 == 0) break;
        cVar10 = FUN_00497d50(in_ECX[0x3f]);
      } while (cVar10 == '\0');
    }
    goto LAB_005df7ee;
  case 0x2f:
    cVar10 = false;
    if (DAT_00b06d34 == '\0') {
      if (DAT_00b06de4 != '\0') {
        pcVar2 = *(code **)(*in_ECX + 0xc);
        *(undefined1 *)((int)in_ECX + 0x115) = 0;
        (*pcVar2)(0x26,in_ECX[0x2f]);
        *(undefined1 *)((int)in_ECX + 0x115) = 1;
        if ((_DAT_00b3b744 & 0x80) == 0) {
          local_20 = 0.0;
          local_c = 3;
          FUN_00402e30(&local_20,"%s %s %s %s.",DAT_00b3b768,DAT_00b3b750,DAT_00b3b770,DAT_00b3b758)
          ;
          FUN_00579c10(local_20._0_4_,&LAB_005de960,0,DAT_00b38cf0,0);
          _DAT_00b3b744 = _DAT_00b3b744 | 0x80;
          DAT_00b147f8 = 9;
          local_c = 0xffffffff;
          FUN_00402da0();
        }
      }
      cVar10 = DAT_00b06d34 == '\0';
    }
    DAT_00b06d34 = cVar10;
    if ((DAT_00b147f8 == -1) && ((_DAT_00b3b744 & 0x200) == 0)) {
      FUN_00579c10(DAT_00b38ce8,0,0,DAT_00b38cf0,0);
      _DAT_00b3b744 = _DAT_00b3b744 | 0x200;
    }
    break;
  case 0x30:
    do {
      in_ECX[0x3d] = in_ECX[0x3d] + 1;
      if (3 < in_ECX[0x3d]) {
        in_ECX[0x3d] = 0;
        FUN_005ddde0(uVar4);
        *unaff_FS_OFFSET = local_14;
        return;
      }
    } while (2 < in_ECX[0x3d]);
    FUN_005ddde0(uVar4);
    *unaff_FS_OFFSET = local_14;
    return;
  }
  if (param_2 != 0) {
    uVar7 = DAT_00b38da0;
    if (cVar10 == '\0') {
      uVar7 = DAT_00b38da8;
    }
    FUN_0058ced0(0xfde,uVar7);
    *unaff_FS_OFFSET = local_14;
    return;
  }
switchD_005df1a4_caseD_2:
  *unaff_FS_OFFSET = local_14;
  return;
LAB_005df7e8:
  in_ECX[0x3f] = 0;
LAB_005df7ee:
  FUN_005de920();
  if ((DAT_00b147f8 == -1) && ((_DAT_00b3b744 & 0x10) == 0)) {
    FUN_00579c10(DAT_00b38ce8,0,0,DAT_00b38cf0,0);
    _DAT_00b3b744 = _DAT_00b3b744 | 0x10;
    *unaff_FS_OFFSET = local_14;
    return;
  }
  goto switchD_005df1a4_caseD_2;
}


