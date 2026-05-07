
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006100b0(undefined4 param_1,int *param_2,int param_3,undefined4 param_4,int param_5)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  int *piVar10;
  int *piVar11;
  int *local_158;
  float local_154;
  int *piStack_150;
  int local_14c;
  int local_148;
  uint uStack_144;
  undefined4 local_140;
  char acStack_13c [300];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c316c;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_158;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffe98;
  *unaff_FS_OFFSET = (int)&local_c;
  local_140 = param_1;
  local_148 = param_5;
  if (in_ECX == DAT_00b333c4) {
    DAT_00b333c4[0x1b2] = DAT_00b333c4[0x1b2] + param_3;
  }
  else {
    iVar4 = (**(code **)(*in_ECX + 0x284))(0x1f,uVar3);
    if (iVar4 == 100) goto LAB_00610510;
  }
  iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  local_14c = param_5;
  if ((param_5 == 0) && (iVar4 != 0)) {
    local_14c = FUN_004db6b0();
  }
  iVar4 = FUN_005e32f0();
  if ((*(byte *)(iVar4 + 0x70) & 1) == 0) goto LAB_00610510;
  local_154 = (float)FUN_00401f00(0x30);
  if (param_2 == (int *)0x0) {
    local_4 = 1;
    if (local_154 == 0.0) goto LAB_006101d5;
    iVar4 = FUN_006070b0(0,param_1,in_ECX,0,param_4,param_5);
  }
  else {
    local_4 = 0;
    if (local_154 == 0.0) {
LAB_006101d5:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_006070b0(0,param_1,in_ECX,param_2,param_3,param_5);
    }
  }
  local_4 = 0xffffffff;
  fVar9 = (float10)FUN_00470620(param_2);
  local_158 = (int *)(_DAT_00b36c98 * (float)fVar9);
  (**(code **)(*(int *)in_ECX[0x16] + 0x354))(local_158);
  piStack_150 = (int *)FUN_0067a290(iVar4);
  local_158 = piStack_150;
  if (piStack_150 == (int *)0x0) {
    if (iVar4 != 0) {
      FUN_00605e80();
      FUN_00401f20(iVar4);
    }
    uVar6 = DAT_00b38ea8;
    if (param_2 == (int *)0x0) {
      acStack_13c[0] = '\0';
    }
    else {
      uVar5 = (**(code **)(*param_2 + 0xd0))();
      uVar6 = FUN_004da2a0(uVar6,uVar5);
      _sprintf(acStack_13c,"%s %s %s",uVar6);
    }
    FUN_00579b60(acStack_13c);
  }
  else {
    do {
      piVar8 = (int *)*piStack_150;
      if (piVar8 == (int *)0x0) break;
      uStack_144 = uStack_144 & 0xffffff00;
      if ((piVar8 == *(int **)(iVar4 + 8)) || (cVar2 = FUN_004de770(piVar8,1), cVar2 != '\0')) {
        uStack_144 = CONCAT31(uStack_144._1_3_,1);
      }
      cVar2 = FUN_004db760();
      if (((cVar2 == '\0') || (cVar2 = FUN_004db760(), cVar2 != '\0')) &&
         (cVar2 = (**(code **)(*piVar8 + 0x354))(), cVar2 == '\0')) {
        iVar7 = FUN_00605f60(piVar8,uStack_144);
        local_154 = (float)iVar7;
        (**(code **)(*piVar8 + 0x374))(*(undefined4 *)(iVar4 + 0xc),local_154);
        piVar10 = in_ECX;
        piVar11 = piVar8;
        uVar6 = (**(code **)(*piVar8 + 0x224))();
        cVar2 = FUN_00605e20(uVar6,piVar10);
        if (cVar2 == '\0') {
          _DAT_00b361c4 = local_158;
          piVar8[0x39] = *(int *)(iVar4 + 0xc);
          uVar6 = FUN_0052ed50(2,0xe,piVar11);
          if ((*(int *)(iVar4 + 0xc) == 0) ||
             (cVar2 = FUN_005ea050(*(int *)(iVar4 + 0xc)), cVar2 == '\0')) {
            (**(code **)(*(int *)piVar8[0x16] + 0x1a4))(piVar8,uVar6,0,0,1);
          }
          else {
            (**(code **)(*piVar8 + 0x32c))(*(undefined4 *)(iVar4 + 0xc),0,0,0,0,1);
          }
          _DAT_00b361c4 = (int *)0x0;
          param_5 = local_148;
        }
        else {
          cVar2 = FUN_004db760();
          if (cVar2 == '\0') {
            _DAT_00b361c4 = local_158;
            piVar8[0x39] = *(int *)(iVar4 + 0xc);
            uVar6 = FUN_0052ed50(2,3,piVar11);
            (**(code **)(*(int *)piVar8[0x16] + 0x1a4))(piVar8,uVar6,0,0,1);
            FUN_00605f00(in_ECX);
            _DAT_00b361c4 = (int *)0x0;
          }
          FUN_004fbf90(*(undefined4 *)(iVar4 + 0xc),piVar8 + 0x11,0x10000);
          FUN_004fbf90(*(undefined4 *)(iVar4 + 8),piVar8 + 0x11,0x400000);
          (**(code **)(*piVar8 + 0x310))(iVar4,0,1,0);
          param_5 = local_148;
        }
      }
      piStack_150 = (int *)piStack_150[1];
    } while (piStack_150 != (int *)0x0);
    FUN_004526e0();
    FUN_00401f20(local_158);
    iVar7 = FUN_00605f30();
    if (iVar7 == 0) {
      if (iVar4 != 0) {
        FUN_00605e80();
        FUN_00401f20(iVar4);
      }
    }
    else {
      FUN_00675b30(iVar4);
      piVar8 = *(int **)(iVar4 + 0xc);
      iVar4 = FUN_009832e6(param_5,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b02fb4,0);
      if (piVar8 == DAT_00b333c4) {
        if (iVar4 == 0) {
          piVar8 = (int *)FUN_009832e6(param_5,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05374,0);
          if (piVar8 != (int *)0x0) {
            uVar6 = 1;
            piVar10 = piVar8;
            FUN_005e02e0(0);
            iVar4 = FUN_00467510(piVar10,uVar6);
            if (iVar4 != -1) {
              pcVar1 = *(code **)(*piVar8 + 0x40);
              *(byte *)(piVar8 + 0xd) = *(byte *)(piVar8 + 0xd) | 0x10;
              (*pcVar1)(4);
            }
          }
        }
        else {
          FUN_00467f80(2);
        }
      }
    }
  }
  FUN_00401f20(piStack_150);
LAB_00610510:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00610540(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float fStack_140;
  char acStack_13c [300];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c31ae;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&fStack_140;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffeb0;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar3 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0,uVar2);
  cVar1 = FUN_005e6c60();
  if (cVar1 == '\0') {
    iVar4 = FUN_005e32f0();
    if ((*(byte *)(iVar4 + 0x70) & 1) == 0) goto LAB_006108fb;
    cVar1 = (**(code **)(*piVar3 + 0x354))();
    if (cVar1 != '\0') goto LAB_006108fb;
    cVar1 = FUN_004d7f80();
    if (cVar1 == '\0') goto LAB_006108fb;
    iVar4 = FUN_005e32f0();
    if ((*(byte *)(iVar4 + 0x70) & 1) == 0) goto LAB_006108fb;
  }
  if (in_ECX != DAT_00b333c4) {
    iVar4 = (**(code **)(*in_ECX + 0x284))(0x1f);
    if (iVar4 == 100) {
      cVar1 = FUN_005e0550();
      if (cVar1 != '\0') goto LAB_006108fb;
    }
  }
  fStack_140 = (float)FUN_00401f00(0x30);
  uStack_4 = 0;
  if (fStack_140 == 0.0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_006070b0(1,param_1,in_ECX,param_2,param_3,0);
  }
  uStack_4 = 0xffffffff;
  fStack_140 = (float)((uint)fStack_140 & 0xffffff00);
  if (param_1 == *(int **)(iVar4 + 8)) {
LAB_00610678:
    fStack_140 = (float)CONCAT31(fStack_140._1_3_,1);
  }
  else {
    piVar5 = (int *)FUN_004db6b0();
    if (piVar5 == param_1) goto LAB_00610678;
  }
  iVar6 = (**(code **)(*(int *)param_1[0x16] + 0x3b0))(*(undefined4 *)(iVar4 + 0xc));
  if (iVar6 == 0) {
    (**(code **)(*(int *)param_1[0x16] + 0x3b4))(param_1,3);
  }
  else {
    *(undefined4 *)(iVar6 + 4) = 3;
  }
  cVar1 = FUN_004db760();
  if (cVar1 == '\0') {
LAB_0061070e:
    iVar6 = FUN_00605f60(param_1,fStack_140);
    fStack_140 = (float)iVar6;
    (**(code **)(*param_1 + 0x374))(*(undefined4 *)(iVar4 + 0xc),fStack_140);
    uVar7 = (**(code **)(*param_1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4,0);
    iVar6 = FUN_009832e6(uVar7);
    if ((in_ECX == DAT_00b333c4) && (iVar6 != 0)) {
      FUN_00467f80(2);
    }
    uVar7 = *(undefined4 *)(iVar4 + 0xc);
    uVar8 = (**(code **)(*param_1 + 0x224))(uVar7,param_1);
    cVar1 = FUN_00605e20(uVar8,uVar7);
    if (cVar1 == '\0') {
      _DAT_00b361c4 = (**(code **)(*piVar3 + 0x170))();
      param_1[0x39] = *(int *)(iVar4 + 0xc);
      uVar7 = FUN_0052ed50(2,0xd);
      if (*(int *)(iVar4 + 0xc) == 0) {
LAB_0061086a:
        (**(code **)(*(int *)param_1[0x16] + 0x1a4))(param_1,uVar7,0,0,1);
      }
      else {
        cVar1 = FUN_005ea050(*(int *)(iVar4 + 0xc));
        if (cVar1 == '\0') goto LAB_0061086a;
        (**(code **)(*param_1 + 0x32c))(*(undefined4 *)(iVar4 + 0xc),0,0,0,0,1);
      }
      _DAT_00b361c4 = 0;
    }
    else {
      (**(code **)(*(int *)piVar3[0x16] + 0xb0))(1);
      cVar1 = FUN_005e8a90();
      if (cVar1 == '\0') {
        _DAT_00b361c4 = (**(code **)(*piVar3 + 0x170))();
        FUN_00605f00(in_ECX);
        param_1[0x39] = *(int *)(iVar4 + 0xc);
        uVar7 = FUN_0052ed50(2,7);
        (**(code **)(*(int *)param_1[0x16] + 0x1a4))(param_1,uVar7,0,0,1);
        _DAT_00b361c4 = 0;
      }
      (**(code **)(*param_1 + 0x310))(iVar4,0,1,0);
    }
  }
  else {
    cVar1 = FUN_004db760();
    if (cVar1 != '\0') goto LAB_0061070e;
    uVar7 = FUN_004da2a0();
    uVar7 = FUN_004da2a0(uVar7);
    uVar7 = FUN_004da2a0(uVar7);
    _sprintf(acStack_13c,"%s  tried to pickpocket %s and %s did not care",uVar7);
    FUN_00579c10(acStack_13c,0,1,DAT_00b38cf0,0);
  }
  iVar6 = FUN_00605f30();
  if (iVar6 == 0) {
    FUN_00605e80();
    FUN_00401f20(iVar4);
  }
  else {
    FUN_00675b30(iVar4);
    piVar3 = *(int **)(iVar4 + 0xc);
    iVar4 = FUN_005e02e0(1);
    if ((*(int *)(iVar4 + 0x40) == 0) && (*(int *)(iVar4 + 0x3c) == 0)) {
      iVar4 = FUN_005e02e0(0);
    }
    FUN_009832e6(iVar4,0,&PTR_PTR_00b03de4,&PTR_PTR_00b02fb4,0);
    if (piVar3 == DAT_00b333c4) {
      FUN_00467f80(2);
    }
  }
LAB_006108fb:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00610930(int *param_1,char param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  float *pfVar9;
  int iVar10;
  int *in_ECX;
  int iVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  undefined1 auStack_288 [3];
  char cStack_285;
  undefined4 *puStack_284;
  double dStack_280;
  int *local_278;
  undefined4 *puStack_274;
  uint uStack_270;
  int *local_26c;
  char acStack_268 [300];
  char acStack_13c [300];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c31ee;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_288;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffd68;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar11 = 0;
  local_278 = param_1;
  local_26c = in_ECX;
  piVar4 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0,uVar3);
  iVar5 = FUN_005e32f0();
  if (((((((*(byte *)(iVar5 + 0x70) & 1) != 0) || (cVar2 = FUN_005e6c60(), cVar2 != '\0')) &&
        ((cVar2 = FUN_006605a0(0), cVar2 != '\0' ||
         ((piVar4 != DAT_00b333c4 || (cVar2 = FUN_0065da50(), cVar2 == '\0')))))) &&
       (cVar2 = (**(code **)(*in_ECX + 0x354))(), cVar2 == '\0')) &&
      ((((cVar2 = FUN_004d7f80(), cVar2 != '\0' &&
         (iVar5 = FUN_005e32f0(), (*(byte *)(iVar5 + 0x70) & 1) != 0)) &&
        (cVar2 = FUN_005e6c60(), cVar2 == '\0')) &&
       (((cVar2 = FUN_005e8a90(), cVar2 == '\0' || (piVar4 == (int *)0x0)) ||
        (cVar2 = FUN_005e8a90(), cVar2 == '\0')))))) &&
     ((cVar2 = FUN_005e6c60(), cVar2 == '\0' &&
      (((piVar4 == (int *)0x0 || (piVar4 == DAT_00b333c4)) ||
       ((iVar5 = (**(code **)(*piVar4 + 0x284))(0x1f), iVar5 != 100 ||
        (cVar2 = FUN_005e0550(), cVar2 == '\0')))))))) {
    puStack_274 = (undefined4 *)FUN_00401f00(0x30);
    uStack_4 = 0;
    if (puStack_274 != (undefined4 *)0x0) {
      iVar11 = FUN_006070b0(3,in_ECX,param_1,0,0,0);
    }
    uStack_4 = 0xffffffff;
    if (*(int **)(iVar11 + 0xc) == DAT_00b333c4) {
      DAT_00b333c4[0x1b5] = DAT_00b333c4[0x1b5] + 1;
    }
    puVar6 = (undefined4 *)FUN_0067a290(iVar11);
    puStack_284 = puVar6;
    if ((puVar6 == (undefined4 *)0x0) && (cVar2 = FUN_005e6c60(), cVar2 != '\0')) {
      puStack_284 = (undefined4 *)FUN_00401f00(8);
      if (puStack_284 == (undefined4 *)0x0) {
        puStack_284 = (undefined4 *)0x0;
      }
      else {
        *puStack_284 = 0;
        puStack_284[1] = 0;
      }
      FUN_00446cb0(in_ECX);
      puVar6 = puStack_284;
    }
    puStack_274 = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      FUN_00605e80();
      FUN_00401f20(iVar11);
      uVar8 = FUN_004da2a0();
      uVar8 = FUN_004da2a0(uVar8);
      _sprintf(acStack_13c,"%s got away with attacking %s",uVar8);
      FUN_00579b60(acStack_13c);
      puVar6 = (undefined4 *)0x0;
    }
    else {
      cStack_285 = '\0';
      do {
        piVar4 = (int *)*puVar6;
        if (piVar4 == (int *)0x0) break;
        if ((((uint)piVar4[2] >> 0xb & 1) == 0) ||
           (cVar2 = (**(code **)(*piVar4 + 0x334))(1), cVar2 == '\0')) {
          cVar2 = FUN_004db760();
          if ((cVar2 == '\0') || (cVar2 = FUN_004db760(), cVar2 != '\0')) {
            uStack_270 = uStack_270 & 0xffffff00;
            if ((piVar4 == *(int **)(iVar11 + 8)) ||
               (piVar7 = (int *)FUN_004db6b0(), piVar7 == piVar4)) {
              uStack_270 = CONCAT31(uStack_270._1_3_,1);
            }
            if ((param_2 != '\0') || (cVar2 = FUN_005e6c60(), cVar2 == '\0')) {
              iVar5 = FUN_00605f60(piVar4,uStack_270);
              dStack_280 = (double)CONCAT44(dStack_280._4_4_,(float)iVar5);
              (**(code **)(*piVar4 + 0x374))(*(undefined4 *)(iVar11 + 0xc),(float)iVar5);
            }
            cVar2 = FUN_005e6c60();
            if (cVar2 == '\0') {
              piVar7 = piVar4;
              uVar8 = (**(code **)(*piVar4 + 0x224))(*(undefined4 *)(iVar11 + 0xc),piVar4);
              cVar2 = FUN_00605e20(uVar8,piVar7);
              if (cVar2 == '\0') {
                _DAT_00b361c4 = (**(code **)(*in_ECX + 0x170))();
                piVar4[0x39] = *(int *)(iVar11 + 0xc);
                uVar8 = FUN_0052ed50(2,0xb);
                (**(code **)(*(int *)piVar4[0x16] + 0x1a4))(piVar4,uVar8,0,0,1);
                _DAT_00b361c4 = 0;
                cStack_285 = '\x01';
                goto LAB_00610cf0;
              }
            }
            cVar2 = FUN_004db760();
            if (cVar2 == '\0') {
              _DAT_00b361c4 = (**(code **)(*in_ECX + 0x170))();
              piVar4[0x39] = *(int *)(iVar11 + 0xc);
              uVar8 = FUN_0052ed50(2,8);
              if ((*(int *)(iVar11 + 0xc) == 0) ||
                 (cVar2 = FUN_005ea050(*(int *)(iVar11 + 0xc)), cVar2 == '\0')) {
                (**(code **)(*(int *)piVar4[0x16] + 0x1a4))(piVar4,uVar8,0,0,1);
              }
              else {
                (**(code **)(*piVar4 + 0x32c))(*(undefined4 *)(iVar11 + 0xc),0,0,0,0,1);
              }
              FUN_00605f00(in_ECX);
              _DAT_00b361c4 = 0;
              param_1 = local_278;
            }
            (**(code **)(*piVar4 + 0x310))(iVar11,0,1,0);
            cStack_285 = '\0';
          }
          else if (cStack_285 != '\0') {
LAB_00610cf0:
            if ((in_ECX != piVar4) ||
               ((piVar4 != param_1 &&
                ((iVar5 = FUN_005e0380(), iVar5 == 0 ||
                 (iVar5 = FUN_005e0380(), (*(uint *)(iVar5 + 0x1c) >> 0xc & 1) == 0)))))) {
              fVar12 = (float10)FUN_004d7e90(piVar4,0);
              dStack_280 = (double)fVar12;
              pfVar9 = (float *)FUN_00403c00();
              if ((float)dStack_280 <= *pfVar9) {
                piVar7 = (int *)FUN_0067cf50(0xc,param_1);
                dStack_280 = (double)CONCAT44(dStack_280._4_4_,piVar7);
                while ((piVar7 != (int *)0x0 && (iVar5 = *piVar7, in_ECX = local_26c, iVar5 != 0)))
                {
                  piVar7 = (int *)piVar7[1];
                  iVar10 = FUN_0067b710();
                  in_ECX = local_26c;
                  if ((iVar10 != 0) &&
                     (iVar10 = FUN_0067b6b0(piVar4,0), in_ECX = local_26c, iVar10 == 0)) {
                    (**(code **)(*piVar4 + 0x314))(iVar5);
                    in_ECX = local_26c;
                  }
                }
                FUN_004526e0();
                FUN_00401f20(dStack_280._0_4_);
                param_1 = local_278;
              }
            }
          }
        }
        puVar6 = (undefined4 *)puStack_284[1];
        puStack_284 = puVar6;
      } while (puVar6 != (undefined4 *)0x0);
      iVar5 = FUN_00605f30();
      if (iVar5 == 0) {
        FUN_00605e80();
        FUN_00401f20(iVar11);
        uVar8 = FUN_004da2a0();
        uVar8 = FUN_004da2a0(uVar8);
        _sprintf(acStack_268,"%s attacking %s no one cared",uVar8);
        FUN_00579b60(acStack_268);
        puVar6 = puStack_284;
      }
      else {
        FUN_00675b30(iVar11);
        puVar6 = puStack_284;
      }
    }
    puVar1 = puStack_274;
    if (puStack_274 != (undefined4 *)0x0) {
      FUN_004526e0();
      FUN_00401f20(puVar1);
    }
    FUN_00401f20(puVar6);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00610eb0(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  char *pcVar10;
  float fStack_280;
  int *piStack_27c;
  float fStack_278;
  int *piStack_274;
  undefined4 local_270;
  int *local_26c;
  char acStack_268 [300];
  char acStack_13c [300];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c322e;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&fStack_280;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffd70;
  *unaff_FS_OFFSET = (int)&local_c;
  local_270 = param_1;
  piVar4 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0,uVar3);
  local_26c = piVar4;
  iVar5 = FUN_005e32f0();
  if ((*(byte *)(iVar5 + 0x70) & 1) == 0) {
    cVar2 = FUN_005e6c60();
    if (cVar2 == '\0') goto LAB_0061137f;
  }
  cVar2 = FUN_006605a0(0);
  if ((cVar2 == '\0') && (piVar4 == DAT_00b333c4)) {
    cVar2 = FUN_0065da50();
    if (cVar2 != '\0') goto LAB_0061137f;
  }
  cVar2 = (**(code **)(*piVar4 + 0x354))();
  if (cVar2 != '\0') goto LAB_0061137f;
  cVar2 = FUN_004d7f80();
  if (cVar2 == '\0') goto LAB_0061137f;
  iVar5 = FUN_005e32f0();
  if ((*(byte *)(iVar5 + 0x70) & 1) == 0) goto LAB_0061137f;
  cVar2 = FUN_005e6c60();
  if (cVar2 != '\0') goto LAB_0061137f;
  cVar2 = FUN_005e8a90();
  if (cVar2 != '\0') {
    cVar2 = FUN_005e8a90();
    if (cVar2 != '\0') goto LAB_0061137f;
  }
  if (piVar4 != DAT_00b333c4) {
    iVar5 = (**(code **)(*piVar4 + 0x284))(0x1f);
    if (iVar5 == 100) {
      cVar2 = FUN_005e0550();
      if (cVar2 != '\0') goto LAB_0061137f;
    }
  }
  piStack_274 = (int *)FUN_00401f00(0x30);
  uStack_4 = 0;
  if (piStack_274 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_006070b0(4,in_ECX,param_1,0,0,0);
  }
  uStack_4 = 0xffffffff;
  piVar4 = (int *)FUN_0067a290(iVar5);
  piStack_27c = piVar4;
  piStack_274 = piVar4;
  if (iVar5 != 0) {
    cVar2 = FUN_005e32d0();
    if ((cVar2 != '\0') && (*(char *)(iVar5 + 0x11) == '\0')) {
      iVar6 = (**(code **)(*in_ECX + 0x284))(0x24);
      if (iVar6 < 100) {
        FUN_005e3320();
        cVar2 = FUN_0051bef0();
        if (cVar2 == '\0') goto LAB_006110ee;
      }
      uVar7 = FUN_005e02e0(1);
      cVar2 = FUN_0046cb60();
      if (cVar2 != '\0') {
        uVar7 = FUN_005e02e0(0);
      }
      FUN_009832e6(uVar7,0,&PTR_PTR_00b03de4,&PTR_PTR_00b02fb4,0);
      fVar9 = (float10)FUN_00606140();
      fStack_280 = (float)fVar9;
      fVar9 = (float10)FUN_005234a0();
      fStack_280 = (float)(fVar9 * (float10)fStack_280);
      (**(code **)(**(int **)(iVar5 + 0xc) + 0x254))(fStack_280);
      *(undefined1 *)(iVar5 + 0x11) = 1;
    }
  }
LAB_006110ee:
  if (piVar4 == (int *)0x0) {
    if (iVar5 != 0) {
      FUN_00605e80();
      FUN_00401f20(iVar5);
    }
    uVar7 = FUN_004da2a0();
    uVar7 = FUN_004da2a0(uVar7);
    _sprintf(acStack_13c,"%s got away with murdering %s",uVar7);
    pcVar10 = acStack_13c;
LAB_0061136e:
    FUN_00579b60(pcVar10);
  }
  else {
    do {
      piVar1 = (int *)*piVar4;
      if (piVar1 == (int *)0x0) break;
      fStack_280 = (float)((uint)fStack_280 & 0xffffff00);
      if (piVar1 == *(int **)(iVar5 + 8)) {
LAB_00611115:
        fStack_280 = (float)CONCAT31(fStack_280._1_3_,1);
      }
      else {
        piVar8 = (int *)FUN_004db6b0();
        if (piVar8 == piVar1) goto LAB_00611115;
      }
      cVar2 = FUN_004db760();
      if (cVar2 == '\0') {
LAB_00611134:
        iVar6 = FUN_00605f60(piVar1,fStack_280);
        fStack_278 = (float)iVar6;
        (**(code **)(*piVar1 + 0x374))(*(undefined4 *)(iVar5 + 0xc),fStack_278);
        cVar2 = (**(code **)(*piVar1 + 0x198))(0);
        if (cVar2 == '\0') {
          piVar8 = piVar1;
          uVar7 = (**(code **)(*piVar1 + 0x224))(*(undefined4 *)(iVar5 + 0xc),piVar1);
          cVar2 = FUN_00605e20(uVar7,piVar8);
          if (cVar2 == '\0') goto LAB_00611206;
          cVar2 = FUN_004db760();
          if (cVar2 == '\0') {
            _DAT_00b361c4 = (**(code **)(*in_ECX + 0x170))();
            piVar1[0x39] = *(int *)(iVar5 + 0xc);
            uVar7 = FUN_0052ed50(2,9);
            (**(code **)(*(int *)piVar1[0x16] + 0x1a4))(piVar1,uVar7,0,0,1);
            FUN_00605f00(in_ECX);
            _DAT_00b361c4 = 0;
          }
          (**(code **)(*piVar1 + 0x310))(iVar5,0,1,0);
        }
        else {
LAB_00611206:
          _DAT_00b361c4 = (**(code **)(*in_ECX + 0x170))();
          piVar1[0x39] = *(int *)(iVar5 + 0xc);
          uVar7 = FUN_0052ed50(2,0xc);
          if (*(int *)(iVar5 + 0xc) == 0) {
LAB_0061125e:
            (**(code **)(*(int *)piVar1[0x16] + 0x1a4))(piVar1,uVar7,0,0,1);
          }
          else {
            cVar2 = FUN_005ea050(*(int *)(iVar5 + 0xc));
            if (cVar2 == '\0') goto LAB_0061125e;
            (**(code **)(*piVar1 + 0x32c))(*(undefined4 *)(iVar5 + 0xc),0,0,0,0,1);
          }
          _DAT_00b361c4 = 0;
          piVar4 = piStack_27c;
        }
        uVar7 = FUN_004da2a0();
        uVar7 = FUN_004da2a0(uVar7);
        uVar7 = FUN_004da2a0(uVar7);
        _sprintf(acStack_268,"%s been Murdered by %s and sent to  %s ",uVar7);
        FUN_0040fec0(acStack_268);
      }
      else {
        cVar2 = FUN_004db760();
        if (cVar2 != '\0') goto LAB_00611134;
      }
      piVar4 = (int *)piVar4[1];
      piStack_27c = piVar4;
    } while (piVar4 != (int *)0x0);
    piVar1 = piStack_274;
    FUN_004526e0();
    FUN_00401f20(piVar1);
    iVar6 = FUN_00605f30();
    if (iVar6 == 0) {
      if (iVar5 != 0) {
        FUN_00605e80();
        FUN_00401f20(iVar5);
      }
      uVar7 = FUN_004da2a0();
      uVar7 = FUN_004da2a0(uVar7);
      _sprintf(acStack_268,"%s  murdering %s no one cared",uVar7);
      pcVar10 = acStack_268;
      goto LAB_0061136e;
    }
    FUN_00675b30(iVar5);
  }
  FUN_00401f20(piVar4);
LAB_0061137f:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006113b0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int *piVar9;
  int *piStack_154;
  float local_150;
  uint uStack_14c;
  int *piStack_148;
  undefined4 local_144;
  undefined4 local_140;
  char acStack_13c [300];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = -1;
  puStack_8 = &LAB_009c326e;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&piStack_154;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffe9c;
  *unaff_FS_OFFSET = (int)&local_c;
  local_144 = param_1;
  local_140 = param_2;
  iVar4 = FUN_005e32f0(uVar3);
  if ((*(byte *)(iVar4 + 0x70) & 1) != 0) {
    if (param_3 == -1) {
      local_150 = (float)FUN_00401f00(0x30);
      local_4 = 0;
      if (local_150 == 0.0) {
        iVar4 = 0;
        local_4 = -1;
      }
      else {
        iVar4 = FUN_006070b0(2,param_1,in_ECX,0,0,param_2);
        local_4 = param_3;
      }
    }
    else {
      iVar4 = FUN_00675bb0(2,param_3);
    }
    if (iVar4 != 0) {
      if ((((in_ECX == DAT_00b333c4) || (iVar5 = (**(code **)(*in_ECX + 0x284))(0x1f), iVar5 != 100)
           ) || (cVar2 = FUN_005e0550(), cVar2 == '\0')) &&
         (piVar6 = (int *)FUN_0067a290(iVar4), piStack_154 = piVar6, piStack_148 = piVar6,
         piVar6 != (int *)0x0)) {
        do {
          piVar1 = (int *)*piVar6;
          piStack_154 = piVar6;
          if (piVar1 == (int *)0x0) break;
          uStack_14c = uStack_14c & 0xffffff00;
          if ((piVar1 == *(int **)(iVar4 + 8)) || (piVar7 = (int *)FUN_004db6b0(), piVar7 == piVar1)
             ) {
            uStack_14c = CONCAT31(uStack_14c._1_3_,1);
          }
          cVar2 = FUN_004db760();
          if ((cVar2 == '\0') || (cVar2 = FUN_004db760(), cVar2 != '\0')) {
            iVar5 = FUN_00605f60(piVar1,uStack_14c);
            local_150 = (float)iVar5;
            cVar2 = FUN_005e6c60();
            if (cVar2 == '\0') {
              (**(code **)(*piVar1 + 0x374))(*(undefined4 *)(iVar4 + 0xc),local_150);
            }
            piVar7 = in_ECX;
            piVar9 = piVar1;
            uVar8 = (**(code **)(*piVar1 + 0x224))();
            cVar2 = FUN_00605e20(uVar8,piVar7);
            if (cVar2 == '\0') {
              _DAT_00b361c4 = local_144;
              piVar1[0x39] = *(int *)(iVar4 + 0xc);
              uVar8 = FUN_0052ed50(2,0xf,piVar9);
              if ((*(int *)(iVar4 + 0xc) == 0) ||
                 (cVar2 = FUN_005ea050(*(int *)(iVar4 + 0xc)), cVar2 == '\0')) {
                (**(code **)(*(int *)piVar1[0x16] + 0x1a4))(piVar1,uVar8,0,0,1);
              }
              else {
                (**(code **)(*piVar1 + 0x32c))(*(undefined4 *)(iVar4 + 0xc),0,0,0,0,1);
              }
              _DAT_00b361c4 = 0;
              piVar6 = piStack_154;
            }
            else {
              (**(code **)(*piVar1 + 0x310))(iVar4,0,1,0);
              cVar2 = FUN_004db760();
              if (cVar2 == '\0') {
                FUN_00605f00(in_ECX);
              }
            }
            uVar8 = FUN_004da2a0();
            _sprintf(acStack_13c,"alarm Trespass sent to  %s ",uVar8);
            FUN_00579b60(acStack_13c);
          }
          piVar6 = (int *)piVar6[1];
          piStack_154 = piVar6;
        } while (piVar6 != (int *)0x0);
        piVar6 = piStack_154;
        FUN_004526e0();
        FUN_00401f20(piStack_148);
        iVar5 = FUN_00605f30();
        if (iVar5 != 0) {
          FUN_00675b30(iVar4);
          FUN_00401f20(piVar6);
          uVar8 = *(undefined4 *)(iVar4 + 0x28);
          goto LAB_006116a4;
        }
      }
      iVar5 = FUN_00675bb0(2,param_3);
      if (iVar5 == iVar4) {
        if (iVar5 == 0) goto LAB_006116a1;
        FUN_00605e80();
      }
      else {
        FUN_00605e80();
        iVar5 = iVar4;
      }
      FUN_00401f20(iVar5);
    }
  }
LAB_006116a1:
  uVar8 = 0xffffffff;
LAB_006116a4:
  *unaff_FS_OFFSET = local_c;
  return uVar8;
}



void FUN_006116d0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  int *unaff_ESI;
  
  if ((*(int *)(in_ECX + 0x58) != 0) && (cVar1 = FUN_0045a500(), cVar1 == '\0')) {
    iVar2 = (*(int **)(in_ECX + 0x58))[2];
    if ((iVar2 == 0) || (*(char *)(iVar2 + 0x20) != '\x12')) {
      uVar5 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x4c8))(4);
      (**(code **)(**(int **)(in_ECX + 0x58) + 0x4a8))();
      (**(code **)(**(int **)(in_ECX + 0x58) + 0x480))(uVar5);
      *(undefined4 *)(in_ECX + 0x100) = 0x3f800000;
      return;
    }
    iVar2 = FUN_009832e6(iVar2,0,&PTR_PTR_00b03e00,&PTR_PTR_00b058e8,0);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x3c) != 0) {
        FUN_00625d70();
      }
      piVar3 = (int *)FUN_00625d30();
      piVar4 = (int *)FUN_00779480();
      FUN_00642b40(piVar3);
      FUN_00642b40(piVar4);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*(int *)piVar3[0x16] + 0x4a8))();
      }
      if (piVar4 != (int *)0x0) {
        (**(code **)(*(int *)piVar4[0x16] + 0x4a8))();
      }
      if ((piVar3 != (int *)0x0) && (piVar4 != (int *)0x0)) {
        (**(code **)(*(int *)piVar3[0x16] + 0x480))(piVar4);
        (**(code **)(*(int *)piVar4[0x16] + 0x480))(piVar3);
        piVar3[0x40] = 0x3f800000;
        piVar4[0x40] = 0x3f800000;
        (**(code **)(*(int *)piVar3[0x16] + 600))(0);
        (**(code **)(*(int *)piVar4[0x16] + 600))(0);
      }
      iVar2 = (**(code **)(*piVar3 + 0x164))();
      if (iVar2 != 0) {
        FUN_00475440(1,0);
      }
      iVar2 = (**(code **)(*piVar4 + 0x164))();
      if (iVar2 != 0) {
        FUN_00475440(1,0);
      }
      if ((int *)piVar3[0x16] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[0x16] + 0x1e0))(0);
      }
      if ((int *)piVar4[0x16] != (int *)0x0) {
        (**(code **)(*(int *)piVar4[0x16] + 0x1e0))(0);
      }
      FUN_005e0380();
      FUN_005e0380();
      (**(code **)(*piVar3 + 0x44))(0x30000);
      iVar2 = FUN_0041fb20();
      if (iVar2 == 0) {
        *(undefined4 *)(piVar3[0x16] + 8) = 0;
        *(undefined4 *)(piVar3[0x16] + 4) = 0;
        (**(code **)(*(int *)piVar3[0x16] + 0xd0))(0);
        (**(code **)(*piVar3 + 0x17c))(0);
        (**(code **)(*(int *)piVar3[0x16] + 0x394))(0);
        if (*(char *)(DAT_00b33a98 + 0xcd4) == '\0') {
          (**(code **)(*(int *)piVar3[0x16] + 0x18))(piVar3,1);
        }
      }
      else {
        iVar2 = piVar3[0x16];
        uVar5 = FUN_0041fb20();
        *(undefined4 *)(iVar2 + 8) = uVar5;
        FUN_005e8de0(*(undefined4 *)(piVar3[0x16] + 8));
        iVar2 = piVar3[0x16];
        uVar5 = FUN_0041fb40();
        *(undefined4 *)(iVar2 + 4) = uVar5;
        iVar2 = *(int *)piVar3[0x16];
        uVar5 = FUN_0041fb60();
        (**(code **)(iVar2 + 0xd0))(uVar5);
        iVar2 = *piVar3;
        uVar5 = FUN_0041fb80();
        (**(code **)(iVar2 + 0x17c))(uVar5);
        unaff_ESI = (int *)piVar3[0x16];
        iVar2 = *unaff_ESI;
        uVar5 = FUN_0041fba0();
        (**(code **)(iVar2 + 0x394))(uVar5);
        FUN_004246d0();
        if (*(char *)(DAT_00b33a98 + 0xcd4) == '\0') {
          (**(code **)(*(int *)piVar3[0x16] + 0x18))(piVar3,1);
        }
      }
      cVar1 = FUN_005e6b40();
      if (cVar1 != '\0') {
        (**(code **)(*piVar4 + 0x44))(0x30000);
        iVar2 = FUN_0041fb20();
        if (iVar2 == 0) {
          if (piVar4[0x16] != 0) {
            *(undefined4 *)(piVar4[0x16] + 8) = 0;
            *(undefined4 *)(piVar4[0x16] + 4) = 0;
            (**(code **)(*(int *)piVar4[0x16] + 0xd0))(0);
            (**(code **)(*piVar4 + 0x17c))(0);
            (**(code **)(*(int *)piVar4[0x16] + 0x394))(0);
          }
        }
        else {
          iVar2 = piVar4[0x16];
          uVar5 = FUN_0041fb20();
          *(undefined4 *)(iVar2 + 8) = uVar5;
          FUN_005e8de0(*(undefined4 *)(piVar4[0x16] + 8));
          iVar2 = piVar4[0x16];
          uVar5 = FUN_0041fb40();
          *(undefined4 *)(iVar2 + 4) = uVar5;
          iVar2 = *(int *)piVar4[0x16];
          uVar5 = FUN_0041fb60();
          (**(code **)(iVar2 + 0xd0))(uVar5);
          iVar2 = *piVar4;
          uVar5 = FUN_0041fb80();
          (**(code **)(iVar2 + 0x17c))(uVar5);
          iVar2 = *(int *)piVar4[0x16];
          uVar5 = FUN_0041fba0();
          (**(code **)(iVar2 + 0x394))(uVar5);
          FUN_004246d0();
        }
        if (((int *)piVar4[0x16] != (int *)0x0) && (*(char *)(DAT_00b33a98 + 0xcd4) == '\0')) {
          (**(code **)(*(int *)piVar4[0x16] + 0x18))(piVar4,1);
        }
      }
      cVar1 = FUN_0045a500();
      if (cVar1 == '\0') {
        (**(code **)(*unaff_ESI + 0x10))(1);
        return;
      }
      FUN_0045c7a0(unaff_ESI);
    }
  }
  return;
}



void FUN_00611b00(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x104);
  if (iVar1 != 0) {
    if (iVar1 == param_1) {
      return;
    }
    thunk_FUN_004796f0();
    FUN_00401f20(iVar1);
  }
  *(int *)(in_ECX + 0x104) = param_1;
  return;
}



uint FUN_00611bd0(uint param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar2 = (**(code **)(*in_ECX + 0x1a0))();
  if ((char)uVar2 == '\0') {
    if ((param_1 != DAT_00b333c4) || (uVar2 = DAT_00b333c4, *(char *)(DAT_00b333c4 + 0x610) == '\0')
       ) {
      piVar3 = (int *)FUN_005e0f50();
      uVar2 = (**(code **)(*piVar3 + 0x16c))(0x10);
      if ((char)uVar2 == '\0') {
        uVar9 = 100;
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 0;
        fVar5 = (float10)FUN_004d7e90(param_1,0);
        uVar6 = (**(code **)(*in_ECX + 0x284))(0x21,(float)fVar5,uVar6,uVar7,uVar8,uVar9);
        uVar6 = (**(code **)(*in_ECX + 0x224))(param_1,0,uVar6);
        uVar2 = FUN_00546190(uVar6);
        if ((int)uVar2 < 1) {
          if (param_1 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = param_1 + 0x5c;
          }
          cVar1 = FUN_006a1ee0(iVar4);
          return (uint)(cVar1 == '\0');
        }
      }
    }
  }
  return uVar2 & 0xffffff00;
}



float10 FUN_00611d00(void)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  float10 fVar3;
  undefined4 local_8;
  
  fVar3 = (float10)FUN_004d7260();
  local_8 = (float)fVar3;
  iVar1 = (**(code **)(*in_ECX + 0x170))();
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0xe8), iVar1 != 0)) {
    uVar2 = FUN_00519d20();
    if (uVar2 < 2) {
      return (float10)(*(float *)(iVar1 + 0x60 + uVar2 * 4) * local_8);
    }
    local_8 = local_8 * 0.0;
  }
  return (float10)local_8;
}



void FUN_00611d70(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  int unaff_EBX;
  int iVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d0cb6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = (**(code **)(*in_ECX + 0x18c))(uVar1);
  if (iVar2 == 0) {
    piVar3 = (int *)(**(code **)(*in_ECX + 0x380))();
    if (piVar3 != (int *)0x0) {
      (**(code **)(*in_ECX + 900))(0);
      (**(code **)(*piVar3 + 0x38c))(0);
      FUN_005eae70();
      *unaff_FS_OFFSET = unaff_EBX;
      return;
    }
  }
  else {
    iVar2 = FUN_00401f00(0x3c);
    iVar5 = 0;
    uStack_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00568e10();
    }
    uStack_4 = 0xffffffff;
    FUN_005661e0(0x17);
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffd | 4;
    iVar4 = FUN_00401f00(0xc);
    uStack_4 = 1;
    if (iVar4 != 0) {
      iVar5 = FUN_005696b0();
    }
    uStack_4 = 0xffffffff;
    FUN_00569750(0);
    FUN_005697f0(in_ECX);
    FUN_00565e00(iVar5);
    if (iVar5 != 0) {
      FUN_00569730();
      FUN_00401f20(iVar5);
    }
    FUN_005672a0();
    FUN_005f1590(iVar2,1,1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00611eb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  iVar1 = in_ECX[0x35];
  in_ECX[0x35] = param_1;
  if ((param_1 == 0) && (iVar1 != 0)) {
    iVar1 = FUN_006ecc80();
    if (iVar1 != 0) {
      FUN_006ecc80();
      iVar1 = FUN_004ca790();
      if (iVar1 != 0) {
        FUN_006ecc80();
        FUN_004cead0(in_ECX);
        return;
      }
    }
    iVar1 = FUN_006ecc80();
    if (iVar1 != 0) {
      FUN_006ecc80();
      iVar1 = FUN_004ca790();
      if (iVar1 != 0) {
        FUN_006ecc80();
        FUN_004cead0(in_ECX);
        return;
      }
    }
    iVar1 = (**(code **)(*in_ECX + 0x154))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*in_ECX + 0x154))();
      if (*(int *)(iVar1 + 0x1c) != 0) {
        iVar1 = (**(code **)(*in_ECX + 0x154))();
        iVar1 = **(int **)(iVar1 + 0x1c);
        uVar2 = (**(code **)(*in_ECX + 0x154))();
        (**(code **)(iVar1 + 0x88))(&param_1,uVar2);
        FUN_007016a0();
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00611fa0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float local_8;
  
  local_8 = 0.0;
  FUN_009832e6();
  iVar2 = FUN_0041e6f0();
  if (iVar2 != 0) {
    iVar2 = 0;
    do {
      iVar3 = FUN_00486790(iVar2,0);
      if (iVar3 != 0) {
        if (((iVar2 == 8) || (iVar2 == 7)) || (iVar2 == 6)) {
          iVar4 = FUN_009832e6(*(undefined4 *)(iVar3 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b05de0,0);
          if (iVar4 != 0) {
            iVar4 = FUN_004842e0();
            fVar1 = (float)iVar4 * _DAT_00b37b98 + _DAT_00b37b90;
            goto LAB_006120b1;
          }
        }
        else {
          iVar4 = FUN_009832e6(*(undefined4 *)(iVar3 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03778,0);
          iVar5 = FUN_009832e6(*(undefined4 *)(iVar3 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b05de0,0);
          if (iVar4 == 0) {
            if (iVar5 == 0) goto LAB_006120b9;
            iVar4 = FUN_004842e0();
            fVar1 = (float)iVar4 * _DAT_00b37ba8 + _DAT_00b37ba0;
          }
          else {
            iVar4 = FUN_004842e0();
            fVar1 = (float)iVar4 * _DAT_00b37bb0 + _DAT_00b37bb8;
          }
LAB_006120b1:
          local_8 = fVar1 + local_8;
        }
LAB_006120b9:
        FUN_00484470();
        FUN_00401f20(iVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
  }
  fVar6 = (float10)local_8;
  if ((float10)100.0 < fVar6) {
    fVar6 = (float10)100.0;
  }
  return fVar6;
}



void FUN_00612110(undefined4 param_1)

{
  int in_ECX;
  
  FUN_005f85e0(param_1);
  if ((*(int *)(DAT_00b33b00 + 0x44) == 0x1ffff000) || (*(int *)(DAT_00b33b00 + 0x44) == 0x7ffff000)
     ) {
    *(undefined4 *)(in_ECX + 0x108) = 0xbf800000;
  }
  return;
}



void FUN_00612150(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c32a8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = (int)&PTR_FUN_00a6fc9c;
  in_ECX[6] = (int)&PTR_FUN_00a6fc94;
  in_ECX[0x17] = (int)&PTR_LAB_00a6fc4c;
  in_ECX[0x1a] = (int)&PTR_LAB_00a6fc1c;
  local_4 = 0;
  if (((uint)in_ECX[2] >> 0xe & 1) == 0) {
    if ((int *)in_ECX[0x35] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[0x35] + 0x38c))(0,uVar1);
      FUN_00611eb0(0);
    }
    iVar2 = (**(code **)(*in_ECX + 0x154))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*in_ECX + 0x380))();
      if (iVar2 != 0) {
        FUN_005f0410();
      }
    }
    TESObjectREFR_Set3D(0);
    FUN_006116d0();
  }
  local_4 = 0xffffffff;
  FUN_005f13d0();
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00612220(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x3c);
  if (((in_ECX != DAT_00b333c4) && (iVar1 != 0)) && ((*(byte *)(iVar1 + 0x18) & 1) != 0)) {
    iVar1 = 0;
  }
  return iVar1;
}



void FUN_00612240(int *param_1)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *in_ECX;
  int iVar7;
  int *unaff_FS_OFFSET;
  float10 fVar8;
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009c32f1;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar7 = 0;
  FUN_006a24b0(0x58415742,0);
  FUN_006a24b0(0x4f425742,0);
  FUN_006a24b0(0x41445742,0);
  FUN_006a24b0(0x414d5742,0);
  FUN_006a24b0(0x57535742,0);
  (**(code **)(*in_ECX + 900))(param_1);
  if ((in_ECX[0x16] != 0) && (iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))(), iVar3 == 6)) {
    FUN_005f4ae0(0);
  }
  FUN_005e6d70(0);
  (**(code **)(*param_1 + 0x38c))();
  iStack_4 = FUN_00401f00(0x3c);
  local_c = 0;
  if (iStack_4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00568e10();
  }
  local_c = -1;
  FUN_005661e0(0x16);
  *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffd | 4;
  iStack_4 = FUN_00401f00(0xc);
  local_c = 1;
  if (iStack_4 != 0) {
    iVar7 = FUN_005696b0();
  }
  local_c = -1;
  FUN_00569750(0);
  FUN_005697f0(param_1);
  FUN_00565e00(iVar7);
  if (iVar7 != 0) {
    FUN_00569730();
    FUN_00401f20(iVar7);
  }
  iStack_4 = FUN_00401f00(0xc);
  local_c = 2;
  if (iStack_4 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00569e40();
  }
  local_c = -1;
  FUN_00565ec0(iVar7);
  if (iVar7 != 0) {
    FUN_0060d0a0();
    FUN_00401f20(iVar7);
  }
  FUN_005672a0();
  FUN_00569e90(0);
  FUN_00569ec0(param_1);
  iVar7 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
  FUN_005f1590(iVar3,iVar7 < 2,1);
  puVar4 = (undefined4 *)(**(code **)(*(int *)in_ECX[0x16] + 0x380))();
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)FUN_00625290(&stack0xffffffe0);
    *puVar4 = *puVar5;
    puVar4[1] = puVar5[1];
    puVar4[2] = puVar5[2];
  }
  fVar8 = (float10)(**(code **)(*in_ECX + 0xec))();
  FUN_004db520((float)fVar8);
  cVar2 = FUN_004de770(in_ECX,1);
  if ((cVar2 == '\0') && (iVar7 = FUN_004db6b0(), iVar7 != 0)) {
    (**(code **)(*in_ECX + 0x24c))(param_1);
  }
  if ((in_ECX != DAT_00b333c4) && (iVar7 = (**(code **)(*in_ECX + 0x18c))(), iVar7 == 3)) {
    iVar7 = FUN_005e0ee0();
    if (iVar7 == 0xb) {
      iVar7 = FUN_0065abe0(&iStack_4);
      uVar1 = *(undefined2 *)(iVar7 + 2);
      uVar6 = (**(code **)(*in_ECX + 0x154))();
      FUN_0065a2c0();
      FUN_005ea350(uVar1);
      FUN_0088d0e0(uVar6,uVar1,1,0);
    }
    (**(code **)(*(int *)in_ECX[0x16] + 0x188))();
  }
  *unaff_FS_OFFSET = iStack_14;
  return;
}



void FUN_00612510(byte param_1)

{
  FUN_00612150();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined1 FUN_00612550(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 0x158);
}



float10 FUN_00612560(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined4 local_c;
  
  fVar3 = (float10)0;
  if (param_2 != 0) {
    iVar1 = FUN_0046ca20(param_2);
    if (iVar1 != 0) {
      iVar1 = *param_1;
      uVar2 = FUN_004bb060();
      (**(code **)(iVar1 + 0x288))(uVar2);
      (**(code **)(*param_1 + 0x288))(7);
      (**(code **)(*param_1 + 0x284))(0);
      fVar3 = (float10)FUN_005f4880();
      uVar2 = FUN_009828c0((float)fVar3,0xbf800000);
      uVar2 = FUN_009828c0(uVar2);
      uVar2 = FUN_009828c0(uVar2);
      fVar3 = (float10)FUN_00547140(param_2,param_4,param_3,uVar2);
    }
    local_c = (float)fVar3;
    fVar3 = (float10)local_c;
  }
  return fVar3;
}



undefined4 FUN_00612640(int param_1)

{
  if ((((param_1 != 0) && (param_1 != 1)) && (param_1 != 3)) && ((param_1 != 2 && (param_1 != 4))))
  {
    return 0;
  }
  return 1;
}



undefined4 FUN_00612670(int param_1)

{
  if (((param_1 != 0) && (param_1 != 1)) && (param_1 != 3)) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00612690(int param_1)

{
  if ((param_1 != 2) && (param_1 != 4)) {
    return 0;
  }
  return 1;
}



undefined1 FUN_006126b0(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = FUN_00414c00(param_1 + 0xc,0x15,0x444c4853,0x48535246,0x48534946,0x4853494c,0x42414f46,
                         0x54414f46,0x41464f46,0x45484f46,0x4d4d4f46,0x4b534f46,0x50534f46,
                         0x49445352,0x49465352,0x52465352,0x414d5352,0x574e5352,0x41505352,
                         0x4f505352,0x48535352,0x434c4652,0x50534241);
  }
  return uVar1;
}



undefined4 FUN_00612790(float param_1,int param_2)

{
  float *in_ECX;
  
  if ((param_2 != 0) && (0.0 < in_ECX[2])) {
    *(bool *)param_2 = in_ECX[2] < param_1 - *in_ECX;
  }
  if (in_ECX[1] < param_1 - *in_ECX) {
    return 1;
  }
  return 0;
}



void FUN_006127e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x120) = param_1;
  *(undefined4 *)(in_ECX + 0x124) = param_2;
  *(undefined4 *)(in_ECX + 0x128) = param_3;
  return;
}



void FUN_00612810(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x180) = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00612820(float param_1)

{
  float10 fVar1;
  
  if (param_1 <= -1.0) {
    return (float10)_DAT_00b3f9a4;
  }
  if (param_1 < 1.0) {
    fVar1 = (float10)FUN_00986130();
    return (float10)(float)fVar1;
  }
  return (float10)0;
}



void FUN_00612860(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    param_1 = (int *)FUN_00419a20();
    FUN_0045f7a0(&param_1,4);
    return;
  }
  param_1 = (int *)0x0;
  FUN_0045f7a0(&param_1,4);
  return;
}



void FUN_006128b0(void)

{
  int *in_ECX;
  undefined1 local_5;
  undefined4 local_4;
  
  local_5 = in_ECX[1] != 0;
  FUN_0045b9a0(&local_5,1);
  if (in_ECX[1] != 0) {
    FUN_00485730();
  }
  local_4 = 0;
  if (*in_ECX != 0) {
    local_4 = FUN_00419a20();
  }
  FUN_0045f7a0(&local_4,4);
  return;
}



void FUN_00612910(ushort param_1,char param_2)

{
  int in_ECX;
  
  if (param_2 != '\0') {
    *(ushort *)(in_ECX + 2) = *(ushort *)(in_ECX + 2) & ~param_1;
    return;
  }
  *(ushort *)(in_ECX + 2) = *(ushort *)(in_ECX + 2) | param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00612930(void)

{
  if (DAT_00b333b8 != '\0') {
    return (float10)_DAT_00b38100;
  }
  return (float10)_DAT_00b380f8;
}



int FUN_00612960(char param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined4 uVar4;
  
  pcVar1 = *(code **)(**(int **)(in_ECX + 0x3c) + 0x2b8);
  if (param_1 == '\0') {
    iVar2 = (*pcVar1)(5);
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar4 = 4;
  }
  else {
    iVar2 = (*pcVar1)(0);
    if (((iVar2 != 0) || (iVar2 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x2b8))(1), iVar2 != 0))
       || (iVar2 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x2b8))(2), iVar2 != 0))
    goto LAB_006129cd;
    uVar4 = 3;
  }
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x2b8))(uVar4);
  if (iVar2 == 0) {
    return 0;
  }
LAB_006129cd:
  if (((param_1 != '\0') &&
      (iVar3 = FUN_009832e6(*(undefined4 *)(iVar2 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0),
      iVar3 != 0)) && ((*(char *)(iVar3 + 0x90) == '\x04' || (*(char *)(iVar3 + 0x90) == '\x05'))))
  {
    return 0;
  }
  return iVar2;
}



bool FUN_00612a10(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x1a8) < DAT_00b372f0;
}



undefined4 FUN_00612a30(int *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  
  sVar2 = FUN_005e5690(0x11,param_2,param_2 == 0);
  if (sVar2 != 0) {
    iVar3 = (**(code **)(*param_1 + 0x164))();
    if (iVar3 != 0) {
      cVar1 = FUN_00470960(sVar2,&param_2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



float10 FUN_00612a90(undefined4 param_1,int param_2)

{
  double dVar1;
  undefined1 auVar2 [8];
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  int iStack_10;
  undefined1 auStack_c [8];
  undefined4 uStack_4;
  
  if (param_2 == 0) {
    return (float10)0;
  }
  iVar6 = 0;
  iVar4 = FUN_005e02e0(0);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + 0x44;
  }
  iVar4 = FUN_00485e00(param_1,iVar4);
  if (iVar4 != 0) {
    iStack_10 = 0;
    uVar5 = FUN_00486240(0x28,&iStack_10);
    iVar4 = FUN_009832e6(uVar5,0,&PTR_PTR_00b03248,&PTR_PTR_00b0320c,0);
    if ((iVar4 != 0) && (0 < iStack_10)) {
      cVar3 = FUN_00414eb0();
      if (cVar3 != '\0') {
        iVar6 = iVar4 + 0x24;
      }
    }
  }
  iVar4 = FUN_009832e6(*(undefined4 *)(param_2 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0);
  fVar8 = (float10)FUN_00484850(1);
  auStack_c._0_4_ = (undefined4)(fVar8 / (float10)100.0);
  if ((iVar4 == 0) || (iVar4 == -0x60)) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(iVar4 + 100);
  }
  dVar1 = (double)CONCAT44(uStack_4,auStack_c._4_4_);
  if (iVar7 != 0) {
    fVar8 = (float10)FUN_004849c0();
    unique0x0000aa00 = (double)fVar8;
    fVar8 = (float10)(*(code *)**(undefined4 **)(iVar7 + 0x24))(0);
    dVar1 = stack0xfffffff8;
    if (fVar8 <= (float10)stack0xfffffff8) {
      auVar2 = (undefined1  [8])CONCAT44(auStack_c._4_4_,auStack_c._0_4_);
      if (iVar6 != 0) {
        fVar8 = (float10)(*(code *)**(undefined4 **)(iVar6 + 0xc))(0);
        auStack_c = (undefined1  [8])(double)fVar8;
        fVar8 = (float10)(*(code *)**(undefined4 **)(iVar7 + 0x24))(0);
        dVar1 = (double)CONCAT44(uStack_4,auStack_c._4_4_);
        auVar2 = auStack_c;
        if (fVar8 < (float10)dVar1) goto LAB_00612ba8;
      }
      auStack_c._4_4_ = (undefined4)((ulonglong)auVar2 >> 0x20);
      auStack_c._0_4_ = SUB84(auVar2,0);
      dVar1 = (double)CONCAT44(uStack_4,auStack_c._4_4_);
      iVar6 = iVar7 + 0x18;
    }
  }
LAB_00612ba8:
  unique0x10000184 = dVar1;
  fVar8 = (float10)FUN_00612560(param_1,iVar4,auStack_c._0_4_,iVar6);
  return fVar8;
}



void FUN_00612aa3(int param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  double dVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EDI;
  int iVar7;
  float10 fVar8;
  
  uVar5 = param_6;
  iVar6 = 0;
  iVar4 = FUN_005e02e0(0);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + 0x44;
  }
  iVar4 = FUN_00485e00(uVar5,iVar4);
  if (iVar4 != 0) {
    param_1 = 0;
    uVar5 = FUN_00486240(0x28,&param_1);
    iVar4 = FUN_009832e6(uVar5,0,&PTR_PTR_00b03248,&PTR_PTR_00b0320c,0);
    if ((iVar4 != 0) && (0 < param_1)) {
      cVar3 = FUN_00414eb0();
      if (cVar3 != '\0') {
        iVar6 = iVar4 + 0x24;
      }
    }
  }
  iVar4 = FUN_009832e6(*(undefined4 *)(unaff_EDI + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0);
  fVar8 = (float10)FUN_00484850(1);
  param_2 = (float)(fVar8 / (float10)100.0);
  if ((iVar4 == 0) || (iVar4 == -0x60)) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(iVar4 + 100);
  }
  dVar1 = (double)CONCAT44(param_4,param_3);
  if (iVar7 != 0) {
    fVar8 = (float10)FUN_004849c0();
    _param_3 = (double)fVar8;
    fVar8 = (float10)(*(code *)**(undefined4 **)(iVar7 + 0x24))(0);
    dVar1 = _param_3;
    if (fVar8 <= (float10)_param_3) {
      dVar2 = (double)CONCAT44(param_3,param_2);
      if (iVar6 != 0) {
        fVar8 = (float10)(*(code *)**(undefined4 **)(iVar6 + 0xc))(0);
        _param_2 = (double)fVar8;
        fVar8 = (float10)(*(code *)**(undefined4 **)(iVar7 + 0x24))(0);
        dVar1 = (double)CONCAT44(param_4,param_3);
        dVar2 = _param_2;
        if (fVar8 < (float10)dVar1) goto LAB_00612ba8;
      }
      param_3 = (undefined4)((ulonglong)dVar2 >> 0x20);
      param_2 = SUB84(dVar2,0);
      dVar1 = (double)CONCAT44(param_4,param_3);
      iVar6 = iVar7 + 0x18;
    }
  }
LAB_00612ba8:
  _param_3 = dVar1;
  FUN_00612560(param_6,iVar4,param_2,iVar6);
  return;
}



void FUN_00612bd0(int param_1,char param_2)

{
  char cVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != 0xff) && (*(int *)(in_ECX + 0x74) != 0)) {
    if (param_2 == '\0') {
      uVar3 = 0;
      uVar2 = 3;
      (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(3,0);
      FUN_00470fc0(uVar2,uVar3);
    }
    cVar1 = FUN_005f48d0(param_1);
    if (cVar1 != '\0') {
      *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 0x74);
      *(undefined4 *)(in_ECX + 0x74) = 0;
      *(int *)(in_ECX + 0x50) = param_1;
    }
  }
  return;
}



void FUN_00612c30(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x74) == 2) &&
     (*(float *)(in_ECX + 0xe4) < *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0xe0))) {
    *(undefined4 *)(in_ECX + 0x78) = 2;
    *(undefined4 *)(in_ECX + 0x74) = 3;
  }
  return;
}



bool FUN_00612c60(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x70) == 0xb;
}



void FUN_00612c70(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = *(int **)(in_ECX + 0x118);
  if (piVar2 != (int *)0x0) {
    do {
      iVar1 = *piVar2;
      if (piVar2[1] == 0) {
        if (iVar1 == 0) break;
LAB_00612c92:
        FUN_00401f20(iVar1);
      }
      else if (iVar1 != 0) goto LAB_00612c92;
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
    FUN_004526e0();
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x118));
    *(undefined4 *)(in_ECX + 0x118) = 0;
  }
  return;
}



undefined4 FUN_00612cd0(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x6c) != 0xe) && (*(int *)(in_ECX + 0x6c) != 0x10)) {
    return 0;
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00612cf0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = _DAT_00b37290;
  if (*(char *)(in_ECX + 0x15a) == '\0') {
    *(undefined4 *)(in_ECX + 0x164) = *(undefined4 *)(in_ECX + 0x44);
    *(undefined4 *)(in_ECX + 0x168) = uVar1;
    *(undefined4 *)(in_ECX + 0x16c) = 0xbf800000;
    *(undefined1 *)(in_ECX + 0x15a) = 1;
  }
  return;
}



void FUN_00612d30(void)

{
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x15a) != '\0') &&
     (*(float *)(in_ECX + 0x168) < *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0x164))) {
    *(undefined1 *)(in_ECX + 0x15a) = 0;
  }
  return;
}



undefined4 FUN_00612d60(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x3c) != 0) &&
     (piVar1 = *(int **)(*(int *)(in_ECX + 0x3c) + 0x58), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 0xec))(1);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0xec))(1);
      return *(undefined4 *)(iVar2 + 8);
    }
  }
  return 0;
}



void FUN_00612da0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = 0;
  do {
    if ((&DAT_00b15198)[iVar1] == param_1) break;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if (iVar1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00612dce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x17c))();
    return;
  }
  return;
}



void FUN_00612de0(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (param_1 != *(int *)(in_ECX + 0x70)) {
    if ((DAT_00b3b908 != '\0') && (param_1 != 0xd)) {
      if (param_1 == 0) {
        pcVar1 = "fight Hand-to-Hand";
      }
      else if (param_1 == 1) {
        pcVar1 = "fight with a Melee Weapon";
      }
      else if (param_1 == 2) {
        pcVar1 = "fight with a Ranged Weapon";
      }
      else if (param_1 == 3) {
        pcVar1 = "cast Touch spells";
      }
      else if (param_1 == 4) {
        pcVar1 = "cast Ranged spells";
      }
      else if (param_1 == 5) {
        pcVar1 = "attempt to Yield";
      }
      else if (param_1 == 10) {
        pcVar1 = "Switch weapons";
      }
      else if (param_1 == 0xc) {
        pcVar1 = "Get out of the water";
      }
      else {
        pcVar1 = "attempt to Flee";
        if (param_1 != 7) {
          pcVar1 = "...just kinda stand around";
        }
      }
      uVar2 = FUN_004da2a0(pcVar1);
      FUN_00579b60("%.20s is going to %s!",uVar2);
    }
    *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
  }
  *(int *)(in_ECX + 0x70) = param_1;
  return;
}



void FUN_00612ea0(void)

{
  int iVar1;
  float10 extraout_ST0;
  float10 fVar2;
  undefined4 local_8;
  
  iVar1 = FUN_009828c0();
  fVar2 = (float10)iVar1;
  if (extraout_ST0 - fVar2 < (float10)0.0) {
    fVar2 = fVar2 - (float10)1.0;
  }
  local_8 = (undefined4)(longlong)ROUND((float)fVar2);
  FUN_005697c0(local_8);
  FUN_00468230(iVar1);
  return;
}



float10 FUN_00612f30(void)

{
  int iVar1;
  
  iVar1 = FUN_00452a60();
  return (float10)iVar1;
}



float10 FUN_00612f50(int *param_1,int *param_2,char param_3)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float unaff_retaddr;
  float fVar7;
  undefined8 uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  undefined8 uStack_34;
  float fStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 auStack_c [12];
  
  if (param_2 == (int *)0x0) {
    return (float10)0;
  }
  fVar6 = (float10)FUN_004d7e90(param_2,0);
  if ((float10)(float)fVar6 == (float10)3.4028234663852886e+38) {
    return (float10)(float)fVar6;
  }
  cVar3 = (**(code **)(*param_1 + 400))();
  if ((cVar3 == '\0') || (cVar3 = (**(code **)(*param_2 + 400))(), cVar3 == '\0'))
  goto LAB_0061314c;
  cVar3 = FUN_005e0530();
  if ((cVar3 == '\0') || (cVar3 = FUN_005e0530(), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  pfVar4 = (float *)(**(code **)(*param_1 + 0x174))();
  fStack_20 = pfVar4[1];
  fStack_24 = *pfVar4;
  fStack_1c = pfVar4[2];
  pfVar4 = (float *)(**(code **)(*param_2 + 0x174))();
  uStack_34._0_4_ = pfVar4[2];
  fStack_18 = *pfVar4;
  fStack_14 = pfVar4[1];
  fStack_10 = pfVar4[2];
  if (!bVar2) {
    if (param_3 == '\0') goto LAB_0061314c;
    pfVar4 = (float *)FUN_00403c00();
    fStack_4c = ABS(fStack_1c - fStack_10);
    if (*pfVar4 < fStack_4c == (*pfVar4 == fStack_4c)) goto LAB_0061314c;
  }
  (**(code **)(*param_1 + 0x15c))((int)&uStack_34 + 4);
  (**(code **)(*param_1 + 0x158))(&uStack_34);
  iVar5 = (**(code **)(*param_2 + 0x15c))(&stack0xffffffb0);
  fVar7 = *(float *)(iVar5 + 8) + fStack_40;
  iVar5 = (**(code **)(*param_2 + 0x158))(&fStack_18);
  fVar1 = *(float *)(iVar5 + 8) + (float)uStack_34;
  if (((fStack_4c <= fStack_48) && (fVar1 < fStack_4c != (fVar1 == fStack_4c))) ||
     ((uStack_34._4_4_ < fStack_48 != (uStack_34._4_4_ == fStack_48) && (fVar1 <= uStack_34._4_4_)))
     ) {
    uStack_34._4_4_ = fStack_24 - fStack_18;
    fStack_2c = fStack_20 - fStack_14;
    uStack_28 = 0;
    FUN_00404c90(fVar7);
  }
LAB_0061314c:
  iVar5 = (**(code **)(*param_2 + 0x15c))(auStack_c);
  uStack_34 = (double)*(float *)(iVar5 + 4);
  (**(code **)(*param_2 + 0xec))();
  iVar5 = (**(code **)(*param_1 + 0x15c))(&fStack_1c);
  uStack_34._0_4_ = (float)((ulonglong)(double)*(float *)(iVar5 + 4) >> 0x20);
  (**(code **)(*param_1 + 0xec))();
  iVar5 = FUN_009828c0();
  return (float10)(unaff_retaddr - (float)iVar5);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_006131d0(int *param_1,int *param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  pfVar2 = (float *)(**(code **)(*param_1 + 0x174))();
  pfVar3 = (float *)(**(code **)(*param_2 + 0x174))();
  fStack_8 = pfVar3[1] - pfVar2[1];
  fStack_4 = pfVar3[2] - pfVar2[2];
  fStack_c = *pfVar3 - *pfVar2;
  fVar5 = (float10)FUN_00683cb0(&fStack_c);
  fVar6 = (float10)(**(code **)(*param_1 + 0x1e0))();
  fVar1 = ABS((float)(fVar6 - (float10)(float)fVar5)) * 57.295776;
  if (180.0 < fVar1) {
    fVar1 = ABS(fVar1 - 360.0);
  }
  bVar4 = fVar1 < _DAT_00b36f28;
  if (param_3 != (float *)0x0) {
    *param_3 = fVar1;
    return bVar4;
  }
  return bVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006132d0(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (param_1 * param_4 * param_1) / ((param_3 + param_3) * param_3);
  fVar1 = param_2 * param_2 + param_1 * param_1;
  fVar2 = fVar3 * -2.0 * param_2 - param_1 * param_1;
  if (0.0 <= fVar2 * fVar2 - fVar1 * 4.0 * fVar3 * fVar3) {
    fVar4 = (float10)FUN_00982c30();
    fVar3 = ((float)fVar4 - fVar2) / (fVar1 + fVar1);
    param_1 = (-fVar2 - (float)fVar4) / (fVar1 + fVar1);
    if (param_1 < fVar3) {
      param_1 = fVar3;
    }
    if ((0.0 <= param_1) && (param_1 <= 1.0)) {
      fVar4 = (float10)FUN_00982c30();
      fVar4 = (float10)FUN_00612820((float)fVar4);
      fVar5 = (float10)FUN_00537770(param_2);
      return (float10)(float)(fVar5 * (float10)(float)fVar4);
    }
  }
  return (float10)(_DAT_00b3f9a4 * 0.25);
}



float10 FUN_00613410(float param_1,undefined4 param_2,float param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00986000();
  return (float10)(param_1 / ((float)fVar1 * param_3));
}



int FUN_00613440(float param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  uint3 uVar5;
  
  fVar1 = param_2;
  piVar2 = (int *)FUN_005e0f50();
  uVar3 = (**(code **)(*piVar2 + 0x11c))();
  if (((char)uVar3 < 'd') && (*(int *)(in_ECX + 0x70) != 0)) {
    param_2 = param_2 * 0.25;
    uVar3 = uVar3 & 0xffff0000;
    if (32.0 <= param_2) {
      param_2 = 32.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  if ((*(int *)(in_ECX + 0x70) == 2) || (*(int *)(in_ECX + 0x70) == 4)) {
    param_2 = 0.0;
  }
  param_2 = param_2 + fVar1;
  uVar5 = (uint3)(CONCAT22((short)(uVar3 >> 0x10),
                           (ushort)(param_1 < param_2) << 8 |
                           (ushort)(NAN(param_1) || NAN(param_2)) << 10 |
                           (ushort)(param_1 == param_2) << 0xe) >> 8);
  iVar4 = CONCAT31(uVar5,1);
  if (param_1 < param_2 == (param_1 == param_2)) {
    iVar4 = (uint)uVar5 << 8;
  }
  return iVar4;
}



bool FUN_006134c0(void)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  int unaff_retaddr;
  
  bVar3 = false;
  piVar2 = (int *)FUN_005e0f50();
  cVar1 = (**(code **)(*piVar2 + 0x11c))();
  if (0.0 < (double)(int)cVar1) {
    bVar3 = true;
    piVar2 = (int *)FUN_005e0f50();
    cVar1 = (**(code **)(*piVar2 + 0x16c))(2);
    if (cVar1 != '\0') {
      switch(unaff_retaddr + -0x16) {
      case 0:
        piVar2 = (int *)FUN_005e0f50();
        cVar1 = (**(code **)(*piVar2 + 0x128))();
        return '\0' < cVar1;
      case 1:
        piVar2 = (int *)FUN_005e0f50();
        cVar1 = (**(code **)(*piVar2 + 300))();
        return '\0' < cVar1;
      case 2:
        piVar2 = (int *)FUN_005e0f50();
        cVar1 = (**(code **)(*piVar2 + 0x130))();
        return '\0' < cVar1;
      case 3:
        piVar2 = (int *)FUN_005e0f50();
        cVar1 = (**(code **)(*piVar2 + 0x134))();
        return '\0' < cVar1;
      case 4:
        piVar2 = (int *)FUN_005e0f50();
        cVar1 = (**(code **)(*piVar2 + 0x138))();
        bVar3 = '\0' < cVar1;
      }
    }
  }
  return bVar3;
}



undefined4 FUN_006135f0(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  undefined4 unaff_ESI;
  
  while( true ) {
    piVar1 = *(int **)(in_ECX + 0x40);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((piVar1[1] == 0) && (*piVar1 == 0)) break;
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      return *(undefined4 *)*piVar1;
    }
    piVar2 = (int *)piVar1[1];
    if (piVar2 == (int *)0x0) {
      *piVar1 = 0;
    }
    else {
      piVar1[1] = piVar2[1];
      *piVar1 = *piVar2;
      FUN_00401f20(piVar2,unaff_ESI);
    }
  }
  return 0;
}



int * FUN_00613640(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = *(int **)(in_ECX + 0x40);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    if (((int *)piVar2[1] == (int *)0x0) && (*piVar2 == 0)) break;
    piVar1 = (int *)*piVar2;
    piVar2 = (int *)piVar2[1];
    if (*piVar1 == param_1) {
      return piVar1;
    }
  }
  return (int *)0x0;
}



undefined1 FUN_00613670(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = *(int **)(in_ECX + 0x40);
  uVar2 = 0;
  if (piVar3 != (int *)0x0) {
    while( true ) {
      piVar1 = (int *)piVar3[1];
      if ((piVar1 == (int *)0x0) && (*piVar3 == 0)) {
        return 0;
      }
      if (*(int *)*piVar3 == param_1) break;
      piVar3 = piVar1;
      if (piVar1 == (int *)0x0) {
        return uVar2;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



void FUN_006136b0(void)

{
  if ((DAT_00b3b90c == 0) && (*(int *)(DAT_00b33398 + 0x24) != 0)) {
    FUN_006acd10(4,0,0x3f800000);
  }
  DAT_00b3b90c = DAT_00b3b90c + 1;
  return;
}



void FUN_006136e0(void)

{
  char cVar1;
  
  if ((((*(uint *)(DAT_00b33b00 + 0x18) >> 0xb & 1) == 0) && (0 < DAT_00b3b90c)) &&
     (DAT_00b3b90c = DAT_00b3b90c + -1, DAT_00b3b90c < 1)) {
    DAT_00b3b90c = 0;
    if (*DAT_00b33398 == '\0') {
      (**(code **)(*DAT_00b333c4 + 0x394))(0);
    }
    if (((*(int *)(DAT_00b33398 + 0x24) != 0) &&
        (cVar1 = (**(code **)(*DAT_00b333c4 + 0x1f8))(), cVar1 == '\0')) &&
       (cVar1 = (**(code **)(*DAT_00b333c4 + 0x198))(0), cVar1 == '\0')) {
      FUN_006acd10(0xffff,0,0x3f800000);
    }
  }
  return;
}



undefined4 FUN_00613780(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  
  cVar1 = FUN_005e3270();
  if (cVar1 == '\0') {
    if (*(int *)(in_ECX + 0x70) == 0) {
      uVar2 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x284))(0x11);
      return uVar2;
    }
    iVar3 = FUN_00612d60();
    if (iVar3 != 0) {
      iVar3 = **(int **)(in_ECX + 0x3c);
      FUN_00612d60();
      uVar2 = FUN_004bb060();
      uVar2 = (**(code **)(iVar3 + 0x284))(uVar2);
      return uVar2;
    }
  }
  else {
    iVar3 = FUN_009832e6(*(undefined4 *)(in_ECX + 0x3c),0,&PTR_PTR_00b03070,&PTR_PTR_00b10a1c,0);
    if (iVar3 != 0) {
      FUN_00624fc0();
      uVar2 = FUN_009828c0();
      return uVar2;
    }
  }
  return 0;
}



int * FUN_00613810(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(in_ECX + 100);
  piVar2 = (int *)0x0;
  if (piVar4 == (int *)0x0) {
    return (int *)0x0;
  }
  do {
    piVar3 = piVar2;
    if ((piVar4[1] == 0) && (*piVar4 == 0)) break;
    if (piVar2 != (int *)0x0) goto LAB_00613852;
    piVar3 = (int *)*piVar4;
    cVar1 = FUN_00414f00(param_1,0x48);
    if (cVar1 == '\0') {
      piVar4 = (int *)piVar4[1];
      piVar3 = piVar2;
    }
    piVar2 = piVar3;
  } while (piVar4 != (int *)0x0);
  if (piVar3 != (int *)0x0) {
LAB_00613852:
    if ((*piVar3 != 0) && (cVar1 = FUN_00419d90(), cVar1 == '\0')) {
      FUN_0041a610(0);
    }
  }
  return piVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00613880(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  float10 fVar5;
  
  if (*(int *)(in_ECX + 0x70) == 9) {
    return 0;
  }
  if (*(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0x104) <= *(float *)(in_ECX + 0x108)) {
    return 0;
  }
  if (*(char *)(in_ECX + 0x1ae) != '\0') {
    return 0;
  }
  if ((*(undefined4 **)(in_ECX + 0x84) != (undefined4 *)0x0) &&
     (cVar1 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x5c) + 0x1c))
                        (**(undefined4 **)(in_ECX + 0x84),0,0,0), cVar1 != '\0')) {
LAB_00613916:
    if (*(int *)(in_ECX + 0x70) != 9) {
      if (DAT_00b3b908 != '\0') {
        uVar2 = FUN_004da2a0("...just kinda stand around");
        FUN_00579b60("%.20s is going to %s!",uVar2);
      }
      *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
    }
    *(undefined4 *)(in_ECX + 0x70) = 9;
    return 1;
  }
  if ((*(undefined4 **)(in_ECX + 0x88) != (undefined4 *)0x0) &&
     (cVar1 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x5c) + 0x1c))
                        (**(undefined4 **)(in_ECX + 0x88),0,0,0), cVar1 != '\0')) {
    *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(in_ECX + 0x88);
    *(undefined4 *)(in_ECX + 0x88) = 0;
    goto LAB_00613916;
  }
  if (*(int *)(in_ECX + 0x84) != 0) {
    return 0;
  }
  puVar4 = (undefined4 *)0x0;
  iVar3 = FUN_005f1910(8);
  if (iVar3 < 1) {
    fVar5 = (float10)1;
  }
  else {
    fVar5 = (float10)(**(code **)(**(int **)(in_ECX + 0x3c) + 0x288))(8);
    fVar5 = fVar5 / (float10)iVar3;
  }
  if (((float)fVar5 < (float)_DAT_00b372d0 / 100.0) &&
     (puVar4 = (undefined4 *)FUN_00613810(0x45484552), puVar4 == (undefined4 *)0x0)) {
    puVar4 = (undefined4 *)FUN_00613810(0x45484f46);
  }
  iVar3 = FUN_005f1910(9);
  if (iVar3 < 1) {
    fVar5 = (float10)1;
  }
  else {
    fVar5 = (float10)(**(code **)(**(int **)(in_ECX + 0x3c) + 0x288))(9);
    fVar5 = fVar5 / (float10)iVar3;
  }
  if ((((float)fVar5 < (float)_DAT_00b372d8 / 100.0) && (puVar4 == (undefined4 *)0x0)) &&
     (puVar4 = (undefined4 *)FUN_00613810(0x50534552), puVar4 == (undefined4 *)0x0)) {
    puVar4 = (undefined4 *)FUN_00613810(0x50534f46);
  }
  fVar5 = (float10)FUN_005f4880();
  if ((float)fVar5 < (float)_DAT_00b372e0 / 100.0) {
    if ((puVar4 != (undefined4 *)0x0) ||
       (puVar4 = (undefined4 *)FUN_00613810(0x41464552), puVar4 != (undefined4 *)0x0))
    goto LAB_00613a7f;
    puVar4 = (undefined4 *)FUN_00613810(0x41464f46);
  }
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
LAB_00613a7f:
  cVar1 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x5c) + 0x1c))(*puVar4,0,0,0);
  if (cVar1 == '\0') {
    return 0;
  }
  *(undefined4 **)(in_ECX + 0x84) = puVar4;
  if (*(int *)(in_ECX + 0x70) != 9) {
    if (DAT_00b3b908 != '\0') {
      uVar2 = FUN_004da2a0("...just kinda stand around");
      FUN_00579b60("%.20s is going to %s!",uVar2);
    }
    *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
  }
  *(undefined4 *)(in_ECX + 0x70) = 9;
  return 1;
}



undefined1 FUN_00613af0(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 unaff_ESI;
  float10 fVar3;
  float10 fVar4;
  
  uVar2 = 0;
  if (param_3 == (int *)0x0) {
    return 0;
  }
  cVar1 = FUN_005e3270();
  if (cVar1 != '\0') {
    if (param_2 == 0x20000) {
      return 0;
    }
    if ((param_2 == 0x10000) && (cVar1 = FUN_005e1cf0(), cVar1 == '\0')) {
      return 0;
    }
  }
  cVar1 = FUN_00415130(param_2);
  if (cVar1 != '\0') {
    if ((int *)*param_3 != (int *)0x0) {
      fVar3 = (float10)(*(code *)**(undefined4 **)(*(int *)*param_3 + 0xc))(0);
      fVar4 = (float10)(*(code *)**(undefined4 **)(*param_1 + 0xc))(0);
      if (fVar4 <= (float10)(double)CONCAT44(SUB84((double)fVar3,0),unaff_ESI)) {
        return 0;
      }
      FUN_00401f20(*param_3);
    }
    uVar2 = 1;
    *param_3 = (int)param_1;
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00613bb0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  float10 fVar5;
  double dVar6;
  char cStack_8;
  char cStack_4;
  
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (iVar2 = FUN_006135f0(), iVar2 != 0)) &&
     (cVar1 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x5c) + 0x1c))(*param_1,0,0,0),
     cVar1 != '\0')) {
    cVar1 = FUN_004149f0();
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = FUN_00414f00(0x41524150,0x48);
    if (cVar1 != '\0') {
      piVar3 = (int *)FUN_006135f0();
      cVar1 = (**(code **)(*piVar3 + 0x1a0))();
      if (cVar1 != '\0') {
        return 0;
      }
    }
    cVar1 = FUN_00414f00(0x434e4c53,0x48);
    if (cVar1 != '\0') {
      piVar3 = (int *)FUN_006135f0();
      iVar2 = (**(code **)(*piVar3 + 0x284))(0x31);
      if (0 < iVar2) {
        return 0;
      }
    }
    iVar2 = *param_1;
    FUN_006135f0(iVar2);
    cVar1 = FUN_006a1df0(iVar2);
    if ((cVar1 == '\0') && ((cStack_8 == '\0' || (cVar1 = FUN_004150d0(), cVar1 == '\0')))) {
      cVar1 = FUN_00414fe0();
      if (cVar1 != '\0') {
        if (cStack_4 == '\0') {
          dVar6 = (double)_DAT_00b3c0d0;
          fVar5 = (float10)FUN_00612930();
          if (fVar5 < (float10)dVar6 != (fVar5 == (float10)dVar6)) {
            return 0;
          }
        }
        cVar1 = FUN_005e0530();
        if (cVar1 != '\0') {
          return 0;
        }
      }
      if (*param_1 != 0) {
        for (iVar2 = *param_1 + 0xc; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8) + -4) {
          iVar4 = *(int *)(iVar2 + 4);
          if (((iVar4 != 0) && ((*(uint *)(*(int *)(iVar4 + 0x1c) + 0x58) & 0x1180000) != 0)) &&
             ((cVar1 = FUN_00413470(), cVar1 != '\0' &&
              (((byte)*(undefined4 *)(*(int *)(iVar4 + 0x1c) + 0x58) & 6) == 6)))) {
            piVar3 = (int *)FUN_006135f0();
            iVar4 = (**(code **)(*piVar3 + 0x284))(*(undefined4 *)(iVar4 + 0x14));
            if (iVar4 < DAT_00b37270) {
              return 0;
            }
          }
          if (*(int *)(iVar2 + 8) == 0) {
            return 1;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}



void FUN_00613d60(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (param_1 != 0) {
    if (*(int *)(in_ECX + 0x5c) != 0) {
      FUN_0065c620(param_1);
    }
    if (*(int *)(in_ECX + 0x60) != 0) {
      FUN_0065c620(param_1);
    }
    if (*(int *)(in_ECX + 100) != 0) {
      FUN_0065c620(param_1);
    }
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 != 0) {
      FUN_00484470();
      FUN_00401f20(iVar1);
    }
    if (param_1 == *(int *)(in_ECX + 0x94)) {
      *(undefined4 *)(in_ECX + 0x94) = 0;
    }
    else if (param_1 == *(int *)(in_ECX + 0x98)) {
      *(undefined4 *)(in_ECX + 0x98) = 0;
    }
    else if (param_1 == *(int *)(in_ECX + 0x90)) {
      *(undefined4 *)(in_ECX + 0x90) = 0;
    }
    else if (param_1 == *(int *)(in_ECX + 0x9c)) {
      *(undefined4 *)(in_ECX + 0x9c) = 0;
    }
    FUN_00419f10(1);
    FUN_00401f20(param_1);
  }
  return;
}



void FUN_00613e10(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0x18))();
    if (iVar2 == 6) {
      puVar1 = *(undefined4 **)(in_ECX + 0x7c);
      if ((((puVar1 != (undefined4 *)0x0) && ((int *)*puVar1 == param_1)) && (puVar1[1] != 0)) &&
         (iVar2 = FUN_009832e6(*(undefined4 *)(puVar1[1] + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b084f0,
                               0), iVar2 != 0)) {
        FUN_00613d60(*(undefined4 *)(in_ECX + 0x7c));
        *(undefined4 *)(in_ECX + 0x7c) = 0;
      }
      puVar1 = *(undefined4 **)(in_ECX + 0x80);
      if (((puVar1 != (undefined4 *)0x0) && ((int *)*puVar1 == param_1)) &&
         ((puVar1[1] != 0 &&
          (iVar2 = FUN_009832e6(*(undefined4 *)(puVar1[1] + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b084f0
                                ,0), iVar2 != 0)))) {
        FUN_00613d60(*(undefined4 *)(in_ECX + 0x80));
        *(undefined4 *)(in_ECX + 0x80) = 0;
      }
      puVar1 = *(undefined4 **)(in_ECX + 0x84);
      if (((puVar1 != (undefined4 *)0x0) && ((int *)*puVar1 == param_1)) &&
         ((puVar1[1] != 0 &&
          (iVar2 = FUN_009832e6(*(undefined4 *)(puVar1[1] + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b084f0
                                ,0), iVar2 != 0)))) {
        FUN_00613d60(*(undefined4 *)(in_ECX + 0x84));
        *(undefined4 *)(in_ECX + 0x84) = 0;
      }
      if (((*(undefined4 **)(in_ECX + 0x88) != (undefined4 *)0x0) &&
          (puVar1 == *(undefined4 **)(in_ECX + 0x88))) && (*(int *)(in_ECX + 0x84) == 0)) {
        *(undefined4 *)(in_ECX + 0x88) = 0;
      }
      puVar1 = *(undefined4 **)(in_ECX + 0x88);
      if (((puVar1 != (undefined4 *)0x0) && ((int *)*puVar1 == param_1)) &&
         ((puVar1[1] != 0 &&
          (iVar2 = FUN_009832e6(*(undefined4 *)(puVar1[1] + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b084f0
                                ,0), iVar2 != 0)))) {
        FUN_00613d60(*(undefined4 *)(in_ECX + 0x88));
        *(undefined4 *)(in_ECX + 0x88) = 0;
      }
      puVar1 = *(undefined4 **)(in_ECX + 0x90);
      if (((puVar1 != (undefined4 *)0x0) && ((int *)*puVar1 == param_1)) &&
         ((puVar1[1] != 0 &&
          (iVar2 = FUN_009832e6(*(undefined4 *)(puVar1[1] + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b084f0
                                ,0), iVar2 != 0)))) {
        FUN_00613d60(*(undefined4 *)(in_ECX + 0x90));
        *(undefined4 *)(in_ECX + 0x90) = 0;
      }
      puVar1 = *(undefined4 **)(in_ECX + 0x9c);
      if ((((puVar1 != (undefined4 *)0x0) && ((int *)*puVar1 == param_1)) && (puVar1[1] != 0)) &&
         (iVar2 = FUN_009832e6(*(undefined4 *)(puVar1[1] + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b084f0,
                               0), iVar2 != 0)) {
        FUN_00613d60(*(undefined4 *)(in_ECX + 0x9c));
        *(undefined4 *)(in_ECX + 0x9c) = 0;
      }
      puVar1 = *(undefined4 **)(in_ECX + 0x98);
      if (((puVar1 != (undefined4 *)0x0) && ((int *)*puVar1 == param_1)) &&
         ((puVar1[1] != 0 &&
          (iVar2 = FUN_009832e6(*(undefined4 *)(puVar1[1] + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b084f0
                                ,0), iVar2 != 0)))) {
        FUN_00613d60(*(undefined4 *)(in_ECX + 0x98));
        *(undefined4 *)(in_ECX + 0x98) = 0;
      }
      puVar1 = *(undefined4 **)(in_ECX + 0x94);
      if (((puVar1 != (undefined4 *)0x0) && ((int *)*puVar1 == param_1)) &&
         ((puVar1[1] != 0 &&
          (iVar2 = FUN_009832e6(*(undefined4 *)(puVar1[1] + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b084f0
                                ,0), iVar2 != 0)))) {
        FUN_00613d60(*(undefined4 *)(in_ECX + 0x94));
        *(undefined4 *)(in_ECX + 0x94) = 0;
      }
    }
    else if (iVar2 == 7) {
      puVar1 = *(undefined4 **)(in_ECX + 0x7c);
      if ((puVar1 != (undefined4 *)0x0) && ((int *)*puVar1 == param_1)) {
        FUN_00613d60(puVar1);
        *(undefined4 *)(in_ECX + 0x7c) = 0;
      }
      puVar1 = *(undefined4 **)(in_ECX + 0x80);
      if ((puVar1 != (undefined4 *)0x0) && ((int *)*puVar1 == param_1)) {
        FUN_00613d60(puVar1);
        *(undefined4 *)(in_ECX + 0x80) = 0;
      }
      puVar1 = *(undefined4 **)(in_ECX + 0x84);
      if ((puVar1 != (undefined4 *)0x0) && ((int *)*puVar1 == param_1)) {
        FUN_00613d60(puVar1);
        *(undefined4 *)(in_ECX + 0x84) = 0;
      }
      if (((*(undefined4 **)(in_ECX + 0x88) != (undefined4 *)0x0) &&
          (puVar1 == *(undefined4 **)(in_ECX + 0x88))) && (*(int *)(in_ECX + 0x84) == 0)) {
        *(undefined4 *)(in_ECX + 0x88) = 0;
      }
      puVar1 = *(undefined4 **)(in_ECX + 0x88);
      if ((puVar1 != (undefined4 *)0x0) && ((int *)*puVar1 == param_1)) {
        FUN_00613d60(puVar1);
        *(undefined4 *)(in_ECX + 0x88) = 0;
      }
      puVar1 = *(undefined4 **)(in_ECX + 0x90);
      if ((puVar1 != (undefined4 *)0x0) && ((int *)*puVar1 == param_1)) {
        FUN_00613d60(puVar1);
        *(undefined4 *)(in_ECX + 0x90) = 0;
      }
      puVar1 = *(undefined4 **)(in_ECX + 0x9c);
      if ((puVar1 != (undefined4 *)0x0) && ((int *)*puVar1 == param_1)) {
        FUN_00613d60(puVar1);
        *(undefined4 *)(in_ECX + 0x9c) = 0;
      }
      puVar1 = *(undefined4 **)(in_ECX + 0x98);
      if ((puVar1 != (undefined4 *)0x0) && ((int *)*puVar1 == param_1)) {
        FUN_00613d60(puVar1);
        *(undefined4 *)(in_ECX + 0x98) = 0;
      }
      puVar1 = *(undefined4 **)(in_ECX + 0x94);
      if ((puVar1 != (undefined4 *)0x0) && ((int *)*puVar1 == param_1)) {
        FUN_00613d60(puVar1);
        *(undefined4 *)(in_ECX + 0x94) = 0;
        return;
      }
    }
  }
  return;
}



float10 FUN_006141b0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  float local_8;
  
  piVar6 = (int *)(in_ECX + 0x15c);
  if ((piVar6 != (int *)0x0) && ((*(int *)(in_ECX + 0x160) != 0 || (*piVar6 != 0)))) {
    iVar5 = 0;
    piVar1 = piVar6;
    do {
      if (*piVar1 != 0) {
        iVar5 = iVar5 + 1;
      }
      piVar1 = (int *)piVar1[1];
    } while (piVar1 != (int *)0x0);
    if (*(float *)(in_ECX + 0xcc) < 0.0) {
      local_8 = 0.0;
      do {
        piVar1 = (int *)*piVar6;
        if (piVar1 == (int *)0x0) break;
        piVar6 = (int *)piVar6[1];
        iVar2 = (**(code **)(*piVar1 + 0x330))();
        if (iVar2 != 0) {
          iVar3 = FUN_006135f0();
          iVar4 = FUN_006135f0();
          if ((iVar3 == iVar4) &&
             (((iVar3 = *(int *)(iVar2 + 0x70), iVar3 == 0 || (iVar3 == 1)) || (iVar3 == 3)))) {
            local_8 = local_8 + 360.0 / (float)iVar5;
            *(float *)(iVar2 + 0xcc) = local_8 * 0.017453292;
          }
        }
      } while (piVar6 != (int *)0x0);
      return (float10)0;
    }
  }
  return (float10)0;
}



undefined1 FUN_00614290(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = FUN_006135f0();
  if (iVar2 != 0) {
    FUN_006135f0();
    cVar1 = FUN_005e0530();
    if (cVar1 != '\0') {
      cVar1 = FUN_005e0530();
      if (cVar1 == '\0') {
        cVar1 = FUN_005e1cb0();
        if (cVar1 == '\0') {
          return 0;
        }
      }
    }
  }
  return *(undefined1 *)(in_ECX + 0x174);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006142d0(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int in_ECX;
  float10 fVar6;
  float local_10;
  float local_c;
  float fStack_8;
  
  pfVar2 = param_2;
  pfVar1 = param_1;
  *param_1 = 1000.0;
  *param_2 = 2000.0;
  local_10 = *param_1;
  local_c = 2000.0;
  param_1 = (float *)*param_1;
  param_2 = (float *)0x44fa0000;
  if ((((*(int *)(in_ECX + 0x70) == 2) && (*(int *)(in_ECX + 0x3c) != 0)) &&
      (piVar5 = *(int **)(*(int *)(in_ECX + 0x3c) + 0x58), piVar5 != (int *)0x0)) &&
     ((iVar3 = (**(code **)(*piVar5 + 0xec))(1), iVar3 != 0 &&
      (iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0xec))(1),
      *(int *)(iVar3 + 8) != 0)))) {
    iVar3 = FUN_00612d60();
    if (*(char *)(iVar3 + 0x90) == '\x04') {
      iVar3 = FUN_00612d60();
      iVar3 = *(int *)(iVar3 + 100);
    }
    else {
      iVar3 = 0;
    }
    if (iVar3 == 0) {
      param_1 = (float *)_DAT_00b37110;
      param_2 = (float *)_DAT_00b37118;
    }
    else {
      iVar3 = FUN_00419b30(2);
      if (iVar3 != 0) {
        uVar4 = FUN_00416410(&param_1,&param_2);
        FUN_0041ba70(uVar4);
      }
    }
  }
  if ((*(int **)(in_ECX + 0x80) == (int *)0x0) || (**(int **)(in_ECX + 0x80) == 0)) {
    local_10 = (float)param_1;
    local_c = (float)param_2;
  }
  else {
    iVar3 = FUN_00419b30(2);
    if (iVar3 != 0) {
      uVar4 = FUN_00416410(&local_10,&local_c);
      FUN_0041ba70(uVar4);
    }
  }
  piVar5 = (int *)FUN_005e0f50();
  fVar6 = (float10)(**(code **)(*piVar5 + 0x144))();
  fStack_8 = (float)fVar6;
  piVar5 = (int *)FUN_005e0f50();
  fVar6 = (float10)(**(code **)(*piVar5 + 0x148))();
  if ((float)param_1 < local_10) {
    local_10 = (float)param_1;
  }
  if (fStack_8 == 0.0) {
    param_1 = (float *)0x3f800000;
  }
  else {
    param_1 = (float *)fStack_8;
  }
  *pfVar1 = (float)param_1 * local_10;
  if ((float)param_2 < local_c) {
    local_c = (float)param_2;
  }
  if ((float)fVar6 != 0.0) {
    *pfVar2 = (float)fVar6 * local_c;
    return;
  }
  *pfVar2 = local_c * 1.0;
  return;
}



int FUN_006144d0(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int in_ECX;
  int iVar5;
  
  piVar3 = param_1;
  if (param_1 != (int *)0x0) {
    piVar1 = *(int **)(in_ECX + 0x40);
    param_1 = (int *)0x0;
    for (; (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]
        ) {
      piVar2 = *(int **)*piVar1;
      iVar5 = 0;
      if (piVar2 == piVar3) {
        iVar5 = 100;
      }
      else {
        cVar4 = FUN_005e9d40(piVar2);
        if (cVar4 != '\0') {
          iVar5 = (**(code **)(*piVar3 + 0x224))(piVar2);
        }
      }
      if ((int)param_1 < iVar5) {
        *param_2 = (int)piVar2;
        param_1 = (int *)iVar5;
      }
    }
    return (int)param_1;
  }
  return 0;
}



undefined1 FUN_00614550(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint3 uVar7;
  int in_ECX;
  float unaff_EDI;
  float10 fVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack_80;
  undefined8 uStack_7c;
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
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [52];
  
  if (((*(int *)(in_ECX + 0x3c) == 0) ||
      (piVar1 = *(int **)(*(int *)(in_ECX + 0x3c) + 0x58), piVar1 == (int *)0x0)) ||
     (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 != 0)) {
    return 4;
  }
  if (*(char *)(in_ECX + 400) == '\0') {
    uVar3 = FUN_005e5690(5,0,0);
    iVar2 = FUN_0051aa00(uVar3);
    *(bool *)(in_ECX + 0x194) = iVar2 == 5;
    uVar3 = FUN_005e5690(6,0,0);
    iVar2 = FUN_0051aa00(uVar3);
    *(bool *)(in_ECX + 0x195) = iVar2 == 6;
    uVar3 = FUN_005e5690(3,0,0);
    iVar2 = FUN_0051aa00(uVar3);
    *(bool *)(in_ECX + 0x196) = iVar2 == 3;
    uVar3 = FUN_005e5690(4,0,0);
    iVar2 = FUN_0051aa00(uVar3);
    *(bool *)(in_ECX + 0x197) = iVar2 == 4;
    *(undefined1 *)(in_ECX + 400) = 1;
  }
  if ((*(char *)(in_ECX + 0x191) == '\0') &&
     (((iVar2 = *(int *)(in_ECX + 0x6c), iVar2 == 4 || (iVar2 == 7)) ||
      ((iVar2 == 9 || (iVar2 == 8)))))) {
    return 4;
  }
  if ((*(char *)(in_ECX + 0x191) == '\0') && (param_1 == 0)) {
    uVar3 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x174))();
    FUN_004121a0((int)&uStack_7c + 4,uVar3);
    pfVar4 = (float *)FUN_00403c00();
    fVar8 = (float10)FUN_00404c90();
    if (fVar8 < (float10)*pfVar4) {
      return 4;
    }
  }
  puVar5 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x3c) + 0x174))();
  *(undefined4 *)(in_ECX + 0x198) = *puVar5;
  *(undefined4 *)(in_ECX + 0x19c) = puVar5[1];
  *(undefined4 *)(in_ECX + 0x1a0) = puVar5[2];
  fVar8 = (float10)(**(code **)(**(int **)(in_ECX + 0x3c) + 0x1e0))();
  FUN_0070fdd0((float)fVar8);
  piVar1 = *(int **)(in_ECX + 0x3c);
  pfVar4 = (float *)(**(code **)(*piVar1 + 0x15c))(auStack_3c);
  uStack_7c = (double)*pfVar4;
  pfVar4 = (float *)(**(code **)(*piVar1 + 0x158))(auStack_34);
  fVar10 = (float)(double)CONCAT44((float)uStack_7c,uStack_80) - *pfVar4;
  if (fVar10 == 0.0) {
    fVar10 = 32.0;
  }
  piVar1 = *(int **)(in_ECX + 0x3c);
  iVar2 = (**(code **)(*piVar1 + 0x15c))(auStack_38);
  fVar9 = *(float *)(iVar2 + 4);
  iVar2 = (**(code **)(*piVar1 + 0x158))(auStack_48);
  fVar10 = (float)(double)CONCAT44(SUB84((double)fVar9,0),fVar10) - *(float *)(iVar2 + 4);
  if (fVar10 == 0.0) {
    fVar10 = unaff_EDI;
  }
  fVar9 = fVar10;
  if (((0.5 < unaff_EDI / fVar10) && (unaff_EDI / fVar10 < 2.0)) &&
     (fVar9 = unaff_EDI, unaff_EDI <= fVar10)) {
    unaff_EDI = fVar10;
    fVar9 = fVar10;
  }
  if (64.0 < unaff_EDI) {
    unaff_EDI = 64.0;
  }
  if (64.0 < fVar9) {
    fVar9 = 64.0;
  }
  fStack_64 = -unaff_EDI;
  fStack_60 = 0.0;
  fStack_5c = 0.0;
  fStack_54 = 0.0;
  fStack_50 = 0.0;
  fStack_70 = 0.0;
  fStack_68 = 0.0;
  uStack_7c._0_4_ = 0.0;
  uStack_7c._4_4_ = -fVar9;
  fStack_74 = 0.0;
  fStack_6c = fVar9;
  fStack_58 = unaff_EDI;
  uVar6 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c0))();
  if ((uVar6 & 2) != 0) {
    uStack_7c._4_4_ = uStack_7c._4_4_ - fVar9;
  }
  uVar6 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c0))();
  if ((uVar6 & 1) != 0) {
    uStack_7c._4_4_ = uStack_7c._4_4_ + fVar9;
  }
  uVar6 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c0))();
  if ((uVar6 & 4) != 0) {
    uStack_7c._0_4_ = (float)uStack_7c - unaff_EDI;
  }
  uVar6 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c0))();
  if ((uVar6 & 8) != 0) {
    uStack_7c._0_4_ = (float)uStack_7c + unaff_EDI;
  }
  pfVar4 = (float *)FUN_007101f0(auStack_40,&fStack_64);
  fStack_64 = *(float *)(in_ECX + 0x198) + *pfVar4;
  fStack_60 = *(float *)(in_ECX + 0x19c) + pfVar4[1];
  fStack_5c = *(float *)(in_ECX + 0x1a0) + pfVar4[2];
  pfVar4 = (float *)FUN_007101f0(auStack_40,&fStack_58);
  fStack_58 = *(float *)(in_ECX + 0x198) + *pfVar4;
  fStack_54 = *(float *)(in_ECX + 0x19c) + pfVar4[1];
  fStack_50 = *(float *)(in_ECX + 0x1a0) + pfVar4[2];
  pfVar4 = (float *)FUN_007101f0(auStack_40,&fStack_70);
  fStack_70 = *(float *)(in_ECX + 0x198) + *pfVar4;
  fStack_6c = *(float *)(in_ECX + 0x19c) + pfVar4[1];
  fStack_68 = *(float *)(in_ECX + 0x1a0) + pfVar4[2];
  pfVar4 = (float *)FUN_007101f0(auStack_40,&uStack_7c);
  uStack_7c._0_4_ = *(float *)(in_ECX + 0x198) + *pfVar4;
  uStack_7c._4_4_ = *(float *)(in_ECX + 0x19c) + pfVar4[1];
  fStack_74 = *(float *)(in_ECX + 0x1a0) + pfVar4[2];
  uVar7 = (uint3)((uint)(float)uStack_7c >> 8);
  if (DAT_00b3c089 == '\0') {
    switch(param_1) {
    case 0:
      if (*(char *)(in_ECX + 0x197) == '\0') {
        iVar2 = (uint)uVar7 << 8;
      }
      else {
        iVar2 = FUN_005fa0a0(&uStack_7c);
      }
      FUN_00612910(2,iVar2);
      return *(char *)(in_ECX + 0x197) == '\0';
    case 1:
      if (*(char *)(in_ECX + 0x196) == '\0') {
        iVar2 = (uint)uVar7 << 8;
      }
      else {
        iVar2 = FUN_005fa0a0(&fStack_70);
      }
      FUN_00612910(1,iVar2);
      return *(char *)(in_ECX + 0x196) == '\0';
    case 2:
      if (*(char *)(in_ECX + 0x194) == '\0') {
        iVar2 = (uint)uVar7 << 8;
      }
      else {
        iVar2 = FUN_005fa0a0(&fStack_64);
      }
      FUN_00612910(4,iVar2);
      return *(char *)(in_ECX + 0x194) == '\0';
    case 3:
      if (*(char *)(in_ECX + 0x195) == '\0') {
        iVar2 = (uint)uVar7 << 8;
      }
      else {
        iVar2 = FUN_005fa0a0(&fStack_58);
      }
      FUN_00612910(8,iVar2);
      return *(char *)(in_ECX + 0x195) == '\0';
    }
  }
  else {
    FUN_00612910(4,CONCAT31(uVar7,*(char *)(in_ECX + 0x194) != '\0'));
    FUN_00612910(8,*(char *)(in_ECX + 0x195) != '\0');
    FUN_00612910(1,*(char *)(in_ECX + 0x196) != '\0');
    FUN_00612910(2,*(char *)(in_ECX + 0x197) != '\0');
  }
  return 4;
}



void FUN_00614bb0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x6c);
  if ((((iVar1 != 4) && (iVar1 != 7)) && (iVar1 != 9)) && ((iVar1 != 8 && (iVar1 != 0xc)))) {
    *(undefined1 *)(in_ECX + 0x191) = 1;
  }
  return;
}



short FUN_00614be0(int *param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = 2;
  do {
    if (param_1 == (int *)0x0) {
      return sVar3;
    }
    iVar1 = *param_1;
    if (param_1[1] == 0) {
      if (iVar1 == 0) {
        return sVar3;
      }
LAB_00614c02:
      sVar2 = 1;
      if (*(int *)(iVar1 + 4) != 0) {
        sVar2 = FUN_00485660();
        sVar2 = sVar2 + 1;
      }
      sVar3 = sVar3 + 4 + sVar2;
    }
    else if (iVar1 != 0) goto LAB_00614c02;
    param_1 = (int *)param_1[1];
  } while( true );
}



void FUN_00614c30(int *param_1)

{
  undefined2 *puVar1;
  int *piVar2;
  int *piVar3;
  int local_8;
  undefined4 local_4;
  
  local_8 = 0;
  puVar1 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&local_8,2);
  piVar3 = param_1;
  if (param_1 == (int *)0x0) {
    *puVar1 = (undefined2)local_8;
    return;
  }
  do {
    if ((piVar3[1] == 0) && (*piVar3 == 0)) {
      *puVar1 = (undefined2)local_8;
      return;
    }
    piVar2 = (int *)*piVar3;
    if (piVar2 != (int *)0x0) {
      param_1 = (int *)CONCAT31(param_1._1_3_,piVar2[1] != 0);
      FUN_0045b9a0(&param_1,1);
      if (piVar2[1] != 0) {
        FUN_00485730();
      }
      local_4 = 0;
      if (*piVar2 != 0) {
        local_4 = FUN_00419a20();
      }
      FUN_0045f7a0(&local_4,4);
    }
    local_8 = local_8 + 1;
    piVar2 = piVar3 + 1;
    piVar3 = (int *)*piVar2;
  } while ((int *)*piVar2 != (int *)0x0);
  *puVar1 = (undefined2)local_8;
  return;
}



void FUN_00614d10(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  do {
    if (param_1 == (int *)0x0) {
      return;
    }
    piVar1 = (int *)*param_1;
    if (param_1[1] == 0) {
      if (piVar1 == (int *)0x0) {
        return;
      }
LAB_00614d32:
      if (piVar1[1] != 0) {
        FUN_00485bc0();
      }
      if (*piVar1 != 0) {
        iVar2 = FUN_004199c0(*piVar1);
        *piVar1 = iVar2;
      }
    }
    else if (piVar1 != (int *)0x0) goto LAB_00614d32;
    param_1 = (int *)param_1[1];
  } while( true );
}



int FUN_00614d60(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((param_2 != (int *)0x0 && (((param_2[1] != 0 || (*param_2 != 0)) && (iVar2 == 0))))) {
    if ((((int *)*param_2 != (int *)0x0) && (*(int *)*param_2 != 0)) &&
       (iVar1 = FUN_00419a20(), iVar1 == param_1)) {
      iVar2 = *param_2;
    }
    param_2 = (int *)param_2[1];
  }
  return iVar2;
}



void FUN_00614db0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  char local_15;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_15 = '\0';
  FUN_004534d0(&local_15,1);
  if (local_15 != '\0') {
    local_10 = FUN_00401f00(0xc,uVar2);
    local_4 = 0;
    if (local_10 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004842d0();
    }
    local_4 = 0xffffffff;
    in_ECX[1] = uVar3;
    FUN_004858d0();
    iVar1 = in_ECX[1];
    if (*(int *)(iVar1 + 8) == 0) {
      if (iVar1 != 0) {
        FUN_00484470();
        FUN_00401f20(iVar1);
      }
      in_ECX[1] = 0;
    }
  }
  FUN_0045ba00(&local_14,4);
  *in_ECX = local_14;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00614e80(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a70170;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00614ea0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a70170;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00614ed0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  float10 fVar5;
  float10 fVar6;
  
  iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b14c28,0);
  if (iVar2 == 0) {
    return 0;
  }
  cVar1 = FUN_00566400(param_1);
  if (cVar1 != '\0') {
    iVar3 = FUN_006135f0();
    iVar4 = FUN_006135f0();
    if ((((iVar4 == iVar3) && (*(char *)(in_ECX + 0x48) == *(char *)(iVar2 + 0x48))) &&
        (*(char *)(in_ECX + 0x49) == *(char *)(iVar2 + 0x49))) &&
       ((*(char *)(in_ECX + 0x4a) == *(char *)(iVar2 + 0x4a) &&
        (*(char *)(in_ECX + 0x4d) == *(char *)(iVar2 + 0x4d))))) {
      fVar5 = (float10)FUN_00612f30();
      fVar6 = (float10)FUN_00612f30();
      if (fVar6 == (float10)(double)fVar5) {
        return 1;
      }
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00614f80(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  float10 fVar5;
  
  uVar2 = 0;
  if ((param_1 != 0) && (param_1 != *(int *)(in_ECX + 0x3c))) {
    for (piVar3 = (int *)(in_ECX + 0x15c); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
      if (*piVar3 == param_1) {
        return 0;
      }
    }
    FUN_00446cb0(param_1);
    *(int *)(in_ECX + 0x178) = *(int *)(in_ECX + 0x178) + 1;
    piVar3 = (int *)FUN_005e0f50();
    cVar1 = (**(code **)(*piVar3 + 0x16c))(4);
    if (cVar1 == '\0') {
      uVar4 = FUN_006135f0(0);
      fVar5 = (float10)FUN_00612f50(param_1,uVar4);
      uVar2 = CONCAT31((uint3)(byte)((float10)_DAT_00b372b8 < fVar5 |
                                    (byte)((ushort)((ushort)((float10)_DAT_00b372b8 == fVar5) << 0xe
                                                   ) >> 8)),1);
      if ((uVar2 & 0x4100) == 0) {
        *(undefined1 *)(in_ECX + 0x17c) = 1;
        return uVar2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



void FUN_00615010(int param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  if (param_1 != *(int *)(in_ECX + 0x3c)) {
    FUN_0065c620(param_1);
    iVar2 = 0;
    for (piVar1 = (int *)(in_ECX + 0x15c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*piVar1 != 0) {
        iVar2 = iVar2 + 1;
      }
    }
    *(int *)(in_ECX + 0x178) = iVar2;
  }
  return;
}



void FUN_00615050(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x17d) != '\0') {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0xc4))(1);
    FUN_005e05f0(0x30);
    *(undefined1 *)(in_ECX + 0x17d) = 0;
  }
  if (*(int *)(in_ECX + 0x1a8) < DAT_00b372f0) {
    iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x4cc))();
    iVar2 = FUN_006135f0();
    if (iVar1 == iVar2) {
                    /* WARNING: Could not recover jumptable at 0x006150bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x4a4))();
      return;
    }
  }
  return;
}



void FUN_006150c0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x70) == 0xb) {
    *(undefined4 *)(in_ECX + 0x70) = 0xd;
    *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006150e0(char param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  
  if (param_1 == '\0') {
    iVar4 = FUN_006135f0();
    if (iVar4 != 0) {
      FUN_006135f0();
      cVar3 = FUN_005e0530();
      if (((cVar3 != '\0') && (cVar3 = FUN_005e0530(), cVar3 == '\0')) &&
         (cVar3 = FUN_005e1cb0(), cVar3 == '\0')) goto LAB_0061512e;
    }
    if (*(char *)(in_ECX + 0x174) != '\0') {
      return 0;
    }
  }
LAB_0061512e:
  piVar5 = *(int **)(in_ECX + 0x40);
  if (((piVar5 == (int *)0x0) || (piVar1 = (int *)*piVar5, piVar1 == (int *)0x0)) ||
     (piVar5[1] == 0)) {
    return 0;
  }
  _param_1 = piVar1[1];
  cVar3 = FUN_00614290();
  if (cVar3 == '\0') {
    FUN_00484370((float)_param_1 * _DAT_00b37218);
    _param_1 = FUN_009828c0();
  }
  if (*(char *)(in_ECX + 0x158) == '\0') {
    FUN_00484370((float)_param_1 * _DAT_00b37220);
    _param_1 = FUN_009828c0();
  }
  piVar5 = *(int **)(*(int *)(in_ECX + 0x40) + 4);
  iVar4 = 0;
  iVar6 = _param_1;
  if (piVar5 != (int *)0x0) {
    do {
      piVar2 = (int *)*piVar5;
      piVar5 = (int *)piVar5[1];
      if (((piVar2 != (int *)0x0) && (*piVar2 != 0)) && ((iVar6 <= piVar2[1] && (piVar2 != piVar1)))
         ) {
        iVar4 = *piVar2;
        iVar6 = piVar2[1];
      }
    } while (piVar5 != (int *)0x0);
    if (iVar4 != 0) {
      piVar1[1] = _param_1;
      FUN_006243d0(iVar4,iVar6 + 10);
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00615220(int *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  float10 fVar6;
  
  if (param_1 == (int *)0x0) {
    if (*(int *)(in_ECX + 0x3c) == 0) {
      return 0;
    }
    piVar1 = *(int **)(*(int *)(in_ECX + 0x3c) + 0x58);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar5 = (**(code **)(*piVar1 + 0xec))(1);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0xec))(1);
    if (*(int *)(iVar5 + 8) == 0) {
      return 0;
    }
    iVar5 = FUN_00612d60();
    if ((*(char *)(iVar5 + 0x90) != '\x05') &&
       (iVar5 = FUN_00612d60(), *(char *)(iVar5 + 0x90) != '\x04')) {
      return 0;
    }
    bVar2 = true;
  }
  else {
    bVar2 = false;
    cVar3 = FUN_00414fe0();
    if (cVar3 == '\0') {
      return 0;
    }
  }
  if (*(char *)(in_ECX + 0x159) != '\0') {
    if (DAT_00b3b908 == '\0') {
      return 1;
    }
    uVar4 = FUN_004da2a0();
    FUN_00579b60("%.20s is holding off attacking because an ally is in the way!",uVar4);
    return 1;
  }
  if (param_1 == (int *)0x0) {
    iVar5 = FUN_00612d60();
    if (iVar5 != 0) {
      iVar5 = FUN_00612d60();
      if (*(int *)(iVar5 + 100) != 0) {
        iVar5 = *(int *)(iVar5 + 100) + 0x18;
        goto LAB_00615318;
      }
    }
  }
  else {
    iVar5 = *param_1;
LAB_00615318:
    if (iVar5 != 0) goto LAB_00615370;
  }
  if (!bVar2) {
    return 0;
  }
  iVar5 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0xf4))(1);
  if (iVar5 == 0) {
    return 0;
  }
  if (*(int *)(iVar5 + 8) == 0) {
    return 0;
  }
  iVar5 = FUN_009832e6(*(int *)(iVar5 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b05dc8,0);
  if (iVar5 == 0) {
    return 0;
  }
  if (*(int *)(iVar5 + 0x58) == 0) {
    return 0;
  }
  if (*(int *)(iVar5 + 0x58) == -0x18) {
    return 0;
  }
LAB_00615370:
  iVar5 = FUN_004152c0(3,1);
  if (iVar5 == 0) {
    return 0;
  }
  piVar1 = (int *)(in_ECX + 0x15c);
  do {
    do {
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      iVar5 = *piVar1;
      piVar1 = (int *)piVar1[1];
    } while ((iVar5 == 0) || (iVar5 == *(int *)(in_ECX + 0x3c)));
    uVar4 = FUN_006135f0(0);
    fVar6 = (float10)FUN_00612f50(iVar5,uVar4);
    iVar5 = FUN_00413370();
  } while ((float)iVar5 * 1.5 < (float)fVar6);
  if (DAT_00b3b908 == '\0') {
    return 1;
  }
  uVar4 = FUN_004da2a0();
  FUN_00579b60("%.20s is holding off using an area spell so that allies don\'t get hurt!",uVar4);
  return 1;
}



void FUN_00615420(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x70) == 6) {
    cVar2 = FUN_005e5670();
    if (cVar2 != '\0') {
      FUN_005f4ae0(0);
    }
    if (*(float *)(in_ECX + 0xd8) < *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0xd4)) {
      iVar1 = **(int **)(in_ECX + 0x3c);
      uVar3 = FUN_006135f0();
      (**(code **)(iVar1 + 0x340))(uVar3);
    }
  }
  return;
}



void FUN_00615480(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int in_ECX;
  
  if (0 < *(int *)(in_ECX + 0x178)) {
    piVar2 = (int *)(in_ECX + 0x15c);
joined_r0x00615499:
    if (piVar2 != (int *)0x0) {
      piVar1 = (int *)*piVar2;
      piVar2 = (int *)piVar2[1];
      if ((piVar1 != (int *)0x0) && (iVar6 = (**(code **)(*piVar1 + 0x330))(), iVar6 != 0)) {
        iVar6 = (**(code **)(*piVar1 + 0x330))();
        piVar4 = *(int **)(iVar6 + 0x40);
        do {
          if ((piVar4 == (int *)0x0) || (((int *)piVar4[1] == (int *)0x0 && (*piVar4 == 0))))
          goto joined_r0x00615499;
          piVar3 = (int *)*piVar4;
          piVar4 = (int *)piVar4[1];
        } while (*piVar3 != param_1);
        cVar5 = (**(code **)(*piVar1 + 0x370))(param_1);
        if (cVar5 != '\0') {
          (**(code **)(*piVar1 + 0x340))(param_1);
          piVar2 = (int *)(in_ECX + 0x15c);
        }
      }
      goto joined_r0x00615499;
    }
  }
  return;
}



float10 FUN_00615520(void)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  float local_c;
  double local_8;
  
  fVar1 = *(float *)(in_ECX + 0x188);
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    return (float10)*(float *)(in_ECX + 0x188);
  }
  iVar3 = *(int *)(in_ECX + 0x70);
  local_c = 0.0;
  if ((((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 3)) ||
     (((iVar3 == 2 || (iVar3 == 4)) || (iVar3 == 0xd)))) {
    switch(iVar3) {
    case 0:
    case 0xd:
      piVar2 = *(int **)(in_ECX + 0x3c);
      fVar4 = (float10)(**(code **)(*piVar2 + 0x26c))();
      local_8 = (double)fVar4;
      fVar4 = (float10)(**(code **)(*piVar2 + 0xec))();
      *(float *)(in_ECX + 0x188) = (float)(fVar4 * (float10)local_8);
      return (float10)(float)(fVar4 * (float10)local_8);
    case 1:
      iVar3 = FUN_00612d60();
      if (iVar3 == 0) {
        fVar4 = (float10)(**(code **)(**(int **)(in_ECX + 0x3c) + 0x26c))();
      }
      else {
        iVar3 = FUN_00612d60();
        fVar4 = (float10)*(float *)(iVar3 + 0x98);
      }
      local_c = (float)fVar4;
      fVar4 = (float10)(**(code **)(**(int **)(in_ECX + 0x3c) + 0xec))();
      local_8 = (double)fVar4;
      fVar4 = (float10)FUN_00547540(local_c);
      *(float *)(in_ECX + 0x188) = (float)(fVar4 * (float10)local_8);
      return (float10)(float)(fVar4 * (float10)local_8);
    case 2:
    case 4:
      local_c = 0.0;
      local_8 = (double)((ulonglong)local_8 & 0xffffffff00000000);
      FUN_006142d0(&local_c,&local_8);
      *(float *)(in_ECX + 0x188) = local_c;
      return (float10)local_c;
    case 3:
      piVar2 = *(int **)(in_ECX + 0x3c);
      fVar4 = (float10)(**(code **)(*piVar2 + 0x26c))();
      local_8 = (double)fVar4;
      fVar4 = (float10)(**(code **)(*piVar2 + 0xec))();
      *(float *)(in_ECX + 0x188) = (float)(fVar4 * (float10)local_8);
      return (float10)(float)(fVar4 * (float10)local_8);
    }
  }
  *(undefined4 *)(in_ECX + 0x188) = 0;
  return (float10)0.0;
}



int * FUN_006156c0(int *param_1,float param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float10 fVar7;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar2 = param_1;
  iVar4 = (**(code **)(*param_1 + 0x330))();
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x330))();
    piVar5 = (int *)FUN_006135f0();
    if (piVar5 != (int *)0x0) {
      cVar3 = FUN_006131d0(param_1,piVar5,0);
      if ((cVar3 != '\0') &&
         (fVar7 = (float10)FUN_00612f50(param_1,piVar5,1), fVar7 <= (float10)param_2)) {
        return piVar5;
      }
      return (int *)0x0;
    }
  }
  fStack_c = 3.4028235e+38;
  param_1 = (int *)0x0;
  FUN_00673a50(0);
  piVar5 = (int *)FUN_007616d0();
  while ((piVar5 != (int *)0x0 && ((piVar5[1] != 0 || (*piVar5 != 0))))) {
    piVar6 = (int *)FUN_009832e6(*piVar5,0,&PTR_PTR_00b05538,&PTR_PTR_00b03070,0);
    piVar5 = (int *)piVar5[1];
    if (piVar6 != (int *)0x0) {
      if ((((piVar6 != piVar2) && (cVar3 = (**(code **)(*piVar6 + 0x198))(0), cVar3 == '\0')) &&
          (iVar4 = (**(code **)(*piVar6 + 0x154))(), iVar4 != 0)) &&
         (fVar7 = (float10)FUN_00612f50(piVar2,piVar6,0), fVar7 <= (float10)param_2)) {
        fStack_8 = 3.4028235e+38;
        cVar3 = FUN_006131d0(piVar2,piVar6,&fStack_8);
        if ((cVar3 != '\0') && (fStack_8 <= fStack_c)) {
          fStack_c = fStack_8;
          param_1 = piVar6;
        }
      }
      iVar4 = FUN_00420ef0();
      if (iVar4 != 0) {
        for (puVar1 = *(undefined4 **)(iVar4 + 0xc);
            (puVar1 != (undefined4 *)0x0 && (piVar6 = (int *)*puVar1, piVar6 != (int *)0x0));
            puVar1 = (undefined4 *)puVar1[1]) {
          if ((((int *)piVar6[0x16] != (int *)0x0) &&
              (((iVar4 = (**(code **)(*(int *)piVar6[0x16] + 8))(), iVar4 == 0 && (piVar6 != piVar2)
                ) && (cVar3 = (**(code **)(*piVar6 + 0x198))(0), cVar3 == '\0')))) &&
             ((iVar4 = (**(code **)(*piVar6 + 0x154))(), iVar4 != 0 &&
              (fVar7 = (float10)FUN_00612f50(piVar2,piVar6,0), fVar7 <= (float10)param_2)))) {
            fStack_8 = 3.4028235e+38;
            cVar3 = FUN_006131d0(piVar2,piVar6,&fStack_8);
            if ((cVar3 != '\0') && (fStack_8 <= fStack_c)) {
              fStack_c = fStack_8;
              param_1 = piVar6;
            }
          }
        }
      }
    }
  }
  if (piVar2 != DAT_00b333c4) {
    fVar7 = (float10)FUN_00612f50(piVar2,DAT_00b333c4,0);
    fStack_4 = (float)fVar7;
    fStack_8 = 3.4028235e+38;
    cVar3 = FUN_006131d0(piVar2,DAT_00b333c4,&fStack_8);
    if (((fStack_4 <= param_2) && (cVar3 != '\0')) && (fStack_8 <= fStack_c)) {
      param_1 = DAT_00b333c4;
    }
  }
  if (((param_1 != (int *)0x0) && (cVar3 = FUN_005e04e0(), cVar3 != '\0')) &&
     (cVar3 = FUN_005f2820(1,param_1,1,0,0), cVar3 == '\0')) {
    param_1 = (int *)0x0;
  }
  return param_1;
}



float10 FUN_00615980(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  float10 fVar3;
  
  if (*(float *)(in_ECX + 0x184) < 0.0) {
    uVar1 = *(undefined4 *)(in_ECX + 0x3c);
    uVar2 = FUN_006135f0(0);
    fVar3 = (float10)FUN_00612f50(uVar1,uVar2);
    *(float *)(in_ECX + 0x184) = (float)fVar3;
  }
  return (float10)*(float *)(in_ECX + 0x184);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006159c0(float *param_1,float param_2,float param_3,float param_4,int *param_5,
                 float param_6,float param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_EBX;
  int iVar7;
  float10 fVar8;
  float *pfVar9;
  float local_8c;
  float fStack_88;
  undefined4 uStack_84;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  float local_40;
  float local_3c;
  float fStack_38;
  float fStack_34;
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
  
  fVar2 = DAT_00b3f9ac;
  if (param_5 == (int *)0x0) {
    *param_1 = DAT_00b3f9a8;
    fVar3 = DAT_00b3f9b0;
    param_1[1] = fVar2;
    param_1[2] = fVar3;
    return;
  }
  local_44 = DAT_00b3f9a8;
  local_40 = DAT_00b3f9ac;
  local_3c = DAT_00b3f9b0;
  piVar4 = (int *)FUN_009832e6(param_5,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if (piVar4 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar4 + 0x380))();
    if (iVar5 != 0) {
      (**(code **)(*piVar4 + 0x380))();
      iVar5 = FUN_0065a2c0();
      if (iVar5 != 0) {
        pfVar9 = &local_44;
        (**(code **)(*piVar4 + 0x380))(pfVar9);
        FUN_0065a2c0();
        FUN_005639d0(pfVar9);
      }
    }
    iVar5 = FUN_0065a2c0();
    if (((iVar5 != 0) && (iVar5 = FUN_0065a2c0(), iVar5 != 0)) && (*(int *)(iVar5 + 8) != 0)) {
      uVar6 = FUN_008ac0a0();
      FUN_0043f3e0(&local_44,uVar6);
    }
  }
  iVar5 = DAT_00b370c0;
  fVar2 = (float)param_5[0xb];
  local_8c = 0.0;
  fVar3 = (float)param_5[0xc];
  local_54 = (float)param_5[0xd];
  if (piVar4 == (int *)0x0) {
    iVar7 = (**(code **)(*param_5 + 0x15c))(&fStack_14);
    local_8c = SUB84((double)*(float *)(iVar7 + 8),0);
    fStack_88 = (float)((ulonglong)(double)*(float *)(iVar7 + 8) >> 0x20);
    iVar7 = (**(code **)(*param_5 + 0x158))(&fStack_24);
    local_8c = (float)((ulonglong)
                       (double)((float)(double)CONCAT44(local_8c,unaff_EBX) - *(float *)(iVar7 + 8))
                      >> 0x20);
    fVar8 = (float10)(**(code **)(*param_5 + 0xec))();
    fVar8 = fVar8 * (float10)(double)CONCAT44(uStack_84,fStack_88);
LAB_00615b52:
    fVar8 = fVar8 * (float10)0.5;
  }
  else {
    switch(param_8) {
    case 0:
      fVar8 = (float10)FUN_005e0660();
      fVar8 = fVar8 * (float10)0.25;
      break;
    case 1:
    case 3:
      fVar8 = (float10)FUN_005e0660();
      goto LAB_00615b52;
    case 2:
      fVar8 = (float10)FUN_005e0660();
      fVar8 = fVar8 * (float10)0.75;
      break;
    default:
      goto switchD_00615add_default;
    }
  }
  local_54 = (float)(fVar8 + (float10)local_54);
switchD_00615add_default:
  iVar7 = 0;
  fStack_48 = local_54;
  fStack_50 = fVar2;
  fStack_4c = fVar3;
  if (param_7 == 0.0) {
    if (0 < iVar5) {
      do {
        fVar8 = (float10)FUN_00982c30();
        fVar1 = (float)fVar8;
        if ((fVar1 < 1.0) || (8192.0 < fVar1)) break;
        fVar1 = fVar1 / param_6;
        iVar7 = iVar7 + 1;
        fStack_50 = fVar1 * local_44 + fVar2;
        fStack_4c = fVar3 + local_40 * fVar1;
        fStack_48 = fVar1 * local_3c + local_54;
        fStack_2c = fStack_50;
        fStack_28 = fStack_4c;
        fStack_24 = fStack_48;
      } while (iVar7 < iVar5);
    }
  }
  else if (0 < iVar5) {
    do {
      fStack_2c = fStack_50 - param_2;
      fStack_28 = fStack_4c - param_3;
      fStack_24 = fStack_48 - param_4;
      fVar8 = (float10)FUN_00982c30();
      fVar1 = (float)fVar8;
      if (((8192.0 < fStack_24) || (fVar1 < 1.0)) || (8192.0 < fVar1)) break;
      fVar8 = (float10)FUN_006132d0(fVar1,fStack_24,param_6,param_7);
      local_8c = (float)fVar8;
      fVar8 = (float10)FUN_00986000();
      iVar7 = iVar7 + 1;
      fVar1 = fVar1 / ((float)fVar8 * param_6);
      fStack_20 = fVar1 * local_44;
      fStack_1c = local_40 * fVar1;
      fStack_18 = fVar1 * local_3c;
      fStack_50 = fStack_20 + fVar2;
      fStack_4c = fStack_1c + fVar3;
      fStack_48 = fStack_18 + local_54;
      fStack_14 = fStack_50;
      fStack_10 = fStack_4c;
      fStack_c = fStack_48;
    } while (iVar7 < iVar5);
  }
  fStack_38 = fStack_50 - param_2;
  fStack_34 = fStack_4c - param_3;
  fStack_48 = fStack_48 - param_4;
  fStack_30 = fStack_48;
  if (param_7 == 0.0) {
    fVar8 = (float10)FUN_00982c30();
    if (fStack_48 / (float)fVar8 <= -1.0) {
      local_8c = -_DAT_00b3f99c;
    }
    else {
      local_8c = _DAT_00b3f99c;
      if (fStack_48 / (float)fVar8 < 1.0) {
        fVar8 = (float10)FUN_00985870();
        local_8c = (float)fVar8;
      }
    }
  }
  FUN_0043f350();
  fStack_88 = -local_8c;
  if (fStack_88 < -3.1415927 == (fStack_88 == -3.1415927)) {
    if (3.1415927 < fStack_88) {
      fStack_88 = fStack_88 - 6.2831855;
    }
  }
  else {
    fStack_88 = fStack_88 + 6.2831855;
  }
  fVar8 = (float10)FUN_00683cb0(&fStack_38);
  fVar2 = (float)fVar8;
  if (fVar2 < -3.1415927 == (fVar2 == -3.1415927)) {
    if (3.1415927 < fVar2) {
      fVar2 = fVar2 - 6.2831855;
    }
  }
  else {
    fVar2 = fVar2 + 6.2831855;
  }
  *param_1 = fStack_88;
  param_1[1] = 0.0;
  param_1[2] = fVar2;
  return;
}



undefined1 FUN_00615f70(int *param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  float *pfVar7;
  char cVar8;
  undefined2 uVar9;
  float *pfVar10;
  undefined1 uVar11;
  float10 fVar12;
  float10 fVar13;
  undefined1 auStack_10 [16];
  
  pfVar7 = param_3;
  piVar6 = param_1;
  uVar11 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  *param_3 = DAT_00b3f9a8;
  param_3[1] = DAT_00b3f9ac;
  param_3[2] = DAT_00b3f9b0;
  uVar9 = FUN_005e5690(param_2,0,0);
  cVar8 = FUN_0051acc0(uVar9);
  if (cVar8 != '\0') {
    (**(code **)(*piVar6 + 0x164))();
    cVar8 = FUN_00470960(uVar9,&param_1);
    if (cVar8 != '\0') {
      (**(code **)(*param_1 + 0x10))(0xffffffff);
      fVar12 = (float10)FUN_0051ae20(2);
      fVar13 = (float10)FUN_0051ae20(0);
      fVar1 = (float)((float10)(double)fVar12 - fVar13);
      pfVar10 = (float *)FUN_0051aab0(auStack_10);
      fVar2 = *pfVar10;
      fVar3 = pfVar10[1];
      fVar4 = pfVar10[2];
      fVar12 = (float10)(**(code **)(*piVar6 + 0xec))();
      fVar5 = (float)fVar12;
      uVar11 = 1;
      *pfVar7 = fVar5 * fVar1 * fVar2;
      pfVar7[1] = fVar3 * fVar1 * fVar5;
      pfVar7[2] = fVar5 * fVar1 * fVar4;
    }
  }
  return uVar11;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006160b0(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int in_ECX;
  
  FUN_005e05f0(0xf);
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c4))(0x200,0);
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c4))(0x100,0);
  if (DAT_00b333b8 == '\0') {
    pfVar5 = (float *)(**(code **)(**(int **)(in_ECX + 0x3c) + 0x174))();
    fVar2 = *(float *)(in_ECX + 0x198) - *pfVar5;
    fVar3 = *(float *)(in_ECX + 0x19c) - pfVar5[1];
    fVar4 = *(float *)(in_ECX + 0x1a0) - pfVar5[2];
    if ((((_DAT_00b372c8 * _DAT_00b372c8 <= fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) &&
         (iVar1 = *(int *)(in_ECX + 0x6c), iVar1 != 4)) && (iVar1 != 7)) &&
       (((iVar1 != 9 && (iVar1 != 8)) && (iVar1 != 0xc)))) {
      *(undefined1 *)(in_ECX + 0x191) = 1;
    }
  }
  return;
}



void FUN_00616190(int param_1,undefined1 param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (((param_1 != 0) && (iVar3 = *(int *)(in_ECX + 0x3c), param_1 != iVar3)) &&
     ((*(int **)(param_1 + 0x58) == (int *)0x0 ||
      (iVar2 = (**(code **)(**(int **)(param_1 + 0x58) + 0x3d0))(), iVar2 != iVar3)))) {
    iVar3 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x284))(4);
    if (iVar3 == 0) {
      fVar5 = (float10)(**(code **)(**(int **)(in_ECX + 0x3c) + 0x26c))();
      fVar6 = (float10)FUN_004d7e90(param_1,0);
      fVar7 = (float10)(**(code **)(**(int **)(in_ECX + 0x3c) + 0x26c))();
      if (fVar7 + (float10)(float)(fVar5 * (float10)0.25) < (float10)(float)fVar6) {
        return;
      }
    }
    cVar1 = FUN_00613670(param_1);
    if (cVar1 == '\0') {
      if (param_1 == DAT_00b333c4) {
        *(undefined1 *)(in_ECX + 0x4b) = 0;
        *(undefined1 *)(in_ECX + 0x4c) = 0;
      }
      piVar4 = (int *)FUN_00401f00(0x14);
      piVar4[3] = param_3;
      piVar4[4] = param_4;
      piVar4[1] = param_1;
      *piVar4 = param_1;
      *(undefined1 *)(piVar4 + 2) = param_2;
      FUN_00416650(piVar4,&LAB_00614190);
      if (param_1 == DAT_00b333c4) {
        FUN_006136b0();
      }
      FUN_005697f0(*(undefined4 *)**(undefined4 **)(in_ECX + 0x40));
      FUN_00569ec0(*(undefined4 *)**(undefined4 **)(in_ECX + 0x40));
      iVar3 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x330))();
      if (iVar3 != 0) {
        FUN_00624030(1);
      }
    }
  }
  return;
}



void FUN_006162d0(int param_1)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  
  bVar2 = false;
  piVar3 = *(int **)(in_ECX + 0x40);
  do {
    if ((piVar3 == (int *)0x0) || (((int *)piVar3[1] == (int *)0x0 && (*piVar3 == 0))))
    goto LAB_0061631a;
    piVar1 = (int *)*piVar3;
    piVar3 = (int *)piVar3[1];
  } while (*piVar1 != param_1);
  FUN_0065c620(piVar1);
  if (param_1 == DAT_00b333c4) {
    FUN_006136e0();
  }
  FUN_00401f20(piVar1);
  bVar2 = true;
LAB_0061631a:
  iVar4 = FUN_00569e60();
  if ((iVar4 == param_1) || (iVar4 = FUN_005697e0(), iVar4 == param_1)) {
    uVar5 = FUN_006135f0();
    FUN_00569ec0(uVar5);
    uVar5 = FUN_006135f0();
    FUN_005697f0(uVar5);
  }
  if (((bVar2) && (*(char *)(DAT_00b33a98 + 0xcd4) == '\0')) && (*(char *)(in_ECX + 0x1a4) == '\0'))
  {
    *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(in_ECX + 0x44);
    *(undefined4 *)(in_ECX + 0x144) = 0x3dcccccd;
    *(undefined4 *)(in_ECX + 0x148) = 0xbf800000;
  }
  return;
}



uint FUN_006163a0(void)

{
  float fVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  float *pfVar7;
  undefined4 uVar8;
  int in_ECX;
  float10 fVar9;
  float *pfVar10;
  float fVar11;
  float fStack_28;
  float local_24;
  float local_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  local_20 = (float)DAT_00b3f9ac;
  local_24 = DAT_00b3f9a8;
  local_1c = DAT_00b3f9b0;
  iVar4 = FUN_006135f0();
  uVar5 = 0;
  if (iVar4 != 0) {
    FUN_006135f0();
    uVar5 = FUN_005e05b0();
    if ((char)uVar5 != '\0') {
      piVar6 = (int *)FUN_006135f0();
      pfVar10 = &local_24;
      (**(code **)(*piVar6 + 0x1d0))(pfVar10);
      local_20 = 0.0;
      piVar6 = (int *)FUN_006135f0();
      pfVar7 = (float *)(**(code **)(*piVar6 + 0x174))();
      fVar11 = pfVar7[1] + local_24;
      fStack_14 = pfVar7[2] + local_20;
      local_1c = *pfVar7 + fStack_28;
      fStack_18 = fVar11;
      if (*(float *)(in_ECX + 0x184) < 0.0) {
        uVar2 = *(undefined4 *)(in_ECX + 0x3c);
        uVar8 = FUN_006135f0(0);
        fVar9 = (float10)FUN_00612f50(uVar2,uVar8);
        *(float *)(in_ECX + 0x184) = (float)fVar9;
      }
      fVar1 = *(float *)(in_ECX + 0x184);
      cVar3 = FUN_005e05b0();
      if (cVar3 == '\0') {
        fVar9 = (float10)FUN_004d7e30(&local_1c);
      }
      else {
        pfVar7 = (float *)(**(code **)(**(int **)(in_ECX + 0x3c) + 0x174))();
        fStack_10 = *pfVar7 - local_1c;
        fStack_c = pfVar7[1] - fStack_18;
        fStack_8 = pfVar7[2] - fStack_14;
        fVar9 = (float10)FUN_00982c30(pfVar10,fVar11,
                                      fStack_8 * fStack_8 +
                                      fStack_10 * fStack_10 + fStack_c * fStack_c);
        fVar9 = (float10)(float)fVar9;
      }
      if (fVar1 < (float)fVar9 != (fVar1 == (float)fVar9)) {
        return 1;
      }
      return 0;
    }
  }
  return uVar5 & 0xffffff00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00616530(int *param_1,int *param_2,int param_3,int param_4,char param_5)

{
  char cVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c2a48;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == (int *)0x0) goto LAB_006167d5;
  if ((DAT_00b14b94 < DAT_00b3b914) && (param_2 != (int *)0x0)) {
    if (param_3 != 0) {
      cVar1 = FUN_005e04e0(uVar2);
      if (cVar1 != '\0') goto LAB_00616606;
    }
    pfVar3 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
    pfVar4 = (float *)(**(code **)(*param_2 + 0x174))();
    fStack_14 = pfVar4[2] - pfVar3[2];
    if (_DAT_00b14bac * _DAT_00b14bac <
        fStack_14 * fStack_14 +
        (*pfVar4 - *pfVar3) * (*pfVar4 - *pfVar3) +
        (pfVar4[1] - pfVar3[1]) * (pfVar4[1] - pfVar3[1])) goto LAB_006167d5;
  }
LAB_00616606:
  iVar5 = FUN_0052ed50(2,param_4);
  if (iVar5 == 0) goto LAB_006167d5;
  if (*param_1 != 0) {
    cVar1 = FUN_006b7260();
    if ((cVar1 != '\0') && (param_5 == '\0')) goto LAB_006167d5;
    iVar8 = *param_1;
    iVar6 = (**(code **)(*(int *)param_2[0x16] + 0x33c))(0);
    if (iVar8 == iVar6) {
      (**(code **)(*(int *)param_2[0x16] + 0x344))(0);
    }
    else {
      cVar1 = FUN_006b73a0();
      if (cVar1 == '\0') {
        iVar8 = *param_1;
        if (iVar8 != 0) {
          FUN_006b73e0();
          FUN_00401f20(iVar8);
        }
        *param_1 = 0;
      }
    }
  }
  cVar1 = FUN_005e3270();
  if (cVar1 == '\0') {
    iVar5 = FUN_0052f790(param_2,param_3,iVar5,0);
    if (iVar5 != 0) {
      cVar1 = FUN_006b7ba0();
      if (cVar1 != '\0') {
        iVar8 = FUN_006b7c20();
        if (iVar8 != 0) {
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          uVar9 = 0;
          uVar7 = FUN_00404fd0(0,0,0,0);
          FUN_005f7310(*(undefined4 *)(iVar8 + 0x10),param_1,*(undefined4 *)(iVar8 + 8),
                       *(undefined4 *)(iVar8 + 0xc),uVar7,uVar9,uVar10,uVar11,uVar12);
          FUN_006b7c30();
        }
      }
      FUN_006b81d0();
      FUN_00401f20(iVar5);
    }
    goto LAB_006167d5;
  }
  uVar7 = (**(code **)(*param_2 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b0375c);
  FUN_009832e6(uVar7);
  if (param_4 == 1) {
    cVar1 = (**(code **)(*param_2 + 0x198))(0);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_2 + 0x1f8))();
      uVar7 = 7;
      if (cVar1 == '\0') goto LAB_00616708;
    }
    uVar7 = 8;
  }
  else {
    if ((param_4 != 2) && (param_4 != 5)) goto LAB_006167d5;
    uVar7 = 7;
  }
LAB_00616708:
  iVar5 = FUN_0051ce70(uVar7);
  if (iVar5 != 0) {
    FUN_00419b10(iVar5);
    uStack_4 = 0;
    FUN_005f7310(fStack_14,param_1,0,0,0,0,0,0,0);
    uStack_4 = 0xffffffff;
    FUN_00402da0();
    *unaff_FS_OFFSET = local_c;
    return;
  }
LAB_006167d5:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006167f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int in_ECX;
  undefined4 local_4;
  
  local_4 = 0;
  if ((*(int *)(in_ECX + 0x3c) != 0) &&
     (piVar1 = *(int **)(*(int *)(in_ECX + 0x3c) + 0x58), piVar1 != (int *)0x0)) {
    local_4 = (**(code **)(*piVar1 + 0x33c))(0);
  }
  FUN_00616530(&local_4,*(undefined4 *)(in_ECX + 0x3c),param_1,param_2,param_3);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00616840(int *param_1,undefined4 param_2,char param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int local_d8;
  int local_d4;
  float local_d0;
  char acStack_cc [200];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_d8;
  iVar5 = *param_5;
  if (param_3 == '\0') {
    local_d8 = 0x500 - DAT_00b02e24;
  }
  else {
    local_d8 = 10;
  }
  local_d0 = (float)local_d8;
  local_d8 = (uint)(param_3 == '\0') * 2 + 1;
  if ((param_1 != (int *)0x0) && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) {
    local_d4 = iVar5;
    if (param_1[1] == 0) {
      iVar2 = (**(code **)(*piVar1 + 0x18))();
      if ((undefined4 *)(&PTR_DAT_00b037ac)[iVar2] == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(&PTR_DAT_00b037ac)[iVar2];
      }
      puVar4 = *(undefined1 **)(*param_1 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_00a2f7ec;
      }
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x18))();
      if ((undefined4 *)(&PTR_DAT_00b037ac)[iVar2] == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(&PTR_DAT_00b037ac)[iVar2];
      }
      puVar4 = (undefined1 *)FUN_00488df0(uVar3);
    }
    _sprintf(acStack_cc,"%s Magic: %s (%s)",param_2,puVar4,uVar3);
    FUN_0057b8e0(acStack_cc,local_d0,(float)local_d4,local_d8,0xffffffff);
    iVar5 = iVar5 + param_4;
  }
  *param_5 = iVar5;
  return;
}



int * FUN_00616980(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  float *unaff_retaddr;
  int *local_4;
  
  iVar6 = 0;
  bVar2 = false;
  local_4 = (int *)0x0;
  if ((*(int *)(in_ECX + 0x80) != 0) && (param_2 == 4)) {
    cVar3 = FUN_00613bb0(*(int *)(in_ECX + 0x80),param_3,1);
    local_4 = *(int **)(in_ECX + 0x80);
    if (cVar3 != '\0') {
      fVar8 = (float10)FUN_005e0970(*local_4);
      fVar8 = (float10)FUN_00546ca0((float)fVar8);
      *unaff_retaddr = (float)fVar8;
      return *(int **)(in_ECX + 0x80);
    }
    bVar2 = true;
  }
  if ((*(int *)(in_ECX + 0x7c) == 0) || (param_2 != 3)) {
    if (param_2 != 4) {
      if (param_2 != 3) {
        return (int *)0x0;
      }
      goto LAB_00616a62;
    }
    piVar5 = *(int **)(in_ECX + 0x5c);
  }
  else {
    cVar3 = FUN_00613bb0(*(int *)(in_ECX + 0x7c),param_3,1);
    local_4 = *(int **)(in_ECX + 0x7c);
    if (cVar3 != '\0') {
      fVar8 = (float10)FUN_005e0970(*local_4);
      fVar8 = (float10)FUN_00546ca0((float)fVar8);
      *unaff_retaddr = (float)fVar8;
      return *(int **)(in_ECX + 0x7c);
    }
    bVar2 = true;
LAB_00616a62:
    piVar5 = *(int **)(in_ECX + 0x60);
  }
  piVar7 = piVar5;
  if (piVar5 == (int *)0x0) {
    return (int *)0x0;
  }
  do {
    if (*piVar7 != 0) {
      iVar6 = iVar6 + 1;
    }
    piVar1 = piVar7 + 1;
    piVar7 = (int *)*piVar1;
  } while ((int *)*piVar1 != (int *)0x0);
  if (iVar6 == 1) {
    piVar7 = (int *)*piVar5;
  }
  else {
    if (iVar6 == 0) {
      return (int *)0x0;
    }
    iVar4 = FUN_0047df80(0);
    iVar4 = iVar4 % (iVar6 * 2);
    if (iVar4 < iVar6) {
      if (iVar4 == 0) {
        cVar3 = FUN_00613bb0(*piVar5,param_3,1);
        if (cVar3 == '\0') {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = (int *)*piVar5;
        }
      }
      else {
        iVar6 = 0;
        piVar7 = piVar5;
        if (0 < iVar4) {
          do {
            if (piVar7 == (int *)0x0) goto LAB_00616b03;
            piVar7 = (int *)piVar7[1];
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar4);
        }
        if ((piVar7 == (int *)0x0) || (cVar3 = FUN_00613bb0(*piVar7,param_3,1), cVar3 == '\0'))
        goto LAB_00616b03;
        piVar7 = (int *)*piVar7;
      }
      if (piVar7 != (int *)0x0) goto LAB_00616b23;
    }
LAB_00616b03:
    do {
      if ((*piVar5 == 0) || (cVar3 = FUN_00613bb0(*piVar5,param_3,1), cVar3 != '\0')) {
        piVar7 = (int *)*piVar5;
        break;
      }
      piVar5 = (int *)piVar5[1];
      piVar7 = (int *)0x0;
    } while (piVar5 != (int *)0x0);
  }
  if (piVar7 == (int *)0x0) {
    return (int *)0x0;
  }
LAB_00616b23:
  if ((piVar7 == local_4) && (bVar2)) {
    return (int *)0x0;
  }
  if (piVar7 != (int *)0x0) {
    fVar8 = (float10)FUN_005e0970(*piVar7);
    if (param_1 == 4) {
      fVar8 = (float10)FUN_00546ca0((float)fVar8);
    }
    else {
      fVar8 = (float10)FUN_00546ca0((float)fVar8);
    }
    *unaff_retaddr = (float)fVar8;
    if ((*piVar7 != 0) && (cVar3 = FUN_00419d90(), cVar3 == '\0')) {
      FUN_0041a610(0);
    }
  }
  return piVar7;
}



void FUN_00616ba0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x1c);
  cVar2 = FUN_00413470();
  if (cVar2 == '\0') {
    return;
  }
  if ((*(float *)(param_1 + 0x1c) <= 0.0) && ((*(uint *)(iVar1 + 0x58) >> 1 & 1) != 0)) {
    return;
  }
  iVar5 = 0;
  iVar3 = FUN_009832e6(*(undefined4 *)(param_1 + 8),0,&PTR_PTR_00b03280,&PTR_PTR_00b0320c,0);
  iVar4 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
  if ((iVar4 == 5) || ((iVar3 != 0 && (cVar2 = FUN_00414eb0(), cVar2 != '\0')))) {
    uVar6 = 0x4f505543;
  }
  else {
    iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
    if (iVar3 != 1) {
      iVar3 = *(int *)(iVar1 + 0x9c);
      iVar4 = 0;
      if (0 < *(short *)(iVar1 + 0x6c)) {
        while (iVar5 == 0) {
          iVar5 = FUN_00613810(*(undefined4 *)(iVar3 + iVar4 * 4));
          iVar4 = iVar4 + 1;
          if (*(short *)(iVar1 + 0x6c) <= iVar4) {
            *(int *)(in_ECX + 0x88) = iVar5;
            return;
          }
        }
      }
      goto LAB_00616c81;
    }
    uVar6 = 0x49445543;
  }
  iVar5 = FUN_00613810(uVar6);
LAB_00616c81:
  *(int *)(in_ECX + 0x88) = iVar5;
  return;
}



void FUN_00616ca0(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  
  if ((*(int **)(in_ECX + 0xa4) != (int *)0x0) && (**(int **)(in_ECX + 0xa4) != 0)) {
    iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0xec))(1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 8);
    }
    if (((iVar1 != 0) && (iVar2 = FUN_00484df0(), iVar2 == 0)) && (*(int *)(iVar1 + 100) == 0)) {
      if (**(int **)(in_ECX + 0xa4) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = **(int **)(in_ECX + 0xa4) + -0x24;
      }
      if (DAT_00b3b908 != '\0') {
        puVar3 = *(undefined1 **)(iVar1 + 0x28);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_00a2f7ec;
        }
        uVar4 = FUN_004da2a0(puVar3);
        FUN_00579b60("%.20s poisons current weapon with %s!",uVar4);
      }
      if (**(int **)(in_ECX + 0xa4) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = **(int **)(in_ECX + 0xa4) + -0x24;
      }
      FUN_00484e20(iVar2);
      FUN_0067f100();
      (**(code **)(**(int **)(in_ECX + 0x3c) + 0x100))(iVar1,0,1,0,0,0,0,0,1,0);
      if (**(int **)(in_ECX + 0xa4) == 0) {
        FUN_00401f20(*(int **)(in_ECX + 0xa4));
        *(undefined4 *)(in_ECX + 0xa4) = 0;
      }
    }
  }
  return;
}



void FUN_00616db0(int *param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int in_ECX;
  int *piVar8;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c392b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == (int *)0x0) goto LAB_006171d0;
  if (param_2 != 0) {
    iVar4 = FUN_005e02e0(0);
    iVar5 = FUN_00484b70();
    if (iVar5 == iVar4) goto LAB_006171d0;
  }
  cVar1 = FUN_00415130(0x40000);
  if ((cVar1 != '\0') && (cVar1 = FUN_00419c50(uVar3), cVar1 == '\0')) goto LAB_006171d0;
  iVar4 = (**(code **)(*param_1 + 0x18))();
  if ((iVar4 == 7) && (cVar1 = FUN_00414eb0(), cVar1 != '\0')) {
    if (*(int *)(in_ECX + 0xa4) == 0) {
      puVar6 = (undefined4 *)FUN_00401f00(8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = 0;
        puVar6[1] = 0;
      }
      *(undefined4 **)(in_ECX + 0xa4) = puVar6;
    }
    FUN_00446cb0(param_1);
    goto LAB_006171d0;
  }
  piVar7 = (int *)FUN_00401f00(8);
  uStack_4 = 0;
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    iVar4 = (**(code **)(*param_1 + 0x18))();
    *piVar7 = (int)param_1;
    piVar7[1] = -(uint)(iVar4 != 7) & param_2;
  }
  uStack_4 = 0xffffffff;
  iVar4 = (**(code **)(*param_1 + 0x18))();
  if (iVar4 == 1) {
    if (*(int *)(in_ECX + 0xa0) != 0) {
      FUN_00401f20(*(int *)(in_ECX + 0xa0));
    }
    *(int **)(in_ECX + 0xa0) = piVar7;
    goto LAB_006171d0;
  }
  cVar1 = FUN_00414d10();
  if (cVar1 == '\0') goto LAB_00616ffb;
  cVar2 = FUN_00613af0(piVar7,0x40000,in_ECX + 0x9c);
  if (cVar2 != '\0') goto LAB_006171d0;
  piVar8 = (int *)(in_ECX + 0x98);
  if ((piVar8 == (int *)0x0) ||
     (((cVar2 = FUN_005e3270(), cVar2 != '\0' && (cVar2 = FUN_005e1cf0(), cVar2 == '\0')) ||
      (cVar2 = FUN_00415130(0x10000), cVar2 == '\0')))) {
LAB_00616fa0:
    piVar8 = (int *)(in_ECX + 0x94);
    if (((piVar8 != (int *)0x0) && (cVar2 = FUN_005e3270(), cVar2 == '\0')) &&
       (cVar2 = FUN_00415130(0x20000), cVar2 != '\0')) {
      if ((int *)*piVar8 == (int *)0x0) goto LAB_00616f98;
      fVar9 = (float10)(*(code *)**(undefined4 **)(*(int *)*piVar8 + 0xc))(0);
      uStack_14 = (undefined4)((ulonglong)(double)fVar9 >> 0x20);
      fVar9 = (float10)(*(code *)**(undefined4 **)(*piVar7 + 0xc))(0);
      if ((float10)(double)CONCAT44(uStack_10,uStack_14) < fVar9) goto LAB_00616f87;
    }
LAB_00616ffb:
    cVar2 = FUN_004149f0();
    if ((cVar2 == '\0') || (cVar1 != '\0')) {
      cVar2 = FUN_00414fe0();
      if (((cVar2 == '\0') && (cVar2 = FUN_00415030(), cVar2 == '\0')) && (cVar1 == '\0')) {
        cVar1 = FUN_006126b0(param_1);
        if (cVar1 == '\0') {
          if (*(int *)(in_ECX + 100) == 0) {
            puVar6 = (undefined4 *)FUN_00401f00(8);
            if (puVar6 == (undefined4 *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              *puVar6 = 0;
              puVar6[1] = 0;
            }
            *(undefined4 **)(in_ECX + 100) = puVar6;
          }
          FUN_00416650(piVar7,&LAB_00612740);
        }
        else {
          if (*(int **)(in_ECX + 0x90) != (int *)0x0) {
            fVar9 = (float10)(*(code *)**(undefined4 **)(**(int **)(in_ECX + 0x90) + 0xc))(0);
            uStack_14 = (undefined4)((ulonglong)(double)fVar9 >> 0x20);
            fVar9 = (float10)(*(code *)**(undefined4 **)(*piVar7 + 0xc))(0);
            if (fVar9 <= (float10)(double)CONCAT44(uStack_10,uStack_14)) goto LAB_006171d0;
            iVar4 = (**(code **)(*(int *)*piVar7 + 0x18))();
            if ((iVar4 != 7) && (piVar7[1] == 0)) {
              FUN_00401f20(*(undefined4 *)(in_ECX + 0x90));
              *(int **)(in_ECX + 0x90) = piVar7;
              goto LAB_006171d0;
            }
            if (*(int *)(in_ECX + 0x68) == 0) {
              puVar6 = (undefined4 *)FUN_00401f00(8);
              if (puVar6 == (undefined4 *)0x0) {
                puVar6 = (undefined4 *)0x0;
              }
              else {
                *puVar6 = 0;
                puVar6[1] = 0;
              }
              *(undefined4 **)(in_ECX + 0x68) = puVar6;
            }
            FUN_00416650(*(undefined4 *)(in_ECX + 0x90),&LAB_00612740);
          }
          *(int **)(in_ECX + 0x90) = piVar7;
        }
      }
      else {
        FUN_00401f20(piVar7);
      }
    }
    else {
      cVar1 = FUN_00414fe0();
      if (cVar1 == '\0') {
        cVar1 = FUN_00415030();
        if (cVar1 != '\0') {
          if (*(int *)(in_ECX + 0x60) == 0) {
            puVar6 = (undefined4 *)FUN_00401f00(8);
            if (puVar6 == (undefined4 *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              *puVar6 = 0;
              puVar6[1] = 0;
            }
            *(undefined4 **)(in_ECX + 0x60) = puVar6;
          }
          FUN_00416650(piVar7,&LAB_00612740);
        }
      }
      else {
        if (*(int *)(in_ECX + 0x5c) == 0) {
          puVar6 = (undefined4 *)FUN_00401f00(8);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            *puVar6 = 0;
            puVar6[1] = 0;
          }
          *(undefined4 **)(in_ECX + 0x5c) = puVar6;
        }
        FUN_00416650(piVar7,&LAB_00612740);
      }
    }
  }
  else {
    if ((int *)*piVar8 != (int *)0x0) {
      fVar9 = (float10)(*(code *)**(undefined4 **)(*(int *)*piVar8 + 0xc))(0);
      uStack_14 = (undefined4)((ulonglong)(double)fVar9 >> 0x20);
      fVar9 = (float10)(*(code *)**(undefined4 **)(*piVar7 + 0xc))(0);
      if (fVar9 <= (float10)(double)CONCAT44(uStack_10,uStack_14)) goto LAB_00616fa0;
LAB_00616f87:
      FUN_00401f20(*piVar8);
      *piVar8 = (int)piVar7;
      goto LAB_006171d0;
    }
LAB_00616f98:
    *piVar8 = (int)piVar7;
  }
LAB_006171d0:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006171f0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int in_ECX;
  float10 fVar5;
  float fStack_110;
  double dStack_10c;
  char acStack_104 [256];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&fStack_110;
  if ((*(int *)(in_ECX + 0xa0) != 0) && (param_1 != (int *)0x0)) {
    cVar1 = FUN_005e04e0();
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_1 + 0x284))(0x3f);
      fVar5 = (float10)FUN_005490c0(uVar2);
      fStack_110 = (float)fVar5;
      dStack_10c = (double)fStack_110;
      iVar3 = FUN_0047df80(0);
      fStack_110 = (float)(iVar3 % 100);
      if ((double)(int)fStack_110 <= dStack_10c) {
        cVar1 = FUN_006a1df0(**(undefined4 **)(in_ECX + 0xa0));
        if (cVar1 == '\0') {
          iVar3 = *param_1;
          uVar2 = FUN_009832e6(**(undefined4 **)(in_ECX + 0xa0),0,&PTR_PTR_00b03280,
                               &PTR_PTR_00b03800,0);
          cVar1 = (**(code **)(iVar3 + 0x2dc))(uVar2);
          if (cVar1 != '\0') {
            cVar1 = FUN_005e04e0();
            if (cVar1 != '\0') {
              *(int *)(DAT_00b333c4 + 0x6c0) = *(int *)(DAT_00b333c4 + 0x6c0) + 1;
              puVar4 = *(undefined1 **)(**(int **)(in_ECX + 0xa0) + 4);
              if (puVar4 == (undefined1 *)0x0) {
                puVar4 = &DAT_00a2f7ec;
              }
              _sprintf(acStack_104,"%s %s",DAT_00b38df8,puVar4);
              FUN_0057acc0(acStack_104,0,1,0x40400000);
            }
          }
        }
      }
    }
  }
  return;
}



char FUN_00617340(int *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  int in_ECX;
  undefined1 *puVar6;
  char local_1;
  
  local_1 = '\0';
  cVar1 = local_1;
  local_1 = '\0';
  uVar3 = (**(code **)(*(int *)*param_1 + 0x18))();
  switch(uVar3) {
  case 0:
  case 2:
  case 3:
    cVar2 = FUN_00419cf0();
    if (cVar2 == '\0') {
      cVar2 = FUN_00419e50();
      if (cVar2 == '\0') {
        FUN_0041a610(0);
        return '\0';
      }
    }
    else {
      iVar4 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x5c) + 0x30))();
      if (((iVar4 == 0) && (cVar2 = FUN_00613bb0(param_1,0,0), cVar2 != '\0')) &&
         (cVar2 = FUN_00615220(param_1), cVar2 == '\0')) {
        local_1 = FUN_00699190(*param_1,param_2,0);
        cVar1 = local_1;
        if (local_1 != '\0') goto LAB_006174d3;
      }
    }
    break;
  case 1:
  case 4:
  case 5:
    break;
  case 6:
    if (param_1[1] != 0) {
      iVar4 = FUN_009832e6(*(undefined4 *)(param_1[1] + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b084f0,0);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 100) != 0)) {
        cVar2 = FUN_00419cf0();
        if (cVar2 == '\0') {
          cVar2 = FUN_00419e50();
          if (cVar2 == '\0') {
            FUN_0041a610(0);
            return '\0';
          }
        }
        else {
          cVar2 = FUN_00615220(param_1);
          if (cVar2 == '\0') {
            (**(code **)(**(int **)(in_ECX + 0x3c) + 0x2d0))(iVar4,param_2);
            local_1 = '\x01';
            goto LAB_006174d3;
          }
        }
      }
    }
    break;
  case 7:
    uVar3 = FUN_009832e6(*param_1,0,&PTR_PTR_00b03280,&PTR_PTR_00b0320c,0);
    cVar2 = FUN_00419cf0();
    if (cVar2 == '\0') {
      cVar2 = FUN_00419e50();
      if (cVar2 == '\0') {
        FUN_0041a610(0);
        return '\0';
      }
    }
    else {
      FUN_005e08c0(uVar3,0,1);
      local_1 = '\x01';
LAB_006174d3:
      *(bool *)(in_ECX + 0x1ae) = param_1 == *(int **)(in_ECX + 0x84);
      cVar1 = local_1;
      if (DAT_00b3b908 != '\0') {
        iVar4 = FUN_009832e6(param_2,0,&PTR_PTR_00b03818,&PTR_PTR_00b03070,0);
        if (iVar4 == 0) {
          puVar5 = &DAT_00a3492c;
        }
        else {
          puVar5 = (undefined *)FUN_004da2a0();
        }
        puVar6 = *(undefined1 **)(*param_1 + 4);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_00a2f7ec;
        }
        uVar3 = FUN_004da2a0(puVar6,puVar5);
        FUN_00579b60("%.20s casts %s at %.20s",uVar3);
      }
    }
    break;
  default:
    goto switchD_00617362_default;
  }
  local_1 = cVar1;
switchD_00617362_default:
  return local_1;
}



char FUN_00617590(int *param_1,int *param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  char local_39;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c3318;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_39 = '\0';
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) goto LAB_006176a5;
  cVar1 = FUN_005e34b0(uVar2);
  if (cVar1 == '\0') {
LAB_006175fa:
    cVar1 = FUN_00689230(param_1,param_1 + 0xb,param_2 + 0xb);
    if (cVar1 == '\0') {
      FUN_0067d760();
      uStack_4 = 0;
      cVar1 = FUN_0067eb60(param_1 + 0xb,param_2 + 0xb,param_1,0);
      if (cVar1 != '\0') {
        cVar1 = FUN_0067d650(param_1);
        if (cVar1 != '\0') {
          local_39 = '\x01';
        }
      }
      uStack_4 = 0xffffffff;
      FUN_0060d0a0();
      if ((local_39 != '\0') || (param_2 == DAT_00b333c4)) goto LAB_006176a5;
      uVar4 = (**(code **)(*param_2 + 0x174))(0x43c80000);
      uVar4 = (**(code **)(*param_1 + 0x174))(uVar4);
      iVar3 = FUN_00480520(uVar4);
      if ((-1 < iVar3) || (param_3 == '\0')) goto LAB_006176a5;
    }
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x330))();
    if ((iVar3 == 0) || (param_3 == '\0')) goto LAB_006175fa;
  }
  local_39 = '\x01';
LAB_006176a5:
  *unaff_FS_OFFSET = local_c;
  return local_39;
}



void FUN_00617e80(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  
  FUN_005660f0();
  piVar1 = *(int **)(in_ECX + 0x40);
  piVar3 = (int *)0x0;
  while ((piVar6 = piVar1, piVar6 != (int *)0x0 && ((piVar6[1] != 0 || (*piVar6 != 0))))) {
    piVar1 = (int *)*piVar6;
    uVar4 = FUN_0046b250(*piVar1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
    iVar5 = FUN_009832e6(uVar4);
    *piVar1 = iVar5;
    if ((iVar5 == 0) ||
       (((*(uint *)(iVar5 + 8) >> 0xb & 1) != 0 || ((*(uint *)(iVar5 + 8) >> 5 & 1) != 0)))) {
      if (piVar3 == (int *)0x0) {
        piVar2 = (int *)piVar6[1];
        if (piVar2 == (int *)0x0) {
          *piVar6 = 0;
        }
        else {
          piVar6[1] = piVar2[1];
          *piVar6 = *piVar2;
          FUN_00401f20(piVar2);
        }
      }
      else {
        FUN_0065c620(piVar1);
        piVar6 = (int *)piVar3[1];
      }
      FUN_00401f20(piVar1);
      piVar1 = piVar6;
    }
    else {
      piVar1 = (int *)piVar6[1];
      piVar3 = piVar6;
    }
  }
  if (*(int *)(in_ECX + 300) != 0) {
    uVar4 = FUN_0046b250(*(int *)(in_ECX + 300),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
    uVar4 = FUN_009832e6(uVar4);
    *(undefined4 *)(in_ECX + 300) = uVar4;
  }
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 0x74);
  if (0x5e < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_00614d10(*(undefined4 *)(in_ECX + 0x5c));
    FUN_00614d10(*(undefined4 *)(in_ECX + 0x60));
    FUN_00614d10(*(undefined4 *)(in_ECX + 100));
    piVar3 = *(int **)(in_ECX + 0x90);
    if (piVar3 != (int *)0x0) {
      if (piVar3[1] != 0) {
        FUN_00485bc0();
      }
      if (*piVar3 != 0) {
        iVar5 = FUN_004199c0(*piVar3);
        *piVar3 = iVar5;
      }
    }
    piVar3 = *(int **)(in_ECX + 0x94);
    if (piVar3 != (int *)0x0) {
      if (piVar3[1] != 0) {
        FUN_00485bc0();
      }
      if (*piVar3 != 0) {
        iVar5 = FUN_004199c0(*piVar3);
        *piVar3 = iVar5;
      }
    }
    piVar3 = *(int **)(in_ECX + 0x98);
    if (piVar3 != (int *)0x0) {
      if (piVar3[1] != 0) {
        FUN_00485bc0();
      }
      if (*piVar3 != 0) {
        iVar5 = FUN_004199c0(*piVar3);
        *piVar3 = iVar5;
      }
    }
    piVar3 = *(int **)(in_ECX + 0x9c);
    if (piVar3 != (int *)0x0) {
      if (piVar3[1] != 0) {
        FUN_00485bc0();
      }
      if (*piVar3 != 0) {
        iVar5 = FUN_004199c0(*piVar3);
        *piVar3 = iVar5;
      }
    }
    piVar3 = *(int **)(in_ECX + 0xa0);
    if (piVar3 != (int *)0x0) {
      if (piVar3[1] != 0) {
        FUN_00485bc0();
      }
      if (*piVar3 != 0) {
        iVar5 = FUN_004199c0(*piVar3);
        *piVar3 = iVar5;
      }
    }
    if (((*(int **)(in_ECX + 0x90) == (int *)0x0) || (**(int **)(in_ECX + 0x90) == 0)) ||
       (iVar5 = FUN_00419a20(), *(int *)(in_ECX + 0x8c) != iVar5)) {
      *(undefined4 *)(in_ECX + 0x8c) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(in_ECX + 0x90);
    }
    uVar4 = FUN_00614d60(*(undefined4 *)(in_ECX + 0x7c),*(undefined4 *)(in_ECX + 0x60));
    *(undefined4 *)(in_ECX + 0x7c) = uVar4;
    uVar4 = FUN_00614d60(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x5c));
    *(undefined4 *)(in_ECX + 0x80) = uVar4;
    uVar4 = FUN_00614d60(*(undefined4 *)(in_ECX + 0x84),*(undefined4 *)(in_ECX + 100));
    *(undefined4 *)(in_ECX + 0x84) = uVar4;
    uVar4 = FUN_00614d60(*(undefined4 *)(in_ECX + 0x88),*(undefined4 *)(in_ECX + 100));
    *(undefined4 *)(in_ECX + 0x88) = uVar4;
  }
  if (0x65 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_00614d10(*(undefined4 *)(in_ECX + 0x68));
  }
  *(undefined1 *)(in_ECX + 0x1bd) = 1;
  *(undefined1 *)(in_ECX + 0x59) = 0;
  return;
}



void FUN_00618120(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  float10 fVar3;
  float10 fVar4;
  
  if (param_2 == '\0') {
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x174))();
    fVar3 = (float10)FUN_00982c30();
    if (*(float *)(in_ECX + 0x184) < 0.0) {
      uVar1 = *(undefined4 *)(in_ECX + 0x3c);
      uVar2 = FUN_006135f0(0);
      fVar4 = (float10)FUN_00612f50(uVar1,uVar2);
      *(float *)(in_ECX + 0x184) = (float)fVar4;
    }
    if ((float)fVar3 < *(float *)(in_ECX + 0x184)) {
      *(undefined1 *)(in_ECX + 0x15b) = 1;
      return;
    }
  }
  *(undefined1 *)(in_ECX + 0x15b) = 0;
  return;
}



void FUN_006181f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint local_4;
  
  local_4 = 0;
  FUN_004534d0(&local_4,2);
  if ((short)local_4 == 0) {
    *param_1 = 0;
    return;
  }
  puVar1 = (undefined4 *)FUN_00401f00(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  iVar2 = 0;
  *param_1 = puVar1;
  if ((short)local_4 != 0) {
    do {
      puVar1 = (undefined4 *)FUN_00401f00(8);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      FUN_00614db0();
      FUN_0067b1e0(puVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(local_4 & 0xffff));
  }
  return;
}



void FUN_00618290(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = param_1;
  param_1 = (undefined4 *)CONCAT31(param_1._1_3_,param_1 != (undefined4 *)0x0);
  FUN_004534d0(&param_1,1);
  if ((char)param_1 == '\0') {
    *puVar1 = 0;
    return;
  }
  puVar2 = (undefined4 *)FUN_00401f00(8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    *puVar1 = puVar2;
    FUN_00614db0();
    return;
  }
  *puVar1 = 0;
  FUN_00614db0();
  return;
}



void FUN_00618300(uint param_1)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a70170;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a7037c;
  return;
}



void FUN_00618350(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c3348;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7037c;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a70170;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00618590(int *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  code *pcVar8;
  float10 fVar9;
  undefined1 **ppuVar10;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int *piStack_28;
  undefined1 *puStack_1c;
  undefined8 uStack_10;
  
  iVar4 = (**(code **)(*param_1 + 0x330))();
  if (iVar4 == 0) {
    return;
  }
  piStack_28 = (int *)0x6185b9;
  piVar5 = (int *)(**(code **)(*param_1 + 0x338))();
  if (piVar5 == (int *)0x0) {
LAB_006189c0:
    fStack_2c = 8.957477e-39;
    piStack_28 = piVar5;
    (**(code **)(*param_1 + 0x340))();
    FUN_005eae70();
    return;
  }
  piStack_28 = (int *)0x0;
  fStack_2c = 8.956047e-39;
  cVar3 = (**(code **)(*piVar5 + 0x198))();
  if (cVar3 != '\0') goto LAB_006189c0;
  if (piVar5 == DAT_00b333c4) {
    return;
  }
  piStack_28 = (int *)0x7;
  fStack_2c = 8.956095e-39;
  iVar4 = (**(code **)(*param_1 + 0x284))();
  fStack_2c = 0.0;
  fVar2 = (100.0 - (float)iVar4) / _DAT_00b36c78;
  fStack_30 = 8.956138e-39;
  iVar4 = FUN_0047df80();
  if ((float)(iVar4 % 100) < fVar2 != ((float)(iVar4 % 100) == fVar2)) {
    return;
  }
  fStack_2c = 9.10844e-44;
  fStack_30 = 8.956231e-39;
  iVar4 = (**(code **)(*piVar5 + 0x284))();
  uStack_10 = (double)iVar4;
  fStack_30 = 8.956265e-39;
  (**(code **)(*piVar5 + 0x348))();
  fStack_30 = 2.8026e-45;
  fStack_34 = 8.956304e-39;
  puStack_1c = (undefined1 *)(**(code **)(*piVar5 + 0x284))();
  fStack_34 = 8.96831e-44;
  uStack_10._0_4_ = (undefined4)((ulonglong)((double)(int)puStack_1c * 0.005) >> 0x20);
  puStack_38 = (undefined1 *)0x6186a8;
  (**(code **)(*piVar5 + 0x284))();
  puStack_38 = (undefined1 *)0x1;
  uStack_10._4_4_ = 0;
  fStack_2c = 0.0;
  puStack_3c = (undefined1 *)0x6186d1;
  iVar4 = (**(code **)(*(int *)param_1[0x16] + 0xec))();
  if (iVar4 == 0) {
    puStack_3c = &stack0xffffffdc;
    fVar9 = (float10)FUN_005f4880(1,&uStack_10);
    uVar6 = (**(code **)(*param_1 + 0x284))(0,(float)fVar9);
    uVar6 = (**(code **)(*param_1 + 0x284))(7,uVar6);
    uVar6 = (**(code **)(*param_1 + 0x284))(0x11,uVar6);
    FUN_00547280(uVar6);
  }
  else {
    puStack_3c = (undefined1 *)0x1;
    iVar4 = (**(code **)(*(int *)param_1[0x16] + 0xec))();
    if ((iVar4 != 0) &&
       (iVar4 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0),
       iVar4 != 0)) {
      fVar9 = (float10)(**(code **)(*(int *)param_1[0x16] + 0x324))();
      puStack_1c = (undefined1 *)(float)fVar9;
      if ((float)puStack_1c <= 0.0) {
        uVar6 = (**(code **)(*(int *)param_1[0x16] + 0xec))(1);
        fVar9 = (float10)FUN_00612a90(param_1,uVar6);
        (**(code **)(*(int *)param_1[0x16] + 0x328))((float)fVar9);
      }
    }
  }
  fStack_34 = (float)puStack_1c / 100.0;
  fStack_30 = 0.0;
  puStack_38 = (undefined1 *)0x0;
  iVar4 = (**(code **)(*param_1 + 0x330))();
  uVar7 = (uint)*(byte *)(iVar4 + 0x17c);
  uVar6 = 3;
  ppuVar10 = &puStack_3c;
  (**(code **)(*param_1 + 0x330))(ppuVar10,3,uVar7);
  uVar6 = FUN_00616980(ppuVar10,uVar6,uVar7);
  iVar4 = (**(code **)(*param_1 + 0x330))();
  *(undefined4 *)(iVar4 + 0x7c) = uVar6;
  iVar4 = (**(code **)(*param_1 + 0x330))();
  uVar7 = (uint)*(byte *)(iVar4 + 0x17c);
  uVar6 = 4;
  ppuVar10 = &puStack_38;
  (**(code **)(*param_1 + 0x330))(ppuVar10,4,uVar7);
  uVar6 = FUN_00616980(ppuVar10,uVar6,uVar7);
  iVar4 = (**(code **)(*param_1 + 0x330))();
  *(undefined4 *)(iVar4 + 0x80) = uVar6;
  iVar4 = (**(code **)(*param_1 + 0x330))();
  if ((*(int *)(iVar4 + 0x7c) == 0) ||
     (iVar4 = (**(code **)(*param_1 + 0x330))(), *(int *)(iVar4 + 0x80) != 0)) {
    iVar4 = (**(code **)(*param_1 + 0x330))();
    if ((*(int *)(iVar4 + 0x7c) == 0) &&
       (iVar4 = (**(code **)(*param_1 + 0x330))(), *(int *)(iVar4 + 0x80) != 0)) {
      pcVar8 = *(code **)(*param_1 + 0x330);
    }
    else {
      iVar4 = (**(code **)(*param_1 + 0x330))();
      if ((*(int *)(iVar4 + 0x7c) == 0) ||
         (iVar4 = (**(code **)(*param_1 + 0x330))(), *(int *)(iVar4 + 0x80) == 0))
      goto LAB_00618948;
      pcVar8 = *(code **)(*param_1 + 0x330);
      if ((float)puStack_38 <= (float)puStack_3c) {
        (*pcVar8)();
        goto LAB_0061891d;
      }
    }
    (*pcVar8)();
    uVar6 = FUN_00415360();
    puStack_3c = puStack_38;
  }
  else {
    (**(code **)(*param_1 + 0x330))();
LAB_0061891d:
    uVar6 = FUN_00415360();
  }
  iVar4 = (**(code **)(*param_1 + 0x284))(uVar6);
  fStack_30 = ((float)iVar4 * (float)puStack_3c) / 100.0;
LAB_00618948:
  fStack_2c = fStack_34 - fStack_2c;
  piStack_28 = (int *)(fStack_30 - (float)piStack_28);
  puVar1 = puStack_3c;
  if ((float)piStack_28 < fStack_2c) {
    puVar1 = puStack_1c;
  }
  (**(code **)(*piVar5 + 0x220))(puVar1,0,param_1);
  cVar3 = (**(code **)(*piVar5 + 0x198))(0);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x330))(piVar5);
    FUN_006162d0(piVar5);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006189e0(void)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  float *pfVar12;
  undefined4 *puVar13;
  int in_ECX;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 extraout_ST0;
  float10 fVar17;
  float10 extraout_ST1;
  undefined4 uVar18;
  bool bVar19;
  char cStack_2b;
  float fStack_20;
  undefined4 uStack_18;
  undefined8 local_14;
  double dStack_c;
  
  if (*(int *)(in_ECX + 0x74) != 3) {
    return;
  }
  iVar7 = FUN_006135f0();
  if (iVar7 == 0) {
    return;
  }
  iVar7 = *(int *)(in_ECX + 0x6c);
  if ((((iVar7 == 4) || (iVar7 == 0xe)) || (iVar7 == 0xc)) || (iVar7 == 7)) {
    uVar18 = *(undefined4 *)(in_ECX + 0x3c);
    uVar8 = FUN_006135f0(0);
    cVar4 = FUN_006131d0(uVar18,uVar8);
    if (cVar4 == '\0') {
      return;
    }
  }
  *(undefined4 *)(in_ECX + 0x50) = 0xff;
  fVar14 = (float10)FUN_00615980();
  local_14 = 0.0;
  FUN_006142d0((int)&local_14 + 4,&local_14);
  uVar18 = 3;
  (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(3);
  uVar18 = FUN_00470720(uVar18);
  FUN_0051ac80(uVar18);
  uVar18 = 3;
  (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(3);
  FUN_00470750(uVar18);
  FUN_006135f0();
  uVar5 = FUN_005e5640();
  local_14._0_5_ = CONCAT14(uVar5,(undefined4)local_14);
  FUN_006135f0();
  iVar7 = FUN_005e0ee0();
  if (iVar7 == 7) {
LAB_00618ade:
    uStack_18 = 1;
  }
  else {
    FUN_006135f0();
    iVar7 = FUN_005e0ee0();
    uStack_18 = 0;
    if (iVar7 == 8) goto LAB_00618ade;
  }
  piVar9 = (int *)FUN_006135f0();
  cVar4 = (**(code **)(*piVar9 + 0x334))(1);
  FUN_006135f0();
  uVar5 = FUN_005e5670();
  dStack_c = (double)CONCAT71(dStack_c._1_7_,uVar5);
  iVar7 = FUN_00612d60();
  bVar19 = false;
  bVar3 = false;
  bVar2 = false;
  if (iVar7 == 0) goto LAB_00618bc1;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0xec))(1);
  cVar6 = *(char *)(iVar7 + 0x90);
  if ((cVar6 != '\x04') || (iVar10 = *(int *)(iVar7 + 100), iVar10 == 0)) {
    if ((cVar6 != '\x05') && (cVar6 != '\x04')) {
      bVar2 = true;
    }
    goto LAB_00618bc1;
  }
  fVar15 = (float10)FUN_004849c0();
  fVar16 = (float10)(*(code *)**(undefined4 **)(iVar10 + 0x24))(0);
  if ((float10)(double)fVar15 < fVar16) {
LAB_00618ba6:
    bVar19 = true;
  }
  else {
    iVar10 = FUN_006135f0();
    bVar19 = false;
    if (iVar10 != 0) {
      if (*(int *)(iVar7 + 100) == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(iVar7 + 100) + 0x18;
      }
      FUN_006135f0(iVar10);
      cVar6 = FUN_006a1df0(iVar10);
      if (cVar6 != '\0') goto LAB_00618ba6;
    }
  }
  bVar3 = true;
LAB_00618bc1:
  cVar6 = FUN_00613440(fStack_20,uStack_18,0);
  if (cVar6 != '\0') {
    fVar1 = 0.0;
    if (((*(int *)(in_ECX + 0x70) == 2) || (*(int *)(in_ECX + 0x70) == 4)) &&
       ((iVar7 != 0 && ((!bVar2 && (!bVar19)))))) {
      piVar11 = (int *)FUN_006135f0();
      piVar9 = *(int **)(in_ECX + 0x3c);
      uVar18 = (**(code **)(*piVar11 + 0x19c))(dStack_c._0_4_);
      uVar18 = (**(code **)(*piVar9 + 0x284))(7,(undefined4)local_14,0,(float)fVar14,uVar18);
      uVar18 = FUN_00613780(uVar18);
      uVar18 = FUN_005e0f50(uVar18);
      fVar15 = (float10)FUN_00546800(uVar18);
      fVar1 = (float)fVar15;
    }
    fStack_20 = 0.0;
    if (((*(int *)(in_ECX + 0x80) != 0) &&
        (*(float *)(in_ECX + 0x108) < *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0x104))) &&
       (cVar6 = FUN_00613bb0(*(int *)(in_ECX + 0x80),0,0), cVar6 != '\0')) {
      piVar11 = (int *)FUN_006135f0();
      piVar9 = *(int **)(in_ECX + 0x3c);
      iVar7 = *piVar9;
      uVar18 = (**(code **)(*piVar11 + 0x19c))(0);
      uVar18 = (**(code **)(*piVar9 + 0x284))(7,(undefined4)local_14,0,(float)fVar14,uVar18);
      uVar18 = FUN_00415360(uVar18);
      uVar18 = (**(code **)(iVar7 + 0x284))(uVar18);
      uVar18 = FUN_005e0f50(uVar18);
      fVar14 = (float10)FUN_00546800(uVar18);
      fStack_20 = (float)fVar14;
    }
    if (((cVar4 == '\0') && (iVar7 = FUN_006135f0(), iVar7 != DAT_00b333c4)) &&
       ((fVar1 = fVar1 + 100.0, *(int *)(in_ECX + 0x80) != 0 && (0.0 < fStack_20)))) {
      fStack_20 = fStack_20 + 100.0;
    }
    if ((0.0 < fVar1) || (0.0 < fStack_20)) {
      cVar4 = *(char *)(in_ECX + 0x158);
    }
    else {
      cVar4 = '\0';
    }
    cVar6 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2dc))();
    if ((cVar6 == '\0') || (cVar4 == '\0')) {
      fVar1 = 0.0;
      fStack_20 = 0.0;
    }
    fVar14 = (float10)0;
    fVar15 = (float10)fVar1;
    fVar16 = (float10)fStack_20;
    if ((bVar3) &&
       (*(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0x1b0) <= *(float *)(in_ECX + 0x1b4))) {
      fVar1 = (float)fVar14;
      fVar15 = (float10)fVar1;
    }
    fVar17 = fVar15;
    if ((fVar14 < fVar16) && (fVar17 = fVar16, fVar14 < fVar15)) {
      dStack_c._0_4_ = ABS((float)(fVar16 - fVar15));
      uVar18 = FUN_009828c0();
      dStack_c = (double)CONCAT44(dStack_c._4_4_,uVar18);
      iVar7 = FUN_009828c0();
      fVar14 = extraout_ST0;
      fVar17 = extraout_ST1;
      if (iVar7 != 0) {
        if (extraout_ST1 <= extraout_ST0) {
          iVar10 = FUN_0047df80(0);
          fStack_20 = (float)(iVar10 % iVar7) + fStack_20;
          local_14 = (double)fVar1;
          dStack_c._0_4_ = (float)(iVar10 % iVar7);
          iVar10 = FUN_0047df80(0);
          dStack_c = (double)CONCAT44(dStack_c._4_4_,iVar10 % iVar7);
          fVar1 = (float)local_14 - (float)(iVar10 % iVar7);
        }
        else {
          local_14 = (double)extraout_ST1;
          iVar10 = FUN_0047df80(0);
          fStack_20 = (float)local_14 - (float)(iVar10 % iVar7);
          dStack_c._0_4_ = (float)(iVar10 % iVar7);
          iVar10 = FUN_0047df80(0);
          dStack_c = (double)CONCAT44(dStack_c._4_4_,iVar10 % iVar7);
          fVar1 = (float)(iVar10 % iVar7) + fVar1;
        }
        fVar14 = (float10)fVar1;
        fVar17 = (float10)fStack_20;
      }
      if (fVar17 <= fVar14) {
        fVar17 = fVar14;
      }
    }
    iVar7 = FUN_009828c0();
    if (iVar7 < 1) {
      iVar7 = 100;
    }
    iVar10 = FUN_0047df80(0);
    dStack_c._0_4_ = (float)(iVar10 % iVar7);
    if (((float)fVar17 <= dStack_c._0_4_) || (fStack_20 < fVar1 == (fStack_20 == fVar1))) {
      if (((float)fVar17 <= dStack_c._0_4_) || ((fStack_20 <= fVar1 || (cStack_2b != '\0')))) {
        if (*(int *)(in_ECX + 0x78) != 2) {
          *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 0x74);
          *(undefined4 *)(in_ECX + 0x74) = 2;
          piVar9 = (int *)FUN_005e0f50();
          piVar11 = (int *)FUN_005e0f50();
          fVar14 = (float10)(**(code **)(*piVar9 + 0x140))();
          fVar14 = (float10)(**(code **)(*piVar11 + 0x13c))((float)fVar14);
          fVar14 = (float10)FUN_00546b20((float)fVar14);
          *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(in_ECX + 0x44);
          *(float *)(in_ECX + 0xe4) = (float)fVar14;
          *(undefined4 *)(in_ECX + 0xe8) = 0xbf800000;
        }
      }
      else {
        if ((*(char *)(in_ECX + 0x49) != '\0') && (FUN_005f4ae0(0), *(int *)(in_ECX + 0x74) == 1)) {
          *(undefined4 *)(in_ECX + 0x78) = 1;
          *(undefined4 *)(in_ECX + 0x74) = 3;
        }
        iVar7 = FUN_006135f0();
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = iVar7 + 0x68;
        }
        cVar4 = FUN_00617340(*(undefined4 *)(in_ECX + 0x80),iVar7);
        if (cVar4 != '\0') {
          *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 0x74);
          dStack_c = (double)CONCAT44(dStack_c._4_4_,*(undefined4 *)(in_ECX + 0x44));
          *(undefined4 *)(in_ECX + 0x74) = 0;
          puVar13 = (undefined4 *)FUN_00403c00();
          uVar18 = *puVar13;
          *(float *)(in_ECX + 0x104) = dStack_c._0_4_;
          *(undefined4 *)(in_ECX + 0x108) = uVar18;
          *(undefined4 *)(in_ECX + 0x10c) = 0xbf800000;
          return;
        }
      }
    }
    else {
      if ((*(char *)(in_ECX + 0x49) != '\0') && (FUN_005f4ae0(0), *(int *)(in_ECX + 0x74) == 1)) {
        *(undefined4 *)(in_ECX + 0x78) = 1;
        *(undefined4 *)(in_ECX + 0x74) = 3;
      }
      piVar9 = (int *)FUN_006135f0();
      iVar7 = (**(code **)(*piVar9 + 0x154))();
      if (iVar7 != 0) {
        FUN_00616ca0();
        iVar7 = FUN_0047df80(0);
        dStack_c = (double)iVar7 / 32767.0;
        pfVar12 = (float *)FUN_00403c00();
        if ((float)dStack_c <= *pfVar12) {
          iVar7 = **(int **)(in_ECX + 0x3c);
          uVar18 = FUN_006135f0(0,0);
          (**(code **)(iVar7 + 0x308))(uVar18);
        }
        FUN_00612bd0(0x13,0);
        if (bVar3) {
          dStack_c = (double)CONCAT44(dStack_c._4_4_,*(undefined4 *)(in_ECX + 0x44));
          puVar13 = (undefined4 *)FUN_00403c00();
          uVar18 = *puVar13;
          *(float *)(in_ECX + 0x1b0) = dStack_c._0_4_;
          *(undefined4 *)(in_ECX + 0x1b4) = uVar18;
          *(undefined4 *)(in_ECX + 0x1b8) = 0xbf800000;
          return;
        }
      }
    }
  }
  return;
}



void FUN_006191b0(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int in_ECX;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  
  iVar6 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))();
  if (iVar6 != 0) {
    uVar11 = 1;
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(1);
    iVar6 = FUN_004706e0(uVar11);
    if (iVar6 != 0) {
      uVar11 = 1;
      (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(1);
      iVar6 = FUN_004706e0(uVar11);
      if (*(int *)(iVar6 + 0x44) != 1) {
        return;
      }
    }
  }
  if ((*(char *)(in_ECX + 0x49) == '\0') && (*(int *)(in_ECX + 0x74) != 1)) {
    return;
  }
  iVar6 = FUN_006135f0();
  if ((iVar6 == 0) || (*(int *)(in_ECX + 0x70) == 0xb)) {
    cVar5 = FUN_005e5670();
    if (cVar5 != '\0') {
      FUN_005f4ae0(0);
    }
    *(undefined1 *)(in_ECX + 0x49) = 0;
    if (*(int *)(in_ECX + 0x74) != 1) {
      return;
    }
    *(undefined4 *)(in_ECX + 0x78) = 1;
    *(undefined4 *)(in_ECX + 0x74) = 3;
    return;
  }
  FUN_006135f0();
  cVar2 = FUN_005e5640();
  FUN_006135f0();
  iVar6 = FUN_005e0ee0();
  cVar5 = '\0';
  piVar7 = (int *)FUN_006135f0();
  iVar8 = (**(code **)(*piVar7 + 0x330))();
  if (iVar8 != 0) {
    piVar7 = (int *)FUN_006135f0();
    iVar8 = (**(code **)(*piVar7 + 0x330))();
    cVar5 = *(char *)(iVar8 + 0x49);
  }
  fVar9 = (float10)FUN_00615980();
  fVar10 = (float10)FUN_00615520();
  iVar8 = FUN_006135f0();
  cVar3 = (**(code **)(**(int **)(iVar8 + 0x58) + 0x138))();
  piVar7 = (int *)FUN_006135f0();
  cVar4 = (**(code **)(*piVar7 + 0x1a0))();
  if (cVar4 == '\0') {
    piVar7 = (int *)FUN_006135f0();
    cVar4 = (**(code **)(*piVar7 + 0x19c))();
    if (cVar4 == '\0') {
      FUN_006135f0();
      iVar8 = FUN_005e0dc0();
      if (iVar8 != 3) {
        FUN_006135f0();
        cVar4 = FUN_005e0f30();
        if (cVar4 == '\0') {
          FUN_006135f0();
          iVar8 = FUN_005e0dc0();
          if (iVar8 != 5) {
            bVar1 = false;
            goto LAB_0061931e;
          }
        }
      }
    }
  }
  bVar1 = true;
LAB_0061931e:
  if ((((((float)fVar10 < (float)fVar9) || (bVar1)) || (iVar6 == 3)) || (cVar5 != '\0')) ||
     (((iVar6 = FUN_0047df80(0), iVar6 % 100 < 5 && ((cVar2 == '\0' || (cVar3 != '\0')))) ||
      (cVar5 = FUN_005e5670(), cVar5 == '\0')))) {
    cVar5 = FUN_005e5670();
    if (cVar5 != '\0') {
      FUN_005f4ae0(0);
    }
    *(undefined1 *)(in_ECX + 0x49) = 0;
    if (*(int *)(in_ECX + 0x74) == 1) {
      *(undefined4 *)(in_ECX + 0x78) = 1;
      *(undefined4 *)(in_ECX + 0x74) = 3;
    }
  }
  return;
}



void FUN_006193d0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x70) != 0xb) {
    if (DAT_00b3b908 != '\0') {
      uVar1 = FUN_004da2a0("...just kinda stand around");
      FUN_00579b60("%.20s is going to %s!",uVar1);
    }
    *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
  }
  *(undefined4 *)(in_ECX + 0x70) = 0xb;
  FUN_006160b0();
  FUN_006191b0();
  return;
}



void FUN_00619420(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(int *)(in_ECX + 0x70) == 10) {
    iVar2 = FUN_005e0ee0();
    if (iVar2 != 1) {
      cVar1 = FUN_005e0da0();
      if (cVar1 != '\0') {
        FUN_005e6d70(0);
        return;
      }
      if (*(int *)(in_ECX + 0xac) == 0) {
        iVar2 = FUN_00612d60();
        if (iVar2 != 0) {
          uVar9 = 0;
          uVar8 = 1;
          uVar7 = 0;
          uVar6 = 0;
          uVar5 = 1;
          uVar3 = FUN_00612d60(1,0,0,1,0);
          FUN_005f2e70(uVar3,uVar5,uVar6,uVar7,uVar8,uVar9);
        }
        if (*(int *)(in_ECX + 0x70) != 0) {
          if (DAT_00b3b908 != '\0') {
            uVar3 = FUN_004da2a0("fight Hand-to-Hand");
            FUN_00579b60("%.20s is going to %s!",uVar3);
          }
          *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
        }
        *(undefined4 *)(in_ECX + 0x70) = 0;
        fVar4 = (float10)FUN_00615520();
        FUN_00612ea0((float)fVar4);
        return;
      }
      FUN_005faea0(*(int *)(in_ECX + 0xac),1,0,0,0);
      cVar1 = *(char *)(*(int *)(in_ECX + 0xac) + 0x90);
      if ((cVar1 == '\x05') || (cVar1 == '\x04')) {
        if (*(int *)(in_ECX + 0x70) != 2) {
          if (DAT_00b3b908 != '\0') {
            uVar3 = FUN_004da2a0("fight with a Ranged Weapon");
            FUN_00579b60("%.20s is going to %s!",uVar3);
          }
          *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
        }
        *(undefined4 *)(in_ECX + 0x70) = 2;
      }
      else {
        if (*(int *)(in_ECX + 0x70) != 1) {
          if (DAT_00b3b908 != '\0') {
            uVar3 = FUN_004da2a0("fight with a Melee Weapon");
            FUN_00579b60("%.20s is going to %s!",uVar3);
          }
          *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
        }
        *(undefined4 *)(in_ECX + 0x70) = 1;
      }
      fVar4 = (float10)FUN_00615520();
      FUN_00612ea0((float)fVar4);
      *(undefined4 *)(in_ECX + 0xac) = 0;
    }
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_006195b0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  float10 fVar4;
  float local_8 [2];
  
  local_8[1] = 0.0;
  local_8[0] = 0.0;
  FUN_006142d0(local_8 + 1,local_8);
  if (*(float *)(in_ECX + 0x184) < 0.0) {
    uVar3 = *(undefined4 *)(in_ECX + 0x3c);
    uVar2 = FUN_006135f0(0);
    fVar4 = (float10)FUN_00612f50(uVar3,uVar2);
    *(float *)(in_ECX + 0x184) = (float)fVar4;
  }
  if (local_8[0] < *(float *)(in_ECX + 0x184)) {
    iVar1 = **(int **)(in_ECX + 0x3c);
    uVar3 = FUN_006135f0();
    (**(code **)(iVar1 + 0x340))(uVar3);
    return 1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00619640(void)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  undefined4 uVar7;
  
  if (*(int *)(in_ECX + 0x70) == 5) {
    if (*(char *)(in_ECX + 0x4a) == '\0') {
      cVar2 = FUN_005e5670();
      if (cVar2 != '\0') {
        FUN_005f4ae0(0);
      }
      *(undefined1 *)(in_ECX + 0x4a) = 1;
      *(undefined1 *)(in_ECX + 0x4e) = 0;
      if (*(int *)(in_ECX + 200) != 0) {
        piVar6 = *(int **)(in_ECX + 0x3c);
        uVar7 = 2;
        uVar3 = FUN_00520200(2);
        uVar4 = *(undefined4 *)(in_ECX + 200);
        (**(code **)(*piVar6 + 0x164))(uVar4,piVar6,uVar3);
        FUN_00477db0(uVar4,piVar6,uVar3,uVar7);
      }
      iVar5 = **(int **)(in_ECX + 0x3c);
      uVar7 = 1;
      uVar3 = 5;
      uVar4 = FUN_006135f0(5,1);
      (**(code **)(iVar5 + 0x308))(uVar4);
      if ((DAT_00b3b908 != '\0') && (iVar5 = FUN_006135f0(uVar3,uVar7), iVar5 != 0)) {
        FUN_006135f0(uVar3,uVar7);
        uVar4 = FUN_004da2a0();
        uVar4 = FUN_004da2a0(uVar4);
        FUN_00579b60("%.20s wants to yield to %.20s!",uVar4);
        return;
      }
    }
    else {
      if (*(int *)(in_ECX + 200) != 0) {
        (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))();
        cVar2 = FUN_00472ea0();
        if (cVar2 == '\0') {
          return;
        }
      }
      *(undefined1 *)(in_ECX + 0x4a) = 0;
      iVar5 = FUN_006135f0();
      if (iVar5 != 0) {
        piVar6 = (int *)FUN_006135f0();
        (**(code **)(*piVar6 + 0x36c))(*(undefined4 *)(in_ECX + 0x3c));
      }
      cVar2 = FUN_005e5670();
      if (cVar2 != '\0') {
        FUN_005f4ae0(0);
      }
      FUN_006160b0();
      iVar5 = FUN_0047df80(0);
      fVar1 = ((float)(iVar5 % 10) / 10.0) * _DAT_00b36d70 + _DAT_00b36d68;
      *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0x44);
      *(float *)(in_ECX + 0xd8) = fVar1;
      *(undefined4 *)(in_ECX + 0xdc) = 0xbf800000;
      if (*(int *)(in_ECX + 0x70) != 6) {
        if (DAT_00b3b908 != '\0') {
          uVar4 = FUN_004da2a0("...just kinda stand around");
          FUN_00579b60("%.20s is going to %s!",uVar4);
        }
        *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
      }
      *(undefined4 *)(in_ECX + 0x70) = 6;
      *(undefined1 *)(in_ECX + 0x17d) = 1;
    }
  }
  return;
}



void FUN_00619810(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  undefined4 uVar5;
  
  if (*(int *)(in_ECX + 0x70) == 9) {
    uVar5 = 1;
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(1);
    uVar5 = FUN_00470720(uVar5);
    cVar2 = FUN_0051ac80(uVar5);
    if (*(int *)(in_ECX + 0x84) == 0) {
      if (cVar2 == '\0') {
        iVar4 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x5c) + 0x30))();
        if (iVar4 == 0) {
          if (*(int *)(in_ECX + 0x70) != 0xd) {
            *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
          }
          *(undefined4 *)(in_ECX + 0x70) = 0xd;
        }
      }
    }
    else if ((*(float *)(in_ECX + 0x108) < *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0x104))
            && (cVar2 == '\0')) {
      cVar2 = FUN_00617340(*(int *)(in_ECX + 0x84),0);
      if (cVar2 != '\0') {
        uVar5 = *(undefined4 *)(in_ECX + 0x44);
        puVar3 = (undefined4 *)FUN_00403c00();
        uVar1 = *puVar3;
        *(undefined4 *)(in_ECX + 0x104) = uVar5;
        *(undefined4 *)(in_ECX + 0x108) = uVar1;
        *(undefined4 *)(in_ECX + 0x10c) = 0xbf800000;
        if ((*(int *)(in_ECX + 0x88) != 0) && (*(int *)(in_ECX + 0x88) == *(int *)(in_ECX + 0x84)))
        {
          *(undefined4 *)(in_ECX + 0x88) = 0;
        }
        *(undefined4 *)(in_ECX + 0x84) = 0;
        return;
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00619920(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int in_ECX;
  float10 fVar4;
  
  if (*(int *)(in_ECX + 0x6c) == param_1) goto LAB_006199be;
  if (param_1 == 0) {
    if ((*(int *)(in_ECX + 0x6c) == 4) && (cVar3 = FUN_006163a0(), cVar3 != '\0')) {
      return;
    }
LAB_00619949:
    if (*(int *)(in_ECX + 0x6c) == 4) {
      fVar4 = (float10)-1.0;
      goto LAB_00619955;
    }
  }
  else {
    if (param_1 != 4) goto LAB_00619949;
    *(undefined4 *)(in_ECX + 0xcc) = 0xbf800000;
    fVar4 = (float10)FUN_006141b0();
LAB_00619955:
    *(float *)(in_ECX + 0xcc) = (float)fVar4;
  }
  if (*(int *)(in_ECX + 0x6c) == 6) {
    *(undefined4 *)(in_ECX + 300) = 0;
  }
  uVar2 = _DAT_00b36f70;
  if (*(int *)(in_ECX + 0x6c) == 4) {
    *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(in_ECX + 0x44);
    *(undefined4 *)(in_ECX + 0xf0) = uVar2;
    *(undefined4 *)(in_ECX + 0xf4) = 0xbf800000;
  }
  iVar1 = *(int *)(in_ECX + 0x6c);
  if ((((iVar1 != 4) && (iVar1 != 7)) && (iVar1 != 9)) && ((iVar1 != 8 && (iVar1 != 0xc)))) {
    *(undefined1 *)(in_ECX + 0x191) = 1;
  }
LAB_006199be:
  *(int *)(in_ECX + 0x6c) = param_1;
  return;
}



float * FUN_006199f0(float *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 *puVar4;
  float10 fVar5;
  
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x174))();
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  fVar3 = (float)puVar4[2];
  fVar5 = (float10)FUN_005e0660();
  FUN_006159c0(param_1,uVar1,uVar2,(float)(fVar5 * (float10)0.75 + (float10)fVar3),param_3,param_4,
               param_5,param_6);
  fVar3 = (float)param_2[10];
  *param_1 = *param_1 - (float)param_2[8];
  param_1[2] = param_1[2] - fVar3;
  param_1[1] = 0.0;
  if (-3.1415927 < *param_1) {
    if (*param_1 <= 3.1415927) goto LAB_00619ac4;
    fVar3 = *param_1 - 6.2831855;
  }
  else {
    fVar3 = *param_1 + 6.2831855;
  }
  *param_1 = fVar3;
LAB_00619ac4:
  if (param_1[2] < -3.1415927 != (param_1[2] == -3.1415927)) {
    param_1[2] = param_1[2] + 6.2831855;
    return param_1;
  }
  if (3.1415927 < param_1[2]) {
    param_1[2] = param_1[2] - 6.2831855;
    return param_1;
  }
  return param_1;
}



float * FUN_00619b10(float *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [16];
  
  iVar4 = FUN_009832e6(param_2,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x174))();
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  fVar3 = (float)puVar5[2];
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*param_2 + 0x15c))(auStack_18);
    uStack_2c = (undefined4)((ulonglong)(double)*(float *)(iVar4 + 8) >> 0x20);
    iVar4 = (**(code **)(*param_2 + 0x158))(auStack_10);
    fVar6 = ((float10)(double)CONCAT44(uStack_28,uStack_2c) - (float10)*(float *)(iVar4 + 8)) *
            (float10)0.5;
  }
  else {
    fVar6 = (float10)FUN_005e0660();
    fVar6 = fVar6 * (float10)0.75;
  }
  FUN_006159c0(param_1,uVar1,uVar2,(float)(fVar6 + (float10)fVar3),param_3,param_4,param_5,param_6);
  fVar3 = (float)param_2[10];
  *param_1 = *param_1 - (float)param_2[8];
  param_1[2] = param_1[2] - fVar3;
  param_1[1] = 0.0;
  if (-3.1415927 < *param_1) {
    if (*param_1 <= 3.1415927) goto LAB_00619c3a;
    fVar3 = *param_1 - 6.2831855;
  }
  else {
    fVar3 = *param_1 + 6.2831855;
  }
  *param_1 = fVar3;
LAB_00619c3a:
  if (param_1[2] < -3.1415927 != (param_1[2] == -3.1415927)) {
    param_1[2] = param_1[2] + 6.2831855;
    return param_1;
  }
  if (3.1415927 < param_1[2]) {
    param_1[2] = param_1[2] - 6.2831855;
    return param_1;
  }
  return param_1;
}



void FUN_00619c90(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  
  piVar1 = *(int **)(in_ECX + 0x40);
  uVar5 = 0;
  if (piVar1 != (int *)0x0) {
    do {
      if (*piVar1 != 0) {
        uVar5 = uVar5 + 1;
      }
      piVar1 = (int *)piVar1[1];
    } while (piVar1 != (int *)0x0);
    if (1 < uVar5) {
      iVar2 = FUN_00569e60();
      FUN_005b27a0(&LAB_00614190);
      iVar3 = FUN_006135f0();
      if (iVar3 != 0) {
        uVar4 = FUN_006135f0();
        FUN_00569ec0(uVar4);
        iVar3 = FUN_006135f0();
        if (((iVar3 != iVar2) && (iVar2 = FUN_00613640(iVar2), iVar2 != 0)) &&
           ((float)*(int *)(iVar2 + 4) != -1.0)) {
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + DAT_00b36c70;
          FUN_005b27a0(&LAB_00614190);
        }
      }
    }
  }
  return;
}



void FUN_00619d40(int *param_1,char param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int in_ECX;
  int *piVar7;
  float10 fVar8;
  float fVar9;
  
  piVar1 = param_1;
  piVar5 = *(int **)(in_ECX + 0x40);
  while (piVar7 = (int *)0x0, piVar5 != (int *)0x0) {
    piVar7 = (int *)0x0;
    if ((((int *)piVar5[1] == (int *)0x0) && (*piVar5 == 0)) ||
       (piVar7 = (int *)*piVar5, piVar5 = (int *)piVar5[1], (int *)*piVar7 == param_1)) break;
  }
  piVar5 = (int *)param_1[0x16];
  if (piVar5 == (int *)0x0) {
    piVar7[1] = 0;
    goto LAB_00619f6e;
  }
  iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 8))();
  iVar4 = (**(code **)(*piVar5 + 8))();
  if (iVar4 != iVar3) {
    piVar7[1] = piVar7[1] / 2;
    goto LAB_00619f6e;
  }
  iVar3 = (**(code **)(*param_1 + 0x284))(4);
  param_1 = (int *)0x0;
  if ((piVar7 == (int *)0x0) || ((char)piVar7[2] != '\0')) goto LAB_00619f6e;
  switch(*(undefined4 *)(in_ECX + 0x70)) {
  case 0:
  case 1:
  case 3:
    piVar5 = (int *)FUN_006135f0();
    if (piVar1 == piVar5) {
      fVar8 = (float10)100.0;
    }
    else {
      fVar8 = (float10)FUN_004d7e90(piVar1,0);
    }
    break;
  case 2:
  case 4:
    cVar2 = FUN_005f2820(0,piVar1,1,0,0);
    if (cVar2 == '\0') {
      fVar8 = (float10)FUN_004d7e90(piVar1,0);
      fVar8 = fVar8 + (float10)150.0;
    }
    else {
      fVar8 = (float10)FUN_004d7e90(piVar1,0);
    }
    break;
  default:
    goto switchD_00619dd6_default;
  }
  param_1 = (int *)(float)fVar8;
switchD_00619dd6_default:
  if ((iVar3 != 0) || (fVar8 = (float10)FUN_00615520(), (float10)(float)param_1 <= fVar8)) {
    iVar3 = piVar7[3];
    FUN_005e02e0(0);
    iVar3 = FUN_00519c10(iVar3,param_1);
    iVar3 = (**(code **)(*piVar1 + 0x284))(8,(float)iVar3);
    fVar9 = (float)iVar3;
    fVar8 = (float10)FUN_005ead00(8);
    FUN_00547910((float)fVar8,fVar9);
    iVar3 = FUN_009828c0();
    piVar7[1] = iVar3;
    if (param_2 != '\0') {
      *(undefined1 *)(piVar7 + 2) = 0;
      FUN_00403c00();
      iVar3 = FUN_009828c0();
      piVar7[1] = iVar3;
    }
  }
  else {
    piVar7[1] = -1;
  }
  piVar5 = (int *)FUN_006135f0();
  if ((piVar5 == piVar1) && (iVar3 = FUN_006758e0(piVar1,0xc,1), iVar3 != 0)) {
    iVar4 = FUN_0052b4a0();
    FUN_004526e0();
    FUN_00401f20(iVar3);
    if (2 < iVar4) {
      iVar3 = *(int *)(in_ECX + 0x40);
      uVar6 = FUN_0052b4a0();
      if (1 < uVar6) {
        iVar3 = **(int **)(iVar3 + 4);
        iVar4 = *(int *)(iVar3 + 4);
        if ((float)iVar4 != -1.0) {
          *(int *)(iVar3 + 4) = iVar4 + DAT_00b36c70;
        }
      }
    }
  }
LAB_00619f6e:
  if (param_3 != '\0') {
    FUN_00619c90();
  }
  return;
}



void FUN_00619fa0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afb8b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x18c) != 0) {
    param_1 = 0;
    FUN_0055e000(iVar1,&param_1);
    if (param_1 != 0) {
      FUN_006b7240();
      FUN_006b7190(param_2);
      *unaff_FS_OFFSET = local_c;
      return;
    }
  }
  iVar3 = FUN_0065ac50(iVar1,param_2,2,1);
  if (iVar3 != 0) {
    if (*(int *)(in_ECX + 0x18c) == 0) {
      param_2 = FUN_00401f00(0x10,uVar2);
      local_4 = 0;
      if (param_2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00618300(0x25);
      }
      local_4 = 0xffffffff;
      *(undefined4 *)(in_ECX + 0x18c) = uVar4;
    }
    FUN_00452570(iVar1,iVar3);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0061a090(int *param_1,int *param_2,char param_3,int param_4,float *param_5,float *param_6)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  undefined *puVar10;
  undefined *puVar11;
  char *pcVar12;
  undefined *puVar13;
  int unaff_EBX;
  float fVar14;
  int iVar15;
  float *pfVar16;
  float unaff_EBP;
  int iVar17;
  int unaff_ESI;
  float10 fVar18;
  undefined4 unaff_retaddr;
  double dVar19;
  float local_174;
  undefined *local_170;
  float local_16c;
  int iStack_168;
  int *local_15c;
  float *local_158;
  float *local_154;
  int *local_150;
  float local_14c;
  float local_148;
  char *local_144;
  char *local_140;
  undefined *local_13c;
  undefined1 *local_138;
  char *local_134 [48];
  char acStack_74 [112];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_174;
  local_15c = param_2;
  local_148 = *param_6;
  local_158 = param_5;
  local_14c = *param_5;
  local_150 = param_1;
  local_154 = param_6;
  iVar15 = DAT_00b02e24;
  if (param_3 == '\0') {
    iVar15 = 0x500 - DAT_00b02e24;
  }
  local_170 = (undefined *)(float)iVar15;
  fVar1 = (float)((uint)(param_3 == '\0') * 2 + 1);
  fVar14 = local_14c;
  if (param_3 == '\0') {
    fVar14 = local_148;
  }
  local_144 = "NORMAL";
  local_140 = "FORWARD";
  local_13c = &DAT_00a709f4;
  local_138 = &DAT_00a68acc;
  local_134[0] = "RIGHT";
  local_174 = fVar14;
  local_16c = fVar1;
  if (((uint)param_1[2] >> 0xb & 1) == 0) {
    cVar4 = (**(code **)(*param_1 + 0x25c))();
    if (cVar4 != '\0') {
      FUN_0057b8e0("OVER-ENCUMBERED",local_170,(float)(int)local_174,fVar1,0xffffffff);
      fVar14 = (float)((int)fVar14 + param_4);
      local_174 = fVar14;
    }
    if (param_4 < 0x1e) {
      uVar5 = FUN_005f1910(9);
      fVar18 = (float10)(**(code **)(*param_1 + 0x288))(9,uVar5);
      dVar19 = (double)fVar18;
      uVar5 = FUN_005f1910(10);
      fVar18 = (float10)(**(code **)(*param_1 + 0x288))(10,uVar5,dVar19);
      dVar19 = (double)fVar18;
      uVar5 = FUN_005f1910(8);
      fVar18 = (float10)(**(code **)(*param_1 + 0x288))(8,uVar5,dVar19);
      _sprintf((char *)&local_13c,"H:%.2f/%d F:%.2f/%d M:%.2f/%d",(double)fVar18);
    }
    else {
      uVar5 = FUN_005f1910(8);
      fVar18 = (float10)(**(code **)(*param_1 + 0x288))(8,uVar5);
      _sprintf((char *)local_134,"HEALTH:%.2f/%d",SUB84((double)fVar18,0),
               (int)((ulonglong)(double)fVar18 >> 0x20));
      FUN_0057b8e0(local_134,local_174,(float)unaff_EBX,fVar1,0xffffffff);
      unaff_EBX = (int)fVar14 + param_4;
      uVar5 = FUN_005f1910(10);
      fVar18 = (float10)(**(code **)(*param_1 + 0x288))(10,uVar5);
      _sprintf((char *)&local_138,"FATIGUE:%.2f/%d",SUB84((double)fVar18,0),
               (int)((ulonglong)(double)fVar18 >> 0x20));
      FUN_0057b8e0(&local_138,unaff_EBX,(float)(int)unaff_EBP,fVar1,0xffffffff);
      fVar14 = (float)(unaff_EBX + param_4);
      uVar5 = FUN_005f1910(9);
      fVar18 = (float10)(**(code **)(*param_1 + 0x288))(9,uVar5);
      _sprintf((char *)&local_13c,"MAGICKA:%.2f/%d",SUB84((double)fVar18,0),
               (int)((ulonglong)(double)fVar18 >> 0x20));
      unaff_EBP = fVar14;
    }
    FUN_0057b8e0(&local_13c,unaff_EBP,(float)unaff_ESI,fVar1,0xffffffff);
    iVar15 = (int)fVar14 + param_4;
    if (iStack_168 != 0) {
      uVar5 = (**(code **)(*param_1 + 0x224))(iStack_168);
      _sprintf((char *)&local_13c,"Disposition to Opponent: %d",uVar5);
      FUN_0057b8e0(&local_13c,unaff_EBP,(float)iVar15,fVar1,0xffffffff);
      iVar15 = iVar15 + param_4;
    }
    iVar6 = (**(code **)(*param_1 + 0x330))();
    param_3 = (char)unaff_retaddr;
    if (param_1 == DAT_00b333c4) {
      FUN_0057b8e0("Target is PLAYER. No AI info.",unaff_EBP,(float)iVar15,unaff_EBX,0xffffffff);
    }
    else if (iVar6 != 0) {
      if (*(char *)(iVar6 + 0x1bd) != '\0') {
        _sprintf((char *)&local_13c,"INITIALIZING (%d)",(int)*(char *)(iVar6 + 0x1ac));
        FUN_0057b8e0(&local_13c,unaff_EBP,(float)iVar15,unaff_EBX,0xffffffff);
        iVar15 = iVar15 + param_4;
      }
      if (iStack_168 != 0) {
        fVar18 = (float10)FUN_00615980((double)(*(float *)(iVar6 + 0xcc) * 57.295776));
        _sprintf((char *)&local_13c,"Distance: %.2f Position: %.2fdeg",SUB84((double)fVar18,0),
                 (int)((ulonglong)(double)fVar18 >> 0x20));
        FUN_0057b8e0(&local_13c,unaff_EBP,(float)iVar15,unaff_EBX,0xffffffff);
        iVar15 = iVar15 + param_4;
      }
      iVar17 = *(int *)(iVar6 + 0x70);
      if ((iVar17 == 2) || (iVar17 == 4)) {
        local_170 = (undefined *)0x0;
        local_174 = 0.0;
        FUN_006142d0(&local_170,&local_174);
        _sprintf((char *)&local_13c,"Attack Range: %.2f(optimal) %.2f(max)",
                 SUB84((double)(float)local_170,0),
                 (int)((ulonglong)(double)(float)local_170 >> 0x20),SUB84((double)local_174,0),
                 (int)((ulonglong)(double)local_174 >> 0x20));
      }
      else {
        fVar18 = (float10)FUN_00615520();
        _sprintf((char *)&local_13c,"Attack Reach: %.2f",SUB84((double)fVar18,0),
                 (int)((ulonglong)(double)fVar18 >> 0x20));
      }
      FUN_0057b8e0(&local_13c,unaff_EBP,(float)iVar15,unaff_EBX,0xffffffff);
      local_16c = *(float *)(iVar6 + 0x74);
      iVar3 = *(int *)(iVar6 + 0x6c);
      if (iVar17 == 0) {
        pcVar7 = "HAND TO HAND";
      }
      else if (iVar17 == 1) {
        pcVar7 = "MELEE_WEAPON";
      }
      else if (iVar17 == 2) {
        pcVar7 = "RANGED_WEAPON";
      }
      else if (iVar17 == 3) {
        pcVar7 = "MELEE_MAGIC";
      }
      else if (iVar17 == 4) {
        pcVar7 = "RANGED_MAGIC";
      }
      else if (iVar17 == 5) {
        pcVar7 = "YIELD";
      }
      else if (iVar17 == 6) {
        pcVar7 = "POST_YIELD";
      }
      else if (iVar17 == 7) {
        pcVar7 = "FLEE";
      }
      else if (iVar17 == 0xc) {
        pcVar7 = "SWIM_FLEE";
      }
      else if (iVar17 == 8) {
        pcVar7 = "BUFF";
      }
      else if (iVar17 == 9) {
        pcVar7 = "RESTORE";
      }
      else if (iVar17 == 10) {
        pcVar7 = "SWITCH";
      }
      else if (iVar17 == 0xb) {
        pcVar7 = "CALMED";
      }
      else {
        pcVar7 = "NONE";
        if (iVar17 != 0xd) {
          pcVar7 = "UNKNOWN";
        }
      }
      _sprintf((char *)&local_13c,"Strategy: %s",pcVar7);
      FUN_0057b8e0(&local_13c,unaff_EBP,(float)(iVar15 + param_4),unaff_EBX,0xffffffff);
      iVar15 = iVar15 + param_4 + param_4;
      uVar8 = (**(code **)(*(int *)local_15c[0x16] + 0x2c0))();
      local_170 = (undefined *)(uVar8 & 0xffff);
      acStack_74[0] = '\0';
      _memset(acStack_74 + 1,0,99);
      switch(iVar3) {
      case 1:
      case 0xb:
        local_174 = *(float *)(iVar6 + 0x44) - *(float *)(iVar6 + 0xd4);
        _sprintf(acStack_74,"%.2f/%.2f",SUB84((double)local_174,0),
                 (int)((ulonglong)(double)local_174 >> 0x20),
                 SUB84((double)*(float *)(iVar6 + 0xd8),0),
                 (int)((ulonglong)(double)*(float *)(iVar6 + 0xd8) >> 0x20));
        break;
      case 2:
        if (((uint)local_170 & 1) == 0) {
          if (((uint)local_170 & 2) == 0) {
            if (((uint)local_170 & 4) == 0) {
              pcVar7 = " RIGHT ";
              if (((uint)local_170 & 8) == 0) {
                pcVar7 = "";
              }
            }
            else {
              pcVar7 = " LEFT ";
            }
          }
          else {
            pcVar7 = " BACKWARD ";
          }
        }
        else {
          pcVar7 = " FORWARD ";
        }
        local_174 = *(float *)(iVar6 + 0x44) - *(float *)(iVar6 + 0xd4);
        _sprintf(acStack_74,"%s %.2f/%.2f",pcVar7,SUB84((double)local_174,0),
                 (int)((ulonglong)(double)local_174 >> 0x20),
                 SUB84((double)*(float *)(iVar6 + 0xd8),0),
                 (int)((ulonglong)(double)*(float *)(iVar6 + 0xd8) >> 0x20));
        break;
      case 3:
        local_174 = *(float *)(iVar6 + 0x44) - *(float *)(iVar6 + 0xf8);
        _sprintf(acStack_74,"%.2f/%.2f",SUB84((double)local_174,0),
                 (int)((ulonglong)(double)local_174 >> 0x20),
                 SUB84((double)*(float *)(iVar6 + 0xfc),0),
                 (int)((ulonglong)(double)*(float *)(iVar6 + 0xfc) >> 0x20));
        break;
      case 4:
        local_174 = *(float *)(iVar6 + 0x44) - *(float *)(iVar6 + 0xec);
        uVar5 = FUN_00452a60();
        uVar5 = FUN_005697a0(uVar5);
        _sprintf(acStack_74,"%.2f/%.2f pkg radius/tgt val: %d/%d",SUB84((double)local_174,0),
                 (int)((ulonglong)(double)local_174 >> 0x20),
                 SUB84((double)*(float *)(iVar6 + 0xf0),0),
                 (int)((ulonglong)(double)*(float *)(iVar6 + 0xf0) >> 0x20),uVar5);
        break;
      default:
        acStack_74[0] = '\0';
        break;
      case 0xe:
      case 0x10:
        piVar9 = (int *)FUN_005e0f50();
        fVar18 = (float10)(**(code **)(*piVar9 + 0x154))();
        _sprintf(acStack_74,"range %.2f",SUB84((double)fVar18,0),
                 (int)((ulonglong)(double)fVar18 >> 0x20));
      }
      if (iVar3 == 0) {
        pcVar7 = "ENGAGE";
      }
      else if (iVar3 == 10) {
        pcVar7 = "RANGED_ALERT";
      }
      else if (iVar3 == 0xf) {
        pcVar7 = "MELEE_ALERT";
      }
      else if (iVar3 == 0xb) {
        pcVar7 = "ON_STATION";
      }
      else if (iVar3 == 0xc) {
        pcVar7 = "REPOSITION";
      }
      else if (iVar3 == 1) {
        pcVar7 = "IDLE";
      }
      else if (iVar3 == 2) {
        pcVar7 = "DODGE";
      }
      else if (iVar3 == 3) {
        if (((uint)local_170 & 1) == 0) {
          pcVar7 = "CLOSE BACKWARD";
        }
        else {
          pcVar7 = "CLOSE FORWARD";
        }
      }
      else if (iVar3 == 4) {
        pcVar7 = "ADVANCE";
      }
      else if (iVar3 == 5) {
        pcVar7 = "WITHDRAW";
      }
      else if (iVar3 == 6) {
        pcVar7 = "TAKE_COVER";
      }
      else if (iVar3 == 7) {
        pcVar7 = "ACQUIRE";
      }
      else if (iVar3 == 0xe) {
        pcVar7 = "STANDOFF";
      }
      else if (iVar3 == 0x10) {
        pcVar7 = "STANDOFF (backup)";
      }
      else if (iVar3 == 0xd) {
        pcVar7 = "DISARMED";
      }
      else {
        pcVar7 = "RUN_AWAY";
        if (iVar3 != 8) {
          pcVar7 = "UNKNOWN";
        }
      }
      _sprintf((char *)&local_13c,"Maneuver: %s %s",pcVar7,acStack_74);
      FUN_0057b8e0(&local_13c,unaff_EBP,(float)iVar15,unaff_EBX,0xffffffff);
      iVar15 = iVar15 + param_4;
      if (*(char *)(iVar6 + 0x17d) != '\0') {
        FUN_0057b8e0("Playing turning animation",unaff_EBP,(float)iVar15,unaff_EBX,0xffffffff);
        iVar15 = iVar15 + param_4;
      }
      if (local_16c == 0.0) {
        iVar17 = *(int *)(iVar6 + 0x50);
        if (iVar17 == 0x14) {
          pcVar7 = "LEFT";
        }
        else if (iVar17 == 0x15) {
          pcVar7 = "RIGHT";
        }
        else if (iVar17 == 0x16) {
          pcVar7 = "NORMAL POWER";
        }
        else if (iVar17 == 0x17) {
          pcVar7 = "FORWARD POWER";
        }
        else if (iVar17 == 0x18) {
          pcVar7 = "BACK POWER";
        }
        else if (iVar17 == 0x19) {
          pcVar7 = "LEFT POWER";
        }
        else {
          pcVar7 = "RIGHT POWER";
          if (iVar17 != 0x1a) {
            pcVar7 = "";
          }
        }
        pcVar12 = acStack_74;
        do {
          cVar4 = *pcVar7;
          *pcVar12 = cVar4;
          pcVar7 = pcVar7 + 1;
          pcVar12 = pcVar12 + 1;
        } while (cVar4 != '\0');
        pcVar7 = "ATTACK";
      }
      else if (local_16c == 2.8026e-45) {
        local_16c = *(float *)(iVar6 + 0x44) - *(float *)(iVar6 + 0xe0);
        _sprintf(acStack_74,"%.2f/%.2f",SUB84((double)local_16c,0),
                 (int)((ulonglong)(double)local_16c >> 0x20),
                 SUB84((double)*(float *)(iVar6 + 0xe4),0),
                 (int)((ulonglong)(double)*(float *)(iVar6 + 0xe4) >> 0x20));
        pcVar7 = "HOLD";
      }
      else {
        acStack_74[0] = '\0';
        if (local_16c == 0.0) {
          pcVar7 = "ATTACK";
        }
        else if (local_16c == 1.4013e-45) {
          pcVar7 = "BLOCK";
        }
        else if (local_16c == 2.8026e-45) {
          pcVar7 = "HOLD";
        }
        else {
          pcVar7 = "DONE";
          if (local_16c != 4.2039e-45) {
            pcVar7 = "UNKNOWN";
          }
        }
      }
      _sprintf((char *)&local_13c,"Melee: %s %s",pcVar7,acStack_74);
      FUN_0057b8e0(&local_13c,unaff_EBP,(float)iVar15,unaff_EBX,0xffffffff);
      FUN_0057b8e0("Selected Spells",unaff_EBP,(float)(iVar15 + param_4),unaff_EBX,0xffffffff);
      iVar15 = iVar15 + param_4 + param_4;
      FUN_00616840(*(undefined4 *)(iVar6 + 0x80),"Ranged",unaff_retaddr,param_4,&stack0xfffffe80);
      FUN_00616840(*(undefined4 *)(iVar6 + 0x7c),"Melee",unaff_retaddr,param_4,&stack0xfffffe80);
      FUN_00616840(*(undefined4 *)(iVar6 + 0x84),"Restoration",unaff_retaddr,param_4,
                   &stack0xfffffe80);
      FUN_00616840(*(undefined4 *)(iVar6 + 0x94),"Bound Armor",unaff_retaddr,param_4,
                   &stack0xfffffe80);
      FUN_00616840(*(undefined4 *)(iVar6 + 0x98),"Bound Weapon",unaff_retaddr,param_4,
                   &stack0xfffffe80);
      FUN_00616840(*(undefined4 *)(iVar6 + 0x90),&DAT_00a705f8,unaff_retaddr,param_4,
                   &stack0xfffffe80);
      FUN_00616840(*(undefined4 *)(iVar6 + 0x9c),"Summoning",unaff_retaddr,param_4,&stack0xfffffe80)
      ;
      piVar9 = *(int **)(iVar6 + 0x5c);
      FUN_0057b8e0("Available Spells",unaff_EBP,(float)iVar15,unaff_EBX,0xffffffff);
      iVar15 = iVar15 + param_4;
      for (; (piVar9 != (int *)0x0 && ((piVar9[1] != 0 || (*piVar9 != 0))));
          piVar9 = (int *)piVar9[1]) {
        FUN_00616840(*piVar9,"Ranged",unaff_retaddr,param_4,&stack0xfffffe80);
      }
      for (piVar9 = *(int **)(iVar6 + 0x60);
          (piVar9 != (int *)0x0 && ((piVar9[1] != 0 || (*piVar9 != 0)))); piVar9 = (int *)piVar9[1])
      {
        FUN_00616840(*piVar9,"Melee",unaff_retaddr,param_4,&stack0xfffffe80);
      }
      for (piVar9 = *(int **)(iVar6 + 100);
          (piVar9 != (int *)0x0 && ((piVar9[1] != 0 || (*piVar9 != 0)))); piVar9 = (int *)piVar9[1])
      {
        FUN_00616840(*piVar9,"Restore",unaff_retaddr,param_4,&stack0xfffffe80);
      }
      for (piVar9 = *(int **)(iVar6 + 0x68);
          (piVar9 != (int *)0x0 && ((piVar9[1] != 0 || (*piVar9 != 0)))); piVar9 = (int *)piVar9[1])
      {
        FUN_00616840(*piVar9,"Backup Buffs",unaff_retaddr,param_4,&stack0xfffffe80);
      }
      if (*(char *)(iVar6 + 0xc4) != '\0') {
        iVar17 = 0;
        pfVar16 = (float *)(iVar6 + 0xb0);
        do {
          if (0.0 < *pfVar16) {
            _sprintf((char *)&local_13c,"%s Power Attack Range: %.2f",(&local_150)[iVar17],
                     SUB84((double)*pfVar16,0),(int)((ulonglong)(double)*pfVar16 >> 0x20));
            FUN_0057b8e0(&local_13c,unaff_EBP,(float)iVar15,unaff_EBX,0xffffffff);
            iVar15 = iVar15 + param_4;
          }
          iVar17 = iVar17 + 1;
          pfVar16 = pfVar16 + 1;
        } while (iVar17 < 5);
      }
      if (iStack_168 != 0) {
        pcVar7 = "Can see main target";
        if (*(char *)(iVar6 + 0x158) == '\0') {
          pcVar7 = "Cannot see main target";
        }
        FUN_0057b8e0(pcVar7,unaff_EBP,(float)iVar15,unaff_EBX,0xffffffff);
        iVar15 = iVar15 + param_4;
        if (*(char *)(iVar6 + 0x158) != '\0') {
          iVar17 = *(int *)(iVar6 + 0x180);
          if (iVar17 == 0) {
            pcVar7 = "\tBottom Segment in view";
          }
          else if (iVar17 == 1) {
            pcVar7 = "\tMiddle Segment in view";
          }
          else if (iVar17 == 2) {
            pcVar7 = "\tTop Segment in view";
          }
          else {
            pcVar7 = "\tNo Segment in view";
          }
          _sprintf((char *)&local_13c,pcVar7);
          FUN_0057b8e0(&local_13c,unaff_EBP,(float)iVar15,unaff_EBX,0xffffffff);
          iVar15 = iVar15 + param_4;
        }
        if (*(char *)(iVar6 + 0x159) != '\0') {
          FUN_0057b8e0("An ally blocks the main target",unaff_EBP,(float)iVar15,unaff_EBX,0xffffffff
                      );
          iVar15 = iVar15 + param_4;
        }
        if (*(char *)(iVar6 + 0x15b) != '\0') {
          FUN_0057b8e0("The last arrow hit an obstruction on the way to the target",unaff_EBP,
                       (float)iVar15,unaff_EBX,0xffffffff);
          iVar15 = iVar15 + param_4;
        }
        cVar4 = FUN_00614290();
        if (cVar4 == '\0') {
          FUN_0057b8e0("Cannot path to target",unaff_EBP,(float)iVar15,unaff_EBX,0xffffffff);
          iVar15 = iVar15 + param_4;
        }
        if (*(char *)(iVar6 + 0x17c) != '\0') {
          FUN_0057b8e0("Don\'t use area spells, allies too close",unaff_EBP,(float)iVar15,unaff_EBX,
                       0xffffffff);
          iVar15 = iVar15 + param_4;
        }
      }
      if (*(char *)(iVar6 + 0x15a) != '\0') {
        local_16c = *(float *)(iVar6 + 0x44) - *(float *)(iVar6 + 0x164);
        _sprintf((char *)&local_13c,"In the way: %.2f/%.2f",SUB84((double)local_16c,0),
                 (int)((ulonglong)(double)local_16c >> 0x20),
                 SUB84((double)*(float *)(iVar6 + 0x168),0),
                 (int)((ulonglong)(double)*(float *)(iVar6 + 0x168) >> 0x20));
        FUN_0057b8e0(&local_13c,unaff_EBP,(float)iVar15,unaff_EBX,0xffffffff);
        iVar15 = iVar15 + param_4;
      }
      uVar2 = *(ushort *)(iVar6 + 0x192);
      if ((((uVar2 != 0) && (iVar17 = *(int *)(iVar6 + 0x6c), iVar17 != 4)) && (iVar17 != 7)) &&
         ((iVar17 != 9 && (iVar17 != 8)))) {
        puVar13 = &DAT_00a519fc;
        if ((~(byte)(uVar2 >> 1) & 1) == 0) {
          puVar13 = &DAT_00a61d7c;
        }
        local_170 = &DAT_00a519fc;
        if ((~(byte)uVar2 & 1) == 0) {
          local_170 = &DAT_00a61d7c;
        }
        puVar11 = &DAT_00a519fc;
        if ((~(byte)(uVar2 >> 3) & 1) == 0) {
          puVar11 = &DAT_00a61d7c;
        }
        puVar10 = &DAT_00a519fc;
        if ((~(byte)(uVar2 >> 2) & 1) == 0) {
          puVar10 = &DAT_00a61d7c;
        }
        _sprintf((char *)&local_13c,"Movement Restrictions: L:%s R:%s F:%s B:%s",puVar10,puVar11,
                 local_170,puVar13);
        FUN_0057b8e0(&local_13c,unaff_EBP,(float)iVar15,unaff_EBX,0xffffffff);
        iVar15 = iVar15 + param_4;
      }
      if (*(char *)(iVar6 + 0x191) != '\0') {
        FUN_0057b8e0("Reset Movement restrictions",unaff_EBP,(float)iVar15,unaff_EBX,0xffffffff);
        iVar15 = iVar15 + param_4;
      }
      pcVar7 = "UNDETECTED";
      if (0 < *(int *)(iVar6 + 0x1a8)) {
        pcVar7 = "";
      }
      _sprintf((char *)&local_13c,"Detection level on current target: %d (%s)",
               *(int *)(iVar6 + 0x1a8),pcVar7);
      FUN_0057b8e0(&local_13c,unaff_EBP,(float)iVar15,unaff_EBX,0xffffffff);
      if (*(char *)(iVar6 + 0x1ad) != '\0') {
        FUN_0057b8e0("Unable to buff standoff, don\'t bother next time",unaff_EBP,
                     (float)(iVar15 + param_4),unaff_EBX,0xffffffff);
      }
    }
    cVar4 = (**(code **)(*local_15c + 0x19c))();
    fVar1 = local_16c;
    if (cVar4 != '\0') {
      FUN_0057b8e0("KNOCKED DOWN/OUT",local_170,(float)(int)local_174,local_16c,0xffffffff);
      local_174 = (float)((int)local_174 + param_4);
    }
    iVar15 = FUN_005e0ee0();
    if (iVar15 == 7) {
      FUN_0057b8e0("RECOILING",local_170,(float)(int)local_174,fVar1,0xffffffff);
      local_174 = (float)((int)local_174 + param_4);
    }
    cVar4 = FUN_005e6fe0();
    if (cVar4 != '\0') {
      FUN_0057b8e0("SURFACING",local_170,(float)(int)local_174,fVar1,0xffffffff);
      local_174 = (float)((int)local_174 + param_4);
    }
  }
  else {
    FUN_0057b8e0("DISABLED",local_170,(float)(int)fVar14,fVar1,0xffffffff);
    local_174 = (float)((int)fVar14 + param_4);
  }
  if (param_3 == '\0') {
    *local_158 = local_14c;
    *local_154 = local_174;
    return;
  }
  *local_158 = local_174;
  *local_154 = local_148;
  return;
}



void FUN_0061b190(void)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  int *piVar9;
  int *piVar10;
  
  iVar4 = FUN_005e02e0(0);
  if (iVar4 != 0) {
    iVar4 = FUN_005e02e0(0);
    for (piVar9 = (int *)(iVar4 + 0x58);
        (piVar9 != (int *)0x0 && ((piVar9[1] != 0 || (*piVar9 != 0)))); piVar9 = (int *)piVar9[1]) {
      iVar4 = *piVar9;
      if (iVar4 != 0) {
        piVar10 = (int *)(iVar4 + 0x18);
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x18) + 0x18))();
        if (((iVar4 != 4) && (iVar4 = (**(code **)(*piVar10 + 0x18))(), iVar4 != 1)) &&
           (cVar3 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x5c) + 0x1c))(piVar10,0,0,0),
           cVar3 != '\0')) {
          FUN_00616db0(piVar10,0);
        }
        iVar4 = (**(code **)(*piVar10 + 0x18))();
        if (iVar4 == 1) {
          FUN_00616db0(piVar10,0);
        }
      }
    }
  }
  cVar3 = FUN_004d7f80();
  if (cVar3 != '\0') {
    iVar4 = FUN_0047df80(0);
    bVar2 = iVar4 % 100 < DAT_00b37200;
    iVar4 = FUN_005e32f0();
    if (iVar4 != 0) {
      iVar4 = FUN_005e32f0();
      for (piVar9 = (int *)(iVar4 + 0x30);
          (piVar9 != (int *)0x0 && ((piVar9[1] != 0 || (*piVar9 != 0)))); piVar9 = (int *)piVar9[1])
      {
        iVar4 = *piVar9;
        if (iVar4 != 0) {
          piVar10 = (int *)(iVar4 + 0x18);
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x18) + 0x18))();
          if (((iVar4 != 4) && (iVar4 = (**(code **)(*piVar10 + 0x18))(), iVar4 != 1)) &&
             ((cVar3 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x5c) + 0x1c))(piVar10,0,0,0)
              , cVar3 != '\0' &&
              (((iVar4 = (**(code **)(*piVar10 + 0x18))(), iVar4 != 2 &&
                (iVar4 = (**(code **)(*piVar10 + 0x18))(), iVar4 != 3)) || (bVar2)))))) {
            FUN_00616db0(piVar10,0);
          }
          iVar4 = (**(code **)(*piVar10 + 0x18))();
          if (iVar4 == 1) {
            FUN_00616db0(piVar10,0);
          }
        }
      }
    }
  }
  for (piVar9 = (int *)(**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x454))
                                 (*(int *)(in_ECX + 0x3c),1);
      (piVar9 != (int *)0x0 && ((piVar9[1] != 0 || (*piVar9 != 0)))); piVar9 = (int *)piVar9[1]) {
    iVar4 = *piVar9;
    if (iVar4 != 0) {
      iVar5 = (**(code **)(*(int *)(iVar4 + 0x18) + 0x18))();
      if ((iVar5 == 1) ||
         (cVar3 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x5c) + 0x1c))(iVar4 + 0x18,0,0,0)
         , cVar3 != '\0')) {
        FUN_00616db0(iVar4 + 0x18,0);
      }
    }
  }
  iVar4 = FUN_004d8950(0);
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      iVar6 = FUN_004d88f0(iVar5,0);
      if (iVar6 != 0) {
        iVar7 = *(int *)(iVar6 + 8);
        switch(*(undefined1 *)(iVar7 + 4)) {
        case 0x15:
          iVar7 = FUN_009832e6(iVar7,0,&PTR_PTR_00b03248,&PTR_PTR_00b084f0,0);
          if ((iVar7 != 0) && (*(int *)(iVar7 + 100) != 0)) {
            FUN_00616db0(*(int *)(iVar7 + 100) + 0x18,iVar6);
            goto LAB_0061b3fb;
          }
          break;
        case 0x28:
          iVar7 = FUN_009832e6(iVar7,0,&PTR_PTR_00b03248,&PTR_PTR_00b0320c,0);
          if (iVar7 != 0) {
            FUN_00616db0(iVar7 + 0x24,iVar6);
          }
        }
        FUN_00484470();
        FUN_00401f20(iVar6);
      }
LAB_0061b3fb:
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  if (*(int *)(in_ECX + 0xa0) != 0) {
    FUN_0041a610(0);
  }
  if (*(int *)(in_ECX + 0x9c) != 0) {
    FUN_0041a610(0);
  }
  if (*(int *)(in_ECX + 0x90) != 0) {
    FUN_0041a610(0);
  }
  if (*(int *)(in_ECX + 0x94) != 0) {
    FUN_0041a610(0);
  }
  if (*(int *)(in_ECX + 0x98) != 0) {
    FUN_0041a610(0);
    if ((**(int **)(in_ECX + 0x98) != 0) && (iVar4 = **(int **)(in_ECX + 0x98) + 0xc, iVar4 != 0)) {
      while (((*(int *)(iVar4 + 8) != 0 || (*(int *)(iVar4 + 4) != 0)) &&
             (*(int *)(in_ECX + 0xa8) == 0))) {
        if (*(int *)(iVar4 + 4) != 0) {
          iVar5 = *(int *)(*(int *)(iVar4 + 4) + 0x1c);
          uVar1 = *(uint *)(iVar5 + 0x58);
          if ((uVar1 >> 0x10 & 1) != 0) {
            if ((uVar1 & 0x70000) == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(undefined4 *)(iVar5 + 0x60);
            }
            uVar8 = FUN_0046b250(uVar8);
            *(undefined4 *)(in_ECX + 0xa8) = uVar8;
          }
        }
        if (*(int *)(iVar4 + 8) == 0) {
          return;
        }
        iVar4 = *(int *)(iVar4 + 8) + -4;
        if (iVar4 == 0) {
          return;
        }
      }
    }
  }
  return;
}



void FUN_0061b550(void)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  undefined1 uStack_21;
  ushort local_20 [2];
  uint local_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int local_4;
  
  FUN_00567f70();
  local_1c = 0;
  iVar7 = 0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    FUN_004534d0(&local_4,4);
    if (local_4 != 0x4b4f4c42) {
      puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\AI\\CombatController.cpp",0x28b5,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar4 = (int *)FUN_0046b250(*puVar1);
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\AI\\CombatController.cpp",0x28b5,*puVar1,uVar5);
      }
    }
    iVar7 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_1c,2);
  }
  FUN_0046ac80(local_20,2);
  iVar8 = 0;
  if (local_20[0] != 0) {
    do {
      iStack_10 = 0;
      iStack_c = 0;
      uStack_21 = 0;
      FUN_0045ba00(&iStack_14,4);
      FUN_004534d0(&iStack_18,4);
      if (iStack_18 < 0) {
        iStack_18 = 0;
      }
      if (0x1d < *(byte *)(DAT_00b33b00 + 0x7c)) {
        FUN_004534d0(&uStack_21,1);
      }
      if (0x28 < *(byte *)(DAT_00b33b00 + 0x7c)) {
        FUN_004534d0(&iStack_10,4);
        FUN_004534d0(&iStack_c,4);
      }
      if (iStack_14 != 0) {
        piVar4 = (int *)FUN_00401f00(0x14);
        *piVar4 = iStack_14;
        piVar4[1] = iStack_18;
        *(undefined1 *)(piVar4 + 2) = uStack_21;
        piVar4[3] = iStack_10;
        piVar4[4] = iStack_c;
        FUN_0067b1e0(piVar4);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(uint)local_20[0]);
  }
  FUN_0046ac80(in_ECX + 0x44,4);
  FUN_0046ac80(in_ECX + 0x48,1);
  FUN_0046ac80(in_ECX + 0x49,1);
  FUN_0046ac80(in_ECX + 0x4a,1);
  FUN_0046ac80(in_ECX + 0x4b,1);
  FUN_0046ac80(in_ECX + 0x4c,1);
  FUN_0046ac80(in_ECX + 0x4d,1);
  FUN_0046ac80(in_ECX + 0x4e,1);
  FUN_0046ac80(in_ECX + 0x4f,1);
  FUN_004534d0(in_ECX + 0x50,4);
  FUN_0046ac80(in_ECX + 0x54,4);
  FUN_0046ac80(in_ECX + 0x58,1);
  FUN_0046ac80(in_ECX + 0x59,1);
  FUN_004534d0(in_ECX + 0x6c,4);
  FUN_004534d0(in_ECX + 0x70,4);
  FUN_004534d0(in_ECX + 0x74,4);
  FUN_0046ac80(in_ECX + 0xb0,0x14);
  FUN_0046ac80(in_ECX + 0xcc,4);
  FUN_0046ac80(in_ECX + 0xd0,4);
  FUN_004534d0(in_ECX + 0xd4,0xc);
  FUN_004534d0(in_ECX + 0xe0,0xc);
  FUN_004534d0(in_ECX + 0xec,0xc);
  FUN_004534d0(in_ECX + 0xf8,0xc);
  iStack_8 = 0;
  FUN_0045ba00(&iStack_8,4);
  if (iStack_8 != 0) {
    *(int *)(in_ECX + 300) = iStack_8;
  }
  FUN_004534d0(in_ECX + 0x164,0xc);
  FUN_0046ac80(in_ECX + 0x114,1);
  if (0x39 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(in_ECX + 0x170,4);
  }
  if (0x3c < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(in_ECX + 0x17d,1);
  }
  if (0x5e < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_006181f0(in_ECX + 0x5c);
    FUN_006181f0(in_ECX + 0x60);
    FUN_006181f0(in_ECX + 100);
    iStack_c = 0;
    FUN_0045ba00(&iStack_c,4);
    *(int *)(in_ECX + 0x7c) = iStack_c;
    iStack_c = 0;
    FUN_0045ba00(&iStack_c,4);
    *(int *)(in_ECX + 0x80) = iStack_c;
    iStack_c = 0;
    FUN_0045ba00(&iStack_c,4);
    *(int *)(in_ECX + 0x84) = iStack_c;
    iStack_c = 0;
    FUN_0045ba00(&iStack_c,4);
    *(int *)(in_ECX + 0x88) = iStack_c;
    iStack_c = 0;
    FUN_0045ba00(&iStack_c,4);
    *(int *)(in_ECX + 0x8c) = iStack_c;
    FUN_00618290(in_ECX + 0x90);
    FUN_00618290(in_ECX + 0x94);
    FUN_00618290(in_ECX + 0x98);
    FUN_00618290(in_ECX + 0x9c);
    FUN_00618290(in_ECX + 0xa0);
  }
  if (0x65 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_006181f0(in_ECX + 0x68);
  }
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar2 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar6 = local_1c & 0xffff;
      if (uVar6 + iVar7 < uVar2) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar2 - uVar6) - iVar7,".\\AI\\CombatController.cpp",0x2922,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar2 < uVar6 + iVar7) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar6 - uVar2) + iVar7,".\\AI\\CombatController.cpp",0x2922,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar4 = (int *)FUN_0046b250(*puVar1);
      uVar6 = (local_1c & 0xffff) + iVar7;
      if (uVar6 < uVar2) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar2 - (local_1c & 0xffff)) - iVar7,".\\AI\\CombatController.cpp",0x2922,
                     *puVar1,uVar5);
        return;
      }
      if (uVar2 < uVar6) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_1c & 0xffff) - uVar2) + iVar7,".\\AI\\CombatController.cpp",0x2922,
                     *puVar1,uVar5);
        return;
      }
    }
  }
  return;
}



void FUN_0061bb40(byte param_1)

{
  FUN_00618350();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0061bb60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c338e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00568e10(uVar2);
  *in_ECX = &PTR_FUN_00a70a14;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0xbf800000;
  in_ECX[0x57] = 0;
  in_ECX[0x3a] = 0xbf800000;
  in_ECX[0x58] = 0;
  in_ECX[0x38] = 0;
  local_4 = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 0xbf800000;
  in_ECX[0x40] = 0xbf800000;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  in_ECX[0x43] = 0xbf800000;
  in_ECX[0x4f] = 0xbf800000;
  in_ECX[0x4d] = 0;
  in_ECX[0x4e] = 0;
  in_ECX[0x50] = 0;
  in_ECX[0x51] = 0;
  in_ECX[0x52] = 0xbf800000;
  in_ECX[0x55] = 0xbf800000;
  in_ECX[0x53] = 0;
  in_ECX[0x54] = 0;
  in_ECX[0x59] = 0;
  in_ECX[0x5a] = 0;
  in_ECX[0x5b] = 0xbf800000;
  in_ECX[0x6c] = 0;
  in_ECX[0x6d] = 0;
  in_ECX[0x6e] = 0xbf800000;
  DAT_00b3b914 = DAT_00b3b914 + 1;
  in_ECX[99] = 0;
  in_ECX[0xf] = param_1;
  puVar3 = (undefined4 *)FUN_00401f00(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  in_ECX[0x10] = puVar3;
  FUN_005661e0(0xc);
  in_ECX[7] = in_ECX[7] | 6;
  iVar4 = FUN_00401f00(0xc);
  local_4._0_1_ = 1;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_005696b0();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00569750(0);
  FUN_005697f0(param_2);
  FUN_00565e00(iVar4);
  if (iVar4 != 0) {
    FUN_00569730();
    FUN_00401f20(iVar4);
  }
  iVar4 = FUN_00401f00(0xc);
  local_4._0_1_ = 2;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00569e40();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00565ec0(iVar4);
  FUN_00569e90(0);
  FUN_00569ec0(param_2);
  if (iVar4 != 0) {
    FUN_0060d0a0();
    FUN_00401f20(iVar4);
  }
  in_ECX[0x11] = 0;
  *(undefined1 *)(in_ECX + 0x12) = 0;
  *(undefined1 *)((int)in_ECX + 0x49) = 0;
  in_ECX[0x33] = 0xbf800000;
  *(undefined1 *)((int)in_ECX + 0x4a) = 0;
  in_ECX[0x15] = 0xbf800000;
  *(undefined1 *)((int)in_ECX + 0x4b) = 0;
  *(undefined1 *)(in_ECX + 0x13) = 0;
  *(undefined1 *)((int)in_ECX + 0x4d) = 0;
  *(undefined1 *)((int)in_ECX + 0x4e) = 0;
  *(undefined1 *)((int)in_ECX + 0x4f) = 0;
  in_ECX[0x14] = 0xff;
  *(undefined1 *)(in_ECX + 0x16) = 0;
  *(undefined1 *)((int)in_ECX + 0x59) = 0;
  *(undefined1 *)(in_ECX + 0x31) = 0;
  fVar5 = (float10)FUN_00547540(0x3f800000);
  FUN_00612ea0((float)fVar5);
  in_ECX[0x32] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0xd;
  in_ECX[0x1d] = 3;
  in_ECX[0x1e] = 3;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x60] = 3;
  FUN_0061b190();
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x34] = 0x100;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0xbf800000;
  in_ECX[0x3d] = 0xbf800000;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0xbf800000;
  in_ECX[0x3a] = 0xbf800000;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x41] = in_ECX[0x11];
  in_ECX[0x42] = 0x3f800000;
  in_ECX[0x43] = 0xbf800000;
  in_ECX[0x6e] = 0xbf800000;
  in_ECX[0x6c] = 0;
  in_ECX[0x6d] = 0;
  *(undefined1 *)((int)in_ECX + 0x115) = 1;
  in_ECX[0x46] = 0;
  in_ECX[0x47] = 0;
  *(undefined1 *)((int)in_ECX + 0x116) = 0;
  *(undefined1 *)(in_ECX + 0x4c) = 0;
  *(undefined1 *)((int)in_ECX + 0x131) = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x4b] = 0;
  *(undefined1 *)(in_ECX + 0x45) = 0;
  in_ECX[0x48] = DAT_00b3f9a8;
  in_ECX[0x49] = DAT_00b3f9ac;
  in_ECX[0x4a] = DAT_00b3f9b0;
  *(undefined1 *)(in_ECX + 0x56) = 0;
  *(undefined1 *)((int)in_ECX + 0x159) = 0;
  *(undefined1 *)((int)in_ECX + 0x15a) = 0;
  iVar4 = in_ECX[0x58];
  while (iVar4 != 0) {
    iVar4 = *(int *)(in_ECX[0x58] + 4);
    FUN_00401f20(in_ECX[0x58]);
    in_ECX[0x58] = iVar4;
  }
  in_ECX[0x57] = 0;
  in_ECX[0x5c] = 0;
  in_ECX[0x61] = 0xbf800000;
  in_ECX[0x5e] = 0;
  in_ECX[0x62] = 0xbf800000;
  *(undefined1 *)(in_ECX + 0x5d) = 0;
  *(undefined1 *)((int)in_ECX + 0x17d) = 0;
  *(undefined1 *)((int)in_ECX + 0x17e) = 0;
  *(undefined1 *)((int)in_ECX + 0x17f) = 0;
  *(undefined1 *)(in_ECX + 0x5f) = 0;
  *(undefined1 *)((int)in_ECX + 0x15b) = 0;
  in_ECX[0x6a] = 0;
  FUN_00616190(param_2,param_3,param_4,0,0);
  in_ECX[6] = 0xc;
  iVar4 = 0;
  do {
    if ((&DAT_00b15198)[iVar4] == 9) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  if (iVar4 < 2) {
    (**(code **)(**(int **)(in_ECX[0xf] + 0x58) + 0x17c))(iVar4);
  }
  *(undefined2 *)((int)in_ECX + 0x192) = 0;
  in_ECX[0x66] = 0;
  *(undefined1 *)(in_ECX + 0x65) = 0;
  in_ECX[0x67] = 0;
  *(undefined1 *)((int)in_ECX + 0x195) = 0;
  in_ECX[0x68] = 0;
  *(undefined1 *)((int)in_ECX + 0x196) = 0;
  *(undefined1 *)((int)in_ECX + 0x197) = 0;
  *(undefined1 *)(in_ECX + 100) = 0;
  *(undefined1 *)((int)in_ECX + 0x191) = 1;
  *(undefined1 *)(in_ECX + 0x69) = 0;
  iVar4 = DAT_00b3b910 % 10;
  DAT_00b3b910 = DAT_00b3b910 + 1;
  fVar1 = (float)iVar4 * 0.1;
  in_ECX[0x59] = in_ECX[0x11];
  in_ECX[0x5a] = fVar1;
  in_ECX[0x5b] = 0xbf800000;
  in_ECX[0x50] = in_ECX[0x11];
  in_ECX[0x51] = fVar1;
  in_ECX[0x52] = 0xbf800000;
  in_ECX[0x4d] = in_ECX[0x11];
  in_ECX[0x4e] = fVar1;
  in_ECX[0x4f] = 0xbf800000;
  in_ECX[0x53] = in_ECX[0x11];
  in_ECX[0x54] = fVar1;
  in_ECX[0x55] = 0xbf800000;
  *(undefined1 *)(in_ECX + 0x6b) = 0xff;
  *(undefined1 *)((int)in_ECX + 0x1ad) = 0;
  *(undefined1 *)((int)in_ECX + 0x1ae) = 0;
  *(undefined1 *)(in_ECX + 0x6f) = 0;
  *(undefined1 *)((int)in_ECX + 0x1bd) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0061c130(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  undefined4 *in_ECX;
  int *piVar7;
  int *unaff_FS_OFFSET;
  int local_1c;
  int local_18 [2];
  undefined1 local_10 [4];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c33b8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a70a14;
  DAT_00b3b914 = DAT_00b3b914 + -1;
  local_4 = 0;
  cVar5 = FUN_0045a500(uVar6);
  if (((cVar5 == '\0') && (in_ECX[0xf] != 0)) && (cVar5 = FUN_005e5670(), cVar5 != '\0')) {
    FUN_005f4ae0(0);
  }
  iVar1 = DAT_00b333c4;
  cVar5 = FUN_00613670(DAT_00b333c4);
  if (cVar5 != '\0') {
    *(int *)(iVar1 + 0x7a0) = *(int *)(iVar1 + 0x7a0) + -1;
  }
  DAT_00b3b910 = DAT_00b3b910 + -1;
  if (DAT_00b3b910 < 0) {
    DAT_00b3b910 = 0;
  }
  iVar1 = in_ECX[99];
  *(undefined1 *)(in_ECX + 0x69) = 1;
  if (iVar1 != 0) {
    uVar6 = 0;
    if (*(uint *)(iVar1 + 4) != 0) {
      piVar7 = *(int **)(iVar1 + 8);
      do {
        if (*piVar7 != 0) {
          local_18[0] = (*(int **)(iVar1 + 8))[uVar6];
          goto joined_r0x0061c1fe;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (uVar6 < *(uint *)(iVar1 + 4));
    }
    local_18[0] = 0;
joined_r0x0061c1fe:
    while (local_18[0] != 0) {
      local_1c = 0;
      FUN_00452600(local_18,local_10,&local_1c);
      iVar1 = local_1c;
      if (local_1c != 0) {
        FUN_006b7240();
        FUN_006b73e0();
        FUN_00401f20(iVar1);
      }
    }
    FUN_007c2a40();
    if ((undefined4 *)in_ECX[99] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)in_ECX[99])(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x10];
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != (undefined4 *)0x0) {
      FUN_006162d0(*puVar3);
      puVar3 = (undefined4 *)*puVar2;
    }
  }
  if (in_ECX[0x10] != 0) {
    FUN_00401f20(in_ECX[0x10]);
  }
  if (in_ECX[0x46] != 0) {
    FUN_00612c70();
  }
  piVar7 = (int *)in_ECX[0x18];
  while ((piVar4 = piVar7, piVar4 != (int *)0x0 &&
         ((piVar7 = (int *)piVar4[1], piVar7 != (int *)0x0 || (*piVar4 != 0))))) {
    iVar1 = *piVar4;
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 4) != 0) && (iVar1 = *(int *)(iVar1 + 4), iVar1 != 0)) {
        FUN_00484470();
        FUN_00401f20(iVar1);
      }
      if (*(int *)*piVar4 != 0) {
        FUN_00419f10(1);
      }
      FUN_00401f20(*piVar4);
    }
  }
  if (in_ECX[0x18] != 0) {
    FUN_004526e0();
    FUN_00401f20(in_ECX[0x18]);
  }
  if (in_ECX[0x1a] != 0) {
    FUN_004526e0();
    FUN_00401f20(in_ECX[0x1a]);
  }
  piVar7 = (int *)in_ECX[0x19];
  while ((piVar4 = piVar7, piVar4 != (int *)0x0 &&
         ((piVar7 = (int *)piVar4[1], piVar7 != (int *)0x0 || (*piVar4 != 0))))) {
    iVar1 = *piVar4;
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 4) != 0) && (iVar1 = *(int *)(iVar1 + 4), iVar1 != 0)) {
        FUN_00484470();
        FUN_00401f20(iVar1);
      }
      if (*(int *)*piVar4 != 0) {
        FUN_00419f10(1);
      }
      FUN_00401f20(*piVar4);
    }
  }
  if (in_ECX[0x19] != 0) {
    FUN_004526e0();
    FUN_00401f20(in_ECX[0x19]);
  }
  piVar7 = (int *)in_ECX[0x17];
  while ((piVar4 = piVar7, piVar4 != (int *)0x0 &&
         ((piVar7 = (int *)piVar4[1], piVar7 != (int *)0x0 || (*piVar4 != 0))))) {
    iVar1 = *piVar4;
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 4) != 0) && (iVar1 = *(int *)(iVar1 + 4), iVar1 != 0)) {
        FUN_00484470();
        FUN_00401f20(iVar1);
      }
      if (*(int *)*piVar4 != 0) {
        FUN_00419f10(1);
      }
      FUN_00401f20(*piVar4);
    }
  }
  if (in_ECX[0x17] != 0) {
    FUN_004526e0();
    FUN_00401f20(in_ECX[0x17]);
  }
  if (in_ECX[0x29] != 0) {
    FUN_004526e0();
    FUN_00401f20(in_ECX[0x29]);
  }
  if ((int *)in_ECX[0x25] != (int *)0x0) {
    if (*(int *)in_ECX[0x25] != 0) {
      FUN_00419f10(1);
    }
    FUN_00401f20(in_ECX[0x25]);
  }
  if ((int *)in_ECX[0x26] != (int *)0x0) {
    if (*(int *)in_ECX[0x26] != 0) {
      FUN_00419f10(1);
    }
    FUN_00401f20(in_ECX[0x26]);
  }
  if ((int *)in_ECX[0x27] != (int *)0x0) {
    if (*(int *)in_ECX[0x27] != 0) {
      FUN_00419f10(1);
    }
    FUN_00401f20(in_ECX[0x27]);
  }
  if ((int *)in_ECX[0x24] != (int *)0x0) {
    if (*(int *)in_ECX[0x24] != 0) {
      FUN_00419f10(1);
    }
    FUN_00401f20(in_ECX[0x24]);
  }
  if ((int *)in_ECX[0x28] != (int *)0x0) {
    if (*(int *)in_ECX[0x28] != 0) {
      FUN_00419f10(1);
    }
    FUN_00401f20(in_ECX[0x28]);
  }
  iVar1 = in_ECX[0x58];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[0x58] + 4);
    FUN_00401f20(in_ECX[0x58]);
    in_ECX[0x58] = iVar1;
  }
  in_ECX[0x57] = 0;
  local_4 = 0xffffffff;
  FUN_00568640();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0061c550(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  undefined4 uVar5;
  
  if (*(int *)(in_ECX + 0x74) == 1) {
    cVar2 = FUN_005e5670();
    if (cVar2 == '\0') {
      *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 0x74);
      *(undefined4 *)(in_ECX + 0x74) = 3;
    }
    iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0xf8))(1);
    if (iVar3 == 0) {
      iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0xec))(1);
    }
    if (iVar3 != 0) {
      bVar1 = false;
      iVar3 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))();
      if (iVar3 != 0) {
        uVar5 = 1;
        (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(1);
        iVar3 = FUN_004706e0(uVar5);
        if (iVar3 != 0) {
          uVar5 = 1;
          (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(1);
          iVar3 = FUN_004706e0(uVar5);
          if (*(int *)(iVar3 + 0x44) != 1) {
            bVar1 = true;
          }
        }
      }
      fVar4 = (float10)FUN_00484850(0);
      if ((fVar4 < (float10)0.0 == (fVar4 == (float10)0.0)) || (bVar1)) {
        iVar3 = FUN_006135f0();
        if (iVar3 != 0) {
          FUN_006135f0();
          iVar3 = FUN_005e0ee0();
          if (iVar3 == 7) {
            if (bVar1) {
              return;
            }
            FUN_005f4ae0(0);
            *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 0x74);
            *(undefined4 *)(in_ECX + 0x74) = 3;
            FUN_006213d0();
            return;
          }
        }
        if (!bVar1) {
          FUN_006191b0();
          return;
        }
      }
      else {
        FUN_005f4ae0(0);
        *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 0x74);
        *(undefined4 *)(in_ECX + 0x74) = 3;
      }
    }
  }
  return;
}



void FUN_0061c680(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xac) = param_1;
  if (*(int *)(in_ECX + 0x70) != 10) {
    if (DAT_00b3b908 != '\0') {
      uVar1 = FUN_004da2a0("Switch weapons");
      FUN_00579b60("%.20s is going to %s!",uVar1);
    }
    *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
  }
  *(undefined4 *)(in_ECX + 0x70) = 10;
  FUN_00619420();
  *(undefined1 *)(in_ECX + 0x114) = 1;
  return;
}



undefined1 * FUN_0061c6e0(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int in_ECX;
  int *piVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  undefined1 auStack_100 [188];
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  uint uStack_30;
  int *piStack_1c;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c33eb;
  local_c = *unaff_FS_OFFSET;
  uStack_30 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar9 = auStack_100;
  if (*(char *)(in_ECX + 0x115) != '\0') {
    if (*(int *)(in_ECX + 0x118) == 0) {
      piStack_3c = *(int **)(in_ECX + 0x3c);
      piStack_34 = (int *)0x0;
      uStack_38 = 1;
      uStack_40 = 0x61c736;
      uStack_40 = (**(code **)(*piStack_3c + 0x174))();
      uStack_44 = 0x61c73c;
      iVar6 = FUN_0067d820();
      if (iVar6 != 0) {
        piVar10 = *(int **)(in_ECX + 0x3c);
        piStack_34 = (int *)0x61c753;
        FUN_004bef40();
        piStack_34 = (int *)0x61c761;
        (**(code **)(*piVar10 + 0x174))();
        piStack_34 = (int *)0x61c7a6;
        fVar11 = (float10)FUN_00982c30();
        if ((float)fVar11 < 1000.0 != ((float)fVar11 == 1000.0)) {
          piVar10 = *(int **)(in_ECX + 0x3c);
          piStack_34 = (int *)0x61c7c9;
          piStack_34 = (int *)FUN_004bef40();
          uStack_38 = 0x61c7d6;
          uStack_38 = (**(code **)(*piVar10 + 0x174))();
          uStack_40 = 0x61c7dd;
          piStack_3c = piVar10;
          cVar5 = FUN_00687c30();
          if (cVar5 != '\0') {
            piStack_34 = (int *)0x8;
            uStack_38 = 0x61c7ef;
            piStack_1c = (int *)FUN_00401f00();
            if (piStack_1c == (int *)0x0) {
              piStack_1c = (int *)0x0;
            }
            else {
              *piStack_1c = 0;
              piStack_1c[1] = 0;
            }
            uStack_38 = 0x447a0000;
            piStack_3c = (int *)0x61c81d;
            piStack_34 = piStack_1c;
            FUN_004e80b0();
            if (piStack_1c != (int *)0x0) {
              piStack_34 = (int *)0x61c82c;
              cVar5 = FUN_0046cb60();
              piVar10 = piStack_1c;
              if (cVar5 == '\0') {
                piStack_34 = (int *)0x8;
                uStack_38 = 0x61c837;
                puVar7 = (undefined4 *)FUN_00401f00();
                if (puVar7 == (undefined4 *)0x0) {
                  puVar7 = (undefined4 *)0x0;
                }
                else {
                  *puVar7 = 0;
                  puVar7[1] = 0;
                }
                *(undefined4 **)(in_ECX + 0x118) = puVar7;
              }
              do {
                if ((piVar10[1] == 0) && (*piVar10 == 0)) break;
                if (*piVar10 != 0) {
                  piStack_34 = (int *)0x61c870;
                  cVar5 = FUN_0067ed70();
                  if (cVar5 == '\0') {
                    piStack_34 = (int *)0xc;
                    uStack_38 = 0x61c87b;
                    puVar7 = (undefined4 *)FUN_00401f00();
                    uStack_4 = 0;
                    if (puVar7 == (undefined4 *)0x0) {
                      puVar7 = (undefined4 *)0x0;
                    }
                    else {
                      piStack_34 = (int *)0x61c89a;
                      puVar8 = (undefined4 *)FUN_004bef40();
                      uVar2 = *puVar8;
                      piStack_34 = (int *)0x61c8a7;
                      iVar6 = FUN_004bef40();
                      uVar3 = *(undefined4 *)(iVar6 + 4);
                      piStack_34 = (int *)0x61c8b5;
                      iVar6 = FUN_004bef40();
                      uVar4 = *(undefined4 *)(iVar6 + 8);
                      *puVar7 = uVar2;
                      puVar7[1] = uVar3;
                      puVar7[2] = uVar4;
                    }
                    uStack_4 = 0xffffffff;
                    uStack_38 = 0x61c8ec;
                    piStack_34 = puVar7;
                    FUN_00446cb0();
                  }
                }
                piVar1 = piVar10 + 1;
                piVar10 = (int *)*piVar1;
              } while ((int *)*piVar1 != (int *)0x0);
              piStack_34 = (int *)0x61c8fe;
              FUN_004526e0();
              uStack_38 = 0x61c904;
              piStack_34 = piStack_1c;
              FUN_00401f20();
            }
          }
        }
      }
      if (*(int *)(in_ECX + 0x118) == 0) {
        piStack_34 = (int *)0x61c918;
        puVar9 = (undefined1 *)FUN_005e1e90();
        if ((char)puVar9 == '\0') {
          *(undefined1 *)(in_ECX + 0x115) = 0;
          *unaff_FS_OFFSET = local_c;
          return puVar9;
        }
      }
    }
    piStack_34 = (int *)0x61c93d;
    FUN_006160b0();
    piStack_34 = (int *)0xb;
    uStack_38 = 0x61c946;
    FUN_00619920();
    piStack_34 = (int *)0x61c94e;
    cVar5 = FUN_005e1e90();
    if (cVar5 == '\0') {
      uVar2 = 0x40400000;
    }
    else {
      uVar2 = 0x40a00000;
    }
    puVar9 = (undefined1 *)0x1;
    *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0x44);
    *(undefined4 *)(in_ECX + 0xd8) = uVar2;
    *(undefined4 *)(in_ECX + 0xdc) = 0xbf800000;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061c9a0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  float10 fVar4;
  int local_4;
  
  FUN_005e02b0();
  iVar1 = *(int *)(in_ECX + 0x6c);
  local_4 = in_ECX;
  if (iVar1 != 0xc) {
    if (iVar1 == 4) {
      *(undefined4 *)(in_ECX + 0xcc) = 0xbf800000;
    }
    if (iVar1 == 6) {
      *(undefined4 *)(in_ECX + 300) = 0;
    }
    iVar2 = _DAT_00b36f70;
    if (iVar1 == 4) {
      local_4 = _DAT_00b36f70;
      *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(in_ECX + 0x44);
      *(int *)(in_ECX + 0xf0) = iVar2;
      *(undefined4 *)(in_ECX + 0xf4) = 0xbf800000;
    }
    iVar1 = *(int *)(in_ECX + 0x6c);
    if ((((iVar1 != 4) && (iVar1 != 7)) && (iVar1 != 9)) && ((iVar1 != 8 && (iVar1 != 0xc)))) {
      *(undefined1 *)(in_ECX + 0x191) = 1;
    }
  }
  *(undefined4 *)(in_ECX + 0x6c) = 0xc;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c4))(0x101,1);
  fVar3 = (float10)FUN_005e5850(3);
  fVar4 = (float10)0.5;
  if (fVar4 < fVar3) {
    fVar4 = (float10)FUN_005e5850(3);
  }
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(in_ECX + 0x44);
  *(float *)(in_ECX + 0xf0) = (float)fVar4;
  *(undefined4 *)(in_ECX + 0xf4) = 0xbf800000;
  *(int *)(in_ECX + 0x11c) = local_4;
  return;
}



void FUN_0061caa0(undefined4 param_1,float param_2,float param_3)

{
  int iVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int in_ECX;
  float10 fVar5;
  
  fVar2 = param_2;
  if ((((*(int *)(in_ECX + 0x6c) == 0xe) || (*(int *)(in_ECX + 0x6c) == 0x10)) || (param_3 <= 0.0))
     || ((param_2 <= 0.0 ||
         (fVar5 = (float10)FUN_00615980(), (float10)param_3 < fVar5 != ((float10)param_3 == fVar5)))
        )) {
    return;
  }
  iVar1 = *(int *)(in_ECX + 0x3c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x58) != 0)) {
    *(float *)(in_ECX + 0x170) = param_3;
    uVar4 = FUN_006135f0(0);
    cVar3 = FUN_006131d0(iVar1,uVar4);
    if ((cVar3 != '\0') && ((~(*(byte *)(in_ECX + 0x192) >> 1) & 1) != 0)) {
      FUN_00614bb0();
      fVar5 = (float10)FUN_005e5850(4);
      if (param_2 < (float)fVar5) {
        param_2 = (float)fVar5;
      }
      *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0x44);
      *(float *)(in_ECX + 0xd8) = param_2;
      *(float *)(in_ECX + 0xdc) = fVar2;
      FUN_00619920(0x10);
      FUN_006160b0();
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c4))(0x102,1);
      return;
    }
    *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0x44);
    *(float *)(in_ECX + 0xd8) = param_2;
    *(undefined4 *)(in_ECX + 0xdc) = 0xbf800000;
    FUN_00619920(0xe);
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x180))(0);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061cc00(void)

{
  float fVar1;
  int *piVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  undefined4 uVar7;
  float *pfVar8;
  int iVar9;
  int in_ECX;
  float10 fVar10;
  
  iVar9 = *(int *)(in_ECX + 0x6c);
  if ((iVar9 == 0xe) || (iVar9 == 0x10)) {
    bVar3 = *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0xd4) <= *(float *)(in_ECX + 0xd8);
    piVar2 = *(int **)(in_ECX + 0x3c);
    if (iVar9 == 0x10) {
      if (*(float *)(in_ECX + 0x184) < 0.0) {
        uVar7 = FUN_006135f0(0);
        fVar10 = (float10)FUN_00612f50(piVar2,uVar7);
        *(float *)(in_ECX + 0x184) = (float)fVar10;
      }
      if (*(float *)(in_ECX + 0x170) < *(float *)(in_ECX + 0x184) ==
          (*(float *)(in_ECX + 0x170) == *(float *)(in_ECX + 0x184))) {
        if ((DAT_00b333b8 == '\0') &&
           (pfVar8 = (float *)(**(code **)(**(int **)(in_ECX + 0x3c) + 0x174))(),
           fVar1 = *(float *)(in_ECX + 0x198) - *pfVar8,
           fVar4 = *(float *)(in_ECX + 0x19c) - pfVar8[1],
           fVar5 = *(float *)(in_ECX + 0x1a0) - pfVar8[2],
           _DAT_00b372c8 * _DAT_00b372c8 <= fVar5 * fVar5 + fVar1 * fVar1 + fVar4 * fVar4)) {
          FUN_00614bb0();
        }
        if ((bVar3) && ((~(*(byte *)(in_ECX + 0x192) >> 1) & 1) != 0)) {
          return;
        }
        if ((~(*(byte *)(in_ECX + 0x192) >> 1) & 1) == 0) {
          (**(code **)(*piVar2 + 0x330))();
          FUN_006160b0();
        }
        fVar1 = *(float *)(in_ECX + 0xdc);
        fVar10 = (float10)FUN_005e5850(7);
        if (fVar10 < (float10)fVar1) {
          *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0x44);
          *(float *)(in_ECX + 0xd8) = fVar1;
          *(undefined4 *)(in_ECX + 0xdc) = 0xbf800000;
          FUN_00619920(0xe);
          return;
        }
      }
    }
    else {
      if (bVar3) {
        cVar6 = (**(code **)(*(int *)piVar2[0x16] + 0x240))
                          (piVar2,*(undefined4 *)(in_ECX + 0x170),0x201);
      }
      else {
        cVar6 = '\x01';
      }
      iVar9 = (**(code **)(*(int *)piVar2[0x16] + 0x184))();
      if (iVar9 == 0) {
        return;
      }
      if (*(char *)(iVar9 + 0x20) != '\f') {
        return;
      }
      if ((cVar6 == '\0') && (cVar6 = (**(code **)(*(int *)piVar2[0x16] + 200))(), cVar6 == '\0')) {
        return;
      }
    }
    iVar9 = (**(code **)(*piVar2 + 0x330))();
    if (iVar9 != 0) {
      uVar7 = 9;
      (**(code **)(*piVar2 + 0x330))(9);
      FUN_00612da0(uVar7);
      (**(code **)(*piVar2 + 0x330))();
      FUN_006160b0();
      uVar7 = 0;
      (**(code **)(*piVar2 + 0x330))(0);
      FUN_00619920(uVar7);
    }
  }
  return;
}



void FUN_0061ce40(void)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  code *pcVar10;
  float *pfVar11;
  char *pcVar12;
  int in_ECX;
  undefined4 unaff_EDI;
  float10 fVar13;
  float10 fVar14;
  float fStack_10;
  
  cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x25c))();
  if (cVar1 != '\0') {
    return;
  }
  iVar4 = FUN_006135f0();
  if (iVar4 == 0) {
    return;
  }
  FUN_006135f0();
  iVar4 = FUN_005e0ee0();
  fVar13 = (float10)FUN_005f4880(iVar4 == 2);
  FUN_005e3590((float)fVar13);
  uVar5 = FUN_009828c0();
  uVar5 = FUN_005e0f50(uVar5);
  fVar13 = (float10)FUN_00546a40(uVar5);
  fStack_10 = (float)fVar13;
  if (fStack_10 < 0.0) {
    fStack_10 = 0.0;
  }
  iVar6 = *(int *)(in_ECX + 0x70);
  if (((iVar6 == 2) || (iVar6 == 4)) &&
     ((*(char *)(in_ECX + 0x158) == '\0' ||
      ((*(char *)(in_ECX + 0x159) != '\0' || (*(char *)(in_ECX + 0x15b) != '\0')))))) {
    fStack_10 = fStack_10 + 50.0;
  }
  if ((((iVar6 == 0) || (iVar6 == 1)) || (iVar6 == 3)) && (*(char *)(in_ECX + 0x15a) != '\0')) {
    fStack_10 = fStack_10 + 25.0;
  }
  if (*(int *)(in_ECX + 0x74) == 2) {
    fStack_10 = fStack_10 + 10.0;
  }
  if ((((iVar6 == 0) || (iVar6 == 1)) || (iVar6 == 3)) &&
     (iVar6 = FUN_006135f0(), iVar6 != DAT_00b333c4)) {
    piVar7 = (int *)FUN_006135f0();
    cVar1 = (**(code **)(*piVar7 + 0x334))(1);
    if (cVar1 == '\0') {
      fStack_10 = fStack_10 - 100.0;
    }
  }
  iVar6 = FUN_0047df80(0);
  if (fStack_10 < (float)(iVar6 % 100)) {
    if (*(int *)(in_ECX + 0x6c) == 1) {
      return;
    }
    piVar7 = (int *)FUN_005e0f50();
    piVar9 = (int *)FUN_005e0f50();
    fVar13 = (float10)(**(code **)(*piVar7 + 0x104))();
    fVar13 = (float10)(**(code **)(*piVar9 + 0x100))((float)fVar13);
    fVar13 = (float10)FUN_00546b20((float)fVar13);
    *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0x44);
    *(float *)(in_ECX + 0xd8) = (float)fVar13;
    *(undefined4 *)(in_ECX + 0xdc) = 0xbf800000;
    FUN_006160b0();
    FUN_00619920(1);
    return;
  }
  iVar6 = FUN_005e0ee0();
  fVar13 = (float10)FUN_00615980();
  fVar14 = (float10)FUN_00615520();
  if ((*(char *)(in_ECX + 0x159) == '\0') && (*(char *)(in_ECX + 0x15a) == '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  if ((*(int *)(in_ECX + 0x70) == 2) || (*(int *)(in_ECX + 0x70) == 4)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  uVar5 = FUN_005e0f50(iVar6 == 2,iVar4 == 2,(float)fVar13,(float)fVar14,uVar5,uVar8,
                       *(undefined2 *)(in_ECX + 0x192));
  uVar2 = FUN_00546e10(uVar5);
  if (uVar2 == 0) {
    return;
  }
  iVar4 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))();
  if (iVar4 == 0) {
    return;
  }
  uVar3 = uVar2 & 0xf;
  iVar4 = 3;
  if (uVar3 == 2) {
    iVar4 = 4;
    piVar7 = (int *)FUN_005e0f50();
    piVar9 = (int *)FUN_005e0f50();
    fVar13 = (float10)(**(code **)(*piVar7 + 0xfc))();
    pcVar10 = *(code **)(*piVar9 + 0xf8);
LAB_0061d156:
    fVar13 = (float10)(*pcVar10)((float)fVar13);
    fVar13 = (float10)FUN_00546b20((float)fVar13);
  }
  else {
    if (uVar3 == 4) {
      iVar4 = 5;
      piVar7 = (int *)FUN_005e0f50();
      piVar9 = (int *)FUN_005e0f50();
      fVar13 = (float10)(**(code **)(*piVar7 + 0xec))();
      pcVar10 = *(code **)(*piVar9 + 0xe8);
      goto LAB_0061d156;
    }
    if (uVar3 == 8) {
      iVar4 = 6;
      piVar7 = (int *)FUN_005e0f50();
      piVar9 = (int *)FUN_005e0f50();
      fVar13 = (float10)(**(code **)(*piVar7 + 0xec))();
      fVar13 = (float10)(**(code **)(*piVar9 + 0xe8))((float)fVar13);
      fVar13 = (float10)FUN_00546b20((float)fVar13);
    }
    else {
      piVar7 = (int *)FUN_005e0f50();
      piVar9 = (int *)FUN_005e0f50();
      fVar13 = (float10)(**(code **)(*piVar7 + 0xf4))();
      fVar13 = (float10)(**(code **)(*piVar9 + 0xf0))((float)fVar13);
      fVar13 = (float10)FUN_00546b20((float)fVar13);
    }
  }
  fStack_10 = (float)fVar13;
  uVar5 = FUN_005e5690(iVar4,0,0);
  iVar6 = FUN_0051aa00(uVar5);
  if (iVar6 != iVar4) {
    if (DAT_00b3b908 == '\0') {
      return;
    }
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 8) == 0) {
        pcVar12 = "FOREWARD";
        if ((uVar2 & 1) == 0) {
          pcVar12 = "BACK";
        }
      }
      else {
        pcVar12 = "RIGHT";
      }
    }
    else {
      pcVar12 = "LEFT";
    }
    uVar5 = FUN_004da2a0(pcVar12);
    FUN_00579b60("%.20s chose to dodge %s but has no corresponding animation",uVar5);
    return;
  }
  fVar13 = (float10)FUN_005e5850(iVar4);
  if (fStack_10 < (float)fVar13) {
    fStack_10 = (float)fVar13;
  }
  uVar5 = 1;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c4))(uVar2);
  iVar4 = FUN_0047df80(0);
  if (fStack_10._0_1_ != '\0') {
    pfVar11 = (float *)FUN_00403c00();
    uVar8 = 0x200;
    if (*pfVar11 < (float)(iVar4 % 100)) goto LAB_0061d212;
  }
  uVar8 = 0x100;
LAB_0061d212:
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c4))(uVar8,1);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0x44);
  *(undefined4 *)(in_ECX + 0xd8) = uVar5;
  *(undefined4 *)(in_ECX + 0xdc) = unaff_EDI;
  FUN_00619920(2);
  return;
}



void FUN_0061d320(void)

{
  float fVar1;
  char cVar2;
  int in_ECX;
  float10 fVar3;
  float10 fVar4;
  
  if (*(int *)(in_ECX + 0x6c) == 0xe) {
    return;
  }
  if (*(int *)(in_ECX + 0x6c) != 0x10) {
    cVar2 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x25c))();
    if (cVar2 == '\0') {
      FUN_00619920(4);
      if ((*(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0xec) <= *(float *)(in_ECX + 0xf0)) ||
         (cVar2 = FUN_005e05b0(), cVar2 != '\0')) {
        *(undefined4 *)(in_ECX + 0xd0) = 0x201;
        *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(in_ECX + 0x44);
        fVar1 = 0.0;
      }
      else {
        *(undefined4 *)(in_ECX + 0xd0) = 0x101;
        fVar3 = (float10)FUN_005e5850(3);
        fVar4 = (float10)0.5;
        if (fVar4 < fVar3) {
          fVar4 = (float10)FUN_005e5850(3);
        }
        fVar1 = (float)fVar4;
        *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(in_ECX + 0x44);
      }
      *(float *)(in_ECX + 0xf0) = fVar1;
      *(undefined4 *)(in_ECX + 0xf4) = 0xbf800000;
      *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0x44);
      *(undefined4 *)(in_ECX + 0xd8) = 0x40400000;
      *(undefined4 *)(in_ECX + 0xdc) = 0xbf800000;
      return;
    }
    return;
  }
  return;
}



void FUN_0061d410(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x6c) == 6) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x3c) + 0x58);
    if (*(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0xd4) <= *(float *)(in_ECX + 0xd8)) {
      iVar2 = (**(code **)(*piVar1 + 0x184))();
      if (iVar2 == in_ECX) {
        FUN_00619920(0);
        *(undefined4 *)(in_ECX + 300) = 0;
      }
    }
    else {
      FUN_00619920(0);
      *(undefined4 *)(in_ECX + 300) = 0;
      iVar2 = (**(code **)(*piVar1 + 0x174))();
      if ((iVar2 != 0) &&
         (iVar2 = (**(code **)(*piVar1 + 0x174))(), *(char *)(iVar2 + 0x20) != '\f')) {
        (**(code **)(*piVar1 + 0x178))(0);
        return;
      }
    }
  }
  return;
}



void FUN_0061d4b0(undefined4 param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  undefined4 unaff_EBP;
  bool bVar4;
  float10 fVar5;
  
  cVar1 = FUN_005e3270();
  if (cVar1 == '\0') {
    if (param_3 != '\0') goto LAB_0061d508;
    if (*(int *)(in_ECX + 0x70) == 7) {
      return;
    }
    if (*(int *)(in_ECX + 0x70) == 0xc) {
      return;
    }
    iVar3 = *(int *)(in_ECX + 0x6c);
    if (iVar3 == 8) {
      return;
    }
    if (iVar3 == 9) {
      return;
    }
    if (iVar3 == 5) {
      return;
    }
    bVar4 = iVar3 == 6;
  }
  else {
    bVar4 = param_3 == '\0';
  }
  if (bVar4) {
    return;
  }
LAB_0061d508:
  fVar5 = (float10)FUN_00612f50(*(undefined4 *)(in_ECX + 0x3c),param_1,0);
  if ((fVar5 < (float10)250.0 != (fVar5 == (float10)250.0)) || (param_3 != '\0')) {
    iVar3 = **(int **)(in_ECX + 0x3c);
    uVar2 = FUN_006135f0(1,1,0,0);
    (**(code **)(iVar3 + 0x318))(uVar2);
    uVar2 = FUN_005e0380(0,&PTR_PTR_00b03e00,&PTR_PTR_00b0a048,0);
    iVar3 = FUN_009832e6(uVar2);
    if (iVar3 != 0) {
      FUN_00626c90(param_1);
      *(undefined4 *)(in_ECX + 300) = param_1;
      FUN_00619920(6);
      *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0x44);
      *(undefined4 *)(in_ECX + 0xd8) = unaff_EBP;
      *(undefined4 *)(in_ECX + 0xdc) = 0xbf800000;
    }
  }
  return;
}



void FUN_0061d5b0(undefined4 param_1,undefined4 param_2)

{
  FUN_0061d4b0(param_1,param_2,1);
  return;
}



void FUN_0061d5d0(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x6c) == 9) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x3c) + 0x58);
    iVar4 = (**(code **)(*piVar1 + 0x184))();
    cVar3 = *(char *)(iVar4 + 0x20);
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x380))();
    if (iVar4 == 0) {
      iVar4 = (**(code **)(*piVar1 + 0x184))();
      if (iVar4 != in_ECX) {
        (**(code **)(*piVar1 + 0x178))(0);
      }
      if (*(int *)(in_ECX + 0x70) != 0xd) {
        *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
      }
      *(undefined4 *)(in_ECX + 0x70) = 0xd;
      FUN_0061d320();
      return;
    }
    if (cVar3 != '\x16') {
      piVar2 = *(int **)(in_ECX + 0x3c);
      iVar4 = (**(code **)(*piVar1 + 0x184))();
      if ((iVar4 == 0) || (*(char *)(iVar4 + 0x20) != '\x17')) {
        (**(code **)(*piVar2 + 0x380))();
        cVar3 = FUN_005e9a60();
        if (cVar3 == '\0') {
          (**(code **)(*piVar2 + 0x380))();
          FUN_005f80d0();
        }
                    /* WARNING: Could not recover jumptable at 0x0061d65e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 0x230))();
        return;
      }
    }
  }
  return;
}



void FUN_0061d6b0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(in_ECX + 0x70) == 8) {
    return;
  }
  iVar1 = FUN_006135f0();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_005e0f50();
    fVar6 = (float10)(**(code **)(*piVar2 + 0x154))();
    if ((float10)0.0 < fVar6) {
      piVar2 = (int *)FUN_005e0f50();
      fVar6 = (float10)FUN_00615980();
      fVar7 = (float10)(**(code **)(*piVar2 + 0x154))();
      if ((float10)(double)fVar6 < fVar7) {
        if (((param_1 == *(int *)(in_ECX + 0x94)) || (param_1 == *(int *)(in_ECX + 0x98))) ||
           (param_1 == *(int *)(in_ECX + 0x9c))) goto LAB_0061d798;
        if (*(char *)(in_ECX + 0x1ad) != '\0') {
          return;
        }
      }
      piVar2 = (int *)FUN_005e0f50();
      puVar3 = (undefined4 *)FUN_00403c00();
      fVar6 = (float10)(**(code **)(*piVar2 + 0x154))();
      fVar8 = (float)fVar6;
      uVar5 = *puVar3;
      uVar4 = FUN_006135f0(uVar5,fVar8);
      FUN_0061caa0(uVar4,uVar5,fVar8);
    }
  }
LAB_0061d798:
  *(int *)(in_ECX + 0x8c) = param_1;
  if (*(int *)(in_ECX + 0x70) != 8) {
    if (DAT_00b3b908 != '\0') {
      uVar5 = FUN_004da2a0("...just kinda stand around");
      FUN_00579b60("%.20s is going to %s!",uVar5);
    }
    *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
  }
  *(undefined4 *)(in_ECX + 0x70) = 8;
  return;
}



void FUN_0061d7e0(void)

{
  float fVar1;
  undefined4 uVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  float10 fVar7;
  undefined4 uVar8;
  
  if (*(int *)(in_ECX + 0x70) != 8) {
    return;
  }
  piVar4 = (int *)FUN_005e0f50();
  fVar7 = (float10)(**(code **)(*piVar4 + 0x154))();
  fVar1 = (float)fVar7;
  if (0.0 < fVar1) {
    if (*(int *)(in_ECX + 0x6c) == 0xe) {
      return;
    }
    if (*(int *)(in_ECX + 0x6c) == 0x10) {
      return;
    }
  }
  uVar8 = 1;
  (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(1);
  uVar8 = FUN_00470720(uVar8);
  cVar3 = FUN_0051ac80(uVar8);
  iVar6 = *(int *)(in_ECX + 0x8c);
  if (iVar6 == 0) {
    if (cVar3 != '\0') {
      return;
    }
    iVar6 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x5c) + 0x30))();
    if (iVar6 != 0) {
      return;
    }
    if (*(int *)(in_ECX + 0x70) == 0xd) goto LAB_0061d99f;
  }
  else {
    if (*(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0x104) <= *(float *)(in_ECX + 0x108)) {
      return;
    }
    if (cVar3 != '\0') {
      return;
    }
    if ((((fVar1 <= 0.0) || (iVar6 == *(int *)(in_ECX + 0x94))) ||
        (iVar6 == *(int *)(in_ECX + 0x98))) ||
       ((iVar6 == *(int *)(in_ECX + 0x9c) ||
        (fVar7 = (float10)FUN_00615980(), (float10)fVar1 <= fVar7)))) {
      cVar3 = FUN_00617340(*(undefined4 *)(in_ECX + 0x8c),0);
      *(undefined1 *)(in_ECX + 0x1ad) = 0;
      if (cVar3 == '\0') {
        return;
      }
    }
    else {
      *(undefined1 *)(in_ECX + 0x1ad) = 1;
    }
    uVar8 = *(undefined4 *)(in_ECX + 0x44);
    puVar5 = (undefined4 *)FUN_00403c00();
    uVar2 = *puVar5;
    *(undefined4 *)(in_ECX + 0x134) = uVar8;
    *(undefined4 *)(in_ECX + 0x138) = uVar2;
    *(undefined4 *)(in_ECX + 0x13c) = 0xbf800000;
    uVar8 = *(undefined4 *)(in_ECX + 0x44);
    puVar5 = (undefined4 *)FUN_00403c00();
    uVar2 = *puVar5;
    *(undefined4 *)(in_ECX + 0x104) = uVar8;
    *(undefined4 *)(in_ECX + 0x108) = uVar2;
    *(undefined4 *)(in_ECX + 0x10c) = 0xbf800000;
    *(undefined4 *)(in_ECX + 0x8c) = 0;
    if (*(int *)(in_ECX + 0x70) == 0xd) {
      *(undefined4 *)(in_ECX + 0x70) = 0xd;
      FUN_00619920(0);
      return;
    }
  }
  *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
LAB_0061d99f:
  *(undefined4 *)(in_ECX + 0x70) = 0xd;
  FUN_00619920(0);
  return;
}



undefined4 FUN_0061d9b0(undefined4 *param_1)

{
  char cVar1;
  int in_ECX;
  
  if (param_1 != (undefined4 *)0x0) {
    cVar1 = FUN_00419cf0();
    if (cVar1 != '\0') {
      cVar1 = FUN_006a1df0(*param_1);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x5c) + 0x1c))(*param_1,0,0,0);
        if (cVar1 != '\0') {
          FUN_0061d6b0(param_1);
          return 1;
        }
      }
    }
  }
  return 0;
}



void FUN_0061da10(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  
  piVar3 = *(int **)(in_ECX + 0x40);
  if (piVar3 != (int *)0x0) {
    uVar6 = 0;
    do {
      if (*piVar3 != 0) {
        uVar6 = uVar6 + 1;
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    if (1 < uVar6) {
      uVar4 = FUN_006135f0();
      puVar1 = *(undefined4 **)(in_ECX + 0x40);
      if (puVar1 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)*puVar1;
        while (puVar2 != (undefined4 *)0x0) {
          FUN_006162d0(*puVar2);
          puVar2 = (undefined4 *)*puVar1;
        }
      }
      FUN_00616190(uVar4,0,0,0,0);
    }
  }
  if ((*(int *)(in_ECX + 0x6c) == 7) &&
     (iVar5 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x174))(), iVar5 != in_ECX))
  {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x178))(0);
  }
  if (*(int *)(in_ECX + 0x70) != 5) {
    if (DAT_00b3b908 != '\0') {
      uVar4 = FUN_004da2a0("attempt to Yield");
      FUN_00579b60("%.20s is going to %s!",uVar4);
    }
    *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
  }
  *(undefined4 *)(in_ECX + 0x70) = 5;
  FUN_00619920(0);
  FUN_00619640();
  return;
}



char FUN_0061db00(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  char cVar7;
  
  cVar7 = '\0';
  if (param_1 == 0) {
    puVar2 = *(undefined4 **)(in_ECX + 0x40);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar2;
      while (puVar3 != (undefined4 *)0x0) {
        FUN_006162d0(*puVar3);
        puVar3 = (undefined4 *)*puVar2;
      }
    }
LAB_0061db52:
    cVar7 = '\x01';
  }
  else {
    FUN_005eff30(param_1);
    FUN_006162d0(param_1);
    piVar1 = *(int **)(in_ECX + 0x40);
    if ((piVar1 == (int *)0x0) || ((piVar1[1] == 0 && (*piVar1 == 0)))) goto LAB_0061db52;
  }
  iVar5 = *(int *)(in_ECX + 0x6c);
  if ((iVar5 == 2) || (iVar5 == 3)) {
    FUN_006160b0();
  }
  else {
    if (iVar5 != 7) {
      if (iVar5 == 4) {
        FUN_00619920(0);
        FUN_00612da0(9);
      }
      goto LAB_0061dbd7;
    }
    piVar1 = *(int **)(*(int *)(in_ECX + 0x3c) + 0x58);
    iVar5 = (**(code **)(*piVar1 + 0x174))();
    if ((iVar5 != 0) && (iVar5 = (**(code **)(*piVar1 + 0x174))(), *(char *)(iVar5 + 0x20) != '\f'))
    {
      (**(code **)(*piVar1 + 0x178))(0);
    }
  }
  if (*(int *)(in_ECX + 0x70) != 0xd) {
    *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
  }
  *(undefined4 *)(in_ECX + 0x70) = 0xd;
LAB_0061dbd7:
  cVar4 = FUN_005e5670();
  if (cVar4 != '\0') {
    FUN_005f4ae0(0);
  }
  if (cVar7 == '\0') {
    iVar5 = FUN_006135f0();
    if (iVar5 != 0) {
      if ((*(char *)(in_ECX + 0x114) != '\0') &&
         (((iVar5 = *(int *)(in_ECX + 0x70), iVar5 == 0 || (iVar5 == 1)) || (iVar5 == 3)))) {
        *(undefined1 *)(in_ECX + 0x114) = 0;
      }
      uVar6 = FUN_006135f0();
      FUN_00569ec0(uVar6);
      if (*(int *)(in_ECX + 0x70) != 0xd) {
        *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
      }
      *(undefined4 *)(in_ECX + 0x70) = 0xd;
      if (DAT_00b3b908 != '\0') {
        FUN_006135f0();
        uVar6 = FUN_004da2a0();
        uVar6 = FUN_004da2a0(uVar6);
        FUN_00579b60("%.20s is now fighting %s!",uVar6);
      }
    }
  }
  else {
    iVar5 = 0;
    do {
      if ((&DAT_00b15198)[iVar5] == 0x2c) break;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    if (iVar5 < 2) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x17c))(iVar5);
    }
    if (((*(int **)(in_ECX + 0x9c) != (int *)0x0) && (**(int **)(in_ECX + 0x9c) != 0)) &&
       (cVar4 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x198))(0), cVar4 == '\0')) {
      FUN_006a1f70(**(undefined4 **)(in_ECX + 0x9c),0,0);
      return cVar7;
    }
  }
  return cVar7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061dd10(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0x44);
  *(undefined4 *)(in_ECX + 0xd8) = 0x3f000000;
  *(undefined4 *)(in_ECX + 0xdc) = 0xbf800000;
  iVar1 = *(int *)(in_ECX + 0x6c);
  if (iVar1 != 0xd) {
    if (iVar1 == 4) {
      *(undefined4 *)(in_ECX + 0xcc) = 0xbf800000;
    }
    if (iVar1 == 6) {
      *(undefined4 *)(in_ECX + 300) = 0;
    }
    uVar2 = _DAT_00b36f70;
    if (iVar1 == 4) {
      *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(in_ECX + 0x44);
      *(undefined4 *)(in_ECX + 0xf0) = uVar2;
      *(undefined4 *)(in_ECX + 0xf4) = 0xbf800000;
    }
    iVar1 = *(int *)(in_ECX + 0x6c);
    if ((((iVar1 != 4) && (iVar1 != 7)) && (iVar1 != 9)) && (iVar1 != 8)) {
      *(undefined4 *)(in_ECX + 0x6c) = 0xd;
      if (iVar1 == 0xc) {
        return;
      }
      *(undefined1 *)(in_ECX + 0x191) = 1;
      return;
    }
  }
  *(undefined4 *)(in_ECX + 0x6c) = 0xd;
  return;
}



void FUN_0061ddc0(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x6c) == 0xd) &&
     (*(float *)(in_ECX + 0xd8) < *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0xd4))) {
    FUN_00619920(0);
  }
  return;
}



float10 FUN_0061ddf0(int *param_1,float *param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  *param_3 = 0;
  if (((param_1 == (int *)0x0) || (param_2 == (float *)0x0)) ||
     (iVar3 = (**(code **)(*param_1 + 0x330))(), iVar3 == 0)) {
    return (float10)0;
  }
  bVar1 = false;
  iVar3 = (**(code **)(*(int *)param_1[0x16] + 0xf4))(1);
  cVar2 = (**(code **)(*(int *)param_1[0x16] + 0x13c))();
  if (cVar2 == '\0') {
    iVar4 = 0;
  }
  else {
    iVar4 = (**(code **)(*(int *)param_1[0x16] + 0xec))(1);
  }
  (**(code **)(*param_1 + 0x330))();
  iVar5 = (**(code **)(*param_1 + 0x330))();
  if ((*(int *)(iVar5 + 0x70) != 2) && (*(int *)(iVar5 + 0x70) != 4)) {
LAB_0061dff8:
    pfVar6 = (float *)(**(code **)(*param_1 + 0x174))();
    pfVar7 = (float *)(**(code **)(*param_1 + 0x174))();
    fStack_c = pfVar7[1] - pfVar6[1];
    fStack_8 = pfVar7[2] - pfVar6[2];
    fStack_10 = *pfVar7 - *pfVar6;
    FUN_0043f350();
    fVar8 = (float10)FUN_00683cb0(&fStack_10);
    fVar9 = (float10)(**(code **)(*param_1 + 0x1e0))();
    fVar8 = (float10)(float)((float10)(float)fVar8 - fVar9);
    if (fVar8 != (float10)0) {
      if ((float10)0 <= fVar8) {
        if ((float10)3.1415927410125732 < fVar8) {
          return (float10)(float)((float10)6.2831854820251465 - fVar8);
        }
      }
      else if (fVar8 < (float10)-3.1415927410125732 != (fVar8 == (float10)-3.1415927410125732)) {
        return (float10)(float)(fVar8 + (float10)6.2831854820251465);
      }
    }
    return fVar8;
  }
  fVar11 = 0.0;
  iVar5 = (**(code **)(*param_1 + 0x330))();
  if (*(int *)(iVar5 + 0x70) == 4) {
    iVar5 = (**(code **)(*param_1 + 0x330))();
    if ((*(int *)(iVar5 + 0x80) == 0) || (iVar5 = FUN_00419b30(2), iVar5 == 0)) {
      fVar11 = 1.0;
    }
    else {
      fVar11 = *(float *)(iVar5 + 0x74);
    }
    pfVar6 = (float *)FUN_00403c00();
    fVar11 = fVar11 * *pfVar6;
    bVar1 = true;
  }
  fVar10 = 0.0;
  if ((iVar4 == 0) || (*(int *)(iVar4 + 8) == 0)) {
    if ((iVar3 == 0) || (*(int *)(iVar3 + 8) == 0)) {
      if (!bVar1) goto LAB_0061dff8;
    }
    else {
      iVar3 = FUN_009832e6(*(int *)(iVar3 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b05dc8,0);
      if (iVar3 == 0) {
        fVar11 = 1.0;
      }
      else {
        fVar11 = *(float *)(iVar3 + 0x7c);
      }
      pfVar6 = (float *)FUN_00403c00();
      fVar11 = *pfVar6 * fVar11;
      fVar8 = (float10)FUN_00608280(param_1);
      fVar10 = (float)fVar8;
    }
  }
  else {
    iVar3 = FUN_009832e6(*(int *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 4);
    }
    if ((iVar3 == 0) || (iVar3 = FUN_00419b30(2), iVar3 == 0)) {
      fVar11 = 1.0;
    }
    else {
      fVar11 = *(float *)(iVar3 + 0x74);
    }
    pfVar6 = (float *)FUN_00403c00();
    fVar11 = fVar11 * *pfVar6;
    fVar10 = 0.0;
  }
  FUN_006199f0(&fStack_10,param_1,param_1,fVar11,fVar10,param_3);
  *param_2 = fStack_10;
  return (float10)fStack_8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0061e0f0(float param_1,float param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  float10 fVar12;
  int local_2c;
  int local_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int aiStack_14 [5];
  
  bVar2 = false;
  local_28 = 0xff;
  local_2c = 0xff;
  iVar10 = 0;
  cVar3 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x25c))();
  if (cVar3 != '\0') {
    return 0xff;
  }
  if ((*(char *)(in_ECX + 0xc4) != '\0') && (cVar3 = FUN_00613440(param_1,param_2,0), cVar3 == '\0')
     ) {
    piVar5 = (int *)FUN_005e0f50();
    fVar12 = (float10)(**(code **)(*piVar5 + 0x164))();
    iVar8 = 0;
    pfVar9 = (float *)(in_ECX + 0xb0);
    do {
      if (0.0 < *pfVar9) {
        fStack_24 = *pfVar9;
      }
      else {
        fStack_24 = param_2;
      }
      if (param_1 <= fStack_24 * (float)fVar12) {
        aiStack_14[iVar10] = iVar8 + 0x16;
        iVar10 = iVar10 + 1;
      }
      iVar8 = iVar8 + 1;
      pfVar9 = pfVar9 + 1;
    } while (iVar8 < 5);
    if ((iVar10 == 0) && (param_5 != '\0')) {
      return 0xff;
    }
    if (iVar10 < 5) {
      piVar5 = aiStack_14 + iVar10;
      for (iVar8 = 5 - iVar10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar5 = 0xff;
        piVar5 = piVar5 + 1;
      }
    }
    iVar8 = aiStack_14[0];
    if (iVar10 == 1) {
LAB_0061e245:
      local_2c = iVar8;
      if (iVar8 != 0xff) goto LAB_0061e4a5;
    }
    else if (1 < iVar10) {
      piVar5 = (int *)FUN_005e0f50();
      cVar3 = (**(code **)(*piVar5 + 0x16c))(2);
      if (cVar3 == '\0') {
        iVar8 = FUN_0047df80(0);
        iVar8 = aiStack_14[iVar8 % iVar10];
        goto LAB_0061e245;
      }
      bVar2 = true;
    }
  }
  piVar5 = (int *)FUN_005e0f50();
  cVar3 = (**(code **)(*piVar5 + 0x16c))(2);
  if (cVar3 == '\0') {
    if (_DAT_00b36f18 <= param_1) {
      if (param_1 <= param_2 * 1.25) {
        uVar11 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c0))();
        if ((uVar11 & 4) == 0) {
          uVar11 = (uVar11 & 0xff) >> 1 & 4;
        }
        else {
          uVar11 = 3;
        }
      }
      else {
        uVar11 = 1;
      }
    }
    else {
      uVar11 = 2;
    }
    cVar3 = FUN_00613440(param_1,param_2,0);
    if (cVar3 != '\0') {
      local_2c = *(int *)(uVar11 * 4 + 0xb14b78);
    }
  }
  else {
    bVar1 = false;
    _param_5 = 0;
    iVar10 = FUN_0047df80(0);
    iVar10 = iVar10 % 100;
    if ((bVar2) && (aiStack_14[0] == 0x16)) {
      bVar1 = true;
    }
    piVar5 = (int *)FUN_005e0f50();
    cVar3 = (**(code **)(*piVar5 + 0x128))();
    if (cVar3 < iVar10) {
      if (bVar1) {
        _param_5 = 1;
      }
    }
    else if ((!bVar2) || (bVar1)) {
      local_2c = 0x16;
      goto LAB_0061e4a5;
    }
    bVar1 = false;
    if ((bVar2) && (aiStack_14[_param_5] == 0x17)) {
      bVar1 = true;
    }
    piVar5 = (int *)FUN_005e0f50();
    cVar4 = (**(code **)(*piVar5 + 300))();
    iVar8 = (int)cVar3 + (int)cVar4;
    if (iVar8 < iVar10) {
      if (bVar1) {
        _param_5 = _param_5 + 1;
      }
    }
    else if ((!bVar2) || (bVar1)) {
      local_2c = 0x17;
      goto LAB_0061e4a5;
    }
    bVar1 = false;
    if ((bVar2) && (aiStack_14[_param_5] == 0x18)) {
      bVar1 = true;
    }
    piVar5 = (int *)FUN_005e0f50();
    cVar3 = (**(code **)(*piVar5 + 0x130))();
    iVar8 = iVar8 + cVar3;
    if (iVar8 < iVar10) {
      if (bVar1) {
        _param_5 = _param_5 + 1;
      }
    }
    else if ((!bVar2) || (bVar1)) {
      local_2c = 0x18;
      goto LAB_0061e4a5;
    }
    bVar1 = false;
    if ((bVar2) && (aiStack_14[_param_5] == 0x19)) {
      bVar1 = true;
    }
    piVar5 = (int *)FUN_005e0f50();
    cVar3 = (**(code **)(*piVar5 + 0x134))();
    iVar8 = iVar8 + cVar3;
    if (iVar8 < iVar10) {
      if (bVar1) {
        _param_5 = _param_5 + 1;
      }
    }
    else if ((!bVar2) || (bVar1)) {
      local_2c = 0x19;
      goto LAB_0061e4a5;
    }
    bVar1 = false;
    if ((bVar2) && (aiStack_14[_param_5] == 0x1a)) {
      bVar1 = true;
    }
    piVar5 = (int *)FUN_005e0f50();
    cVar3 = (**(code **)(*piVar5 + 0x138))();
    if ((iVar10 <= cVar3 + iVar8) && ((!bVar2 || (bVar1)))) {
      local_2c = 0x1a;
    }
  }
LAB_0061e4a5:
  uStack_20 = DAT_00b3f9a8;
  uStack_1c = DAT_00b3f9ac;
  uStack_18 = DAT_00b3f9b0;
  cVar3 = FUN_00615f70(*(undefined4 *)(in_ECX + 0x3c),local_2c,&uStack_20);
  if (cVar3 != '\0') {
    piVar5 = *(int **)(in_ECX + 0x3c);
    iVar10 = (**(code **)(*piVar5 + 0x154))();
    FUN_00710250(aiStack_14,&uStack_20,iVar10 + 0x30);
    (**(code **)(*piVar5 + 0x174))();
    local_28 = local_2c;
  }
  if ((DAT_00b3b908 != '\0') && (cVar3 != '\0')) {
    if (local_28 == 0x16) {
      pcVar6 = "NORMAL";
    }
    else if (local_28 == 0x17) {
      pcVar6 = "FORWARD";
    }
    else if (local_28 == 0x18) {
      pcVar6 = "BACKWARD";
    }
    else if (local_28 == 0x19) {
      pcVar6 = "LEFT";
    }
    else {
      pcVar6 = "RIGHT";
      if (local_28 != 0x1a) {
        pcVar6 = "NO";
      }
    }
    uVar7 = FUN_004da2a0(pcVar6);
    FUN_00579b60("%.20s selects %s power attack!",uVar7);
    return local_28;
  }
  return local_28;
}



void FUN_0061e5a0(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  ulonglong uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  float *pfVar11;
  int in_ECX;
  undefined4 unaff_EDI;
  float10 fVar12;
  undefined4 uVar13;
  ulonglong uStack_18;
  undefined4 uStack_14;
  float fStack_8;
  
  uVar2 = uStack_18;
  uStack_18 = uStack_18 & 0xffffffff00000000;
  if (*(int *)(in_ECX + 0x74) != 3) {
    return;
  }
  iVar6 = FUN_006135f0();
  if (iVar6 == 0) {
    return;
  }
  if (*(char *)(in_ECX + 0xc4) == '\0') {
    return;
  }
  if (*(int *)(in_ECX + 0x70) == 2) {
    return;
  }
  if (*(int *)(in_ECX + 0x70) == 4) {
    return;
  }
  cVar3 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x25c))();
  if (cVar3 != '\0') {
    return;
  }
  cVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2dc))();
  if (cVar3 == '\0') {
    return;
  }
  iVar6 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))();
  if (iVar6 != 0) {
    uVar13 = 3;
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(3);
    uVar13 = FUN_00470720(uVar13);
    cVar3 = FUN_0051acc0(uVar13);
    if (cVar3 != '\0') {
      return;
    }
  }
  cVar3 = FUN_004d7f80();
  if ((cVar3 != '\0') && (cVar3 = FUN_005e0530(), cVar3 != '\0')) {
    return;
  }
  if (*(char *)(in_ECX + 0x158) == '\0') {
    return;
  }
  uVar13 = *(undefined4 *)(in_ECX + 0x3c);
  uVar7 = FUN_006135f0(0);
  cVar3 = FUN_006131d0(uVar13,uVar7);
  if (cVar3 == '\0') {
    return;
  }
  FUN_006135f0();
  uVar4 = FUN_005e5640();
  FUN_006135f0();
  iVar6 = FUN_005e0ee0();
  FUN_006135f0();
  iVar8 = FUN_005e0ee0();
  if (iVar8 != 7) {
    FUN_006135f0();
    iVar8 = FUN_005e0ee0();
    uStack_18 = uVar2 & 0xffffff0000000000;
    if (iVar8 != 8) goto LAB_0061e6e6;
  }
  uStack_18 = CONCAT35(uStack_14._1_3_,0x100000000);
LAB_0061e6e6:
  FUN_006135f0();
  uVar5 = FUN_005e5670();
  fStack_8 = (float)CONCAT31(fStack_8._1_3_,uVar5);
  iVar6 = FUN_0061e0f0(param_1,param_2,uVar4,iVar6 == 3,1);
  if ((iVar6 != 0xff) && (cVar3 = FUN_006134c0(iVar6), cVar3 != '\0')) {
    iVar6 = FUN_0047df80(0);
    piVar9 = (int *)FUN_005e0f50();
    cVar3 = (**(code **)(*piVar9 + 0x160))();
    if (iVar6 % 100 < (int)cVar3) {
      piVar10 = (int *)FUN_006135f0();
      piVar9 = *(int **)(in_ECX + 0x3c);
      iVar6 = *(int *)(in_ECX + 0x70);
      uVar13 = (**(code **)(*piVar10 + 0x19c))(fStack_8);
      uVar13 = (**(code **)(*piVar9 + 0x284))(7,uVar4,iVar6 == 0,uStack_14,uVar13);
      uVar13 = FUN_00613780(uVar13);
      uVar13 = FUN_005e0f50(uVar13);
      FUN_00546800(uVar13);
      piVar9 = *(int **)(in_ECX + 0x3c);
      iVar6 = (**(code **)(*(int *)piVar9[0x16] + 0xf8))(1,uVar4);
      uVar13 = (**(code **)(*piVar9 + 0x284))(7,iVar6 != 0);
      uVar13 = (**(code **)(*piVar9 + 0x284))(0xf,uVar13);
      uVar13 = FUN_005e0f50(uVar13);
      fVar12 = (float10)FUN_00546d40(uVar13);
      fVar1 = 100.0 - ((float)fVar12 + fStack_8);
      pfVar11 = (float *)FUN_00403c00();
      if (fVar1 <= *pfVar11) {
        pfVar11 = (float *)FUN_00403c00();
        fVar1 = *pfVar11;
      }
      if (((float)fVar12 < fStack_8) && (fVar1 < fStack_8)) {
        FUN_00612bd0(unaff_EDI,0);
        FUN_00619920(0);
        return;
      }
    }
  }
  return;
}



void FUN_0061e8a0(void)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int in_ECX;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float fStack_10;
  undefined4 uStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  piVar3 = (int *)FUN_005e0f50();
  cVar1 = (**(code **)(*piVar3 + 0x11c))();
  *(undefined1 *)(in_ECX + 0xc4) = 0;
  iVar5 = 0;
  pfVar4 = (float *)(in_ECX + 0xb0);
  do {
    fStack_10 = 0.0;
    uStack_c = DAT_00b3f9a8;
    uStack_4 = DAT_00b3f9b0;
    fStack_8 = DAT_00b3f9ac;
    cVar2 = FUN_00615f70(*(undefined4 *)(in_ECX + 0x3c),iVar5 + 0x16,&uStack_c);
    if (cVar2 != '\0') {
      fStack_10 = fStack_8;
    }
    if (((double)(int)cVar1 <= 0.0) || (fStack_10 <= 0.0)) {
      *pfVar4 = 0.0;
    }
    else {
      fVar6 = (float10)(**(code **)(**(int **)(in_ECX + 0x3c) + 0xec))();
      *pfVar4 = (float)(fVar6 * (float10)fStack_10);
      *(undefined1 *)(in_ECX + 0xc4) = 1;
    }
    iVar5 = iVar5 + 1;
    pfVar4 = pfVar4 + 1;
  } while (iVar5 < 5);
  return;
}



void FUN_0061e980(int param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  bool bVar8;
  
  bVar3 = false;
  if (param_1 == 0) {
    param_1 = FUN_006135f0();
    if (param_1 == 0) {
      return;
    }
  }
  else {
    bVar3 = true;
  }
  uVar6 = FUN_006135f0();
  iVar7 = FUN_00613640(uVar6);
  if (*(char *)(iVar7 + 8) == '\0') {
    piVar1 = *(int **)(in_ECX + 0x40);
    while (piVar4 = piVar1, param_1 != 0) {
      piVar1 = *(int **)(in_ECX + 0x40);
      iVar7 = 0;
      if ((piVar1 != (int *)0x0) && ((piVar1[1] != 0 || (*piVar1 != 0)))) {
        if ((int *)*piVar1 == (int *)0x0) {
          piVar2 = (int *)piVar1[1];
          if (piVar2 == (int *)0x0) {
            *piVar1 = 0;
          }
          else {
            piVar1[1] = piVar2[1];
            *piVar1 = *piVar2;
            FUN_00401f20(piVar2);
          }
          iVar7 = FUN_006135f0();
        }
        else {
          iVar7 = *(int *)*piVar1;
        }
      }
      if (param_1 == iVar7) {
        piVar1 = *(int **)(in_ECX + 0x40);
        if ((piVar1 != (int *)0x0) && ((piVar1[1] != 0 || (*piVar1 != 0)))) {
          if ((int *)*piVar1 == (int *)0x0) {
            piVar2 = (int *)piVar1[1];
            if (piVar2 == (int *)0x0) {
              *piVar1 = 0;
            }
            else {
              piVar1[1] = piVar2[1];
              *piVar1 = *piVar2;
              FUN_00401f20(piVar2);
            }
            iVar7 = FUN_006135f0();
          }
          else {
            iVar7 = *(int *)*piVar1;
          }
          if (iVar7 != 0) {
            FUN_006135f0();
            cVar5 = FUN_005e0530();
            if (((cVar5 != '\0') && (cVar5 = FUN_005e0530(), cVar5 == '\0')) &&
               (cVar5 = FUN_005e1cb0(), cVar5 == '\0')) {
              bVar8 = true;
              goto LAB_0061eaa5;
            }
          }
        }
        bVar8 = *(char *)(in_ECX + 0x174) == '\0';
      }
      else {
        bVar8 = false;
      }
LAB_0061eaa5:
      FUN_00619d40(param_1,bVar8,0);
      if (bVar3) break;
      piVar1 = (int *)0x0;
      if (piVar4 != (int *)0x0) {
        piVar1 = (int *)piVar4[1];
        if ((piVar1 == (int *)0x0) || ((int *)*piVar1 == (int *)0x0)) break;
        param_1 = *(int *)*piVar1;
      }
    }
  }
  FUN_00619c90();
  return;
}



void FUN_0061eae0(int param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = FUN_006135f0();
  if (param_1 != iVar2) {
    FUN_00619d40(param_1,1,1);
    return;
  }
  iVar2 = FUN_006135f0();
  if (iVar2 != 0) {
    FUN_006135f0();
    cVar1 = FUN_005e0530();
    if (cVar1 != '\0') {
      cVar1 = FUN_005e0530();
      if (cVar1 == '\0') {
        cVar1 = FUN_005e1cb0();
        if (cVar1 == '\0') {
          FUN_00619d40(param_1,1,1);
          return;
        }
      }
    }
  }
  FUN_00619d40(param_1,*(char *)(in_ECX + 0x174) == '\0',1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061eb80(undefined4 param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  double dVar16;
  int local_110;
  float local_10c;
  float local_108;
  int local_104;
  double dStack_100;
  int *local_f8;
  int *local_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  char local_d8 [200];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c341b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_110;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffee0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar9 = *param_3;
  local_f8 = param_3;
  local_104 = *param_4;
  local_f4 = param_4;
  local_110 = iVar9;
  piVar5 = (int *)FUN_009832e6();
  _sprintf(local_d8,"COMBAT INFO: %d actors in combat with PC, %d in combat total");
  FUN_0057b8e0();
  local_10c = _DAT_00b3c0d0;
  iVar9 = iVar9 + param_2;
  local_108 = (float)iVar9;
  if (0.0 < _DAT_00b3c0d0) {
    local_10c = _DAT_00b380f8;
    if (DAT_00b333b8 != '\0') {
      local_10c = _DAT_00b38100;
    }
    local_110 = iVar9;
    _sprintf(local_d8,"Magic Projectile tracking value: %.2f/%.2f",(double)_DAT_00b3c0d0,
             (double)local_10c,uVar4);
    FUN_0057b8e0();
    iVar9 = iVar9 + param_2;
  }
  local_110 = iVar9;
  FUN_004da2a0((float)DAT_00b02e24,(float)iVar9,1,0xffffffff);
  FUN_0057b8e0();
  iVar9 = iVar9 + param_2;
  local_110 = iVar9;
  if (piVar5 == (int *)0x0) {
    FUN_0057b8e0();
    local_110 = iVar9 + param_2;
  }
  else if (piVar5 == DAT_00b333c4) {
    FUN_0057b8e0();
    local_108 = (float)DAT_00b333c4[400];
    local_110 = iVar9 + param_2;
    _sprintf(local_d8,"Bow Timer: %.2f zoom timer: %.2f",(double)local_108,(double)_DAT_00b3bafc);
    FUN_0057b8e0();
    iVar10 = iVar9 + param_2 + param_2;
    local_110 = iVar10;
    fVar12 = (float10)FUN_005e3c80();
    fVar12 = (float10)FUN_005e3ad0((double)fVar12);
    fVar12 = (float10)FUN_005e3920((double)fVar12);
    fVar12 = (float10)FUN_005e3750((double)fVar12);
    fVar12 = (float10)FUN_005e3590((double)fVar12);
    _sprintf(local_d8,"SPEEDS: Walk: %.2f Run: %.2f Swim: %.2f SwimFast: %.2f Fly: %.2f",
             (double)fVar12);
    FUN_0057b8e0();
    iVar10 = iVar10 + param_2;
    local_10c = 0.0;
    local_110 = iVar10;
    iVar9 = FUN_0065d4a0();
    if (iVar9 != 0) {
      iVar9 = DAT_00b333c4[0x17];
      uVar14 = ZEXT48(&local_10c);
      uVar8 = 0;
      uVar6 = FUN_0065d4a0();
      cVar3 = (**(code **)(iVar9 + 0x1c))(uVar6,uVar8,uVar14);
      if (cVar3 == '\0') {
        uVar15 = CONCAT44(local_10c,&dStack_100);
        FUN_0065d4a0(&dStack_100,local_10c);
        FUN_0041a4b0(uVar15);
        uStack_4 = 0;
        FUN_0065d4a0();
        _sprintf(local_d8,"Selected Spell: %s Cannot Cast: %s");
        uStack_4 = 0xffffffff;
        FUN_00401f20(dStack_100._0_4_);
      }
      else {
        FUN_0065d4a0();
        _sprintf(local_d8,"Selected Spell: %s (can cast)");
      }
      FUN_0057b8e0();
      local_110 = iVar10 + param_2;
    }
    FUN_00673a50();
    piVar5 = (int *)FUN_007616d0();
    if (piVar5 != (int *)0x0) {
      if ((piVar5[1] != 0) || (*piVar5 != 0)) {
        FUN_0057b8e0();
        local_110 = local_110 + param_2;
      }
      do {
        if ((piVar5[1] == 0) && (*piVar5 == 0)) break;
        piVar7 = (int *)FUN_009832e6();
        piVar5 = (int *)piVar5[1];
        if (piVar7 != (int *)0x0) {
          iVar9 = (**(code **)(*piVar7 + 0x330))();
          if (iVar9 != 0) {
            piVar7 = *(int **)(iVar9 + 0x40);
            do {
              if ((piVar7 == (int *)0x0) || (((int *)piVar7[1] == (int *)0x0 && (*piVar7 == 0))))
              goto LAB_0061f045;
              piVar1 = (int *)*piVar7;
              piVar7 = (int *)piVar7[1];
            } while ((int *)*piVar1 != DAT_00b333c4);
            FUN_004da2a0((float)DAT_00b02e24,(float)local_110,1,0xffffffff);
            FUN_0057b8e0();
            local_110 = local_110 + param_2;
          }
LAB_0061f045:
          iVar9 = FUN_00420ef0();
          if (iVar9 != 0) {
            for (piVar7 = *(int **)(iVar9 + 0xc);
                (piVar7 != (int *)0x0 && (piVar1 = (int *)*piVar7, piVar1 != (int *)0x0));
                piVar7 = (int *)piVar7[1]) {
              if ((piVar1[0x16] != 0) &&
                 ((iVar9 = (**(code **)(*piVar1 + 0x330))(), iVar9 != 0 &&
                  (cVar3 = FUN_00613670(), cVar3 != '\0')))) {
                FUN_004da2a0((float)DAT_00b02e24,(float)local_110,1,0xffffffff);
                FUN_0057b8e0();
                local_110 = local_110 + param_2;
              }
            }
          }
        }
      } while (piVar5 != (int *)0x0);
    }
    FUN_00673a50();
    piVar5 = (int *)FUN_007616d0();
    if (piVar5 != (int *)0x0) {
      if ((piVar5[1] != 0) || (*piVar5 != 0)) {
        FUN_0057b8e0();
        local_110 = local_110 + param_2;
      }
      do {
        if ((piVar5[1] == 0) && (*piVar5 == 0)) break;
        piVar7 = (int *)FUN_009832e6();
        piVar5 = (int *)piVar5[1];
        if (piVar7 != (int *)0x0) {
          iVar9 = (**(code **)(*piVar7 + 0x330))();
          if (iVar9 != 0) {
            piVar7 = *(int **)(iVar9 + 0x40);
            do {
              if ((piVar7 == (int *)0x0) || (((int *)piVar7[1] == (int *)0x0 && (*piVar7 == 0))))
              goto LAB_0061f1ac;
              piVar1 = (int *)*piVar7;
              piVar7 = (int *)piVar7[1];
            } while ((int *)*piVar1 != DAT_00b333c4);
            FUN_004da2a0((float)DAT_00b02e24,(float)local_110,1,0xffffffff);
            FUN_0057b8e0();
            local_110 = local_110 + param_2;
          }
LAB_0061f1ac:
          iVar9 = FUN_00420ef0();
          if (iVar9 != 0) {
            for (piVar7 = *(int **)(iVar9 + 0xc);
                (piVar7 != (int *)0x0 && (piVar1 = (int *)*piVar7, piVar1 != (int *)0x0));
                piVar7 = (int *)piVar7[1]) {
              if ((piVar1[0x16] != 0) &&
                 ((iVar9 = (**(code **)(*piVar1 + 0x330))(), iVar9 != 0 &&
                  (cVar3 = FUN_00613670(), cVar3 != '\0')))) {
                FUN_004da2a0((float)DAT_00b02e24,(float)local_110,1,0xffffffff);
                FUN_0057b8e0();
                local_110 = local_110 + param_2;
              }
            }
          }
        }
      } while (piVar5 != (int *)0x0);
    }
    FUN_00673a50();
    piVar5 = (int *)FUN_007616d0();
    if (piVar5 != (int *)0x0) {
      if ((piVar5[1] != 0) || (*piVar5 != 0)) {
        FUN_0057b8e0();
        local_110 = local_110 + param_2;
      }
      do {
        if ((piVar5[1] == 0) && (*piVar5 == 0)) break;
        piVar7 = (int *)FUN_009832e6();
        piVar5 = (int *)piVar5[1];
        if (piVar7 != (int *)0x0) {
          iVar9 = (**(code **)(*piVar7 + 0x330))();
          if (iVar9 != 0) {
            piVar7 = *(int **)(iVar9 + 0x40);
            do {
              if ((piVar7 == (int *)0x0) || (((int *)piVar7[1] == (int *)0x0 && (*piVar7 == 0))))
              goto LAB_0061f315;
              piVar1 = (int *)*piVar7;
              piVar7 = (int *)piVar7[1];
            } while ((int *)*piVar1 != DAT_00b333c4);
            FUN_004da2a0((float)DAT_00b02e24,(float)local_110,1,0xffffffff);
            FUN_0057b8e0();
            local_110 = local_110 + param_2;
          }
LAB_0061f315:
          iVar9 = FUN_00420ef0();
          if (iVar9 != 0) {
            for (piVar7 = *(int **)(iVar9 + 0xc);
                (piVar7 != (int *)0x0 && (piVar1 = (int *)*piVar7, piVar1 != (int *)0x0));
                piVar7 = (int *)piVar7[1]) {
              if ((piVar1[0x16] != 0) &&
                 ((iVar9 = (**(code **)(*piVar1 + 0x330))(), iVar9 != 0 &&
                  (cVar3 = FUN_00613670(), cVar3 != '\0')))) {
                FUN_004da2a0((float)DAT_00b02e24,(float)local_110,1,0xffffffff);
                FUN_0057b8e0();
                local_110 = local_110 + param_2;
              }
            }
          }
        }
      } while (piVar5 != (int *)0x0);
    }
    FUN_00673a50();
    piVar5 = (int *)FUN_007616d0();
    if (piVar5 != (int *)0x0) {
      if ((piVar5[1] != 0) || (*piVar5 != 0)) {
        FUN_0057b8e0();
        local_110 = local_110 + param_2;
      }
      do {
        if ((piVar5[1] == 0) && (*piVar5 == 0)) break;
        piVar7 = (int *)FUN_009832e6();
        piVar5 = (int *)piVar5[1];
        if (piVar7 != (int *)0x0) {
          iVar9 = (**(code **)(*piVar7 + 0x330))();
          if (iVar9 != 0) {
            piVar7 = *(int **)(iVar9 + 0x40);
            do {
              if ((piVar7 == (int *)0x0) || (((int *)piVar7[1] == (int *)0x0 && (*piVar7 == 0))))
              goto LAB_0061f47c;
              piVar1 = (int *)*piVar7;
              piVar7 = (int *)piVar7[1];
            } while ((int *)*piVar1 != DAT_00b333c4);
            FUN_004da2a0((float)DAT_00b02e24,(float)local_110,1,0xffffffff);
            FUN_0057b8e0();
            local_110 = local_110 + param_2;
          }
LAB_0061f47c:
          iVar9 = FUN_00420ef0();
          if (iVar9 != 0) {
            for (piVar7 = *(int **)(iVar9 + 0xc);
                (piVar7 != (int *)0x0 && (piVar1 = (int *)*piVar7, piVar1 != (int *)0x0));
                piVar7 = (int *)piVar7[1]) {
              if ((piVar1[0x16] != 0) &&
                 ((iVar9 = (**(code **)(*piVar1 + 0x330))(), iVar9 != 0 &&
                  (cVar3 = FUN_00613670(), cVar3 != '\0')))) {
                FUN_004da2a0((float)DAT_00b02e24,(float)local_110,1,0xffffffff);
                FUN_0057b8e0();
                local_110 = local_110 + param_2;
              }
            }
          }
        }
      } while (piVar5 != (int *)0x0);
    }
  }
  else {
    cVar3 = (**(code **)(*piVar5 + 0x334))();
    if (cVar3 == '\0') {
      FUN_0057b8e0();
      local_110 = iVar9 + param_2;
    }
    else {
      iVar10 = (**(code **)(*piVar5 + 0x330))();
      if (iVar10 == 0) {
        FUN_0057b8e0();
        local_110 = iVar9 + param_2;
      }
      else {
        iVar9 = (**(code **)(*piVar5 + 0x330))();
        FUN_006135f0(1,param_2,&local_110,&local_104);
        FUN_0061a090(piVar5);
        iVar10 = FUN_006135f0();
        if (iVar10 == 0) {
          local_10c = (float)(0x500 - DAT_00b02e24);
          FUN_0057b8e0();
          local_110 = local_110 + param_2;
        }
        else {
          local_10c = (float)(0x500 - DAT_00b02e24);
          FUN_006135f0((float)(int)local_10c,(float)local_104,3,0xffffffff);
          FUN_004da2a0();
          FUN_0057b8e0();
          local_104 = local_104 + param_2;
          uVar15 = CONCAT44(&local_104,&local_110);
          lVar13 = (ulonglong)param_2 << 0x20;
          piVar7 = piVar5;
          uVar6 = FUN_006135f0();
          FUN_0061a090(uVar6,piVar7,lVar13,uVar15);
        }
        iVar10 = FUN_0052b4a0();
        if (iVar10 != 0) {
          FUN_0057b8e0();
          local_110 = local_110 + param_2;
          for (piVar7 = *(int **)(iVar9 + 0x40);
              (piVar7 != (int *)0x0 && ((piVar7[1] != 0 || (*piVar7 != 0))));
              piVar7 = (int *)piVar7[1]) {
            if (((int *)*piVar7 != (int *)0x0) && (*(int *)*piVar7 != 0)) {
              uVar6 = FUN_004da2a0();
              _sprintf(local_d8,"%s: %d",uVar6);
              FUN_0057b8e0();
              local_110 = local_110 + param_2;
            }
          }
        }
        puVar11 = (undefined4 *)(iVar9 + 0x15c);
        if (puVar11 != (undefined4 *)0x0) {
          local_10c = (float)DAT_00b02e24;
          dStack_100 = (double)CONCAT44(dStack_100._4_4_,local_10c);
          local_10c = ((float)(0x500 - DAT_00b02e24) - local_10c) * 0.5 + local_10c;
          FUN_0057b8e0();
          local_108 = (float)((int)local_108 + param_2);
          do {
            piVar7 = (int *)*puVar11;
            puVar11 = (undefined4 *)puVar11[1];
            if ((piVar7 != (int *)0x0) && (piVar7 != piVar5)) {
              iVar9 = (**(code **)(*piVar7 + 0x330))();
              if (iVar9 == 0) {
                fVar2 = 0.0;
              }
              else {
                iVar9 = (**(code **)(*piVar7 + 0x330))();
                fVar2 = *(float *)(iVar9 + 0xcc) * 57.295776;
              }
              dStack_100 = (double)fVar2;
              iVar9 = (**(code **)(*piVar7 + 0x170))();
              fVar2 = (float)dStack_100;
              uVar6 = *(undefined4 *)(iVar9 + 0xc);
              dStack_100 = (double)CONCAT44(dStack_100._4_4_,fVar2);
              dVar16 = (double)fVar2;
              uVar8 = FUN_004da2a0();
              _sprintf(local_d8,"%.20s: (%08X) pos %.2f",uVar8,uVar6,dVar16);
              FUN_0057b8e0();
              local_108 = (float)((int)local_108 + param_2);
            }
          } while (puVar11 != (undefined4 *)0x0);
        }
        (**(code **)(*piVar5 + 0x15c))();
        (**(code **)(*piVar5 + 0x158))(&fStack_e8);
        _sprintf(local_d8,"BOUNDS: (%.2f, %.2f, %.2f)-(%.2f, %.2f, %.2f)",(double)fStack_e4,
                 (double)fStack_e0,(double)fStack_dc,(double)fStack_f0,(double)fStack_ec,
                 (double)fStack_e8);
        FUN_0057b8e0();
        local_110 = local_110 + param_2;
      }
    }
  }
  *local_f8 = local_110;
  *local_f4 = local_104;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0061f8d0(byte param_1)

{
  FUN_0061c130();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0061f8f0(char param_1,undefined4 param_2,float param_3,undefined4 param_4,undefined4 param_5
                ,undefined4 param_6,char *param_7,undefined1 *param_8)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  float10 fVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  
  *param_8 = 0;
  iVar3 = FUN_006135f0();
  if (iVar3 == 0) {
    return 0xff;
  }
  cVar2 = FUN_004d7f80();
  if ((cVar2 == '\0') || (cVar2 = FUN_005e0530(), cVar2 == '\0')) {
    piVar1 = *(int **)(in_ECX + 0x3c);
    piVar4 = (int *)FUN_006135f0();
    uVar6 = (**(code **)(*piVar1 + 0x25c))();
    uVar6 = (**(code **)(*piVar4 + 0x19c))(uVar6);
    fVar5 = (float10)FUN_005f4880(param_6,uVar6);
    uVar6 = FUN_005e0f50((float)fVar5);
    cVar2 = FUN_00546930(uVar6);
    *param_7 = cVar2;
  }
  else {
    *param_7 = '\0';
  }
  if (*(int *)(in_ECX + 0x6c) == 4) {
    param_3 = _DAT_00b36f30 + param_3;
    iVar3 = FUN_0047df80(0);
    if (iVar3 % 100 < 2) {
      param_3 = param_3 + 100.0;
    }
  }
  cVar2 = FUN_00613440(param_2,param_3,0);
  if (param_1 == '\0') {
    if (*param_7 == '\0') {
      if (cVar2 == '\0') {
        return 0xff;
      }
      uVar8 = 0;
      uVar6 = 0;
      puVar7 = PTR_DAT_00b241c4;
      (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(0,PTR_DAT_00b241c4,0);
      cVar2 = FUN_004727e0(uVar6,puVar7,uVar8);
      return (cVar2 != 'l') + 0x14;
    }
  }
  else {
    uVar6 = 3;
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(3);
    iVar3 = FUN_00470750(uVar6);
    if (iVar3 != 2) {
      return 0xff;
    }
    if (*param_7 == '\0') {
      if (cVar2 == '\0') {
        return 0xff;
      }
      uVar8 = 0;
      puVar7 = &DAT_00a70ea4;
      uVar6 = 3;
      (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(3,&DAT_00a70ea4,0);
      iVar3 = FUN_00472720(uVar6,puVar7,uVar8);
      *param_8 = 1;
      return 0x15 - (uint)(iVar3 != -1);
    }
  }
  iVar3 = FUN_0061e0f0(param_2,param_3,param_4,param_5,0);
  return iVar3;
}



void FUN_0061fad0(void)

{
  float fVar1;
  undefined4 uVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  int in_ECX;
  float10 fVar9;
  float10 fVar10;
  float local_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (*(char *)(in_ECX + 0x17d) != '\0') {
    if ((*(int *)(in_ECX + 0x70) == 2) || (*(int *)(in_ECX + 0x70) == 4)) {
      uVar2 = *(undefined4 *)(in_ECX + 0x3c);
      uVar5 = FUN_006135f0(&local_10,*(undefined4 *)(in_ECX + 0x180));
      fVar9 = (float10)FUN_0061ddf0(uVar2,uVar5);
      fVar4 = ABS((float)fVar9 * 57.295776);
      local_10 = fVar4;
      fVar10 = (float10)(**(code **)(**(int **)(in_ECX + 0x3c) + 0x1e0))();
      fVar1 = (float)(fVar10 + (float10)(float)fVar9);
    }
    else {
      piVar3 = *(int **)(in_ECX + 0x3c);
      piVar6 = (int *)FUN_006135f0();
      pfVar7 = (float *)(**(code **)(*piVar3 + 0x174))();
      pfVar8 = (float *)(**(code **)(*piVar6 + 0x174))();
      local_10 = pfVar8[1] - pfVar7[1];
      fStack_4 = pfVar8[2] - pfVar7[2];
      fStack_c = *pfVar8 - *pfVar7;
      fStack_8 = local_10;
      fVar9 = (float10)FUN_00683cb0(&fStack_c);
      fVar1 = (float)fVar9;
      fVar9 = (float10)(**(code **)(**(int **)(in_ECX + 0x3c) + 0x1e0))();
      local_10 = ABS((float)(fVar9 - (float10)fVar1));
      fVar4 = local_10;
    }
    if (fVar4 <= 0.1) {
      FUN_00615050();
      return;
    }
    FUN_00685530(*(undefined4 *)(in_ECX + 0x3c),fVar1,1);
  }
  return;
}



void FUN_0061fc30(void)

{
  float fVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  int in_ECX;
  float10 fVar8;
  float10 extraout_ST0;
  undefined4 uVar9;
  float local_4;
  
  iVar5 = *(int *)(in_ECX + 0x6c);
  if ((((((iVar5 == 7) || (*(int *)(in_ECX + 0x70) == 7)) || (*(int *)(in_ECX + 0x70) == 0xc)) ||
       ((iVar5 == 8 || (iVar5 == 0xe)))) ||
      ((iVar5 == 0xc || ((iVar5 == 4 && (*(int *)(in_ECX + 0x74) != 0)))))) ||
     ((iVar5 = FUN_006135f0(), iVar5 == 0 || (*(int *)(in_ECX + 0x1a8) < DAT_00b372f0)))) {
    FUN_00615050();
    return;
  }
  if (*(char *)(in_ECX + 0x17d) != '\0') {
    FUN_0061fad0();
    return;
  }
  uVar9 = *(undefined4 *)(in_ECX + 0x3c);
  uVar6 = FUN_006135f0(&local_4,*(undefined4 *)(in_ECX + 0x180));
  fVar8 = (float10)FUN_0061ddf0(uVar9,uVar6);
  fVar1 = (float)fVar8;
  uVar9 = 3;
  (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(3);
  uVar9 = FUN_00470720(uVar9);
  cVar2 = FUN_0051ac80(uVar9);
  uVar9 = 3;
  (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(3);
  uVar9 = FUN_00470720(uVar9);
  cVar3 = FUN_0051acc0(uVar9);
  if ((((*(int *)(in_ECX + 0x6c) != 1) && (*(int *)(in_ECX + 0x6c) != 0)) &&
      (*(int *)(in_ECX + 0x70) != 6)) &&
     ((cVar4 = FUN_005e05b0(), cVar4 != '\0' || (cVar3 != '\0')))) {
    pfVar7 = (float *)FUN_00403c00();
    local_4 = ABS(fVar1 * 57.295776);
    if (((*pfVar7 < local_4 != (*pfVar7 == local_4)) &&
        ((cVar3 = FUN_00612690(*(undefined4 *)(in_ECX + 0x70)), cVar3 == '\0' && (cVar2 == '\0'))))
       && (cVar2 = FUN_00612cd0(), cVar2 == '\0')) {
      *(undefined1 *)(in_ECX + 0x17d) = 1;
      return;
    }
    cVar2 = FUN_00612690(*(undefined4 *)(in_ECX + 0x70));
    if ((cVar2 != '\0') && (local_4 = (float)ABS(extraout_ST0), 0.0 < local_4)) {
      iVar5 = **(int **)(in_ECX + 0x3c);
      fVar8 = (float10)(**(code **)(iVar5 + 0x1e0))();
      local_4 = (float)(fVar8 + (float10)fVar1);
      (**(code **)(iVar5 + 0x1e8))(local_4);
      return;
    }
    iVar5 = **(int **)(in_ECX + 0x3c);
    uVar9 = FUN_006135f0();
    (**(code **)(iVar5 + 0x1e4))(uVar9);
    return;
  }
  cVar2 = FUN_00612690(*(undefined4 *)(in_ECX + 0x70));
  if (cVar2 == '\0') {
    if (10.0 <= ABS(fVar1 * 57.295776)) {
      *(undefined1 *)(in_ECX + 0x17d) = 1;
    }
    return;
  }
  iVar5 = **(int **)(in_ECX + 0x3c);
  fVar8 = (float10)(**(code **)(iVar5 + 0x1e0))();
  local_4 = (float)(fVar8 + (float10)fVar1);
  (**(code **)(iVar5 + 0x1e8))(local_4);
  return;
}



void FUN_0061fe90(void)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_006150e0(0);
  if (cVar1 == '\0') {
    *(undefined1 *)(in_ECX + 0x17e) = 1;
    cVar1 = FUN_0061c6e0();
    if (cVar1 == '\0') {
      *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0x44);
      *(undefined4 *)(in_ECX + 0xd8) = 0x40400000;
      *(undefined4 *)(in_ECX + 0xdc) = 0xbf800000;
      FUN_00619920(10);
      FUN_006160b0();
      return;
    }
  }
  return;
}



void FUN_0061fef0(void)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_006150e0(0);
  if (cVar1 == '\0') {
    *(undefined1 *)(in_ECX + 0x17f) = 1;
    cVar1 = FUN_0061c6e0();
    if (cVar1 == '\0') {
      FUN_00619920(0xf);
      *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0x44);
      *(undefined4 *)(in_ECX + 0xd8) = 0x40400000;
      *(undefined4 *)(in_ECX + 0xdc) = 0xbf800000;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061ff40(void)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int in_ECX;
  
  uVar2 = _DAT_00b37288;
  if ((*(int *)(in_ECX + 0x70) != 8) &&
     (*(float *)(in_ECX + 0x138) < *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0x134))) {
    *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(in_ECX + 0x44);
    *(undefined4 *)(in_ECX + 0x138) = uVar2;
    *(undefined4 *)(in_ECX + 0x13c) = 0xbf800000;
    if ((((DAT_00b372b0 < *(int *)(in_ECX + 0x178)) ||
         ((cVar3 = FUN_005e0530(), cVar3 != '\0' ||
          (cVar3 = FUN_0061d9b0(*(undefined4 *)(in_ECX + 0x9c)), cVar3 == '\0')))) &&
        (cVar3 = FUN_0061d9b0(*(undefined4 *)(in_ECX + 0x94)), cVar3 == '\0')) &&
       (cVar3 = FUN_0061d9b0(*(undefined4 *)(in_ECX + 0x98)), cVar3 == '\0')) {
      if ((*(int *)(in_ECX + 0x90) == 0) && (*(int **)(in_ECX + 0x68) != (int *)0x0)) {
        iVar1 = **(int **)(in_ECX + 0x68);
        *(int *)(in_ECX + 0x90) = iVar1;
        if (iVar1 != 0) {
          FUN_0041a610(0);
        }
        FUN_0067f100();
        uVar2 = *(undefined4 *)(in_ECX + 0x68);
        cVar3 = FUN_0046cb60();
        if (cVar3 != '\0') {
          FUN_00401f20(uVar2);
          *(undefined4 *)(in_ECX + 0x68) = 0;
        }
      }
      FUN_0061d9b0(*(undefined4 *)(in_ECX + 0x90));
    }
  }
  return;
}


